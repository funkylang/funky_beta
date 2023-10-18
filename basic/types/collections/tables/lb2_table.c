#include <stddef.h>
#include <stdint.h>

#include "runtime/common.h"
#include "runtime/builtins.h"
#include "runtime/fko.h"
#include "runtime/memory.h"

enum {
  tuple_44_0 = -1,
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
  var_50_0_myself, // dynamic
  var_51_0_key, // dynamic
  var_52_0_value, // dynamic
  var_54_1_contents, // dynamic
  var_std__equal, // extern
  var_retrieve, // extern polymorphic
  var_is_defined, // extern
  var_length_of, // extern polymorphic
  var_std__plus, // extern
  var_if_not, // extern
  var_std__minus, // extern
  var_if, // extern
  var_retrieve_method, // extern
  var_new, // extern
  var_99_15_self, // dynamic
  var_99_20_key, // dynamic
  var_99_24_value, // dynamic
  var_100_6_left, // dynamic
  var_100_12_right, // dynamic
  var_100_19_my_key, // dynamic
  var_100_27_my_value, // dynamic
  var_100_37_my_length, // dynamic
  var_101_1_did_insert, // dynamic
  var_std__less, // extern
  var_109_26_new_length, // dynamic
  var_114_1_right_length, // dynamic
  var_std__times, // extern
  var_std__and, // extern
  var_120_1_left_left, // dynamic
  var_121_1_left_right, // dynamic
  var_122_1_left_key, // dynamic
  var_123_1_left_value, // dynamic
  var_125_1_left_right_length, // dynamic
  var_173_27_new_length, // dynamic
  var_178_1_left_length, // dynamic
  var_184_1_right_left, // dynamic
  var_185_1_right_right, // dynamic
  var_186_1_right_key, // dynamic
  var_187_1_right_value, // dynamic
  var_189_1_right_left_length, // dynamic
  var_247_15_self, // dynamic
  var_248_6_left, // dynamic
  var_248_12_right, // dynamic
  var_248_19_my_key, // dynamic
  var_248_27_my_value, // dynamic
  var_248_37_my_length, // dynamic
  var_258_15_self, // dynamic
  var_258_20_key, // dynamic
  var_259_6_left, // dynamic
  var_259_12_right, // dynamic
  var_259_19_my_key, // dynamic
  var_259_27_my_value, // dynamic
  var_259_37_my_length, // dynamic
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
  MYSELF_PARAMETER, var_50_0_myself,
  MANDATORY_PARAMETER, var_51_0_key,
  uni_NONE, var_52_0_value,
  // $contents contents_of(myself)
  var_contents_of, 1, var_50_0_myself, 1, var_54_1_contents,
  // NONE == value
  var_std__equal, 2, uni_NONE, var_52_0_value, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1, lambda_2, TAIL_CALL,
  POS(54, 3),
  POS(56, 5),
  POS(55, 3)
};

static TAB_NUM t_lambda_1[] = {
  1, // locals
  0, // parameters
  // retrieve(contents key)
  var_retrieve, 2, var_54_1_contents, var_51_0_key, 1, LOCAL(1),
  //  retrieve(contents key)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(57, 8),
  POS(57, 7)
};

static TAB_NUM t_lambda_2[] = {
  1, // locals
  0, // parameters
  // is_defined:
  var_is_defined, 1, var_52_0_value, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_value_is_defined, lambda_5, TAIL_CALL,
  POS(60, 15),
  POS(59, 7)
};

static TAB_NUM t_lambda_value_is_defined[] = {
  2, // locals
  0, // parameters
  // insert &contents $did_insert $_my_length key value
  var_insert, 3, var_54_1_contents, var_51_0_key, var_52_0_value, 3, var_54_1_contents, LOCAL(2), LOCAL(1),
  // if_not
  var_if_not, 3, LOCAL(2), lambda_3, lambda_4, TAIL_CALL,
  POS(61, 11),
  POS(62, 11)
};

static TAB_NUM t_lambda_3[] = {
  1, // locals
  0, // parameters
  // .contents_of contents)
  LET, -1, var_50_0_myself, var_contents_of, var_54_1_contents, LOCAL(1),
  //  myself(.contents_of contents)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(64, 23),
  POS(64, 15)
};

static TAB_NUM t_lambda_4[] = {
  3, // locals
  0, // parameters
  // length_of(myself)+1
  var_length_of, 1, var_50_0_myself, 1, LOCAL(1),
  // length_of(myself)+1
  var_std__plus, 2, LOCAL(1), num_1, 1, LOCAL(2),
  // myself
  LET, -2, var_50_0_myself, var_contents_of, var_54_1_contents, var_length_of, LOCAL(2), LOCAL(3),
  // 
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(68, 28),
  POS(68, 28),
  POS(66, 15),
  POS(65, 15)
};

static TAB_NUM t_lambda_5[] = {
  2, // locals
  0, // parameters
  // delete &contents $did_delete $_my_length key
  var_delete, 2, var_54_1_contents, var_51_0_key, 3, var_54_1_contents, LOCAL(2), LOCAL(1),
  // if_not
  var_if_not, 3, LOCAL(2), lambda_6, lambda_7, TAIL_CALL,
  POS(70, 11),
  POS(71, 11)
};

static TAB_NUM t_lambda_6[] = {
  0, // locals
  0, // parameters
  //  myself
  LET, 1, var_50_0_myself, TAIL_CALL,
  POS(73, 15)
};

static TAB_NUM t_lambda_7[] = {
  3, // locals
  0, // parameters
  // length_of(myself)-1
  var_length_of, 1, var_50_0_myself, 1, LOCAL(1),
  // length_of(myself)-1
  var_std__minus, 2, LOCAL(1), num_1, 1, LOCAL(2),
  // myself
  LET, -2, var_50_0_myself, var_contents_of, var_54_1_contents, var_length_of, LOCAL(2), LOCAL(3),
  // 
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(77, 28),
  POS(77, 28),
  POS(75, 15),
  POS(74, 15)
};

static TAB_NUM t_func_node___length_of[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 84_18_self
  // self $_left $_right $_my_key $_my_value $my_length
  LOCAL(2), 0, 5, LOCAL(1), LOCAL(1), LOCAL(1), LOCAL(1), LOCAL(3),
  // -> my_length
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(85, 3),
  POS(86, 3)
};

static TAB_NUM t_func_empty_node___insert[] = {
  3, // locals
  3, // parameters
  LOCAL(1),
  LOCAL(2), // 96_27_key
  LOCAL(3), // 96_31_value
  // new(node empty_node empty_node key value 1) true 1
  var_new, 6, var_node, var_empty_node, var_empty_node, LOCAL(2), LOCAL(3), num_1, 1, LOCAL(1),
  // -> new(node empty_node empty_node key value 1) true 1
  LET, 3, LOCAL(1), var_true, num_1, TAIL_CALL,
  POS(97, 6),
  POS(97, 3)
};

static TAB_NUM t_func_node___insert[] = {
  1, // locals
  3, // parameters
  var_99_15_self,
  var_99_20_key,
  var_99_24_value,
  // self $left $right $my_key $my_value $my_length
  var_99_15_self, 0, 5, var_100_6_left, var_100_12_right, var_100_19_my_key, var_100_27_my_value, var_100_37_my_length,
  // $did_insert undefined
  LET, 1, var_undefined, 1, var_101_1_did_insert,
  // key == my_key
  var_std__equal, 2, var_99_20_key, var_100_19_my_key, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_8, lambda_9, TAIL_CALL,
  POS(100, 3),
  POS(101, 3),
  POS(103, 5),
  POS(102, 3)
};

static TAB_NUM t_lambda_8[] = {
  1, // locals
  0, // parameters
  // new(self left right key value my_length) false my_length
  var_new, 6, var_99_15_self, var_100_6_left, var_100_12_right, var_99_20_key, var_99_24_value, var_100_37_my_length, 1, LOCAL(1),
  //  new(self left right key value my_length) false my_length
  LET, 3, LOCAL(1), var_false, var_100_37_my_length, TAIL_CALL,
  POS(104, 8),
  POS(104, 7)
};

static TAB_NUM t_lambda_9[] = {
  1, // locals
  0, // parameters
  // key < my_key
  var_std__less, 2, var_99_20_key, var_100_19_my_key, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_10, lambda_16, TAIL_CALL,
  POS(107, 9),
  POS(106, 7)
};

static TAB_NUM t_lambda_10[] = {
  0, // locals
  0, // parameters
  // insert &left !did_insert $new_length key value
  var_insert, 3, var_100_6_left, var_99_20_key, var_99_24_value, 3, var_100_6_left, var_101_1_did_insert, var_109_26_new_length,
  // if_not
  var_if_not, 3, var_101_1_did_insert, lambda_22, lambda_11, TAIL_CALL,
  POS(109, 11),
  POS(110, 11)
};

static TAB_NUM t_lambda_11[] = {
  2, // locals
  0, // parameters
  // $right_length length_of(right)
  var_length_of, 1, var_100_12_right, 1, var_114_1_right_length,
  // 1 && new_length > 2*right_length
  var_std__less, 2, num_1, var_109_26_new_length, 1, LOCAL(1),
  // 1 && new_length > 2*right_length
  var_std__and, 2, LOCAL(1), lambda_12, 1, LOCAL(2),
  // if_not
  var_if_not, 3, LOCAL(2), func_inc_length_and_return, lambda_13, TAIL_CALL,
  POS(114, 15),
  POS(116, 30),
  POS(116, 30),
  POS(115, 15)
};

static TAB_NUM t_lambda_12[] = {
  2, // locals
  0, // parameters
  // 2*right_length
  var_std__times, 2, num_2, var_114_1_right_length, 1, LOCAL(1),
  // 2*right_length
  var_std__less, 2, LOCAL(1), var_109_26_new_length, 1, LOCAL(2),
  // new_length > 2*right_length
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(116, 48),
  POS(116, 48),
  POS(116, 35)
};

static TAB_NUM t_lambda_13[] = {
  4, // locals
  0, // parameters
  // left
  var_100_6_left, 0, 4, var_120_1_left_left, var_121_1_left_right, var_122_1_left_key, var_123_1_left_value,
  // $left_left_length length_of(left_left)
  var_length_of, 1, var_120_1_left_left, 1, LOCAL(4),
  // $left_right_length length_of(left_right)
  var_length_of, 1, var_121_1_left_right, 1, var_125_1_left_right_length,
  // left_right_length+right_length > 2*left_left_length
  var_std__plus, 2, var_125_1_left_right_length, var_114_1_right_length, 1, LOCAL(1),
  // 2*left_left_length
  var_std__times, 2, num_2, LOCAL(4), 1, LOCAL(2),
  // 2*left_left_length
  var_std__less, 2, LOCAL(2), LOCAL(1), 1, LOCAL(3),
  // if_not
  var_if_not, 3, LOCAL(3), lambda_14, lambda_15, TAIL_CALL,
  POS(119, 19),
  POS(124, 19),
  POS(125, 19),
  POS(127, 21),
  POS(127, 54),
  POS(127, 54),
  POS(126, 19)
};

static TAB_NUM t_lambda_14[] = {
  6, // locals
  0, // parameters
  // left_right_length+right_length+1
  var_std__plus, 2, var_125_1_left_right_length, var_114_1_right_length, 1, LOCAL(1),
  // left_right_length+right_length+1
  var_std__plus, 2, LOCAL(1), num_1, 1, LOCAL(2),
  // new
  var_new, 6, var_node, var_121_1_left_right, var_100_12_right, var_100_19_my_key, var_100_27_my_value, LOCAL(2), 1, LOCAL(3),
  // my_length+1
  var_std__plus, 2, var_100_37_my_length, num_1, 1, LOCAL(4),
  // new
  var_new, 6, var_node, var_120_1_left_left, LOCAL(3), var_122_1_left_key, var_123_1_left_value, LOCAL(4), 1, LOCAL(5),
  // my_length+1
  var_std__plus, 2, var_100_37_my_length, num_1, 1, LOCAL(6),
  // 
  LET, 3, LOCAL(5), var_true, LOCAL(6), TAIL_CALL,
  POS(138, 27),
  POS(138, 27),
  POS(132, 25),
  POS(141, 25),
  POS(129, 23),
  POS(143, 23),
  POS(128, 23)
};

static TAB_NUM t_lambda_15[] = {
  16, // locals
  0, // parameters
  // left_right
  var_121_1_left_right, 0, 4, LOCAL(13), LOCAL(14), LOCAL(15), LOCAL(16),
  // length_of(left_left)+length_of(left_right_left)+1
  var_length_of, 1, var_120_1_left_left, 1, LOCAL(1),
  // length_of(left_right_left)+1
  var_length_of, 1, LOCAL(13), 1, LOCAL(2),
  // length_of(left_left)+length_of(left_right_left)+1
  var_std__plus, 2, LOCAL(1), LOCAL(2), 1, LOCAL(3),
  // length_of(left_left)+length_of(left_right_left)+1
  var_std__plus, 2, LOCAL(3), num_1, 1, LOCAL(4),
  // new
  var_new, 6, var_node, var_120_1_left_left, LOCAL(13), var_122_1_left_key, var_123_1_left_value, LOCAL(4), 1, LOCAL(5),
  // length_of(left_right_right)+1
  var_length_of, 1, LOCAL(14), 1, LOCAL(6),
  // right_length+length_of(left_right_right)+1
  var_std__plus, 2, var_114_1_right_length, LOCAL(6), 1, LOCAL(7),
  // right_length+length_of(left_right_right)+1
  var_std__plus, 2, LOCAL(7), num_1, 1, LOCAL(8),
  // new
  var_new, 6, var_node, LOCAL(14), var_100_12_right, var_100_19_my_key, var_100_27_my_value, LOCAL(8), 1, LOCAL(9),
  // my_length+1
  var_std__plus, 2, var_100_37_my_length, num_1, 1, LOCAL(10),
  // new
  var_new, 6, var_node, LOCAL(5), LOCAL(9), LOCAL(15), LOCAL(16), LOCAL(10), 1, LOCAL(11),
  // my_length+1
  var_std__plus, 2, var_100_37_my_length, num_1, 1, LOCAL(12),
  // ->
  LET, 3, LOCAL(11), var_true, LOCAL(12), TAIL_CALL,
  POS(145, 23),
  POS(159, 29),
  POS(159, 50),
  POS(159, 29),
  POS(159, 29),
  POS(153, 27),
  POS(166, 42),
  POS(166, 29),
  POS(166, 29),
  POS(160, 27),
  POS(169, 27),
  POS(151, 25),
  POS(171, 25),
  POS(150, 23)
};

static TAB_NUM t_lambda_16[] = {
  0, // locals
  0, // parameters
  // insert &right !did_insert $new_length key value
  var_insert, 3, var_100_12_right, var_99_20_key, var_99_24_value, 3, var_100_12_right, var_101_1_did_insert, var_173_27_new_length,
  // if_not
  var_if_not, 3, var_101_1_did_insert, lambda_22, lambda_17, TAIL_CALL,
  POS(173, 11),
  POS(174, 11)
};

static TAB_NUM t_lambda_17[] = {
  2, // locals
  0, // parameters
  // $left_length length_of(left)
  var_length_of, 1, var_100_6_left, 1, var_178_1_left_length,
  // 1 && new_length > 2*left_length
  var_std__less, 2, num_1, var_173_27_new_length, 1, LOCAL(1),
  // 1 && new_length > 2*left_length
  var_std__and, 2, LOCAL(1), lambda_18, 1, LOCAL(2),
  // if_not
  var_if_not, 3, LOCAL(2), func_inc_length_and_return, lambda_19, TAIL_CALL,
  POS(178, 15),
  POS(180, 30),
  POS(180, 30),
  POS(179, 15)
};

static TAB_NUM t_lambda_18[] = {
  2, // locals
  0, // parameters
  // 2*left_length
  var_std__times, 2, num_2, var_178_1_left_length, 1, LOCAL(1),
  // 2*left_length
  var_std__less, 2, LOCAL(1), var_173_27_new_length, 1, LOCAL(2),
  // new_length > 2*left_length
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(180, 48),
  POS(180, 48),
  POS(180, 35)
};

static TAB_NUM t_lambda_19[] = {
  4, // locals
  0, // parameters
  // right
  var_100_12_right, 0, 4, var_184_1_right_left, var_185_1_right_right, var_186_1_right_key, var_187_1_right_value,
  // $right_right_length length_of(right_right)
  var_length_of, 1, var_185_1_right_right, 1, LOCAL(4),
  // $right_left_length length_of(right_left)
  var_length_of, 1, var_184_1_right_left, 1, var_189_1_right_left_length,
  // right_left_length+left_length > 2*right_right_length
  var_std__plus, 2, var_189_1_right_left_length, var_178_1_left_length, 1, LOCAL(1),
  // 2*right_right_length
  var_std__times, 2, num_2, LOCAL(4), 1, LOCAL(2),
  // 2*right_right_length
  var_std__less, 2, LOCAL(2), LOCAL(1), 1, LOCAL(3),
  // if_not
  var_if_not, 3, LOCAL(3), lambda_20, lambda_21, TAIL_CALL,
  POS(183, 19),
  POS(188, 19),
  POS(189, 19),
  POS(191, 21),
  POS(191, 53),
  POS(191, 53),
  POS(190, 19)
};

static TAB_NUM t_lambda_20[] = {
  6, // locals
  0, // parameters
  // right_left_length+left_length+1
  var_std__plus, 2, var_189_1_right_left_length, var_178_1_left_length, 1, LOCAL(1),
  // right_left_length+left_length+1
  var_std__plus, 2, LOCAL(1), num_1, 1, LOCAL(2),
  // new
  var_new, 6, var_node, var_100_6_left, var_184_1_right_left, var_100_19_my_key, var_100_27_my_value, LOCAL(2), 1, LOCAL(3),
  // my_length+1
  var_std__plus, 2, var_100_37_my_length, num_1, 1, LOCAL(4),
  // new
  var_new, 6, var_node, LOCAL(3), var_185_1_right_right, var_186_1_right_key, var_187_1_right_value, LOCAL(4), 1, LOCAL(5),
  // my_length+1
  var_std__plus, 2, var_100_37_my_length, num_1, 1, LOCAL(6),
  // 
  LET, 3, LOCAL(5), var_true, LOCAL(6), TAIL_CALL,
  POS(201, 27),
  POS(201, 27),
  POS(195, 25),
  POS(205, 25),
  POS(193, 23),
  POS(207, 23),
  POS(192, 23)
};

static TAB_NUM t_lambda_21[] = {
  16, // locals
  0, // parameters
  // right_left
  var_184_1_right_left, 0, 4, LOCAL(13), LOCAL(14), LOCAL(15), LOCAL(16),
  // length_of(right_left_left)+1
  var_length_of, 1, LOCAL(13), 1, LOCAL(1),
  // left_length+length_of(right_left_left)+1
  var_std__plus, 2, var_178_1_left_length, LOCAL(1), 1, LOCAL(2),
  // left_length+length_of(right_left_left)+1
  var_std__plus, 2, LOCAL(2), num_1, 1, LOCAL(3),
  // new
  var_new, 6, var_node, var_100_6_left, LOCAL(13), var_100_19_my_key, var_100_27_my_value, LOCAL(3), 1, LOCAL(4),
  // length_of(right_right)+length_of(right_left_right)+1
  var_length_of, 1, var_185_1_right_right, 1, LOCAL(5),
  // length_of(right_left_right)+1
  var_length_of, 1, LOCAL(14), 1, LOCAL(6),
  // length_of(right_right)+length_of(right_left_right)+1
  var_std__plus, 2, LOCAL(5), LOCAL(6), 1, LOCAL(7),
  // length_of(right_right)+length_of(right_left_right)+1
  var_std__plus, 2, LOCAL(7), num_1, 1, LOCAL(8),
  // new
  var_new, 6, var_node, LOCAL(14), var_185_1_right_right, var_186_1_right_key, var_187_1_right_value, LOCAL(8), 1, LOCAL(9),
  // my_length+1
  var_std__plus, 2, var_100_37_my_length, num_1, 1, LOCAL(10),
  // new
  var_new, 6, var_node, LOCAL(4), LOCAL(9), LOCAL(15), LOCAL(16), LOCAL(10), 1, LOCAL(11),
  // my_length+1
  var_std__plus, 2, var_100_37_my_length, num_1, 1, LOCAL(12),
  // ->
  LET, 3, LOCAL(11), var_true, LOCAL(12), TAIL_CALL,
  POS(209, 23),
  POS(223, 41),
  POS(223, 29),
  POS(223, 29),
  POS(217, 27),
  POS(230, 29),
  POS(230, 52),
  POS(230, 29),
  POS(230, 29),
  POS(224, 27),
  POS(233, 27),
  POS(215, 25),
  POS(235, 25),
  POS(214, 23)
};

static TAB_NUM t_func_inc_length_and_return[] = {
  0, // locals
  0, // parameters
  // !my_length my_length+1
  var_std__plus, 2, var_100_37_my_length, num_1, 1, var_100_37_my_length,
  // return
  lambda_22, 0, TAIL_CALL,
  POS(238, 5),
  POS(239, 5)
};

static TAB_NUM t_lambda_22[] = {
  1, // locals
  0, // parameters
  // new(self left right my_key my_value my_length) did_insert my_length
  var_new, 6, var_99_15_self, var_100_6_left, var_100_12_right, var_100_19_my_key, var_100_27_my_value, var_100_37_my_length, 1, LOCAL(1),
  //  new(self left right my_key my_value my_length) did_insert my_length
  LET, 3, LOCAL(1), var_101_1_did_insert, var_100_37_my_length, TAIL_CALL,
  POS(242, 8),
  POS(242, 7)
};

static TAB_NUM t_func_fetch_first[] = {
  1, // locals
  1, // parameters
  var_247_15_self,
  // self $left $right $my_key $my_value $my_length
  var_247_15_self, 0, 5, var_248_6_left, var_248_12_right, var_248_19_my_key, var_248_27_my_value, var_248_37_my_length,
  // is_an_empty_node
  var_is_an_empty_node, 1, var_248_6_left, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_23, lambda_24, TAIL_CALL,
  POS(248, 3),
  POS(250, 10),
  POS(249, 3)
};

static TAB_NUM t_lambda_23[] = {
  0, // locals
  0, // parameters
  //  right my_key my_value my_length
  LET, 4, var_248_12_right, var_248_19_my_key, var_248_27_my_value, var_248_37_my_length, TAIL_CALL,
  POS(251, 7)
};

static TAB_NUM t_lambda_24[] = {
  3, // locals
  0, // parameters
  // fetch_first &left $first_key $first_value
  func_fetch_first, 1, var_248_6_left, 3, var_248_6_left, LOCAL(2), LOCAL(3),
  // new(self left right my_key my_value my_length) first_key first_value
  var_new, 6, var_247_15_self, var_248_6_left, var_248_12_right, var_248_19_my_key, var_248_27_my_value, var_248_37_my_length, 1, LOCAL(1),
  // -> new(self left right my_key my_value my_length) first_key first_value
  LET, 3, LOCAL(1), LOCAL(2), LOCAL(3), TAIL_CALL,
  POS(253, 7),
  POS(254, 10),
  POS(254, 7)
};

static TAB_NUM t_func_empty_node___delete[] = {
  2, // locals
  2, // parameters
  LOCAL(2), // 256_21_self
  LOCAL(1),
  // -> self false 0
  LET, 3, LOCAL(2), var_false, num_0, TAIL_CALL,
  POS(256, 33)
};

static TAB_NUM t_func_node___delete[] = {
  1, // locals
  2, // parameters
  var_258_15_self,
  var_258_20_key,
  // self $left $right $my_key $my_value $my_length
  var_258_15_self, 0, 5, var_259_6_left, var_259_12_right, var_259_19_my_key, var_259_27_my_value, var_259_37_my_length,
  // key == my_key
  var_std__equal, 2, var_258_20_key, var_259_19_my_key, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_25, lambda_30, TAIL_CALL,
  POS(259, 3),
  POS(261, 5),
  POS(260, 3)
};

static TAB_NUM t_lambda_25[] = {
  1, // locals
  0, // parameters
  // is_an_empty_node
  var_is_an_empty_node, 1, var_259_6_left, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_26, lambda_27, TAIL_CALL,
  POS(264, 14),
  POS(263, 7)
};

static TAB_NUM t_lambda_26[] = {
  0, // locals
  0, // parameters
  //  right true
  LET, 2, var_259_12_right, var_true, TAIL_CALL,
  POS(265, 11)
};

static TAB_NUM t_lambda_27[] = {
  1, // locals
  0, // parameters
  // is_an_empty_node
  var_is_an_empty_node, 1, var_259_12_right, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_28, lambda_29, TAIL_CALL,
  POS(268, 19),
  POS(267, 11)
};

static TAB_NUM t_lambda_28[] = {
  1, // locals
  0, // parameters
  // my_length-1
  var_std__minus, 2, var_259_37_my_length, num_1, 1, LOCAL(1),
  //  left true my_length-1
  LET, 3, var_259_6_left, var_true, LOCAL(1), TAIL_CALL,
  POS(269, 26),
  POS(269, 15)
};

static TAB_NUM t_lambda_29[] = {
  3, // locals
  0, // parameters
  // fetch_first &right $first_key $first_value
  func_fetch_first, 1, var_259_12_right, 3, var_259_12_right, LOCAL(2), LOCAL(3),
  // new(self left right first_key first_value my_length)
  var_new, 6, var_258_15_self, var_259_6_left, var_259_12_right, LOCAL(2), LOCAL(3), var_259_37_my_length, 1, LOCAL(1),
  // -> new(self left right first_key first_value my_length)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(271, 15),
  POS(272, 18),
  POS(272, 15)
};

static TAB_NUM t_lambda_30[] = {
  1, // locals
  0, // parameters
  // key < my_key
  var_std__less, 2, var_258_20_key, var_259_19_my_key, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_31, lambda_34, TAIL_CALL,
  POS(275, 9),
  POS(274, 7)
};

static TAB_NUM t_lambda_31[] = {
  2, // locals
  0, // parameters
  // delete &left $did_delete $_new_length key
  var_delete, 2, var_259_6_left, var_258_20_key, 3, var_259_6_left, LOCAL(2), LOCAL(1),
  // if_not
  var_if_not, 3, LOCAL(2), lambda_32, lambda_33, TAIL_CALL,
  POS(277, 11),
  POS(278, 11)
};

static TAB_NUM t_lambda_32[] = {
  0, // locals
  0, // parameters
  //  self false my_length
  LET, 3, var_258_15_self, var_false, var_259_37_my_length, TAIL_CALL,
  POS(280, 15)
};

static TAB_NUM t_lambda_33[] = {
  1, // locals
  0, // parameters
  // new(self left right my_key my_value my_length) true
  var_new, 6, var_258_15_self, var_259_6_left, var_259_12_right, var_259_19_my_key, var_259_27_my_value, var_259_37_my_length, 1, LOCAL(1),
  //  new(self left right my_key my_value my_length) true
  LET, 2, LOCAL(1), var_true, TAIL_CALL,
  POS(281, 16),
  POS(281, 15)
};

static TAB_NUM t_lambda_34[] = {
  2, // locals
  0, // parameters
  // delete &right $did_delete $_new_length key
  var_delete, 2, var_259_12_right, var_258_20_key, 3, var_259_12_right, LOCAL(2), LOCAL(1),
  // if_not
  var_if_not, 3, LOCAL(2), lambda_35, lambda_36, TAIL_CALL,
  POS(283, 11),
  POS(284, 11)
};

static TAB_NUM t_lambda_35[] = {
  0, // locals
  0, // parameters
  //  self false my_length
  LET, 3, var_258_15_self, var_false, var_259_37_my_length, TAIL_CALL,
  POS(286, 15)
};

static TAB_NUM t_lambda_36[] = {
  1, // locals
  0, // parameters
  // new(self left right my_key my_value my_length) true
  var_new, 6, var_258_15_self, var_259_6_left, var_259_12_right, var_259_19_my_key, var_259_27_my_value, var_259_37_my_length, 1, LOCAL(1),
  //  new(self left right my_key my_value my_length) true
  LET, 2, LOCAL(1), var_true, TAIL_CALL,
  POS(287, 16),
  POS(287, 15)
};

static int tuple_44_0_arguments[] = {
  -var_undefined, -var_undefined, -var_undefined, -var_undefined, -var_undefined
};

static FUNKY_CONSTANT constants_table[] = {
  {FLT_TUPLE, 5, {.arguments = tuple_44_0_arguments}},
  {FLT_UNIQUE, 0, {.str_8 = "NONE"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__lb2_table}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_value_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_3}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_4}},
  {FLT_POSITIVE_INT64, 0, {.value = 1}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_5}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_6}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_7}},
  {FLT_POSITIVE_INT64, 0, {.value = 0}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_node___length_of}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_empty_node___insert}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_node___insert}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_8}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_9}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_10}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_11}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_12}},
  {FLT_POSITIVE_INT64, 0, {.value = 2}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_13}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_14}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_15}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_16}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_17}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_18}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_19}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_20}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_21}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_inc_length_and_return}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_22}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_fetch_first}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_23}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_24}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_empty_node___delete}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_node___delete}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_25}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_26}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_27}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_28}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_29}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_30}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_31}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_32}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_33}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_34}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_35}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_36}}
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
    {.position = POS(28, 1)}
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
    {.position = POS(32, 1)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "is_a_lb2_table\000", NULL,
    {.position = POS(32, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "false\000", NULL,
    {.position = POS(32, 35)}
  },
  {
    FOT_DERIVED, 0, 3,
    "lb2_table\000std_types", std_types__lb2_table__attributes,
    {"binary_table\000std_types"}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "true\000", NULL,
    {.position = POS(33, 38)}
  },
  {
    FOT_INITIALIZED, 0, 13,
    "node\000", node__attributes,
    {.const_idx = -tuple_44_0}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "is_an_empty_node\000", NULL,
    {.position = POS(35, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "binary_table\000std_types", NULL,
    {.position = POS(37, 23)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "contents_of\000", NULL,
    {.position = POS(38, 23)}
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
    {.position = POS(42, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "undefined\000", NULL,
    {.position = POS(44, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "tuple\000", NULL,
    {.position = POS(44, 7)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "50_0_myself\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "51_0_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "52_0_value\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "54_1_contents\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "equal\000std", NULL,
    {.position = POS(56, 5)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "retrieve\000", NULL,
    {.position = POS(57, 8)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_defined\000", NULL,
    {.position = POS(60, 15)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "length_of\000", NULL,
    {.position = POS(68, 28)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000std", NULL,
    {.position = POS(68, 28)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if_not\000", NULL,
    {.position = POS(62, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "minus\000std", NULL,
    {.position = POS(77, 28)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if\000", NULL,
    {.position = POS(59, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "retrieve_method\000", NULL,
    {.position = POS(91, 16)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "new\000", NULL,
    {.position = POS(97, 6)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "99_15_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "99_20_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "99_24_value\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "100_6_left\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "100_12_right\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "100_19_my_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "100_27_my_value\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "100_37_my_length\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "101_1_did_insert\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "less\000std", NULL,
    {.position = POS(107, 9)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "109_26_new_length\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "114_1_right_length\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "times\000std", NULL,
    {.position = POS(116, 48)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "and\000std", NULL,
    {.position = POS(116, 30)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "120_1_left_left\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "121_1_left_right\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "122_1_left_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "123_1_left_value\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "125_1_left_right_length\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "173_27_new_length\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "178_1_left_length\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "184_1_right_left\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "185_1_right_right\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "186_1_right_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "187_1_right_value\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "189_1_right_left_length\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "247_15_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "248_6_left\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "248_12_right\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "248_19_my_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "248_27_my_value\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "248_37_my_length\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "258_15_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "258_20_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "259_6_left\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "259_12_right\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "259_19_my_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "259_27_my_value\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "259_37_my_length\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "for_each_1_left\000", NULL,
    {.position = POS(292, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "for_each_1_left_method\000", NULL,
    {.position = POS(292, 23)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "for_each_2_left\000", NULL,
    {.position = POS(293, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "for_each_2_left_method\000", NULL,
    {.position = POS(293, 23)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "for_each_1_call\000", NULL,
    {.position = POS(294, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "for_each_1_call_method\000", NULL,
    {.position = POS(294, 23)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "for_each_2_call\000", NULL,
    {.position = POS(295, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "for_each_2_call_method\000", NULL,
    {.position = POS(295, 23)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "for_each_1_right\000", NULL,
    {.position = POS(296, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "for_each_1_right_method\000", NULL,
    {.position = POS(296, 24)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "for_each_2_right\000", NULL,
    {.position = POS(297, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "for_each_2_right_method\000", NULL,
    {.position = POS(297, 24)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "map_1\000", NULL,
    {.position = POS(302, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "map_1_method\000", NULL,
    {.position = POS(302, 13)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "map_2\000", NULL,
    {.position = POS(303, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "map_2_method\000", NULL,
    {.position = POS(303, 13)}
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
  .feature_flags = FEAT_POSITIONS,
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
