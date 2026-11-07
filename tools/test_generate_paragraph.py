#!/usr/bin/env python3
"""
fllama.c MTP test: sequential questions at WIRE SPEED with paragraph stop.

Each question gets its own sequence on ONE shared connection, posed in the
order given. Every top-1 from an arriving logits or lookahead message of
the ACTIVE sequence is fed back as its own add_tokens request IMMEDIATELY
(no batching, no waits) so the server runs at full speed and confirmed
lookahead chains are claimed via the fast path while they are still warm.

THE POINT OF THIS TEST: a reply TERMINATES at its paragraph break. From
that moment on the client neither confirms nor prints that sequence's
tokens any more - although the server may keep speculating on it. The
next question is then posed; the abandoned sequence must not affect it.
(Leftover messages for other sequences are filtered by id.)

# PROMPT FORMAT: a "system prompt" block followed by the question, framed in
# chat form (#system/#user/#assistant). stdout shows exactly this string,
# then the answer text.

TERMINATION (per question, first one wins):
- the answer text, left-trimmed, contains "\n\n" -> "PARAGRAPH BREAK
  DETECTED". A leading paragraph skip opening the reply does not count:
  the model may start its reply as a new paragraph before any content.
- -n tokens confirmed -> "TOKEN LIMIT REACHED" (default 200, per question)

THE RULES (string-level, no token assumptions - a paragraph break may be
one or two tokens, pieces may carry leading whitespace):
- Every token of the active reply is printed at arrival.
- After termination nothing more is confirmed or printed for that sequence.

stdout: transcript - each question followed by its answer text
stderr: all wire traffic + progress info
exit code: 0 if every answer terminated, 2 otherwise (1 setup error,
           130 Ctrl-C)
"""

import argparse
import sys
import time

import fllama_client
from fllama_client import Fllama, say, MODEL

fllama_client.INFO_STREAM = sys.stderr  # keep stdout for the transcript

# PROMPT FORMAT: "system prompt" block, then the question between #question
# and #answer markers. No #user/#assistant. stdout shows exactly this string,
# then the answer text.
SYSTEM_PROMPT = ("You will be asked some questions. Please answer them "
                 "without reasoning.")


def format_prompt(question, with_system):
    """The exact prompt for one question. The system block goes with the
    first question only - it speaks of 'some questions' addressed in this
    same context; repeating it per question is noise. The blank line after
    it models the separation we want the model to reproduce in its output."""
    if with_system:
        return ("#system\n" + SYSTEM_PROMPT + "\n\n"
                + "#question\n" + question + "\n\n#answer")
    return "#question\n" + question + "\n\n#answer"


def read_reply(f, prefix, timeout):
    """Read until a message starting with `prefix` arrives, skipping
    everything else: leftover speculation of abandoned sequences is async
    wire traffic that can interleave with any command's reply."""
    deadline = time.time() + timeout
    while True:
        left = deadline - time.time()
        if left <= 0:
            return None
        m = f.read(min(left, 1.0))
        if m is not None and m.startswith(prefix):
            return m


def ask(f, p, seq_id, prompt, n, with_system):
    """Pose one question as sequence seq_id. True if the answer terminated."""
    f.send("tokenize " + format_prompt(prompt, with_system))
    r = read_reply(f, "tokens ", 5)
    if not r:
        print("error: tokenize timed out", file=sys.stderr)
        return False
    tokens = [int(t) for t in r.split()[2:]]

    f.send(f"create_sequence {seq_id}")
    f.add(seq_id, tokens)
    f.send(f"evaluate {seq_id}")

    produced = []    # confirmed tokens of this answer
    text = ""        # their rendered pieces, accumulated for the rule
    terminated = False
    silent_since = None
    while not terminated:
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
        if not c or c[1] != seq_id:
            # another sequence (or no confidence message): leftover
            # speculation of an abandoned answer - ignore it entirely
            continue
        pos, conf = Fllama.top10(m)
        tok = max(conf, key=conf.get)
        piece = p.get(tok, "")
        # its rendered text is printed by the client on receive; wire-speed
        # feedback follows: this token goes straight back as its own
        # add_tokens request, no batching or waiting
        f.add(seq_id, [tok])
        f.send(f"evaluate {seq_id}")
        sys.stdout.write(piece)  # stream at arrival
        sys.stdout.flush()
        produced.append(tok)
        text += piece
        if len(produced) >= n:
            # reached the token limit for this question - terminate
            print("\nTOKEN LIMIT REACHED", flush=True)
            terminated = True
        elif "\n\n" in text.lstrip():
            # paragraph break in the answer content: done. From now on the
            # client neither confirms nor prints this sequence's tokens -
            # the server keeps speculating on it, and that is what we test.
            # No leading newline here: the streamed break already put the
            # cursor at line start (a break means text ends "\n\n").
            print("PARAGRAPH BREAK DETECTED", flush=True)
            terminated = True

    say(f"sequence {seq_id}: {len(produced)} token(s), {len(text)} char(s)")
    return terminated


def main():
    ap = argparse.ArgumentParser(description="sequential question test with paragraph stop")
    ap.add_argument("questions", nargs="+",
                    help="questions to pose, in sequence")
    ap.add_argument("-n", type=int, default=200,
                    help="tokens per question (default 200)")
    ap.add_argument("--host", default="127.0.0.1",
                    help="server address (default 127.0.0.1)")
    ap.add_argument("--model", default=None,
                    help=f"model name (default {MODEL})")
    args = ap.parse_args()

    try:
        f = Fllama(host=args.host)
        f.send(f"use_model {args.model or MODEL}")
        p = f.pieces(60)  # extended timeout for model load
    except ConnectionRefusedError:
        print(f"\nERROR: no server at {args.host}", flush=True)
        return 1
    except (OSError, ConnectionError, RuntimeError) as e:
        # setup failure (no server, model load problem, bad pieces reply) —
        # one line on stderr instead of a traceback
        print(f"error: {e}", file=sys.stderr)
        return 1

    ok = True
    try:
        for i, prompt in enumerate(args.questions, start=1):
            if i > 1:
                sys.stdout.write("\n")  # separate the transcript entries
                sys.stdout.flush()
            # show the EXACT prompt as sent - byte-exact input for
            # debugging what the model actually received; the system block
            # rides with the first question only
            print(format_prompt(prompt, i == 1), flush=True)
            if not ask(f, p, i, prompt, args.n, i == 1):
                ok = False
    except KeyboardInterrupt:
        # Ctrl-C — flag it on a fresh line in the text stream, exit code 130
        print("\nINTERRUPTED", flush=True)
        return 130
    finally:
        f.close()

    return 0 if ok else 2


if __name__ == "__main__":
    sys.exit(main())
