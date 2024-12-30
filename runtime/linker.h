/*
  Copyright (C) 2024 by
  Dipl.-Ing. Michael Niederle

  This program is free software; you can redistribute it and/or modify
  it under the terms of the GNU Library General Public License, version 2, or
  (at your option) under the terms of the GNU Lesser General Public License,
  version 3.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
  GNU Lesser (Library) General Public License for more details.

  For details of the GNU General Public License see the accompanying
  files LGPLv2.txt and LGLPv3.txt or
  http://www.gnu.org/licenses/lgpl-2.0.html
  http://www.gnu.org/licenses/lgpl-3.0.html
  or write to the
  Free Software Foundation, Inc.,
  51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
*/

#define HASH_TABLE_SIZE 8192

typedef enum {
  VT_POLYMORPHIC,
  VT_SINGLE_ASSIGN_STATIC,
  VT_MULTI_ASSIGN_STATIC,
  VT_SINGLE_ASSIGN_DYNAMIC,
  VT_MULTI_ASSIGN_DYNAMIC,
} VAR_TYPE;

typedef struct ATTRIBUTE_ENTRY ATTRIBUTE_ENTRY;
typedef struct SYMBOL_VERSION SYMBOL_VERSION;
typedef struct SYMBOL_ENTRY SYMBOL_ENTRY;
typedef struct HASH_ENTRY HASH_ENTRY;

struct ATTRIBUTE_ENTRY {
  ATTRIBUTE_ENTRY *link;
  const char *module_name;
  int id;
  int par_cnt; // used for type functions
  union {
    FUNC type; // used for type functions
    NODE *value; // used for attributes and methods
  };
};

struct SYMBOL_VERSION {
  SYMBOL_VERSION *link;
  int major;
  int minor;
  const char *module_name;
  FUNKY_VARIABLE *variable;
};

struct SYMBOL_ENTRY {
  SYMBOL_ENTRY *link;
  const char *namespace;
  SYMBOL_VERSION *versions;
};

struct HASH_ENTRY {
  struct HASH_ENTRY *link;
  const char *name;
  SYMBOL_ENTRY *symbols;
};

extern __attribute__ ((noreturn)) void unrecoverable_error(const char *msg, ...);

extern void split_name(
  const char *name,
  const char **separator_p,
  const char **namespace_p);

extern NODE *from_bool(int val);
extern NODE *from_int(int val);
extern NODE *from_long(long val);
extern NODE *from_int64(int64_t val);
extern NODE *from_uint32(uint32_t val);
extern NODE *from_uint64(uint64_t val);
extern NODE *from_double(double val);
extern NODE *from_digit_string(const char *str);
extern NODE *from_uchar32(unsigned int chr);
extern NODE *from_c_string(const char *str);
extern NODE *from_latin_1_string(const uint8_t *str, long len);
extern NODE *from_uint32_string(const uint32_t *str, long len);

extern int next_polymorphic_function;
  // no id may equal 0 mod 8
  // this variable denotes the first *unused* value

extern int constants_count;
extern NODE **all_constants;
extern NODE **constants_base;


extern int8_t *attribute_is_redefined;
extern int8_t *has_a_setter;
extern const char **polymorphic_function_names;
extern const char **type_names;

SYMBOL_ENTRY *maybe_find_symbol(const char *namespace, const char *name);
extern HASH_ENTRY *hash_table[HASH_TABLE_SIZE];

extern void *allocate_linktime(size_t size);

extern FUNKY_MODULE *main_module;
extern FUNKY_MODULE **funky_modules;
extern int funky_module_count;
extern FUNKY_MODULE *current_module;
extern const char *current_module_name;
extern void pass(FUNC action, const char *msg);
extern void dump_all();
extern void dump_types();
extern void initialize_all();

extern TAB_NUM encode_attr_idx(TAB_NUM attr_idx);

extern int find_symbol(const char *namespace, const char *name);
extern NODE *get_var_or_const(int var_idx);
