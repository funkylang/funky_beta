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
  func_std_types__value_range___does_match = -7,
  lambda_4 = -8,
  func_std_types__sequence___does_match = -9,
  lambda_5 = -10,
  lambda_6 = -11,
  lambda_7 = -12,
  func_std__case = -13,
  func_2_check = -14,
  num_0 = -15,
  lambda_8 = -16,
  lambda_9 = -17,
  lambda_10 = -18,
  lambda_11 = -19,
  lambda_12 = -20,
  lambda_13 = -21,
  lambda_14 = -22,
  num_2 = -23,
  lambda_15 = -24,
  num_3 = -25,
  minus_num_1 = -26
};

enum {
  var__START = FIRST_VAR-1,
  var_std__cond, // initialized
  var_64_0_args, // dynamic
  var_66_1_i, // dynamic
  var_std__assign, // extern
  var_67_1_n, // dynamic
  var_length_of, // extern
  var_std__less, // extern
  var_std__not, // extern
  var_73_15_body, // dynamic
  var_std__plus, // extern
  var_if, // extern
  var_pass, // extern
  var_does_match, // attribute
  var_std_types__object, // extern
  var_equal, // extern
  var_std_types__value_range, // extern
  var_87_42_expr, // dynamic
  var_88_19_upper_bound, // dynamic
  var_std__and, // extern
  var_std_types__sequence, // extern
  var_91_39_expr, // dynamic
  var_true, // extern
  var_next, // extern
  var_false, // extern
  var_for_each, // extern
  var_std__case, // initialized
  var_128_0_expr, // dynamic
  var_129_0_values_and_bodies, // dynamic
  var_135_1_n, // dynamic
  var_std__equal, // extern
  var_145_1_value, // dynamic
  var_is_defined, // extern
  var_is_undefined, // extern
  var_std__or, // extern
  var_range, // extern
  var__END
};


static TAB_NUM t_func_std__cond[] = {
  0, // locals
  -1, // parameters
  REST_PARAMETER, var_64_0_args,
  // $i 1
  LET, 1, num_1, 1, var_66_1_i,
  // $n length_of(args)
  var_length_of, 1, var_64_0_args, 1, var_67_1_n,
  // check!
  func_check, 0, IO_TAIL_CALL,
  POS(66, 3),
  POS(67, 3),
  POS(68, 3)
};

static TAB_NUM t_func_check[] = {
  2, // locals
  0, // parameters
  // n:
  var_std__less, 2, var_67_1_n, var_66_1_i, 1, LOCAL(1),
  // n:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_1, var_pass, IO_TAIL_CALL,
  POS(72, 12),
  POS(72, 12),
  POS(71, 5)
};

static TAB_NUM t_lambda_1[] = {
  2, // locals
  0, // parameters
  // args(i) $cond $body
  var_64_0_args, 1, var_66_1_i, 1, LOCAL(1),
  // args(i) $cond $body
  LOCAL(1), 0, 2, LOCAL(2), var_73_15_body,
  // if
  var_if, 3, LOCAL(2), lambda_2, lambda_3, IO_TAIL_CALL,
  POS(73, 9),
  POS(73, 9),
  POS(74, 9)
};

static TAB_NUM t_lambda_2[] = {
  0, // locals
  0, // parameters
  // body!
  var_73_15_body, 0, IO_TAIL_CALL,
  POS(77, 13)
};

static TAB_NUM t_lambda_3[] = {
  0, // locals
  0, // parameters
  // !i i+1
  var_std__plus, 2, var_66_1_i, num_1, 1, var_66_1_i,
  // check!
  func_check, 0, IO_TAIL_CALL,
  POS(79, 13),
  POS(80, 13)
};

static TAB_NUM t_func_std_types__value_range___does_match[] = {
  5, // locals
  2, // parameters
  LOCAL(4), // 87_37_self
  var_87_42_expr,
  // self $lower_bound $upper_bound
  LOCAL(4), 0, 2, LOCAL(5), var_88_19_upper_bound,
  // expr >= lower_bound && expr <= upper_bound
  var_std__less, 2, var_87_42_expr, LOCAL(5), 1, LOCAL(1),
  // expr >= lower_bound && expr <= upper_bound
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // expr >= lower_bound && expr <= upper_bound
  var_std__and, 2, LOCAL(2), lambda_4, 1, LOCAL(3),
  // -> expr >= lower_bound && expr <= upper_bound
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(88, 3),
  POS(89, 6),
  POS(89, 6),
  POS(89, 6),
  POS(89, 3)
};

static TAB_NUM t_lambda_4[] = {
  2, // locals
  0, // parameters
  // upper_bound
  var_std__less, 2, var_88_19_upper_bound, var_87_42_expr, 1, LOCAL(1),
  // upper_bound
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // expr <= upper_bound
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(89, 37),
  POS(89, 37),
  POS(89, 29)
};

static TAB_NUM t_func_std_types__sequence___does_match[] = {
  1, // locals
  2, // parameters
  LOCAL(1), // 91_34_self
  var_91_39_expr,
  // for_each self
  var_for_each, 3, LOCAL(1), lambda_5, lambda_7, TAIL_CALL,
  POS(92, 3)
};

static TAB_NUM t_lambda_5[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 93_3_item
  // does_match(item expr)
  var_does_match, 2, LOCAL(2), var_91_39_expr, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_6, var_next, TAIL_CALL,
  POS(95, 9),
  POS(94, 7)
};

static TAB_NUM t_lambda_6[] = {
  0, // locals
  0, // parameters
  //  true
  LET, 1, var_true, TAIL_CALL,
  POS(96, 11)
};

static TAB_NUM t_lambda_7[] = {
  0, // locals
  0, // parameters
  //  false
  LET, 1, var_false, TAIL_CALL,
  POS(98, 7)
};

static TAB_NUM t_func_std__case[] = {
  0, // locals
  -2, // parameters
  MANDATORY_PARAMETER, var_128_0_expr,
  REST_PARAMETER, var_129_0_values_and_bodies,
  // check!
  func_2_check, 0, IO_TAIL_CALL,
  POS(132, 3)
};

static TAB_NUM t_func_2_check[] = {
  1, // locals
  0, // parameters
  // $n length_of(values_and_bodies)
  var_length_of, 1, var_129_0_values_and_bodies, 1, var_135_1_n,
  // n == 0
  var_std__equal, 2, var_135_1_n, num_0, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), var_pass, lambda_8, IO_TAIL_CALL,
  POS(135, 5),
  POS(137, 7),
  POS(136, 5)
};

static TAB_NUM t_lambda_8[] = {
  1, // locals
  0, // parameters
  // n == 1:
  var_std__equal, 2, var_135_1_n, num_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_9, lambda_10, IO_TAIL_CALL,
  POS(141, 11),
  POS(140, 9)
};

static TAB_NUM t_lambda_9[] = {
  1, // locals
  0, // parameters
  // $body values_and_bodies(1)
  var_129_0_values_and_bodies, 1, num_1, 1, LOCAL(1),
  // body!
  LOCAL(1), 0, IO_TAIL_CALL,
  POS(142, 13),
  POS(143, 13)
};

static TAB_NUM t_lambda_10[] = {
  3, // locals
  0, // parameters
  // $value values_and_bodies(1)
  var_129_0_values_and_bodies, 1, num_1, 1, var_145_1_value,
  // is_defined && does_match(value expr)
  var_is_defined, 1, var_145_1_value, 1, LOCAL(1),
  // is_defined && does_match(value expr)
  var_std__and, 2, LOCAL(1), lambda_11, 1, LOCAL(2),
  // 
  var_std__or, 2, LOCAL(2), lambda_12, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_14, lambda_15, IO_TAIL_CALL,
  POS(145, 13),
  POS(148, 23),
  POS(148, 23),
  POS(147, 17),
  POS(146, 13)
};

static TAB_NUM t_lambda_11[] = {
  1, // locals
  0, // parameters
  // does_match(value expr)
  var_does_match, 2, var_145_1_value, var_128_0_expr, 1, LOCAL(1),
  // does_match(value expr)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(148, 37),
  POS(148, 37)
};

static TAB_NUM t_lambda_12[] = {
  2, // locals
  0, // parameters
  // is_undefined && expr.is_undefined
  var_is_undefined, 1, var_145_1_value, 1, LOCAL(1),
  // is_undefined && expr.is_undefined
  var_std__and, 2, LOCAL(1), lambda_13, 1, LOCAL(2),
  // value.is_undefined && expr.is_undefined
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(149, 23),
  POS(149, 23),
  POS(149, 17)
};

static TAB_NUM t_lambda_13[] = {
  1, // locals
  0, // parameters
  // is_undefined
  var_is_undefined, 1, var_128_0_expr, 1, LOCAL(1),
  // expr.is_undefined
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(149, 44),
  POS(149, 39)
};

static TAB_NUM t_lambda_14[] = {
  1, // locals
  0, // parameters
  // $body values_and_bodies(2)
  var_129_0_values_and_bodies, 1, num_2, 1, LOCAL(1),
  // body!
  LOCAL(1), 0, IO_TAIL_CALL,
  POS(151, 17),
  POS(152, 17)
};

static TAB_NUM t_lambda_15[] = {
  0, // locals
  0, // parameters
  // range &values_and_bodies 3 -1
  var_range, 3, var_129_0_values_and_bodies, num_3, minus_num_1, 1, var_129_0_values_and_bodies,
  // check!
  func_2_check, 0, IO_TAIL_CALL,
  POS(154, 17),
  POS(155, 17)
};

static FUNKY_CONSTANT constants_table[] = {
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__cond}},
  {FLT_POSITIVE_INT64, 0, {.value = 1}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_check}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_3}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__value_range___does_match}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_4}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__sequence___does_match}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_5}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_6}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_7}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__case}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_2_check}},
  {FLT_POSITIVE_INT64, 0, {.value = 0}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_8}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_9}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_10}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_11}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_12}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_13}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_14}},
  {FLT_POSITIVE_INT64, 0, {.value = 2}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_15}},
  {FLT_POSITIVE_INT64, 0, {.value = 3}},
  {FLT_NEGATIVE_INT64, 0, {.value = 1}}
};

static ATTRIBUTE_DEFINITION std_types__object__attributes[] = {
  {var_does_match, -var_equal}
};

static ATTRIBUTE_DEFINITION std_types__value_range__attributes[] = {
  {var_does_match, -func_std_types__value_range___does_match}
};

static ATTRIBUTE_DEFINITION std_types__sequence__attributes[] = {
  {var_does_match, -func_std_types__sequence___does_match}
};

static FUNKY_VARIABLE variables_table[] = {
  {
    FOT_INITIALIZED, 0, 0,
    "cond\000std", NULL,
    {.const_idx = -func_std__cond}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "64_0_args\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "66_1_i\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "assign\000std", NULL,
    {.position = POS(66, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "67_1_n\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "length_of\000", NULL,
    {.position = POS(67, 6)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "less\000std", NULL,
    {.position = POS(72, 12)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not\000std", NULL,
    {.position = POS(72, 12)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "73_15_body\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000std", NULL,
    {.position = POS(79, 16)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if\000", NULL,
    {.position = POS(74, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "pass\000", NULL,
    {.position = POS(81, 7)}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "does_match\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "object\000std_types", std_types__object__attributes,
    {.position = POS(85, 1)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "equal\000", NULL,
    {.position = POS(85, 31)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "value_range\000std_types", std_types__value_range__attributes,
    {.position = POS(87, 1)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "87_42_expr\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "88_19_upper_bound\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "and\000std", NULL,
    {.position = POS(89, 6)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "sequence\000std_types", std_types__sequence__attributes,
    {.position = POS(91, 1)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "91_39_expr\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "true\000", NULL,
    {.position = POS(96, 12)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "next\000", NULL,
    {.position = POS(97, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "false\000", NULL,
    {.position = POS(98, 8)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "for_each\000", NULL,
    {.position = POS(92, 3)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "case\000std", NULL,
    {.const_idx = -func_std__case}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "128_0_expr\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "129_0_values_and_bodies\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "135_1_n\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "equal\000std", NULL,
    {.position = POS(137, 7)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "145_1_value\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_defined\000", NULL,
    {.position = POS(148, 23)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_undefined\000", NULL,
    {.position = POS(149, 23)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "or\000std", NULL,
    {.position = POS(147, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "range\000", NULL,
    {.position = POS(154, 17)}
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
  26, // number of constants
  35, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  constants_table,
  variables_table,
};
