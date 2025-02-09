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

#include <inttypes.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/mman.h>
#include <setjmp.h>
#include <unistd.h>
#include <sys/prctl.h>
#include <sys/types.h>
#include <sys/wait.h>

#include "common.h"
#include "builtins.h"
#include "fko.h"
#include "linker.h"
#include "memory.h"
#include "interpreter.h"
#include "profiler.h"
#include "debugger.h"

#if !defined(MAP_ANONYMOUS) && defined(MAP_ANON)
  #define MAP_ANONYMOUS MAP_ANON
#endif

EXPORT int do_debug = false;

EXPORT SHARED_DEBUG_DATA *sdd;

static int is_identifier_character(char chr) {
  return
    chr >= 'a' && chr <= 'z' || chr >= 'A' && chr <= 'Z' ||
    chr == '_' || chr >= '0' && chr <= '9';
}

static char *parse_identifier(char **pp) {
  char *p = *pp;
  char *identifier = p;
  while (is_identifier_character(*p)) {
   ++p;
  }
  if (p > identifier) {
    *pp = p;
    return identifier;
  } else {
    return NULL;
  }
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
  printf("m");
  for (int i = 0; i < funky_module_count; ++i) {
    printf(":%s", funky_modules[i]->filename);
  }
  printf("\n");
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
  if (code < p+res_count) {
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
      if (constant->type == FLT_FUNCTION) {
	if (do_debug) {
	  if (code >= constant->func_info->code) {
	    stmt = find_call(
	      constant->func_info->code, code, line_no_p, column_no_p);
	    if (stmt) {
	      *module_name_p = current_module->filename;
	      goto get_functor_name;
	    }
	  }
	} else {
	  const TAB_NUM *tfunc =
	    current_module->feature_flags & FEAT_FUNCTION_INFO
	    ? constant->func_info->code
	    : constant->tfunc;
	  if (code >= tfunc) {
	    stmt = find_call(tfunc, code, line_no_p, column_no_p);
	    if (stmt) {
	      *module_name_p = current_module->filename;
	      goto get_functor_name;
	    }
	  }
	}
      }
    }
  }
  *module_name_p = "<unknown>";
  *function_name_p = "<unknown>";
}

void list_code_positions(const char *module_name) {
  int i, j, k;
  for (i = 0; i < funky_module_count; ++i) {
    current_module = funky_modules[i];
    if (strcmp(current_module->filename, module_name) == 0) {
      printf("c:%s", module_name);
      for (j = 0; j < current_module->constants_count; ++j) {
	FUNKY_CONSTANT *constant = &current_module->constants[j];
	if (constant->type == FLT_FUNCTION) {
	  FUNCTION_INFO *func_info = constant->func_info;
	  const TAB_NUM *positions = func_info->code_end;
	  for (k = 0; k < func_info->position_count; ++k) {
	    int line_no = positions[k] >> 16;
	    int column_no = positions[k] & 0xffff;
	    printf(":%d:%d", line_no, column_no);
	  }
	}
      }
      printf("\n");
    }
  }
}

const TAB_NUM *get_code_position(
  const char *module_name, int line_no, int column_no
) {
  int i, j, k;
  TAB_NUM line_and_column = (line_no << 16) | column_no;
  for (i = 0; i < funky_module_count; ++i) {
    current_module = funky_modules[i];
    if (strcmp(current_module->filename, module_name) == 0) {
      for (j = 0; j < current_module->constants_count; ++j) {
	FUNKY_CONSTANT *constant = &current_module->constants[j];
	if (constant->type == FLT_FUNCTION) {
	  FUNCTION_INFO *func_info = constant->func_info;
	  const TAB_NUM *positions = func_info->code_end;
	  const TAB_NUM *p = func_info->code;
	  ++p; // skip temp count
	  TAB_NUM par_count = *p++;
	  if (par_count < 0) {
	    p -= 2*par_count;
	  } else {
	    p += par_count;
	  }
	  for (k = 0; k < func_info->position_count; ++k) {
	    if (positions[k] == line_and_column) {
	      return p;
	    }
	    ++p; // skip functor
	    TAB_NUM arg_count = *p++;
	    if (arg_count < 0) { // assign attributes
	      p += 2*(-arg_count)+2; // 1 object + 1 destination
	      continue; // there are no results
	    } else {
	      p += arg_count;
	    }
	    TAB_NUM res_count = *p++;
	    if (res_count >= 0) {
	      p += res_count;
	    }
	  }
	}
      }
    }
  }
  return NULL;
}

void set_breakpoint(const char *module_name, int line_no, int column_no) {
  printf("b+%s:%d:%d\n", module_name, line_no, column_no);
}

long prev_instruction_pointer = -1;

SHARED_DEBUG_DATA *create_snapshot(void) {
  SHARED_DEBUG_DATA *sd = mmap(
    NULL, sizeof(SHARED_DEBUG_DATA),
    PROT_READ|PROT_WRITE,
    MAP_ANONYMOUS|MAP_SHARED,
    0, 0);
  memset(sd, 0, sizeof(SHARED_DEBUG_DATA));
  while (true) {
    int pid = fork();
    if (pid == 0){
      prctl(PR_SET_PDEATHSIG, SIGKILL);
	// kill the child process if the parent process is killed
      printf("R:%ld\n", instruction_counter);
      return sd; // let the child process do the actual work
    }
    if (pid < 0) {
      unrecoverable_error("Failed to fork a child process for debugging!");
    }
    int status;
    waitpid(pid, &status, 0);
    //fprintf(stderr, "Child process %d exited with status %d\n",
    //  pid, WEXITSTATUS(status));
    if (WEXITSTATUS(status) != RESPAWN) exit(status);
    //fprintf(stderr, "break at: %ld\n", sd->break_at);
    reset_log_file();
  }
}

void debug(void) {
  char cmd[256];
  sdd->io_occurred = false;
  sdd->break_on_io = false;
  sdd->break_at = 0;
  sdd->break_on_return = false;
  sdd->break_code_start = NULL;
  sdd->break_code_end = NULL;
  sdd->backstep_start = 0;
  sdd->best_backstep_position = 0;
  print_prompt:
  if (instruction_counter != prev_instruction_pointer) {
    prev_instruction_pointer = instruction_counter;
    printf("p:%ld:%ld\n", instruction_counter, (char *)TLS_frame->link-stack);
  }
  fflush(stdout);
  int i = 0;
  while (true) {
    char chr = getchar();
    if (chr == '\n') break;
    if (i < 256) cmd[i] = chr;
    ++i;
  }
  if (i < 256) {
    if (i == 0) {
      if (*sdd->last_cmd) {
	strcpy(cmd, sdd->last_cmd);
      } else goto print_prompt;
    } else {
      cmd[i] = 0;
      strcpy(sdd->last_cmd, cmd);
    }
    switch (cmd[0]) {
      case 'a': // skip initializers
	if (sdd->has_completed_initializers) goto print_prompt;
	sdd->do_break_after_initializers = true;
	break;
      case 'b': // set breakpoint - module_name:line_no:column_no
	{
	  char *p = cmd+1;
	  while (*p == ' ') ++p;
	  char *module_name = p;
	  while (*p && *p != ':') ++p;
	  if (*p == ':') {
	    *p++ = 0;
	    char *line_no_str = p;
	    while (*p && *p != ':') ++p;
	    if (*p == ':') {
	      *p++ = 0;
	      if (!*module_name) {
		printf("E:No module specified\n");
		goto print_prompt;
	      }
	      int line_no = atoi(line_no_str);
	      if (line_no == 0) {
		printf("E:Invalid line number!\n");
		goto print_prompt;
	      }
	      char *column_no_str = p;
	      while (*p) ++p;
	      int column_no = atoi(column_no_str);
	      if (column_no == 0) {
		printf("E:Invalid column number!\n");
		goto print_prompt;
	      }
	      set_breakpoint(module_name, line_no, column_no);
	      goto print_prompt;
	    } else {
	      printf("E:No column number specified!\n");
	      goto print_prompt;
	    }
	  } else {
	    printf("E:No line number specified!\n");
	    goto print_prompt;
	  }
	}
      case 'c': // continue forwards
	break;
      case 'e' : // exit function
	sdd->break_frame = TLS_frame->link;
	sdd->break_on_return = true;
	break;
      case 'E': // exit function backwards
	sdd->break_frame = TLS_frame->link;
	sdd->break_on_return = true;
	sdd->backstep_start = instruction_counter;
	exit(RESPAWN);
      case 'l': // list
	switch (cmd[1]) {
	  case 'g': // global variables
	    list_global_symbol_names();
	    goto print_prompt;
	  case 'm' : // modules
	    list_module_names();
	    goto print_prompt;
	  case 'c': // code positions - module_name
	    {
	      char *module_name = cmd+2;
	      while (*module_name == ' ') ++module_name;
	      if (*module_name) {
		list_code_positions(module_name);
	      } else {
		printf("E:No module specified\n");
	      }
	      goto print_prompt;
	    }
	  default:
	    printf("E:Unknown list command!\n");
	    goto print_prompt;
	}
      case 'i': // continue until next I/O-operation
	sdd->break_on_io = true;
	break;
      case 'I': // continue until next I/O-operation backwards
	sdd->break_on_io = true;
	sdd->backstep_start = instruction_counter;
	exit(RESPAWN);
      case 'n' : // step over
	sdd->break_frame = TLS_frame->link;
	sdd->break_code_start = function_code_start;
	sdd->break_code_end = function_code_end;
	sdd->break_on_return = true;
	break;
      case 'N': // step over backwards
	if (instruction_counter == 0) {
	  printf("E:Already at the beginning of the program!\n");
	  goto print_prompt;
	}
	sdd->break_frame = TLS_frame->link;
	sdd->break_code_start = function_code_start;
	sdd->break_code_end = function_code_end;
	sdd->break_on_return = true;
	sdd->backstep_start = instruction_counter;
	exit(RESPAWN);
      case 'p': // print - symbol name
	{
	  char *p = cmd+1;
	  while (*p == ' ') ++p;
	  char *name = parse_identifier(&p);
	  if (name) {
	    if (p[0] == ':' && p[1] == ':') {
	      *p = 0;
	      p += 2;
	      char *namespace = name;
	      name = parse_identifier(&p);
	      if (*p) {
		printf("E:Unexpected input at end of line!\n");
		goto print_prompt;
	      }
	      FUNKY_VARIABLE *var = find_symbol(namespace, name);
	      if (!var) {
		printf(
		  "E:Unknown variable \"%s::%s\"!\n", namespace, name);
		goto print_prompt;
	      }
	      NODE *node;
	      if (var->type == FOT_LOCAL) {
		// check for local variables on stack
		FRAME *sp = TLS_frame;
		while (sp) {
		  FUNCTION_INFO *func_info = ((FUNCTION_INFO **)sp)[-1];
		  if (func_info == var->func_info) {
		    node = sp->slots[var->var_idx-4];
		    goto print_contents;
		  }
		  sp = sp->link;
		};
		printf("s:%s::%s:<unavailable>\n", namespace, name);
		goto print_prompt;
	      } else {
		int idx = var->var_idx; // negative for constants
		node = get_var_or_const(idx);
		print_contents:;
		long len = debug_string(node, 0, 1, NULL);
		char *buf = malloc(len+1); // obey terminating null-byte
		debug_string(node, 0, 1, buf);
		buf[len] = 0; // add terminating null-byte
		printf("s:%s::%s:%s", namespace, name, buf);
		// <buf> already contains a terminating '\n'
		free(buf);
		goto print_prompt;
	      }
	    }
	  }
	  printf("E:Invalid variable name!\n");
	  goto print_prompt;
	}
      case 'P': // Ping
	{
	  char *p = cmd+1;
	  while (*p == ' ') ++p;
	  printf("P:%s\n", p);
	  goto print_prompt;
	}
      case 'r': // run - module name:line_no:column_no
      case 'R': // run backwards - module name:line_no:column_no
	{
	  char *p = cmd+1;
	  while (*p == ' ') ++p;
	  char *module_name = p;
	  while (*p && *p != ':') ++p;
	  if (*p == ':') {
	    *p++ = 0;
	    if (!*module_name) {
	      printf("E:No module specified\n");
	      goto print_prompt;
	    }
	    char *line_no_str = p;
	    while (*p && *p != ':') ++p;
	    if (*p == ':') {
	      *p++ = 0;
	      int line_no = atoi(line_no_str);
	      if (line_no == 0) {
		printf("E:Invalid line number!\n");
		goto print_prompt;
	      }
	      char *column_no_str = p;
	      while (*p) ++p;
	      int column_no = atoi(column_no_str);
	      if (column_no == 0) {
		printf("E:Invalid column number!\n");
		goto print_prompt;
	      }
	      const TAB_NUM *code = get_code_position(
		module_name, line_no, column_no);
	      if (!code) {
		printf("E:No code position found!\n");
		goto print_prompt;
	      }
	      sdd->break_code_start = code;
	      sdd->break_code_end = code+1;
	      if (cmd[0] == 'R') {
		sdd->backstep_start = instruction_counter;
		exit(RESPAWN);
	      }
	      break;
	    } else {
	      printf("E:No column number specified!\n");
	      goto print_prompt;
	    }
	  } else {
	    printf("E:No line number specified!\n");
	    goto print_prompt;
	  }
	}
      case 's': // step into
	sdd->break_at = instruction_counter+1;
	break;
      case 'S' : // step into backwards
	if (instruction_counter == 0) {
	  printf("E:Already at the beginning of the program!\n");
	  goto print_prompt;
	}
	sdd->break_at = instruction_counter-1;
	exit(RESPAWN);
      case 't': // dump stack trace
	{
	  const char *module_name, *function_name;
	  int line_no, column_no;
	  retrieve_continuation_info(
	    TLS_code, &module_name, &function_name, &line_no, &column_no);
	  printf("t:%s:", module_name);
	  /*if (function_name) {
	    printf("%s", function_name);
	  }*/
	  if (line_no > 0) {
	    printf("%d:%d\n", line_no, column_no);
	  } else {
	    printf(":\n");
	  }
	  goto print_prompt;
	}
      case 'q':
	exit(EXIT_SUCCESS);
      default:
	printf("E:Unknown command \"%c\"!", cmd[0]);
	goto print_prompt;
    }
  } else {
    printf("E:Command line too long!\n");
    goto print_prompt;
  }
}
