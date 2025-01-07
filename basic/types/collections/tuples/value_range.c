#include <stddef.h>
#include <stdint.h>

#include "runtime/common.h"
#include "runtime/builtins.h"
#include "runtime/fko.h"
#include "runtime/memory.h"

enum {
  str_value_range = -1,
  func_std_types__value_range___lower_bound_of = -2,
  func_std_types__value_range___upper_bound_of = -3,
  func_std_types__value_range___length_of = -4,
  num_1 = -5,
  func_std_types__value_range___match = -6,
  lambda_1 = -7,
  lambda_2 = -8,
  lambda_3 = -9,
  lambda_4 = -10,
  lambda_5 = -11,
  func_fail = -12,
  lambda_6 = -13,
  lambda_7 = -14,
  func_std_types__value_range___match_back = -15,
  lambda_8 = -16,
  lambda_9 = -17,
  minus_num_1 = -18,
  lambda_10 = -19,
  lambda_11 = -20,
  lambda_12 = -21,
  func_std_types__value_range___search = -22,
  num_0 = -23,
  func_search_forwards = -24,
  lambda_loop = -25,
  lambda_13 = -26,
  lambda_14 = -27,
  lambda_15 = -28,
  lambda_16 = -29,
  lambda_17 = -30,
  lambda_18 = -31,
  func_search_backwards = -32,
  lambda_2_loop = -33,
  lambda_19 = -34,
  lambda_20 = -35,
  lambda_21 = -36,
  lambda_22 = -37,
  lambda_23 = -38,
  lambda_24 = -39,
  func_std_types__value_range___for_each = -40,
  func_std_types__value_range___map = -41,
  func_map = -42,
  num_2 = -43,
  lambda_25 = -44,
  lambda_26 = -45,
  lambda_27 = -46,
  lambda_28 = -47,
  func_std_types__value_range___std__reduce = -48,
  func_reduce = -49,
  lambda_29 = -50,
  lambda_30 = -51,
  func_std_types__value_range___map_reduce = -52,
  func_map_reduce = -53,
  lambda_31 = -54,
  lambda_32 = -55,
  func_std__value_range = -56
};

enum {
  var__START = FIRST_VAR-1,
  var_std__lower_bound_of, // attribute
  var_std__assign, // extern
  var_std__upper_bound_of, // attribute
  var_std_types__value_range, // extern
  var_subtype_of, // extern polymorphic
  var_std__is_a_value_range, // attribute
  var_std_types__object, // extern
  var_is_a_value_range, // extern polymorphic
  var_false, // extern
  var_true, // extern
  var_lower_bound_of, // extern polymorphic
  var_upper_bound_of, // extern polymorphic
  var_length_of, // extern polymorphic
  var_std__plus, // extern
  var_std__minus, // extern
  var_match, // extern polymorphic
  var_78_5_expr, // dynamic
  var_79_5_str, // dynamic
  var_81_4_rc, // dynamic
  var_result_count, // extern
  var_is_empty, // extern
  var_86_8_chr, // dynamic
  var_std__less, // extern
  var_std__not, // extern
  var_std__and, // extern
  var_std__equal, // extern
  var_undefined, // extern
  var_if, // extern
  var_match_back, // extern polymorphic
  var_123_5_expr, // dynamic
  var_124_5_str, // dynamic
  var_130_8_chr, // dynamic
  var_search, // extern polymorphic
  var_150_5_str, // dynamic
  var_151_5_nth, // dynamic
  var_153_4_low, // dynamic
  var_154_4_high, // dynamic
  var_155_4_len, // dynamic
  var_162_6_i, // dynamic
  var_inc, // extern
  var_169_12_chr, // dynamic
  var_dec, // extern
  var_next, // extern
  var_loop, // extern
  var_180_6_i, // dynamic
  var_187_12_chr, // dynamic
  var_for_each, // extern polymorphic
  var_from_to, // extern
  var_map, // extern polymorphic
  var_213_5_function, // dynamic
  var_215_10_from, // dynamic
  var_215_15_to, // dynamic
  var_216_6_n, // dynamic
  var_std__shift_right, // extern
  var_append, // extern
  var_list, // extern
  var_empty_list, // extern
  var_std__reduce, // extern polymorphic
  var_235_5_function, // dynamic
  var_237_13_from, // dynamic
  var_237_18_to, // dynamic
  var_238_6_n, // dynamic
  var_map_reduce, // extern polymorphic
  var_253_5_map_function, // dynamic
  var_254_5_reduce_function, // dynamic
  var_256_17_from, // dynamic
  var_256_22_to, // dynamic
  var_257_6_n, // dynamic
  var_std__value_range, // initialized
  var_typed_tuple, // extern
  var_serialization_tag_of, // extern polymorphic
  var_deserializers, // extern
  var_register_type, // extern
  var__END
};


static TAB_NUM t_func_std_types__value_range___lower_bound_of[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 37_5_self
  // self $lower_bound $_upper_bound
  LOCAL(2), 0, 2, LOCAL(3), LOCAL(1),
  // -> lower_bound
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(39, 3),
  POS(40, 3),
  LOCAL(3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_std_types__value_range___lower_bound_of = {
  t_func_std_types__value_range___lower_bound_of, NULL, 2, 2,
  {"39_9_lower_bound\000", "37_5_self\000"}
};

static TAB_NUM t_func_std_types__value_range___upper_bound_of[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 44_5_self
  // self $_lower_bound $upper_bound
  LOCAL(2), 0, 2, LOCAL(1), LOCAL(3),
  // -> upper_bound
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(46, 3),
  POS(47, 3),
  LOCAL(3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_std_types__value_range___upper_bound_of = {
  t_func_std_types__value_range___upper_bound_of, NULL, 2, 2,
  {"46_23_upper_bound\000", "44_5_self\000"}
};

static TAB_NUM t_func_std_types__value_range___length_of[] = {
  5, // locals
  1, // parameters
  LOCAL(3), // 51_5_self
  // self $lower_bound $upper_bound
  LOCAL(3), 0, 2, LOCAL(4), LOCAL(5),
  // upper_bound+1-lower_bound
  var_std__plus, 2, LOCAL(5), num_1, 1, LOCAL(1),
  // upper_bound+1-lower_bound
  var_std__minus, 2, LOCAL(1), LOCAL(4), 1, LOCAL(2),
  // -> upper_bound+1-lower_bound
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(53, 3),
  POS(54, 6),
  POS(54, 6),
  POS(54, 3),
  LOCAL(5),
  LOCAL(3),
  LOCAL(4)
};

static FUNCTION_INFO i_func_std_types__value_range___length_of = {
  t_func_std_types__value_range___length_of, NULL, 4, 3,
  {"53_22_upper_bound\000", "51_5_self\000", "53_9_lower_bound\000"}
};

static TAB_NUM t_func_std_types__value_range___match[] = {
  1, // locals
  2, // parameters
  var_78_5_expr,
  var_79_5_str,
  // $rc result_count()
  var_result_count, 0, 1, var_81_4_rc,
  // is_empty
  var_is_empty, 1, var_79_5_str, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), func_fail, lambda_1, TAIL_CALL,
  POS(81, 3),
  POS(83, 9),
  POS(82, 3)
};

static FUNCTION_INFO i_func_std_types__value_range___match = {
  t_func_std_types__value_range___match, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_1[] = {
  4, // locals
  0, // parameters
  // $chr str(1)
  var_79_5_str, 1, num_1, 1, var_86_8_chr,
  // lower_bound_of(expr) && chr <= upper_bound_of(expr):
  var_lower_bound_of, 1, var_78_5_expr, 1, LOCAL(1),
  // chr >= lower_bound_of(expr) && chr <= upper_bound_of(expr):
  var_std__less, 2, var_86_8_chr, LOCAL(1), 1, LOCAL(2),
  // chr >= lower_bound_of(expr) && chr <= upper_bound_of(expr):
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // chr >= lower_bound_of(expr) && chr <= upper_bound_of(expr):
  var_std__and, 2, LOCAL(3), lambda_2, 1, LOCAL(4),
  // if
  var_if, 3, LOCAL(4), lambda_3, func_fail, TAIL_CALL,
  POS(86, 7),
  POS(88, 16),
  POS(88, 9),
  POS(88, 9),
  POS(88, 9),
  POS(87, 7)
};

static FUNCTION_INFO i_lambda_1 = {
  t_lambda_1, NULL, 6, 0,
  {}
};

static TAB_NUM t_lambda_2[] = {
  3, // locals
  0, // parameters
  // upper_bound_of(expr):
  var_upper_bound_of, 1, var_78_5_expr, 1, LOCAL(1),
  // upper_bound_of(expr):
  var_std__less, 2, LOCAL(1), var_86_8_chr, 1, LOCAL(2),
  // upper_bound_of(expr):
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // chr <= upper_bound_of(expr):
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(88, 47),
  POS(88, 47),
  POS(88, 47),
  POS(88, 40)
};

static FUNCTION_INFO i_lambda_2 = {
  t_lambda_2, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_3[] = {
  1, // locals
  0, // parameters
  // rc == 1
  var_std__equal, 2, var_81_4_rc, num_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_4, lambda_5, TAIL_CALL,
  POS(90, 13),
  POS(89, 11)
};

static FUNCTION_INFO i_lambda_3 = {
  t_lambda_3, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_4[] = {
  0, // locals
  0, // parameters
  //  1
  LET, 1, num_1, TAIL_CALL,
  POS(91, 15)
};

static FUNCTION_INFO i_lambda_4 = {
  t_lambda_4, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_5[] = {
  0, // locals
  0, // parameters
  //  1 undefined
  LET, 2, num_1, var_undefined, TAIL_CALL,
  POS(92, 15)
};

static FUNCTION_INFO i_lambda_5 = {
  t_lambda_5, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_fail[] = {
  1, // locals
  0, // parameters
  // rc == 1
  var_std__equal, 2, var_81_4_rc, num_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_6, lambda_7, TAIL_CALL,
  POS(97, 7),
  POS(96, 5)
};

static FUNCTION_INFO i_func_fail = {
  t_func_fail, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_6[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(98, 9)
};

static FUNCTION_INFO i_lambda_6 = {
  t_lambda_6, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_7[] = {
  0, // locals
  0, // parameters
  //  undefined undefined
  LET, 2, var_undefined, var_undefined, TAIL_CALL,
  POS(99, 9)
};

static FUNCTION_INFO i_lambda_7 = {
  t_lambda_7, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_std_types__value_range___match_back[] = {
  1, // locals
  2, // parameters
  var_123_5_expr,
  var_124_5_str,
  // is_empty
  var_is_empty, 1, var_124_5_str, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_8, lambda_9, TAIL_CALL,
  POS(127, 9),
  POS(126, 3)
};

static FUNCTION_INFO i_func_std_types__value_range___match_back = {
  t_func_std_types__value_range___match_back, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_8[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(128, 7)
};

static FUNCTION_INFO i_lambda_8 = {
  t_lambda_8, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_9[] = {
  4, // locals
  0, // parameters
  // $chr str(-1)
  var_124_5_str, 1, minus_num_1, 1, var_130_8_chr,
  // lower_bound_of(expr) && chr <= upper_bound_of(expr)
  var_lower_bound_of, 1, var_123_5_expr, 1, LOCAL(1),
  // chr >= lower_bound_of(expr) && chr <= upper_bound_of(expr)
  var_std__less, 2, var_130_8_chr, LOCAL(1), 1, LOCAL(2),
  // chr >= lower_bound_of(expr) && chr <= upper_bound_of(expr)
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // chr >= lower_bound_of(expr) && chr <= upper_bound_of(expr)
  var_std__and, 2, LOCAL(3), lambda_10, 1, LOCAL(4),
  // if
  var_if, 3, LOCAL(4), lambda_11, lambda_12, TAIL_CALL,
  POS(130, 7),
  POS(132, 16),
  POS(132, 9),
  POS(132, 9),
  POS(132, 9),
  POS(131, 7)
};

static FUNCTION_INFO i_lambda_9 = {
  t_lambda_9, NULL, 6, 0,
  {}
};

static TAB_NUM t_lambda_10[] = {
  3, // locals
  0, // parameters
  // upper_bound_of(expr)
  var_upper_bound_of, 1, var_123_5_expr, 1, LOCAL(1),
  // upper_bound_of(expr)
  var_std__less, 2, LOCAL(1), var_130_8_chr, 1, LOCAL(2),
  // upper_bound_of(expr)
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // chr <= upper_bound_of(expr)
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(132, 47),
  POS(132, 47),
  POS(132, 47),
  POS(132, 40)
};

static FUNCTION_INFO i_lambda_10 = {
  t_lambda_10, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_11[] = {
  0, // locals
  0, // parameters
  //  1
  LET, 1, num_1, TAIL_CALL,
  POS(133, 11)
};

static FUNCTION_INFO i_lambda_11 = {
  t_lambda_11, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_12[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(134, 11)
};

static FUNCTION_INFO i_lambda_12 = {
  t_lambda_12, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_std_types__value_range___search[] = {
  2, // locals
  -3, // parameters
  MANDATORY_PARAMETER, LOCAL(2), // 149_5_expr
  MANDATORY_PARAMETER, var_150_5_str,
  num_1, var_151_5_nth,
  // $low lower_bound_of(expr)
  var_lower_bound_of, 1, LOCAL(2), 1, var_153_4_low,
  // $high upper_bound_of(expr)
  var_upper_bound_of, 1, LOCAL(2), 1, var_154_4_high,
  // $len length_of(str)
  var_length_of, 1, var_150_5_str, 1, var_155_4_len,
  // nth < 0
  var_std__less, 2, var_151_5_nth, num_0, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), func_search_backwards, func_search_forwards, TAIL_CALL,
  POS(153, 3),
  POS(154, 3),
  POS(155, 3),
  POS(157, 5),
  POS(156, 3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_std_types__value_range___search = {
  t_func_std_types__value_range___search, NULL, 5, 1,
  {"149_5_expr\000"}
};

static TAB_NUM t_func_search_forwards[] = {
  0, // locals
  0, // parameters
  // $i 0
  LET, 1, num_0, 1, var_162_6_i,
  // loop:
  var_loop, 1, lambda_loop, TAIL_CALL,
  POS(162, 5),
  POS(163, 5)
};

static FUNCTION_INFO i_func_search_forwards = {
  t_func_search_forwards, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_loop[] = {
  1, // locals
  0, // parameters
  // inc &i
  var_inc, 1, var_162_6_i, 1, var_162_6_i,
  // len
  var_std__less, 2, var_155_4_len, var_162_6_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_13, lambda_14, TAIL_CALL,
  POS(164, 7),
  POS(166, 13),
  POS(165, 7)
};

static FUNCTION_INFO i_lambda_loop = {
  t_lambda_loop, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_13[] = {
  0, // locals
  0, // parameters
  //  undefined undefined
  LET, 2, var_undefined, var_undefined, TAIL_CALL,
  POS(167, 11)
};

static FUNCTION_INFO i_lambda_13 = {
  t_lambda_13, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_14[] = {
  3, // locals
  0, // parameters
  // $chr str(i)
  var_150_5_str, 1, var_162_6_i, 1, var_169_12_chr,
  // chr >= low && chr <= high:
  var_std__less, 2, var_169_12_chr, var_153_4_low, 1, LOCAL(1),
  // chr >= low && chr <= high:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // chr >= low && chr <= high:
  var_std__and, 2, LOCAL(2), lambda_15, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_16, var_next, TAIL_CALL,
  POS(169, 11),
  POS(171, 13),
  POS(171, 13),
  POS(171, 13),
  POS(170, 11)
};

static FUNCTION_INFO i_lambda_14 = {
  t_lambda_14, NULL, 5, 0,
  {}
};

static TAB_NUM t_lambda_15[] = {
  2, // locals
  0, // parameters
  // high:
  var_std__less, 2, var_154_4_high, var_169_12_chr, 1, LOCAL(1),
  // high:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // chr <= high:
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(171, 34),
  POS(171, 34),
  POS(171, 27)
};

static FUNCTION_INFO i_lambda_15 = {
  t_lambda_15, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_16[] = {
  1, // locals
  0, // parameters
  // 1:
  var_std__less, 2, num_1, var_151_5_nth, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_17, lambda_18, TAIL_CALL,
  POS(173, 23),
  POS(172, 15)
};

static FUNCTION_INFO i_lambda_16 = {
  t_lambda_16, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_17[] = {
  0, // locals
  0, // parameters
  // dec &nth
  var_dec, 1, var_151_5_nth, 1, var_151_5_nth,
  // next
  var_next, 0, TAIL_CALL,
  POS(174, 19),
  POS(175, 19)
};

static FUNCTION_INFO i_lambda_17 = {
  t_lambda_17, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_18[] = {
  0, // locals
  0, // parameters
  //  i 1
  LET, 2, var_162_6_i, num_1, TAIL_CALL,
  POS(176, 19)
};

static FUNCTION_INFO i_lambda_18 = {
  t_lambda_18, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_search_backwards[] = {
  0, // locals
  0, // parameters
  // $i len+1
  var_std__plus, 2, var_155_4_len, num_1, 1, var_180_6_i,
  // loop:
  var_loop, 1, lambda_2_loop, TAIL_CALL,
  POS(180, 5),
  POS(181, 5)
};

static FUNCTION_INFO i_func_search_backwards = {
  t_func_search_backwards, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_2_loop[] = {
  1, // locals
  0, // parameters
  // dec &i
  var_dec, 1, var_180_6_i, 1, var_180_6_i,
  // i < 1
  var_std__less, 2, var_180_6_i, num_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_19, lambda_20, TAIL_CALL,
  POS(182, 7),
  POS(184, 9),
  POS(183, 7)
};

static FUNCTION_INFO i_lambda_2_loop = {
  t_lambda_2_loop, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_19[] = {
  0, // locals
  0, // parameters
  //  undefined undefined
  LET, 2, var_undefined, var_undefined, TAIL_CALL,
  POS(185, 11)
};

static FUNCTION_INFO i_lambda_19 = {
  t_lambda_19, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_20[] = {
  3, // locals
  0, // parameters
  // $chr str(i)
  var_150_5_str, 1, var_180_6_i, 1, var_187_12_chr,
  // chr >= low && chr <= high:
  var_std__less, 2, var_187_12_chr, var_153_4_low, 1, LOCAL(1),
  // chr >= low && chr <= high:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // chr >= low && chr <= high:
  var_std__and, 2, LOCAL(2), lambda_21, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_22, var_next, TAIL_CALL,
  POS(187, 11),
  POS(189, 13),
  POS(189, 13),
  POS(189, 13),
  POS(188, 11)
};

static FUNCTION_INFO i_lambda_20 = {
  t_lambda_20, NULL, 5, 0,
  {}
};

static TAB_NUM t_lambda_21[] = {
  2, // locals
  0, // parameters
  // high:
  var_std__less, 2, var_154_4_high, var_187_12_chr, 1, LOCAL(1),
  // high:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // chr <= high:
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(189, 34),
  POS(189, 34),
  POS(189, 27)
};

static FUNCTION_INFO i_lambda_21 = {
  t_lambda_21, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_22[] = {
  1, // locals
  0, // parameters
  // nth < -1:
  var_std__less, 2, var_151_5_nth, minus_num_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_23, lambda_24, TAIL_CALL,
  POS(191, 17),
  POS(190, 15)
};

static FUNCTION_INFO i_lambda_22 = {
  t_lambda_22, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_23[] = {
  0, // locals
  0, // parameters
  // inc &nth
  var_inc, 1, var_151_5_nth, 1, var_151_5_nth,
  // next
  var_next, 0, TAIL_CALL,
  POS(192, 19),
  POS(193, 19)
};

static FUNCTION_INFO i_lambda_23 = {
  t_lambda_23, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_24[] = {
  0, // locals
  0, // parameters
  //  i 1
  LET, 2, var_180_6_i, num_1, TAIL_CALL,
  POS(194, 19)
};

static FUNCTION_INFO i_lambda_24 = {
  t_lambda_24, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_std_types__value_range___for_each[] = {
  5, // locals
  3, // parameters
  LOCAL(1), // 199_5_self
  LOCAL(2), // 200_5_body
  LOCAL(3), // 201_5_finally
  // self $low $high
  LOCAL(1), 0, 2, LOCAL(4), LOCAL(5),
  // from_to! low high body finally
  var_from_to, 4, LOCAL(4), LOCAL(5), LOCAL(2), LOCAL(3), IO_TAIL_CALL,
  POS(203, 3),
  POS(204, 3),
  LOCAL(2),
  LOCAL(4),
  LOCAL(1),
  LOCAL(5),
  LOCAL(3)
};

static FUNCTION_INFO i_func_std_types__value_range___for_each = {
  t_func_std_types__value_range___for_each, NULL, 2, 5,
  {"200_5_body\000", "203_9_low\000", "199_5_self\000", "203_14_high\000", "201_5_finally\000"}
};

static TAB_NUM t_func_std_types__value_range___map[] = {
  3, // locals
  2, // parameters
  LOCAL(1), // 212_5_self
  var_213_5_function,
  // self $lower_bound $upper_bound
  LOCAL(1), 0, 2, LOCAL(2), LOCAL(3),
  // map lower_bound upper_bound
  func_map, 2, LOCAL(2), LOCAL(3), TAIL_CALL,
  POS(229, 3),
  POS(230, 3),
  LOCAL(3),
  LOCAL(1),
  LOCAL(2)
};

static FUNCTION_INFO i_func_std_types__value_range___map = {
  t_func_std_types__value_range___map, NULL, 2, 3,
  {"229_22_upper_bound\000", "212_5_self\000", "229_9_lower_bound\000"}
};

static TAB_NUM t_func_map[] = {
  2, // locals
  2, // parameters
  var_215_10_from,
  var_215_15_to,
  // to+1-from
  var_std__plus, 2, var_215_15_to, num_1, 1, LOCAL(1),
  // $n to+1-from
  var_std__minus, 2, LOCAL(1), var_215_10_from, 1, var_216_6_n,
  // n >= 2:
  var_std__less, 2, var_216_6_n, num_2, 1, LOCAL(1),
  // n >= 2:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_25, lambda_26, TAIL_CALL,
  POS(216, 8),
  POS(216, 5),
  POS(218, 7),
  POS(218, 7),
  POS(217, 5)
};

static FUNCTION_INFO i_func_map = {
  t_func_map, NULL, 5, 0,
  {}
};

static TAB_NUM t_lambda_25[] = {
  6, // locals
  0, // parameters
  // $m n >> 1
  var_std__shift_right, 2, var_216_6_n, num_1, 1, LOCAL(6),
  // from+m-1)
  var_std__plus, 2, var_215_10_from, LOCAL(6), 1, LOCAL(1),
  // from+m-1)
  var_std__minus, 2, LOCAL(1), num_1, 1, LOCAL(2),
  // map(from from+m-1)
  func_map, 2, var_215_10_from, LOCAL(2), 1, LOCAL(3),
  // from+m to)
  var_std__plus, 2, var_215_10_from, LOCAL(6), 1, LOCAL(4),
  // map(from+m to)
  func_map, 2, LOCAL(4), var_215_15_to, 1, LOCAL(5),
  // append
  var_append, 2, LOCAL(3), LOCAL(5), TAIL_CALL,
  POS(219, 9),
  POS(221, 20),
  POS(221, 20),
  POS(221, 11),
  POS(222, 15),
  POS(222, 11),
  POS(220, 9),
  LOCAL(6)
};

static FUNCTION_INFO i_lambda_25 = {
  t_lambda_25, NULL, 7, 1,
  {"219_10_m\000"}
};

static TAB_NUM t_lambda_26[] = {
  1, // locals
  0, // parameters
  // n == 1
  var_std__equal, 2, var_216_6_n, num_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_27, lambda_28, TAIL_CALL,
  POS(225, 11),
  POS(224, 9)
};

static FUNCTION_INFO i_lambda_26 = {
  t_lambda_26, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_27[] = {
  1, // locals
  0, // parameters
  // function(from)
  var_213_5_function, 1, var_215_10_from, 1, LOCAL(1),
  // list function(from)
  var_list, 1, LOCAL(1), TAIL_CALL,
  POS(226, 18),
  POS(226, 13)
};

static FUNCTION_INFO i_lambda_27 = {
  t_lambda_27, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_28[] = {
  0, // locals
  0, // parameters
  //  empty_list
  LET, 1, var_empty_list, TAIL_CALL,
  POS(227, 13)
};

static FUNCTION_INFO i_lambda_28 = {
  t_lambda_28, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_std_types__value_range___std__reduce[] = {
  3, // locals
  2, // parameters
  LOCAL(1), // 234_5_self
  var_235_5_function,
  // self $lower_bound $upper_bound
  LOCAL(1), 0, 2, LOCAL(2), LOCAL(3),
  // reduce lower_bound upper_bound
  func_reduce, 2, LOCAL(2), LOCAL(3), TAIL_CALL,
  POS(247, 3),
  POS(248, 3),
  LOCAL(1),
  LOCAL(3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_std_types__value_range___std__reduce = {
  t_func_std_types__value_range___std__reduce, NULL, 2, 3,
  {"234_5_self\000", "247_22_upper_bound\000", "247_9_lower_bound\000"}
};

static TAB_NUM t_func_reduce[] = {
  2, // locals
  2, // parameters
  var_237_13_from,
  var_237_18_to,
  // to+1-from
  var_std__plus, 2, var_237_18_to, num_1, 1, LOCAL(1),
  // $n to+1-from
  var_std__minus, 2, LOCAL(1), var_237_13_from, 1, var_238_6_n,
  // n >= 2:
  var_std__less, 2, var_238_6_n, num_2, 1, LOCAL(1),
  // n >= 2:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_29, lambda_30, TAIL_CALL,
  POS(238, 8),
  POS(238, 5),
  POS(240, 7),
  POS(240, 7),
  POS(239, 5)
};

static FUNCTION_INFO i_func_reduce = {
  t_func_reduce, NULL, 5, 0,
  {}
};

static TAB_NUM t_lambda_29[] = {
  6, // locals
  0, // parameters
  // $m n >> 1
  var_std__shift_right, 2, var_238_6_n, num_1, 1, LOCAL(6),
  // from+m-1)
  var_std__plus, 2, var_237_13_from, LOCAL(6), 1, LOCAL(1),
  // from+m-1)
  var_std__minus, 2, LOCAL(1), num_1, 1, LOCAL(2),
  // reduce(from from+m-1)
  func_reduce, 2, var_237_13_from, LOCAL(2), 1, LOCAL(3),
  // from+m to)
  var_std__plus, 2, var_237_13_from, LOCAL(6), 1, LOCAL(4),
  // reduce(from+m to)
  func_reduce, 2, LOCAL(4), var_237_18_to, 1, LOCAL(5),
  // function
  var_235_5_function, 2, LOCAL(3), LOCAL(5), TAIL_CALL,
  POS(241, 9),
  POS(243, 23),
  POS(243, 23),
  POS(243, 11),
  POS(244, 18),
  POS(244, 11),
  POS(242, 9),
  LOCAL(6)
};

static FUNCTION_INFO i_lambda_29 = {
  t_lambda_29, NULL, 7, 1,
  {"241_10_m\000"}
};

static TAB_NUM t_lambda_30[] = {
  0, // locals
  0, // parameters
  //  from
  LET, 1, var_237_13_from, TAIL_CALL,
  POS(245, 9)
};

static FUNCTION_INFO i_lambda_30 = {
  t_lambda_30, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_std_types__value_range___map_reduce[] = {
  3, // locals
  -3, // parameters
  MANDATORY_PARAMETER, LOCAL(1), // 252_5_self
  MANDATORY_PARAMETER, var_253_5_map_function,
  var_append, var_254_5_reduce_function,
  // self $lower_bound $upper_bound
  LOCAL(1), 0, 2, LOCAL(2), LOCAL(3),
  // map_reduce lower_bound upper_bound
  func_map_reduce, 2, LOCAL(2), LOCAL(3), TAIL_CALL,
  POS(266, 3),
  POS(267, 3),
  LOCAL(1),
  LOCAL(3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_std_types__value_range___map_reduce = {
  t_func_std_types__value_range___map_reduce, NULL, 2, 3,
  {"252_5_self\000", "266_22_upper_bound\000", "266_9_lower_bound\000"}
};

static TAB_NUM t_func_map_reduce[] = {
  2, // locals
  2, // parameters
  var_256_17_from,
  var_256_22_to,
  // to+1-from
  var_std__plus, 2, var_256_22_to, num_1, 1, LOCAL(1),
  // $n to+1-from
  var_std__minus, 2, LOCAL(1), var_256_17_from, 1, var_257_6_n,
  // n >= 2:
  var_std__less, 2, var_257_6_n, num_2, 1, LOCAL(1),
  // n >= 2:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_31, lambda_32, TAIL_CALL,
  POS(257, 8),
  POS(257, 5),
  POS(259, 7),
  POS(259, 7),
  POS(258, 5)
};

static FUNCTION_INFO i_func_map_reduce = {
  t_func_map_reduce, NULL, 5, 0,
  {}
};

static TAB_NUM t_lambda_31[] = {
  6, // locals
  0, // parameters
  // $m n >> 1
  var_std__shift_right, 2, var_257_6_n, num_1, 1, LOCAL(6),
  // from+m-1)
  var_std__plus, 2, var_256_17_from, LOCAL(6), 1, LOCAL(1),
  // from+m-1)
  var_std__minus, 2, LOCAL(1), num_1, 1, LOCAL(2),
  // map_reduce(from from+m-1)
  func_map_reduce, 2, var_256_17_from, LOCAL(2), 1, LOCAL(3),
  // from+m to)
  var_std__plus, 2, var_256_17_from, LOCAL(6), 1, LOCAL(4),
  // map_reduce(from+m to)
  func_map_reduce, 2, LOCAL(4), var_256_22_to, 1, LOCAL(5),
  // reduce_function
  var_254_5_reduce_function, 2, LOCAL(3), LOCAL(5), TAIL_CALL,
  POS(260, 9),
  POS(262, 27),
  POS(262, 27),
  POS(262, 11),
  POS(263, 22),
  POS(263, 11),
  POS(261, 9),
  LOCAL(6)
};

static FUNCTION_INFO i_lambda_31 = {
  t_lambda_31, NULL, 7, 1,
  {"260_10_m\000"}
};

static TAB_NUM t_lambda_32[] = {
  1, // locals
  0, // parameters
  // map_function(from)
  var_253_5_map_function, 1, var_256_17_from, 1, LOCAL(1),
  //  map_function(from)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(264, 10),
  POS(264, 9)
};

static FUNCTION_INFO i_lambda_32 = {
  t_lambda_32, NULL, 2, 0,
  {}
};

static TAB_NUM t_func_std__value_range[] = {
  2, // locals
  2, // parameters
  LOCAL(1), // 271_5_lower_bound
  LOCAL(2), // 272_5_upper_bound
  // typed_tuple std_types::value_range lower_bound upper_bound
  var_typed_tuple, 3, var_std_types__value_range, LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(274, 3),
  LOCAL(1),
  LOCAL(2)
};

static FUNCTION_INFO i_func_std__value_range = {
  t_func_std__value_range, NULL, 1, 2,
  {"271_5_lower_bound\000", "272_5_upper_bound\000"}
};

static TAB_NUM t_module_entry[] = {
  0, // locals
  0, // parameters
  // register_type &deserializers std_types::value_range
  var_register_type, 2, var_deserializers, var_std_types__value_range, 1, var_deserializers,
  LET, 1, 0, TAIL_CALL,
  POS(278, 1)
};

static FUNCTION_INFO i_module_entry = {
  t_module_entry, NULL, 1, 0,
  {}
};

static FUNKY_CONSTANT constants_table[] = {
  {FLT_STRING_8, 11, {.str_8 = "value_range"}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__value_range___lower_bound_of}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__value_range___upper_bound_of}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__value_range___length_of}},
  {FLT_POSITIVE_INT64, 0, {.value = 1}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__value_range___match}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_1}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_2}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_3}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_4}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_5}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_fail}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_6}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_7}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__value_range___match_back}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_8}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_9}},
  {FLT_NEGATIVE_INT64, 0, {.value = 1}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_10}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_11}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_12}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__value_range___search}},
  {FLT_POSITIVE_INT64, 0, {.value = 0}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_search_forwards}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_loop}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_13}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_14}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_15}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_16}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_17}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_18}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_search_backwards}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_2_loop}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_19}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_20}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_21}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_22}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_23}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_24}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__value_range___for_each}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__value_range___map}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_map}},
  {FLT_POSITIVE_INT64, 0, {.value = 2}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_25}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_26}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_27}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_28}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__value_range___std__reduce}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_reduce}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_29}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_30}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__value_range___map_reduce}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_map_reduce}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_31}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_32}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std__value_range}},
  {FLT_FUNCTION, 0, {.func_info = &i_module_entry}}
};

static ATTRIBUTE_DEFINITION std_types__value_range__attributes[] = {
  {-var_subtype_of, -str_value_range},
  {-var_is_a_value_range, -var_true},
  {var_lower_bound_of, -func_std_types__value_range___lower_bound_of},
  {var_upper_bound_of, -func_std_types__value_range___upper_bound_of},
  {var_length_of, -func_std_types__value_range___length_of},
  {var_match, -func_std_types__value_range___match},
  {var_match_back, -func_std_types__value_range___match_back},
  {var_search, -func_std_types__value_range___search},
  {var_for_each, -func_std_types__value_range___for_each},
  {var_map, -func_std_types__value_range___map},
  {var_std__reduce, -func_std_types__value_range___std__reduce},
  {var_map_reduce, -func_std_types__value_range___map_reduce},
  {-var_serialization_tag_of, -str_value_range}
};

static ATTRIBUTE_DEFINITION std_types__object__attributes[] = {
  {-var_is_a_value_range, -var_false}
};

static FUNKY_VARIABLE variables_table[] = {
  {
    FOT_POLYMORPHIC, 0, 0,
    "lower_bound_of\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "assign\000std", NULL,
    {.position = POS(25, 1)}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "upper_bound_of\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN, 0, 13,
    "value_range\000std_types", std_types__value_range__attributes,
    {.position = POS(28, 1)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "subtype_of\000", NULL,
    {.position = POS(28, 25)}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "is_a_value_range\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "object\000std_types", std_types__object__attributes,
    {.position = POS(32, 1)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "is_a_value_range\000", NULL,
    {.position = POS(32, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "false\000", NULL,
    {.position = POS(32, 37)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "true\000", NULL,
    {.position = POS(33, 42)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "lower_bound_of\000", NULL,
    {.position = POS(35, 25)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "upper_bound_of\000", NULL,
    {.position = POS(42, 25)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "length_of\000", NULL,
    {.position = POS(49, 25)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000std", NULL,
    {.position = POS(54, 6)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "minus\000std", NULL,
    {.position = POS(54, 6)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "match\000", NULL,
    {.position = POS(56, 25)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "78_5_expr\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "79_5_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "81_4_rc\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "result_count\000", NULL,
    {.position = POS(81, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_empty\000", NULL,
    {.position = POS(83, 9)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "86_8_chr\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "less\000std", NULL,
    {.position = POS(88, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not\000std", NULL,
    {.position = POS(88, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "and\000std", NULL,
    {.position = POS(88, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "equal\000std", NULL,
    {.position = POS(90, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "undefined\000", NULL,
    {.position = POS(92, 18)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if\000", NULL,
    {.position = POS(89, 11)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "match_back\000", NULL,
    {.position = POS(101, 25)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "123_5_expr\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "124_5_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "130_8_chr\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "search\000", NULL,
    {.position = POS(136, 25)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "150_5_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "151_5_nth\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "153_4_low\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "154_4_high\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "155_4_len\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "162_6_i\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "inc\000", NULL,
    {.position = POS(164, 7)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "169_12_chr\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "dec\000", NULL,
    {.position = POS(174, 19)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "next\000", NULL,
    {.position = POS(175, 19)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "loop\000", NULL,
    {.position = POS(163, 5)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "180_6_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "187_12_chr\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "for_each\000", NULL,
    {.position = POS(197, 25)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "from_to\000", NULL,
    {.position = POS(204, 3)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "map\000", NULL,
    {.position = POS(206, 25)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "213_5_function\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "215_10_from\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "215_15_to\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "216_6_n\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "shift_right\000std", NULL,
    {.position = POS(219, 12)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "append\000", NULL,
    {.position = POS(220, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "list\000", NULL,
    {.position = POS(226, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_list\000", NULL,
    {.position = POS(227, 14)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "reduce\000std", NULL,
    {.position = POS(232, 25)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "235_5_function\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "237_13_from\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "237_18_to\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "238_6_n\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "map_reduce\000", NULL,
    {.position = POS(250, 25)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "253_5_map_function\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "254_5_reduce_function\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "256_17_from\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "256_22_to\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "257_6_n\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "value_range\000std", NULL,
    {.const_idx = -func_std__value_range}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "typed_tuple\000", NULL,
    {.position = POS(274, 3)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "serialization_tag_of\000", NULL,
    {.position = POS(276, 25)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "deserializers\000", NULL,
    {.position = POS(278, 16)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "register_type\000", NULL,
    {.position = POS(278, 1)}
  }
};

static FUNKY_NAMESPACE used_namespaces[] = {
  {"std", 1, 0}
};

FUNKY_MODULE module__basic__types__collections__tuples__value_range = {
  "_basic__types__collections__tuples__value_range", // module name
  "basic/types/collections/tuples/value_range.fky", // module filename
  .major_version = 0,
  .minor_version = 0,
  .feature_flags = FEAT_POSITIONS|FEAT_FUNCTION_INFO|FEAT_INITIALIZER,
  .marker = 0,
  0, // number of required modules
  0, // number of defined namespaces
  1, // number of used namespaces
  57, // number of constants
  73, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  constants_table,
  variables_table,
};
