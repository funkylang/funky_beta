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

#include <stdarg.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <inttypes.h>
#include <unistd.h>
#include <sys/types.h>

#include "common.h"
#include "builtins.h"
#include "fko.h"
#include "linker.h"
#include "memory.h"
#include "interpreter.h"
#include "profiler.h"
#include "debugger.h"

/*
  This version of the interpreter is used for

   * profiling

   * tracing

   * debugging
*/

EXPORT const char *count_names[] = {
  "instructions:",
  "garbage collections:",
  "tail calls:",
  "C function calls:",
  "allocate:",
  "set (local):",
  "set (dynamic):",
  "get (local):",
  "get (constant):",
  "get (dynamic):",
  "get_attr:",
  "redefine_attribute:"
};

EXPORT PROFILE profile;

extern int do_profile;
extern int do_trace;

extern char **var_names;
extern char **const_names;

#define BUF_SIZE 1024

static void print_var_or_const(char *buf, TAB_NUM idx) {
  // each node contains exactly 8 entries with the following excpetions:
  // a level-1 node must not contain an entry for index 0
  // a level-0 node (a leaf) can contain up to 65536 entries

  int leaf_idx = idx & 0xffff;
  idx >>= 16;
  switch (idx) {
    case 0:
      sprintf(buf, "temp__%d", leaf_idx-4);
      break;
    case 1:
      if (const_names[leaf_idx]) {
	sprintf(buf, "%s", const_names[leaf_idx]);
      } else {
	sprintf(buf, "const__%d", leaf_idx);
      }
      break;
    default: {
      int branch_idx = 0;
      while (idx) {
	branch_idx <<= 3;
	branch_idx |= idx & 7;
	idx >>= 3;
      }
      sprintf(buf, "%s", var_names[(branch_idx << 3) | leaf_idx]);
    }
  }
}

static const char *poly_name(TAB_NUM idx) {
  return polymorphic_function_names[decode_attribute_index(idx)];
}

static void print_node(char *buf, NODE *node) {
  if (node) {
    int len = debug_string(node, 0, 1, NULL);
    if (len < BUF_SIZE) {
      len = debug_string(node, 0, 1, buf);
      buf[len-1] = 0;
    } else {
      strcpy(buf,"<text too long>");
    }
  } else {
    strcpy(buf, "NULL");
  }
}

static void *my_allocate(long size) {
  ++profile.counts[COUNT_allocate];
  return allocate(size);
}

static void my_set(TREE *tree, int idx, NODE *node) {
  // each node contains exactly 8 entries with the following excpetions:
  // a level-1 node must not contain an entry for index 0
  // a level-0 node (a leaf) can contain up to 65536 entries
  if (do_profile) {
    if (idx >> 16 == 0) {
      ++profile.counts[COUNT_set_local];
    } else {
      ++profile.counts[COUNT_set_dynamic];
    }
  }
  set(tree, idx, node);
}

static NODE *my_get(TREE *tree, int idx) {
  // each node contains exactly 8 entries with the following excpetions:
  // a level-1 node must not contain an entry for index 0
  // a level-0 node (a leaf) can contain up to 65536 entries
  if (do_profile) {
    switch (idx >> 16) {
      case 0:
	++profile.counts[COUNT_get_local];
	break;
      case 1:
	++profile.counts[COUNT_get_constant];
	break;
      default:
	++profile.counts[COUNT_get_dynamic];
    }
  }
  return get(tree, idx);
}

static NODE *my_get_attr(TREE *tree, int idx) {
  ++profile.counts[COUNT_get_attr];
  NODE *attr = get_attr(tree, idx);
  if (do_trace) {
    char result[BUF_SIZE];
    char attr_or_method = '-';
    if ((long)attr & 1) {
      print_node(result, (NODE *)((long)attr-1));
    } else {
      attr_or_method = '=';
      print_node(result, attr);
    }
    fprintf(stderr,
      "%zu: get_attr(%s) %c> %s\n",
      instruction_counter, poly_name(idx), attr_or_method, result);
  }
  return attr;
}

static int my_redefine_attribute(ATTRIBUTES *attributes, int idx, void *attr) {
  ++profile.counts[COUNT_redefine_attribute];
  if (do_trace) {
    char attribute[BUF_SIZE];
    char *attr_or_method = "attribute";
    if ((long)attr & 1) {
      print_node(attribute, (NODE *)((long)attr-1));
    } else {
      attr_or_method = "method";
      print_node(attribute, attr);
    }
    fprintf(stderr,
      "%zu: set_%s(%s, %s)\n",
      instruction_counter, attr_or_method, polymorphic_function_names[idx],
      attribute);
  }
  return redefine_attribute(attributes, idx, attr);
}

static NODE *get_functor(TAB_NUM idx) {
  NODE *node = my_get(&TLS_frame->tree, abs(idx));
  if (do_trace) {
    char index[256], result[BUF_SIZE];
    print_var_or_const(index, abs(idx));
    print_node(result, node);
    fprintf(stderr,
     "%zu: [frame =  %zd] <%d> call%s %s (%s)\n",
      instruction_counter, (char *)TLS_frame-(stack+STACK_SIZE), TLS_deny_io,
      idx < 0 ? "!" : "", index, result);
  }
  return node;
}

static NODE *get_argument(FRAME *frame, TAB_NUM idx) {
  // use the specified frame

  NODE *node = my_get(&frame->tree, idx);
  if (do_trace) {
    char index[256], result[BUF_SIZE];
    print_var_or_const(index, idx);
    print_node(result, node);
    fprintf(stderr,
     "%zu: [frame =  %zd] get_argument(%s) -> %s\n",
      instruction_counter, (char *)frame-(stack+STACK_SIZE), index, result);
  }
  return node;
}

static void set_argument(TAB_NUM idx, NODE *value) {
  // always use the current frame

  if (do_trace) {
    char index[256], result[BUF_SIZE];
    print_var_or_const(index, idx);
    print_node(result, value);
    fprintf(stderr, "%zu: [frame =  %zd] set_argument(%s, %s)\n",
      instruction_counter, (char *)TLS_frame-(stack+STACK_SIZE), index, result);
  }
  my_set(&TLS_frame->tree, idx, value);
}

static NODE *from_arguments
  (
    FRAME *frame,
    const TAB_NUM *tab,
    int count
  )
  {
    if (count <= 0) {
      return (NODE *)&std___empty_list;
    }
    LIST_DATA *data = my_allocate(sizeof(LIST_DATA)+count*sizeof(NODE *));
    data->size = count;
    data->length = count;
    int i;
    for (i = 0; i < count; ++i) {
      data->items[i] = get_argument(frame, tab[i]);
    }
    return create__std_types___list(0, count, data);
  }

extern void collect_garbage(void);

static void my_collect_garbage(void) {
  ++profile.counts[COUNT_garbage_collections];
  collect_garbage();
}

//long gc_check_count = 0;

static void maybe_collect_garbage(void) {
  //++gc_check_count;
  if (node_p > node_buf_soft_limit) {
    if (do_trace) {
      fprintf(stderr, "COLLECT GARBAGE\n");
    }
    my_collect_garbage();
  } else {
    if (do_trace) {
      fprintf(stderr, "check whether to collect garbage\n");
    }
  }
}

static void allocate_frame_and_initialize_locals(
  FRAME *parent_frame,
  int slot_count
) {
  TREE *dynamics = TLS_frame->dynamics;
  long size = sizeof(FRAME)+slot_count*sizeof(NODE *);
  TLS_frame = (void *)parent_frame - size;
  if ((void *)TLS_frame < (void *)stack) stack_overflow_error();
  TLS_frame->link = parent_frame;
  TLS_frame->dynamics = dynamics;
  TLS_frame->constants = TLS_constants;
  {
    int i;
    for (i = 0; i < slot_count; ++i) {
      TLS_frame->slots[i] = (NODE *)&std_types___undefined;
    }
  }
}

extern const TAB_NUM *tail_call_stack[256];
extern const TAB_NUM **tail_call_sp;

static TAB_NUM expect_no_results[1] = {0};

EXPORT const TAB_NUM *function_code_start;
EXPORT const TAB_NUM *function_code_end;

static const TAB_NUM *function_code_start_stack[4096];
static const TAB_NUM *function_code_end_stack[4096];
static int function_code_sp = 0;

void profiler(void) {
  // initialize stack
  TREE *initial_dynamics = TLS_frame->dynamics;
  TLS_frame = (FRAME *)(stack+STACK_SIZE-sizeof(FRAME));
  TLS_frame->link = NULL;
  TLS_frame->dynamics = initial_dynamics;
  TLS_frame->constants = TLS_constants;
  TLS_frame->code = expect_no_results;
  TLS_argument_count = 0;

  TLS_code = NULL;
  tail_call_sp = tail_call_stack;

  enter:;

  FRAME *caller_frame = TLS_frame;
  const TAB_NUM *caller_arguments = TLS_code;
  FUNC func;

  if (do_debug) {
    TLS_code = ((FUNCTION_INFO *)((unsigned long)TLS_myself->type & -4L))->code;
    function_code_start_stack[function_code_sp] = function_code_start;
    function_code_end_stack[function_code_sp] = function_code_end;
    ++function_code_sp;
    function_code_start = TLS_code;
    function_code_end =
      ((FUNCTION_INFO *)((unsigned long)TLS_myself->type & -4L))->code_end;
  } else {
    TLS_code = (const TAB_NUM *)((unsigned long)TLS_myself->type & -4L);
  }

  TAB_NUM slot_count = *TLS_code++;
  allocate_frame_and_initialize_locals(TLS_frame, slot_count);

  int argument_count = TLS_argument_count;
  TAB_NUM parameter_count = *TLS_code++;
  if (parameter_count) {
    if (parameter_count < 0) {
      // handle special parameters
      parameter_count = -parameter_count;
      int s = 0;
      int e = 2*parameter_count;
      int i = 0;
      if (TLS_code[s] == MYSELF_PARAMETER) {
	set_argument(TLS_code[s+1], TLS_myself);
	s += 2;
      }
      while (s < e && TLS_code[s] == MANDATORY_PARAMETER) {
	if (i >= argument_count) {
	  func = too_few_arguments;
	  TLS_code = caller_arguments;
	  goto call_c_function;
	}
	set_argument(
	  TLS_code[s+1], get_argument(caller_frame, caller_arguments[i++]));
	s += 2;
      }
      while (e > s && TLS_code[e-2] == MANDATORY_PARAMETER) {
	if (i >= argument_count) {
	  func = too_few_arguments;
	  TLS_code = caller_arguments;
	  goto call_c_function;
	}
	set_argument(
	  TLS_code[e-1],
	  get_argument(caller_frame, caller_arguments[--argument_count]));
	e -= 2;
      }
      while (s < e && TLS_code[s] != REST_PARAMETER) {
	if (i < argument_count) {
	  set_argument(
	    TLS_code[s+1], get_argument(caller_frame, caller_arguments[i++]));
	} else {
	  set_argument(
	    TLS_code[s+1], get_argument(TLS_frame, TLS_code[s]));
	}
	s += 2;
      }
      if (s < e) {
	// rest parameter
	set_argument(
	  TLS_code[s+1],
	  from_arguments(
	    caller_frame, caller_arguments+i, argument_count-i));
      } else if (i < argument_count) {
	func = too_many_arguments;
	TLS_code = caller_arguments;
	goto call_c_function;
      }
      TLS_code += 2*parameter_count;
    } else {
      if (argument_count != parameter_count) {
	if (argument_count < parameter_count) {
	  func = too_few_arguments;
	} else {
	  func = too_many_arguments;
	}
	TLS_code = caller_arguments;
	TLS_frame = TLS_frame->link;
	if (do_debug) {
	  --function_code_sp;
	  function_code_start = function_code_start_stack[function_code_sp];
	  function_code_end = function_code_end_stack[function_code_sp];
	}
	goto chain_to_c_function;
      }
      // copy arguments into parameters
      while (--argument_count >=0) {
	set_argument(
	  *TLS_code++, get_argument(caller_frame, *caller_arguments++));
      }
    }
  }

  execute_statements:;

  if (
    do_debug &&
    (
      instruction_counter == sdd->break_at ||
      sdd->break_on_return && TLS_frame->link > sdd->break_frame ||
      (
	sdd->break_code_start &&
	TLS_code >= sdd->break_code_start &&
	TLS_code < sdd->break_code_end
      ) ||
      sdd->break_on_io && sdd->io_occurred
    )
  ) debug();
  ++instruction_counter;
  ++profile.counts[COUNT_instructions];

  const TAB_NUM *code_start = TLS_code;
  TAB_NUM functor = *TLS_code++;
  TLS_argument_count = *TLS_code++;
  int i;

  if (functor == LET) {
    if (TLS_argument_count < 0) {
      // assign attributes
      // source, <argument_count> attribute-value pairs, destination
      NODE *obj = clone_object_and_attributes(get_argument(TLS_frame, *TLS_code++));
      update_start_p = node_p;
      while (++TLS_argument_count <= 0) {
	TAB_NUM attr_idx = *TLS_code++;
	NODE *value = get_argument(TLS_frame, *TLS_code++);
	if (
	 !my_redefine_attribute(
	   obj->attributes, attr_idx, MAKE_ATTRIBUTE_VALUE(value))
	) {
	  TLS_code -= 2*TLS_argument_count; // skip any more arguments
	  TLS_argument_count = 1;
	  TLS_arguments[0] = obj; // to propagate an existing error
	  TLS_result_count = 1;
	  invalid_attribute_redefinition(obj, attr_idx);
	  obj = TLS_arguments[0];
	  break;
	}
      }
      set_argument(*TLS_code++, obj);
    } else {
      const TAB_NUM *args = TLS_code;
      TLS_code += TLS_argument_count;
      TLS_result_count = *TLS_code;
      if (TLS_result_count < 0) { // it's a RETURN
	tail_call_sp = tail_call_stack;
	FRAME *callee_frame = TLS_frame;
	TLS_frame = TLS_frame->link;
	if (do_debug) {
	  --function_code_sp;
	  function_code_start = function_code_start_stack[function_code_sp];
	  function_code_end = function_code_end_stack[function_code_sp];
	}
	if (TLS_deny_io) --TLS_deny_io;
	  // if we do not have I/O-access then remove one deny-level
	TLS_code = TLS_frame->code;
	TLS_result_count = *TLS_code;
	if (TLS_argument_count != TLS_result_count) {
	  if (TLS_argument_count < TLS_result_count) {
	    func = too_few_results;
	  } else {
	    if (!TLS_frame->link) {
	      TLS_frame->dynamics = callee_frame->dynamics;
	      return; // return from initializer
	    }
	    func = too_many_results;
	  }
	  TLS_frame = callee_frame;
	  TLS_code = args;
	  goto call_c_function;
	}
	++TLS_code;
	int i;
	for (i = 0; i < TLS_argument_count; ++i) {
	  set_argument(*TLS_code++, get_argument(callee_frame, *args++));
	}
      } else {
	if (TLS_argument_count == 1) {
	  // a single argument and result
	  set_argument(TLS_code[1], get_argument(TLS_frame, args[0]));
	  TLS_code += 2; // result count and result
	} else {
	  // copy via TLS_arguments
	  int i;
	  for (i = 0; i < TLS_argument_count; ++i) {
	    TLS_arguments[i] = get_argument(TLS_frame, args[i]);
	  }
	  ++TLS_code;
	  for (i = 0; i < TLS_argument_count; ++i) {
	    set_argument(TLS_code[i], TLS_arguments[i]);
	  }
	  TLS_code += TLS_argument_count;
	}
      }
    }
    goto execute_statements;
  } else {
    TLS_myself = get_functor(functor);

    get_func:;

    func = TLS_myself->type;
    NODE *result;

    switch ((long)func & 3) {
      case TABULAR_FUNCTION_TAG:
	maybe_collect_garbage();

	int argument_count = TLS_argument_count;
	TLS_frame->code = TLS_code+argument_count;

	if (*TLS_frame->code >= 0) {
	  // no tail call
	  if (functor >= 0 || TLS_deny_io) ++TLS_deny_io;
	    // do no increase if it is an I/O-call and we do have I/O-access
	  goto enter;
	}

	// tail call

	*tail_call_sp++ = code_start;

	if (TLS_deny_io == 0 && functor >= 0) TLS_deny_io = 1;
	  // we had I/O-access rights but loose them due to a non-IO-tail-call

	++profile.counts[COUNT_tail_calls];
	const TAB_NUM *caller_code = TLS_code;
	if (do_debug) {
	  TLS_code = ((FUNCTION_INFO *)
	    ((unsigned long)TLS_myself->type & -4L))->code;
	  function_code_start = TLS_code;
	  function_code_end = ((FUNCTION_INFO *)
	    ((unsigned long)TLS_myself->type & -4L))->code_end;
	} else {
	  TLS_code = (const TAB_NUM *)((unsigned long)TLS_myself->type & -4L);
	}

	TAB_NUM slot_count = *TLS_code++;
	parameter_count = *TLS_code++;

	if (parameter_count < 0) {
	  // handle special parameters
	  parameter_count = -parameter_count;
	  int s = 0;
	  int e = parameter_count;
	  i = 0;
	  if (TLS_code[s] == MYSELF_PARAMETER) {
	    TLS_arguments[s++] = TLS_myself;
	  }
	  while (s < e && TLS_code[2*s] == MANDATORY_PARAMETER) {
	    if (i >= argument_count) {
	      func = too_few_arguments;
	      TLS_code = caller_code;
	      goto call_c_function;
	    }
	    TLS_arguments[s++] = get_argument(TLS_frame, caller_code[i++]);
	  }
	  while (e > s && TLS_code[2*(e-1)] == MANDATORY_PARAMETER) {
	    if (i >= argument_count) {
	      func = too_few_arguments;
	      TLS_code = caller_code;
	      goto call_c_function;
	    }
	    TLS_arguments[--e] =
	      get_argument(TLS_frame, caller_code[--argument_count]);
	  }
	  while (s < e && TLS_code[2*s] != REST_PARAMETER) {
	    if (i < argument_count) {
	      TLS_arguments[s] = get_argument(TLS_frame, caller_code[i++]);
	    } else {
	      TLS_arguments[s] = NULL; // use default value
	    }
	    ++s;
	  }
	  if (s < e) {
	    // rest parameter
	    TLS_arguments[s] =
	      from_arguments(TLS_frame, caller_code+i, argument_count-i);
	  } else if (i < argument_count) {
	      func = too_many_arguments;
	      TLS_code = caller_code;
	      goto call_c_function;
	  }

	  allocate_frame_and_initialize_locals(TLS_frame->link, slot_count);

	  {
	    // copy arguments into parameters
	    for (i = 0; i < parameter_count; ++i) {
	      set_argument(TLS_code[1],
		TLS_arguments[i] ?
		TLS_arguments[i] : // use caller argument
		get_argument(TLS_frame, TLS_code[0]) // use default value
	      );
	      TLS_code += 2;
	    }
	  }
	} else {
	  // handle ordinary parameters
	  if (argument_count != parameter_count) {
	    if (argument_count < parameter_count) {
	      func = too_few_arguments;
	    } else {
	      func = too_many_arguments;
	    }
	    TLS_code = caller_code;
	    goto call_c_function;
	  }

	  // copy arguments into parameters
	  for (i = 0; i < parameter_count; ++i) {
	    TLS_arguments[i] = get_argument(TLS_frame, *caller_code++);
	  }

	  allocate_frame_and_initialize_locals(TLS_frame->link, slot_count);

	  {
	    // copy arguments into parameters
	    for (i = 0; i < parameter_count; ++i) {
	      set_argument(*TLS_code++, TLS_arguments[i]);
	    }
	  }
	}
	goto execute_statements;
      case POLYMORPHIC_FUNCTION_TAG:
	if (TLS_argument_count < 1) {
	  func = too_few_arguments;
	  goto call_c_function;
	}
	NODE *self = get_argument(TLS_frame, *TLS_code);
	last_node = self;
	last_attr_idx = (unsigned long)func >> 3;
	TLS_myself = my_get_attr((TREE *)self->attributes, last_attr_idx);
	if (!CONTAINS_AN_ATTRIBUTE_VALUE(TLS_myself)) goto get_func;
	  // a polymorphic function *can* refer to another polymorphic function

	if (TLS_argument_count == 1) {
	  result = RETRIEVE_ATTRIBUTE_VALUE(TLS_myself);
	  ++TLS_code; // skip argument
	  store_result:
	  TLS_result_count = *TLS_code;
	  if (TLS_result_count == 1) {
	    ++TLS_code;
	    set_argument(*TLS_code++, result);
	    goto execute_statements;
	  } else if (TLS_result_count < 0) {
	    tail_call_sp = tail_call_stack;
	    const TAB_NUM *callee_code = TLS_code;
	    FRAME *callee_frame = TLS_frame;
	    TLS_frame = TLS_frame->link;
	    if (do_debug) {
	      --function_code_sp;
	      function_code_start = function_code_start_stack[function_code_sp];
	      function_code_end = function_code_end_stack[function_code_sp];
	    }
	    if (TLS_deny_io) --TLS_deny_io;
	      // if we do not have I/O-access then remove one level
	    TLS_code = TLS_frame->code;
	    TLS_result_count = *TLS_code;
	    if (TLS_argument_count == 1) {
	      ++TLS_code;
	      set_argument(*TLS_code++, result);
	      goto execute_statements;
	    }
	    TLS_frame = callee_frame;
	    TLS_code = callee_code;
	  }
	  --TLS_code; // before argument
	  if (TLS_result_count > 1) {
	    func = too_few_results;
	  } else {
	    func = too_many_results;
	  }
	  goto call_c_function;
	}

	if (TLS_argument_count == 2) {
	  // polymorphic setter
	  int idx = decode_attribute_index(last_attr_idx);
	  if (!has_a_setter[idx]) {
	    func = attribute_has_no_setter;
	    goto call_c_function;
	  }
	  NODE *attr = get_argument(TLS_frame, TLS_code[1]);
	  result = clone_object_and_attributes(self);
	  update_start_p = node_p;
	  set_attr(
	    (TREE *)result->attributes, last_attr_idx, MAKE_ATTRIBUTE_VALUE(attr));
	  TLS_code += 2; // skip 2 arguments
	  goto store_result;
	}

	func = too_many_arguments; // this is a C-function
    }
  }

  call_c_function:

  if (functor >= 0 || TLS_deny_io) ++TLS_deny_io;
    // do no increase if it is an I/O-call and we do have I/O-access

  chain_to_c_function:

  ++profile.counts[COUNT_C_function_calls];
  for (i = 0; i < TLS_argument_count; ++i) {
    TLS_arguments[i] = get_argument(TLS_frame, *TLS_code++);
  }
  int is_a_tail_call = false;
  TLS_result_count = *TLS_code;
  if (TLS_result_count < 0) {
    // tail call
    TLS_frame = TLS_frame->link;
    if (do_debug) {
      --function_code_sp;
      function_code_start = function_code_start_stack[function_code_sp];
      function_code_end = function_code_end_stack[function_code_sp];
    }
    is_a_tail_call = true;
    TLS_code = TLS_frame->code;
    TLS_result_count = *TLS_code;
  }
  if (TLS_result_count) {
    ++TLS_code; // skip result count
    call:
    func();
    if (TLS_deny_io) {
      --TLS_deny_io; // we returned from the C-call
      if (TLS_deny_io && is_a_tail_call) --TLS_deny_io;
	// we return to the caller
    }
    if (TLS_argument_count != TLS_result_count) {
      if (TLS_argument_count < TLS_result_count) {
	func = too_few_results;
      } else {
	func = too_many_results;
      }
      goto call;
    }
    for (i = 0; i < TLS_argument_count; ++i) {
      set_argument(*TLS_code++, TLS_arguments[i]);
    }
  } else {
    func();
    if (TLS_deny_io) {
      --TLS_deny_io; // we returned from the C-call
      if (TLS_deny_io && is_a_tail_call) --TLS_deny_io;
	// we return to the caller
    }
    if (TLS_argument_count) { // an error object was returned
      do {
	TLS_frame = TLS_frame->link;
	if (do_debug) {
	  --function_code_sp;
	  function_code_start = function_code_start_stack[function_code_sp];
	  function_code_end = function_code_end_stack[function_code_sp];
	}
	if (TLS_deny_io) --TLS_deny_io;
	  // we return immediately to our caller
	TLS_code = TLS_frame->code;
	TLS_result_count = *TLS_code;
      } while (TLS_result_count == 0);
    }
    ++TLS_code; // skip result count
    for (i = 0; i < TLS_result_count; ++i) {
      set_argument(*TLS_code++, TLS_arguments[0]); // propagate error
    }
  }
  tail_call_sp = tail_call_stack;
  goto execute_statements;
}
