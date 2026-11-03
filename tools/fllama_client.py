#!/usr/bin/env python3
"""
Shared fllama TCP test client library.

Prints all wire traffic live (flushed): "-> cmd" for sends, "<- msg"
for responses; messages past 83 chars truncate to first 60 + "..." + last 20.

Server log: /tmp/fllama.log (read-only for tests — never truncated).
"""

import socket
import sys
import time

LOG = "/tmp/fllama.log"
MODEL = "Qwen3.5-2B-Q4_K_M.gguf"

# info stream for say()/show_wire(): default stdout; scripts that must keep
# stdout clean (e.g. test_generate.py) set this to sys.stderr on import.
INFO_STREAM = sys.stdout


def say(msg):
    print(msg, flush=True, file=INFO_STREAM)


def show_wire(msg, incoming=False):
    """Print one wire message with clock timestamp (ms resolution)."""
    arrow = "<-" if incoming else "->"
    ts = time.strftime("%H:%M:%S") + f".{int(time.time()*1000)%1000:03d}"
    if len(msg) > 83:
        display = msg[:60] + "..." + msg[-20:]
    else:
        display = msg
    say(f"{ts} {arrow} {display}")


def truncate_log():
    """Clear the server log so this test's lines are unambiguous.

    The server keeps its write offset, so pad afterwards to let it
    overwrite padding bytes instead of leaving a sparse file.
    """
    with open(LOG, "a+") as fh:
        fh.seek(0)
        fh.truncate()
        fh.write("\n" * 64)


def log_lines():
    with open(LOG, "rb") as fh:
        return fh.read().replace(b"\x00", b" ").decode(errors="replace").splitlines()


def wait_for_line(fragment, timeout=90):
    """Wait until a line containing fragment appears in the server log."""
    deadline = time.time() + timeout
    while time.time() < deadline:
        if any(fragment in l for l in log_lines()):
            return True
        time.sleep(1.0)
    raise RuntimeError(f"log line not found within {timeout}s: {fragment!r}")


def read_drafts(server_seq_idx, n=3):
    """Draft tokens from the newest 'generating N draft' line for this seq."""
    tag = f"generating {n} draft tokens for server sequence {server_seq_idx} "
    for line in reversed(log_lines()):
        if tag in line:
            return [int(t) for t in line.rsplit(":", 1)[1].split()]
    raise RuntimeError(f"no draft line for server sequence {server_seq_idx}")


def setup(f, model=MODEL):
    """Load model + its pieces, then tokenize the standard test prompt.

    use_model is SILENT on success; get_pieces follows immediately (no
    sequences/evaluations exist yet, so no async messages can obscure the
    reply) and carries the model-load timeout. First reply after
    use_model is pieces-or-error. The server has one model per session,
    so pieces stay valid for this connection.
    """
    f.send(f"use_model {model}")
    f.pieces(30)
    f.send("tokenize What is 2+2?")
    r = f.read(30)
    assert r and r.startswith("tokens "), f"tokenize: {r!r}"
    return [int(t) for t in r.split()[2:]]


def eval_prompt(f, seq_id, tokens, timeout=2):
    """Create sequence with tokens, evaluate; return (pos, top1, conf)."""
    f.send(f"create_sequence {seq_id}")
    # no read: silent on success; any error surfaces in read_next
    f.add(seq_id, tokens)
    f.send(f"evaluate {seq_id}")
    msg = f.read_next(seq_id, timeout)
    pos, conf = Fllama.top10(msg)
    return pos, max(conf, key=conf.get), conf


class Fllama:
    def __init__(self, host="127.0.0.1", port=7683):
        self.sock = socket.create_connection((host, port), timeout=5)
        self.rbuf = b""
        self._pieces = None
        # per-sequence protocol error detection: track the latest pos sent
        # by the server in its messages, and the total tokens the client has
        # sent (its implicit position). A message at pos > last + 1 where
        # last = max of both = a skipped position.
        self._server_pos_by_seq = {}
        self._client_tokens_by_seq = {}

    def _note_server_message(self, seq_id, pos):
        # Store after validation (callers do this) so the tracker
        # reflects only validly-received positions
        if pos > self._server_pos_by_seq.get(seq_id, -1):
            self._server_pos_by_seq[seq_id] = pos

    def _check_pos_skip(self, kind, seq_id, pos):
        server_last = self._server_pos_by_seq.get(seq_id, -1)
        client_last = self._client_tokens_by_seq.get(seq_id, 0) - 1
        last = max(server_last, client_last)
        if pos > last + 1:
            print(f"ERROR: skipped position in {kind} message "
                  f"for seq {seq_id}: got pos {pos}, expected <= "
                  f"{last + 1}", flush=True, file=sys.stderr)

    def pieces(self, timeout: float = 30):
        """Vocabulary pieces {token_id: text}; fetched once per connection.

        Called right after use_model (setup): one model per server session,
        and with no sequences/evaluations in flight the reply cannot be
        obscured by async messages — same guarantee covers the lazy path.
        timeout must cover the model load when called right after use_model
        (setup passes 30).

        get_pieces format: 'pieces N <h0> <h1> ...' where <hi> is the
        hex byte string for token i (empty for special tokens).
        split(' ') is used so empty fields keep their position,
        preserving alignment with token ids.
        """
        if self._pieces is None:
            self.send("get_pieces")
            r = self.read(timeout)
            if not (r and r.startswith("pieces ")):
                raise RuntimeError(f"get_pieces failed: {r!r}")
            parts = r.split(" ")
            toks = parts[2:]
            declared = int(parts[1])
            if len(toks) != declared:
                raise RuntimeError(
                    f"pieces count mismatch: declared {declared}, "
                    f"got {len(toks)}")
            self._pieces = {}
            for i, h in enumerate(toks):
                # server markers: "--" = zero-length piece (control token),
                # "??" = server-side error (e.g. piece over the buffer limit)
                if h == "--":
                    text = ""
                elif h == "??":
                    text = "<error>"
                else:
                    text = bytes.fromhex(h).decode("utf-8", errors="replace")
                self._pieces[i] = text
        return self._pieces

    def top1_text(self, msg):
        """Decoded text of the top token in a logits/lookahead message."""
        _, conf = Fllama.top10(msg)
        tok = max(conf, key=conf.get)
        text = self.pieces().get(tok, "?")
        # double quotes; only newlines escaped (they would break the line)
        return '"' + text.replace("\n", "\\n") + '"'

    def send(self, cmd):
        show_wire(cmd, incoming=False)
        self.sock.sendall(cmd.encode() + b"\x00")

    def read(self, timeout):
        """Read one null-terminated message; None on timeout.

        Complete messages already buffered in rbuf (e.g. a burst that
        arrived in one segment) are served without another recv;
        partial data is kept across calls; the timeout is a hard
        deadline for this call (no unbounded waits).
        """
        deadline = time.time() + timeout
        while True:
            idx = self.rbuf.find(b"\x00")
            if idx != -1:
                msg, self.rbuf = \
                    self.rbuf[:idx].decode(), self.rbuf[idx+1:]
                show_wire(msg, incoming=True)
                # pretty-print logits/lookahead alongside the raw line:
                # top token as text (our interpretation — no timestamp)
                c = Fllama.classify(msg)
                if c:
                    kind, sid, pos = c
                    self._check_pos_skip(kind, sid, pos)
                    self._note_server_message(sid, pos)
                    say(f"      [{kind} seq {sid} pos {pos}] "
                        f"top: {self.top1_text(msg)}")
                return msg
            left = deadline - time.time()
            if left <= 0:
                return None
            self.sock.settimeout(left)
            try:
                chunk = self.sock.recv(65536)
            except socket.timeout:
                return None
            if not chunk:
                raise ConnectionError("server closed connection")
            self.rbuf += chunk

    def read_next(self, seq_id, timeout, kinds=("logits", "lookahead")):
        """Next logits/lookahead message for seq_id; raises on error."""
        deadline = time.time() + timeout
        while True:
            r = self.read(max(0.2, deadline - time.time()))
            if r is None:
                raise RuntimeError(f"timeout waiting for seq {seq_id}")
            parts = r.split()
            if parts[0] == "error":
                raise RuntimeError(r)
            if parts[0] in kinds and parts[1] == str(seq_id):
                return r

    def drain(self, seconds=8.0):
        """Consume messages until quiet."""
        deadline = time.time() + seconds
        while True:
            left = deadline - time.time()
            if left <= 0:
                break
            self.read(min(2.0, max(0.1, left)))

    def add(self, seq_id, tokens):
        # silent on success; errors surface in read_next
        # count before sending: replies to this very add_tokens are then
        # checked against the updated client view
        self._client_tokens_by_seq[seq_id] = \
            self._client_tokens_by_seq.get(seq_id, 0) + len(tokens)
        self.send("add_tokens %d %d %s" % (
            seq_id, len(tokens), " ".join(map(str, tokens))))

    @staticmethod
    def top10(msg):
        parts = msg.split()
        conf = {}
        for item in parts[4:]:
            tok, logit = item.split("=")
            conf[int(tok)] = float(logit)
        return int(parts[2]), conf

    @staticmethod
    def classify(msg):
        """Return (kind, seq_id, pos) for a logits/lookahead message."""
        parts = msg.split()
        if parts[0] in ("logits", "lookahead") and len(parts) >= 3:
            return parts[0], int(parts[1]), int(parts[2])
        return None

    def close(self):
        self.sock.close()
