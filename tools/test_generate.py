#!/usr/bin/env python3
"""
fllama.c MTP test: streaming generation at WIRE SPEED.

Every top-1 from an arriving logits or lookahead message is fed back as its
own add_tokens request IMMEDIATELY - no batching, no waits - so the server
runs at full speed and confirmed lookahead chains are claimed via the fast
path while they are still warm. Intended to run CONCURRENTLY - several
instances with different prompts exercise the server's multi-threaded
behaviour.

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

    try:
        f = Fllama()
        f.send(f"use_model {MODEL}")
        p = f.pieces(30)

        f.send(f"tokenize {args.prompt}")
        r = f.read(5)
        if not (r and r.startswith("tokens ")):
            print(f"error: tokenize failed: {r!r}", file=sys.stderr)
            return 1
    except (OSError, ConnectionError, RuntimeError) as e:
        # setup failure (no server, model load problem, bad pieces reply) —
        # one line on stderr instead of a traceback
        print(f"error: {e}", file=sys.stderr)
        return 1
    tokens = [int(t) for t in r.split()[2:]]

    produced = []   # generated tokens, in order

    f.send("create_sequence 1")
    f.add(1, tokens)
    f.send("evaluate 1")
    silent_since = None
    try:
        while len(produced) < args.n:
            m = f.read(0.5)
            if m is None:
                # silence on the wire: count it toward a 2s timeout so a dead
                # server still gets flagged instead of hanging forever
                if silent_since is None:
                    silent_since = time.time()
                elif time.time() - silent_since >= 2.0:
                    print("\nTIMEOUT EXPIRED", flush=True)
                    break
                continue
            silent_since = None
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
            if len(produced) >= args.n:
                # done - ignore any further messages still on the wire
                continue
            pos, conf = Fllama.top10(m)
            tok = max(conf, key=conf.get)
            produced.append(tok)
            sys.stdout.write(p.get(tok, ""))  # stream at arrival
            sys.stdout.flush()
            # wire-speed feedback: this token goes straight back as its own
            # add_tokens request, no batching or waiting
            f.add(1, [tok])
            f.send("evaluate 1")
    except KeyboardInterrupt:
        # Ctrl-C — flag it on a fresh line in the text stream, exit code 130
        print("\nINTERRUPTED", flush=True)
        f.close()
        return 130

    if len(produced) == args.n:
        # reached the requested token count — flag it on a fresh line in
        # the text stream
        print("\nTOKEN LIMIT REACHED", flush=True)

    text = "".join(p.get(t, "") for t in produced)
    say(f"produced {len(produced)} token(s), {len(text)} char(s)")
    return 0 if len(produced) == args.n else 2


if __name__ == "__main__":
    sys.exit(main())
