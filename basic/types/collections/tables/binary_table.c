#include <stddef.h>
#include <stdint.h>

#include "runtime/common.h"
#include "runtime/builtins.h"
#include "runtime/fko.h"
#include "runtime/memory.h"

enum {
  tuple_71_0 = -1,
  num_0 = -2,
  tuple_74_0 = -3,
  uni_NONE = -4,
  func_std_types__binary_table = -5,
  lambda_1 = -6,
  lambda_2 = -7,
  lambda_value_is_defined = -8,
  lambda_3 = -9,
  lambda_4 = -10,
  num_1 = -11,
  lambda_5 = -12,
  lambda_6 = -13,
  lambda_7 = -14,
  func_basic_collections__empty_binary_node___retrieve = -15,
  func_basic_collections__retrieve_method = -16,
  lambda_8 = -17,
  lambda_9 = -18,
  lambda_10 = -19,
  lambda_11 = -20,
  func_basic_collections__empty_binary_node___insert = -21,
  func_node___insert = -22,
  lambda_12 = -23,
  lambda_13 = -24,
  lambda_14 = -25,
  lambda_15 = -26,
  lambda_16 = -27,
  func_fetch_first = -28,
  lambda_17 = -29,
  lambda_18 = -30,
  func_basic_collections__empty_binary_node___delete = -31,
  func_node___delete = -32,
  lambda_19 = -33,
  lambda_20 = -34,
  lambda_21 = -35,
  lambda_22 = -36,
  lambda_23 = -37,
  lambda_24 = -38,
  lambda_25 = -39,
  lambda_26 = -40,
  lambda_27 = -41,
  lambda_28 = -42,
  lambda_29 = -43,
  lambda_30 = -44,
  func_finish___for_each_1_call = -45,
  func_finish___for_each_2_call = -46,
  func_empty_binary_node___for_each_1_left = -47,
  minus_num_1 = -48,
  func_empty_binary_node___for_each_2_left = -49,
  func_basic_collections__for_each_1_left_method = -50,
  func_basic_collections__for_each_2_left_method = -51,
  func_basic_collections__for_each_1_call_method = -52,
  func_basic_collections__for_each_2_call_method = -53,
  func_basic_collections__for_each_1_right_method = -54,
  func_basic_collections__for_each_2_right_method = -55,
  func_std_types__binary_table___for_each = -56,
  lambda_break = -57,
  num_2 = -58,
  lambda_31 = -59,
  lambda_next = -60,
  lambda_32 = -61,
  lambda_2_next = -62,
  func_basic_collections__empty_binary_node___map_1 = -63,
  func_basic_collections__empty_binary_node___map_2 = -64,
  func_basic_collections__map_1_method = -65,
  func_basic_collections__map_2_method = -66,
  func_std_types__binary_table___map = -67,
  lambda_33 = -68,
  lambda_34 = -69,
  func_std_types__binary_table___reduce = -70,
  lambda_35 = -71,
  lambda_36 = -72,
  func_reduce = -73,
  lambda_37 = -74,
  func_check_right = -75,
  lambda_38 = -76,
  lambda_39 = -77,
  func_std_types__binary_table___map_reduce = -78,
  lambda_40 = -79,
  lambda_41 = -80,
  lambda_42 = -81,
  lambda_43 = -82,
  func_map_reduce_1 = -83,
  lambda_44 = -84,
  func_2_check_right = -85,
  lambda_45 = -86,
  lambda_46 = -87,
  func_map_reduce_2 = -88,
  lambda_47 = -89,
  func_3_check_right = -90,
  lambda_48 = -91,
  lambda_49 = -92,
  func_basic_collections__empty_binary_node___validate = -93,
  func_node___validate = -94,
  lambda_50 = -95,
  lambda_51 = -96,
  lambda_52 = -97,
  lambda_53 = -98,
  chr_91 = -99,
  chr_93 = -100,
  string_1 = -101,
  str__failed = -102,
  func_std_types__binary_table___validate = -103,
  lambda_54 = -104,
  str_Table_contains = -105,
  str__entries_stored = -106,
  string_2 = -107
};

enum {
  var__START = FIRST_VAR-1,
  var_std__validate, // attribute
  var_std__assign, // extern
  var_basic_collections__contents_of, // attribute
  var_basic_collections__retrieve, // attribute
  var_basic_collections__for_each_1_left, // attribute
  var_basic_collections__for_each_1_call, // attribute
  var_basic_collections__for_each_1_right, // attribute
  var_basic_collections__for_each_2_left, // attribute
  var_basic_collections__for_each_2_call, // attribute
  var_basic_collections__for_each_2_right, // attribute
  var_basic_collections__map_1, // attribute
  var_basic_collections__map_2, // attribute
  var_basic_collections__is_an_empty_node, // attribute
  var_basic_collections__empty_binary_node, // initialized compound
  var_is_an_empty_node, // extern polymorphic
  var_true, // extern
  var_std_types__binary_table, // derived
  var_length_of, // extern polymorphic
  var_insert, // attribute
  var_delete, // attribute
  var_std__is_a_binary_table, // attribute
  var_std_types__object, // extern
  var_is_a_binary_table, // extern polymorphic
  var_false, // extern
  var_node, // initialized compound
  var_std_types__table, // extern
  var_contents_of, // extern polymorphic
  var_std__empty_binary_table, // derived
  var_undefined, // extern
  var_tuple, // extern
  var_109_0_myself, // dynamic
  var_110_0_key, // dynamic
  var_111_0_value, // dynamic
  var_113_1_contents, // dynamic
  var_std__equal, // extern
  var_retrieve, // extern polymorphic
  var_is_defined, // extern
  var_std__plus, // extern
  var_if_not, // extern
  var_std__minus, // extern
  var_if, // extern
  var_basic_collections__retrieve_method, // initialized
  var_143_43_key, // dynamic
  var_144_6_left, // dynamic
  var_144_12_right, // dynamic
  var_144_19_my_key, // dynamic
  var_144_27_my_value, // dynamic
  var_std__less, // extern
  var_retrieve_method, // extern
  var_new, // extern
  var_168_15_self, // dynamic
  var_168_20_key, // dynamic
  var_168_24_value, // dynamic
  var_169_6_left, // dynamic
  var_169_12_right, // dynamic
  var_169_19_my_key, // dynamic
  var_169_27_my_value, // dynamic
  var_170_1_did_insert, // dynamic
  var_190_15_self, // dynamic
  var_191_6_left, // dynamic
  var_191_12_right, // dynamic
  var_191_19_my_key, // dynamic
  var_191_27_my_value, // dynamic
  var_201_15_self, // dynamic
  var_201_20_key, // dynamic
  var_202_6_left, // dynamic
  var_202_12_right, // dynamic
  var_202_19_my_key, // dynamic
  var_202_27_my_value, // dynamic
  var_finish, // derived
  var_for_each_1_call, // extern polymorphic
  var_break, // extern
  var_for_each_2_call, // extern polymorphic
  var_empty_binary_node, // extern
  var_for_each_1_left, // extern polymorphic
  var_basic_loops__todo, // extern
  var_for_each_2_left, // extern polymorphic
  var_basic_collections__for_each_1_left_method, // initialized
  var_push, // extern
  var_basic_collections__for_each_2_left_method, // initialized
  var_basic_collections__for_each_1_call_method, // initialized
  var_basic_loops__body, // extern
  var_basic_collections__for_each_2_call_method, // initialized
  var_basic_collections__for_each_1_right_method, // initialized
  var_basic_collections__for_each_2_right_method, // initialized
  var_for_each_1_left_method, // extern
  var_for_each_2_left_method, // extern
  var_for_each_1_call_method, // extern
  var_for_each_2_call_method, // extern
  var_for_each_1_right, // extern polymorphic
  var_for_each_1_right_method, // extern
  var_for_each_2_right, // extern polymorphic
  var_for_each_2_right_method, // extern
  var_for_each, // extern polymorphic
  var_311_0_self, // dynamic
  var_313_0_finally, // dynamic
  var_next, // extern
  var_basic_loops__finally, // extern
  var_list, // extern
  var_basic_loops__saved_context_of, // extern polymorphic
  var_parameter_count_of, // extern
  var_pop, // extern
  var_mapping_function, // derived
  var_map_1, // extern polymorphic
  var_map_2, // extern polymorphic
  var_basic_collections__map_1_method, // initialized
  var_basic_collections__map_2_method, // initialized
  var_map_1_method, // extern
  var_map_2_method, // extern
  var_map, // extern polymorphic
  var_380_0_self, // dynamic
  var_reduce, // extern polymorphic
  var_409_0_function, // dynamic
  var_410_0_unit, // dynamic
  var_412_1_contents, // dynamic
  var_419_12_left, // dynamic
  var_419_18_right, // dynamic
  var_419_34_my_value, // dynamic
  var_map_reduce, // extern polymorphic
  var_447_0_map_function, // dynamic
  var_448_0_reduce_function, // dynamic
  var_append, // extern
  var_449_0_unit, // dynamic
  var_451_1_contents, // dynamic
  var_462_12_left, // dynamic
  var_462_18_right, // dynamic
  var_462_34_my_value, // dynamic
  var_478_12_left, // dynamic
  var_478_18_right, // dynamic
  var_478_33_my_value, // dynamic
  var_validate, // extern polymorphic
  var_498_22_low, // dynamic
  var_498_26_high, // dynamic
  var_499_19_key, // dynamic
  var_std__and, // extern
  var_std__or, // extern
  var_default_value, // extern
  var_std__string, // extern
  var_debug_write, // extern
  var_debug_exit, // extern
  var_pass, // extern
  var_512_1_real_length, // dynamic
  var_513_1_stored_length, // dynamic
  var_std__not, // extern
  var__END
};


static TAB_NUM t_func_std_types__binary_table[] = {
  1, // locals
  -3, // parameters
  MYSELF_PARAMETER, var_109_0_myself,
  MANDATORY_PARAMETER, var_110_0_key,
  uni_NONE, var_111_0_value,
  // $contents contents_of(myself)
  var_contents_of, 1, var_109_0_myself, 1, var_113_1_contents,
  // NONE == value
  var_std__equal, 2, uni_NONE, var_111_0_value, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1, lambda_2, TAIL_CALL,
  POS(113, 3),
  POS(115, 5),
  POS(114, 3)
};

static TAB_NUM t_lambda_1[] = {
  1, // locals
  0, // parameters
  // retrieve(contents key)
  var_retrieve, 2, var_113_1_contents, var_110_0_key, 1, LOCAL(1),
  //  retrieve(contents key)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(116, 8),
  POS(116, 7)
};

static TAB_NUM t_lambda_2[] = {
  1, // locals
  0, // parameters
  // is_defined:
  var_is_defined, 1, var_111_0_value, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_value_is_defined, lambda_5, TAIL_CALL,
  POS(119, 15),
  POS(118, 7)
};

static TAB_NUM t_lambda_value_is_defined[] = {
  1, // locals
  0, // parameters
  // insert &contents $did_insert key value
  var_insert, 3, var_113_1_contents, var_110_0_key, var_111_0_value, 2, var_113_1_contents, LOCAL(1),
  // if_not
  var_if_not, 3, LOCAL(1), lambda_3, lambda_4, TAIL_CALL,
  POS(120, 11),
  POS(121, 11)
};

static TAB_NUM t_lambda_3[] = {
  1, // locals
  0, // parameters
  // .contents_of contents)
  LET, -1, var_109_0_myself, var_contents_of, var_113_1_contents, LOCAL(1),
  //  myself(.contents_of contents)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(123, 23),
  POS(123, 15)
};

static TAB_NUM t_lambda_4[] = {
  3, // locals
  0, // parameters
  // length_of(myself)+1
  var_length_of, 1, var_109_0_myself, 1, LOCAL(1),
  // length_of(myself)+1
  var_std__plus, 2, LOCAL(1), num_1, 1, LOCAL(2),
  // myself
  LET, -2, var_109_0_myself, var_contents_of, var_113_1_contents, var_length_of, LOCAL(2), LOCAL(3),
  // 
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(127, 28),
  POS(127, 28),
  POS(125, 15),
  POS(124, 15)
};

static TAB_NUM t_lambda_5[] = {
  1, // locals
  0, // parameters
  // delete &contents $did_delete key
  var_delete, 2, var_113_1_contents, var_110_0_key, 2, var_113_1_contents, LOCAL(1),
  // if_not
  var_if_not, 3, LOCAL(1), lambda_6, lambda_7, TAIL_CALL,
  POS(129, 11),
  POS(130, 11)
};

static TAB_NUM t_lambda_6[] = {
  0, // locals
  0, // parameters
  //  myself
  LET, 1, var_109_0_myself, TAIL_CALL,
  POS(132, 15)
};

static TAB_NUM t_lambda_7[] = {
  3, // locals
  0, // parameters
  // length_of(myself)-1
  var_length_of, 1, var_109_0_myself, 1, LOCAL(1),
  // length_of(myself)-1
  var_std__minus, 2, LOCAL(1), num_1, 1, LOCAL(2),
  // myself
  LET, -2, var_109_0_myself, var_contents_of, var_113_1_contents, var_length_of, LOCAL(2), LOCAL(3),
  // 
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(136, 28),
  POS(136, 28),
  POS(134, 15),
  POS(133, 15)
};

static TAB_NUM t_func_basic_collections__empty_binary_node___retrieve[] = {
  1, // locals
  2, // parameters
  LOCAL(1),
  LOCAL(1),
  // -> undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(141, 62)
};

static TAB_NUM t_func_basic_collections__retrieve_method[] = {
  2, // locals
  2, // parameters
  LOCAL(2), // 143_38_self
  var_143_43_key,
  // self $left $right $my_key $my_value
  LOCAL(2), 0, 4, var_144_6_left, var_144_12_right, var_144_19_my_key, var_144_27_my_value,
  // key == my_key
  var_std__equal, 2, var_143_43_key, var_144_19_my_key, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_8, lambda_9, TAIL_CALL,
  POS(144, 3),
  POS(146, 5),
  POS(145, 3)
};

static TAB_NUM t_lambda_8[] = {
  0, // locals
  0, // parameters
  //  my_value
  LET, 1, var_144_27_my_value, TAIL_CALL,
  POS(147, 7)
};

static TAB_NUM t_lambda_9[] = {
  1, // locals
  0, // parameters
  // key < my_key
  var_std__less, 2, var_143_43_key, var_144_19_my_key, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_10, lambda_11, TAIL_CALL,
  POS(150, 9),
  POS(149, 7)
};

static TAB_NUM t_lambda_10[] = {
  0, // locals
  0, // parameters
  // retrieve left key
  var_retrieve, 2, var_144_6_left, var_143_43_key, TAIL_CALL,
  POS(151, 11)
};

static TAB_NUM t_lambda_11[] = {
  0, // locals
  0, // parameters
  // retrieve right key
  var_retrieve, 2, var_144_12_right, var_143_43_key, TAIL_CALL,
  POS(152, 11)
};

static TAB_NUM t_func_basic_collections__empty_binary_node___insert[] = {
  3, // locals
  3, // parameters
  LOCAL(1),
  LOCAL(2), // 159_53_key
  LOCAL(3), // 159_57_value
  // new
  var_new, 5, var_node, var_basic_collections__empty_binary_node, var_basic_collections__empty_binary_node, LOCAL(2), LOCAL(3), 1, LOCAL(1),
  // ->
  LET, 2, LOCAL(1), var_true, TAIL_CALL,
  POS(161, 5),
  POS(160, 3)
};

static TAB_NUM t_func_node___insert[] = {
  1, // locals
  3, // parameters
  var_168_15_self,
  var_168_20_key,
  var_168_24_value,
  // self $left $right $my_key $my_value
  var_168_15_self, 0, 4, var_169_6_left, var_169_12_right, var_169_19_my_key, var_169_27_my_value,
  // $did_insert undefined
  LET, 1, var_undefined, 1, var_170_1_did_insert,
  // key == my_key
  var_std__equal, 2, var_168_20_key, var_169_19_my_key, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_12, lambda_13, TAIL_CALL,
  POS(169, 3),
  POS(170, 3),
  POS(172, 5),
  POS(171, 3)
};

static TAB_NUM t_lambda_12[] = {
  1, // locals
  0, // parameters
  // new(self left right key value) false
  var_new, 5, var_168_15_self, var_169_6_left, var_169_12_right, var_168_20_key, var_168_24_value, 1, LOCAL(1),
  //  new(self left right key value) false
  LET, 2, LOCAL(1), var_false, TAIL_CALL,
  POS(173, 8),
  POS(173, 7)
};

static TAB_NUM t_lambda_13[] = {
  1, // locals
  0, // parameters
  // key < my_key
  var_std__less, 2, var_168_20_key, var_169_19_my_key, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_14, lambda_15, TAIL_CALL,
  POS(176, 9),
  POS(175, 7)
};

static TAB_NUM t_lambda_14[] = {
  0, // locals
  0, // parameters
  // insert &left !did_insert key value
  var_insert, 3, var_169_6_left, var_168_20_key, var_168_24_value, 2, var_169_6_left, var_170_1_did_insert,
  // return
  lambda_16, 0, TAIL_CALL,
  POS(178, 11),
  POS(179, 11)
};

static TAB_NUM t_lambda_15[] = {
  0, // locals
  0, // parameters
  // insert &right !did_insert key value
  var_insert, 3, var_169_12_right, var_168_20_key, var_168_24_value, 2, var_169_12_right, var_170_1_did_insert,
  // return
  lambda_16, 0, TAIL_CALL,
  POS(181, 11),
  POS(182, 11)
};

static TAB_NUM t_lambda_16[] = {
  1, // locals
  0, // parameters
  // new(self left right my_key my_value) did_insert
  var_new, 5, var_168_15_self, var_169_6_left, var_169_12_right, var_169_19_my_key, var_169_27_my_value, 1, LOCAL(1),
  //  new(self left right my_key my_value) did_insert
  LET, 2, LOCAL(1), var_170_1_did_insert, TAIL_CALL,
  POS(185, 8),
  POS(185, 7)
};

static TAB_NUM t_func_fetch_first[] = {
  1, // locals
  1, // parameters
  var_190_15_self,
  // self $left $right $my_key $my_value
  var_190_15_self, 0, 4, var_191_6_left, var_191_12_right, var_191_19_my_key, var_191_27_my_value,
  // is_an_empty_node
  var_is_an_empty_node, 1, var_191_6_left, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_17, lambda_18, TAIL_CALL,
  POS(191, 3),
  POS(193, 10),
  POS(192, 3)
};

static TAB_NUM t_lambda_17[] = {
  0, // locals
  0, // parameters
  //  right my_key my_value
  LET, 3, var_191_12_right, var_191_19_my_key, var_191_27_my_value, TAIL_CALL,
  POS(194, 7)
};

static TAB_NUM t_lambda_18[] = {
  3, // locals
  0, // parameters
  // fetch_first &left $first_key $first_value
  func_fetch_first, 1, var_191_6_left, 3, var_191_6_left, LOCAL(2), LOCAL(3),
  // new(self left right my_key my_value) first_key first_value
  var_new, 5, var_190_15_self, var_191_6_left, var_191_12_right, var_191_19_my_key, var_191_27_my_value, 1, LOCAL(1),
  // -> new(self left right my_key my_value) first_key first_value
  LET, 3, LOCAL(1), LOCAL(2), LOCAL(3), TAIL_CALL,
  POS(196, 7),
  POS(197, 10),
  POS(197, 7)
};

static TAB_NUM t_func_basic_collections__empty_binary_node___delete[] = {
  2, // locals
  2, // parameters
  LOCAL(2), // 199_47_self
  LOCAL(1),
  // -> self false
  LET, 2, LOCAL(2), var_false, TAIL_CALL,
  POS(199, 59)
};

static TAB_NUM t_func_node___delete[] = {
  1, // locals
  2, // parameters
  var_201_15_self,
  var_201_20_key,
  // self $left $right $my_key $my_value
  var_201_15_self, 0, 4, var_202_6_left, var_202_12_right, var_202_19_my_key, var_202_27_my_value,
  // key == my_key
  var_std__equal, 2, var_201_20_key, var_202_19_my_key, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_19, lambda_24, TAIL_CALL,
  POS(202, 3),
  POS(204, 5),
  POS(203, 3)
};

static TAB_NUM t_lambda_19[] = {
  1, // locals
  0, // parameters
  // is_an_empty_node
  var_is_an_empty_node, 1, var_202_6_left, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_20, lambda_21, TAIL_CALL,
  POS(207, 14),
  POS(206, 7)
};

static TAB_NUM t_lambda_20[] = {
  0, // locals
  0, // parameters
  //  right true
  LET, 2, var_202_12_right, var_true, TAIL_CALL,
  POS(208, 11)
};

static TAB_NUM t_lambda_21[] = {
  1, // locals
  0, // parameters
  // is_an_empty_node
  var_is_an_empty_node, 1, var_202_12_right, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_22, lambda_23, TAIL_CALL,
  POS(211, 19),
  POS(210, 11)
};

static TAB_NUM t_lambda_22[] = {
  0, // locals
  0, // parameters
  //  left true
  LET, 2, var_202_6_left, var_true, TAIL_CALL,
  POS(212, 15)
};

static TAB_NUM t_lambda_23[] = {
  3, // locals
  0, // parameters
  // fetch_first &right $first_key $first_value
  func_fetch_first, 1, var_202_12_right, 3, var_202_12_right, LOCAL(2), LOCAL(3),
  // new(self left right first_key first_value) true
  var_new, 5, var_201_15_self, var_202_6_left, var_202_12_right, LOCAL(2), LOCAL(3), 1, LOCAL(1),
  // -> new(self left right first_key first_value) true
  LET, 2, LOCAL(1), var_true, TAIL_CALL,
  POS(214, 15),
  POS(215, 18),
  POS(215, 15)
};

static TAB_NUM t_lambda_24[] = {
  1, // locals
  0, // parameters
  // key < my_key
  var_std__less, 2, var_201_20_key, var_202_19_my_key, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_25, lambda_28, TAIL_CALL,
  POS(218, 9),
  POS(217, 7)
};

static TAB_NUM t_lambda_25[] = {
  1, // locals
  0, // parameters
  // delete &left $did_delete key
  var_delete, 2, var_202_6_left, var_201_20_key, 2, var_202_6_left, LOCAL(1),
  // if_not
  var_if_not, 3, LOCAL(1), lambda_26, lambda_27, TAIL_CALL,
  POS(220, 11),
  POS(221, 11)
};

static TAB_NUM t_lambda_26[] = {
  0, // locals
  0, // parameters
  //  self false
  LET, 2, var_201_15_self, var_false, TAIL_CALL,
  POS(223, 15)
};

static TAB_NUM t_lambda_27[] = {
  1, // locals
  0, // parameters
  // new(self left right my_key my_value) true
  var_new, 5, var_201_15_self, var_202_6_left, var_202_12_right, var_202_19_my_key, var_202_27_my_value, 1, LOCAL(1),
  //  new(self left right my_key my_value) true
  LET, 2, LOCAL(1), var_true, TAIL_CALL,
  POS(224, 16),
  POS(224, 15)
};

static TAB_NUM t_lambda_28[] = {
  1, // locals
  0, // parameters
  // delete &right $did_delete key
  var_delete, 2, var_202_12_right, var_201_20_key, 2, var_202_12_right, LOCAL(1),
  // if_not
  var_if_not, 3, LOCAL(1), lambda_29, lambda_30, TAIL_CALL,
  POS(226, 11),
  POS(227, 11)
};

static TAB_NUM t_lambda_29[] = {
  0, // locals
  0, // parameters
  //  self false
  LET, 2, var_201_15_self, var_false, TAIL_CALL,
  POS(229, 15)
};

static TAB_NUM t_lambda_30[] = {
  1, // locals
  0, // parameters
  // new(self left right my_key my_value) true
  var_new, 5, var_201_15_self, var_202_6_left, var_202_12_right, var_202_19_my_key, var_202_27_my_value, 1, LOCAL(1),
  //  new(self left right my_key my_value) true
  LET, 2, LOCAL(1), var_true, TAIL_CALL,
  POS(230, 16),
  POS(230, 15)
};

static TAB_NUM t_func_finish___for_each_1_call[] = {
  1, // locals
  1, // parameters
  LOCAL(1),
  // break!
  var_break, 0, IO_TAIL_CALL,
  POS(237, 34)
};

static TAB_NUM t_func_finish___for_each_2_call[] = {
  1, // locals
  1, // parameters
  LOCAL(1),
  // break!
  var_break, 0, IO_TAIL_CALL,
  POS(238, 34)
};

static TAB_NUM t_func_empty_binary_node___for_each_1_left[] = {
  1, // locals
  1, // parameters
  LOCAL(1),
  // basic_loops::todo(-1) # peek
  var_basic_loops__todo, 1, minus_num_1, 1, LOCAL(1),
  // for_each_1_call! basic_loops::todo(-1) # peek
  var_for_each_1_call, 1, LOCAL(1), IO_TAIL_CALL,
  POS(241, 20),
  POS(241, 3)
};

static TAB_NUM t_func_empty_binary_node___for_each_2_left[] = {
  1, // locals
  1, // parameters
  LOCAL(1),
  // basic_loops::todo(-1) # peek
  var_basic_loops__todo, 1, minus_num_1, 1, LOCAL(1),
  // for_each_2_call! basic_loops::todo(-1) # peek
  var_for_each_2_call, 1, LOCAL(1), IO_TAIL_CALL,
  POS(244, 20),
  POS(244, 3)
};

static TAB_NUM t_func_basic_collections__for_each_1_left_method[] = {
  2, // locals
  1, // parameters
  LOCAL(1), // 246_45_self
  // self $left
  LOCAL(1), 0, 1, LOCAL(2),
  // push &basic_loops::todo self
  var_push, 2, var_basic_loops__todo, LOCAL(1), 1, var_basic_loops__todo,
  // for_each_1_left! left
  var_for_each_1_left, 1, LOCAL(2), IO_TAIL_CALL,
  POS(247, 3),
  POS(248, 3),
  POS(249, 3)
};

static TAB_NUM t_func_basic_collections__for_each_2_left_method[] = {
  2, // locals
  1, // parameters
  LOCAL(1), // 251_45_self
  // self $left
  LOCAL(1), 0, 1, LOCAL(2),
  // push &basic_loops::todo self
  var_push, 2, var_basic_loops__todo, LOCAL(1), 1, var_basic_loops__todo,
  // for_each_2_left! left
  var_for_each_2_left, 1, LOCAL(2), IO_TAIL_CALL,
  POS(252, 3),
  POS(253, 3),
  POS(254, 3)
};

static TAB_NUM t_func_basic_collections__for_each_1_call_method[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 256_45_self
  // self $_left $_right $_my_key $my_value
  LOCAL(2), 0, 4, LOCAL(1), LOCAL(1), LOCAL(1), LOCAL(3),
  // basic_loops::body! my_value
  var_basic_loops__body, 1, LOCAL(3), IO_TAIL_CALL,
  POS(257, 3),
  POS(258, 3)
};

static TAB_NUM t_func_basic_collections__for_each_2_call_method[] = {
  4, // locals
  1, // parameters
  LOCAL(2), // 260_45_self
  // self $_left $_right $my_key $my_value
  LOCAL(2), 0, 4, LOCAL(1), LOCAL(1), LOCAL(3), LOCAL(4),
  // basic_loops::body! my_key my_value
  var_basic_loops__body, 2, LOCAL(3), LOCAL(4), IO_TAIL_CALL,
  POS(261, 3),
  POS(262, 3)
};

static TAB_NUM t_func_basic_collections__for_each_1_right_method[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 264_46_self
  // self $_left $right
  LOCAL(2), 0, 2, LOCAL(1), LOCAL(3),
  // for_each_1_left! right
  var_for_each_1_left, 1, LOCAL(3), IO_TAIL_CALL,
  POS(265, 3),
  POS(266, 3)
};

static TAB_NUM t_func_basic_collections__for_each_2_right_method[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 268_46_self
  // self $_left $right
  LOCAL(2), 0, 2, LOCAL(1), LOCAL(3),
  // for_each_2_left! right
  var_for_each_2_left, 1, LOCAL(3), IO_TAIL_CALL,
  POS(269, 3),
  POS(270, 3)
};

static TAB_NUM t_func_std_types__binary_table___for_each[] = {
  4, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_311_0_self,
  MANDATORY_PARAMETER, LOCAL(3), // 312_0_body
  var_next, var_313_0_finally,
  // $saved_context
  var_tuple, 5, var_next, var_break, var_basic_loops__todo, var_basic_loops__body, var_basic_loops__finally, 1, LOCAL(4),
  // !basic_loops::todo list(finish)
  var_list, 1, var_finish, 1, var_basic_loops__todo,
  // !basic_loops::body body
  LET, 1, LOCAL(3), 1, var_basic_loops__body,
  // !basic_loops::finally finally
  LET, 1, var_313_0_finally, 1, var_basic_loops__finally,
  // !break: (myself^)
  LET, 1, lambda_break, 1, var_break,
  // break.basic_loops::saved_context_of saved_context
  LET, -1, var_break, var_basic_loops__saved_context_of, LOCAL(4), var_break,
  // parameter_count_of(body) == 2:
  var_parameter_count_of, 1, LOCAL(3), 1, LOCAL(1),
  // parameter_count_of(body) == 2:
  var_std__equal, 2, LOCAL(1), num_2, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_31, lambda_32, IO_TAIL_CALL,
  POS(315, 3),
  POS(323, 3),
  POS(324, 3),
  POS(325, 3),
  POS(327, 3),
  POS(334, 4),
  POS(337, 5),
  POS(337, 5),
  POS(336, 3)
};

static TAB_NUM t_lambda_break[] = {
  2, // locals
  -1, // parameters
  MYSELF_PARAMETER, LOCAL(2), // 327_9_myself
  // !finally basic_loops::finally
  LET, 1, var_basic_loops__finally, 1, var_313_0_finally,
  // basic_loops::saved_context_of(myself)
  var_basic_loops__saved_context_of, 1, LOCAL(2), 1, LOCAL(1),
  // basic_loops::saved_context_of(myself)
  LOCAL(1), 0, 5, var_next, var_break, var_basic_loops__todo, var_basic_loops__body, var_basic_loops__finally,
  // finally!
  var_313_0_finally, 0, IO_TAIL_CALL,
  POS(328, 5),
  POS(329, 5),
  POS(329, 5),
  POS(332, 5)
};

static TAB_NUM t_lambda_31[] = {
  1, // locals
  0, // parameters
  // !next:
  LET, 1, lambda_next, 1, var_next,
  // contents_of(self)
  var_contents_of, 1, var_311_0_self, 1, LOCAL(1),
  // for_each_2_left! contents_of(self)
  var_for_each_2_left, 1, LOCAL(1), IO_TAIL_CALL,
  POS(338, 7),
  POS(342, 24),
  POS(342, 7)
};

static TAB_NUM t_lambda_next[] = {
  1, // locals
  0, // parameters
  // pop &basic_loops::todo $previous_node
  var_pop, 1, var_basic_loops__todo, 2, var_basic_loops__todo, LOCAL(1),
  // for_each_2_right! previous_node
  var_for_each_2_right, 1, LOCAL(1), IO_TAIL_CALL,
  POS(339, 9),
  POS(340, 9)
};

static TAB_NUM t_lambda_32[] = {
  1, // locals
  0, // parameters
  // !next:
  LET, 1, lambda_2_next, 1, var_next,
  // contents_of(self)
  var_contents_of, 1, var_311_0_self, 1, LOCAL(1),
  // for_each_1_left! contents_of(self)
  var_for_each_1_left, 1, LOCAL(1), IO_TAIL_CALL,
  POS(344, 7),
  POS(348, 24),
  POS(348, 7)
};

static TAB_NUM t_lambda_2_next[] = {
  1, // locals
  0, // parameters
  // pop &basic_loops::todo $previous_node
  var_pop, 1, var_basic_loops__todo, 2, var_basic_loops__todo, LOCAL(1),
  // for_each_1_right! previous_node
  var_for_each_1_right, 1, LOCAL(1), IO_TAIL_CALL,
  POS(345, 9),
  POS(346, 9)
};

static TAB_NUM t_func_basic_collections__empty_binary_node___map_1[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 355_46_self
  // -> self
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(355, 53)
};

static TAB_NUM t_func_basic_collections__empty_binary_node___map_2[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 357_46_self
  // -> self
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(357, 53)
};

static TAB_NUM t_func_basic_collections__map_1_method[] = {
  8, // locals
  1, // parameters
  LOCAL(4), // 359_35_self
  // self $left $right $my_key $my_value
  LOCAL(4), 0, 4, LOCAL(5), LOCAL(6), LOCAL(7), LOCAL(8),
  // mapping_function(my_value) map_1(left) map_1(right)
  var_mapping_function, 1, LOCAL(8), 1, LOCAL(1),
  // map_1(left) map_1(right)
  var_map_1, 1, LOCAL(5), 1, LOCAL(2),
  // map_1(right)
  var_map_1, 1, LOCAL(6), 1, LOCAL(3),
  // new self my_key mapping_function(my_value) map_1(left) map_1(right)
  var_new, 5, LOCAL(4), LOCAL(7), LOCAL(1), LOCAL(2), LOCAL(3), TAIL_CALL,
  POS(360, 3),
  POS(361, 19),
  POS(361, 46),
  POS(361, 58),
  POS(361, 3)
};

static TAB_NUM t_func_basic_collections__map_2_method[] = {
  8, // locals
  1, // parameters
  LOCAL(4), // 363_35_self
  // self $left $right $my_key $my_value
  LOCAL(4), 0, 4, LOCAL(5), LOCAL(6), LOCAL(7), LOCAL(8),
  // mapping_function(my_key my_value) map_2(left) map_2(right)
  var_mapping_function, 2, LOCAL(7), LOCAL(8), 1, LOCAL(1),
  // map_2(left) map_2(right)
  var_map_2, 1, LOCAL(5), 1, LOCAL(2),
  // map_2(right)
  var_map_2, 1, LOCAL(6), 1, LOCAL(3),
  // new self my_key mapping_function(my_key my_value) map_2(left) map_2(right)
  var_new, 5, LOCAL(4), LOCAL(7), LOCAL(1), LOCAL(2), LOCAL(3), TAIL_CALL,
  POS(364, 3),
  POS(365, 19),
  POS(365, 53),
  POS(365, 65),
  POS(365, 3)
};

static TAB_NUM t_func_std_types__binary_table___map[] = {
  3, // locals
  2, // parameters
  var_380_0_self,
  LOCAL(3), // 381_0_function
  // !mapping_function function
  LET, 1, LOCAL(3), 1, var_mapping_function,
  // parameter_count_of(function) == 2:
  var_parameter_count_of, 1, LOCAL(3), 1, LOCAL(1),
  // parameter_count_of(function) == 2:
  var_std__equal, 2, LOCAL(1), num_2, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_33, lambda_34, TAIL_CALL,
  POS(383, 3),
  POS(386, 5),
  POS(386, 5),
  POS(385, 3)
};

static TAB_NUM t_lambda_33[] = {
  1, // locals
  0, // parameters
  // contents_of
  var_contents_of, 1, var_380_0_self, 1, LOCAL(1),
  // map_2 &self.contents_of
  var_map_2, 1, LOCAL(1), 1, LOCAL(1),
  // self.contents_of
  LET, -1, var_380_0_self, var_contents_of, LOCAL(1), var_380_0_self,
  // -> self
  LET, 1, var_380_0_self, TAIL_CALL,
  POS(387, 19),
  POS(387, 7),
  POS(387, 14),
  POS(388, 7)
};

static TAB_NUM t_lambda_34[] = {
  1, // locals
  0, // parameters
  // contents_of
  var_contents_of, 1, var_380_0_self, 1, LOCAL(1),
  // map_1 &self.contents_of
  var_map_1, 1, LOCAL(1), 1, LOCAL(1),
  // self.contents_of
  LET, -1, var_380_0_self, var_contents_of, LOCAL(1), var_380_0_self,
  // -> self
  LET, 1, var_380_0_self, TAIL_CALL,
  POS(390, 19),
  POS(390, 7),
  POS(390, 14),
  POS(391, 7)
};

static TAB_NUM t_func_std_types__binary_table___reduce[] = {
  2, // locals
  -3, // parameters
  MANDATORY_PARAMETER, LOCAL(2), // 408_0_self
  MANDATORY_PARAMETER, var_409_0_function,
  var_undefined, var_410_0_unit,
  // $contents contents_of(self)
  var_contents_of, 1, LOCAL(2), 1, var_412_1_contents,
  // is_an_empty_node
  var_is_an_empty_node, 1, var_412_1_contents, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_35, lambda_36, TAIL_CALL,
  POS(412, 3),
  POS(414, 14),
  POS(413, 3)
};

static TAB_NUM t_lambda_35[] = {
  0, // locals
  0, // parameters
  //  unit
  LET, 1, var_410_0_unit, TAIL_CALL,
  POS(415, 7)
};

static TAB_NUM t_lambda_36[] = {
  1, // locals
  0, // parameters
  // reduce(contents)
  func_reduce, 1, var_412_1_contents, 1, LOCAL(1),
  //  reduce(contents)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(416, 8),
  POS(416, 7)
};

static TAB_NUM t_func_reduce[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 418_10_inner_node
  // inner_node $left $right $_my_key $my_value
  LOCAL(2), 0, 4, var_419_12_left, var_419_18_right, LOCAL(1), var_419_34_my_value,
  // is_an_empty_node
  var_is_an_empty_node, 1, var_419_12_left, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), func_check_right, lambda_37, TAIL_CALL,
  POS(419, 5),
  POS(421, 12),
  POS(420, 5)
};

static TAB_NUM t_lambda_37[] = {
  1, // locals
  0, // parameters
  // reduce(left) my_value)
  func_reduce, 1, var_419_12_left, 1, LOCAL(1),
  // !my_value function(reduce(left) my_value)
  var_409_0_function, 2, LOCAL(1), var_419_34_my_value, 1, var_419_34_my_value,
  // check_right
  func_check_right, 0, TAIL_CALL,
  POS(424, 28),
  POS(424, 9),
  POS(425, 9)
};

static TAB_NUM t_func_check_right[] = {
  1, // locals
  0, // parameters
  // is_an_empty_node
  var_is_an_empty_node, 1, var_419_18_right, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_38, lambda_39, TAIL_CALL,
  POS(429, 15),
  POS(428, 7)
};

static TAB_NUM t_lambda_38[] = {
  0, // locals
  0, // parameters
  //  my_value
  LET, 1, var_419_34_my_value, TAIL_CALL,
  POS(430, 11)
};

static TAB_NUM t_lambda_39[] = {
  2, // locals
  0, // parameters
  // reduce(right))
  func_reduce, 1, var_419_18_right, 1, LOCAL(1),
  // function(my_value reduce(right))
  var_409_0_function, 2, var_419_34_my_value, LOCAL(1), 1, LOCAL(2),
  //  function(my_value reduce(right))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(431, 30),
  POS(431, 12),
  POS(431, 11)
};

static TAB_NUM t_func_std_types__binary_table___map_reduce[] = {
  2, // locals
  -4, // parameters
  MANDATORY_PARAMETER, LOCAL(2), // 446_0_self
  MANDATORY_PARAMETER, var_447_0_map_function,
  var_append, var_448_0_reduce_function,
  var_undefined, var_449_0_unit,
  // $contents contents_of(self)
  var_contents_of, 1, LOCAL(2), 1, var_451_1_contents,
  // is_an_empty_node
  var_is_an_empty_node, 1, var_451_1_contents, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_40, lambda_41, TAIL_CALL,
  POS(451, 3),
  POS(453, 14),
  POS(452, 3)
};

static TAB_NUM t_lambda_40[] = {
  0, // locals
  0, // parameters
  //  unit
  LET, 1, var_449_0_unit, TAIL_CALL,
  POS(454, 7)
};

static TAB_NUM t_lambda_41[] = {
  2, // locals
  0, // parameters
  // parameter_count_of(map_function) == 2
  var_parameter_count_of, 1, var_447_0_map_function, 1, LOCAL(1),
  // parameter_count_of(map_function) == 2
  var_std__equal, 2, LOCAL(1), num_2, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_42, lambda_43, TAIL_CALL,
  POS(457, 9),
  POS(457, 9),
  POS(456, 7)
};

static TAB_NUM t_lambda_42[] = {
  1, // locals
  0, // parameters
  // map_reduce_2(contents)
  func_map_reduce_2, 1, var_451_1_contents, 1, LOCAL(1),
  //  map_reduce_2(contents)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(458, 12),
  POS(458, 11)
};

static TAB_NUM t_lambda_43[] = {
  1, // locals
  0, // parameters
  // map_reduce_1(contents)
  func_map_reduce_1, 1, var_451_1_contents, 1, LOCAL(1),
  //  map_reduce_1(contents)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(459, 12),
  POS(459, 11)
};

static TAB_NUM t_func_map_reduce_1[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 461_16_inner_node
  // inner_node $left $right $_my_key $my_value
  LOCAL(2), 0, 4, var_462_12_left, var_462_18_right, LOCAL(1), var_462_34_my_value,
  // map_function &my_value
  var_447_0_map_function, 1, var_462_34_my_value, 1, var_462_34_my_value,
  // is_an_empty_node
  var_is_an_empty_node, 1, var_462_12_left, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), func_2_check_right, lambda_44, TAIL_CALL,
  POS(462, 5),
  POS(463, 5),
  POS(465, 12),
  POS(464, 5)
};

static TAB_NUM t_lambda_44[] = {
  1, // locals
  0, // parameters
  // map_reduce_1(left) my_value)
  func_map_reduce_1, 1, var_462_12_left, 1, LOCAL(1),
  // !my_value reduce_function(map_reduce_1(left) my_value)
  var_448_0_reduce_function, 2, LOCAL(1), var_462_34_my_value, 1, var_462_34_my_value,
  // check_right
  func_2_check_right, 0, TAIL_CALL,
  POS(468, 35),
  POS(468, 9),
  POS(469, 9)
};

static TAB_NUM t_func_2_check_right[] = {
  1, // locals
  0, // parameters
  // is_an_empty_node
  var_is_an_empty_node, 1, var_462_18_right, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_45, lambda_46, TAIL_CALL,
  POS(473, 15),
  POS(472, 7)
};

static TAB_NUM t_lambda_45[] = {
  0, // locals
  0, // parameters
  //  my_value
  LET, 1, var_462_34_my_value, TAIL_CALL,
  POS(474, 11)
};

static TAB_NUM t_lambda_46[] = {
  2, // locals
  0, // parameters
  // map_reduce_1(right))
  func_map_reduce_1, 1, var_462_18_right, 1, LOCAL(1),
  // reduce_function(my_value map_reduce_1(right))
  var_448_0_reduce_function, 2, var_462_34_my_value, LOCAL(1), 1, LOCAL(2),
  //  reduce_function(my_value map_reduce_1(right))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(475, 37),
  POS(475, 12),
  POS(475, 11)
};

static TAB_NUM t_func_map_reduce_2[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 477_16_inner_node
  // inner_node $left $right $my_key $my_value
  LOCAL(2), 0, 4, var_478_12_left, var_478_18_right, LOCAL(3), var_478_33_my_value,
  // map_function my_key &my_value
  var_447_0_map_function, 2, LOCAL(3), var_478_33_my_value, 1, var_478_33_my_value,
  // is_an_empty_node
  var_is_an_empty_node, 1, var_478_12_left, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), func_3_check_right, lambda_47, TAIL_CALL,
  POS(478, 5),
  POS(479, 5),
  POS(481, 12),
  POS(480, 5)
};

static TAB_NUM t_lambda_47[] = {
  1, // locals
  0, // parameters
  // map_reduce_2(left) my_value)
  func_map_reduce_2, 1, var_478_12_left, 1, LOCAL(1),
  // !my_value reduce_function(map_reduce_2(left) my_value)
  var_448_0_reduce_function, 2, LOCAL(1), var_478_33_my_value, 1, var_478_33_my_value,
  // check_right
  func_3_check_right, 0, TAIL_CALL,
  POS(484, 35),
  POS(484, 9),
  POS(485, 9)
};

static TAB_NUM t_func_3_check_right[] = {
  1, // locals
  0, // parameters
  // is_an_empty_node
  var_is_an_empty_node, 1, var_478_18_right, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_48, lambda_49, TAIL_CALL,
  POS(489, 15),
  POS(488, 7)
};

static TAB_NUM t_lambda_48[] = {
  0, // locals
  0, // parameters
  //  my_value
  LET, 1, var_478_33_my_value, TAIL_CALL,
  POS(490, 11)
};

static TAB_NUM t_lambda_49[] = {
  2, // locals
  0, // parameters
  // map_reduce_2(right))
  func_map_reduce_2, 1, var_478_18_right, 1, LOCAL(1),
  // reduce_function(my_value map_reduce_2(right))
  var_448_0_reduce_function, 2, var_478_33_my_value, LOCAL(1), 1, LOCAL(2),
  //  reduce_function(my_value map_reduce_2(right))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(491, 37),
  POS(491, 12),
  POS(491, 11)
};

static TAB_NUM t_func_basic_collections__empty_binary_node___validate[] = {
  1, // locals
  3, // parameters
  LOCAL(1),
  LOCAL(1),
  LOCAL(1),
  // -> 0
  LET, 1, num_0, TAIL_CALL,
  POS(496, 68)
};

static TAB_NUM t_func_node___validate[] = {
  7, // locals
  3, // parameters
  LOCAL(5), // 498_17_self
  var_498_22_low,
  var_498_26_high,
  // self $left $right $key
  LOCAL(5), 0, 3, LOCAL(6), LOCAL(7), var_499_19_key,
  // is_defined && key < low
  var_is_defined, 1, var_498_22_low, 1, LOCAL(1),
  // is_defined && key < low
  var_std__and, 2, LOCAL(1), lambda_50, 1, LOCAL(2),
  // 
  var_std__or, 2, LOCAL(2), lambda_51, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_53, var_pass, 0,
  // validate(left low key)+1+validate(right key high)
  var_validate, 3, LOCAL(6), var_498_22_low, var_499_19_key, 1, LOCAL(1),
  // validate(left low key)+1+validate(right key high)
  var_std__plus, 2, LOCAL(1), num_1, 1, LOCAL(2),
  // validate(right key high)
  var_validate, 3, LOCAL(7), var_499_19_key, var_498_26_high, 1, LOCAL(3),
  // validate(left low key)+1+validate(right key high)
  var_std__plus, 2, LOCAL(2), LOCAL(3), 1, LOCAL(4),
  // -> validate(left low key)+1+validate(right key high)
  LET, 1, LOCAL(4), TAIL_CALL,
  POS(499, 3),
  POS(502, 11),
  POS(502, 11),
  POS(501, 7),
  POS(500, 3),
  POS(509, 6),
  POS(509, 6),
  POS(509, 31),
  POS(509, 6),
  POS(509, 3)
};

static TAB_NUM t_lambda_50[] = {
  1, // locals
  0, // parameters
  // key < low
  var_std__less, 2, var_499_19_key, var_498_22_low, 1, LOCAL(1),
  // key < low
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(502, 25),
  POS(502, 25)
};

static TAB_NUM t_lambda_51[] = {
  2, // locals
  0, // parameters
  // is_defined && key > high
  var_is_defined, 1, var_498_26_high, 1, LOCAL(1),
  // is_defined && key > high
  var_std__and, 2, LOCAL(1), lambda_52, 1, LOCAL(2),
  // high.is_defined && key > high
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(503, 12),
  POS(503, 12),
  POS(503, 7)
};

static TAB_NUM t_lambda_52[] = {
  1, // locals
  0, // parameters
  // high
  var_std__less, 2, var_498_26_high, var_499_19_key, 1, LOCAL(1),
  // key > high
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(503, 32),
  POS(503, 26)
};

static TAB_NUM t_lambda_53[] = {
  3, // locals
  0, // parameters
  // default_value(low '[')) < @(key) < @(default_value(high ']')) failed!
  var_default_value, 2, var_498_22_low, chr_91, 1, LOCAL(1),
  // default_value(high ']')) failed!
  var_default_value, 2, var_498_26_high, chr_93, 1, LOCAL(2),
  // "
  var_std__string, 6, LOCAL(1), string_1, var_499_19_key, string_1, LOCAL(2), str__failed, 1, LOCAL(3),
  // debug_write "
  var_debug_write, 1, LOCAL(3), 0,
  // debug_exit
  var_debug_exit, 0, TAIL_CALL,
  POS(506, 11),
  POS(506, 48),
  POS(505, 19),
  POS(505, 7),
  POS(507, 7)
};

static TAB_NUM t_func_std_types__binary_table___validate[] = {
  3, // locals
  1, // parameters
  LOCAL(3), // 511_36_self
  // contents_of(self) undefined undefined)
  var_contents_of, 1, LOCAL(3), 1, LOCAL(1),
  // $real_length validate(contents_of(self) undefined undefined)
  var_validate, 3, LOCAL(1), var_undefined, var_undefined, 1, var_512_1_real_length,
  // $stored_length length_of(self)
  var_length_of, 1, LOCAL(3), 1, var_513_1_stored_length,
  // real_length != stored_length:
  var_std__equal, 2, var_512_1_real_length, var_513_1_stored_length, 1, LOCAL(1),
  // real_length != stored_length:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_54, var_pass, TAIL_CALL,
  POS(512, 25),
  POS(512, 3),
  POS(513, 3),
  POS(515, 5),
  POS(515, 5),
  POS(514, 3)
};

static TAB_NUM t_lambda_54[] = {
  1, // locals
  0, // parameters
  // "
  var_std__string, 5, str_Table_contains, var_512_1_real_length, str__entries_stored, var_513_1_stored_length, string_2, 1, LOCAL(1),
  // debug_write "
  var_debug_write, 1, LOCAL(1), 0,
  // debug_exit
  var_debug_exit, 0, TAIL_CALL,
  POS(516, 19),
  POS(516, 7),
  POS(518, 7)
};

static int tuple_71_0_arguments[] = {
  -var_undefined, -var_undefined, -var_undefined, -var_undefined, -num_0
};

static int tuple_74_0_arguments[] = {
  -var_undefined, -var_undefined, -var_undefined, -var_undefined
};

static FUNKY_CONSTANT constants_table[] = {
  {FLT_TUPLE, 5, {.arguments = tuple_71_0_arguments}},
  {FLT_POSITIVE_INT64, 0, {.value = 0}},
  {FLT_TUPLE, 4, {.arguments = tuple_74_0_arguments}},
  {FLT_UNIQUE, 0, {.str_8 = "NONE"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__binary_table}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_value_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_3}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_4}},
  {FLT_POSITIVE_INT64, 0, {.value = 1}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_5}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_6}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_7}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_basic_collections__empty_binary_node___retrieve}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_basic_collections__retrieve_method}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_8}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_9}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_10}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_11}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_basic_collections__empty_binary_node___insert}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_node___insert}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_12}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_13}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_14}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_15}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_16}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_fetch_first}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_17}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_18}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_basic_collections__empty_binary_node___delete}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_node___delete}},
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
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_30}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_finish___for_each_1_call}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_finish___for_each_2_call}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_empty_binary_node___for_each_1_left}},
  {FLT_NEGATIVE_INT64, 0, {.value = 1}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_empty_binary_node___for_each_2_left}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_basic_collections__for_each_1_left_method}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_basic_collections__for_each_2_left_method}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_basic_collections__for_each_1_call_method}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_basic_collections__for_each_2_call_method}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_basic_collections__for_each_1_right_method}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_basic_collections__for_each_2_right_method}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__binary_table___for_each}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_break}},
  {FLT_POSITIVE_INT64, 0, {.value = 2}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_31}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_next}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_32}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2_next}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_basic_collections__empty_binary_node___map_1}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_basic_collections__empty_binary_node___map_2}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_basic_collections__map_1_method}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_basic_collections__map_2_method}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__binary_table___map}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_33}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_34}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__binary_table___reduce}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_35}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_36}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_reduce}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_37}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_check_right}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_38}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_39}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__binary_table___map_reduce}},
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
  {FLT_FUNCTION, 0, {.tfunc = t_func_basic_collections__empty_binary_node___validate}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_node___validate}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_50}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_51}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_52}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_53}},
  {FLT_CHARACTER, 0, {.value = 91}},
  {FLT_CHARACTER, 0, {.value = 93}},
  {FLT_STRING_8, 3, {.str_8 = " < "}},
  {FLT_STRING_8, 9, {.str_8 = " failed!\012"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__binary_table___validate}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_54}},
  {FLT_STRING_8, 15, {.str_8 = "Table contains "}},
  {FLT_STRING_8, 18, {.str_8 = " entries (stored: "}},
  {FLT_STRING_8, 2, {.str_8 = ")\012"}}
};

static ATTRIBUTE_DEFINITION basic_collections__empty_binary_node__attributes[] = {
  {-var_is_an_empty_node, -var_true},
  {var_retrieve, -func_basic_collections__empty_binary_node___retrieve},
  {var_insert, -func_basic_collections__empty_binary_node___insert},
  {var_delete, -func_basic_collections__empty_binary_node___delete},
  {var_map_1, -func_basic_collections__empty_binary_node___map_1},
  {var_map_2, -func_basic_collections__empty_binary_node___map_2},
  {var_validate, -func_basic_collections__empty_binary_node___validate}
};

static ATTRIBUTE_DEFINITION std_types__binary_table__attributes[] = {
  {-var_length_of, -num_0},
  {-var_is_a_binary_table, -var_true},
  {-var_contents_of, -var_basic_collections__empty_binary_node},
  {TYPE_FUNCTION, -func_std_types__binary_table},
  {var_for_each, -func_std_types__binary_table___for_each},
  {var_map, -func_std_types__binary_table___map},
  {var_reduce, -func_std_types__binary_table___reduce},
  {var_map_reduce, -func_std_types__binary_table___map_reduce},
  {var_validate, -func_std_types__binary_table___validate}
};

static ATTRIBUTE_DEFINITION std_types__object__attributes[] = {
  {-var_is_a_binary_table, -var_false}
};

static ATTRIBUTE_DEFINITION node__attributes[] = {
  {-var_is_an_empty_node, -var_false},
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
  {var_map_2, -var_map_2_method},
  {var_validate, -func_node___validate}
};

static ATTRIBUTE_DEFINITION finish__attributes[] = {
  {var_for_each_1_call, -func_finish___for_each_1_call},
  {var_for_each_2_call, -func_finish___for_each_2_call}
};

static ATTRIBUTE_DEFINITION empty_binary_node__attributes[] = {
  {var_for_each_1_left, -func_empty_binary_node___for_each_1_left},
  {var_for_each_2_left, -func_empty_binary_node___for_each_2_left}
};

static FUNKY_VARIABLE variables_table[] = {
  {
    FOT_POLYMORPHIC, 0, 0,
    "validate\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "assign\000std", NULL,
    {.position = POS(26, 1)}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "contents_of\000basic_collections", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "retrieve\000basic_collections", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "for_each_1_left\000basic_collections", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "for_each_1_call\000basic_collections", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "for_each_1_right\000basic_collections", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "for_each_2_left\000basic_collections", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "for_each_2_call\000basic_collections", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "for_each_2_right\000basic_collections", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "map_1\000basic_collections", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "map_2\000basic_collections", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "is_an_empty_node\000basic_collections", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_INITIALIZED, 0, 7,
    "empty_binary_node\000basic_collections", basic_collections__empty_binary_node__attributes,
    {.const_idx = -tuple_71_0}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "is_an_empty_node\000", NULL,
    {.position = POS(42, 39)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "true\000", NULL,
    {.position = POS(42, 56)}
  },
  {
    FOT_DERIVED, 0, 9,
    "binary_table\000std_types", std_types__binary_table__attributes,
    {"table\000std_types"}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "length_of\000", NULL,
    {.position = POS(44, 26)}
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
    "is_a_binary_table\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "object\000std_types", std_types__object__attributes,
    {.position = POS(52, 1)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "is_a_binary_table\000", NULL,
    {.position = POS(52, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "false\000", NULL,
    {.position = POS(52, 38)}
  },
  {
    FOT_INITIALIZED, 0, 13,
    "node\000", node__attributes,
    {.const_idx = -tuple_74_0}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "table\000std_types", NULL,
    {.position = POS(57, 26)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "contents_of\000", NULL,
    {.position = POS(61, 26)}
  },
  {
    FOT_DERIVED, 0, 0,
    "empty_binary_table\000std", NULL,
    {"binary_table\000std_types"}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "undefined\000", NULL,
    {.position = POS(72, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "tuple\000", NULL,
    {.position = POS(72, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "109_0_myself\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "110_0_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "111_0_value\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "113_1_contents\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "equal\000std", NULL,
    {.position = POS(115, 5)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "retrieve\000", NULL,
    {.position = POS(116, 8)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_defined\000", NULL,
    {.position = POS(119, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000std", NULL,
    {.position = POS(127, 28)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if_not\000", NULL,
    {.position = POS(121, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "minus\000std", NULL,
    {.position = POS(136, 28)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if\000", NULL,
    {.position = POS(118, 7)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "retrieve_method\000basic_collections", NULL,
    {.const_idx = -func_basic_collections__retrieve_method}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "143_43_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "144_6_left\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "144_12_right\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "144_19_my_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "144_27_my_value\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "less\000std", NULL,
    {.position = POS(150, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "retrieve_method\000", NULL,
    {.position = POS(154, 16)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "new\000", NULL,
    {.position = POS(161, 5)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "168_15_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "168_20_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "168_24_value\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "169_6_left\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "169_12_right\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "169_19_my_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "169_27_my_value\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "170_1_did_insert\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "190_15_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "191_6_left\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "191_12_right\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "191_19_my_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "191_27_my_value\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "201_15_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "201_20_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "202_6_left\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "202_12_right\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "202_19_my_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "202_27_my_value\000", NULL
  },
  {
    FOT_DERIVED, 0, 2,
    "finish\000", finish__attributes,
    {"object\000std_types"}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "for_each_1_call\000", NULL,
    {.position = POS(237, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "break\000", NULL,
    {.position = POS(237, 34)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "for_each_2_call\000", NULL,
    {.position = POS(238, 9)}
  },
  {
    FOT_UNKNOWN, 0, 2,
    "empty_binary_node\000", empty_binary_node__attributes,
    {.position = POS(240, 1)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "for_each_1_left\000", NULL,
    {.position = POS(240, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "todo\000basic_loops", NULL,
    {.position = POS(241, 20)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "for_each_2_left\000", NULL,
    {.position = POS(243, 20)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "for_each_1_left_method\000basic_collections", NULL,
    {.const_idx = -func_basic_collections__for_each_1_left_method}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "push\000", NULL,
    {.position = POS(248, 3)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "for_each_2_left_method\000basic_collections", NULL,
    {.const_idx = -func_basic_collections__for_each_2_left_method}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "for_each_1_call_method\000basic_collections", NULL,
    {.const_idx = -func_basic_collections__for_each_1_call_method}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "body\000basic_loops", NULL,
    {.position = POS(258, 3)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "for_each_2_call_method\000basic_collections", NULL,
    {.const_idx = -func_basic_collections__for_each_2_call_method}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "for_each_1_right_method\000basic_collections", NULL,
    {.const_idx = -func_basic_collections__for_each_1_right_method}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "for_each_2_right_method\000basic_collections", NULL,
    {.const_idx = -func_basic_collections__for_each_2_right_method}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "for_each_1_left_method\000", NULL,
    {.position = POS(272, 23)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "for_each_2_left_method\000", NULL,
    {.position = POS(273, 23)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "for_each_1_call_method\000", NULL,
    {.position = POS(274, 23)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "for_each_2_call_method\000", NULL,
    {.position = POS(275, 23)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "for_each_1_right\000", NULL,
    {.position = POS(276, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "for_each_1_right_method\000", NULL,
    {.position = POS(276, 24)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "for_each_2_right\000", NULL,
    {.position = POS(277, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "for_each_2_right_method\000", NULL,
    {.position = POS(277, 24)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "for_each\000", NULL,
    {.position = POS(279, 26)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "311_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "313_0_finally\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "next\000", NULL,
    {.position = POS(313, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "finally\000basic_loops", NULL,
    {.position = POS(321, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "list\000", NULL,
    {.position = POS(323, 22)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "saved_context_of\000basic_loops", NULL,
    {.position = POS(329, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "parameter_count_of\000", NULL,
    {.position = POS(337, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "pop\000", NULL,
    {.position = POS(339, 9)}
  },
  {
    FOT_DERIVED, 0, 0,
    "mapping_function\000", NULL,
    {"undefined\000"}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "map_1\000", NULL,
    {.position = POS(355, 39)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "map_2\000", NULL,
    {.position = POS(357, 39)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "map_1_method\000basic_collections", NULL,
    {.const_idx = -func_basic_collections__map_1_method}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "map_2_method\000basic_collections", NULL,
    {.const_idx = -func_basic_collections__map_2_method}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "map_1_method\000", NULL,
    {.position = POS(367, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "map_2_method\000", NULL,
    {.position = POS(368, 13)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "map\000", NULL,
    {.position = POS(370, 26)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "380_0_self\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "reduce\000", NULL,
    {.position = POS(396, 26)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "409_0_function\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "410_0_unit\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "412_1_contents\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "419_12_left\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "419_18_right\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "419_34_my_value\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "map_reduce\000", NULL,
    {.position = POS(436, 26)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "447_0_map_function\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "448_0_reduce_function\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "append\000", NULL,
    {.position = POS(448, 23)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "449_0_unit\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "451_1_contents\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "462_12_left\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "462_18_right\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "462_34_my_value\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "478_12_left\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "478_18_right\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "478_33_my_value\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "validate\000", NULL,
    {.position = POS(496, 39)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "498_22_low\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "498_26_high\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "499_19_key\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "and\000std", NULL,
    {.position = POS(502, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "or\000std", NULL,
    {.position = POS(501, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "default_value\000", NULL,
    {.position = POS(506, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "string\000std", NULL,
    {.position = POS(505, 19)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "debug_write\000", NULL,
    {.position = POS(505, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "debug_exit\000", NULL,
    {.position = POS(507, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "pass\000", NULL,
    {.position = POS(508, 5)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "512_1_real_length\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "513_1_stored_length\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not\000std", NULL,
    {.position = POS(515, 5)}
  }
};

static FUNKY_NAMESPACE used_namespaces[] = {
  {"std", 1, 0},
  {"basic_collections", 1, 0}
};

FUNKY_MODULE module__basic__types__collections__tables__binary_table = {
  "_basic__types__collections__tables__binary_table", // module name
  "basic/types/collections/tables/binary_table.fky", // module filename
  .major_version = 0,
  .minor_version = 0,
  .feature_flags = FEAT_POSITIONS,
  .marker = 0,
  0, // number of required modules
  0, // number of defined namespaces
  2, // number of used namespaces
  107, // number of constants
  144, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  constants_table,
  variables_table,
};
