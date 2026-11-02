#!/usr/bin/env python3
"""
Exploratory probe: find prompts that produce no-match / partial-match /
full-match between MTP drafts and main head (dev tool, not a test).

Fresh connection per candidate so each starts with server sequence 0 and
no leftover lookahead state. Outcome classified from wire messages (1.5s
watch) + the log lines this run added (draft line + confirmation line).
Read-only on logs: marks the line count before each run, reads only what
was appended after.
"""

import time

from fllama_client import Fllama, say, log_lines, MODEL

CANDIDATES = [
    "Monday, Tuesday, Wednesday,",
    "January, February, March, April, May, June, July,",
    "Once upon a time, in a land far away,",
    "To be or not to be, that is",
    "def add(a, b):\n    return",
    "The answer to life, the universe, and everything is",
    "Paris is the capital of France. London is the capital of",
    "A B C D E F G H I J",
]

WATCH_S = 1.5
SERVER_SEQ = 0  # fresh connection -> first sequence is server id 0


def run_candidate(prompt):
    f = Fllama()
    f.send(f"use_model {MODEL}")   # one model per connection; silent on success
    p = f.pieces(30)               # reply covers the model-load wait

    f.send(f"tokenize {prompt}")
    r = f.read(5)
    assert r and r.startswith("tokens "), repr(r)
    tokens = [int(t) for t in r.split()[2:]]

    before = len(log_lines())
    f.send(f"create_sequence 1")
    f.add(1, tokens)
    f.send("evaluate 1")

    n_la = 0
    top1_txt = None
    deadline = time.time() + WATCH_S
    while True:
        left = deadline - time.time()
        if left <= 0:
            break
        m = f.read(min(0.1, left))
        if m is None:
            continue
        c = Fllama.classify(m)
        if not c or c[1] != 1:
            continue
        if c[0] == "logits" and top1_txt is None:
            top1_txt = f.top1_text(m)
        elif c[0] == "lookahead":
            n_la += 1

    new_lines = log_lines()[before:]
    drafts = confirm = None
    for l in new_lines:
        if f"draft tokens for server sequence {SERVER_SEQ}" in l:
            drafts = l.split("):", 1)[1].split()
        key = f"confirmation in server sequence {SERVER_SEQ}:"
        if key in l:
            confirm = l.split(key, 1)[1].strip().split(";")[0]

    f.close()
    return top1_txt, n_la, drafts, confirm


def main():
    for i, prompt in enumerate(CANDIDATES, start=1):
        say(f"--- cand {i}: {prompt!r}")
        top1, n_la, drafts, confirm = run_candidate(prompt)
        say(f"    top-1={top1} lookahead_msgs={n_la} "
            f"drafts={drafts} confirmed={confirm}")
    return 0


if __name__ == "__main__":
    import sys
    sys.exit(main())
