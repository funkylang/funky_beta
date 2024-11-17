#include <stddef.h>
#include <stdint.h>

#include "runtime/common.h"
#include "runtime/builtins.h"
#include "runtime/fko.h"
#include "runtime/memory.h"

enum {
  func_std_types__hash_bag___add = -1,
  lambda_1 = -2,
  lambda_2 = -3,
  num_1 = -4,
  lambda_value_is_undefined = -5,
  lambda_3 = -6,
  num_0 = -7,
  lambda_4 = -8,
  lambda_5 = -9,
  func_std_types__hash_bag___merge = -10,
  lambda_6 = -11,
  lambda_7 = -12,
  func_std_types__hash_bag___difference = -13,
  lambda_8 = -14,
  lambda_9 = -15,
  func_std__hash_bag = -16,
  func_std_types__list___to_hash_bag = -17,
  lambda_10 = -18,
  lambda_11 = -19,
  str_hash_bag = -20
};

enum {
  var__START = FIRST_VAR-1,
  var_std__to_hash_bag, // attribute
  var_std__assign, // extern
  var_std_types__hash_bag, // derived
  var_std_types__hash_table, // extern
  var_std__empty_hash_bag, // derived
  var_add, // extern polymorphic
  var_41_0_self, // dynamic
  var_45_3_pair, // dynamic
  var_is_a_key_value_pair, // extern
  var_47_1_key, // dynamic
  var_47_6_count, // dynamic
  var_if, // extern
  var_51_1_value, // dynamic
  var_is_undefined, // extern
  var_next, // extern
  var_plus, // extern
  var_std__equal, // extern
  var_undefined, // extern
  var_update_if, // extern
  var_for_each, // extern
  var_merge, // extern polymorphic
  var_65_0_self, // dynamic
  var_std__key_value_pair, // extern
  var_difference, // extern polymorphic
  var_76_0_self, // dynamic
  var_std__negate, // extern
  var_std__hash_bag, // initialized
  var_to_hash_bag, // extern polymorphic
  var_std_types__list, // extern
  var_103_1_table, // dynamic
  var_empty_hash_bag, // extern
  var_serialization_tag_of, // extern polymorphic
  var_empty_collection_of, // extern polymorphic
  var_deserializers, // extern
  var_register_type, // extern
  var__END
};


static TAB_NUM t_func_std_types__hash_bag___add[] = {
  1, // locals
  -2, // parameters
  MANDATORY_PARAMETER, var_41_0_self,
  REST_PARAMETER, LOCAL(1), // 42_0_pairs
  // for_each pairs
  var_for_each, 3, LOCAL(1), lambda_1, lambda_5, TAIL_CALL,
  POS(44, 3)
};

static TAB_NUM t_lambda_1[] = {
  1, // locals
  1, // parameters
  var_45_3_pair,
  // is_a_key_value_pair
  var_is_a_key_value_pair, 1, var_45_3_pair, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), var_45_3_pair, lambda_2, 2, var_47_1_key, var_47_6_count,
  // $value self(key)
  var_41_0_self, 1, var_47_1_key, 1, var_51_1_value,
  // is_undefined:
  var_is_undefined, 1, var_51_1_value, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_value_is_undefined, lambda_3, TAIL_CALL,
  POS(48, 14),
  POS(46, 7),
  POS(51, 7),
  POS(53, 15),
  POS(52, 7)
};

static TAB_NUM t_lambda_2[] = {
  0, // locals
  0, // parameters
  //  pair 1
  LET, 2, var_45_3_pair, num_1, TAIL_CALL,
  POS(50, 11)
};

static TAB_NUM t_lambda_value_is_undefined[] = {
  0, // locals
  0, // parameters
  // self(key) count
  var_41_0_self, 2, var_47_1_key, var_47_6_count, 1, var_41_0_self,
  // next
  var_next, 0, TAIL_CALL,
  POS(54, 12),
  POS(55, 11)
};

static TAB_NUM t_lambda_3[] = {
  1, // locals
  0, // parameters
  // plus &value count
  var_plus, 2, var_51_1_value, var_47_6_count, 1, var_51_1_value,
  // value == 0 &value -> undefined
  var_std__equal, 2, var_51_1_value, num_0, 1, LOCAL(1),
  // update_if value == 0 &value -> undefined
  var_update_if, 3, LOCAL(1), var_51_1_value, lambda_4, 1, var_51_1_value,
  // self(key) value
  var_41_0_self, 2, var_47_1_key, var_51_1_value, 1, var_41_0_self,
  // next
  var_next, 0, TAIL_CALL,
  POS(57, 11),
  POS(58, 21),
  POS(58, 11),
  POS(59, 12),
  POS(60, 11)
};

static TAB_NUM t_lambda_4[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(58, 41)
};

static TAB_NUM t_lambda_5[] = {
  0, // locals
  0, // parameters
  //  self
  LET, 1, var_41_0_self, TAIL_CALL,
  POS(61, 7)
};

static TAB_NUM t_func_std_types__hash_bag___merge[] = {
  1, // locals
  2, // parameters
  var_65_0_self,
  LOCAL(1), // 66_0_other
  // for_each other
  var_for_each, 3, LOCAL(1), lambda_6, lambda_7, TAIL_CALL,
  POS(68, 3)
};

static TAB_NUM t_lambda_6[] = {
  3, // locals
  2, // parameters
  LOCAL(2), // 69_3_key
  LOCAL(3), // 69_7_value
  // key = value
  var_std__key_value_pair, 2, LOCAL(2), LOCAL(3), 1, LOCAL(1),
  // add &self key = value
  var_add, 2, var_65_0_self, LOCAL(1), 1, var_65_0_self,
  // next
  var_next, 0, TAIL_CALL,
  POS(70, 17),
  POS(70, 7),
  POS(71, 7)
};

static TAB_NUM t_lambda_7[] = {
  0, // locals
  0, // parameters
  //  self
  LET, 1, var_65_0_self, TAIL_CALL,
  POS(72, 7)
};

static TAB_NUM t_func_std_types__hash_bag___difference[] = {
  1, // locals
  2, // parameters
  var_76_0_self,
  LOCAL(1), // 77_0_other
  // for_each other
  var_for_each, 3, LOCAL(1), lambda_8, lambda_9, TAIL_CALL,
  POS(79, 3)
};

static TAB_NUM t_lambda_8[] = {
  4, // locals
  2, // parameters
  LOCAL(3), // 80_3_key
  LOCAL(4), // 80_7_value
  // value
  var_std__negate, 1, LOCAL(4), 1, LOCAL(1),
  // key = -value
  var_std__key_value_pair, 2, LOCAL(3), LOCAL(1), 1, LOCAL(2),
  // add &self key = -value
  var_add, 2, var_76_0_self, LOCAL(2), 1, var_76_0_self,
  // next
  var_next, 0, TAIL_CALL,
  POS(81, 24),
  POS(81, 17),
  POS(81, 7),
  POS(82, 7)
};

static TAB_NUM t_lambda_9[] = {
  0, // locals
  0, // parameters
  //  self
  LET, 1, var_76_0_self, TAIL_CALL,
  POS(83, 7)
};

static TAB_NUM t_func_std__hash_bag[] = {
  1, // locals
  -1, // parameters
  REST_PARAMETER, LOCAL(1), // 89_0_pairs
  // to_hash_bag pairs
  var_to_hash_bag, 1, LOCAL(1), TAIL_CALL,
  POS(91, 3)
};

static TAB_NUM t_func_std_types__list___to_hash_bag[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 101_0_items
  // $table empty_hash_bag
  LET, 1, var_empty_hash_bag, 1, var_103_1_table,
  // for_each items
  var_for_each, 3, LOCAL(1), lambda_10, lambda_11, TAIL_CALL,
  POS(103, 3),
  POS(104, 3)
};

static TAB_NUM t_lambda_10[] = {
  3, // locals
  1, // parameters
  LOCAL(1), // 105_3_item
  // item $key $value
  LOCAL(1), 0, 2, LOCAL(2), LOCAL(3),
  // table(key) value
  var_103_1_table, 2, LOCAL(2), LOCAL(3), 1, var_103_1_table,
  // next
  var_next, 0, TAIL_CALL,
  POS(106, 7),
  POS(107, 8),
  POS(108, 7)
};

static TAB_NUM t_lambda_11[] = {
  0, // locals
  0, // parameters
  //  table
  LET, 1, var_103_1_table, TAIL_CALL,
  POS(109, 7)
};

static TAB_NUM t_module_entry[] = {
  0, // locals
  0, // parameters
  // register_type &deserializers std_types::hash_bag
  var_register_type, 2, var_deserializers, var_std_types__hash_bag, 1, var_deserializers,
  LET, 1, 0, TAIL_CALL,
  POS(116, 1)
};

static FUNKY_CONSTANT constants_table[] = {
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__hash_bag___add}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2}},
  {FLT_POSITIVE_INT64, 0, {.value = 1}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_value_is_undefined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_3}},
  {FLT_POSITIVE_INT64, 0, {.value = 0}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_4}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_5}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__hash_bag___merge}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_6}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_7}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__hash_bag___difference}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_8}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_9}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__hash_bag}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__list___to_hash_bag}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_10}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_11}},
  {FLT_STRING_8, 8, {.str_8 = "hash_bag"}},
  {FLT_FUNCTION, 0, {.tfunc = t_module_entry}}
};

static ATTRIBUTE_DEFINITION std_types__hash_bag__attributes[] = {
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
    FOT_DERIVED, 0, 5,
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
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "add\000", NULL,
    {.position = POS(39, 22)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "41_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "45_3_pair\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_a_key_value_pair\000", NULL,
    {.position = POS(48, 14)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "47_1_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "47_6_count\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if\000", NULL,
    {.position = POS(46, 7)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "51_1_value\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_undefined\000", NULL,
    {.position = POS(53, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "next\000", NULL,
    {.position = POS(55, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000", NULL,
    {.position = POS(57, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "equal\000std", NULL,
    {.position = POS(58, 21)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "undefined\000", NULL,
    {.position = POS(58, 42)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "update_if\000", NULL,
    {.position = POS(58, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "for_each\000", NULL,
    {.position = POS(44, 3)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "merge\000", NULL,
    {.position = POS(63, 22)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "65_0_self\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "key_value_pair\000std", NULL,
    {.position = POS(70, 17)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "difference\000", NULL,
    {.position = POS(74, 22)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "76_0_self\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "negate\000std", NULL,
    {.position = POS(81, 24)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "hash_bag\000std", NULL,
    {.const_idx = -func_std__hash_bag}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "to_hash_bag\000", NULL,
    {.position = POS(91, 3)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "list\000std_types", std_types__list__attributes,
    {.position = POS(93, 1)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "103_1_table\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_hash_bag\000", NULL,
    {.position = POS(103, 10)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "serialization_tag_of\000", NULL,
    {.position = POS(113, 22)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "empty_collection_of\000", NULL,
    {.position = POS(114, 22)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "deserializers\000", NULL,
    {.position = POS(116, 16)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "register_type\000", NULL,
    {.position = POS(116, 1)}
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
  .feature_flags = FEAT_POSITIONS|FEAT_INITIALIZER,
  .marker = 0,
  0, // number of required modules
  0, // number of defined namespaces
  1, // number of used namespaces
  21, // number of constants
  35, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  constants_table,
  variables_table,
};
