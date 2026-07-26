// generate_builtins.c
//
// Reimplementation (in C) of the Simplicity program "old_compiler/builtins.sim".
// It reads the runtime templates ("runtime_templates/*.template") plus the
// runtime VTABLE definition ("runtime/common.h") and regenerates the two files
//   runtime/builtins.h
//   runtime/builtins.c
// that are otherwise produced by the (Simplicity based) old Funky compiler.
//
// Design notes
// ------------
// * The program is a one-shot code generator, therefore it never frees memory:
//   every helper returns a freshly heap-allocated, NUL-terminated byte string.
//   This mirrors the "functional" style of the Simplicity original and keeps
//   the code free of ownership bookkeeping.
// * Funky strings are sequences of Unicode code points, but every byte that is
//   relevant for the generated output is plain ASCII (the only non-ASCII bytes
//   in the templates live inside a documentation comment that is stripped away
//   before it can influence any index arithmetic), so we operate on raw bytes.
// * Indices follow the Funky convention: they are 1-based and a negative index
//   counts from the end (-1 == last element).
//
// The naming deliberately uses the same "speaking" identifiers as the original.
//
// Fidelity of the output
// ----------------------
// * "runtime/builtins.c" is reproduced BYTE-FOR-BYTE identically.
// * "runtime/builtins.h" is identical EXCEPT for the emission order of the 13
//   "UPDATE_<...>_ARRAY_DATA_SET_VALUE" union structs.  The original expander
//   collects UNION definitions in a plain, unordered hash table ("empty_table"
//   in builtins.sim) and emits them in that table's iteration order, which is an
//   implementation-defined artifact of the Simplicity/Funky hash-table (a HAMT).
//   This tool instead emits them in a stable, deterministic order (the order in
//   which the UNION directives appear in the templates).  These 13 typedefs are
//   mutually independent (each is "{ TAG tag; long offset; <type> value; }"), so
//   the reordering is semantically irrelevant: the header compiles identically.
//
// Usage:
//   generate_builtins [templates_dir] [common.h] [out.h] [out.c]
//   defaults: runtime_templates  runtime/common.h  runtime/builtins.h  runtime/builtins.c

#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <ctype.h>
#include <dirent.h>
#include <errno.h>

//======================================================================
// dynamic byte string
//======================================================================

typedef struct {
  char *data;   // NUL-terminated for convenience
  long  length; // number of bytes (excluding the terminating NUL)
} String;

static void *xmalloc(size_t n) {
  void *p = malloc(n ? n : 1);
  if (!p) { fprintf(stderr, "out of memory\n"); exit(1); }
  return p;
}

static String *string_of_bytes(const char *bytes, long length) {
  String *s = xmalloc(sizeof(String));
  s->data = xmalloc((size_t)length + 1);
  if (length) memcpy(s->data, bytes, (size_t)length);
  s->data[length] = '\0';
  s->length = length;
  return s;
}

static String *string_from_c(const char *c) {
  return string_of_bytes(c, (long)strlen(c));
}

static String *empty_string(void) { return string_of_bytes("", 0); }

static int is_empty(const String *s) { return s->length == 0; }

// 1-based indexing, negative from the end; out of range yields '\0'.
static int char_at(const String *s, long idx) {
  if (idx < 0) idx = s->length + 1 + idx;
  if (idx < 1 || idx > s->length) return '\0';
  return (unsigned char)s->data[idx - 1];
}

// Resolve a possibly negative 1-based index to an absolute 1-based index.
static long resolve_index(const String *s, long idx) {
  if (idx < 0) idx = s->length + 1 + idx;
  return idx;
}

// range(s i j): inclusive 1-based sub-sequence; empty when i > j.
static String *range_of(const String *s, long i, long j) {
  i = resolve_index(s, i);
  j = resolve_index(s, j);
  if (i < 1) i = 1;
  if (j > s->length) j = s->length;
  if (i > j) return empty_string();
  return string_of_bytes(s->data + (i - 1), j - i + 1);
}

//======================================================================
// mutable string builder (used for the accumulating "buffers")
//======================================================================

typedef struct {
  char *data;
  long  length;
  long  capacity;
} Builder;

static Builder *builder_new(void) {
  Builder *b = xmalloc(sizeof(Builder));
  b->capacity = 64;
  b->data = xmalloc((size_t)b->capacity);
  b->length = 0;
  b->data[0] = '\0';
  return b;
}

static void builder_ensure(Builder *b, long extra) {
  if (b->length + extra + 1 > b->capacity) {
    while (b->length + extra + 1 > b->capacity) b->capacity *= 2;
    b->data = realloc(b->data, (size_t)b->capacity);
    if (!b->data) { fprintf(stderr, "out of memory\n"); exit(1); }
  }
}

static void builder_append_bytes(Builder *b, const char *bytes, long n) {
  builder_ensure(b, n);
  memcpy(b->data + b->length, bytes, (size_t)n);
  b->length += n;
  b->data[b->length] = '\0';
}

static void builder_append_str(Builder *b, const String *s) {
  builder_append_bytes(b, s->data, s->length);
}

static void builder_append_c(Builder *b, const char *c) {
  builder_append_bytes(b, c, (long)strlen(c));
}

static void builder_append_char(Builder *b, int c) {
  char ch = (char)c;
  builder_append_bytes(b, &ch, 1);
}

static String *builder_to_string(Builder *b) {
  return string_of_bytes(b->data, b->length);
}

//======================================================================
// needle / separator search
//======================================================================

typedef enum { NK_CHAR, NK_SET, NK_STRING } NeedleKind;

typedef struct {
  NeedleKind kind;
  int  ch;          // NK_CHAR
  const char *set;  // NK_SET (NUL terminated list of alternatives)
  const char *str;  // NK_STRING
  long slen;        // NK_STRING length
} Needle;

static Needle need_char(int c) {
  Needle n; n.kind = NK_CHAR; n.ch = c; n.set = NULL; n.str = NULL; n.slen = 0;
  return n;
}
static Needle need_set(const char *set) {
  Needle n; n.kind = NK_SET; n.ch = 0; n.set = set; n.str = NULL; n.slen = 0;
  return n;
}
static Needle need_string(const char *str) {
  Needle n; n.kind = NK_STRING; n.ch = 0; n.set = NULL; n.str = str;
  n.slen = (long)strlen(str); return n;
}

// Does the needle match at 1-based position p? Returns match length or 0.
static int needle_match_at(const String *s, const Needle *nd, long p) {
  switch (nd->kind) {
    case NK_CHAR:
      return char_at(s, p) == nd->ch ? 1 : 0;
    case NK_SET: {
      int c = char_at(s, p);
      for (const char *q = nd->set; *q; q++) if ((unsigned char)*q == c) return 1;
      return 0;
    }
    case NK_STRING:
      if (p < 1 || p + nd->slen - 1 > s->length) return 0;
      return memcmp(s->data + (p - 1), nd->str, (size_t)nd->slen) == 0 ? (int)nd->slen : 0;
  }
  return 0;
}

// Find the occ-th occurrence (occ == 1 first, occ == -1 last).
// Returns 1-based start position (0 when not found) and stores the match length.
static long find_needle(const String *s, Needle nd, int occ, int *match_len) {
  if (occ == -1) {
    for (long p = s->length; p >= 1; p--) {
      int m = needle_match_at(s, &nd, p);
      if (m) { if (match_len) *match_len = m; return p; }
    }
    if (match_len) *match_len = 0;
    return 0;
  }
  int count = 0;
  for (long p = 1; p <= s->length; p++) {
    int m = needle_match_at(s, &nd, p);
    if (m) {
      if (++count == occ) { if (match_len) *match_len = m; return p; }
      p += m - 1; // do not overlap multi-char matches
    }
  }
  if (match_len) *match_len = 0;
  return 0;
}

//======================================================================
// Funky string primitives (semantics reverse-engineered from usage)
//
// For a separator found at position p with match length L:
//   before / truncate_from  -> range(1, p-1)      (excludes the separator)
//   until                   -> range(1, p+L-1)    (includes the separator)
//   behind / truncate_until -> range(p+L, end)    (part after the separator)
// Not-found behaviour differs:
//   before, until, behind        -> empty string
//   truncate_from, truncate_until, truncate_behind -> the whole string
//======================================================================

static String *before_needle(const String *s, Needle nd, int occ) {
  int L; long p = find_needle(s, nd, occ, &L);
  if (!p) return empty_string();
  return range_of(s, 1, p - 1);
}
static String *until_needle(const String *s, Needle nd, int occ) {
  int L; long p = find_needle(s, nd, occ, &L);
  if (!p) return empty_string();
  return range_of(s, 1, p + L - 1);
}
static String *behind_needle(const String *s, Needle nd, int occ) {
  int L; long p = find_needle(s, nd, occ, &L);
  if (!p) return empty_string();
  return range_of(s, p + L, s->length);
}
static String *truncate_from_needle(const String *s, Needle nd, int occ) {
  int L; long p = find_needle(s, nd, occ, &L);
  if (!p) return string_of_bytes(s->data, s->length);
  return range_of(s, 1, p - 1);
}
static String *truncate_until_needle(const String *s, Needle nd, int occ) {
  int L; long p = find_needle(s, nd, occ, &L);
  if (!p) return string_of_bytes(s->data, s->length);
  return range_of(s, p + L, s->length);
}
static String *truncate_behind_needle(const String *s, Needle nd, int occ) {
  int L; long p = find_needle(s, nd, occ, &L);
  if (!p) return string_of_bytes(s->data, s->length);
  return range_of(s, 1, p + L - 1);
}

// between(s a b occ): from after the occ-th 'a' up to before the first 'b' that
// follows it.
static String *between_needles(const String *s, Needle a, Needle b, int occ) {
  int la; long pa = find_needle(s, a, occ, &la);
  if (!pa) return empty_string();
  long start = pa + la; // 1-based, first char after 'a'
  // find first 'b' at or after 'start'
  for (long p = start; p <= s->length; p++) {
    int lb = needle_match_at(s, &b, p);
    if (lb) return range_of(s, start, p - 1);
  }
  return empty_string();
}

//======================================================================
// predicates & simple transforms
//======================================================================

static int has_prefix(const String *s, const char *prefix) {
  long n = (long)strlen(prefix);
  if (n > s->length) return 0;
  return memcmp(s->data, prefix, (size_t)n) == 0;
}
static int has_suffix(const String *s, const char *suffix) {
  long n = (long)strlen(suffix);
  if (n > s->length) return 0;
  return memcmp(s->data + s->length - n, suffix, (size_t)n) == 0;
}
static int contains_c(const String *s, const char *sub) {
  int L; return find_needle(s, need_string(sub), 1, &L) != 0;
}
static int contains_char(const String *s, int c) {
  int L; return find_needle(s, need_char(c), 1, &L) != 0;
}

static int is_ws(int c) { return c == ' ' || c == '\t' || c == '\n' || c == '\r'; }

static String *trim_right(const String *s) {
  long j = s->length;
  while (j >= 1 && is_ws((unsigned char)s->data[j - 1])) j--;
  return range_of(s, 1, j);
}
static String *trim(const String *s) {
  long i = 1, j = s->length;
  while (i <= j && is_ws((unsigned char)s->data[i - 1])) i++;
  while (j >= i && is_ws((unsigned char)s->data[j - 1])) j--;
  if (i > j) return empty_string();
  return range_of(s, i, j);
}

static String *without_suffix_c(const String *s, const char *suffix) {
  if (has_suffix(s, suffix)) return range_of(s, 1, s->length - (long)strlen(suffix));
  return string_of_bytes(s->data, s->length);
}

static String *to_upper_case(const String *s) {
  String *r = string_of_bytes(s->data, s->length);
  for (long i = 0; i < r->length; i++) r->data[i] = (char)toupper((unsigned char)r->data[i]);
  return r;
}
static String *to_lower_case(const String *s) {
  String *r = string_of_bytes(s->data, s->length);
  for (long i = 0; i < r->length; i++) r->data[i] = (char)tolower((unsigned char)r->data[i]);
  return r;
}

//======================================================================
// string concatenation helpers
//======================================================================

static String *concat2(const String *a, const String *b) {
  String *r = xmalloc(sizeof(String));
  r->length = a->length + b->length;
  r->data = xmalloc((size_t)r->length + 1);
  memcpy(r->data, a->data, (size_t)a->length);
  memcpy(r->data + a->length, b->data, (size_t)b->length);
  r->data[r->length] = '\0';
  return r;
}
static String *concat_c(const String *a, const char *b) {
  String bs; bs.data = (char *)b; bs.length = (long)strlen(b);
  return concat2(a, &bs);
}

//======================================================================
// convenience shorthands mirroring the ".op." operators
//======================================================================

static String *before_char(const String *s, int c)          { return before_needle(s, need_char(c), 1); }
static String *behind_char(const String *s, int c)           { return behind_needle(s, need_char(c), 1); }
static String *truncate_from_char(const String *s, int c)    { return truncate_from_needle(s, need_char(c), 1); }
static String *truncate_until_str(const String *s, const char *x){ return truncate_until_needle(s, need_string(x), 1); }
static String *before_str(const String *s, const char *x)    { return before_needle(s, need_string(x), 1); }
static String *behind_str(const String *s, const char *x)    { return behind_needle(s, need_string(x), 1); }
static String *truncate_from_str(const String *s, const char *x){ return truncate_from_needle(s, need_string(x), 1); }

//======================================================================
// mangling & identifier helpers
//======================================================================

static int is_identifier_char(int c) {
  return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') ||
         (c >= '0' && c <= '9') || c == '_';
}

// replace every "::" by "__"
static String *mangle(const String *name) {
  Builder *b = builder_new();
  for (long i = 1; i <= name->length; i++) {
    if (char_at(name, i) == ':' && char_at(name, i + 1) == ':') {
      builder_append_c(b, "__");
      i++;
    } else {
      builder_append_char(b, char_at(name, i));
    }
  }
  return builder_to_string(b);
}

//======================================================================
// parsing-time helpers from builtins.sim
//======================================================================

// skip_indent(text &idx) -> indent (tab counts as 8)
static long skip_indent(const String *text, long *idx) {
  long indent = 0;
  while (char_at(text, *idx) == '\t') { (*idx)++; indent += 8; }
  while (char_at(text, *idx) == ' ')  { (*idx)++; indent += 1; }
  return indent;
}

// search_character(text ch &idx): advance idx to the position of ch (or end)
static void search_character(const String *text, int ch, long *idx) {
  while (*idx <= text->length && char_at(text, *idx) != ch) (*idx)++;
}

// skip_remark(text) : drop a leading (indented) "# ..." remark block.
static String *skip_remark(const String *text) {
  if (is_empty(text)) return string_of_bytes(text->data, text->length);
  long idx = 1;
  long indent = skip_indent(text, &idx);
  if (char_at(text, idx) == '#' &&
      (char_at(text, idx + 1) == '\n' || char_at(text, idx + 1) == ' ')) {
    for (;;) {
      search_character(text, '\n', &idx);
      if (idx == text->length) return empty_string();
      do { idx++; } while (char_at(text, idx) == '\n');
      long line_start_idx = idx;
      long next_indent = skip_indent(text, &idx);
      if (next_indent <= indent) return range_of(text, line_start_idx, -1);
    }
  }
  return string_of_bytes(text->data, text->length);
}

//======================================================================
// line iteration
//======================================================================

typedef struct { String **items; int count; int cap; } StringList;

static StringList *slist_new(void) {
  StringList *l = xmalloc(sizeof(StringList));
  l->cap = 8; l->count = 0; l->items = xmalloc(sizeof(String *) * l->cap);
  return l;
}
static void slist_push(StringList *l, String *s) {
  if (l->count == l->cap) { l->cap *= 2; l->items = realloc(l->items, sizeof(String *) * l->cap); }
  l->items[l->count++] = s;
}

// for_each_line: split into lines on '\n'; a single trailing newline does not
// produce an extra empty line.
static StringList *lines_of(const String *text) {
  StringList *l = slist_new();
  long i = 0;
  while (i < text->length) {
    long j = i;
    while (j < text->length && text->data[j] != '\n') j++;
    slist_push(l, string_of_bytes(text->data + i, j - i));
    if (j >= text->length) { i = j; break; }
    i = j + 1;
    if (i == text->length) break; // trailing newline: no extra empty line
  }
  return l;
}

//======================================================================
// indentation / outdent / normalize_code
//======================================================================

static String *indentation(long n) {
  Builder *b = builder_new();
  while (n >= 8) { builder_append_char(b, '\t'); n -= 8; }
  while (n >= 1) { builder_append_char(b, ' '); n -= 1; }
  return builder_to_string(b);
}

static String *outdent(const String *text) {
  long len = text->length;
  long idx = 1, min_indent = 999;
  while (idx <= len) {
    long indent = skip_indent(text, &idx);
    if (char_at(text, idx) != '\n' && indent < min_indent) min_indent = indent;
    search_character(text, '\n', &idx);
    idx++;
  }
  if (min_indent == 999) min_indent = 0;
  Builder *nb = builder_new();
  idx = 1;
  while (idx <= len) {
    long indent = skip_indent(text, &idx);
    builder_append_str(nb, indentation(indent - min_indent));
    long end_idx = idx;
    search_character(text, '\n', &end_idx);
    builder_append_str(nb, range_of(text, idx, end_idx));
    idx = end_idx + 1;
  }
  return builder_to_string(nb);
}

static String *push_char(const String *s, int c) {
  Builder *b = builder_new();
  builder_append_str(b, s);
  builder_append_char(b, c);
  return builder_to_string(b);
}

static String *normalize_code(const String *code) {
  return outdent(push_char(trim_right(code), '\n'));
}

//======================================================================
// replace_all engine
//======================================================================

typedef struct { int is_ws; const char *lit; } RElem;
typedef struct { RElem elems[6]; int nelems; const char *repl; } RRule;

// Try to match a rule at 0-based offset i; returns matched length or -1.
static long rule_match(const String *s, long i, const RRule *r) {
  long p = i;
  for (int e = 0; e < r->nelems; e++) {
    if (r->elems[e].is_ws) {
      long q = p;
      while (q < s->length && is_ws((unsigned char)s->data[q])) q++;
      if (q == p) return -1; // need at least one whitespace char
      p = q;
    } else {
      long n = (long)strlen(r->elems[e].lit);
      if (p + n > s->length) return -1;
      if (memcmp(s->data + p, r->elems[e].lit, (size_t)n) != 0) return -1;
      p += n;
    }
  }
  return p - i;
}

static String *replace_all(const String *s, const RRule *rules, int nrules) {
  Builder *b = builder_new();
  long i = 0;
  while (i < s->length) {
    int matched = 0;
    for (int r = 0; r < nrules; r++) {
      long m = rule_match(s, i, &rules[r]);
      if (m >= 0) { builder_append_c(b, rules[r].repl); i += m; matched = 1; break; }
    }
    if (!matched) { builder_append_char(b, (unsigned char)s->data[i]); i++; }
  }
  return builder_to_string(b);
}

static String *replace_first(const String *s, const char *from, const char *to) {
  int L; long p = find_needle(s, need_string(from), 1, &L);
  if (!p) return string_of_bytes(s->data, s->length);
  Builder *b = builder_new();
  builder_append_str(b, range_of(s, 1, p - 1));
  builder_append_c(b, to);
  builder_append_str(b, range_of(s, p + L, s->length));
  return builder_to_string(b);
}

//======================================================================
// misc from create_linker_tables.sim
//======================================================================

static String *type_and_name(const String *type, const String *name) {
  if (char_at(type, -1) == '*') return concat2(type, name);
  return concat2(concat_c(type, " "), name);
}

// extract_declaration(code): keep up to the first ')', then normalise whitespace.
static String *extract_declaration(const String *code) {
  String *c = truncate_behind_needle(code, need_char(')'), 1);
  static const RRule rules[3] = {
    { { {1,NULL}, {0,"("}, {1,NULL} }, 3, "(" },
    { { {1,NULL}, {0,")"}          }, 2, ")" },
    { { {1,NULL}                   }, 1, " " },
  };
  return replace_all(c, rules, 3);
}

static long to_integer(const String *s) {
  String *t = trim(s);
  return atol(t->data);
}

//======================================================================
// data model: the symbol tables
//======================================================================

typedef enum {
  FOT_UNKNOWN, FOT_UNKNOWN_POLYMORPHIC, FOT_TYPE, FOT_OBJECT, FOT_POLYMORPHIC,
  FOT_INITIALIZED, FOT_DERIVED, FOT_UNINITIALIZED, FOT_LOCAL, FOT_CONSTANT
} FieldObjectType;

typedef struct { String *key; String *value; } Pair;
typedef struct { Pair *items; int count; int cap; } PairList;

static PairList *plist_new(void) {
  PairList *l = xmalloc(sizeof(PairList));
  l->cap = 4; l->count = 0; l->items = xmalloc(sizeof(Pair) * l->cap);
  return l;
}
static void plist_push(PairList *l, String *k, String *v) {
  if (l->count == l->cap) { l->cap *= 2; l->items = realloc(l->items, sizeof(Pair) * l->cap); }
  l->items[l->count].key = k; l->items[l->count].value = v; l->count++;
}
static Pair *plist_find(PairList *l, const String *k) {
  for (int i = 0; i < l->count; i++)
    if (l->items[i].key->length == k->length &&
        memcmp(l->items[i].key->data, k->data, (size_t)k->length) == 0)
      return &l->items[i];
  return NULL;
}
// set/replace preserving position (or append)
static void plist_set(PairList *l, String *k, String *v) {
  Pair *p = plist_find(l, k);
  if (p) { p->value = v; return; }
  plist_push(l, k, v);
}

// constant
typedef enum { CONST_BODY, CONST_UNIQUE } ConstKind;
typedef struct {
  ConstKind kind;
  String *key;   // == id_of for our constants
  String *id;
  // body
  String *name;
  long param_count;
  String *code;
  // unique
  String *uname;
} Constant;

typedef struct { Constant **items; int count; int cap; } ConstList;
static ConstList *clist_new(void) {
  ConstList *l = xmalloc(sizeof(ConstList));
  l->cap = 16; l->count = 0; l->items = xmalloc(sizeof(Constant *) * l->cap);
  return l;
}
static Constant *clist_find(ConstList *l, const String *key) {
  for (int i = 0; i < l->count; i++)
    if (l->items[i]->key->length == key->length &&
        memcmp(l->items[i]->key->data, key->data, (size_t)key->length) == 0)
      return l->items[i];
  return NULL;
}
static void clist_push(ConstList *l, Constant *c) {
  if (l->count == l->cap) { l->cap *= 2; l->items = realloc(l->items, sizeof(Constant *) * l->cap); }
  l->items[l->count++] = c;
}

// variable
typedef struct Variable {
  String *fullname;
  FieldObjectType type;
  String *id;             // var_<fullname>
  String *parent;         // may be NULL
  PairList *fields;       // FOT_TYPE  (name = type)
  String *initial_value;  // FOT_INITIALIZED : the constant id
  int has_a_setter;       // FOT_POLYMORPHIC
  String *type_function;  // code for  <name>___type
  PairList *internal_methods; // insert order: method_id -> function_name
  PairList *attributes;       // key order:   attribute_id -> value_id
  String *arguments;      // FOT_OBJECT
  int is_public;
  int is_redefined;
  int level;
  long local_index;
} Variable;

typedef struct { Variable **items; int count; int cap; } VarList;
static VarList *vlist_new(void) {
  VarList *l = xmalloc(sizeof(VarList));
  l->cap = 16; l->count = 0; l->items = xmalloc(sizeof(Variable *) * l->cap);
  return l;
}
static Variable *vlist_find(VarList *l, const String *name) {
  for (int i = 0; i < l->count; i++)
    if (l->items[i]->fullname->length == name->length &&
        memcmp(l->items[i]->fullname->data, name->data, (size_t)name->length) == 0)
      return l->items[i];
  return NULL;
}
static void vlist_push(VarList *l, Variable *v) {
  if (l->count == l->cap) { l->cap *= 2; l->items = realloc(l->items, sizeof(Variable *) * l->cap); }
  l->items[l->count++] = v;
}

// union variant list
typedef struct { String *name; PairList *variants; } Union; // variants: variant_name -> fields(PairList*) via value pointer hack
// We store union variants as: name -> list of (variant_name, PairList* of fields).
typedef struct { String *variant_name; PairList *fields; } UnionVariant;
typedef struct { UnionVariant *items; int count; int cap; } UnionVariantList;
typedef struct { String *name; UnionVariantList *variants; } UnionEntry;
typedef struct { UnionEntry *items; int count; int cap; } UnionList;

typedef struct {
  StringList *defined_namespaces;
  ConstList  *constants;
  VarList    *variables;
  StringList *declarations;
  StringList *local_function_declarations;
  StringList *function_declarations;
  StringList *code_sections;
  StringList *include_files;   // kept sorted (key order set)
  UnionList  *unions;          // insertion order; emitted later
} Tables;

static Tables *create_tables(void) {
  Tables *t = xmalloc(sizeof(Tables));
  t->defined_namespaces = slist_new();
  t->constants = clist_new();
  t->variables = vlist_new();
  t->declarations = slist_new();
  t->local_function_declarations = slist_new();
  t->function_declarations = slist_new();
  t->code_sections = slist_new();
  t->include_files = slist_new();
  t->unions = xmalloc(sizeof(UnionList));
  t->unions->cap = 8; t->unions->count = 0;
  t->unions->items = xmalloc(sizeof(UnionEntry) * t->unions->cap);
  return t;
}

static Variable *new_variable_prototype(void) {
  Variable *v = xmalloc(sizeof(Variable));
  v->fullname = NULL;
  v->type = FOT_UNKNOWN;
  v->id = NULL;
  v->parent = NULL;
  v->fields = plist_new();
  v->initial_value = NULL;
  v->has_a_setter = 0;
  v->type_function = NULL;
  v->internal_methods = plist_new();
  v->attributes = plist_new();
  v->arguments = NULL;
  v->is_public = 0;
  v->is_redefined = 0;
  v->level = 1;
  v->local_index = 0;
  return v;
}

//======================================================================
// macro replacement for inline C code (port of macros.sim + replace_macros)
//======================================================================

// --- shared state for the record/replay event macros ---------------------
typedef enum { EK_NONE, EK_EVENT, EK_ACTION } EventKind;
typedef enum { EP_NONE, EP_INFO, EP_DATA } EventPhase;

static String    *g_event_name;
static EventKind  g_event_kind;
static EventPhase g_event_phase;
// data/info "variables" are themselves lists; store them out of band
typedef struct { StringList **items; int count; int cap; } VarRecords;
static VarRecords g_data_records, g_info_records;

static void varrec_reset(VarRecords *v) { v->count = 0; if (!v->items) { v->cap = 8; v->items = xmalloc(sizeof(StringList *) * v->cap); } }
static void varrec_push(VarRecords *v, StringList *rec) {
  if (v->count == v->cap) { v->cap *= 2; v->items = realloc(v->items, sizeof(StringList *) * v->cap); }
  v->items[v->count++] = rec;
}

// forward decl
static String *replace_macros(const String *code);

// helper: build a record list from strings
static StringList *record3(const char *a, String *b, String *c) {
  StringList *l = slist_new();
  slist_push(l, string_from_c(a));
  slist_push(l, b);
  if (c) slist_push(l, c);
  return l;
}

// --- string (textual) macros ---------------------------------------------
typedef struct { const char *name; const char *value; } StringMacro;

// Values transcribed from macros.sim using the multi-line-string model:
//   value = content lines joined by '\n' (+ trailing '\n' unless the last line
//   ends with '@'); a trailing '@' suppresses the following newline; '@' renders
//   as empty. "::" is left intact here and mangled by the recursive pass.
static const StringMacro string_macros[] = {
  { "ARGC", "main_argc" },
  { "ARGV", "main_argv" },
  { "VAR", "(NODE *)&$1" },
  { "POLY_IDX", "poly_idx__$1" },
  { "POLY_COUNT", "polymorphic_function_count" },
  { "POLY_WITH_SETTER_COUNT", "polymorphic_function_with_setter_count" },
  { "POLY_NAMES", "polymorphic_function_names" },
  { "UNIQUE_NAMES", "unique_item_names" },
  { "ARGUMENT_COUNT", "TLS_argument_count" },
  { "CHECK_ARGUMENTS", "if (TLS_argument_count != $1) INVALID_ARGUMENTS" },
  { "MIN_ARGUMENTS", "if (TLS_argument_count < $1) {\n  too_few_arguments();\n  return;\n}" },
  { "MAX_ARGUMENTS", "if (TLS_argument_count > $1) {\n  too_many_arguments();\n  return;\n}" },
  { "CHECK_RESULTS", "if (TLS_result_count != $1) RESULT_COUNT_MISMATCH" },
  { "MIN_RESULTS", "if (TLS_result_count < $1) {\n  too_few_results();\n  return;\n}" },
  { "MAX_RESULTS", "if (TLS_result_count > $1) {\n  too_many_results();\n  return;\n}" },
  { "CHECK_IO_ACCESS_RIGHTS", "if (TLS_deny_io) MISSING_IO_ACCESS_RIGHTS" },
  { "RESULT_COUNT", "TLS_result_count" },
  { "UNDEFINED", "undefined" },
  { "ZERO", "zero" },
  { "TRUE", "(NODE *)&std_types__true" },
  { "FALSE", "(NODE *)&std_types__false" },
  { "EMPTY_STRING", "empty_string" },
  { "MYSELF", "TLS_myself" },
  { "ARGUMENTS", "TLS_arguments[$1]" },
  { "CREATE", "create__$1($+)" },
  { "TYPE", "$1.type" },
  { "TYPEOF", "($1)->type" },
  { "SIZEOF", "($1)->attributes->vtable->size" },
  { "PREPARE_NO_RESULT", "TLS_argument_count = 0;" },
  { "RETURN_NOTHING", "{\n  TLS_argument_count = 0;\n  return;\n}" },
  { "PREPARE_SINGLE_RESULT", "{\n  NODE *result__node = (NODE *)($1);\n  TLS_arguments[0] = result__node;\n  TLS_argument_count = 1;\n}" },
  { "RETURN_SINGLE_RESULT", "{\n  NODE *result__node = (NODE *)($1);\n  TLS_arguments[0] = result__node;\n  TLS_argument_count = 1;\n  return;\n}" },
  { "RETURN_BOOLEAN", "RETURN_SINGLE_RESULT(from_bool($1))" },
  { "RETURN_UNDEFINED", "RETURN_SINGLE_RESULT(&std_types::undefined)" },
  { "RETURN_TRUE", "RETURN_SINGLE_RESULT(&std_types::true)" },
  { "RETURN_FALSE", "RETURN_SINGLE_RESULT(&std_types::false)" },
  { "START_ARGUMENTS", "TLS_argument_count = $1;" },
  { "CHECK", "if (!$1) return;" },
  { "RETURN", "{\n  return;\n}" },
  { "CHAIN", "{\n  func = TLS_myself->type;\n  return;\n}" },
  { "UNRECOVERABLE_ERROR", "unrecoverable_error($*);" },
  { "OUT_OF_MEMORY_ERROR", "out_of_memory_error();" },
  { "CREATE_RUNTIME_ERROR", "create_error_message(\n  module__builtin.constants_base[unique__std__RUNTIME_ERROR-1],\n  $1, 0, 0, NULL);" },
  { "RUNTIME_ERROR", "{\n  create_error_message(\n    module__builtin.constants_base[unique__std__RUNTIME_ERROR-1],\n    $1, 0, 0, NULL);\n  return;\n}" },
  { "NO_SUCH_FUNCTION", "{\n  no_such_function();\n  return;\n}" },
  { "NO_SUCH_ATTRIBUTE", "{\n  no_such_function();\n  return;\n}" },
  { "TOO_FEW_ARGUMENTS", "{\n  too_few_arguments();\n  return;\n}" },
  { "TOO_MANY_ARGUMENTS", "{\n  too_many_arguments();\n  return;\n}" },
  { "INVALID_ARGUMENTS", "{\n  invalid_arguments();\n  return;\n}" },
  { "RESULT_COUNT_MISMATCH", "{\n  result_count_mismatch();\n  return;\n}" },
  { "TOO_FEW_RESULTS", "{\n  too_few_results();\n  return;\n}" },
  { "TOO_MANY_RESULTS", "{\n  too_many_results();\n  return;\n}" },
  { "INVALID_RESULTS", "{\n  invalid_results();\n  return;\n}" },
  { "INVALID_INDEX", "{\n  invalid_index($1);\n  return;\n}" },
  { "DIVIDE_BY_ZERO", "{\n  divide_by_zero();\n  return;\n}" },
  { "MISSING_IO_ACCESS_RIGHTS", "{\n  missing_io_access_rights();\n  return;\n}" },
  { "NOT_YET_IMPLEMENTED", "{\n  not_yet_implemented();\n  return;\n}" },
  { "OPEN_FAILED", "{\n  open_failed();\n  return;\n}" },
  { "CLOSE_FAILED", "{\n  close_failed();\n  return;\n}" },
  { "READ_ERROR", "{\n  read_error();\n  return;\n}" },
  { "WRITE_ERROR", "{\n  write_error();\n  return;\n}" },
};
static const int n_string_macros = (int)(sizeof(string_macros) / sizeof(string_macros[0]));

static const char *find_string_macro(const String *name) {
  for (int i = 0; i < n_string_macros; i++)
    if ((long)strlen(string_macros[i].name) == name->length &&
        memcmp(string_macros[i].name, name->data, (size_t)name->length) == 0)
      return string_macros[i].value;
  return NULL;
}

// --- function (closure) macros -------------------------------------------
static int is_function_macro(const String *name) {
  static const char *names[] = {
    "EVENT","ACTION","INFO","DATA","INT","UINT","LONG","ULONG","PTR",
    "INT_ARRAY","MEMORY","C_STRING","END", NULL };
  for (int i = 0; names[i]; i++)
    if ((long)strlen(names[i]) == name->length &&
        memcmp(names[i], name->data, (size_t)name->length) == 0)
      return 1;
  return 0;
}

static String *arg_or(StringList *args, int idx1, const char *dflt) {
  if (args && idx1 >= 1 && idx1 <= args->count) return args->items[idx1 - 1];
  return string_from_c(dflt);
}

// Build the DATA-phase "store" text for an integer-like variable.
static String *event_store_block(const char *store_fn, String *name, String *value,
                                 const char *end_call) {
  Builder *b = builder_new();
  if (g_event_kind == EK_EVENT) {
    builder_append_c(b, "  ");
    builder_append_c(b, store_fn);
    builder_append_c(b, "(");
    builder_append_str(b, name);
    builder_append_c(b, ");");
  } else {
    builder_append_c(b, "  if (");
    builder_append_str(b, name);
    builder_append_c(b, " == ");
    builder_append_str(b, value);
    builder_append_c(b, ") {\n    successful__action(\"");
    builder_append_str(b, g_event_name);
    builder_append_c(b, "\");\n  } else {\n    failed__action(\"");
    builder_append_str(b, g_event_name);
    builder_append_c(b, "\");\n    ");
    builder_append_c(b, store_fn);
    builder_append_c(b, "(");
    builder_append_str(b, name);
    builder_append_c(b, ");\n");
    if (end_call && end_call[0]) { builder_append_c(b, "    "); builder_append_c(b, end_call); builder_append_c(b, "\n"); }
    builder_append_c(b, "  }");
  }
  return builder_to_string(b);
}

static String *call_function_macro(const String *name, StringList *args) {
  const char *n = name->data;
  long nl = name->length;
  #define NAME_IS(s) ((long)strlen(s) == nl && memcmp(s, n, (size_t)nl) == 0)

  if (NAME_IS("EVENT")) {
    g_event_name = arg_or(args, 1, "");
    g_event_kind = EK_EVENT;
    return string_from_c("if (event__mode != EM__REPLAY) {");
  }
  if (NAME_IS("ACTION")) {
    g_event_name = arg_or(args, 1, "");
    g_event_kind = EK_ACTION;
    return string_from_c("if (event__mode != EM__REPLAY) {");
  }
  if (NAME_IS("INFO")) { g_event_phase = EP_INFO; return empty_string(); }
  if (NAME_IS("DATA")) {
    g_event_phase = EP_DATA;
    if (g_event_kind == EK_EVENT) {
      Builder *b = builder_new();
      builder_append_c(b, "  if (event__mode == EM__RECORD) {\n    record__event(\"");
      builder_append_str(b, g_event_name);
      builder_append_c(b, "\");");
      return builder_to_string(b);
    }
    return string_from_c("  if (event__mode == EM__RECORD) {");
  }
  if (NAME_IS("INT") || NAME_IS("UINT") || NAME_IS("LONG")) {
    String *name_a = arg_or(args, 1, "");
    String *value = (args && args->count == 2) ? args->items[1] : string_from_c("0");
    const char *rec_type = NAME_IS("INT") ? "integer" : NAME_IS("UINT") ? "unsigned_integer" : "long_integer";
    const char *store_fn = NAME_IS("INT") ? "store__integer" : NAME_IS("UINT") ? "store__unsigned_integer" : "store__long_integer";
    const char *end_call = NAME_IS("INT") ? "end__record();" : NAME_IS("LONG") ? "end__report();" : "";
    if (g_event_phase == EP_DATA) {
      varrec_push(&g_data_records, record3(rec_type, name_a, value));
      return event_store_block(store_fn, name_a, value, end_call);
    }
    varrec_push(&g_info_records, record3(rec_type, name_a, value));
    return empty_string();
  }
  if (NAME_IS("ULONG")) {
    String *name_a = arg_or(args, 1, "");
    String *value = arg_or(args, 2, "0");
    if (g_event_phase == EP_DATA) {
      varrec_push(&g_data_records, record3("unsigned_long_integer", name_a, value));
      return event_store_block("store__unsigned_long_integer", name_a, value, "");
    }
    varrec_push(&g_info_records, record3("unsigned_long_integer", name_a, value));
    return empty_string();
  }
  if (NAME_IS("PTR")) {
    String *name_a = arg_or(args, 1, "");
    if (g_event_phase == EP_DATA) {
      varrec_push(&g_data_records, record3("pointer", name_a, NULL));
      if (g_event_kind == EK_EVENT) {
        Builder *b = builder_new();
        builder_append_c(b, "  store__pointer("); builder_append_str(b, name_a); builder_append_c(b, ");");
        return builder_to_string(b);
      }
      Builder *b = builder_new();
      builder_append_c(b, "  if (");
      builder_append_str(b, name_a);
      builder_append_c(b, " && ");
      builder_append_str(b, name_a);
      builder_append_c(b, " != (void *)FIRST_INVALID_ADDRESS) {\n    successful__action(\"");
      builder_append_str(b, g_event_name);
      builder_append_c(b, "\");\n  } else {\n    failed__action(\"");
      builder_append_str(b, g_event_name);
      builder_append_c(b, "\");\n    store__pointer(");
      builder_append_str(b, name_a);
      builder_append_c(b, ");\n  }");
      return builder_to_string(b);
    }
    varrec_push(&g_info_records, record3("pointer", name_a, NULL));
    return empty_string();
  }
  if (NAME_IS("INT_ARRAY") || NAME_IS("MEMORY")) {
    String *name_a = arg_or(args, 1, "");
    String *length = arg_or(args, 2, "");
    const char *rt = NAME_IS("INT_ARRAY") ? "int_array" : "memory";
    const char *sf = NAME_IS("INT_ARRAY") ? "store__int_array" : "store__memory";
    if (g_event_phase == EP_DATA) {
      varrec_push(&g_data_records, record3(rt, name_a, length));
      Builder *b = builder_new();
      builder_append_c(b, "  "); builder_append_c(b, sf); builder_append_c(b, "(");
      builder_append_str(b, name_a); builder_append_c(b, ", "); builder_append_str(b, length);
      builder_append_c(b, ");");
      return builder_to_string(b);
    }
    varrec_push(&g_info_records, record3(rt, name_a, length));
    return empty_string();
  }
  if (NAME_IS("C_STRING")) {
    String *name_a = arg_or(args, 1, "");
    if (g_event_phase == EP_DATA) {
      varrec_push(&g_data_records, record3("c_string", name_a, NULL));
      Builder *b = builder_new();
      builder_append_c(b, "  store__c_string("); builder_append_str(b, name_a); builder_append_c(b, ");");
      return builder_to_string(b);
    }
    varrec_push(&g_info_records, record3("c_string", name_a, NULL));
    return empty_string();
  }
  if (NAME_IS("END")) {
    Builder *buf = builder_new();
    // retrieve_variables closure ------------------------------------------
    const char *retr_indent = (g_event_kind == EK_ACTION) ? "    " : "  ";
    const char *print_indent = "  ";
    // build retrieve into a temp so we can insert at the right spot
    Builder *retr = builder_new();
    for (int i = 0; i < g_data_records.count; i++) {
      StringList *var = g_data_records.items[i];
      const char *type = var->items[0]->data;
      String *vname = var->items[1];
      builder_append_c(retr, retr_indent);
      if (strcmp(type, "pointer") == 0) {
        builder_append_c(retr, "retrieve__pointer((const void **)&"); builder_append_str(retr, vname); builder_append_c(retr, ");\n");
      } else if (strcmp(type, "int_array") == 0) {
        builder_append_str(retr, var->items[2]); builder_append_c(retr, " = retrieve__int_array((int **)&"); builder_append_str(retr, vname); builder_append_c(retr, ");\n");
      } else if (strcmp(type, "memory") == 0) {
        String *v3 = var->items[2];
        if (has_prefix(v3, "sizeof(")) {
          builder_append_c(retr, "retrieve__fixed_memory((uint8_t *)"); builder_append_str(retr, vname); builder_append_c(retr, ", "); builder_append_str(retr, v3); builder_append_c(retr, ");\n");
        } else {
          builder_append_str(retr, v3); builder_append_c(retr, " = retrieve__memory((uint8_t **)&"); builder_append_str(retr, vname); builder_append_c(retr, ");\n");
        }
      } else {
        builder_append_c(retr, "retrieve__"); builder_append_c(retr, type); builder_append_c(retr, "(&"); builder_append_str(retr, vname); builder_append_c(retr, ");\n");
      }
    }
    // print_variables closure ---------------------------------------------
    Builder *prnt = builder_new();
    for (int i = 0; i < g_info_records.count; i++) {
      StringList *var = g_info_records.items[i];
      const char *type = var->items[0]->data;
      String *vname = var->items[1];
      builder_append_c(prnt, print_indent);
      if (strcmp(type, "pointer") == 0) {
        builder_append_c(prnt, "print__pointer("); builder_append_str(prnt, vname); builder_append_c(prnt, ");\n");
      } else if (strcmp(type, "int_array") == 0) {
        builder_append_c(prnt, "print__int_array("); builder_append_str(prnt, vname); builder_append_c(prnt, ", "); builder_append_str(prnt, var->items[2]); builder_append_c(prnt, ");\n");
      } else if (strcmp(type, "memory") == 0) {
        builder_append_c(prnt, "print__memory("); builder_append_str(prnt, vname); builder_append_c(prnt, ", "); builder_append_str(prnt, var->items[2]); builder_append_c(prnt, ");\n");
      } else {
        builder_append_c(prnt, "print__"); builder_append_c(prnt, type); builder_append_c(prnt, "("); builder_append_str(prnt, vname); builder_append_c(prnt, ");\n");
      }
    }
    int info_empty = (g_info_records.count == 0);
    if (g_event_kind == EK_EVENT) {
      builder_append_c(buf, "    end__record();\n  }\n} else {\n  replay__event(\"");
      builder_append_str(buf, g_event_name);
      builder_append_c(buf, "\");\n");
      builder_append_str(buf, builder_to_string(retr));
      if (!info_empty) {
        builder_append_c(buf, "  report__event(\"");
        builder_append_str(buf, g_event_name);
        builder_append_c(buf, "\");\n");
        builder_append_str(buf, builder_to_string(prnt));
        builder_append_c(buf, "  end__report();\n");
      }
    } else if (g_data_records.count > 0) {
      builder_append_c(buf, "  }\n} else {\n");
      builder_append_c(buf, "  if (replay__action(\"");
      builder_append_str(buf, g_event_name);
      builder_append_c(buf, "\")) {\n");
      builder_append_str(buf, builder_to_string(retr));
      builder_append_c(buf, "  } else {\n");
      StringList *var = g_data_records.items[0];
      const char *type = var->items[0]->data;
      String *vname = var->items[1];
      String *dflt = (strcmp(type, "pointer") == 0) ? string_from_c("SAMPLE_POINTER") : var->items[2];
      builder_append_c(buf, "    ");
      builder_append_str(buf, vname);
      builder_append_c(buf, " = ");
      builder_append_str(buf, dflt);
      builder_append_c(buf, ";\n  }\n");
      if (!info_empty) {
        builder_append_c(buf, "  report__event(\"");
        builder_append_str(buf, g_event_name);
        builder_append_c(buf, "\");\n");
        builder_append_str(buf, builder_to_string(prnt));
        builder_append_c(buf, "  end__report();\n");
      }
    }
    builder_append_char(buf, '}');
    return builder_to_string(buf);
  }
  #undef NAME_IS
  return empty_string();
}

// substitute $1 / $* / $+ / $<digit> in a textual macro replacement
static String *substitute_arguments(const char *replacement, StringList *args) {
  String *rep = string_from_c(replacement);
  Builder *out = builder_new();
  long m = rep->length;
  long j = 1;   // 1-based cursor
  long r = 1;   // start of verbatim run
  while (j <= m) {
    if (char_at(rep, j) == '$') {
      builder_append_str(out, range_of(rep, r, j - 1));
      j++;
      int var_no = char_at(rep, j);
      if (var_no == '*') {
        for (int k = 0; k < args->count; k++) { if (k) builder_append_c(out, ", "); builder_append_str(out, args->items[k]); }
      } else if (var_no == '+') {
        for (int k = 1; k < args->count; k++) { if (k > 1) builder_append_c(out, ", "); builder_append_str(out, args->items[k]); }
      } else {
        int idx = var_no - '0';
        if (idx >= 1 && idx <= args->count) builder_append_str(out, args->items[idx - 1]);
      }
      r = j + 1;
    }
    j++;
  }
  builder_append_str(out, range_of(rep, r, -1));
  return builder_to_string(out);
}

// The core scan. The record/replay event state is intentionally NOT reset here
// so that the recursive expansion of a macro replacement keeps the surrounding
// EVENT/DATA/END state intact (matching the persistent module variables of the
// original). The per-body reset happens in the public wrapper below.
static String *replace_macros_inner(const String *code_in) {
  String *code = push_char(code_in, '\n'); // add sentinel
  Builder *new_code = builder_new();
  int have_new_code = 0;
  long start = 1;
  int within_string = 0;
  long s = 0;         // 0 == undefined; otherwise start of identifier
  long i = 1;
  long indent = 0;
  long len = code->length;

  while (i <= len) {
    if (within_string) {
      if (char_at(code, i) == '"') { if (char_at(code, i - 1) != '\\') within_string = 0; }
      i++;
    } else {
      int chr = char_at(code, i);
      if ((chr >= 'a' && chr <= 'z') || (chr >= 'A' && chr <= 'Z') || chr == '_') {
        if (!s) s = i;
      } else if (chr >= '0' && chr <= '9') {
        /* pass (part of an identifier if one is open) */
      } else if (chr == '"') {
        s = 0;
        if (char_at(code, i - 1) != '\\') within_string = 1;
      } else {
        if (s) {
          if (chr == ':' && char_at(code, i + 1) == ':') {
            i++;
          } else {
            String *identifier = range_of(code, s, i - 1);
            const char *str_rep = find_string_macro(identifier);
            int is_fn = is_function_macro(identifier);
            if (str_rep || is_fn) {
              builder_append_str(new_code, range_of(code, start, s - 1));
              have_new_code = (new_code->length > 0) || have_new_code;
              String *replacement = NULL;
              if (chr == '(') {
                StringList *arguments = slist_new();
                i++;
                long a = i;
                int level = 1;
                while (i <= len) {
                  int c = char_at(code, i);
                  if (c == ',') {
                    if (level == 1) { slist_push(arguments, trim(range_of(code, a, i - 1))); a = i + 1; }
                  } else if (c == '(') {
                    level++;
                  } else if (c == ')') {
                    level--;
                    if (level == 0) { slist_push(arguments, trim(range_of(code, a, i - 1))); i++; break; }
                  }
                  i++;
                }
                if (str_rep) replacement = substitute_arguments(str_rep, arguments);
                else replacement = call_function_macro(identifier, arguments);
              } else {
                if (str_rep) replacement = string_from_c(str_rep);
                else replacement = call_function_macro(identifier, slist_new());
              }
              if (is_empty(replacement)) {
                // trim_right &new_code
                while (new_code->length > 0 && is_ws((unsigned char)new_code->data[new_code->length - 1]))
                  new_code->length--;
                new_code->data[new_code->length] = '\0';
              } else {
                String *line_start = concat2(string_from_c("\n"), indentation(indent));
                String *expanded = replace_macros_inner(replacement);
                // replace_all '\n' -> line_start
                for (long k = 0; k < expanded->length; k++) {
                  if (expanded->data[k] == '\n') builder_append_str(new_code, line_start);
                  else builder_append_char(new_code, (unsigned char)expanded->data[k]);
                }
              }
              have_new_code = 1;
              start = i;
            } else {
              if (contains_char(identifier, ':')) {
                String *mangled = mangle(identifier);
                builder_append_str(new_code, range_of(code, start, s - 1));
                builder_append_str(new_code, mangled);
                have_new_code = 1;
                start = i;
              }
            }
            // Note: `s` is reset ONLY here (in the non-"::" branch); a "::" keeps
            // the current identifier open so that qualified names accumulate.
            s = 0;
          }
        }
      }
      // newline / indent tracking (or plain advance)
      if (char_at(code, i) == '\n' && i < len) {
        indent = 0;
        for (;;) {
          i++;
          int c = char_at(code, i);
          if (c == ' ') { indent++; }
          else if (c == '\t') { indent += 8; }
          else break;
        }
      } else {
        i++;
      }
    }
  }

  if (have_new_code) {
    builder_append_str(new_code, range_of(code, start, -2));
    return builder_to_string(new_code);
  }
  return range_of(code, 1, -2);
}

// Public entry point: reset the per-body event state, then run the scan.
static String *replace_macros(const String *code_in) {
  g_event_name = NULL;
  g_event_kind = EK_NONE;
  varrec_reset(&g_data_records);
  varrec_reset(&g_info_records);
  return replace_macros_inner(code_in);
}

//======================================================================
// define_* : building the symbol tables (port of create_linker_tables.sim)
//======================================================================

static String *var_name(const String *name) { return concat2(string_from_c("var_"), (String*)name); }

// insertion-order set of namespace strings
static void define_namespace(Tables *t, const char *ns) {
  for (int i = 0; i < t->defined_namespaces->count; i++)
    if (strcmp(t->defined_namespaces->items[i]->data, ns) == 0) return;
  slist_push(t->defined_namespaces, string_from_c(ns));
}

// key-order set of include filenames (kept sorted on insert)
static void add_include_file(Tables *t, const String *filename) {
  for (int i = 0; i < t->include_files->count; i++)
    if (strcmp(t->include_files->items[i]->data, filename->data) == 0) return;
  int pos = t->include_files->count;
  for (int i = 0; i < t->include_files->count; i++)
    if (strcmp(t->include_files->items[i]->data, filename->data) > 0) { pos = i; break; }
  slist_push(t->include_files, NULL);
  for (int i = t->include_files->count - 1; i > pos; i--)
    t->include_files->items[i] = t->include_files->items[i - 1];
  t->include_files->items[pos] = string_of_bytes(filename->data, filename->length);
}

static Variable *get_or_define_variable(Tables *t, String *name, FieldObjectType proto_type) {
  Variable *v = vlist_find(t->variables, name);
  if (v) return v;
  v = new_variable_prototype();
  v->fullname = name;
  v->type = proto_type;
  v->id = var_name(name);
  vlist_push(t->variables, v);
  return v;
}

// add_variable for the (never-redefinition) builtins case.
static void add_variable(Tables *t, String *name, Variable *newv) {
  newv->fullname = name;
  newv->id = var_name(name);
  Variable *cur = vlist_find(t->variables, name);
  if (!cur) { vlist_push(t->variables, newv); return; }
  // merge: keep the already-collected attributes & internal methods
  newv->attributes = cur->attributes;
  newv->internal_methods = cur->internal_methods;
  FieldObjectType nt = newv->type, ct = cur->type;
  int do_update = 0;
  if (nt == FOT_POLYMORPHIC) {
    if (ct == FOT_UNKNOWN || ct == FOT_UNKNOWN_POLYMORPHIC) do_update = 1;
    else { fprintf(stderr, "error: redefine %s\n", name->data); exit(1); }
  } else {
    if (ct == FOT_UNKNOWN) do_update = 1;
    else if (ct == FOT_UNKNOWN_POLYMORPHIC) { fprintf(stderr, "error: %s not polymorphic\n", name->data); exit(1); }
    else { fprintf(stderr, "error: redefine %s\n", name->data); exit(1); }
  }
  if (do_update) *cur = *newv;
}

static String *define_constant(Tables *t, Constant *c) {
  Constant *existing = clist_find(t->constants, c->key);
  if (existing) return existing->id;
  clist_push(t->constants, c);
  return c->id;
}

// value is either an already-defined string (returned verbatim) or a constant.
static String *get_id(Tables *t, void *value, int is_string, String *sval, Constant *cval) {
  (void)value;
  if (is_string) return sval;
  return define_constant(t, cval);
}

static void define_declaration(Tables *t, String *decl) { slist_push(t->declarations, decl); }
static void define_local_function_declaration(Tables *t, String *d) { slist_push(t->local_function_declarations, d); }
static void define_function_declaration(Tables *t, String *d) { slist_push(t->function_declarations, d); }
static void define_code(Tables *t, String *code) { slist_push(t->code_sections, normalize_code(code)); }

static void define_c_function(Tables *t, String *name, String *code, String *result_type) {
  String *rtn = type_and_name(result_type, name);
  String *declaration = concat2(rtn, extract_declaration(code));
  String *definition = concat2(concat2(rtn, string_from_c("\n")), code);
  String *decl_line = concat2(declaration, string_from_c(";\n"));
  if (has_prefix(declaration, "static ")) define_local_function_declaration(t, decl_line);
  else define_function_declaration(t, decl_line);
  define_code(t, definition);
}

static Constant *make_body(String *mangled_name, long param_count, String *code) {
  Constant *c = xmalloc(sizeof(Constant));
  c->kind = CONST_BODY;
  c->name = mangled_name;
  c->param_count = param_count;
  c->code = code;
  c->uname = NULL;
  c->key = concat2(string_from_c("func__"), mangled_name);
  c->id = c->key;
  return c;
}
static Constant *make_unique(String *mangled_name) {
  Constant *c = xmalloc(sizeof(Constant));
  c->kind = CONST_UNIQUE;
  c->name = mangled_name;
  c->uname = mangled_name;
  c->param_count = 0;
  c->code = NULL;
  // key_of(unique_item) = "unique__" + name_of ; but name_of here is the mangled
  // name ("std__NAME"); key uses name_of(self).
  c->key = concat2(string_from_c("unique__"), mangled_name);
  c->id = c->key;
  return c;
}

static void define_type(Tables *t, String *name, String *parent, PairList *fields, int is_public) {
  Variable *v = new_variable_prototype();
  v->type = FOT_TYPE;
  v->parent = parent;
  v->fields = fields;
  v->is_public = is_public;
  add_variable(t, name, v);
}
static void define_internal_method(Tables *t, String *object_name, String *method_id, String *function_name) {
  Variable *v = get_or_define_variable(t, object_name, FOT_UNKNOWN);
  plist_set(v->internal_methods, method_id, function_name);
}
static void define_internal_type_function(Tables *t, String *object_name, String *code) {
  Variable *v = get_or_define_variable(t, object_name, FOT_UNKNOWN);
  v->type_function = code;
}
static void define_method_value(Tables *t, String *object_name, String *attribute_name,
                                 int is_string, String *sval, Constant *cval, int is_attribute_value) {
  Variable *v = get_or_define_variable(t, object_name, FOT_UNKNOWN);
  Variable *attr = get_or_define_variable(t, attribute_name, FOT_UNKNOWN_POLYMORPHIC);
  String *method_id = concat2(string_from_c("var"), range_of(attr->id, 4, -1));
  String *attribute_id = concat2(string_from_c("-"), method_id);
  if (plist_find(v->attributes, method_id) || plist_find(v->attributes, attribute_id)) {
    fprintf(stderr, "error: polymorphic function %s for %s defined twice\n",
            attribute_name->data, object_name->data);
    exit(1);
  }
  String *id = is_attribute_value ? attribute_id : method_id;
  plist_set(v->attributes, id, get_id(t, NULL, is_string, sval, cval));
}
static void define_object(Tables *t, String *name, String *typename, String *arguments, int is_public) {
  Variable *v = new_variable_prototype();
  v->type = FOT_OBJECT;
  v->parent = typename;
  v->arguments = arguments;
  v->is_public = is_public;
  add_variable(t, name, v);
}
static void define_polymorphic_function(Tables *t, String *name, int with_setter) {
  Variable *v = new_variable_prototype();
  v->type = FOT_POLYMORPHIC;
  v->has_a_setter = with_setter;
  add_variable(t, name, v);
}
static void define_variable_body(Tables *t, String *name, Constant *initial) {
  String *id = define_constant(t, initial);
  Variable *v = new_variable_prototype();
  v->type = FOT_INITIALIZED;
  v->initial_value = id;
  v->level = 1;
  add_variable(t, name, v);
}

//======================================================================
// fragment cutter (port of cut_into_fragments)
//======================================================================

typedef struct { long line_no; String *text; } Fragment;
typedef struct { Fragment *items; int count; int cap; } FragmentList;

static FragmentList *cut_into_fragments(const String *helpers) {
  FragmentList *frags = xmalloc(sizeof(FragmentList));
  frags->cap = 64; frags->count = 0; frags->items = xmalloc(sizeof(Fragment) * frags->cap);
  long start_idx = 1, start_no = 1, no = 1;
  long n = helpers->length;
  for (long idx = 1; idx <= n; idx++) {
    int chr = char_at(helpers, idx);
    if (chr == '\n') {
      no++;
      if (idx == n || (char_at(helpers, idx + 1) > ' ' && char_at(helpers, idx + 1) != '}')) {
        long end_idx = idx;
        while (end_idx > 1 && char_at(helpers, end_idx - 1) == '\n') end_idx--;
        if (end_idx > start_idx) {
          if (frags->count == frags->cap) { frags->cap *= 2; frags->items = realloc(frags->items, sizeof(Fragment) * frags->cap); }
          frags->items[frags->count].line_no = start_no;
          frags->items[frags->count].text = range_of(helpers, start_idx, end_idx);
          frags->count++;
        }
        start_no = no;
        start_idx = idx + 1;
      }
    }
  }
  return frags;
}

//======================================================================
// field parsing (parse_fields from builtins.sim)
//======================================================================

static PairList *parse_fields(const String *fragment_text) {
  PairList *fields = plist_new();
  String *text = behind_char(fragment_text, '\n');
  text = skip_remark(text);
  StringList *lines = lines_of(text);
  for (int li = 0; li < lines->count; li++) {
    String *line = truncate_from_char(lines->items[li], '#');
    line = trim(line);
    if (is_empty(line)) continue;
    long i = line->length;
    if (has_suffix(line, "[]")) i -= 2;
    while (i - 1 >= 1 && is_identifier_char(char_at(line, i - 1))) i--;
    String *field_type = trim_right(range_of(line, 1, i - 1));
    String *field_name = range_of(line, i, -1);
    plist_push(fields, field_name, field_type);
  }
  return fields;
}

//======================================================================
// extract_code_and_parameter_count
//======================================================================

static String *extract_code(const String *fragment_text, long *param_count_out) {
  String *code = skip_remark(behind_char(fragment_text, '\n'));
  String *start = trim(behind_char(code, '{'));
  long pc = -1;
  if (has_prefix(start, "CHECK_ARGUMENTS(")) {
    String *inner = between_needles(start, need_char('('), need_char(')'), 1);
    pc = to_integer(inner);
  }
  *param_count_out = pc;
  return replace_macros(code);
}

//======================================================================
// create_declaration  (RECORD / UNION struct typedef text)
//======================================================================

static String *create_declaration(const String *name, PairList *fields) {
  Builder *b = builder_new();
  builder_append_c(b, "typedef struct {\n");
  for (int i = 0; i < fields->count; i++) {
    String *field_name = fields->items[i].key;
    String *field_type = fields->items[i].value;
    builder_append_c(b, "  ");
    builder_append_str(b, type_and_name(field_type, field_name));
    builder_append_c(b, ";\n");
  }
  builder_append_c(b, "} ");
  builder_append_str(b, (String *)name);
  builder_append_c(b, ";\n");
  return builder_to_string(b);
}

//======================================================================
// create_collector  (the  X___collect / collect_x  functions)
//======================================================================

static void collector_copy_fields(Builder *b, const char *kind, PairList *fields, const char *indent) {
  for (int i = 0; i < fields->count; i++) {
    String *fname = fields->items[i].key;
    String *ftype = fields->items[i].value;
    if (has_suffix(fname, "[]")) {
      if (strcmp(ftype->data, "NODE *") != 0) {
        String *base = range_of(fname, 1, -3);
        const char *src_prefix;
        String *src;
        if (strcmp(base->data, "size") == 0 || strcmp(base->data, "length") == 0) {
          src = string_from_c("size"); (void)src_prefix;
        } else {
          Builder *sb = builder_new();
          builder_append_c(sb, kind); builder_append_c(sb, "->"); builder_append_str(sb, base);
          src = builder_to_string(sb);
        }
        builder_append_c(b, indent);
        builder_append_c(b, "memcpy(new_"); builder_append_c(b, kind); builder_append_c(b, "->");
        builder_append_str(b, base); builder_append_c(b, ", "); builder_append_str(b, src);
        builder_append_c(b, ", size*sizeof("); builder_append_str(b, ftype); builder_append_c(b, "));\n");
      }
    } else {
      int is_ptr = char_at(ftype, -1) == '*' && strcmp(ftype->data, "void *") != 0 && !has_prefix(ftype, "const ");
      if (is_ptr) {
        /* pass */
      } else if (strcmp(fname->data, "size") == 0 || strcmp(fname->data, "length") == 0) {
        builder_append_c(b, indent);
        builder_append_c(b, "new_"); builder_append_c(b, kind); builder_append_c(b, "->");
        builder_append_str(b, fname); builder_append_c(b, " = size;\n");
      } else {
        builder_append_c(b, indent);
        builder_append_c(b, "new_"); builder_append_c(b, kind); builder_append_c(b, "->");
        builder_append_str(b, fname); builder_append_c(b, " = "); builder_append_c(b, kind);
        builder_append_c(b, "->"); builder_append_str(b, fname); builder_append_c(b, ";\n");
      }
    }
  }
}

static void collector_collect_fields(Builder *b, const char *kind, PairList *fields) {
  for (int i = 0; i < fields->count; i++) {
    String *fname = fields->items[i].key;
    String *ftype = fields->items[i].value;
    if (has_suffix(fname, "[]")) {
      if (strcmp(ftype->data, "NODE *") == 0) {
        String *base = range_of(fname, 1, -3);
        builder_append_c(b, "    int i;\n");
        builder_append_c(b, "    for (i = 0; i < size; ++i) {\n");
        builder_append_c(b, "      new_"); builder_append_c(b, kind); builder_append_c(b, "->");
        builder_append_str(b, base); builder_append_c(b, "[i] = collect_node("); builder_append_c(b, kind);
        builder_append_c(b, "->"); builder_append_str(b, base); builder_append_c(b, "[i]);\n");
        builder_append_c(b, "    }\n");
      }
    } else {
      int is_ptr = char_at(ftype, -1) == '*' && strcmp(ftype->data, "void *") != 0 &&
                   !has_prefix(ftype, "const ") && !has_prefix(ftype, "struct ");
      if (is_ptr) {
        String *coll = to_lower_case(truncate_from_char(ftype, ' '));
        builder_append_c(b, "    new_"); builder_append_c(b, kind); builder_append_c(b, "->");
        builder_append_str(b, fname); builder_append_c(b, " = collect_"); builder_append_str(b, coll);
        builder_append_c(b, "("); builder_append_c(b, kind); builder_append_c(b, "->");
        builder_append_str(b, fname); builder_append_c(b, ");\n");
      }
    }
  }
}

static String *create_collector(const char *kind, const String *type, PairList *fields) {
  int contains_size = 0, contains_length = 0;
  int last_array = -1;
  for (int i = 0; i < fields->count; i++) {
    if (strcmp(fields->items[i].key->data, "size") == 0) contains_size = 1;
    if (strcmp(fields->items[i].key->data, "length") == 0) contains_length = 1;
    if (has_suffix(fields->items[i].key, "[]")) last_array = i;
  }
  String *item_type = (last_array >= 0) ? fields->items[last_array].value : NULL;
  String *array_size = NULL;
  if (contains_length) array_size = string_from_c("length");
  else if (contains_size) array_size = string_from_c("size");
  else if (item_type) {
    String *singular = without_suffix_c(range_of(fields->items[last_array].key, 1, -3), "s");
    array_size = concat2(singular, string_from_c("_count"));
  }
  int is_node = strcmp(kind, "node") == 0;

  Builder *b = builder_new();
  builder_append_c(b, "  (\n    ");
  builder_append_str(b, (String *)type);
  builder_append_c(b, " *"); builder_append_c(b, kind);
  builder_append_c(b, "\n  )\n  {\n");

  if (contains_size || contains_length) {
    builder_append_c(b, "    if (!"); builder_append_c(b, kind); builder_append_c(b, ") return ");
    builder_append_c(b, kind); builder_append_c(b, ";\n");
  }
  if (is_node) {
    builder_append_c(b, "    "); builder_append_str(b, (String *)type); builder_append_c(b, " *new_node;\n");
  } else {
    builder_append_c(b, "    "); builder_append_str(b, (String *)type);
    builder_append_c(b, " *new_"); builder_append_c(b, kind); builder_append_c(b, " = "); builder_append_c(b, kind); builder_append_c(b, ";\n");
  }
  if (array_size) {
    builder_append_c(b, "    long size = "); builder_append_c(b, kind); builder_append_c(b, "->");
    builder_append_str(b, array_size); builder_append_c(b, "; // might be garbage if already collected\n");
  }
  if (is_node) {
    builder_append_c(b, "    new_node = allocate(sizeof("); builder_append_str(b, (String *)type); builder_append_c(b, "));\n");
    builder_append_c(b, "    new_node->type = node->type;\n");
    builder_append_c(b, "    *(void **)node = ENCODE_ADDRESS(new_node);\n");
    builder_append_c(b, "    new_node->attributes = collect_attributes(node->attributes);\n");
    collector_copy_fields(b, kind, fields, "    ");
  } else {
    builder_append_c(b, "    int is_collected = IS_COLLECTED("); builder_append_c(b, kind); builder_append_c(b, ");\n");
    builder_append_c(b, "    if (is_collected) {\n");
    builder_append_c(b, "      void *new_location = *(void **)"); builder_append_c(b, kind); builder_append_c(b, ";\n");
    builder_append_c(b, "      if (IS_AN_INVALID_LENGTH(new_location)) {\n");
    builder_append_c(b, "        return DECODE_FROM_LENGTH(new_location);\n");
    builder_append_c(b, "      }\n");
    if (array_size) {
      if (item_type) {
        builder_append_c(b, "      new_"); builder_append_c(b, kind);
        builder_append_c(b, " = allocate(ALLOCATION_SIZE(sizeof("); builder_append_str(b, (String *)type);
        builder_append_c(b, ")+size*sizeof("); builder_append_str(b, item_type); builder_append_c(b, ")));\n");
      }
      /* else: only for <list>, nothing */
    } else {
      builder_append_c(b, "      new_"); builder_append_c(b, kind);
      builder_append_c(b, " = allocate(sizeof("); builder_append_str(b, (String *)type); builder_append_c(b, "));\n");
    }
    collector_copy_fields(b, kind, fields, "      ");
    if (contains_size || contains_length) {
      builder_append_c(b, "    } else {\n");
      builder_append_c(b, "      if (!IS_STATIC("); builder_append_c(b, kind); builder_append_c(b, ")) {\n");
      builder_append_c(b, "        if (IS_ALREADY_MARKED("); builder_append_c(b, kind); builder_append_c(b, ")) return "); builder_append_c(b, kind); builder_append_c(b, ";\n");
      builder_append_c(b, "        MARK("); builder_append_c(b, kind); builder_append_c(b, ")\n");
      builder_append_c(b, "      }\n");
      builder_append_c(b, "    }\n");
    } else {
      builder_append_c(b, "    }\n");
    }
  }
  collector_collect_fields(b, kind, fields);
  if (!is_node) {
    builder_append_c(b, "    if (is_collected) *(void **)"); builder_append_c(b, kind);
    builder_append_c(b, " = ENCODE_TO_LENGTH(new_"); builder_append_c(b, kind); builder_append_c(b, ");\n");
  }
  builder_append_c(b, "    return new_"); builder_append_c(b, kind); builder_append_c(b, ";\n  }");
  return builder_to_string(b);
}

//======================================================================
// parsing context (builtin_function_names accumulation)
//======================================================================

typedef struct {
  long builtin_function_count;
  Builder *builtin_function_names;
} ParseContext;

static void bfn_add(ParseContext *ctx, const char *inner) {
  builder_append_c(ctx->builtin_function_names, "  {");
  builder_append_c(ctx->builtin_function_names, inner);
  builder_append_c(ctx->builtin_function_names, "},\n");
  ctx->builtin_function_count++;
}

//======================================================================
// needle helpers used by the parser
//======================================================================

static Needle WS(void)           { return need_set(" \t\n\r"); }
static Needle ALT_SP_STAR(void)  { return need_set(" *"); }
static Needle ALT_WS_STAR(void)  { return need_set(" \t\n\r*"); }

// mangle that tolerates a NULL (undefined) argument
static String *mangle_opt(String *name) { return name ? mangle(name) : NULL; }

//======================================================================
// process one template fragment
//======================================================================

static void process_fragment(Tables *t, ParseContext *ctx, const String *text) {
  String *head = truncate_from_char(text, '\n');
  int is_public = has_prefix(head, "PUBLIC ");
  if (is_public) head = behind_char(head, ' ');

  // dispatch on the leading keyword
  if (char_at(head, 1) == '#') return; // remark

  #define KW(word) (has_prefix(head, word))
  #define KW_WS(word) (has_prefix(head, word) && \
    (is_ws(char_at(head, (long)strlen(word) + 1)) || char_at(head, (long)strlen(word) + 1) == 0))

  if (KW("INCLUDE")) {
    String *h = behind_needle(head, WS(), 1);
    String *filename = trim(h);
    add_include_file(t, filename);
    return;
  }
  if (KW_WS("TYPE")) {
    String *h = behind_needle(head, WS(), 1);
    String *typename = trim(truncate_from_str(h, "->"));
    String *parent_name = contains_c(h, "->") ? trim(behind_str(h, "->")) : NULL;
    PairList *fields = parse_fields(text);
    define_type(t, mangle(typename), mangle_opt(parent_name), fields, is_public);
    if (parent_name == NULL || fields->count > 0) {
      String *type;
      if (parent_name == NULL && fields->count == 0) type = string_from_c("SIMPLE_NODE");
      else type = to_upper_case(truncate_until_str(typename, "::"));
      String *code = create_collector("node", type, fields);
      String *fname = concat2(mangle(typename), string_from_c("___collect"));
      define_c_function(t, fname, code, string_from_c("static void *"));
      define_internal_method(t, mangle(typename), string_from_c("_collect"), fname);
    }
    return;
  }
  if (KW_WS("RECORD")) {
    String *h = behind_needle(head, WS(), 1);
    String *name = trim(h);
    PairList *fields = parse_fields(text);
    String *declaration = create_declaration(name, fields);
    define_declaration(t, declaration);
    const char *kind = to_lower_case(behind_needle(name, need_char('_'), -1))->data;
    String *code = create_collector(kind, name, fields);
    String *fname = concat2(string_from_c("collect_"), to_lower_case(name));
    define_c_function(t, fname, code, string_from_c("static void *"));
    return;
  }
  if (KW_WS("UNION")) {
    String *h = behind_needle(head, WS(), 1);
    String *name = trim(before_char(h, '/'));
    String *variant = trim(behind_char(h, '/'));
    PairList *fields = parse_fields(text);
    // find or create union entry (insertion order)
    UnionEntry *ue = NULL;
    for (int i = 0; i < t->unions->count; i++)
      if (strcmp(t->unions->items[i].name->data, name->data) == 0) { ue = &t->unions->items[i]; break; }
    if (!ue) {
      if (t->unions->count == t->unions->cap) { t->unions->cap *= 2; t->unions->items = realloc(t->unions->items, sizeof(UnionEntry) * t->unions->cap); }
      ue = &t->unions->items[t->unions->count++];
      ue->name = name;
      ue->variants = xmalloc(sizeof(UnionVariantList));
      ue->variants->cap = 4; ue->variants->count = 0;
      ue->variants->items = xmalloc(sizeof(UnionVariant) * ue->variants->cap);
    }
    if (ue->variants->count == ue->variants->cap) { ue->variants->cap *= 2; ue->variants->items = realloc(ue->variants->items, sizeof(UnionVariant) * ue->variants->cap); }
    ue->variants->items[ue->variants->count].variant_name = variant;
    ue->variants->items[ue->variants->count].fields = fields;
    ue->variants->count++;
    return;
  }
  if (KW_WS("ATTRIBUTE")) {
    String *h = behind_needle(head, WS(), 1);
    String *object_name = before_char(h, '.');
    String *attribute_name = behind_char(h, '.');
    String *qualified;
    if (contains_c(attribute_name, "::")) qualified = mangle(attribute_name);
    else qualified = concat2(string_from_c("std__"), attribute_name);
    (void)qualified;
    // define_attribute -> define_method value = "-var_std_types__undefined" (string)
    define_method_value(t, mangle(object_name), qualified, 1,
                        string_from_c("-var_std_types__undefined"), NULL, 1);
    return;
  }
  if (KW_WS("METHOD")) {
    String *h = behind_needle(head, WS(), 1);
    String *type = trim(until_needle(h, ALT_SP_STAR(), -1));
    String *result_type = (!is_empty(type)) ? concat2(string_from_c("static "), type) : string_from_c("static void");
    String *name = truncate_until_needle(h, ALT_SP_STAR(), -1);
    String *object_name = truncate_until_needle(before_char(h, '/'), ALT_SP_STAR(), -1);
    String *method_part = behind_char(h, '/');
    String *method_name = truncate_from_needle(method_part, need_char(' '), -1);
    String *function_name = behind_needle(method_part, need_char(' '), -1);
    String *code = NULL; long parameter_count = -1;
    if (is_empty(function_name)) code = extract_code(text, &parameter_count);

    if (char_at(method_name, 1) == '_') {
      if (strcmp(method_name->data, "_type") == 0) {
        String *mangled = mangle(object_name);
        Builder *bb = builder_new();
        builder_append_str(bb, mangled); builder_append_c(bb, "___type, \"");
        builder_append_str(bb, name); builder_append_c(bb, "\"");
        bfn_add(ctx, bb->data);
        define_internal_type_function(t, mangled, code);
      } else {
        if (is_empty(function_name))
          function_name = concat2(concat2(mangle(object_name), string_from_c("__")), mangle(method_name));
        if (code) define_c_function(t, function_name, code, result_type);
        define_internal_method(t, mangle(object_name), mangle(method_name), function_name);
      }
    } else {
      String *qualified;
      if (contains_c(method_name, "::")) qualified = mangle(method_name);
      else qualified = concat2(string_from_c("std__"), method_name);
      String *mangled_name = concat2(concat2(mangle(object_name), string_from_c("__")), qualified);
      Builder *bb = builder_new();
      builder_append_c(bb, "entry__"); builder_append_str(bb, mangled_name);
      builder_append_c(bb, ", \""); builder_append_str(bb, name); builder_append_c(bb, "\"");
      bfn_add(ctx, bb->data);
      Constant *body = make_body(mangled_name, parameter_count, code);
      define_method_value(t, mangle(object_name), qualified, 0, NULL, body, 0);
    }
    return;
  }
  if (KW_WS("FUNCTION")) {
    String *h = behind_needle(head, WS(), 1);
    String *name = truncate_until_needle(h, ALT_WS_STAR(), -1);
    long parameter_count = -1;
    String *code = extract_code(text, &parameter_count);
    if (contains_char(h, ' ') || contains_char(h, '\t')) {
      String *result_type = trim_right(until_needle(h, ALT_WS_STAR(), -1));
      define_c_function(t, name, code, result_type);
    } else {
      String *mangled_name = mangle(name);
      Builder *bb = builder_new();
      builder_append_c(bb, "entry__"); builder_append_str(bb, mangled_name);
      builder_append_c(bb, ", \""); builder_append_str(bb, name); builder_append_c(bb, "\"");
      bfn_add(ctx, bb->data);
      Constant *body = make_body(mangled_name, parameter_count, code);
      define_variable_body(t, mangled_name, body);
    }
    return;
  }
  if (KW_WS("OBJECT")) {
    String *h = behind_needle(head, WS(), 1);
    String *object_name = trim(truncate_from_str(h, "->"));
    String *typename = trim(behind_str(h, "->"));
    String *body = trim(skip_remark(behind_char(text, '\n')));
    static const RRule obj_rules[2] = {
      { { {0,","}, {1,NULL} }, 2, ", " },
      { { {0,"::"}          }, 1, "__" },
    };
    String *arguments = replace_all(body, obj_rules, 2);
    define_object(t, mangle(object_name), mangle(typename), arguments, is_public);
    return;
  }
  if (KW("UNIQUE")) {
    String *h = behind_needle(head, WS(), 1);
    String *name = trim(h);
    String *mangled_name = concat2(string_from_c("std__"), name);
    Constant *u = make_unique(mangled_name);
    define_variable_body(t, mangled_name, u);
    return;
  }
  if (KW("ATTR")) {
    String *h = behind_needle(head, WS(), 1);
    String *name = trim(h);
    define_polymorphic_function(t, mangle(name), 1);
    return;
  }
  if (KW("POLY")) {
    String *h = behind_needle(head, WS(), 1);
    String *name = trim(h);
    define_polymorphic_function(t, mangle(name), 0);
    return;
  }
  if (KW_WS("CODE")) {
    String *code = skip_remark(behind_char(text, '\n'));
    define_code(t, replace_macros(code));
    return;
  }
  if (KW_WS("DATA")) {
    String *declaration = skip_remark(behind_char(text, '\n'));
    String *data_type = trim(between_needles(declaration, need_char('}'), need_char(';'), 1));
    String *field_lines = trim(between_needles(declaration, need_char('{'), need_char('}'), 1));
    PairList *fields = plist_new();
    StringList *lines = lines_of(field_lines);
    for (int li = 0; li < lines->count; li++) {
      String *line = trim(lines->items[li]);
      line = truncate_from_char(line, ';');
      String *field_type = trim(until_needle(line, ALT_SP_STAR(), -1));
      String *field_name = behind_needle(line, ALT_SP_STAR(), -1);
      plist_push(fields, field_name, field_type);
    }
    const char *kind = to_lower_case(behind_needle(data_type, need_char('_'), -1))->data;
    String *code = create_collector(kind, data_type, fields);
    // prepend the function signature line
    Builder *sig = builder_new();
    builder_append_c(sig, "static "); builder_append_str(sig, data_type);
    builder_append_c(sig, " *collect_"); builder_append_str(sig, to_lower_case(data_type));
    builder_append_c(sig, "\n");
    code = concat2(builder_to_string(sig), code);
    define_code(t, code);
    define_declaration(t, declaration);
    return;
  }

  fprintf(stderr, "unparsed fragment head: %.*s\n",
          (int)(head->length > 60 ? 60 : head->length), head->data);
  #undef KW
  #undef KW_WS
}

//======================================================================
// VTABLE processing (internal methods + wrappers) from common.h
//======================================================================

static String *g_funky_internal_methods; // FIM enum text
static String *g_internal_method_names;   // name table text

static void build_internal_methods(Tables *t, const String *common_h) {
  String *buf = between_needles(common_h, need_string("typedef struct VTABLE {\n"), need_char('}'), 1);
  Builder *fim = builder_new();
  Builder *names = builder_new();
  StringList *lines = lines_of(buf);
  for (int li = 0; li < lines->count; li++) {
    String *line = lines->items[li];
    if (is_empty(trim(line))) continue;
    int is_a_function = contains_c(line, "(*");
    String *name;
    if (is_a_function) {
      name = between_needles(line, need_string("(*"), need_char(')'), 1);
    } else {
      name = before_char(behind_needle(line, ALT_SP_STAR(), -1), ';');
    }
    builder_append_c(fim, "  FIM_"); builder_append_str(fim, to_upper_case(name)); builder_append_c(fim, ",\n");
    builder_append_c(names, "  \""); builder_append_str(names, name); builder_append_c(names, "\",\n");
    if (is_a_function) {
      String *parameters = between_needles(line, need_char('('), need_char(')'), -1);
      Builder *args = builder_new();
      // split parameters on ',' and take the identifier after the last space/star
      long pstart = 0;
      for (long k = 0; k <= parameters->length; k++) {
        if (k == parameters->length || parameters->data[k] == ',') {
          String *param = range_of(parameters, pstart + 1, k); // 1-based inclusive
          String *argname = behind_needle(param, ALT_SP_STAR(), -1);
          if (args->length) builder_append_c(args, ", ");
          builder_append_str(args, argname);
          pstart = k + 1;
        }
      }
      Builder *code = builder_new();
      builder_append_c(code, "  (\n    "); builder_append_str(code, parameters);
      builder_append_c(code, "\n  )\n  {\n    return node->attributes->vtable->");
      builder_append_str(code, name); builder_append_c(code, "(");
      builder_append_str(code, builder_to_string(args)); builder_append_c(code, ");\n  }");
      define_c_function(t, name, builder_to_string(code), string_from_c("int"));
    }
  }
  // finalise the two accumulated tables
  String *fim_s = builder_to_string(fim);
  fim_s = without_suffix_c(fim_s, ",\n");
  Builder *fb = builder_new();
  builder_append_c(fb, "\ntypedef enum {\n");
  builder_append_str(fb, fim_s);
  builder_append_c(fb, "\n} FUNKY_INTERNAL_METHOD;\n");
  g_funky_internal_methods = builder_to_string(fb);

  String *names_s = builder_to_string(names);
  names_s = without_suffix_c(names_s, ",\n");
  Builder *nb = builder_new();
  builder_append_c(nb, "\nconst char *internal_method_names[] = {\n");
  builder_append_str(nb, names_s);
  builder_append_c(nb, "\n};\n");
  g_internal_method_names = builder_to_string(nb);
}

//======================================================================
// create_header_and_source (port of create_linker_tables.sim)
//======================================================================

static const char *fot_name(FieldObjectType t) {
  switch (t) {
    case FOT_UNKNOWN: return "FOT_UNKNOWN";
    case FOT_UNKNOWN_POLYMORPHIC: return "FOT_UNKNOWN_POLYMORPHIC";
    case FOT_TYPE: return "FOT_TYPE";
    case FOT_OBJECT: return "FOT_OBJECT";
    case FOT_POLYMORPHIC: return "FOT_POLYMORPHIC";
    case FOT_INITIALIZED: return "FOT_INITIALIZED";
    case FOT_DERIVED: return "FOT_DERIVED";
    case FOT_UNINITIALIZED: return "FOT_UNINITIALIZED";
    default: return "FOT_UNKNOWN";
  }
}

static String *demangle_ns(const String *ns) {
  String *r = replace_first(ns, "__", "-");
  r = replace_first(r, "__", ".");
  return r;
}

// extract_namespace(fullname)
static String *extract_namespace(const String *fullname) {
  String *ns = before_str(fullname, "__");
  String *name = truncate_until_str(fullname, "__");
  if (is_empty(ns)) return ns;
  int name_has = contains_c(name, "__");
  int ns_has = 0;
  if (contains_c(ns, "__")) {
    String *b = behind_str(ns, "__");
    int c = char_at(b, 1);
    ns_has = (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
  }
  if (name_has || ns_has) return empty_string();
  return ns;
}

// constant_type / constant_size / constant_value
static const char *constant_type(Constant *c) {
  return (c->kind == CONST_BODY) ? "FLT_C_FUNCTION" : "FLT_UNIQUE";
}
static String *constant_size(Constant *c) {
  if (c->kind == CONST_BODY) { char buf[32]; snprintf(buf, sizeof(buf), "%ld", c->param_count); return string_from_c(buf); }
  return string_from_c("0");
}
static String *constant_value(Constant *c) {
  Builder *b = builder_new();
  if (c->kind == CONST_BODY) {
    builder_append_c(b, "{.func = entry__"); builder_append_str(b, c->name); builder_append_c(b, "}");
  } else {
    static const RRule r[1] = { { { {0,"__"} }, 1, "::" } };
    String *disp = replace_all(c->uname, r, 1);
    builder_append_c(b, "{.str_8 = \""); builder_append_str(b, disp); builder_append_c(b, "\"}");
  }
  return builder_to_string(b);
}

// collect the (inherited + own) fields of a type
static PairList *collect_type_fields(Tables *t, Variable *v) {
  PairList *out = plist_new();
  if (v->parent) {
    Variable *pv = vlist_find(t->variables, v->parent);
    if (pv) {
      PairList *pf = collect_type_fields(t, pv);
      for (int i = 0; i < pf->count; i++) plist_push(out, pf->items[i].key, pf->items[i].value);
    }
  }
  for (int i = 0; i < v->fields->count; i++) plist_push(out, v->fields->items[i].key, v->fields->items[i].value);
  return out;
}

static int cmp_pair_key(const void *a, const void *b) {
  const Pair *pa = a, *pb = b;
  return strcmp(pa->key->data, pb->key->data);
}

static void create_header_and_source(Tables *t, const char *module_name, ParseContext *ctx,
                                     String **header_out, String **enums_out, String **source_out) {
  Builder *declarations = builder_new();
  Builder *struct_declarations = builder_new();
  Builder *union_node = builder_new();
  Builder *local_function_declarations = builder_new();
  Builder *function_declarations = builder_new();
  Builder *object_declarations = builder_new();
  Builder *module_declarations = builder_new();
  Builder *object_forward_declarations = builder_new();
  Builder *objects = builder_new();
  Builder *helpers = builder_new();
  Builder *constants_enumeration = builder_new();
  Builder *variables_enumeration = builder_new();
  Builder *type_functions = builder_new();
  Builder *constructor_declarations = builder_new();
  Builder *constructors = builder_new();
  Builder *function_definitions = builder_new();
  Builder *methods = builder_new();
  Builder *defined_namespaces_table = builder_new();
  Builder *constants_table = builder_new();
  Builder *attributes_table = builder_new();
  Builder *variables_table = builder_new();
  Builder *module_table = builder_new();

  // --- defined namespaces --------------------------------------------------
  if (t->defined_namespaces->count) {
    builder_append_c(defined_namespaces_table, "\nstatic FUNKY_NAMESPACE defined_namespaces[] = {\n");
    for (int i = 0; i < t->defined_namespaces->count; i++) {
      builder_append_c(defined_namespaces_table, "  {\"");
      builder_append_str(defined_namespaces_table, t->defined_namespaces->items[i]);
      builder_append_c(defined_namespaces_table, "\", 1, 0},\n");
    }
    // without_suffix ",\n"
    defined_namespaces_table->length -= 2; defined_namespaces_table->data[defined_namespaces_table->length] = '\0';
    builder_append_c(defined_namespaces_table, "\n};\n");
  }

  // --- declarations / local func decls / func decls / helpers --------------
  for (int i = 0; i < t->declarations->count; i++) {
    builder_append_char(declarations, '\n');
    builder_append_str(declarations, t->declarations->items[i]);
  }
  for (int i = 0; i < t->local_function_declarations->count; i++)
    builder_append_str(local_function_declarations, t->local_function_declarations->items[i]);
  for (int i = 0; i < t->function_declarations->count; i++)
    builder_append_str(function_declarations, t->function_declarations->items[i]);
  for (int i = 0; i < t->code_sections->count; i++) {
    builder_append_char(helpers, '\n');
    builder_append_str(helpers, t->code_sections->items[i]);
  }

  // --- constants -----------------------------------------------------------
  if (t->constants->count) {
    builder_append_c(constants_enumeration, "enum {\n");
    builder_append_c(constants_table, "\nstatic FUNKY_CONSTANT constants_table[] = {\n");
    int is_first = 1;
    for (int i = 0; i < t->constants->count; i++) {
      Constant *c = t->constants->items[i];
      builder_append_c(constants_enumeration, "  ");
      builder_append_str(constants_enumeration, c->id);
      if (is_first) builder_append_c(constants_enumeration, " = 1");
      builder_append_c(constants_enumeration, ",\n");
      is_first = 0;
      if (c->kind == CONST_BODY) {
        builder_append_c(function_definitions, "\nstatic void entry__");
        builder_append_str(function_definitions, c->name);
        builder_append_c(function_definitions, " (void)\n");
        builder_append_str(function_definitions, c->code);
      }
      builder_append_c(constants_table, "  {");
      builder_append_c(constants_table, constant_type(c));
      builder_append_c(constants_table, ", ");
      builder_append_str(constants_table, constant_size(c));
      builder_append_c(constants_table, ", ");
      builder_append_str(constants_table, constant_value(c));
      builder_append_c(constants_table, "},\n");
    }
    constants_enumeration->length -= 2; constants_enumeration->data[constants_enumeration->length] = '\0';
    builder_append_c(constants_enumeration, "\n};\n");
    constants_table->length -= 2; constants_table->data[constants_table->length] = '\0';
    builder_append_c(constants_table, "\n};\n");
  }

  long var_no = 0;

  if (t->variables->count) {
    // --- union node prefix + per-type create_node --------------------------
    builder_append_c(union_node, "\ntypedef union NODE {\n  struct {\n    FUNC type;\n    ATTRIBUTES *attributes;\n  };\n  SIMPLE_NODE simple_node;\n");

    for (int vi = 0; vi < t->variables->count; vi++) {
      Variable *v = t->variables->items[vi];
      if (v->type != FOT_TYPE) continue;
      String *fullname = v->fullname;
      String *name = truncate_until_str(fullname, "__");
      String *struct_name = to_upper_case(name);
      PairList *all_fields = collect_type_fields(t, v);
      int fieldless = (all_fields->count == 0 && strcmp(fullname->data, "tabular_function") != 0);
      String *struct_type = fieldless ? string_from_c("SIMPLE_NODE") : struct_name;

      builder_append_c(object_declarations, "extern ");
      builder_append_str(object_declarations, struct_type);
      builder_append_c(object_declarations, " ");
      builder_append_str(object_declarations, fullname);
      builder_append_c(object_declarations, ";\n");

      builder_append_c(objects, "\n");
      builder_append_str(objects, struct_type);
      builder_append_c(objects, " ");
      builder_append_str(objects, fullname);
      builder_append_c(objects, " = {\n  ");
      builder_append_str(objects, fullname);
      builder_append_c(objects, "___type, NULL\n};\n");

      if (!fieldless) {
        // parameters string
        Builder *params = builder_new();
        for (int fi = 0; fi < all_fields->count; fi++) {
          if (fi) builder_append_c(params, ",\n");
          builder_append_c(params, "    ");
          builder_append_str(params, type_and_name(all_fields->items[fi].value, all_fields->items[fi].key));
        }
        String *parameters = builder_to_string(params);

        builder_append_char(constructors, '\n');
        if (v->is_public) {
          builder_append_c(function_declarations, "\nvoid *create__");
          builder_append_str(function_declarations, fullname);
          builder_append_c(function_declarations, "\n  (\n");
          builder_append_str(function_declarations, parameters);
          builder_append_c(function_declarations, "\n  );\n");
        } else {
          builder_append_c(constructor_declarations, "\nstatic void *create__");
          builder_append_str(constructor_declarations, fullname);
          builder_append_c(constructor_declarations, "\n  (\n");
          builder_append_str(constructor_declarations, parameters);
          builder_append_c(constructor_declarations, "\n  );\n");
          builder_append_c(constructors, "static ");
        }
        builder_append_c(constructors, "void *create__");
        builder_append_str(constructors, fullname);
        builder_append_c(constructors, "\n  (\n");
        builder_append_str(constructors, parameters);
        builder_append_c(constructors, "\n  )\n  {\n    ");
        builder_append_str(constructors, struct_type);
        builder_append_c(constructors, " *node = allocate(sizeof(");
        builder_append_str(constructors, struct_type);
        builder_append_c(constructors, "));\n    node->type = ");
        builder_append_str(constructors, fullname);
        builder_append_c(constructors, "___type;\n    node->attributes = ");
        builder_append_str(constructors, fullname);
        builder_append_c(constructors, ".attributes;\n");
        for (int fi = 0; fi < all_fields->count; fi++) {
          builder_append_c(constructors, "    node->");
          builder_append_str(constructors, all_fields->items[fi].key);
          builder_append_c(constructors, " = ");
          builder_append_str(constructors, all_fields->items[fi].key);
          builder_append_c(constructors, ";\n");
        }
        builder_append_c(constructors, "    return node;\n  }\n");

        builder_append_c(struct_declarations, "\ntypedef struct {\n  void *type;\n  ATTRIBUTES *attributes;\n");
        for (int fi = 0; fi < all_fields->count; fi++) {
          builder_append_c(struct_declarations, "  ");
          builder_append_str(struct_declarations, type_and_name(all_fields->items[fi].value, all_fields->items[fi].key));
          builder_append_c(struct_declarations, ";\n");
        }
        builder_append_c(struct_declarations, "} ");
        builder_append_str(struct_declarations, struct_type);
        builder_append_c(struct_declarations, ";\n");

        builder_append_c(union_node, "  ");
        builder_append_str(union_node, struct_name);
        builder_append_c(union_node, " ");
        builder_append_str(union_node, name);
        builder_append_c(union_node, ";\n");
      }
    }
    builder_append_c(union_node, "} NODE;\n");

    // --- FOT_OBJECT instances ---------------------------------------------
    for (int vi = 0; vi < t->variables->count; vi++) {
      Variable *v = t->variables->items[vi];
      if (v->type != FOT_OBJECT) continue;
      String *fullname = v->fullname;
      String *typename = v->parent;
      String *arguments = v->arguments;
      String *struct_name = typename ? to_upper_case(truncate_until_str(typename, "__")) : string_from_c("SIMPLE_NODE");
      if (contains_char(arguments, '{')) arguments = between_needles(arguments, need_char('{'), need_char('}'), 1);
      builder_append_char(objects, '\n');
      if (v->is_public) {
        builder_append_c(object_declarations, "extern ");
        builder_append_str(object_declarations, struct_name);
        builder_append_c(object_declarations, " ");
        builder_append_str(object_declarations, fullname);
        builder_append_c(object_declarations, ";\n");
      } else {
        builder_append_c(object_forward_declarations, "static ");
        builder_append_str(object_forward_declarations, struct_name);
        builder_append_c(object_forward_declarations, " ");
        builder_append_str(object_forward_declarations, fullname);
        builder_append_c(object_forward_declarations, ";\n");
        builder_append_c(objects, "static ");
      }
      builder_append_str(objects, struct_name);
      builder_append_c(objects, " ");
      builder_append_str(objects, fullname);
      builder_append_c(objects, " = {\n  ");
      builder_append_str(objects, typename);
      builder_append_c(objects, "___type, NULL, ");
      builder_append_str(objects, arguments);
      builder_append_c(objects, "\n};\n");
    }

    // --- variables enumeration + type functions + attributes table ---------
    int do_print_var_no = 1;
    builder_append_c(variables_enumeration, "\nenum {\n");
    for (int vi = 0; vi < t->variables->count; vi++) {
      Variable *v = t->variables->items[vi];
      String *ename = concat2(string_from_c("var_"), v->fullname);
      builder_append_c(variables_enumeration, "  ");
      builder_append_str(variables_enumeration, ename);
      if (do_print_var_no) {
        char buf[32]; snprintf(buf, sizeof(buf), " = FIRST_VAR+%ld", var_no);
        builder_append_c(variables_enumeration, buf);
        do_print_var_no = 0;
      }
      var_no++;
      builder_append_c(variables_enumeration, ",\n");

      if (v->type_function) {
        builder_append_char(type_functions, '\n');
        if (v->is_public) {
          builder_append_c(function_declarations, "void ");
          builder_append_str(function_declarations, v->fullname);
          builder_append_c(function_declarations, "___type (void);\n");
        } else {
          builder_append_c(type_functions, "static ");
        }
        builder_append_c(type_functions, "void ");
        builder_append_str(type_functions, v->fullname);
        builder_append_c(type_functions, "___type (void)\n");
        builder_append_str(type_functions, v->type_function);
      }

      PairList *internal_methods = v->internal_methods;
      PairList *fields = v->fields;
      if (!(internal_methods->count == 0 && fields->count == 0)) {
        builder_append_c(attributes_table, "\nstatic INTERNAL_METHOD ");
        builder_append_str(attributes_table, v->fullname);
        builder_append_c(attributes_table, "__internal_methods[] = {\n");
        String *name = truncate_until_str(v->fullname, "__");
        if (fields->count > 0) {
          builder_append_c(attributes_table, "  {FIM_SIZE, {.size = sizeof(");
          builder_append_str(attributes_table, to_upper_case(name));
          builder_append_c(attributes_table, ")}},\n");
        }
        for (int mi = 0; mi < internal_methods->count; mi++) {
          builder_append_c(attributes_table, "  {FIM");
          builder_append_str(attributes_table, to_upper_case(internal_methods->items[mi].key));
          builder_append_c(attributes_table, ", {");
          builder_append_str(attributes_table, internal_methods->items[mi].value);
          builder_append_c(attributes_table, "}},\n");
        }
        attributes_table->length -= 2; attributes_table->data[attributes_table->length] = '\0';
        builder_append_c(attributes_table, "\n};\n");
      }
      PairList *attributes = v->attributes;
      if (attributes->count > 0) {
        builder_append_c(attributes_table, "\nstatic ATTRIBUTE_DEFINITION ");
        builder_append_str(attributes_table, v->fullname);
        builder_append_c(attributes_table, "__attributes[] = {\n");
        // key order
        Pair *sorted = xmalloc(sizeof(Pair) * attributes->count);
        memcpy(sorted, attributes->items, sizeof(Pair) * attributes->count);
        qsort(sorted, attributes->count, sizeof(Pair), cmp_pair_key);
        for (int ai = 0; ai < attributes->count; ai++) {
          builder_append_c(attributes_table, "  {");
          builder_append_str(attributes_table, sorted[ai].key);
          builder_append_c(attributes_table, ", ");
          builder_append_str(attributes_table, sorted[ai].value);
          builder_append_c(attributes_table, "},\n");
        }
        attributes_table->length -= 2; attributes_table->data[attributes_table->length] = '\0';
        builder_append_c(attributes_table, "\n};\n");
      }
    }
    variables_enumeration->length -= 2; variables_enumeration->data[variables_enumeration->length] = '\0';
    builder_append_c(variables_enumeration, "\n};\n");

    // --- variables table ---------------------------------------------------
    builder_append_c(variables_table, "\nstatic FUNKY_VARIABLE variables_table[] = {\n");
    for (int vi = 0; vi < t->variables->count; vi++) {
      Variable *v = t->variables->items[vi];
      FieldObjectType vt = v->type;
      PairList *attributes = v->attributes;
      PairList *internal_methods = v->internal_methods;
      PairList *fields = v->fields;
      String *parent = v->parent;
      long attributes_count = attributes->count;
      String *attributes_reference = attributes_count == 0 ? string_from_c("NULL")
        : concat2(v->fullname, string_from_c("__attributes"));
      String *namespace = extract_namespace(v->fullname);
      int is_local = (vt == FOT_UNINITIALIZED && is_empty(namespace));
      String *name = is_local ? v->fullname : truncate_until_str(v->fullname, "__");
      Builder *mn = builder_new();
      builder_append_c(mn, "\"");
      builder_append_str(mn, name);
      builder_append_c(mn, "\\000");
      builder_append_str(mn, demangle_ns(namespace));
      builder_append_c(mn, "\"");
      String *mangled_name = builder_to_string(mn);

      builder_append_c(variables_table, "  {\n    ");
      builder_append_c(variables_table, fot_name(vt));
      { char buf[32]; snprintf(buf, sizeof(buf), ", 0, %ld,\n    ", attributes_count); builder_append_c(variables_table, buf); }
      builder_append_str(variables_table, mangled_name);
      builder_append_c(variables_table, ", ");
      builder_append_str(variables_table, attributes_reference);
      builder_append_c(variables_table, ",\n");

      if (vt == FOT_TYPE || vt == FOT_OBJECT || vt == FOT_DERIVED) {
        String *parent_name;
        if (parent) {
          String *pname = truncate_until_str(parent, "__");
          String *pnamespace = before_str(parent, "__");
          Builder *pb = builder_new();
          builder_append_c(pb, "\""); builder_append_str(pb, pname); builder_append_c(pb, "\\000");
          builder_append_str(pb, demangle_ns(pnamespace)); builder_append_c(pb, "\"");
          parent_name = builder_to_string(pb);
        } else parent_name = string_from_c("NULL");
        builder_append_c(variables_table, "    {");
        builder_append_str(variables_table, parent_name);
        builder_append_c(variables_table, "},\n");
      } else if (vt == FOT_INITIALIZED) {
        builder_append_c(variables_table, "    {.const_idx = ");
        builder_append_str(variables_table, v->initial_value);
        builder_append_c(variables_table, "}\n");
      } else if (vt == FOT_POLYMORPHIC) {
        builder_append_c(variables_table, "    {.has_a_setter = ");
        builder_append_c(variables_table, v->has_a_setter ? "true" : "false");
        builder_append_c(variables_table, "}\n");
      }

      if (vt == FOT_TYPE) {
        long methods_count = (fields->count == 0 ? 0 : 1) + internal_methods->count;
        char buf[48]; snprintf(buf, sizeof(buf), "    {.methods_count = %ld}, 0,\n", methods_count);
        builder_append_c(variables_table, buf);
      } else if (vt == FOT_OBJECT) {
        builder_append_c(variables_table, "    {.methods_count = 0}, 0,\n");
      }

      if (vt == FOT_TYPE) {
        builder_append_c(variables_table, "    ");
        if (internal_methods->count == 0 && fields->count == 0) builder_append_c(variables_table, "NULL");
        else { builder_append_str(variables_table, v->fullname); builder_append_c(variables_table, "__internal_methods"); }
        builder_append_c(variables_table, ",\n");
      } else if (vt == FOT_OBJECT) {
        builder_append_c(variables_table, "    NULL,\n");
      }

      if (vt == FOT_TYPE || vt == FOT_OBJECT) {
        builder_append_c(variables_table, "    {(NODE *)&");
        builder_append_str(variables_table, v->fullname);
        builder_append_c(variables_table, "}\n");
      }

      builder_append_c(variables_table, "  },\n");
    }
    variables_table->length -= 2; variables_table->data[variables_table->length] = '\0';
    builder_append_c(variables_table, "\n};\n");
  }

  // --- module table --------------------------------------------------------
  const char *defined_ns_tab = t->defined_namespaces->count ? "defined_namespaces" : "NULL";
  const char *const_tab = t->constants->count ? "constants_table" : "NULL";
  const char *var_tab = t->variables->count ? "variables_table" : "NULL";
  {
    char buf[512];
    snprintf(buf, sizeof(buf),
      "\nFUNKY_MODULE module__%s = {\n  \"_%s\",\n  \"_%s\",\n  0, %d,\n  %d, %d,\n  %d, %ld,\n  %s,\n  %s, %s,\n  %s, %s\n};\n",
      module_name, module_name, module_name,
      0, t->defined_namespaces->count, 0,
      t->constants->count, var_no,
      "NULL", defined_ns_tab, "NULL", const_tab, var_tab);
    builder_append_c(module_table, buf);
  }
  builder_append_c(module_declarations, "\nextern FUNKY_MODULE module__");
  builder_append_c(module_declarations, module_name);
  builder_append_c(module_declarations, ";\n");

  // --- assemble ------------------------------------------------------------
  Builder *header = builder_new();
  builder_append_str(header, builder_to_string(declarations));
  builder_append_str(header, builder_to_string(struct_declarations));
  builder_append_str(header, builder_to_string(union_node));
  builder_append_str(header, builder_to_string(function_declarations));
  builder_append_str(header, builder_to_string(object_declarations));
  builder_append_str(header, builder_to_string(module_declarations));

  Builder *enums = builder_new();
  builder_append_str(enums, builder_to_string(constants_enumeration));
  builder_append_str(enums, builder_to_string(variables_enumeration));

  Builder *source = builder_new();
  builder_append_str(source, builder_to_string(object_forward_declarations));
  builder_append_str(source, builder_to_string(constructor_declarations));
  builder_append_str(source, builder_to_string(local_function_declarations));
  builder_append_str(source, builder_to_string(helpers));
  builder_append_str(source, builder_to_string(type_functions));
  builder_append_str(source, builder_to_string(objects));
  builder_append_str(source, builder_to_string(constructors));
  builder_append_str(source, builder_to_string(function_definitions));
  builder_append_str(source, builder_to_string(methods));
  builder_append_str(source, builder_to_string(defined_namespaces_table));
  builder_append_str(source, builder_to_string(constants_table));
  builder_append_str(source, builder_to_string(attributes_table));
  builder_append_str(source, builder_to_string(variables_table));
  builder_append_str(source, builder_to_string(module_table));

  (void)ctx;
  *header_out = builder_to_string(header);
  *enums_out = builder_to_string(enums);
  *source_out = builder_to_string(source);
}

//======================================================================
// file IO
//======================================================================

static String *read_file(const char *path) {
  FILE *f = fopen(path, "rb");
  if (!f) { fprintf(stderr, "cannot open %s: %s\n", path, strerror(errno)); exit(1); }
  fseek(f, 0, SEEK_END);
  long n = ftell(f);
  fseek(f, 0, SEEK_SET);
  char *data = xmalloc((size_t)n + 1);
  if (n && fread(data, 1, (size_t)n, f) != (size_t)n) { fprintf(stderr, "read error %s\n", path); exit(1); }
  data[n] = '\0';
  fclose(f);
  return string_of_bytes(data, n);
}

static int cmp_names(const void *a, const void *b) {
  return strcmp(*(const char *const *)a, *(const char *const *)b);
}

int main(int argc, char **argv) {
  const char *template_dir = argc > 1 ? argv[1] : "runtime_templates";
  const char *common_h_path = argc > 2 ? argv[2] : "runtime/common.h";

  Tables *t = create_tables();
  define_namespace(t, "builtin_types");
  define_namespace(t, "debug");
  define_namespace(t, "std");
  define_namespace(t, "std_types");

  ParseContext ctx;
  ctx.builtin_function_count = 0;
  ctx.builtin_function_names = builder_new();

  // 1) internal methods from common.h
  build_internal_methods(t, read_file(common_h_path));

  // 2) templates, sorted by filename
  DIR *d = opendir(template_dir);
  if (!d) { fprintf(stderr, "cannot open dir %s\n", template_dir); exit(1); }
  char **names = NULL; int ncap = 0, ncount = 0;
  struct dirent *de;
  while ((de = readdir(d))) {
    size_t l = strlen(de->d_name);
    if (l >= 9 && strcmp(de->d_name + l - 9, ".template") == 0) {
      if (ncount == ncap) { ncap = ncap ? ncap * 2 : 32; names = realloc(names, sizeof(char *) * ncap); }
      names[ncount++] = strdup(de->d_name);
    }
  }
  closedir(d);
  qsort(names, ncount, sizeof(char *), cmp_names);

  for (int fi = 0; fi < ncount; fi++) {
    char path[4096];
    snprintf(path, sizeof(path), "%s/%s", template_dir, names[fi]);
    String *template = read_file(path);
    fprintf(stderr, "converting %s ...\n", path);
    FragmentList *frags = cut_into_fragments(template);
    for (int i = 0; i < frags->count; i++)
      process_fragment(t, &ctx, frags->items[i].text);
  }

  // 3) build the TAG enum + union struct declarations
  {
    // tags: insertion-order set of variant names
    StringList *tags = slist_new();
    for (int ui = 0; ui < t->unions->count; ui++) {
      UnionVariantList *vl = t->unions->items[ui].variants;
      for (int vi = 0; vi < vl->count; vi++) {
        int seen = 0;
        for (int k = 0; k < tags->count; k++)
          if (strcmp(tags->items[k]->data, vl->items[vi].variant_name->data) == 0) { seen = 1; break; }
        if (!seen) slist_push(tags, vl->items[vi].variant_name);
      }
    }
    Builder *td = builder_new();
    builder_append_c(td, "typedef enum {\n");
    for (int k = 0; k < tags->count; k++) { builder_append_c(td, "  "); builder_append_str(td, tags->items[k]); builder_append_c(td, ",\n"); }
    td->length -= 2; td->data[td->length] = '\0'; // range 1 -3 (drop trailing ",\n")
    builder_append_c(td, "\n} TAG;\n");
    define_declaration(t, builder_to_string(td));
  }
  for (int ui = 0; ui < t->unions->count; ui++) {
    UnionEntry *ue = &t->unions->items[ui];
    Builder *ud = builder_new();
    for (int vi = 0; vi < ue->variants->count; vi++) {
      UnionVariant *uv = &ue->variants->items[vi];
      builder_append_c(ud, "typedef struct {\n  TAG tag;\n");
      for (int fi = 0; fi < uv->fields->count; fi++) {
        builder_append_c(ud, "  ");
        builder_append_str(ud, type_and_name(uv->fields->items[fi].value, uv->fields->items[fi].key));
        builder_append_c(ud, ";\n");
      }
      builder_append_c(ud, "} ");
      builder_append_str(ud, ue->name);
      builder_append_c(ud, "_");
      builder_append_str(ud, uv->variant_name);
      builder_append_c(ud, ";\n");
    }
    define_declaration(t, builder_to_string(ud));
  }

  // 4) generate
  String *header, *enums, *source;
  create_header_and_source(t, "builtin", &ctx, &header, &enums, &source);

  // includes block from the collected INCLUDE files
  Builder *inc = builder_new();
  for (int i = 0; i < t->include_files->count; i++) {
    builder_append_c(inc, "#include <"); builder_append_str(inc, t->include_files->items[i]); builder_append_c(inc, ">\n");
  }
  String *includes = builder_to_string(inc);

  // builtin_function_names buffer, trailing ",\n" removed
  String *bfn = without_suffix_c(builder_to_string(ctx.builtin_function_names), ",\n");

  const char *HEADER =
    "// This file is automatically generated by \"builtins.sim\"; do not edit manually!\n";

  // ---- builtins.h ----
  Builder *H = builder_new();
  builder_append_c(H, "#include <termios.h>\n");
  builder_append_c(H, HEADER);
  builder_append_c(H, "\n");
  builder_append_c(H, "typedef struct {\n  FUNC func;\n  const char *name;\n} BUILTIN_FUNCTION_NAME;\n");
  builder_append_c(H, "\n");
  { char b[96]; snprintf(b, sizeof(b), "extern BUILTIN_FUNCTION_NAME builtin_function_names[%ld];\n", ctx.builtin_function_count); builder_append_c(H, b); }
  builder_append_str(H, g_funky_internal_methods);
  builder_append_c(H, "\n");
  builder_append_c(H, "extern const char *internal_method_names[];\n");
  builder_append_c(H, "struct FUNKY_MODULE;\n");
  builder_append_c(H, "typedef struct FUNKY_MODULE FUNKY_MODULE;\n");
  builder_append_c(H, "extern BUILTIN_FUNCTION_NAME builtin_function_names[];\n");
  builder_append_str(H, header);
  String *out_h = builder_to_string(H);

  // ---- builtins.c ----
  Builder *C = builder_new();
  builder_append_c(C, HEADER);
  builder_append_c(C, "\n");
  builder_append_c(C,
    "#define _GNU_SOURCE\n"
    "#include <stdint.h>\n#include <stdlib.h>\n#include <stdio.h>\n#include <string.h>\n"
    "#include <errno.h>\n#include <inttypes.h>\n#include <limits.h>\n#include <unistd.h>\n"
    "#include <math.h>\n#include <pwd.h>\n#include <time.h>\n#include <fcntl.h>\n"
    "#include <sys/ioctl.h>\n#include <sys/mman.h>\n#include <sys/socket.h>\n#include <sys/un.h>\n"
    "#include <sys/stat.h>\n#include <sys/wait.h>\n#include <netinet/in.h>\n#include <netinet/tcp.h>\n"
    "#ifndef __CYGWIN__\n  #include <ifaddrs.h>\n  #include <arpa/inet.h>\n  #include <netpacket/packet.h>\n#endif\n"
    "#include <netdb.h>\n");
  builder_append_str(C, includes);
  builder_append_c(C, "\n");
  builder_append_c(C,
    "#include \"platform.h\"\n#include \"common.h\"\n#include \"builtins.h\"\n#include \"fko.h\"\n"
    "#include \"linker.h\"\n#include \"memory.h\"\n#include \"interpreter.h\"\n#include \"debugger.h\"\n");
  builder_append_c(C, "\n");
  builder_append_str(C, enums);
  builder_append_c(C, "\n");
  builder_append_c(C, "static FUNKY_VARIABLE variables_table[];\n");
  builder_append_c(C, "\n");
  builder_append_str(C, source);
  builder_append_c(C, "\n");
  { char b[96]; snprintf(b, sizeof(b), "BUILTIN_FUNCTION_NAME builtin_function_names[%ld] = {\n", ctx.builtin_function_count); builder_append_c(C, b); }
  builder_append_str(C, bfn);
  builder_append_c(C, "\n};\n");
  builder_append_str(C, g_internal_method_names);
  String *out_c = builder_to_string(C);

  const char *out_h_path = argc > 3 ? argv[3] : "runtime/builtins.h";
  const char *out_c_path = argc > 4 ? argv[4] : "runtime/builtins.c";
  FILE *fh = fopen(out_h_path, "wb"); fwrite(out_h->data, 1, (size_t)out_h->length, fh); fclose(fh);
  FILE *fc = fopen(out_c_path, "wb"); fwrite(out_c->data, 1, (size_t)out_c->length, fc); fclose(fc);
  fprintf(stderr, "wrote %s (%ld bytes) and %s (%ld bytes)\n",
          out_h_path, out_h->length, out_c_path, out_c->length);
  return 0;
}
