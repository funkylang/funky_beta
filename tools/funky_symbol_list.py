#!/usr/bin/env python3
"""Parse generated .c files and templates to produce a complete symbol list.

Scans runtime/builtins.c, compiled module .c files, and .template files
to extract FOT (Funky Object Type) entries with their exact classification.

Unlike html/all_symbols.txt which omits method implementations, this lists
EVERY symbol including polymorphic function implementations.

Output format (one per line, sorted):
    symbol_name KIND BASE (source_file)

Where KIND is one of:
    POLYMORPHIC_FUNCTION, POLYMORPHIC_FUNCTION_WITH_SETTER, FUNCTION, IO_FUNCTION
    TYPE_FUNCTION
    TYPE
    OBJECT
    METHOD, IO_METHOD
    ATTRIBUTE
    UNIQUE_ITEM, CONSTANT, VARIABLE

BASE is the parent type for TYPE/OBJECT entries, or "-" for all other kinds
and the three root types (std_types::object, std_types::undefined, std_types::error).

source_file is the original .fky or .template source (relative to repo root).
Symbols from runtime_templates/ are builtins; from library dirs are module symbols.

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
#  func_ns__name   -> FUNCTION (no sign = template builtin)
# -func_ns__name   -> FUNCTION (negative sign = compiled module)
# -uni_ns__name    -> UNIQUE_ITEM (negative + uni_ prefix)
# -chr_NNN / -num_NNN / -list_... etc. -> CHARACTER/NUMBER/LIST constant
CONST_IDX = re.compile(r'\{\.const_idx\s*=\s*(-?)(func_|uni_|chr_|num_|list_|tuple_|sequence_|value_range_)(\S+)')

# t_func_name[] bytecode table declarations (matches "t_func_name[] = {")
FUNC_TABLE = re.compile(r'\bt_func_(\S+?)\[')

# FUNCTION_INFO: maps back to t_func table name
FUNC_INFO = re.compile(
    r'static\s+FUNCTION_INFO\s+i_func_(\S+)\s*=\s*\{\s*t_func_(\S+)\s*,',
)

# ATTRIBUTE_DEFINITION block: static ATTRIBUTE_DEFINITION ns__type__attributes[] = { ... }
# Entry format: {left, right} where left is var_name, -var_name, or TYPE_FUNCTION
# and right is -func_*, -var_*, -num_*, etc.
ATTR_DEF_HEADER = re.compile(
    r'static\s+ATTRIBUTE_DEFINITION\s+(\S+)__attributes\s*\[\s*\]\s*=\s*\{',
)
# Individual entry: {var_name, value} or {-var_name, value} or {TYPE_FUNCTION, value}
ATTR_DEF_ENTRY = re.compile(
    r'\{(?:\s*)(-?var_\S+|TYPE_FUNCTION)\s*,\s*(-?(?:func_|var_|num_|chr_|uni_|str_)\S+)\s*\}',
)

# TAB_NUM bytecode table headers
TAB_NUM_HEADER = re.compile(r'^static TAB_NUM t_(\w+)\[\] = \{$', re.MULTILINE)

# used_namespaces entries: {"namespace", major, minor}
USED_NS_ENTRY = re.compile(r'\{"(\w+)"')
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

# Template OBJECT declarations: OBJECT std::NAME or OBJECT std::NAME -> parent
# Also matches PUBLIC OBJECT
TEMPLATE_OBJECT = re.compile(
    r'^(?:PUBLIC\s+)?OBJECT\s+(.+)',
    re.MULTILINE,
)

# Template TYPE declarations: TYPE namespace::name or TYPE namespace::name -> parent
# Also matches PUBLIC TYPE
TEMPLATE_TYPE_DECL = re.compile(
    r'^(?:PUBLIC\s+)?TYPE\s+(.+)',
    re.MULTILINE,
)

# Template POLY declarations: POLY namespace::name (normal polymorphic function)
TEMPLATE_POLY = re.compile(
    r'^POLY\s+(\S+)',
    re.MULTILINE,
)

# Template ATTR declarations: ATTR namespace::name (polymorphic function with setter)
TEMPLATE_ATTR = re.compile(
    r'^ATTR\s+(\S+)',
    re.MULTILINE,
)

# Template ATTRIBUTE declarations: ATTRIBUTE type.attribute_name
# Format: ATTRIBUTE std_types::passwd.username_of
TEMPLATE_ATTRIBUTE_DECL = re.compile(
    r'^ATTRIBUTE\s+(\S+)',
    re.MULTILINE,
)

# FOT DERIVED/OBJECT/TYPE value: extract parent name from the struct initializer
# Builtins.c format: .type = &FOT_ns_type
FOT_PARENT_BUILTIN = re.compile(r'\.type\s*=\s*&FOT_(\w+)_(\w+)')
# Module .c format: {"parent_name\000parent_namespace"}
FOT_PARENT_MODULE = re.compile(r'\{"([^\\]+?)\\000([^"]*)"\}')


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


def add_std_namespace(name):
    """Add implicit 'std::' namespace if the name has no explicit namespace."""
    if "::" not in name:
        return f"std::{name}"
    return name


def decode_mangled(name):
    """Decode t_func mangling: split on first ___ -> type/method, rest __ -> ::.

    e.g., std_types__screen___fill_trapezoid -> std_types::screen/std::fill_trapezoid
    """
    if "___" not in name:
        return None
    base, method = name.split("___", 1)
    # Decode method name: ns__method -> ns::method, then add implicit std:: if missing
    method = method.replace("__", "::")
    method = add_std_namespace(method)
    return f"{base.replace('__', '::')}/{method}"


def classify_fot(fot_type, namespace, is_builtin, attr_count=0):
    """Map FOT enum to symbol type string. Returns None to skip."""
    if not namespace or namespace in PRIVATE_NAMESPACES:
        return None
    mapping = {
        "POLYMORPHIC": "POLYMORPHIC_FUNCTION",
        "TYPE": "TYPE",
        "OBJECT": "OBJECT",
        "UNINITIALIZED": "VARIABLE",
    }
    base = mapping.get(fot_type)
    if fot_type == "DERIVED":
        return "TYPE" if attr_count > 0 else "OBJECT"
    return base


def extract_fot_parent(text, start_pos):
    """Extract the parent type from a FOT DERIVED/OBJECT/TYPE struct initializer.

    Looks for .type = &FOT_ns_type within 500 chars after the FOT entry.
    Returns the parent type as 'ns::type' or None.
    """
    # Try builtins.c format first, fall back to module .c format
    is_module_format = False
    m = FOT_PARENT_BUILTIN.search(text[start_pos:start_pos + 500])
    if not m:
        m = FOT_PARENT_MODULE.search(text[start_pos:start_pos + 500])
        is_module_format = True
    if m:
        if is_module_format:
            # Module .c: {"parent_name\000parent_namespace"} — same order as FOT_ENTRY
            type_name, ns = m.group(1), m.group(2)
        else:
            ns, type_name = m.group(1), m.group(2)
        # Decode mangled parent name
        if "__" in ns:
            ns = ns.replace("__", "::")
        if "__" in type_name:
            type_name = type_name.replace("__", "::")
        return f"{ns}::{type_name}"
    return None


def parse_c_file(c_path, is_builtin=False):
    """Parse one .c file: FOT entries + bytecode tables.

    Returns dict of {symbol: (kind, base, source_file)}.
    base is None for non-type symbols.
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
        if fot_type == "POLYMORPHIC":
            kind = classify_fot(fot_type, ns, is_builtin, attr_count)
            if kind is None:
                continue
            # Check for has_a_setter = true within the struct initializer block
            block = text[end:end + 200]
            if "has_a_setter = true" in block:
                kind = "POLYMORPHIC_FUNCTION_WITH_SETTER"
            symbols[f"{ns}::{name}"] = (kind, None, src)
        elif fot_type == "INITIALIZED":
            idx = CONST_IDX.search(text[end:end + 200])
            if idx:
                sign, prefix = idx.group(1), idx.group(2)
                if prefix == "uni_":
                    kind = "UNIQUE_ITEM"
                elif prefix == "func_":
                    kind = "FUNCTION"
                else:
                    # chr_, num_, list_, tuple_, sequence_, value_range_
                    kind = "CONSTANT"
            else:
                kind = "CONSTANT"
            symbols[f"{ns}::{name}"] = (kind, None, src)
        else:
            kind = classify_fot(fot_type, ns, is_builtin, attr_count)
            if kind is None:
                continue
            # Extract base type for DERIVED, OBJECT, TYPE entries
            base = None
            if fot_type in ("DERIVED", "OBJECT", "TYPE"):
                base = extract_fot_parent(text, end)
            symbols[f"{ns}::{name}"] = (kind, base, src)

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
            # Skip methods on private-namespace types
            type_ns = decoded.split("/")[0].split("::")[0]
            if type_ns in PRIVATE_NAMESPACES:
                continue
            if func_name in io_tables:
                symbols[decoded] = ("IO_METHOD", None, src)
            elif decoded not in symbols:
                symbols[decoded] = ("METHOD", None, src)

    return symbols


def parse_templates():
    """Parse .template files for METHOD, FUNCTION, and IO detection.

    Returns dict of {symbol: (kind, base, source_file)}.
    base is populated for TYPE/OBJECT entries with -> parent syntax.
    """
    symbols = {}

    for tmpl in sorted(TEMPLATES_DIR.glob("*.template")):
        text = tmpl.read_text()
        src = rel_path(tmpl)

        # Scan for CHECK_IO_ACCESS_RIGHTS and find which function/method owns it.
        # The parser uses indentation for scope -- CHECK_IO_ACCESS_RIGHTS must be
        # on an indented line (inside a body block). The nearest FUNCTION/METHOD
        # declaration before that indented line is the owner.
        io_blocks = set()
        for m in IO_CHECK.finditer(text):
            line_start = text.rfind('\n', 0, m.start()) + 1
            line = text[line_start:m.start()]
            if line and line[0] not in (' ', '\t'):
                continue
            before = text[:line_start]
            last_decl = None
            for decl in TEMPLATE_FUNCTION.finditer(before):
                last_decl = decl
            for decl in TEMPLATE_METHOD.finditer(before):
                if last_decl is None or decl.start() > last_decl.start():
                    last_decl = decl
            if last_decl is not None:
                io_blocks.add(last_decl.start())

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
                if len(parts) == 2 and "::" not in parts[1] and "/" not in parts[0]:
                    name = parts[0]
            if "(" in name:
                name = name[:name.index("(")].strip()
            if "::" not in name:
                continue
            # Skip methods on private-namespace types (e.g. builtin_types)
            type_ns = name.split("/")[0].split("::")[0]
            if type_ns in PRIVATE_NAMESPACES:
                continue
            # Implicit using std: resolve method part if it lacks a namespace
            type_part, method_part = name.split("/", 1)
            if "::" not in method_part:
                method_part = f"std::{method_part}"
                name = f"{type_part}/{method_part}"
            # _type method IS the type function (/:), matches builtins.c ___type
            if method_part == "std::_type":
                # Check if the body is just a RUNTIME_ERROR stub
                # Templates use indentation for scope - body ends when
                # indentation returns to the METHOD declaration level or less.
                method_indent = len(m.group(0)) - len(m.group(0).lstrip())
                body_end = m.end()
                for line in text[body_end:].split('\n'):
                    stripped = line.strip()
                    if not stripped:
                        continue
                    line_indent = len(line) - len(line.lstrip())
                    if line_indent <= method_indent:
                        break
                    body_end = text.index(line, body_end) + len(line) + 1
                body = text[m.end():body_end]
                if 'RUNTIME_ERROR' in body:
                    # Skip boring stubs - only meaningful type functions belong in the list
                    continue
                name = f"{type_part}/:"
                symbols[name] = ("TYPE_FUNCTION", None, src)
                continue
            # Skip internal methods (names starting with _)
            method_base = method_part.split("::")[-1]
            if method_base.startswith("_"):
                continue
            if m.start() in io_blocks:
                symbols[name] = ("IO_METHOD", None, src)
            else:
                symbols[name] = ("METHOD", None, src)

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
            # Skip functions on private-namespace types (e.g. builtin_types)
            if "/" in name:
                type_ns = name.split("/")[0].split("::")[0]
                if type_ns in PRIVATE_NAMESPACES:
                    continue
            # Implicit using std: resolve method part if it lacks a namespace
            if "/" in name:
                type_part, method_part = name.split("/", 1)
                if "::" not in method_part:
                    name = f"{type_part}/std::{method_part}"
            if m.start() in io_blocks:
                symbols[name] = ("IO_FUNCTION", None, src)
            else:
                symbols[name] = ("FUNCTION", None, src)

        # Extract UNIQUE declarations (namespace defaults to std)
        for m in TEMPLATE_UNIQUE.finditer(text):
            name = m.group(1).strip()
            symbols[f"std::{name}"] = ("UNIQUE_ITEM", None, src)

        # Extract OBJECT declarations
        for m in TEMPLATE_OBJECT.finditer(text):
            raw = m.group(1).strip()
            # Extract -> parent if present
            base = None
            if " -> " in raw:
                base = raw.split(" -> ")[1].strip()
                raw = raw.split(" -> ")[0]
            if "::" not in raw:
                continue
            symbols[raw] = ("OBJECT", base, src)

        # Extract TYPE declarations (only those with :: namespace)
        for m in TEMPLATE_TYPE_DECL.finditer(text):
            raw = m.group(1).strip()
            # Extract -> parent if present
            base = None
            if " -> " in raw:
                base = raw.split(" -> ")[1].strip()
                raw = raw.split(" -> ")[0]
            if "::" not in raw:
                continue
            ns = raw.split("::")[0]
            if ns in PRIVATE_NAMESPACES:
                continue
            symbols[raw] = ("TYPE", base, src)

        # Extract POLY declarations (polymorphic functions)
        for m in TEMPLATE_POLY.finditer(text):
            raw = m.group(1).strip()
            if "::" not in raw:
                continue
            symbols[raw] = ("POLYMORPHIC_FUNCTION", None, src)

        # Extract ATTR declarations (polymorphic functions with setter)
        for m in TEMPLATE_ATTR.finditer(text):
            raw = m.group(1).strip()
            if "::" not in raw:
                continue
            symbols[raw] = ("POLYMORPHIC_FUNCTION_WITH_SETTER", None, src)

        # Extract ATTRIBUTE declarations: ATTRIBUTE type.attribute_name
        for m in TEMPLATE_ATTRIBUTE_DECL.finditer(text):
            raw = m.group(1).strip()
            if "::" not in raw:
                continue
            # Split on the dot separator: type.attribute_name
            dot_idx = raw.index(".")
            type_part = raw[:dot_idx]
            attr_name = raw[dot_idx+1:]
            # Implicit using std: attribute names default to std namespace
            symbol = f"{type_part}/std::{attr_name}"
            symbols[symbol] = ("ATTRIBUTE", None, src)

    return symbols


def extract_tab_tables(text):
    """Return list of (table_name, list_of_body_lines) from TAB_NUM tables."""
    tables = []
    for m in TAB_NUM_HEADER.finditer(text):
        table_name = m.group(1)
        body_lines = []
        for line in text[m.end():].split('\n'):
            stripped = line.strip()
            if not stripped:
                continue
            if stripped.startswith('}'):
                break
            if line[0] in (' ', '\t'):
                body_lines.append(line)
            else:
                break
        tables.append((table_name, body_lines))
    return tables


def parse_instruction(line):
    """Parse a bytecode instruction line.
    Returns (functor, args, result_count, results) or None."""
    stripped = line.split('//')[0].strip().rstrip(',')
    if not stripped or stripped.startswith('POS(') or stripped.startswith('LET, -1'):
        return None
    fields = [f.strip() for f in stripped.split(',')]
    if not fields or not fields[0] or (len(fields) <= 2 and fields[0].lstrip('-').isdigit()):
        return None
    try:
        arg_count = int(fields[1])
    except (ValueError, IndexError):
        return None
    if arg_count < 0:
        arg_count = 0
    idx = 2 + arg_count
    if idx >= len(fields):
        return None
    result_spec = fields[idx]
    io = re.match(r'IO_CALL\((\d+)\)', result_spec)
    if io:
        result_count = int(io.group(1))
    elif result_spec in ('TAIL_CALL', 'IO_TAIL_CALL'):
        result_count = 0
    else:
        try:
            result_count = int(result_spec)
        except ValueError:
            return None
    results = fields[idx + 1:idx + 1 + result_count]
    return fields[0], fields[2:2 + arg_count], result_count, results


def get_used_namespaces(text):
    """Extract used namespace names from used_namespaces table."""
    m = re.search(r'static FUNKY_NAMESPACE used_namespaces\[\] = \{', text)
    if not m:
        return []
    block = text[m.end():m.end() + 2000]
    end = block.find('}')
    return USED_NS_ENTRY.findall(block[:end]) if end >= 0 else []


def parse_module_variables():
    """Scan TAB_NUM tables across all library modules to find variable destinations.
    Returns set of fully qualified symbol names that are actual variables."""
    variables = set()
    for lib in LIBRARIES:
        lib_dir = REPO_ROOT / lib
        if not lib_dir.is_dir():
            continue
        for c_file in sorted(lib_dir.rglob('*.c')):
            text = c_file.read_text()
            used_ns = get_used_namespaces(text)
            if not used_ns:
                continue
            tables = extract_tab_tables(text)
            no_ns_vars = set()
            for _table_name, body in tables:
                for line in body:
                    parsed = parse_instruction(line)
                    if parsed is None:
                        continue
                    _, _, _, results = parsed
                    for r in results:
                        if r.startswith('var_') and not re.match(r'^var_\d', r):
                            name = r[4:]
                            if '__' in name:
                                ns = name.split('__')[0]
                                if ns not in PRIVATE_NAMESPACES:
                                    variables.add(name.replace('__', '::'))
                            else:
                                no_ns_vars.add(name)
            for v in no_ns_vars:
                for ns in used_ns:
                    variables.add(f'{ns}::{v}')
    return variables


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

    Returns dict of {symbol: (kind, base, source_file)}.
    """
    symbols = {}

    # Collect local polymorphic function names from all .fky sources
    # A local poly is declared as $NAME () without explicit namespace prefix
    # or $NS::NAME () where NS is not std.
    local_polys = set()
    for lib in LIBRARIES:
        lib_dir = REPO_ROOT / lib
        if not lib_dir.is_dir():
            continue
        for fky in lib_dir.rglob("*.fky"):
            fky_text = fky.read_text()
            for m in re.finditer(r'^\s*\$(\S+)\s*\(\s*[!]*\s*\)', fky_text, re.MULTILINE):
                full_name = m.group(1)
                # Extract the base name (last component after ::)
                base = full_name.split("::")[-1]
                local_polys.add(base)

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
                        symbols[symbol] = ("TYPE_FUNCTION", None, src)
                    else:
                        # Strip leading "-" and "var_" prefix
                        attr_name = left.lstrip('-')
                        if attr_name.startswith("var_"):
                            attr_name = attr_name[4:]
                        # Decode mangled namespace: std__foo -> std::foo
                        attr_name = attr_name.replace("__", "::")
                        if not attr_name:
                            continue
                        # Skip if this attribute name matches a local polymorphic function
                        if attr_name in local_polys:
                            continue
                        # Add implicit std:: if no explicit namespace
                        attr_name = add_std_namespace(attr_name)

                        symbol = f"{type_prefix}/{attr_name}"
                        if right.startswith("-func_") or right.startswith("func_"):
                            symbols[symbol] = ("METHOD", None, src)
                        else:
                            symbols[symbol] = ("ATTRIBUTE", None, src)

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

    Returns dict of {symbol: (kind, base, source_file)}.
    """
    symbols = {}
    text = BUILTINS_C.read_text()
    src = "runtime/builtins.c"

    # Type functions are detected only from .template files (parse_templates).
    # Templates are the sole source of truth - they filter out RUNTIME_ERROR stubs.

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

            # Strip optional "-" sign and "var_" prefix from left side
            attr_name = left.lstrip('-')
            if attr_name.startswith("var_"):
                attr_name = attr_name[4:]
            # Decode mangled namespace: std__foo -> std::foo
            attr_name = attr_name.replace("__", "::")
            if not attr_name:
                continue
            # Add implicit std:: if no explicit namespace
            attr_name = add_std_namespace(attr_name)

            symbol = f"{type_prefix}/{attr_name}"
            if right.startswith("func_") or right.startswith("-func_"):
                symbols[symbol] = ("METHOD", None, src)
            else:
                symbols[symbol] = ("ATTRIBUTE", None, src)

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
        for c_file in sorted(lib_dir.rglob('*.c')):
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
                    io_symbols[decoded] = "IO_METHOD"
                else:
                    # Regular function (no /), check for std:: prefix after decoding
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
        for c_file in sorted(lib_dir.rglob('*.c')):
            all_symbols.update(parse_c_file(c_file, is_builtin=False))
    all_symbols.update(parse_attribute_definitions())

    # IO detection from compiled code (upgrade FUNCTION -> IO_FUNCTION, METHOD -> IO_METHOD)
    compiled_io = parse_compiled_io()

    # Detect variables from TAB_NUM bytecode (upgrade OBJECT -> VARIABLE)
    module_vars = parse_module_variables()
    for name in module_vars:
        if name in all_symbols and all_symbols[name][0] == 'OBJECT':
            _, base, src = all_symbols[name]
            all_symbols[name] = ('VARIABLE', base, src)
    for name, io_kind in compiled_io.items():
        if name in all_symbols:
            old_kind, base, src = all_symbols[name]
            if old_kind == "FUNCTION":
                all_symbols[name] = ("IO_FUNCTION", base, src)
            elif old_kind == "METHOD":
                all_symbols[name] = ("IO_METHOD", base, src)
        elif io_kind not in {v[0] for v in all_symbols.values()}:
            all_symbols[name] = (io_kind, None, "unknown")

    # Template methods and functions (overwrites builtins with proper template source)
    all_symbols.update(parse_templates())

    # Upgrade OBJECT -> TYPE when type function, methods, or attributes exist.
    # (Only objects that were not already upgraded to VARIABLE)
    # Also upgrade CONSTANT -> TYPE when children exist (e.g. tuple-based types).
    for name in list(all_symbols.keys()):
        kind, base, src = all_symbols[name]
        if kind in ("OBJECT", "CONSTANT"):
            prefix = f"{name}/"
            if any(child.startswith(prefix) for child in all_symbols):
                all_symbols[name] = ("TYPE", base, src)

    # Output sorted, with base column
    for name in sorted(all_symbols):
        kind, base, src = all_symbols[name]
        base_str = base if base else "-"
        print(f"{name} {kind} {base_str} ({src})")


if __name__ == "__main__":
    main()
