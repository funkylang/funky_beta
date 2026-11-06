#!/usr/bin/env python3
"""
fllama.c prefill benchmark: time evaluation of a whole text file as prompt.

Tokenizes --file PATH, sends the complete token sequence as one add_tokens
request and times from the evaluate request to the logits reply; prints the
prompt length in tokens and the achieved tok/s. Optionally warms up first
with a small evaluation so shader compilation / caches are in place (-w).

stdout: benchmark result only
stderr: all wire traffic
"""

import argparse
import sys
import time

import fllama_client
from fllama_client import Fllama, say, MODEL

fllama_client.INFO_STREAM = sys.stderr  # keep stdout clean for the result


def wait_for_logits(f, seq_id, timeout=600):
    """Consume messages until a logits message for seq_id arrives."""
    deadline = time.time() + timeout
    while True:
        m = f.read(max(0.2, deadline - time.time()))
        if m is None:
            raise RuntimeError("timeout waiting for logits")
        if m.startswith("error"):
            raise RuntimeError(m)
        c = Fllama.classify(m)
        if c and c[0] == "logits" and c[1] == seq_id:
            return


def main():
    ap = argparse.ArgumentParser(description="prefill benchmark")
    ap.add_argument("--host", default="127.0.0.1",
                    help="server address (default 127.0.0.1)")
    ap.add_argument("--model", default=None,
                    help=f"model name (default {MODEL})")
    ap.add_argument("--file", required=True,
                    help="text file to use as prompt")
    ap.add_argument("-w", action="store_true",
                    help="do a small warmup evaluation first")
    args = ap.parse_args()

    with open(args.file, encoding="utf-8", errors="replace") as fh:
        text = fh.read()
    if not text.strip():
        print("error: empty text file", file=sys.stderr)
        return 1

    try:
        f = Fllama(host=args.host)
        f.send(f"use_model {args.model or MODEL}")

        # tokenize the whole file; the full sequence is the measured prompt
        f.send(f"tokenize {text}")
        r = f.read(30)
        if not (r and r.startswith("tokens ")):
            raise RuntimeError(f"tokenize failed: {r!r}")
        tokens = [int(t) for t in r.split()[2:]]

        # optional warmup: short prefill on a throwaway sequence
        if args.w:
            f.send("create_sequence 9")
            f.add(9, tokens[:100])
            f.send("evaluate 9")
            wait_for_logits(f, 9, timeout=300)

        # the measured run
        f.send("create_sequence 1")
        f.add(1, tokens)
        t0 = time.time()
        f.send("evaluate 1")
        wait_for_logits(f, 1)
    except ConnectionRefusedError:
        print(f"\nERROR: no server at {args.host}", flush=True)
        return 1
    except (OSError, ConnectionError, RuntimeError) as e:
        print(f"error: {e}", file=sys.stderr)
        return 1

    dt = time.time() - t0
    say(f"prefill: {len(tokens)} tokens in {dt:.3f}s = "
        f"{len(tokens)/dt:.0f} tok/s")
    return 0


if __name__ == "__main__":
    sys.exit(main())
