#include <stddef.h>
#include <stdint.h>

#include "runtime/common.h"
#include "runtime/builtins.h"
#include "runtime/fko.h"
#include "runtime/memory.h"

enum {
  number__0 = 1,
  unique__NONE,
  func__std_types___hash_set,
  func__empty_hash_set_entry___retrieve,
  func__hash_set_leaf___retrieve,
  func__empty_collision_list_entry___retrieve,
  func__collision_list_entry___retrieve,
  func__hash_set_node___retrieve,
  func__empty_hash_set_entry___insert,
  func__hash_set_leaf___insert,
  func__empty_collision_list_entry___insert,
  func__collision_list_entry___insert,
  func__hash_set_node___insert,
  func__empty_hash_set_entry___delete,
  func__hash_set_leaf___delete,
  func__empty_collision_list_entry___delete,
  func__collision_list_entry___delete,
  func__hash_set_node___delete,
  func__empty_hash_set_entry___for_each_1,
  func__collision_list_entry___for_each_1,
  func__hash_set_leaf___for_each_1,
  func__hash_set_node___for_each_1,
  func__std_types___hash_set___for_each,
  unique__UNIT,
  func__my_reduce,
  func__empty_hash_set_entry___map_reduce_1,
  func__hash_set_leaf___map_reduce_1,
  func__empty_collision_list_entry___map_reduce_1,
  func__collision_list_entry___map_reduce_1,
  func__hash_set_node___map_reduce_1,
  func__std_types___hash_set___map_reduce,
  func__std___hash_set,
  string__898155714,
  tuple__undefined___undefined,
  list__empty_hash_set_entry___empty_hash_set_entry___empty_hash_set_entry___empty_hash_set_entry___empty_hash_set_entry___empty_hash_set_entry___empty_hash_set_entry___empty_hash_set_entry,
  number__0xc0000000,
  func__std_types__hash_set__1,
  func__std_types__hash_set__2,
  func__std_types__hash_set__2__1,
  func__std_types__hash_set__2__2,
  func__std_types__hash_set__2__1__1,
  func__std_types__hash_set__2__1__2,
  number__1,
  func__std_types__hash_set__2__2__1,
  func__std_types__hash_set__2__2__2,
  func__hash_set_leaf__retrieve__1,
  func__hash_set_leaf__retrieve__2,
  func__collision_list_entry__retrieve__1,
  func__collision_list_entry__retrieve__2,
  number__7,
  number__3,
  func__empty_hash_set_entry__insert__1,
  func__empty_hash_set_entry__insert__2,
  func__hash_set_leaf__insert__1,
  func__hash_set_leaf__insert__2,
  func__collision_list_entry__insert__1,
  func__collision_list_entry__insert__2,
  func__collision_list_entry__insert__2__1,
  func__collision_list_entry__insert__2__2,
  func__hash_set_leaf__delete__1,
  func__hash_set_leaf__delete__2,
  func__collision_list_entry__delete__1,
  func__collision_list_entry__delete__2,
  func__hash_set_node__delete__1,
  func__hash_set_node__delete__2,
  func__hash_set_node__delete__1__1,
  func__hash_set_node__delete__1__2,
  func__collision_list_entry__for_each_1__1,
  func__collision_list_entry__for_each_1__2,
  func__collision_list_entry__for_each_1__2__1,
  func__collision_list_entry__for_each_1__2__2,
  func__hash_set_node__for_each_1__1,
  func__hash_set_node__for_each_1__2,
  number__8,
  func__hash_set_node__for_each_1__2__1,
  func__hash_set_node__for_each_1__2__2,
  func__std_types__hash_set___for_each__1,
  func__my_reduce__1,
  func__my_reduce__2,
  func__my_reduce__2__1,
  func__my_reduce__2__2,
  number__2,
  number__4,
  number__5,
  number__6,
  func__std_types__hash_set___map_reduce__1,
  func__std_types__hash_set___map_reduce__2,
  func__std__hash_set__1,
  func__std__hash_set__2
};

enum {
  var_no__contents_of = FIRST_VAR+0,
  var_no__retrieve,
  var_no__insert,
  var_no__delete,
  var_no__std___is_a_hash_set,
  var_no__std_types___object,
  var_no__is_a_hash_set,
  var_no__std_types___hash_set,
  var_no__is_an_empty_entry,
  var_no__empty_hash_set_entry,
  var_no__empty_collision_list_entry,
  var_no__length_of,
  var_no__std___empty_hash_set,
  var_no__hash_set_leaf,
  var_no__collision_list_entry,
  var_no__hash_set_node,
  var_no__NONE,
  var_no__for_each_1,
  var_no__for_each,
  var_no__UNIT,
  var_no__reduction_function,
  var_no__my_reduce,
  var_no__mapping_function,
  var_no__map_reduce_1,
  var_no__map_reduce,
  var_no__std___hash_set,
  var_no__serialization_tag_of,
  var_no__empty_collection_of,
  var_no__false,
  var_no__true,
  var_no__std_types___set,
  var_no__tuple,
  var_no__undefined,
  var_no__list,
  var_no__empty_hash_set,
  var_no__std_types__hash_set__myself,
  var_no__std_types__hash_set__key,
  var_no__std_types__hash_set__value,
  var_no__std_types__hash_set__hash_index,
  var_no__std_types__hash_set__contents,
  var_no__hash,
  var_no__std___bit_or,
  var_no__std___equal,
  var_no__if,
  var_no__std_types__hash_set__2__1__success = 4,
  var_no__std___plus = FIRST_VAR+44,
  var_no__std_types__hash_set__2__2__success = 4,
  var_no__std___minus = FIRST_VAR+45,
  var_no__empty_hash_set_entry__retrieve__self = 4,
  var_no__empty_hash_set_entry__retrieve__hash_index = 5,
  var_no__empty_hash_set_entry__retrieve__key = 6,
  var_no__hash_set_leaf__retrieve__self = 5,
  var_no__hash_set_leaf__retrieve__hash_index = 6,
  var_no__hash_set_leaf__retrieve__key = 7,
  var_no__hash_set_leaf__retrieve__my_hash_index = 8,
  var_no__hash_set_leaf__retrieve__my_key = 9,
  var_no__empty_collision_list_entry__retrieve__self = 4,
  var_no__empty_collision_list_entry__retrieve__dummy = 5,
  var_no__empty_collision_list_entry__retrieve__key = 6,
  var_no__collision_list_entry__retrieve__self = 5,
  var_no__collision_list_entry__retrieve__dummy = 6,
  var_no__collision_list_entry__retrieve__key = FIRST_VAR+46,
  var_no__collision_list_entry__retrieve__my_key = 7,
  var_no__collision_list_entry__retrieve__my_link = FIRST_VAR+47,
  var_no__hash_set_node__retrieve__self = 6,
  var_no__hash_set_node__retrieve__hash_index = 7,
  var_no__hash_set_node__retrieve__key = 8,
  var_no__hash_set_node__retrieve__idx = 9,
  var_no__std___bit_and = FIRST_VAR+48,
  var_no__std___shift_right,
  var_no__empty_hash_set_entry__insert__self = 5,
  var_no__empty_hash_set_entry__insert__hash_index = FIRST_VAR+50,
  var_no__empty_hash_set_entry__insert__key,
  var_no__new,
  var_no__hash_set_leaf__insert__self,
  var_no__hash_set_leaf__insert__hash_index,
  var_no__hash_set_leaf__insert__key,
  var_no__hash_set_leaf__insert__my_hash_index,
  var_no__hash_set_leaf__insert__my_key,
  var_no__hash_set_leaf__insert__2__new_node = 4,
  var_no__hash_set_leaf__insert__2__did_insert = 5,
  var_no__empty_collision_list_entry__insert__self = 5,
  var_no__empty_collision_list_entry__insert__dummy = 6,
  var_no__empty_collision_list_entry__insert__key = 7,
  var_no__collision_list_entry__insert__self = FIRST_VAR+58,
  var_no__collision_list_entry__insert__dummy,
  var_no__collision_list_entry__insert__key,
  var_no__collision_list_entry__insert__my_key,
  var_no__collision_list_entry__insert__my_link,
  var_no__collision_list_entry__insert__2__new_link,
  var_no__collision_list_entry__insert__2__did_insert = 4,
  var_no__hash_set_node__insert__self = 8,
  var_no__hash_set_node__insert__hash_index = 9,
  var_no__hash_set_node__insert__key = 10,
  var_no__hash_set_node__insert__idx = 11,
  var_no__hash_set_node__insert__did_insert = 12,
  var_no__empty_hash_set_entry__delete__self = 4,
  var_no__empty_hash_set_entry__delete__hash_index = 5,
  var_no__empty_hash_set_entry__delete__key = 6,
  var_no__hash_set_leaf__delete__self = FIRST_VAR+64,
  var_no__hash_set_leaf__delete__hash_index = 5,
  var_no__hash_set_leaf__delete__key = 6,
  var_no__hash_set_leaf__delete__my_hash_index = 7,
  var_no__hash_set_leaf__delete__my_key = 8,
  var_no__empty_collision_list_entry__delete__self = 4,
  var_no__empty_collision_list_entry__delete__dummy = 5,
  var_no__empty_collision_list_entry__delete__key = 6,
  var_no__collision_list_entry__delete__self = 5,
  var_no__collision_list_entry__delete__dummy = 6,
  var_no__collision_list_entry__delete__key = FIRST_VAR+65,
  var_no__collision_list_entry__delete__my_key,
  var_no__collision_list_entry__delete__my_link,
  var_no__collision_list_entry__delete__2__did_delete = 5,
  var_no__hash_set_node__delete__self = FIRST_VAR+68,
  var_no__hash_set_node__delete__hash_index = 8,
  var_no__hash_set_node__delete__key = 9,
  var_no__hash_set_node__delete__idx = 10,
  var_no__hash_set_node__delete__success = 11,
  var_no__all_of = FIRST_VAR+69,
  var_no__empty_hash_set_entry__for_each_1__self = 4,
  var_no__next = FIRST_VAR+70,
  var_no__collision_list_entry__for_each_1__self = 4,
  var_no__collision_list_entry__for_each_1__saved_context = 5,
  var_no__break = FIRST_VAR+71,
  var_no__basic_loops___self,
  var_no__basic_loops___saved_context_of,
  var_no__collision_list_entry__for_each_1__1__myself = 5,
  var_no__collision_list_entry__for_each_1__2__2__key = 4,
  var_no__collision_list_entry__for_each_1__2__2__link = 5,
  var_no__basic_loops___body = FIRST_VAR+74,
  var_no__hash_set_leaf__for_each_1__self = 4,
  var_no__hash_set_leaf__for_each_1__hash = 5,
  var_no__hash_set_leaf__for_each_1__key = 6,
  var_no__hash_set_node__for_each_1__self = 4,
  var_no__hash_set_node__for_each_1__saved_context = 5,
  var_no__basic_loops___from = FIRST_VAR+75,
  var_no__hash_set_node__for_each_1__1__myself = 5,
  var_no__hash_set_node__for_each_1__2__idx = FIRST_VAR+76,
  var_no__std___less,
  var_no__std___not,
  var_no__std_types__hash_set___for_each__self = 5,
  var_no__std_types__hash_set___for_each__body = 6,
  var_no__std_types__hash_set___for_each__finally = FIRST_VAR+79,
  var_no__std_types__hash_set___for_each__saved_context = 7,
  var_no__basic_loops___finally = FIRST_VAR+80,
  var_no__std_types__hash_set__for_each__1__myself = 5,
  var_no__my_reduce__left = FIRST_VAR+81,
  var_no__my_reduce__right,
  var_no__empty_hash_set_entry__map_reduce_1__self = 4,
  var_no__hash_set_leaf__map_reduce_1__self = 5,
  var_no__hash_set_leaf__map_reduce_1__my_hash_index = 6,
  var_no__hash_set_leaf__map_reduce_1__my_key = 7,
  var_no__empty_collision_list_entry__map_reduce_1__self = 4,
  var_no__collision_list_entry__map_reduce_1__self = 6,
  var_no__collision_list_entry__map_reduce_1__my_key = 7,
  var_no__collision_list_entry__map_reduce_1__my_link = 8,
  var_no__hash_set_node__map_reduce_1__self = 8,
  var_no__hash_set_node__map_reduce_1__r12 = 9,
  var_no__hash_set_node__map_reduce_1__r34 = 10,
  var_no__hash_set_node__map_reduce_1__r56 = 11,
  var_no__hash_set_node__map_reduce_1__r78 = 12,
  var_no__hash_set_node__map_reduce_1__r1234 = 13,
  var_no__hash_set_node__map_reduce_1__r5678 = 14,
  var_no__std_types__hash_set___map_reduce__self = FIRST_VAR+83,
  var_no__std_types__hash_set___map_reduce__map_function,
  var_no__std_types__hash_set___map_reduce__reduce_function,
  var_no__std_types__hash_set___map_reduce__unit,
  var_no__append,
  var_no__std__hash_set__keys = 4,
  var_no__std__hash_set__result = FIRST_VAR+88,
  var_no__std__hash_set__1__key = 4
};

static TAB_NUM tfunc__std_types__hash_set__1[] = {
  1, // locals
  0, // no parameters
  // 115: ... retrieve(contents hash_index key)
  var_no__retrieve, 3, var_no__std_types__hash_set__contents, var_no__std_types__hash_set__hash_index, var_no__std_types__hash_set__key, 1, 4,
  // 115: -> retrieve(contents hash_index key)
  LET, 1, 4, -1
};

static TAB_NUM tfunc__std_types__hash_set__2__1__1[] = {
  3, // locals
  0, // no parameters
  // 125: ... length_of(myself)
  var_no__length_of, 1, var_no__std_types__hash_set__myself, 1, 6,
  // 125: ... length_of(myself)+1
  var_no__std___plus, 2, 6, -number__1, 1, 5,
  // 122: ->
  // 123:   myself
  // 124:     .contents_of contents
  // 125:     .length_of length_of(myself)+1
  LET, -2, var_no__std_types__hash_set__myself, var_no__contents_of, var_no__std_types__hash_set__contents, var_no__length_of, 5, 4,
  // 122: ->
  // 123:   myself
  // 124:     .contents_of contents
  // 125:     .length_of length_of(myself)+1
  LET, 1, 4, -1
};

static TAB_NUM tfunc__std_types__hash_set__2__1__2[] = {
  1, // locals
  0, // no parameters
  // 126: ... myself(.contents_of contents)
  LET, -1, var_no__std_types__hash_set__myself, var_no__contents_of, var_no__std_types__hash_set__contents, 4,
  // 126: -> myself(.contents_of contents)
  LET, 1, 4, -1
};

static TAB_NUM tfunc__std_types__hash_set__2__1[] = {
  1, // locals
  0, // no parameters
  // 119: insert &contents $success hash_index key
  var_no__insert, 3, var_no__std_types__hash_set__contents, var_no__std_types__hash_set__hash_index, var_no__std_types__hash_set__key, 2, var_no__std_types__hash_set__contents, var_no__std_types__hash_set__2__1__success,
  // 120: if
  // 121:   success
  // 122:   ->
  // 123:     myself
  // 124:       .contents_of contents
  // 125:       .length_of length_of(myself)+1
  // 126:   -> myself(.contents_of contents)
  var_no__if, 3, var_no__std_types__hash_set__2__1__success, -func__std_types__hash_set__2__1__1, -func__std_types__hash_set__2__1__2, -1
};

static TAB_NUM tfunc__std_types__hash_set__2__2__1[] = {
  3, // locals
  0, // no parameters
  // 134: ... length_of(myself)
  var_no__length_of, 1, var_no__std_types__hash_set__myself, 1, 6,
  // 134: ... length_of(myself)-1
  var_no__std___minus, 2, 6, -number__1, 1, 5,
  // 131: ->
  // 132:   myself
  // 133:     .contents_of contents
  // 134:     .length_of length_of(myself)-1
  LET, -2, var_no__std_types__hash_set__myself, var_no__contents_of, var_no__std_types__hash_set__contents, var_no__length_of, 5, 4,
  // 131: ->
  // 132:   myself
  // 133:     .contents_of contents
  // 134:     .length_of length_of(myself)-1
  LET, 1, 4, -1
};

static TAB_NUM tfunc__std_types__hash_set__2__2__2[] = {
  0, // locals
  0, // no parameters
  // 135: -> myself
  LET, 1, var_no__std_types__hash_set__myself, -1
};

static TAB_NUM tfunc__std_types__hash_set__2__2[] = {
  1, // locals
  0, // no parameters
  // 128: delete &contents $success hash_index key
  var_no__delete, 3, var_no__std_types__hash_set__contents, var_no__std_types__hash_set__hash_index, var_no__std_types__hash_set__key, 2, var_no__std_types__hash_set__contents, var_no__std_types__hash_set__2__2__success,
  // 129: if
  // 130:   success
  // 131:   ->
  // 132:     myself
  // 133:       .contents_of contents
  // 134:       .length_of length_of(myself)-1
  // 135:   -> myself
  var_no__if, 3, var_no__std_types__hash_set__2__2__success, -func__std_types__hash_set__2__2__1, -func__std_types__hash_set__2__2__2, -1
};

static TAB_NUM tfunc__std_types__hash_set__2[] = {
  0, // locals
  0, // no parameters
  // 117: if
  // 118:   value:
  // 119:     insert &contents $success hash_index key
  // 120:     if
  // 121:       success
  // 122:       ->
  // 123:         myself
  // 124:           .contents_of contents
  // 125:           .length_of length_of(myself)+1
  // 126:       -> myself(.contents_of contents)
  // ...
  var_no__if, 3, var_no__std_types__hash_set__value, -func__std_types__hash_set__2__1, -func__std_types__hash_set__2__2, -1
};

static TAB_NUM tfunc__std_types___hash_set[] = {
  1, // locals
  -3, // parameters:
  MYSELF_PARAMETER, var_no__std_types__hash_set__myself,
  MANDATORY_PARAMETER, var_no__std_types__hash_set__key,
  var_no__NONE, var_no__std_types__hash_set__value,
  // 111: ... hash(key)
  var_no__hash, 1, var_no__std_types__hash_set__key, 1, 4,
  // 111: $hash_index hash(key) | 0xc000'0000 # add sentinel hash index (3)
  var_no__std___bit_or, 2, 4, -number__0xc0000000, 1, var_no__std_types__hash_set__hash_index,
  // 112: $contents contents_of(myself)
  var_no__contents_of, 1, var_no__std_types__hash_set__myself, 1, var_no__std_types__hash_set__contents,
  // 114: NONE == value
  var_no__std___equal, 2, var_no__NONE, var_no__std_types__hash_set__value, 1, 4,
  // 113: if
  // 114:   NONE == value
  // 115:   -> retrieve(contents hash_index key)
  // 116:   :
  // 117:     if
  // 118:       value:
  // 119:         insert &contents $success hash_index key
  // 120:         if
  // 121:           success
  // 122:           ->
  // ...
  var_no__if, 3, 4, -func__std_types__hash_set__1, -func__std_types__hash_set__2, -1
};

static TAB_NUM tfunc__empty_hash_set_entry___retrieve[] = {
  3, // locals
  3, // parameters:
  var_no__empty_hash_set_entry__retrieve__self,
  var_no__empty_hash_set_entry__retrieve__hash_index,
  var_no__empty_hash_set_entry__retrieve__key,
  // 140: ... -> false
  LET, 1, var_no__false, -1
};

static TAB_NUM tfunc__hash_set_leaf__retrieve__1[] = {
  0, // locals
  0, // no parameters
  // 146: -> true
  LET, 1, var_no__true, -1
};

static TAB_NUM tfunc__hash_set_leaf__retrieve__2[] = {
  0, // locals
  0, // no parameters
  // 147: -> false
  LET, 1, var_no__false, -1
};

static TAB_NUM tfunc__hash_set_leaf___retrieve[] = {
  6, // locals
  3, // parameters:
  var_no__hash_set_leaf__retrieve__self,
  var_no__hash_set_leaf__retrieve__hash_index,
  var_no__hash_set_leaf__retrieve__key,
  // 143: self $_my_hash_index $my_key
  var_no__hash_set_leaf__retrieve__self, 0, 2, var_no__hash_set_leaf__retrieve__my_hash_index, var_no__hash_set_leaf__retrieve__my_key,
  // 145: key == my_key
  var_no__std___equal, 2, var_no__hash_set_leaf__retrieve__key, var_no__hash_set_leaf__retrieve__my_key, 1, 4,
  // 144: if
  // 145:   key == my_key
  // 146:   -> true
  // 147:   -> false
  var_no__if, 3, 4, -func__hash_set_leaf__retrieve__1, -func__hash_set_leaf__retrieve__2, -1
};

static TAB_NUM tfunc__empty_collision_list_entry___retrieve[] = {
  3, // locals
  3, // parameters:
  var_no__empty_collision_list_entry__retrieve__self,
  var_no__empty_collision_list_entry__retrieve__dummy,
  var_no__empty_collision_list_entry__retrieve__key,
  // 149: ... -> false
  LET, 1, var_no__false, -1
};

static TAB_NUM tfunc__collision_list_entry__retrieve__1[] = {
  0, // locals
  0, // no parameters
  // 155: -> true
  LET, 1, var_no__true, -1
};

static TAB_NUM tfunc__collision_list_entry__retrieve__2[] = {
  0, // locals
  0, // no parameters
  // 156: ... retrieve my_link undefined key
  var_no__retrieve, 3, var_no__collision_list_entry__retrieve__my_link, var_no__undefined, var_no__collision_list_entry__retrieve__key, -1
};

static TAB_NUM tfunc__collision_list_entry___retrieve[] = {
  4, // locals
  3, // parameters:
  var_no__collision_list_entry__retrieve__self,
  var_no__collision_list_entry__retrieve__dummy,
  var_no__collision_list_entry__retrieve__key,
  // 152: self $my_key $my_link
  var_no__collision_list_entry__retrieve__self, 0, 2, var_no__collision_list_entry__retrieve__my_key, var_no__collision_list_entry__retrieve__my_link,
  // 154: key == my_key
  var_no__std___equal, 2, var_no__collision_list_entry__retrieve__key, var_no__collision_list_entry__retrieve__my_key, 1, 4,
  // 153: if
  // 154:   key == my_key
  // 155:   -> true
  // 156:   : retrieve my_link undefined key
  var_no__if, 3, 4, -func__collision_list_entry__retrieve__1, -func__collision_list_entry__retrieve__2, -1
};

static TAB_NUM tfunc__hash_set_node___retrieve[] = {
  6, // locals
  3, // parameters:
  var_no__hash_set_node__retrieve__self,
  var_no__hash_set_node__retrieve__hash_index,
  var_no__hash_set_node__retrieve__key,
  // 159: ... hash_index & 7
  var_no__std___bit_and, 2, var_no__hash_set_node__retrieve__hash_index, -number__7, 1, 4,
  // 159: $idx (hash_index & 7)+1
  var_no__std___plus, 2, 4, -number__1, 1, var_no__hash_set_node__retrieve__idx,
  // 160: ... self(idx)
  var_no__hash_set_node__retrieve__self, 1, var_no__hash_set_node__retrieve__idx, 1, 4,
  // 160: ... hash_index >> 3
  var_no__std___shift_right, 2, var_no__hash_set_node__retrieve__hash_index, -number__3, 1, 5,
  // 160: retrieve self(idx) hash_index >> 3 key
  var_no__retrieve, 3, 4, 5, var_no__hash_set_node__retrieve__key, -1
};

static TAB_NUM tfunc__empty_hash_set_entry__insert__1[] = {
  1, // locals
  0, // no parameters
  // 168: ... new(collision_list_entry key empty_collision_list_entry)
  var_no__new, 3, var_no__collision_list_entry, var_no__empty_hash_set_entry__insert__key, var_no__empty_collision_list_entry, 1, 4,
  // 168: -> new(collision_list_entry key empty_collision_list_entry) true
  LET, 2, 4, var_no__true, -1
};

static TAB_NUM tfunc__empty_hash_set_entry__insert__2[] = {
  1, // locals
  0, // no parameters
  // 169: ... new(hash_set_leaf hash_index key)
  var_no__new, 3, var_no__hash_set_leaf, var_no__empty_hash_set_entry__insert__hash_index, var_no__empty_hash_set_entry__insert__key, 1, 4,
  // 169: -> new(hash_set_leaf hash_index key) true
  LET, 2, 4, var_no__true, -1
};

static TAB_NUM tfunc__empty_hash_set_entry___insert[] = {
  2, // locals
  3, // parameters:
  var_no__empty_hash_set_entry__insert__self,
  var_no__empty_hash_set_entry__insert__hash_index,
  var_no__empty_hash_set_entry__insert__key,
  // 167: hash_index == 3
  var_no__std___equal, 2, var_no__empty_hash_set_entry__insert__hash_index, -number__3, 1, 4,
  // 166: if
  // 167:   hash_index == 3
  // 168:   -> new(collision_list_entry key empty_collision_list_entry) true
  // 169:   -> new(hash_set_leaf hash_index key) true
  var_no__if, 3, 4, -func__empty_hash_set_entry__insert__1, -func__empty_hash_set_entry__insert__2, -1
};

static TAB_NUM tfunc__hash_set_leaf__insert__1[] = {
  0, // locals
  0, // no parameters
  // 175: -> self false
  LET, 2, var_no__hash_set_leaf__insert__self, var_no__false, -1
};

static TAB_NUM tfunc__hash_set_leaf__insert__2[] = {
  2, // locals
  0, // no parameters
  // 177: insert hash_set_node $new_node $_did_insert my_hash_index my_key
  var_no__insert, 3, var_no__hash_set_node, var_no__hash_set_leaf__insert__my_hash_index, var_no__hash_set_leaf__insert__my_key, 2, var_no__hash_set_leaf__insert__2__new_node, var_no__hash_set_leaf__insert__2__did_insert,
  // 178: insert new_node hash_index key
  var_no__insert, 3, var_no__hash_set_leaf__insert__2__new_node, var_no__hash_set_leaf__insert__hash_index, var_no__hash_set_leaf__insert__key, -1
};

static TAB_NUM tfunc__hash_set_leaf___insert[] = {
  1, // locals
  3, // parameters:
  var_no__hash_set_leaf__insert__self,
  var_no__hash_set_leaf__insert__hash_index,
  var_no__hash_set_leaf__insert__key,
  // 172: self $my_hash_index $my_key
  var_no__hash_set_leaf__insert__self, 0, 2, var_no__hash_set_leaf__insert__my_hash_index, var_no__hash_set_leaf__insert__my_key,
  // 174: key == my_key
  var_no__std___equal, 2, var_no__hash_set_leaf__insert__key, var_no__hash_set_leaf__insert__my_key, 1, 4,
  // 173: if
  // 174:   key == my_key
  // 175:   -> self false
  // 176:   :
  // 177:     insert hash_set_node $new_node $_did_insert my_hash_index my_key
  // 178:     insert new_node hash_index key
  var_no__if, 3, 4, -func__hash_set_leaf__insert__1, -func__hash_set_leaf__insert__2, -1
};

static TAB_NUM tfunc__empty_collision_list_entry___insert[] = {
  4, // locals
  3, // parameters:
  var_no__empty_collision_list_entry__insert__self,
  var_no__empty_collision_list_entry__insert__dummy,
  var_no__empty_collision_list_entry__insert__key,
  // 181: ... new(collision_list_entry key self)
  var_no__new, 3, var_no__collision_list_entry, var_no__empty_collision_list_entry__insert__key, var_no__empty_collision_list_entry__insert__self, 1, 4,
  // 181: -> new(collision_list_entry key self) true
  LET, 2, 4, var_no__true, -1
};

static TAB_NUM tfunc__collision_list_entry__insert__1[] = {
  0, // locals
  0, // no parameters
  // 187: -> self false
  LET, 2, var_no__collision_list_entry__insert__self, var_no__false, -1
};

static TAB_NUM tfunc__collision_list_entry__insert__2__1[] = {
  1, // locals
  0, // no parameters
  // 192: ... new(collision_list_entry my_key new_link)
  var_no__new, 3, var_no__collision_list_entry, var_no__collision_list_entry__insert__my_key, var_no__collision_list_entry__insert__2__new_link, 1, 4,
  // 192: -> new(collision_list_entry my_key new_link) true
  LET, 2, 4, var_no__true, -1
};

static TAB_NUM tfunc__collision_list_entry__insert__2__2[] = {
  0, // locals
  0, // no parameters
  // 193: -> self false
  LET, 2, var_no__collision_list_entry__insert__self, var_no__false, -1
};

static TAB_NUM tfunc__collision_list_entry__insert__2[] = {
  1, // locals
  0, // no parameters
  // 189: insert my_link dummy key $new_link $did_insert
  var_no__insert, 3, var_no__collision_list_entry__insert__my_link, var_no__collision_list_entry__insert__dummy, var_no__collision_list_entry__insert__key, 2, var_no__collision_list_entry__insert__2__new_link, var_no__collision_list_entry__insert__2__did_insert,
  // 190: if
  // 191:   did_insert
  // 192:   -> new(collision_list_entry my_key new_link) true
  // 193:   -> self false
  var_no__if, 3, var_no__collision_list_entry__insert__2__did_insert, -func__collision_list_entry__insert__2__1, -func__collision_list_entry__insert__2__2, -1
};

static TAB_NUM tfunc__collision_list_entry___insert[] = {
  1, // locals
  3, // parameters:
  var_no__collision_list_entry__insert__self,
  var_no__collision_list_entry__insert__dummy,
  var_no__collision_list_entry__insert__key,
  // 184: self $my_key $my_link
  var_no__collision_list_entry__insert__self, 0, 2, var_no__collision_list_entry__insert__my_key, var_no__collision_list_entry__insert__my_link,
  // 186: key == my_key
  var_no__std___equal, 2, var_no__collision_list_entry__insert__key, var_no__collision_list_entry__insert__my_key, 1, 4,
  // 185: if
  // 186:   key == my_key
  // 187:   -> self false
  // 188:   :
  // 189:     insert my_link dummy key $new_link $did_insert
  // 190:     if
  // 191:       did_insert
  // 192:       -> new(collision_list_entry my_key new_link) true
  // 193:       -> self false
  var_no__if, 3, 4, -func__collision_list_entry__insert__1, -func__collision_list_entry__insert__2, -1
};

static TAB_NUM tfunc__hash_set_node___insert[] = {
  9, // locals
  3, // parameters:
  var_no__hash_set_node__insert__self,
  var_no__hash_set_node__insert__hash_index,
  var_no__hash_set_node__insert__key,
  // 196: ... hash_index & 7
  var_no__std___bit_and, 2, var_no__hash_set_node__insert__hash_index, -number__7, 1, 4,
  // 196: $idx (hash_index & 7)+1
  var_no__std___plus, 2, 4, -number__1, 1, var_no__hash_set_node__insert__idx,
  // 197: ... self(idx)
  var_no__hash_set_node__insert__self, 1, var_no__hash_set_node__insert__idx, 1, 4,
  // 197: ... hash_index >> 3
  var_no__std___shift_right, 2, var_no__hash_set_node__insert__hash_index, -number__3, 1, 5,
  // 197: insert &self(idx) $did_insert hash_index >> 3 key
  var_no__insert, 3, 4, 5, var_no__hash_set_node__insert__key, 2, 6, 7,
  // 197: ... &self(idx)
  var_no__hash_set_node__insert__self, 2, var_no__hash_set_node__insert__idx, 6, 1, var_no__hash_set_node__insert__self,
  // 197: ... did_insert
  LET, 1, 7, 1, var_no__hash_set_node__insert__did_insert,
  // 198: -> self did_insert
  LET, 2, var_no__hash_set_node__insert__self, var_no__hash_set_node__insert__did_insert, -1
};

static TAB_NUM tfunc__empty_hash_set_entry___delete[] = {
  3, // locals
  3, // parameters:
  var_no__empty_hash_set_entry__delete__self,
  var_no__empty_hash_set_entry__delete__hash_index,
  var_no__empty_hash_set_entry__delete__key,
  // 212: ... -> self false
  LET, 2, var_no__empty_hash_set_entry__delete__self, var_no__false, -1
};

static TAB_NUM tfunc__hash_set_leaf__delete__1[] = {
  0, // locals
  0, // no parameters
  // 218: -> empty_hash_set_entry true
  LET, 2, var_no__empty_hash_set_entry, var_no__true, -1
};

static TAB_NUM tfunc__hash_set_leaf__delete__2[] = {
  0, // locals
  0, // no parameters
  // 219: -> self false
  LET, 2, var_no__hash_set_leaf__delete__self, var_no__false, -1
};

static TAB_NUM tfunc__hash_set_leaf___delete[] = {
  5, // locals
  3, // parameters:
  var_no__hash_set_leaf__delete__self,
  var_no__hash_set_leaf__delete__hash_index,
  var_no__hash_set_leaf__delete__key,
  // 215: self $_my_hash_index $my_key
  var_no__hash_set_leaf__delete__self, 0, 2, var_no__hash_set_leaf__delete__my_hash_index, var_no__hash_set_leaf__delete__my_key,
  // 217: key == my_key
  var_no__std___equal, 2, var_no__hash_set_leaf__delete__key, var_no__hash_set_leaf__delete__my_key, 1, 4,
  // 216: if
  // 217:   key == my_key
  // 218:   -> empty_hash_set_entry true
  // 219:   -> self false
  var_no__if, 3, 4, -func__hash_set_leaf__delete__1, -func__hash_set_leaf__delete__2, -1
};

static TAB_NUM tfunc__empty_collision_list_entry___delete[] = {
  3, // locals
  3, // parameters:
  var_no__empty_collision_list_entry__delete__self,
  var_no__empty_collision_list_entry__delete__dummy,
  var_no__empty_collision_list_entry__delete__key,
  // 221: ... -> self false
  LET, 2, var_no__empty_collision_list_entry__delete__self, var_no__false, -1
};

static TAB_NUM tfunc__collision_list_entry__delete__1[] = {
  0, // locals
  0, // no parameters
  // 228: -> my_link true
  LET, 2, var_no__collision_list_entry__delete__my_link, var_no__true, -1
};

static TAB_NUM tfunc__collision_list_entry__delete__2[] = {
  2, // locals
  0, // no parameters
  // 230: delete &my_link undefined key $did_delete
  var_no__delete, 3, var_no__collision_list_entry__delete__my_link, var_no__undefined, var_no__collision_list_entry__delete__key, 2, var_no__collision_list_entry__delete__my_link, var_no__collision_list_entry__delete__2__did_delete,
  // 231: ... new(collision_list_entry my_key my_link)
  var_no__new, 3, var_no__collision_list_entry, var_no__collision_list_entry__delete__my_key, var_no__collision_list_entry__delete__my_link, 1, 4,
  // 231: -> new(collision_list_entry my_key my_link) did_delete
  LET, 2, 4, var_no__collision_list_entry__delete__2__did_delete, -1
};

static TAB_NUM tfunc__collision_list_entry___delete[] = {
  3, // locals
  3, // parameters:
  var_no__collision_list_entry__delete__self,
  var_no__collision_list_entry__delete__dummy,
  var_no__collision_list_entry__delete__key,
  // 224: self $my_key $my_link
  var_no__collision_list_entry__delete__self, 0, 2, var_no__collision_list_entry__delete__my_key, var_no__collision_list_entry__delete__my_link,
  // 226: key == my_key
  var_no__std___equal, 2, var_no__collision_list_entry__delete__key, var_no__collision_list_entry__delete__my_key, 1, 4,
  // 225: if
  // 226:   key == my_key
  // 227:   :
  // 228:     -> my_link true
  // 229:   :
  // 230:     delete &my_link undefined key $did_delete
  // 231:     -> new(collision_list_entry my_key my_link) did_delete
  var_no__if, 3, 4, -func__collision_list_entry__delete__1, -func__collision_list_entry__delete__2, -1
};

static TAB_NUM tfunc__hash_set_node__delete__1__1[] = {
  0, // locals
  0, // no parameters
  // 241: -> empty_hash_set_entry true
  LET, 2, var_no__empty_hash_set_entry, var_no__true, -1
};

static TAB_NUM tfunc__hash_set_node__delete__1__2[] = {
  0, // locals
  0, // no parameters
  // 242: -> self true
  LET, 2, var_no__hash_set_node__delete__self, var_no__true, -1
};

static TAB_NUM tfunc__hash_set_node__delete__1[] = {
  1, // locals
  0, // no parameters
  // 240: all_of(self is_an_empty_entry)
  var_no__all_of, 2, var_no__hash_set_node__delete__self, var_no__is_an_empty_entry, 1, 4,
  // 239: if
  // 240:   all_of(self is_an_empty_entry)
  // 241:   -> empty_hash_set_entry true
  // 242:   -> self true
  var_no__if, 3, 4, -func__hash_set_node__delete__1__1, -func__hash_set_node__delete__1__2, -1
};

static TAB_NUM tfunc__hash_set_node__delete__2[] = {
  0, // locals
  0, // no parameters
  // 243: -> self false
  LET, 2, var_no__hash_set_node__delete__self, var_no__false, -1
};

static TAB_NUM tfunc__hash_set_node___delete[] = {
  8, // locals
  3, // parameters:
  var_no__hash_set_node__delete__self,
  var_no__hash_set_node__delete__hash_index,
  var_no__hash_set_node__delete__key,
  // 234: ... hash_index & 7
  var_no__std___bit_and, 2, var_no__hash_set_node__delete__hash_index, -number__7, 1, 4,
  // 234: $idx (hash_index & 7)+1
  var_no__std___plus, 2, 4, -number__1, 1, var_no__hash_set_node__delete__idx,
  // 235: ... self(idx)
  var_no__hash_set_node__delete__self, 1, var_no__hash_set_node__delete__idx, 1, 4,
  // 235: ... hash_index >> 3
  var_no__std___shift_right, 2, var_no__hash_set_node__delete__hash_index, -number__3, 1, 5,
  // 235: delete &self(idx) $success hash_index >> 3 key
  var_no__delete, 3, 4, 5, var_no__hash_set_node__delete__key, 2, 6, 7,
  // 235: ... &self(idx)
  var_no__hash_set_node__delete__self, 2, var_no__hash_set_node__delete__idx, 6, 1, var_no__hash_set_node__delete__self,
  // 235: ... success
  LET, 1, 7, 1, var_no__hash_set_node__delete__success,
  // 236: if
  // 237:   success
  // 238:   :
  // 239:     if
  // 240:       all_of(self is_an_empty_entry)
  // 241:       -> empty_hash_set_entry true
  // 242:       -> self true
  // 243:   -> self false
  var_no__if, 3, var_no__hash_set_node__delete__success, -func__hash_set_node__delete__1, -func__hash_set_node__delete__2, -1
};

static TAB_NUM tfunc__empty_hash_set_entry___for_each_1[] = {
  1, // locals
  1, // parameters:
  var_no__empty_hash_set_entry__for_each_1__self,
  // 251: next!
  var_no__next, 0, -2
};

static TAB_NUM tfunc__collision_list_entry__for_each_1__1[] = {
  2, // locals
  -1, // parameters:
  MYSELF_PARAMETER, var_no__collision_list_entry__for_each_1__1__myself,
  // 263: basic_loops::saved_context_of(myself)
  var_no__basic_loops___saved_context_of, 1, var_no__collision_list_entry__for_each_1__1__myself, 1, 4,
  // 263: basic_loops::saved_context_of(myself)
  // 264:   !next !break
  // 265:   !basic_loops::self
  4, 0, 3, var_no__next, var_no__break, var_no__basic_loops___self,
  // 266: break!
  var_no__break, 0, -2
};

static TAB_NUM tfunc__collision_list_entry__for_each_1__2__1[] = {
  1, // locals
  0, // no parameters
  // 273: basic_loops::saved_context_of(break)
  var_no__basic_loops___saved_context_of, 1, var_no__break, 1, 4,
  // 273: basic_loops::saved_context_of(break)
  // 274:   !next !break
  // 275:   !basic_loops::self
  4, 0, 3, var_no__next, var_no__break, var_no__basic_loops___self,
  // 276: next!
  var_no__next, 0, -2
};

static TAB_NUM tfunc__collision_list_entry__for_each_1__2__2[] = {
  2, // locals
  0, // no parameters
  // 278: basic_loops::self $key $link
  var_no__basic_loops___self, 0, 2, var_no__collision_list_entry__for_each_1__2__2__key, var_no__collision_list_entry__for_each_1__2__2__link,
  // 279: !basic_loops::self link
  LET, 1, var_no__collision_list_entry__for_each_1__2__2__link, 1, var_no__basic_loops___self,
  // 280: basic_loops::body! key
  var_no__basic_loops___body, 1, var_no__collision_list_entry__for_each_1__2__2__key, -2
};

static TAB_NUM tfunc__collision_list_entry__for_each_1__2[] = {
  1, // locals
  0, // no parameters
  // 272: basic_loops::self.is_an_empty_entry
  var_no__is_an_empty_entry, 1, var_no__basic_loops___self, 1, 4,
  // 271: if
  // 272:   basic_loops::self.is_an_empty_entry:
  // 273:     basic_loops::saved_context_of(break)
  // 274:       !next !break
  // 275:       !basic_loops::self
  // 276:     next!
  // 277:   :
  // 278:     basic_loops::self $key $link
  // 279:     !basic_loops::self link
  // 280:     basic_loops::body! key
  var_no__if, 3, 4, -func__collision_list_entry__for_each_1__2__1, -func__collision_list_entry__for_each_1__2__2, -2
};

static TAB_NUM tfunc__collision_list_entry___for_each_1[] = {
  2, // locals
  1, // parameters:
  var_no__collision_list_entry__for_each_1__self,
  // 254: $saved_context
  // 255:   tuple
  // 256:     next
  // 257:     break
  // 258:     basic_loops::self
  var_no__tuple, 3, var_no__next, var_no__break, var_no__basic_loops___self, 1, var_no__collision_list_entry__for_each_1__saved_context,
  // 260: !basic_loops::self self
  LET, 1, var_no__collision_list_entry__for_each_1__self, 1, var_no__basic_loops___self,
  // 262: !break: (myself^)
  // 263:   basic_loops::saved_context_of(myself)
  // 264:     !next !break
  // 265:     !basic_loops::self
  // 266:   break!
  LET, 1, -func__collision_list_entry__for_each_1__1, -4, var_no__break,
  // 268: !break.basic_loops::saved_context_of
  LET, -1, var_no__break, var_no__basic_loops___saved_context_of, var_no__collision_list_entry__for_each_1__saved_context, var_no__break,
  // 270: !next:
  // 271:   if
  // 272:     basic_loops::self.is_an_empty_entry:
  // 273:       basic_loops::saved_context_of(break)
  // 274:         !next !break
  // 275:         !basic_loops::self
  // 276:       next!
  // 277:     :
  // 278:       basic_loops::self $key $link
  // 279:       !basic_loops::self link
  // ...
  LET, 1, -func__collision_list_entry__for_each_1__2, -4, var_no__next,
  // 282: next
  var_no__next, 0, -1
};

static TAB_NUM tfunc__hash_set_leaf___for_each_1[] = {
  3, // locals
  1, // parameters:
  var_no__hash_set_leaf__for_each_1__self,
  // 285: self $_hash $key
  var_no__hash_set_leaf__for_each_1__self, 0, 2, var_no__hash_set_leaf__for_each_1__hash, var_no__hash_set_leaf__for_each_1__key,
  // 286: basic_loops::body! key
  var_no__basic_loops___body, 1, var_no__hash_set_leaf__for_each_1__key, -2
};

static TAB_NUM tfunc__hash_set_node__for_each_1__1[] = {
  2, // locals
  -1, // parameters:
  MYSELF_PARAMETER, var_no__hash_set_node__for_each_1__1__myself,
  // 300: basic_loops::saved_context_of(myself)
  var_no__basic_loops___saved_context_of, 1, var_no__hash_set_node__for_each_1__1__myself, 1, 4,
  // 300: basic_loops::saved_context_of(myself)
  // 301:   !next !break
  // 302:   !basic_loops::from !basic_loops::self
  4, 0, 4, var_no__next, var_no__break, var_no__basic_loops___from, var_no__basic_loops___self,
  // 303: break!
  var_no__break, 0, -2
};

static TAB_NUM tfunc__hash_set_node__for_each_1__2__1[] = {
  1, // locals
  0, // no parameters
  // 311: !basic_loops::from idx+1
  var_no__std___plus, 2, var_no__hash_set_node__for_each_1__2__idx, -number__1, 1, var_no__basic_loops___from,
  // 312: ... basic_loops::self(idx)
  var_no__basic_loops___self, 1, var_no__hash_set_node__for_each_1__2__idx, 1, 4,
  // 312: for_each_1! basic_loops::self(idx)
  var_no__for_each_1, 1, 4, -2
};

static TAB_NUM tfunc__hash_set_node__for_each_1__2__2[] = {
  1, // locals
  0, // no parameters
  // 314: basic_loops::saved_context_of(break)
  var_no__basic_loops___saved_context_of, 1, var_no__break, 1, 4,
  // 314: basic_loops::saved_context_of(break)
  // 315:   !next !break
  // 316:   !basic_loops::from !basic_loops::self
  4, 0, 4, var_no__next, var_no__break, var_no__basic_loops___from, var_no__basic_loops___self,
  // 317: next!
  var_no__next, 0, -2
};

static TAB_NUM tfunc__hash_set_node__for_each_1__2[] = {
  2, // locals
  0, // no parameters
  // 308: $idx basic_loops::from
  LET, 1, var_no__basic_loops___from, 1, var_no__hash_set_node__for_each_1__2__idx,
  // 310: idx <= 8
  var_no__std___less, 2, -number__8, var_no__hash_set_node__for_each_1__2__idx, 1, 5,
  // 310: idx <= 8
  var_no__std___not, 1, 5, 1, 4,
  // 309: if
  // 310:   idx <= 8:
  // 311:     !basic_loops::from idx+1
  // 312:     for_each_1! basic_loops::self(idx)
  // 313:   :
  // 314:     basic_loops::saved_context_of(break)
  // 315:       !next !break
  // 316:       !basic_loops::from !basic_loops::self
  // 317:     next!
  var_no__if, 3, 4, -func__hash_set_node__for_each_1__2__1, -func__hash_set_node__for_each_1__2__2, -2
};

static TAB_NUM tfunc__hash_set_node___for_each_1[] = {
  2, // locals
  1, // parameters:
  var_no__hash_set_node__for_each_1__self,
  // 289: $saved_context
  // 290:   tuple
  // 291:     next
  // 292:     break
  // 293:     basic_loops::from
  // 294:     basic_loops::self
  var_no__tuple, 4, var_no__next, var_no__break, var_no__basic_loops___from, var_no__basic_loops___self, 1, var_no__hash_set_node__for_each_1__saved_context,
  // 296: !basic_loops::from 1
  LET, 1, -number__1, 1, var_no__basic_loops___from,
  // 297: !basic_loops::self self
  LET, 1, var_no__hash_set_node__for_each_1__self, 1, var_no__basic_loops___self,
  // 299: !break: (myself^)
  // 300:   basic_loops::saved_context_of(myself)
  // 301:     !next !break
  // 302:     !basic_loops::from !basic_loops::self
  // 303:   break!
  LET, 1, -func__hash_set_node__for_each_1__1, -4, var_no__break,
  // 305: !break.basic_loops::saved_context_of
  LET, -1, var_no__break, var_no__basic_loops___saved_context_of, var_no__hash_set_node__for_each_1__saved_context, var_no__break,
  // 307: !next:
  // 308:   $idx basic_loops::from
  // 309:   if
  // 310:     idx <= 8:
  // 311:       !basic_loops::from idx+1
  // 312:       for_each_1! basic_loops::self(idx)
  // 313:     :
  // 314:       basic_loops::saved_context_of(break)
  // 315:         !next !break
  // 316:         !basic_loops::from !basic_loops::self
  // ...
  LET, 1, -func__hash_set_node__for_each_1__2, -4, var_no__next,
  // 319: next!
  var_no__next, 0, -2
};

static TAB_NUM tfunc__std_types__hash_set___for_each__1[] = {
  2, // locals
  -1, // parameters:
  MYSELF_PARAMETER, var_no__std_types__hash_set__for_each__1__myself,
  // 338: !finally basic_loops::finally
  LET, 1, var_no__basic_loops___finally, 1, var_no__std_types__hash_set___for_each__finally,
  // 339: basic_loops::saved_context_of(myself)
  var_no__basic_loops___saved_context_of, 1, var_no__std_types__hash_set__for_each__1__myself, 1, 4,
  // 339: basic_loops::saved_context_of(myself)
  // 340:   !next !break
  // 341:   !basic_loops::body !basic_loops::finally
  4, 0, 4, var_no__next, var_no__break, var_no__basic_loops___body, var_no__basic_loops___finally,
  // 342: finally!
  var_no__std_types__hash_set___for_each__finally, 0, -2
};

static TAB_NUM tfunc__std_types___hash_set___for_each[] = {
  4, // locals
  -3, // parameters:
  MANDATORY_PARAMETER, var_no__std_types__hash_set___for_each__self,
  MANDATORY_PARAMETER, var_no__std_types__hash_set___for_each__body,
  var_no__next, var_no__std_types__hash_set___for_each__finally,
  // 327: $saved_context
  // 328:   tuple
  // 329:     next
  // 330:     break
  // 331:     basic_loops::body
  // 332:     basic_loops::finally
  var_no__tuple, 4, var_no__next, var_no__break, var_no__basic_loops___body, var_no__basic_loops___finally, 1, var_no__std_types__hash_set___for_each__saved_context,
  // 334: !basic_loops::body body
  LET, 1, var_no__std_types__hash_set___for_each__body, 1, var_no__basic_loops___body,
  // 335: !basic_loops::finally finally
  LET, 1, var_no__std_types__hash_set___for_each__finally, 1, var_no__basic_loops___finally,
  // 337: !break: (myself^)
  // 338:   !finally basic_loops::finally
  // 339:   basic_loops::saved_context_of(myself)
  // 340:     !next !break
  // 341:     !basic_loops::body !basic_loops::finally
  // 342:   finally!
  LET, 1, -func__std_types__hash_set___for_each__1, -4, var_no__break,
  // 344: !break.basic_loops::saved_context_of
  LET, -1, var_no__break, var_no__basic_loops___saved_context_of, var_no__std_types__hash_set___for_each__saved_context, var_no__break,
  // 345: !next break
  LET, 1, var_no__break, 1, var_no__next,
  // 347: ... contents_of(self)
  var_no__contents_of, 1, var_no__std_types__hash_set___for_each__self, 1, 4,
  // 347: for_each_1! contents_of(self)
  var_no__for_each_1, 1, 4, -2
};

static TAB_NUM tfunc__my_reduce__1[] = {
  0, // locals
  0, // no parameters
  // 359: -> right
  LET, 1, var_no__my_reduce__right, -1
};

static TAB_NUM tfunc__my_reduce__2__1[] = {
  0, // locals
  0, // no parameters
  // 363: -> left
  LET, 1, var_no__my_reduce__left, -1
};

static TAB_NUM tfunc__my_reduce__2__2[] = {
  1, // locals
  0, // no parameters
  // 364: ... reduction_function(left right)
  var_no__reduction_function, 2, var_no__my_reduce__left, var_no__my_reduce__right, 1, 4,
  // 364: -> reduction_function(left right)
  LET, 1, 4, -1
};

static TAB_NUM tfunc__my_reduce__2[] = {
  1, // locals
  0, // no parameters
  // 362: right == UNIT
  var_no__std___equal, 2, var_no__my_reduce__right, var_no__UNIT, 1, 4,
  // 361: if
  // 362:   right == UNIT
  // 363:   -> left
  // 364:   -> reduction_function(left right)
  var_no__if, 3, 4, -func__my_reduce__2__1, -func__my_reduce__2__2, -1
};

static TAB_NUM tfunc__my_reduce[] = {
  1, // locals
  2, // parameters:
  var_no__my_reduce__left,
  var_no__my_reduce__right,
  // 358: left == UNIT
  var_no__std___equal, 2, var_no__my_reduce__left, var_no__UNIT, 1, 4,
  // 357: if
  // 358:   left == UNIT
  // 359:   -> right
  // 360:   :
  // 361:     if
  // 362:       right == UNIT
  // 363:       -> left
  // 364:       -> reduction_function(left right)
  var_no__if, 3, 4, -func__my_reduce__1, -func__my_reduce__2, -1
};

static TAB_NUM tfunc__empty_hash_set_entry___map_reduce_1[] = {
  1, // locals
  1, // parameters:
  var_no__empty_hash_set_entry__map_reduce_1__self,
  // 373: ... -> UNIT
  LET, 1, var_no__UNIT, -1
};

static TAB_NUM tfunc__hash_set_leaf___map_reduce_1[] = {
  4, // locals
  1, // parameters:
  var_no__hash_set_leaf__map_reduce_1__self,
  // 376: self $_my_hash_index $my_key
  var_no__hash_set_leaf__map_reduce_1__self, 0, 2, var_no__hash_set_leaf__map_reduce_1__my_hash_index, var_no__hash_set_leaf__map_reduce_1__my_key,
  // 377: ... mapping_function(my_key)
  var_no__mapping_function, 1, var_no__hash_set_leaf__map_reduce_1__my_key, 1, 4,
  // 377: -> mapping_function(my_key)
  LET, 1, 4, -1
};

static TAB_NUM tfunc__empty_collision_list_entry___map_reduce_1[] = {
  1, // locals
  1, // parameters:
  var_no__empty_collision_list_entry__map_reduce_1__self,
  // 379: ... -> UNIT
  LET, 1, var_no__UNIT, -1
};

static TAB_NUM tfunc__collision_list_entry___map_reduce_1[] = {
  5, // locals
  1, // parameters:
  var_no__collision_list_entry__map_reduce_1__self,
  // 382: self $my_key $my_link
  var_no__collision_list_entry__map_reduce_1__self, 0, 2, var_no__collision_list_entry__map_reduce_1__my_key, var_no__collision_list_entry__map_reduce_1__my_link,
  // 384: mapping_function(my_key)
  var_no__mapping_function, 1, var_no__collision_list_entry__map_reduce_1__my_key, 1, 4,
  // 385: map_reduce_1(my_link)
  var_no__map_reduce_1, 1, var_no__collision_list_entry__map_reduce_1__my_link, 1, 5,
  // 383: my_reduce
  // 384:   mapping_function(my_key)
  // 385:   map_reduce_1(my_link)
  var_no__my_reduce, 2, 4, 5, -1
};

static TAB_NUM tfunc__hash_set_node___map_reduce_1[] = {
  11, // locals
  1, // parameters:
  var_no__hash_set_node__map_reduce_1__self,
  // 388: ... self(1)
  var_no__hash_set_node__map_reduce_1__self, 1, -number__1, 1, 5,
  // 388: ... map_reduce_1(self(1))
  var_no__map_reduce_1, 1, 5, 1, 4,
  // 388: ... self(2)
  var_no__hash_set_node__map_reduce_1__self, 1, -number__2, 1, 7,
  // 388: ... map_reduce_1(self(2))
  var_no__map_reduce_1, 1, 7, 1, 6,
  // 388: $r12 my_reduce(map_reduce_1(self(1)) map_reduce_1(self(2)))
  var_no__my_reduce, 2, 4, 6, 1, var_no__hash_set_node__map_reduce_1__r12,
  // 389: ... self(3)
  var_no__hash_set_node__map_reduce_1__self, 1, -number__3, 1, 5,
  // 389: ... map_reduce_1(self(3))
  var_no__map_reduce_1, 1, 5, 1, 4,
  // 389: ... self(4)
  var_no__hash_set_node__map_reduce_1__self, 1, -number__4, 1, 7,
  // 389: ... map_reduce_1(self(4))
  var_no__map_reduce_1, 1, 7, 1, 6,
  // 389: $r34 my_reduce(map_reduce_1(self(3)) map_reduce_1(self(4)))
  var_no__my_reduce, 2, 4, 6, 1, var_no__hash_set_node__map_reduce_1__r34,
  // 390: ... self(5)
  var_no__hash_set_node__map_reduce_1__self, 1, -number__5, 1, 5,
  // 390: ... map_reduce_1(self(5))
  var_no__map_reduce_1, 1, 5, 1, 4,
  // 390: ... self(6)
  var_no__hash_set_node__map_reduce_1__self, 1, -number__6, 1, 7,
  // 390: ... map_reduce_1(self(6))
  var_no__map_reduce_1, 1, 7, 1, 6,
  // 390: $r56 my_reduce(map_reduce_1(self(5)) map_reduce_1(self(6)))
  var_no__my_reduce, 2, 4, 6, 1, var_no__hash_set_node__map_reduce_1__r56,
  // 391: ... self(7)
  var_no__hash_set_node__map_reduce_1__self, 1, -number__7, 1, 5,
  // 391: ... map_reduce_1(self(7))
  var_no__map_reduce_1, 1, 5, 1, 4,
  // 391: ... self(8)
  var_no__hash_set_node__map_reduce_1__self, 1, -number__8, 1, 7,
  // 391: ... map_reduce_1(self(8))
  var_no__map_reduce_1, 1, 7, 1, 6,
  // 391: $r78 my_reduce(map_reduce_1(self(7)) map_reduce_1(self(8)))
  var_no__my_reduce, 2, 4, 6, 1, var_no__hash_set_node__map_reduce_1__r78,
  // 392: $r1234 my_reduce(r12 r34)
  var_no__my_reduce, 2, var_no__hash_set_node__map_reduce_1__r12, var_no__hash_set_node__map_reduce_1__r34, 1, var_no__hash_set_node__map_reduce_1__r1234,
  // 393: $r5678 my_reduce(r56 r78)
  var_no__my_reduce, 2, var_no__hash_set_node__map_reduce_1__r56, var_no__hash_set_node__map_reduce_1__r78, 1, var_no__hash_set_node__map_reduce_1__r5678,
  // 394: ... my_reduce(r1234 r5678)
  var_no__my_reduce, 2, var_no__hash_set_node__map_reduce_1__r1234, var_no__hash_set_node__map_reduce_1__r5678, 1, 4,
  // 394: -> my_reduce(r1234 r5678)
  LET, 1, 4, -1
};

static TAB_NUM tfunc__std_types__hash_set___map_reduce__1[] = {
  0, // locals
  0, // no parameters
  // 413: -> unit
  LET, 1, var_no__std_types__hash_set___map_reduce__unit, -1
};

static TAB_NUM tfunc__std_types__hash_set___map_reduce__2[] = {
  1, // locals
  0, // no parameters
  // 415: !mapping_function map_function
  LET, 1, var_no__std_types__hash_set___map_reduce__map_function, 1, var_no__mapping_function,
  // 416: !reduction_function reduce_function
  LET, 1, var_no__std_types__hash_set___map_reduce__reduce_function, 1, var_no__reduction_function,
  // 417: ... contents_of(self)
  var_no__contents_of, 1, var_no__std_types__hash_set___map_reduce__self, 1, 4,
  // 417: map_reduce_1 contents_of(self)
  var_no__map_reduce_1, 1, 4, -1
};

static TAB_NUM tfunc__std_types___hash_set___map_reduce[] = {
  2, // locals
  -4, // parameters:
  MANDATORY_PARAMETER, var_no__std_types__hash_set___map_reduce__self,
  MANDATORY_PARAMETER, var_no__std_types__hash_set___map_reduce__map_function,
  var_no__append, var_no__std_types__hash_set___map_reduce__reduce_function,
  var_no__undefined, var_no__std_types__hash_set___map_reduce__unit,
  // 412: length_of(self)
  var_no__length_of, 1, var_no__std_types__hash_set___map_reduce__self, 1, 5,
  // 412: length_of(self) == 0
  var_no__std___equal, 2, 5, -number__0, 1, 4,
  // 411: if
  // 412:   length_of(self) == 0
  // 413:   -> unit
  // 414:   :
  // 415:     !mapping_function map_function
  // 416:     !reduction_function reduce_function
  // 417:     map_reduce_1 contents_of(self)
  var_no__if, 3, 4, -func__std_types__hash_set___map_reduce__1, -func__std_types__hash_set___map_reduce__2, -1
};

static TAB_NUM tfunc__std__hash_set__1[] = {
  1, // locals
  1, // parameters:
  var_no__std__hash_set__1__key,
  // 424: !result(key)
  var_no__std__hash_set__result, 2, var_no__std__hash_set__1__key, var_no__true, 1, var_no__std__hash_set__result,
  // 425: next
  var_no__next, 0, -1
};

static TAB_NUM tfunc__std__hash_set__2[] = {
  0, // locals
  0, // no parameters
  // 426: -> result
  LET, 1, var_no__std__hash_set__result, -1
};

static TAB_NUM tfunc__std___hash_set[] = {
  1, // locals
  -1, // parameters:
  REST_PARAMETER, var_no__std__hash_set__keys,
  // 421: $result empty_hash_set
  LET, 1, var_no__empty_hash_set, 1, var_no__std__hash_set__result,
  // 422: for_each keys
  // 423:   : (key)
  // 424:     !result(key) true
  // 425:     next
  // 426:   -> result
  var_no__for_each, 3, var_no__std__hash_set__keys, -func__std__hash_set__1, -func__std__hash_set__2, -1
};


static int arguments__tuple__undefined___undefined[] = {
  -var_no__undefined,
  -var_no__undefined
};

static int arguments__list__empty_hash_set_entry___empty_hash_set_entry___empty_hash_set_entry___empty_hash_set_entry___empty_hash_set_entry___empty_hash_set_entry___empty_hash_set_entry___empty_hash_set_entry[] = {
  -var_no__empty_hash_set_entry,
  -var_no__empty_hash_set_entry,
  -var_no__empty_hash_set_entry,
  -var_no__empty_hash_set_entry,
  -var_no__empty_hash_set_entry,
  -var_no__empty_hash_set_entry,
  -var_no__empty_hash_set_entry,
  -var_no__empty_hash_set_entry
};

static FUNKY_NAMESPACE used_namespaces[] = {
  {"std", 1, 0}
};

static FUNKY_CONSTANT constants_table[] = {
  {FLT_POSITIVE_INT64, 0, {.value = 0}},
  {FLT_UNIQUE, 0, {.str_8 = "NONE"}},
  {FLT_FUNCTION, -1, {.tfunc = tfunc__std_types___hash_set}},
  {FLT_FUNCTION, 3, {.tfunc = tfunc__empty_hash_set_entry___retrieve}},
  {FLT_FUNCTION, 3, {.tfunc = tfunc__hash_set_leaf___retrieve}},
  {FLT_FUNCTION, 3, {.tfunc = tfunc__empty_collision_list_entry___retrieve}},
  {FLT_FUNCTION, 3, {.tfunc = tfunc__collision_list_entry___retrieve}},
  {FLT_FUNCTION, 3, {.tfunc = tfunc__hash_set_node___retrieve}},
  {FLT_FUNCTION, 3, {.tfunc = tfunc__empty_hash_set_entry___insert}},
  {FLT_FUNCTION, 3, {.tfunc = tfunc__hash_set_leaf___insert}},
  {FLT_FUNCTION, 3, {.tfunc = tfunc__empty_collision_list_entry___insert}},
  {FLT_FUNCTION, 3, {.tfunc = tfunc__collision_list_entry___insert}},
  {FLT_FUNCTION, 3, {.tfunc = tfunc__hash_set_node___insert}},
  {FLT_FUNCTION, 3, {.tfunc = tfunc__empty_hash_set_entry___delete}},
  {FLT_FUNCTION, 3, {.tfunc = tfunc__hash_set_leaf___delete}},
  {FLT_FUNCTION, 3, {.tfunc = tfunc__empty_collision_list_entry___delete}},
  {FLT_FUNCTION, 3, {.tfunc = tfunc__collision_list_entry___delete}},
  {FLT_FUNCTION, 3, {.tfunc = tfunc__hash_set_node___delete}},
  {FLT_FUNCTION, 1, {.tfunc = tfunc__empty_hash_set_entry___for_each_1}},
  {FLT_FUNCTION, 1, {.tfunc = tfunc__collision_list_entry___for_each_1}},
  {FLT_FUNCTION, 1, {.tfunc = tfunc__hash_set_leaf___for_each_1}},
  {FLT_FUNCTION, 1, {.tfunc = tfunc__hash_set_node___for_each_1}},
  {FLT_FUNCTION, -1, {.tfunc = tfunc__std_types___hash_set___for_each}},
  {FLT_UNIQUE, 0, {.str_8 = "UNIT"}},
  {FLT_FUNCTION, 2, {.tfunc = tfunc__my_reduce}},
  {FLT_FUNCTION, 1, {.tfunc = tfunc__empty_hash_set_entry___map_reduce_1}},
  {FLT_FUNCTION, 1, {.tfunc = tfunc__hash_set_leaf___map_reduce_1}},
  {FLT_FUNCTION, 1, {.tfunc = tfunc__empty_collision_list_entry___map_reduce_1}},
  {FLT_FUNCTION, 1, {.tfunc = tfunc__collision_list_entry___map_reduce_1}},
  {FLT_FUNCTION, 1, {.tfunc = tfunc__hash_set_node___map_reduce_1}},
  {FLT_FUNCTION, -1, {.tfunc = tfunc__std_types___hash_set___map_reduce}},
  {FLT_FUNCTION, -1, {.tfunc = tfunc__std___hash_set}},
  {FLT_STRING_8, 8, {.str_8 = "hash_set"}},
  {FLT_TUPLE, 2, {.arguments = arguments__tuple__undefined___undefined}},
  {FLT_LIST, 8, {.arguments = arguments__list__empty_hash_set_entry___empty_hash_set_entry___empty_hash_set_entry___empty_hash_set_entry___empty_hash_set_entry___empty_hash_set_entry___empty_hash_set_entry___empty_hash_set_entry}},
  {FLT_POSITIVE_INT64, 0, {.value = 0xc0000000}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__hash_set__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__hash_set__2}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__hash_set__2__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__hash_set__2__2}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__hash_set__2__1__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__hash_set__2__1__2}},
  {FLT_POSITIVE_INT64, 0, {.value = 1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__hash_set__2__2__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__hash_set__2__2__2}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__hash_set_leaf__retrieve__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__hash_set_leaf__retrieve__2}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__collision_list_entry__retrieve__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__collision_list_entry__retrieve__2}},
  {FLT_POSITIVE_INT64, 0, {.value = 7}},
  {FLT_POSITIVE_INT64, 0, {.value = 3}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__empty_hash_set_entry__insert__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__empty_hash_set_entry__insert__2}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__hash_set_leaf__insert__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__hash_set_leaf__insert__2}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__collision_list_entry__insert__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__collision_list_entry__insert__2}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__collision_list_entry__insert__2__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__collision_list_entry__insert__2__2}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__hash_set_leaf__delete__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__hash_set_leaf__delete__2}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__collision_list_entry__delete__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__collision_list_entry__delete__2}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__hash_set_node__delete__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__hash_set_node__delete__2}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__hash_set_node__delete__1__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__hash_set_node__delete__1__2}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__collision_list_entry__for_each_1__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__collision_list_entry__for_each_1__2}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__collision_list_entry__for_each_1__2__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__collision_list_entry__for_each_1__2__2}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__hash_set_node__for_each_1__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__hash_set_node__for_each_1__2}},
  {FLT_POSITIVE_INT64, 0, {.value = 8}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__hash_set_node__for_each_1__2__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__hash_set_node__for_each_1__2__2}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__hash_set___for_each__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__my_reduce__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__my_reduce__2}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__my_reduce__2__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__my_reduce__2__2}},
  {FLT_POSITIVE_INT64, 0, {.value = 2}},
  {FLT_POSITIVE_INT64, 0, {.value = 4}},
  {FLT_POSITIVE_INT64, 0, {.value = 5}},
  {FLT_POSITIVE_INT64, 0, {.value = 6}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__hash_set___map_reduce__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__hash_set___map_reduce__2}},
  {FLT_FUNCTION, 1, {.tfunc = tfunc__std__hash_set__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std__hash_set__2}}
};

static ATTRIBUTE_DEFINITION std_types___object__attributes[] = {
  {-var_no__is_a_hash_set, -var_no__false},
  {-var_no__is_an_empty_entry, -var_no__false}
};

static ATTRIBUTE_DEFINITION std_types___hash_set__attributes[] = {
  {-var_no__contents_of, -var_no__empty_hash_set_entry},
  {-var_no__empty_collection_of, -var_no__empty_hash_set},
  {-var_no__is_a_hash_set, -var_no__true},
  {-var_no__length_of, number__0},
  {-var_no__serialization_tag_of, string__898155714},
  {TYPE_FUNCTION, func__std_types___hash_set},
  {var_no__for_each, func__std_types___hash_set___for_each},
  {var_no__map_reduce, func__std_types___hash_set___map_reduce}
};

static ATTRIBUTE_DEFINITION empty_hash_set_entry__attributes[] = {
  {-var_no__is_an_empty_entry, -var_no__true},
  {var_no__delete, func__empty_hash_set_entry___delete},
  {var_no__for_each_1, func__empty_hash_set_entry___for_each_1},
  {var_no__insert, func__empty_hash_set_entry___insert},
  {var_no__map_reduce_1, func__empty_hash_set_entry___map_reduce_1},
  {var_no__retrieve, func__empty_hash_set_entry___retrieve}
};

static ATTRIBUTE_DEFINITION empty_collision_list_entry__attributes[] = {
  {-var_no__is_an_empty_entry, -var_no__true},
  {var_no__delete, func__empty_collision_list_entry___delete},
  {var_no__insert, func__empty_collision_list_entry___insert},
  {var_no__map_reduce_1, func__empty_collision_list_entry___map_reduce_1},
  {var_no__retrieve, func__empty_collision_list_entry___retrieve}
};

static ATTRIBUTE_DEFINITION hash_set_leaf__attributes[] = {
  {var_no__delete, func__hash_set_leaf___delete},
  {var_no__for_each_1, func__hash_set_leaf___for_each_1},
  {var_no__insert, func__hash_set_leaf___insert},
  {var_no__map_reduce_1, func__hash_set_leaf___map_reduce_1},
  {var_no__retrieve, func__hash_set_leaf___retrieve}
};

static ATTRIBUTE_DEFINITION collision_list_entry__attributes[] = {
  {var_no__delete, func__collision_list_entry___delete},
  {var_no__for_each_1, func__collision_list_entry___for_each_1},
  {var_no__insert, func__collision_list_entry___insert},
  {var_no__map_reduce_1, func__collision_list_entry___map_reduce_1},
  {var_no__retrieve, func__collision_list_entry___retrieve}
};

static ATTRIBUTE_DEFINITION hash_set_node__attributes[] = {
  {var_no__delete, func__hash_set_node___delete},
  {var_no__for_each_1, func__hash_set_node___for_each_1},
  {var_no__insert, func__hash_set_node___insert},
  {var_no__map_reduce_1, func__hash_set_node___map_reduce_1},
  {var_no__retrieve, func__hash_set_node___retrieve}
};

static FUNKY_VARIABLE variables_table[] = {
  {
    FOT_POLYMORPHIC, 0, 0,
    "contents_of\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "retrieve\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "insert\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "delete\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "is_a_hash_set\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN, 0, 2,
    "object\000std_types", std_types___object__attributes,
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "is_a_hash_set\000", NULL,
  },
  {
    FOT_DERIVED, 0, 8,
    "hash_set\000std_types", std_types___hash_set__attributes,
    {"set\000std_types"},
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "is_an_empty_entry\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_DERIVED, 0, 6,
    "empty_hash_set_entry\000", empty_hash_set_entry__attributes,
    {"object\000std_types"},
  },
  {
    FOT_DERIVED, 0, 5,
    "empty_collision_list_entry\000", empty_collision_list_entry__attributes,
    {"object\000std_types"},
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "length_of\000", NULL,
  },
  {
    FOT_DERIVED, 0, 0,
    "empty_hash_set\000std", NULL,
    {"hash_set\000std_types"},
  },
  {
    FOT_INITIALIZED, 0, 5,
    "hash_set_leaf\000", hash_set_leaf__attributes,
    {.const_idx = tuple__undefined___undefined}
  },
  {
    FOT_INITIALIZED, 0, 5,
    "collision_list_entry\000", collision_list_entry__attributes,
    {.const_idx = tuple__undefined___undefined}
  },
  {
    FOT_INITIALIZED, 0, 5,
    "hash_set_node\000", hash_set_node__attributes,
    {.const_idx = list__empty_hash_set_entry___empty_hash_set_entry___empty_hash_set_entry___empty_hash_set_entry___empty_hash_set_entry___empty_hash_set_entry___empty_hash_set_entry___empty_hash_set_entry}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "NONE\000", NULL,
    {.const_idx = unique__NONE}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "for_each_1\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "for_each\000", NULL,
  },
  {
    FOT_INITIALIZED, 0, 0,
    "UNIT\000", NULL,
    {.const_idx = unique__UNIT}
  },
  {
    FOT_DERIVED, 0, 0,
    "reduction_function\000", NULL,
    {"undefined\000"},
  },
  {
    FOT_INITIALIZED, 0, 0,
    "my_reduce\000", NULL,
    {.const_idx = func__my_reduce}
  },
  {
    FOT_DERIVED, 0, 0,
    "mapping_function\000", NULL,
    {"undefined\000"},
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "map_reduce_1\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "map_reduce\000", NULL,
  },
  {
    FOT_INITIALIZED, 0, 0,
    "hash_set\000std", NULL,
    {.const_idx = func__std___hash_set}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "serialization_tag_of\000", NULL,
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "empty_collection_of\000", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "false\000", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "true\000", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "set\000std_types", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "tuple\000", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "undefined\000", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "list\000", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_hash_set\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "std_types__hash_set__myself\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "std_types__hash_set__key\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "std_types__hash_set__value\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "std_types__hash_set__hash_index\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "std_types__hash_set__contents\000", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "hash\000", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "bit_or\000std", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "equal\000std", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if\000", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000std", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "minus\000std", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "collision_list_entry__retrieve__key\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "collision_list_entry__retrieve__my_link\000", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "bit_and\000std", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "shift_right\000std", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "empty_hash_set_entry__insert__hash_index\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "empty_hash_set_entry__insert__key\000", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "new\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "hash_set_leaf__insert__self\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "hash_set_leaf__insert__hash_index\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "hash_set_leaf__insert__key\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "hash_set_leaf__insert__my_hash_index\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "hash_set_leaf__insert__my_key\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "collision_list_entry__insert__self\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "collision_list_entry__insert__dummy\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "collision_list_entry__insert__key\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "collision_list_entry__insert__my_key\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "collision_list_entry__insert__my_link\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "collision_list_entry__insert__2__new_link\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "hash_set_leaf__delete__self\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "collision_list_entry__delete__key\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "collision_list_entry__delete__my_key\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "collision_list_entry__delete__my_link\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "hash_set_node__delete__self\000", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "all_of\000", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "next\000", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "break\000", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "self\000basic_loops", NULL,
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "saved_context_of\000basic_loops", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "body\000basic_loops", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "from\000basic_loops", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "hash_set_node__for_each_1__2__idx\000", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "less\000std", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not\000std", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "std_types__hash_set___for_each__finally\000", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "finally\000basic_loops", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "my_reduce__left\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "my_reduce__right\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "std_types__hash_set___map_reduce__self\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "std_types__hash_set___map_reduce__map_function\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "std_types__hash_set___map_reduce__reduce_function\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "std_types__hash_set___map_reduce__unit\000", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "append\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "std__hash_set__result\000", NULL,
  }
};

FUNKY_MODULE module__basic__types__collections__sets__hash_set = {
  "_basic__types__collections__sets__hash_set",
  "/home/leachim/source/cmds/funky/master/basic/types/collections/sets/hash_set.fky",
  0, 0,
  0, 1,
  89, 89,
  NULL,
  NULL, used_namespaces,
  constants_table, variables_table
};
