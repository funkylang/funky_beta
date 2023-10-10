/*
  Copyright (C) 2021 by
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

typedef enum {
  FLT_FUNCTION, // the function's statements in tabular form
  FLT_C_FUNCTION, // the function's statements as C code
  FLT_POSITIVE_INT64,
  FLT_NEGATIVE_INT64,
  FLT_REAL,
  FLT_STRING_8,
  FLT_STRING_16,
  FLT_STRING_32,
  FLT_CHARACTER,
  FLT_UNIQUE,
  FLT_TUPLE,
  FLT_LIST,
  FLT_KEY_VALUE_PAIR,
  FLT_VALUE_RANGE,
  FLT_SEQUENCE
} FUNKY_CONSTANT_TYPE;

typedef enum {
  FOT_UNKNOWN,             //     link,                -,       -, module
  FOT_UNKNOWN_POLYMORPHIC, //     link, poly_idx/var_idx,       -, module
  FOT_TYPE,                //   parent,    count/var_idx, methods, &node/module
  FOT_OBJECT,              //   parent,        -/var_idx,       -, &node/module
  FOT_POLYMORPHIC,         //  default, poly_idx/var_idx,       -, module
  FOT_INITIALIZED,         // constant,        -/var_idx,       -, module
  FOT_DERIVED,             //   parent,        -/var_idx,       -, module
  FOT_UNINITIALIZED        //        -,        -/var_idx,       -, module
} FUNKY_OBJECT_TYPE;

#define MANDATORY_PARAMETER 0
#define REST_PARAMETER 1
#define MYSELF_PARAMETER 2

#define TYPE_FUNCTION 0

#define LET 0
#define FIRST_TEMP 1
#define FIRST_VAR 1024

#define LOCAL(n) n+3

#define IO_CALL(n) -3-n
#define TAIL_CALL -1
#define IO_TAIL_CALL -2

#define POS(line_no, column_no) line_no<<16|column_no

#define FEAT_POSITIONS 0x01

typedef struct {
  int attribute;
    // positive values: methods
    // negative values: attributes
    // zero: type function
  int value;
    // positive values: constants
    // negative values: variables
} ATTRIBUTE_DEFINITION;

typedef struct {
  FUNKY_INTERNAL_METHOD id;
  union {
    void *address;
    uintptr_t size;
  };
} INTERNAL_METHOD;

typedef struct {
  FUNKY_CONSTANT_TYPE type;
  int count; // string size or parameter count (for functions)
  union {
    uint64_t value;
    double real_value;
    const char *str_8;
    const uint16_t *str_16;
    const uint32_t *str_32;
    const int *arguments;
    FUNC func;
    TAB_NUM *tfunc;
  };
} FUNKY_CONSTANT;

typedef struct FUNKY_VARIABLE {
  int8_t type;
  int8_t is_initialized;
  int attributes_count; // all types
  const char *name; // all types
  ATTRIBUTE_DEFINITION *attributes; // all types
  union { // see FUNKY_OBJECT_TYPE
    const char *parent; // the parent object to use for initialization
    int const_idx; // the constant to use for initialization
    int has_a_setter; // for polymorphic functions (boolean)
    struct FUNKY_VARIABLE *link; // link chain for distributed definitions
  };
  union { // see FUNKY_OBJECT_TYPE
    int methods_count;
    int poly_idx;
  };
  int var_idx; // the index of this variable
  INTERNAL_METHOD *methods;
  union { // see FUNKY_OBJECT_TYPE
    NODE *node;
    struct FUNKY_MODULE *module;
  };
} FUNKY_VARIABLE;

typedef struct {
  const char *namespace;
  int major; // INT_MAX -> "unstable"
  int minor;
} FUNKY_NAMESPACE;

struct FUNKY_MODULE {
  const char *name;
  const char *filename;
  union {
    int zero;
    struct {
      uint8_t major_version;
      uint8_t minor_version;
      uint8_t feature_flags;
      uint8_t marker;
    };
  };
  int required_modules_count;
  int defined_namespaces_count;
  int used_namespaces_count;
  int constants_count;
  int variables_count;
  struct FUNKY_MODULE **required_modules; // optional (might be NULL)
  FUNKY_NAMESPACE *defined_namespaces; // optional (might be NULL)
  FUNKY_NAMESPACE *used_namespaces; // optional (might be NULL)
  FUNKY_CONSTANT *constants; // optional (might be NULL)
  FUNKY_VARIABLE *variables; // optional (might be NULL)
  NODE **constants_base; // optional (might be NULL)
  int additional_constants_count; // for "constant" variables
};
