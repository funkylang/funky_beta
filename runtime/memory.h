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

#if defined(__GNUC__) && !defined(__clang__) && !defined(CODEBLOCKS) && defined(__x86_64)
  #define GCC_64
#endif

#ifdef GCC_64
  #define REGISTER register
  #define ASM(x) asm(x)
#else
  #define REGISTER extern
  #define ASM(x)
#endif

typedef union TREE TREE;

union TREE {
  TREE *branches[0];
  NODE *nodes[0];
};

#define IO_ACCESS 1

typedef union FRAME {
  struct {
    TREE *dynamics;
    NODE **constants;
    union FRAME *link;
    const TAB_NUM *code;
    NODE *slots[];
  };
  TREE tree;
} FRAME;

typedef struct {

#ifndef GCC_64
  const TAB_NUM *code;
  FRAME *frame;

  NODE *myself;
    // the function object of the called function
#endif

  int argument_count;
    // the number of input arguments of the current call

  int result_count;
    // the number of results the caller expects

  int deny_io;
    // counts the call levels since IO was denied

  NODE **constants;
    // a pointer to a table of constants

  NODE *arguments[16];
    // the input arguments or results of the current C call
} THREAD_LOCAL_STORAGE;

//#define use_thread_local_storage

#ifdef use_thread_local_storage
  REGISTER THREAD_LOCAL_STORAGE *tls ASM("r12");
  #define TLS (*tls)
#else
  extern THREAD_LOCAL_STORAGE thread_local_storage;
  #define TLS thread_local_storage
#endif

#ifdef GCC_64
  REGISTER const TAB_NUM *code ASM("r15");
  REGISTER FRAME *frame ASM("r14");
  REGISTER NODE *myself ASM("r13");
  #define TLS_code code
  #define TLS_frame frame
  #define TLS_myself myself
#else
  #define TLS_code TLS.code
  #define TLS_frame TLS.frame
  #define TLS_myself TLS.myself
#endif

#define TLS_argument_count TLS.argument_count
#define TLS_result_count TLS.result_count
#define TLS_deny_io TLS.deny_io
#define TLS_constants TLS.constants

#define TLS_arguments TLS.arguments

extern void *node_buf_soft_limit;
extern void *node_p;
extern void *update_start_p; // helps to prevent unnecessary duplications

extern void *static_node_buf;
extern void *static_node_buf_end;

extern void *coll_node_buf;
extern void *coll_node_buf_end;

extern long current_mark;

extern size_t instruction_counter;

extern int caught_sighup;
extern int caught_sigkill;
extern int caught_sigusr1;
extern int caught_sigusr2;
extern int child_changed_state;
extern int window_changed_size;

typedef struct MEMORY_BLOCK {
  struct MEMORY_BLOCK *link;
  long mark;
  DESTRUCTOR destructor;
} MEMORY_BLOCK;

extern __attribute__ ((noreturn)) void out_of_memory_error(void);
extern __attribute__ ((noreturn)) void stack_overflow_error(void);
extern __attribute__ ((noreturn)) void invalid_continuation_error(void);

extern void *allocate(long size);
extern void *allocate_and_clear(long size);
extern void *allocate_large(long size);
extern void *allocate_memory(size_t size);
extern void *reallocate_memory(void * buf, size_t size);
extern void deallocate_memory(void *buf);
extern void allocate_arguments(void);
extern void *copy(const void *buf, long size);

extern void set(TREE *tree, int idx, NODE *node);
  // the toplevel node contains upto 8 branches
  // all other nodes contain exactly 8 branches
  // the toplevel node is updated inplace
  // all other modified nodes are copied if necessary

extern NODE *get(TREE *tree, int idx);
  // the leaf nodes can contain any number of leafs
  // all other nodes contain upto 8 branches

extern void set_attr(TREE *tree, int idx, NODE *node);
extern NODE *get_attr(TREE *tree, int idx);

extern NODE *get_attribute(NODE *node, int idx);
extern void set_attribute(ATTRIBUTES *attributes, int idx, void *attr);

extern const char *indent_to_string(int indent);
extern int print(char **buf_p, const char *format, ...);
extern int debug_print(int indent, char *buf, const char *format, ...);
extern int debug_print_indent(int *indent_p, char **buf_p);
extern int debug_print_head(int *indent_p, char **buf_p, const char *format, ...);

extern void join_nodes(void *left_node_pp, void *right_node_pp);
extern NODE *clone_object_and_attributes(NODE *node);

extern NODE *undefined;

extern void invalid_index_error(void);
extern void divide_by_zero_error(void);
extern void not_yet_implemented_error(void);
extern void no_such_function(void);

#ifdef __CYGWIN__
  extern FUNC invalid_continuation;
#else
  extern void invalid_continuation(void);
#endif

extern int is_a_power_of_two(int n);

extern long total_garbage_collections;

extern void begin_garbage_collection();
extern void end_garbage_collection();
extern ATTRIBUTES *collect_attributes(ATTRIBUTES *attributes);
extern TREE *collect_dynamics(TREE *dynamics);
extern NODE *collect_node(NODE *node);

extern int do_show_debug_info;

typedef enum {
  EM__NORMAL,
  EM__RECORD,
  EM__REPLAY
} EVENT__MODE;

extern EVENT__MODE event__mode;

extern void record__event(const char *name);
extern void successful__action(const char *name);
extern void failed__action(const char *name);
extern void replay__event(const char *name);
extern int replay__action(const char *name);
extern void report__event(const char *name);

extern void print__pointer(const void *ptr);
extern void store__pointer(const void *ptr);
extern void retrieve__pointer(const void **ptr_p);
extern void print__integer(int val);
extern void store__integer(int val);
extern void retrieve__integer(int *val_p);
extern void print__unsigned_integer(unsigned int val);
extern void store__unsigned_integer(unsigned int val);
extern void retrieve__unsigned_integer(unsigned int *val_p);
extern void print__long_integer(long val);
extern void store__long_integer(long val);
extern void retrieve__long_integer(long *val_p);
extern void print__unsigned_long_integer(unsigned long val);
extern void store__unsigned_long_integer(unsigned long val);
extern void retrieve__unsigned_long_integer(unsigned long *val_p);
extern void print__memory(const void *buf, long len);
extern void store__memory(const void *buf, long len);
extern long retrieve__memory(uint8_t **buf_p);
extern void retrieve__fixed_memory(uint8_t *buf, long size);
extern void print__c_string(const char *buf);
extern void store__c_string(const char *buf);
extern void retrieve__c_string(char **buf_p);
extern void print__int_array(const int *buf, long len);
extern void store__int_array(const int *buf, long len);
extern long retrieve__int_array(int **buf_p);

extern NODE *last_node;
extern int last_attr_idx;

extern const char *get_func_name(FUNC func);
extern const char *poly_name(TAB_NUM idx);
extern int main_argc;
extern char **main_argv;

extern __attribute__ ((noreturn)) void run(FUNKY_MODULE *module);
extern void initialize_funky_runtime(FUNKY_MODULE *module);
  // for testing

extern void retrieve_continuation_info(
  const TAB_NUM *code, const char **module_name_p, const char **function_name_p,
  int *line_no_p, int *column_no_p);
