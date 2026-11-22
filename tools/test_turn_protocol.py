#!/usr/bin/env python3
"""
fllama.c MTP step-6 turn-protocol test.

Verifies the REFINED MESSAGE RULE (§15/§20 of step6-concept.txt):
  - Turn 1 (fresh evaluation): exactly ONE logits message, no lookahead.
  - Eager turns: lookahead messages only — n+1 per speculative turn where
    n = drafts confirmed by the main head (the batch's first entry plus one
    per confirmed draft; ZERO-confirmation turns still send their single
    anchor message).

Server: start via tools/run_fllama_test.sh (--mtp 3 --eager). The draft
count comes from the server log (/tmp/fllama_test_server.log) because it is
server-internal state not visible on the wire. Prints all wire traffic live:
'-> msg' / '<- response', truncated past 83 chars to first 60 + "..." + last 20.
"""

import argparse
import re
import socket
import sys
import time

MODEL = "Qwen3.5-2B-Q4_K_M.gguf"
PROMPT = "The capital of France is"


def say(msg):
    print(msg, flush=True)


def show_wire(msg, incoming=False):
    """Print one wire message: '<- ' or '-> ' prefix, truncated display."""
    arrow = "<-" if incoming else "->"
    if len(msg) > 83:
        display = msg[:60] + "..." + msg[-20:]
    else:
        display = msg
    say(f"{arrow} {display}")


def log_lines():
    with open("/tmp/fllama_test_server.log", "rb") as fh:
        return fh.read().replace(b"\x00", b" ").decode(errors="replace").splitlines()


class Fllama:
    def __init__(self, host="127.0.0.1", port=7683):
        self.sock = socket.create_connection((host, port), timeout=5)
        # persistent read buffer: bursts arrive as ONE packet (logits +
        # lookaheads in one write), so leftovers must survive across calls
        self.rbuf = b""

    def send(self, cmd):
        show_wire(cmd, incoming=False)
        self.sock.sendall(cmd.encode() + b"\x00")

    def read(self, timeout):
        self.sock.settimeout(timeout)
        while True:
            idx = self.rbuf.find(b"\x00")
            if idx != -1:
                msg, self.rbuf = \
                    self.rbuf[:idx].decode(), self.rbuf[idx+1:]
                show_wire(msg, incoming=True)
                return msg
            try:
                chunk = self.sock.recv(65536)
            except socket.timeout:
                return None
            if not chunk:
                raise ConnectionError("server closed connection")
            self.rbuf += chunk

    @staticmethod
    def classify(msg):
        """Return (kind, seq_id, pos) for a logits/lookahead message."""
        parts = msg.split()
        if parts[0] in ("logits", "lookahead") and len(parts) >= 3:
            return parts[0], int(parts[1]), int(parts[2])
        return None


def main():
    ap = argparse.ArgumentParser(description="turn-protocol test")
    ap.add_argument("--host", default="127.0.0.1",
                    help="server address (default 127.0.0.1)")
    ap.add_argument("--port", type=int, default=7683,
                    help="server port (default 7683)")
    ap.add_argument("--model", default=None,
                    help=f"model name (default {MODEL})")
    args = ap.parse_args()
    f = Fllama(host=args.host, port=args.port)

    # probe whether a model is already loaded (dedicated test server); the
    # first read after use_model must cover a cold model load, so it uses the
    # long timeout in either case
    f.send(f"tokenize {PROMPT}")
    r = f.read(5)
    if not (r and r.startswith("tokens ")):
        # no model loaded yet: reload use_model + tokenize as a pair; the
        # first reply is the tokenize result (use_model is silent on success)
        f.send(f"use_model {args.model or MODEL}")
        f.send(f"tokenize {PROMPT}")
        r = f.read(300)
    assert r and r.startswith("tokens "), f"model/tokenize: {r!r}"
    tokens = [int(t) for t in r.split()[2:]]

    # mark where this test's draft-confirmation line must appear in the log
    n_log_lines_before = len(log_lines())

    f.send("create_sequence 1")
    f.read(5)
    f.send(f"add_tokens 1 {len(tokens)} " + " ".join(map(str, tokens)))
    f.send("evaluate 1")

    say("\n--- collecting all turn messages (20s, no further client input) ---")
    msgs = []
    deadline = time.time() + 20
    while True:
        left = deadline - time.time()
        if left <= 0:
            break
        r = f.read(min(1.0, max(0.1, left)))
        if r is None:
            continue
        c = Fllama.classify(r)
        if c and c[1] == 1:
            msgs.append(c)

    n_logit = sum(1 for c in msgs if c[0] == "logits")
    la2 = [c for c in msgs if c[0] == "lookahead"]
    first_is_logit = (len(msgs) > 0 and msgs[0][0] == "logits")

    # how many drafts did the main head confirm? read from the server log:
    # "sequence N: k/3 drafts confirmed" (only lines written by THIS run)
    confirmed = None
    for line in reversed(log_lines()[n_log_lines_before:]):
        m = re.search(r"sequence \d+: (\d+)/(\d+) drafts confirmed", line)
        if m:
            confirmed = int(m.group(1))
            break

    say(f"\nRESULT: {len(msgs)} message(s): {n_logit} logits, "
        f"{len(la2)} lookahead; first-is-logits={first_is_logit}")

    # protocol assertions (MESSAGE RULE):
    # 1. exactly one logits message in the whole flow (turn 1)
    # 2. it arrives before any lookahead message
    # 3. the eager turn sends n+1 lookahead messages for n confirmed drafts
    if n_logit != 1 or not first_is_logit:
        say(f"FAIL: expected exactly 1 logits message, first in the flow; "
            f"got {n_logit}, first={msgs[0][0] if msgs else None}")
        return 1
    if confirmed is not None and confirmed + 1 != len(la2):
        say(f"FAIL: main head confirmed {confirmed} drafts but server sent "
            f"{len(la2)} lookahead messages (expected {confirmed + 1})")
        return 1
    say(f"PASS: 1 logits message first, {len(la2)} lookahead message(s)"
        + (f" = {confirmed} confirmed draft(s) + 1" if confirmed is not None else ""))
    return 0


if __name__ == "__main__":
    sys.exit(main())
