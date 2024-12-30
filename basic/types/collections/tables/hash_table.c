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
  lambda_24 = -52,
  lambda_next = -53,
  lambda_basic_loopsself_is_an_empty_entry = -54,
  lambda_25 = -55,
  func_collision_list_entry___for_each_2 = -56,
  lambda_26 = -57,
  lambda_2_next = -58,
  lambda_2_basic_loopsself_is_an_empty_entry = -59,
  lambda_27 = -60,
  func_hash_table_leaf___for_each_1 = -61,
  func_hash_table_leaf___for_each_2 = -62,
  func_hash_table_node___for_each_1 = -63,
  lambda_28 = -64,
  lambda_3_next = -65,
  num_8 = -66,
  lambda_29 = -67,
  lambda_30 = -68,
  func_hash_table_node___for_each_2 = -69,
  lambda_31 = -70,
  lambda_4_next = -71,
  lambda_32 = -72,
  lambda_33 = -73,
  func_std_types__hash_table___for_each = -74,
  lambda_34 = -75,
  num_2 = -76,
  lambda_35 = -77,
  lambda_36 = -78,
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
  lambda_37 = -90,
  lambda_38 = -91,
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
  lambda_39 = -102,
  lambda_40 = -103,
  lambda_41 = -104,
  lambda_42 = -105,
  func_std_types__hash_table___reduce = -106,
  lambda_43 = -107,
  lambda_44 = -108,
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
  lambda_45 = -120,
  lambda_46 = -121,
  lambda_47 = -122,
  lambda_48 = -123,
  func_empty_hash_table_entry___filter_1 = -124,
  func_empty_hash_table_entry___filter_2 = -125,
  func_hash_table_leaf___filter_1 = -126,
  lambda_49 = -127,
  lambda_50 = -128,
  func_hash_table_leaf___filter_2 = -129,
  lambda_51 = -130,
  lambda_52 = -131,
  func_empty_collision_list_entry___filter_1 = -132,
  func_empty_collision_list_entry___filter_2 = -133,
  func_collision_list_entry___filter_1 = -134,
  lambda_filter_functionmy_value = -135,
  lambda_53 = -136,
  lambda_54 = -137,
  lambda_55 = -138,
  func_collision_list_entry___filter_2 = -139,
  lambda_56 = -140,
  lambda_57 = -141,
  lambda_58 = -142,
  lambda_59 = -143,
  func_hash_table_node___filter_1 = -144,
  lambda_60 = -145,
  lambda_61 = -146,
  lambda_62 = -147,
  lambda_63 = -148,
  lambda_64 = -149,
  lambda_65 = -150,
  lambda_66 = -151,
  lambda_67 = -152,
  lambda_68 = -153,
  lambda_69 = -154,
  lambda_70 = -155,
  func_hash_table_node___filter_2 = -156,
  lambda_71 = -157,
  lambda_72 = -158,
  lambda_73 = -159,
  lambda_74 = -160,
  lambda_75 = -161,
  lambda_76 = -162,
  lambda_77 = -163,
  lambda_78 = -164,
  lambda_79 = -165,
  lambda_80 = -166,
  lambda_81 = -167,
  func_std_types__hash_table___filter = -168,
  lambda_82 = -169,
  lambda_83 = -170,
  lambda_84 = -171,
  lambda_85 = -172,
  lambda_86 = -173,
  lambda_87 = -174,
  func_std__hash_table = -175,
  func_std_types__list___to_hash_table = -176,
  lambda_88 = -177,
  lambda_89 = -178,
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
  var_99_5_myself, // dynamic
  var_100_5_key, // dynamic
  var_101_5_value, // dynamic
  var_hash, // extern
  var_103_4_hash_index, // dynamic
  var_std__bit_or, // extern
  var_104_4_contents, // dynamic
  var_std__equal, // extern
  var_is_defined, // extern
  var_std__plus, // extern
  var_if, // extern
  var_std__minus, // extern
  var_134_33_my_value, // dynamic
  var_142_46_key, // dynamic
  var_143_17_my_value, // dynamic
  var_143_27_my_link, // dynamic
  var_std__bit_and, // extern
  var_std__shift_right, // extern
  var_155_40_hash_index, // dynamic
  var_155_51_key, // dynamic
  var_155_55_value, // dynamic
  var_typed_tuple, // extern
  var_161_27_self, // dynamic
  var_161_32_hash_index, // dynamic
  var_161_43_key, // dynamic
  var_161_47_value, // dynamic
  var_162_9_my_hash_index, // dynamic
  var_162_24_my_key, // dynamic
  var_162_32_my_value, // dynamic
  var_not, // extern
  var_196_27_self, // dynamic
  var_205_44_key, // dynamic
  var_206_9_my_key, // dynamic
  var_206_17_my_value, // dynamic
  var_206_27_my_link, // dynamic
  var_215_27_self, // dynamic
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
  var_328_6_idx, // dynamic
  var_std__less, // extern
  var_std__not, // extern
  var_361_6_idx, // dynamic
  var_for_each, // extern polymorphic
  var_376_5_self, // dynamic
  var_378_5_finally, // dynamic
  var_basic_loops__finally, // extern
  var_parameter_count_of, // extern
  var_map_1, // attribute
  var_map_2, // attribute
  var_mapping_function, // derived
  var_map, // extern polymorphic
  var_449_5_self, // dynamic
  var_reduce_1, // attribute
  var_reduction_function, // derived
  var_492_14_left, // dynamic
  var_492_19_right, // dynamic
  var_reduce, // extern polymorphic
  var_514_5_self, // dynamic
  var_515_5_function, // dynamic
  var_516_5_unit, // dynamic
  var_map_reduce_1, // attribute
  var_map_reduce_2, // attribute
  var_map_reduce, // extern polymorphic
  var_584_5_self, // dynamic
  var_585_5_map_function, // dynamic
  var_586_5_reduce_function, // dynamic
  var_append, // extern
  var_587_5_unit, // dynamic
  var_filter_function, // derived
  var_filter_1, // attribute
  var_filter_2, // attribute
  var_611_29_self, // dynamic
  var_618_29_self, // dynamic
  var_628_34_self, // dynamic
  var_629_9_my_key, // dynamic
  var_629_17_my_value, // dynamic
  var_630_13_new_link, // dynamic
  var_630_23_deleted, // dynamic
  var_639_34_self, // dynamic
  var_640_9_my_key, // dynamic
  var_640_17_my_value, // dynamic
  var_641_13_new_link, // dynamic
  var_641_23_deleted, // dynamic
  var_650_29_self, // dynamic
  var_651_13_node_1, // dynamic
  var_652_13_node_2, // dynamic
  var_653_13_node_3, // dynamic
  var_654_13_node_4, // dynamic
  var_655_13_node_5, // dynamic
  var_656_13_node_6, // dynamic
  var_657_13_node_7, // dynamic
  var_658_13_node_8, // dynamic
  var_659_4_deleted, // dynamic
  var_std__and, // extern
  var_698_29_self, // dynamic
  var_699_13_node_1, // dynamic
  var_700_13_node_2, // dynamic
  var_701_13_node_3, // dynamic
  var_702_13_node_4, // dynamic
  var_703_13_node_5, // dynamic
  var_704_13_node_6, // dynamic
  var_705_13_node_7, // dynamic
  var_706_13_node_8, // dynamic
  var_707_4_deleted, // dynamic
  var_filter, // extern polymorphic
  var_759_5_self, // dynamic
  var_760_5_function, // dynamic
  var_empty_hash_table, // extern
  var_767_11_new_contents, // dynamic
  var_767_25_deleted, // dynamic
  var_std__hash_table, // initialized
  var_to_hash_table, // extern polymorphic
  var_std_types__list, // extern
  var_798_4_table, // dynamic
  var_serialization_tag_of, // extern polymorphic
  var_empty_collection_of, // extern polymorphic
  var_deserializers, // extern
  var_register_type, // extern
  var__END
};


static TAB_NUM t_func_std_types__hash_table[] = {
  1, // locals
  -3, // parameters
  MYSELF_PARAMETER, var_99_5_myself,
  MANDATORY_PARAMETER, var_100_5_key,
  uni_NONE, var_101_5_value,
  // hash(key) | 0xc000'0000 # add sentinel hash index (3)
  var_hash, 1, var_100_5_key, 1, LOCAL(1),
  // $hash_index hash(key) | 0xc000'0000 # add sentinel hash index (3)
  var_std__bit_or, 2, LOCAL(1), num_0xc0000000, 1, var_103_4_hash_index,
  // $contents contents_of(myself)
  var_contents_of, 1, var_99_5_myself, 1, var_104_4_contents,
  // NONE == value
  var_std__equal, 2, uni_NONE, var_101_5_value, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1, lambda_2, TAIL_CALL,
  POS(103, 15),
  POS(103, 3),
  POS(104, 3),
  POS(106, 5),
  POS(105, 3)
};

static TAB_NUM t_lambda_1[] = {
  1, // locals
  0, // parameters
  // retrieve(contents hash_index key)
  var_retrieve, 3, var_104_4_contents, var_103_4_hash_index, var_100_5_key, 1, LOCAL(1),
  //  retrieve(contents hash_index key)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(107, 8),
  POS(107, 7)
};

static TAB_NUM t_lambda_2[] = {
  1, // locals
  0, // parameters
  // is_defined:
  var_is_defined, 1, var_101_5_value, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_value_is_defined, lambda_5, TAIL_CALL,
  POS(110, 15),
  POS(109, 7)
};

static TAB_NUM t_lambda_value_is_defined[] = {
  1, // locals
  0, // parameters
  // insert &contents $success hash_index key value
  var_insert, 4, var_104_4_contents, var_103_4_hash_index, var_100_5_key, var_101_5_value, 2, var_104_4_contents, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_3, lambda_4, TAIL_CALL,
  POS(111, 11),
  POS(112, 11)
};

static TAB_NUM t_lambda_3[] = {
  3, // locals
  0, // parameters
  // length_of(myself)+1
  var_length_of, 1, var_99_5_myself, 1, LOCAL(1),
  // length_of(myself)+1
  var_std__plus, 2, LOCAL(1), num_1, 1, LOCAL(2),
  // myself
  LET, -2, var_99_5_myself, var_contents_of, var_104_4_contents, var_length_of, LOCAL(2), LOCAL(3),
  // 
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(117, 28),
  POS(117, 28),
  POS(115, 15),
  POS(114, 15)
};

static TAB_NUM t_lambda_4[] = {
  1, // locals
  0, // parameters
  // .contents_of contents)
  LET, -1, var_99_5_myself, var_contents_of, var_104_4_contents, LOCAL(1),
  //  myself(.contents_of contents)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(118, 23),
  POS(118, 15)
};

static TAB_NUM t_lambda_5[] = {
  1, // locals
  0, // parameters
  // delete &contents $success hash_index key
  var_delete, 3, var_104_4_contents, var_103_4_hash_index, var_100_5_key, 2, var_104_4_contents, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_6, lambda_7, TAIL_CALL,
  POS(120, 11),
  POS(121, 11)
};

static TAB_NUM t_lambda_6[] = {
  3, // locals
  0, // parameters
  // length_of(myself)-1
  var_length_of, 1, var_99_5_myself, 1, LOCAL(1),
  // length_of(myself)-1
  var_std__minus, 2, LOCAL(1), num_1, 1, LOCAL(2),
  // myself
  LET, -2, var_99_5_myself, var_contents_of, var_104_4_contents, var_length_of, LOCAL(2), LOCAL(3),
  // 
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(126, 28),
  POS(126, 28),
  POS(124, 15),
  POS(123, 15)
};

static TAB_NUM t_lambda_7[] = {
  0, // locals
  0, // parameters
  //  myself
  LET, 1, var_99_5_myself, TAIL_CALL,
  POS(127, 15)
};

static TAB_NUM t_func_empty_hash_table_entry___retrieve[] = {
  1, // locals
  3, // parameters
  LOCAL(1),
  LOCAL(1),
  LOCAL(1),
  // -> undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(131, 60)
};

static TAB_NUM t_func_hash_table_leaf___retrieve[] = {
  4, // locals
  3, // parameters
  LOCAL(2), // 133_29_self
  LOCAL(1),
  LOCAL(3), // 133_46_key
  // self $_my_hash_index $my_key $my_value
  LOCAL(2), 0, 3, LOCAL(1), LOCAL(4), var_134_33_my_value,
  // key == my_key
  var_std__equal, 2, LOCAL(3), LOCAL(4), 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_8, lambda_9, TAIL_CALL,
  POS(134, 3),
  POS(136, 5),
  POS(135, 3)
};

static TAB_NUM t_lambda_8[] = {
  0, // locals
  0, // parameters
  //  my_value
  LET, 1, var_134_33_my_value, TAIL_CALL,
  POS(137, 7)
};

static TAB_NUM t_lambda_9[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(138, 7)
};

static TAB_NUM t_func_empty_collision_list_entry___retrieve[] = {
  1, // locals
  3, // parameters
  LOCAL(1),
  LOCAL(1),
  LOCAL(1),
  // -> undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(140, 59)
};

static TAB_NUM t_func_collision_list_entry___retrieve[] = {
  3, // locals
  3, // parameters
  LOCAL(2), // 142_34_self
  LOCAL(1),
  var_142_46_key,
  // self $my_key $my_value $my_link
  LOCAL(2), 0, 3, LOCAL(3), var_143_17_my_value, var_143_27_my_link,
  // key == my_key
  var_std__equal, 2, var_142_46_key, LOCAL(3), 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_10, lambda_11, TAIL_CALL,
  POS(143, 3),
  POS(145, 5),
  POS(144, 3)
};

static TAB_NUM t_lambda_10[] = {
  0, // locals
  0, // parameters
  //  my_value
  LET, 1, var_143_17_my_value, TAIL_CALL,
  POS(146, 7)
};

static TAB_NUM t_lambda_11[] = {
  0, // locals
  0, // parameters
  // retrieve my_link undefined key
  var_retrieve, 3, var_143_27_my_link, var_undefined, var_142_46_key, TAIL_CALL,
  POS(147, 7)
};

static TAB_NUM t_func_hash_table_node___retrieve[] = {
  6, // locals
  3, // parameters
  LOCAL(3), // 149_29_self
  LOCAL(4), // 149_34_hash_index
  LOCAL(5), // 149_45_key
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
  POS(150, 9),
  POS(150, 3),
  POS(151, 12),
  POS(151, 22),
  POS(151, 3)
};

static TAB_NUM t_func_empty_hash_table_entry___insert[] = {
  1, // locals
  4, // parameters
  LOCAL(1),
  var_155_40_hash_index,
  var_155_51_key,
  var_155_55_value,
  // hash_index == 3
  var_std__equal, 2, var_155_40_hash_index, num_3, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_12, lambda_13, TAIL_CALL,
  POS(157, 5),
  POS(156, 3)
};

static TAB_NUM t_lambda_12[] = {
  1, // locals
  0, // parameters
  // typed_tuple(collision_list_entry key value empty_collision_list_entry) true
  var_typed_tuple, 4, var_collision_list_entry, var_155_51_key, var_155_55_value, var_empty_collision_list_entry, 1, LOCAL(1),
  //  typed_tuple(collision_list_entry key value empty_collision_list_entry) true
  LET, 2, LOCAL(1), var_true, TAIL_CALL,
  POS(158, 8),
  POS(158, 7)
};

static TAB_NUM t_lambda_13[] = {
  1, // locals
  0, // parameters
  // typed_tuple(hash_table_leaf hash_index key value) true
  var_typed_tuple, 4, var_hash_table_leaf, var_155_40_hash_index, var_155_51_key, var_155_55_value, 1, LOCAL(1),
  //  typed_tuple(hash_table_leaf hash_index key value) true
  LET, 2, LOCAL(1), var_true, TAIL_CALL,
  POS(159, 8),
  POS(159, 7)
};

static TAB_NUM t_func_hash_table_leaf___insert[] = {
  1, // locals
  4, // parameters
  var_161_27_self,
  var_161_32_hash_index,
  var_161_43_key,
  var_161_47_value,
  // self $my_hash_index $my_key $my_value
  var_161_27_self, 0, 3, var_162_9_my_hash_index, var_162_24_my_key, var_162_32_my_value,
  // key == my_key
  var_std__equal, 2, var_161_43_key, var_162_24_my_key, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_14, lambda_15, TAIL_CALL,
  POS(162, 3),
  POS(164, 5),
  POS(163, 3)
};

static TAB_NUM t_lambda_14[] = {
  1, // locals
  0, // parameters
  // typed_tuple(self my_hash_index key value) false
  var_typed_tuple, 4, var_161_27_self, var_162_9_my_hash_index, var_161_43_key, var_161_47_value, 1, LOCAL(1),
  //  typed_tuple(self my_hash_index key value) false
  LET, 2, LOCAL(1), var_false, TAIL_CALL,
  POS(165, 8),
  POS(165, 7)
};

static TAB_NUM t_lambda_15[] = {
  2, // locals
  0, // parameters
  // insert hash_table_node $new_node $_did_insert
  var_insert, 4, var_hash_table_node, var_162_9_my_hash_index, var_162_24_my_key, var_162_32_my_value, 2, LOCAL(2), LOCAL(1),
  // insert new_node hash_index key value
  var_insert, 4, LOCAL(2), var_161_32_hash_index, var_161_43_key, var_161_47_value, TAIL_CALL,
  POS(167, 7),
  POS(169, 7)
};

static TAB_NUM t_func_empty_collision_list_entry___insert[] = {
  4, // locals
  4, // parameters
  LOCAL(2), // 171_38_self
  LOCAL(1),
  LOCAL(3), // 171_50_key
  LOCAL(4), // 171_54_value
  // typed_tuple(collision_list_entry key value self) true
  var_typed_tuple, 4, var_collision_list_entry, LOCAL(3), LOCAL(4), LOCAL(2), 1, LOCAL(1),
  // -> typed_tuple(collision_list_entry key value self) true
  LET, 2, LOCAL(1), var_true, TAIL_CALL,
  POS(172, 6),
  POS(172, 3)
};

static TAB_NUM t_func_collision_list_entry___insert[] = {
  6, // locals
  4, // parameters
  LOCAL(3), // 174_32_self
  LOCAL(1),
  LOCAL(4), // 174_44_key
  LOCAL(5), // 174_48_value
  // delete &self $did_delete undefined key
  var_delete, 3, LOCAL(3), var_undefined, LOCAL(4), 2, LOCAL(3), LOCAL(6),
  // typed_tuple(collision_list_entry key value self) not(did_delete)
  var_typed_tuple, 4, var_collision_list_entry, LOCAL(4), LOCAL(5), LOCAL(3), 1, LOCAL(1),
  // not(did_delete)
  var_not, 1, LOCAL(6), 1, LOCAL(2),
  // -> typed_tuple(collision_list_entry key value self) not(did_delete)
  LET, 2, LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(175, 3),
  POS(176, 6),
  POS(176, 55),
  POS(176, 3)
};

static TAB_NUM t_func_hash_table_node___insert[] = {
  8, // locals
  4, // parameters
  LOCAL(3), // 178_27_self
  LOCAL(4), // 178_32_hash_index
  LOCAL(5), // 178_43_key
  LOCAL(6), // 178_47_value
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
  POS(179, 9),
  POS(179, 3),
  POS(180, 11),
  POS(180, 33),
  POS(180, 3),
  POS(180, 11),
  POS(181, 3)
};

static TAB_NUM t_func_empty_hash_table_entry___delete[] = {
  2, // locals
  3, // parameters
  LOCAL(2), // 194_34_self
  LOCAL(1),
  LOCAL(1),
  // -> self false
  LET, 2, LOCAL(2), var_false, TAIL_CALL,
  POS(194, 57)
};

static TAB_NUM t_func_hash_table_leaf___delete[] = {
  3, // locals
  3, // parameters
  var_196_27_self,
  LOCAL(1),
  LOCAL(2), // 196_44_key
  // self $_my_hash_index $my_key $_my_value
  var_196_27_self, 0, 3, LOCAL(1), LOCAL(3), LOCAL(1),
  // key == my_key
  var_std__equal, 2, LOCAL(2), LOCAL(3), 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_16, lambda_17, TAIL_CALL,
  POS(197, 3),
  POS(199, 5),
  POS(198, 3)
};

static TAB_NUM t_lambda_16[] = {
  0, // locals
  0, // parameters
  //  empty_hash_table_entry true
  LET, 2, var_empty_hash_table_entry, var_true, TAIL_CALL,
  POS(200, 7)
};

static TAB_NUM t_lambda_17[] = {
  0, // locals
  0, // parameters
  //  self false
  LET, 2, var_196_27_self, var_false, TAIL_CALL,
  POS(201, 7)
};

static TAB_NUM t_func_empty_collision_list_entry___delete[] = {
  2, // locals
  3, // parameters
  LOCAL(2), // 203_38_self
  LOCAL(1),
  LOCAL(1),
  // -> self false
  LET, 2, LOCAL(2), var_false, TAIL_CALL,
  POS(203, 56)
};

static TAB_NUM t_func_collision_list_entry___delete[] = {
  2, // locals
  3, // parameters
  LOCAL(2), // 205_32_self
  LOCAL(1),
  var_205_44_key,
  // self $my_key $my_value $my_link
  LOCAL(2), 0, 3, var_206_9_my_key, var_206_17_my_value, var_206_27_my_link,
  // key == my_key
  var_std__equal, 2, var_205_44_key, var_206_9_my_key, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_18, lambda_19, TAIL_CALL,
  POS(206, 3),
  POS(208, 5),
  POS(207, 3)
};

static TAB_NUM t_lambda_18[] = {
  0, // locals
  0, // parameters
  // -> my_link true
  LET, 2, var_206_27_my_link, var_true, TAIL_CALL,
  POS(210, 7)
};

static TAB_NUM t_lambda_19[] = {
  2, // locals
  0, // parameters
  // delete &my_link undefined key $did_delete
  var_delete, 3, var_206_27_my_link, var_undefined, var_205_44_key, 2, var_206_27_my_link, LOCAL(2),
  // typed_tuple(collision_list_entry my_key my_value my_link) did_delete
  var_typed_tuple, 4, var_collision_list_entry, var_206_9_my_key, var_206_17_my_value, var_206_27_my_link, 1, LOCAL(1),
  // -> typed_tuple(collision_list_entry my_key my_value my_link) did_delete
  LET, 2, LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(212, 7),
  POS(213, 10),
  POS(213, 7)
};

static TAB_NUM t_func_hash_table_node___delete[] = {
  6, // locals
  3, // parameters
  var_215_27_self,
  LOCAL(3), // 215_32_hash_index
  LOCAL(4), // 215_43_key
  // hash_index & 7)+1
  var_std__bit_and, 2, LOCAL(3), num_7, 1, LOCAL(1),
  // $idx (hash_index & 7)+1
  var_std__plus, 2, LOCAL(1), num_1, 1, LOCAL(5),
  // self(idx) $success hash_index >> 3 key
  var_215_27_self, 1, LOCAL(5), 1, LOCAL(1),
  // hash_index >> 3 key
  var_std__shift_right, 2, LOCAL(3), num_3, 1, LOCAL(2),
  // delete &self(idx) $success hash_index >> 3 key
  var_delete, 3, LOCAL(1), LOCAL(2), LOCAL(4), 2, LOCAL(1), LOCAL(6),
  // self(idx) $success hash_index >> 3 key
  var_215_27_self, 2, LOCAL(5), LOCAL(1), 1, var_215_27_self,
  // if
  var_if, 3, LOCAL(6), lambda_20, lambda_23, TAIL_CALL,
  POS(216, 9),
  POS(216, 3),
  POS(217, 11),
  POS(217, 30),
  POS(217, 3),
  POS(217, 11),
  POS(218, 3)
};

static TAB_NUM t_lambda_20[] = {
  1, // locals
  0, // parameters
  // all_of(self is_an_empty_entry)
  var_all_of, 2, var_215_27_self, var_is_an_empty_entry, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_21, lambda_22, TAIL_CALL,
  POS(222, 9),
  POS(221, 7)
};

static TAB_NUM t_lambda_21[] = {
  0, // locals
  0, // parameters
  //  empty_hash_table_entry true
  LET, 2, var_empty_hash_table_entry, var_true, TAIL_CALL,
  POS(223, 11)
};

static TAB_NUM t_lambda_22[] = {
  0, // locals
  0, // parameters
  //  self true
  LET, 2, var_215_27_self, var_true, TAIL_CALL,
  POS(224, 11)
};

static TAB_NUM t_lambda_23[] = {
  0, // locals
  0, // parameters
  //  self false
  LET, 2, var_215_27_self, var_false, TAIL_CALL,
  POS(225, 7)
};

static TAB_NUM t_func_empty_hash_table_entry___for_each_1[] = {
  1, // locals
  1, // parameters
  LOCAL(1),
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(233, 3)
};

static TAB_NUM t_func_empty_hash_table_entry___for_each_2[] = {
  1, // locals
  1, // parameters
  LOCAL(1),
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(236, 3)
};

static TAB_NUM t_func_collision_list_entry___for_each_1[] = {
  2, // locals
  1, // parameters
  LOCAL(1), // 238_36_self
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
  POS(239, 3),
  POS(245, 3),
  POS(247, 3),
  POS(253, 4),
  POS(255, 3),
  POS(267, 3)
};

static TAB_NUM t_lambda_24[] = {
  2, // locals
  -1, // parameters
  MYSELF_PARAMETER, LOCAL(2), // 247_44_myself
  // basic_loops::saved_context_of(myself)
  var_basic_loops__saved_context_of, 1, LOCAL(2), 1, LOCAL(1),
  // basic_loops::saved_context_of(myself)
  LOCAL(1), 0, 3, var_next, var_break, var_basic_loops__self,
  // break!
  var_break, 0, IO_TAIL_CALL,
  POS(248, 5),
  POS(248, 5),
  POS(251, 5)
};

static TAB_NUM t_lambda_next[] = {
  1, // locals
  0, // parameters
  // is_an_empty_entry:
  var_is_an_empty_entry, 1, var_basic_loops__self, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_basic_loopsself_is_an_empty_entry, lambda_25, IO_TAIL_CALL,
  POS(257, 25),
  POS(256, 5)
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
  POS(258, 9),
  POS(258, 9),
  POS(261, 9)
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
  POS(263, 9),
  POS(264, 9),
  POS(265, 9)
};

static TAB_NUM t_func_collision_list_entry___for_each_2[] = {
  2, // locals
  1, // parameters
  LOCAL(1), // 269_36_self
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
  POS(270, 3),
  POS(276, 3),
  POS(278, 3),
  POS(284, 4),
  POS(286, 3),
  POS(298, 3)
};

static TAB_NUM t_lambda_26[] = {
  2, // locals
  -1, // parameters
  MYSELF_PARAMETER, LOCAL(2), // 278_44_myself
  // basic_loops::saved_context_of(myself)
  var_basic_loops__saved_context_of, 1, LOCAL(2), 1, LOCAL(1),
  // basic_loops::saved_context_of(myself)
  LOCAL(1), 0, 3, var_next, var_break, var_basic_loops__self,
  // break!
  var_break, 0, IO_TAIL_CALL,
  POS(279, 5),
  POS(279, 5),
  POS(282, 5)
};

static TAB_NUM t_lambda_2_next[] = {
  1, // locals
  0, // parameters
  // is_an_empty_entry:
  var_is_an_empty_entry, 1, var_basic_loops__self, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_2_basic_loopsself_is_an_empty_entry, lambda_27, IO_TAIL_CALL,
  POS(288, 25),
  POS(287, 5)
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
  POS(289, 9),
  POS(289, 9),
  POS(292, 9)
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
  POS(294, 9),
  POS(295, 9),
  POS(296, 9)
};

static TAB_NUM t_func_hash_table_leaf___for_each_1[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 300_31_self
  // self $_hash $_key $value
  LOCAL(2), 0, 3, LOCAL(1), LOCAL(1), LOCAL(3),
  // basic_loops::body! value
  var_basic_loops__body, 1, LOCAL(3), IO_TAIL_CALL,
  POS(301, 3),
  POS(302, 3)
};

static TAB_NUM t_func_hash_table_leaf___for_each_2[] = {
  4, // locals
  1, // parameters
  LOCAL(2), // 304_31_self
  // self $_hash $key $value
  LOCAL(2), 0, 3, LOCAL(1), LOCAL(3), LOCAL(4),
  // basic_loops::body! key value
  var_basic_loops__body, 2, LOCAL(3), LOCAL(4), IO_TAIL_CALL,
  POS(305, 3),
  POS(306, 3)
};

static TAB_NUM t_func_hash_table_node___for_each_1[] = {
  2, // locals
  1, // parameters
  LOCAL(1), // 308_31_self
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
  POS(309, 3),
  POS(316, 3),
  POS(317, 3),
  POS(319, 3),
  POS(325, 4),
  POS(327, 3),
  POS(339, 3)
};

static TAB_NUM t_lambda_28[] = {
  2, // locals
  -1, // parameters
  MYSELF_PARAMETER, LOCAL(2), // 319_44_myself
  // basic_loops::saved_context_of(myself)
  var_basic_loops__saved_context_of, 1, LOCAL(2), 1, LOCAL(1),
  // basic_loops::saved_context_of(myself)
  LOCAL(1), 0, 4, var_next, var_break, var_basic_loops__from, var_basic_loops__self,
  // break!
  var_break, 0, IO_TAIL_CALL,
  POS(320, 5),
  POS(320, 5),
  POS(323, 5)
};

static TAB_NUM t_lambda_3_next[] = {
  2, // locals
  0, // parameters
  // $idx basic_loops::from
  LET, 1, var_basic_loops__from, 1, var_328_6_idx,
  // 8:
  var_std__less, 2, num_8, var_328_6_idx, 1, LOCAL(1),
  // 8:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_29, lambda_30, IO_TAIL_CALL,
  POS(328, 5),
  POS(330, 14),
  POS(330, 14),
  POS(329, 5)
};

static TAB_NUM t_lambda_29[] = {
  1, // locals
  0, // parameters
  // !basic_loops::from idx+1
  var_std__plus, 2, var_328_6_idx, num_1, 1, var_basic_loops__from,
  // basic_loops::self(idx)
  var_basic_loops__self, 1, var_328_6_idx, 1, LOCAL(1),
  // for_each_1! basic_loops::self(idx)
  var_for_each_1, 1, LOCAL(1), IO_TAIL_CALL,
  POS(331, 9),
  POS(332, 21),
  POS(332, 9)
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
  POS(334, 9),
  POS(334, 9),
  POS(337, 9)
};

static TAB_NUM t_func_hash_table_node___for_each_2[] = {
  2, // locals
  1, // parameters
  LOCAL(1), // 341_31_self
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
  POS(342, 3),
  POS(349, 3),
  POS(350, 3),
  POS(352, 3),
  POS(358, 4),
  POS(360, 3),
  POS(372, 3)
};

static TAB_NUM t_lambda_31[] = {
  2, // locals
  -1, // parameters
  MYSELF_PARAMETER, LOCAL(2), // 352_44_myself
  // basic_loops::saved_context_of(myself)
  var_basic_loops__saved_context_of, 1, LOCAL(2), 1, LOCAL(1),
  // basic_loops::saved_context_of(myself)
  LOCAL(1), 0, 4, var_next, var_break, var_basic_loops__from, var_basic_loops__self,
  // break!
  var_break, 0, IO_TAIL_CALL,
  POS(353, 5),
  POS(353, 5),
  POS(356, 5)
};

static TAB_NUM t_lambda_4_next[] = {
  2, // locals
  0, // parameters
  // $idx basic_loops::from
  LET, 1, var_basic_loops__from, 1, var_361_6_idx,
  // 8:
  var_std__less, 2, num_8, var_361_6_idx, 1, LOCAL(1),
  // 8:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_32, lambda_33, IO_TAIL_CALL,
  POS(361, 5),
  POS(363, 14),
  POS(363, 14),
  POS(362, 5)
};

static TAB_NUM t_lambda_32[] = {
  1, // locals
  0, // parameters
  // !basic_loops::from idx+1
  var_std__plus, 2, var_361_6_idx, num_1, 1, var_basic_loops__from,
  // basic_loops::self(idx)
  var_basic_loops__self, 1, var_361_6_idx, 1, LOCAL(1),
  // for_each_2! basic_loops::self(idx)
  var_for_each_2, 1, LOCAL(1), IO_TAIL_CALL,
  POS(364, 9),
  POS(365, 21),
  POS(365, 9)
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
  POS(367, 9),
  POS(367, 9),
  POS(370, 9)
};

static TAB_NUM t_func_std_types__hash_table___for_each[] = {
  4, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_376_5_self,
  MANDATORY_PARAMETER, LOCAL(3), // 377_5_body
  var_next, var_378_5_finally,
  // $saved_context
  var_tuple, 4, var_next, var_break, var_basic_loops__body, var_basic_loops__finally, 1, LOCAL(4),
  // !basic_loops::body body
  LET, 1, LOCAL(3), 1, var_basic_loops__body,
  // !basic_loops::finally finally
  LET, 1, var_378_5_finally, 1, var_basic_loops__finally,
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
  POS(380, 3),
  POS(387, 3),
  POS(388, 3),
  POS(390, 3),
  POS(397, 4),
  POS(398, 3),
  POS(401, 5),
  POS(401, 5),
  POS(400, 3)
};

static TAB_NUM t_lambda_34[] = {
  2, // locals
  -1, // parameters
  MYSELF_PARAMETER, LOCAL(2), // 390_44_myself
  // !finally basic_loops::finally
  LET, 1, var_basic_loops__finally, 1, var_378_5_finally,
  // basic_loops::saved_context_of(myself)
  var_basic_loops__saved_context_of, 1, LOCAL(2), 1, LOCAL(1),
  // basic_loops::saved_context_of(myself)
  LOCAL(1), 0, 4, var_next, var_break, var_basic_loops__body, var_basic_loops__finally,
  // finally!
  var_378_5_finally, 0, IO_TAIL_CALL,
  POS(391, 5),
  POS(392, 5),
  POS(392, 5),
  POS(395, 5)
};

static TAB_NUM t_lambda_35[] = {
  1, // locals
  0, // parameters
  // contents_of(self)
  var_contents_of, 1, var_376_5_self, 1, LOCAL(1),
  // for_each_2! contents_of(self)
  var_for_each_2, 1, LOCAL(1), IO_TAIL_CALL,
  POS(402, 19),
  POS(402, 7)
};

static TAB_NUM t_lambda_36[] = {
  1, // locals
  0, // parameters
  // contents_of(self)
  var_contents_of, 1, var_376_5_self, 1, LOCAL(1),
  // for_each_1! contents_of(self)
  var_for_each_1, 1, LOCAL(1), IO_TAIL_CALL,
  POS(404, 19),
  POS(404, 7)
};

static TAB_NUM t_func_empty_hash_table_entry___map_1[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 413_33_self
  // -> self
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(413, 39)
};

static TAB_NUM t_func_empty_hash_table_entry___map_2[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 414_33_self
  // -> self
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(414, 39)
};

static TAB_NUM t_func_hash_table_leaf___map_1[] = {
  5, // locals
  1, // parameters
  LOCAL(2), // 416_26_self
  // self $my_hash_index $my_key $my_value
  LOCAL(2), 0, 3, LOCAL(3), LOCAL(4), LOCAL(5),
  // mapping_function(my_value)
  var_mapping_function, 1, LOCAL(5), 1, LOCAL(1),
  // typed_tuple self my_hash_index my_key mapping_function(my_value)
  var_typed_tuple, 4, LOCAL(2), LOCAL(3), LOCAL(4), LOCAL(1), TAIL_CALL,
  POS(417, 3),
  POS(418, 41),
  POS(418, 3)
};

static TAB_NUM t_func_hash_table_leaf___map_2[] = {
  5, // locals
  1, // parameters
  LOCAL(2), // 420_26_self
  // self $my_hash_index $my_key $my_value
  LOCAL(2), 0, 3, LOCAL(3), LOCAL(4), LOCAL(5),
  // mapping_function(my_key my_value)
  var_mapping_function, 2, LOCAL(4), LOCAL(5), 1, LOCAL(1),
  // typed_tuple self my_hash_index my_key mapping_function(my_key my_value)
  var_typed_tuple, 4, LOCAL(2), LOCAL(3), LOCAL(4), LOCAL(1), TAIL_CALL,
  POS(421, 3),
  POS(422, 41),
  POS(422, 3)
};

static TAB_NUM t_func_empty_collision_list_entry___map_1[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 424_37_self
  // -> self
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(424, 43)
};

static TAB_NUM t_func_empty_collision_list_entry___map_2[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 425_37_self
  // -> self
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(425, 43)
};

static TAB_NUM t_func_collision_list_entry___map_1[] = {
  6, // locals
  1, // parameters
  LOCAL(3), // 427_31_self
  // self $my_key $my_value $my_link
  LOCAL(3), 0, 3, LOCAL(4), LOCAL(5), LOCAL(6),
  // mapping_function(my_value) map_1(my_link)
  var_mapping_function, 1, LOCAL(5), 1, LOCAL(1),
  // map_1(my_link)
  var_map_1, 1, LOCAL(6), 1, LOCAL(2),
  // typed_tuple self my_key mapping_function(my_value) map_1(my_link)
  var_typed_tuple, 4, LOCAL(3), LOCAL(4), LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(428, 3),
  POS(429, 27),
  POS(429, 54),
  POS(429, 3)
};

static TAB_NUM t_func_collision_list_entry___map_2[] = {
  6, // locals
  1, // parameters
  LOCAL(3), // 431_31_self
  // self $my_key $my_value $my_link
  LOCAL(3), 0, 3, LOCAL(4), LOCAL(5), LOCAL(6),
  // mapping_function(my_key my_value) map_2(my_link)
  var_mapping_function, 2, LOCAL(4), LOCAL(5), 1, LOCAL(1),
  // map_2(my_link)
  var_map_2, 1, LOCAL(6), 1, LOCAL(2),
  // typed_tuple self my_key mapping_function(my_key my_value) map_2(my_link)
  var_typed_tuple, 4, LOCAL(3), LOCAL(4), LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(432, 3),
  POS(433, 27),
  POS(433, 61),
  POS(433, 3)
};

static TAB_NUM t_func_hash_table_node___map_1[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 435_26_self
  // map(self map_1)
  var_map, 2, LOCAL(2), var_map_1, 1, LOCAL(1),
  // typed_tuple self map(self map_1)
  var_typed_tuple, 2, LOCAL(2), LOCAL(1), TAIL_CALL,
  POS(436, 20),
  POS(436, 3)
};

static TAB_NUM t_func_hash_table_node___map_2[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 438_26_self
  // map(self map_2)
  var_map, 2, LOCAL(2), var_map_2, 1, LOCAL(1),
  // typed_tuple self map(self map_2)
  var_typed_tuple, 2, LOCAL(2), LOCAL(1), TAIL_CALL,
  POS(439, 20),
  POS(439, 3)
};

static TAB_NUM t_func_std_types__hash_table___map[] = {
  3, // locals
  2, // parameters
  var_449_5_self,
  LOCAL(3), // 450_5_function
  // !mapping_function function
  LET, 1, LOCAL(3), 1, var_mapping_function,
  // parameter_count_of(function) == 2:
  var_parameter_count_of, 1, LOCAL(3), 1, LOCAL(1),
  // parameter_count_of(function) == 2:
  var_std__equal, 2, LOCAL(1), num_2, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_37, lambda_38, TAIL_CALL,
  POS(452, 3),
  POS(454, 5),
  POS(454, 5),
  POS(453, 3)
};

static TAB_NUM t_lambda_37[] = {
  1, // locals
  0, // parameters
  // contents_of
  var_contents_of, 1, var_449_5_self, 1, LOCAL(1),
  // map_2 &self.contents_of
  var_map_2, 1, LOCAL(1), 1, LOCAL(1),
  // self.contents_of
  LET, -1, var_449_5_self, var_contents_of, LOCAL(1), var_449_5_self,
  // -> self
  LET, 1, var_449_5_self, TAIL_CALL,
  POS(455, 19),
  POS(455, 7),
  POS(455, 14),
  POS(456, 7)
};

static TAB_NUM t_lambda_38[] = {
  1, // locals
  0, // parameters
  // contents_of
  var_contents_of, 1, var_449_5_self, 1, LOCAL(1),
  // map_1 &self.contents_of
  var_map_1, 1, LOCAL(1), 1, LOCAL(1),
  // self.contents_of
  LET, -1, var_449_5_self, var_contents_of, LOCAL(1), var_449_5_self,
  // -> self
  LET, 1, var_449_5_self, TAIL_CALL,
  POS(458, 19),
  POS(458, 7),
  POS(458, 14),
  POS(459, 7)
};

static TAB_NUM t_func_empty_hash_table_entry___reduce_1[] = {
  1, // locals
  1, // parameters
  LOCAL(1),
  // -> UNIT
  LET, 1, uni_UNIT, TAIL_CALL,
  POS(469, 43)
};

static TAB_NUM t_func_hash_table_leaf___reduce_1[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 471_29_self
  // self $_my_hash_index $_my_key $my_value
  LOCAL(2), 0, 3, LOCAL(1), LOCAL(1), LOCAL(3),
  // -> my_value
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(472, 3),
  POS(473, 3)
};

static TAB_NUM t_func_empty_collision_list_entry___reduce_1[] = {
  1, // locals
  1, // parameters
  LOCAL(1),
  // -> UNIT
  LET, 1, uni_UNIT, TAIL_CALL,
  POS(475, 47)
};

static TAB_NUM t_func_collision_list_entry___reduce_1[] = {
  6, // locals
  1, // parameters
  LOCAL(3), // 477_34_self
  // self $my_key $my_value $my_link
  LOCAL(3), 0, 3, LOCAL(4), LOCAL(5), LOCAL(6),
  // mapping_function(my_key my_value)
  var_mapping_function, 2, LOCAL(4), LOCAL(5), 1, LOCAL(1),
  // reduce_1(my_link)
  var_reduce_1, 1, LOCAL(6), 1, LOCAL(2),
  // my_reduce
  func_my_reduce, 2, LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(478, 3),
  POS(480, 5),
  POS(481, 5),
  POS(479, 3)
};

static TAB_NUM t_func_hash_table_node___reduce_1[] = {
  11, // locals
  1, // parameters
  LOCAL(5), // 483_29_self
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
  POS(486, 27),
  POS(486, 18),
  POS(486, 45),
  POS(486, 36),
  POS(486, 3),
  POS(487, 27),
  POS(487, 18),
  POS(487, 45),
  POS(487, 36),
  POS(487, 3),
  POS(488, 3),
  POS(489, 3),
  POS(490, 6),
  POS(490, 3)
};

static TAB_NUM t_func_my_reduce[] = {
  1, // locals
  2, // parameters
  var_492_14_left,
  var_492_19_right,
  // UNIT == left
  var_std__equal, 2, uni_UNIT, var_492_14_left, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_39, lambda_40, TAIL_CALL,
  POS(494, 5),
  POS(493, 3)
};

static TAB_NUM t_lambda_39[] = {
  0, // locals
  0, // parameters
  //  right
  LET, 1, var_492_19_right, TAIL_CALL,
  POS(495, 7)
};

static TAB_NUM t_lambda_40[] = {
  1, // locals
  0, // parameters
  // UNIT == right
  var_std__equal, 2, uni_UNIT, var_492_19_right, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_41, lambda_42, TAIL_CALL,
  POS(498, 9),
  POS(497, 7)
};

static TAB_NUM t_lambda_41[] = {
  0, // locals
  0, // parameters
  //  left
  LET, 1, var_492_14_left, TAIL_CALL,
  POS(499, 11)
};

static TAB_NUM t_lambda_42[] = {
  1, // locals
  0, // parameters
  // reduction_function(left right)
  var_reduction_function, 2, var_492_14_left, var_492_19_right, 1, LOCAL(1),
  //  reduction_function(left right)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(500, 12),
  POS(500, 11)
};

static TAB_NUM t_func_std_types__hash_table___reduce[] = {
  2, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_514_5_self,
  MANDATORY_PARAMETER, var_515_5_function,
  var_undefined, var_516_5_unit,
  // length_of(self) == 0
  var_length_of, 1, var_514_5_self, 1, LOCAL(1),
  // length_of(self) == 0
  var_std__equal, 2, LOCAL(1), num_0, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_43, lambda_44, TAIL_CALL,
  POS(519, 5),
  POS(519, 5),
  POS(518, 3)
};

static TAB_NUM t_lambda_43[] = {
  0, // locals
  0, // parameters
  //  unit
  LET, 1, var_516_5_unit, TAIL_CALL,
  POS(520, 7)
};

static TAB_NUM t_lambda_44[] = {
  1, // locals
  0, // parameters
  // !reduction_function function
  LET, 1, var_515_5_function, 1, var_reduction_function,
  // contents_of(self)
  var_contents_of, 1, var_514_5_self, 1, LOCAL(1),
  // reduce_1 contents_of(self)
  var_reduce_1, 1, LOCAL(1), TAIL_CALL,
  POS(522, 7),
  POS(523, 16),
  POS(523, 7)
};

static TAB_NUM t_func_empty_hash_table_entry___map_reduce_1[] = {
  1, // locals
  1, // parameters
  LOCAL(1),
  // -> UNIT
  LET, 1, uni_UNIT, TAIL_CALL,
  POS(530, 47)
};

static TAB_NUM t_func_empty_hash_table_entry___map_reduce_2[] = {
  1, // locals
  1, // parameters
  LOCAL(1),
  // -> UNIT
  LET, 1, uni_UNIT, TAIL_CALL,
  POS(531, 47)
};

static TAB_NUM t_func_hash_table_leaf___map_reduce_1[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 533_33_self
  // self $_my_hash_index $_my_key $my_value
  LOCAL(2), 0, 3, LOCAL(1), LOCAL(1), LOCAL(3),
  // mapping_function(my_value)
  var_mapping_function, 1, LOCAL(3), 1, LOCAL(1),
  // -> mapping_function(my_value)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(534, 3),
  POS(535, 6),
  POS(535, 3)
};

static TAB_NUM t_func_hash_table_leaf___map_reduce_2[] = {
  4, // locals
  1, // parameters
  LOCAL(2), // 537_33_self
  // self $_my_hash_index $my_key $my_value
  LOCAL(2), 0, 3, LOCAL(1), LOCAL(3), LOCAL(4),
  // mapping_function(my_key my_value)
  var_mapping_function, 2, LOCAL(3), LOCAL(4), 1, LOCAL(1),
  // -> mapping_function(my_key my_value)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(538, 3),
  POS(539, 6),
  POS(539, 3)
};

static TAB_NUM t_func_empty_collision_list_entry___map_reduce_1[] = {
  1, // locals
  1, // parameters
  LOCAL(1),
  // -> UNIT
  LET, 1, uni_UNIT, TAIL_CALL,
  POS(541, 51)
};

static TAB_NUM t_func_empty_collision_list_entry___map_reduce_2[] = {
  1, // locals
  1, // parameters
  LOCAL(1),
  // -> UNIT
  LET, 1, uni_UNIT, TAIL_CALL,
  POS(542, 51)
};

static TAB_NUM t_func_collision_list_entry___map_reduce_1[] = {
  6, // locals
  1, // parameters
  LOCAL(3), // 544_38_self
  // self $my_key $my_value $my_link
  LOCAL(3), 0, 3, LOCAL(4), LOCAL(5), LOCAL(6),
  // mapping_function(my_key my_value)
  var_mapping_function, 2, LOCAL(4), LOCAL(5), 1, LOCAL(1),
  // map_reduce_1(my_link)
  var_map_reduce_1, 1, LOCAL(6), 1, LOCAL(2),
  // my_reduce
  func_my_reduce, 2, LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(545, 3),
  POS(547, 5),
  POS(548, 5),
  POS(546, 3)
};

static TAB_NUM t_func_collision_list_entry___map_reduce_2[] = {
  6, // locals
  1, // parameters
  LOCAL(3), // 550_38_self
  // self $my_key $my_value $my_link
  LOCAL(3), 0, 3, LOCAL(4), LOCAL(5), LOCAL(6),
  // mapping_function(my_key my_value)
  var_mapping_function, 2, LOCAL(4), LOCAL(5), 1, LOCAL(1),
  // map_reduce_2(my_link)
  var_map_reduce_2, 1, LOCAL(6), 1, LOCAL(2),
  // my_reduce
  func_my_reduce, 2, LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(551, 3),
  POS(553, 5),
  POS(554, 5),
  POS(552, 3)
};

static TAB_NUM t_func_hash_table_node___map_reduce_1[] = {
  11, // locals
  1, // parameters
  LOCAL(5), // 556_33_self
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
  POS(559, 31),
  POS(559, 18),
  POS(559, 53),
  POS(559, 40),
  POS(559, 3),
  POS(560, 31),
  POS(560, 18),
  POS(560, 53),
  POS(560, 40),
  POS(560, 3),
  POS(561, 3),
  POS(562, 3),
  POS(563, 6),
  POS(563, 3)
};

static TAB_NUM t_func_hash_table_node___map_reduce_2[] = {
  11, // locals
  1, // parameters
  LOCAL(5), // 565_33_self
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
  POS(569, 31),
  POS(569, 18),
  POS(569, 53),
  POS(569, 40),
  POS(569, 3),
  POS(570, 3),
  POS(571, 3),
  POS(572, 6),
  POS(572, 3)
};

static TAB_NUM t_func_std_types__hash_table___map_reduce[] = {
  2, // locals
  -4, // parameters
  MANDATORY_PARAMETER, var_584_5_self,
  MANDATORY_PARAMETER, var_585_5_map_function,
  var_append, var_586_5_reduce_function,
  var_undefined, var_587_5_unit,
  // length_of(self) == 0
  var_length_of, 1, var_584_5_self, 1, LOCAL(1),
  // length_of(self) == 0
  var_std__equal, 2, LOCAL(1), num_0, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_45, lambda_46, TAIL_CALL,
  POS(590, 5),
  POS(590, 5),
  POS(589, 3)
};

static TAB_NUM t_lambda_45[] = {
  0, // locals
  0, // parameters
  //  unit
  LET, 1, var_587_5_unit, TAIL_CALL,
  POS(591, 7)
};

static TAB_NUM t_lambda_46[] = {
  2, // locals
  0, // parameters
  // !mapping_function map_function
  LET, 1, var_585_5_map_function, 1, var_mapping_function,
  // !reduction_function reduce_function
  LET, 1, var_586_5_reduce_function, 1, var_reduction_function,
  // parameter_count_of(map_function) == 2:
  var_parameter_count_of, 1, var_585_5_map_function, 1, LOCAL(1),
  // parameter_count_of(map_function) == 2:
  var_std__equal, 2, LOCAL(1), num_2, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_47, lambda_48, TAIL_CALL,
  POS(593, 7),
  POS(594, 7),
  POS(596, 9),
  POS(596, 9),
  POS(595, 7)
};

static TAB_NUM t_lambda_47[] = {
  1, // locals
  0, // parameters
  // contents_of(self)
  var_contents_of, 1, var_584_5_self, 1, LOCAL(1),
  // map_reduce_2 contents_of(self)
  var_map_reduce_2, 1, LOCAL(1), TAIL_CALL,
  POS(597, 24),
  POS(597, 11)
};

static TAB_NUM t_lambda_48[] = {
  1, // locals
  0, // parameters
  // contents_of(self)
  var_contents_of, 1, var_584_5_self, 1, LOCAL(1),
  // map_reduce_1 contents_of(self)
  var_map_reduce_1, 1, LOCAL(1), TAIL_CALL,
  POS(599, 24),
  POS(599, 11)
};

static TAB_NUM t_func_empty_hash_table_entry___filter_1[] = {
  1, // locals
  1, // parameters
  LOCAL(1),
  // -> empty_hash_table_entry 0
  LET, 2, var_empty_hash_table_entry, num_0, TAIL_CALL,
  POS(608, 43)
};

static TAB_NUM t_func_empty_hash_table_entry___filter_2[] = {
  1, // locals
  1, // parameters
  LOCAL(1),
  // -> empty_hash_table_entry 0
  LET, 2, var_empty_hash_table_entry, num_0, TAIL_CALL,
  POS(609, 43)
};

static TAB_NUM t_func_hash_table_leaf___filter_1[] = {
  2, // locals
  1, // parameters
  var_611_29_self,
  // self $_my_hash_index $_my_key $my_value
  var_611_29_self, 0, 3, LOCAL(1), LOCAL(1), LOCAL(2),
  // filter_function(my_value)
  var_filter_function, 1, LOCAL(2), 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_49, lambda_50, TAIL_CALL,
  POS(612, 3),
  POS(614, 5),
  POS(613, 3)
};

static TAB_NUM t_lambda_49[] = {
  0, // locals
  0, // parameters
  //  self 0
  LET, 2, var_611_29_self, num_0, TAIL_CALL,
  POS(615, 7)
};

static TAB_NUM t_lambda_50[] = {
  0, // locals
  0, // parameters
  //  empty_hash_table_entry 1
  LET, 2, var_empty_hash_table_entry, num_1, TAIL_CALL,
  POS(616, 7)
};

static TAB_NUM t_func_hash_table_leaf___filter_2[] = {
  3, // locals
  1, // parameters
  var_618_29_self,
  // self $_my_hash_index $my_key $my_value
  var_618_29_self, 0, 3, LOCAL(1), LOCAL(2), LOCAL(3),
  // filter_function(my_key my_value)
  var_filter_function, 2, LOCAL(2), LOCAL(3), 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_51, lambda_52, TAIL_CALL,
  POS(619, 3),
  POS(621, 5),
  POS(620, 3)
};

static TAB_NUM t_lambda_51[] = {
  0, // locals
  0, // parameters
  //  self 0
  LET, 2, var_618_29_self, num_0, TAIL_CALL,
  POS(622, 7)
};

static TAB_NUM t_lambda_52[] = {
  0, // locals
  0, // parameters
  //  empty_hash_table_entry 1
  LET, 2, var_empty_hash_table_entry, num_1, TAIL_CALL,
  POS(623, 7)
};

static TAB_NUM t_func_empty_collision_list_entry___filter_1[] = {
  1, // locals
  1, // parameters
  LOCAL(1),
  // -> empty_collision_list_entry 0
  LET, 2, var_empty_collision_list_entry, num_0, TAIL_CALL,
  POS(625, 47)
};

static TAB_NUM t_func_empty_collision_list_entry___filter_2[] = {
  1, // locals
  1, // parameters
  LOCAL(1),
  // -> empty_collision_list_entry 0
  LET, 2, var_empty_collision_list_entry, num_0, TAIL_CALL,
  POS(626, 47)
};

static TAB_NUM t_func_collision_list_entry___filter_1[] = {
  2, // locals
  1, // parameters
  var_628_34_self,
  // self $my_key $my_value $my_link
  var_628_34_self, 0, 3, var_629_9_my_key, var_629_17_my_value, LOCAL(2),
  // filter_1 $new_link $deleted my_link
  var_filter_1, 1, LOCAL(2), 2, var_630_13_new_link, var_630_23_deleted,
  // filter_function(my_value):
  var_filter_function, 1, var_629_17_my_value, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_filter_functionmy_value, lambda_55, TAIL_CALL,
  POS(629, 3),
  POS(630, 3),
  POS(632, 5),
  POS(631, 3)
};

static TAB_NUM t_lambda_filter_functionmy_value[] = {
  1, // locals
  0, // parameters
  // deleted == 0
  var_std__equal, 2, var_630_23_deleted, num_0, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_53, lambda_54, TAIL_CALL,
  POS(634, 9),
  POS(633, 7)
};

static TAB_NUM t_lambda_53[] = {
  0, // locals
  0, // parameters
  //  self 0
  LET, 2, var_628_34_self, num_0, TAIL_CALL,
  POS(635, 11)
};

static TAB_NUM t_lambda_54[] = {
  1, // locals
  0, // parameters
  // typed_tuple(collision_list_entry my_key my_value new_link) deleted
  var_typed_tuple, 4, var_collision_list_entry, var_629_9_my_key, var_629_17_my_value, var_630_13_new_link, 1, LOCAL(1),
  //  typed_tuple(collision_list_entry my_key my_value new_link) deleted
  LET, 2, LOCAL(1), var_630_23_deleted, TAIL_CALL,
  POS(636, 12),
  POS(636, 11)
};

static TAB_NUM t_lambda_55[] = {
  1, // locals
  0, // parameters
  // deleted+1
  var_std__plus, 2, var_630_23_deleted, num_1, 1, LOCAL(1),
  //  new_link deleted+1
  LET, 2, var_630_13_new_link, LOCAL(1), TAIL_CALL,
  POS(637, 17),
  POS(637, 7)
};

static TAB_NUM t_func_collision_list_entry___filter_2[] = {
  2, // locals
  1, // parameters
  var_639_34_self,
  // self $my_key $my_value $my_link
  var_639_34_self, 0, 3, var_640_9_my_key, var_640_17_my_value, LOCAL(2),
  // filter_2 $new_link $deleted my_link
  var_filter_2, 1, LOCAL(2), 2, var_641_13_new_link, var_641_23_deleted,
  // filter_function(my_key my_value):
  var_filter_function, 2, var_640_9_my_key, var_640_17_my_value, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_56, lambda_59, TAIL_CALL,
  POS(640, 3),
  POS(641, 3),
  POS(643, 5),
  POS(642, 3)
};

static TAB_NUM t_lambda_56[] = {
  1, // locals
  0, // parameters
  // deleted == 0
  var_std__equal, 2, var_641_23_deleted, num_0, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_57, lambda_58, TAIL_CALL,
  POS(645, 9),
  POS(644, 7)
};

static TAB_NUM t_lambda_57[] = {
  0, // locals
  0, // parameters
  //  self 0
  LET, 2, var_639_34_self, num_0, TAIL_CALL,
  POS(646, 11)
};

static TAB_NUM t_lambda_58[] = {
  1, // locals
  0, // parameters
  // typed_tuple(collision_list_entry my_key my_value new_link) deleted
  var_typed_tuple, 4, var_collision_list_entry, var_640_9_my_key, var_640_17_my_value, var_641_13_new_link, 1, LOCAL(1),
  //  typed_tuple(collision_list_entry my_key my_value new_link) deleted
  LET, 2, LOCAL(1), var_641_23_deleted, TAIL_CALL,
  POS(647, 12),
  POS(647, 11)
};

static TAB_NUM t_lambda_59[] = {
  1, // locals
  0, // parameters
  // deleted+1
  var_std__plus, 2, var_641_23_deleted, num_1, 1, LOCAL(1),
  //  new_link deleted+1
  LET, 2, var_641_13_new_link, LOCAL(1), TAIL_CALL,
  POS(648, 17),
  POS(648, 7)
};

static TAB_NUM t_func_hash_table_node___filter_1[] = {
  14, // locals
  1, // parameters
  var_650_29_self,
  // self(1)
  var_650_29_self, 1, num_1, 1, LOCAL(1),
  // filter_1 $node_1 $deleted_1 self(1)
  var_filter_1, 1, LOCAL(1), 2, var_651_13_node_1, LOCAL(7),
  // self(2)
  var_650_29_self, 1, num_2, 1, LOCAL(1),
  // filter_1 $node_2 $deleted_2 self(2)
  var_filter_1, 1, LOCAL(1), 2, var_652_13_node_2, LOCAL(8),
  // self(3)
  var_650_29_self, 1, num_3, 1, LOCAL(1),
  // filter_1 $node_3 $deleted_3 self(3)
  var_filter_1, 1, LOCAL(1), 2, var_653_13_node_3, LOCAL(9),
  // self(4)
  var_650_29_self, 1, num_4, 1, LOCAL(1),
  // filter_1 $node_4 $deleted_4 self(4)
  var_filter_1, 1, LOCAL(1), 2, var_654_13_node_4, LOCAL(10),
  // self(5)
  var_650_29_self, 1, num_5, 1, LOCAL(1),
  // filter_1 $node_5 $deleted_5 self(5)
  var_filter_1, 1, LOCAL(1), 2, var_655_13_node_5, LOCAL(11),
  // self(6)
  var_650_29_self, 1, num_6, 1, LOCAL(1),
  // filter_1 $node_6 $deleted_6 self(6)
  var_filter_1, 1, LOCAL(1), 2, var_656_13_node_6, LOCAL(12),
  // self(7)
  var_650_29_self, 1, num_7, 1, LOCAL(1),
  // filter_1 $node_7 $deleted_7 self(7)
  var_filter_1, 1, LOCAL(1), 2, var_657_13_node_7, LOCAL(13),
  // self(8)
  var_650_29_self, 1, num_8, 1, LOCAL(1),
  // filter_1 $node_8 $deleted_8 self(8)
  var_filter_1, 1, LOCAL(1), 2, var_658_13_node_8, LOCAL(14),
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
  var_std__plus, 2, LOCAL(6), LOCAL(14), 1, var_659_4_deleted,
  // deleted == 0
  var_std__equal, 2, var_659_4_deleted, num_0, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_60, lambda_61, TAIL_CALL,
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
  POS(657, 31),
  POS(657, 3),
  POS(658, 31),
  POS(658, 3),
  POS(660, 6),
  POS(660, 6),
  POS(660, 6),
  POS(660, 6),
  POS(660, 6),
  POS(660, 6),
  POS(659, 3),
  POS(670, 5),
  POS(669, 3)
};

static TAB_NUM t_lambda_60[] = {
  0, // locals
  0, // parameters
  //  self 0
  LET, 2, var_650_29_self, num_0, TAIL_CALL,
  POS(671, 7)
};

static TAB_NUM t_lambda_61[] = {
  2, // locals
  0, // parameters
  // is_an_empty_entry
  var_is_an_empty_entry, 1, var_651_13_node_1, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_62, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_69, lambda_70, TAIL_CALL,
  POS(675, 18),
  POS(674, 11),
  POS(673, 7)
};

static TAB_NUM t_lambda_62[] = {
  2, // locals
  0, // parameters
  // is_an_empty_entry
  var_is_an_empty_entry, 1, var_652_13_node_2, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_63, 1, LOCAL(2),
  // node_2.is_an_empty_entry
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(676, 18),
  POS(674, 11),
  POS(676, 11)
};

static TAB_NUM t_lambda_63[] = {
  2, // locals
  0, // parameters
  // is_an_empty_entry
  var_is_an_empty_entry, 1, var_653_13_node_3, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_64, 1, LOCAL(2),
  // node_3.is_an_empty_entry
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(677, 18),
  POS(674, 11),
  POS(677, 11)
};

static TAB_NUM t_lambda_64[] = {
  2, // locals
  0, // parameters
  // is_an_empty_entry
  var_is_an_empty_entry, 1, var_654_13_node_4, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_65, 1, LOCAL(2),
  // node_4.is_an_empty_entry
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(678, 18),
  POS(674, 11),
  POS(678, 11)
};

static TAB_NUM t_lambda_65[] = {
  2, // locals
  0, // parameters
  // is_an_empty_entry
  var_is_an_empty_entry, 1, var_655_13_node_5, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_66, 1, LOCAL(2),
  // node_5.is_an_empty_entry
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(679, 18),
  POS(674, 11),
  POS(679, 11)
};

static TAB_NUM t_lambda_66[] = {
  2, // locals
  0, // parameters
  // is_an_empty_entry
  var_is_an_empty_entry, 1, var_656_13_node_6, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_67, 1, LOCAL(2),
  // node_6.is_an_empty_entry
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(680, 18),
  POS(674, 11),
  POS(680, 11)
};

static TAB_NUM t_lambda_67[] = {
  2, // locals
  0, // parameters
  // is_an_empty_entry
  var_is_an_empty_entry, 1, var_657_13_node_7, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_68, 1, LOCAL(2),
  // node_7.is_an_empty_entry
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(681, 18),
  POS(674, 11),
  POS(681, 11)
};

static TAB_NUM t_lambda_68[] = {
  1, // locals
  0, // parameters
  // is_an_empty_entry
  var_is_an_empty_entry, 1, var_658_13_node_8, 1, LOCAL(1),
  // node_8.is_an_empty_entry
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(682, 18),
  POS(682, 11)
};

static TAB_NUM t_lambda_69[] = {
  0, // locals
  0, // parameters
  //  empty_hash_table_entry deleted
  LET, 2, var_empty_hash_table_entry, var_659_4_deleted, TAIL_CALL,
  POS(683, 11)
};

static TAB_NUM t_lambda_70[] = {
  2, // locals
  0, // parameters
  // list
  var_list, 8, var_651_13_node_1, var_652_13_node_2, var_653_13_node_3, var_654_13_node_4, var_655_13_node_5, var_656_13_node_6, var_657_13_node_7, var_658_13_node_8, 1, LOCAL(1),
  // typed_tuple
  var_typed_tuple, 2, var_hash_table_node, LOCAL(1), 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), var_659_4_deleted, TAIL_CALL,
  POS(687, 13),
  POS(685, 11),
  POS(684, 11)
};

static TAB_NUM t_func_hash_table_node___filter_2[] = {
  14, // locals
  1, // parameters
  var_698_29_self,
  // self(1)
  var_698_29_self, 1, num_1, 1, LOCAL(1),
  // filter_2 $node_1 $deleted_1 self(1)
  var_filter_2, 1, LOCAL(1), 2, var_699_13_node_1, LOCAL(7),
  // self(2)
  var_698_29_self, 1, num_2, 1, LOCAL(1),
  // filter_2 $node_2 $deleted_2 self(2)
  var_filter_2, 1, LOCAL(1), 2, var_700_13_node_2, LOCAL(8),
  // self(3)
  var_698_29_self, 1, num_3, 1, LOCAL(1),
  // filter_2 $node_3 $deleted_3 self(3)
  var_filter_2, 1, LOCAL(1), 2, var_701_13_node_3, LOCAL(9),
  // self(4)
  var_698_29_self, 1, num_4, 1, LOCAL(1),
  // filter_2 $node_4 $deleted_4 self(4)
  var_filter_2, 1, LOCAL(1), 2, var_702_13_node_4, LOCAL(10),
  // self(5)
  var_698_29_self, 1, num_5, 1, LOCAL(1),
  // filter_2 $node_5 $deleted_5 self(5)
  var_filter_2, 1, LOCAL(1), 2, var_703_13_node_5, LOCAL(11),
  // self(6)
  var_698_29_self, 1, num_6, 1, LOCAL(1),
  // filter_2 $node_6 $deleted_6 self(6)
  var_filter_2, 1, LOCAL(1), 2, var_704_13_node_6, LOCAL(12),
  // self(7)
  var_698_29_self, 1, num_7, 1, LOCAL(1),
  // filter_2 $node_7 $deleted_7 self(7)
  var_filter_2, 1, LOCAL(1), 2, var_705_13_node_7, LOCAL(13),
  // self(8)
  var_698_29_self, 1, num_8, 1, LOCAL(1),
  // filter_2 $node_8 $deleted_8 self(8)
  var_filter_2, 1, LOCAL(1), 2, var_706_13_node_8, LOCAL(14),
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
  var_std__plus, 2, LOCAL(6), LOCAL(14), 1, var_707_4_deleted,
  // deleted == 0
  var_std__equal, 2, var_707_4_deleted, num_0, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_71, lambda_72, TAIL_CALL,
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
  POS(705, 31),
  POS(705, 3),
  POS(706, 31),
  POS(706, 3),
  POS(708, 6),
  POS(708, 6),
  POS(708, 6),
  POS(708, 6),
  POS(708, 6),
  POS(708, 6),
  POS(707, 3),
  POS(718, 5),
  POS(717, 3)
};

static TAB_NUM t_lambda_71[] = {
  0, // locals
  0, // parameters
  //  self 0
  LET, 2, var_698_29_self, num_0, TAIL_CALL,
  POS(719, 7)
};

static TAB_NUM t_lambda_72[] = {
  2, // locals
  0, // parameters
  // is_an_empty_entry
  var_is_an_empty_entry, 1, var_699_13_node_1, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_73, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_80, lambda_81, TAIL_CALL,
  POS(723, 18),
  POS(722, 11),
  POS(721, 7)
};

static TAB_NUM t_lambda_73[] = {
  2, // locals
  0, // parameters
  // is_an_empty_entry
  var_is_an_empty_entry, 1, var_700_13_node_2, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_74, 1, LOCAL(2),
  // node_2.is_an_empty_entry
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(724, 18),
  POS(722, 11),
  POS(724, 11)
};

static TAB_NUM t_lambda_74[] = {
  2, // locals
  0, // parameters
  // is_an_empty_entry
  var_is_an_empty_entry, 1, var_701_13_node_3, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_75, 1, LOCAL(2),
  // node_3.is_an_empty_entry
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(725, 18),
  POS(722, 11),
  POS(725, 11)
};

static TAB_NUM t_lambda_75[] = {
  2, // locals
  0, // parameters
  // is_an_empty_entry
  var_is_an_empty_entry, 1, var_702_13_node_4, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_76, 1, LOCAL(2),
  // node_4.is_an_empty_entry
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(726, 18),
  POS(722, 11),
  POS(726, 11)
};

static TAB_NUM t_lambda_76[] = {
  2, // locals
  0, // parameters
  // is_an_empty_entry
  var_is_an_empty_entry, 1, var_703_13_node_5, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_77, 1, LOCAL(2),
  // node_5.is_an_empty_entry
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(727, 18),
  POS(722, 11),
  POS(727, 11)
};

static TAB_NUM t_lambda_77[] = {
  2, // locals
  0, // parameters
  // is_an_empty_entry
  var_is_an_empty_entry, 1, var_704_13_node_6, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_78, 1, LOCAL(2),
  // node_6.is_an_empty_entry
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(728, 18),
  POS(722, 11),
  POS(728, 11)
};

static TAB_NUM t_lambda_78[] = {
  2, // locals
  0, // parameters
  // is_an_empty_entry
  var_is_an_empty_entry, 1, var_705_13_node_7, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_79, 1, LOCAL(2),
  // node_7.is_an_empty_entry
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(729, 18),
  POS(722, 11),
  POS(729, 11)
};

static TAB_NUM t_lambda_79[] = {
  1, // locals
  0, // parameters
  // is_an_empty_entry
  var_is_an_empty_entry, 1, var_706_13_node_8, 1, LOCAL(1),
  // node_8.is_an_empty_entry
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(730, 18),
  POS(730, 11)
};

static TAB_NUM t_lambda_80[] = {
  0, // locals
  0, // parameters
  //  empty_hash_table_entry deleted
  LET, 2, var_empty_hash_table_entry, var_707_4_deleted, TAIL_CALL,
  POS(731, 11)
};

static TAB_NUM t_lambda_81[] = {
  2, // locals
  0, // parameters
  // list
  var_list, 8, var_699_13_node_1, var_700_13_node_2, var_701_13_node_3, var_702_13_node_4, var_703_13_node_5, var_704_13_node_6, var_705_13_node_7, var_706_13_node_8, 1, LOCAL(1),
  // typed_tuple
  var_typed_tuple, 2, var_hash_table_node, LOCAL(1), 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), var_707_4_deleted, TAIL_CALL,
  POS(735, 13),
  POS(733, 11),
  POS(732, 11)
};

static TAB_NUM t_func_std_types__hash_table___filter[] = {
  2, // locals
  2, // parameters
  var_759_5_self,
  var_760_5_function,
  // length_of(self) == 0
  var_length_of, 1, var_759_5_self, 1, LOCAL(1),
  // length_of(self) == 0
  var_std__equal, 2, LOCAL(1), num_0, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_82, lambda_83, TAIL_CALL,
  POS(763, 5),
  POS(763, 5),
  POS(762, 3)
};

static TAB_NUM t_lambda_82[] = {
  0, // locals
  0, // parameters
  //  empty_hash_table
  LET, 1, var_empty_hash_table, TAIL_CALL,
  POS(764, 7)
};

static TAB_NUM t_lambda_83[] = {
  2, // locals
  0, // parameters
  // !filter_function function
  LET, 1, var_760_5_function, 1, var_filter_function,
  // parameter_count_of(function) == 2:
  var_parameter_count_of, 1, var_760_5_function, 1, LOCAL(1),
  // parameter_count_of(function) == 2:
  var_std__equal, 2, LOCAL(1), num_2, 1, LOCAL(2),
  // if $new_contents $deleted
  var_if, 3, LOCAL(2), lambda_84, lambda_85, 2, var_767_11_new_contents, var_767_25_deleted,
  // deleted == 0
  var_std__equal, 2, var_767_25_deleted, num_0, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_86, lambda_87, TAIL_CALL,
  POS(766, 7),
  POS(768, 9),
  POS(768, 9),
  POS(767, 7),
  POS(773, 9),
  POS(772, 7)
};

static TAB_NUM t_lambda_84[] = {
  1, // locals
  0, // parameters
  // contents_of(self)
  var_contents_of, 1, var_759_5_self, 1, LOCAL(1),
  // filter_2 contents_of(self)
  var_filter_2, 1, LOCAL(1), TAIL_CALL,
  POS(769, 20),
  POS(769, 11)
};

static TAB_NUM t_lambda_85[] = {
  1, // locals
  0, // parameters
  // contents_of(self)
  var_contents_of, 1, var_759_5_self, 1, LOCAL(1),
  // filter_1 contents_of(self)
  var_filter_1, 1, LOCAL(1), TAIL_CALL,
  POS(771, 20),
  POS(771, 11)
};

static TAB_NUM t_lambda_86[] = {
  0, // locals
  0, // parameters
  //  self
  LET, 1, var_759_5_self, TAIL_CALL,
  POS(774, 11)
};

static TAB_NUM t_lambda_87[] = {
  3, // locals
  0, // parameters
  // length_of(self)-deleted
  var_length_of, 1, var_759_5_self, 1, LOCAL(1),
  // length_of(self)-deleted
  var_std__minus, 2, LOCAL(1), var_767_25_deleted, 1, LOCAL(2),
  // self
  LET, -2, var_759_5_self, var_length_of, LOCAL(2), var_contents_of, var_767_11_new_contents, LOCAL(3),
  // 
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(777, 24),
  POS(777, 24),
  POS(776, 11),
  POS(775, 11)
};

static TAB_NUM t_func_std__hash_table[] = {
  1, // locals
  -1, // parameters
  REST_PARAMETER, LOCAL(1), // 784_5_pairs
  // to_hash_table pairs
  var_to_hash_table, 1, LOCAL(1), TAIL_CALL,
  POS(786, 3)
};

static TAB_NUM t_func_std_types__list___to_hash_table[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 796_5_items
  // $table empty_hash_table
  LET, 1, var_empty_hash_table, 1, var_798_4_table,
  // for_each items
  var_for_each, 3, LOCAL(1), lambda_88, lambda_89, TAIL_CALL,
  POS(798, 3),
  POS(799, 3)
};

static TAB_NUM t_lambda_88[] = {
  3, // locals
  1, // parameters
  LOCAL(1), // 800_8_item
  // item $key $value
  LOCAL(1), 0, 2, LOCAL(2), LOCAL(3),
  // table(key) value
  var_798_4_table, 2, LOCAL(2), LOCAL(3), 1, var_798_4_table,
  // next
  var_next, 0, TAIL_CALL,
  POS(801, 7),
  POS(802, 8),
  POS(803, 7)
};

static TAB_NUM t_lambda_89[] = {
  0, // locals
  0, // parameters
  //  table
  LET, 1, var_798_4_table, TAIL_CALL,
  POS(804, 7)
};

static TAB_NUM t_module_entry[] = {
  0, // locals
  0, // parameters
  // register_type &deserializers std_types::hash_table
  var_register_type, 2, var_deserializers, var_std_types__hash_table, 1, var_deserializers,
  LET, 1, 0, TAIL_CALL,
  POS(811, 1)
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
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_24}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_next}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_basic_loopsself_is_an_empty_entry}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_25}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_collision_list_entry___for_each_2}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_26}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2_next}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2_basic_loopsself_is_an_empty_entry}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_27}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_hash_table_leaf___for_each_1}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_hash_table_leaf___for_each_2}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_hash_table_node___for_each_1}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_28}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_3_next}},
  {FLT_POSITIVE_INT64, 0, {.value = 8}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_29}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_30}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_hash_table_node___for_each_2}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_31}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_4_next}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_32}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_33}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__hash_table___for_each}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_34}},
  {FLT_POSITIVE_INT64, 0, {.value = 2}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_35}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_36}},
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
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_37}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_38}},
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
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_39}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_40}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_41}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_42}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__hash_table___reduce}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_43}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_44}},
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
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_45}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_46}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_47}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_48}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_empty_hash_table_entry___filter_1}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_empty_hash_table_entry___filter_2}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_hash_table_leaf___filter_1}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_49}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_50}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_hash_table_leaf___filter_2}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_51}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_52}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_empty_collision_list_entry___filter_1}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_empty_collision_list_entry___filter_2}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_collision_list_entry___filter_1}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_filter_functionmy_value}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_53}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_54}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_55}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_collision_list_entry___filter_2}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_56}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_57}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_58}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_59}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_hash_table_node___filter_1}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_60}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_61}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_62}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_63}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_64}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_65}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_66}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_67}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_68}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_69}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_70}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_hash_table_node___filter_2}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_71}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_72}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_73}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_74}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_75}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_76}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_77}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_78}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_79}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_80}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_81}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__hash_table___filter}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_82}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_83}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_84}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_85}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_86}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_87}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__hash_table}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__list___to_hash_table}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_88}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_89}},
  {FLT_STRING_8, 10, {.str_8 = "hash_table"}},
  {FLT_FUNCTION, 0, {.tfunc = t_module_entry}}
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
    FOT_DERIVED, 0, 11,
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
    FOT_UNKNOWN, 0, 0,
    "table\000std_types", NULL,
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
    FOT_UNINITIALIZED, 0, 0,
    "99_5_myself\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "100_5_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "101_5_value\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "hash\000", NULL,
    {.position = POS(103, 15)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "103_4_hash_index\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "bit_or\000std", NULL,
    {.position = POS(103, 15)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "104_4_contents\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "equal\000std", NULL,
    {.position = POS(106, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_defined\000", NULL,
    {.position = POS(110, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000std", NULL,
    {.position = POS(117, 28)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if\000", NULL,
    {.position = POS(112, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "minus\000std", NULL,
    {.position = POS(126, 28)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "134_33_my_value\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "142_46_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "143_17_my_value\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "143_27_my_link\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "bit_and\000std", NULL,
    {.position = POS(150, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "shift_right\000std", NULL,
    {.position = POS(151, 22)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "155_40_hash_index\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "155_51_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "155_55_value\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "typed_tuple\000", NULL,
    {.position = POS(158, 8)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "161_27_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "161_32_hash_index\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "161_43_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "161_47_value\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "162_9_my_hash_index\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "162_24_my_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "162_32_my_value\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not\000", NULL,
    {.position = POS(176, 55)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "196_27_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "205_44_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "206_9_my_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "206_17_my_value\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "206_27_my_link\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "215_27_self\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "all_of\000", NULL,
    {.position = POS(222, 9)}
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
    {.position = POS(233, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "break\000", NULL,
    {.position = POS(242, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "self\000basic_loops", NULL,
    {.position = POS(243, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "break_function\000basic_types", NULL,
    {.position = POS(247, 14)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "saved_context_of\000basic_loops", NULL,
    {.position = POS(248, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "new\000", NULL,
    {.position = POS(247, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "body\000basic_loops", NULL,
    {.position = POS(265, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "from\000basic_loops", NULL,
    {.position = POS(313, 7)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "328_6_idx\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "less\000std", NULL,
    {.position = POS(330, 14)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not\000std", NULL,
    {.position = POS(330, 14)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "361_6_idx\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "for_each\000", NULL,
    {.position = POS(374, 24)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "376_5_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "378_5_finally\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "finally\000basic_loops", NULL,
    {.position = POS(385, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "parameter_count_of\000", NULL,
    {.position = POS(401, 5)}
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
    {.position = POS(436, 20)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "449_5_self\000", NULL
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
    "492_14_left\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "492_19_right\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "reduce\000", NULL,
    {.position = POS(502, 24)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "514_5_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "515_5_function\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "516_5_unit\000", NULL
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
    {.position = POS(574, 24)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "584_5_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "585_5_map_function\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "586_5_reduce_function\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "append\000", NULL,
    {.position = POS(586, 23)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "587_5_unit\000", NULL
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
    "611_29_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "618_29_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "628_34_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "629_9_my_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "629_17_my_value\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "630_13_new_link\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "630_23_deleted\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "639_34_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "640_9_my_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "640_17_my_value\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "641_13_new_link\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "641_23_deleted\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "650_29_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "651_13_node_1\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "652_13_node_2\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "653_13_node_3\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "654_13_node_4\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "655_13_node_5\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "656_13_node_6\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "657_13_node_7\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "658_13_node_8\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "659_4_deleted\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "and\000std", NULL,
    {.position = POS(674, 11)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "698_29_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "699_13_node_1\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "700_13_node_2\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "701_13_node_3\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "702_13_node_4\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "703_13_node_5\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "704_13_node_6\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "705_13_node_7\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "706_13_node_8\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "707_4_deleted\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "filter\000", NULL,
    {.position = POS(746, 24)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "759_5_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "760_5_function\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_hash_table\000", NULL,
    {.position = POS(764, 8)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "767_11_new_contents\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "767_25_deleted\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "hash_table\000std", NULL,
    {.const_idx = -func_std__hash_table}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "to_hash_table\000", NULL,
    {.position = POS(786, 3)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "list\000std_types", std_types__list__attributes,
    {.position = POS(788, 1)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "798_4_table\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "serialization_tag_of\000", NULL,
    {.position = POS(808, 24)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "empty_collection_of\000", NULL,
    {.position = POS(809, 24)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "deserializers\000", NULL,
    {.position = POS(811, 16)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "register_type\000", NULL,
    {.position = POS(811, 1)}
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
  .feature_flags = FEAT_POSITIONS|FEAT_INITIALIZER,
  .marker = 0,
  0, // number of required modules
  0, // number of defined namespaces
  1, // number of used namespaces
  180, // number of constants
  151, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  constants_table,
  variables_table,
};
