#include <stddef.h>
#include <stdint.h>

#include "runtime/common.h"
#include "runtime/builtins.h"
#include "runtime/fko.h"
#include "runtime/memory.h"

enum {
  num_0 = -1,
  tuple_69_0 = -2,
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
  func_binary_node___first_item_of = -47,
  lambda_34 = -48,
  lambda_35 = -49,
  func_std_types__key_order_set___first_item_of = -50,
  func_binary_node___last_item_of = -51,
  lambda_36 = -52,
  lambda_37 = -53,
  func_std_types__key_order_set___last_item_of = -54,
  func_finish___for_each_1_call = -55,
  func_empty_node___for_each_1_left = -56,
  minus_num_1 = -57,
  func_binary_node___for_each_1_left = -58,
  func_binary_node___for_each_1_call = -59,
  func_binary_node___for_each_1_right = -60,
  func_std_types__key_order_set___for_each = -61,
  lambda_break = -62,
  lambda_next = -63,
  func_std_types__key_order_set___reduce = -64,
  lambda_38 = -65,
  lambda_39 = -66,
  func_reduce = -67,
  lambda_40 = -68,
  lambda_41 = -69,
  lambda_42 = -70,
  lambda_43 = -71,
  func_std_types__key_order_set___map_reduce = -72,
  lambda_44 = -73,
  lambda_45 = -74,
  func_map_reduce = -75,
  lambda_46 = -76,
  lambda_47 = -77,
  lambda_48 = -78,
  lambda_49 = -79,
  func_std__key_order_set = -80,
  lambda_50 = -81,
  lambda_51 = -82,
  str_key_order_set = -83
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
  var_76_0_myself, // dynamic
  var_77_0_key, // dynamic
  var_78_0_value, // dynamic
  var_80_1_contents, // dynamic
  var_std__equal, // extern
  var_std__plus, // extern
  var_if, // extern
  var_std__minus, // extern
  var_110_29_key, // dynamic
  var_111_6_my_key, // dynamic
  var_111_14_my_left, // dynamic
  var_111_23_my_right, // dynamic
  var_std__less, // extern
  var_new, // extern
  var_127_22_self, // dynamic
  var_127_27_key, // dynamic
  var_128_6_my_key, // dynamic
  var_128_14_my_left, // dynamic
  var_128_23_my_right, // dynamic
  var_151_15_self, // dynamic
  var_152_6_my_key, // dynamic
  var_152_14_my_left, // dynamic
  var_152_23_my_right, // dynamic
  var_162_22_self, // dynamic
  var_162_27_key, // dynamic
  var_163_6_my_key, // dynamic
  var_163_14_my_left, // dynamic
  var_163_23_my_right, // dynamic
  var_first_item_of, // extern polymorphic
  var_197_6_my_key, // dynamic
  var_197_14_my_left, // dynamic
  var_last_item_of, // extern polymorphic
  var_210_6_my_key, // dynamic
  var_210_24_my_right, // dynamic
  var_for_each_1_left, // attribute
  var_for_each_1_call, // attribute
  var_for_each_1_right, // attribute
  var_finish, // derived
  var_break, // extern
  var_basic_loops__todo, // extern
  var_push, // extern
  var_basic_loops__body, // extern
  var_for_each, // extern polymorphic
  var_277_0_finally, // dynamic
  var_next, // extern
  var_basic_loops__finally, // extern
  var_list, // extern
  var_basic_loops__saved_context_of, // extern polymorphic
  var_pop, // extern
  var_reduce, // extern polymorphic
  var_311_0_self, // dynamic
  var_312_0_reduce_function, // dynamic
  var_313_0_unit, // dynamic
  var_is_empty, // extern
  var_320_6_key, // dynamic
  var_320_11_left, // dynamic
  var_320_17_right, // dynamic
  var_map_reduce, // extern polymorphic
  var_337_0_self, // dynamic
  var_338_0_map_function, // dynamic
  var_339_0_reduce_function, // dynamic
  var_append, // extern
  var_340_0_unit, // dynamic
  var_347_6_key, // dynamic
  var_347_11_left, // dynamic
  var_347_17_right, // dynamic
  var_std__key_order_set, // initialized
  var_361_1_result, // dynamic
  var_empty_key_order_set, // extern
  var_serialization_tag_of, // extern polymorphic
  var_empty_collection_of, // extern polymorphic
  var__END
};


static TAB_NUM t_func_std_types__key_order_set[] = {
  1, // locals
  -3, // parameters
  MYSELF_PARAMETER, var_76_0_myself,
  MANDATORY_PARAMETER, var_77_0_key,
  uni_NONE, var_78_0_value,
  // $contents contents_of(myself)
  var_contents_of, 1, var_76_0_myself, 1, var_80_1_contents,
  // NONE == value
  var_std__equal, 2, uni_NONE, var_78_0_value, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1, lambda_2, TAIL_CALL,
  POS(80, 3),
  POS(82, 5),
  POS(81, 3)
};

static TAB_NUM t_lambda_1[] = {
  1, // locals
  0, // parameters
  // retrieve(contents key)
  var_retrieve, 2, var_80_1_contents, var_77_0_key, 1, LOCAL(1),
  //  retrieve(contents key)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(83, 8),
  POS(83, 7)
};

static TAB_NUM t_lambda_2[] = {
  0, // locals
  0, // parameters
  // if
  var_if, 3, var_78_0_value, lambda_value, lambda_5, TAIL_CALL,
  POS(85, 7)
};

static TAB_NUM t_lambda_value[] = {
  1, // locals
  0, // parameters
  // insert &contents $success key
  var_insert, 2, var_80_1_contents, var_77_0_key, 2, var_80_1_contents, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_3, lambda_4, TAIL_CALL,
  POS(87, 11),
  POS(88, 11)
};

static TAB_NUM t_lambda_3[] = {
  3, // locals
  0, // parameters
  // length_of(myself)+1
  var_length_of, 1, var_76_0_myself, 1, LOCAL(1),
  // length_of(myself)+1
  var_std__plus, 2, LOCAL(1), num_1, 1, LOCAL(2),
  // myself
  LET, -2, var_76_0_myself, var_contents_of, var_80_1_contents, var_length_of, LOCAL(2), LOCAL(3),
  // 
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(93, 28),
  POS(93, 28),
  POS(91, 15),
  POS(90, 15)
};

static TAB_NUM t_lambda_4[] = {
  0, // locals
  0, // parameters
  //  myself
  LET, 1, var_76_0_myself, TAIL_CALL,
  POS(94, 15)
};

static TAB_NUM t_lambda_5[] = {
  1, // locals
  0, // parameters
  // delete &contents $success key
  var_delete, 2, var_80_1_contents, var_77_0_key, 2, var_80_1_contents, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_6, lambda_7, TAIL_CALL,
  POS(96, 11),
  POS(97, 11)
};

static TAB_NUM t_lambda_6[] = {
  3, // locals
  0, // parameters
  // length_of(myself)-1
  var_length_of, 1, var_76_0_myself, 1, LOCAL(1),
  // length_of(myself)-1
  var_std__minus, 2, LOCAL(1), num_1, 1, LOCAL(2),
  // myself
  LET, -2, var_76_0_myself, var_contents_of, var_80_1_contents, var_length_of, LOCAL(2), LOCAL(3),
  // 
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(102, 28),
  POS(102, 28),
  POS(100, 15),
  POS(99, 15)
};

static TAB_NUM t_lambda_7[] = {
  0, // locals
  0, // parameters
  //  myself
  LET, 1, var_76_0_myself, TAIL_CALL,
  POS(103, 15)
};

static TAB_NUM t_func_empty_node___retrieve[] = {
  1, // locals
  2, // parameters
  LOCAL(1),
  LOCAL(1),
  // -> false
  LET, 1, var_false, TAIL_CALL,
  POS(108, 36)
};

static TAB_NUM t_func_binary_node___retrieve[] = {
  2, // locals
  2, // parameters
  LOCAL(2), // 110_24_self
  var_110_29_key,
  // self $my_key $my_left $my_right
  LOCAL(2), 0, 3, var_111_6_my_key, var_111_14_my_left, var_111_23_my_right,
  // key == my_key
  var_std__equal, 2, var_110_29_key, var_111_6_my_key, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_8, lambda_9, TAIL_CALL,
  POS(111, 3),
  POS(113, 5),
  POS(112, 3)
};

static TAB_NUM t_lambda_8[] = {
  0, // locals
  0, // parameters
  //  true
  LET, 1, var_true, TAIL_CALL,
  POS(114, 7)
};

static TAB_NUM t_lambda_9[] = {
  1, // locals
  0, // parameters
  // key < my_key
  var_std__less, 2, var_110_29_key, var_111_6_my_key, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_10, lambda_11, TAIL_CALL,
  POS(117, 9),
  POS(116, 7)
};

static TAB_NUM t_lambda_10[] = {
  0, // locals
  0, // parameters
  // retrieve my_left key
  var_retrieve, 2, var_111_14_my_left, var_110_29_key, TAIL_CALL,
  POS(118, 11)
};

static TAB_NUM t_lambda_11[] = {
  0, // locals
  0, // parameters
  // retrieve my_right key
  var_retrieve, 2, var_111_23_my_right, var_110_29_key, TAIL_CALL,
  POS(119, 11)
};

static TAB_NUM t_func_empty_node___insert[] = {
  2, // locals
  2, // parameters
  LOCAL(1),
  LOCAL(2), // 124_27_key
  // new(binary_node key empty_node empty_node) true
  var_new, 4, var_binary_node, LOCAL(2), var_empty_node, var_empty_node, 1, LOCAL(1),
  // -> new(binary_node key empty_node empty_node) true
  LET, 2, LOCAL(1), var_true, TAIL_CALL,
  POS(125, 6),
  POS(125, 3)
};

static TAB_NUM t_func_binary_node___insert[] = {
  1, // locals
  2, // parameters
  var_127_22_self,
  var_127_27_key,
  // self $my_key $my_left $my_right
  var_127_22_self, 0, 3, var_128_6_my_key, var_128_14_my_left, var_128_23_my_right,
  // key == my_key
  var_std__equal, 2, var_127_27_key, var_128_6_my_key, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_12, lambda_13, TAIL_CALL,
  POS(128, 3),
  POS(130, 5),
  POS(129, 3)
};

static TAB_NUM t_lambda_12[] = {
  0, // locals
  0, // parameters
  //  self false
  LET, 2, var_127_22_self, var_false, TAIL_CALL,
  POS(131, 7)
};

static TAB_NUM t_lambda_13[] = {
  1, // locals
  0, // parameters
  // key < my_key
  var_std__less, 2, var_127_27_key, var_128_6_my_key, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_14, lambda_17, TAIL_CALL,
  POS(134, 9),
  POS(133, 7)
};

static TAB_NUM t_lambda_14[] = {
  1, // locals
  0, // parameters
  // insert &my_left $success key
  var_insert, 2, var_128_14_my_left, var_127_27_key, 2, var_128_14_my_left, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_15, lambda_16, TAIL_CALL,
  POS(136, 11),
  POS(137, 11)
};

static TAB_NUM t_lambda_15[] = {
  1, // locals
  0, // parameters
  // new(self my_key my_left my_right) true
  var_new, 4, var_127_22_self, var_128_6_my_key, var_128_14_my_left, var_128_23_my_right, 1, LOCAL(1),
  //  new(self my_key my_left my_right) true
  LET, 2, LOCAL(1), var_true, TAIL_CALL,
  POS(139, 16),
  POS(139, 15)
};

static TAB_NUM t_lambda_16[] = {
  0, // locals
  0, // parameters
  //  self false
  LET, 2, var_127_22_self, var_false, TAIL_CALL,
  POS(140, 15)
};

static TAB_NUM t_lambda_17[] = {
  1, // locals
  0, // parameters
  // insert &my_right $success key
  var_insert, 2, var_128_23_my_right, var_127_27_key, 2, var_128_23_my_right, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_18, lambda_19, TAIL_CALL,
  POS(142, 11),
  POS(143, 11)
};

static TAB_NUM t_lambda_18[] = {
  1, // locals
  0, // parameters
  // new(self my_key my_left my_right) true
  var_new, 4, var_127_22_self, var_128_6_my_key, var_128_14_my_left, var_128_23_my_right, 1, LOCAL(1),
  //  new(self my_key my_left my_right) true
  LET, 2, LOCAL(1), var_true, TAIL_CALL,
  POS(145, 16),
  POS(145, 15)
};

static TAB_NUM t_lambda_19[] = {
  0, // locals
  0, // parameters
  //  self false
  LET, 2, var_127_22_self, var_false, TAIL_CALL,
  POS(146, 15)
};

static TAB_NUM t_func_fetch_first[] = {
  1, // locals
  1, // parameters
  var_151_15_self,
  // self $my_key $my_left $my_right
  var_151_15_self, 0, 3, var_152_6_my_key, var_152_14_my_left, var_152_23_my_right,
  // is_an_empty_node
  var_is_an_empty_node, 1, var_152_14_my_left, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_20, lambda_21, TAIL_CALL,
  POS(152, 3),
  POS(154, 13),
  POS(153, 3)
};

static TAB_NUM t_lambda_20[] = {
  0, // locals
  0, // parameters
  //  my_right my_key
  LET, 2, var_152_23_my_right, var_152_6_my_key, TAIL_CALL,
  POS(155, 7)
};

static TAB_NUM t_lambda_21[] = {
  2, // locals
  0, // parameters
  // fetch_first &my_left $first_key
  func_fetch_first, 1, var_152_14_my_left, 2, var_152_14_my_left, LOCAL(2),
  // new(self my_key my_left my_right) first_key
  var_new, 4, var_151_15_self, var_152_6_my_key, var_152_14_my_left, var_152_23_my_right, 1, LOCAL(1),
  // -> new(self my_key my_left my_right) first_key
  LET, 2, LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(157, 7),
  POS(158, 10),
  POS(158, 7)
};

static TAB_NUM t_func_empty_node___delete[] = {
  2, // locals
  2, // parameters
  LOCAL(2), // 160_21_self
  LOCAL(1),
  // -> self false
  LET, 2, LOCAL(2), var_false, TAIL_CALL,
  POS(160, 33)
};

static TAB_NUM t_func_binary_node___delete[] = {
  1, // locals
  2, // parameters
  var_162_22_self,
  var_162_27_key,
  // self $my_key $my_left $my_right
  var_162_22_self, 0, 3, var_163_6_my_key, var_163_14_my_left, var_163_23_my_right,
  // key == my_key
  var_std__equal, 2, var_162_27_key, var_163_6_my_key, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_22, lambda_27, TAIL_CALL,
  POS(163, 3),
  POS(165, 5),
  POS(164, 3)
};

static TAB_NUM t_lambda_22[] = {
  1, // locals
  0, // parameters
  // is_an_empty_node
  var_is_an_empty_node, 1, var_163_14_my_left, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_23, lambda_24, TAIL_CALL,
  POS(168, 17),
  POS(167, 7)
};

static TAB_NUM t_lambda_23[] = {
  0, // locals
  0, // parameters
  //  my_right true
  LET, 2, var_163_23_my_right, var_true, TAIL_CALL,
  POS(169, 11)
};

static TAB_NUM t_lambda_24[] = {
  1, // locals
  0, // parameters
  // is_an_empty_node
  var_is_an_empty_node, 1, var_163_23_my_right, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_25, lambda_26, TAIL_CALL,
  POS(172, 22),
  POS(171, 11)
};

static TAB_NUM t_lambda_25[] = {
  0, // locals
  0, // parameters
  //  my_left true
  LET, 2, var_163_14_my_left, var_true, TAIL_CALL,
  POS(173, 15)
};

static TAB_NUM t_lambda_26[] = {
  2, // locals
  0, // parameters
  // fetch_first &my_right $first_key
  func_fetch_first, 1, var_163_23_my_right, 2, var_163_23_my_right, LOCAL(2),
  // new(self first_key my_left my_right)
  var_new, 4, var_162_22_self, LOCAL(2), var_163_14_my_left, var_163_23_my_right, 1, LOCAL(1),
  // -> new(self first_key my_left my_right)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(175, 15),
  POS(176, 18),
  POS(176, 15)
};

static TAB_NUM t_lambda_27[] = {
  1, // locals
  0, // parameters
  // key < my_key
  var_std__less, 2, var_162_27_key, var_163_6_my_key, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_28, lambda_31, TAIL_CALL,
  POS(179, 9),
  POS(178, 7)
};

static TAB_NUM t_lambda_28[] = {
  1, // locals
  0, // parameters
  // delete &my_left $success key
  var_delete, 2, var_163_14_my_left, var_162_27_key, 2, var_163_14_my_left, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_29, lambda_30, TAIL_CALL,
  POS(181, 11),
  POS(182, 11)
};

static TAB_NUM t_lambda_29[] = {
  1, // locals
  0, // parameters
  // new(self my_key my_left my_right) true
  var_new, 4, var_162_22_self, var_163_6_my_key, var_163_14_my_left, var_163_23_my_right, 1, LOCAL(1),
  //  new(self my_key my_left my_right) true
  LET, 2, LOCAL(1), var_true, TAIL_CALL,
  POS(184, 16),
  POS(184, 15)
};

static TAB_NUM t_lambda_30[] = {
  0, // locals
  0, // parameters
  //  self false
  LET, 2, var_162_22_self, var_false, TAIL_CALL,
  POS(185, 15)
};

static TAB_NUM t_lambda_31[] = {
  1, // locals
  0, // parameters
  // delete &my_right $success key
  var_delete, 2, var_163_23_my_right, var_162_27_key, 2, var_163_23_my_right, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_32, lambda_33, TAIL_CALL,
  POS(187, 11),
  POS(188, 11)
};

static TAB_NUM t_lambda_32[] = {
  1, // locals
  0, // parameters
  // new(self my_key my_left my_right) true
  var_new, 4, var_162_22_self, var_163_6_my_key, var_163_14_my_left, var_163_23_my_right, 1, LOCAL(1),
  //  new(self my_key my_left my_right) true
  LET, 2, LOCAL(1), var_true, TAIL_CALL,
  POS(190, 16),
  POS(190, 15)
};

static TAB_NUM t_lambda_33[] = {
  0, // locals
  0, // parameters
  //  self false
  LET, 2, var_162_22_self, var_false, TAIL_CALL,
  POS(191, 15)
};

static TAB_NUM t_func_binary_node___first_item_of[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 196_29_self
  // self $my_key $my_left $_my_right
  LOCAL(2), 0, 3, var_197_6_my_key, var_197_14_my_left, LOCAL(1),
  // is_an_empty_node
  var_is_an_empty_node, 1, var_197_14_my_left, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_34, lambda_35, TAIL_CALL,
  POS(197, 3),
  POS(199, 13),
  POS(198, 3)
};

static TAB_NUM t_lambda_34[] = {
  0, // locals
  0, // parameters
  //  my_key
  LET, 1, var_197_6_my_key, TAIL_CALL,
  POS(200, 7)
};

static TAB_NUM t_lambda_35[] = {
  1, // locals
  0, // parameters
  // first_item_of(my_left)
  var_first_item_of, 1, var_197_14_my_left, 1, LOCAL(1),
  //  first_item_of(my_left)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(201, 8),
  POS(201, 7)
};

static TAB_NUM t_func_std_types__key_order_set___first_item_of[] = {
  3, // locals
  1, // parameters
  LOCAL(3), // 203_42_self
  // contents_of(self))
  var_contents_of, 1, LOCAL(3), 1, LOCAL(1),
  // first_item_of(contents_of(self))
  var_first_item_of, 1, LOCAL(1), 1, LOCAL(2),
  // -> first_item_of(contents_of(self))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(204, 20),
  POS(204, 6),
  POS(204, 3)
};

static TAB_NUM t_func_binary_node___last_item_of[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 209_28_self
  // self $my_key $_my_left $my_right
  LOCAL(2), 0, 3, var_210_6_my_key, LOCAL(1), var_210_24_my_right,
  // is_an_empty_node
  var_is_an_empty_node, 1, var_210_24_my_right, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_36, lambda_37, TAIL_CALL,
  POS(210, 3),
  POS(212, 14),
  POS(211, 3)
};

static TAB_NUM t_lambda_36[] = {
  0, // locals
  0, // parameters
  //  my_key
  LET, 1, var_210_6_my_key, TAIL_CALL,
  POS(213, 7)
};

static TAB_NUM t_lambda_37[] = {
  1, // locals
  0, // parameters
  // last_item_of(my_right)
  var_last_item_of, 1, var_210_24_my_right, 1, LOCAL(1),
  //  last_item_of(my_right)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(214, 8),
  POS(214, 7)
};

static TAB_NUM t_func_std_types__key_order_set___last_item_of[] = {
  3, // locals
  1, // parameters
  LOCAL(3), // 216_41_self
  // contents_of(self))
  var_contents_of, 1, LOCAL(3), 1, LOCAL(1),
  // last_item_of(contents_of(self))
  var_last_item_of, 1, LOCAL(1), 1, LOCAL(2),
  // -> last_item_of(contents_of(self))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(217, 19),
  POS(217, 6),
  POS(217, 3)
};

static TAB_NUM t_func_finish___for_each_1_call[] = {
  1, // locals
  1, // parameters
  LOCAL(1),
  // break!
  var_break, 0, IO_TAIL_CALL,
  POS(228, 34)
};

static TAB_NUM t_func_empty_node___for_each_1_left[] = {
  1, // locals
  1, // parameters
  LOCAL(1),
  // basic_loops::todo(-1) # peek
  var_basic_loops__todo, 1, minus_num_1, 1, LOCAL(1),
  // for_each_1_call! basic_loops::todo(-1) # peek
  var_for_each_1_call, 1, LOCAL(1), IO_TAIL_CALL,
  POS(231, 20),
  POS(231, 3)
};

static TAB_NUM t_func_binary_node___for_each_1_left[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 233_31_self
  // self $_my_key $my_left $_my_right
  LOCAL(2), 0, 3, LOCAL(1), LOCAL(3), LOCAL(1),
  // push &basic_loops::todo self
  var_push, 2, var_basic_loops__todo, LOCAL(2), 1, var_basic_loops__todo,
  // for_each_1_left! my_left
  var_for_each_1_left, 1, LOCAL(3), IO_TAIL_CALL,
  POS(234, 3),
  POS(235, 3),
  POS(236, 3)
};

static TAB_NUM t_func_binary_node___for_each_1_call[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 238_31_self
  // self $my_key $_my_left $_my_right
  LOCAL(2), 0, 3, LOCAL(3), LOCAL(1), LOCAL(1),
  // basic_loops::body! my_key
  var_basic_loops__body, 1, LOCAL(3), IO_TAIL_CALL,
  POS(239, 3),
  POS(240, 3)
};

static TAB_NUM t_func_binary_node___for_each_1_right[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 242_32_self
  // self $_my_key $_my_left $my_right
  LOCAL(2), 0, 3, LOCAL(1), LOCAL(1), LOCAL(3),
  // for_each_1_left! my_right
  var_for_each_1_left, 1, LOCAL(3), IO_TAIL_CALL,
  POS(243, 3),
  POS(244, 3)
};

static TAB_NUM t_func_std_types__key_order_set___for_each[] = {
  4, // locals
  -3, // parameters
  MANDATORY_PARAMETER, LOCAL(2), // 275_0_self
  MANDATORY_PARAMETER, LOCAL(3), // 276_0_body
  var_next, var_277_0_finally,
  // $saved_context
  var_tuple, 5, var_next, var_break, var_basic_loops__body, var_basic_loops__finally, var_basic_loops__todo, 1, LOCAL(4),
  // !basic_loops::body body
  LET, 1, LOCAL(3), 1, var_basic_loops__body,
  // !basic_loops::finally finally
  LET, 1, var_277_0_finally, 1, var_basic_loops__finally,
  // !basic_loops::todo list(finish)
  var_list, 1, var_finish, 1, var_basic_loops__todo,
  // !break: (myself^)
  LET, 1, lambda_break, 1, var_break,
  // break.basic_loops::saved_context_of saved_context
  LET, -1, var_break, var_basic_loops__saved_context_of, LOCAL(4), var_break,
  // !next:
  LET, 1, lambda_next, 1, var_next,
  // contents_of(self)
  var_contents_of, 1, LOCAL(2), 1, LOCAL(1),
  // for_each_1_left! contents_of(self)
  var_for_each_1_left, 1, LOCAL(1), IO_TAIL_CALL,
  POS(279, 3),
  POS(287, 3),
  POS(288, 3),
  POS(289, 3),
  POS(291, 3),
  POS(298, 4),
  POS(300, 3),
  POS(304, 20),
  POS(304, 3)
};

static TAB_NUM t_lambda_break[] = {
  2, // locals
  -1, // parameters
  MYSELF_PARAMETER, LOCAL(2), // 291_9_myself
  // !finally basic_loops::finally
  LET, 1, var_basic_loops__finally, 1, var_277_0_finally,
  // basic_loops::saved_context_of(myself)
  var_basic_loops__saved_context_of, 1, LOCAL(2), 1, LOCAL(1),
  // basic_loops::saved_context_of(myself)
  LOCAL(1), 0, 5, var_next, var_break, var_basic_loops__body, var_basic_loops__finally, var_basic_loops__todo,
  // finally!
  var_277_0_finally, 0, IO_TAIL_CALL,
  POS(292, 5),
  POS(293, 5),
  POS(293, 5),
  POS(296, 5)
};

static TAB_NUM t_lambda_next[] = {
  1, // locals
  0, // parameters
  // pop &basic_loops::todo $node
  var_pop, 1, var_basic_loops__todo, 2, var_basic_loops__todo, LOCAL(1),
  // for_each_1_right! node
  var_for_each_1_right, 1, LOCAL(1), IO_TAIL_CALL,
  POS(301, 5),
  POS(302, 5)
};

static TAB_NUM t_func_std_types__key_order_set___reduce[] = {
  1, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_311_0_self,
  MANDATORY_PARAMETER, var_312_0_reduce_function,
  var_undefined, var_313_0_unit,
  // is_empty
  var_is_empty, 1, var_311_0_self, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_38, lambda_39, TAIL_CALL,
  POS(316, 10),
  POS(315, 3)
};

static TAB_NUM t_lambda_38[] = {
  0, // locals
  0, // parameters
  //  unit
  LET, 1, var_313_0_unit, TAIL_CALL,
  POS(317, 7)
};

static TAB_NUM t_lambda_39[] = {
  2, // locals
  0, // parameters
  // contents_of(self))
  var_contents_of, 1, var_311_0_self, 1, LOCAL(1),
  // reduce(contents_of(self))
  func_reduce, 1, LOCAL(1), 1, LOCAL(2),
  // -> reduce(contents_of(self))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(331, 17),
  POS(331, 10),
  POS(331, 7)
};

static TAB_NUM t_func_reduce[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 319_10_node
  // node $key $left $right
  LOCAL(2), 0, 3, var_320_6_key, var_320_11_left, var_320_17_right,
  // is_an_empty_node
  var_is_an_empty_node, 1, var_320_11_left, 1, LOCAL(1),
  // !key
  var_if, 3, LOCAL(1), lambda_40, lambda_41, 1, var_320_6_key,
  // is_an_empty_node
  var_is_an_empty_node, 1, var_320_17_right, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_42, lambda_43, TAIL_CALL,
  POS(320, 9),
  POS(323, 18),
  POS(321, 9),
  POS(327, 17),
  POS(326, 9)
};

static TAB_NUM t_lambda_40[] = {
  0, // locals
  0, // parameters
  //  key
  LET, 1, var_320_6_key, TAIL_CALL,
  POS(324, 15)
};

static TAB_NUM t_lambda_41[] = {
  2, // locals
  0, // parameters
  // reduce(left) key)
  func_reduce, 1, var_320_11_left, 1, LOCAL(1),
  // reduce_function(reduce(left) key)
  var_312_0_reduce_function, 2, LOCAL(1), var_320_6_key, 1, LOCAL(2),
  //  reduce_function(reduce(left) key)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(325, 32),
  POS(325, 16),
  POS(325, 15)
};

static TAB_NUM t_lambda_42[] = {
  0, // locals
  0, // parameters
  //  key
  LET, 1, var_320_6_key, TAIL_CALL,
  POS(328, 13)
};

static TAB_NUM t_lambda_43[] = {
  2, // locals
  0, // parameters
  // reduce(right))
  func_reduce, 1, var_320_17_right, 1, LOCAL(1),
  // reduce_function(key reduce(right))
  var_312_0_reduce_function, 2, var_320_6_key, LOCAL(1), 1, LOCAL(2),
  //  reduce_function(key reduce(right))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(329, 34),
  POS(329, 14),
  POS(329, 13)
};

static TAB_NUM t_func_std_types__key_order_set___map_reduce[] = {
  1, // locals
  -4, // parameters
  MANDATORY_PARAMETER, var_337_0_self,
  MANDATORY_PARAMETER, var_338_0_map_function,
  var_append, var_339_0_reduce_function,
  var_undefined, var_340_0_unit,
  // is_empty
  var_is_empty, 1, var_337_0_self, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_44, lambda_45, TAIL_CALL,
  POS(343, 10),
  POS(342, 3)
};

static TAB_NUM t_lambda_44[] = {
  0, // locals
  0, // parameters
  //  unit
  LET, 1, var_340_0_unit, TAIL_CALL,
  POS(344, 7)
};

static TAB_NUM t_lambda_45[] = {
  2, // locals
  0, // parameters
  // contents_of(self))
  var_contents_of, 1, var_337_0_self, 1, LOCAL(1),
  // map_reduce(contents_of(self))
  func_map_reduce, 1, LOCAL(1), 1, LOCAL(2),
  // -> map_reduce(contents_of(self))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(358, 21),
  POS(358, 10),
  POS(358, 7)
};

static TAB_NUM t_func_map_reduce[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 346_14_node
  // node $key $left $right
  LOCAL(2), 0, 3, var_347_6_key, var_347_11_left, var_347_17_right,
  // map_function &key
  var_338_0_map_function, 1, var_347_6_key, 1, var_347_6_key,
  // is_an_empty_node
  var_is_an_empty_node, 1, var_347_11_left, 1, LOCAL(1),
  // if !key
  var_if, 3, LOCAL(1), lambda_46, lambda_47, 1, var_347_6_key,
  // is_an_empty_node
  var_is_an_empty_node, 1, var_347_17_right, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_48, lambda_49, TAIL_CALL,
  POS(347, 9),
  POS(348, 9),
  POS(350, 16),
  POS(349, 9),
  POS(354, 17),
  POS(353, 9)
};

static TAB_NUM t_lambda_46[] = {
  0, // locals
  0, // parameters
  //  key
  LET, 1, var_347_6_key, TAIL_CALL,
  POS(351, 13)
};

static TAB_NUM t_lambda_47[] = {
  2, // locals
  0, // parameters
  // map_reduce(left) key)
  func_map_reduce, 1, var_347_11_left, 1, LOCAL(1),
  // reduce_function(map_reduce(left) key)
  var_339_0_reduce_function, 2, LOCAL(1), var_347_6_key, 1, LOCAL(2),
  //  reduce_function(map_reduce(left) key)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(352, 30),
  POS(352, 14),
  POS(352, 13)
};

static TAB_NUM t_lambda_48[] = {
  0, // locals
  0, // parameters
  //  key
  LET, 1, var_347_6_key, TAIL_CALL,
  POS(355, 13)
};

static TAB_NUM t_lambda_49[] = {
  2, // locals
  0, // parameters
  // map_reduce(right))
  func_map_reduce, 1, var_347_17_right, 1, LOCAL(1),
  // reduce_function(key map_reduce(right))
  var_339_0_reduce_function, 2, var_347_6_key, LOCAL(1), 1, LOCAL(2),
  //  reduce_function(key map_reduce(right))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(356, 34),
  POS(356, 14),
  POS(356, 13)
};

static TAB_NUM t_func_std__key_order_set[] = {
  1, // locals
  -1, // parameters
  REST_PARAMETER, LOCAL(1), // 360_22_keys
  // $result empty_key_order_set
  LET, 1, var_empty_key_order_set, 1, var_361_1_result,
  // for_each keys
  var_for_each, 3, LOCAL(1), lambda_50, lambda_51, TAIL_CALL,
  POS(361, 3),
  POS(362, 3)
};

static TAB_NUM t_lambda_50[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 363_3_key
  // result(key) true
  var_361_1_result, 2, LOCAL(1), var_true, 1, var_361_1_result,
  // next
  var_next, 0, TAIL_CALL,
  POS(364, 8),
  POS(365, 7)
};

static TAB_NUM t_lambda_51[] = {
  0, // locals
  0, // parameters
  //  result
  LET, 1, var_361_1_result, TAIL_CALL,
  POS(366, 7)
};

static int tuple_69_0_arguments[] = {
  -var_undefined, -var_undefined, -var_undefined
};

static FUNKY_CONSTANT constants_table[] = {
  {FLT_POSITIVE_INT64, 0, {.value = 0}},
  {FLT_TUPLE, 3, {.arguments = tuple_69_0_arguments}},
  {FLT_UNIQUE, 0, {.str_8 = "NONE"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__key_order_set}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_value}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_3}},
  {FLT_POSITIVE_INT64, 0, {.value = 1}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_4}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_5}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_6}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_7}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_empty_node___retrieve}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_binary_node___retrieve}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_8}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_9}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_10}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_11}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_empty_node___insert}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_binary_node___insert}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_12}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_13}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_14}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_15}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_16}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_17}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_18}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_19}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_fetch_first}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_20}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_21}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_empty_node___delete}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_binary_node___delete}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_22}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_23}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_24}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_25}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_26}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_27}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_28}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_29}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_30}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_31}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_32}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_33}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_binary_node___first_item_of}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_34}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_35}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__key_order_set___first_item_of}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_binary_node___last_item_of}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_36}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_37}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__key_order_set___last_item_of}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_finish___for_each_1_call}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_empty_node___for_each_1_left}},
  {FLT_NEGATIVE_INT64, 0, {.value = 1}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_binary_node___for_each_1_left}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_binary_node___for_each_1_call}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_binary_node___for_each_1_right}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__key_order_set___for_each}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_break}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_next}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__key_order_set___reduce}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_38}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_39}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_reduce}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_40}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_41}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_42}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_43}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__key_order_set___map_reduce}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_44}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_45}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_map_reduce}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_46}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_47}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_48}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_49}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__key_order_set}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_50}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_51}},
  {FLT_STRING_8, 13, {.str_8 = "key_order_set"}}
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
  {var_for_each_1_left, -func_empty_node___for_each_1_left}
};

static ATTRIBUTE_DEFINITION binary_node__attributes[] = {
  {var_retrieve, -func_binary_node___retrieve},
  {var_insert, -func_binary_node___insert},
  {var_delete, -func_binary_node___delete},
  {var_first_item_of, -func_binary_node___first_item_of},
  {var_last_item_of, -func_binary_node___last_item_of},
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
    {.position = POS(25, 1)}
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
    {.position = POS(34, 1)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "is_a_key_order_set\000", NULL,
    {.position = POS(34, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "false\000", NULL,
    {.position = POS(34, 39)}
  },
  {
    FOT_DERIVED, 0, 11,
    "key_order_set\000std_types", std_types__key_order_set__attributes,
    {"set\000std_types"}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "true\000", NULL,
    {.position = POS(35, 46)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "set\000std_types", NULL,
    {.position = POS(37, 27)}
  },
  {
    FOT_DERIVED, 0, 5,
    "empty_node\000", empty_node__attributes,
    {"object\000std_types"}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "length_of\000", NULL,
    {.position = POS(53, 27)}
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
    FOT_INITIALIZED, 0, 8,
    "binary_node\000", binary_node__attributes,
    {.const_idx = -tuple_69_0}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "undefined\000", NULL,
    {.position = POS(69, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "tuple\000", NULL,
    {.position = POS(69, 14)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "76_0_myself\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "77_0_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "78_0_value\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "80_1_contents\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "equal\000std", NULL,
    {.position = POS(82, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000std", NULL,
    {.position = POS(93, 28)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if\000", NULL,
    {.position = POS(88, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "minus\000std", NULL,
    {.position = POS(102, 28)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "110_29_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "111_6_my_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "111_14_my_left\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "111_23_my_right\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "less\000std", NULL,
    {.position = POS(117, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "new\000", NULL,
    {.position = POS(125, 6)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "127_22_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "127_27_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "128_6_my_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "128_14_my_left\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "128_23_my_right\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "151_15_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "152_6_my_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "152_14_my_left\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "152_23_my_right\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "162_22_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "162_27_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "163_6_my_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "163_14_my_left\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "163_23_my_right\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "first_item_of\000", NULL,
    {.position = POS(196, 14)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "197_6_my_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "197_14_my_left\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "last_item_of\000", NULL,
    {.position = POS(209, 14)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "210_6_my_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "210_24_my_right\000", NULL
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
    {.position = POS(228, 34)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "todo\000basic_loops", NULL,
    {.position = POS(231, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "push\000", NULL,
    {.position = POS(235, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "body\000basic_loops", NULL,
    {.position = POS(240, 3)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "for_each\000", NULL,
    {.position = POS(246, 27)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "277_0_finally\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "next\000", NULL,
    {.position = POS(277, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "finally\000basic_loops", NULL,
    {.position = POS(284, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "list\000", NULL,
    {.position = POS(289, 22)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "saved_context_of\000basic_loops", NULL,
    {.position = POS(293, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "pop\000", NULL,
    {.position = POS(301, 5)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "reduce\000", NULL,
    {.position = POS(307, 27)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "311_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "312_0_reduce_function\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "313_0_unit\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_empty\000", NULL,
    {.position = POS(316, 10)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "320_6_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "320_11_left\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "320_17_right\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "map_reduce\000", NULL,
    {.position = POS(333, 27)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "337_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "338_0_map_function\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "339_0_reduce_function\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "append\000", NULL,
    {.position = POS(339, 23)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "340_0_unit\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "347_6_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "347_11_left\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "347_17_right\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "key_order_set\000std", NULL,
    {.const_idx = -func_std__key_order_set}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "361_1_result\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_key_order_set\000", NULL,
    {.position = POS(361, 11)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "serialization_tag_of\000", NULL,
    {.position = POS(368, 27)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "empty_collection_of\000", NULL,
    {.position = POS(369, 27)}
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
  .feature_flags = FEAT_POSITIONS,
  .marker = 0,
  0, // number of required modules
  0, // number of defined namespaces
  1, // number of used namespaces
  83, // number of constants
  90, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  constants_table,
  variables_table,
};
