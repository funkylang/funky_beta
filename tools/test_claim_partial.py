#!/usr/bin/env python3
"""
fllama.c MTP lookahead step-6 test: partial chain claim (i-2 gate + sync point)

Wire-driven only (the wire IS the protocol): no server-log polling.

Partial claim behaviour under the i-2 rule (§22):
  * after turn 1 + its lookahead burst, the client confirms ONLY the first
    chain token (turn-1's top-1);
  * speculation must then STOP: nothing is re-sent while the client has not
    caught up to the position advertised two turns ago — the remaining chain
    stays warm in the KV for the next claim;
  * when the client claims the rest of the burst, every sent token is now
    confirmed and the sync-point rule applies: the next message must be
    LOGITS at pos == base_pos + total claimed.

The silent middle stretch is the assertion: a broken gate would keep
spamming lookahead messages instead of going quiet. (Rejection of an
unconfirmed chain is test_reject.py's scenario.)
"""

import argparse
import sys
import time

from fllama_client import Fllama, eval_prompt, read_turn, say, setup, MODEL

PROMPT = "January, February, March, April, May, June, July,"


def tops_in_order(msgs):
    """(pos, top1) pairs in message order for this test's sequence."""
    return [(p, max(c, key=c.get)) for p, c in (Fllama.top10(m) for m in msgs)]


def main():
    ap = argparse.ArgumentParser(description="partial-chain claim test")
    ap.add_argument("--host", default="127.0.0.1",
                    help="server address (default 127.0.0.1)")
    ap.add_argument("--model", default=None,
                    help=f"model name (default {MODEL})")
    args = ap.parse_args()
    f = Fllama(host=args.host)
    setup(f, model=args.model or MODEL)

    f.send(f"tokenize {PROMPT}")
    r = f.read(5)
    assert r and r.startswith("tokens "), repr(r)
    tokens = [int(t) for t in r.split()[2:]]

    base_pos, top1, _ = eval_prompt(f, 1, tokens, timeout=30)
    say(f"turn 1: logits at position {base_pos}, top={top1}")

    _, n_la, msgs = read_turn(f, 1)
    say(f"burst: {n_la} lookahead message(s)")
    if n_la == 0:
        say("FAIL: no lookahead burst to claim")
        return 1

    rest = [tok for _, tok in tops_in_order(msgs)]

    # PARTIAL claim: first chain token only (turn-1's prediction)
    f.add(1, [top1])
    f.send("evaluate 1")

    # i-2 rule: speculation must stop -> silence on the wire. A stray message
    # within this window means the gate leaked lookahead at a stalled client.
    deadline = time.time() + 2.0
    stray = []
    while time.time() < deadline:
        m = f.read(min(0.3, max(0.05, deadline - time.time())))
        if m is not None:
            c = Fllama.classify(m)
            if c and c[1] == 1 and c[0] in ("logits", "lookahead"):
                stray.append(m)
    if stray:
        say(f"FAIL: {len(stray)} message(s) after partial claim; "
            f"expected silence (i-2 gate):")
        for m in stray[:3]:
            say(f"  {m[:80]}")
        return 1
    say("partial claim: wire silent as expected (gate closed)")

    # complete the claim with the rest of the burst chain
    f.add(1, rest)
    f.send("evaluate 1")

    pos_after, _ = Fllama.top10(f.read_next(1, 15, kinds=("logits",)))
    expected_pos = base_pos + 1 + len(rest)
    if pos_after != expected_pos:
        say(f"FAIL: sync point at pos {pos_after}, "
            f"expected {expected_pos}")
        return 1

    # continuation must keep flowing after the chain is fully claimed
    _, n2_la, _ = read_turn(f, 1, first_timeout=15.0)
    if n2_la == 0:
        say("FAIL: no continuation burst after completing the claim")
        return 1

    say(f"PASS: partial claim silent, sync point at {pos_after} "
        f"after completion, continuation: {n2_la} lookahead message(s)")
    return 0


if __name__ == "__main__":
    sys.exit(main())
