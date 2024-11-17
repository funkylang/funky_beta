#include <stddef.h>
#include <stdint.h>

#include "runtime/common.h"
#include "runtime/builtins.h"
#include "runtime/fko.h"
#include "runtime/memory.h"

enum {
  num_0 = -1,
  tuple_87_0 = -2,
  list_93_0 = -3,
  uni_NONE = -4,
  func_std_types__hash_set = -5,
  num_0xc0000000 = -6,
  lambda_1 = -7,
  lambda_2 = -8,
  lambda_value = -9,
  lambda_3 = -10,
  num_1 = -11,
  lambda_4 = -12,
  lambda_5 = -13,
  lambda_6 = -14,
  lambda_7 = -15,
  func_empty_hash_set_entry___retrieve = -16,
  func_hash_set_leaf___retrieve = -17,
  lambda_8 = -18,
  lambda_9 = -19,
  func_empty_collision_list_entry___retrieve = -20,
  func_collision_list_entry___retrieve = -21,
  lambda_10 = -22,
  lambda_11 = -23,
  func_hash_set_node___retrieve = -24,
  num_7 = -25,
  num_3 = -26,
  func_empty_hash_set_entry___insert = -27,
  lambda_12 = -28,
  lambda_13 = -29,
  func_hash_set_leaf___insert = -30,
  lambda_14 = -31,
  lambda_15 = -32,
  func_empty_collision_list_entry___insert = -33,
  func_collision_list_entry___insert = -34,
  lambda_16 = -35,
  lambda_17 = -36,
  lambda_18 = -37,
  lambda_19 = -38,
  func_hash_set_node___insert = -39,
  func_empty_hash_set_entry___delete = -40,
  func_hash_set_leaf___delete = -41,
  lambda_20 = -42,
  lambda_21 = -43,
  func_empty_collision_list_entry___delete = -44,
  func_collision_list_entry___delete = -45,
  lambda_22 = -46,
  lambda_23 = -47,
  func_hash_set_node___delete = -48,
  lambda_24 = -49,
  lambda_25 = -50,
  lambda_26 = -51,
  lambda_27 = -52,
  func_empty_hash_set_entry___for_each_1 = -53,
  func_collision_list_entry___for_each_1 = -54,
  lambda_28 = -55,
  lambda_next = -56,
  lambda_basic_loopsself_is_an_empty_entry = -57,
  lambda_29 = -58,
  func_hash_set_leaf___for_each_1 = -59,
  func_hash_set_node___for_each_1 = -60,
  lambda_30 = -61,
  lambda_2_next = -62,
  num_8 = -63,
  lambda_31 = -64,
  lambda_32 = -65,
  func_std_types__hash_set___for_each = -66,
  lambda_33 = -67,
  uni_UNIT = -68,
  func_my_reduce = -69,
  lambda_34 = -70,
  lambda_35 = -71,
  lambda_36 = -72,
  lambda_37 = -73,
  func_empty_hash_set_entry___map_reduce_1 = -74,
  func_hash_set_leaf___map_reduce_1 = -75,
  func_empty_collision_list_entry___map_reduce_1 = -76,
  func_collision_list_entry___map_reduce_1 = -77,
  func_hash_set_node___map_reduce_1 = -78,
  num_2 = -79,
  num_4 = -80,
  num_5 = -81,
  num_6 = -82,
  func_std_types__hash_set___map_reduce = -83,
  lambda_38 = -84,
  lambda_39 = -85,
  func_std__hash_set = -86,
  lambda_40 = -87,
  lambda_41 = -88,
  str_hash_set = -89
};

enum {
  var__START = FIRST_VAR-1,
  var_contents_of, // attribute
  var_std__assign, // extern
  var_retrieve, // attribute
  var_insert, // attribute
  var_delete, // attribute
  var_std__is_a_hash_set, // attribute
  var_std_types__object, // extern
  var_is_a_hash_set, // extern polymorphic
  var_false, // extern
  var_std_types__hash_set, // derived
  var_true, // extern
  var_is_an_empty_entry, // attribute
  var_empty_hash_set_entry, // derived
  var_empty_collision_list_entry, // derived
  var_std_types__set, // extern
  var_length_of, // extern polymorphic
  var_std__empty_hash_set, // derived
  var_hash_set_leaf, // initialized compound
  var_undefined, // extern
  var_tuple, // extern
  var_collision_list_entry, // initialized compound
  var_hash_set_node, // initialized compound
  var_list, // extern
  var_109_0_myself, // dynamic
  var_110_0_key, // dynamic
  var_111_0_value, // dynamic
  var_hash, // extern
  var_113_1_hash_index, // dynamic
  var_std__bit_or, // extern
  var_114_1_contents, // dynamic
  var_std__equal, // extern
  var_std__plus, // extern
  var_if, // extern
  var_std__minus, // extern
  var_153_45_key, // dynamic
  var_154_14_my_link, // dynamic
  var_std__bit_and, // extern
  var_std__shift_right, // extern
  var_167_37_hash_index, // dynamic
  var_167_48_key, // dynamic
  var_typed_tuple, // extern
  var_173_24_self, // dynamic
  var_173_29_hash_index, // dynamic
  var_173_40_key, // dynamic
  var_174_6_my_hash_index, // dynamic
  var_174_21_my_key, // dynamic
  var_185_31_self, // dynamic
  var_185_36_dummy, // dynamic
  var_185_42_key, // dynamic
  var_186_6_my_key, // dynamic
  var_186_14_my_link, // dynamic
  var_191_26_new_link, // dynamic
  var_216_24_self, // dynamic
  var_225_43_key, // dynamic
  var_226_6_my_key, // dynamic
  var_226_14_my_link, // dynamic
  var_235_24_self, // dynamic
  var_all_of, // extern
  var_for_each_1, // attribute
  var_next, // extern
  var_break, // extern
  var_basic_loops__self, // extern
  var_basic_types__break_function, // extern
  var_basic_loops__saved_context_of, // extern polymorphic
  var_new, // extern
  var_basic_loops__body, // extern
  var_basic_loops__from, // extern
  var_310_1_idx, // dynamic
  var_std__less, // extern
  var_std__not, // extern
  var_for_each, // extern polymorphic
  var_327_0_finally, // dynamic
  var_basic_loops__finally, // extern
  var_reduction_function, // derived
  var_358_13_left, // dynamic
  var_358_18_right, // dynamic
  var_mapping_function, // derived
  var_map_reduce_1, // attribute
  var_map_reduce, // extern polymorphic
  var_408_0_self, // dynamic
  var_409_0_map_function, // dynamic
  var_410_0_reduce_function, // dynamic
  var_append, // extern
  var_411_0_unit, // dynamic
  var_std__hash_set, // initialized
  var_423_1_result, // dynamic
  var_empty_hash_set, // extern
  var_serialization_tag_of, // extern polymorphic
  var_empty_collection_of, // extern polymorphic
  var__END
};


static TAB_NUM t_func_std_types__hash_set[] = {
  1, // locals
  -3, // parameters
  MYSELF_PARAMETER, var_109_0_myself,
  MANDATORY_PARAMETER, var_110_0_key,
  uni_NONE, var_111_0_value,
  // hash(key) | 0xc000'0000 # add sentinel hash index (3)
  var_hash, 1, var_110_0_key, 1, LOCAL(1),
  // $hash_index hash(key) | 0xc000'0000 # add sentinel hash index (3)
  var_std__bit_or, 2, LOCAL(1), num_0xc0000000, 1, var_113_1_hash_index,
  // $contents contents_of(myself)
  var_contents_of, 1, var_109_0_myself, 1, var_114_1_contents,
  // NONE == value
  var_std__equal, 2, uni_NONE, var_111_0_value, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1, lambda_2, TAIL_CALL,
  POS(113, 15),
  POS(113, 3),
  POS(114, 3),
  POS(116, 5),
  POS(115, 3)
};

static TAB_NUM t_lambda_1[] = {
  1, // locals
  0, // parameters
  // retrieve(contents hash_index key)
  var_retrieve, 3, var_114_1_contents, var_113_1_hash_index, var_110_0_key, 1, LOCAL(1),
  //  retrieve(contents hash_index key)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(117, 8),
  POS(117, 7)
};

static TAB_NUM t_lambda_2[] = {
  0, // locals
  0, // parameters
  // if
  var_if, 3, var_111_0_value, lambda_value, lambda_5, TAIL_CALL,
  POS(119, 7)
};

static TAB_NUM t_lambda_value[] = {
  1, // locals
  0, // parameters
  // insert &contents $success hash_index key
  var_insert, 3, var_114_1_contents, var_113_1_hash_index, var_110_0_key, 2, var_114_1_contents, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_3, lambda_4, TAIL_CALL,
  POS(121, 11),
  POS(122, 11)
};

static TAB_NUM t_lambda_3[] = {
  3, // locals
  0, // parameters
  // length_of(myself)+1
  var_length_of, 1, var_109_0_myself, 1, LOCAL(1),
  // length_of(myself)+1
  var_std__plus, 2, LOCAL(1), num_1, 1, LOCAL(2),
  // myself
  LET, -2, var_109_0_myself, var_contents_of, var_114_1_contents, var_length_of, LOCAL(2), LOCAL(3),
  // 
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(127, 28),
  POS(127, 28),
  POS(125, 15),
  POS(124, 15)
};

static TAB_NUM t_lambda_4[] = {
  1, // locals
  0, // parameters
  // .contents_of contents)
  LET, -1, var_109_0_myself, var_contents_of, var_114_1_contents, LOCAL(1),
  //  myself(.contents_of contents)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(128, 23),
  POS(128, 15)
};

static TAB_NUM t_lambda_5[] = {
  1, // locals
  0, // parameters
  // delete &contents $success hash_index key
  var_delete, 3, var_114_1_contents, var_113_1_hash_index, var_110_0_key, 2, var_114_1_contents, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_6, lambda_7, TAIL_CALL,
  POS(130, 11),
  POS(131, 11)
};

static TAB_NUM t_lambda_6[] = {
  3, // locals
  0, // parameters
  // length_of(myself)-1
  var_length_of, 1, var_109_0_myself, 1, LOCAL(1),
  // length_of(myself)-1
  var_std__minus, 2, LOCAL(1), num_1, 1, LOCAL(2),
  // myself
  LET, -2, var_109_0_myself, var_contents_of, var_114_1_contents, var_length_of, LOCAL(2), LOCAL(3),
  // 
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(136, 28),
  POS(136, 28),
  POS(134, 15),
  POS(133, 15)
};

static TAB_NUM t_lambda_7[] = {
  0, // locals
  0, // parameters
  //  myself
  LET, 1, var_109_0_myself, TAIL_CALL,
  POS(137, 15)
};

static TAB_NUM t_func_empty_hash_set_entry___retrieve[] = {
  1, // locals
  3, // parameters
  LOCAL(1),
  LOCAL(1),
  LOCAL(1),
  // -> false
  LET, 1, var_false, TAIL_CALL,
  POS(142, 58)
};

static TAB_NUM t_func_hash_set_leaf___retrieve[] = {
  4, // locals
  3, // parameters
  LOCAL(2), // 144_26_self
  LOCAL(1),
  LOCAL(3), // 144_43_key
  // self $_my_hash_index $my_key
  LOCAL(2), 0, 2, LOCAL(1), LOCAL(4),
  // key == my_key
  var_std__equal, 2, LOCAL(3), LOCAL(4), 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_8, lambda_9, TAIL_CALL,
  POS(145, 3),
  POS(147, 5),
  POS(146, 3)
};

static TAB_NUM t_lambda_8[] = {
  0, // locals
  0, // parameters
  //  true
  LET, 1, var_true, TAIL_CALL,
  POS(148, 7)
};

static TAB_NUM t_lambda_9[] = {
  0, // locals
  0, // parameters
  //  false
  LET, 1, var_false, TAIL_CALL,
  POS(149, 7)
};

static TAB_NUM t_func_empty_collision_list_entry___retrieve[] = {
  1, // locals
  3, // parameters
  LOCAL(1),
  LOCAL(1),
  LOCAL(1),
  // -> false
  LET, 1, var_false, TAIL_CALL,
  POS(151, 59)
};

static TAB_NUM t_func_collision_list_entry___retrieve[] = {
  3, // locals
  3, // parameters
  LOCAL(2), // 153_33_self
  LOCAL(1),
  var_153_45_key,
  // self $my_key $my_link
  LOCAL(2), 0, 2, LOCAL(3), var_154_14_my_link,
  // key == my_key
  var_std__equal, 2, var_153_45_key, LOCAL(3), 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_10, lambda_11, TAIL_CALL,
  POS(154, 3),
  POS(156, 5),
  POS(155, 3)
};

static TAB_NUM t_lambda_10[] = {
  0, // locals
  0, // parameters
  //  true
  LET, 1, var_true, TAIL_CALL,
  POS(157, 7)
};

static TAB_NUM t_lambda_11[] = {
  0, // locals
  0, // parameters
  // retrieve my_link undefined key
  var_retrieve, 3, var_154_14_my_link, var_undefined, var_153_45_key, TAIL_CALL,
  POS(158, 7)
};

static TAB_NUM t_func_hash_set_node___retrieve[] = {
  6, // locals
  3, // parameters
  LOCAL(3), // 160_26_self
  LOCAL(4), // 160_31_hash_index
  LOCAL(5), // 160_42_key
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
  POS(161, 9),
  POS(161, 3),
  POS(162, 12),
  POS(162, 22),
  POS(162, 3)
};

static TAB_NUM t_func_empty_hash_set_entry___insert[] = {
  1, // locals
  3, // parameters
  LOCAL(1),
  var_167_37_hash_index,
  var_167_48_key,
  // hash_index == 3
  var_std__equal, 2, var_167_37_hash_index, num_3, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_12, lambda_13, TAIL_CALL,
  POS(169, 5),
  POS(168, 3)
};

static TAB_NUM t_lambda_12[] = {
  1, // locals
  0, // parameters
  // typed_tuple(collision_list_entry key empty_collision_list_entry) true
  var_typed_tuple, 3, var_collision_list_entry, var_167_48_key, var_empty_collision_list_entry, 1, LOCAL(1),
  //  typed_tuple(collision_list_entry key empty_collision_list_entry) true
  LET, 2, LOCAL(1), var_true, TAIL_CALL,
  POS(170, 8),
  POS(170, 7)
};

static TAB_NUM t_lambda_13[] = {
  1, // locals
  0, // parameters
  // typed_tuple(hash_set_leaf hash_index key) true
  var_typed_tuple, 3, var_hash_set_leaf, var_167_37_hash_index, var_167_48_key, 1, LOCAL(1),
  //  typed_tuple(hash_set_leaf hash_index key) true
  LET, 2, LOCAL(1), var_true, TAIL_CALL,
  POS(171, 8),
  POS(171, 7)
};

static TAB_NUM t_func_hash_set_leaf___insert[] = {
  1, // locals
  3, // parameters
  var_173_24_self,
  var_173_29_hash_index,
  var_173_40_key,
  // self $my_hash_index $my_key
  var_173_24_self, 0, 2, var_174_6_my_hash_index, var_174_21_my_key,
  // key == my_key
  var_std__equal, 2, var_173_40_key, var_174_21_my_key, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_14, lambda_15, TAIL_CALL,
  POS(174, 3),
  POS(176, 5),
  POS(175, 3)
};

static TAB_NUM t_lambda_14[] = {
  0, // locals
  0, // parameters
  //  self false
  LET, 2, var_173_24_self, var_false, TAIL_CALL,
  POS(177, 7)
};

static TAB_NUM t_lambda_15[] = {
  2, // locals
  0, // parameters
  // insert hash_set_node $new_node $_did_insert my_hash_index my_key
  var_insert, 3, var_hash_set_node, var_174_6_my_hash_index, var_174_21_my_key, 2, LOCAL(2), LOCAL(1),
  // insert new_node hash_index key
  var_insert, 3, LOCAL(2), var_173_29_hash_index, var_173_40_key, TAIL_CALL,
  POS(179, 7),
  POS(180, 7)
};

static TAB_NUM t_func_empty_collision_list_entry___insert[] = {
  3, // locals
  3, // parameters
  LOCAL(2), // 182_37_self
  LOCAL(1),
  LOCAL(3), // 182_49_key
  // typed_tuple(collision_list_entry key self) true
  var_typed_tuple, 3, var_collision_list_entry, LOCAL(3), LOCAL(2), 1, LOCAL(1),
  // -> typed_tuple(collision_list_entry key self) true
  LET, 2, LOCAL(1), var_true, TAIL_CALL,
  POS(183, 6),
  POS(183, 3)
};

static TAB_NUM t_func_collision_list_entry___insert[] = {
  1, // locals
  3, // parameters
  var_185_31_self,
  var_185_36_dummy,
  var_185_42_key,
  // self $my_key $my_link
  var_185_31_self, 0, 2, var_186_6_my_key, var_186_14_my_link,
  // key == my_key
  var_std__equal, 2, var_185_42_key, var_186_6_my_key, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_16, lambda_17, TAIL_CALL,
  POS(186, 3),
  POS(188, 5),
  POS(187, 3)
};

static TAB_NUM t_lambda_16[] = {
  0, // locals
  0, // parameters
  //  self false
  LET, 2, var_185_31_self, var_false, TAIL_CALL,
  POS(189, 7)
};

static TAB_NUM t_lambda_17[] = {
  1, // locals
  0, // parameters
  // insert my_link dummy key $new_link $did_insert
  var_insert, 3, var_186_14_my_link, var_185_36_dummy, var_185_42_key, 2, var_191_26_new_link, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_18, lambda_19, TAIL_CALL,
  POS(191, 7),
  POS(192, 7)
};

static TAB_NUM t_lambda_18[] = {
  1, // locals
  0, // parameters
  // typed_tuple(collision_list_entry my_key new_link) true
  var_typed_tuple, 3, var_collision_list_entry, var_186_6_my_key, var_191_26_new_link, 1, LOCAL(1),
  //  typed_tuple(collision_list_entry my_key new_link) true
  LET, 2, LOCAL(1), var_true, TAIL_CALL,
  POS(194, 12),
  POS(194, 11)
};

static TAB_NUM t_lambda_19[] = {
  0, // locals
  0, // parameters
  //  self false
  LET, 2, var_185_31_self, var_false, TAIL_CALL,
  POS(195, 11)
};

static TAB_NUM t_func_hash_set_node___insert[] = {
  7, // locals
  3, // parameters
  LOCAL(3), // 197_24_self
  LOCAL(4), // 197_29_hash_index
  LOCAL(5), // 197_40_key
  // hash_index & 7)+1
  var_std__bit_and, 2, LOCAL(4), num_7, 1, LOCAL(1),
  // $idx (hash_index & 7)+1
  var_std__plus, 2, LOCAL(1), num_1, 1, LOCAL(6),
  // self(idx) $did_insert hash_index >> 3 key
  LOCAL(3), 1, LOCAL(6), 1, LOCAL(1),
  // hash_index >> 3 key
  var_std__shift_right, 2, LOCAL(4), num_3, 1, LOCAL(2),
  // insert &self(idx) $did_insert hash_index >> 3 key
  var_insert, 3, LOCAL(1), LOCAL(2), LOCAL(5), 2, LOCAL(1), LOCAL(7),
  // self(idx) $did_insert hash_index >> 3 key
  LOCAL(3), 2, LOCAL(6), LOCAL(1), 1, LOCAL(3),
  // -> self did_insert
  LET, 2, LOCAL(3), LOCAL(7), TAIL_CALL,
  POS(198, 9),
  POS(198, 3),
  POS(199, 11),
  POS(199, 33),
  POS(199, 3),
  POS(199, 11),
  POS(200, 3)
};

static TAB_NUM t_func_empty_hash_set_entry___delete[] = {
  2, // locals
  3, // parameters
  LOCAL(2), // 214_31_self
  LOCAL(1),
  LOCAL(1),
  // -> self false
  LET, 2, LOCAL(2), var_false, TAIL_CALL,
  POS(214, 55)
};

static TAB_NUM t_func_hash_set_leaf___delete[] = {
  3, // locals
  3, // parameters
  var_216_24_self,
  LOCAL(1),
  LOCAL(2), // 216_41_key
  // self $_my_hash_index $my_key
  var_216_24_self, 0, 2, LOCAL(1), LOCAL(3),
  // key == my_key
  var_std__equal, 2, LOCAL(2), LOCAL(3), 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_20, lambda_21, TAIL_CALL,
  POS(217, 3),
  POS(219, 5),
  POS(218, 3)
};

static TAB_NUM t_lambda_20[] = {
  0, // locals
  0, // parameters
  //  empty_hash_set_entry true
  LET, 2, var_empty_hash_set_entry, var_true, TAIL_CALL,
  POS(220, 7)
};

static TAB_NUM t_lambda_21[] = {
  0, // locals
  0, // parameters
  //  self false
  LET, 2, var_216_24_self, var_false, TAIL_CALL,
  POS(221, 7)
};

static TAB_NUM t_func_empty_collision_list_entry___delete[] = {
  2, // locals
  3, // parameters
  LOCAL(2), // 223_37_self
  LOCAL(1),
  LOCAL(1),
  // -> self false
  LET, 2, LOCAL(2), var_false, TAIL_CALL,
  POS(223, 56)
};

static TAB_NUM t_func_collision_list_entry___delete[] = {
  2, // locals
  3, // parameters
  LOCAL(2), // 225_31_self
  LOCAL(1),
  var_225_43_key,
  // self $my_key $my_link
  LOCAL(2), 0, 2, var_226_6_my_key, var_226_14_my_link,
  // key == my_key
  var_std__equal, 2, var_225_43_key, var_226_6_my_key, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_22, lambda_23, TAIL_CALL,
  POS(226, 3),
  POS(228, 5),
  POS(227, 3)
};

static TAB_NUM t_lambda_22[] = {
  0, // locals
  0, // parameters
  // -> my_link true
  LET, 2, var_226_14_my_link, var_true, TAIL_CALL,
  POS(230, 7)
};

static TAB_NUM t_lambda_23[] = {
  2, // locals
  0, // parameters
  // delete &my_link undefined key $did_delete
  var_delete, 3, var_226_14_my_link, var_undefined, var_225_43_key, 2, var_226_14_my_link, LOCAL(2),
  // typed_tuple(collision_list_entry my_key my_link) did_delete
  var_typed_tuple, 3, var_collision_list_entry, var_226_6_my_key, var_226_14_my_link, 1, LOCAL(1),
  // -> typed_tuple(collision_list_entry my_key my_link) did_delete
  LET, 2, LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(232, 7),
  POS(233, 10),
  POS(233, 7)
};

static TAB_NUM t_func_hash_set_node___delete[] = {
  6, // locals
  3, // parameters
  var_235_24_self,
  LOCAL(3), // 235_29_hash_index
  LOCAL(4), // 235_40_key
  // hash_index & 7)+1
  var_std__bit_and, 2, LOCAL(3), num_7, 1, LOCAL(1),
  // $idx (hash_index & 7)+1
  var_std__plus, 2, LOCAL(1), num_1, 1, LOCAL(5),
  // self(idx) $success hash_index >> 3 key
  var_235_24_self, 1, LOCAL(5), 1, LOCAL(1),
  // hash_index >> 3 key
  var_std__shift_right, 2, LOCAL(3), num_3, 1, LOCAL(2),
  // delete &self(idx) $success hash_index >> 3 key
  var_delete, 3, LOCAL(1), LOCAL(2), LOCAL(4), 2, LOCAL(1), LOCAL(6),
  // self(idx) $success hash_index >> 3 key
  var_235_24_self, 2, LOCAL(5), LOCAL(1), 1, var_235_24_self,
  // if
  var_if, 3, LOCAL(6), lambda_24, lambda_27, TAIL_CALL,
  POS(236, 9),
  POS(236, 3),
  POS(237, 11),
  POS(237, 30),
  POS(237, 3),
  POS(237, 11),
  POS(238, 3)
};

static TAB_NUM t_lambda_24[] = {
  1, // locals
  0, // parameters
  // all_of(self is_an_empty_entry)
  var_all_of, 2, var_235_24_self, var_is_an_empty_entry, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_25, lambda_26, TAIL_CALL,
  POS(242, 9),
  POS(241, 7)
};

static TAB_NUM t_lambda_25[] = {
  0, // locals
  0, // parameters
  //  empty_hash_set_entry true
  LET, 2, var_empty_hash_set_entry, var_true, TAIL_CALL,
  POS(243, 11)
};

static TAB_NUM t_lambda_26[] = {
  0, // locals
  0, // parameters
  //  self true
  LET, 2, var_235_24_self, var_true, TAIL_CALL,
  POS(244, 11)
};

static TAB_NUM t_lambda_27[] = {
  0, // locals
  0, // parameters
  //  self false
  LET, 2, var_235_24_self, var_false, TAIL_CALL,
  POS(245, 7)
};

static TAB_NUM t_func_empty_hash_set_entry___for_each_1[] = {
  1, // locals
  1, // parameters
  LOCAL(1),
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(253, 3)
};

static TAB_NUM t_func_collision_list_entry___for_each_1[] = {
  2, // locals
  1, // parameters
  LOCAL(1), // 255_35_self
  // $saved_context
  var_tuple, 3, var_next, var_break, var_basic_loops__self, 1, LOCAL(2),
  // !basic_loops::self self
  LET, 1, LOCAL(1), 1, var_basic_loops__self,
  // new !break basic_types::break_function: (myself^)
  var_new, 2, var_basic_types__break_function, lambda_28, IO_CALL(1), var_break,
  // break.basic_loops::saved_context_of saved_context
  LET, -1, var_break, var_basic_loops__saved_context_of, LOCAL(2), var_break,
  // !next:
  LET, 1, lambda_next, 1, var_next,
  // next
  var_next, 0, TAIL_CALL,
  POS(256, 3),
  POS(262, 3),
  POS(264, 3),
  POS(270, 4),
  POS(272, 3),
  POS(284, 3)
};

static TAB_NUM t_lambda_28[] = {
  2, // locals
  -1, // parameters
  MYSELF_PARAMETER, LOCAL(2), // 264_41_myself
  // basic_loops::saved_context_of(myself)
  var_basic_loops__saved_context_of, 1, LOCAL(2), 1, LOCAL(1),
  // basic_loops::saved_context_of(myself)
  LOCAL(1), 0, 3, var_next, var_break, var_basic_loops__self,
  // break!
  var_break, 0, IO_TAIL_CALL,
  POS(265, 5),
  POS(265, 5),
  POS(268, 5)
};

static TAB_NUM t_lambda_next[] = {
  1, // locals
  0, // parameters
  // is_an_empty_entry:
  var_is_an_empty_entry, 1, var_basic_loops__self, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_basic_loopsself_is_an_empty_entry, lambda_29, IO_TAIL_CALL,
  POS(274, 25),
  POS(273, 5)
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
  POS(275, 9),
  POS(275, 9),
  POS(278, 9)
};

static TAB_NUM t_lambda_29[] = {
  2, // locals
  0, // parameters
  // basic_loops::self $key $link
  var_basic_loops__self, 0, 2, LOCAL(1), LOCAL(2),
  // !basic_loops::self link
  LET, 1, LOCAL(2), 1, var_basic_loops__self,
  // basic_loops::body! key
  var_basic_loops__body, 1, LOCAL(1), IO_TAIL_CALL,
  POS(280, 9),
  POS(281, 9),
  POS(282, 9)
};

static TAB_NUM t_func_hash_set_leaf___for_each_1[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 286_28_self
  // self $_hash $key
  LOCAL(2), 0, 2, LOCAL(1), LOCAL(3),
  // basic_loops::body! key
  var_basic_loops__body, 1, LOCAL(3), IO_TAIL_CALL,
  POS(287, 3),
  POS(288, 3)
};

static TAB_NUM t_func_hash_set_node___for_each_1[] = {
  2, // locals
  1, // parameters
  LOCAL(1), // 290_28_self
  // $saved_context
  var_tuple, 4, var_next, var_break, var_basic_loops__from, var_basic_loops__self, 1, LOCAL(2),
  // !basic_loops::from 1
  LET, 1, num_1, 1, var_basic_loops__from,
  // !basic_loops::self self
  LET, 1, LOCAL(1), 1, var_basic_loops__self,
  // new !break basic_types::break_function: (myself^)
  var_new, 2, var_basic_types__break_function, lambda_30, IO_CALL(1), var_break,
  // break.basic_loops::saved_context_of saved_context
  LET, -1, var_break, var_basic_loops__saved_context_of, LOCAL(2), var_break,
  // !next:
  LET, 1, lambda_2_next, 1, var_next,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(291, 3),
  POS(298, 3),
  POS(299, 3),
  POS(301, 3),
  POS(307, 4),
  POS(309, 3),
  POS(321, 3)
};

static TAB_NUM t_lambda_30[] = {
  2, // locals
  -1, // parameters
  MYSELF_PARAMETER, LOCAL(2), // 301_41_myself
  // basic_loops::saved_context_of(myself)
  var_basic_loops__saved_context_of, 1, LOCAL(2), 1, LOCAL(1),
  // basic_loops::saved_context_of(myself)
  LOCAL(1), 0, 4, var_next, var_break, var_basic_loops__from, var_basic_loops__self,
  // break!
  var_break, 0, IO_TAIL_CALL,
  POS(302, 5),
  POS(302, 5),
  POS(305, 5)
};

static TAB_NUM t_lambda_2_next[] = {
  2, // locals
  0, // parameters
  // $idx basic_loops::from
  LET, 1, var_basic_loops__from, 1, var_310_1_idx,
  // 8:
  var_std__less, 2, num_8, var_310_1_idx, 1, LOCAL(1),
  // 8:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_31, lambda_32, IO_TAIL_CALL,
  POS(310, 5),
  POS(312, 14),
  POS(312, 14),
  POS(311, 5)
};

static TAB_NUM t_lambda_31[] = {
  1, // locals
  0, // parameters
  // !basic_loops::from idx+1
  var_std__plus, 2, var_310_1_idx, num_1, 1, var_basic_loops__from,
  // basic_loops::self(idx)
  var_basic_loops__self, 1, var_310_1_idx, 1, LOCAL(1),
  // for_each_1! basic_loops::self(idx)
  var_for_each_1, 1, LOCAL(1), IO_TAIL_CALL,
  POS(313, 9),
  POS(314, 21),
  POS(314, 9)
};

static TAB_NUM t_lambda_32[] = {
  1, // locals
  0, // parameters
  // basic_loops::saved_context_of(break)
  var_basic_loops__saved_context_of, 1, var_break, 1, LOCAL(1),
  // basic_loops::saved_context_of(break)
  LOCAL(1), 0, 4, var_next, var_break, var_basic_loops__from, var_basic_loops__self,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(316, 9),
  POS(316, 9),
  POS(319, 9)
};

static TAB_NUM t_func_std_types__hash_set___for_each[] = {
  4, // locals
  -3, // parameters
  MANDATORY_PARAMETER, LOCAL(2), // 325_0_self
  MANDATORY_PARAMETER, LOCAL(3), // 326_0_body
  var_next, var_327_0_finally,
  // $saved_context
  var_tuple, 4, var_next, var_break, var_basic_loops__body, var_basic_loops__finally, 1, LOCAL(4),
  // !basic_loops::body body
  LET, 1, LOCAL(3), 1, var_basic_loops__body,
  // !basic_loops::finally finally
  LET, 1, var_327_0_finally, 1, var_basic_loops__finally,
  // new !break basic_types::break_function: (myself^)
  var_new, 2, var_basic_types__break_function, lambda_33, IO_CALL(1), var_break,
  // break.basic_loops::saved_context_of saved_context
  LET, -1, var_break, var_basic_loops__saved_context_of, LOCAL(4), var_break,
  // !next break
  LET, 1, var_break, 1, var_next,
  // contents_of(self)
  var_contents_of, 1, LOCAL(2), 1, LOCAL(1),
  // for_each_1! contents_of(self)
  var_for_each_1, 1, LOCAL(1), IO_TAIL_CALL,
  POS(329, 3),
  POS(336, 3),
  POS(337, 3),
  POS(339, 3),
  POS(346, 4),
  POS(347, 3),
  POS(349, 15),
  POS(349, 3)
};

static TAB_NUM t_lambda_33[] = {
  2, // locals
  -1, // parameters
  MYSELF_PARAMETER, LOCAL(2), // 339_41_myself
  // !finally basic_loops::finally
  LET, 1, var_basic_loops__finally, 1, var_327_0_finally,
  // basic_loops::saved_context_of(myself)
  var_basic_loops__saved_context_of, 1, LOCAL(2), 1, LOCAL(1),
  // basic_loops::saved_context_of(myself)
  LOCAL(1), 0, 4, var_next, var_break, var_basic_loops__body, var_basic_loops__finally,
  // finally!
  var_327_0_finally, 0, IO_TAIL_CALL,
  POS(340, 5),
  POS(341, 5),
  POS(341, 5),
  POS(344, 5)
};

static TAB_NUM t_func_my_reduce[] = {
  1, // locals
  2, // parameters
  var_358_13_left,
  var_358_18_right,
  // left == UNIT
  var_std__equal, 2, var_358_13_left, uni_UNIT, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_34, lambda_35, TAIL_CALL,
  POS(360, 5),
  POS(359, 3)
};

static TAB_NUM t_lambda_34[] = {
  0, // locals
  0, // parameters
  //  right
  LET, 1, var_358_18_right, TAIL_CALL,
  POS(361, 7)
};

static TAB_NUM t_lambda_35[] = {
  1, // locals
  0, // parameters
  // right == UNIT
  var_std__equal, 2, var_358_18_right, uni_UNIT, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_36, lambda_37, TAIL_CALL,
  POS(364, 9),
  POS(363, 7)
};

static TAB_NUM t_lambda_36[] = {
  0, // locals
  0, // parameters
  //  left
  LET, 1, var_358_13_left, TAIL_CALL,
  POS(365, 11)
};

static TAB_NUM t_lambda_37[] = {
  1, // locals
  0, // parameters
  // reduction_function(left right)
  var_reduction_function, 2, var_358_13_left, var_358_18_right, 1, LOCAL(1),
  //  reduction_function(left right)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(366, 12),
  POS(366, 11)
};

static TAB_NUM t_func_empty_hash_set_entry___map_reduce_1[] = {
  1, // locals
  1, // parameters
  LOCAL(1),
  // -> UNIT
  LET, 1, uni_UNIT, TAIL_CALL,
  POS(375, 45)
};

static TAB_NUM t_func_hash_set_leaf___map_reduce_1[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 377_30_self
  // self $_my_hash_index $my_key
  LOCAL(2), 0, 2, LOCAL(1), LOCAL(3),
  // mapping_function(my_key)
  var_mapping_function, 1, LOCAL(3), 1, LOCAL(1),
  // -> mapping_function(my_key)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(378, 3),
  POS(379, 6),
  POS(379, 3)
};

static TAB_NUM t_func_empty_collision_list_entry___map_reduce_1[] = {
  1, // locals
  1, // parameters
  LOCAL(1),
  // -> UNIT
  LET, 1, uni_UNIT, TAIL_CALL,
  POS(381, 51)
};

static TAB_NUM t_func_collision_list_entry___map_reduce_1[] = {
  5, // locals
  1, // parameters
  LOCAL(3), // 383_37_self
  // self $my_key $my_link
  LOCAL(3), 0, 2, LOCAL(4), LOCAL(5),
  // mapping_function(my_key)
  var_mapping_function, 1, LOCAL(4), 1, LOCAL(1),
  // map_reduce_1(my_link)
  var_map_reduce_1, 1, LOCAL(5), 1, LOCAL(2),
  // my_reduce
  func_my_reduce, 2, LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(384, 3),
  POS(386, 5),
  POS(387, 5),
  POS(385, 3)
};

static TAB_NUM t_func_hash_set_node___map_reduce_1[] = {
  11, // locals
  1, // parameters
  LOCAL(5), // 389_30_self
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
  POS(390, 31),
  POS(390, 18),
  POS(390, 53),
  POS(390, 40),
  POS(390, 3),
  POS(391, 31),
  POS(391, 18),
  POS(391, 53),
  POS(391, 40),
  POS(391, 3),
  POS(392, 31),
  POS(392, 18),
  POS(392, 53),
  POS(392, 40),
  POS(392, 3),
  POS(393, 31),
  POS(393, 18),
  POS(393, 53),
  POS(393, 40),
  POS(393, 3),
  POS(394, 3),
  POS(395, 3),
  POS(396, 6),
  POS(396, 3)
};

static TAB_NUM t_func_std_types__hash_set___map_reduce[] = {
  2, // locals
  -4, // parameters
  MANDATORY_PARAMETER, var_408_0_self,
  MANDATORY_PARAMETER, var_409_0_map_function,
  var_append, var_410_0_reduce_function,
  var_undefined, var_411_0_unit,
  // length_of(self) == 0
  var_length_of, 1, var_408_0_self, 1, LOCAL(1),
  // length_of(self) == 0
  var_std__equal, 2, LOCAL(1), num_0, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_38, lambda_39, TAIL_CALL,
  POS(414, 5),
  POS(414, 5),
  POS(413, 3)
};

static TAB_NUM t_lambda_38[] = {
  0, // locals
  0, // parameters
  //  unit
  LET, 1, var_411_0_unit, TAIL_CALL,
  POS(415, 7)
};

static TAB_NUM t_lambda_39[] = {
  1, // locals
  0, // parameters
  // !mapping_function map_function
  LET, 1, var_409_0_map_function, 1, var_mapping_function,
  // !reduction_function reduce_function
  LET, 1, var_410_0_reduce_function, 1, var_reduction_function,
  // contents_of(self)
  var_contents_of, 1, var_408_0_self, 1, LOCAL(1),
  // map_reduce_1 contents_of(self)
  var_map_reduce_1, 1, LOCAL(1), TAIL_CALL,
  POS(417, 7),
  POS(418, 7),
  POS(419, 20),
  POS(419, 7)
};

static TAB_NUM t_func_std__hash_set[] = {
  1, // locals
  -1, // parameters
  REST_PARAMETER, LOCAL(1), // 422_17_keys
  // $result empty_hash_set
  LET, 1, var_empty_hash_set, 1, var_423_1_result,
  // for_each keys
  var_for_each, 3, LOCAL(1), lambda_40, lambda_41, TAIL_CALL,
  POS(423, 3),
  POS(424, 3)
};

static TAB_NUM t_lambda_40[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 425_3_key
  // result(key) true
  var_423_1_result, 2, LOCAL(1), var_true, 1, var_423_1_result,
  // next
  var_next, 0, TAIL_CALL,
  POS(426, 8),
  POS(427, 7)
};

static TAB_NUM t_lambda_41[] = {
  0, // locals
  0, // parameters
  //  result
  LET, 1, var_423_1_result, TAIL_CALL,
  POS(428, 7)
};

static int tuple_87_0_arguments[] = {
  -var_undefined, -var_undefined
};

static int list_93_0_arguments[] = {
  -var_empty_hash_set_entry, -var_empty_hash_set_entry, -var_empty_hash_set_entry, -var_empty_hash_set_entry, -var_empty_hash_set_entry, -var_empty_hash_set_entry, -var_empty_hash_set_entry, -var_empty_hash_set_entry
};

static FUNKY_CONSTANT constants_table[] = {
  {FLT_POSITIVE_INT64, 0, {.value = 0}},
  {FLT_TUPLE, 2, {.arguments = tuple_87_0_arguments}},
  {FLT_LIST, 8, {.arguments = list_93_0_arguments}},
  {FLT_UNIQUE, 0, {.str_8 = "NONE"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__hash_set}},
  {FLT_POSITIVE_INT64, 0, {.value = 0xc0000000}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_value}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_3}},
  {FLT_POSITIVE_INT64, 0, {.value = 1}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_4}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_5}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_6}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_7}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_empty_hash_set_entry___retrieve}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_hash_set_leaf___retrieve}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_8}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_9}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_empty_collision_list_entry___retrieve}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_collision_list_entry___retrieve}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_10}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_11}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_hash_set_node___retrieve}},
  {FLT_POSITIVE_INT64, 0, {.value = 7}},
  {FLT_POSITIVE_INT64, 0, {.value = 3}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_empty_hash_set_entry___insert}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_12}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_13}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_hash_set_leaf___insert}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_14}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_15}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_empty_collision_list_entry___insert}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_collision_list_entry___insert}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_16}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_17}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_18}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_19}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_hash_set_node___insert}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_empty_hash_set_entry___delete}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_hash_set_leaf___delete}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_20}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_21}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_empty_collision_list_entry___delete}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_collision_list_entry___delete}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_22}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_23}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_hash_set_node___delete}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_24}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_25}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_26}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_27}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_empty_hash_set_entry___for_each_1}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_collision_list_entry___for_each_1}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_28}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_next}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_basic_loopsself_is_an_empty_entry}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_29}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_hash_set_leaf___for_each_1}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_hash_set_node___for_each_1}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_30}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2_next}},
  {FLT_POSITIVE_INT64, 0, {.value = 8}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_31}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_32}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__hash_set___for_each}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_33}},
  {FLT_UNIQUE, 0, {.str_8 = "UNIT"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_my_reduce}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_34}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_35}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_36}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_37}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_empty_hash_set_entry___map_reduce_1}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_hash_set_leaf___map_reduce_1}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_empty_collision_list_entry___map_reduce_1}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_collision_list_entry___map_reduce_1}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_hash_set_node___map_reduce_1}},
  {FLT_POSITIVE_INT64, 0, {.value = 2}},
  {FLT_POSITIVE_INT64, 0, {.value = 4}},
  {FLT_POSITIVE_INT64, 0, {.value = 5}},
  {FLT_POSITIVE_INT64, 0, {.value = 6}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__hash_set___map_reduce}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_38}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_39}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__hash_set}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_40}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_41}},
  {FLT_STRING_8, 8, {.str_8 = "hash_set"}}
};

static ATTRIBUTE_DEFINITION std_types__object__attributes[] = {
  {-var_is_a_hash_set, -var_false},
  {-var_is_an_empty_entry, -var_false}
};

static ATTRIBUTE_DEFINITION std_types__hash_set__attributes[] = {
  {-var_is_a_hash_set, -var_true},
  {-var_contents_of, -var_empty_hash_set_entry},
  {-var_length_of, -num_0},
  {TYPE_FUNCTION, -func_std_types__hash_set},
  {var_for_each, -func_std_types__hash_set___for_each},
  {var_map_reduce, -func_std_types__hash_set___map_reduce},
  {-var_serialization_tag_of, -str_hash_set},
  {-var_empty_collection_of, -var_empty_hash_set}
};

static ATTRIBUTE_DEFINITION empty_hash_set_entry__attributes[] = {
  {-var_is_an_empty_entry, -var_true},
  {var_retrieve, -func_empty_hash_set_entry___retrieve},
  {var_insert, -func_empty_hash_set_entry___insert},
  {var_delete, -func_empty_hash_set_entry___delete},
  {var_for_each_1, -func_empty_hash_set_entry___for_each_1},
  {var_map_reduce_1, -func_empty_hash_set_entry___map_reduce_1}
};

static ATTRIBUTE_DEFINITION empty_collision_list_entry__attributes[] = {
  {-var_is_an_empty_entry, -var_true},
  {var_retrieve, -func_empty_collision_list_entry___retrieve},
  {var_insert, -func_empty_collision_list_entry___insert},
  {var_delete, -func_empty_collision_list_entry___delete},
  {var_map_reduce_1, -func_empty_collision_list_entry___map_reduce_1}
};

static ATTRIBUTE_DEFINITION hash_set_leaf__attributes[] = {
  {var_retrieve, -func_hash_set_leaf___retrieve},
  {var_insert, -func_hash_set_leaf___insert},
  {var_delete, -func_hash_set_leaf___delete},
  {var_for_each_1, -func_hash_set_leaf___for_each_1},
  {var_map_reduce_1, -func_hash_set_leaf___map_reduce_1}
};

static ATTRIBUTE_DEFINITION collision_list_entry__attributes[] = {
  {var_retrieve, -func_collision_list_entry___retrieve},
  {var_insert, -func_collision_list_entry___insert},
  {var_delete, -func_collision_list_entry___delete},
  {var_for_each_1, -func_collision_list_entry___for_each_1},
  {var_map_reduce_1, -func_collision_list_entry___map_reduce_1}
};

static ATTRIBUTE_DEFINITION hash_set_node__attributes[] = {
  {var_retrieve, -func_hash_set_node___retrieve},
  {var_insert, -func_hash_set_node___insert},
  {var_delete, -func_hash_set_node___delete},
  {var_for_each_1, -func_hash_set_node___for_each_1},
  {var_map_reduce_1, -func_hash_set_node___map_reduce_1}
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
    {.position = POS(42, 1)}
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
    "is_a_hash_set\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN, 0, 2,
    "object\000std_types", std_types__object__attributes,
    {.position = POS(51, 1)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "is_a_hash_set\000", NULL,
    {.position = POS(51, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "false\000", NULL,
    {.position = POS(51, 34)}
  },
  {
    FOT_DERIVED, 0, 8,
    "hash_set\000std_types", std_types__hash_set__attributes,
    {"set\000std_types"}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "true\000", NULL,
    {.position = POS(52, 36)}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "is_an_empty_entry\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_DERIVED, 0, 6,
    "empty_hash_set_entry\000", empty_hash_set_entry__attributes,
    {"object\000std_types"}
  },
  {
    FOT_DERIVED, 0, 5,
    "empty_collision_list_entry\000", empty_collision_list_entry__attributes,
    {"object\000std_types"}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "set\000std_types", NULL,
    {.position = POS(59, 22)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "length_of\000", NULL,
    {.position = POS(75, 22)}
  },
  {
    FOT_DERIVED, 0, 0,
    "empty_hash_set\000std", NULL,
    {"hash_set\000std_types"}
  },
  {
    FOT_INITIALIZED, 0, 5,
    "hash_set_leaf\000", hash_set_leaf__attributes,
    {.const_idx = -tuple_87_0}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "undefined\000", NULL,
    {.position = POS(87, 22)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "tuple\000", NULL,
    {.position = POS(87, 16)}
  },
  {
    FOT_INITIALIZED, 0, 5,
    "collision_list_entry\000", collision_list_entry__attributes,
    {.const_idx = -tuple_87_0}
  },
  {
    FOT_INITIALIZED, 0, 5,
    "hash_set_node\000", hash_set_node__attributes,
    {.const_idx = -list_93_0}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "list\000", NULL,
    {.position = POS(94, 3)}
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
    FOT_UNKNOWN, 0, 0,
    "hash\000", NULL,
    {.position = POS(113, 15)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "113_1_hash_index\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "bit_or\000std", NULL,
    {.position = POS(113, 15)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "114_1_contents\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "equal\000std", NULL,
    {.position = POS(116, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000std", NULL,
    {.position = POS(127, 28)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if\000", NULL,
    {.position = POS(122, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "minus\000std", NULL,
    {.position = POS(136, 28)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "153_45_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "154_14_my_link\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "bit_and\000std", NULL,
    {.position = POS(161, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "shift_right\000std", NULL,
    {.position = POS(162, 22)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "167_37_hash_index\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "167_48_key\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "typed_tuple\000", NULL,
    {.position = POS(170, 8)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "173_24_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "173_29_hash_index\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "173_40_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "174_6_my_hash_index\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "174_21_my_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "185_31_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "185_36_dummy\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "185_42_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "186_6_my_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "186_14_my_link\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "191_26_new_link\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "216_24_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "225_43_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "226_6_my_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "226_14_my_link\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "235_24_self\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "all_of\000", NULL,
    {.position = POS(242, 9)}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "for_each_1\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "next\000", NULL,
    {.position = POS(253, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "break\000", NULL,
    {.position = POS(259, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "self\000basic_loops", NULL,
    {.position = POS(260, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "break_function\000basic_types", NULL,
    {.position = POS(264, 14)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "saved_context_of\000basic_loops", NULL,
    {.position = POS(265, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "new\000", NULL,
    {.position = POS(264, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "body\000basic_loops", NULL,
    {.position = POS(282, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "from\000basic_loops", NULL,
    {.position = POS(295, 7)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "310_1_idx\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "less\000std", NULL,
    {.position = POS(312, 14)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not\000std", NULL,
    {.position = POS(312, 14)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "for_each\000", NULL,
    {.position = POS(323, 22)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "327_0_finally\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "finally\000basic_loops", NULL,
    {.position = POS(334, 7)}
  },
  {
    FOT_DERIVED, 0, 0,
    "reduction_function\000", NULL,
    {"undefined\000"}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "358_13_left\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "358_18_right\000", NULL
  },
  {
    FOT_DERIVED, 0, 0,
    "mapping_function\000", NULL,
    {"undefined\000"}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "map_reduce_1\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "map_reduce\000", NULL,
    {.position = POS(398, 22)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "408_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "409_0_map_function\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "410_0_reduce_function\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "append\000", NULL,
    {.position = POS(410, 23)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "411_0_unit\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "hash_set\000std", NULL,
    {.const_idx = -func_std__hash_set}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "423_1_result\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_hash_set\000", NULL,
    {.position = POS(423, 11)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "serialization_tag_of\000", NULL,
    {.position = POS(430, 22)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "empty_collection_of\000", NULL,
    {.position = POS(431, 22)}
  }
};

static FUNKY_NAMESPACE used_namespaces[] = {
  {"std", 1, 0}
};

FUNKY_MODULE module__basic__types__collections__sets__hash_set = {
  "_basic__types__collections__sets__hash_set", // module name
  "basic/types/collections/sets/hash_set.fky", // module filename
  .major_version = 0,
  .minor_version = 0,
  .feature_flags = FEAT_POSITIONS,
  .marker = 0,
  0, // number of required modules
  0, // number of defined namespaces
  1, // number of used namespaces
  89, // number of constants
  89, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  constants_table,
  variables_table,
};
