#!/usr/bin/env python3
"""Extract the source file path where a Funky symbol is defined.

Reads the HTML doc page and prints the 'defined in' file path.

Usage:
    python3 funky_symbol_source.py std::println
    python3 funky_symbol_source.py std__println
    python3 funky_symbol_source.py std_types::io/std::handle_events
"""

import re
import sys
from pathlib import Path

HTML_DIR = Path(__file__).resolve().parent.parent / "html" / "symbols"


def symbol_to_html(symbol: str) -> Path:
    """Convert a symbol name to its HTML path.

    Accepts both forms:
        std::println   ->  std__println.html
        std__println    ->  std__println.html
    """
    fname = symbol.replace("::", "__") + ".html"
    parts = fname.split("/")
    return HTML_DIR.joinpath(*parts)


def extract_source(html_path: Path) -> str | None:
    """Extract the 'defined in' source path from an HTML doc page."""
    text = html_path.read_text()

    # Match the 'defined in' footer anchor text:
    #   (defined in <a href="...">basic/io/io.fky</a>)
    m = re.search(r'\(defined in <a [^>]*>([^<]+)</a>\)', text)
    if m:
        return m.group(1)

    return None


def main():
    if len(sys.argv) != 2:
        print(f"Usage: {sys.argv[0]} SYMBOL", file=sys.stderr)
        print("  e.g. std::println  std_types::string/std__append", file=sys.stderr)
        sys.exit(1)

    symbol = sys.argv[1]
    html_path = symbol_to_html(symbol)

    if not html_path.is_file():
        print(f"Error: HTML page not found for '{symbol}'", file=sys.stderr)
        print(f"  looked in: {html_path}", file=sys.stderr)
        parent = html_path.parent
        if parent.is_dir():
            stem = html_path.stem
            candidates = sorted(
                [p.name for p in parent.glob("*.html")
                 if stem.replace("__", "z") in p.name.replace("__", "z")]
            )[:5]
            if candidates:
                print("  similar:", ", ".join(candidates), file=sys.stderr)
        sys.exit(1)

    src = extract_source(html_path)
    if src is None:
        print(f"Error: no 'defined in' footer in {html_path.name}", file=sys.stderr)
        sys.exit(1)

    print(src)


if __name__ == "__main__":
    main()
