#!/usr/bin/env python3
"""Parse generated .c files and templates to produce a complete symbol list.

Scans runtime/builtins.c, compiled module .c files, and .template files
to extract FOT (Funky Object Type) entries with their exact classification.

Unlike html/all_symbols.txt which omits method implementations, this lists
EVERY symbol including polymorphic function implementations.

Output format (one per line, sorted):
    symbol_name TYPE (source_file)

Where TYPE is one of:
    POLYMORPHIC_FUNCTION, FUNCTION, BUILTIN_FUNCTION, IO_FUNCTION
    TYPE_FUNCTION, BUILTIN_TYPE_FUNCTION
    TYPE, BUILTIN_TYPE
    OBJECT, BUILTIN_OBJECT
    METHOD, BUILTIN_METHOD, IO_METHOD, BUILTIN_IO_METHOD
    ATTRIBUTE, BUILTIN_ATTRIBUTE
    UNIQUE_ITEM, CONSTANT, VARIABLE

source_file is the original .fky or .template source (relative to repo root).

Usage:
    python3 funky_symbol_list.py
    python3 funky_symbol_list.py > all_symbols_complete.txt
"""

import re
from pathlib import Path

REPO_ROOT = Path(__file__).resolve().parent.parent
BUILTINS_C = REPO_ROOT / "runtime" / "builtins.c"
TEMPLATES_DIR = REPO_ROOT / "runtime_templates"

# Libraries from configure
LIBRARIES = ["basic", "terminal", "ai", "web"]

# Private/internal namespaces to filter out
PRIVATE_NAMESPACES = {"basic_collections", "basic_loops", "basic_private", "basic_types", "builtin_types", "terminal_private"}

# FOT entry: FOT_TYPE, attr_count, N,  "name\000namespace", ...
FOT_ENTRY = re.compile(
    r'FOT_(\w+),\s*(\d+),\s*\d+,\s*\n'
    r'\s+"([^\\]+?)\\000([^"]*)"',
)

# const_idx for FOT_INITIALIZED
#  func_ns__name   -> FUNCTION/BUILTIN_FUNCTION (no sign = BUILTIN)
# -func_ns__name   -> FUNCTION (negative sign = compiled module function)
# -uni_ns__name    -> UNIQUE_ITEM (negative + uni_ prefix)
# -chr_NNN / -num_NNN / -list_... etc. -> CHARACTER/NUMBER/LIST constant
CONST_IDX = re.compile(r'\{\.const_idx\s*=\s*(-?)(func_|uni_|chr_|num_|list_|tuple_|sequence_|value_range_)(\S+)')

# t_func_name[] bytecode table declarations (matches "t_func_name[] = {")
FUNC_TABLE = re.compile(r'\bt_func_(\S+?)\[')

# FUNCTION_INFO: maps back to t_func table name
FUNC_INFO = re.compile(
    r'static\s+FUNCTION_INFO\s+i_func_(\S+)\s*=\s*\{\s*t_func_(\S+?)\s*,'
)

# ATTRIBUTE_DEFINITION block: static ATTRIBUTE_DEFINITION ns__type__attributes[] = { ... };
# Entry format: {left, right} where left is var_name, -var_name, or TYPE_FUNCTION
# and right is -func_*, -var_*, -num_*, etc.
ATTR_DEF_HEADER = re.compile(
    r'static\s+ATTRIBUTE_DEFINITION\s+(\S+)__attributes\s*\[\s*\]\s*=\s*\{'
)
# Individual entry: {var_name, value} or {-var_name, value} or {TYPE_FUNCTION, value}
ATTR_DEF_ENTRY = re.compile(
    r'\{(?:\s*)(-?var_\S+|TYPE_FUNCTION)\s*,\s*(-?(?:func_|var_|num_|chr_|uni_)\S+)\s*\}'
)
IO_CHECK = re.compile(r'CHECK_IO_ACCESS_RIGHTS')

# Template METHOD declarations
TEMPLATE_METHOD = re.compile(
    r'^(?:PUBLIC\s+)?METHOD\s+(.+?)(?:\s*$)',
    re.MULTILINE,
)

# Template FUNCTION declarations
TEMPLATE_FUNCTION = re.compile(
    r'^(?:PUBLIC\s+)?FUNCTION\s+(.+?)(?:\s*$)',
    re.MULTILINE,
)

# Template UNIQUE declarations (default namespace: std)
TEMPLATE_UNIQUE = re.compile(
    r'^UNIQUE\s+(\S+)',
    re.MULTILINE,
)


def rel_path(p):
    """Return repo-relative path string."""
    return str(Path(p).relative_to(REPO_ROOT))


def fky_source(c_path):
    """Return the .fky source file for a compiled module .c file."""
    fky = Path(c_path).with_suffix('.fky')
    if fky.is_file():
        return rel_path(fky)
    return rel_path(c_path)


def template_source(c_path):
    """Return template path for builtins.c (used as fallback)."""
    return "runtime/builtins.c"


def decode_mangled(name):
    """Decode t_func mangling: split on first ___ -> type/method, rest __ -> ::.

    e.g., std_types__screen___fill_trapezoid -> std_types::screen/fill_trapezoid
    """
    if "___" not in name:
        return None
    base, method = name.split("___", 1)
    return f"{base.replace('__', '::')}/{method}"


def classify_fot(fot_type, namespace, is_builtin, attr_count=0):
    """Map FOT enum to symbol type string. Returns None to skip."""
    if not namespace or namespace in PRIVATE_NAMESPACES:
        return None
    mapping = {
        "POLYMORPHIC": "POLYMORPHIC_FUNCTION",
        "TYPE": "BUILTIN_TYPE" if is_builtin else "TYPE",
        "OBJECT": "BUILTIN_OBJECT" if is_builtin else "TYPE",
        "UNINITIALIZED": "VARIABLE",
    }
    base = mapping.get(fot_type)
    if fot_type == "DERIVED":
        # FOT_DERIVED with attr_count > 0 is a TYPE (has attributes/methods)
        # FOT_DERIVED with attr_count == 0 is an OBJECT instance
        if is_builtin:
            return "TYPE" if attr_count > 0 else "BUILTIN_OBJECT"
        else:
            # Non-builtin: OBJECTs are also TYPEs
            return "TYPE"
    return base


def parse_c_file(c_path, is_builtin=False):
    """Parse one .c file: FOT entries + bytecode tables.

    Returns dict of {symbol: (kind, source_file)}.
    """
    symbols = {}
    io_tables = set()
    text = c_path.read_text()

    src = template_source(c_path) if is_builtin else fky_source(c_path)

    # Collect FOT entries
    for m in FOT_ENTRY.finditer(text):
        fot_type, attr_count, name, ns, end = (
            m.group(1), int(m.group(2)), m.group(3), m.group(4), m.end()
        )
        if not ns or ns in PRIVATE_NAMESPACES:
            continue
        if fot_type == "INITIALIZED":
            idx = CONST_IDX.search(text[end:end + 200])
            if idx:
                sign, prefix = idx.group(1), idx.group(2)
                if prefix == "uni_":
                    kind = "UNIQUE_ITEM"
                elif prefix == "func_":
                    if sign == '':
                        kind = "BUILTIN_FUNCTION"
                    else:
                        kind = "FUNCTION"
                else:
                    # chr_, num_, list_, tuple_, sequence_, value_range_
                    kind = "CONSTANT"
            else:
                kind = "CONSTANT"
        else:
            kind = classify_fot(fot_type, ns, is_builtin, attr_count)
            if kind is None:
                continue
        symbols[f"{ns}::{name}"] = (kind, src)

    # Collect FUNC_INFO -> t_func mapping + IO_CALL detection
    for m in FUNC_INFO.finditer(text):
        func_name, table_name = m.group(1), m.group(2)
        # Find the t_func table body and check for IO_CALL
        table_end = m.end()
        body = text[table_end:table_end + 500]
        # Find the actual t_func table
        table_match = re.search(
            rf'static\s+TAB_NUM\s+t_func_{table_name}\[\s*=\s*\{{', text
        )
        if table_match:
            # Read the bytecode table body (terminated by })
            t_end = table_match.end()
            t_body = text[t_end:t_end + 2000].split('}')[0]
            if 'IO_CALL' in t_body or 'IO_TAIL_CALL' in t_body:
                io_tables.add(table_name)
        # Decode func_name to symbol name
        decoded = decode_mangled(func_name)
        if decoded:
            if func_name in io_tables:
                symbols[decoded] = ("IO_METHOD", src)
            elif decoded not in symbols:
                symbols[decoded] = ("METHOD", src)

    return symbols


def parse_templates():
    """Parse .template files for METHOD, FUNCTION, and IO detection.

    Returns dict of {symbol: (kind, source_file)}.
    """
    symbols = {}

    for tmpl in sorted(TEMPLATES_DIR.glob("*.template")):
        text = tmpl.read_text()
        src = rel_path(tmpl)

        # Scan all code blocks for CHECK_IO_ACCESS_RIGHTS
        # Functions/methods are followed by { ... } blocks
        # We track which symbol names appear with IO checks
        io_blocks = set()
        for m in IO_CHECK.finditer(text):
            # Look backwards to find the enclosing FUNCTION/METHOD
            before = text[:m.start()]
            # Find the most recent FUNCTION or METHOD declaration
            for decl in TEMPLATE_METHOD.finditer(before):
                io_blocks.add(decl.start())
            for decl in TEMPLATE_FUNCTION.finditer(before):
                io_blocks.add(decl.start())

        # Extract METHOD declarations
        for m in TEMPLATE_METHOD.finditer(text):
            name = m.group(1).strip()
            if name.startswith("long "):
                name = name[5:].lstrip()
            # Strip C return type
            parts = name.split(None, 1)
            if len(parts) == 2 and "::" not in parts[0] and "/" not in parts[0]:
                name = parts[1]
            # Strip trailing alias
            if " (" not in name:
                parts = name.split(None, 1)
                if len(parts) == 2 and "::" not in parts[1] and "/" not in parts[1]:
                    name = parts[0]
            if "(" in name:
                name = name[:name.index("(")].strip()
            if "::" not in name:
                continue
            if m.start() in io_blocks:
                symbols[name] = ("BUILTIN_IO_METHOD", src)
            else:
                symbols[name] = ("BUILTIN_METHOD", src)

        # Extract FUNCTION declarations (with ::)
        for m in TEMPLATE_FUNCTION.finditer(text):
            rest = m.group(1).strip()
            parts = rest.split(None, 1)
            if len(parts) == 2 and "::" not in parts[0]:
                name = parts[1]
            else:
                name = parts[0] if len(parts) == 1 else rest
            if "(" in name:
                name = name[:name.index("(")].strip()
            if "::" not in name:
                continue
            if m.start() in io_blocks:
                symbols[name] = ("BUILTIN_IO_FUNCTION", src)
            else:
                symbols[name] = ("BUILTIN_FUNCTION", src)

        # Extract UNIQUE declarations (namespace defaults to std)
        for m in TEMPLATE_UNIQUE.finditer(text):
            name = m.group(1).strip()
            symbols[f"std::{name}"] = ("UNIQUE_ITEM", src)

    return symbols


def parse_attribute_definitions():
    """Parse ATTRIBUTE_DEFINITION blocks in compiled module .c files.

    Format: static ATTRIBUTE_DEFINITION ns__type__attributes[] = {
      {left, right},
      ...
    };

    Module file format:
      Left:  var_name, -var_name, TYPE_FUNCTION
      Right: -func_* (METHOD), -var_*/-num_*/-chr_* (ATTRIBUTE)

    Symbol names: namespace::type/attr_name
    TYPE_FUNCTION becomes: namespace::type/:

    Returns dict of {symbol: (kind, source_file)}.
    """
    symbols = {}

    for lib in LIBRARIES:
        lib_dir = REPO_ROOT / lib
        if not lib_dir.is_dir():
            continue
        for c_file in sorted(lib_dir.rglob("*.c")):
            text = c_file.read_text()
            src = fky_source(c_file)

            for header in ATTR_DEF_HEADER.finditer(text):
                mangled = header.group(1)
                parts = mangled.split("__", 1)
                if len(parts) != 2:
                    continue
                ns, type_name = parts[0], parts[1].replace("__", "::")
                if ns in PRIVATE_NAMESPACES:
                    continue

                # Find matching closing brace
                block_start = header.end()
                depth = 1
                pos = block_start
                while pos < len(text) and depth > 0:
                    if text[pos] == '{':
                        depth += 1
                    elif text[pos] == '}':
                        depth -= 1
                    pos += 1
                block = text[block_start:pos]

                type_prefix = f"{ns}::{type_name}"

                for entry in ATTR_DEF_ENTRY.finditer(block):
                    left = entry.group(1)
                    right = entry.group(2)

                    if left == "TYPE_FUNCTION":
                        symbol = f"{type_prefix}/:"
                        symbols[symbol] = ("TYPE_FUNCTION", src)
                    else:
                        # Strip leading "-" and "var_" prefix
                        attr_name = left.lstrip('-')
                        if attr_name.startswith("var_"):
                            attr_name = attr_name[4:]
                        if not attr_name:
                            continue

                        symbol = f"{type_prefix}/{attr_name}"
                        if right.startswith("-func_") or right.startswith("func_"):
                            symbols[symbol] = ("METHOD", src)
                        else:
                            symbols[symbol] = ("ATTRIBUTE", src)

    return symbols


def parse_builtins_attributes():
    """Parse ATTRIBUTE_DEFINITION blocks in runtime/builtins.c.

    builtins.c differs from module files:
      - No TYPE_FUNCTION — use ___type suffix on function names instead
      - No negative signs: {var_name, func_NAME}
      - Attribute names embed namespace: var_std__bit_and -> std::bit_and
      - Types in builtin_types namespace are private (filtered)

    Also detects type functions via ___type suffix:
      static void ns__type___type() -> ns::type/: (type function)

    Returns dict of {symbol: (kind, source_file)}.
    """
    symbols = {}
    text = BUILTINS_C.read_text()
    src = "runtime/builtins.c"

    # Detect type functions by ___type suffix: static void ns__type___type (void)
    # Note: must NOT match "static void *create__..." (function pointers)
    for m in re.finditer(r'static\s+void\s+(\S+___type)\s*\(', text):
        func_name = m.group(1)
        # Decode: ns__type___type -> ns::type/
        parts = func_name.rsplit("___", 1)
        if len(parts) == 2 and parts[1] == "type":
            base = parts[0]
            decoded = base.replace("__", "::")
            # Filter private namespaces and entries with no namespace
            ns = base.split("__", 1)[0] if "__" in base else ""
            if ns and ns not in PRIVATE_NAMESPACES:
                symbols[f"{decoded}/:"] = ("BUILTIN_TYPE_FUNCTION", src)

    # Parse ATTRIBUTE_DEFINITION blocks
    for header in ATTR_DEF_HEADER.finditer(text):
        mangled = header.group(1)
        parts = mangled.split("__", 1)
        if len(parts) != 2:
            continue
        ns, type_name = parts[0], parts[1].replace("__", "::")
        if ns in PRIVATE_NAMESPACES:
            continue

        # Find matching closing brace
        block_start = header.end()
        depth = 1
        pos = block_start
        while pos < len(text) and depth > 0:
            if text[pos] == '{':
                depth += 1
            elif text[pos] == '}':
                depth -= 1
            pos += 1
        block = text[block_start:pos]

        type_prefix = f"{ns}::{type_name}"

        for entry in ATTR_DEF_ENTRY.finditer(block):
            left = entry.group(1)
            right = entry.group(2)

            # Strip "var_" prefix from left side
            attr_name = left
            if attr_name.startswith("var_"):
                attr_name = attr_name[4:]
            if not attr_name:
                continue

            symbol = f"{type_prefix}/{attr_name}"
            if right.startswith("func_") or right.startswith("-func_"):
                symbols[symbol] = ("BUILTIN_METHOD", src)
            else:
                symbols[symbol] = ("BUILTIN_ATTRIBUTE", src)

    return symbols


def parse_compiled_io():
    """Scan compiled .c files for t_func tables containing IO_CALL/IO_TAIL_CALL.

    Returns dict of {symbol: kind} (source_file not tracked here, used for upgrades).
    """
    io_symbols = {}
    for lib in LIBRARIES:
        lib_dir = REPO_ROOT / lib
        if not lib_dir.is_dir():
            continue
        for c_file in sorted(lib_dir.rglob("*.c")):
            text = c_file.read_text()
            # Find all t_func_NNN[] tables with IO_CALL
            for m in FUNC_TABLE.finditer(text):
                table_name = m.group(1)
                body_start = m.end()
                body = text[body_start:body_start + 2000].split('}')[0]
                if 'IO_CALL' not in body and 'IO_TAIL_CALL' not in body:
                    continue
                # Decode table_name to symbol
                decoded = decode_mangled(table_name)
                if decoded:
                    # Check if already classified as FUNCTION — upgrade to IO_FUNCTION
                    io_symbols[decoded] = "IO_METHOD"
                else:
                    # Regular function (no /), check for std:: prefix after decoding
                    # table_name without ___ is a regular function like std__println
                    parts = table_name.split("__", 1)
                    if len(parts) == 2:
                        ns, func = parts
                        full = f"{ns.replace('__', '::')}::{func.replace('__', '::')}"
                        io_symbols[full] = "IO_FUNCTION"

    return io_symbols


def main():
    all_symbols = {}

    # Builtins
    if BUILTINS_C.exists():
        all_symbols.update(parse_c_file(BUILTINS_C, is_builtin=True))
        all_symbols.update(parse_builtins_attributes())

    # Module .c files + ATTRIBUTE_DEFINITION parsing
    for lib in LIBRARIES:
        lib_dir = REPO_ROOT / lib
        if not lib_dir.is_dir():
            continue
        for c_file in sorted(lib_dir.rglob("*.c")):
            all_symbols.update(parse_c_file(c_file, is_builtin=False))
    all_symbols.update(parse_attribute_definitions())

    # IO detection from compiled code (upgrade FUNCTION -> IO_FUNCTION, METHOD -> IO_METHOD)
    compiled_io = parse_compiled_io()
    for name, io_kind in compiled_io.items():
        if name in all_symbols:
            old_kind, src = all_symbols[name]
            if old_kind == "FUNCTION":
                all_symbols[name] = ("IO_FUNCTION", src)
            elif old_kind == "METHOD":
                all_symbols[name] = ("IO_METHOD", src)
            elif old_kind in ("BUILTIN_FUNCTION", "BUILTIN_METHOD"):
                new_kind = io_kind.replace("METHOD", "BUILTIN_METHOD" if "BUILTIN" in old_kind else "BUILTIN_METHOD")
                all_symbols[name] = (new_kind, src)
        elif io_kind not in {v[0] for v in all_symbols.values()}:
            all_symbols[name] = (io_kind, "unknown")

    # Template methods and functions (overwrites builtins with proper template source)
    all_symbols.update(parse_templates())

    # Upgrade OBJECT/BUILTIN_OBJECT -> TYPE/BUILTIN_TYPE when type function,
    # methods, or attributes exist for them.
    # An OBJECT 'std::foo' becomes a TYPE if any symbol 'std::foo/*' exists.
    for name in list(all_symbols.keys()):
        kind, src = all_symbols[name]
        if kind in ("OBJECT", "BUILTIN_OBJECT"):
            prefix = f"{name}/"
            if any(child.startswith(prefix) for child in all_symbols):
                all_symbols[name] = ("BUILTIN_TYPE" if "BUILTIN" in kind else "TYPE", src)

    # Output sorted
    for name in sorted(all_symbols):
        kind, src = all_symbols[name]
        print(f"{name} {kind} ({src})")


if __name__ == "__main__":
    main()
