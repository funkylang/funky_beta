#!/usr/bin/env python3
"""
fllama.c MTP draft-confirmation probe (exploratory, short-lived).

Question answered: for which prompts does the main head confirm any of the
MTP drafts? The turn protocol only sends lookahead messages for confirmed
drafts, so a prompt with 0 confirmations exercises the empty case.

Runtime bounded: SETUP_TIMEOUT for model load/tokenize (cold start),
PROBE_TIMEOUT per prompt for messages. Prints all wire traffic live via
fllama_client (flushed, truncated).
Server: tools/run_fllama_test.sh (--mtp 3 --eager).
"""

import time

from fllama_client import Fllama, log_lines, say, truncate_log

MODEL = "Qwen3.5-2B-Q4_K_M.gguf"
SETUP_TIMEOUT = 30.0   # model load + tokenize (warm: <1s)
PROBE_TIMEOUT = 6.0    # per prompt: collect messages until quiet or this
PROMPTS = [
    "The capital of France is",
    "Once upon a time",
    "Paris is famous for",
]


def probe(prompt, model=MODEL):
    say(f"[probe] {prompt!r}")
    truncate_log()
    f = Fllama()
    # use_model is SILENT on success: pieces reply follows immediately (it
    # covers the model-load wait); tokenize reply comes last
    f.send(f"use_model {model}")
    f.pieces(SETUP_TIMEOUT)
    f.send(f"tokenize {prompt}")
    r = f.read(SETUP_TIMEOUT)
    if not (r and r.startswith("tokens ")):
        say(f"  SETUP ERROR: {r!r}")
        f.close()
        return None
    tokens = [int(t) for t in r.split()[2:]]
    sid = int(time.time()) % 99999
    f.send(f"create_sequence {sid}")
    f.read(3)
    f.add(sid, tokens)
    f.send(f"evaluate {sid}")

    kinds = []
    deadline = time.time() + PROBE_TIMEOUT
    while time.time() < deadline:
        r = f.read(1.0)
        if not r:
            continue
        parts = r.split()
        if parts[0] in ("logits", "lookahead"):
            kinds.append(parts[0])
    f.close()

    log = log_lines()
    gen = [l for l in reversed(log) if "generating 3 draft" in l]
    conf = [l for l in reversed(log) if "confirmation" in l]
    return kinds, (gen[0].strip()[:110] if gen else None), \
        (conf[0].strip()[:120] if conf else None)


def main():
    say(f"fllama MTP draft-confirmation probe ({len(PROMPTS)} prompts)")
    results = []
    for prompt in PROMPTS:
        res = probe(prompt)
        if not res:
            continue
        kinds, gen, conf = res
        n_la = kinds.count("lookahead")
        results.append((prompt, n_la))
        say(f"  result: messages {kinds} (lookaheads={n_la})")
        if gen:
            say(f"     {gen}")
        if conf:
            say(f"     {conf}")
        say("")
    say("summary:")
    for prompt, n_la in results:
        say(f"  {prompt!r}: {n_la} lookahead message(s)")


if __name__ == "__main__":
    main()
