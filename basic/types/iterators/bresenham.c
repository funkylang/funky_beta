#include <stddef.h>
#include <stdint.h>

#include "runtime/common.h"
#include "runtime/builtins.h"
#include "runtime/fko.h"
#include "runtime/memory.h"

enum {
  func_std_types__bresenham_iterator___next_value = -1,
  num_0 = -2,
  lambda_1 = -3,
  func_return = -4,
  func_std__bresenham = -5,
  num_1 = -6
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
  var_std_types__bresenham_iterator, // derived
  var_std_types__iterator, // extern
  var_length_of, // extern polymorphic
  var_undefined, // extern
  var_next_value, // extern polymorphic
  var_40_44_self, // dynamic
  var_41_1_error, // dynamic
  var_std__minus, // extern
  var_42_1_value, // dynamic
  var_43_1_new_value, // dynamic
  var_plus, // extern
  var_std__less, // extern
  var_if, // extern
  var_std__bresenham, // initialized
  var_abs, // extern
  var_sgn, // extern
  var_mod, // extern
  var_div, // extern
  var_std__times, // extern
  var_std__shift_right, // extern
  var__END
};


static TAB_NUM t_func_std_types__bresenham_iterator___next_value[] = {
  2, // locals
  1, // parameters
  var_40_44_self,
  // error_of(self)-delta_of(self)
  var_error_of, 1, var_40_44_self, 1, LOCAL(1),
  // delta_of(self)
  var_delta_of, 1, var_40_44_self, 1, LOCAL(2),
  // $error error_of(self)-delta_of(self)
  var_std__minus, 2, LOCAL(1), LOCAL(2), 1, var_41_1_error,
  // $value value_of(self)
  var_value_of, 1, var_40_44_self, 1, var_42_1_value,
  // $new_value value
  LET, 1, var_42_1_value, 1, var_43_1_new_value,
  // base_increment_of(self)
  var_base_increment_of, 1, var_40_44_self, 1, LOCAL(1),
  // plus &new_value base_increment_of(self)
  var_plus, 2, var_43_1_new_value, LOCAL(1), 1, var_43_1_new_value,
  // error < 0:
  var_std__less, 2, var_41_1_error, num_0, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1, func_return, TAIL_CALL,
  POS(41, 10),
  POS(41, 25),
  POS(41, 3),
  POS(42, 3),
  POS(43, 3),
  POS(44, 19),
  POS(44, 3),
  POS(47, 5),
  POS(46, 3)
};

static TAB_NUM t_lambda_1[] = {
  1, // locals
  0, // parameters
  // steps_of(self)
  var_steps_of, 1, var_40_44_self, 1, LOCAL(1),
  // plus &error steps_of(self)
  var_plus, 2, var_41_1_error, LOCAL(1), 1, var_41_1_error,
  // additional_increment_of(self)
  var_additional_increment_of, 1, var_40_44_self, 1, LOCAL(1),
  // plus &new_value additional_increment_of(self)
  var_plus, 2, var_43_1_new_value, LOCAL(1), 1, var_43_1_new_value,
  // return
  func_return, 0, TAIL_CALL,
  POS(48, 19),
  POS(48, 7),
  POS(49, 23),
  POS(49, 7),
  POS(50, 7)
};

static TAB_NUM t_func_return[] = {
  0, // locals
  0, // parameters
  // self.error_of error
  LET, -1, var_40_44_self, var_error_of, var_41_1_error, var_40_44_self,
  // self.value_of new_value
  LET, -1, var_40_44_self, var_value_of, var_43_1_new_value, var_40_44_self,
  // -> self value
  LET, 2, var_40_44_self, var_42_1_value, TAIL_CALL,
  POS(54, 6),
  POS(55, 6),
  POS(56, 5)
};

static TAB_NUM t_func_std__bresenham[] = {
  11, // locals
  3, // parameters
  LOCAL(5), // 65_0_count
  LOCAL(6), // 66_0_first
  LOCAL(7), // 67_0_last
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
  POS(69, 14),
  POS(69, 3),
  POS(70, 13),
  POS(70, 3),
  POS(71, 3),
  POS(72, 3),
  POS(77, 31),
  POS(77, 26),
  POS(81, 17),
  POS(74, 5),
  POS(73, 3)
};

static FUNKY_CONSTANT constants_table[] = {
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__bresenham_iterator___next_value}},
  {FLT_POSITIVE_INT64, 0, {.value = 0}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_return}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__bresenham}},
  {FLT_POSITIVE_INT64, 0, {.value = 1}}
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
    FOT_DERIVED, 0, 8,
    "bresenham_iterator\000std_types", std_types__bresenham_iterator__attributes,
    {"iterator\000std_types"}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "iterator\000std_types", NULL,
    {.position = POS(31, 32)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "length_of\000", NULL,
    {.position = POS(32, 4)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "undefined\000", NULL,
    {.position = POS(32, 14)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "next_value\000", NULL,
    {.position = POS(40, 32)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "40_44_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "41_1_error\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "minus\000std", NULL,
    {.position = POS(41, 10)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "42_1_value\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "43_1_new_value\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000", NULL,
    {.position = POS(44, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "less\000std", NULL,
    {.position = POS(47, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if\000", NULL,
    {.position = POS(46, 3)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "bresenham\000std", NULL,
    {.const_idx = -func_std__bresenham}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "abs\000", NULL,
    {.position = POS(69, 10)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "sgn\000", NULL,
    {.position = POS(70, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "mod\000", NULL,
    {.position = POS(72, 6)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "div\000", NULL,
    {.position = POS(77, 31)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "times\000std", NULL,
    {.position = POS(77, 26)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "shift_right\000std", NULL,
    {.position = POS(81, 17)}
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
  27, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  constants_table,
  variables_table,
};
