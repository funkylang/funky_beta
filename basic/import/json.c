#include <stddef.h>
#include <stdint.h>

#include "runtime/common.h"
#include "runtime/builtins.h"
#include "runtime/fko.h"
#include "runtime/memory.h"

enum {
  uni_std__PARSE_ERROR = -1,
  func_std__from_json = -2,
  lambda_1 = -3,
  lambda_2 = -4,
  str_text_contains_mu = -5,
  func_tokenize = -6,
  num_1 = -7,
  lambda_loop = -8,
  lambda_3 = -9,
  lambda_4 = -10,
  chr_32 = -11,
  lambda_5 = -12,
  lambda_6 = -13,
  chr_48 = -14,
  chr_57 = -15,
  value_range_51_1 = -16,
  chr_91 = -17,
  chr_93 = -18,
  sequence_52_21 = -19,
  chr_125 = -20,
  sequence_52_16 = -21,
  chr_123 = -22,
  sequence_52_11 = -23,
  chr_58 = -24,
  sequence_52_6 = -25,
  chr_44 = -26,
  sequence_52_1 = -27,
  chr_34 = -28,
  chr_116 = -29,
  chr_102 = -30,
  chr_110 = -31,
  lambda_7 = -32,
  minus_num_1 = -33,
  str_unexpected_input = -34,
  func_handle_simple_token = -35,
  func_handle_true = -36,
  num_3 = -37,
  lambda_8 = -38,
  str_rue = -39,
  lambda_9 = -40,
  num_4 = -41,
  lambda_10 = -42,
  str_invalid_identifi = -43,
  func_handle_false = -44,
  lambda_11 = -45,
  str_alse = -46,
  lambda_12 = -47,
  num_5 = -48,
  lambda_13 = -49,
  func_handle_null = -50,
  lambda_14 = -51,
  str_ull = -52,
  lambda_15 = -53,
  lambda_16 = -54,
  func_handle_number = -55,
  lambda_value_is_defined = -56,
  lambda_17 = -57,
  str_invalid_numeric = -58,
  func_handle_string = -59,
  string_1 = -60,
  func_handle_string_character = -61,
  lambda_18 = -62,
  str_Missing_closing = -63,
  lambda_19 = -64,
  lambda_quot = -65,
  chr_92 = -66,
  lambda_20 = -67,
  lambda_21 = -68,
  chr_98 = -69,
  lambda_b = -70,
  chr_8 = -71,
  num_2 = -72,
  lambda_f = -73,
  chr_12 = -74,
  lambda_n = -75,
  chr_10 = -76,
  chr_114 = -77,
  lambda_r = -78,
  chr_13 = -79,
  lambda_t = -80,
  chr_9 = -81,
  chr_117 = -82,
  lambda_u = -83,
  lambda_22 = -84,
  lambda_code_is_defined = -85,
  num_6 = -86,
  chr_118 = -87,
  lambda_v = -88,
  chr_11 = -89,
  lambda_23 = -90,
  func_invalid_special_character = -91,
  str_Invalid_special = -92,
  lambda_24 = -93,
  func_extract = -94,
  lambda_25 = -95,
  lambda_26 = -96,
  lambda_27 = -97,
  str_Unexpected_token = -98,
  func_extract_object = -99,
  lambda_28 = -100,
  lambda_29 = -101,
  lambda_30 = -102,
  lambda_2_loop = -103,
  lambda_31 = -104,
  lambda_32 = -105,
  lambda_33 = -106,
  lambda_34 = -107,
  lambda_35 = -108,
  lambda_36 = -109,
  func_missing_closing_brace = -110,
  str_Closing_brace_ex = -111,
  func_invalid_attribute = -112,
  str_Invalid_attribut = -113,
  func_extract_array = -114,
  lambda_37 = -115,
  lambda_38 = -116,
  lambda_39 = -117,
  lambda_3_loop = -118,
  lambda_40 = -119,
  lambda_41 = -120,
  lambda_42 = -121,
  func_missing_closing_bracket = -122,
  str_Closing_bracket = -123
};

enum {
  var__START = FIRST_VAR-1,
  var_std__PARSE_ERROR, // initialized
  var_std__assign, // extern
  var_std__from_json, // initialized
  var_split_into_lines, // extern
  var_27_1_tokens, // dynamic
  var_map_reduce, // extern
  var_28_17_obj, // dynamic
  var_is_empty, // extern
  var_PARSE_ERROR, // extern
  var_error, // extern
  var_if, // extern
  var_34_12_line, // dynamic
  var_35_1_tokens, // dynamic
  var_empty_list, // extern
  var_36_1_i, // dynamic
  var_37_1_n, // dynamic
  var_length_of, // extern
  var_std__less, // extern
  var_43_1_chr, // dynamic
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
  var_88_1_number, // dynamic
  var_89_22_value, // dynamic
  var_parse_number, // extern
  var_is_defined, // extern
  var_std__minus, // extern
  var_98_1_s, // dynamic
  var_100_1_str, // dynamic
  var_loop, // extern
  var_110_1_str_chr, // dynamic
  var_break, // extern
  var_121_1_spec_chr, // dynamic
  var_146_1_code, // dynamic
  var_to_integer, // extern
  var_character, // extern
  var_is_simple, // attribute
  var_std_types__object, // extern
  var_std_types__number, // extern
  var_std_types__string, // extern
  var_std_types__true, // extern
  var_std_types__false, // extern
  var_std_types__undefined, // extern
  var_182_11_tokens, // dynamic
  var_183_1_token, // dynamic
  var_195_1_attributes, // dynamic
  var_empty_insert_order_table, // extern
  var_209_1_key, // dynamic
  var_is_a_string, // extern
  var_if_not, // extern
  var_239_1_items, // dynamic
  var__END
};


static TAB_NUM t_func_std__from_json[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 25_18_text
  // $lines split_into_lines(text)
  var_split_into_lines, 1, LOCAL(2), 1, LOCAL(3),
  // $tokens map_reduce(lines tokenize)
  var_map_reduce, 2, LOCAL(3), func_tokenize, 1, var_27_1_tokens,
  // extract &tokens $obj
  func_extract, 1, var_27_1_tokens, 2, var_27_1_tokens, var_28_17_obj,
  // is_empty
  var_is_empty, 1, var_27_1_tokens, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1, lambda_2, TAIL_CALL,
  POS(26, 3),
  POS(27, 3),
  POS(28, 3),
  POS(30, 12),
  POS(29, 3)
};

static TAB_NUM t_lambda_1[] = {
  0, // locals
  0, // parameters
  //  obj
  LET, 1, var_28_17_obj, TAIL_CALL,
  POS(31, 7)
};

static TAB_NUM t_lambda_2[] = {
  0, // locals
  0, // parameters
  // error PARSE_ERROR "text contains multiple objects" tokens
  var_error, 3, var_PARSE_ERROR, str_text_contains_mu, var_27_1_tokens, TAIL_CALL,
  POS(32, 7)
};

static TAB_NUM t_func_tokenize[] = {
  0, // locals
  1, // parameters
  var_34_12_line,
  // $tokens empty_list
  LET, 1, var_empty_list, 1, var_35_1_tokens,
  // $i 1
  LET, 1, num_1, 1, var_36_1_i,
  // $n length_of(line)
  var_length_of, 1, var_34_12_line, 1, var_37_1_n,
  // loop:
  var_loop, 1, lambda_loop, TAIL_CALL,
  POS(35, 3),
  POS(36, 3),
  POS(37, 3),
  POS(38, 3)
};

static TAB_NUM t_lambda_loop[] = {
  1, // locals
  0, // parameters
  // n
  var_std__less, 2, var_37_1_n, var_36_1_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_3, lambda_4, TAIL_CALL,
  POS(40, 11),
  POS(39, 5)
};

static TAB_NUM t_lambda_3[] = {
  0, // locals
  0, // parameters
  //  tokens
  LET, 1, var_35_1_tokens, TAIL_CALL,
  POS(41, 9)
};

static TAB_NUM t_lambda_4[] = {
  2, // locals
  0, // parameters
  // $chr line(i)
  var_34_12_line, 1, var_36_1_i, 1, var_43_1_chr,
  //  ':
  var_std__less, 2, chr_32, var_43_1_chr, 1, LOCAL(1),
  //  ':
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_5, lambda_6, TAIL_CALL,
  POS(43, 9),
  POS(45, 19),
  POS(45, 19),
  POS(44, 9)
};

static TAB_NUM t_lambda_5[] = {
  0, // locals
  0, // parameters
  // !i i+1
  var_std__plus, 2, var_36_1_i, num_1, 1, var_36_1_i,
  // next
  var_next, 0, TAIL_CALL,
  POS(46, 13),
  POS(47, 13)
};

static TAB_NUM t_lambda_6[] = {
  0, // locals
  0, // parameters
  // case chr
  var_case, 14, var_43_1_chr, chr_34, func_handle_string, value_range_51_1, func_handle_number, sequence_52_1, func_handle_simple_token, chr_116, func_handle_true, chr_102, func_handle_false, chr_110, func_handle_null, lambda_7, TAIL_CALL,
  POS(49, 13)
};

static TAB_NUM t_lambda_7[] = {
  1, // locals
  0, // parameters
  // range(line i -1)
  var_range, 3, var_34_12_line, var_36_1_i, minus_num_1, 1, LOCAL(1),
  // error PARSE_ERROR "unexpected input" range(line i -1)
  var_error, 3, var_PARSE_ERROR, str_unexpected_input, LOCAL(1), TAIL_CALL,
  POS(56, 54),
  POS(56, 17)
};

static TAB_NUM t_func_handle_simple_token[] = {
  0, // locals
  0, // parameters
  // push &tokens chr
  var_push, 2, var_35_1_tokens, var_43_1_chr, 1, var_35_1_tokens,
  // !i i+1
  var_std__plus, 2, var_36_1_i, num_1, 1, var_36_1_i,
  // next
  var_next, 0, TAIL_CALL,
  POS(59, 15),
  POS(60, 15),
  POS(61, 15)
};

static TAB_NUM t_func_handle_true[] = {
  4, // locals
  0, // parameters
  // i+3 <= n && range(line i+1 i+3) == "rue":
  var_std__plus, 2, var_36_1_i, num_3, 1, LOCAL(1),
  // n && range(line i+1 i+3) == "rue":
  var_std__less, 2, var_37_1_n, LOCAL(1), 1, LOCAL(2),
  // n && range(line i+1 i+3) == "rue":
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // n && range(line i+1 i+3) == "rue":
  var_std__and, 2, LOCAL(3), lambda_8, 1, LOCAL(4),
  // if
  var_if, 3, LOCAL(4), lambda_9, lambda_10, TAIL_CALL,
  POS(65, 17),
  POS(65, 24),
  POS(65, 24),
  POS(65, 24),
  POS(64, 15)
};

static TAB_NUM t_lambda_8[] = {
  4, // locals
  0, // parameters
  // i+1 i+3) == "rue":
  var_std__plus, 2, var_36_1_i, num_1, 1, LOCAL(1),
  // i+3) == "rue":
  var_std__plus, 2, var_36_1_i, num_3, 1, LOCAL(2),
  // range(line i+1 i+3) == "rue":
  var_range, 3, var_34_12_line, LOCAL(1), LOCAL(2), 1, LOCAL(3),
  // range(line i+1 i+3) == "rue":
  var_std__equal, 2, LOCAL(3), str_rue, 1, LOCAL(4),
  // range(line i+1 i+3) == "rue":
  LET, 1, LOCAL(4), TAIL_CALL,
  POS(65, 40),
  POS(65, 44),
  POS(65, 29),
  POS(65, 29),
  POS(65, 29)
};

static TAB_NUM t_lambda_9[] = {
  0, // locals
  0, // parameters
  // !i i+4
  var_std__plus, 2, var_36_1_i, num_4, 1, var_36_1_i,
  // push &tokens true
  var_push, 2, var_35_1_tokens, var_true, 1, var_35_1_tokens,
  // next
  var_next, 0, TAIL_CALL,
  POS(66, 19),
  POS(67, 19),
  POS(68, 19)
};

static TAB_NUM t_lambda_10[] = {
  1, // locals
  0, // parameters
  // range(line i -1)
  var_range, 3, var_34_12_line, var_36_1_i, minus_num_1, 1, LOCAL(1),
  // error PARSE_ERROR "invalid identifier" range(line i -1)
  var_error, 3, var_PARSE_ERROR, str_invalid_identifi, LOCAL(1), TAIL_CALL,
  POS(69, 58),
  POS(69, 19)
};

static TAB_NUM t_func_handle_false[] = {
  4, // locals
  0, // parameters
  // i+4 <= n && range(line i+1 i+4) == "alse":
  var_std__plus, 2, var_36_1_i, num_4, 1, LOCAL(1),
  // n && range(line i+1 i+4) == "alse":
  var_std__less, 2, var_37_1_n, LOCAL(1), 1, LOCAL(2),
  // n && range(line i+1 i+4) == "alse":
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // n && range(line i+1 i+4) == "alse":
  var_std__and, 2, LOCAL(3), lambda_11, 1, LOCAL(4),
  // if
  var_if, 3, LOCAL(4), lambda_12, lambda_13, TAIL_CALL,
  POS(73, 17),
  POS(73, 24),
  POS(73, 24),
  POS(73, 24),
  POS(72, 15)
};

static TAB_NUM t_lambda_11[] = {
  4, // locals
  0, // parameters
  // i+1 i+4) == "alse":
  var_std__plus, 2, var_36_1_i, num_1, 1, LOCAL(1),
  // i+4) == "alse":
  var_std__plus, 2, var_36_1_i, num_4, 1, LOCAL(2),
  // range(line i+1 i+4) == "alse":
  var_range, 3, var_34_12_line, LOCAL(1), LOCAL(2), 1, LOCAL(3),
  // range(line i+1 i+4) == "alse":
  var_std__equal, 2, LOCAL(3), str_alse, 1, LOCAL(4),
  // range(line i+1 i+4) == "alse":
  LET, 1, LOCAL(4), TAIL_CALL,
  POS(73, 40),
  POS(73, 44),
  POS(73, 29),
  POS(73, 29),
  POS(73, 29)
};

static TAB_NUM t_lambda_12[] = {
  0, // locals
  0, // parameters
  // !i i+5
  var_std__plus, 2, var_36_1_i, num_5, 1, var_36_1_i,
  // push &tokens false
  var_push, 2, var_35_1_tokens, var_false, 1, var_35_1_tokens,
  // next
  var_next, 0, TAIL_CALL,
  POS(74, 19),
  POS(75, 19),
  POS(76, 19)
};

static TAB_NUM t_lambda_13[] = {
  1, // locals
  0, // parameters
  // range(line i -1)
  var_range, 3, var_34_12_line, var_36_1_i, minus_num_1, 1, LOCAL(1),
  // error PARSE_ERROR "invalid identifier" range(line i -1)
  var_error, 3, var_PARSE_ERROR, str_invalid_identifi, LOCAL(1), TAIL_CALL,
  POS(77, 58),
  POS(77, 19)
};

static TAB_NUM t_func_handle_null[] = {
  4, // locals
  0, // parameters
  // i+3 <= n && range(line i+1 i+3) == "ull":
  var_std__plus, 2, var_36_1_i, num_3, 1, LOCAL(1),
  // n && range(line i+1 i+3) == "ull":
  var_std__less, 2, var_37_1_n, LOCAL(1), 1, LOCAL(2),
  // n && range(line i+1 i+3) == "ull":
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // n && range(line i+1 i+3) == "ull":
  var_std__and, 2, LOCAL(3), lambda_14, 1, LOCAL(4),
  // if
  var_if, 3, LOCAL(4), lambda_15, lambda_16, TAIL_CALL,
  POS(81, 17),
  POS(81, 24),
  POS(81, 24),
  POS(81, 24),
  POS(80, 15)
};

static TAB_NUM t_lambda_14[] = {
  4, // locals
  0, // parameters
  // i+1 i+3) == "ull":
  var_std__plus, 2, var_36_1_i, num_1, 1, LOCAL(1),
  // i+3) == "ull":
  var_std__plus, 2, var_36_1_i, num_3, 1, LOCAL(2),
  // range(line i+1 i+3) == "ull":
  var_range, 3, var_34_12_line, LOCAL(1), LOCAL(2), 1, LOCAL(3),
  // range(line i+1 i+3) == "ull":
  var_std__equal, 2, LOCAL(3), str_ull, 1, LOCAL(4),
  // range(line i+1 i+3) == "ull":
  LET, 1, LOCAL(4), TAIL_CALL,
  POS(81, 40),
  POS(81, 44),
  POS(81, 29),
  POS(81, 29),
  POS(81, 29)
};

static TAB_NUM t_lambda_15[] = {
  0, // locals
  0, // parameters
  // !i i+4
  var_std__plus, 2, var_36_1_i, num_4, 1, var_36_1_i,
  // push &tokens undefined
  var_push, 2, var_35_1_tokens, var_undefined, 1, var_35_1_tokens,
  // next
  var_next, 0, TAIL_CALL,
  POS(82, 19),
  POS(83, 19),
  POS(84, 19)
};

static TAB_NUM t_lambda_16[] = {
  1, // locals
  0, // parameters
  // range(line i -1)
  var_range, 3, var_34_12_line, var_36_1_i, minus_num_1, 1, LOCAL(1),
  // error PARSE_ERROR "invalid identifier" range(line i -1)
  var_error, 3, var_PARSE_ERROR, str_invalid_identifi, LOCAL(1), TAIL_CALL,
  POS(85, 58),
  POS(85, 19)
};

static TAB_NUM t_func_handle_number[] = {
  1, // locals
  0, // parameters
  // $number range(line i -1)
  var_range, 3, var_34_12_line, var_36_1_i, minus_num_1, 1, var_88_1_number,
  // parse_number &number $value
  var_parse_number, 1, var_88_1_number, 2, var_88_1_number, var_89_22_value,
  // is_defined:
  var_is_defined, 1, var_89_22_value, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_value_is_defined, lambda_17, TAIL_CALL,
  POS(88, 15),
  POS(89, 15),
  POS(91, 23),
  POS(90, 15)
};

static TAB_NUM t_lambda_value_is_defined[] = {
  2, // locals
  0, // parameters
  // n+1-length_of(number)
  var_std__plus, 2, var_37_1_n, num_1, 1, LOCAL(1),
  // length_of(number)
  var_length_of, 1, var_88_1_number, 1, LOCAL(2),
  // !i n+1-length_of(number)
  var_std__minus, 2, LOCAL(1), LOCAL(2), 1, var_36_1_i,
  // push &tokens value
  var_push, 2, var_35_1_tokens, var_89_22_value, 1, var_35_1_tokens,
  // next
  var_next, 0, TAIL_CALL,
  POS(92, 22),
  POS(92, 26),
  POS(92, 19),
  POS(93, 19),
  POS(94, 19)
};

static TAB_NUM t_lambda_17[] = {
  0, // locals
  0, // parameters
  // error PARSE_ERROR "invalid numeric literal" number
  var_error, 3, var_PARSE_ERROR, str_invalid_numeric, var_88_1_number, TAIL_CALL,
  POS(95, 19)
};

static TAB_NUM t_func_handle_string[] = {
  0, // locals
  0, // parameters
  // $s i
  LET, 1, var_36_1_i, 1, var_98_1_s,
  // !i i+1
  var_std__plus, 2, var_36_1_i, num_1, 1, var_36_1_i,
  // $str ""
  LET, 1, string_1, 1, var_100_1_str,
  // loop handle_string_character next
  var_loop, 2, func_handle_string_character, var_next, TAIL_CALL,
  POS(98, 15),
  POS(99, 15),
  POS(100, 15),
  POS(101, 15)
};

static TAB_NUM t_func_handle_string_character[] = {
  1, // locals
  0, // parameters
  // n:
  var_std__less, 2, var_37_1_n, var_36_1_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_18, lambda_19, TAIL_CALL,
  POS(105, 23),
  POS(104, 17)
};

static TAB_NUM t_lambda_18[] = {
  1, // locals
  0, // parameters
  // range(line s -1)
  var_range, 3, var_34_12_line, var_98_1_s, minus_num_1, 1, LOCAL(1),
  // error PARSE_ERROR
  var_error, 3, var_PARSE_ERROR, str_Missing_closing, LOCAL(1), TAIL_CALL,
  POS(108, 23),
  POS(106, 21)
};

static TAB_NUM t_lambda_19[] = {
  0, // locals
  0, // parameters
  // $str_chr line(i)
  var_34_12_line, 1, var_36_1_i, 1, var_110_1_str_chr,
  // case str_chr
  var_case, 6, var_110_1_str_chr, chr_34, lambda_quot, chr_92, lambda_20, lambda_24, TAIL_CALL,
  POS(110, 21),
  POS(111, 21)
};

static TAB_NUM t_lambda_quot[] = {
  0, // locals
  0, // parameters
  // !i i+1
  var_std__plus, 2, var_36_1_i, num_1, 1, var_36_1_i,
  // push &tokens str
  var_push, 2, var_35_1_tokens, var_100_1_str, 1, var_35_1_tokens,
  // break
  var_break, 0, TAIL_CALL,
  POS(113, 25),
  POS(114, 25),
  POS(115, 25)
};

static TAB_NUM t_lambda_20[] = {
  2, // locals
  0, // parameters
  // i+1 > n
  var_std__plus, 2, var_36_1_i, num_1, 1, LOCAL(1),
  // n
  var_std__less, 2, var_37_1_n, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), func_invalid_special_character, lambda_21, TAIL_CALL,
  POS(118, 27),
  POS(118, 33),
  POS(117, 25)
};

static TAB_NUM t_lambda_21[] = {
  1, // locals
  0, // parameters
  // i+1)
  var_std__plus, 2, var_36_1_i, num_1, 1, LOCAL(1),
  // $spec_chr line(i+1)
  var_34_12_line, 1, LOCAL(1), 1, var_121_1_spec_chr,
  // case spec_chr
  var_case, 16, var_121_1_spec_chr, chr_98, lambda_b, chr_102, lambda_f, chr_110, lambda_n, chr_114, lambda_r, chr_116, lambda_t, chr_117, lambda_u, chr_118, lambda_v, lambda_23, TAIL_CALL,
  POS(121, 44),
  POS(121, 29),
  POS(122, 29)
};

static TAB_NUM t_lambda_b[] = {
  0, // locals
  0, // parameters
  // push &str '@bs;'
  var_push, 2, var_100_1_str, chr_8, 1, var_100_1_str,
  // !i i+2
  var_std__plus, 2, var_36_1_i, num_2, 1, var_36_1_i,
  // next
  var_next, 0, TAIL_CALL,
  POS(124, 33),
  POS(125, 33),
  POS(126, 33)
};

static TAB_NUM t_lambda_f[] = {
  0, // locals
  0, // parameters
  // push &str '@ff;'
  var_push, 2, var_100_1_str, chr_12, 1, var_100_1_str,
  // !i i+2
  var_std__plus, 2, var_36_1_i, num_2, 1, var_36_1_i,
  // next
  var_next, 0, TAIL_CALL,
  POS(128, 33),
  POS(129, 33),
  POS(130, 33)
};

static TAB_NUM t_lambda_n[] = {
  0, // locals
  0, // parameters
  // push &str '@nl;'
  var_push, 2, var_100_1_str, chr_10, 1, var_100_1_str,
  // !i i+2
  var_std__plus, 2, var_36_1_i, num_2, 1, var_36_1_i,
  // next
  var_next, 0, TAIL_CALL,
  POS(132, 33),
  POS(133, 33),
  POS(134, 33)
};

static TAB_NUM t_lambda_r[] = {
  0, // locals
  0, // parameters
  // push &str '@cr;'
  var_push, 2, var_100_1_str, chr_13, 1, var_100_1_str,
  // !i i+2
  var_std__plus, 2, var_36_1_i, num_2, 1, var_36_1_i,
  // next
  var_next, 0, TAIL_CALL,
  POS(136, 33),
  POS(137, 33),
  POS(138, 33)
};

static TAB_NUM t_lambda_t[] = {
  0, // locals
  0, // parameters
  // push &str '@ht;'
  var_push, 2, var_100_1_str, chr_9, 1, var_100_1_str,
  // !i i+2
  var_std__plus, 2, var_36_1_i, num_2, 1, var_36_1_i,
  // next
  var_next, 0, TAIL_CALL,
  POS(140, 33),
  POS(141, 33),
  POS(142, 33)
};

static TAB_NUM t_lambda_u[] = {
  3, // locals
  0, // parameters
  // i+5 <= n:
  var_std__plus, 2, var_36_1_i, num_5, 1, LOCAL(1),
  // n:
  var_std__less, 2, var_37_1_n, LOCAL(1), 1, LOCAL(2),
  // n:
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_22, func_invalid_special_character, TAIL_CALL,
  POS(145, 35),
  POS(145, 42),
  POS(145, 42),
  POS(144, 33)
};

static TAB_NUM t_lambda_22[] = {
  3, // locals
  0, // parameters
  // i+2 i+5).to_integer
  var_std__plus, 2, var_36_1_i, num_2, 1, LOCAL(1),
  // i+5).to_integer
  var_std__plus, 2, var_36_1_i, num_5, 1, LOCAL(2),
  // range(line i+2 i+5).to_integer
  var_range, 3, var_34_12_line, LOCAL(1), LOCAL(2), 1, LOCAL(3),
  // $code range(line i+2 i+5).to_integer
  var_to_integer, 1, LOCAL(3), 1, var_146_1_code,
  // is_defined:
  var_is_defined, 1, var_146_1_code, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_code_is_defined, func_invalid_special_character, TAIL_CALL,
  POS(146, 54),
  POS(146, 58),
  POS(146, 43),
  POS(146, 37),
  POS(148, 44),
  POS(147, 37)
};

static TAB_NUM t_lambda_code_is_defined[] = {
  1, // locals
  0, // parameters
  // character(code)
  var_character, 1, var_146_1_code, 1, LOCAL(1),
  // push &str character(code)
  var_push, 2, var_100_1_str, LOCAL(1), 1, var_100_1_str,
  // !i i+6
  var_std__plus, 2, var_36_1_i, num_6, 1, var_36_1_i,
  // next
  var_next, 0, TAIL_CALL,
  POS(149, 51),
  POS(149, 41),
  POS(150, 41),
  POS(151, 41)
};

static TAB_NUM t_lambda_v[] = {
  0, // locals
  0, // parameters
  // push &str '@vt;'
  var_push, 2, var_100_1_str, chr_11, 1, var_100_1_str,
  // !i i+2
  var_std__plus, 2, var_36_1_i, num_2, 1, var_36_1_i,
  // next
  var_next, 0, TAIL_CALL,
  POS(156, 33),
  POS(157, 33),
  POS(158, 33)
};

static TAB_NUM t_lambda_23[] = {
  0, // locals
  0, // parameters
  // push &str spec_chr
  var_push, 2, var_100_1_str, var_121_1_spec_chr, 1, var_100_1_str,
  // !i i+2
  var_std__plus, 2, var_36_1_i, num_2, 1, var_36_1_i,
  // next
  var_next, 0, TAIL_CALL,
  POS(160, 33),
  POS(161, 33),
  POS(162, 33)
};

static TAB_NUM t_func_invalid_special_character[] = {
  1, // locals
  0, // parameters
  // range(line i -1)
  var_range, 3, var_34_12_line, var_36_1_i, minus_num_1, 1, LOCAL(1),
  // error PARSE_ERROR
  var_error, 3, var_PARSE_ERROR, str_Invalid_special, LOCAL(1), TAIL_CALL,
  POS(167, 29),
  POS(165, 27)
};

static TAB_NUM t_lambda_24[] = {
  0, // locals
  0, // parameters
  // push &str str_chr
  var_push, 2, var_100_1_str, var_110_1_str_chr, 1, var_100_1_str,
  // !i i+1
  var_std__plus, 2, var_36_1_i, num_1, 1, var_36_1_i,
  // next
  var_next, 0, TAIL_CALL,
  POS(169, 25),
  POS(170, 25),
  POS(171, 25)
};

static TAB_NUM t_func_extract[] = {
  1, // locals
  1, // parameters
  var_182_11_tokens,
  // $token tokens(1)
  var_182_11_tokens, 1, num_1, 1, var_183_1_token,
  // range &tokens 2 -1
  var_range, 3, var_182_11_tokens, num_2, minus_num_1, 1, var_182_11_tokens,
  // is_simple
  var_is_simple, 1, var_183_1_token, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_25, lambda_26, TAIL_CALL,
  POS(183, 3),
  POS(184, 3),
  POS(186, 11),
  POS(185, 3)
};

static TAB_NUM t_lambda_25[] = {
  0, // locals
  0, // parameters
  //  tokens token
  LET, 2, var_182_11_tokens, var_183_1_token, TAIL_CALL,
  POS(187, 7)
};

static TAB_NUM t_lambda_26[] = {
  0, // locals
  0, // parameters
  // case token
  var_case, 6, var_183_1_token, chr_123, func_extract_object, chr_91, func_extract_array, lambda_27, TAIL_CALL,
  POS(189, 7)
};

static TAB_NUM t_lambda_27[] = {
  0, // locals
  0, // parameters
  // error PARSE_ERROR "Unexpected token" tokens
  var_error, 3, var_PARSE_ERROR, str_Unexpected_token, var_182_11_tokens, TAIL_CALL,
  POS(192, 11)
};

static TAB_NUM t_func_extract_object[] = {
  1, // locals
  0, // parameters
  // $attributes empty_insert_order_table
  LET, 1, var_empty_insert_order_table, 1, var_195_1_attributes,
  // is_empty
  var_is_empty, 1, var_182_11_tokens, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), func_missing_closing_brace, lambda_28, TAIL_CALL,
  POS(195, 5),
  POS(197, 14),
  POS(196, 5)
};

static TAB_NUM t_lambda_28[] = {
  2, // locals
  0, // parameters
  // tokens(1) == '}'
  var_182_11_tokens, 1, num_1, 1, LOCAL(1),
  // tokens(1) == '}'
  var_std__equal, 2, LOCAL(1), chr_125, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_29, lambda_30, TAIL_CALL,
  POS(201, 11),
  POS(201, 11),
  POS(200, 9)
};

static TAB_NUM t_lambda_29[] = {
  1, // locals
  0, // parameters
  // range(tokens 2 -1) attributes
  var_range, 3, var_182_11_tokens, num_2, minus_num_1, 1, LOCAL(1),
  //  range(tokens 2 -1) attributes
  LET, 2, LOCAL(1), var_195_1_attributes, TAIL_CALL,
  POS(202, 14),
  POS(202, 13)
};

static TAB_NUM t_lambda_30[] = {
  0, // locals
  0, // parameters
  // loop:
  var_loop, 1, lambda_2_loop, TAIL_CALL,
  POS(204, 13)
};

static TAB_NUM t_lambda_2_loop[] = {
  2, // locals
  0, // parameters
  // length_of(tokens) < 3
  var_length_of, 1, var_182_11_tokens, 1, LOCAL(1),
  // length_of(tokens) < 3
  var_std__less, 2, LOCAL(1), num_3, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), func_invalid_attribute, lambda_31, TAIL_CALL,
  POS(206, 17),
  POS(206, 17),
  POS(205, 15)
};

static TAB_NUM t_lambda_31[] = {
  2, // locals
  0, // parameters
  // $key tokens(1)
  var_182_11_tokens, 1, num_1, 1, var_209_1_key,
  // is_a_string && tokens(2) == ':'
  var_is_a_string, 1, var_209_1_key, 1, LOCAL(1),
  // is_a_string && tokens(2) == ':'
  var_std__and, 2, LOCAL(1), lambda_32, 1, LOCAL(2),
  // if_not
  var_if_not, 3, LOCAL(2), func_invalid_attribute, lambda_33, TAIL_CALL,
  POS(209, 19),
  POS(211, 25),
  POS(211, 25),
  POS(210, 19)
};

static TAB_NUM t_lambda_32[] = {
  2, // locals
  0, // parameters
  // tokens(2) == ':'
  var_182_11_tokens, 1, num_2, 1, LOCAL(1),
  // tokens(2) == ':'
  var_std__equal, 2, LOCAL(1), chr_58, 1, LOCAL(2),
  // tokens(2) == ':'
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(211, 40),
  POS(211, 40),
  POS(211, 40)
};

static TAB_NUM t_lambda_33[] = {
  2, // locals
  0, // parameters
  // range &tokens 3 -1
  var_range, 3, var_182_11_tokens, num_3, minus_num_1, 1, var_182_11_tokens,
  // extract &tokens $value
  func_extract, 1, var_182_11_tokens, 2, var_182_11_tokens, LOCAL(2),
  // attributes(key) value
  var_195_1_attributes, 2, var_209_1_key, LOCAL(2), 1, var_195_1_attributes,
  // is_empty
  var_is_empty, 1, var_182_11_tokens, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), func_missing_closing_brace, lambda_34, TAIL_CALL,
  POS(214, 23),
  POS(215, 23),
  POS(216, 24),
  POS(218, 32),
  POS(217, 23)
};

static TAB_NUM t_lambda_34[] = {
  1, // locals
  0, // parameters
  // tokens(1)
  var_182_11_tokens, 1, num_1, 1, LOCAL(1),
  // case tokens(1)
  var_case, 6, LOCAL(1), chr_44, lambda_35, chr_125, lambda_36, func_missing_closing_brace, TAIL_CALL,
  POS(221, 32),
  POS(221, 27)
};

static TAB_NUM t_lambda_35[] = {
  0, // locals
  0, // parameters
  // range &tokens 2 -1
  var_range, 3, var_182_11_tokens, num_2, minus_num_1, 1, var_182_11_tokens,
  // next
  var_next, 0, TAIL_CALL,
  POS(223, 31),
  POS(224, 31)
};

static TAB_NUM t_lambda_36[] = {
  1, // locals
  0, // parameters
  // range(tokens 2 -1) attributes
  var_range, 3, var_182_11_tokens, num_2, minus_num_1, 1, LOCAL(1),
  //  range(tokens 2 -1) attributes
  LET, 2, LOCAL(1), var_195_1_attributes, TAIL_CALL,
  POS(225, 36),
  POS(225, 35)
};

static TAB_NUM t_func_missing_closing_brace[] = {
  0, // locals
  0, // parameters
  // error PARSE_ERROR "Closing brace expected" tokens
  var_error, 3, var_PARSE_ERROR, str_Closing_brace_ex, var_182_11_tokens, TAIL_CALL,
  POS(229, 7)
};

static TAB_NUM t_func_invalid_attribute[] = {
  0, // locals
  0, // parameters
  // error PARSE_ERROR "Invalid attribute" tokens
  var_error, 3, var_PARSE_ERROR, str_Invalid_attribut, var_182_11_tokens, TAIL_CALL,
  POS(232, 7)
};

static TAB_NUM t_func_extract_array[] = {
  1, // locals
  0, // parameters
  // is_empty
  var_is_empty, 1, var_182_11_tokens, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), func_missing_closing_bracket, lambda_37, TAIL_CALL,
  POS(236, 14),
  POS(235, 5)
};

static TAB_NUM t_lambda_37[] = {
  2, // locals
  0, // parameters
  // $items empty_list
  LET, 1, var_empty_list, 1, var_239_1_items,
  // tokens(1) == ']'
  var_182_11_tokens, 1, num_1, 1, LOCAL(1),
  // tokens(1) == ']'
  var_std__equal, 2, LOCAL(1), chr_93, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_38, lambda_39, TAIL_CALL,
  POS(239, 9),
  POS(241, 11),
  POS(241, 11),
  POS(240, 9)
};

static TAB_NUM t_lambda_38[] = {
  1, // locals
  0, // parameters
  // range(tokens 2 -1) items
  var_range, 3, var_182_11_tokens, num_2, minus_num_1, 1, LOCAL(1),
  //  range(tokens 2 -1) items
  LET, 2, LOCAL(1), var_239_1_items, TAIL_CALL,
  POS(242, 14),
  POS(242, 13)
};

static TAB_NUM t_lambda_39[] = {
  0, // locals
  0, // parameters
  // loop:
  var_loop, 1, lambda_3_loop, TAIL_CALL,
  POS(244, 13)
};

static TAB_NUM t_lambda_3_loop[] = {
  2, // locals
  0, // parameters
  // extract &tokens $item
  func_extract, 1, var_182_11_tokens, 2, var_182_11_tokens, LOCAL(2),
  // push &items item
  var_push, 2, var_239_1_items, LOCAL(2), 1, var_239_1_items,
  // is_empty
  var_is_empty, 1, var_182_11_tokens, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), func_missing_closing_bracket, lambda_40, TAIL_CALL,
  POS(245, 15),
  POS(246, 15),
  POS(248, 24),
  POS(247, 15)
};

static TAB_NUM t_lambda_40[] = {
  1, // locals
  0, // parameters
  // tokens(1)
  var_182_11_tokens, 1, num_1, 1, LOCAL(1),
  // case tokens(1)
  var_case, 6, LOCAL(1), chr_44, lambda_41, chr_93, lambda_42, func_missing_closing_bracket, TAIL_CALL,
  POS(251, 24),
  POS(251, 19)
};

static TAB_NUM t_lambda_41[] = {
  0, // locals
  0, // parameters
  // range &tokens 2 -1
  var_range, 3, var_182_11_tokens, num_2, minus_num_1, 1, var_182_11_tokens,
  // next
  var_next, 0, TAIL_CALL,
  POS(253, 23),
  POS(254, 23)
};

static TAB_NUM t_lambda_42[] = {
  1, // locals
  0, // parameters
  // range(tokens 2 -1) items
  var_range, 3, var_182_11_tokens, num_2, minus_num_1, 1, LOCAL(1),
  //  range(tokens 2 -1) items
  LET, 2, LOCAL(1), var_239_1_items, TAIL_CALL,
  POS(255, 28),
  POS(255, 27)
};

static TAB_NUM t_func_missing_closing_bracket[] = {
  0, // locals
  0, // parameters
  // error PARSE_ERROR "Closing bracket expected" tokens
  var_error, 3, var_PARSE_ERROR, str_Closing_bracket, var_182_11_tokens, TAIL_CALL,
  POS(259, 7)
};

static int value_range_51_1_arguments[] = {
  -chr_48, -chr_57
};

static int sequence_52_21_arguments[] = {
  -chr_91, -chr_93
};

static int sequence_52_16_arguments[] = {
  -chr_125, -sequence_52_21
};

static int sequence_52_11_arguments[] = {
  -chr_123, -sequence_52_16
};

static int sequence_52_6_arguments[] = {
  -chr_58, -sequence_52_11
};

static int sequence_52_1_arguments[] = {
  -chr_44, -sequence_52_6
};

static FUNKY_CONSTANT constants_table[] = {
  {FLT_UNIQUE, 0, {.str_8 = "std::PARSE_ERROR"}},
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
  {FLT_VALUE_RANGE, 2, {.arguments = value_range_51_1_arguments}},
  {FLT_CHARACTER, 0, {.value = 91}},
  {FLT_CHARACTER, 0, {.value = 93}},
  {FLT_SEQUENCE, 2, {.arguments = sequence_52_21_arguments}},
  {FLT_CHARACTER, 0, {.value = 125}},
  {FLT_SEQUENCE, 2, {.arguments = sequence_52_16_arguments}},
  {FLT_CHARACTER, 0, {.value = 123}},
  {FLT_SEQUENCE, 2, {.arguments = sequence_52_11_arguments}},
  {FLT_CHARACTER, 0, {.value = 58}},
  {FLT_SEQUENCE, 2, {.arguments = sequence_52_6_arguments}},
  {FLT_CHARACTER, 0, {.value = 44}},
  {FLT_SEQUENCE, 2, {.arguments = sequence_52_1_arguments}},
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
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_code_is_defined}},
  {FLT_POSITIVE_INT64, 0, {.value = 6}},
  {FLT_CHARACTER, 0, {.value = 118}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_v}},
  {FLT_CHARACTER, 0, {.value = 11}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_23}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_invalid_special_character}},
  {FLT_STRING_8, 43, {.str_8 = "Invalid special character in string literal"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_24}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_extract}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_25}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_26}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_27}},
  {FLT_STRING_8, 16, {.str_8 = "Unexpected token"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_extract_object}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_28}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_29}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_30}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_31}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_32}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_33}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_34}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_35}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_36}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_missing_closing_brace}},
  {FLT_STRING_8, 22, {.str_8 = "Closing brace expected"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_invalid_attribute}},
  {FLT_STRING_8, 17, {.str_8 = "Invalid attribute"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_extract_array}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_37}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_38}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_39}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_3_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_40}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_41}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_42}},
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
    "PARSE_ERROR\000std", NULL,
    {.const_idx = -uni_std__PARSE_ERROR}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "assign\000std", NULL,
    {.position = POS(23, 1)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "from_json\000std", NULL,
    {.const_idx = -func_std__from_json}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "split_into_lines\000", NULL,
    {.position = POS(26, 10)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "27_1_tokens\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "map_reduce\000", NULL,
    {.position = POS(27, 11)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "28_17_obj\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_empty\000", NULL,
    {.position = POS(30, 12)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "PARSE_ERROR\000", NULL,
    {.position = POS(32, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "error\000", NULL,
    {.position = POS(32, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if\000", NULL,
    {.position = POS(29, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "34_12_line\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "35_1_tokens\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_list\000", NULL,
    {.position = POS(35, 11)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "36_1_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "37_1_n\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "length_of\000", NULL,
    {.position = POS(37, 6)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "less\000std", NULL,
    {.position = POS(40, 11)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "43_1_chr\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not\000std", NULL,
    {.position = POS(45, 19)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000std", NULL,
    {.position = POS(46, 16)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "next\000", NULL,
    {.position = POS(47, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "value_range\000std", NULL,
    {.position = POS(51, 16)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "sequence\000std", NULL,
    {.position = POS(52, 36)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "range\000", NULL,
    {.position = POS(56, 54)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "case\000", NULL,
    {.position = POS(49, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "push\000", NULL,
    {.position = POS(59, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "equal\000std", NULL,
    {.position = POS(65, 29)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "and\000std", NULL,
    {.position = POS(65, 24)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "true\000", NULL,
    {.position = POS(67, 32)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "false\000", NULL,
    {.position = POS(75, 32)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "undefined\000", NULL,
    {.position = POS(83, 32)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "88_1_number\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "89_22_value\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "parse_number\000", NULL,
    {.position = POS(89, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_defined\000", NULL,
    {.position = POS(91, 23)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "minus\000std", NULL,
    {.position = POS(92, 22)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "98_1_s\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "100_1_str\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "loop\000", NULL,
    {.position = POS(101, 15)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "110_1_str_chr\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "break\000", NULL,
    {.position = POS(115, 25)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "121_1_spec_chr\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "146_1_code\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "to_integer\000", NULL,
    {.position = POS(146, 63)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "character\000", NULL,
    {.position = POS(149, 51)}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "is_simple\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "object\000std_types", std_types__object__attributes,
    {.position = POS(175, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "number\000std_types", std_types__number__attributes,
    {.position = POS(176, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "string\000std_types", std_types__string__attributes,
    {.position = POS(177, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "true\000std_types", std_types__true__attributes,
    {.position = POS(178, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "false\000std_types", std_types__false__attributes,
    {.position = POS(179, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "undefined\000std_types", std_types__undefined__attributes,
    {.position = POS(180, 1)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "182_11_tokens\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "183_1_token\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "195_1_attributes\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_insert_order_table\000", NULL,
    {.position = POS(195, 17)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "209_1_key\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_a_string\000", NULL,
    {.position = POS(211, 25)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if_not\000", NULL,
    {.position = POS(210, 19)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "239_1_items\000", NULL
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
  123, // number of constants
  61, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  constants_table,
  variables_table,
};
