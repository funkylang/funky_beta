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
  num_3221225472 = -6,
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
  func_std__hash_table = -124,
  lambda_44 = -125,
  lambda_45 = -126,
  str_hash_table = -127
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
  var_131_30_my_value, // dynamic
  var_139_45_key, // dynamic
  var_140_14_my_value, // dynamic
  var_140_24_my_link, // dynamic
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
  var_195_26_self, // dynamic
  var_204_43_key, // dynamic
  var_205_6_my_key, // dynamic
  var_205_14_my_value, // dynamic
  var_205_24_my_link, // dynamic
  var_214_26_self, // dynamic
  var_all_of, // extern
  var_for_each_1, // attribute
  var_for_each_2, // attribute
  var_next, // extern
  var_break, // extern
  var_basic_loops__self, // extern
  var_basic_loops__saved_context_of, // extern polymorphic
  var_basic_loops__body, // extern
  var_basic_loops__from, // extern
  var_328_1_idx, // dynamic
  var_std__less, // extern
  var_std__not, // extern
  var_361_1_idx, // dynamic
  var_for_each, // extern polymorphic
  var_376_0_self, // dynamic
  var_378_0_finally, // dynamic
  var_basic_loops__finally, // extern
  var_parameter_count_of, // extern
  var_map_1, // attribute
  var_map_2, // attribute
  var_mapping_function, // derived
  var_map, // extern polymorphic
  var_450_0_self, // dynamic
  var_reduce_1, // attribute
  var_reduction_function, // derived
  var_494_13_left, // dynamic
  var_494_18_right, // dynamic
  var_reduce, // extern polymorphic
  var_516_0_self, // dynamic
  var_517_0_function, // dynamic
  var_518_0_unit, // dynamic
  var_map_reduce_1, // attribute
  var_map_reduce_2, // attribute
  var_map_reduce, // extern polymorphic
  var_587_0_self, // dynamic
  var_588_0_map_function, // dynamic
  var_589_0_reduce_function, // dynamic
  var_append, // extern
  var_590_0_unit, // dynamic
  var_std__hash_table, // initialized
  var_611_1_table, // dynamic
  var_empty_hash_table, // extern
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
  var_std__bit_or, 2, LOCAL(1), num_3221225472, 1, var_99_1_hash_index,
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
  POS(128, 60)
};

static TAB_NUM t_func_hash_table_leaf___retrieve[] = {
  4, // locals
  3, // parameters
  LOCAL(2), // 130_28_self
  LOCAL(1),
  LOCAL(3), // 130_45_key
  // self $_my_hash_index $my_key $my_value
  LOCAL(2), 0, 3, LOCAL(1), LOCAL(4), var_131_30_my_value,
  // key == my_key
  var_std__equal, 2, LOCAL(3), LOCAL(4), 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_8, lambda_9, TAIL_CALL,
  POS(131, 3),
  POS(133, 5),
  POS(132, 3)
};

static TAB_NUM t_lambda_8[] = {
  0, // locals
  0, // parameters
  //  my_value
  LET, 1, var_131_30_my_value, TAIL_CALL,
  POS(134, 7)
};

static TAB_NUM t_lambda_9[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(135, 7)
};

static TAB_NUM t_func_empty_collision_list_entry___retrieve[] = {
  1, // locals
  3, // parameters
  LOCAL(1),
  LOCAL(1),
  LOCAL(1),
  // -> undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(137, 59)
};

static TAB_NUM t_func_collision_list_entry___retrieve[] = {
  3, // locals
  3, // parameters
  LOCAL(2), // 139_33_self
  LOCAL(1),
  var_139_45_key,
  // self $my_key $my_value $my_link
  LOCAL(2), 0, 3, LOCAL(3), var_140_14_my_value, var_140_24_my_link,
  // key == my_key
  var_std__equal, 2, var_139_45_key, LOCAL(3), 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_10, lambda_11, TAIL_CALL,
  POS(140, 3),
  POS(142, 5),
  POS(141, 3)
};

static TAB_NUM t_lambda_10[] = {
  0, // locals
  0, // parameters
  //  my_value
  LET, 1, var_140_14_my_value, TAIL_CALL,
  POS(143, 7)
};

static TAB_NUM t_lambda_11[] = {
  0, // locals
  0, // parameters
  // retrieve my_link undefined key
  var_retrieve, 3, var_140_24_my_link, var_undefined, var_139_45_key, TAIL_CALL,
  POS(144, 7)
};

static TAB_NUM t_func_hash_table_node___retrieve[] = {
  6, // locals
  3, // parameters
  LOCAL(3), // 146_28_self
  LOCAL(4), // 146_33_hash_index
  LOCAL(5), // 146_44_key
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
  POS(147, 9),
  POS(147, 3),
  POS(148, 12),
  POS(148, 22),
  POS(148, 3)
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
  LOCAL(2), // 193_33_self
  LOCAL(1),
  LOCAL(1),
  // -> self false
  LET, 2, LOCAL(2), var_false, TAIL_CALL,
  POS(193, 57)
};

static TAB_NUM t_func_hash_table_leaf___delete[] = {
  3, // locals
  3, // parameters
  var_195_26_self,
  LOCAL(1),
  LOCAL(2), // 195_43_key
  // self $_my_hash_index $my_key $_my_value
  var_195_26_self, 0, 3, LOCAL(1), LOCAL(3), LOCAL(1),
  // key == my_key
  var_std__equal, 2, LOCAL(2), LOCAL(3), 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_16, lambda_17, TAIL_CALL,
  POS(196, 3),
  POS(198, 5),
  POS(197, 3)
};

static TAB_NUM t_lambda_16[] = {
  0, // locals
  0, // parameters
  //  empty_hash_table_entry true
  LET, 2, var_empty_hash_table_entry, var_true, TAIL_CALL,
  POS(199, 7)
};

static TAB_NUM t_lambda_17[] = {
  0, // locals
  0, // parameters
  //  self false
  LET, 2, var_195_26_self, var_false, TAIL_CALL,
  POS(200, 7)
};

static TAB_NUM t_func_empty_collision_list_entry___delete[] = {
  2, // locals
  3, // parameters
  LOCAL(2), // 202_37_self
  LOCAL(1),
  LOCAL(1),
  // -> self false
  LET, 2, LOCAL(2), var_false, TAIL_CALL,
  POS(202, 56)
};

static TAB_NUM t_func_collision_list_entry___delete[] = {
  2, // locals
  3, // parameters
  LOCAL(2), // 204_31_self
  LOCAL(1),
  var_204_43_key,
  // self $my_key $my_value $my_link
  LOCAL(2), 0, 3, var_205_6_my_key, var_205_14_my_value, var_205_24_my_link,
  // key == my_key
  var_std__equal, 2, var_204_43_key, var_205_6_my_key, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_18, lambda_19, TAIL_CALL,
  POS(205, 3),
  POS(207, 5),
  POS(206, 3)
};

static TAB_NUM t_lambda_18[] = {
  0, // locals
  0, // parameters
  // -> my_link true
  LET, 2, var_205_24_my_link, var_true, TAIL_CALL,
  POS(209, 7)
};

static TAB_NUM t_lambda_19[] = {
  2, // locals
  0, // parameters
  // delete &my_link undefined key $did_delete
  var_delete, 3, var_205_24_my_link, var_undefined, var_204_43_key, 2, var_205_24_my_link, LOCAL(2),
  // new(collision_list_entry my_key my_value my_link) did_delete
  var_new, 4, var_collision_list_entry, var_205_6_my_key, var_205_14_my_value, var_205_24_my_link, 1, LOCAL(1),
  // -> new(collision_list_entry my_key my_value my_link) did_delete
  LET, 2, LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(211, 7),
  POS(212, 10),
  POS(212, 7)
};

static TAB_NUM t_func_hash_table_node___delete[] = {
  6, // locals
  3, // parameters
  var_214_26_self,
  LOCAL(3), // 214_31_hash_index
  LOCAL(4), // 214_42_key
  // hash_index & 7)+1
  var_std__bit_and, 2, LOCAL(3), num_7, 1, LOCAL(1),
  // $idx (hash_index & 7)+1
  var_std__plus, 2, LOCAL(1), num_1, 1, LOCAL(5),
  // self(idx) $success hash_index >> 3 key
  var_214_26_self, 1, LOCAL(5), 1, LOCAL(1),
  // hash_index >> 3 key
  var_std__shift_right, 2, LOCAL(3), num_3, 1, LOCAL(2),
  // delete &self(idx) $success hash_index >> 3 key
  var_delete, 3, LOCAL(1), LOCAL(2), LOCAL(4), 2, LOCAL(1), LOCAL(6),
  // self(idx) $success hash_index >> 3 key
  var_214_26_self, 2, LOCAL(5), LOCAL(1), 1, var_214_26_self,
  // if
  var_if, 3, LOCAL(6), lambda_20, lambda_23, TAIL_CALL,
  POS(215, 9),
  POS(215, 3),
  POS(216, 11),
  POS(216, 30),
  POS(216, 3),
  POS(216, 11),
  POS(217, 3)
};

static TAB_NUM t_lambda_20[] = {
  1, // locals
  0, // parameters
  // all_of(self is_an_empty_entry)
  var_all_of, 2, var_214_26_self, var_is_an_empty_entry, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_21, lambda_22, TAIL_CALL,
  POS(221, 9),
  POS(220, 7)
};

static TAB_NUM t_lambda_21[] = {
  0, // locals
  0, // parameters
  //  empty_hash_table_entry true
  LET, 2, var_empty_hash_table_entry, var_true, TAIL_CALL,
  POS(222, 11)
};

static TAB_NUM t_lambda_22[] = {
  0, // locals
  0, // parameters
  //  self true
  LET, 2, var_214_26_self, var_true, TAIL_CALL,
  POS(223, 11)
};

static TAB_NUM t_lambda_23[] = {
  0, // locals
  0, // parameters
  //  self false
  LET, 2, var_214_26_self, var_false, TAIL_CALL,
  POS(224, 7)
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
  LOCAL(1), // 238_35_self
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
  POS(239, 3),
  POS(245, 3),
  POS(247, 3),
  POS(253, 4),
  POS(255, 3),
  POS(267, 3)
};

static TAB_NUM t_lambda_break[] = {
  2, // locals
  -1, // parameters
  MYSELF_PARAMETER, LOCAL(2), // 247_9_myself
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
  var_if, 3, LOCAL(1), lambda_basic_loopsself_is_an_empty_entry, lambda_24, IO_TAIL_CALL,
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

static TAB_NUM t_lambda_24[] = {
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
  LOCAL(1), // 269_35_self
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
  POS(270, 3),
  POS(276, 3),
  POS(278, 3),
  POS(284, 4),
  POS(286, 3),
  POS(298, 3)
};

static TAB_NUM t_lambda_2_break[] = {
  2, // locals
  -1, // parameters
  MYSELF_PARAMETER, LOCAL(2), // 278_9_myself
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
  var_if, 3, LOCAL(1), lambda_2_basic_loopsself_is_an_empty_entry, lambda_25, IO_TAIL_CALL,
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

static TAB_NUM t_lambda_25[] = {
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
  LOCAL(2), // 300_30_self
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
  LOCAL(2), // 304_30_self
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
  LOCAL(1), // 308_30_self
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
  POS(309, 3),
  POS(316, 3),
  POS(317, 3),
  POS(319, 3),
  POS(325, 4),
  POS(327, 3),
  POS(339, 3)
};

static TAB_NUM t_lambda_3_break[] = {
  2, // locals
  -1, // parameters
  MYSELF_PARAMETER, LOCAL(2), // 319_9_myself
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
  LET, 1, var_basic_loops__from, 1, var_328_1_idx,
  // 8:
  var_std__less, 2, num_8, var_328_1_idx, 1, LOCAL(1),
  // 8:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_26, lambda_27, IO_TAIL_CALL,
  POS(328, 5),
  POS(330, 14),
  POS(330, 14),
  POS(329, 5)
};

static TAB_NUM t_lambda_26[] = {
  1, // locals
  0, // parameters
  // !basic_loops::from idx+1
  var_std__plus, 2, var_328_1_idx, num_1, 1, var_basic_loops__from,
  // basic_loops::self(idx)
  var_basic_loops__self, 1, var_328_1_idx, 1, LOCAL(1),
  // for_each_1! basic_loops::self(idx)
  var_for_each_1, 1, LOCAL(1), IO_TAIL_CALL,
  POS(331, 9),
  POS(332, 21),
  POS(332, 9)
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
  POS(334, 9),
  POS(334, 9),
  POS(337, 9)
};

static TAB_NUM t_func_hash_table_node___for_each_2[] = {
  2, // locals
  1, // parameters
  LOCAL(1), // 341_30_self
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
  POS(342, 3),
  POS(349, 3),
  POS(350, 3),
  POS(352, 3),
  POS(358, 4),
  POS(360, 3),
  POS(372, 3)
};

static TAB_NUM t_lambda_4_break[] = {
  2, // locals
  -1, // parameters
  MYSELF_PARAMETER, LOCAL(2), // 352_9_myself
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
  LET, 1, var_basic_loops__from, 1, var_361_1_idx,
  // 8:
  var_std__less, 2, num_8, var_361_1_idx, 1, LOCAL(1),
  // 8:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_28, lambda_29, IO_TAIL_CALL,
  POS(361, 5),
  POS(363, 14),
  POS(363, 14),
  POS(362, 5)
};

static TAB_NUM t_lambda_28[] = {
  1, // locals
  0, // parameters
  // !basic_loops::from idx+1
  var_std__plus, 2, var_361_1_idx, num_1, 1, var_basic_loops__from,
  // basic_loops::self(idx)
  var_basic_loops__self, 1, var_361_1_idx, 1, LOCAL(1),
  // for_each_2! basic_loops::self(idx)
  var_for_each_2, 1, LOCAL(1), IO_TAIL_CALL,
  POS(364, 9),
  POS(365, 21),
  POS(365, 9)
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
  POS(367, 9),
  POS(367, 9),
  POS(370, 9)
};

static TAB_NUM t_func_std_types__hash_table___for_each[] = {
  4, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_376_0_self,
  MANDATORY_PARAMETER, LOCAL(3), // 377_0_body
  var_next, var_378_0_finally,
  // $saved_context
  var_tuple, 4, var_next, var_break, var_basic_loops__body, var_basic_loops__finally, 1, LOCAL(4),
  // !basic_loops::body body
  LET, 1, LOCAL(3), 1, var_basic_loops__body,
  // !basic_loops::finally finally
  LET, 1, var_378_0_finally, 1, var_basic_loops__finally,
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

static TAB_NUM t_lambda_5_break[] = {
  2, // locals
  -1, // parameters
  MYSELF_PARAMETER, LOCAL(2), // 390_9_myself
  // !finally basic_loops::finally
  LET, 1, var_basic_loops__finally, 1, var_378_0_finally,
  // basic_loops::saved_context_of(myself)
  var_basic_loops__saved_context_of, 1, LOCAL(2), 1, LOCAL(1),
  // basic_loops::saved_context_of(myself)
  LOCAL(1), 0, 4, var_next, var_break, var_basic_loops__body, var_basic_loops__finally,
  // finally!
  var_378_0_finally, 0, IO_TAIL_CALL,
  POS(391, 5),
  POS(392, 5),
  POS(392, 5),
  POS(395, 5)
};

static TAB_NUM t_lambda_30[] = {
  1, // locals
  0, // parameters
  // contents_of(self)
  var_contents_of, 1, var_376_0_self, 1, LOCAL(1),
  // for_each_2! contents_of(self)
  var_for_each_2, 1, LOCAL(1), IO_TAIL_CALL,
  POS(402, 19),
  POS(402, 7)
};

static TAB_NUM t_lambda_31[] = {
  1, // locals
  0, // parameters
  // contents_of(self)
  var_contents_of, 1, var_376_0_self, 1, LOCAL(1),
  // for_each_1! contents_of(self)
  var_for_each_1, 1, LOCAL(1), IO_TAIL_CALL,
  POS(404, 19),
  POS(404, 7)
};

static TAB_NUM t_func_empty_hash_table_entry___map_1[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 414_32_self
  // -> self
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(414, 39)
};

static TAB_NUM t_func_empty_hash_table_entry___map_2[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 415_32_self
  // -> self
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(415, 39)
};

static TAB_NUM t_func_hash_table_leaf___map_1[] = {
  5, // locals
  1, // parameters
  LOCAL(2), // 417_25_self
  // self $my_hash_index $my_key $my_value
  LOCAL(2), 0, 3, LOCAL(3), LOCAL(4), LOCAL(5),
  // mapping_function(my_value)
  var_mapping_function, 1, LOCAL(5), 1, LOCAL(1),
  // new self my_hash_index my_key mapping_function(my_value)
  var_new, 4, LOCAL(2), LOCAL(3), LOCAL(4), LOCAL(1), TAIL_CALL,
  POS(418, 3),
  POS(419, 33),
  POS(419, 3)
};

static TAB_NUM t_func_hash_table_leaf___map_2[] = {
  5, // locals
  1, // parameters
  LOCAL(2), // 421_25_self
  // self $my_hash_index $my_key $my_value
  LOCAL(2), 0, 3, LOCAL(3), LOCAL(4), LOCAL(5),
  // mapping_function(my_key my_value)
  var_mapping_function, 2, LOCAL(4), LOCAL(5), 1, LOCAL(1),
  // new self my_hash_index my_key mapping_function(my_key my_value)
  var_new, 4, LOCAL(2), LOCAL(3), LOCAL(4), LOCAL(1), TAIL_CALL,
  POS(422, 3),
  POS(423, 33),
  POS(423, 3)
};

static TAB_NUM t_func_empty_collision_list_entry___map_1[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 425_36_self
  // -> self
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(425, 43)
};

static TAB_NUM t_func_empty_collision_list_entry___map_2[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 426_36_self
  // -> self
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(426, 43)
};

static TAB_NUM t_func_collision_list_entry___map_1[] = {
  6, // locals
  1, // parameters
  LOCAL(3), // 428_30_self
  // self $my_key $my_value $my_link
  LOCAL(3), 0, 3, LOCAL(4), LOCAL(5), LOCAL(6),
  // mapping_function(my_value) map_1(my_link)
  var_mapping_function, 1, LOCAL(5), 1, LOCAL(1),
  // map_1(my_link)
  var_map_1, 1, LOCAL(6), 1, LOCAL(2),
  // new self my_key mapping_function(my_value) map_1(my_link)
  var_new, 4, LOCAL(3), LOCAL(4), LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(429, 3),
  POS(430, 19),
  POS(430, 46),
  POS(430, 3)
};

static TAB_NUM t_func_collision_list_entry___map_2[] = {
  6, // locals
  1, // parameters
  LOCAL(3), // 432_30_self
  // self $my_key $my_value $my_link
  LOCAL(3), 0, 3, LOCAL(4), LOCAL(5), LOCAL(6),
  // mapping_function(my_key my_value) map_2(my_link)
  var_mapping_function, 2, LOCAL(4), LOCAL(5), 1, LOCAL(1),
  // map_2(my_link)
  var_map_2, 1, LOCAL(6), 1, LOCAL(2),
  // new self my_key mapping_function(my_key my_value) map_2(my_link)
  var_new, 4, LOCAL(3), LOCAL(4), LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(433, 3),
  POS(434, 19),
  POS(434, 53),
  POS(434, 3)
};

static TAB_NUM t_func_hash_table_node___map_1[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 436_25_self
  // map(self map_1)
  var_map, 2, LOCAL(2), var_map_1, 1, LOCAL(1),
  // new self map(self map_1)
  var_new, 2, LOCAL(2), LOCAL(1), TAIL_CALL,
  POS(437, 12),
  POS(437, 3)
};

static TAB_NUM t_func_hash_table_node___map_2[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 439_25_self
  // map(self map_2)
  var_map, 2, LOCAL(2), var_map_2, 1, LOCAL(1),
  // new self map(self map_2)
  var_new, 2, LOCAL(2), LOCAL(1), TAIL_CALL,
  POS(440, 12),
  POS(440, 3)
};

static TAB_NUM t_func_std_types__hash_table___map[] = {
  3, // locals
  2, // parameters
  var_450_0_self,
  LOCAL(3), // 451_0_function
  // !mapping_function function
  LET, 1, LOCAL(3), 1, var_mapping_function,
  // parameter_count_of(function) == 2:
  var_parameter_count_of, 1, LOCAL(3), 1, LOCAL(1),
  // parameter_count_of(function) == 2:
  var_std__equal, 2, LOCAL(1), num_2, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_32, lambda_33, TAIL_CALL,
  POS(453, 3),
  POS(455, 5),
  POS(455, 5),
  POS(454, 3)
};

static TAB_NUM t_lambda_32[] = {
  1, // locals
  0, // parameters
  // contents_of
  var_contents_of, 1, var_450_0_self, 1, LOCAL(1),
  // map_2 &self.contents_of
  var_map_2, 1, LOCAL(1), 1, LOCAL(1),
  // self.contents_of
  LET, -1, var_450_0_self, var_contents_of, LOCAL(1), var_450_0_self,
  // -> self
  LET, 1, var_450_0_self, TAIL_CALL,
  POS(456, 19),
  POS(456, 7),
  POS(456, 14),
  POS(457, 7)
};

static TAB_NUM t_lambda_33[] = {
  1, // locals
  0, // parameters
  // contents_of
  var_contents_of, 1, var_450_0_self, 1, LOCAL(1),
  // map_1 &self.contents_of
  var_map_1, 1, LOCAL(1), 1, LOCAL(1),
  // self.contents_of
  LET, -1, var_450_0_self, var_contents_of, LOCAL(1), var_450_0_self,
  // -> self
  LET, 1, var_450_0_self, TAIL_CALL,
  POS(459, 19),
  POS(459, 7),
  POS(459, 14),
  POS(460, 7)
};

static TAB_NUM t_func_empty_hash_table_entry___reduce_1[] = {
  1, // locals
  1, // parameters
  LOCAL(1),
  // -> UNIT
  LET, 1, uni_UNIT, TAIL_CALL,
  POS(471, 43)
};

static TAB_NUM t_func_hash_table_leaf___reduce_1[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 473_28_self
  // self $_my_hash_index $_my_key $my_value
  LOCAL(2), 0, 3, LOCAL(1), LOCAL(1), LOCAL(3),
  // -> my_value
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(474, 3),
  POS(475, 3)
};

static TAB_NUM t_func_empty_collision_list_entry___reduce_1[] = {
  1, // locals
  1, // parameters
  LOCAL(1),
  // -> UNIT
  LET, 1, uni_UNIT, TAIL_CALL,
  POS(477, 47)
};

static TAB_NUM t_func_collision_list_entry___reduce_1[] = {
  6, // locals
  1, // parameters
  LOCAL(3), // 479_33_self
  // self $my_key $my_value $my_link
  LOCAL(3), 0, 3, LOCAL(4), LOCAL(5), LOCAL(6),
  // mapping_function(my_key my_value)
  var_mapping_function, 2, LOCAL(4), LOCAL(5), 1, LOCAL(1),
  // reduce_1(my_link)
  var_reduce_1, 1, LOCAL(6), 1, LOCAL(2),
  // my_reduce
  func_my_reduce, 2, LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(480, 3),
  POS(482, 5),
  POS(483, 5),
  POS(481, 3)
};

static TAB_NUM t_func_hash_table_node___reduce_1[] = {
  11, // locals
  1, // parameters
  LOCAL(5), // 485_28_self
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
  POS(488, 27),
  POS(488, 18),
  POS(488, 45),
  POS(488, 36),
  POS(488, 3),
  POS(489, 27),
  POS(489, 18),
  POS(489, 45),
  POS(489, 36),
  POS(489, 3),
  POS(490, 3),
  POS(491, 3),
  POS(492, 6),
  POS(492, 3)
};

static TAB_NUM t_func_my_reduce[] = {
  1, // locals
  2, // parameters
  var_494_13_left,
  var_494_18_right,
  // UNIT == left
  var_std__equal, 2, uni_UNIT, var_494_13_left, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_34, lambda_35, TAIL_CALL,
  POS(496, 5),
  POS(495, 3)
};

static TAB_NUM t_lambda_34[] = {
  0, // locals
  0, // parameters
  //  right
  LET, 1, var_494_18_right, TAIL_CALL,
  POS(497, 7)
};

static TAB_NUM t_lambda_35[] = {
  1, // locals
  0, // parameters
  // UNIT == right
  var_std__equal, 2, uni_UNIT, var_494_18_right, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_36, lambda_37, TAIL_CALL,
  POS(500, 9),
  POS(499, 7)
};

static TAB_NUM t_lambda_36[] = {
  0, // locals
  0, // parameters
  //  left
  LET, 1, var_494_13_left, TAIL_CALL,
  POS(501, 11)
};

static TAB_NUM t_lambda_37[] = {
  1, // locals
  0, // parameters
  // reduction_function(left right)
  var_reduction_function, 2, var_494_13_left, var_494_18_right, 1, LOCAL(1),
  //  reduction_function(left right)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(502, 12),
  POS(502, 11)
};

static TAB_NUM t_func_std_types__hash_table___reduce[] = {
  2, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_516_0_self,
  MANDATORY_PARAMETER, var_517_0_function,
  var_undefined, var_518_0_unit,
  // length_of(self) == 0
  var_length_of, 1, var_516_0_self, 1, LOCAL(1),
  // length_of(self) == 0
  var_std__equal, 2, LOCAL(1), num_0, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_38, lambda_39, TAIL_CALL,
  POS(521, 5),
  POS(521, 5),
  POS(520, 3)
};

static TAB_NUM t_lambda_38[] = {
  0, // locals
  0, // parameters
  //  unit
  LET, 1, var_518_0_unit, TAIL_CALL,
  POS(522, 7)
};

static TAB_NUM t_lambda_39[] = {
  1, // locals
  0, // parameters
  // !reduction_function function
  LET, 1, var_517_0_function, 1, var_reduction_function,
  // contents_of(self)
  var_contents_of, 1, var_516_0_self, 1, LOCAL(1),
  // reduce_1 contents_of(self)
  var_reduce_1, 1, LOCAL(1), TAIL_CALL,
  POS(524, 7),
  POS(525, 16),
  POS(525, 7)
};

static TAB_NUM t_func_empty_hash_table_entry___map_reduce_1[] = {
  1, // locals
  1, // parameters
  LOCAL(1),
  // -> UNIT
  LET, 1, uni_UNIT, TAIL_CALL,
  POS(533, 47)
};

static TAB_NUM t_func_empty_hash_table_entry___map_reduce_2[] = {
  1, // locals
  1, // parameters
  LOCAL(1),
  // -> UNIT
  LET, 1, uni_UNIT, TAIL_CALL,
  POS(534, 47)
};

static TAB_NUM t_func_hash_table_leaf___map_reduce_1[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 536_32_self
  // self $_my_hash_index $_my_key $my_value
  LOCAL(2), 0, 3, LOCAL(1), LOCAL(1), LOCAL(3),
  // mapping_function(my_value)
  var_mapping_function, 1, LOCAL(3), 1, LOCAL(1),
  // -> mapping_function(my_value)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(537, 3),
  POS(538, 6),
  POS(538, 3)
};

static TAB_NUM t_func_hash_table_leaf___map_reduce_2[] = {
  4, // locals
  1, // parameters
  LOCAL(2), // 540_32_self
  // self $_my_hash_index $my_key $my_value
  LOCAL(2), 0, 3, LOCAL(1), LOCAL(3), LOCAL(4),
  // mapping_function(my_key my_value)
  var_mapping_function, 2, LOCAL(3), LOCAL(4), 1, LOCAL(1),
  // -> mapping_function(my_key my_value)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(541, 3),
  POS(542, 6),
  POS(542, 3)
};

static TAB_NUM t_func_empty_collision_list_entry___map_reduce_1[] = {
  1, // locals
  1, // parameters
  LOCAL(1),
  // -> UNIT
  LET, 1, uni_UNIT, TAIL_CALL,
  POS(544, 51)
};

static TAB_NUM t_func_empty_collision_list_entry___map_reduce_2[] = {
  1, // locals
  1, // parameters
  LOCAL(1),
  // -> UNIT
  LET, 1, uni_UNIT, TAIL_CALL,
  POS(545, 51)
};

static TAB_NUM t_func_collision_list_entry___map_reduce_1[] = {
  6, // locals
  1, // parameters
  LOCAL(3), // 547_37_self
  // self $my_key $my_value $my_link
  LOCAL(3), 0, 3, LOCAL(4), LOCAL(5), LOCAL(6),
  // mapping_function(my_key my_value)
  var_mapping_function, 2, LOCAL(4), LOCAL(5), 1, LOCAL(1),
  // map_reduce_1(my_link)
  var_map_reduce_1, 1, LOCAL(6), 1, LOCAL(2),
  // my_reduce
  func_my_reduce, 2, LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(548, 3),
  POS(550, 5),
  POS(551, 5),
  POS(549, 3)
};

static TAB_NUM t_func_collision_list_entry___map_reduce_2[] = {
  6, // locals
  1, // parameters
  LOCAL(3), // 553_37_self
  // self $my_key $my_value $my_link
  LOCAL(3), 0, 3, LOCAL(4), LOCAL(5), LOCAL(6),
  // mapping_function(my_key my_value)
  var_mapping_function, 2, LOCAL(4), LOCAL(5), 1, LOCAL(1),
  // map_reduce_2(my_link)
  var_map_reduce_2, 1, LOCAL(6), 1, LOCAL(2),
  // my_reduce
  func_my_reduce, 2, LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(554, 3),
  POS(556, 5),
  POS(557, 5),
  POS(555, 3)
};

static TAB_NUM t_func_hash_table_node___map_reduce_1[] = {
  11, // locals
  1, // parameters
  LOCAL(5), // 559_32_self
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
  POS(560, 31),
  POS(560, 18),
  POS(560, 53),
  POS(560, 40),
  POS(560, 3),
  POS(561, 31),
  POS(561, 18),
  POS(561, 53),
  POS(561, 40),
  POS(561, 3),
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
  POS(564, 3),
  POS(565, 3),
  POS(566, 6),
  POS(566, 3)
};

static TAB_NUM t_func_hash_table_node___map_reduce_2[] = {
  11, // locals
  1, // parameters
  LOCAL(5), // 568_32_self
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
  POS(569, 31),
  POS(569, 18),
  POS(569, 53),
  POS(569, 40),
  POS(569, 3),
  POS(570, 31),
  POS(570, 18),
  POS(570, 53),
  POS(570, 40),
  POS(570, 3),
  POS(571, 31),
  POS(571, 18),
  POS(571, 53),
  POS(571, 40),
  POS(571, 3),
  POS(572, 31),
  POS(572, 18),
  POS(572, 53),
  POS(572, 40),
  POS(572, 3),
  POS(573, 3),
  POS(574, 3),
  POS(575, 6),
  POS(575, 3)
};

static TAB_NUM t_func_std_types__hash_table___map_reduce[] = {
  2, // locals
  -4, // parameters
  MANDATORY_PARAMETER, var_587_0_self,
  MANDATORY_PARAMETER, var_588_0_map_function,
  var_append, var_589_0_reduce_function,
  var_undefined, var_590_0_unit,
  // length_of(self) == 0
  var_length_of, 1, var_587_0_self, 1, LOCAL(1),
  // length_of(self) == 0
  var_std__equal, 2, LOCAL(1), num_0, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_40, lambda_41, TAIL_CALL,
  POS(593, 5),
  POS(593, 5),
  POS(592, 3)
};

static TAB_NUM t_lambda_40[] = {
  0, // locals
  0, // parameters
  //  unit
  LET, 1, var_590_0_unit, TAIL_CALL,
  POS(594, 7)
};

static TAB_NUM t_lambda_41[] = {
  2, // locals
  0, // parameters
  // !mapping_function map_function
  LET, 1, var_588_0_map_function, 1, var_mapping_function,
  // !reduction_function reduce_function
  LET, 1, var_589_0_reduce_function, 1, var_reduction_function,
  // parameter_count_of(map_function) == 2:
  var_parameter_count_of, 1, var_588_0_map_function, 1, LOCAL(1),
  // parameter_count_of(map_function) == 2:
  var_std__equal, 2, LOCAL(1), num_2, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_42, lambda_43, TAIL_CALL,
  POS(596, 7),
  POS(597, 7),
  POS(599, 9),
  POS(599, 9),
  POS(598, 7)
};

static TAB_NUM t_lambda_42[] = {
  1, // locals
  0, // parameters
  // contents_of(self)
  var_contents_of, 1, var_587_0_self, 1, LOCAL(1),
  // map_reduce_2 contents_of(self)
  var_map_reduce_2, 1, LOCAL(1), TAIL_CALL,
  POS(600, 24),
  POS(600, 11)
};

static TAB_NUM t_lambda_43[] = {
  1, // locals
  0, // parameters
  // contents_of(self)
  var_contents_of, 1, var_587_0_self, 1, LOCAL(1),
  // map_reduce_1 contents_of(self)
  var_map_reduce_1, 1, LOCAL(1), TAIL_CALL,
  POS(602, 24),
  POS(602, 11)
};

static TAB_NUM t_func_std__hash_table[] = {
  1, // locals
  -1, // parameters
  REST_PARAMETER, LOCAL(1), // 609_0_pairs
  // $table empty_hash_table
  LET, 1, var_empty_hash_table, 1, var_611_1_table,
  // for_each pairs
  var_for_each, 3, LOCAL(1), lambda_44, lambda_45, TAIL_CALL,
  POS(611, 3),
  POS(612, 3)
};

static TAB_NUM t_lambda_44[] = {
  3, // locals
  1, // parameters
  LOCAL(1), // 613_3_pair
  // pair $key $value
  LOCAL(1), 0, 2, LOCAL(2), LOCAL(3),
  // table(key) value
  var_611_1_table, 2, LOCAL(2), LOCAL(3), 1, var_611_1_table,
  // next
  var_next, 0, TAIL_CALL,
  POS(614, 7),
  POS(615, 8),
  POS(616, 7)
};

static TAB_NUM t_lambda_45[] = {
  0, // locals
  0, // parameters
  //  table
  LET, 1, var_611_1_table, TAIL_CALL,
  POS(617, 7)
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
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__hash_table}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_44}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_45}},
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
  {var_map_reduce_2, -func_empty_hash_table_entry___map_reduce_2}
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
  {var_map_reduce_2, -func_empty_collision_list_entry___map_reduce_2}
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
  {var_map_reduce_2, -func_hash_table_leaf___map_reduce_2}
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
  {var_map_reduce_2, -func_collision_list_entry___map_reduce_2}
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
  {var_map_reduce_2, -func_hash_table_node___map_reduce_2}
};

static FUNKY_VARIABLE variables_table[] = {
  {
    FOT_POLYMORPHIC, 0, 0,
    "contents_of\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "assign\000std", NULL
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
    "object\000std_types", std_types__object__attributes
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "is_a_hash_table\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "false\000", NULL
  },
  {
    FOT_DERIVED, 0, 10,
    "hash_table\000std_types", std_types__hash_table__attributes,
    {"table\000std_types"}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "true\000", NULL
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "is_an_empty_entry\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_DERIVED, 0, 11,
    "empty_hash_table_entry\000", empty_hash_table_entry__attributes,
    {"object\000std_types"}
  },
  {
    FOT_DERIVED, 0, 9,
    "empty_collision_list_entry\000", empty_collision_list_entry__attributes,
    {"object\000std_types"}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "table\000std_types", NULL
  },
  {
    FOT_DERIVED, 0, 0,
    "empty_hash_table\000std", NULL,
    {"hash_table\000std_types"}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "length_of\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 10,
    "hash_table_leaf\000", hash_table_leaf__attributes,
    {.const_idx = -tuple_73_0}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "undefined\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "tuple\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 10,
    "collision_list_entry\000", collision_list_entry__attributes,
    {.const_idx = -tuple_73_0}
  },
  {
    FOT_INITIALIZED, 0, 10,
    "hash_table_node\000", hash_table_node__attributes,
    {.const_idx = -list_79_0}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "list\000", NULL
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
    "hash\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "99_1_hash_index\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "bit_or\000std", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "100_1_contents\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "equal\000std", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_defined\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000std", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "minus\000std", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "131_30_my_value\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "139_45_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "140_14_my_value\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "140_24_my_link\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "bit_and\000std", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "shift_right\000std", NULL
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
    "new\000", NULL
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
    "not\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "195_26_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "204_43_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "205_6_my_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "205_14_my_value\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "205_24_my_link\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "214_26_self\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "all_of\000", NULL
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
    "next\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "break\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "self\000basic_loops", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "saved_context_of\000basic_loops", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "body\000basic_loops", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "from\000basic_loops", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "328_1_idx\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "less\000std", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not\000std", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "361_1_idx\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "for_each\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "376_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "378_0_finally\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "finally\000basic_loops", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "parameter_count_of\000", NULL
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
    "map\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "450_0_self\000", NULL
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
    "494_13_left\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "494_18_right\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "reduce\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "516_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "517_0_function\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "518_0_unit\000", NULL
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
    "map_reduce\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "587_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "588_0_map_function\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "589_0_reduce_function\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "append\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "590_0_unit\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "hash_table\000std", NULL,
    {.const_idx = -func_std__hash_table}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "611_1_table\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_hash_table\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "serialization_tag_of\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "empty_collection_of\000", NULL
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
  127, // number of constants
  103, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  constants_table,
  variables_table,
};
