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

extern void profiler(void);

enum {
  COUNT_instructions,
  COUNT_garbage_collections,
  COUNT_tail_calls,
  COUNT_C_function_calls,
  COUNT_allocate,
  COUNT_set_local,
  COUNT_set_dynamic,
  COUNT_get_local,
  COUNT_get_constant,
  COUNT_get_dynamic,
  COUNT_get_attr,
  COUNT_set_attribute,
  TOTAL_COUNTS
};

typedef struct {
  long counts[TOTAL_COUNTS];
} PROFILE;

extern PROFILE profile;
extern const char *count_names[];
