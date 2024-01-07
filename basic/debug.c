#include <stddef.h>
#include <stdint.h>

#include "runtime/common.h"
#include "runtime/builtins.h"
#include "runtime/fko.h"
#include "runtime/memory.h"

enum {
  func_debug__println = -1,
  string_1 = -2,
  func_debug__dump = -3,
  num_1 = -4,
  string_2 = -5,
  func_dump_args_to = -6,
  lambda_loop = -7,
  lambda_1 = -8,
  num_2 = -9,
  lambda_expr_is_an_error = -10,
  lambda_2 = -11,
  num_0 = -12,
  func_std__dump_to = -13,
  func_std__dump = -14,
  func_std__edump = -15,
  func_std__hexdump_to = -16,
  lambda_2_loop = -17,
  lambda_3 = -18,
  num_16 = -19,
  lambda_4 = -20,
  lambda_5 = -21,
  lambda_6 = -22,
  num_8 = -23,
  string_3 = -24,
  string_4 = -25,
  lambda_7 = -26,
  func_std__hexdump = -27,
  func_std__ehexdump = -28,
  func_debug__hexdump = -29,
  lambda_3_loop = -30,
  lambda_8 = -31,
  lambda_9 = -32,
  lambda_10 = -33,
  lambda_11 = -34,
  lambda_12 = -35
};

enum {
  var__START = FIRST_VAR-1,
  var_debug__println, // initialized
  var_debug__print, // extern
  var_std__assign, // extern
  var_debug__dump, // initialized
  var_debug__dump_object, // extern
  var_106_16_fd, // dynamic
  var_106_19_args, // dynamic
  var_107_1_i, // dynamic
  var_108_1_n, // dynamic
  var_length_of, // extern
  var_std__less, // extern
  var_std__plus, // extern
  var_113_1_expr, // dynamic
  var_print_to, // extern
  var_is_an_error, // extern
  var_error_message_text_of, // extern
  var_println_to, // extern
  var_next, // extern
  var_serialize, // extern
  var_if, // extern
  var_break, // extern
  var_loop, // extern
  var_std__dump_to, // initialized
  var_std__dump, // initialized
  var_STDOUT_FILENO, // extern
  var_std__edump, // initialized
  var_STDERR_FILENO, // extern
  var_std__hexdump_to, // initialized
  var_264_0_fd, // dynamic
  var_265_0_str, // dynamic
  var_267_1_i, // dynamic
  var_268_1_n, // dynamic
  var_std__not, // extern
  var_mod, // extern
  var_std__equal, // extern
  var_on, // extern
  var_hex, // extern
  var_inc, // extern
  var_to_integer, // extern
  var_std__hexdump, // initialized
  var_hexdump_to, // extern
  var_std__ehexdump, // initialized
  var_debug__hexdump, // initialized
  var_354_0_str, // dynamic
  var_356_1_i, // dynamic
  var_357_1_n, // dynamic
  var__END
};


static TAB_NUM t_func_debug__println[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 60_0_str
  // debug::print str
  var_debug__print, 1, LOCAL(1), 0,
  // debug::print "@nl;"
  var_debug__print, 1, string_1, TAIL_CALL,
  POS(62, 3),
  POS(63, 3)
};

static TAB_NUM t_func_debug__dump[] = {
  3, // locals
  -3, // parameters
  num_1, LOCAL(1), // 98_0_depth
  MANDATORY_PARAMETER, LOCAL(2), // 99_0_label
  MANDATORY_PARAMETER, LOCAL(3), // 100_0_expr
  // debug::print label
  var_debug__print, 1, LOCAL(2), 0,
  // debug::print ": "
  var_debug__print, 1, string_2, 0,
  // debug::dump_object depth expr
  var_debug__dump_object, 2, LOCAL(1), LOCAL(3), TAIL_CALL,
  POS(102, 3),
  POS(103, 3),
  POS(104, 3)
};

static TAB_NUM t_func_dump_args_to[] = {
  0, // locals
  2, // parameters
  var_106_16_fd,
  var_106_19_args,
  // $i 1
  LET, 1, num_1, 1, var_107_1_i,
  // $n length_of(args)
  var_length_of, 1, var_106_19_args, 1, var_108_1_n,
  // loop:
  var_loop, 1, lambda_loop, IO_TAIL_CALL,
  POS(107, 3),
  POS(108, 3),
  POS(109, 3)
};

static TAB_NUM t_lambda_loop[] = {
  1, // locals
  0, // parameters
  // i < n:
  var_std__less, 2, var_107_1_i, var_108_1_n, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1, var_break, IO_TAIL_CALL,
  POS(111, 7),
  POS(110, 5)
};

static TAB_NUM t_lambda_1[] = {
  2, // locals
  0, // parameters
  // $name args(i)
  var_106_19_args, 1, var_107_1_i, 1, LOCAL(2),
  // i+1)
  var_std__plus, 2, var_107_1_i, num_1, 1, LOCAL(1),
  // $expr args(i+1)
  var_106_19_args, 1, LOCAL(1), 1, var_113_1_expr,
  // !i i+2
  var_std__plus, 2, var_107_1_i, num_2, 1, var_107_1_i,
  // print_to! fd name ": "
  var_print_to, 3, var_106_16_fd, LOCAL(2), string_2, IO_CALL(0),
  // is_an_error:
  var_is_an_error, 1, var_113_1_expr, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_expr_is_an_error, lambda_2, IO_TAIL_CALL,
  POS(112, 9),
  POS(113, 20),
  POS(113, 9),
  POS(114, 9),
  POS(115, 9),
  POS(117, 16),
  POS(116, 9)
};

static TAB_NUM t_lambda_expr_is_an_error[] = {
  1, // locals
  0, // parameters
  // error_message_text_of(expr)
  var_error_message_text_of, 1, var_113_1_expr, 1, LOCAL(1),
  // println_to! fd error_message_text_of(expr)
  var_println_to, 2, var_106_16_fd, LOCAL(1), IO_CALL(0),
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(118, 28),
  POS(118, 13),
  POS(119, 13)
};

static TAB_NUM t_lambda_2[] = {
  1, // locals
  0, // parameters
  // serialize(expr 0)
  var_serialize, 2, var_113_1_expr, num_0, 1, LOCAL(1),
  // print_to! fd serialize(expr 0)
  var_print_to, 2, var_106_16_fd, LOCAL(1), IO_CALL(0),
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(121, 26),
  POS(121, 13),
  POS(122, 13)
};

static TAB_NUM t_func_std__dump_to[] = {
  2, // locals
  -2, // parameters
  MANDATORY_PARAMETER, LOCAL(1), // 153_0_fd
  REST_PARAMETER, LOCAL(2), // 154_0_args
  // dump_args_to! fd args
  func_dump_args_to, 2, LOCAL(1), LOCAL(2), IO_TAIL_CALL,
  POS(156, 3)
};

static TAB_NUM t_func_std__dump[] = {
  1, // locals
  -1, // parameters
  REST_PARAMETER, LOCAL(1), // 203_0_args
  // dump_args_to! STDOUT_FILENO args
  func_dump_args_to, 2, var_STDOUT_FILENO, LOCAL(1), IO_TAIL_CALL,
  POS(205, 3)
};

static TAB_NUM t_func_std__edump[] = {
  1, // locals
  -1, // parameters
  REST_PARAMETER, LOCAL(1), // 239_0_args
  // dump_args_to! STDERR_FILENO args
  func_dump_args_to, 2, var_STDERR_FILENO, LOCAL(1), IO_TAIL_CALL,
  POS(241, 3)
};

static TAB_NUM t_func_std__hexdump_to[] = {
  0, // locals
  2, // parameters
  var_264_0_fd,
  var_265_0_str,
  // $i 0
  LET, 1, num_0, 1, var_267_1_i,
  // $n length_of(str)
  var_length_of, 1, var_265_0_str, 1, var_268_1_n,
  // loop:
  var_loop, 1, lambda_2_loop, IO_TAIL_CALL,
  POS(267, 3),
  POS(268, 3),
  POS(269, 3)
};

static TAB_NUM t_lambda_2_loop[] = {
  2, // locals
  0, // parameters
  // i >= n:
  var_std__less, 2, var_267_1_i, var_268_1_n, 1, LOCAL(1),
  // i >= n:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_3, lambda_5, IO_TAIL_CALL,
  POS(271, 7),
  POS(271, 7),
  POS(270, 5)
};

static TAB_NUM t_lambda_3[] = {
  3, // locals
  0, // parameters
  // i .mod. 16) != 0: print_to! fd "@nl;"
  var_mod, 2, var_267_1_i, num_16, 1, LOCAL(1),
  // i .mod. 16) != 0: print_to! fd "@nl;"
  var_std__equal, 2, LOCAL(1), num_0, 1, LOCAL(2),
  // i .mod. 16) != 0: print_to! fd "@nl;"
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // on (i .mod. 16) != 0: print_to! fd "@nl;"
  var_on, 2, LOCAL(3), lambda_4, IO_TAIL_CALL,
  POS(272, 13),
  POS(272, 13),
  POS(272, 13),
  POS(272, 9)
};

static TAB_NUM t_lambda_4[] = {
  0, // locals
  0, // parameters
  // print_to! fd "@nl;"
  var_print_to, 2, var_264_0_fd, string_1, IO_TAIL_CALL,
  POS(272, 31)
};

static TAB_NUM t_lambda_5[] = {
  3, // locals
  0, // parameters
  // i .mod. 16) == 0:
  var_mod, 2, var_267_1_i, num_16, 1, LOCAL(1),
  // i .mod. 16) == 0:
  var_std__equal, 2, LOCAL(1), num_0, 1, LOCAL(2),
  // on (i .mod. 16) == 0:
  var_on, 2, LOCAL(2), lambda_6, IO_CALL(0),
  // inc &i
  var_inc, 1, var_267_1_i, 1, var_267_1_i,
  // print_to! fd " "
  var_print_to, 2, var_264_0_fd, string_4, IO_CALL(0),
  // str(i).to_integer 2)
  var_265_0_str, 1, var_267_1_i, 1, LOCAL(1),
  // to_integer 2)
  var_to_integer, 1, LOCAL(1), 1, LOCAL(2),
  // hex(str(i).to_integer 2)
  var_hex, 2, LOCAL(2), num_2, 1, LOCAL(3),
  // print_to! fd hex(str(i).to_integer 2)
  var_print_to, 2, var_264_0_fd, LOCAL(3), IO_CALL(0),
  // i .mod. 16) == 0: print_to! fd "@nl;"
  var_mod, 2, var_267_1_i, num_16, 1, LOCAL(1),
  // i .mod. 16) == 0: print_to! fd "@nl;"
  var_std__equal, 2, LOCAL(1), num_0, 1, LOCAL(2),
  // on (i .mod. 16) == 0: print_to! fd "@nl;"
  var_on, 2, LOCAL(2), lambda_7, IO_CALL(0),
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(274, 13),
  POS(274, 13),
  POS(274, 9),
  POS(277, 9),
  POS(278, 9),
  POS(279, 26),
  POS(279, 33),
  POS(279, 22),
  POS(279, 9),
  POS(280, 13),
  POS(280, 13),
  POS(280, 9),
  POS(281, 9)
};

static TAB_NUM t_lambda_6[] = {
  1, // locals
  0, // parameters
  // hex(i 8)
  var_hex, 2, var_267_1_i, num_8, 1, LOCAL(1),
  // print_to! fd hex(i 8)
  var_print_to, 2, var_264_0_fd, LOCAL(1), IO_CALL(0),
  // print_to! fd ":"
  var_print_to, 2, var_264_0_fd, string_3, IO_TAIL_CALL,
  POS(275, 24),
  POS(275, 11),
  POS(276, 11)
};

static TAB_NUM t_lambda_7[] = {
  0, // locals
  0, // parameters
  // print_to! fd "@nl;"
  var_print_to, 2, var_264_0_fd, string_1, IO_TAIL_CALL,
  POS(280, 31)
};

static TAB_NUM t_func_std__hexdump[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 304_0_str
  // hexdump_to! STDOUT_FILENO str
  var_hexdump_to, 2, var_STDOUT_FILENO, LOCAL(1), IO_TAIL_CALL,
  POS(306, 3)
};

static TAB_NUM t_func_std__ehexdump[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 329_0_str
  // hexdump_to! STDERR_FILENO str
  var_hexdump_to, 2, var_STDERR_FILENO, LOCAL(1), IO_TAIL_CALL,
  POS(331, 3)
};

static TAB_NUM t_func_debug__hexdump[] = {
  0, // locals
  1, // parameters
  var_354_0_str,
  // $i 0
  LET, 1, num_0, 1, var_356_1_i,
  // $n length_of(str)
  var_length_of, 1, var_354_0_str, 1, var_357_1_n,
  // loop:
  var_loop, 1, lambda_3_loop, IO_TAIL_CALL,
  POS(356, 3),
  POS(357, 3),
  POS(358, 3)
};

static TAB_NUM t_lambda_3_loop[] = {
  2, // locals
  0, // parameters
  // i >= n:
  var_std__less, 2, var_356_1_i, var_357_1_n, 1, LOCAL(1),
  // i >= n:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_8, lambda_10, IO_TAIL_CALL,
  POS(360, 7),
  POS(360, 7),
  POS(359, 5)
};

static TAB_NUM t_lambda_8[] = {
  3, // locals
  0, // parameters
  // i .mod. 16) != 0: debug::print! "@nl;"
  var_mod, 2, var_356_1_i, num_16, 1, LOCAL(1),
  // i .mod. 16) != 0: debug::print! "@nl;"
  var_std__equal, 2, LOCAL(1), num_0, 1, LOCAL(2),
  // i .mod. 16) != 0: debug::print! "@nl;"
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // on (i .mod. 16) != 0: debug::print! "@nl;"
  var_on, 2, LOCAL(3), lambda_9, IO_TAIL_CALL,
  POS(361, 13),
  POS(361, 13),
  POS(361, 13),
  POS(361, 9)
};

static TAB_NUM t_lambda_9[] = {
  0, // locals
  0, // parameters
  // debug::print! "@nl;"
  var_debug__print, 1, string_1, IO_TAIL_CALL,
  POS(361, 31)
};

static TAB_NUM t_lambda_10[] = {
  3, // locals
  0, // parameters
  // i .mod. 16) == 0:
  var_mod, 2, var_356_1_i, num_16, 1, LOCAL(1),
  // i .mod. 16) == 0:
  var_std__equal, 2, LOCAL(1), num_0, 1, LOCAL(2),
  // on (i .mod. 16) == 0:
  var_on, 2, LOCAL(2), lambda_11, IO_CALL(0),
  // inc &i
  var_inc, 1, var_356_1_i, 1, var_356_1_i,
  // debug::print! " "
  var_debug__print, 1, string_4, IO_CALL(0),
  // str(i).to_integer 2)
  var_354_0_str, 1, var_356_1_i, 1, LOCAL(1),
  // to_integer 2)
  var_to_integer, 1, LOCAL(1), 1, LOCAL(2),
  // hex(str(i).to_integer 2)
  var_hex, 2, LOCAL(2), num_2, 1, LOCAL(3),
  // debug::print! hex(str(i).to_integer 2)
  var_debug__print, 1, LOCAL(3), IO_CALL(0),
  // i .mod. 16) == 0: debug::print! "@nl;"
  var_mod, 2, var_356_1_i, num_16, 1, LOCAL(1),
  // i .mod. 16) == 0: debug::print! "@nl;"
  var_std__equal, 2, LOCAL(1), num_0, 1, LOCAL(2),
  // on (i .mod. 16) == 0: debug::print! "@nl;"
  var_on, 2, LOCAL(2), lambda_12, IO_CALL(0),
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(363, 13),
  POS(363, 13),
  POS(363, 9),
  POS(366, 9),
  POS(367, 9),
  POS(368, 27),
  POS(368, 34),
  POS(368, 23),
  POS(368, 9),
  POS(369, 13),
  POS(369, 13),
  POS(369, 9),
  POS(370, 9)
};

static TAB_NUM t_lambda_11[] = {
  1, // locals
  0, // parameters
  // hex(i 8)
  var_hex, 2, var_356_1_i, num_8, 1, LOCAL(1),
  // debug::print! hex(i 8)
  var_debug__print, 1, LOCAL(1), IO_CALL(0),
  // debug::print! ":"
  var_debug__print, 1, string_3, IO_TAIL_CALL,
  POS(364, 25),
  POS(364, 11),
  POS(365, 11)
};

static TAB_NUM t_lambda_12[] = {
  0, // locals
  0, // parameters
  // debug::print! "@nl;"
  var_debug__print, 1, string_1, IO_TAIL_CALL,
  POS(369, 31)
};

static FUNKY_CONSTANT constants_table[] = {
  {FLT_FUNCTION, 0, {.tfunc = t_func_debug__println}},
  {FLT_STRING_8, 1, {.str_8 = "\012"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_debug__dump}},
  {FLT_POSITIVE_INT64, 0, {.value = 1}},
  {FLT_STRING_8, 2, {.str_8 = ": "}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_dump_args_to}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1}},
  {FLT_POSITIVE_INT64, 0, {.value = 2}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_expr_is_an_error}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2}},
  {FLT_POSITIVE_INT64, 0, {.value = 0}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__dump_to}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__dump}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__edump}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__hexdump_to}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_3}},
  {FLT_POSITIVE_INT64, 0, {.value = 16}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_4}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_5}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_6}},
  {FLT_POSITIVE_INT64, 0, {.value = 8}},
  {FLT_STRING_8, 1, {.str_8 = ":"}},
  {FLT_STRING_8, 1, {.str_8 = " "}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_7}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__hexdump}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__ehexdump}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_debug__hexdump}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_3_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_8}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_9}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_10}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_11}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_12}}
};

static FUNKY_VARIABLE variables_table[] = {
  {
    FOT_INITIALIZED, 0, 0,
    "println\000debug", NULL,
    {.const_idx = -func_debug__println}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "print\000debug", NULL,
    {.position = POS(62, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "assign\000std", NULL,
    {.position = POS(37, 1)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "dump\000debug", NULL,
    {.const_idx = -func_debug__dump}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "dump_object\000debug", NULL,
    {.position = POS(104, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "106_16_fd\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "106_19_args\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "107_1_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "108_1_n\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "length_of\000", NULL,
    {.position = POS(108, 6)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "less\000std", NULL,
    {.position = POS(111, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000std", NULL,
    {.position = POS(113, 20)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "113_1_expr\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "print_to\000", NULL,
    {.position = POS(115, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_an_error\000", NULL,
    {.position = POS(117, 16)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "error_message_text_of\000", NULL,
    {.position = POS(118, 28)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "println_to\000", NULL,
    {.position = POS(118, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "next\000", NULL,
    {.position = POS(119, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "serialize\000", NULL,
    {.position = POS(121, 26)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if\000", NULL,
    {.position = POS(116, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "break\000", NULL,
    {.position = POS(123, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "loop\000", NULL,
    {.position = POS(109, 3)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "dump_to\000std", NULL,
    {.const_idx = -func_std__dump_to}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "dump\000std", NULL,
    {.const_idx = -func_std__dump}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "STDOUT_FILENO\000", NULL,
    {.position = POS(205, 17)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "edump\000std", NULL,
    {.const_idx = -func_std__edump}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "STDERR_FILENO\000", NULL,
    {.position = POS(241, 17)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "hexdump_to\000std", NULL,
    {.const_idx = -func_std__hexdump_to}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "264_0_fd\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "265_0_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "267_1_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "268_1_n\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not\000std", NULL,
    {.position = POS(271, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "mod\000", NULL,
    {.position = POS(272, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "equal\000std", NULL,
    {.position = POS(272, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "on\000", NULL,
    {.position = POS(272, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "hex\000", NULL,
    {.position = POS(275, 24)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "inc\000", NULL,
    {.position = POS(277, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "to_integer\000", NULL,
    {.position = POS(279, 33)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "hexdump\000std", NULL,
    {.const_idx = -func_std__hexdump}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "hexdump_to\000", NULL,
    {.position = POS(306, 3)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "ehexdump\000std", NULL,
    {.const_idx = -func_std__ehexdump}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "hexdump\000debug", NULL,
    {.const_idx = -func_debug__hexdump}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "354_0_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "356_1_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "357_1_n\000", NULL
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
  35, // number of constants
  46, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  constants_table,
  variables_table,
};
