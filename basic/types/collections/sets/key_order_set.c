#include <stddef.h>
#include <stdint.h>

#include "runtime/common.h"
#include "runtime/builtins.h"
#include "runtime/fko.h"
#include "runtime/memory.h"

enum {
  num_0 = -1,
  tuple_71_1 = -2,
  uni_NONE = -3,
  func_std_types__key_order_set = -4,
  lambda_1 = -5,
  lambda_2 = -6,
  lambda_value = -7,
  lambda_3 = -8,
  num_1 = -9,
  lambda_4 = -10,
  lambda_5 = -11,
  lambda_6 = -12,
  lambda_7 = -13,
  func_empty_node___retrieve = -14,
  func_binary_node___retrieve = -15,
  lambda_8 = -16,
  lambda_9 = -17,
  lambda_10 = -18,
  lambda_11 = -19,
  func_empty_node___insert = -20,
  func_binary_node___insert = -21,
  lambda_12 = -22,
  lambda_13 = -23,
  lambda_14 = -24,
  lambda_15 = -25,
  lambda_16 = -26,
  lambda_17 = -27,
  lambda_18 = -28,
  lambda_19 = -29,
  func_fetch_first = -30,
  lambda_20 = -31,
  lambda_21 = -32,
  func_empty_node___delete = -33,
  func_binary_node___delete = -34,
  lambda_22 = -35,
  lambda_23 = -36,
  lambda_24 = -37,
  lambda_25 = -38,
  lambda_26 = -39,
  lambda_27 = -40,
  lambda_28 = -41,
  lambda_29 = -42,
  lambda_30 = -43,
  lambda_31 = -44,
  lambda_32 = -45,
  lambda_33 = -46,
  func_empty_node___first_item_of = -47,
  func_binary_node___first_item_of = -48,
  lambda_34 = -49,
  lambda_35 = -50,
  func_std_types__key_order_set___first_item_of = -51,
  func_empty_node___last_item_of = -52,
  func_binary_node___last_item_of = -53,
  lambda_36 = -54,
  lambda_37 = -55,
  func_std_types__key_order_set___last_item_of = -56,
  func_empty_node___next_item_of = -57,
  func_binary_node___next_item_of = -58,
  lambda_38 = -59,
  lambda_39 = -60,
  lambda_40 = -61,
  lambda_41 = -62,
  lambda_42 = -63,
  lambda_43 = -64,
  func_std_types__key_order_set___next_item_of = -65,
  func_empty_node___previous_item_of = -66,
  func_binary_node___previous_item_of = -67,
  lambda_44 = -68,
  lambda_45 = -69,
  lambda_46 = -70,
  lambda_47 = -71,
  lambda_48 = -72,
  lambda_49 = -73,
  func_std_types__key_order_set___previous_item_of = -74,
  func_finish___for_each_1_call = -75,
  func_empty_node___for_each_1_left = -76,
  minus_num_1 = -77,
  func_binary_node___for_each_1_left = -78,
  func_binary_node___for_each_1_call = -79,
  func_binary_node___for_each_1_right = -80,
  func_std_types__key_order_set___for_each = -81,
  lambda_50 = -82,
  lambda_next = -83,
  func_std_types__key_order_set___reduce = -84,
  lambda_51 = -85,
  lambda_52 = -86,
  func_reduce = -87,
  lambda_53 = -88,
  lambda_54 = -89,
  lambda_55 = -90,
  lambda_56 = -91,
  func_std_types__key_order_set___map_reduce = -92,
  lambda_57 = -93,
  lambda_58 = -94,
  func_map_reduce = -95,
  lambda_59 = -96,
  lambda_60 = -97,
  lambda_61 = -98,
  lambda_62 = -99,
  func_std__key_order_set = -100,
  lambda_63 = -101,
  lambda_64 = -102,
  str_key_order_set = -103
};

enum {
  var__START = FIRST_VAR-1,
  var_contents_of, // attribute
  var_std__assign, // extern
  var_retrieve, // attribute
  var_insert, // attribute
  var_delete, // attribute
  var_std__is_a_key_order_set, // attribute
  var_std_types__object, // extern
  var_is_a_key_order_set, // extern polymorphic
  var_false, // extern
  var_std_types__key_order_set, // derived
  var_true, // extern
  var_std_types__set, // extern
  var_empty_node, // derived
  var_length_of, // extern polymorphic
  var_std__empty_key_order_set, // derived
  var_is_an_empty_node, // attribute
  var_binary_node, // initialized compound
  var_undefined, // extern
  var_tuple, // extern
  var_78_5_myself, // dynamic
  var_79_5_key, // dynamic
  var_80_5_value, // dynamic
  var_82_4_contents, // dynamic
  var_std__equal, // extern
  var_std__plus, // extern
  var_if, // extern
  var_std__minus, // extern
  var_112_30_key, // dynamic
  var_113_9_my_key, // dynamic
  var_113_17_my_left, // dynamic
  var_113_26_my_right, // dynamic
  var_std__less, // extern
  var_typed_tuple, // extern
  var_129_23_self, // dynamic
  var_129_28_key, // dynamic
  var_130_9_my_key, // dynamic
  var_130_17_my_left, // dynamic
  var_130_26_my_right, // dynamic
  var_153_16_self, // dynamic
  var_154_9_my_key, // dynamic
  var_154_17_my_left, // dynamic
  var_154_26_my_right, // dynamic
  var_164_23_self, // dynamic
  var_164_28_key, // dynamic
  var_165_9_my_key, // dynamic
  var_165_17_my_left, // dynamic
  var_165_26_my_right, // dynamic
  var_first_item_of, // extern polymorphic
  var_201_9_my_key, // dynamic
  var_201_17_my_left, // dynamic
  var_last_item_of, // extern polymorphic
  var_216_9_my_key, // dynamic
  var_216_27_my_right, // dynamic
  var_next_item_of, // extern polymorphic
  var_230_34_key, // dynamic
  var_232_9_my_key, // dynamic
  var_232_17_my_left, // dynamic
  var_232_26_my_right, // dynamic
  var_239_12_next_key, // dynamic
  var_is_defined, // extern
  var_previous_item_of, // extern polymorphic
  var_254_38_key, // dynamic
  var_256_9_my_key, // dynamic
  var_256_17_my_left, // dynamic
  var_256_26_my_right, // dynamic
  var_263_12_previous_key, // dynamic
  var_for_each_1_left, // attribute
  var_for_each_1_call, // attribute
  var_for_each_1_right, // attribute
  var_finish, // derived
  var_break, // extern
  var_basic_loops__todo, // extern
  var_push, // extern
  var_basic_loops__body, // extern
  var_for_each, // extern polymorphic
  var_331_5_finally, // dynamic
  var_next, // extern
  var_basic_loops__finally, // extern
  var_list, // extern
  var_basic_types__break_function, // extern
  var_basic_loops__saved_context_of, // extern polymorphic
  var_new, // extern
  var_pop, // extern
  var_reduce, // extern polymorphic
  var_365_5_self, // dynamic
  var_366_5_reduce_function, // dynamic
  var_367_5_unit, // dynamic
  var_is_empty, // extern
  var_374_15_key, // dynamic
  var_374_20_left, // dynamic
  var_374_26_right, // dynamic
  var_map_reduce, // extern polymorphic
  var_391_5_self, // dynamic
  var_392_5_map_function, // dynamic
  var_393_5_reduce_function, // dynamic
  var_append, // extern
  var_394_5_unit, // dynamic
  var_401_15_key, // dynamic
  var_401_20_left, // dynamic
  var_401_26_right, // dynamic
  var_std__key_order_set, // initialized
  var_415_4_result, // dynamic
  var_empty_key_order_set, // extern
  var_serialization_tag_of, // extern polymorphic
  var_empty_collection_of, // extern polymorphic
  var_deserializers, // extern
  var_register_type, // extern
  var__END
};


static TAB_NUM t_func_std_types__key_order_set[] = {
  1, // locals
  -3, // parameters
  MYSELF_PARAMETER, var_78_5_myself,
  MANDATORY_PARAMETER, var_79_5_key,
  uni_NONE, var_80_5_value,
  // $contents contents_of(myself)
  var_contents_of, 1, var_78_5_myself, 1, var_82_4_contents,
  // NONE == value
  var_std__equal, 2, uni_NONE, var_80_5_value, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1, lambda_2, TAIL_CALL,
  POS(82, 3),
  POS(84, 5),
  POS(83, 3)
};

static FUNCTION_INFO i_func_std_types__key_order_set = {
  t_func_std_types__key_order_set, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_1[] = {
  1, // locals
  0, // parameters
  // retrieve(contents key)
  var_retrieve, 2, var_82_4_contents, var_79_5_key, 1, LOCAL(1),
  //  retrieve(contents key)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(85, 8),
  POS(85, 7)
};

static FUNCTION_INFO i_lambda_1 = {
  t_lambda_1, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_2[] = {
  0, // locals
  0, // parameters
  // if
  var_if, 3, var_80_5_value, lambda_value, lambda_5, TAIL_CALL,
  POS(87, 7)
};

static FUNCTION_INFO i_lambda_2 = {
  t_lambda_2, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_value[] = {
  1, // locals
  0, // parameters
  // insert &contents $success key
  var_insert, 2, var_82_4_contents, var_79_5_key, 2, var_82_4_contents, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_3, lambda_4, TAIL_CALL,
  POS(89, 11),
  POS(90, 11),
  LOCAL(1)
};

static FUNCTION_INFO i_lambda_value = {
  t_lambda_value, NULL, 2, 1,
  {"89_29_success\000"}
};

static TAB_NUM t_lambda_3[] = {
  3, // locals
  0, // parameters
  // length_of(myself)+1
  var_length_of, 1, var_78_5_myself, 1, LOCAL(1),
  // length_of(myself)+1
  var_std__plus, 2, LOCAL(1), num_1, 1, LOCAL(2),
  // myself
  LET, -2, var_78_5_myself, var_contents_of, var_82_4_contents, var_length_of, LOCAL(2), LOCAL(3),
  // 
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(95, 28),
  POS(95, 28),
  POS(93, 15),
  POS(92, 15)
};

static FUNCTION_INFO i_lambda_3 = {
  t_lambda_3, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_4[] = {
  0, // locals
  0, // parameters
  //  myself
  LET, 1, var_78_5_myself, TAIL_CALL,
  POS(96, 15)
};

static FUNCTION_INFO i_lambda_4 = {
  t_lambda_4, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_5[] = {
  1, // locals
  0, // parameters
  // delete &contents $success key
  var_delete, 2, var_82_4_contents, var_79_5_key, 2, var_82_4_contents, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_6, lambda_7, TAIL_CALL,
  POS(98, 11),
  POS(99, 11),
  LOCAL(1)
};

static FUNCTION_INFO i_lambda_5 = {
  t_lambda_5, NULL, 2, 1,
  {"98_29_success\000"}
};

static TAB_NUM t_lambda_6[] = {
  3, // locals
  0, // parameters
  // length_of(myself)-1
  var_length_of, 1, var_78_5_myself, 1, LOCAL(1),
  // length_of(myself)-1
  var_std__minus, 2, LOCAL(1), num_1, 1, LOCAL(2),
  // myself
  LET, -2, var_78_5_myself, var_contents_of, var_82_4_contents, var_length_of, LOCAL(2), LOCAL(3),
  // 
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(104, 28),
  POS(104, 28),
  POS(102, 15),
  POS(101, 15)
};

static FUNCTION_INFO i_lambda_6 = {
  t_lambda_6, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_7[] = {
  0, // locals
  0, // parameters
  //  myself
  LET, 1, var_78_5_myself, TAIL_CALL,
  POS(105, 15)
};

static FUNCTION_INFO i_lambda_7 = {
  t_lambda_7, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_empty_node___retrieve[] = {
  1, // locals
  2, // parameters
  LOCAL(1),
  LOCAL(1),
  // -> false
  LET, 1, var_false, TAIL_CALL,
  POS(110, 36)
};

static FUNCTION_INFO i_func_empty_node___retrieve = {
  t_func_empty_node___retrieve, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_binary_node___retrieve[] = {
  2, // locals
  2, // parameters
  LOCAL(2), // 112_25_self
  var_112_30_key,
  // self $my_key $my_left $my_right
  LOCAL(2), 0, 3, var_113_9_my_key, var_113_17_my_left, var_113_26_my_right,
  // key == my_key
  var_std__equal, 2, var_112_30_key, var_113_9_my_key, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_8, lambda_9, TAIL_CALL,
  POS(113, 3),
  POS(115, 5),
  POS(114, 3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_binary_node___retrieve = {
  t_func_binary_node___retrieve, NULL, 3, 1,
  {"112_25_self\000"}
};

static TAB_NUM t_lambda_8[] = {
  0, // locals
  0, // parameters
  //  true
  LET, 1, var_true, TAIL_CALL,
  POS(116, 7)
};

static FUNCTION_INFO i_lambda_8 = {
  t_lambda_8, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_9[] = {
  1, // locals
  0, // parameters
  // key < my_key
  var_std__less, 2, var_112_30_key, var_113_9_my_key, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_10, lambda_11, TAIL_CALL,
  POS(119, 9),
  POS(118, 7)
};

static FUNCTION_INFO i_lambda_9 = {
  t_lambda_9, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_10[] = {
  0, // locals
  0, // parameters
  // retrieve my_left key
  var_retrieve, 2, var_113_17_my_left, var_112_30_key, TAIL_CALL,
  POS(120, 11)
};

static FUNCTION_INFO i_lambda_10 = {
  t_lambda_10, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_11[] = {
  0, // locals
  0, // parameters
  // retrieve my_right key
  var_retrieve, 2, var_113_26_my_right, var_112_30_key, TAIL_CALL,
  POS(121, 11)
};

static FUNCTION_INFO i_lambda_11 = {
  t_lambda_11, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_empty_node___insert[] = {
  2, // locals
  2, // parameters
  LOCAL(1),
  LOCAL(2), // 126_28_key
  // typed_tuple(binary_node key empty_node empty_node) true
  var_typed_tuple, 4, var_binary_node, LOCAL(2), var_empty_node, var_empty_node, 1, LOCAL(1),
  // -> typed_tuple(binary_node key empty_node empty_node) true
  LET, 2, LOCAL(1), var_true, TAIL_CALL,
  POS(127, 6),
  POS(127, 3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_empty_node___insert = {
  t_func_empty_node___insert, NULL, 2, 1,
  {"126_28_key\000"}
};

static TAB_NUM t_func_binary_node___insert[] = {
  1, // locals
  2, // parameters
  var_129_23_self,
  var_129_28_key,
  // self $my_key $my_left $my_right
  var_129_23_self, 0, 3, var_130_9_my_key, var_130_17_my_left, var_130_26_my_right,
  // key == my_key
  var_std__equal, 2, var_129_28_key, var_130_9_my_key, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_12, lambda_13, TAIL_CALL,
  POS(130, 3),
  POS(132, 5),
  POS(131, 3)
};

static FUNCTION_INFO i_func_binary_node___insert = {
  t_func_binary_node___insert, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_12[] = {
  0, // locals
  0, // parameters
  //  self false
  LET, 2, var_129_23_self, var_false, TAIL_CALL,
  POS(133, 7)
};

static FUNCTION_INFO i_lambda_12 = {
  t_lambda_12, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_13[] = {
  1, // locals
  0, // parameters
  // key < my_key
  var_std__less, 2, var_129_28_key, var_130_9_my_key, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_14, lambda_17, TAIL_CALL,
  POS(136, 9),
  POS(135, 7)
};

static FUNCTION_INFO i_lambda_13 = {
  t_lambda_13, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_14[] = {
  1, // locals
  0, // parameters
  // insert &my_left $success key
  var_insert, 2, var_130_17_my_left, var_129_28_key, 2, var_130_17_my_left, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_15, lambda_16, TAIL_CALL,
  POS(138, 11),
  POS(139, 11),
  LOCAL(1)
};

static FUNCTION_INFO i_lambda_14 = {
  t_lambda_14, NULL, 2, 1,
  {"138_28_success\000"}
};

static TAB_NUM t_lambda_15[] = {
  1, // locals
  0, // parameters
  // typed_tuple(self my_key my_left my_right) true
  var_typed_tuple, 4, var_129_23_self, var_130_9_my_key, var_130_17_my_left, var_130_26_my_right, 1, LOCAL(1),
  //  typed_tuple(self my_key my_left my_right) true
  LET, 2, LOCAL(1), var_true, TAIL_CALL,
  POS(141, 16),
  POS(141, 15)
};

static FUNCTION_INFO i_lambda_15 = {
  t_lambda_15, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_16[] = {
  0, // locals
  0, // parameters
  //  self false
  LET, 2, var_129_23_self, var_false, TAIL_CALL,
  POS(142, 15)
};

static FUNCTION_INFO i_lambda_16 = {
  t_lambda_16, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_17[] = {
  1, // locals
  0, // parameters
  // insert &my_right $success key
  var_insert, 2, var_130_26_my_right, var_129_28_key, 2, var_130_26_my_right, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_18, lambda_19, TAIL_CALL,
  POS(144, 11),
  POS(145, 11),
  LOCAL(1)
};

static FUNCTION_INFO i_lambda_17 = {
  t_lambda_17, NULL, 2, 1,
  {"144_29_success\000"}
};

static TAB_NUM t_lambda_18[] = {
  1, // locals
  0, // parameters
  // typed_tuple(self my_key my_left my_right) true
  var_typed_tuple, 4, var_129_23_self, var_130_9_my_key, var_130_17_my_left, var_130_26_my_right, 1, LOCAL(1),
  //  typed_tuple(self my_key my_left my_right) true
  LET, 2, LOCAL(1), var_true, TAIL_CALL,
  POS(147, 16),
  POS(147, 15)
};

static FUNCTION_INFO i_lambda_18 = {
  t_lambda_18, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_19[] = {
  0, // locals
  0, // parameters
  //  self false
  LET, 2, var_129_23_self, var_false, TAIL_CALL,
  POS(148, 15)
};

static FUNCTION_INFO i_lambda_19 = {
  t_lambda_19, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_fetch_first[] = {
  1, // locals
  1, // parameters
  var_153_16_self,
  // self $my_key $my_left $my_right
  var_153_16_self, 0, 3, var_154_9_my_key, var_154_17_my_left, var_154_26_my_right,
  // is_an_empty_node
  var_is_an_empty_node, 1, var_154_17_my_left, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_20, lambda_21, TAIL_CALL,
  POS(154, 3),
  POS(156, 13),
  POS(155, 3)
};

static FUNCTION_INFO i_func_fetch_first = {
  t_func_fetch_first, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_20[] = {
  0, // locals
  0, // parameters
  //  my_right my_key
  LET, 2, var_154_26_my_right, var_154_9_my_key, TAIL_CALL,
  POS(157, 7)
};

static FUNCTION_INFO i_lambda_20 = {
  t_lambda_20, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_21[] = {
  2, // locals
  0, // parameters
  // fetch_first &my_left $first_key
  func_fetch_first, 1, var_154_17_my_left, 2, var_154_17_my_left, LOCAL(2),
  // typed_tuple(self my_key my_left my_right) first_key
  var_typed_tuple, 4, var_153_16_self, var_154_9_my_key, var_154_17_my_left, var_154_26_my_right, 1, LOCAL(1),
  // -> typed_tuple(self my_key my_left my_right) first_key
  LET, 2, LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(159, 7),
  POS(160, 10),
  POS(160, 7),
  LOCAL(2)
};

static FUNCTION_INFO i_lambda_21 = {
  t_lambda_21, NULL, 3, 1,
  {"159_29_first_key\000"}
};

static TAB_NUM t_func_empty_node___delete[] = {
  2, // locals
  2, // parameters
  LOCAL(2), // 162_22_self
  LOCAL(1),
  // -> self false
  LET, 2, LOCAL(2), var_false, TAIL_CALL,
  POS(162, 33),
  LOCAL(2)
};

static FUNCTION_INFO i_func_empty_node___delete = {
  t_func_empty_node___delete, NULL, 1, 1,
  {"162_22_self\000"}
};

static TAB_NUM t_func_binary_node___delete[] = {
  1, // locals
  2, // parameters
  var_164_23_self,
  var_164_28_key,
  // self $my_key $my_left $my_right
  var_164_23_self, 0, 3, var_165_9_my_key, var_165_17_my_left, var_165_26_my_right,
  // key == my_key
  var_std__equal, 2, var_164_28_key, var_165_9_my_key, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_22, lambda_27, TAIL_CALL,
  POS(165, 3),
  POS(167, 5),
  POS(166, 3)
};

static FUNCTION_INFO i_func_binary_node___delete = {
  t_func_binary_node___delete, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_22[] = {
  1, // locals
  0, // parameters
  // is_an_empty_node
  var_is_an_empty_node, 1, var_165_17_my_left, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_23, lambda_24, TAIL_CALL,
  POS(170, 17),
  POS(169, 7)
};

static FUNCTION_INFO i_lambda_22 = {
  t_lambda_22, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_23[] = {
  0, // locals
  0, // parameters
  //  my_right true
  LET, 2, var_165_26_my_right, var_true, TAIL_CALL,
  POS(171, 11)
};

static FUNCTION_INFO i_lambda_23 = {
  t_lambda_23, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_24[] = {
  1, // locals
  0, // parameters
  // is_an_empty_node
  var_is_an_empty_node, 1, var_165_26_my_right, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_25, lambda_26, TAIL_CALL,
  POS(174, 22),
  POS(173, 11)
};

static FUNCTION_INFO i_lambda_24 = {
  t_lambda_24, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_25[] = {
  0, // locals
  0, // parameters
  //  my_left true
  LET, 2, var_165_17_my_left, var_true, TAIL_CALL,
  POS(175, 15)
};

static FUNCTION_INFO i_lambda_25 = {
  t_lambda_25, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_26[] = {
  2, // locals
  0, // parameters
  // fetch_first &my_right $first_key
  func_fetch_first, 1, var_165_26_my_right, 2, var_165_26_my_right, LOCAL(2),
  // typed_tuple(self first_key my_left my_right)
  var_typed_tuple, 4, var_164_23_self, LOCAL(2), var_165_17_my_left, var_165_26_my_right, 1, LOCAL(1),
  // -> typed_tuple(self first_key my_left my_right)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(177, 15),
  POS(178, 18),
  POS(178, 15),
  LOCAL(2)
};

static FUNCTION_INFO i_lambda_26 = {
  t_lambda_26, NULL, 3, 1,
  {"177_38_first_key\000"}
};

static TAB_NUM t_lambda_27[] = {
  1, // locals
  0, // parameters
  // key < my_key
  var_std__less, 2, var_164_28_key, var_165_9_my_key, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_28, lambda_31, TAIL_CALL,
  POS(181, 9),
  POS(180, 7)
};

static FUNCTION_INFO i_lambda_27 = {
  t_lambda_27, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_28[] = {
  1, // locals
  0, // parameters
  // delete &my_left $success key
  var_delete, 2, var_165_17_my_left, var_164_28_key, 2, var_165_17_my_left, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_29, lambda_30, TAIL_CALL,
  POS(183, 11),
  POS(184, 11),
  LOCAL(1)
};

static FUNCTION_INFO i_lambda_28 = {
  t_lambda_28, NULL, 2, 1,
  {"183_28_success\000"}
};

static TAB_NUM t_lambda_29[] = {
  1, // locals
  0, // parameters
  // typed_tuple(self my_key my_left my_right) true
  var_typed_tuple, 4, var_164_23_self, var_165_9_my_key, var_165_17_my_left, var_165_26_my_right, 1, LOCAL(1),
  //  typed_tuple(self my_key my_left my_right) true
  LET, 2, LOCAL(1), var_true, TAIL_CALL,
  POS(186, 16),
  POS(186, 15)
};

static FUNCTION_INFO i_lambda_29 = {
  t_lambda_29, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_30[] = {
  0, // locals
  0, // parameters
  //  self false
  LET, 2, var_164_23_self, var_false, TAIL_CALL,
  POS(187, 15)
};

static FUNCTION_INFO i_lambda_30 = {
  t_lambda_30, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_31[] = {
  1, // locals
  0, // parameters
  // delete &my_right $success key
  var_delete, 2, var_165_26_my_right, var_164_28_key, 2, var_165_26_my_right, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_32, lambda_33, TAIL_CALL,
  POS(189, 11),
  POS(190, 11),
  LOCAL(1)
};

static FUNCTION_INFO i_lambda_31 = {
  t_lambda_31, NULL, 2, 1,
  {"189_29_success\000"}
};

static TAB_NUM t_lambda_32[] = {
  1, // locals
  0, // parameters
  // typed_tuple(self my_key my_left my_right) true
  var_typed_tuple, 4, var_164_23_self, var_165_9_my_key, var_165_17_my_left, var_165_26_my_right, 1, LOCAL(1),
  //  typed_tuple(self my_key my_left my_right) true
  LET, 2, LOCAL(1), var_true, TAIL_CALL,
  POS(192, 16),
  POS(192, 15)
};

static FUNCTION_INFO i_lambda_32 = {
  t_lambda_32, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_33[] = {
  0, // locals
  0, // parameters
  //  self false
  LET, 2, var_164_23_self, var_false, TAIL_CALL,
  POS(193, 15)
};

static FUNCTION_INFO i_lambda_33 = {
  t_lambda_33, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_empty_node___first_item_of[] = {
  1, // locals
  1, // parameters
  LOCAL(1),
  // -> undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(198, 36)
};

static FUNCTION_INFO i_func_empty_node___first_item_of = {
  t_func_empty_node___first_item_of, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_binary_node___first_item_of[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 200_30_self
  // self $my_key $my_left $_my_right
  LOCAL(2), 0, 3, var_201_9_my_key, var_201_17_my_left, LOCAL(1),
  // is_an_empty_node
  var_is_an_empty_node, 1, var_201_17_my_left, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_34, lambda_35, TAIL_CALL,
  POS(201, 3),
  POS(203, 13),
  POS(202, 3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_binary_node___first_item_of = {
  t_func_binary_node___first_item_of, NULL, 3, 1,
  {"200_30_self\000"}
};

static TAB_NUM t_lambda_34[] = {
  0, // locals
  0, // parameters
  //  my_key
  LET, 1, var_201_9_my_key, TAIL_CALL,
  POS(204, 7)
};

static FUNCTION_INFO i_lambda_34 = {
  t_lambda_34, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_35[] = {
  1, // locals
  0, // parameters
  // first_item_of(my_left)
  var_first_item_of, 1, var_201_17_my_left, 1, LOCAL(1),
  //  first_item_of(my_left)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(205, 8),
  POS(205, 7)
};

static FUNCTION_INFO i_lambda_35 = {
  t_lambda_35, NULL, 2, 0,
  {}
};

static TAB_NUM t_func_std_types__key_order_set___first_item_of[] = {
  3, // locals
  1, // parameters
  LOCAL(3), // 207_43_self
  // contents_of(self))
  var_contents_of, 1, LOCAL(3), 1, LOCAL(1),
  // first_item_of(contents_of(self))
  var_first_item_of, 1, LOCAL(1), 1, LOCAL(2),
  // -> first_item_of(contents_of(self))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(208, 20),
  POS(208, 6),
  POS(208, 3),
  LOCAL(3)
};

static FUNCTION_INFO i_func_std_types__key_order_set___first_item_of = {
  t_func_std_types__key_order_set___first_item_of, NULL, 3, 1,
  {"207_43_self\000"}
};

static TAB_NUM t_func_empty_node___last_item_of[] = {
  1, // locals
  1, // parameters
  LOCAL(1),
  // -> undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(213, 35)
};

static FUNCTION_INFO i_func_empty_node___last_item_of = {
  t_func_empty_node___last_item_of, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_binary_node___last_item_of[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 215_29_self
  // self $my_key $_my_left $my_right
  LOCAL(2), 0, 3, var_216_9_my_key, LOCAL(1), var_216_27_my_right,
  // is_an_empty_node
  var_is_an_empty_node, 1, var_216_27_my_right, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_36, lambda_37, TAIL_CALL,
  POS(216, 3),
  POS(218, 14),
  POS(217, 3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_binary_node___last_item_of = {
  t_func_binary_node___last_item_of, NULL, 3, 1,
  {"215_29_self\000"}
};

static TAB_NUM t_lambda_36[] = {
  0, // locals
  0, // parameters
  //  my_key
  LET, 1, var_216_9_my_key, TAIL_CALL,
  POS(219, 7)
};

static FUNCTION_INFO i_lambda_36 = {
  t_lambda_36, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_37[] = {
  1, // locals
  0, // parameters
  // last_item_of(my_right)
  var_last_item_of, 1, var_216_27_my_right, 1, LOCAL(1),
  //  last_item_of(my_right)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(220, 8),
  POS(220, 7)
};

static FUNCTION_INFO i_lambda_37 = {
  t_lambda_37, NULL, 2, 0,
  {}
};

static TAB_NUM t_func_std_types__key_order_set___last_item_of[] = {
  3, // locals
  1, // parameters
  LOCAL(3), // 222_42_self
  // contents_of(self))
  var_contents_of, 1, LOCAL(3), 1, LOCAL(1),
  // last_item_of(contents_of(self))
  var_last_item_of, 1, LOCAL(1), 1, LOCAL(2),
  // -> last_item_of(contents_of(self))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(223, 19),
  POS(223, 6),
  POS(223, 3),
  LOCAL(3)
};

static FUNCTION_INFO i_func_std_types__key_order_set___last_item_of = {
  t_func_std_types__key_order_set___last_item_of, NULL, 3, 1,
  {"222_42_self\000"}
};

static TAB_NUM t_func_empty_node___next_item_of[] = {
  1, // locals
  2, // parameters
  LOCAL(1),
  LOCAL(1),
  // -> undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(228, 40)
};

static FUNCTION_INFO i_func_empty_node___next_item_of = {
  t_func_empty_node___next_item_of, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_binary_node___next_item_of[] = {
  2, // locals
  2, // parameters
  LOCAL(2), // 230_29_self
  var_230_34_key,
  // self $my_key $my_left $my_right
  LOCAL(2), 0, 3, var_232_9_my_key, var_232_17_my_left, var_232_26_my_right,
  // key == my_key
  var_std__equal, 2, var_230_34_key, var_232_9_my_key, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_38, lambda_39, TAIL_CALL,
  POS(232, 3),
  POS(234, 5),
  POS(233, 3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_binary_node___next_item_of = {
  t_func_binary_node___next_item_of, NULL, 3, 1,
  {"230_29_self\000"}
};

static TAB_NUM t_lambda_38[] = {
  1, // locals
  0, // parameters
  // first_item_of(my_right)
  var_first_item_of, 1, var_232_26_my_right, 1, LOCAL(1),
  //  first_item_of(my_right)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(235, 8),
  POS(235, 7)
};

static FUNCTION_INFO i_lambda_38 = {
  t_lambda_38, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_39[] = {
  1, // locals
  0, // parameters
  // key < my_key:
  var_std__less, 2, var_230_34_key, var_232_9_my_key, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_40, lambda_43, TAIL_CALL,
  POS(238, 9),
  POS(237, 7)
};

static FUNCTION_INFO i_lambda_39 = {
  t_lambda_39, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_40[] = {
  1, // locals
  0, // parameters
  // $next_key next_item_of(my_left key)
  var_next_item_of, 2, var_232_17_my_left, var_230_34_key, 1, var_239_12_next_key,
  // is_defined
  var_is_defined, 1, var_239_12_next_key, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_41, lambda_42, TAIL_CALL,
  POS(239, 11),
  POS(241, 22),
  POS(240, 11)
};

static FUNCTION_INFO i_lambda_40 = {
  t_lambda_40, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_41[] = {
  0, // locals
  0, // parameters
  //  next_key
  LET, 1, var_239_12_next_key, TAIL_CALL,
  POS(242, 15)
};

static FUNCTION_INFO i_lambda_41 = {
  t_lambda_41, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_42[] = {
  0, // locals
  0, // parameters
  //  my_key
  LET, 1, var_232_9_my_key, TAIL_CALL,
  POS(243, 15)
};

static FUNCTION_INFO i_lambda_42 = {
  t_lambda_42, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_43[] = {
  1, // locals
  0, // parameters
  // next_item_of(my_right key)
  var_next_item_of, 2, var_232_26_my_right, var_230_34_key, 1, LOCAL(1),
  //  next_item_of(my_right key)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(244, 12),
  POS(244, 11)
};

static FUNCTION_INFO i_lambda_43 = {
  t_lambda_43, NULL, 2, 0,
  {}
};

static TAB_NUM t_func_std_types__key_order_set___next_item_of[] = {
  4, // locals
  2, // parameters
  LOCAL(3), // 246_42_self
  LOCAL(4), // 246_47_key
  // contents_of(self) key)
  var_contents_of, 1, LOCAL(3), 1, LOCAL(1),
  // next_item_of(contents_of(self) key)
  var_next_item_of, 2, LOCAL(1), LOCAL(4), 1, LOCAL(2),
  // -> next_item_of(contents_of(self) key)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(247, 19),
  POS(247, 6),
  POS(247, 3),
  LOCAL(3),
  LOCAL(4)
};

static FUNCTION_INFO i_func_std_types__key_order_set___next_item_of = {
  t_func_std_types__key_order_set___next_item_of, NULL, 3, 2,
  {"246_42_self\000", "246_47_key\000"}
};

static TAB_NUM t_func_empty_node___previous_item_of[] = {
  1, // locals
  2, // parameters
  LOCAL(1),
  LOCAL(1),
  // -> undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(252, 44)
};

static FUNCTION_INFO i_func_empty_node___previous_item_of = {
  t_func_empty_node___previous_item_of, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_binary_node___previous_item_of[] = {
  2, // locals
  2, // parameters
  LOCAL(2), // 254_33_self
  var_254_38_key,
  // self $my_key $my_left $my_right
  LOCAL(2), 0, 3, var_256_9_my_key, var_256_17_my_left, var_256_26_my_right,
  // key == my_key
  var_std__equal, 2, var_254_38_key, var_256_9_my_key, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_44, lambda_45, TAIL_CALL,
  POS(256, 3),
  POS(258, 5),
  POS(257, 3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_binary_node___previous_item_of = {
  t_func_binary_node___previous_item_of, NULL, 3, 1,
  {"254_33_self\000"}
};

static TAB_NUM t_lambda_44[] = {
  1, // locals
  0, // parameters
  // last_item_of(my_left)
  var_last_item_of, 1, var_256_17_my_left, 1, LOCAL(1),
  //  last_item_of(my_left)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(259, 8),
  POS(259, 7)
};

static FUNCTION_INFO i_lambda_44 = {
  t_lambda_44, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_45[] = {
  1, // locals
  0, // parameters
  // my_key:
  var_std__less, 2, var_256_9_my_key, var_254_38_key, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_46, lambda_49, TAIL_CALL,
  POS(262, 15),
  POS(261, 7)
};

static FUNCTION_INFO i_lambda_45 = {
  t_lambda_45, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_46[] = {
  1, // locals
  0, // parameters
  // $previous_key previous_item_of(my_right key)
  var_previous_item_of, 2, var_256_26_my_right, var_254_38_key, 1, var_263_12_previous_key,
  // is_defined
  var_is_defined, 1, var_263_12_previous_key, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_47, lambda_48, TAIL_CALL,
  POS(263, 11),
  POS(265, 26),
  POS(264, 11)
};

static FUNCTION_INFO i_lambda_46 = {
  t_lambda_46, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_47[] = {
  0, // locals
  0, // parameters
  //  previous_key
  LET, 1, var_263_12_previous_key, TAIL_CALL,
  POS(266, 15)
};

static FUNCTION_INFO i_lambda_47 = {
  t_lambda_47, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_48[] = {
  0, // locals
  0, // parameters
  //  my_key
  LET, 1, var_256_9_my_key, TAIL_CALL,
  POS(267, 15)
};

static FUNCTION_INFO i_lambda_48 = {
  t_lambda_48, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_49[] = {
  1, // locals
  0, // parameters
  // previous_item_of(my_left key)
  var_previous_item_of, 2, var_256_17_my_left, var_254_38_key, 1, LOCAL(1),
  //  previous_item_of(my_left key)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(268, 12),
  POS(268, 11)
};

static FUNCTION_INFO i_lambda_49 = {
  t_lambda_49, NULL, 2, 0,
  {}
};

static TAB_NUM t_func_std_types__key_order_set___previous_item_of[] = {
  4, // locals
  2, // parameters
  LOCAL(3), // 270_46_self
  LOCAL(4), // 270_51_key
  // contents_of(self) key)
  var_contents_of, 1, LOCAL(3), 1, LOCAL(1),
  // previous_item_of(contents_of(self) key)
  var_previous_item_of, 2, LOCAL(1), LOCAL(4), 1, LOCAL(2),
  // -> previous_item_of(contents_of(self) key)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(271, 23),
  POS(271, 6),
  POS(271, 3),
  LOCAL(3),
  LOCAL(4)
};

static FUNCTION_INFO i_func_std_types__key_order_set___previous_item_of = {
  t_func_std_types__key_order_set___previous_item_of, NULL, 3, 2,
  {"270_46_self\000", "270_51_key\000"}
};

static TAB_NUM t_func_finish___for_each_1_call[] = {
  1, // locals
  1, // parameters
  LOCAL(1),
  // break!
  var_break, 0, IO_TAIL_CALL,
  POS(282, 34)
};

static FUNCTION_INFO i_func_finish___for_each_1_call = {
  t_func_finish___for_each_1_call, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_empty_node___for_each_1_left[] = {
  1, // locals
  1, // parameters
  LOCAL(1),
  // basic_loops::todo(-1) # peek
  var_basic_loops__todo, 1, minus_num_1, 1, LOCAL(1),
  // for_each_1_call! basic_loops::todo(-1) # peek
  var_for_each_1_call, 1, LOCAL(1), IO_TAIL_CALL,
  POS(285, 20),
  POS(285, 3)
};

static FUNCTION_INFO i_func_empty_node___for_each_1_left = {
  t_func_empty_node___for_each_1_left, NULL, 2, 0,
  {}
};

static TAB_NUM t_func_binary_node___for_each_1_left[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 287_32_self
  // self $_my_key $my_left $_my_right
  LOCAL(2), 0, 3, LOCAL(1), LOCAL(3), LOCAL(1),
  // push &basic_loops::todo self
  var_push, 2, var_basic_loops__todo, LOCAL(2), 1, var_basic_loops__todo,
  // for_each_1_left! my_left
  var_for_each_1_left, 1, LOCAL(3), IO_TAIL_CALL,
  POS(288, 3),
  POS(289, 3),
  POS(290, 3),
  LOCAL(2),
  LOCAL(3)
};

static FUNCTION_INFO i_func_binary_node___for_each_1_left = {
  t_func_binary_node___for_each_1_left, NULL, 3, 2,
  {"287_32_self\000", "288_18_my_left\000"}
};

static TAB_NUM t_func_binary_node___for_each_1_call[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 292_32_self
  // self $my_key $_my_left $_my_right
  LOCAL(2), 0, 3, LOCAL(3), LOCAL(1), LOCAL(1),
  // basic_loops::body! my_key
  var_basic_loops__body, 1, LOCAL(3), IO_TAIL_CALL,
  POS(293, 3),
  POS(294, 3),
  LOCAL(2),
  LOCAL(3)
};

static FUNCTION_INFO i_func_binary_node___for_each_1_call = {
  t_func_binary_node___for_each_1_call, NULL, 2, 2,
  {"292_32_self\000", "293_9_my_key\000"}
};

static TAB_NUM t_func_binary_node___for_each_1_right[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 296_33_self
  // self $_my_key $_my_left $my_right
  LOCAL(2), 0, 3, LOCAL(1), LOCAL(1), LOCAL(3),
  // for_each_1_left! my_right
  var_for_each_1_left, 1, LOCAL(3), IO_TAIL_CALL,
  POS(297, 3),
  POS(298, 3),
  LOCAL(3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_binary_node___for_each_1_right = {
  t_func_binary_node___for_each_1_right, NULL, 2, 2,
  {"297_28_my_right\000", "296_33_self\000"}
};

static TAB_NUM t_func_std_types__key_order_set___for_each[] = {
  4, // locals
  -3, // parameters
  MANDATORY_PARAMETER, LOCAL(2), // 329_5_self
  MANDATORY_PARAMETER, LOCAL(3), // 330_5_body
  var_next, var_331_5_finally,
  // $saved_context
  var_tuple, 5, var_next, var_break, var_basic_loops__body, var_basic_loops__finally, var_basic_loops__todo, 1, LOCAL(4),
  // !basic_loops::body body
  LET, 1, LOCAL(3), 1, var_basic_loops__body,
  // !basic_loops::finally finally
  LET, 1, var_331_5_finally, 1, var_basic_loops__finally,
  // !basic_loops::todo list(finish)
  var_list, 1, var_finish, 1, var_basic_loops__todo,
  // new !break basic_types::break_function: (myself^)
  var_new, 2, var_basic_types__break_function, lambda_50, IO_CALL(1), var_break,
  // break.basic_loops::saved_context_of saved_context
  LET, -1, var_break, var_basic_loops__saved_context_of, LOCAL(4), var_break,
  // !next:
  LET, 1, lambda_next, 1, var_next,
  // contents_of(self)
  var_contents_of, 1, LOCAL(2), 1, LOCAL(1),
  // for_each_1_left! contents_of(self)
  var_for_each_1_left, 1, LOCAL(1), IO_TAIL_CALL,
  POS(333, 3),
  POS(341, 3),
  POS(342, 3),
  POS(343, 3),
  POS(345, 3),
  POS(352, 4),
  POS(354, 3),
  POS(358, 20),
  POS(358, 3),
  LOCAL(3),
  LOCAL(4),
  LOCAL(2)
};

static FUNCTION_INFO i_func_std_types__key_order_set___for_each = {
  t_func_std_types__key_order_set___for_each, NULL, 9, 3,
  {"330_5_body\000", "333_4_saved_context\000", "329_5_self\000"}
};

static TAB_NUM t_lambda_50[] = {
  2, // locals
  -1, // parameters
  MYSELF_PARAMETER, LOCAL(2), // 345_44_myself
  // !finally basic_loops::finally
  LET, 1, var_basic_loops__finally, 1, var_331_5_finally,
  // basic_loops::saved_context_of(myself)
  var_basic_loops__saved_context_of, 1, LOCAL(2), 1, LOCAL(1),
  // basic_loops::saved_context_of(myself)
  LOCAL(1), 0, 5, var_next, var_break, var_basic_loops__body, var_basic_loops__finally, var_basic_loops__todo,
  // finally!
  var_331_5_finally, 0, IO_TAIL_CALL,
  POS(346, 5),
  POS(347, 5),
  POS(347, 5),
  POS(350, 5),
  LOCAL(2)
};

static FUNCTION_INFO i_lambda_50 = {
  t_lambda_50, NULL, 4, 1,
  {"345_44_myself\000"}
};

static TAB_NUM t_lambda_next[] = {
  1, // locals
  0, // parameters
  // pop &basic_loops::todo $node
  var_pop, 1, var_basic_loops__todo, 2, var_basic_loops__todo, LOCAL(1),
  // for_each_1_right! node
  var_for_each_1_right, 1, LOCAL(1), IO_TAIL_CALL,
  POS(355, 5),
  POS(356, 5),
  LOCAL(1)
};

static FUNCTION_INFO i_lambda_next = {
  t_lambda_next, NULL, 2, 1,
  {"355_29_node\000"}
};

static TAB_NUM t_func_std_types__key_order_set___reduce[] = {
  1, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_365_5_self,
  MANDATORY_PARAMETER, var_366_5_reduce_function,
  var_undefined, var_367_5_unit,
  // is_empty
  var_is_empty, 1, var_365_5_self, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_51, lambda_52, TAIL_CALL,
  POS(370, 10),
  POS(369, 3)
};

static FUNCTION_INFO i_func_std_types__key_order_set___reduce = {
  t_func_std_types__key_order_set___reduce, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_51[] = {
  0, // locals
  0, // parameters
  //  unit
  LET, 1, var_367_5_unit, TAIL_CALL,
  POS(371, 7)
};

static FUNCTION_INFO i_lambda_51 = {
  t_lambda_51, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_52[] = {
  2, // locals
  0, // parameters
  // contents_of(self))
  var_contents_of, 1, var_365_5_self, 1, LOCAL(1),
  // reduce(contents_of(self))
  func_reduce, 1, LOCAL(1), 1, LOCAL(2),
  // -> reduce(contents_of(self))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(385, 17),
  POS(385, 10),
  POS(385, 7)
};

static FUNCTION_INFO i_lambda_52 = {
  t_lambda_52, NULL, 3, 0,
  {}
};

static TAB_NUM t_func_reduce[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 373_17_node
  // node $key $left $right
  LOCAL(2), 0, 3, var_374_15_key, var_374_20_left, var_374_26_right,
  // is_an_empty_node
  var_is_an_empty_node, 1, var_374_20_left, 1, LOCAL(1),
  // !key
  var_if, 3, LOCAL(1), lambda_53, lambda_54, 1, var_374_15_key,
  // is_an_empty_node
  var_is_an_empty_node, 1, var_374_26_right, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_55, lambda_56, TAIL_CALL,
  POS(374, 9),
  POS(377, 18),
  POS(375, 9),
  POS(381, 17),
  POS(380, 9),
  LOCAL(2)
};

static FUNCTION_INFO i_func_reduce = {
  t_func_reduce, NULL, 5, 1,
  {"373_17_node\000"}
};

static TAB_NUM t_lambda_53[] = {
  0, // locals
  0, // parameters
  //  key
  LET, 1, var_374_15_key, TAIL_CALL,
  POS(378, 15)
};

static FUNCTION_INFO i_lambda_53 = {
  t_lambda_53, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_54[] = {
  2, // locals
  0, // parameters
  // reduce(left) key)
  func_reduce, 1, var_374_20_left, 1, LOCAL(1),
  // reduce_function(reduce(left) key)
  var_366_5_reduce_function, 2, LOCAL(1), var_374_15_key, 1, LOCAL(2),
  //  reduce_function(reduce(left) key)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(379, 32),
  POS(379, 16),
  POS(379, 15)
};

static FUNCTION_INFO i_lambda_54 = {
  t_lambda_54, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_55[] = {
  0, // locals
  0, // parameters
  //  key
  LET, 1, var_374_15_key, TAIL_CALL,
  POS(382, 13)
};

static FUNCTION_INFO i_lambda_55 = {
  t_lambda_55, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_56[] = {
  2, // locals
  0, // parameters
  // reduce(right))
  func_reduce, 1, var_374_26_right, 1, LOCAL(1),
  // reduce_function(key reduce(right))
  var_366_5_reduce_function, 2, var_374_15_key, LOCAL(1), 1, LOCAL(2),
  //  reduce_function(key reduce(right))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(383, 34),
  POS(383, 14),
  POS(383, 13)
};

static FUNCTION_INFO i_lambda_56 = {
  t_lambda_56, NULL, 3, 0,
  {}
};

static TAB_NUM t_func_std_types__key_order_set___map_reduce[] = {
  1, // locals
  -4, // parameters
  MANDATORY_PARAMETER, var_391_5_self,
  MANDATORY_PARAMETER, var_392_5_map_function,
  var_append, var_393_5_reduce_function,
  var_undefined, var_394_5_unit,
  // is_empty
  var_is_empty, 1, var_391_5_self, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_57, lambda_58, TAIL_CALL,
  POS(397, 10),
  POS(396, 3)
};

static FUNCTION_INFO i_func_std_types__key_order_set___map_reduce = {
  t_func_std_types__key_order_set___map_reduce, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_57[] = {
  0, // locals
  0, // parameters
  //  unit
  LET, 1, var_394_5_unit, TAIL_CALL,
  POS(398, 7)
};

static FUNCTION_INFO i_lambda_57 = {
  t_lambda_57, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_58[] = {
  2, // locals
  0, // parameters
  // contents_of(self))
  var_contents_of, 1, var_391_5_self, 1, LOCAL(1),
  // map_reduce(contents_of(self))
  func_map_reduce, 1, LOCAL(1), 1, LOCAL(2),
  // -> map_reduce(contents_of(self))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(412, 21),
  POS(412, 10),
  POS(412, 7)
};

static FUNCTION_INFO i_lambda_58 = {
  t_lambda_58, NULL, 3, 0,
  {}
};

static TAB_NUM t_func_map_reduce[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 400_21_node
  // node $key $left $right
  LOCAL(2), 0, 3, var_401_15_key, var_401_20_left, var_401_26_right,
  // map_function &key
  var_392_5_map_function, 1, var_401_15_key, 1, var_401_15_key,
  // is_an_empty_node
  var_is_an_empty_node, 1, var_401_20_left, 1, LOCAL(1),
  // if !key
  var_if, 3, LOCAL(1), lambda_59, lambda_60, 1, var_401_15_key,
  // is_an_empty_node
  var_is_an_empty_node, 1, var_401_26_right, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_61, lambda_62, TAIL_CALL,
  POS(401, 9),
  POS(402, 9),
  POS(404, 16),
  POS(403, 9),
  POS(408, 17),
  POS(407, 9),
  LOCAL(2)
};

static FUNCTION_INFO i_func_map_reduce = {
  t_func_map_reduce, NULL, 6, 1,
  {"400_21_node\000"}
};

static TAB_NUM t_lambda_59[] = {
  0, // locals
  0, // parameters
  //  key
  LET, 1, var_401_15_key, TAIL_CALL,
  POS(405, 13)
};

static FUNCTION_INFO i_lambda_59 = {
  t_lambda_59, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_60[] = {
  2, // locals
  0, // parameters
  // map_reduce(left) key)
  func_map_reduce, 1, var_401_20_left, 1, LOCAL(1),
  // reduce_function(map_reduce(left) key)
  var_393_5_reduce_function, 2, LOCAL(1), var_401_15_key, 1, LOCAL(2),
  //  reduce_function(map_reduce(left) key)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(406, 30),
  POS(406, 14),
  POS(406, 13)
};

static FUNCTION_INFO i_lambda_60 = {
  t_lambda_60, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_61[] = {
  0, // locals
  0, // parameters
  //  key
  LET, 1, var_401_15_key, TAIL_CALL,
  POS(409, 13)
};

static FUNCTION_INFO i_lambda_61 = {
  t_lambda_61, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_62[] = {
  2, // locals
  0, // parameters
  // map_reduce(right))
  func_map_reduce, 1, var_401_26_right, 1, LOCAL(1),
  // reduce_function(key map_reduce(right))
  var_393_5_reduce_function, 2, var_401_15_key, LOCAL(1), 1, LOCAL(2),
  //  reduce_function(key map_reduce(right))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(410, 34),
  POS(410, 14),
  POS(410, 13)
};

static FUNCTION_INFO i_lambda_62 = {
  t_lambda_62, NULL, 3, 0,
  {}
};

static TAB_NUM t_func_std__key_order_set[] = {
  1, // locals
  -1, // parameters
  REST_PARAMETER, LOCAL(1), // 414_23_keys
  // $result empty_key_order_set
  LET, 1, var_empty_key_order_set, 1, var_415_4_result,
  // for_each keys
  var_for_each, 3, LOCAL(1), lambda_63, lambda_64, TAIL_CALL,
  POS(415, 3),
  POS(416, 3),
  LOCAL(1)
};

static FUNCTION_INFO i_func_std__key_order_set = {
  t_func_std__key_order_set, NULL, 2, 1,
  {"414_23_keys\000"}
};

static TAB_NUM t_lambda_63[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 417_8_key
  // result(key) true
  var_415_4_result, 2, LOCAL(1), var_true, 1, var_415_4_result,
  // next
  var_next, 0, TAIL_CALL,
  POS(418, 8),
  POS(419, 7),
  LOCAL(1)
};

static FUNCTION_INFO i_lambda_63 = {
  t_lambda_63, NULL, 2, 1,
  {"417_8_key\000"}
};

static TAB_NUM t_lambda_64[] = {
  0, // locals
  0, // parameters
  //  result
  LET, 1, var_415_4_result, TAIL_CALL,
  POS(420, 7)
};

static FUNCTION_INFO i_lambda_64 = {
  t_lambda_64, NULL, 1, 0,
  {}
};

static TAB_NUM t_module_entry[] = {
  0, // locals
  0, // parameters
  // register_type &deserializers std_types::key_order_set
  var_register_type, 2, var_deserializers, var_std_types__key_order_set, 1, var_deserializers,
  LET, 1, 0, TAIL_CALL,
  POS(425, 1)
};

static FUNCTION_INFO i_module_entry = {
  t_module_entry, NULL, 1, 0,
  {}
};

static int tuple_71_1_arguments[] = {
  -var_undefined, -var_undefined, -var_undefined
};

static FUNKY_CONSTANT constants_table[] = {
  {FLT_POSITIVE_INT64, 0, {.value = 0}},
  {FLT_TUPLE, 3, {.arguments = tuple_71_1_arguments}},
  {FLT_UNIQUE, 0, {.str_8 = "NONE"}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__key_order_set}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_1}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_2}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_value}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_3}},
  {FLT_POSITIVE_INT64, 0, {.value = 1}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_4}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_5}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_6}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_7}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_empty_node___retrieve}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_binary_node___retrieve}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_8}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_9}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_10}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_11}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_empty_node___insert}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_binary_node___insert}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_12}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_13}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_14}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_15}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_16}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_17}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_18}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_19}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_fetch_first}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_20}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_21}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_empty_node___delete}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_binary_node___delete}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_22}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_23}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_24}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_25}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_26}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_27}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_28}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_29}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_30}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_31}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_32}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_33}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_empty_node___first_item_of}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_binary_node___first_item_of}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_34}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_35}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__key_order_set___first_item_of}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_empty_node___last_item_of}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_binary_node___last_item_of}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_36}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_37}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__key_order_set___last_item_of}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_empty_node___next_item_of}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_binary_node___next_item_of}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_38}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_39}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_40}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_41}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_42}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_43}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__key_order_set___next_item_of}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_empty_node___previous_item_of}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_binary_node___previous_item_of}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_44}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_45}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_46}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_47}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_48}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_49}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__key_order_set___previous_item_of}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_finish___for_each_1_call}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_empty_node___for_each_1_left}},
  {FLT_NEGATIVE_INT64, 0, {.value = 1}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_binary_node___for_each_1_left}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_binary_node___for_each_1_call}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_binary_node___for_each_1_right}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__key_order_set___for_each}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_50}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_next}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__key_order_set___reduce}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_51}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_52}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_reduce}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_53}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_54}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_55}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_56}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__key_order_set___map_reduce}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_57}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_58}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_map_reduce}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_59}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_60}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_61}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_62}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std__key_order_set}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_63}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_64}},
  {FLT_STRING_8, 13, {.str_8 = "key_order_set"}},
  {FLT_FUNCTION, 0, {.func_info = &i_module_entry}}
};

static ATTRIBUTE_DEFINITION std_types__object__attributes[] = {
  {-var_is_a_key_order_set, -var_false},
  {-var_is_an_empty_node, -var_false}
};

static ATTRIBUTE_DEFINITION std_types__key_order_set__attributes[] = {
  {-var_is_a_key_order_set, -var_true},
  {-var_contents_of, -var_empty_node},
  {-var_length_of, -num_0},
  {TYPE_FUNCTION, -func_std_types__key_order_set},
  {var_first_item_of, -func_std_types__key_order_set___first_item_of},
  {var_last_item_of, -func_std_types__key_order_set___last_item_of},
  {var_next_item_of, -func_std_types__key_order_set___next_item_of},
  {var_previous_item_of, -func_std_types__key_order_set___previous_item_of},
  {var_for_each, -func_std_types__key_order_set___for_each},
  {var_reduce, -func_std_types__key_order_set___reduce},
  {var_map_reduce, -func_std_types__key_order_set___map_reduce},
  {-var_serialization_tag_of, -str_key_order_set},
  {-var_empty_collection_of, -var_empty_key_order_set}
};

static ATTRIBUTE_DEFINITION empty_node__attributes[] = {
  {-var_is_an_empty_node, -var_true},
  {var_retrieve, -func_empty_node___retrieve},
  {var_insert, -func_empty_node___insert},
  {var_delete, -func_empty_node___delete},
  {var_first_item_of, -func_empty_node___first_item_of},
  {var_last_item_of, -func_empty_node___last_item_of},
  {var_next_item_of, -func_empty_node___next_item_of},
  {var_previous_item_of, -func_empty_node___previous_item_of},
  {var_for_each_1_left, -func_empty_node___for_each_1_left}
};

static ATTRIBUTE_DEFINITION binary_node__attributes[] = {
  {var_retrieve, -func_binary_node___retrieve},
  {var_insert, -func_binary_node___insert},
  {var_delete, -func_binary_node___delete},
  {var_first_item_of, -func_binary_node___first_item_of},
  {var_last_item_of, -func_binary_node___last_item_of},
  {var_next_item_of, -func_binary_node___next_item_of},
  {var_previous_item_of, -func_binary_node___previous_item_of},
  {var_for_each_1_left, -func_binary_node___for_each_1_left},
  {var_for_each_1_call, -func_binary_node___for_each_1_call},
  {var_for_each_1_right, -func_binary_node___for_each_1_right}
};

static ATTRIBUTE_DEFINITION finish__attributes[] = {
  {var_for_each_1_call, -func_finish___for_each_1_call}
};

static FUNKY_VARIABLE variables_table[] = {
  {
    FOT_POLYMORPHIC, 0, 0,
    "contents_of\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "assign\000std", NULL,
    {.position = POS(27, 1)}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "retrieve\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "insert\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "delete\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "is_a_key_order_set\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN, 0, 2,
    "object\000std_types", std_types__object__attributes,
    {.position = POS(36, 1)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "is_a_key_order_set\000", NULL,
    {.position = POS(36, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "false\000", NULL,
    {.position = POS(36, 39)}
  },
  {
    FOT_DERIVED, 0, 13,
    "key_order_set\000std_types", std_types__key_order_set__attributes,
    {"set\000std_types"}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "true\000", NULL,
    {.position = POS(37, 46)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "set\000std_types", NULL,
    {.position = POS(39, 27)}
  },
  {
    FOT_DERIVED, 0, 9,
    "empty_node\000", empty_node__attributes,
    {"object\000std_types"}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "length_of\000", NULL,
    {.position = POS(55, 27)}
  },
  {
    FOT_DERIVED, 0, 0,
    "empty_key_order_set\000std", NULL,
    {"key_order_set\000std_types"}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "is_an_empty_node\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_INITIALIZED, 0, 10,
    "binary_node\000", binary_node__attributes,
    {.const_idx = -tuple_71_1}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "undefined\000", NULL,
    {.position = POS(71, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "tuple\000", NULL,
    {.position = POS(71, 14)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "78_5_myself\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "79_5_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "80_5_value\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "82_4_contents\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "equal\000std", NULL,
    {.position = POS(84, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000std", NULL,
    {.position = POS(95, 28)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if\000", NULL,
    {.position = POS(90, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "minus\000std", NULL,
    {.position = POS(104, 28)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "112_30_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "113_9_my_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "113_17_my_left\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "113_26_my_right\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "less\000std", NULL,
    {.position = POS(119, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "typed_tuple\000", NULL,
    {.position = POS(127, 6)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "129_23_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "129_28_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "130_9_my_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "130_17_my_left\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "130_26_my_right\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "153_16_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "154_9_my_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "154_17_my_left\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "154_26_my_right\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "164_23_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "164_28_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "165_9_my_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "165_17_my_left\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "165_26_my_right\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "first_item_of\000", NULL,
    {.position = POS(198, 13)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "201_9_my_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "201_17_my_left\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "last_item_of\000", NULL,
    {.position = POS(213, 13)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "216_9_my_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "216_27_my_right\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "next_item_of\000", NULL,
    {.position = POS(228, 13)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "230_34_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "232_9_my_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "232_17_my_left\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "232_26_my_right\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "239_12_next_key\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_defined\000", NULL,
    {.position = POS(241, 22)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "previous_item_of\000", NULL,
    {.position = POS(252, 13)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "254_38_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "256_9_my_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "256_17_my_left\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "256_26_my_right\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "263_12_previous_key\000", NULL
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "for_each_1_left\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "for_each_1_call\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "for_each_1_right\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_DERIVED, 0, 1,
    "finish\000", finish__attributes,
    {"object\000std_types"}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "break\000", NULL,
    {.position = POS(282, 34)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "todo\000basic_loops", NULL,
    {.position = POS(285, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "push\000", NULL,
    {.position = POS(289, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "body\000basic_loops", NULL,
    {.position = POS(294, 3)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "for_each\000", NULL,
    {.position = POS(300, 27)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "331_5_finally\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "next\000", NULL,
    {.position = POS(331, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "finally\000basic_loops", NULL,
    {.position = POS(338, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "list\000", NULL,
    {.position = POS(343, 22)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "break_function\000basic_types", NULL,
    {.position = POS(345, 14)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "saved_context_of\000basic_loops", NULL,
    {.position = POS(347, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "new\000", NULL,
    {.position = POS(345, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "pop\000", NULL,
    {.position = POS(355, 5)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "reduce\000", NULL,
    {.position = POS(361, 27)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "365_5_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "366_5_reduce_function\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "367_5_unit\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_empty\000", NULL,
    {.position = POS(370, 10)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "374_15_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "374_20_left\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "374_26_right\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "map_reduce\000", NULL,
    {.position = POS(387, 27)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "391_5_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "392_5_map_function\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "393_5_reduce_function\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "append\000", NULL,
    {.position = POS(393, 23)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "394_5_unit\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "401_15_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "401_20_left\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "401_26_right\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "key_order_set\000std", NULL,
    {.const_idx = -func_std__key_order_set}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "415_4_result\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_key_order_set\000", NULL,
    {.position = POS(415, 11)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "serialization_tag_of\000", NULL,
    {.position = POS(422, 27)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "empty_collection_of\000", NULL,
    {.position = POS(423, 27)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "deserializers\000", NULL,
    {.position = POS(425, 16)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "register_type\000", NULL,
    {.position = POS(425, 1)}
  }
};

static FUNKY_NAMESPACE used_namespaces[] = {
  {"std", 1, 0}
};

FUNKY_MODULE module__basic__types__collections__sets__key_order_set = {
  "_basic__types__collections__sets__key_order_set", // module name
  "basic/types/collections/sets/key_order_set.fky", // module filename
  .major_version = 0,
  .minor_version = 0,
  .feature_flags = FEAT_POSITIONS|FEAT_FUNCTION_INFO|FEAT_INITIALIZER,
  .marker = 0,
  0, // number of required modules
  0, // number of defined namespaces
  1, // number of used namespaces
  104, // number of constants
  107, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  constants_table,
  variables_table,
};
