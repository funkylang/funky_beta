"""Named colour constants for pyterm.

Each colour is a plain (r, g, b) tuple with components in 0..255, usable
anywhere a colour value is expected. Truecolour first-class: emitted as
SGR 38;2 / 48;2 escape sequences.

British spelling throughout: "colour".
"""

BLACK = (0, 0, 0)
WHITE = (255, 255, 255)

RED = (255, 0, 0)
GREEN = (0, 255, 0)
BLUE = (0, 0, 255)
YELLOW = (255, 255, 0)
CYAN = (0, 255, 255)
MAGENTA = (255, 0, 255)

# Light / soft variants.
RED_LIGHT = (255, 120, 120)
GREEN_LIGHT = (120, 255, 120)
BLUE_LIGHT = (120, 120, 255)
YELLOW_LIGHT = (255, 240, 150)
CYAN_LIGHT = (150, 255, 255)
MAGENTA_LIGHT = (255, 150, 255)

GREY = (128, 128, 128)
GREY_DARK = (64, 64, 64)

__all__ = [
    "BLACK", "WHITE",
    "RED", "GREEN", "BLUE", "YELLOW", "CYAN", "MAGENTA",
    "RED_LIGHT", "GREEN_LIGHT", "BLUE_LIGHT",
    "YELLOW_LIGHT", "CYAN_LIGHT", "MAGENTA_LIGHT",
    "GREY", "GREY_DARK",
]
