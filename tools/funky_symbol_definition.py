#!/usr/bin/env python3
"""Extract the source definition of a Funky symbol.

Uses funky_symbol_source.py to locate the file, then extracts the
actual definition block from template files (.template) or Funky
modules (.fky).

With --base-only, skip implementations and only show the base definition.
By default, implementations are included for polymorphic functions.

Usage:
    python3 funky_symbol_definition.py std::println
    python3 funky_symbol_definition.py std_types::object
    python3 funky_symbol_definition.py --base-only std::fill_trapezoid
"""

import re
import subprocess
import sys
from pathlib import Path

REPO_ROOT = Path(__file__).resolve().parent.parent
TOOL_DIR = Path(__file__).resolve().parent
SOURCE_TOOL = TOOL_DIR / "funky_symbol_source.py"
IMPL_TOOL = TOOL_DIR / "funky_symbol_implementations.py"

# Template keywords that start a top-level definition
TEMPLATE_KEYWORDS = r"TYPE|FUNCTION|METHOD|OBJECT|POLY|UNIQUE|CODE"


def get_implementations(symbol: str) -> list[str]:
    """Return implementation names for a polymorphic function via funky_symbol_implementations.py."""
    r = subprocess.run(
        ["python3", str(IMPL_TOOL), symbol],
        capture_output=True, text=True,
    )
    if r.returncode != 0:
        return []
    return r.stdout.strip().split('\n') if r.stdout.strip() else []


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
    Constant/variable:   $namespace::symbol value
    Attribute (standalone): $TYPE.attr_name value
    Attribute (inside TYPE block): .attr_name value
      -- shorthand for $TYPE.attr_name value per the type definition

    Returns the header line + body up to the next top-level definition.
    """
    escaped = re.escape(symbol)
    # Function/poly pattern: $namespace::symbol:  or  $namespace::symbol ()
    func_pattern = re.compile(
        r'\$\s*' + escaped + r'(?:[ \t]*:[ \t]*|[ \t]+\(\))',
        re.MULTILINE,
    )
    # Constant/value/attribute pattern: $namespace::symbol value (no colon, no parens)
    const_pattern = re.compile(
        r'(?:^|(?<=\n))\$\s*' + escaped + r'\s+\S+',
        re.MULTILINE,
    )

    m = func_pattern.search(source)
    if not m:
        m = const_pattern.search(source)
    if m:
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

    # Dot-attribute inside a TYPE block: .attr_name value
    # The symbol is "std_types::window_manager.current_time_of"
    # The source has ".current_time_of undefined" inside the TYPE block
    # which is shorthand for "$std_types::window_manager.current_time_of undefined"
    local_attr = symbol.rsplit('.', 1)[-1] if '.' in symbol else symbol
    type_name = symbol.rsplit('.', 1)[0] if '.' in symbol else symbol
    dot_attr_pattern = re.compile(
        r'(?:^|(?<=\n))(\s+)\.' + re.escape(local_attr) + r'(\s+\S+)',
        re.MULTILINE,
    )

    m = dot_attr_pattern.search(source)
    if not m:
        return None

    # Return the expanded form so the reader sees the full symbol name
    indent = m.group(1)
    value = m.group(2)
    return f"${type_name}.{local_attr}{value}\n"


# ---------------------------------------------------------------------------
# Main
# ---------------------------------------------------------------------------

def unmangle(symbol: str) -> str:
    """Convert mangled symbol form back to real source form."""
    return symbol.replace("__", "::")


def symbol_variants(symbol: str) -> list[str]:
    """Generate candidate source names for a symbol.

    Source files often omit the 'std::' qualifier on method names.
    Attributes use dot notation (TYPE.attr) instead of slash notation.
    """
    real = unmangle(symbol)
    if '/' not in real:
        return [real]
    type_part, method_part = real.split('/', 1)
    candidates = [real]
    if "::" in method_part:
        # Method has a namespace prefix (e.g. "std::push" or "llama::open_model").
        # Source files often omit it — try the bare method name too.
        bare = method_part.split("::", 1)[1]
        candidates.append(type_part + "/" + bare)
        candidates.append(type_part + "." + bare)
    candidates.append(type_part + "/" + method_part)
    candidates.append(type_part + "." + method_part)
    return candidates


def find_definition(symbol: str) -> str | None:
    """Look up and print the definition of a single symbol. Returns the definition text or None."""
    source_path = get_source_file(symbol)

    if not source_path.is_file():
        print(f"Error: source file not found: {source_path}", file=sys.stderr)
        return None

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
        return None

    if block is None:
        rel = str(source_path.relative_to(REPO_ROOT))
        real = unmangle(symbol)
        print(f"Error: could not find the definition of '{real}' in {rel}", file=sys.stderr)
        return None

    return block


def main():
    import argparse
    parser = argparse.ArgumentParser(description="Extract source definition of a Funky symbol.")
    parser.add_argument("symbol", help="Symbol name (e.g. std::println)")
    parser.add_argument("--base-only", action="store_true",
                        help="Only print the base definition, skip implementations")
    args = parser.parse_args()

    symbol = args.symbol

    block = find_definition(symbol)
    if block is not None:
        print(block, end="")

    if not args.base_only:
        impls = get_implementations(symbol)
        for impl in impls:
            impl_block = find_definition(impl)
            if impl_block is not None:
                print(impl_block, end="")


if __name__ == "__main__":
    main()
