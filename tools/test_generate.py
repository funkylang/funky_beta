#!/usr/bin/env python3
"""
fllama.c MTP test: streaming generation with immediate lookahead feedback.

Every token that arrives via a logits or lookahead message (its top-1) is
fed back as soon as the wire goes quiet, so confirmed lookahead chains are
claimed via the fast path while they are still warm. Intended to run
CONCURRENTLY — several instances with different prompts exercise the
server's multi-threaded behaviour.

stdout: generated plain text ONLY
stderr: all wire traffic + progress info
"""

import argparse
import sys
import time

import fllama_client
from fllama_client import Fllama, say, MODEL

fllama_client.INFO_STREAM = sys.stderr  # keep stdout clean for the text


def main():
    ap = argparse.ArgumentParser(description="streaming generation test")
    ap.add_argument("prompt", help="prompt string")
    ap.add_argument("-n", type=int, default=20,
                    help="number of tokens to produce (default 20)")
    args = ap.parse_args()

    f = Fllama()
    f.send(f"use_model {MODEL}")
    p = f.pieces(30)

    f.send(f"tokenize {args.prompt}")
    r = f.read(5)
    if not (r and r.startswith("tokens ")):
        print(f"error: tokenize failed: {r!r}", file=sys.stderr)
        return 1
    tokens = [int(t) for t in r.split()[2:]]

    produced = []   # generated tokens, in order
    round_tok = []  # top-1s collected during the current watch window

    def watch():
        """Read until wire is quiet; stream top-1s of seq-1 messages."""
        round_tok.clear()
        deadline = time.time() + 2.0
        while True:
            left = deadline - time.time()
            if left <= 0:
                return
            m = f.read(min(0.1, max(0.05, left)))
            if m is None:
                continue
            if m.startswith("error"):
                # error from the server: show it on a fresh line in the text
                # stream and fail; raw timestamped line stays on stderr via
                # the wire echo
                f.close()
                print(f"\n{m}", flush=True)
                sys.exit(1)
            c = Fllama.classify(m)
            if not c or c[1] != 1:
                continue
            if len(produced) + len(round_tok) >= args.n:
                return
            pos, conf = Fllama.top10(m)
            tok = max(conf, key=conf.get)
            round_tok.append(tok)
            sys.stdout.write(p.get(tok, ""))  # stream at arrival
            sys.stdout.flush()

    f.send("create_sequence 1")
    f.add(1, tokens)
    f.send("evaluate 1")
    while len(produced) < args.n:
        watch()
        if not round_tok:
            # server went silent before we had enough tokens: the final read
            # window timed out — flag it on a fresh line in the text stream
            print("\nTIMEOUT EXPIRED", flush=True)
            break
        feed = round_tok[:args.n - len(produced)]
        f.add(1, feed)
        f.send("evaluate 1")
        produced.extend(feed)

    text = "".join(p.get(t, "") for t in produced)
    say(f"produced {len(produced)} token(s), {len(text)} char(s)")
    return 0 if len(produced) == args.n else 2


if __name__ == "__main__":
    sys.exit(main())
