#!/usr/bin/env python3
"""Extract the implementation names of a polymorphic function from all_symbols.txt.

Reads html/all_symbols.txt and prints each implementation symbol name,
one per line. Prints nothing (exit 0) if no implementations exist.

Usage:
    python3 funky_symbol_implementations.py std::fill_trapezoid
    python3 funky_symbol_implementations.py std::println
"""

import sys
from pathlib import Path

ALL_SYMBOLS = Path(__file__).resolve().parent.parent / "html" / "all_symbols.txt"


def main():
    if len(sys.argv) != 2:
        print(f"Usage: {sys.argv[0]} SYMBOL", file=sys.stderr)
        print("  e.g. std::fill_trapezoid  std::println", file=sys.stderr)
        sys.exit(1)

    symbol = sys.argv[1].replace('__', '::')

    if not ALL_SYMBOLS.is_file():
        print(f"Error: {ALL_SYMBOLS} not found", file=sys.stderr)
        print("  run tools/generate_all_symbols first", file=sys.stderr)
        sys.exit(1)

    # Find lines like "type/std::fill_trapezoid KIND (file)"
    impl_suffix = "/" + symbol
    for line in ALL_SYMBOLS.read_text().splitlines():
        name = line.split()[0]
        if name.endswith(impl_suffix) and len(name) > len(impl_suffix):
            print(name)


if __name__ == "__main__":
    main()
