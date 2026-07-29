#!/usr/bin/env python3
"""Extract the source definition of a Funky symbol.

Uses funky_symbol_source.py to locate the file, then extracts the
actual definition block from template files (.template) or Funky
modules (.fky).

Usage:
    python3 funky_symbol_definition.py std::println
    python3 funky_symbol_definition.py std_types::object
    python3 funky_symbol_definition.py std::plus
"""

import re
import subprocess
import sys
from pathlib import Path

REPO_ROOT = Path(__file__).resolve().parent.parent
TOOL_DIR = Path(__file__).resolve().parent
SOURCE_TOOL = TOOL_DIR / "funky_symbol_source.py"

# Template keywords that start a top-level definition
TEMPLATE_KEYWORDS = r"TYPE|FUNCTION|METHOD|OBJECT|POLY|UNIQUE|CODE"


def get_source_file(symbol: str) -> Path:
    """Return the repo-relative source path for a symbol via funky_symbol_source.py."""
    r = subprocess.run(
        ["python3", str(SOURCE_TOOL), symbol],
        capture_output=True, text=True,
    )
    if r.returncode != 0:
        print(r.stderr.strip(), file=sys.stderr)
        sys.exit(1)
    src_rel = r.stdout.strip()
    return REPO_ROOT / src_rel


# ---------------------------------------------------------------------------
# Template files (.template)
# ---------------------------------------------------------------------------

def find_template_def(source: str, symbol: str) -> str | None:
    """Extract a definition block from a template file.

    Two structural patterns:
      1. Brace-delimited (FUNCTION, METHOD, OBJECT, UNIQUE):
         Keyword SYMBOL ... { ... }
         Block ends at the matching closing brace.

      2. Comment-only (POLY, TYPE):
         Keyword SYMBOL ...
         # comments
         Block ends at the next keyword on its own line at column 0.
    """
    # Match the header line for our symbol
    header_re = re.compile(
        r'^(' + TEMPLATE_KEYWORDS + r')\s+(.+)$',
        re.MULTILINE,
    )

    for m in header_re.finditer(source):
        kw = m.group(1)
        sym = m.group(2).strip()
        # Strip " -> parent" from TYPE headers
        if " -> " in sym:
            sym = sym.split(" -> ")[0].strip()

        if sym != symbol:
            continue

        block_start = m.start()
        block_first_line_end = m.end()

        # Look ahead from end of header line for opening brace
        after_header = source[block_first_line_end:]
        stripped = after_header.lstrip()

        if stripped.startswith('{'):
            brace_pos = block_first_line_end + source[block_first_line_end:].find('{')
            depth = 0
            pos = brace_pos
            while pos < len(source):
                ch = source[pos]
                if ch == '{':
                    depth += 1
                elif ch == '}':
                    depth -= 1
                    if depth == 0:
                        return source[block_start:pos + 1]
                pos += 1
            return source[block_start:]
        else:
            next_kw = re.search(r'^(' + TEMPLATE_KEYWORDS + r')\s+', after_header, re.MULTILINE)
            if next_kw:
                return source[block_start:block_first_line_end + next_kw.start()]
            else:
                return source[block_start:]

    return None


# ---------------------------------------------------------------------------
# Funky modules (.fky)
# ---------------------------------------------------------------------------

def find_fky_def(source: str, symbol: str) -> str | None:
    """Extract a Funky module definition.

    Regular function:    $namespace::symbol:
    Polymorphic decl:    $namespace::symbol ()

    Returns the header line + body up to the next top-level definition.
    """
    escaped = re.escape(symbol)
    pattern = re.compile(
        r'\$\s*' + escaped + r'(?:[ \t]*:[ \t]*|[ \t]+\(\))',
        re.MULTILINE,
    )

    m = pattern.search(source)
    if not m:
        return None

    block_start = m.start()
    header_end = source.index('\n', block_start) + 1

    # Collect lines until next top-level definition
    remaining = source[header_end:]
    lines = remaining.split('\n')
    collected: list[str] = []

    for line in lines:
        stripped = line.lstrip()
        if not stripped:
            collected.append(line)
            continue
        # Only break on top-level definitions (column 0)
        if not line[0].isspace() and (stripped.startswith('$') or stripped.startswith('<')):
            break
        collected.append(line)

    result = source[block_start:header_end] + '\n'.join(collected)
    if not result.endswith('\n'):
        result += '\n'
    return result


# ---------------------------------------------------------------------------
# Main
# ---------------------------------------------------------------------------

def unmangle(symbol: str) -> str:
    """Convert mangled symbol form back to real source form."""
    return symbol.replace("__", "::")


def symbol_variants(symbol: str) -> list[str]:
    """Generate candidate source names for a symbol.

    Source files often omit the 'std::' qualifier on method names.
    """
    real = unmangle(symbol)
    if '/' not in real:
        return [real]
    type_part, method_part = real.split('/', 1)
    candidates = [real]
    if method_part.startswith("std::"):
        candidates.append(type_part + "/" + method_part[5:])
    return candidates


def main():
    if len(sys.argv) != 2:
        print(f"Usage: {sys.argv[0]} SYMBOL", file=sys.stderr)
        print("  e.g. std::println  std_types__string/std__put", file=sys.stderr)
        sys.exit(1)

    symbol = sys.argv[1]
    source_path = get_source_file(symbol)

    if not source_path.is_file():
        print(f"Error: source file not found: {source_path}", file=sys.stderr)
        sys.exit(1)

    source_text = source_path.read_text()
    ext = source_path.suffix
    variants = symbol_variants(symbol)

    if ext == ".template":
        block = None
        for v in variants:
            block = find_template_def(source_text, v)
            if block:
                break
    elif ext == ".fky":
        block = None
        for v in variants:
            block = find_fky_def(source_text, v)
            if block:
                break
    else:
        print(f"Error: unsupported file type '{ext}' for {source_path}", file=sys.stderr)
        sys.exit(1)

    if block is None:
        rel = str(source_path.relative_to(REPO_ROOT))
        real = unmangle(symbol)
        print(f"Error: could not find the definition of '{real}' in {rel}", file=sys.stderr)
        sys.exit(1)

    print(block, end="")


if __name__ == "__main__":
    main()
