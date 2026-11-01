#!/usr/bin/env python3
"""
fllama.c MTP lookahead step-6 test: reject: rollback+re-decode correctness

Server log: /tmp/fllama_test_server.log (start the server with
tools/run_fllama_test.sh first).
"""

import os
import socket
import sys
import time

LOG = "/tmp/fllama_test_server.log"


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


def read_drafts(server_seq_idx):
    """Draft tokens from the newest 'generating' line for this seq."""
    tag = f"generating 3 draft tokens for server sequence {server_seq_idx} "
    for line in reversed(log_lines()):
        if tag in line:
            return [int(t) for t in line.rsplit(":", 1)[1].split()]
    raise RuntimeError(f"no draft line for server sequence {server_seq_idx}")


class Fllama:
    def __init__(self, host="127.0.0.1", port=7683):
        self.sock = socket.create_connection((host, port))

    def send(self, cmd):
        self.sock.sendall(cmd.encode() + b"\x00")

    def read(self, timeout):
        """Read one null-terminated message; None on timeout."""
        self.sock.settimeout(timeout)
        buf = b""
        while True:
            try:
                chunk = self.sock.recv(65536)
            except socket.timeout:
                if not buf:
                    return None
                continue
            if not chunk:
                raise ConnectionError("server closed connection")
            buf += chunk
            idx = buf.find(b"\x00")
            if idx != -1:
                return buf[:idx].decode()

    def read_next(self, seq_id, timeout):
        """Next 'logits'/'lookahead' message for seq_id; raises on error."""
        deadline = time.time() + timeout
        while True:
            r = self.read(max(0.2, deadline - time.time()))
            if r is None:
                raise RuntimeError(f"timeout waiting for seq {seq_id}")
            print("WIRE<- " + r)
            parts = r.split()
            if parts[0] == "error":
                raise RuntimeError(r)
            if parts[0] in ("logits", "lookahead") and \
                    parts[1] == str(seq_id):
                return r

    def drain(self, seconds=8.0):
        """Consume messages until quiet; print them all."""
        deadline = time.time() + seconds
        while True:
            left = deadline - time.time()
            if left <= 0:
                break
            r = self.read(min(2.0, max(0.1, left)))
            if r is None:
                continue
            print("WIRE<- " + r)

    def add(self, seq_id, tokens):
        # silent on success; errors surface in read_next
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


def setup(f):
    """Load the model and tokenize the standard test prompt."""
    f.send("use_model Qwen3.5-2B-Q4_K_M.gguf")
    f.send("tokenize What is 2+2?")
    r = f.read(180)
    assert r and r.startswith("tokens "), f"model/tokenize: {r!r}"
    return [int(t) for t in r.split()[2:]]


def eval_prompt(f, seq_id, tokens, timeout=120):
    """Create sequence with tokens, evaluate; return (pos, top1, conf)."""
    f.send(f"create_sequence {seq_id}")
    f.read(5)
    f.add(seq_id, tokens)
    f.send(f"evaluate {seq_id}")
    msg = f.read_next(seq_id, timeout)
    pos, conf = Fllama.top10(msg)
    return pos, max(conf, key=conf.get), conf


def main():
    """Reject correctness: rollback+re-decode must equal a fresh decode."""
    truncate_log()
    f = Fllama()
    tokens = setup(f)
    wrong = tokens + [977]  # fork the content one token after the prompt

    pos_c, top1_c, _ = eval_prompt(f, 1, wrong)
    wait_for_line(
        "evaluating 4 lookahead token(s) in server sequence 0",
        timeout=120)
    print(f"baseline: predicts position {pos_c}; eager turn fired")

    # reject the whole chain with a guaranteed-different token
    reject_tok = tokens[1] + 997
    if reject_tok == top1_c:
        reject_tok += 1
    f.add(1, [reject_tok])
    f.send("evaluate 1")
    wait_for_line("do not use lookahead for server sequence 0", timeout=90)
    print("rejected via fast-path check (server log verified)")
    pos_rej, conf_rej = Fllama.top10(f.read_next(1, 60))

    # reference: fresh sequence with the identical final content
    ref_content = wrong + [reject_tok]
    f.send("create_sequence 2")
    f.read(5)
    f.add(2, ref_content)
    f.send("evaluate 2")
    msg = f.read_next(2, 60)
    pos_ref, conf_ref = Fllama.top10(msg)

    if pos_rej == pos_ref and conf_rej == conf_ref:
        print(f"PASS: rollback+re-decode logits IDENTICAL to fresh baseline "
              f"(pos {pos_ref})")
    else:
        print("FAIL: MISMATCH:")
        print(f"  rejected-stream: pos={pos_rej} "
              f"top3={sorted(conf_rej.items(), key=lambda kv: -kv[1])[:3]}")
        print(f"  reference:       pos={pos_ref} "
              f"top3={sorted(conf_ref.items(), key=lambda kv: -kv[1])[:3]}")
        return 1
    return 0


if __name__ == "__main__":
    sys.exit(main())
