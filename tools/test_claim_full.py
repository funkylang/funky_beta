#!/usr/bin/env python3
"""
fllama.c MTP lookahead step-6 test: full lookahead chain claim (one add_tokens)

Wire-driven only (the wire IS the protocol): no server-log polling.

The turn-1 LOGITS message's top-1 is the first chain token; every following
LOOKAHEAD message carries the main head's confidences for its position, so
the tops of all messages in order ARE the complete KV lookahead chain
(including the frontier token). A real client confirms exactly that list.

This test claims the entire chain with ONE add_tokens (+ one evaluate) and
checks the sync-point rule: once every sent token is confirmed, the next
message must be LOGITS at pos == base_pos + claimed - and it must arrive
without the server re-decoding anything of what was already advertised.
"""

import argparse
import sys
import time

from fllama_client import Fllama, eval_prompt, read_turn, say, setup, MODEL

PROMPT = "January, February, March, April, May, June, July,"


def tops_in_order(msgs):
    """(pos, top1) pairs in message order for this test's sequence."""
    out = []
    for m in msgs:
        pos, conf = Fllama.top10(m)
        out.append((pos, max(conf, key=conf.get)))
    return out


def main():
    ap = argparse.ArgumentParser(description="full-chain claim test")
    ap.add_argument("--host", default="127.0.0.1",
                    help="server address (default 127.0.0.1)")
    ap.add_argument("--model", default=None,
                    help=f"model name (default {MODEL})")
    args = ap.parse_args()
    f = Fllama(host=args.host)
    pieces = setup(f, model=args.model or MODEL)

    f.send(f"tokenize {PROMPT}")
    r = f.read(5)
    assert r and r.startswith("tokens "), repr(r)
    tokens = [int(t) for t in r.split()[2:]]

    base_pos, top1, _ = eval_prompt(f, 1, tokens, timeout=30)
    say(f"turn 1: logits at position {base_pos}, top={top1}")

    # the eager speculative turn's burst follows immediately on the wire
    _, n_la, msgs = read_turn(f, 1)
    say(f"burst: {n_la} lookahead message(s)")

    # reconstruct the full KV chain from the wire: turn-1's top-1 first,
    # then every lookahead message's top in arrival order (= position order)
    claim = [top1] + [tok for _, tok in tops_in_order(msgs)]
    say(f"claiming {len(claim)} tokens: {claim}")

    # THE test action: the whole chain, ONE add_tokens + one evaluate
    f.add(1, claim)
    f.send("evaluate 1")

    pos_after, conf = Fllama.top10(
        f.read_next(1, 15, kinds=("logits",)))
    expected_pos = base_pos + len(claim)
    if pos_after != expected_pos:
        say(f"FAIL: sync point at pos {pos_after}, "
            f"expected {expected_pos}")
        return 1

    # the server must keep generating after a full claim (fresh speculation,
    # no re-decode of claimed tokens): expect a lookahead burst to follow
    n2_logits, n2_la, _ = read_turn(f, 1, first_timeout=15.0)
    if n2_la == 0:
        say("FAIL: no continuation burst after the full claim")
        return 1

    say(f"PASS: full-chain claim via single add_tokens; sync point at "
        f"{pos_after}; continuation: {n2_la} lookahead message(s)")
    return 0


if __name__ == "__main__":
    sys.exit(main())
