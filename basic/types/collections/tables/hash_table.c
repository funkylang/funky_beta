#include <stddef.h>
#include <stdint.h>

#include "runtime/common.h"
#include "runtime/builtins.h"
#include "runtime/fko.h"
#include "runtime/memory.h"

enum {
  num_0 = -1,
  tuple_75_0 = -2,
  list_81_0 = -3,
  uni_NONE = -4,
  func_std_types__hash_table = -5,
  num_0xc0000000 = -6,
  lambda_1 = -7,
  lambda_2 = -8,
  lambda_value_is_defined = -9,
  lambda_3 = -10,
  num_1 = -11,
  lambda_4 = -12,
  lambda_5 = -13,
  lambda_6 = -14,
  lambda_7 = -15,
  func_empty_hash_table_entry___retrieve = -16,
  func_hash_table_leaf___retrieve = -17,
  lambda_8 = -18,
  lambda_9 = -19,
  func_empty_collision_list_entry___retrieve = -20,
  func_collision_list_entry___retrieve = -21,
  lambda_10 = -22,
  lambda_11 = -23,
  func_hash_table_node___retrieve = -24,
  num_7 = -25,
  num_3 = -26,
  func_empty_hash_table_entry___insert = -27,
  lambda_12 = -28,
  lambda_13 = -29,
  func_hash_table_leaf___insert = -30,
  lambda_14 = -31,
  lambda_15 = -32,
  func_empty_collision_list_entry___insert = -33,
  func_collision_list_entry___insert = -34,
  func_hash_table_node___insert = -35,
  func_empty_hash_table_entry___delete = -36,
  func_hash_table_leaf___delete = -37,
  lambda_16 = -38,
  lambda_17 = -39,
  func_empty_collision_list_entry___delete = -40,
  func_collision_list_entry___delete = -41,
  lambda_18 = -42,
  lambda_19 = -43,
  func_hash_table_node___delete = -44,
  lambda_20 = -45,
  lambda_21 = -46,
  lambda_22 = -47,
  lambda_23 = -48,
  func_empty_hash_table_entry___for_each_1 = -49,
  func_empty_hash_table_entry___for_each_2 = -50,
  func_collision_list_entry___for_each_1 = -51,
  lambda_break = -52,
  lambda_next = -53,
  lambda_basic_loopsself_is_an_empty_entry = -54,
  lambda_24 = -55,
  func_collision_list_entry___for_each_2 = -56,
  lambda_2_break = -57,
  lambda_2_next = -58,
  lambda_2_basic_loopsself_is_an_empty_entry = -59,
  lambda_25 = -60,
  func_hash_table_leaf___for_each_1 = -61,
  func_hash_table_leaf___for_each_2 = -62,
  func_hash_table_node___for_each_1 = -63,
  lambda_3_break = -64,
  lambda_3_next = -65,
  num_8 = -66,
  lambda_26 = -67,
  lambda_27 = -68,
  func_hash_table_node___for_each_2 = -69,
  lambda_4_break = -70,
  lambda_4_next = -71,
  lambda_28 = -72,
  lambda_29 = -73,
  func_std_types__hash_table___for_each = -74,
  lambda_5_break = -75,
  num_2 = -76,
  lambda_30 = -77,
  lambda_31 = -78,
  func_empty_hash_table_entry___map_1 = -79,
  func_empty_hash_table_entry___map_2 = -80,
  func_hash_table_leaf___map_1 = -81,
  func_hash_table_leaf___map_2 = -82,
  func_empty_collision_list_entry___map_1 = -83,
  func_empty_collision_list_entry___map_2 = -84,
  func_collision_list_entry___map_1 = -85,
  func_collision_list_entry___map_2 = -86,
  func_hash_table_node___map_1 = -87,
  func_hash_table_node___map_2 = -88,
  func_std_types__hash_table___map = -89,
  lambda_32 = -90,
  lambda_33 = -91,
  uni_UNIT = -92,
  func_empty_hash_table_entry___reduce_1 = -93,
  func_hash_table_leaf___reduce_1 = -94,
  func_empty_collision_list_entry___reduce_1 = -95,
  func_collision_list_entry___reduce_1 = -96,
  func_hash_table_node___reduce_1 = -97,
  num_4 = -98,
  num_5 = -99,
  num_6 = -100,
  func_my_reduce = -101,
  lambda_34 = -102,
  lambda_35 = -103,
  lambda_36 = -104,
  lambda_37 = -105,
  func_std_types__hash_table___reduce = -106,
  lambda_38 = -107,
  lambda_39 = -108,
  func_empty_hash_table_entry___map_reduce_1 = -109,
  func_empty_hash_table_entry___map_reduce_2 = -110,
  func_hash_table_leaf___map_reduce_1 = -111,
  func_hash_table_leaf___map_reduce_2 = -112,
  func_empty_collision_list_entry___map_reduce_1 = -113,
  func_empty_collision_list_entry___map_reduce_2 = -114,
  func_collision_list_entry___map_reduce_1 = -115,
  func_collision_list_entry___map_reduce_2 = -116,
  func_hash_table_node___map_reduce_1 = -117,
  func_hash_table_node___map_reduce_2 = -118,
  func_std_types__hash_table___map_reduce = -119,
  lambda_40 = -120,
  lambda_41 = -121,
  lambda_42 = -122,
  lambda_43 = -123,
  func_empty_hash_table_entry___filter_1 = -124,
  func_empty_hash_table_entry___filter_2 = -125,
  func_hash_table_leaf___filter_1 = -126,
  lambda_44 = -127,
  lambda_45 = -128,
  func_hash_table_leaf___filter_2 = -129,
  lambda_46 = -130,
  lambda_47 = -131,
  func_empty_collision_list_entry___filter_1 = -132,
  func_empty_collision_list_entry___filter_2 = -133,
  func_collision_list_entry___filter_1 = -134,
  lambda_filter_functionmy_value = -135,
  lambda_48 = -136,
  lambda_49 = -137,
  lambda_50 = -138,
  func_collision_list_entry___filter_2 = -139,
  lambda_51 = -140,
  lambda_52 = -141,
  lambda_53 = -142,
  lambda_54 = -143,
  func_hash_table_node___filter_1 = -144,
  lambda_55 = -145,
  lambda_56 = -146,
  lambda_57 = -147,
  lambda_58 = -148,
  lambda_59 = -149,
  lambda_60 = -150,
  lambda_61 = -151,
  lambda_62 = -152,
  lambda_63 = -153,
  lambda_64 = -154,
  lambda_65 = -155,
  func_hash_table_node___filter_2 = -156,
  lambda_66 = -157,
  lambda_67 = -158,
  lambda_68 = -159,
  lambda_69 = -160,
  lambda_70 = -161,
  lambda_71 = -162,
  lambda_72 = -163,
  lambda_73 = -164,
  lambda_74 = -165,
  lambda_75 = -166,
  lambda_76 = -167,
  func_std_types__hash_table___filter = -168,
  lambda_77 = -169,
  lambda_78 = -170,
  lambda_79 = -171,
  lambda_80 = -172,
  lambda_81 = -173,
  lambda_82 = -174,
  func_std__hash_table = -175,
  func_std_types__list___to_hash_table = -176,
  lambda_83 = -177,
  lambda_84 = -178,
  str_hash_table = -179
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
  var_97_0_myself, // dynamic
  var_98_0_key, // dynamic
  var_99_0_value, // dynamic
  var_hash, // extern
  var_101_1_hash_index, // dynamic
  var_std__bit_or, // extern
  var_102_1_contents, // dynamic
  var_std__equal, // extern
  var_is_defined, // extern
  var_std__plus, // extern
  var_if, // extern
  var_std__minus, // extern
  var_132_30_my_value, // dynamic
  var_140_45_key, // dynamic
  var_141_14_my_value, // dynamic
  var_141_24_my_link, // dynamic
  var_std__bit_and, // extern
  var_std__shift_right, // extern
  var_153_39_hash_index, // dynamic
  var_153_50_key, // dynamic
  var_153_54_value, // dynamic
  var_new, // extern
  var_159_26_self, // dynamic
  var_159_31_hash_index, // dynamic
  var_159_42_key, // dynamic
  var_159_46_value, // dynamic
  var_160_6_my_hash_index, // dynamic
  var_160_21_my_key, // dynamic
  var_160_29_my_value, // dynamic
  var_not, // extern
  var_194_26_self, // dynamic
  var_203_43_key, // dynamic
  var_204_6_my_key, // dynamic
  var_204_14_my_value, // dynamic
  var_204_24_my_link, // dynamic
  var_213_26_self, // dynamic
  var_all_of, // extern
  var_for_each_1, // attribute
  var_for_each_2, // attribute
  var_next, // extern
  var_break, // extern
  var_basic_loops__self, // extern
  var_basic_loops__saved_context_of, // extern polymorphic
  var_basic_loops__body, // extern
  var_basic_loops__from, // extern
  var_326_1_idx, // dynamic
  var_std__less, // extern
  var_std__not, // extern
  var_359_1_idx, // dynamic
  var_for_each, // extern polymorphic
  var_374_0_self, // dynamic
  var_376_0_finally, // dynamic
  var_basic_loops__finally, // extern
  var_parameter_count_of, // extern
  var_map_1, // attribute
  var_map_2, // attribute
  var_mapping_function, // derived
  var_map, // extern polymorphic
  var_447_0_self, // dynamic
  var_reduce_1, // attribute
  var_reduction_function, // derived
  var_490_13_left, // dynamic
  var_490_18_right, // dynamic
  var_reduce, // extern polymorphic
  var_512_0_self, // dynamic
  var_513_0_function, // dynamic
  var_514_0_unit, // dynamic
  var_map_reduce_1, // attribute
  var_map_reduce_2, // attribute
  var_map_reduce, // extern polymorphic
  var_582_0_self, // dynamic
  var_583_0_map_function, // dynamic
  var_584_0_reduce_function, // dynamic
  var_append, // extern
  var_585_0_unit, // dynamic
  var_filter_function, // derived
  var_filter_1, // attribute
  var_filter_2, // attribute
  var_609_28_self, // dynamic
  var_616_28_self, // dynamic
  var_626_33_self, // dynamic
  var_627_6_my_key, // dynamic
  var_627_14_my_value, // dynamic
  var_628_10_new_link, // dynamic
  var_628_20_deleted, // dynamic
  var_637_33_self, // dynamic
  var_638_6_my_key, // dynamic
  var_638_14_my_value, // dynamic
  var_639_10_new_link, // dynamic
  var_639_20_deleted, // dynamic
  var_648_28_self, // dynamic
  var_649_10_node_1, // dynamic
  var_650_10_node_2, // dynamic
  var_651_10_node_3, // dynamic
  var_652_10_node_4, // dynamic
  var_653_10_node_5, // dynamic
  var_654_10_node_6, // dynamic
  var_655_10_node_7, // dynamic
  var_656_10_node_8, // dynamic
  var_657_1_deleted, // dynamic
  var_std__and, // extern
  var_696_28_self, // dynamic
  var_697_10_node_1, // dynamic
  var_698_10_node_2, // dynamic
  var_699_10_node_3, // dynamic
  var_700_10_node_4, // dynamic
  var_701_10_node_5, // dynamic
  var_702_10_node_6, // dynamic
  var_703_10_node_7, // dynamic
  var_704_10_node_8, // dynamic
  var_705_1_deleted, // dynamic
  var_filter, // extern polymorphic
  var_757_0_self, // dynamic
  var_758_0_function, // dynamic
  var_empty_hash_table, // extern
  var_765_4_new_contents, // dynamic
  var_765_18_deleted, // dynamic
  var_std__hash_table, // initialized
  var_to_hash_table, // extern polymorphic
  var_std_types__list, // extern
  var_796_1_table, // dynamic
  var_serialization_tag_of, // extern polymorphic
  var_empty_collection_of, // extern polymorphic
  var__END
};


static TAB_NUM t_func_std_types__hash_table[] = {
  1, // locals
  -3, // parameters
  MYSELF_PARAMETER, var_97_0_myself,
  MANDATORY_PARAMETER, var_98_0_key,
  uni_NONE, var_99_0_value,
  // hash(key) | 0xc000'0000 # add sentinel hash index (3)
  var_hash, 1, var_98_0_key, 1, LOCAL(1),
  // $hash_index hash(key) | 0xc000'0000 # add sentinel hash index (3)
  var_std__bit_or, 2, LOCAL(1), num_0xc0000000, 1, var_101_1_hash_index,
  // $contents contents_of(myself)
  var_contents_of, 1, var_97_0_myself, 1, var_102_1_contents,
  // NONE == value
  var_std__equal, 2, uni_NONE, var_99_0_value, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1, lambda_2, TAIL_CALL,
  POS(101, 15),
  POS(101, 3),
  POS(102, 3),
  POS(104, 5),
  POS(103, 3)
};

static TAB_NUM t_lambda_1[] = {
  1, // locals
  0, // parameters
  // retrieve(contents hash_index key)
  var_retrieve, 3, var_102_1_contents, var_101_1_hash_index, var_98_0_key, 1, LOCAL(1),
  //  retrieve(contents hash_index key)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(105, 8),
  POS(105, 7)
};

static TAB_NUM t_lambda_2[] = {
  1, // locals
  0, // parameters
  // is_defined:
  var_is_defined, 1, var_99_0_value, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_value_is_defined, lambda_5, TAIL_CALL,
  POS(108, 15),
  POS(107, 7)
};

static TAB_NUM t_lambda_value_is_defined[] = {
  1, // locals
  0, // parameters
  // insert &contents $success hash_index key value
  var_insert, 4, var_102_1_contents, var_101_1_hash_index, var_98_0_key, var_99_0_value, 2, var_102_1_contents, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_3, lambda_4, TAIL_CALL,
  POS(109, 11),
  POS(110, 11)
};

static TAB_NUM t_lambda_3[] = {
  3, // locals
  0, // parameters
  // length_of(myself)+1
  var_length_of, 1, var_97_0_myself, 1, LOCAL(1),
  // length_of(myself)+1
  var_std__plus, 2, LOCAL(1), num_1, 1, LOCAL(2),
  // myself
  LET, -2, var_97_0_myself, var_contents_of, var_102_1_contents, var_length_of, LOCAL(2), LOCAL(3),
  // 
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(115, 28),
  POS(115, 28),
  POS(113, 15),
  POS(112, 15)
};

static TAB_NUM t_lambda_4[] = {
  1, // locals
  0, // parameters
  // .contents_of contents)
  LET, -1, var_97_0_myself, var_contents_of, var_102_1_contents, LOCAL(1),
  //  myself(.contents_of contents)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(116, 23),
  POS(116, 15)
};

static TAB_NUM t_lambda_5[] = {
  1, // locals
  0, // parameters
  // delete &contents $success hash_index key
  var_delete, 3, var_102_1_contents, var_101_1_hash_index, var_98_0_key, 2, var_102_1_contents, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_6, lambda_7, TAIL_CALL,
  POS(118, 11),
  POS(119, 11)
};

static TAB_NUM t_lambda_6[] = {
  3, // locals
  0, // parameters
  // length_of(myself)-1
  var_length_of, 1, var_97_0_myself, 1, LOCAL(1),
  // length_of(myself)-1
  var_std__minus, 2, LOCAL(1), num_1, 1, LOCAL(2),
  // myself
  LET, -2, var_97_0_myself, var_contents_of, var_102_1_contents, var_length_of, LOCAL(2), LOCAL(3),
  // 
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(124, 28),
  POS(124, 28),
  POS(122, 15),
  POS(121, 15)
};

static TAB_NUM t_lambda_7[] = {
  0, // locals
  0, // parameters
  //  myself
  LET, 1, var_97_0_myself, TAIL_CALL,
  POS(125, 15)
};

static TAB_NUM t_func_empty_hash_table_entry___retrieve[] = {
  1, // locals
  3, // parameters
  LOCAL(1),
  LOCAL(1),
  LOCAL(1),
  // -> undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(129, 60)
};

static TAB_NUM t_func_hash_table_leaf___retrieve[] = {
  4, // locals
  3, // parameters
  LOCAL(2), // 131_28_self
  LOCAL(1),
  LOCAL(3), // 131_45_key
  // self $_my_hash_index $my_key $my_value
  LOCAL(2), 0, 3, LOCAL(1), LOCAL(4), var_132_30_my_value,
  // key == my_key
  var_std__equal, 2, LOCAL(3), LOCAL(4), 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_8, lambda_9, TAIL_CALL,
  POS(132, 3),
  POS(134, 5),
  POS(133, 3)
};

static TAB_NUM t_lambda_8[] = {
  0, // locals
  0, // parameters
  //  my_value
  LET, 1, var_132_30_my_value, TAIL_CALL,
  POS(135, 7)
};

static TAB_NUM t_lambda_9[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(136, 7)
};

static TAB_NUM t_func_empty_collision_list_entry___retrieve[] = {
  1, // locals
  3, // parameters
  LOCAL(1),
  LOCAL(1),
  LOCAL(1),
  // -> undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(138, 59)
};

static TAB_NUM t_func_collision_list_entry___retrieve[] = {
  3, // locals
  3, // parameters
  LOCAL(2), // 140_33_self
  LOCAL(1),
  var_140_45_key,
  // self $my_key $my_value $my_link
  LOCAL(2), 0, 3, LOCAL(3), var_141_14_my_value, var_141_24_my_link,
  // key == my_key
  var_std__equal, 2, var_140_45_key, LOCAL(3), 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_10, lambda_11, TAIL_CALL,
  POS(141, 3),
  POS(143, 5),
  POS(142, 3)
};

static TAB_NUM t_lambda_10[] = {
  0, // locals
  0, // parameters
  //  my_value
  LET, 1, var_141_14_my_value, TAIL_CALL,
  POS(144, 7)
};

static TAB_NUM t_lambda_11[] = {
  0, // locals
  0, // parameters
  // retrieve my_link undefined key
  var_retrieve, 3, var_141_24_my_link, var_undefined, var_140_45_key, TAIL_CALL,
  POS(145, 7)
};

static TAB_NUM t_func_hash_table_node___retrieve[] = {
  6, // locals
  3, // parameters
  LOCAL(3), // 147_28_self
  LOCAL(4), // 147_33_hash_index
  LOCAL(5), // 147_44_key
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
  POS(148, 9),
  POS(148, 3),
  POS(149, 12),
  POS(149, 22),
  POS(149, 3)
};

static TAB_NUM t_func_empty_hash_table_entry___insert[] = {
  1, // locals
  4, // parameters
  LOCAL(1),
  var_153_39_hash_index,
  var_153_50_key,
  var_153_54_value,
  // hash_index == 3
  var_std__equal, 2, var_153_39_hash_index, num_3, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_12, lambda_13, TAIL_CALL,
  POS(155, 5),
  POS(154, 3)
};

static TAB_NUM t_lambda_12[] = {
  1, // locals
  0, // parameters
  // new(collision_list_entry key value empty_collision_list_entry) true
  var_new, 4, var_collision_list_entry, var_153_50_key, var_153_54_value, var_empty_collision_list_entry, 1, LOCAL(1),
  //  new(collision_list_entry key value empty_collision_list_entry) true
  LET, 2, LOCAL(1), var_true, TAIL_CALL,
  POS(156, 8),
  POS(156, 7)
};

static TAB_NUM t_lambda_13[] = {
  1, // locals
  0, // parameters
  // new(hash_table_leaf hash_index key value) true
  var_new, 4, var_hash_table_leaf, var_153_39_hash_index, var_153_50_key, var_153_54_value, 1, LOCAL(1),
  //  new(hash_table_leaf hash_index key value) true
  LET, 2, LOCAL(1), var_true, TAIL_CALL,
  POS(157, 8),
  POS(157, 7)
};

static TAB_NUM t_func_hash_table_leaf___insert[] = {
  1, // locals
  4, // parameters
  var_159_26_self,
  var_159_31_hash_index,
  var_159_42_key,
  var_159_46_value,
  // self $my_hash_index $my_key $my_value
  var_159_26_self, 0, 3, var_160_6_my_hash_index, var_160_21_my_key, var_160_29_my_value,
  // key == my_key
  var_std__equal, 2, var_159_42_key, var_160_21_my_key, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_14, lambda_15, TAIL_CALL,
  POS(160, 3),
  POS(162, 5),
  POS(161, 3)
};

static TAB_NUM t_lambda_14[] = {
  1, // locals
  0, // parameters
  // new(self my_hash_index key value) false
  var_new, 4, var_159_26_self, var_160_6_my_hash_index, var_159_42_key, var_159_46_value, 1, LOCAL(1),
  //  new(self my_hash_index key value) false
  LET, 2, LOCAL(1), var_false, TAIL_CALL,
  POS(163, 8),
  POS(163, 7)
};

static TAB_NUM t_lambda_15[] = {
  2, // locals
  0, // parameters
  // insert hash_table_node $new_node $_did_insert
  var_insert, 4, var_hash_table_node, var_160_6_my_hash_index, var_160_21_my_key, var_160_29_my_value, 2, LOCAL(2), LOCAL(1),
  // insert new_node hash_index key value
  var_insert, 4, LOCAL(2), var_159_31_hash_index, var_159_42_key, var_159_46_value, TAIL_CALL,
  POS(165, 7),
  POS(167, 7)
};

static TAB_NUM t_func_empty_collision_list_entry___insert[] = {
  4, // locals
  4, // parameters
  LOCAL(2), // 169_37_self
  LOCAL(1),
  LOCAL(3), // 169_49_key
  LOCAL(4), // 169_53_value
  // new(collision_list_entry key value self) true
  var_new, 4, var_collision_list_entry, LOCAL(3), LOCAL(4), LOCAL(2), 1, LOCAL(1),
  // -> new(collision_list_entry key value self) true
  LET, 2, LOCAL(1), var_true, TAIL_CALL,
  POS(170, 6),
  POS(170, 3)
};

static TAB_NUM t_func_collision_list_entry___insert[] = {
  6, // locals
  4, // parameters
  LOCAL(3), // 172_31_self
  LOCAL(1),
  LOCAL(4), // 172_43_key
  LOCAL(5), // 172_47_value
  // delete &self $did_delete undefined key
  var_delete, 3, LOCAL(3), var_undefined, LOCAL(4), 2, LOCAL(3), LOCAL(6),
  // new(collision_list_entry key value self) not(did_delete)
  var_new, 4, var_collision_list_entry, LOCAL(4), LOCAL(5), LOCAL(3), 1, LOCAL(1),
  // not(did_delete)
  var_not, 1, LOCAL(6), 1, LOCAL(2),
  // -> new(collision_list_entry key value self) not(did_delete)
  LET, 2, LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(173, 3),
  POS(174, 6),
  POS(174, 47),
  POS(174, 3)
};

static TAB_NUM t_func_hash_table_node___insert[] = {
  8, // locals
  4, // parameters
  LOCAL(3), // 176_26_self
  LOCAL(4), // 176_31_hash_index
  LOCAL(5), // 176_42_key
  LOCAL(6), // 176_46_value
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
  POS(177, 9),
  POS(177, 3),
  POS(178, 11),
  POS(178, 33),
  POS(178, 3),
  POS(178, 11),
  POS(179, 3)
};

static TAB_NUM t_func_empty_hash_table_entry___delete[] = {
  2, // locals
  3, // parameters
  LOCAL(2), // 192_33_self
  LOCAL(1),
  LOCAL(1),
  // -> self false
  LET, 2, LOCAL(2), var_false, TAIL_CALL,
  POS(192, 57)
};

static TAB_NUM t_func_hash_table_leaf___delete[] = {
  3, // locals
  3, // parameters
  var_194_26_self,
  LOCAL(1),
  LOCAL(2), // 194_43_key
  // self $_my_hash_index $my_key $_my_value
  var_194_26_self, 0, 3, LOCAL(1), LOCAL(3), LOCAL(1),
  // key == my_key
  var_std__equal, 2, LOCAL(2), LOCAL(3), 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_16, lambda_17, TAIL_CALL,
  POS(195, 3),
  POS(197, 5),
  POS(196, 3)
};

static TAB_NUM t_lambda_16[] = {
  0, // locals
  0, // parameters
  //  empty_hash_table_entry true
  LET, 2, var_empty_hash_table_entry, var_true, TAIL_CALL,
  POS(198, 7)
};

static TAB_NUM t_lambda_17[] = {
  0, // locals
  0, // parameters
  //  self false
  LET, 2, var_194_26_self, var_false, TAIL_CALL,
  POS(199, 7)
};

static TAB_NUM t_func_empty_collision_list_entry___delete[] = {
  2, // locals
  3, // parameters
  LOCAL(2), // 201_37_self
  LOCAL(1),
  LOCAL(1),
  // -> self false
  LET, 2, LOCAL(2), var_false, TAIL_CALL,
  POS(201, 56)
};

static TAB_NUM t_func_collision_list_entry___delete[] = {
  2, // locals
  3, // parameters
  LOCAL(2), // 203_31_self
  LOCAL(1),
  var_203_43_key,
  // self $my_key $my_value $my_link
  LOCAL(2), 0, 3, var_204_6_my_key, var_204_14_my_value, var_204_24_my_link,
  // key == my_key
  var_std__equal, 2, var_203_43_key, var_204_6_my_key, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_18, lambda_19, TAIL_CALL,
  POS(204, 3),
  POS(206, 5),
  POS(205, 3)
};

static TAB_NUM t_lambda_18[] = {
  0, // locals
  0, // parameters
  // -> my_link true
  LET, 2, var_204_24_my_link, var_true, TAIL_CALL,
  POS(208, 7)
};

static TAB_NUM t_lambda_19[] = {
  2, // locals
  0, // parameters
  // delete &my_link undefined key $did_delete
  var_delete, 3, var_204_24_my_link, var_undefined, var_203_43_key, 2, var_204_24_my_link, LOCAL(2),
  // new(collision_list_entry my_key my_value my_link) did_delete
  var_new, 4, var_collision_list_entry, var_204_6_my_key, var_204_14_my_value, var_204_24_my_link, 1, LOCAL(1),
  // -> new(collision_list_entry my_key my_value my_link) did_delete
  LET, 2, LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(210, 7),
  POS(211, 10),
  POS(211, 7)
};

static TAB_NUM t_func_hash_table_node___delete[] = {
  6, // locals
  3, // parameters
  var_213_26_self,
  LOCAL(3), // 213_31_hash_index
  LOCAL(4), // 213_42_key
  // hash_index & 7)+1
  var_std__bit_and, 2, LOCAL(3), num_7, 1, LOCAL(1),
  // $idx (hash_index & 7)+1
  var_std__plus, 2, LOCAL(1), num_1, 1, LOCAL(5),
  // self(idx) $success hash_index >> 3 key
  var_213_26_self, 1, LOCAL(5), 1, LOCAL(1),
  // hash_index >> 3 key
  var_std__shift_right, 2, LOCAL(3), num_3, 1, LOCAL(2),
  // delete &self(idx) $success hash_index >> 3 key
  var_delete, 3, LOCAL(1), LOCAL(2), LOCAL(4), 2, LOCAL(1), LOCAL(6),
  // self(idx) $success hash_index >> 3 key
  var_213_26_self, 2, LOCAL(5), LOCAL(1), 1, var_213_26_self,
  // if
  var_if, 3, LOCAL(6), lambda_20, lambda_23, TAIL_CALL,
  POS(214, 9),
  POS(214, 3),
  POS(215, 11),
  POS(215, 30),
  POS(215, 3),
  POS(215, 11),
  POS(216, 3)
};

static TAB_NUM t_lambda_20[] = {
  1, // locals
  0, // parameters
  // all_of(self is_an_empty_entry)
  var_all_of, 2, var_213_26_self, var_is_an_empty_entry, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_21, lambda_22, TAIL_CALL,
  POS(220, 9),
  POS(219, 7)
};

static TAB_NUM t_lambda_21[] = {
  0, // locals
  0, // parameters
  //  empty_hash_table_entry true
  LET, 2, var_empty_hash_table_entry, var_true, TAIL_CALL,
  POS(221, 11)
};

static TAB_NUM t_lambda_22[] = {
  0, // locals
  0, // parameters
  //  self true
  LET, 2, var_213_26_self, var_true, TAIL_CALL,
  POS(222, 11)
};

static TAB_NUM t_lambda_23[] = {
  0, // locals
  0, // parameters
  //  self false
  LET, 2, var_213_26_self, var_false, TAIL_CALL,
  POS(223, 7)
};

static TAB_NUM t_func_empty_hash_table_entry___for_each_1[] = {
  1, // locals
  1, // parameters
  LOCAL(1),
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(231, 3)
};

static TAB_NUM t_func_empty_hash_table_entry___for_each_2[] = {
  1, // locals
  1, // parameters
  LOCAL(1),
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(234, 3)
};

static TAB_NUM t_func_collision_list_entry___for_each_1[] = {
  2, // locals
  1, // parameters
  LOCAL(1), // 236_35_self
  // $saved_context
  var_tuple, 3, var_next, var_break, var_basic_loops__self, 1, LOCAL(2),
  // !basic_loops::self self
  LET, 1, LOCAL(1), 1, var_basic_loops__self,
  // !break: (myself^)
  LET, 1, lambda_break, 1, var_break,
  // break.basic_loops::saved_context_of saved_context
  LET, -1, var_break, var_basic_loops__saved_context_of, LOCAL(2), var_break,
  // !next:
  LET, 1, lambda_next, 1, var_next,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(237, 3),
  POS(243, 3),
  POS(245, 3),
  POS(251, 4),
  POS(253, 3),
  POS(265, 3)
};

static TAB_NUM t_lambda_break[] = {
  2, // locals
  -1, // parameters
  MYSELF_PARAMETER, LOCAL(2), // 245_9_myself
  // basic_loops::saved_context_of(myself)
  var_basic_loops__saved_context_of, 1, LOCAL(2), 1, LOCAL(1),
  // basic_loops::saved_context_of(myself)
  LOCAL(1), 0, 3, var_next, var_break, var_basic_loops__self,
  // break!
  var_break, 0, IO_TAIL_CALL,
  POS(246, 5),
  POS(246, 5),
  POS(249, 5)
};

static TAB_NUM t_lambda_next[] = {
  1, // locals
  0, // parameters
  // is_an_empty_entry:
  var_is_an_empty_entry, 1, var_basic_loops__self, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_basic_loopsself_is_an_empty_entry, lambda_24, IO_TAIL_CALL,
  POS(255, 25),
  POS(254, 5)
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
  POS(256, 9),
  POS(256, 9),
  POS(259, 9)
};

static TAB_NUM t_lambda_24[] = {
  3, // locals
  0, // parameters
  // basic_loops::self $_key $value $link
  var_basic_loops__self, 0, 3, LOCAL(1), LOCAL(2), LOCAL(3),
  // !basic_loops::self link
  LET, 1, LOCAL(3), 1, var_basic_loops__self,
  // basic_loops::body! value
  var_basic_loops__body, 1, LOCAL(2), IO_TAIL_CALL,
  POS(261, 9),
  POS(262, 9),
  POS(263, 9)
};

static TAB_NUM t_func_collision_list_entry___for_each_2[] = {
  2, // locals
  1, // parameters
  LOCAL(1), // 267_35_self
  // $saved_context
  var_tuple, 3, var_next, var_break, var_basic_loops__self, 1, LOCAL(2),
  // !basic_loops::self self
  LET, 1, LOCAL(1), 1, var_basic_loops__self,
  // !break: (myself^)
  LET, 1, lambda_2_break, 1, var_break,
  // break.basic_loops::saved_context_of saved_context
  LET, -1, var_break, var_basic_loops__saved_context_of, LOCAL(2), var_break,
  // !next:
  LET, 1, lambda_2_next, 1, var_next,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(268, 3),
  POS(274, 3),
  POS(276, 3),
  POS(282, 4),
  POS(284, 3),
  POS(296, 3)
};

static TAB_NUM t_lambda_2_break[] = {
  2, // locals
  -1, // parameters
  MYSELF_PARAMETER, LOCAL(2), // 276_9_myself
  // basic_loops::saved_context_of(myself)
  var_basic_loops__saved_context_of, 1, LOCAL(2), 1, LOCAL(1),
  // basic_loops::saved_context_of(myself)
  LOCAL(1), 0, 3, var_next, var_break, var_basic_loops__self,
  // break!
  var_break, 0, IO_TAIL_CALL,
  POS(277, 5),
  POS(277, 5),
  POS(280, 5)
};

static TAB_NUM t_lambda_2_next[] = {
  1, // locals
  0, // parameters
  // is_an_empty_entry:
  var_is_an_empty_entry, 1, var_basic_loops__self, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_2_basic_loopsself_is_an_empty_entry, lambda_25, IO_TAIL_CALL,
  POS(286, 25),
  POS(285, 5)
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
  POS(287, 9),
  POS(287, 9),
  POS(290, 9)
};

static TAB_NUM t_lambda_25[] = {
  3, // locals
  0, // parameters
  // basic_loops::self $key $value $link
  var_basic_loops__self, 0, 3, LOCAL(1), LOCAL(2), LOCAL(3),
  // !basic_loops::self link
  LET, 1, LOCAL(3), 1, var_basic_loops__self,
  // basic_loops::body! key value
  var_basic_loops__body, 2, LOCAL(1), LOCAL(2), IO_TAIL_CALL,
  POS(292, 9),
  POS(293, 9),
  POS(294, 9)
};

static TAB_NUM t_func_hash_table_leaf___for_each_1[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 298_30_self
  // self $_hash $_key $value
  LOCAL(2), 0, 3, LOCAL(1), LOCAL(1), LOCAL(3),
  // basic_loops::body! value
  var_basic_loops__body, 1, LOCAL(3), IO_TAIL_CALL,
  POS(299, 3),
  POS(300, 3)
};

static TAB_NUM t_func_hash_table_leaf___for_each_2[] = {
  4, // locals
  1, // parameters
  LOCAL(2), // 302_30_self
  // self $_hash $key $value
  LOCAL(2), 0, 3, LOCAL(1), LOCAL(3), LOCAL(4),
  // basic_loops::body! key value
  var_basic_loops__body, 2, LOCAL(3), LOCAL(4), IO_TAIL_CALL,
  POS(303, 3),
  POS(304, 3)
};

static TAB_NUM t_func_hash_table_node___for_each_1[] = {
  2, // locals
  1, // parameters
  LOCAL(1), // 306_30_self
  // $saved_context
  var_tuple, 4, var_next, var_break, var_basic_loops__from, var_basic_loops__self, 1, LOCAL(2),
  // !basic_loops::from 1
  LET, 1, num_1, 1, var_basic_loops__from,
  // !basic_loops::self self
  LET, 1, LOCAL(1), 1, var_basic_loops__self,
  // !break: (myself^)
  LET, 1, lambda_3_break, 1, var_break,
  // break.basic_loops::saved_context_of saved_context
  LET, -1, var_break, var_basic_loops__saved_context_of, LOCAL(2), var_break,
  // !next:
  LET, 1, lambda_3_next, 1, var_next,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(307, 3),
  POS(314, 3),
  POS(315, 3),
  POS(317, 3),
  POS(323, 4),
  POS(325, 3),
  POS(337, 3)
};

static TAB_NUM t_lambda_3_break[] = {
  2, // locals
  -1, // parameters
  MYSELF_PARAMETER, LOCAL(2), // 317_9_myself
  // basic_loops::saved_context_of(myself)
  var_basic_loops__saved_context_of, 1, LOCAL(2), 1, LOCAL(1),
  // basic_loops::saved_context_of(myself)
  LOCAL(1), 0, 4, var_next, var_break, var_basic_loops__from, var_basic_loops__self,
  // break!
  var_break, 0, IO_TAIL_CALL,
  POS(318, 5),
  POS(318, 5),
  POS(321, 5)
};

static TAB_NUM t_lambda_3_next[] = {
  2, // locals
  0, // parameters
  // $idx basic_loops::from
  LET, 1, var_basic_loops__from, 1, var_326_1_idx,
  // 8:
  var_std__less, 2, num_8, var_326_1_idx, 1, LOCAL(1),
  // 8:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_26, lambda_27, IO_TAIL_CALL,
  POS(326, 5),
  POS(328, 14),
  POS(328, 14),
  POS(327, 5)
};

static TAB_NUM t_lambda_26[] = {
  1, // locals
  0, // parameters
  // !basic_loops::from idx+1
  var_std__plus, 2, var_326_1_idx, num_1, 1, var_basic_loops__from,
  // basic_loops::self(idx)
  var_basic_loops__self, 1, var_326_1_idx, 1, LOCAL(1),
  // for_each_1! basic_loops::self(idx)
  var_for_each_1, 1, LOCAL(1), IO_TAIL_CALL,
  POS(329, 9),
  POS(330, 21),
  POS(330, 9)
};

static TAB_NUM t_lambda_27[] = {
  1, // locals
  0, // parameters
  // basic_loops::saved_context_of(break)
  var_basic_loops__saved_context_of, 1, var_break, 1, LOCAL(1),
  // basic_loops::saved_context_of(break)
  LOCAL(1), 0, 4, var_next, var_break, var_basic_loops__from, var_basic_loops__self,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(332, 9),
  POS(332, 9),
  POS(335, 9)
};

static TAB_NUM t_func_hash_table_node___for_each_2[] = {
  2, // locals
  1, // parameters
  LOCAL(1), // 339_30_self
  // $saved_context
  var_tuple, 4, var_next, var_break, var_basic_loops__from, var_basic_loops__self, 1, LOCAL(2),
  // !basic_loops::from 1
  LET, 1, num_1, 1, var_basic_loops__from,
  // !basic_loops::self self
  LET, 1, LOCAL(1), 1, var_basic_loops__self,
  // !break: (myself^)
  LET, 1, lambda_4_break, 1, var_break,
  // break.basic_loops::saved_context_of saved_context
  LET, -1, var_break, var_basic_loops__saved_context_of, LOCAL(2), var_break,
  // !next:
  LET, 1, lambda_4_next, 1, var_next,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(340, 3),
  POS(347, 3),
  POS(348, 3),
  POS(350, 3),
  POS(356, 4),
  POS(358, 3),
  POS(370, 3)
};

static TAB_NUM t_lambda_4_break[] = {
  2, // locals
  -1, // parameters
  MYSELF_PARAMETER, LOCAL(2), // 350_9_myself
  // basic_loops::saved_context_of(myself)
  var_basic_loops__saved_context_of, 1, LOCAL(2), 1, LOCAL(1),
  // basic_loops::saved_context_of(myself)
  LOCAL(1), 0, 4, var_next, var_break, var_basic_loops__from, var_basic_loops__self,
  // break!
  var_break, 0, IO_TAIL_CALL,
  POS(351, 5),
  POS(351, 5),
  POS(354, 5)
};

static TAB_NUM t_lambda_4_next[] = {
  2, // locals
  0, // parameters
  // $idx basic_loops::from
  LET, 1, var_basic_loops__from, 1, var_359_1_idx,
  // 8:
  var_std__less, 2, num_8, var_359_1_idx, 1, LOCAL(1),
  // 8:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_28, lambda_29, IO_TAIL_CALL,
  POS(359, 5),
  POS(361, 14),
  POS(361, 14),
  POS(360, 5)
};

static TAB_NUM t_lambda_28[] = {
  1, // locals
  0, // parameters
  // !basic_loops::from idx+1
  var_std__plus, 2, var_359_1_idx, num_1, 1, var_basic_loops__from,
  // basic_loops::self(idx)
  var_basic_loops__self, 1, var_359_1_idx, 1, LOCAL(1),
  // for_each_2! basic_loops::self(idx)
  var_for_each_2, 1, LOCAL(1), IO_TAIL_CALL,
  POS(362, 9),
  POS(363, 21),
  POS(363, 9)
};

static TAB_NUM t_lambda_29[] = {
  1, // locals
  0, // parameters
  // basic_loops::saved_context_of(break)
  var_basic_loops__saved_context_of, 1, var_break, 1, LOCAL(1),
  // basic_loops::saved_context_of(break)
  LOCAL(1), 0, 4, var_next, var_break, var_basic_loops__from, var_basic_loops__self,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(365, 9),
  POS(365, 9),
  POS(368, 9)
};

static TAB_NUM t_func_std_types__hash_table___for_each[] = {
  4, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_374_0_self,
  MANDATORY_PARAMETER, LOCAL(3), // 375_0_body
  var_next, var_376_0_finally,
  // $saved_context
  var_tuple, 4, var_next, var_break, var_basic_loops__body, var_basic_loops__finally, 1, LOCAL(4),
  // !basic_loops::body body
  LET, 1, LOCAL(3), 1, var_basic_loops__body,
  // !basic_loops::finally finally
  LET, 1, var_376_0_finally, 1, var_basic_loops__finally,
  // !break: (myself^)
  LET, 1, lambda_5_break, 1, var_break,
  // break.basic_loops::saved_context_of saved_context
  LET, -1, var_break, var_basic_loops__saved_context_of, LOCAL(4), var_break,
  // !next break
  LET, 1, var_break, 1, var_next,
  // parameter_count_of(body) == 2:
  var_parameter_count_of, 1, LOCAL(3), 1, LOCAL(1),
  // parameter_count_of(body) == 2:
  var_std__equal, 2, LOCAL(1), num_2, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_30, lambda_31, IO_TAIL_CALL,
  POS(378, 3),
  POS(385, 3),
  POS(386, 3),
  POS(388, 3),
  POS(395, 4),
  POS(396, 3),
  POS(399, 5),
  POS(399, 5),
  POS(398, 3)
};

static TAB_NUM t_lambda_5_break[] = {
  2, // locals
  -1, // parameters
  MYSELF_PARAMETER, LOCAL(2), // 388_9_myself
  // !finally basic_loops::finally
  LET, 1, var_basic_loops__finally, 1, var_376_0_finally,
  // basic_loops::saved_context_of(myself)
  var_basic_loops__saved_context_of, 1, LOCAL(2), 1, LOCAL(1),
  // basic_loops::saved_context_of(myself)
  LOCAL(1), 0, 4, var_next, var_break, var_basic_loops__body, var_basic_loops__finally,
  // finally!
  var_376_0_finally, 0, IO_TAIL_CALL,
  POS(389, 5),
  POS(390, 5),
  POS(390, 5),
  POS(393, 5)
};

static TAB_NUM t_lambda_30[] = {
  1, // locals
  0, // parameters
  // contents_of(self)
  var_contents_of, 1, var_374_0_self, 1, LOCAL(1),
  // for_each_2! contents_of(self)
  var_for_each_2, 1, LOCAL(1), IO_TAIL_CALL,
  POS(400, 19),
  POS(400, 7)
};

static TAB_NUM t_lambda_31[] = {
  1, // locals
  0, // parameters
  // contents_of(self)
  var_contents_of, 1, var_374_0_self, 1, LOCAL(1),
  // for_each_1! contents_of(self)
  var_for_each_1, 1, LOCAL(1), IO_TAIL_CALL,
  POS(402, 19),
  POS(402, 7)
};

static TAB_NUM t_func_empty_hash_table_entry___map_1[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 411_32_self
  // -> self
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(411, 39)
};

static TAB_NUM t_func_empty_hash_table_entry___map_2[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 412_32_self
  // -> self
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(412, 39)
};

static TAB_NUM t_func_hash_table_leaf___map_1[] = {
  5, // locals
  1, // parameters
  LOCAL(2), // 414_25_self
  // self $my_hash_index $my_key $my_value
  LOCAL(2), 0, 3, LOCAL(3), LOCAL(4), LOCAL(5),
  // mapping_function(my_value)
  var_mapping_function, 1, LOCAL(5), 1, LOCAL(1),
  // new self my_hash_index my_key mapping_function(my_value)
  var_new, 4, LOCAL(2), LOCAL(3), LOCAL(4), LOCAL(1), TAIL_CALL,
  POS(415, 3),
  POS(416, 33),
  POS(416, 3)
};

static TAB_NUM t_func_hash_table_leaf___map_2[] = {
  5, // locals
  1, // parameters
  LOCAL(2), // 418_25_self
  // self $my_hash_index $my_key $my_value
  LOCAL(2), 0, 3, LOCAL(3), LOCAL(4), LOCAL(5),
  // mapping_function(my_key my_value)
  var_mapping_function, 2, LOCAL(4), LOCAL(5), 1, LOCAL(1),
  // new self my_hash_index my_key mapping_function(my_key my_value)
  var_new, 4, LOCAL(2), LOCAL(3), LOCAL(4), LOCAL(1), TAIL_CALL,
  POS(419, 3),
  POS(420, 33),
  POS(420, 3)
};

static TAB_NUM t_func_empty_collision_list_entry___map_1[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 422_36_self
  // -> self
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(422, 43)
};

static TAB_NUM t_func_empty_collision_list_entry___map_2[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 423_36_self
  // -> self
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(423, 43)
};

static TAB_NUM t_func_collision_list_entry___map_1[] = {
  6, // locals
  1, // parameters
  LOCAL(3), // 425_30_self
  // self $my_key $my_value $my_link
  LOCAL(3), 0, 3, LOCAL(4), LOCAL(5), LOCAL(6),
  // mapping_function(my_value) map_1(my_link)
  var_mapping_function, 1, LOCAL(5), 1, LOCAL(1),
  // map_1(my_link)
  var_map_1, 1, LOCAL(6), 1, LOCAL(2),
  // new self my_key mapping_function(my_value) map_1(my_link)
  var_new, 4, LOCAL(3), LOCAL(4), LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(426, 3),
  POS(427, 19),
  POS(427, 46),
  POS(427, 3)
};

static TAB_NUM t_func_collision_list_entry___map_2[] = {
  6, // locals
  1, // parameters
  LOCAL(3), // 429_30_self
  // self $my_key $my_value $my_link
  LOCAL(3), 0, 3, LOCAL(4), LOCAL(5), LOCAL(6),
  // mapping_function(my_key my_value) map_2(my_link)
  var_mapping_function, 2, LOCAL(4), LOCAL(5), 1, LOCAL(1),
  // map_2(my_link)
  var_map_2, 1, LOCAL(6), 1, LOCAL(2),
  // new self my_key mapping_function(my_key my_value) map_2(my_link)
  var_new, 4, LOCAL(3), LOCAL(4), LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(430, 3),
  POS(431, 19),
  POS(431, 53),
  POS(431, 3)
};

static TAB_NUM t_func_hash_table_node___map_1[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 433_25_self
  // map(self map_1)
  var_map, 2, LOCAL(2), var_map_1, 1, LOCAL(1),
  // new self map(self map_1)
  var_new, 2, LOCAL(2), LOCAL(1), TAIL_CALL,
  POS(434, 12),
  POS(434, 3)
};

static TAB_NUM t_func_hash_table_node___map_2[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 436_25_self
  // map(self map_2)
  var_map, 2, LOCAL(2), var_map_2, 1, LOCAL(1),
  // new self map(self map_2)
  var_new, 2, LOCAL(2), LOCAL(1), TAIL_CALL,
  POS(437, 12),
  POS(437, 3)
};

static TAB_NUM t_func_std_types__hash_table___map[] = {
  3, // locals
  2, // parameters
  var_447_0_self,
  LOCAL(3), // 448_0_function
  // !mapping_function function
  LET, 1, LOCAL(3), 1, var_mapping_function,
  // parameter_count_of(function) == 2:
  var_parameter_count_of, 1, LOCAL(3), 1, LOCAL(1),
  // parameter_count_of(function) == 2:
  var_std__equal, 2, LOCAL(1), num_2, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_32, lambda_33, TAIL_CALL,
  POS(450, 3),
  POS(452, 5),
  POS(452, 5),
  POS(451, 3)
};

static TAB_NUM t_lambda_32[] = {
  1, // locals
  0, // parameters
  // contents_of
  var_contents_of, 1, var_447_0_self, 1, LOCAL(1),
  // map_2 &self.contents_of
  var_map_2, 1, LOCAL(1), 1, LOCAL(1),
  // self.contents_of
  LET, -1, var_447_0_self, var_contents_of, LOCAL(1), var_447_0_self,
  // -> self
  LET, 1, var_447_0_self, TAIL_CALL,
  POS(453, 19),
  POS(453, 7),
  POS(453, 14),
  POS(454, 7)
};

static TAB_NUM t_lambda_33[] = {
  1, // locals
  0, // parameters
  // contents_of
  var_contents_of, 1, var_447_0_self, 1, LOCAL(1),
  // map_1 &self.contents_of
  var_map_1, 1, LOCAL(1), 1, LOCAL(1),
  // self.contents_of
  LET, -1, var_447_0_self, var_contents_of, LOCAL(1), var_447_0_self,
  // -> self
  LET, 1, var_447_0_self, TAIL_CALL,
  POS(456, 19),
  POS(456, 7),
  POS(456, 14),
  POS(457, 7)
};

static TAB_NUM t_func_empty_hash_table_entry___reduce_1[] = {
  1, // locals
  1, // parameters
  LOCAL(1),
  // -> UNIT
  LET, 1, uni_UNIT, TAIL_CALL,
  POS(467, 43)
};

static TAB_NUM t_func_hash_table_leaf___reduce_1[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 469_28_self
  // self $_my_hash_index $_my_key $my_value
  LOCAL(2), 0, 3, LOCAL(1), LOCAL(1), LOCAL(3),
  // -> my_value
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(470, 3),
  POS(471, 3)
};

static TAB_NUM t_func_empty_collision_list_entry___reduce_1[] = {
  1, // locals
  1, // parameters
  LOCAL(1),
  // -> UNIT
  LET, 1, uni_UNIT, TAIL_CALL,
  POS(473, 47)
};

static TAB_NUM t_func_collision_list_entry___reduce_1[] = {
  6, // locals
  1, // parameters
  LOCAL(3), // 475_33_self
  // self $my_key $my_value $my_link
  LOCAL(3), 0, 3, LOCAL(4), LOCAL(5), LOCAL(6),
  // mapping_function(my_key my_value)
  var_mapping_function, 2, LOCAL(4), LOCAL(5), 1, LOCAL(1),
  // reduce_1(my_link)
  var_reduce_1, 1, LOCAL(6), 1, LOCAL(2),
  // my_reduce
  func_my_reduce, 2, LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(476, 3),
  POS(478, 5),
  POS(479, 5),
  POS(477, 3)
};

static TAB_NUM t_func_hash_table_node___reduce_1[] = {
  11, // locals
  1, // parameters
  LOCAL(5), // 481_28_self
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
  POS(482, 27),
  POS(482, 18),
  POS(482, 45),
  POS(482, 36),
  POS(482, 3),
  POS(483, 27),
  POS(483, 18),
  POS(483, 45),
  POS(483, 36),
  POS(483, 3),
  POS(484, 27),
  POS(484, 18),
  POS(484, 45),
  POS(484, 36),
  POS(484, 3),
  POS(485, 27),
  POS(485, 18),
  POS(485, 45),
  POS(485, 36),
  POS(485, 3),
  POS(486, 3),
  POS(487, 3),
  POS(488, 6),
  POS(488, 3)
};

static TAB_NUM t_func_my_reduce[] = {
  1, // locals
  2, // parameters
  var_490_13_left,
  var_490_18_right,
  // UNIT == left
  var_std__equal, 2, uni_UNIT, var_490_13_left, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_34, lambda_35, TAIL_CALL,
  POS(492, 5),
  POS(491, 3)
};

static TAB_NUM t_lambda_34[] = {
  0, // locals
  0, // parameters
  //  right
  LET, 1, var_490_18_right, TAIL_CALL,
  POS(493, 7)
};

static TAB_NUM t_lambda_35[] = {
  1, // locals
  0, // parameters
  // UNIT == right
  var_std__equal, 2, uni_UNIT, var_490_18_right, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_36, lambda_37, TAIL_CALL,
  POS(496, 9),
  POS(495, 7)
};

static TAB_NUM t_lambda_36[] = {
  0, // locals
  0, // parameters
  //  left
  LET, 1, var_490_13_left, TAIL_CALL,
  POS(497, 11)
};

static TAB_NUM t_lambda_37[] = {
  1, // locals
  0, // parameters
  // reduction_function(left right)
  var_reduction_function, 2, var_490_13_left, var_490_18_right, 1, LOCAL(1),
  //  reduction_function(left right)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(498, 12),
  POS(498, 11)
};

static TAB_NUM t_func_std_types__hash_table___reduce[] = {
  2, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_512_0_self,
  MANDATORY_PARAMETER, var_513_0_function,
  var_undefined, var_514_0_unit,
  // length_of(self) == 0
  var_length_of, 1, var_512_0_self, 1, LOCAL(1),
  // length_of(self) == 0
  var_std__equal, 2, LOCAL(1), num_0, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_38, lambda_39, TAIL_CALL,
  POS(517, 5),
  POS(517, 5),
  POS(516, 3)
};

static TAB_NUM t_lambda_38[] = {
  0, // locals
  0, // parameters
  //  unit
  LET, 1, var_514_0_unit, TAIL_CALL,
  POS(518, 7)
};

static TAB_NUM t_lambda_39[] = {
  1, // locals
  0, // parameters
  // !reduction_function function
  LET, 1, var_513_0_function, 1, var_reduction_function,
  // contents_of(self)
  var_contents_of, 1, var_512_0_self, 1, LOCAL(1),
  // reduce_1 contents_of(self)
  var_reduce_1, 1, LOCAL(1), TAIL_CALL,
  POS(520, 7),
  POS(521, 16),
  POS(521, 7)
};

static TAB_NUM t_func_empty_hash_table_entry___map_reduce_1[] = {
  1, // locals
  1, // parameters
  LOCAL(1),
  // -> UNIT
  LET, 1, uni_UNIT, TAIL_CALL,
  POS(528, 47)
};

static TAB_NUM t_func_empty_hash_table_entry___map_reduce_2[] = {
  1, // locals
  1, // parameters
  LOCAL(1),
  // -> UNIT
  LET, 1, uni_UNIT, TAIL_CALL,
  POS(529, 47)
};

static TAB_NUM t_func_hash_table_leaf___map_reduce_1[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 531_32_self
  // self $_my_hash_index $_my_key $my_value
  LOCAL(2), 0, 3, LOCAL(1), LOCAL(1), LOCAL(3),
  // mapping_function(my_value)
  var_mapping_function, 1, LOCAL(3), 1, LOCAL(1),
  // -> mapping_function(my_value)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(532, 3),
  POS(533, 6),
  POS(533, 3)
};

static TAB_NUM t_func_hash_table_leaf___map_reduce_2[] = {
  4, // locals
  1, // parameters
  LOCAL(2), // 535_32_self
  // self $_my_hash_index $my_key $my_value
  LOCAL(2), 0, 3, LOCAL(1), LOCAL(3), LOCAL(4),
  // mapping_function(my_key my_value)
  var_mapping_function, 2, LOCAL(3), LOCAL(4), 1, LOCAL(1),
  // -> mapping_function(my_key my_value)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(536, 3),
  POS(537, 6),
  POS(537, 3)
};

static TAB_NUM t_func_empty_collision_list_entry___map_reduce_1[] = {
  1, // locals
  1, // parameters
  LOCAL(1),
  // -> UNIT
  LET, 1, uni_UNIT, TAIL_CALL,
  POS(539, 51)
};

static TAB_NUM t_func_empty_collision_list_entry___map_reduce_2[] = {
  1, // locals
  1, // parameters
  LOCAL(1),
  // -> UNIT
  LET, 1, uni_UNIT, TAIL_CALL,
  POS(540, 51)
};

static TAB_NUM t_func_collision_list_entry___map_reduce_1[] = {
  6, // locals
  1, // parameters
  LOCAL(3), // 542_37_self
  // self $my_key $my_value $my_link
  LOCAL(3), 0, 3, LOCAL(4), LOCAL(5), LOCAL(6),
  // mapping_function(my_key my_value)
  var_mapping_function, 2, LOCAL(4), LOCAL(5), 1, LOCAL(1),
  // map_reduce_1(my_link)
  var_map_reduce_1, 1, LOCAL(6), 1, LOCAL(2),
  // my_reduce
  func_my_reduce, 2, LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(543, 3),
  POS(545, 5),
  POS(546, 5),
  POS(544, 3)
};

static TAB_NUM t_func_collision_list_entry___map_reduce_2[] = {
  6, // locals
  1, // parameters
  LOCAL(3), // 548_37_self
  // self $my_key $my_value $my_link
  LOCAL(3), 0, 3, LOCAL(4), LOCAL(5), LOCAL(6),
  // mapping_function(my_key my_value)
  var_mapping_function, 2, LOCAL(4), LOCAL(5), 1, LOCAL(1),
  // map_reduce_2(my_link)
  var_map_reduce_2, 1, LOCAL(6), 1, LOCAL(2),
  // my_reduce
  func_my_reduce, 2, LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(549, 3),
  POS(551, 5),
  POS(552, 5),
  POS(550, 3)
};

static TAB_NUM t_func_hash_table_node___map_reduce_1[] = {
  11, // locals
  1, // parameters
  LOCAL(5), // 554_32_self
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
  POS(555, 31),
  POS(555, 18),
  POS(555, 53),
  POS(555, 40),
  POS(555, 3),
  POS(556, 31),
  POS(556, 18),
  POS(556, 53),
  POS(556, 40),
  POS(556, 3),
  POS(557, 31),
  POS(557, 18),
  POS(557, 53),
  POS(557, 40),
  POS(557, 3),
  POS(558, 31),
  POS(558, 18),
  POS(558, 53),
  POS(558, 40),
  POS(558, 3),
  POS(559, 3),
  POS(560, 3),
  POS(561, 6),
  POS(561, 3)
};

static TAB_NUM t_func_hash_table_node___map_reduce_2[] = {
  11, // locals
  1, // parameters
  LOCAL(5), // 563_32_self
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
  POS(564, 31),
  POS(564, 18),
  POS(564, 53),
  POS(564, 40),
  POS(564, 3),
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
  POS(568, 3),
  POS(569, 3),
  POS(570, 6),
  POS(570, 3)
};

static TAB_NUM t_func_std_types__hash_table___map_reduce[] = {
  2, // locals
  -4, // parameters
  MANDATORY_PARAMETER, var_582_0_self,
  MANDATORY_PARAMETER, var_583_0_map_function,
  var_append, var_584_0_reduce_function,
  var_undefined, var_585_0_unit,
  // length_of(self) == 0
  var_length_of, 1, var_582_0_self, 1, LOCAL(1),
  // length_of(self) == 0
  var_std__equal, 2, LOCAL(1), num_0, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_40, lambda_41, TAIL_CALL,
  POS(588, 5),
  POS(588, 5),
  POS(587, 3)
};

static TAB_NUM t_lambda_40[] = {
  0, // locals
  0, // parameters
  //  unit
  LET, 1, var_585_0_unit, TAIL_CALL,
  POS(589, 7)
};

static TAB_NUM t_lambda_41[] = {
  2, // locals
  0, // parameters
  // !mapping_function map_function
  LET, 1, var_583_0_map_function, 1, var_mapping_function,
  // !reduction_function reduce_function
  LET, 1, var_584_0_reduce_function, 1, var_reduction_function,
  // parameter_count_of(map_function) == 2:
  var_parameter_count_of, 1, var_583_0_map_function, 1, LOCAL(1),
  // parameter_count_of(map_function) == 2:
  var_std__equal, 2, LOCAL(1), num_2, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_42, lambda_43, TAIL_CALL,
  POS(591, 7),
  POS(592, 7),
  POS(594, 9),
  POS(594, 9),
  POS(593, 7)
};

static TAB_NUM t_lambda_42[] = {
  1, // locals
  0, // parameters
  // contents_of(self)
  var_contents_of, 1, var_582_0_self, 1, LOCAL(1),
  // map_reduce_2 contents_of(self)
  var_map_reduce_2, 1, LOCAL(1), TAIL_CALL,
  POS(595, 24),
  POS(595, 11)
};

static TAB_NUM t_lambda_43[] = {
  1, // locals
  0, // parameters
  // contents_of(self)
  var_contents_of, 1, var_582_0_self, 1, LOCAL(1),
  // map_reduce_1 contents_of(self)
  var_map_reduce_1, 1, LOCAL(1), TAIL_CALL,
  POS(597, 24),
  POS(597, 11)
};

static TAB_NUM t_func_empty_hash_table_entry___filter_1[] = {
  1, // locals
  1, // parameters
  LOCAL(1),
  // -> empty_hash_table_entry 0
  LET, 2, var_empty_hash_table_entry, num_0, TAIL_CALL,
  POS(606, 43)
};

static TAB_NUM t_func_empty_hash_table_entry___filter_2[] = {
  1, // locals
  1, // parameters
  LOCAL(1),
  // -> empty_hash_table_entry 0
  LET, 2, var_empty_hash_table_entry, num_0, TAIL_CALL,
  POS(607, 43)
};

static TAB_NUM t_func_hash_table_leaf___filter_1[] = {
  2, // locals
  1, // parameters
  var_609_28_self,
  // self $_my_hash_index $_my_key $my_value
  var_609_28_self, 0, 3, LOCAL(1), LOCAL(1), LOCAL(2),
  // filter_function(my_value)
  var_filter_function, 1, LOCAL(2), 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_44, lambda_45, TAIL_CALL,
  POS(610, 3),
  POS(612, 5),
  POS(611, 3)
};

static TAB_NUM t_lambda_44[] = {
  0, // locals
  0, // parameters
  //  self 0
  LET, 2, var_609_28_self, num_0, TAIL_CALL,
  POS(613, 7)
};

static TAB_NUM t_lambda_45[] = {
  0, // locals
  0, // parameters
  //  empty_hash_table_entry 1
  LET, 2, var_empty_hash_table_entry, num_1, TAIL_CALL,
  POS(614, 7)
};

static TAB_NUM t_func_hash_table_leaf___filter_2[] = {
  3, // locals
  1, // parameters
  var_616_28_self,
  // self $_my_hash_index $my_key $my_value
  var_616_28_self, 0, 3, LOCAL(1), LOCAL(2), LOCAL(3),
  // filter_function(my_key my_value)
  var_filter_function, 2, LOCAL(2), LOCAL(3), 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_46, lambda_47, TAIL_CALL,
  POS(617, 3),
  POS(619, 5),
  POS(618, 3)
};

static TAB_NUM t_lambda_46[] = {
  0, // locals
  0, // parameters
  //  self 0
  LET, 2, var_616_28_self, num_0, TAIL_CALL,
  POS(620, 7)
};

static TAB_NUM t_lambda_47[] = {
  0, // locals
  0, // parameters
  //  empty_hash_table_entry 1
  LET, 2, var_empty_hash_table_entry, num_1, TAIL_CALL,
  POS(621, 7)
};

static TAB_NUM t_func_empty_collision_list_entry___filter_1[] = {
  1, // locals
  1, // parameters
  LOCAL(1),
  // -> empty_collision_list_entry 0
  LET, 2, var_empty_collision_list_entry, num_0, TAIL_CALL,
  POS(623, 47)
};

static TAB_NUM t_func_empty_collision_list_entry___filter_2[] = {
  1, // locals
  1, // parameters
  LOCAL(1),
  // -> empty_collision_list_entry 0
  LET, 2, var_empty_collision_list_entry, num_0, TAIL_CALL,
  POS(624, 47)
};

static TAB_NUM t_func_collision_list_entry___filter_1[] = {
  2, // locals
  1, // parameters
  var_626_33_self,
  // self $my_key $my_value $my_link
  var_626_33_self, 0, 3, var_627_6_my_key, var_627_14_my_value, LOCAL(2),
  // filter_1 $new_link $deleted my_link
  var_filter_1, 1, LOCAL(2), 2, var_628_10_new_link, var_628_20_deleted,
  // filter_function(my_value):
  var_filter_function, 1, var_627_14_my_value, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_filter_functionmy_value, lambda_50, TAIL_CALL,
  POS(627, 3),
  POS(628, 3),
  POS(630, 5),
  POS(629, 3)
};

static TAB_NUM t_lambda_filter_functionmy_value[] = {
  1, // locals
  0, // parameters
  // deleted == 0
  var_std__equal, 2, var_628_20_deleted, num_0, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_48, lambda_49, TAIL_CALL,
  POS(632, 9),
  POS(631, 7)
};

static TAB_NUM t_lambda_48[] = {
  0, // locals
  0, // parameters
  //  self 0
  LET, 2, var_626_33_self, num_0, TAIL_CALL,
  POS(633, 11)
};

static TAB_NUM t_lambda_49[] = {
  1, // locals
  0, // parameters
  // new(collision_list_entry my_key my_value new_link) deleted
  var_new, 4, var_collision_list_entry, var_627_6_my_key, var_627_14_my_value, var_628_10_new_link, 1, LOCAL(1),
  //  new(collision_list_entry my_key my_value new_link) deleted
  LET, 2, LOCAL(1), var_628_20_deleted, TAIL_CALL,
  POS(634, 12),
  POS(634, 11)
};

static TAB_NUM t_lambda_50[] = {
  1, // locals
  0, // parameters
  // deleted+1
  var_std__plus, 2, var_628_20_deleted, num_1, 1, LOCAL(1),
  //  new_link deleted+1
  LET, 2, var_628_10_new_link, LOCAL(1), TAIL_CALL,
  POS(635, 17),
  POS(635, 7)
};

static TAB_NUM t_func_collision_list_entry___filter_2[] = {
  2, // locals
  1, // parameters
  var_637_33_self,
  // self $my_key $my_value $my_link
  var_637_33_self, 0, 3, var_638_6_my_key, var_638_14_my_value, LOCAL(2),
  // filter_2 $new_link $deleted my_link
  var_filter_2, 1, LOCAL(2), 2, var_639_10_new_link, var_639_20_deleted,
  // filter_function(my_key my_value):
  var_filter_function, 2, var_638_6_my_key, var_638_14_my_value, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_51, lambda_54, TAIL_CALL,
  POS(638, 3),
  POS(639, 3),
  POS(641, 5),
  POS(640, 3)
};

static TAB_NUM t_lambda_51[] = {
  1, // locals
  0, // parameters
  // deleted == 0
  var_std__equal, 2, var_639_20_deleted, num_0, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_52, lambda_53, TAIL_CALL,
  POS(643, 9),
  POS(642, 7)
};

static TAB_NUM t_lambda_52[] = {
  0, // locals
  0, // parameters
  //  self 0
  LET, 2, var_637_33_self, num_0, TAIL_CALL,
  POS(644, 11)
};

static TAB_NUM t_lambda_53[] = {
  1, // locals
  0, // parameters
  // new(collision_list_entry my_key my_value new_link) deleted
  var_new, 4, var_collision_list_entry, var_638_6_my_key, var_638_14_my_value, var_639_10_new_link, 1, LOCAL(1),
  //  new(collision_list_entry my_key my_value new_link) deleted
  LET, 2, LOCAL(1), var_639_20_deleted, TAIL_CALL,
  POS(645, 12),
  POS(645, 11)
};

static TAB_NUM t_lambda_54[] = {
  1, // locals
  0, // parameters
  // deleted+1
  var_std__plus, 2, var_639_20_deleted, num_1, 1, LOCAL(1),
  //  new_link deleted+1
  LET, 2, var_639_10_new_link, LOCAL(1), TAIL_CALL,
  POS(646, 17),
  POS(646, 7)
};

static TAB_NUM t_func_hash_table_node___filter_1[] = {
  14, // locals
  1, // parameters
  var_648_28_self,
  // self(1)
  var_648_28_self, 1, num_1, 1, LOCAL(1),
  // filter_1 $node_1 $deleted_1 self(1)
  var_filter_1, 1, LOCAL(1), 2, var_649_10_node_1, LOCAL(7),
  // self(2)
  var_648_28_self, 1, num_2, 1, LOCAL(1),
  // filter_1 $node_2 $deleted_2 self(2)
  var_filter_1, 1, LOCAL(1), 2, var_650_10_node_2, LOCAL(8),
  // self(3)
  var_648_28_self, 1, num_3, 1, LOCAL(1),
  // filter_1 $node_3 $deleted_3 self(3)
  var_filter_1, 1, LOCAL(1), 2, var_651_10_node_3, LOCAL(9),
  // self(4)
  var_648_28_self, 1, num_4, 1, LOCAL(1),
  // filter_1 $node_4 $deleted_4 self(4)
  var_filter_1, 1, LOCAL(1), 2, var_652_10_node_4, LOCAL(10),
  // self(5)
  var_648_28_self, 1, num_5, 1, LOCAL(1),
  // filter_1 $node_5 $deleted_5 self(5)
  var_filter_1, 1, LOCAL(1), 2, var_653_10_node_5, LOCAL(11),
  // self(6)
  var_648_28_self, 1, num_6, 1, LOCAL(1),
  // filter_1 $node_6 $deleted_6 self(6)
  var_filter_1, 1, LOCAL(1), 2, var_654_10_node_6, LOCAL(12),
  // self(7)
  var_648_28_self, 1, num_7, 1, LOCAL(1),
  // filter_1 $node_7 $deleted_7 self(7)
  var_filter_1, 1, LOCAL(1), 2, var_655_10_node_7, LOCAL(13),
  // self(8)
  var_648_28_self, 1, num_8, 1, LOCAL(1),
  // filter_1 $node_8 $deleted_8 self(8)
  var_filter_1, 1, LOCAL(1), 2, var_656_10_node_8, LOCAL(14),
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
  var_std__plus, 2, LOCAL(6), LOCAL(14), 1, var_657_1_deleted,
  // deleted == 0
  var_std__equal, 2, var_657_1_deleted, num_0, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_55, lambda_56, TAIL_CALL,
  POS(649, 31),
  POS(649, 3),
  POS(650, 31),
  POS(650, 3),
  POS(651, 31),
  POS(651, 3),
  POS(652, 31),
  POS(652, 3),
  POS(653, 31),
  POS(653, 3),
  POS(654, 31),
  POS(654, 3),
  POS(655, 31),
  POS(655, 3),
  POS(656, 31),
  POS(656, 3),
  POS(658, 6),
  POS(658, 6),
  POS(658, 6),
  POS(658, 6),
  POS(658, 6),
  POS(658, 6),
  POS(657, 3),
  POS(668, 5),
  POS(667, 3)
};

static TAB_NUM t_lambda_55[] = {
  0, // locals
  0, // parameters
  //  self 0
  LET, 2, var_648_28_self, num_0, TAIL_CALL,
  POS(669, 7)
};

static TAB_NUM t_lambda_56[] = {
  2, // locals
  0, // parameters
  // is_an_empty_entry
  var_is_an_empty_entry, 1, var_649_10_node_1, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_57, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_64, lambda_65, TAIL_CALL,
  POS(673, 18),
  POS(672, 11),
  POS(671, 7)
};

static TAB_NUM t_lambda_57[] = {
  2, // locals
  0, // parameters
  // is_an_empty_entry
  var_is_an_empty_entry, 1, var_650_10_node_2, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_58, 1, LOCAL(2),
  // node_2.is_an_empty_entry
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(674, 18),
  POS(672, 11),
  POS(674, 11)
};

static TAB_NUM t_lambda_58[] = {
  2, // locals
  0, // parameters
  // is_an_empty_entry
  var_is_an_empty_entry, 1, var_651_10_node_3, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_59, 1, LOCAL(2),
  // node_3.is_an_empty_entry
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(675, 18),
  POS(672, 11),
  POS(675, 11)
};

static TAB_NUM t_lambda_59[] = {
  2, // locals
  0, // parameters
  // is_an_empty_entry
  var_is_an_empty_entry, 1, var_652_10_node_4, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_60, 1, LOCAL(2),
  // node_4.is_an_empty_entry
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(676, 18),
  POS(672, 11),
  POS(676, 11)
};

static TAB_NUM t_lambda_60[] = {
  2, // locals
  0, // parameters
  // is_an_empty_entry
  var_is_an_empty_entry, 1, var_653_10_node_5, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_61, 1, LOCAL(2),
  // node_5.is_an_empty_entry
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(677, 18),
  POS(672, 11),
  POS(677, 11)
};

static TAB_NUM t_lambda_61[] = {
  2, // locals
  0, // parameters
  // is_an_empty_entry
  var_is_an_empty_entry, 1, var_654_10_node_6, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_62, 1, LOCAL(2),
  // node_6.is_an_empty_entry
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(678, 18),
  POS(672, 11),
  POS(678, 11)
};

static TAB_NUM t_lambda_62[] = {
  2, // locals
  0, // parameters
  // is_an_empty_entry
  var_is_an_empty_entry, 1, var_655_10_node_7, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_63, 1, LOCAL(2),
  // node_7.is_an_empty_entry
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(679, 18),
  POS(672, 11),
  POS(679, 11)
};

static TAB_NUM t_lambda_63[] = {
  1, // locals
  0, // parameters
  // is_an_empty_entry
  var_is_an_empty_entry, 1, var_656_10_node_8, 1, LOCAL(1),
  // node_8.is_an_empty_entry
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(680, 18),
  POS(680, 11)
};

static TAB_NUM t_lambda_64[] = {
  0, // locals
  0, // parameters
  //  empty_hash_table_entry deleted
  LET, 2, var_empty_hash_table_entry, var_657_1_deleted, TAIL_CALL,
  POS(681, 11)
};

static TAB_NUM t_lambda_65[] = {
  2, // locals
  0, // parameters
  // list
  var_list, 8, var_649_10_node_1, var_650_10_node_2, var_651_10_node_3, var_652_10_node_4, var_653_10_node_5, var_654_10_node_6, var_655_10_node_7, var_656_10_node_8, 1, LOCAL(1),
  // new
  var_new, 2, var_hash_table_node, LOCAL(1), 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), var_657_1_deleted, TAIL_CALL,
  POS(685, 13),
  POS(683, 11),
  POS(682, 11)
};

static TAB_NUM t_func_hash_table_node___filter_2[] = {
  14, // locals
  1, // parameters
  var_696_28_self,
  // self(1)
  var_696_28_self, 1, num_1, 1, LOCAL(1),
  // filter_2 $node_1 $deleted_1 self(1)
  var_filter_2, 1, LOCAL(1), 2, var_697_10_node_1, LOCAL(7),
  // self(2)
  var_696_28_self, 1, num_2, 1, LOCAL(1),
  // filter_2 $node_2 $deleted_2 self(2)
  var_filter_2, 1, LOCAL(1), 2, var_698_10_node_2, LOCAL(8),
  // self(3)
  var_696_28_self, 1, num_3, 1, LOCAL(1),
  // filter_2 $node_3 $deleted_3 self(3)
  var_filter_2, 1, LOCAL(1), 2, var_699_10_node_3, LOCAL(9),
  // self(4)
  var_696_28_self, 1, num_4, 1, LOCAL(1),
  // filter_2 $node_4 $deleted_4 self(4)
  var_filter_2, 1, LOCAL(1), 2, var_700_10_node_4, LOCAL(10),
  // self(5)
  var_696_28_self, 1, num_5, 1, LOCAL(1),
  // filter_2 $node_5 $deleted_5 self(5)
  var_filter_2, 1, LOCAL(1), 2, var_701_10_node_5, LOCAL(11),
  // self(6)
  var_696_28_self, 1, num_6, 1, LOCAL(1),
  // filter_2 $node_6 $deleted_6 self(6)
  var_filter_2, 1, LOCAL(1), 2, var_702_10_node_6, LOCAL(12),
  // self(7)
  var_696_28_self, 1, num_7, 1, LOCAL(1),
  // filter_2 $node_7 $deleted_7 self(7)
  var_filter_2, 1, LOCAL(1), 2, var_703_10_node_7, LOCAL(13),
  // self(8)
  var_696_28_self, 1, num_8, 1, LOCAL(1),
  // filter_2 $node_8 $deleted_8 self(8)
  var_filter_2, 1, LOCAL(1), 2, var_704_10_node_8, LOCAL(14),
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
  var_std__plus, 2, LOCAL(6), LOCAL(14), 1, var_705_1_deleted,
  // deleted == 0
  var_std__equal, 2, var_705_1_deleted, num_0, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_66, lambda_67, TAIL_CALL,
  POS(697, 31),
  POS(697, 3),
  POS(698, 31),
  POS(698, 3),
  POS(699, 31),
  POS(699, 3),
  POS(700, 31),
  POS(700, 3),
  POS(701, 31),
  POS(701, 3),
  POS(702, 31),
  POS(702, 3),
  POS(703, 31),
  POS(703, 3),
  POS(704, 31),
  POS(704, 3),
  POS(706, 6),
  POS(706, 6),
  POS(706, 6),
  POS(706, 6),
  POS(706, 6),
  POS(706, 6),
  POS(705, 3),
  POS(716, 5),
  POS(715, 3)
};

static TAB_NUM t_lambda_66[] = {
  0, // locals
  0, // parameters
  //  self 0
  LET, 2, var_696_28_self, num_0, TAIL_CALL,
  POS(717, 7)
};

static TAB_NUM t_lambda_67[] = {
  2, // locals
  0, // parameters
  // is_an_empty_entry
  var_is_an_empty_entry, 1, var_697_10_node_1, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_68, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_75, lambda_76, TAIL_CALL,
  POS(721, 18),
  POS(720, 11),
  POS(719, 7)
};

static TAB_NUM t_lambda_68[] = {
  2, // locals
  0, // parameters
  // is_an_empty_entry
  var_is_an_empty_entry, 1, var_698_10_node_2, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_69, 1, LOCAL(2),
  // node_2.is_an_empty_entry
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(722, 18),
  POS(720, 11),
  POS(722, 11)
};

static TAB_NUM t_lambda_69[] = {
  2, // locals
  0, // parameters
  // is_an_empty_entry
  var_is_an_empty_entry, 1, var_699_10_node_3, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_70, 1, LOCAL(2),
  // node_3.is_an_empty_entry
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(723, 18),
  POS(720, 11),
  POS(723, 11)
};

static TAB_NUM t_lambda_70[] = {
  2, // locals
  0, // parameters
  // is_an_empty_entry
  var_is_an_empty_entry, 1, var_700_10_node_4, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_71, 1, LOCAL(2),
  // node_4.is_an_empty_entry
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(724, 18),
  POS(720, 11),
  POS(724, 11)
};

static TAB_NUM t_lambda_71[] = {
  2, // locals
  0, // parameters
  // is_an_empty_entry
  var_is_an_empty_entry, 1, var_701_10_node_5, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_72, 1, LOCAL(2),
  // node_5.is_an_empty_entry
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(725, 18),
  POS(720, 11),
  POS(725, 11)
};

static TAB_NUM t_lambda_72[] = {
  2, // locals
  0, // parameters
  // is_an_empty_entry
  var_is_an_empty_entry, 1, var_702_10_node_6, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_73, 1, LOCAL(2),
  // node_6.is_an_empty_entry
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(726, 18),
  POS(720, 11),
  POS(726, 11)
};

static TAB_NUM t_lambda_73[] = {
  2, // locals
  0, // parameters
  // is_an_empty_entry
  var_is_an_empty_entry, 1, var_703_10_node_7, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_74, 1, LOCAL(2),
  // node_7.is_an_empty_entry
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(727, 18),
  POS(720, 11),
  POS(727, 11)
};

static TAB_NUM t_lambda_74[] = {
  1, // locals
  0, // parameters
  // is_an_empty_entry
  var_is_an_empty_entry, 1, var_704_10_node_8, 1, LOCAL(1),
  // node_8.is_an_empty_entry
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(728, 18),
  POS(728, 11)
};

static TAB_NUM t_lambda_75[] = {
  0, // locals
  0, // parameters
  //  empty_hash_table_entry deleted
  LET, 2, var_empty_hash_table_entry, var_705_1_deleted, TAIL_CALL,
  POS(729, 11)
};

static TAB_NUM t_lambda_76[] = {
  2, // locals
  0, // parameters
  // list
  var_list, 8, var_697_10_node_1, var_698_10_node_2, var_699_10_node_3, var_700_10_node_4, var_701_10_node_5, var_702_10_node_6, var_703_10_node_7, var_704_10_node_8, 1, LOCAL(1),
  // new
  var_new, 2, var_hash_table_node, LOCAL(1), 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), var_705_1_deleted, TAIL_CALL,
  POS(733, 13),
  POS(731, 11),
  POS(730, 11)
};

static TAB_NUM t_func_std_types__hash_table___filter[] = {
  2, // locals
  2, // parameters
  var_757_0_self,
  var_758_0_function,
  // length_of(self) == 0
  var_length_of, 1, var_757_0_self, 1, LOCAL(1),
  // length_of(self) == 0
  var_std__equal, 2, LOCAL(1), num_0, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_77, lambda_78, TAIL_CALL,
  POS(761, 5),
  POS(761, 5),
  POS(760, 3)
};

static TAB_NUM t_lambda_77[] = {
  0, // locals
  0, // parameters
  //  empty_hash_table
  LET, 1, var_empty_hash_table, TAIL_CALL,
  POS(762, 7)
};

static TAB_NUM t_lambda_78[] = {
  2, // locals
  0, // parameters
  // !filter_function function
  LET, 1, var_758_0_function, 1, var_filter_function,
  // parameter_count_of(function) == 2:
  var_parameter_count_of, 1, var_758_0_function, 1, LOCAL(1),
  // parameter_count_of(function) == 2:
  var_std__equal, 2, LOCAL(1), num_2, 1, LOCAL(2),
  // if $new_contents $deleted
  var_if, 3, LOCAL(2), lambda_79, lambda_80, 2, var_765_4_new_contents, var_765_18_deleted,
  // deleted == 0
  var_std__equal, 2, var_765_18_deleted, num_0, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_81, lambda_82, TAIL_CALL,
  POS(764, 7),
  POS(766, 9),
  POS(766, 9),
  POS(765, 7),
  POS(771, 9),
  POS(770, 7)
};

static TAB_NUM t_lambda_79[] = {
  1, // locals
  0, // parameters
  // contents_of(self)
  var_contents_of, 1, var_757_0_self, 1, LOCAL(1),
  // filter_2 contents_of(self)
  var_filter_2, 1, LOCAL(1), TAIL_CALL,
  POS(767, 20),
  POS(767, 11)
};

static TAB_NUM t_lambda_80[] = {
  1, // locals
  0, // parameters
  // contents_of(self)
  var_contents_of, 1, var_757_0_self, 1, LOCAL(1),
  // filter_1 contents_of(self)
  var_filter_1, 1, LOCAL(1), TAIL_CALL,
  POS(769, 20),
  POS(769, 11)
};

static TAB_NUM t_lambda_81[] = {
  0, // locals
  0, // parameters
  //  self
  LET, 1, var_757_0_self, TAIL_CALL,
  POS(772, 11)
};

static TAB_NUM t_lambda_82[] = {
  3, // locals
  0, // parameters
  // length_of(self)-deleted
  var_length_of, 1, var_757_0_self, 1, LOCAL(1),
  // length_of(self)-deleted
  var_std__minus, 2, LOCAL(1), var_765_18_deleted, 1, LOCAL(2),
  // self
  LET, -2, var_757_0_self, var_length_of, LOCAL(2), var_contents_of, var_765_4_new_contents, LOCAL(3),
  // 
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(775, 24),
  POS(775, 24),
  POS(774, 11),
  POS(773, 11)
};

static TAB_NUM t_func_std__hash_table[] = {
  1, // locals
  -1, // parameters
  REST_PARAMETER, LOCAL(1), // 782_0_pairs
  // to_hash_table pairs
  var_to_hash_table, 1, LOCAL(1), TAIL_CALL,
  POS(784, 3)
};

static TAB_NUM t_func_std_types__list___to_hash_table[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 794_0_items
  // $table empty_hash_table
  LET, 1, var_empty_hash_table, 1, var_796_1_table,
  // for_each items
  var_for_each, 3, LOCAL(1), lambda_83, lambda_84, TAIL_CALL,
  POS(796, 3),
  POS(797, 3)
};

static TAB_NUM t_lambda_83[] = {
  3, // locals
  1, // parameters
  LOCAL(1), // 798_3_item
  // item $key $value
  LOCAL(1), 0, 2, LOCAL(2), LOCAL(3),
  // table(key) value
  var_796_1_table, 2, LOCAL(2), LOCAL(3), 1, var_796_1_table,
  // next
  var_next, 0, TAIL_CALL,
  POS(799, 7),
  POS(800, 8),
  POS(801, 7)
};

static TAB_NUM t_lambda_84[] = {
  0, // locals
  0, // parameters
  //  table
  LET, 1, var_796_1_table, TAIL_CALL,
  POS(802, 7)
};

static int tuple_75_0_arguments[] = {
  -var_undefined, -var_undefined, -var_undefined
};

static int list_81_0_arguments[] = {
  -var_empty_hash_table_entry, -var_empty_hash_table_entry, -var_empty_hash_table_entry, -var_empty_hash_table_entry, -var_empty_hash_table_entry, -var_empty_hash_table_entry, -var_empty_hash_table_entry, -var_empty_hash_table_entry
};

static FUNKY_CONSTANT constants_table[] = {
  {FLT_POSITIVE_INT64, 0, {.value = 0}},
  {FLT_TUPLE, 3, {.arguments = tuple_75_0_arguments}},
  {FLT_LIST, 8, {.arguments = list_81_0_arguments}},
  {FLT_UNIQUE, 0, {.str_8 = "NONE"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__hash_table}},
  {FLT_POSITIVE_INT64, 0, {.value = 0xc0000000}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_value_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_3}},
  {FLT_POSITIVE_INT64, 0, {.value = 1}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_4}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_5}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_6}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_7}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_empty_hash_table_entry___retrieve}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_hash_table_leaf___retrieve}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_8}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_9}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_empty_collision_list_entry___retrieve}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_collision_list_entry___retrieve}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_10}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_11}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_hash_table_node___retrieve}},
  {FLT_POSITIVE_INT64, 0, {.value = 7}},
  {FLT_POSITIVE_INT64, 0, {.value = 3}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_empty_hash_table_entry___insert}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_12}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_13}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_hash_table_leaf___insert}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_14}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_15}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_empty_collision_list_entry___insert}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_collision_list_entry___insert}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_hash_table_node___insert}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_empty_hash_table_entry___delete}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_hash_table_leaf___delete}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_16}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_17}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_empty_collision_list_entry___delete}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_collision_list_entry___delete}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_18}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_19}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_hash_table_node___delete}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_20}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_21}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_22}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_23}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_empty_hash_table_entry___for_each_1}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_empty_hash_table_entry___for_each_2}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_collision_list_entry___for_each_1}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_break}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_next}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_basic_loopsself_is_an_empty_entry}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_24}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_collision_list_entry___for_each_2}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2_break}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2_next}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2_basic_loopsself_is_an_empty_entry}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_25}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_hash_table_leaf___for_each_1}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_hash_table_leaf___for_each_2}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_hash_table_node___for_each_1}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_3_break}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_3_next}},
  {FLT_POSITIVE_INT64, 0, {.value = 8}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_26}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_27}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_hash_table_node___for_each_2}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_4_break}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_4_next}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_28}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_29}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__hash_table___for_each}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_5_break}},
  {FLT_POSITIVE_INT64, 0, {.value = 2}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_30}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_31}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_empty_hash_table_entry___map_1}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_empty_hash_table_entry___map_2}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_hash_table_leaf___map_1}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_hash_table_leaf___map_2}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_empty_collision_list_entry___map_1}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_empty_collision_list_entry___map_2}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_collision_list_entry___map_1}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_collision_list_entry___map_2}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_hash_table_node___map_1}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_hash_table_node___map_2}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__hash_table___map}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_32}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_33}},
  {FLT_UNIQUE, 0, {.str_8 = "UNIT"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_empty_hash_table_entry___reduce_1}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_hash_table_leaf___reduce_1}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_empty_collision_list_entry___reduce_1}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_collision_list_entry___reduce_1}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_hash_table_node___reduce_1}},
  {FLT_POSITIVE_INT64, 0, {.value = 4}},
  {FLT_POSITIVE_INT64, 0, {.value = 5}},
  {FLT_POSITIVE_INT64, 0, {.value = 6}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_my_reduce}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_34}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_35}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_36}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_37}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__hash_table___reduce}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_38}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_39}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_empty_hash_table_entry___map_reduce_1}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_empty_hash_table_entry___map_reduce_2}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_hash_table_leaf___map_reduce_1}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_hash_table_leaf___map_reduce_2}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_empty_collision_list_entry___map_reduce_1}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_empty_collision_list_entry___map_reduce_2}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_collision_list_entry___map_reduce_1}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_collision_list_entry___map_reduce_2}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_hash_table_node___map_reduce_1}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_hash_table_node___map_reduce_2}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__hash_table___map_reduce}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_40}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_41}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_42}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_43}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_empty_hash_table_entry___filter_1}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_empty_hash_table_entry___filter_2}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_hash_table_leaf___filter_1}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_44}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_45}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_hash_table_leaf___filter_2}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_46}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_47}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_empty_collision_list_entry___filter_1}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_empty_collision_list_entry___filter_2}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_collision_list_entry___filter_1}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_filter_functionmy_value}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_48}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_49}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_50}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_collision_list_entry___filter_2}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_51}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_52}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_53}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_54}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_hash_table_node___filter_1}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_55}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_56}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_57}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_58}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_59}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_60}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_61}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_62}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_63}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_64}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_65}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_hash_table_node___filter_2}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_66}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_67}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_68}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_69}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_70}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_71}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_72}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_73}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_74}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_75}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_76}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__hash_table___filter}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_77}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_78}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_79}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_80}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_81}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_82}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__hash_table}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__list___to_hash_table}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_83}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_84}},
  {FLT_STRING_8, 10, {.str_8 = "hash_table"}}
};

static ATTRIBUTE_DEFINITION std_types__object__attributes[] = {
  {-var_is_a_hash_table, -var_false},
  {-var_is_an_empty_entry, -var_false}
};

static ATTRIBUTE_DEFINITION std_types__hash_table__attributes[] = {
  {-var_is_a_hash_table, -var_true},
  {-var_contents_of, -var_empty_hash_table_entry},
  {-var_length_of, -num_0},
  {TYPE_FUNCTION, -func_std_types__hash_table},
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
    "is_a_hash_table\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN, 0, 2,
    "object\000std_types", std_types__object__attributes,
    {.position = POS(34, 1)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "is_a_hash_table\000", NULL,
    {.position = POS(34, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "false\000", NULL,
    {.position = POS(34, 36)}
  },
  {
    FOT_DERIVED, 0, 11,
    "hash_table\000std_types", std_types__hash_table__attributes,
    {"table\000std_types"}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "true\000", NULL,
    {.position = POS(35, 40)}
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
    FOT_UNKNOWN, 0, 0,
    "table\000std_types", NULL,
    {.position = POS(44, 24)}
  },
  {
    FOT_DERIVED, 0, 0,
    "empty_hash_table\000std", NULL,
    {"hash_table\000std_types"}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "length_of\000", NULL,
    {.position = POS(69, 24)}
  },
  {
    FOT_INITIALIZED, 0, 12,
    "hash_table_leaf\000", hash_table_leaf__attributes,
    {.const_idx = -tuple_75_0}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "undefined\000", NULL,
    {.position = POS(75, 24)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "tuple\000", NULL,
    {.position = POS(75, 18)}
  },
  {
    FOT_INITIALIZED, 0, 12,
    "collision_list_entry\000", collision_list_entry__attributes,
    {.const_idx = -tuple_75_0}
  },
  {
    FOT_INITIALIZED, 0, 12,
    "hash_table_node\000", hash_table_node__attributes,
    {.const_idx = -list_81_0}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "list\000", NULL,
    {.position = POS(82, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "97_0_myself\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "98_0_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "99_0_value\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "hash\000", NULL,
    {.position = POS(101, 15)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "101_1_hash_index\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "bit_or\000std", NULL,
    {.position = POS(101, 15)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "102_1_contents\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "equal\000std", NULL,
    {.position = POS(104, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_defined\000", NULL,
    {.position = POS(108, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000std", NULL,
    {.position = POS(115, 28)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if\000", NULL,
    {.position = POS(110, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "minus\000std", NULL,
    {.position = POS(124, 28)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "132_30_my_value\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "140_45_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "141_14_my_value\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "141_24_my_link\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "bit_and\000std", NULL,
    {.position = POS(148, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "shift_right\000std", NULL,
    {.position = POS(149, 22)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "153_39_hash_index\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "153_50_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "153_54_value\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "new\000", NULL,
    {.position = POS(156, 8)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "159_26_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "159_31_hash_index\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "159_42_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "159_46_value\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "160_6_my_hash_index\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "160_21_my_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "160_29_my_value\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not\000", NULL,
    {.position = POS(174, 47)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "194_26_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "203_43_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "204_6_my_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "204_14_my_value\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "204_24_my_link\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "213_26_self\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "all_of\000", NULL,
    {.position = POS(220, 9)}
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
    {.position = POS(231, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "break\000", NULL,
    {.position = POS(240, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "self\000basic_loops", NULL,
    {.position = POS(241, 7)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "saved_context_of\000basic_loops", NULL,
    {.position = POS(246, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "body\000basic_loops", NULL,
    {.position = POS(263, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "from\000basic_loops", NULL,
    {.position = POS(311, 7)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "326_1_idx\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "less\000std", NULL,
    {.position = POS(328, 14)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not\000std", NULL,
    {.position = POS(328, 14)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "359_1_idx\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "for_each\000", NULL,
    {.position = POS(372, 24)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "374_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "376_0_finally\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "finally\000basic_loops", NULL,
    {.position = POS(383, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "parameter_count_of\000", NULL,
    {.position = POS(399, 5)}
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
    {.position = POS(434, 12)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "447_0_self\000", NULL
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
    "490_13_left\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "490_18_right\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "reduce\000", NULL,
    {.position = POS(500, 24)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "512_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "513_0_function\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "514_0_unit\000", NULL
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
    {.position = POS(572, 24)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "582_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "583_0_map_function\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "584_0_reduce_function\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "append\000", NULL,
    {.position = POS(584, 23)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "585_0_unit\000", NULL
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
    "609_28_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "616_28_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "626_33_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "627_6_my_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "627_14_my_value\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "628_10_new_link\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "628_20_deleted\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "637_33_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "638_6_my_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "638_14_my_value\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "639_10_new_link\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "639_20_deleted\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "648_28_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "649_10_node_1\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "650_10_node_2\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "651_10_node_3\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "652_10_node_4\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "653_10_node_5\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "654_10_node_6\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "655_10_node_7\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "656_10_node_8\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "657_1_deleted\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "and\000std", NULL,
    {.position = POS(672, 11)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "696_28_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "697_10_node_1\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "698_10_node_2\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "699_10_node_3\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "700_10_node_4\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "701_10_node_5\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "702_10_node_6\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "703_10_node_7\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "704_10_node_8\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "705_1_deleted\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "filter\000", NULL,
    {.position = POS(744, 24)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "757_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "758_0_function\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_hash_table\000", NULL,
    {.position = POS(762, 8)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "765_4_new_contents\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "765_18_deleted\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "hash_table\000std", NULL,
    {.const_idx = -func_std__hash_table}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "to_hash_table\000", NULL,
    {.position = POS(784, 3)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "list\000std_types", std_types__list__attributes,
    {.position = POS(786, 1)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "796_1_table\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "serialization_tag_of\000", NULL,
    {.position = POS(804, 24)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "empty_collection_of\000", NULL,
    {.position = POS(805, 24)}
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
  .feature_flags = FEAT_POSITIONS,
  .marker = 0,
  0, // number of required modules
  0, // number of defined namespaces
  1, // number of used namespaces
  179, // number of constants
  147, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  constants_table,
  variables_table,
};
