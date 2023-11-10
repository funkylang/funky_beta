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
  lambda_break = -55,
  num_2 = -56,
  lambda_30 = -57,
  lambda_next = -58,
  lambda_31 = -59,
  lambda_2_next = -60,
  func_empty_node___map_1 = -61,
  func_empty_node___map_2 = -62,
  func_binary_node___map_1 = -63,
  func_binary_node___map_2 = -64,
  func_std_types__key_order_table___map = -65,
  lambda_32 = -66,
  lambda_33 = -67,
  func_std_types__key_order_table___reduce = -68,
  lambda_34 = -69,
  lambda_35 = -70,
  func_reduce = -71,
  lambda_36 = -72,
  func_check_right = -73,
  lambda_37 = -74,
  lambda_38 = -75,
  func_std_types__key_order_table___map_reduce = -76,
  lambda_39 = -77,
  lambda_40 = -78,
  lambda_41 = -79,
  lambda_42 = -80,
  func_map_reduce_1 = -81,
  lambda_43 = -82,
  func_2_check_right = -83,
  lambda_44 = -84,
  lambda_45 = -85,
  func_map_reduce_2 = -86,
  lambda_46 = -87,
  func_3_check_right = -88,
  lambda_47 = -89,
  lambda_48 = -90,
  func_empty_node___dump_string = -91,
  string_1 = -92,
  func_binary_node___dump_string = -93,
  lambda_49 = -94,
  lambda_50 = -95,
  minus_num_2 = -96,
  chr_124 = -97,
  chr_47 = -98,
  lambda_51 = -99,
  lambda_52 = -100,
  chr_92 = -101,
  lambda_53 = -102,
  lambda_54 = -103,
  lambda_55 = -104,
  lambda_56 = -105,
  chr_40 = -106,
  string_2 = -107,
  func_std_types__key_order_table___dump_string = -108,
  func_empty_node___merge = -109,
  func_binary_node___merge = -110,
  lambda_57 = -111,
  lambda_58 = -112,
  lambda_loop = -113,
  lambda_59 = -114,
  lambda_update_removed = -115,
  lambda_60 = -116,
  lambda_61 = -117,
  lambda_2_update_removed = -118,
  lambda_62 = -119,
  func_update_removed = -120,
  lambda_63 = -121,
  lambda_64 = -122,
  func_std_types__key_order_table___merge = -123,
  func_std__key_order_table = -124,
  lambda_65 = -125,
  lambda_66 = -126,
  str_key_order_table = -127
};

enum {
  var__START = FIRST_VAR-1,
  var_std__dump_string, // attribute
  var_std__assign, // extern
  var_contents_of, // attribute
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
  var_78_0_myself, // dynamic
  var_79_0_key, // dynamic
  var_80_0_value, // dynamic
  var_82_1_contents, // dynamic
  var_std__equal, // extern
  var_is_defined, // extern
  var_std__plus, // extern
  var_if, // extern
  var_std__minus, // extern
  var_112_29_key, // dynamic
  var_113_6_my_key, // dynamic
  var_113_14_my_value, // dynamic
  var_113_24_my_left, // dynamic
  var_113_33_my_right, // dynamic
  var_std__less, // extern
  var_new, // extern
  var_129_22_self, // dynamic
  var_129_27_key, // dynamic
  var_129_31_value, // dynamic
  var_130_6_my_key, // dynamic
  var_130_14_my_value, // dynamic
  var_130_24_my_left, // dynamic
  var_130_33_my_right, // dynamic
  var_147_15_self, // dynamic
  var_148_6_my_key, // dynamic
  var_148_14_my_value, // dynamic
  var_148_24_my_left, // dynamic
  var_148_33_my_right, // dynamic
  var_158_22_self, // dynamic
  var_158_27_key, // dynamic
  var_159_6_my_key, // dynamic
  var_159_14_my_value, // dynamic
  var_159_24_my_left, // dynamic
  var_159_33_my_right, // dynamic
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
  var_270_0_self, // dynamic
  var_272_0_finally, // dynamic
  var_next, // extern
  var_basic_loops__finally, // extern
  var_list, // extern
  var_basic_loops__saved_context_of, // extern polymorphic
  var_parameter_count_of, // extern
  var_pop, // extern
  var_map_1, // attribute
  var_map_2, // attribute
  var_mapping_function, // derived
  var_map, // extern polymorphic
  var_339_0_self, // dynamic
  var_reduce, // extern polymorphic
  var_367_0_function, // dynamic
  var_368_0_unit, // dynamic
  var_370_1_contents, // dynamic
  var_377_12_value, // dynamic
  var_377_19_left, // dynamic
  var_377_25_right, // dynamic
  var_map_reduce, // extern polymorphic
  var_405_0_map_function, // dynamic
  var_406_0_reduce_function, // dynamic
  var_append, // extern
  var_407_0_unit, // dynamic
  var_409_1_contents, // dynamic
  var_420_12_value, // dynamic
  var_420_19_left, // dynamic
  var_420_25_right, // dynamic
  var_436_11_value, // dynamic
  var_436_18_left, // dynamic
  var_436_24_right, // dynamic
  var_dump_string, // extern polymorphic
  var_456_32_prefix, // dynamic
  var_457_6_key, // dynamic
  var_spaces, // extern
  var_458_1_new_prefix, // dynamic
  var_is_empty, // extern
  var_range, // extern
  var_459_1_empty_prefix, // dynamic
  var_string, // extern
  var_merge, // extern polymorphic
  var_505_21_left, // dynamic
  var_505_26_right, // dynamic
  var_512_6_left_key, // dynamic
  var_512_16_left_value, // dynamic
  var_512_28_left_left, // dynamic
  var_512_39_left_right, // dynamic
  var_513_7_right_key, // dynamic
  var_513_18_right_value, // dynamic
  var_513_31_right_left, // dynamic
  var_513_43_right_right, // dynamic
  var_514_1_total_removed, // dynamic
  var_515_1_removed, // dynamic
  var_516_1_did_insert, // dynamic
  var_loop, // extern
  var_540_18_cont, // dynamic
  var_plus, // extern
  var_std__key_order_table, // initialized
  var_576_1_table, // dynamic
  var_empty_key_order_table, // extern
  var_serialization_tag_of, // extern polymorphic
  var_empty_collection_of, // extern polymorphic
  var__END
};


static TAB_NUM t_func_std_types__key_order_table[] = {
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
  1, // locals
  0, // parameters
  // is_defined:
  var_is_defined, 1, var_80_0_value, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_value_is_defined, lambda_5, TAIL_CALL,
  POS(88, 15),
  POS(87, 7)
};

static TAB_NUM t_lambda_value_is_defined[] = {
  1, // locals
  0, // parameters
  // insert &contents $success key value
  var_insert, 3, var_82_1_contents, var_79_0_key, var_80_0_value, 2, var_82_1_contents, LOCAL(1),
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
  1, // locals
  0, // parameters
  // .contents_of contents)
  LET, -1, var_78_0_myself, var_contents_of, var_82_1_contents, LOCAL(1),
  //  myself(.contents_of contents)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(96, 23),
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
  // -> undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(110, 36)
};

static TAB_NUM t_func_binary_node___retrieve[] = {
  2, // locals
  2, // parameters
  LOCAL(2), // 112_24_self
  var_112_29_key,
  // self $my_key $my_value $my_left $my_right
  LOCAL(2), 0, 4, var_113_6_my_key, var_113_14_my_value, var_113_24_my_left, var_113_33_my_right,
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
  //  my_value
  LET, 1, var_113_14_my_value, TAIL_CALL,
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
  var_retrieve, 2, var_113_24_my_left, var_112_29_key, TAIL_CALL,
  POS(120, 11)
};

static TAB_NUM t_lambda_11[] = {
  0, // locals
  0, // parameters
  // retrieve my_right key
  var_retrieve, 2, var_113_33_my_right, var_112_29_key, TAIL_CALL,
  POS(121, 11)
};

static TAB_NUM t_func_empty_node___insert[] = {
  3, // locals
  3, // parameters
  LOCAL(1),
  LOCAL(2), // 126_27_key
  LOCAL(3), // 126_31_value
  // new(binary_node key value empty_node empty_node) true
  var_new, 5, var_binary_node, LOCAL(2), LOCAL(3), var_empty_node, var_empty_node, 1, LOCAL(1),
  // -> new(binary_node key value empty_node empty_node) true
  LET, 2, LOCAL(1), var_true, TAIL_CALL,
  POS(127, 6),
  POS(127, 3)
};

static TAB_NUM t_func_binary_node___insert[] = {
  1, // locals
  3, // parameters
  var_129_22_self,
  var_129_27_key,
  var_129_31_value,
  // self $my_key $my_value $my_left $my_right
  var_129_22_self, 0, 4, var_130_6_my_key, var_130_14_my_value, var_130_24_my_left, var_130_33_my_right,
  // key == my_key
  var_std__equal, 2, var_129_27_key, var_130_6_my_key, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_12, lambda_13, TAIL_CALL,
  POS(130, 3),
  POS(132, 5),
  POS(131, 3)
};

static TAB_NUM t_lambda_12[] = {
  1, // locals
  0, // parameters
  // new(self key value my_left my_right) false
  var_new, 5, var_129_22_self, var_129_27_key, var_129_31_value, var_130_24_my_left, var_130_33_my_right, 1, LOCAL(1),
  //  new(self key value my_left my_right) false
  LET, 2, LOCAL(1), var_false, TAIL_CALL,
  POS(133, 8),
  POS(133, 7)
};

static TAB_NUM t_lambda_13[] = {
  1, // locals
  0, // parameters
  // key < my_key
  var_std__less, 2, var_129_27_key, var_130_6_my_key, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_14, lambda_15, TAIL_CALL,
  POS(136, 9),
  POS(135, 7)
};

static TAB_NUM t_lambda_14[] = {
  2, // locals
  0, // parameters
  // insert &my_left $did_insert key value
  var_insert, 3, var_130_24_my_left, var_129_27_key, var_129_31_value, 2, var_130_24_my_left, LOCAL(2),
  // new(self my_key my_value my_left my_right) did_insert
  var_new, 5, var_129_22_self, var_130_6_my_key, var_130_14_my_value, var_130_24_my_left, var_130_33_my_right, 1, LOCAL(1),
  // -> new(self my_key my_value my_left my_right) did_insert
  LET, 2, LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(138, 11),
  POS(139, 14),
  POS(139, 11)
};

static TAB_NUM t_lambda_15[] = {
  2, // locals
  0, // parameters
  // insert &my_right $did_insert key value
  var_insert, 3, var_130_33_my_right, var_129_27_key, var_129_31_value, 2, var_130_33_my_right, LOCAL(2),
  // new(self my_key my_value my_left my_right) did_insert
  var_new, 5, var_129_22_self, var_130_6_my_key, var_130_14_my_value, var_130_24_my_left, var_130_33_my_right, 1, LOCAL(1),
  // -> new(self my_key my_value my_left my_right) did_insert
  LET, 2, LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(141, 11),
  POS(142, 14),
  POS(142, 11)
};

static TAB_NUM t_func_fetch_first[] = {
  1, // locals
  1, // parameters
  var_147_15_self,
  // self $my_key $my_value $my_left $my_right
  var_147_15_self, 0, 4, var_148_6_my_key, var_148_14_my_value, var_148_24_my_left, var_148_33_my_right,
  // is_an_empty_node
  var_is_an_empty_node, 1, var_148_24_my_left, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_16, lambda_17, TAIL_CALL,
  POS(148, 3),
  POS(150, 13),
  POS(149, 3)
};

static TAB_NUM t_lambda_16[] = {
  0, // locals
  0, // parameters
  //  my_right my_key my_value
  LET, 3, var_148_33_my_right, var_148_6_my_key, var_148_14_my_value, TAIL_CALL,
  POS(151, 7)
};

static TAB_NUM t_lambda_17[] = {
  3, // locals
  0, // parameters
  // fetch_first &my_left $first_key $first_value
  func_fetch_first, 1, var_148_24_my_left, 3, var_148_24_my_left, LOCAL(2), LOCAL(3),
  // new(self my_key my_value my_left my_right) first_key first_value
  var_new, 5, var_147_15_self, var_148_6_my_key, var_148_14_my_value, var_148_24_my_left, var_148_33_my_right, 1, LOCAL(1),
  // -> new(self my_key my_value my_left my_right) first_key first_value
  LET, 3, LOCAL(1), LOCAL(2), LOCAL(3), TAIL_CALL,
  POS(153, 7),
  POS(154, 10),
  POS(154, 7)
};

static TAB_NUM t_func_empty_node___delete[] = {
  2, // locals
  2, // parameters
  LOCAL(2), // 156_21_self
  LOCAL(1),
  // -> self false
  LET, 2, LOCAL(2), var_false, TAIL_CALL,
  POS(156, 33)
};

static TAB_NUM t_func_binary_node___delete[] = {
  1, // locals
  2, // parameters
  var_158_22_self,
  var_158_27_key,
  // self $my_key $my_value $my_left $my_right
  var_158_22_self, 0, 4, var_159_6_my_key, var_159_14_my_value, var_159_24_my_left, var_159_33_my_right,
  // key == my_key
  var_std__equal, 2, var_158_27_key, var_159_6_my_key, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_18, lambda_23, TAIL_CALL,
  POS(159, 3),
  POS(161, 5),
  POS(160, 3)
};

static TAB_NUM t_lambda_18[] = {
  1, // locals
  0, // parameters
  // is_an_empty_node
  var_is_an_empty_node, 1, var_159_24_my_left, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_19, lambda_20, TAIL_CALL,
  POS(164, 17),
  POS(163, 7)
};

static TAB_NUM t_lambda_19[] = {
  0, // locals
  0, // parameters
  //  my_right true
  LET, 2, var_159_33_my_right, var_true, TAIL_CALL,
  POS(165, 11)
};

static TAB_NUM t_lambda_20[] = {
  1, // locals
  0, // parameters
  // is_an_empty_node
  var_is_an_empty_node, 1, var_159_33_my_right, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_21, lambda_22, TAIL_CALL,
  POS(168, 22),
  POS(167, 11)
};

static TAB_NUM t_lambda_21[] = {
  0, // locals
  0, // parameters
  //  my_left true
  LET, 2, var_159_24_my_left, var_true, TAIL_CALL,
  POS(169, 15)
};

static TAB_NUM t_lambda_22[] = {
  3, // locals
  0, // parameters
  // fetch_first &my_right $first_key $first_value
  func_fetch_first, 1, var_159_33_my_right, 3, var_159_33_my_right, LOCAL(2), LOCAL(3),
  // new(self first_key first_value my_left my_right)
  var_new, 5, var_158_22_self, LOCAL(2), LOCAL(3), var_159_24_my_left, var_159_33_my_right, 1, LOCAL(1),
  // -> new(self first_key first_value my_left my_right)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(171, 15),
  POS(172, 18),
  POS(172, 15)
};

static TAB_NUM t_lambda_23[] = {
  1, // locals
  0, // parameters
  // key < my_key
  var_std__less, 2, var_158_27_key, var_159_6_my_key, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_24, lambda_27, TAIL_CALL,
  POS(175, 9),
  POS(174, 7)
};

static TAB_NUM t_lambda_24[] = {
  1, // locals
  0, // parameters
  // delete &my_left $success key
  var_delete, 2, var_159_24_my_left, var_158_27_key, 2, var_159_24_my_left, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_25, lambda_26, TAIL_CALL,
  POS(177, 11),
  POS(178, 11)
};

static TAB_NUM t_lambda_25[] = {
  1, // locals
  0, // parameters
  // new(self my_key my_value my_left my_right) true
  var_new, 5, var_158_22_self, var_159_6_my_key, var_159_14_my_value, var_159_24_my_left, var_159_33_my_right, 1, LOCAL(1),
  //  new(self my_key my_value my_left my_right) true
  LET, 2, LOCAL(1), var_true, TAIL_CALL,
  POS(180, 16),
  POS(180, 15)
};

static TAB_NUM t_lambda_26[] = {
  0, // locals
  0, // parameters
  //  self false
  LET, 2, var_158_22_self, var_false, TAIL_CALL,
  POS(181, 15)
};

static TAB_NUM t_lambda_27[] = {
  1, // locals
  0, // parameters
  // delete &my_right $success key
  var_delete, 2, var_159_33_my_right, var_158_27_key, 2, var_159_33_my_right, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_28, lambda_29, TAIL_CALL,
  POS(183, 11),
  POS(184, 11)
};

static TAB_NUM t_lambda_28[] = {
  1, // locals
  0, // parameters
  // new(self my_key my_value my_left my_right) true
  var_new, 5, var_158_22_self, var_159_6_my_key, var_159_14_my_value, var_159_24_my_left, var_159_33_my_right, 1, LOCAL(1),
  //  new(self my_key my_value my_left my_right) true
  LET, 2, LOCAL(1), var_true, TAIL_CALL,
  POS(186, 16),
  POS(186, 15)
};

static TAB_NUM t_lambda_29[] = {
  0, // locals
  0, // parameters
  //  self false
  LET, 2, var_158_22_self, var_false, TAIL_CALL,
  POS(187, 15)
};

static TAB_NUM t_func_finish___for_each_1_call[] = {
  1, // locals
  1, // parameters
  LOCAL(1),
  // break!
  var_break, 0, IO_TAIL_CALL,
  POS(203, 34)
};

static TAB_NUM t_func_finish___for_each_2_call[] = {
  1, // locals
  1, // parameters
  LOCAL(1),
  // break!
  var_break, 0, IO_TAIL_CALL,
  POS(204, 34)
};

static TAB_NUM t_func_empty_node___for_each_1_left[] = {
  1, // locals
  1, // parameters
  LOCAL(1),
  // basic_loops::todo(-1) # peek
  var_basic_loops__todo, 1, minus_num_1, 1, LOCAL(1),
  // for_each_1_call! basic_loops::todo(-1) # peek
  var_for_each_1_call, 1, LOCAL(1), IO_TAIL_CALL,
  POS(207, 20),
  POS(207, 3)
};

static TAB_NUM t_func_empty_node___for_each_2_left[] = {
  1, // locals
  1, // parameters
  LOCAL(1),
  // basic_loops::todo(-1) # peek
  var_basic_loops__todo, 1, minus_num_1, 1, LOCAL(1),
  // for_each_2_call! basic_loops::todo(-1) # peek
  var_for_each_2_call, 1, LOCAL(1), IO_TAIL_CALL,
  POS(210, 20),
  POS(210, 3)
};

static TAB_NUM t_func_binary_node___for_each_1_left[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 212_31_self
  // self $_my_key $_my_value $my_left $_my_right
  LOCAL(2), 0, 4, LOCAL(1), LOCAL(1), LOCAL(3), LOCAL(1),
  // push &basic_loops::todo self
  var_push, 2, var_basic_loops__todo, LOCAL(2), 1, var_basic_loops__todo,
  // for_each_1_left! my_left
  var_for_each_1_left, 1, LOCAL(3), IO_TAIL_CALL,
  POS(213, 3),
  POS(214, 3),
  POS(215, 3)
};

static TAB_NUM t_func_binary_node___for_each_2_left[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 217_31_self
  // self $_my_key $_my_value $my_left $_my_right
  LOCAL(2), 0, 4, LOCAL(1), LOCAL(1), LOCAL(3), LOCAL(1),
  // push &basic_loops::todo self
  var_push, 2, var_basic_loops__todo, LOCAL(2), 1, var_basic_loops__todo,
  // for_each_2_left! my_left
  var_for_each_2_left, 1, LOCAL(3), IO_TAIL_CALL,
  POS(218, 3),
  POS(219, 3),
  POS(220, 3)
};

static TAB_NUM t_func_binary_node___for_each_1_call[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 222_31_self
  // self $_my_key $my_value $_my_left $_my_right
  LOCAL(2), 0, 4, LOCAL(1), LOCAL(3), LOCAL(1), LOCAL(1),
  // basic_loops::body! my_value
  var_basic_loops__body, 1, LOCAL(3), IO_TAIL_CALL,
  POS(223, 3),
  POS(224, 3)
};

static TAB_NUM t_func_binary_node___for_each_2_call[] = {
  4, // locals
  1, // parameters
  LOCAL(2), // 226_31_self
  // self $my_key $my_value $_my_left $_my_right
  LOCAL(2), 0, 4, LOCAL(3), LOCAL(4), LOCAL(1), LOCAL(1),
  // basic_loops::body! my_key my_value
  var_basic_loops__body, 2, LOCAL(3), LOCAL(4), IO_TAIL_CALL,
  POS(227, 3),
  POS(228, 3)
};

static TAB_NUM t_func_binary_node___for_each_1_right[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 230_32_self
  // self $_my_key $_my_value $_my_left $my_right
  LOCAL(2), 0, 4, LOCAL(1), LOCAL(1), LOCAL(1), LOCAL(3),
  // for_each_1_left! my_right
  var_for_each_1_left, 1, LOCAL(3), IO_TAIL_CALL,
  POS(231, 3),
  POS(232, 3)
};

static TAB_NUM t_func_binary_node___for_each_2_right[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 234_32_self
  // self $_my_key $_my_value $_my_left $my_right
  LOCAL(2), 0, 4, LOCAL(1), LOCAL(1), LOCAL(1), LOCAL(3),
  // for_each_2_left! my_right
  var_for_each_2_left, 1, LOCAL(3), IO_TAIL_CALL,
  POS(235, 3),
  POS(236, 3)
};

static TAB_NUM t_func_std_types__key_order_table___for_each[] = {
  4, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_270_0_self,
  MANDATORY_PARAMETER, LOCAL(3), // 271_0_body
  var_next, var_272_0_finally,
  // $saved_context
  var_tuple, 5, var_next, var_break, var_basic_loops__todo, var_basic_loops__body, var_basic_loops__finally, 1, LOCAL(4),
  // !basic_loops::todo list(finish)
  var_list, 1, var_finish, 1, var_basic_loops__todo,
  // !basic_loops::body body
  LET, 1, LOCAL(3), 1, var_basic_loops__body,
  // !basic_loops::finally finally
  LET, 1, var_272_0_finally, 1, var_basic_loops__finally,
  // !break: (myself^)
  LET, 1, lambda_break, 1, var_break,
  // break.basic_loops::saved_context_of saved_context
  LET, -1, var_break, var_basic_loops__saved_context_of, LOCAL(4), var_break,
  // parameter_count_of(body) == 2:
  var_parameter_count_of, 1, LOCAL(3), 1, LOCAL(1),
  // parameter_count_of(body) == 2:
  var_std__equal, 2, LOCAL(1), num_2, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_30, lambda_31, IO_TAIL_CALL,
  POS(274, 3),
  POS(282, 3),
  POS(283, 3),
  POS(284, 3),
  POS(286, 3),
  POS(293, 4),
  POS(296, 5),
  POS(296, 5),
  POS(295, 3)
};

static TAB_NUM t_lambda_break[] = {
  2, // locals
  -1, // parameters
  MYSELF_PARAMETER, LOCAL(2), // 286_9_myself
  // !finally basic_loops::finally
  LET, 1, var_basic_loops__finally, 1, var_272_0_finally,
  // basic_loops::saved_context_of(myself)
  var_basic_loops__saved_context_of, 1, LOCAL(2), 1, LOCAL(1),
  // basic_loops::saved_context_of(myself)
  LOCAL(1), 0, 5, var_next, var_break, var_basic_loops__todo, var_basic_loops__body, var_basic_loops__finally,
  // finally!
  var_272_0_finally, 0, IO_TAIL_CALL,
  POS(287, 5),
  POS(288, 5),
  POS(288, 5),
  POS(291, 5)
};

static TAB_NUM t_lambda_30[] = {
  1, // locals
  0, // parameters
  // !next:
  LET, 1, lambda_next, 1, var_next,
  // contents_of(self)
  var_contents_of, 1, var_270_0_self, 1, LOCAL(1),
  // for_each_2_left! contents_of(self)
  var_for_each_2_left, 1, LOCAL(1), IO_TAIL_CALL,
  POS(297, 7),
  POS(301, 24),
  POS(301, 7)
};

static TAB_NUM t_lambda_next[] = {
  1, // locals
  0, // parameters
  // pop &basic_loops::todo $node
  var_pop, 1, var_basic_loops__todo, 2, var_basic_loops__todo, LOCAL(1),
  // for_each_2_right! node
  var_for_each_2_right, 1, LOCAL(1), IO_TAIL_CALL,
  POS(298, 9),
  POS(299, 9)
};

static TAB_NUM t_lambda_31[] = {
  1, // locals
  0, // parameters
  // !next:
  LET, 1, lambda_2_next, 1, var_next,
  // contents_of(self)
  var_contents_of, 1, var_270_0_self, 1, LOCAL(1),
  // for_each_1_left! contents_of(self)
  var_for_each_1_left, 1, LOCAL(1), IO_TAIL_CALL,
  POS(303, 7),
  POS(307, 24),
  POS(307, 7)
};

static TAB_NUM t_lambda_2_next[] = {
  1, // locals
  0, // parameters
  // pop &basic_loops::todo $node
  var_pop, 1, var_basic_loops__todo, 2, var_basic_loops__todo, LOCAL(1),
  // for_each_1_right! node
  var_for_each_1_right, 1, LOCAL(1), IO_TAIL_CALL,
  POS(304, 9),
  POS(305, 9)
};

static TAB_NUM t_func_empty_node___map_1[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 317_20_self
  // -> self
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(317, 27)
};

static TAB_NUM t_func_empty_node___map_2[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 319_20_self
  // -> self
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(319, 27)
};

static TAB_NUM t_func_binary_node___map_1[] = {
  8, // locals
  1, // parameters
  LOCAL(4), // 321_21_self
  // self $my_key $my_value $my_left $my_right
  LOCAL(4), 0, 4, LOCAL(5), LOCAL(6), LOCAL(7), LOCAL(8),
  // mapping_function(my_value) map_1(my_left) map_1(my_right)
  var_mapping_function, 1, LOCAL(6), 1, LOCAL(1),
  // map_1(my_left) map_1(my_right)
  var_map_1, 1, LOCAL(7), 1, LOCAL(2),
  // map_1(my_right)
  var_map_1, 1, LOCAL(8), 1, LOCAL(3),
  // new self my_key mapping_function(my_value) map_1(my_left) map_1(my_right)
  var_new, 5, LOCAL(4), LOCAL(5), LOCAL(1), LOCAL(2), LOCAL(3), TAIL_CALL,
  POS(322, 3),
  POS(323, 19),
  POS(323, 46),
  POS(323, 61),
  POS(323, 3)
};

static TAB_NUM t_func_binary_node___map_2[] = {
  8, // locals
  1, // parameters
  LOCAL(4), // 325_21_self
  // self $my_key $my_value $my_left $my_right
  LOCAL(4), 0, 4, LOCAL(5), LOCAL(6), LOCAL(7), LOCAL(8),
  // mapping_function(my_key my_value) map_2(my_left) map_2(my_right)
  var_mapping_function, 2, LOCAL(5), LOCAL(6), 1, LOCAL(1),
  // map_2(my_left) map_2(my_right)
  var_map_2, 1, LOCAL(7), 1, LOCAL(2),
  // map_2(my_right)
  var_map_2, 1, LOCAL(8), 1, LOCAL(3),
  // new self my_key mapping_function(my_key my_value) map_2(my_left) map_2(my_right)
  var_new, 5, LOCAL(4), LOCAL(5), LOCAL(1), LOCAL(2), LOCAL(3), TAIL_CALL,
  POS(326, 3),
  POS(327, 19),
  POS(327, 53),
  POS(327, 68),
  POS(327, 3)
};

static TAB_NUM t_func_std_types__key_order_table___map[] = {
  3, // locals
  2, // parameters
  var_339_0_self,
  LOCAL(3), // 340_0_function
  // !mapping_function function
  LET, 1, LOCAL(3), 1, var_mapping_function,
  // parameter_count_of(function) == 2:
  var_parameter_count_of, 1, LOCAL(3), 1, LOCAL(1),
  // parameter_count_of(function) == 2:
  var_std__equal, 2, LOCAL(1), num_2, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_32, lambda_33, TAIL_CALL,
  POS(342, 3),
  POS(344, 5),
  POS(344, 5),
  POS(343, 3)
};

static TAB_NUM t_lambda_32[] = {
  1, // locals
  0, // parameters
  // contents_of
  var_contents_of, 1, var_339_0_self, 1, LOCAL(1),
  // map_2 &self.contents_of
  var_map_2, 1, LOCAL(1), 1, LOCAL(1),
  // self.contents_of
  LET, -1, var_339_0_self, var_contents_of, LOCAL(1), var_339_0_self,
  // -> self
  LET, 1, var_339_0_self, TAIL_CALL,
  POS(345, 19),
  POS(345, 7),
  POS(345, 14),
  POS(346, 7)
};

static TAB_NUM t_lambda_33[] = {
  1, // locals
  0, // parameters
  // contents_of
  var_contents_of, 1, var_339_0_self, 1, LOCAL(1),
  // map_1 &self.contents_of
  var_map_1, 1, LOCAL(1), 1, LOCAL(1),
  // self.contents_of
  LET, -1, var_339_0_self, var_contents_of, LOCAL(1), var_339_0_self,
  // -> self
  LET, 1, var_339_0_self, TAIL_CALL,
  POS(348, 19),
  POS(348, 7),
  POS(348, 14),
  POS(349, 7)
};

static TAB_NUM t_func_std_types__key_order_table___reduce[] = {
  2, // locals
  -3, // parameters
  MANDATORY_PARAMETER, LOCAL(2), // 366_0_self
  MANDATORY_PARAMETER, var_367_0_function,
  var_undefined, var_368_0_unit,
  // $contents contents_of(self)
  var_contents_of, 1, LOCAL(2), 1, var_370_1_contents,
  // is_an_empty_node
  var_is_an_empty_node, 1, var_370_1_contents, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_34, lambda_35, TAIL_CALL,
  POS(370, 3),
  POS(372, 14),
  POS(371, 3)
};

static TAB_NUM t_lambda_34[] = {
  0, // locals
  0, // parameters
  //  unit
  LET, 1, var_368_0_unit, TAIL_CALL,
  POS(373, 7)
};

static TAB_NUM t_lambda_35[] = {
  1, // locals
  0, // parameters
  // reduce(contents)
  func_reduce, 1, var_370_1_contents, 1, LOCAL(1),
  //  reduce(contents)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(374, 8),
  POS(374, 7)
};

static TAB_NUM t_func_reduce[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 376_10_node
  // node $_key $value $left $right
  LOCAL(2), 0, 4, LOCAL(1), var_377_12_value, var_377_19_left, var_377_25_right,
  // is_an_empty_node
  var_is_an_empty_node, 1, var_377_19_left, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), func_check_right, lambda_36, TAIL_CALL,
  POS(377, 5),
  POS(379, 12),
  POS(378, 5)
};

static TAB_NUM t_lambda_36[] = {
  1, // locals
  0, // parameters
  // reduce(left) value)
  func_reduce, 1, var_377_19_left, 1, LOCAL(1),
  // !value function(reduce(left) value)
  var_367_0_function, 2, LOCAL(1), var_377_12_value, 1, var_377_12_value,
  // check_right
  func_check_right, 0, TAIL_CALL,
  POS(382, 25),
  POS(382, 9),
  POS(383, 9)
};

static TAB_NUM t_func_check_right[] = {
  1, // locals
  0, // parameters
  // is_an_empty_node
  var_is_an_empty_node, 1, var_377_25_right, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_37, lambda_38, TAIL_CALL,
  POS(387, 15),
  POS(386, 7)
};

static TAB_NUM t_lambda_37[] = {
  0, // locals
  0, // parameters
  //  value
  LET, 1, var_377_12_value, TAIL_CALL,
  POS(388, 11)
};

static TAB_NUM t_lambda_38[] = {
  2, // locals
  0, // parameters
  // reduce(right))
  func_reduce, 1, var_377_25_right, 1, LOCAL(1),
  // function(value reduce(right))
  var_367_0_function, 2, var_377_12_value, LOCAL(1), 1, LOCAL(2),
  //  function(value reduce(right))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(389, 27),
  POS(389, 12),
  POS(389, 11)
};

static TAB_NUM t_func_std_types__key_order_table___map_reduce[] = {
  2, // locals
  -4, // parameters
  MANDATORY_PARAMETER, LOCAL(2), // 404_0_self
  MANDATORY_PARAMETER, var_405_0_map_function,
  var_append, var_406_0_reduce_function,
  var_undefined, var_407_0_unit,
  // $contents contents_of(self)
  var_contents_of, 1, LOCAL(2), 1, var_409_1_contents,
  // is_an_empty_node
  var_is_an_empty_node, 1, var_409_1_contents, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_39, lambda_40, TAIL_CALL,
  POS(409, 3),
  POS(411, 14),
  POS(410, 3)
};

static TAB_NUM t_lambda_39[] = {
  0, // locals
  0, // parameters
  //  unit
  LET, 1, var_407_0_unit, TAIL_CALL,
  POS(412, 7)
};

static TAB_NUM t_lambda_40[] = {
  2, // locals
  0, // parameters
  // parameter_count_of(map_function) == 2
  var_parameter_count_of, 1, var_405_0_map_function, 1, LOCAL(1),
  // parameter_count_of(map_function) == 2
  var_std__equal, 2, LOCAL(1), num_2, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_41, lambda_42, TAIL_CALL,
  POS(415, 9),
  POS(415, 9),
  POS(414, 7)
};

static TAB_NUM t_lambda_41[] = {
  1, // locals
  0, // parameters
  // map_reduce_2(contents)
  func_map_reduce_2, 1, var_409_1_contents, 1, LOCAL(1),
  //  map_reduce_2(contents)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(416, 12),
  POS(416, 11)
};

static TAB_NUM t_lambda_42[] = {
  1, // locals
  0, // parameters
  // map_reduce_1(contents)
  func_map_reduce_1, 1, var_409_1_contents, 1, LOCAL(1),
  //  map_reduce_1(contents)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(417, 12),
  POS(417, 11)
};

static TAB_NUM t_func_map_reduce_1[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 419_16_node
  // node $_key $value $left $right
  LOCAL(2), 0, 4, LOCAL(1), var_420_12_value, var_420_19_left, var_420_25_right,
  // map_function &value
  var_405_0_map_function, 1, var_420_12_value, 1, var_420_12_value,
  // is_an_empty_node
  var_is_an_empty_node, 1, var_420_19_left, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), func_2_check_right, lambda_43, TAIL_CALL,
  POS(420, 5),
  POS(421, 5),
  POS(423, 12),
  POS(422, 5)
};

static TAB_NUM t_lambda_43[] = {
  1, // locals
  0, // parameters
  // map_reduce_1(left) value)
  func_map_reduce_1, 1, var_420_19_left, 1, LOCAL(1),
  // !value reduce_function(map_reduce_1(left) value)
  var_406_0_reduce_function, 2, LOCAL(1), var_420_12_value, 1, var_420_12_value,
  // check_right
  func_2_check_right, 0, TAIL_CALL,
  POS(426, 32),
  POS(426, 9),
  POS(427, 9)
};

static TAB_NUM t_func_2_check_right[] = {
  1, // locals
  0, // parameters
  // is_an_empty_node
  var_is_an_empty_node, 1, var_420_25_right, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_44, lambda_45, TAIL_CALL,
  POS(431, 15),
  POS(430, 7)
};

static TAB_NUM t_lambda_44[] = {
  0, // locals
  0, // parameters
  //  value
  LET, 1, var_420_12_value, TAIL_CALL,
  POS(432, 11)
};

static TAB_NUM t_lambda_45[] = {
  2, // locals
  0, // parameters
  // map_reduce_1(right))
  func_map_reduce_1, 1, var_420_25_right, 1, LOCAL(1),
  // reduce_function(value map_reduce_1(right))
  var_406_0_reduce_function, 2, var_420_12_value, LOCAL(1), 1, LOCAL(2),
  //  reduce_function(value map_reduce_1(right))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(433, 34),
  POS(433, 12),
  POS(433, 11)
};

static TAB_NUM t_func_map_reduce_2[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 435_16_node
  // node $key $value $left $right
  LOCAL(2), 0, 4, LOCAL(3), var_436_11_value, var_436_18_left, var_436_24_right,
  // map_function key &value
  var_405_0_map_function, 2, LOCAL(3), var_436_11_value, 1, var_436_11_value,
  // is_an_empty_node
  var_is_an_empty_node, 1, var_436_18_left, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), func_3_check_right, lambda_46, TAIL_CALL,
  POS(436, 5),
  POS(437, 5),
  POS(439, 12),
  POS(438, 5)
};

static TAB_NUM t_lambda_46[] = {
  1, // locals
  0, // parameters
  // map_reduce_2(left) value)
  func_map_reduce_2, 1, var_436_18_left, 1, LOCAL(1),
  // !value reduce_function(map_reduce_2(left) value)
  var_406_0_reduce_function, 2, LOCAL(1), var_436_11_value, 1, var_436_11_value,
  // check_right
  func_3_check_right, 0, TAIL_CALL,
  POS(442, 32),
  POS(442, 9),
  POS(443, 9)
};

static TAB_NUM t_func_3_check_right[] = {
  1, // locals
  0, // parameters
  // is_an_empty_node
  var_is_an_empty_node, 1, var_436_24_right, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_47, lambda_48, TAIL_CALL,
  POS(447, 15),
  POS(446, 7)
};

static TAB_NUM t_lambda_47[] = {
  0, // locals
  0, // parameters
  //  value
  LET, 1, var_436_11_value, TAIL_CALL,
  POS(448, 11)
};

static TAB_NUM t_lambda_48[] = {
  2, // locals
  0, // parameters
  // map_reduce_2(right))
  func_map_reduce_2, 1, var_436_24_right, 1, LOCAL(1),
  // reduce_function(value map_reduce_2(right))
  var_406_0_reduce_function, 2, var_436_11_value, LOCAL(1), 1, LOCAL(2),
  //  reduce_function(value map_reduce_2(right))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(449, 34),
  POS(449, 12),
  POS(449, 11)
};

static TAB_NUM t_func_empty_node___dump_string[] = {
  1, // locals
  3, // parameters
  LOCAL(1),
  LOCAL(1),
  LOCAL(1),
  // -> ""
  LET, 1, string_1, TAIL_CALL,
  POS(454, 50)
};

static TAB_NUM t_func_binary_node___dump_string[] = {
  9, // locals
  3, // parameters
  LOCAL(3), // 456_27_self
  var_456_32_prefix,
  LOCAL(4), // 456_39_marker
  // self $key $value $left $right
  LOCAL(3), 0, 4, var_457_6_key, LOCAL(5), LOCAL(6), LOCAL(7),
  // length_of(key)))
  var_length_of, 1, var_457_6_key, 1, LOCAL(1),
  // spaces(length_of(key)))
  var_spaces, 1, LOCAL(1), 1, LOCAL(2),
  // $new_prefix append(prefix spaces(length_of(key)))
  var_append, 2, var_456_32_prefix, LOCAL(2), 1, var_458_1_new_prefix,
  // is_empty
  var_is_empty, 1, var_456_32_prefix, 1, LOCAL(1),
  // $empty_prefix
  var_if, 3, LOCAL(1), lambda_49, lambda_50, 1, var_459_1_empty_prefix,
  // push &new_prefix '|'
  var_push, 2, var_458_1_new_prefix, chr_124, 1, var_458_1_new_prefix,
  // push &empty_prefix '|'
  var_push, 2, var_459_1_empty_prefix, chr_124, 1, var_459_1_empty_prefix,
  // marker == '/'
  var_std__equal, 2, LOCAL(4), chr_47, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_51, lambda_52, 1, LOCAL(2),
  // $top
  var_dump_string, 3, LOCAL(6), LOCAL(2), chr_47, 1, LOCAL(8),
  // marker == '\'
  var_std__equal, 2, LOCAL(4), chr_92, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_53, lambda_54, 1, LOCAL(2),
  // $bottom
  var_dump_string, 3, LOCAL(7), LOCAL(2), chr_92, 1, LOCAL(9),
  // is_empty
  var_is_empty, 1, var_456_32_prefix, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_55, lambda_56, 1, LOCAL(2),
  // string
  var_string, 8, LOCAL(8), LOCAL(2), LOCAL(4), var_457_6_key, chr_40, LOCAL(5), string_2, LOCAL(9), TAIL_CALL,
  POS(457, 3),
  POS(458, 36),
  POS(458, 29),
  POS(458, 3),
  POS(461, 14),
  POS(459, 3),
  POS(464, 3),
  POS(465, 3),
  POS(470, 9),
  POS(469, 7),
  POS(466, 3),
  POS(478, 9),
  POS(477, 7),
  POS(474, 3),
  POS(485, 14),
  POS(484, 5),
  POS(482, 3)
};

static TAB_NUM t_lambda_49[] = {
  2, // locals
  0, // parameters
  // length_of(key))
  var_length_of, 1, var_457_6_key, 1, LOCAL(1),
  // spaces(length_of(key))
  var_spaces, 1, LOCAL(1), 1, LOCAL(2),
  //  spaces(length_of(key))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(462, 17),
  POS(462, 10),
  POS(462, 9)
};

static TAB_NUM t_lambda_50[] = {
  5, // locals
  0, // parameters
  // range(prefix 1 -2) spaces(length_of(key)+1))
  var_range, 3, var_456_32_prefix, num_1, minus_num_2, 1, LOCAL(1),
  // length_of(key)+1))
  var_length_of, 1, var_457_6_key, 1, LOCAL(2),
  // length_of(key)+1))
  var_std__plus, 2, LOCAL(2), num_1, 1, LOCAL(3),
  // spaces(length_of(key)+1))
  var_spaces, 1, LOCAL(3), 1, LOCAL(4),
  // append(range(prefix 1 -2) spaces(length_of(key)+1))
  var_append, 2, LOCAL(1), LOCAL(4), 1, LOCAL(5),
  //  append(range(prefix 1 -2) spaces(length_of(key)+1))
  LET, 1, LOCAL(5), TAIL_CALL,
  POS(463, 17),
  POS(463, 43),
  POS(463, 43),
  POS(463, 36),
  POS(463, 10),
  POS(463, 9)
};

static TAB_NUM t_lambda_51[] = {
  0, // locals
  0, // parameters
  //  empty_prefix
  LET, 1, var_459_1_empty_prefix, TAIL_CALL,
  POS(471, 11)
};

static TAB_NUM t_lambda_52[] = {
  0, // locals
  0, // parameters
  //  new_prefix
  LET, 1, var_458_1_new_prefix, TAIL_CALL,
  POS(472, 11)
};

static TAB_NUM t_lambda_53[] = {
  0, // locals
  0, // parameters
  //  empty_prefix
  LET, 1, var_459_1_empty_prefix, TAIL_CALL,
  POS(479, 11)
};

static TAB_NUM t_lambda_54[] = {
  0, // locals
  0, // parameters
  //  new_prefix
  LET, 1, var_458_1_new_prefix, TAIL_CALL,
  POS(480, 11)
};

static TAB_NUM t_lambda_55[] = {
  0, // locals
  0, // parameters
  //  ""
  LET, 1, string_1, TAIL_CALL,
  POS(486, 9)
};

static TAB_NUM t_lambda_56[] = {
  1, // locals
  0, // parameters
  // range(prefix 1 -2)
  var_range, 3, var_456_32_prefix, num_1, minus_num_2, 1, LOCAL(1),
  //  range(prefix 1 -2)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(487, 10),
  POS(487, 9)
};

static TAB_NUM t_func_std_types__key_order_table___dump_string[] = {
  4, // locals
  -2, // parameters
  MANDATORY_PARAMETER, LOCAL(3), // 493_0_self
  string_1, LOCAL(4), // 494_0_prefix
  // contents_of(self) prefix "")
  var_contents_of, 1, LOCAL(3), 1, LOCAL(1),
  // dump_string(contents_of(self) prefix "")
  var_dump_string, 3, LOCAL(1), LOCAL(4), string_1, 1, LOCAL(2),
  // -> dump_string(contents_of(self) prefix "")
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(496, 18),
  POS(496, 6),
  POS(496, 3)
};

static TAB_NUM t_func_empty_node___merge[] = {
  2, // locals
  2, // parameters
  LOCAL(1),
  LOCAL(2), // 501_26_right
  // -> right 0
  LET, 2, LOCAL(2), num_0, TAIL_CALL,
  POS(503, 3)
};

static TAB_NUM t_func_binary_node___merge[] = {
  1, // locals
  2, // parameters
  var_505_21_left,
  var_505_26_right,
  // is_an_empty_node
  var_is_an_empty_node, 1, var_505_26_right, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_57, lambda_58, TAIL_CALL,
  POS(509, 11),
  POS(508, 3)
};

static TAB_NUM t_lambda_57[] = {
  0, // locals
  0, // parameters
  //  left 0
  LET, 2, var_505_21_left, num_0, TAIL_CALL,
  POS(510, 7)
};

static TAB_NUM t_lambda_58[] = {
  0, // locals
  0, // parameters
  // left $left_key $left_value $left_left $left_right
  var_505_21_left, 0, 4, var_512_6_left_key, var_512_16_left_value, var_512_28_left_left, var_512_39_left_right,
  // right $right_key $right_value $right_left $right_right
  var_505_26_right, 0, 4, var_513_7_right_key, var_513_18_right_value, var_513_31_right_left, var_513_43_right_right,
  // $total_removed 0
  LET, 1, num_0, 1, var_514_1_total_removed,
  // $removed undefined
  LET, 1, var_undefined, 1, var_515_1_removed,
  // $did_insert undefined
  LET, 1, var_undefined, 1, var_516_1_did_insert,
  // loop:
  var_loop, 1, lambda_loop, TAIL_CALL,
  POS(512, 7),
  POS(513, 7),
  POS(514, 7),
  POS(515, 7),
  POS(516, 7),
  POS(517, 7)
};

static TAB_NUM t_lambda_loop[] = {
  1, // locals
  0, // parameters
  // right_key < left_key:
  var_std__less, 2, var_513_7_right_key, var_512_6_left_key, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_59, lambda_61, TAIL_CALL,
  POS(519, 11),
  POS(518, 9)
};

static TAB_NUM t_lambda_59[] = {
  0, // locals
  0, // parameters
  // merge &left_left right_left !removed
  var_merge, 2, var_512_28_left_left, var_513_31_right_left, 2, var_512_28_left_left, var_515_1_removed,
  // insert &left_left right_key right_value !did_insert
  var_insert, 3, var_512_28_left_left, var_513_7_right_key, var_513_18_right_value, 2, var_512_28_left_left, var_516_1_did_insert,
  // update_removed:
  func_update_removed, 1, lambda_update_removed, TAIL_CALL,
  POS(520, 13),
  POS(521, 13),
  POS(522, 13)
};

static TAB_NUM t_lambda_update_removed[] = {
  1, // locals
  0, // parameters
  // is_an_empty_node
  var_is_an_empty_node, 1, var_513_43_right_right, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_64, lambda_60, TAIL_CALL,
  POS(524, 29),
  POS(523, 15)
};

static TAB_NUM t_lambda_60[] = {
  0, // locals
  0, // parameters
  // right_right !right_key !right_value !right_left !right_right
  var_513_43_right_right, 0, 4, var_513_7_right_key, var_513_18_right_value, var_513_31_right_left, var_513_43_right_right,
  // next
  var_next, 0, TAIL_CALL,
  POS(527, 19),
  POS(528, 19)
};

static TAB_NUM t_lambda_61[] = {
  0, // locals
  0, // parameters
  // merge &left_right right_right !removed
  var_merge, 2, var_512_39_left_right, var_513_43_right_right, 2, var_512_39_left_right, var_515_1_removed,
  // insert &left_right right_key right_value !did_insert
  var_insert, 3, var_512_39_left_right, var_513_7_right_key, var_513_18_right_value, 2, var_512_39_left_right, var_516_1_did_insert,
  // update_removed:
  func_update_removed, 1, lambda_2_update_removed, TAIL_CALL,
  POS(530, 13),
  POS(531, 13),
  POS(532, 13)
};

static TAB_NUM t_lambda_2_update_removed[] = {
  1, // locals
  0, // parameters
  // is_an_empty_node
  var_is_an_empty_node, 1, var_513_31_right_left, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_64, lambda_62, TAIL_CALL,
  POS(534, 28),
  POS(533, 15)
};

static TAB_NUM t_lambda_62[] = {
  0, // locals
  0, // parameters
  // right_left !right_key !right_value !right_left !right_right
  var_513_31_right_left, 0, 4, var_513_7_right_key, var_513_18_right_value, var_513_31_right_left, var_513_43_right_right,
  // next
  var_next, 0, TAIL_CALL,
  POS(537, 19),
  POS(538, 19)
};

static TAB_NUM t_func_update_removed[] = {
  0, // locals
  1, // parameters
  var_540_18_cont,
  // plus &total_removed removed
  var_plus, 2, var_514_1_total_removed, var_515_1_removed, 1, var_514_1_total_removed,
  // if
  var_if, 3, var_516_1_did_insert, var_540_18_cont, lambda_63, TAIL_CALL,
  POS(541, 9),
  POS(542, 9)
};

static TAB_NUM t_lambda_63[] = {
  0, // locals
  0, // parameters
  // plus &total_removed 1
  var_plus, 2, var_514_1_total_removed, num_1, 1, var_514_1_total_removed,
  // cont
  var_540_18_cont, 0, TAIL_CALL,
  POS(546, 13),
  POS(547, 13)
};

static TAB_NUM t_lambda_64[] = {
  1, // locals
  0, // parameters
  // new(binary_node left_key left_value left_left left_right)
  var_new, 5, var_binary_node, var_512_6_left_key, var_512_16_left_value, var_512_28_left_left, var_512_39_left_right, 1, LOCAL(1),
  // 
  LET, 2, LOCAL(1), var_514_1_total_removed, TAIL_CALL,
  POS(551, 11),
  POS(550, 11)
};

static TAB_NUM t_func_std_types__key_order_table___merge[] = {
  9, // locals
  2, // parameters
  LOCAL(6), // 561_0_self
  LOCAL(7), // 562_0_other
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
  POS(564, 34),
  POS(564, 52),
  POS(564, 3),
  POS(567, 18),
  POS(567, 34),
  POS(567, 18),
  POS(567, 18),
  POS(566, 5),
  POS(565, 3)
};

static TAB_NUM t_func_std__key_order_table[] = {
  1, // locals
  -1, // parameters
  REST_PARAMETER, LOCAL(1), // 574_0_pairs
  // $table empty_key_order_table
  LET, 1, var_empty_key_order_table, 1, var_576_1_table,
  // for_each pairs
  var_for_each, 3, LOCAL(1), lambda_65, lambda_66, TAIL_CALL,
  POS(576, 3),
  POS(577, 3)
};

static TAB_NUM t_lambda_65[] = {
  3, // locals
  1, // parameters
  LOCAL(1), // 578_3_pair
  // pair $key $value
  LOCAL(1), 0, 2, LOCAL(2), LOCAL(3),
  // table(key) value
  var_576_1_table, 2, LOCAL(2), LOCAL(3), 1, var_576_1_table,
  // next
  var_next, 0, TAIL_CALL,
  POS(579, 7),
  POS(580, 8),
  POS(581, 7)
};

static TAB_NUM t_lambda_66[] = {
  0, // locals
  0, // parameters
  //  table
  LET, 1, var_576_1_table, TAIL_CALL,
  POS(582, 7)
};

static int tuple_71_0_arguments[] = {
  -var_undefined, -var_undefined, -var_undefined, -var_undefined
};

static FUNKY_CONSTANT constants_table[] = {
  {FLT_POSITIVE_INT64, 0, {.value = 0}},
  {FLT_TUPLE, 4, {.arguments = tuple_71_0_arguments}},
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
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_break}},
  {FLT_POSITIVE_INT64, 0, {.value = 2}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_30}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_next}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_31}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2_next}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_empty_node___map_1}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_empty_node___map_2}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_binary_node___map_1}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_binary_node___map_2}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__key_order_table___map}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_32}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_33}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__key_order_table___reduce}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_34}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_35}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_reduce}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_36}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_check_right}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_37}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_38}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__key_order_table___map_reduce}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_39}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_40}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_41}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_42}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_map_reduce_1}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_43}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_2_check_right}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_44}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_45}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_map_reduce_2}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_46}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_3_check_right}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_47}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_48}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_empty_node___dump_string}},
  {FLT_STRING_8, 0, {.str_8 = ""}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_binary_node___dump_string}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_49}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_50}},
  {FLT_NEGATIVE_INT64, 0, {.value = 2}},
  {FLT_CHARACTER, 0, {.value = 124}},
  {FLT_CHARACTER, 0, {.value = 47}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_51}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_52}},
  {FLT_CHARACTER, 0, {.value = 92}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_53}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_54}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_55}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_56}},
  {FLT_CHARACTER, 0, {.value = 40}},
  {FLT_STRING_8, 2, {.str_8 = ")\012"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__key_order_table___dump_string}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_empty_node___merge}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_binary_node___merge}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_57}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_58}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_59}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_update_removed}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_60}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_61}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2_update_removed}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_62}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_update_removed}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_63}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_64}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__key_order_table___merge}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__key_order_table}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_65}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_66}},
  {FLT_STRING_8, 15, {.str_8 = "key_order_table"}}
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
  {var_dump_string, -func_std_types__key_order_table___dump_string},
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
  {var_dump_string, -func_empty_node___dump_string},
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
  {var_dump_string, -func_binary_node___dump_string},
  {var_merge, -func_binary_node___merge}
};

static ATTRIBUTE_DEFINITION finish__attributes[] = {
  {var_for_each_1_call, -func_finish___for_each_1_call},
  {var_for_each_2_call, -func_finish___for_each_2_call}
};

static FUNKY_VARIABLE variables_table[] = {
  {
    FOT_POLYMORPHIC, 0, 0,
    "dump_string\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "assign\000std", NULL,
    {.position = POS(23, 1)}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "contents_of\000", NULL,
    {.has_a_setter = false}
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
    {.position = POS(36, 1)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "is_a_key_order_table\000", NULL,
    {.position = POS(36, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "false\000", NULL,
    {.position = POS(36, 41)}
  },
  {
    FOT_DERIVED, 0, 12,
    "key_order_table\000std_types", std_types__key_order_table__attributes,
    {"table\000std_types"}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "true\000", NULL,
    {.position = POS(37, 50)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "table\000std_types", NULL,
    {.position = POS(39, 29)}
  },
  {
    FOT_DERIVED, 0, 10,
    "empty_node\000", empty_node__attributes,
    {"object\000std_types"}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "length_of\000", NULL,
    {.position = POS(55, 29)}
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
    FOT_INITIALIZED, 0, 13,
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
    "is_defined\000", NULL,
    {.position = POS(88, 15)}
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
    "113_14_my_value\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "113_24_my_left\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "113_33_my_right\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "less\000std", NULL,
    {.position = POS(119, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "new\000", NULL,
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
    "129_31_value\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "130_6_my_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "130_14_my_value\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "130_24_my_left\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "130_33_my_right\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "147_15_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "148_6_my_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "148_14_my_value\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "148_24_my_left\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "148_33_my_right\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "158_22_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "158_27_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "159_6_my_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "159_14_my_value\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "159_24_my_left\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "159_33_my_right\000", NULL
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
    {.position = POS(203, 34)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "push\000", NULL,
    {.position = POS(214, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "body\000basic_loops", NULL,
    {.position = POS(224, 3)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "for_each\000", NULL,
    {.position = POS(238, 29)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "270_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "272_0_finally\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "next\000", NULL,
    {.position = POS(272, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "finally\000basic_loops", NULL,
    {.position = POS(280, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "list\000", NULL,
    {.position = POS(282, 22)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "saved_context_of\000basic_loops", NULL,
    {.position = POS(288, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "parameter_count_of\000", NULL,
    {.position = POS(296, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "pop\000", NULL,
    {.position = POS(298, 9)}
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
    {.position = POS(329, 29)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "339_0_self\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "reduce\000", NULL,
    {.position = POS(354, 29)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "367_0_function\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "368_0_unit\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "370_1_contents\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "377_12_value\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "377_19_left\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "377_25_right\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "map_reduce\000", NULL,
    {.position = POS(394, 29)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "405_0_map_function\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "406_0_reduce_function\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "append\000", NULL,
    {.position = POS(406, 23)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "407_0_unit\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "409_1_contents\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "420_12_value\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "420_19_left\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "420_25_right\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "436_11_value\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "436_18_left\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "436_24_right\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "dump_string\000", NULL,
    {.position = POS(454, 13)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "456_32_prefix\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "457_6_key\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "spaces\000", NULL,
    {.position = POS(458, 29)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "458_1_new_prefix\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_empty\000", NULL,
    {.position = POS(461, 14)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "range\000", NULL,
    {.position = POS(463, 17)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "459_1_empty_prefix\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "string\000", NULL,
    {.position = POS(482, 3)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "merge\000", NULL,
    {.position = POS(501, 13)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "505_21_left\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "505_26_right\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "512_6_left_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "512_16_left_value\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "512_28_left_left\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "512_39_left_right\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "513_7_right_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "513_18_right_value\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "513_31_right_left\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "513_43_right_right\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "514_1_total_removed\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "515_1_removed\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "516_1_did_insert\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "loop\000", NULL,
    {.position = POS(517, 7)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "540_18_cont\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000", NULL,
    {.position = POS(541, 9)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "key_order_table\000std", NULL,
    {.const_idx = -func_std__key_order_table}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "576_1_table\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_key_order_table\000", NULL,
    {.position = POS(576, 10)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "serialization_tag_of\000", NULL,
    {.position = POS(586, 29)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "empty_collection_of\000", NULL,
    {.position = POS(587, 29)}
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
  .feature_flags = FEAT_POSITIONS,
  .marker = 0,
  0, // number of required modules
  0, // number of defined namespaces
  1, // number of used namespaces
  127, // number of constants
  129, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  constants_table,
  variables_table,
};
