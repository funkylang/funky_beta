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

#include <inttypes.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/mman.h>
#include <setjmp.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

#include "common.h"
#include "builtins.h"
#include "fko.h"
#include "linker.h"
#include "memory.h"

#if !defined(MAP_ANONYMOUS) && defined(MAP_ANON)
  #define MAP_ANONYMOUS MAP_ANON
#endif

extern uint64_t instruction_counter;
extern jmp_buf main_loop_start;

static int is_identifier_start_character(char chr) {
  return chr >= 'a' && chr <= 'z' || chr >= 'A' && chr <= 'Z';
}

static int is_identifier_character(char chr) {
  return
    is_identifier_start_character(chr) ||
    chr == '_' || chr >= '0' && chr <= '9';
}

static char *parse_identifier(char **pp) {
  char *p = *pp;
  if (!is_identifier_start_character(*p)) return NULL;
  char *identifier = p++;
  while (is_identifier_character(*p)) ++p;
  *pp = p;
  return identifier;
}

static void list_global_symbol_names(void) {
  int i;
  for (i = 0; i < HASH_TABLE_SIZE; ++i) {
    HASH_ENTRY *hep = hash_table[i];
    while (hep) {
      SYMBOL_ENTRY *sep = hep->symbols;
      while (sep) {
	printf("%s::%s\n", sep->namespace, hep->name);
	sep = sep->link;
      }
      hep = hep->link;
    }
  }
}

static int already_sorted;

static void list_module_names(void) {
  FUNKY_MODULE **module_p, *module;
  for(module_p = funky_modules; module = *module_p; ++module_p) {
    printf("%s\n", module->name);
  }
}

typedef int (*COMPARE_FUNCTION)(const void *, const void *);

static const TAB_NUM *find_call(
  const TAB_NUM *p,
  const TAB_NUM *code,
  int *line_no_p,
  int *column_no_p
) {
  ++p; // skip temp count
  TAB_NUM par_count = *p++;
  if (par_count < 0) {
    p -= 2*par_count;
  } else {
    p += par_count;
  }
  const TAB_NUM *found_stmt = NULL;
  int found_stmt_idx = -1;
  find_statement:;
  if (!found_stmt) ++found_stmt_idx;
  const TAB_NUM *stmt = p;
  TAB_NUM functor = *p++;
  TAB_NUM arg_count = *p++;
  if (functor == LET) {
    if (arg_count < 0) {
      p -= 2*arg_count-2;
      goto find_statement;
    }
  }
  p += arg_count;
  TAB_NUM res_count = *p++;
  if (code <= p) {
    if (!line_no_p) return stmt;
    if (current_module->feature_flags & FEAT_POSITIONS) {
      if (!found_stmt) {
	found_stmt = stmt;
      }
    } else {
      *line_no_p = -1;
      *column_no_p = -1;
      return stmt;
    }
  }
  if (res_count >= 0) {
    p += res_count;
    goto find_statement;
  }
  if (found_stmt) {
    TAB_NUM pos = p[found_stmt_idx];
    *line_no_p = pos >> 16;
    *column_no_p = pos & 0xffff;
  }
  return found_stmt;
}

extern char **var_names;
extern char **const_names;

static const char *var_or_const(TAB_NUM idx) {
  int leaf_idx = idx & 0xffff;
  int branch_idx = 0;
  idx >>= 16;
  while (idx) {
    branch_idx <<= 3;
    branch_idx |= idx & 7;
    idx >>= 3;
  }
  switch (branch_idx) {
    case 1:
      if (const_names[leaf_idx]) return const_names[leaf_idx];
      return NULL;
    case 2:
      return var_names[(branch_idx << 3) | leaf_idx];
  }
  return NULL;
}

extern TAB_NUM wrapper_code[];
extern TAB_NUM toplevel_code[];

EXPORT void retrieve_continuation_info(
  const TAB_NUM *code, const char **module_name_p, const char **function_name_p,
  int *line_no_p, int *column_no_p
) {
  const TAB_NUM *stmt;
  *line_no_p = -1;
  *column_no_p = -1;
  if (
    code >= wrapper_code &&
    (stmt = find_call(wrapper_code, code, NULL, NULL))
  ) {
    *module_name_p = "wrapper";
    get_functor_name:
    *function_name_p = var_or_const(abs(*stmt));
    return;
  }
  if (
    code >= toplevel_code &&
    (stmt = find_call(toplevel_code, code, NULL, NULL))
  ) {
    *module_name_p = "toplevel";
    goto get_functor_name;
  }
  int i, j;
  for (i = 0; i < funky_module_count; ++i) {
    current_module = funky_modules[i];
    for (j = 0; j < current_module->constants_count; ++j) {
      FUNKY_CONSTANT *constant = &current_module->constants[j];
      if (constant->type == FLT_FUNCTION && code >= constant->tfunc) {
	stmt = find_call(constant->tfunc, code, line_no_p, column_no_p);
	if (stmt) {
	  *module_name_p = current_module->filename;
	  goto get_functor_name;
	}
      }
    }
  }
  *module_name_p = "<unknown>";
  *function_name_p = "<unknown>";
}
