#include <stddef.h>
#include <stdint.h>

#include "runtime/common.h"
#include "runtime/builtins.h"
#include "runtime/fko.h"
#include "runtime/memory.h"

enum {
  func_std__bin = -1,
  num_0 = -2,
  lambda_1 = -3,
  lambda_2 = -4,
  string_1 = -5,
  lambda_3 = -6,
  lambda_4 = -7,
  string_2 = -8,
  lambda_5 = -9,
  lambda_6 = -10,
  num_1 = -11,
  chr_48 = -12,
  lambda_7 = -13,
  lambda_8 = -14,
  lambda_9 = -15,
  func_std__oct = -16,
  lambda_10 = -17,
  lambda_11 = -18,
  lambda_12 = -19,
  lambda_13 = -20,
  lambda_14 = -21,
  lambda_15 = -22,
  num_7 = -23,
  num_3 = -24,
  lambda_16 = -25,
  lambda_17 = -26,
  lambda_18 = -27,
  func_std__hex = -28,
  lambda_19 = -29,
  lambda_20 = -30,
  lambda_21 = -31,
  lambda_22 = -32,
  lambda_23 = -33,
  lambda_24 = -34,
  num_15 = -35,
  num_10 = -36,
  lambda_25 = -37,
  chr_97 = -38,
  lambda_26 = -39,
  num_4 = -40,
  lambda_27 = -41,
  lambda_28 = -42,
  lambda_29 = -43,
  func_std__inc = -44,
  func_std__dec = -45,
  func_std__extend_to = -46,
  lambda_30 = -47,
  lambda_31 = -48,
  func_std__reduce_to = -49,
  lambda_32 = -50,
  lambda_33 = -51,
  func_std__abs = -52,
  lambda_34 = -53,
  lambda_35 = -54,
  func_std__sgn = -55,
  lambda_36 = -56,
  lambda_37 = -57,
  lambda_38 = -58,
  lambda_39 = -59,
  minus_num_1 = -60,
  lambda_40 = -61,
  lambda_41 = -62,
  func_std__is_odd = -63,
  func_std__is_even = -64,
  func_std__sqr = -65,
  func_std__min = -66,
  num_2 = -67,
  lambda_42 = -68,
  lambda_43 = -69,
  lambda_44 = -70,
  func_std__max = -71,
  lambda_45 = -72,
  lambda_46 = -73,
  lambda_47 = -74,
  func_std__min_max = -75,
  lambda_48 = -76,
  lambda_49 = -77,
  func_std__pow = -78,
  lambda_50 = -79,
  lambda_51 = -80,
  lambda_52 = -81,
  lambda_53 = -82,
  lambda_54 = -83,
  lambda_55 = -84,
  func_std__isqrt = -85,
  lambda_56 = -86,
  lambda_57 = -87,
  lambda_loop = -88,
  lambda_58 = -89,
  lambda_59 = -90,
  num_3_14159265358979 = -91
};

enum {
  var__START = FIRST_VAR-1,
  var_std__bin, // initialized
  var_38_0_val, // dynamic
  var_39_0_size, // dynamic
  var_undefined, // extern
  var_std__equal, // extern
  var_is_defined, // extern
  var_dup, // extern
  var_std__assign, // extern
  var_if, // extern
  var_48_1_str, // dynamic
  var_std__less, // extern
  var_std__bit_and, // extern
  var_std__plus, // extern
  var_put, // extern
  var_std__shift_right, // extern
  var_next, // extern
  var_loop, // extern
  var_pad_left, // extern
  var_std__oct, // initialized
  var_74_0_val, // dynamic
  var_75_0_size, // dynamic
  var_84_1_str, // dynamic
  var_std__hex, // initialized
  var_110_0_val, // dynamic
  var_111_0_size, // dynamic
  var_120_1_str, // dynamic
  var_124_1_hex_digit, // dynamic
  var_std__not, // extern
  var_std__minus, // extern
  var_std__inc, // initialized
  var_plus, // extern
  var_std__dec, // initialized
  var_minus, // extern
  var_std__extend_to, // initialized
  var_164_0_var, // dynamic
  var_165_0_val, // dynamic
  var_std__reduce_to, // initialized
  var_178_0_var, // dynamic
  var_179_0_val, // dynamic
  var_std__abs, // initialized
  var_194_0_var, // dynamic
  var_negate, // extern
  var_std__sgn, // initialized
  var_215_0_x, // dynamic
  var_true, // extern
  var_cond, // extern
  var_std__is_odd, // initialized
  var_std__is_even, // initialized
  var_std__sqr, // initialized
  var_std__times, // extern
  var_std__min, // initialized
  var_266_1_result, // dynamic
  var_range, // extern
  var_268_3_arg, // dynamic
  var_for_each, // extern
  var_std__max, // initialized
  var_286_1_result, // dynamic
  var_288_3_arg, // dynamic
  var_std__min_max, // initialized
  var_304_0_first_value, // dynamic
  var_305_0_second_value, // dynamic
  var_std__pow, // initialized
  var_324_0_x, // dynamic
  var_325_0_n, // dynamic
  var_is_odd, // extern
  var_pow, // extern
  var_sqr, // extern
  var_std__isqrt, // initialized
  var_353_0_n, // dynamic
  var_359_1_x, // dynamic
  var_360_1_y, // dynamic
  var_div, // extern
  var_std__PI, // initialized
  var__END
};


static TAB_NUM t_func_std__bin[] = {
  1, // locals
  -2, // parameters
  MANDATORY_PARAMETER, var_38_0_val,
  var_undefined, var_39_0_size,
  // val == 0:
  var_std__equal, 2, var_38_0_val, num_0, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1, lambda_4, TAIL_CALL,
  POS(42, 5),
  POS(41, 3)
};

static TAB_NUM t_lambda_1[] = {
  1, // locals
  0, // parameters
  // is_defined
  var_is_defined, 1, var_39_0_size, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_2, lambda_3, TAIL_CALL,
  POS(44, 14),
  POS(43, 7)
};

static TAB_NUM t_lambda_2[] = {
  1, // locals
  0, // parameters
  // dup("0" size)
  var_dup, 2, string_1, var_39_0_size, 1, LOCAL(1),
  //  dup("0" size)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(45, 12),
  POS(45, 11)
};

static TAB_NUM t_lambda_3[] = {
  0, // locals
  0, // parameters
  //  "0"
  LET, 1, string_1, TAIL_CALL,
  POS(46, 11)
};

static TAB_NUM t_lambda_4[] = {
  1, // locals
  0, // parameters
  // $str ""
  LET, 1, string_2, 1, var_48_1_str,
  // loop !str:
  var_loop, 1, lambda_5, 1, var_48_1_str,
  // is_defined
  var_is_defined, 1, var_39_0_size, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_8, lambda_9, TAIL_CALL,
  POS(48, 7),
  POS(49, 7),
  POS(57, 14),
  POS(56, 7)
};

static TAB_NUM t_lambda_5[] = {
  1, // locals
  0, // parameters
  // 0:
  var_std__less, 2, num_0, var_38_0_val, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_6, lambda_7, TAIL_CALL,
  POS(51, 17),
  POS(50, 9)
};

static TAB_NUM t_lambda_6[] = {
  2, // locals
  0, // parameters
  // val & 1)
  var_std__bit_and, 2, var_38_0_val, num_1, 1, LOCAL(1),
  // 0'+(val & 1)
  var_std__plus, 2, chr_48, LOCAL(1), 1, LOCAL(2),
  // put &str '0'+(val & 1)
  var_put, 2, var_48_1_str, LOCAL(2), 1, var_48_1_str,
  // !val val >> 1
  var_std__shift_right, 2, var_38_0_val, num_1, 1, var_38_0_val,
  // next
  var_next, 0, TAIL_CALL,
  POS(52, 27),
  POS(52, 23),
  POS(52, 13),
  POS(53, 13),
  POS(54, 13)
};

static TAB_NUM t_lambda_7[] = {
  0, // locals
  0, // parameters
  //  str
  LET, 1, var_48_1_str, TAIL_CALL,
  POS(55, 13)
};

static TAB_NUM t_lambda_8[] = {
  1, // locals
  0, // parameters
  // pad_left(str size "0")
  var_pad_left, 3, var_48_1_str, var_39_0_size, string_1, 1, LOCAL(1),
  //  pad_left(str size "0")
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(58, 12),
  POS(58, 11)
};

static TAB_NUM t_lambda_9[] = {
  0, // locals
  0, // parameters
  //  str
  LET, 1, var_48_1_str, TAIL_CALL,
  POS(59, 11)
};

static TAB_NUM t_func_std__oct[] = {
  1, // locals
  -2, // parameters
  MANDATORY_PARAMETER, var_74_0_val,
  var_undefined, var_75_0_size,
  // val == 0:
  var_std__equal, 2, var_74_0_val, num_0, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_10, lambda_13, TAIL_CALL,
  POS(78, 5),
  POS(77, 3)
};

static TAB_NUM t_lambda_10[] = {
  1, // locals
  0, // parameters
  // is_defined
  var_is_defined, 1, var_75_0_size, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_11, lambda_12, TAIL_CALL,
  POS(80, 14),
  POS(79, 7)
};

static TAB_NUM t_lambda_11[] = {
  1, // locals
  0, // parameters
  // dup("0" size)
  var_dup, 2, string_1, var_75_0_size, 1, LOCAL(1),
  //  dup("0" size)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(81, 12),
  POS(81, 11)
};

static TAB_NUM t_lambda_12[] = {
  0, // locals
  0, // parameters
  //  "0"
  LET, 1, string_1, TAIL_CALL,
  POS(82, 11)
};

static TAB_NUM t_lambda_13[] = {
  1, // locals
  0, // parameters
  // $str ""
  LET, 1, string_2, 1, var_84_1_str,
  // loop !str:
  var_loop, 1, lambda_14, 1, var_84_1_str,
  // is_defined
  var_is_defined, 1, var_75_0_size, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_17, lambda_18, TAIL_CALL,
  POS(84, 7),
  POS(85, 7),
  POS(93, 14),
  POS(92, 7)
};

static TAB_NUM t_lambda_14[] = {
  1, // locals
  0, // parameters
  // 0:
  var_std__less, 2, num_0, var_74_0_val, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_15, lambda_16, TAIL_CALL,
  POS(87, 17),
  POS(86, 9)
};

static TAB_NUM t_lambda_15[] = {
  2, // locals
  0, // parameters
  // val & 0x07)
  var_std__bit_and, 2, var_74_0_val, num_7, 1, LOCAL(1),
  // 0'+(val & 0x07)
  var_std__plus, 2, chr_48, LOCAL(1), 1, LOCAL(2),
  // put &str '0'+(val & 0x07)
  var_put, 2, var_84_1_str, LOCAL(2), 1, var_84_1_str,
  // !val val >> 3
  var_std__shift_right, 2, var_74_0_val, num_3, 1, var_74_0_val,
  // next
  var_next, 0, TAIL_CALL,
  POS(88, 27),
  POS(88, 23),
  POS(88, 13),
  POS(89, 13),
  POS(90, 13)
};

static TAB_NUM t_lambda_16[] = {
  0, // locals
  0, // parameters
  //  str
  LET, 1, var_84_1_str, TAIL_CALL,
  POS(91, 13)
};

static TAB_NUM t_lambda_17[] = {
  1, // locals
  0, // parameters
  // pad_left(str size "0")
  var_pad_left, 3, var_84_1_str, var_75_0_size, string_1, 1, LOCAL(1),
  //  pad_left(str size "0")
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(94, 12),
  POS(94, 11)
};

static TAB_NUM t_lambda_18[] = {
  0, // locals
  0, // parameters
  //  str
  LET, 1, var_84_1_str, TAIL_CALL,
  POS(95, 11)
};

static TAB_NUM t_func_std__hex[] = {
  1, // locals
  -2, // parameters
  MANDATORY_PARAMETER, var_110_0_val,
  var_undefined, var_111_0_size,
  // val == 0:
  var_std__equal, 2, var_110_0_val, num_0, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_19, lambda_22, TAIL_CALL,
  POS(114, 5),
  POS(113, 3)
};

static TAB_NUM t_lambda_19[] = {
  1, // locals
  0, // parameters
  // is_defined
  var_is_defined, 1, var_111_0_size, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_20, lambda_21, TAIL_CALL,
  POS(116, 14),
  POS(115, 7)
};

static TAB_NUM t_lambda_20[] = {
  1, // locals
  0, // parameters
  // dup("0" size)
  var_dup, 2, string_1, var_111_0_size, 1, LOCAL(1),
  //  dup("0" size)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(117, 12),
  POS(117, 11)
};

static TAB_NUM t_lambda_21[] = {
  0, // locals
  0, // parameters
  //  "0"
  LET, 1, string_1, TAIL_CALL,
  POS(118, 11)
};

static TAB_NUM t_lambda_22[] = {
  1, // locals
  0, // parameters
  // $str ""
  LET, 1, string_2, 1, var_120_1_str,
  // loop !str:
  var_loop, 1, lambda_23, 1, var_120_1_str,
  // is_defined
  var_is_defined, 1, var_111_0_size, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_28, lambda_29, TAIL_CALL,
  POS(120, 7),
  POS(121, 7),
  POS(134, 14),
  POS(133, 7)
};

static TAB_NUM t_lambda_23[] = {
  1, // locals
  0, // parameters
  // 0:
  var_std__less, 2, num_0, var_110_0_val, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_24, lambda_27, TAIL_CALL,
  POS(123, 17),
  POS(122, 9)
};

static TAB_NUM t_lambda_24[] = {
  3, // locals
  0, // parameters
  // $hex_digit val & 0x0f
  var_std__bit_and, 2, var_110_0_val, num_15, 1, var_124_1_hex_digit,
  // hex_digit >= 10
  var_std__less, 2, var_124_1_hex_digit, num_10, 1, LOCAL(1),
  // hex_digit >= 10
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_25, lambda_26, 1, LOCAL(3),
  // put &str
  var_put, 2, var_120_1_str, LOCAL(3), 1, var_120_1_str,
  // !val val >> 4
  var_std__shift_right, 2, var_110_0_val, num_4, 1, var_110_0_val,
  // next
  var_next, 0, TAIL_CALL,
  POS(124, 13),
  POS(127, 17),
  POS(127, 17),
  POS(126, 15),
  POS(125, 13),
  POS(130, 13),
  POS(131, 13)
};

static TAB_NUM t_lambda_25[] = {
  2, // locals
  0, // parameters
  // a'+hex_digit-10
  var_std__plus, 2, chr_97, var_124_1_hex_digit, 1, LOCAL(1),
  // a'+hex_digit-10
  var_std__minus, 2, LOCAL(1), num_10, 1, LOCAL(2),
  //  'a'+hex_digit-10
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(128, 21),
  POS(128, 21),
  POS(128, 19)
};

static TAB_NUM t_lambda_26[] = {
  1, // locals
  0, // parameters
  // 0'+hex_digit
  var_std__plus, 2, chr_48, var_124_1_hex_digit, 1, LOCAL(1),
  //  '0'+hex_digit
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(129, 21),
  POS(129, 19)
};

static TAB_NUM t_lambda_27[] = {
  0, // locals
  0, // parameters
  //  str
  LET, 1, var_120_1_str, TAIL_CALL,
  POS(132, 13)
};

static TAB_NUM t_lambda_28[] = {
  1, // locals
  0, // parameters
  // pad_left(str size "0")
  var_pad_left, 3, var_120_1_str, var_111_0_size, string_1, 1, LOCAL(1),
  //  pad_left(str size "0")
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(135, 12),
  POS(135, 11)
};

static TAB_NUM t_lambda_29[] = {
  0, // locals
  0, // parameters
  //  str
  LET, 1, var_120_1_str, TAIL_CALL,
  POS(136, 11)
};

static TAB_NUM t_func_std__inc[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 144_0_var
  // plus var 1
  var_plus, 2, LOCAL(1), num_1, TAIL_CALL,
  POS(146, 3)
};

static TAB_NUM t_func_std__dec[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 154_0_var
  // minus var 1
  var_minus, 2, LOCAL(1), num_1, TAIL_CALL,
  POS(156, 3)
};

static TAB_NUM t_func_std__extend_to[] = {
  1, // locals
  2, // parameters
  var_164_0_var,
  var_165_0_val,
  // var
  var_std__less, 2, var_164_0_var, var_165_0_val, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_30, lambda_31, TAIL_CALL,
  POS(168, 11),
  POS(167, 3)
};

static TAB_NUM t_lambda_30[] = {
  0, // locals
  0, // parameters
  //  val
  LET, 1, var_165_0_val, TAIL_CALL,
  POS(169, 7)
};

static TAB_NUM t_lambda_31[] = {
  0, // locals
  0, // parameters
  //  var
  LET, 1, var_164_0_var, TAIL_CALL,
  POS(170, 7)
};

static TAB_NUM t_func_std__reduce_to[] = {
  1, // locals
  2, // parameters
  var_178_0_var,
  var_179_0_val,
  // val < var
  var_std__less, 2, var_179_0_val, var_178_0_var, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_32, lambda_33, TAIL_CALL,
  POS(182, 5),
  POS(181, 3)
};

static TAB_NUM t_lambda_32[] = {
  0, // locals
  0, // parameters
  //  val
  LET, 1, var_179_0_val, TAIL_CALL,
  POS(183, 7)
};

static TAB_NUM t_lambda_33[] = {
  0, // locals
  0, // parameters
  //  var
  LET, 1, var_178_0_var, TAIL_CALL,
  POS(184, 7)
};

static TAB_NUM t_func_std__abs[] = {
  1, // locals
  1, // parameters
  var_194_0_var,
  // var < 0:
  var_std__less, 2, var_194_0_var, num_0, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_34, lambda_35, TAIL_CALL,
  POS(197, 5),
  POS(196, 3)
};

static TAB_NUM t_lambda_34[] = {
  0, // locals
  0, // parameters
  // negate var
  var_negate, 1, var_194_0_var, TAIL_CALL,
  POS(198, 7)
};

static TAB_NUM t_lambda_35[] = {
  0, // locals
  0, // parameters
  //  var
  LET, 1, var_194_0_var, TAIL_CALL,
  POS(199, 7)
};

static TAB_NUM t_func_std__sgn[] = {
  0, // locals
  1, // parameters
  var_215_0_x,
  // cond
  var_cond, 3, lambda_36, lambda_38, lambda_40, TAIL_CALL,
  POS(217, 3)
};

static TAB_NUM t_lambda_36[] = {
  1, // locals
  0, // parameters
  // 0 -> 1
  var_std__less, 2, num_0, var_215_0_x, 1, LOCAL(1),
  //  x > 0 -> 1
  LET, 2, LOCAL(1), lambda_37, TAIL_CALL,
  POS(218, 12),
  POS(218, 7)
};

static TAB_NUM t_lambda_37[] = {
  0, // locals
  0, // parameters
  //  1
  LET, 1, num_1, TAIL_CALL,
  POS(218, 16)
};

static TAB_NUM t_lambda_38[] = {
  1, // locals
  0, // parameters
  // x < 0 -> -1
  var_std__less, 2, var_215_0_x, num_0, 1, LOCAL(1),
  //  x < 0 -> -1
  LET, 2, LOCAL(1), lambda_39, TAIL_CALL,
  POS(219, 8),
  POS(219, 7)
};

static TAB_NUM t_lambda_39[] = {
  0, // locals
  0, // parameters
  //  -1
  LET, 1, minus_num_1, TAIL_CALL,
  POS(219, 16)
};

static TAB_NUM t_lambda_40[] = {
  0, // locals
  0, // parameters
  //  true -> 0
  LET, 2, var_true, lambda_41, TAIL_CALL,
  POS(220, 7)
};

static TAB_NUM t_lambda_41[] = {
  0, // locals
  0, // parameters
  //  0
  LET, 1, num_0, TAIL_CALL,
  POS(220, 15)
};

static TAB_NUM t_func_std__is_odd[] = {
  3, // locals
  1, // parameters
  LOCAL(3), // 228_0_n
  // n & 1 == 1
  var_std__bit_and, 2, LOCAL(3), num_1, 1, LOCAL(1),
  // n & 1 == 1
  var_std__equal, 2, LOCAL(1), num_1, 1, LOCAL(2),
  // -> n & 1 == 1
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(230, 6),
  POS(230, 6),
  POS(230, 3)
};

static TAB_NUM t_func_std__is_even[] = {
  3, // locals
  1, // parameters
  LOCAL(3), // 238_0_n
  // n & 1 == 0
  var_std__bit_and, 2, LOCAL(3), num_1, 1, LOCAL(1),
  // n & 1 == 0
  var_std__equal, 2, LOCAL(1), num_0, 1, LOCAL(2),
  // -> n & 1 == 0
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(240, 6),
  POS(240, 6),
  POS(240, 3)
};

static TAB_NUM t_func_std__sqr[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 252_0_var
  // var*var
  var_std__times, 2, LOCAL(2), LOCAL(2), 1, LOCAL(1),
  // -> var*var
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(254, 6),
  POS(254, 3)
};

static TAB_NUM t_func_std__min[] = {
  2, // locals
  -1, // parameters
  REST_PARAMETER, LOCAL(2), // 264_0_args
  // $result args(1)
  LOCAL(2), 1, num_1, 1, var_266_1_result,
  // range(args 2 -1)
  var_range, 3, LOCAL(2), num_2, minus_num_1, 1, LOCAL(1),
  // for_each range(args 2 -1)
  var_for_each, 3, LOCAL(1), lambda_42, lambda_44, TAIL_CALL,
  POS(266, 3),
  POS(267, 12),
  POS(267, 3)
};

static TAB_NUM t_lambda_42[] = {
  1, // locals
  1, // parameters
  var_268_3_arg,
  // arg < result:
  var_std__less, 2, var_268_3_arg, var_266_1_result, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_43, var_next, TAIL_CALL,
  POS(270, 9),
  POS(269, 7)
};

static TAB_NUM t_lambda_43[] = {
  0, // locals
  0, // parameters
  // !result arg
  LET, 1, var_268_3_arg, 1, var_266_1_result,
  // next
  var_next, 0, TAIL_CALL,
  POS(271, 11),
  POS(272, 11)
};

static TAB_NUM t_lambda_44[] = {
  0, // locals
  0, // parameters
  //  result
  LET, 1, var_266_1_result, TAIL_CALL,
  POS(274, 7)
};

static TAB_NUM t_func_std__max[] = {
  2, // locals
  -1, // parameters
  REST_PARAMETER, LOCAL(2), // 284_0_args
  // $result args(1)
  LOCAL(2), 1, num_1, 1, var_286_1_result,
  // range(args 2 -1)
  var_range, 3, LOCAL(2), num_2, minus_num_1, 1, LOCAL(1),
  // for_each range(args 2 -1)
  var_for_each, 3, LOCAL(1), lambda_45, lambda_47, TAIL_CALL,
  POS(286, 3),
  POS(287, 12),
  POS(287, 3)
};

static TAB_NUM t_lambda_45[] = {
  1, // locals
  1, // parameters
  var_288_3_arg,
  // result:
  var_std__less, 2, var_286_1_result, var_288_3_arg, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_46, var_next, TAIL_CALL,
  POS(290, 15),
  POS(289, 7)
};

static TAB_NUM t_lambda_46[] = {
  0, // locals
  0, // parameters
  // !result arg
  LET, 1, var_288_3_arg, 1, var_286_1_result,
  // next
  var_next, 0, TAIL_CALL,
  POS(291, 11),
  POS(292, 11)
};

static TAB_NUM t_lambda_47[] = {
  0, // locals
  0, // parameters
  //  result
  LET, 1, var_286_1_result, TAIL_CALL,
  POS(294, 7)
};

static TAB_NUM t_func_std__min_max[] = {
  2, // locals
  2, // parameters
  var_304_0_first_value,
  var_305_0_second_value,
  // second_value
  var_std__less, 2, var_305_0_second_value, var_304_0_first_value, 1, LOCAL(1),
  // second_value
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_48, lambda_49, TAIL_CALL,
  POS(308, 20),
  POS(308, 20),
  POS(307, 3)
};

static TAB_NUM t_lambda_48[] = {
  0, // locals
  0, // parameters
  //  first_value second_value
  LET, 2, var_304_0_first_value, var_305_0_second_value, TAIL_CALL,
  POS(309, 7)
};

static TAB_NUM t_lambda_49[] = {
  0, // locals
  0, // parameters
  //  second_value first_value
  LET, 2, var_305_0_second_value, var_304_0_first_value, TAIL_CALL,
  POS(310, 7)
};

static TAB_NUM t_func_std__pow[] = {
  0, // locals
  2, // parameters
  var_324_0_x,
  var_325_0_n,
  // cond
  var_cond, 3, lambda_50, lambda_52, lambda_54, TAIL_CALL,
  POS(327, 3)
};

static TAB_NUM t_lambda_50[] = {
  1, // locals
  0, // parameters
  // n == 0 -> 1
  var_std__equal, 2, var_325_0_n, num_0, 1, LOCAL(1),
  //  n == 0 -> 1
  LET, 2, LOCAL(1), lambda_51, TAIL_CALL,
  POS(328, 8),
  POS(328, 7)
};

static TAB_NUM t_lambda_51[] = {
  0, // locals
  0, // parameters
  //  1
  LET, 1, num_1, TAIL_CALL,
  POS(328, 17)
};

static TAB_NUM t_lambda_52[] = {
  1, // locals
  0, // parameters
  // is_odd(n) -> x*sqr(pow(x n >> 1))
  var_is_odd, 1, var_325_0_n, 1, LOCAL(1),
  //  is_odd(n) -> x*sqr(pow(x n >> 1))
  LET, 2, LOCAL(1), lambda_53, TAIL_CALL,
  POS(329, 8),
  POS(329, 7)
};

static TAB_NUM t_lambda_53[] = {
  4, // locals
  0, // parameters
  // n >> 1))
  var_std__shift_right, 2, var_325_0_n, num_1, 1, LOCAL(1),
  // pow(x n >> 1))
  var_pow, 2, var_324_0_x, LOCAL(1), 1, LOCAL(2),
  // sqr(pow(x n >> 1))
  var_sqr, 1, LOCAL(2), 1, LOCAL(3),
  // x*sqr(pow(x n >> 1))
  var_std__times, 2, var_324_0_x, LOCAL(3), 1, LOCAL(4),
  //  x*sqr(pow(x n >> 1))
  LET, 1, LOCAL(4), TAIL_CALL,
  POS(329, 33),
  POS(329, 27),
  POS(329, 23),
  POS(329, 21),
  POS(329, 20)
};

static TAB_NUM t_lambda_54[] = {
  0, // locals
  0, // parameters
  //  true -> sqr(pow(x n >> 1))
  LET, 2, var_true, lambda_55, TAIL_CALL,
  POS(330, 7)
};

static TAB_NUM t_lambda_55[] = {
  3, // locals
  0, // parameters
  // n >> 1))
  var_std__shift_right, 2, var_325_0_n, num_1, 1, LOCAL(1),
  // pow(x n >> 1))
  var_pow, 2, var_324_0_x, LOCAL(1), 1, LOCAL(2),
  // sqr(pow(x n >> 1))
  var_sqr, 1, LOCAL(2), 1, LOCAL(3),
  //  sqr(pow(x n >> 1))
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(330, 26),
  POS(330, 20),
  POS(330, 16),
  POS(330, 15)
};

static TAB_NUM t_func_std__isqrt[] = {
  1, // locals
  1, // parameters
  var_353_0_n,
  // n < 0
  var_std__less, 2, var_353_0_n, num_0, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_56, lambda_57, TAIL_CALL,
  POS(356, 5),
  POS(355, 3)
};

static TAB_NUM t_lambda_56[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(357, 7)
};

static TAB_NUM t_lambda_57[] = {
  0, // locals
  0, // parameters
  // $x n
  LET, 1, var_353_0_n, 1, var_359_1_x,
  // $y 1
  LET, 1, num_1, 1, var_360_1_y,
  // loop:
  var_loop, 1, lambda_loop, TAIL_CALL,
  POS(359, 7),
  POS(360, 7),
  POS(361, 7)
};

static TAB_NUM t_lambda_loop[] = {
  1, // locals
  0, // parameters
  // y
  var_std__less, 2, var_360_1_y, var_359_1_x, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_58, lambda_59, TAIL_CALL,
  POS(363, 15),
  POS(362, 9)
};

static TAB_NUM t_lambda_58[] = {
  1, // locals
  0, // parameters
  // x+y) >> 1
  var_std__plus, 2, var_359_1_x, var_360_1_y, 1, LOCAL(1),
  // !x (x+y) >> 1
  var_std__shift_right, 2, LOCAL(1), num_1, 1, var_359_1_x,
  // !y n .div. x
  var_div, 2, var_353_0_n, var_359_1_x, 1, var_360_1_y,
  // next
  var_next, 0, TAIL_CALL,
  POS(365, 17),
  POS(365, 13),
  POS(366, 13),
  POS(367, 13)
};

static TAB_NUM t_lambda_59[] = {
  0, // locals
  0, // parameters
  //  x
  LET, 1, var_359_1_x, TAIL_CALL,
  POS(368, 13)
};

static FUNKY_CONSTANT constants_table[] = {
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__bin}},
  {FLT_POSITIVE_INT64, 0, {.value = 0}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2}},
  {FLT_STRING_8, 1, {.str_8 = "0"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_3}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_4}},
  {FLT_STRING_8, 0, {.str_8 = ""}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_5}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_6}},
  {FLT_POSITIVE_INT64, 0, {.value = 1}},
  {FLT_CHARACTER, 0, {.value = 48}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_7}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_8}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_9}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__oct}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_10}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_11}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_12}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_13}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_14}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_15}},
  {FLT_POSITIVE_INT64, 0, {.value = 0x07}},
  {FLT_POSITIVE_INT64, 0, {.value = 3}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_16}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_17}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_18}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__hex}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_19}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_20}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_21}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_22}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_23}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_24}},
  {FLT_POSITIVE_INT64, 0, {.value = 0x0f}},
  {FLT_POSITIVE_INT64, 0, {.value = 10}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_25}},
  {FLT_CHARACTER, 0, {.value = 97}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_26}},
  {FLT_POSITIVE_INT64, 0, {.value = 4}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_27}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_28}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_29}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__inc}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__dec}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__extend_to}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_30}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_31}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__reduce_to}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_32}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_33}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__abs}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_34}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_35}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__sgn}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_36}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_37}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_38}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_39}},
  {FLT_NEGATIVE_INT64, 0, {.value = 1}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_40}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_41}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__is_odd}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__is_even}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__sqr}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__min}},
  {FLT_POSITIVE_INT64, 0, {.value = 2}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_42}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_43}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_44}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__max}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_45}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_46}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_47}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__min_max}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_48}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_49}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__pow}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_50}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_51}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_52}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_53}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_54}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_55}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__isqrt}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_56}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_57}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_58}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_59}},
  {FLT_REAL, 0, {.real_value = 3.1415926535897932}}
};

static FUNKY_VARIABLE variables_table[] = {
  {
    FOT_INITIALIZED, 0, 0,
    "bin\000std", NULL,
    {.const_idx = -func_std__bin}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "38_0_val\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "39_0_size\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "undefined\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "equal\000std", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_defined\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "dup\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "assign\000std", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "48_1_str\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "less\000std", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "bit_and\000std", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000std", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "put\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "shift_right\000std", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "next\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "loop\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "pad_left\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "oct\000std", NULL,
    {.const_idx = -func_std__oct}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "74_0_val\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "75_0_size\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "84_1_str\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "hex\000std", NULL,
    {.const_idx = -func_std__hex}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "110_0_val\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "111_0_size\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "120_1_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "124_1_hex_digit\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not\000std", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "minus\000std", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "inc\000std", NULL,
    {.const_idx = -func_std__inc}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "dec\000std", NULL,
    {.const_idx = -func_std__dec}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "minus\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "extend_to\000std", NULL,
    {.const_idx = -func_std__extend_to}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "164_0_var\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "165_0_val\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "reduce_to\000std", NULL,
    {.const_idx = -func_std__reduce_to}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "178_0_var\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "179_0_val\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "abs\000std", NULL,
    {.const_idx = -func_std__abs}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "194_0_var\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "negate\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "sgn\000std", NULL,
    {.const_idx = -func_std__sgn}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "215_0_x\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "true\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "cond\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "is_odd\000std", NULL,
    {.const_idx = -func_std__is_odd}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "is_even\000std", NULL,
    {.const_idx = -func_std__is_even}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "sqr\000std", NULL,
    {.const_idx = -func_std__sqr}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "times\000std", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "min\000std", NULL,
    {.const_idx = -func_std__min}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "266_1_result\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "range\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "268_3_arg\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "for_each\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "max\000std", NULL,
    {.const_idx = -func_std__max}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "286_1_result\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "288_3_arg\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "min_max\000std", NULL,
    {.const_idx = -func_std__min_max}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "304_0_first_value\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "305_0_second_value\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "pow\000std", NULL,
    {.const_idx = -func_std__pow}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "324_0_x\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "325_0_n\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_odd\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "pow\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "sqr\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "isqrt\000std", NULL,
    {.const_idx = -func_std__isqrt}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "353_0_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "359_1_x\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "360_1_y\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "div\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "PI\000std", NULL,
    {.const_idx = -num_3_14159265358979}
  }
};

static FUNKY_NAMESPACE used_namespaces[] = {
  {"std", 1, 0}
};

FUNKY_MODULE module__basic__math = {
  "_basic__math", // module name
  "basic/math.fky", // module filename
  .major_version = 0,
  .minor_version = 0,
  .feature_flags = FEAT_POSITIONS,
  .marker = 0,
  0, // number of required modules
  0, // number of defined namespaces
  1, // number of used namespaces
  91, // number of constants
  73, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  constants_table,
  variables_table,
};
