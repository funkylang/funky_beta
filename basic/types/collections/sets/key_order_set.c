#include <stddef.h>
#include <stdint.h>

#include "runtime/common.h"
#include "runtime/builtins.h"
#include "runtime/fko.h"
#include "runtime/memory.h"

enum {
  num_0 = -1,
  tuple_71_0 = -2,
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
  lambda_38 = -62,
  lambda_next = -63,
  func_std_types__key_order_set___reduce = -64,
  lambda_39 = -65,
  lambda_40 = -66,
  func_reduce = -67,
  lambda_41 = -68,
  lambda_42 = -69,
  lambda_43 = -70,
  lambda_44 = -71,
  func_std_types__key_order_set___map_reduce = -72,
  lambda_45 = -73,
  lambda_46 = -74,
  func_map_reduce = -75,
  lambda_47 = -76,
  lambda_48 = -77,
  lambda_49 = -78,
  lambda_50 = -79,
  func_std__key_order_set = -80,
  lambda_51 = -81,
  lambda_52 = -82,
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
  var_78_0_myself, // dynamic
  var_79_0_key, // dynamic
  var_80_0_value, // dynamic
  var_82_1_contents, // dynamic
  var_std__equal, // extern
  var_std__plus, // extern
  var_if, // extern
  var_std__minus, // extern
  var_112_29_key, // dynamic
  var_113_6_my_key, // dynamic
  var_113_14_my_left, // dynamic
  var_113_23_my_right, // dynamic
  var_std__less, // extern
  var_typed_tuple, // extern
  var_129_22_self, // dynamic
  var_129_27_key, // dynamic
  var_130_6_my_key, // dynamic
  var_130_14_my_left, // dynamic
  var_130_23_my_right, // dynamic
  var_153_15_self, // dynamic
  var_154_6_my_key, // dynamic
  var_154_14_my_left, // dynamic
  var_154_23_my_right, // dynamic
  var_164_22_self, // dynamic
  var_164_27_key, // dynamic
  var_165_6_my_key, // dynamic
  var_165_14_my_left, // dynamic
  var_165_23_my_right, // dynamic
  var_first_item_of, // extern polymorphic
  var_199_6_my_key, // dynamic
  var_199_14_my_left, // dynamic
  var_last_item_of, // extern polymorphic
  var_212_6_my_key, // dynamic
  var_212_24_my_right, // dynamic
  var_for_each_1_left, // attribute
  var_for_each_1_call, // attribute
  var_for_each_1_right, // attribute
  var_finish, // derived
  var_break, // extern
  var_basic_loops__todo, // extern
  var_push, // extern
  var_basic_loops__body, // extern
  var_for_each, // extern polymorphic
  var_279_0_finally, // dynamic
  var_next, // extern
  var_basic_loops__finally, // extern
  var_list, // extern
  var_basic_types__break_function, // extern
  var_basic_loops__saved_context_of, // extern polymorphic
  var_new, // extern
  var_pop, // extern
  var_reduce, // extern polymorphic
  var_313_0_self, // dynamic
  var_314_0_reduce_function, // dynamic
  var_315_0_unit, // dynamic
  var_is_empty, // extern
  var_322_6_key, // dynamic
  var_322_11_left, // dynamic
  var_322_17_right, // dynamic
  var_map_reduce, // extern polymorphic
  var_339_0_self, // dynamic
  var_340_0_map_function, // dynamic
  var_341_0_reduce_function, // dynamic
  var_append, // extern
  var_342_0_unit, // dynamic
  var_349_6_key, // dynamic
  var_349_11_left, // dynamic
  var_349_17_right, // dynamic
  var_std__key_order_set, // initialized
  var_363_1_result, // dynamic
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
  MYSELF_PARAMETER, var_78_0_myself,
  MANDATORY_PARAMETER, var_79_0_key,
  uni_NONE, var_80_0_value,
  // $contents contents_of(myself)
  var_contents_of, 1, var_78_0_myself, 1, var_82_1_contents,
  // NONE == value
  var_std__equal, 2, uni_NONE, var_80_0_value, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1, lambda_2, TAIL_CALL,
  POS(82, 3),
  POS(84, 5),
  POS(83, 3)
};

static TAB_NUM t_lambda_1[] = {
  1, // locals
  0, // parameters
  // retrieve(contents key)
  var_retrieve, 2, var_82_1_contents, var_79_0_key, 1, LOCAL(1),
  //  retrieve(contents key)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(85, 8),
  POS(85, 7)
};

static TAB_NUM t_lambda_2[] = {
  0, // locals
  0, // parameters
  // if
  var_if, 3, var_80_0_value, lambda_value, lambda_5, TAIL_CALL,
  POS(87, 7)
};

static TAB_NUM t_lambda_value[] = {
  1, // locals
  0, // parameters
  // insert &contents $success key
  var_insert, 2, var_82_1_contents, var_79_0_key, 2, var_82_1_contents, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_3, lambda_4, TAIL_CALL,
  POS(89, 11),
  POS(90, 11)
};

static TAB_NUM t_lambda_3[] = {
  3, // locals
  0, // parameters
  // length_of(myself)+1
  var_length_of, 1, var_78_0_myself, 1, LOCAL(1),
  // length_of(myself)+1
  var_std__plus, 2, LOCAL(1), num_1, 1, LOCAL(2),
  // myself
  LET, -2, var_78_0_myself, var_contents_of, var_82_1_contents, var_length_of, LOCAL(2), LOCAL(3),
  // 
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(95, 28),
  POS(95, 28),
  POS(93, 15),
  POS(92, 15)
};

static TAB_NUM t_lambda_4[] = {
  0, // locals
  0, // parameters
  //  myself
  LET, 1, var_78_0_myself, TAIL_CALL,
  POS(96, 15)
};

static TAB_NUM t_lambda_5[] = {
  1, // locals
  0, // parameters
  // delete &contents $success key
  var_delete, 2, var_82_1_contents, var_79_0_key, 2, var_82_1_contents, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_6, lambda_7, TAIL_CALL,
  POS(98, 11),
  POS(99, 11)
};

static TAB_NUM t_lambda_6[] = {
  3, // locals
  0, // parameters
  // length_of(myself)-1
  var_length_of, 1, var_78_0_myself, 1, LOCAL(1),
  // length_of(myself)-1
  var_std__minus, 2, LOCAL(1), num_1, 1, LOCAL(2),
  // myself
  LET, -2, var_78_0_myself, var_contents_of, var_82_1_contents, var_length_of, LOCAL(2), LOCAL(3),
  // 
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(104, 28),
  POS(104, 28),
  POS(102, 15),
  POS(101, 15)
};

static TAB_NUM t_lambda_7[] = {
  0, // locals
  0, // parameters
  //  myself
  LET, 1, var_78_0_myself, TAIL_CALL,
  POS(105, 15)
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

static TAB_NUM t_func_binary_node___retrieve[] = {
  2, // locals
  2, // parameters
  LOCAL(2), // 112_24_self
  var_112_29_key,
  // self $my_key $my_left $my_right
  LOCAL(2), 0, 3, var_113_6_my_key, var_113_14_my_left, var_113_23_my_right,
  // key == my_key
  var_std__equal, 2, var_112_29_key, var_113_6_my_key, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_8, lambda_9, TAIL_CALL,
  POS(113, 3),
  POS(115, 5),
  POS(114, 3)
};

static TAB_NUM t_lambda_8[] = {
  0, // locals
  0, // parameters
  //  true
  LET, 1, var_true, TAIL_CALL,
  POS(116, 7)
};

static TAB_NUM t_lambda_9[] = {
  1, // locals
  0, // parameters
  // key < my_key
  var_std__less, 2, var_112_29_key, var_113_6_my_key, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_10, lambda_11, TAIL_CALL,
  POS(119, 9),
  POS(118, 7)
};

static TAB_NUM t_lambda_10[] = {
  0, // locals
  0, // parameters
  // retrieve my_left key
  var_retrieve, 2, var_113_14_my_left, var_112_29_key, TAIL_CALL,
  POS(120, 11)
};

static TAB_NUM t_lambda_11[] = {
  0, // locals
  0, // parameters
  // retrieve my_right key
  var_retrieve, 2, var_113_23_my_right, var_112_29_key, TAIL_CALL,
  POS(121, 11)
};

static TAB_NUM t_func_empty_node___insert[] = {
  2, // locals
  2, // parameters
  LOCAL(1),
  LOCAL(2), // 126_27_key
  // typed_tuple(binary_node key empty_node empty_node) true
  var_typed_tuple, 4, var_binary_node, LOCAL(2), var_empty_node, var_empty_node, 1, LOCAL(1),
  // -> typed_tuple(binary_node key empty_node empty_node) true
  LET, 2, LOCAL(1), var_true, TAIL_CALL,
  POS(127, 6),
  POS(127, 3)
};

static TAB_NUM t_func_binary_node___insert[] = {
  1, // locals
  2, // parameters
  var_129_22_self,
  var_129_27_key,
  // self $my_key $my_left $my_right
  var_129_22_self, 0, 3, var_130_6_my_key, var_130_14_my_left, var_130_23_my_right,
  // key == my_key
  var_std__equal, 2, var_129_27_key, var_130_6_my_key, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_12, lambda_13, TAIL_CALL,
  POS(130, 3),
  POS(132, 5),
  POS(131, 3)
};

static TAB_NUM t_lambda_12[] = {
  0, // locals
  0, // parameters
  //  self false
  LET, 2, var_129_22_self, var_false, TAIL_CALL,
  POS(133, 7)
};

static TAB_NUM t_lambda_13[] = {
  1, // locals
  0, // parameters
  // key < my_key
  var_std__less, 2, var_129_27_key, var_130_6_my_key, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_14, lambda_17, TAIL_CALL,
  POS(136, 9),
  POS(135, 7)
};

static TAB_NUM t_lambda_14[] = {
  1, // locals
  0, // parameters
  // insert &my_left $success key
  var_insert, 2, var_130_14_my_left, var_129_27_key, 2, var_130_14_my_left, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_15, lambda_16, TAIL_CALL,
  POS(138, 11),
  POS(139, 11)
};

static TAB_NUM t_lambda_15[] = {
  1, // locals
  0, // parameters
  // typed_tuple(self my_key my_left my_right) true
  var_typed_tuple, 4, var_129_22_self, var_130_6_my_key, var_130_14_my_left, var_130_23_my_right, 1, LOCAL(1),
  //  typed_tuple(self my_key my_left my_right) true
  LET, 2, LOCAL(1), var_true, TAIL_CALL,
  POS(141, 16),
  POS(141, 15)
};

static TAB_NUM t_lambda_16[] = {
  0, // locals
  0, // parameters
  //  self false
  LET, 2, var_129_22_self, var_false, TAIL_CALL,
  POS(142, 15)
};

static TAB_NUM t_lambda_17[] = {
  1, // locals
  0, // parameters
  // insert &my_right $success key
  var_insert, 2, var_130_23_my_right, var_129_27_key, 2, var_130_23_my_right, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_18, lambda_19, TAIL_CALL,
  POS(144, 11),
  POS(145, 11)
};

static TAB_NUM t_lambda_18[] = {
  1, // locals
  0, // parameters
  // typed_tuple(self my_key my_left my_right) true
  var_typed_tuple, 4, var_129_22_self, var_130_6_my_key, var_130_14_my_left, var_130_23_my_right, 1, LOCAL(1),
  //  typed_tuple(self my_key my_left my_right) true
  LET, 2, LOCAL(1), var_true, TAIL_CALL,
  POS(147, 16),
  POS(147, 15)
};

static TAB_NUM t_lambda_19[] = {
  0, // locals
  0, // parameters
  //  self false
  LET, 2, var_129_22_self, var_false, TAIL_CALL,
  POS(148, 15)
};

static TAB_NUM t_func_fetch_first[] = {
  1, // locals
  1, // parameters
  var_153_15_self,
  // self $my_key $my_left $my_right
  var_153_15_self, 0, 3, var_154_6_my_key, var_154_14_my_left, var_154_23_my_right,
  // is_an_empty_node
  var_is_an_empty_node, 1, var_154_14_my_left, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_20, lambda_21, TAIL_CALL,
  POS(154, 3),
  POS(156, 13),
  POS(155, 3)
};

static TAB_NUM t_lambda_20[] = {
  0, // locals
  0, // parameters
  //  my_right my_key
  LET, 2, var_154_23_my_right, var_154_6_my_key, TAIL_CALL,
  POS(157, 7)
};

static TAB_NUM t_lambda_21[] = {
  2, // locals
  0, // parameters
  // fetch_first &my_left $first_key
  func_fetch_first, 1, var_154_14_my_left, 2, var_154_14_my_left, LOCAL(2),
  // typed_tuple(self my_key my_left my_right) first_key
  var_typed_tuple, 4, var_153_15_self, var_154_6_my_key, var_154_14_my_left, var_154_23_my_right, 1, LOCAL(1),
  // -> typed_tuple(self my_key my_left my_right) first_key
  LET, 2, LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(159, 7),
  POS(160, 10),
  POS(160, 7)
};

static TAB_NUM t_func_empty_node___delete[] = {
  2, // locals
  2, // parameters
  LOCAL(2), // 162_21_self
  LOCAL(1),
  // -> self false
  LET, 2, LOCAL(2), var_false, TAIL_CALL,
  POS(162, 33)
};

static TAB_NUM t_func_binary_node___delete[] = {
  1, // locals
  2, // parameters
  var_164_22_self,
  var_164_27_key,
  // self $my_key $my_left $my_right
  var_164_22_self, 0, 3, var_165_6_my_key, var_165_14_my_left, var_165_23_my_right,
  // key == my_key
  var_std__equal, 2, var_164_27_key, var_165_6_my_key, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_22, lambda_27, TAIL_CALL,
  POS(165, 3),
  POS(167, 5),
  POS(166, 3)
};

static TAB_NUM t_lambda_22[] = {
  1, // locals
  0, // parameters
  // is_an_empty_node
  var_is_an_empty_node, 1, var_165_14_my_left, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_23, lambda_24, TAIL_CALL,
  POS(170, 17),
  POS(169, 7)
};

static TAB_NUM t_lambda_23[] = {
  0, // locals
  0, // parameters
  //  my_right true
  LET, 2, var_165_23_my_right, var_true, TAIL_CALL,
  POS(171, 11)
};

static TAB_NUM t_lambda_24[] = {
  1, // locals
  0, // parameters
  // is_an_empty_node
  var_is_an_empty_node, 1, var_165_23_my_right, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_25, lambda_26, TAIL_CALL,
  POS(174, 22),
  POS(173, 11)
};

static TAB_NUM t_lambda_25[] = {
  0, // locals
  0, // parameters
  //  my_left true
  LET, 2, var_165_14_my_left, var_true, TAIL_CALL,
  POS(175, 15)
};

static TAB_NUM t_lambda_26[] = {
  2, // locals
  0, // parameters
  // fetch_first &my_right $first_key
  func_fetch_first, 1, var_165_23_my_right, 2, var_165_23_my_right, LOCAL(2),
  // typed_tuple(self first_key my_left my_right)
  var_typed_tuple, 4, var_164_22_self, LOCAL(2), var_165_14_my_left, var_165_23_my_right, 1, LOCAL(1),
  // -> typed_tuple(self first_key my_left my_right)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(177, 15),
  POS(178, 18),
  POS(178, 15)
};

static TAB_NUM t_lambda_27[] = {
  1, // locals
  0, // parameters
  // key < my_key
  var_std__less, 2, var_164_27_key, var_165_6_my_key, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_28, lambda_31, TAIL_CALL,
  POS(181, 9),
  POS(180, 7)
};

static TAB_NUM t_lambda_28[] = {
  1, // locals
  0, // parameters
  // delete &my_left $success key
  var_delete, 2, var_165_14_my_left, var_164_27_key, 2, var_165_14_my_left, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_29, lambda_30, TAIL_CALL,
  POS(183, 11),
  POS(184, 11)
};

static TAB_NUM t_lambda_29[] = {
  1, // locals
  0, // parameters
  // typed_tuple(self my_key my_left my_right) true
  var_typed_tuple, 4, var_164_22_self, var_165_6_my_key, var_165_14_my_left, var_165_23_my_right, 1, LOCAL(1),
  //  typed_tuple(self my_key my_left my_right) true
  LET, 2, LOCAL(1), var_true, TAIL_CALL,
  POS(186, 16),
  POS(186, 15)
};

static TAB_NUM t_lambda_30[] = {
  0, // locals
  0, // parameters
  //  self false
  LET, 2, var_164_22_self, var_false, TAIL_CALL,
  POS(187, 15)
};

static TAB_NUM t_lambda_31[] = {
  1, // locals
  0, // parameters
  // delete &my_right $success key
  var_delete, 2, var_165_23_my_right, var_164_27_key, 2, var_165_23_my_right, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_32, lambda_33, TAIL_CALL,
  POS(189, 11),
  POS(190, 11)
};

static TAB_NUM t_lambda_32[] = {
  1, // locals
  0, // parameters
  // typed_tuple(self my_key my_left my_right) true
  var_typed_tuple, 4, var_164_22_self, var_165_6_my_key, var_165_14_my_left, var_165_23_my_right, 1, LOCAL(1),
  //  typed_tuple(self my_key my_left my_right) true
  LET, 2, LOCAL(1), var_true, TAIL_CALL,
  POS(192, 16),
  POS(192, 15)
};

static TAB_NUM t_lambda_33[] = {
  0, // locals
  0, // parameters
  //  self false
  LET, 2, var_164_22_self, var_false, TAIL_CALL,
  POS(193, 15)
};

static TAB_NUM t_func_binary_node___first_item_of[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 198_29_self
  // self $my_key $my_left $_my_right
  LOCAL(2), 0, 3, var_199_6_my_key, var_199_14_my_left, LOCAL(1),
  // is_an_empty_node
  var_is_an_empty_node, 1, var_199_14_my_left, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_34, lambda_35, TAIL_CALL,
  POS(199, 3),
  POS(201, 13),
  POS(200, 3)
};

static TAB_NUM t_lambda_34[] = {
  0, // locals
  0, // parameters
  //  my_key
  LET, 1, var_199_6_my_key, TAIL_CALL,
  POS(202, 7)
};

static TAB_NUM t_lambda_35[] = {
  1, // locals
  0, // parameters
  // first_item_of(my_left)
  var_first_item_of, 1, var_199_14_my_left, 1, LOCAL(1),
  //  first_item_of(my_left)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(203, 8),
  POS(203, 7)
};

static TAB_NUM t_func_std_types__key_order_set___first_item_of[] = {
  3, // locals
  1, // parameters
  LOCAL(3), // 205_42_self
  // contents_of(self))
  var_contents_of, 1, LOCAL(3), 1, LOCAL(1),
  // first_item_of(contents_of(self))
  var_first_item_of, 1, LOCAL(1), 1, LOCAL(2),
  // -> first_item_of(contents_of(self))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(206, 20),
  POS(206, 6),
  POS(206, 3)
};

static TAB_NUM t_func_binary_node___last_item_of[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 211_28_self
  // self $my_key $_my_left $my_right
  LOCAL(2), 0, 3, var_212_6_my_key, LOCAL(1), var_212_24_my_right,
  // is_an_empty_node
  var_is_an_empty_node, 1, var_212_24_my_right, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_36, lambda_37, TAIL_CALL,
  POS(212, 3),
  POS(214, 14),
  POS(213, 3)
};

static TAB_NUM t_lambda_36[] = {
  0, // locals
  0, // parameters
  //  my_key
  LET, 1, var_212_6_my_key, TAIL_CALL,
  POS(215, 7)
};

static TAB_NUM t_lambda_37[] = {
  1, // locals
  0, // parameters
  // last_item_of(my_right)
  var_last_item_of, 1, var_212_24_my_right, 1, LOCAL(1),
  //  last_item_of(my_right)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(216, 8),
  POS(216, 7)
};

static TAB_NUM t_func_std_types__key_order_set___last_item_of[] = {
  3, // locals
  1, // parameters
  LOCAL(3), // 218_41_self
  // contents_of(self))
  var_contents_of, 1, LOCAL(3), 1, LOCAL(1),
  // last_item_of(contents_of(self))
  var_last_item_of, 1, LOCAL(1), 1, LOCAL(2),
  // -> last_item_of(contents_of(self))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(219, 19),
  POS(219, 6),
  POS(219, 3)
};

static TAB_NUM t_func_finish___for_each_1_call[] = {
  1, // locals
  1, // parameters
  LOCAL(1),
  // break!
  var_break, 0, IO_TAIL_CALL,
  POS(230, 34)
};

static TAB_NUM t_func_empty_node___for_each_1_left[] = {
  1, // locals
  1, // parameters
  LOCAL(1),
  // basic_loops::todo(-1) # peek
  var_basic_loops__todo, 1, minus_num_1, 1, LOCAL(1),
  // for_each_1_call! basic_loops::todo(-1) # peek
  var_for_each_1_call, 1, LOCAL(1), IO_TAIL_CALL,
  POS(233, 20),
  POS(233, 3)
};

static TAB_NUM t_func_binary_node___for_each_1_left[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 235_31_self
  // self $_my_key $my_left $_my_right
  LOCAL(2), 0, 3, LOCAL(1), LOCAL(3), LOCAL(1),
  // push &basic_loops::todo self
  var_push, 2, var_basic_loops__todo, LOCAL(2), 1, var_basic_loops__todo,
  // for_each_1_left! my_left
  var_for_each_1_left, 1, LOCAL(3), IO_TAIL_CALL,
  POS(236, 3),
  POS(237, 3),
  POS(238, 3)
};

static TAB_NUM t_func_binary_node___for_each_1_call[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 240_31_self
  // self $my_key $_my_left $_my_right
  LOCAL(2), 0, 3, LOCAL(3), LOCAL(1), LOCAL(1),
  // basic_loops::body! my_key
  var_basic_loops__body, 1, LOCAL(3), IO_TAIL_CALL,
  POS(241, 3),
  POS(242, 3)
};

static TAB_NUM t_func_binary_node___for_each_1_right[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 244_32_self
  // self $_my_key $_my_left $my_right
  LOCAL(2), 0, 3, LOCAL(1), LOCAL(1), LOCAL(3),
  // for_each_1_left! my_right
  var_for_each_1_left, 1, LOCAL(3), IO_TAIL_CALL,
  POS(245, 3),
  POS(246, 3)
};

static TAB_NUM t_func_std_types__key_order_set___for_each[] = {
  4, // locals
  -3, // parameters
  MANDATORY_PARAMETER, LOCAL(2), // 277_0_self
  MANDATORY_PARAMETER, LOCAL(3), // 278_0_body
  var_next, var_279_0_finally,
  // $saved_context
  var_tuple, 5, var_next, var_break, var_basic_loops__body, var_basic_loops__finally, var_basic_loops__todo, 1, LOCAL(4),
  // !basic_loops::body body
  LET, 1, LOCAL(3), 1, var_basic_loops__body,
  // !basic_loops::finally finally
  LET, 1, var_279_0_finally, 1, var_basic_loops__finally,
  // !basic_loops::todo list(finish)
  var_list, 1, var_finish, 1, var_basic_loops__todo,
  // new !break basic_types::break_function: (myself^)
  var_new, 2, var_basic_types__break_function, lambda_38, IO_CALL(1), var_break,
  // break.basic_loops::saved_context_of saved_context
  LET, -1, var_break, var_basic_loops__saved_context_of, LOCAL(4), var_break,
  // !next:
  LET, 1, lambda_next, 1, var_next,
  // contents_of(self)
  var_contents_of, 1, LOCAL(2), 1, LOCAL(1),
  // for_each_1_left! contents_of(self)
  var_for_each_1_left, 1, LOCAL(1), IO_TAIL_CALL,
  POS(281, 3),
  POS(289, 3),
  POS(290, 3),
  POS(291, 3),
  POS(293, 3),
  POS(300, 4),
  POS(302, 3),
  POS(306, 20),
  POS(306, 3)
};

static TAB_NUM t_lambda_38[] = {
  2, // locals
  -1, // parameters
  MYSELF_PARAMETER, LOCAL(2), // 293_41_myself
  // !finally basic_loops::finally
  LET, 1, var_basic_loops__finally, 1, var_279_0_finally,
  // basic_loops::saved_context_of(myself)
  var_basic_loops__saved_context_of, 1, LOCAL(2), 1, LOCAL(1),
  // basic_loops::saved_context_of(myself)
  LOCAL(1), 0, 5, var_next, var_break, var_basic_loops__body, var_basic_loops__finally, var_basic_loops__todo,
  // finally!
  var_279_0_finally, 0, IO_TAIL_CALL,
  POS(294, 5),
  POS(295, 5),
  POS(295, 5),
  POS(298, 5)
};

static TAB_NUM t_lambda_next[] = {
  1, // locals
  0, // parameters
  // pop &basic_loops::todo $node
  var_pop, 1, var_basic_loops__todo, 2, var_basic_loops__todo, LOCAL(1),
  // for_each_1_right! node
  var_for_each_1_right, 1, LOCAL(1), IO_TAIL_CALL,
  POS(303, 5),
  POS(304, 5)
};

static TAB_NUM t_func_std_types__key_order_set___reduce[] = {
  1, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_313_0_self,
  MANDATORY_PARAMETER, var_314_0_reduce_function,
  var_undefined, var_315_0_unit,
  // is_empty
  var_is_empty, 1, var_313_0_self, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_39, lambda_40, TAIL_CALL,
  POS(318, 10),
  POS(317, 3)
};

static TAB_NUM t_lambda_39[] = {
  0, // locals
  0, // parameters
  //  unit
  LET, 1, var_315_0_unit, TAIL_CALL,
  POS(319, 7)
};

static TAB_NUM t_lambda_40[] = {
  2, // locals
  0, // parameters
  // contents_of(self))
  var_contents_of, 1, var_313_0_self, 1, LOCAL(1),
  // reduce(contents_of(self))
  func_reduce, 1, LOCAL(1), 1, LOCAL(2),
  // -> reduce(contents_of(self))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(333, 17),
  POS(333, 10),
  POS(333, 7)
};

static TAB_NUM t_func_reduce[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 321_10_node
  // node $key $left $right
  LOCAL(2), 0, 3, var_322_6_key, var_322_11_left, var_322_17_right,
  // is_an_empty_node
  var_is_an_empty_node, 1, var_322_11_left, 1, LOCAL(1),
  // !key
  var_if, 3, LOCAL(1), lambda_41, lambda_42, 1, var_322_6_key,
  // is_an_empty_node
  var_is_an_empty_node, 1, var_322_17_right, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_43, lambda_44, TAIL_CALL,
  POS(322, 9),
  POS(325, 18),
  POS(323, 9),
  POS(329, 17),
  POS(328, 9)
};

static TAB_NUM t_lambda_41[] = {
  0, // locals
  0, // parameters
  //  key
  LET, 1, var_322_6_key, TAIL_CALL,
  POS(326, 15)
};

static TAB_NUM t_lambda_42[] = {
  2, // locals
  0, // parameters
  // reduce(left) key)
  func_reduce, 1, var_322_11_left, 1, LOCAL(1),
  // reduce_function(reduce(left) key)
  var_314_0_reduce_function, 2, LOCAL(1), var_322_6_key, 1, LOCAL(2),
  //  reduce_function(reduce(left) key)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(327, 32),
  POS(327, 16),
  POS(327, 15)
};

static TAB_NUM t_lambda_43[] = {
  0, // locals
  0, // parameters
  //  key
  LET, 1, var_322_6_key, TAIL_CALL,
  POS(330, 13)
};

static TAB_NUM t_lambda_44[] = {
  2, // locals
  0, // parameters
  // reduce(right))
  func_reduce, 1, var_322_17_right, 1, LOCAL(1),
  // reduce_function(key reduce(right))
  var_314_0_reduce_function, 2, var_322_6_key, LOCAL(1), 1, LOCAL(2),
  //  reduce_function(key reduce(right))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(331, 34),
  POS(331, 14),
  POS(331, 13)
};

static TAB_NUM t_func_std_types__key_order_set___map_reduce[] = {
  1, // locals
  -4, // parameters
  MANDATORY_PARAMETER, var_339_0_self,
  MANDATORY_PARAMETER, var_340_0_map_function,
  var_append, var_341_0_reduce_function,
  var_undefined, var_342_0_unit,
  // is_empty
  var_is_empty, 1, var_339_0_self, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_45, lambda_46, TAIL_CALL,
  POS(345, 10),
  POS(344, 3)
};

static TAB_NUM t_lambda_45[] = {
  0, // locals
  0, // parameters
  //  unit
  LET, 1, var_342_0_unit, TAIL_CALL,
  POS(346, 7)
};

static TAB_NUM t_lambda_46[] = {
  2, // locals
  0, // parameters
  // contents_of(self))
  var_contents_of, 1, var_339_0_self, 1, LOCAL(1),
  // map_reduce(contents_of(self))
  func_map_reduce, 1, LOCAL(1), 1, LOCAL(2),
  // -> map_reduce(contents_of(self))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(360, 21),
  POS(360, 10),
  POS(360, 7)
};

static TAB_NUM t_func_map_reduce[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 348_14_node
  // node $key $left $right
  LOCAL(2), 0, 3, var_349_6_key, var_349_11_left, var_349_17_right,
  // map_function &key
  var_340_0_map_function, 1, var_349_6_key, 1, var_349_6_key,
  // is_an_empty_node
  var_is_an_empty_node, 1, var_349_11_left, 1, LOCAL(1),
  // if !key
  var_if, 3, LOCAL(1), lambda_47, lambda_48, 1, var_349_6_key,
  // is_an_empty_node
  var_is_an_empty_node, 1, var_349_17_right, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_49, lambda_50, TAIL_CALL,
  POS(349, 9),
  POS(350, 9),
  POS(352, 16),
  POS(351, 9),
  POS(356, 17),
  POS(355, 9)
};

static TAB_NUM t_lambda_47[] = {
  0, // locals
  0, // parameters
  //  key
  LET, 1, var_349_6_key, TAIL_CALL,
  POS(353, 13)
};

static TAB_NUM t_lambda_48[] = {
  2, // locals
  0, // parameters
  // map_reduce(left) key)
  func_map_reduce, 1, var_349_11_left, 1, LOCAL(1),
  // reduce_function(map_reduce(left) key)
  var_341_0_reduce_function, 2, LOCAL(1), var_349_6_key, 1, LOCAL(2),
  //  reduce_function(map_reduce(left) key)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(354, 30),
  POS(354, 14),
  POS(354, 13)
};

static TAB_NUM t_lambda_49[] = {
  0, // locals
  0, // parameters
  //  key
  LET, 1, var_349_6_key, TAIL_CALL,
  POS(357, 13)
};

static TAB_NUM t_lambda_50[] = {
  2, // locals
  0, // parameters
  // map_reduce(right))
  func_map_reduce, 1, var_349_17_right, 1, LOCAL(1),
  // reduce_function(key map_reduce(right))
  var_341_0_reduce_function, 2, var_349_6_key, LOCAL(1), 1, LOCAL(2),
  //  reduce_function(key map_reduce(right))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(358, 34),
  POS(358, 14),
  POS(358, 13)
};

static TAB_NUM t_func_std__key_order_set[] = {
  1, // locals
  -1, // parameters
  REST_PARAMETER, LOCAL(1), // 362_22_keys
  // $result empty_key_order_set
  LET, 1, var_empty_key_order_set, 1, var_363_1_result,
  // for_each keys
  var_for_each, 3, LOCAL(1), lambda_51, lambda_52, TAIL_CALL,
  POS(363, 3),
  POS(364, 3)
};

static TAB_NUM t_lambda_51[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 365_3_key
  // result(key) true
  var_363_1_result, 2, LOCAL(1), var_true, 1, var_363_1_result,
  // next
  var_next, 0, TAIL_CALL,
  POS(366, 8),
  POS(367, 7)
};

static TAB_NUM t_lambda_52[] = {
  0, // locals
  0, // parameters
  //  result
  LET, 1, var_363_1_result, TAIL_CALL,
  POS(368, 7)
};

static TAB_NUM t_module_entry[] = {
  0, // locals
  0, // parameters
  // register_type &deserializers std_types::key_order_set
  var_register_type, 2, var_deserializers, var_std_types__key_order_set, 1, var_deserializers,
  LET, 1, 0, TAIL_CALL,
  POS(373, 1)
};

static int tuple_71_0_arguments[] = {
  -var_undefined, -var_undefined, -var_undefined
};

static FUNKY_CONSTANT constants_table[] = {
  {FLT_POSITIVE_INT64, 0, {.value = 0}},
  {FLT_TUPLE, 3, {.arguments = tuple_71_0_arguments}},
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
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_38}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_next}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__key_order_set___reduce}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_39}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_40}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_reduce}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_41}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_42}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_43}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_44}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__key_order_set___map_reduce}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_45}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_46}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_map_reduce}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_47}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_48}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_49}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_50}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__key_order_set}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_51}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_52}},
  {FLT_STRING_8, 13, {.str_8 = "key_order_set"}},
  {FLT_FUNCTION, 0, {.tfunc = t_module_entry}}
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
    FOT_DERIVED, 0, 11,
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
    FOT_DERIVED, 0, 5,
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
    FOT_INITIALIZED, 0, 8,
    "binary_node\000", binary_node__attributes,
    {.const_idx = -tuple_71_0}
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
    "78_0_myself\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "79_0_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "80_0_value\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "82_1_contents\000", NULL
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
    "112_29_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "113_6_my_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "113_14_my_left\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "113_23_my_right\000", NULL
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
    "129_22_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "129_27_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "130_6_my_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "130_14_my_left\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "130_23_my_right\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "153_15_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "154_6_my_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "154_14_my_left\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "154_23_my_right\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "164_22_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "164_27_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "165_6_my_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "165_14_my_left\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "165_23_my_right\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "first_item_of\000", NULL,
    {.position = POS(198, 14)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "199_6_my_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "199_14_my_left\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "last_item_of\000", NULL,
    {.position = POS(211, 14)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "212_6_my_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "212_24_my_right\000", NULL
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
    {.position = POS(230, 34)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "todo\000basic_loops", NULL,
    {.position = POS(233, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "push\000", NULL,
    {.position = POS(237, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "body\000basic_loops", NULL,
    {.position = POS(242, 3)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "for_each\000", NULL,
    {.position = POS(248, 27)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "279_0_finally\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "next\000", NULL,
    {.position = POS(279, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "finally\000basic_loops", NULL,
    {.position = POS(286, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "list\000", NULL,
    {.position = POS(291, 22)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "break_function\000basic_types", NULL,
    {.position = POS(293, 14)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "saved_context_of\000basic_loops", NULL,
    {.position = POS(295, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "new\000", NULL,
    {.position = POS(293, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "pop\000", NULL,
    {.position = POS(303, 5)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "reduce\000", NULL,
    {.position = POS(309, 27)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "313_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "314_0_reduce_function\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "315_0_unit\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_empty\000", NULL,
    {.position = POS(318, 10)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "322_6_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "322_11_left\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "322_17_right\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "map_reduce\000", NULL,
    {.position = POS(335, 27)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "339_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "340_0_map_function\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "341_0_reduce_function\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "append\000", NULL,
    {.position = POS(341, 23)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "342_0_unit\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "349_6_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "349_11_left\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "349_17_right\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "key_order_set\000std", NULL,
    {.const_idx = -func_std__key_order_set}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "363_1_result\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_key_order_set\000", NULL,
    {.position = POS(363, 11)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "serialization_tag_of\000", NULL,
    {.position = POS(370, 27)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "empty_collection_of\000", NULL,
    {.position = POS(371, 27)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "deserializers\000", NULL,
    {.position = POS(373, 16)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "register_type\000", NULL,
    {.position = POS(373, 1)}
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
  .feature_flags = FEAT_POSITIONS|FEAT_INITIALIZER,
  .marker = 0,
  0, // number of required modules
  0, // number of defined namespaces
  1, // number of used namespaces
  84, // number of constants
  94, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  constants_table,
  variables_table,
};
