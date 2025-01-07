#include <stddef.h>
#include <stdint.h>

#include "runtime/common.h"
#include "runtime/builtins.h"
#include "runtime/fko.h"
#include "runtime/memory.h"

enum {
  tuple_73_1 = -1,
  num_0 = -2,
  tuple_76_1 = -3,
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
  lambda_31 = -57,
  num_2 = -58,
  lambda_32 = -59,
  lambda_next = -60,
  lambda_33 = -61,
  lambda_2_next = -62,
  func_basic_collections__empty_binary_node___map_1 = -63,
  func_basic_collections__empty_binary_node___map_2 = -64,
  func_basic_collections__map_1_method = -65,
  func_basic_collections__map_2_method = -66,
  func_std_types__binary_table___map = -67,
  lambda_34 = -68,
  lambda_35 = -69,
  func_std_types__binary_table___reduce = -70,
  lambda_36 = -71,
  lambda_37 = -72,
  func_reduce = -73,
  lambda_38 = -74,
  func_check_right = -75,
  lambda_39 = -76,
  lambda_40 = -77,
  func_std_types__binary_table___map_reduce = -78,
  lambda_41 = -79,
  lambda_42 = -80,
  lambda_43 = -81,
  lambda_44 = -82,
  func_map_reduce_1 = -83,
  lambda_45 = -84,
  func_2_check_right = -85,
  lambda_46 = -86,
  lambda_47 = -87,
  func_map_reduce_2 = -88,
  lambda_48 = -89,
  func_3_check_right = -90,
  lambda_49 = -91,
  lambda_50 = -92,
  func_basic_collections__empty_binary_node___validate = -93,
  func_node___validate = -94,
  lambda_51 = -95,
  lambda_52 = -96,
  lambda_53 = -97,
  lambda_54 = -98,
  chr_91 = -99,
  chr_93 = -100,
  string_1 = -101,
  str__failed = -102,
  func_std_types__binary_table___validate = -103,
  lambda_55 = -104,
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
  var_111_5_myself, // dynamic
  var_112_5_key, // dynamic
  var_113_5_value, // dynamic
  var_115_4_contents, // dynamic
  var_std__equal, // extern
  var_retrieve, // extern polymorphic
  var_is_defined, // extern
  var_std__plus, // extern
  var_if_not, // extern
  var_std__minus, // extern
  var_if, // extern
  var_basic_collections__retrieve_method, // initialized
  var_145_44_key, // dynamic
  var_146_9_left, // dynamic
  var_146_15_right, // dynamic
  var_146_22_my_key, // dynamic
  var_146_30_my_value, // dynamic
  var_std__less, // extern
  var_retrieve_method, // extern
  var_typed_tuple, // extern
  var_170_16_self, // dynamic
  var_170_21_key, // dynamic
  var_170_25_value, // dynamic
  var_171_9_left, // dynamic
  var_171_15_right, // dynamic
  var_171_22_my_key, // dynamic
  var_171_30_my_value, // dynamic
  var_172_4_did_insert, // dynamic
  var_192_16_self, // dynamic
  var_193_9_left, // dynamic
  var_193_15_right, // dynamic
  var_193_22_my_key, // dynamic
  var_193_30_my_value, // dynamic
  var_203_16_self, // dynamic
  var_203_21_key, // dynamic
  var_204_9_left, // dynamic
  var_204_15_right, // dynamic
  var_204_22_my_key, // dynamic
  var_204_30_my_value, // dynamic
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
  var_313_5_self, // dynamic
  var_315_5_finally, // dynamic
  var_next, // extern
  var_basic_loops__finally, // extern
  var_list, // extern
  var_basic_types__break_function, // extern
  var_basic_loops__saved_context_of, // extern polymorphic
  var_new, // extern
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
  var_382_5_self, // dynamic
  var_reduce, // extern polymorphic
  var_411_5_function, // dynamic
  var_412_5_unit, // dynamic
  var_414_4_contents, // dynamic
  var_421_17_left, // dynamic
  var_421_23_right, // dynamic
  var_421_39_my_value, // dynamic
  var_map_reduce, // extern polymorphic
  var_449_5_map_function, // dynamic
  var_450_5_reduce_function, // dynamic
  var_append, // extern
  var_451_5_unit, // dynamic
  var_453_4_contents, // dynamic
  var_464_17_left, // dynamic
  var_464_23_right, // dynamic
  var_464_39_my_value, // dynamic
  var_480_17_left, // dynamic
  var_480_23_right, // dynamic
  var_480_38_my_value, // dynamic
  var_validate, // extern polymorphic
  var_500_23_low, // dynamic
  var_500_27_high, // dynamic
  var_501_22_key, // dynamic
  var_std__and, // extern
  var_std__or, // extern
  var_default_value, // extern
  var_std__string, // extern
  var_debug__print, // extern
  var_debug__exit, // extern
  var_pass, // extern
  var_514_4_real_length, // dynamic
  var_515_4_stored_length, // dynamic
  var_std__not, // extern
  var__END
};


static TAB_NUM t_func_std_types__binary_table[] = {
  1, // locals
  -3, // parameters
  MYSELF_PARAMETER, var_111_5_myself,
  MANDATORY_PARAMETER, var_112_5_key,
  uni_NONE, var_113_5_value,
  // $contents contents_of(myself)
  var_contents_of, 1, var_111_5_myself, 1, var_115_4_contents,
  // NONE == value
  var_std__equal, 2, uni_NONE, var_113_5_value, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1, lambda_2, TAIL_CALL,
  POS(115, 3),
  POS(117, 5),
  POS(116, 3)
};

static FUNCTION_INFO i_func_std_types__binary_table = {
  t_func_std_types__binary_table, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_1[] = {
  1, // locals
  0, // parameters
  // retrieve(contents key)
  var_retrieve, 2, var_115_4_contents, var_112_5_key, 1, LOCAL(1),
  //  retrieve(contents key)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(118, 8),
  POS(118, 7)
};

static FUNCTION_INFO i_lambda_1 = {
  t_lambda_1, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_2[] = {
  1, // locals
  0, // parameters
  // is_defined:
  var_is_defined, 1, var_113_5_value, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_value_is_defined, lambda_5, TAIL_CALL,
  POS(121, 15),
  POS(120, 7)
};

static FUNCTION_INFO i_lambda_2 = {
  t_lambda_2, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_value_is_defined[] = {
  1, // locals
  0, // parameters
  // insert &contents $did_insert key value
  var_insert, 3, var_115_4_contents, var_112_5_key, var_113_5_value, 2, var_115_4_contents, LOCAL(1),
  // if_not
  var_if_not, 3, LOCAL(1), lambda_3, lambda_4, TAIL_CALL,
  POS(122, 11),
  POS(123, 11),
  LOCAL(1)
};

static FUNCTION_INFO i_lambda_value_is_defined = {
  t_lambda_value_is_defined, NULL, 2, 1,
  {"122_29_did_insert\000"}
};

static TAB_NUM t_lambda_3[] = {
  1, // locals
  0, // parameters
  // .contents_of contents)
  LET, -1, var_111_5_myself, var_contents_of, var_115_4_contents, LOCAL(1),
  //  myself(.contents_of contents)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(125, 23),
  POS(125, 15)
};

static FUNCTION_INFO i_lambda_3 = {
  t_lambda_3, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_4[] = {
  3, // locals
  0, // parameters
  // length_of(myself)+1
  var_length_of, 1, var_111_5_myself, 1, LOCAL(1),
  // length_of(myself)+1
  var_std__plus, 2, LOCAL(1), num_1, 1, LOCAL(2),
  // myself
  LET, -2, var_111_5_myself, var_contents_of, var_115_4_contents, var_length_of, LOCAL(2), LOCAL(3),
  // 
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(129, 28),
  POS(129, 28),
  POS(127, 15),
  POS(126, 15)
};

static FUNCTION_INFO i_lambda_4 = {
  t_lambda_4, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_5[] = {
  1, // locals
  0, // parameters
  // delete &contents $did_delete key
  var_delete, 2, var_115_4_contents, var_112_5_key, 2, var_115_4_contents, LOCAL(1),
  // if_not
  var_if_not, 3, LOCAL(1), lambda_6, lambda_7, TAIL_CALL,
  POS(131, 11),
  POS(132, 11),
  LOCAL(1)
};

static FUNCTION_INFO i_lambda_5 = {
  t_lambda_5, NULL, 2, 1,
  {"131_29_did_delete\000"}
};

static TAB_NUM t_lambda_6[] = {
  0, // locals
  0, // parameters
  //  myself
  LET, 1, var_111_5_myself, TAIL_CALL,
  POS(134, 15)
};

static FUNCTION_INFO i_lambda_6 = {
  t_lambda_6, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_7[] = {
  3, // locals
  0, // parameters
  // length_of(myself)-1
  var_length_of, 1, var_111_5_myself, 1, LOCAL(1),
  // length_of(myself)-1
  var_std__minus, 2, LOCAL(1), num_1, 1, LOCAL(2),
  // myself
  LET, -2, var_111_5_myself, var_contents_of, var_115_4_contents, var_length_of, LOCAL(2), LOCAL(3),
  // 
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(138, 28),
  POS(138, 28),
  POS(136, 15),
  POS(135, 15)
};

static FUNCTION_INFO i_lambda_7 = {
  t_lambda_7, NULL, 4, 0,
  {}
};

static TAB_NUM t_func_basic_collections__empty_binary_node___retrieve[] = {
  1, // locals
  2, // parameters
  LOCAL(1),
  LOCAL(1),
  // -> undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(143, 62)
};

static FUNCTION_INFO i_func_basic_collections__empty_binary_node___retrieve = {
  t_func_basic_collections__empty_binary_node___retrieve, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_basic_collections__retrieve_method[] = {
  2, // locals
  2, // parameters
  LOCAL(2), // 145_39_self
  var_145_44_key,
  // self $left $right $my_key $my_value
  LOCAL(2), 0, 4, var_146_9_left, var_146_15_right, var_146_22_my_key, var_146_30_my_value,
  // key == my_key
  var_std__equal, 2, var_145_44_key, var_146_22_my_key, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_8, lambda_9, TAIL_CALL,
  POS(146, 3),
  POS(148, 5),
  POS(147, 3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_basic_collections__retrieve_method = {
  t_func_basic_collections__retrieve_method, NULL, 3, 1,
  {"145_39_self\000"}
};

static TAB_NUM t_lambda_8[] = {
  0, // locals
  0, // parameters
  //  my_value
  LET, 1, var_146_30_my_value, TAIL_CALL,
  POS(149, 7)
};

static FUNCTION_INFO i_lambda_8 = {
  t_lambda_8, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_9[] = {
  1, // locals
  0, // parameters
  // key < my_key
  var_std__less, 2, var_145_44_key, var_146_22_my_key, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_10, lambda_11, TAIL_CALL,
  POS(152, 9),
  POS(151, 7)
};

static FUNCTION_INFO i_lambda_9 = {
  t_lambda_9, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_10[] = {
  0, // locals
  0, // parameters
  // retrieve left key
  var_retrieve, 2, var_146_9_left, var_145_44_key, TAIL_CALL,
  POS(153, 11)
};

static FUNCTION_INFO i_lambda_10 = {
  t_lambda_10, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_11[] = {
  0, // locals
  0, // parameters
  // retrieve right key
  var_retrieve, 2, var_146_15_right, var_145_44_key, TAIL_CALL,
  POS(154, 11)
};

static FUNCTION_INFO i_lambda_11 = {
  t_lambda_11, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_basic_collections__empty_binary_node___insert[] = {
  3, // locals
  3, // parameters
  LOCAL(1),
  LOCAL(2), // 161_54_key
  LOCAL(3), // 161_58_value
  // typed_tuple
  var_typed_tuple, 5, var_node, var_basic_collections__empty_binary_node, var_basic_collections__empty_binary_node, LOCAL(2), LOCAL(3), 1, LOCAL(1),
  // ->
  LET, 2, LOCAL(1), var_true, TAIL_CALL,
  POS(163, 5),
  POS(162, 3),
  LOCAL(3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_basic_collections__empty_binary_node___insert = {
  t_func_basic_collections__empty_binary_node___insert, NULL, 2, 2,
  {"161_58_value\000", "161_54_key\000"}
};

static TAB_NUM t_func_node___insert[] = {
  1, // locals
  3, // parameters
  var_170_16_self,
  var_170_21_key,
  var_170_25_value,
  // self $left $right $my_key $my_value
  var_170_16_self, 0, 4, var_171_9_left, var_171_15_right, var_171_22_my_key, var_171_30_my_value,
  // $did_insert undefined
  LET, 1, var_undefined, 1, var_172_4_did_insert,
  // key == my_key
  var_std__equal, 2, var_170_21_key, var_171_22_my_key, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_12, lambda_13, TAIL_CALL,
  POS(171, 3),
  POS(172, 3),
  POS(174, 5),
  POS(173, 3)
};

static FUNCTION_INFO i_func_node___insert = {
  t_func_node___insert, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_12[] = {
  1, // locals
  0, // parameters
  // typed_tuple(self left right key value) false
  var_typed_tuple, 5, var_170_16_self, var_171_9_left, var_171_15_right, var_170_21_key, var_170_25_value, 1, LOCAL(1),
  //  typed_tuple(self left right key value) false
  LET, 2, LOCAL(1), var_false, TAIL_CALL,
  POS(175, 8),
  POS(175, 7)
};

static FUNCTION_INFO i_lambda_12 = {
  t_lambda_12, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_13[] = {
  1, // locals
  0, // parameters
  // key < my_key
  var_std__less, 2, var_170_21_key, var_171_22_my_key, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_14, lambda_15, TAIL_CALL,
  POS(178, 9),
  POS(177, 7)
};

static FUNCTION_INFO i_lambda_13 = {
  t_lambda_13, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_14[] = {
  0, // locals
  0, // parameters
  // insert &left !did_insert key value
  var_insert, 3, var_171_9_left, var_170_21_key, var_170_25_value, 2, var_171_9_left, var_172_4_did_insert,
  // return
  lambda_16, 0, TAIL_CALL,
  POS(180, 11),
  POS(181, 11)
};

static FUNCTION_INFO i_lambda_14 = {
  t_lambda_14, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_15[] = {
  0, // locals
  0, // parameters
  // insert &right !did_insert key value
  var_insert, 3, var_171_15_right, var_170_21_key, var_170_25_value, 2, var_171_15_right, var_172_4_did_insert,
  // return
  lambda_16, 0, TAIL_CALL,
  POS(183, 11),
  POS(184, 11)
};

static FUNCTION_INFO i_lambda_15 = {
  t_lambda_15, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_16[] = {
  1, // locals
  0, // parameters
  // typed_tuple(self left right my_key my_value) did_insert
  var_typed_tuple, 5, var_170_16_self, var_171_9_left, var_171_15_right, var_171_22_my_key, var_171_30_my_value, 1, LOCAL(1),
  //  typed_tuple(self left right my_key my_value) did_insert
  LET, 2, LOCAL(1), var_172_4_did_insert, TAIL_CALL,
  POS(187, 8),
  POS(187, 7)
};

static FUNCTION_INFO i_lambda_16 = {
  t_lambda_16, NULL, 2, 0,
  {}
};

static TAB_NUM t_func_fetch_first[] = {
  1, // locals
  1, // parameters
  var_192_16_self,
  // self $left $right $my_key $my_value
  var_192_16_self, 0, 4, var_193_9_left, var_193_15_right, var_193_22_my_key, var_193_30_my_value,
  // is_an_empty_node
  var_is_an_empty_node, 1, var_193_9_left, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_17, lambda_18, TAIL_CALL,
  POS(193, 3),
  POS(195, 10),
  POS(194, 3)
};

static FUNCTION_INFO i_func_fetch_first = {
  t_func_fetch_first, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_17[] = {
  0, // locals
  0, // parameters
  //  right my_key my_value
  LET, 3, var_193_15_right, var_193_22_my_key, var_193_30_my_value, TAIL_CALL,
  POS(196, 7)
};

static FUNCTION_INFO i_lambda_17 = {
  t_lambda_17, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_18[] = {
  3, // locals
  0, // parameters
  // fetch_first &left $first_key $first_value
  func_fetch_first, 1, var_193_9_left, 3, var_193_9_left, LOCAL(2), LOCAL(3),
  // typed_tuple(self left right my_key my_value) first_key first_value
  var_typed_tuple, 5, var_192_16_self, var_193_9_left, var_193_15_right, var_193_22_my_key, var_193_30_my_value, 1, LOCAL(1),
  // -> typed_tuple(self left right my_key my_value) first_key first_value
  LET, 3, LOCAL(1), LOCAL(2), LOCAL(3), TAIL_CALL,
  POS(198, 7),
  POS(199, 10),
  POS(199, 7),
  LOCAL(3),
  LOCAL(2)
};

static FUNCTION_INFO i_lambda_18 = {
  t_lambda_18, NULL, 3, 2,
  {"198_37_first_value\000", "198_26_first_key\000"}
};

static TAB_NUM t_func_basic_collections__empty_binary_node___delete[] = {
  2, // locals
  2, // parameters
  LOCAL(2), // 201_48_self
  LOCAL(1),
  // -> self false
  LET, 2, LOCAL(2), var_false, TAIL_CALL,
  POS(201, 59),
  LOCAL(2)
};

static FUNCTION_INFO i_func_basic_collections__empty_binary_node___delete = {
  t_func_basic_collections__empty_binary_node___delete, NULL, 1, 1,
  {"201_48_self\000"}
};

static TAB_NUM t_func_node___delete[] = {
  1, // locals
  2, // parameters
  var_203_16_self,
  var_203_21_key,
  // self $left $right $my_key $my_value
  var_203_16_self, 0, 4, var_204_9_left, var_204_15_right, var_204_22_my_key, var_204_30_my_value,
  // key == my_key
  var_std__equal, 2, var_203_21_key, var_204_22_my_key, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_19, lambda_24, TAIL_CALL,
  POS(204, 3),
  POS(206, 5),
  POS(205, 3)
};

static FUNCTION_INFO i_func_node___delete = {
  t_func_node___delete, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_19[] = {
  1, // locals
  0, // parameters
  // is_an_empty_node
  var_is_an_empty_node, 1, var_204_9_left, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_20, lambda_21, TAIL_CALL,
  POS(209, 14),
  POS(208, 7)
};

static FUNCTION_INFO i_lambda_19 = {
  t_lambda_19, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_20[] = {
  0, // locals
  0, // parameters
  //  right true
  LET, 2, var_204_15_right, var_true, TAIL_CALL,
  POS(210, 11)
};

static FUNCTION_INFO i_lambda_20 = {
  t_lambda_20, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_21[] = {
  1, // locals
  0, // parameters
  // is_an_empty_node
  var_is_an_empty_node, 1, var_204_15_right, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_22, lambda_23, TAIL_CALL,
  POS(213, 19),
  POS(212, 11)
};

static FUNCTION_INFO i_lambda_21 = {
  t_lambda_21, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_22[] = {
  0, // locals
  0, // parameters
  //  left true
  LET, 2, var_204_9_left, var_true, TAIL_CALL,
  POS(214, 15)
};

static FUNCTION_INFO i_lambda_22 = {
  t_lambda_22, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_23[] = {
  3, // locals
  0, // parameters
  // fetch_first &right $first_key $first_value
  func_fetch_first, 1, var_204_15_right, 3, var_204_15_right, LOCAL(2), LOCAL(3),
  // typed_tuple(self left right first_key first_value) true
  var_typed_tuple, 5, var_203_16_self, var_204_9_left, var_204_15_right, LOCAL(2), LOCAL(3), 1, LOCAL(1),
  // -> typed_tuple(self left right first_key first_value) true
  LET, 2, LOCAL(1), var_true, TAIL_CALL,
  POS(216, 15),
  POS(217, 18),
  POS(217, 15),
  LOCAL(3),
  LOCAL(2)
};

static FUNCTION_INFO i_lambda_23 = {
  t_lambda_23, NULL, 3, 2,
  {"216_46_first_value\000", "216_35_first_key\000"}
};

static TAB_NUM t_lambda_24[] = {
  1, // locals
  0, // parameters
  // key < my_key
  var_std__less, 2, var_203_21_key, var_204_22_my_key, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_25, lambda_28, TAIL_CALL,
  POS(220, 9),
  POS(219, 7)
};

static FUNCTION_INFO i_lambda_24 = {
  t_lambda_24, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_25[] = {
  1, // locals
  0, // parameters
  // delete &left $did_delete key
  var_delete, 2, var_204_9_left, var_203_21_key, 2, var_204_9_left, LOCAL(1),
  // if_not
  var_if_not, 3, LOCAL(1), lambda_26, lambda_27, TAIL_CALL,
  POS(222, 11),
  POS(223, 11),
  LOCAL(1)
};

static FUNCTION_INFO i_lambda_25 = {
  t_lambda_25, NULL, 2, 1,
  {"222_25_did_delete\000"}
};

static TAB_NUM t_lambda_26[] = {
  0, // locals
  0, // parameters
  //  self false
  LET, 2, var_203_16_self, var_false, TAIL_CALL,
  POS(225, 15)
};

static FUNCTION_INFO i_lambda_26 = {
  t_lambda_26, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_27[] = {
  1, // locals
  0, // parameters
  // typed_tuple(self left right my_key my_value) true
  var_typed_tuple, 5, var_203_16_self, var_204_9_left, var_204_15_right, var_204_22_my_key, var_204_30_my_value, 1, LOCAL(1),
  //  typed_tuple(self left right my_key my_value) true
  LET, 2, LOCAL(1), var_true, TAIL_CALL,
  POS(226, 16),
  POS(226, 15)
};

static FUNCTION_INFO i_lambda_27 = {
  t_lambda_27, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_28[] = {
  1, // locals
  0, // parameters
  // delete &right $did_delete key
  var_delete, 2, var_204_15_right, var_203_21_key, 2, var_204_15_right, LOCAL(1),
  // if_not
  var_if_not, 3, LOCAL(1), lambda_29, lambda_30, TAIL_CALL,
  POS(228, 11),
  POS(229, 11),
  LOCAL(1)
};

static FUNCTION_INFO i_lambda_28 = {
  t_lambda_28, NULL, 2, 1,
  {"228_26_did_delete\000"}
};

static TAB_NUM t_lambda_29[] = {
  0, // locals
  0, // parameters
  //  self false
  LET, 2, var_203_16_self, var_false, TAIL_CALL,
  POS(231, 15)
};

static FUNCTION_INFO i_lambda_29 = {
  t_lambda_29, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_30[] = {
  1, // locals
  0, // parameters
  // typed_tuple(self left right my_key my_value) true
  var_typed_tuple, 5, var_203_16_self, var_204_9_left, var_204_15_right, var_204_22_my_key, var_204_30_my_value, 1, LOCAL(1),
  //  typed_tuple(self left right my_key my_value) true
  LET, 2, LOCAL(1), var_true, TAIL_CALL,
  POS(232, 16),
  POS(232, 15)
};

static FUNCTION_INFO i_lambda_30 = {
  t_lambda_30, NULL, 2, 0,
  {}
};

static TAB_NUM t_func_finish___for_each_1_call[] = {
  1, // locals
  1, // parameters
  LOCAL(1),
  // break!
  var_break, 0, IO_TAIL_CALL,
  POS(239, 34)
};

static FUNCTION_INFO i_func_finish___for_each_1_call = {
  t_func_finish___for_each_1_call, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_finish___for_each_2_call[] = {
  1, // locals
  1, // parameters
  LOCAL(1),
  // break!
  var_break, 0, IO_TAIL_CALL,
  POS(240, 34)
};

static FUNCTION_INFO i_func_finish___for_each_2_call = {
  t_func_finish___for_each_2_call, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_empty_binary_node___for_each_1_left[] = {
  1, // locals
  1, // parameters
  LOCAL(1),
  // basic_loops::todo(-1) # peek
  var_basic_loops__todo, 1, minus_num_1, 1, LOCAL(1),
  // for_each_1_call! basic_loops::todo(-1) # peek
  var_for_each_1_call, 1, LOCAL(1), IO_TAIL_CALL,
  POS(243, 20),
  POS(243, 3)
};

static FUNCTION_INFO i_func_empty_binary_node___for_each_1_left = {
  t_func_empty_binary_node___for_each_1_left, NULL, 2, 0,
  {}
};

static TAB_NUM t_func_empty_binary_node___for_each_2_left[] = {
  1, // locals
  1, // parameters
  LOCAL(1),
  // basic_loops::todo(-1) # peek
  var_basic_loops__todo, 1, minus_num_1, 1, LOCAL(1),
  // for_each_2_call! basic_loops::todo(-1) # peek
  var_for_each_2_call, 1, LOCAL(1), IO_TAIL_CALL,
  POS(246, 20),
  POS(246, 3)
};

static FUNCTION_INFO i_func_empty_binary_node___for_each_2_left = {
  t_func_empty_binary_node___for_each_2_left, NULL, 2, 0,
  {}
};

static TAB_NUM t_func_basic_collections__for_each_1_left_method[] = {
  2, // locals
  1, // parameters
  LOCAL(1), // 248_46_self
  // self $left
  LOCAL(1), 0, 1, LOCAL(2),
  // push &basic_loops::todo self
  var_push, 2, var_basic_loops__todo, LOCAL(1), 1, var_basic_loops__todo,
  // for_each_1_left! left
  var_for_each_1_left, 1, LOCAL(2), IO_TAIL_CALL,
  POS(249, 3),
  POS(250, 3),
  POS(251, 3),
  LOCAL(1),
  LOCAL(2)
};

static FUNCTION_INFO i_func_basic_collections__for_each_1_left_method = {
  t_func_basic_collections__for_each_1_left_method, NULL, 3, 2,
  {"248_46_self\000", "249_9_left\000"}
};

static TAB_NUM t_func_basic_collections__for_each_2_left_method[] = {
  2, // locals
  1, // parameters
  LOCAL(1), // 253_46_self
  // self $left
  LOCAL(1), 0, 1, LOCAL(2),
  // push &basic_loops::todo self
  var_push, 2, var_basic_loops__todo, LOCAL(1), 1, var_basic_loops__todo,
  // for_each_2_left! left
  var_for_each_2_left, 1, LOCAL(2), IO_TAIL_CALL,
  POS(254, 3),
  POS(255, 3),
  POS(256, 3),
  LOCAL(1),
  LOCAL(2)
};

static FUNCTION_INFO i_func_basic_collections__for_each_2_left_method = {
  t_func_basic_collections__for_each_2_left_method, NULL, 3, 2,
  {"253_46_self\000", "254_9_left\000"}
};

static TAB_NUM t_func_basic_collections__for_each_1_call_method[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 258_46_self
  // self $_left $_right $_my_key $my_value
  LOCAL(2), 0, 4, LOCAL(1), LOCAL(1), LOCAL(1), LOCAL(3),
  // basic_loops::body! my_value
  var_basic_loops__body, 1, LOCAL(3), IO_TAIL_CALL,
  POS(259, 3),
  POS(260, 3),
  LOCAL(2),
  LOCAL(3)
};

static FUNCTION_INFO i_func_basic_collections__for_each_1_call_method = {
  t_func_basic_collections__for_each_1_call_method, NULL, 2, 2,
  {"258_46_self\000", "259_33_my_value\000"}
};

static TAB_NUM t_func_basic_collections__for_each_2_call_method[] = {
  4, // locals
  1, // parameters
  LOCAL(2), // 262_46_self
  // self $_left $_right $my_key $my_value
  LOCAL(2), 0, 4, LOCAL(1), LOCAL(1), LOCAL(3), LOCAL(4),
  // basic_loops::body! my_key my_value
  var_basic_loops__body, 2, LOCAL(3), LOCAL(4), IO_TAIL_CALL,
  POS(263, 3),
  POS(264, 3),
  LOCAL(3),
  LOCAL(2),
  LOCAL(4)
};

static FUNCTION_INFO i_func_basic_collections__for_each_2_call_method = {
  t_func_basic_collections__for_each_2_call_method, NULL, 2, 3,
  {"263_24_my_key\000", "262_46_self\000", "263_32_my_value\000"}
};

static TAB_NUM t_func_basic_collections__for_each_1_right_method[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 266_47_self
  // self $_left $right
  LOCAL(2), 0, 2, LOCAL(1), LOCAL(3),
  // for_each_1_left! right
  var_for_each_1_left, 1, LOCAL(3), IO_TAIL_CALL,
  POS(267, 3),
  POS(268, 3),
  LOCAL(2),
  LOCAL(3)
};

static FUNCTION_INFO i_func_basic_collections__for_each_1_right_method = {
  t_func_basic_collections__for_each_1_right_method, NULL, 2, 2,
  {"266_47_self\000", "267_16_right\000"}
};

static TAB_NUM t_func_basic_collections__for_each_2_right_method[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 270_47_self
  // self $_left $right
  LOCAL(2), 0, 2, LOCAL(1), LOCAL(3),
  // for_each_2_left! right
  var_for_each_2_left, 1, LOCAL(3), IO_TAIL_CALL,
  POS(271, 3),
  POS(272, 3),
  LOCAL(3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_basic_collections__for_each_2_right_method = {
  t_func_basic_collections__for_each_2_right_method, NULL, 2, 2,
  {"271_16_right\000", "270_47_self\000"}
};

static TAB_NUM t_func_std_types__binary_table___for_each[] = {
  4, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_313_5_self,
  MANDATORY_PARAMETER, LOCAL(3), // 314_5_body
  var_next, var_315_5_finally,
  // $saved_context
  var_tuple, 5, var_next, var_break, var_basic_loops__todo, var_basic_loops__body, var_basic_loops__finally, 1, LOCAL(4),
  // !basic_loops::todo list(finish)
  var_list, 1, var_finish, 1, var_basic_loops__todo,
  // !basic_loops::body body
  LET, 1, LOCAL(3), 1, var_basic_loops__body,
  // !basic_loops::finally finally
  LET, 1, var_315_5_finally, 1, var_basic_loops__finally,
  // new !break basic_types::break_function: (myself^)
  var_new, 2, var_basic_types__break_function, lambda_31, IO_CALL(1), var_break,
  // break.basic_loops::saved_context_of saved_context
  LET, -1, var_break, var_basic_loops__saved_context_of, LOCAL(4), var_break,
  // parameter_count_of(body) == 2:
  var_parameter_count_of, 1, LOCAL(3), 1, LOCAL(1),
  // parameter_count_of(body) == 2:
  var_std__equal, 2, LOCAL(1), num_2, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_32, lambda_33, IO_TAIL_CALL,
  POS(317, 3),
  POS(325, 3),
  POS(326, 3),
  POS(327, 3),
  POS(329, 3),
  POS(336, 4),
  POS(339, 5),
  POS(339, 5),
  POS(338, 3),
  LOCAL(3),
  LOCAL(4)
};

static FUNCTION_INFO i_func_std_types__binary_table___for_each = {
  t_func_std_types__binary_table___for_each, NULL, 9, 2,
  {"314_5_body\000", "317_4_saved_context\000"}
};

static TAB_NUM t_lambda_31[] = {
  2, // locals
  -1, // parameters
  MYSELF_PARAMETER, LOCAL(2), // 329_44_myself
  // !finally basic_loops::finally
  LET, 1, var_basic_loops__finally, 1, var_315_5_finally,
  // basic_loops::saved_context_of(myself)
  var_basic_loops__saved_context_of, 1, LOCAL(2), 1, LOCAL(1),
  // basic_loops::saved_context_of(myself)
  LOCAL(1), 0, 5, var_next, var_break, var_basic_loops__todo, var_basic_loops__body, var_basic_loops__finally,
  // finally!
  var_315_5_finally, 0, IO_TAIL_CALL,
  POS(330, 5),
  POS(331, 5),
  POS(331, 5),
  POS(334, 5),
  LOCAL(2)
};

static FUNCTION_INFO i_lambda_31 = {
  t_lambda_31, NULL, 4, 1,
  {"329_44_myself\000"}
};

static TAB_NUM t_lambda_32[] = {
  1, // locals
  0, // parameters
  // !next:
  LET, 1, lambda_next, 1, var_next,
  // contents_of(self)
  var_contents_of, 1, var_313_5_self, 1, LOCAL(1),
  // for_each_2_left! contents_of(self)
  var_for_each_2_left, 1, LOCAL(1), IO_TAIL_CALL,
  POS(340, 7),
  POS(344, 24),
  POS(344, 7)
};

static FUNCTION_INFO i_lambda_32 = {
  t_lambda_32, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_next[] = {
  1, // locals
  0, // parameters
  // pop &basic_loops::todo $previous_node
  var_pop, 1, var_basic_loops__todo, 2, var_basic_loops__todo, LOCAL(1),
  // for_each_2_right! previous_node
  var_for_each_2_right, 1, LOCAL(1), IO_TAIL_CALL,
  POS(341, 9),
  POS(342, 9),
  LOCAL(1)
};

static FUNCTION_INFO i_lambda_next = {
  t_lambda_next, NULL, 2, 1,
  {"341_33_previous_node\000"}
};

static TAB_NUM t_lambda_33[] = {
  1, // locals
  0, // parameters
  // !next:
  LET, 1, lambda_2_next, 1, var_next,
  // contents_of(self)
  var_contents_of, 1, var_313_5_self, 1, LOCAL(1),
  // for_each_1_left! contents_of(self)
  var_for_each_1_left, 1, LOCAL(1), IO_TAIL_CALL,
  POS(346, 7),
  POS(350, 24),
  POS(350, 7)
};

static FUNCTION_INFO i_lambda_33 = {
  t_lambda_33, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_2_next[] = {
  1, // locals
  0, // parameters
  // pop &basic_loops::todo $previous_node
  var_pop, 1, var_basic_loops__todo, 2, var_basic_loops__todo, LOCAL(1),
  // for_each_1_right! previous_node
  var_for_each_1_right, 1, LOCAL(1), IO_TAIL_CALL,
  POS(347, 9),
  POS(348, 9),
  LOCAL(1)
};

static FUNCTION_INFO i_lambda_2_next = {
  t_lambda_2_next, NULL, 2, 1,
  {"347_33_previous_node\000"}
};

static TAB_NUM t_func_basic_collections__empty_binary_node___map_1[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 357_47_self
  // -> self
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(357, 53),
  LOCAL(1)
};

static FUNCTION_INFO i_func_basic_collections__empty_binary_node___map_1 = {
  t_func_basic_collections__empty_binary_node___map_1, NULL, 1, 1,
  {"357_47_self\000"}
};

static TAB_NUM t_func_basic_collections__empty_binary_node___map_2[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 359_47_self
  // -> self
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(359, 53),
  LOCAL(1)
};

static FUNCTION_INFO i_func_basic_collections__empty_binary_node___map_2 = {
  t_func_basic_collections__empty_binary_node___map_2, NULL, 1, 1,
  {"359_47_self\000"}
};

static TAB_NUM t_func_basic_collections__map_1_method[] = {
  8, // locals
  1, // parameters
  LOCAL(4), // 361_36_self
  // self $left $right $my_key $my_value
  LOCAL(4), 0, 4, LOCAL(5), LOCAL(6), LOCAL(7), LOCAL(8),
  // mapping_function(my_value) map_1(left) map_1(right)
  var_mapping_function, 1, LOCAL(8), 1, LOCAL(1),
  // map_1(left) map_1(right)
  var_map_1, 1, LOCAL(5), 1, LOCAL(2),
  // map_1(right)
  var_map_1, 1, LOCAL(6), 1, LOCAL(3),
  // typed_tuple self my_key mapping_function(my_value) map_1(left) map_1(right)
  var_typed_tuple, 5, LOCAL(4), LOCAL(7), LOCAL(1), LOCAL(2), LOCAL(3), TAIL_CALL,
  POS(362, 3),
  POS(363, 27),
  POS(363, 54),
  POS(363, 66),
  POS(363, 3),
  LOCAL(8),
  LOCAL(7),
  LOCAL(5),
  LOCAL(6),
  LOCAL(4)
};

static FUNCTION_INFO i_func_basic_collections__map_1_method = {
  t_func_basic_collections__map_1_method, NULL, 5, 5,
  {"362_30_my_value\000", "362_22_my_key\000", "362_9_left\000", "362_15_right\000", "361_36_self\000"}
};

static TAB_NUM t_func_basic_collections__map_2_method[] = {
  8, // locals
  1, // parameters
  LOCAL(4), // 365_36_self
  // self $left $right $my_key $my_value
  LOCAL(4), 0, 4, LOCAL(5), LOCAL(6), LOCAL(7), LOCAL(8),
  // mapping_function(my_key my_value) map_2(left) map_2(right)
  var_mapping_function, 2, LOCAL(7), LOCAL(8), 1, LOCAL(1),
  // map_2(left) map_2(right)
  var_map_2, 1, LOCAL(5), 1, LOCAL(2),
  // map_2(right)
  var_map_2, 1, LOCAL(6), 1, LOCAL(3),
  // typed_tuple self my_key mapping_function(my_key my_value) map_2(left) map_2(right)
  var_typed_tuple, 5, LOCAL(4), LOCAL(7), LOCAL(1), LOCAL(2), LOCAL(3), TAIL_CALL,
  POS(366, 3),
  POS(367, 27),
  POS(367, 61),
  POS(367, 73),
  POS(367, 3),
  LOCAL(4),
  LOCAL(8),
  LOCAL(5),
  LOCAL(7),
  LOCAL(6)
};

static FUNCTION_INFO i_func_basic_collections__map_2_method = {
  t_func_basic_collections__map_2_method, NULL, 5, 5,
  {"365_36_self\000", "366_30_my_value\000", "366_9_left\000", "366_22_my_key\000", "366_15_right\000"}
};

static TAB_NUM t_func_std_types__binary_table___map[] = {
  3, // locals
  2, // parameters
  var_382_5_self,
  LOCAL(3), // 383_5_function
  // !mapping_function function
  LET, 1, LOCAL(3), 1, var_mapping_function,
  // parameter_count_of(function) == 2:
  var_parameter_count_of, 1, LOCAL(3), 1, LOCAL(1),
  // parameter_count_of(function) == 2:
  var_std__equal, 2, LOCAL(1), num_2, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_34, lambda_35, TAIL_CALL,
  POS(385, 3),
  POS(388, 5),
  POS(388, 5),
  POS(387, 3),
  LOCAL(3)
};

static FUNCTION_INFO i_func_std_types__binary_table___map = {
  t_func_std_types__binary_table___map, NULL, 4, 1,
  {"383_5_function\000"}
};

static TAB_NUM t_lambda_34[] = {
  1, // locals
  0, // parameters
  // contents_of
  var_contents_of, 1, var_382_5_self, 1, LOCAL(1),
  // map_2 &self.contents_of
  var_map_2, 1, LOCAL(1), 1, LOCAL(1),
  // self.contents_of
  LET, -1, var_382_5_self, var_contents_of, LOCAL(1), var_382_5_self,
  // -> self
  LET, 1, var_382_5_self, TAIL_CALL,
  POS(389, 19),
  POS(389, 7),
  POS(389, 14),
  POS(390, 7)
};

static FUNCTION_INFO i_lambda_34 = {
  t_lambda_34, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_35[] = {
  1, // locals
  0, // parameters
  // contents_of
  var_contents_of, 1, var_382_5_self, 1, LOCAL(1),
  // map_1 &self.contents_of
  var_map_1, 1, LOCAL(1), 1, LOCAL(1),
  // self.contents_of
  LET, -1, var_382_5_self, var_contents_of, LOCAL(1), var_382_5_self,
  // -> self
  LET, 1, var_382_5_self, TAIL_CALL,
  POS(392, 19),
  POS(392, 7),
  POS(392, 14),
  POS(393, 7)
};

static FUNCTION_INFO i_lambda_35 = {
  t_lambda_35, NULL, 4, 0,
  {}
};

static TAB_NUM t_func_std_types__binary_table___reduce[] = {
  2, // locals
  -3, // parameters
  MANDATORY_PARAMETER, LOCAL(2), // 410_5_self
  MANDATORY_PARAMETER, var_411_5_function,
  var_undefined, var_412_5_unit,
  // $contents contents_of(self)
  var_contents_of, 1, LOCAL(2), 1, var_414_4_contents,
  // is_an_empty_node
  var_is_an_empty_node, 1, var_414_4_contents, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_36, lambda_37, TAIL_CALL,
  POS(414, 3),
  POS(416, 14),
  POS(415, 3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_std_types__binary_table___reduce = {
  t_func_std_types__binary_table___reduce, NULL, 3, 1,
  {"410_5_self\000"}
};

static TAB_NUM t_lambda_36[] = {
  0, // locals
  0, // parameters
  //  unit
  LET, 1, var_412_5_unit, TAIL_CALL,
  POS(417, 7)
};

static FUNCTION_INFO i_lambda_36 = {
  t_lambda_36, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_37[] = {
  1, // locals
  0, // parameters
  // reduce(contents)
  func_reduce, 1, var_414_4_contents, 1, LOCAL(1),
  //  reduce(contents)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(418, 8),
  POS(418, 7)
};

static FUNCTION_INFO i_lambda_37 = {
  t_lambda_37, NULL, 2, 0,
  {}
};

static TAB_NUM t_func_reduce[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 420_13_inner_node
  // inner_node $left $right $_my_key $my_value
  LOCAL(2), 0, 4, var_421_17_left, var_421_23_right, LOCAL(1), var_421_39_my_value,
  // is_an_empty_node
  var_is_an_empty_node, 1, var_421_17_left, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), func_check_right, lambda_38, TAIL_CALL,
  POS(421, 5),
  POS(423, 12),
  POS(422, 5),
  LOCAL(2)
};

static FUNCTION_INFO i_func_reduce = {
  t_func_reduce, NULL, 3, 1,
  {"420_13_inner_node\000"}
};

static TAB_NUM t_lambda_38[] = {
  1, // locals
  0, // parameters
  // reduce(left) my_value)
  func_reduce, 1, var_421_17_left, 1, LOCAL(1),
  // !my_value function(reduce(left) my_value)
  var_411_5_function, 2, LOCAL(1), var_421_39_my_value, 1, var_421_39_my_value,
  // check_right
  func_check_right, 0, TAIL_CALL,
  POS(426, 28),
  POS(426, 9),
  POS(427, 9)
};

static FUNCTION_INFO i_lambda_38 = {
  t_lambda_38, NULL, 3, 0,
  {}
};

static TAB_NUM t_func_check_right[] = {
  1, // locals
  0, // parameters
  // is_an_empty_node
  var_is_an_empty_node, 1, var_421_23_right, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_39, lambda_40, TAIL_CALL,
  POS(431, 15),
  POS(430, 7)
};

static FUNCTION_INFO i_func_check_right = {
  t_func_check_right, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_39[] = {
  0, // locals
  0, // parameters
  //  my_value
  LET, 1, var_421_39_my_value, TAIL_CALL,
  POS(432, 11)
};

static FUNCTION_INFO i_lambda_39 = {
  t_lambda_39, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_40[] = {
  2, // locals
  0, // parameters
  // reduce(right))
  func_reduce, 1, var_421_23_right, 1, LOCAL(1),
  // function(my_value reduce(right))
  var_411_5_function, 2, var_421_39_my_value, LOCAL(1), 1, LOCAL(2),
  //  function(my_value reduce(right))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(433, 30),
  POS(433, 12),
  POS(433, 11)
};

static FUNCTION_INFO i_lambda_40 = {
  t_lambda_40, NULL, 3, 0,
  {}
};

static TAB_NUM t_func_std_types__binary_table___map_reduce[] = {
  2, // locals
  -4, // parameters
  MANDATORY_PARAMETER, LOCAL(2), // 448_5_self
  MANDATORY_PARAMETER, var_449_5_map_function,
  var_append, var_450_5_reduce_function,
  var_undefined, var_451_5_unit,
  // $contents contents_of(self)
  var_contents_of, 1, LOCAL(2), 1, var_453_4_contents,
  // is_an_empty_node
  var_is_an_empty_node, 1, var_453_4_contents, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_41, lambda_42, TAIL_CALL,
  POS(453, 3),
  POS(455, 14),
  POS(454, 3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_std_types__binary_table___map_reduce = {
  t_func_std_types__binary_table___map_reduce, NULL, 3, 1,
  {"448_5_self\000"}
};

static TAB_NUM t_lambda_41[] = {
  0, // locals
  0, // parameters
  //  unit
  LET, 1, var_451_5_unit, TAIL_CALL,
  POS(456, 7)
};

static FUNCTION_INFO i_lambda_41 = {
  t_lambda_41, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_42[] = {
  2, // locals
  0, // parameters
  // parameter_count_of(map_function) == 2
  var_parameter_count_of, 1, var_449_5_map_function, 1, LOCAL(1),
  // parameter_count_of(map_function) == 2
  var_std__equal, 2, LOCAL(1), num_2, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_43, lambda_44, TAIL_CALL,
  POS(459, 9),
  POS(459, 9),
  POS(458, 7)
};

static FUNCTION_INFO i_lambda_42 = {
  t_lambda_42, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_43[] = {
  1, // locals
  0, // parameters
  // map_reduce_2(contents)
  func_map_reduce_2, 1, var_453_4_contents, 1, LOCAL(1),
  //  map_reduce_2(contents)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(460, 12),
  POS(460, 11)
};

static FUNCTION_INFO i_lambda_43 = {
  t_lambda_43, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_44[] = {
  1, // locals
  0, // parameters
  // map_reduce_1(contents)
  func_map_reduce_1, 1, var_453_4_contents, 1, LOCAL(1),
  //  map_reduce_1(contents)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(461, 12),
  POS(461, 11)
};

static FUNCTION_INFO i_lambda_44 = {
  t_lambda_44, NULL, 2, 0,
  {}
};

static TAB_NUM t_func_map_reduce_1[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 463_19_inner_node
  // inner_node $left $right $_my_key $my_value
  LOCAL(2), 0, 4, var_464_17_left, var_464_23_right, LOCAL(1), var_464_39_my_value,
  // map_function &my_value
  var_449_5_map_function, 1, var_464_39_my_value, 1, var_464_39_my_value,
  // is_an_empty_node
  var_is_an_empty_node, 1, var_464_17_left, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), func_2_check_right, lambda_45, TAIL_CALL,
  POS(464, 5),
  POS(465, 5),
  POS(467, 12),
  POS(466, 5),
  LOCAL(2)
};

static FUNCTION_INFO i_func_map_reduce_1 = {
  t_func_map_reduce_1, NULL, 4, 1,
  {"463_19_inner_node\000"}
};

static TAB_NUM t_lambda_45[] = {
  1, // locals
  0, // parameters
  // map_reduce_1(left) my_value)
  func_map_reduce_1, 1, var_464_17_left, 1, LOCAL(1),
  // !my_value reduce_function(map_reduce_1(left) my_value)
  var_450_5_reduce_function, 2, LOCAL(1), var_464_39_my_value, 1, var_464_39_my_value,
  // check_right
  func_2_check_right, 0, TAIL_CALL,
  POS(470, 35),
  POS(470, 9),
  POS(471, 9)
};

static FUNCTION_INFO i_lambda_45 = {
  t_lambda_45, NULL, 3, 0,
  {}
};

static TAB_NUM t_func_2_check_right[] = {
  1, // locals
  0, // parameters
  // is_an_empty_node
  var_is_an_empty_node, 1, var_464_23_right, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_46, lambda_47, TAIL_CALL,
  POS(475, 15),
  POS(474, 7)
};

static FUNCTION_INFO i_func_2_check_right = {
  t_func_2_check_right, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_46[] = {
  0, // locals
  0, // parameters
  //  my_value
  LET, 1, var_464_39_my_value, TAIL_CALL,
  POS(476, 11)
};

static FUNCTION_INFO i_lambda_46 = {
  t_lambda_46, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_47[] = {
  2, // locals
  0, // parameters
  // map_reduce_1(right))
  func_map_reduce_1, 1, var_464_23_right, 1, LOCAL(1),
  // reduce_function(my_value map_reduce_1(right))
  var_450_5_reduce_function, 2, var_464_39_my_value, LOCAL(1), 1, LOCAL(2),
  //  reduce_function(my_value map_reduce_1(right))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(477, 37),
  POS(477, 12),
  POS(477, 11)
};

static FUNCTION_INFO i_lambda_47 = {
  t_lambda_47, NULL, 3, 0,
  {}
};

static TAB_NUM t_func_map_reduce_2[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 479_19_inner_node
  // inner_node $left $right $my_key $my_value
  LOCAL(2), 0, 4, var_480_17_left, var_480_23_right, LOCAL(3), var_480_38_my_value,
  // map_function my_key &my_value
  var_449_5_map_function, 2, LOCAL(3), var_480_38_my_value, 1, var_480_38_my_value,
  // is_an_empty_node
  var_is_an_empty_node, 1, var_480_17_left, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), func_3_check_right, lambda_48, TAIL_CALL,
  POS(480, 5),
  POS(481, 5),
  POS(483, 12),
  POS(482, 5),
  LOCAL(2),
  LOCAL(3)
};

static FUNCTION_INFO i_func_map_reduce_2 = {
  t_func_map_reduce_2, NULL, 4, 2,
  {"479_19_inner_node\000", "480_30_my_key\000"}
};

static TAB_NUM t_lambda_48[] = {
  1, // locals
  0, // parameters
  // map_reduce_2(left) my_value)
  func_map_reduce_2, 1, var_480_17_left, 1, LOCAL(1),
  // !my_value reduce_function(map_reduce_2(left) my_value)
  var_450_5_reduce_function, 2, LOCAL(1), var_480_38_my_value, 1, var_480_38_my_value,
  // check_right
  func_3_check_right, 0, TAIL_CALL,
  POS(486, 35),
  POS(486, 9),
  POS(487, 9)
};

static FUNCTION_INFO i_lambda_48 = {
  t_lambda_48, NULL, 3, 0,
  {}
};

static TAB_NUM t_func_3_check_right[] = {
  1, // locals
  0, // parameters
  // is_an_empty_node
  var_is_an_empty_node, 1, var_480_23_right, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_49, lambda_50, TAIL_CALL,
  POS(491, 15),
  POS(490, 7)
};

static FUNCTION_INFO i_func_3_check_right = {
  t_func_3_check_right, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_49[] = {
  0, // locals
  0, // parameters
  //  my_value
  LET, 1, var_480_38_my_value, TAIL_CALL,
  POS(492, 11)
};

static FUNCTION_INFO i_lambda_49 = {
  t_lambda_49, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_50[] = {
  2, // locals
  0, // parameters
  // map_reduce_2(right))
  func_map_reduce_2, 1, var_480_23_right, 1, LOCAL(1),
  // reduce_function(my_value map_reduce_2(right))
  var_450_5_reduce_function, 2, var_480_38_my_value, LOCAL(1), 1, LOCAL(2),
  //  reduce_function(my_value map_reduce_2(right))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(493, 37),
  POS(493, 12),
  POS(493, 11)
};

static FUNCTION_INFO i_lambda_50 = {
  t_lambda_50, NULL, 3, 0,
  {}
};

static TAB_NUM t_func_basic_collections__empty_binary_node___validate[] = {
  1, // locals
  3, // parameters
  LOCAL(1),
  LOCAL(1),
  LOCAL(1),
  // -> 0
  LET, 1, num_0, TAIL_CALL,
  POS(498, 68)
};

static FUNCTION_INFO i_func_basic_collections__empty_binary_node___validate = {
  t_func_basic_collections__empty_binary_node___validate, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_node___validate[] = {
  7, // locals
  3, // parameters
  LOCAL(5), // 500_18_self
  var_500_23_low,
  var_500_27_high,
  // self $left $right $key
  LOCAL(5), 0, 3, LOCAL(6), LOCAL(7), var_501_22_key,
  // is_defined && key < low
  var_is_defined, 1, var_500_23_low, 1, LOCAL(1),
  // is_defined && key < low
  var_std__and, 2, LOCAL(1), lambda_51, 1, LOCAL(2),
  // 
  var_std__or, 2, LOCAL(2), lambda_52, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_54, var_pass, 0,
  // validate(left low key)+1+validate(right key high)
  var_validate, 3, LOCAL(6), var_500_23_low, var_501_22_key, 1, LOCAL(1),
  // validate(left low key)+1+validate(right key high)
  var_std__plus, 2, LOCAL(1), num_1, 1, LOCAL(2),
  // validate(right key high)
  var_validate, 3, LOCAL(7), var_501_22_key, var_500_27_high, 1, LOCAL(3),
  // validate(left low key)+1+validate(right key high)
  var_std__plus, 2, LOCAL(2), LOCAL(3), 1, LOCAL(4),
  // -> validate(left low key)+1+validate(right key high)
  LET, 1, LOCAL(4), TAIL_CALL,
  POS(501, 3),
  POS(504, 11),
  POS(504, 11),
  POS(503, 7),
  POS(502, 3),
  POS(511, 6),
  POS(511, 6),
  POS(511, 31),
  POS(511, 6),
  POS(511, 3),
  LOCAL(7),
  LOCAL(6),
  LOCAL(5)
};

static FUNCTION_INFO i_func_node___validate = {
  t_func_node___validate, NULL, 10, 3,
  {"501_15_right\000", "501_9_left\000", "500_18_self\000"}
};

static TAB_NUM t_lambda_51[] = {
  1, // locals
  0, // parameters
  // key < low
  var_std__less, 2, var_501_22_key, var_500_23_low, 1, LOCAL(1),
  // key < low
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(504, 25),
  POS(504, 25)
};

static FUNCTION_INFO i_lambda_51 = {
  t_lambda_51, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_52[] = {
  2, // locals
  0, // parameters
  // is_defined && key > high
  var_is_defined, 1, var_500_27_high, 1, LOCAL(1),
  // is_defined && key > high
  var_std__and, 2, LOCAL(1), lambda_53, 1, LOCAL(2),
  // high.is_defined && key > high
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(505, 12),
  POS(505, 12),
  POS(505, 7)
};

static FUNCTION_INFO i_lambda_52 = {
  t_lambda_52, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_53[] = {
  1, // locals
  0, // parameters
  // high
  var_std__less, 2, var_500_27_high, var_501_22_key, 1, LOCAL(1),
  // key > high
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(505, 32),
  POS(505, 26)
};

static FUNCTION_INFO i_lambda_53 = {
  t_lambda_53, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_54[] = {
  3, // locals
  0, // parameters
  // default_value(low '[')) < @(key) < @(default_value(high ']')) failed!
  var_default_value, 2, var_500_23_low, chr_91, 1, LOCAL(1),
  // default_value(high ']')) failed!
  var_default_value, 2, var_500_27_high, chr_93, 1, LOCAL(2),
  // "
  var_std__string, 6, LOCAL(1), string_1, var_501_22_key, string_1, LOCAL(2), str__failed, 1, LOCAL(3),
  // debug::print "
  var_debug__print, 1, LOCAL(3), 0,
  // debug::exit
  var_debug__exit, 0, TAIL_CALL,
  POS(508, 11),
  POS(508, 48),
  POS(507, 20),
  POS(507, 7),
  POS(509, 7)
};

static FUNCTION_INFO i_lambda_54 = {
  t_lambda_54, NULL, 5, 0,
  {}
};

static TAB_NUM t_func_std_types__binary_table___validate[] = {
  3, // locals
  1, // parameters
  LOCAL(3), // 513_37_self
  // contents_of(self) undefined undefined)
  var_contents_of, 1, LOCAL(3), 1, LOCAL(1),
  // $real_length validate(contents_of(self) undefined undefined)
  var_validate, 3, LOCAL(1), var_undefined, var_undefined, 1, var_514_4_real_length,
  // $stored_length length_of(self)
  var_length_of, 1, LOCAL(3), 1, var_515_4_stored_length,
  // real_length != stored_length:
  var_std__equal, 2, var_514_4_real_length, var_515_4_stored_length, 1, LOCAL(1),
  // real_length != stored_length:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_55, var_pass, TAIL_CALL,
  POS(514, 25),
  POS(514, 3),
  POS(515, 3),
  POS(517, 5),
  POS(517, 5),
  POS(516, 3),
  LOCAL(3)
};

static FUNCTION_INFO i_func_std_types__binary_table___validate = {
  t_func_std_types__binary_table___validate, NULL, 6, 1,
  {"513_37_self\000"}
};

static TAB_NUM t_lambda_55[] = {
  1, // locals
  0, // parameters
  // "
  var_std__string, 5, str_Table_contains, var_514_4_real_length, str__entries_stored, var_515_4_stored_length, string_2, 1, LOCAL(1),
  // debug::print "
  var_debug__print, 1, LOCAL(1), 0,
  // debug::exit
  var_debug__exit, 0, TAIL_CALL,
  POS(518, 20),
  POS(518, 7),
  POS(520, 7)
};

static FUNCTION_INFO i_lambda_55 = {
  t_lambda_55, NULL, 3, 0,
  {}
};

static int tuple_73_1_arguments[] = {
  -var_undefined, -var_undefined, -var_undefined, -var_undefined, -num_0
};

static int tuple_76_1_arguments[] = {
  -var_undefined, -var_undefined, -var_undefined, -var_undefined
};

static FUNKY_CONSTANT constants_table[] = {
  {FLT_TUPLE, 5, {.arguments = tuple_73_1_arguments}},
  {FLT_POSITIVE_INT64, 0, {.value = 0}},
  {FLT_TUPLE, 4, {.arguments = tuple_76_1_arguments}},
  {FLT_UNIQUE, 0, {.str_8 = "NONE"}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__binary_table}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_1}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_2}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_value_is_defined}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_3}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_4}},
  {FLT_POSITIVE_INT64, 0, {.value = 1}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_5}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_6}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_7}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_basic_collections__empty_binary_node___retrieve}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_basic_collections__retrieve_method}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_8}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_9}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_10}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_11}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_basic_collections__empty_binary_node___insert}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_node___insert}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_12}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_13}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_14}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_15}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_16}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_fetch_first}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_17}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_18}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_basic_collections__empty_binary_node___delete}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_node___delete}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_19}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_20}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_21}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_22}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_23}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_24}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_25}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_26}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_27}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_28}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_29}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_30}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_finish___for_each_1_call}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_finish___for_each_2_call}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_empty_binary_node___for_each_1_left}},
  {FLT_NEGATIVE_INT64, 0, {.value = 1}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_empty_binary_node___for_each_2_left}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_basic_collections__for_each_1_left_method}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_basic_collections__for_each_2_left_method}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_basic_collections__for_each_1_call_method}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_basic_collections__for_each_2_call_method}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_basic_collections__for_each_1_right_method}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_basic_collections__for_each_2_right_method}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__binary_table___for_each}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_31}},
  {FLT_POSITIVE_INT64, 0, {.value = 2}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_32}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_next}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_33}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_2_next}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_basic_collections__empty_binary_node___map_1}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_basic_collections__empty_binary_node___map_2}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_basic_collections__map_1_method}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_basic_collections__map_2_method}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__binary_table___map}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_34}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_35}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__binary_table___reduce}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_36}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_37}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_reduce}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_38}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_check_right}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_39}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_40}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__binary_table___map_reduce}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_41}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_42}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_43}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_44}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_map_reduce_1}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_45}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_2_check_right}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_46}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_47}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_map_reduce_2}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_48}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_3_check_right}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_49}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_50}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_basic_collections__empty_binary_node___validate}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_node___validate}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_51}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_52}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_53}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_54}},
  {FLT_CHARACTER, 0, {.value = 91}},
  {FLT_CHARACTER, 0, {.value = 93}},
  {FLT_STRING_8, 3, {.str_8 = " < "}},
  {FLT_STRING_8, 9, {.str_8 = " failed!\012"}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__binary_table___validate}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_55}},
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
    {.position = POS(28, 1)}
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
    {.const_idx = -tuple_73_1}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "is_an_empty_node\000", NULL,
    {.position = POS(44, 39)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "true\000", NULL,
    {.position = POS(44, 56)}
  },
  {
    FOT_DERIVED, 0, 9,
    "binary_table\000std_types", std_types__binary_table__attributes,
    {"table\000std_types"}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "length_of\000", NULL,
    {.position = POS(46, 26)}
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
    {.position = POS(54, 1)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "is_a_binary_table\000", NULL,
    {.position = POS(54, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "false\000", NULL,
    {.position = POS(54, 38)}
  },
  {
    FOT_INITIALIZED, 0, 13,
    "node\000", node__attributes,
    {.const_idx = -tuple_76_1}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "table\000std_types", NULL,
    {.position = POS(59, 26)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "contents_of\000", NULL,
    {.position = POS(63, 26)}
  },
  {
    FOT_DERIVED, 0, 0,
    "empty_binary_table\000std", NULL,
    {"binary_table\000std_types"}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "undefined\000", NULL,
    {.position = POS(74, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "tuple\000", NULL,
    {.position = POS(74, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "111_5_myself\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "112_5_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "113_5_value\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "115_4_contents\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "equal\000std", NULL,
    {.position = POS(117, 5)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "retrieve\000", NULL,
    {.position = POS(118, 8)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_defined\000", NULL,
    {.position = POS(121, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000std", NULL,
    {.position = POS(129, 28)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if_not\000", NULL,
    {.position = POS(123, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "minus\000std", NULL,
    {.position = POS(138, 28)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if\000", NULL,
    {.position = POS(120, 7)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "retrieve_method\000basic_collections", NULL,
    {.const_idx = -func_basic_collections__retrieve_method}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "145_44_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "146_9_left\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "146_15_right\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "146_22_my_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "146_30_my_value\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "less\000std", NULL,
    {.position = POS(152, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "retrieve_method\000", NULL,
    {.position = POS(156, 16)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "typed_tuple\000", NULL,
    {.position = POS(163, 5)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "170_16_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "170_21_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "170_25_value\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "171_9_left\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "171_15_right\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "171_22_my_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "171_30_my_value\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "172_4_did_insert\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "192_16_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "193_9_left\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "193_15_right\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "193_22_my_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "193_30_my_value\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "203_16_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "203_21_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "204_9_left\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "204_15_right\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "204_22_my_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "204_30_my_value\000", NULL
  },
  {
    FOT_DERIVED, 0, 2,
    "finish\000", finish__attributes,
    {"object\000std_types"}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "for_each_1_call\000", NULL,
    {.position = POS(239, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "break\000", NULL,
    {.position = POS(239, 34)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "for_each_2_call\000", NULL,
    {.position = POS(240, 9)}
  },
  {
    FOT_UNKNOWN, 0, 2,
    "empty_binary_node\000", empty_binary_node__attributes,
    {.position = POS(242, 1)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "for_each_1_left\000", NULL,
    {.position = POS(242, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "todo\000basic_loops", NULL,
    {.position = POS(243, 20)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "for_each_2_left\000", NULL,
    {.position = POS(245, 20)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "for_each_1_left_method\000basic_collections", NULL,
    {.const_idx = -func_basic_collections__for_each_1_left_method}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "push\000", NULL,
    {.position = POS(250, 3)}
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
    {.position = POS(260, 3)}
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
    {.position = POS(274, 23)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "for_each_2_left_method\000", NULL,
    {.position = POS(275, 23)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "for_each_1_call_method\000", NULL,
    {.position = POS(276, 23)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "for_each_2_call_method\000", NULL,
    {.position = POS(277, 23)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "for_each_1_right\000", NULL,
    {.position = POS(278, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "for_each_1_right_method\000", NULL,
    {.position = POS(278, 24)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "for_each_2_right\000", NULL,
    {.position = POS(279, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "for_each_2_right_method\000", NULL,
    {.position = POS(279, 24)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "for_each\000", NULL,
    {.position = POS(281, 26)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "313_5_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "315_5_finally\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "next\000", NULL,
    {.position = POS(315, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "finally\000basic_loops", NULL,
    {.position = POS(323, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "list\000", NULL,
    {.position = POS(325, 22)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "break_function\000basic_types", NULL,
    {.position = POS(329, 14)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "saved_context_of\000basic_loops", NULL,
    {.position = POS(331, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "new\000", NULL,
    {.position = POS(329, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "parameter_count_of\000", NULL,
    {.position = POS(339, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "pop\000", NULL,
    {.position = POS(341, 9)}
  },
  {
    FOT_DERIVED, 0, 0,
    "mapping_function\000", NULL,
    {"undefined\000"}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "map_1\000", NULL,
    {.position = POS(357, 39)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "map_2\000", NULL,
    {.position = POS(359, 39)}
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
    {.position = POS(369, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "map_2_method\000", NULL,
    {.position = POS(370, 13)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "map\000", NULL,
    {.position = POS(372, 26)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "382_5_self\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "reduce\000", NULL,
    {.position = POS(398, 26)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "411_5_function\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "412_5_unit\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "414_4_contents\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "421_17_left\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "421_23_right\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "421_39_my_value\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "map_reduce\000", NULL,
    {.position = POS(438, 26)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "449_5_map_function\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "450_5_reduce_function\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "append\000", NULL,
    {.position = POS(450, 23)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "451_5_unit\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "453_4_contents\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "464_17_left\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "464_23_right\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "464_39_my_value\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "480_17_left\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "480_23_right\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "480_38_my_value\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "validate\000", NULL,
    {.position = POS(498, 39)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "500_23_low\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "500_27_high\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "501_22_key\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "and\000std", NULL,
    {.position = POS(504, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "or\000std", NULL,
    {.position = POS(503, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "default_value\000", NULL,
    {.position = POS(508, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "string\000std", NULL,
    {.position = POS(507, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "print\000debug", NULL,
    {.position = POS(507, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "exit\000debug", NULL,
    {.position = POS(509, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "pass\000", NULL,
    {.position = POS(510, 5)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "514_4_real_length\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "515_4_stored_length\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not\000std", NULL,
    {.position = POS(517, 5)}
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
  .feature_flags = FEAT_POSITIONS|FEAT_FUNCTION_INFO,
  .marker = 0,
  0, // number of required modules
  0, // number of defined namespaces
  2, // number of used namespaces
  107, // number of constants
  146, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  constants_table,
  variables_table,
};
