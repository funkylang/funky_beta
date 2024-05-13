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
  num_3 = -28,
  lambda_19 = -29,
  lambda_20 = -30,
  lambda_21 = -31,
  lambda_22 = -32,
  lambda_23 = -33,
  lambda_24 = -34,
  lambda_25 = -35,
  lambda_26 = -36,
  lambda_27 = -37,
  str_map_is_not_yet_d = -38,
  func_std_types__generic_array___reduce = -39,
  lambda_28 = -40,
  func_reduce = -41,
  lambda_29 = -42,
  lambda_30 = -43,
  lambda_31 = -44,
  lambda_32 = -45,
  lambda_33 = -46,
  lambda_34 = -47,
  lambda_35 = -48,
  lambda_36 = -49,
  lambda_37 = -50,
  lambda_38 = -51,
  lambda_39 = -52,
  lambda_40 = -53,
  str_reduce_is_not_ye = -54,
  func_std_types__generic_array___map_reduce = -55,
  lambda_41 = -56,
  lambda_42 = -57,
  lambda_43 = -58,
  lambda_44 = -59,
  lambda_45 = -60,
  lambda_46 = -61,
  lambda_47 = -62,
  lambda_48 = -63,
  lambda_49 = -64,
  lambda_50 = -65,
  lambda_51 = -66,
  lambda_52 = -67,
  lambda_53 = -68,
  lambda_54 = -69,
  lambda_55 = -70,
  lambda_56 = -71,
  lambda_57 = -72,
  lambda_58 = -73,
  lambda_59 = -74,
  lambda_60 = -75,
  lambda_61 = -76,
  lambda_62 = -77,
  lambda_63 = -78,
  lambda_64 = -79,
  lambda_65 = -80,
  str_map_reduce_is_no = -81,
  str_array = -82,
  str_boolean_array = -83,
  str_character_array = -84,
  str_int8_array = -85,
  str_uint8_array = -86,
  str_int16_array = -87,
  str_uint16_array = -88,
  str_int32_array = -89,
  str_uint32_array = -90,
  str_int64_array = -91,
  str_uint64_array = -92,
  str_float32_array = -93,
  str_float64_array = -94,
  func_std_types__generic_array___serialize = -95,
  lambda_66 = -96,
  string_1 = -97,
  lambda_67 = -98,
  lambda_68 = -99,
  string_2 = -100,
  lambda_69 = -101,
  lambda_70 = -102,
  lambda_map_reduceself = -103,
  string_3 = -104
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
  var_59_0_finally, // dynamic
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
  var_123_0_self, // dynamic
  var_124_0_map_function, // dynamic
  var_dimension_count_of, // extern
  var_129_1_new_array, // dynamic
  var_new, // extern
  var_from_to, // extern
  var_145_1_m, // dynamic
  var_146_1_new_array, // dynamic
  var_148_3_i, // dynamic
  var_165_1_m, // dynamic
  var_166_1_k, // dynamic
  var_167_1_new_array, // dynamic
  var_169_3_i, // dynamic
  var_171_3_j, // dynamic
  var_Error, // extern
  var_case, // extern
  var_reduce, // extern polymorphic
  var_199_0_self, // dynamic
  var_200_0_reduce_function, // dynamic
  var_append, // extern
  var_206_10_s, // dynamic
  var_206_12_e, // dynamic
  var_std__shift_right, // extern
  var_217_1_m, // dynamic
  var_218_1_acc, // dynamic
  var_neutral_element_of, // extern
  var_220_3_i, // dynamic
  var_229_1_m, // dynamic
  var_230_1_k, // dynamic
  var_231_1_acc, // dynamic
  var_233_3_i, // dynamic
  var_235_3_j, // dynamic
  var_map_reduce, // extern polymorphic
  var_257_0_self, // dynamic
  var_258_0_map_function, // dynamic
  var_259_0_reduce_function, // dynamic
  var_269_3_s, // dynamic
  var_269_5_e, // dynamic
  var_265_1_map_reduce, // dynamic
  var_278_3_s, // dynamic
  var_278_5_e, // dynamic
  var_289_1_m, // dynamic
  var_290_1_acc, // dynamic
  var_292_3_i, // dynamic
  var_309_1_m, // dynamic
  var_310_1_k, // dynamic
  var_311_1_acc, // dynamic
  var_313_3_i, // dynamic
  var_315_3_j, // dynamic
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
  var_354_0_self, // dynamic
  var_355_0_indent, // dynamic
  var_undefined, // extern
  var_std__value_range, // extern
  var_to_string, // extern
  var_is_defined, // extern
  var_tabs_and_spaces, // extern
  var_359_1_indentation, // dynamic
  var__END
};


static TAB_NUM t_func_std_types__generic_array___for_each[] = {
  5, // locals
  -3, // parameters
  MANDATORY_PARAMETER, LOCAL(3), // 57_0_self
  MANDATORY_PARAMETER, LOCAL(4), // 58_0_body
  var_next, var_59_0_finally,
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
  LET, 1, var_59_0_finally, 1, var_basic_loops__finally,
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
  POS(61, 3),
  POS(71, 3),
  POS(72, 3),
  POS(73, 3),
  POS(74, 3),
  POS(75, 3),
  POS(93, 3),
  POS(101, 4),
  POS(104, 5),
  POS(104, 5),
  POS(103, 3)
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
  POS(79, 28),
  POS(79, 28),
  POS(78, 5)
};

static TAB_NUM t_lambda_1[] = {
  1, // locals
  0, // parameters
  // basic_loops::self(basic_loops::from)
  var_basic_loops__self, 1, var_basic_loops__from, 1, LOCAL(1),
  // basic_loops::body basic_loops::self(basic_loops::from)
  var_basic_loops__body, 1, LOCAL(1), TAIL_CALL,
  POS(81, 27),
  POS(81, 9)
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
  POS(87, 28),
  POS(87, 28),
  POS(86, 5)
};

static TAB_NUM t_lambda_2[] = {
  1, // locals
  0, // parameters
  // basic_loops::self(basic_loops::from)
  var_basic_loops__self, 1, var_basic_loops__from, 1, LOCAL(1),
  // basic_loops::body basic_loops::from basic_loops::self(basic_loops::from)
  var_basic_loops__body, 2, var_basic_loops__from, LOCAL(1), TAIL_CALL,
  POS(89, 45),
  POS(89, 9)
};

static TAB_NUM t_lambda_break[] = {
  2, // locals
  -1, // parameters
  MYSELF_PARAMETER, LOCAL(2), // 93_9_myself
  // !finally basic_loops::finally
  LET, 1, var_basic_loops__finally, 1, var_59_0_finally,
  // basic_loops::saved_context_of(myself)
  var_basic_loops__saved_context_of, 1, LOCAL(2), 1, LOCAL(1),
  // basic_loops::saved_context_of(myself)
  LOCAL(1), 0, 7, var_next, var_break, var_basic_loops__from, var_basic_loops__to, var_basic_loops__self, var_basic_loops__body, var_basic_loops__finally,
  // finally
  var_59_0_finally, 0, TAIL_CALL,
  POS(94, 5),
  POS(95, 5),
  POS(95, 5),
  POS(99, 5)
};

static TAB_NUM t_lambda_3[] = {
  0, // locals
  0, // parameters
  // !next:
  LET, 1, lambda_next, 1, var_next,
  // iterate_2 # start the first iteration
  func_iterate_2, 0, TAIL_CALL,
  POS(105, 7),
  POS(108, 7)
};

static TAB_NUM t_lambda_next[] = {
  0, // locals
  0, // parameters
  // !basic_loops::from basic_loops::from+1 # increase the array index
  var_std__plus, 2, var_basic_loops__from, num_1, 1, var_basic_loops__from,
  // iterate_2 # start the next iteration
  func_iterate_2, 0, TAIL_CALL,
  POS(106, 9),
  POS(107, 9)
};

static TAB_NUM t_lambda_4[] = {
  0, // locals
  0, // parameters
  // !next:
  LET, 1, lambda_2_next, 1, var_next,
  // iterate_1 # start the first iteration
  func_iterate_1, 0, TAIL_CALL,
  POS(110, 7),
  POS(113, 7)
};

static TAB_NUM t_lambda_2_next[] = {
  0, // locals
  0, // parameters
  // !basic_loops::from basic_loops::from+1 # increase the array index
  var_std__plus, 2, var_basic_loops__from, num_1, 1, var_basic_loops__from,
  // iterate_1 # start the next iteration
  func_iterate_1, 0, TAIL_CALL,
  POS(111, 9),
  POS(112, 9)
};

static TAB_NUM t_func_std_types__generic_array___map[] = {
  1, // locals
  2, // parameters
  var_123_0_self,
  var_124_0_map_function,
  // $d dimension_count_of(self)
  var_dimension_count_of, 1, var_123_0_self, 1, LOCAL(1),
  // case d
  var_case, 8, LOCAL(1), num_1, lambda_5, num_2, lambda_12, num_3, lambda_19, lambda_27, TAIL_CALL,
  POS(126, 3),
  POS(127, 3)
};

static TAB_NUM t_lambda_5[] = {
  2, // locals
  0, // parameters
  // $new_array new(self)
  var_new, 1, var_123_0_self, 1, var_129_1_new_array,
  // parameter_count_of(map_function) == 1:
  var_parameter_count_of, 1, var_124_0_map_function, 1, LOCAL(1),
  // parameter_count_of(map_function) == 1:
  var_std__equal, 2, LOCAL(1), num_1, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_6, lambda_9, TAIL_CALL,
  POS(129, 7),
  POS(131, 9),
  POS(131, 9),
  POS(130, 7)
};

static TAB_NUM t_lambda_6[] = {
  1, // locals
  0, // parameters
  // length_of(self)
  var_length_of, 1, var_123_0_self, 1, LOCAL(1),
  // from_to 1 length_of(self)
  var_from_to, 4, num_1, LOCAL(1), lambda_7, lambda_8, TAIL_CALL,
  POS(132, 21),
  POS(132, 11)
};

static TAB_NUM t_lambda_7[] = {
  4, // locals
  1, // parameters
  LOCAL(4), // 133_3_i
  // self(i))
  var_123_0_self, 1, LOCAL(4), 1, LOCAL(1),
  // !new_array(i) map_function(self(i))
  var_124_0_map_function, 1, LOCAL(1), 1, LOCAL(3),
  // new_array(i) map_function(self(i))
  var_129_1_new_array, 2, LOCAL(4), LOCAL(3), 1, var_129_1_new_array,
  // next
  var_next, 0, TAIL_CALL,
  POS(134, 42),
  POS(134, 15),
  POS(134, 16),
  POS(135, 15)
};

static TAB_NUM t_lambda_8[] = {
  0, // locals
  0, // parameters
  //  new_array
  LET, 1, var_129_1_new_array, TAIL_CALL,
  POS(136, 15)
};

static TAB_NUM t_lambda_9[] = {
  1, // locals
  0, // parameters
  // length_of(self)
  var_length_of, 1, var_123_0_self, 1, LOCAL(1),
  // from_to 1 length_of(self)
  var_from_to, 4, num_1, LOCAL(1), lambda_10, lambda_11, TAIL_CALL,
  POS(138, 21),
  POS(138, 11)
};

static TAB_NUM t_lambda_10[] = {
  4, // locals
  1, // parameters
  LOCAL(4), // 139_3_i
  // self(i))
  var_123_0_self, 1, LOCAL(4), 1, LOCAL(1),
  // !new_array(i) map_function(i self(i))
  var_124_0_map_function, 2, LOCAL(4), LOCAL(1), 1, LOCAL(3),
  // new_array(i) map_function(i self(i))
  var_129_1_new_array, 2, LOCAL(4), LOCAL(3), 1, var_129_1_new_array,
  // next
  var_next, 0, TAIL_CALL,
  POS(140, 44),
  POS(140, 15),
  POS(140, 16),
  POS(141, 15)
};

static TAB_NUM t_lambda_11[] = {
  0, // locals
  0, // parameters
  //  new_array
  LET, 1, var_129_1_new_array, TAIL_CALL,
  POS(142, 15)
};

static TAB_NUM t_lambda_12[] = {
  1, // locals
  0, // parameters
  // $n length_of(self 1)
  var_length_of, 2, var_123_0_self, num_1, 1, LOCAL(1),
  // $m length_of(self 2)
  var_length_of, 2, var_123_0_self, num_2, 1, var_145_1_m,
  // $new_array new(self)
  var_new, 1, var_123_0_self, 1, var_146_1_new_array,
  // from_to 1 n
  var_from_to, 4, num_1, LOCAL(1), lambda_13, lambda_18, TAIL_CALL,
  POS(144, 7),
  POS(145, 7),
  POS(146, 7),
  POS(147, 7)
};

static TAB_NUM t_lambda_13[] = {
  2, // locals
  1, // parameters
  var_148_3_i,
  // parameter_count_of(map_function) == 1:
  var_parameter_count_of, 1, var_124_0_map_function, 1, LOCAL(1),
  // parameter_count_of(map_function) == 1:
  var_std__equal, 2, LOCAL(1), num_1, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_14, lambda_16, TAIL_CALL,
  POS(150, 13),
  POS(150, 13),
  POS(149, 11)
};

static TAB_NUM t_lambda_14[] = {
  0, // locals
  0, // parameters
  // from_to 1 m
  var_from_to, 4, num_1, var_145_1_m, lambda_15, var_next, TAIL_CALL,
  POS(151, 15)
};

static TAB_NUM t_lambda_15[] = {
  4, // locals
  1, // parameters
  LOCAL(4), // 152_3_j
  // self(i j))
  var_123_0_self, 2, var_148_3_i, LOCAL(4), 1, LOCAL(1),
  // !new_array(i j) map_function(self(i j))
  var_124_0_map_function, 1, LOCAL(1), 1, LOCAL(3),
  // new_array(i j) map_function(self(i j))
  var_146_1_new_array, 3, var_148_3_i, LOCAL(4), LOCAL(3), 1, var_146_1_new_array,
  // next
  var_next, 0, TAIL_CALL,
  POS(153, 48),
  POS(153, 19),
  POS(153, 20),
  POS(154, 19)
};

static TAB_NUM t_lambda_16[] = {
  0, // locals
  0, // parameters
  // from_to 1 m
  var_from_to, 4, num_1, var_145_1_m, lambda_17, var_next, TAIL_CALL,
  POS(157, 15)
};

static TAB_NUM t_lambda_17[] = {
  4, // locals
  1, // parameters
  LOCAL(4), // 158_3_j
  // self(i j))
  var_123_0_self, 2, var_148_3_i, LOCAL(4), 1, LOCAL(1),
  // !new_array(i j) map_function(i j self(i j))
  var_124_0_map_function, 3, var_148_3_i, LOCAL(4), LOCAL(1), 1, LOCAL(3),
  // new_array(i j) map_function(i j self(i j))
  var_146_1_new_array, 3, var_148_3_i, LOCAL(4), LOCAL(3), 1, var_146_1_new_array,
  // next
  var_next, 0, TAIL_CALL,
  POS(159, 52),
  POS(159, 19),
  POS(159, 20),
  POS(160, 19)
};

static TAB_NUM t_lambda_18[] = {
  0, // locals
  0, // parameters
  //  new_array
  LET, 1, var_146_1_new_array, TAIL_CALL,
  POS(162, 11)
};

static TAB_NUM t_lambda_19[] = {
  1, // locals
  0, // parameters
  // $n length_of(self 1)
  var_length_of, 2, var_123_0_self, num_1, 1, LOCAL(1),
  // $m length_of(self 2)
  var_length_of, 2, var_123_0_self, num_2, 1, var_165_1_m,
  // $k length_of(self 3)
  var_length_of, 2, var_123_0_self, num_3, 1, var_166_1_k,
  // $new_array new(self)
  var_new, 1, var_123_0_self, 1, var_167_1_new_array,
  // from_to 1 n
  var_from_to, 4, num_1, LOCAL(1), lambda_20, lambda_26, TAIL_CALL,
  POS(164, 7),
  POS(165, 7),
  POS(166, 7),
  POS(167, 7),
  POS(168, 7)
};

static TAB_NUM t_lambda_20[] = {
  0, // locals
  1, // parameters
  var_169_3_i,
  // from_to 1 m
  var_from_to, 4, num_1, var_165_1_m, lambda_21, var_next, TAIL_CALL,
  POS(170, 11)
};

static TAB_NUM t_lambda_21[] = {
  2, // locals
  1, // parameters
  var_171_3_j,
  // parameter_count_of(map_function) == 1:
  var_parameter_count_of, 1, var_124_0_map_function, 1, LOCAL(1),
  // parameter_count_of(map_function) == 1:
  var_std__equal, 2, LOCAL(1), num_1, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_22, lambda_24, TAIL_CALL,
  POS(173, 17),
  POS(173, 17),
  POS(172, 15)
};

static TAB_NUM t_lambda_22[] = {
  0, // locals
  0, // parameters
  // from_to 1 k
  var_from_to, 4, num_1, var_166_1_k, lambda_23, var_next, TAIL_CALL,
  POS(174, 19)
};

static TAB_NUM t_lambda_23[] = {
  4, // locals
  1, // parameters
  LOCAL(4), // 175_3_k
  // self(i j k))
  var_123_0_self, 3, var_169_3_i, var_171_3_j, LOCAL(4), 1, LOCAL(1),
  // !new_array(i j k) map_function(self(i j k))
  var_124_0_map_function, 1, LOCAL(1), 1, LOCAL(3),
  // new_array(i j k) map_function(self(i j k))
  var_167_1_new_array, 4, var_169_3_i, var_171_3_j, LOCAL(4), LOCAL(3), 1, var_167_1_new_array,
  // next
  var_next, 0, TAIL_CALL,
  POS(176, 54),
  POS(176, 23),
  POS(176, 24),
  POS(177, 23)
};

static TAB_NUM t_lambda_24[] = {
  0, // locals
  0, // parameters
  // from_to 1 k
  var_from_to, 4, num_1, var_166_1_k, lambda_25, var_next, TAIL_CALL,
  POS(180, 19)
};

static TAB_NUM t_lambda_25[] = {
  4, // locals
  1, // parameters
  LOCAL(4), // 181_3_k
  // self(i j k))
  var_123_0_self, 3, var_169_3_i, var_171_3_j, LOCAL(4), 1, LOCAL(1),
  // !new_array(i j k) map_function(i j k self(i j k))
  var_124_0_map_function, 4, var_169_3_i, var_171_3_j, LOCAL(4), LOCAL(1), 1, LOCAL(3),
  // new_array(i j k) map_function(i j k self(i j k))
  var_167_1_new_array, 4, var_169_3_i, var_171_3_j, LOCAL(4), LOCAL(3), 1, var_167_1_new_array,
  // next
  var_next, 0, TAIL_CALL,
  POS(182, 60),
  POS(182, 23),
  POS(182, 24),
  POS(183, 23)
};

static TAB_NUM t_lambda_26[] = {
  0, // locals
  0, // parameters
  //  new_array
  LET, 1, var_167_1_new_array, TAIL_CALL,
  POS(186, 11)
};

static TAB_NUM t_lambda_27[] = {
  0, // locals
  0, // parameters
  // Error "
  var_Error, 1, str_map_is_not_yet_d, TAIL_CALL,
  POS(188, 7)
};

static TAB_NUM t_func_std_types__generic_array___reduce[] = {
  2, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_199_0_self,
  var_append, var_200_0_reduce_function,
  var_undefined, LOCAL(1),
  // $d dimension_count_of(self)
  var_dimension_count_of, 1, var_199_0_self, 1, LOCAL(2),
  // case d
  var_case, 8, LOCAL(2), num_1, lambda_28, num_2, lambda_31, num_3, lambda_35, lambda_40, TAIL_CALL,
  POS(203, 3),
  POS(204, 3)
};

static TAB_NUM t_lambda_28[] = {
  1, // locals
  0, // parameters
  // length_of(self)
  var_length_of, 1, var_199_0_self, 1, LOCAL(1),
  // reduce 1 length_of(self)
  func_reduce, 2, num_1, LOCAL(1), TAIL_CALL,
  POS(214, 16),
  POS(214, 7)
};

static TAB_NUM t_func_reduce[] = {
  1, // locals
  2, // parameters
  var_206_10_s,
  var_206_12_e,
  // s < e:
  var_std__less, 2, var_206_10_s, var_206_12_e, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_29, lambda_30, TAIL_CALL,
  POS(208, 11),
  POS(207, 9)
};

static TAB_NUM t_lambda_29[] = {
  4, // locals
  0, // parameters
  // s+e) >> 1
  var_std__plus, 2, var_206_10_s, var_206_12_e, 1, LOCAL(1),
  // $m (s+e) >> 1
  var_std__shift_right, 2, LOCAL(1), num_1, 1, LOCAL(4),
  // reduce(s m)
  func_reduce, 2, var_206_10_s, LOCAL(4), 1, LOCAL(1),
  // m+1 e)
  var_std__plus, 2, LOCAL(4), num_1, 1, LOCAL(2),
  // reduce(m+1 e)
  func_reduce, 2, LOCAL(2), var_206_12_e, 1, LOCAL(3),
  // reduce_function
  var_200_0_reduce_function, 2, LOCAL(1), LOCAL(3), TAIL_CALL,
  POS(209, 17),
  POS(209, 13),
  POS(211, 15),
  POS(212, 22),
  POS(212, 15),
  POS(210, 13)
};

static TAB_NUM t_lambda_30[] = {
  1, // locals
  0, // parameters
  // self(s)
  var_199_0_self, 1, var_206_10_s, 1, LOCAL(1),
  //  self(s)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(213, 14),
  POS(213, 13)
};

static TAB_NUM t_lambda_31[] = {
  2, // locals
  0, // parameters
  // $n length_of(self 1)
  var_length_of, 2, var_199_0_self, num_1, 1, LOCAL(2),
  // $m length_of(self 2)
  var_length_of, 2, var_199_0_self, num_2, 1, var_217_1_m,
  // self(1 1))
  var_199_0_self, 2, num_1, num_1, 1, LOCAL(1),
  // $acc neutral_element_of(self(1 1))
  var_neutral_element_of, 1, LOCAL(1), 1, var_218_1_acc,
  // from_to 1 n
  var_from_to, 4, num_1, LOCAL(2), lambda_32, lambda_34, TAIL_CALL,
  POS(216, 7),
  POS(217, 7),
  POS(218, 31),
  POS(218, 7),
  POS(219, 7)
};

static TAB_NUM t_lambda_32[] = {
  0, // locals
  1, // parameters
  var_220_3_i,
  // from_to 1 m
  var_from_to, 4, num_1, var_217_1_m, lambda_33, var_next, TAIL_CALL,
  POS(221, 11)
};

static TAB_NUM t_lambda_33[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 222_3_j
  // self(i j)
  var_199_0_self, 2, var_220_3_i, LOCAL(2), 1, LOCAL(1),
  // reduce_function &acc self(i j)
  var_200_0_reduce_function, 2, var_218_1_acc, LOCAL(1), 1, var_218_1_acc,
  // next
  var_next, 0, TAIL_CALL,
  POS(223, 36),
  POS(223, 15),
  POS(224, 15)
};

static TAB_NUM t_lambda_34[] = {
  0, // locals
  0, // parameters
  //  acc
  LET, 1, var_218_1_acc, TAIL_CALL,
  POS(226, 11)
};

static TAB_NUM t_lambda_35[] = {
  2, // locals
  0, // parameters
  // $n length_of(self 1)
  var_length_of, 2, var_199_0_self, num_1, 1, LOCAL(2),
  // $m length_of(self 2)
  var_length_of, 2, var_199_0_self, num_2, 1, var_229_1_m,
  // $k length_of(self 3)
  var_length_of, 2, var_199_0_self, num_3, 1, var_230_1_k,
  // self(1 1 1))
  var_199_0_self, 3, num_1, num_1, num_1, 1, LOCAL(1),
  // $acc neutral_element_of(self(1 1 1))
  var_neutral_element_of, 1, LOCAL(1), 1, var_231_1_acc,
  // from_to 1 n
  var_from_to, 4, num_1, LOCAL(2), lambda_36, lambda_39, TAIL_CALL,
  POS(228, 7),
  POS(229, 7),
  POS(230, 7),
  POS(231, 31),
  POS(231, 7),
  POS(232, 7)
};

static TAB_NUM t_lambda_36[] = {
  0, // locals
  1, // parameters
  var_233_3_i,
  // from_to 1 m
  var_from_to, 4, num_1, var_229_1_m, lambda_37, var_next, TAIL_CALL,
  POS(234, 11)
};

static TAB_NUM t_lambda_37[] = {
  0, // locals
  1, // parameters
  var_235_3_j,
  // from_to 1 k
  var_from_to, 4, num_1, var_230_1_k, lambda_38, var_next, TAIL_CALL,
  POS(236, 15)
};

static TAB_NUM t_lambda_38[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 237_3_k
  // self(i j k)
  var_199_0_self, 3, var_233_3_i, var_235_3_j, LOCAL(2), 1, LOCAL(1),
  // reduce_function &acc self(i j k)
  var_200_0_reduce_function, 2, var_231_1_acc, LOCAL(1), 1, var_231_1_acc,
  // next
  var_next, 0, TAIL_CALL,
  POS(238, 40),
  POS(238, 19),
  POS(239, 19)
};

static TAB_NUM t_lambda_39[] = {
  0, // locals
  0, // parameters
  //  acc
  LET, 1, var_231_1_acc, TAIL_CALL,
  POS(242, 11)
};

static TAB_NUM t_lambda_40[] = {
  0, // locals
  0, // parameters
  // Error "
  var_Error, 1, str_reduce_is_not_ye, TAIL_CALL,
  POS(244, 7)
};

static TAB_NUM t_func_std_types__generic_array___map_reduce[] = {
  2, // locals
  -4, // parameters
  MANDATORY_PARAMETER, var_257_0_self,
  MANDATORY_PARAMETER, var_258_0_map_function,
  var_append, var_259_0_reduce_function,
  var_undefined, LOCAL(1),
  // $d dimension_count_of(self)
  var_dimension_count_of, 1, var_257_0_self, 1, LOCAL(2),
  // case d
  var_case, 8, LOCAL(2), num_1, lambda_41, num_2, lambda_50, num_3, lambda_57, lambda_65, TAIL_CALL,
  POS(262, 3),
  POS(263, 3)
};

static TAB_NUM t_lambda_41[] = {
  2, // locals
  0, // parameters
  // parameter_count_of(map_function) == 1
  var_parameter_count_of, 1, var_258_0_map_function, 1, LOCAL(1),
  // parameter_count_of(map_function) == 1
  var_std__equal, 2, LOCAL(1), num_1, 1, LOCAL(2),
  // $map_reduce
  var_if, 3, LOCAL(2), lambda_42, lambda_46, 1, var_265_1_map_reduce,
  // length_of(self)
  var_length_of, 1, var_257_0_self, 1, LOCAL(1),
  // map_reduce 1 length_of(self)
  var_265_1_map_reduce, 2, num_1, LOCAL(1), TAIL_CALL,
  POS(267, 11),
  POS(267, 11),
  POS(265, 7),
  POS(286, 20),
  POS(286, 7)
};

static TAB_NUM t_lambda_42[] = {
  0, // locals
  0, // parameters
  // 
  LET, 1, lambda_43, TAIL_CALL,
  POS(268, 13)
};

static TAB_NUM t_lambda_43[] = {
  1, // locals
  2, // parameters
  var_269_3_s,
  var_269_5_e,
  // s < e:
  var_std__less, 2, var_269_3_s, var_269_5_e, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_44, lambda_45, TAIL_CALL,
  POS(271, 17),
  POS(270, 15)
};

static TAB_NUM t_lambda_44[] = {
  4, // locals
  0, // parameters
  // s+e) >> 1
  var_std__plus, 2, var_269_3_s, var_269_5_e, 1, LOCAL(1),
  // $m (s+e) >> 1
  var_std__shift_right, 2, LOCAL(1), num_1, 1, LOCAL(4),
  // map_reduce(s m)
  var_265_1_map_reduce, 2, var_269_3_s, LOCAL(4), 1, LOCAL(1),
  // m+1 e)
  var_std__plus, 2, LOCAL(4), num_1, 1, LOCAL(2),
  // map_reduce(m+1 e)
  var_265_1_map_reduce, 2, LOCAL(2), var_269_5_e, 1, LOCAL(3),
  // reduce_function
  var_259_0_reduce_function, 2, LOCAL(1), LOCAL(3), TAIL_CALL,
  POS(272, 23),
  POS(272, 19),
  POS(274, 21),
  POS(275, 32),
  POS(275, 21),
  POS(273, 19)
};

static TAB_NUM t_lambda_45[] = {
  2, // locals
  0, // parameters
  // self(s))
  var_257_0_self, 1, var_269_3_s, 1, LOCAL(1),
  // map_function(self(s))
  var_258_0_map_function, 1, LOCAL(1), 1, LOCAL(2),
  //  map_function(self(s))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(276, 33),
  POS(276, 20),
  POS(276, 19)
};

static TAB_NUM t_lambda_46[] = {
  0, // locals
  0, // parameters
  // 
  LET, 1, lambda_47, TAIL_CALL,
  POS(277, 13)
};

static TAB_NUM t_lambda_47[] = {
  1, // locals
  2, // parameters
  var_278_3_s,
  var_278_5_e,
  // s < e:
  var_std__less, 2, var_278_3_s, var_278_5_e, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_48, lambda_49, TAIL_CALL,
  POS(280, 17),
  POS(279, 15)
};

static TAB_NUM t_lambda_48[] = {
  4, // locals
  0, // parameters
  // s+e) >> 1
  var_std__plus, 2, var_278_3_s, var_278_5_e, 1, LOCAL(1),
  // $m (s+e) >> 1
  var_std__shift_right, 2, LOCAL(1), num_1, 1, LOCAL(4),
  // map_reduce(s m)
  var_265_1_map_reduce, 2, var_278_3_s, LOCAL(4), 1, LOCAL(1),
  // m+1 e)
  var_std__plus, 2, LOCAL(4), num_1, 1, LOCAL(2),
  // map_reduce(m+1 e)
  var_265_1_map_reduce, 2, LOCAL(2), var_278_5_e, 1, LOCAL(3),
  // reduce_function
  var_259_0_reduce_function, 2, LOCAL(1), LOCAL(3), TAIL_CALL,
  POS(281, 23),
  POS(281, 19),
  POS(283, 21),
  POS(284, 32),
  POS(284, 21),
  POS(282, 19)
};

static TAB_NUM t_lambda_49[] = {
  2, // locals
  0, // parameters
  // self(s))
  var_257_0_self, 1, var_278_3_s, 1, LOCAL(1),
  // map_function(s self(s))
  var_258_0_map_function, 2, var_278_3_s, LOCAL(1), 1, LOCAL(2),
  //  map_function(s self(s))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(285, 35),
  POS(285, 20),
  POS(285, 19)
};

static TAB_NUM t_lambda_50[] = {
  3, // locals
  0, // parameters
  // $n length_of(self 1)
  var_length_of, 2, var_257_0_self, num_1, 1, LOCAL(3),
  // $m length_of(self 2)
  var_length_of, 2, var_257_0_self, num_2, 1, var_289_1_m,
  // self(1 1)))
  var_257_0_self, 2, num_1, num_1, 1, LOCAL(1),
  // map_function(self(1 1)))
  var_258_0_map_function, 1, LOCAL(1), 1, LOCAL(2),
  // $acc neutral_element_of(map_function(self(1 1)))
  var_neutral_element_of, 1, LOCAL(2), 1, var_290_1_acc,
  // from_to 1 n
  var_from_to, 4, num_1, LOCAL(3), lambda_51, lambda_56, TAIL_CALL,
  POS(288, 7),
  POS(289, 7),
  POS(290, 44),
  POS(290, 31),
  POS(290, 7),
  POS(291, 7)
};

static TAB_NUM t_lambda_51[] = {
  2, // locals
  1, // parameters
  var_292_3_i,
  // parameter_count_of(map_function) == 1:
  var_parameter_count_of, 1, var_258_0_map_function, 1, LOCAL(1),
  // parameter_count_of(map_function) == 1:
  var_std__equal, 2, LOCAL(1), num_1, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_52, lambda_54, TAIL_CALL,
  POS(294, 13),
  POS(294, 13),
  POS(293, 11)
};

static TAB_NUM t_lambda_52[] = {
  0, // locals
  0, // parameters
  // from_to 1 m
  var_from_to, 4, num_1, var_289_1_m, lambda_53, var_next, TAIL_CALL,
  POS(295, 15)
};

static TAB_NUM t_lambda_53[] = {
  3, // locals
  1, // parameters
  LOCAL(3), // 296_3_j
  // self(i j))
  var_257_0_self, 2, var_292_3_i, LOCAL(3), 1, LOCAL(1),
  // map_function(self(i j))
  var_258_0_map_function, 1, LOCAL(1), 1, LOCAL(2),
  // reduce_function &acc map_function(self(i j))
  var_259_0_reduce_function, 2, var_290_1_acc, LOCAL(2), 1, var_290_1_acc,
  // next
  var_next, 0, TAIL_CALL,
  POS(297, 53),
  POS(297, 40),
  POS(297, 19),
  POS(298, 19)
};

static TAB_NUM t_lambda_54[] = {
  0, // locals
  0, // parameters
  // from_to 1 m
  var_from_to, 4, num_1, var_289_1_m, lambda_55, var_next, TAIL_CALL,
  POS(301, 15)
};

static TAB_NUM t_lambda_55[] = {
  3, // locals
  1, // parameters
  LOCAL(3), // 302_3_j
  // self(i j))
  var_257_0_self, 2, var_292_3_i, LOCAL(3), 1, LOCAL(1),
  // map_function(i j self(i j))
  var_258_0_map_function, 3, var_292_3_i, LOCAL(3), LOCAL(1), 1, LOCAL(2),
  // reduce_function &acc map_function(i j self(i j))
  var_259_0_reduce_function, 2, var_290_1_acc, LOCAL(2), 1, var_290_1_acc,
  // next
  var_next, 0, TAIL_CALL,
  POS(303, 57),
  POS(303, 40),
  POS(303, 19),
  POS(304, 19)
};

static TAB_NUM t_lambda_56[] = {
  0, // locals
  0, // parameters
  //  acc
  LET, 1, var_290_1_acc, TAIL_CALL,
  POS(306, 11)
};

static TAB_NUM t_lambda_57[] = {
  3, // locals
  0, // parameters
  // $n length_of(self 1)
  var_length_of, 2, var_257_0_self, num_1, 1, LOCAL(3),
  // $m length_of(self 2)
  var_length_of, 2, var_257_0_self, num_2, 1, var_309_1_m,
  // $k length_of(self 3)
  var_length_of, 2, var_257_0_self, num_3, 1, var_310_1_k,
  // self(1 1 1)))
  var_257_0_self, 3, num_1, num_1, num_1, 1, LOCAL(1),
  // map_function(self(1 1 1)))
  var_258_0_map_function, 1, LOCAL(1), 1, LOCAL(2),
  // $acc neutral_element_of(map_function(self(1 1 1)))
  var_neutral_element_of, 1, LOCAL(2), 1, var_311_1_acc,
  // from_to 1 n
  var_from_to, 4, num_1, LOCAL(3), lambda_58, lambda_64, TAIL_CALL,
  POS(308, 7),
  POS(309, 7),
  POS(310, 7),
  POS(311, 44),
  POS(311, 31),
  POS(311, 7),
  POS(312, 7)
};

static TAB_NUM t_lambda_58[] = {
  0, // locals
  1, // parameters
  var_313_3_i,
  // from_to 1 m
  var_from_to, 4, num_1, var_309_1_m, lambda_59, var_next, TAIL_CALL,
  POS(314, 11)
};

static TAB_NUM t_lambda_59[] = {
  2, // locals
  1, // parameters
  var_315_3_j,
  // parameter_count_of(map_function) == 1:
  var_parameter_count_of, 1, var_258_0_map_function, 1, LOCAL(1),
  // parameter_count_of(map_function) == 1:
  var_std__equal, 2, LOCAL(1), num_1, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_60, lambda_62, TAIL_CALL,
  POS(317, 17),
  POS(317, 17),
  POS(316, 15)
};

static TAB_NUM t_lambda_60[] = {
  0, // locals
  0, // parameters
  // from_to 1 k
  var_from_to, 4, num_1, var_310_1_k, lambda_61, var_next, TAIL_CALL,
  POS(318, 19)
};

static TAB_NUM t_lambda_61[] = {
  3, // locals
  1, // parameters
  LOCAL(3), // 319_3_k
  // self(i j k))
  var_257_0_self, 3, var_313_3_i, var_315_3_j, LOCAL(3), 1, LOCAL(1),
  // map_function(self(i j k))
  var_258_0_map_function, 1, LOCAL(1), 1, LOCAL(2),
  // reduce_function &acc map_function(self(i j k))
  var_259_0_reduce_function, 2, var_311_1_acc, LOCAL(2), 1, var_311_1_acc,
  // next
  var_next, 0, TAIL_CALL,
  POS(320, 57),
  POS(320, 44),
  POS(320, 23),
  POS(321, 23)
};

static TAB_NUM t_lambda_62[] = {
  0, // locals
  0, // parameters
  // from_to 1 k
  var_from_to, 4, num_1, var_310_1_k, lambda_63, var_next, TAIL_CALL,
  POS(324, 19)
};

static TAB_NUM t_lambda_63[] = {
  3, // locals
  1, // parameters
  LOCAL(3), // 325_3_k
  // self(i j k))
  var_257_0_self, 3, var_313_3_i, var_315_3_j, LOCAL(3), 1, LOCAL(1),
  // map_function(i j k self(i j k))
  var_258_0_map_function, 4, var_313_3_i, var_315_3_j, LOCAL(3), LOCAL(1), 1, LOCAL(2),
  // reduce_function &acc map_function(i j k self(i j k))
  var_259_0_reduce_function, 2, var_311_1_acc, LOCAL(2), 1, var_311_1_acc,
  // next
  var_next, 0, TAIL_CALL,
  POS(326, 63),
  POS(326, 44),
  POS(326, 23),
  POS(327, 23)
};

static TAB_NUM t_lambda_64[] = {
  0, // locals
  0, // parameters
  //  acc
  LET, 1, var_311_1_acc, TAIL_CALL,
  POS(330, 11)
};

static TAB_NUM t_lambda_65[] = {
  0, // locals
  0, // parameters
  // Error "
  var_Error, 1, str_map_reduce_is_no, TAIL_CALL,
  POS(332, 7)
};

static TAB_NUM t_func_std_types__generic_array___serialize[] = {
  6, // locals
  -2, // parameters
  MANDATORY_PARAMETER, var_354_0_self,
  var_undefined, var_355_0_indent,
  // $n dimension_count_of(self)
  var_dimension_count_of, 1, var_354_0_self, 1, LOCAL(5),
  // 1..n : (i) -> append(" " length_of(self i).to_string))
  var_std__value_range, 2, num_1, LOCAL(5), 1, LOCAL(1),
  // $dimensions map_reduce(1..n : (i) -> append(" " length_of(self i).to_string))
  var_map_reduce, 2, LOCAL(1), lambda_66, 1, LOCAL(6),
  // is_defined
  var_is_defined, 1, var_355_0_indent, 1, LOCAL(1),
  // $indentation
  var_if, 3, LOCAL(1), lambda_67, lambda_68, 1, var_359_1_indentation,
  // is_defined
  var_is_defined, 1, var_355_0_indent, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_69, lambda_70, 1, LOCAL(2),
  // serialization_tag_of(self)
  var_serialization_tag_of, 1, var_354_0_self, 1, LOCAL(3),
  // map_reduce(self: (item) -> append(indentation item.to_string "@nl;"))
  var_map_reduce, 2, var_354_0_self, lambda_map_reduceself, 1, LOCAL(4),
  // append
  var_append, 5, LOCAL(2), LOCAL(3), LOCAL(6), string_3, LOCAL(4), TAIL_CALL,
  POS(357, 3),
  POS(358, 26),
  POS(358, 3),
  POS(361, 14),
  POS(359, 3),
  POS(366, 14),
  POS(365, 5),
  POS(369, 5),
  POS(372, 5),
  POS(364, 3)
};

static TAB_NUM t_lambda_66[] = {
  4, // locals
  1, // parameters
  LOCAL(4), // 358_31_i
  // length_of(self i).to_string))
  var_length_of, 2, var_354_0_self, LOCAL(4), 1, LOCAL(1),
  // to_string))
  var_to_string, 1, LOCAL(1), 1, LOCAL(2),
  // append(" " length_of(self i).to_string))
  var_append, 2, string_1, LOCAL(2), 1, LOCAL(3),
  // -> append(" " length_of(self i).to_string))
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(358, 51),
  POS(358, 69),
  POS(358, 40),
  POS(358, 37)
};

static TAB_NUM t_lambda_67[] = {
  2, // locals
  0, // parameters
  // indent+2)
  var_std__plus, 2, var_355_0_indent, num_2, 1, LOCAL(1),
  // tabs_and_spaces(indent+2)
  var_tabs_and_spaces, 1, LOCAL(1), 1, LOCAL(2),
  //  tabs_and_spaces(indent+2)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(362, 26),
  POS(362, 10),
  POS(362, 9)
};

static TAB_NUM t_lambda_68[] = {
  0, // locals
  0, // parameters
  //  ""
  LET, 1, string_2, TAIL_CALL,
  POS(363, 9)
};

static TAB_NUM t_lambda_69[] = {
  1, // locals
  0, // parameters
  // tabs_and_spaces(indent)
  var_tabs_and_spaces, 1, var_355_0_indent, 1, LOCAL(1),
  //  tabs_and_spaces(indent)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(367, 10),
  POS(367, 9)
};

static TAB_NUM t_lambda_70[] = {
  0, // locals
  0, // parameters
  //  ""
  LET, 1, string_2, TAIL_CALL,
  POS(368, 9)
};

static TAB_NUM t_lambda_map_reduceself[] = {
  3, // locals
  1, // parameters
  LOCAL(3), // 372_18_item
  // to_string "@nl;"))
  var_to_string, 1, LOCAL(3), 1, LOCAL(1),
  // append(indentation item.to_string "@nl;"))
  var_append, 3, var_359_1_indentation, LOCAL(1), string_3, 1, LOCAL(2),
  // -> append(indentation item.to_string "@nl;"))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(372, 56),
  POS(372, 32),
  POS(372, 29)
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
  {FLT_POSITIVE_INT64, 0, {.value = 3}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_19}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_20}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_21}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_22}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_23}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_24}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_25}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_26}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_27}},
  {FLT_STRING_8, 68, {.str_8 = "<map> is not yet defined for arrays with more than three dimensions\012"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__generic_array___reduce}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_28}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_reduce}},
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
  {FLT_STRING_8, 71, {.str_8 = "<reduce> is not yet defined for arrays with more than three dimensions\012"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__generic_array___map_reduce}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_41}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_42}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_43}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_44}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_45}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_46}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_47}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_48}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_49}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_50}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_51}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_52}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_53}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_54}},
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
  {FLT_STRING_8, 75, {.str_8 = "<map_reduce> is not yet defined for arrays with more than three dimensions\012"}},
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
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_66}},
  {FLT_STRING_8, 1, {.str_8 = " "}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_67}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_68}},
  {FLT_STRING_8, 0, {.str_8 = ""}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_69}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_70}},
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
    {.position = POS(25, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "object\000std_types", std_types__object__attributes,
    {.position = POS(27, 1)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "is_an_array\000", NULL,
    {.position = POS(27, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "false\000", NULL,
    {.position = POS(27, 32)}
  },
  {
    FOT_UNKNOWN, 0, 6,
    "generic_array\000std_types", std_types__generic_array__attributes,
    {.position = POS(33, 1)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "true\000", NULL,
    {.position = POS(33, 39)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "for_each\000", NULL,
    {.position = POS(39, 27)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "59_0_finally\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "next\000", NULL,
    {.position = POS(59, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "break\000", NULL,
    {.position = POS(64, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "from\000basic_loops", NULL,
    {.position = POS(65, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "to\000basic_loops", NULL,
    {.position = POS(66, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "self\000basic_loops", NULL,
    {.position = POS(67, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "body\000basic_loops", NULL,
    {.position = POS(68, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "finally\000basic_loops", NULL,
    {.position = POS(69, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "tuple\000", NULL,
    {.position = POS(62, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "length_of\000", NULL,
    {.position = POS(72, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "less\000std", NULL,
    {.position = POS(79, 28)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not\000std", NULL,
    {.position = POS(79, 28)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if\000", NULL,
    {.position = POS(78, 5)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "saved_context_of\000basic_loops", NULL,
    {.position = POS(95, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "parameter_count_of\000", NULL,
    {.position = POS(104, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "equal\000std", NULL,
    {.position = POS(104, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000std", NULL,
    {.position = POS(106, 28)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "map\000", NULL,
    {.position = POS(115, 27)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "123_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "124_0_map_function\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "dimension_count_of\000", NULL,
    {.position = POS(126, 6)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "129_1_new_array\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "new\000", NULL,
    {.position = POS(129, 18)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "from_to\000", NULL,
    {.position = POS(132, 11)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "145_1_m\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "146_1_new_array\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "148_3_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "165_1_m\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "166_1_k\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "167_1_new_array\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "169_3_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "171_3_j\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "Error\000", NULL,
    {.position = POS(188, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "case\000", NULL,
    {.position = POS(127, 3)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "reduce\000", NULL,
    {.position = POS(191, 27)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "199_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "200_0_reduce_function\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "append\000", NULL,
    {.position = POS(200, 23)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "206_10_s\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "206_12_e\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "shift_right\000std", NULL,
    {.position = POS(209, 17)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "217_1_m\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "218_1_acc\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "neutral_element_of\000", NULL,
    {.position = POS(218, 12)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "220_3_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "229_1_m\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "230_1_k\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "231_1_acc\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "233_3_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "235_3_j\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "map_reduce\000", NULL,
    {.position = POS(247, 27)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "257_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "258_0_map_function\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "259_0_reduce_function\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "269_3_s\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "269_5_e\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "265_1_map_reduce\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "278_3_s\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "278_5_e\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "289_1_m\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "290_1_acc\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "292_3_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "309_1_m\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "310_1_k\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "311_1_acc\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "313_3_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "315_3_j\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 1,
    "array\000std_types", std_types__array__attributes,
    {.position = POS(338, 1)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "serialization_tag_of\000", NULL,
    {.position = POS(338, 19)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "boolean_array\000std_types", std_types__boolean_array__attributes,
    {.position = POS(339, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "character_array\000std_types", std_types__character_array__attributes,
    {.position = POS(340, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "int8_array\000std_types", std_types__int8_array__attributes,
    {.position = POS(341, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "uint8_array\000std_types", std_types__uint8_array__attributes,
    {.position = POS(342, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "int16_array\000std_types", std_types__int16_array__attributes,
    {.position = POS(343, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "uint16_array\000std_types", std_types__uint16_array__attributes,
    {.position = POS(344, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "int32_array\000std_types", std_types__int32_array__attributes,
    {.position = POS(345, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "uint32_array\000std_types", std_types__uint32_array__attributes,
    {.position = POS(346, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "int64_array\000std_types", std_types__int64_array__attributes,
    {.position = POS(347, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "uint64_array\000std_types", std_types__uint64_array__attributes,
    {.position = POS(348, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "float32_array\000std_types", std_types__float32_array__attributes,
    {.position = POS(349, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "float64_array\000std_types", std_types__float64_array__attributes,
    {.position = POS(350, 1)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "serialize\000", NULL,
    {.position = POS(352, 27)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "354_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "355_0_indent\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "undefined\000", NULL,
    {.position = POS(355, 14)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "value_range\000std", NULL,
    {.position = POS(358, 26)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "to_string\000", NULL,
    {.position = POS(358, 69)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_defined\000", NULL,
    {.position = POS(361, 14)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "tabs_and_spaces\000", NULL,
    {.position = POS(362, 10)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "359_1_indentation\000", NULL
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
  104, // number of constants
  98, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  constants_table,
  variables_table,
};
