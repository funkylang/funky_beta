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
  lambda_values_and_bodies1_is_a_function = -8,
  func_2_check = -9,
  lambda_4 = -10,
  lambda_5 = -11,
  lambda_6 = -12,
  lambda_7 = -13,
  lambda_8 = -14,
  num_2 = -15,
  lambda_9 = -16,
  func_3_check = -17,
  lambda_10 = -18,
  lambda_11 = -19,
  lambda_12 = -20,
  lambda_13 = -21,
  lambda_14 = -22,
  lambda_15 = -23,
  lambda_16 = -24,
  lambda_17 = -25,
  func_std_types__value_range___does_match = -26,
  lambda_18 = -27,
  func_std_types__sequence___does_match = -28,
  lambda_19 = -29,
  lambda_20 = -30,
  lambda_21 = -31,
  func_std_types__object___passes_test = -32,
  func_std_types__sequence___passes_test = -33,
  lambda_22 = -34,
  lambda_23 = -35,
  lambda_24 = -36
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
  var_is_a_function, // extern
  var_test_function, // derived
  var_inc, // extern
  var_std__equal, // extern
  var_passes_test, // attribute
  var_plus, // extern
  var_185_18_value, // dynamic
  var_is_defined, // extern
  var_does_match, // attribute
  var_std__and, // extern
  var_is_undefined, // extern
  var_std__or, // extern
  var_std_types__object, // extern
  var_equal, // extern
  var_std_types__value_range, // extern
  var_200_43_expr, // dynamic
  var_201_22_upper_bound, // dynamic
  var_std_types__sequence, // extern
  var_204_40_expr, // dynamic
  var_true, // extern
  var_next, // extern
  var_false, // extern
  var_for_each, // extern
  var_undefined, // extern
  var_219_41_expr, // dynamic
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
  POS(93, 9)
};

static TAB_NUM t_lambda_2[] = {
  0, // locals
  0, // parameters
  // body!
  var_92_24_body, 0, IO_TAIL_CALL,
  POS(96, 13)
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

static TAB_NUM t_func_std__case[] = {
  2, // locals
  -2, // parameters
  MANDATORY_PARAMETER, var_145_5_expr,
  REST_PARAMETER, var_146_5_values_and_bodies,
  // $n length_of(values_and_bodies)
  var_length_of, 1, var_146_5_values_and_bodies, 1, var_149_4_n,
  // $i 1
  LET, 1, num_1, 1, var_150_4_i,
  // values_and_bodies(1).is_a_function:
  var_146_5_values_and_bodies, 1, num_1, 1, LOCAL(1),
  // is_a_function:
  var_is_a_function, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_values_and_bodies1_is_a_function, lambda_9, IO_TAIL_CALL,
  POS(149, 3),
  POS(150, 3),
  POS(152, 5),
  POS(152, 26),
  POS(151, 3)
};

static TAB_NUM t_lambda_values_and_bodies1_is_a_function[] = {
  0, // locals
  0, // parameters
  // !test_function values_and_bodies(1)
  var_146_5_values_and_bodies, 1, num_1, 1, var_test_function,
  // inc &i
  var_inc, 1, var_150_4_i, 1, var_150_4_i,
  // check!
  func_2_check, 0, IO_TAIL_CALL,
  POS(153, 7),
  POS(154, 7),
  POS(155, 7)
};

static TAB_NUM t_func_2_check[] = {
  1, // locals
  0, // parameters
  // n
  var_std__less, 2, var_149_4_n, var_150_4_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), var_pass, lambda_4, IO_TAIL_CALL,
  POS(159, 15),
  POS(158, 9)
};

static TAB_NUM t_lambda_4[] = {
  1, // locals
  0, // parameters
  // i == n:
  var_std__equal, 2, var_150_4_i, var_149_4_n, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_5, lambda_6, IO_TAIL_CALL,
  POS(163, 15),
  POS(162, 13)
};

static TAB_NUM t_lambda_5[] = {
  1, // locals
  0, // parameters
  // values_and_bodies(n)!
  var_146_5_values_and_bodies, 1, var_149_4_n, 1, LOCAL(1),
  // values_and_bodies(n)!
  LOCAL(1), 0, IO_TAIL_CALL,
  POS(164, 17),
  POS(164, 17)
};

static TAB_NUM t_lambda_6[] = {
  2, // locals
  0, // parameters
  // $value values_and_bodies(i)
  var_146_5_values_and_bodies, 1, var_150_4_i, 1, LOCAL(2),
  // passes_test(value expr):
  var_passes_test, 2, LOCAL(2), var_145_5_expr, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_7, lambda_8, IO_TAIL_CALL,
  POS(166, 17),
  POS(168, 19),
  POS(167, 17)
};

static TAB_NUM t_lambda_7[] = {
  2, // locals
  0, // parameters
  // i+1)!
  var_std__plus, 2, var_150_4_i, num_1, 1, LOCAL(1),
  // values_and_bodies(i+1)!
  var_146_5_values_and_bodies, 1, LOCAL(1), 1, LOCAL(2),
  // values_and_bodies(i+1)!
  LOCAL(2), 0, IO_TAIL_CALL,
  POS(169, 39),
  POS(169, 21),
  POS(169, 21)
};

static TAB_NUM t_lambda_8[] = {
  0, // locals
  0, // parameters
  // plus &i 2
  var_plus, 2, var_150_4_i, num_2, 1, var_150_4_i,
  // check!
  func_2_check, 0, IO_TAIL_CALL,
  POS(171, 21),
  POS(172, 21)
};

static TAB_NUM t_lambda_9[] = {
  0, // locals
  0, // parameters
  // check!
  func_3_check, 0, IO_TAIL_CALL,
  POS(174, 7)
};

static TAB_NUM t_func_3_check[] = {
  1, // locals
  0, // parameters
  // n
  var_std__less, 2, var_149_4_n, var_150_4_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), var_pass, lambda_10, IO_TAIL_CALL,
  POS(178, 15),
  POS(177, 9)
};

static TAB_NUM t_lambda_10[] = {
  1, // locals
  0, // parameters
  // i == n:
  var_std__equal, 2, var_150_4_i, var_149_4_n, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_11, lambda_12, IO_TAIL_CALL,
  POS(182, 15),
  POS(181, 13)
};

static TAB_NUM t_lambda_11[] = {
  1, // locals
  0, // parameters
  // values_and_bodies(n)!
  var_146_5_values_and_bodies, 1, var_149_4_n, 1, LOCAL(1),
  // values_and_bodies(n)!
  LOCAL(1), 0, IO_TAIL_CALL,
  POS(183, 17),
  POS(183, 17)
};

static TAB_NUM t_lambda_12[] = {
  3, // locals
  0, // parameters
  // $value values_and_bodies(i)
  var_146_5_values_and_bodies, 1, var_150_4_i, 1, var_185_18_value,
  // is_defined && does_match(value expr)
  var_is_defined, 1, var_185_18_value, 1, LOCAL(1),
  // is_defined && does_match(value expr)
  var_std__and, 2, LOCAL(1), lambda_13, 1, LOCAL(2),
  // 
  var_std__or, 2, LOCAL(2), lambda_14, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_16, lambda_17, IO_TAIL_CALL,
  POS(185, 17),
  POS(188, 27),
  POS(188, 27),
  POS(187, 21),
  POS(186, 17)
};

static TAB_NUM t_lambda_13[] = {
  1, // locals
  0, // parameters
  // does_match(value expr)
  var_does_match, 2, var_185_18_value, var_145_5_expr, 1, LOCAL(1),
  // does_match(value expr)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(188, 41),
  POS(188, 41)
};

static TAB_NUM t_lambda_14[] = {
  2, // locals
  0, // parameters
  // is_undefined && expr.is_undefined
  var_is_undefined, 1, var_185_18_value, 1, LOCAL(1),
  // is_undefined && expr.is_undefined
  var_std__and, 2, LOCAL(1), lambda_15, 1, LOCAL(2),
  // value.is_undefined && expr.is_undefined
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(189, 27),
  POS(189, 27),
  POS(189, 21)
};

static TAB_NUM t_lambda_15[] = {
  1, // locals
  0, // parameters
  // is_undefined
  var_is_undefined, 1, var_145_5_expr, 1, LOCAL(1),
  // expr.is_undefined
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(189, 48),
  POS(189, 43)
};

static TAB_NUM t_lambda_16[] = {
  2, // locals
  0, // parameters
  // i+1)!
  var_std__plus, 2, var_150_4_i, num_1, 1, LOCAL(1),
  // values_and_bodies(i+1)!
  var_146_5_values_and_bodies, 1, LOCAL(1), 1, LOCAL(2),
  // values_and_bodies(i+1)!
  LOCAL(2), 0, IO_TAIL_CALL,
  POS(191, 39),
  POS(191, 21),
  POS(191, 21)
};

static TAB_NUM t_lambda_17[] = {
  0, // locals
  0, // parameters
  // plus &i 2
  var_plus, 2, var_150_4_i, num_2, 1, var_150_4_i,
  // check!
  func_3_check, 0, IO_TAIL_CALL,
  POS(193, 21),
  POS(194, 21)
};

static TAB_NUM t_func_std_types__value_range___does_match[] = {
  5, // locals
  2, // parameters
  LOCAL(4), // 200_38_self
  var_200_43_expr,
  // self $lower_bound $upper_bound
  LOCAL(4), 0, 2, LOCAL(5), var_201_22_upper_bound,
  // expr >= lower_bound && expr <= upper_bound
  var_std__less, 2, var_200_43_expr, LOCAL(5), 1, LOCAL(1),
  // expr >= lower_bound && expr <= upper_bound
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // expr >= lower_bound && expr <= upper_bound
  var_std__and, 2, LOCAL(2), lambda_18, 1, LOCAL(3),
  // -> expr >= lower_bound && expr <= upper_bound
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(201, 3),
  POS(202, 6),
  POS(202, 6),
  POS(202, 6),
  POS(202, 3)
};

static TAB_NUM t_lambda_18[] = {
  2, // locals
  0, // parameters
  // upper_bound
  var_std__less, 2, var_201_22_upper_bound, var_200_43_expr, 1, LOCAL(1),
  // upper_bound
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // expr <= upper_bound
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(202, 37),
  POS(202, 37),
  POS(202, 29)
};

static TAB_NUM t_func_std_types__sequence___does_match[] = {
  1, // locals
  2, // parameters
  LOCAL(1), // 204_35_self
  var_204_40_expr,
  // for_each self
  var_for_each, 3, LOCAL(1), lambda_19, lambda_21, TAIL_CALL,
  POS(205, 3)
};

static TAB_NUM t_lambda_19[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 206_8_item
  // does_match(item expr)
  var_does_match, 2, LOCAL(2), var_204_40_expr, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_20, var_next, TAIL_CALL,
  POS(208, 9),
  POS(207, 7)
};

static TAB_NUM t_lambda_20[] = {
  0, // locals
  0, // parameters
  //  true
  LET, 1, var_true, TAIL_CALL,
  POS(209, 11)
};

static TAB_NUM t_lambda_21[] = {
  0, // locals
  0, // parameters
  //  false
  LET, 1, var_false, TAIL_CALL,
  POS(211, 7)
};

static TAB_NUM t_func_std_types__object___passes_test[] = {
  3, // locals
  2, // parameters
  LOCAL(2), // 217_34_self
  LOCAL(3), // 217_39_expr
  // test_function(expr self)
  var_test_function, 2, LOCAL(3), LOCAL(2), 1, LOCAL(1),
  // -> test_function(expr self)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(217, 48),
  POS(217, 45)
};

static TAB_NUM t_func_std_types__sequence___passes_test[] = {
  1, // locals
  2, // parameters
  LOCAL(1), // 219_36_self
  var_219_41_expr,
  // for_each self
  var_for_each, 3, LOCAL(1), lambda_22, lambda_24, TAIL_CALL,
  POS(220, 3)
};

static TAB_NUM t_lambda_22[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 221_8_item
  // test_function(expr item)
  var_test_function, 2, var_219_41_expr, LOCAL(2), 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_23, var_next, TAIL_CALL,
  POS(223, 9),
  POS(222, 7)
};

static TAB_NUM t_lambda_23[] = {
  0, // locals
  0, // parameters
  //  true
  LET, 1, var_true, TAIL_CALL,
  POS(224, 11)
};

static TAB_NUM t_lambda_24[] = {
  0, // locals
  0, // parameters
  //  false
  LET, 1, var_false, TAIL_CALL,
  POS(226, 7)
};

static FUNKY_CONSTANT constants_table[] = {
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__cond}},
  {FLT_POSITIVE_INT64, 0, {.value = 1}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_check}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_3}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__case}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_values_and_bodies1_is_a_function}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_2_check}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_4}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_5}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_6}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_7}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_8}},
  {FLT_POSITIVE_INT64, 0, {.value = 2}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_9}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_3_check}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_10}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_11}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_12}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_13}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_14}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_15}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_16}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_17}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__value_range___does_match}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_18}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__sequence___does_match}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_19}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_20}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_21}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__object___passes_test}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__sequence___passes_test}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_22}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_23}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_24}}
};

static ATTRIBUTE_DEFINITION std_types__object__attributes[] = {
  {var_does_match, -var_equal},
  {var_passes_test, -func_std_types__object___passes_test}
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
    FOT_UNKNOWN, 0, 0,
    "is_a_function\000", NULL,
    {.position = POS(152, 26)}
  },
  {
    FOT_DERIVED, 0, 0,
    "test_function\000", NULL,
    {"undefined\000"}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "inc\000", NULL,
    {.position = POS(154, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "equal\000std", NULL,
    {.position = POS(163, 15)}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "passes_test\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000", NULL,
    {.position = POS(171, 21)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "185_18_value\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_defined\000", NULL,
    {.position = POS(188, 27)}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "does_match\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "and\000std", NULL,
    {.position = POS(188, 27)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_undefined\000", NULL,
    {.position = POS(189, 27)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "or\000std", NULL,
    {.position = POS(187, 21)}
  },
  {
    FOT_UNKNOWN, 0, 2,
    "object\000std_types", std_types__object__attributes,
    {.position = POS(198, 1)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "equal\000", NULL,
    {.position = POS(198, 31)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "value_range\000std_types", std_types__value_range__attributes,
    {.position = POS(200, 1)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "200_43_expr\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "201_22_upper_bound\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 2,
    "sequence\000std_types", std_types__sequence__attributes,
    {.position = POS(204, 1)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "204_40_expr\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "true\000", NULL,
    {.position = POS(209, 12)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "next\000", NULL,
    {.position = POS(210, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "false\000", NULL,
    {.position = POS(211, 8)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "for_each\000", NULL,
    {.position = POS(205, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "undefined\000", NULL,
    {.position = POS(213, 16)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "219_41_expr\000", NULL
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
  .feature_flags = FEAT_POSITIONS,
  .marker = 0,
  0, // number of required modules
  0, // number of defined namespaces
  1, // number of used namespaces
  36, // number of constants
  42, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  constants_table,
  variables_table,
};
