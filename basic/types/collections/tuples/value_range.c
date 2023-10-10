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
  func_std_types__value_range___for_each = -6,
  func_std_types__value_range___map = -7,
  func_map = -8,
  num_2 = -9,
  lambda_1 = -10,
  lambda_2 = -11,
  lambda_3 = -12,
  lambda_4 = -13,
  func_std_types__value_range___std__reduce = -14,
  func_reduce = -15,
  lambda_5 = -16,
  lambda_6 = -17,
  func_std_types__value_range___map_reduce = -18,
  func_map_reduce = -19,
  lambda_7 = -20,
  lambda_8 = -21,
  func_std__value_range = -22
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
  var_for_each, // extern polymorphic
  var_next, // extern
  var_from_to, // extern
  var_map, // extern polymorphic
  var_100_0_function, // dynamic
  var_102_7_from, // dynamic
  var_102_12_to, // dynamic
  var_103_1_n, // dynamic
  var_std__less, // extern
  var_std__not, // extern
  var_std__shift_right, // extern
  var_append, // extern
  var_std__equal, // extern
  var_list, // extern
  var_empty_list, // extern
  var_if, // extern
  var_std__reduce, // extern polymorphic
  var_130_0_function, // dynamic
  var_132_10_from, // dynamic
  var_132_15_to, // dynamic
  var_133_1_n, // dynamic
  var_map_reduce, // extern polymorphic
  var_154_0_map_function, // dynamic
  var_155_0_reduce_function, // dynamic
  var_157_14_from, // dynamic
  var_157_19_to, // dynamic
  var_158_1_n, // dynamic
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

static TAB_NUM t_func_std_types__value_range___for_each[] = {
  5, // locals
  -3, // parameters
  MANDATORY_PARAMETER, LOCAL(1), // 86_0_self
  MANDATORY_PARAMETER, LOCAL(2), // 87_0_body
  var_next, LOCAL(3), // 88_0_finally
  // self $low $high
  LOCAL(1), 0, 2, LOCAL(4), LOCAL(5),
  // from_to! low high body finally
  var_from_to, 4, LOCAL(4), LOCAL(5), LOCAL(2), LOCAL(3), IO_TAIL_CALL,
  POS(90, 3),
  POS(91, 3)
};

static TAB_NUM t_func_std_types__value_range___map[] = {
  3, // locals
  2, // parameters
  LOCAL(1), // 99_0_self
  var_100_0_function,
  // self $lower_bound $upper_bound
  LOCAL(1), 0, 2, LOCAL(2), LOCAL(3),
  // map lower_bound upper_bound
  func_map, 2, LOCAL(2), LOCAL(3), TAIL_CALL,
  POS(116, 3),
  POS(117, 3)
};

static TAB_NUM t_func_map[] = {
  2, // locals
  2, // parameters
  var_102_7_from,
  var_102_12_to,
  // to+1-from
  var_std__plus, 2, var_102_12_to, num_1, 1, LOCAL(1),
  // $n to+1-from
  var_std__minus, 2, LOCAL(1), var_102_7_from, 1, var_103_1_n,
  // n >= 2:
  var_std__less, 2, var_103_1_n, num_2, 1, LOCAL(1),
  // n >= 2:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_1, lambda_2, TAIL_CALL,
  POS(103, 8),
  POS(103, 5),
  POS(105, 7),
  POS(105, 7),
  POS(104, 5)
};

static TAB_NUM t_lambda_1[] = {
  6, // locals
  0, // parameters
  // $m n >> 1
  var_std__shift_right, 2, var_103_1_n, num_1, 1, LOCAL(6),
  // from+m-1)
  var_std__plus, 2, var_102_7_from, LOCAL(6), 1, LOCAL(1),
  // from+m-1)
  var_std__minus, 2, LOCAL(1), num_1, 1, LOCAL(2),
  // map(from from+m-1)
  func_map, 2, var_102_7_from, LOCAL(2), 1, LOCAL(3),
  // from+m to)
  var_std__plus, 2, var_102_7_from, LOCAL(6), 1, LOCAL(4),
  // map(from+m to)
  func_map, 2, LOCAL(4), var_102_12_to, 1, LOCAL(5),
  // append
  var_append, 2, LOCAL(3), LOCAL(5), TAIL_CALL,
  POS(106, 9),
  POS(108, 20),
  POS(108, 20),
  POS(108, 11),
  POS(109, 15),
  POS(109, 11),
  POS(107, 9)
};

static TAB_NUM t_lambda_2[] = {
  1, // locals
  0, // parameters
  // n == 1
  var_std__equal, 2, var_103_1_n, num_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_3, lambda_4, TAIL_CALL,
  POS(112, 11),
  POS(111, 9)
};

static TAB_NUM t_lambda_3[] = {
  1, // locals
  0, // parameters
  // function(from)
  var_100_0_function, 1, var_102_7_from, 1, LOCAL(1),
  // list function(from)
  var_list, 1, LOCAL(1), TAIL_CALL,
  POS(113, 18),
  POS(113, 13)
};

static TAB_NUM t_lambda_4[] = {
  0, // locals
  0, // parameters
  //  empty_list
  LET, 1, var_empty_list, TAIL_CALL,
  POS(114, 13)
};

static TAB_NUM t_func_std_types__value_range___std__reduce[] = {
  3, // locals
  2, // parameters
  LOCAL(1), // 129_0_self
  var_130_0_function,
  // self $lower_bound $upper_bound
  LOCAL(1), 0, 2, LOCAL(2), LOCAL(3),
  // reduce lower_bound upper_bound
  func_reduce, 2, LOCAL(2), LOCAL(3), TAIL_CALL,
  POS(142, 3),
  POS(143, 3)
};

static TAB_NUM t_func_reduce[] = {
  2, // locals
  2, // parameters
  var_132_10_from,
  var_132_15_to,
  // to+1-from
  var_std__plus, 2, var_132_15_to, num_1, 1, LOCAL(1),
  // $n to+1-from
  var_std__minus, 2, LOCAL(1), var_132_10_from, 1, var_133_1_n,
  // n >= 2:
  var_std__less, 2, var_133_1_n, num_2, 1, LOCAL(1),
  // n >= 2:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_5, lambda_6, TAIL_CALL,
  POS(133, 8),
  POS(133, 5),
  POS(135, 7),
  POS(135, 7),
  POS(134, 5)
};

static TAB_NUM t_lambda_5[] = {
  6, // locals
  0, // parameters
  // $m n >> 1
  var_std__shift_right, 2, var_133_1_n, num_1, 1, LOCAL(6),
  // from+m-1)
  var_std__plus, 2, var_132_10_from, LOCAL(6), 1, LOCAL(1),
  // from+m-1)
  var_std__minus, 2, LOCAL(1), num_1, 1, LOCAL(2),
  // reduce(from from+m-1)
  func_reduce, 2, var_132_10_from, LOCAL(2), 1, LOCAL(3),
  // from+m to)
  var_std__plus, 2, var_132_10_from, LOCAL(6), 1, LOCAL(4),
  // reduce(from+m to)
  func_reduce, 2, LOCAL(4), var_132_15_to, 1, LOCAL(5),
  // function
  var_130_0_function, 2, LOCAL(3), LOCAL(5), TAIL_CALL,
  POS(136, 9),
  POS(138, 23),
  POS(138, 23),
  POS(138, 11),
  POS(139, 18),
  POS(139, 11),
  POS(137, 9)
};

static TAB_NUM t_lambda_6[] = {
  0, // locals
  0, // parameters
  //  from
  LET, 1, var_132_10_from, TAIL_CALL,
  POS(140, 9)
};

static TAB_NUM t_func_std_types__value_range___map_reduce[] = {
  3, // locals
  -3, // parameters
  MANDATORY_PARAMETER, LOCAL(1), // 153_0_self
  MANDATORY_PARAMETER, var_154_0_map_function,
  var_append, var_155_0_reduce_function,
  // self $lower_bound $upper_bound
  LOCAL(1), 0, 2, LOCAL(2), LOCAL(3),
  // map_reduce lower_bound upper_bound
  func_map_reduce, 2, LOCAL(2), LOCAL(3), TAIL_CALL,
  POS(167, 3),
  POS(168, 3)
};

static TAB_NUM t_func_map_reduce[] = {
  2, // locals
  2, // parameters
  var_157_14_from,
  var_157_19_to,
  // to+1-from
  var_std__plus, 2, var_157_19_to, num_1, 1, LOCAL(1),
  // $n to+1-from
  var_std__minus, 2, LOCAL(1), var_157_14_from, 1, var_158_1_n,
  // n >= 2:
  var_std__less, 2, var_158_1_n, num_2, 1, LOCAL(1),
  // n >= 2:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_7, lambda_8, TAIL_CALL,
  POS(158, 8),
  POS(158, 5),
  POS(160, 7),
  POS(160, 7),
  POS(159, 5)
};

static TAB_NUM t_lambda_7[] = {
  6, // locals
  0, // parameters
  // $m n >> 1
  var_std__shift_right, 2, var_158_1_n, num_1, 1, LOCAL(6),
  // from+m-1)
  var_std__plus, 2, var_157_14_from, LOCAL(6), 1, LOCAL(1),
  // from+m-1)
  var_std__minus, 2, LOCAL(1), num_1, 1, LOCAL(2),
  // map_reduce(from from+m-1)
  func_map_reduce, 2, var_157_14_from, LOCAL(2), 1, LOCAL(3),
  // from+m to)
  var_std__plus, 2, var_157_14_from, LOCAL(6), 1, LOCAL(4),
  // map_reduce(from+m to)
  func_map_reduce, 2, LOCAL(4), var_157_19_to, 1, LOCAL(5),
  // reduce_function
  var_155_0_reduce_function, 2, LOCAL(3), LOCAL(5), TAIL_CALL,
  POS(161, 9),
  POS(163, 27),
  POS(163, 27),
  POS(163, 11),
  POS(164, 22),
  POS(164, 11),
  POS(162, 9)
};

static TAB_NUM t_lambda_8[] = {
  1, // locals
  0, // parameters
  // map_function(from)
  var_154_0_map_function, 1, var_157_14_from, 1, LOCAL(1),
  //  map_function(from)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(165, 10),
  POS(165, 9)
};

static TAB_NUM t_func_std__value_range[] = {
  2, // locals
  2, // parameters
  LOCAL(1), // 195_0_lower_bound
  LOCAL(2), // 196_0_upper_bound
  // new std_types::value_range lower_bound upper_bound
  var_new, 3, var_std_types__value_range, LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(198, 3)
};

static FUNKY_CONSTANT constants_table[] = {
  {FLT_STRING_8, 11, {.str_8 = "value_range"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__value_range___lower_bound_of}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__value_range___upper_bound_of}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__value_range___length_of}},
  {FLT_POSITIVE_INT64, 0, {.value = 1}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__value_range___for_each}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__value_range___map}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_map}},
  {FLT_POSITIVE_INT64, 0, {.value = 2}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_3}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_4}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__value_range___std__reduce}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_reduce}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_5}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_6}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__value_range___map_reduce}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_map_reduce}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_7}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_8}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__value_range}}
};

static ATTRIBUTE_DEFINITION std_types__value_range__attributes[] = {
  {-var_subtype_of, -str_value_range},
  {-var_is_a_value_range, -var_true},
  {var_lower_bound_of, -func_std_types__value_range___lower_bound_of},
  {var_upper_bound_of, -func_std_types__value_range___upper_bound_of},
  {var_length_of, -func_std_types__value_range___length_of},
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
    "assign\000std", NULL
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "upper_bound_of\000std", NULL,
    {.has_a_setter = true}
  },
  {
    FOT_UNKNOWN, 0, 10,
    "value_range\000std_types", std_types__value_range__attributes
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "subtype_of\000", NULL
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "is_a_value_range\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "object\000std_types", std_types__object__attributes
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "is_a_value_range\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "false\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "true\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "lower_bound_of\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "upper_bound_of\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "length_of\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000std", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "minus\000std", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "for_each\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "next\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "from_to\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "map\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "100_0_function\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "102_7_from\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "102_12_to\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "103_1_n\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "less\000std", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not\000std", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "shift_right\000std", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "append\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "equal\000std", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "list\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_list\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "reduce\000std", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "130_0_function\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "132_10_from\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "132_15_to\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "133_1_n\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "map_reduce\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "154_0_map_function\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "155_0_reduce_function\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "157_14_from\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "157_19_to\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "158_1_n\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "value_range\000std", NULL,
    {.const_idx = -func_std__value_range}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "new\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "serialization_tag_of\000", NULL
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
  22, // number of constants
  45, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  constants_table,
  variables_table,
};
