#include <stddef.h>
#include <stdint.h>

#include "runtime/common.h"
#include "runtime/builtins.h"
#include "runtime/fko.h"
#include "runtime/memory.h"

enum {
  num_0 = -1,
  tuple_73_0 = -2,
  list_79_0 = -3,
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
  lambda_83 = -176,
  lambda_84 = -177,
  str_hash_table = -178
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
  var_std_types__table, // extern
  var_std__empty_hash_table, // derived
  var_length_of, // extern polymorphic
  var_hash_table_leaf, // initialized compound
  var_undefined, // extern
  var_tuple, // extern
  var_collision_list_entry, // initialized compound
  var_hash_table_node, // initialized compound
  var_list, // extern
  var_95_0_myself, // dynamic
  var_96_0_key, // dynamic
  var_97_0_value, // dynamic
  var_hash, // extern
  var_99_1_hash_index, // dynamic
  var_std__bit_or, // extern
  var_100_1_contents, // dynamic
  var_std__equal, // extern
  var_is_defined, // extern
  var_std__plus, // extern
  var_if, // extern
  var_std__minus, // extern
  var_130_30_my_value, // dynamic
  var_138_45_key, // dynamic
  var_139_14_my_value, // dynamic
  var_139_24_my_link, // dynamic
  var_std__bit_and, // extern
  var_std__shift_right, // extern
  var_151_39_hash_index, // dynamic
  var_151_50_key, // dynamic
  var_151_54_value, // dynamic
  var_new, // extern
  var_157_26_self, // dynamic
  var_157_31_hash_index, // dynamic
  var_157_42_key, // dynamic
  var_157_46_value, // dynamic
  var_158_6_my_hash_index, // dynamic
  var_158_21_my_key, // dynamic
  var_158_29_my_value, // dynamic
  var_not, // extern
  var_192_26_self, // dynamic
  var_201_43_key, // dynamic
  var_202_6_my_key, // dynamic
  var_202_14_my_value, // dynamic
  var_202_24_my_link, // dynamic
  var_211_26_self, // dynamic
  var_all_of, // extern
  var_for_each_1, // attribute
  var_for_each_2, // attribute
  var_next, // extern
  var_break, // extern
  var_basic_loops__self, // extern
  var_basic_loops__saved_context_of, // extern polymorphic
  var_basic_loops__body, // extern
  var_basic_loops__from, // extern
  var_324_1_idx, // dynamic
  var_std__less, // extern
  var_std__not, // extern
  var_357_1_idx, // dynamic
  var_for_each, // extern polymorphic
  var_372_0_self, // dynamic
  var_374_0_finally, // dynamic
  var_basic_loops__finally, // extern
  var_parameter_count_of, // extern
  var_map_1, // attribute
  var_map_2, // attribute
  var_mapping_function, // derived
  var_map, // extern polymorphic
  var_445_0_self, // dynamic
  var_reduce_1, // attribute
  var_reduction_function, // derived
  var_488_13_left, // dynamic
  var_488_18_right, // dynamic
  var_reduce, // extern polymorphic
  var_510_0_self, // dynamic
  var_511_0_function, // dynamic
  var_512_0_unit, // dynamic
  var_map_reduce_1, // attribute
  var_map_reduce_2, // attribute
  var_map_reduce, // extern polymorphic
  var_580_0_self, // dynamic
  var_581_0_map_function, // dynamic
  var_582_0_reduce_function, // dynamic
  var_append, // extern
  var_583_0_unit, // dynamic
  var_filter_function, // derived
  var_filter_1, // attribute
  var_filter_2, // attribute
  var_607_28_self, // dynamic
  var_614_28_self, // dynamic
  var_624_33_self, // dynamic
  var_625_6_my_key, // dynamic
  var_625_14_my_value, // dynamic
  var_626_10_new_link, // dynamic
  var_626_20_deleted, // dynamic
  var_635_33_self, // dynamic
  var_636_6_my_key, // dynamic
  var_636_14_my_value, // dynamic
  var_637_10_new_link, // dynamic
  var_637_20_deleted, // dynamic
  var_646_28_self, // dynamic
  var_647_10_node_1, // dynamic
  var_648_10_node_2, // dynamic
  var_649_10_node_3, // dynamic
  var_650_10_node_4, // dynamic
  var_651_10_node_5, // dynamic
  var_652_10_node_6, // dynamic
  var_653_10_node_7, // dynamic
  var_654_10_node_8, // dynamic
  var_655_1_deleted, // dynamic
  var_std__and, // extern
  var_694_28_self, // dynamic
  var_695_10_node_1, // dynamic
  var_696_10_node_2, // dynamic
  var_697_10_node_3, // dynamic
  var_698_10_node_4, // dynamic
  var_699_10_node_5, // dynamic
  var_700_10_node_6, // dynamic
  var_701_10_node_7, // dynamic
  var_702_10_node_8, // dynamic
  var_703_1_deleted, // dynamic
  var_filter, // extern polymorphic
  var_755_0_self, // dynamic
  var_756_0_function, // dynamic
  var_empty_hash_table, // extern
  var_763_4_new_contents, // dynamic
  var_763_18_deleted, // dynamic
  var_std__hash_table, // initialized
  var_782_1_table, // dynamic
  var_serialization_tag_of, // extern polymorphic
  var_empty_collection_of, // extern polymorphic
  var__END
};


static TAB_NUM t_func_std_types__hash_table[] = {
  1, // locals
  -3, // parameters
  MYSELF_PARAMETER, var_95_0_myself,
  MANDATORY_PARAMETER, var_96_0_key,
  uni_NONE, var_97_0_value,
  // hash(key) | 0xc000'0000 # add sentinel hash index (3)
  var_hash, 1, var_96_0_key, 1, LOCAL(1),
  // $hash_index hash(key) | 0xc000'0000 # add sentinel hash index (3)
  var_std__bit_or, 2, LOCAL(1), num_0xc0000000, 1, var_99_1_hash_index,
  // $contents contents_of(myself)
  var_contents_of, 1, var_95_0_myself, 1, var_100_1_contents,
  // NONE == value
  var_std__equal, 2, uni_NONE, var_97_0_value, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1, lambda_2, TAIL_CALL,
  POS(99, 15),
  POS(99, 3),
  POS(100, 3),
  POS(102, 5),
  POS(101, 3)
};

static TAB_NUM t_lambda_1[] = {
  1, // locals
  0, // parameters
  // retrieve(contents hash_index key)
  var_retrieve, 3, var_100_1_contents, var_99_1_hash_index, var_96_0_key, 1, LOCAL(1),
  //  retrieve(contents hash_index key)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(103, 8),
  POS(103, 7)
};

static TAB_NUM t_lambda_2[] = {
  1, // locals
  0, // parameters
  // is_defined:
  var_is_defined, 1, var_97_0_value, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_value_is_defined, lambda_5, TAIL_CALL,
  POS(106, 15),
  POS(105, 7)
};

static TAB_NUM t_lambda_value_is_defined[] = {
  1, // locals
  0, // parameters
  // insert &contents $success hash_index key value
  var_insert, 4, var_100_1_contents, var_99_1_hash_index, var_96_0_key, var_97_0_value, 2, var_100_1_contents, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_3, lambda_4, TAIL_CALL,
  POS(107, 11),
  POS(108, 11)
};

static TAB_NUM t_lambda_3[] = {
  3, // locals
  0, // parameters
  // length_of(myself)+1
  var_length_of, 1, var_95_0_myself, 1, LOCAL(1),
  // length_of(myself)+1
  var_std__plus, 2, LOCAL(1), num_1, 1, LOCAL(2),
  // myself
  LET, -2, var_95_0_myself, var_contents_of, var_100_1_contents, var_length_of, LOCAL(2), LOCAL(3),
  // 
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(113, 28),
  POS(113, 28),
  POS(111, 15),
  POS(110, 15)
};

static TAB_NUM t_lambda_4[] = {
  1, // locals
  0, // parameters
  // .contents_of contents)
  LET, -1, var_95_0_myself, var_contents_of, var_100_1_contents, LOCAL(1),
  //  myself(.contents_of contents)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(114, 23),
  POS(114, 15)
};

static TAB_NUM t_lambda_5[] = {
  1, // locals
  0, // parameters
  // delete &contents $success hash_index key
  var_delete, 3, var_100_1_contents, var_99_1_hash_index, var_96_0_key, 2, var_100_1_contents, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_6, lambda_7, TAIL_CALL,
  POS(116, 11),
  POS(117, 11)
};

static TAB_NUM t_lambda_6[] = {
  3, // locals
  0, // parameters
  // length_of(myself)-1
  var_length_of, 1, var_95_0_myself, 1, LOCAL(1),
  // length_of(myself)-1
  var_std__minus, 2, LOCAL(1), num_1, 1, LOCAL(2),
  // myself
  LET, -2, var_95_0_myself, var_contents_of, var_100_1_contents, var_length_of, LOCAL(2), LOCAL(3),
  // 
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(122, 28),
  POS(122, 28),
  POS(120, 15),
  POS(119, 15)
};

static TAB_NUM t_lambda_7[] = {
  0, // locals
  0, // parameters
  //  myself
  LET, 1, var_95_0_myself, TAIL_CALL,
  POS(123, 15)
};

static TAB_NUM t_func_empty_hash_table_entry___retrieve[] = {
  1, // locals
  3, // parameters
  LOCAL(1),
  LOCAL(1),
  LOCAL(1),
  // -> undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(127, 60)
};

static TAB_NUM t_func_hash_table_leaf___retrieve[] = {
  4, // locals
  3, // parameters
  LOCAL(2), // 129_28_self
  LOCAL(1),
  LOCAL(3), // 129_45_key
  // self $_my_hash_index $my_key $my_value
  LOCAL(2), 0, 3, LOCAL(1), LOCAL(4), var_130_30_my_value,
  // key == my_key
  var_std__equal, 2, LOCAL(3), LOCAL(4), 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_8, lambda_9, TAIL_CALL,
  POS(130, 3),
  POS(132, 5),
  POS(131, 3)
};

static TAB_NUM t_lambda_8[] = {
  0, // locals
  0, // parameters
  //  my_value
  LET, 1, var_130_30_my_value, TAIL_CALL,
  POS(133, 7)
};

static TAB_NUM t_lambda_9[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(134, 7)
};

static TAB_NUM t_func_empty_collision_list_entry___retrieve[] = {
  1, // locals
  3, // parameters
  LOCAL(1),
  LOCAL(1),
  LOCAL(1),
  // -> undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(136, 59)
};

static TAB_NUM t_func_collision_list_entry___retrieve[] = {
  3, // locals
  3, // parameters
  LOCAL(2), // 138_33_self
  LOCAL(1),
  var_138_45_key,
  // self $my_key $my_value $my_link
  LOCAL(2), 0, 3, LOCAL(3), var_139_14_my_value, var_139_24_my_link,
  // key == my_key
  var_std__equal, 2, var_138_45_key, LOCAL(3), 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_10, lambda_11, TAIL_CALL,
  POS(139, 3),
  POS(141, 5),
  POS(140, 3)
};

static TAB_NUM t_lambda_10[] = {
  0, // locals
  0, // parameters
  //  my_value
  LET, 1, var_139_14_my_value, TAIL_CALL,
  POS(142, 7)
};

static TAB_NUM t_lambda_11[] = {
  0, // locals
  0, // parameters
  // retrieve my_link undefined key
  var_retrieve, 3, var_139_24_my_link, var_undefined, var_138_45_key, TAIL_CALL,
  POS(143, 7)
};

static TAB_NUM t_func_hash_table_node___retrieve[] = {
  6, // locals
  3, // parameters
  LOCAL(3), // 145_28_self
  LOCAL(4), // 145_33_hash_index
  LOCAL(5), // 145_44_key
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
  POS(146, 9),
  POS(146, 3),
  POS(147, 12),
  POS(147, 22),
  POS(147, 3)
};

static TAB_NUM t_func_empty_hash_table_entry___insert[] = {
  1, // locals
  4, // parameters
  LOCAL(1),
  var_151_39_hash_index,
  var_151_50_key,
  var_151_54_value,
  // hash_index == 3
  var_std__equal, 2, var_151_39_hash_index, num_3, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_12, lambda_13, TAIL_CALL,
  POS(153, 5),
  POS(152, 3)
};

static TAB_NUM t_lambda_12[] = {
  1, // locals
  0, // parameters
  // new(collision_list_entry key value empty_collision_list_entry) true
  var_new, 4, var_collision_list_entry, var_151_50_key, var_151_54_value, var_empty_collision_list_entry, 1, LOCAL(1),
  //  new(collision_list_entry key value empty_collision_list_entry) true
  LET, 2, LOCAL(1), var_true, TAIL_CALL,
  POS(154, 8),
  POS(154, 7)
};

static TAB_NUM t_lambda_13[] = {
  1, // locals
  0, // parameters
  // new(hash_table_leaf hash_index key value) true
  var_new, 4, var_hash_table_leaf, var_151_39_hash_index, var_151_50_key, var_151_54_value, 1, LOCAL(1),
  //  new(hash_table_leaf hash_index key value) true
  LET, 2, LOCAL(1), var_true, TAIL_CALL,
  POS(155, 8),
  POS(155, 7)
};

static TAB_NUM t_func_hash_table_leaf___insert[] = {
  1, // locals
  4, // parameters
  var_157_26_self,
  var_157_31_hash_index,
  var_157_42_key,
  var_157_46_value,
  // self $my_hash_index $my_key $my_value
  var_157_26_self, 0, 3, var_158_6_my_hash_index, var_158_21_my_key, var_158_29_my_value,
  // key == my_key
  var_std__equal, 2, var_157_42_key, var_158_21_my_key, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_14, lambda_15, TAIL_CALL,
  POS(158, 3),
  POS(160, 5),
  POS(159, 3)
};

static TAB_NUM t_lambda_14[] = {
  1, // locals
  0, // parameters
  // new(self my_hash_index key value) false
  var_new, 4, var_157_26_self, var_158_6_my_hash_index, var_157_42_key, var_157_46_value, 1, LOCAL(1),
  //  new(self my_hash_index key value) false
  LET, 2, LOCAL(1), var_false, TAIL_CALL,
  POS(161, 8),
  POS(161, 7)
};

static TAB_NUM t_lambda_15[] = {
  2, // locals
  0, // parameters
  // insert hash_table_node $new_node $_did_insert
  var_insert, 4, var_hash_table_node, var_158_6_my_hash_index, var_158_21_my_key, var_158_29_my_value, 2, LOCAL(2), LOCAL(1),
  // insert new_node hash_index key value
  var_insert, 4, LOCAL(2), var_157_31_hash_index, var_157_42_key, var_157_46_value, TAIL_CALL,
  POS(163, 7),
  POS(165, 7)
};

static TAB_NUM t_func_empty_collision_list_entry___insert[] = {
  4, // locals
  4, // parameters
  LOCAL(2), // 167_37_self
  LOCAL(1),
  LOCAL(3), // 167_49_key
  LOCAL(4), // 167_53_value
  // new(collision_list_entry key value self) true
  var_new, 4, var_collision_list_entry, LOCAL(3), LOCAL(4), LOCAL(2), 1, LOCAL(1),
  // -> new(collision_list_entry key value self) true
  LET, 2, LOCAL(1), var_true, TAIL_CALL,
  POS(168, 6),
  POS(168, 3)
};

static TAB_NUM t_func_collision_list_entry___insert[] = {
  6, // locals
  4, // parameters
  LOCAL(3), // 170_31_self
  LOCAL(1),
  LOCAL(4), // 170_43_key
  LOCAL(5), // 170_47_value
  // delete &self $did_delete undefined key
  var_delete, 3, LOCAL(3), var_undefined, LOCAL(4), 2, LOCAL(3), LOCAL(6),
  // new(collision_list_entry key value self) not(did_delete)
  var_new, 4, var_collision_list_entry, LOCAL(4), LOCAL(5), LOCAL(3), 1, LOCAL(1),
  // not(did_delete)
  var_not, 1, LOCAL(6), 1, LOCAL(2),
  // -> new(collision_list_entry key value self) not(did_delete)
  LET, 2, LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(171, 3),
  POS(172, 6),
  POS(172, 47),
  POS(172, 3)
};

static TAB_NUM t_func_hash_table_node___insert[] = {
  8, // locals
  4, // parameters
  LOCAL(3), // 174_26_self
  LOCAL(4), // 174_31_hash_index
  LOCAL(5), // 174_42_key
  LOCAL(6), // 174_46_value
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
  POS(175, 9),
  POS(175, 3),
  POS(176, 11),
  POS(176, 33),
  POS(176, 3),
  POS(176, 11),
  POS(177, 3)
};

static TAB_NUM t_func_empty_hash_table_entry___delete[] = {
  2, // locals
  3, // parameters
  LOCAL(2), // 190_33_self
  LOCAL(1),
  LOCAL(1),
  // -> self false
  LET, 2, LOCAL(2), var_false, TAIL_CALL,
  POS(190, 57)
};

static TAB_NUM t_func_hash_table_leaf___delete[] = {
  3, // locals
  3, // parameters
  var_192_26_self,
  LOCAL(1),
  LOCAL(2), // 192_43_key
  // self $_my_hash_index $my_key $_my_value
  var_192_26_self, 0, 3, LOCAL(1), LOCAL(3), LOCAL(1),
  // key == my_key
  var_std__equal, 2, LOCAL(2), LOCAL(3), 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_16, lambda_17, TAIL_CALL,
  POS(193, 3),
  POS(195, 5),
  POS(194, 3)
};

static TAB_NUM t_lambda_16[] = {
  0, // locals
  0, // parameters
  //  empty_hash_table_entry true
  LET, 2, var_empty_hash_table_entry, var_true, TAIL_CALL,
  POS(196, 7)
};

static TAB_NUM t_lambda_17[] = {
  0, // locals
  0, // parameters
  //  self false
  LET, 2, var_192_26_self, var_false, TAIL_CALL,
  POS(197, 7)
};

static TAB_NUM t_func_empty_collision_list_entry___delete[] = {
  2, // locals
  3, // parameters
  LOCAL(2), // 199_37_self
  LOCAL(1),
  LOCAL(1),
  // -> self false
  LET, 2, LOCAL(2), var_false, TAIL_CALL,
  POS(199, 56)
};

static TAB_NUM t_func_collision_list_entry___delete[] = {
  2, // locals
  3, // parameters
  LOCAL(2), // 201_31_self
  LOCAL(1),
  var_201_43_key,
  // self $my_key $my_value $my_link
  LOCAL(2), 0, 3, var_202_6_my_key, var_202_14_my_value, var_202_24_my_link,
  // key == my_key
  var_std__equal, 2, var_201_43_key, var_202_6_my_key, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_18, lambda_19, TAIL_CALL,
  POS(202, 3),
  POS(204, 5),
  POS(203, 3)
};

static TAB_NUM t_lambda_18[] = {
  0, // locals
  0, // parameters
  // -> my_link true
  LET, 2, var_202_24_my_link, var_true, TAIL_CALL,
  POS(206, 7)
};

static TAB_NUM t_lambda_19[] = {
  2, // locals
  0, // parameters
  // delete &my_link undefined key $did_delete
  var_delete, 3, var_202_24_my_link, var_undefined, var_201_43_key, 2, var_202_24_my_link, LOCAL(2),
  // new(collision_list_entry my_key my_value my_link) did_delete
  var_new, 4, var_collision_list_entry, var_202_6_my_key, var_202_14_my_value, var_202_24_my_link, 1, LOCAL(1),
  // -> new(collision_list_entry my_key my_value my_link) did_delete
  LET, 2, LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(208, 7),
  POS(209, 10),
  POS(209, 7)
};

static TAB_NUM t_func_hash_table_node___delete[] = {
  6, // locals
  3, // parameters
  var_211_26_self,
  LOCAL(3), // 211_31_hash_index
  LOCAL(4), // 211_42_key
  // hash_index & 7)+1
  var_std__bit_and, 2, LOCAL(3), num_7, 1, LOCAL(1),
  // $idx (hash_index & 7)+1
  var_std__plus, 2, LOCAL(1), num_1, 1, LOCAL(5),
  // self(idx) $success hash_index >> 3 key
  var_211_26_self, 1, LOCAL(5), 1, LOCAL(1),
  // hash_index >> 3 key
  var_std__shift_right, 2, LOCAL(3), num_3, 1, LOCAL(2),
  // delete &self(idx) $success hash_index >> 3 key
  var_delete, 3, LOCAL(1), LOCAL(2), LOCAL(4), 2, LOCAL(1), LOCAL(6),
  // self(idx) $success hash_index >> 3 key
  var_211_26_self, 2, LOCAL(5), LOCAL(1), 1, var_211_26_self,
  // if
  var_if, 3, LOCAL(6), lambda_20, lambda_23, TAIL_CALL,
  POS(212, 9),
  POS(212, 3),
  POS(213, 11),
  POS(213, 30),
  POS(213, 3),
  POS(213, 11),
  POS(214, 3)
};

static TAB_NUM t_lambda_20[] = {
  1, // locals
  0, // parameters
  // all_of(self is_an_empty_entry)
  var_all_of, 2, var_211_26_self, var_is_an_empty_entry, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_21, lambda_22, TAIL_CALL,
  POS(218, 9),
  POS(217, 7)
};

static TAB_NUM t_lambda_21[] = {
  0, // locals
  0, // parameters
  //  empty_hash_table_entry true
  LET, 2, var_empty_hash_table_entry, var_true, TAIL_CALL,
  POS(219, 11)
};

static TAB_NUM t_lambda_22[] = {
  0, // locals
  0, // parameters
  //  self true
  LET, 2, var_211_26_self, var_true, TAIL_CALL,
  POS(220, 11)
};

static TAB_NUM t_lambda_23[] = {
  0, // locals
  0, // parameters
  //  self false
  LET, 2, var_211_26_self, var_false, TAIL_CALL,
  POS(221, 7)
};

static TAB_NUM t_func_empty_hash_table_entry___for_each_1[] = {
  1, // locals
  1, // parameters
  LOCAL(1),
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(229, 3)
};

static TAB_NUM t_func_empty_hash_table_entry___for_each_2[] = {
  1, // locals
  1, // parameters
  LOCAL(1),
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(232, 3)
};

static TAB_NUM t_func_collision_list_entry___for_each_1[] = {
  2, // locals
  1, // parameters
  LOCAL(1), // 234_35_self
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
  POS(235, 3),
  POS(241, 3),
  POS(243, 3),
  POS(249, 4),
  POS(251, 3),
  POS(263, 3)
};

static TAB_NUM t_lambda_break[] = {
  2, // locals
  -1, // parameters
  MYSELF_PARAMETER, LOCAL(2), // 243_9_myself
  // basic_loops::saved_context_of(myself)
  var_basic_loops__saved_context_of, 1, LOCAL(2), 1, LOCAL(1),
  // basic_loops::saved_context_of(myself)
  LOCAL(1), 0, 3, var_next, var_break, var_basic_loops__self,
  // break!
  var_break, 0, IO_TAIL_CALL,
  POS(244, 5),
  POS(244, 5),
  POS(247, 5)
};

static TAB_NUM t_lambda_next[] = {
  1, // locals
  0, // parameters
  // is_an_empty_entry:
  var_is_an_empty_entry, 1, var_basic_loops__self, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_basic_loopsself_is_an_empty_entry, lambda_24, IO_TAIL_CALL,
  POS(253, 25),
  POS(252, 5)
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
  POS(254, 9),
  POS(254, 9),
  POS(257, 9)
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
  POS(259, 9),
  POS(260, 9),
  POS(261, 9)
};

static TAB_NUM t_func_collision_list_entry___for_each_2[] = {
  2, // locals
  1, // parameters
  LOCAL(1), // 265_35_self
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
  POS(266, 3),
  POS(272, 3),
  POS(274, 3),
  POS(280, 4),
  POS(282, 3),
  POS(294, 3)
};

static TAB_NUM t_lambda_2_break[] = {
  2, // locals
  -1, // parameters
  MYSELF_PARAMETER, LOCAL(2), // 274_9_myself
  // basic_loops::saved_context_of(myself)
  var_basic_loops__saved_context_of, 1, LOCAL(2), 1, LOCAL(1),
  // basic_loops::saved_context_of(myself)
  LOCAL(1), 0, 3, var_next, var_break, var_basic_loops__self,
  // break!
  var_break, 0, IO_TAIL_CALL,
  POS(275, 5),
  POS(275, 5),
  POS(278, 5)
};

static TAB_NUM t_lambda_2_next[] = {
  1, // locals
  0, // parameters
  // is_an_empty_entry:
  var_is_an_empty_entry, 1, var_basic_loops__self, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_2_basic_loopsself_is_an_empty_entry, lambda_25, IO_TAIL_CALL,
  POS(284, 25),
  POS(283, 5)
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
  POS(285, 9),
  POS(285, 9),
  POS(288, 9)
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
  POS(290, 9),
  POS(291, 9),
  POS(292, 9)
};

static TAB_NUM t_func_hash_table_leaf___for_each_1[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 296_30_self
  // self $_hash $_key $value
  LOCAL(2), 0, 3, LOCAL(1), LOCAL(1), LOCAL(3),
  // basic_loops::body! value
  var_basic_loops__body, 1, LOCAL(3), IO_TAIL_CALL,
  POS(297, 3),
  POS(298, 3)
};

static TAB_NUM t_func_hash_table_leaf___for_each_2[] = {
  4, // locals
  1, // parameters
  LOCAL(2), // 300_30_self
  // self $_hash $key $value
  LOCAL(2), 0, 3, LOCAL(1), LOCAL(3), LOCAL(4),
  // basic_loops::body! key value
  var_basic_loops__body, 2, LOCAL(3), LOCAL(4), IO_TAIL_CALL,
  POS(301, 3),
  POS(302, 3)
};

static TAB_NUM t_func_hash_table_node___for_each_1[] = {
  2, // locals
  1, // parameters
  LOCAL(1), // 304_30_self
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
  POS(305, 3),
  POS(312, 3),
  POS(313, 3),
  POS(315, 3),
  POS(321, 4),
  POS(323, 3),
  POS(335, 3)
};

static TAB_NUM t_lambda_3_break[] = {
  2, // locals
  -1, // parameters
  MYSELF_PARAMETER, LOCAL(2), // 315_9_myself
  // basic_loops::saved_context_of(myself)
  var_basic_loops__saved_context_of, 1, LOCAL(2), 1, LOCAL(1),
  // basic_loops::saved_context_of(myself)
  LOCAL(1), 0, 4, var_next, var_break, var_basic_loops__from, var_basic_loops__self,
  // break!
  var_break, 0, IO_TAIL_CALL,
  POS(316, 5),
  POS(316, 5),
  POS(319, 5)
};

static TAB_NUM t_lambda_3_next[] = {
  2, // locals
  0, // parameters
  // $idx basic_loops::from
  LET, 1, var_basic_loops__from, 1, var_324_1_idx,
  // 8:
  var_std__less, 2, num_8, var_324_1_idx, 1, LOCAL(1),
  // 8:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_26, lambda_27, IO_TAIL_CALL,
  POS(324, 5),
  POS(326, 14),
  POS(326, 14),
  POS(325, 5)
};

static TAB_NUM t_lambda_26[] = {
  1, // locals
  0, // parameters
  // !basic_loops::from idx+1
  var_std__plus, 2, var_324_1_idx, num_1, 1, var_basic_loops__from,
  // basic_loops::self(idx)
  var_basic_loops__self, 1, var_324_1_idx, 1, LOCAL(1),
  // for_each_1! basic_loops::self(idx)
  var_for_each_1, 1, LOCAL(1), IO_TAIL_CALL,
  POS(327, 9),
  POS(328, 21),
  POS(328, 9)
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
  POS(330, 9),
  POS(330, 9),
  POS(333, 9)
};

static TAB_NUM t_func_hash_table_node___for_each_2[] = {
  2, // locals
  1, // parameters
  LOCAL(1), // 337_30_self
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
  POS(338, 3),
  POS(345, 3),
  POS(346, 3),
  POS(348, 3),
  POS(354, 4),
  POS(356, 3),
  POS(368, 3)
};

static TAB_NUM t_lambda_4_break[] = {
  2, // locals
  -1, // parameters
  MYSELF_PARAMETER, LOCAL(2), // 348_9_myself
  // basic_loops::saved_context_of(myself)
  var_basic_loops__saved_context_of, 1, LOCAL(2), 1, LOCAL(1),
  // basic_loops::saved_context_of(myself)
  LOCAL(1), 0, 4, var_next, var_break, var_basic_loops__from, var_basic_loops__self,
  // break!
  var_break, 0, IO_TAIL_CALL,
  POS(349, 5),
  POS(349, 5),
  POS(352, 5)
};

static TAB_NUM t_lambda_4_next[] = {
  2, // locals
  0, // parameters
  // $idx basic_loops::from
  LET, 1, var_basic_loops__from, 1, var_357_1_idx,
  // 8:
  var_std__less, 2, num_8, var_357_1_idx, 1, LOCAL(1),
  // 8:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_28, lambda_29, IO_TAIL_CALL,
  POS(357, 5),
  POS(359, 14),
  POS(359, 14),
  POS(358, 5)
};

static TAB_NUM t_lambda_28[] = {
  1, // locals
  0, // parameters
  // !basic_loops::from idx+1
  var_std__plus, 2, var_357_1_idx, num_1, 1, var_basic_loops__from,
  // basic_loops::self(idx)
  var_basic_loops__self, 1, var_357_1_idx, 1, LOCAL(1),
  // for_each_2! basic_loops::self(idx)
  var_for_each_2, 1, LOCAL(1), IO_TAIL_CALL,
  POS(360, 9),
  POS(361, 21),
  POS(361, 9)
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
  POS(363, 9),
  POS(363, 9),
  POS(366, 9)
};

static TAB_NUM t_func_std_types__hash_table___for_each[] = {
  4, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_372_0_self,
  MANDATORY_PARAMETER, LOCAL(3), // 373_0_body
  var_next, var_374_0_finally,
  // $saved_context
  var_tuple, 4, var_next, var_break, var_basic_loops__body, var_basic_loops__finally, 1, LOCAL(4),
  // !basic_loops::body body
  LET, 1, LOCAL(3), 1, var_basic_loops__body,
  // !basic_loops::finally finally
  LET, 1, var_374_0_finally, 1, var_basic_loops__finally,
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
  POS(376, 3),
  POS(383, 3),
  POS(384, 3),
  POS(386, 3),
  POS(393, 4),
  POS(394, 3),
  POS(397, 5),
  POS(397, 5),
  POS(396, 3)
};

static TAB_NUM t_lambda_5_break[] = {
  2, // locals
  -1, // parameters
  MYSELF_PARAMETER, LOCAL(2), // 386_9_myself
  // !finally basic_loops::finally
  LET, 1, var_basic_loops__finally, 1, var_374_0_finally,
  // basic_loops::saved_context_of(myself)
  var_basic_loops__saved_context_of, 1, LOCAL(2), 1, LOCAL(1),
  // basic_loops::saved_context_of(myself)
  LOCAL(1), 0, 4, var_next, var_break, var_basic_loops__body, var_basic_loops__finally,
  // finally!
  var_374_0_finally, 0, IO_TAIL_CALL,
  POS(387, 5),
  POS(388, 5),
  POS(388, 5),
  POS(391, 5)
};

static TAB_NUM t_lambda_30[] = {
  1, // locals
  0, // parameters
  // contents_of(self)
  var_contents_of, 1, var_372_0_self, 1, LOCAL(1),
  // for_each_2! contents_of(self)
  var_for_each_2, 1, LOCAL(1), IO_TAIL_CALL,
  POS(398, 19),
  POS(398, 7)
};

static TAB_NUM t_lambda_31[] = {
  1, // locals
  0, // parameters
  // contents_of(self)
  var_contents_of, 1, var_372_0_self, 1, LOCAL(1),
  // for_each_1! contents_of(self)
  var_for_each_1, 1, LOCAL(1), IO_TAIL_CALL,
  POS(400, 19),
  POS(400, 7)
};

static TAB_NUM t_func_empty_hash_table_entry___map_1[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 409_32_self
  // -> self
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(409, 39)
};

static TAB_NUM t_func_empty_hash_table_entry___map_2[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 410_32_self
  // -> self
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(410, 39)
};

static TAB_NUM t_func_hash_table_leaf___map_1[] = {
  5, // locals
  1, // parameters
  LOCAL(2), // 412_25_self
  // self $my_hash_index $my_key $my_value
  LOCAL(2), 0, 3, LOCAL(3), LOCAL(4), LOCAL(5),
  // mapping_function(my_value)
  var_mapping_function, 1, LOCAL(5), 1, LOCAL(1),
  // new self my_hash_index my_key mapping_function(my_value)
  var_new, 4, LOCAL(2), LOCAL(3), LOCAL(4), LOCAL(1), TAIL_CALL,
  POS(413, 3),
  POS(414, 33),
  POS(414, 3)
};

static TAB_NUM t_func_hash_table_leaf___map_2[] = {
  5, // locals
  1, // parameters
  LOCAL(2), // 416_25_self
  // self $my_hash_index $my_key $my_value
  LOCAL(2), 0, 3, LOCAL(3), LOCAL(4), LOCAL(5),
  // mapping_function(my_key my_value)
  var_mapping_function, 2, LOCAL(4), LOCAL(5), 1, LOCAL(1),
  // new self my_hash_index my_key mapping_function(my_key my_value)
  var_new, 4, LOCAL(2), LOCAL(3), LOCAL(4), LOCAL(1), TAIL_CALL,
  POS(417, 3),
  POS(418, 33),
  POS(418, 3)
};

static TAB_NUM t_func_empty_collision_list_entry___map_1[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 420_36_self
  // -> self
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(420, 43)
};

static TAB_NUM t_func_empty_collision_list_entry___map_2[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 421_36_self
  // -> self
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(421, 43)
};

static TAB_NUM t_func_collision_list_entry___map_1[] = {
  6, // locals
  1, // parameters
  LOCAL(3), // 423_30_self
  // self $my_key $my_value $my_link
  LOCAL(3), 0, 3, LOCAL(4), LOCAL(5), LOCAL(6),
  // mapping_function(my_value) map_1(my_link)
  var_mapping_function, 1, LOCAL(5), 1, LOCAL(1),
  // map_1(my_link)
  var_map_1, 1, LOCAL(6), 1, LOCAL(2),
  // new self my_key mapping_function(my_value) map_1(my_link)
  var_new, 4, LOCAL(3), LOCAL(4), LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(424, 3),
  POS(425, 19),
  POS(425, 46),
  POS(425, 3)
};

static TAB_NUM t_func_collision_list_entry___map_2[] = {
  6, // locals
  1, // parameters
  LOCAL(3), // 427_30_self
  // self $my_key $my_value $my_link
  LOCAL(3), 0, 3, LOCAL(4), LOCAL(5), LOCAL(6),
  // mapping_function(my_key my_value) map_2(my_link)
  var_mapping_function, 2, LOCAL(4), LOCAL(5), 1, LOCAL(1),
  // map_2(my_link)
  var_map_2, 1, LOCAL(6), 1, LOCAL(2),
  // new self my_key mapping_function(my_key my_value) map_2(my_link)
  var_new, 4, LOCAL(3), LOCAL(4), LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(428, 3),
  POS(429, 19),
  POS(429, 53),
  POS(429, 3)
};

static TAB_NUM t_func_hash_table_node___map_1[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 431_25_self
  // map(self map_1)
  var_map, 2, LOCAL(2), var_map_1, 1, LOCAL(1),
  // new self map(self map_1)
  var_new, 2, LOCAL(2), LOCAL(1), TAIL_CALL,
  POS(432, 12),
  POS(432, 3)
};

static TAB_NUM t_func_hash_table_node___map_2[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 434_25_self
  // map(self map_2)
  var_map, 2, LOCAL(2), var_map_2, 1, LOCAL(1),
  // new self map(self map_2)
  var_new, 2, LOCAL(2), LOCAL(1), TAIL_CALL,
  POS(435, 12),
  POS(435, 3)
};

static TAB_NUM t_func_std_types__hash_table___map[] = {
  3, // locals
  2, // parameters
  var_445_0_self,
  LOCAL(3), // 446_0_function
  // !mapping_function function
  LET, 1, LOCAL(3), 1, var_mapping_function,
  // parameter_count_of(function) == 2:
  var_parameter_count_of, 1, LOCAL(3), 1, LOCAL(1),
  // parameter_count_of(function) == 2:
  var_std__equal, 2, LOCAL(1), num_2, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_32, lambda_33, TAIL_CALL,
  POS(448, 3),
  POS(450, 5),
  POS(450, 5),
  POS(449, 3)
};

static TAB_NUM t_lambda_32[] = {
  1, // locals
  0, // parameters
  // contents_of
  var_contents_of, 1, var_445_0_self, 1, LOCAL(1),
  // map_2 &self.contents_of
  var_map_2, 1, LOCAL(1), 1, LOCAL(1),
  // self.contents_of
  LET, -1, var_445_0_self, var_contents_of, LOCAL(1), var_445_0_self,
  // -> self
  LET, 1, var_445_0_self, TAIL_CALL,
  POS(451, 19),
  POS(451, 7),
  POS(451, 14),
  POS(452, 7)
};

static TAB_NUM t_lambda_33[] = {
  1, // locals
  0, // parameters
  // contents_of
  var_contents_of, 1, var_445_0_self, 1, LOCAL(1),
  // map_1 &self.contents_of
  var_map_1, 1, LOCAL(1), 1, LOCAL(1),
  // self.contents_of
  LET, -1, var_445_0_self, var_contents_of, LOCAL(1), var_445_0_self,
  // -> self
  LET, 1, var_445_0_self, TAIL_CALL,
  POS(454, 19),
  POS(454, 7),
  POS(454, 14),
  POS(455, 7)
};

static TAB_NUM t_func_empty_hash_table_entry___reduce_1[] = {
  1, // locals
  1, // parameters
  LOCAL(1),
  // -> UNIT
  LET, 1, uni_UNIT, TAIL_CALL,
  POS(465, 43)
};

static TAB_NUM t_func_hash_table_leaf___reduce_1[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 467_28_self
  // self $_my_hash_index $_my_key $my_value
  LOCAL(2), 0, 3, LOCAL(1), LOCAL(1), LOCAL(3),
  // -> my_value
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(468, 3),
  POS(469, 3)
};

static TAB_NUM t_func_empty_collision_list_entry___reduce_1[] = {
  1, // locals
  1, // parameters
  LOCAL(1),
  // -> UNIT
  LET, 1, uni_UNIT, TAIL_CALL,
  POS(471, 47)
};

static TAB_NUM t_func_collision_list_entry___reduce_1[] = {
  6, // locals
  1, // parameters
  LOCAL(3), // 473_33_self
  // self $my_key $my_value $my_link
  LOCAL(3), 0, 3, LOCAL(4), LOCAL(5), LOCAL(6),
  // mapping_function(my_key my_value)
  var_mapping_function, 2, LOCAL(4), LOCAL(5), 1, LOCAL(1),
  // reduce_1(my_link)
  var_reduce_1, 1, LOCAL(6), 1, LOCAL(2),
  // my_reduce
  func_my_reduce, 2, LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(474, 3),
  POS(476, 5),
  POS(477, 5),
  POS(475, 3)
};

static TAB_NUM t_func_hash_table_node___reduce_1[] = {
  11, // locals
  1, // parameters
  LOCAL(5), // 479_28_self
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
  POS(480, 27),
  POS(480, 18),
  POS(480, 45),
  POS(480, 36),
  POS(480, 3),
  POS(481, 27),
  POS(481, 18),
  POS(481, 45),
  POS(481, 36),
  POS(481, 3),
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
  POS(484, 3),
  POS(485, 3),
  POS(486, 6),
  POS(486, 3)
};

static TAB_NUM t_func_my_reduce[] = {
  1, // locals
  2, // parameters
  var_488_13_left,
  var_488_18_right,
  // UNIT == left
  var_std__equal, 2, uni_UNIT, var_488_13_left, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_34, lambda_35, TAIL_CALL,
  POS(490, 5),
  POS(489, 3)
};

static TAB_NUM t_lambda_34[] = {
  0, // locals
  0, // parameters
  //  right
  LET, 1, var_488_18_right, TAIL_CALL,
  POS(491, 7)
};

static TAB_NUM t_lambda_35[] = {
  1, // locals
  0, // parameters
  // UNIT == right
  var_std__equal, 2, uni_UNIT, var_488_18_right, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_36, lambda_37, TAIL_CALL,
  POS(494, 9),
  POS(493, 7)
};

static TAB_NUM t_lambda_36[] = {
  0, // locals
  0, // parameters
  //  left
  LET, 1, var_488_13_left, TAIL_CALL,
  POS(495, 11)
};

static TAB_NUM t_lambda_37[] = {
  1, // locals
  0, // parameters
  // reduction_function(left right)
  var_reduction_function, 2, var_488_13_left, var_488_18_right, 1, LOCAL(1),
  //  reduction_function(left right)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(496, 12),
  POS(496, 11)
};

static TAB_NUM t_func_std_types__hash_table___reduce[] = {
  2, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_510_0_self,
  MANDATORY_PARAMETER, var_511_0_function,
  var_undefined, var_512_0_unit,
  // length_of(self) == 0
  var_length_of, 1, var_510_0_self, 1, LOCAL(1),
  // length_of(self) == 0
  var_std__equal, 2, LOCAL(1), num_0, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_38, lambda_39, TAIL_CALL,
  POS(515, 5),
  POS(515, 5),
  POS(514, 3)
};

static TAB_NUM t_lambda_38[] = {
  0, // locals
  0, // parameters
  //  unit
  LET, 1, var_512_0_unit, TAIL_CALL,
  POS(516, 7)
};

static TAB_NUM t_lambda_39[] = {
  1, // locals
  0, // parameters
  // !reduction_function function
  LET, 1, var_511_0_function, 1, var_reduction_function,
  // contents_of(self)
  var_contents_of, 1, var_510_0_self, 1, LOCAL(1),
  // reduce_1 contents_of(self)
  var_reduce_1, 1, LOCAL(1), TAIL_CALL,
  POS(518, 7),
  POS(519, 16),
  POS(519, 7)
};

static TAB_NUM t_func_empty_hash_table_entry___map_reduce_1[] = {
  1, // locals
  1, // parameters
  LOCAL(1),
  // -> UNIT
  LET, 1, uni_UNIT, TAIL_CALL,
  POS(526, 47)
};

static TAB_NUM t_func_empty_hash_table_entry___map_reduce_2[] = {
  1, // locals
  1, // parameters
  LOCAL(1),
  // -> UNIT
  LET, 1, uni_UNIT, TAIL_CALL,
  POS(527, 47)
};

static TAB_NUM t_func_hash_table_leaf___map_reduce_1[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 529_32_self
  // self $_my_hash_index $_my_key $my_value
  LOCAL(2), 0, 3, LOCAL(1), LOCAL(1), LOCAL(3),
  // mapping_function(my_value)
  var_mapping_function, 1, LOCAL(3), 1, LOCAL(1),
  // -> mapping_function(my_value)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(530, 3),
  POS(531, 6),
  POS(531, 3)
};

static TAB_NUM t_func_hash_table_leaf___map_reduce_2[] = {
  4, // locals
  1, // parameters
  LOCAL(2), // 533_32_self
  // self $_my_hash_index $my_key $my_value
  LOCAL(2), 0, 3, LOCAL(1), LOCAL(3), LOCAL(4),
  // mapping_function(my_key my_value)
  var_mapping_function, 2, LOCAL(3), LOCAL(4), 1, LOCAL(1),
  // -> mapping_function(my_key my_value)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(534, 3),
  POS(535, 6),
  POS(535, 3)
};

static TAB_NUM t_func_empty_collision_list_entry___map_reduce_1[] = {
  1, // locals
  1, // parameters
  LOCAL(1),
  // -> UNIT
  LET, 1, uni_UNIT, TAIL_CALL,
  POS(537, 51)
};

static TAB_NUM t_func_empty_collision_list_entry___map_reduce_2[] = {
  1, // locals
  1, // parameters
  LOCAL(1),
  // -> UNIT
  LET, 1, uni_UNIT, TAIL_CALL,
  POS(538, 51)
};

static TAB_NUM t_func_collision_list_entry___map_reduce_1[] = {
  6, // locals
  1, // parameters
  LOCAL(3), // 540_37_self
  // self $my_key $my_value $my_link
  LOCAL(3), 0, 3, LOCAL(4), LOCAL(5), LOCAL(6),
  // mapping_function(my_key my_value)
  var_mapping_function, 2, LOCAL(4), LOCAL(5), 1, LOCAL(1),
  // map_reduce_1(my_link)
  var_map_reduce_1, 1, LOCAL(6), 1, LOCAL(2),
  // my_reduce
  func_my_reduce, 2, LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(541, 3),
  POS(543, 5),
  POS(544, 5),
  POS(542, 3)
};

static TAB_NUM t_func_collision_list_entry___map_reduce_2[] = {
  6, // locals
  1, // parameters
  LOCAL(3), // 546_37_self
  // self $my_key $my_value $my_link
  LOCAL(3), 0, 3, LOCAL(4), LOCAL(5), LOCAL(6),
  // mapping_function(my_key my_value)
  var_mapping_function, 2, LOCAL(4), LOCAL(5), 1, LOCAL(1),
  // map_reduce_2(my_link)
  var_map_reduce_2, 1, LOCAL(6), 1, LOCAL(2),
  // my_reduce
  func_my_reduce, 2, LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(547, 3),
  POS(549, 5),
  POS(550, 5),
  POS(548, 3)
};

static TAB_NUM t_func_hash_table_node___map_reduce_1[] = {
  11, // locals
  1, // parameters
  LOCAL(5), // 552_32_self
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
  POS(553, 31),
  POS(553, 18),
  POS(553, 53),
  POS(553, 40),
  POS(553, 3),
  POS(554, 31),
  POS(554, 18),
  POS(554, 53),
  POS(554, 40),
  POS(554, 3),
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
  POS(557, 3),
  POS(558, 3),
  POS(559, 6),
  POS(559, 3)
};

static TAB_NUM t_func_hash_table_node___map_reduce_2[] = {
  11, // locals
  1, // parameters
  LOCAL(5), // 561_32_self
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
  POS(562, 31),
  POS(562, 18),
  POS(562, 53),
  POS(562, 40),
  POS(562, 3),
  POS(563, 31),
  POS(563, 18),
  POS(563, 53),
  POS(563, 40),
  POS(563, 3),
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
  POS(566, 3),
  POS(567, 3),
  POS(568, 6),
  POS(568, 3)
};

static TAB_NUM t_func_std_types__hash_table___map_reduce[] = {
  2, // locals
  -4, // parameters
  MANDATORY_PARAMETER, var_580_0_self,
  MANDATORY_PARAMETER, var_581_0_map_function,
  var_append, var_582_0_reduce_function,
  var_undefined, var_583_0_unit,
  // length_of(self) == 0
  var_length_of, 1, var_580_0_self, 1, LOCAL(1),
  // length_of(self) == 0
  var_std__equal, 2, LOCAL(1), num_0, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_40, lambda_41, TAIL_CALL,
  POS(586, 5),
  POS(586, 5),
  POS(585, 3)
};

static TAB_NUM t_lambda_40[] = {
  0, // locals
  0, // parameters
  //  unit
  LET, 1, var_583_0_unit, TAIL_CALL,
  POS(587, 7)
};

static TAB_NUM t_lambda_41[] = {
  2, // locals
  0, // parameters
  // !mapping_function map_function
  LET, 1, var_581_0_map_function, 1, var_mapping_function,
  // !reduction_function reduce_function
  LET, 1, var_582_0_reduce_function, 1, var_reduction_function,
  // parameter_count_of(map_function) == 2:
  var_parameter_count_of, 1, var_581_0_map_function, 1, LOCAL(1),
  // parameter_count_of(map_function) == 2:
  var_std__equal, 2, LOCAL(1), num_2, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_42, lambda_43, TAIL_CALL,
  POS(589, 7),
  POS(590, 7),
  POS(592, 9),
  POS(592, 9),
  POS(591, 7)
};

static TAB_NUM t_lambda_42[] = {
  1, // locals
  0, // parameters
  // contents_of(self)
  var_contents_of, 1, var_580_0_self, 1, LOCAL(1),
  // map_reduce_2 contents_of(self)
  var_map_reduce_2, 1, LOCAL(1), TAIL_CALL,
  POS(593, 24),
  POS(593, 11)
};

static TAB_NUM t_lambda_43[] = {
  1, // locals
  0, // parameters
  // contents_of(self)
  var_contents_of, 1, var_580_0_self, 1, LOCAL(1),
  // map_reduce_1 contents_of(self)
  var_map_reduce_1, 1, LOCAL(1), TAIL_CALL,
  POS(595, 24),
  POS(595, 11)
};

static TAB_NUM t_func_empty_hash_table_entry___filter_1[] = {
  1, // locals
  1, // parameters
  LOCAL(1),
  // -> empty_hash_table_entry 0
  LET, 2, var_empty_hash_table_entry, num_0, TAIL_CALL,
  POS(604, 43)
};

static TAB_NUM t_func_empty_hash_table_entry___filter_2[] = {
  1, // locals
  1, // parameters
  LOCAL(1),
  // -> empty_hash_table_entry 0
  LET, 2, var_empty_hash_table_entry, num_0, TAIL_CALL,
  POS(605, 43)
};

static TAB_NUM t_func_hash_table_leaf___filter_1[] = {
  2, // locals
  1, // parameters
  var_607_28_self,
  // self $_my_hash_index $_my_key $my_value
  var_607_28_self, 0, 3, LOCAL(1), LOCAL(1), LOCAL(2),
  // filter_function(my_value)
  var_filter_function, 1, LOCAL(2), 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_44, lambda_45, TAIL_CALL,
  POS(608, 3),
  POS(610, 5),
  POS(609, 3)
};

static TAB_NUM t_lambda_44[] = {
  0, // locals
  0, // parameters
  //  self 0
  LET, 2, var_607_28_self, num_0, TAIL_CALL,
  POS(611, 7)
};

static TAB_NUM t_lambda_45[] = {
  0, // locals
  0, // parameters
  //  empty_hash_table_entry 1
  LET, 2, var_empty_hash_table_entry, num_1, TAIL_CALL,
  POS(612, 7)
};

static TAB_NUM t_func_hash_table_leaf___filter_2[] = {
  3, // locals
  1, // parameters
  var_614_28_self,
  // self $_my_hash_index $my_key $my_value
  var_614_28_self, 0, 3, LOCAL(1), LOCAL(2), LOCAL(3),
  // filter_function(my_key my_value)
  var_filter_function, 2, LOCAL(2), LOCAL(3), 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_46, lambda_47, TAIL_CALL,
  POS(615, 3),
  POS(617, 5),
  POS(616, 3)
};

static TAB_NUM t_lambda_46[] = {
  0, // locals
  0, // parameters
  //  self 0
  LET, 2, var_614_28_self, num_0, TAIL_CALL,
  POS(618, 7)
};

static TAB_NUM t_lambda_47[] = {
  0, // locals
  0, // parameters
  //  empty_hash_table_entry 1
  LET, 2, var_empty_hash_table_entry, num_1, TAIL_CALL,
  POS(619, 7)
};

static TAB_NUM t_func_empty_collision_list_entry___filter_1[] = {
  1, // locals
  1, // parameters
  LOCAL(1),
  // -> empty_collision_list_entry 0
  LET, 2, var_empty_collision_list_entry, num_0, TAIL_CALL,
  POS(621, 47)
};

static TAB_NUM t_func_empty_collision_list_entry___filter_2[] = {
  1, // locals
  1, // parameters
  LOCAL(1),
  // -> empty_collision_list_entry 0
  LET, 2, var_empty_collision_list_entry, num_0, TAIL_CALL,
  POS(622, 47)
};

static TAB_NUM t_func_collision_list_entry___filter_1[] = {
  2, // locals
  1, // parameters
  var_624_33_self,
  // self $my_key $my_value $my_link
  var_624_33_self, 0, 3, var_625_6_my_key, var_625_14_my_value, LOCAL(2),
  // filter_1 $new_link $deleted my_link
  var_filter_1, 1, LOCAL(2), 2, var_626_10_new_link, var_626_20_deleted,
  // filter_function(my_value):
  var_filter_function, 1, var_625_14_my_value, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_filter_functionmy_value, lambda_50, TAIL_CALL,
  POS(625, 3),
  POS(626, 3),
  POS(628, 5),
  POS(627, 3)
};

static TAB_NUM t_lambda_filter_functionmy_value[] = {
  1, // locals
  0, // parameters
  // deleted == 0
  var_std__equal, 2, var_626_20_deleted, num_0, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_48, lambda_49, TAIL_CALL,
  POS(630, 9),
  POS(629, 7)
};

static TAB_NUM t_lambda_48[] = {
  0, // locals
  0, // parameters
  //  self 0
  LET, 2, var_624_33_self, num_0, TAIL_CALL,
  POS(631, 11)
};

static TAB_NUM t_lambda_49[] = {
  1, // locals
  0, // parameters
  // new(collision_list_entry my_key my_value new_link) deleted
  var_new, 4, var_collision_list_entry, var_625_6_my_key, var_625_14_my_value, var_626_10_new_link, 1, LOCAL(1),
  //  new(collision_list_entry my_key my_value new_link) deleted
  LET, 2, LOCAL(1), var_626_20_deleted, TAIL_CALL,
  POS(632, 12),
  POS(632, 11)
};

static TAB_NUM t_lambda_50[] = {
  1, // locals
  0, // parameters
  // deleted+1
  var_std__plus, 2, var_626_20_deleted, num_1, 1, LOCAL(1),
  //  new_link deleted+1
  LET, 2, var_626_10_new_link, LOCAL(1), TAIL_CALL,
  POS(633, 17),
  POS(633, 7)
};

static TAB_NUM t_func_collision_list_entry___filter_2[] = {
  2, // locals
  1, // parameters
  var_635_33_self,
  // self $my_key $my_value $my_link
  var_635_33_self, 0, 3, var_636_6_my_key, var_636_14_my_value, LOCAL(2),
  // filter_2 $new_link $deleted my_link
  var_filter_2, 1, LOCAL(2), 2, var_637_10_new_link, var_637_20_deleted,
  // filter_function(my_key my_value):
  var_filter_function, 2, var_636_6_my_key, var_636_14_my_value, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_51, lambda_54, TAIL_CALL,
  POS(636, 3),
  POS(637, 3),
  POS(639, 5),
  POS(638, 3)
};

static TAB_NUM t_lambda_51[] = {
  1, // locals
  0, // parameters
  // deleted == 0
  var_std__equal, 2, var_637_20_deleted, num_0, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_52, lambda_53, TAIL_CALL,
  POS(641, 9),
  POS(640, 7)
};

static TAB_NUM t_lambda_52[] = {
  0, // locals
  0, // parameters
  //  self 0
  LET, 2, var_635_33_self, num_0, TAIL_CALL,
  POS(642, 11)
};

static TAB_NUM t_lambda_53[] = {
  1, // locals
  0, // parameters
  // new(collision_list_entry my_key my_value new_link) deleted
  var_new, 4, var_collision_list_entry, var_636_6_my_key, var_636_14_my_value, var_637_10_new_link, 1, LOCAL(1),
  //  new(collision_list_entry my_key my_value new_link) deleted
  LET, 2, LOCAL(1), var_637_20_deleted, TAIL_CALL,
  POS(643, 12),
  POS(643, 11)
};

static TAB_NUM t_lambda_54[] = {
  1, // locals
  0, // parameters
  // deleted+1
  var_std__plus, 2, var_637_20_deleted, num_1, 1, LOCAL(1),
  //  new_link deleted+1
  LET, 2, var_637_10_new_link, LOCAL(1), TAIL_CALL,
  POS(644, 17),
  POS(644, 7)
};

static TAB_NUM t_func_hash_table_node___filter_1[] = {
  14, // locals
  1, // parameters
  var_646_28_self,
  // self(1)
  var_646_28_self, 1, num_1, 1, LOCAL(1),
  // filter_1 $node_1 $deleted_1 self(1)
  var_filter_1, 1, LOCAL(1), 2, var_647_10_node_1, LOCAL(7),
  // self(2)
  var_646_28_self, 1, num_2, 1, LOCAL(1),
  // filter_1 $node_2 $deleted_2 self(2)
  var_filter_1, 1, LOCAL(1), 2, var_648_10_node_2, LOCAL(8),
  // self(3)
  var_646_28_self, 1, num_3, 1, LOCAL(1),
  // filter_1 $node_3 $deleted_3 self(3)
  var_filter_1, 1, LOCAL(1), 2, var_649_10_node_3, LOCAL(9),
  // self(4)
  var_646_28_self, 1, num_4, 1, LOCAL(1),
  // filter_1 $node_4 $deleted_4 self(4)
  var_filter_1, 1, LOCAL(1), 2, var_650_10_node_4, LOCAL(10),
  // self(5)
  var_646_28_self, 1, num_5, 1, LOCAL(1),
  // filter_1 $node_5 $deleted_5 self(5)
  var_filter_1, 1, LOCAL(1), 2, var_651_10_node_5, LOCAL(11),
  // self(6)
  var_646_28_self, 1, num_6, 1, LOCAL(1),
  // filter_1 $node_6 $deleted_6 self(6)
  var_filter_1, 1, LOCAL(1), 2, var_652_10_node_6, LOCAL(12),
  // self(7)
  var_646_28_self, 1, num_7, 1, LOCAL(1),
  // filter_1 $node_7 $deleted_7 self(7)
  var_filter_1, 1, LOCAL(1), 2, var_653_10_node_7, LOCAL(13),
  // self(8)
  var_646_28_self, 1, num_8, 1, LOCAL(1),
  // filter_1 $node_8 $deleted_8 self(8)
  var_filter_1, 1, LOCAL(1), 2, var_654_10_node_8, LOCAL(14),
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
  var_std__plus, 2, LOCAL(6), LOCAL(14), 1, var_655_1_deleted,
  // deleted == 0
  var_std__equal, 2, var_655_1_deleted, num_0, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_55, lambda_56, TAIL_CALL,
  POS(647, 31),
  POS(647, 3),
  POS(648, 31),
  POS(648, 3),
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
  POS(656, 6),
  POS(656, 6),
  POS(656, 6),
  POS(656, 6),
  POS(656, 6),
  POS(656, 6),
  POS(655, 3),
  POS(666, 5),
  POS(665, 3)
};

static TAB_NUM t_lambda_55[] = {
  0, // locals
  0, // parameters
  //  self 0
  LET, 2, var_646_28_self, num_0, TAIL_CALL,
  POS(667, 7)
};

static TAB_NUM t_lambda_56[] = {
  2, // locals
  0, // parameters
  // is_an_empty_entry
  var_is_an_empty_entry, 1, var_647_10_node_1, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_57, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_64, lambda_65, TAIL_CALL,
  POS(671, 18),
  POS(670, 11),
  POS(669, 7)
};

static TAB_NUM t_lambda_57[] = {
  2, // locals
  0, // parameters
  // is_an_empty_entry
  var_is_an_empty_entry, 1, var_648_10_node_2, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_58, 1, LOCAL(2),
  // node_2.is_an_empty_entry
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(672, 18),
  POS(670, 11),
  POS(672, 11)
};

static TAB_NUM t_lambda_58[] = {
  2, // locals
  0, // parameters
  // is_an_empty_entry
  var_is_an_empty_entry, 1, var_649_10_node_3, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_59, 1, LOCAL(2),
  // node_3.is_an_empty_entry
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(673, 18),
  POS(670, 11),
  POS(673, 11)
};

static TAB_NUM t_lambda_59[] = {
  2, // locals
  0, // parameters
  // is_an_empty_entry
  var_is_an_empty_entry, 1, var_650_10_node_4, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_60, 1, LOCAL(2),
  // node_4.is_an_empty_entry
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(674, 18),
  POS(670, 11),
  POS(674, 11)
};

static TAB_NUM t_lambda_60[] = {
  2, // locals
  0, // parameters
  // is_an_empty_entry
  var_is_an_empty_entry, 1, var_651_10_node_5, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_61, 1, LOCAL(2),
  // node_5.is_an_empty_entry
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(675, 18),
  POS(670, 11),
  POS(675, 11)
};

static TAB_NUM t_lambda_61[] = {
  2, // locals
  0, // parameters
  // is_an_empty_entry
  var_is_an_empty_entry, 1, var_652_10_node_6, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_62, 1, LOCAL(2),
  // node_6.is_an_empty_entry
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(676, 18),
  POS(670, 11),
  POS(676, 11)
};

static TAB_NUM t_lambda_62[] = {
  2, // locals
  0, // parameters
  // is_an_empty_entry
  var_is_an_empty_entry, 1, var_653_10_node_7, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_63, 1, LOCAL(2),
  // node_7.is_an_empty_entry
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(677, 18),
  POS(670, 11),
  POS(677, 11)
};

static TAB_NUM t_lambda_63[] = {
  1, // locals
  0, // parameters
  // is_an_empty_entry
  var_is_an_empty_entry, 1, var_654_10_node_8, 1, LOCAL(1),
  // node_8.is_an_empty_entry
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(678, 18),
  POS(678, 11)
};

static TAB_NUM t_lambda_64[] = {
  0, // locals
  0, // parameters
  //  empty_hash_table_entry deleted
  LET, 2, var_empty_hash_table_entry, var_655_1_deleted, TAIL_CALL,
  POS(679, 11)
};

static TAB_NUM t_lambda_65[] = {
  2, // locals
  0, // parameters
  // list
  var_list, 8, var_647_10_node_1, var_648_10_node_2, var_649_10_node_3, var_650_10_node_4, var_651_10_node_5, var_652_10_node_6, var_653_10_node_7, var_654_10_node_8, 1, LOCAL(1),
  // new
  var_new, 2, var_hash_table_node, LOCAL(1), 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), var_655_1_deleted, TAIL_CALL,
  POS(683, 13),
  POS(681, 11),
  POS(680, 11)
};

static TAB_NUM t_func_hash_table_node___filter_2[] = {
  14, // locals
  1, // parameters
  var_694_28_self,
  // self(1)
  var_694_28_self, 1, num_1, 1, LOCAL(1),
  // filter_2 $node_1 $deleted_1 self(1)
  var_filter_2, 1, LOCAL(1), 2, var_695_10_node_1, LOCAL(7),
  // self(2)
  var_694_28_self, 1, num_2, 1, LOCAL(1),
  // filter_2 $node_2 $deleted_2 self(2)
  var_filter_2, 1, LOCAL(1), 2, var_696_10_node_2, LOCAL(8),
  // self(3)
  var_694_28_self, 1, num_3, 1, LOCAL(1),
  // filter_2 $node_3 $deleted_3 self(3)
  var_filter_2, 1, LOCAL(1), 2, var_697_10_node_3, LOCAL(9),
  // self(4)
  var_694_28_self, 1, num_4, 1, LOCAL(1),
  // filter_2 $node_4 $deleted_4 self(4)
  var_filter_2, 1, LOCAL(1), 2, var_698_10_node_4, LOCAL(10),
  // self(5)
  var_694_28_self, 1, num_5, 1, LOCAL(1),
  // filter_2 $node_5 $deleted_5 self(5)
  var_filter_2, 1, LOCAL(1), 2, var_699_10_node_5, LOCAL(11),
  // self(6)
  var_694_28_self, 1, num_6, 1, LOCAL(1),
  // filter_2 $node_6 $deleted_6 self(6)
  var_filter_2, 1, LOCAL(1), 2, var_700_10_node_6, LOCAL(12),
  // self(7)
  var_694_28_self, 1, num_7, 1, LOCAL(1),
  // filter_2 $node_7 $deleted_7 self(7)
  var_filter_2, 1, LOCAL(1), 2, var_701_10_node_7, LOCAL(13),
  // self(8)
  var_694_28_self, 1, num_8, 1, LOCAL(1),
  // filter_2 $node_8 $deleted_8 self(8)
  var_filter_2, 1, LOCAL(1), 2, var_702_10_node_8, LOCAL(14),
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
  var_std__plus, 2, LOCAL(6), LOCAL(14), 1, var_703_1_deleted,
  // deleted == 0
  var_std__equal, 2, var_703_1_deleted, num_0, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_66, lambda_67, TAIL_CALL,
  POS(695, 31),
  POS(695, 3),
  POS(696, 31),
  POS(696, 3),
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
  POS(704, 6),
  POS(704, 6),
  POS(704, 6),
  POS(704, 6),
  POS(704, 6),
  POS(704, 6),
  POS(703, 3),
  POS(714, 5),
  POS(713, 3)
};

static TAB_NUM t_lambda_66[] = {
  0, // locals
  0, // parameters
  //  self 0
  LET, 2, var_694_28_self, num_0, TAIL_CALL,
  POS(715, 7)
};

static TAB_NUM t_lambda_67[] = {
  2, // locals
  0, // parameters
  // is_an_empty_entry
  var_is_an_empty_entry, 1, var_695_10_node_1, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_68, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_75, lambda_76, TAIL_CALL,
  POS(719, 18),
  POS(718, 11),
  POS(717, 7)
};

static TAB_NUM t_lambda_68[] = {
  2, // locals
  0, // parameters
  // is_an_empty_entry
  var_is_an_empty_entry, 1, var_696_10_node_2, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_69, 1, LOCAL(2),
  // node_2.is_an_empty_entry
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(720, 18),
  POS(718, 11),
  POS(720, 11)
};

static TAB_NUM t_lambda_69[] = {
  2, // locals
  0, // parameters
  // is_an_empty_entry
  var_is_an_empty_entry, 1, var_697_10_node_3, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_70, 1, LOCAL(2),
  // node_3.is_an_empty_entry
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(721, 18),
  POS(718, 11),
  POS(721, 11)
};

static TAB_NUM t_lambda_70[] = {
  2, // locals
  0, // parameters
  // is_an_empty_entry
  var_is_an_empty_entry, 1, var_698_10_node_4, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_71, 1, LOCAL(2),
  // node_4.is_an_empty_entry
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(722, 18),
  POS(718, 11),
  POS(722, 11)
};

static TAB_NUM t_lambda_71[] = {
  2, // locals
  0, // parameters
  // is_an_empty_entry
  var_is_an_empty_entry, 1, var_699_10_node_5, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_72, 1, LOCAL(2),
  // node_5.is_an_empty_entry
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(723, 18),
  POS(718, 11),
  POS(723, 11)
};

static TAB_NUM t_lambda_72[] = {
  2, // locals
  0, // parameters
  // is_an_empty_entry
  var_is_an_empty_entry, 1, var_700_10_node_6, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_73, 1, LOCAL(2),
  // node_6.is_an_empty_entry
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(724, 18),
  POS(718, 11),
  POS(724, 11)
};

static TAB_NUM t_lambda_73[] = {
  2, // locals
  0, // parameters
  // is_an_empty_entry
  var_is_an_empty_entry, 1, var_701_10_node_7, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_74, 1, LOCAL(2),
  // node_7.is_an_empty_entry
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(725, 18),
  POS(718, 11),
  POS(725, 11)
};

static TAB_NUM t_lambda_74[] = {
  1, // locals
  0, // parameters
  // is_an_empty_entry
  var_is_an_empty_entry, 1, var_702_10_node_8, 1, LOCAL(1),
  // node_8.is_an_empty_entry
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(726, 18),
  POS(726, 11)
};

static TAB_NUM t_lambda_75[] = {
  0, // locals
  0, // parameters
  //  empty_hash_table_entry deleted
  LET, 2, var_empty_hash_table_entry, var_703_1_deleted, TAIL_CALL,
  POS(727, 11)
};

static TAB_NUM t_lambda_76[] = {
  2, // locals
  0, // parameters
  // list
  var_list, 8, var_695_10_node_1, var_696_10_node_2, var_697_10_node_3, var_698_10_node_4, var_699_10_node_5, var_700_10_node_6, var_701_10_node_7, var_702_10_node_8, 1, LOCAL(1),
  // new
  var_new, 2, var_hash_table_node, LOCAL(1), 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), var_703_1_deleted, TAIL_CALL,
  POS(731, 13),
  POS(729, 11),
  POS(728, 11)
};

static TAB_NUM t_func_std_types__hash_table___filter[] = {
  2, // locals
  2, // parameters
  var_755_0_self,
  var_756_0_function,
  // length_of(self) == 0
  var_length_of, 1, var_755_0_self, 1, LOCAL(1),
  // length_of(self) == 0
  var_std__equal, 2, LOCAL(1), num_0, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_77, lambda_78, TAIL_CALL,
  POS(759, 5),
  POS(759, 5),
  POS(758, 3)
};

static TAB_NUM t_lambda_77[] = {
  0, // locals
  0, // parameters
  //  empty_hash_table
  LET, 1, var_empty_hash_table, TAIL_CALL,
  POS(760, 7)
};

static TAB_NUM t_lambda_78[] = {
  2, // locals
  0, // parameters
  // !filter_function function
  LET, 1, var_756_0_function, 1, var_filter_function,
  // parameter_count_of(function) == 2:
  var_parameter_count_of, 1, var_756_0_function, 1, LOCAL(1),
  // parameter_count_of(function) == 2:
  var_std__equal, 2, LOCAL(1), num_2, 1, LOCAL(2),
  // if $new_contents $deleted
  var_if, 3, LOCAL(2), lambda_79, lambda_80, 2, var_763_4_new_contents, var_763_18_deleted,
  // deleted == 0
  var_std__equal, 2, var_763_18_deleted, num_0, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_81, lambda_82, TAIL_CALL,
  POS(762, 7),
  POS(764, 9),
  POS(764, 9),
  POS(763, 7),
  POS(769, 9),
  POS(768, 7)
};

static TAB_NUM t_lambda_79[] = {
  1, // locals
  0, // parameters
  // contents_of(self)
  var_contents_of, 1, var_755_0_self, 1, LOCAL(1),
  // filter_2 contents_of(self)
  var_filter_2, 1, LOCAL(1), TAIL_CALL,
  POS(765, 20),
  POS(765, 11)
};

static TAB_NUM t_lambda_80[] = {
  1, // locals
  0, // parameters
  // contents_of(self)
  var_contents_of, 1, var_755_0_self, 1, LOCAL(1),
  // filter_1 contents_of(self)
  var_filter_1, 1, LOCAL(1), TAIL_CALL,
  POS(767, 20),
  POS(767, 11)
};

static TAB_NUM t_lambda_81[] = {
  0, // locals
  0, // parameters
  //  self
  LET, 1, var_755_0_self, TAIL_CALL,
  POS(770, 11)
};

static TAB_NUM t_lambda_82[] = {
  3, // locals
  0, // parameters
  // length_of(self)-deleted
  var_length_of, 1, var_755_0_self, 1, LOCAL(1),
  // length_of(self)-deleted
  var_std__minus, 2, LOCAL(1), var_763_18_deleted, 1, LOCAL(2),
  // self
  LET, -2, var_755_0_self, var_length_of, LOCAL(2), var_contents_of, var_763_4_new_contents, LOCAL(3),
  // 
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(773, 24),
  POS(773, 24),
  POS(772, 11),
  POS(771, 11)
};

static TAB_NUM t_func_std__hash_table[] = {
  1, // locals
  -1, // parameters
  REST_PARAMETER, LOCAL(1), // 780_0_pairs
  // $table empty_hash_table
  LET, 1, var_empty_hash_table, 1, var_782_1_table,
  // for_each pairs
  var_for_each, 3, LOCAL(1), lambda_83, lambda_84, TAIL_CALL,
  POS(782, 3),
  POS(783, 3)
};

static TAB_NUM t_lambda_83[] = {
  3, // locals
  1, // parameters
  LOCAL(1), // 784_3_pair
  // pair $key $value
  LOCAL(1), 0, 2, LOCAL(2), LOCAL(3),
  // table(key) value
  var_782_1_table, 2, LOCAL(2), LOCAL(3), 1, var_782_1_table,
  // next
  var_next, 0, TAIL_CALL,
  POS(785, 7),
  POS(786, 8),
  POS(787, 7)
};

static TAB_NUM t_lambda_84[] = {
  0, // locals
  0, // parameters
  //  table
  LET, 1, var_782_1_table, TAIL_CALL,
  POS(788, 7)
};

static int tuple_73_0_arguments[] = {
  -var_undefined, -var_undefined, -var_undefined
};

static int list_79_0_arguments[] = {
  -var_empty_hash_table_entry, -var_empty_hash_table_entry, -var_empty_hash_table_entry, -var_empty_hash_table_entry, -var_empty_hash_table_entry, -var_empty_hash_table_entry, -var_empty_hash_table_entry, -var_empty_hash_table_entry
};

static FUNKY_CONSTANT constants_table[] = {
  {FLT_POSITIVE_INT64, 0, {.value = 0}},
  {FLT_TUPLE, 3, {.arguments = tuple_73_0_arguments}},
  {FLT_LIST, 8, {.arguments = list_79_0_arguments}},
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
    FOT_UNKNOWN, 0, 0,
    "table\000std_types", NULL,
    {.position = POS(42, 24)}
  },
  {
    FOT_DERIVED, 0, 0,
    "empty_hash_table\000std", NULL,
    {"hash_table\000std_types"}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "length_of\000", NULL,
    {.position = POS(67, 24)}
  },
  {
    FOT_INITIALIZED, 0, 12,
    "hash_table_leaf\000", hash_table_leaf__attributes,
    {.const_idx = -tuple_73_0}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "undefined\000", NULL,
    {.position = POS(73, 24)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "tuple\000", NULL,
    {.position = POS(73, 18)}
  },
  {
    FOT_INITIALIZED, 0, 12,
    "collision_list_entry\000", collision_list_entry__attributes,
    {.const_idx = -tuple_73_0}
  },
  {
    FOT_INITIALIZED, 0, 12,
    "hash_table_node\000", hash_table_node__attributes,
    {.const_idx = -list_79_0}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "list\000", NULL,
    {.position = POS(80, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "95_0_myself\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "96_0_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "97_0_value\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "hash\000", NULL,
    {.position = POS(99, 15)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "99_1_hash_index\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "bit_or\000std", NULL,
    {.position = POS(99, 15)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "100_1_contents\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "equal\000std", NULL,
    {.position = POS(102, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_defined\000", NULL,
    {.position = POS(106, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000std", NULL,
    {.position = POS(113, 28)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if\000", NULL,
    {.position = POS(108, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "minus\000std", NULL,
    {.position = POS(122, 28)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "130_30_my_value\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "138_45_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "139_14_my_value\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "139_24_my_link\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "bit_and\000std", NULL,
    {.position = POS(146, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "shift_right\000std", NULL,
    {.position = POS(147, 22)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "151_39_hash_index\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "151_50_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "151_54_value\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "new\000", NULL,
    {.position = POS(154, 8)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "157_26_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "157_31_hash_index\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "157_42_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "157_46_value\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "158_6_my_hash_index\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "158_21_my_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "158_29_my_value\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not\000", NULL,
    {.position = POS(172, 47)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "192_26_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "201_43_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "202_6_my_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "202_14_my_value\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "202_24_my_link\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "211_26_self\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "all_of\000", NULL,
    {.position = POS(218, 9)}
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
    {.position = POS(229, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "break\000", NULL,
    {.position = POS(238, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "self\000basic_loops", NULL,
    {.position = POS(239, 7)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "saved_context_of\000basic_loops", NULL,
    {.position = POS(244, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "body\000basic_loops", NULL,
    {.position = POS(261, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "from\000basic_loops", NULL,
    {.position = POS(309, 7)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "324_1_idx\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "less\000std", NULL,
    {.position = POS(326, 14)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not\000std", NULL,
    {.position = POS(326, 14)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "357_1_idx\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "for_each\000", NULL,
    {.position = POS(370, 24)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "372_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "374_0_finally\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "finally\000basic_loops", NULL,
    {.position = POS(381, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "parameter_count_of\000", NULL,
    {.position = POS(397, 5)}
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
    {.position = POS(432, 12)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "445_0_self\000", NULL
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
    "488_13_left\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "488_18_right\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "reduce\000", NULL,
    {.position = POS(498, 24)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "510_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "511_0_function\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "512_0_unit\000", NULL
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
    {.position = POS(570, 24)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "580_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "581_0_map_function\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "582_0_reduce_function\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "append\000", NULL,
    {.position = POS(582, 23)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "583_0_unit\000", NULL
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
    "607_28_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "614_28_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "624_33_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "625_6_my_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "625_14_my_value\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "626_10_new_link\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "626_20_deleted\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "635_33_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "636_6_my_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "636_14_my_value\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "637_10_new_link\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "637_20_deleted\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "646_28_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "647_10_node_1\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "648_10_node_2\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "649_10_node_3\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "650_10_node_4\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "651_10_node_5\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "652_10_node_6\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "653_10_node_7\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "654_10_node_8\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "655_1_deleted\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "and\000std", NULL,
    {.position = POS(670, 11)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "694_28_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "695_10_node_1\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "696_10_node_2\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "697_10_node_3\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "698_10_node_4\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "699_10_node_5\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "700_10_node_6\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "701_10_node_7\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "702_10_node_8\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "703_1_deleted\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "filter\000", NULL,
    {.position = POS(742, 24)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "755_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "756_0_function\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_hash_table\000", NULL,
    {.position = POS(760, 8)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "763_4_new_contents\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "763_18_deleted\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "hash_table\000std", NULL,
    {.const_idx = -func_std__hash_table}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "782_1_table\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "serialization_tag_of\000", NULL,
    {.position = POS(790, 24)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "empty_collection_of\000", NULL,
    {.position = POS(791, 24)}
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
  178, // number of constants
  144, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  constants_table,
  variables_table,
};
