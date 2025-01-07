#include <stddef.h>
#include <stdint.h>

#include "runtime/common.h"
#include "runtime/builtins.h"
#include "runtime/fko.h"
#include "runtime/memory.h"

enum {
  tuple_47_1 = -1,
  uni_NONE = -2,
  func_std_types__avl_table = -3,
  lambda_1 = -4,
  lambda_2 = -5,
  lambda_value_is_defined = -6,
  lambda_3 = -7,
  num_1 = -8,
  lambda_4 = -9,
  lambda_5 = -10,
  lambda_6 = -11,
  lambda_7 = -12,
  num_0 = -13,
  func_avl_node___height_of = -14,
  func_std_types__avl_table___first_key_of = -15,
  func_std_types__avl_table___next_key_of = -16,
  func_fetch_next_key = -17,
  lambda_8 = -18,
  lambda_9 = -19,
  lambda_10 = -20,
  lambda_11 = -21,
  lambda_12 = -22,
  lambda_13 = -23,
  lambda_14 = -24,
  lambda_15 = -25,
  lambda_16 = -26,
  lambda_17 = -27,
  func_fetch_first_key = -28,
  lambda_18 = -29,
  lambda_19 = -30,
  func_empty_node___insert = -31,
  func_avl_node___insert = -32,
  lambda_20 = -33,
  lambda_21 = -34,
  lambda_22 = -35,
  lambda_23 = -36,
  lambda_24 = -37,
  lambda_25 = -38,
  lambda_26 = -39,
  lambda_27 = -40,
  num_2 = -41,
  lambda_28 = -42,
  lambda_29 = -43,
  lambda_30 = -44,
  lambda_31 = -45,
  lambda_32 = -46,
  lambda_33 = -47,
  lambda_34 = -48,
  lambda_35 = -49,
  lambda_36 = -50,
  lambda_37 = -51,
  lambda_38 = -52,
  lambda_39 = -53,
  lambda_40 = -54,
  lambda_41 = -55,
  func_balance_left_to_right = -56,
  lambda_42 = -57,
  lambda_43 = -58,
  lambda_44 = -59,
  lambda_45 = -60,
  func_balance_right_to_left = -61,
  lambda_46 = -62,
  lambda_47 = -63,
  lambda_48 = -64,
  lambda_49 = -65,
  uni_UNCHANGED = -66,
  func_fetch_first = -67,
  lambda_50 = -68,
  lambda_51 = -69,
  lambda_52 = -70,
  lambda_53 = -71,
  lambda_54 = -72,
  lambda_55 = -73,
  lambda_56 = -74,
  lambda_57 = -75,
  lambda_58 = -76,
  lambda_59 = -77,
  func_fetch_last = -78,
  lambda_60 = -79,
  lambda_61 = -80,
  lambda_62 = -81,
  lambda_63 = -82,
  lambda_64 = -83,
  lambda_65 = -84,
  lambda_66 = -85,
  lambda_67 = -86,
  lambda_68 = -87,
  lambda_69 = -88,
  func_empty_node___delete = -89,
  func_avl_node___delete = -90,
  lambda_70 = -91,
  lambda_71 = -92,
  lambda_72 = -93,
  lambda_73 = -94,
  lambda_74 = -95,
  lambda_75 = -96,
  lambda_76 = -97,
  lambda_77 = -98,
  lambda_78 = -99,
  lambda_79 = -100,
  lambda_80 = -101,
  lambda_81 = -102,
  lambda_82 = -103,
  lambda_83 = -104,
  lambda_84 = -105,
  lambda_85 = -106,
  lambda_86 = -107,
  lambda_87 = -108,
  lambda_88 = -109,
  lambda_89 = -110,
  lambda_90 = -111,
  num_3 = -112,
  lambda_91 = -113,
  lambda_92 = -114,
  lambda_93 = -115,
  lambda_94 = -116,
  lambda_95 = -117,
  lambda_96 = -118,
  lambda_97 = -119,
  lambda_98 = -120,
  lambda_99 = -121,
  lambda_100 = -122,
  lambda_101 = -123,
  lambda_102 = -124,
  lambda_103 = -125,
  func_avl_node___validate = -126,
  lambda_104 = -127,
  lambda_105 = -128,
  lambda_106 = -129,
  lambda_107 = -130,
  chr_91 = -131,
  chr_93 = -132,
  string_1 = -133,
  str__failed = -134,
  lambda_108 = -135,
  lambda_109 = -136,
  str_left_height = -137,
  str__right_height = -138,
  str__height = -139,
  string_2 = -140
};

enum {
  var__START = FIRST_VAR-1,
  var_insert, // attribute
  var_std__assign, // extern
  var_delete, // attribute
  var_height_of, // attribute
  var_std__is_an_avl_table, // attribute
  var_std_types__object, // extern
  var_is_an_avl_table, // extern polymorphic
  var_false, // extern
  var_std_types__avl_table, // derived
  var_true, // extern
  var_avl_node, // initialized compound
  var_is_an_empty_node, // extern polymorphic
  var_std_types__binary_table, // extern
  var_contents_of, // extern polymorphic
  var_empty_node, // derived
  var_std__empty_avl_table, // derived
  var_basic_collections__empty_binary_node, // extern
  var_undefined, // extern
  var_tuple, // extern
  var_54_5_myself, // dynamic
  var_55_5_key, // dynamic
  var_56_5_value, // dynamic
  var_58_4_contents, // dynamic
  var_std__equal, // extern
  var_retrieve, // extern polymorphic
  var_is_defined, // extern
  var_length_of, // extern polymorphic
  var_std__plus, // extern
  var_if, // extern
  var_std__minus, // extern
  var_retrieve_method, // extern
  var_first_key_of, // extern polymorphic
  var_next_key_of, // extern polymorphic
  var_110_5_key, // dynamic
  var_115_11_left, // dynamic
  var_115_17_right, // dynamic
  var_115_24_my_key, // dynamic
  var_std__less, // extern
  var_118_10_fetched_key, // dynamic
  var_is_undefined, // extern
  var_137_9_left, // dynamic
  var_137_23_my_key, // dynamic
  var_typed_tuple, // extern
  var_149_20_self, // dynamic
  var_149_25_key, // dynamic
  var_149_29_value, // dynamic
  var_150_9_left, // dynamic
  var_150_15_right, // dynamic
  var_150_22_my_key, // dynamic
  var_150_30_my_value, // dynamic
  var_150_40_my_height, // dynamic
  var_157_25_new_height, // dynamic
  var_std__or, // extern
  var_if_not, // extern
  var_181_26_new_height, // dynamic
  var_205_31_right, // dynamic
  var_205_37_key, // dynamic
  var_205_41_value, // dynamic
  var_216_9_left_left, // dynamic
  var_216_20_left_right, // dynamic
  var_216_32_left_key, // dynamic
  var_216_42_left_value, // dynamic
  var_216_54_left_height, // dynamic
  var_221_6_left_right_left, // dynamic
  var_221_23_left_right_right, // dynamic
  var_222_6_left_right_key, // dynamic
  var_222_22_left_right_value, // dynamic
  var_222_40_left_right_height, // dynamic
  var_250_26_left, // dynamic
  var_250_37_key, // dynamic
  var_250_41_value, // dynamic
  var_261_10_right_left, // dynamic
  var_261_22_right_right, // dynamic
  var_261_35_right_key, // dynamic
  var_261_46_right_value, // dynamic
  var_261_59_right_height, // dynamic
  var_263_6_right_left_left, // dynamic
  var_263_23_right_left_right, // dynamic
  var_264_6_right_left_key, // dynamic
  var_264_22_right_left_value, // dynamic
  var_264_40_right_left_height, // dynamic
  var_306_9_left, // dynamic
  var_306_15_right, // dynamic
  var_306_22_my_key, // dynamic
  var_306_30_my_value, // dynamic
  var_306_40_my_height, // dynamic
  var_311_26_key, // dynamic
  var_311_31_value, // dynamic
  var_311_38_left_height, // dynamic
  var_317_12_height_minus_2, // dynamic
  var_330_42_new_node, // dynamic
  var_343_9_left, // dynamic
  var_343_15_right, // dynamic
  var_343_22_my_key, // dynamic
  var_343_30_my_value, // dynamic
  var_343_40_my_height, // dynamic
  var_348_26_key, // dynamic
  var_348_31_value, // dynamic
  var_348_38_right_height, // dynamic
  var_354_12_height_minus_2, // dynamic
  var_367_42_new_node, // dynamic
  var_376_20_self, // dynamic
  var_376_25_key, // dynamic
  var_383_9_left, // dynamic
  var_383_15_right, // dynamic
  var_383_22_my_key, // dynamic
  var_383_30_my_value, // dynamic
  var_383_40_my_height, // dynamic
  var_395_70_left_height, // dynamic
  var_396_75_right_height, // dynamic
  var_399_37_last_key, // dynamic
  var_399_47_last_value, // dynamic
  var_409_39_first_key, // dynamic
  var_409_50_first_value, // dynamic
  var_cond, // extern
  var_427_25_left_height, // dynamic
  var_453_26_right_height, // dynamic
  var_469_26_left_height, // dynamic
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
  var_validate, // extern polymorphic
  var_498_27_low, // dynamic
  var_498_31_high, // dynamic
  var_499_9_left, // dynamic
  var_499_15_right, // dynamic
  var_499_22_key, // dynamic
  var_499_35_height, // dynamic
  var_std__and, // extern
  var_default_value, // extern
  var_std__string, // extern
  var_debug__print, // extern
  var_debug__exit, // extern
  var_pass, // extern
  var_509_58_left_height, // dynamic
  var_510_63_right_height, // dynamic
  var_max, // extern
  var__END
};


static TAB_NUM t_func_std_types__avl_table[] = {
  1, // locals
  -3, // parameters
  MYSELF_PARAMETER, var_54_5_myself,
  MANDATORY_PARAMETER, var_55_5_key,
  uni_NONE, var_56_5_value,
  // $contents contents_of(myself)
  var_contents_of, 1, var_54_5_myself, 1, var_58_4_contents,
  // NONE == value
  var_std__equal, 2, uni_NONE, var_56_5_value, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1, lambda_2, TAIL_CALL,
  POS(58, 3),
  POS(60, 5),
  POS(59, 3)
};

static FUNCTION_INFO i_func_std_types__avl_table = {
  t_func_std_types__avl_table, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_1[] = {
  1, // locals
  0, // parameters
  // retrieve(contents key)
  var_retrieve, 2, var_58_4_contents, var_55_5_key, 1, LOCAL(1),
  //  retrieve(contents key)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(61, 8),
  POS(61, 7)
};

static FUNCTION_INFO i_lambda_1 = {
  t_lambda_1, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_2[] = {
  1, // locals
  0, // parameters
  // is_defined:
  var_is_defined, 1, var_56_5_value, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_value_is_defined, lambda_5, TAIL_CALL,
  POS(64, 15),
  POS(63, 7)
};

static FUNCTION_INFO i_lambda_2 = {
  t_lambda_2, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_value_is_defined[] = {
  2, // locals
  0, // parameters
  // insert &contents $new_height key value
  var_insert, 3, var_58_4_contents, var_55_5_key, var_56_5_value, 2, var_58_4_contents, LOCAL(2),
  // is_defined
  var_is_defined, 1, LOCAL(2), 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_3, lambda_4, TAIL_CALL,
  POS(65, 11),
  POS(67, 24),
  POS(66, 11),
  LOCAL(2)
};

static FUNCTION_INFO i_lambda_value_is_defined = {
  t_lambda_value_is_defined, NULL, 3, 1,
  {"65_29_new_height\000"}
};

static TAB_NUM t_lambda_3[] = {
  3, // locals
  0, // parameters
  // length_of(myself)+1
  var_length_of, 1, var_54_5_myself, 1, LOCAL(1),
  // length_of(myself)+1
  var_std__plus, 2, LOCAL(1), num_1, 1, LOCAL(2),
  // myself
  LET, -2, var_54_5_myself, var_contents_of, var_58_4_contents, var_length_of, LOCAL(2), LOCAL(3),
  // 
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(71, 28),
  POS(71, 28),
  POS(69, 15),
  POS(68, 15)
};

static FUNCTION_INFO i_lambda_3 = {
  t_lambda_3, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_4[] = {
  1, // locals
  0, // parameters
  // .contents_of contents)
  LET, -1, var_54_5_myself, var_contents_of, var_58_4_contents, LOCAL(1),
  //  myself(.contents_of contents)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(72, 23),
  POS(72, 15)
};

static FUNCTION_INFO i_lambda_4 = {
  t_lambda_4, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_5[] = {
  2, // locals
  0, // parameters
  // delete &contents $new_height key
  var_delete, 2, var_58_4_contents, var_55_5_key, 2, var_58_4_contents, LOCAL(2),
  // is_defined
  var_is_defined, 1, LOCAL(2), 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_6, lambda_7, TAIL_CALL,
  POS(74, 11),
  POS(76, 24),
  POS(75, 11),
  LOCAL(2)
};

static FUNCTION_INFO i_lambda_5 = {
  t_lambda_5, NULL, 3, 1,
  {"74_29_new_height\000"}
};

static TAB_NUM t_lambda_6[] = {
  3, // locals
  0, // parameters
  // length_of(myself)-1
  var_length_of, 1, var_54_5_myself, 1, LOCAL(1),
  // length_of(myself)-1
  var_std__minus, 2, LOCAL(1), num_1, 1, LOCAL(2),
  // myself
  LET, -2, var_54_5_myself, var_contents_of, var_58_4_contents, var_length_of, LOCAL(2), LOCAL(3),
  // 
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(80, 28),
  POS(80, 28),
  POS(78, 15),
  POS(77, 15)
};

static FUNCTION_INFO i_lambda_6 = {
  t_lambda_6, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_7[] = {
  0, // locals
  0, // parameters
  //  myself
  LET, 1, var_54_5_myself, TAIL_CALL,
  POS(81, 15)
};

static FUNCTION_INFO i_lambda_7 = {
  t_lambda_7, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_avl_node___height_of[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 88_23_self
  // self $_left $_right $_my_key $_my_value $my_height
  LOCAL(2), 0, 5, LOCAL(1), LOCAL(1), LOCAL(1), LOCAL(1), LOCAL(3),
  // -> my_height
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(89, 3),
  POS(90, 3),
  LOCAL(3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_avl_node___height_of = {
  t_func_avl_node___height_of, NULL, 2, 2,
  {"89_44_my_height\000", "88_23_self\000"}
};

static TAB_NUM t_func_std_types__avl_table___first_key_of[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 101_5_self
  // contents_of(self)
  var_contents_of, 1, LOCAL(2), 1, LOCAL(1),
  // fetch_first_key contents_of(self)
  func_fetch_first_key, 1, LOCAL(1), TAIL_CALL,
  POS(103, 19),
  POS(103, 3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_std_types__avl_table___first_key_of = {
  t_func_std_types__avl_table___first_key_of, NULL, 2, 1,
  {"101_5_self\000"}
};

static TAB_NUM t_func_std_types__avl_table___next_key_of[] = {
  2, // locals
  2, // parameters
  LOCAL(2), // 109_5_self
  var_110_5_key,
  // contents_of(self)
  var_contents_of, 1, LOCAL(2), 1, LOCAL(1),
  // fetch_next_key contents_of(self)
  func_fetch_next_key, 1, LOCAL(1), TAIL_CALL,
  POS(112, 18),
  POS(112, 3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_std_types__avl_table___next_key_of = {
  t_func_std_types__avl_table___next_key_of, NULL, 2, 1,
  {"109_5_self\000"}
};

static TAB_NUM t_func_fetch_next_key[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 114_21_node
  // node $left $right $my_key
  LOCAL(2), 0, 3, var_115_11_left, var_115_17_right, var_115_24_my_key,
  // key < my_key:
  var_std__less, 2, var_110_5_key, var_115_24_my_key, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_8, lambda_11, TAIL_CALL,
  POS(115, 5),
  POS(117, 7),
  POS(116, 5),
  LOCAL(2)
};

static FUNCTION_INFO i_func_fetch_next_key = {
  t_func_fetch_next_key, NULL, 3, 1,
  {"114_21_node\000"}
};

static TAB_NUM t_lambda_8[] = {
  1, // locals
  0, // parameters
  // $fetched_key fetch_next_key(left)
  func_fetch_next_key, 1, var_115_11_left, 1, var_118_10_fetched_key,
  // is_undefined
  var_is_undefined, 1, var_118_10_fetched_key, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_9, lambda_10, TAIL_CALL,
  POS(118, 9),
  POS(120, 23),
  POS(119, 9)
};

static FUNCTION_INFO i_lambda_8 = {
  t_lambda_8, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_9[] = {
  0, // locals
  0, // parameters
  //  my_key
  LET, 1, var_115_24_my_key, TAIL_CALL,
  POS(121, 13)
};

static FUNCTION_INFO i_lambda_9 = {
  t_lambda_9, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_10[] = {
  0, // locals
  0, // parameters
  //  fetched_key
  LET, 1, var_118_10_fetched_key, TAIL_CALL,
  POS(122, 13)
};

static FUNCTION_INFO i_lambda_10 = {
  t_lambda_10, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_11[] = {
  1, // locals
  0, // parameters
  // key == my_key:
  var_std__equal, 2, var_110_5_key, var_115_24_my_key, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_12, lambda_15, TAIL_CALL,
  POS(125, 11),
  POS(124, 9)
};

static FUNCTION_INFO i_lambda_11 = {
  t_lambda_11, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_12[] = {
  1, // locals
  0, // parameters
  // is_an_empty_node
  var_is_an_empty_node, 1, var_115_17_right, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_13, lambda_14, TAIL_CALL,
  POS(127, 21),
  POS(126, 13)
};

static FUNCTION_INFO i_lambda_12 = {
  t_lambda_12, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_13[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(128, 17)
};

static FUNCTION_INFO i_lambda_13 = {
  t_lambda_13, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_14[] = {
  1, // locals
  0, // parameters
  // fetch_first_key(right)
  func_fetch_first_key, 1, var_115_17_right, 1, LOCAL(1),
  //  fetch_first_key(right)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(129, 18),
  POS(129, 17)
};

static FUNCTION_INFO i_lambda_14 = {
  t_lambda_14, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_15[] = {
  1, // locals
  0, // parameters
  // is_an_empty_node
  var_is_an_empty_node, 1, var_115_17_right, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_16, lambda_17, TAIL_CALL,
  POS(132, 21),
  POS(131, 13)
};

static FUNCTION_INFO i_lambda_15 = {
  t_lambda_15, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_16[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(133, 17)
};

static FUNCTION_INFO i_lambda_16 = {
  t_lambda_16, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_17[] = {
  1, // locals
  0, // parameters
  // fetch_next_key(right)
  func_fetch_next_key, 1, var_115_17_right, 1, LOCAL(1),
  //  fetch_next_key(right)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(134, 18),
  POS(134, 17)
};

static FUNCTION_INFO i_lambda_17 = {
  t_lambda_17, NULL, 2, 0,
  {}
};

static TAB_NUM t_func_fetch_first_key[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 136_20_node
  // node $left $_right $my_key
  LOCAL(2), 0, 3, var_137_9_left, LOCAL(1), var_137_23_my_key,
  // is_an_empty_node
  var_is_an_empty_node, 1, var_137_9_left, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_18, lambda_19, TAIL_CALL,
  POS(137, 3),
  POS(139, 10),
  POS(138, 3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_fetch_first_key = {
  t_func_fetch_first_key, NULL, 3, 1,
  {"136_20_node\000"}
};

static TAB_NUM t_lambda_18[] = {
  0, // locals
  0, // parameters
  //  my_key
  LET, 1, var_137_23_my_key, TAIL_CALL,
  POS(140, 7)
};

static FUNCTION_INFO i_lambda_18 = {
  t_lambda_18, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_19[] = {
  1, // locals
  0, // parameters
  // fetch_first_key(left)
  func_fetch_first_key, 1, var_137_9_left, 1, LOCAL(1),
  //  fetch_first_key(left)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(141, 8),
  POS(141, 7)
};

static FUNCTION_INFO i_lambda_19 = {
  t_lambda_19, NULL, 2, 0,
  {}
};

static TAB_NUM t_func_empty_node___insert[] = {
  3, // locals
  3, // parameters
  LOCAL(1),
  LOCAL(2), // 146_28_key
  LOCAL(3), // 146_32_value
  // typed_tuple(avl_node empty_node empty_node key value 1) 1
  var_typed_tuple, 6, var_avl_node, var_empty_node, var_empty_node, LOCAL(2), LOCAL(3), num_1, 1, LOCAL(1),
  // -> typed_tuple(avl_node empty_node empty_node key value 1) 1
  LET, 2, LOCAL(1), num_1, TAIL_CALL,
  POS(147, 6),
  POS(147, 3),
  LOCAL(2),
  LOCAL(3)
};

static FUNCTION_INFO i_func_empty_node___insert = {
  t_func_empty_node___insert, NULL, 2, 2,
  {"146_28_key\000", "146_32_value\000"}
};

static TAB_NUM t_func_avl_node___insert[] = {
  1, // locals
  3, // parameters
  var_149_20_self,
  var_149_25_key,
  var_149_29_value,
  // self $left $right $my_key $my_value $my_height
  var_149_20_self, 0, 5, var_150_9_left, var_150_15_right, var_150_22_my_key, var_150_30_my_value, var_150_40_my_height,
  // key == my_key
  var_std__equal, 2, var_149_25_key, var_150_22_my_key, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_20, lambda_21, TAIL_CALL,
  POS(150, 3),
  POS(152, 5),
  POS(151, 3)
};

static FUNCTION_INFO i_func_avl_node___insert = {
  t_func_avl_node___insert, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_20[] = {
  1, // locals
  0, // parameters
  // typed_tuple(self left right key value my_height) undefined
  var_typed_tuple, 6, var_149_20_self, var_150_9_left, var_150_15_right, var_149_25_key, var_149_29_value, var_150_40_my_height, 1, LOCAL(1),
  //  typed_tuple(self left right key value my_height) undefined
  LET, 2, LOCAL(1), var_undefined, TAIL_CALL,
  POS(153, 8),
  POS(153, 7)
};

static FUNCTION_INFO i_lambda_20 = {
  t_lambda_20, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_21[] = {
  1, // locals
  0, // parameters
  // key < my_key:
  var_std__less, 2, var_149_25_key, var_150_22_my_key, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_22, lambda_32, TAIL_CALL,
  POS(156, 9),
  POS(155, 7)
};

static FUNCTION_INFO i_lambda_21 = {
  t_lambda_21, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_22[] = {
  1, // locals
  0, // parameters
  // insert &left $new_height key value
  var_insert, 3, var_150_9_left, var_149_25_key, var_149_29_value, 2, var_150_9_left, var_157_25_new_height,
  // is_undefined
  var_is_undefined, 1, var_157_25_new_height, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_23, lambda_24, TAIL_CALL,
  POS(157, 11),
  POS(159, 24),
  POS(158, 11)
};

static FUNCTION_INFO i_lambda_22 = {
  t_lambda_22, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_23[] = {
  1, // locals
  0, // parameters
  // typed_tuple(avl_node left right my_key my_value my_height) undefined
  var_typed_tuple, 6, var_avl_node, var_150_9_left, var_150_15_right, var_150_22_my_key, var_150_30_my_value, var_150_40_my_height, 1, LOCAL(1),
  //  typed_tuple(avl_node left right my_key my_value my_height) undefined
  LET, 2, LOCAL(1), var_undefined, TAIL_CALL,
  POS(160, 16),
  POS(160, 15)
};

static FUNCTION_INFO i_lambda_23 = {
  t_lambda_23, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_24[] = {
  2, // locals
  0, // parameters
  // new_height == UNCHANGED || new_height < my_height
  var_std__equal, 2, var_157_25_new_height, uni_UNCHANGED, 1, LOCAL(1),
  // new_height == UNCHANGED || new_height < my_height
  var_std__or, 2, LOCAL(1), lambda_25, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_26, lambda_27, TAIL_CALL,
  POS(163, 17),
  POS(163, 17),
  POS(162, 15)
};

static FUNCTION_INFO i_lambda_24 = {
  t_lambda_24, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_25[] = {
  1, // locals
  0, // parameters
  // new_height < my_height
  var_std__less, 2, var_157_25_new_height, var_150_40_my_height, 1, LOCAL(1),
  // new_height < my_height
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(163, 44),
  POS(163, 44)
};

static FUNCTION_INFO i_lambda_25 = {
  t_lambda_25, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_26[] = {
  1, // locals
  0, // parameters
  // typed_tuple(avl_node left right my_key my_value my_height) UNCHANGED
  var_typed_tuple, 6, var_avl_node, var_150_9_left, var_150_15_right, var_150_22_my_key, var_150_30_my_value, var_150_40_my_height, 1, LOCAL(1),
  //  typed_tuple(avl_node left right my_key my_value my_height) UNCHANGED
  LET, 2, LOCAL(1), uni_UNCHANGED, TAIL_CALL,
  POS(164, 20),
  POS(164, 19)
};

static FUNCTION_INFO i_lambda_26 = {
  t_lambda_26, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_27[] = {
  3, // locals
  0, // parameters
  // right $_right_left $_right_right $_right_key $_right_value
  var_150_15_right, 0, 5, LOCAL(1), LOCAL(1), LOCAL(1), LOCAL(1), LOCAL(3),
  // right_height+2:
  var_std__plus, 2, LOCAL(3), num_2, 1, LOCAL(1),
  // my_height == right_height+2:
  var_std__equal, 2, var_150_40_my_height, LOCAL(1), 1, LOCAL(2),
  // if_not
  var_if_not, 3, LOCAL(2), lambda_28, lambda_29, TAIL_CALL,
  POS(166, 19),
  POS(169, 34),
  POS(169, 21),
  POS(168, 19),
  LOCAL(3)
};

static FUNCTION_INFO i_lambda_27 = {
  t_lambda_27, NULL, 4, 1,
  {"167_22_right_height\000"}
};

static TAB_NUM t_lambda_28[] = {
  1, // locals
  0, // parameters
  // !my_height my_height+1
  var_std__plus, 2, var_150_40_my_height, num_1, 1, var_150_40_my_height,
  // typed_tuple(avl_node left right my_key my_value my_height) my_height
  var_typed_tuple, 6, var_avl_node, var_150_9_left, var_150_15_right, var_150_22_my_key, var_150_30_my_value, var_150_40_my_height, 1, LOCAL(1),
  // -> typed_tuple(avl_node left right my_key my_value my_height) my_height
  LET, 2, LOCAL(1), var_150_40_my_height, TAIL_CALL,
  POS(170, 23),
  POS(171, 26),
  POS(171, 23)
};

static FUNCTION_INFO i_lambda_28 = {
  t_lambda_28, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_29[] = {
  4, // locals
  0, // parameters
  // balance_left_to_right $new_node $new_node_height left right my_key my_value
  func_balance_left_to_right, 4, var_150_9_left, var_150_15_right, var_150_22_my_key, var_150_30_my_value, 2, LOCAL(3), LOCAL(4),
  // new_node_height == UNCHANGED
  var_std__equal, 2, LOCAL(4), uni_UNCHANGED, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_30, lambda_31, 1, LOCAL(2),
  // ->
  LET, 2, LOCAL(3), LOCAL(2), TAIL_CALL,
  POS(173, 23),
  POS(177, 27),
  POS(176, 25),
  POS(174, 23),
  LOCAL(3),
  LOCAL(4)
};

static FUNCTION_INFO i_lambda_29 = {
  t_lambda_29, NULL, 4, 2,
  {"173_46_new_node\000", "173_56_new_node_height\000"}
};

static TAB_NUM t_lambda_30[] = {
  1, // locals
  0, // parameters
  // my_height+1
  var_std__plus, 2, var_150_40_my_height, num_1, 1, LOCAL(1),
  //  my_height+1
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(178, 30),
  POS(178, 29)
};

static FUNCTION_INFO i_lambda_30 = {
  t_lambda_30, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_31[] = {
  0, // locals
  0, // parameters
  //  UNCHANGED
  LET, 1, uni_UNCHANGED, TAIL_CALL,
  POS(179, 29)
};

static FUNCTION_INFO i_lambda_31 = {
  t_lambda_31, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_32[] = {
  1, // locals
  0, // parameters
  // insert &right $new_height key value
  var_insert, 3, var_150_15_right, var_149_25_key, var_149_29_value, 2, var_150_15_right, var_181_26_new_height,
  // is_undefined
  var_is_undefined, 1, var_181_26_new_height, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_33, lambda_34, TAIL_CALL,
  POS(181, 11),
  POS(183, 24),
  POS(182, 11)
};

static FUNCTION_INFO i_lambda_32 = {
  t_lambda_32, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_33[] = {
  1, // locals
  0, // parameters
  // typed_tuple(avl_node left right my_key my_value my_height) undefined
  var_typed_tuple, 6, var_avl_node, var_150_9_left, var_150_15_right, var_150_22_my_key, var_150_30_my_value, var_150_40_my_height, 1, LOCAL(1),
  //  typed_tuple(avl_node left right my_key my_value my_height) undefined
  LET, 2, LOCAL(1), var_undefined, TAIL_CALL,
  POS(184, 16),
  POS(184, 15)
};

static FUNCTION_INFO i_lambda_33 = {
  t_lambda_33, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_34[] = {
  2, // locals
  0, // parameters
  // new_height == UNCHANGED || new_height < my_height
  var_std__equal, 2, var_181_26_new_height, uni_UNCHANGED, 1, LOCAL(1),
  // new_height == UNCHANGED || new_height < my_height
  var_std__or, 2, LOCAL(1), lambda_35, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_36, lambda_37, TAIL_CALL,
  POS(187, 17),
  POS(187, 17),
  POS(186, 15)
};

static FUNCTION_INFO i_lambda_34 = {
  t_lambda_34, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_35[] = {
  1, // locals
  0, // parameters
  // new_height < my_height
  var_std__less, 2, var_181_26_new_height, var_150_40_my_height, 1, LOCAL(1),
  // new_height < my_height
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(187, 44),
  POS(187, 44)
};

static FUNCTION_INFO i_lambda_35 = {
  t_lambda_35, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_36[] = {
  1, // locals
  0, // parameters
  // typed_tuple(avl_node left right my_key my_value my_height) UNCHANGED
  var_typed_tuple, 6, var_avl_node, var_150_9_left, var_150_15_right, var_150_22_my_key, var_150_30_my_value, var_150_40_my_height, 1, LOCAL(1),
  //  typed_tuple(avl_node left right my_key my_value my_height) UNCHANGED
  LET, 2, LOCAL(1), uni_UNCHANGED, TAIL_CALL,
  POS(188, 20),
  POS(188, 19)
};

static FUNCTION_INFO i_lambda_36 = {
  t_lambda_36, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_37[] = {
  3, // locals
  0, // parameters
  // left $_left_left $_left_right $_left_key $_left_value
  var_150_9_left, 0, 5, LOCAL(1), LOCAL(1), LOCAL(1), LOCAL(1), LOCAL(3),
  // left_height+2:
  var_std__plus, 2, LOCAL(3), num_2, 1, LOCAL(1),
  // my_height == left_height+2:
  var_std__equal, 2, var_150_40_my_height, LOCAL(1), 1, LOCAL(2),
  // if_not
  var_if_not, 3, LOCAL(2), lambda_38, lambda_39, TAIL_CALL,
  POS(190, 19),
  POS(193, 34),
  POS(193, 21),
  POS(192, 19),
  LOCAL(3)
};

static FUNCTION_INFO i_lambda_37 = {
  t_lambda_37, NULL, 4, 1,
  {"191_22_left_height\000"}
};

static TAB_NUM t_lambda_38[] = {
  1, // locals
  0, // parameters
  // !my_height my_height+1
  var_std__plus, 2, var_150_40_my_height, num_1, 1, var_150_40_my_height,
  // typed_tuple(avl_node left right my_key my_value my_height) my_height
  var_typed_tuple, 6, var_avl_node, var_150_9_left, var_150_15_right, var_150_22_my_key, var_150_30_my_value, var_150_40_my_height, 1, LOCAL(1),
  // -> typed_tuple(avl_node left right my_key my_value my_height) my_height
  LET, 2, LOCAL(1), var_150_40_my_height, TAIL_CALL,
  POS(194, 23),
  POS(195, 26),
  POS(195, 23)
};

static FUNCTION_INFO i_lambda_38 = {
  t_lambda_38, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_39[] = {
  4, // locals
  0, // parameters
  // balance_right_to_left $new_node $new_node_height left right my_key my_value
  func_balance_right_to_left, 4, var_150_9_left, var_150_15_right, var_150_22_my_key, var_150_30_my_value, 2, LOCAL(3), LOCAL(4),
  // new_node_height == UNCHANGED
  var_std__equal, 2, LOCAL(4), uni_UNCHANGED, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_40, lambda_41, 1, LOCAL(2),
  // ->
  LET, 2, LOCAL(3), LOCAL(2), TAIL_CALL,
  POS(197, 23),
  POS(201, 27),
  POS(200, 25),
  POS(198, 23),
  LOCAL(3),
  LOCAL(4)
};

static FUNCTION_INFO i_lambda_39 = {
  t_lambda_39, NULL, 4, 2,
  {"197_46_new_node\000", "197_56_new_node_height\000"}
};

static TAB_NUM t_lambda_40[] = {
  1, // locals
  0, // parameters
  // my_height+1
  var_std__plus, 2, var_150_40_my_height, num_1, 1, LOCAL(1),
  //  my_height+1
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(202, 30),
  POS(202, 29)
};

static FUNCTION_INFO i_lambda_40 = {
  t_lambda_40, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_41[] = {
  0, // locals
  0, // parameters
  //  UNCHANGED
  LET, 1, uni_UNCHANGED, TAIL_CALL,
  POS(203, 29)
};

static FUNCTION_INFO i_lambda_41 = {
  t_lambda_41, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_balance_left_to_right[] = {
  3, // locals
  4, // parameters
  LOCAL(2), // 205_26_left
  var_205_31_right,
  var_205_37_key,
  var_205_41_value,
  // left $left_left $left_right $left_key $left_value $left_height
  LOCAL(2), 0, 5, var_216_9_left_left, var_216_20_left_right, var_216_32_left_key, var_216_42_left_value, var_216_54_left_height,
  // left_left
  var_216_9_left_left, 0, 5, LOCAL(1), LOCAL(1), LOCAL(1), LOCAL(1), LOCAL(3),
  // left_right
  var_216_20_left_right, 0, 5, var_221_6_left_right_left, var_221_23_left_right_right, var_222_6_left_right_key, var_222_22_left_right_value, var_222_40_left_right_height,
  // left_left_height: # double rotation
  var_std__less, 2, LOCAL(3), var_222_40_left_right_height, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_42, lambda_43, TAIL_CALL,
  POS(216, 3),
  POS(217, 3),
  POS(220, 3),
  POS(224, 25),
  POS(223, 3),
  LOCAL(2),
  LOCAL(3)
};

static FUNCTION_INFO i_func_balance_left_to_right = {
  t_func_balance_left_to_right, NULL, 5, 2,
  {"205_26_left\000", "219_40_left_left_height\000"}
};

static TAB_NUM t_lambda_42[] = {
  3, // locals
  0, // parameters
  // $new_left
  var_typed_tuple, 6, var_avl_node, var_216_9_left_left, var_221_6_left_right_left, var_216_32_left_key, var_216_42_left_value, var_222_40_left_right_height, 1, LOCAL(2),
  // $new_right
  var_typed_tuple, 6, var_avl_node, var_221_23_left_right_right, var_205_31_right, var_205_37_key, var_205_41_value, var_222_40_left_right_height, 1, LOCAL(3),
  // typed_tuple
  var_typed_tuple, 6, var_avl_node, LOCAL(2), LOCAL(3), var_222_6_left_right_key, var_222_22_left_right_value, var_216_54_left_height, 1, LOCAL(1),
  // ->
  LET, 2, LOCAL(1), var_216_54_left_height, TAIL_CALL,
  POS(225, 7),
  POS(229, 7),
  POS(234, 9),
  POS(233, 7),
  LOCAL(2),
  LOCAL(3)
};

static FUNCTION_INFO i_lambda_42 = {
  t_lambda_42, NULL, 4, 2,
  {"225_8_new_left\000", "229_8_new_right\000"}
};

static TAB_NUM t_lambda_43[] = {
  6, // locals
  0, // parameters
  // left_right_height+1
  var_std__plus, 2, var_222_40_left_right_height, num_1, 1, LOCAL(1),
  // $new_right
  var_typed_tuple, 6, var_avl_node, var_216_20_left_right, var_205_31_right, var_205_37_key, var_205_41_value, LOCAL(1), 1, LOCAL(6),
  // left_right_height+2
  var_std__plus, 2, var_222_40_left_right_height, num_2, 1, LOCAL(1),
  // typed_tuple
  var_typed_tuple, 6, var_avl_node, var_216_9_left_left, LOCAL(6), var_216_32_left_key, var_216_42_left_value, LOCAL(1), 1, LOCAL(2),
  // left_right_height+1 == left_height
  var_std__plus, 2, var_222_40_left_right_height, num_1, 1, LOCAL(3),
  // left_right_height+1 == left_height
  var_std__equal, 2, LOCAL(3), var_216_54_left_height, 1, LOCAL(4),
  // if
  var_if, 3, LOCAL(4), lambda_44, lambda_45, 1, LOCAL(5),
  // ->
  LET, 2, LOCAL(2), LOCAL(5), TAIL_CALL,
  POS(241, 38),
  POS(238, 7),
  POS(244, 60),
  POS(243, 9),
  POS(246, 11),
  POS(246, 11),
  POS(245, 9),
  POS(242, 7),
  LOCAL(6)
};

static FUNCTION_INFO i_lambda_43 = {
  t_lambda_43, NULL, 8, 1,
  {"238_8_new_right\000"}
};

static TAB_NUM t_lambda_44[] = {
  0, // locals
  0, // parameters
  //  UNCHANGED
  LET, 1, uni_UNCHANGED, TAIL_CALL,
  POS(247, 13)
};

static FUNCTION_INFO i_lambda_44 = {
  t_lambda_44, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_45[] = {
  1, // locals
  0, // parameters
  // left_right_height+2
  var_std__plus, 2, var_222_40_left_right_height, num_2, 1, LOCAL(1),
  //  left_right_height+2
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(248, 14),
  POS(248, 13)
};

static FUNCTION_INFO i_lambda_45 = {
  t_lambda_45, NULL, 2, 0,
  {}
};

static TAB_NUM t_func_balance_right_to_left[] = {
  3, // locals
  4, // parameters
  var_250_26_left,
  LOCAL(2), // 250_31_right
  var_250_37_key,
  var_250_41_value,
  // right $right_left $right_right $right_key $right_value $right_height
  LOCAL(2), 0, 5, var_261_10_right_left, var_261_22_right_right, var_261_35_right_key, var_261_46_right_value, var_261_59_right_height,
  // right_left
  var_261_10_right_left, 0, 5, var_263_6_right_left_left, var_263_23_right_left_right, var_264_6_right_left_key, var_264_22_right_left_value, var_264_40_right_left_height,
  // right_right
  var_261_22_right_right, 0, 5, LOCAL(1), LOCAL(1), LOCAL(1), LOCAL(1), LOCAL(3),
  // right_right_height: # double rotation
  var_std__less, 2, LOCAL(3), var_264_40_right_left_height, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_46, lambda_47, TAIL_CALL,
  POS(261, 3),
  POS(262, 3),
  POS(265, 3),
  POS(269, 25),
  POS(268, 3),
  LOCAL(2),
  LOCAL(3)
};

static FUNCTION_INFO i_func_balance_right_to_left = {
  t_func_balance_right_to_left, NULL, 5, 2,
  {"250_31_right\000", "267_44_right_right_height\000"}
};

static TAB_NUM t_lambda_46[] = {
  3, // locals
  0, // parameters
  // $new_left
  var_typed_tuple, 6, var_avl_node, var_250_26_left, var_263_6_right_left_left, var_250_37_key, var_250_41_value, var_264_40_right_left_height, 1, LOCAL(2),
  // $new_right
  var_typed_tuple, 6, var_avl_node, var_263_23_right_left_right, var_261_22_right_right, var_261_35_right_key, var_261_46_right_value, var_264_40_right_left_height, 1, LOCAL(3),
  // typed_tuple
  var_typed_tuple, 6, var_avl_node, LOCAL(2), LOCAL(3), var_264_6_right_left_key, var_264_22_right_left_value, var_261_59_right_height, 1, LOCAL(1),
  // ->
  LET, 2, LOCAL(1), var_261_59_right_height, TAIL_CALL,
  POS(270, 7),
  POS(274, 7),
  POS(279, 9),
  POS(278, 7),
  LOCAL(3),
  LOCAL(2)
};

static FUNCTION_INFO i_lambda_46 = {
  t_lambda_46, NULL, 4, 2,
  {"274_8_new_right\000", "270_8_new_left\000"}
};

static TAB_NUM t_lambda_47[] = {
  6, // locals
  0, // parameters
  // right_left_height+1
  var_std__plus, 2, var_264_40_right_left_height, num_1, 1, LOCAL(1),
  // $new_left
  var_typed_tuple, 6, var_avl_node, var_250_26_left, var_261_10_right_left, var_250_37_key, var_250_41_value, LOCAL(1), 1, LOCAL(6),
  // right_left_height+2
  var_std__plus, 2, var_264_40_right_left_height, num_2, 1, LOCAL(1),
  // typed_tuple
  var_typed_tuple, 6, var_avl_node, LOCAL(6), var_261_22_right_right, var_261_35_right_key, var_261_46_right_value, LOCAL(1), 1, LOCAL(2),
  // right_left_height+1 == right_height
  var_std__plus, 2, var_264_40_right_left_height, num_1, 1, LOCAL(3),
  // right_left_height+1 == right_height
  var_std__equal, 2, LOCAL(3), var_261_59_right_height, 1, LOCAL(4),
  // if
  var_if, 3, LOCAL(4), lambda_48, lambda_49, 1, LOCAL(5),
  // ->
  LET, 2, LOCAL(2), LOCAL(5), TAIL_CALL,
  POS(286, 37),
  POS(283, 7),
  POS(289, 63),
  POS(288, 9),
  POS(291, 11),
  POS(291, 11),
  POS(290, 9),
  POS(287, 7),
  LOCAL(6)
};

static FUNCTION_INFO i_lambda_47 = {
  t_lambda_47, NULL, 8, 1,
  {"283_8_new_left\000"}
};

static TAB_NUM t_lambda_48[] = {
  0, // locals
  0, // parameters
  //  UNCHANGED
  LET, 1, uni_UNCHANGED, TAIL_CALL,
  POS(292, 13)
};

static FUNCTION_INFO i_lambda_48 = {
  t_lambda_48, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_49[] = {
  1, // locals
  0, // parameters
  // right_left_height+2
  var_std__plus, 2, var_264_40_right_left_height, num_2, 1, LOCAL(1),
  //  right_left_height+2
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(293, 14),
  POS(293, 13)
};

static FUNCTION_INFO i_lambda_49 = {
  t_lambda_49, NULL, 2, 0,
  {}
};

static TAB_NUM t_func_fetch_first[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 300_16_self
  // self $left $right $my_key $my_value $my_height
  LOCAL(2), 0, 5, var_306_9_left, var_306_15_right, var_306_22_my_key, var_306_30_my_value, var_306_40_my_height,
  // is_an_empty_node
  var_is_an_empty_node, 1, var_306_9_left, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_50, lambda_51, TAIL_CALL,
  POS(306, 3),
  POS(308, 10),
  POS(307, 3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_fetch_first = {
  t_func_fetch_first, NULL, 3, 1,
  {"300_16_self\000"}
};

static TAB_NUM t_lambda_50[] = {
  1, // locals
  0, // parameters
  // my_height-1
  var_std__minus, 2, var_306_40_my_height, num_1, 1, LOCAL(1),
  //  right my_key my_value my_height-1
  LET, 4, var_306_15_right, var_306_22_my_key, var_306_30_my_value, LOCAL(1), TAIL_CALL,
  POS(309, 30),
  POS(309, 7)
};

static FUNCTION_INFO i_lambda_50 = {
  t_lambda_50, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_51[] = {
  1, // locals
  0, // parameters
  // fetch_first &left $key $value $left_height
  func_fetch_first, 1, var_306_9_left, 4, var_306_9_left, var_311_26_key, var_311_31_value, var_311_38_left_height,
  // left_height == UNCHANGED
  var_std__equal, 2, var_311_38_left_height, uni_UNCHANGED, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_52, lambda_53, TAIL_CALL,
  POS(311, 7),
  POS(313, 9),
  POS(312, 7)
};

static FUNCTION_INFO i_lambda_51 = {
  t_lambda_51, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_52[] = {
  1, // locals
  0, // parameters
  // typed_tuple(avl_node left right my_key my_value my_height) key value UNCHANGED
  var_typed_tuple, 6, var_avl_node, var_306_9_left, var_306_15_right, var_306_22_my_key, var_306_30_my_value, var_306_40_my_height, 1, LOCAL(1),
  //  typed_tuple(avl_node left right my_key my_value my_height) key value UNCHANGED
  LET, 4, LOCAL(1), var_311_26_key, var_311_31_value, uni_UNCHANGED, TAIL_CALL,
  POS(314, 12),
  POS(314, 11)
};

static FUNCTION_INFO i_lambda_52 = {
  t_lambda_52, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_53[] = {
  2, // locals
  0, // parameters
  // right $_right_left $_right_right $_right_key $_right_value $right_height
  var_306_15_right, 0, 5, LOCAL(1), LOCAL(1), LOCAL(1), LOCAL(1), LOCAL(2),
  // $height_minus_2 my_height-2
  var_std__minus, 2, var_306_40_my_height, num_2, 1, var_317_12_height_minus_2,
  // right_height == height_minus_2 # => left_height == height_minus_2
  var_std__equal, 2, LOCAL(2), var_317_12_height_minus_2, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_54, lambda_55, TAIL_CALL,
  POS(316, 11),
  POS(317, 11),
  POS(319, 13),
  POS(318, 11),
  LOCAL(2)
};

static FUNCTION_INFO i_lambda_53 = {
  t_lambda_53, NULL, 4, 1,
  {"316_71_right_height\000"}
};

static TAB_NUM t_lambda_54[] = {
  3, // locals
  0, // parameters
  // my_height-1)
  var_std__minus, 2, var_306_40_my_height, num_1, 1, LOCAL(1),
  // typed_tuple(avl_node left right my_key my_value my_height-1)
  var_typed_tuple, 6, var_avl_node, var_306_9_left, var_306_15_right, var_306_22_my_key, var_306_30_my_value, LOCAL(1), 1, LOCAL(2),
  // my_height-1
  var_std__minus, 2, var_306_40_my_height, num_1, 1, LOCAL(3),
  // 
  LET, 4, LOCAL(2), var_311_26_key, var_311_31_value, LOCAL(3), TAIL_CALL,
  POS(321, 63),
  POS(321, 15),
  POS(322, 25),
  POS(320, 15)
};

static FUNCTION_INFO i_lambda_54 = {
  t_lambda_54, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_55[] = {
  1, // locals
  0, // parameters
  // left_height == height_minus_2
  var_std__equal, 2, var_311_38_left_height, var_317_12_height_minus_2, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_56, lambda_57, TAIL_CALL,
  POS(325, 17),
  POS(324, 15)
};

static FUNCTION_INFO i_lambda_55 = {
  t_lambda_55, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_56[] = {
  1, // locals
  0, // parameters
  // typed_tuple(avl_node left right my_key my_value my_height)
  var_typed_tuple, 6, var_avl_node, var_306_9_left, var_306_15_right, var_306_22_my_key, var_306_30_my_value, var_306_40_my_height, 1, LOCAL(1),
  // 
  LET, 4, LOCAL(1), var_311_26_key, var_311_31_value, uni_UNCHANGED, TAIL_CALL,
  POS(327, 19),
  POS(326, 19)
};

static FUNCTION_INFO i_lambda_56 = {
  t_lambda_56, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_57[] = {
  2, // locals
  0, // parameters
  // balance_right_to_left $new_node $new_height
  func_balance_right_to_left, 4, var_306_9_left, var_306_15_right, var_306_22_my_key, var_306_30_my_value, 2, var_330_42_new_node, LOCAL(2),
  // new_height == UNCHANGED
  var_std__equal, 2, LOCAL(2), uni_UNCHANGED, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_58, lambda_59, TAIL_CALL,
  POS(330, 19),
  POS(333, 21),
  POS(332, 19),
  LOCAL(2)
};

static FUNCTION_INFO i_lambda_57 = {
  t_lambda_57, NULL, 3, 1,
  {"330_52_new_height\000"}
};

static TAB_NUM t_lambda_58[] = {
  0, // locals
  0, // parameters
  //  new_node key value UNCHANGED
  LET, 4, var_330_42_new_node, var_311_26_key, var_311_31_value, uni_UNCHANGED, TAIL_CALL,
  POS(334, 23)
};

static FUNCTION_INFO i_lambda_58 = {
  t_lambda_58, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_59[] = {
  1, // locals
  0, // parameters
  // my_height-1
  var_std__minus, 2, var_306_40_my_height, num_1, 1, LOCAL(1),
  //  new_node key value my_height-1
  LET, 4, var_330_42_new_node, var_311_26_key, var_311_31_value, LOCAL(1), TAIL_CALL,
  POS(335, 43),
  POS(335, 23)
};

static FUNCTION_INFO i_lambda_59 = {
  t_lambda_59, NULL, 2, 0,
  {}
};

static TAB_NUM t_func_fetch_last[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 337_15_self
  // self $left $right $my_key $my_value $my_height
  LOCAL(2), 0, 5, var_343_9_left, var_343_15_right, var_343_22_my_key, var_343_30_my_value, var_343_40_my_height,
  // is_an_empty_node
  var_is_an_empty_node, 1, var_343_15_right, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_60, lambda_61, TAIL_CALL,
  POS(343, 3),
  POS(345, 11),
  POS(344, 3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_fetch_last = {
  t_func_fetch_last, NULL, 3, 1,
  {"337_15_self\000"}
};

static TAB_NUM t_lambda_60[] = {
  1, // locals
  0, // parameters
  // my_height-1
  var_std__minus, 2, var_343_40_my_height, num_1, 1, LOCAL(1),
  //  left my_key my_value my_height-1
  LET, 4, var_343_9_left, var_343_22_my_key, var_343_30_my_value, LOCAL(1), TAIL_CALL,
  POS(346, 29),
  POS(346, 7)
};

static FUNCTION_INFO i_lambda_60 = {
  t_lambda_60, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_61[] = {
  1, // locals
  0, // parameters
  // fetch_last &right $key $value $right_height
  func_fetch_last, 1, var_343_15_right, 4, var_343_15_right, var_348_26_key, var_348_31_value, var_348_38_right_height,
  // right_height == UNCHANGED
  var_std__equal, 2, var_348_38_right_height, uni_UNCHANGED, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_62, lambda_63, TAIL_CALL,
  POS(348, 7),
  POS(350, 9),
  POS(349, 7)
};

static FUNCTION_INFO i_lambda_61 = {
  t_lambda_61, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_62[] = {
  1, // locals
  0, // parameters
  // typed_tuple(avl_node left right my_key my_value my_height) key value UNCHANGED
  var_typed_tuple, 6, var_avl_node, var_343_9_left, var_343_15_right, var_343_22_my_key, var_343_30_my_value, var_343_40_my_height, 1, LOCAL(1),
  //  typed_tuple(avl_node left right my_key my_value my_height) key value UNCHANGED
  LET, 4, LOCAL(1), var_348_26_key, var_348_31_value, uni_UNCHANGED, TAIL_CALL,
  POS(351, 12),
  POS(351, 11)
};

static FUNCTION_INFO i_lambda_62 = {
  t_lambda_62, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_63[] = {
  2, // locals
  0, // parameters
  // left $_left_left $_left_right $_left_key $_left_value $left_height
  var_343_9_left, 0, 5, LOCAL(1), LOCAL(1), LOCAL(1), LOCAL(1), LOCAL(2),
  // $height_minus_2 my_height-2
  var_std__minus, 2, var_343_40_my_height, num_2, 1, var_354_12_height_minus_2,
  // left_height == height_minus_2 # => right_height == height_minus_2
  var_std__equal, 2, LOCAL(2), var_354_12_height_minus_2, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_64, lambda_65, TAIL_CALL,
  POS(353, 11),
  POS(354, 11),
  POS(356, 13),
  POS(355, 11),
  LOCAL(2)
};

static FUNCTION_INFO i_lambda_63 = {
  t_lambda_63, NULL, 4, 1,
  {"353_66_left_height\000"}
};

static TAB_NUM t_lambda_64[] = {
  3, // locals
  0, // parameters
  // my_height-1)
  var_std__minus, 2, var_343_40_my_height, num_1, 1, LOCAL(1),
  // typed_tuple(avl_node left right my_key my_value my_height-1)
  var_typed_tuple, 6, var_avl_node, var_343_9_left, var_343_15_right, var_343_22_my_key, var_343_30_my_value, LOCAL(1), 1, LOCAL(2),
  // my_height-1
  var_std__minus, 2, var_343_40_my_height, num_1, 1, LOCAL(3),
  // 
  LET, 4, LOCAL(2), var_348_26_key, var_348_31_value, LOCAL(3), TAIL_CALL,
  POS(358, 63),
  POS(358, 15),
  POS(359, 25),
  POS(357, 15)
};

static FUNCTION_INFO i_lambda_64 = {
  t_lambda_64, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_65[] = {
  1, // locals
  0, // parameters
  // right_height == height_minus_2
  var_std__equal, 2, var_348_38_right_height, var_354_12_height_minus_2, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_66, lambda_67, TAIL_CALL,
  POS(362, 17),
  POS(361, 15)
};

static FUNCTION_INFO i_lambda_65 = {
  t_lambda_65, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_66[] = {
  1, // locals
  0, // parameters
  // typed_tuple(avl_node left right my_key my_value my_height)
  var_typed_tuple, 6, var_avl_node, var_343_9_left, var_343_15_right, var_343_22_my_key, var_343_30_my_value, var_343_40_my_height, 1, LOCAL(1),
  // 
  LET, 4, LOCAL(1), var_348_26_key, var_348_31_value, uni_UNCHANGED, TAIL_CALL,
  POS(364, 19),
  POS(363, 19)
};

static FUNCTION_INFO i_lambda_66 = {
  t_lambda_66, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_67[] = {
  2, // locals
  0, // parameters
  // balance_left_to_right $new_node $new_height
  func_balance_left_to_right, 4, var_343_9_left, var_343_15_right, var_343_22_my_key, var_343_30_my_value, 2, var_367_42_new_node, LOCAL(2),
  // new_height == UNCHANGED
  var_std__equal, 2, LOCAL(2), uni_UNCHANGED, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_68, lambda_69, TAIL_CALL,
  POS(367, 19),
  POS(370, 21),
  POS(369, 19),
  LOCAL(2)
};

static FUNCTION_INFO i_lambda_67 = {
  t_lambda_67, NULL, 3, 1,
  {"367_52_new_height\000"}
};

static TAB_NUM t_lambda_68[] = {
  0, // locals
  0, // parameters
  //  new_node key value UNCHANGED
  LET, 4, var_367_42_new_node, var_348_26_key, var_348_31_value, uni_UNCHANGED, TAIL_CALL,
  POS(371, 23)
};

static FUNCTION_INFO i_lambda_68 = {
  t_lambda_68, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_69[] = {
  1, // locals
  0, // parameters
  // my_height-1
  var_std__minus, 2, var_343_40_my_height, num_1, 1, LOCAL(1),
  //  new_node key value my_height-1
  LET, 4, var_367_42_new_node, var_348_26_key, var_348_31_value, LOCAL(1), TAIL_CALL,
  POS(372, 43),
  POS(372, 23)
};

static FUNCTION_INFO i_lambda_69 = {
  t_lambda_69, NULL, 2, 0,
  {}
};

static TAB_NUM t_func_empty_node___delete[] = {
  2, // locals
  2, // parameters
  LOCAL(2), // 374_22_self
  LOCAL(1),
  // -> self undefined
  LET, 2, LOCAL(2), var_undefined, TAIL_CALL,
  POS(374, 33),
  LOCAL(2)
};

static FUNCTION_INFO i_func_empty_node___delete = {
  t_func_empty_node___delete, NULL, 1, 1,
  {"374_22_self\000"}
};

static TAB_NUM t_func_avl_node___delete[] = {
  1, // locals
  2, // parameters
  var_376_20_self,
  var_376_25_key,
  // self $left $right $my_key $my_value $my_height
  var_376_20_self, 0, 5, var_383_9_left, var_383_15_right, var_383_22_my_key, var_383_30_my_value, var_383_40_my_height,
  // key == my_key
  var_std__equal, 2, var_376_25_key, var_383_22_my_key, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_70, lambda_85, TAIL_CALL,
  POS(383, 3),
  POS(385, 5),
  POS(384, 3)
};

static FUNCTION_INFO i_func_avl_node___delete = {
  t_func_avl_node___delete, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_70[] = {
  1, // locals
  0, // parameters
  // is_an_empty_node
  var_is_an_empty_node, 1, var_383_9_left, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_71, lambda_72, TAIL_CALL,
  POS(388, 14),
  POS(387, 7)
};

static FUNCTION_INFO i_lambda_70 = {
  t_lambda_70, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_71[] = {
  1, // locals
  0, // parameters
  // my_height-1
  var_std__minus, 2, var_383_40_my_height, num_1, 1, LOCAL(1),
  //  right my_height-1
  LET, 2, var_383_15_right, LOCAL(1), TAIL_CALL,
  POS(389, 18),
  POS(389, 11)
};

static FUNCTION_INFO i_lambda_71 = {
  t_lambda_71, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_72[] = {
  1, // locals
  0, // parameters
  // is_an_empty_node
  var_is_an_empty_node, 1, var_383_15_right, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_73, lambda_74, TAIL_CALL,
  POS(392, 19),
  POS(391, 11)
};

static FUNCTION_INFO i_lambda_72 = {
  t_lambda_72, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_73[] = {
  1, // locals
  0, // parameters
  // my_height-1
  var_std__minus, 2, var_383_40_my_height, num_1, 1, LOCAL(1),
  //  left my_height-1
  LET, 2, var_383_9_left, LOCAL(1), TAIL_CALL,
  POS(393, 21),
  POS(393, 15)
};

static FUNCTION_INFO i_lambda_73 = {
  t_lambda_73, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_74[] = {
  1, // locals
  0, // parameters
  // left $_left_left $_left_right $_left_key $_left_value $left_height
  var_383_9_left, 0, 5, LOCAL(1), LOCAL(1), LOCAL(1), LOCAL(1), var_395_70_left_height,
  // right $_right_left $_right_right $_right_key $_right_value $right_height
  var_383_15_right, 0, 5, LOCAL(1), LOCAL(1), LOCAL(1), LOCAL(1), var_396_75_right_height,
  // cond
  var_cond, 3, lambda_75, lambda_79, lambda_83, TAIL_CALL,
  POS(395, 15),
  POS(396, 15),
  POS(397, 15)
};

static FUNCTION_INFO i_lambda_74 = {
  t_lambda_74, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_75[] = {
  1, // locals
  0, // parameters
  // right_height:
  var_std__less, 2, var_396_75_right_height, var_395_70_left_height, 1, LOCAL(1),
  //  left_height > right_height:
  LET, 2, LOCAL(1), lambda_76, TAIL_CALL,
  POS(398, 34),
  POS(398, 19)
};

static FUNCTION_INFO i_lambda_75 = {
  t_lambda_75, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_76[] = {
  2, // locals
  0, // parameters
  // fetch_last &left $last_key $last_value $new_left_height
  func_fetch_last, 1, var_383_9_left, 4, var_383_9_left, var_399_37_last_key, var_399_47_last_value, LOCAL(2),
  // new_left_height == UNCHANGED
  var_std__equal, 2, LOCAL(2), uni_UNCHANGED, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_77, lambda_78, TAIL_CALL,
  POS(399, 19),
  POS(401, 21),
  POS(400, 19),
  LOCAL(2)
};

static FUNCTION_INFO i_lambda_76 = {
  t_lambda_76, NULL, 3, 1,
  {"399_59_new_left_height\000"}
};

static TAB_NUM t_lambda_77[] = {
  1, // locals
  0, // parameters
  // typed_tuple(avl_node left right last_key last_value my_height)
  var_typed_tuple, 6, var_avl_node, var_383_9_left, var_383_15_right, var_399_37_last_key, var_399_47_last_value, var_383_40_my_height, 1, LOCAL(1),
  // 
  LET, 2, LOCAL(1), uni_UNCHANGED, TAIL_CALL,
  POS(403, 23),
  POS(402, 23)
};

static FUNCTION_INFO i_lambda_77 = {
  t_lambda_77, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_78[] = {
  3, // locals
  0, // parameters
  // my_height-1)
  var_std__minus, 2, var_383_40_my_height, num_1, 1, LOCAL(1),
  // typed_tuple(avl_node left right last_key last_value my_height-1)
  var_typed_tuple, 6, var_avl_node, var_383_9_left, var_383_15_right, var_399_37_last_key, var_399_47_last_value, LOCAL(1), 1, LOCAL(2),
  // my_height-1
  var_std__minus, 2, var_383_40_my_height, num_1, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(2), LOCAL(3), TAIL_CALL,
  POS(406, 75),
  POS(406, 23),
  POS(407, 23),
  POS(405, 23)
};

static FUNCTION_INFO i_lambda_78 = {
  t_lambda_78, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_79[] = {
  1, // locals
  0, // parameters
  // left_height:
  var_std__less, 2, var_395_70_left_height, var_396_75_right_height, 1, LOCAL(1),
  //  right_height > left_height:
  LET, 2, LOCAL(1), lambda_80, TAIL_CALL,
  POS(408, 35),
  POS(408, 19)
};

static FUNCTION_INFO i_lambda_79 = {
  t_lambda_79, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_80[] = {
  2, // locals
  0, // parameters
  // fetch_first &right $first_key $first_value $new_right_height
  func_fetch_first, 1, var_383_15_right, 4, var_383_15_right, var_409_39_first_key, var_409_50_first_value, LOCAL(2),
  // new_right_height == UNCHANGED
  var_std__equal, 2, LOCAL(2), uni_UNCHANGED, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_81, lambda_82, TAIL_CALL,
  POS(409, 19),
  POS(411, 21),
  POS(410, 19),
  LOCAL(2)
};

static FUNCTION_INFO i_lambda_80 = {
  t_lambda_80, NULL, 3, 1,
  {"409_63_new_right_height\000"}
};

static TAB_NUM t_lambda_81[] = {
  1, // locals
  0, // parameters
  // typed_tuple(avl_node left right first_key first_value my_height)
  var_typed_tuple, 6, var_avl_node, var_383_9_left, var_383_15_right, var_409_39_first_key, var_409_50_first_value, var_383_40_my_height, 1, LOCAL(1),
  // 
  LET, 2, LOCAL(1), uni_UNCHANGED, TAIL_CALL,
  POS(413, 23),
  POS(412, 23)
};

static FUNCTION_INFO i_lambda_81 = {
  t_lambda_81, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_82[] = {
  3, // locals
  0, // parameters
  // my_height-1)
  var_std__minus, 2, var_383_40_my_height, num_1, 1, LOCAL(1),
  // typed_tuple(avl_node left right first_key first_value my_height-1)
  var_typed_tuple, 6, var_avl_node, var_383_9_left, var_383_15_right, var_409_39_first_key, var_409_50_first_value, LOCAL(1), 1, LOCAL(2),
  // my_height-1
  var_std__minus, 2, var_383_40_my_height, num_1, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(2), LOCAL(3), TAIL_CALL,
  POS(416, 77),
  POS(416, 23),
  POS(417, 23),
  POS(415, 23)
};

static FUNCTION_INFO i_lambda_82 = {
  t_lambda_82, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_83[] = {
  0, // locals
  0, // parameters
  //  true:
  LET, 2, var_true, lambda_84, TAIL_CALL,
  POS(418, 19)
};

static FUNCTION_INFO i_lambda_83 = {
  t_lambda_83, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_84[] = {
  3, // locals
  0, // parameters
  // fetch_last &left $last_key $last_value !left_height
  func_fetch_last, 1, var_383_9_left, 4, var_383_9_left, LOCAL(2), LOCAL(3), var_395_70_left_height,
  // typed_tuple(avl_node left right last_key last_value my_height)
  var_typed_tuple, 6, var_avl_node, var_383_9_left, var_383_15_right, LOCAL(2), LOCAL(3), var_383_40_my_height, 1, LOCAL(1),
  // ->
  LET, 2, LOCAL(1), uni_UNCHANGED, TAIL_CALL,
  POS(419, 19),
  POS(421, 21),
  POS(420, 19),
  LOCAL(3),
  LOCAL(2)
};

static FUNCTION_INFO i_lambda_84 = {
  t_lambda_84, NULL, 3, 2,
  {"419_47_last_value\000", "419_37_last_key\000"}
};

static TAB_NUM t_lambda_85[] = {
  1, // locals
  0, // parameters
  // key < my_key
  var_std__less, 2, var_376_25_key, var_383_22_my_key, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_86, lambda_95, TAIL_CALL,
  POS(425, 9),
  POS(424, 7)
};

static FUNCTION_INFO i_lambda_85 = {
  t_lambda_85, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_86[] = {
  1, // locals
  0, // parameters
  // delete &left $left_height key
  var_delete, 2, var_383_9_left, var_376_25_key, 2, var_383_9_left, var_427_25_left_height,
  // is_undefined
  var_is_undefined, 1, var_427_25_left_height, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_87, lambda_88, TAIL_CALL,
  POS(427, 11),
  POS(429, 25),
  POS(428, 11)
};

static FUNCTION_INFO i_lambda_86 = {
  t_lambda_86, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_87[] = {
  0, // locals
  0, // parameters
  //  self undefined
  LET, 2, var_376_20_self, var_undefined, TAIL_CALL,
  POS(430, 15)
};

static FUNCTION_INFO i_lambda_87 = {
  t_lambda_87, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_88[] = {
  1, // locals
  0, // parameters
  // left_height == UNCHANGED
  var_std__equal, 2, var_427_25_left_height, uni_UNCHANGED, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_89, lambda_90, TAIL_CALL,
  POS(433, 17),
  POS(432, 15)
};

static FUNCTION_INFO i_lambda_88 = {
  t_lambda_88, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_89[] = {
  1, // locals
  0, // parameters
  // typed_tuple(avl_node left right my_key my_value my_height) UNCHANGED
  var_typed_tuple, 6, var_avl_node, var_383_9_left, var_383_15_right, var_383_22_my_key, var_383_30_my_value, var_383_40_my_height, 1, LOCAL(1),
  //  typed_tuple(avl_node left right my_key my_value my_height) UNCHANGED
  LET, 2, LOCAL(1), uni_UNCHANGED, TAIL_CALL,
  POS(434, 20),
  POS(434, 19)
};

static FUNCTION_INFO i_lambda_89 = {
  t_lambda_89, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_90[] = {
  2, // locals
  0, // parameters
  // my_height-3:
  var_std__minus, 2, var_383_40_my_height, num_3, 1, LOCAL(1),
  // left_height == my_height-3:
  var_std__equal, 2, var_427_25_left_height, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_91, lambda_92, TAIL_CALL,
  POS(437, 36),
  POS(437, 21),
  POS(436, 19)
};

static FUNCTION_INFO i_lambda_90 = {
  t_lambda_90, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_91[] = {
  2, // locals
  0, // parameters
  // balance_right_to_left $new_node $new_height
  func_balance_right_to_left, 4, var_383_9_left, var_383_15_right, var_383_22_my_key, var_383_30_my_value, 2, LOCAL(1), LOCAL(2),
  // -> new_node new_height
  LET, 2, LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(438, 23),
  POS(440, 23),
  LOCAL(2),
  LOCAL(1)
};

static FUNCTION_INFO i_lambda_91 = {
  t_lambda_91, NULL, 2, 2,
  {"438_56_new_height\000", "438_46_new_node\000"}
};

static TAB_NUM t_lambda_92[] = {
  2, // locals
  0, // parameters
  // right $_right_left $_right_right $_right_key $_right_value
  var_383_15_right, 0, 5, LOCAL(1), LOCAL(1), LOCAL(1), LOCAL(1), LOCAL(2),
  // left_height == right_height
  var_std__equal, 2, var_427_25_left_height, LOCAL(2), 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_93, lambda_94, TAIL_CALL,
  POS(442, 23),
  POS(445, 25),
  POS(444, 23),
  LOCAL(2)
};

static FUNCTION_INFO i_lambda_92 = {
  t_lambda_92, NULL, 3, 1,
  {"443_26_right_height\000"}
};

static TAB_NUM t_lambda_93[] = {
  3, // locals
  0, // parameters
  // left_height+1)
  var_std__plus, 2, var_427_25_left_height, num_1, 1, LOCAL(1),
  // typed_tuple(avl_node left right my_key my_value left_height+1)
  var_typed_tuple, 6, var_avl_node, var_383_9_left, var_383_15_right, var_383_22_my_key, var_383_30_my_value, LOCAL(1), 1, LOCAL(2),
  // left_height+1
  var_std__plus, 2, var_427_25_left_height, num_1, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(2), LOCAL(3), TAIL_CALL,
  POS(447, 75),
  POS(447, 27),
  POS(448, 27),
  POS(446, 27)
};

static FUNCTION_INFO i_lambda_93 = {
  t_lambda_93, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_94[] = {
  1, // locals
  0, // parameters
  // typed_tuple(avl_node left right my_key my_value my_height)
  var_typed_tuple, 6, var_avl_node, var_383_9_left, var_383_15_right, var_383_22_my_key, var_383_30_my_value, var_383_40_my_height, 1, LOCAL(1),
  // 
  LET, 2, LOCAL(1), uni_UNCHANGED, TAIL_CALL,
  POS(450, 27),
  POS(449, 27)
};

static FUNCTION_INFO i_lambda_94 = {
  t_lambda_94, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_95[] = {
  1, // locals
  0, // parameters
  // delete &right $right_height key
  var_delete, 2, var_383_15_right, var_376_25_key, 2, var_383_15_right, var_453_26_right_height,
  // is_undefined
  var_is_undefined, 1, var_453_26_right_height, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_96, lambda_97, TAIL_CALL,
  POS(453, 11),
  POS(455, 26),
  POS(454, 11)
};

static FUNCTION_INFO i_lambda_95 = {
  t_lambda_95, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_96[] = {
  0, // locals
  0, // parameters
  //  self undefined
  LET, 2, var_376_20_self, var_undefined, TAIL_CALL,
  POS(456, 15)
};

static FUNCTION_INFO i_lambda_96 = {
  t_lambda_96, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_97[] = {
  1, // locals
  0, // parameters
  // right_height == UNCHANGED
  var_std__equal, 2, var_453_26_right_height, uni_UNCHANGED, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_98, lambda_99, TAIL_CALL,
  POS(459, 17),
  POS(458, 15)
};

static FUNCTION_INFO i_lambda_97 = {
  t_lambda_97, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_98[] = {
  1, // locals
  0, // parameters
  // typed_tuple(avl_node left right my_key my_value my_height) UNCHANGED
  var_typed_tuple, 6, var_avl_node, var_383_9_left, var_383_15_right, var_383_22_my_key, var_383_30_my_value, var_383_40_my_height, 1, LOCAL(1),
  //  typed_tuple(avl_node left right my_key my_value my_height) UNCHANGED
  LET, 2, LOCAL(1), uni_UNCHANGED, TAIL_CALL,
  POS(460, 20),
  POS(460, 19)
};

static FUNCTION_INFO i_lambda_98 = {
  t_lambda_98, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_99[] = {
  2, // locals
  0, // parameters
  // my_height-3:
  var_std__minus, 2, var_383_40_my_height, num_3, 1, LOCAL(1),
  // right_height == my_height-3:
  var_std__equal, 2, var_453_26_right_height, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_100, lambda_101, TAIL_CALL,
  POS(463, 37),
  POS(463, 21),
  POS(462, 19)
};

static FUNCTION_INFO i_lambda_99 = {
  t_lambda_99, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_100[] = {
  2, // locals
  0, // parameters
  // balance_left_to_right $new_node $new_height
  func_balance_left_to_right, 4, var_383_9_left, var_383_15_right, var_383_22_my_key, var_383_30_my_value, 2, LOCAL(1), LOCAL(2),
  // -> new_node new_height
  LET, 2, LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(464, 23),
  POS(466, 23),
  LOCAL(2),
  LOCAL(1)
};

static FUNCTION_INFO i_lambda_100 = {
  t_lambda_100, NULL, 2, 2,
  {"464_56_new_height\000", "464_46_new_node\000"}
};

static TAB_NUM t_lambda_101[] = {
  1, // locals
  0, // parameters
  // left $_left_left $_left_right $_left_key $_left_value
  var_383_9_left, 0, 5, LOCAL(1), LOCAL(1), LOCAL(1), LOCAL(1), var_469_26_left_height,
  // left_height == right_height
  var_std__equal, 2, var_469_26_left_height, var_453_26_right_height, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_102, lambda_103, TAIL_CALL,
  POS(468, 23),
  POS(471, 25),
  POS(470, 23)
};

static FUNCTION_INFO i_lambda_101 = {
  t_lambda_101, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_102[] = {
  3, // locals
  0, // parameters
  // left_height+1)
  var_std__plus, 2, var_469_26_left_height, num_1, 1, LOCAL(1),
  // typed_tuple(avl_node left right my_key my_value left_height+1)
  var_typed_tuple, 6, var_avl_node, var_383_9_left, var_383_15_right, var_383_22_my_key, var_383_30_my_value, LOCAL(1), 1, LOCAL(2),
  // left_height+1
  var_std__plus, 2, var_469_26_left_height, num_1, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(2), LOCAL(3), TAIL_CALL,
  POS(473, 75),
  POS(473, 27),
  POS(474, 27),
  POS(472, 27)
};

static FUNCTION_INFO i_lambda_102 = {
  t_lambda_102, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_103[] = {
  1, // locals
  0, // parameters
  // typed_tuple(avl_node left right my_key my_value my_height)
  var_typed_tuple, 6, var_avl_node, var_383_9_left, var_383_15_right, var_383_22_my_key, var_383_30_my_value, var_383_40_my_height, 1, LOCAL(1),
  // 
  LET, 2, LOCAL(1), uni_UNCHANGED, TAIL_CALL,
  POS(476, 27),
  POS(475, 27)
};

static FUNCTION_INFO i_lambda_103 = {
  t_lambda_103, NULL, 2, 0,
  {}
};

static TAB_NUM t_func_avl_node___validate[] = {
  4, // locals
  3, // parameters
  LOCAL(4), // 498_22_self
  var_498_27_low,
  var_498_31_high,
  // self $left $right $key $_value $height
  LOCAL(4), 0, 5, var_499_9_left, var_499_15_right, var_499_22_key, LOCAL(1), var_499_35_height,
  // is_defined && key < low
  var_is_defined, 1, var_498_27_low, 1, LOCAL(1),
  // is_defined && key < low
  var_std__and, 2, LOCAL(1), lambda_104, 1, LOCAL(2),
  // 
  var_std__or, 2, LOCAL(2), lambda_105, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_107, var_pass, 0,
  // left $_left_left $_left_right $_left_key $_left_value $left_height
  var_499_9_left, 0, 5, LOCAL(1), LOCAL(1), LOCAL(1), LOCAL(1), var_509_58_left_height,
  // right $_right_left $_right_right $_right_key $_right_value $right_height
  var_499_15_right, 0, 5, LOCAL(1), LOCAL(1), LOCAL(1), LOCAL(1), var_510_63_right_height,
  // max(left_height right_height)+1 == height
  var_max, 2, var_509_58_left_height, var_510_63_right_height, 1, LOCAL(1),
  // max(left_height right_height)+1 == height
  var_std__plus, 2, LOCAL(1), num_1, 1, LOCAL(2),
  // max(left_height right_height)+1 == height
  var_std__equal, 2, LOCAL(2), var_499_35_height, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_108, lambda_109, TAIL_CALL,
  POS(499, 3),
  POS(502, 11),
  POS(502, 11),
  POS(501, 7),
  POS(500, 3),
  POS(509, 3),
  POS(510, 3),
  POS(512, 5),
  POS(512, 5),
  POS(512, 5),
  POS(511, 3),
  LOCAL(4)
};

static FUNCTION_INFO i_func_avl_node___validate = {
  t_func_avl_node___validate, NULL, 11, 1,
  {"498_22_self\000"}
};

static TAB_NUM t_lambda_104[] = {
  1, // locals
  0, // parameters
  // key < low
  var_std__less, 2, var_499_22_key, var_498_27_low, 1, LOCAL(1),
  // key < low
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(502, 25),
  POS(502, 25)
};

static FUNCTION_INFO i_lambda_104 = {
  t_lambda_104, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_105[] = {
  2, // locals
  0, // parameters
  // is_defined && key > high
  var_is_defined, 1, var_498_31_high, 1, LOCAL(1),
  // is_defined && key > high
  var_std__and, 2, LOCAL(1), lambda_106, 1, LOCAL(2),
  // high.is_defined && key > high
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(503, 12),
  POS(503, 12),
  POS(503, 7)
};

static FUNCTION_INFO i_lambda_105 = {
  t_lambda_105, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_106[] = {
  1, // locals
  0, // parameters
  // high
  var_std__less, 2, var_498_31_high, var_499_22_key, 1, LOCAL(1),
  // key > high
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(503, 32),
  POS(503, 26)
};

static FUNCTION_INFO i_lambda_106 = {
  t_lambda_106, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_107[] = {
  3, // locals
  0, // parameters
  // default_value(low '[')) < @(key) < @(default_value(high ']')) failed!
  var_default_value, 2, var_498_27_low, chr_91, 1, LOCAL(1),
  // default_value(high ']')) failed!
  var_default_value, 2, var_498_31_high, chr_93, 1, LOCAL(2),
  // "
  var_std__string, 6, LOCAL(1), string_1, var_499_22_key, string_1, LOCAL(2), str__failed, 1, LOCAL(3),
  // debug::print "
  var_debug__print, 1, LOCAL(3), 0,
  // debug::exit
  var_debug__exit, 0, TAIL_CALL,
  POS(506, 11),
  POS(506, 48),
  POS(505, 20),
  POS(505, 7),
  POS(507, 7)
};

static FUNCTION_INFO i_lambda_107 = {
  t_lambda_107, NULL, 5, 0,
  {}
};

static TAB_NUM t_lambda_108[] = {
  4, // locals
  0, // parameters
  // validate(left low key)+1+validate(right key high)
  var_validate, 3, var_499_9_left, var_498_27_low, var_499_22_key, 1, LOCAL(1),
  // validate(left low key)+1+validate(right key high)
  var_std__plus, 2, LOCAL(1), num_1, 1, LOCAL(2),
  // validate(right key high)
  var_validate, 3, var_499_15_right, var_499_22_key, var_498_31_high, 1, LOCAL(3),
  // validate(left low key)+1+validate(right key high)
  var_std__plus, 2, LOCAL(2), LOCAL(3), 1, LOCAL(4),
  //  validate(left low key)+1+validate(right key high)
  LET, 1, LOCAL(4), TAIL_CALL,
  POS(513, 8),
  POS(513, 8),
  POS(513, 33),
  POS(513, 8),
  POS(513, 7)
};

static FUNCTION_INFO i_lambda_108 = {
  t_lambda_108, NULL, 5, 0,
  {}
};

static TAB_NUM t_lambda_109[] = {
  1, // locals
  0, // parameters
  // "
  var_std__string, 7, str_left_height, var_509_58_left_height, str__right_height, var_510_63_right_height, str__height, var_499_35_height, string_2, 1, LOCAL(1),
  // debug::print "
  var_debug__print, 1, LOCAL(1), 0,
  // debug::exit
  var_debug__exit, 0, TAIL_CALL,
  POS(515, 20),
  POS(515, 7),
  POS(518, 7)
};

static FUNCTION_INFO i_lambda_109 = {
  t_lambda_109, NULL, 3, 0,
  {}
};

static int tuple_47_1_arguments[] = {
  -var_undefined, -var_undefined, -var_undefined, -var_undefined, -var_undefined
};

static FUNKY_CONSTANT constants_table[] = {
  {FLT_TUPLE, 5, {.arguments = tuple_47_1_arguments}},
  {FLT_UNIQUE, 0, {.str_8 = "NONE"}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__avl_table}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_1}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_2}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_value_is_defined}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_3}},
  {FLT_POSITIVE_INT64, 0, {.value = 1}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_4}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_5}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_6}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_7}},
  {FLT_POSITIVE_INT64, 0, {.value = 0}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_avl_node___height_of}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__avl_table___first_key_of}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__avl_table___next_key_of}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_fetch_next_key}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_8}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_9}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_10}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_11}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_12}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_13}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_14}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_15}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_16}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_17}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_fetch_first_key}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_18}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_19}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_empty_node___insert}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_avl_node___insert}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_20}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_21}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_22}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_23}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_24}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_25}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_26}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_27}},
  {FLT_POSITIVE_INT64, 0, {.value = 2}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_28}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_29}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_30}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_31}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_32}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_33}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_34}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_35}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_36}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_37}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_38}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_39}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_40}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_41}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_balance_left_to_right}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_42}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_43}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_44}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_45}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_balance_right_to_left}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_46}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_47}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_48}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_49}},
  {FLT_UNIQUE, 0, {.str_8 = "UNCHANGED"}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_fetch_first}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_50}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_51}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_52}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_53}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_54}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_55}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_56}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_57}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_58}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_59}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_fetch_last}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_60}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_61}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_62}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_63}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_64}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_65}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_66}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_67}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_68}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_69}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_empty_node___delete}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_avl_node___delete}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_70}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_71}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_72}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_73}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_74}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_75}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_76}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_77}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_78}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_79}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_80}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_81}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_82}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_83}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_84}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_85}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_86}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_87}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_88}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_89}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_90}},
  {FLT_POSITIVE_INT64, 0, {.value = 3}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_91}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_92}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_93}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_94}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_95}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_96}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_97}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_98}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_99}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_100}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_101}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_102}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_103}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_avl_node___validate}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_104}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_105}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_106}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_107}},
  {FLT_CHARACTER, 0, {.value = 91}},
  {FLT_CHARACTER, 0, {.value = 93}},
  {FLT_STRING_8, 3, {.str_8 = " < "}},
  {FLT_STRING_8, 9, {.str_8 = " failed!\012"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_108}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_109}},
  {FLT_STRING_8, 13, {.str_8 = "left height: "}},
  {FLT_STRING_8, 16, {.str_8 = ", right height: "}},
  {FLT_STRING_8, 10, {.str_8 = ", height: "}},
  {FLT_STRING_8, 1, {.str_8 = "\012"}}
};

static ATTRIBUTE_DEFINITION std_types__object__attributes[] = {
  {-var_is_an_avl_table, -var_false}
};

static ATTRIBUTE_DEFINITION std_types__avl_table__attributes[] = {
  {-var_is_an_avl_table, -var_true},
  {-var_contents_of, -var_empty_node},
  {TYPE_FUNCTION, -func_std_types__avl_table},
  {var_first_key_of, -func_std_types__avl_table___first_key_of},
  {var_next_key_of, -func_std_types__avl_table___next_key_of}
};

static ATTRIBUTE_DEFINITION avl_node__attributes[] = {
  {-var_is_an_empty_node, -var_false},
  {var_height_of, -func_avl_node___height_of},
  {var_retrieve, -var_retrieve_method},
  {var_insert, -func_avl_node___insert},
  {var_delete, -func_avl_node___delete},
  {var_for_each_1_left, -var_for_each_1_left_method},
  {var_for_each_2_left, -var_for_each_2_left_method},
  {var_for_each_1_call, -var_for_each_1_call_method},
  {var_for_each_2_call, -var_for_each_2_call_method},
  {var_for_each_1_right, -var_for_each_1_right_method},
  {var_for_each_2_right, -var_for_each_2_right_method},
  {var_map_1, -var_map_1_method},
  {var_map_2, -var_map_2_method},
  {var_validate, -func_avl_node___validate}
};

static ATTRIBUTE_DEFINITION empty_node__attributes[] = {
  {-var_height_of, -num_0},
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
    "height_of\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "is_an_avl_table\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "object\000std_types", std_types__object__attributes,
    {.position = POS(35, 1)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "is_an_avl_table\000", NULL,
    {.position = POS(35, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "false\000", NULL,
    {.position = POS(35, 36)}
  },
  {
    FOT_DERIVED, 0, 5,
    "avl_table\000std_types", std_types__avl_table__attributes,
    {"binary_table\000std_types"}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "true\000", NULL,
    {.position = POS(36, 39)}
  },
  {
    FOT_INITIALIZED, 0, 14,
    "avl_node\000", avl_node__attributes,
    {.const_idx = -tuple_47_1}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "is_an_empty_node\000", NULL,
    {.position = POS(38, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "binary_table\000std_types", NULL,
    {.position = POS(40, 23)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "contents_of\000", NULL,
    {.position = POS(41, 23)}
  },
  {
    FOT_DERIVED, 0, 3,
    "empty_node\000", empty_node__attributes,
    {"empty_binary_node\000basic_collections"}
  },
  {
    FOT_DERIVED, 0, 0,
    "empty_avl_table\000std", NULL,
    {"avl_table\000std_types"}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_binary_node\000basic_collections", NULL,
    {.position = POS(45, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "undefined\000", NULL,
    {.position = POS(47, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "tuple\000", NULL,
    {.position = POS(47, 11)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "54_5_myself\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "55_5_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "56_5_value\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "58_4_contents\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "equal\000std", NULL,
    {.position = POS(60, 5)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "retrieve\000", NULL,
    {.position = POS(61, 8)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_defined\000", NULL,
    {.position = POS(64, 15)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "length_of\000", NULL,
    {.position = POS(71, 28)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000std", NULL,
    {.position = POS(71, 28)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if\000", NULL,
    {.position = POS(66, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "minus\000std", NULL,
    {.position = POS(80, 28)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "retrieve_method\000", NULL,
    {.position = POS(95, 20)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "first_key_of\000", NULL,
    {.position = POS(97, 23)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "next_key_of\000", NULL,
    {.position = POS(105, 23)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "110_5_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "115_11_left\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "115_17_right\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "115_24_my_key\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "less\000std", NULL,
    {.position = POS(117, 7)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "118_10_fetched_key\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_undefined\000", NULL,
    {.position = POS(120, 23)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "137_9_left\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "137_23_my_key\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "typed_tuple\000", NULL,
    {.position = POS(147, 6)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "149_20_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "149_25_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "149_29_value\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "150_9_left\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "150_15_right\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "150_22_my_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "150_30_my_value\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "150_40_my_height\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "157_25_new_height\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "or\000std", NULL,
    {.position = POS(163, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if_not\000", NULL,
    {.position = POS(168, 19)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "181_26_new_height\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "205_31_right\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "205_37_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "205_41_value\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "216_9_left_left\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "216_20_left_right\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "216_32_left_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "216_42_left_value\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "216_54_left_height\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "221_6_left_right_left\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "221_23_left_right_right\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "222_6_left_right_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "222_22_left_right_value\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "222_40_left_right_height\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "250_26_left\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "250_37_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "250_41_value\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "261_10_right_left\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "261_22_right_right\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "261_35_right_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "261_46_right_value\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "261_59_right_height\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "263_6_right_left_left\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "263_23_right_left_right\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "264_6_right_left_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "264_22_right_left_value\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "264_40_right_left_height\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "306_9_left\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "306_15_right\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "306_22_my_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "306_30_my_value\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "306_40_my_height\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "311_26_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "311_31_value\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "311_38_left_height\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "317_12_height_minus_2\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "330_42_new_node\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "343_9_left\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "343_15_right\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "343_22_my_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "343_30_my_value\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "343_40_my_height\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "348_26_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "348_31_value\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "348_38_right_height\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "354_12_height_minus_2\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "367_42_new_node\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "376_20_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "376_25_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "383_9_left\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "383_15_right\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "383_22_my_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "383_30_my_value\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "383_40_my_height\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "395_70_left_height\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "396_75_right_height\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "399_37_last_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "399_47_last_value\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "409_39_first_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "409_50_first_value\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "cond\000", NULL,
    {.position = POS(397, 15)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "427_25_left_height\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "453_26_right_height\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "469_26_left_height\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "for_each_1_left\000", NULL,
    {.position = POS(482, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "for_each_1_left_method\000", NULL,
    {.position = POS(482, 27)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "for_each_2_left\000", NULL,
    {.position = POS(483, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "for_each_2_left_method\000", NULL,
    {.position = POS(483, 27)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "for_each_1_call\000", NULL,
    {.position = POS(484, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "for_each_1_call_method\000", NULL,
    {.position = POS(484, 27)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "for_each_2_call\000", NULL,
    {.position = POS(485, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "for_each_2_call_method\000", NULL,
    {.position = POS(485, 27)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "for_each_1_right\000", NULL,
    {.position = POS(486, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "for_each_1_right_method\000", NULL,
    {.position = POS(486, 28)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "for_each_2_right\000", NULL,
    {.position = POS(487, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "for_each_2_right_method\000", NULL,
    {.position = POS(487, 28)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "map_1\000", NULL,
    {.position = POS(492, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "map_1_method\000", NULL,
    {.position = POS(492, 17)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "map_2\000", NULL,
    {.position = POS(493, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "map_2_method\000", NULL,
    {.position = POS(493, 17)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "validate\000", NULL,
    {.position = POS(498, 11)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "498_27_low\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "498_31_high\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "499_9_left\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "499_15_right\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "499_22_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "499_35_height\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "and\000std", NULL,
    {.position = POS(502, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "default_value\000", NULL,
    {.position = POS(506, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "string\000std", NULL,
    {.position = POS(505, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "print\000debug", NULL,
    {.position = POS(505, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "exit\000debug", NULL,
    {.position = POS(507, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "pass\000", NULL,
    {.position = POS(508, 5)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "509_58_left_height\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "510_63_right_height\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "max\000", NULL,
    {.position = POS(512, 5)}
  }
};

static FUNKY_NAMESPACE used_namespaces[] = {
  {"std", 1, 0},
  {"basic_collections", 1, 0}
};

FUNKY_MODULE module__basic__types__collections__tables__avl_table = {
  "_basic__types__collections__tables__avl_table", // module name
  "basic/types/collections/tables/avl_table.fky", // module filename
  .major_version = 0,
  .minor_version = 0,
  .feature_flags = FEAT_POSITIONS|FEAT_FUNCTION_INFO,
  .marker = 0,
  0, // number of required modules
  0, // number of defined namespaces
  2, // number of used namespaces
  140, // number of constants
  150, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  constants_table,
  variables_table,
};
