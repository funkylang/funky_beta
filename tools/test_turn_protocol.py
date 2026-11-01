#!/usr/bin/env python3
"""
fllama.c MTP step-6 turn-protocol test.

Verifies the REFINED MESSAGE RULE (§14 of step6-concept.txt):
  - Turn 1 (fresh evaluation): exactly ONE logits message, no lookahead.
  - Turn 2 (eager): lookahead messages only — one per draft token confirmed
    by the main head; ZERO when none is confirmed.

Server: start via tools/run_fllama_test.sh (--mtp 3 --eager). Log at
/tmp/fllama_test_server.log. Prints all wire traffic live (flushed):
'-> msg' / '<- response', truncated past 83 chars to first 60 + "..." + last 20.
"""

import re
import socket
import sys
import time

LOG = "/tmp/fllama_test_server.log"
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


def truncate_log():
    with open(LOG, "a+") as fh:
        fh.seek(0)
        fh.truncate()
        fh.write("\n" * 64)


def log_lines():
    with open(LOG, "rb") as fh:
        return fh.read().replace(b"\x00", b" ").decode(errors="replace").splitlines()


class Fllama:
    def __init__(self, host="127.0.0.1", port=7683):
        self.sock = socket.create_connection((host, port), timeout=5)

    def send(self, cmd):
        show_wire(cmd, incoming=False)
        self.sock.sendall(cmd.encode() + b"\x00")

    def read(self, timeout):
        self.sock.settimeout(timeout)
        buf = b""
        while True:
            try:
                chunk = self.sock.recv(65536)
            except socket.timeout:
                if not buf:
                    return None
                idx = buf.find(b"\x00")
                msg = buf[:idx].decode() if idx != -1 else None
                if msg is not None:
                    show_wire(msg, incoming=True)
                return msg
            if not chunk:
                raise ConnectionError("server closed connection")
            buf += chunk
            if b"\x00" in buf:
                msg = buf[:buf.find(b"\x00")].decode()
                show_wire(msg, incoming=True)
                return msg

    @staticmethod
    def classify(msg):
        """Return (kind, seq_id, pos) for a logits/lookahead message."""
        parts = msg.split()
        if parts[0] in ("logits", "lookahead") and len(parts) >= 3:
            return parts[0], int(parts[1]), int(parts[2])
        return None


def main():
    truncate_log()
    f = Fllama()

    # setup: load model, tokenize prompt
    f.send(f"use_model {MODEL}")
    f.send(f"tokenize {PROMPT}")
    r = f.read(30)
    assert r and r.startswith("tokens "), f"model/tokenize: {r!r}"
    tokens = [int(t) for t in r.split()[2:]]

    # fresh evaluation of the prompt; all subsequent messages arrive without
    # further client input (turn-1 logits + the eager run's lookahead)
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

    # how many drafts did the main head confirm? read from the server log
    confirmed = None
    for line in reversed(log_lines()):
        m = re.search(r"(?:partial )?lookahead confirmation .*? (\d+) of (\d+) drafts confirmed", line)
        if m:
            confirmed = int(m.group(1))
            break

    say(f"\nRESULT: {len(msgs)} message(s): {n_logit} logits, "
        f"{len(la2)} lookahead; first-is-logits={first_is_logit}")

    # protocol assertions (\u00a714 MESSAGE RULE):
    # 1. exactly one logits message in the whole flow (turn 1)
    # 2. it arrives before any lookahead message
    # 3. one lookahead message per main-head-confirmed draft, none otherwise
    if n_logit != 1 or not first_is_logit:
        say(f"FAIL: expected exactly 1 logits message, first in the flow; "
            f"got {n_logit}, first={msgs[0][0] if msgs else None}")
        return 1
    if confirmed is not None and confirmed != len(la2):
        say(f"FAIL: main head confirmed {confirmed} drafts but server sent "
            f"{len(la2)} lookahead messages")
        return 1
    say(f"PASS: 1 logits message first, {len(la2)} lookahead message(s)"
        + (f" matching the {confirmed} confirmed draft(s)" if confirmed is not None else ""))
    return 0


if __name__ == "__main__":
    sys.exit(main())
