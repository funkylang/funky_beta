#!/usr/bin/env python3
"""fllama.c concurrency test: N persons, N sequences, live pyterm display.

Single-threaded client with ONE TCP connection and N sequences (one per person).
Each sequence's query is "Tell me about the life of <name>. The server
evaluates all sequences in parallel while this script reads from the single
connection and renders tokens into each person's pyterm window based on the
sequence number embedded in each incoming message.

PREREQUISITE: an fllama server already running at --host/--port with enough
--parallel capacity (>= N). This test is client-only: it never starts, restarts
or signals the server. Behaviour is identical across server configurations
(--eager on/off, different --mtp): rendering is purely reactive to arriving
tokens (steady decode vs lookahead bursts alike).

stdout: the rendered UI (pyterm only)
Bottom log window: wire traffic + progress info via PytermLogWindow
"""

import argparse
import os
import sys
import time

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))

import fllama_client
from fllama_client import Fllama, say, MODEL, load_model, stream_tokens
from pyterm import Terminal

fllama_client.INFO_STREAM = sys.stderr   # keep stdout for the UI

TOKENS_PER_PERSON = 60                   # generation budget per sequence

PERSONS = [
    "Marie Curie", "Nikola Tesla", "Leonardo da Vinci", "Cleopatra",
    "Ada Lovelace", "Albert Einstein", "Isaac Newton", "Galileo Galilei",
    "Hypatia of Alexandria", "Alan Turing", "Grace Hopper", "Rosalind Franklin",
    "Nikolaus Copernicus", "Carl Sagan", "Emmy Noether", "Stephen Hawking",
]

PALETTE = [
    (255, 90, 90),     # red-ish
    (90, 255, 160),    # green-ish
    (90, 160, 255),    # blue-ish
    (255, 220, 90),    # yellow-ish
    (255, 130, 220),   # pink-ish
    (120, 220, 255),   # cyan-ish
    (190, 140, 255),   # violet
    (255, 170, 80),    # orange
]


class PytermLogWindow:
    """File-like object that routes INFO_STREAM writes into a pyterm window at the
    bottom of the screen, keeping the last `height` log lines visible.

    Uses only Window.print / Window.println: lines fill downward until the band is
    full; afterwards each new line scrolls the oldest off via a scroll newline plus
    a print on the freed bottom row.
    """

    def __init__(self, term, height=2):
        self.term = term
        self.height = height
        self.base_row = term.height - height
        self.win = None
        self.lines_written = 0

    def setup(self):
        with self.term.lock:
            self.win = self.term.window(self.base_row + 1, self.term.height)
            self.win.draw_colour = (100, 120, 180)
            self.lines_written = 0

    def write(self, msg):
        """Write a message (called like file.write())."""
        line = msg.rstrip('\n')
        if not line.strip():
            return 0

        win = self.win
        with self.term.lock:
            if win.row < win.bottom:
                # Room below: write here, cursor advances.
                win.println(line)
                self.lines_written += 1
            elif self.lines_written < self.height:
                # Bottom row of the band, first time: park here without scrolling.
                win.print(line)
                self.lines_written = self.height
            else:
                # Band full: scroll the oldest line off, write on the freed bottom row.
                win.println("")
                win.print(line)
        return len(msg)

    def flush(self):
        """No-op (pyterm writes are immediate)."""
        pass

    # Support print(file=obj)
    @property
    def name(self):
        return "<pyterm-log>"


def dim(colour, factor=0.5):
    return tuple(int(c * factor) for c in colour)


def mark_header(term, header_row, name, colour, status):
    """Rewrite the header row: name + status marker in the person's colour."""
    with term.lock:
        term.set_draw_colour(colour)
        term.put(f"{name} [{status}]", 1, header_row)


def setup_sequences(f, n, persons):
    """Tokenize queries and create sequences on an existing connection.

    Assumes model is already loaded on the server.
    Returns a dict mapping seq_id -> {'tokens': [...], 'name': str, 'colour': tuple}
    """
    seq_info = {}

    for i in range(n):
        name = persons[i]
        query = f"Tell me about the life of {name}."

        # Tokenize this person's query
        f.send(f"tokenize {query}")
        r = f.read()   # uses self.timeout - already set by use_model if needed
        if not (r and r.startswith("tokens ")):
            raise RuntimeError(f"tokenize failed: {r!r}")
        tokens = [int(t) for t in r.split()[2:]]

        # Create sequence with unique ID within this connection
        seq_id = i + 1  # sequences 1..n
        f.send(f"create_sequence {seq_id}")
        f.add(seq_id, tokens)

        seq_info[seq_id] = {
            'tokens': tokens,
            'name': name,
            'colour': PALETTE[i % len(PALETTE)],
        }

    # Start evaluating all sequences in parallel on the server
    for seq_id in sorted(seq_info.keys()):
        f.send(f"evaluate {seq_id}")

    return seq_info


def main():
    ap = argparse.ArgumentParser(description="fllama concurrent persons test")
    ap.add_argument("n", type=int, help="number of persons / sequences (1..16)")
    ap.add_argument("--host", default="127.0.0.1",
                    help="server address (default 127.0.0.1)")
    ap.add_argument("--port", type=int, default=7683,
                    help="server port (default 7683)")
    ap.add_argument("--model", default=None,
                    help=f"model name (default {MODEL})")
    args = ap.parse_args()

    if not (1 <= args.n <= 16):
        print("error: n must be between 1 and 16", file=sys.stderr)
        return 1

    try:
        term = Terminal()
        # Clear the screen before starting
        with term.lock:
            term.clear_screen()
    except Exception as e:
        print(f"error: terminal init failed: {e}", file=sys.stderr)
        return 1

    # Reserve bottom rows for log window
    LOG_WINDOW_HEIGHT = 2
    usable_height = term.height - LOG_WINDOW_HEIGHT
    block = usable_height // args.n

    if block < 2:
        print(f"error: terminal too short for {args.n} persons "
              f"({usable_height} usable rows after reserving log window; need at least {args.n * 2})",
              file=sys.stderr)
        return 1

    # Create the bottom log window and route INFO_STREAM to it
    log_window = PytermLogWindow(term, height=LOG_WINDOW_HEIGHT)
    log_window.setup()
    fllama_client.INFO_STREAM = log_window

    # layout: block i = header row + band of block-1 rows below it
    wins, header_rows = {}, {}
    for i in range(args.n):
        base = 1 + i * block
        seq_id = i + 1
        # Ensure we don't write into the log window region
        max_row = min(base + block - 1, usable_height)
        wins[seq_id] = term.window(base + 1, max_row)
        header_rows[seq_id] = base
        win = wins[seq_id]
        win.draw_colour = PALETTE[i % len(PALETTE)]

    # headers before streaming starts (no concurrency yet)
    for i in range(args.n):
        seq_id = i + 1
        term.set_draw_colour(PALETTE[i % len(PALETTE)])
        term.put(PERSONS[i], 1, header_rows[seq_id])

    say(f"starting {args.n} sequence(s) against {args.host}:{args.port}")

    # Single connection for everything
    f = Fllama(host=args.host, port=args.port)
    try:
        # Load model ONCE (it's cached server-side across all connections)
        pieces = load_model(f, args.model or MODEL)

        # Set up all sequences on this single connection
        seq_info = setup_sequences(f, args.n, PERSONS)

    except Exception as e:
        say(f"setup failed: {e}")
        return 1

    # Per-person state tracking
    produced = {seq_id: 0 for seq_id in seq_info}
    done = set()

    # Main event loop: stream tokens and route them based on sequence number
    # The library handles timeout logic - raises if server goes silent too long
    try:
        for seq_id, top in stream_tokens(f, list(seq_info.keys())):
            name = seq_info[seq_id]['name']

            # Confirm the token back to the server (wire-speed)
            f.add(seq_id, [top])
            if produced.get(seq_id, 0) < TOKENS_PER_PERSON - 1:
                f.send(f"evaluate {seq_id}")

            # Update tracking
            produced[seq_id] = produced.get(seq_id, 0) + 1

            # Render the token text into the window
            wins[seq_id].print(pieces.get(top, ""))

            # Check if this person is done
            if produced[seq_id] == TOKENS_PER_PERSON:
                done.add(seq_id)
                mark_header(term, header_rows[seq_id], name,
                           seq_info[seq_id]['colour'], "done")
                say(f"[{name}] finished ({produced[seq_id]} tokens)")

            # Stop if everyone's done
            if len(done) == args.n:
                break

    except Exception as e:
        say(f"error: {e}")
        f.close()
        return 1

    # Cleanup: close the connection
    f.close()

    term.show_cursor()   # hand the screen back visibly
    return 0


if __name__ == "__main__":
    sys.exit(main())
