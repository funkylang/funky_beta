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

#include <errno.h>
#include <signal.h>
#include <stdarg.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <setjmp.h>
#include <inttypes.h>
#include <unistd.h>
#include <locale.h>
#include <sys/types.h>

#include "common.h"
#include "builtins.h"
#include "fko.h"
#include "linker.h"
#include "memory.h"
#include "interpreter.h"
#include "profiler.h"

#define INITIAL_POOL_SIZE      0x400000
#define MEMORY_SOFT_LIMIT       0x10000
#define MEMORY_HARD_LIMIT        0x4000

#define LARGE_OBJECT_THRESHOLD   0x1000

#if UINTPTR_MAX == 0xffffffffffffffff
  #define FIRST_INVALID_ADDRESS 0xc000000000000000UL
  #define SAMPLE_POINTER ((void *)0x123456789abcdef0UL)
#else
  #define FIRST_INVALID_ADDRESS 0xc0000000
  #define SAMPLE_POINTER ((void *)0x12345678)
#endif

#define TOTAL_FRAME_SIZE(frame) (sizeof(FRAME)+(frame)->slot_count*sizeof(NODE *))

#if defined(__GNUC__) && !defined(__clang__) && defined(__x86_64)
  #define ASM(x) asm(x)
#else
  #define ASM(x)
#endif

THREAD_LOCAL_STORAGE thread_local_storage;

EXPORT int main_argc;
EXPORT char **main_argv;

EXPORT EVENT__MODE event__mode = EM__NORMAL;
static FILE *log_fp;
static long action_counter = 0;

EXPORT int do_show_debug_info = false;

static MEMORY_BLOCK *memory_blocks = NULL;

static void *node_buf;
EXPORT void *node_buf_soft_limit;
static void *node_buf_hard_limit;
static void *node_buf_end;
EXPORT void *node_p;
EXPORT void *update_start_p; // helps to prevent unnecessary duplications

EXPORT void *static_node_buf = NULL;
EXPORT void *static_node_buf_end = NULL;

EXPORT void *coll_node_buf;
EXPORT void *coll_node_buf_end;

EXPORT NODE *undefined;

EXPORT uint64_t instruction_counter = 0;

// "no_attributes" is used for <types::undefined>

extern void no_such_function(void);

EXPORT int is_a_power_of_two(int n) {
  return ((n != 0) && !(n & (n - 1)));
}

void no_such_attribute(void);

C_FUNCTION no_such_attribute_node = {no_such_attribute, NULL, -1};

static OCTREE no_attributes_level_1 = {{
  (OCTREE *)&no_such_attribute_node, (OCTREE *)&no_such_attribute_node,
  (OCTREE *)&no_such_attribute_node, (OCTREE *)&no_such_attribute_node,
  (OCTREE *)&no_such_attribute_node, (OCTREE *)&no_such_attribute_node,
  (OCTREE *)&no_such_attribute_node, (OCTREE *)&no_such_attribute_node
}};

static OCTREE no_attributes_level_2 = {{
  &no_attributes_level_1, &no_attributes_level_1,
  &no_attributes_level_1, &no_attributes_level_1,
  &no_attributes_level_1, &no_attributes_level_1,
  &no_attributes_level_1, &no_attributes_level_1
}};

static OCTREE no_attributes_level_3 = {{
  &no_attributes_level_2, &no_attributes_level_2,
  &no_attributes_level_2, &no_attributes_level_2,
  &no_attributes_level_2, &no_attributes_level_2,
  &no_attributes_level_2, &no_attributes_level_2
}};

static OCTREE no_attributes_level_4 = {{
  &no_attributes_level_3, &no_attributes_level_3,
  &no_attributes_level_3, &no_attributes_level_3,
  &no_attributes_level_3, &no_attributes_level_3,
  &no_attributes_level_3, &no_attributes_level_3
}};

static OCTREE no_attributes_level_5 = {{
  &no_attributes_level_4, &no_attributes_level_4,
  &no_attributes_level_4, &no_attributes_level_4,
  &no_attributes_level_4, &no_attributes_level_4,
  &no_attributes_level_4, &no_attributes_level_4
}};

// "undefined_attributes" is used for all other objects

// all even IDs are by default undefined methods
// all odd IDs are by default attributes initialized to <undefined>

// the missing subtrees are initialized in phase 4

static OCTREE undefined_attributes_level_1 = {{
  NULL, (OCTREE *)&no_such_attribute_node,
  NULL, (OCTREE *)&no_such_attribute_node,
  NULL, (OCTREE *)&no_such_attribute_node,
  NULL, (OCTREE *)&no_such_attribute_node
}};

static  OCTREE undefined_attributes_level_2 = {{
  &undefined_attributes_level_1, &undefined_attributes_level_1,
  &undefined_attributes_level_1, &undefined_attributes_level_1,
  &undefined_attributes_level_1, &undefined_attributes_level_1,
  &undefined_attributes_level_1, &undefined_attributes_level_1
}};

static  OCTREE undefined_attributes_level_3 = {{
  &undefined_attributes_level_2, &undefined_attributes_level_2,
  &undefined_attributes_level_2, &undefined_attributes_level_2,
  &undefined_attributes_level_2, &undefined_attributes_level_2,
  &undefined_attributes_level_2, &undefined_attributes_level_2
}};

static OCTREE undefined_attributes_level_4 = {{
  &undefined_attributes_level_3, &undefined_attributes_level_3,
  &undefined_attributes_level_3, &undefined_attributes_level_3,
  &undefined_attributes_level_3, &undefined_attributes_level_3,
  &undefined_attributes_level_3, &undefined_attributes_level_3
}};

static OCTREE undefined_attributes_level_5 = {{
  &undefined_attributes_level_4, &undefined_attributes_level_4,
  &undefined_attributes_level_4, &undefined_attributes_level_4,
  &undefined_attributes_level_4, &undefined_attributes_level_4,
  &undefined_attributes_level_4, &undefined_attributes_level_4
}};

EXPORT OCTREE *undefined_attributes;
EXPORT OCTREE *no_attributes;

static void *collect_simple_node(SIMPLE_NODE *node);

int debug_print(int indent, char *buf, const char *format, ...);

static long types__uninitialized___debug_string(
  NODE *node, int indent, int max_depth, char *buf
) {
  return debug_print(indent, buf, "uninitialized");
}

static VTABLE vtable__types__uninitialized = {
  sizeof(SIMPLE_NODE),
  (COLLECTOR *)&collect_simple_node,
  (void *)no_such_function,
  (void *)no_such_function,
  (void *)no_such_function,
  (void *)no_such_function,
  (void *)no_such_function,
  (void *)no_such_function,
  (void *)no_such_function,
  (void *)no_such_function,
  (void *)no_such_function,
  (void *)no_such_function,
  (void *)no_such_function,
  (void *)no_such_function,
  (void *)no_such_function,
  (void *)no_such_function,
  (void *)no_such_function,
  (void *)no_such_function,
  (void *)no_such_function,
  (void *)no_such_function,
  (void *)no_such_function,
  (void *)no_such_function,
  &types__uninitialized___debug_string
};

static ATTRIBUTES attributes__types__uninitialized = {
  {NULL, NULL, NULL, NULL, NULL, NULL, NULL},
  &vtable__types__uninitialized
};

static void type__types__uninitialized(void) {
  {
    runtime_error("Attempt to call an uninitialized value as a function!");
  }
}

static SIMPLE_NODE types__uninitialized__node =
  {
    type__types__uninitialized,
    &attributes__types__uninitialized
  };

static OCTREE empty_dynamics_level_1 = {{
  (OCTREE *)&types__uninitialized__node, (OCTREE *)&types__uninitialized__node,
  (OCTREE *)&types__uninitialized__node, (OCTREE *)&types__uninitialized__node,
  (OCTREE *)&types__uninitialized__node, (OCTREE *)&types__uninitialized__node,
  (OCTREE *)&types__uninitialized__node, (OCTREE *)&types__uninitialized__node
}};

static OCTREE empty_dynamics_level_2 = {{
  &empty_dynamics_level_1, &empty_dynamics_level_1,
  &empty_dynamics_level_1, &empty_dynamics_level_1,
  &empty_dynamics_level_1, &empty_dynamics_level_1,
  &empty_dynamics_level_1, &empty_dynamics_level_1
}};

static OCTREE empty_dynamics_level_3 = {{
  &empty_dynamics_level_2, &empty_dynamics_level_2,
  &empty_dynamics_level_2, &empty_dynamics_level_2,
  &empty_dynamics_level_2, &empty_dynamics_level_2,
  &empty_dynamics_level_2, &empty_dynamics_level_2
}};

static OCTREE empty_dynamics_level_4 = {{
  &empty_dynamics_level_3, &empty_dynamics_level_3,
  &empty_dynamics_level_3, &empty_dynamics_level_3,
  &empty_dynamics_level_3, &empty_dynamics_level_3,
  &empty_dynamics_level_3, &empty_dynamics_level_3
}};

static OCTREE empty_dynamics_level_5 = {{
  &empty_dynamics_level_4, &empty_dynamics_level_4,
  &empty_dynamics_level_4, &empty_dynamics_level_4,
  &empty_dynamics_level_4, &empty_dynamics_level_4,
  &empty_dynamics_level_4, &empty_dynamics_level_4
}};

static OCTREE empty_dynamics_level_6 = {{
  &empty_dynamics_level_5, &empty_dynamics_level_5,
  &empty_dynamics_level_5, &empty_dynamics_level_5,
  &empty_dynamics_level_5, &empty_dynamics_level_5,
  &empty_dynamics_level_5, &empty_dynamics_level_5
}};

static void *unused_pool;

static size_t pool_size;
static size_t size_of_new_pool;
static size_t size_of_current_pool;
static size_t size_of_unused_pool;

EXPORT int runtime_debug_level = 0;
  // 0: no debug messages
  // 1: important debug messages
  // 2: all debug messages

EXPORT __attribute__ ((noreturn)) void unrecoverable_error(const char *msg, ...) {
  va_list args;
  va_start(args, msg);
  fprintf(stderr, "\n");
  vfprintf(stderr, msg, args);
  fprintf(stderr, "\n");
  va_end(args);
  //if (instruction_counter > 0) crash_dump();
  exit(EXIT_FAILURE);
}

EXPORT __attribute__ ((noreturn)) void out_of_memory_error(void) {
  unrecoverable_error("Out of memory!");
}

EXPORT __attribute__ ((noreturn)) void stack_overflow_error(void) {
  unrecoverable_error("Stack overflow!");
}

EXPORT __attribute__ ((noreturn)) void invalid_continuation_error(void) {
  unrecoverable_error("Invalid continuation!");
}

//static long alloc_count = 0;

EXPORT void *allocate(long size) {
  //++alloc_count;
  if ((void *)((char *)node_p+size) > node_buf_hard_limit)
    unrecoverable_error("OUT OF MEMORY (allocating %ld bytes)!", size);
  void *p = node_p;
  node_p = ((char *)node_p)+size;
  return p;
}

EXPORT void *allocate_and_clear(long size) {
  void *buf = allocate(size);
  memset(buf, 0, size);
  return buf;
}

static void *allocate_pool() {
  void *addr = unused_pool;
  unused_pool = NULL;
  size_of_new_pool = size_of_unused_pool;
  if (addr) return addr;
  if (runtime_debug_level > 0) {
    fprintf(
      stderr, "%" PRIu64 ": malloc pool of size %ld for process %d\n",
      instruction_counter, pool_size, getpid());
  }
  addr = malloc(pool_size);
  size_of_new_pool = pool_size;
  if (addr) {
    #ifndef NDEBUG
      memset(addr, 0xfe, size_of_new_pool);
    #endif
    return addr;
  }
  unrecoverable_error("MEMORY POOL ALLOCATION FAILED!");
}

static void deallocate_pool(void *pool) {
  #ifndef NDEBUG
    memset(pool, 0xfe, size_of_current_pool);
  #endif
  if (size_of_current_pool == pool_size) {
    unused_pool = pool;
    size_of_unused_pool = size_of_current_pool;
  } else {
    if (runtime_debug_level > 0) {
      fprintf(
	stderr, "%" PRIu64 ": free pool of size %ld for process %d\n",
	instruction_counter, size_of_current_pool, getpid());
    }
    free(pool);
    unused_pool = NULL;
  }
}

static uint64_t total_allocated_memory = 0;

EXPORT void *allocate_memory(size_t size) {
  void *p = malloc(size);
  if (!p) out_of_memory_error();
  #ifndef NDEBUG
    memset(p, 0xfe, size);
  #endif
  uint64_t previously_allocated_memory = total_allocated_memory;
  total_allocated_memory += size;

  return p;
}

EXPORT void *reallocate_memory(void * buf, size_t size) {
  void *p = realloc(buf, size);
  if (!p) out_of_memory_error();
  size_t previously_allocated_memory = total_allocated_memory;
  total_allocated_memory += size;
  return p;
}

EXPORT long current_mark;

EXPORT void *allocate_fixed(long size) {
  void *p = allocate_memory(sizeof(MEMORY_BLOCK)+size);
  ((MEMORY_BLOCK *)p)->link = memory_blocks;
  ((MEMORY_BLOCK *)p)->mark = current_mark;
  ((MEMORY_BLOCK *)p)->destructor = NULL;
  memory_blocks = p;
  return (char *)p+sizeof(MEMORY_BLOCK);
}

EXPORT void *allocate_large(long size) {
  if (size >= LARGE_OBJECT_THRESHOLD)
    return allocate_fixed(size);
  else
    return allocate(size);
}

EXPORT void deallocate_memory(void *buf) {
  free(buf);
}

EXPORT void *copy(const void *buf, long size) {
  if ((void *)((char *)node_p+size) > node_buf_hard_limit) out_of_memory_error();
  void *p = node_p;
  node_p = (char *)node_p+size;
  memcpy(p, buf, size);
  return p;
}

typedef struct PHASE_2_COLLECTOR {
  void *dummy;
  void *next_collector;
  void (*collector)(void *data);
} PHASE_2_COLLECTOR;

void segfault_sigaction(int signal, siginfo_t *si, void *arg)
{
  unrecoverable_error("Caught segfault at address %p", si->si_addr);
}

EXPORT int child_changed_state = false;
EXPORT int window_changed_size = false;
EXPORT int caught_sigusr1 = false;
EXPORT int caught_sigusr2 = false;

void child_handler(int signal) {
  child_changed_state = true;
}

void winch_handler(int signal)
{
  window_changed_size = true;
}

void sigusr1_handler(int signal)
{
  caught_sigusr1 = true;
}

void sigusr2_handler(int signal)
{
  caught_sigusr2 = true;
}

extern NODE *from_c_string(const char *str);

NODE *from_vprintf(const char *msg, va_list args) {
  int n;
  char *big_buf;
  va_list args_copy;
  va_copy(args_copy, args);
  char buf[512];
  n = vsnprintf(buf, 512, msg, args);
  if (n < 512) return from_c_string(buf);
  big_buf = allocate_memory(n+1);
  vsprintf(big_buf, msg, args_copy);
  NODE *node = from_c_string(big_buf);
  deallocate_memory(big_buf);
  return node;
}

EXPORT NODE *from_printf(const char *msg, ...) {
  va_list args;
  va_start(args, msg);
  NODE *node = from_vprintf(msg, args);
  return node;
}

jmp_buf main_loop_start;

EXPORT __attribute__ ((noreturn)) void runtime_error(const char *msg, ...) {
  va_list args;
  va_start(args, msg);
  vfprintf(stderr, msg, args);
  fprintf(stderr, "\n");
  va_end(args);
  //if (instruction_counter > 0) crash_dump();
  exit(EXIT_FAILURE);
}

/*
EXPORT void invalid_index_error(void) {
  runtime_error("Invalid index!");
}

EXPORT void divide_by_zero_error(void) {
  runtime_error("Divide by zero!");
}

EXPORT void not_yet_implemented_error(void) {
  runtime_error("Not yet implemented!");
}

EXPORT void no_such_function(void) {
  runtime_error("No such function!");
}

EXPORT void no_such_internal_method(NODE *node) {
  long len = debug_string(node, 0, 1, NULL);
  char *buf = malloc(len);
  debug_string(node, 0, 1, buf);
  buf[len-1] = 0;
  runtime_error(
    "Attempt to call a non-implemented internal method of\n%s",
    buf);
}*/

EXPORT NODE *last_node;
EXPORT int last_attr_idx;
extern const char **polymorphic_function_names;

EXPORT void resource_error(void) {
  runtime_error("Failed to allocate a resource!");
}

EXPORT void io_error(void) {
  runtime_error("Input-output error!");
}

#ifdef __CYGWIN__
FUNC invalid_continuation;

static void invalid_continuation_function(void) {
#else
void invalid_continuation(void) {
#endif
  runtime_error("Invalid continuation!");
}

static void initialize_runtime(void) {
  DEBUG
    err_header("Initialize Runtime");
  END

  #ifdef __CYGWIN__
    invalid_continuation = invalid_continuation_function;
  #endif

  struct sigaction sa;
  sigset_t set;

  memset(&sa, 0, sizeof(sigaction));
  sigemptyset(&sa.sa_mask);
  sa.sa_sigaction = segfault_sigaction;
  sa.sa_flags   = SA_SIGINFO;
  sigaction(SIGSEGV, &sa, NULL);

  signal(SIGCHLD, child_handler);
  signal(SIGWINCH, winch_handler);
  signal(SIGUSR1, sigusr1_handler);
  signal(SIGUSR2, sigusr2_handler);

  sigemptyset(&set);
  sigaddset(&set, SIGCHLD); // block SIGCHLD until unblocked
  sigaddset(&set, SIGWINCH); // block SIGWINCH until unblocked
  sigaddset(&set, SIGUSR1); // block SIGUSR1 until unblocked
  sigaddset(&set, SIGUSR2); // block SIGUSR2 until unblocked
  sigprocmask(SIG_BLOCK, &set, NULL);

  signal(SIGPIPE, SIG_IGN);

  pool_size = INITIAL_POOL_SIZE;
  node_buf = allocate_pool();
  node_buf_end = (char *)node_buf+pool_size;
  node_buf_hard_limit = (char *)node_buf_end-MEMORY_HARD_LIMIT;
  node_buf_soft_limit = (char *)node_buf_end-MEMORY_SOFT_LIMIT;
  node_p = node_buf;
}

EXPORT int do_profile = false;
EXPORT int do_trace = false;

static void catcher(void) {
  NODE *node = TLS_arguments[0];
  if (node->type != std_types___undefined____type) {
    // the "main" function returned a result - most likely an error
    if (node->type != std_types___error____type) {
      // it wasn't an error - very strange
      // maybe an (unwanted) tail call returning a result in "main"
      char *msg = "MAIN RETURNED A RESULT";
      long size = strlen(msg)+1;
      MESSAGE_TEXT *message = allocate(sizeof(MESSAGE_TEXT)+size);
      message->size = size;
      strcpy(message->text, msg);
      FUNC_DATA *data = allocate_large(sizeof(FUNC_DATA));
      data->length = 0;
      node = create__std_types___error(
	undefined, message, 0, 0, node, instruction_counter, data);
    }
    long len = debug_string(node, 0, 51, NULL);
    char *buf = malloc(len+1);
    debug_string(node, 0, 51, buf);
    buf[len] = 0;
    fprintf(stderr, "%s", buf);
    exit(EXIT_FAILURE);
  }
  if (do_profile) {
    setlocale(LC_ALL, "");
    int i;
    for (i = 0; i < TOTAL_COUNTS; ++i) {
      fprintf(stderr, "%-20s%'16ld\n", count_names[i], profile.counts[i]);
    }
  }
  exit(EXIT_SUCCESS);
}

static void make_existing_objects_static(void) {
  /*fprintf(
    stderr, "length of constants: %ld (pool size: %ld)\n",
    node_p-node_buf, pool_size);*/

  // do not free large memory thunks bound to constants

  memory_blocks = NULL;

  // throw away the current pool that contains mostly (only?) constants

  static_node_buf = node_buf;
  static_node_buf_end = node_buf_end;

  node_buf = allocate_pool();
  node_buf_end = (char *)node_buf+pool_size;
  node_buf_hard_limit = (char *)node_buf_end-MEMORY_HARD_LIMIT;
  node_buf_soft_limit = (char *)node_buf_end-MEMORY_SOFT_LIMIT;
  node_p = node_buf;
}

static void initialize_undefined_attributes(void) {
  // set the "object"-bit for "undefined_attributes"
  int i;
  for (i = 0; i < 8; i += 2) {
    undefined_attributes_level_1.nodes[i] = (OCTREE *)((long)undefined|1);
  }
}

// declare as "void *" to avoid silly compiler warnings
// prefer static nodes to prevent that static nodes point to dynamic nodes
EXPORT void join_nodes(void *left_node_pp, void *right_node_pp) {
  void *left_p = *(void **)left_node_pp;
  void *right_p = *(void **)right_node_pp;
  void *joined_p;
  if (left_p >= static_node_buf && left_p < static_node_buf_end) {
    if (right_p >= static_node_buf && right_p < static_node_buf_end) {
      if (left_p < right_p) {
        joined_p = left_p;
      } else {
        joined_p = right_p;
      }
    } else {
      joined_p = left_p;
    }
  } else {
    if (right_p >= static_node_buf && right_p < static_node_buf_end) {
      joined_p = right_p;
    } else {
      if (left_p < right_p) {
        joined_p = left_p;
      } else {
        joined_p = right_p;
      }
    }
  }
  *(void **)left_node_pp = joined_p;
  *(void **)right_node_pp = joined_p;
}

EXPORT NODE *clone_object_and_attributes(NODE *node) {
  NODE *new_node = copy(node, node->attributes->vtable->size);
  new_node->attributes = copy(new_node->attributes, sizeof(ATTRIBUTES));
  return new_node;
}

EXPORT int dynamics_level;
EXPORT int attributes_level;

EXPORT NODE *collect_node(NODE *node) {
  if (!IS_COLLECTED(node)) return node;
  void *new_location = *(void **)node;
  if (IS_AN_INVALID_ADDRESS(new_location)) return DECODE_ADDRESS(new_location);
  return node->attributes->vtable->collect(node);
}

static NODE *collect_function_or_value(NODE *node) {
  if ((uintptr_t)node & 1) {
    return (NODE *)(((uintptr_t)collect_node((NODE *)(((uintptr_t)node)-1)))+1);
  } else {
    return collect_node(node);
  }
}

static OCTREE *collect_octree(OCTREE *octree, int depth) {
  if (!IS_COLLECTED(octree)) return octree;
  if (octree->nodes[0] == (OCTREE *)UINTPTR_MAX) return octree->nodes[1];
  OCTREE *new_octree = allocate(sizeof(OCTREE));
  OCTREE *first_node = octree->nodes[0];
  OCTREE *second_node = octree->nodes[1];
  octree->nodes[0] = (OCTREE *)UINTPTR_MAX;
  octree->nodes[1] = new_octree;
  int i;
  if (depth > 0) {
    new_octree->nodes[0] = collect_octree(first_node, depth-1);
    new_octree->nodes[1] = collect_octree(second_node, depth-1);
    for (i = 2; i < 8; ++i) {
      new_octree->nodes[i] = collect_octree(octree->nodes[i], depth-1);
    }
  } else {
    new_octree->nodes[0] = (OCTREE *)collect_function_or_value((NODE *)first_node);
    new_octree->nodes[1] = (OCTREE *)collect_function_or_value((NODE *)second_node);
    for (i = 2; i < 8; ++i) {
      new_octree->nodes[i] = (OCTREE *)collect_function_or_value((NODE *)octree->nodes[i]);
    }
  }
  return new_octree;
}

EXPORT ATTRIBUTES *collect_attributes(ATTRIBUTES *attributes) {
  if (!IS_COLLECTED(attributes)) return attributes;
  void *new_location = attributes->nodes[0];
  if (IS_AN_INVALID_ADDRESS(new_location)) return DECODE_ADDRESS(new_location);
  ATTRIBUTES *new_attributes = allocate(sizeof(ATTRIBUTES));
  new_attributes->vtable = attributes->vtable;
  OCTREE *node_0 = attributes->nodes[0];
  attributes->nodes[0] = ENCODE_ADDRESS(new_attributes);
  new_attributes->nodes[0] = collect_octree(node_0, attributes_level-2);
  int i;
  for (i = 1; i < 7; ++i) {
    new_attributes->nodes[i] =
      collect_octree(attributes->nodes[i], attributes_level-2);
  }
  return new_attributes;
}

static void *collect_simple_node(SIMPLE_NODE *node) {
  SIMPLE_NODE *new_node = allocate(sizeof(SIMPLE_NODE));
  new_node->type = node->type;
  *(void **)node = ENCODE_ADDRESS(new_node);
  new_node->attributes = collect_attributes(node->attributes);
  return new_node;
}

EXPORT TREE *collect_dynamics(TREE *dynamics) {
  return (TREE *)collect_octree((OCTREE *)dynamics, dynamics_level-1);
}

EXPORT long total_garbage_collections = 0;

EXPORT void begin_garbage_collection() {
  if (node_p > node_buf_hard_limit) {
    runtime_error("POOL OVERFLOW (%p > %p)", node_p, node_buf_hard_limit);
  }

  ++total_garbage_collections;

  current_mark = 3-current_mark;

  coll_node_buf = node_buf;
  coll_node_buf_end = node_buf_end;

  size_of_current_pool = size_of_new_pool;
  node_buf = allocate_pool();
  #ifndef NDEBUG
    memset(node_buf, 0xfe, size_of_new_pool);
  #endif
  node_buf_end = (char *)node_buf+pool_size;
  node_buf_hard_limit = (char *)node_buf_end-MEMORY_HARD_LIMIT;
  node_buf_soft_limit = (char *)node_buf_end-MEMORY_SOFT_LIMIT;
  node_p = node_buf;
}

EXPORT void end_garbage_collection() {
  if (memory_blocks) {
    MEMORY_BLOCK *mbp, **mbpp;
    mbpp = &memory_blocks;
    mbp = memory_blocks;
    while (mbp) {
      if (mbp->mark == current_mark) {
        *mbpp = mbp;
        mbpp = &mbp->link;
        mbp = *mbpp;
      } else {
        MEMORY_BLOCK *p = mbp;
        mbp = mbp->link;
	if (p->destructor) p->destructor(p+1);
        deallocate_memory(p);
      }
    }
    *mbpp = NULL;
  }

  if (5*(size_t)(node_p-node_buf) > pool_size) pool_size += pool_size;
  deallocate_pool(coll_node_buf);
  update_start_p = node_p;
  if (runtime_debug_level > 1) {
    fprintf(
      stderr, "%" PRIu64 ": memory usage %ld / %ld\n",
      instruction_counter, node_p-node_buf, pool_size);
  }
}

static const char* indents_0 = "\t\t\t\t\t\t\t\t\t\t";
static const char* indents_2 = "\t\t\t\t\t\t\t\t\t\t  ";
static const char* indents_4 = "\t\t\t\t\t\t\t\t\t\t    ";
static const char* indents_6 = "\t\t\t\t\t\t\t\t\t\t      ";

EXPORT const char *indent_to_string(int indent) {
  // returns a string containing the specified indentation as a sequence of
  // leading tab-characters followed by space characters
  //
  // the indentation is rounded down to the nearest even number

  if (indent > 86) indent = 86; // acceptable maximum indent
  indent = indent & 0x7e; //make even
  const char *str;
  switch (indent & 7) {
    case 0:
      str = indents_0;
      break;
    case 2:
      str = indents_2;
      break;
    case 4:
      str = indents_4;
      break;
    case 6:
      str = indents_6;
      break;
  }
  return str+10-(indent >> 3);
}

EXPORT int print(char **buf_p, const char *format, ...) {
  // a variant of sprintf that increments the supplied pointer and
  // returns the amount of printed characters
  //
  // if <buf_p> refers a NULL-pointer then nothing is printed but the amount
  // of characters that would have been printed is still returned

  va_list args;
  va_start(args, format);
  int len;
  char *buf = *buf_p;
  if (buf) {
    len = vsprintf(buf, format, args);
    *buf_p = buf+len;
  } else {
    len = vsnprintf(NULL, 0, format, args);
  }
  va_end(args);
  return len;
}

static int vprint(char **buf_p, const char *format, va_list args) {
  // a variant of vsprintf that increments the supplied pointer and
  // returns the amount of printed characters
  //
  // if <buf_p> refers a NULL-pointer then nothing is printed but the amount
  // of characters that would have been printed is still returned

  int len;
  char *buf = *buf_p;
  if (buf) {
    len = vsprintf(buf, format, args);
    *buf_p = buf+len;
  } else {
    len = vsnprintf(NULL, 0, format, args);
  }
  return len;
}

EXPORT int debug_print(int indent, char *buf, const char *format, ...) {
  // prints a single debug line including the trailing newline
  //
  // if the specified indent is negative then there is already text on the
  // current line; the real indent is the absolute value of the indent

  va_list args;
  int len = 0;
  va_start(args, format);
  if (indent < 0) {
    if (buf) *buf++ = ' ';
    ++len;
  }
  len += vprint(&buf, format, args);
  va_end(args);
  if (buf) *buf = '\n';
  return len+1;
}

EXPORT int debug_print_indent(int *indent_p, char **buf_p) {
  long len = 0;
  int indent = *indent_p;
  if (indent < 0) {
    indent = -indent;
    char *buf = *buf_p;
    if (buf) *buf++ = '\n';
    ++len;
    const char *head_indent = indent_to_string(indent);
    len += print(&buf, head_indent);
    *buf_p = buf;
  }
  *indent_p = indent+2;
  return len;
}

EXPORT int debug_print_head(int *indent_p, char **buf_p, const char *format, ...) {
  // starts a multi-line debug expression
  //
  // if the specified indent is negative then there is already text on the
  // current line; the real indent is the absolute value of the indent

  va_list args;
  long len = debug_print_indent(indent_p, buf_p);
  char *buf = *buf_p;
  va_start(args, format);
  len += vprint(&buf, format, args);
  va_end(args);
  if (buf) *buf++ = '\n';
  *buf_p = buf;
  return len+1;
}

void no_such_attribute (void) {
  TLS_frame->code = TLS_code-1;
  // the code pointer points *behind* the <result count>; so we correct it
  create_error_message(undefined, "NO SUCH ATTRIBUTE", 0, last_attr_idx, last_node);
}

EXPORT void set_attr(TREE *tree, int idx, NODE *node) {
  // works with "unencoded" attribute index numbers (idx)
  int next_idx;
  next:
  next_idx = idx >> 3;
  if (next_idx) {
    TREE *branch = copy(tree->branches[idx&7], sizeof(OCTREE));
    tree->branches[idx&7] = branch;
    tree = branch;
    idx = next_idx;
    goto next;
  }
  tree->nodes[idx] = node;
}

EXPORT NODE *get_attr(TREE *tree, int idx) {
  // works with "unencoded" attribute index numbers (idx)
  while (idx) {
    tree = tree->branches[idx&7];
    idx >>= 3;
  };
  return (NODE *)tree;
}

EXPORT void set_attribute(ATTRIBUTES *attributes, int idx, void *attr) {
  // works with "encoded" attribute index numbers (idx)
  // use the function <encode_attr_idx> to encode attribute index numbers
  OCTREE *interior_p, **interior_pp;
  int i = attributes_level-1;
  interior_pp = &attributes->nodes[idx >> 3*i];
  while (--i > 0) {
    interior_p = copy(*interior_pp, sizeof(OCTREE));
    *interior_pp = interior_p;
    interior_pp = &interior_p->nodes[(idx >> 3*i) & 7];
  }
  interior_p = copy(*interior_pp, sizeof(OCTREE));
  *interior_pp = interior_p;
  interior_p->nodes[idx & 7] = attr;
}

EXPORT NODE *get_attribute(NODE *node, int idx) {
  // works with "encoded" attribute index numbers (idx)
  // use the function <encode_attr_idx> to encode attribute index numbers
  TREE *interior_p = (TREE *)node->attributes;
  int i = attributes_level;
  while (--i > 0) {
    interior_p = interior_p->branches[(idx >> 3*i) & 7];
  }
  return interior_p->nodes[idx & 7];
}

void reset_log_file(void) {
  fseek(log_fp, 0, SEEK_SET);
}

static char get_character(void) {
  int chr = getc(log_fp);
  if (chr == EOF) runtime_error("End of log file encountered!");
  return (char)chr;
}

static int digit_value(char chr) {
  if (chr < '0' || chr > '9') {
    runtime_error("Invalid number in event log!");
  }
  return chr-'0';
}

static long get_number(void) {
  long val = 0;
  int do_negate = false;
  char chr;
  do {
    chr = get_character();
  } while (chr <= 0x20);
  if (chr == '-') {
    do_negate = true;
  } else {
    val = digit_value(chr);
  }
  while (true) {
    chr = get_character();
    if (chr < '0' || chr > '9') break;
    val = 10*val+digit_value(chr);
  }
  if (do_negate) val = -val;
  return val;
}

static unsigned long get_unsigned_number(void) {
  unsigned long val = 0;
  char chr;
  do {
    chr = get_character();
  } while (chr <= 0x20);
  val = digit_value(chr);
  while (true) {
    chr = get_character();
    if (chr < '0' || chr > '9') break;
    val = 10*val+digit_value(chr);
  }
  return val;
}

EXPORT void record__event(const char *name) {
  fprintf(log_fp, "%s\n", name);
}

EXPORT void successful__action(const char *name) {
  ++action_counter;
}

EXPORT void failed__action(const char *name) {
  ++action_counter;
  fprintf(log_fp, "%s (%ld)\n", name, action_counter);
}

EXPORT void replay__event(const char *name) {
  char tag[64];
  char *p = tag;
  char chr;
  do {
    chr = get_character();
  } while (chr <= 0x20);
  while (true) {
    if (chr == '\n') break;
    if (p >= tag+63) runtime_error("Invalid event tag encountered!");
    *p++ = chr;
    chr = get_character();
  };
  *p = 0;
  if (strcmp(name, tag) != 0) {
    runtime_error(
      "Unexpected event tag encountered (encountered \"%s\", expected \"%s\")!",
      tag, name);
  }
}

EXPORT int replay__action(const char *name) {
  return false;
}

EXPORT void report__event(const char *name) {
  printf("%s\n", name);
}

static void print_pointer(FILE *fp, const void *ptr) {
  if (ptr) {
    if (ptr == (void *)FIRST_INVALID_ADDRESS) {
      fprintf(fp, "  -1\n");
    } else {
      fprintf(fp, "  1\n");
    }
  } else {
    fprintf(fp, "  0\n");
  }
}

EXPORT void print__pointer(const void *ptr) {
  print_pointer(stdout, ptr);
}

EXPORT void store__pointer(const void *ptr) {
  print_pointer(log_fp, ptr);
}

EXPORT void retrieve__pointer(const void **ptr_p) {
}

static void print_integer(FILE *fp, int val) {
  fprintf(fp, "  %d\n", val);
}

EXPORT void print__integer(int val) {
  print_integer(stdout, val);
}

EXPORT void store__integer(int val) {
  print_integer(log_fp, val);
}

EXPORT void retrieve__integer(int *val_p) {
  int val = (int)get_number();
  *val_p = val;
}

static void print_unsigned_integer(FILE *fp, unsigned int val) {
  fprintf(fp, "  %u\n", val);
}

EXPORT void print__unsigned_integer(unsigned int val) {
  print_unsigned_integer(stdout, val);
}

EXPORT void store__unsigned_integer(unsigned int val) {
  print_unsigned_integer(log_fp, val);
}

EXPORT void retrieve__unsigned_integer(unsigned int *val_p) {
  unsigned int val = (unsigned int)get_unsigned_number();
  *val_p = val;
}

static void print_long_integer(FILE *fp, long val) {
  fprintf(fp, "  %ld\n", val);
}

EXPORT void print__long_integer(long val) {
  print_long_integer(stdout, val);
}

EXPORT void store__long_integer(long val) {
  print_long_integer(log_fp, val);
}

EXPORT void retrieve__long_integer(long *val_p) {
  long val = get_number();
  *val_p = val;
}

static void print_unsigned_long_integer(FILE *fp, unsigned long val) {
  fprintf(fp, "  %lu\n", val);
}

EXPORT void print__unsigned_long_integer(unsigned long val) {
  print_unsigned_long_integer(stdout, val);
}

EXPORT void store__unsigned_long_integer(unsigned long val) {
  print_unsigned_long_integer(log_fp, val);
}

EXPORT void retrieve__unsigned_long_integer(unsigned long *val_p) {
  long val = get_unsigned_number();
  *val_p = val;
}

static void print_int_array(FILE *fp, const int *buf, long len) {
  fprintf(fp, "  %ld", len);
  if (len > 0) {
    long i;
    for (i = 0; i < len; ++i) {
      if (i % 16 == 0) fprintf(fp, "\n ");
      uint8_t chr = buf[i];
      fprintf(fp, " %d", chr);
    }
  }
  fprintf(fp, "\n");
}

EXPORT void print__int_array(const int *buf, long len) {
  print_int_array(stdout, buf, len);
}

EXPORT void store__int_array(const int *buf, long len) {
  print_int_array(log_fp, buf, len);
}

EXPORT long retrieve__int_array(int **buf_p) {
  long len = get_number();
  int *buf = NULL;
  if (len > 0) {
    buf = allocate_memory(len*sizeof(int));
    long i;
    for (i = 0; i < len; ++i) {
      int v = get_number();
      buf[i] = v;
    }
  }
  *buf_p = buf;
  return len;
}

static void print_memory(FILE *fp, const uint8_t *buf, long len) {
  fprintf(fp, "  %ld", len);
  if (len > 0) {
    long i;
    for (i = 0; i < len; ++i) {
      if (i % 32 == 0) fprintf(fp, "\n  ");
      uint8_t chr = buf[i];
      if (chr > 0x20 && chr < 0x7f && chr != '%') {
        fputc((char)chr, fp);
      } else {
        fprintf(fp, "%%%02x", chr);
      }
    }
  }
  fprintf(fp, "\n");
}

EXPORT void print__memory(const void *buf, long len) {
  print_memory(stdout, (const uint8_t *)buf, len);
}

EXPORT void store__memory(const void *buf, long len) {
  print_memory(log_fp, (const uint8_t *)buf, len);
}

EXPORT long retrieve__memory(uint8_t **buf_p) {
  long len = get_number();
  char *buf = NULL;
  if (len > 0) {
    buf = allocate_memory(len);
    long i;
    for (i = 0; i < len; ++i) {
      char chr;
      do {
	chr = get_character();
      } while (chr <= 0x20);
      if (chr == '%') {
	unsigned int val;
	fscanf(log_fp, "%02x", &val);
	buf[i] = (char)val;
      } else {
	buf[i] = chr;
      }
    }
  }
  *buf_p = (uint8_t *)buf;
  return len;
}

EXPORT void retrieve__fixed_memory(uint8_t *buf, long size) {
  long len = get_number();
  if (len > 0) {
    long i;
    for (i = 0; i < len; ++i) {
      char chr;
      do {
	chr = get_character();
      } while (chr <= 0x20);
      if (chr == '%') {
	unsigned int val;
	fscanf(log_fp, "%02x", &val);
	if (i < size) {
	  buf[i] = (uint8_t)val;
	}
      } else {
	if (i < size) {
	  buf[i] = (uint8_t)chr;
	}
      }
    }
  }
  if (len < size) memset(buf+len, 0, size-len);
}

static void print_c_string(FILE *fp, const char *buf) {
  if (buf) {
    uint8_t chr;
    fprintf(fp, "  %ld \"", strlen(buf));
    while (chr = (uint8_t)*buf++) {
      if (chr >= 0x20 && chr < 0x7f && chr != '%') {
        fputc((char)chr, fp);
      } else {
	fprintf(fp, "%%%02x", chr);
      }
    }
    fprintf(fp, "\"\n");
  } else {
    fprintf(fp, "  <null>\n");
  }
}

EXPORT void print__c_string(const char *buf) {
  print_c_string(stdout, buf);
}

EXPORT void store__c_string(const char *buf) {
  print_c_string(log_fp, buf);
}

EXPORT void retrieve__c_string(char **buf_p) {
  long len = get_number();
  if (get_character() != '\"') runtime_error("Invalid string in event log!");
  char *buf = allocate_memory(len+1);
  long i;
  for (i = 0; i < len; ++i) {
    char chr = get_character();
    if (chr == '%') {
      unsigned int val;
      fscanf(log_fp, "%02x", &val);
      buf[i] = (char)val;
    } else {
      buf[i] = chr;
    }
  }
  if (
    get_character() != '\"' || get_character() != '\n'
  ) runtime_error("Invalid string in event log!");
  buf[len] = 0;
  *buf_p = buf;
}

EXPORT void set(TREE *tree, int idx, NODE *node) {
  // each node contains exactly 8 entries with the following excpetions:
  // a level-1 node must not contain an entry for index 0
  // a level-0 node (a leaf) can contain up to 65536 entries
  // the toplevel node is updated inplace
  // all other modified nodes are copied if necessary

  int leaf_idx = idx & 0xffff;
  idx >>= 16;

  while (idx) {
    TREE *branch = copy(tree->branches[idx&7], sizeof(OCTREE));
    tree->branches[idx&7] = branch;
    tree = branch;
    idx >>= 3;
  };
  tree->nodes[leaf_idx] = node;
}

EXPORT NODE *get(TREE *tree, int idx) {
  // each node contains exactly 8 entries with the following exceptions:
  // a level-1 node must not contain an entry for index 0
  // a level-0 node (a leaf) can contain up to 65536 entries
  int leaf_idx = idx & 0xffff;
  idx >>= 16;
  while (idx) {
    tree = tree->branches[idx&7];
    idx >>= 3;
  };
  return tree->nodes[leaf_idx];
}

extern int next_var_idx;

FRAME initial_frame;

EXPORT void initialize_memory(void) {
  //fprintf(stderr, "%d variables -> level %d\n", next_var_idx , dynamics_level);

  //fprintf(stderr, "%d variables -> level %d\n", next_var_idx , dynamics_level);

  #ifdef use_thread_local_storage
    tls = &thread_local_storage;
  #endif

  TLS_frame = &initial_frame;

  if (next_var_idx > 32768) {
    dynamics_level = 6;
    TLS_frame->dynamics = (TREE *)&empty_dynamics_level_6;
  } else if (next_var_idx > 4096) {
    dynamics_level = 5;
    TLS_frame->dynamics = (TREE *)&empty_dynamics_level_5;
  } else if (next_var_idx > 512) {
    dynamics_level = 4;
    TLS_frame->dynamics = (TREE *)&empty_dynamics_level_4;
  } else {
    dynamics_level = 3;
    TLS_frame->dynamics = (TREE *)&empty_dynamics_level_3;
  }
  int attributes_count =
    next_polymorphic_function > next_polymorphic_function_with_setter
    ? next_polymorphic_function
    : next_polymorphic_function_with_setter;

  OCTREE *uninitialized_attributes;
  if (attributes_count > 28672) {
    attributes_level = 6;
    undefined_attributes = &undefined_attributes_level_5;
    no_attributes = &no_attributes_level_5;
    uninitialized_attributes = &no_attributes_level_5;
  } else if (attributes_count > 3584) {
    attributes_level = 5;
    undefined_attributes = &undefined_attributes_level_4;
    no_attributes = &no_attributes_level_3;
    uninitialized_attributes = &no_attributes_level_4;
  } else if (attributes_count > 448) {
    attributes_level = 4;
    undefined_attributes = &undefined_attributes_level_3;
    no_attributes = &no_attributes_level_3;
    uninitialized_attributes = &no_attributes_level_3;
  } else {
    attributes_level = 3;
    undefined_attributes = &undefined_attributes_level_2;
    no_attributes = &no_attributes_level_2;
    uninitialized_attributes = &no_attributes_level_2;
  }
  int i;
  for (i = 0; i < 7; ++i) {
    attributes__types__uninitialized.nodes[i] = uninitialized_attributes;
  }

  TLS_constants = allocate(constants_count*sizeof(NODE *));
}

EXPORT void terminate(int exit_code) {
  exit(exit_code);
}

static int already_sorted;

typedef int (*COMPARE_FUNCTION)(const void *, const void *);

static int compare_function_names(
  const BUILTIN_FUNCTION_NAME *left, const BUILTIN_FUNCTION_NAME *right
) {
  if (left->func < right->func)
    return -1;
  else if (left->func > right->func)
    return 1;
  else
    return 0;
}

EXPORT const char *get_func_name(FUNC func) {
  const int n = sizeof(builtin_function_names)/sizeof(*builtin_function_names);
  if (!already_sorted) {
    qsort(
      builtin_function_names, n,
      sizeof(BUILTIN_FUNCTION_NAME), (COMPARE_FUNCTION)compare_function_names);
    already_sorted = true;
  }
  int e = n;
  int s = 0;
  while (e-1 > s) {
    int i = (s+e)/2;
    if (func >= builtin_function_names[i].func)
      s = i;
    else
      e = i;
  }
  BUILTIN_FUNCTION_NAME *bfn = &builtin_function_names[s];
  if (func == bfn->func) return bfn->name;
  if (func == invalid_continuation) return "invalid continuation";
  if (func == no_such_attribute) return "no_such_attribute";
  if (func == catcher) return "catcher";
  return NULL;
}

static int do_print_empty_err_line = false;

void err_header(const char *msg, ...) {
  va_list args;
  va_start(args, msg);
  if (do_print_empty_err_line) {
    putc('\n', stderr);
    do_print_empty_err_line = false;
  }
  fprintf(stderr, "**********\n* ");
  vfprintf(stderr, msg, args);
  fprintf(stderr, "\n*\n\n");
  va_end(args);
}

void err_info(const char *msg, ...) {
  va_list args;
  va_start(args, msg);
  if (do_print_empty_err_line) {
    putc('\n', stderr);
    do_print_empty_err_line = false;
  }
  vfprintf(stderr, msg, args);
  fprintf(stderr, "\n\n");
  va_end(args);
}

void err_write(const char *msg, ...) {
  va_list args;
  va_start(args, msg);
  vfprintf(stderr, msg, args);
  va_end(args);
  do_print_empty_err_line = true;
}

static void skip_argument(void) {
  main_argv[1] = main_argv[0];
  ++main_argv;
  --main_argc;
}

extern void debug(FUNC entry);

static void open_log_file(void) {
  skip_argument();
  const char *s = main_argv[0];
  const char *p = s;
  while (*p) {
    if (*p++ == '/') s = p;
  }
  char *home = getenv("HOME");
  if (!home) {
    runtime_error(
      "%sing failed due to unset HOME-environment variable",
      event__mode == EM__RECORD ? "Log" : "Replay");
  }
  char *filename = allocate_memory(strlen(home)+strlen(s)+24);
  sprintf(filename, "%s/.funky/%s-event.log", home, s);
  if (event__mode == EM__RECORD) {
    fprintf(stderr, "logging events to \"%s\"\n", filename);
  }
  log_fp = fopen(filename, event__mode == EM__RECORD ? "w" : "r");
  if (!log_fp) {
    perror(filename);
    exit(EXIT_FAILURE);
  }
  deallocate_memory(filename);
}

EXPORT int be_verbose = false;
static int do_dump = false;

#define WRAPPER 0
#define CATCHER 1
#define TOPLEVEL 2

EXPORT TAB_NUM wrapper_code[] = { // -> try(main)
  0, // no slots
  0, // no parameters
  0, // replaced with <main_idx> - call the "main" function of the application
  0, // with no arguments
  0, // and no results desired
  LET, // used as a return
  1, // return one argument:
  0, // replaced with <undefined_idx> - the value <std::undefined>
  -1 // tail call - return to the caller
};

EXPORT TAB_NUM toplevel_code[] = {
  1, // one slot
  0, // no parameters
  -(0x10000|WRAPPER), // call the "wrapper"
  0, // with no arguments
  1, // and a single desired result
  4, // which shall be stored in <temp_1>
  -(0x10000|CATCHER), // call the "catcher"
  1, // with a single argument
  4, // <temp_1>, which was returned by the previous call
  0, // and expect no results because the "catcher" will never return
  0, // dummy functor - a dummy statement at the end the function
  0, // no arguments - to make the previous call "syntactically" valid
  -1, // tail call (this marks the end of the function)
};

extern FUNKY_VARIABLE *resolve_symbol(const char *name);

extern TAB_NUM encode_var_idx(TAB_NUM var_idx);

EXPORT __attribute__ ((noreturn)) void run(FUNKY_MODULE *module) {
  main_module = module;
  int i = 1;
  check_option:
  if (i < main_argc) {
    if (strcmp(main_argv[1], "++RECORD++") == 0) {
      event__mode = EM__RECORD;
      open_log_file();
    }
    if (strcmp(main_argv[i], "++VERBOSE++") == 0) {
      be_verbose = true;
      ++i;
      goto check_option;
    }
    if (strcmp(main_argv[i], "++DUMP++") == 0) {
      do_dump = true;
      ++i;
      goto check_option;
    }
    if (strcmp(main_argv[i], "++PROFILE++") == 0) {
      do_profile = true;
      ++i;
      goto check_option;
    }
    if (strcmp(main_argv[i], "++TRACE++") == 0) {
      do_trace = true;
      ++i;
      goto check_option;
    }
  }
  if (i > 1) {
    int j = 1;
    while (i < main_argc) {
      main_argv[j++] = main_argv[i++];
    }
    main_argc = j;
  }
  if (be_verbose) do_show_debug_info = true;
  if (do_dump) {
    dump_all();
  } else {
    initialize_runtime();
    undefined = (NODE *)&std_types___undefined;
    initialize_undefined_attributes();
    initialize_all();
    no_such_attribute_node.attributes = c_function.attributes;

    FUNKY_VARIABLE *undefined = resolve_symbol("undefined\000std_types");
    int main_idx =
      main_module->constants_base-TLS_constants+main_module->constants_count-1;
    wrapper_code[2] = -(0x10000|main_idx);
    wrapper_code[7] = encode_var_idx(undefined->var_idx);
    TLS_constants[WRAPPER] = create_function(wrapper_code);
    TLS_constants[CATCHER] = create_c_function(catcher, 1);
    TLS_constants[TOPLEVEL] = create_function(toplevel_code);

    initialize_environment();
    make_existing_objects_static();

    FUNKY_CONSTANT *entry =
      &main_module->constants[main_module->constants_count-1];
    if (entry->type == FLT_FUNCTION) {
      TLS_myself = TLS_constants[TOPLEVEL];
      TLS_deny_io = 0;
      if (do_profile || do_trace) {
	profiler();
      } else {
	interpreter();
      }
    } else {
      unrecoverable_error(
	"The main entry (last constant of main module) is not a function!");
    }
  }
  exit(EXIT_SUCCESS);
}

EXPORT void initialize_funky_runtime(FUNKY_MODULE *module) {
  main_module = module;
  initialize_runtime();
  undefined = (NODE *)&std_types___undefined;
  initialize_undefined_attributes();
  initialize_all();
  no_such_attribute_node.attributes = c_function.attributes;
  initialize_environment();
  make_existing_objects_static();
}
