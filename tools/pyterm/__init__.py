"""pyterm — a simple, modern Python terminal library for konsole and
gnome-terminal (and their derivatives).

Truecolour, full VT escapes, UTF-8. See concepts/pyterm.txt for the design.
"""

from pyterm.colors import *  # noqa: F401,F403
from pyterm.colors import __all__ as _colour_names
from pyterm.terminal import Terminal
from pyterm.window import Window

__all__ = ["Terminal", "Window"] + list(_colour_names)
