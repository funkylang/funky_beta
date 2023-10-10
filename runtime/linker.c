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

#define RUNTIME_MAJOR_VERSION 0
// denotes a runtime API change

#define RUNTIME_MINOR_VERSION 0
// denotes a runtime API extension

#define RUNTIME_PATCH_VERSION 0
// denotes an internal change in the runtime library

#include <stdarg.h>
#include <stdint.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <inttypes.h>

#include "common.h"
#include "builtins.h"
#include "fko.h"
#include "linker.h"
#include "memory.h"

EXPORT int runtime_major_version(void) {
  return RUNTIME_MAJOR_VERSION;
}

EXPORT int runtime_minor_version(void) {
  return RUNTIME_MINOR_VERSION;
}

EXPORT int runtime_revision(void) {
  return RUNTIME_PATCH_VERSION;
}

EXPORT int runtime_patch_version(void) {
  return RUNTIME_PATCH_VERSION;
}

HASH_ENTRY *hash_table[HASH_TABLE_SIZE];

// all even IDs are polymorphic functions without a setter

EXPORT int next_polymorphic_function_with_setter = 0;
  // ids with a value of 0 mod 8 are skipped
  // is incremented in steps of 2
  // all even IDs are polymorphic functions with a setter
  // this variable denotes the first *unused* value

EXPORT int next_polymorphic_function = 1;
  // is incremented in steps of 2
  // all odd IDs are polymorphic functions without a setter
  // this variable denotes the first *unused* value

EXPORT int constants_count = 3; // the first 3 are for internal use
EXPORT NODE **constants_base;
int polymorphic_function_table_size = 0;
static int dyna_idx = 0;
int *poly_marker_table;
FUNKY_VARIABLE **poly_marker_info;
int poly_marker = 0;

EXPORT const char **var_names;
EXPORT const char **const_names;

EXPORT const char **polymorphic_function_names;

EXPORT FUNKY_MODULE *current_module;
EXPORT FUNKY_MODULE **funky_modules = NULL;
EXPORT int funky_module_count;

EXPORT __attribute__ ((noreturn)) void unrecoverable_error(const char *msg, ...);

void *allocate_linktime(size_t size) {
  void *p = malloc(size);
  if (!p) unrecoverable_error("OUT OF MEMORY WHILE LINKING!");
  return p;
}

static void *reallocate_linktime(void *buf, size_t size) {
  void *p = realloc(buf, size);
  if (!p) unrecoverable_error("OUT OF MEMORY WHILE LINKING!");
  return p;
}

static void free_all_linktime_memory() {
  // ???
}

static void do_register_polymorphic_function(const char *name, int id) {
  if (polymorphic_function_table_size == 0) {
    polymorphic_function_table_size = id+1;
    polymorphic_function_names =
      allocate_memory(polymorphic_function_table_size*sizeof(const char *));
  } else if (id >= polymorphic_function_table_size) {
    polymorphic_function_table_size = 2*(id+1);
    polymorphic_function_names =
      reallocate_memory(
	polymorphic_function_names,
	polymorphic_function_table_size*sizeof(const char *));
  }
  polymorphic_function_names[id] = name;
}

// by default this slot is set to a method that raises an error
static int register_polymorphic_function(const char *name) {
  int id = next_polymorphic_function;
  next_polymorphic_function += 2;
  do_register_polymorphic_function(name, id);
  return id;
}

// by default this slot is set to an attribute with the value <undefined>
// (this is done for all objects but the <undefined> object)
//
// in addition the polymorphic function acts as a setter if called with two
// arguments on an object that has not set this slot to a method
static int register_polymorphic_function_with_setter(const char *name) {
  if ((next_polymorphic_function_with_setter & 0x07) == 0) {
    next_polymorphic_function_with_setter += 2;
  }
  int id = next_polymorphic_function_with_setter;
  next_polymorphic_function_with_setter += 2;
  do_register_polymorphic_function(name, id);
  return id;
}

typedef struct NAMESPACE_VERSION NAMESPACE_VERSION;
typedef struct NAMESPACE_INFO NAMESPACE_INFO;

struct NAMESPACE_VERSION {
  NAMESPACE_VERSION *link;
  int major;
  int minor;
  const char *module_name;
};

struct NAMESPACE_INFO {
  NAMESPACE_INFO *link;
  const char *namespace;
  NAMESPACE_VERSION *versions; // in descending order
};

static NAMESPACE_INFO *defined_namespaces = NULL;
static int namespace_table_size = 0;
static int namespace_idx = 0;

EXPORT void define_namespace(FUNKY_NAMESPACE *namespace) {
  // ATTENTION: maybe use a hashtable for storing defined namespaces!
  DEBUG
    err_write("  define namespace \"%s\"\n", namespace->namespace);
  END
  NAMESPACE_INFO *info = defined_namespaces;
  NAMESPACE_VERSION *version;
  NAMESPACE_VERSION **version_p;
  while (info) {
    if (strcmp(namespace->namespace, info->namespace) == 0) {
      version_p = &info->versions;
      while ((version = *version_p) && namespace->major <= version->major) {
	if (namespace->major == version->major) {
	  unrecoverable_error(
	    "There are conflicting namespace declarations:\n"
	    "  %s-%d.%d (defined in module \"%s\")\n"
	    "  %s-%d.%d (defined in module \"%s\")",
	    namespace->namespace, namespace->major, namespace->minor,
	    current_module->name+1,
	    namespace->namespace, version->major, version->minor, version->module_name);
	}
	version_p = &version->link;
      }
      goto insert_version;
    }
    info = info->link;
  }
  info = allocate_linktime(sizeof(NAMESPACE_INFO));
  info->link = defined_namespaces;
  info->namespace = namespace->namespace;
  info->versions = NULL;
  defined_namespaces = info;
  version_p = &info->versions;
  insert_version:
  version = allocate_linktime(sizeof(NAMESPACE_VERSION));
  version->link = *version_p;
  version->major = namespace->major;
  version->minor = namespace->minor;
  version->module_name = current_module->name;
  *version_p = version;
}

static const char *check_namespace(
  const char *namespace, int *major_p, int *minor_p
) {
  // the checked namespace can contain a version number
  // on success the stripped namespace and the version numbers are returned

  const char *p = namespace;
  while (*p && *p != '-') ++p;
  size_t len = p-namespace;
  int major = 0;
  int minor = 0;
  if (*p) {
    ++p;
    if (strcmp(p, "unstable") == 0) {
      major = INT_MAX;
    } else {
      while (*p != '.') {
	major = 10*major + (*p++ - '0');
      }
      ++p;
      while (*p) {
	minor = 10*minor + (*p++ - '0');
      }
    }
  } else {
    major = 1;
  }
  NAMESPACE_INFO *info = defined_namespaces;
  while (info) {
    if (
      strncmp(namespace, info->namespace, len) == 0 &&
      info->namespace[len] == 0
    ) {
      NAMESPACE_VERSION *version = info->versions;
      while (version) {
	if (major == version->major) {
	  if (minor <= version->minor) {
	    *major_p = major;
	    *minor_p = minor;
	    return info->namespace;
	  } else break;
	}
	version = version->link;
      }
      fprintf(stderr,
	"The namespace \"%s\" used from module \"%s\" is not defined in the\n"
	"desired version in any module!\n\n"
	"Available versions are:\n\n",
	namespace, current_module->name+1);
      version = info->versions;
      while (version) {
	fprintf(stderr, "%s-", info->namespace);
	if (version->major < INT_MAX) {
	  fprintf(stderr, "%d.%d", version->major, version->minor);
	} else {
	  fprintf(stderr, "unstable");
	}
	fprintf(stderr, " (defined in module \"%s\")\n", version->module_name);
	version = version->link;
      }
      exit(EXIT_FAILURE);
    }
    info = info->link;
  }
  unrecoverable_error(
    "The namespace \"%s\" used from module \"%s\" is not defined in any module!",
    namespace, current_module->name+1);
}

#define rol(val, shift) ((((unsigned)(val))<<(shift))|(((unsigned)(val))>>(32-(shift))))

static void register_symbol(FUNKY_VARIABLE *variable) {
  int major, minor;
  const char *name = variable->name;
  const char *namespace = name;
  while (*namespace++);
  if (*namespace == 0) {
    // this is a local symbol
    // module names are prefixed with an underscore to distinguish module names
    // from namespaces
    namespace = current_module->name;
    major = 0;
    minor = 0;
  } else {
    namespace = check_namespace(namespace, &major, &minor);
  }
  //fprintf(stderr, "register symbol %s::%s (%d.%d)\n", namespace, name, major, minor);
  uint32_t h = 0;
  const char *p = name;
  while (*p) {
    h = rol(h, 5)^*p++;
  }
  h &= HASH_TABLE_SIZE-1;

  HASH_ENTRY *hep = hash_table[h];
  while (hep) {
    if (strcmp(hep->name, name) == 0) break;
    hep = hep->link;
  }
  SYMBOL_ENTRY *sep;
  SYMBOL_VERSION *version;
  SYMBOL_VERSION **version_p;
  if (hep) {
    sep = hep->symbols;
    do {
      if (strcmp(sep->namespace, namespace) == 0) {
	version_p = &sep->versions;
	while ((version = *version_p) && major <= version->major) {
	  if (major == version->major) {
	    unrecoverable_error(
	      "There are conflicting declarations:\n"
	      "  %s-%d.%d::%s (defined in module \"%s\")\n"
	      "  %s-%d.%d::%s (defined in module \"%s\")",
	      namespace, major, minor, name, current_module->name+1,
	      namespace, version->major, version->minor, name,
	      version->module_name);
	  }
	  version_p = &version->link;
	  goto insert_version;
	}
	goto insert_version;
      }
      sep = sep->link;
    } while (sep);
  } else {
    hep = allocate_linktime(sizeof(HASH_ENTRY));
    hep->link = hash_table[h];
    hep->name = name;
    hep->symbols = NULL;
    hash_table[h] = hep;
  }
  sep = allocate_linktime(sizeof(SYMBOL_ENTRY));
  sep->link = hep->symbols;
  sep->namespace = namespace;
  sep->versions = NULL;
  version_p = &sep->versions;
  hep->symbols = sep;

  insert_version:
  version = allocate_linktime(sizeof(SYMBOL_VERSION));
  version->link = *version_p;
  version->major = major;
  version->minor = minor;
  version->module_name = current_module->name;
  version->variable = variable;
  *version_p = version;
}

static FUNKY_VARIABLE *update_symbol(
  const char *name,
  FUNKY_VARIABLE *new_variable
) {
  // the variable is already defined; this is just an *access*
  // the valid version is the already defined one
  const char *namespace = name;
  while (*namespace++);
  int major, minor;
  if (*namespace) {
    namespace = check_namespace(namespace, &major, &minor);
  }

  uint32_t h = 0;
  const char *p = name;
  while (*p) {
    h = rol(h, 5)^*p++;
  }
  h &= HASH_TABLE_SIZE-1;

  HASH_ENTRY *hep = hash_table[h];
  while (hep) {
    if (strcmp(hep->name, name) == 0) break;
    hep = hep->link;
  }
  SYMBOL_VERSION *version_found;
  if (*namespace) {
    //fprintf(stderr, "update symbol %s::%s (%d.%d)\n", namespace, name, major, minor);
    if (hep) {
      SYMBOL_ENTRY *sep = hep->symbols;
      do {
	// namespace strings are not duplicated,
	// so a simple address compare will do
	if (sep->namespace == namespace) {
	  version_found = sep->versions;
	  do {
	    if (
	      major > version_found->major ||
	      major == version_found->major && minor >= version_found->minor
	    ) {
	      found:;
	      FUNKY_VARIABLE *old_variable = version_found->variable;
	      if (new_variable) {
		version_found->variable = new_variable;
	      }
	      return old_variable;
	    }
	    version_found = version_found->link;
	  } while (version_found);
	}
	sep = sep->link;
      } while (sep);
    }
    unrecoverable_error(
      "The symbol \"%s::%s\" needed by the module \"%s\" is not defined!",
      namespace, name, current_module->name+1);
  } else {
    if (!hep) {
      unrecoverable_error(
	"The symbol \"%s\" needed by the module \"%s\" is not defined in any "
	"namespace!",
	name, current_module->name+1);
    }

    //fprintf(stderr, "update symbol %s\n", name);

    version_found = NULL; // no valid match found yet
    SYMBOL_ENTRY *sep_found = NULL; // absolutely no match found yet
    int found_something = false;
    int i;
    for (i = 0; i < current_module->used_namespaces_count; ++i) {
      FUNKY_NAMESPACE *used_namespace = &current_module->used_namespaces[i];
      SYMBOL_ENTRY *sep = hep->symbols;
      do {
	if (*sep->namespace == '_') {
	  if (strcmp(sep->namespace, current_module->name) == 0) {
	    version_found = sep->versions;
	    goto found;
	  }
	} else if (strcmp(sep->namespace, used_namespace->namespace) == 0) {
	  found_something = true;
	  SYMBOL_VERSION *version = sep->versions;
	  do {
	    if (
	      used_namespace->major > version->major ||
	      used_namespace->major == version->major &&
	      used_namespace->minor >= version->minor
	    ) {
	      if (version_found) {
		unrecoverable_error(
		  "The symbol \"%s\" needed by the module \"%s\" is defined\n"
		  "in at least two used namespaces (\"%s\" and \"%s\")!",
		  name, current_module->name+1,
		  sep->namespace, sep_found->namespace);
	      } else {
		sep_found = sep;
		version_found = version;
		goto try_next;
	      }
	    }
	    version = version->link;
	  } while (version);
	}
	try_next:
	sep = sep->link;
      } while (sep);
    }
    if (version_found) goto found;
    if (found_something) {
      fprintf(stderr,
	"The symbol \"%s\" needed by the module \"%s\" is not defined in an\n"
	"appropriate version in any used namespace (",
	name, current_module->name+1);
    } else {
      fprintf(stderr,
	"The symbol \"%s\" needed by the module \"%s\" is not defined in any "
	"used namespace (",
	name, current_module->name+1);
    }
    int something_printed = 0;
    for (i = 0; i < current_module->used_namespaces_count; ++i) {
      FUNKY_NAMESPACE *used_namespace = &current_module->used_namespaces[i];
      if (something_printed) {
	fprintf(stderr, ", ");
      }
      fprintf(stderr, "\"%s-", used_namespace->namespace);
      if (used_namespace->major < INT_MAX) {
	fprintf(stderr, "%d.%d\"", used_namespace->major, used_namespace->minor);
      } else {
	fprintf(stderr, "unstable\"");
      }
      something_printed = 1;
    }
    fprintf(stderr, ")!\n");
    if (found_something) {
      fprintf(stderr, "\nThe following versions are available:\n\n");
      for (i = 0; i < current_module->used_namespaces_count; ++i) {
	FUNKY_NAMESPACE *used_namespace = &current_module->used_namespaces[i];
	SYMBOL_ENTRY *sep = hep->symbols;
	do {
	  if (strcmp(sep->namespace, used_namespace->namespace) == 0) {
	    SYMBOL_VERSION *version = sep->versions;
	    do {
	      fprintf(stderr, "  %s-", used_namespace->namespace);
	      if (version->major < INT_MAX) {
		fprintf(stderr, "%d.%d", version->major, version->minor);
	      } else {
		fprintf(stderr, "unstable");
	      }
	      fprintf(stderr,
		"::%s (defined in module \"%s\")\n",
		name, version->module_name);
	      version = version->link;
	    } while (version);
	  }
	  sep = sep->link;
	} while (sep);
      }
    }
    exit(EXIT_FAILURE);
  }
}

EXPORT FUNKY_VARIABLE *resolve_symbol(const char *name) {
  return update_symbol(name, NULL);
}

static FUNKY_VARIABLE *get_defined_variable(const char *name) {
  FUNKY_VARIABLE *variable = resolve_symbol(name);
  while (
    variable->type == FOT_UNKNOWN ||
    variable->type == FOT_UNKNOWN_POLYMORPHIC
  ) {
    variable = variable->link;
  }
  return variable;
}

EXPORT FUNKY_MODULE *main_module;
const char **unique_item_names;
int par_count_id;

static uint8_t marker = 0;
  // used to mark modules as having been already traversed
  // this value is increased before each initialization pass

EXPORT int next_var_idx = 1;
  // the next available variable index
  // do not use 0 as an index so it is available for "not yet initialized"

EXPORT void split_name(
  const char *name,
  const char **separator_p,
  const char **namespace_p
) {
  const char *namespace = name;
  while (*namespace++);
  *namespace_p = namespace;
  if (*namespace) {
    *separator_p = "::";
  } else {
    *separator_p = "";
  }
}

static void err_print_name(const char *name) {
  const char *namespace = name;
  while (*namespace++);
  err_write("\"");
  if (*namespace) {
    err_write("%s::", namespace);
  }
  err_write("%s\"", name);
};

static void print_name(const char *name) {
  const char *namespace = name;
  while (*namespace++);
  if (*namespace) {
    printf("%s::", namespace);
  }
  printf("%s", name);
};

static void dump_string_8(FILE *fh, int size, const char *buf) {
  int i;
  for (i = 0; i < size; ++i) {
    char chr = buf[i];
    if (chr >= 0x20 && chr <= 0x7e && chr != '\\' && chr != '\"') {
      putc(chr, fh);
    } else {
      fprintf(fh, "\\%03o", chr);
    }
  }
}

static void print_constant(FILE *fh, FUNKY_CONSTANT *constant);

static void print_arguments(FILE *fh, FUNKY_CONSTANT *constant) {
  int i;
  for (i = 0; i < constant->count; ++i) {
    int idx = constant->arguments[i];
    if (idx > 0) {
      print_constant(fh, &current_module->constants[idx-1]);
    } else {
      const char *name = current_module->variables[-idx-FIRST_VAR].name;
      const char *separator, *namespace;
      split_name(name, &separator, &namespace);
      fprintf(fh, "%s%s%s", namespace, separator, name);
    }
    if (i+1 < constant->count) {
      fprintf(fh, ", ");
    }
  }
}

extern int be_verbose;

static void print_argument(TAB_NUM arg) {
  if (arg < 0) {
    putchar('<');
    print_constant(stdout, &current_module->constants[-arg-1]);
    putchar('>');
  } else if (arg >= FIRST_VAR) {
    print_name(current_module->variables[arg-FIRST_VAR].name);
  } else {
    printf("local__%d", arg);
  }
}

static void dump_function(FUNKY_CONSTANT *constant, int indent) {
  const TAB_NUM *p = constant->tfunc;
  int temp_count = *p++;
  TAB_NUM par_count = *p++;
  if (par_count < 0) {
    printf("%*c:\n%*c(\n", indent, ' ', indent+2, ' ');
    while (++par_count <= 0) {
      TAB_NUM kind = *p++;
      TAB_NUM par = *p++;
      printf("%*c", indent+4, ' ');
      print_argument(par);
      switch (kind) {
	case MANDATORY_PARAMETER:
	  break;
	case REST_PARAMETER:
	  putchar('*');
	  break;
	case MYSELF_PARAMETER:
	  putchar('^');
	  break;
	default:
	  printf(" = ");
	  print_argument(kind);
      }
      putchar('\n');
    }
    printf("%*c)\n", indent+2, ' ');
  } else {
    printf("%*c: (", indent, ' ');
    while (--par_count >= 0) {
      TAB_NUM par = *p++;
      print_argument(par);
      if (par_count > 0) putchar(' ');
    }
    printf(")\n");
  }
  indent += 2;
  if (temp_count > 0) {
    printf("%*c# local slots: %d\n", indent, ' ', temp_count);
  }

  print_statement:
  printf("%*c", indent, ' ');
  TAB_NUM functor = *p++;
  TAB_NUM arg_count = *p++;
  if (functor == LET) {
    printf("LET");
    if (arg_count < 0) {
      printf("\n%*c", indent+2, ' ');
      print_argument(*p++); // source
      putchar('\n');
      // print attributes
      while (++arg_count <= 0) {
	printf("%*c", indent+2, ' ');
	TAB_NUM attr_var = *p++;
	if (attr_var < 0) { // method
	  putchar('/');
	  print_name(current_module->variables[-attr_var-FIRST_VAR].name);
	} else if (attr_var > 0) { // attribute
	  putchar('.');
	  print_name(current_module->variables[attr_var-FIRST_VAR].name);
	} else { // type function
	  printf("/:");
	}
	putchar(' ');
	print_argument(*p++); // value
	putchar('\n');
      }
      printf("%*c!", indent+2, ' ');
      print_argument(*p++); // destination
      putchar('\n');
      goto print_statement;
    }
  } else {
    print_argument(functor);
  }
  putchar('\n');
  while (--arg_count >= 0) {
    printf("%*c", indent+2, ' ');
    print_argument(*p++);
    putchar('\n');
  }
  TAB_NUM res_count = *p++;
  if (res_count >= 0) {
    while (--res_count >= 0) {
      printf("%*c!", indent+2, ' ');
      print_argument(*p++);
      putchar('\n');
    }
    goto print_statement;
  }
}

static void print_constant(FILE *fh, FUNKY_CONSTANT *constant) {
  switch (constant->type) {
    case FLT_FUNCTION:
      fprintf(fh, "function %p", constant->tfunc);
      break;
    case FLT_C_FUNCTION:
      fprintf(fh, "C function %p", constant->func);
      break;
    case FLT_POSITIVE_INT64:
      fprintf(fh, "uint64 +%" PRIu64 "", constant->value);
      break;
    case FLT_NEGATIVE_INT64:
      fprintf(fh, "uint64 -%" PRIu64 "", constant->value);
      break;
    case FLT_REAL:
      fprintf(fh, "real %lg", constant->real_value);
      break;
    case FLT_STRING_8:
      fprintf(fh, "string_8 \"");
      dump_string_8(fh, constant->count, constant->str_8);
      fprintf(fh, "\"");
      break;
    case FLT_STRING_16:
      fprintf(fh, "string_16");
      break;
    case FLT_STRING_32:
      fprintf(fh, "string_32");
      break;
    case FLT_CHARACTER:
      fprintf(fh, "character %" PRIu64 "", constant->value);
      break;
    case FLT_UNIQUE:
      fprintf(fh, "unique %s", constant->str_8);
      break;
    case FLT_TUPLE:
      fprintf(fh, "tuple(");
      print_arguments(fh, constant);
      fprintf(fh, ")");
      break;
    case FLT_LIST:
      fprintf(fh, "list(");
      print_arguments(fh, constant);
      fprintf(fh, ")");
      break;
    case FLT_KEY_VALUE_PAIR:
      fprintf(fh, "key_value_pair(");
      print_arguments(fh, constant);
      fprintf(fh, ")");
      break;
    case FLT_VALUE_RANGE:
      fprintf(fh, "value_range(");
      print_arguments(fh, constant);
      fprintf(fh, ")");
      break;
    default:
      fprintf(fh, "???");
  }
}

static void err_print_constant(FUNKY_CONSTANT *constant) {
  print_constant(stderr, constant);
}

static void dump_namespace(FUNKY_NAMESPACE *namespace) {
  printf("    %s-", namespace->namespace);
  if (namespace->major < INT_MAX) {
    printf("%d.%d\n", namespace->major, namespace->minor);
  } else {
    printf("unstable\n");
  }
}

static void dump_module(void) {
  int i, j;
  printf("module \"%s\"\n", current_module->name+1);
  if (current_module->defined_namespaces_count > 0) {
    printf("  defined namespaces\n");
    for (i = 0; i < current_module->defined_namespaces_count; ++i) {
      dump_namespace(&current_module->defined_namespaces[i]);
    }
  }
  if (current_module->used_namespaces_count > 0) {
    printf("  used namespaces\n");
    for (i = 0; i < current_module->used_namespaces_count; ++i) {
      dump_namespace(&current_module->used_namespaces[i]);
    }
  }
  if (current_module->constants_count > 0) {
    printf("  constants\n");
    // current_module->constants[0] is a dummy entry
    for (i = 0; i < current_module->constants_count; ++i) {
      FUNKY_CONSTANT *constant = &current_module->constants[i];
      printf("  %4d: ", i);
      print_constant(stdout, constant);
      putchar('\n');
      if (be_verbose && constant->type == FLT_FUNCTION) {
	dump_function(constant, 10);
      }
    }
  }
  if (current_module->variables_count > 0) {
    printf("  variables\n");
    for (i = 0; i < current_module->variables_count; ++i) {
      FUNKY_VARIABLE *variable = &current_module->variables[i];
      printf("  %4d: ", i);
      print_name(variable->name);
      switch (variable->type) {
	case FOT_UNKNOWN:
	  printf(" (unknown)");
	  break;
	case FOT_UNKNOWN_POLYMORPHIC:
	  printf(" (unknown polymorphic)");
	  break;
	case FOT_TYPE:
	  printf(" (type)");
	  break;
	case FOT_OBJECT:
	  printf(" (object)");
	  break;
	case FOT_POLYMORPHIC:
	  printf(" (polymorphic)");
	  break;
	case FOT_INITIALIZED:
	  printf(" = ");
	  print_constant(stdout, &current_module->constants[variable->const_idx-1]);
	  break;
	case FOT_DERIVED:
	  printf(" (derived from ");
	  print_name(variable->parent);
	  putchar(')');
	  break;
	case FOT_UNINITIALIZED:
	  printf("(uninitialized)");
	  break;
	default:
	  printf("???");
      }
      putchar('\n');
      if (variable->type == FOT_TYPE) {
	INTERNAL_METHOD *methods = variable->methods;
	for (j = 0; j < variable->methods_count; ++j) {
	  INTERNAL_METHOD *method = &methods[j];
	  printf("           %s\n", internal_method_names[method->id]);
	}
      }
      if (variable->attributes_count > 0) {
	ATTRIBUTE_DEFINITION *attributes = variable->attributes;
	for (j = 0; j < variable->attributes_count; ++j) {
	  ATTRIBUTE_DEFINITION *attribute = &attributes[j];
	  printf("           ");
	  putchar(attribute->attribute >= 0 ? '/' : '.');
	  if (attribute->attribute == 0) {
	    putchar(':');
	  } else {
	    print_name(current_module->variables[abs(attribute->attribute)-FIRST_VAR].name);
	  }
	  putchar(' ');
	  if (attribute->value > 0) {
	    putchar('<');
	    print_constant(stdout, &current_module->constants[attribute->value-1]);
	    putchar('>');
	  } else {
	    print_name(current_module->variables[-attribute->value-FIRST_VAR].name);
	  }
	  putchar('\n');
	}
      }
    }
  }
}

static void define_namespaces(void) {
  int i;
  if (current_module->defined_namespaces_count > 0) {
    for (i = 0; i < current_module->defined_namespaces_count; ++i) {
      define_namespace(&current_module->defined_namespaces[i]);
    }
  }
}

static void register_symbols(void) {
  int i;
  for (i = 0; i < current_module->variables_count; ++i) {
    FUNKY_VARIABLE *variable = &current_module->variables[i];
    if (
      variable->type != FOT_UNKNOWN &&
      variable->type != FOT_UNKNOWN_POLYMORPHIC
    ) {
      DEBUG
	err_write("  register symbol ");
	err_print_name(variable->name);
	err_write("\n");
      END
      variable->var_idx = next_var_idx++;
      register_symbol(variable);
      if (variable->type == FOT_POLYMORPHIC) {
	if (variable->has_a_setter) {
	  //err_write(" (!)\n");
	  variable->poly_idx =
	    register_polymorphic_function_with_setter(variable->name);
	  DEBUG
	    err_write("  register polymorphic function with setter");
	    err_print_name(variable->name);
	    err_write(" as poly_%d\n", variable->poly_idx);
	  END
	} else {
	  //err_write(" ()\n");
	  variable->poly_idx = register_polymorphic_function(variable->name);
	  DEBUG
	    err_write("  register polymorphic function without setter");
	    err_print_name(variable->name);
	    err_write(" as poly_%d\n", variable->poly_idx);
	  END
	}
      }
    }
  }
}

static void resolve_symbols(void) {
  int i;
  for (i = 0; i < current_module->variables_count; ++i) {
    FUNKY_VARIABLE *variable = &current_module->variables[i];
    switch (variable->type) {
      case FOT_UNKNOWN:
      case FOT_UNKNOWN_POLYMORPHIC: {
	DEBUG
	  err_write("  resolve name ");
	  err_print_name(variable->name);
	  err_write(" as ");
	END
	// if there are attribute definitions then add this variable into
	// the variable chain for this symbol
	FUNKY_VARIABLE *resolved_variable =
	  update_symbol(
	    variable->name, variable->attributes_count > 0 ? variable : NULL);
	variable->name = resolved_variable->name;
	  // replace with fully qualified name
	DEBUG
	  err_print_name(variable->name);
	  err_write("\n");
	END
	if (variable->attributes_count > 0) {
	  variable->link = resolved_variable;
	}
	variable->var_idx = resolved_variable->var_idx;
	break;
      }
      case FOT_TYPE:
      case FOT_OBJECT:
      case FOT_DERIVED: {
	if (variable->parent) {
	  DEBUG
	    err_write("  resolve parent of ");
	    err_print_name(variable->name);
	    err_write(" as ");
	  END
	  FUNKY_VARIABLE *resolved_parent = resolve_symbol(variable->parent);
	  variable->parent = resolved_parent->name;
	    // replace with fully qualified name
	  DEBUG
	    err_print_name(variable->parent);
	    err_write("\n");
	  END
	}
      }
    }
  }
}

static bool *is_redefined;

static void mark_variables(const TAB_NUM *code) {
  ++code; // skip locals count
  TAB_NUM par_count = *code++;
  if (par_count < 0) {
    code += 2*-par_count; // skip parameters
  } else {
    code += par_count; // skip parameters
  }
  next_statement:;
  TAB_NUM functor = *code++;
  TAB_NUM arg_count = *code++;
  if (functor == LET) {
    if (arg_count < 0) {
      code += 2*-arg_count+2; // skip source, attributes and destination
      TAB_NUM var = code[-1];
      if (var >= FIRST_VAR) {
	var = current_module->variables[var-FIRST_VAR].var_idx;
	is_redefined[var] = true;
      }
      goto next_statement;
    }
  }
  code += arg_count; // skip arguments
  TAB_NUM res_count = *code++;
  if (res_count < -1) {
    // IO-call
    res_count = -3-res_count;
  }
  if (res_count < 0) return;
  while (--res_count >= 0) {
    TAB_NUM var = *code++;
    if (var >= FIRST_VAR) {
      var = current_module->variables[var-FIRST_VAR].var_idx;
      is_redefined[var] = true;
    }
  }
  goto next_statement;
}

static void mark_redefined_variables(void) {
  int i, j;
  if (current_module->constants_count > 0) {
    for (i = 0; i < current_module->constants_count; ++i) {
      FUNKY_CONSTANT *constant = &current_module->constants[i];
      if (constant->type == FLT_FUNCTION) {
	mark_variables(constant->tfunc);
      }
    }
  }
}

static const char *namespace_of(const char *name) {
  while (*name++);
  return name;
}

static void reassign_variable_index(FUNKY_VARIABLE *variable) {
  // variable indices must not be of the form
  // 0bxx xxxxxxxx xx000xxx

  bool was_redefined = is_redefined[variable->var_idx];
  switch (variable->type) {
    case FOT_TYPE:
    case FOT_OBJECT:
    case FOT_POLYMORPHIC:
      if (was_redefined) {
	variable->var_idx = next_var_idx++;
	if ((next_var_idx & 070) == 0) next_var_idx += 8;
      } else {
	variable->var_idx =
	  -(constants_count+current_module->additional_constants_count);
	++current_module->additional_constants_count;
      }
      break;
    case FOT_INITIALIZED:
    case FOT_DERIVED:
      if (was_redefined) {
	variable->var_idx = next_var_idx++;
	if ((next_var_idx & 070) == 0) next_var_idx += 8;
      } else {
	if (
	  variable->attributes_count > 0 ||
	  (
	    *namespace_of(variable->name) &&
	    resolve_symbol(variable->name) != variable
	  )
	) {
	  variable->var_idx =
	    -(constants_count+current_module->additional_constants_count);
	  ++current_module->additional_constants_count;
	} else {
	  variable->var_idx = 0; // use the initial value or parent
	}
      }
      break;
    case FOT_UNINITIALIZED:
      variable->var_idx = next_var_idx++;
      if ((next_var_idx & 070) == 0) next_var_idx += 8;
  }
}

static void reassign_variable_indices(void) {
  int i;
  constants_count += current_module->constants_count;
  for (i = 0; i < current_module->variables_count; ++i) {
    reassign_variable_index(&current_module->variables[i]);
  }
  constants_count += current_module->additional_constants_count;
}

extern int dynamics_level;
extern int attributes_level;

static void define_var_or_const(FUNKY_VARIABLE *variable, NODE *node) {
  int var_idx = variable->var_idx;
  if (var_idx < 0) {
    //fprintf(stderr, "define \"%s\" as constant %d\n", variable->name, var_idx);
    TLS_constants[-var_idx] = node;
    const_names[-var_idx] = variable->name;
  } else {
    //fprintf(stderr, "define \"%s\" as dynamic %d\n", variable->name, var_idx);
    OCTREE *interior_p, **interior_pp;
    interior_pp = (OCTREE **)&TLS_frame->dynamics;
    int i = dynamics_level;
    while (--i > 0) {
      interior_p = copy(*interior_pp, sizeof(OCTREE));
      *interior_pp = interior_p;
      interior_pp = &interior_p->nodes[(var_idx >> 3*i) & 7];
    }
    interior_p = copy(*interior_pp, sizeof(OCTREE));
    *interior_pp = interior_p;
    interior_p->nodes[var_idx & 7] = (void *)node;
    var_names[var_idx] = variable->name;
  }
}

static NODE *get_var_or_const(int var_idx) {
  if (var_idx < 0) {
    //fprintf(stderr, "get literal %d\n", var_idx);
    return TLS_constants[-var_idx];
  } else {
    //fprintf(stderr, "get var %d\n", var_idx);
    TREE *interior_p = TLS_frame->dynamics;
    int i = dynamics_level;
    while (--i > 0) {
      interior_p = interior_p->branches[(var_idx >> 3*i) & 7];
    }
    return interior_p->nodes[var_idx & 7];
  }
}

static void initialize_object(FUNKY_VARIABLE *variable) {
  if (!variable->is_initialized) {
    int i;
    const char *description;
    switch (variable->type) {
      case FOT_TYPE:
	description = "type";
	goto print;
      case FOT_OBJECT:
	description = "object";
	print:
	DEBUG
	  err_write("  # %s ", description);
	  err_print_name(variable->name);
	END
	int parent_var_idx = 0;
	NODE *parent_node;
	NODE *node;
	ATTRIBUTES *attributes;
	variable->is_initialized = true;
	if (variable->parent) { // mandatory for "object"s
	  DEBUG
	    err_write(" depends on ");
	    err_print_name(variable->parent);
	    err_write("\n");
	  END
	  FUNKY_VARIABLE *parent = get_defined_variable(variable->parent);
	  initialize_object(parent);
	  parent_var_idx = parent->var_idx;
	  parent_node = get_var_or_const(parent_var_idx);
	} else { // can only be reached for "type"s
	  DEBUG
	    err_write(" is a root type\n");
	  END
	}
	DEBUG
	  err_write("  create %s ", description);
	  err_print_name(variable->name);
	  if (variable->var_idx < 0) {
	    err_write(" as const_%d\n", -variable->var_idx);
	  } else {
	    err_write(" as var_%d\n", variable->var_idx);
	  }
	END
	if (variable->type == FOT_TYPE) {
	  INTERNAL_METHOD *methods = variable->methods;
	  VTABLE *vtable = allocate_memory(sizeof(VTABLE));
	  if (parent_var_idx == 0) {
	    DEBUG
	      err_write("    create a default vtable\n");
	    END
	    vtable->size = sizeof(SIMPLE_NODE); // set a default size
	  } else {
	    DEBUG
	      err_write("    copy the vtable of ");
	      err_print_name(variable->parent);
	      err_write("\n");
	    END
	    memcpy(vtable, parent_node->attributes->vtable, sizeof(VTABLE));
	  }
	  for (i = 0; i < variable->methods_count; ++i) {
	    INTERNAL_METHOD *method = &methods[i];
	    DEBUG
	      err_write(
		"      add internal method for %s\n",
		internal_method_names[method->id]);
	    END
	    ((void **)vtable)[method->id] = method->address;
	  }
	  attributes = allocate(sizeof(ATTRIBUTES));
	  attributes->vtable = vtable;
	} else { // FOT_OBJECT
	  // ATTENTION: Is this really necessary?
	  // (we no longer initialize derived objects here)
	  if (
	    variable->attributes_count > 0 ||
	    resolve_symbol(variable->name) != variable
	  ) {
	    DEBUG
	      err_write("  create fresh attributes for ");
	      err_print_name(variable->name);
	      err_write("\n");
	    END
	    attributes = allocate(sizeof(ATTRIBUTES));
	    attributes->vtable = parent_node->attributes->vtable;
	  } else {
	    attributes = parent_node->attributes;
	  }
	}
	DEBUG
	  err_write("    use the preallocated static node\n");
	END
	node = variable->node; // the initialized node
	node->attributes = attributes;
	define_var_or_const(variable, node);
    }
  }
}

static void initialize_types_and_objects(void) {
  int i;
  /*fprintf(stderr, "%s: %d + %d\n",
    current_module->name+1,
    current_module->constants_count,
    current_module->additional_constants_count);*/
  current_module->constants_base = constants_base;
  for (i = 0; i < current_module->variables_count; ++i) {
    initialize_object(&current_module->variables[i]);
  }
  constants_base +=
    current_module->constants_count+current_module->additional_constants_count;
}

static void set_module_backreferences(void) {
  int i;
  for (i = 0; i < current_module->variables_count; ++i) {
    current_module->variables[i].module = current_module;
  }
}

EXPORT TAB_NUM encode_var_idx(TAB_NUM var_idx) {
  if (var_idx < 0) {// variable converted into constant
    return 0x10000-var_idx;
  } else {
    int idx = 0;
    int i = 0;
    while (++i < dynamics_level) {
      idx = (idx << 3) | ((var_idx >> 3*i) & 7);
    }
    idx = (idx << 19) | (var_idx & 7);
    return idx;
  }
}

EXPORT TAB_NUM encode_attr_idx(TAB_NUM attr_idx) {
  int idx = 0;
  int i;
  for (i = 0; i < attributes_level; ++i) {
    idx <<= 3;
    idx |= attr_idx & 7;
    attr_idx >>= 3;
  }
  return idx;
}

static TAB_NUM relocate_argument(TAB_NUM idx) {
  if (idx < 0) { // constant
    return 0x10000|(current_module->constants_base-TLS_constants-idx-1);
  } else if (idx >= FIRST_VAR) { // dynamic variable
    return encode_var_idx(current_module->variables[idx-FIRST_VAR].var_idx);
  } else { // local variable
    return idx;
      // the offset to skip the frame's other fields was already added
      // by the compiler
  }
}

static void relocate_function(TAB_NUM *code) {
  ++code; // skip locals count
  TAB_NUM par_count = *code++;
  if (par_count < 0) {
    while (++par_count <= 0) {
      TAB_NUM val = *code++;
      *code = relocate_argument(*code);
      ++code;
      if (val < MANDATORY_PARAMETER || val > MYSELF_PARAMETER) {
	// optional parameter with default value
	code[-2] = relocate_argument(val);
      }
    }
  } else {
    while (--par_count >= 0) {
      *code = relocate_argument(*code);
      ++code;
    }
  }
  relocate_statement:;
  TAB_NUM *functor_p = code;
  TAB_NUM functor = *code++;
  TAB_NUM arg_count = *code++;
  if (functor == LET) {
    if (arg_count < 0) {
      *code = relocate_argument(*code); // relocate source
      ++code;
      // assign attributes
      while (++arg_count <= 0) {
	TAB_NUM attr_var = *code;
	if (attr_var < 0) { // method
	  *code = -current_module->variables[-attr_var-FIRST_VAR].poly_idx;
	} else if (attr_var > 0) { // attribute
	  *code = current_module->variables[attr_var-FIRST_VAR].poly_idx;
	} // otherwise it's a type function
	++code;
	*code = relocate_argument(*code); // relocate value
	++code;
      }
      *code = relocate_argument(*code); // relocate destination
      ++code;
      goto relocate_statement;
    }
  } else {
    *functor_p = relocate_argument(functor);
  }
  while (--arg_count >= 0) {
    *code = relocate_argument(*code);
    ++code;
  }
  TAB_NUM res_count = *code++;
  if (res_count < -1) {
    // IO-call
    res_count = -3-res_count;
    code[-1] = res_count; // fix <res_count>
    *functor_p = -*functor_p; // mark <functor> as IO-call
  }
  if (res_count < 0) return;
  while (--res_count >= 0) {
    *code = relocate_argument(*code);
    ++code;
  }
  goto relocate_statement;
}

static NODE *create_constant(FUNKY_CONSTANT *constant) {
 switch (constant->type) {
    case FLT_FUNCTION:
      return create_function(constant->tfunc);
    case FLT_C_FUNCTION:
      return create_c_function(constant->func, constant->count);
    case FLT_POSITIVE_INT64:
      return from_uint64(constant->value);
    case FLT_NEGATIVE_INT64:
      return create__negative_integer(constant->value);
    case FLT_REAL:
      return from_double(constant->real_value);
    case FLT_STRING_8:
      return from_latin_1_string((const uint8_t *)constant->str_8, constant->count);
    //case FLT_STRING_16:
    case FLT_STRING_32:
      return from_uint32_string(constant->str_32, constant->count);
    case FLT_CHARACTER:
      return from_uchar32(constant->value);
    case FLT_UNIQUE:
      return register_unique_item(constant->str_8);
    case FLT_TUPLE:
    case FLT_KEY_VALUE_PAIR:
    case FLT_VALUE_RANGE:
      return create_tuple(constant->count);
    case FLT_LIST:
    case FLT_SEQUENCE:
      return create_list(constant->count);
    default:
      unrecoverable_error("Unknown constant type (%d)!", constant->type);
  }
}

static void initialize_constants(void) {
  int i;
  if (current_module->constants_count > 0) {
    for (i = 0; i < current_module->constants_count; ++i) {
      DEBUG
	err_write("  create ");
	err_print_constant(&current_module->constants[i]);
	err_write(
	  " as const_%d\n", current_module->constants_base-TLS_constants+i+1);
      END
      current_module->constants_base[i] =
        create_constant(&current_module->constants[i]);
    }
  }
}

static void debug_info_create_variable(
  FUNKY_VARIABLE *variable,
  FUNKY_VARIABLE *parent
) {
  err_write("  create variable ");
  err_print_name(variable->name);
  if (variable->var_idx < 0) {
    err_write(" as const_%d\n", -variable->var_idx);
  } else if (variable->var_idx > 0) {
    err_write(" as var_%d\n", variable->var_idx);
  } else {
    if (variable->type == FOT_INITIALIZED) {
    } else if (variable->type == FOT_DERIVED) {
      if (parent->var_idx < 0) {
	err_write(" as a clone of const_%d\n", -parent->var_idx);
      } else {
	err_write(" as a clone of var_%d\n", parent->var_idx);
      }
    }
  }
  if (variable->type == FOT_DERIVED) {
    err_write("    it is derived from ");
    err_print_name(parent->name);
    err_write("\n");
  }
}

static void initialize_variable(FUNKY_VARIABLE *variable) {
  if (!variable->is_initialized) {
    NODE *node;
    variable->is_initialized = true;
    switch (variable->type) {
      case FOT_INITIALIZED:;
        int const_offset = variable->module->constants_base-TLS_constants;
        int const_idx = variable->const_idx-1;
	if (variable->var_idx == 0) {
          variable->var_idx = -(const_offset+const_idx);
	}
	DEBUG
	  err_write("  create variable ");
	  err_print_name(variable->name);
	  if (variable->var_idx < 0) {
	    err_write(" as const_%d\n", -variable->var_idx);
	  } else {
	    err_write(
	      " as var_%d and initialize it with const_%d\n",
	      variable->var_idx, const_offset+const_idx);
	  }
	END
	if (variable->var_idx == 0) break;
	node = variable->module->constants_base[const_idx];
	goto maybe_clone_node;
      case FOT_DERIVED:;
	FUNKY_VARIABLE *parent = get_defined_variable(variable->parent);
	initialize_variable(parent);
	DEBUG
	  debug_info_create_variable(variable, parent);
	END
	if (variable->var_idx == 0) {
	  variable->var_idx = parent->var_idx;
	  break;
	}
	node = get_var_or_const(parent->var_idx);
        maybe_clone_node:
	// we can reach this point
	// * if the variable is reassigned
	// * or there are attribute definitions
        if ( // check for local or external attribute definitions
          variable->attributes_count > 0 ||
          (
            *namespace_of(variable->name) &&
            resolve_symbol(variable->name) != variable
          )
        ) {
	  DEBUG
	    err_write("    clone its node (it has attribute definitions)\n");
	  END
	  size_t size = node->attributes->vtable->size;
	  NODE *orig_node = node;
	  node = allocate(size);
	  node->type = orig_node->type;
	  node->attributes = orig_node->attributes;
	  if (size > sizeof(SIMPLE_NODE)) {
	    node->type = NULL;
	    *(void **)(((SIMPLE_NODE *)node)+1) = orig_node;
	  }
	}
	define_var_or_const(variable, node);
	break;
      case FOT_POLYMORPHIC:
	DEBUG
	  err_write("  create variable ");
	  err_print_name(variable->name);
	  if (variable->var_idx < 0) {
	    err_write(" as const_%d\n", -variable->var_idx);
	  } else {
	    err_write(" as var_%d\n", variable->var_idx);
	  }
	END
	if (variable->has_a_setter) {
	  NODE *node =
	    create_polymorphic_function_with_setter(encode_attr_idx(variable->poly_idx));
	  define_var_or_const(variable, node);
	} else {
	  NODE *node = create_polymorphic_function(encode_attr_idx(variable->poly_idx));
	  define_var_or_const(variable, node);
	}
	break;
      case FOT_UNINITIALIZED:
	var_names[variable->var_idx] = variable->name;
    }
  }
}

static void initialize_variables(void) {
  int i;
  for (i = 0; i < current_module->variables_count; ++i) {
    initialize_variable(&current_module->variables[i]);
  }
}

static void resolve_external_references(void) {
  int i;
  for (i = 0; i < current_module->variables_count; ++i) {
    FUNKY_VARIABLE *variable = &current_module->variables[i];
    if (
      variable->type == FOT_UNKNOWN ||
      variable->type == FOT_UNKNOWN_POLYMORPHIC
    ) {
      FUNKY_VARIABLE *defined_variable;
      DEBUG
	err_write("  resolve ");
	err_print_name(variable->name);
      END
      defined_variable = get_defined_variable(variable->name);
      variable->var_idx = defined_variable->var_idx;
      DEBUG
	if (variable->var_idx < 0) {
	  err_write(" as const_%d\n", -variable->var_idx);
	} else {
	  err_write(" as var_%d\n", variable->var_idx);
	}
      END
      // copy variable and polymorphic indices
      if (variable->type == FOT_UNKNOWN_POLYMORPHIC) {
	if (
	  defined_variable->type == FOT_POLYMORPHIC
	) {
	  variable->poly_idx = defined_variable->poly_idx;
	} else {
	  const char *separator, *namespace;
	  split_name(variable->name, &separator, &namespace);
	  unrecoverable_error(
	    "The symbol \"%s%s%s\" needed by the module \"%s\" as a polymorphic "
	    "function is defined in the module \"%s\" but is not a polymorphic "
	    "function!\n",
	    namespace, separator, variable->name,
	    current_module->name+1, defined_variable->module->name+1);
	}
      }
    }
  }
}

extern OCTREE *undefined_attributes;
extern OCTREE *no_attributes;

static void initialize_attributes(FUNKY_VARIABLE *defined_variable) {
  if (defined_variable->attributes_count < 0) return; // already initialized

  FUNKY_VARIABLE *variable =
    *namespace_of(defined_variable->name) ?
    resolve_symbol(defined_variable->name) :
    defined_variable;

  int has_attribute_definitions =
    defined_variable->attributes_count > 0 ||
    variable != defined_variable;

  int i, var_idx;
  NODE *node;

  if (
    has_attribute_definitions ||
    defined_variable->type == FOT_TYPE ||
    defined_variable->type == FOT_OBJECT ||
    defined_variable->type == FOT_DERIVED
  ) {
    var_idx = defined_variable->var_idx;
    node = get_var_or_const(var_idx);
  }

  if (defined_variable->type == FOT_TYPE && !defined_variable->parent) {
    DEBUG
      err_write("  set all attributes of ");
      err_print_name(defined_variable->name);
      err_write(" to <undefined>\n");
    END
    if (strcmp(defined_variable->name, "object") == 0) {
      for (i = 0; i < 7; ++i) {
	node->attributes->nodes[i] = undefined_attributes;
      }
    } else {
      for (i = 0; i < 7; ++i) {
	node->attributes->nodes[i] = no_attributes;
      }
    }
  } else {
    switch (defined_variable->type) {
      case FOT_DERIVED:
      case FOT_TYPE:
      case FOT_OBJECT:;
	FUNKY_VARIABLE *parent = get_defined_variable(defined_variable->parent);
	initialize_attributes(parent);
	int parent_var_idx = parent->var_idx;
	NODE *parent_node = get_var_or_const(parent_var_idx);
	if (defined_variable->type == FOT_DERIVED) {
	  if (has_attribute_definitions) {
	    // allocate fresh attributes
	    node->attributes = allocate(sizeof(ATTRIBUTES));
	    node->attributes->vtable = parent_node->attributes->vtable;
	  } else { // simply use parent's attributes
	    node->attributes = parent_node->attributes;
	    defined_variable->attributes_count = -1; // mark as initialized
	    return;
	  }
	}
	DEBUG
	  err_write("  inherit attributes of ");
	  err_print_name(defined_variable->name);
	  err_write(" from ");
	  err_print_name(parent->name);
	  if (parent_var_idx < 0) {
	    err_write(" (const_%d)\n", -parent_var_idx);
	  } else {
	    err_write(" (var_%d)\n", parent_var_idx);
	  }
	END
	if (defined_variable->type == FOT_DERIVED) {
	  node->type = parent_node->type;
	}
	for (i = 0; i < 7; ++i) { // clone all attribute trees
	  node->attributes->nodes[i] = parent_node->attributes->nodes[i];
	}
	break;
      default:
	if (has_attribute_definitions) {
	  // clone attributes
	  DEBUG
	    err_write("  clone attributes of ");
	    err_print_name(defined_variable->name);
	    err_write(" (var_%d)\n", var_idx);
	  END
	  ATTRIBUTES *attributes = allocate(sizeof(ATTRIBUTES));
	  *attributes = *node->attributes;
	  node->attributes = attributes;
	}
    }
  }

  if (has_attribute_definitions) {
    DEBUG
      err_write("  initialize attributes and methods for ");
      err_print_name(defined_variable->name);
      if (var_idx < 0) {
	err_write(" (const_%d)\n", -var_idx);
      } else {
	err_write(" (var_%d)\n", var_idx);
      }
    END
    update_start_p = node_p;
    ++poly_marker;
    while (true) {
      FUNKY_MODULE *module = variable->module;
      DEBUG
	err_write("    from module %s\n", module->name+1);
      END
      ATTRIBUTE_DEFINITION *attributes = variable->attributes;
      for (i = 0; i < variable->attributes_count; ++i) {
	ATTRIBUTE_DEFINITION *attribute = &attributes[i];
	int attr_id = attribute->attribute;
	int poly_idx;
	if (attr_id == TYPE_FUNCTION) {
	  DEBUG
	    err_write("      add type function");
	  END
	} else {
	  poly_idx = module->variables[abs(attr_id)-FIRST_VAR].poly_idx;
	  DEBUG
	    err_write("      add ");
	    err_print_name(module->variables[abs(attr_id)-FIRST_VAR].name);
	    err_write(
	      " (poly_%d) as %s",
	      poly_idx,
	      attr_id > 0 ? "method" : "attribute value");
	  END
	}
	NODE *value_node;
	if (attribute->value > 0) { // constant
	  DEBUG
	    err_write(
	      " (const_%d)\n",
	      current_module->constants_base-TLS_constants+attribute->value);
	  END
	  value_node = (module->constants_base)[attribute->value-1];
	} else { // variable
	  FUNKY_VARIABLE *variable = &module->variables[-attribute->value-FIRST_VAR];
	  int var_idx = variable->var_idx;
	  DEBUG
	    if (var_idx < 0) {
	      err_write(" (const_%d)\n", -var_idx);
	    } else {
	      err_write(" (var_%d)\n", var_idx);
	    }
	  END
	  value_node = get_var_or_const(var_idx);
	}
	if (attr_id == TYPE_FUNCTION) {
	  node->type = value_node->type;
	} else {
	  if (poly_marker_table[poly_idx] == poly_marker) {
	    const char *obj_name, *obj_separator, *obj_namespace;
	    obj_name = defined_variable->name;
	    split_name(obj_name, &obj_separator, &obj_namespace);
	    const char *name, *separator, *namespace;
	    name = module->variables[abs(attr_id)-FIRST_VAR].name;
	    split_name(name, &separator, &namespace);
	    unrecoverable_error(
	      "The polymorphic function \"%s%s%s\" for the object \"%s%s%s\" "
	      "is defined in the module \"%s\" and again in the module \"%s\"!",
	      namespace, separator, name,
	      obj_namespace, obj_separator, obj_name,
	      module->name+1, poly_marker_info[poly_idx]->module->name+1);
	  }
	  poly_marker_table[poly_idx] = poly_marker;
	  poly_marker_info[poly_idx] = variable;
	  if (attr_id > 0) {
	    set_attribute(node->attributes, poly_idx, value_node);
	  } else {
	    set_attribute(
	      node->attributes, poly_idx, MAKE_ATTRIBUTE_VALUE(value_node));
	  }
	}
      }
      if (variable == defined_variable) break;
      variable = variable->link;
    };
  }

  defined_variable->attributes_count = -1; // mark as initialized
}

static void initialize_all_attributes(void) {
  int i;
  for (i = 0; i < current_module->variables_count; ++i) {
    FUNKY_VARIABLE *variable = &current_module->variables[i];
    if (
      variable->type != FOT_UNKNOWN &&
      variable->type != FOT_UNKNOWN_POLYMORPHIC
    ) {
      initialize_attributes(variable);
    }
  }
}

static void initialize_tuples_lists_and_functions(void) {
  int i, j;
  if (current_module->constants_count > 0) {
    NODE **current_constants = current_module->constants_base;
    for (i = 0; i < current_module->constants_count; ++i) {
      FUNKY_CONSTANT *constant = &current_module->constants[i];
      switch (constant->type) {
	case FLT_FUNCTION:
	  relocate_function(constant->tfunc);
	  break;
	case FLT_TUPLE:
	case FLT_KEY_VALUE_PAIR:
	case FLT_VALUE_RANGE:
	case FLT_LIST:
	case FLT_SEQUENCE:;
	  NODE *node = (current_module->constants_base)[i];
	  switch (constant->type) {
	    case FLT_KEY_VALUE_PAIR:
	      node->type = std_types___key_value_pair.type;
	      node->attributes = std_types___key_value_pair.attributes;
	      break;
	    case FLT_VALUE_RANGE:
	      node->type = std_types___value_range.type;
	      node->attributes = std_types___value_range.attributes;
	      break;
	    case FLT_SEQUENCE:
	      node->type = std_types___sequence.type;
	      node->attributes = std_types___sequence.attributes;
	      break;
	  }
	  const int *arguments = constant->arguments;
	  for (j = 0; j < constant->count; ++j) {
	    NODE *value;
	    int idx = arguments[j];
	    DEBUG
	      err_write("  set item %d in ", j);
	      err_print_constant(constant);
	    END
	    if (idx > 0) {
	      value = (current_module->constants_base)[idx-1];
	      DEBUG
		err_write(" to const_%d\n", idx);
	      END
	    } else {
	      int var_idx = current_module->variables[-idx-FIRST_VAR].var_idx;
	      value = get_var_or_const(var_idx);
	      DEBUG
		err_write(" to var_%d\n", var_idx);
	      END
	    }
	    switch (constant->type) {
	      case FLT_TUPLE:
	      case FLT_KEY_VALUE_PAIR:
	      case FLT_VALUE_RANGE:
		set_tuple_item(node, j, value);
		break;
	      case FLT_LIST:
	      case FLT_SEQUENCE:;
		set_list_item(node, j, value);
		break;
	      default:;
	    }
	  }
	default:;
      }
    }
  }
}

static void copy_additional_fields(void) {
  int i;
  for (i = 0; i < current_module->variables_count; ++i) {
    FUNKY_VARIABLE *variable = &current_module->variables[i];
    switch (variable->type) {
      case FOT_INITIALIZED:
      case FOT_DERIVED: {
	NODE *node = get_var_or_const(variable->var_idx);
	if (node->type == NULL) {
	  DEBUG
	    err_write("  copy additional fields of variable ");
	    err_print_name(variable->name);
	    err_write("\n");
	  END
	  NODE *orig_node = *(void **)(((SIMPLE_NODE *)node)+1);
	  node->type = orig_node->type;
	  size_t size = orig_node->attributes->vtable->size;
	  memcpy(
	    ((SIMPLE_NODE *)node)+1,
	    ((SIMPLE_NODE *)orig_node)+1,
	    size-sizeof(SIMPLE_NODE));
	}
      }
    }
  }
}

static void count_modules(void) {
  ++funky_module_count;
}

static void build_module_table(void) {
  funky_modules[funky_module_count++] = current_module;
}

static void process_module(FUNKY_MODULE *module, FUNC action, const char *msg) {
  int i;
  module->marker = marker;
  for (i = 0; i < module->required_modules_count; ++i) {
    FUNKY_MODULE *required_module = module->required_modules[i];
    if (required_module->marker != marker) {
      process_module(required_module, action, msg);
    }
  }
  DEBUG
    err_info("%s for module \"%s\"", msg, module->name+1);
  END
  current_module = module;
  action();
}

EXPORT void traverse(FUNC action, const char *msg) {
  DEBUG
    err_header(msg);
  END
  ++marker; // next pass
  process_module(&module__builtin, action, msg);
  process_module(main_module, action, msg);
}

EXPORT void pass(FUNC action, const char *msg) {
  int i;
  DEBUG
    err_header(msg);
  END
  for (i = 0; i < funky_module_count; ++i) {
    process_module(funky_modules[i], action, msg);
  }
}

EXPORT void dump_all() {
  traverse(dump_module, "dump modules");
}

// define namespaces

// register all symbols and polymorphic functions

// resolve all symbols (including parents) and build attribute definition chains

// recursively initialize all objects of type FOT_TYPE and FOT_OBJECT

// initialize constants and variables

// resolve all objects of type FOT_UNKNOWN and FOT_UNKNOWN_POLYMORPHIC

// recursively initialize attributes for all objects of type FOT_TYPE,
// and FOT_OBJECT

// recursively initialize attributes of all objects of type FOT_INITIALIZED and
// FOT_DERIVED

static void allocate_polymarker_tables(void) {
  size_t poly_marker_size =
    next_polymorphic_function > next_polymorphic_function_with_setter ?
    next_polymorphic_function :
    next_polymorphic_function_with_setter;
  size_t poly_marker_table_size = poly_marker_size*sizeof(int);
  size_t poly_marker_info_size = poly_marker_size*sizeof(FUNKY_VARIABLE *);
  poly_marker_table = allocate_linktime(poly_marker_table_size);
  memset(poly_marker_table, 0, poly_marker_table_size);
  poly_marker_info = allocate_linktime(poly_marker_info_size);
}

extern void initialize_memory(void);

EXPORT void initialize_all(void) {
  funky_module_count = 0;
  traverse(count_modules, "Count Modules");
  DEBUG
    err_info("There are %d modules.", funky_module_count);
  END
  funky_modules = malloc(funky_module_count*sizeof(FUNKY_MODULE *));
  funky_module_count = 0;
  traverse(build_module_table, "Build Module Table");
  pass(define_namespaces, "Define Namespaces");
  pass(register_symbols, "Register Symbols");
  pass(resolve_symbols, "Resolve Symbols");
  is_redefined = allocate_linktime(next_var_idx);
  memset(is_redefined, false, next_var_idx);
  pass(mark_redefined_variables, "Mark Redefined Variables");
  next_var_idx = 8;
  pass(reassign_variable_indices, "Recompute constants count");
  //fprintf(stderr, "%d constants + %d variables\n", constants_count, next_var_idx);
  /*fprintf(stderr,
    "highest polymorphic function: %d\n"
    "highest polymorphic function with setter: %d\n",
    next_polymorphic_function-2,
    next_polymorphic_function_with_setter-2);*/
  var_names = allocate(next_var_idx*sizeof(char *));
  const_names = allocate(constants_count*sizeof(char *));
  memset(const_names, 0, constants_count*sizeof(char *));
  initialize_memory();
  constants_base = TLS_constants+3; // the first 3 are for internal use
  pass(initialize_types_and_objects, "Initialize Types and Objects");
  pass(set_module_backreferences, "Set Module Backreferences");
  pass(initialize_constants, "Initialize Constants");
  pass(initialize_variables, "Initialize Variables");
  pass(resolve_external_references, "Resolve External References");
  pass(initialize_tuples_lists_and_functions, "Initialize Tuples, Lists and Functions");
  pass(copy_additional_fields, "Copy additional Fields");
  allocate_polymarker_tables();
  pass(initialize_all_attributes, "Initialize Attributes");
  DEBUG
    err_header("INITIALIZATION COMPLETE");
  END
}
