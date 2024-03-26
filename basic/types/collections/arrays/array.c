#include <stddef.h>
#include <stdint.h>

#include "runtime/common.h"
#include "runtime/builtins.h"
#include "runtime/fko.h"
#include "runtime/memory.h"

enum {
  func_std_types__generic_array___for_each = -1,
  num_1 = -2,
  func_iterate_1 = -3,
  lambda_1 = -4,
  func_iterate_2 = -5,
  lambda_2 = -6,
  lambda_break = -7,
  num_2 = -8,
  lambda_3 = -9,
  lambda_next = -10,
  lambda_4 = -11,
  lambda_2_next = -12,
  func_std_types__generic_array___map = -13,
  lambda_5 = -14,
  lambda_6 = -15,
  lambda_7 = -16,
  lambda_8 = -17,
  lambda_9 = -18,
  lambda_10 = -19,
  lambda_11 = -20,
  lambda_12 = -21,
  lambda_13 = -22,
  lambda_14 = -23,
  lambda_15 = -24,
  lambda_16 = -25,
  lambda_17 = -26,
  lambda_18 = -27,
  lambda_19 = -28,
  str_map_is_not_yet_d = -29,
  func_std_types__generic_array___reduce = -30,
  lambda_20 = -31,
  func_reduce = -32,
  lambda_21 = -33,
  lambda_22 = -34,
  lambda_23 = -35,
  lambda_24 = -36,
  lambda_25 = -37,
  lambda_26 = -38,
  lambda_27 = -39,
  str_reduce_is_not_ye = -40,
  func_std_types__generic_array___map_reduce = -41,
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
  lambda_42 = -56,
  lambda_43 = -57,
  lambda_44 = -58,
  str_map_reduce_is_no = -59,
  str_array = -60,
  str_boolean_array = -61,
  str_character_array = -62,
  str_int8_array = -63,
  str_uint8_array = -64,
  str_int16_array = -65,
  str_uint16_array = -66,
  str_int32_array = -67,
  str_uint32_array = -68,
  str_int64_array = -69,
  str_uint64_array = -70,
  str_float32_array = -71,
  str_float64_array = -72,
  func_std_types__generic_array___serialize = -73,
  lambda_45 = -74,
  string_1 = -75,
  lambda_46 = -76,
  lambda_47 = -77,
  string_2 = -78,
  lambda_48 = -79,
  lambda_49 = -80,
  lambda_map_reduceself = -81,
  string_3 = -82
};

enum {
  var__START = FIRST_VAR-1,
  var_std__is_an_array, // attribute
  var_std__assign, // extern
  var_std_types__object, // extern
  var_is_an_array, // extern polymorphic
  var_false, // extern
  var_std_types__generic_array, // extern
  var_true, // extern
  var_for_each, // extern polymorphic
  var_60_0_finally, // dynamic
  var_next, // extern
  var_break, // extern
  var_basic_loops__from, // extern
  var_basic_loops__to, // extern
  var_basic_loops__self, // extern
  var_basic_loops__body, // extern
  var_basic_loops__finally, // extern
  var_tuple, // extern
  var_length_of, // extern
  var_std__less, // extern
  var_std__not, // extern
  var_if, // extern
  var_basic_loops__saved_context_of, // extern polymorphic
  var_parameter_count_of, // extern
  var_std__equal, // extern
  var_std__plus, // extern
  var_map, // extern polymorphic
  var_124_0_self, // dynamic
  var_125_0_map_function, // dynamic
  var_dimension_count_of, // extern
  var_130_1_new_array, // dynamic
  var_new, // extern
  var_from_to, // extern
  var_146_1_m, // dynamic
  var_147_1_new_array, // dynamic
  var_149_3_i, // dynamic
  var_Error, // extern
  var_case, // extern
  var_reduce, // extern polymorphic
  var_176_0_self, // dynamic
  var_177_0_reduce_function, // dynamic
  var_append, // extern
  var_183_10_s, // dynamic
  var_183_12_e, // dynamic
  var_std__shift_right, // extern
  var_194_1_m, // dynamic
  var_195_1_acc, // dynamic
  var_neutral_element_of, // extern
  var_197_3_i, // dynamic
  var_map_reduce, // extern polymorphic
  var_218_0_self, // dynamic
  var_219_0_map_function, // dynamic
  var_220_0_reduce_function, // dynamic
  var_230_3_s, // dynamic
  var_230_5_e, // dynamic
  var_226_1_map_reduce, // dynamic
  var_239_3_s, // dynamic
  var_239_5_e, // dynamic
  var_250_1_m, // dynamic
  var_251_1_acc, // dynamic
  var_253_3_i, // dynamic
  var_std_types__array, // extern
  var_serialization_tag_of, // extern polymorphic
  var_std_types__boolean_array, // extern
  var_std_types__character_array, // extern
  var_std_types__int8_array, // extern
  var_std_types__uint8_array, // extern
  var_std_types__int16_array, // extern
  var_std_types__uint16_array, // extern
  var_std_types__int32_array, // extern
  var_std_types__uint32_array, // extern
  var_std_types__int64_array, // extern
  var_std_types__uint64_array, // extern
  var_std_types__float32_array, // extern
  var_std_types__float64_array, // extern
  var_serialize, // extern polymorphic
  var_291_0_self, // dynamic
  var_292_0_indent, // dynamic
  var_undefined, // extern
  var_std__value_range, // extern
  var_to_string, // extern
  var_is_defined, // extern
  var_tabs_and_spaces, // extern
  var_296_1_indentation, // dynamic
  var__END
};


static TAB_NUM t_func_std_types__generic_array___for_each[] = {
  5, // locals
  -3, // parameters
  MANDATORY_PARAMETER, LOCAL(3), // 58_0_self
  MANDATORY_PARAMETER, LOCAL(4), // 59_0_body
  var_next, var_60_0_finally,
  // $saved_context
  var_tuple, 7, var_next, var_break, var_basic_loops__from, var_basic_loops__to, var_basic_loops__self, var_basic_loops__body, var_basic_loops__finally, 1, LOCAL(5),
  // !basic_loops::from 1 # the first ...
  LET, 1, num_1, 1, var_basic_loops__from,
  // !basic_loops::to length_of(self) # ... and last index of the array
  var_length_of, 1, LOCAL(3), 1, var_basic_loops__to,
  // !basic_loops::self self
  LET, 1, LOCAL(3), 1, var_basic_loops__self,
  // !basic_loops::body body
  LET, 1, LOCAL(4), 1, var_basic_loops__body,
  // !basic_loops::finally finally
  LET, 1, var_60_0_finally, 1, var_basic_loops__finally,
  // !break: (myself^)
  LET, 1, lambda_break, 1, var_break,
  // break.basic_loops::saved_context_of saved_context
  LET, -1, var_break, var_basic_loops__saved_context_of, LOCAL(5), var_break,
  // parameter_count_of(body) == 2:
  var_parameter_count_of, 1, LOCAL(4), 1, LOCAL(1),
  // parameter_count_of(body) == 2:
  var_std__equal, 2, LOCAL(1), num_2, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_3, lambda_4, TAIL_CALL,
  POS(62, 3),
  POS(72, 3),
  POS(73, 3),
  POS(74, 3),
  POS(75, 3),
  POS(76, 3),
  POS(94, 3),
  POS(102, 4),
  POS(105, 5),
  POS(105, 5),
  POS(104, 3)
};

static TAB_NUM t_func_iterate_1[] = {
  2, // locals
  0, // parameters
  // basic_loops::to # another item available?
  var_std__less, 2, var_basic_loops__to, var_basic_loops__from, 1, LOCAL(1),
  // basic_loops::to # another item available?
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_1, var_break, TAIL_CALL,
  POS(80, 28),
  POS(80, 28),
  POS(79, 5)
};

static TAB_NUM t_lambda_1[] = {
  1, // locals
  0, // parameters
  // basic_loops::self(basic_loops::from)
  var_basic_loops__self, 1, var_basic_loops__from, 1, LOCAL(1),
  // basic_loops::body basic_loops::self(basic_loops::from)
  var_basic_loops__body, 1, LOCAL(1), TAIL_CALL,
  POS(82, 27),
  POS(82, 9)
};

static TAB_NUM t_func_iterate_2[] = {
  2, // locals
  0, // parameters
  // basic_loops::to # another item available?
  var_std__less, 2, var_basic_loops__to, var_basic_loops__from, 1, LOCAL(1),
  // basic_loops::to # another item available?
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_2, var_break, TAIL_CALL,
  POS(88, 28),
  POS(88, 28),
  POS(87, 5)
};

static TAB_NUM t_lambda_2[] = {
  1, // locals
  0, // parameters
  // basic_loops::self(basic_loops::from)
  var_basic_loops__self, 1, var_basic_loops__from, 1, LOCAL(1),
  // basic_loops::body basic_loops::from basic_loops::self(basic_loops::from)
  var_basic_loops__body, 2, var_basic_loops__from, LOCAL(1), TAIL_CALL,
  POS(90, 45),
  POS(90, 9)
};

static TAB_NUM t_lambda_break[] = {
  2, // locals
  -1, // parameters
  MYSELF_PARAMETER, LOCAL(2), // 94_9_myself
  // !finally basic_loops::finally
  LET, 1, var_basic_loops__finally, 1, var_60_0_finally,
  // basic_loops::saved_context_of(myself)
  var_basic_loops__saved_context_of, 1, LOCAL(2), 1, LOCAL(1),
  // basic_loops::saved_context_of(myself)
  LOCAL(1), 0, 7, var_next, var_break, var_basic_loops__from, var_basic_loops__to, var_basic_loops__self, var_basic_loops__body, var_basic_loops__finally,
  // finally
  var_60_0_finally, 0, TAIL_CALL,
  POS(95, 5),
  POS(96, 5),
  POS(96, 5),
  POS(100, 5)
};

static TAB_NUM t_lambda_3[] = {
  0, // locals
  0, // parameters
  // !next:
  LET, 1, lambda_next, 1, var_next,
  // iterate_2 # start the first iteration
  func_iterate_2, 0, TAIL_CALL,
  POS(106, 7),
  POS(109, 7)
};

static TAB_NUM t_lambda_next[] = {
  0, // locals
  0, // parameters
  // !basic_loops::from basic_loops::from+1 # increase the array index
  var_std__plus, 2, var_basic_loops__from, num_1, 1, var_basic_loops__from,
  // iterate_2 # start the next iteration
  func_iterate_2, 0, TAIL_CALL,
  POS(107, 9),
  POS(108, 9)
};

static TAB_NUM t_lambda_4[] = {
  0, // locals
  0, // parameters
  // !next:
  LET, 1, lambda_2_next, 1, var_next,
  // iterate_1 # start the first iteration
  func_iterate_1, 0, TAIL_CALL,
  POS(111, 7),
  POS(114, 7)
};

static TAB_NUM t_lambda_2_next[] = {
  0, // locals
  0, // parameters
  // !basic_loops::from basic_loops::from+1 # increase the array index
  var_std__plus, 2, var_basic_loops__from, num_1, 1, var_basic_loops__from,
  // iterate_1 # start the next iteration
  func_iterate_1, 0, TAIL_CALL,
  POS(112, 9),
  POS(113, 9)
};

static TAB_NUM t_func_std_types__generic_array___map[] = {
  1, // locals
  2, // parameters
  var_124_0_self,
  var_125_0_map_function,
  // $d dimension_count_of(self)
  var_dimension_count_of, 1, var_124_0_self, 1, LOCAL(1),
  // case d
  var_case, 6, LOCAL(1), num_1, lambda_5, num_2, lambda_12, lambda_19, TAIL_CALL,
  POS(127, 3),
  POS(128, 3)
};

static TAB_NUM t_lambda_5[] = {
  2, // locals
  0, // parameters
  // $new_array new(self)
  var_new, 1, var_124_0_self, 1, var_130_1_new_array,
  // parameter_count_of(map_function) == 1:
  var_parameter_count_of, 1, var_125_0_map_function, 1, LOCAL(1),
  // parameter_count_of(map_function) == 1:
  var_std__equal, 2, LOCAL(1), num_1, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_6, lambda_9, TAIL_CALL,
  POS(130, 7),
  POS(132, 9),
  POS(132, 9),
  POS(131, 7)
};

static TAB_NUM t_lambda_6[] = {
  1, // locals
  0, // parameters
  // length_of(self)
  var_length_of, 1, var_124_0_self, 1, LOCAL(1),
  // from_to 1 length_of(self)
  var_from_to, 4, num_1, LOCAL(1), lambda_7, lambda_8, TAIL_CALL,
  POS(133, 21),
  POS(133, 11)
};

static TAB_NUM t_lambda_7[] = {
  4, // locals
  1, // parameters
  LOCAL(4), // 134_3_i
  // self(i))
  var_124_0_self, 1, LOCAL(4), 1, LOCAL(1),
  // !new_array(i) map_function(self(i))
  var_125_0_map_function, 1, LOCAL(1), 1, LOCAL(3),
  // new_array(i) map_function(self(i))
  var_130_1_new_array, 2, LOCAL(4), LOCAL(3), 1, var_130_1_new_array,
  // next
  var_next, 0, TAIL_CALL,
  POS(135, 42),
  POS(135, 15),
  POS(135, 16),
  POS(136, 15)
};

static TAB_NUM t_lambda_8[] = {
  0, // locals
  0, // parameters
  //  new_array
  LET, 1, var_130_1_new_array, TAIL_CALL,
  POS(137, 15)
};

static TAB_NUM t_lambda_9[] = {
  1, // locals
  0, // parameters
  // length_of(self)
  var_length_of, 1, var_124_0_self, 1, LOCAL(1),
  // from_to 1 length_of(self)
  var_from_to, 4, num_1, LOCAL(1), lambda_10, lambda_11, TAIL_CALL,
  POS(139, 21),
  POS(139, 11)
};

static TAB_NUM t_lambda_10[] = {
  4, // locals
  1, // parameters
  LOCAL(4), // 140_3_i
  // self(i))
  var_124_0_self, 1, LOCAL(4), 1, LOCAL(1),
  // !new_array(i) map_function(i self(i))
  var_125_0_map_function, 2, LOCAL(4), LOCAL(1), 1, LOCAL(3),
  // new_array(i) map_function(i self(i))
  var_130_1_new_array, 2, LOCAL(4), LOCAL(3), 1, var_130_1_new_array,
  // next
  var_next, 0, TAIL_CALL,
  POS(141, 44),
  POS(141, 15),
  POS(141, 16),
  POS(142, 15)
};

static TAB_NUM t_lambda_11[] = {
  0, // locals
  0, // parameters
  //  new_array
  LET, 1, var_130_1_new_array, TAIL_CALL,
  POS(143, 15)
};

static TAB_NUM t_lambda_12[] = {
  1, // locals
  0, // parameters
  // $n length_of(self 1)
  var_length_of, 2, var_124_0_self, num_1, 1, LOCAL(1),
  // $m length_of(self 2)
  var_length_of, 2, var_124_0_self, num_2, 1, var_146_1_m,
  // $new_array new(self)
  var_new, 1, var_124_0_self, 1, var_147_1_new_array,
  // from_to 1 n
  var_from_to, 4, num_1, LOCAL(1), lambda_13, lambda_18, TAIL_CALL,
  POS(145, 7),
  POS(146, 7),
  POS(147, 7),
  POS(148, 7)
};

static TAB_NUM t_lambda_13[] = {
  2, // locals
  1, // parameters
  var_149_3_i,
  // parameter_count_of(map_function) == 1:
  var_parameter_count_of, 1, var_125_0_map_function, 1, LOCAL(1),
  // parameter_count_of(map_function) == 1:
  var_std__equal, 2, LOCAL(1), num_1, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_14, lambda_16, TAIL_CALL,
  POS(151, 13),
  POS(151, 13),
  POS(150, 11)
};

static TAB_NUM t_lambda_14[] = {
  0, // locals
  0, // parameters
  // from_to 1 m
  var_from_to, 4, num_1, var_146_1_m, lambda_15, var_next, TAIL_CALL,
  POS(152, 15)
};

static TAB_NUM t_lambda_15[] = {
  4, // locals
  1, // parameters
  LOCAL(4), // 153_3_j
  // self(i j))
  var_124_0_self, 2, var_149_3_i, LOCAL(4), 1, LOCAL(1),
  // !new_array(i j) map_function(self(i j))
  var_125_0_map_function, 1, LOCAL(1), 1, LOCAL(3),
  // new_array(i j) map_function(self(i j))
  var_147_1_new_array, 3, var_149_3_i, LOCAL(4), LOCAL(3), 1, var_147_1_new_array,
  // next
  var_next, 0, TAIL_CALL,
  POS(154, 48),
  POS(154, 19),
  POS(154, 20),
  POS(155, 19)
};

static TAB_NUM t_lambda_16[] = {
  0, // locals
  0, // parameters
  // from_to 1 m
  var_from_to, 4, num_1, var_146_1_m, lambda_17, var_next, TAIL_CALL,
  POS(158, 15)
};

static TAB_NUM t_lambda_17[] = {
  4, // locals
  1, // parameters
  LOCAL(4), // 159_3_j
  // self(i j))
  var_124_0_self, 2, var_149_3_i, LOCAL(4), 1, LOCAL(1),
  // !new_array(i j) map_function(i j self(i j))
  var_125_0_map_function, 3, var_149_3_i, LOCAL(4), LOCAL(1), 1, LOCAL(3),
  // new_array(i j) map_function(i j self(i j))
  var_147_1_new_array, 3, var_149_3_i, LOCAL(4), LOCAL(3), 1, var_147_1_new_array,
  // next
  var_next, 0, TAIL_CALL,
  POS(160, 52),
  POS(160, 19),
  POS(160, 20),
  POS(161, 19)
};

static TAB_NUM t_lambda_18[] = {
  0, // locals
  0, // parameters
  //  new_array
  LET, 1, var_147_1_new_array, TAIL_CALL,
  POS(163, 11)
};

static TAB_NUM t_lambda_19[] = {
  0, // locals
  0, // parameters
  // Error "
  var_Error, 1, str_map_is_not_yet_d, TAIL_CALL,
  POS(165, 7)
};

static TAB_NUM t_func_std_types__generic_array___reduce[] = {
  2, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_176_0_self,
  var_append, var_177_0_reduce_function,
  var_undefined, LOCAL(1),
  // $d dimension_count_of(self)
  var_dimension_count_of, 1, var_176_0_self, 1, LOCAL(2),
  // case d
  var_case, 6, LOCAL(2), num_1, lambda_20, num_2, lambda_23, lambda_27, TAIL_CALL,
  POS(180, 3),
  POS(181, 3)
};

static TAB_NUM t_lambda_20[] = {
  1, // locals
  0, // parameters
  // length_of(self)
  var_length_of, 1, var_176_0_self, 1, LOCAL(1),
  // reduce 1 length_of(self)
  func_reduce, 2, num_1, LOCAL(1), TAIL_CALL,
  POS(191, 16),
  POS(191, 7)
};

static TAB_NUM t_func_reduce[] = {
  1, // locals
  2, // parameters
  var_183_10_s,
  var_183_12_e,
  // s < e:
  var_std__less, 2, var_183_10_s, var_183_12_e, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_21, lambda_22, TAIL_CALL,
  POS(185, 11),
  POS(184, 9)
};

static TAB_NUM t_lambda_21[] = {
  4, // locals
  0, // parameters
  // s+e) >> 1
  var_std__plus, 2, var_183_10_s, var_183_12_e, 1, LOCAL(1),
  // $m (s+e) >> 1
  var_std__shift_right, 2, LOCAL(1), num_1, 1, LOCAL(4),
  // reduce(s m)
  func_reduce, 2, var_183_10_s, LOCAL(4), 1, LOCAL(1),
  // m+1 e)
  var_std__plus, 2, LOCAL(4), num_1, 1, LOCAL(2),
  // reduce(m+1 e)
  func_reduce, 2, LOCAL(2), var_183_12_e, 1, LOCAL(3),
  // reduce_function
  var_177_0_reduce_function, 2, LOCAL(1), LOCAL(3), TAIL_CALL,
  POS(186, 17),
  POS(186, 13),
  POS(188, 15),
  POS(189, 22),
  POS(189, 15),
  POS(187, 13)
};

static TAB_NUM t_lambda_22[] = {
  1, // locals
  0, // parameters
  // self(s)
  var_176_0_self, 1, var_183_10_s, 1, LOCAL(1),
  //  self(s)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(190, 14),
  POS(190, 13)
};

static TAB_NUM t_lambda_23[] = {
  2, // locals
  0, // parameters
  // $n length_of(self 1)
  var_length_of, 2, var_176_0_self, num_1, 1, LOCAL(2),
  // $m length_of(self 2)
  var_length_of, 2, var_176_0_self, num_2, 1, var_194_1_m,
  // self(1 1))
  var_176_0_self, 2, num_1, num_1, 1, LOCAL(1),
  // $acc neutral_element_of(self(1 1))
  var_neutral_element_of, 1, LOCAL(1), 1, var_195_1_acc,
  // from_to 1 n
  var_from_to, 4, num_1, LOCAL(2), lambda_24, lambda_26, TAIL_CALL,
  POS(193, 7),
  POS(194, 7),
  POS(195, 31),
  POS(195, 7),
  POS(196, 7)
};

static TAB_NUM t_lambda_24[] = {
  0, // locals
  1, // parameters
  var_197_3_i,
  // from_to 1 m
  var_from_to, 4, num_1, var_194_1_m, lambda_25, var_next, TAIL_CALL,
  POS(198, 11)
};

static TAB_NUM t_lambda_25[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 199_3_j
  // self(i j)
  var_176_0_self, 2, var_197_3_i, LOCAL(2), 1, LOCAL(1),
  // reduce_function &acc self(i j)
  var_177_0_reduce_function, 2, var_195_1_acc, LOCAL(1), 1, var_195_1_acc,
  // next
  var_next, 0, TAIL_CALL,
  POS(200, 36),
  POS(200, 15),
  POS(201, 15)
};

static TAB_NUM t_lambda_26[] = {
  0, // locals
  0, // parameters
  //  acc
  LET, 1, var_195_1_acc, TAIL_CALL,
  POS(203, 11)
};

static TAB_NUM t_lambda_27[] = {
  0, // locals
  0, // parameters
  // Error "
  var_Error, 1, str_reduce_is_not_ye, TAIL_CALL,
  POS(205, 7)
};

static TAB_NUM t_func_std_types__generic_array___map_reduce[] = {
  2, // locals
  -4, // parameters
  MANDATORY_PARAMETER, var_218_0_self,
  MANDATORY_PARAMETER, var_219_0_map_function,
  var_append, var_220_0_reduce_function,
  var_undefined, LOCAL(1),
  // $d dimension_count_of(self)
  var_dimension_count_of, 1, var_218_0_self, 1, LOCAL(2),
  // case d
  var_case, 6, LOCAL(2), num_1, lambda_28, num_2, lambda_37, lambda_44, TAIL_CALL,
  POS(223, 3),
  POS(224, 3)
};

static TAB_NUM t_lambda_28[] = {
  2, // locals
  0, // parameters
  // parameter_count_of(map_function) == 1
  var_parameter_count_of, 1, var_219_0_map_function, 1, LOCAL(1),
  // parameter_count_of(map_function) == 1
  var_std__equal, 2, LOCAL(1), num_1, 1, LOCAL(2),
  // $map_reduce
  var_if, 3, LOCAL(2), lambda_29, lambda_33, 1, var_226_1_map_reduce,
  // length_of(self)
  var_length_of, 1, var_218_0_self, 1, LOCAL(1),
  // map_reduce 1 length_of(self)
  var_226_1_map_reduce, 2, num_1, LOCAL(1), TAIL_CALL,
  POS(228, 11),
  POS(228, 11),
  POS(226, 7),
  POS(247, 20),
  POS(247, 7)
};

static TAB_NUM t_lambda_29[] = {
  0, // locals
  0, // parameters
  // 
  LET, 1, lambda_30, TAIL_CALL,
  POS(229, 13)
};

static TAB_NUM t_lambda_30[] = {
  1, // locals
  2, // parameters
  var_230_3_s,
  var_230_5_e,
  // s < e:
  var_std__less, 2, var_230_3_s, var_230_5_e, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_31, lambda_32, TAIL_CALL,
  POS(232, 17),
  POS(231, 15)
};

static TAB_NUM t_lambda_31[] = {
  4, // locals
  0, // parameters
  // s+e) >> 1
  var_std__plus, 2, var_230_3_s, var_230_5_e, 1, LOCAL(1),
  // $m (s+e) >> 1
  var_std__shift_right, 2, LOCAL(1), num_1, 1, LOCAL(4),
  // map_reduce(s m)
  var_226_1_map_reduce, 2, var_230_3_s, LOCAL(4), 1, LOCAL(1),
  // m+1 e)
  var_std__plus, 2, LOCAL(4), num_1, 1, LOCAL(2),
  // map_reduce(m+1 e)
  var_226_1_map_reduce, 2, LOCAL(2), var_230_5_e, 1, LOCAL(3),
  // reduce_function
  var_220_0_reduce_function, 2, LOCAL(1), LOCAL(3), TAIL_CALL,
  POS(233, 23),
  POS(233, 19),
  POS(235, 21),
  POS(236, 32),
  POS(236, 21),
  POS(234, 19)
};

static TAB_NUM t_lambda_32[] = {
  2, // locals
  0, // parameters
  // self(s))
  var_218_0_self, 1, var_230_3_s, 1, LOCAL(1),
  // map_function(self(s))
  var_219_0_map_function, 1, LOCAL(1), 1, LOCAL(2),
  //  map_function(self(s))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(237, 33),
  POS(237, 20),
  POS(237, 19)
};

static TAB_NUM t_lambda_33[] = {
  0, // locals
  0, // parameters
  // 
  LET, 1, lambda_34, TAIL_CALL,
  POS(238, 13)
};

static TAB_NUM t_lambda_34[] = {
  1, // locals
  2, // parameters
  var_239_3_s,
  var_239_5_e,
  // s < e:
  var_std__less, 2, var_239_3_s, var_239_5_e, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_35, lambda_36, TAIL_CALL,
  POS(241, 17),
  POS(240, 15)
};

static TAB_NUM t_lambda_35[] = {
  4, // locals
  0, // parameters
  // s+e) >> 1
  var_std__plus, 2, var_239_3_s, var_239_5_e, 1, LOCAL(1),
  // $m (s+e) >> 1
  var_std__shift_right, 2, LOCAL(1), num_1, 1, LOCAL(4),
  // map_reduce(s m)
  var_226_1_map_reduce, 2, var_239_3_s, LOCAL(4), 1, LOCAL(1),
  // m+1 e)
  var_std__plus, 2, LOCAL(4), num_1, 1, LOCAL(2),
  // map_reduce(m+1 e)
  var_226_1_map_reduce, 2, LOCAL(2), var_239_5_e, 1, LOCAL(3),
  // reduce_function
  var_220_0_reduce_function, 2, LOCAL(1), LOCAL(3), TAIL_CALL,
  POS(242, 23),
  POS(242, 19),
  POS(244, 21),
  POS(245, 32),
  POS(245, 21),
  POS(243, 19)
};

static TAB_NUM t_lambda_36[] = {
  2, // locals
  0, // parameters
  // self(s))
  var_218_0_self, 1, var_239_3_s, 1, LOCAL(1),
  // map_function(s self(s))
  var_219_0_map_function, 2, var_239_3_s, LOCAL(1), 1, LOCAL(2),
  //  map_function(s self(s))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(246, 35),
  POS(246, 20),
  POS(246, 19)
};

static TAB_NUM t_lambda_37[] = {
  3, // locals
  0, // parameters
  // $n length_of(self 1)
  var_length_of, 2, var_218_0_self, num_1, 1, LOCAL(3),
  // $m length_of(self 2)
  var_length_of, 2, var_218_0_self, num_2, 1, var_250_1_m,
  // self(1 1)))
  var_218_0_self, 2, num_1, num_1, 1, LOCAL(1),
  // map_function(self(1 1)))
  var_219_0_map_function, 1, LOCAL(1), 1, LOCAL(2),
  // $acc neutral_element_of(map_function(self(1 1)))
  var_neutral_element_of, 1, LOCAL(2), 1, var_251_1_acc,
  // from_to 1 n
  var_from_to, 4, num_1, LOCAL(3), lambda_38, lambda_43, TAIL_CALL,
  POS(249, 7),
  POS(250, 7),
  POS(251, 44),
  POS(251, 31),
  POS(251, 7),
  POS(252, 7)
};

static TAB_NUM t_lambda_38[] = {
  2, // locals
  1, // parameters
  var_253_3_i,
  // parameter_count_of(map_function) == 1:
  var_parameter_count_of, 1, var_219_0_map_function, 1, LOCAL(1),
  // parameter_count_of(map_function) == 1:
  var_std__equal, 2, LOCAL(1), num_1, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_39, lambda_41, TAIL_CALL,
  POS(255, 13),
  POS(255, 13),
  POS(254, 11)
};

static TAB_NUM t_lambda_39[] = {
  0, // locals
  0, // parameters
  // from_to 1 m
  var_from_to, 4, num_1, var_250_1_m, lambda_40, var_next, TAIL_CALL,
  POS(256, 15)
};

static TAB_NUM t_lambda_40[] = {
  3, // locals
  1, // parameters
  LOCAL(3), // 257_3_j
  // self(i j))
  var_218_0_self, 2, var_253_3_i, LOCAL(3), 1, LOCAL(1),
  // map_function(self(i j))
  var_219_0_map_function, 1, LOCAL(1), 1, LOCAL(2),
  // reduce_function &acc map_function(self(i j))
  var_220_0_reduce_function, 2, var_251_1_acc, LOCAL(2), 1, var_251_1_acc,
  // next
  var_next, 0, TAIL_CALL,
  POS(258, 53),
  POS(258, 40),
  POS(258, 19),
  POS(259, 19)
};

static TAB_NUM t_lambda_41[] = {
  0, // locals
  0, // parameters
  // from_to 1 m
  var_from_to, 4, num_1, var_250_1_m, lambda_42, var_next, TAIL_CALL,
  POS(262, 15)
};

static TAB_NUM t_lambda_42[] = {
  3, // locals
  1, // parameters
  LOCAL(3), // 263_3_j
  // self(i j))
  var_218_0_self, 2, var_253_3_i, LOCAL(3), 1, LOCAL(1),
  // map_function(i j self(i j))
  var_219_0_map_function, 3, var_253_3_i, LOCAL(3), LOCAL(1), 1, LOCAL(2),
  // reduce_function &acc map_function(i j self(i j))
  var_220_0_reduce_function, 2, var_251_1_acc, LOCAL(2), 1, var_251_1_acc,
  // next
  var_next, 0, TAIL_CALL,
  POS(264, 57),
  POS(264, 40),
  POS(264, 19),
  POS(265, 19)
};

static TAB_NUM t_lambda_43[] = {
  0, // locals
  0, // parameters
  //  acc
  LET, 1, var_251_1_acc, TAIL_CALL,
  POS(267, 11)
};

static TAB_NUM t_lambda_44[] = {
  0, // locals
  0, // parameters
  // Error "
  var_Error, 1, str_map_reduce_is_no, TAIL_CALL,
  POS(269, 7)
};

static TAB_NUM t_func_std_types__generic_array___serialize[] = {
  6, // locals
  -2, // parameters
  MANDATORY_PARAMETER, var_291_0_self,
  var_undefined, var_292_0_indent,
  // $n dimension_count_of(self)
  var_dimension_count_of, 1, var_291_0_self, 1, LOCAL(5),
  // 1..n : (i) -> append(" " length_of(self i).to_string))
  var_std__value_range, 2, num_1, LOCAL(5), 1, LOCAL(1),
  // $dimensions map_reduce(1..n : (i) -> append(" " length_of(self i).to_string))
  var_map_reduce, 2, LOCAL(1), lambda_45, 1, LOCAL(6),
  // is_defined
  var_is_defined, 1, var_292_0_indent, 1, LOCAL(1),
  // $indentation
  var_if, 3, LOCAL(1), lambda_46, lambda_47, 1, var_296_1_indentation,
  // is_defined
  var_is_defined, 1, var_292_0_indent, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_48, lambda_49, 1, LOCAL(2),
  // serialization_tag_of(self)
  var_serialization_tag_of, 1, var_291_0_self, 1, LOCAL(3),
  // map_reduce(self: (item) -> append(indentation item.to_string "@nl;"))
  var_map_reduce, 2, var_291_0_self, lambda_map_reduceself, 1, LOCAL(4),
  // append
  var_append, 5, LOCAL(2), LOCAL(3), LOCAL(6), string_3, LOCAL(4), TAIL_CALL,
  POS(294, 3),
  POS(295, 26),
  POS(295, 3),
  POS(298, 14),
  POS(296, 3),
  POS(303, 14),
  POS(302, 5),
  POS(306, 5),
  POS(309, 5),
  POS(301, 3)
};

static TAB_NUM t_lambda_45[] = {
  4, // locals
  1, // parameters
  LOCAL(4), // 295_31_i
  // length_of(self i).to_string))
  var_length_of, 2, var_291_0_self, LOCAL(4), 1, LOCAL(1),
  // to_string))
  var_to_string, 1, LOCAL(1), 1, LOCAL(2),
  // append(" " length_of(self i).to_string))
  var_append, 2, string_1, LOCAL(2), 1, LOCAL(3),
  // -> append(" " length_of(self i).to_string))
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(295, 51),
  POS(295, 69),
  POS(295, 40),
  POS(295, 37)
};

static TAB_NUM t_lambda_46[] = {
  2, // locals
  0, // parameters
  // indent+2)
  var_std__plus, 2, var_292_0_indent, num_2, 1, LOCAL(1),
  // tabs_and_spaces(indent+2)
  var_tabs_and_spaces, 1, LOCAL(1), 1, LOCAL(2),
  //  tabs_and_spaces(indent+2)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(299, 26),
  POS(299, 10),
  POS(299, 9)
};

static TAB_NUM t_lambda_47[] = {
  0, // locals
  0, // parameters
  //  ""
  LET, 1, string_2, TAIL_CALL,
  POS(300, 9)
};

static TAB_NUM t_lambda_48[] = {
  1, // locals
  0, // parameters
  // tabs_and_spaces(indent)
  var_tabs_and_spaces, 1, var_292_0_indent, 1, LOCAL(1),
  //  tabs_and_spaces(indent)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(304, 10),
  POS(304, 9)
};

static TAB_NUM t_lambda_49[] = {
  0, // locals
  0, // parameters
  //  ""
  LET, 1, string_2, TAIL_CALL,
  POS(305, 9)
};

static TAB_NUM t_lambda_map_reduceself[] = {
  3, // locals
  1, // parameters
  LOCAL(3), // 309_18_item
  // to_string "@nl;"))
  var_to_string, 1, LOCAL(3), 1, LOCAL(1),
  // append(indentation item.to_string "@nl;"))
  var_append, 3, var_296_1_indentation, LOCAL(1), string_3, 1, LOCAL(2),
  // -> append(indentation item.to_string "@nl;"))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(309, 56),
  POS(309, 32),
  POS(309, 29)
};

static FUNKY_CONSTANT constants_table[] = {
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__generic_array___for_each}},
  {FLT_POSITIVE_INT64, 0, {.value = 1}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_iterate_1}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_iterate_2}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_break}},
  {FLT_POSITIVE_INT64, 0, {.value = 2}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_3}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_next}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_4}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2_next}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__generic_array___map}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_5}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_6}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_7}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_8}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_9}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_10}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_11}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_12}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_13}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_14}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_15}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_16}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_17}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_18}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_19}},
  {FLT_STRING_8, 66, {.str_8 = "<map> is not yet defined for arrays with more than two dimensions\012"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__generic_array___reduce}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_20}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_reduce}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_21}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_22}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_23}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_24}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_25}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_26}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_27}},
  {FLT_STRING_8, 69, {.str_8 = "<reduce> is not yet defined for arrays with more than two dimensions\012"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__generic_array___map_reduce}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_28}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_29}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_30}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_31}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_32}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_33}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_34}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_35}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_36}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_37}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_38}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_39}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_40}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_41}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_42}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_43}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_44}},
  {FLT_STRING_8, 73, {.str_8 = "<map_reduce> is not yet defined for arrays with more than two dimensions\012"}},
  {FLT_STRING_8, 5, {.str_8 = "array"}},
  {FLT_STRING_8, 13, {.str_8 = "boolean_array"}},
  {FLT_STRING_8, 15, {.str_8 = "character_array"}},
  {FLT_STRING_8, 10, {.str_8 = "int8_array"}},
  {FLT_STRING_8, 11, {.str_8 = "uint8_array"}},
  {FLT_STRING_8, 11, {.str_8 = "int16_array"}},
  {FLT_STRING_8, 12, {.str_8 = "uint16_array"}},
  {FLT_STRING_8, 11, {.str_8 = "int32_array"}},
  {FLT_STRING_8, 12, {.str_8 = "uint32_array"}},
  {FLT_STRING_8, 11, {.str_8 = "int64_array"}},
  {FLT_STRING_8, 12, {.str_8 = "uint64_array"}},
  {FLT_STRING_8, 13, {.str_8 = "float32_array"}},
  {FLT_STRING_8, 13, {.str_8 = "float64_array"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__generic_array___serialize}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_45}},
  {FLT_STRING_8, 1, {.str_8 = " "}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_46}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_47}},
  {FLT_STRING_8, 0, {.str_8 = ""}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_48}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_49}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_map_reduceself}},
  {FLT_STRING_8, 1, {.str_8 = "\012"}}
};

static ATTRIBUTE_DEFINITION std_types__object__attributes[] = {
  {-var_is_an_array, -var_false}
};

static ATTRIBUTE_DEFINITION std_types__generic_array__attributes[] = {
  {-var_is_an_array, -var_true},
  {var_for_each, -func_std_types__generic_array___for_each},
  {var_map, -func_std_types__generic_array___map},
  {var_reduce, -func_std_types__generic_array___reduce},
  {var_map_reduce, -func_std_types__generic_array___map_reduce},
  {var_serialize, -func_std_types__generic_array___serialize}
};

static ATTRIBUTE_DEFINITION std_types__array__attributes[] = {
  {-var_serialization_tag_of, -str_array}
};

static ATTRIBUTE_DEFINITION std_types__boolean_array__attributes[] = {
  {-var_serialization_tag_of, -str_boolean_array}
};

static ATTRIBUTE_DEFINITION std_types__character_array__attributes[] = {
  {-var_serialization_tag_of, -str_character_array}
};

static ATTRIBUTE_DEFINITION std_types__int8_array__attributes[] = {
  {-var_serialization_tag_of, -str_int8_array}
};

static ATTRIBUTE_DEFINITION std_types__uint8_array__attributes[] = {
  {-var_serialization_tag_of, -str_uint8_array}
};

static ATTRIBUTE_DEFINITION std_types__int16_array__attributes[] = {
  {-var_serialization_tag_of, -str_int16_array}
};

static ATTRIBUTE_DEFINITION std_types__uint16_array__attributes[] = {
  {-var_serialization_tag_of, -str_uint16_array}
};

static ATTRIBUTE_DEFINITION std_types__int32_array__attributes[] = {
  {-var_serialization_tag_of, -str_int32_array}
};

static ATTRIBUTE_DEFINITION std_types__uint32_array__attributes[] = {
  {-var_serialization_tag_of, -str_uint32_array}
};

static ATTRIBUTE_DEFINITION std_types__int64_array__attributes[] = {
  {-var_serialization_tag_of, -str_int64_array}
};

static ATTRIBUTE_DEFINITION std_types__uint64_array__attributes[] = {
  {-var_serialization_tag_of, -str_uint64_array}
};

static ATTRIBUTE_DEFINITION std_types__float32_array__attributes[] = {
  {-var_serialization_tag_of, -str_float32_array}
};

static ATTRIBUTE_DEFINITION std_types__float64_array__attributes[] = {
  {-var_serialization_tag_of, -str_float64_array}
};

static FUNKY_VARIABLE variables_table[] = {
  {
    FOT_POLYMORPHIC, 0, 0,
    "is_an_array\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "assign\000std", NULL,
    {.position = POS(26, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "object\000std_types", std_types__object__attributes,
    {.position = POS(28, 1)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "is_an_array\000", NULL,
    {.position = POS(28, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "false\000", NULL,
    {.position = POS(28, 32)}
  },
  {
    FOT_UNKNOWN, 0, 6,
    "generic_array\000std_types", std_types__generic_array__attributes,
    {.position = POS(34, 1)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "true\000", NULL,
    {.position = POS(34, 39)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "for_each\000", NULL,
    {.position = POS(40, 27)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "60_0_finally\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "next\000", NULL,
    {.position = POS(60, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "break\000", NULL,
    {.position = POS(65, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "from\000basic_loops", NULL,
    {.position = POS(66, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "to\000basic_loops", NULL,
    {.position = POS(67, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "self\000basic_loops", NULL,
    {.position = POS(68, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "body\000basic_loops", NULL,
    {.position = POS(69, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "finally\000basic_loops", NULL,
    {.position = POS(70, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "tuple\000", NULL,
    {.position = POS(63, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "length_of\000", NULL,
    {.position = POS(73, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "less\000std", NULL,
    {.position = POS(80, 28)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not\000std", NULL,
    {.position = POS(80, 28)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if\000", NULL,
    {.position = POS(79, 5)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "saved_context_of\000basic_loops", NULL,
    {.position = POS(96, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "parameter_count_of\000", NULL,
    {.position = POS(105, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "equal\000std", NULL,
    {.position = POS(105, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000std", NULL,
    {.position = POS(107, 28)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "map\000", NULL,
    {.position = POS(116, 27)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "124_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "125_0_map_function\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "dimension_count_of\000", NULL,
    {.position = POS(127, 6)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "130_1_new_array\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "new\000", NULL,
    {.position = POS(130, 18)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "from_to\000", NULL,
    {.position = POS(133, 11)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "146_1_m\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "147_1_new_array\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "149_3_i\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "Error\000", NULL,
    {.position = POS(165, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "case\000", NULL,
    {.position = POS(128, 3)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "reduce\000", NULL,
    {.position = POS(168, 27)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "176_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "177_0_reduce_function\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "append\000", NULL,
    {.position = POS(177, 23)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "183_10_s\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "183_12_e\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "shift_right\000std", NULL,
    {.position = POS(186, 17)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "194_1_m\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "195_1_acc\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "neutral_element_of\000", NULL,
    {.position = POS(195, 12)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "197_3_i\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "map_reduce\000", NULL,
    {.position = POS(208, 27)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "218_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "219_0_map_function\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "220_0_reduce_function\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "230_3_s\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "230_5_e\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "226_1_map_reduce\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "239_3_s\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "239_5_e\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "250_1_m\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "251_1_acc\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "253_3_i\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 1,
    "array\000std_types", std_types__array__attributes,
    {.position = POS(275, 1)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "serialization_tag_of\000", NULL,
    {.position = POS(275, 19)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "boolean_array\000std_types", std_types__boolean_array__attributes,
    {.position = POS(276, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "character_array\000std_types", std_types__character_array__attributes,
    {.position = POS(277, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "int8_array\000std_types", std_types__int8_array__attributes,
    {.position = POS(278, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "uint8_array\000std_types", std_types__uint8_array__attributes,
    {.position = POS(279, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "int16_array\000std_types", std_types__int16_array__attributes,
    {.position = POS(280, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "uint16_array\000std_types", std_types__uint16_array__attributes,
    {.position = POS(281, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "int32_array\000std_types", std_types__int32_array__attributes,
    {.position = POS(282, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "uint32_array\000std_types", std_types__uint32_array__attributes,
    {.position = POS(283, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "int64_array\000std_types", std_types__int64_array__attributes,
    {.position = POS(284, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "uint64_array\000std_types", std_types__uint64_array__attributes,
    {.position = POS(285, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "float32_array\000std_types", std_types__float32_array__attributes,
    {.position = POS(286, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "float64_array\000std_types", std_types__float64_array__attributes,
    {.position = POS(287, 1)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "serialize\000", NULL,
    {.position = POS(289, 27)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "291_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "292_0_indent\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "undefined\000", NULL,
    {.position = POS(292, 14)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "value_range\000std", NULL,
    {.position = POS(295, 26)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "to_string\000", NULL,
    {.position = POS(295, 69)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_defined\000", NULL,
    {.position = POS(298, 14)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "tabs_and_spaces\000", NULL,
    {.position = POS(299, 10)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "296_1_indentation\000", NULL
  }
};

static FUNKY_NAMESPACE used_namespaces[] = {
  {"std", 1, 0}
};

FUNKY_MODULE module__basic__types__collections__arrays__array = {
  "_basic__types__collections__arrays__array", // module name
  "basic/types/collections/arrays/array.fky", // module filename
  .major_version = 0,
  .minor_version = 0,
  .feature_flags = FEAT_POSITIONS,
  .marker = 0,
  0, // number of required modules
  0, // number of defined namespaces
  1, // number of used namespaces
  82, // number of constants
  83, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  constants_table,
  variables_table,
};
