"""Window: a scoped view of the terminal with its own line range, colours
and current position.

A window cares about its own scrolling: when printing reaches the bottom of
its band and a newline is emitted, the terminal scrolls only that band
(the window sets the scroll region on activation). Callers never touch the
scroll API for this.

State is stored in absolute screen coordinates, so switching windows restores
each window's cursor position, colours and scroll region correctly.
"""


class Window:

    def __init__(self, term, top, bottom):
        self.term = term
        self.top = top          # first row of the band   (1-based)
        self.bottom = bottom    # last  row of the band   (1-based, inclusive)

        # Per-window state.
        self.draw_colour = None    # foreground ("draw") colour or None
        self.clear_colour = None   # background ("clear") colour or None
        self.row = top             # current position (absolute screen coords)
        self.col = 1

    def activate(self):
        """Make this window active: scroll region, colours, cursor position.

        Idempotent and always correct: it re-applies the region, colours and
        cursor every call rather than assuming they survived — anything else
        (a header write, another thread's put) may have moved the cursor or
        changed the region since this window last ran. Cheap CUP/SGR writes
        in exchange for correctness under concurrent use.
        """
        term = self.term
        with term.lock:
            if term.scroll_top != self.top or term.scroll_bottom != self.bottom:
                term.set_scroll_region(self.top, self.bottom)
            self._apply_colours()
            term.write_raw(f"\x1b[{self.row};{self.col}H")
            term.row, term.col = self.row, self.col
            term.active_window = self

    def _apply_colours(self):
        # A window's state fully defines its colours: whatever is set is
        # applied, everything else resets to the terminal default.
        self.term.reset_colours()
        if self.draw_colour is not None:
            self.term.set_draw_colour(self.draw_colour)
        if self.clear_colour is not None:
            self.term.set_clear_colour(self.clear_colour)

    def print(self, text):
        """Write text at the window's current position; no trailing newline.

        Atomically: activate + write is one critical section, so a
        concurrent thread cannot move the cursor between the two.
        """
        with self.term.lock:
            self.activate()
            self.term.print(text)
            self.row, self.col = self.term.row, self.term.col

    def println(self, text=""):
        """Write text plus a newline (wraps/scrolls within the band)."""
        with self.term.lock:
            self.activate()
            self.term.println(text)
            self.row, self.col = self.term.row, self.term.col

    def clear(self):
        """Erase the whole band with the window's colours."""
        with self.term.lock:
            self.activate()
            for r in range(self.top, self.bottom + 1):
                self.term.put("", 1, r)
                self.term.clear_line()
            # park at the top-left of the band
            self.term.put("", 1, self.top)
            self.row, self.col = self.top, 1
