#include <stddef.h>
#include <stdint.h>

#include "runtime/common.h"
#include "runtime/builtins.h"
#include "runtime/fko.h"
#include "runtime/memory.h"

enum {
  func_std__keys_of = -1,
  lambda_1 = -2,
  func_std__values_of = -3,
  lambda_2 = -4,
  func_std_types__table___merge = -5,
  lambda_merge_function_is_defined = -6,
  lambda_3 = -7,
  lambda_my_value_is_defined = -8,
  lambda_4 = -9,
  lambda_5 = -10,
  lambda_6 = -11,
  lambda_7 = -12,
  lambda_8 = -13,
  func_std_types__table___serialize = -14,
  lambda_9 = -15,
  num_2 = -16,
  lambda_10 = -17,
  lambda_self = -18,
  string_1 = -19,
  string_2 = -20,
  string_3 = -21,
  lambda_11 = -22,
  func_std__create_index_table = -23,
  lambda_12 = -24,
  lambda_13 = -25,
  func_std_types__table___to_list = -26,
  lambda_14 = -27,
  func_std_types__table___deserializer_of = -28,
  num_1 = -29,
  lambda_15 = -30,
  lambda_16 = -31
};

enum {
  var__START = FIRST_VAR-1,
  var_std__is_a_table, // attribute
  var_std__assign, // extern
  var_std_types__object, // extern
  var_is_a_table, // extern polymorphic
  var_false, // extern
  var_std_types__table, // derived
  var_true, // extern
  var_std_types__collection, // extern
  var_std__keys_of, // initialized
  var_list, // extern
  var_append, // extern
  var_empty_list, // extern
  var_map_reduce, // extern
  var_std__values_of, // initialized
  var_merge, // extern polymorphic
  var_67_0_self, // dynamic
  var_68_0_other, // dynamic
  var_69_0_merge_function, // dynamic
  var_undefined, // extern
  var_is_defined, // extern
  var_74_3_key, // dynamic
  var_74_7_value, // dynamic
  var_75_1_my_value, // dynamic
  var_next, // extern
  var_if, // extern
  var_for_each, // extern
  var_serialize, // extern polymorphic
  var_97_0_indent, // dynamic
  var_std__plus, // extern
  var_99_1_new_indent, // dynamic
  var_serialization_tag_of, // extern
  var_length_of, // extern
  var_std__times, // extern
  var_109_1_header, // dynamic
  var_std__string, // extern
  var_tabs_and_spaces, // extern
  var_update_if, // extern
  var_std__create_index_table, // initialized
  var_120_0_attribute_of, // dynamic
  var_122_1_index_table, // dynamic
  var_empty_hash_table, // extern
  var_to_list, // extern polymorphic
  var_deserializer_of, // extern polymorphic
  var_142_0_items, // dynamic
  var_144_1_obj, // dynamic
  var_empty_collection_of, // extern
  var_std__shift_right, // extern
  var_std__minus, // extern
  var_from_to, // extern
  var__END
};


static TAB_NUM t_func_std__keys_of[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 42_16_collection
  // map_reduce collection
  var_map_reduce, 4, LOCAL(1), lambda_1, var_append, var_empty_list, TAIL_CALL,
  POS(43, 3)
};

static TAB_NUM t_lambda_1[] = {
  2, // locals
  2, // parameters
  LOCAL(2), // 44_3_key
  LOCAL(1),
  // list key
  var_list, 1, LOCAL(2), TAIL_CALL,
  POS(44, 20)
};

static TAB_NUM t_func_std__values_of[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 48_18_collection
  // map_reduce collection
  var_map_reduce, 4, LOCAL(1), lambda_2, var_append, var_empty_list, TAIL_CALL,
  POS(49, 3)
};

static TAB_NUM t_lambda_2[] = {
  2, // locals
  2, // parameters
  LOCAL(1),
  LOCAL(2), // 50_8_value
  // list value
  var_list, 1, LOCAL(2), TAIL_CALL,
  POS(50, 20)
};

static TAB_NUM t_func_std_types__table___merge[] = {
  1, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_67_0_self,
  MANDATORY_PARAMETER, var_68_0_other,
  var_undefined, var_69_0_merge_function,
  // is_defined:
  var_is_defined, 1, var_69_0_merge_function, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_merge_function_is_defined, lambda_6, TAIL_CALL,
  POS(72, 20),
  POS(71, 3)
};

static TAB_NUM t_lambda_merge_function_is_defined[] = {
  0, // locals
  0, // parameters
  // for_each other
  var_for_each, 3, var_68_0_other, lambda_3, lambda_5, TAIL_CALL,
  POS(73, 7)
};

static TAB_NUM t_lambda_3[] = {
  1, // locals
  2, // parameters
  var_74_3_key,
  var_74_7_value,
  // $my_value self(key)
  var_67_0_self, 1, var_74_3_key, 1, var_75_1_my_value,
  // is_defined:
  var_is_defined, 1, var_75_1_my_value, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_my_value_is_defined, lambda_4, TAIL_CALL,
  POS(75, 11),
  POS(77, 22),
  POS(76, 11)
};

static TAB_NUM t_lambda_my_value_is_defined[] = {
  2, // locals
  0, // parameters
  // !self(key) merge_function(my_value value)
  var_69_0_merge_function, 2, var_75_1_my_value, var_74_7_value, 1, LOCAL(2),
  // self(key) merge_function(my_value value)
  var_67_0_self, 2, var_74_3_key, LOCAL(2), 1, var_67_0_self,
  // next
  var_next, 0, TAIL_CALL,
  POS(78, 15),
  POS(78, 16),
  POS(79, 15)
};

static TAB_NUM t_lambda_4[] = {
  0, // locals
  0, // parameters
  // self(key) value
  var_67_0_self, 2, var_74_3_key, var_74_7_value, 1, var_67_0_self,
  // next
  var_next, 0, TAIL_CALL,
  POS(81, 16),
  POS(82, 15)
};

static TAB_NUM t_lambda_5[] = {
  0, // locals
  0, // parameters
  //  self
  LET, 1, var_67_0_self, TAIL_CALL,
  POS(83, 11)
};

static TAB_NUM t_lambda_6[] = {
  0, // locals
  0, // parameters
  // for_each other
  var_for_each, 3, var_68_0_other, lambda_7, lambda_8, TAIL_CALL,
  POS(85, 7)
};

static TAB_NUM t_lambda_7[] = {
  2, // locals
  2, // parameters
  LOCAL(1), // 86_3_key
  LOCAL(2), // 86_7_value
  // self(key) value
  var_67_0_self, 2, LOCAL(1), LOCAL(2), 1, var_67_0_self,
  // next
  var_next, 0, TAIL_CALL,
  POS(87, 12),
  POS(88, 11)
};

static TAB_NUM t_lambda_8[] = {
  0, // locals
  0, // parameters
  //  self
  LET, 1, var_67_0_self, TAIL_CALL,
  POS(89, 11)
};

static TAB_NUM t_func_std_types__table___serialize[] = {
  5, // locals
  -2, // parameters
  MANDATORY_PARAMETER, LOCAL(4), // 96_0_self
  var_undefined, var_97_0_indent,
  // is_defined
  var_is_defined, 1, var_97_0_indent, 1, LOCAL(1),
  // $new_indent
  var_if, 3, LOCAL(1), lambda_9, lambda_10, 1, var_99_1_new_indent,
  // map_reduce $contents
  var_map_reduce, 4, LOCAL(4), lambda_self, var_append, string_1, 1, LOCAL(5),
  // serialization_tag_of(self)) <@(2*length_of(self))>
  var_serialization_tag_of, 1, LOCAL(4), 1, LOCAL(1),
  // length_of(self))>
  var_length_of, 1, LOCAL(4), 1, LOCAL(2),
  // 2*length_of(self))>
  var_std__times, 2, num_2, LOCAL(2), 1, LOCAL(3),
  // $header
  var_std__string, 4, LOCAL(1), string_2, LOCAL(3), string_3, 1, var_109_1_header,
  // is_defined &header -> append(tabs_and_spaces(indent) header)
  var_is_defined, 1, var_97_0_indent, 1, LOCAL(1),
  // update_if indent.is_defined &header -> append(tabs_and_spaces(indent) header)
  var_update_if, 3, LOCAL(1), var_109_1_header, lambda_11, 1, var_109_1_header,
  // append header contents
  var_append, 2, var_109_1_header, LOCAL(5), TAIL_CALL,
  POS(101, 14),
  POS(99, 3),
  POS(104, 3),
  POS(111, 9),
  POS(111, 42),
  POS(111, 40),
  POS(109, 3),
  POS(112, 20),
  POS(112, 3),
  POS(113, 3)
};

static TAB_NUM t_lambda_9[] = {
  1, // locals
  0, // parameters
  // indent+2
  var_std__plus, 2, var_97_0_indent, num_2, 1, LOCAL(1),
  //  indent+2
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(102, 10),
  POS(102, 9)
};

static TAB_NUM t_lambda_10[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(103, 9)
};

static TAB_NUM t_lambda_self[] = {
  4, // locals
  2, // parameters
  LOCAL(3), // 105_7_key
  LOCAL(4), // 105_11_value
  // serialize(key new_indent) serialize(value new_indent)
  var_serialize, 2, LOCAL(3), var_99_1_new_indent, 1, LOCAL(1),
  // serialize(value new_indent)
  var_serialize, 2, LOCAL(4), var_99_1_new_indent, 1, LOCAL(2),
  // append serialize(key new_indent) serialize(value new_indent)
  var_append, 2, LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(106, 14),
  POS(106, 40),
  POS(106, 7)
};

static TAB_NUM t_lambda_11[] = {
  2, // locals
  0, // parameters
  // tabs_and_spaces(indent) header)
  var_tabs_and_spaces, 1, var_97_0_indent, 1, LOCAL(1),
  // append(tabs_and_spaces(indent) header)
  var_append, 2, LOCAL(1), var_109_1_header, 1, LOCAL(2),
  //  append(tabs_and_spaces(indent) header)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(112, 49),
  POS(112, 42),
  POS(112, 41)
};

static TAB_NUM t_func_std__create_index_table[] = {
  1, // locals
  2, // parameters
  LOCAL(1), // 119_0_items
  var_120_0_attribute_of,
  // $index_table empty_hash_table
  LET, 1, var_empty_hash_table, 1, var_122_1_index_table,
  // for_each items
  var_for_each, 3, LOCAL(1), lambda_12, lambda_13, TAIL_CALL,
  POS(122, 3),
  POS(123, 3)
};

static TAB_NUM t_lambda_12[] = {
  4, // locals
  2, // parameters
  LOCAL(3), // 124_3_idx
  LOCAL(4), // 124_7_item
  // attribute_of(item)) idx
  var_120_0_attribute_of, 1, LOCAL(4), 1, LOCAL(2),
  // index_table(attribute_of(item)) idx
  var_122_1_index_table, 2, LOCAL(2), LOCAL(3), 1, var_122_1_index_table,
  // next
  var_next, 0, TAIL_CALL,
  POS(125, 20),
  POS(125, 8),
  POS(126, 7)
};

static TAB_NUM t_lambda_13[] = {
  0, // locals
  0, // parameters
  //  index_table
  LET, 1, var_122_1_index_table, TAIL_CALL,
  POS(127, 7)
};

static TAB_NUM t_func_std_types__table___to_list[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 131_0_self
  // map_reduce
  var_map_reduce, 4, LOCAL(1), lambda_14, var_append, var_empty_list, TAIL_CALL,
  POS(133, 3)
};

static TAB_NUM t_lambda_14[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 135_3_item
  // list(item)
  var_list, 1, LOCAL(2), 1, LOCAL(1),
  // -> list(item)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(135, 17),
  POS(135, 14)
};

static TAB_NUM t_func_std_types__table___deserializer_of[] = {
  3, // locals
  2, // parameters
  LOCAL(2), // 141_0_type
  var_142_0_items,
  // $obj empty_collection_of(type)
  var_empty_collection_of, 1, LOCAL(2), 1, var_144_1_obj,
  // length_of(items) >> 1
  var_length_of, 1, var_142_0_items, 1, LOCAL(1),
  // $n length_of(items) >> 1
  var_std__shift_right, 2, LOCAL(1), num_1, 1, LOCAL(3),
  // from_to 1 n
  var_from_to, 4, num_1, LOCAL(3), lambda_15, lambda_16, TAIL_CALL,
  POS(144, 3),
  POS(145, 6),
  POS(145, 3),
  POS(146, 3)
};

static TAB_NUM t_lambda_15[] = {
  5, // locals
  1, // parameters
  LOCAL(3), // 147_3_i
  // 2*i-1)
  var_std__times, 2, num_2, LOCAL(3), 1, LOCAL(1),
  // 2*i-1)
  var_std__minus, 2, LOCAL(1), num_1, 1, LOCAL(2),
  // $key items(2*i-1)
  var_142_0_items, 1, LOCAL(2), 1, LOCAL(4),
  // 2*i)
  var_std__times, 2, num_2, LOCAL(3), 1, LOCAL(1),
  // $value items(2*i)
  var_142_0_items, 1, LOCAL(1), 1, LOCAL(5),
  // obj(key) value
  var_144_1_obj, 2, LOCAL(4), LOCAL(5), 1, var_144_1_obj,
  // next
  var_next, 0, TAIL_CALL,
  POS(148, 18),
  POS(148, 18),
  POS(148, 7),
  POS(149, 20),
  POS(149, 7),
  POS(150, 8),
  POS(151, 7)
};

static TAB_NUM t_lambda_16[] = {
  0, // locals
  0, // parameters
  //  obj
  LET, 1, var_144_1_obj, TAIL_CALL,
  POS(152, 7)
};

static FUNKY_CONSTANT constants_table[] = {
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__keys_of}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__values_of}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__table___merge}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_merge_function_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_3}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_my_value_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_4}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_5}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_6}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_7}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_8}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__table___serialize}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_9}},
  {FLT_POSITIVE_INT64, 0, {.value = 2}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_10}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_self}},
  {FLT_STRING_8, 0, {.str_8 = ""}},
  {FLT_STRING_8, 2, {.str_8 = " <"}},
  {FLT_STRING_8, 2, {.str_8 = ">\012"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_11}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__create_index_table}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_12}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_13}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__table___to_list}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_14}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__table___deserializer_of}},
  {FLT_POSITIVE_INT64, 0, {.value = 1}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_15}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_16}}
};

static ATTRIBUTE_DEFINITION std_types__object__attributes[] = {
  {-var_is_a_table, -var_false}
};

static ATTRIBUTE_DEFINITION std_types__table__attributes[] = {
  {-var_is_a_table, -var_true},
  {var_merge, -func_std_types__table___merge},
  {var_serialize, -func_std_types__table___serialize},
  {var_to_list, -func_std_types__table___to_list},
  {-var_deserializer_of, -func_std_types__table___deserializer_of}
};

static FUNKY_VARIABLE variables_table[] = {
  {
    FOT_POLYMORPHIC, 0, 0,
    "is_a_table\000std", NULL,
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
    "is_a_table\000", NULL,
    {.position = POS(28, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "false\000", NULL,
    {.position = POS(28, 31)}
  },
  {
    FOT_DERIVED, 0, 5,
    "table\000std_types", std_types__table__attributes,
    {"collection\000std_types"}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "true\000", NULL,
    {.position = POS(29, 30)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "collection\000std_types", NULL,
    {.position = POS(31, 19)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "keys_of\000std", NULL,
    {.const_idx = -func_std__keys_of}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "list\000", NULL,
    {.position = POS(44, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "append\000", NULL,
    {.position = POS(45, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_list\000", NULL,
    {.position = POS(46, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "map_reduce\000", NULL,
    {.position = POS(43, 3)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "values_of\000std", NULL,
    {.const_idx = -func_std__values_of}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "merge\000", NULL,
    {.position = POS(57, 19)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "67_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "68_0_other\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "69_0_merge_function\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "undefined\000", NULL,
    {.position = POS(69, 22)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_defined\000", NULL,
    {.position = POS(72, 20)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "74_3_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "74_7_value\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "75_1_my_value\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "next\000", NULL,
    {.position = POS(79, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if\000", NULL,
    {.position = POS(76, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "for_each\000", NULL,
    {.position = POS(73, 7)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "serialize\000", NULL,
    {.position = POS(94, 19)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "97_0_indent\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000std", NULL,
    {.position = POS(102, 10)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "99_1_new_indent\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "serialization_tag_of\000", NULL,
    {.position = POS(111, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "length_of\000", NULL,
    {.position = POS(111, 42)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "times\000std", NULL,
    {.position = POS(111, 40)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "109_1_header\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "string\000std", NULL,
    {.position = POS(110, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "tabs_and_spaces\000", NULL,
    {.position = POS(112, 49)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "update_if\000", NULL,
    {.position = POS(112, 3)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "create_index_table\000std", NULL,
    {.const_idx = -func_std__create_index_table}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "120_0_attribute_of\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "122_1_index_table\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_hash_table\000", NULL,
    {.position = POS(122, 16)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "to_list\000", NULL,
    {.position = POS(129, 19)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "deserializer_of\000", NULL,
    {.position = POS(139, 19)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "142_0_items\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "144_1_obj\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_collection_of\000", NULL,
    {.position = POS(144, 8)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "shift_right\000std", NULL,
    {.position = POS(145, 6)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "minus\000std", NULL,
    {.position = POS(148, 18)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "from_to\000", NULL,
    {.position = POS(146, 3)}
  }
};

static FUNKY_NAMESPACE used_namespaces[] = {
  {"std", 1, 0}
};

FUNKY_MODULE module__basic__types__collections__tables__table = {
  "_basic__types__collections__tables__table", // module name
  "basic/types/collections/tables/table.fky", // module filename
  .major_version = 0,
  .minor_version = 0,
  .feature_flags = FEAT_POSITIONS,
  .marker = 0,
  0, // number of required modules
  0, // number of defined namespaces
  1, // number of used namespaces
  31, // number of constants
  49, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  constants_table,
  variables_table,
};
