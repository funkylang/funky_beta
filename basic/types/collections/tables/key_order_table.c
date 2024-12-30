#include <stddef.h>
#include <stdint.h>

#include "runtime/common.h"
#include "runtime/builtins.h"
#include "runtime/fko.h"
#include "runtime/memory.h"

enum {
  num_0 = -1,
  tuple_73_1 = -2,
  uni_NONE = -3,
  func_std_types__key_order_table = -4,
  lambda_1 = -5,
  lambda_2 = -6,
  lambda_value_is_defined = -7,
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
  func_fetch_first = -26,
  lambda_16 = -27,
  lambda_17 = -28,
  func_empty_node___delete = -29,
  func_binary_node___delete = -30,
  lambda_18 = -31,
  lambda_19 = -32,
  lambda_20 = -33,
  lambda_21 = -34,
  lambda_22 = -35,
  lambda_23 = -36,
  lambda_24 = -37,
  lambda_25 = -38,
  lambda_26 = -39,
  lambda_27 = -40,
  lambda_28 = -41,
  lambda_29 = -42,
  func_finish___for_each_1_call = -43,
  func_finish___for_each_2_call = -44,
  func_empty_node___for_each_1_left = -45,
  minus_num_1 = -46,
  func_empty_node___for_each_2_left = -47,
  func_binary_node___for_each_1_left = -48,
  func_binary_node___for_each_2_left = -49,
  func_binary_node___for_each_1_call = -50,
  func_binary_node___for_each_2_call = -51,
  func_binary_node___for_each_1_right = -52,
  func_binary_node___for_each_2_right = -53,
  func_std_types__key_order_table___for_each = -54,
  lambda_30 = -55,
  num_2 = -56,
  lambda_31 = -57,
  lambda_next = -58,
  lambda_32 = -59,
  lambda_2_next = -60,
  func_empty_node___map_1 = -61,
  func_empty_node___map_2 = -62,
  func_binary_node___map_1 = -63,
  func_binary_node___map_2 = -64,
  func_std_types__key_order_table___map = -65,
  lambda_33 = -66,
  lambda_34 = -67,
  func_std_types__key_order_table___reduce = -68,
  lambda_35 = -69,
  lambda_36 = -70,
  func_reduce = -71,
  lambda_37 = -72,
  func_check_right = -73,
  lambda_38 = -74,
  lambda_39 = -75,
  func_std_types__key_order_table___map_reduce = -76,
  lambda_40 = -77,
  lambda_41 = -78,
  lambda_42 = -79,
  lambda_43 = -80,
  func_map_reduce_1 = -81,
  lambda_44 = -82,
  func_2_check_right = -83,
  lambda_45 = -84,
  lambda_46 = -85,
  func_map_reduce_2 = -86,
  lambda_47 = -87,
  func_3_check_right = -88,
  lambda_48 = -89,
  lambda_49 = -90,
  func_empty_node___merge = -91,
  func_binary_node___merge = -92,
  lambda_50 = -93,
  lambda_51 = -94,
  lambda_loop = -95,
  lambda_52 = -96,
  lambda_update_removed = -97,
  lambda_53 = -98,
  lambda_54 = -99,
  lambda_2_update_removed = -100,
  lambda_55 = -101,
  func_update_removed = -102,
  lambda_56 = -103,
  lambda_57 = -104,
  func_std_types__key_order_table___merge = -105,
  func_std__key_order_table = -106,
  lambda_58 = -107,
  lambda_59 = -108,
  str_key_order_table = -109
};

enum {
  var__START = FIRST_VAR-1,
  var_contents_of, // attribute
  var_std__assign, // extern
  var_retrieve, // attribute
  var_insert, // attribute
  var_delete, // attribute
  var_std__is_a_key_order_table, // attribute
  var_std_types__object, // extern
  var_is_a_key_order_table, // extern polymorphic
  var_false, // extern
  var_std_types__key_order_table, // derived
  var_true, // extern
  var_std_types__table, // extern
  var_empty_node, // derived
  var_length_of, // extern polymorphic
  var_std__empty_key_order_table, // derived
  var_is_an_empty_node, // attribute
  var_binary_node, // initialized compound
  var_undefined, // extern
  var_tuple, // extern
  var_80_5_myself, // dynamic
  var_81_5_key, // dynamic
  var_82_5_value, // dynamic
  var_84_4_contents, // dynamic
  var_std__equal, // extern
  var_is_defined, // extern
  var_std__plus, // extern
  var_if, // extern
  var_std__minus, // extern
  var_114_30_key, // dynamic
  var_115_9_my_key, // dynamic
  var_115_17_my_value, // dynamic
  var_115_27_my_left, // dynamic
  var_115_36_my_right, // dynamic
  var_std__less, // extern
  var_typed_tuple, // extern
  var_131_23_self, // dynamic
  var_131_28_key, // dynamic
  var_131_32_value, // dynamic
  var_132_9_my_key, // dynamic
  var_132_17_my_value, // dynamic
  var_132_27_my_left, // dynamic
  var_132_36_my_right, // dynamic
  var_149_16_self, // dynamic
  var_150_9_my_key, // dynamic
  var_150_17_my_value, // dynamic
  var_150_27_my_left, // dynamic
  var_150_36_my_right, // dynamic
  var_160_23_self, // dynamic
  var_160_28_key, // dynamic
  var_161_9_my_key, // dynamic
  var_161_17_my_value, // dynamic
  var_161_27_my_left, // dynamic
  var_161_36_my_right, // dynamic
  var_for_each_1_left, // attribute
  var_for_each_1_call, // attribute
  var_for_each_1_right, // attribute
  var_for_each_2_left, // attribute
  var_for_each_2_call, // attribute
  var_for_each_2_right, // attribute
  var_basic_loops__todo, // derived
  var_finish, // derived
  var_break, // extern
  var_push, // extern
  var_basic_loops__body, // extern
  var_for_each, // extern polymorphic
  var_272_5_self, // dynamic
  var_274_5_finally, // dynamic
  var_next, // extern
  var_basic_loops__finally, // extern
  var_list, // extern
  var_basic_types__break_function, // extern
  var_basic_loops__saved_context_of, // extern polymorphic
  var_new, // extern
  var_parameter_count_of, // extern
  var_pop, // extern
  var_map_1, // attribute
  var_map_2, // attribute
  var_mapping_function, // derived
  var_map, // extern polymorphic
  var_341_5_self, // dynamic
  var_reduce, // extern polymorphic
  var_369_5_function, // dynamic
  var_370_5_unit, // dynamic
  var_372_4_contents, // dynamic
  var_379_17_value, // dynamic
  var_379_24_left, // dynamic
  var_379_30_right, // dynamic
  var_map_reduce, // extern polymorphic
  var_407_5_map_function, // dynamic
  var_408_5_reduce_function, // dynamic
  var_append, // extern
  var_409_5_unit, // dynamic
  var_411_4_contents, // dynamic
  var_422_17_value, // dynamic
  var_422_24_left, // dynamic
  var_422_30_right, // dynamic
  var_438_16_value, // dynamic
  var_438_23_left, // dynamic
  var_438_29_right, // dynamic
  var_merge, // extern polymorphic
  var_507_22_left, // dynamic
  var_507_27_right, // dynamic
  var_514_13_left_key, // dynamic
  var_514_23_left_value, // dynamic
  var_514_35_left_left, // dynamic
  var_514_46_left_right, // dynamic
  var_515_14_right_key, // dynamic
  var_515_25_right_value, // dynamic
  var_515_38_right_left, // dynamic
  var_515_50_right_right, // dynamic
  var_516_8_total_removed, // dynamic
  var_517_8_removed, // dynamic
  var_518_8_did_insert, // dynamic
  var_loop, // extern
  var_542_25_cont, // dynamic
  var_plus, // extern
  var_std__key_order_table, // initialized
  var_578_4_table, // dynamic
  var_empty_key_order_table, // extern
  var_serialization_tag_of, // extern polymorphic
  var_empty_collection_of, // extern polymorphic
  var_deserializers, // extern
  var_register_type, // extern
  var__END
};


static TAB_NUM t_func_std_types__key_order_table[] = {
  1, // locals
  -3, // parameters
  MYSELF_PARAMETER, var_80_5_myself,
  MANDATORY_PARAMETER, var_81_5_key,
  uni_NONE, var_82_5_value,
  // $contents contents_of(myself)
  var_contents_of, 1, var_80_5_myself, 1, var_84_4_contents,
  // NONE == value
  var_std__equal, 2, uni_NONE, var_82_5_value, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1, lambda_2, TAIL_CALL,
  POS(84, 3),
  POS(86, 5),
  POS(85, 3)
};

static TAB_NUM t_lambda_1[] = {
  1, // locals
  0, // parameters
  // retrieve(contents key)
  var_retrieve, 2, var_84_4_contents, var_81_5_key, 1, LOCAL(1),
  //  retrieve(contents key)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(87, 8),
  POS(87, 7)
};

static TAB_NUM t_lambda_2[] = {
  1, // locals
  0, // parameters
  // is_defined:
  var_is_defined, 1, var_82_5_value, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_value_is_defined, lambda_5, TAIL_CALL,
  POS(90, 15),
  POS(89, 7)
};

static TAB_NUM t_lambda_value_is_defined[] = {
  1, // locals
  0, // parameters
  // insert &contents $success key value
  var_insert, 3, var_84_4_contents, var_81_5_key, var_82_5_value, 2, var_84_4_contents, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_3, lambda_4, TAIL_CALL,
  POS(91, 11),
  POS(92, 11)
};

static TAB_NUM t_lambda_3[] = {
  3, // locals
  0, // parameters
  // length_of(myself)+1
  var_length_of, 1, var_80_5_myself, 1, LOCAL(1),
  // length_of(myself)+1
  var_std__plus, 2, LOCAL(1), num_1, 1, LOCAL(2),
  // myself
  LET, -2, var_80_5_myself, var_contents_of, var_84_4_contents, var_length_of, LOCAL(2), LOCAL(3),
  // 
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(97, 28),
  POS(97, 28),
  POS(95, 15),
  POS(94, 15)
};

static TAB_NUM t_lambda_4[] = {
  1, // locals
  0, // parameters
  // .contents_of contents)
  LET, -1, var_80_5_myself, var_contents_of, var_84_4_contents, LOCAL(1),
  //  myself(.contents_of contents)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(98, 23),
  POS(98, 15)
};

static TAB_NUM t_lambda_5[] = {
  1, // locals
  0, // parameters
  // delete &contents $success key
  var_delete, 2, var_84_4_contents, var_81_5_key, 2, var_84_4_contents, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_6, lambda_7, TAIL_CALL,
  POS(100, 11),
  POS(101, 11)
};

static TAB_NUM t_lambda_6[] = {
  3, // locals
  0, // parameters
  // length_of(myself)-1
  var_length_of, 1, var_80_5_myself, 1, LOCAL(1),
  // length_of(myself)-1
  var_std__minus, 2, LOCAL(1), num_1, 1, LOCAL(2),
  // myself
  LET, -2, var_80_5_myself, var_contents_of, var_84_4_contents, var_length_of, LOCAL(2), LOCAL(3),
  // 
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(106, 28),
  POS(106, 28),
  POS(104, 15),
  POS(103, 15)
};

static TAB_NUM t_lambda_7[] = {
  0, // locals
  0, // parameters
  //  myself
  LET, 1, var_80_5_myself, TAIL_CALL,
  POS(107, 15)
};

static TAB_NUM t_func_empty_node___retrieve[] = {
  1, // locals
  2, // parameters
  LOCAL(1),
  LOCAL(1),
  // -> undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(112, 36)
};

static TAB_NUM t_func_binary_node___retrieve[] = {
  2, // locals
  2, // parameters
  LOCAL(2), // 114_25_self
  var_114_30_key,
  // self $my_key $my_value $my_left $my_right
  LOCAL(2), 0, 4, var_115_9_my_key, var_115_17_my_value, var_115_27_my_left, var_115_36_my_right,
  // key == my_key
  var_std__equal, 2, var_114_30_key, var_115_9_my_key, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_8, lambda_9, TAIL_CALL,
  POS(115, 3),
  POS(117, 5),
  POS(116, 3)
};

static TAB_NUM t_lambda_8[] = {
  0, // locals
  0, // parameters
  //  my_value
  LET, 1, var_115_17_my_value, TAIL_CALL,
  POS(118, 7)
};

static TAB_NUM t_lambda_9[] = {
  1, // locals
  0, // parameters
  // key < my_key
  var_std__less, 2, var_114_30_key, var_115_9_my_key, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_10, lambda_11, TAIL_CALL,
  POS(121, 9),
  POS(120, 7)
};

static TAB_NUM t_lambda_10[] = {
  0, // locals
  0, // parameters
  // retrieve my_left key
  var_retrieve, 2, var_115_27_my_left, var_114_30_key, TAIL_CALL,
  POS(122, 11)
};

static TAB_NUM t_lambda_11[] = {
  0, // locals
  0, // parameters
  // retrieve my_right key
  var_retrieve, 2, var_115_36_my_right, var_114_30_key, TAIL_CALL,
  POS(123, 11)
};

static TAB_NUM t_func_empty_node___insert[] = {
  3, // locals
  3, // parameters
  LOCAL(1),
  LOCAL(2), // 128_28_key
  LOCAL(3), // 128_32_value
  // typed_tuple(binary_node key value empty_node empty_node) true
  var_typed_tuple, 5, var_binary_node, LOCAL(2), LOCAL(3), var_empty_node, var_empty_node, 1, LOCAL(1),
  // -> typed_tuple(binary_node key value empty_node empty_node) true
  LET, 2, LOCAL(1), var_true, TAIL_CALL,
  POS(129, 6),
  POS(129, 3)
};

static TAB_NUM t_func_binary_node___insert[] = {
  1, // locals
  3, // parameters
  var_131_23_self,
  var_131_28_key,
  var_131_32_value,
  // self $my_key $my_value $my_left $my_right
  var_131_23_self, 0, 4, var_132_9_my_key, var_132_17_my_value, var_132_27_my_left, var_132_36_my_right,
  // key == my_key
  var_std__equal, 2, var_131_28_key, var_132_9_my_key, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_12, lambda_13, TAIL_CALL,
  POS(132, 3),
  POS(134, 5),
  POS(133, 3)
};

static TAB_NUM t_lambda_12[] = {
  1, // locals
  0, // parameters
  // typed_tuple(self key value my_left my_right) false
  var_typed_tuple, 5, var_131_23_self, var_131_28_key, var_131_32_value, var_132_27_my_left, var_132_36_my_right, 1, LOCAL(1),
  //  typed_tuple(self key value my_left my_right) false
  LET, 2, LOCAL(1), var_false, TAIL_CALL,
  POS(135, 8),
  POS(135, 7)
};

static TAB_NUM t_lambda_13[] = {
  1, // locals
  0, // parameters
  // key < my_key
  var_std__less, 2, var_131_28_key, var_132_9_my_key, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_14, lambda_15, TAIL_CALL,
  POS(138, 9),
  POS(137, 7)
};

static TAB_NUM t_lambda_14[] = {
  2, // locals
  0, // parameters
  // insert &my_left $did_insert key value
  var_insert, 3, var_132_27_my_left, var_131_28_key, var_131_32_value, 2, var_132_27_my_left, LOCAL(2),
  // typed_tuple(self my_key my_value my_left my_right) did_insert
  var_typed_tuple, 5, var_131_23_self, var_132_9_my_key, var_132_17_my_value, var_132_27_my_left, var_132_36_my_right, 1, LOCAL(1),
  // -> typed_tuple(self my_key my_value my_left my_right) did_insert
  LET, 2, LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(140, 11),
  POS(141, 14),
  POS(141, 11)
};

static TAB_NUM t_lambda_15[] = {
  2, // locals
  0, // parameters
  // insert &my_right $did_insert key value
  var_insert, 3, var_132_36_my_right, var_131_28_key, var_131_32_value, 2, var_132_36_my_right, LOCAL(2),
  // typed_tuple(self my_key my_value my_left my_right) did_insert
  var_typed_tuple, 5, var_131_23_self, var_132_9_my_key, var_132_17_my_value, var_132_27_my_left, var_132_36_my_right, 1, LOCAL(1),
  // -> typed_tuple(self my_key my_value my_left my_right) did_insert
  LET, 2, LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(143, 11),
  POS(144, 14),
  POS(144, 11)
};

static TAB_NUM t_func_fetch_first[] = {
  1, // locals
  1, // parameters
  var_149_16_self,
  // self $my_key $my_value $my_left $my_right
  var_149_16_self, 0, 4, var_150_9_my_key, var_150_17_my_value, var_150_27_my_left, var_150_36_my_right,
  // is_an_empty_node
  var_is_an_empty_node, 1, var_150_27_my_left, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_16, lambda_17, TAIL_CALL,
  POS(150, 3),
  POS(152, 13),
  POS(151, 3)
};

static TAB_NUM t_lambda_16[] = {
  0, // locals
  0, // parameters
  //  my_right my_key my_value
  LET, 3, var_150_36_my_right, var_150_9_my_key, var_150_17_my_value, TAIL_CALL,
  POS(153, 7)
};

static TAB_NUM t_lambda_17[] = {
  3, // locals
  0, // parameters
  // fetch_first &my_left $first_key $first_value
  func_fetch_first, 1, var_150_27_my_left, 3, var_150_27_my_left, LOCAL(2), LOCAL(3),
  // typed_tuple(self my_key my_value my_left my_right) first_key first_value
  var_typed_tuple, 5, var_149_16_self, var_150_9_my_key, var_150_17_my_value, var_150_27_my_left, var_150_36_my_right, 1, LOCAL(1),
  // -> typed_tuple(self my_key my_value my_left my_right) first_key first_value
  LET, 3, LOCAL(1), LOCAL(2), LOCAL(3), TAIL_CALL,
  POS(155, 7),
  POS(156, 10),
  POS(156, 7)
};

static TAB_NUM t_func_empty_node___delete[] = {
  2, // locals
  2, // parameters
  LOCAL(2), // 158_22_self
  LOCAL(1),
  // -> self false
  LET, 2, LOCAL(2), var_false, TAIL_CALL,
  POS(158, 33)
};

static TAB_NUM t_func_binary_node___delete[] = {
  1, // locals
  2, // parameters
  var_160_23_self,
  var_160_28_key,
  // self $my_key $my_value $my_left $my_right
  var_160_23_self, 0, 4, var_161_9_my_key, var_161_17_my_value, var_161_27_my_left, var_161_36_my_right,
  // key == my_key
  var_std__equal, 2, var_160_28_key, var_161_9_my_key, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_18, lambda_23, TAIL_CALL,
  POS(161, 3),
  POS(163, 5),
  POS(162, 3)
};

static TAB_NUM t_lambda_18[] = {
  1, // locals
  0, // parameters
  // is_an_empty_node
  var_is_an_empty_node, 1, var_161_27_my_left, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_19, lambda_20, TAIL_CALL,
  POS(166, 17),
  POS(165, 7)
};

static TAB_NUM t_lambda_19[] = {
  0, // locals
  0, // parameters
  //  my_right true
  LET, 2, var_161_36_my_right, var_true, TAIL_CALL,
  POS(167, 11)
};

static TAB_NUM t_lambda_20[] = {
  1, // locals
  0, // parameters
  // is_an_empty_node
  var_is_an_empty_node, 1, var_161_36_my_right, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_21, lambda_22, TAIL_CALL,
  POS(170, 22),
  POS(169, 11)
};

static TAB_NUM t_lambda_21[] = {
  0, // locals
  0, // parameters
  //  my_left true
  LET, 2, var_161_27_my_left, var_true, TAIL_CALL,
  POS(171, 15)
};

static TAB_NUM t_lambda_22[] = {
  3, // locals
  0, // parameters
  // fetch_first &my_right $first_key $first_value
  func_fetch_first, 1, var_161_36_my_right, 3, var_161_36_my_right, LOCAL(2), LOCAL(3),
  // typed_tuple(self first_key first_value my_left my_right)
  var_typed_tuple, 5, var_160_23_self, LOCAL(2), LOCAL(3), var_161_27_my_left, var_161_36_my_right, 1, LOCAL(1),
  // -> typed_tuple(self first_key first_value my_left my_right)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(173, 15),
  POS(174, 18),
  POS(174, 15)
};

static TAB_NUM t_lambda_23[] = {
  1, // locals
  0, // parameters
  // key < my_key
  var_std__less, 2, var_160_28_key, var_161_9_my_key, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_24, lambda_27, TAIL_CALL,
  POS(177, 9),
  POS(176, 7)
};

static TAB_NUM t_lambda_24[] = {
  1, // locals
  0, // parameters
  // delete &my_left $success key
  var_delete, 2, var_161_27_my_left, var_160_28_key, 2, var_161_27_my_left, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_25, lambda_26, TAIL_CALL,
  POS(179, 11),
  POS(180, 11)
};

static TAB_NUM t_lambda_25[] = {
  1, // locals
  0, // parameters
  // typed_tuple(self my_key my_value my_left my_right) true
  var_typed_tuple, 5, var_160_23_self, var_161_9_my_key, var_161_17_my_value, var_161_27_my_left, var_161_36_my_right, 1, LOCAL(1),
  //  typed_tuple(self my_key my_value my_left my_right) true
  LET, 2, LOCAL(1), var_true, TAIL_CALL,
  POS(182, 16),
  POS(182, 15)
};

static TAB_NUM t_lambda_26[] = {
  0, // locals
  0, // parameters
  //  self false
  LET, 2, var_160_23_self, var_false, TAIL_CALL,
  POS(183, 15)
};

static TAB_NUM t_lambda_27[] = {
  1, // locals
  0, // parameters
  // delete &my_right $success key
  var_delete, 2, var_161_36_my_right, var_160_28_key, 2, var_161_36_my_right, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_28, lambda_29, TAIL_CALL,
  POS(185, 11),
  POS(186, 11)
};

static TAB_NUM t_lambda_28[] = {
  1, // locals
  0, // parameters
  // typed_tuple(self my_key my_value my_left my_right) true
  var_typed_tuple, 5, var_160_23_self, var_161_9_my_key, var_161_17_my_value, var_161_27_my_left, var_161_36_my_right, 1, LOCAL(1),
  //  typed_tuple(self my_key my_value my_left my_right) true
  LET, 2, LOCAL(1), var_true, TAIL_CALL,
  POS(188, 16),
  POS(188, 15)
};

static TAB_NUM t_lambda_29[] = {
  0, // locals
  0, // parameters
  //  self false
  LET, 2, var_160_23_self, var_false, TAIL_CALL,
  POS(189, 15)
};

static TAB_NUM t_func_finish___for_each_1_call[] = {
  1, // locals
  1, // parameters
  LOCAL(1),
  // break!
  var_break, 0, IO_TAIL_CALL,
  POS(205, 34)
};

static TAB_NUM t_func_finish___for_each_2_call[] = {
  1, // locals
  1, // parameters
  LOCAL(1),
  // break!
  var_break, 0, IO_TAIL_CALL,
  POS(206, 34)
};

static TAB_NUM t_func_empty_node___for_each_1_left[] = {
  1, // locals
  1, // parameters
  LOCAL(1),
  // basic_loops::todo(-1) # peek
  var_basic_loops__todo, 1, minus_num_1, 1, LOCAL(1),
  // for_each_1_call! basic_loops::todo(-1) # peek
  var_for_each_1_call, 1, LOCAL(1), IO_TAIL_CALL,
  POS(209, 20),
  POS(209, 3)
};

static TAB_NUM t_func_empty_node___for_each_2_left[] = {
  1, // locals
  1, // parameters
  LOCAL(1),
  // basic_loops::todo(-1) # peek
  var_basic_loops__todo, 1, minus_num_1, 1, LOCAL(1),
  // for_each_2_call! basic_loops::todo(-1) # peek
  var_for_each_2_call, 1, LOCAL(1), IO_TAIL_CALL,
  POS(212, 20),
  POS(212, 3)
};

static TAB_NUM t_func_binary_node___for_each_1_left[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 214_32_self
  // self $_my_key $_my_value $my_left $_my_right
  LOCAL(2), 0, 4, LOCAL(1), LOCAL(1), LOCAL(3), LOCAL(1),
  // push &basic_loops::todo self
  var_push, 2, var_basic_loops__todo, LOCAL(2), 1, var_basic_loops__todo,
  // for_each_1_left! my_left
  var_for_each_1_left, 1, LOCAL(3), IO_TAIL_CALL,
  POS(215, 3),
  POS(216, 3),
  POS(217, 3)
};

static TAB_NUM t_func_binary_node___for_each_2_left[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 219_32_self
  // self $_my_key $_my_value $my_left $_my_right
  LOCAL(2), 0, 4, LOCAL(1), LOCAL(1), LOCAL(3), LOCAL(1),
  // push &basic_loops::todo self
  var_push, 2, var_basic_loops__todo, LOCAL(2), 1, var_basic_loops__todo,
  // for_each_2_left! my_left
  var_for_each_2_left, 1, LOCAL(3), IO_TAIL_CALL,
  POS(220, 3),
  POS(221, 3),
  POS(222, 3)
};

static TAB_NUM t_func_binary_node___for_each_1_call[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 224_32_self
  // self $_my_key $my_value $_my_left $_my_right
  LOCAL(2), 0, 4, LOCAL(1), LOCAL(3), LOCAL(1), LOCAL(1),
  // basic_loops::body! my_value
  var_basic_loops__body, 1, LOCAL(3), IO_TAIL_CALL,
  POS(225, 3),
  POS(226, 3)
};

static TAB_NUM t_func_binary_node___for_each_2_call[] = {
  4, // locals
  1, // parameters
  LOCAL(2), // 228_32_self
  // self $my_key $my_value $_my_left $_my_right
  LOCAL(2), 0, 4, LOCAL(3), LOCAL(4), LOCAL(1), LOCAL(1),
  // basic_loops::body! my_key my_value
  var_basic_loops__body, 2, LOCAL(3), LOCAL(4), IO_TAIL_CALL,
  POS(229, 3),
  POS(230, 3)
};

static TAB_NUM t_func_binary_node___for_each_1_right[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 232_33_self
  // self $_my_key $_my_value $_my_left $my_right
  LOCAL(2), 0, 4, LOCAL(1), LOCAL(1), LOCAL(1), LOCAL(3),
  // for_each_1_left! my_right
  var_for_each_1_left, 1, LOCAL(3), IO_TAIL_CALL,
  POS(233, 3),
  POS(234, 3)
};

static TAB_NUM t_func_binary_node___for_each_2_right[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 236_33_self
  // self $_my_key $_my_value $_my_left $my_right
  LOCAL(2), 0, 4, LOCAL(1), LOCAL(1), LOCAL(1), LOCAL(3),
  // for_each_2_left! my_right
  var_for_each_2_left, 1, LOCAL(3), IO_TAIL_CALL,
  POS(237, 3),
  POS(238, 3)
};

static TAB_NUM t_func_std_types__key_order_table___for_each[] = {
  4, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_272_5_self,
  MANDATORY_PARAMETER, LOCAL(3), // 273_5_body
  var_next, var_274_5_finally,
  // $saved_context
  var_tuple, 5, var_next, var_break, var_basic_loops__todo, var_basic_loops__body, var_basic_loops__finally, 1, LOCAL(4),
  // !basic_loops::todo list(finish)
  var_list, 1, var_finish, 1, var_basic_loops__todo,
  // !basic_loops::body body
  LET, 1, LOCAL(3), 1, var_basic_loops__body,
  // !basic_loops::finally finally
  LET, 1, var_274_5_finally, 1, var_basic_loops__finally,
  // new !break basic_types::break_function: (myself^)
  var_new, 2, var_basic_types__break_function, lambda_30, IO_CALL(1), var_break,
  // break.basic_loops::saved_context_of saved_context
  LET, -1, var_break, var_basic_loops__saved_context_of, LOCAL(4), var_break,
  // parameter_count_of(body) == 2:
  var_parameter_count_of, 1, LOCAL(3), 1, LOCAL(1),
  // parameter_count_of(body) == 2:
  var_std__equal, 2, LOCAL(1), num_2, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_31, lambda_32, IO_TAIL_CALL,
  POS(276, 3),
  POS(284, 3),
  POS(285, 3),
  POS(286, 3),
  POS(288, 3),
  POS(295, 4),
  POS(298, 5),
  POS(298, 5),
  POS(297, 3)
};

static TAB_NUM t_lambda_30[] = {
  2, // locals
  -1, // parameters
  MYSELF_PARAMETER, LOCAL(2), // 288_44_myself
  // !finally basic_loops::finally
  LET, 1, var_basic_loops__finally, 1, var_274_5_finally,
  // basic_loops::saved_context_of(myself)
  var_basic_loops__saved_context_of, 1, LOCAL(2), 1, LOCAL(1),
  // basic_loops::saved_context_of(myself)
  LOCAL(1), 0, 5, var_next, var_break, var_basic_loops__todo, var_basic_loops__body, var_basic_loops__finally,
  // finally!
  var_274_5_finally, 0, IO_TAIL_CALL,
  POS(289, 5),
  POS(290, 5),
  POS(290, 5),
  POS(293, 5)
};

static TAB_NUM t_lambda_31[] = {
  1, // locals
  0, // parameters
  // !next:
  LET, 1, lambda_next, 1, var_next,
  // contents_of(self)
  var_contents_of, 1, var_272_5_self, 1, LOCAL(1),
  // for_each_2_left! contents_of(self)
  var_for_each_2_left, 1, LOCAL(1), IO_TAIL_CALL,
  POS(299, 7),
  POS(303, 24),
  POS(303, 7)
};

static TAB_NUM t_lambda_next[] = {
  1, // locals
  0, // parameters
  // pop &basic_loops::todo $node
  var_pop, 1, var_basic_loops__todo, 2, var_basic_loops__todo, LOCAL(1),
  // for_each_2_right! node
  var_for_each_2_right, 1, LOCAL(1), IO_TAIL_CALL,
  POS(300, 9),
  POS(301, 9)
};

static TAB_NUM t_lambda_32[] = {
  1, // locals
  0, // parameters
  // !next:
  LET, 1, lambda_2_next, 1, var_next,
  // contents_of(self)
  var_contents_of, 1, var_272_5_self, 1, LOCAL(1),
  // for_each_1_left! contents_of(self)
  var_for_each_1_left, 1, LOCAL(1), IO_TAIL_CALL,
  POS(305, 7),
  POS(309, 24),
  POS(309, 7)
};

static TAB_NUM t_lambda_2_next[] = {
  1, // locals
  0, // parameters
  // pop &basic_loops::todo $node
  var_pop, 1, var_basic_loops__todo, 2, var_basic_loops__todo, LOCAL(1),
  // for_each_1_right! node
  var_for_each_1_right, 1, LOCAL(1), IO_TAIL_CALL,
  POS(306, 9),
  POS(307, 9)
};

static TAB_NUM t_func_empty_node___map_1[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 319_21_self
  // -> self
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(319, 27)
};

static TAB_NUM t_func_empty_node___map_2[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 321_21_self
  // -> self
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(321, 27)
};

static TAB_NUM t_func_binary_node___map_1[] = {
  8, // locals
  1, // parameters
  LOCAL(4), // 323_22_self
  // self $my_key $my_value $my_left $my_right
  LOCAL(4), 0, 4, LOCAL(5), LOCAL(6), LOCAL(7), LOCAL(8),
  // mapping_function(my_value) map_1(my_left) map_1(my_right)
  var_mapping_function, 1, LOCAL(6), 1, LOCAL(1),
  // map_1(my_left) map_1(my_right)
  var_map_1, 1, LOCAL(7), 1, LOCAL(2),
  // map_1(my_right)
  var_map_1, 1, LOCAL(8), 1, LOCAL(3),
  // typed_tuple self my_key mapping_function(my_value) map_1(my_left) map_1(my_right)
  var_typed_tuple, 5, LOCAL(4), LOCAL(5), LOCAL(1), LOCAL(2), LOCAL(3), TAIL_CALL,
  POS(324, 3),
  POS(325, 27),
  POS(325, 54),
  POS(325, 69),
  POS(325, 3)
};

static TAB_NUM t_func_binary_node___map_2[] = {
  8, // locals
  1, // parameters
  LOCAL(4), // 327_22_self
  // self $my_key $my_value $my_left $my_right
  LOCAL(4), 0, 4, LOCAL(5), LOCAL(6), LOCAL(7), LOCAL(8),
  // mapping_function(my_key my_value) map_2(my_left) map_2(my_right)
  var_mapping_function, 2, LOCAL(5), LOCAL(6), 1, LOCAL(1),
  // map_2(my_left) map_2(my_right)
  var_map_2, 1, LOCAL(7), 1, LOCAL(2),
  // map_2(my_right)
  var_map_2, 1, LOCAL(8), 1, LOCAL(3),
  // typed_tuple self my_key mapping_function(my_key my_value) map_2(my_left) map_2(my_right)
  var_typed_tuple, 5, LOCAL(4), LOCAL(5), LOCAL(1), LOCAL(2), LOCAL(3), TAIL_CALL,
  POS(328, 3),
  POS(329, 27),
  POS(329, 61),
  POS(329, 76),
  POS(329, 3)
};

static TAB_NUM t_func_std_types__key_order_table___map[] = {
  3, // locals
  2, // parameters
  var_341_5_self,
  LOCAL(3), // 342_5_function
  // !mapping_function function
  LET, 1, LOCAL(3), 1, var_mapping_function,
  // parameter_count_of(function) == 2:
  var_parameter_count_of, 1, LOCAL(3), 1, LOCAL(1),
  // parameter_count_of(function) == 2:
  var_std__equal, 2, LOCAL(1), num_2, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_33, lambda_34, TAIL_CALL,
  POS(344, 3),
  POS(346, 5),
  POS(346, 5),
  POS(345, 3)
};

static TAB_NUM t_lambda_33[] = {
  1, // locals
  0, // parameters
  // contents_of
  var_contents_of, 1, var_341_5_self, 1, LOCAL(1),
  // map_2 &self.contents_of
  var_map_2, 1, LOCAL(1), 1, LOCAL(1),
  // self.contents_of
  LET, -1, var_341_5_self, var_contents_of, LOCAL(1), var_341_5_self,
  // -> self
  LET, 1, var_341_5_self, TAIL_CALL,
  POS(347, 19),
  POS(347, 7),
  POS(347, 14),
  POS(348, 7)
};

static TAB_NUM t_lambda_34[] = {
  1, // locals
  0, // parameters
  // contents_of
  var_contents_of, 1, var_341_5_self, 1, LOCAL(1),
  // map_1 &self.contents_of
  var_map_1, 1, LOCAL(1), 1, LOCAL(1),
  // self.contents_of
  LET, -1, var_341_5_self, var_contents_of, LOCAL(1), var_341_5_self,
  // -> self
  LET, 1, var_341_5_self, TAIL_CALL,
  POS(350, 19),
  POS(350, 7),
  POS(350, 14),
  POS(351, 7)
};

static TAB_NUM t_func_std_types__key_order_table___reduce[] = {
  2, // locals
  -3, // parameters
  MANDATORY_PARAMETER, LOCAL(2), // 368_5_self
  MANDATORY_PARAMETER, var_369_5_function,
  var_undefined, var_370_5_unit,
  // $contents contents_of(self)
  var_contents_of, 1, LOCAL(2), 1, var_372_4_contents,
  // is_an_empty_node
  var_is_an_empty_node, 1, var_372_4_contents, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_35, lambda_36, TAIL_CALL,
  POS(372, 3),
  POS(374, 14),
  POS(373, 3)
};

static TAB_NUM t_lambda_35[] = {
  0, // locals
  0, // parameters
  //  unit
  LET, 1, var_370_5_unit, TAIL_CALL,
  POS(375, 7)
};

static TAB_NUM t_lambda_36[] = {
  1, // locals
  0, // parameters
  // reduce(contents)
  func_reduce, 1, var_372_4_contents, 1, LOCAL(1),
  //  reduce(contents)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(376, 8),
  POS(376, 7)
};

static TAB_NUM t_func_reduce[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 378_13_node
  // node $_key $value $left $right
  LOCAL(2), 0, 4, LOCAL(1), var_379_17_value, var_379_24_left, var_379_30_right,
  // is_an_empty_node
  var_is_an_empty_node, 1, var_379_24_left, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), func_check_right, lambda_37, TAIL_CALL,
  POS(379, 5),
  POS(381, 12),
  POS(380, 5)
};

static TAB_NUM t_lambda_37[] = {
  1, // locals
  0, // parameters
  // reduce(left) value)
  func_reduce, 1, var_379_24_left, 1, LOCAL(1),
  // !value function(reduce(left) value)
  var_369_5_function, 2, LOCAL(1), var_379_17_value, 1, var_379_17_value,
  // check_right
  func_check_right, 0, TAIL_CALL,
  POS(384, 25),
  POS(384, 9),
  POS(385, 9)
};

static TAB_NUM t_func_check_right[] = {
  1, // locals
  0, // parameters
  // is_an_empty_node
  var_is_an_empty_node, 1, var_379_30_right, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_38, lambda_39, TAIL_CALL,
  POS(389, 15),
  POS(388, 7)
};

static TAB_NUM t_lambda_38[] = {
  0, // locals
  0, // parameters
  //  value
  LET, 1, var_379_17_value, TAIL_CALL,
  POS(390, 11)
};

static TAB_NUM t_lambda_39[] = {
  2, // locals
  0, // parameters
  // reduce(right))
  func_reduce, 1, var_379_30_right, 1, LOCAL(1),
  // function(value reduce(right))
  var_369_5_function, 2, var_379_17_value, LOCAL(1), 1, LOCAL(2),
  //  function(value reduce(right))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(391, 27),
  POS(391, 12),
  POS(391, 11)
};

static TAB_NUM t_func_std_types__key_order_table___map_reduce[] = {
  2, // locals
  -4, // parameters
  MANDATORY_PARAMETER, LOCAL(2), // 406_5_self
  MANDATORY_PARAMETER, var_407_5_map_function,
  var_append, var_408_5_reduce_function,
  var_undefined, var_409_5_unit,
  // $contents contents_of(self)
  var_contents_of, 1, LOCAL(2), 1, var_411_4_contents,
  // is_an_empty_node
  var_is_an_empty_node, 1, var_411_4_contents, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_40, lambda_41, TAIL_CALL,
  POS(411, 3),
  POS(413, 14),
  POS(412, 3)
};

static TAB_NUM t_lambda_40[] = {
  0, // locals
  0, // parameters
  //  unit
  LET, 1, var_409_5_unit, TAIL_CALL,
  POS(414, 7)
};

static TAB_NUM t_lambda_41[] = {
  2, // locals
  0, // parameters
  // parameter_count_of(map_function) == 2
  var_parameter_count_of, 1, var_407_5_map_function, 1, LOCAL(1),
  // parameter_count_of(map_function) == 2
  var_std__equal, 2, LOCAL(1), num_2, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_42, lambda_43, TAIL_CALL,
  POS(417, 9),
  POS(417, 9),
  POS(416, 7)
};

static TAB_NUM t_lambda_42[] = {
  1, // locals
  0, // parameters
  // map_reduce_2(contents)
  func_map_reduce_2, 1, var_411_4_contents, 1, LOCAL(1),
  //  map_reduce_2(contents)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(418, 12),
  POS(418, 11)
};

static TAB_NUM t_lambda_43[] = {
  1, // locals
  0, // parameters
  // map_reduce_1(contents)
  func_map_reduce_1, 1, var_411_4_contents, 1, LOCAL(1),
  //  map_reduce_1(contents)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(419, 12),
  POS(419, 11)
};

static TAB_NUM t_func_map_reduce_1[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 421_19_node
  // node $_key $value $left $right
  LOCAL(2), 0, 4, LOCAL(1), var_422_17_value, var_422_24_left, var_422_30_right,
  // map_function &value
  var_407_5_map_function, 1, var_422_17_value, 1, var_422_17_value,
  // is_an_empty_node
  var_is_an_empty_node, 1, var_422_24_left, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), func_2_check_right, lambda_44, TAIL_CALL,
  POS(422, 5),
  POS(423, 5),
  POS(425, 12),
  POS(424, 5)
};

static TAB_NUM t_lambda_44[] = {
  1, // locals
  0, // parameters
  // map_reduce_1(left) value)
  func_map_reduce_1, 1, var_422_24_left, 1, LOCAL(1),
  // !value reduce_function(map_reduce_1(left) value)
  var_408_5_reduce_function, 2, LOCAL(1), var_422_17_value, 1, var_422_17_value,
  // check_right
  func_2_check_right, 0, TAIL_CALL,
  POS(428, 32),
  POS(428, 9),
  POS(429, 9)
};

static TAB_NUM t_func_2_check_right[] = {
  1, // locals
  0, // parameters
  // is_an_empty_node
  var_is_an_empty_node, 1, var_422_30_right, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_45, lambda_46, TAIL_CALL,
  POS(433, 15),
  POS(432, 7)
};

static TAB_NUM t_lambda_45[] = {
  0, // locals
  0, // parameters
  //  value
  LET, 1, var_422_17_value, TAIL_CALL,
  POS(434, 11)
};

static TAB_NUM t_lambda_46[] = {
  2, // locals
  0, // parameters
  // map_reduce_1(right))
  func_map_reduce_1, 1, var_422_30_right, 1, LOCAL(1),
  // reduce_function(value map_reduce_1(right))
  var_408_5_reduce_function, 2, var_422_17_value, LOCAL(1), 1, LOCAL(2),
  //  reduce_function(value map_reduce_1(right))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(435, 34),
  POS(435, 12),
  POS(435, 11)
};

static TAB_NUM t_func_map_reduce_2[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 437_19_node
  // node $key $value $left $right
  LOCAL(2), 0, 4, LOCAL(3), var_438_16_value, var_438_23_left, var_438_29_right,
  // map_function key &value
  var_407_5_map_function, 2, LOCAL(3), var_438_16_value, 1, var_438_16_value,
  // is_an_empty_node
  var_is_an_empty_node, 1, var_438_23_left, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), func_3_check_right, lambda_47, TAIL_CALL,
  POS(438, 5),
  POS(439, 5),
  POS(441, 12),
  POS(440, 5)
};

static TAB_NUM t_lambda_47[] = {
  1, // locals
  0, // parameters
  // map_reduce_2(left) value)
  func_map_reduce_2, 1, var_438_23_left, 1, LOCAL(1),
  // !value reduce_function(map_reduce_2(left) value)
  var_408_5_reduce_function, 2, LOCAL(1), var_438_16_value, 1, var_438_16_value,
  // check_right
  func_3_check_right, 0, TAIL_CALL,
  POS(444, 32),
  POS(444, 9),
  POS(445, 9)
};

static TAB_NUM t_func_3_check_right[] = {
  1, // locals
  0, // parameters
  // is_an_empty_node
  var_is_an_empty_node, 1, var_438_29_right, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_48, lambda_49, TAIL_CALL,
  POS(449, 15),
  POS(448, 7)
};

static TAB_NUM t_lambda_48[] = {
  0, // locals
  0, // parameters
  //  value
  LET, 1, var_438_16_value, TAIL_CALL,
  POS(450, 11)
};

static TAB_NUM t_lambda_49[] = {
  2, // locals
  0, // parameters
  // map_reduce_2(right))
  func_map_reduce_2, 1, var_438_29_right, 1, LOCAL(1),
  // reduce_function(value map_reduce_2(right))
  var_408_5_reduce_function, 2, var_438_16_value, LOCAL(1), 1, LOCAL(2),
  //  reduce_function(value map_reduce_2(right))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(451, 34),
  POS(451, 12),
  POS(451, 11)
};

static TAB_NUM t_func_empty_node___merge[] = {
  2, // locals
  2, // parameters
  LOCAL(1),
  LOCAL(2), // 503_27_right
  // -> right 0
  LET, 2, LOCAL(2), num_0, TAIL_CALL,
  POS(505, 3)
};

static TAB_NUM t_func_binary_node___merge[] = {
  1, // locals
  2, // parameters
  var_507_22_left,
  var_507_27_right,
  // is_an_empty_node
  var_is_an_empty_node, 1, var_507_27_right, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_50, lambda_51, TAIL_CALL,
  POS(511, 11),
  POS(510, 3)
};

static TAB_NUM t_lambda_50[] = {
  0, // locals
  0, // parameters
  //  left 0
  LET, 2, var_507_22_left, num_0, TAIL_CALL,
  POS(512, 7)
};

static TAB_NUM t_lambda_51[] = {
  0, // locals
  0, // parameters
  // left $left_key $left_value $left_left $left_right
  var_507_22_left, 0, 4, var_514_13_left_key, var_514_23_left_value, var_514_35_left_left, var_514_46_left_right,
  // right $right_key $right_value $right_left $right_right
  var_507_27_right, 0, 4, var_515_14_right_key, var_515_25_right_value, var_515_38_right_left, var_515_50_right_right,
  // $total_removed 0
  LET, 1, num_0, 1, var_516_8_total_removed,
  // $removed undefined
  LET, 1, var_undefined, 1, var_517_8_removed,
  // $did_insert undefined
  LET, 1, var_undefined, 1, var_518_8_did_insert,
  // loop:
  var_loop, 1, lambda_loop, TAIL_CALL,
  POS(514, 7),
  POS(515, 7),
  POS(516, 7),
  POS(517, 7),
  POS(518, 7),
  POS(519, 7)
};

static TAB_NUM t_lambda_loop[] = {
  1, // locals
  0, // parameters
  // right_key < left_key:
  var_std__less, 2, var_515_14_right_key, var_514_13_left_key, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_52, lambda_54, TAIL_CALL,
  POS(521, 11),
  POS(520, 9)
};

static TAB_NUM t_lambda_52[] = {
  0, // locals
  0, // parameters
  // merge &left_left right_left !removed
  var_merge, 2, var_514_35_left_left, var_515_38_right_left, 2, var_514_35_left_left, var_517_8_removed,
  // insert &left_left right_key right_value !did_insert
  var_insert, 3, var_514_35_left_left, var_515_14_right_key, var_515_25_right_value, 2, var_514_35_left_left, var_518_8_did_insert,
  // update_removed:
  func_update_removed, 1, lambda_update_removed, TAIL_CALL,
  POS(522, 13),
  POS(523, 13),
  POS(524, 13)
};

static TAB_NUM t_lambda_update_removed[] = {
  1, // locals
  0, // parameters
  // is_an_empty_node
  var_is_an_empty_node, 1, var_515_50_right_right, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_57, lambda_53, TAIL_CALL,
  POS(526, 29),
  POS(525, 15)
};

static TAB_NUM t_lambda_53[] = {
  0, // locals
  0, // parameters
  // right_right !right_key !right_value !right_left !right_right
  var_515_50_right_right, 0, 4, var_515_14_right_key, var_515_25_right_value, var_515_38_right_left, var_515_50_right_right,
  // next
  var_next, 0, TAIL_CALL,
  POS(529, 19),
  POS(530, 19)
};

static TAB_NUM t_lambda_54[] = {
  0, // locals
  0, // parameters
  // merge &left_right right_right !removed
  var_merge, 2, var_514_46_left_right, var_515_50_right_right, 2, var_514_46_left_right, var_517_8_removed,
  // insert &left_right right_key right_value !did_insert
  var_insert, 3, var_514_46_left_right, var_515_14_right_key, var_515_25_right_value, 2, var_514_46_left_right, var_518_8_did_insert,
  // update_removed:
  func_update_removed, 1, lambda_2_update_removed, TAIL_CALL,
  POS(532, 13),
  POS(533, 13),
  POS(534, 13)
};

static TAB_NUM t_lambda_2_update_removed[] = {
  1, // locals
  0, // parameters
  // is_an_empty_node
  var_is_an_empty_node, 1, var_515_38_right_left, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_57, lambda_55, TAIL_CALL,
  POS(536, 28),
  POS(535, 15)
};

static TAB_NUM t_lambda_55[] = {
  0, // locals
  0, // parameters
  // right_left !right_key !right_value !right_left !right_right
  var_515_38_right_left, 0, 4, var_515_14_right_key, var_515_25_right_value, var_515_38_right_left, var_515_50_right_right,
  // next
  var_next, 0, TAIL_CALL,
  POS(539, 19),
  POS(540, 19)
};

static TAB_NUM t_func_update_removed[] = {
  0, // locals
  1, // parameters
  var_542_25_cont,
  // plus &total_removed removed
  var_plus, 2, var_516_8_total_removed, var_517_8_removed, 1, var_516_8_total_removed,
  // if
  var_if, 3, var_518_8_did_insert, var_542_25_cont, lambda_56, TAIL_CALL,
  POS(543, 9),
  POS(544, 9)
};

static TAB_NUM t_lambda_56[] = {
  0, // locals
  0, // parameters
  // plus &total_removed 1
  var_plus, 2, var_516_8_total_removed, num_1, 1, var_516_8_total_removed,
  // cont
  var_542_25_cont, 0, TAIL_CALL,
  POS(548, 13),
  POS(549, 13)
};

static TAB_NUM t_lambda_57[] = {
  1, // locals
  0, // parameters
  // typed_tuple(binary_node left_key left_value left_left left_right)
  var_typed_tuple, 5, var_binary_node, var_514_13_left_key, var_514_23_left_value, var_514_35_left_left, var_514_46_left_right, 1, LOCAL(1),
  // 
  LET, 2, LOCAL(1), var_516_8_total_removed, TAIL_CALL,
  POS(553, 11),
  POS(552, 11)
};

static TAB_NUM t_func_std_types__key_order_table___merge[] = {
  9, // locals
  2, // parameters
  LOCAL(6), // 563_5_self
  LOCAL(7), // 564_5_other
  // contents_of(self) contents_of(other)
  var_contents_of, 1, LOCAL(6), 1, LOCAL(1),
  // contents_of(other)
  var_contents_of, 1, LOCAL(7), 1, LOCAL(2),
  // merge $contents $total_removed contents_of(self) contents_of(other)
  var_merge, 2, LOCAL(1), LOCAL(2), 2, LOCAL(8), LOCAL(9),
  // length_of(self)+length_of(other)-total_removed
  var_length_of, 1, LOCAL(6), 1, LOCAL(1),
  // length_of(other)-total_removed
  var_length_of, 1, LOCAL(7), 1, LOCAL(2),
  // length_of(self)+length_of(other)-total_removed
  var_std__plus, 2, LOCAL(1), LOCAL(2), 1, LOCAL(3),
  // length_of(self)+length_of(other)-total_removed
  var_std__minus, 2, LOCAL(3), LOCAL(9), 1, LOCAL(4),
  // self
  LET, -2, LOCAL(6), var_length_of, LOCAL(4), var_contents_of, LOCAL(8), LOCAL(5),
  // ->
  LET, 1, LOCAL(5), TAIL_CALL,
  POS(566, 34),
  POS(566, 52),
  POS(566, 3),
  POS(569, 18),
  POS(569, 34),
  POS(569, 18),
  POS(569, 18),
  POS(568, 5),
  POS(567, 3)
};

static TAB_NUM t_func_std__key_order_table[] = {
  1, // locals
  -1, // parameters
  REST_PARAMETER, LOCAL(1), // 576_5_pairs
  // $table empty_key_order_table
  LET, 1, var_empty_key_order_table, 1, var_578_4_table,
  // for_each pairs
  var_for_each, 3, LOCAL(1), lambda_58, lambda_59, TAIL_CALL,
  POS(578, 3),
  POS(579, 3)
};

static TAB_NUM t_lambda_58[] = {
  3, // locals
  1, // parameters
  LOCAL(1), // 580_8_pair
  // pair $key $value
  LOCAL(1), 0, 2, LOCAL(2), LOCAL(3),
  // table(key) value
  var_578_4_table, 2, LOCAL(2), LOCAL(3), 1, var_578_4_table,
  // next
  var_next, 0, TAIL_CALL,
  POS(581, 7),
  POS(582, 8),
  POS(583, 7)
};

static TAB_NUM t_lambda_59[] = {
  0, // locals
  0, // parameters
  //  table
  LET, 1, var_578_4_table, TAIL_CALL,
  POS(584, 7)
};

static TAB_NUM t_module_entry[] = {
  0, // locals
  0, // parameters
  // register_type &deserializers std_types::key_order_table
  var_register_type, 2, var_deserializers, var_std_types__key_order_table, 1, var_deserializers,
  LET, 1, 0, TAIL_CALL,
  POS(591, 1)
};

static int tuple_73_1_arguments[] = {
  -var_undefined, -var_undefined, -var_undefined, -var_undefined
};

static FUNKY_CONSTANT constants_table[] = {
  {FLT_POSITIVE_INT64, 0, {.value = 0}},
  {FLT_TUPLE, 4, {.arguments = tuple_73_1_arguments}},
  {FLT_UNIQUE, 0, {.str_8 = "NONE"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__key_order_table}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_value_is_defined}},
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
  {FLT_FUNCTION, 0, {.tfunc = t_func_fetch_first}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_16}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_17}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_empty_node___delete}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_binary_node___delete}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_18}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_19}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_20}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_21}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_22}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_23}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_24}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_25}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_26}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_27}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_28}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_29}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_finish___for_each_1_call}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_finish___for_each_2_call}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_empty_node___for_each_1_left}},
  {FLT_NEGATIVE_INT64, 0, {.value = 1}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_empty_node___for_each_2_left}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_binary_node___for_each_1_left}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_binary_node___for_each_2_left}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_binary_node___for_each_1_call}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_binary_node___for_each_2_call}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_binary_node___for_each_1_right}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_binary_node___for_each_2_right}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__key_order_table___for_each}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_30}},
  {FLT_POSITIVE_INT64, 0, {.value = 2}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_31}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_next}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_32}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2_next}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_empty_node___map_1}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_empty_node___map_2}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_binary_node___map_1}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_binary_node___map_2}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__key_order_table___map}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_33}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_34}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__key_order_table___reduce}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_35}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_36}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_reduce}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_37}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_check_right}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_38}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_39}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__key_order_table___map_reduce}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_40}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_41}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_42}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_43}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_map_reduce_1}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_44}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_2_check_right}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_45}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_46}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_map_reduce_2}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_47}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_3_check_right}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_48}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_49}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_empty_node___merge}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_binary_node___merge}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_50}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_51}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_52}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_update_removed}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_53}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_54}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2_update_removed}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_55}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_update_removed}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_56}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_57}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__key_order_table___merge}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__key_order_table}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_58}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_59}},
  {FLT_STRING_8, 15, {.str_8 = "key_order_table"}},
  {FLT_FUNCTION, 0, {.tfunc = t_module_entry}}
};

static ATTRIBUTE_DEFINITION std_types__object__attributes[] = {
  {-var_is_a_key_order_table, -var_false},
  {-var_is_an_empty_node, -var_false}
};

static ATTRIBUTE_DEFINITION std_types__key_order_table__attributes[] = {
  {-var_is_a_key_order_table, -var_true},
  {-var_contents_of, -var_empty_node},
  {-var_length_of, -num_0},
  {TYPE_FUNCTION, -func_std_types__key_order_table},
  {var_for_each, -func_std_types__key_order_table___for_each},
  {var_map, -func_std_types__key_order_table___map},
  {var_reduce, -func_std_types__key_order_table___reduce},
  {var_map_reduce, -func_std_types__key_order_table___map_reduce},
  {var_merge, -func_std_types__key_order_table___merge},
  {-var_serialization_tag_of, -str_key_order_table},
  {-var_empty_collection_of, -var_empty_key_order_table}
};

static ATTRIBUTE_DEFINITION empty_node__attributes[] = {
  {-var_is_an_empty_node, -var_true},
  {var_retrieve, -func_empty_node___retrieve},
  {var_insert, -func_empty_node___insert},
  {var_delete, -func_empty_node___delete},
  {var_for_each_1_left, -func_empty_node___for_each_1_left},
  {var_for_each_2_left, -func_empty_node___for_each_2_left},
  {var_map_1, -func_empty_node___map_1},
  {var_map_2, -func_empty_node___map_2},
  {var_merge, -func_empty_node___merge}
};

static ATTRIBUTE_DEFINITION binary_node__attributes[] = {
  {var_retrieve, -func_binary_node___retrieve},
  {var_insert, -func_binary_node___insert},
  {var_delete, -func_binary_node___delete},
  {var_for_each_1_left, -func_binary_node___for_each_1_left},
  {var_for_each_2_left, -func_binary_node___for_each_2_left},
  {var_for_each_1_call, -func_binary_node___for_each_1_call},
  {var_for_each_2_call, -func_binary_node___for_each_2_call},
  {var_for_each_1_right, -func_binary_node___for_each_1_right},
  {var_for_each_2_right, -func_binary_node___for_each_2_right},
  {var_map_1, -func_binary_node___map_1},
  {var_map_2, -func_binary_node___map_2},
  {var_merge, -func_binary_node___merge}
};

static ATTRIBUTE_DEFINITION finish__attributes[] = {
  {var_for_each_1_call, -func_finish___for_each_1_call},
  {var_for_each_2_call, -func_finish___for_each_2_call}
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
    {.position = POS(29, 1)}
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
    "is_a_key_order_table\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN, 0, 2,
    "object\000std_types", std_types__object__attributes,
    {.position = POS(38, 1)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "is_a_key_order_table\000", NULL,
    {.position = POS(38, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "false\000", NULL,
    {.position = POS(38, 41)}
  },
  {
    FOT_DERIVED, 0, 11,
    "key_order_table\000std_types", std_types__key_order_table__attributes,
    {"table\000std_types"}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "true\000", NULL,
    {.position = POS(39, 50)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "table\000std_types", NULL,
    {.position = POS(41, 29)}
  },
  {
    FOT_DERIVED, 0, 9,
    "empty_node\000", empty_node__attributes,
    {"object\000std_types"}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "length_of\000", NULL,
    {.position = POS(57, 29)}
  },
  {
    FOT_DERIVED, 0, 0,
    "empty_key_order_table\000std", NULL,
    {"key_order_table\000std_types"}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "is_an_empty_node\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_INITIALIZED, 0, 12,
    "binary_node\000", binary_node__attributes,
    {.const_idx = -tuple_73_1}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "undefined\000", NULL,
    {.position = POS(73, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "tuple\000", NULL,
    {.position = POS(73, 14)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "80_5_myself\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "81_5_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "82_5_value\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "84_4_contents\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "equal\000std", NULL,
    {.position = POS(86, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_defined\000", NULL,
    {.position = POS(90, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000std", NULL,
    {.position = POS(97, 28)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if\000", NULL,
    {.position = POS(92, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "minus\000std", NULL,
    {.position = POS(106, 28)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "114_30_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "115_9_my_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "115_17_my_value\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "115_27_my_left\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "115_36_my_right\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "less\000std", NULL,
    {.position = POS(121, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "typed_tuple\000", NULL,
    {.position = POS(129, 6)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "131_23_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "131_28_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "131_32_value\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "132_9_my_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "132_17_my_value\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "132_27_my_left\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "132_36_my_right\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "149_16_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "150_9_my_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "150_17_my_value\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "150_27_my_left\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "150_36_my_right\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "160_23_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "160_28_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "161_9_my_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "161_17_my_value\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "161_27_my_left\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "161_36_my_right\000", NULL
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
    FOT_POLYMORPHIC, 0, 0,
    "for_each_2_left\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "for_each_2_call\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "for_each_2_right\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_DERIVED, 0, 0,
    "todo\000basic_loops", NULL,
    {"undefined\000"}
  },
  {
    FOT_DERIVED, 0, 2,
    "finish\000", finish__attributes,
    {"object\000std_types"}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "break\000", NULL,
    {.position = POS(205, 34)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "push\000", NULL,
    {.position = POS(216, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "body\000basic_loops", NULL,
    {.position = POS(226, 3)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "for_each\000", NULL,
    {.position = POS(240, 29)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "272_5_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "274_5_finally\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "next\000", NULL,
    {.position = POS(274, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "finally\000basic_loops", NULL,
    {.position = POS(282, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "list\000", NULL,
    {.position = POS(284, 22)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "break_function\000basic_types", NULL,
    {.position = POS(288, 14)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "saved_context_of\000basic_loops", NULL,
    {.position = POS(290, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "new\000", NULL,
    {.position = POS(288, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "parameter_count_of\000", NULL,
    {.position = POS(298, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "pop\000", NULL,
    {.position = POS(300, 9)}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "map_1\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "map_2\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_DERIVED, 0, 0,
    "mapping_function\000", NULL,
    {"undefined\000"}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "map\000", NULL,
    {.position = POS(331, 29)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "341_5_self\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "reduce\000", NULL,
    {.position = POS(356, 29)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "369_5_function\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "370_5_unit\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "372_4_contents\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "379_17_value\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "379_24_left\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "379_30_right\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "map_reduce\000", NULL,
    {.position = POS(396, 29)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "407_5_map_function\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "408_5_reduce_function\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "append\000", NULL,
    {.position = POS(408, 23)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "409_5_unit\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "411_4_contents\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "422_17_value\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "422_24_left\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "422_30_right\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "438_16_value\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "438_23_left\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "438_29_right\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "merge\000", NULL,
    {.position = POS(503, 13)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "507_22_left\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "507_27_right\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "514_13_left_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "514_23_left_value\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "514_35_left_left\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "514_46_left_right\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "515_14_right_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "515_25_right_value\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "515_38_right_left\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "515_50_right_right\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "516_8_total_removed\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "517_8_removed\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "518_8_did_insert\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "loop\000", NULL,
    {.position = POS(519, 7)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "542_25_cont\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000", NULL,
    {.position = POS(543, 9)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "key_order_table\000std", NULL,
    {.const_idx = -func_std__key_order_table}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "578_4_table\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_key_order_table\000", NULL,
    {.position = POS(578, 10)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "serialization_tag_of\000", NULL,
    {.position = POS(588, 29)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "empty_collection_of\000", NULL,
    {.position = POS(589, 29)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "deserializers\000", NULL,
    {.position = POS(591, 16)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "register_type\000", NULL,
    {.position = POS(591, 1)}
  }
};

static FUNKY_NAMESPACE used_namespaces[] = {
  {"std", 1, 0}
};

FUNKY_MODULE module__basic__types__collections__tables__key_order_table = {
  "_basic__types__collections__tables__key_order_table", // module name
  "basic/types/collections/tables/key_order_table.fky", // module filename
  .major_version = 0,
  .minor_version = 0,
  .feature_flags = FEAT_POSITIONS|FEAT_INITIALIZER,
  .marker = 0,
  0, // number of required modules
  0, // number of defined namespaces
  1, // number of used namespaces
  110, // number of constants
  123, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  constants_table,
  variables_table,
};
