#include <stddef.h>
#include <stdint.h>

#include "runtime/common.h"
#include "runtime/builtins.h"
#include "runtime/fko.h"
#include "runtime/memory.h"

enum {
  num_1 = -1,
  num_0 = -2,
  func_get_next_value = -3,
  func_add_more_random = -4,
  lambda_1 = -5,
  lambda_2 = -6,
  lambda_3 = -7,
  lambda_4 = -8,
  lambda_5 = -9,
  func_std_types__random_number_generator___next_value = -10,
  lambda_6 = -11
};

enum {
  var__START = FIRST_VAR-1,
  var_std__is_a_random_number_generator, // attribute
  var_std__assign, // extern
  var_std_types__object, // extern
  var_is_a_random_number_generator, // extern polymorphic
  var_false, // extern
  var_std_types__random_number_generator, // derived
  var_true, // extern
  var_std__next_raw_value, // attribute
  var_std__modulus_of, // attribute
  var_residual_random_of, // attribute
  var_residual_modulus_of, // attribute
  var_std_types__iterator, // extern
  var_47_18_rng, // dynamic
  var_47_22_n, // dynamic
  var_50_1_rm, // dynamic
  var_51_1_rr, // dynamic
  var_54_1_m, // dynamic
  var_modulus_of, // extern
  var_55_21_r, // dynamic
  var_next_raw_value, // extern
  var_std__times, // extern
  var_std__plus, // extern
  var_58_1_range_count, // dynamic
  var_div, // extern
  var_59_1_range_no, // dynamic
  var_std__less, // extern
  var_std__minus, // extern
  var_if, // extern
  var_std__not, // extern
  var_75_1_range_count, // dynamic
  var_76_1_range_no, // dynamic
  var_next_value, // extern polymorphic
  var_91_54_n, // dynamic
  var_is_a_value_range, // extern
  var__END
};


static TAB_NUM t_func_get_next_value[] = {
  2, // locals
  2, // parameters
  var_47_18_rng,
  var_47_22_n,
  // $rm residual_modulus_of(rng)
  var_residual_modulus_of, 1, var_47_18_rng, 1, var_50_1_rm,
  // $rr residual_random_of(rng)
  var_residual_random_of, 1, var_47_18_rng, 1, var_51_1_rr,
  // rm:
  var_std__less, 2, var_50_1_rm, var_47_22_n, 1, LOCAL(1),
  // rm:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_3, func_add_more_random, TAIL_CALL,
  POS(50, 3),
  POS(51, 3),
  POS(74, 10),
  POS(74, 10),
  POS(73, 3)
};

static TAB_NUM t_func_add_more_random[] = {
  1, // locals
  0, // parameters
  // $m modulus_of(rng)
  var_modulus_of, 1, var_47_18_rng, 1, var_54_1_m,
  // next_raw_value &rng $r
  var_next_raw_value, 1, var_47_18_rng, 2, var_47_18_rng, var_55_21_r,
  // rr*m+r
  var_std__times, 2, var_51_1_rr, var_54_1_m, 1, LOCAL(1),
  // !r rr*m+r
  var_std__plus, 2, LOCAL(1), var_55_21_r, 1, var_55_21_r,
  // !m rm*m
  var_std__times, 2, var_50_1_rm, var_54_1_m, 1, var_54_1_m,
  // $range_count m .div. n
  var_div, 2, var_54_1_m, var_47_22_n, 1, var_58_1_range_count,
  // $range_no r .div. n
  var_div, 2, var_55_21_r, var_47_22_n, 1, var_59_1_range_no,
  // range_no < range_count
  var_std__less, 2, var_59_1_range_no, var_58_1_range_count, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1, lambda_2, TAIL_CALL,
  POS(54, 5),
  POS(55, 5),
  POS(56, 8),
  POS(56, 5),
  POS(57, 5),
  POS(58, 5),
  POS(59, 5),
  POS(61, 7),
  POS(60, 5)
};

static TAB_NUM t_lambda_1[] = {
  3, // locals
  0, // parameters
  // rng
  LET, -2, var_47_18_rng, var_residual_modulus_of, var_58_1_range_count, var_residual_random_of, var_59_1_range_no, LOCAL(1),
  // n*range_no
  var_std__times, 2, var_47_22_n, var_59_1_range_no, 1, LOCAL(2),
  // r-n*range_no
  var_std__minus, 2, var_55_21_r, LOCAL(2), 1, LOCAL(3),
  // 
  LET, 2, LOCAL(1), LOCAL(3), TAIL_CALL,
  POS(63, 9),
  POS(66, 11),
  POS(66, 9),
  POS(62, 9)
};

static TAB_NUM t_lambda_2[] = {
  1, // locals
  0, // parameters
  // $base range_count*n
  var_std__times, 2, var_58_1_range_count, var_47_22_n, 1, LOCAL(1),
  // !rm m-base
  var_std__minus, 2, var_54_1_m, LOCAL(1), 1, var_50_1_rm,
  // !rr r-base
  var_std__minus, 2, var_55_21_r, LOCAL(1), 1, var_51_1_rr,
  // add_more_random
  func_add_more_random, 0, TAIL_CALL,
  POS(68, 9),
  POS(69, 9),
  POS(70, 9),
  POS(71, 9)
};

static TAB_NUM t_lambda_3[] = {
  1, // locals
  0, // parameters
  // $range_count rm .div. n
  var_div, 2, var_50_1_rm, var_47_22_n, 1, var_75_1_range_count,
  // $range_no rr .div. n
  var_div, 2, var_51_1_rr, var_47_22_n, 1, var_76_1_range_no,
  // range_no < range_count
  var_std__less, 2, var_76_1_range_no, var_75_1_range_count, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_4, lambda_5, TAIL_CALL,
  POS(75, 7),
  POS(76, 7),
  POS(78, 9),
  POS(77, 7)
};

static TAB_NUM t_lambda_4[] = {
  3, // locals
  0, // parameters
  // rng
  LET, -2, var_47_18_rng, var_residual_modulus_of, var_75_1_range_count, var_residual_random_of, var_76_1_range_no, LOCAL(1),
  // n*range_no
  var_std__times, 2, var_47_22_n, var_76_1_range_no, 1, LOCAL(2),
  // rr-n*range_no
  var_std__minus, 2, var_51_1_rr, LOCAL(2), 1, LOCAL(3),
  // 
  LET, 2, LOCAL(1), LOCAL(3), TAIL_CALL,
  POS(80, 11),
  POS(83, 14),
  POS(83, 11),
  POS(79, 11)
};

static TAB_NUM t_lambda_5[] = {
  1, // locals
  0, // parameters
  // $base range_count*n
  var_std__times, 2, var_75_1_range_count, var_47_22_n, 1, LOCAL(1),
  // !rm rm-base
  var_std__minus, 2, var_50_1_rm, LOCAL(1), 1, var_50_1_rm,
  // !rr rr-base
  var_std__minus, 2, var_51_1_rr, LOCAL(1), 1, var_51_1_rr,
  // add_more_random
  func_add_more_random, 0, TAIL_CALL,
  POS(85, 11),
  POS(86, 11),
  POS(87, 11),
  POS(88, 11)
};

static TAB_NUM t_func_std_types__random_number_generator___next_value[] = {
  6, // locals
  2, // parameters
  LOCAL(3), // 91_49_self
  var_91_54_n,
  // is_a_value_range
  var_is_a_value_range, 1, var_91_54_n, 1, LOCAL(1),
  // if $low $high
  var_if, 3, LOCAL(1), var_91_54_n, lambda_6, 2, LOCAL(4), LOCAL(5),
  // high+1-low
  var_std__plus, 2, LOCAL(5), num_1, 1, LOCAL(1),
  // high+1-low
  var_std__minus, 2, LOCAL(1), LOCAL(4), 1, LOCAL(2),
  // get_next_value &self $r high+1-low
  func_get_next_value, 2, LOCAL(3), LOCAL(2), 2, LOCAL(3), LOCAL(6),
  // low+r
  var_std__plus, 2, LOCAL(4), LOCAL(6), 1, LOCAL(1),
  // -> self low+r
  LET, 2, LOCAL(3), LOCAL(1), TAIL_CALL,
  POS(93, 7),
  POS(92, 3),
  POS(96, 27),
  POS(96, 27),
  POS(96, 3),
  POS(97, 11),
  POS(97, 3)
};

static TAB_NUM t_lambda_6[] = {
  0, // locals
  0, // parameters
  //  1 n
  LET, 2, num_1, var_91_54_n, TAIL_CALL,
  POS(95, 7)
};

static FUNKY_CONSTANT constants_table[] = {
  {FLT_POSITIVE_INT64, 0, {.value = 1}},
  {FLT_POSITIVE_INT64, 0, {.value = 0}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_get_next_value}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_add_more_random}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_3}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_4}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_5}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__random_number_generator___next_value}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_6}}
};

static ATTRIBUTE_DEFINITION std_types__object__attributes[] = {
  {-var_is_a_random_number_generator, -var_false}
};

static ATTRIBUTE_DEFINITION std_types__random_number_generator__attributes[] = {
  {-var_is_a_random_number_generator, -var_true},
  {-var_residual_modulus_of, -num_1},
  {-var_residual_random_of, -num_0},
  {var_next_value, -func_std_types__random_number_generator___next_value}
};

static FUNKY_VARIABLE variables_table[] = {
  {
    FOT_POLYMORPHIC, 0, 0,
    "is_a_random_number_generator\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "assign\000std", NULL,
    {.position = POS(28, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "object\000std_types", std_types__object__attributes,
    {.position = POS(32, 1)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "is_a_random_number_generator\000", NULL,
    {.position = POS(32, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "false\000", NULL,
    {.position = POS(32, 49)}
  },
  {
    FOT_DERIVED, 0, 4,
    "random_number_generator\000std_types", std_types__random_number_generator__attributes,
    {"iterator\000std_types"}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "true\000", NULL,
    {.position = POS(33, 66)}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "next_raw_value\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "modulus_of\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "residual_random_of\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "residual_modulus_of\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "iterator\000std_types", NULL,
    {.position = POS(40, 37)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "47_18_rng\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "47_22_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "50_1_rm\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "51_1_rr\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "54_1_m\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "modulus_of\000", NULL,
    {.position = POS(54, 8)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "55_21_r\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "next_raw_value\000", NULL,
    {.position = POS(55, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "times\000std", NULL,
    {.position = POS(56, 8)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000std", NULL,
    {.position = POS(56, 8)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "58_1_range_count\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "div\000", NULL,
    {.position = POS(58, 18)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "59_1_range_no\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "less\000std", NULL,
    {.position = POS(61, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "minus\000std", NULL,
    {.position = POS(66, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if\000", NULL,
    {.position = POS(60, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not\000std", NULL,
    {.position = POS(74, 10)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "75_1_range_count\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "76_1_range_no\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "next_value\000", NULL,
    {.position = POS(91, 37)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "91_54_n\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_a_value_range\000", NULL,
    {.position = POS(93, 7)}
  }
};

static FUNKY_NAMESPACE used_namespaces[] = {
  {"std", 1, 0}
};

FUNKY_MODULE module__basic__types__iterators__random__random = {
  "_basic__types__iterators__random__random", // module name
  "basic/types/iterators/random/random.fky", // module filename
  .major_version = 0,
  .minor_version = 0,
  .feature_flags = FEAT_POSITIONS,
  .marker = 0,
  0, // number of required modules
  0, // number of defined namespaces
  1, // number of used namespaces
  11, // number of constants
  34, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  constants_table,
  variables_table,
};
