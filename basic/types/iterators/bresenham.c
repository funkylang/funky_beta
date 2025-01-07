#include <stddef.h>
#include <stdint.h>

#include "runtime/common.h"
#include "runtime/builtins.h"
#include "runtime/fko.h"
#include "runtime/memory.h"

enum {
  func_std__bresenham = -1,
  num_1 = -2,
  func_std_types__bresenham_iterator___next_value = -3,
  num_0 = -4,
  lambda_1 = -5,
  func_return = -6,
  func_std__bresenham_delta = -7,
  func_std_types__bresenham_delta_iterator___next_value = -8,
  lambda_2 = -9,
  func_2_return = -10
};

enum {
  var__START = FIRST_VAR-1,
  var_delta_of, // attribute
  var_std__assign, // extern
  var_base_increment_of, // attribute
  var_additional_increment_of, // attribute
  var_steps_of, // attribute
  var_value_of, // attribute
  var_error_of, // attribute
  var_std__bresenham, // initialized
  var_std__minus, // extern
  var_abs, // extern
  var_sgn, // extern
  var_mod, // extern
  var_div, // extern
  var_std__times, // extern
  var_std__shift_right, // extern
  var_std_types__bresenham_iterator, // derived
  var_length_of, // extern polymorphic
  var_std_types__iterator, // extern
  var_undefined, // extern
  var_next_value, // extern polymorphic
  var_65_45_self, // dynamic
  var_66_4_error, // dynamic
  var_67_4_value, // dynamic
  var_68_4_new_value, // dynamic
  var_plus, // extern
  var_std__less, // extern
  var_if, // extern
  var_std__bresenham_delta, // initialized
  var_std_types__bresenham_delta_iterator, // derived
  var_109_51_self, // dynamic
  var_110_4_error, // dynamic
  var_111_4_new_value, // dynamic
  var_inc, // extern
  var__END
};


static TAB_NUM t_func_std__bresenham[] = {
  11, // locals
  3, // parameters
  LOCAL(5), // 38_5_count
  LOCAL(6), // 39_5_first
  LOCAL(7), // 40_5_last
  // last-first)
  var_std__minus, 2, LOCAL(7), LOCAL(6), 1, LOCAL(1),
  // $delta abs(last-first)
  var_abs, 1, LOCAL(1), 1, LOCAL(8),
  // last-first)
  var_std__minus, 2, LOCAL(7), LOCAL(6), 1, LOCAL(1),
  // $sign sgn(last-first)
  var_sgn, 1, LOCAL(1), 1, LOCAL(9),
  // $steps count-1
  var_std__minus, 2, LOCAL(5), num_1, 1, LOCAL(10),
  // $d delta .mod. steps
  var_mod, 2, LOCAL(8), LOCAL(10), 1, LOCAL(11),
  // div(delta steps)
  var_div, 2, LOCAL(8), LOCAL(10), 1, LOCAL(1),
  // sign*div(delta steps)
  var_std__times, 2, LOCAL(9), LOCAL(1), 1, LOCAL(2),
  // steps >> 1
  var_std__shift_right, 2, LOCAL(10), num_1, 1, LOCAL(3),
  // std_types::bresenham_iterator
  LET, -7, var_std_types__bresenham_iterator, var_length_of, LOCAL(5), var_delta_of, LOCAL(11), var_base_increment_of, LOCAL(2), var_additional_increment_of, LOCAL(9), var_steps_of, LOCAL(10), var_value_of, LOCAL(6), var_error_of, LOCAL(3), LOCAL(4),
  // ->
  LET, 1, LOCAL(4), TAIL_CALL,
  POS(42, 14),
  POS(42, 3),
  POS(43, 13),
  POS(43, 3),
  POS(44, 3),
  POS(45, 3),
  POS(50, 31),
  POS(50, 26),
  POS(54, 17),
  POS(47, 5),
  POS(46, 3),
  LOCAL(10),
  LOCAL(5),
  LOCAL(6),
  LOCAL(7),
  LOCAL(11),
  LOCAL(9),
  LOCAL(8)
};

static FUNCTION_INFO i_func_std__bresenham = {
  t_func_std__bresenham, NULL, 11, 7,
  {"44_4_steps\000", "38_5_count\000", "39_5_first\000", "40_5_last\000", "45_4_d\000", "43_4_sign\000", "42_4_delta\000"}
};

static TAB_NUM t_func_std_types__bresenham_iterator___next_value[] = {
  2, // locals
  1, // parameters
  var_65_45_self,
  // error_of(self)-delta_of(self)
  var_error_of, 1, var_65_45_self, 1, LOCAL(1),
  // delta_of(self)
  var_delta_of, 1, var_65_45_self, 1, LOCAL(2),
  // $error error_of(self)-delta_of(self)
  var_std__minus, 2, LOCAL(1), LOCAL(2), 1, var_66_4_error,
  // $value value_of(self)
  var_value_of, 1, var_65_45_self, 1, var_67_4_value,
  // $new_value value
  LET, 1, var_67_4_value, 1, var_68_4_new_value,
  // base_increment_of(self)
  var_base_increment_of, 1, var_65_45_self, 1, LOCAL(1),
  // plus &new_value base_increment_of(self)
  var_plus, 2, var_68_4_new_value, LOCAL(1), 1, var_68_4_new_value,
  // error < 0:
  var_std__less, 2, var_66_4_error, num_0, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1, func_return, TAIL_CALL,
  POS(66, 10),
  POS(66, 25),
  POS(66, 3),
  POS(67, 3),
  POS(68, 3),
  POS(69, 19),
  POS(69, 3),
  POS(71, 5),
  POS(70, 3)
};

static FUNCTION_INFO i_func_std_types__bresenham_iterator___next_value = {
  t_func_std_types__bresenham_iterator___next_value, NULL, 9, 0,
  {}
};

static TAB_NUM t_lambda_1[] = {
  1, // locals
  0, // parameters
  // steps_of(self)
  var_steps_of, 1, var_65_45_self, 1, LOCAL(1),
  // plus &error steps_of(self)
  var_plus, 2, var_66_4_error, LOCAL(1), 1, var_66_4_error,
  // additional_increment_of(self)
  var_additional_increment_of, 1, var_65_45_self, 1, LOCAL(1),
  // plus &new_value additional_increment_of(self)
  var_plus, 2, var_68_4_new_value, LOCAL(1), 1, var_68_4_new_value,
  // return
  func_return, 0, TAIL_CALL,
  POS(72, 19),
  POS(72, 7),
  POS(73, 23),
  POS(73, 7),
  POS(74, 7)
};

static FUNCTION_INFO i_lambda_1 = {
  t_lambda_1, NULL, 5, 0,
  {}
};

static TAB_NUM t_func_return[] = {
  0, // locals
  0, // parameters
  // !self
  LET, -2, var_65_45_self, var_error_of, var_66_4_error, var_value_of, var_68_4_new_value, var_65_45_self,
  // -> self value
  LET, 2, var_65_45_self, var_67_4_value, TAIL_CALL,
  POS(78, 5),
  POS(81, 5)
};

static FUNCTION_INFO i_func_return = {
  t_func_return, NULL, 2, 0,
  {}
};

static TAB_NUM t_func_std__bresenham_delta[] = {
  6, // locals
  2, // parameters
  LOCAL(4), // 90_5_count
  LOCAL(5), // 91_5_amount
  // $d amount .mod. count
  var_mod, 2, LOCAL(5), LOCAL(4), 1, LOCAL(6),
  // div(amount count)
  var_div, 2, LOCAL(5), LOCAL(4), 1, LOCAL(1),
  // count >> 1
  var_std__shift_right, 2, LOCAL(4), num_1, 1, LOCAL(2),
  // std_types::bresenham_delta_iterator
  LET, -5, var_std_types__bresenham_delta_iterator, var_length_of, LOCAL(4), var_delta_of, LOCAL(6), var_base_increment_of, LOCAL(1), var_steps_of, LOCAL(4), var_error_of, LOCAL(2), LOCAL(3),
  // ->
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(93, 3),
  POS(98, 26),
  POS(100, 17),
  POS(95, 5),
  POS(94, 3),
  LOCAL(6),
  LOCAL(5),
  LOCAL(4)
};

static FUNCTION_INFO i_func_std__bresenham_delta = {
  t_func_std__bresenham_delta, NULL, 5, 3,
  {"93_4_d\000", "91_5_amount\000", "90_5_count\000"}
};

static TAB_NUM t_func_std_types__bresenham_delta_iterator___next_value[] = {
  2, // locals
  1, // parameters
  var_109_51_self,
  // error_of(self)-delta_of(self)
  var_error_of, 1, var_109_51_self, 1, LOCAL(1),
  // delta_of(self)
  var_delta_of, 1, var_109_51_self, 1, LOCAL(2),
  // $error error_of(self)-delta_of(self)
  var_std__minus, 2, LOCAL(1), LOCAL(2), 1, var_110_4_error,
  // $new_value base_increment_of(self)
  var_base_increment_of, 1, var_109_51_self, 1, var_111_4_new_value,
  // error < 0:
  var_std__less, 2, var_110_4_error, num_0, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_2, func_2_return, TAIL_CALL,
  POS(110, 10),
  POS(110, 25),
  POS(110, 3),
  POS(111, 3),
  POS(113, 5),
  POS(112, 3)
};

static FUNCTION_INFO i_func_std_types__bresenham_delta_iterator___next_value = {
  t_func_std_types__bresenham_delta_iterator___next_value, NULL, 6, 0,
  {}
};

static TAB_NUM t_lambda_2[] = {
  1, // locals
  0, // parameters
  // steps_of(self)
  var_steps_of, 1, var_109_51_self, 1, LOCAL(1),
  // plus &error steps_of(self)
  var_plus, 2, var_110_4_error, LOCAL(1), 1, var_110_4_error,
  // inc &new_value
  var_inc, 1, var_111_4_new_value, 1, var_111_4_new_value,
  // return
  func_2_return, 0, TAIL_CALL,
  POS(114, 19),
  POS(114, 7),
  POS(115, 7),
  POS(116, 7)
};

static FUNCTION_INFO i_lambda_2 = {
  t_lambda_2, NULL, 4, 0,
  {}
};

static TAB_NUM t_func_2_return[] = {
  1, // locals
  0, // parameters
  // .error_of error) new_value
  LET, -1, var_109_51_self, var_error_of, var_110_4_error, LOCAL(1),
  // -> self(.error_of error) new_value
  LET, 2, LOCAL(1), var_111_4_new_value, TAIL_CALL,
  POS(120, 13),
  POS(120, 5)
};

static FUNCTION_INFO i_func_2_return = {
  t_func_2_return, NULL, 2, 0,
  {}
};

static FUNKY_CONSTANT constants_table[] = {
  {FLT_FUNCTION, 0, {.func_info = &i_func_std__bresenham}},
  {FLT_POSITIVE_INT64, 0, {.value = 1}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__bresenham_iterator___next_value}},
  {FLT_POSITIVE_INT64, 0, {.value = 0}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_1}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_return}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std__bresenham_delta}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__bresenham_delta_iterator___next_value}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_2}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_2_return}}
};

static ATTRIBUTE_DEFINITION std_types__bresenham_iterator__attributes[] = {
  {-var_length_of, -var_undefined},
  {-var_delta_of, -var_undefined},
  {-var_base_increment_of, -var_undefined},
  {-var_additional_increment_of, -var_undefined},
  {-var_steps_of, -var_undefined},
  {-var_value_of, -var_undefined},
  {-var_error_of, -var_undefined},
  {var_next_value, -func_std_types__bresenham_iterator___next_value}
};

static ATTRIBUTE_DEFINITION std_types__bresenham_delta_iterator__attributes[] = {
  {-var_length_of, -var_undefined},
  {-var_delta_of, -var_undefined},
  {-var_base_increment_of, -var_undefined},
  {-var_steps_of, -var_undefined},
  {-var_error_of, -var_undefined},
  {var_next_value, -func_std_types__bresenham_delta_iterator___next_value}
};

static FUNKY_VARIABLE variables_table[] = {
  {
    FOT_POLYMORPHIC, 0, 0,
    "delta_of\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "assign\000std", NULL,
    {.position = POS(24, 1)}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "base_increment_of\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "additional_increment_of\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "steps_of\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "value_of\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "error_of\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "bresenham\000std", NULL,
    {.const_idx = -func_std__bresenham}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "minus\000std", NULL,
    {.position = POS(42, 14)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "abs\000", NULL,
    {.position = POS(42, 10)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "sgn\000", NULL,
    {.position = POS(43, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "mod\000", NULL,
    {.position = POS(45, 6)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "div\000", NULL,
    {.position = POS(50, 31)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "times\000std", NULL,
    {.position = POS(50, 26)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "shift_right\000std", NULL,
    {.position = POS(54, 17)}
  },
  {
    FOT_DERIVED, 0, 8,
    "bresenham_iterator\000std_types", std_types__bresenham_iterator__attributes,
    {"iterator\000std_types"}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "length_of\000", NULL,
    {.position = POS(48, 8)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "iterator\000std_types", NULL,
    {.position = POS(56, 32)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "undefined\000", NULL,
    {.position = POS(57, 14)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "next_value\000", NULL,
    {.position = POS(65, 32)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "65_45_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "66_4_error\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "67_4_value\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "68_4_new_value\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000", NULL,
    {.position = POS(69, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "less\000std", NULL,
    {.position = POS(71, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if\000", NULL,
    {.position = POS(70, 3)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "bresenham_delta\000std", NULL,
    {.const_idx = -func_std__bresenham_delta}
  },
  {
    FOT_DERIVED, 0, 6,
    "bresenham_delta_iterator\000std_types", std_types__bresenham_delta_iterator__attributes,
    {"iterator\000std_types"}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "109_51_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "110_4_error\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "111_4_new_value\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "inc\000", NULL,
    {.position = POS(115, 7)}
  }
};

static FUNKY_NAMESPACE used_namespaces[] = {
  {"std", 1, 0}
};

FUNKY_MODULE module__basic__types__iterators__bresenham = {
  "_basic__types__iterators__bresenham", // module name
  "basic/types/iterators/bresenham.fky", // module filename
  .major_version = 0,
  .minor_version = 0,
  .feature_flags = FEAT_POSITIONS|FEAT_FUNCTION_INFO,
  .marker = 0,
  0, // number of required modules
  0, // number of defined namespaces
  1, // number of used namespaces
  10, // number of constants
  33, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  constants_table,
  variables_table,
};
