#include <stddef.h>
#include <stdint.h>

#include "runtime/common.h"
#include "runtime/builtins.h"
#include "runtime/fko.h"
#include "runtime/memory.h"

enum {
  func_std_types__set___merge = -1,
  lambda_1 = -2,
  lambda_2 = -3,
  func_std_types__set___serialize = -4,
  lambda_3 = -5,
  num_2 = -6,
  lambda_4 = -7,
  lambda_self = -8,
  string_1 = -9,
  string_2 = -10,
  string_3 = -11,
  lambda_5 = -12,
  func_std_types__set___deserializer_of = -13,
  lambda_6 = -14,
  lambda_7 = -15
};

enum {
  var__START = FIRST_VAR-1,
  var_std__is_a_set, // attribute
  var_std__assign, // extern
  var_std_types__object, // extern
  var_is_a_set, // extern polymorphic
  var_false, // extern
  var_std_types__set, // derived
  var_true, // extern
  var_std_types__collection, // extern
  var_merge, // extern polymorphic
  var_46_0_self, // dynamic
  var_next, // extern
  var_for_each, // extern
  var_serialize, // extern polymorphic
  var_61_0_indent, // dynamic
  var_undefined, // extern
  var_is_defined, // extern
  var_std__plus, // extern
  var_63_1_new_indent, // dynamic
  var_if, // extern
  var_append, // extern
  var_map_reduce, // extern
  var_serialization_tag_of, // extern
  var_length_of, // extern
  var_72_1_header, // dynamic
  var_std__string, // extern
  var_tabs_and_spaces, // extern
  var_update_if, // extern
  var_deserializer_of, // extern polymorphic
  var_83_1_obj, // dynamic
  var_empty_collection_of, // extern
  var__END
};


static TAB_NUM t_func_std_types__set___merge[] = {
  1, // locals
  2, // parameters
  var_46_0_self,
  LOCAL(1), // 47_0_other
  // for_each other
  var_for_each, 3, LOCAL(1), lambda_1, lambda_2, TAIL_CALL,
  POS(49, 3)
};

static TAB_NUM t_lambda_1[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 50_3_key
  // self(key) true
  var_46_0_self, 2, LOCAL(1), var_true, 1, var_46_0_self,
  // next
  var_next, 0, TAIL_CALL,
  POS(51, 8),
  POS(52, 7)
};

static TAB_NUM t_lambda_2[] = {
  0, // locals
  0, // parameters
  //  self
  LET, 1, var_46_0_self, TAIL_CALL,
  POS(53, 7)
};

static TAB_NUM t_func_std_types__set___serialize[] = {
  4, // locals
  -2, // parameters
  MANDATORY_PARAMETER, LOCAL(3), // 60_0_self
  var_undefined, var_61_0_indent,
  // is_defined
  var_is_defined, 1, var_61_0_indent, 1, LOCAL(1),
  // $new_indent
  var_if, 3, LOCAL(1), lambda_3, lambda_4, 1, var_63_1_new_indent,
  // map_reduce $contents
  var_map_reduce, 4, LOCAL(3), lambda_self, var_append, string_1, 1, LOCAL(4),
  // serialization_tag_of(self)) <@(length_of(self))>
  var_serialization_tag_of, 1, LOCAL(3), 1, LOCAL(1),
  // length_of(self))>
  var_length_of, 1, LOCAL(3), 1, LOCAL(2),
  // $header
  var_std__string, 4, LOCAL(1), string_2, LOCAL(2), string_3, 1, var_72_1_header,
  // is_defined &header -> append(tabs_and_spaces(indent) header)
  var_is_defined, 1, var_61_0_indent, 1, LOCAL(1),
  // update_if indent.is_defined &header -> append(tabs_and_spaces(indent) header)
  var_update_if, 3, LOCAL(1), var_72_1_header, lambda_5, 1, var_72_1_header,
  // append header contents
  var_append, 2, var_72_1_header, LOCAL(4), TAIL_CALL,
  POS(65, 14),
  POS(63, 3),
  POS(68, 3),
  POS(74, 9),
  POS(74, 40),
  POS(72, 3),
  POS(75, 20),
  POS(75, 3),
  POS(76, 3)
};

static TAB_NUM t_lambda_3[] = {
  1, // locals
  0, // parameters
  // indent+2
  var_std__plus, 2, var_61_0_indent, num_2, 1, LOCAL(1),
  //  indent+2
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(66, 10),
  POS(66, 9)
};

static TAB_NUM t_lambda_4[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(67, 9)
};

static TAB_NUM t_lambda_self[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 69_7_value
  // serialize(value new_indent)
  var_serialize, 2, LOCAL(2), var_63_1_new_indent, 1, LOCAL(1),
  // -> serialize(value new_indent)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(69, 22),
  POS(69, 19)
};

static TAB_NUM t_lambda_5[] = {
  2, // locals
  0, // parameters
  // tabs_and_spaces(indent) header)
  var_tabs_and_spaces, 1, var_61_0_indent, 1, LOCAL(1),
  // append(tabs_and_spaces(indent) header)
  var_append, 2, LOCAL(1), var_72_1_header, 1, LOCAL(2),
  //  append(tabs_and_spaces(indent) header)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(75, 49),
  POS(75, 42),
  POS(75, 41)
};

static TAB_NUM t_func_std_types__set___deserializer_of[] = {
  2, // locals
  2, // parameters
  LOCAL(1), // 80_0_type
  LOCAL(2), // 81_0_items
  // $obj empty_collection_of(type)
  var_empty_collection_of, 1, LOCAL(1), 1, var_83_1_obj,
  // for_each items
  var_for_each, 3, LOCAL(2), lambda_6, lambda_7, TAIL_CALL,
  POS(83, 3),
  POS(84, 3)
};

static TAB_NUM t_lambda_6[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 85_3_item
  // obj(item) true
  var_83_1_obj, 2, LOCAL(1), var_true, 1, var_83_1_obj,
  // next
  var_next, 0, TAIL_CALL,
  POS(86, 8),
  POS(87, 7)
};

static TAB_NUM t_lambda_7[] = {
  0, // locals
  0, // parameters
  //  obj
  LET, 1, var_83_1_obj, TAIL_CALL,
  POS(88, 7)
};

static FUNKY_CONSTANT constants_table[] = {
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__set___merge}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__set___serialize}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_3}},
  {FLT_POSITIVE_INT64, 0, {.value = 2}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_4}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_self}},
  {FLT_STRING_8, 0, {.str_8 = ""}},
  {FLT_STRING_8, 2, {.str_8 = " <"}},
  {FLT_STRING_8, 2, {.str_8 = ">\012"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_5}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__set___deserializer_of}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_6}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_7}}
};

static ATTRIBUTE_DEFINITION std_types__object__attributes[] = {
  {-var_is_a_set, -var_false}
};

static ATTRIBUTE_DEFINITION std_types__set__attributes[] = {
  {-var_is_a_set, -var_true},
  {var_merge, -func_std_types__set___merge},
  {var_serialize, -func_std_types__set___serialize},
  {-var_deserializer_of, -func_std_types__set___deserializer_of}
};

static FUNKY_VARIABLE variables_table[] = {
  {
    FOT_POLYMORPHIC, 0, 0,
    "is_a_set\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "assign\000std", NULL,
    {.position = POS(27, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "object\000std_types", std_types__object__attributes,
    {.position = POS(28, 1)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "is_a_set\000", NULL,
    {.position = POS(28, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "false\000", NULL,
    {.position = POS(28, 29)}
  },
  {
    FOT_DERIVED, 0, 4,
    "set\000std_types", std_types__set__attributes,
    {"collection\000std_types"}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "true\000", NULL,
    {.position = POS(29, 26)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "collection\000std_types", NULL,
    {.position = POS(31, 17)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "merge\000", NULL,
    {.position = POS(42, 17)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "46_0_self\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "next\000", NULL,
    {.position = POS(52, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "for_each\000", NULL,
    {.position = POS(49, 3)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "serialize\000", NULL,
    {.position = POS(58, 17)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "61_0_indent\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "undefined\000", NULL,
    {.position = POS(61, 14)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_defined\000", NULL,
    {.position = POS(65, 14)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000std", NULL,
    {.position = POS(66, 10)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "63_1_new_indent\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if\000", NULL,
    {.position = POS(64, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "append\000", NULL,
    {.position = POS(70, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "map_reduce\000", NULL,
    {.position = POS(68, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "serialization_tag_of\000", NULL,
    {.position = POS(74, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "length_of\000", NULL,
    {.position = POS(74, 40)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "72_1_header\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "string\000std", NULL,
    {.position = POS(73, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "tabs_and_spaces\000", NULL,
    {.position = POS(75, 49)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "update_if\000", NULL,
    {.position = POS(75, 3)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "deserializer_of\000", NULL,
    {.position = POS(78, 17)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "83_1_obj\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_collection_of\000", NULL,
    {.position = POS(83, 8)}
  }
};

static FUNKY_NAMESPACE used_namespaces[] = {
  {"std", 1, 0}
};

FUNKY_MODULE module__basic__types__collections__sets__set = {
  "_basic__types__collections__sets__set", // module name
  "basic/types/collections/sets/set.fky", // module filename
  .major_version = 0,
  .minor_version = 0,
  .feature_flags = FEAT_POSITIONS,
  .marker = 0,
  0, // number of required modules
  0, // number of defined namespaces
  1, // number of used namespaces
  15, // number of constants
  30, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  constants_table,
  variables_table,
};
