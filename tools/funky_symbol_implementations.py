#!/usr/bin/env python3
"""Extract the implementation names of a polymorphic function from its HTML doc page.

Reads the Implementations table and prints each implementation symbol name,
one per line.

Usage:
    python3 funky_symbol_implementations.py std::fill_trapezoid
    python3 funky_symbol_implementations.py std::println
"""

import re
import sys
from pathlib import Path

HTML_DIR = Path(__file__).resolve().parent.parent / "html" / "symbols"


def symbol_to_html(symbol: str) -> Path:
    """Convert a symbol name to its HTML path."""
    fname = symbol.replace("::", "__") + ".html"
    parts = fname.split("/")
    return HTML_DIR.joinpath(*parts)


def extract_implementations(html_path: Path, symbol: str) -> list[str]:
    """Extract implementation names from the Implementations table."""
    text = html_path.read_text()

    # Find the Implementations section
    impl_section = re.search(r'<h2>Implementations</h2>\s*<table>(.*?)</table>', text, re.DOTALL)
    if not impl_section:
        return []

    # Extract anchor texts (type names like "std_types::screen")
    types = re.findall(r'<a\s+href="[^"]*">([^<]+)</a>', impl_section.group(1))

    # Build full implementation names by combining type with the symbol
    # e.g. "std_types::screen" + "std::fill_trapezoid" -> "std_types::screen/std::fill_trapezoid"
    impls = []
    # The base symbol is the short name without namespace for method lookup
    if "/" in symbol:
        base = symbol.split("/", 1)[1]
    else:
        base = symbol

    for typ in types:
        impls.append(f"{typ}/{base}")

    return impls


def main():
    if len(sys.argv) != 2:
        print(f"Usage: {sys.argv[0]} SYMBOL", file=sys.stderr)
        print("  e.g. std::fill_trapezoid  std::println", file=sys.stderr)
        sys.exit(1)

    symbol = sys.argv[1]
    html_path = symbol_to_html(symbol)

    if not html_path.is_file():
        print(f"Error: HTML page not found for '{symbol}'", file=sys.stderr)
        print(f"  looked in: {html_path}", file=sys.stderr)
        sys.exit(1)

    impls = extract_implementations(html_path, symbol)
    for impl in impls:
        print(impl)


if __name__ == "__main__":
    main()
