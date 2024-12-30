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

// common defines

#define false 0
#define true 1

#define TARGET_64 (UINTPTR_MAX == 0xffffffffffffffffUL)

#define ALLOCATION_SIZE(size) (((size)+sizeof(void *)-1)&-sizeof(void *))

#define MAKE_ATTRIBUTE_VALUE(node) ((NODE *)(((uintptr_t)(node))+1))
#define RETRIEVE_ATTRIBUTE_VALUE(node) ((NODE *)(((uintptr_t)(node))-1))
#define CONTAINS_AN_ATTRIBUTE_VALUE(node) (((uintptr_t)(node))&1)

#define ENCODE_ADDRESS(addr) ((void *)((uintptr_t)addr | 2))
#define DECODE_ADDRESS(addr) ((void *)((uintptr_t)addr & -3))
#define IS_AN_INVALID_ADDRESS(addr) ((uintptr_t)addr & 2)

#define MSB (1L << (8*sizeof(void *)-1))
#define ENCODE_TO_LENGTH(addr) ((void *)(((uintptr_t)addr >> 1) | MSB))
#define DECODE_FROM_LENGTH(addr) ((void *)((uintptr_t)addr << 1))
#define IS_AN_INVALID_LENGTH(addr) ((uintptr_t)addr & MSB)

#define IS_COLLECTED(addr) (((void *)(addr)) >= coll_node_buf && ((void *)(addr)) < coll_node_buf_end)
#define IS_STATIC(addr) (((void *)(addr)) >= static_node_buf && ((void *)(addr)) < static_node_buf_end)
#define IS_ALREADY_MARKED(addr) ((((MEMORY_BLOCK *)(addr))-1)->mark == current_mark)
#define MARK(addr) (((MEMORY_BLOCK *)(addr))-1)->mark = current_mark;

#define TAB_NUM int

#ifndef EXPORT
  #define EXPORT
#endif

// common basic types

union NODE;
typedef union NODE NODE;

typedef void (*FUNC)(void);
typedef NODE *(*NODE_GETTER)(void);
typedef void (*NODE_SETTER)(NODE *);
typedef void *COLLECTOR(void *);
typedef void (*DESTRUCTOR)(void *);

// common structs

typedef struct VTABLE {
  size_t size;
  int type_no;
  COLLECTOR *collect;
  int (*to_int8)(NODE *node, int8_t *result_p);
  int (*to_int16)(NODE *node, int16_t *result_p);
  int (*to_int32)(NODE *node, int32_t *result_p);
  int (*to_int64)(NODE *node, int64_t *result_p);
  int (*to_uint8)(NODE *node, uint8_t *result_p);
  int (*to_uint16)(NODE *node, uint16_t *result_p);
  int (*to_uint32)(NODE *node, uint32_t *result_p);
  int (*to_uint64)(NODE *node, uint64_t *result_p);
  int (*to_uchar32)(NODE *node, uint32_t *result_p);
  int (*to_bool)(NODE *node, int *result_p);
  int (*to_int)(NODE *node, int *result_p);
  int (*to_uint)(NODE *node, unsigned int *result_p);
  int (*to_long)(NODE *node, long *result_p);
  int (*to_ulong)(NODE *node, unsigned long *result_p);
  int (*to_float)(NODE *node, float *result_p);
  int (*to_double)(NODE *node, double *result_p);
  int (*to_c_string)(NODE *node, char **result_p);
  int (*to_octets)(NODE *node, const uint8_t** buf_p, long *size_p);
  int (*get_item_of)(NODE *node, long idx, NODE **result_p);
  int (*length_of)(NODE *node, long *result_p);
  int (*unfold)(NODE *node);
  long (*debug_string)(NODE *node, int indent, int max_depth, char *buf);
} VTABLE;

typedef struct OCTREE {
  struct OCTREE *nodes[8];
} OCTREE;

typedef struct {
  struct OCTREE *nodes[7];
  struct VTABLE *vtable;
} ATTRIBUTES;

typedef struct {
  FUNC type;
  ATTRIBUTES *attributes;
} SIMPLE_NODE;

// common runtime_error messages

extern int show_debug_info;
extern void err_header(const char *msg, ...);
extern void err_info(const char *msg, ...);
extern void err_write(const char *msg, ...);
extern void runtime_error(const char *msg, ...);
extern void out_of_memory_error(void) __attribute__ ((noreturn));

#define DEBUG if (do_show_debug_info) {
#define END }
