#include <stddef.h>
#include <stdint.h>

#include "runtime/common.h"
#include "runtime/builtins.h"
#include "runtime/fko.h"
#include "runtime/memory.h"

enum {
  func_std__from_json = -1,
  lambda_1 = -2,
  lambda_2 = -3,
  str_text_contains_mu = -4,
  func_tokenize = -5,
  num_1 = -6,
  lambda_loop = -7,
  lambda_3 = -8,
  lambda_4 = -9,
  chr_32 = -10,
  lambda_5 = -11,
  lambda_6 = -12,
  chr_48 = -13,
  chr_57 = -14,
  value_range_52_21 = -15,
  chr_45 = -16,
  sequence_52_16 = -17,
  chr_44 = -18,
  chr_58 = -19,
  chr_123 = -20,
  chr_125 = -21,
  chr_91 = -22,
  chr_93 = -23,
  sequence_53_16 = -24,
  chr_34 = -25,
  chr_116 = -26,
  chr_102 = -27,
  chr_110 = -28,
  lambda_7 = -29,
  minus_num_1 = -30,
  str_unexpected_input = -31,
  func_handle_simple_token = -32,
  func_handle_true = -33,
  num_3 = -34,
  lambda_8 = -35,
  str_rue = -36,
  lambda_9 = -37,
  num_4 = -38,
  lambda_10 = -39,
  str_invalid_identifi = -40,
  func_handle_false = -41,
  lambda_11 = -42,
  str_alse = -43,
  lambda_12 = -44,
  num_5 = -45,
  lambda_13 = -46,
  func_handle_null = -47,
  lambda_14 = -48,
  str_ull = -49,
  lambda_15 = -50,
  lambda_16 = -51,
  func_handle_number = -52,
  lambda_value_is_defined = -53,
  lambda_17 = -54,
  str_invalid_numeric = -55,
  func_handle_string = -56,
  string_1 = -57,
  func_handle_string_character = -58,
  lambda_18 = -59,
  str_Missing_closing = -60,
  lambda_19 = -61,
  lambda_quot = -62,
  chr_92 = -63,
  lambda_20 = -64,
  lambda_21 = -65,
  chr_98 = -66,
  lambda_b = -67,
  chr_8 = -68,
  num_2 = -69,
  lambda_f = -70,
  chr_12 = -71,
  lambda_n = -72,
  chr_10 = -73,
  chr_114 = -74,
  lambda_r = -75,
  chr_13 = -76,
  lambda_t = -77,
  chr_9 = -78,
  chr_117 = -79,
  lambda_u = -80,
  lambda_22 = -81,
  lambda_23 = -82,
  lambda_24 = -83,
  num_6 = -84,
  chr_118 = -85,
  lambda_v = -86,
  chr_11 = -87,
  lambda_25 = -88,
  func_invalid_special_character = -89,
  str_Invalid_special = -90,
  lambda_26 = -91,
  func_extract = -92,
  lambda_27 = -93,
  lambda_28 = -94,
  lambda_29 = -95,
  str_Unexpected_token = -96,
  func_extract_object = -97,
  lambda_30 = -98,
  lambda_31 = -99,
  lambda_32 = -100,
  lambda_2_loop = -101,
  lambda_33 = -102,
  lambda_34 = -103,
  lambda_35 = -104,
  lambda_36 = -105,
  lambda_37 = -106,
  lambda_38 = -107,
  func_missing_closing_brace = -108,
  str_Closing_brace_ex = -109,
  func_invalid_attribute = -110,
  str_Invalid_attribut = -111,
  func_extract_array = -112,
  lambda_39 = -113,
  lambda_40 = -114,
  lambda_41 = -115,
  lambda_3_loop = -116,
  lambda_42 = -117,
  lambda_43 = -118,
  lambda_44 = -119,
  func_missing_closing_bracket = -120,
  str_Closing_bracket = -121
};

enum {
  var__START = FIRST_VAR-1,
  var_std__from_json, // initialized
  var_split_into_lines, // extern
  var_28_4_tokens, // dynamic
  var_map_reduce, // extern
  var_29_20_obj, // dynamic
  var_is_empty, // extern
  var_std__assign, // extern
  var_PARSE_ERROR, // extern
  var_error, // extern
  var_if, // extern
  var_35_13_line, // dynamic
  var_36_4_tokens, // dynamic
  var_empty_list, // extern
  var_37_4_i, // dynamic
  var_38_4_n, // dynamic
  var_length_of, // extern
  var_std__less, // extern
  var_44_10_chr, // dynamic
  var_std__not, // extern
  var_std__plus, // extern
  var_next, // extern
  var_std__value_range, // extern
  var_std__sequence, // extern
  var_range, // extern
  var_case, // extern
  var_push, // extern
  var_std__equal, // extern
  var_std__and, // extern
  var_true, // extern
  var_false, // extern
  var_undefined, // extern
  var_89_16_number, // dynamic
  var_90_37_value, // dynamic
  var_parse_number, // extern
  var_is_defined, // extern
  var_std__minus, // extern
  var_99_16_s, // dynamic
  var_101_16_str, // dynamic
  var_loop, // extern
  var_111_22_str_chr, // dynamic
  var_break, // extern
  var_122_30_spec_chr, // dynamic
  var_147_68_rest, // dynamic
  var_147_74_code, // dynamic
  var_parse_hex, // extern
  var_character, // extern
  var_is_simple, // attribute
  var_std_types__object, // extern
  var_std_types__number, // extern
  var_std_types__string, // extern
  var_std_types__true, // extern
  var_std_types__false, // extern
  var_std_types__undefined, // extern
  var_183_12_tokens, // dynamic
  var_184_4_token, // dynamic
  var_196_6_attributes, // dynamic
  var_empty_insert_order_table, // extern
  var_210_20_key, // dynamic
  var_is_a_string, // extern
  var_if_not, // extern
  var_240_10_items, // dynamic
  var__END
};


static TAB_NUM t_func_std__from_json[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 26_19_text
  // $lines split_into_lines(text)
  var_split_into_lines, 1, LOCAL(2), 1, LOCAL(3),
  // $tokens map_reduce(lines tokenize)
  var_map_reduce, 2, LOCAL(3), func_tokenize, 1, var_28_4_tokens,
  // extract &tokens $obj
  func_extract, 1, var_28_4_tokens, 2, var_28_4_tokens, var_29_20_obj,
  // is_empty
  var_is_empty, 1, var_28_4_tokens, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1, lambda_2, TAIL_CALL,
  POS(27, 3),
  POS(28, 3),
  POS(29, 3),
  POS(31, 12),
  POS(30, 3)
};

static TAB_NUM t_lambda_1[] = {
  0, // locals
  0, // parameters
  //  obj
  LET, 1, var_29_20_obj, TAIL_CALL,
  POS(32, 7)
};

static TAB_NUM t_lambda_2[] = {
  0, // locals
  0, // parameters
  // error PARSE_ERROR "text contains multiple objects" tokens
  var_error, 3, var_PARSE_ERROR, str_text_contains_mu, var_28_4_tokens, TAIL_CALL,
  POS(33, 7)
};

static TAB_NUM t_func_tokenize[] = {
  0, // locals
  1, // parameters
  var_35_13_line,
  // $tokens empty_list
  LET, 1, var_empty_list, 1, var_36_4_tokens,
  // $i 1
  LET, 1, num_1, 1, var_37_4_i,
  // $n length_of(line)
  var_length_of, 1, var_35_13_line, 1, var_38_4_n,
  // loop:
  var_loop, 1, lambda_loop, TAIL_CALL,
  POS(36, 3),
  POS(37, 3),
  POS(38, 3),
  POS(39, 3)
};

static TAB_NUM t_lambda_loop[] = {
  1, // locals
  0, // parameters
  // n
  var_std__less, 2, var_38_4_n, var_37_4_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_3, lambda_4, TAIL_CALL,
  POS(41, 11),
  POS(40, 5)
};

static TAB_NUM t_lambda_3[] = {
  0, // locals
  0, // parameters
  //  tokens
  LET, 1, var_36_4_tokens, TAIL_CALL,
  POS(42, 9)
};

static TAB_NUM t_lambda_4[] = {
  2, // locals
  0, // parameters
  // $chr line(i)
  var_35_13_line, 1, var_37_4_i, 1, var_44_10_chr,
  //  ':
  var_std__less, 2, chr_32, var_44_10_chr, 1, LOCAL(1),
  //  ':
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_5, lambda_6, TAIL_CALL,
  POS(44, 9),
  POS(46, 19),
  POS(46, 19),
  POS(45, 9)
};

static TAB_NUM t_lambda_5[] = {
  0, // locals
  0, // parameters
  // !i i+1
  var_std__plus, 2, var_37_4_i, num_1, 1, var_37_4_i,
  // next
  var_next, 0, TAIL_CALL,
  POS(47, 13),
  POS(48, 13)
};

static TAB_NUM t_lambda_6[] = {
  0, // locals
  0, // parameters
  // case chr
  var_case, 14, var_44_10_chr, chr_34, func_handle_string, sequence_52_16, func_handle_number, sequence_53_16, func_handle_simple_token, chr_116, func_handle_true, chr_102, func_handle_false, chr_110, func_handle_null, lambda_7, TAIL_CALL,
  POS(50, 13)
};

static TAB_NUM t_lambda_7[] = {
  1, // locals
  0, // parameters
  // range(line i -1)
  var_range, 3, var_35_13_line, var_37_4_i, minus_num_1, 1, LOCAL(1),
  // error PARSE_ERROR "unexpected input" range(line i -1)
  var_error, 3, var_PARSE_ERROR, str_unexpected_input, LOCAL(1), TAIL_CALL,
  POS(57, 54),
  POS(57, 17)
};

static TAB_NUM t_func_handle_simple_token[] = {
  0, // locals
  0, // parameters
  // push &tokens chr
  var_push, 2, var_36_4_tokens, var_44_10_chr, 1, var_36_4_tokens,
  // !i i+1
  var_std__plus, 2, var_37_4_i, num_1, 1, var_37_4_i,
  // next
  var_next, 0, TAIL_CALL,
  POS(60, 15),
  POS(61, 15),
  POS(62, 15)
};

static TAB_NUM t_func_handle_true[] = {
  4, // locals
  0, // parameters
  // i+3 <= n && range(line i+1 i+3) == "rue":
  var_std__plus, 2, var_37_4_i, num_3, 1, LOCAL(1),
  // n && range(line i+1 i+3) == "rue":
  var_std__less, 2, var_38_4_n, LOCAL(1), 1, LOCAL(2),
  // n && range(line i+1 i+3) == "rue":
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // n && range(line i+1 i+3) == "rue":
  var_std__and, 2, LOCAL(3), lambda_8, 1, LOCAL(4),
  // if
  var_if, 3, LOCAL(4), lambda_9, lambda_10, TAIL_CALL,
  POS(66, 17),
  POS(66, 24),
  POS(66, 24),
  POS(66, 24),
  POS(65, 15)
};

static TAB_NUM t_lambda_8[] = {
  4, // locals
  0, // parameters
  // i+1 i+3) == "rue":
  var_std__plus, 2, var_37_4_i, num_1, 1, LOCAL(1),
  // i+3) == "rue":
  var_std__plus, 2, var_37_4_i, num_3, 1, LOCAL(2),
  // range(line i+1 i+3) == "rue":
  var_range, 3, var_35_13_line, LOCAL(1), LOCAL(2), 1, LOCAL(3),
  // range(line i+1 i+3) == "rue":
  var_std__equal, 2, LOCAL(3), str_rue, 1, LOCAL(4),
  // range(line i+1 i+3) == "rue":
  LET, 1, LOCAL(4), TAIL_CALL,
  POS(66, 40),
  POS(66, 44),
  POS(66, 29),
  POS(66, 29),
  POS(66, 29)
};

static TAB_NUM t_lambda_9[] = {
  0, // locals
  0, // parameters
  // !i i+4
  var_std__plus, 2, var_37_4_i, num_4, 1, var_37_4_i,
  // push &tokens true
  var_push, 2, var_36_4_tokens, var_true, 1, var_36_4_tokens,
  // next
  var_next, 0, TAIL_CALL,
  POS(67, 19),
  POS(68, 19),
  POS(69, 19)
};

static TAB_NUM t_lambda_10[] = {
  1, // locals
  0, // parameters
  // range(line i -1)
  var_range, 3, var_35_13_line, var_37_4_i, minus_num_1, 1, LOCAL(1),
  // error PARSE_ERROR "invalid identifier" range(line i -1)
  var_error, 3, var_PARSE_ERROR, str_invalid_identifi, LOCAL(1), TAIL_CALL,
  POS(70, 58),
  POS(70, 19)
};

static TAB_NUM t_func_handle_false[] = {
  4, // locals
  0, // parameters
  // i+4 <= n && range(line i+1 i+4) == "alse":
  var_std__plus, 2, var_37_4_i, num_4, 1, LOCAL(1),
  // n && range(line i+1 i+4) == "alse":
  var_std__less, 2, var_38_4_n, LOCAL(1), 1, LOCAL(2),
  // n && range(line i+1 i+4) == "alse":
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // n && range(line i+1 i+4) == "alse":
  var_std__and, 2, LOCAL(3), lambda_11, 1, LOCAL(4),
  // if
  var_if, 3, LOCAL(4), lambda_12, lambda_13, TAIL_CALL,
  POS(74, 17),
  POS(74, 24),
  POS(74, 24),
  POS(74, 24),
  POS(73, 15)
};

static TAB_NUM t_lambda_11[] = {
  4, // locals
  0, // parameters
  // i+1 i+4) == "alse":
  var_std__plus, 2, var_37_4_i, num_1, 1, LOCAL(1),
  // i+4) == "alse":
  var_std__plus, 2, var_37_4_i, num_4, 1, LOCAL(2),
  // range(line i+1 i+4) == "alse":
  var_range, 3, var_35_13_line, LOCAL(1), LOCAL(2), 1, LOCAL(3),
  // range(line i+1 i+4) == "alse":
  var_std__equal, 2, LOCAL(3), str_alse, 1, LOCAL(4),
  // range(line i+1 i+4) == "alse":
  LET, 1, LOCAL(4), TAIL_CALL,
  POS(74, 40),
  POS(74, 44),
  POS(74, 29),
  POS(74, 29),
  POS(74, 29)
};

static TAB_NUM t_lambda_12[] = {
  0, // locals
  0, // parameters
  // !i i+5
  var_std__plus, 2, var_37_4_i, num_5, 1, var_37_4_i,
  // push &tokens false
  var_push, 2, var_36_4_tokens, var_false, 1, var_36_4_tokens,
  // next
  var_next, 0, TAIL_CALL,
  POS(75, 19),
  POS(76, 19),
  POS(77, 19)
};

static TAB_NUM t_lambda_13[] = {
  1, // locals
  0, // parameters
  // range(line i -1)
  var_range, 3, var_35_13_line, var_37_4_i, minus_num_1, 1, LOCAL(1),
  // error PARSE_ERROR "invalid identifier" range(line i -1)
  var_error, 3, var_PARSE_ERROR, str_invalid_identifi, LOCAL(1), TAIL_CALL,
  POS(78, 58),
  POS(78, 19)
};

static TAB_NUM t_func_handle_null[] = {
  4, // locals
  0, // parameters
  // i+3 <= n && range(line i+1 i+3) == "ull":
  var_std__plus, 2, var_37_4_i, num_3, 1, LOCAL(1),
  // n && range(line i+1 i+3) == "ull":
  var_std__less, 2, var_38_4_n, LOCAL(1), 1, LOCAL(2),
  // n && range(line i+1 i+3) == "ull":
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // n && range(line i+1 i+3) == "ull":
  var_std__and, 2, LOCAL(3), lambda_14, 1, LOCAL(4),
  // if
  var_if, 3, LOCAL(4), lambda_15, lambda_16, TAIL_CALL,
  POS(82, 17),
  POS(82, 24),
  POS(82, 24),
  POS(82, 24),
  POS(81, 15)
};

static TAB_NUM t_lambda_14[] = {
  4, // locals
  0, // parameters
  // i+1 i+3) == "ull":
  var_std__plus, 2, var_37_4_i, num_1, 1, LOCAL(1),
  // i+3) == "ull":
  var_std__plus, 2, var_37_4_i, num_3, 1, LOCAL(2),
  // range(line i+1 i+3) == "ull":
  var_range, 3, var_35_13_line, LOCAL(1), LOCAL(2), 1, LOCAL(3),
  // range(line i+1 i+3) == "ull":
  var_std__equal, 2, LOCAL(3), str_ull, 1, LOCAL(4),
  // range(line i+1 i+3) == "ull":
  LET, 1, LOCAL(4), TAIL_CALL,
  POS(82, 40),
  POS(82, 44),
  POS(82, 29),
  POS(82, 29),
  POS(82, 29)
};

static TAB_NUM t_lambda_15[] = {
  0, // locals
  0, // parameters
  // !i i+4
  var_std__plus, 2, var_37_4_i, num_4, 1, var_37_4_i,
  // push &tokens undefined
  var_push, 2, var_36_4_tokens, var_undefined, 1, var_36_4_tokens,
  // next
  var_next, 0, TAIL_CALL,
  POS(83, 19),
  POS(84, 19),
  POS(85, 19)
};

static TAB_NUM t_lambda_16[] = {
  1, // locals
  0, // parameters
  // range(line i -1)
  var_range, 3, var_35_13_line, var_37_4_i, minus_num_1, 1, LOCAL(1),
  // error PARSE_ERROR "invalid identifier" range(line i -1)
  var_error, 3, var_PARSE_ERROR, str_invalid_identifi, LOCAL(1), TAIL_CALL,
  POS(86, 58),
  POS(86, 19)
};

static TAB_NUM t_func_handle_number[] = {
  1, // locals
  0, // parameters
  // $number range(line i -1)
  var_range, 3, var_35_13_line, var_37_4_i, minus_num_1, 1, var_89_16_number,
  // parse_number &number $value
  var_parse_number, 1, var_89_16_number, 2, var_89_16_number, var_90_37_value,
  // is_defined:
  var_is_defined, 1, var_90_37_value, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_value_is_defined, lambda_17, TAIL_CALL,
  POS(89, 15),
  POS(90, 15),
  POS(92, 23),
  POS(91, 15)
};

static TAB_NUM t_lambda_value_is_defined[] = {
  2, // locals
  0, // parameters
  // n+1-length_of(number)
  var_std__plus, 2, var_38_4_n, num_1, 1, LOCAL(1),
  // length_of(number)
  var_length_of, 1, var_89_16_number, 1, LOCAL(2),
  // !i n+1-length_of(number)
  var_std__minus, 2, LOCAL(1), LOCAL(2), 1, var_37_4_i,
  // push &tokens value
  var_push, 2, var_36_4_tokens, var_90_37_value, 1, var_36_4_tokens,
  // next
  var_next, 0, TAIL_CALL,
  POS(93, 22),
  POS(93, 26),
  POS(93, 19),
  POS(94, 19),
  POS(95, 19)
};

static TAB_NUM t_lambda_17[] = {
  0, // locals
  0, // parameters
  // error PARSE_ERROR "invalid numeric literal" number
  var_error, 3, var_PARSE_ERROR, str_invalid_numeric, var_89_16_number, TAIL_CALL,
  POS(96, 19)
};

static TAB_NUM t_func_handle_string[] = {
  0, // locals
  0, // parameters
  // $s i
  LET, 1, var_37_4_i, 1, var_99_16_s,
  // !i i+1
  var_std__plus, 2, var_37_4_i, num_1, 1, var_37_4_i,
  // $str ""
  LET, 1, string_1, 1, var_101_16_str,
  // loop handle_string_character next
  var_loop, 2, func_handle_string_character, var_next, TAIL_CALL,
  POS(99, 15),
  POS(100, 15),
  POS(101, 15),
  POS(102, 15)
};

static TAB_NUM t_func_handle_string_character[] = {
  1, // locals
  0, // parameters
  // n:
  var_std__less, 2, var_38_4_n, var_37_4_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_18, lambda_19, TAIL_CALL,
  POS(106, 23),
  POS(105, 17)
};

static TAB_NUM t_lambda_18[] = {
  1, // locals
  0, // parameters
  // range(line s -1)
  var_range, 3, var_35_13_line, var_99_16_s, minus_num_1, 1, LOCAL(1),
  // error PARSE_ERROR
  var_error, 3, var_PARSE_ERROR, str_Missing_closing, LOCAL(1), TAIL_CALL,
  POS(109, 23),
  POS(107, 21)
};

static TAB_NUM t_lambda_19[] = {
  0, // locals
  0, // parameters
  // $str_chr line(i)
  var_35_13_line, 1, var_37_4_i, 1, var_111_22_str_chr,
  // case str_chr
  var_case, 6, var_111_22_str_chr, chr_34, lambda_quot, chr_92, lambda_20, lambda_26, TAIL_CALL,
  POS(111, 21),
  POS(112, 21)
};

static TAB_NUM t_lambda_quot[] = {
  0, // locals
  0, // parameters
  // !i i+1
  var_std__plus, 2, var_37_4_i, num_1, 1, var_37_4_i,
  // push &tokens str
  var_push, 2, var_36_4_tokens, var_101_16_str, 1, var_36_4_tokens,
  // break
  var_break, 0, TAIL_CALL,
  POS(114, 25),
  POS(115, 25),
  POS(116, 25)
};

static TAB_NUM t_lambda_20[] = {
  2, // locals
  0, // parameters
  // i+1 > n
  var_std__plus, 2, var_37_4_i, num_1, 1, LOCAL(1),
  // n
  var_std__less, 2, var_38_4_n, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), func_invalid_special_character, lambda_21, TAIL_CALL,
  POS(119, 27),
  POS(119, 33),
  POS(118, 25)
};

static TAB_NUM t_lambda_21[] = {
  1, // locals
  0, // parameters
  // i+1)
  var_std__plus, 2, var_37_4_i, num_1, 1, LOCAL(1),
  // $spec_chr line(i+1)
  var_35_13_line, 1, LOCAL(1), 1, var_122_30_spec_chr,
  // case spec_chr
  var_case, 16, var_122_30_spec_chr, chr_98, lambda_b, chr_102, lambda_f, chr_110, lambda_n, chr_114, lambda_r, chr_116, lambda_t, chr_117, lambda_u, chr_118, lambda_v, lambda_25, TAIL_CALL,
  POS(122, 44),
  POS(122, 29),
  POS(123, 29)
};

static TAB_NUM t_lambda_b[] = {
  0, // locals
  0, // parameters
  // push &str '@bs;'
  var_push, 2, var_101_16_str, chr_8, 1, var_101_16_str,
  // !i i+2
  var_std__plus, 2, var_37_4_i, num_2, 1, var_37_4_i,
  // next
  var_next, 0, TAIL_CALL,
  POS(125, 33),
  POS(126, 33),
  POS(127, 33)
};

static TAB_NUM t_lambda_f[] = {
  0, // locals
  0, // parameters
  // push &str '@ff;'
  var_push, 2, var_101_16_str, chr_12, 1, var_101_16_str,
  // !i i+2
  var_std__plus, 2, var_37_4_i, num_2, 1, var_37_4_i,
  // next
  var_next, 0, TAIL_CALL,
  POS(129, 33),
  POS(130, 33),
  POS(131, 33)
};

static TAB_NUM t_lambda_n[] = {
  0, // locals
  0, // parameters
  // push &str '@nl;'
  var_push, 2, var_101_16_str, chr_10, 1, var_101_16_str,
  // !i i+2
  var_std__plus, 2, var_37_4_i, num_2, 1, var_37_4_i,
  // next
  var_next, 0, TAIL_CALL,
  POS(133, 33),
  POS(134, 33),
  POS(135, 33)
};

static TAB_NUM t_lambda_r[] = {
  0, // locals
  0, // parameters
  // push &str '@cr;'
  var_push, 2, var_101_16_str, chr_13, 1, var_101_16_str,
  // !i i+2
  var_std__plus, 2, var_37_4_i, num_2, 1, var_37_4_i,
  // next
  var_next, 0, TAIL_CALL,
  POS(137, 33),
  POS(138, 33),
  POS(139, 33)
};

static TAB_NUM t_lambda_t[] = {
  0, // locals
  0, // parameters
  // push &str '@ht;'
  var_push, 2, var_101_16_str, chr_9, 1, var_101_16_str,
  // !i i+2
  var_std__plus, 2, var_37_4_i, num_2, 1, var_37_4_i,
  // next
  var_next, 0, TAIL_CALL,
  POS(141, 33),
  POS(142, 33),
  POS(143, 33)
};

static TAB_NUM t_lambda_u[] = {
  3, // locals
  0, // parameters
  // i+5 <= n:
  var_std__plus, 2, var_37_4_i, num_5, 1, LOCAL(1),
  // n:
  var_std__less, 2, var_38_4_n, LOCAL(1), 1, LOCAL(2),
  // n:
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_22, func_invalid_special_character, TAIL_CALL,
  POS(146, 35),
  POS(146, 42),
  POS(146, 42),
  POS(145, 33)
};

static TAB_NUM t_lambda_22[] = {
  3, // locals
  0, // parameters
  // i+2 i+5) $rest $code
  var_std__plus, 2, var_37_4_i, num_2, 1, LOCAL(1),
  // i+5) $rest $code
  var_std__plus, 2, var_37_4_i, num_5, 1, LOCAL(2),
  // range(line i+2 i+5) $rest $code
  var_range, 3, var_35_13_line, LOCAL(1), LOCAL(2), 1, LOCAL(3),
  // parse_hex range(line i+2 i+5) $rest $code
  var_parse_hex, 1, LOCAL(3), 2, var_147_68_rest, var_147_74_code,
  // is_defined && rest.is_empty:
  var_is_defined, 1, var_147_74_code, 1, LOCAL(1),
  // is_defined && rest.is_empty:
  var_std__and, 2, LOCAL(1), lambda_23, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_24, func_invalid_special_character, TAIL_CALL,
  POS(147, 58),
  POS(147, 62),
  POS(147, 47),
  POS(147, 37),
  POS(149, 44),
  POS(149, 44),
  POS(148, 37)
};

static TAB_NUM t_lambda_23[] = {
  1, // locals
  0, // parameters
  // is_empty:
  var_is_empty, 1, var_147_68_rest, 1, LOCAL(1),
  // rest.is_empty:
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(149, 63),
  POS(149, 58)
};

static TAB_NUM t_lambda_24[] = {
  1, // locals
  0, // parameters
  // character(code)
  var_character, 1, var_147_74_code, 1, LOCAL(1),
  // push &str character(code)
  var_push, 2, var_101_16_str, LOCAL(1), 1, var_101_16_str,
  // !i i+6
  var_std__plus, 2, var_37_4_i, num_6, 1, var_37_4_i,
  // next
  var_next, 0, TAIL_CALL,
  POS(150, 51),
  POS(150, 41),
  POS(151, 41),
  POS(152, 41)
};

static TAB_NUM t_lambda_v[] = {
  0, // locals
  0, // parameters
  // push &str '@vt;'
  var_push, 2, var_101_16_str, chr_11, 1, var_101_16_str,
  // !i i+2
  var_std__plus, 2, var_37_4_i, num_2, 1, var_37_4_i,
  // next
  var_next, 0, TAIL_CALL,
  POS(157, 33),
  POS(158, 33),
  POS(159, 33)
};

static TAB_NUM t_lambda_25[] = {
  0, // locals
  0, // parameters
  // push &str spec_chr
  var_push, 2, var_101_16_str, var_122_30_spec_chr, 1, var_101_16_str,
  // !i i+2
  var_std__plus, 2, var_37_4_i, num_2, 1, var_37_4_i,
  // next
  var_next, 0, TAIL_CALL,
  POS(161, 33),
  POS(162, 33),
  POS(163, 33)
};

static TAB_NUM t_func_invalid_special_character[] = {
  1, // locals
  0, // parameters
  // range(line i -1)
  var_range, 3, var_35_13_line, var_37_4_i, minus_num_1, 1, LOCAL(1),
  // error PARSE_ERROR
  var_error, 3, var_PARSE_ERROR, str_Invalid_special, LOCAL(1), TAIL_CALL,
  POS(168, 29),
  POS(166, 27)
};

static TAB_NUM t_lambda_26[] = {
  0, // locals
  0, // parameters
  // push &str str_chr
  var_push, 2, var_101_16_str, var_111_22_str_chr, 1, var_101_16_str,
  // !i i+1
  var_std__plus, 2, var_37_4_i, num_1, 1, var_37_4_i,
  // next
  var_next, 0, TAIL_CALL,
  POS(170, 25),
  POS(171, 25),
  POS(172, 25)
};

static TAB_NUM t_func_extract[] = {
  1, // locals
  1, // parameters
  var_183_12_tokens,
  // $token tokens(1)
  var_183_12_tokens, 1, num_1, 1, var_184_4_token,
  // range &tokens 2 -1
  var_range, 3, var_183_12_tokens, num_2, minus_num_1, 1, var_183_12_tokens,
  // is_simple
  var_is_simple, 1, var_184_4_token, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_27, lambda_28, TAIL_CALL,
  POS(184, 3),
  POS(185, 3),
  POS(187, 11),
  POS(186, 3)
};

static TAB_NUM t_lambda_27[] = {
  0, // locals
  0, // parameters
  //  tokens token
  LET, 2, var_183_12_tokens, var_184_4_token, TAIL_CALL,
  POS(188, 7)
};

static TAB_NUM t_lambda_28[] = {
  0, // locals
  0, // parameters
  // case token
  var_case, 6, var_184_4_token, chr_123, func_extract_object, chr_91, func_extract_array, lambda_29, TAIL_CALL,
  POS(190, 7)
};

static TAB_NUM t_lambda_29[] = {
  0, // locals
  0, // parameters
  // error PARSE_ERROR "Unexpected token" tokens
  var_error, 3, var_PARSE_ERROR, str_Unexpected_token, var_183_12_tokens, TAIL_CALL,
  POS(193, 11)
};

static TAB_NUM t_func_extract_object[] = {
  1, // locals
  0, // parameters
  // $attributes empty_insert_order_table
  LET, 1, var_empty_insert_order_table, 1, var_196_6_attributes,
  // is_empty
  var_is_empty, 1, var_183_12_tokens, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), func_missing_closing_brace, lambda_30, TAIL_CALL,
  POS(196, 5),
  POS(198, 14),
  POS(197, 5)
};

static TAB_NUM t_lambda_30[] = {
  2, // locals
  0, // parameters
  // tokens(1) == '}'
  var_183_12_tokens, 1, num_1, 1, LOCAL(1),
  // tokens(1) == '}'
  var_std__equal, 2, LOCAL(1), chr_125, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_31, lambda_32, TAIL_CALL,
  POS(202, 11),
  POS(202, 11),
  POS(201, 9)
};

static TAB_NUM t_lambda_31[] = {
  1, // locals
  0, // parameters
  // range(tokens 2 -1) attributes
  var_range, 3, var_183_12_tokens, num_2, minus_num_1, 1, LOCAL(1),
  //  range(tokens 2 -1) attributes
  LET, 2, LOCAL(1), var_196_6_attributes, TAIL_CALL,
  POS(203, 14),
  POS(203, 13)
};

static TAB_NUM t_lambda_32[] = {
  0, // locals
  0, // parameters
  // loop:
  var_loop, 1, lambda_2_loop, TAIL_CALL,
  POS(205, 13)
};

static TAB_NUM t_lambda_2_loop[] = {
  2, // locals
  0, // parameters
  // length_of(tokens) < 3
  var_length_of, 1, var_183_12_tokens, 1, LOCAL(1),
  // length_of(tokens) < 3
  var_std__less, 2, LOCAL(1), num_3, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), func_invalid_attribute, lambda_33, TAIL_CALL,
  POS(207, 17),
  POS(207, 17),
  POS(206, 15)
};

static TAB_NUM t_lambda_33[] = {
  2, // locals
  0, // parameters
  // $key tokens(1)
  var_183_12_tokens, 1, num_1, 1, var_210_20_key,
  // is_a_string && tokens(2) == ':'
  var_is_a_string, 1, var_210_20_key, 1, LOCAL(1),
  // is_a_string && tokens(2) == ':'
  var_std__and, 2, LOCAL(1), lambda_34, 1, LOCAL(2),
  // if_not
  var_if_not, 3, LOCAL(2), func_invalid_attribute, lambda_35, TAIL_CALL,
  POS(210, 19),
  POS(212, 25),
  POS(212, 25),
  POS(211, 19)
};

static TAB_NUM t_lambda_34[] = {
  2, // locals
  0, // parameters
  // tokens(2) == ':'
  var_183_12_tokens, 1, num_2, 1, LOCAL(1),
  // tokens(2) == ':'
  var_std__equal, 2, LOCAL(1), chr_58, 1, LOCAL(2),
  // tokens(2) == ':'
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(212, 40),
  POS(212, 40),
  POS(212, 40)
};

static TAB_NUM t_lambda_35[] = {
  2, // locals
  0, // parameters
  // range &tokens 3 -1
  var_range, 3, var_183_12_tokens, num_3, minus_num_1, 1, var_183_12_tokens,
  // extract &tokens $value
  func_extract, 1, var_183_12_tokens, 2, var_183_12_tokens, LOCAL(2),
  // attributes(key) value
  var_196_6_attributes, 2, var_210_20_key, LOCAL(2), 1, var_196_6_attributes,
  // is_empty
  var_is_empty, 1, var_183_12_tokens, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), func_missing_closing_brace, lambda_36, TAIL_CALL,
  POS(215, 23),
  POS(216, 23),
  POS(217, 24),
  POS(219, 32),
  POS(218, 23)
};

static TAB_NUM t_lambda_36[] = {
  1, // locals
  0, // parameters
  // tokens(1)
  var_183_12_tokens, 1, num_1, 1, LOCAL(1),
  // case tokens(1)
  var_case, 6, LOCAL(1), chr_44, lambda_37, chr_125, lambda_38, func_missing_closing_brace, TAIL_CALL,
  POS(222, 32),
  POS(222, 27)
};

static TAB_NUM t_lambda_37[] = {
  0, // locals
  0, // parameters
  // range &tokens 2 -1
  var_range, 3, var_183_12_tokens, num_2, minus_num_1, 1, var_183_12_tokens,
  // next
  var_next, 0, TAIL_CALL,
  POS(224, 31),
  POS(225, 31)
};

static TAB_NUM t_lambda_38[] = {
  1, // locals
  0, // parameters
  // range(tokens 2 -1) attributes
  var_range, 3, var_183_12_tokens, num_2, minus_num_1, 1, LOCAL(1),
  //  range(tokens 2 -1) attributes
  LET, 2, LOCAL(1), var_196_6_attributes, TAIL_CALL,
  POS(226, 36),
  POS(226, 35)
};

static TAB_NUM t_func_missing_closing_brace[] = {
  0, // locals
  0, // parameters
  // error PARSE_ERROR "Closing brace expected" tokens
  var_error, 3, var_PARSE_ERROR, str_Closing_brace_ex, var_183_12_tokens, TAIL_CALL,
  POS(230, 7)
};

static TAB_NUM t_func_invalid_attribute[] = {
  0, // locals
  0, // parameters
  // error PARSE_ERROR "Invalid attribute" tokens
  var_error, 3, var_PARSE_ERROR, str_Invalid_attribut, var_183_12_tokens, TAIL_CALL,
  POS(233, 7)
};

static TAB_NUM t_func_extract_array[] = {
  1, // locals
  0, // parameters
  // is_empty
  var_is_empty, 1, var_183_12_tokens, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), func_missing_closing_bracket, lambda_39, TAIL_CALL,
  POS(237, 14),
  POS(236, 5)
};

static TAB_NUM t_lambda_39[] = {
  2, // locals
  0, // parameters
  // $items empty_list
  LET, 1, var_empty_list, 1, var_240_10_items,
  // tokens(1) == ']'
  var_183_12_tokens, 1, num_1, 1, LOCAL(1),
  // tokens(1) == ']'
  var_std__equal, 2, LOCAL(1), chr_93, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_40, lambda_41, TAIL_CALL,
  POS(240, 9),
  POS(242, 11),
  POS(242, 11),
  POS(241, 9)
};

static TAB_NUM t_lambda_40[] = {
  1, // locals
  0, // parameters
  // range(tokens 2 -1) items
  var_range, 3, var_183_12_tokens, num_2, minus_num_1, 1, LOCAL(1),
  //  range(tokens 2 -1) items
  LET, 2, LOCAL(1), var_240_10_items, TAIL_CALL,
  POS(243, 14),
  POS(243, 13)
};

static TAB_NUM t_lambda_41[] = {
  0, // locals
  0, // parameters
  // loop:
  var_loop, 1, lambda_3_loop, TAIL_CALL,
  POS(245, 13)
};

static TAB_NUM t_lambda_3_loop[] = {
  2, // locals
  0, // parameters
  // extract &tokens $item
  func_extract, 1, var_183_12_tokens, 2, var_183_12_tokens, LOCAL(2),
  // push &items item
  var_push, 2, var_240_10_items, LOCAL(2), 1, var_240_10_items,
  // is_empty
  var_is_empty, 1, var_183_12_tokens, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), func_missing_closing_bracket, lambda_42, TAIL_CALL,
  POS(246, 15),
  POS(247, 15),
  POS(249, 24),
  POS(248, 15)
};

static TAB_NUM t_lambda_42[] = {
  1, // locals
  0, // parameters
  // tokens(1)
  var_183_12_tokens, 1, num_1, 1, LOCAL(1),
  // case tokens(1)
  var_case, 6, LOCAL(1), chr_44, lambda_43, chr_93, lambda_44, func_missing_closing_bracket, TAIL_CALL,
  POS(252, 24),
  POS(252, 19)
};

static TAB_NUM t_lambda_43[] = {
  0, // locals
  0, // parameters
  // range &tokens 2 -1
  var_range, 3, var_183_12_tokens, num_2, minus_num_1, 1, var_183_12_tokens,
  // next
  var_next, 0, TAIL_CALL,
  POS(254, 23),
  POS(255, 23)
};

static TAB_NUM t_lambda_44[] = {
  1, // locals
  0, // parameters
  // range(tokens 2 -1) items
  var_range, 3, var_183_12_tokens, num_2, minus_num_1, 1, LOCAL(1),
  //  range(tokens 2 -1) items
  LET, 2, LOCAL(1), var_240_10_items, TAIL_CALL,
  POS(256, 28),
  POS(256, 27)
};

static TAB_NUM t_func_missing_closing_bracket[] = {
  0, // locals
  0, // parameters
  // error PARSE_ERROR "Closing bracket expected" tokens
  var_error, 3, var_PARSE_ERROR, str_Closing_bracket, var_183_12_tokens, TAIL_CALL,
  POS(260, 7)
};

static int value_range_52_21_arguments[] = {
  -chr_48, -chr_57
};

static int sequence_52_16_arguments[] = {
  -chr_45, -value_range_52_21
};

static int sequence_53_16_arguments[] = {
  -chr_44, -chr_58, -chr_123, -chr_125, -chr_91, -chr_93
};

static FUNKY_CONSTANT constants_table[] = {
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__from_json}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2}},
  {FLT_STRING_8, 30, {.str_8 = "text contains multiple objects"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_tokenize}},
  {FLT_POSITIVE_INT64, 0, {.value = 1}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_3}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_4}},
  {FLT_CHARACTER, 0, {.value = 32}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_5}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_6}},
  {FLT_CHARACTER, 0, {.value = 48}},
  {FLT_CHARACTER, 0, {.value = 57}},
  {FLT_VALUE_RANGE, 2, {.arguments = value_range_52_21_arguments}},
  {FLT_CHARACTER, 0, {.value = 45}},
  {FLT_SEQUENCE, 2, {.arguments = sequence_52_16_arguments}},
  {FLT_CHARACTER, 0, {.value = 44}},
  {FLT_CHARACTER, 0, {.value = 58}},
  {FLT_CHARACTER, 0, {.value = 123}},
  {FLT_CHARACTER, 0, {.value = 125}},
  {FLT_CHARACTER, 0, {.value = 91}},
  {FLT_CHARACTER, 0, {.value = 93}},
  {FLT_SEQUENCE, 6, {.arguments = sequence_53_16_arguments}},
  {FLT_CHARACTER, 0, {.value = 34}},
  {FLT_CHARACTER, 0, {.value = 116}},
  {FLT_CHARACTER, 0, {.value = 102}},
  {FLT_CHARACTER, 0, {.value = 110}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_7}},
  {FLT_NEGATIVE_INT64, 0, {.value = 1}},
  {FLT_STRING_8, 16, {.str_8 = "unexpected input"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_handle_simple_token}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_handle_true}},
  {FLT_POSITIVE_INT64, 0, {.value = 3}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_8}},
  {FLT_STRING_8, 3, {.str_8 = "rue"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_9}},
  {FLT_POSITIVE_INT64, 0, {.value = 4}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_10}},
  {FLT_STRING_8, 18, {.str_8 = "invalid identifier"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_handle_false}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_11}},
  {FLT_STRING_8, 4, {.str_8 = "alse"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_12}},
  {FLT_POSITIVE_INT64, 0, {.value = 5}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_13}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_handle_null}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_14}},
  {FLT_STRING_8, 3, {.str_8 = "ull"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_15}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_16}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_handle_number}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_value_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_17}},
  {FLT_STRING_8, 23, {.str_8 = "invalid numeric literal"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_handle_string}},
  {FLT_STRING_8, 0, {.str_8 = ""}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_handle_string_character}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_18}},
  {FLT_STRING_8, 39, {.str_8 = "Missing closing quote in string literal"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_19}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_quot}},
  {FLT_CHARACTER, 0, {.value = 92}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_20}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_21}},
  {FLT_CHARACTER, 0, {.value = 98}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_b}},
  {FLT_CHARACTER, 0, {.value = 8}},
  {FLT_POSITIVE_INT64, 0, {.value = 2}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_f}},
  {FLT_CHARACTER, 0, {.value = 12}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_n}},
  {FLT_CHARACTER, 0, {.value = 10}},
  {FLT_CHARACTER, 0, {.value = 114}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_r}},
  {FLT_CHARACTER, 0, {.value = 13}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_t}},
  {FLT_CHARACTER, 0, {.value = 9}},
  {FLT_CHARACTER, 0, {.value = 117}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_u}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_22}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_23}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_24}},
  {FLT_POSITIVE_INT64, 0, {.value = 6}},
  {FLT_CHARACTER, 0, {.value = 118}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_v}},
  {FLT_CHARACTER, 0, {.value = 11}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_25}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_invalid_special_character}},
  {FLT_STRING_8, 43, {.str_8 = "Invalid special character in string literal"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_26}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_extract}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_27}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_28}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_29}},
  {FLT_STRING_8, 16, {.str_8 = "Unexpected token"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_extract_object}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_30}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_31}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_32}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_33}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_34}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_35}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_36}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_37}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_38}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_missing_closing_brace}},
  {FLT_STRING_8, 22, {.str_8 = "Closing brace expected"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_invalid_attribute}},
  {FLT_STRING_8, 17, {.str_8 = "Invalid attribute"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_extract_array}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_39}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_40}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_41}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_3_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_42}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_43}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_44}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_missing_closing_bracket}},
  {FLT_STRING_8, 24, {.str_8 = "Closing bracket expected"}}
};

static ATTRIBUTE_DEFINITION std_types__object__attributes[] = {
  {-var_is_simple, -var_false}
};

static ATTRIBUTE_DEFINITION std_types__number__attributes[] = {
  {-var_is_simple, -var_true}
};

static ATTRIBUTE_DEFINITION std_types__string__attributes[] = {
  {-var_is_simple, -var_true}
};

static ATTRIBUTE_DEFINITION std_types__true__attributes[] = {
  {-var_is_simple, -var_true}
};

static ATTRIBUTE_DEFINITION std_types__false__attributes[] = {
  {-var_is_simple, -var_true}
};

static ATTRIBUTE_DEFINITION std_types__undefined__attributes[] = {
  {-var_is_simple, -var_true}
};

static FUNKY_VARIABLE variables_table[] = {
  {
    FOT_INITIALIZED, 0, 0,
    "from_json\000std", NULL,
    {.const_idx = -func_std__from_json}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "split_into_lines\000", NULL,
    {.position = POS(27, 10)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "28_4_tokens\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "map_reduce\000", NULL,
    {.position = POS(28, 11)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "29_20_obj\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_empty\000", NULL,
    {.position = POS(31, 12)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "assign\000std", NULL,
    {.position = POS(32, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "PARSE_ERROR\000", NULL,
    {.position = POS(33, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "error\000", NULL,
    {.position = POS(33, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if\000", NULL,
    {.position = POS(30, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "35_13_line\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "36_4_tokens\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_list\000", NULL,
    {.position = POS(36, 11)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "37_4_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "38_4_n\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "length_of\000", NULL,
    {.position = POS(38, 6)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "less\000std", NULL,
    {.position = POS(41, 11)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "44_10_chr\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not\000std", NULL,
    {.position = POS(46, 19)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000std", NULL,
    {.position = POS(47, 16)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "next\000", NULL,
    {.position = POS(48, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "value_range\000std", NULL,
    {.position = POS(52, 21)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "sequence\000std", NULL,
    {.position = POS(52, 16)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "range\000", NULL,
    {.position = POS(57, 54)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "case\000", NULL,
    {.position = POS(50, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "push\000", NULL,
    {.position = POS(60, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "equal\000std", NULL,
    {.position = POS(66, 29)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "and\000std", NULL,
    {.position = POS(66, 24)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "true\000", NULL,
    {.position = POS(68, 32)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "false\000", NULL,
    {.position = POS(76, 32)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "undefined\000", NULL,
    {.position = POS(84, 32)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "89_16_number\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "90_37_value\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "parse_number\000", NULL,
    {.position = POS(90, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_defined\000", NULL,
    {.position = POS(92, 23)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "minus\000std", NULL,
    {.position = POS(93, 22)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "99_16_s\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "101_16_str\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "loop\000", NULL,
    {.position = POS(102, 15)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "111_22_str_chr\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "break\000", NULL,
    {.position = POS(116, 25)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "122_30_spec_chr\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "147_68_rest\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "147_74_code\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "parse_hex\000", NULL,
    {.position = POS(147, 37)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "character\000", NULL,
    {.position = POS(150, 51)}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "is_simple\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "object\000std_types", std_types__object__attributes,
    {.position = POS(176, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "number\000std_types", std_types__number__attributes,
    {.position = POS(177, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "string\000std_types", std_types__string__attributes,
    {.position = POS(178, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "true\000std_types", std_types__true__attributes,
    {.position = POS(179, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "false\000std_types", std_types__false__attributes,
    {.position = POS(180, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "undefined\000std_types", std_types__undefined__attributes,
    {.position = POS(181, 1)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "183_12_tokens\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "184_4_token\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "196_6_attributes\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_insert_order_table\000", NULL,
    {.position = POS(196, 17)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "210_20_key\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_a_string\000", NULL,
    {.position = POS(212, 25)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if_not\000", NULL,
    {.position = POS(211, 19)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "240_10_items\000", NULL
  }
};

static FUNKY_NAMESPACE used_namespaces[] = {
  {"std", 1, 0}
};

FUNKY_MODULE module__basic__import__json = {
  "_basic__import__json", // module name
  "basic/import/json.fky", // module filename
  .major_version = 0,
  .minor_version = 0,
  .feature_flags = FEAT_POSITIONS,
  .marker = 0,
  0, // number of required modules
  0, // number of defined namespaces
  1, // number of used namespaces
  121, // number of constants
  61, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  constants_table,
  variables_table,
};
