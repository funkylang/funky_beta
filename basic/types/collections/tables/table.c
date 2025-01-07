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
  func_std_types__table___difference = -14,
  lambda_9 = -15,
  lambda_10 = -16,
  func_std_types__table___add = -17,
  lambda_11 = -18,
  lambda_12 = -19,
  func_std_types__table___debug__to_string = -20,
  num_0 = -21,
  num_1 = -22,
  lambda_13 = -23,
  lambda_14 = -24,
  str_empty = -25,
  string_1 = -26,
  lambda_15 = -27,
  lambda_16 = -28,
  lambda_17 = -29,
  string_2 = -30,
  str__with_1_item = -31,
  lambda_18 = -32,
  str__with = -33,
  str__items = -34,
  lambda_19 = -35,
  lambda_20 = -36,
  num_2 = -37,
  num_4 = -38,
  lambda_self = -39,
  chr_10 = -40,
  lambda_21 = -41,
  string_3 = -42,
  lambda_22 = -43,
  string_4 = -44,
  string_5 = -45,
  func_std_types__table___serialize = -46,
  lambda_23 = -47,
  lambda_24 = -48,
  lambda_2_self = -49,
  string_6 = -50,
  string_7 = -51,
  lambda_25 = -52,
  func_std__create_index_table = -53,
  lambda_26 = -54,
  lambda_27 = -55,
  func_std_types__table___to_list = -56,
  lambda_28 = -57,
  func_std__swap_key_and_value = -58,
  lambda_29 = -59,
  lambda_30 = -60,
  func_std_types__table___deserializer_of = -61,
  lambda_31 = -62,
  lambda_32 = -63
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
  var_73_5_self, // dynamic
  var_74_5_other, // dynamic
  var_75_5_merge_function, // dynamic
  var_undefined, // extern
  var_is_defined, // extern
  var_80_12_key, // dynamic
  var_80_16_value, // dynamic
  var_81_12_my_value, // dynamic
  var_next, // extern
  var_if, // extern
  var_for_each, // extern
  var_difference, // extern polymorphic
  var_99_5_self, // dynamic
  var_101_5_difference_function, // dynamic
  var_add, // extern polymorphic
  var_113_5_self, // dynamic
  var_debug__to_string, // extern polymorphic
  var_127_5_self, // dynamic
  var_128_5_indent, // dynamic
  var_129_5_depth, // dynamic
  var_131_4_tag, // dynamic
  var_serialization_tag_of, // extern
  var_is_empty, // extern
  var_std__string, // extern
  var_std__less, // extern
  var_std__not, // extern
  var_135_8_len, // dynamic
  var_length_of, // extern
  var_std__equal, // extern
  var_141_8_key_indent, // dynamic
  var_std__plus, // extern
  var_142_8_value_indent, // dynamic
  var_145_12_key_text, // dynamic
  var_std__minus, // extern
  var_146_12_value_text, // dynamic
  var_trim, // extern
  var_tabs_and_spaces, // extern
  var_cond, // extern
  var_serialize, // extern polymorphic
  var_162_5_indent, // dynamic
  var_164_4_new_indent, // dynamic
  var_std__times, // extern
  var_174_4_header, // dynamic
  var_update_if, // extern
  var_std__create_index_table, // initialized
  var_185_5_attribute_of, // dynamic
  var_187_4_index_table, // dynamic
  var_empty_hash_table, // extern
  var_to_list, // extern polymorphic
  var_std__swap_key_and_value, // initialized
  var_205_4_reverse_table, // dynamic
  var_deserializer_of, // extern polymorphic
  var_215_5_items, // dynamic
  var_217_4_obj, // dynamic
  var_empty_collection_of, // extern
  var_std__shift_right, // extern
  var_from_to, // extern
  var__END
};


static TAB_NUM t_func_std__keys_of[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 49_17_collection
  // map_reduce collection
  var_map_reduce, 4, LOCAL(1), lambda_1, var_append, var_empty_list, TAIL_CALL,
  POS(50, 3),
  LOCAL(1)
};

static FUNCTION_INFO i_func_std__keys_of = {
  t_func_std__keys_of, NULL, 1, 1,
  {"49_17_collection\000"}
};

static TAB_NUM t_lambda_1[] = {
  2, // locals
  2, // parameters
  LOCAL(2), // 51_8_key
  LOCAL(1),
  // list key
  var_list, 1, LOCAL(2), TAIL_CALL,
  POS(51, 20),
  LOCAL(2)
};

static FUNCTION_INFO i_lambda_1 = {
  t_lambda_1, NULL, 1, 1,
  {"51_8_key\000"}
};

static TAB_NUM t_func_std__values_of[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 55_19_collection
  // map_reduce collection
  var_map_reduce, 4, LOCAL(1), lambda_2, var_append, var_empty_list, TAIL_CALL,
  POS(56, 3),
  LOCAL(1)
};

static FUNCTION_INFO i_func_std__values_of = {
  t_func_std__values_of, NULL, 1, 1,
  {"55_19_collection\000"}
};

static TAB_NUM t_lambda_2[] = {
  2, // locals
  2, // parameters
  LOCAL(1),
  LOCAL(2), // 57_13_value
  // list value
  var_list, 1, LOCAL(2), TAIL_CALL,
  POS(57, 20),
  LOCAL(2)
};

static FUNCTION_INFO i_lambda_2 = {
  t_lambda_2, NULL, 1, 1,
  {"57_13_value\000"}
};

static TAB_NUM t_func_std_types__table___merge[] = {
  1, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_73_5_self,
  MANDATORY_PARAMETER, var_74_5_other,
  var_undefined, var_75_5_merge_function,
  // is_defined:
  var_is_defined, 1, var_75_5_merge_function, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_merge_function_is_defined, lambda_6, TAIL_CALL,
  POS(78, 20),
  POS(77, 3)
};

static FUNCTION_INFO i_func_std_types__table___merge = {
  t_func_std_types__table___merge, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_merge_function_is_defined[] = {
  0, // locals
  0, // parameters
  // for_each other
  var_for_each, 3, var_74_5_other, lambda_3, lambda_5, TAIL_CALL,
  POS(79, 7)
};

static FUNCTION_INFO i_lambda_merge_function_is_defined = {
  t_lambda_merge_function_is_defined, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_3[] = {
  1, // locals
  2, // parameters
  var_80_12_key,
  var_80_16_value,
  // $my_value self(key)
  var_73_5_self, 1, var_80_12_key, 1, var_81_12_my_value,
  // is_defined:
  var_is_defined, 1, var_81_12_my_value, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_my_value_is_defined, lambda_4, TAIL_CALL,
  POS(81, 11),
  POS(83, 22),
  POS(82, 11)
};

static FUNCTION_INFO i_lambda_3 = {
  t_lambda_3, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_my_value_is_defined[] = {
  2, // locals
  0, // parameters
  // !self(key) merge_function(my_value value)
  var_75_5_merge_function, 2, var_81_12_my_value, var_80_16_value, 1, LOCAL(2),
  // self(key) merge_function(my_value value)
  var_73_5_self, 2, var_80_12_key, LOCAL(2), 1, var_73_5_self,
  // next
  var_next, 0, TAIL_CALL,
  POS(84, 15),
  POS(84, 16),
  POS(85, 15)
};

static FUNCTION_INFO i_lambda_my_value_is_defined = {
  t_lambda_my_value_is_defined, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_4[] = {
  0, // locals
  0, // parameters
  // self(key) value
  var_73_5_self, 2, var_80_12_key, var_80_16_value, 1, var_73_5_self,
  // next
  var_next, 0, TAIL_CALL,
  POS(87, 16),
  POS(88, 15)
};

static FUNCTION_INFO i_lambda_4 = {
  t_lambda_4, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_5[] = {
  0, // locals
  0, // parameters
  //  self
  LET, 1, var_73_5_self, TAIL_CALL,
  POS(89, 11)
};

static FUNCTION_INFO i_lambda_5 = {
  t_lambda_5, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_6[] = {
  0, // locals
  0, // parameters
  // for_each other
  var_for_each, 3, var_74_5_other, lambda_7, lambda_8, TAIL_CALL,
  POS(91, 7)
};

static FUNCTION_INFO i_lambda_6 = {
  t_lambda_6, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_7[] = {
  2, // locals
  2, // parameters
  LOCAL(1), // 92_12_key
  LOCAL(2), // 92_16_value
  // self(key) value
  var_73_5_self, 2, LOCAL(1), LOCAL(2), 1, var_73_5_self,
  // next
  var_next, 0, TAIL_CALL,
  POS(93, 12),
  POS(94, 11),
  LOCAL(1),
  LOCAL(2)
};

static FUNCTION_INFO i_lambda_7 = {
  t_lambda_7, NULL, 2, 2,
  {"92_12_key\000", "92_16_value\000"}
};

static TAB_NUM t_lambda_8[] = {
  0, // locals
  0, // parameters
  //  self
  LET, 1, var_73_5_self, TAIL_CALL,
  POS(95, 11)
};

static FUNCTION_INFO i_lambda_8 = {
  t_lambda_8, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_std_types__table___difference[] = {
  1, // locals
  3, // parameters
  var_99_5_self,
  LOCAL(1), // 100_5_other
  var_101_5_difference_function,
  // for_each other
  var_for_each, 3, LOCAL(1), lambda_9, lambda_10, TAIL_CALL,
  POS(103, 3),
  LOCAL(1)
};

static FUNCTION_INFO i_func_std_types__table___difference = {
  t_func_std_types__table___difference, NULL, 1, 1,
  {"100_5_other\000"}
};

static TAB_NUM t_lambda_9[] = {
  5, // locals
  2, // parameters
  LOCAL(4), // 104_8_key
  LOCAL(5), // 104_12_value
  // self(key) value)
  var_99_5_self, 1, LOCAL(4), 1, LOCAL(1),
  // !self(key) difference_function(self(key) value)
  var_101_5_difference_function, 2, LOCAL(1), LOCAL(5), 1, LOCAL(3),
  // self(key) difference_function(self(key) value)
  var_99_5_self, 2, LOCAL(4), LOCAL(3), 1, var_99_5_self,
  // next
  var_next, 0, TAIL_CALL,
  POS(105, 38),
  POS(105, 7),
  POS(105, 8),
  POS(106, 7),
  LOCAL(4),
  LOCAL(5)
};

static FUNCTION_INFO i_lambda_9 = {
  t_lambda_9, NULL, 4, 2,
  {"104_8_key\000", "104_12_value\000"}
};

static TAB_NUM t_lambda_10[] = {
  0, // locals
  0, // parameters
  //  self
  LET, 1, var_99_5_self, TAIL_CALL,
  POS(107, 7)
};

static FUNCTION_INFO i_lambda_10 = {
  t_lambda_10, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_std_types__table___add[] = {
  1, // locals
  -2, // parameters
  MANDATORY_PARAMETER, var_113_5_self,
  REST_PARAMETER, LOCAL(1), // 114_5_pairs
  // for_each pairs
  var_for_each, 3, LOCAL(1), lambda_11, lambda_12, TAIL_CALL,
  POS(116, 3),
  LOCAL(1)
};

static FUNCTION_INFO i_func_std_types__table___add = {
  t_func_std_types__table___add, NULL, 1, 1,
  {"114_5_pairs\000"}
};

static TAB_NUM t_lambda_11[] = {
  3, // locals
  1, // parameters
  LOCAL(1), // 117_8_pair
  // pair $key $value
  LOCAL(1), 0, 2, LOCAL(2), LOCAL(3),
  // self(key) value
  var_113_5_self, 2, LOCAL(2), LOCAL(3), 1, var_113_5_self,
  // next
  var_next, 0, TAIL_CALL,
  POS(118, 7),
  POS(119, 8),
  POS(120, 7),
  LOCAL(2),
  LOCAL(3),
  LOCAL(1)
};

static FUNCTION_INFO i_lambda_11 = {
  t_lambda_11, NULL, 3, 3,
  {"118_13_key\000", "118_18_value\000", "117_8_pair\000"}
};

static TAB_NUM t_lambda_12[] = {
  0, // locals
  0, // parameters
  //  self
  LET, 1, var_113_5_self, TAIL_CALL,
  POS(121, 7)
};

static FUNCTION_INFO i_lambda_12 = {
  t_lambda_12, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_std_types__table___debug__to_string[] = {
  0, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_127_5_self,
  num_0, var_128_5_indent,
  num_1, var_129_5_depth,
  // $tag serialization_tag_of(self)
  var_serialization_tag_of, 1, var_127_5_self, 1, var_131_4_tag,
  // cond
  var_cond, 3, lambda_13, lambda_15, lambda_19, TAIL_CALL,
  POS(131, 3),
  POS(132, 3)
};

static FUNCTION_INFO i_func_std_types__table___debug__to_string = {
  t_func_std_types__table___debug__to_string, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_13[] = {
  1, // locals
  0, // parameters
  // is_empty -> "empty_@(tag)@nl;"
  var_is_empty, 1, var_127_5_self, 1, LOCAL(1),
  //  self.is_empty -> "empty_@(tag)@nl;"
  LET, 2, LOCAL(1), lambda_14, TAIL_CALL,
  POS(133, 13),
  POS(133, 7)
};

static FUNCTION_INFO i_lambda_13 = {
  t_lambda_13, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_14[] = {
  1, // locals
  0, // parameters
  // "empty_@(tag)@nl;"
  var_std__string, 3, str_empty, var_131_4_tag, string_1, 1, LOCAL(1),
  //  "empty_@(tag)@nl;"
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(133, 25),
  POS(133, 24)
};

static FUNCTION_INFO i_lambda_14 = {
  t_lambda_14, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_15[] = {
  2, // locals
  0, // parameters
  // 1:
  var_std__less, 2, num_1, var_129_5_depth, 1, LOCAL(1),
  // 1:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  //  depth <= 1:
  LET, 2, LOCAL(2), lambda_16, TAIL_CALL,
  POS(134, 17),
  POS(134, 17),
  POS(134, 7)
};

static FUNCTION_INFO i_lambda_15 = {
  t_lambda_15, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_16[] = {
  1, // locals
  0, // parameters
  // $len length_of(self)
  var_length_of, 1, var_127_5_self, 1, var_135_8_len,
  // len == 1
  var_std__equal, 2, var_135_8_len, num_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_17, lambda_18, TAIL_CALL,
  POS(135, 7),
  POS(137, 9),
  POS(136, 7)
};

static FUNCTION_INFO i_lambda_16 = {
  t_lambda_16, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_17[] = {
  1, // locals
  0, // parameters
  // "<@(tag) with 1 item>@nl;"
  var_std__string, 3, string_2, var_131_4_tag, str__with_1_item, 1, LOCAL(1),
  //  "<@(tag) with 1 item>@nl;"
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(138, 12),
  POS(138, 11)
};

static FUNCTION_INFO i_lambda_17 = {
  t_lambda_17, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_18[] = {
  1, // locals
  0, // parameters
  // "<@(tag) with @(len) items>@nl;"
  var_std__string, 5, string_2, var_131_4_tag, str__with, var_135_8_len, str__items, 1, LOCAL(1),
  //  "<@(tag) with @(len) items>@nl;"
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(139, 12),
  POS(139, 11)
};

static FUNCTION_INFO i_lambda_18 = {
  t_lambda_18, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_19[] = {
  0, // locals
  0, // parameters
  //  true:
  LET, 2, var_true, lambda_20, TAIL_CALL,
  POS(140, 7)
};

static FUNCTION_INFO i_lambda_19 = {
  t_lambda_19, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_20[] = {
  3, // locals
  0, // parameters
  // $key_indent indent+2
  var_std__plus, 2, var_128_5_indent, num_2, 1, var_141_8_key_indent,
  // $value_indent indent+4
  var_std__plus, 2, var_128_5_indent, num_4, 1, var_142_8_value_indent,
  // map_reduce $contents
  var_map_reduce, 4, var_127_5_self, lambda_self, var_append, string_5, 1, LOCAL(3),
  // tabs_and_spaces(indent) tag "@nl;") contents
  var_tabs_and_spaces, 1, var_128_5_indent, 1, LOCAL(1),
  // append("@nl;" tabs_and_spaces(indent) tag "@nl;") contents
  var_append, 4, string_1, LOCAL(1), var_131_4_tag, string_1, 1, LOCAL(2),
  // append append("@nl;" tabs_and_spaces(indent) tag "@nl;") contents
  var_append, 2, LOCAL(2), LOCAL(3), TAIL_CALL,
  POS(141, 7),
  POS(142, 7),
  POS(143, 7),
  POS(155, 28),
  POS(155, 14),
  POS(155, 7),
  LOCAL(3)
};

static FUNCTION_INFO i_lambda_20 = {
  t_lambda_20, NULL, 6, 1,
  {"143_19_contents\000"}
};

static TAB_NUM t_lambda_self[] = {
  4, // locals
  2, // parameters
  LOCAL(3), // 144_16_key
  LOCAL(4), // 144_20_value
  // $key_text debug::to_string(key key_indent)
  var_debug__to_string, 2, LOCAL(3), var_141_8_key_indent, 1, var_145_12_key_text,
  // depth-1)
  var_std__minus, 2, var_129_5_depth, num_1, 1, LOCAL(1),
  // $value_text debug::to_string(value value_indent depth-1)
  var_debug__to_string, 3, LOCAL(4), var_142_8_value_indent, LOCAL(1), 1, var_146_12_value_text,
  // trim &key_text
  var_trim, 1, var_145_12_key_text, 1, var_145_12_key_text,
  // tabs_and_spaces(key_indent) &key_text
  var_tabs_and_spaces, 1, var_141_8_key_indent, 1, LOCAL(1),
  // append tabs_and_spaces(key_indent) &key_text
  var_append, 2, LOCAL(1), var_145_12_key_text, 1, var_145_12_key_text,
  // value_text(1) == '@nl;'
  var_146_12_value_text, 1, num_1, 1, LOCAL(1),
  // value_text(1) == '@nl;'
  var_std__equal, 2, LOCAL(1), chr_10, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_21, lambda_22, TAIL_CALL,
  POS(145, 11),
  POS(146, 59),
  POS(146, 11),
  POS(147, 11),
  POS(148, 18),
  POS(148, 11),
  POS(150, 13),
  POS(150, 13),
  POS(149, 11),
  LOCAL(4),
  LOCAL(3)
};

static FUNCTION_INFO i_lambda_self = {
  t_lambda_self, NULL, 9, 2,
  {"144_20_value\000", "144_16_key\000"}
};

static TAB_NUM t_lambda_21[] = {
  1, // locals
  0, // parameters
  // "@(key_text) =@(value_text)"
  var_std__string, 3, var_145_12_key_text, string_3, var_146_12_value_text, 1, LOCAL(1),
  //  "@(key_text) =@(value_text)"
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(151, 16),
  POS(151, 15)
};

static FUNCTION_INFO i_lambda_21 = {
  t_lambda_21, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_22[] = {
  1, // locals
  0, // parameters
  // "@(key_text) = @(value_text)"
  var_std__string, 3, var_145_12_key_text, string_4, var_146_12_value_text, 1, LOCAL(1),
  //  "@(key_text) = @(value_text)"
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(152, 16),
  POS(152, 15)
};

static FUNCTION_INFO i_lambda_22 = {
  t_lambda_22, NULL, 2, 0,
  {}
};

static TAB_NUM t_func_std_types__table___serialize[] = {
  5, // locals
  -2, // parameters
  MANDATORY_PARAMETER, LOCAL(4), // 161_5_self
  var_undefined, var_162_5_indent,
  // is_defined
  var_is_defined, 1, var_162_5_indent, 1, LOCAL(1),
  // $new_indent
  var_if, 3, LOCAL(1), lambda_23, lambda_24, 1, var_164_4_new_indent,
  // map_reduce $contents
  var_map_reduce, 4, LOCAL(4), lambda_2_self, var_append, string_5, 1, LOCAL(5),
  // serialization_tag_of(self)) <@(2*length_of(self))>
  var_serialization_tag_of, 1, LOCAL(4), 1, LOCAL(1),
  // length_of(self))>
  var_length_of, 1, LOCAL(4), 1, LOCAL(2),
  // 2*length_of(self))>
  var_std__times, 2, num_2, LOCAL(2), 1, LOCAL(3),
  // $header
  var_std__string, 4, LOCAL(1), string_6, LOCAL(3), string_7, 1, var_174_4_header,
  // is_defined &header -> append(tabs_and_spaces(indent) header)
  var_is_defined, 1, var_162_5_indent, 1, LOCAL(1),
  // update_if indent.is_defined &header -> append(tabs_and_spaces(indent) header)
  var_update_if, 3, LOCAL(1), var_174_4_header, lambda_25, 1, var_174_4_header,
  // append header contents
  var_append, 2, var_174_4_header, LOCAL(5), TAIL_CALL,
  POS(166, 14),
  POS(164, 3),
  POS(169, 3),
  POS(176, 9),
  POS(176, 42),
  POS(176, 40),
  POS(174, 3),
  POS(177, 20),
  POS(177, 3),
  POS(178, 3),
  LOCAL(5),
  LOCAL(4)
};

static FUNCTION_INFO i_func_std_types__table___serialize = {
  t_func_std_types__table___serialize, NULL, 10, 2,
  {"169_15_contents\000", "161_5_self\000"}
};

static TAB_NUM t_lambda_23[] = {
  1, // locals
  0, // parameters
  // indent+2
  var_std__plus, 2, var_162_5_indent, num_2, 1, LOCAL(1),
  //  indent+2
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(167, 10),
  POS(167, 9)
};

static FUNCTION_INFO i_lambda_23 = {
  t_lambda_23, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_24[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(168, 9)
};

static FUNCTION_INFO i_lambda_24 = {
  t_lambda_24, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_2_self[] = {
  4, // locals
  2, // parameters
  LOCAL(3), // 170_12_key
  LOCAL(4), // 170_16_value
  // serialize(key new_indent) serialize(value new_indent)
  var_serialize, 2, LOCAL(3), var_164_4_new_indent, 1, LOCAL(1),
  // serialize(value new_indent)
  var_serialize, 2, LOCAL(4), var_164_4_new_indent, 1, LOCAL(2),
  // append serialize(key new_indent) serialize(value new_indent)
  var_append, 2, LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(171, 14),
  POS(171, 40),
  POS(171, 7),
  LOCAL(3),
  LOCAL(4)
};

static FUNCTION_INFO i_lambda_2_self = {
  t_lambda_2_self, NULL, 3, 2,
  {"170_12_key\000", "170_16_value\000"}
};

static TAB_NUM t_lambda_25[] = {
  2, // locals
  0, // parameters
  // tabs_and_spaces(indent) header)
  var_tabs_and_spaces, 1, var_162_5_indent, 1, LOCAL(1),
  // append(tabs_and_spaces(indent) header)
  var_append, 2, LOCAL(1), var_174_4_header, 1, LOCAL(2),
  //  append(tabs_and_spaces(indent) header)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(177, 49),
  POS(177, 42),
  POS(177, 41)
};

static FUNCTION_INFO i_lambda_25 = {
  t_lambda_25, NULL, 3, 0,
  {}
};

static TAB_NUM t_func_std__create_index_table[] = {
  1, // locals
  2, // parameters
  LOCAL(1), // 184_5_items
  var_185_5_attribute_of,
  // $index_table empty_hash_table
  LET, 1, var_empty_hash_table, 1, var_187_4_index_table,
  // for_each items
  var_for_each, 3, LOCAL(1), lambda_26, lambda_27, TAIL_CALL,
  POS(187, 3),
  POS(188, 3),
  LOCAL(1)
};

static FUNCTION_INFO i_func_std__create_index_table = {
  t_func_std__create_index_table, NULL, 2, 1,
  {"184_5_items\000"}
};

static TAB_NUM t_lambda_26[] = {
  4, // locals
  2, // parameters
  LOCAL(3), // 189_8_idx
  LOCAL(4), // 189_12_item
  // attribute_of(item)) idx
  var_185_5_attribute_of, 1, LOCAL(4), 1, LOCAL(2),
  // index_table(attribute_of(item)) idx
  var_187_4_index_table, 2, LOCAL(2), LOCAL(3), 1, var_187_4_index_table,
  // next
  var_next, 0, TAIL_CALL,
  POS(190, 20),
  POS(190, 8),
  POS(191, 7),
  LOCAL(3),
  LOCAL(4)
};

static FUNCTION_INFO i_lambda_26 = {
  t_lambda_26, NULL, 3, 2,
  {"189_8_idx\000", "189_12_item\000"}
};

static TAB_NUM t_lambda_27[] = {
  0, // locals
  0, // parameters
  //  index_table
  LET, 1, var_187_4_index_table, TAIL_CALL,
  POS(192, 7)
};

static FUNCTION_INFO i_lambda_27 = {
  t_lambda_27, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_std_types__table___to_list[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 196_5_self
  // map_reduce
  var_map_reduce, 4, LOCAL(1), lambda_28, var_append, var_empty_list, TAIL_CALL,
  POS(198, 3),
  LOCAL(1)
};

static FUNCTION_INFO i_func_std_types__table___to_list = {
  t_func_std_types__table___to_list, NULL, 1, 1,
  {"196_5_self\000"}
};

static TAB_NUM t_lambda_28[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 200_8_item
  // list(item)
  var_list, 1, LOCAL(2), 1, LOCAL(1),
  // -> list(item)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(200, 17),
  POS(200, 14),
  LOCAL(2)
};

static FUNCTION_INFO i_lambda_28 = {
  t_lambda_28, NULL, 2, 1,
  {"200_8_item\000"}
};

static TAB_NUM t_func_std__swap_key_and_value[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 204_28_table
  // $reverse_table empty_hash_table
  LET, 1, var_empty_hash_table, 1, var_205_4_reverse_table,
  // for_each table
  var_for_each, 3, LOCAL(1), lambda_29, lambda_30, IO_TAIL_CALL,
  POS(205, 3),
  POS(206, 3),
  LOCAL(1)
};

static FUNCTION_INFO i_func_std__swap_key_and_value = {
  t_func_std__swap_key_and_value, NULL, 2, 1,
  {"204_28_table\000"}
};

static TAB_NUM t_lambda_29[] = {
  2, // locals
  2, // parameters
  LOCAL(1), // 207_8_key
  LOCAL(2), // 207_12_value
  // reverse_table(value) key
  var_205_4_reverse_table, 2, LOCAL(2), LOCAL(1), 1, var_205_4_reverse_table,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(208, 8),
  POS(209, 7),
  LOCAL(1),
  LOCAL(2)
};

static FUNCTION_INFO i_lambda_29 = {
  t_lambda_29, NULL, 2, 2,
  {"207_8_key\000", "207_12_value\000"}
};

static TAB_NUM t_lambda_30[] = {
  0, // locals
  0, // parameters
  //  reverse_table
  LET, 1, var_205_4_reverse_table, TAIL_CALL,
  POS(210, 7)
};

static FUNCTION_INFO i_lambda_30 = {
  t_lambda_30, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_std_types__table___deserializer_of[] = {
  3, // locals
  2, // parameters
  LOCAL(2), // 214_5_type
  var_215_5_items,
  // $obj empty_collection_of(type)
  var_empty_collection_of, 1, LOCAL(2), 1, var_217_4_obj,
  // length_of(items) >> 1
  var_length_of, 1, var_215_5_items, 1, LOCAL(1),
  // $n length_of(items) >> 1
  var_std__shift_right, 2, LOCAL(1), num_1, 1, LOCAL(3),
  // from_to 1 n
  var_from_to, 4, num_1, LOCAL(3), lambda_31, lambda_32, TAIL_CALL,
  POS(217, 3),
  POS(218, 6),
  POS(218, 3),
  POS(219, 3),
  LOCAL(3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_std_types__table___deserializer_of = {
  t_func_std_types__table___deserializer_of, NULL, 4, 2,
  {"218_4_n\000", "214_5_type\000"}
};

static TAB_NUM t_lambda_31[] = {
  5, // locals
  1, // parameters
  LOCAL(3), // 220_8_i
  // 2*i-1)
  var_std__times, 2, num_2, LOCAL(3), 1, LOCAL(1),
  // 2*i-1)
  var_std__minus, 2, LOCAL(1), num_1, 1, LOCAL(2),
  // $key items(2*i-1)
  var_215_5_items, 1, LOCAL(2), 1, LOCAL(4),
  // 2*i)
  var_std__times, 2, num_2, LOCAL(3), 1, LOCAL(1),
  // $value items(2*i)
  var_215_5_items, 1, LOCAL(1), 1, LOCAL(5),
  // obj(key) value
  var_217_4_obj, 2, LOCAL(4), LOCAL(5), 1, var_217_4_obj,
  // next
  var_next, 0, TAIL_CALL,
  POS(221, 18),
  POS(221, 18),
  POS(221, 7),
  POS(222, 20),
  POS(222, 7),
  POS(223, 8),
  POS(224, 7),
  LOCAL(4),
  LOCAL(5),
  LOCAL(3)
};

static FUNCTION_INFO i_lambda_31 = {
  t_lambda_31, NULL, 7, 3,
  {"221_8_key\000", "222_8_value\000", "220_8_i\000"}
};

static TAB_NUM t_lambda_32[] = {
  0, // locals
  0, // parameters
  //  obj
  LET, 1, var_217_4_obj, TAIL_CALL,
  POS(225, 7)
};

static FUNCTION_INFO i_lambda_32 = {
  t_lambda_32, NULL, 1, 0,
  {}
};

static FUNKY_CONSTANT constants_table[] = {
  {FLT_FUNCTION, 0, {.func_info = &i_func_std__keys_of}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_1}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std__values_of}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_2}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__table___merge}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_merge_function_is_defined}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_3}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_my_value_is_defined}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_4}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_5}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_6}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_7}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_8}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__table___difference}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_9}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_10}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__table___add}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_11}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_12}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__table___debug__to_string}},
  {FLT_POSITIVE_INT64, 0, {.value = 0}},
  {FLT_POSITIVE_INT64, 0, {.value = 1}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_13}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_14}},
  {FLT_STRING_8, 6, {.str_8 = "empty_"}},
  {FLT_STRING_8, 1, {.str_8 = "\012"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_15}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_16}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_17}},
  {FLT_STRING_8, 1, {.str_8 = "<"}},
  {FLT_STRING_8, 14, {.str_8 = " with 1 item>\012"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_18}},
  {FLT_STRING_8, 6, {.str_8 = " with "}},
  {FLT_STRING_8, 8, {.str_8 = " items>\012"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_19}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_20}},
  {FLT_POSITIVE_INT64, 0, {.value = 2}},
  {FLT_POSITIVE_INT64, 0, {.value = 4}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_self}},
  {FLT_CHARACTER, 0, {.value = 10}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_21}},
  {FLT_STRING_8, 2, {.str_8 = " ="}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_22}},
  {FLT_STRING_8, 3, {.str_8 = " = "}},
  {FLT_STRING_8, 0, {.str_8 = ""}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__table___serialize}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_23}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_24}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_2_self}},
  {FLT_STRING_8, 2, {.str_8 = " <"}},
  {FLT_STRING_8, 2, {.str_8 = ">\012"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_25}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std__create_index_table}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_26}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_27}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__table___to_list}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_28}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std__swap_key_and_value}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_29}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_30}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__table___deserializer_of}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_31}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_32}}
};

static ATTRIBUTE_DEFINITION std_types__object__attributes[] = {
  {-var_is_a_table, -var_false}
};

static ATTRIBUTE_DEFINITION std_types__table__attributes[] = {
  {-var_is_a_table, -var_true},
  {var_merge, -func_std_types__table___merge},
  {var_difference, -func_std_types__table___difference},
  {var_add, -func_std_types__table___add},
  {var_debug__to_string, -func_std_types__table___debug__to_string},
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
    {.position = POS(34, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "object\000std_types", std_types__object__attributes,
    {.position = POS(35, 1)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "is_a_table\000", NULL,
    {.position = POS(35, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "false\000", NULL,
    {.position = POS(35, 31)}
  },
  {
    FOT_DERIVED, 0, 8,
    "table\000std_types", std_types__table__attributes,
    {"collection\000std_types"}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "true\000", NULL,
    {.position = POS(36, 30)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "collection\000std_types", NULL,
    {.position = POS(38, 19)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "keys_of\000std", NULL,
    {.const_idx = -func_std__keys_of}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "list\000", NULL,
    {.position = POS(51, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "append\000", NULL,
    {.position = POS(52, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_list\000", NULL,
    {.position = POS(53, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "map_reduce\000", NULL,
    {.position = POS(50, 3)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "values_of\000std", NULL,
    {.const_idx = -func_std__values_of}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "merge\000", NULL,
    {.position = POS(63, 19)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "73_5_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "74_5_other\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "75_5_merge_function\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "undefined\000", NULL,
    {.position = POS(75, 22)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_defined\000", NULL,
    {.position = POS(78, 20)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "80_12_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "80_16_value\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "81_12_my_value\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "next\000", NULL,
    {.position = POS(85, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if\000", NULL,
    {.position = POS(82, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "for_each\000", NULL,
    {.position = POS(79, 7)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "difference\000", NULL,
    {.position = POS(97, 19)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "99_5_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "101_5_difference_function\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "add\000", NULL,
    {.position = POS(111, 19)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "113_5_self\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "to_string\000debug", NULL,
    {.position = POS(125, 19)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "127_5_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "128_5_indent\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "129_5_depth\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "131_4_tag\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "serialization_tag_of\000", NULL,
    {.position = POS(131, 8)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_empty\000", NULL,
    {.position = POS(133, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "string\000std", NULL,
    {.position = POS(133, 25)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "less\000std", NULL,
    {.position = POS(134, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not\000std", NULL,
    {.position = POS(134, 17)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "135_8_len\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "length_of\000", NULL,
    {.position = POS(135, 12)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "equal\000std", NULL,
    {.position = POS(137, 9)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "141_8_key_indent\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000std", NULL,
    {.position = POS(141, 19)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "142_8_value_indent\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "145_12_key_text\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "minus\000std", NULL,
    {.position = POS(146, 59)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "146_12_value_text\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "trim\000", NULL,
    {.position = POS(147, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "tabs_and_spaces\000", NULL,
    {.position = POS(148, 18)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "cond\000", NULL,
    {.position = POS(132, 3)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "serialize\000", NULL,
    {.position = POS(159, 19)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "162_5_indent\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "164_4_new_indent\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "times\000std", NULL,
    {.position = POS(176, 40)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "174_4_header\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "update_if\000", NULL,
    {.position = POS(177, 3)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "create_index_table\000std", NULL,
    {.const_idx = -func_std__create_index_table}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "185_5_attribute_of\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "187_4_index_table\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_hash_table\000", NULL,
    {.position = POS(187, 16)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "to_list\000", NULL,
    {.position = POS(194, 19)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "swap_key_and_value\000std", NULL,
    {.const_idx = -func_std__swap_key_and_value}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "205_4_reverse_table\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "deserializer_of\000", NULL,
    {.position = POS(212, 19)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "215_5_items\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "217_4_obj\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_collection_of\000", NULL,
    {.position = POS(217, 8)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "shift_right\000std", NULL,
    {.position = POS(218, 6)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "from_to\000", NULL,
    {.position = POS(219, 3)}
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
  .feature_flags = FEAT_POSITIONS|FEAT_FUNCTION_INFO,
  .marker = 0,
  0, // number of required modules
  0, // number of defined namespaces
  1, // number of used namespaces
  63, // number of constants
  72, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  constants_table,
  variables_table,
};
