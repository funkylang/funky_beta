#include <stddef.h>
#include <stdint.h>

#include "runtime/common.h"
#include "runtime/builtins.h"
#include "runtime/fko.h"
#include "runtime/memory.h"

enum {
  func_std__dump = -1,
  lambda_1 = -2,
  num_1 = -3,
  lambda_2 = -4,
  lambda_3 = -5,
  num_2 = -6,
  lambda_4 = -7,
  lambda_5 = -8,
  lambda_6 = -9,
  minus_num_2 = -10,
  string_1 = -11,
  func_std__debug_writeln = -12,
  string_2 = -13,
  func_std__edump = -14,
  string_3 = -15
};

enum {
  var__START = FIRST_VAR-1,
  var_std__dump, // initialized
  var_40_0_args, // dynamic
  var_42_1_n, // dynamic
  var_length_of, // extern
  var_is_odd, // extern
  var_std__assign, // extern
  var_43_1_depth, // dynamic
  var_if, // extern
  var_48_1_i, // dynamic
  var_std__less, // extern
  var_std__plus, // extern
  var_debug_string, // extern
  var_print, // extern
  var_next, // extern
  var_break, // extern
  var_pass, // extern
  var_loop, // extern
  var_std__debug_writeln, // initialized
  var_debug_write, // extern
  var_std__edump, // initialized
  var_debug_print, // extern
  var__END
};


static TAB_NUM t_func_std__dump[] = {
  1, // locals
  -1, // parameters
  REST_PARAMETER, var_40_0_args,
  // $n length_of(args)
  var_length_of, 1, var_40_0_args, 1, var_42_1_n,
  // is_odd
  var_is_odd, 1, var_42_1_n, 1, LOCAL(1),
  // $depth
  var_if, 3, LOCAL(1), lambda_1, lambda_2, 1, var_43_1_depth,
  // is_odd
  var_is_odd, 1, var_42_1_n, 1, LOCAL(1),
  // $i
  var_if, 3, LOCAL(1), lambda_3, lambda_4, 1, var_48_1_i,
  // loop
  var_loop, 2, lambda_5, var_pass, IO_TAIL_CALL,
  POS(42, 3),
  POS(45, 9),
  POS(43, 3),
  POS(50, 9),
  POS(48, 3),
  POS(53, 3)
};

static TAB_NUM t_lambda_1[] = {
  1, // locals
  0, // parameters
  // args(1)
  var_40_0_args, 1, num_1, 1, LOCAL(1),
  //  args(1)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(46, 10),
  POS(46, 9)
};

static TAB_NUM t_lambda_2[] = {
  0, // locals
  0, // parameters
  //  1
  LET, 1, num_1, TAIL_CALL,
  POS(47, 9)
};

static TAB_NUM t_lambda_3[] = {
  0, // locals
  0, // parameters
  //  2
  LET, 1, num_2, TAIL_CALL,
  POS(51, 9)
};

static TAB_NUM t_lambda_4[] = {
  0, // locals
  0, // parameters
  //  1
  LET, 1, num_1, TAIL_CALL,
  POS(52, 9)
};

static TAB_NUM t_lambda_5[] = {
  1, // locals
  0, // parameters
  // i < n:
  var_std__less, 2, var_48_1_i, var_42_1_n, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_6, var_break, IO_TAIL_CALL,
  POS(56, 9),
  POS(55, 7)
};

static TAB_NUM t_lambda_6[] = {
  3, // locals
  0, // parameters
  // $name args(i)
  var_40_0_args, 1, var_48_1_i, 1, LOCAL(2),
  // i+1)
  var_std__plus, 2, var_48_1_i, num_1, 1, LOCAL(1),
  // $expr args(i+1)
  var_40_0_args, 1, LOCAL(1), 1, LOCAL(3),
  // debug_string(expr -2 depth)
  var_debug_string, 3, LOCAL(3), minus_num_2, var_43_1_depth, 1, LOCAL(1),
  // print! name ":" debug_string(expr -2 depth)
  var_print, 3, LOCAL(2), string_1, LOCAL(1), IO_CALL(0),
  // !i i+2
  var_std__plus, 2, var_48_1_i, num_2, 1, var_48_1_i,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(57, 11),
  POS(58, 22),
  POS(58, 11),
  POS(59, 27),
  POS(59, 11),
  POS(60, 11),
  POS(61, 11)
};

static TAB_NUM t_func_std__debug_writeln[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 67_0_str
  // debug_write str
  var_debug_write, 1, LOCAL(1), 0,
  // debug_write "@nl;"
  var_debug_write, 1, string_2, TAIL_CALL,
  POS(69, 3),
  POS(70, 3)
};

static TAB_NUM t_func_std__edump[] = {
  3, // locals
  -3, // parameters
  num_1, LOCAL(1), // 89_0_depth
  MANDATORY_PARAMETER, LOCAL(2), // 90_0_label
  MANDATORY_PARAMETER, LOCAL(3), // 91_0_expr
  // debug_write label
  var_debug_write, 1, LOCAL(2), 0,
  // debug_write ": "
  var_debug_write, 1, string_3, 0,
  // debug_print expr depth
  var_debug_print, 2, LOCAL(3), LOCAL(1), TAIL_CALL,
  POS(93, 3),
  POS(94, 3),
  POS(95, 3)
};

static FUNKY_CONSTANT constants_table[] = {
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__dump}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1}},
  {FLT_POSITIVE_INT64, 0, {.value = 1}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_3}},
  {FLT_POSITIVE_INT64, 0, {.value = 2}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_4}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_5}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_6}},
  {FLT_NEGATIVE_INT64, 0, {.value = 2}},
  {FLT_STRING_8, 1, {.str_8 = ":"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__debug_writeln}},
  {FLT_STRING_8, 1, {.str_8 = "\012"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__edump}},
  {FLT_STRING_8, 2, {.str_8 = ": "}}
};

static FUNKY_VARIABLE variables_table[] = {
  {
    FOT_INITIALIZED, 0, 0,
    "dump\000std", NULL,
    {.const_idx = -func_std__dump}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "40_0_args\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "42_1_n\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "length_of\000", NULL,
    {.position = POS(42, 6)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_odd\000", NULL,
    {.position = POS(45, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "assign\000std", NULL,
    {.position = POS(46, 9)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "43_1_depth\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if\000", NULL,
    {.position = POS(44, 5)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "48_1_i\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "less\000std", NULL,
    {.position = POS(56, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000std", NULL,
    {.position = POS(58, 22)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "debug_string\000", NULL,
    {.position = POS(59, 27)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "print\000", NULL,
    {.position = POS(59, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "next\000", NULL,
    {.position = POS(61, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "break\000", NULL,
    {.position = POS(62, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "pass\000", NULL,
    {.position = POS(63, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "loop\000", NULL,
    {.position = POS(53, 3)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "debug_writeln\000std", NULL,
    {.const_idx = -func_std__debug_writeln}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "debug_write\000", NULL,
    {.position = POS(69, 3)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "edump\000std", NULL,
    {.const_idx = -func_std__edump}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "debug_print\000", NULL,
    {.position = POS(95, 3)}
  }
};

static FUNKY_NAMESPACE used_namespaces[] = {
  {"std", 1, 0}
};

FUNKY_MODULE module__basic__debug = {
  "_basic__debug", // module name
  "basic/debug.fky", // module filename
  .major_version = 0,
  .minor_version = 0,
  .feature_flags = FEAT_POSITIONS,
  .marker = 0,
  0, // number of required modules
  0, // number of defined namespaces
  1, // number of used namespaces
  15, // number of constants
  21, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  constants_table,
  variables_table,
};
