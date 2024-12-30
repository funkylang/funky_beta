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
  lambda_3 = -7,
  num_2 = -8,
  lambda_4 = -9,
  lambda_next = -10,
  lambda_5 = -11,
  lambda_2_next = -12,
  func_std_types__generic_array___map = -13,
  lambda_6 = -14,
  lambda_7 = -15,
  lambda_8 = -16,
  lambda_9 = -17,
  lambda_10 = -18,
  lambda_11 = -19,
  lambda_12 = -20,
  lambda_13 = -21,
  lambda_14 = -22,
  lambda_15 = -23,
  lambda_16 = -24,
  lambda_17 = -25,
  lambda_18 = -26,
  lambda_19 = -27,
  num_3 = -28,
  lambda_20 = -29,
  lambda_21 = -30,
  lambda_22 = -31,
  lambda_23 = -32,
  lambda_24 = -33,
  lambda_25 = -34,
  lambda_26 = -35,
  lambda_27 = -36,
  lambda_28 = -37,
  str_map_is_not_yet_d = -38,
  func_std_types__generic_array___reduce = -39,
  lambda_29 = -40,
  func_reduce = -41,
  lambda_30 = -42,
  lambda_31 = -43,
  lambda_32 = -44,
  lambda_33 = -45,
  lambda_34 = -46,
  lambda_35 = -47,
  lambda_36 = -48,
  lambda_37 = -49,
  lambda_38 = -50,
  lambda_39 = -51,
  lambda_40 = -52,
  lambda_41 = -53,
  str_reduce_is_not_ye = -54,
  func_std_types__generic_array___map_reduce = -55,
  lambda_42 = -56,
  lambda_43 = -57,
  lambda_44 = -58,
  lambda_45 = -59,
  lambda_46 = -60,
  lambda_47 = -61,
  lambda_48 = -62,
  lambda_49 = -63,
  lambda_50 = -64,
  lambda_51 = -65,
  lambda_52 = -66,
  lambda_53 = -67,
  lambda_54 = -68,
  lambda_55 = -69,
  lambda_56 = -70,
  lambda_57 = -71,
  lambda_58 = -72,
  lambda_59 = -73,
  lambda_60 = -74,
  lambda_61 = -75,
  lambda_62 = -76,
  lambda_63 = -77,
  lambda_64 = -78,
  lambda_65 = -79,
  lambda_66 = -80,
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
  lambda_67 = -96,
  string_1 = -97,
  lambda_68 = -98,
  lambda_69 = -99,
  string_2 = -100,
  lambda_70 = -101,
  lambda_71 = -102,
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
  var_107_5_finally, // dynamic
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
  var_basic_types__break_function, // extern
  var_basic_loops__saved_context_of, // extern polymorphic
  var_new, // extern
  var_parameter_count_of, // extern
  var_std__equal, // extern
  var_std__plus, // extern
  var_map, // extern polymorphic
  var_171_5_self, // dynamic
  var_172_5_map_function, // dynamic
  var_dimension_count_of, // extern
  var_177_8_new_array, // dynamic
  var_create_empty_array, // extern
  var_from_to, // extern
  var_193_8_m, // dynamic
  var_194_8_new_array, // dynamic
  var_196_12_i, // dynamic
  var_213_8_m, // dynamic
  var_214_8_k, // dynamic
  var_215_8_new_array, // dynamic
  var_217_12_i, // dynamic
  var_219_16_j, // dynamic
  var_Error, // extern
  var_case, // extern
  var_reduce, // extern polymorphic
  var_247_5_self, // dynamic
  var_248_5_reduce_function, // dynamic
  var_append, // extern
  var_254_17_s, // dynamic
  var_254_19_e, // dynamic
  var_std__shift_right, // extern
  var_265_8_m, // dynamic
  var_266_8_acc, // dynamic
  var_neutral_element_of, // extern
  var_268_12_i, // dynamic
  var_277_8_m, // dynamic
  var_278_8_k, // dynamic
  var_279_8_acc, // dynamic
  var_281_12_i, // dynamic
  var_283_16_j, // dynamic
  var_map_reduce, // extern polymorphic
  var_305_5_self, // dynamic
  var_306_5_map_function, // dynamic
  var_307_5_reduce_function, // dynamic
  var_317_16_s, // dynamic
  var_317_18_e, // dynamic
  var_313_8_map_reduce, // dynamic
  var_326_16_s, // dynamic
  var_326_18_e, // dynamic
  var_337_8_m, // dynamic
  var_338_8_acc, // dynamic
  var_340_12_i, // dynamic
  var_357_8_m, // dynamic
  var_358_8_k, // dynamic
  var_359_8_acc, // dynamic
  var_361_12_i, // dynamic
  var_363_16_j, // dynamic
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
  var_402_5_self, // dynamic
  var_403_5_indent, // dynamic
  var_undefined, // extern
  var_std__value_range, // extern
  var_to_string, // extern
  var_is_defined, // extern
  var_tabs_and_spaces, // extern
  var_407_4_indentation, // dynamic
  var__END
};


static TAB_NUM t_func_std_types__generic_array___for_each[] = {
  5, // locals
  -3, // parameters
  MANDATORY_PARAMETER, LOCAL(3), // 105_5_self
  MANDATORY_PARAMETER, LOCAL(4), // 106_5_body
  var_next, var_107_5_finally,
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
  LET, 1, var_107_5_finally, 1, var_basic_loops__finally,
  // new !break basic_types::break_function: (myself^)
  var_new, 2, var_basic_types__break_function, lambda_3, 1, var_break,
  // break.basic_loops::saved_context_of saved_context
  LET, -1, var_break, var_basic_loops__saved_context_of, LOCAL(5), var_break,
  // parameter_count_of(body) == 2:
  var_parameter_count_of, 1, LOCAL(4), 1, LOCAL(1),
  // parameter_count_of(body) == 2:
  var_std__equal, 2, LOCAL(1), num_2, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_4, lambda_5, TAIL_CALL,
  POS(109, 3),
  POS(119, 3),
  POS(120, 3),
  POS(121, 3),
  POS(122, 3),
  POS(123, 3),
  POS(141, 3),
  POS(149, 4),
  POS(152, 5),
  POS(152, 5),
  POS(151, 3)
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
  POS(127, 28),
  POS(127, 28),
  POS(126, 5)
};

static TAB_NUM t_lambda_1[] = {
  1, // locals
  0, // parameters
  // basic_loops::self(basic_loops::from)
  var_basic_loops__self, 1, var_basic_loops__from, 1, LOCAL(1),
  // basic_loops::body basic_loops::self(basic_loops::from)
  var_basic_loops__body, 1, LOCAL(1), TAIL_CALL,
  POS(129, 27),
  POS(129, 9)
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
  POS(135, 28),
  POS(135, 28),
  POS(134, 5)
};

static TAB_NUM t_lambda_2[] = {
  1, // locals
  0, // parameters
  // basic_loops::self(basic_loops::from)
  var_basic_loops__self, 1, var_basic_loops__from, 1, LOCAL(1),
  // basic_loops::body basic_loops::from basic_loops::self(basic_loops::from)
  var_basic_loops__body, 2, var_basic_loops__from, LOCAL(1), TAIL_CALL,
  POS(137, 45),
  POS(137, 9)
};

static TAB_NUM t_lambda_3[] = {
  2, // locals
  -1, // parameters
  MYSELF_PARAMETER, LOCAL(2), // 141_44_myself
  // !finally basic_loops::finally
  LET, 1, var_basic_loops__finally, 1, var_107_5_finally,
  // basic_loops::saved_context_of(myself)
  var_basic_loops__saved_context_of, 1, LOCAL(2), 1, LOCAL(1),
  // basic_loops::saved_context_of(myself)
  LOCAL(1), 0, 7, var_next, var_break, var_basic_loops__from, var_basic_loops__to, var_basic_loops__self, var_basic_loops__body, var_basic_loops__finally,
  // finally
  var_107_5_finally, 0, TAIL_CALL,
  POS(142, 5),
  POS(143, 5),
  POS(143, 5),
  POS(147, 5)
};

static TAB_NUM t_lambda_4[] = {
  0, // locals
  0, // parameters
  // !next:
  LET, 1, lambda_next, 1, var_next,
  // iterate_2 # start the first iteration
  func_iterate_2, 0, TAIL_CALL,
  POS(153, 7),
  POS(156, 7)
};

static TAB_NUM t_lambda_next[] = {
  0, // locals
  0, // parameters
  // !basic_loops::from basic_loops::from+1 # increase the array index
  var_std__plus, 2, var_basic_loops__from, num_1, 1, var_basic_loops__from,
  // iterate_2 # start the next iteration
  func_iterate_2, 0, TAIL_CALL,
  POS(154, 9),
  POS(155, 9)
};

static TAB_NUM t_lambda_5[] = {
  0, // locals
  0, // parameters
  // !next:
  LET, 1, lambda_2_next, 1, var_next,
  // iterate_1 # start the first iteration
  func_iterate_1, 0, TAIL_CALL,
  POS(158, 7),
  POS(161, 7)
};

static TAB_NUM t_lambda_2_next[] = {
  0, // locals
  0, // parameters
  // !basic_loops::from basic_loops::from+1 # increase the array index
  var_std__plus, 2, var_basic_loops__from, num_1, 1, var_basic_loops__from,
  // iterate_1 # start the next iteration
  func_iterate_1, 0, TAIL_CALL,
  POS(159, 9),
  POS(160, 9)
};

static TAB_NUM t_func_std_types__generic_array___map[] = {
  1, // locals
  2, // parameters
  var_171_5_self,
  var_172_5_map_function,
  // $d dimension_count_of(self)
  var_dimension_count_of, 1, var_171_5_self, 1, LOCAL(1),
  // case d
  var_case, 8, LOCAL(1), num_1, lambda_6, num_2, lambda_13, num_3, lambda_20, lambda_28, TAIL_CALL,
  POS(174, 3),
  POS(175, 3)
};

static TAB_NUM t_lambda_6[] = {
  2, // locals
  0, // parameters
  // $new_array create_empty_array(self)
  var_create_empty_array, 1, var_171_5_self, 1, var_177_8_new_array,
  // parameter_count_of(map_function) == 1:
  var_parameter_count_of, 1, var_172_5_map_function, 1, LOCAL(1),
  // parameter_count_of(map_function) == 1:
  var_std__equal, 2, LOCAL(1), num_1, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_7, lambda_10, TAIL_CALL,
  POS(177, 7),
  POS(179, 9),
  POS(179, 9),
  POS(178, 7)
};

static TAB_NUM t_lambda_7[] = {
  1, // locals
  0, // parameters
  // length_of(self)
  var_length_of, 1, var_171_5_self, 1, LOCAL(1),
  // from_to 1 length_of(self)
  var_from_to, 4, num_1, LOCAL(1), lambda_8, lambda_9, TAIL_CALL,
  POS(180, 21),
  POS(180, 11)
};

static TAB_NUM t_lambda_8[] = {
  4, // locals
  1, // parameters
  LOCAL(4), // 181_16_i
  // self(i))
  var_171_5_self, 1, LOCAL(4), 1, LOCAL(1),
  // !new_array(i) map_function(self(i))
  var_172_5_map_function, 1, LOCAL(1), 1, LOCAL(3),
  // new_array(i) map_function(self(i))
  var_177_8_new_array, 2, LOCAL(4), LOCAL(3), 1, var_177_8_new_array,
  // next
  var_next, 0, TAIL_CALL,
  POS(182, 42),
  POS(182, 15),
  POS(182, 16),
  POS(183, 15)
};

static TAB_NUM t_lambda_9[] = {
  0, // locals
  0, // parameters
  //  new_array
  LET, 1, var_177_8_new_array, TAIL_CALL,
  POS(184, 15)
};

static TAB_NUM t_lambda_10[] = {
  1, // locals
  0, // parameters
  // length_of(self)
  var_length_of, 1, var_171_5_self, 1, LOCAL(1),
  // from_to 1 length_of(self)
  var_from_to, 4, num_1, LOCAL(1), lambda_11, lambda_12, TAIL_CALL,
  POS(186, 21),
  POS(186, 11)
};

static TAB_NUM t_lambda_11[] = {
  4, // locals
  1, // parameters
  LOCAL(4), // 187_16_i
  // self(i))
  var_171_5_self, 1, LOCAL(4), 1, LOCAL(1),
  // !new_array(i) map_function(i self(i))
  var_172_5_map_function, 2, LOCAL(4), LOCAL(1), 1, LOCAL(3),
  // new_array(i) map_function(i self(i))
  var_177_8_new_array, 2, LOCAL(4), LOCAL(3), 1, var_177_8_new_array,
  // next
  var_next, 0, TAIL_CALL,
  POS(188, 44),
  POS(188, 15),
  POS(188, 16),
  POS(189, 15)
};

static TAB_NUM t_lambda_12[] = {
  0, // locals
  0, // parameters
  //  new_array
  LET, 1, var_177_8_new_array, TAIL_CALL,
  POS(190, 15)
};

static TAB_NUM t_lambda_13[] = {
  1, // locals
  0, // parameters
  // $n length_of(self 1)
  var_length_of, 2, var_171_5_self, num_1, 1, LOCAL(1),
  // $m length_of(self 2)
  var_length_of, 2, var_171_5_self, num_2, 1, var_193_8_m,
  // $new_array create_empty_array(self)
  var_create_empty_array, 1, var_171_5_self, 1, var_194_8_new_array,
  // from_to 1 n
  var_from_to, 4, num_1, LOCAL(1), lambda_14, lambda_19, TAIL_CALL,
  POS(192, 7),
  POS(193, 7),
  POS(194, 7),
  POS(195, 7)
};

static TAB_NUM t_lambda_14[] = {
  2, // locals
  1, // parameters
  var_196_12_i,
  // parameter_count_of(map_function) == 1:
  var_parameter_count_of, 1, var_172_5_map_function, 1, LOCAL(1),
  // parameter_count_of(map_function) == 1:
  var_std__equal, 2, LOCAL(1), num_1, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_15, lambda_17, TAIL_CALL,
  POS(198, 13),
  POS(198, 13),
  POS(197, 11)
};

static TAB_NUM t_lambda_15[] = {
  0, // locals
  0, // parameters
  // from_to 1 m
  var_from_to, 4, num_1, var_193_8_m, lambda_16, var_next, TAIL_CALL,
  POS(199, 15)
};

static TAB_NUM t_lambda_16[] = {
  4, // locals
  1, // parameters
  LOCAL(4), // 200_20_j
  // self(i j))
  var_171_5_self, 2, var_196_12_i, LOCAL(4), 1, LOCAL(1),
  // !new_array(i j) map_function(self(i j))
  var_172_5_map_function, 1, LOCAL(1), 1, LOCAL(3),
  // new_array(i j) map_function(self(i j))
  var_194_8_new_array, 3, var_196_12_i, LOCAL(4), LOCAL(3), 1, var_194_8_new_array,
  // next
  var_next, 0, TAIL_CALL,
  POS(201, 48),
  POS(201, 19),
  POS(201, 20),
  POS(202, 19)
};

static TAB_NUM t_lambda_17[] = {
  0, // locals
  0, // parameters
  // from_to 1 m
  var_from_to, 4, num_1, var_193_8_m, lambda_18, var_next, TAIL_CALL,
  POS(205, 15)
};

static TAB_NUM t_lambda_18[] = {
  4, // locals
  1, // parameters
  LOCAL(4), // 206_20_j
  // self(i j))
  var_171_5_self, 2, var_196_12_i, LOCAL(4), 1, LOCAL(1),
  // !new_array(i j) map_function(i j self(i j))
  var_172_5_map_function, 3, var_196_12_i, LOCAL(4), LOCAL(1), 1, LOCAL(3),
  // new_array(i j) map_function(i j self(i j))
  var_194_8_new_array, 3, var_196_12_i, LOCAL(4), LOCAL(3), 1, var_194_8_new_array,
  // next
  var_next, 0, TAIL_CALL,
  POS(207, 52),
  POS(207, 19),
  POS(207, 20),
  POS(208, 19)
};

static TAB_NUM t_lambda_19[] = {
  0, // locals
  0, // parameters
  //  new_array
  LET, 1, var_194_8_new_array, TAIL_CALL,
  POS(210, 11)
};

static TAB_NUM t_lambda_20[] = {
  1, // locals
  0, // parameters
  // $n length_of(self 1)
  var_length_of, 2, var_171_5_self, num_1, 1, LOCAL(1),
  // $m length_of(self 2)
  var_length_of, 2, var_171_5_self, num_2, 1, var_213_8_m,
  // $k length_of(self 3)
  var_length_of, 2, var_171_5_self, num_3, 1, var_214_8_k,
  // $new_array create_empty_array(self)
  var_create_empty_array, 1, var_171_5_self, 1, var_215_8_new_array,
  // from_to 1 n
  var_from_to, 4, num_1, LOCAL(1), lambda_21, lambda_27, TAIL_CALL,
  POS(212, 7),
  POS(213, 7),
  POS(214, 7),
  POS(215, 7),
  POS(216, 7)
};

static TAB_NUM t_lambda_21[] = {
  0, // locals
  1, // parameters
  var_217_12_i,
  // from_to 1 m
  var_from_to, 4, num_1, var_213_8_m, lambda_22, var_next, TAIL_CALL,
  POS(218, 11)
};

static TAB_NUM t_lambda_22[] = {
  2, // locals
  1, // parameters
  var_219_16_j,
  // parameter_count_of(map_function) == 1:
  var_parameter_count_of, 1, var_172_5_map_function, 1, LOCAL(1),
  // parameter_count_of(map_function) == 1:
  var_std__equal, 2, LOCAL(1), num_1, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_23, lambda_25, TAIL_CALL,
  POS(221, 17),
  POS(221, 17),
  POS(220, 15)
};

static TAB_NUM t_lambda_23[] = {
  0, // locals
  0, // parameters
  // from_to 1 k
  var_from_to, 4, num_1, var_214_8_k, lambda_24, var_next, TAIL_CALL,
  POS(222, 19)
};

static TAB_NUM t_lambda_24[] = {
  4, // locals
  1, // parameters
  LOCAL(4), // 223_24_k
  // self(i j k))
  var_171_5_self, 3, var_217_12_i, var_219_16_j, LOCAL(4), 1, LOCAL(1),
  // !new_array(i j k) map_function(self(i j k))
  var_172_5_map_function, 1, LOCAL(1), 1, LOCAL(3),
  // new_array(i j k) map_function(self(i j k))
  var_215_8_new_array, 4, var_217_12_i, var_219_16_j, LOCAL(4), LOCAL(3), 1, var_215_8_new_array,
  // next
  var_next, 0, TAIL_CALL,
  POS(224, 54),
  POS(224, 23),
  POS(224, 24),
  POS(225, 23)
};

static TAB_NUM t_lambda_25[] = {
  0, // locals
  0, // parameters
  // from_to 1 k
  var_from_to, 4, num_1, var_214_8_k, lambda_26, var_next, TAIL_CALL,
  POS(228, 19)
};

static TAB_NUM t_lambda_26[] = {
  4, // locals
  1, // parameters
  LOCAL(4), // 229_24_k
  // self(i j k))
  var_171_5_self, 3, var_217_12_i, var_219_16_j, LOCAL(4), 1, LOCAL(1),
  // !new_array(i j k) map_function(i j k self(i j k))
  var_172_5_map_function, 4, var_217_12_i, var_219_16_j, LOCAL(4), LOCAL(1), 1, LOCAL(3),
  // new_array(i j k) map_function(i j k self(i j k))
  var_215_8_new_array, 4, var_217_12_i, var_219_16_j, LOCAL(4), LOCAL(3), 1, var_215_8_new_array,
  // next
  var_next, 0, TAIL_CALL,
  POS(230, 60),
  POS(230, 23),
  POS(230, 24),
  POS(231, 23)
};

static TAB_NUM t_lambda_27[] = {
  0, // locals
  0, // parameters
  //  new_array
  LET, 1, var_215_8_new_array, TAIL_CALL,
  POS(234, 11)
};

static TAB_NUM t_lambda_28[] = {
  0, // locals
  0, // parameters
  // Error "
  var_Error, 1, str_map_is_not_yet_d, TAIL_CALL,
  POS(236, 7)
};

static TAB_NUM t_func_std_types__generic_array___reduce[] = {
  2, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_247_5_self,
  var_append, var_248_5_reduce_function,
  var_undefined, LOCAL(1),
  // $d dimension_count_of(self)
  var_dimension_count_of, 1, var_247_5_self, 1, LOCAL(2),
  // case d
  var_case, 8, LOCAL(2), num_1, lambda_29, num_2, lambda_32, num_3, lambda_36, lambda_41, TAIL_CALL,
  POS(251, 3),
  POS(252, 3)
};

static TAB_NUM t_lambda_29[] = {
  1, // locals
  0, // parameters
  // length_of(self)
  var_length_of, 1, var_247_5_self, 1, LOCAL(1),
  // reduce 1 length_of(self)
  func_reduce, 2, num_1, LOCAL(1), TAIL_CALL,
  POS(262, 16),
  POS(262, 7)
};

static TAB_NUM t_func_reduce[] = {
  1, // locals
  2, // parameters
  var_254_17_s,
  var_254_19_e,
  // s < e:
  var_std__less, 2, var_254_17_s, var_254_19_e, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_30, lambda_31, TAIL_CALL,
  POS(256, 11),
  POS(255, 9)
};

static TAB_NUM t_lambda_30[] = {
  4, // locals
  0, // parameters
  // s+e) >> 1
  var_std__plus, 2, var_254_17_s, var_254_19_e, 1, LOCAL(1),
  // $m (s+e) >> 1
  var_std__shift_right, 2, LOCAL(1), num_1, 1, LOCAL(4),
  // reduce(s m)
  func_reduce, 2, var_254_17_s, LOCAL(4), 1, LOCAL(1),
  // m+1 e)
  var_std__plus, 2, LOCAL(4), num_1, 1, LOCAL(2),
  // reduce(m+1 e)
  func_reduce, 2, LOCAL(2), var_254_19_e, 1, LOCAL(3),
  // reduce_function
  var_248_5_reduce_function, 2, LOCAL(1), LOCAL(3), TAIL_CALL,
  POS(257, 17),
  POS(257, 13),
  POS(259, 15),
  POS(260, 22),
  POS(260, 15),
  POS(258, 13)
};

static TAB_NUM t_lambda_31[] = {
  1, // locals
  0, // parameters
  // self(s)
  var_247_5_self, 1, var_254_17_s, 1, LOCAL(1),
  //  self(s)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(261, 14),
  POS(261, 13)
};

static TAB_NUM t_lambda_32[] = {
  2, // locals
  0, // parameters
  // $n length_of(self 1)
  var_length_of, 2, var_247_5_self, num_1, 1, LOCAL(2),
  // $m length_of(self 2)
  var_length_of, 2, var_247_5_self, num_2, 1, var_265_8_m,
  // self(1 1))
  var_247_5_self, 2, num_1, num_1, 1, LOCAL(1),
  // $acc neutral_element_of(self(1 1))
  var_neutral_element_of, 1, LOCAL(1), 1, var_266_8_acc,
  // from_to 1 n
  var_from_to, 4, num_1, LOCAL(2), lambda_33, lambda_35, TAIL_CALL,
  POS(264, 7),
  POS(265, 7),
  POS(266, 31),
  POS(266, 7),
  POS(267, 7)
};

static TAB_NUM t_lambda_33[] = {
  0, // locals
  1, // parameters
  var_268_12_i,
  // from_to 1 m
  var_from_to, 4, num_1, var_265_8_m, lambda_34, var_next, TAIL_CALL,
  POS(269, 11)
};

static TAB_NUM t_lambda_34[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 270_16_j
  // self(i j)
  var_247_5_self, 2, var_268_12_i, LOCAL(2), 1, LOCAL(1),
  // reduce_function &acc self(i j)
  var_248_5_reduce_function, 2, var_266_8_acc, LOCAL(1), 1, var_266_8_acc,
  // next
  var_next, 0, TAIL_CALL,
  POS(271, 36),
  POS(271, 15),
  POS(272, 15)
};

static TAB_NUM t_lambda_35[] = {
  0, // locals
  0, // parameters
  //  acc
  LET, 1, var_266_8_acc, TAIL_CALL,
  POS(274, 11)
};

static TAB_NUM t_lambda_36[] = {
  2, // locals
  0, // parameters
  // $n length_of(self 1)
  var_length_of, 2, var_247_5_self, num_1, 1, LOCAL(2),
  // $m length_of(self 2)
  var_length_of, 2, var_247_5_self, num_2, 1, var_277_8_m,
  // $k length_of(self 3)
  var_length_of, 2, var_247_5_self, num_3, 1, var_278_8_k,
  // self(1 1 1))
  var_247_5_self, 3, num_1, num_1, num_1, 1, LOCAL(1),
  // $acc neutral_element_of(self(1 1 1))
  var_neutral_element_of, 1, LOCAL(1), 1, var_279_8_acc,
  // from_to 1 n
  var_from_to, 4, num_1, LOCAL(2), lambda_37, lambda_40, TAIL_CALL,
  POS(276, 7),
  POS(277, 7),
  POS(278, 7),
  POS(279, 31),
  POS(279, 7),
  POS(280, 7)
};

static TAB_NUM t_lambda_37[] = {
  0, // locals
  1, // parameters
  var_281_12_i,
  // from_to 1 m
  var_from_to, 4, num_1, var_277_8_m, lambda_38, var_next, TAIL_CALL,
  POS(282, 11)
};

static TAB_NUM t_lambda_38[] = {
  0, // locals
  1, // parameters
  var_283_16_j,
  // from_to 1 k
  var_from_to, 4, num_1, var_278_8_k, lambda_39, var_next, TAIL_CALL,
  POS(284, 15)
};

static TAB_NUM t_lambda_39[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 285_20_k
  // self(i j k)
  var_247_5_self, 3, var_281_12_i, var_283_16_j, LOCAL(2), 1, LOCAL(1),
  // reduce_function &acc self(i j k)
  var_248_5_reduce_function, 2, var_279_8_acc, LOCAL(1), 1, var_279_8_acc,
  // next
  var_next, 0, TAIL_CALL,
  POS(286, 40),
  POS(286, 19),
  POS(287, 19)
};

static TAB_NUM t_lambda_40[] = {
  0, // locals
  0, // parameters
  //  acc
  LET, 1, var_279_8_acc, TAIL_CALL,
  POS(290, 11)
};

static TAB_NUM t_lambda_41[] = {
  0, // locals
  0, // parameters
  // Error "
  var_Error, 1, str_reduce_is_not_ye, TAIL_CALL,
  POS(292, 7)
};

static TAB_NUM t_func_std_types__generic_array___map_reduce[] = {
  2, // locals
  -4, // parameters
  MANDATORY_PARAMETER, var_305_5_self,
  MANDATORY_PARAMETER, var_306_5_map_function,
  var_append, var_307_5_reduce_function,
  var_undefined, LOCAL(1),
  // $d dimension_count_of(self)
  var_dimension_count_of, 1, var_305_5_self, 1, LOCAL(2),
  // case d
  var_case, 8, LOCAL(2), num_1, lambda_42, num_2, lambda_51, num_3, lambda_58, lambda_66, TAIL_CALL,
  POS(310, 3),
  POS(311, 3)
};

static TAB_NUM t_lambda_42[] = {
  2, // locals
  0, // parameters
  // parameter_count_of(map_function) == 1
  var_parameter_count_of, 1, var_306_5_map_function, 1, LOCAL(1),
  // parameter_count_of(map_function) == 1
  var_std__equal, 2, LOCAL(1), num_1, 1, LOCAL(2),
  // $map_reduce
  var_if, 3, LOCAL(2), lambda_43, lambda_47, 1, var_313_8_map_reduce,
  // length_of(self)
  var_length_of, 1, var_305_5_self, 1, LOCAL(1),
  // map_reduce 1 length_of(self)
  var_313_8_map_reduce, 2, num_1, LOCAL(1), TAIL_CALL,
  POS(315, 11),
  POS(315, 11),
  POS(313, 7),
  POS(334, 20),
  POS(334, 7)
};

static TAB_NUM t_lambda_43[] = {
  0, // locals
  0, // parameters
  // 
  LET, 1, lambda_44, TAIL_CALL,
  POS(316, 13)
};

static TAB_NUM t_lambda_44[] = {
  1, // locals
  2, // parameters
  var_317_16_s,
  var_317_18_e,
  // s < e:
  var_std__less, 2, var_317_16_s, var_317_18_e, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_45, lambda_46, TAIL_CALL,
  POS(319, 17),
  POS(318, 15)
};

static TAB_NUM t_lambda_45[] = {
  4, // locals
  0, // parameters
  // s+e) >> 1
  var_std__plus, 2, var_317_16_s, var_317_18_e, 1, LOCAL(1),
  // $m (s+e) >> 1
  var_std__shift_right, 2, LOCAL(1), num_1, 1, LOCAL(4),
  // map_reduce(s m)
  var_313_8_map_reduce, 2, var_317_16_s, LOCAL(4), 1, LOCAL(1),
  // m+1 e)
  var_std__plus, 2, LOCAL(4), num_1, 1, LOCAL(2),
  // map_reduce(m+1 e)
  var_313_8_map_reduce, 2, LOCAL(2), var_317_18_e, 1, LOCAL(3),
  // reduce_function
  var_307_5_reduce_function, 2, LOCAL(1), LOCAL(3), TAIL_CALL,
  POS(320, 23),
  POS(320, 19),
  POS(322, 21),
  POS(323, 32),
  POS(323, 21),
  POS(321, 19)
};

static TAB_NUM t_lambda_46[] = {
  2, // locals
  0, // parameters
  // self(s))
  var_305_5_self, 1, var_317_16_s, 1, LOCAL(1),
  // map_function(self(s))
  var_306_5_map_function, 1, LOCAL(1), 1, LOCAL(2),
  //  map_function(self(s))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(324, 33),
  POS(324, 20),
  POS(324, 19)
};

static TAB_NUM t_lambda_47[] = {
  0, // locals
  0, // parameters
  // 
  LET, 1, lambda_48, TAIL_CALL,
  POS(325, 13)
};

static TAB_NUM t_lambda_48[] = {
  1, // locals
  2, // parameters
  var_326_16_s,
  var_326_18_e,
  // s < e:
  var_std__less, 2, var_326_16_s, var_326_18_e, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_49, lambda_50, TAIL_CALL,
  POS(328, 17),
  POS(327, 15)
};

static TAB_NUM t_lambda_49[] = {
  4, // locals
  0, // parameters
  // s+e) >> 1
  var_std__plus, 2, var_326_16_s, var_326_18_e, 1, LOCAL(1),
  // $m (s+e) >> 1
  var_std__shift_right, 2, LOCAL(1), num_1, 1, LOCAL(4),
  // map_reduce(s m)
  var_313_8_map_reduce, 2, var_326_16_s, LOCAL(4), 1, LOCAL(1),
  // m+1 e)
  var_std__plus, 2, LOCAL(4), num_1, 1, LOCAL(2),
  // map_reduce(m+1 e)
  var_313_8_map_reduce, 2, LOCAL(2), var_326_18_e, 1, LOCAL(3),
  // reduce_function
  var_307_5_reduce_function, 2, LOCAL(1), LOCAL(3), TAIL_CALL,
  POS(329, 23),
  POS(329, 19),
  POS(331, 21),
  POS(332, 32),
  POS(332, 21),
  POS(330, 19)
};

static TAB_NUM t_lambda_50[] = {
  2, // locals
  0, // parameters
  // self(s))
  var_305_5_self, 1, var_326_16_s, 1, LOCAL(1),
  // map_function(s self(s))
  var_306_5_map_function, 2, var_326_16_s, LOCAL(1), 1, LOCAL(2),
  //  map_function(s self(s))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(333, 35),
  POS(333, 20),
  POS(333, 19)
};

static TAB_NUM t_lambda_51[] = {
  3, // locals
  0, // parameters
  // $n length_of(self 1)
  var_length_of, 2, var_305_5_self, num_1, 1, LOCAL(3),
  // $m length_of(self 2)
  var_length_of, 2, var_305_5_self, num_2, 1, var_337_8_m,
  // self(1 1)))
  var_305_5_self, 2, num_1, num_1, 1, LOCAL(1),
  // map_function(self(1 1)))
  var_306_5_map_function, 1, LOCAL(1), 1, LOCAL(2),
  // $acc neutral_element_of(map_function(self(1 1)))
  var_neutral_element_of, 1, LOCAL(2), 1, var_338_8_acc,
  // from_to 1 n
  var_from_to, 4, num_1, LOCAL(3), lambda_52, lambda_57, TAIL_CALL,
  POS(336, 7),
  POS(337, 7),
  POS(338, 44),
  POS(338, 31),
  POS(338, 7),
  POS(339, 7)
};

static TAB_NUM t_lambda_52[] = {
  2, // locals
  1, // parameters
  var_340_12_i,
  // parameter_count_of(map_function) == 1:
  var_parameter_count_of, 1, var_306_5_map_function, 1, LOCAL(1),
  // parameter_count_of(map_function) == 1:
  var_std__equal, 2, LOCAL(1), num_1, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_53, lambda_55, TAIL_CALL,
  POS(342, 13),
  POS(342, 13),
  POS(341, 11)
};

static TAB_NUM t_lambda_53[] = {
  0, // locals
  0, // parameters
  // from_to 1 m
  var_from_to, 4, num_1, var_337_8_m, lambda_54, var_next, TAIL_CALL,
  POS(343, 15)
};

static TAB_NUM t_lambda_54[] = {
  3, // locals
  1, // parameters
  LOCAL(3), // 344_20_j
  // self(i j))
  var_305_5_self, 2, var_340_12_i, LOCAL(3), 1, LOCAL(1),
  // map_function(self(i j))
  var_306_5_map_function, 1, LOCAL(1), 1, LOCAL(2),
  // reduce_function &acc map_function(self(i j))
  var_307_5_reduce_function, 2, var_338_8_acc, LOCAL(2), 1, var_338_8_acc,
  // next
  var_next, 0, TAIL_CALL,
  POS(345, 53),
  POS(345, 40),
  POS(345, 19),
  POS(346, 19)
};

static TAB_NUM t_lambda_55[] = {
  0, // locals
  0, // parameters
  // from_to 1 m
  var_from_to, 4, num_1, var_337_8_m, lambda_56, var_next, TAIL_CALL,
  POS(349, 15)
};

static TAB_NUM t_lambda_56[] = {
  3, // locals
  1, // parameters
  LOCAL(3), // 350_20_j
  // self(i j))
  var_305_5_self, 2, var_340_12_i, LOCAL(3), 1, LOCAL(1),
  // map_function(i j self(i j))
  var_306_5_map_function, 3, var_340_12_i, LOCAL(3), LOCAL(1), 1, LOCAL(2),
  // reduce_function &acc map_function(i j self(i j))
  var_307_5_reduce_function, 2, var_338_8_acc, LOCAL(2), 1, var_338_8_acc,
  // next
  var_next, 0, TAIL_CALL,
  POS(351, 57),
  POS(351, 40),
  POS(351, 19),
  POS(352, 19)
};

static TAB_NUM t_lambda_57[] = {
  0, // locals
  0, // parameters
  //  acc
  LET, 1, var_338_8_acc, TAIL_CALL,
  POS(354, 11)
};

static TAB_NUM t_lambda_58[] = {
  3, // locals
  0, // parameters
  // $n length_of(self 1)
  var_length_of, 2, var_305_5_self, num_1, 1, LOCAL(3),
  // $m length_of(self 2)
  var_length_of, 2, var_305_5_self, num_2, 1, var_357_8_m,
  // $k length_of(self 3)
  var_length_of, 2, var_305_5_self, num_3, 1, var_358_8_k,
  // self(1 1 1)))
  var_305_5_self, 3, num_1, num_1, num_1, 1, LOCAL(1),
  // map_function(self(1 1 1)))
  var_306_5_map_function, 1, LOCAL(1), 1, LOCAL(2),
  // $acc neutral_element_of(map_function(self(1 1 1)))
  var_neutral_element_of, 1, LOCAL(2), 1, var_359_8_acc,
  // from_to 1 n
  var_from_to, 4, num_1, LOCAL(3), lambda_59, lambda_65, TAIL_CALL,
  POS(356, 7),
  POS(357, 7),
  POS(358, 7),
  POS(359, 44),
  POS(359, 31),
  POS(359, 7),
  POS(360, 7)
};

static TAB_NUM t_lambda_59[] = {
  0, // locals
  1, // parameters
  var_361_12_i,
  // from_to 1 m
  var_from_to, 4, num_1, var_357_8_m, lambda_60, var_next, TAIL_CALL,
  POS(362, 11)
};

static TAB_NUM t_lambda_60[] = {
  2, // locals
  1, // parameters
  var_363_16_j,
  // parameter_count_of(map_function) == 1:
  var_parameter_count_of, 1, var_306_5_map_function, 1, LOCAL(1),
  // parameter_count_of(map_function) == 1:
  var_std__equal, 2, LOCAL(1), num_1, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_61, lambda_63, TAIL_CALL,
  POS(365, 17),
  POS(365, 17),
  POS(364, 15)
};

static TAB_NUM t_lambda_61[] = {
  0, // locals
  0, // parameters
  // from_to 1 k
  var_from_to, 4, num_1, var_358_8_k, lambda_62, var_next, TAIL_CALL,
  POS(366, 19)
};

static TAB_NUM t_lambda_62[] = {
  3, // locals
  1, // parameters
  LOCAL(3), // 367_24_k
  // self(i j k))
  var_305_5_self, 3, var_361_12_i, var_363_16_j, LOCAL(3), 1, LOCAL(1),
  // map_function(self(i j k))
  var_306_5_map_function, 1, LOCAL(1), 1, LOCAL(2),
  // reduce_function &acc map_function(self(i j k))
  var_307_5_reduce_function, 2, var_359_8_acc, LOCAL(2), 1, var_359_8_acc,
  // next
  var_next, 0, TAIL_CALL,
  POS(368, 57),
  POS(368, 44),
  POS(368, 23),
  POS(369, 23)
};

static TAB_NUM t_lambda_63[] = {
  0, // locals
  0, // parameters
  // from_to 1 k
  var_from_to, 4, num_1, var_358_8_k, lambda_64, var_next, TAIL_CALL,
  POS(372, 19)
};

static TAB_NUM t_lambda_64[] = {
  3, // locals
  1, // parameters
  LOCAL(3), // 373_24_k
  // self(i j k))
  var_305_5_self, 3, var_361_12_i, var_363_16_j, LOCAL(3), 1, LOCAL(1),
  // map_function(i j k self(i j k))
  var_306_5_map_function, 4, var_361_12_i, var_363_16_j, LOCAL(3), LOCAL(1), 1, LOCAL(2),
  // reduce_function &acc map_function(i j k self(i j k))
  var_307_5_reduce_function, 2, var_359_8_acc, LOCAL(2), 1, var_359_8_acc,
  // next
  var_next, 0, TAIL_CALL,
  POS(374, 63),
  POS(374, 44),
  POS(374, 23),
  POS(375, 23)
};

static TAB_NUM t_lambda_65[] = {
  0, // locals
  0, // parameters
  //  acc
  LET, 1, var_359_8_acc, TAIL_CALL,
  POS(378, 11)
};

static TAB_NUM t_lambda_66[] = {
  0, // locals
  0, // parameters
  // Error "
  var_Error, 1, str_map_reduce_is_no, TAIL_CALL,
  POS(380, 7)
};

static TAB_NUM t_func_std_types__generic_array___serialize[] = {
  6, // locals
  -2, // parameters
  MANDATORY_PARAMETER, var_402_5_self,
  var_undefined, var_403_5_indent,
  // $n dimension_count_of(self)
  var_dimension_count_of, 1, var_402_5_self, 1, LOCAL(5),
  // 1..n : (i) -> append(" " length_of(self i).to_string))
  var_std__value_range, 2, num_1, LOCAL(5), 1, LOCAL(1),
  // $dimensions map_reduce(1..n : (i) -> append(" " length_of(self i).to_string))
  var_map_reduce, 2, LOCAL(1), lambda_67, 1, LOCAL(6),
  // is_defined
  var_is_defined, 1, var_403_5_indent, 1, LOCAL(1),
  // $indentation
  var_if, 3, LOCAL(1), lambda_68, lambda_69, 1, var_407_4_indentation,
  // is_defined
  var_is_defined, 1, var_403_5_indent, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_70, lambda_71, 1, LOCAL(2),
  // serialization_tag_of(self)
  var_serialization_tag_of, 1, var_402_5_self, 1, LOCAL(3),
  // map_reduce(self: (item) -> append(indentation item.to_string "@nl;"))
  var_map_reduce, 2, var_402_5_self, lambda_map_reduceself, 1, LOCAL(4),
  // append
  var_append, 5, LOCAL(2), LOCAL(3), LOCAL(6), string_3, LOCAL(4), TAIL_CALL,
  POS(405, 3),
  POS(406, 26),
  POS(406, 3),
  POS(409, 14),
  POS(407, 3),
  POS(414, 14),
  POS(413, 5),
  POS(417, 5),
  POS(420, 5),
  POS(412, 3)
};

static TAB_NUM t_lambda_67[] = {
  4, // locals
  1, // parameters
  LOCAL(4), // 406_34_i
  // length_of(self i).to_string))
  var_length_of, 2, var_402_5_self, LOCAL(4), 1, LOCAL(1),
  // to_string))
  var_to_string, 1, LOCAL(1), 1, LOCAL(2),
  // append(" " length_of(self i).to_string))
  var_append, 2, string_1, LOCAL(2), 1, LOCAL(3),
  // -> append(" " length_of(self i).to_string))
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(406, 51),
  POS(406, 69),
  POS(406, 40),
  POS(406, 37)
};

static TAB_NUM t_lambda_68[] = {
  2, // locals
  0, // parameters
  // indent+2)
  var_std__plus, 2, var_403_5_indent, num_2, 1, LOCAL(1),
  // tabs_and_spaces(indent+2)
  var_tabs_and_spaces, 1, LOCAL(1), 1, LOCAL(2),
  //  tabs_and_spaces(indent+2)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(410, 26),
  POS(410, 10),
  POS(410, 9)
};

static TAB_NUM t_lambda_69[] = {
  0, // locals
  0, // parameters
  //  ""
  LET, 1, string_2, TAIL_CALL,
  POS(411, 9)
};

static TAB_NUM t_lambda_70[] = {
  1, // locals
  0, // parameters
  // tabs_and_spaces(indent)
  var_tabs_and_spaces, 1, var_403_5_indent, 1, LOCAL(1),
  //  tabs_and_spaces(indent)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(415, 10),
  POS(415, 9)
};

static TAB_NUM t_lambda_71[] = {
  0, // locals
  0, // parameters
  //  ""
  LET, 1, string_2, TAIL_CALL,
  POS(416, 9)
};

static TAB_NUM t_lambda_map_reduceself[] = {
  3, // locals
  1, // parameters
  LOCAL(3), // 420_23_item
  // to_string "@nl;"))
  var_to_string, 1, LOCAL(3), 1, LOCAL(1),
  // append(indentation item.to_string "@nl;"))
  var_append, 3, var_407_4_indentation, LOCAL(1), string_3, 1, LOCAL(2),
  // -> append(indentation item.to_string "@nl;"))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(420, 56),
  POS(420, 32),
  POS(420, 29)
};

static FUNKY_CONSTANT constants_table[] = {
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__generic_array___for_each}},
  {FLT_POSITIVE_INT64, 0, {.value = 1}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_iterate_1}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_iterate_2}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_3}},
  {FLT_POSITIVE_INT64, 0, {.value = 2}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_4}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_next}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_5}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2_next}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__generic_array___map}},
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
  {FLT_POSITIVE_INT64, 0, {.value = 3}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_20}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_21}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_22}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_23}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_24}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_25}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_26}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_27}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_28}},
  {FLT_STRING_8, 68, {.str_8 = "<map> is not yet defined for arrays with more than three dimensions\012"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__generic_array___reduce}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_29}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_reduce}},
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
  {FLT_STRING_8, 71, {.str_8 = "<reduce> is not yet defined for arrays with more than three dimensions\012"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__generic_array___map_reduce}},
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
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_66}},
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
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_67}},
  {FLT_STRING_8, 1, {.str_8 = " "}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_68}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_69}},
  {FLT_STRING_8, 0, {.str_8 = ""}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_70}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_71}},
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
    {.position = POS(73, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "object\000std_types", std_types__object__attributes,
    {.position = POS(75, 1)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "is_an_array\000", NULL,
    {.position = POS(75, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "false\000", NULL,
    {.position = POS(75, 32)}
  },
  {
    FOT_UNKNOWN, 0, 6,
    "generic_array\000std_types", std_types__generic_array__attributes,
    {.position = POS(81, 1)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "true\000", NULL,
    {.position = POS(81, 39)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "for_each\000", NULL,
    {.position = POS(87, 27)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "107_5_finally\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "next\000", NULL,
    {.position = POS(107, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "break\000", NULL,
    {.position = POS(112, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "from\000basic_loops", NULL,
    {.position = POS(113, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "to\000basic_loops", NULL,
    {.position = POS(114, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "self\000basic_loops", NULL,
    {.position = POS(115, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "body\000basic_loops", NULL,
    {.position = POS(116, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "finally\000basic_loops", NULL,
    {.position = POS(117, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "tuple\000", NULL,
    {.position = POS(110, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "length_of\000", NULL,
    {.position = POS(120, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "less\000std", NULL,
    {.position = POS(127, 28)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not\000std", NULL,
    {.position = POS(127, 28)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if\000", NULL,
    {.position = POS(126, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "break_function\000basic_types", NULL,
    {.position = POS(141, 14)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "saved_context_of\000basic_loops", NULL,
    {.position = POS(143, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "new\000", NULL,
    {.position = POS(141, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "parameter_count_of\000", NULL,
    {.position = POS(152, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "equal\000std", NULL,
    {.position = POS(152, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000std", NULL,
    {.position = POS(154, 28)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "map\000", NULL,
    {.position = POS(163, 27)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "171_5_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "172_5_map_function\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "dimension_count_of\000", NULL,
    {.position = POS(174, 6)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "177_8_new_array\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "create_empty_array\000", NULL,
    {.position = POS(177, 18)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "from_to\000", NULL,
    {.position = POS(180, 11)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "193_8_m\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "194_8_new_array\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "196_12_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "213_8_m\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "214_8_k\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "215_8_new_array\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "217_12_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "219_16_j\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "Error\000", NULL,
    {.position = POS(236, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "case\000", NULL,
    {.position = POS(175, 3)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "reduce\000", NULL,
    {.position = POS(239, 27)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "247_5_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "248_5_reduce_function\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "append\000", NULL,
    {.position = POS(248, 23)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "254_17_s\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "254_19_e\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "shift_right\000std", NULL,
    {.position = POS(257, 17)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "265_8_m\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "266_8_acc\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "neutral_element_of\000", NULL,
    {.position = POS(266, 12)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "268_12_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "277_8_m\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "278_8_k\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "279_8_acc\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "281_12_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "283_16_j\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "map_reduce\000", NULL,
    {.position = POS(295, 27)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "305_5_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "306_5_map_function\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "307_5_reduce_function\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "317_16_s\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "317_18_e\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "313_8_map_reduce\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "326_16_s\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "326_18_e\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "337_8_m\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "338_8_acc\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "340_12_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "357_8_m\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "358_8_k\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "359_8_acc\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "361_12_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "363_16_j\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 1,
    "array\000std_types", std_types__array__attributes,
    {.position = POS(386, 1)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "serialization_tag_of\000", NULL,
    {.position = POS(386, 19)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "boolean_array\000std_types", std_types__boolean_array__attributes,
    {.position = POS(387, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "character_array\000std_types", std_types__character_array__attributes,
    {.position = POS(388, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "int8_array\000std_types", std_types__int8_array__attributes,
    {.position = POS(389, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "uint8_array\000std_types", std_types__uint8_array__attributes,
    {.position = POS(390, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "int16_array\000std_types", std_types__int16_array__attributes,
    {.position = POS(391, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "uint16_array\000std_types", std_types__uint16_array__attributes,
    {.position = POS(392, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "int32_array\000std_types", std_types__int32_array__attributes,
    {.position = POS(393, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "uint32_array\000std_types", std_types__uint32_array__attributes,
    {.position = POS(394, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "int64_array\000std_types", std_types__int64_array__attributes,
    {.position = POS(395, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "uint64_array\000std_types", std_types__uint64_array__attributes,
    {.position = POS(396, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "float32_array\000std_types", std_types__float32_array__attributes,
    {.position = POS(397, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "float64_array\000std_types", std_types__float64_array__attributes,
    {.position = POS(398, 1)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "serialize\000", NULL,
    {.position = POS(400, 27)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "402_5_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "403_5_indent\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "undefined\000", NULL,
    {.position = POS(403, 14)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "value_range\000std", NULL,
    {.position = POS(406, 26)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "to_string\000", NULL,
    {.position = POS(406, 69)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_defined\000", NULL,
    {.position = POS(409, 14)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "tabs_and_spaces\000", NULL,
    {.position = POS(410, 10)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "407_4_indentation\000", NULL
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
  100, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  constants_table,
  variables_table,
};
