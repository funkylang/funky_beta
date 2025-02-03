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

#define RESPAWN 47

typedef struct {
  char last_cmd[256];

  int has_completed_initializers;
  int io_occurred;

  int do_break_after_initializers;
  int break_on_return;
  int break_on_io;

  long break_at;
  FRAME *break_frame;
  const TAB_NUM *break_code_start;
  const TAB_NUM *break_code_end;
  long best_backstep_position;
  long backstep_start;
 } SHARED_DEBUG_DATA;

extern int do_debug;

extern SHARED_DEBUG_DATA *sdd;

extern SHARED_DEBUG_DATA *create_snapshot(void);
extern void debug(void);
