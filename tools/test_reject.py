#!/usr/bin/env python3
"""
fllama.c MTP lookahead step-6 test: reject: rollback+re-decode correctness

Wire-driven only (the wire IS the protocol): no server-log polling, no
sleeps. The eager turn's lookahead messages confirm it fired; a fresh
LOGITS message after the reject confirms the rollback path (a fast-path
claim would send nothing).
"""

import sys
import time

from fllama_client import Fllama, eval_prompt, say, setup


def main():
    """Reject correctness: rollback+re-decode must equal a fresh decode."""
    f = Fllama()
    tokens = setup(f)
    wrong = tokens + [977]  # fork the content one token after the prompt

    pos_c, top1_c, _ = eval_prompt(f, 1, wrong)
    say(f"baseline: predicts position {pos_c}")

    # eager turn: lookahead messages for seq 1 follow the turn-1 logits
    # immediately; consume them (confirms it fired, drains the socket)
    n_la = 0
    deadline = time.time() + 2
    while True:
        left = deadline - time.time()
        if left <= 0:
            break
        r = f.read(min(0.1, max(0.05, left)))
        if r is None:
            continue
        c = Fllama.classify(r)
        if c and c[0] == "lookahead" and c[1] == 1:
            n_la += 1
    say(f"eager turn fired: {n_la} lookahead message(s)")

    # reject the whole chain with a guaranteed-different token
    reject_tok = tokens[1] + 997
    if reject_tok == top1_c:
        reject_tok += 1
    f.add(1, [reject_tok])
    f.send("evaluate 1")
    # after reject the state machine is NORMAL again: the fresh LOGITS
    # message is the sync point and proves the rollback path ran; stale
    # lookahead messages are ignored per the client contract
    pos_rej, conf_rej = Fllama.top10(
        f.read_next(1, 2, kinds=("logits",)))
    say(f"rejected: fresh logits at position {pos_rej}")

    # reference: fresh sequence with the identical final content
    ref_content = wrong + [reject_tok]
    f.send("create_sequence 2")
    f.add(2, ref_content)
    f.send("evaluate 2")
    msg = f.read_next(2, 2, kinds=("logits",))
    pos_ref, conf_ref = Fllama.top10(msg)

    if pos_rej == pos_ref and conf_rej == conf_ref:
        say(f"PASS: rollback+re-decode logits IDENTICAL to fresh baseline "
            f"(pos {pos_ref})")
    else:
        say("FAIL: MISMATCH:")
        say(f"  rejected-stream: pos={pos_rej} "
            f"top3={sorted(conf_rej.items(), key=lambda kv: -kv[1])[:3]}")
        say(f"  reference:       pos={pos_ref} "
            f"top3={sorted(conf_ref.items(), key=lambda kv: -kv[1])[:3]}")
        return 1
    return 0


if __name__ == "__main__":
    sys.exit(main())
