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
  string_3 = -15,
  func_std__hexdump = -16,
  num_0 = -17,
  lambda_loop = -18,
  lambda_7 = -19,
  num_16 = -20,
  lambda_8 = -21,
  lambda_9 = -22,
  lambda_10 = -23,
  num_8 = -24,
  string_4 = -25,
  lambda_11 = -26
};

enum {
  var__START = FIRST_VAR-1,
  var_std__dump, // initialized
  var_67_0_args, // dynamic
  var_69_1_n, // dynamic
  var_length_of, // extern
  var_is_odd, // extern
  var_std__assign, // extern
  var_70_1_depth, // dynamic
  var_if, // extern
  var_75_1_i, // dynamic
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
  var_std__hexdump, // initialized
  var_126_0_str, // dynamic
  var_128_1_i, // dynamic
  var_129_1_n, // dynamic
  var_std__not, // extern
  var_mod, // extern
  var_std__equal, // extern
  var_on, // extern
  var_hex, // extern
  var_inc, // extern
  var_to_integer, // extern
  var__END
};


static TAB_NUM t_func_std__dump[] = {
  1, // locals
  -1, // parameters
  REST_PARAMETER, var_67_0_args,
  // $n length_of(args)
  var_length_of, 1, var_67_0_args, 1, var_69_1_n,
  // is_odd
  var_is_odd, 1, var_69_1_n, 1, LOCAL(1),
  // $depth
  var_if, 3, LOCAL(1), lambda_1, lambda_2, 1, var_70_1_depth,
  // is_odd
  var_is_odd, 1, var_69_1_n, 1, LOCAL(1),
  // $i
  var_if, 3, LOCAL(1), lambda_3, lambda_4, 1, var_75_1_i,
  // loop
  var_loop, 2, lambda_5, var_pass, IO_TAIL_CALL,
  POS(69, 3),
  POS(72, 9),
  POS(70, 3),
  POS(77, 9),
  POS(75, 3),
  POS(80, 3)
};

static TAB_NUM t_lambda_1[] = {
  1, // locals
  0, // parameters
  // args(1)
  var_67_0_args, 1, num_1, 1, LOCAL(1),
  //  args(1)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(73, 10),
  POS(73, 9)
};

static TAB_NUM t_lambda_2[] = {
  0, // locals
  0, // parameters
  //  1
  LET, 1, num_1, TAIL_CALL,
  POS(74, 9)
};

static TAB_NUM t_lambda_3[] = {
  0, // locals
  0, // parameters
  //  2
  LET, 1, num_2, TAIL_CALL,
  POS(78, 9)
};

static TAB_NUM t_lambda_4[] = {
  0, // locals
  0, // parameters
  //  1
  LET, 1, num_1, TAIL_CALL,
  POS(79, 9)
};

static TAB_NUM t_lambda_5[] = {
  1, // locals
  0, // parameters
  // i < n:
  var_std__less, 2, var_75_1_i, var_69_1_n, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_6, var_break, IO_TAIL_CALL,
  POS(83, 9),
  POS(82, 7)
};

static TAB_NUM t_lambda_6[] = {
  3, // locals
  0, // parameters
  // $name args(i)
  var_67_0_args, 1, var_75_1_i, 1, LOCAL(2),
  // i+1)
  var_std__plus, 2, var_75_1_i, num_1, 1, LOCAL(1),
  // $expr args(i+1)
  var_67_0_args, 1, LOCAL(1), 1, LOCAL(3),
  // debug_string(expr -2 depth)
  var_debug_string, 3, LOCAL(3), minus_num_2, var_70_1_depth, 1, LOCAL(1),
  // print! name ":" debug_string(expr -2 depth)
  var_print, 3, LOCAL(2), string_1, LOCAL(1), IO_CALL(0),
  // !i i+2
  var_std__plus, 2, var_75_1_i, num_2, 1, var_75_1_i,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(84, 11),
  POS(85, 22),
  POS(85, 11),
  POS(86, 27),
  POS(86, 11),
  POS(87, 11),
  POS(88, 11)
};

static TAB_NUM t_func_std__debug_writeln[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 94_0_str
  // debug_write str
  var_debug_write, 1, LOCAL(1), 0,
  // debug_write "@nl;"
  var_debug_write, 1, string_2, TAIL_CALL,
  POS(96, 3),
  POS(97, 3)
};

static TAB_NUM t_func_std__edump[] = {
  3, // locals
  -3, // parameters
  num_1, LOCAL(1), // 116_0_depth
  MANDATORY_PARAMETER, LOCAL(2), // 117_0_label
  MANDATORY_PARAMETER, LOCAL(3), // 118_0_expr
  // debug_write label
  var_debug_write, 1, LOCAL(2), 0,
  // debug_write ": "
  var_debug_write, 1, string_3, 0,
  // debug_print expr depth
  var_debug_print, 2, LOCAL(3), LOCAL(1), TAIL_CALL,
  POS(120, 3),
  POS(121, 3),
  POS(122, 3)
};

static TAB_NUM t_func_std__hexdump[] = {
  0, // locals
  1, // parameters
  var_126_0_str,
  // $i 0
  LET, 1, num_0, 1, var_128_1_i,
  // $n length_of(str)
  var_length_of, 1, var_126_0_str, 1, var_129_1_n,
  // loop:
  var_loop, 1, lambda_loop, TAIL_CALL,
  POS(128, 3),
  POS(129, 3),
  POS(130, 3)
};

static TAB_NUM t_lambda_loop[] = {
  2, // locals
  0, // parameters
  // i >= n:
  var_std__less, 2, var_128_1_i, var_129_1_n, 1, LOCAL(1),
  // i >= n:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_7, lambda_9, TAIL_CALL,
  POS(132, 7),
  POS(132, 7),
  POS(131, 5)
};

static TAB_NUM t_lambda_7[] = {
  3, // locals
  0, // parameters
  // i .mod. 16) != 0: debug_write "@nl;"
  var_mod, 2, var_128_1_i, num_16, 1, LOCAL(1),
  // i .mod. 16) != 0: debug_write "@nl;"
  var_std__equal, 2, LOCAL(1), num_0, 1, LOCAL(2),
  // i .mod. 16) != 0: debug_write "@nl;"
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // on (i .mod. 16) != 0: debug_write "@nl;"
  var_on, 2, LOCAL(3), lambda_8, TAIL_CALL,
  POS(133, 13),
  POS(133, 13),
  POS(133, 13),
  POS(133, 9)
};

static TAB_NUM t_lambda_8[] = {
  0, // locals
  0, // parameters
  // debug_write "@nl;"
  var_debug_write, 1, string_2, TAIL_CALL,
  POS(133, 31)
};

static TAB_NUM t_lambda_9[] = {
  3, // locals
  0, // parameters
  // i .mod. 16) == 0:
  var_mod, 2, var_128_1_i, num_16, 1, LOCAL(1),
  // i .mod. 16) == 0:
  var_std__equal, 2, LOCAL(1), num_0, 1, LOCAL(2),
  // on (i .mod. 16) == 0:
  var_on, 2, LOCAL(2), lambda_10, 0,
  // inc &i
  var_inc, 1, var_128_1_i, 1, var_128_1_i,
  // debug_write " "
  var_debug_write, 1, string_4, 0,
  // str(i).to_integer 2)
  var_126_0_str, 1, var_128_1_i, 1, LOCAL(1),
  // to_integer 2)
  var_to_integer, 1, LOCAL(1), 1, LOCAL(2),
  // hex(str(i).to_integer 2)
  var_hex, 2, LOCAL(2), num_2, 1, LOCAL(3),
  // debug_write hex(str(i).to_integer 2)
  var_debug_write, 1, LOCAL(3), 0,
  // i .mod. 16) == 0: debug_write "@nl;"
  var_mod, 2, var_128_1_i, num_16, 1, LOCAL(1),
  // i .mod. 16) == 0: debug_write "@nl;"
  var_std__equal, 2, LOCAL(1), num_0, 1, LOCAL(2),
  // on (i .mod. 16) == 0: debug_write "@nl;"
  var_on, 2, LOCAL(2), lambda_11, 0,
  // next
  var_next, 0, TAIL_CALL,
  POS(135, 13),
  POS(135, 13),
  POS(135, 9),
  POS(138, 9),
  POS(139, 9),
  POS(140, 25),
  POS(140, 32),
  POS(140, 21),
  POS(140, 9),
  POS(141, 13),
  POS(141, 13),
  POS(141, 9),
  POS(142, 9)
};

static TAB_NUM t_lambda_10[] = {
  1, // locals
  0, // parameters
  // hex(i 8)
  var_hex, 2, var_128_1_i, num_8, 1, LOCAL(1),
  // debug_write hex(i 8)
  var_debug_write, 1, LOCAL(1), 0,
  // debug_write ":"
  var_debug_write, 1, string_1, TAIL_CALL,
  POS(136, 23),
  POS(136, 11),
  POS(137, 11)
};

static TAB_NUM t_lambda_11[] = {
  0, // locals
  0, // parameters
  // debug_write "@nl;"
  var_debug_write, 1, string_2, TAIL_CALL,
  POS(141, 31)
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
  {FLT_STRING_8, 2, {.str_8 = ": "}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__hexdump}},
  {FLT_POSITIVE_INT64, 0, {.value = 0}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_7}},
  {FLT_POSITIVE_INT64, 0, {.value = 16}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_8}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_9}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_10}},
  {FLT_POSITIVE_INT64, 0, {.value = 8}},
  {FLT_STRING_8, 1, {.str_8 = " "}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_11}}
};

static FUNKY_VARIABLE variables_table[] = {
  {
    FOT_INITIALIZED, 0, 0,
    "dump\000std", NULL,
    {.const_idx = -func_std__dump}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "67_0_args\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "69_1_n\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "length_of\000", NULL,
    {.position = POS(69, 6)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_odd\000", NULL,
    {.position = POS(72, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "assign\000std", NULL,
    {.position = POS(73, 9)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "70_1_depth\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if\000", NULL,
    {.position = POS(71, 5)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "75_1_i\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "less\000std", NULL,
    {.position = POS(83, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000std", NULL,
    {.position = POS(85, 22)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "debug_string\000", NULL,
    {.position = POS(86, 27)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "print\000", NULL,
    {.position = POS(86, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "next\000", NULL,
    {.position = POS(88, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "break\000", NULL,
    {.position = POS(89, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "pass\000", NULL,
    {.position = POS(90, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "loop\000", NULL,
    {.position = POS(80, 3)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "debug_writeln\000std", NULL,
    {.const_idx = -func_std__debug_writeln}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "debug_write\000", NULL,
    {.position = POS(96, 3)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "edump\000std", NULL,
    {.const_idx = -func_std__edump}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "debug_print\000", NULL,
    {.position = POS(122, 3)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "hexdump\000std", NULL,
    {.const_idx = -func_std__hexdump}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "126_0_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "128_1_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "129_1_n\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not\000std", NULL,
    {.position = POS(132, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "mod\000", NULL,
    {.position = POS(133, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "equal\000std", NULL,
    {.position = POS(133, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "on\000", NULL,
    {.position = POS(133, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "hex\000", NULL,
    {.position = POS(136, 23)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "inc\000", NULL,
    {.position = POS(138, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "to_integer\000", NULL,
    {.position = POS(140, 32)}
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
  26, // number of constants
  32, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  constants_table,
  variables_table,
};
