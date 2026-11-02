#!/usr/bin/env python3
"""
fllama.c MTP lookahead step-6 test: NO-MATCH (single sequence)

Prompt chosen so the MTP drafts do NOT match the main head's best-1 at
any position. Expected wire behaviour: the turn-1 logits message arrives,
all 3 drafts are rejected server-side, and NOTHING else is sent — no
lookahead messages. Confirms the rejection/rollback path.

Wire-driven only: send evaluate, then read until silent; assert counts.
Logs are never touched (server log /tmp/fllama.log stays intact).
"""

import sys
import time

from fllama_client import Fllama, say, MODEL

PROMPT = "Once upon a time, in a land far away,"
EXPECT_LOGITS = 1
EXPECT_LOOKAHEAD = 0


def main():
    f = Fllama()
    f.send(f"use_model {MODEL}")   # one model per connection; silent on success
    p = f.pieces(30)               # reply covers the model-load wait

    f.send(f"tokenize {PROMPT}")
    r = f.read(5)
    assert r and r.startswith("tokens "), repr(r)
    tokens = [int(t) for t in r.split()[2:]]

    f.send("create_sequence 1")
    f.add(1, tokens)
    f.send("evaluate 1")

    say(f"prompt={PROMPT!r}")
    n_logits = 0
    n_lookahead = 0
    deadline = time.time() + 2.0
    while True:
        left = deadline - time.time()
        if left <= 0:
            break
        m = f.read(min(0.1, max(0.05, left)))
        if m is None:
            continue
        c = Fllama.classify(m)
        if not c or c[1] != 1:
            continue
        if c[0] == "logits":
            n_logits += 1
            say(f"  turn-1 top: {f.top1_text(m)}")
        elif c[0] == "lookahead":
            n_lookahead += 1

    say(f"logits={n_logits} lookahead_msgs={n_lookahead}")
    ok = (n_logits == EXPECT_LOGITS and n_lookahead == EXPECT_LOOKAHEAD)
    say(("PASS: all drafts rejected, no lookahead messages"
         if ok else
         f"FAIL: expected logits={EXPECT_LOGITS} "
         f"lookahead={EXPECT_LOOKAHEAD}"))
    return 0 if ok else 1


if __name__ == "__main__":
    sys.exit(main())
