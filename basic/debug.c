#include <stddef.h>
#include <stdint.h>

#include "runtime/common.h"
#include "runtime/builtins.h"
#include "runtime/fko.h"
#include "runtime/memory.h"

enum {
  func_debug__print = -1,
  func_debug__println = -2,
  string_1 = -3,
  func_debug__dump = -4,
  num_1 = -5,
  string_2 = -6,
  func_dump_args_to = -7,
  lambda_loop = -8,
  lambda_1 = -9,
  num_2 = -10,
  lambda_expr_is_an_error = -11,
  lambda_2 = -12,
  num_0 = -13,
  func_std__dump_to = -14,
  func_std__dump = -15,
  func_std__edump = -16,
  func_std__hexdump_to = -17,
  lambda_2_loop = -18,
  lambda_3 = -19,
  num_16 = -20,
  lambda_4 = -21,
  lambda_5 = -22,
  lambda_6 = -23,
  num_8 = -24,
  string_3 = -25,
  string_4 = -26,
  lambda_7 = -27,
  func_std__hexdump = -28,
  func_std__ehexdump = -29,
  func_debug__hexdump = -30,
  lambda_3_loop = -31,
  lambda_8 = -32,
  lambda_9 = -33,
  lambda_10 = -34,
  lambda_11 = -35,
  lambda_12 = -36
};

enum {
  var__START = FIRST_VAR-1,
  var_debug__print, // initialized
  var_to_utf8, // extern
  var_debug__write, // extern
  var_std__assign, // extern
  var_debug__println, // initialized
  var_debug__dump, // initialized
  var_debug__dump_object, // extern
  var_112_16_fd, // dynamic
  var_112_19_args, // dynamic
  var_113_1_i, // dynamic
  var_114_1_n, // dynamic
  var_length_of, // extern
  var_std__less, // extern
  var_std__plus, // extern
  var_119_1_expr, // dynamic
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
  var_270_0_fd, // dynamic
  var_271_0_str, // dynamic
  var_273_1_i, // dynamic
  var_274_1_n, // dynamic
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
  var_360_0_str, // dynamic
  var_362_1_i, // dynamic
  var_363_1_n, // dynamic
  var__END
};


static TAB_NUM t_func_debug__print[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 39_0_str
  // to_utf8
  var_to_utf8, 1, LOCAL(2), 1, LOCAL(1),
  // debug::write str.to_utf8
  var_debug__write, 1, LOCAL(1), TAIL_CALL,
  POS(41, 20),
  POS(41, 3)
};

static TAB_NUM t_func_debug__println[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 66_0_str
  // debug::print str
  var_debug__print, 1, LOCAL(1), 0,
  // debug::print "@nl;"
  var_debug__print, 1, string_1, TAIL_CALL,
  POS(68, 3),
  POS(69, 3)
};

static TAB_NUM t_func_debug__dump[] = {
  3, // locals
  -3, // parameters
  num_1, LOCAL(1), // 104_0_depth
  MANDATORY_PARAMETER, LOCAL(2), // 105_0_label
  MANDATORY_PARAMETER, LOCAL(3), // 106_0_expr
  // debug::print label
  var_debug__print, 1, LOCAL(2), 0,
  // debug::print ": "
  var_debug__print, 1, string_2, 0,
  // debug::dump_object depth expr
  var_debug__dump_object, 2, LOCAL(1), LOCAL(3), TAIL_CALL,
  POS(108, 3),
  POS(109, 3),
  POS(110, 3)
};

static TAB_NUM t_func_dump_args_to[] = {
  0, // locals
  2, // parameters
  var_112_16_fd,
  var_112_19_args,
  // $i 1
  LET, 1, num_1, 1, var_113_1_i,
  // $n length_of(args)
  var_length_of, 1, var_112_19_args, 1, var_114_1_n,
  // loop:
  var_loop, 1, lambda_loop, IO_TAIL_CALL,
  POS(113, 3),
  POS(114, 3),
  POS(115, 3)
};

static TAB_NUM t_lambda_loop[] = {
  1, // locals
  0, // parameters
  // i < n:
  var_std__less, 2, var_113_1_i, var_114_1_n, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1, var_break, IO_TAIL_CALL,
  POS(117, 7),
  POS(116, 5)
};

static TAB_NUM t_lambda_1[] = {
  2, // locals
  0, // parameters
  // $name args(i)
  var_112_19_args, 1, var_113_1_i, 1, LOCAL(2),
  // i+1)
  var_std__plus, 2, var_113_1_i, num_1, 1, LOCAL(1),
  // $expr args(i+1)
  var_112_19_args, 1, LOCAL(1), 1, var_119_1_expr,
  // !i i+2
  var_std__plus, 2, var_113_1_i, num_2, 1, var_113_1_i,
  // print_to! fd name ": "
  var_print_to, 3, var_112_16_fd, LOCAL(2), string_2, IO_CALL(0),
  // is_an_error:
  var_is_an_error, 1, var_119_1_expr, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_expr_is_an_error, lambda_2, IO_TAIL_CALL,
  POS(118, 9),
  POS(119, 20),
  POS(119, 9),
  POS(120, 9),
  POS(121, 9),
  POS(123, 16),
  POS(122, 9)
};

static TAB_NUM t_lambda_expr_is_an_error[] = {
  1, // locals
  0, // parameters
  // error_message_text_of(expr)
  var_error_message_text_of, 1, var_119_1_expr, 1, LOCAL(1),
  // println_to! fd error_message_text_of(expr)
  var_println_to, 2, var_112_16_fd, LOCAL(1), IO_CALL(0),
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(124, 28),
  POS(124, 13),
  POS(125, 13)
};

static TAB_NUM t_lambda_2[] = {
  1, // locals
  0, // parameters
  // serialize(expr 0)
  var_serialize, 2, var_119_1_expr, num_0, 1, LOCAL(1),
  // print_to! fd serialize(expr 0)
  var_print_to, 2, var_112_16_fd, LOCAL(1), IO_CALL(0),
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(127, 26),
  POS(127, 13),
  POS(128, 13)
};

static TAB_NUM t_func_std__dump_to[] = {
  2, // locals
  -2, // parameters
  MANDATORY_PARAMETER, LOCAL(1), // 159_0_fd
  REST_PARAMETER, LOCAL(2), // 160_0_args
  // dump_args_to! fd args
  func_dump_args_to, 2, LOCAL(1), LOCAL(2), IO_TAIL_CALL,
  POS(162, 3)
};

static TAB_NUM t_func_std__dump[] = {
  1, // locals
  -1, // parameters
  REST_PARAMETER, LOCAL(1), // 209_0_args
  // dump_args_to! STDOUT_FILENO args
  func_dump_args_to, 2, var_STDOUT_FILENO, LOCAL(1), IO_TAIL_CALL,
  POS(211, 3)
};

static TAB_NUM t_func_std__edump[] = {
  1, // locals
  -1, // parameters
  REST_PARAMETER, LOCAL(1), // 245_0_args
  // dump_args_to! STDERR_FILENO args
  func_dump_args_to, 2, var_STDERR_FILENO, LOCAL(1), IO_TAIL_CALL,
  POS(247, 3)
};

static TAB_NUM t_func_std__hexdump_to[] = {
  0, // locals
  2, // parameters
  var_270_0_fd,
  var_271_0_str,
  // $i 0
  LET, 1, num_0, 1, var_273_1_i,
  // $n length_of(str)
  var_length_of, 1, var_271_0_str, 1, var_274_1_n,
  // loop:
  var_loop, 1, lambda_2_loop, IO_TAIL_CALL,
  POS(273, 3),
  POS(274, 3),
  POS(275, 3)
};

static TAB_NUM t_lambda_2_loop[] = {
  2, // locals
  0, // parameters
  // i >= n:
  var_std__less, 2, var_273_1_i, var_274_1_n, 1, LOCAL(1),
  // i >= n:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_3, lambda_5, IO_TAIL_CALL,
  POS(277, 7),
  POS(277, 7),
  POS(276, 5)
};

static TAB_NUM t_lambda_3[] = {
  3, // locals
  0, // parameters
  // i .mod. 16) != 0: print_to! fd "@nl;"
  var_mod, 2, var_273_1_i, num_16, 1, LOCAL(1),
  // i .mod. 16) != 0: print_to! fd "@nl;"
  var_std__equal, 2, LOCAL(1), num_0, 1, LOCAL(2),
  // i .mod. 16) != 0: print_to! fd "@nl;"
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // on (i .mod. 16) != 0: print_to! fd "@nl;"
  var_on, 2, LOCAL(3), lambda_4, IO_TAIL_CALL,
  POS(278, 13),
  POS(278, 13),
  POS(278, 13),
  POS(278, 9)
};

static TAB_NUM t_lambda_4[] = {
  0, // locals
  0, // parameters
  // print_to! fd "@nl;"
  var_print_to, 2, var_270_0_fd, string_1, IO_TAIL_CALL,
  POS(278, 31)
};

static TAB_NUM t_lambda_5[] = {
  3, // locals
  0, // parameters
  // i .mod. 16) == 0:
  var_mod, 2, var_273_1_i, num_16, 1, LOCAL(1),
  // i .mod. 16) == 0:
  var_std__equal, 2, LOCAL(1), num_0, 1, LOCAL(2),
  // on (i .mod. 16) == 0:
  var_on, 2, LOCAL(2), lambda_6, IO_CALL(0),
  // inc &i
  var_inc, 1, var_273_1_i, 1, var_273_1_i,
  // print_to! fd " "
  var_print_to, 2, var_270_0_fd, string_4, IO_CALL(0),
  // str(i).to_integer 2)
  var_271_0_str, 1, var_273_1_i, 1, LOCAL(1),
  // to_integer 2)
  var_to_integer, 1, LOCAL(1), 1, LOCAL(2),
  // hex(str(i).to_integer 2)
  var_hex, 2, LOCAL(2), num_2, 1, LOCAL(3),
  // print_to! fd hex(str(i).to_integer 2)
  var_print_to, 2, var_270_0_fd, LOCAL(3), IO_CALL(0),
  // i .mod. 16) == 0: print_to! fd "@nl;"
  var_mod, 2, var_273_1_i, num_16, 1, LOCAL(1),
  // i .mod. 16) == 0: print_to! fd "@nl;"
  var_std__equal, 2, LOCAL(1), num_0, 1, LOCAL(2),
  // on (i .mod. 16) == 0: print_to! fd "@nl;"
  var_on, 2, LOCAL(2), lambda_7, IO_CALL(0),
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(280, 13),
  POS(280, 13),
  POS(280, 9),
  POS(283, 9),
  POS(284, 9),
  POS(285, 26),
  POS(285, 33),
  POS(285, 22),
  POS(285, 9),
  POS(286, 13),
  POS(286, 13),
  POS(286, 9),
  POS(287, 9)
};

static TAB_NUM t_lambda_6[] = {
  1, // locals
  0, // parameters
  // hex(i 8)
  var_hex, 2, var_273_1_i, num_8, 1, LOCAL(1),
  // print_to! fd hex(i 8)
  var_print_to, 2, var_270_0_fd, LOCAL(1), IO_CALL(0),
  // print_to! fd ":"
  var_print_to, 2, var_270_0_fd, string_3, IO_TAIL_CALL,
  POS(281, 24),
  POS(281, 11),
  POS(282, 11)
};

static TAB_NUM t_lambda_7[] = {
  0, // locals
  0, // parameters
  // print_to! fd "@nl;"
  var_print_to, 2, var_270_0_fd, string_1, IO_TAIL_CALL,
  POS(286, 31)
};

static TAB_NUM t_func_std__hexdump[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 310_0_str
  // hexdump_to! STDOUT_FILENO str
  var_hexdump_to, 2, var_STDOUT_FILENO, LOCAL(1), IO_TAIL_CALL,
  POS(312, 3)
};

static TAB_NUM t_func_std__ehexdump[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 335_0_str
  // hexdump_to! STDERR_FILENO str
  var_hexdump_to, 2, var_STDERR_FILENO, LOCAL(1), IO_TAIL_CALL,
  POS(337, 3)
};

static TAB_NUM t_func_debug__hexdump[] = {
  0, // locals
  1, // parameters
  var_360_0_str,
  // $i 0
  LET, 1, num_0, 1, var_362_1_i,
  // $n length_of(str)
  var_length_of, 1, var_360_0_str, 1, var_363_1_n,
  // loop:
  var_loop, 1, lambda_3_loop, IO_TAIL_CALL,
  POS(362, 3),
  POS(363, 3),
  POS(364, 3)
};

static TAB_NUM t_lambda_3_loop[] = {
  2, // locals
  0, // parameters
  // i >= n:
  var_std__less, 2, var_362_1_i, var_363_1_n, 1, LOCAL(1),
  // i >= n:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_8, lambda_10, IO_TAIL_CALL,
  POS(366, 7),
  POS(366, 7),
  POS(365, 5)
};

static TAB_NUM t_lambda_8[] = {
  3, // locals
  0, // parameters
  // i .mod. 16) != 0: debug::print! "@nl;"
  var_mod, 2, var_362_1_i, num_16, 1, LOCAL(1),
  // i .mod. 16) != 0: debug::print! "@nl;"
  var_std__equal, 2, LOCAL(1), num_0, 1, LOCAL(2),
  // i .mod. 16) != 0: debug::print! "@nl;"
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // on (i .mod. 16) != 0: debug::print! "@nl;"
  var_on, 2, LOCAL(3), lambda_9, IO_TAIL_CALL,
  POS(367, 13),
  POS(367, 13),
  POS(367, 13),
  POS(367, 9)
};

static TAB_NUM t_lambda_9[] = {
  0, // locals
  0, // parameters
  // debug::print! "@nl;"
  var_debug__print, 1, string_1, IO_TAIL_CALL,
  POS(367, 31)
};

static TAB_NUM t_lambda_10[] = {
  3, // locals
  0, // parameters
  // i .mod. 16) == 0:
  var_mod, 2, var_362_1_i, num_16, 1, LOCAL(1),
  // i .mod. 16) == 0:
  var_std__equal, 2, LOCAL(1), num_0, 1, LOCAL(2),
  // on (i .mod. 16) == 0:
  var_on, 2, LOCAL(2), lambda_11, IO_CALL(0),
  // inc &i
  var_inc, 1, var_362_1_i, 1, var_362_1_i,
  // debug::print! " "
  var_debug__print, 1, string_4, IO_CALL(0),
  // str(i).to_integer 2)
  var_360_0_str, 1, var_362_1_i, 1, LOCAL(1),
  // to_integer 2)
  var_to_integer, 1, LOCAL(1), 1, LOCAL(2),
  // hex(str(i).to_integer 2)
  var_hex, 2, LOCAL(2), num_2, 1, LOCAL(3),
  // debug::print! hex(str(i).to_integer 2)
  var_debug__print, 1, LOCAL(3), IO_CALL(0),
  // i .mod. 16) == 0: debug::print! "@nl;"
  var_mod, 2, var_362_1_i, num_16, 1, LOCAL(1),
  // i .mod. 16) == 0: debug::print! "@nl;"
  var_std__equal, 2, LOCAL(1), num_0, 1, LOCAL(2),
  // on (i .mod. 16) == 0: debug::print! "@nl;"
  var_on, 2, LOCAL(2), lambda_12, IO_CALL(0),
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(369, 13),
  POS(369, 13),
  POS(369, 9),
  POS(372, 9),
  POS(373, 9),
  POS(374, 27),
  POS(374, 34),
  POS(374, 23),
  POS(374, 9),
  POS(375, 13),
  POS(375, 13),
  POS(375, 9),
  POS(376, 9)
};

static TAB_NUM t_lambda_11[] = {
  1, // locals
  0, // parameters
  // hex(i 8)
  var_hex, 2, var_362_1_i, num_8, 1, LOCAL(1),
  // debug::print! hex(i 8)
  var_debug__print, 1, LOCAL(1), IO_CALL(0),
  // debug::print! ":"
  var_debug__print, 1, string_3, IO_TAIL_CALL,
  POS(370, 25),
  POS(370, 11),
  POS(371, 11)
};

static TAB_NUM t_lambda_12[] = {
  0, // locals
  0, // parameters
  // debug::print! "@nl;"
  var_debug__print, 1, string_1, IO_TAIL_CALL,
  POS(375, 31)
};

static FUNKY_CONSTANT constants_table[] = {
  {FLT_FUNCTION, 0, {.tfunc = t_func_debug__print}},
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
    "print\000debug", NULL,
    {.const_idx = -func_debug__print}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "to_utf8\000", NULL,
    {.position = POS(41, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "write\000debug", NULL,
    {.position = POS(41, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "assign\000std", NULL,
    {.position = POS(37, 1)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "println\000debug", NULL,
    {.const_idx = -func_debug__println}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "dump\000debug", NULL,
    {.const_idx = -func_debug__dump}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "dump_object\000debug", NULL,
    {.position = POS(110, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "112_16_fd\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "112_19_args\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "113_1_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "114_1_n\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "length_of\000", NULL,
    {.position = POS(114, 6)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "less\000std", NULL,
    {.position = POS(117, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000std", NULL,
    {.position = POS(119, 20)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "119_1_expr\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "print_to\000", NULL,
    {.position = POS(121, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_an_error\000", NULL,
    {.position = POS(123, 16)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "error_message_text_of\000", NULL,
    {.position = POS(124, 28)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "println_to\000", NULL,
    {.position = POS(124, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "next\000", NULL,
    {.position = POS(125, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "serialize\000", NULL,
    {.position = POS(127, 26)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if\000", NULL,
    {.position = POS(122, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "break\000", NULL,
    {.position = POS(129, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "loop\000", NULL,
    {.position = POS(115, 3)}
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
    {.position = POS(211, 17)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "edump\000std", NULL,
    {.const_idx = -func_std__edump}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "STDERR_FILENO\000", NULL,
    {.position = POS(247, 17)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "hexdump_to\000std", NULL,
    {.const_idx = -func_std__hexdump_to}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "270_0_fd\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "271_0_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "273_1_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "274_1_n\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not\000std", NULL,
    {.position = POS(277, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "mod\000", NULL,
    {.position = POS(278, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "equal\000std", NULL,
    {.position = POS(278, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "on\000", NULL,
    {.position = POS(278, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "hex\000", NULL,
    {.position = POS(281, 24)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "inc\000", NULL,
    {.position = POS(283, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "to_integer\000", NULL,
    {.position = POS(285, 33)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "hexdump\000std", NULL,
    {.const_idx = -func_std__hexdump}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "hexdump_to\000", NULL,
    {.position = POS(312, 3)}
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
    "360_0_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "362_1_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "363_1_n\000", NULL
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
  36, // number of constants
  48, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  constants_table,
  variables_table,
};
