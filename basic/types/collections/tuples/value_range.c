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
  func_std_types__value_range___match_back = -12,
  lambda_6 = -13,
  lambda_7 = -14,
  minus_num_1 = -15,
  lambda_8 = -16,
  lambda_9 = -17,
  lambda_10 = -18,
  func_std_types__value_range___search = -19,
  num_0 = -20,
  func_search_forwards = -21,
  lambda_loop = -22,
  lambda_11 = -23,
  lambda_12 = -24,
  lambda_13 = -25,
  lambda_14 = -26,
  lambda_15 = -27,
  lambda_16 = -28,
  func_search_backwards = -29,
  lambda_2_loop = -30,
  lambda_17 = -31,
  lambda_18 = -32,
  lambda_19 = -33,
  lambda_20 = -34,
  lambda_21 = -35,
  lambda_22 = -36,
  func_std_types__value_range___for_each = -37,
  func_std_types__value_range___map = -38,
  func_map = -39,
  num_2 = -40,
  lambda_23 = -41,
  lambda_24 = -42,
  lambda_25 = -43,
  lambda_26 = -44,
  func_std_types__value_range___std__reduce = -45,
  func_reduce = -46,
  lambda_27 = -47,
  lambda_28 = -48,
  func_std_types__value_range___map_reduce = -49,
  func_map_reduce = -50,
  lambda_29 = -51,
  lambda_30 = -52,
  func_std__value_range = -53
};

enum {
  var__START = FIRST_VAR-1,
  var_std__lower_bound_of, // attribute with setter
  var_std__assign, // extern
  var_std__upper_bound_of, // attribute with setter
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
  var_113_0_expr, // dynamic
  var_114_0_str, // dynamic
  var_is_empty, // extern
  var_undefined, // extern
  var_120_1_chr, // dynamic
  var_std__less, // extern
  var_std__not, // extern
  var_std__and, // extern
  var_if, // extern
  var_match_back, // extern polymorphic
  var_160_0_expr, // dynamic
  var_161_0_str, // dynamic
  var_167_1_chr, // dynamic
  var_search, // extern polymorphic
  var_199_0_str, // dynamic
  var_200_0_nth, // dynamic
  var_202_1_low, // dynamic
  var_203_1_high, // dynamic
  var_204_1_len, // dynamic
  var_211_1_i, // dynamic
  var_inc, // extern
  var_218_1_chr, // dynamic
  var_dec, // extern
  var_next, // extern
  var_loop, // extern
  var_229_1_i, // dynamic
  var_236_1_chr, // dynamic
  var_for_each, // extern polymorphic
  var_from_to, // extern
  var_map, // extern polymorphic
  var_267_0_function, // dynamic
  var_269_7_from, // dynamic
  var_269_12_to, // dynamic
  var_270_1_n, // dynamic
  var_std__shift_right, // extern
  var_append, // extern
  var_std__equal, // extern
  var_list, // extern
  var_empty_list, // extern
  var_std__reduce, // extern polymorphic
  var_297_0_function, // dynamic
  var_299_10_from, // dynamic
  var_299_15_to, // dynamic
  var_300_1_n, // dynamic
  var_map_reduce, // extern polymorphic
  var_321_0_map_function, // dynamic
  var_322_0_reduce_function, // dynamic
  var_324_14_from, // dynamic
  var_324_19_to, // dynamic
  var_325_1_n, // dynamic
  var_std__value_range, // initialized
  var_new, // extern
  var_serialization_tag_of, // extern polymorphic
  var__END
};


static TAB_NUM t_func_std_types__value_range___lower_bound_of[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 50_0_self
  // self $lower_bound $_upper_bound
  LOCAL(2), 0, 2, LOCAL(3), LOCAL(1),
  // -> lower_bound
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(52, 3),
  POS(53, 3)
};

static TAB_NUM t_func_std_types__value_range___upper_bound_of[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 61_0_self
  // self $_lower_bound $upper_bound
  LOCAL(2), 0, 2, LOCAL(1), LOCAL(3),
  // -> upper_bound
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(63, 3),
  POS(64, 3)
};

static TAB_NUM t_func_std_types__value_range___length_of[] = {
  5, // locals
  1, // parameters
  LOCAL(3), // 74_0_self
  // self $lower_bound $upper_bound
  LOCAL(3), 0, 2, LOCAL(4), LOCAL(5),
  // upper_bound+1-lower_bound
  var_std__plus, 2, LOCAL(5), num_1, 1, LOCAL(1),
  // upper_bound+1-lower_bound
  var_std__minus, 2, LOCAL(1), LOCAL(4), 1, LOCAL(2),
  // -> upper_bound+1-lower_bound
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(76, 3),
  POS(77, 6),
  POS(77, 6),
  POS(77, 3)
};

static TAB_NUM t_func_std_types__value_range___match[] = {
  1, // locals
  2, // parameters
  var_113_0_expr,
  var_114_0_str,
  // is_empty
  var_is_empty, 1, var_114_0_str, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1, lambda_2, TAIL_CALL,
  POS(117, 9),
  POS(116, 3)
};

static TAB_NUM t_lambda_1[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(118, 7)
};

static TAB_NUM t_lambda_2[] = {
  4, // locals
  0, // parameters
  // $chr str(1)
  var_114_0_str, 1, num_1, 1, var_120_1_chr,
  // lower_bound_of(expr) && chr <= upper_bound_of(expr)
  var_lower_bound_of, 1, var_113_0_expr, 1, LOCAL(1),
  // chr >= lower_bound_of(expr) && chr <= upper_bound_of(expr)
  var_std__less, 2, var_120_1_chr, LOCAL(1), 1, LOCAL(2),
  // chr >= lower_bound_of(expr) && chr <= upper_bound_of(expr)
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // chr >= lower_bound_of(expr) && chr <= upper_bound_of(expr)
  var_std__and, 2, LOCAL(3), lambda_3, 1, LOCAL(4),
  // if
  var_if, 3, LOCAL(4), lambda_4, lambda_5, TAIL_CALL,
  POS(120, 7),
  POS(122, 16),
  POS(122, 9),
  POS(122, 9),
  POS(122, 9),
  POS(121, 7)
};

static TAB_NUM t_lambda_3[] = {
  3, // locals
  0, // parameters
  // upper_bound_of(expr)
  var_upper_bound_of, 1, var_113_0_expr, 1, LOCAL(1),
  // upper_bound_of(expr)
  var_std__less, 2, LOCAL(1), var_120_1_chr, 1, LOCAL(2),
  // upper_bound_of(expr)
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // chr <= upper_bound_of(expr)
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(122, 47),
  POS(122, 47),
  POS(122, 47),
  POS(122, 40)
};

static TAB_NUM t_lambda_4[] = {
  0, // locals
  0, // parameters
  //  1
  LET, 1, num_1, TAIL_CALL,
  POS(123, 11)
};

static TAB_NUM t_lambda_5[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(124, 11)
};

static TAB_NUM t_func_std_types__value_range___match_back[] = {
  1, // locals
  2, // parameters
  var_160_0_expr,
  var_161_0_str,
  // is_empty
  var_is_empty, 1, var_161_0_str, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_6, lambda_7, TAIL_CALL,
  POS(164, 9),
  POS(163, 3)
};

static TAB_NUM t_lambda_6[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(165, 7)
};

static TAB_NUM t_lambda_7[] = {
  4, // locals
  0, // parameters
  // $chr str(-1)
  var_161_0_str, 1, minus_num_1, 1, var_167_1_chr,
  // lower_bound_of(expr) && chr <= upper_bound_of(expr)
  var_lower_bound_of, 1, var_160_0_expr, 1, LOCAL(1),
  // chr >= lower_bound_of(expr) && chr <= upper_bound_of(expr)
  var_std__less, 2, var_167_1_chr, LOCAL(1), 1, LOCAL(2),
  // chr >= lower_bound_of(expr) && chr <= upper_bound_of(expr)
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // chr >= lower_bound_of(expr) && chr <= upper_bound_of(expr)
  var_std__and, 2, LOCAL(3), lambda_8, 1, LOCAL(4),
  // if
  var_if, 3, LOCAL(4), lambda_9, lambda_10, TAIL_CALL,
  POS(167, 7),
  POS(169, 16),
  POS(169, 9),
  POS(169, 9),
  POS(169, 9),
  POS(168, 7)
};

static TAB_NUM t_lambda_8[] = {
  3, // locals
  0, // parameters
  // upper_bound_of(expr)
  var_upper_bound_of, 1, var_160_0_expr, 1, LOCAL(1),
  // upper_bound_of(expr)
  var_std__less, 2, LOCAL(1), var_167_1_chr, 1, LOCAL(2),
  // upper_bound_of(expr)
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // chr <= upper_bound_of(expr)
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(169, 47),
  POS(169, 47),
  POS(169, 47),
  POS(169, 40)
};

static TAB_NUM t_lambda_9[] = {
  0, // locals
  0, // parameters
  //  1
  LET, 1, num_1, TAIL_CALL,
  POS(170, 11)
};

static TAB_NUM t_lambda_10[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(171, 11)
};

static TAB_NUM t_func_std_types__value_range___search[] = {
  2, // locals
  -3, // parameters
  MANDATORY_PARAMETER, LOCAL(2), // 198_0_expr
  MANDATORY_PARAMETER, var_199_0_str,
  num_1, var_200_0_nth,
  // $low lower_bound_of(expr)
  var_lower_bound_of, 1, LOCAL(2), 1, var_202_1_low,
  // $high upper_bound_of(expr)
  var_upper_bound_of, 1, LOCAL(2), 1, var_203_1_high,
  // $len length_of(str)
  var_length_of, 1, var_199_0_str, 1, var_204_1_len,
  // nth < 0
  var_std__less, 2, var_200_0_nth, num_0, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), func_search_backwards, func_search_forwards, TAIL_CALL,
  POS(202, 3),
  POS(203, 3),
  POS(204, 3),
  POS(206, 5),
  POS(205, 3)
};

static TAB_NUM t_func_search_forwards[] = {
  0, // locals
  0, // parameters
  // $i 0
  LET, 1, num_0, 1, var_211_1_i,
  // loop:
  var_loop, 1, lambda_loop, TAIL_CALL,
  POS(211, 5),
  POS(212, 5)
};

static TAB_NUM t_lambda_loop[] = {
  1, // locals
  0, // parameters
  // inc &i
  var_inc, 1, var_211_1_i, 1, var_211_1_i,
  // len
  var_std__less, 2, var_204_1_len, var_211_1_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_11, lambda_12, TAIL_CALL,
  POS(213, 7),
  POS(215, 13),
  POS(214, 7)
};

static TAB_NUM t_lambda_11[] = {
  0, // locals
  0, // parameters
  //  undefined undefined
  LET, 2, var_undefined, var_undefined, TAIL_CALL,
  POS(216, 11)
};

static TAB_NUM t_lambda_12[] = {
  3, // locals
  0, // parameters
  // $chr str(i)
  var_199_0_str, 1, var_211_1_i, 1, var_218_1_chr,
  // chr >= low && chr <= high:
  var_std__less, 2, var_218_1_chr, var_202_1_low, 1, LOCAL(1),
  // chr >= low && chr <= high:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // chr >= low && chr <= high:
  var_std__and, 2, LOCAL(2), lambda_13, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_14, var_next, TAIL_CALL,
  POS(218, 11),
  POS(220, 13),
  POS(220, 13),
  POS(220, 13),
  POS(219, 11)
};

static TAB_NUM t_lambda_13[] = {
  2, // locals
  0, // parameters
  // high:
  var_std__less, 2, var_203_1_high, var_218_1_chr, 1, LOCAL(1),
  // high:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // chr <= high:
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(220, 34),
  POS(220, 34),
  POS(220, 27)
};

static TAB_NUM t_lambda_14[] = {
  1, // locals
  0, // parameters
  // 1:
  var_std__less, 2, num_1, var_200_0_nth, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_15, lambda_16, TAIL_CALL,
  POS(222, 23),
  POS(221, 15)
};

static TAB_NUM t_lambda_15[] = {
  0, // locals
  0, // parameters
  // dec &nth
  var_dec, 1, var_200_0_nth, 1, var_200_0_nth,
  // next
  var_next, 0, TAIL_CALL,
  POS(223, 19),
  POS(224, 19)
};

static TAB_NUM t_lambda_16[] = {
  0, // locals
  0, // parameters
  //  i 1
  LET, 2, var_211_1_i, num_1, TAIL_CALL,
  POS(225, 19)
};

static TAB_NUM t_func_search_backwards[] = {
  0, // locals
  0, // parameters
  // $i len+1
  var_std__plus, 2, var_204_1_len, num_1, 1, var_229_1_i,
  // loop:
  var_loop, 1, lambda_2_loop, TAIL_CALL,
  POS(229, 5),
  POS(230, 5)
};

static TAB_NUM t_lambda_2_loop[] = {
  1, // locals
  0, // parameters
  // dec &i
  var_dec, 1, var_229_1_i, 1, var_229_1_i,
  // i < 1
  var_std__less, 2, var_229_1_i, num_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_17, lambda_18, TAIL_CALL,
  POS(231, 7),
  POS(233, 9),
  POS(232, 7)
};

static TAB_NUM t_lambda_17[] = {
  0, // locals
  0, // parameters
  //  undefined undefined
  LET, 2, var_undefined, var_undefined, TAIL_CALL,
  POS(234, 11)
};

static TAB_NUM t_lambda_18[] = {
  3, // locals
  0, // parameters
  // $chr str(i)
  var_199_0_str, 1, var_229_1_i, 1, var_236_1_chr,
  // chr >= low && chr <= high:
  var_std__less, 2, var_236_1_chr, var_202_1_low, 1, LOCAL(1),
  // chr >= low && chr <= high:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // chr >= low && chr <= high:
  var_std__and, 2, LOCAL(2), lambda_19, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_20, var_next, TAIL_CALL,
  POS(236, 11),
  POS(238, 13),
  POS(238, 13),
  POS(238, 13),
  POS(237, 11)
};

static TAB_NUM t_lambda_19[] = {
  2, // locals
  0, // parameters
  // high:
  var_std__less, 2, var_203_1_high, var_236_1_chr, 1, LOCAL(1),
  // high:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // chr <= high:
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(238, 34),
  POS(238, 34),
  POS(238, 27)
};

static TAB_NUM t_lambda_20[] = {
  1, // locals
  0, // parameters
  // nth < -1:
  var_std__less, 2, var_200_0_nth, minus_num_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_21, lambda_22, TAIL_CALL,
  POS(240, 17),
  POS(239, 15)
};

static TAB_NUM t_lambda_21[] = {
  0, // locals
  0, // parameters
  // inc &nth
  var_inc, 1, var_200_0_nth, 1, var_200_0_nth,
  // next
  var_next, 0, TAIL_CALL,
  POS(241, 19),
  POS(242, 19)
};

static TAB_NUM t_lambda_22[] = {
  0, // locals
  0, // parameters
  //  i 1
  LET, 2, var_229_1_i, num_1, TAIL_CALL,
  POS(243, 19)
};

static TAB_NUM t_func_std_types__value_range___for_each[] = {
  5, // locals
  -3, // parameters
  MANDATORY_PARAMETER, LOCAL(1), // 253_0_self
  MANDATORY_PARAMETER, LOCAL(2), // 254_0_body
  var_next, LOCAL(3), // 255_0_finally
  // self $low $high
  LOCAL(1), 0, 2, LOCAL(4), LOCAL(5),
  // from_to! low high body finally
  var_from_to, 4, LOCAL(4), LOCAL(5), LOCAL(2), LOCAL(3), IO_TAIL_CALL,
  POS(257, 3),
  POS(258, 3)
};

static TAB_NUM t_func_std_types__value_range___map[] = {
  3, // locals
  2, // parameters
  LOCAL(1), // 266_0_self
  var_267_0_function,
  // self $lower_bound $upper_bound
  LOCAL(1), 0, 2, LOCAL(2), LOCAL(3),
  // map lower_bound upper_bound
  func_map, 2, LOCAL(2), LOCAL(3), TAIL_CALL,
  POS(283, 3),
  POS(284, 3)
};

static TAB_NUM t_func_map[] = {
  2, // locals
  2, // parameters
  var_269_7_from,
  var_269_12_to,
  // to+1-from
  var_std__plus, 2, var_269_12_to, num_1, 1, LOCAL(1),
  // $n to+1-from
  var_std__minus, 2, LOCAL(1), var_269_7_from, 1, var_270_1_n,
  // n >= 2:
  var_std__less, 2, var_270_1_n, num_2, 1, LOCAL(1),
  // n >= 2:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_23, lambda_24, TAIL_CALL,
  POS(270, 8),
  POS(270, 5),
  POS(272, 7),
  POS(272, 7),
  POS(271, 5)
};

static TAB_NUM t_lambda_23[] = {
  6, // locals
  0, // parameters
  // $m n >> 1
  var_std__shift_right, 2, var_270_1_n, num_1, 1, LOCAL(6),
  // from+m-1)
  var_std__plus, 2, var_269_7_from, LOCAL(6), 1, LOCAL(1),
  // from+m-1)
  var_std__minus, 2, LOCAL(1), num_1, 1, LOCAL(2),
  // map(from from+m-1)
  func_map, 2, var_269_7_from, LOCAL(2), 1, LOCAL(3),
  // from+m to)
  var_std__plus, 2, var_269_7_from, LOCAL(6), 1, LOCAL(4),
  // map(from+m to)
  func_map, 2, LOCAL(4), var_269_12_to, 1, LOCAL(5),
  // append
  var_append, 2, LOCAL(3), LOCAL(5), TAIL_CALL,
  POS(273, 9),
  POS(275, 20),
  POS(275, 20),
  POS(275, 11),
  POS(276, 15),
  POS(276, 11),
  POS(274, 9)
};

static TAB_NUM t_lambda_24[] = {
  1, // locals
  0, // parameters
  // n == 1
  var_std__equal, 2, var_270_1_n, num_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_25, lambda_26, TAIL_CALL,
  POS(279, 11),
  POS(278, 9)
};

static TAB_NUM t_lambda_25[] = {
  1, // locals
  0, // parameters
  // function(from)
  var_267_0_function, 1, var_269_7_from, 1, LOCAL(1),
  // list function(from)
  var_list, 1, LOCAL(1), TAIL_CALL,
  POS(280, 18),
  POS(280, 13)
};

static TAB_NUM t_lambda_26[] = {
  0, // locals
  0, // parameters
  //  empty_list
  LET, 1, var_empty_list, TAIL_CALL,
  POS(281, 13)
};

static TAB_NUM t_func_std_types__value_range___std__reduce[] = {
  3, // locals
  2, // parameters
  LOCAL(1), // 296_0_self
  var_297_0_function,
  // self $lower_bound $upper_bound
  LOCAL(1), 0, 2, LOCAL(2), LOCAL(3),
  // reduce lower_bound upper_bound
  func_reduce, 2, LOCAL(2), LOCAL(3), TAIL_CALL,
  POS(309, 3),
  POS(310, 3)
};

static TAB_NUM t_func_reduce[] = {
  2, // locals
  2, // parameters
  var_299_10_from,
  var_299_15_to,
  // to+1-from
  var_std__plus, 2, var_299_15_to, num_1, 1, LOCAL(1),
  // $n to+1-from
  var_std__minus, 2, LOCAL(1), var_299_10_from, 1, var_300_1_n,
  // n >= 2:
  var_std__less, 2, var_300_1_n, num_2, 1, LOCAL(1),
  // n >= 2:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_27, lambda_28, TAIL_CALL,
  POS(300, 8),
  POS(300, 5),
  POS(302, 7),
  POS(302, 7),
  POS(301, 5)
};

static TAB_NUM t_lambda_27[] = {
  6, // locals
  0, // parameters
  // $m n >> 1
  var_std__shift_right, 2, var_300_1_n, num_1, 1, LOCAL(6),
  // from+m-1)
  var_std__plus, 2, var_299_10_from, LOCAL(6), 1, LOCAL(1),
  // from+m-1)
  var_std__minus, 2, LOCAL(1), num_1, 1, LOCAL(2),
  // reduce(from from+m-1)
  func_reduce, 2, var_299_10_from, LOCAL(2), 1, LOCAL(3),
  // from+m to)
  var_std__plus, 2, var_299_10_from, LOCAL(6), 1, LOCAL(4),
  // reduce(from+m to)
  func_reduce, 2, LOCAL(4), var_299_15_to, 1, LOCAL(5),
  // function
  var_297_0_function, 2, LOCAL(3), LOCAL(5), TAIL_CALL,
  POS(303, 9),
  POS(305, 23),
  POS(305, 23),
  POS(305, 11),
  POS(306, 18),
  POS(306, 11),
  POS(304, 9)
};

static TAB_NUM t_lambda_28[] = {
  0, // locals
  0, // parameters
  //  from
  LET, 1, var_299_10_from, TAIL_CALL,
  POS(307, 9)
};

static TAB_NUM t_func_std_types__value_range___map_reduce[] = {
  3, // locals
  -3, // parameters
  MANDATORY_PARAMETER, LOCAL(1), // 320_0_self
  MANDATORY_PARAMETER, var_321_0_map_function,
  var_append, var_322_0_reduce_function,
  // self $lower_bound $upper_bound
  LOCAL(1), 0, 2, LOCAL(2), LOCAL(3),
  // map_reduce lower_bound upper_bound
  func_map_reduce, 2, LOCAL(2), LOCAL(3), TAIL_CALL,
  POS(334, 3),
  POS(335, 3)
};

static TAB_NUM t_func_map_reduce[] = {
  2, // locals
  2, // parameters
  var_324_14_from,
  var_324_19_to,
  // to+1-from
  var_std__plus, 2, var_324_19_to, num_1, 1, LOCAL(1),
  // $n to+1-from
  var_std__minus, 2, LOCAL(1), var_324_14_from, 1, var_325_1_n,
  // n >= 2:
  var_std__less, 2, var_325_1_n, num_2, 1, LOCAL(1),
  // n >= 2:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_29, lambda_30, TAIL_CALL,
  POS(325, 8),
  POS(325, 5),
  POS(327, 7),
  POS(327, 7),
  POS(326, 5)
};

static TAB_NUM t_lambda_29[] = {
  6, // locals
  0, // parameters
  // $m n >> 1
  var_std__shift_right, 2, var_325_1_n, num_1, 1, LOCAL(6),
  // from+m-1)
  var_std__plus, 2, var_324_14_from, LOCAL(6), 1, LOCAL(1),
  // from+m-1)
  var_std__minus, 2, LOCAL(1), num_1, 1, LOCAL(2),
  // map_reduce(from from+m-1)
  func_map_reduce, 2, var_324_14_from, LOCAL(2), 1, LOCAL(3),
  // from+m to)
  var_std__plus, 2, var_324_14_from, LOCAL(6), 1, LOCAL(4),
  // map_reduce(from+m to)
  func_map_reduce, 2, LOCAL(4), var_324_19_to, 1, LOCAL(5),
  // reduce_function
  var_322_0_reduce_function, 2, LOCAL(3), LOCAL(5), TAIL_CALL,
  POS(328, 9),
  POS(330, 27),
  POS(330, 27),
  POS(330, 11),
  POS(331, 22),
  POS(331, 11),
  POS(329, 9)
};

static TAB_NUM t_lambda_30[] = {
  1, // locals
  0, // parameters
  // map_function(from)
  var_321_0_map_function, 1, var_324_14_from, 1, LOCAL(1),
  //  map_function(from)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(332, 10),
  POS(332, 9)
};

static TAB_NUM t_func_std__value_range[] = {
  2, // locals
  2, // parameters
  LOCAL(1), // 362_0_lower_bound
  LOCAL(2), // 363_0_upper_bound
  // new std_types::value_range lower_bound upper_bound
  var_new, 3, var_std_types__value_range, LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(365, 3)
};

static FUNKY_CONSTANT constants_table[] = {
  {FLT_STRING_8, 11, {.str_8 = "value_range"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__value_range___lower_bound_of}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__value_range___upper_bound_of}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__value_range___length_of}},
  {FLT_POSITIVE_INT64, 0, {.value = 1}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__value_range___match}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_3}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_4}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_5}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__value_range___match_back}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_6}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_7}},
  {FLT_NEGATIVE_INT64, 0, {.value = 1}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_8}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_9}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_10}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__value_range___search}},
  {FLT_POSITIVE_INT64, 0, {.value = 0}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_search_forwards}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_11}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_12}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_13}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_14}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_15}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_16}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_search_backwards}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_17}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_18}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_19}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_20}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_21}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_22}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__value_range___for_each}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__value_range___map}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_map}},
  {FLT_POSITIVE_INT64, 0, {.value = 2}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_23}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_24}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_25}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_26}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__value_range___std__reduce}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_reduce}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_27}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_28}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__value_range___map_reduce}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_map_reduce}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_29}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_30}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__value_range}}
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
    {.has_a_setter = true}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "assign\000std", NULL,
    {.position = POS(23, 1)}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "upper_bound_of\000std", NULL,
    {.has_a_setter = true}
  },
  {
    FOT_UNKNOWN, 0, 13,
    "value_range\000std_types", std_types__value_range__attributes,
    {.position = POS(35, 1)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "subtype_of\000", NULL,
    {.position = POS(35, 25)}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "is_a_value_range\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "object\000std_types", std_types__object__attributes,
    {.position = POS(41, 1)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "is_a_value_range\000", NULL,
    {.position = POS(41, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "false\000", NULL,
    {.position = POS(41, 37)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "true\000", NULL,
    {.position = POS(42, 42)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "lower_bound_of\000", NULL,
    {.position = POS(44, 25)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "upper_bound_of\000", NULL,
    {.position = POS(55, 25)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "length_of\000", NULL,
    {.position = POS(66, 25)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000std", NULL,
    {.position = POS(77, 6)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "minus\000std", NULL,
    {.position = POS(77, 6)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "match\000", NULL,
    {.position = POS(79, 25)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "113_0_expr\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "114_0_str\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_empty\000", NULL,
    {.position = POS(117, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "undefined\000", NULL,
    {.position = POS(118, 8)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "120_1_chr\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "less\000std", NULL,
    {.position = POS(122, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not\000std", NULL,
    {.position = POS(122, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "and\000std", NULL,
    {.position = POS(122, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if\000", NULL,
    {.position = POS(121, 7)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "match_back\000", NULL,
    {.position = POS(126, 25)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "160_0_expr\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "161_0_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "167_1_chr\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "search\000", NULL,
    {.position = POS(173, 25)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "199_0_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "200_0_nth\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "202_1_low\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "203_1_high\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "204_1_len\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "211_1_i\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "inc\000", NULL,
    {.position = POS(213, 7)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "218_1_chr\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "dec\000", NULL,
    {.position = POS(223, 19)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "next\000", NULL,
    {.position = POS(224, 19)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "loop\000", NULL,
    {.position = POS(212, 5)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "229_1_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "236_1_chr\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "for_each\000", NULL,
    {.position = POS(246, 25)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "from_to\000", NULL,
    {.position = POS(258, 3)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "map\000", NULL,
    {.position = POS(260, 25)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "267_0_function\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "269_7_from\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "269_12_to\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "270_1_n\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "shift_right\000std", NULL,
    {.position = POS(273, 12)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "append\000", NULL,
    {.position = POS(274, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "equal\000std", NULL,
    {.position = POS(279, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "list\000", NULL,
    {.position = POS(280, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_list\000", NULL,
    {.position = POS(281, 14)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "reduce\000std", NULL,
    {.position = POS(286, 25)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "297_0_function\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "299_10_from\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "299_15_to\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "300_1_n\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "map_reduce\000", NULL,
    {.position = POS(312, 25)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "321_0_map_function\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "322_0_reduce_function\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "324_14_from\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "324_19_to\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "325_1_n\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "value_range\000std", NULL,
    {.const_idx = -func_std__value_range}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "new\000", NULL,
    {.position = POS(365, 3)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "serialization_tag_of\000", NULL,
    {.position = POS(367, 25)}
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
  .feature_flags = FEAT_POSITIONS,
  .marker = 0,
  0, // number of required modules
  0, // number of defined namespaces
  1, // number of used namespaces
  53, // number of constants
  69, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  constants_table,
  variables_table,
};
