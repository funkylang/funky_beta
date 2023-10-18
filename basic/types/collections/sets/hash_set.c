#include <stddef.h>
#include <stdint.h>

#include "runtime/common.h"
#include "runtime/builtins.h"
#include "runtime/fko.h"
#include "runtime/memory.h"

enum {
  num_0 = -1,
  tuple_85_0 = -2,
  list_91_0 = -3,
  uni_NONE = -4,
  func_std_types__hash_set = -5,
  num_3221225472 = -6,
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
  lambda_break = -55,
  lambda_next = -56,
  lambda_basic_loopsself_is_an_empty_entry = -57,
  lambda_28 = -58,
  func_hash_set_leaf___for_each_1 = -59,
  func_hash_set_node___for_each_1 = -60,
  lambda_2_break = -61,
  lambda_2_next = -62,
  num_8 = -63,
  lambda_29 = -64,
  lambda_30 = -65,
  func_std_types__hash_set___for_each = -66,
  lambda_3_break = -67,
  uni_UNIT = -68,
  func_my_reduce = -69,
  lambda_31 = -70,
  lambda_32 = -71,
  lambda_33 = -72,
  lambda_34 = -73,
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
  lambda_35 = -84,
  lambda_36 = -85,
  func_std__hash_set = -86,
  lambda_37 = -87,
  lambda_38 = -88,
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
  var_107_0_myself, // dynamic
  var_108_0_key, // dynamic
  var_109_0_value, // dynamic
  var_hash, // extern
  var_111_1_hash_index, // dynamic
  var_std__bit_or, // extern
  var_112_1_contents, // dynamic
  var_std__equal, // extern
  var_std__plus, // extern
  var_if, // extern
  var_std__minus, // extern
  var_151_45_key, // dynamic
  var_152_14_my_link, // dynamic
  var_std__bit_and, // extern
  var_std__shift_right, // extern
  var_165_37_hash_index, // dynamic
  var_165_48_key, // dynamic
  var_new, // extern
  var_171_24_self, // dynamic
  var_171_29_hash_index, // dynamic
  var_171_40_key, // dynamic
  var_172_6_my_hash_index, // dynamic
  var_172_21_my_key, // dynamic
  var_183_31_self, // dynamic
  var_183_36_dummy, // dynamic
  var_183_42_key, // dynamic
  var_184_6_my_key, // dynamic
  var_184_14_my_link, // dynamic
  var_189_26_new_link, // dynamic
  var_214_24_self, // dynamic
  var_223_43_key, // dynamic
  var_224_6_my_key, // dynamic
  var_224_14_my_link, // dynamic
  var_233_24_self, // dynamic
  var_all_of, // extern
  var_for_each_1, // attribute
  var_next, // extern
  var_break, // extern
  var_basic_loops__self, // extern
  var_basic_loops__saved_context_of, // extern polymorphic
  var_basic_loops__body, // extern
  var_basic_loops__from, // extern
  var_308_1_idx, // dynamic
  var_std__less, // extern
  var_std__not, // extern
  var_for_each, // extern polymorphic
  var_325_0_finally, // dynamic
  var_basic_loops__finally, // extern
  var_reduction_function, // derived
  var_356_13_left, // dynamic
  var_356_18_right, // dynamic
  var_mapping_function, // derived
  var_map_reduce_1, // attribute
  var_map_reduce, // extern polymorphic
  var_406_0_self, // dynamic
  var_407_0_map_function, // dynamic
  var_408_0_reduce_function, // dynamic
  var_append, // extern
  var_409_0_unit, // dynamic
  var_std__hash_set, // initialized
  var_421_1_result, // dynamic
  var_empty_hash_set, // extern
  var_serialization_tag_of, // extern polymorphic
  var_empty_collection_of, // extern polymorphic
  var__END
};


static TAB_NUM t_func_std_types__hash_set[] = {
  1, // locals
  -3, // parameters
  MYSELF_PARAMETER, var_107_0_myself,
  MANDATORY_PARAMETER, var_108_0_key,
  uni_NONE, var_109_0_value,
  // hash(key) | 0xc000'0000 # add sentinel hash index (3)
  var_hash, 1, var_108_0_key, 1, LOCAL(1),
  // $hash_index hash(key) | 0xc000'0000 # add sentinel hash index (3)
  var_std__bit_or, 2, LOCAL(1), num_3221225472, 1, var_111_1_hash_index,
  // $contents contents_of(myself)
  var_contents_of, 1, var_107_0_myself, 1, var_112_1_contents,
  // NONE == value
  var_std__equal, 2, uni_NONE, var_109_0_value, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1, lambda_2, TAIL_CALL,
  POS(111, 15),
  POS(111, 3),
  POS(112, 3),
  POS(114, 5),
  POS(113, 3)
};

static TAB_NUM t_lambda_1[] = {
  1, // locals
  0, // parameters
  // retrieve(contents hash_index key)
  var_retrieve, 3, var_112_1_contents, var_111_1_hash_index, var_108_0_key, 1, LOCAL(1),
  //  retrieve(contents hash_index key)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(115, 8),
  POS(115, 7)
};

static TAB_NUM t_lambda_2[] = {
  0, // locals
  0, // parameters
  // if
  var_if, 3, var_109_0_value, lambda_value, lambda_5, TAIL_CALL,
  POS(117, 7)
};

static TAB_NUM t_lambda_value[] = {
  1, // locals
  0, // parameters
  // insert &contents $success hash_index key
  var_insert, 3, var_112_1_contents, var_111_1_hash_index, var_108_0_key, 2, var_112_1_contents, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_3, lambda_4, TAIL_CALL,
  POS(119, 11),
  POS(120, 11)
};

static TAB_NUM t_lambda_3[] = {
  3, // locals
  0, // parameters
  // length_of(myself)+1
  var_length_of, 1, var_107_0_myself, 1, LOCAL(1),
  // length_of(myself)+1
  var_std__plus, 2, LOCAL(1), num_1, 1, LOCAL(2),
  // myself
  LET, -2, var_107_0_myself, var_contents_of, var_112_1_contents, var_length_of, LOCAL(2), LOCAL(3),
  // 
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(125, 28),
  POS(125, 28),
  POS(123, 15),
  POS(122, 15)
};

static TAB_NUM t_lambda_4[] = {
  1, // locals
  0, // parameters
  // .contents_of contents)
  LET, -1, var_107_0_myself, var_contents_of, var_112_1_contents, LOCAL(1),
  //  myself(.contents_of contents)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(126, 23),
  POS(126, 15)
};

static TAB_NUM t_lambda_5[] = {
  1, // locals
  0, // parameters
  // delete &contents $success hash_index key
  var_delete, 3, var_112_1_contents, var_111_1_hash_index, var_108_0_key, 2, var_112_1_contents, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_6, lambda_7, TAIL_CALL,
  POS(128, 11),
  POS(129, 11)
};

static TAB_NUM t_lambda_6[] = {
  3, // locals
  0, // parameters
  // length_of(myself)-1
  var_length_of, 1, var_107_0_myself, 1, LOCAL(1),
  // length_of(myself)-1
  var_std__minus, 2, LOCAL(1), num_1, 1, LOCAL(2),
  // myself
  LET, -2, var_107_0_myself, var_contents_of, var_112_1_contents, var_length_of, LOCAL(2), LOCAL(3),
  // 
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(134, 28),
  POS(134, 28),
  POS(132, 15),
  POS(131, 15)
};

static TAB_NUM t_lambda_7[] = {
  0, // locals
  0, // parameters
  //  myself
  LET, 1, var_107_0_myself, TAIL_CALL,
  POS(135, 15)
};

static TAB_NUM t_func_empty_hash_set_entry___retrieve[] = {
  1, // locals
  3, // parameters
  LOCAL(1),
  LOCAL(1),
  LOCAL(1),
  // -> false
  LET, 1, var_false, TAIL_CALL,
  POS(140, 58)
};

static TAB_NUM t_func_hash_set_leaf___retrieve[] = {
  4, // locals
  3, // parameters
  LOCAL(2), // 142_26_self
  LOCAL(1),
  LOCAL(3), // 142_43_key
  // self $_my_hash_index $my_key
  LOCAL(2), 0, 2, LOCAL(1), LOCAL(4),
  // key == my_key
  var_std__equal, 2, LOCAL(3), LOCAL(4), 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_8, lambda_9, TAIL_CALL,
  POS(143, 3),
  POS(145, 5),
  POS(144, 3)
};

static TAB_NUM t_lambda_8[] = {
  0, // locals
  0, // parameters
  //  true
  LET, 1, var_true, TAIL_CALL,
  POS(146, 7)
};

static TAB_NUM t_lambda_9[] = {
  0, // locals
  0, // parameters
  //  false
  LET, 1, var_false, TAIL_CALL,
  POS(147, 7)
};

static TAB_NUM t_func_empty_collision_list_entry___retrieve[] = {
  1, // locals
  3, // parameters
  LOCAL(1),
  LOCAL(1),
  LOCAL(1),
  // -> false
  LET, 1, var_false, TAIL_CALL,
  POS(149, 59)
};

static TAB_NUM t_func_collision_list_entry___retrieve[] = {
  3, // locals
  3, // parameters
  LOCAL(2), // 151_33_self
  LOCAL(1),
  var_151_45_key,
  // self $my_key $my_link
  LOCAL(2), 0, 2, LOCAL(3), var_152_14_my_link,
  // key == my_key
  var_std__equal, 2, var_151_45_key, LOCAL(3), 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_10, lambda_11, TAIL_CALL,
  POS(152, 3),
  POS(154, 5),
  POS(153, 3)
};

static TAB_NUM t_lambda_10[] = {
  0, // locals
  0, // parameters
  //  true
  LET, 1, var_true, TAIL_CALL,
  POS(155, 7)
};

static TAB_NUM t_lambda_11[] = {
  0, // locals
  0, // parameters
  // retrieve my_link undefined key
  var_retrieve, 3, var_152_14_my_link, var_undefined, var_151_45_key, TAIL_CALL,
  POS(156, 7)
};

static TAB_NUM t_func_hash_set_node___retrieve[] = {
  6, // locals
  3, // parameters
  LOCAL(3), // 158_26_self
  LOCAL(4), // 158_31_hash_index
  LOCAL(5), // 158_42_key
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
  POS(159, 9),
  POS(159, 3),
  POS(160, 12),
  POS(160, 22),
  POS(160, 3)
};

static TAB_NUM t_func_empty_hash_set_entry___insert[] = {
  1, // locals
  3, // parameters
  LOCAL(1),
  var_165_37_hash_index,
  var_165_48_key,
  // hash_index == 3
  var_std__equal, 2, var_165_37_hash_index, num_3, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_12, lambda_13, TAIL_CALL,
  POS(167, 5),
  POS(166, 3)
};

static TAB_NUM t_lambda_12[] = {
  1, // locals
  0, // parameters
  // new(collision_list_entry key empty_collision_list_entry) true
  var_new, 3, var_collision_list_entry, var_165_48_key, var_empty_collision_list_entry, 1, LOCAL(1),
  //  new(collision_list_entry key empty_collision_list_entry) true
  LET, 2, LOCAL(1), var_true, TAIL_CALL,
  POS(168, 8),
  POS(168, 7)
};

static TAB_NUM t_lambda_13[] = {
  1, // locals
  0, // parameters
  // new(hash_set_leaf hash_index key) true
  var_new, 3, var_hash_set_leaf, var_165_37_hash_index, var_165_48_key, 1, LOCAL(1),
  //  new(hash_set_leaf hash_index key) true
  LET, 2, LOCAL(1), var_true, TAIL_CALL,
  POS(169, 8),
  POS(169, 7)
};

static TAB_NUM t_func_hash_set_leaf___insert[] = {
  1, // locals
  3, // parameters
  var_171_24_self,
  var_171_29_hash_index,
  var_171_40_key,
  // self $my_hash_index $my_key
  var_171_24_self, 0, 2, var_172_6_my_hash_index, var_172_21_my_key,
  // key == my_key
  var_std__equal, 2, var_171_40_key, var_172_21_my_key, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_14, lambda_15, TAIL_CALL,
  POS(172, 3),
  POS(174, 5),
  POS(173, 3)
};

static TAB_NUM t_lambda_14[] = {
  0, // locals
  0, // parameters
  //  self false
  LET, 2, var_171_24_self, var_false, TAIL_CALL,
  POS(175, 7)
};

static TAB_NUM t_lambda_15[] = {
  2, // locals
  0, // parameters
  // insert hash_set_node $new_node $_did_insert my_hash_index my_key
  var_insert, 3, var_hash_set_node, var_172_6_my_hash_index, var_172_21_my_key, 2, LOCAL(2), LOCAL(1),
  // insert new_node hash_index key
  var_insert, 3, LOCAL(2), var_171_29_hash_index, var_171_40_key, TAIL_CALL,
  POS(177, 7),
  POS(178, 7)
};

static TAB_NUM t_func_empty_collision_list_entry___insert[] = {
  3, // locals
  3, // parameters
  LOCAL(2), // 180_37_self
  LOCAL(1),
  LOCAL(3), // 180_49_key
  // new(collision_list_entry key self) true
  var_new, 3, var_collision_list_entry, LOCAL(3), LOCAL(2), 1, LOCAL(1),
  // -> new(collision_list_entry key self) true
  LET, 2, LOCAL(1), var_true, TAIL_CALL,
  POS(181, 6),
  POS(181, 3)
};

static TAB_NUM t_func_collision_list_entry___insert[] = {
  1, // locals
  3, // parameters
  var_183_31_self,
  var_183_36_dummy,
  var_183_42_key,
  // self $my_key $my_link
  var_183_31_self, 0, 2, var_184_6_my_key, var_184_14_my_link,
  // key == my_key
  var_std__equal, 2, var_183_42_key, var_184_6_my_key, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_16, lambda_17, TAIL_CALL,
  POS(184, 3),
  POS(186, 5),
  POS(185, 3)
};

static TAB_NUM t_lambda_16[] = {
  0, // locals
  0, // parameters
  //  self false
  LET, 2, var_183_31_self, var_false, TAIL_CALL,
  POS(187, 7)
};

static TAB_NUM t_lambda_17[] = {
  1, // locals
  0, // parameters
  // insert my_link dummy key $new_link $did_insert
  var_insert, 3, var_184_14_my_link, var_183_36_dummy, var_183_42_key, 2, var_189_26_new_link, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_18, lambda_19, TAIL_CALL,
  POS(189, 7),
  POS(190, 7)
};

static TAB_NUM t_lambda_18[] = {
  1, // locals
  0, // parameters
  // new(collision_list_entry my_key new_link) true
  var_new, 3, var_collision_list_entry, var_184_6_my_key, var_189_26_new_link, 1, LOCAL(1),
  //  new(collision_list_entry my_key new_link) true
  LET, 2, LOCAL(1), var_true, TAIL_CALL,
  POS(192, 12),
  POS(192, 11)
};

static TAB_NUM t_lambda_19[] = {
  0, // locals
  0, // parameters
  //  self false
  LET, 2, var_183_31_self, var_false, TAIL_CALL,
  POS(193, 11)
};

static TAB_NUM t_func_hash_set_node___insert[] = {
  7, // locals
  3, // parameters
  LOCAL(3), // 195_24_self
  LOCAL(4), // 195_29_hash_index
  LOCAL(5), // 195_40_key
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
  POS(196, 9),
  POS(196, 3),
  POS(197, 11),
  POS(197, 33),
  POS(197, 3),
  POS(197, 11),
  POS(198, 3)
};

static TAB_NUM t_func_empty_hash_set_entry___delete[] = {
  2, // locals
  3, // parameters
  LOCAL(2), // 212_31_self
  LOCAL(1),
  LOCAL(1),
  // -> self false
  LET, 2, LOCAL(2), var_false, TAIL_CALL,
  POS(212, 55)
};

static TAB_NUM t_func_hash_set_leaf___delete[] = {
  3, // locals
  3, // parameters
  var_214_24_self,
  LOCAL(1),
  LOCAL(2), // 214_41_key
  // self $_my_hash_index $my_key
  var_214_24_self, 0, 2, LOCAL(1), LOCAL(3),
  // key == my_key
  var_std__equal, 2, LOCAL(2), LOCAL(3), 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_20, lambda_21, TAIL_CALL,
  POS(215, 3),
  POS(217, 5),
  POS(216, 3)
};

static TAB_NUM t_lambda_20[] = {
  0, // locals
  0, // parameters
  //  empty_hash_set_entry true
  LET, 2, var_empty_hash_set_entry, var_true, TAIL_CALL,
  POS(218, 7)
};

static TAB_NUM t_lambda_21[] = {
  0, // locals
  0, // parameters
  //  self false
  LET, 2, var_214_24_self, var_false, TAIL_CALL,
  POS(219, 7)
};

static TAB_NUM t_func_empty_collision_list_entry___delete[] = {
  2, // locals
  3, // parameters
  LOCAL(2), // 221_37_self
  LOCAL(1),
  LOCAL(1),
  // -> self false
  LET, 2, LOCAL(2), var_false, TAIL_CALL,
  POS(221, 56)
};

static TAB_NUM t_func_collision_list_entry___delete[] = {
  2, // locals
  3, // parameters
  LOCAL(2), // 223_31_self
  LOCAL(1),
  var_223_43_key,
  // self $my_key $my_link
  LOCAL(2), 0, 2, var_224_6_my_key, var_224_14_my_link,
  // key == my_key
  var_std__equal, 2, var_223_43_key, var_224_6_my_key, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_22, lambda_23, TAIL_CALL,
  POS(224, 3),
  POS(226, 5),
  POS(225, 3)
};

static TAB_NUM t_lambda_22[] = {
  0, // locals
  0, // parameters
  // -> my_link true
  LET, 2, var_224_14_my_link, var_true, TAIL_CALL,
  POS(228, 7)
};

static TAB_NUM t_lambda_23[] = {
  2, // locals
  0, // parameters
  // delete &my_link undefined key $did_delete
  var_delete, 3, var_224_14_my_link, var_undefined, var_223_43_key, 2, var_224_14_my_link, LOCAL(2),
  // new(collision_list_entry my_key my_link) did_delete
  var_new, 3, var_collision_list_entry, var_224_6_my_key, var_224_14_my_link, 1, LOCAL(1),
  // -> new(collision_list_entry my_key my_link) did_delete
  LET, 2, LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(230, 7),
  POS(231, 10),
  POS(231, 7)
};

static TAB_NUM t_func_hash_set_node___delete[] = {
  6, // locals
  3, // parameters
  var_233_24_self,
  LOCAL(3), // 233_29_hash_index
  LOCAL(4), // 233_40_key
  // hash_index & 7)+1
  var_std__bit_and, 2, LOCAL(3), num_7, 1, LOCAL(1),
  // $idx (hash_index & 7)+1
  var_std__plus, 2, LOCAL(1), num_1, 1, LOCAL(5),
  // self(idx) $success hash_index >> 3 key
  var_233_24_self, 1, LOCAL(5), 1, LOCAL(1),
  // hash_index >> 3 key
  var_std__shift_right, 2, LOCAL(3), num_3, 1, LOCAL(2),
  // delete &self(idx) $success hash_index >> 3 key
  var_delete, 3, LOCAL(1), LOCAL(2), LOCAL(4), 2, LOCAL(1), LOCAL(6),
  // self(idx) $success hash_index >> 3 key
  var_233_24_self, 2, LOCAL(5), LOCAL(1), 1, var_233_24_self,
  // if
  var_if, 3, LOCAL(6), lambda_24, lambda_27, TAIL_CALL,
  POS(234, 9),
  POS(234, 3),
  POS(235, 11),
  POS(235, 30),
  POS(235, 3),
  POS(235, 11),
  POS(236, 3)
};

static TAB_NUM t_lambda_24[] = {
  1, // locals
  0, // parameters
  // all_of(self is_an_empty_entry)
  var_all_of, 2, var_233_24_self, var_is_an_empty_entry, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_25, lambda_26, TAIL_CALL,
  POS(240, 9),
  POS(239, 7)
};

static TAB_NUM t_lambda_25[] = {
  0, // locals
  0, // parameters
  //  empty_hash_set_entry true
  LET, 2, var_empty_hash_set_entry, var_true, TAIL_CALL,
  POS(241, 11)
};

static TAB_NUM t_lambda_26[] = {
  0, // locals
  0, // parameters
  //  self true
  LET, 2, var_233_24_self, var_true, TAIL_CALL,
  POS(242, 11)
};

static TAB_NUM t_lambda_27[] = {
  0, // locals
  0, // parameters
  //  self false
  LET, 2, var_233_24_self, var_false, TAIL_CALL,
  POS(243, 7)
};

static TAB_NUM t_func_empty_hash_set_entry___for_each_1[] = {
  1, // locals
  1, // parameters
  LOCAL(1),
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(251, 3)
};

static TAB_NUM t_func_collision_list_entry___for_each_1[] = {
  2, // locals
  1, // parameters
  LOCAL(1), // 253_35_self
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
  // next
  var_next, 0, TAIL_CALL,
  POS(254, 3),
  POS(260, 3),
  POS(262, 3),
  POS(268, 4),
  POS(270, 3),
  POS(282, 3)
};

static TAB_NUM t_lambda_break[] = {
  2, // locals
  -1, // parameters
  MYSELF_PARAMETER, LOCAL(2), // 262_9_myself
  // basic_loops::saved_context_of(myself)
  var_basic_loops__saved_context_of, 1, LOCAL(2), 1, LOCAL(1),
  // basic_loops::saved_context_of(myself)
  LOCAL(1), 0, 3, var_next, var_break, var_basic_loops__self,
  // break!
  var_break, 0, IO_TAIL_CALL,
  POS(263, 5),
  POS(263, 5),
  POS(266, 5)
};

static TAB_NUM t_lambda_next[] = {
  1, // locals
  0, // parameters
  // is_an_empty_entry:
  var_is_an_empty_entry, 1, var_basic_loops__self, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_basic_loopsself_is_an_empty_entry, lambda_28, IO_TAIL_CALL,
  POS(272, 25),
  POS(271, 5)
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
  POS(273, 9),
  POS(273, 9),
  POS(276, 9)
};

static TAB_NUM t_lambda_28[] = {
  2, // locals
  0, // parameters
  // basic_loops::self $key $link
  var_basic_loops__self, 0, 2, LOCAL(1), LOCAL(2),
  // !basic_loops::self link
  LET, 1, LOCAL(2), 1, var_basic_loops__self,
  // basic_loops::body! key
  var_basic_loops__body, 1, LOCAL(1), IO_TAIL_CALL,
  POS(278, 9),
  POS(279, 9),
  POS(280, 9)
};

static TAB_NUM t_func_hash_set_leaf___for_each_1[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 284_28_self
  // self $_hash $key
  LOCAL(2), 0, 2, LOCAL(1), LOCAL(3),
  // basic_loops::body! key
  var_basic_loops__body, 1, LOCAL(3), IO_TAIL_CALL,
  POS(285, 3),
  POS(286, 3)
};

static TAB_NUM t_func_hash_set_node___for_each_1[] = {
  2, // locals
  1, // parameters
  LOCAL(1), // 288_28_self
  // $saved_context
  var_tuple, 4, var_next, var_break, var_basic_loops__from, var_basic_loops__self, 1, LOCAL(2),
  // !basic_loops::from 1
  LET, 1, num_1, 1, var_basic_loops__from,
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
  POS(289, 3),
  POS(296, 3),
  POS(297, 3),
  POS(299, 3),
  POS(305, 4),
  POS(307, 3),
  POS(319, 3)
};

static TAB_NUM t_lambda_2_break[] = {
  2, // locals
  -1, // parameters
  MYSELF_PARAMETER, LOCAL(2), // 299_9_myself
  // basic_loops::saved_context_of(myself)
  var_basic_loops__saved_context_of, 1, LOCAL(2), 1, LOCAL(1),
  // basic_loops::saved_context_of(myself)
  LOCAL(1), 0, 4, var_next, var_break, var_basic_loops__from, var_basic_loops__self,
  // break!
  var_break, 0, IO_TAIL_CALL,
  POS(300, 5),
  POS(300, 5),
  POS(303, 5)
};

static TAB_NUM t_lambda_2_next[] = {
  2, // locals
  0, // parameters
  // $idx basic_loops::from
  LET, 1, var_basic_loops__from, 1, var_308_1_idx,
  // 8:
  var_std__less, 2, num_8, var_308_1_idx, 1, LOCAL(1),
  // 8:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_29, lambda_30, IO_TAIL_CALL,
  POS(308, 5),
  POS(310, 14),
  POS(310, 14),
  POS(309, 5)
};

static TAB_NUM t_lambda_29[] = {
  1, // locals
  0, // parameters
  // !basic_loops::from idx+1
  var_std__plus, 2, var_308_1_idx, num_1, 1, var_basic_loops__from,
  // basic_loops::self(idx)
  var_basic_loops__self, 1, var_308_1_idx, 1, LOCAL(1),
  // for_each_1! basic_loops::self(idx)
  var_for_each_1, 1, LOCAL(1), IO_TAIL_CALL,
  POS(311, 9),
  POS(312, 21),
  POS(312, 9)
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
  POS(314, 9),
  POS(314, 9),
  POS(317, 9)
};

static TAB_NUM t_func_std_types__hash_set___for_each[] = {
  4, // locals
  -3, // parameters
  MANDATORY_PARAMETER, LOCAL(2), // 323_0_self
  MANDATORY_PARAMETER, LOCAL(3), // 324_0_body
  var_next, var_325_0_finally,
  // $saved_context
  var_tuple, 4, var_next, var_break, var_basic_loops__body, var_basic_loops__finally, 1, LOCAL(4),
  // !basic_loops::body body
  LET, 1, LOCAL(3), 1, var_basic_loops__body,
  // !basic_loops::finally finally
  LET, 1, var_325_0_finally, 1, var_basic_loops__finally,
  // !break: (myself^)
  LET, 1, lambda_3_break, 1, var_break,
  // break.basic_loops::saved_context_of saved_context
  LET, -1, var_break, var_basic_loops__saved_context_of, LOCAL(4), var_break,
  // !next break
  LET, 1, var_break, 1, var_next,
  // contents_of(self)
  var_contents_of, 1, LOCAL(2), 1, LOCAL(1),
  // for_each_1! contents_of(self)
  var_for_each_1, 1, LOCAL(1), IO_TAIL_CALL,
  POS(327, 3),
  POS(334, 3),
  POS(335, 3),
  POS(337, 3),
  POS(344, 4),
  POS(345, 3),
  POS(347, 15),
  POS(347, 3)
};

static TAB_NUM t_lambda_3_break[] = {
  2, // locals
  -1, // parameters
  MYSELF_PARAMETER, LOCAL(2), // 337_9_myself
  // !finally basic_loops::finally
  LET, 1, var_basic_loops__finally, 1, var_325_0_finally,
  // basic_loops::saved_context_of(myself)
  var_basic_loops__saved_context_of, 1, LOCAL(2), 1, LOCAL(1),
  // basic_loops::saved_context_of(myself)
  LOCAL(1), 0, 4, var_next, var_break, var_basic_loops__body, var_basic_loops__finally,
  // finally!
  var_325_0_finally, 0, IO_TAIL_CALL,
  POS(338, 5),
  POS(339, 5),
  POS(339, 5),
  POS(342, 5)
};

static TAB_NUM t_func_my_reduce[] = {
  1, // locals
  2, // parameters
  var_356_13_left,
  var_356_18_right,
  // left == UNIT
  var_std__equal, 2, var_356_13_left, uni_UNIT, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_31, lambda_32, TAIL_CALL,
  POS(358, 5),
  POS(357, 3)
};

static TAB_NUM t_lambda_31[] = {
  0, // locals
  0, // parameters
  //  right
  LET, 1, var_356_18_right, TAIL_CALL,
  POS(359, 7)
};

static TAB_NUM t_lambda_32[] = {
  1, // locals
  0, // parameters
  // right == UNIT
  var_std__equal, 2, var_356_18_right, uni_UNIT, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_33, lambda_34, TAIL_CALL,
  POS(362, 9),
  POS(361, 7)
};

static TAB_NUM t_lambda_33[] = {
  0, // locals
  0, // parameters
  //  left
  LET, 1, var_356_13_left, TAIL_CALL,
  POS(363, 11)
};

static TAB_NUM t_lambda_34[] = {
  1, // locals
  0, // parameters
  // reduction_function(left right)
  var_reduction_function, 2, var_356_13_left, var_356_18_right, 1, LOCAL(1),
  //  reduction_function(left right)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(364, 12),
  POS(364, 11)
};

static TAB_NUM t_func_empty_hash_set_entry___map_reduce_1[] = {
  1, // locals
  1, // parameters
  LOCAL(1),
  // -> UNIT
  LET, 1, uni_UNIT, TAIL_CALL,
  POS(373, 45)
};

static TAB_NUM t_func_hash_set_leaf___map_reduce_1[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 375_30_self
  // self $_my_hash_index $my_key
  LOCAL(2), 0, 2, LOCAL(1), LOCAL(3),
  // mapping_function(my_key)
  var_mapping_function, 1, LOCAL(3), 1, LOCAL(1),
  // -> mapping_function(my_key)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(376, 3),
  POS(377, 6),
  POS(377, 3)
};

static TAB_NUM t_func_empty_collision_list_entry___map_reduce_1[] = {
  1, // locals
  1, // parameters
  LOCAL(1),
  // -> UNIT
  LET, 1, uni_UNIT, TAIL_CALL,
  POS(379, 51)
};

static TAB_NUM t_func_collision_list_entry___map_reduce_1[] = {
  5, // locals
  1, // parameters
  LOCAL(3), // 381_37_self
  // self $my_key $my_link
  LOCAL(3), 0, 2, LOCAL(4), LOCAL(5),
  // mapping_function(my_key)
  var_mapping_function, 1, LOCAL(4), 1, LOCAL(1),
  // map_reduce_1(my_link)
  var_map_reduce_1, 1, LOCAL(5), 1, LOCAL(2),
  // my_reduce
  func_my_reduce, 2, LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(382, 3),
  POS(384, 5),
  POS(385, 5),
  POS(383, 3)
};

static TAB_NUM t_func_hash_set_node___map_reduce_1[] = {
  11, // locals
  1, // parameters
  LOCAL(5), // 387_30_self
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
  POS(388, 31),
  POS(388, 18),
  POS(388, 53),
  POS(388, 40),
  POS(388, 3),
  POS(389, 31),
  POS(389, 18),
  POS(389, 53),
  POS(389, 40),
  POS(389, 3),
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
  POS(392, 3),
  POS(393, 3),
  POS(394, 6),
  POS(394, 3)
};

static TAB_NUM t_func_std_types__hash_set___map_reduce[] = {
  2, // locals
  -4, // parameters
  MANDATORY_PARAMETER, var_406_0_self,
  MANDATORY_PARAMETER, var_407_0_map_function,
  var_append, var_408_0_reduce_function,
  var_undefined, var_409_0_unit,
  // length_of(self) == 0
  var_length_of, 1, var_406_0_self, 1, LOCAL(1),
  // length_of(self) == 0
  var_std__equal, 2, LOCAL(1), num_0, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_35, lambda_36, TAIL_CALL,
  POS(412, 5),
  POS(412, 5),
  POS(411, 3)
};

static TAB_NUM t_lambda_35[] = {
  0, // locals
  0, // parameters
  //  unit
  LET, 1, var_409_0_unit, TAIL_CALL,
  POS(413, 7)
};

static TAB_NUM t_lambda_36[] = {
  1, // locals
  0, // parameters
  // !mapping_function map_function
  LET, 1, var_407_0_map_function, 1, var_mapping_function,
  // !reduction_function reduce_function
  LET, 1, var_408_0_reduce_function, 1, var_reduction_function,
  // contents_of(self)
  var_contents_of, 1, var_406_0_self, 1, LOCAL(1),
  // map_reduce_1 contents_of(self)
  var_map_reduce_1, 1, LOCAL(1), TAIL_CALL,
  POS(415, 7),
  POS(416, 7),
  POS(417, 20),
  POS(417, 7)
};

static TAB_NUM t_func_std__hash_set[] = {
  1, // locals
  -1, // parameters
  REST_PARAMETER, LOCAL(1), // 420_17_keys
  // $result empty_hash_set
  LET, 1, var_empty_hash_set, 1, var_421_1_result,
  // for_each keys
  var_for_each, 3, LOCAL(1), lambda_37, lambda_38, TAIL_CALL,
  POS(421, 3),
  POS(422, 3)
};

static TAB_NUM t_lambda_37[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 423_3_key
  // result(key) true
  var_421_1_result, 2, LOCAL(1), var_true, 1, var_421_1_result,
  // next
  var_next, 0, TAIL_CALL,
  POS(424, 8),
  POS(425, 7)
};

static TAB_NUM t_lambda_38[] = {
  0, // locals
  0, // parameters
  //  result
  LET, 1, var_421_1_result, TAIL_CALL,
  POS(426, 7)
};

static int tuple_85_0_arguments[] = {
  -var_undefined, -var_undefined
};

static int list_91_0_arguments[] = {
  -var_empty_hash_set_entry, -var_empty_hash_set_entry, -var_empty_hash_set_entry, -var_empty_hash_set_entry, -var_empty_hash_set_entry, -var_empty_hash_set_entry, -var_empty_hash_set_entry, -var_empty_hash_set_entry
};

static FUNKY_CONSTANT constants_table[] = {
  {FLT_POSITIVE_INT64, 0, {.value = 0}},
  {FLT_TUPLE, 2, {.arguments = tuple_85_0_arguments}},
  {FLT_LIST, 8, {.arguments = list_91_0_arguments}},
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
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_break}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_next}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_basic_loopsself_is_an_empty_entry}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_28}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_hash_set_leaf___for_each_1}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_hash_set_node___for_each_1}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2_break}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2_next}},
  {FLT_POSITIVE_INT64, 0, {.value = 8}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_29}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_30}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__hash_set___for_each}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_3_break}},
  {FLT_UNIQUE, 0, {.str_8 = "UNIT"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_my_reduce}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_31}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_32}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_33}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_34}},
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
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_35}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_36}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__hash_set}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_37}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_38}},
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
    {.position = POS(40, 1)}
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
    {.position = POS(49, 1)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "is_a_hash_set\000", NULL,
    {.position = POS(49, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "false\000", NULL,
    {.position = POS(49, 34)}
  },
  {
    FOT_DERIVED, 0, 8,
    "hash_set\000std_types", std_types__hash_set__attributes,
    {"set\000std_types"}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "true\000", NULL,
    {.position = POS(50, 36)}
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
    {.position = POS(57, 22)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "length_of\000", NULL,
    {.position = POS(73, 22)}
  },
  {
    FOT_DERIVED, 0, 0,
    "empty_hash_set\000std", NULL,
    {"hash_set\000std_types"}
  },
  {
    FOT_INITIALIZED, 0, 5,
    "hash_set_leaf\000", hash_set_leaf__attributes,
    {.const_idx = -tuple_85_0}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "undefined\000", NULL,
    {.position = POS(85, 22)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "tuple\000", NULL,
    {.position = POS(85, 16)}
  },
  {
    FOT_INITIALIZED, 0, 5,
    "collision_list_entry\000", collision_list_entry__attributes,
    {.const_idx = -tuple_85_0}
  },
  {
    FOT_INITIALIZED, 0, 5,
    "hash_set_node\000", hash_set_node__attributes,
    {.const_idx = -list_91_0}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "list\000", NULL,
    {.position = POS(92, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "107_0_myself\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "108_0_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "109_0_value\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "hash\000", NULL,
    {.position = POS(111, 15)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "111_1_hash_index\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "bit_or\000std", NULL,
    {.position = POS(111, 15)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "112_1_contents\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "equal\000std", NULL,
    {.position = POS(114, 5)}
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
    "151_45_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "152_14_my_link\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "bit_and\000std", NULL,
    {.position = POS(159, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "shift_right\000std", NULL,
    {.position = POS(160, 22)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "165_37_hash_index\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "165_48_key\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "new\000", NULL,
    {.position = POS(168, 8)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "171_24_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "171_29_hash_index\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "171_40_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "172_6_my_hash_index\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "172_21_my_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "183_31_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "183_36_dummy\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "183_42_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "184_6_my_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "184_14_my_link\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "189_26_new_link\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "214_24_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "223_43_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "224_6_my_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "224_14_my_link\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "233_24_self\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "all_of\000", NULL,
    {.position = POS(240, 9)}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "for_each_1\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "next\000", NULL,
    {.position = POS(251, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "break\000", NULL,
    {.position = POS(257, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "self\000basic_loops", NULL,
    {.position = POS(258, 7)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "saved_context_of\000basic_loops", NULL,
    {.position = POS(263, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "body\000basic_loops", NULL,
    {.position = POS(280, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "from\000basic_loops", NULL,
    {.position = POS(293, 7)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "308_1_idx\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "less\000std", NULL,
    {.position = POS(310, 14)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not\000std", NULL,
    {.position = POS(310, 14)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "for_each\000", NULL,
    {.position = POS(321, 22)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "325_0_finally\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "finally\000basic_loops", NULL,
    {.position = POS(332, 7)}
  },
  {
    FOT_DERIVED, 0, 0,
    "reduction_function\000", NULL,
    {"undefined\000"}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "356_13_left\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "356_18_right\000", NULL
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
    {.position = POS(396, 22)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "406_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "407_0_map_function\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "408_0_reduce_function\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "append\000", NULL,
    {.position = POS(408, 23)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "409_0_unit\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "hash_set\000std", NULL,
    {.const_idx = -func_std__hash_set}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "421_1_result\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_hash_set\000", NULL,
    {.position = POS(421, 11)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "serialization_tag_of\000", NULL,
    {.position = POS(428, 22)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "empty_collection_of\000", NULL,
    {.position = POS(429, 22)}
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
  87, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  constants_table,
  variables_table,
};
