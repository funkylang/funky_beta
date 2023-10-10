#include <stddef.h>
#include <stdint.h>

#include "runtime/common.h"
#include "runtime/builtins.h"
#include "runtime/fko.h"
#include "runtime/memory.h"

enum {
  func__std_types___generic_array___for_each = 1,
  func__std_types___generic_array___map_reduce,
  string__1566091301,
  string__2695658325,
  string__139942273,
  string__842828747,
  string__3563390458,
  string__1377693188,
  string__117572121,
  string__1569873457,
  string__2426270218,
  string__2468021783,
  string__1223907880,
  func__std_types___generic_array___serialize,
  number__1,
  func__std_types__generic_array___for_each__iterate_1,
  func__std_types__generic_array___for_each__iterate_2,
  func__std_types__generic_array___for_each__1,
  number__2,
  func__std_types__generic_array___for_each__2,
  func__std_types__generic_array___for_each__3,
  func__std_types__generic_array__for_each__iterate_1__1,
  func__std_types__generic_array__for_each__iterate_2__1,
  func__std_types__generic_array__for_each__2__1,
  func__std_types__generic_array__for_each__3__1,
  func__std_types__generic_array___map_reduce__1,
  func__std_types__generic_array___map_reduce__2,
  func__std_types__generic_array__map_reduce__1__1,
  func__std_types__generic_array__map_reduce__1__1__1,
  func__std_types__generic_array__map_reduce__1__1__2,
  func__std_types__generic_array__map_reduce__2__1,
  func__std_types__generic_array__map_reduce__2__1__1,
  func__std_types__generic_array__map_reduce__2__1__2,
  func__std_types__generic_array___serialize__1,
  func__std_types__generic_array___serialize__2,
  func__std_types__generic_array___serialize__3,
  string__2577886713,
  string__2802191602,
  string__1142103799,
  func__std_types__generic_array___serialize__4
};

enum {
  var_no__std___is_an_array = FIRST_VAR+0,
  var_no__std_types___object,
  var_no__is_an_array,
  var_no__std_types___generic_array,
  var_no__for_each,
  var_no__map_reduce,
  var_no__std_types___array,
  var_no__serialization_tag_of,
  var_no__std_types___boolean_array,
  var_no__std_types___character_array,
  var_no__std_types___int8_array,
  var_no__std_types___uint8_array,
  var_no__std_types___int16_array,
  var_no__std_types___uint16_array,
  var_no__std_types___int32_array,
  var_no__std_types___uint32_array,
  var_no__std_types___int64_array,
  var_no__std_types___uint64_array,
  var_no__serialize,
  var_no__false,
  var_no__true,
  var_no__std_types__generic_array___for_each__self = 6,
  var_no__std_types__generic_array___for_each__body = 7,
  var_no__std_types__generic_array___for_each__finally = FIRST_VAR+21,
  var_no__std_types__generic_array___for_each__saved_context = 8,
  var_no__std_types__generic_array___for_each__iterate_1 = -func__std_types__generic_array___for_each__iterate_1,
  var_no__std_types__generic_array___for_each__iterate_2 = -func__std_types__generic_array___for_each__iterate_2,
  var_no__next = FIRST_VAR+22,
  var_no__tuple,
  var_no__break,
  var_no__basic_loops___from,
  var_no__basic_loops___to,
  var_no__basic_loops___self,
  var_no__basic_loops___body,
  var_no__basic_loops___finally,
  var_no__length_of,
  var_no__basic_loops___saved_context_of,
  var_no__parameter_count_of,
  var_no__std___equal,
  var_no__if,
  var_no__std___less,
  var_no__std___not,
  var_no__std_types__generic_array__for_each__1__myself = 5,
  var_no__std___plus = FIRST_VAR+37,
  var_no__std_types__generic_array___map_reduce__self,
  var_no__std_types__generic_array___map_reduce__map_function,
  var_no__std_types__generic_array___map_reduce__reduce_function,
  var_no__std_types__generic_array___map_reduce__unit = 6,
  var_no__std_types__generic_array___map_reduce__map_reduce = FIRST_VAR+41,
  var_no__append,
  var_no__undefined,
  var_no__std_types__generic_array__map_reduce__1__1__s,
  var_no__std_types__generic_array__map_reduce__1__1__e,
  var_no__std_types__generic_array__map_reduce__1__1__1__m = 7,
  var_no__std___shift_right = FIRST_VAR+46,
  var_no__std_types__generic_array__map_reduce__2__1__s,
  var_no__std_types__generic_array__map_reduce__2__1__e,
  var_no__std_types__generic_array__map_reduce__2__1__1__m = 7,
  var_no__std_types__generic_array___serialize__self = 6,
  var_no__std_types__generic_array___serialize__indent = FIRST_VAR+49,
  var_no__std_types__generic_array___serialize__new_indent,
  var_no__std_types__generic_array___serialize__contents = 7,
  var_no__std_types__generic_array___serialize__header = FIRST_VAR+51,
  var_no__is_defined,
  var_no__std___string,
  var_no__update_if,
  var_no__std_types__generic_array__serialize__3__value = 4,
  var_no__tabs_and_spaces = FIRST_VAR+55
};

static TAB_NUM tfunc__std_types__generic_array__for_each__iterate_1__1[] = {
  1, // locals
  0, // no parameters
  // 81: ... basic_loops::self(basic_loops::from)
  var_no__basic_loops___self, 1, var_no__basic_loops___from, 1, 4,
  // 81: basic_loops::body basic_loops::self(basic_loops::from)
  // 82:   # supply only the value of each item
  var_no__basic_loops___body, 1, 4, -1
};

static TAB_NUM tfunc__std_types__generic_array___for_each__iterate_1[] = {
  2, // locals
  0, // no parameters
  // 79: basic_loops::from <= basic_loops::to
  var_no__std___less, 2, var_no__basic_loops___to, var_no__basic_loops___from, 1, 5,
  // 79: basic_loops::from <= basic_loops::to
  var_no__std___not, 1, 5, 1, 4,
  // 78: if
  // 79:   basic_loops::from <= basic_loops::to # another item available?
  // 80:   :
  // 81:     basic_loops::body basic_loops::self(basic_loops::from)
  // 82:       # supply only the value of each item
  // 83:   break
  var_no__if, 3, 4, -func__std_types__generic_array__for_each__iterate_1__1, var_no__break, -1
};

static TAB_NUM tfunc__std_types__generic_array__for_each__iterate_2__1[] = {
  1, // locals
  0, // no parameters
  // 89: ... basic_loops::self(basic_loops::from)
  var_no__basic_loops___self, 1, var_no__basic_loops___from, 1, 4,
  // 89: basic_loops::body basic_loops::from basic_loops::self(basic_loops::from)
  // 90:   # supply index *and* value of each item
  var_no__basic_loops___body, 2, var_no__basic_loops___from, 4, -1
};

static TAB_NUM tfunc__std_types__generic_array___for_each__iterate_2[] = {
  2, // locals
  0, // no parameters
  // 87: basic_loops::from <= basic_loops::to
  var_no__std___less, 2, var_no__basic_loops___to, var_no__basic_loops___from, 1, 5,
  // 87: basic_loops::from <= basic_loops::to
  var_no__std___not, 1, 5, 1, 4,
  // 86: if
  // 87:   basic_loops::from <= basic_loops::to # another item available?
  // 88:   :
  // 89:     basic_loops::body basic_loops::from basic_loops::self(basic_loops::from)
  // 90:       # supply index *and* value of each item
  // 91:   break
  var_no__if, 3, 4, -func__std_types__generic_array__for_each__iterate_2__1, var_no__break, -1
};

static TAB_NUM tfunc__std_types__generic_array___for_each__1[] = {
  2, // locals
  -1, // parameters:
  MYSELF_PARAMETER, var_no__std_types__generic_array__for_each__1__myself,
  // 94: !finally basic_loops::finally
  LET, 1, var_no__basic_loops___finally, 1, var_no__std_types__generic_array___for_each__finally,
  // 95: basic_loops::saved_context_of(myself)
  var_no__basic_loops___saved_context_of, 1, var_no__std_types__generic_array__for_each__1__myself, 1, 4,
  // 95: basic_loops::saved_context_of(myself)
  // 96:   !next !break
  // 97:   !basic_loops::from !basic_loops::to !basic_loops::self
  // 98:   !basic_loops::body !basic_loops::finally
  4, 0, 7, var_no__next, var_no__break, var_no__basic_loops___from, var_no__basic_loops___to, var_no__basic_loops___self, var_no__basic_loops___body, var_no__basic_loops___finally,
  // 99: finally
  var_no__std_types__generic_array___for_each__finally, 0, -1
};

static TAB_NUM tfunc__std_types__generic_array__for_each__2__1[] = {
  0, // locals
  0, // no parameters
  // 106: !basic_loops::from basic_loops::from+1 # increase the array index
  var_no__std___plus, 2, var_no__basic_loops___from, -number__1, 1, var_no__basic_loops___from,
  // 107: iterate_2 # start the next iteration
  var_no__std_types__generic_array___for_each__iterate_2, 0, -1
};

static TAB_NUM tfunc__std_types__generic_array___for_each__2[] = {
  0, // locals
  0, // no parameters
  // 105: !next:
  // 106:   !basic_loops::from basic_loops::from+1 # increase the array index
  // 107:   iterate_2 # start the next iteration
  LET, 1, -func__std_types__generic_array__for_each__2__1, 1, var_no__next,
  // 108: iterate_2 # start the first iteration
  var_no__std_types__generic_array___for_each__iterate_2, 0, -1
};

static TAB_NUM tfunc__std_types__generic_array__for_each__3__1[] = {
  0, // locals
  0, // no parameters
  // 111: !basic_loops::from basic_loops::from+1 # increase the array index
  var_no__std___plus, 2, var_no__basic_loops___from, -number__1, 1, var_no__basic_loops___from,
  // 112: iterate_1 # start the next iteration
  var_no__std_types__generic_array___for_each__iterate_1, 0, -1
};

static TAB_NUM tfunc__std_types__generic_array___for_each__3[] = {
  0, // locals
  0, // no parameters
  // 110: !next:
  // 111:   !basic_loops::from basic_loops::from+1 # increase the array index
  // 112:   iterate_1 # start the next iteration
  LET, 1, -func__std_types__generic_array__for_each__3__1, 1, var_no__next,
  // 113: iterate_1 # start the first iteration
  var_no__std_types__generic_array___for_each__iterate_1, 0, -1
};

static TAB_NUM tfunc__std_types___generic_array___for_each[] = {
  5, // locals
  -3, // parameters:
  MANDATORY_PARAMETER, var_no__std_types__generic_array___for_each__self,
  MANDATORY_PARAMETER, var_no__std_types__generic_array___for_each__body,
  var_no__next, var_no__std_types__generic_array___for_each__finally,
  // 61: $saved_context
  // 62:   tuple
  // 63:     next
  // 64:     break
  // 65:     basic_loops::from
  // 66:     basic_loops::to
  // 67:     basic_loops::self
  // 68:     basic_loops::body
  // 69:     basic_loops::finally
  var_no__tuple, 7, var_no__next, var_no__break, var_no__basic_loops___from, var_no__basic_loops___to, var_no__basic_loops___self, var_no__basic_loops___body, var_no__basic_loops___finally, 1, var_no__std_types__generic_array___for_each__saved_context,
  // 71: !basic_loops::from 1 # the first ...
  LET, 1, -number__1, 1, var_no__basic_loops___from,
  // 72: !basic_loops::to length_of(self) # ... and last index of the array
  var_no__length_of, 1, var_no__std_types__generic_array___for_each__self, 1, var_no__basic_loops___to,
  // 73: !basic_loops::self self
  LET, 1, var_no__std_types__generic_array___for_each__self, 1, var_no__basic_loops___self,
  // 74: !basic_loops::body body
  LET, 1, var_no__std_types__generic_array___for_each__body, 1, var_no__basic_loops___body,
  // 75: !basic_loops::finally finally
  LET, 1, var_no__std_types__generic_array___for_each__finally, 1, var_no__basic_loops___finally,
  // 93: !break: (myself^)
  // 94:   !finally basic_loops::finally
  // 95:   basic_loops::saved_context_of(myself)
  // 96:     !next !break
  // 97:     !basic_loops::from !basic_loops::to !basic_loops::self
  // 98:     !basic_loops::body !basic_loops::finally
  // 99:   finally
  LET, 1, -func__std_types__generic_array___for_each__1, 1, var_no__break,
  // 101: !break.basic_loops::saved_context_of
  LET, -1, var_no__break, var_no__basic_loops___saved_context_of, var_no__std_types__generic_array___for_each__saved_context, var_no__break,
  // 104: parameter_count_of(body)
  var_no__parameter_count_of, 1, var_no__std_types__generic_array___for_each__body, 1, 5,
  // 104: parameter_count_of(body) == 2
  var_no__std___equal, 2, 5, -number__2, 1, 4,
  // 103: if
  // 104:   parameter_count_of(body) == 2:
  // 105:     !next:
  // 106:       !basic_loops::from basic_loops::from+1 # increase the array index
  // 107:       iterate_2 # start the next iteration
  // 108:     iterate_2 # start the first iteration
  // 109:   :
  // 110:     !next:
  // 111:       !basic_loops::from basic_loops::from+1 # increase the array index
  // 112:       iterate_1 # start the next iteration
  // ...
  var_no__if, 3, 4, -func__std_types__generic_array___for_each__2, -func__std_types__generic_array___for_each__3, -1
};

static TAB_NUM tfunc__std_types__generic_array__map_reduce__1__1__1[] = {
  4, // locals
  0, // no parameters
  // 137: ... s+e
  var_no__std___plus, 2, var_no__std_types__generic_array__map_reduce__1__1__s, var_no__std_types__generic_array__map_reduce__1__1__e, 1, 4,
  // 137: $m (s+e) >> 1
  var_no__std___shift_right, 2, 4, -number__1, 1, var_no__std_types__generic_array__map_reduce__1__1__1__m,
  // 139: map_reduce(s m)
  var_no__std_types__generic_array___map_reduce__map_reduce, 2, var_no__std_types__generic_array__map_reduce__1__1__s, var_no__std_types__generic_array__map_reduce__1__1__1__m, 1, 4,
  // 140: ... m+1
  var_no__std___plus, 2, var_no__std_types__generic_array__map_reduce__1__1__1__m, -number__1, 1, 6,
  // 140: map_reduce(m+1 e)
  var_no__std_types__generic_array___map_reduce__map_reduce, 2, 6, var_no__std_types__generic_array__map_reduce__1__1__e, 1, 5,
  // 138: reduce_function
  // 139:   map_reduce(s m)
  // 140:   map_reduce(m+1 e)
  var_no__std_types__generic_array___map_reduce__reduce_function, 2, 4, 5, -1
};

static TAB_NUM tfunc__std_types__generic_array__map_reduce__1__1__2[] = {
  2, // locals
  0, // no parameters
  // 141: ... self(s)
  var_no__std_types__generic_array___map_reduce__self, 1, var_no__std_types__generic_array__map_reduce__1__1__s, 1, 5,
  // 141: ... map_function(s self(s))
  var_no__std_types__generic_array___map_reduce__map_function, 2, var_no__std_types__generic_array__map_reduce__1__1__s, 5, 1, 4,
  // 141: -> map_function(s self(s))
  LET, 1, 4, -1
};

static TAB_NUM tfunc__std_types__generic_array__map_reduce__1__1[] = {
  1, // locals
  2, // parameters:
  var_no__std_types__generic_array__map_reduce__1__1__s,
  var_no__std_types__generic_array__map_reduce__1__1__e,
  // 136: s < e
  var_no__std___less, 2, var_no__std_types__generic_array__map_reduce__1__1__s, var_no__std_types__generic_array__map_reduce__1__1__e, 1, 4,
  // 135: if
  // 136:   s < e:
  // 137:     $m (s+e) >> 1
  // 138:     reduce_function
  // 139:       map_reduce(s m)
  // 140:       map_reduce(m+1 e)
  // 141:   -> map_function(s self(s))
  var_no__if, 3, 4, -func__std_types__generic_array__map_reduce__1__1__1, -func__std_types__generic_array__map_reduce__1__1__2, -1
};

static TAB_NUM tfunc__std_types__generic_array___map_reduce__1[] = {
  0, // locals
  0, // no parameters
  // 133: ->
  // 134:   : (s e)
  // 135:     if
  // 136:       s < e:
  // 137:         $m (s+e) >> 1
  // 138:         reduce_function
  // 139:           map_reduce(s m)
  // 140:           map_reduce(m+1 e)
  // 141:       -> map_function(s self(s))
  LET, 1, -func__std_types__generic_array__map_reduce__1__1, -1
};

static TAB_NUM tfunc__std_types__generic_array__map_reduce__2__1__1[] = {
  4, // locals
  0, // no parameters
  // 146: ... s+e
  var_no__std___plus, 2, var_no__std_types__generic_array__map_reduce__2__1__s, var_no__std_types__generic_array__map_reduce__2__1__e, 1, 4,
  // 146: $m (s+e) >> 1
  var_no__std___shift_right, 2, 4, -number__1, 1, var_no__std_types__generic_array__map_reduce__2__1__1__m,
  // 148: map_reduce(s m)
  var_no__std_types__generic_array___map_reduce__map_reduce, 2, var_no__std_types__generic_array__map_reduce__2__1__s, var_no__std_types__generic_array__map_reduce__2__1__1__m, 1, 4,
  // 149: ... m+1
  var_no__std___plus, 2, var_no__std_types__generic_array__map_reduce__2__1__1__m, -number__1, 1, 6,
  // 149: map_reduce(m+1 e)
  var_no__std_types__generic_array___map_reduce__map_reduce, 2, 6, var_no__std_types__generic_array__map_reduce__2__1__e, 1, 5,
  // 147: reduce_function
  // 148:   map_reduce(s m)
  // 149:   map_reduce(m+1 e)
  var_no__std_types__generic_array___map_reduce__reduce_function, 2, 4, 5, -1
};

static TAB_NUM tfunc__std_types__generic_array__map_reduce__2__1__2[] = {
  2, // locals
  0, // no parameters
  // 150: ... self(s)
  var_no__std_types__generic_array___map_reduce__self, 1, var_no__std_types__generic_array__map_reduce__2__1__s, 1, 5,
  // 150: ... map_function(self(s))
  var_no__std_types__generic_array___map_reduce__map_function, 1, 5, 1, 4,
  // 150: -> map_function(self(s))
  LET, 1, 4, -1
};

static TAB_NUM tfunc__std_types__generic_array__map_reduce__2__1[] = {
  1, // locals
  2, // parameters:
  var_no__std_types__generic_array__map_reduce__2__1__s,
  var_no__std_types__generic_array__map_reduce__2__1__e,
  // 145: s < e
  var_no__std___less, 2, var_no__std_types__generic_array__map_reduce__2__1__s, var_no__std_types__generic_array__map_reduce__2__1__e, 1, 4,
  // 144: if
  // 145:   s < e:
  // 146:     $m (s+e) >> 1
  // 147:     reduce_function
  // 148:       map_reduce(s m)
  // 149:       map_reduce(m+1 e)
  // 150:   -> map_function(self(s))
  var_no__if, 3, 4, -func__std_types__generic_array__map_reduce__2__1__1, -func__std_types__generic_array__map_reduce__2__1__2, -1
};

static TAB_NUM tfunc__std_types__generic_array___map_reduce__2[] = {
  0, // locals
  0, // no parameters
  // 142: ->
  // 143:   : (s e)
  // 144:     if
  // 145:       s < e:
  // 146:         $m (s+e) >> 1
  // 147:         reduce_function
  // 148:           map_reduce(s m)
  // 149:           map_reduce(m+1 e)
  // 150:       -> map_function(self(s))
  LET, 1, -func__std_types__generic_array__map_reduce__2__1, -1
};

static TAB_NUM tfunc__std_types___generic_array___map_reduce[] = {
  3, // locals
  -4, // parameters:
  MANDATORY_PARAMETER, var_no__std_types__generic_array___map_reduce__self,
  MANDATORY_PARAMETER, var_no__std_types__generic_array___map_reduce__map_function,
  var_no__append, var_no__std_types__generic_array___map_reduce__reduce_function,
  var_no__undefined, var_no__std_types__generic_array___map_reduce__unit,
  // 132: parameter_count_of(map_function)
  var_no__parameter_count_of, 1, var_no__std_types__generic_array___map_reduce__map_function, 1, 5,
  // 132: parameter_count_of(map_function) == 2
  var_no__std___equal, 2, 5, -number__2, 1, 4,
  // 130: $map_reduce
  // 131:   if
  // 132:     parameter_count_of(map_function) == 2
  // 133:     ->
  // 134:       : (s e)
  // 135:         if
  // 136:           s < e:
  // 137:             $m (s+e) >> 1
  // 138:             reduce_function
  // 139:               map_reduce(s m)
  // ...
  var_no__if, 3, 4, -func__std_types__generic_array___map_reduce__1, -func__std_types__generic_array___map_reduce__2, 1, var_no__std_types__generic_array___map_reduce__map_reduce,
  // 152: ... length_of(self)
  var_no__length_of, 1, var_no__std_types__generic_array___map_reduce__self, 1, 4,
  // 152: map_reduce 1 length_of(self)
  var_no__std_types__generic_array___map_reduce__map_reduce, 2, -number__1, 4, -1
};

static TAB_NUM tfunc__std_types__generic_array___serialize__1[] = {
  1, // locals
  0, // no parameters
  // 177: ... indent+2
  var_no__std___plus, 2, var_no__std_types__generic_array___serialize__indent, -number__2, 1, 4,
  // 177: -> indent+2
  LET, 1, 4, -1
};

static TAB_NUM tfunc__std_types__generic_array___serialize__2[] = {
  0, // locals
  0, // no parameters
  // 178: -> undefined
  LET, 1, var_no__undefined, -1
};

static TAB_NUM tfunc__std_types__generic_array___serialize__3[] = {
  1, // locals
  1, // parameters:
  var_no__std_types__generic_array__serialize__3__value,
  // 180: ... serialize value new_indent
  var_no__serialize, 2, var_no__std_types__generic_array__serialize__3__value, var_no__std_types__generic_array___serialize__new_indent, -1
};

static TAB_NUM tfunc__std_types__generic_array___serialize__4[] = {
  2, // locals
  0, // no parameters
  // 186: ... tabs_and_spaces(indent)
  var_no__tabs_and_spaces, 1, var_no__std_types__generic_array___serialize__indent, 1, 5,
  // 186: ... append(tabs_and_spaces(indent) header)
  var_no__append, 2, 5, var_no__std_types__generic_array___serialize__header, 1, 4,
  // 186: ... -> append(tabs_and_spaces(indent) header)
  LET, 1, 4, -1
};

static TAB_NUM tfunc__std_types___generic_array___serialize[] = {
  4, // locals
  -2, // parameters:
  MANDATORY_PARAMETER, var_no__std_types__generic_array___serialize__self,
  var_no__undefined, var_no__std_types__generic_array___serialize__indent,
  // 176: indent.is_defined
  var_no__is_defined, 1, var_no__std_types__generic_array___serialize__indent, 1, 4,
  // 174: $new_indent
  // 175:   if
  // 176:     indent.is_defined
  // 177:     -> indent+2
  // 178:     -> undefined
  var_no__if, 3, 4, -func__std_types__generic_array___serialize__1, -func__std_types__generic_array___serialize__2, 1, var_no__std_types__generic_array___serialize__new_indent,
  // 179: map_reduce $contents
  // 180:   self: (value) serialize value new_indent
  // 181:   append
  // 182:   ""
  var_no__map_reduce, 4, var_no__std_types__generic_array___serialize__self, -func__std_types__generic_array___serialize__3, var_no__append, -string__2577886713, 1, var_no__std_types__generic_array___serialize__contents,
  // 185: ... serialization_tag_of(self)
  var_no__serialization_tag_of, 1, var_no__std_types__generic_array___serialize__self, 1, 4,
  // 185: ... length_of(self)
  var_no__length_of, 1, var_no__std_types__generic_array___serialize__self, 1, 5,
  // 183: $header
  // 184:   "
  // 185:     @(serialization_tag_of(self)) @(length_of(self))
  var_no__std___string, 4, 4, -string__2802191602, 5, -string__1142103799, 1, var_no__std_types__generic_array___serialize__header,
  // 186: ... indent.is_defined
  var_no__is_defined, 1, var_no__std_types__generic_array___serialize__indent, 1, 4,
  // 186: update_if indent.is_defined &header -> append(tabs_and_spaces(indent) header)
  var_no__update_if, 3, 4, var_no__std_types__generic_array___serialize__header, -func__std_types__generic_array___serialize__4, 1, var_no__std_types__generic_array___serialize__header,
  // 187: append header contents
  var_no__append, 2, var_no__std_types__generic_array___serialize__header, var_no__std_types__generic_array___serialize__contents, -1
};


static FUNKY_NAMESPACE used_namespaces[] = {
  {"std", 1, 0}
};

static FUNKY_CONSTANT constants_table[] = {
  {FLT_FUNCTION, -1, {.tfunc = tfunc__std_types___generic_array___for_each}},
  {FLT_FUNCTION, -1, {.tfunc = tfunc__std_types___generic_array___map_reduce}},
  {FLT_STRING_8, 5, {.str_8 = "array"}},
  {FLT_STRING_8, 13, {.str_8 = "boolean_array"}},
  {FLT_STRING_8, 15, {.str_8 = "character_array"}},
  {FLT_STRING_8, 10, {.str_8 = "int8_array"}},
  {FLT_STRING_8, 11, {.str_8 = "uint8_array"}},
  {FLT_STRING_8, 11, {.str_8 = "int16_array"}},
  {FLT_STRING_8, 12, {.str_8 = "uint16_array"}},
  {FLT_STRING_8, 11, {.str_8 = "int32_array"}},
  {FLT_STRING_8, 12, {.str_8 = "uint32_array"}},
  {FLT_STRING_8, 11, {.str_8 = "int64_array"}},
  {FLT_STRING_8, 12, {.str_8 = "uint64_array"}},
  {FLT_FUNCTION, -1, {.tfunc = tfunc__std_types___generic_array___serialize}},
  {FLT_POSITIVE_INT64, 0, {.value = 1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__generic_array___for_each__iterate_1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__generic_array___for_each__iterate_2}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__generic_array___for_each__1}},
  {FLT_POSITIVE_INT64, 0, {.value = 2}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__generic_array___for_each__2}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__generic_array___for_each__3}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__generic_array__for_each__iterate_1__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__generic_array__for_each__iterate_2__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__generic_array__for_each__2__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__generic_array__for_each__3__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__generic_array___map_reduce__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__generic_array___map_reduce__2}},
  {FLT_FUNCTION, 2, {.tfunc = tfunc__std_types__generic_array__map_reduce__1__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__generic_array__map_reduce__1__1__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__generic_array__map_reduce__1__1__2}},
  {FLT_FUNCTION, 2, {.tfunc = tfunc__std_types__generic_array__map_reduce__2__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__generic_array__map_reduce__2__1__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__generic_array__map_reduce__2__1__2}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__generic_array___serialize__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__generic_array___serialize__2}},
  {FLT_FUNCTION, 1, {.tfunc = tfunc__std_types__generic_array___serialize__3}},
  {FLT_STRING_8, 0, {.str_8 = ""}},
  {FLT_STRING_8, 1, {.str_8 = " "}},
  {FLT_STRING_8, 1, {.str_8 = "\012"}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__generic_array___serialize__4}}
};

static ATTRIBUTE_DEFINITION std_types___object__attributes[] = {
  {-var_no__is_an_array, -var_no__false}
};

static ATTRIBUTE_DEFINITION std_types___generic_array__attributes[] = {
  {-var_no__is_an_array, -var_no__true},
  {var_no__for_each, func__std_types___generic_array___for_each},
  {var_no__map_reduce, func__std_types___generic_array___map_reduce},
  {var_no__serialize, func__std_types___generic_array___serialize}
};

static ATTRIBUTE_DEFINITION std_types___array__attributes[] = {
  {-var_no__serialization_tag_of, string__1566091301}
};

static ATTRIBUTE_DEFINITION std_types___boolean_array__attributes[] = {
  {-var_no__serialization_tag_of, string__2695658325}
};

static ATTRIBUTE_DEFINITION std_types___character_array__attributes[] = {
  {-var_no__serialization_tag_of, string__139942273}
};

static ATTRIBUTE_DEFINITION std_types___int8_array__attributes[] = {
  {-var_no__serialization_tag_of, string__842828747}
};

static ATTRIBUTE_DEFINITION std_types___uint8_array__attributes[] = {
  {-var_no__serialization_tag_of, string__3563390458}
};

static ATTRIBUTE_DEFINITION std_types___int16_array__attributes[] = {
  {-var_no__serialization_tag_of, string__1377693188}
};

static ATTRIBUTE_DEFINITION std_types___uint16_array__attributes[] = {
  {-var_no__serialization_tag_of, string__117572121}
};

static ATTRIBUTE_DEFINITION std_types___int32_array__attributes[] = {
  {-var_no__serialization_tag_of, string__1569873457}
};

static ATTRIBUTE_DEFINITION std_types___uint32_array__attributes[] = {
  {-var_no__serialization_tag_of, string__2426270218}
};

static ATTRIBUTE_DEFINITION std_types___int64_array__attributes[] = {
  {-var_no__serialization_tag_of, string__2468021783}
};

static ATTRIBUTE_DEFINITION std_types___uint64_array__attributes[] = {
  {-var_no__serialization_tag_of, string__1223907880}
};

static FUNKY_VARIABLE variables_table[] = {
  {
    FOT_POLYMORPHIC, 0, 0,
    "is_an_array\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "object\000std_types", std_types___object__attributes,
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "is_an_array\000", NULL,
  },
  {
    FOT_UNKNOWN, 0, 4,
    "generic_array\000std_types", std_types___generic_array__attributes,
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "for_each\000", NULL,
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "map_reduce\000", NULL,
  },
  {
    FOT_UNKNOWN, 0, 1,
    "array\000std_types", std_types___array__attributes,
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "serialization_tag_of\000", NULL,
  },
  {
    FOT_UNKNOWN, 0, 1,
    "boolean_array\000std_types", std_types___boolean_array__attributes,
  },
  {
    FOT_UNKNOWN, 0, 1,
    "character_array\000std_types", std_types___character_array__attributes,
  },
  {
    FOT_UNKNOWN, 0, 1,
    "int8_array\000std_types", std_types___int8_array__attributes,
  },
  {
    FOT_UNKNOWN, 0, 1,
    "uint8_array\000std_types", std_types___uint8_array__attributes,
  },
  {
    FOT_UNKNOWN, 0, 1,
    "int16_array\000std_types", std_types___int16_array__attributes,
  },
  {
    FOT_UNKNOWN, 0, 1,
    "uint16_array\000std_types", std_types___uint16_array__attributes,
  },
  {
    FOT_UNKNOWN, 0, 1,
    "int32_array\000std_types", std_types___int32_array__attributes,
  },
  {
    FOT_UNKNOWN, 0, 1,
    "uint32_array\000std_types", std_types___uint32_array__attributes,
  },
  {
    FOT_UNKNOWN, 0, 1,
    "int64_array\000std_types", std_types___int64_array__attributes,
  },
  {
    FOT_UNKNOWN, 0, 1,
    "uint64_array\000std_types", std_types___uint64_array__attributes,
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "serialize\000", NULL,
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
    FOT_UNINITIALIZED, 0, 0,
    "std_types__generic_array___for_each__finally\000", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "next\000", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "tuple\000", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "break\000", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "from\000basic_loops", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "to\000basic_loops", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "self\000basic_loops", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "body\000basic_loops", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "finally\000basic_loops", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "length_of\000", NULL,
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "saved_context_of\000basic_loops", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "parameter_count_of\000", NULL,
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
    "less\000std", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not\000std", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000std", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "std_types__generic_array___map_reduce__self\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "std_types__generic_array___map_reduce__map_function\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "std_types__generic_array___map_reduce__reduce_function\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "std_types__generic_array___map_reduce__map_reduce\000", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "append\000", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "undefined\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "std_types__generic_array__map_reduce__1__1__s\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "std_types__generic_array__map_reduce__1__1__e\000", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "shift_right\000std", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "std_types__generic_array__map_reduce__2__1__s\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "std_types__generic_array__map_reduce__2__1__e\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "std_types__generic_array___serialize__indent\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "std_types__generic_array___serialize__new_indent\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "std_types__generic_array___serialize__header\000", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_defined\000", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "string\000std", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "update_if\000", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "tabs_and_spaces\000", NULL,
  }
};

FUNKY_MODULE module__basic__types__collections__arrays__array = {
  "_basic__types__collections__arrays__array",
  "/home/leachim/source/cmds/funky/master/basic/types/collections/arrays/array.fky",
  0, 0,
  0, 1,
  40, 56,
  NULL,
  NULL, used_namespaces,
  constants_table, variables_table
};
