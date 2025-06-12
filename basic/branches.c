#include <stddef.h>
#include <stdint.h>

#include "runtime/common.h"
#include "runtime/builtins.h"
#include "runtime/fko.h"
#include "runtime/memory.h"

enum {
  func_std__cond = -1,
  num_1 = -2,
  func_check = -3,
  lambda_1 = -4,
  lambda_2 = -5,
  lambda_3 = -6,
  func_std__case = -7,
  lambda_4 = -8,
  lambda_5 = -9,
  func_2_check = -10,
  lambda_6 = -11,
  lambda_7 = -12,
  lambda_8 = -13,
  lambda_9 = -14,
  lambda_10 = -15,
  num_2 = -16,
  lambda_11 = -17,
  func_3_check = -18,
  lambda_12 = -19,
  lambda_13 = -20,
  lambda_14 = -21,
  lambda_15 = -22,
  lambda_16 = -23,
  lambda_17 = -24,
  lambda_18 = -25,
  lambda_19 = -26,
  func_std_types__value_range___does_match = -27,
  lambda_20 = -28,
  func_std_types__sequence___does_match = -29,
  lambda_21 = -30,
  lambda_22 = -31,
  lambda_23 = -32,
  func_std_types__object___passes_test = -33,
  func_std_types__sequence___passes_test = -34,
  lambda_24 = -35,
  lambda_25 = -36,
  lambda_26 = -37
};

enum {
  var__START = FIRST_VAR-1,
  var_std__cond, // initialized
  var_83_5_args, // dynamic
  var_85_4_i, // dynamic
  var_std__assign, // extern
  var_86_4_n, // dynamic
  var_length_of, // extern
  var_std__less, // extern
  var_std__not, // extern
  var_92_24_body, // dynamic
  var_std__plus, // extern
  var_if, // extern
  var_pass, // extern
  var_std__case, // initialized
  var_145_5_expr, // dynamic
  var_146_5_values_and_bodies, // dynamic
  var_149_4_n, // dynamic
  var_150_4_i, // dynamic
  var_151_4_first_value, // dynamic
  var_is_defined, // extern
  var_is_a_function, // extern
  var_std__and, // extern
  var_test_function, // derived
  var_inc, // extern
  var_std__equal, // extern
  var_passes_test, // attribute
  var_plus, // extern
  var_186_18_value, // dynamic
  var_does_match, // attribute
  var_is_undefined, // extern
  var_std__or, // extern
  var_std_types__object, // extern
  var_equal, // extern
  var_std_types__undefined, // extern
  var_std_types__value_range, // extern
  var_203_43_expr, // dynamic
  var_204_22_upper_bound, // dynamic
  var_std_types__sequence, // extern
  var_207_40_expr, // dynamic
  var_true, // extern
  var_next, // extern
  var_false, // extern
  var_for_each, // extern
  var_undefined, // extern
  var_222_41_expr, // dynamic
  var__END
};


static TAB_NUM t_func_std__cond[] = {
  0, // locals
  -1, // parameters
  REST_PARAMETER, var_83_5_args,
  // $i 1
  LET, 1, num_1, 1, var_85_4_i,
  // $n length_of(args)
  var_length_of, 1, var_83_5_args, 1, var_86_4_n,
  // check!
  func_check, 0, IO_TAIL_CALL,
  POS(85, 3),
  POS(86, 3),
  POS(87, 3)
};

static FUNCTION_INFO i_func_std__cond = {
  t_func_std__cond, NULL, 3, 0,
  {}
};

static TAB_NUM t_func_check[] = {
  2, // locals
  0, // parameters
  // n:
  var_std__less, 2, var_86_4_n, var_85_4_i, 1, LOCAL(1),
  // n:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_1, var_pass, IO_TAIL_CALL,
  POS(91, 12),
  POS(91, 12),
  POS(90, 5)
};

static FUNCTION_INFO i_func_check = {
  t_func_check, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_1[] = {
  2, // locals
  0, // parameters
  // args(i) $cond $body
  var_83_5_args, 1, var_85_4_i, 1, LOCAL(1),
  // args(i) $cond $body
  LOCAL(1), 0, 2, LOCAL(2), var_92_24_body,
  // if
  var_if, 3, LOCAL(2), lambda_2, lambda_3, IO_TAIL_CALL,
  POS(92, 9),
  POS(92, 9),
  POS(93, 9),
  LOCAL(2)
};

static FUNCTION_INFO i_lambda_1 = {
  t_lambda_1, NULL, 3, 1,
  {"92_18_cond\000"}
};

static TAB_NUM t_lambda_2[] = {
  0, // locals
  0, // parameters
  // body!
  var_92_24_body, 0, IO_TAIL_CALL,
  POS(96, 13)
};

static FUNCTION_INFO i_lambda_2 = {
  t_lambda_2, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_3[] = {
  0, // locals
  0, // parameters
  // !i i+1
  var_std__plus, 2, var_85_4_i, num_1, 1, var_85_4_i,
  // check!
  func_check, 0, IO_TAIL_CALL,
  POS(98, 13),
  POS(99, 13)
};

static FUNCTION_INFO i_lambda_3 = {
  t_lambda_3, NULL, 2, 0,
  {}
};

static TAB_NUM t_func_std__case[] = {
  2, // locals
  -2, // parameters
  MANDATORY_PARAMETER, var_145_5_expr,
  REST_PARAMETER, var_146_5_values_and_bodies,
  // $n length_of(values_and_bodies)
  var_length_of, 1, var_146_5_values_and_bodies, 1, var_149_4_n,
  // $i 1
  LET, 1, num_1, 1, var_150_4_i,
  // $first_value values_and_bodies(1)
  var_146_5_values_and_bodies, 1, num_1, 1, var_151_4_first_value,
  // is_defined && first_value.is_a_function:
  var_is_defined, 1, var_151_4_first_value, 1, LOCAL(1),
  // is_defined && first_value.is_a_function:
  var_std__and, 2, LOCAL(1), lambda_4, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_5, lambda_11, IO_TAIL_CALL,
  POS(149, 3),
  POS(150, 3),
  POS(151, 3),
  POS(153, 17),
  POS(153, 17),
  POS(152, 3)
};

static FUNCTION_INFO i_func_std__case = {
  t_func_std__case, NULL, 6, 0,
  {}
};

static TAB_NUM t_lambda_4[] = {
  1, // locals
  0, // parameters
  // is_a_function:
  var_is_a_function, 1, var_151_4_first_value, 1, LOCAL(1),
  // first_value.is_a_function:
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(153, 43),
  POS(153, 31)
};

static FUNCTION_INFO i_lambda_4 = {
  t_lambda_4, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_5[] = {
  0, // locals
  0, // parameters
  // !test_function values_and_bodies(1)
  var_146_5_values_and_bodies, 1, num_1, 1, var_test_function,
  // inc &i
  var_inc, 1, var_150_4_i, 1, var_150_4_i,
  // check!
  func_2_check, 0, IO_TAIL_CALL,
  POS(154, 7),
  POS(155, 7),
  POS(156, 7)
};

static FUNCTION_INFO i_lambda_5 = {
  t_lambda_5, NULL, 3, 0,
  {}
};

static TAB_NUM t_func_2_check[] = {
  1, // locals
  0, // parameters
  // n
  var_std__less, 2, var_149_4_n, var_150_4_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), var_pass, lambda_6, IO_TAIL_CALL,
  POS(160, 15),
  POS(159, 9)
};

static FUNCTION_INFO i_func_2_check = {
  t_func_2_check, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_6[] = {
  1, // locals
  0, // parameters
  // i == n:
  var_std__equal, 2, var_150_4_i, var_149_4_n, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_7, lambda_8, IO_TAIL_CALL,
  POS(164, 15),
  POS(163, 13)
};

static FUNCTION_INFO i_lambda_6 = {
  t_lambda_6, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_7[] = {
  1, // locals
  0, // parameters
  // values_and_bodies(n)!
  var_146_5_values_and_bodies, 1, var_149_4_n, 1, LOCAL(1),
  // values_and_bodies(n)!
  LOCAL(1), 0, IO_TAIL_CALL,
  POS(165, 17),
  POS(165, 17)
};

static FUNCTION_INFO i_lambda_7 = {
  t_lambda_7, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_8[] = {
  2, // locals
  0, // parameters
  // $value values_and_bodies(i)
  var_146_5_values_and_bodies, 1, var_150_4_i, 1, LOCAL(2),
  // passes_test(value expr):
  var_passes_test, 2, LOCAL(2), var_145_5_expr, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_9, lambda_10, IO_TAIL_CALL,
  POS(167, 17),
  POS(169, 19),
  POS(168, 17),
  LOCAL(2)
};

static FUNCTION_INFO i_lambda_8 = {
  t_lambda_8, NULL, 3, 1,
  {"167_18_value\000"}
};

static TAB_NUM t_lambda_9[] = {
  2, // locals
  0, // parameters
  // i+1)!
  var_std__plus, 2, var_150_4_i, num_1, 1, LOCAL(1),
  // values_and_bodies(i+1)!
  var_146_5_values_and_bodies, 1, LOCAL(1), 1, LOCAL(2),
  // values_and_bodies(i+1)!
  LOCAL(2), 0, IO_TAIL_CALL,
  POS(170, 39),
  POS(170, 21),
  POS(170, 21)
};

static FUNCTION_INFO i_lambda_9 = {
  t_lambda_9, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_10[] = {
  0, // locals
  0, // parameters
  // plus &i 2
  var_plus, 2, var_150_4_i, num_2, 1, var_150_4_i,
  // check!
  func_2_check, 0, IO_TAIL_CALL,
  POS(172, 21),
  POS(173, 21)
};

static FUNCTION_INFO i_lambda_10 = {
  t_lambda_10, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_11[] = {
  0, // locals
  0, // parameters
  // check!
  func_3_check, 0, IO_TAIL_CALL,
  POS(175, 7)
};

static FUNCTION_INFO i_lambda_11 = {
  t_lambda_11, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_3_check[] = {
  1, // locals
  0, // parameters
  // n
  var_std__less, 2, var_149_4_n, var_150_4_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), var_pass, lambda_12, IO_TAIL_CALL,
  POS(179, 15),
  POS(178, 9)
};

static FUNCTION_INFO i_func_3_check = {
  t_func_3_check, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_12[] = {
  1, // locals
  0, // parameters
  // i == n:
  var_std__equal, 2, var_150_4_i, var_149_4_n, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_13, lambda_14, IO_TAIL_CALL,
  POS(183, 15),
  POS(182, 13)
};

static FUNCTION_INFO i_lambda_12 = {
  t_lambda_12, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_13[] = {
  1, // locals
  0, // parameters
  // values_and_bodies(n)!
  var_146_5_values_and_bodies, 1, var_149_4_n, 1, LOCAL(1),
  // values_and_bodies(n)!
  LOCAL(1), 0, IO_TAIL_CALL,
  POS(184, 17),
  POS(184, 17)
};

static FUNCTION_INFO i_lambda_13 = {
  t_lambda_13, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_14[] = {
  3, // locals
  0, // parameters
  // $value values_and_bodies(i)
  var_146_5_values_and_bodies, 1, var_150_4_i, 1, var_186_18_value,
  // is_defined && does_match(value expr)
  var_is_defined, 1, var_186_18_value, 1, LOCAL(1),
  // is_defined && does_match(value expr)
  var_std__and, 2, LOCAL(1), lambda_15, 1, LOCAL(2),
  // 
  var_std__or, 2, LOCAL(2), lambda_16, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_18, lambda_19, IO_TAIL_CALL,
  POS(186, 17),
  POS(189, 27),
  POS(189, 27),
  POS(188, 21),
  POS(187, 17)
};

static FUNCTION_INFO i_lambda_14 = {
  t_lambda_14, NULL, 5, 0,
  {}
};

static TAB_NUM t_lambda_15[] = {
  1, // locals
  0, // parameters
  // does_match(value expr)
  var_does_match, 2, var_186_18_value, var_145_5_expr, 1, LOCAL(1),
  // does_match(value expr)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(189, 41),
  POS(189, 41)
};

static FUNCTION_INFO i_lambda_15 = {
  t_lambda_15, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_16[] = {
  2, // locals
  0, // parameters
  // is_undefined && expr.is_undefined
  var_is_undefined, 1, var_186_18_value, 1, LOCAL(1),
  // is_undefined && expr.is_undefined
  var_std__and, 2, LOCAL(1), lambda_17, 1, LOCAL(2),
  // value.is_undefined && expr.is_undefined
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(190, 27),
  POS(190, 27),
  POS(190, 21)
};

static FUNCTION_INFO i_lambda_16 = {
  t_lambda_16, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_17[] = {
  1, // locals
  0, // parameters
  // is_undefined
  var_is_undefined, 1, var_145_5_expr, 1, LOCAL(1),
  // expr.is_undefined
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(190, 48),
  POS(190, 43)
};

static FUNCTION_INFO i_lambda_17 = {
  t_lambda_17, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_18[] = {
  2, // locals
  0, // parameters
  // i+1)!
  var_std__plus, 2, var_150_4_i, num_1, 1, LOCAL(1),
  // values_and_bodies(i+1)!
  var_146_5_values_and_bodies, 1, LOCAL(1), 1, LOCAL(2),
  // values_and_bodies(i+1)!
  LOCAL(2), 0, IO_TAIL_CALL,
  POS(192, 39),
  POS(192, 21),
  POS(192, 21)
};

static FUNCTION_INFO i_lambda_18 = {
  t_lambda_18, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_19[] = {
  0, // locals
  0, // parameters
  // plus &i 2
  var_plus, 2, var_150_4_i, num_2, 1, var_150_4_i,
  // check!
  func_3_check, 0, IO_TAIL_CALL,
  POS(194, 21),
  POS(195, 21)
};

static FUNCTION_INFO i_lambda_19 = {
  t_lambda_19, NULL, 2, 0,
  {}
};

static TAB_NUM t_func_std_types__value_range___does_match[] = {
  5, // locals
  2, // parameters
  LOCAL(4), // 203_38_self
  var_203_43_expr,
  // self $lower_bound $upper_bound
  LOCAL(4), 0, 2, LOCAL(5), var_204_22_upper_bound,
  // expr >= lower_bound && expr <= upper_bound
  var_std__less, 2, var_203_43_expr, LOCAL(5), 1, LOCAL(1),
  // expr >= lower_bound && expr <= upper_bound
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // expr >= lower_bound && expr <= upper_bound
  var_std__and, 2, LOCAL(2), lambda_20, 1, LOCAL(3),
  // -> expr >= lower_bound && expr <= upper_bound
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(204, 3),
  POS(205, 6),
  POS(205, 6),
  POS(205, 6),
  POS(205, 3),
  LOCAL(4),
  LOCAL(5)
};

static FUNCTION_INFO i_func_std_types__value_range___does_match = {
  t_func_std_types__value_range___does_match, NULL, 5, 2,
  {"203_38_self\000", "204_9_lower_bound\000"}
};

static TAB_NUM t_lambda_20[] = {
  2, // locals
  0, // parameters
  // upper_bound
  var_std__less, 2, var_204_22_upper_bound, var_203_43_expr, 1, LOCAL(1),
  // upper_bound
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // expr <= upper_bound
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(205, 37),
  POS(205, 37),
  POS(205, 29)
};

static FUNCTION_INFO i_lambda_20 = {
  t_lambda_20, NULL, 3, 0,
  {}
};

static TAB_NUM t_func_std_types__sequence___does_match[] = {
  1, // locals
  2, // parameters
  LOCAL(1), // 207_35_self
  var_207_40_expr,
  // for_each self
  var_for_each, 3, LOCAL(1), lambda_21, lambda_23, TAIL_CALL,
  POS(208, 3),
  LOCAL(1)
};

static FUNCTION_INFO i_func_std_types__sequence___does_match = {
  t_func_std_types__sequence___does_match, NULL, 1, 1,
  {"207_35_self\000"}
};

static TAB_NUM t_lambda_21[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 209_8_item
  // does_match(item expr)
  var_does_match, 2, LOCAL(2), var_207_40_expr, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_22, var_next, TAIL_CALL,
  POS(211, 9),
  POS(210, 7),
  LOCAL(2)
};

static FUNCTION_INFO i_lambda_21 = {
  t_lambda_21, NULL, 2, 1,
  {"209_8_item\000"}
};

static TAB_NUM t_lambda_22[] = {
  0, // locals
  0, // parameters
  //  true
  LET, 1, var_true, TAIL_CALL,
  POS(212, 11)
};

static FUNCTION_INFO i_lambda_22 = {
  t_lambda_22, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_23[] = {
  0, // locals
  0, // parameters
  //  false
  LET, 1, var_false, TAIL_CALL,
  POS(214, 7)
};

static FUNCTION_INFO i_lambda_23 = {
  t_lambda_23, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_std_types__object___passes_test[] = {
  3, // locals
  2, // parameters
  LOCAL(2), // 220_34_self
  LOCAL(3), // 220_39_expr
  // test_function(expr self)
  var_test_function, 2, LOCAL(3), LOCAL(2), 1, LOCAL(1),
  // -> test_function(expr self)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(220, 48),
  POS(220, 45),
  LOCAL(2),
  LOCAL(3)
};

static FUNCTION_INFO i_func_std_types__object___passes_test = {
  t_func_std_types__object___passes_test, NULL, 2, 2,
  {"220_34_self\000", "220_39_expr\000"}
};

static TAB_NUM t_func_std_types__sequence___passes_test[] = {
  1, // locals
  2, // parameters
  LOCAL(1), // 222_36_self
  var_222_41_expr,
  // for_each self
  var_for_each, 3, LOCAL(1), lambda_24, lambda_26, TAIL_CALL,
  POS(223, 3),
  LOCAL(1)
};

static FUNCTION_INFO i_func_std_types__sequence___passes_test = {
  t_func_std_types__sequence___passes_test, NULL, 1, 1,
  {"222_36_self\000"}
};

static TAB_NUM t_lambda_24[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 224_8_item
  // test_function(expr item)
  var_test_function, 2, var_222_41_expr, LOCAL(2), 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_25, var_next, TAIL_CALL,
  POS(226, 9),
  POS(225, 7),
  LOCAL(2)
};

static FUNCTION_INFO i_lambda_24 = {
  t_lambda_24, NULL, 2, 1,
  {"224_8_item\000"}
};

static TAB_NUM t_lambda_25[] = {
  0, // locals
  0, // parameters
  //  true
  LET, 1, var_true, TAIL_CALL,
  POS(227, 11)
};

static FUNCTION_INFO i_lambda_25 = {
  t_lambda_25, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_26[] = {
  0, // locals
  0, // parameters
  //  false
  LET, 1, var_false, TAIL_CALL,
  POS(229, 7)
};

static FUNCTION_INFO i_lambda_26 = {
  t_lambda_26, NULL, 1, 0,
  {}
};

static FUNKY_CONSTANT constants_table[] = {
  {FLT_FUNCTION, 0, {.func_info = &i_func_std__cond}},
  {FLT_POSITIVE_INT64, 0, {.value = 1}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_check}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_1}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_2}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_3}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std__case}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_4}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_5}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_2_check}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_6}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_7}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_8}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_9}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_10}},
  {FLT_POSITIVE_INT64, 0, {.value = 2}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_11}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_3_check}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_12}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_13}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_14}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_15}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_16}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_17}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_18}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_19}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__value_range___does_match}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_20}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__sequence___does_match}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_21}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_22}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_23}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__object___passes_test}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__sequence___passes_test}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_24}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_25}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_26}}
};

static ATTRIBUTE_DEFINITION std_types__object__attributes[] = {
  {var_does_match, -var_equal},
  {var_passes_test, -func_std_types__object___passes_test}
};

static ATTRIBUTE_DEFINITION std_types__undefined__attributes[] = {
  {var_does_match, -var_equal}
};

static ATTRIBUTE_DEFINITION std_types__value_range__attributes[] = {
  {var_does_match, -func_std_types__value_range___does_match}
};

static ATTRIBUTE_DEFINITION std_types__sequence__attributes[] = {
  {var_does_match, -func_std_types__sequence___does_match},
  {var_passes_test, -func_std_types__sequence___passes_test}
};

static FUNKY_VARIABLE variables_table[] = {
  {
    FOT_INITIALIZED, 0, 0,
    "cond\000std", NULL,
    {.const_idx = -func_std__cond}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "83_5_args\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "85_4_i\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "assign\000std", NULL,
    {.position = POS(85, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "86_4_n\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "length_of\000", NULL,
    {.position = POS(86, 6)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "less\000std", NULL,
    {.position = POS(91, 12)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not\000std", NULL,
    {.position = POS(91, 12)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "92_24_body\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000std", NULL,
    {.position = POS(98, 16)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if\000", NULL,
    {.position = POS(93, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "pass\000", NULL,
    {.position = POS(100, 7)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "case\000std", NULL,
    {.const_idx = -func_std__case}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "145_5_expr\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "146_5_values_and_bodies\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "149_4_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "150_4_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "151_4_first_value\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_defined\000", NULL,
    {.position = POS(153, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_a_function\000", NULL,
    {.position = POS(153, 43)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "and\000std", NULL,
    {.position = POS(153, 17)}
  },
  {
    FOT_DERIVED, 0, 0,
    "test_function\000", NULL,
    {"undefined\000"}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "inc\000", NULL,
    {.position = POS(155, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "equal\000std", NULL,
    {.position = POS(164, 15)}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "passes_test\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000", NULL,
    {.position = POS(172, 21)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "186_18_value\000", NULL
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "does_match\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_undefined\000", NULL,
    {.position = POS(190, 27)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "or\000std", NULL,
    {.position = POS(188, 21)}
  },
  {
    FOT_UNKNOWN, 0, 2,
    "object\000std_types", std_types__object__attributes,
    {.position = POS(199, 1)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "equal\000", NULL,
    {.position = POS(199, 31)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "undefined\000std_types", std_types__undefined__attributes,
    {.position = POS(201, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "value_range\000std_types", std_types__value_range__attributes,
    {.position = POS(203, 1)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "203_43_expr\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "204_22_upper_bound\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 2,
    "sequence\000std_types", std_types__sequence__attributes,
    {.position = POS(207, 1)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "207_40_expr\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "true\000", NULL,
    {.position = POS(212, 12)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "next\000", NULL,
    {.position = POS(213, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "false\000", NULL,
    {.position = POS(214, 8)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "for_each\000", NULL,
    {.position = POS(208, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "undefined\000", NULL,
    {.position = POS(216, 16)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "222_41_expr\000", NULL
  }
};

static FUNKY_NAMESPACE used_namespaces[] = {
  {"std", 1, 0}
};

FUNKY_MODULE module__basic__branches = {
  "_basic__branches", // module name
  "basic/branches.fky", // module filename
  .major_version = 0,
  .minor_version = 0,
  .feature_flags = FEAT_POSITIONS|FEAT_FUNCTION_INFO,
  .marker = 0,
  0, // number of required modules
  0, // number of defined namespaces
  1, // number of used namespaces
  37, // number of constants
  44, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  constants_table,
  variables_table,
};
