#!/usr/bin/env python3
"""
fllama.c MTP lookahead step-6 test: PARTIAL-MATCH (single sequence)

Prompt chosen so some but not all of the MTP drafts match the main
head's best-1 (empirically 2 of 3 with --mtp 3). Expected wire
behaviour: turn-1 logits message, then one lookahead message per
confirmed draft — the confirmed prefix forms the fast-path chain, the
rest is rolled back. Confirms the partial-confirmation path.

Wire-driven only: send evaluate, then read until silent; assert counts.
Logs are never touched (server log /tmp/fllama.log stays intact).
"""

import argparse
import sys

from fllama_client import Fllama, say, MODEL, MODEL_LOAD_TIMEOUT, read_turn

PROMPT = "A B C D E F G H I J"
EXPECT_LOGITS = 1
EXPECT_LOOKAHEAD = 2  # 2 of 3 drafts confirmed (verified empirically)


def main():
    ap = argparse.ArgumentParser(description="partial-match lookahead test")
    ap.add_argument("--host", default="127.0.0.1",
                    help="server address (default 127.0.0.1)")
    ap.add_argument("--model", default=None,
                    help=f"model name (default {MODEL})")
    args = ap.parse_args()
    f = Fllama(host=args.host)
    f.send(f"use_model {args.model or MODEL}")   # one model per connection; silent on success
    p = f.pieces(MODEL_LOAD_TIMEOUT)  # reply covers the model-load wait

    f.send(f"tokenize {PROMPT}")
    r = f.read(5)
    assert r and r.startswith("tokens "), repr(r)
    tokens = [int(t) for t in r.split()[2:]]

    f.send("create_sequence 1")
    f.add(1, tokens)
    f.send("evaluate 1")

    say(f"prompt={PROMPT!r}")
    n_logits, n_lookahead, msgs = read_turn(f, 1)
    for m in msgs:
        if Fllama.classify(m)[0] == "logits":
            say(f"  turn-1 top: {f.top1_text(m)}")

    say(f"logits={n_logits} lookahead_msgs={n_lookahead}")
    ok = (n_logits == EXPECT_LOGITS and n_lookahead == EXPECT_LOOKAHEAD)
    say(("PASS: partial confirmation, one lookahead message per confirmed draft"
         if ok else
         f"FAIL: expected logits={EXPECT_LOGITS} "
         f"lookahead={EXPECT_LOOKAHEAD}"))
    return 0 if ok else 1


if __name__ == "__main__":
    sys.exit(main())
