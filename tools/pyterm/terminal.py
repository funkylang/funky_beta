"""The Terminal class: owns an output stream and the device state model.

Targets modern terminals (konsole, gnome-terminal family): truecolour, full
VT escape support, UTF-8. No degradation for older terminals is designed in.

The library tracks its own cursor position and scroll region in software so
that absolute placement and window switching stay correct without querying
the device.

Cursor visibility: hidden by default (programmatic rendering mode); show it
for user input with show_cursor().
"""

import os
import sys
import threading


# ANSI escape fragments.
ESC = "\x1b["


class Terminal:

    def __init__(self, stream=None):
        self.stream = sys.stdout if stream is None else stream
        self._width, self._height = _query_size(self.stream)

        # Device state model (kept in sync with every write we emit).
        self.row = 1          # current cursor row   (1-based)
        self.col = 1          # current cursor column (1-based)
        self._pending_wrap = False   # char written in last col; wrap on next advance
        self.scroll_top = 1   # current scroll region top    (1-based, inclusive)
        self.scroll_bottom = self.height
        self.active_window = None
        self._windows = []
        # Reentrant lock guarding all stream writes and the state model.
        # RLock so a public primitive is safe on its own AND compound
        # operations (Window.print = activate + write) can hold it across
        # calls without deadlocking — those stay one critical section.
        self.lock = threading.RLock()

        # Rendering mode on a real tty: cursor hidden, autowrap on.
        # Autowrap is a precondition of our position model (characters written
        # at the last column wrap, they must not be dropped).
        if self._is_tty():
            self.write_raw(ESC + "?25l" + ESC + "?7h")

    # ------------------------------------------------------------------ #
    # Geometry.
    # ------------------------------------------------------------------ #

    @property
    def width(self):
        return self._width

    @property
    def height(self):
        return self._height

    def _is_tty(self):
        try:
            return self.stream.isatty()
        except Exception:
            return False

    def resize(self):
        """Re-query the terminal size (call on SIGWINCH)."""
        self._width, self._height = _query_size(self.stream)
        if self.scroll_bottom == 0 or self.scroll_bottom > self.height:
            self.reset_scroll_region()

    # ------------------------------------------------------------------ #
    # Raw writing and the position model.
    # ------------------------------------------------------------------ #

    def write_raw(self, text):
        """Write bytes to the stream without touching the state model."""
        self.stream.write(text)
        self.stream.flush()

    def print(self, text):
        """Print text at the current position; no trailing newline."""
        with self.lock:
            self._write_text(text)

    def println(self, text=""):
        """Print text at the current position followed by a newline."""
        with self.lock:
            if text:
                self._write_text(text)
            self._newline()

    def put(self, text, col, row):
        """Place text at absolute (col, row), 1-based; moves the cursor there."""
        with self.lock:
            self.write_raw(ESC + f"{row};{col}H")
            self.row, self.col = row, col
            self._pending_wrap = False
            self._write_text(text)

    def clear_line(self):
        """Erase the current line (cursor unchanged)."""
        with self.lock:
            self.write_raw(ESC + "2K")

    def clear_screen(self):
        """Erase the entire screen and move cursor to home position."""
        with self.lock:
            self.write_raw(ESC + "2J" + ESC + "H")
            # Reset device state model
            self.row = 1
            self.col = 1
            self._pending_wrap = False

    # ------------------------------------------------------------------ #
    # Colour (Funky-style: draw = foreground, clear = background).
    # ------------------------------------------------------------------ #

    def set_draw_colour(self, colour):
        r, g, b = colour
        with self.lock:
            self.write_raw(ESC + f"38;2;{r};{g};{b}m")

    def set_clear_colour(self, colour):
        r, g, b = colour
        with self.lock:
            self.write_raw(ESC + f"48;2;{r};{g};{b}m")

    def reset_colours(self):
        with self.lock:
            self.write_raw(ESC + "39" + ESC + "49m")

    # ------------------------------------------------------------------ #
    # Cursor visibility.
    # ------------------------------------------------------------------ #

    def show_cursor(self):
        self.write_raw(ESC + "?25h")

    def hide_cursor(self):
        self.write_raw(ESC + "?25l")

    # ------------------------------------------------------------------ #
    # Scroll region (public primitives; DECSTBM).
    # ------------------------------------------------------------------ #

    def set_scroll_region(self, top, bottom):
        """Confine scrolling to rows top..bottom (1-based, inclusive)."""
        if not (1 <= top <= bottom <= self.height):
            raise ValueError(f"invalid scroll region {top}..{bottom} "
                             f"(screen is 1..{self.height})")
        with self.lock:
            saved_row, saved_col = self.row, self.col
            # DECSTBM jumps the cursor to home; restore afterwards.
            self.write_raw(ESC + f"{top};{bottom}r")
            self.row, self.col = 1, 1
            self.scroll_top, self.scroll_bottom = top, bottom
            self._pending_wrap = False
            self.write_raw(ESC + f"{saved_row};{saved_col}H")

    def reset_scroll_region(self):
        """Restore full-screen scrolling."""
        if self.scroll_top == 1 and self.scroll_bottom == self.height:
            return
        with self.lock:
            saved_row, saved_col = self.row, self.col
            self.write_raw(ESC + "r")
            self.row, self.col = 1, 1
            self.scroll_top, self.scroll_bottom = 1, self.height
            self._pending_wrap = False
            self.write_raw(ESC + f"{saved_row};{saved_col}H")

    # ------------------------------------------------------------------ #
    # Windows.
    # ------------------------------------------------------------------ #

    def window(self, top, bottom):
        """Create (or return) the window spanning rows top..bottom.

        A 1-row band (top == bottom) is a ticker: text scrolls past showing
        only the last line.
        """
        if not (1 <= top <= bottom <= self.height):
            raise ValueError(f"invalid window {top}..{bottom} "
                             f"(screen is 1..{self.height})")
        for win in self._windows:
            if win.top == top and win.bottom == bottom:
                return win
        from pyterm.window import Window   # local import: avoid cycle
        win = Window(self, top, bottom)
        self._windows.append(win)
        return win

    # ------------------------------------------------------------------ #
    # Internals: text writing with position tracking.
    # ------------------------------------------------------------------ #

    def _write_text(self, text):
        for ch in text:
            if ch == "\n":
                self._newline()
                continue
            if self._pending_wrap:
                self._advance_down()
            self.stream.write(ch)
            if self.col == self.width:
                # Written fine; the terminal cannot show the cursor further
                # right, so it enters pending-wrap (scroll happens on the
                # next advance).
                self._pending_wrap = True
            else:
                self.col += 1
        self.stream.flush()

    def _newline(self):
        # Model update: resolve pending wrap or advance one line; scrolling of
        # a region happens when the cursor cannot be displayed below the
        # bottom margin, so row clamps at scroll_bottom instead.
        if self._pending_wrap:
            self._advance_down()
        else:
            self.row += 1
            if self.row > self.scroll_bottom:
                self.row = self.scroll_bottom
            self.col = 1
        # Drive the real scroll with a line feed, then place the cursor where
        # the model says: LF column semantics differ between terminals, CUP
        # does not. The CUP never triggers additional scrolling (position is
        # within the region), so it cannot undo what the LF did.
        self.stream.write("\n")
        self._reposition()

    def _advance_down(self):
        self._pending_wrap = False
        self.col = 1
        if self.row < self.scroll_bottom:
            self.row += 1
        # else: pending-wrap resolution at the bottom margin scrolls the
        #       region (content shifts; cursor stays on the last row)

    def _reposition(self):
        """Force the real cursor to the model position (CUP)."""
        self.write_raw(ESC + f"{self.row};{self.col}H")


def _query_size(stream):
    """Query terminal size: ioctl(TIOCGWINSZ), env fallback, then defaults."""
    try:
        return os.get_terminal_size(stream.fileno())
    except Exception:
        pass
    w = int(os.environ.get("COLUMNS", 0) or 0)
    h = int(os.environ.get("LINES", 0) or 0)
    if w and h:
        return w, h
    return 80, 24
