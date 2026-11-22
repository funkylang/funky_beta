#!/usr/bin/env python3
"""
fllama.c MTP test: streaming generation at WIRE SPEED.

The server flushes each turn's logits+lookahead messages as one packet; the
client reads what arrives in a single read pass and confirms the WHOLE burst
with ONE add_tokens request (plus one evaluate) - it does not wait for more
messages to trickle in, so confirmed lookahead chains are claimed via the fast
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
from fllama_client import Fllama, say, MODEL, load_model

fllama_client.INFO_STREAM = sys.stderr  # keep stdout clean for the text


def main():
    ap = argparse.ArgumentParser(description="streaming generation test")
    ap.add_argument("prompt", help="prompt string")
    ap.add_argument("-n", type=int, default=20,
                    help="number of tokens to produce (default 20)")
    ap.add_argument("--host", default="127.0.0.1",
                    help="server address (default 127.0.0.1)")
    ap.add_argument("--port", type=int, default=7683,
                    help="server port (default 7683)")
    ap.add_argument("--model", default=None,
                    help=f"model name (default {MODEL})")
    args = ap.parse_args()

    try:
        f = Fllama(host=args.host, port=args.port)
        # use_model is a no-op when this model is already loaded on the
        # server (e.g. a dedicated test server); any reply is an error line
        p = load_model(f, args.model or MODEL)

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

    produced = []   # generated tokens, in order

    f.send("create_sequence 1")
    f.add(1, tokens)
    f.send("evaluate 1")
    silent_since = None
    try:
        while len(produced) < args.n:
            # one read pass over the wire: everything that has arrived (the
            # server's current burst) is returned at once - we do not wait
            # for further messages to trickle in after this read
            toks = f.read_burst(1, timeout=0.5)
            if not toks:
                # silence on the wire: count it toward the timeout so a dead
                # server still gets flagged instead of hanging forever.
                # Long patience until the FIRST token: Vulkan puts the GPU to
                # sleep when idle and the wake-up costs ~6s on the next decode.
                if not produced:
                    first_wait_limit = 30.0
                else:
                    first_wait_limit = 5.0
                if silent_since is None:
                    silent_since = time.time()
                elif time.time() - silent_since >= first_wait_limit:
                    print("\nTIMEOUT EXPIRED", flush=True)
                    break
                continue
            silent_since = None
            # only as many tokens as still count toward the -n limit
            toks = toks[:args.n - len(produced)]
            produced.extend(toks)
            sys.stdout.write("".join(p.get(tok, "") for tok in toks))  # stream at arrival
            sys.stdout.flush()
            # wire-speed feedback: the whole burst goes straight back as ONE
            # add_tokens request plus a single evaluate - never one per token
            f.add(1, toks)
            f.send("evaluate 1")
    except KeyboardInterrupt:
        # Ctrl-C — flag it on a fresh line in the text stream, exit code 130
        print("\nINTERRUPTED", flush=True)
        f.close()
        return 130
    except RuntimeError as e:
        # error message from the server (raised by read_burst): show it on a
        # fresh line in the text stream and fail; the raw timestamped line
        # stays on stderr via the wire echo
        f.close()
        print(f"\n{e}", flush=True)
        return 1

    if len(produced) == args.n:
        # reached the requested token count — flag it on a fresh line in
        # the text stream
        print("\nTOKEN LIMIT REACHED", flush=True)

    text = "".join(p.get(t, "") for t in produced)
    say(f"produced {len(produced)} token(s), {len(text)} char(s)")
    return 0 if len(produced) == args.n else 2


if __name__ == "__main__":
    sys.exit(main())
