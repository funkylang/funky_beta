#include <stddef.h>
#include <stdint.h>

#include "runtime/common.h"
#include "runtime/builtins.h"
#include "runtime/fko.h"
#include "runtime/memory.h"

enum {
  uni_NONE = -1,
  func_std_types__hash_bag = -2,
  lambda_1 = -3,
  lambda_2 = -4,
  lambda_3 = -5,
  num_0 = -6,
  lambda_4 = -7,
  lambda_5 = -8,
  func_std_types__hash_bag___add = -9,
  lambda_6 = -10,
  lambda_7 = -11,
  num_1 = -12,
  lambda_value_is_undefined = -13,
  lambda_8 = -14,
  lambda_9 = -15,
  lambda_10 = -16,
  func_std_types__hash_bag___merge = -17,
  lambda_11 = -18,
  lambda_12 = -19,
  func_std_types__hash_bag___difference = -20,
  lambda_13 = -21,
  lambda_14 = -22,
  func_std__hash_bag = -23,
  func_std_types__list___to_hash_bag = -24,
  lambda_15 = -25,
  lambda_16 = -26,
  str_hash_bag = -27
};

enum {
  var__START = FIRST_VAR-1,
  var_std__to_hash_bag, // attribute
  var_std__assign, // extern
  var_std_types__hash_bag, // derived
  var_std_types__hash_table, // extern
  var_std__empty_hash_bag, // derived
  var_43_5_myself, // dynamic
  var_44_5_key, // dynamic
  var_45_5_value, // dynamic
  var_std__equal, // extern
  var_basic_collections__update_hash_table, // extern
  var_is_defined, // extern
  var_std__not, // extern
  var_std__and, // extern
  var_undefined, // extern
  var_if, // extern
  var_add, // extern polymorphic
  var_59_5_self, // dynamic
  var_63_8_pair, // dynamic
  var_is_a_key_value_pair, // extern
  var_65_10_key, // dynamic
  var_65_15_count, // dynamic
  var_69_8_value, // dynamic
  var_is_undefined, // extern
  var_next, // extern
  var_plus, // extern
  var_update_if, // extern
  var_for_each, // extern
  var_merge, // extern polymorphic
  var_83_5_self, // dynamic
  var_std__key_value_pair, // extern
  var_difference, // extern polymorphic
  var_94_5_self, // dynamic
  var_std__negate, // extern
  var_std__hash_bag, // initialized
  var_to_hash_bag, // extern polymorphic
  var_std_types__list, // extern
  var_121_4_table, // dynamic
  var_empty_hash_bag, // extern
  var_serialization_tag_of, // extern polymorphic
  var_empty_collection_of, // extern polymorphic
  var_deserializers, // extern
  var_register_type, // extern
  var__END
};


static TAB_NUM t_func_std_types__hash_bag[] = {
  1, // locals
  -3, // parameters
  MYSELF_PARAMETER, var_43_5_myself,
  MANDATORY_PARAMETER, var_44_5_key,
  uni_NONE, var_45_5_value,
  // NONE == value:
  var_std__equal, 2, uni_NONE, var_45_5_value, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1, lambda_2, TAIL_CALL,
  POS(48, 5),
  POS(47, 3)
};

static FUNCTION_INFO i_func_std_types__hash_bag = {
  t_func_std_types__hash_bag, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_1[] = {
  0, // locals
  0, // parameters
  // basic_collections::update_hash_table myself key
  var_basic_collections__update_hash_table, 2, var_43_5_myself, var_44_5_key, TAIL_CALL,
  POS(49, 7)
};

static FUNCTION_INFO i_lambda_1 = {
  t_lambda_1, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_2[] = {
  2, // locals
  0, // parameters
  // is_defined && value != 0:
  var_is_defined, 1, var_45_5_value, 1, LOCAL(1),
  // is_defined && value != 0:
  var_std__and, 2, LOCAL(1), lambda_3, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_4, lambda_5, TAIL_CALL,
  POS(52, 15),
  POS(52, 15),
  POS(51, 7)
};

static FUNCTION_INFO i_lambda_2 = {
  t_lambda_2, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_3[] = {
  2, // locals
  0, // parameters
  // value != 0:
  var_std__equal, 2, var_45_5_value, num_0, 1, LOCAL(1),
  // value != 0:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // value != 0:
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(52, 29),
  POS(52, 29),
  POS(52, 29)
};

static FUNCTION_INFO i_lambda_3 = {
  t_lambda_3, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_4[] = {
  0, // locals
  0, // parameters
  // basic_collections::update_hash_table myself key value
  var_basic_collections__update_hash_table, 3, var_43_5_myself, var_44_5_key, var_45_5_value, TAIL_CALL,
  POS(53, 11)
};

static FUNCTION_INFO i_lambda_4 = {
  t_lambda_4, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_5[] = {
  0, // locals
  0, // parameters
  // basic_collections::update_hash_table myself key undefined
  var_basic_collections__update_hash_table, 3, var_43_5_myself, var_44_5_key, var_undefined, TAIL_CALL,
  POS(55, 12)
};

static FUNCTION_INFO i_lambda_5 = {
  t_lambda_5, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_std_types__hash_bag___add[] = {
  1, // locals
  -2, // parameters
  MANDATORY_PARAMETER, var_59_5_self,
  REST_PARAMETER, LOCAL(1), // 60_5_pairs
  // for_each pairs
  var_for_each, 3, LOCAL(1), lambda_6, lambda_10, TAIL_CALL,
  POS(62, 3),
  LOCAL(1)
};

static FUNCTION_INFO i_func_std_types__hash_bag___add = {
  t_func_std_types__hash_bag___add, NULL, 1, 1,
  {"60_5_pairs\000"}
};

static TAB_NUM t_lambda_6[] = {
  1, // locals
  1, // parameters
  var_63_8_pair,
  // is_a_key_value_pair
  var_is_a_key_value_pair, 1, var_63_8_pair, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), var_63_8_pair, lambda_7, 2, var_65_10_key, var_65_15_count,
  // $value self(key)
  var_59_5_self, 1, var_65_10_key, 1, var_69_8_value,
  // is_undefined:
  var_is_undefined, 1, var_69_8_value, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_value_is_undefined, lambda_8, TAIL_CALL,
  POS(66, 14),
  POS(64, 7),
  POS(69, 7),
  POS(71, 15),
  POS(70, 7)
};

static FUNCTION_INFO i_lambda_6 = {
  t_lambda_6, NULL, 5, 0,
  {}
};

static TAB_NUM t_lambda_7[] = {
  0, // locals
  0, // parameters
  //  pair 1
  LET, 2, var_63_8_pair, num_1, TAIL_CALL,
  POS(68, 11)
};

static FUNCTION_INFO i_lambda_7 = {
  t_lambda_7, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_value_is_undefined[] = {
  0, // locals
  0, // parameters
  // self(key) count
  var_59_5_self, 2, var_65_10_key, var_65_15_count, 1, var_59_5_self,
  // next
  var_next, 0, TAIL_CALL,
  POS(72, 12),
  POS(73, 11)
};

static FUNCTION_INFO i_lambda_value_is_undefined = {
  t_lambda_value_is_undefined, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_8[] = {
  1, // locals
  0, // parameters
  // plus &value count
  var_plus, 2, var_69_8_value, var_65_15_count, 1, var_69_8_value,
  // value == 0 &value -> undefined
  var_std__equal, 2, var_69_8_value, num_0, 1, LOCAL(1),
  // update_if value == 0 &value -> undefined
  var_update_if, 3, LOCAL(1), var_69_8_value, lambda_9, 1, var_69_8_value,
  // self(key) value
  var_59_5_self, 2, var_65_10_key, var_69_8_value, 1, var_59_5_self,
  // next
  var_next, 0, TAIL_CALL,
  POS(75, 11),
  POS(76, 21),
  POS(76, 11),
  POS(77, 12),
  POS(78, 11)
};

static FUNCTION_INFO i_lambda_8 = {
  t_lambda_8, NULL, 5, 0,
  {}
};

static TAB_NUM t_lambda_9[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(76, 41)
};

static FUNCTION_INFO i_lambda_9 = {
  t_lambda_9, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_10[] = {
  0, // locals
  0, // parameters
  //  self
  LET, 1, var_59_5_self, TAIL_CALL,
  POS(79, 7)
};

static FUNCTION_INFO i_lambda_10 = {
  t_lambda_10, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_std_types__hash_bag___merge[] = {
  1, // locals
  2, // parameters
  var_83_5_self,
  LOCAL(1), // 84_5_other
  // for_each other
  var_for_each, 3, LOCAL(1), lambda_11, lambda_12, TAIL_CALL,
  POS(86, 3),
  LOCAL(1)
};

static FUNCTION_INFO i_func_std_types__hash_bag___merge = {
  t_func_std_types__hash_bag___merge, NULL, 1, 1,
  {"84_5_other\000"}
};

static TAB_NUM t_lambda_11[] = {
  3, // locals
  2, // parameters
  LOCAL(2), // 87_8_key
  LOCAL(3), // 87_12_value
  // key = value
  var_std__key_value_pair, 2, LOCAL(2), LOCAL(3), 1, LOCAL(1),
  // add &self key = value
  var_add, 2, var_83_5_self, LOCAL(1), 1, var_83_5_self,
  // next
  var_next, 0, TAIL_CALL,
  POS(88, 17),
  POS(88, 7),
  POS(89, 7),
  LOCAL(3),
  LOCAL(2)
};

static FUNCTION_INFO i_lambda_11 = {
  t_lambda_11, NULL, 3, 2,
  {"87_12_value\000", "87_8_key\000"}
};

static TAB_NUM t_lambda_12[] = {
  0, // locals
  0, // parameters
  //  self
  LET, 1, var_83_5_self, TAIL_CALL,
  POS(90, 7)
};

static FUNCTION_INFO i_lambda_12 = {
  t_lambda_12, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_std_types__hash_bag___difference[] = {
  1, // locals
  2, // parameters
  var_94_5_self,
  LOCAL(1), // 95_5_other
  // for_each other
  var_for_each, 3, LOCAL(1), lambda_13, lambda_14, TAIL_CALL,
  POS(97, 3),
  LOCAL(1)
};

static FUNCTION_INFO i_func_std_types__hash_bag___difference = {
  t_func_std_types__hash_bag___difference, NULL, 1, 1,
  {"95_5_other\000"}
};

static TAB_NUM t_lambda_13[] = {
  4, // locals
  2, // parameters
  LOCAL(3), // 98_8_key
  LOCAL(4), // 98_12_value
  // value
  var_std__negate, 1, LOCAL(4), 1, LOCAL(1),
  // key = -value
  var_std__key_value_pair, 2, LOCAL(3), LOCAL(1), 1, LOCAL(2),
  // add &self key = -value
  var_add, 2, var_94_5_self, LOCAL(2), 1, var_94_5_self,
  // next
  var_next, 0, TAIL_CALL,
  POS(99, 24),
  POS(99, 17),
  POS(99, 7),
  POS(100, 7),
  LOCAL(3),
  LOCAL(4)
};

static FUNCTION_INFO i_lambda_13 = {
  t_lambda_13, NULL, 4, 2,
  {"98_8_key\000", "98_12_value\000"}
};

static TAB_NUM t_lambda_14[] = {
  0, // locals
  0, // parameters
  //  self
  LET, 1, var_94_5_self, TAIL_CALL,
  POS(101, 7)
};

static FUNCTION_INFO i_lambda_14 = {
  t_lambda_14, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_std__hash_bag[] = {
  1, // locals
  -1, // parameters
  REST_PARAMETER, LOCAL(1), // 107_5_pairs
  // to_hash_bag pairs
  var_to_hash_bag, 1, LOCAL(1), TAIL_CALL,
  POS(109, 3),
  LOCAL(1)
};

static FUNCTION_INFO i_func_std__hash_bag = {
  t_func_std__hash_bag, NULL, 1, 1,
  {"107_5_pairs\000"}
};

static TAB_NUM t_func_std_types__list___to_hash_bag[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 119_5_items
  // $table empty_hash_bag
  LET, 1, var_empty_hash_bag, 1, var_121_4_table,
  // for_each items
  var_for_each, 3, LOCAL(1), lambda_15, lambda_16, TAIL_CALL,
  POS(121, 3),
  POS(122, 3),
  LOCAL(1)
};

static FUNCTION_INFO i_func_std_types__list___to_hash_bag = {
  t_func_std_types__list___to_hash_bag, NULL, 2, 1,
  {"119_5_items\000"}
};

static TAB_NUM t_lambda_15[] = {
  3, // locals
  1, // parameters
  LOCAL(1), // 123_8_item
  // item $key $value
  LOCAL(1), 0, 2, LOCAL(2), LOCAL(3),
  // table(key) value
  var_121_4_table, 2, LOCAL(2), LOCAL(3), 1, var_121_4_table,
  // next
  var_next, 0, TAIL_CALL,
  POS(124, 7),
  POS(125, 8),
  POS(126, 7),
  LOCAL(3),
  LOCAL(2),
  LOCAL(1)
};

static FUNCTION_INFO i_lambda_15 = {
  t_lambda_15, NULL, 3, 3,
  {"124_18_value\000", "124_13_key\000", "123_8_item\000"}
};

static TAB_NUM t_lambda_16[] = {
  0, // locals
  0, // parameters
  //  table
  LET, 1, var_121_4_table, TAIL_CALL,
  POS(127, 7)
};

static FUNCTION_INFO i_lambda_16 = {
  t_lambda_16, NULL, 1, 0,
  {}
};

static TAB_NUM t_module_entry[] = {
  0, // locals
  0, // parameters
  // register_type &deserializers std_types::hash_bag
  var_register_type, 2, var_deserializers, var_std_types__hash_bag, 1, var_deserializers,
  LET, 1, 0, TAIL_CALL,
  POS(134, 1)
};

static FUNCTION_INFO i_module_entry = {
  t_module_entry, NULL, 1, 0,
  {}
};

static FUNKY_CONSTANT constants_table[] = {
  {FLT_UNIQUE, 0, {.str_8 = "NONE"}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__hash_bag}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_1}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_2}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_3}},
  {FLT_POSITIVE_INT64, 0, {.value = 0}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_4}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_5}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__hash_bag___add}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_6}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_7}},
  {FLT_POSITIVE_INT64, 0, {.value = 1}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_value_is_undefined}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_8}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_9}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_10}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__hash_bag___merge}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_11}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_12}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__hash_bag___difference}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_13}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_14}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std__hash_bag}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__list___to_hash_bag}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_15}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_16}},
  {FLT_STRING_8, 8, {.str_8 = "hash_bag"}},
  {FLT_FUNCTION, 0, {.func_info = &i_module_entry}}
};

static ATTRIBUTE_DEFINITION std_types__hash_bag__attributes[] = {
  {TYPE_FUNCTION, -func_std_types__hash_bag},
  {var_add, -func_std_types__hash_bag___add},
  {var_merge, -func_std_types__hash_bag___merge},
  {var_difference, -func_std_types__hash_bag___difference},
  {-var_serialization_tag_of, -str_hash_bag},
  {-var_empty_collection_of, -var_empty_hash_bag}
};

static ATTRIBUTE_DEFINITION std_types__list__attributes[] = {
  {var_to_hash_bag, -func_std_types__list___to_hash_bag}
};

static FUNKY_VARIABLE variables_table[] = {
  {
    FOT_POLYMORPHIC, 0, 0,
    "to_hash_bag\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "assign\000std", NULL,
    {.position = POS(33, 1)}
  },
  {
    FOT_DERIVED, 0, 6,
    "hash_bag\000std_types", std_types__hash_bag__attributes,
    {"hash_table\000std_types"}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "hash_table\000std_types", NULL,
    {.position = POS(35, 22)}
  },
  {
    FOT_DERIVED, 0, 0,
    "empty_hash_bag\000std", NULL,
    {"hash_bag\000std_types"}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "43_5_myself\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "44_5_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "45_5_value\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "equal\000std", NULL,
    {.position = POS(48, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "update_hash_table\000basic_collections", NULL,
    {.position = POS(49, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_defined\000", NULL,
    {.position = POS(52, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not\000std", NULL,
    {.position = POS(52, 29)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "and\000std", NULL,
    {.position = POS(52, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "undefined\000", NULL,
    {.position = POS(55, 60)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if\000", NULL,
    {.position = POS(51, 7)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "add\000", NULL,
    {.position = POS(57, 22)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "59_5_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "63_8_pair\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_a_key_value_pair\000", NULL,
    {.position = POS(66, 14)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "65_10_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "65_15_count\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "69_8_value\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_undefined\000", NULL,
    {.position = POS(71, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "next\000", NULL,
    {.position = POS(73, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000", NULL,
    {.position = POS(75, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "update_if\000", NULL,
    {.position = POS(76, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "for_each\000", NULL,
    {.position = POS(62, 3)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "merge\000", NULL,
    {.position = POS(81, 22)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "83_5_self\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "key_value_pair\000std", NULL,
    {.position = POS(88, 17)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "difference\000", NULL,
    {.position = POS(92, 22)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "94_5_self\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "negate\000std", NULL,
    {.position = POS(99, 24)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "hash_bag\000std", NULL,
    {.const_idx = -func_std__hash_bag}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "to_hash_bag\000", NULL,
    {.position = POS(109, 3)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "list\000std_types", std_types__list__attributes,
    {.position = POS(111, 1)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "121_4_table\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_hash_bag\000", NULL,
    {.position = POS(121, 10)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "serialization_tag_of\000", NULL,
    {.position = POS(131, 22)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "empty_collection_of\000", NULL,
    {.position = POS(132, 22)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "deserializers\000", NULL,
    {.position = POS(134, 16)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "register_type\000", NULL,
    {.position = POS(134, 1)}
  }
};

static FUNKY_NAMESPACE used_namespaces[] = {
  {"std", 1, 0}
};

FUNKY_MODULE module__basic__types__collections__bags__hash_bag = {
  "_basic__types__collections__bags__hash_bag", // module name
  "basic/types/collections/bags/hash_bag.fky", // module filename
  .major_version = 0,
  .minor_version = 0,
  .feature_flags = FEAT_POSITIONS|FEAT_FUNCTION_INFO|FEAT_INITIALIZER,
  .marker = 0,
  0, // number of required modules
  0, // number of defined namespaces
  1, // number of used namespaces
  28, // number of constants
  42, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  constants_table,
  variables_table,
};
