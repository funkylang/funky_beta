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
  func_std_types__table___new = -14,
  lambda_9 = -15,
  lambda_10 = -16,
  func_std_types__table___serialize = -17,
  lambda_11 = -18,
  num_2 = -19,
  lambda_12 = -20,
  lambda_self = -21,
  string_1 = -22,
  string_2 = -23,
  string_3 = -24,
  lambda_13 = -25,
  func_std__create_index_table = -26,
  lambda_14 = -27,
  lambda_15 = -28,
  func_std_types__table___to_list = -29,
  lambda_16 = -30,
  func_std_types__table___deserializer_of = -31,
  num_1 = -32,
  lambda_17 = -33,
  lambda_18 = -34
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
  var_66_0_self, // dynamic
  var_67_0_other, // dynamic
  var_68_0_merge_function, // dynamic
  var_undefined, // extern
  var_is_defined, // extern
  var_73_3_key, // dynamic
  var_73_7_value, // dynamic
  var_74_1_my_value, // dynamic
  var_next, // extern
  var_if, // extern
  var_for_each, // extern
  var_new, // extern polymorphic
  var_94_0_self, // dynamic
  var_serialize, // extern polymorphic
  var_109_0_indent, // dynamic
  var_std__plus, // extern
  var_111_1_new_indent, // dynamic
  var_serialization_tag_of, // extern
  var_length_of, // extern
  var_std__times, // extern
  var_121_1_header, // dynamic
  var_std__string, // extern
  var_tabs_and_spaces, // extern
  var_update_if, // extern
  var_std__create_index_table, // initialized
  var_132_0_attribute_of, // dynamic
  var_134_1_index_table, // dynamic
  var_empty_hash_table, // extern
  var_to_list, // extern polymorphic
  var_deserializer_of, // extern polymorphic
  var_154_0_items, // dynamic
  var_156_1_obj, // dynamic
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
  MANDATORY_PARAMETER, var_66_0_self,
  MANDATORY_PARAMETER, var_67_0_other,
  var_undefined, var_68_0_merge_function,
  // is_defined:
  var_is_defined, 1, var_68_0_merge_function, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_merge_function_is_defined, lambda_6, TAIL_CALL,
  POS(71, 20),
  POS(70, 3)
};

static TAB_NUM t_lambda_merge_function_is_defined[] = {
  0, // locals
  0, // parameters
  // for_each other
  var_for_each, 3, var_67_0_other, lambda_3, lambda_5, TAIL_CALL,
  POS(72, 7)
};

static TAB_NUM t_lambda_3[] = {
  1, // locals
  2, // parameters
  var_73_3_key,
  var_73_7_value,
  // $my_value self(key)
  var_66_0_self, 1, var_73_3_key, 1, var_74_1_my_value,
  // is_defined:
  var_is_defined, 1, var_74_1_my_value, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_my_value_is_defined, lambda_4, TAIL_CALL,
  POS(74, 11),
  POS(76, 22),
  POS(75, 11)
};

static TAB_NUM t_lambda_my_value_is_defined[] = {
  2, // locals
  0, // parameters
  // !self(key) merge_function(my_value value)
  var_68_0_merge_function, 2, var_74_1_my_value, var_73_7_value, 1, LOCAL(2),
  // self(key) merge_function(my_value value)
  var_66_0_self, 2, var_73_3_key, LOCAL(2), 1, var_66_0_self,
  // next
  var_next, 0, TAIL_CALL,
  POS(77, 15),
  POS(77, 16),
  POS(78, 15)
};

static TAB_NUM t_lambda_4[] = {
  0, // locals
  0, // parameters
  // self(key) value
  var_66_0_self, 2, var_73_3_key, var_73_7_value, 1, var_66_0_self,
  // next
  var_next, 0, TAIL_CALL,
  POS(80, 16),
  POS(81, 15)
};

static TAB_NUM t_lambda_5[] = {
  0, // locals
  0, // parameters
  //  self
  LET, 1, var_66_0_self, TAIL_CALL,
  POS(82, 11)
};

static TAB_NUM t_lambda_6[] = {
  0, // locals
  0, // parameters
  // for_each other
  var_for_each, 3, var_67_0_other, lambda_7, lambda_8, TAIL_CALL,
  POS(84, 7)
};

static TAB_NUM t_lambda_7[] = {
  2, // locals
  2, // parameters
  LOCAL(1), // 85_3_key
  LOCAL(2), // 85_7_value
  // self(key) value
  var_66_0_self, 2, LOCAL(1), LOCAL(2), 1, var_66_0_self,
  // next
  var_next, 0, TAIL_CALL,
  POS(86, 12),
  POS(87, 11)
};

static TAB_NUM t_lambda_8[] = {
  0, // locals
  0, // parameters
  //  self
  LET, 1, var_66_0_self, TAIL_CALL,
  POS(88, 11)
};

static TAB_NUM t_func_std_types__table___new[] = {
  1, // locals
  -2, // parameters
  MANDATORY_PARAMETER, var_94_0_self,
  REST_PARAMETER, LOCAL(1), // 95_0_pairs
  // for_each pairs
  var_for_each, 3, LOCAL(1), lambda_9, lambda_10, TAIL_CALL,
  POS(97, 3)
};

static TAB_NUM t_lambda_9[] = {
  3, // locals
  1, // parameters
  LOCAL(1), // 98_3_pair
  // pair $key $value
  LOCAL(1), 0, 2, LOCAL(2), LOCAL(3),
  // self(key) value
  var_94_0_self, 2, LOCAL(2), LOCAL(3), 1, var_94_0_self,
  // next
  var_next, 0, TAIL_CALL,
  POS(99, 7),
  POS(100, 8),
  POS(101, 7)
};

static TAB_NUM t_lambda_10[] = {
  0, // locals
  0, // parameters
  //  self
  LET, 1, var_94_0_self, TAIL_CALL,
  POS(102, 7)
};

static TAB_NUM t_func_std_types__table___serialize[] = {
  5, // locals
  -2, // parameters
  MANDATORY_PARAMETER, LOCAL(4), // 108_0_self
  var_undefined, var_109_0_indent,
  // is_defined
  var_is_defined, 1, var_109_0_indent, 1, LOCAL(1),
  // $new_indent
  var_if, 3, LOCAL(1), lambda_11, lambda_12, 1, var_111_1_new_indent,
  // map_reduce $contents
  var_map_reduce, 4, LOCAL(4), lambda_self, var_append, string_1, 1, LOCAL(5),
  // serialization_tag_of(self)) <@(2*length_of(self))>
  var_serialization_tag_of, 1, LOCAL(4), 1, LOCAL(1),
  // length_of(self))>
  var_length_of, 1, LOCAL(4), 1, LOCAL(2),
  // 2*length_of(self))>
  var_std__times, 2, num_2, LOCAL(2), 1, LOCAL(3),
  // $header
  var_std__string, 4, LOCAL(1), string_2, LOCAL(3), string_3, 1, var_121_1_header,
  // is_defined &header -> append(tabs_and_spaces(indent) header)
  var_is_defined, 1, var_109_0_indent, 1, LOCAL(1),
  // update_if indent.is_defined &header -> append(tabs_and_spaces(indent) header)
  var_update_if, 3, LOCAL(1), var_121_1_header, lambda_13, 1, var_121_1_header,
  // append header contents
  var_append, 2, var_121_1_header, LOCAL(5), TAIL_CALL,
  POS(113, 14),
  POS(111, 3),
  POS(116, 3),
  POS(123, 9),
  POS(123, 42),
  POS(123, 40),
  POS(121, 3),
  POS(124, 20),
  POS(124, 3),
  POS(125, 3)
};

static TAB_NUM t_lambda_11[] = {
  1, // locals
  0, // parameters
  // indent+2
  var_std__plus, 2, var_109_0_indent, num_2, 1, LOCAL(1),
  //  indent+2
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(114, 10),
  POS(114, 9)
};

static TAB_NUM t_lambda_12[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(115, 9)
};

static TAB_NUM t_lambda_self[] = {
  4, // locals
  2, // parameters
  LOCAL(3), // 117_7_key
  LOCAL(4), // 117_11_value
  // serialize(key new_indent) serialize(value new_indent)
  var_serialize, 2, LOCAL(3), var_111_1_new_indent, 1, LOCAL(1),
  // serialize(value new_indent)
  var_serialize, 2, LOCAL(4), var_111_1_new_indent, 1, LOCAL(2),
  // append serialize(key new_indent) serialize(value new_indent)
  var_append, 2, LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(118, 14),
  POS(118, 40),
  POS(118, 7)
};

static TAB_NUM t_lambda_13[] = {
  2, // locals
  0, // parameters
  // tabs_and_spaces(indent) header)
  var_tabs_and_spaces, 1, var_109_0_indent, 1, LOCAL(1),
  // append(tabs_and_spaces(indent) header)
  var_append, 2, LOCAL(1), var_121_1_header, 1, LOCAL(2),
  //  append(tabs_and_spaces(indent) header)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(124, 49),
  POS(124, 42),
  POS(124, 41)
};

static TAB_NUM t_func_std__create_index_table[] = {
  1, // locals
  2, // parameters
  LOCAL(1), // 131_0_items
  var_132_0_attribute_of,
  // $index_table empty_hash_table
  LET, 1, var_empty_hash_table, 1, var_134_1_index_table,
  // for_each items
  var_for_each, 3, LOCAL(1), lambda_14, lambda_15, TAIL_CALL,
  POS(134, 3),
  POS(135, 3)
};

static TAB_NUM t_lambda_14[] = {
  4, // locals
  2, // parameters
  LOCAL(3), // 136_3_idx
  LOCAL(4), // 136_7_item
  // attribute_of(item)) idx
  var_132_0_attribute_of, 1, LOCAL(4), 1, LOCAL(2),
  // index_table(attribute_of(item)) idx
  var_134_1_index_table, 2, LOCAL(2), LOCAL(3), 1, var_134_1_index_table,
  // next
  var_next, 0, TAIL_CALL,
  POS(137, 20),
  POS(137, 8),
  POS(138, 7)
};

static TAB_NUM t_lambda_15[] = {
  0, // locals
  0, // parameters
  //  index_table
  LET, 1, var_134_1_index_table, TAIL_CALL,
  POS(139, 7)
};

static TAB_NUM t_func_std_types__table___to_list[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 143_0_self
  // map_reduce
  var_map_reduce, 4, LOCAL(1), lambda_16, var_append, var_empty_list, TAIL_CALL,
  POS(145, 3)
};

static TAB_NUM t_lambda_16[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 147_3_item
  // list(item)
  var_list, 1, LOCAL(2), 1, LOCAL(1),
  // -> list(item)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(147, 17),
  POS(147, 14)
};

static TAB_NUM t_func_std_types__table___deserializer_of[] = {
  3, // locals
  2, // parameters
  LOCAL(2), // 153_0_type
  var_154_0_items,
  // $obj empty_collection_of(type)
  var_empty_collection_of, 1, LOCAL(2), 1, var_156_1_obj,
  // length_of(items) >> 1
  var_length_of, 1, var_154_0_items, 1, LOCAL(1),
  // $n length_of(items) >> 1
  var_std__shift_right, 2, LOCAL(1), num_1, 1, LOCAL(3),
  // from_to 1 n
  var_from_to, 4, num_1, LOCAL(3), lambda_17, lambda_18, TAIL_CALL,
  POS(156, 3),
  POS(157, 6),
  POS(157, 3),
  POS(158, 3)
};

static TAB_NUM t_lambda_17[] = {
  5, // locals
  1, // parameters
  LOCAL(3), // 159_3_i
  // 2*i-1)
  var_std__times, 2, num_2, LOCAL(3), 1, LOCAL(1),
  // 2*i-1)
  var_std__minus, 2, LOCAL(1), num_1, 1, LOCAL(2),
  // $key items(2*i-1)
  var_154_0_items, 1, LOCAL(2), 1, LOCAL(4),
  // 2*i)
  var_std__times, 2, num_2, LOCAL(3), 1, LOCAL(1),
  // $value items(2*i)
  var_154_0_items, 1, LOCAL(1), 1, LOCAL(5),
  // obj(key) value
  var_156_1_obj, 2, LOCAL(4), LOCAL(5), 1, var_156_1_obj,
  // next
  var_next, 0, TAIL_CALL,
  POS(160, 18),
  POS(160, 18),
  POS(160, 7),
  POS(161, 20),
  POS(161, 7),
  POS(162, 8),
  POS(163, 7)
};

static TAB_NUM t_lambda_18[] = {
  0, // locals
  0, // parameters
  //  obj
  LET, 1, var_156_1_obj, TAIL_CALL,
  POS(164, 7)
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
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__table___new}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_9}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_10}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__table___serialize}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_11}},
  {FLT_POSITIVE_INT64, 0, {.value = 2}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_12}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_self}},
  {FLT_STRING_8, 0, {.str_8 = ""}},
  {FLT_STRING_8, 2, {.str_8 = " <"}},
  {FLT_STRING_8, 2, {.str_8 = ">\012"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_13}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__create_index_table}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_14}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_15}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__table___to_list}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_16}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__table___deserializer_of}},
  {FLT_POSITIVE_INT64, 0, {.value = 1}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_17}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_18}}
};

static ATTRIBUTE_DEFINITION std_types__object__attributes[] = {
  {-var_is_a_table, -var_false}
};

static ATTRIBUTE_DEFINITION std_types__table__attributes[] = {
  {-var_is_a_table, -var_true},
  {var_merge, -func_std_types__table___merge},
  {var_new, -func_std_types__table___new},
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
    FOT_DERIVED, 0, 6,
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
    {.position = POS(56, 19)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "66_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "67_0_other\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "68_0_merge_function\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "undefined\000", NULL,
    {.position = POS(68, 22)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_defined\000", NULL,
    {.position = POS(71, 20)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "73_3_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "73_7_value\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "74_1_my_value\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "next\000", NULL,
    {.position = POS(78, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if\000", NULL,
    {.position = POS(75, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "for_each\000", NULL,
    {.position = POS(72, 7)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "new\000", NULL,
    {.position = POS(92, 19)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "94_0_self\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "serialize\000", NULL,
    {.position = POS(106, 19)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "109_0_indent\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000std", NULL,
    {.position = POS(114, 10)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "111_1_new_indent\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "serialization_tag_of\000", NULL,
    {.position = POS(123, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "length_of\000", NULL,
    {.position = POS(123, 42)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "times\000std", NULL,
    {.position = POS(123, 40)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "121_1_header\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "string\000std", NULL,
    {.position = POS(122, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "tabs_and_spaces\000", NULL,
    {.position = POS(124, 49)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "update_if\000", NULL,
    {.position = POS(124, 3)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "create_index_table\000std", NULL,
    {.const_idx = -func_std__create_index_table}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "132_0_attribute_of\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "134_1_index_table\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_hash_table\000", NULL,
    {.position = POS(134, 16)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "to_list\000", NULL,
    {.position = POS(141, 19)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "deserializer_of\000", NULL,
    {.position = POS(151, 19)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "154_0_items\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "156_1_obj\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_collection_of\000", NULL,
    {.position = POS(156, 8)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "shift_right\000std", NULL,
    {.position = POS(157, 6)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "minus\000std", NULL,
    {.position = POS(160, 18)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "from_to\000", NULL,
    {.position = POS(158, 3)}
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
  34, // number of constants
  51, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  constants_table,
  variables_table,
};
