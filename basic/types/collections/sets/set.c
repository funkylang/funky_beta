#include <stddef.h>
#include <stdint.h>

#include "runtime/common.h"
#include "runtime/builtins.h"
#include "runtime/fko.h"
#include "runtime/memory.h"

enum {
  func__std_types___set___merge = 1,
  func__std_types___set___serialize,
  func__std_types___set___deserializer_of,
  func__std_types__set___merge__1,
  func__std_types__set___merge__2,
  func__std_types__set___serialize__1,
  func__std_types__set___serialize__2,
  func__std_types__set___serialize__3,
  string__2577886713,
  string__181749755,
  string__1922308840,
  func__std_types__set___serialize__4,
  number__2,
  func__std_types__set___deserializer_of__1,
  func__std_types__set___deserializer_of__2
};

enum {
  var_no__std___is_a_set = FIRST_VAR+0,
  var_no__std_types___object,
  var_no__is_a_set,
  var_no__std_types___set,
  var_no__merge,
  var_no__serialize,
  var_no__deserializer_of,
  var_no__false,
  var_no__true,
  var_no__std_types___collection,
  var_no__std_types__set___merge__self,
  var_no__std_types__set___merge__other = 4,
  var_no__for_each = FIRST_VAR+11,
  var_no__std_types__set__merge__1__key = 4,
  var_no__next = FIRST_VAR+12,
  var_no__std_types__set___serialize__self = 6,
  var_no__std_types__set___serialize__indent = FIRST_VAR+13,
  var_no__std_types__set___serialize__new_indent,
  var_no__std_types__set___serialize__contents = 7,
  var_no__std_types__set___serialize__header = FIRST_VAR+15,
  var_no__undefined,
  var_no__is_defined,
  var_no__if,
  var_no__map_reduce,
  var_no__append,
  var_no__serialization_tag_of,
  var_no__length_of,
  var_no__std___string,
  var_no__update_if,
  var_no__std___plus,
  var_no__std_types__set__serialize__3__value = 5,
  var_no__tabs_and_spaces = FIRST_VAR+26,
  var_no__std_types__set___deserializer_of__type = 4,
  var_no__std_types__set___deserializer_of__items = 5,
  var_no__std_types__set___deserializer_of__obj = FIRST_VAR+27,
  var_no__empty_collection_of,
  var_no__std_types__set__deserializer_of__1__item = 4
};

static TAB_NUM tfunc__std_types__set___merge__1[] = {
  1, // locals
  1, // parameters:
  var_no__std_types__set__merge__1__key,
  // 51: !self(key)
  var_no__std_types__set___merge__self, 2, var_no__std_types__set__merge__1__key, var_no__true, 1, var_no__std_types__set___merge__self,
  // 52: next
  var_no__next, 0, -1
};

static TAB_NUM tfunc__std_types__set___merge__2[] = {
  0, // locals
  0, // no parameters
  // 53: -> self
  LET, 1, var_no__std_types__set___merge__self, -1
};

static TAB_NUM tfunc__std_types___set___merge[] = {
  1, // locals
  2, // parameters:
  var_no__std_types__set___merge__self,
  var_no__std_types__set___merge__other,
  // 49: for_each other
  // 50:   : (key)
  // 51:     !self(key) true
  // 52:     next
  // 53:   -> self
  var_no__for_each, 3, var_no__std_types__set___merge__other, -func__std_types__set___merge__1, -func__std_types__set___merge__2, -1
};

static TAB_NUM tfunc__std_types__set___serialize__1[] = {
  1, // locals
  0, // no parameters
  // 66: ... indent+2
  var_no__std___plus, 2, var_no__std_types__set___serialize__indent, -number__2, 1, 4,
  // 66: -> indent+2
  LET, 1, 4, -1
};

static TAB_NUM tfunc__std_types__set___serialize__2[] = {
  0, // locals
  0, // no parameters
  // 67: -> undefined
  LET, 1, var_no__undefined, -1
};

static TAB_NUM tfunc__std_types__set___serialize__3[] = {
  2, // locals
  1, // parameters:
  var_no__std_types__set__serialize__3__value,
  // 69: ... serialize(value new_indent)
  var_no__serialize, 2, var_no__std_types__set__serialize__3__value, var_no__std_types__set___serialize__new_indent, 1, 4,
  // 69: ... -> serialize(value new_indent)
  LET, 1, 4, -1
};

static TAB_NUM tfunc__std_types__set___serialize__4[] = {
  2, // locals
  0, // no parameters
  // 75: ... tabs_and_spaces(indent)
  var_no__tabs_and_spaces, 1, var_no__std_types__set___serialize__indent, 1, 5,
  // 75: ... append(tabs_and_spaces(indent) header)
  var_no__append, 2, 5, var_no__std_types__set___serialize__header, 1, 4,
  // 75: ... -> append(tabs_and_spaces(indent) header)
  LET, 1, 4, -1
};

static TAB_NUM tfunc__std_types___set___serialize[] = {
  4, // locals
  -2, // parameters:
  MANDATORY_PARAMETER, var_no__std_types__set___serialize__self,
  var_no__undefined, var_no__std_types__set___serialize__indent,
  // 65: indent.is_defined
  var_no__is_defined, 1, var_no__std_types__set___serialize__indent, 1, 4,
  // 63: $new_indent
  // 64:   if
  // 65:     indent.is_defined
  // 66:     -> indent+2
  // 67:     -> undefined
  var_no__if, 3, 4, -func__std_types__set___serialize__1, -func__std_types__set___serialize__2, 1, var_no__std_types__set___serialize__new_indent,
  // 68: map_reduce $contents
  // 69:   self: (value) -> serialize(value new_indent)
  // 70:   append
  // 71:   ""
  var_no__map_reduce, 4, var_no__std_types__set___serialize__self, -func__std_types__set___serialize__3, var_no__append, -string__2577886713, 1, var_no__std_types__set___serialize__contents,
  // 74: ... serialization_tag_of(self)
  var_no__serialization_tag_of, 1, var_no__std_types__set___serialize__self, 1, 4,
  // 74: ... length_of(self)
  var_no__length_of, 1, var_no__std_types__set___serialize__self, 1, 5,
  // 72: $header
  // 73:   "
  // 74:     @(serialization_tag_of(self)) <@(length_of(self))>
  var_no__std___string, 4, 4, -string__181749755, 5, -string__1922308840, 1, var_no__std_types__set___serialize__header,
  // 75: ... indent.is_defined
  var_no__is_defined, 1, var_no__std_types__set___serialize__indent, 1, 4,
  // 75: update_if indent.is_defined &header -> append(tabs_and_spaces(indent) header)
  var_no__update_if, 3, 4, var_no__std_types__set___serialize__header, -func__std_types__set___serialize__4, 1, var_no__std_types__set___serialize__header,
  // 76: append header contents
  var_no__append, 2, var_no__std_types__set___serialize__header, var_no__std_types__set___serialize__contents, -1
};

static TAB_NUM tfunc__std_types__set___deserializer_of__1[] = {
  1, // locals
  1, // parameters:
  var_no__std_types__set__deserializer_of__1__item,
  // 86: !obj(item)
  var_no__std_types__set___deserializer_of__obj, 2, var_no__std_types__set__deserializer_of__1__item, var_no__true, 1, var_no__std_types__set___deserializer_of__obj,
  // 87: next
  var_no__next, 0, -1
};

static TAB_NUM tfunc__std_types__set___deserializer_of__2[] = {
  0, // locals
  0, // no parameters
  // 88: -> obj
  LET, 1, var_no__std_types__set___deserializer_of__obj, -1
};

static TAB_NUM tfunc__std_types___set___deserializer_of[] = {
  2, // locals
  2, // parameters:
  var_no__std_types__set___deserializer_of__type,
  var_no__std_types__set___deserializer_of__items,
  // 83: $obj empty_collection_of(type)
  var_no__empty_collection_of, 1, var_no__std_types__set___deserializer_of__type, 1, var_no__std_types__set___deserializer_of__obj,
  // 84: for_each items
  // 85:   : (item)
  // 86:     !obj(item) true
  // 87:     next
  // 88:   -> obj
  var_no__for_each, 3, var_no__std_types__set___deserializer_of__items, -func__std_types__set___deserializer_of__1, -func__std_types__set___deserializer_of__2, -1
};


static FUNKY_NAMESPACE used_namespaces[] = {
  {"std", 1, 0}
};

static FUNKY_CONSTANT constants_table[] = {
  {FLT_FUNCTION, 2, {.tfunc = tfunc__std_types___set___merge}},
  {FLT_FUNCTION, -1, {.tfunc = tfunc__std_types___set___serialize}},
  {FLT_FUNCTION, 2, {.tfunc = tfunc__std_types___set___deserializer_of}},
  {FLT_FUNCTION, 1, {.tfunc = tfunc__std_types__set___merge__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__set___merge__2}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__set___serialize__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__set___serialize__2}},
  {FLT_FUNCTION, 1, {.tfunc = tfunc__std_types__set___serialize__3}},
  {FLT_STRING_8, 0, {.str_8 = ""}},
  {FLT_STRING_8, 2, {.str_8 = " <"}},
  {FLT_STRING_8, 2, {.str_8 = ">\012"}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__set___serialize__4}},
  {FLT_POSITIVE_INT64, 0, {.value = 2}},
  {FLT_FUNCTION, 1, {.tfunc = tfunc__std_types__set___deserializer_of__1}},
  {FLT_FUNCTION, 0, {.tfunc = tfunc__std_types__set___deserializer_of__2}}
};

static ATTRIBUTE_DEFINITION std_types___object__attributes[] = {
  {-var_no__is_a_set, -var_no__false}
};

static ATTRIBUTE_DEFINITION std_types___set__attributes[] = {
  {-var_no__deserializer_of, func__std_types___set___deserializer_of},
  {-var_no__is_a_set, -var_no__true},
  {var_no__merge, func__std_types___set___merge},
  {var_no__serialize, func__std_types___set___serialize}
};

static FUNKY_VARIABLE variables_table[] = {
  {
    FOT_POLYMORPHIC, 0, 0,
    "is_a_set\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "object\000std_types", std_types___object__attributes,
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "is_a_set\000", NULL,
  },
  {
    FOT_DERIVED, 0, 4,
    "set\000std_types", std_types___set__attributes,
    {"collection\000std_types"},
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "merge\000", NULL,
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "serialize\000", NULL,
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "deserializer_of\000", NULL,
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
    "collection\000std_types", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "std_types__set___merge__self\000", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "for_each\000", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "next\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "std_types__set___serialize__indent\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "std_types__set___serialize__new_indent\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "std_types__set___serialize__header\000", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "undefined\000", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_defined\000", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if\000", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "map_reduce\000", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "append\000", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "serialization_tag_of\000", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "length_of\000", NULL,
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
    "plus\000std", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "tabs_and_spaces\000", NULL,
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "std_types__set___deserializer_of__obj\000", NULL,
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_collection_of\000", NULL,
  }
};

FUNKY_MODULE module__basic__types__collections__sets__set = {
  "_basic__types__collections__sets__set",
  "/home/leachim/source/cmds/funky/master/basic/types/collections/sets/set.fky",
  0, 0,
  0, 1,
  15, 29,
  NULL,
  NULL, used_namespaces,
  constants_table, variables_table
};
