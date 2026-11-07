#!/usr/bin/env python3
"""
fllama.c MTP test: streaming generation at WIRE SPEED with paragraph stop.

Variant of test_generate.py: every top-1 from an arriving logits or lookahead
message is fed back as its own add_tokens request IMMEDIATELY (no batching,
no waits) so the server runs at full speed and confirmed lookahead chains are
claimed via the fast path while they are still warm.

STOP CONDITIONS (first one wins):
1. -n content tokens accumulated -> "TOKEN LIMIT REACHED"
2. a paragraph break in the reply: after left-trimming, the accumulated text
   still contains "\n\n" -> "PARAGRAPH BREAK DETECTED". ALL messages arriving
   after the break are IGNORED - not counted, not echoed, not fed back.
3. 5s of wire silence -> "TIMEOUT EXPIRED"

THE RULES (string-level, no token assumptions - a paragraph break may be
one or two tokens, pieces may carry leading whitespace):
- While the accumulated text is empty, do not add whitespace: the model
  opening its reply as a new paragraph is formatting, not reply content.
  Such tokens are still fed back to the server, just never accumulated.
- The reply is done when the text, left-trimmed, contains "\n\n".

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
    ap = argparse.ArgumentParser(description="streaming generation test with paragraph stop")
    ap.add_argument("prompt", help="prompt string")
    ap.add_argument("-n", type=int, default=20,
                    help="content tokens to accumulate (default 20)")
    ap.add_argument("--host", default="127.0.0.1",
                    help="server address (default 127.0.0.1)")
    ap.add_argument("--model", default=None,
                    help=f"model name (default {MODEL})")
    args = ap.parse_args()

    try:
        f = Fllama(host=args.host)
        f.send(f"use_model {args.model or MODEL}")
        p = f.pieces(60)  # extended timeout for model load
        f.send(f"tokenize {args.prompt}")
        r = f.read(5)
        if not (r and r.startswith("tokens ")):
            print(f"error: tokenize failed: {r!r}", file=sys.stderr)
            return 1
    except ConnectionRefusedError:
        print(f"\nERROR: no server at {args.host}", flush=True)
        return 1
    except (OSError, ConnectionError, RuntimeError) as e:
        # setup failure (no server, model load problem, bad pieces reply) —
        # one line on stderr instead of a traceback
        print(f"error: {e}", file=sys.stderr)
        return 1
    tokens = [int(t) for t in r.split()[2:]]

    produced = []   # content tokens, in order
    text = ""       # their rendered pieces, accumulated for the stop checks

    f.send("create_sequence 1")
    f.add(1, tokens)
    f.send("evaluate 1")
    silent_since = None
    try:
        while len(produced) < args.n:
            m = f.read(0.5)
            if m is None:
                # silence on the wire: count it toward a 5s timeout so a dead
                # server still gets flagged instead of hanging forever
                if silent_since is None:
                    silent_since = time.time()
                elif time.time() - silent_since >= 5.0:
                    print("\nTIMEOUT EXPIRED", flush=True)
                    break
                continue
            silent_since = None
            c = Fllama.classify(m)
            if not c or c[1] != 1:
                # errors still show up raw on stderr via the wire echo
                continue
            pos, conf = Fllama.top10(m)
            tok = max(conf, key=conf.get)
            piece = p.get(tok, "")
            if not text.strip() and not piece.strip():
                # opening formatting: whitespace while the reply is still
                # empty is not reply content; it is fed through to the
                # server but never accumulated or echoed
                f.add(1, [tok])
                f.send("evaluate 1")
                continue
            produced.append(tok)
            text += piece
            sys.stdout.write(piece)  # stream at arrival
            sys.stdout.flush()
            # wire-speed feedback: this token goes straight back as its own
            # add_tokens request, no batching or waiting
            f.add(1, [tok])
            f.send("evaluate 1")
            if "\n\n" in text.lstrip():
                # paragraph break in the reply content: done. The model may
                # keep sending - every later message is ignored.
                print("\nPARAGRAPH BREAK DETECTED", flush=True)
                break
    except KeyboardInterrupt:
        # Ctrl-C — flag it on a fresh line in the text stream, exit code 130
        print("\nINTERRUPTED", flush=True)
        f.close()
        return 130

    if len(produced) == args.n:
        # reached the requested token count — flag it on a fresh line in the
        # text stream
        print("\nTOKEN LIMIT REACHED", flush=True)

    say(f"produced {len(produced)} content token(s), {len(text)} char(s)")
    return 0 if len(produced) == args.n else 2


if __name__ == "__main__":
    sys.exit(main())
