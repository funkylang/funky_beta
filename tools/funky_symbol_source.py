#!/usr/bin/env python3
"""Extract the source file path where a Funky symbol is defined.

Reads html/all_symbols.txt and prints the 'defined in' file path.

Usage:
    python3 funky_symbol_source.py std::println
    python3 funky_symbol_source.py std__println
    python3 funky_symbol_source.py std_types::io/std::handle_events
"""

import re
import sys
from pathlib import Path

ALL_SYMBOLS = Path(__file__).resolve().parent.parent / "html" / "all_symbols.txt"


def find_source(symbol: str) -> str | None:
    """Look up a symbol in all_symbols.txt and return its source file path."""
    text = ALL_SYMBOLS.read_text()
    # Unmangle __ to :: for lookup
    sym = symbol.replace('__', '::')
    # Match symbol exactly at start of line
    pattern = re.compile(rf'^{re.escape(sym)}\s', re.MULTILINE)
    m = pattern.search(text)
    if m is None:
        return None
    line = text[m.start():text.index('\n', m.start())]
    # Source file is the last parenthesized group: (path/to/file)
    src = line.rfind('(')
    end = line.rfind(')')
    if src >= 0 and end > src:
        return line[src + 1:end]
    return None


def main():
    if len(sys.argv) != 2:
        print(f"Usage: {sys.argv[0]} SYMBOL", file=sys.stderr)
        print("  e.g. std::println  std_types::string/std__append", file=sys.stderr)
        sys.exit(1)

    symbol = sys.argv[1]

    if not ALL_SYMBOLS.is_file():
        print(f"Error: {ALL_SYMBOLS} not found", file=sys.stderr)
        print("  run tools/generate_all_symbols first", file=sys.stderr)
        sys.exit(1)

    src = find_source(symbol)
    if src is None:
        print(f"Error: symbol '{symbol}' not found in {ALL_SYMBOLS.name}", file=sys.stderr)
        sys.exit(1)

    print(src)


if __name__ == "__main__":
    main()
