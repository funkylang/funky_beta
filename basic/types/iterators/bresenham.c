#include <stddef.h>
#include <stdint.h>

#include "runtime/common.h"
#include "runtime/builtins.h"
#include "runtime/fko.h"
#include "runtime/memory.h"

enum {
  func_std__bresenham = -1,
  num_1 = -2,
  lambda_next_value = -3,
  func_return = -4,
  num_0 = -5,
  lambda_1 = -6
};

enum {
  var__START = FIRST_VAR-1,
  var_delta_of, // attribute
  var_std__assign, // extern
  var_additional_increment_of, // attribute
  var_base_increment_of, // attribute
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
  var_std_types__iterator, // extern
  var_length_of, // extern polymorphic
  var_next_value, // extern polymorphic
  var_52_14_self, // dynamic
  var_58_1_error, // dynamic
  var_59_1_value, // dynamic
  var_60_1_new_value, // dynamic
  var_minus, // extern
  var_plus, // extern
  var_std__less, // extern
  var_if, // extern
  var__END
};


static TAB_NUM t_func_std__bresenham[] = {
  11, // locals
  3, // parameters
  LOCAL(6), // 36_0_count
  LOCAL(7), // 37_0_first
  LOCAL(8), // 38_0_last
  // last-first)
  var_std__minus, 2, LOCAL(8), LOCAL(7), 1, LOCAL(1),
  // $delta abs(last-first)
  var_abs, 1, LOCAL(1), 1, LOCAL(9),
  // last-first)
  var_std__minus, 2, LOCAL(8), LOCAL(7), 1, LOCAL(1),
  // $sign sgn(last-first)
  var_sgn, 1, LOCAL(1), 1, LOCAL(10),
  // $steps count-1
  var_std__minus, 2, LOCAL(6), num_1, 1, LOCAL(11),
  // delta .mod. steps
  var_mod, 2, LOCAL(9), LOCAL(11), 1, LOCAL(1),
  // div(delta steps)
  var_div, 2, LOCAL(9), LOCAL(11), 1, LOCAL(2),
  // sign*div(delta steps)
  var_std__times, 2, LOCAL(10), LOCAL(2), 1, LOCAL(3),
  // steps >> 1
  var_std__shift_right, 2, LOCAL(11), num_1, 1, LOCAL(4),
  // std_types::iterator
  LET, -8, var_std_types__iterator, var_length_of, LOCAL(6), var_delta_of, LOCAL(1), var_base_increment_of, LOCAL(3), var_additional_increment_of, LOCAL(10), var_steps_of, LOCAL(11), var_value_of, LOCAL(7), var_error_of, LOCAL(4), -var_next_value, lambda_next_value, LOCAL(5),
  // ->
  LET, 1, LOCAL(5), TAIL_CALL,
  POS(40, 14),
  POS(40, 3),
  POS(41, 13),
  POS(41, 3),
  POS(42, 3),
  POS(46, 17),
  POS(47, 31),
  POS(47, 26),
  POS(51, 17),
  POS(44, 5),
  POS(43, 3)
};

static TAB_NUM t_lambda_next_value[] = {
  1, // locals
  1, // parameters
  var_52_14_self,
  // $error error_of(self)
  var_error_of, 1, var_52_14_self, 1, var_58_1_error,
  // $value value_of(self)
  var_value_of, 1, var_52_14_self, 1, var_59_1_value,
  // $new_value value
  LET, 1, var_59_1_value, 1, var_60_1_new_value,
  // delta_of(self)
  var_delta_of, 1, var_52_14_self, 1, LOCAL(1),
  // minus &error delta_of(self)
  var_minus, 2, var_58_1_error, LOCAL(1), 1, var_58_1_error,
  // base_increment_of(self)
  var_base_increment_of, 1, var_52_14_self, 1, LOCAL(1),
  // plus &new_value base_increment_of(self)
  var_plus, 2, var_60_1_new_value, LOCAL(1), 1, var_60_1_new_value,
  // error < 0:
  var_std__less, 2, var_58_1_error, num_0, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1, func_return, TAIL_CALL,
  POS(58, 9),
  POS(59, 9),
  POS(60, 9),
  POS(61, 22),
  POS(61, 9),
  POS(62, 25),
  POS(62, 9),
  POS(64, 11),
  POS(63, 9)
};

static TAB_NUM t_func_return[] = {
  0, // locals
  0, // parameters
  // self.error_of error
  LET, -1, var_52_14_self, var_error_of, var_58_1_error, var_52_14_self,
  // self.value_of new_value
  LET, -1, var_52_14_self, var_value_of, var_60_1_new_value, var_52_14_self,
  // -> self value
  LET, 2, var_52_14_self, var_59_1_value, TAIL_CALL,
  POS(54, 12),
  POS(55, 12),
  POS(56, 11)
};

static TAB_NUM t_lambda_1[] = {
  1, // locals
  0, // parameters
  // steps_of(self)
  var_steps_of, 1, var_52_14_self, 1, LOCAL(1),
  // plus &error steps_of(self)
  var_plus, 2, var_58_1_error, LOCAL(1), 1, var_58_1_error,
  // additional_increment_of(self)
  var_additional_increment_of, 1, var_52_14_self, 1, LOCAL(1),
  // plus &new_value additional_increment_of(self)
  var_plus, 2, var_60_1_new_value, LOCAL(1), 1, var_60_1_new_value,
  // return
  func_return, 0, TAIL_CALL,
  POS(65, 25),
  POS(65, 13),
  POS(66, 29),
  POS(66, 13),
  POS(67, 13)
};

static FUNKY_CONSTANT constants_table[] = {
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__bresenham}},
  {FLT_POSITIVE_INT64, 0, {.value = 1}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_next_value}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_return}},
  {FLT_POSITIVE_INT64, 0, {.value = 0}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1}}
};

static FUNKY_VARIABLE variables_table[] = {
  {
    FOT_POLYMORPHIC, 0, 0,
    "delta_of\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "assign\000std", NULL
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "additional_increment_of\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "base_increment_of\000", NULL,
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
    "minus\000std", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "abs\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "sgn\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "mod\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "div\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "times\000std", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "shift_right\000std", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "iterator\000std_types", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "length_of\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "next_value\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "52_14_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "58_1_error\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "59_1_value\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "60_1_new_value\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "minus\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "less\000std", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if\000", NULL
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
  .feature_flags = FEAT_POSITIONS,
  .marker = 0,
  0, // number of required modules
  0, // number of defined namespaces
  1, // number of used namespaces
  6, // number of constants
  26, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  constants_table,
  variables_table,
};
