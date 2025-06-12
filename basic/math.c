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
  num_0x07 = -23,
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
  num_0x0f = -35,
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
  func_std__abs = -46,
  lambda_30 = -47,
  lambda_31 = -48,
  func_std__sgn = -49,
  lambda_32 = -50,
  lambda_33 = -51,
  lambda_34 = -52,
  lambda_35 = -53,
  minus_num_1 = -54,
  lambda_36 = -55,
  lambda_37 = -56,
  func_std__is_odd = -57,
  func_std__is_even = -58,
  func_std__sqr = -59,
  func_std__min = -60,
  num_2 = -61,
  lambda_38 = -62,
  lambda_39 = -63,
  lambda_40 = -64,
  func_std__max = -65,
  lambda_41 = -66,
  lambda_42 = -67,
  lambda_43 = -68,
  func_std__min_max = -69,
  lambda_44 = -70,
  lambda_45 = -71,
  func_std__isqrt = -72,
  lambda_46 = -73,
  lambda_47 = -74,
  lambda_loop = -75,
  lambda_48 = -76,
  lambda_49 = -77,
  num_3_1415926535897932846 = -78
};

enum {
  var__START = FIRST_VAR-1,
  var_std__bin, // initialized
  var_43_5_value, // dynamic
  var_44_5_size, // dynamic
  var_undefined, // extern
  var_std__equal, // extern
  var_is_defined, // extern
  var_dup, // extern
  var_std__assign, // extern
  var_if, // extern
  var_53_8_str, // dynamic
  var_std__less, // extern
  var_std__bit_and, // extern
  var_std__plus, // extern
  var_put, // extern
  var_std__shift_right, // extern
  var_next, // extern
  var_loop, // extern
  var_pad_left, // extern
  var_std__oct, // initialized
  var_84_5_value, // dynamic
  var_85_5_size, // dynamic
  var_94_8_str, // dynamic
  var_std__hex, // initialized
  var_125_5_value, // dynamic
  var_126_5_size, // dynamic
  var_135_8_str, // dynamic
  var_139_14_hex_digit, // dynamic
  var_std__not, // extern
  var_std__minus, // extern
  var_std__inc, // initialized
  var_plus, // extern
  var_std__dec, // initialized
  var_minus, // extern
  var_std__abs, // initialized
  var_191_5_value, // dynamic
  var_negate, // extern
  var_std__sgn, // initialized
  var_224_5_value, // dynamic
  var_true, // extern
  var_cond, // extern
  var_std__is_odd, // initialized
  var_std__is_even, // initialized
  var_std__sqr, // initialized
  var_std__times, // extern
  var_std__min, // initialized
  var_293_4_result, // dynamic
  var_range, // extern
  var_295_8_arg, // dynamic
  var_for_each, // extern
  var_std__max, // initialized
  var_315_4_result, // dynamic
  var_317_8_arg, // dynamic
  var_std__min_max, // initialized
  var_340_5_first_value, // dynamic
  var_341_5_second_value, // dynamic
  var_std__isqrt, // initialized
  var_350_5_n, // dynamic
  var_356_8_x, // dynamic
  var_357_8_y, // dynamic
  var_div, // extern
  var_std__PI, // initialized
  var__END
};


static TAB_NUM t_func_std__bin[] = {
  1, // locals
  -2, // parameters
  MANDATORY_PARAMETER, var_43_5_value,
  var_undefined, var_44_5_size,
  // value == 0:
  var_std__equal, 2, var_43_5_value, num_0, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1, lambda_4, TAIL_CALL,
  POS(47, 5),
  POS(46, 3)
};

static FUNCTION_INFO i_func_std__bin = {
  t_func_std__bin, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_1[] = {
  1, // locals
  0, // parameters
  // is_defined
  var_is_defined, 1, var_44_5_size, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_2, lambda_3, TAIL_CALL,
  POS(49, 14),
  POS(48, 7)
};

static FUNCTION_INFO i_lambda_1 = {
  t_lambda_1, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_2[] = {
  1, // locals
  0, // parameters
  // dup("0" size)
  var_dup, 2, string_1, var_44_5_size, 1, LOCAL(1),
  //  dup("0" size)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(50, 12),
  POS(50, 11)
};

static FUNCTION_INFO i_lambda_2 = {
  t_lambda_2, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_3[] = {
  0, // locals
  0, // parameters
  //  "0"
  LET, 1, string_1, TAIL_CALL,
  POS(51, 11)
};

static FUNCTION_INFO i_lambda_3 = {
  t_lambda_3, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_4[] = {
  1, // locals
  0, // parameters
  // $str ""
  LET, 1, string_2, 1, var_53_8_str,
  // loop !str:
  var_loop, 1, lambda_5, 1, var_53_8_str,
  // is_defined
  var_is_defined, 1, var_44_5_size, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_8, lambda_9, TAIL_CALL,
  POS(53, 7),
  POS(54, 7),
  POS(62, 14),
  POS(61, 7)
};

static FUNCTION_INFO i_lambda_4 = {
  t_lambda_4, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_5[] = {
  1, // locals
  0, // parameters
  // 0:
  var_std__less, 2, num_0, var_43_5_value, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_6, lambda_7, TAIL_CALL,
  POS(56, 19),
  POS(55, 9)
};

static FUNCTION_INFO i_lambda_5 = {
  t_lambda_5, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_6[] = {
  2, // locals
  0, // parameters
  // value & 1)
  var_std__bit_and, 2, var_43_5_value, num_1, 1, LOCAL(1),
  // 0'+(value & 1)
  var_std__plus, 2, chr_48, LOCAL(1), 1, LOCAL(2),
  // put &str '0'+(value & 1)
  var_put, 2, var_53_8_str, LOCAL(2), 1, var_53_8_str,
  // !value value >> 1
  var_std__shift_right, 2, var_43_5_value, num_1, 1, var_43_5_value,
  // next
  var_next, 0, TAIL_CALL,
  POS(57, 27),
  POS(57, 23),
  POS(57, 13),
  POS(58, 13),
  POS(59, 13)
};

static FUNCTION_INFO i_lambda_6 = {
  t_lambda_6, NULL, 5, 0,
  {}
};

static TAB_NUM t_lambda_7[] = {
  0, // locals
  0, // parameters
  //  str
  LET, 1, var_53_8_str, TAIL_CALL,
  POS(60, 13)
};

static FUNCTION_INFO i_lambda_7 = {
  t_lambda_7, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_8[] = {
  1, // locals
  0, // parameters
  // pad_left(str size "0")
  var_pad_left, 3, var_53_8_str, var_44_5_size, string_1, 1, LOCAL(1),
  //  pad_left(str size "0")
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(63, 12),
  POS(63, 11)
};

static FUNCTION_INFO i_lambda_8 = {
  t_lambda_8, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_9[] = {
  0, // locals
  0, // parameters
  //  str
  LET, 1, var_53_8_str, TAIL_CALL,
  POS(64, 11)
};

static FUNCTION_INFO i_lambda_9 = {
  t_lambda_9, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_std__oct[] = {
  1, // locals
  -2, // parameters
  MANDATORY_PARAMETER, var_84_5_value,
  var_undefined, var_85_5_size,
  // value == 0:
  var_std__equal, 2, var_84_5_value, num_0, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_10, lambda_13, TAIL_CALL,
  POS(88, 5),
  POS(87, 3)
};

static FUNCTION_INFO i_func_std__oct = {
  t_func_std__oct, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_10[] = {
  1, // locals
  0, // parameters
  // is_defined
  var_is_defined, 1, var_85_5_size, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_11, lambda_12, TAIL_CALL,
  POS(90, 14),
  POS(89, 7)
};

static FUNCTION_INFO i_lambda_10 = {
  t_lambda_10, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_11[] = {
  1, // locals
  0, // parameters
  // dup("0" size)
  var_dup, 2, string_1, var_85_5_size, 1, LOCAL(1),
  //  dup("0" size)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(91, 12),
  POS(91, 11)
};

static FUNCTION_INFO i_lambda_11 = {
  t_lambda_11, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_12[] = {
  0, // locals
  0, // parameters
  //  "0"
  LET, 1, string_1, TAIL_CALL,
  POS(92, 11)
};

static FUNCTION_INFO i_lambda_12 = {
  t_lambda_12, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_13[] = {
  1, // locals
  0, // parameters
  // $str ""
  LET, 1, string_2, 1, var_94_8_str,
  // loop !str:
  var_loop, 1, lambda_14, 1, var_94_8_str,
  // is_defined
  var_is_defined, 1, var_85_5_size, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_17, lambda_18, TAIL_CALL,
  POS(94, 7),
  POS(95, 7),
  POS(103, 14),
  POS(102, 7)
};

static FUNCTION_INFO i_lambda_13 = {
  t_lambda_13, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_14[] = {
  1, // locals
  0, // parameters
  // 0:
  var_std__less, 2, num_0, var_84_5_value, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_15, lambda_16, TAIL_CALL,
  POS(97, 19),
  POS(96, 9)
};

static FUNCTION_INFO i_lambda_14 = {
  t_lambda_14, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_15[] = {
  2, // locals
  0, // parameters
  // value & 0x07)
  var_std__bit_and, 2, var_84_5_value, num_0x07, 1, LOCAL(1),
  // 0'+(value & 0x07)
  var_std__plus, 2, chr_48, LOCAL(1), 1, LOCAL(2),
  // put &str '0'+(value & 0x07)
  var_put, 2, var_94_8_str, LOCAL(2), 1, var_94_8_str,
  // !value value >> 3
  var_std__shift_right, 2, var_84_5_value, num_3, 1, var_84_5_value,
  // next
  var_next, 0, TAIL_CALL,
  POS(98, 27),
  POS(98, 23),
  POS(98, 13),
  POS(99, 13),
  POS(100, 13)
};

static FUNCTION_INFO i_lambda_15 = {
  t_lambda_15, NULL, 5, 0,
  {}
};

static TAB_NUM t_lambda_16[] = {
  0, // locals
  0, // parameters
  //  str
  LET, 1, var_94_8_str, TAIL_CALL,
  POS(101, 13)
};

static FUNCTION_INFO i_lambda_16 = {
  t_lambda_16, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_17[] = {
  1, // locals
  0, // parameters
  // pad_left(str size "0")
  var_pad_left, 3, var_94_8_str, var_85_5_size, string_1, 1, LOCAL(1),
  //  pad_left(str size "0")
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(104, 12),
  POS(104, 11)
};

static FUNCTION_INFO i_lambda_17 = {
  t_lambda_17, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_18[] = {
  0, // locals
  0, // parameters
  //  str
  LET, 1, var_94_8_str, TAIL_CALL,
  POS(105, 11)
};

static FUNCTION_INFO i_lambda_18 = {
  t_lambda_18, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_std__hex[] = {
  1, // locals
  -2, // parameters
  MANDATORY_PARAMETER, var_125_5_value,
  var_undefined, var_126_5_size,
  // value == 0:
  var_std__equal, 2, var_125_5_value, num_0, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_19, lambda_22, TAIL_CALL,
  POS(129, 5),
  POS(128, 3)
};

static FUNCTION_INFO i_func_std__hex = {
  t_func_std__hex, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_19[] = {
  1, // locals
  0, // parameters
  // is_defined
  var_is_defined, 1, var_126_5_size, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_20, lambda_21, TAIL_CALL,
  POS(131, 14),
  POS(130, 7)
};

static FUNCTION_INFO i_lambda_19 = {
  t_lambda_19, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_20[] = {
  1, // locals
  0, // parameters
  // dup("0" size)
  var_dup, 2, string_1, var_126_5_size, 1, LOCAL(1),
  //  dup("0" size)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(132, 12),
  POS(132, 11)
};

static FUNCTION_INFO i_lambda_20 = {
  t_lambda_20, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_21[] = {
  0, // locals
  0, // parameters
  //  "0"
  LET, 1, string_1, TAIL_CALL,
  POS(133, 11)
};

static FUNCTION_INFO i_lambda_21 = {
  t_lambda_21, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_22[] = {
  1, // locals
  0, // parameters
  // $str ""
  LET, 1, string_2, 1, var_135_8_str,
  // loop !str:
  var_loop, 1, lambda_23, 1, var_135_8_str,
  // is_defined
  var_is_defined, 1, var_126_5_size, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_28, lambda_29, TAIL_CALL,
  POS(135, 7),
  POS(136, 7),
  POS(149, 14),
  POS(148, 7)
};

static FUNCTION_INFO i_lambda_22 = {
  t_lambda_22, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_23[] = {
  1, // locals
  0, // parameters
  // 0:
  var_std__less, 2, num_0, var_125_5_value, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_24, lambda_27, TAIL_CALL,
  POS(138, 19),
  POS(137, 9)
};

static FUNCTION_INFO i_lambda_23 = {
  t_lambda_23, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_24[] = {
  3, // locals
  0, // parameters
  // $hex_digit value & 0x0f
  var_std__bit_and, 2, var_125_5_value, num_0x0f, 1, var_139_14_hex_digit,
  // hex_digit >= 10
  var_std__less, 2, var_139_14_hex_digit, num_10, 1, LOCAL(1),
  // hex_digit >= 10
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_25, lambda_26, 1, LOCAL(3),
  // put &str
  var_put, 2, var_135_8_str, LOCAL(3), 1, var_135_8_str,
  // !value value >> 4
  var_std__shift_right, 2, var_125_5_value, num_4, 1, var_125_5_value,
  // next
  var_next, 0, TAIL_CALL,
  POS(139, 13),
  POS(142, 17),
  POS(142, 17),
  POS(141, 15),
  POS(140, 13),
  POS(145, 13),
  POS(146, 13)
};

static FUNCTION_INFO i_lambda_24 = {
  t_lambda_24, NULL, 7, 0,
  {}
};

static TAB_NUM t_lambda_25[] = {
  2, // locals
  0, // parameters
  // a'+hex_digit-10
  var_std__plus, 2, chr_97, var_139_14_hex_digit, 1, LOCAL(1),
  // a'+hex_digit-10
  var_std__minus, 2, LOCAL(1), num_10, 1, LOCAL(2),
  //  'a'+hex_digit-10
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(143, 21),
  POS(143, 21),
  POS(143, 19)
};

static FUNCTION_INFO i_lambda_25 = {
  t_lambda_25, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_26[] = {
  1, // locals
  0, // parameters
  // 0'+hex_digit
  var_std__plus, 2, chr_48, var_139_14_hex_digit, 1, LOCAL(1),
  //  '0'+hex_digit
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(144, 21),
  POS(144, 19)
};

static FUNCTION_INFO i_lambda_26 = {
  t_lambda_26, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_27[] = {
  0, // locals
  0, // parameters
  //  str
  LET, 1, var_135_8_str, TAIL_CALL,
  POS(147, 13)
};

static FUNCTION_INFO i_lambda_27 = {
  t_lambda_27, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_28[] = {
  1, // locals
  0, // parameters
  // pad_left(str size "0")
  var_pad_left, 3, var_135_8_str, var_126_5_size, string_1, 1, LOCAL(1),
  //  pad_left(str size "0")
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(150, 12),
  POS(150, 11)
};

static FUNCTION_INFO i_lambda_28 = {
  t_lambda_28, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_29[] = {
  0, // locals
  0, // parameters
  //  str
  LET, 1, var_135_8_str, TAIL_CALL,
  POS(151, 11)
};

static FUNCTION_INFO i_lambda_29 = {
  t_lambda_29, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_std__inc[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 163_5_value
  // plus value 1
  var_plus, 2, LOCAL(1), num_1, TAIL_CALL,
  POS(165, 3),
  LOCAL(1)
};

static FUNCTION_INFO i_func_std__inc = {
  t_func_std__inc, NULL, 1, 1,
  {"163_5_value\000"}
};

static TAB_NUM t_func_std__dec[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 177_5_value
  // minus value 1
  var_minus, 2, LOCAL(1), num_1, TAIL_CALL,
  POS(179, 3),
  LOCAL(1)
};

static FUNCTION_INFO i_func_std__dec = {
  t_func_std__dec, NULL, 1, 1,
  {"177_5_value\000"}
};

static TAB_NUM t_func_std__abs[] = {
  1, // locals
  1, // parameters
  var_191_5_value,
  // value < 0
  var_std__less, 2, var_191_5_value, num_0, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_30, lambda_31, TAIL_CALL,
  POS(194, 5),
  POS(193, 3)
};

static FUNCTION_INFO i_func_std__abs = {
  t_func_std__abs, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_30[] = {
  1, // locals
  0, // parameters
  // negate(value)
  var_negate, 1, var_191_5_value, 1, LOCAL(1),
  //  negate(value)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(195, 8),
  POS(195, 7)
};

static FUNCTION_INFO i_lambda_30 = {
  t_lambda_30, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_31[] = {
  0, // locals
  0, // parameters
  //  value
  LET, 1, var_191_5_value, TAIL_CALL,
  POS(196, 7)
};

static FUNCTION_INFO i_lambda_31 = {
  t_lambda_31, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_std__sgn[] = {
  0, // locals
  1, // parameters
  var_224_5_value,
  // cond
  var_cond, 3, lambda_32, lambda_34, lambda_36, TAIL_CALL,
  POS(226, 3)
};

static FUNCTION_INFO i_func_std__sgn = {
  t_func_std__sgn, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_32[] = {
  1, // locals
  0, // parameters
  // 0 -> 1
  var_std__less, 2, num_0, var_224_5_value, 1, LOCAL(1),
  //  value > 0 -> 1
  LET, 2, LOCAL(1), lambda_33, TAIL_CALL,
  POS(227, 16),
  POS(227, 7)
};

static FUNCTION_INFO i_lambda_32 = {
  t_lambda_32, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_33[] = {
  0, // locals
  0, // parameters
  //  1
  LET, 1, num_1, TAIL_CALL,
  POS(227, 20)
};

static FUNCTION_INFO i_lambda_33 = {
  t_lambda_33, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_34[] = {
  1, // locals
  0, // parameters
  // value < 0 -> -1
  var_std__less, 2, var_224_5_value, num_0, 1, LOCAL(1),
  //  value < 0 -> -1
  LET, 2, LOCAL(1), lambda_35, TAIL_CALL,
  POS(228, 8),
  POS(228, 7)
};

static FUNCTION_INFO i_lambda_34 = {
  t_lambda_34, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_35[] = {
  0, // locals
  0, // parameters
  //  -1
  LET, 1, minus_num_1, TAIL_CALL,
  POS(228, 20)
};

static FUNCTION_INFO i_lambda_35 = {
  t_lambda_35, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_36[] = {
  0, // locals
  0, // parameters
  //  true -> 0
  LET, 2, var_true, lambda_37, TAIL_CALL,
  POS(229, 7)
};

static FUNCTION_INFO i_lambda_36 = {
  t_lambda_36, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_37[] = {
  0, // locals
  0, // parameters
  //  0
  LET, 1, num_0, TAIL_CALL,
  POS(229, 15)
};

static FUNCTION_INFO i_lambda_37 = {
  t_lambda_37, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_std__is_odd[] = {
  3, // locals
  1, // parameters
  LOCAL(3), // 241_5_n
  // n & 1 == 1
  var_std__bit_and, 2, LOCAL(3), num_1, 1, LOCAL(1),
  // n & 1 == 1
  var_std__equal, 2, LOCAL(1), num_1, 1, LOCAL(2),
  // -> n & 1 == 1
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(243, 6),
  POS(243, 6),
  POS(243, 3),
  LOCAL(3)
};

static FUNCTION_INFO i_func_std__is_odd = {
  t_func_std__is_odd, NULL, 3, 1,
  {"241_5_n\000"}
};

static TAB_NUM t_func_std__is_even[] = {
  3, // locals
  1, // parameters
  LOCAL(3), // 263_5_n
  // n & 1 == 0
  var_std__bit_and, 2, LOCAL(3), num_1, 1, LOCAL(1),
  // n & 1 == 0
  var_std__equal, 2, LOCAL(1), num_0, 1, LOCAL(2),
  // -> n & 1 == 0
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(265, 6),
  POS(265, 6),
  POS(265, 3),
  LOCAL(3)
};

static FUNCTION_INFO i_func_std__is_even = {
  t_func_std__is_even, NULL, 3, 1,
  {"263_5_n\000"}
};

static TAB_NUM t_func_std__sqr[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 277_5_value
  // value*value
  var_std__times, 2, LOCAL(2), LOCAL(2), 1, LOCAL(1),
  // -> value*value
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(279, 6),
  POS(279, 3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_std__sqr = {
  t_func_std__sqr, NULL, 2, 1,
  {"277_5_value\000"}
};

static TAB_NUM t_func_std__min[] = {
  2, // locals
  -1, // parameters
  REST_PARAMETER, LOCAL(2), // 291_5_args
  // $result args(1)
  LOCAL(2), 1, num_1, 1, var_293_4_result,
  // range(args 2 -1)
  var_range, 3, LOCAL(2), num_2, minus_num_1, 1, LOCAL(1),
  // for_each range(args 2 -1)
  var_for_each, 3, LOCAL(1), lambda_38, lambda_40, TAIL_CALL,
  POS(293, 3),
  POS(294, 12),
  POS(294, 3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_std__min = {
  t_func_std__min, NULL, 3, 1,
  {"291_5_args\000"}
};

static TAB_NUM t_lambda_38[] = {
  1, // locals
  1, // parameters
  var_295_8_arg,
  // arg < result:
  var_std__less, 2, var_295_8_arg, var_293_4_result, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_39, var_next, TAIL_CALL,
  POS(297, 9),
  POS(296, 7)
};

static FUNCTION_INFO i_lambda_38 = {
  t_lambda_38, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_39[] = {
  0, // locals
  0, // parameters
  // !result arg
  LET, 1, var_295_8_arg, 1, var_293_4_result,
  // next
  var_next, 0, TAIL_CALL,
  POS(298, 11),
  POS(299, 11)
};

static FUNCTION_INFO i_lambda_39 = {
  t_lambda_39, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_40[] = {
  0, // locals
  0, // parameters
  //  result
  LET, 1, var_293_4_result, TAIL_CALL,
  POS(301, 7)
};

static FUNCTION_INFO i_lambda_40 = {
  t_lambda_40, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_std__max[] = {
  2, // locals
  -1, // parameters
  REST_PARAMETER, LOCAL(2), // 313_5_args
  // $result args(1)
  LOCAL(2), 1, num_1, 1, var_315_4_result,
  // range(args 2 -1)
  var_range, 3, LOCAL(2), num_2, minus_num_1, 1, LOCAL(1),
  // for_each range(args 2 -1)
  var_for_each, 3, LOCAL(1), lambda_41, lambda_43, TAIL_CALL,
  POS(315, 3),
  POS(316, 12),
  POS(316, 3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_std__max = {
  t_func_std__max, NULL, 3, 1,
  {"313_5_args\000"}
};

static TAB_NUM t_lambda_41[] = {
  1, // locals
  1, // parameters
  var_317_8_arg,
  // result:
  var_std__less, 2, var_315_4_result, var_317_8_arg, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_42, var_next, TAIL_CALL,
  POS(319, 15),
  POS(318, 7)
};

static FUNCTION_INFO i_lambda_41 = {
  t_lambda_41, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_42[] = {
  0, // locals
  0, // parameters
  // !result arg
  LET, 1, var_317_8_arg, 1, var_315_4_result,
  // next
  var_next, 0, TAIL_CALL,
  POS(320, 11),
  POS(321, 11)
};

static FUNCTION_INFO i_lambda_42 = {
  t_lambda_42, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_43[] = {
  0, // locals
  0, // parameters
  //  result
  LET, 1, var_315_4_result, TAIL_CALL,
  POS(323, 7)
};

static FUNCTION_INFO i_lambda_43 = {
  t_lambda_43, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_std__min_max[] = {
  2, // locals
  2, // parameters
  var_340_5_first_value,
  var_341_5_second_value,
  // second_value
  var_std__less, 2, var_341_5_second_value, var_340_5_first_value, 1, LOCAL(1),
  // second_value
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_44, lambda_45, TAIL_CALL,
  POS(344, 20),
  POS(344, 20),
  POS(343, 3)
};

static FUNCTION_INFO i_func_std__min_max = {
  t_func_std__min_max, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_44[] = {
  0, // locals
  0, // parameters
  //  first_value second_value
  LET, 2, var_340_5_first_value, var_341_5_second_value, TAIL_CALL,
  POS(345, 7)
};

static FUNCTION_INFO i_lambda_44 = {
  t_lambda_44, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_45[] = {
  0, // locals
  0, // parameters
  //  second_value first_value
  LET, 2, var_341_5_second_value, var_340_5_first_value, TAIL_CALL,
  POS(346, 7)
};

static FUNCTION_INFO i_lambda_45 = {
  t_lambda_45, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_std__isqrt[] = {
  1, // locals
  1, // parameters
  var_350_5_n,
  // n < 0
  var_std__less, 2, var_350_5_n, num_0, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_46, lambda_47, TAIL_CALL,
  POS(353, 5),
  POS(352, 3)
};

static FUNCTION_INFO i_func_std__isqrt = {
  t_func_std__isqrt, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_46[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(354, 7)
};

static FUNCTION_INFO i_lambda_46 = {
  t_lambda_46, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_47[] = {
  0, // locals
  0, // parameters
  // $x n
  LET, 1, var_350_5_n, 1, var_356_8_x,
  // $y 1
  LET, 1, num_1, 1, var_357_8_y,
  // loop:
  var_loop, 1, lambda_loop, TAIL_CALL,
  POS(356, 7),
  POS(357, 7),
  POS(358, 7)
};

static FUNCTION_INFO i_lambda_47 = {
  t_lambda_47, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_loop[] = {
  1, // locals
  0, // parameters
  // y
  var_std__less, 2, var_357_8_y, var_356_8_x, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_48, lambda_49, TAIL_CALL,
  POS(360, 15),
  POS(359, 9)
};

static FUNCTION_INFO i_lambda_loop = {
  t_lambda_loop, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_48[] = {
  1, // locals
  0, // parameters
  // x+y) >> 1
  var_std__plus, 2, var_356_8_x, var_357_8_y, 1, LOCAL(1),
  // !x (x+y) >> 1
  var_std__shift_right, 2, LOCAL(1), num_1, 1, var_356_8_x,
  // !y n .div. x
  var_div, 2, var_350_5_n, var_356_8_x, 1, var_357_8_y,
  // next
  var_next, 0, TAIL_CALL,
  POS(362, 17),
  POS(362, 13),
  POS(363, 13),
  POS(364, 13)
};

static FUNCTION_INFO i_lambda_48 = {
  t_lambda_48, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_49[] = {
  0, // locals
  0, // parameters
  //  x
  LET, 1, var_356_8_x, TAIL_CALL,
  POS(365, 13)
};

static FUNCTION_INFO i_lambda_49 = {
  t_lambda_49, NULL, 1, 0,
  {}
};

static FUNKY_CONSTANT constants_table[] = {
  {FLT_FUNCTION, 0, {.func_info = &i_func_std__bin}},
  {FLT_POSITIVE_INT64, 0, {.value = 0}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_1}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_2}},
  {FLT_STRING_8, 1, {.str_8 = "0"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_3}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_4}},
  {FLT_STRING_8, 0, {.str_8 = ""}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_5}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_6}},
  {FLT_POSITIVE_INT64, 0, {.value = 1}},
  {FLT_CHARACTER, 0, {.value = 48}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_7}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_8}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_9}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std__oct}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_10}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_11}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_12}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_13}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_14}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_15}},
  {FLT_POSITIVE_INT64, 0, {.value = 0x07}},
  {FLT_POSITIVE_INT64, 0, {.value = 3}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_16}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_17}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_18}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std__hex}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_19}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_20}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_21}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_22}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_23}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_24}},
  {FLT_POSITIVE_INT64, 0, {.value = 0x0f}},
  {FLT_POSITIVE_INT64, 0, {.value = 10}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_25}},
  {FLT_CHARACTER, 0, {.value = 97}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_26}},
  {FLT_POSITIVE_INT64, 0, {.value = 4}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_27}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_28}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_29}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std__inc}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std__dec}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std__abs}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_30}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_31}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std__sgn}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_32}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_33}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_34}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_35}},
  {FLT_NEGATIVE_INT64, 0, {.value = 1}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_36}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_37}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std__is_odd}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std__is_even}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std__sqr}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std__min}},
  {FLT_POSITIVE_INT64, 0, {.value = 2}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_38}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_39}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_40}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std__max}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_41}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_42}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_43}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std__min_max}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_44}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_45}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std__isqrt}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_46}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_47}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_loop}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_48}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_49}},
  {FLT_REAL, 0, {.real_value = 3.1415926535897932846}}
};

static FUNKY_VARIABLE variables_table[] = {
  {
    FOT_INITIALIZED, 0, 0,
    "bin\000std", NULL,
    {.const_idx = -func_std__bin}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "43_5_value\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "44_5_size\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "undefined\000", NULL,
    {.position = POS(44, 12)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "equal\000std", NULL,
    {.position = POS(47, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_defined\000", NULL,
    {.position = POS(49, 14)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "dup\000", NULL,
    {.position = POS(50, 12)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "assign\000std", NULL,
    {.position = POS(50, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if\000", NULL,
    {.position = POS(48, 7)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "53_8_str\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "less\000std", NULL,
    {.position = POS(56, 19)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "bit_and\000std", NULL,
    {.position = POS(57, 27)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000std", NULL,
    {.position = POS(57, 23)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "put\000", NULL,
    {.position = POS(57, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "shift_right\000std", NULL,
    {.position = POS(58, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "next\000", NULL,
    {.position = POS(59, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "loop\000", NULL,
    {.position = POS(54, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "pad_left\000", NULL,
    {.position = POS(63, 12)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "oct\000std", NULL,
    {.const_idx = -func_std__oct}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "84_5_value\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "85_5_size\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "94_8_str\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "hex\000std", NULL,
    {.const_idx = -func_std__hex}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "125_5_value\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "126_5_size\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "135_8_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "139_14_hex_digit\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not\000std", NULL,
    {.position = POS(142, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "minus\000std", NULL,
    {.position = POS(143, 21)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "inc\000std", NULL,
    {.const_idx = -func_std__inc}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000", NULL,
    {.position = POS(165, 3)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "dec\000std", NULL,
    {.const_idx = -func_std__dec}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "minus\000", NULL,
    {.position = POS(179, 3)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "abs\000std", NULL,
    {.const_idx = -func_std__abs}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "191_5_value\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "negate\000", NULL,
    {.position = POS(195, 8)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "sgn\000std", NULL,
    {.const_idx = -func_std__sgn}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "224_5_value\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "true\000", NULL,
    {.position = POS(229, 8)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "cond\000", NULL,
    {.position = POS(226, 3)}
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
    "times\000std", NULL,
    {.position = POS(279, 6)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "min\000std", NULL,
    {.const_idx = -func_std__min}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "293_4_result\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "range\000", NULL,
    {.position = POS(294, 12)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "295_8_arg\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "for_each\000", NULL,
    {.position = POS(294, 3)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "max\000std", NULL,
    {.const_idx = -func_std__max}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "315_4_result\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "317_8_arg\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "min_max\000std", NULL,
    {.const_idx = -func_std__min_max}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "340_5_first_value\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "341_5_second_value\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "isqrt\000std", NULL,
    {.const_idx = -func_std__isqrt}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "350_5_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "356_8_x\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "357_8_y\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "div\000", NULL,
    {.position = POS(363, 16)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "PI\000std", NULL,
    {.const_idx = -num_3_1415926535897932846}
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
  .feature_flags = FEAT_POSITIONS|FEAT_FUNCTION_INFO,
  .marker = 0,
  0, // number of required modules
  0, // number of defined namespaces
  1, // number of used namespaces
  78, // number of constants
  61, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  constants_table,
  variables_table,
};
