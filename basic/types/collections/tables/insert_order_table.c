#include <stddef.h>
#include <stdint.h>

#include "runtime/common.h"
#include "runtime/builtins.h"
#include "runtime/fko.h"
#include "runtime/memory.h"

enum {
  uni_NONE = -1,
  func_std_types__insert_order_table = -2,
  lambda_1 = -3,
  lambda_2 = -4,
  lambda_3 = -5,
  lambda_4 = -6,
  lambda_value_is_defined = -7,
  lambda_index_is_defined = -8,
  lambda_5 = -9,
  lambda_6 = -10,
  lambda_2_index_is_defined = -11,
  num_1 = -12,
  minus_num_1 = -13,
  lambda_7 = -14,
  func_std_types__insert_order_table___length_of = -15,
  func_std_types__insert_order_table___for_each = -16,
  num_2 = -17,
  lambda_8 = -18,
  lambda_9 = -19,
  lambda_10 = -20,
  lambda_11 = -21,
  func_std_types__insert_order_table___first_key_of = -22,
  func_std_types__insert_order_table___last_key_of = -23,
  func_std_types__insert_order_table___first_item_of = -24,
  func_std_types__insert_order_table___last_item_of = -25,
  func_std_types__insert_order_table___map = -26,
  lambda_12 = -27,
  lambda_13 = -28,
  lambda_14 = -29,
  func_std_types__insert_order_table___map_reduce = -30,
  lambda_15 = -31,
  lambda_16 = -32,
  lambda_17 = -33,
  func_map_reduce = -34,
  lambda_18 = -35,
  lambda_19 = -36,
  lambda_20 = -37,
  func_std__insert_order_table = -38,
  lambda_21 = -39,
  lambda_22 = -40,
  str_insert_order_tab = -41
};

enum {
  var__START = FIRST_VAR-1,
  var_std__is_an_insert_order_table, // attribute
  var_std__assign, // extern
  var_std_types__object, // extern
  var_is_an_insert_order_table, // extern polymorphic
  var_false, // extern
  var_std_types__insert_order_table, // derived
  var_true, // extern
  var_keys_of, // attribute
  var_values_of, // attribute
  var_index_table_of, // attribute
  var_std_types__table, // extern
  var_empty_list, // extern
  var_empty_hash_table, // extern
  var_std__empty_insert_order_table, // derived
  var_52_5_myself, // dynamic
  var_53_5_key, // dynamic
  var_54_5_value, // dynamic
  var_56_4_values, // dynamic
  var_57_4_index_table, // dynamic
  var_58_4_index, // dynamic
  var_std__equal, // extern
  var_is_defined, // extern
  var_undefined, // extern
  var_if, // extern
  var_push, // extern
  var_length_of, // extern polymorphic
  var_std__minus, // extern
  var_range, // extern
  var_std__plus, // extern
  var_append, // extern
  var_for_each, // extern polymorphic
  var_107_5_self, // dynamic
  var_108_5_body, // dynamic
  var_109_5_finally, // dynamic
  var_next, // extern
  var_111_4_values, // dynamic
  var_parameter_count_of, // extern
  var_114_8_keys, // dynamic
  var_first_key_of, // extern polymorphic
  var_key_of, // extern
  var_last_key_of, // extern polymorphic
  var_first_item_of, // extern polymorphic
  var_last_item_of, // extern polymorphic
  var_map, // extern polymorphic
  var_172_5_self, // dynamic
  var_173_5_function, // dynamic
  var_180_8_keys, // dynamic
  var_map_reduce, // extern polymorphic
  var_200_5_self, // dynamic
  var_201_5_map_function, // dynamic
  var_202_5_reduce_function, // dynamic
  var_203_5_unit, // dynamic
  var_is_empty, // extern
  var_211_12_keys, // dynamic
  var_212_12_values, // dynamic
  var_215_25_s, // dynamic
  var_215_27_e, // dynamic
  var_std__less, // extern
  var_std__shift_right, // extern
  var_std__insert_order_table, // initialized
  var_233_4_table, // dynamic
  var_empty_insert_order_table, // extern
  var_serialization_tag_of, // extern polymorphic
  var_empty_collection_of, // extern polymorphic
  var_deserializers, // extern
  var_register_type, // extern
  var__END
};


static TAB_NUM t_func_std_types__insert_order_table[] = {
  1, // locals
  -3, // parameters
  MYSELF_PARAMETER, var_52_5_myself,
  MANDATORY_PARAMETER, var_53_5_key,
  uni_NONE, var_54_5_value,
  // $values values_of(myself)
  var_values_of, 1, var_52_5_myself, 1, var_56_4_values,
  // $index_table index_table_of(myself)
  var_index_table_of, 1, var_52_5_myself, 1, var_57_4_index_table,
  // $index index_table(key)
  var_57_4_index_table, 1, var_53_5_key, 1, var_58_4_index,
  // NONE == value
  var_std__equal, 2, uni_NONE, var_54_5_value, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1, lambda_4, TAIL_CALL,
  POS(56, 3),
  POS(57, 3),
  POS(58, 3),
  POS(60, 5),
  POS(59, 3)
};

static TAB_NUM t_lambda_1[] = {
  1, // locals
  0, // parameters
  // is_defined
  var_is_defined, 1, var_58_4_index, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_2, lambda_3, TAIL_CALL,
  POS(63, 15),
  POS(62, 7)
};

static TAB_NUM t_lambda_2[] = {
  1, // locals
  0, // parameters
  // values(index)
  var_56_4_values, 1, var_58_4_index, 1, LOCAL(1),
  //  values(index)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(64, 12),
  POS(64, 11)
};

static TAB_NUM t_lambda_3[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(65, 11)
};

static TAB_NUM t_lambda_4[] = {
  1, // locals
  0, // parameters
  // is_defined:
  var_is_defined, 1, var_54_5_value, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_value_is_defined, lambda_6, TAIL_CALL,
  POS(68, 15),
  POS(67, 7)
};

static TAB_NUM t_lambda_value_is_defined[] = {
  1, // locals
  0, // parameters
  // is_defined: # update entry
  var_is_defined, 1, var_58_4_index, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_index_is_defined, lambda_5, TAIL_CALL,
  POS(70, 19),
  POS(69, 11)
};

static TAB_NUM t_lambda_index_is_defined[] = {
  1, // locals
  0, // parameters
  // values(index) value
  var_56_4_values, 2, var_58_4_index, var_54_5_value, 1, var_56_4_values,
  // .values_of values)
  LET, -1, var_52_5_myself, var_values_of, var_56_4_values, LOCAL(1),
  // -> myself(.values_of values)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(71, 16),
  POS(72, 25),
  POS(72, 15)
};

static TAB_NUM t_lambda_5[] = {
  3, // locals
  0, // parameters
  // $keys keys_of(myself)
  var_keys_of, 1, var_52_5_myself, 1, LOCAL(3),
  // push &keys key
  var_push, 2, LOCAL(3), var_53_5_key, 1, LOCAL(3),
  // push &values value
  var_push, 2, var_56_4_values, var_54_5_value, 1, var_56_4_values,
  // !index_table(key) length_of(values)
  var_length_of, 1, var_56_4_values, 1, LOCAL(2),
  // index_table(key) length_of(values)
  var_57_4_index_table, 2, var_53_5_key, LOCAL(2), 1, var_57_4_index_table,
  // myself
  LET, -3, var_52_5_myself, var_keys_of, LOCAL(3), var_values_of, var_56_4_values, var_index_table_of, var_57_4_index_table, LOCAL(1),
  // ->
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(74, 15),
  POS(75, 15),
  POS(76, 15),
  POS(77, 15),
  POS(77, 16),
  POS(79, 17),
  POS(78, 15)
};

static TAB_NUM t_lambda_6[] = {
  1, // locals
  0, // parameters
  // is_defined:
  var_is_defined, 1, var_58_4_index, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_2_index_is_defined, lambda_7, TAIL_CALL,
  POS(86, 19),
  POS(85, 11)
};

static TAB_NUM t_lambda_2_index_is_defined[] = {
  5, // locals
  0, // parameters
  // $keys keys_of(myself)
  var_keys_of, 1, var_52_5_myself, 1, LOCAL(5),
  // index-1) range(keys index+1 -1))
  var_std__minus, 2, var_58_4_index, num_1, 1, LOCAL(1),
  // range(keys 1 index-1) range(keys index+1 -1))
  var_range, 3, LOCAL(5), num_1, LOCAL(1), 1, LOCAL(2),
  // index+1 -1))
  var_std__plus, 2, var_58_4_index, num_1, 1, LOCAL(3),
  // range(keys index+1 -1))
  var_range, 3, LOCAL(5), LOCAL(3), minus_num_1, 1, LOCAL(4),
  // !keys
  var_append, 2, LOCAL(2), LOCAL(4), 1, LOCAL(5),
  // index-1) range(values index+1 -1))
  var_std__minus, 2, var_58_4_index, num_1, 1, LOCAL(1),
  // range(values 1 index-1) range(values index+1 -1))
  var_range, 3, var_56_4_values, num_1, LOCAL(1), 1, LOCAL(2),
  // index+1 -1))
  var_std__plus, 2, var_58_4_index, num_1, 1, LOCAL(3),
  // range(values index+1 -1))
  var_range, 3, var_56_4_values, LOCAL(3), minus_num_1, 1, LOCAL(4),
  // !values
  var_append, 2, LOCAL(2), LOCAL(4), 1, var_56_4_values,
  // index_table(key) undefined
  var_57_4_index_table, 2, var_53_5_key, var_undefined, 1, var_57_4_index_table,
  // myself
  LET, -3, var_52_5_myself, var_keys_of, LOCAL(5), var_values_of, var_56_4_values, var_index_table_of, var_57_4_index_table, LOCAL(1),
  // ->
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(87, 15),
  POS(89, 37),
  POS(89, 24),
  POS(89, 57),
  POS(89, 46),
  POS(88, 15),
  POS(91, 39),
  POS(91, 24),
  POS(91, 61),
  POS(91, 48),
  POS(90, 15),
  POS(92, 16),
  POS(94, 17),
  POS(93, 15)
};

static TAB_NUM t_lambda_7[] = {
  0, // locals
  0, // parameters
  //  myself
  LET, 1, var_52_5_myself, TAIL_CALL,
  POS(98, 15)
};

static TAB_NUM t_func_std_types__insert_order_table___length_of[] = {
  3, // locals
  1, // parameters
  LOCAL(3), // 100_44_self
  // values_of(self))
  var_values_of, 1, LOCAL(3), 1, LOCAL(1),
  // length_of(values_of(self))
  var_length_of, 1, LOCAL(1), 1, LOCAL(2),
  // -> length_of(values_of(self))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(101, 16),
  POS(101, 6),
  POS(101, 3)
};

static TAB_NUM t_func_std_types__insert_order_table___for_each[] = {
  2, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_107_5_self,
  MANDATORY_PARAMETER, var_108_5_body,
  var_next, var_109_5_finally,
  // $values values_of(self)
  var_values_of, 1, var_107_5_self, 1, var_111_4_values,
  // parameter_count_of(body) == 2:
  var_parameter_count_of, 1, var_108_5_body, 1, LOCAL(1),
  // parameter_count_of(body) == 2:
  var_std__equal, 2, LOCAL(1), num_2, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_8, lambda_11, IO_TAIL_CALL,
  POS(111, 3),
  POS(113, 5),
  POS(113, 5),
  POS(112, 3)
};

static TAB_NUM t_lambda_8[] = {
  0, // locals
  0, // parameters
  // $keys keys_of(self)
  var_keys_of, 1, var_107_5_self, 1, var_114_8_keys,
  // for_each! values
  var_for_each, 3, var_111_4_values, lambda_9, lambda_10, IO_TAIL_CALL,
  POS(114, 7),
  POS(115, 7)
};

static TAB_NUM t_lambda_9[] = {
  3, // locals
  2, // parameters
  LOCAL(3), // 116_12_index
  LOCAL(1),
  // keys(index) values(index)
  var_114_8_keys, 1, LOCAL(3), 1, LOCAL(1),
  // values(index)
  var_111_4_values, 1, LOCAL(3), 1, LOCAL(2),
  // body! keys(index) values(index)
  var_108_5_body, 2, LOCAL(1), LOCAL(2), IO_TAIL_CALL,
  POS(117, 17),
  POS(117, 29),
  POS(117, 11)
};

static TAB_NUM t_lambda_10[] = {
  0, // locals
  0, // parameters
  // finally!
  var_109_5_finally, 0, IO_TAIL_CALL,
  POS(119, 11)
};

static TAB_NUM t_lambda_11[] = {
  0, // locals
  0, // parameters
  // for_each! values body finally
  var_for_each, 3, var_111_4_values, var_108_5_body, var_109_5_finally, IO_TAIL_CALL,
  POS(121, 7)
};

static TAB_NUM t_func_std_types__insert_order_table___first_key_of[] = {
  3, // locals
  1, // parameters
  LOCAL(3), // 130_5_self
  // key_of(self)(1)
  var_key_of, 1, LOCAL(3), 1, LOCAL(1),
  // key_of(self)(1)
  LOCAL(1), 1, num_1, 1, LOCAL(2),
  // -> key_of(self)(1)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(132, 6),
  POS(132, 6),
  POS(132, 3)
};

static TAB_NUM t_func_std_types__insert_order_table___last_key_of[] = {
  3, // locals
  1, // parameters
  LOCAL(3), // 138_5_self
  // key_of(self)(-1)
  var_key_of, 1, LOCAL(3), 1, LOCAL(1),
  // key_of(self)(-1)
  LOCAL(1), 1, minus_num_1, 1, LOCAL(2),
  // -> key_of(self)(-1)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(140, 6),
  POS(140, 6),
  POS(140, 3)
};

static TAB_NUM t_func_std_types__insert_order_table___first_item_of[] = {
  3, // locals
  1, // parameters
  LOCAL(3), // 149_5_self
  // values_of(self)(1)
  var_values_of, 1, LOCAL(3), 1, LOCAL(1),
  // values_of(self)(1)
  LOCAL(1), 1, num_1, 1, LOCAL(2),
  // -> values_of(self)(1)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(151, 6),
  POS(151, 6),
  POS(151, 3)
};

static TAB_NUM t_func_std_types__insert_order_table___last_item_of[] = {
  3, // locals
  1, // parameters
  LOCAL(3), // 157_5_self
  // values_of(self)(-1)
  var_values_of, 1, LOCAL(3), 1, LOCAL(1),
  // values_of(self)(-1)
  LOCAL(1), 1, minus_num_1, 1, LOCAL(2),
  // -> values_of(self)(-1)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(159, 6),
  POS(159, 6),
  POS(159, 3)
};

static TAB_NUM t_func_std_types__insert_order_table___map[] = {
  2, // locals
  2, // parameters
  var_172_5_self,
  var_173_5_function,
  // parameter_count_of(function) == 1:
  var_parameter_count_of, 1, var_173_5_function, 1, LOCAL(1),
  // parameter_count_of(function) == 1:
  var_std__equal, 2, LOCAL(1), num_1, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_12, lambda_13, TAIL_CALL,
  POS(176, 5),
  POS(176, 5),
  POS(175, 3)
};

static TAB_NUM t_lambda_12[] = {
  1, // locals
  0, // parameters
  // values_of function
  var_values_of, 1, var_172_5_self, 1, LOCAL(1),
  // map &self.values_of function
  var_map, 2, LOCAL(1), var_173_5_function, 1, LOCAL(1),
  // self.values_of function
  LET, -1, var_172_5_self, var_values_of, LOCAL(1), var_172_5_self,
  // -> self
  LET, 1, var_172_5_self, TAIL_CALL,
  POS(177, 17),
  POS(177, 7),
  POS(177, 12),
  POS(178, 7)
};

static TAB_NUM t_lambda_13[] = {
  1, // locals
  0, // parameters
  // $keys keys_of(self)
  var_keys_of, 1, var_172_5_self, 1, var_180_8_keys,
  // values_of: (idx value) function keys(idx) value
  var_values_of, 1, var_172_5_self, 1, LOCAL(1),
  // map &self.values_of: (idx value) function keys(idx) value
  var_map, 2, LOCAL(1), lambda_14, 1, LOCAL(1),
  // self.values_of: (idx value) function keys(idx) value
  LET, -1, var_172_5_self, var_values_of, LOCAL(1), var_172_5_self,
  // -> self
  LET, 1, var_172_5_self, TAIL_CALL,
  POS(180, 7),
  POS(181, 17),
  POS(181, 7),
  POS(181, 12),
  POS(182, 7)
};

static TAB_NUM t_lambda_14[] = {
  3, // locals
  2, // parameters
  LOCAL(2), // 181_29_idx
  LOCAL(3), // 181_33_value
  // keys(idx) value
  var_180_8_keys, 1, LOCAL(2), 1, LOCAL(1),
  // function keys(idx) value
  var_173_5_function, 2, LOCAL(1), LOCAL(3), TAIL_CALL,
  POS(181, 49),
  POS(181, 40)
};

static TAB_NUM t_func_std_types__insert_order_table___map_reduce[] = {
  1, // locals
  -4, // parameters
  MANDATORY_PARAMETER, var_200_5_self,
  MANDATORY_PARAMETER, var_201_5_map_function,
  var_append, var_202_5_reduce_function,
  var_undefined, var_203_5_unit,
  // is_empty
  var_is_empty, 1, var_200_5_self, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_15, lambda_16, TAIL_CALL,
  POS(206, 10),
  POS(205, 3)
};

static TAB_NUM t_lambda_15[] = {
  0, // locals
  0, // parameters
  //  unit
  LET, 1, var_203_5_unit, TAIL_CALL,
  POS(207, 7)
};

static TAB_NUM t_lambda_16[] = {
  2, // locals
  0, // parameters
  // parameter_count_of(map_function) == 2:
  var_parameter_count_of, 1, var_201_5_map_function, 1, LOCAL(1),
  // parameter_count_of(map_function) == 2:
  var_std__equal, 2, LOCAL(1), num_2, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_17, lambda_20, TAIL_CALL,
  POS(210, 9),
  POS(210, 9),
  POS(209, 7)
};

static TAB_NUM t_lambda_17[] = {
  1, // locals
  0, // parameters
  // $keys keys_of(self)
  var_keys_of, 1, var_200_5_self, 1, var_211_12_keys,
  // $values values_of(self)
  var_values_of, 1, var_200_5_self, 1, var_212_12_values,
  // length_of(self)
  var_length_of, 1, var_200_5_self, 1, LOCAL(1),
  // map_reduce 1 length_of(self)
  func_map_reduce, 2, num_1, LOCAL(1), TAIL_CALL,
  POS(211, 11),
  POS(212, 11),
  POS(213, 24),
  POS(213, 11)
};

static TAB_NUM t_func_map_reduce[] = {
  1, // locals
  2, // parameters
  var_215_25_s,
  var_215_27_e,
  // s < e:
  var_std__less, 2, var_215_25_s, var_215_27_e, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_18, lambda_19, TAIL_CALL,
  POS(217, 15),
  POS(216, 13)
};

static TAB_NUM t_lambda_18[] = {
  4, // locals
  0, // parameters
  // s+e) >> 1
  var_std__plus, 2, var_215_25_s, var_215_27_e, 1, LOCAL(1),
  // $m (s+e) >> 1
  var_std__shift_right, 2, LOCAL(1), num_1, 1, LOCAL(4),
  // map_reduce(s m)
  func_map_reduce, 2, var_215_25_s, LOCAL(4), 1, LOCAL(1),
  // m+1 e)
  var_std__plus, 2, LOCAL(4), num_1, 1, LOCAL(2),
  // map_reduce(m+1 e)
  func_map_reduce, 2, LOCAL(2), var_215_27_e, 1, LOCAL(3),
  // reduce_function
  var_202_5_reduce_function, 2, LOCAL(1), LOCAL(3), TAIL_CALL,
  POS(218, 21),
  POS(218, 17),
  POS(220, 19),
  POS(221, 30),
  POS(221, 19),
  POS(219, 17)
};

static TAB_NUM t_lambda_19[] = {
  3, // locals
  0, // parameters
  // keys(s) values(s))
  var_211_12_keys, 1, var_215_25_s, 1, LOCAL(1),
  // values(s))
  var_212_12_values, 1, var_215_25_s, 1, LOCAL(2),
  // map_function(keys(s) values(s))
  var_201_5_map_function, 2, LOCAL(1), LOCAL(2), 1, LOCAL(3),
  //  map_function(keys(s) values(s))
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(222, 31),
  POS(222, 39),
  POS(222, 18),
  POS(222, 17)
};

static TAB_NUM t_lambda_20[] = {
  1, // locals
  0, // parameters
  // values_of(self) map_function reduce_function unit
  var_values_of, 1, var_200_5_self, 1, LOCAL(1),
  // map_reduce values_of(self) map_function reduce_function unit
  var_map_reduce, 4, LOCAL(1), var_201_5_map_function, var_202_5_reduce_function, var_203_5_unit, TAIL_CALL,
  POS(224, 22),
  POS(224, 11)
};

static TAB_NUM t_func_std__insert_order_table[] = {
  1, // locals
  -1, // parameters
  REST_PARAMETER, LOCAL(1), // 231_5_pairs
  // $table empty_insert_order_table
  LET, 1, var_empty_insert_order_table, 1, var_233_4_table,
  // for_each pairs
  var_for_each, 3, LOCAL(1), lambda_21, lambda_22, TAIL_CALL,
  POS(233, 3),
  POS(234, 3)
};

static TAB_NUM t_lambda_21[] = {
  3, // locals
  1, // parameters
  LOCAL(1), // 235_8_pair
  // pair $key $value
  LOCAL(1), 0, 2, LOCAL(2), LOCAL(3),
  // table(key) value
  var_233_4_table, 2, LOCAL(2), LOCAL(3), 1, var_233_4_table,
  // next
  var_next, 0, TAIL_CALL,
  POS(236, 7),
  POS(237, 8),
  POS(238, 7)
};

static TAB_NUM t_lambda_22[] = {
  0, // locals
  0, // parameters
  //  table
  LET, 1, var_233_4_table, TAIL_CALL,
  POS(239, 7)
};

static TAB_NUM t_module_entry[] = {
  0, // locals
  0, // parameters
  // register_type &deserializers std_types::insert_order_table
  var_register_type, 2, var_deserializers, var_std_types__insert_order_table, 1, var_deserializers,
  LET, 1, 0, TAIL_CALL,
  POS(247, 1)
};

static FUNKY_CONSTANT constants_table[] = {
  {FLT_UNIQUE, 0, {.str_8 = "NONE"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__insert_order_table}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_3}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_4}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_value_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_index_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_5}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_6}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2_index_is_defined}},
  {FLT_POSITIVE_INT64, 0, {.value = 1}},
  {FLT_NEGATIVE_INT64, 0, {.value = 1}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_7}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__insert_order_table___length_of}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__insert_order_table___for_each}},
  {FLT_POSITIVE_INT64, 0, {.value = 2}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_8}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_9}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_10}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_11}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__insert_order_table___first_key_of}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__insert_order_table___last_key_of}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__insert_order_table___first_item_of}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__insert_order_table___last_item_of}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__insert_order_table___map}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_12}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_13}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_14}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__insert_order_table___map_reduce}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_15}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_16}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_17}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_map_reduce}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_18}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_19}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_20}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__insert_order_table}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_21}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_22}},
  {FLT_STRING_8, 18, {.str_8 = "insert_order_table"}},
  {FLT_FUNCTION, 0, {.tfunc = t_module_entry}}
};

static ATTRIBUTE_DEFINITION std_types__object__attributes[] = {
  {-var_is_an_insert_order_table, -var_false}
};

static ATTRIBUTE_DEFINITION std_types__insert_order_table__attributes[] = {
  {-var_is_an_insert_order_table, -var_true},
  {-var_keys_of, -var_empty_list},
  {-var_values_of, -var_empty_list},
  {-var_index_table_of, -var_empty_hash_table},
  {TYPE_FUNCTION, -func_std_types__insert_order_table},
  {var_length_of, -func_std_types__insert_order_table___length_of},
  {var_for_each, -func_std_types__insert_order_table___for_each},
  {var_first_key_of, -func_std_types__insert_order_table___first_key_of},
  {var_last_key_of, -func_std_types__insert_order_table___last_key_of},
  {var_first_item_of, -func_std_types__insert_order_table___first_item_of},
  {var_last_item_of, -func_std_types__insert_order_table___last_item_of},
  {var_map, -func_std_types__insert_order_table___map},
  {var_map_reduce, -func_std_types__insert_order_table___map_reduce},
  {-var_serialization_tag_of, -str_insert_order_tab},
  {-var_empty_collection_of, -var_empty_insert_order_table}
};

static FUNKY_VARIABLE variables_table[] = {
  {
    FOT_POLYMORPHIC, 0, 0,
    "is_an_insert_order_table\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "assign\000std", NULL,
    {.position = POS(25, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "object\000std_types", std_types__object__attributes,
    {.position = POS(27, 1)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "is_an_insert_order_table\000", NULL,
    {.position = POS(27, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "false\000", NULL,
    {.position = POS(27, 45)}
  },
  {
    FOT_DERIVED, 0, 15,
    "insert_order_table\000std_types", std_types__insert_order_table__attributes,
    {"table\000std_types"}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "true\000", NULL,
    {.position = POS(28, 57)}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "keys_of\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "values_of\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "index_table_of\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "table\000std_types", NULL,
    {.position = POS(36, 32)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_list\000", NULL,
    {.position = POS(40, 40)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_hash_table\000", NULL,
    {.position = POS(42, 47)}
  },
  {
    FOT_DERIVED, 0, 0,
    "empty_insert_order_table\000std", NULL,
    {"insert_order_table\000std_types"}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "52_5_myself\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "53_5_key\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "54_5_value\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "56_4_values\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "57_4_index_table\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "58_4_index\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "equal\000std", NULL,
    {.position = POS(60, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_defined\000", NULL,
    {.position = POS(63, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "undefined\000", NULL,
    {.position = POS(65, 12)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if\000", NULL,
    {.position = POS(62, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "push\000", NULL,
    {.position = POS(75, 15)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "length_of\000", NULL,
    {.position = POS(77, 33)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "minus\000std", NULL,
    {.position = POS(89, 37)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "range\000", NULL,
    {.position = POS(89, 24)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000std", NULL,
    {.position = POS(89, 57)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "append\000", NULL,
    {.position = POS(89, 17)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "for_each\000", NULL,
    {.position = POS(103, 32)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "107_5_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "108_5_body\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "109_5_finally\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "next\000", NULL,
    {.position = POS(109, 15)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "111_4_values\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "parameter_count_of\000", NULL,
    {.position = POS(113, 5)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "114_8_keys\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "first_key_of\000", NULL,
    {.position = POS(126, 32)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "key_of\000", NULL,
    {.position = POS(132, 6)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "last_key_of\000", NULL,
    {.position = POS(134, 32)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "first_item_of\000", NULL,
    {.position = POS(145, 32)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "last_item_of\000", NULL,
    {.position = POS(153, 32)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "map\000", NULL,
    {.position = POS(164, 32)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "172_5_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "173_5_function\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "180_8_keys\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "map_reduce\000", NULL,
    {.position = POS(190, 32)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "200_5_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "201_5_map_function\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "202_5_reduce_function\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "203_5_unit\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_empty\000", NULL,
    {.position = POS(206, 10)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "211_12_keys\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "212_12_values\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "215_25_s\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "215_27_e\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "less\000std", NULL,
    {.position = POS(217, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "shift_right\000std", NULL,
    {.position = POS(218, 21)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "insert_order_table\000std", NULL,
    {.const_idx = -func_std__insert_order_table}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "233_4_table\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_insert_order_table\000", NULL,
    {.position = POS(233, 10)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "serialization_tag_of\000", NULL,
    {.position = POS(244, 32)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "empty_collection_of\000", NULL,
    {.position = POS(245, 32)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "deserializers\000", NULL,
    {.position = POS(247, 16)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "register_type\000", NULL,
    {.position = POS(247, 1)}
  }
};

static FUNKY_NAMESPACE used_namespaces[] = {
  {"std", 1, 0}
};

FUNKY_MODULE module__basic__types__collections__tables__insert_order_table = {
  "_basic__types__collections__tables__insert_order_table", // module name
  "basic/types/collections/tables/insert_order_table.fky", // module filename
  .major_version = 0,
  .minor_version = 0,
  .feature_flags = FEAT_POSITIONS|FEAT_INITIALIZER,
  .marker = 0,
  0, // number of required modules
  0, // number of defined namespaces
  1, // number of used namespaces
  42, // number of constants
  66, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  constants_table,
  variables_table,
};
