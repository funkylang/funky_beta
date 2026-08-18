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

BASE is the parent type for TYPE/OBJECT entries, the initial value for
VARIABLE entries, and the decoded initial value for CONSTANT entries:
  - character constants: the Funky hex escape, e.g. '@0xffff;'
  - integer constants:   bare number, e.g. 1
  - real constants:      bare number, e.g. 3.1415926535897932846
  - composite constants (tuples, lists, sequences, value ranges) and
    anything that cannot be written as a single space-free token: "-"
All other kinds and the three root types (std_types::object,
std_types::undefined, std_types::error) use "-" for the base column.
Constant values are decoded from the module's `constants_table[]` via the
FOT `.const_idx` reference (runtime reads constants[const_idx - 1]).

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
PRIVATE_NAMESPACES = {
    "basic_collections",
    "basic_loops",
    "basic_private",
    "basic_types",
    "builtin_types",
    "terminal_private",
}

# ---------------------------------------------------------------------------
# Regexes for compiled .c files
# ---------------------------------------------------------------------------

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
CONST_IDX = re.compile(r'\{\.const_idx\s*=.*?(-?)(func_|uni_|chr_|num_|list_|tuple_|sequence_|value_range_)(\S+)')

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
# Right side uses [^}]+ (not \S+) to avoid capturing the outer closing brace
# of the ATTRIBUTE_DEFINITION block as part of the value.
ATTR_DEF_ENTRY = re.compile(
    r'\{(?:\s*)(-?var_\S+|TYPE_FUNCTION)\s*,\s*(-?(?:func_|var_|num_|chr_|uni_|str_|string_|list_|lambda_)[^}]+)\s*\}',
)

# TAB_NUM bytecode table headers
TAB_NUM_HEADER = re.compile(r'^static TAB_NUM t_(\w+)\[\] = \{$', re.MULTILINE)

# used_namespaces entries: {"namespace", major, minor}
USED_NS_ENTRY = re.compile(r'\{"(\w+)"')
IO_CHECK = re.compile(r'CHECK_IO_ACCESS_RIGHTS')

# FOT DERIVED/OBJECT/TYPE value: extract parent name from the struct initializer
# Builtins.c format: .type = &FOT_ns_type
FOT_PARENT_BUILTIN = re.compile(r'\.type\s*=\s*&FOT_(\w+)_(\w+)')
# Module .c format: {"parent_name\000parent_namespace"}
FOT_PARENT_MODULE = re.compile(r'\{"([^\\]+?)\\000([^"]*)"\}')

# ---------------------------------------------------------------------------
# Regexes for .template files
# ---------------------------------------------------------------------------

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


# ---------------------------------------------------------------------------
# Path and naming helpers
# ---------------------------------------------------------------------------

def rel_path(p):
    """Return repo-relative path string."""
    return str(Path(p).relative_to(REPO_ROOT))


def source_label(c_path):
    """Return the source path label for a compiled module .c file.

    Shows the .fky source name — does not probe the filesystem.
    """
    return rel_path(Path(c_path).with_suffix('.fky'))


def template_source(c_path):
    """Return template path for builtins.c (used as fallback)."""
    return "runtime/builtins.c"


def add_std_namespace(name):
    """Add implicit 'std::' namespace if the name has no explicit namespace."""
    if "::" not in name:
        return f"std::{name}"
    return name


# Global set of polymorphic function names that belong to private namespaces.
# Populated from all module files before any resolve_attr_namespace call.
PRIVATE_POLY_NAMES = set()


def resolve_attr_namespace(attr_name, local_polys):
    """Resolve the namespace of a bare attribute/method name using module poly info.

    Handles mangled names (__ → ::) before checking.
    Returns (resolved_name, is_skip):
      - If attr_name is a local poly (empty namespace), return (None, True) to skip.
      - If attr_name is a private-namespace poly, return (None, True) to skip.
      - If attr_name has an explicit namespace (contains ::), return as-is.
      - If attr_name matches a namespaced poly, return with that namespace.
      - If attr_name is a known private-namespace poly, return (None, True) to skip.
      - Otherwise fall back to std::.
    """
    attr_name = attr_name.replace("__", "::")
    if "::" in attr_name:
        ns = attr_name.split("::")[0]
        return (None, True) if ns in PRIVATE_NAMESPACES else (attr_name, False)
    ns = local_polys.get(attr_name)
    if ns is None:
        # Check if this bare name belongs to a private-namespace poly
        # declared in another module (e.g. basic_collections::contents_of)
        if attr_name in PRIVATE_POLY_NAMES:
            return None, True
        return f"std::{attr_name}", False
    if ns == "" or ns in PRIVATE_NAMESPACES:
        return None, True
    return f"{ns}::{attr_name}", False


def decode_mangled_method(func_name, local_polys):
    """Decode t_func mangling with namespace resolution.

    Splits on first ___ into type/method, resolves the method namespace
    via local polys, and filters private namespaces.
    Returns fully qualified 'type/method' or None.
    """
    if "___" not in func_name:
        return None
    base, bare_method = func_name.split("___", 1)
    resolved, skip = resolve_attr_namespace(bare_method, local_polys)
    if skip:
        return None
    return f"{base.replace('__', '::')}/{resolved}"


# ---------------------------------------------------------------------------
# Compiled file context
# ---------------------------------------------------------------------------

def iter_library_c_files():
    """Yield every compiled module .c file under the library directories."""
    for lib in LIBRARIES:
        lib_dir = REPO_ROOT / lib
        if not lib_dir.is_dir():
            continue
        yield from sorted(lib_dir.rglob("*.c"))


class CompiledFile:
    """Parse context for one compiled .c file.

    Reads the file once and derives everything the passes need: local poly
    namespaces for name resolution, constant tables for decoding initial
    values, and (lazily, cached) the bytecode tables containing I/O calls.
    """

    def __init__(self, c_path, is_builtin=False):
        self.c_path = c_path
        self.is_builtin = is_builtin
        self.text = c_path.read_text()
        self.src = template_source(c_path) if is_builtin else source_label(c_path)
        self.local_polys = collect_module_polys(self.text)
        self.const_enums = parse_enum_values(self.text)
        self.const_table = parse_constants_table(self.text)
        self._io_tables = None

    def io_table_names(self):
        """Set of t_func_* table names containing IO_CALL / IO_TAIL_CALL."""
        if self._io_tables is None:
            self._io_tables = find_io_tables(self.text)
        return self._io_tables


def find_io_tables(text):
    """Return set of t_func_* bytecode table names containing IO_CALL or
    IO_TAIL_CALL instructions."""
    io_tables = set()
    for m in FUNC_TABLE.finditer(text):
        body = text[m.end():m.end() + 2000].split('}')[0]
        if 'IO_CALL' in body or 'IO_TAIL_CALL' in body:
            io_tables.add(m.group(1))
    return io_tables


# ---------------------------------------------------------------------------
# FOT entry parsing
# ---------------------------------------------------------------------------

def classify_fot(fot_type, namespace, attr_count=0):
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


def extract_fot_parent(text, start_pos, local_polys=None):
    """Extract the parent type from a FOT DERIVED/OBJECT/TYPE struct initializer.

    Looks for .type = &FOT_ns_type within 500 chars after the FOT entry.
    Returns the parent type as 'ns::type' or None.

    A value field with an EMPTY namespace is a variable's initial value,
    not a parent type (genuine parents always carry a namespace). In that
    case the bare name is resolved with the normal namespace rules
    (local polys, private filter, std:: fallback).
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
        if not ns:
            # Initial value of a variable, not a parent type
            resolved, skip = resolve_attr_namespace(type_name, local_polys or {})
            return None if skip else resolved
        # Decode mangled parent name
        if "__" in ns:
            ns = ns.replace("__", "::")
        if "__" in type_name:
            type_name = type_name.replace("__", "::")
        return f"{ns}::{type_name}"
    return None


def parse_enum_values(text):
    """Parse all enum blocks in a .c file into {symbol: integer_value}.

    Handles both explicit assignments (`name = -1`) and auto-increment
    members (a bare `name` following an explicit one continues the run).
    Constants use negative values; the auto-increment run for the
    variable table is harmless (different prefixes, no collisions).
    """
    values = {}
    for block in re.findall(r"enum\s*\{(.*?)\n\}", text, re.S):
        auto = None
        for line in block.split("\n"):
            line = line.strip().rstrip(",")
            m = re.match(r"(\w+)\s*=\s*(-?\d+)$", line)
            if m:
                auto = int(m.group(2))
                values[m.group(1)] = auto
                continue
            m = re.match(r"(\w+)$", line)
            if m:
                auto = (auto + 1) if auto is not None else 0
                values[m.group(1)] = auto
    return values


def parse_constants_table(text):
    """Parse `static FUNKY_CONSTANT constants_table[] = { ... }`.

    Returns a list of (kind, count, body) tuples in table order, where
    kind is an FLT_* tag and body is the inner `{...}` initializer.
    """
    m = re.search(
        r"static\s+FUNKY_CONSTANT\s+constants_table\[\]\s*=\s*\{(.*?)\n\};",
        text, re.S,
    )
    if not m:
        return []
    return re.findall(r"\{(FLT_\w+),\s*(\d+),\s*(\{[^}]*\})\}", m.group(1))


def decode_constant_body(kind, body):
    """Render a single FUNKY_CONSTANT entry as a space-free value token.

    Characters use the Funky hex escape `'@0x...;'`; integers and reals
    are bare numbers. Composites (tuples, lists, sequences, value
    ranges), strings, and anything else return "-" because they would
    contain spaces if written as literals.
    """
    if kind == "FLT_CHARACTER":
        m = re.search(r"\.value\s*=\s*(\d+)", body)
        return "'@0x%x;'" % int(m.group(1)) if m else "-"
    if kind in ("FLT_POSITIVE_INT64", "FLT_NEGATIVE_INT64"):
        m = re.search(r"\.value\s*=\s*(\d+)", body)
        if not m:
            return "-"
        v = int(m.group(1))
        return str(-v) if kind == "FLT_NEGATIVE_INT64" else str(v)
    if kind == "FLT_REAL":
        m = re.search(r"\.real_value\s*=\s*([-+0-9.eE]+)", body)
        return m.group(1) if m else "-"
    return "-"


def decode_constant_value(idx, const_enums, const_table):
    """Decode a CONSTANT's value from its `.const_idx = ...` reference.

    The FOT field negates the (negative) enum value to get the stored
    const_idx; the runtime reads constants[const_idx - 1]. Returns the
    rendered value token, or None when it cannot be resolved.
    """
    if not const_enums or not const_table:
        return None
    sign, prefix, rest = idx.group(1), idx.group(2), idx.group(3)
    m = re.match(r"(\w+)", rest)
    if not m:
        return None
    sym = prefix + m.group(1)
    if sym not in const_enums:
        return None
    const_idx = -const_enums[sym] if sign == "-" else const_enums[sym]
    tidx = const_idx - 1
    if 0 <= tidx < len(const_table):
        kind, _count, body = const_table[tidx]
        return decode_constant_body(kind, body)
    return None


def classify_fot_entry(cf, fot_type, attr_count, name, ns, end):
    """Classify one FOT entry in cf.text.

    Returns (symbol, kind, base) or None to skip the entry.
    """
    if not ns or ns in PRIVATE_NAMESPACES:
        return None
    if fot_type == "POLYMORPHIC":
        kind = "POLYMORPHIC_FUNCTION"
        # Check for has_a_setter = true within the struct initializer block
        if "has_a_setter = true" in cf.text[end:end + 200]:
            kind = "POLYMORPHIC_FUNCTION_WITH_SETTER"
        return f"{ns}::{name}", kind, None
    if fot_type == "INITIALIZED":
        idx = CONST_IDX.search(cf.text[end:end + 200])
        prefix = idx.group(2) if idx else None
        if prefix == "uni_":
            kind = "UNIQUE_ITEM"
        elif prefix == "func_":
            kind = "FUNCTION"
        else:
            # chr_, num_, list_, tuple_, sequence_, value_range_
            kind = "CONSTANT"
        # Decoded constant value lives in the base slot (constants have
        # no parent type); it survives the CONSTANT -> TYPE upgrade.
        value = None
        if kind == "CONSTANT" and idx:
            value = decode_constant_value(idx, cf.const_enums, cf.const_table)
        return f"{ns}::{name}", kind, value
    kind = classify_fot(fot_type, ns, attr_count)
    if kind is None:
        return None
    # Extract base type for DERIVED, OBJECT, TYPE entries
    base = None
    if fot_type in ("DERIVED", "OBJECT", "TYPE"):
        base = extract_fot_parent(cf.text, end, cf.local_polys)
    return f"{ns}::{name}", kind, base


def parse_c_file(cf):
    """Parse FOT entries and FUNC_INFO method tables of a compiled file.

    Returns dict of {symbol: (kind, base, source_file)}.
    base is the parent type for TYPE/OBJECT entries, the decoded initial
    value for CONSTANT entries, and None for all other kinds.
    """
    symbols = {}
    text, src = cf.text, cf.src
    for m in FOT_ENTRY.finditer(text):
        entry = classify_fot_entry(
            cf, m.group(1), int(m.group(2)), m.group(3), m.group(4), m.end()
        )
        if entry:
            symbol, kind, base = entry
            symbols[symbol] = (kind, base, src)
    # FUNC_INFO -> method entries, IO detection from the bytecode tables
    io_tables = cf.io_table_names()
    for m in FUNC_INFO.finditer(text):
        func_name, table_name = m.group(1), m.group(2)
        # Decode func_name to symbol name, resolving poly namespace
        decoded = decode_mangled_method(func_name, cf.local_polys)
        if not decoded:
            continue
        # Skip methods on private-namespace types
        type_ns = decoded.split("/")[0].split("::")[0]
        if type_ns in PRIVATE_NAMESPACES:
            continue
        if func_name in io_tables:
            symbols[decoded] = ("IO_METHOD", None, src)
        elif decoded not in symbols:
            symbols[decoded] = ("METHOD", None, src)
    return symbols


# ---------------------------------------------------------------------------
# Template parsing
# ---------------------------------------------------------------------------

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
            attr_name = raw[dot_idx + 1:]
            # Implicit using std: attribute names default to std namespace
            symbol = f"{type_part}/std::{attr_name}"
            symbols[symbol] = ("ATTRIBUTE", None, src)

    return symbols


# ---------------------------------------------------------------------------
# Bytecode helpers
# ---------------------------------------------------------------------------

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


def collect_module_polys(text):
    """Extract polymorphic function names and namespaces from a .c file.

    Returns dict mapping bare poly name -> namespace.
    Empty namespace means local (module-private) poly.
    """
    polys = {}
    for m in re.finditer(
        r'FOT_POLYMORPHIC[\s\S]{0,50}?"([^"]*?)\\000([^"]*)"', text
    ):
        name, ns = m.group(1), m.group(2)
        polys[name] = ns
    return polys


# ---------------------------------------------------------------------------
# Per-file passes over compiled modules
# ---------------------------------------------------------------------------

def parse_module_variables(cf):
    """Return the set of variable symbol names assigned as bytecode
    result destinations in this module."""
    used_ns = get_used_namespaces(cf.text)
    if not used_ns:
        return set()
    variables = set()
    no_ns_vars = set()
    for _table_name, body in extract_tab_tables(cf.text):
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


def module_poly_names(cf):
    """Return bare poly names declared in private namespaces in this file."""
    return {
        name for name, ns in cf.local_polys.items()
        if ns in PRIVATE_NAMESPACES
    }


def parse_compiled_io(cf):
    """Return dict of {symbol: kind} for this module's functions and methods
    whose bytecode tables contain IO_CALL/IO_TAIL_CALL."""
    io_symbols = {}
    io_tables = cf.io_table_names()
    for m in FUNC_TABLE.finditer(cf.text):
        table_name = m.group(1)
        if table_name not in io_tables:
            continue
        # Decode table_name to symbol, resolving poly namespace
        decoded = decode_mangled_method(table_name, cf.local_polys)
        if decoded:
            type_ns = decoded.split("/")[0].split("::")[0]
            if type_ns in PRIVATE_NAMESPACES:
                continue
            io_symbols[decoded] = "IO_METHOD"
        else:
            # Regular function (no /), check for std:: prefix after decoding
            parts = table_name.split("__", 1)
            if len(parts) == 2:
                ns, func = parts
                full = f"{ns.replace('__', '::')}::{func.replace('__', '::')}"
                io_symbols[full] = "IO_FUNCTION"
    return io_symbols


# ---------------------------------------------------------------------------
# ATTRIBUTE_DEFINITION blocks
# ---------------------------------------------------------------------------

def extract_block(text, start):
    """Return the text between the matching braces.

    `start` points just after an opening `{`; scans to the matching `}`.
    """
    depth = 1
    pos = start
    while pos < len(text) and depth > 0:
        if text[pos] == '{':
            depth += 1
        elif text[pos] == '}':
            depth -= 1
        pos += 1
    return text[start:pos]


def parse_attribute_definitions(cf, is_builtin):
    """Parse ATTRIBUTE_DEFINITION blocks of one compiled .c file.

    Shared block format:
        static ATTRIBUTE_DEFINITION ns__type__attributes[] = {
            {left, right}, ...
        };
    left is var_name, -var_name, or (module files only) TYPE_FUNCTION;
    right is -func_*/func_* for methods, -var_*/-num_*/-chr_*/... for
    attributes. Symbol names are namespace::type/attr_name; TYPE_FUNCTION
    entries become namespace::type/:.

    Format differences:
      - Module files carry TYPE_FUNCTION entries, and method namespaces
        resolve through local polys (private polys are skipped).
      - builtins.c method names embed the namespace and default to std;
        IO is not detected there (template parsing is authoritative).
      - IO detection (METHOD -> IO_METHOD) uses module bytecode tables.

    Returns dict of {symbol: (kind, base, source_file)}.
    """
    symbols = {}
    text, src = cf.text, cf.src
    io_tables = None if is_builtin else cf.io_table_names()

    for header in ATTR_DEF_HEADER.finditer(text):
        mangled = header.group(1)
        parts = mangled.split("__", 1)
        if len(parts) != 2:
            continue
        ns, type_name = parts[0], parts[1].replace("__", "::")
        if ns in PRIVATE_NAMESPACES:
            continue

        block = extract_block(text, header.end())
        type_prefix = f"{ns}::{type_name}"

        for entry in ATTR_DEF_ENTRY.finditer(block):
            left, right = entry.group(1), entry.group(2)

            if left == "TYPE_FUNCTION":
                symbols[f"{type_prefix}/:"] = ("TYPE_FUNCTION", None, src)
                continue

            # Strip leading "-" and "var_" prefix
            attr_name = left.lstrip('-')
            if attr_name.startswith("var_"):
                attr_name = attr_name[4:]
            # Decode mangled namespace: std__foo -> std::foo
            attr_name = attr_name.replace("__", "::")
            if not attr_name:
                continue
            if is_builtin:
                # Add implicit std:: if no explicit namespace
                resolved = add_std_namespace(attr_name)
            else:
                # Resolve namespace or skip local/private polys
                resolved, skip = resolve_attr_namespace(attr_name, cf.local_polys)
                if skip:
                    continue
            attr_name = resolved

            symbol = f"{type_prefix}/{attr_name}"
            if right.startswith("func_") or right.startswith("-func_"):
                kind = "METHOD"
                func_ref = right.lstrip("-").lstrip("func_")
                if io_tables is not None and func_ref in io_tables:
                    # Method's bytecode table contains IO_CALL / IO_TAIL_CALL
                    kind = "IO_METHOD"
            else:
                kind = "ATTRIBUTE"
            symbols[symbol] = (kind, None, src)

    return symbols


# ---------------------------------------------------------------------------
# Upgrade passes
# ---------------------------------------------------------------------------

def upgrade_variables(all_symbols, module_vars):
    """Upgrade OBJECT -> VARIABLE where bytecode assigns to the name."""
    for name in module_vars:
        if name in all_symbols and all_symbols[name][0] == 'OBJECT':
            _, base, src = all_symbols[name]
            all_symbols[name] = ('VARIABLE', base, src)


def upgrade_io(all_symbols, compiled_io):
    """Upgrade FUNCTION -> IO_FUNCTION, METHOD -> IO_METHOD where bytecode
    contains I/O calls. Unknown symbols are added with source 'unknown'."""
    for name, io_kind in compiled_io.items():
        if name in all_symbols:
            old_kind, base, src = all_symbols[name]
            if old_kind == "FUNCTION":
                all_symbols[name] = ("IO_FUNCTION", base, src)
            elif old_kind == "METHOD":
                all_symbols[name] = ("IO_METHOD", base, src)
        elif io_kind not in {v[0] for v in all_symbols.values()}:
            all_symbols[name] = (io_kind, None, "unknown")


def upgrade_types_with_children(all_symbols):
    """Upgrade OBJECT/CONSTANT -> TYPE when children exist.

    (Only objects that were not already upgraded to VARIABLE.)
    Also covers CONSTANT -> TYPE for tuple-based types.
    """
    for name in list(all_symbols.keys()):
        kind, base, src = all_symbols[name]
        if kind in ("OBJECT", "CONSTANT"):
            prefix = f"{name}/"
            if any(child.startswith(prefix) for child in all_symbols):
                all_symbols[name] = ("TYPE", base, src)


# ---------------------------------------------------------------------------
# Main pipeline
# ---------------------------------------------------------------------------

def main():
    """Assemble the complete symbol list.

    Pipeline (order matters — later passes may overwrite earlier ones):
      1. Parse contexts for builtins.c + every compiled module file
      2. FOT entries: types, objects, variables, constants, functions
      3. ATTRIBUTE_DEFINITION blocks: methods, attributes, type functions
      4. OBJECT -> VARIABLE where bytecode assigns to the name
      5. FUNCTION/METHOD -> IO_* where bytecode contains I/O calls
      6. Template declarations (authoritative for builtins)
      7. OBJECT/CONSTANT -> TYPE where '/'-prefixed children exist
    """
    module_files = [CompiledFile(p) for p in iter_library_c_files()]

    # Collect private-namespace poly names before attribute namespace
    # resolution can use them.
    for cf in module_files:
        PRIVATE_POLY_NAMES.update(module_poly_names(cf))

    all_symbols = {}
    if BUILTINS_C.exists():
        builtin = CompiledFile(BUILTINS_C, is_builtin=True)
        all_symbols.update(parse_c_file(builtin))
        all_symbols.update(parse_attribute_definitions(builtin, is_builtin=True))
    for cf in module_files:
        all_symbols.update(parse_c_file(cf))
    for cf in module_files:
        all_symbols.update(parse_attribute_definitions(cf, is_builtin=False))

    # IO detection from compiled code (upgrade FUNCTION -> IO_FUNCTION,
    # METHOD -> IO_METHOD)
    compiled_io = {}
    for cf in module_files:
        compiled_io.update(parse_compiled_io(cf))

    # Detect variables from TAB_NUM bytecode (upgrade OBJECT -> VARIABLE)
    module_vars = set()
    for cf in module_files:
        module_vars.update(parse_module_variables(cf))

    upgrade_variables(all_symbols, module_vars)
    upgrade_io(all_symbols, compiled_io)

    # Template methods and functions (overwrites builtins with proper
    # template source)
    all_symbols.update(parse_templates())

    upgrade_types_with_children(all_symbols)

    # Output sorted, with base column
    for name in sorted(all_symbols):
        kind, base, src = all_symbols[name]
        base_str = base if base else "-"
        print(f"{name} {kind} {base_str} ({src})")


if __name__ == "__main__":
    main()
