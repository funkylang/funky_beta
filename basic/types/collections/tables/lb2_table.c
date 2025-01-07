#include <stddef.h>
#include <stdint.h>

#include "runtime/common.h"
#include "runtime/builtins.h"
#include "runtime/fko.h"
#include "runtime/memory.h"

enum {
  tuple_46_1 = -1,
  uni_NONE = -2,
  func_std_types__lb2_table = -3,
  lambda_1 = -4,
  lambda_2 = -5,
  lambda_value_is_defined = -6,
  lambda_3 = -7,
  lambda_4 = -8,
  num_1 = -9,
  lambda_5 = -10,
  lambda_6 = -11,
  lambda_7 = -12,
  num_0 = -13,
  func_node___length_of = -14,
  func_empty_node___insert = -15,
  func_node___insert = -16,
  lambda_8 = -17,
  lambda_9 = -18,
  lambda_10 = -19,
  lambda_11 = -20,
  lambda_12 = -21,
  num_2 = -22,
  lambda_13 = -23,
  lambda_14 = -24,
  lambda_15 = -25,
  lambda_16 = -26,
  lambda_17 = -27,
  lambda_18 = -28,
  lambda_19 = -29,
  lambda_20 = -30,
  lambda_21 = -31,
  func_inc_length_and_return = -32,
  lambda_22 = -33,
  func_fetch_first = -34,
  lambda_23 = -35,
  lambda_24 = -36,
  func_empty_node___delete = -37,
  func_node___delete = -38,
  lambda_25 = -39,
  lambda_26 = -40,
  lambda_27 = -41,
  lambda_28 = -42,
  lambda_29 = -43,
  lambda_30 = -44,
  lambda_31 = -45,
  lambda_32 = -46,
  lambda_33 = -47,
  lambda_34 = -48,
  lambda_35 = -49,
  lambda_36 = -50
};

enum {
  var__START = FIRST_VAR-1,
  var_insert, // attribute
  var_std__assign, // extern
  var_delete, // attribute
  var_std__is_a_lb2_table, // attribute
  var_std_types__object, // extern
  var_is_a_lb2_table, // extern polymorphic
  var_false, // extern
  var_std_types__lb2_table, // derived
  var_true, // extern
  var_node, // initialized compound
  var_is_an_empty_node, // extern polymorphic
  var_std_types__binary_table, // extern
  var_contents_of, // extern polymorphic
  var_empty_node, // derived
  var_std__empty_lb2_table, // derived
  var_basic_collections__empty_binary_node, // extern
  var_undefined, // extern
  var_tuple, // extern
  var_52_5_myself, // dynamic
  var_53_5_key, // dynamic
  var_54_5_value, // dynamic
  var_56_4_contents, // dynamic
  var_std__equal, // extern
  var_retrieve, // extern polymorphic
  var_is_defined, // extern
  var_length_of, // extern polymorphic
  var_std__plus, // extern
  var_if_not, // extern
  var_std__minus, // extern
  var_if, // extern
  var_retrieve_method, // extern
  var_typed_tuple, // extern
  var_101_16_self, // dynamic
  var_101_21_key, // dynamic
  var_101_25_value, // dynamic
  var_102_9_left, // dynamic
  var_102_15_right, // dynamic
  var_102_22_my_key, // dynamic
  var_102_30_my_value, // dynamic
  var_102_40_my_length, // dynamic
  var_103_4_did_insert, // dynamic
  var_std__less, // extern
  var_111_37_new_length, // dynamic
  var_116_16_right_length, // dynamic
  var_std__times, // extern
  var_std__and, // extern
  var_122_22_left_left, // dynamic
  var_123_22_left_right, // dynamic
  var_124_22_left_key, // dynamic
  var_125_22_left_value, // dynamic
  var_127_20_left_right_length, // dynamic
  var_175_38_new_length, // dynamic
  var_180_16_left_length, // dynamic
  var_186_22_right_left, // dynamic
  var_187_22_right_right, // dynamic
  var_188_22_right_key, // dynamic
  var_189_22_right_value, // dynamic
  var_191_20_right_left_length, // dynamic
  var_249_16_self, // dynamic
  var_250_9_left, // dynamic
  var_250_15_right, // dynamic
  var_250_22_my_key, // dynamic
  var_250_30_my_value, // dynamic
  var_250_40_my_length, // dynamic
  var_260_16_self, // dynamic
  var_260_21_key, // dynamic
  var_261_9_left, // dynamic
  var_261_15_right, // dynamic
  var_261_22_my_key, // dynamic
  var_261_30_my_value, // dynamic
  var_261_40_my_length, // dynamic
  var_for_each_1_left, // extern polymorphic
  var_for_each_1_left_method, // extern
  var_for_each_2_left, // extern polymorphic
  var_for_each_2_left_method, // extern
  var_for_each_1_call, // extern polymorphic
  var_for_each_1_call_method, // extern
  var_for_each_2_call, // extern polymorphic
  var_for_each_2_call_method, // extern
  var_for_each_1_right, // extern polymorphic
  var_for_each_1_right_method, // extern
  var_for_each_2_right, // extern polymorphic
  var_for_each_2_right_method, // extern
  var_map_1, // extern polymorphic
  var_map_1_method, // extern
  var_map_2, // extern polymorphic
  var_map_2_method, // extern
  var__END
};


static TAB_NUM t_func_std_types__lb2_table[] = {
  1, // locals
  -3, // parameters
  MYSELF_PARAMETER, var_52_5_myself,
  MANDATORY_PARAMETER, var_53_5_key,
  uni_NONE, var_54_5_value,
  // $contents contents_of(myself)
  var_contents_of, 1, var_52_5_myself, 1, var_56_4_contents,
  // NONE == value
  var_std__equal, 2, uni_NONE, var_54_5_value, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1, lambda_2, TAIL_CALL,
  POS(56, 3),
  POS(58, 5),
  POS(57, 3)
};

static FUNCTION_INFO i_func_std_types__lb2_table = {
  t_func_std_types__lb2_table, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_1[] = {
  1, // locals
  0, // parameters
  // retrieve(contents key)
  var_retrieve, 2, var_56_4_contents, var_53_5_key, 1, LOCAL(1),
  //  retrieve(contents key)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(59, 8),
  POS(59, 7)
};

static FUNCTION_INFO i_lambda_1 = {
  t_lambda_1, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_2[] = {
  1, // locals
  0, // parameters
  // is_defined:
  var_is_defined, 1, var_54_5_value, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_value_is_defined, lambda_5, TAIL_CALL,
  POS(62, 15),
  POS(61, 7)
};

static FUNCTION_INFO i_lambda_2 = {
  t_lambda_2, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_value_is_defined[] = {
  2, // locals
  0, // parameters
  // insert &contents $did_insert $_my_length key value
  var_insert, 3, var_56_4_contents, var_53_5_key, var_54_5_value, 3, var_56_4_contents, LOCAL(2), LOCAL(1),
  // if_not
  var_if_not, 3, LOCAL(2), lambda_3, lambda_4, TAIL_CALL,
  POS(63, 11),
  POS(64, 11),
  LOCAL(2)
};

static FUNCTION_INFO i_lambda_value_is_defined = {
  t_lambda_value_is_defined, NULL, 2, 1,
  {"63_29_did_insert\000"}
};

static TAB_NUM t_lambda_3[] = {
  1, // locals
  0, // parameters
  // .contents_of contents)
  LET, -1, var_52_5_myself, var_contents_of, var_56_4_contents, LOCAL(1),
  //  myself(.contents_of contents)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(66, 23),
  POS(66, 15)
};

static FUNCTION_INFO i_lambda_3 = {
  t_lambda_3, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_4[] = {
  3, // locals
  0, // parameters
  // length_of(myself)+1
  var_length_of, 1, var_52_5_myself, 1, LOCAL(1),
  // length_of(myself)+1
  var_std__plus, 2, LOCAL(1), num_1, 1, LOCAL(2),
  // myself
  LET, -2, var_52_5_myself, var_contents_of, var_56_4_contents, var_length_of, LOCAL(2), LOCAL(3),
  // 
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(70, 28),
  POS(70, 28),
  POS(68, 15),
  POS(67, 15)
};

static FUNCTION_INFO i_lambda_4 = {
  t_lambda_4, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_5[] = {
  2, // locals
  0, // parameters
  // delete &contents $did_delete $_my_length key
  var_delete, 2, var_56_4_contents, var_53_5_key, 3, var_56_4_contents, LOCAL(2), LOCAL(1),
  // if_not
  var_if_not, 3, LOCAL(2), lambda_6, lambda_7, TAIL_CALL,
  POS(72, 11),
  POS(73, 11),
  LOCAL(2)
};

static FUNCTION_INFO i_lambda_5 = {
  t_lambda_5, NULL, 2, 1,
  {"72_29_did_delete\000"}
};

static TAB_NUM t_lambda_6[] = {
  0, // locals
  0, // parameters
  //  myself
  LET, 1, var_52_5_myself, TAIL_CALL,
  POS(75, 15)
};

static FUNCTION_INFO i_lambda_6 = {
  t_lambda_6, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_7[] = {
  3, // locals
  0, // parameters
  // length_of(myself)-1
  var_length_of, 1, var_52_5_myself, 1, LOCAL(1),
  // length_of(myself)-1
  var_std__minus, 2, LOCAL(1), num_1, 1, LOCAL(2),
  // myself
  LET, -2, var_52_5_myself, var_contents_of, var_56_4_contents, var_length_of, LOCAL(2), LOCAL(3),
  // 
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(79, 28),
  POS(79, 28),
  POS(77, 15),
  POS(76, 15)
};

static FUNCTION_INFO i_lambda_7 = {
  t_lambda_7, NULL, 4, 0,
  {}
};

static TAB_NUM t_func_node___length_of[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 86_19_self
  // self $_left $_right $_my_key $_my_value $my_length
  LOCAL(2), 0, 5, LOCAL(1), LOCAL(1), LOCAL(1), LOCAL(1), LOCAL(3),
  // -> my_length
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(87, 3),
  POS(88, 3),
  LOCAL(3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_node___length_of = {
  t_func_node___length_of, NULL, 2, 2,
  {"87_44_my_length\000", "86_19_self\000"}
};

static TAB_NUM t_func_empty_node___insert[] = {
  3, // locals
  3, // parameters
  LOCAL(1),
  LOCAL(2), // 98_28_key
  LOCAL(3), // 98_32_value
  // typed_tuple(node empty_node empty_node key value 1) true 1
  var_typed_tuple, 6, var_node, var_empty_node, var_empty_node, LOCAL(2), LOCAL(3), num_1, 1, LOCAL(1),
  // -> typed_tuple(node empty_node empty_node key value 1) true 1
  LET, 3, LOCAL(1), var_true, num_1, TAIL_CALL,
  POS(99, 6),
  POS(99, 3),
  LOCAL(2),
  LOCAL(3)
};

static FUNCTION_INFO i_func_empty_node___insert = {
  t_func_empty_node___insert, NULL, 2, 2,
  {"98_28_key\000", "98_32_value\000"}
};

static TAB_NUM t_func_node___insert[] = {
  1, // locals
  3, // parameters
  var_101_16_self,
  var_101_21_key,
  var_101_25_value,
  // self $left $right $my_key $my_value $my_length
  var_101_16_self, 0, 5, var_102_9_left, var_102_15_right, var_102_22_my_key, var_102_30_my_value, var_102_40_my_length,
  // $did_insert undefined
  LET, 1, var_undefined, 1, var_103_4_did_insert,
  // key == my_key
  var_std__equal, 2, var_101_21_key, var_102_22_my_key, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_8, lambda_9, TAIL_CALL,
  POS(102, 3),
  POS(103, 3),
  POS(105, 5),
  POS(104, 3)
};

static FUNCTION_INFO i_func_node___insert = {
  t_func_node___insert, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_8[] = {
  1, // locals
  0, // parameters
  // typed_tuple(self left right key value my_length) false my_length
  var_typed_tuple, 6, var_101_16_self, var_102_9_left, var_102_15_right, var_101_21_key, var_101_25_value, var_102_40_my_length, 1, LOCAL(1),
  //  typed_tuple(self left right key value my_length) false my_length
  LET, 3, LOCAL(1), var_false, var_102_40_my_length, TAIL_CALL,
  POS(106, 8),
  POS(106, 7)
};

static FUNCTION_INFO i_lambda_8 = {
  t_lambda_8, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_9[] = {
  1, // locals
  0, // parameters
  // key < my_key
  var_std__less, 2, var_101_21_key, var_102_22_my_key, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_10, lambda_16, TAIL_CALL,
  POS(109, 9),
  POS(108, 7)
};

static FUNCTION_INFO i_lambda_9 = {
  t_lambda_9, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_10[] = {
  0, // locals
  0, // parameters
  // insert &left !did_insert $new_length key value
  var_insert, 3, var_102_9_left, var_101_21_key, var_101_25_value, 3, var_102_9_left, var_103_4_did_insert, var_111_37_new_length,
  // if_not
  var_if_not, 3, var_103_4_did_insert, lambda_22, lambda_11, TAIL_CALL,
  POS(111, 11),
  POS(112, 11)
};

static FUNCTION_INFO i_lambda_10 = {
  t_lambda_10, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_11[] = {
  2, // locals
  0, // parameters
  // $right_length length_of(right)
  var_length_of, 1, var_102_15_right, 1, var_116_16_right_length,
  // 1 && new_length > 2*right_length
  var_std__less, 2, num_1, var_111_37_new_length, 1, LOCAL(1),
  // 1 && new_length > 2*right_length
  var_std__and, 2, LOCAL(1), lambda_12, 1, LOCAL(2),
  // if_not
  var_if_not, 3, LOCAL(2), func_inc_length_and_return, lambda_13, TAIL_CALL,
  POS(116, 15),
  POS(118, 30),
  POS(118, 30),
  POS(117, 15)
};

static FUNCTION_INFO i_lambda_11 = {
  t_lambda_11, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_12[] = {
  2, // locals
  0, // parameters
  // 2*right_length
  var_std__times, 2, num_2, var_116_16_right_length, 1, LOCAL(1),
  // 2*right_length
  var_std__less, 2, LOCAL(1), var_111_37_new_length, 1, LOCAL(2),
  // new_length > 2*right_length
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(118, 48),
  POS(118, 48),
  POS(118, 35)
};

static FUNCTION_INFO i_lambda_12 = {
  t_lambda_12, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_13[] = {
  4, // locals
  0, // parameters
  // left
  var_102_9_left, 0, 4, var_122_22_left_left, var_123_22_left_right, var_124_22_left_key, var_125_22_left_value,
  // $left_left_length length_of(left_left)
  var_length_of, 1, var_122_22_left_left, 1, LOCAL(4),
  // $left_right_length length_of(left_right)
  var_length_of, 1, var_123_22_left_right, 1, var_127_20_left_right_length,
  // left_right_length+right_length > 2*left_left_length
  var_std__plus, 2, var_127_20_left_right_length, var_116_16_right_length, 1, LOCAL(1),
  // 2*left_left_length
  var_std__times, 2, num_2, LOCAL(4), 1, LOCAL(2),
  // 2*left_left_length
  var_std__less, 2, LOCAL(2), LOCAL(1), 1, LOCAL(3),
  // if_not
  var_if_not, 3, LOCAL(3), lambda_14, lambda_15, TAIL_CALL,
  POS(121, 19),
  POS(126, 19),
  POS(127, 19),
  POS(129, 21),
  POS(129, 54),
  POS(129, 54),
  POS(128, 19),
  LOCAL(4)
};

static FUNCTION_INFO i_lambda_13 = {
  t_lambda_13, NULL, 7, 1,
  {"126_20_left_left_length\000"}
};

static TAB_NUM t_lambda_14[] = {
  6, // locals
  0, // parameters
  // left_right_length+right_length+1
  var_std__plus, 2, var_127_20_left_right_length, var_116_16_right_length, 1, LOCAL(1),
  // left_right_length+right_length+1
  var_std__plus, 2, LOCAL(1), num_1, 1, LOCAL(2),
  // typed_tuple
  var_typed_tuple, 6, var_node, var_123_22_left_right, var_102_15_right, var_102_22_my_key, var_102_30_my_value, LOCAL(2), 1, LOCAL(3),
  // my_length+1
  var_std__plus, 2, var_102_40_my_length, num_1, 1, LOCAL(4),
  // typed_tuple
  var_typed_tuple, 6, var_node, var_122_22_left_left, LOCAL(3), var_124_22_left_key, var_125_22_left_value, LOCAL(4), 1, LOCAL(5),
  // my_length+1
  var_std__plus, 2, var_102_40_my_length, num_1, 1, LOCAL(6),
  // 
  LET, 3, LOCAL(5), var_true, LOCAL(6), TAIL_CALL,
  POS(140, 27),
  POS(140, 27),
  POS(134, 25),
  POS(143, 25),
  POS(131, 23),
  POS(145, 23),
  POS(130, 23)
};

static FUNCTION_INFO i_lambda_14 = {
  t_lambda_14, NULL, 7, 0,
  {}
};

static TAB_NUM t_lambda_15[] = {
  16, // locals
  0, // parameters
  // left_right
  var_123_22_left_right, 0, 4, LOCAL(13), LOCAL(14), LOCAL(15), LOCAL(16),
  // length_of(left_left)+length_of(left_right_left)+1
  var_length_of, 1, var_122_22_left_left, 1, LOCAL(1),
  // length_of(left_right_left)+1
  var_length_of, 1, LOCAL(13), 1, LOCAL(2),
  // length_of(left_left)+length_of(left_right_left)+1
  var_std__plus, 2, LOCAL(1), LOCAL(2), 1, LOCAL(3),
  // length_of(left_left)+length_of(left_right_left)+1
  var_std__plus, 2, LOCAL(3), num_1, 1, LOCAL(4),
  // typed_tuple
  var_typed_tuple, 6, var_node, var_122_22_left_left, LOCAL(13), var_124_22_left_key, var_125_22_left_value, LOCAL(4), 1, LOCAL(5),
  // length_of(left_right_right)+1
  var_length_of, 1, LOCAL(14), 1, LOCAL(6),
  // right_length+length_of(left_right_right)+1
  var_std__plus, 2, var_116_16_right_length, LOCAL(6), 1, LOCAL(7),
  // right_length+length_of(left_right_right)+1
  var_std__plus, 2, LOCAL(7), num_1, 1, LOCAL(8),
  // typed_tuple
  var_typed_tuple, 6, var_node, LOCAL(14), var_102_15_right, var_102_22_my_key, var_102_30_my_value, LOCAL(8), 1, LOCAL(9),
  // my_length+1
  var_std__plus, 2, var_102_40_my_length, num_1, 1, LOCAL(10),
  // typed_tuple
  var_typed_tuple, 6, var_node, LOCAL(5), LOCAL(9), LOCAL(15), LOCAL(16), LOCAL(10), 1, LOCAL(11),
  // my_length+1
  var_std__plus, 2, var_102_40_my_length, num_1, 1, LOCAL(12),
  // ->
  LET, 3, LOCAL(11), var_true, LOCAL(12), TAIL_CALL,
  POS(147, 23),
  POS(161, 29),
  POS(161, 50),
  POS(161, 29),
  POS(161, 29),
  POS(155, 27),
  POS(168, 42),
  POS(168, 29),
  POS(168, 29),
  POS(162, 27),
  POS(171, 27),
  POS(153, 25),
  POS(173, 25),
  POS(152, 23),
  LOCAL(16),
  LOCAL(13),
  LOCAL(15),
  LOCAL(14)
};

static FUNCTION_INFO i_lambda_15 = {
  t_lambda_15, NULL, 14, 4,
  {"151_26_left_right_value\000", "148_26_left_right_left\000", "150_26_left_right_key\000", "149_26_left_right_right\000"}
};

static TAB_NUM t_lambda_16[] = {
  0, // locals
  0, // parameters
  // insert &right !did_insert $new_length key value
  var_insert, 3, var_102_15_right, var_101_21_key, var_101_25_value, 3, var_102_15_right, var_103_4_did_insert, var_175_38_new_length,
  // if_not
  var_if_not, 3, var_103_4_did_insert, lambda_22, lambda_17, TAIL_CALL,
  POS(175, 11),
  POS(176, 11)
};

static FUNCTION_INFO i_lambda_16 = {
  t_lambda_16, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_17[] = {
  2, // locals
  0, // parameters
  // $left_length length_of(left)
  var_length_of, 1, var_102_9_left, 1, var_180_16_left_length,
  // 1 && new_length > 2*left_length
  var_std__less, 2, num_1, var_175_38_new_length, 1, LOCAL(1),
  // 1 && new_length > 2*left_length
  var_std__and, 2, LOCAL(1), lambda_18, 1, LOCAL(2),
  // if_not
  var_if_not, 3, LOCAL(2), func_inc_length_and_return, lambda_19, TAIL_CALL,
  POS(180, 15),
  POS(182, 30),
  POS(182, 30),
  POS(181, 15)
};

static FUNCTION_INFO i_lambda_17 = {
  t_lambda_17, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_18[] = {
  2, // locals
  0, // parameters
  // 2*left_length
  var_std__times, 2, num_2, var_180_16_left_length, 1, LOCAL(1),
  // 2*left_length
  var_std__less, 2, LOCAL(1), var_175_38_new_length, 1, LOCAL(2),
  // new_length > 2*left_length
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(182, 48),
  POS(182, 48),
  POS(182, 35)
};

static FUNCTION_INFO i_lambda_18 = {
  t_lambda_18, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_19[] = {
  4, // locals
  0, // parameters
  // right
  var_102_15_right, 0, 4, var_186_22_right_left, var_187_22_right_right, var_188_22_right_key, var_189_22_right_value,
  // $right_right_length length_of(right_right)
  var_length_of, 1, var_187_22_right_right, 1, LOCAL(4),
  // $right_left_length length_of(right_left)
  var_length_of, 1, var_186_22_right_left, 1, var_191_20_right_left_length,
  // right_left_length+left_length > 2*right_right_length
  var_std__plus, 2, var_191_20_right_left_length, var_180_16_left_length, 1, LOCAL(1),
  // 2*right_right_length
  var_std__times, 2, num_2, LOCAL(4), 1, LOCAL(2),
  // 2*right_right_length
  var_std__less, 2, LOCAL(2), LOCAL(1), 1, LOCAL(3),
  // if_not
  var_if_not, 3, LOCAL(3), lambda_20, lambda_21, TAIL_CALL,
  POS(185, 19),
  POS(190, 19),
  POS(191, 19),
  POS(193, 21),
  POS(193, 53),
  POS(193, 53),
  POS(192, 19),
  LOCAL(4)
};

static FUNCTION_INFO i_lambda_19 = {
  t_lambda_19, NULL, 7, 1,
  {"190_20_right_right_length\000"}
};

static TAB_NUM t_lambda_20[] = {
  6, // locals
  0, // parameters
  // right_left_length+left_length+1
  var_std__plus, 2, var_191_20_right_left_length, var_180_16_left_length, 1, LOCAL(1),
  // right_left_length+left_length+1
  var_std__plus, 2, LOCAL(1), num_1, 1, LOCAL(2),
  // typed_tuple
  var_typed_tuple, 6, var_node, var_102_9_left, var_186_22_right_left, var_102_22_my_key, var_102_30_my_value, LOCAL(2), 1, LOCAL(3),
  // my_length+1
  var_std__plus, 2, var_102_40_my_length, num_1, 1, LOCAL(4),
  // typed_tuple
  var_typed_tuple, 6, var_node, LOCAL(3), var_187_22_right_right, var_188_22_right_key, var_189_22_right_value, LOCAL(4), 1, LOCAL(5),
  // my_length+1
  var_std__plus, 2, var_102_40_my_length, num_1, 1, LOCAL(6),
  // 
  LET, 3, LOCAL(5), var_true, LOCAL(6), TAIL_CALL,
  POS(203, 27),
  POS(203, 27),
  POS(197, 25),
  POS(207, 25),
  POS(195, 23),
  POS(209, 23),
  POS(194, 23)
};

static FUNCTION_INFO i_lambda_20 = {
  t_lambda_20, NULL, 7, 0,
  {}
};

static TAB_NUM t_lambda_21[] = {
  16, // locals
  0, // parameters
  // right_left
  var_186_22_right_left, 0, 4, LOCAL(13), LOCAL(14), LOCAL(15), LOCAL(16),
  // length_of(right_left_left)+1
  var_length_of, 1, LOCAL(13), 1, LOCAL(1),
  // left_length+length_of(right_left_left)+1
  var_std__plus, 2, var_180_16_left_length, LOCAL(1), 1, LOCAL(2),
  // left_length+length_of(right_left_left)+1
  var_std__plus, 2, LOCAL(2), num_1, 1, LOCAL(3),
  // typed_tuple
  var_typed_tuple, 6, var_node, var_102_9_left, LOCAL(13), var_102_22_my_key, var_102_30_my_value, LOCAL(3), 1, LOCAL(4),
  // length_of(right_right)+length_of(right_left_right)+1
  var_length_of, 1, var_187_22_right_right, 1, LOCAL(5),
  // length_of(right_left_right)+1
  var_length_of, 1, LOCAL(14), 1, LOCAL(6),
  // length_of(right_right)+length_of(right_left_right)+1
  var_std__plus, 2, LOCAL(5), LOCAL(6), 1, LOCAL(7),
  // length_of(right_right)+length_of(right_left_right)+1
  var_std__plus, 2, LOCAL(7), num_1, 1, LOCAL(8),
  // typed_tuple
  var_typed_tuple, 6, var_node, LOCAL(14), var_187_22_right_right, var_188_22_right_key, var_189_22_right_value, LOCAL(8), 1, LOCAL(9),
  // my_length+1
  var_std__plus, 2, var_102_40_my_length, num_1, 1, LOCAL(10),
  // typed_tuple
  var_typed_tuple, 6, var_node, LOCAL(4), LOCAL(9), LOCAL(15), LOCAL(16), LOCAL(10), 1, LOCAL(11),
  // my_length+1
  var_std__plus, 2, var_102_40_my_length, num_1, 1, LOCAL(12),
  // ->
  LET, 3, LOCAL(11), var_true, LOCAL(12), TAIL_CALL,
  POS(211, 23),
  POS(225, 41),
  POS(225, 29),
  POS(225, 29),
  POS(219, 27),
  POS(232, 29),
  POS(232, 52),
  POS(232, 29),
  POS(232, 29),
  POS(226, 27),
  POS(235, 27),
  POS(217, 25),
  POS(237, 25),
  POS(216, 23),
  LOCAL(15),
  LOCAL(14),
  LOCAL(16),
  LOCAL(13)
};

static FUNCTION_INFO i_lambda_21 = {
  t_lambda_21, NULL, 14, 4,
  {"214_26_right_left_key\000", "213_26_right_left_right\000", "215_26_right_left_value\000", "212_26_right_left_left\000"}
};

static TAB_NUM t_func_inc_length_and_return[] = {
  0, // locals
  0, // parameters
  // !my_length my_length+1
  var_std__plus, 2, var_102_40_my_length, num_1, 1, var_102_40_my_length,
  // return
  lambda_22, 0, TAIL_CALL,
  POS(240, 5),
  POS(241, 5)
};

static FUNCTION_INFO i_func_inc_length_and_return = {
  t_func_inc_length_and_return, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_22[] = {
  1, // locals
  0, // parameters
  // typed_tuple(self left right my_key my_value my_length) did_insert my_length
  var_typed_tuple, 6, var_101_16_self, var_102_9_left, var_102_15_right, var_102_22_my_key, var_102_30_my_value, var_102_40_my_length, 1, LOCAL(1),
  //  typed_tuple(self left right my_key my_value my_length) did_insert my_length
  LET, 3, LOCAL(1), var_103_4_did_insert, var_102_40_my_length, TAIL_CALL,
  POS(244, 8),
  POS(244, 7)
};

static FUNCTION_INFO i_lambda_22 = {
  t_lambda_22, NULL, 2, 0,
  {}
};

static TAB_NUM t_func_fetch_first[] = {
  1, // locals
  1, // parameters
  var_249_16_self,
  // self $left $right $my_key $my_value $my_length
  var_249_16_self, 0, 5, var_250_9_left, var_250_15_right, var_250_22_my_key, var_250_30_my_value, var_250_40_my_length,
  // is_an_empty_node
  var_is_an_empty_node, 1, var_250_9_left, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_23, lambda_24, TAIL_CALL,
  POS(250, 3),
  POS(252, 10),
  POS(251, 3)
};

static FUNCTION_INFO i_func_fetch_first = {
  t_func_fetch_first, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_23[] = {
  0, // locals
  0, // parameters
  //  right my_key my_value my_length
  LET, 4, var_250_15_right, var_250_22_my_key, var_250_30_my_value, var_250_40_my_length, TAIL_CALL,
  POS(253, 7)
};

static FUNCTION_INFO i_lambda_23 = {
  t_lambda_23, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_24[] = {
  3, // locals
  0, // parameters
  // fetch_first &left $first_key $first_value
  func_fetch_first, 1, var_250_9_left, 3, var_250_9_left, LOCAL(2), LOCAL(3),
  // typed_tuple(self left right my_key my_value my_length) first_key first_value
  var_typed_tuple, 6, var_249_16_self, var_250_9_left, var_250_15_right, var_250_22_my_key, var_250_30_my_value, var_250_40_my_length, 1, LOCAL(1),
  // -> typed_tuple(self left right my_key my_value my_length) first_key first_value
  LET, 3, LOCAL(1), LOCAL(2), LOCAL(3), TAIL_CALL,
  POS(255, 7),
  POS(256, 10),
  POS(256, 7),
  LOCAL(2),
  LOCAL(3)
};

static FUNCTION_INFO i_lambda_24 = {
  t_lambda_24, NULL, 3, 2,
  {"255_26_first_key\000", "255_37_first_value\000"}
};

static TAB_NUM t_func_empty_node___delete[] = {
  2, // locals
  2, // parameters
  LOCAL(2), // 258_22_self
  LOCAL(1),
  // -> self false 0
  LET, 3, LOCAL(2), var_false, num_0, TAIL_CALL,
  POS(258, 33),
  LOCAL(2)
};

static FUNCTION_INFO i_func_empty_node___delete = {
  t_func_empty_node___delete, NULL, 1, 1,
  {"258_22_self\000"}
};

static TAB_NUM t_func_node___delete[] = {
  1, // locals
  2, // parameters
  var_260_16_self,
  var_260_21_key,
  // self $left $right $my_key $my_value $my_length
  var_260_16_self, 0, 5, var_261_9_left, var_261_15_right, var_261_22_my_key, var_261_30_my_value, var_261_40_my_length,
  // key == my_key
  var_std__equal, 2, var_260_21_key, var_261_22_my_key, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_25, lambda_30, TAIL_CALL,
  POS(261, 3),
  POS(263, 5),
  POS(262, 3)
};

static FUNCTION_INFO i_func_node___delete = {
  t_func_node___delete, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_25[] = {
  1, // locals
  0, // parameters
  // is_an_empty_node
  var_is_an_empty_node, 1, var_261_9_left, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_26, lambda_27, TAIL_CALL,
  POS(266, 14),
  POS(265, 7)
};

static FUNCTION_INFO i_lambda_25 = {
  t_lambda_25, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_26[] = {
  0, // locals
  0, // parameters
  //  right true
  LET, 2, var_261_15_right, var_true, TAIL_CALL,
  POS(267, 11)
};

static FUNCTION_INFO i_lambda_26 = {
  t_lambda_26, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_27[] = {
  1, // locals
  0, // parameters
  // is_an_empty_node
  var_is_an_empty_node, 1, var_261_15_right, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_28, lambda_29, TAIL_CALL,
  POS(270, 19),
  POS(269, 11)
};

static FUNCTION_INFO i_lambda_27 = {
  t_lambda_27, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_28[] = {
  1, // locals
  0, // parameters
  // my_length-1
  var_std__minus, 2, var_261_40_my_length, num_1, 1, LOCAL(1),
  //  left true my_length-1
  LET, 3, var_261_9_left, var_true, LOCAL(1), TAIL_CALL,
  POS(271, 26),
  POS(271, 15)
};

static FUNCTION_INFO i_lambda_28 = {
  t_lambda_28, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_29[] = {
  3, // locals
  0, // parameters
  // fetch_first &right $first_key $first_value
  func_fetch_first, 1, var_261_15_right, 3, var_261_15_right, LOCAL(2), LOCAL(3),
  // typed_tuple(self left right first_key first_value my_length)
  var_typed_tuple, 6, var_260_16_self, var_261_9_left, var_261_15_right, LOCAL(2), LOCAL(3), var_261_40_my_length, 1, LOCAL(1),
  // -> typed_tuple(self left right first_key first_value my_length)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(273, 15),
  POS(274, 18),
  POS(274, 15),
  LOCAL(2),
  LOCAL(3)
};

static FUNCTION_INFO i_lambda_29 = {
  t_lambda_29, NULL, 3, 2,
  {"273_35_first_key\000", "273_46_first_value\000"}
};

static TAB_NUM t_lambda_30[] = {
  1, // locals
  0, // parameters
  // key < my_key
  var_std__less, 2, var_260_21_key, var_261_22_my_key, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_31, lambda_34, TAIL_CALL,
  POS(277, 9),
  POS(276, 7)
};

static FUNCTION_INFO i_lambda_30 = {
  t_lambda_30, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_31[] = {
  2, // locals
  0, // parameters
  // delete &left $did_delete $_new_length key
  var_delete, 2, var_261_9_left, var_260_21_key, 3, var_261_9_left, LOCAL(2), LOCAL(1),
  // if_not
  var_if_not, 3, LOCAL(2), lambda_32, lambda_33, TAIL_CALL,
  POS(279, 11),
  POS(280, 11),
  LOCAL(2)
};

static FUNCTION_INFO i_lambda_31 = {
  t_lambda_31, NULL, 2, 1,
  {"279_25_did_delete\000"}
};

static TAB_NUM t_lambda_32[] = {
  0, // locals
  0, // parameters
  //  self false my_length
  LET, 3, var_260_16_self, var_false, var_261_40_my_length, TAIL_CALL,
  POS(282, 15)
};

static FUNCTION_INFO i_lambda_32 = {
  t_lambda_32, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_33[] = {
  1, // locals
  0, // parameters
  // typed_tuple(self left right my_key my_value my_length) true
  var_typed_tuple, 6, var_260_16_self, var_261_9_left, var_261_15_right, var_261_22_my_key, var_261_30_my_value, var_261_40_my_length, 1, LOCAL(1),
  //  typed_tuple(self left right my_key my_value my_length) true
  LET, 2, LOCAL(1), var_true, TAIL_CALL,
  POS(283, 16),
  POS(283, 15)
};

static FUNCTION_INFO i_lambda_33 = {
  t_lambda_33, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_34[] = {
  2, // locals
  0, // parameters
  // delete &right $did_delete $_new_length key
  var_delete, 2, var_261_15_right, var_260_21_key, 3, var_261_15_right, LOCAL(2), LOCAL(1),
  // if_not
  var_if_not, 3, LOCAL(2), lambda_35, lambda_36, TAIL_CALL,
  POS(285, 11),
  POS(286, 11),
  LOCAL(2)
};

static FUNCTION_INFO i_lambda_34 = {
  t_lambda_34, NULL, 2, 1,
  {"285_26_did_delete\000"}
};

static TAB_NUM t_lambda_35[] = {
  0, // locals
  0, // parameters
  //  self false my_length
  LET, 3, var_260_16_self, var_false, var_261_40_my_length, TAIL_CALL,
  POS(288, 15)
};

static FUNCTION_INFO i_lambda_35 = {
  t_lambda_35, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_36[] = {
  1, // locals
  0, // parameters
  // typed_tuple(self left right my_key my_value my_length) true
  var_typed_tuple, 6, var_260_16_self, var_261_9_left, var_261_15_right, var_261_22_my_key, var_261_30_my_value, var_261_40_my_length, 1, LOCAL(1),
  //  typed_tuple(self left right my_key my_value my_length) true
  LET, 2, LOCAL(1), var_true, TAIL_CALL,
  POS(289, 16),
  POS(289, 15)
};

static FUNCTION_INFO i_lambda_36 = {
  t_lambda_36, NULL, 2, 0,
  {}
};

static int tuple_46_1_arguments[] = {
  -var_undefined, -var_undefined, -var_undefined, -var_undefined, -var_undefined
};

static FUNKY_CONSTANT constants_table[] = {
  {FLT_TUPLE, 5, {.arguments = tuple_46_1_arguments}},
  {FLT_UNIQUE, 0, {.str_8 = "NONE"}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__lb2_table}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_1}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_2}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_value_is_defined}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_3}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_4}},
  {FLT_POSITIVE_INT64, 0, {.value = 1}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_5}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_6}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_7}},
  {FLT_POSITIVE_INT64, 0, {.value = 0}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_node___length_of}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_empty_node___insert}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_node___insert}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_8}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_9}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_10}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_11}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_12}},
  {FLT_POSITIVE_INT64, 0, {.value = 2}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_13}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_14}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_15}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_16}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_17}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_18}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_19}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_20}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_21}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_inc_length_and_return}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_22}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_fetch_first}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_23}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_24}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_empty_node___delete}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_node___delete}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_25}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_26}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_27}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_28}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_29}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_30}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_31}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_32}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_33}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_34}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_35}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_36}}
};

static ATTRIBUTE_DEFINITION std_types__object__attributes[] = {
  {-var_is_a_lb2_table, -var_false}
};

static ATTRIBUTE_DEFINITION std_types__lb2_table__attributes[] = {
  {-var_is_a_lb2_table, -var_true},
  {-var_contents_of, -var_empty_node},
  {TYPE_FUNCTION, -func_std_types__lb2_table}
};

static ATTRIBUTE_DEFINITION node__attributes[] = {
  {-var_is_an_empty_node, -var_false},
  {var_length_of, -func_node___length_of},
  {var_retrieve, -var_retrieve_method},
  {var_insert, -func_node___insert},
  {var_delete, -func_node___delete},
  {var_for_each_1_left, -var_for_each_1_left_method},
  {var_for_each_2_left, -var_for_each_2_left_method},
  {var_for_each_1_call, -var_for_each_1_call_method},
  {var_for_each_2_call, -var_for_each_2_call_method},
  {var_for_each_1_right, -var_for_each_1_right_method},
  {var_for_each_2_right, -var_for_each_2_right_method},
  {var_map_1, -var_map_1_method},
  {var_map_2, -var_map_2_method}
};

static ATTRIBUTE_DEFINITION empty_node__attributes[] = {
  {-var_length_of, -num_0},
  {var_insert, -func_empty_node___insert},
  {var_delete, -func_empty_node___delete}
};

static FUNKY_VARIABLE variables_table[] = {
  {
    FOT_POLYMORPHIC, 0, 0,
    "insert\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "assign\000std", NULL,
    {.position = POS(30, 1)}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "delete\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "is_a_lb2_table\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "object\000std_types", std_types__object__attributes,
    {.position = POS(34, 1)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "is_a_lb2_table\000", NULL,
    {.position = POS(34, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "false\000", NULL,
    {.position = POS(34, 35)}
  },
  {
    FOT_DERIVED, 0, 3,
    "lb2_table\000std_types", std_types__lb2_table__attributes,
    {"binary_table\000std_types"}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "true\000", NULL,
    {.position = POS(35, 38)}
  },
  {
    FOT_INITIALIZED, 0, 13,
    "node\000", node__attributes,
    {.const_idx = -tuple_46_1}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "is_an_empty_node\000", NULL,
    {.position = POS(37, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "binary_table\000std_types", NULL,
    {.position = POS(39, 23)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "contents_of\000", NULL,
    {.position = POS(40, 23)}
  },
  {
    FOT_DERIVED, 0, 3,
    "empty_node\000", empty_node__attributes,
    {"empty_binary_node\000basic_collections"}
  },
  {
    FOT_DERIVED, 0, 0,
    "empty_lb2_table\000std", NULL,
    {"lb2_table\000std_types"}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_binary_node\000basic_collections", NULL,
    {.position = POS(44, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "undefined\000", NULL,
    {.position = POS(46, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "tuple\000", NULL,
    {.position = POS(46, 7)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "52_5_myself\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "53_5_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "54_5_value\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "56_4_contents\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "equal\000std", NULL,
    {.position = POS(58, 5)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "retrieve\000", NULL,
    {.position = POS(59, 8)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_defined\000", NULL,
    {.position = POS(62, 15)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "length_of\000", NULL,
    {.position = POS(70, 28)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000std", NULL,
    {.position = POS(70, 28)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if_not\000", NULL,
    {.position = POS(64, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "minus\000std", NULL,
    {.position = POS(79, 28)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if\000", NULL,
    {.position = POS(61, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "retrieve_method\000", NULL,
    {.position = POS(93, 16)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "typed_tuple\000", NULL,
    {.position = POS(99, 6)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "101_16_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "101_21_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "101_25_value\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "102_9_left\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "102_15_right\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "102_22_my_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "102_30_my_value\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "102_40_my_length\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "103_4_did_insert\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "less\000std", NULL,
    {.position = POS(109, 9)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "111_37_new_length\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "116_16_right_length\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "times\000std", NULL,
    {.position = POS(118, 48)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "and\000std", NULL,
    {.position = POS(118, 30)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "122_22_left_left\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "123_22_left_right\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "124_22_left_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "125_22_left_value\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "127_20_left_right_length\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "175_38_new_length\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "180_16_left_length\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "186_22_right_left\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "187_22_right_right\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "188_22_right_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "189_22_right_value\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "191_20_right_left_length\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "249_16_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "250_9_left\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "250_15_right\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "250_22_my_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "250_30_my_value\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "250_40_my_length\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "260_16_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "260_21_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "261_9_left\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "261_15_right\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "261_22_my_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "261_30_my_value\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "261_40_my_length\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "for_each_1_left\000", NULL,
    {.position = POS(294, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "for_each_1_left_method\000", NULL,
    {.position = POS(294, 23)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "for_each_2_left\000", NULL,
    {.position = POS(295, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "for_each_2_left_method\000", NULL,
    {.position = POS(295, 23)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "for_each_1_call\000", NULL,
    {.position = POS(296, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "for_each_1_call_method\000", NULL,
    {.position = POS(296, 23)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "for_each_2_call\000", NULL,
    {.position = POS(297, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "for_each_2_call_method\000", NULL,
    {.position = POS(297, 23)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "for_each_1_right\000", NULL,
    {.position = POS(298, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "for_each_1_right_method\000", NULL,
    {.position = POS(298, 24)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "for_each_2_right\000", NULL,
    {.position = POS(299, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "for_each_2_right_method\000", NULL,
    {.position = POS(299, 24)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "map_1\000", NULL,
    {.position = POS(304, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "map_1_method\000", NULL,
    {.position = POS(304, 13)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "map_2\000", NULL,
    {.position = POS(305, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "map_2_method\000", NULL,
    {.position = POS(305, 13)}
  }
};

static FUNKY_NAMESPACE used_namespaces[] = {
  {"std", 1, 0},
  {"basic_collections", 1, 0}
};

FUNKY_MODULE module__basic__types__collections__tables__lb2_table = {
  "_basic__types__collections__tables__lb2_table", // module name
  "basic/types/collections/tables/lb2_table.fky", // module filename
  .major_version = 0,
  .minor_version = 0,
  .feature_flags = FEAT_POSITIONS|FEAT_FUNCTION_INFO,
  .marker = 0,
  0, // number of required modules
  0, // number of defined namespaces
  2, // number of used namespaces
  50, // number of constants
  87, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  constants_table,
  variables_table,
};
