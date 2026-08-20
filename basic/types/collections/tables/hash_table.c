#include <stddef.h>
#include <stdint.h>

#include "runtime/common.h"
#include "runtime/builtins.h"
#include "runtime/fko.h"
#include "runtime/memory.h"

enum {
  num_0 = -1,
  tuple_77_1 = -2,
  list_83_1 = -3,
  uni_NONE = -4,
  func_std_types__table = -5,
  func_basic_collections__update_hash_table = -6,
  num_0xc0000000 = -7,
  lambda_1 = -8,
  lambda_2 = -9,
  lambda_value_is_defined = -10,
  lambda_3 = -11,
  num_1 = -12,
  lambda_4 = -13,
  lambda_5 = -14,
  lambda_6 = -15,
  lambda_7 = -16,
  func_empty_hash_table_entry___retrieve = -17,
  func_hash_table_leaf___retrieve = -18,
  lambda_8 = -19,
  lambda_9 = -20,
  func_empty_collision_list_entry___retrieve = -21,
  func_collision_list_entry___retrieve = -22,
  lambda_10 = -23,
  lambda_11 = -24,
  func_hash_table_node___retrieve = -25,
  num_7 = -26,
  num_3 = -27,
  func_empty_hash_table_entry___insert = -28,
  lambda_12 = -29,
  lambda_13 = -30,
  func_hash_table_leaf___insert = -31,
  lambda_14 = -32,
  lambda_15 = -33,
  func_empty_collision_list_entry___insert = -34,
  func_collision_list_entry___insert = -35,
  func_hash_table_node___insert = -36,
  func_empty_hash_table_entry___delete = -37,
  func_hash_table_leaf___delete = -38,
  lambda_16 = -39,
  lambda_17 = -40,
  func_empty_collision_list_entry___delete = -41,
  func_collision_list_entry___delete = -42,
  lambda_18 = -43,
  lambda_19 = -44,
  func_hash_table_node___delete = -45,
  lambda_20 = -46,
  lambda_21 = -47,
  lambda_22 = -48,
  lambda_23 = -49,
  func_empty_hash_table_entry___for_each_1 = -50,
  func_empty_hash_table_entry___for_each_2 = -51,
  func_collision_list_entry___for_each_1 = -52,
  lambda_24 = -53,
  lambda_next = -54,
  lambda_basic_loopsself_is_an_empty_entry = -55,
  lambda_25 = -56,
  func_collision_list_entry___for_each_2 = -57,
  lambda_26 = -58,
  lambda_2_next = -59,
  lambda_2_basic_loopsself_is_an_empty_entry = -60,
  lambda_27 = -61,
  func_hash_table_leaf___for_each_1 = -62,
  func_hash_table_leaf___for_each_2 = -63,
  func_hash_table_node___for_each_1 = -64,
  lambda_28 = -65,
  lambda_3_next = -66,
  num_8 = -67,
  lambda_29 = -68,
  lambda_30 = -69,
  func_hash_table_node___for_each_2 = -70,
  lambda_31 = -71,
  lambda_4_next = -72,
  lambda_32 = -73,
  lambda_33 = -74,
  func_std_types__hash_table___for_each = -75,
  lambda_34 = -76,
  num_2 = -77,
  lambda_35 = -78,
  lambda_36 = -79,
  func_empty_hash_table_entry___map_1 = -80,
  func_empty_hash_table_entry___map_2 = -81,
  func_hash_table_leaf___map_1 = -82,
  func_hash_table_leaf___map_2 = -83,
  func_empty_collision_list_entry___map_1 = -84,
  func_empty_collision_list_entry___map_2 = -85,
  func_collision_list_entry___map_1 = -86,
  func_collision_list_entry___map_2 = -87,
  func_hash_table_node___map_1 = -88,
  func_hash_table_node___map_2 = -89,
  func_std_types__hash_table___map = -90,
  lambda_37 = -91,
  lambda_38 = -92,
  uni_UNIT = -93,
  func_empty_hash_table_entry___reduce_1 = -94,
  func_hash_table_leaf___reduce_1 = -95,
  func_empty_collision_list_entry___reduce_1 = -96,
  func_collision_list_entry___reduce_1 = -97,
  func_hash_table_node___reduce_1 = -98,
  num_4 = -99,
  num_5 = -100,
  num_6 = -101,
  func_my_reduce = -102,
  lambda_39 = -103,
  lambda_40 = -104,
  lambda_41 = -105,
  lambda_42 = -106,
  func_std_types__hash_table___reduce = -107,
  lambda_43 = -108,
  lambda_44 = -109,
  func_empty_hash_table_entry___map_reduce_1 = -110,
  func_empty_hash_table_entry___map_reduce_2 = -111,
  func_hash_table_leaf___map_reduce_1 = -112,
  func_hash_table_leaf___map_reduce_2 = -113,
  func_empty_collision_list_entry___map_reduce_1 = -114,
  func_empty_collision_list_entry___map_reduce_2 = -115,
  func_collision_list_entry___map_reduce_1 = -116,
  func_collision_list_entry___map_reduce_2 = -117,
  func_hash_table_node___map_reduce_1 = -118,
  func_hash_table_node___map_reduce_2 = -119,
  func_std_types__hash_table___map_reduce = -120,
  lambda_45 = -121,
  lambda_46 = -122,
  lambda_47 = -123,
  lambda_48 = -124,
  func_empty_hash_table_entry___filter_1 = -125,
  func_empty_hash_table_entry___filter_2 = -126,
  func_hash_table_leaf___filter_1 = -127,
  lambda_49 = -128,
  lambda_50 = -129,
  func_hash_table_leaf___filter_2 = -130,
  lambda_51 = -131,
  lambda_52 = -132,
  func_empty_collision_list_entry___filter_1 = -133,
  func_empty_collision_list_entry___filter_2 = -134,
  func_collision_list_entry___filter_1 = -135,
  lambda_filter_functionmy_value = -136,
  lambda_53 = -137,
  lambda_54 = -138,
  lambda_55 = -139,
  func_collision_list_entry___filter_2 = -140,
  lambda_56 = -141,
  lambda_57 = -142,
  lambda_58 = -143,
  lambda_59 = -144,
  func_hash_table_node___filter_1 = -145,
  lambda_60 = -146,
  lambda_61 = -147,
  lambda_62 = -148,
  lambda_63 = -149,
  lambda_64 = -150,
  lambda_65 = -151,
  lambda_66 = -152,
  lambda_67 = -153,
  lambda_68 = -154,
  lambda_69 = -155,
  lambda_70 = -156,
  func_hash_table_node___filter_2 = -157,
  lambda_71 = -158,
  lambda_72 = -159,
  lambda_73 = -160,
  lambda_74 = -161,
  lambda_75 = -162,
  lambda_76 = -163,
  lambda_77 = -164,
  lambda_78 = -165,
  lambda_79 = -166,
  lambda_80 = -167,
  lambda_81 = -168,
  func_std_types__hash_table___filter = -169,
  lambda_82 = -170,
  lambda_83 = -171,
  lambda_84 = -172,
  lambda_85 = -173,
  lambda_86 = -174,
  lambda_87 = -175,
  func_std__hash_table = -176,
  func_std_types__list___to_hash_table = -177,
  lambda_88 = -178,
  lambda_89 = -179,
  str_hash_table = -180
};

enum {
  var__START = FIRST_VAR-1,
  var_contents_of, // attribute
  var_std__assign, // extern
  var_retrieve, // attribute
  var_insert, // attribute
  var_delete, // attribute
  var_std__is_a_hash_table, // attribute
  var_std_types__object, // extern
  var_is_a_hash_table, // extern polymorphic
  var_false, // extern
  var_std_types__hash_table, // derived
  var_true, // extern
  var_is_an_empty_entry, // attribute
  var_empty_hash_table_entry, // derived
  var_empty_collision_list_entry, // derived
  var_std__to_hash_table, // attribute
  var_std_types__table, // extern
  var_std__empty_hash_table, // derived
  var_length_of, // extern polymorphic
  var_hash_table_leaf, // initialized compound
  var_undefined, // extern
  var_tuple, // extern
  var_collision_list_entry, // initialized compound
  var_hash_table_node, // initialized compound
  var_list, // extern
  var_basic_collections__update_hash_table, // initialized
  var_107_5_myself, // dynamic
  var_108_5_key, // dynamic
  var_109_5_value, // dynamic
  var_hash, // extern
  var_111_4_hash_index, // dynamic
  var_std__bit_or, // extern
  var_112_4_contents, // dynamic
  var_std__equal, // extern
  var_is_defined, // extern
  var_std__plus, // extern
  var_if, // extern
  var_std__minus, // extern
  var_142_33_my_value, // dynamic
  var_150_46_key, // dynamic
  var_151_17_my_value, // dynamic
  var_151_27_my_link, // dynamic
  var_std__bit_and, // extern
  var_std__shift_right, // extern
  var_163_40_hash_index, // dynamic
  var_163_51_key, // dynamic
  var_163_55_value, // dynamic
  var_typed_tuple, // extern
  var_169_27_self, // dynamic
  var_169_32_hash_index, // dynamic
  var_169_43_key, // dynamic
  var_169_47_value, // dynamic
  var_170_9_my_hash_index, // dynamic
  var_170_24_my_key, // dynamic
  var_170_32_my_value, // dynamic
  var_not, // extern
  var_204_27_self, // dynamic
  var_213_44_key, // dynamic
  var_214_9_my_key, // dynamic
  var_214_17_my_value, // dynamic
  var_214_27_my_link, // dynamic
  var_223_27_self, // dynamic
  var_all_of, // extern
  var_for_each_1, // attribute
  var_for_each_2, // attribute
  var_next, // extern
  var_break, // extern
  var_basic_loops__self, // extern
  var_basic_types__break_function, // extern
  var_basic_loops__saved_context_of, // extern polymorphic
  var_new, // extern
  var_basic_loops__body, // extern
  var_basic_loops__from, // extern
  var_336_6_idx, // dynamic
  var_std__less, // extern
  var_std__not, // extern
  var_369_6_idx, // dynamic
  var_for_each, // extern polymorphic
  var_384_5_self, // dynamic
  var_386_5_finally, // dynamic
  var_basic_loops__finally, // extern
  var_parameter_count_of, // extern
  var_map_1, // attribute
  var_map_2, // attribute
  var_mapping_function, // derived
  var_map, // extern polymorphic
  var_457_5_self, // dynamic
  var_reduce_1, // attribute
  var_reduction_function, // derived
  var_500_14_left, // dynamic
  var_500_19_right, // dynamic
  var_reduce, // extern polymorphic
  var_522_5_self, // dynamic
  var_523_5_function, // dynamic
  var_524_5_unit, // dynamic
  var_map_reduce_1, // attribute
  var_map_reduce_2, // attribute
  var_map_reduce, // extern polymorphic
  var_592_5_self, // dynamic
  var_593_5_map_function, // dynamic
  var_594_5_reduce_function, // dynamic
  var_append, // extern
  var_595_5_unit, // dynamic
  var_filter_function, // derived
  var_filter_1, // attribute
  var_filter_2, // attribute
  var_619_29_self, // dynamic
  var_626_29_self, // dynamic
  var_636_34_self, // dynamic
  var_637_9_my_key, // dynamic
  var_637_17_my_value, // dynamic
  var_638_13_new_link, // dynamic
  var_638_23_deleted, // dynamic
  var_647_34_self, // dynamic
  var_648_9_my_key, // dynamic
  var_648_17_my_value, // dynamic
  var_649_13_new_link, // dynamic
  var_649_23_deleted, // dynamic
  var_658_29_self, // dynamic
  var_659_13_node_1, // dynamic
  var_660_13_node_2, // dynamic
  var_661_13_node_3, // dynamic
  var_662_13_node_4, // dynamic
  var_663_13_node_5, // dynamic
  var_664_13_node_6, // dynamic
  var_665_13_node_7, // dynamic
  var_666_13_node_8, // dynamic
  var_667_4_deleted, // dynamic
  var_std__and, // extern
  var_706_29_self, // dynamic
  var_707_13_node_1, // dynamic
  var_708_13_node_2, // dynamic
  var_709_13_node_3, // dynamic
  var_710_13_node_4, // dynamic
  var_711_13_node_5, // dynamic
  var_712_13_node_6, // dynamic
  var_713_13_node_7, // dynamic
  var_714_13_node_8, // dynamic
  var_715_4_deleted, // dynamic
  var_filter, // extern polymorphic
  var_767_5_self, // dynamic
  var_768_5_function, // dynamic
  var_empty_hash_table, // extern
  var_775_11_new_contents, // dynamic
  var_775_25_deleted, // dynamic
  var_std__hash_table, // initialized
  var_to_hash_table, // extern polymorphic
  var_std_types__list, // extern
  var_806_4_table, // dynamic
  var_serialization_tag_of, // extern polymorphic
  var_empty_collection_of, // extern polymorphic
  var_deserializers, // extern
  var_register_type, // extern
  var__END
};


static TAB_NUM t_func_std_types__table[] = {
  3, // locals
  -3, // parameters
  MYSELF_PARAMETER, LOCAL(1), // 98_5_myself
  MANDATORY_PARAMETER, LOCAL(2), // 99_5_key
  uni_NONE, LOCAL(3), // 100_5_value
  // basic_collections::update_hash_table myself key value
  var_basic_collections__update_hash_table, 3, LOCAL(1), LOCAL(2), LOCAL(3), TAIL_CALL,
  POS(102, 3),
  LOCAL(1),
  LOCAL(2),
  LOCAL(3)
};

static FUNCTION_INFO i_func_std_types__table = {
  t_func_std_types__table, NULL, 1, 3,
  {"98_5_myself\000", "99_5_key\000", "100_5_value\000"}
};

static TAB_NUM t_func_basic_collections__update_hash_table[] = {
  1, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_107_5_myself,
  MANDATORY_PARAMETER, var_108_5_key,
  uni_NONE, var_109_5_value,
  // hash(key) | 0xc000'0000 # add sentinel hash index (3)
  var_hash, 1, var_108_5_key, 1, LOCAL(1),
  // $hash_index hash(key) | 0xc000'0000 # add sentinel hash index (3)
  var_std__bit_or, 2, LOCAL(1), num_0xc0000000, 1, var_111_4_hash_index,
  // $contents contents_of(myself)
  var_contents_of, 1, var_107_5_myself, 1, var_112_4_contents,
  // NONE == value
  var_std__equal, 2, uni_NONE, var_109_5_value, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1, lambda_2, TAIL_CALL,
  POS(111, 15),
  POS(111, 3),
  POS(112, 3),
  POS(114, 5),
  POS(113, 3)
};

static FUNCTION_INFO i_func_basic_collections__update_hash_table = {
  t_func_basic_collections__update_hash_table, NULL, 5, 0,
  {}
};

static TAB_NUM t_lambda_1[] = {
  1, // locals
  0, // parameters
  // retrieve(contents hash_index key)
  var_retrieve, 3, var_112_4_contents, var_111_4_hash_index, var_108_5_key, 1, LOCAL(1),
  //  retrieve(contents hash_index key)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(115, 8),
  POS(115, 7)
};

static FUNCTION_INFO i_lambda_1 = {
  t_lambda_1, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_2[] = {
  1, // locals
  0, // parameters
  // is_defined:
  var_is_defined, 1, var_109_5_value, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_value_is_defined, lambda_5, TAIL_CALL,
  POS(118, 15),
  POS(117, 7)
};

static FUNCTION_INFO i_lambda_2 = {
  t_lambda_2, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_value_is_defined[] = {
  1, // locals
  0, // parameters
  // insert &contents $success hash_index key value
  var_insert, 4, var_112_4_contents, var_111_4_hash_index, var_108_5_key, var_109_5_value, 2, var_112_4_contents, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_3, lambda_4, TAIL_CALL,
  POS(119, 11),
  POS(120, 11),
  LOCAL(1)
};

static FUNCTION_INFO i_lambda_value_is_defined = {
  t_lambda_value_is_defined, NULL, 2, 1,
  {"119_29_success\000"}
};

static TAB_NUM t_lambda_3[] = {
  3, // locals
  0, // parameters
  // length_of(myself)+1
  var_length_of, 1, var_107_5_myself, 1, LOCAL(1),
  // length_of(myself)+1
  var_std__plus, 2, LOCAL(1), num_1, 1, LOCAL(2),
  // myself
  LET, -2, var_107_5_myself, var_contents_of, var_112_4_contents, var_length_of, LOCAL(2), LOCAL(3),
  // 
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(125, 28),
  POS(125, 28),
  POS(123, 15),
  POS(122, 15)
};

static FUNCTION_INFO i_lambda_3 = {
  t_lambda_3, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_4[] = {
  1, // locals
  0, // parameters
  // .contents_of contents)
  LET, -1, var_107_5_myself, var_contents_of, var_112_4_contents, LOCAL(1),
  //  myself(.contents_of contents)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(126, 23),
  POS(126, 15)
};

static FUNCTION_INFO i_lambda_4 = {
  t_lambda_4, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_5[] = {
  1, // locals
  0, // parameters
  // delete &contents $success hash_index key
  var_delete, 3, var_112_4_contents, var_111_4_hash_index, var_108_5_key, 2, var_112_4_contents, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_6, lambda_7, TAIL_CALL,
  POS(128, 11),
  POS(129, 11),
  LOCAL(1)
};

static FUNCTION_INFO i_lambda_5 = {
  t_lambda_5, NULL, 2, 1,
  {"128_29_success\000"}
};

static TAB_NUM t_lambda_6[] = {
  3, // locals
  0, // parameters
  // length_of(myself)-1
  var_length_of, 1, var_107_5_myself, 1, LOCAL(1),
  // length_of(myself)-1
  var_std__minus, 2, LOCAL(1), num_1, 1, LOCAL(2),
  // myself
  LET, -2, var_107_5_myself, var_contents_of, var_112_4_contents, var_length_of, LOCAL(2), LOCAL(3),
  // 
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(134, 28),
  POS(134, 28),
  POS(132, 15),
  POS(131, 15)
};

static FUNCTION_INFO i_lambda_6 = {
  t_lambda_6, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_7[] = {
  0, // locals
  0, // parameters
  //  myself
  LET, 1, var_107_5_myself, TAIL_CALL,
  POS(135, 15)
};

static FUNCTION_INFO i_lambda_7 = {
  t_lambda_7, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_empty_hash_table_entry___retrieve[] = {
  1, // locals
  3, // parameters
  LOCAL(1),
  LOCAL(1),
  LOCAL(1),
  // -> undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(139, 60)
};

static FUNCTION_INFO i_func_empty_hash_table_entry___retrieve = {
  t_func_empty_hash_table_entry___retrieve, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_hash_table_leaf___retrieve[] = {
  4, // locals
  3, // parameters
  LOCAL(2), // 141_29_self
  LOCAL(1),
  LOCAL(3), // 141_46_key
  // self $_my_hash_index $my_key $my_value
  LOCAL(2), 0, 3, LOCAL(1), LOCAL(4), var_142_33_my_value,
  // key == my_key
  var_std__equal, 2, LOCAL(3), LOCAL(4), 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_8, lambda_9, TAIL_CALL,
  POS(142, 3),
  POS(144, 5),
  POS(143, 3),
  LOCAL(4),
  LOCAL(3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_hash_table_leaf___retrieve = {
  t_func_hash_table_leaf___retrieve, NULL, 3, 3,
  {"142_25_my_key\000", "141_46_key\000", "141_29_self\000"}
};

static TAB_NUM t_lambda_8[] = {
  0, // locals
  0, // parameters
  //  my_value
  LET, 1, var_142_33_my_value, TAIL_CALL,
  POS(145, 7)
};

static FUNCTION_INFO i_lambda_8 = {
  t_lambda_8, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_9[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(146, 7)
};

static FUNCTION_INFO i_lambda_9 = {
  t_lambda_9, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_empty_collision_list_entry___retrieve[] = {
  1, // locals
  3, // parameters
  LOCAL(1),
  LOCAL(1),
  LOCAL(1),
  // -> undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(148, 59)
};

static FUNCTION_INFO i_func_empty_collision_list_entry___retrieve = {
  t_func_empty_collision_list_entry___retrieve, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_collision_list_entry___retrieve[] = {
  3, // locals
  3, // parameters
  LOCAL(2), // 150_34_self
  LOCAL(1),
  var_150_46_key,
  // self $my_key $my_value $my_link
  LOCAL(2), 0, 3, LOCAL(3), var_151_17_my_value, var_151_27_my_link,
  // key == my_key
  var_std__equal, 2, var_150_46_key, LOCAL(3), 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_10, lambda_11, TAIL_CALL,
  POS(151, 3),
  POS(153, 5),
  POS(152, 3),
  LOCAL(2),
  LOCAL(3)
};

static FUNCTION_INFO i_func_collision_list_entry___retrieve = {
  t_func_collision_list_entry___retrieve, NULL, 3, 2,
  {"150_34_self\000", "151_9_my_key\000"}
};

static TAB_NUM t_lambda_10[] = {
  0, // locals
  0, // parameters
  //  my_value
  LET, 1, var_151_17_my_value, TAIL_CALL,
  POS(154, 7)
};

static FUNCTION_INFO i_lambda_10 = {
  t_lambda_10, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_11[] = {
  0, // locals
  0, // parameters
  // retrieve my_link undefined key
  var_retrieve, 3, var_151_27_my_link, var_undefined, var_150_46_key, TAIL_CALL,
  POS(155, 7)
};

static FUNCTION_INFO i_lambda_11 = {
  t_lambda_11, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_hash_table_node___retrieve[] = {
  6, // locals
  3, // parameters
  LOCAL(3), // 157_29_self
  LOCAL(4), // 157_34_hash_index
  LOCAL(5), // 157_45_key
  // hash_index & 7)+1
  var_std__bit_and, 2, LOCAL(4), num_7, 1, LOCAL(1),
  // $idx (hash_index & 7)+1
  var_std__plus, 2, LOCAL(1), num_1, 1, LOCAL(6),
  // self(idx) hash_index >> 3 key
  LOCAL(3), 1, LOCAL(6), 1, LOCAL(1),
  // hash_index >> 3 key
  var_std__shift_right, 2, LOCAL(4), num_3, 1, LOCAL(2),
  // retrieve self(idx) hash_index >> 3 key
  var_retrieve, 3, LOCAL(1), LOCAL(2), LOCAL(5), TAIL_CALL,
  POS(158, 9),
  POS(158, 3),
  POS(159, 12),
  POS(159, 22),
  POS(159, 3),
  LOCAL(3),
  LOCAL(5),
  LOCAL(4),
  LOCAL(6)
};

static FUNCTION_INFO i_func_hash_table_node___retrieve = {
  t_func_hash_table_node___retrieve, NULL, 5, 4,
  {"157_29_self\000", "157_45_key\000", "157_34_hash_index\000", "158_4_idx\000"}
};

static TAB_NUM t_func_empty_hash_table_entry___insert[] = {
  1, // locals
  4, // parameters
  LOCAL(1),
  var_163_40_hash_index,
  var_163_51_key,
  var_163_55_value,
  // hash_index == 3
  var_std__equal, 2, var_163_40_hash_index, num_3, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_12, lambda_13, TAIL_CALL,
  POS(165, 5),
  POS(164, 3)
};

static FUNCTION_INFO i_func_empty_hash_table_entry___insert = {
  t_func_empty_hash_table_entry___insert, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_12[] = {
  1, // locals
  0, // parameters
  // typed_tuple(collision_list_entry key value empty_collision_list_entry) true
  var_typed_tuple, 4, var_collision_list_entry, var_163_51_key, var_163_55_value, var_empty_collision_list_entry, 1, LOCAL(1),
  //  typed_tuple(collision_list_entry key value empty_collision_list_entry) true
  LET, 2, LOCAL(1), var_true, TAIL_CALL,
  POS(166, 8),
  POS(166, 7)
};

static FUNCTION_INFO i_lambda_12 = {
  t_lambda_12, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_13[] = {
  1, // locals
  0, // parameters
  // typed_tuple(hash_table_leaf hash_index key value) true
  var_typed_tuple, 4, var_hash_table_leaf, var_163_40_hash_index, var_163_51_key, var_163_55_value, 1, LOCAL(1),
  //  typed_tuple(hash_table_leaf hash_index key value) true
  LET, 2, LOCAL(1), var_true, TAIL_CALL,
  POS(167, 8),
  POS(167, 7)
};

static FUNCTION_INFO i_lambda_13 = {
  t_lambda_13, NULL, 2, 0,
  {}
};

static TAB_NUM t_func_hash_table_leaf___insert[] = {
  1, // locals
  4, // parameters
  var_169_27_self,
  var_169_32_hash_index,
  var_169_43_key,
  var_169_47_value,
  // self $my_hash_index $my_key $my_value
  var_169_27_self, 0, 3, var_170_9_my_hash_index, var_170_24_my_key, var_170_32_my_value,
  // key == my_key
  var_std__equal, 2, var_169_43_key, var_170_24_my_key, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_14, lambda_15, TAIL_CALL,
  POS(170, 3),
  POS(172, 5),
  POS(171, 3)
};

static FUNCTION_INFO i_func_hash_table_leaf___insert = {
  t_func_hash_table_leaf___insert, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_14[] = {
  1, // locals
  0, // parameters
  // typed_tuple(self my_hash_index key value) false
  var_typed_tuple, 4, var_169_27_self, var_170_9_my_hash_index, var_169_43_key, var_169_47_value, 1, LOCAL(1),
  //  typed_tuple(self my_hash_index key value) false
  LET, 2, LOCAL(1), var_false, TAIL_CALL,
  POS(173, 8),
  POS(173, 7)
};

static FUNCTION_INFO i_lambda_14 = {
  t_lambda_14, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_15[] = {
  2, // locals
  0, // parameters
  // insert hash_table_node $new_node $_did_insert
  var_insert, 4, var_hash_table_node, var_170_9_my_hash_index, var_170_24_my_key, var_170_32_my_value, 2, LOCAL(2), LOCAL(1),
  // insert new_node hash_index key value
  var_insert, 4, LOCAL(2), var_169_32_hash_index, var_169_43_key, var_169_47_value, TAIL_CALL,
  POS(175, 7),
  POS(177, 7),
  LOCAL(2)
};

static FUNCTION_INFO i_lambda_15 = {
  t_lambda_15, NULL, 2, 1,
  {"175_31_new_node\000"}
};

static TAB_NUM t_func_empty_collision_list_entry___insert[] = {
  4, // locals
  4, // parameters
  LOCAL(2), // 179_38_self
  LOCAL(1),
  LOCAL(3), // 179_50_key
  LOCAL(4), // 179_54_value
  // typed_tuple(collision_list_entry key value self) true
  var_typed_tuple, 4, var_collision_list_entry, LOCAL(3), LOCAL(4), LOCAL(2), 1, LOCAL(1),
  // -> typed_tuple(collision_list_entry key value self) true
  LET, 2, LOCAL(1), var_true, TAIL_CALL,
  POS(180, 6),
  POS(180, 3),
  LOCAL(4),
  LOCAL(2),
  LOCAL(3)
};

static FUNCTION_INFO i_func_empty_collision_list_entry___insert = {
  t_func_empty_collision_list_entry___insert, NULL, 2, 3,
  {"179_54_value\000", "179_38_self\000", "179_50_key\000"}
};

static TAB_NUM t_func_collision_list_entry___insert[] = {
  6, // locals
  4, // parameters
  LOCAL(3), // 182_32_self
  LOCAL(1),
  LOCAL(4), // 182_44_key
  LOCAL(5), // 182_48_value
  // delete &self $did_delete undefined key
  var_delete, 3, LOCAL(3), var_undefined, LOCAL(4), 2, LOCAL(3), LOCAL(6),
  // typed_tuple(collision_list_entry key value self) not(did_delete)
  var_typed_tuple, 4, var_collision_list_entry, LOCAL(4), LOCAL(5), LOCAL(3), 1, LOCAL(1),
  // not(did_delete)
  var_not, 1, LOCAL(6), 1, LOCAL(2),
  // -> typed_tuple(collision_list_entry key value self) not(did_delete)
  LET, 2, LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(183, 3),
  POS(184, 6),
  POS(184, 55),
  POS(184, 3),
  LOCAL(3),
  LOCAL(4),
  LOCAL(5),
  LOCAL(6)
};

static FUNCTION_INFO i_func_collision_list_entry___insert = {
  t_func_collision_list_entry___insert, NULL, 4, 4,
  {"182_32_self\000", "182_44_key\000", "182_48_value\000", "183_17_did_delete\000"}
};

static TAB_NUM t_func_hash_table_node___insert[] = {
  8, // locals
  4, // parameters
  LOCAL(3), // 186_27_self
  LOCAL(4), // 186_32_hash_index
  LOCAL(5), // 186_43_key
  LOCAL(6), // 186_47_value
  // hash_index & 7)+1
  var_std__bit_and, 2, LOCAL(4), num_7, 1, LOCAL(1),
  // $idx (hash_index & 7)+1
  var_std__plus, 2, LOCAL(1), num_1, 1, LOCAL(7),
  // self(idx) $did_insert hash_index >> 3 key value
  LOCAL(3), 1, LOCAL(7), 1, LOCAL(1),
  // hash_index >> 3 key value
  var_std__shift_right, 2, LOCAL(4), num_3, 1, LOCAL(2),
  // insert &self(idx) $did_insert hash_index >> 3 key value
  var_insert, 4, LOCAL(1), LOCAL(2), LOCAL(5), LOCAL(6), 2, LOCAL(1), LOCAL(8),
  // self(idx) $did_insert hash_index >> 3 key value
  LOCAL(3), 2, LOCAL(7), LOCAL(1), 1, LOCAL(3),
  // -> self did_insert
  LET, 2, LOCAL(3), LOCAL(8), TAIL_CALL,
  POS(187, 9),
  POS(187, 3),
  POS(188, 11),
  POS(188, 33),
  POS(188, 3),
  POS(188, 11),
  POS(189, 3),
  LOCAL(5),
  LOCAL(3),
  LOCAL(7),
  LOCAL(6),
  LOCAL(8),
  LOCAL(4)
};

static FUNCTION_INFO i_func_hash_table_node___insert = {
  t_func_hash_table_node___insert, NULL, 7, 6,
  {"186_43_key\000", "186_27_self\000", "187_4_idx\000", "186_47_value\000", "188_22_did_insert\000", "186_32_hash_index\000"}
};

static TAB_NUM t_func_empty_hash_table_entry___delete[] = {
  2, // locals
  3, // parameters
  LOCAL(2), // 202_34_self
  LOCAL(1),
  LOCAL(1),
  // -> self false
  LET, 2, LOCAL(2), var_false, TAIL_CALL,
  POS(202, 57),
  LOCAL(2)
};

static FUNCTION_INFO i_func_empty_hash_table_entry___delete = {
  t_func_empty_hash_table_entry___delete, NULL, 1, 1,
  {"202_34_self\000"}
};

static TAB_NUM t_func_hash_table_leaf___delete[] = {
  3, // locals
  3, // parameters
  var_204_27_self,
  LOCAL(1),
  LOCAL(2), // 204_44_key
  // self $_my_hash_index $my_key $_my_value
  var_204_27_self, 0, 3, LOCAL(1), LOCAL(3), LOCAL(1),
  // key == my_key
  var_std__equal, 2, LOCAL(2), LOCAL(3), 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_16, lambda_17, TAIL_CALL,
  POS(205, 3),
  POS(207, 5),
  POS(206, 3),
  LOCAL(3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_hash_table_leaf___delete = {
  t_func_hash_table_leaf___delete, NULL, 3, 2,
  {"205_25_my_key\000", "204_44_key\000"}
};

static TAB_NUM t_lambda_16[] = {
  0, // locals
  0, // parameters
  //  empty_hash_table_entry true
  LET, 2, var_empty_hash_table_entry, var_true, TAIL_CALL,
  POS(208, 7)
};

static FUNCTION_INFO i_lambda_16 = {
  t_lambda_16, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_17[] = {
  0, // locals
  0, // parameters
  //  self false
  LET, 2, var_204_27_self, var_false, TAIL_CALL,
  POS(209, 7)
};

static FUNCTION_INFO i_lambda_17 = {
  t_lambda_17, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_empty_collision_list_entry___delete[] = {
  2, // locals
  3, // parameters
  LOCAL(2), // 211_38_self
  LOCAL(1),
  LOCAL(1),
  // -> self false
  LET, 2, LOCAL(2), var_false, TAIL_CALL,
  POS(211, 56),
  LOCAL(2)
};

static FUNCTION_INFO i_func_empty_collision_list_entry___delete = {
  t_func_empty_collision_list_entry___delete, NULL, 1, 1,
  {"211_38_self\000"}
};

static TAB_NUM t_func_collision_list_entry___delete[] = {
  2, // locals
  3, // parameters
  LOCAL(2), // 213_32_self
  LOCAL(1),
  var_213_44_key,
  // self $my_key $my_value $my_link
  LOCAL(2), 0, 3, var_214_9_my_key, var_214_17_my_value, var_214_27_my_link,
  // key == my_key
  var_std__equal, 2, var_213_44_key, var_214_9_my_key, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_18, lambda_19, TAIL_CALL,
  POS(214, 3),
  POS(216, 5),
  POS(215, 3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_collision_list_entry___delete = {
  t_func_collision_list_entry___delete, NULL, 3, 1,
  {"213_32_self\000"}
};

static TAB_NUM t_lambda_18[] = {
  0, // locals
  0, // parameters
  // -> my_link true
  LET, 2, var_214_27_my_link, var_true, TAIL_CALL,
  POS(218, 7)
};

static FUNCTION_INFO i_lambda_18 = {
  t_lambda_18, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_19[] = {
  2, // locals
  0, // parameters
  // delete &my_link undefined key $did_delete
  var_delete, 3, var_214_27_my_link, var_undefined, var_213_44_key, 2, var_214_27_my_link, LOCAL(2),
  // typed_tuple(collision_list_entry my_key my_value my_link) did_delete
  var_typed_tuple, 4, var_collision_list_entry, var_214_9_my_key, var_214_17_my_value, var_214_27_my_link, 1, LOCAL(1),
  // -> typed_tuple(collision_list_entry my_key my_value my_link) did_delete
  LET, 2, LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(220, 7),
  POS(221, 10),
  POS(221, 7),
  LOCAL(2)
};

static FUNCTION_INFO i_lambda_19 = {
  t_lambda_19, NULL, 3, 1,
  {"220_38_did_delete\000"}
};

static TAB_NUM t_func_hash_table_node___delete[] = {
  6, // locals
  3, // parameters
  var_223_27_self,
  LOCAL(3), // 223_32_hash_index
  LOCAL(4), // 223_43_key
  // hash_index & 7)+1
  var_std__bit_and, 2, LOCAL(3), num_7, 1, LOCAL(1),
  // $idx (hash_index & 7)+1
  var_std__plus, 2, LOCAL(1), num_1, 1, LOCAL(5),
  // self(idx) $success hash_index >> 3 key
  var_223_27_self, 1, LOCAL(5), 1, LOCAL(1),
  // hash_index >> 3 key
  var_std__shift_right, 2, LOCAL(3), num_3, 1, LOCAL(2),
  // delete &self(idx) $success hash_index >> 3 key
  var_delete, 3, LOCAL(1), LOCAL(2), LOCAL(4), 2, LOCAL(1), LOCAL(6),
  // self(idx) $success hash_index >> 3 key
  var_223_27_self, 2, LOCAL(5), LOCAL(1), 1, var_223_27_self,
  // if
  var_if, 3, LOCAL(6), lambda_20, lambda_23, TAIL_CALL,
  POS(224, 9),
  POS(224, 3),
  POS(225, 11),
  POS(225, 30),
  POS(225, 3),
  POS(225, 11),
  POS(226, 3),
  LOCAL(6),
  LOCAL(5),
  LOCAL(4),
  LOCAL(3)
};

static FUNCTION_INFO i_func_hash_table_node___delete = {
  t_func_hash_table_node___delete, NULL, 7, 4,
  {"225_22_success\000", "224_4_idx\000", "223_43_key\000", "223_32_hash_index\000"}
};

static TAB_NUM t_lambda_20[] = {
  1, // locals
  0, // parameters
  // all_of(self is_an_empty_entry)
  var_all_of, 2, var_223_27_self, var_is_an_empty_entry, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_21, lambda_22, TAIL_CALL,
  POS(230, 9),
  POS(229, 7)
};

static FUNCTION_INFO i_lambda_20 = {
  t_lambda_20, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_21[] = {
  0, // locals
  0, // parameters
  //  empty_hash_table_entry true
  LET, 2, var_empty_hash_table_entry, var_true, TAIL_CALL,
  POS(231, 11)
};

static FUNCTION_INFO i_lambda_21 = {
  t_lambda_21, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_22[] = {
  0, // locals
  0, // parameters
  //  self true
  LET, 2, var_223_27_self, var_true, TAIL_CALL,
  POS(232, 11)
};

static FUNCTION_INFO i_lambda_22 = {
  t_lambda_22, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_23[] = {
  0, // locals
  0, // parameters
  //  self false
  LET, 2, var_223_27_self, var_false, TAIL_CALL,
  POS(233, 7)
};

static FUNCTION_INFO i_lambda_23 = {
  t_lambda_23, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_empty_hash_table_entry___for_each_1[] = {
  1, // locals
  1, // parameters
  LOCAL(1),
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(241, 3)
};

static FUNCTION_INFO i_func_empty_hash_table_entry___for_each_1 = {
  t_func_empty_hash_table_entry___for_each_1, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_empty_hash_table_entry___for_each_2[] = {
  1, // locals
  1, // parameters
  LOCAL(1),
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(244, 3)
};

static FUNCTION_INFO i_func_empty_hash_table_entry___for_each_2 = {
  t_func_empty_hash_table_entry___for_each_2, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_collision_list_entry___for_each_1[] = {
  2, // locals
  1, // parameters
  LOCAL(1), // 246_36_self
  // $saved_context
  var_tuple, 3, var_next, var_break, var_basic_loops__self, 1, LOCAL(2),
  // !basic_loops::self self
  LET, 1, LOCAL(1), 1, var_basic_loops__self,
  // new !break basic_types::break_function: (myself^)
  var_new, 2, var_basic_types__break_function, lambda_24, IO_CALL(1), var_break,
  // break.basic_loops::saved_context_of saved_context
  LET, -1, var_break, var_basic_loops__saved_context_of, LOCAL(2), var_break,
  // !next:
  LET, 1, lambda_next, 1, var_next,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(247, 3),
  POS(253, 3),
  POS(255, 3),
  POS(261, 4),
  POS(263, 3),
  POS(275, 3),
  LOCAL(2),
  LOCAL(1)
};

static FUNCTION_INFO i_func_collision_list_entry___for_each_1 = {
  t_func_collision_list_entry___for_each_1, NULL, 6, 2,
  {"247_4_saved_context\000", "246_36_self\000"}
};

static TAB_NUM t_lambda_24[] = {
  2, // locals
  -1, // parameters
  MYSELF_PARAMETER, LOCAL(2), // 255_44_myself
  // basic_loops::saved_context_of(myself)
  var_basic_loops__saved_context_of, 1, LOCAL(2), 1, LOCAL(1),
  // basic_loops::saved_context_of(myself)
  LOCAL(1), 0, 3, var_next, var_break, var_basic_loops__self,
  // break!
  var_break, 0, IO_TAIL_CALL,
  POS(256, 5),
  POS(256, 5),
  POS(259, 5),
  LOCAL(2)
};

static FUNCTION_INFO i_lambda_24 = {
  t_lambda_24, NULL, 3, 1,
  {"255_44_myself\000"}
};

static TAB_NUM t_lambda_next[] = {
  1, // locals
  0, // parameters
  // is_an_empty_entry:
  var_is_an_empty_entry, 1, var_basic_loops__self, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_basic_loopsself_is_an_empty_entry, lambda_25, IO_TAIL_CALL,
  POS(265, 25),
  POS(264, 5)
};

static FUNCTION_INFO i_lambda_next = {
  t_lambda_next, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_basic_loopsself_is_an_empty_entry[] = {
  1, // locals
  0, // parameters
  // basic_loops::saved_context_of(break)
  var_basic_loops__saved_context_of, 1, var_break, 1, LOCAL(1),
  // basic_loops::saved_context_of(break)
  LOCAL(1), 0, 3, var_next, var_break, var_basic_loops__self,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(266, 9),
  POS(266, 9),
  POS(269, 9)
};

static FUNCTION_INFO i_lambda_basic_loopsself_is_an_empty_entry = {
  t_lambda_basic_loopsself_is_an_empty_entry, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_25[] = {
  3, // locals
  0, // parameters
  // basic_loops::self $_key $value $link
  var_basic_loops__self, 0, 3, LOCAL(1), LOCAL(2), LOCAL(3),
  // !basic_loops::self link
  LET, 1, LOCAL(3), 1, var_basic_loops__self,
  // basic_loops::body! value
  var_basic_loops__body, 1, LOCAL(2), IO_TAIL_CALL,
  POS(271, 9),
  POS(272, 9),
  POS(273, 9),
  LOCAL(2),
  LOCAL(3)
};

static FUNCTION_INFO i_lambda_25 = {
  t_lambda_25, NULL, 3, 2,
  {"271_34_value\000", "271_41_link\000"}
};

static TAB_NUM t_func_collision_list_entry___for_each_2[] = {
  2, // locals
  1, // parameters
  LOCAL(1), // 277_36_self
  // $saved_context
  var_tuple, 3, var_next, var_break, var_basic_loops__self, 1, LOCAL(2),
  // !basic_loops::self self
  LET, 1, LOCAL(1), 1, var_basic_loops__self,
  // new !break basic_types::break_function: (myself^)
  var_new, 2, var_basic_types__break_function, lambda_26, IO_CALL(1), var_break,
  // break.basic_loops::saved_context_of saved_context
  LET, -1, var_break, var_basic_loops__saved_context_of, LOCAL(2), var_break,
  // !next:
  LET, 1, lambda_2_next, 1, var_next,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(278, 3),
  POS(284, 3),
  POS(286, 3),
  POS(292, 4),
  POS(294, 3),
  POS(306, 3),
  LOCAL(2),
  LOCAL(1)
};

static FUNCTION_INFO i_func_collision_list_entry___for_each_2 = {
  t_func_collision_list_entry___for_each_2, NULL, 6, 2,
  {"278_4_saved_context\000", "277_36_self\000"}
};

static TAB_NUM t_lambda_26[] = {
  2, // locals
  -1, // parameters
  MYSELF_PARAMETER, LOCAL(2), // 286_44_myself
  // basic_loops::saved_context_of(myself)
  var_basic_loops__saved_context_of, 1, LOCAL(2), 1, LOCAL(1),
  // basic_loops::saved_context_of(myself)
  LOCAL(1), 0, 3, var_next, var_break, var_basic_loops__self,
  // break!
  var_break, 0, IO_TAIL_CALL,
  POS(287, 5),
  POS(287, 5),
  POS(290, 5),
  LOCAL(2)
};

static FUNCTION_INFO i_lambda_26 = {
  t_lambda_26, NULL, 3, 1,
  {"286_44_myself\000"}
};

static TAB_NUM t_lambda_2_next[] = {
  1, // locals
  0, // parameters
  // is_an_empty_entry:
  var_is_an_empty_entry, 1, var_basic_loops__self, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_2_basic_loopsself_is_an_empty_entry, lambda_27, IO_TAIL_CALL,
  POS(296, 25),
  POS(295, 5)
};

static FUNCTION_INFO i_lambda_2_next = {
  t_lambda_2_next, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_2_basic_loopsself_is_an_empty_entry[] = {
  1, // locals
  0, // parameters
  // basic_loops::saved_context_of(break)
  var_basic_loops__saved_context_of, 1, var_break, 1, LOCAL(1),
  // basic_loops::saved_context_of(break)
  LOCAL(1), 0, 3, var_next, var_break, var_basic_loops__self,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(297, 9),
  POS(297, 9),
  POS(300, 9)
};

static FUNCTION_INFO i_lambda_2_basic_loopsself_is_an_empty_entry = {
  t_lambda_2_basic_loopsself_is_an_empty_entry, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_27[] = {
  3, // locals
  0, // parameters
  // basic_loops::self $key $value $link
  var_basic_loops__self, 0, 3, LOCAL(1), LOCAL(2), LOCAL(3),
  // !basic_loops::self link
  LET, 1, LOCAL(3), 1, var_basic_loops__self,
  // basic_loops::body! key value
  var_basic_loops__body, 2, LOCAL(1), LOCAL(2), IO_TAIL_CALL,
  POS(302, 9),
  POS(303, 9),
  POS(304, 9),
  LOCAL(1),
  LOCAL(2),
  LOCAL(3)
};

static FUNCTION_INFO i_lambda_27 = {
  t_lambda_27, NULL, 3, 3,
  {"302_28_key\000", "302_33_value\000", "302_40_link\000"}
};

static TAB_NUM t_func_hash_table_leaf___for_each_1[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 308_31_self
  // self $_hash $_key $value
  LOCAL(2), 0, 3, LOCAL(1), LOCAL(1), LOCAL(3),
  // basic_loops::body! value
  var_basic_loops__body, 1, LOCAL(3), IO_TAIL_CALL,
  POS(309, 3),
  POS(310, 3),
  LOCAL(3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_hash_table_leaf___for_each_1 = {
  t_func_hash_table_leaf___for_each_1, NULL, 2, 2,
  {"309_22_value\000", "308_31_self\000"}
};

static TAB_NUM t_func_hash_table_leaf___for_each_2[] = {
  4, // locals
  1, // parameters
  LOCAL(2), // 312_31_self
  // self $_hash $key $value
  LOCAL(2), 0, 3, LOCAL(1), LOCAL(3), LOCAL(4),
  // basic_loops::body! key value
  var_basic_loops__body, 2, LOCAL(3), LOCAL(4), IO_TAIL_CALL,
  POS(313, 3),
  POS(314, 3),
  LOCAL(2),
  LOCAL(4),
  LOCAL(3)
};

static FUNCTION_INFO i_func_hash_table_leaf___for_each_2 = {
  t_func_hash_table_leaf___for_each_2, NULL, 2, 3,
  {"312_31_self\000", "313_21_value\000", "313_16_key\000"}
};

static TAB_NUM t_func_hash_table_node___for_each_1[] = {
  2, // locals
  1, // parameters
  LOCAL(1), // 316_31_self
  // $saved_context
  var_tuple, 4, var_next, var_break, var_basic_loops__from, var_basic_loops__self, 1, LOCAL(2),
  // !basic_loops::from 1
  LET, 1, num_1, 1, var_basic_loops__from,
  // !basic_loops::self self
  LET, 1, LOCAL(1), 1, var_basic_loops__self,
  // new !break basic_types::break_function: (myself^)
  var_new, 2, var_basic_types__break_function, lambda_28, IO_CALL(1), var_break,
  // break.basic_loops::saved_context_of saved_context
  LET, -1, var_break, var_basic_loops__saved_context_of, LOCAL(2), var_break,
  // !next:
  LET, 1, lambda_3_next, 1, var_next,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(317, 3),
  POS(324, 3),
  POS(325, 3),
  POS(327, 3),
  POS(333, 4),
  POS(335, 3),
  POS(347, 3),
  LOCAL(1),
  LOCAL(2)
};

static FUNCTION_INFO i_func_hash_table_node___for_each_1 = {
  t_func_hash_table_node___for_each_1, NULL, 7, 2,
  {"316_31_self\000", "317_4_saved_context\000"}
};

static TAB_NUM t_lambda_28[] = {
  2, // locals
  -1, // parameters
  MYSELF_PARAMETER, LOCAL(2), // 327_44_myself
  // basic_loops::saved_context_of(myself)
  var_basic_loops__saved_context_of, 1, LOCAL(2), 1, LOCAL(1),
  // basic_loops::saved_context_of(myself)
  LOCAL(1), 0, 4, var_next, var_break, var_basic_loops__from, var_basic_loops__self,
  // break!
  var_break, 0, IO_TAIL_CALL,
  POS(328, 5),
  POS(328, 5),
  POS(331, 5),
  LOCAL(2)
};

static FUNCTION_INFO i_lambda_28 = {
  t_lambda_28, NULL, 3, 1,
  {"327_44_myself\000"}
};

static TAB_NUM t_lambda_3_next[] = {
  2, // locals
  0, // parameters
  // $idx basic_loops::from
  LET, 1, var_basic_loops__from, 1, var_336_6_idx,
  // 8:
  var_std__less, 2, num_8, var_336_6_idx, 1, LOCAL(1),
  // 8:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_29, lambda_30, IO_TAIL_CALL,
  POS(336, 5),
  POS(338, 14),
  POS(338, 14),
  POS(337, 5)
};

static FUNCTION_INFO i_lambda_3_next = {
  t_lambda_3_next, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_29[] = {
  1, // locals
  0, // parameters
  // !basic_loops::from idx+1
  var_std__plus, 2, var_336_6_idx, num_1, 1, var_basic_loops__from,
  // basic_loops::self(idx)
  var_basic_loops__self, 1, var_336_6_idx, 1, LOCAL(1),
  // for_each_1! basic_loops::self(idx)
  var_for_each_1, 1, LOCAL(1), IO_TAIL_CALL,
  POS(339, 9),
  POS(340, 21),
  POS(340, 9)
};

static FUNCTION_INFO i_lambda_29 = {
  t_lambda_29, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_30[] = {
  1, // locals
  0, // parameters
  // basic_loops::saved_context_of(break)
  var_basic_loops__saved_context_of, 1, var_break, 1, LOCAL(1),
  // basic_loops::saved_context_of(break)
  LOCAL(1), 0, 4, var_next, var_break, var_basic_loops__from, var_basic_loops__self,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(342, 9),
  POS(342, 9),
  POS(345, 9)
};

static FUNCTION_INFO i_lambda_30 = {
  t_lambda_30, NULL, 3, 0,
  {}
};

static TAB_NUM t_func_hash_table_node___for_each_2[] = {
  2, // locals
  1, // parameters
  LOCAL(1), // 349_31_self
  // $saved_context
  var_tuple, 4, var_next, var_break, var_basic_loops__from, var_basic_loops__self, 1, LOCAL(2),
  // !basic_loops::from 1
  LET, 1, num_1, 1, var_basic_loops__from,
  // !basic_loops::self self
  LET, 1, LOCAL(1), 1, var_basic_loops__self,
  // new !break basic_types::break_function: (myself^)
  var_new, 2, var_basic_types__break_function, lambda_31, IO_CALL(1), var_break,
  // break.basic_loops::saved_context_of saved_context
  LET, -1, var_break, var_basic_loops__saved_context_of, LOCAL(2), var_break,
  // !next:
  LET, 1, lambda_4_next, 1, var_next,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(350, 3),
  POS(357, 3),
  POS(358, 3),
  POS(360, 3),
  POS(366, 4),
  POS(368, 3),
  POS(380, 3),
  LOCAL(2),
  LOCAL(1)
};

static FUNCTION_INFO i_func_hash_table_node___for_each_2 = {
  t_func_hash_table_node___for_each_2, NULL, 7, 2,
  {"350_4_saved_context\000", "349_31_self\000"}
};

static TAB_NUM t_lambda_31[] = {
  2, // locals
  -1, // parameters
  MYSELF_PARAMETER, LOCAL(2), // 360_44_myself
  // basic_loops::saved_context_of(myself)
  var_basic_loops__saved_context_of, 1, LOCAL(2), 1, LOCAL(1),
  // basic_loops::saved_context_of(myself)
  LOCAL(1), 0, 4, var_next, var_break, var_basic_loops__from, var_basic_loops__self,
  // break!
  var_break, 0, IO_TAIL_CALL,
  POS(361, 5),
  POS(361, 5),
  POS(364, 5),
  LOCAL(2)
};

static FUNCTION_INFO i_lambda_31 = {
  t_lambda_31, NULL, 3, 1,
  {"360_44_myself\000"}
};

static TAB_NUM t_lambda_4_next[] = {
  2, // locals
  0, // parameters
  // $idx basic_loops::from
  LET, 1, var_basic_loops__from, 1, var_369_6_idx,
  // 8:
  var_std__less, 2, num_8, var_369_6_idx, 1, LOCAL(1),
  // 8:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_32, lambda_33, IO_TAIL_CALL,
  POS(369, 5),
  POS(371, 14),
  POS(371, 14),
  POS(370, 5)
};

static FUNCTION_INFO i_lambda_4_next = {
  t_lambda_4_next, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_32[] = {
  1, // locals
  0, // parameters
  // !basic_loops::from idx+1
  var_std__plus, 2, var_369_6_idx, num_1, 1, var_basic_loops__from,
  // basic_loops::self(idx)
  var_basic_loops__self, 1, var_369_6_idx, 1, LOCAL(1),
  // for_each_2! basic_loops::self(idx)
  var_for_each_2, 1, LOCAL(1), IO_TAIL_CALL,
  POS(372, 9),
  POS(373, 21),
  POS(373, 9)
};

static FUNCTION_INFO i_lambda_32 = {
  t_lambda_32, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_33[] = {
  1, // locals
  0, // parameters
  // basic_loops::saved_context_of(break)
  var_basic_loops__saved_context_of, 1, var_break, 1, LOCAL(1),
  // basic_loops::saved_context_of(break)
  LOCAL(1), 0, 4, var_next, var_break, var_basic_loops__from, var_basic_loops__self,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(375, 9),
  POS(375, 9),
  POS(378, 9)
};

static FUNCTION_INFO i_lambda_33 = {
  t_lambda_33, NULL, 3, 0,
  {}
};

static TAB_NUM t_func_std_types__hash_table___for_each[] = {
  4, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_384_5_self,
  MANDATORY_PARAMETER, LOCAL(3), // 385_5_body
  var_next, var_386_5_finally,
  // $saved_context
  var_tuple, 4, var_next, var_break, var_basic_loops__body, var_basic_loops__finally, 1, LOCAL(4),
  // !basic_loops::body body
  LET, 1, LOCAL(3), 1, var_basic_loops__body,
  // !basic_loops::finally finally
  LET, 1, var_386_5_finally, 1, var_basic_loops__finally,
  // new !break basic_types::break_function: (myself^)
  var_new, 2, var_basic_types__break_function, lambda_34, IO_CALL(1), var_break,
  // break.basic_loops::saved_context_of saved_context
  LET, -1, var_break, var_basic_loops__saved_context_of, LOCAL(4), var_break,
  // !next break
  LET, 1, var_break, 1, var_next,
  // parameter_count_of(body) == 2:
  var_parameter_count_of, 1, LOCAL(3), 1, LOCAL(1),
  // parameter_count_of(body) == 2:
  var_std__equal, 2, LOCAL(1), num_2, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_35, lambda_36, IO_TAIL_CALL,
  POS(388, 3),
  POS(395, 3),
  POS(396, 3),
  POS(398, 3),
  POS(405, 4),
  POS(406, 3),
  POS(409, 5),
  POS(409, 5),
  POS(408, 3),
  LOCAL(4),
  LOCAL(3)
};

static FUNCTION_INFO i_func_std_types__hash_table___for_each = {
  t_func_std_types__hash_table___for_each, NULL, 9, 2,
  {"388_4_saved_context\000", "385_5_body\000"}
};

static TAB_NUM t_lambda_34[] = {
  2, // locals
  -1, // parameters
  MYSELF_PARAMETER, LOCAL(2), // 398_44_myself
  // !finally basic_loops::finally
  LET, 1, var_basic_loops__finally, 1, var_386_5_finally,
  // basic_loops::saved_context_of(myself)
  var_basic_loops__saved_context_of, 1, LOCAL(2), 1, LOCAL(1),
  // basic_loops::saved_context_of(myself)
  LOCAL(1), 0, 4, var_next, var_break, var_basic_loops__body, var_basic_loops__finally,
  // finally!
  var_386_5_finally, 0, IO_TAIL_CALL,
  POS(399, 5),
  POS(400, 5),
  POS(400, 5),
  POS(403, 5),
  LOCAL(2)
};

static FUNCTION_INFO i_lambda_34 = {
  t_lambda_34, NULL, 4, 1,
  {"398_44_myself\000"}
};

static TAB_NUM t_lambda_35[] = {
  1, // locals
  0, // parameters
  // contents_of(self)
  var_contents_of, 1, var_384_5_self, 1, LOCAL(1),
  // for_each_2! contents_of(self)
  var_for_each_2, 1, LOCAL(1), IO_TAIL_CALL,
  POS(410, 19),
  POS(410, 7)
};

static FUNCTION_INFO i_lambda_35 = {
  t_lambda_35, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_36[] = {
  1, // locals
  0, // parameters
  // contents_of(self)
  var_contents_of, 1, var_384_5_self, 1, LOCAL(1),
  // for_each_1! contents_of(self)
  var_for_each_1, 1, LOCAL(1), IO_TAIL_CALL,
  POS(412, 19),
  POS(412, 7)
};

static FUNCTION_INFO i_lambda_36 = {
  t_lambda_36, NULL, 2, 0,
  {}
};

static TAB_NUM t_func_empty_hash_table_entry___map_1[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 421_33_self
  // -> self
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(421, 39),
  LOCAL(1)
};

static FUNCTION_INFO i_func_empty_hash_table_entry___map_1 = {
  t_func_empty_hash_table_entry___map_1, NULL, 1, 1,
  {"421_33_self\000"}
};

static TAB_NUM t_func_empty_hash_table_entry___map_2[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 422_33_self
  // -> self
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(422, 39),
  LOCAL(1)
};

static FUNCTION_INFO i_func_empty_hash_table_entry___map_2 = {
  t_func_empty_hash_table_entry___map_2, NULL, 1, 1,
  {"422_33_self\000"}
};

static TAB_NUM t_func_hash_table_leaf___map_1[] = {
  5, // locals
  1, // parameters
  LOCAL(2), // 424_26_self
  // self $my_hash_index $my_key $my_value
  LOCAL(2), 0, 3, LOCAL(3), LOCAL(4), LOCAL(5),
  // mapping_function(my_value)
  var_mapping_function, 1, LOCAL(5), 1, LOCAL(1),
  // typed_tuple self my_hash_index my_key mapping_function(my_value)
  var_typed_tuple, 4, LOCAL(2), LOCAL(3), LOCAL(4), LOCAL(1), TAIL_CALL,
  POS(425, 3),
  POS(426, 41),
  POS(426, 3),
  LOCAL(4),
  LOCAL(2),
  LOCAL(3),
  LOCAL(5)
};

static FUNCTION_INFO i_func_hash_table_leaf___map_1 = {
  t_func_hash_table_leaf___map_1, NULL, 3, 4,
  {"425_24_my_key\000", "424_26_self\000", "425_9_my_hash_index\000", "425_32_my_value\000"}
};

static TAB_NUM t_func_hash_table_leaf___map_2[] = {
  5, // locals
  1, // parameters
  LOCAL(2), // 428_26_self
  // self $my_hash_index $my_key $my_value
  LOCAL(2), 0, 3, LOCAL(3), LOCAL(4), LOCAL(5),
  // mapping_function(my_key my_value)
  var_mapping_function, 2, LOCAL(4), LOCAL(5), 1, LOCAL(1),
  // typed_tuple self my_hash_index my_key mapping_function(my_key my_value)
  var_typed_tuple, 4, LOCAL(2), LOCAL(3), LOCAL(4), LOCAL(1), TAIL_CALL,
  POS(429, 3),
  POS(430, 41),
  POS(430, 3),
  LOCAL(2),
  LOCAL(4),
  LOCAL(5),
  LOCAL(3)
};

static FUNCTION_INFO i_func_hash_table_leaf___map_2 = {
  t_func_hash_table_leaf___map_2, NULL, 3, 4,
  {"428_26_self\000", "429_24_my_key\000", "429_32_my_value\000", "429_9_my_hash_index\000"}
};

static TAB_NUM t_func_empty_collision_list_entry___map_1[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 432_37_self
  // -> self
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(432, 43),
  LOCAL(1)
};

static FUNCTION_INFO i_func_empty_collision_list_entry___map_1 = {
  t_func_empty_collision_list_entry___map_1, NULL, 1, 1,
  {"432_37_self\000"}
};

static TAB_NUM t_func_empty_collision_list_entry___map_2[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 433_37_self
  // -> self
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(433, 43),
  LOCAL(1)
};

static FUNCTION_INFO i_func_empty_collision_list_entry___map_2 = {
  t_func_empty_collision_list_entry___map_2, NULL, 1, 1,
  {"433_37_self\000"}
};

static TAB_NUM t_func_collision_list_entry___map_1[] = {
  6, // locals
  1, // parameters
  LOCAL(3), // 435_31_self
  // self $my_key $my_value $my_link
  LOCAL(3), 0, 3, LOCAL(4), LOCAL(5), LOCAL(6),
  // mapping_function(my_value) map_1(my_link)
  var_mapping_function, 1, LOCAL(5), 1, LOCAL(1),
  // map_1(my_link)
  var_map_1, 1, LOCAL(6), 1, LOCAL(2),
  // typed_tuple self my_key mapping_function(my_value) map_1(my_link)
  var_typed_tuple, 4, LOCAL(3), LOCAL(4), LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(436, 3),
  POS(437, 27),
  POS(437, 54),
  POS(437, 3),
  LOCAL(3),
  LOCAL(4),
  LOCAL(5),
  LOCAL(6)
};

static FUNCTION_INFO i_func_collision_list_entry___map_1 = {
  t_func_collision_list_entry___map_1, NULL, 4, 4,
  {"435_31_self\000", "436_9_my_key\000", "436_17_my_value\000", "436_27_my_link\000"}
};

static TAB_NUM t_func_collision_list_entry___map_2[] = {
  6, // locals
  1, // parameters
  LOCAL(3), // 439_31_self
  // self $my_key $my_value $my_link
  LOCAL(3), 0, 3, LOCAL(4), LOCAL(5), LOCAL(6),
  // mapping_function(my_key my_value) map_2(my_link)
  var_mapping_function, 2, LOCAL(4), LOCAL(5), 1, LOCAL(1),
  // map_2(my_link)
  var_map_2, 1, LOCAL(6), 1, LOCAL(2),
  // typed_tuple self my_key mapping_function(my_key my_value) map_2(my_link)
  var_typed_tuple, 4, LOCAL(3), LOCAL(4), LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(440, 3),
  POS(441, 27),
  POS(441, 61),
  POS(441, 3),
  LOCAL(6),
  LOCAL(4),
  LOCAL(5),
  LOCAL(3)
};

static FUNCTION_INFO i_func_collision_list_entry___map_2 = {
  t_func_collision_list_entry___map_2, NULL, 4, 4,
  {"440_27_my_link\000", "440_9_my_key\000", "440_17_my_value\000", "439_31_self\000"}
};

static TAB_NUM t_func_hash_table_node___map_1[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 443_26_self
  // map(self map_1)
  var_map, 2, LOCAL(2), var_map_1, 1, LOCAL(1),
  // new hash_table_node map(self map_1)
  var_new, 2, var_hash_table_node, LOCAL(1), TAIL_CALL,
  POS(444, 23),
  POS(444, 3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_hash_table_node___map_1 = {
  t_func_hash_table_node___map_1, NULL, 2, 1,
  {"443_26_self\000"}
};

static TAB_NUM t_func_hash_table_node___map_2[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 446_26_self
  // map(self map_2)
  var_map, 2, LOCAL(2), var_map_2, 1, LOCAL(1),
  // new hash_table_node map(self map_2)
  var_new, 2, var_hash_table_node, LOCAL(1), TAIL_CALL,
  POS(447, 23),
  POS(447, 3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_hash_table_node___map_2 = {
  t_func_hash_table_node___map_2, NULL, 2, 1,
  {"446_26_self\000"}
};

static TAB_NUM t_func_std_types__hash_table___map[] = {
  3, // locals
  2, // parameters
  var_457_5_self,
  LOCAL(3), // 458_5_function
  // !mapping_function function
  LET, 1, LOCAL(3), 1, var_mapping_function,
  // parameter_count_of(function) == 2:
  var_parameter_count_of, 1, LOCAL(3), 1, LOCAL(1),
  // parameter_count_of(function) == 2:
  var_std__equal, 2, LOCAL(1), num_2, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_37, lambda_38, TAIL_CALL,
  POS(460, 3),
  POS(462, 5),
  POS(462, 5),
  POS(461, 3),
  LOCAL(3)
};

static FUNCTION_INFO i_func_std_types__hash_table___map = {
  t_func_std_types__hash_table___map, NULL, 4, 1,
  {"458_5_function\000"}
};

static TAB_NUM t_lambda_37[] = {
  1, // locals
  0, // parameters
  // contents_of
  var_contents_of, 1, var_457_5_self, 1, LOCAL(1),
  // map_2 &self.contents_of
  var_map_2, 1, LOCAL(1), 1, LOCAL(1),
  // self.contents_of
  LET, -1, var_457_5_self, var_contents_of, LOCAL(1), var_457_5_self,
  // -> self
  LET, 1, var_457_5_self, TAIL_CALL,
  POS(463, 19),
  POS(463, 7),
  POS(463, 14),
  POS(464, 7)
};

static FUNCTION_INFO i_lambda_37 = {
  t_lambda_37, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_38[] = {
  1, // locals
  0, // parameters
  // contents_of
  var_contents_of, 1, var_457_5_self, 1, LOCAL(1),
  // map_1 &self.contents_of
  var_map_1, 1, LOCAL(1), 1, LOCAL(1),
  // self.contents_of
  LET, -1, var_457_5_self, var_contents_of, LOCAL(1), var_457_5_self,
  // -> self
  LET, 1, var_457_5_self, TAIL_CALL,
  POS(466, 19),
  POS(466, 7),
  POS(466, 14),
  POS(467, 7)
};

static FUNCTION_INFO i_lambda_38 = {
  t_lambda_38, NULL, 4, 0,
  {}
};

static TAB_NUM t_func_empty_hash_table_entry___reduce_1[] = {
  1, // locals
  1, // parameters
  LOCAL(1),
  // -> UNIT
  LET, 1, uni_UNIT, TAIL_CALL,
  POS(477, 43)
};

static FUNCTION_INFO i_func_empty_hash_table_entry___reduce_1 = {
  t_func_empty_hash_table_entry___reduce_1, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_hash_table_leaf___reduce_1[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 479_29_self
  // self $_my_hash_index $_my_key $my_value
  LOCAL(2), 0, 3, LOCAL(1), LOCAL(1), LOCAL(3),
  // -> my_value
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(480, 3),
  POS(481, 3),
  LOCAL(2),
  LOCAL(3)
};

static FUNCTION_INFO i_func_hash_table_leaf___reduce_1 = {
  t_func_hash_table_leaf___reduce_1, NULL, 2, 2,
  {"479_29_self\000", "480_34_my_value\000"}
};

static TAB_NUM t_func_empty_collision_list_entry___reduce_1[] = {
  1, // locals
  1, // parameters
  LOCAL(1),
  // -> UNIT
  LET, 1, uni_UNIT, TAIL_CALL,
  POS(483, 47)
};

static FUNCTION_INFO i_func_empty_collision_list_entry___reduce_1 = {
  t_func_empty_collision_list_entry___reduce_1, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_collision_list_entry___reduce_1[] = {
  6, // locals
  1, // parameters
  LOCAL(3), // 485_34_self
  // self $my_key $my_value $my_link
  LOCAL(3), 0, 3, LOCAL(4), LOCAL(5), LOCAL(6),
  // mapping_function(my_key my_value)
  var_mapping_function, 2, LOCAL(4), LOCAL(5), 1, LOCAL(1),
  // reduce_1(my_link)
  var_reduce_1, 1, LOCAL(6), 1, LOCAL(2),
  // my_reduce
  func_my_reduce, 2, LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(486, 3),
  POS(488, 5),
  POS(489, 5),
  POS(487, 3),
  LOCAL(3),
  LOCAL(6),
  LOCAL(5),
  LOCAL(4)
};

static FUNCTION_INFO i_func_collision_list_entry___reduce_1 = {
  t_func_collision_list_entry___reduce_1, NULL, 4, 4,
  {"485_34_self\000", "486_27_my_link\000", "486_17_my_value\000", "486_9_my_key\000"}
};

static TAB_NUM t_func_hash_table_node___reduce_1[] = {
  11, // locals
  1, // parameters
  LOCAL(5), // 491_29_self
  // self(1)) reduce_1(self(2)))
  LOCAL(5), 1, num_1, 1, LOCAL(1),
  // reduce_1(self(1)) reduce_1(self(2)))
  var_reduce_1, 1, LOCAL(1), 1, LOCAL(2),
  // self(2)))
  LOCAL(5), 1, num_2, 1, LOCAL(3),
  // reduce_1(self(2)))
  var_reduce_1, 1, LOCAL(3), 1, LOCAL(4),
  // $r12 my_reduce(reduce_1(self(1)) reduce_1(self(2)))
  func_my_reduce, 2, LOCAL(2), LOCAL(4), 1, LOCAL(6),
  // self(3)) reduce_1(self(4)))
  LOCAL(5), 1, num_3, 1, LOCAL(1),
  // reduce_1(self(3)) reduce_1(self(4)))
  var_reduce_1, 1, LOCAL(1), 1, LOCAL(2),
  // self(4)))
  LOCAL(5), 1, num_4, 1, LOCAL(3),
  // reduce_1(self(4)))
  var_reduce_1, 1, LOCAL(3), 1, LOCAL(4),
  // $r34 my_reduce(reduce_1(self(3)) reduce_1(self(4)))
  func_my_reduce, 2, LOCAL(2), LOCAL(4), 1, LOCAL(7),
  // self(5)) reduce_1(self(6)))
  LOCAL(5), 1, num_5, 1, LOCAL(1),
  // reduce_1(self(5)) reduce_1(self(6)))
  var_reduce_1, 1, LOCAL(1), 1, LOCAL(2),
  // self(6)))
  LOCAL(5), 1, num_6, 1, LOCAL(3),
  // reduce_1(self(6)))
  var_reduce_1, 1, LOCAL(3), 1, LOCAL(4),
  // $r56 my_reduce(reduce_1(self(5)) reduce_1(self(6)))
  func_my_reduce, 2, LOCAL(2), LOCAL(4), 1, LOCAL(8),
  // self(7)) reduce_1(self(8)))
  LOCAL(5), 1, num_7, 1, LOCAL(1),
  // reduce_1(self(7)) reduce_1(self(8)))
  var_reduce_1, 1, LOCAL(1), 1, LOCAL(2),
  // self(8)))
  LOCAL(5), 1, num_8, 1, LOCAL(3),
  // reduce_1(self(8)))
  var_reduce_1, 1, LOCAL(3), 1, LOCAL(4),
  // $r78 my_reduce(reduce_1(self(7)) reduce_1(self(8)))
  func_my_reduce, 2, LOCAL(2), LOCAL(4), 1, LOCAL(9),
  // $r1234 my_reduce(r12 r34)
  func_my_reduce, 2, LOCAL(6), LOCAL(7), 1, LOCAL(10),
  // $r5678 my_reduce(r56 r78)
  func_my_reduce, 2, LOCAL(8), LOCAL(9), 1, LOCAL(11),
  // my_reduce(r1234 r5678)
  func_my_reduce, 2, LOCAL(10), LOCAL(11), 1, LOCAL(1),
  // -> my_reduce(r1234 r5678)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(492, 27),
  POS(492, 18),
  POS(492, 45),
  POS(492, 36),
  POS(492, 3),
  POS(493, 27),
  POS(493, 18),
  POS(493, 45),
  POS(493, 36),
  POS(493, 3),
  POS(494, 27),
  POS(494, 18),
  POS(494, 45),
  POS(494, 36),
  POS(494, 3),
  POS(495, 27),
  POS(495, 18),
  POS(495, 45),
  POS(495, 36),
  POS(495, 3),
  POS(496, 3),
  POS(497, 3),
  POS(498, 6),
  POS(498, 3),
  LOCAL(9),
  LOCAL(10),
  LOCAL(7),
  LOCAL(8),
  LOCAL(11),
  LOCAL(6),
  LOCAL(5)
};

static FUNCTION_INFO i_func_hash_table_node___reduce_1 = {
  t_func_hash_table_node___reduce_1, NULL, 24, 7,
  {"495_4_r78\000", "496_4_r1234\000", "493_4_r34\000", "494_4_r56\000", "497_4_r5678\000", "492_4_r12\000", "491_29_self\000"}
};

static TAB_NUM t_func_my_reduce[] = {
  1, // locals
  2, // parameters
  var_500_14_left,
  var_500_19_right,
  // UNIT == left
  var_std__equal, 2, uni_UNIT, var_500_14_left, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_39, lambda_40, TAIL_CALL,
  POS(502, 5),
  POS(501, 3)
};

static FUNCTION_INFO i_func_my_reduce = {
  t_func_my_reduce, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_39[] = {
  0, // locals
  0, // parameters
  //  right
  LET, 1, var_500_19_right, TAIL_CALL,
  POS(503, 7)
};

static FUNCTION_INFO i_lambda_39 = {
  t_lambda_39, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_40[] = {
  1, // locals
  0, // parameters
  // UNIT == right
  var_std__equal, 2, uni_UNIT, var_500_19_right, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_41, lambda_42, TAIL_CALL,
  POS(506, 9),
  POS(505, 7)
};

static FUNCTION_INFO i_lambda_40 = {
  t_lambda_40, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_41[] = {
  0, // locals
  0, // parameters
  //  left
  LET, 1, var_500_14_left, TAIL_CALL,
  POS(507, 11)
};

static FUNCTION_INFO i_lambda_41 = {
  t_lambda_41, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_42[] = {
  1, // locals
  0, // parameters
  // reduction_function(left right)
  var_reduction_function, 2, var_500_14_left, var_500_19_right, 1, LOCAL(1),
  //  reduction_function(left right)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(508, 12),
  POS(508, 11)
};

static FUNCTION_INFO i_lambda_42 = {
  t_lambda_42, NULL, 2, 0,
  {}
};

static TAB_NUM t_func_std_types__hash_table___reduce[] = {
  2, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_522_5_self,
  MANDATORY_PARAMETER, var_523_5_function,
  var_undefined, var_524_5_unit,
  // length_of(self) == 0
  var_length_of, 1, var_522_5_self, 1, LOCAL(1),
  // length_of(self) == 0
  var_std__equal, 2, LOCAL(1), num_0, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_43, lambda_44, TAIL_CALL,
  POS(527, 5),
  POS(527, 5),
  POS(526, 3)
};

static FUNCTION_INFO i_func_std_types__hash_table___reduce = {
  t_func_std_types__hash_table___reduce, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_43[] = {
  0, // locals
  0, // parameters
  //  unit
  LET, 1, var_524_5_unit, TAIL_CALL,
  POS(528, 7)
};

static FUNCTION_INFO i_lambda_43 = {
  t_lambda_43, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_44[] = {
  1, // locals
  0, // parameters
  // !reduction_function function
  LET, 1, var_523_5_function, 1, var_reduction_function,
  // contents_of(self)
  var_contents_of, 1, var_522_5_self, 1, LOCAL(1),
  // reduce_1 contents_of(self)
  var_reduce_1, 1, LOCAL(1), TAIL_CALL,
  POS(530, 7),
  POS(531, 16),
  POS(531, 7)
};

static FUNCTION_INFO i_lambda_44 = {
  t_lambda_44, NULL, 3, 0,
  {}
};

static TAB_NUM t_func_empty_hash_table_entry___map_reduce_1[] = {
  1, // locals
  1, // parameters
  LOCAL(1),
  // -> UNIT
  LET, 1, uni_UNIT, TAIL_CALL,
  POS(538, 47)
};

static FUNCTION_INFO i_func_empty_hash_table_entry___map_reduce_1 = {
  t_func_empty_hash_table_entry___map_reduce_1, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_empty_hash_table_entry___map_reduce_2[] = {
  1, // locals
  1, // parameters
  LOCAL(1),
  // -> UNIT
  LET, 1, uni_UNIT, TAIL_CALL,
  POS(539, 47)
};

static FUNCTION_INFO i_func_empty_hash_table_entry___map_reduce_2 = {
  t_func_empty_hash_table_entry___map_reduce_2, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_hash_table_leaf___map_reduce_1[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 541_33_self
  // self $_my_hash_index $_my_key $my_value
  LOCAL(2), 0, 3, LOCAL(1), LOCAL(1), LOCAL(3),
  // mapping_function(my_value)
  var_mapping_function, 1, LOCAL(3), 1, LOCAL(1),
  // -> mapping_function(my_value)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(542, 3),
  POS(543, 6),
  POS(543, 3),
  LOCAL(3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_hash_table_leaf___map_reduce_1 = {
  t_func_hash_table_leaf___map_reduce_1, NULL, 3, 2,
  {"542_34_my_value\000", "541_33_self\000"}
};

static TAB_NUM t_func_hash_table_leaf___map_reduce_2[] = {
  4, // locals
  1, // parameters
  LOCAL(2), // 545_33_self
  // self $_my_hash_index $my_key $my_value
  LOCAL(2), 0, 3, LOCAL(1), LOCAL(3), LOCAL(4),
  // mapping_function(my_key my_value)
  var_mapping_function, 2, LOCAL(3), LOCAL(4), 1, LOCAL(1),
  // -> mapping_function(my_key my_value)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(546, 3),
  POS(547, 6),
  POS(547, 3),
  LOCAL(2),
  LOCAL(3),
  LOCAL(4)
};

static FUNCTION_INFO i_func_hash_table_leaf___map_reduce_2 = {
  t_func_hash_table_leaf___map_reduce_2, NULL, 3, 3,
  {"545_33_self\000", "546_25_my_key\000", "546_33_my_value\000"}
};

static TAB_NUM t_func_empty_collision_list_entry___map_reduce_1[] = {
  1, // locals
  1, // parameters
  LOCAL(1),
  // -> UNIT
  LET, 1, uni_UNIT, TAIL_CALL,
  POS(549, 51)
};

static FUNCTION_INFO i_func_empty_collision_list_entry___map_reduce_1 = {
  t_func_empty_collision_list_entry___map_reduce_1, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_empty_collision_list_entry___map_reduce_2[] = {
  1, // locals
  1, // parameters
  LOCAL(1),
  // -> UNIT
  LET, 1, uni_UNIT, TAIL_CALL,
  POS(550, 51)
};

static FUNCTION_INFO i_func_empty_collision_list_entry___map_reduce_2 = {
  t_func_empty_collision_list_entry___map_reduce_2, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_collision_list_entry___map_reduce_1[] = {
  6, // locals
  1, // parameters
  LOCAL(3), // 552_38_self
  // self $my_key $my_value $my_link
  LOCAL(3), 0, 3, LOCAL(4), LOCAL(5), LOCAL(6),
  // mapping_function(my_key my_value)
  var_mapping_function, 2, LOCAL(4), LOCAL(5), 1, LOCAL(1),
  // map_reduce_1(my_link)
  var_map_reduce_1, 1, LOCAL(6), 1, LOCAL(2),
  // my_reduce
  func_my_reduce, 2, LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(553, 3),
  POS(555, 5),
  POS(556, 5),
  POS(554, 3),
  LOCAL(3),
  LOCAL(5),
  LOCAL(6),
  LOCAL(4)
};

static FUNCTION_INFO i_func_collision_list_entry___map_reduce_1 = {
  t_func_collision_list_entry___map_reduce_1, NULL, 4, 4,
  {"552_38_self\000", "553_17_my_value\000", "553_27_my_link\000", "553_9_my_key\000"}
};

static TAB_NUM t_func_collision_list_entry___map_reduce_2[] = {
  6, // locals
  1, // parameters
  LOCAL(3), // 558_38_self
  // self $my_key $my_value $my_link
  LOCAL(3), 0, 3, LOCAL(4), LOCAL(5), LOCAL(6),
  // mapping_function(my_key my_value)
  var_mapping_function, 2, LOCAL(4), LOCAL(5), 1, LOCAL(1),
  // map_reduce_2(my_link)
  var_map_reduce_2, 1, LOCAL(6), 1, LOCAL(2),
  // my_reduce
  func_my_reduce, 2, LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(559, 3),
  POS(561, 5),
  POS(562, 5),
  POS(560, 3),
  LOCAL(5),
  LOCAL(6),
  LOCAL(4),
  LOCAL(3)
};

static FUNCTION_INFO i_func_collision_list_entry___map_reduce_2 = {
  t_func_collision_list_entry___map_reduce_2, NULL, 4, 4,
  {"559_17_my_value\000", "559_27_my_link\000", "559_9_my_key\000", "558_38_self\000"}
};

static TAB_NUM t_func_hash_table_node___map_reduce_1[] = {
  11, // locals
  1, // parameters
  LOCAL(5), // 564_33_self
  // self(1)) map_reduce_1(self(2)))
  LOCAL(5), 1, num_1, 1, LOCAL(1),
  // map_reduce_1(self(1)) map_reduce_1(self(2)))
  var_map_reduce_1, 1, LOCAL(1), 1, LOCAL(2),
  // self(2)))
  LOCAL(5), 1, num_2, 1, LOCAL(3),
  // map_reduce_1(self(2)))
  var_map_reduce_1, 1, LOCAL(3), 1, LOCAL(4),
  // $r12 my_reduce(map_reduce_1(self(1)) map_reduce_1(self(2)))
  func_my_reduce, 2, LOCAL(2), LOCAL(4), 1, LOCAL(6),
  // self(3)) map_reduce_1(self(4)))
  LOCAL(5), 1, num_3, 1, LOCAL(1),
  // map_reduce_1(self(3)) map_reduce_1(self(4)))
  var_map_reduce_1, 1, LOCAL(1), 1, LOCAL(2),
  // self(4)))
  LOCAL(5), 1, num_4, 1, LOCAL(3),
  // map_reduce_1(self(4)))
  var_map_reduce_1, 1, LOCAL(3), 1, LOCAL(4),
  // $r34 my_reduce(map_reduce_1(self(3)) map_reduce_1(self(4)))
  func_my_reduce, 2, LOCAL(2), LOCAL(4), 1, LOCAL(7),
  // self(5)) map_reduce_1(self(6)))
  LOCAL(5), 1, num_5, 1, LOCAL(1),
  // map_reduce_1(self(5)) map_reduce_1(self(6)))
  var_map_reduce_1, 1, LOCAL(1), 1, LOCAL(2),
  // self(6)))
  LOCAL(5), 1, num_6, 1, LOCAL(3),
  // map_reduce_1(self(6)))
  var_map_reduce_1, 1, LOCAL(3), 1, LOCAL(4),
  // $r56 my_reduce(map_reduce_1(self(5)) map_reduce_1(self(6)))
  func_my_reduce, 2, LOCAL(2), LOCAL(4), 1, LOCAL(8),
  // self(7)) map_reduce_1(self(8)))
  LOCAL(5), 1, num_7, 1, LOCAL(1),
  // map_reduce_1(self(7)) map_reduce_1(self(8)))
  var_map_reduce_1, 1, LOCAL(1), 1, LOCAL(2),
  // self(8)))
  LOCAL(5), 1, num_8, 1, LOCAL(3),
  // map_reduce_1(self(8)))
  var_map_reduce_1, 1, LOCAL(3), 1, LOCAL(4),
  // $r78 my_reduce(map_reduce_1(self(7)) map_reduce_1(self(8)))
  func_my_reduce, 2, LOCAL(2), LOCAL(4), 1, LOCAL(9),
  // $r1234 my_reduce(r12 r34)
  func_my_reduce, 2, LOCAL(6), LOCAL(7), 1, LOCAL(10),
  // $r5678 my_reduce(r56 r78)
  func_my_reduce, 2, LOCAL(8), LOCAL(9), 1, LOCAL(11),
  // my_reduce(r1234 r5678)
  func_my_reduce, 2, LOCAL(10), LOCAL(11), 1, LOCAL(1),
  // -> my_reduce(r1234 r5678)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(565, 31),
  POS(565, 18),
  POS(565, 53),
  POS(565, 40),
  POS(565, 3),
  POS(566, 31),
  POS(566, 18),
  POS(566, 53),
  POS(566, 40),
  POS(566, 3),
  POS(567, 31),
  POS(567, 18),
  POS(567, 53),
  POS(567, 40),
  POS(567, 3),
  POS(568, 31),
  POS(568, 18),
  POS(568, 53),
  POS(568, 40),
  POS(568, 3),
  POS(569, 3),
  POS(570, 3),
  POS(571, 6),
  POS(571, 3),
  LOCAL(10),
  LOCAL(5),
  LOCAL(6),
  LOCAL(8),
  LOCAL(11),
  LOCAL(7),
  LOCAL(9)
};

static FUNCTION_INFO i_func_hash_table_node___map_reduce_1 = {
  t_func_hash_table_node___map_reduce_1, NULL, 24, 7,
  {"569_4_r1234\000", "564_33_self\000", "565_4_r12\000", "567_4_r56\000", "570_4_r5678\000", "566_4_r34\000", "568_4_r78\000"}
};

static TAB_NUM t_func_hash_table_node___map_reduce_2[] = {
  11, // locals
  1, // parameters
  LOCAL(5), // 573_33_self
  // self(1)) map_reduce_2(self(2)))
  LOCAL(5), 1, num_1, 1, LOCAL(1),
  // map_reduce_2(self(1)) map_reduce_2(self(2)))
  var_map_reduce_2, 1, LOCAL(1), 1, LOCAL(2),
  // self(2)))
  LOCAL(5), 1, num_2, 1, LOCAL(3),
  // map_reduce_2(self(2)))
  var_map_reduce_2, 1, LOCAL(3), 1, LOCAL(4),
  // $r12 my_reduce(map_reduce_2(self(1)) map_reduce_2(self(2)))
  func_my_reduce, 2, LOCAL(2), LOCAL(4), 1, LOCAL(6),
  // self(3)) map_reduce_2(self(4)))
  LOCAL(5), 1, num_3, 1, LOCAL(1),
  // map_reduce_2(self(3)) map_reduce_2(self(4)))
  var_map_reduce_2, 1, LOCAL(1), 1, LOCAL(2),
  // self(4)))
  LOCAL(5), 1, num_4, 1, LOCAL(3),
  // map_reduce_2(self(4)))
  var_map_reduce_2, 1, LOCAL(3), 1, LOCAL(4),
  // $r34 my_reduce(map_reduce_2(self(3)) map_reduce_2(self(4)))
  func_my_reduce, 2, LOCAL(2), LOCAL(4), 1, LOCAL(7),
  // self(5)) map_reduce_2(self(6)))
  LOCAL(5), 1, num_5, 1, LOCAL(1),
  // map_reduce_2(self(5)) map_reduce_2(self(6)))
  var_map_reduce_2, 1, LOCAL(1), 1, LOCAL(2),
  // self(6)))
  LOCAL(5), 1, num_6, 1, LOCAL(3),
  // map_reduce_2(self(6)))
  var_map_reduce_2, 1, LOCAL(3), 1, LOCAL(4),
  // $r56 my_reduce(map_reduce_2(self(5)) map_reduce_2(self(6)))
  func_my_reduce, 2, LOCAL(2), LOCAL(4), 1, LOCAL(8),
  // self(7)) map_reduce_2(self(8)))
  LOCAL(5), 1, num_7, 1, LOCAL(1),
  // map_reduce_2(self(7)) map_reduce_2(self(8)))
  var_map_reduce_2, 1, LOCAL(1), 1, LOCAL(2),
  // self(8)))
  LOCAL(5), 1, num_8, 1, LOCAL(3),
  // map_reduce_2(self(8)))
  var_map_reduce_2, 1, LOCAL(3), 1, LOCAL(4),
  // $r78 my_reduce(map_reduce_2(self(7)) map_reduce_2(self(8)))
  func_my_reduce, 2, LOCAL(2), LOCAL(4), 1, LOCAL(9),
  // $r1234 my_reduce(r12 r34)
  func_my_reduce, 2, LOCAL(6), LOCAL(7), 1, LOCAL(10),
  // $r5678 my_reduce(r56 r78)
  func_my_reduce, 2, LOCAL(8), LOCAL(9), 1, LOCAL(11),
  // my_reduce(r1234 r5678)
  func_my_reduce, 2, LOCAL(10), LOCAL(11), 1, LOCAL(1),
  // -> my_reduce(r1234 r5678)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(574, 31),
  POS(574, 18),
  POS(574, 53),
  POS(574, 40),
  POS(574, 3),
  POS(575, 31),
  POS(575, 18),
  POS(575, 53),
  POS(575, 40),
  POS(575, 3),
  POS(576, 31),
  POS(576, 18),
  POS(576, 53),
  POS(576, 40),
  POS(576, 3),
  POS(577, 31),
  POS(577, 18),
  POS(577, 53),
  POS(577, 40),
  POS(577, 3),
  POS(578, 3),
  POS(579, 3),
  POS(580, 6),
  POS(580, 3),
  LOCAL(11),
  LOCAL(8),
  LOCAL(5),
  LOCAL(10),
  LOCAL(9),
  LOCAL(7),
  LOCAL(6)
};

static FUNCTION_INFO i_func_hash_table_node___map_reduce_2 = {
  t_func_hash_table_node___map_reduce_2, NULL, 24, 7,
  {"579_4_r5678\000", "576_4_r56\000", "573_33_self\000", "578_4_r1234\000", "577_4_r78\000", "575_4_r34\000", "574_4_r12\000"}
};

static TAB_NUM t_func_std_types__hash_table___map_reduce[] = {
  2, // locals
  -4, // parameters
  MANDATORY_PARAMETER, var_592_5_self,
  MANDATORY_PARAMETER, var_593_5_map_function,
  var_append, var_594_5_reduce_function,
  var_undefined, var_595_5_unit,
  // length_of(self) == 0
  var_length_of, 1, var_592_5_self, 1, LOCAL(1),
  // length_of(self) == 0
  var_std__equal, 2, LOCAL(1), num_0, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_45, lambda_46, TAIL_CALL,
  POS(598, 5),
  POS(598, 5),
  POS(597, 3)
};

static FUNCTION_INFO i_func_std_types__hash_table___map_reduce = {
  t_func_std_types__hash_table___map_reduce, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_45[] = {
  0, // locals
  0, // parameters
  //  unit
  LET, 1, var_595_5_unit, TAIL_CALL,
  POS(599, 7)
};

static FUNCTION_INFO i_lambda_45 = {
  t_lambda_45, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_46[] = {
  2, // locals
  0, // parameters
  // !mapping_function map_function
  LET, 1, var_593_5_map_function, 1, var_mapping_function,
  // !reduction_function reduce_function
  LET, 1, var_594_5_reduce_function, 1, var_reduction_function,
  // parameter_count_of(map_function) == 2:
  var_parameter_count_of, 1, var_593_5_map_function, 1, LOCAL(1),
  // parameter_count_of(map_function) == 2:
  var_std__equal, 2, LOCAL(1), num_2, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_47, lambda_48, TAIL_CALL,
  POS(601, 7),
  POS(602, 7),
  POS(604, 9),
  POS(604, 9),
  POS(603, 7)
};

static FUNCTION_INFO i_lambda_46 = {
  t_lambda_46, NULL, 5, 0,
  {}
};

static TAB_NUM t_lambda_47[] = {
  1, // locals
  0, // parameters
  // contents_of(self)
  var_contents_of, 1, var_592_5_self, 1, LOCAL(1),
  // map_reduce_2 contents_of(self)
  var_map_reduce_2, 1, LOCAL(1), TAIL_CALL,
  POS(605, 24),
  POS(605, 11)
};

static FUNCTION_INFO i_lambda_47 = {
  t_lambda_47, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_48[] = {
  1, // locals
  0, // parameters
  // contents_of(self)
  var_contents_of, 1, var_592_5_self, 1, LOCAL(1),
  // map_reduce_1 contents_of(self)
  var_map_reduce_1, 1, LOCAL(1), TAIL_CALL,
  POS(607, 24),
  POS(607, 11)
};

static FUNCTION_INFO i_lambda_48 = {
  t_lambda_48, NULL, 2, 0,
  {}
};

static TAB_NUM t_func_empty_hash_table_entry___filter_1[] = {
  1, // locals
  1, // parameters
  LOCAL(1),
  // -> empty_hash_table_entry 0
  LET, 2, var_empty_hash_table_entry, num_0, TAIL_CALL,
  POS(616, 43)
};

static FUNCTION_INFO i_func_empty_hash_table_entry___filter_1 = {
  t_func_empty_hash_table_entry___filter_1, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_empty_hash_table_entry___filter_2[] = {
  1, // locals
  1, // parameters
  LOCAL(1),
  // -> empty_hash_table_entry 0
  LET, 2, var_empty_hash_table_entry, num_0, TAIL_CALL,
  POS(617, 43)
};

static FUNCTION_INFO i_func_empty_hash_table_entry___filter_2 = {
  t_func_empty_hash_table_entry___filter_2, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_hash_table_leaf___filter_1[] = {
  2, // locals
  1, // parameters
  var_619_29_self,
  // self $_my_hash_index $_my_key $my_value
  var_619_29_self, 0, 3, LOCAL(1), LOCAL(1), LOCAL(2),
  // filter_function(my_value)
  var_filter_function, 1, LOCAL(2), 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_49, lambda_50, TAIL_CALL,
  POS(620, 3),
  POS(622, 5),
  POS(621, 3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_hash_table_leaf___filter_1 = {
  t_func_hash_table_leaf___filter_1, NULL, 3, 1,
  {"620_34_my_value\000"}
};

static TAB_NUM t_lambda_49[] = {
  0, // locals
  0, // parameters
  //  self 0
  LET, 2, var_619_29_self, num_0, TAIL_CALL,
  POS(623, 7)
};

static FUNCTION_INFO i_lambda_49 = {
  t_lambda_49, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_50[] = {
  0, // locals
  0, // parameters
  //  empty_hash_table_entry 1
  LET, 2, var_empty_hash_table_entry, num_1, TAIL_CALL,
  POS(624, 7)
};

static FUNCTION_INFO i_lambda_50 = {
  t_lambda_50, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_hash_table_leaf___filter_2[] = {
  3, // locals
  1, // parameters
  var_626_29_self,
  // self $_my_hash_index $my_key $my_value
  var_626_29_self, 0, 3, LOCAL(1), LOCAL(2), LOCAL(3),
  // filter_function(my_key my_value)
  var_filter_function, 2, LOCAL(2), LOCAL(3), 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_51, lambda_52, TAIL_CALL,
  POS(627, 3),
  POS(629, 5),
  POS(628, 3),
  LOCAL(3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_hash_table_leaf___filter_2 = {
  t_func_hash_table_leaf___filter_2, NULL, 3, 2,
  {"627_33_my_value\000", "627_25_my_key\000"}
};

static TAB_NUM t_lambda_51[] = {
  0, // locals
  0, // parameters
  //  self 0
  LET, 2, var_626_29_self, num_0, TAIL_CALL,
  POS(630, 7)
};

static FUNCTION_INFO i_lambda_51 = {
  t_lambda_51, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_52[] = {
  0, // locals
  0, // parameters
  //  empty_hash_table_entry 1
  LET, 2, var_empty_hash_table_entry, num_1, TAIL_CALL,
  POS(631, 7)
};

static FUNCTION_INFO i_lambda_52 = {
  t_lambda_52, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_empty_collision_list_entry___filter_1[] = {
  1, // locals
  1, // parameters
  LOCAL(1),
  // -> empty_collision_list_entry 0
  LET, 2, var_empty_collision_list_entry, num_0, TAIL_CALL,
  POS(633, 47)
};

static FUNCTION_INFO i_func_empty_collision_list_entry___filter_1 = {
  t_func_empty_collision_list_entry___filter_1, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_empty_collision_list_entry___filter_2[] = {
  1, // locals
  1, // parameters
  LOCAL(1),
  // -> empty_collision_list_entry 0
  LET, 2, var_empty_collision_list_entry, num_0, TAIL_CALL,
  POS(634, 47)
};

static FUNCTION_INFO i_func_empty_collision_list_entry___filter_2 = {
  t_func_empty_collision_list_entry___filter_2, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_collision_list_entry___filter_1[] = {
  2, // locals
  1, // parameters
  var_636_34_self,
  // self $my_key $my_value $my_link
  var_636_34_self, 0, 3, var_637_9_my_key, var_637_17_my_value, LOCAL(2),
  // filter_1 $new_link $deleted my_link
  var_filter_1, 1, LOCAL(2), 2, var_638_13_new_link, var_638_23_deleted,
  // filter_function(my_value):
  var_filter_function, 1, var_637_17_my_value, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_filter_functionmy_value, lambda_55, TAIL_CALL,
  POS(637, 3),
  POS(638, 3),
  POS(640, 5),
  POS(639, 3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_collision_list_entry___filter_1 = {
  t_func_collision_list_entry___filter_1, NULL, 4, 1,
  {"637_27_my_link\000"}
};

static TAB_NUM t_lambda_filter_functionmy_value[] = {
  1, // locals
  0, // parameters
  // deleted == 0
  var_std__equal, 2, var_638_23_deleted, num_0, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_53, lambda_54, TAIL_CALL,
  POS(642, 9),
  POS(641, 7)
};

static FUNCTION_INFO i_lambda_filter_functionmy_value = {
  t_lambda_filter_functionmy_value, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_53[] = {
  0, // locals
  0, // parameters
  //  self 0
  LET, 2, var_636_34_self, num_0, TAIL_CALL,
  POS(643, 11)
};

static FUNCTION_INFO i_lambda_53 = {
  t_lambda_53, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_54[] = {
  1, // locals
  0, // parameters
  // typed_tuple(collision_list_entry my_key my_value new_link) deleted
  var_typed_tuple, 4, var_collision_list_entry, var_637_9_my_key, var_637_17_my_value, var_638_13_new_link, 1, LOCAL(1),
  //  typed_tuple(collision_list_entry my_key my_value new_link) deleted
  LET, 2, LOCAL(1), var_638_23_deleted, TAIL_CALL,
  POS(644, 12),
  POS(644, 11)
};

static FUNCTION_INFO i_lambda_54 = {
  t_lambda_54, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_55[] = {
  1, // locals
  0, // parameters
  // deleted+1
  var_std__plus, 2, var_638_23_deleted, num_1, 1, LOCAL(1),
  //  new_link deleted+1
  LET, 2, var_638_13_new_link, LOCAL(1), TAIL_CALL,
  POS(645, 17),
  POS(645, 7)
};

static FUNCTION_INFO i_lambda_55 = {
  t_lambda_55, NULL, 2, 0,
  {}
};

static TAB_NUM t_func_collision_list_entry___filter_2[] = {
  2, // locals
  1, // parameters
  var_647_34_self,
  // self $my_key $my_value $my_link
  var_647_34_self, 0, 3, var_648_9_my_key, var_648_17_my_value, LOCAL(2),
  // filter_2 $new_link $deleted my_link
  var_filter_2, 1, LOCAL(2), 2, var_649_13_new_link, var_649_23_deleted,
  // filter_function(my_key my_value):
  var_filter_function, 2, var_648_9_my_key, var_648_17_my_value, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_56, lambda_59, TAIL_CALL,
  POS(648, 3),
  POS(649, 3),
  POS(651, 5),
  POS(650, 3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_collision_list_entry___filter_2 = {
  t_func_collision_list_entry___filter_2, NULL, 4, 1,
  {"648_27_my_link\000"}
};

static TAB_NUM t_lambda_56[] = {
  1, // locals
  0, // parameters
  // deleted == 0
  var_std__equal, 2, var_649_23_deleted, num_0, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_57, lambda_58, TAIL_CALL,
  POS(653, 9),
  POS(652, 7)
};

static FUNCTION_INFO i_lambda_56 = {
  t_lambda_56, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_57[] = {
  0, // locals
  0, // parameters
  //  self 0
  LET, 2, var_647_34_self, num_0, TAIL_CALL,
  POS(654, 11)
};

static FUNCTION_INFO i_lambda_57 = {
  t_lambda_57, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_58[] = {
  1, // locals
  0, // parameters
  // typed_tuple(collision_list_entry my_key my_value new_link) deleted
  var_typed_tuple, 4, var_collision_list_entry, var_648_9_my_key, var_648_17_my_value, var_649_13_new_link, 1, LOCAL(1),
  //  typed_tuple(collision_list_entry my_key my_value new_link) deleted
  LET, 2, LOCAL(1), var_649_23_deleted, TAIL_CALL,
  POS(655, 12),
  POS(655, 11)
};

static FUNCTION_INFO i_lambda_58 = {
  t_lambda_58, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_59[] = {
  1, // locals
  0, // parameters
  // deleted+1
  var_std__plus, 2, var_649_23_deleted, num_1, 1, LOCAL(1),
  //  new_link deleted+1
  LET, 2, var_649_13_new_link, LOCAL(1), TAIL_CALL,
  POS(656, 17),
  POS(656, 7)
};

static FUNCTION_INFO i_lambda_59 = {
  t_lambda_59, NULL, 2, 0,
  {}
};

static TAB_NUM t_func_hash_table_node___filter_1[] = {
  14, // locals
  1, // parameters
  var_658_29_self,
  // self(1)
  var_658_29_self, 1, num_1, 1, LOCAL(1),
  // filter_1 $node_1 $deleted_1 self(1)
  var_filter_1, 1, LOCAL(1), 2, var_659_13_node_1, LOCAL(7),
  // self(2)
  var_658_29_self, 1, num_2, 1, LOCAL(1),
  // filter_1 $node_2 $deleted_2 self(2)
  var_filter_1, 1, LOCAL(1), 2, var_660_13_node_2, LOCAL(8),
  // self(3)
  var_658_29_self, 1, num_3, 1, LOCAL(1),
  // filter_1 $node_3 $deleted_3 self(3)
  var_filter_1, 1, LOCAL(1), 2, var_661_13_node_3, LOCAL(9),
  // self(4)
  var_658_29_self, 1, num_4, 1, LOCAL(1),
  // filter_1 $node_4 $deleted_4 self(4)
  var_filter_1, 1, LOCAL(1), 2, var_662_13_node_4, LOCAL(10),
  // self(5)
  var_658_29_self, 1, num_5, 1, LOCAL(1),
  // filter_1 $node_5 $deleted_5 self(5)
  var_filter_1, 1, LOCAL(1), 2, var_663_13_node_5, LOCAL(11),
  // self(6)
  var_658_29_self, 1, num_6, 1, LOCAL(1),
  // filter_1 $node_6 $deleted_6 self(6)
  var_filter_1, 1, LOCAL(1), 2, var_664_13_node_6, LOCAL(12),
  // self(7)
  var_658_29_self, 1, num_7, 1, LOCAL(1),
  // filter_1 $node_7 $deleted_7 self(7)
  var_filter_1, 1, LOCAL(1), 2, var_665_13_node_7, LOCAL(13),
  // self(8)
  var_658_29_self, 1, num_8, 1, LOCAL(1),
  // filter_1 $node_8 $deleted_8 self(8)
  var_filter_1, 1, LOCAL(1), 2, var_666_13_node_8, LOCAL(14),
  // 
  var_std__plus, 2, LOCAL(7), LOCAL(8), 1, LOCAL(1),
  // 
  var_std__plus, 2, LOCAL(1), LOCAL(9), 1, LOCAL(2),
  // 
  var_std__plus, 2, LOCAL(2), LOCAL(10), 1, LOCAL(3),
  // 
  var_std__plus, 2, LOCAL(3), LOCAL(11), 1, LOCAL(4),
  // 
  var_std__plus, 2, LOCAL(4), LOCAL(12), 1, LOCAL(5),
  // 
  var_std__plus, 2, LOCAL(5), LOCAL(13), 1, LOCAL(6),
  // $deleted
  var_std__plus, 2, LOCAL(6), LOCAL(14), 1, var_667_4_deleted,
  // deleted == 0
  var_std__equal, 2, var_667_4_deleted, num_0, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_60, lambda_61, TAIL_CALL,
  POS(659, 31),
  POS(659, 3),
  POS(660, 31),
  POS(660, 3),
  POS(661, 31),
  POS(661, 3),
  POS(662, 31),
  POS(662, 3),
  POS(663, 31),
  POS(663, 3),
  POS(664, 31),
  POS(664, 3),
  POS(665, 31),
  POS(665, 3),
  POS(666, 31),
  POS(666, 3),
  POS(668, 6),
  POS(668, 6),
  POS(668, 6),
  POS(668, 6),
  POS(668, 6),
  POS(668, 6),
  POS(667, 3),
  POS(678, 5),
  POS(677, 3),
  LOCAL(10),
  LOCAL(8),
  LOCAL(14),
  LOCAL(11),
  LOCAL(7),
  LOCAL(13),
  LOCAL(12),
  LOCAL(9)
};

static FUNCTION_INFO i_func_hash_table_node___filter_1 = {
  t_func_hash_table_node___filter_1, NULL, 25, 8,
  {"662_21_deleted_4\000", "660_21_deleted_2\000", "666_21_deleted_8\000", "663_21_deleted_5\000", "659_21_deleted_1\000", "665_21_deleted_7\000", "664_21_deleted_6\000", "661_21_deleted_3\000"}
};

static TAB_NUM t_lambda_60[] = {
  0, // locals
  0, // parameters
  //  self 0
  LET, 2, var_658_29_self, num_0, TAIL_CALL,
  POS(679, 7)
};

static FUNCTION_INFO i_lambda_60 = {
  t_lambda_60, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_61[] = {
  2, // locals
  0, // parameters
  // is_an_empty_entry
  var_is_an_empty_entry, 1, var_659_13_node_1, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_62, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_69, lambda_70, TAIL_CALL,
  POS(683, 18),
  POS(682, 11),
  POS(681, 7)
};

static FUNCTION_INFO i_lambda_61 = {
  t_lambda_61, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_62[] = {
  2, // locals
  0, // parameters
  // is_an_empty_entry
  var_is_an_empty_entry, 1, var_660_13_node_2, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_63, 1, LOCAL(2),
  // node_2.is_an_empty_entry
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(684, 18),
  POS(682, 11),
  POS(684, 11)
};

static FUNCTION_INFO i_lambda_62 = {
  t_lambda_62, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_63[] = {
  2, // locals
  0, // parameters
  // is_an_empty_entry
  var_is_an_empty_entry, 1, var_661_13_node_3, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_64, 1, LOCAL(2),
  // node_3.is_an_empty_entry
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(685, 18),
  POS(682, 11),
  POS(685, 11)
};

static FUNCTION_INFO i_lambda_63 = {
  t_lambda_63, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_64[] = {
  2, // locals
  0, // parameters
  // is_an_empty_entry
  var_is_an_empty_entry, 1, var_662_13_node_4, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_65, 1, LOCAL(2),
  // node_4.is_an_empty_entry
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(686, 18),
  POS(682, 11),
  POS(686, 11)
};

static FUNCTION_INFO i_lambda_64 = {
  t_lambda_64, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_65[] = {
  2, // locals
  0, // parameters
  // is_an_empty_entry
  var_is_an_empty_entry, 1, var_663_13_node_5, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_66, 1, LOCAL(2),
  // node_5.is_an_empty_entry
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(687, 18),
  POS(682, 11),
  POS(687, 11)
};

static FUNCTION_INFO i_lambda_65 = {
  t_lambda_65, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_66[] = {
  2, // locals
  0, // parameters
  // is_an_empty_entry
  var_is_an_empty_entry, 1, var_664_13_node_6, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_67, 1, LOCAL(2),
  // node_6.is_an_empty_entry
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(688, 18),
  POS(682, 11),
  POS(688, 11)
};

static FUNCTION_INFO i_lambda_66 = {
  t_lambda_66, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_67[] = {
  2, // locals
  0, // parameters
  // is_an_empty_entry
  var_is_an_empty_entry, 1, var_665_13_node_7, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_68, 1, LOCAL(2),
  // node_7.is_an_empty_entry
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(689, 18),
  POS(682, 11),
  POS(689, 11)
};

static FUNCTION_INFO i_lambda_67 = {
  t_lambda_67, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_68[] = {
  1, // locals
  0, // parameters
  // is_an_empty_entry
  var_is_an_empty_entry, 1, var_666_13_node_8, 1, LOCAL(1),
  // node_8.is_an_empty_entry
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(690, 18),
  POS(690, 11)
};

static FUNCTION_INFO i_lambda_68 = {
  t_lambda_68, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_69[] = {
  0, // locals
  0, // parameters
  //  empty_hash_table_entry deleted
  LET, 2, var_empty_hash_table_entry, var_667_4_deleted, TAIL_CALL,
  POS(691, 11)
};

static FUNCTION_INFO i_lambda_69 = {
  t_lambda_69, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_70[] = {
  2, // locals
  0, // parameters
  // list
  var_list, 8, var_659_13_node_1, var_660_13_node_2, var_661_13_node_3, var_662_13_node_4, var_663_13_node_5, var_664_13_node_6, var_665_13_node_7, var_666_13_node_8, 1, LOCAL(1),
  // typed_tuple
  var_typed_tuple, 2, var_hash_table_node, LOCAL(1), 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), var_667_4_deleted, TAIL_CALL,
  POS(695, 13),
  POS(693, 11),
  POS(692, 11)
};

static FUNCTION_INFO i_lambda_70 = {
  t_lambda_70, NULL, 3, 0,
  {}
};

static TAB_NUM t_func_hash_table_node___filter_2[] = {
  14, // locals
  1, // parameters
  var_706_29_self,
  // self(1)
  var_706_29_self, 1, num_1, 1, LOCAL(1),
  // filter_2 $node_1 $deleted_1 self(1)
  var_filter_2, 1, LOCAL(1), 2, var_707_13_node_1, LOCAL(7),
  // self(2)
  var_706_29_self, 1, num_2, 1, LOCAL(1),
  // filter_2 $node_2 $deleted_2 self(2)
  var_filter_2, 1, LOCAL(1), 2, var_708_13_node_2, LOCAL(8),
  // self(3)
  var_706_29_self, 1, num_3, 1, LOCAL(1),
  // filter_2 $node_3 $deleted_3 self(3)
  var_filter_2, 1, LOCAL(1), 2, var_709_13_node_3, LOCAL(9),
  // self(4)
  var_706_29_self, 1, num_4, 1, LOCAL(1),
  // filter_2 $node_4 $deleted_4 self(4)
  var_filter_2, 1, LOCAL(1), 2, var_710_13_node_4, LOCAL(10),
  // self(5)
  var_706_29_self, 1, num_5, 1, LOCAL(1),
  // filter_2 $node_5 $deleted_5 self(5)
  var_filter_2, 1, LOCAL(1), 2, var_711_13_node_5, LOCAL(11),
  // self(6)
  var_706_29_self, 1, num_6, 1, LOCAL(1),
  // filter_2 $node_6 $deleted_6 self(6)
  var_filter_2, 1, LOCAL(1), 2, var_712_13_node_6, LOCAL(12),
  // self(7)
  var_706_29_self, 1, num_7, 1, LOCAL(1),
  // filter_2 $node_7 $deleted_7 self(7)
  var_filter_2, 1, LOCAL(1), 2, var_713_13_node_7, LOCAL(13),
  // self(8)
  var_706_29_self, 1, num_8, 1, LOCAL(1),
  // filter_2 $node_8 $deleted_8 self(8)
  var_filter_2, 1, LOCAL(1), 2, var_714_13_node_8, LOCAL(14),
  // 
  var_std__plus, 2, LOCAL(7), LOCAL(8), 1, LOCAL(1),
  // 
  var_std__plus, 2, LOCAL(1), LOCAL(9), 1, LOCAL(2),
  // 
  var_std__plus, 2, LOCAL(2), LOCAL(10), 1, LOCAL(3),
  // 
  var_std__plus, 2, LOCAL(3), LOCAL(11), 1, LOCAL(4),
  // 
  var_std__plus, 2, LOCAL(4), LOCAL(12), 1, LOCAL(5),
  // 
  var_std__plus, 2, LOCAL(5), LOCAL(13), 1, LOCAL(6),
  // $deleted
  var_std__plus, 2, LOCAL(6), LOCAL(14), 1, var_715_4_deleted,
  // deleted == 0
  var_std__equal, 2, var_715_4_deleted, num_0, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_71, lambda_72, TAIL_CALL,
  POS(707, 31),
  POS(707, 3),
  POS(708, 31),
  POS(708, 3),
  POS(709, 31),
  POS(709, 3),
  POS(710, 31),
  POS(710, 3),
  POS(711, 31),
  POS(711, 3),
  POS(712, 31),
  POS(712, 3),
  POS(713, 31),
  POS(713, 3),
  POS(714, 31),
  POS(714, 3),
  POS(716, 6),
  POS(716, 6),
  POS(716, 6),
  POS(716, 6),
  POS(716, 6),
  POS(716, 6),
  POS(715, 3),
  POS(726, 5),
  POS(725, 3),
  LOCAL(7),
  LOCAL(14),
  LOCAL(8),
  LOCAL(13),
  LOCAL(10),
  LOCAL(11),
  LOCAL(12),
  LOCAL(9)
};

static FUNCTION_INFO i_func_hash_table_node___filter_2 = {
  t_func_hash_table_node___filter_2, NULL, 25, 8,
  {"707_21_deleted_1\000", "714_21_deleted_8\000", "708_21_deleted_2\000", "713_21_deleted_7\000", "710_21_deleted_4\000", "711_21_deleted_5\000", "712_21_deleted_6\000", "709_21_deleted_3\000"}
};

static TAB_NUM t_lambda_71[] = {
  0, // locals
  0, // parameters
  //  self 0
  LET, 2, var_706_29_self, num_0, TAIL_CALL,
  POS(727, 7)
};

static FUNCTION_INFO i_lambda_71 = {
  t_lambda_71, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_72[] = {
  2, // locals
  0, // parameters
  // is_an_empty_entry
  var_is_an_empty_entry, 1, var_707_13_node_1, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_73, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_80, lambda_81, TAIL_CALL,
  POS(731, 18),
  POS(730, 11),
  POS(729, 7)
};

static FUNCTION_INFO i_lambda_72 = {
  t_lambda_72, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_73[] = {
  2, // locals
  0, // parameters
  // is_an_empty_entry
  var_is_an_empty_entry, 1, var_708_13_node_2, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_74, 1, LOCAL(2),
  // node_2.is_an_empty_entry
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(732, 18),
  POS(730, 11),
  POS(732, 11)
};

static FUNCTION_INFO i_lambda_73 = {
  t_lambda_73, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_74[] = {
  2, // locals
  0, // parameters
  // is_an_empty_entry
  var_is_an_empty_entry, 1, var_709_13_node_3, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_75, 1, LOCAL(2),
  // node_3.is_an_empty_entry
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(733, 18),
  POS(730, 11),
  POS(733, 11)
};

static FUNCTION_INFO i_lambda_74 = {
  t_lambda_74, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_75[] = {
  2, // locals
  0, // parameters
  // is_an_empty_entry
  var_is_an_empty_entry, 1, var_710_13_node_4, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_76, 1, LOCAL(2),
  // node_4.is_an_empty_entry
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(734, 18),
  POS(730, 11),
  POS(734, 11)
};

static FUNCTION_INFO i_lambda_75 = {
  t_lambda_75, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_76[] = {
  2, // locals
  0, // parameters
  // is_an_empty_entry
  var_is_an_empty_entry, 1, var_711_13_node_5, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_77, 1, LOCAL(2),
  // node_5.is_an_empty_entry
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(735, 18),
  POS(730, 11),
  POS(735, 11)
};

static FUNCTION_INFO i_lambda_76 = {
  t_lambda_76, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_77[] = {
  2, // locals
  0, // parameters
  // is_an_empty_entry
  var_is_an_empty_entry, 1, var_712_13_node_6, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_78, 1, LOCAL(2),
  // node_6.is_an_empty_entry
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(736, 18),
  POS(730, 11),
  POS(736, 11)
};

static FUNCTION_INFO i_lambda_77 = {
  t_lambda_77, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_78[] = {
  2, // locals
  0, // parameters
  // is_an_empty_entry
  var_is_an_empty_entry, 1, var_713_13_node_7, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_79, 1, LOCAL(2),
  // node_7.is_an_empty_entry
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(737, 18),
  POS(730, 11),
  POS(737, 11)
};

static FUNCTION_INFO i_lambda_78 = {
  t_lambda_78, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_79[] = {
  1, // locals
  0, // parameters
  // is_an_empty_entry
  var_is_an_empty_entry, 1, var_714_13_node_8, 1, LOCAL(1),
  // node_8.is_an_empty_entry
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(738, 18),
  POS(738, 11)
};

static FUNCTION_INFO i_lambda_79 = {
  t_lambda_79, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_80[] = {
  0, // locals
  0, // parameters
  //  empty_hash_table_entry deleted
  LET, 2, var_empty_hash_table_entry, var_715_4_deleted, TAIL_CALL,
  POS(739, 11)
};

static FUNCTION_INFO i_lambda_80 = {
  t_lambda_80, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_81[] = {
  2, // locals
  0, // parameters
  // list
  var_list, 8, var_707_13_node_1, var_708_13_node_2, var_709_13_node_3, var_710_13_node_4, var_711_13_node_5, var_712_13_node_6, var_713_13_node_7, var_714_13_node_8, 1, LOCAL(1),
  // typed_tuple
  var_typed_tuple, 2, var_hash_table_node, LOCAL(1), 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), var_715_4_deleted, TAIL_CALL,
  POS(743, 13),
  POS(741, 11),
  POS(740, 11)
};

static FUNCTION_INFO i_lambda_81 = {
  t_lambda_81, NULL, 3, 0,
  {}
};

static TAB_NUM t_func_std_types__hash_table___filter[] = {
  2, // locals
  2, // parameters
  var_767_5_self,
  var_768_5_function,
  // length_of(self) == 0
  var_length_of, 1, var_767_5_self, 1, LOCAL(1),
  // length_of(self) == 0
  var_std__equal, 2, LOCAL(1), num_0, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_82, lambda_83, TAIL_CALL,
  POS(771, 5),
  POS(771, 5),
  POS(770, 3)
};

static FUNCTION_INFO i_func_std_types__hash_table___filter = {
  t_func_std_types__hash_table___filter, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_82[] = {
  0, // locals
  0, // parameters
  //  empty_hash_table
  LET, 1, var_empty_hash_table, TAIL_CALL,
  POS(772, 7)
};

static FUNCTION_INFO i_lambda_82 = {
  t_lambda_82, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_83[] = {
  2, // locals
  0, // parameters
  // !filter_function function
  LET, 1, var_768_5_function, 1, var_filter_function,
  // parameter_count_of(function) == 2:
  var_parameter_count_of, 1, var_768_5_function, 1, LOCAL(1),
  // parameter_count_of(function) == 2:
  var_std__equal, 2, LOCAL(1), num_2, 1, LOCAL(2),
  // if $new_contents $deleted
  var_if, 3, LOCAL(2), lambda_84, lambda_85, 2, var_775_11_new_contents, var_775_25_deleted,
  // deleted == 0
  var_std__equal, 2, var_775_25_deleted, num_0, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_86, lambda_87, TAIL_CALL,
  POS(774, 7),
  POS(776, 9),
  POS(776, 9),
  POS(775, 7),
  POS(781, 9),
  POS(780, 7)
};

static FUNCTION_INFO i_lambda_83 = {
  t_lambda_83, NULL, 6, 0,
  {}
};

static TAB_NUM t_lambda_84[] = {
  1, // locals
  0, // parameters
  // contents_of(self)
  var_contents_of, 1, var_767_5_self, 1, LOCAL(1),
  // filter_2 contents_of(self)
  var_filter_2, 1, LOCAL(1), TAIL_CALL,
  POS(777, 20),
  POS(777, 11)
};

static FUNCTION_INFO i_lambda_84 = {
  t_lambda_84, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_85[] = {
  1, // locals
  0, // parameters
  // contents_of(self)
  var_contents_of, 1, var_767_5_self, 1, LOCAL(1),
  // filter_1 contents_of(self)
  var_filter_1, 1, LOCAL(1), TAIL_CALL,
  POS(779, 20),
  POS(779, 11)
};

static FUNCTION_INFO i_lambda_85 = {
  t_lambda_85, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_86[] = {
  0, // locals
  0, // parameters
  //  self
  LET, 1, var_767_5_self, TAIL_CALL,
  POS(782, 11)
};

static FUNCTION_INFO i_lambda_86 = {
  t_lambda_86, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_87[] = {
  3, // locals
  0, // parameters
  // length_of(self)-deleted
  var_length_of, 1, var_767_5_self, 1, LOCAL(1),
  // length_of(self)-deleted
  var_std__minus, 2, LOCAL(1), var_775_25_deleted, 1, LOCAL(2),
  // self
  LET, -2, var_767_5_self, var_length_of, LOCAL(2), var_contents_of, var_775_11_new_contents, LOCAL(3),
  // 
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(785, 24),
  POS(785, 24),
  POS(784, 11),
  POS(783, 11)
};

static FUNCTION_INFO i_lambda_87 = {
  t_lambda_87, NULL, 4, 0,
  {}
};

static TAB_NUM t_func_std__hash_table[] = {
  1, // locals
  -1, // parameters
  REST_PARAMETER, LOCAL(1), // 792_5_pairs
  // to_hash_table pairs
  var_to_hash_table, 1, LOCAL(1), TAIL_CALL,
  POS(794, 3),
  LOCAL(1)
};

static FUNCTION_INFO i_func_std__hash_table = {
  t_func_std__hash_table, NULL, 1, 1,
  {"792_5_pairs\000"}
};

static TAB_NUM t_func_std_types__list___to_hash_table[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 804_5_items
  // $table empty_hash_table
  LET, 1, var_empty_hash_table, 1, var_806_4_table,
  // for_each items
  var_for_each, 3, LOCAL(1), lambda_88, lambda_89, TAIL_CALL,
  POS(806, 3),
  POS(807, 3),
  LOCAL(1)
};

static FUNCTION_INFO i_func_std_types__list___to_hash_table = {
  t_func_std_types__list___to_hash_table, NULL, 2, 1,
  {"804_5_items\000"}
};

static TAB_NUM t_lambda_88[] = {
  3, // locals
  1, // parameters
  LOCAL(1), // 808_8_item
  // item $key $value
  LOCAL(1), 0, 2, LOCAL(2), LOCAL(3),
  // table(key) value
  var_806_4_table, 2, LOCAL(2), LOCAL(3), 1, var_806_4_table,
  // next
  var_next, 0, TAIL_CALL,
  POS(809, 7),
  POS(810, 8),
  POS(811, 7),
  LOCAL(1),
  LOCAL(3),
  LOCAL(2)
};

static FUNCTION_INFO i_lambda_88 = {
  t_lambda_88, NULL, 3, 3,
  {"808_8_item\000", "809_18_value\000", "809_13_key\000"}
};

static TAB_NUM t_lambda_89[] = {
  0, // locals
  0, // parameters
  //  table
  LET, 1, var_806_4_table, TAIL_CALL,
  POS(812, 7)
};

static FUNCTION_INFO i_lambda_89 = {
  t_lambda_89, NULL, 1, 0,
  {}
};

static TAB_NUM t_module_entry[] = {
  0, // locals
  0, // parameters
  // register_type &deserializers std_types::hash_table
  var_register_type, 2, var_deserializers, var_std_types__hash_table, 1, var_deserializers,
  LET, 1, 0, TAIL_CALL,
  POS(819, 1)
};

static FUNCTION_INFO i_module_entry = {
  t_module_entry, NULL, 1, 0,
  {}
};

static int tuple_77_1_arguments[] = {
  -var_undefined, -var_undefined, -var_undefined
};

static int list_83_1_arguments[] = {
  -var_empty_hash_table_entry, -var_empty_hash_table_entry, -var_empty_hash_table_entry, -var_empty_hash_table_entry, -var_empty_hash_table_entry, -var_empty_hash_table_entry, -var_empty_hash_table_entry, -var_empty_hash_table_entry
};

static FUNKY_CONSTANT constants_table[] = {
  {FLT_POSITIVE_INT64, 0, {.value = 0}},
  {FLT_TUPLE, 3, {.arguments = tuple_77_1_arguments}},
  {FLT_LIST, 8, {.arguments = list_83_1_arguments}},
  {FLT_UNIQUE, 0, {.str_8 = "NONE"}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__table}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_basic_collections__update_hash_table}},
  {FLT_POSITIVE_INT64, 0, {.value = 0xc0000000}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_1}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_2}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_value_is_defined}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_3}},
  {FLT_POSITIVE_INT64, 0, {.value = 1}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_4}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_5}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_6}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_7}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_empty_hash_table_entry___retrieve}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_hash_table_leaf___retrieve}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_8}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_9}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_empty_collision_list_entry___retrieve}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_collision_list_entry___retrieve}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_10}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_11}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_hash_table_node___retrieve}},
  {FLT_POSITIVE_INT64, 0, {.value = 7}},
  {FLT_POSITIVE_INT64, 0, {.value = 3}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_empty_hash_table_entry___insert}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_12}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_13}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_hash_table_leaf___insert}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_14}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_15}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_empty_collision_list_entry___insert}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_collision_list_entry___insert}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_hash_table_node___insert}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_empty_hash_table_entry___delete}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_hash_table_leaf___delete}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_16}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_17}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_empty_collision_list_entry___delete}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_collision_list_entry___delete}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_18}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_19}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_hash_table_node___delete}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_20}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_21}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_22}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_23}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_empty_hash_table_entry___for_each_1}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_empty_hash_table_entry___for_each_2}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_collision_list_entry___for_each_1}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_24}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_next}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_basic_loopsself_is_an_empty_entry}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_25}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_collision_list_entry___for_each_2}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_26}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_2_next}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_2_basic_loopsself_is_an_empty_entry}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_27}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_hash_table_leaf___for_each_1}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_hash_table_leaf___for_each_2}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_hash_table_node___for_each_1}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_28}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_3_next}},
  {FLT_POSITIVE_INT64, 0, {.value = 8}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_29}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_30}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_hash_table_node___for_each_2}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_31}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_4_next}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_32}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_33}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__hash_table___for_each}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_34}},
  {FLT_POSITIVE_INT64, 0, {.value = 2}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_35}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_36}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_empty_hash_table_entry___map_1}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_empty_hash_table_entry___map_2}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_hash_table_leaf___map_1}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_hash_table_leaf___map_2}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_empty_collision_list_entry___map_1}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_empty_collision_list_entry___map_2}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_collision_list_entry___map_1}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_collision_list_entry___map_2}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_hash_table_node___map_1}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_hash_table_node___map_2}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__hash_table___map}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_37}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_38}},
  {FLT_UNIQUE, 0, {.str_8 = "UNIT"}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_empty_hash_table_entry___reduce_1}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_hash_table_leaf___reduce_1}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_empty_collision_list_entry___reduce_1}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_collision_list_entry___reduce_1}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_hash_table_node___reduce_1}},
  {FLT_POSITIVE_INT64, 0, {.value = 4}},
  {FLT_POSITIVE_INT64, 0, {.value = 5}},
  {FLT_POSITIVE_INT64, 0, {.value = 6}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_my_reduce}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_39}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_40}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_41}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_42}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__hash_table___reduce}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_43}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_44}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_empty_hash_table_entry___map_reduce_1}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_empty_hash_table_entry___map_reduce_2}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_hash_table_leaf___map_reduce_1}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_hash_table_leaf___map_reduce_2}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_empty_collision_list_entry___map_reduce_1}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_empty_collision_list_entry___map_reduce_2}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_collision_list_entry___map_reduce_1}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_collision_list_entry___map_reduce_2}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_hash_table_node___map_reduce_1}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_hash_table_node___map_reduce_2}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__hash_table___map_reduce}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_45}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_46}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_47}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_48}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_empty_hash_table_entry___filter_1}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_empty_hash_table_entry___filter_2}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_hash_table_leaf___filter_1}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_49}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_50}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_hash_table_leaf___filter_2}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_51}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_52}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_empty_collision_list_entry___filter_1}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_empty_collision_list_entry___filter_2}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_collision_list_entry___filter_1}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_filter_functionmy_value}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_53}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_54}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_55}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_collision_list_entry___filter_2}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_56}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_57}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_58}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_59}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_hash_table_node___filter_1}},
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
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_70}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_hash_table_node___filter_2}},
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
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__hash_table___filter}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_82}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_83}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_84}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_85}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_86}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_87}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std__hash_table}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__list___to_hash_table}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_88}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_89}},
  {FLT_STRING_8, 10, {.str_8 = "hash_table"}},
  {FLT_FUNCTION, 0, {.func_info = &i_module_entry}}
};

static ATTRIBUTE_DEFINITION std_types__object__attributes[] = {
  {-var_is_a_hash_table, -var_false},
  {-var_is_an_empty_entry, -var_false}
};

static ATTRIBUTE_DEFINITION std_types__hash_table__attributes[] = {
  {-var_is_a_hash_table, -var_true},
  {-var_contents_of, -var_empty_hash_table_entry},
  {-var_length_of, -num_0},
  {var_for_each, -func_std_types__hash_table___for_each},
  {var_map, -func_std_types__hash_table___map},
  {var_reduce, -func_std_types__hash_table___reduce},
  {var_map_reduce, -func_std_types__hash_table___map_reduce},
  {var_filter, -func_std_types__hash_table___filter},
  {-var_serialization_tag_of, -str_hash_table},
  {-var_empty_collection_of, -var_empty_hash_table}
};

static ATTRIBUTE_DEFINITION empty_hash_table_entry__attributes[] = {
  {-var_is_an_empty_entry, -var_true},
  {var_retrieve, -func_empty_hash_table_entry___retrieve},
  {var_insert, -func_empty_hash_table_entry___insert},
  {var_delete, -func_empty_hash_table_entry___delete},
  {var_for_each_1, -func_empty_hash_table_entry___for_each_1},
  {var_for_each_2, -func_empty_hash_table_entry___for_each_2},
  {var_map_1, -func_empty_hash_table_entry___map_1},
  {var_map_2, -func_empty_hash_table_entry___map_2},
  {var_reduce_1, -func_empty_hash_table_entry___reduce_1},
  {var_map_reduce_1, -func_empty_hash_table_entry___map_reduce_1},
  {var_map_reduce_2, -func_empty_hash_table_entry___map_reduce_2},
  {var_filter_1, -func_empty_hash_table_entry___filter_1},
  {var_filter_2, -func_empty_hash_table_entry___filter_2}
};

static ATTRIBUTE_DEFINITION empty_collision_list_entry__attributes[] = {
  {-var_is_an_empty_entry, -var_true},
  {var_retrieve, -func_empty_collision_list_entry___retrieve},
  {var_insert, -func_empty_collision_list_entry___insert},
  {var_delete, -func_empty_collision_list_entry___delete},
  {var_map_1, -func_empty_collision_list_entry___map_1},
  {var_map_2, -func_empty_collision_list_entry___map_2},
  {var_reduce_1, -func_empty_collision_list_entry___reduce_1},
  {var_map_reduce_1, -func_empty_collision_list_entry___map_reduce_1},
  {var_map_reduce_2, -func_empty_collision_list_entry___map_reduce_2},
  {var_filter_1, -func_empty_collision_list_entry___filter_1},
  {var_filter_2, -func_empty_collision_list_entry___filter_2}
};

static ATTRIBUTE_DEFINITION std_types__table__attributes[] = {
  {TYPE_FUNCTION, -func_std_types__table}
};

static ATTRIBUTE_DEFINITION hash_table_leaf__attributes[] = {
  {var_retrieve, -func_hash_table_leaf___retrieve},
  {var_insert, -func_hash_table_leaf___insert},
  {var_delete, -func_hash_table_leaf___delete},
  {var_for_each_1, -func_hash_table_leaf___for_each_1},
  {var_for_each_2, -func_hash_table_leaf___for_each_2},
  {var_map_1, -func_hash_table_leaf___map_1},
  {var_map_2, -func_hash_table_leaf___map_2},
  {var_reduce_1, -func_hash_table_leaf___reduce_1},
  {var_map_reduce_1, -func_hash_table_leaf___map_reduce_1},
  {var_map_reduce_2, -func_hash_table_leaf___map_reduce_2},
  {var_filter_1, -func_hash_table_leaf___filter_1},
  {var_filter_2, -func_hash_table_leaf___filter_2}
};

static ATTRIBUTE_DEFINITION collision_list_entry__attributes[] = {
  {var_retrieve, -func_collision_list_entry___retrieve},
  {var_insert, -func_collision_list_entry___insert},
  {var_delete, -func_collision_list_entry___delete},
  {var_for_each_1, -func_collision_list_entry___for_each_1},
  {var_for_each_2, -func_collision_list_entry___for_each_2},
  {var_map_1, -func_collision_list_entry___map_1},
  {var_map_2, -func_collision_list_entry___map_2},
  {var_reduce_1, -func_collision_list_entry___reduce_1},
  {var_map_reduce_1, -func_collision_list_entry___map_reduce_1},
  {var_map_reduce_2, -func_collision_list_entry___map_reduce_2},
  {var_filter_1, -func_collision_list_entry___filter_1},
  {var_filter_2, -func_collision_list_entry___filter_2}
};

static ATTRIBUTE_DEFINITION hash_table_node__attributes[] = {
  {var_retrieve, -func_hash_table_node___retrieve},
  {var_insert, -func_hash_table_node___insert},
  {var_delete, -func_hash_table_node___delete},
  {var_for_each_1, -func_hash_table_node___for_each_1},
  {var_for_each_2, -func_hash_table_node___for_each_2},
  {var_map_1, -func_hash_table_node___map_1},
  {var_map_2, -func_hash_table_node___map_2},
  {var_reduce_1, -func_hash_table_node___reduce_1},
  {var_map_reduce_1, -func_hash_table_node___map_reduce_1},
  {var_map_reduce_2, -func_hash_table_node___map_reduce_2},
  {var_filter_1, -func_hash_table_node___filter_1},
  {var_filter_2, -func_hash_table_node___filter_2}
};

static ATTRIBUTE_DEFINITION std_types__list__attributes[] = {
  {var_to_hash_table, -func_std_types__list___to_hash_table}
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
    "is_a_hash_table\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN, 0, 2,
    "object\000std_types", std_types__object__attributes,
    {.position = POS(36, 1)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "is_a_hash_table\000", NULL,
    {.position = POS(36, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "false\000", NULL,
    {.position = POS(36, 36)}
  },
  {
    FOT_DERIVED, 0, 10,
    "hash_table\000std_types", std_types__hash_table__attributes,
    {"table\000std_types"}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "true\000", NULL,
    {.position = POS(37, 40)}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "is_an_empty_entry\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_DERIVED, 0, 13,
    "empty_hash_table_entry\000", empty_hash_table_entry__attributes,
    {"object\000std_types"}
  },
  {
    FOT_DERIVED, 0, 11,
    "empty_collision_list_entry\000", empty_collision_list_entry__attributes,
    {"object\000std_types"}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "to_hash_table\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "table\000std_types", std_types__table__attributes,
    {.position = POS(46, 24)}
  },
  {
    FOT_DERIVED, 0, 0,
    "empty_hash_table\000std", NULL,
    {"hash_table\000std_types"}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "length_of\000", NULL,
    {.position = POS(71, 24)}
  },
  {
    FOT_INITIALIZED, 0, 12,
    "hash_table_leaf\000", hash_table_leaf__attributes,
    {.const_idx = -tuple_77_1}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "undefined\000", NULL,
    {.position = POS(77, 24)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "tuple\000", NULL,
    {.position = POS(77, 18)}
  },
  {
    FOT_INITIALIZED, 0, 12,
    "collision_list_entry\000", collision_list_entry__attributes,
    {.const_idx = -tuple_77_1}
  },
  {
    FOT_INITIALIZED, 0, 12,
    "hash_table_node\000", hash_table_node__attributes,
    {.const_idx = -list_83_1}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "list\000", NULL,
    {.position = POS(84, 3)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "update_hash_table\000basic_collections", NULL,
    {.const_idx = -func_basic_collections__update_hash_table}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "107_5_myself\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "108_5_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "109_5_value\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "hash\000", NULL,
    {.position = POS(111, 15)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "111_4_hash_index\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "bit_or\000std", NULL,
    {.position = POS(111, 15)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "112_4_contents\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "equal\000std", NULL,
    {.position = POS(114, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_defined\000", NULL,
    {.position = POS(118, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000std", NULL,
    {.position = POS(125, 28)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if\000", NULL,
    {.position = POS(120, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "minus\000std", NULL,
    {.position = POS(134, 28)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "142_33_my_value\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "150_46_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "151_17_my_value\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "151_27_my_link\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "bit_and\000std", NULL,
    {.position = POS(158, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "shift_right\000std", NULL,
    {.position = POS(159, 22)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "163_40_hash_index\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "163_51_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "163_55_value\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "typed_tuple\000", NULL,
    {.position = POS(166, 8)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "169_27_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "169_32_hash_index\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "169_43_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "169_47_value\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "170_9_my_hash_index\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "170_24_my_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "170_32_my_value\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not\000", NULL,
    {.position = POS(184, 55)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "204_27_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "213_44_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "214_9_my_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "214_17_my_value\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "214_27_my_link\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "223_27_self\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "all_of\000", NULL,
    {.position = POS(230, 9)}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "for_each_1\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "for_each_2\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "next\000", NULL,
    {.position = POS(241, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "break\000", NULL,
    {.position = POS(250, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "self\000basic_loops", NULL,
    {.position = POS(251, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "break_function\000basic_types", NULL,
    {.position = POS(255, 14)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "saved_context_of\000basic_loops", NULL,
    {.position = POS(256, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "new\000", NULL,
    {.position = POS(255, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "body\000basic_loops", NULL,
    {.position = POS(273, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "from\000basic_loops", NULL,
    {.position = POS(321, 7)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "336_6_idx\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "less\000std", NULL,
    {.position = POS(338, 14)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not\000std", NULL,
    {.position = POS(338, 14)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "369_6_idx\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "for_each\000", NULL,
    {.position = POS(382, 24)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "384_5_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "386_5_finally\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "finally\000basic_loops", NULL,
    {.position = POS(393, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "parameter_count_of\000", NULL,
    {.position = POS(409, 5)}
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
    {.position = POS(444, 23)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "457_5_self\000", NULL
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "reduce_1\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_DERIVED, 0, 0,
    "reduction_function\000", NULL,
    {"undefined\000"}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "500_14_left\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "500_19_right\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "reduce\000", NULL,
    {.position = POS(510, 24)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "522_5_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "523_5_function\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "524_5_unit\000", NULL
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "map_reduce_1\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "map_reduce_2\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "map_reduce\000", NULL,
    {.position = POS(582, 24)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "592_5_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "593_5_map_function\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "594_5_reduce_function\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "append\000", NULL,
    {.position = POS(594, 23)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "595_5_unit\000", NULL
  },
  {
    FOT_DERIVED, 0, 0,
    "filter_function\000", NULL,
    {"undefined\000"}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "filter_1\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "filter_2\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "619_29_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "626_29_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "636_34_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "637_9_my_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "637_17_my_value\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "638_13_new_link\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "638_23_deleted\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "647_34_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "648_9_my_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "648_17_my_value\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "649_13_new_link\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "649_23_deleted\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "658_29_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "659_13_node_1\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "660_13_node_2\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "661_13_node_3\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "662_13_node_4\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "663_13_node_5\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "664_13_node_6\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "665_13_node_7\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "666_13_node_8\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "667_4_deleted\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "and\000std", NULL,
    {.position = POS(682, 11)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "706_29_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "707_13_node_1\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "708_13_node_2\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "709_13_node_3\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "710_13_node_4\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "711_13_node_5\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "712_13_node_6\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "713_13_node_7\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "714_13_node_8\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "715_4_deleted\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "filter\000", NULL,
    {.position = POS(754, 24)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "767_5_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "768_5_function\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_hash_table\000", NULL,
    {.position = POS(772, 8)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "775_11_new_contents\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "775_25_deleted\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "hash_table\000std", NULL,
    {.const_idx = -func_std__hash_table}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "to_hash_table\000", NULL,
    {.position = POS(794, 3)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "list\000std_types", std_types__list__attributes,
    {.position = POS(796, 1)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "806_4_table\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "serialization_tag_of\000", NULL,
    {.position = POS(816, 24)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "empty_collection_of\000", NULL,
    {.position = POS(817, 24)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "deserializers\000", NULL,
    {.position = POS(819, 16)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "register_type\000", NULL,
    {.position = POS(819, 1)}
  }
};

static FUNKY_NAMESPACE used_namespaces[] = {
  {"std", 1, 0}
};

FUNKY_MODULE module__basic__types__collections__tables__hash_table = {
  "_basic__types__collections__tables__hash_table", // module name
  "basic/types/collections/tables/hash_table.fky", // module filename
  .major_version = 0,
  .minor_version = 0,
  .feature_flags = FEAT_POSITIONS|FEAT_FUNCTION_INFO|FEAT_INITIALIZER,
  .marker = 0,
  0, // number of required modules
  0, // number of defined namespaces
  1, // number of used namespaces
  181, // number of constants
  152, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  constants_table,
  variables_table,
};
