#include <stddef.h>
#include <stdint.h>

#include "runtime/common.h"
#include "runtime/builtins.h"
#include "runtime/fko.h"
#include "runtime/memory.h"

enum {
  number__0 = 1,
  unique__NONE,
  func__std_types___key_order_set,
  func__empty_node___retrieve,
  func__binary_node___retrieve,
  func__empty_node___insert,
  func__binary_node___insert,
  func__fetch_first,
  func__empty_node___delete,
  func__binary_node___delete,
  func__binary_node___first_item_of,
  func__std_types___key_order_set___first_item_of,
  func__binary_node___last_item_of,
  func__std_types___key_order_set___last_item_of,
  func__finish___for_each_1_call,
  func__empty_node___for_each_1_left,
  func__binary_node___for_each_1_left,
  func__binary_node___for_each_1_call,
  func__binary_node___for_each_1_right,
  func__std_types___key_order_set___for_each,
  func__std_types___key_order_set___reduce,
  func__std_types___key_order_set___map_reduce,
  func__std___key_order_set,
  string__300906497,
  tuple__undefined___undefined___undefined,
  func__std_types__key_order_set__1,
  func__std_types__key_order_set__2,
  func__std_types__key_order_set__2__1,
  func__std_types__key_order_set__2__2,
  func__std_types__key_order_set__2__1__1,
  func__std_types__key_order_set__2__1__2,
  number__1,
  func__std_types__key_order_set__2__2__1,
  func__std_types__key_order_set__2__2__2,
  func__binary_node__retrieve__1,
  func__binary_node__retrieve__2,
  func__binary_node__retrieve__2__1,
  func__binary_node__retrieve__2__2,
  func__binary_node__insert__1,
  func__binary_node__insert__2,
  func__binary_node__insert__2__1,
  func__binary_node__insert__2__2,
  func__binary_node__insert__2__1__1,
  func__binary_node__insert__2__1__2,
  func__binary_node__insert__2__2__1,
  func__binary_node__insert__2__2__2,
  func__fetch_first__1,
  func__fetch_first__2,
  func__binary_node__delete__1,
  func__binary_node__delete__2,
  func__binary_node__delete__1__1,
  func__binary_node__delete__1__2,
  func__binary_node__delete__1__2__1,
  func__binary_node__delete__1__2__2,
  func__binary_node__delete__2__1,
  func__binary_node__delete__2__2,
  func__binary_node__delete__2__1__1,
  func__binary_node__delete__2__1__2,
  func__binary_node__delete__2__2__1,
  func__binary_node__delete__2__2__2,
  func__binary_node__first_item_of__1,
  func__binary_node__first_item_of__2,
  func__binary_node__last_item_of__1,
  func__binary_node__last_item_of__2,
  number__m1,
  func__std_types__key_order_set___for_each__1,
  func__std_types__key_order_set___for_each__2,
  func__std_types__key_order_set___reduce__1,
  func__std_types__key_order_set___reduce__2,
  func__std_types__key_order_set__reduce__2__reduce,
  func__std_types__key_order_set__reduce__2__reduce__1,
  func__std_types__key_order_set__reduce__2__reduce__2,
  func__std_types__key_order_set__reduce__2__reduce__3,
  func__std_types__key_order_set__reduce__2__reduce__4,
  func__std_types__key_order_set___map_reduce__1,
  func__std_types__key_order_set___map_reduce__2,
  func__std_types__key_order_set__map_reduce__2__map_reduce,
  func__std_types__key_order_set__map_reduce__2__map_reduce__1,
  func__std_types__key_order_set__map_reduce__2__map_reduce__2,
  func__std_types__key_order_set__map_reduce__2__map_reduce__3,
  func__std_types__key_order_set__map_reduce__2__map_reduce__4,
  func__std__key_order_set__1,
  func__std__key_order_set__2
};

enum {
  var_no__contents_of = FIRST_VAR+0,
  var_no__retrieve,
  var_no__insert,
  var_no__delete,
  var_no__std___is_a_key_order_set,
  var_no__std_types___object,
  var_no__is_a_key_order_set,
  var_no__std_types___key_order_set,
  var_no__length_of,
  var_no__std___empty_key_order_set,
  var_no__is_an_empty_node,
  var_no__empty_node,
  var_no__binary_node,
  var_no__NONE,
  var_no__fetch_first,
  var_no__first_item_of,
  var_no__last_item_of,
  var_no__for_each_1_left,
  var_no__for_each_1_call,
  var_no__for_each_1_right,
  var_no__finish,
  var_no__for_each,
  var_no__reduce,
  var_no__map_reduce,
  var_no__std___key_order_set,
  var_no__serialization_tag_of,
  var_no__empty_collection_of,
  var_no__false,
  var_no__true,
  var_no__std_types___set,
  var_no__tuple,
  var_no__undefined,
  var_no__empty_key_order_set,
  var_no__std_types__key_order_set__myself,
  var_no__std_types__key_order_set__key,
  var_no__std_types__key_order_set__value,
  var_no__std_types__key_order_set__contents,
  var_no__std___equal,
  var_no__if,
  var_no__std_types__key_order_set__2__1__success = 4,
  var_no__std___plus = FIRST_VAR+39,
  var_no__std_types__key_order_set__2__2__success = 4,
  var_no__std___minus = FIRST_VAR+40,
  var_no__empty_node__retrieve__self = 4,
  var_no__empty_node__retrieve__key = 5,
  var_no__binary_node__retrieve__self = 5,
  var_no__binary_node__retrieve__key = FIRST_VAR+41,
  var_no__binary_node__retrieve__my_key,
  var_no__binary_node__retrieve__my_left,
  var_no__binary_node__retrieve__my_right,
  var_no__std___less,
  var_no__empty_node__insert__self = 5,
  var_no__empty_node__insert__key = 6,
  var_no__new = FIRST_VAR+46,
  var_no__binary_node__insert__self,
  var_no__binary_node__insert__key,
  var_no__binary_node__insert__my_key,
  var_no__binary_node__insert__my_left,
  var_no__binary_node__insert__my_right,
  var_no__binary_node__insert__2__1__success = 4,
  var_no__binary_node__insert__2__2__success = 4,
  var_no__fetch_first__self = FIRST_VAR+52,
  var_no__fetch_first__my_key,
  var_no__fetch_first__my_left,
  var_no__fetch_first__my_right,
  var_no__fetch_first__2__first_key = 5,
  var_no__empty_node__delete__self = 4,
  var_no__empty_node__delete__key = 5,
  var_no__binary_node__delete__self = FIRST_VAR+56,
  var_no__binary_node__delete__key,
  var_no__binary_node__delete__my_key,
  var_no__binary_node__delete__my_left,
  var_no__binary_node__delete__my_right,
  var_no__binary_node__delete__1__2__2__first_key = 5,
  var_no__binary_node__delete__2__1__success = 4,
  var_no__binary_node__delete__2__2__success = 4,
  var_no__binary_node__first_item_of__self = 5,
  var_no__binary_node__first_item_of__my_key = FIRST_VAR+61,
  var_no__binary_node__first_item_of__my_left,
  var_no__binary_node__first_item_of__my_right = 6,
  var_no__std_types__key_order_set___first_item_of__self = 6,
  var_no__binary_node__last_item_of__self = 5,
  var_no__binary_node__last_item_of__my_key = FIRST_VAR+63,
  var_no__binary_node__last_item_of__my_left = 6,
  var_no__binary_node__last_item_of__my_right = FIRST_VAR+64,
  var_no__std_types__key_order_set___last_item_of__self = 6,
  var_no__finish__for_each_1_call__self = 4,
  var_no__break = FIRST_VAR+65,
  var_no__empty_node__for_each_1_left__self = 5,
  var_no__basic_loops___todo = FIRST_VAR+66,
  var_no__binary_node__for_each_1_left__self = 4,
  var_no__binary_node__for_each_1_left__my_key = 5,
  var_no__binary_node__for_each_1_left__my_left = 6,
  var_no__binary_node__for_each_1_left__my_right = 7,
  var_no__push = FIRST_VAR+67,
  var_no__binary_node__for_each_1_call__self = 4,
  var_no__binary_node__for_each_1_call__my_key = 5,
  var_no__binary_node__for_each_1_call__my_left = 6,
  var_no__binary_node__for_each_1_call__my_right = 7,
  var_no__basic_loops___body = FIRST_VAR+68,
  var_no__binary_node__for_each_1_right__self = 4,
  var_no__binary_node__for_each_1_right__my_key = 5,
  var_no__binary_node__for_each_1_right__my_left = 6,
  var_no__binary_node__for_each_1_right__my_right = 7,
  var_no__std_types__key_order_set___for_each__self = 5,
  var_no__std_types__key_order_set___for_each__body = 6,
  var_no__std_types__key_order_set___for_each__finally = FIRST_VAR+69,
  var_no__std_types__key_order_set___for_each__saved_context = 7,
  var_no__next = FIRST_VAR+70,
  var_no__basic_loops___finally,
  var_no__list,
  var_no__basic_loops___saved_context_of,
  var_no__std_types__key_order_set__for_each__1__myself = 5,
  var_no__std_types__key_order_set__for_each__2__node = 4,
  var_no__pop = FIRST_VAR+74,
  var_no__std_types__key_order_set___reduce__self,
  var_no__std_types__key_order_set___reduce__reduce_function,
  var_no__std_types__key_order_set___reduce__unit,
  var_no__is_empty,
  var_no__std_types__key_order_set__reduce__2__reduce = -func__std_types__key_order_set__reduce__2__reduce,
  var_no__std_types__key_order_set__reduce__2__reduce__node = 5,
  var_no__std_types__key_order_set__reduce__2__reduce__key = FIRST_VAR+79,
  var_no__std_types__key_order_set__reduce__2__reduce__left,
  var_no__std_types__key_order_set__reduce__2__reduce__right,
  var_no__std_types__key_order_set___map_reduce__self,
  var_no__std_types__key_order_set___map_reduce__map_function,
  var_no__std_types__key_order_set___map_reduce__reduce_function,
  var_no__std_types__key_order_set___map_reduce__unit,
  var_no__append,
  var_no__std_types__key_order_set__map_reduce__2__map_reduce = -func__std_types__key_order_set__map_reduce__2__map_reduce,
  var_no__std_types__key_order_set__map_reduce__2__map_reduce__node = 5,
  var_no__std_types__key_order_set__map_reduce__2__map_reduce__key = FIRST_VAR+87,
  var_no__std_types__key_order_set__map_reduce__2__map_reduce__left,
  var_no__std_types__key_order_set__map_reduce__2__map_reduce__right,
  var_no__std__key_order_set__keys = 4,
  var_no__std__key_order_set__result = FIRST_VAR+90,
  var_no__std__key_order_set__1__key = 4
};

static TAB_NUM tfunc__std_types__key_order_set__1[] = {
  1, // locals
  0, // no parameters
  // 83: ... retrieve(contents key)
  var_no__retrieve, 2, var_no__std_types__key_order_set__contents, var_no__std_types__key_order_set__key, 1, 4,
  // 83: -> retrieve(contents key)
  LET, 1, 4, -1
};

static TAB_NUM tfunc__std_types__key_order_set__2__1__1[] = {
  3, // locals
  0, // no parameters
  // 93: ... length_of(myself)
  var_no__length_of, 1, var_no__std_types__key_order_set__myself, 1, 6,
  // 93: ... length_of(myself)+1
  var_no__std___plus, 2, 6, -number__1, 1, 5,
  // 90: ->
  // 91:   myself
  // 92:     .contents_of contents
  // 93:     .length_of length_of(myself)+1
  LET, -2, var_no__std_types__key_order_set__myself, var_no__contents_of, var_no__std_types__key_order_set__contents, var_no__length_of, 5, 4,
  // 90: ->
  // 91:   myself
  // 92:     .contents_of contents
  // 93:     .length_of length_of(myself)+1
  LET, 1, 4, -1
};

static TAB_NUM tfunc__std_types__key_order_set__2__1__2[] = {
  0, // locals
  0, // no parameters
  // 94: -> myself
  LET, 1, var_no__std_types__key_order_set__myself, -1
};

static TAB_NUM tfunc__std_types__key_order_set__2__1[] = {
  1, // locals
  0, // no parameters
  // 87: insert &contents $success key
  var_no__insert, 2, var_no__std_types__key_order_set__contents, var_no__std_types__key_order_set__key, 2, var_no__std_types__key_order_set__contents, var_no__std_types__key_order_set__2__1__success,
  // 88: if
  // 89:   success
  // 90:   ->
  // 91:     myself
  // 92:       .contents_of contents
  // 93:       .length_of length_of(myself)+1
  // 94:   -> myself
  var_no__if, 3, var_no__std_types__key_order_set__2__1__success, -func__std_types__key_order_set__2__1__1, -func__std_types__key_order_set__2__1__2, -1
};

static TAB_NUM tfunc__std_types__key_order_set__2__2__1[] = {
  3, // locals
  0, // no parameters
  // 102: ... length_of(myself)
  var_no__length_of, 1, var_no__std_types__key_order_set__myself, 1, 6,
  // 102: ... length_of(myself)-1
  var_no__std___minus, 2, 6, -number__1, 1, 5,
  //  99: ->
  // 100:   myself
  // 101:     .contents_of contents
  // 102:     .length_of length_of(myself)-1
  LET, -2, var_no__std_types__key_order_set__myself, var_no__contents_of, var_no__std_types__key_order_set__contents, var_no__length_of, 5, 4,
  //  99: ->
  // 100:   myself
  // 101:     .contents_of contents
  // 102:     .length_of length_of(myself)-1
  LET, 1, 4, -1
};

static TAB_NUM tfunc__std_types__key_order_set__2__2__2[] = {
  0, // locals
  0, // no parameters
  // 103: -> myself
  LET, 1, var_no__std_types__key_order_set__myself, -1
};

static TAB_NUM tfunc__std_types__key_order_set__2__2[] = {
  1, // locals
  0, // no parameters
  // 96: delete &contents $success key
  var_no__delete, 2, var_no__std_types__key_order_set__contents, var_no__std_types__key_order_set__key, 2, var_no__std_types__key_order_set__contents, var_no__std_types__key_order_set__2__2__success,
  //  97: if
  //  98:   success
  //  99:   ->
  // 100:     myself
  // 101:       .contents_of contents
  // 102:       .length_of length_of(myself)-1
  // 103:   -> myself
  var_no__if, 3, var_no__std_types__key_order_set__2__2__success, -func__std_types__key_order_set__2__2__1, -func__std_types__key_order_set__2__2__2, -1
};

static TAB_NUM tfunc__std_types__key_order_set__2[] = {
  0, // locals
  0, // no parameters
  // 85: if
  // 86:   value:
  // 87:     insert &contents $success key
  // 88:     if
  // 89:       success
  // 90:       ->
  // 91:         myself
  // 92:           .contents_of contents
  // 93:           .length_of length_of(myself)+1
  // 94:       -> myself
  // ...
  var_no__if, 3, var_no__std_types__key_order_set__value, -func__std_types__key_order_set__2__1, -func__std_types__key_order_set__2__2, -1
};

static TAB_NUM tfunc__std_types___key_order_set[] = {
  1, // locals
  -3, // parameters:
  MYSELF_PARAMETER, var_no__std_types__key_order_set__myself,
  MANDATORY_PARAMETER, var_no__std_types__key_order_set__key,
  var_no__NONE, var_no__std_types__key_order_set__value,
  // 80: $contents contents_of(myself)
  var_no__contents_of, 1, var_no__std_types__key_order_set__myself, 1, var_no__std_types__key_order_set__contents,
  // 82: NONE == value
  var_no__std___equal, 2, var_no__NONE, var_no__std_types__key_order_set__value, 1, 4,
  // 81: if
  // 82:   NONE == value
  // 83:   -> retrieve(contents key)
  // 84:   :
  // 85:     if
  // 86:       value:
  // 87:         insert &contents $success key
  // 88:         if
  // 89:           success
  // 90:           ->
  // ...
  var_no__if, 3, 4, -func__std_types__key_order_set__1, -func__std_types__key_order_set__2, -1
};

static TAB_NUM tfunc__empty_node___retrieve[] = {
  2, // locals
  2, // parameters:
  var_no__empty_node__retrieve__self,
  var_no__empty_node__retrieve__key,
  // 108: ... -> false
  LET, 1, var_no__false, -1
};

static TAB_NUM tfunc__binary_node__retrieve__1[] = {
  0, // locals
  0, // no parameters
  // 114: -> true
  LET, 1, var_no__true, -1
};

static TAB_NUM tfunc__binary_node__retrieve__2__1[] = {
  0, // locals
  0, // no parameters
  // 118: ... retrieve my_left key
  var_no__retrieve, 2, var_no__binary_node__retrieve__my_left, var_no__binary_node__retrieve__key, -1
};

static TAB_NUM tfunc__binary_node__retrieve__2__2[] = {
  0, // locals
  0, // no parameters
  // 119: ... retrieve my_right key
  var_no__retrieve, 2, var_no__binary_node__retrieve__my_right, var_no__binary_node__retrieve__key, -1
};

static TAB_NUM tfunc__binary_node__retrieve__2[] = {
  1, // locals
  0, // no parameters
  // 117: key < my_key
  var_no__std___less, 2, var_no__binary_node__retrieve__key, var_no__binary_node__retrieve__my_key, 1, 4,
  // 116: if
  // 117:   key < my_key
  // 118:   : retrieve my_left key
  // 119:   : retrieve my_right key
  var_no__if, 3, 4, -func__binary_node__retrieve__2__1, -func__binary_node__retrieve__2__2, -1
};

static TAB_NUM tfunc__binary_node___retrieve[] = {
  2, // locals
  2, // parameters:
  var_no__binary_node__retrieve__self,
  var_no__binary_node__retrieve__key,
  // 111: self $my_key $my_left $my_right
  var_no__binary_node__retrieve__self, 0, 3, var_no__binary_node__retrieve__my_key, var_no__binary_node__retrieve__my_left, var_no__binary_node__retrieve__my_right,
  // 113: key == my_key
  var_no__std___equal, 2, var_no__binary_node__retrieve__key, var_no__binary_node__retrieve__my_key, 1, 4,
  // 112: if
  // 113:   key == my_key
  // 114:   -> true
  // 115:   :
  // 116:     if
  // 117:       key < my_key
  // 118:       : retrieve my_left key
  // 119:       : retrieve my_right key
  var_no__if, 3, 4, -func__binary_node__retrieve__1, -func__binary_node__retrieve__2, -1
};

static TAB_NUM tfunc__empty_node___insert[] = {
  3, // locals
  2, // parameters:
  var_no__empty_node__insert__self,
  var_no__empty_node__insert__key,
  // 125: ... new(binary_node key empty_node empty_node)
  var_no__new, 4, var_no__binary_node, var_no__empty_node__insert__key, var_no__empty_node, var_no__empty_node, 1, 4,
  // 125: -> new(binary_node key empty_node empty_node) true
  LET, 2, 4, var_no__true, -1
};

static TAB_NUM tfunc__binary_node__insert__1[] = {
  0, // locals
  0, // no parameters
  // 131: -> self false
  LET, 2, var_no__binary_node__insert__self, var_no__false, -1
};

static TAB_NUM tfunc__binary_node__insert__2__1__1[] = {
  1, // locals
  0, // no parameters
  // 139: ... new(self my_key my_left my_right)
  var_no__new, 4, var_no__binary_node__insert__self, var_no__binary_node__insert__my_key, var_no__binary_node__insert__my_left, var_no__binary_node__insert__my_right, 1, 4,
  // 139: -> new(self my_key my_left my_right) true
  LET, 2, 4, var_no__true, -1
};

static TAB_NUM tfunc__binary_node__insert__2__1__2[] = {
  0, // locals
  0, // no parameters
  // 140: -> self false
  LET, 2, var_no__binary_node__insert__self, var_no__false, -1
};

static TAB_NUM tfunc__binary_node__insert__2__1[] = {
  1, // locals
  0, // no parameters
  // 136: insert &my_left $success key
  var_no__insert, 2, var_no__binary_node__insert__my_left, var_no__binary_node__insert__key, 2, var_no__binary_node__insert__my_left, var_no__binary_node__insert__2__1__success,
  // 137: if
  // 138:   success
  // 139:   -> new(self my_key my_left my_right) true
  // 140:   -> self false
  var_no__if, 3, var_no__binary_node__insert__2__1__success, -func__binary_node__insert__2__1__1, -func__binary_node__insert__2__1__2, -1
};

static TAB_NUM tfunc__binary_node__insert__2__2__1[] = {
  1, // locals
  0, // no parameters
  // 145: ... new(self my_key my_left my_right)
  var_no__new, 4, var_no__binary_node__insert__self, var_no__binary_node__insert__my_key, var_no__binary_node__insert__my_left, var_no__binary_node__insert__my_right, 1, 4,
  // 145: -> new(self my_key my_left my_right) true
  LET, 2, 4, var_no__true, -1
};

static TAB_NUM tfunc__binary_node__insert__2__2__2[] = {
  0, // locals
  0, // no parameters
  // 146: -> self false
  LET, 2, var_no__binary_node__insert__self, var_no__false, -1
};

static TAB_NUM tfunc__binary_node__insert__2__2[] = {
  1, // locals
  0, // no parameters
  // 142: insert &my_right $success key
  var_no__insert, 2, var_no__binary_node__insert__my_right, var_no__binary_node__insert__key, 2, var_no__binary_node__insert__my_right, var_no__binary_node__insert__2__2__success,
  // 143: if
  // 144:   success
  // 145:   -> new(self my_key my_left my_right) true
  // 146:   -> self false
  var_no__if, 3, var_no__binary_node__insert__2__2__success, -func__binary_node__insert__2__2__1, -func__binary_node__insert__2__2__2, -1
};

static TAB_NUM tfunc__binary_node__insert__2[] = {
  1, // locals
  0, // no parameters
  // 134: key < my_key
  var_no__std___less, 2, var_no__binary_node__insert__key, var_no__binary_node__insert__my_key, 1, 4,
  // 133: if
  // 134:   key < my_key
  // 135:   :
  // 136:     insert &my_left $success key
  // 137:     if
  // 138:       success
  // 139:       -> new(self my_key my_left my_right) true
  // 140:       -> self false
  // 141:   :
  // 142:     insert &my_right $success key
  // ...
  var_no__if, 3, 4, -func__binary_node__insert__2__1, -func__binary_node__insert__2__2, -1
};

static TAB_NUM tfunc__binary_node___insert[] = {
  1, // locals
  2, // parameters:
  var_no__binary_node__insert__self,
  var_no__binary_node__insert__key,
  // 128: self $my_key $my_left $my_right
  var_no__binary_node__insert__self, 0, 3, var_no__binary_node__insert__my_key, var_no__binary_node__insert__my_left, var_no__binary_node__insert__my_right,
  // 130: key == my_key
  var_no__std___equal, 2, var_no__binary_node__insert__key, var_no__binary_node__insert__my_key, 1, 4,
  // 129: if
  // 130:   key == my_key
  // 131:   -> self false
  // 132:   :
  // 133:     if
  // 134:       key < my_key
  // 135:       :
  // 136:         insert &my_left $success key
  // 137:         if
  // 138:           success
  // ...
  var_no__if, 3, 4, -func__binary_node__insert__1, -func__binary_node__insert__2, -1
};

static TAB_NUM tfunc__fetch_first__1[] = {
  0, // locals
  0, // no parameters
  // 155: -> my_right my_key
  LET, 2, var_no__fetch_first__my_right, var_no__fetch_first__my_key, -1
};

static TAB_NUM tfunc__fetch_first__2[] = {
  2, // locals
  0, // no parameters
  // 157: fetch_first &my_left $first_key
  var_no__fetch_first, 1, var_no__fetch_first__my_left, 2, var_no__fetch_first__my_left, var_no__fetch_first__2__first_key,
  // 158: ... new(self my_key my_left my_right)
  var_no__new, 4, var_no__fetch_first__self, var_no__fetch_first__my_key, var_no__fetch_first__my_left, var_no__fetch_first__my_right, 1, 4,
  // 158: -> new(self my_key my_left my_right) first_key
  LET, 2, 4, var_no__fetch_first__2__first_key, -1
};

static TAB_NUM tfunc__fetch_first[] = {
  1, // locals
  1, // parameters:
  var_no__fetch_first__self,
  // 152: self $my_key $my_left $my_right
  var_no__fetch_first__self, 0, 3, var_no__fetch_first__my_key, var_no__fetch_first__my_left, var_no__fetch_first__my_right,
  // 154: my_left.is_an_empty_node
  var_no__is_an_empty_node, 1, var_no__fetch_first__my_left, 1, 4,
  // 153: if
  // 154:   my_left.is_an_empty_node
  // 155:   -> my_right my_key
  // 156:   :
  // 157:     fetch_first &my_left $first_key
  // 158:     -> new(self my_key my_left my_right) first_key
  var_no__if, 3, 4, -func__fetch_first__1, -func__fetch_first__2, -1
};

static TAB_NUM tfunc__empty_node___delete[] = {
  2, // locals
  2, // parameters:
  var_no__empty_node__delete__self,
  var_no__empty_node__delete__key,
  // 160: ... -> self false
  LET, 2, var_no__empty_node__delete__self, var_no__false, -1
};

static TAB_NUM tfunc__binary_node__delete__1__1[] = {
  0, // locals
  0, // no parameters
  // 169: -> my_right true
  LET, 2, var_no__binary_node__delete__my_right, var_no__true, -1
};

static TAB_NUM tfunc__binary_node__delete__1__2__1[] = {
  0, // locals
  0, // no parameters
  // 173: -> my_left true
  LET, 2, var_no__binary_node__delete__my_left, var_no__true, -1
};

static TAB_NUM tfunc__binary_node__delete__1__2__2[] = {
  2, // locals
  0, // no parameters
  // 175: fetch_first &my_right $first_key
  var_no__fetch_first, 1, var_no__binary_node__delete__my_right, 2, var_no__binary_node__delete__my_right, var_no__binary_node__delete__1__2__2__first_key,
  // 176: ... new(self first_key my_left my_right)
  var_no__new, 4, var_no__binary_node__delete__self, var_no__binary_node__delete__1__2__2__first_key, var_no__binary_node__delete__my_left, var_no__binary_node__delete__my_right, 1, 4,
  // 176: -> new(self first_key my_left my_right)
  LET, 1, 4, -1
};

static TAB_NUM tfunc__binary_node__delete__1__2[] = {
  1, // locals
  0, // no parameters
  // 172: my_right.is_an_empty_node
  var_no__is_an_empty_node, 1, var_no__binary_node__delete__my_right, 1, 4,
  // 171: if
  // 172:   my_right.is_an_empty_node
  // 173:   -> my_left true
  // 174:   :
  // 175:     fetch_first &my_right $first_key
  // 176:     -> new(self first_key my_left my_right)
  var_no__if, 3, 4, -func__binary_node__delete__1__2__1, -func__binary_node__delete__1__2__2, -1
};

static TAB_NUM tfunc__binary_node__delete__1[] = {
  1, // locals
  0, // no parameters
  // 168: my_left.is_an_empty_node
  var_no__is_an_empty_node, 1, var_no__binary_node__delete__my_left, 1, 4,
  // 167: if
  // 168:   my_left.is_an_empty_node
  // 169:   -> my_right true
  // 170:   :
  // 171:     if
  // 172:       my_right.is_an_empty_node
  // 173:       -> my_left true
  // 174:       :
  // 175:         fetch_first &my_right $first_key
  // 176:         -> new(self first_key my_left my_right)
  var_no__if, 3, 4, -func__binary_node__delete__1__1, -func__binary_node__delete__1__2, -1
};

static TAB_NUM tfunc__binary_node__delete__2__1__1[] = {
  1, // locals
  0, // no parameters
  // 184: ... new(self my_key my_left my_right)
  var_no__new, 4, var_no__binary_node__delete__self, var_no__binary_node__delete__my_key, var_no__binary_node__delete__my_left, var_no__binary_node__delete__my_right, 1, 4,
  // 184: -> new(self my_key my_left my_right) true
  LET, 2, 4, var_no__true, -1
};

static TAB_NUM tfunc__binary_node__delete__2__1__2[] = {
  0, // locals
  0, // no parameters
  // 185: -> self false
  LET, 2, var_no__binary_node__delete__self, var_no__false, -1
};

static TAB_NUM tfunc__binary_node__delete__2__1[] = {
  1, // locals
  0, // no parameters
  // 181: delete &my_left $success key
  var_no__delete, 2, var_no__binary_node__delete__my_left, var_no__binary_node__delete__key, 2, var_no__binary_node__delete__my_left, var_no__binary_node__delete__2__1__success,
  // 182: if
  // 183:   success
  // 184:   -> new(self my_key my_left my_right) true
  // 185:   -> self false
  var_no__if, 3, var_no__binary_node__delete__2__1__success, -func__binary_node__delete__2__1__1, -func__binary_node__delete__2__1__2, -1
};

static TAB_NUM tfunc__binary_node__delete__2__2__1[] = {
  1, // locals
  0, // no parameters
  // 190: ... new(self my_key my_left my_right)
  var_no__new, 4, var_no__binary_node__delete__self, var_no__binary_node__delete__my_key, var_no__binary_node__delete__my_left, var_no__binary_node__delete__my_right, 1, 4,
  // 190: -> new(self my_key my_left my_right) true
  LET, 2, 4, var_no__true, -1
};

static TAB_NUM tfunc__binary_node__delete__2__2__2[] = {
  0, // locals
  0, // no parameters
  // 191: -> self false
  LET, 2, var_no__binary_node__delete__self, var_no__false, -1
};

static TAB_NUM tfunc__binary_node__delete__2__2[] = {
  1, // locals
  0, // no parameters
  // 187: delete &my_right $success key
  var_no__delete, 2, var_no__binary_node__delete__my_right, var_no__binary_node__delete__key, 2, var_no__binary_node__delete__my_right, var_no__binary_node__delete__2__2__success,
  // 188: if
  // 189:   success
  // 190:   -> new(self my_key my_left my_right) true
  // 191:   -> self false
  var_no__if, 3, var_no__binary_node__delete__2__2__success, -func__binary_node__delete__2__2__1, -func__binary_node__delete__2__2__2, -1
};

static TAB_NUM tfunc__binary_node__delete__2[] = {
  1, // locals
  0, // no parameters
  // 179: key < my_key
  var_no__std___less, 2, var_no__binary_node__delete__key, var_no__binary_node__delete__my_key, 1, 4,
  // 178: if
  // 179:   key < my_key
  // 180:   :
  // 181:     delete &my_left $success key
  // 182:     if
  // 183:       success
  // 184:       -> new(self my_key my_left my_right) true
  // 185:       -> self false
  // 186:   :
  // 187:     delete &my_right $success key
  // ...
  var_no__if, 3, 4, -func__binary_node__delete__2__1, -func__binary_node__delete__2__2, -1
};

static TAB_NUM tfunc__binary_node___delete[] = {
  1, // locals
  2, // parameters:
  var_no__binary_node__delete__self,
  var_no__binary_node__delete__key,
  // 163: self $my_key $my_left $my_right
  var_no__binary_node__delete__self, 0, 3, var_no__binary_node__delete__my_key, var_no__binary_node__delete__my_left, var_no__binary_node__delete__my_right,
  // 165: key == my_key
  var_no__std___equal, 2, var_no__binary_node__delete__key, var_no__binary_node__delete__my_key, 1, 4,
  // 164: if
  // 165:   key == my_key
  // 166:   :
  // 167:     if
  // 168:       my_left.is_an_empty_node
  // 169:       -> my_right true
  // 170:       :
  // 171:         if
  // 172:           my_right.is_an_empty_node
  // 173:           -> my_left true
  // ...
  var_no__if, 3, 4, -func__binary_node__delete__1, -func__binary_node__delete__2, -1
};

static TAB_NUM tfunc__binary_node__first_item_of__1[] = {
  0, // locals
  0, // no parameters
  // 200: -> my_key
  LET, 1, var_no__binary_node__first_item_of__my_key, -1
};

static TAB_NUM tfunc__binary_node__first_item_of__2[] = {
  1, // locals
  0, // no parameters
  // 201: ... first_item_of(my_left)
  var_no__first_item_of, 1, var_no__binary_node__first_item_of__my_left, 1, 4,
  // 201: -> first_item_of(my_left)
  LET, 1, 4, -1
};

static TAB_NUM tfunc__binary_node___first_item_of[] = {
  3, // locals
  1, // parameters:
  var_no__binary_node__first_item_of__self,
  // 197: self $my_key $my_left $_my_right
  var_no__binary_node__first_item_of__self, 0, 3, var_no__binary_node__first_item_of__my_key, var_no__binary_node__first_item_of__my_left, var_no__binary_node__first_item_of__my_right,
  // 199: my_left.is_an_empty_node
  var_no__is_an_empty_node, 1, var_no__binary_node__first_item_of__my_left, 1, 4,
  // 198: if
  // 199:   my_left.is_an_empty_node
  // 200:   -> my_key
  // 201:   -> first_item_of(my_left)
  var_no__if, 3, 4, -func__binary_node__first_item_of__1, -func__binary_node__first_item_of__2, -1
};

static TAB_NUM tfunc__std_types___key_order_set___first_item_of[] = {
  3, // locals
  1, // parameters:
  var_no__std_types__key_order_set___first_item_of__self,
  // 204: ... contents_of(self)
  var_no__contents_of, 1, var_no__std_types__key_order_set___first_item_of__self, 1, 5,
  // 204: ... first_item_of(contents_of(self))
  var_no__first_item_of, 1, 5, 1, 4,
  // 204: -> first_item_of(contents_of(self))
  LET, 1, 4, -1
};

static TAB_NUM tfunc__binary_node__last_item_of__1[] = {
  0, // locals
  0, // no parameters
  // 213: -> my_key
  LET, 1, var_no__binary_node__last_item_of__my_key, -1
};

static TAB_NUM tfunc__binary_node__last_item_of__2[] = {
  1, // locals
  0, // no parameters
  // 214: ... last_item_of(my_right)
  var_no__last_item_of, 1, var_no__binary_node__last_item_of__my_right, 1, 4,
  // 214: -> last_item_of(my_right)
  LET, 1, 4, -1
};

static TAB_NUM tfunc__binary_node___last_item_of[] = {
  3, // locals
  1, // parameters:
  var_no__binary_node__last_item_of__self,
  // 210: self $my_key $_my_left $my_right
  var_no__binary_node__last_item_of__self, 0, 3, var_no__binary_node__last_item_of__my_key, var_no__binary_node__last_item_of__my_left, var_no__binary_node__last_item_of__my_right,
  // 212: my_right.is_an_empty_node
  var_no__is_an_empty_node, 1, var_no__binary_node__last_item_of__my_right, 1, 4,
  // 211: if
  // 212:   my_right.is_an_empty_node
  // 213:   -> my_key
  // 214:   -> last_item_of(my_right)
  var_no__if, 3, 4, -func__binary_node__last_item_of__1, -func__binary_node__last_item_of__2, -1
};

static TAB_NUM tfunc__std_types___key_order_set___last_item_of[] = {
  3, // locals
  1, // parameters:
  var_no__std_types__key_order_set___last_item_of__self,
  // 217: ... contents_of(self)
  var_no__contents_of, 1, var_no__std_types__key_order_set___last_item_of__self, 1, 5,
  // 217: ... last_item_of(contents_of(self))
  var_no__last_item_of, 1, 5, 1, 4,
  // 217: -> last_item_of(contents_of(self))
  LET, 1, 4, -1
};

static TAB_NUM tfunc__finish___for_each_1_call[] = {
  1, // locals
  1, // parameters:
  var_no__finish__for_each_1_call__self,
  // 228: ... break!
  var_no__break, 0, -2
};

static TAB_NUM tfunc__empty_node___for_each_1_left[] = {
  2, // locals
  1, // parameters:
  var_no__empty_node__for_each_1_left__self,
  // 231: ... basic_loops::todo(-1)
  var_no__basic_loops___todo, 1, -number__m1, 1, 4,
  // 231: for_each_1_call! basic_loops::todo(-1) # peek
  var_no__for_each_1_call, 1, 4, -2
};

static TAB_NUM tfunc__binary_node___for_each_1_left[] = {
  4, // locals
  1, // parameters:
  var_no__binary_node__for_each_1_left__self,
  // 234: self $_my_key $my_left $_my_right
  var_no__binary_node__for_each_1_left__self, 0, 3, var_no__binary_node__for_each_1_left__my_key, var_no__binary_node__for_each_1_left__my_left, var_no__binary_node__for_each_1_left__my_right,
  // 235: push &basic_loops::todo self
  var_no__push, 2, var_no__basic_loops___todo, var_no__binary_node__for_each_1_left__self, 1, var_no__basic_loops___todo,
  // 236: for_each_1_left! my_left
  var_no__for_each_1_left, 1, var_no__binary_node__for_each_1_left__my_left, -2
};

static TAB_NUM tfunc__binary_node___for_each_1_call[] = {
  4, // locals
  1, // parameters:
  var_no__binary_node__for_each_1_call__self,
  // 239: self $my_key $_my_left $_my_right
  var_no__binary_node__for_each_1_call__self, 0, 3, var_no__binary_node__for_each_1_call__my_key, var_no__binary_node__for_each_1_call__my_left, var_no__binary_node__for_each_1_call__my_right,
  // 240: basic_loops::body! my_key
  var_no__basic_loops___body, 1, var_no__binary_node__for_each_1_call__my_key, -2
};

static TAB_NUM tfunc__binary_node___for_each_1_right[] = {
  4, // locals
  1, // parameters:
  var_no__binary_node__for_each_1_right__self,
  // 243: self $_my_key $_my_left $my_right
  var_no__binary_node__for_each_1_right__self, 0, 3, var_no__binary_node__for_each_1_right__my_key, var_no__binary_node__for_each_1_right__my_left, var_no__binary_node__for_each_1_right__my_right,
  // 244: for_each_1_left! my_right
  var_no__for_each_1_left, 1, var_no__binary_node__for_each_1_right__my_right, -2
};

static TAB_NUM tfunc__std_types__key_order_set___for_each__1[] = {
  2, // locals
  -1, // parameters:
  MYSELF_PARAMETER, var_no__std_types__key_order_set__for_each__1__myself,
  // 292: !finally basic_loops::finally
  LET, 1, var_no__basic_loops___finally, 1, var_no__std_types__key_order_set___for_each__finally,
  // 293: basic_loops::saved_context_of(myself)
  var_no__basic_loops___saved_context_of, 1, var_no__std_types__key_order_set__for_each__1__myself, 1, 4,
  // 293: basic_loops::saved_context_of(myself)
  // 294:   !next !break
  // 295:   !basic_loops::body !basic_loops::finally !basic_loops::todo
  4, 0, 5, var_no__next, var_no__break, var_no__basic_loops___body, var_no__basic_loops___finally, var_no__basic_loops___todo,
  // 296: finally!
  var_no__std_types__key_order_set___for_each__finally, 0, -2
};

static TAB_NUM tfunc__std_types__key_order_set___for_each__2[] = {
  1, // locals
  0, // no parameters
  // 301: pop &basic_loops::todo $node
  var_no__pop, 1, var_no__basic_loops___todo, 2, var_no__basic_loops___todo, var_no__std_types__key_order_set__for_each__2__node,
  // 302: for_each_1_right! node
  var_no__for_each_1_right, 1, var_no__std_types__key_order_set__for_each__2__node, -2
};

static TAB_NUM tfunc__std_types___key_order_set___for_each[] = {
  4, // locals
  -3, // parameters:
  MANDATORY_PARAMETER, var_no__std_types__key_order_set___for_each__self,
  MANDATORY_PARAMETER, var_no__std_types__key_order_set___for_each__body,
  var_no__next, var_no__std_types__key_order_set___for_each__finally,
  // 279: $saved_context
  // 280:   tuple
  // 281:     next
  // 282:     break
  // 283:     basic_loops::body
  // 284:     basic_loops::finally
  // 285:     basic_loops::todo
  var_no__tuple, 5, var_no__next, var_no__break, var_no__basic_loops___body, var_no__basic_loops___finally, var_no__basic_loops___todo, 1, var_no__std_types__key_order_set___for_each__saved_context,
  // 287: !basic_loops::body body
  LET, 1, var_no__std_types__key_order_set___for_each__body, 1, var_no__basic_loops___body,
  // 288: !basic_loops::finally finally
  LET, 1, var_no__std_types__key_order_set___for_each__finally, 1, var_no__basic_loops___finally,
  // 289: !basic_loops::todo list(finish)
  var_no__list, 1, var_no__finish, 1, var_no__basic_loops___todo,
  // 291: !break: (myself^)
  // 292:   !finally basic_loops::finally
  // 293:   basic_loops::saved_context_of(myself)
  // 294:     !next !break
  // 295:     !basic_loops::body !basic_loops::finally !basic_loops::todo
  // 296:   finally!
  LET, 1, -func__std_types__key_order_set___for_each__1, -4, var_no__break,
  // 298: !break.basic_loops::saved_context_of
  LET, -1, var_no__break, var_no__basic_loops___saved_context_of, var_no__std_types__key_order_set___for_each__saved_context, var_no__break,
  // 300: !next:
  // 301:   pop &basic_loops::todo $node
  // 302:   for_each_1_right! node
  LET, 1, -func__std_types__key_order_set___for_each__2, -4, var_no__next,
  // 304: ... contents_of(self)
  var_no__contents_of, 1, var_no__std_types__key_order_set___for_each__self, 1, 4,
  // 304: for_each_1_left! contents_of(self)
  var_no__for_each_1_left, 1, 4, -2
};

static TAB_NUM tfunc__std_types__key_order_set___reduce__1[] = {
  0, // locals
  0, // no parameters
  // 317: -> unit
  LET, 1, var_no__std_types__key_order_set___reduce__unit, -1
};

static TAB_NUM tfunc__std_types__key_order_set__reduce__2__reduce__1[] = {
  0, // locals
  0, // no parameters
  // 324: -> key
  LET, 1, var_no__std_types__key_order_set__reduce__2__reduce__key, -1
};

static TAB_NUM tfunc__std_types__key_order_set__reduce__2__reduce__2[] = {
  2, // locals
  0, // no parameters
  // 325: ... reduce(left)
  var_no__std_types__key_order_set__reduce__2__reduce, 1, var_no__std_types__key_order_set__reduce__2__reduce__left, 1, 5,
  // 325: ... reduce_function(reduce(left) key)
  var_no__std_types__key_order_set___reduce__reduce_function, 2, 5, var_no__std_types__key_order_set__reduce__2__reduce__key, 1, 4,
  // 325: -> reduce_function(reduce(left) key)
  LET, 1, 4, -1
};

static TAB_NUM tfunc__std_types__key_order_set__reduce__2__reduce__3[] = {
  0, // locals
  0, // no parameters
  // 328: -> key
  LET, 1, var_no__std_types__key_order_set__reduce__2__reduce__key, -1
};

static TAB_NUM tfunc__std_types__key_order_set__reduce__2__reduce__4[] = {
  2, // locals
  0, // no parameters
  // 329: ... reduce(right)
  var_no__std_types__key_order_set__reduce__2__reduce, 1, var_no__std_types__key_order_set__reduce__2__reduce__right, 1, 5,
  // 329: ... reduce_function(key reduce(right))
  var_no__std_types__key_order_set___reduce__reduce_function, 2, var_no__std_types__key_order_set__reduce__2__reduce__key, 5, 1, 4,
  // 329: -> reduce_function(key reduce(right))
  LET, 1, 4, -1
};

static TAB_NUM tfunc__std_types__key_order_set__reduce__2__reduce[] = {
  2, // locals
  1, // parameters:
  var_no__std_types__key_order_set__reduce__2__reduce__node,
  // 320: node $key $left $right
  var_no__std_types__key_order_set__reduce__2__reduce__node, 0, 3, var_no__std_types__key_order_set__reduce__2__reduce__key, var_no__std_types__key_order_set__reduce__2__reduce__left, var_no__std_types__key_order_set__reduce__2__reduce__right,
  // 323: left.is_an_empty_node
  var_no__is_an_empty_node, 1, var_no__std_types__key_order_set__reduce__2__reduce__left, 1, 4,
  // 321: !key
  // 322:   if
  // 323:     left.is_an_empty_node
  // 324:     -> key
  // 325:     -> reduce_function(reduce(left) key)
  var_no__if, 3, 4, -func__std_types__key_order_set__reduce__2__reduce__1, -func__std_types__key_order_set__reduce__2__reduce__2, 1, var_no__std_types__key_order_set__reduce__2__reduce__key,
  // 327: right.is_an_empty_node
  var_no__is_an_empty_node, 1, var_no__std_types__key_order_set__reduce__2__reduce__right, 1, 4,
  // 326: if
  // 327:   right.is_an_empty_node
  // 328:   -> key
  // 329:   -> reduce_function(key reduce(right))
  var_no__if, 3, 4, -func__std_types__key_order_set__reduce__2__reduce__3, -func__std_types__key_order_set__reduce__2__reduce__4, -1
};

static TAB_NUM tfunc__std_types__key_order_set___reduce__2[] = {
  2, // locals
  0, // no parameters
  // 331: ... contents_of(self)
  var_no__contents_of, 1, var_no__std_types__key_order_set___reduce__self, 1, 5,
  // 331: ... reduce(contents_of(self))
  var_no__std_types__key_order_set__reduce__2__reduce, 1, 5, 1, 4,
  // 331: -> reduce(contents_of(self))
  LET, 1, 4, -1
};

static TAB_NUM tfunc__std_types___key_order_set___reduce[] = {
  1, // locals
  -3, // parameters:
  MANDATORY_PARAMETER, var_no__std_types__key_order_set___reduce__self,
  MANDATORY_PARAMETER, var_no__std_types__key_order_set___reduce__reduce_function,
  var_no__undefined, var_no__std_types__key_order_set___reduce__unit,
  // 316: self.is_empty
  var_no__is_empty, 1, var_no__std_types__key_order_set___reduce__self, 1, 4,
  // 315: if
  // 316:   self.is_empty
  // 317:   -> unit
  // 318:   :
  // 319:     $reduce: (node)
  // 320:       node $key $left $right
  // 321:       !key
  // 322:         if
  // 323:           left.is_an_empty_node
  // 324:           -> key
  // ...
  var_no__if, 3, 4, -func__std_types__key_order_set___reduce__1, -func__std_types__key_order_set___reduce__2, -1
};

static TAB_NUM tfunc__std_types__key_order_set___map_reduce__1[] = {
  0, // locals
  0, // no parameters
  // 344: -> unit
  LET, 1, var_no__std_types__key_order_set___map_reduce__unit, -1
};

static TAB_NUM tfunc__std_types__key_order_set__map_reduce__2__map_reduce__1[] = {
  0, // locals
  0, // no parameters
  // 351: -> key
  LET, 1, var_no__std_types__key_order_set__map_reduce__2__map_reduce__key, -1
};

static TAB_NUM tfunc__std_types__key_order_set__map_reduce__2__map_reduce__2[] = {
  2, // locals
  0, // no parameters
  // 352: ... map_reduce(left)
  var_no__std_types__key_order_set__map_reduce__2__map_reduce, 1, var_no__std_types__key_order_set__map_reduce__2__map_reduce__left, 1, 5,
  // 352: ... reduce_function(map_reduce(left) key)
  var_no__std_types__key_order_set___map_reduce__reduce_function, 2, 5, var_no__std_types__key_order_set__map_reduce__2__map_reduce__key, 1, 4,
  // 352: -> reduce_function(map_reduce(left) key)
  LET, 1, 4, -1
};

static TAB_NUM tfunc__std_types__key_order_set__map_reduce__2__map_reduce__3[] = {
  0, // locals
  0, // no parameters
  // 355: -> key
  LET, 1, var_no__std_types__key_order_set__map_reduce__2__map_reduce__key, -1
};

static TAB_NUM tfunc__std_types__key_order_set__map_reduce__2__map_reduce__4[] = {
  2, // locals
  0, // no parameters
  // 356: ... map_reduce(right)
  var_no__std_types__key_order_set__map_reduce__2__map_reduce, 1, var_no__std_types__key_order_set__map_reduce__2__map_reduce__right, 1, 5,
  // 356: ... reduce_function(key map_reduce(right))
  var_no__std_types__key_order_set___map_reduce__reduce_function, 2, var_no__std_types__key_order_set__map_reduce__2__map_reduce__key, 5, 1, 4,
  // 356: -> reduce_function(key map_reduce(right))
  LET, 1, 4, -1
};

static TAB_NUM tfunc__std_types__key_order_set__map_reduce__2__map_reduce[] = {
  2, // locals
  1, // parameters:
  var_no__std_types__key_order_set__map_reduce__2__map_reduce__node,
  // 347: node $key $left $right
  var_no__std_types__key_order_set__map_reduce__2__map_reduce__node, 0, 3, var_no__std_types__key_order_set__map_reduce__2__map_reduce__key, var_no__std_types__key_order_set__map_reduce__2__map_reduce__left, var_no__std_types__key_order_set__map_reduce__2__map_reduce__right,
  // 348: map_function &key
  var_no__std_types__key_order_set___map_reduce__map_function, 1, var_no__std_types__key_order_set__map_reduce__2__map_reduce__key, 1, var_no__std_types__key_order_set__map_reduce__2__map_reduce__key,
  // 350: left.is_an_empty_node
  var_no__is_an_empty_node, 1, var_no__std_types__key_order_set__map_reduce__2__map_reduce__left, 1, 4,
  // 349: if !key
  // 350:   left.is_an_empty_node
  // 351:   -> key
  // 352:   -> reduce_function(map_reduce(left) key)
  var_no__if, 3, 4, -func__std_types__key_order_set__map_reduce__2__map_reduce__1, -func__std_types__key_order_set__map_reduce__2__map_reduce__2, 1, var_no__std_types__key_order_set__map_reduce__2__map_reduce__key,
  // 354: right.is_an_empty_node
  var_no__is_an_empty_node, 1, var_no__std_types__key_order_set__map_reduce__2__map_reduce__right, 1, 4,
  // 353: if
  // 354:   right.is_an_empty_node
  // 355:   -> key
  // 356:   -> reduce_function(key map_reduce(right))
  var_no__if, 3, 4, -func__std_types__key_order_set__map_reduce__2__map_reduce__3, -func__std_types__key_order_set__map_reduce__2__map_reduce__4, -1
};

static TAB_NUM tfunc__std_types__key_order_set___map_reduce__2[] = {
  2, // locals
  0, // no parameters
  // 358: ... contents_of(self)
  var_no__contents_of, 1, var_no__std_types__key_order_set___map_reduce__self, 1, 5,
  // 358: ... map_reduce(contents_of(self))
  var_no__std_types__key_order_set__map_reduce__2__map_reduce, 1, 5, 1, 4,
  // 358: -> map_reduce(contents_of(self))
  LET, 1, 4, -1
};

static TAB_NUM tfunc__std_types___key_order_set___map_reduce[] = {
  1, // locals
  -4, // parameters:
  MANDATORY_PARAMETER, var_no__std_types__key_order_set___map_reduce__self,
  MANDATORY_PARAMETER, var_no__std_types__key_order_set___map_reduce__map_function,
  var_no__append, var_no__std_types__key_order_set___map_reduce__reduce_function,
  var_no__undefined, var_no__std_types__key_order_set___map_reduce__unit,
  // 343: self.is_empty
  var_no__is_empty, 1, var_no__std_types__key_order_set___map_reduce__self, 1, 4,
  // 342: if
  // 343:   self.is_empty
  // 344:   -> unit
  // 345:   :
  // 346:     $map_reduce: (node)
  // 347:       node $key $left $right
  // 348:       map_function &key
  // 349:       if !key
  // 350:         left.is_an_empty_node
  // 351:         -> key
  // ...
  var_no__if, 3, 4, -func__std_types__key_order_set___map_reduce__1, -func__std_types__key_order_set___map_reduce__2, -1
};

static TAB_NUM tfunc__std__key_order_set__1[] = {
  1, // locals
  1, // parameters:
  var_no__std__key_order_set__1__key,
  // 364: !result(key)
  var_no__std__key_order_set__result, 2, var_no__std__key_order_set__1__key, var_no__true, 1, var_no__std__key_order_set__result,
  // 365: next
  var_no__next, 0, -1
};

static TAB_NUM tfunc__std__key_order_set__2[] = {
  0, // locals
  0, // no parameters
  // 366: -> result
  LET, 1, var_no__std__key_order_set__result, -1
};

static TAB_NUM tfunc__std___key_order_set[] = {
  1, // locals
  -1, // parameters:
  REST_PARAMETER, var_no__std__key_order_set__keys,
  // 361: $result empty_key_order_set
  LET, 1, var_no__empty_key_order_set, 1, var_no__std__key_order_set__result,
  // 362: for_each keys
  // 363:   : (key)
  // 364:     !result(key) true
  // 365:     next
  // 366:   -> result
  var_no__for_each, 3, var_no__std__key_order_set__keys, -func__std__key_order_set__1, -func__std__key_order_set__2, -1
};


static int arguments__tuple__undefined___undefined___undefined[] = {
  -var_no__undefined,
  -var_no__undefined,
  -var_no__undefined
};

static FUNKY_NAMESPACE used_namespaces[] = {
  {"std", 1, 0}
};

static FUNKY_CONSTANT constants_table[] = {
  {FLT_POSITIVE_INT64, 0, {.value = 0}},
  {FLT_UNIQUE, 0, {.str_8 = "NONE"}},
  {FLT_FUNCTION, -1, {.tfunc = tfunc__std_types___key_order_set}},
  {FLT_FUNCTION, 2, {.tfunc = tfunc__empty_node___retrieve}},
  {FLT_FUNCTION, 2, {.tfunc = tfunc__binary_node___retrieve}},
  {FLT_FUNCTION, 2, {.tfunc = tfunc__empty_node___insert}},
  {FLT_FUNCTION, 2, {.tfunc = tfunc__binary_node___insert}},
  {FLT_FUNCTION, 1, {.tfunc = tfunc__fetch_first}},
  {FLT_FUNCTION, 2, {.tfunc = tfunc__empty_node___delete}},
  {FLT_FUNCTION, 2, {.tfunc = tfunc__binary_node___delete}},
  {FLT_FUNCTION, 1, {.tfunc = tfunc__binary_node___first_item_of}},
  {FLT_FUNCTION, 1, {.tfunc = tfunc__std_types___key_order_set___first_item_of}},
  {FLT_FUNCTION, 1, {.tfunc = tfunc__binary_node___last_item_of}},
  {FLT_FUNCTION, 1, {.tfunc = tfunc__std_types___key_order_set___last_item_of}},
  {FLT_FUNCTION, 1, {.tfunc = tfunc__finish___for_each_1_call}},
  {FLT_FUNCTION, 1, {.tfunc = tfunc__empty_node___for_each_1_left}},
  {FLT_FUNCTION, 1, {.tfunc = tfunc__binary_node___for_each_1_left}},
  {FLT_FUNCTION, 1, {.tfunc = tfunc__binary_node___for_each_1_call}},
  {FLT_FUNCTION, 1, {.tfunc = tfunc__binary_node___for_each_1_right}},
  {FLT_FUNCTION, -1, {.tfunc = tfunc__std_types___key_order_set___for_each}},
  {FLT_FUNCTION, -1, {.tfunc = tfunc__std_types___key_order_set___reduce}},
  {FLT_FUNCTION, -1, {.tfunc = tfunc__std_types___key_order_set___map_reduce}},
  {FLT_FUNCTION, -1, {.tfunc = tfunc__std___key_order_set}},
  {FLT_STRING_8, 13, {.str_8 = "key_order_set"}},
  {FLT_TUPLE, 3, {.arguments = arguments__tuple__undefined___undefined___undefined}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__key_order_set__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__key_order_set__2}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__key_order_set__2__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__key_order_set__2__2}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__key_order_set__2__1__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__key_order_set__2__1__2}},
  {FLT_POSITIVE_INT64, 0, {.value = 1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__key_order_set__2__2__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__key_order_set__2__2__2}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__binary_node__retrieve__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__binary_node__retrieve__2}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__binary_node__retrieve__2__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__binary_node__retrieve__2__2}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__binary_node__insert__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__binary_node__insert__2}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__binary_node__insert__2__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__binary_node__insert__2__2}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__binary_node__insert__2__1__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__binary_node__insert__2__1__2}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__binary_node__insert__2__2__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__binary_node__insert__2__2__2}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__fetch_first__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__fetch_first__2}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__binary_node__delete__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__binary_node__delete__2}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__binary_node__delete__1__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__binary_node__delete__1__2}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__binary_node__delete__1__2__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__binary_node__delete__1__2__2}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__binary_node__delete__2__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__binary_node__delete__2__2}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__binary_node__delete__2__1__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__binary_node__delete__2__1__2}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__binary_node__delete__2__2__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__binary_node__delete__2__2__2}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__binary_node__first_item_of__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__binary_node__first_item_of__2}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__binary_node__last_item_of__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__binary_node__last_item_of__2}},
  {FLT_NEGATIVE_INT64, 0, {.value = 1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__key_order_set___for_each__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__key_order_set___for_each__2}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__key_order_set___reduce__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__key_order_set___reduce__2}},
  {FLT_FUNCTION, 1, {.tfunc = tfunc__std_types__key_order_set__reduce__2__reduce}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__key_order_set__reduce__2__reduce__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__key_order_set__reduce__2__reduce__2}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__key_order_set__reduce__2__reduce__3}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__key_order_set__reduce__2__reduce__4}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__key_order_set___map_reduce__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__key_order_set___map_reduce__2}},
  {FLT_FUNCTION, 1, {.tfunc = tfunc__std_types__key_order_set__map_reduce__2__map_reduce}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__key_order_set__map_reduce__2__map_reduce__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__key_order_set__map_reduce__2__map_reduce__2}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__key_order_set__map_reduce__2__map_reduce__3}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__key_order_set__map_reduce__2__map_reduce__4}},
  {FLT_FUNCTION, 1, {.tfunc = tfunc__std__key_order_set__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std__key_order_set__2}}
};

static ATTRIBUTE_DEFINITION std_types___object__attributes[] = {
  {-var_no__is_a_key_order_set, -var_no__false},
  {-var_no__is_an_empty_node, -var_no__false}
};

static ATTRIBUTE_DEFINITION std_types___key_order_set__attributes[] = {
  {-var_no__contents_of, -var_no__empty_node},
  {-var_no__empty_collection_of, -var_no__empty_key_order_set},
  {-var_no__is_a_key_order_set, -var_no__true},
  {-var_no__length_of, number__0},
  {-var_no__serialization_tag_of, string__300906497},
  {TYPE_FUNCTION, func__std_types___key_order_set},
  {var_no__first_item_of, func__std_types___key_order_set___first_item_of},
  {var_no__for_each, func__std_types___key_order_set___for_each},
  {var_no__last_item_of, func__std_types___key_order_set___last_item_of},
  {var_no__map_reduce, func__std_types___key_order_set___map_reduce},
  {var_no__reduce, func__std_types___key_order_set___reduce}
};

static ATTRIBUTE_DEFINITION empty_node__attributes[] = {
  {-var_no__is_an_empty_node, -var_no__true},
  {var_no__delete, func__empty_node___delete},
  {var_no__for_each_1_left, func__empty_node___for_each_1_left},
  {var_no__insert, func__empty_node___insert},
  {var_no__retrieve, func__empty_node___retrieve}
};

static ATTRIBUTE_DEFINITION binary_node__attributes[] = {
  {var_no__delete, func__binary_node___delete},
  {var_no__first_item_of, func__binary_node___first_item_of},
  {var_no__for_each_1_call, func__binary_node___for_each_1_call},
  {var_no__for_each_1_left, func__binary_node___for_each_1_left},
  {var_no__for_each_1_right, func__binary_node___for_each_1_right},
  {var_no__insert, func__binary_node___insert},
  {var_no__last_item_of, func__binary_node___last_item_of},
  {var_no__retrieve, func__binary_node___retrieve}
};

static ATTRIBUTE_DEFINITION finish__attributes[] = {
  {var_no__for_each_1_call, func__finish___for_each_1_call}
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
    "is_a_key_order_set\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN, 0, 2,
    "object\000std_types", std_types___object__attributes,
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "is_a_key_order_set\000", NULL,
  },
  {
    FOT_DERIVED, 0, 11,
    "key_order_set\000std_types", std_types___key_order_set__attributes,
    {"set\000std_types"},
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "length_of\000", NULL,
  },
  {
    FOT_DERIVED, 0, 0,
    "empty_key_order_set\000std", NULL,
    {"key_order_set\000std_types"},
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "is_an_empty_node\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_DERIVED, 0, 5,
    "empty_node\000", empty_node__attributes,
    {"object\000std_types"},
  },
  {
    FOT_INITIALIZED, 0, 8,
    "binary_node\000", binary_node__attributes,
    {.const_idx = tuple__undefined___undefined___undefined}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "NONE\000", NULL,
    {.const_idx = unique__NONE}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "fetch_first\000", NULL,
    {.const_idx = func__fetch_first}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "first_item_of\000", NULL,
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "last_item_of\000", NULL,
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "for_each_1_left\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "for_each_1_call\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "for_each_1_right\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_DERIVED, 0, 1,
    "finish\000", finish__attributes,
    {"object\000std_types"},
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "for_each\000", NULL,
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "reduce\000", NULL,
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "map_reduce\000", NULL,
  },
  {
    FOT_INITIALIZED, 0, 0,
    "key_order_set\000std", NULL,
    {.const_idx = func__std___key_order_set}
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
    "empty_key_order_set\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "std_types__key_order_set__myself\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "std_types__key_order_set__key\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "std_types__key_order_set__value\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "std_types__key_order_set__contents\000", NULL,
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
    "binary_node__retrieve__key\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "binary_node__retrieve__my_key\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "binary_node__retrieve__my_left\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "binary_node__retrieve__my_right\000", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "less\000std", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "new\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "binary_node__insert__self\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "binary_node__insert__key\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "binary_node__insert__my_key\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "binary_node__insert__my_left\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "binary_node__insert__my_right\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "fetch_first__self\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "fetch_first__my_key\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "fetch_first__my_left\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "fetch_first__my_right\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "binary_node__delete__self\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "binary_node__delete__key\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "binary_node__delete__my_key\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "binary_node__delete__my_left\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "binary_node__delete__my_right\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "binary_node__first_item_of__my_key\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "binary_node__first_item_of__my_left\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "binary_node__last_item_of__my_key\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "binary_node__last_item_of__my_right\000", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "break\000", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "todo\000basic_loops", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "push\000", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "body\000basic_loops", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "std_types__key_order_set___for_each__finally\000", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "next\000", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "finally\000basic_loops", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "list\000", NULL,
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "saved_context_of\000basic_loops", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "pop\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "std_types__key_order_set___reduce__self\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "std_types__key_order_set___reduce__reduce_function\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "std_types__key_order_set___reduce__unit\000", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_empty\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "std_types__key_order_set__reduce__2__reduce__key\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "std_types__key_order_set__reduce__2__reduce__left\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "std_types__key_order_set__reduce__2__reduce__right\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "std_types__key_order_set___map_reduce__self\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "std_types__key_order_set___map_reduce__map_function\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "std_types__key_order_set___map_reduce__reduce_function\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "std_types__key_order_set___map_reduce__unit\000", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "append\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "std_types__key_order_set__map_reduce__2__map_reduce__key\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "std_types__key_order_set__map_reduce__2__map_reduce__left\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "std_types__key_order_set__map_reduce__2__map_reduce__right\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "std__key_order_set__result\000", NULL,
  }
};

FUNKY_MODULE module__basic__types__collections__sets__key_order_set = {
  "_basic__types__collections__sets__key_order_set",
  "/home/leachim/source/cmds/funky/master/basic/types/collections/sets/key_order_set.fky",
  0, 0,
  0, 1,
  83, 91,
  NULL,
  NULL, used_namespaces,
  constants_table, variables_table
};
