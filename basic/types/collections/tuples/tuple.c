/// require ./tuple_autogen

#include <stddef.h>
#include <stdint.h>

#include "runtime/common.h"
#include "runtime/builtins.h"
#include "runtime/fko.h"
#include "runtime/memory.h"

enum {
  str_tuple = -1,
  func_std__first = -2,
  func_std__second = -3,
  func_std__third = -4,
  func_std__fourth = -5,
  func_std__fifth = -6,
  func_std_types__tuple___serialize = -7,
  lambda_1 = -8,
  num_2 = -9,
  lambda_2 = -10,
  lambda_items = -11,
  string_1 = -12,
  string_2 = -13,
  string_3 = -14,
  lambda_3 = -15,
  func_std_types__tuple___deserializer_of = -16
};

enum {
  var__START = FIRST_VAR-1,
  var_std__is_a_tuple, // attribute
  var_std__assign, // extern
  var_std_types__object, // extern
  var_is_a_tuple, // extern polymorphic
  var_false, // extern
  var_std_types__tuple, // extern
  var_true, // extern
  var_serialization_tag_of, // extern polymorphic
  var_std__first, // initialized
  var_std__second, // initialized
  var_std__third, // initialized
  var_std__fourth, // initialized
  var_std__fifth, // initialized
  var_serialize, // extern polymorphic
  var_54_0_indent, // dynamic
  var_undefined, // extern
  var_is_defined, // extern
  var_std__plus, // extern
  var_56_1_new_indent, // dynamic
  var_if, // extern
  var_to_list, // extern
  var_append, // extern
  var_map_reduce, // extern
  var_length_of, // extern
  var_66_1_header, // dynamic
  var_std__string, // extern
  var_tabs_and_spaces, // extern
  var_update_if, // extern
  var_deserializer_of, // extern polymorphic
  var_new_tuple, // extern
  var__END
};


static TAB_NUM t_func_std__first[] = {
  2, // locals
  1, // parameters
  LOCAL(1), // 31_14_t
  // t $first
  LOCAL(1), 0, 1, LOCAL(2),
  // -> first
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(32, 3),
  POS(33, 3)
};

static TAB_NUM t_func_std__second[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 35_15_t
  // t $_first $second
  LOCAL(2), 0, 2, LOCAL(1), LOCAL(3),
  // -> second
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(36, 3),
  POS(37, 3)
};

static TAB_NUM t_func_std__third[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 39_14_t
  // t $_first $_second $third
  LOCAL(2), 0, 3, LOCAL(1), LOCAL(1), LOCAL(3),
  // -> third
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(40, 3),
  POS(41, 3)
};

static TAB_NUM t_func_std__fourth[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 43_15_t
  // t $_first $_second $_third $fourth
  LOCAL(2), 0, 4, LOCAL(1), LOCAL(1), LOCAL(1), LOCAL(3),
  // -> fourth
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(44, 3),
  POS(45, 3)
};

static TAB_NUM t_func_std__fifth[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 47_14_t
  // t $_first $_second $_third $_fourth $fifth
  LOCAL(2), 0, 5, LOCAL(1), LOCAL(1), LOCAL(1), LOCAL(1), LOCAL(3),
  // -> fifth
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(48, 3),
  POS(49, 3)
};

static TAB_NUM t_func_std_types__tuple___serialize[] = {
  5, // locals
  -2, // parameters
  MANDATORY_PARAMETER, LOCAL(3), // 53_0_self
  var_undefined, var_54_0_indent,
  // is_defined
  var_is_defined, 1, var_54_0_indent, 1, LOCAL(1),
  // $new_indent
  var_if, 3, LOCAL(1), lambda_1, lambda_2, 1, var_56_1_new_indent,
  // $items self.to_list
  var_to_list, 1, LOCAL(3), 1, LOCAL(4),
  // map_reduce $contents
  var_map_reduce, 4, LOCAL(4), lambda_items, var_append, string_1, 1, LOCAL(5),
  // serialization_tag_of(self)) <@(length_of(items))>
  var_serialization_tag_of, 1, LOCAL(3), 1, LOCAL(1),
  // length_of(items))>
  var_length_of, 1, LOCAL(4), 1, LOCAL(2),
  // $header
  var_std__string, 4, LOCAL(1), string_2, LOCAL(2), string_3, 1, var_66_1_header,
  // is_defined &header -> append(tabs_and_spaces(indent) header)
  var_is_defined, 1, var_54_0_indent, 1, LOCAL(1),
  // update_if indent.is_defined &header -> append(tabs_and_spaces(indent) header)
  var_update_if, 3, LOCAL(1), var_66_1_header, lambda_3, 1, var_66_1_header,
  // append header contents
  var_append, 2, var_66_1_header, LOCAL(5), TAIL_CALL,
  POS(58, 14),
  POS(56, 3),
  POS(61, 3),
  POS(62, 3),
  POS(68, 9),
  POS(68, 40),
  POS(66, 3),
  POS(69, 20),
  POS(69, 3),
  POS(70, 3)
};

static TAB_NUM t_lambda_1[] = {
  1, // locals
  0, // parameters
  // indent+2
  var_std__plus, 2, var_54_0_indent, num_2, 1, LOCAL(1),
  //  indent+2
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(59, 10),
  POS(59, 9)
};

static TAB_NUM t_lambda_2[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(60, 9)
};

static TAB_NUM t_lambda_items[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 63_8_item
  // serialize(item new_indent)
  var_serialize, 2, LOCAL(2), var_56_1_new_indent, 1, LOCAL(1),
  // -> serialize(item new_indent)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(63, 22),
  POS(63, 19)
};

static TAB_NUM t_lambda_3[] = {
  2, // locals
  0, // parameters
  // tabs_and_spaces(indent) header)
  var_tabs_and_spaces, 1, var_54_0_indent, 1, LOCAL(1),
  // append(tabs_and_spaces(indent) header)
  var_append, 2, LOCAL(1), var_66_1_header, 1, LOCAL(2),
  //  append(tabs_and_spaces(indent) header)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(69, 49),
  POS(69, 42),
  POS(69, 41)
};

static TAB_NUM t_func_std_types__tuple___deserializer_of[] = {
  3, // locals
  2, // parameters
  LOCAL(2), // 74_0_type
  LOCAL(3), // 75_0_items
  // new_tuple(type items)
  var_new_tuple, 2, LOCAL(2), LOCAL(3), 1, LOCAL(1),
  // -> new_tuple(type items)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(77, 6),
  POS(77, 3)
};

static FUNKY_CONSTANT constants_table[] = {
  {FLT_STRING_8, 5, {.str_8 = "tuple"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__first}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__second}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__third}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__fourth}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__fifth}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__tuple___serialize}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1}},
  {FLT_POSITIVE_INT64, 0, {.value = 2}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_items}},
  {FLT_STRING_8, 0, {.str_8 = ""}},
  {FLT_STRING_8, 2, {.str_8 = " <"}},
  {FLT_STRING_8, 2, {.str_8 = ">\012"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_3}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__tuple___deserializer_of}}
};

static ATTRIBUTE_DEFINITION std_types__object__attributes[] = {
  {-var_is_a_tuple, -var_false}
};

static ATTRIBUTE_DEFINITION std_types__tuple__attributes[] = {
  {-var_is_a_tuple, -var_true},
  {-var_serialization_tag_of, -str_tuple},
  {var_serialize, -func_std_types__tuple___serialize},
  {-var_deserializer_of, -func_std_types__tuple___deserializer_of}
};

static FUNKY_VARIABLE variables_table[] = {
  {
    FOT_POLYMORPHIC, 0, 0,
    "is_a_tuple\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "assign\000std", NULL,
    {.position = POS(24, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "object\000std_types", std_types__object__attributes,
    {.position = POS(26, 1)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "is_a_tuple\000", NULL,
    {.position = POS(26, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "false\000", NULL,
    {.position = POS(26, 31)}
  },
  {
    FOT_UNKNOWN, 0, 4,
    "tuple\000std_types", std_types__tuple__attributes,
    {.position = POS(27, 1)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "true\000", NULL,
    {.position = POS(27, 30)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "serialization_tag_of\000", NULL,
    {.position = POS(29, 19)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "first\000std", NULL,
    {.const_idx = -func_std__first}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "second\000std", NULL,
    {.const_idx = -func_std__second}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "third\000std", NULL,
    {.const_idx = -func_std__third}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "fourth\000std", NULL,
    {.const_idx = -func_std__fourth}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "fifth\000std", NULL,
    {.const_idx = -func_std__fifth}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "serialize\000", NULL,
    {.position = POS(51, 19)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "54_0_indent\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "undefined\000", NULL,
    {.position = POS(54, 14)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_defined\000", NULL,
    {.position = POS(58, 14)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000std", NULL,
    {.position = POS(59, 10)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "56_1_new_indent\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if\000", NULL,
    {.position = POS(57, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "to_list\000", NULL,
    {.position = POS(61, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "append\000", NULL,
    {.position = POS(64, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "map_reduce\000", NULL,
    {.position = POS(62, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "length_of\000", NULL,
    {.position = POS(68, 40)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "66_1_header\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "string\000std", NULL,
    {.position = POS(67, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "tabs_and_spaces\000", NULL,
    {.position = POS(69, 49)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "update_if\000", NULL,
    {.position = POS(69, 3)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "deserializer_of\000", NULL,
    {.position = POS(72, 19)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "new_tuple\000", NULL,
    {.position = POS(77, 6)}
  }
};

extern FUNKY_MODULE module__basic__types__collections__tuples__tuple_autogen;

static FUNKY_MODULE *required_modules[] = {
  &module__basic__types__collections__tuples__tuple_autogen
};

static FUNKY_NAMESPACE used_namespaces[] = {
  {"std", 1, 0}
};

FUNKY_MODULE module__basic__types__collections__tuples__tuple = {
  "_basic__types__collections__tuples__tuple", // module name
  "basic/types/collections/tuples/tuple.fky", // module filename
  .major_version = 0,
  .minor_version = 0,
  .feature_flags = FEAT_POSITIONS,
  .marker = 0,
  1, // number of required modules
  0, // number of defined namespaces
  1, // number of used namespaces
  16, // number of constants
  30, // number of variables
  required_modules,
  NULL, // defined namespaces
  used_namespaces,
  constants_table,
  variables_table,
};
