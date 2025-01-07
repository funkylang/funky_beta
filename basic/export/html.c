#include <stddef.h>
#include <stdint.h>

#include "runtime/common.h"
#include "runtime/builtins.h"
#include "runtime/fko.h"
#include "runtime/memory.h"

enum {
  func_inline_tag = -1,
  string_1 = -2,
  string_2 = -3,
  string_3 = -4,
  func_single_line_tag = -5,
  string_4 = -6,
  func_multi_line_tag = -7,
  chr_60 = -8,
  lambda_1 = -9,
  chr_10 = -10,
  lambda_2 = -11,
  string_5 = -12,
  chr_62 = -13,
  lambda_3 = -14,
  lambda_4 = -15,
  func_extract_options = -16,
  func_collect_output = -17,
  lambda_5 = -18,
  lambda_6 = -19,
  lambda_7 = -20,
  lambda_8 = -21,
  func_collect_options = -22,
  lambda_9 = -23,
  string_6 = -24,
  string_7 = -25,
  string_8 = -26,
  lambda_10 = -27,
  func_emit_simple = -28,
  string_9 = -29,
  func_emit_single_line = -30,
  lambda_11 = -31,
  lambda_12 = -32,
  func_emit_inline = -33,
  func_emit_multi_line = -34,
  func_html__HTML = -35,
  str_html = -36,
  func_html__HEAD = -37,
  str_head = -38,
  func_html__BODY = -39,
  str_body = -40,
  func_html__TITLE = -41,
  str_title = -42,
  func_html__STYLE = -43,
  str_style = -44,
  func_html__LINK = -45,
  str_link = -46,
  func_html__H1 = -47,
  str_h = -48,
  func_html__H2 = -49,
  str_h_2 = -50,
  func_html__H3 = -51,
  str_h_3 = -52,
  func_html__H4 = -53,
  str_h_4 = -54,
  func_html__H5 = -55,
  str_h_5 = -56,
  func_html__H6 = -57,
  str_h_6 = -58,
  func_html__P = -59,
  str_p = -60,
  func_html__DIV = -61,
  str_div = -62,
  func_html__TABLE = -63,
  str_table = -64,
  func_html__TBODY = -65,
  str_tbody = -66,
  func_html__TR = -67,
  str_tr = -68,
  func_html__TH = -69,
  str_th = -70,
  func_html__TD = -71,
  str_td = -72,
  func_html__DL = -73,
  str_dl = -74,
  func_html__DT = -75,
  str_dt = -76,
  func_html__DD = -77,
  str_dd = -78,
  func_html__PRE = -79,
  str_pre = -80,
  func_html__A = -81,
  str_a = -82,
  func_html__I = -83,
  str_i = -84,
  func_html__B = -85,
  str_b = -86,
  func_html__SPAN = -87,
  str_span = -88,
  func_html__GROUP = -89,
  lambda_13 = -90,
  lambda_14 = -91,
  func_html__FROM_TO = -92,
  lambda_15 = -93,
  lambda_16 = -94,
  func_html__FOR_EACH = -95,
  num_2 = -96,
  lambda_17 = -97,
  lambda_18 = -98,
  lambda_19 = -99,
  lambda_20 = -100,
  lambda_21 = -101,
  lambda_22 = -102
};

enum {
  var__START = FIRST_VAR-1,
  var_std__string, // extern
  var_std__assign, // extern
  var_has_prefix, // extern
  var_if, // extern
  var_has_suffix, // extern
  var_string, // extern
  var_is_a_key_value_pair, // extern
  var_filter, // extern
  var_57_4_buf, // dynamic
  var_59_8_item, // dynamic
  var_is_a_string, // extern
  var_append, // extern
  var_next, // extern
  var_for_each, // extern
  var_69_4_buf, // dynamic
  var_82_21_tag, // dynamic
  var_83_20_options, // dynamic
  var_85_19_buf, // dynamic
  var_contains, // extern
  var_html__HTML, // initialized
  var_html__HEAD, // initialized
  var_html__BODY, // initialized
  var_html__TITLE, // initialized
  var_html__STYLE, // initialized
  var_html__LINK, // initialized
  var_html__H1, // initialized
  var_html__H2, // initialized
  var_html__H3, // initialized
  var_html__H4, // initialized
  var_html__H5, // initialized
  var_html__H6, // initialized
  var_html__P, // initialized
  var_html__DIV, // initialized
  var_html__TABLE, // initialized
  var_html__TBODY, // initialized
  var_html__TR, // initialized
  var_html__TH, // initialized
  var_html__TD, // initialized
  var_html__DL, // initialized
  var_html__DT, // initialized
  var_html__DD, // initialized
  var_html__PRE, // initialized
  var_html__A, // initialized
  var_html__I, // initialized
  var_html__B, // initialized
  var_html__SPAN, // initialized
  var_html__GROUP, // initialized
  var_294_4_text, // dynamic
  var_html__FROM_TO, // initialized
  var_305_5_body, // dynamic
  var_307_4_text, // dynamic
  var_from_to, // extern
  var_html__FOR_EACH, // initialized
  var_316_5_items, // dynamic
  var_317_5_body, // dynamic
  var_319_4_text, // dynamic
  var_parameter_count_of, // extern
  var_std__equal, // extern
  var__END
};


static TAB_NUM t_func_inline_tag[] = {
  4, // locals
  3, // parameters
  LOCAL(2), // 27_15_tag
  LOCAL(3), // 27_19_options
  LOCAL(4), // 27_27_contents
  // "<@(tag)@(options)>@(contents)</@(tag)>"
  var_std__string, 8, string_1, LOCAL(2), LOCAL(3), string_2, LOCAL(4), string_3, LOCAL(2), string_2, 1, LOCAL(1),
  // -> "<@(tag)@(options)>@(contents)</@(tag)>"
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(28, 6),
  POS(28, 3),
  LOCAL(4),
  LOCAL(3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_inline_tag = {
  t_func_inline_tag, NULL, 2, 3,
  {"27_27_contents\000", "27_19_options\000", "27_15_tag\000"}
};

static TAB_NUM t_func_single_line_tag[] = {
  4, // locals
  3, // parameters
  LOCAL(2), // 30_20_tag
  LOCAL(3), // 30_24_options
  LOCAL(4), // 30_32_contents
  // "
  var_std__string, 8, string_1, LOCAL(2), LOCAL(3), string_2, LOCAL(4), string_3, LOCAL(2), string_4, 1, LOCAL(1),
  // -> "
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(31, 6),
  POS(31, 3),
  LOCAL(3),
  LOCAL(4),
  LOCAL(2)
};

static FUNCTION_INFO i_func_single_line_tag = {
  t_func_single_line_tag, NULL, 2, 3,
  {"30_24_options\000", "30_32_contents\000", "30_20_tag\000"}
};

static TAB_NUM t_func_multi_line_tag[] = {
  7, // locals
  3, // parameters
  LOCAL(5), // 34_19_tag
  LOCAL(6), // 34_23_options
  LOCAL(7), // 34_31_contents
  // contents .has_prefix. '<'
  var_has_prefix, 2, LOCAL(7), chr_60, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1, lambda_2, 1, LOCAL(2),
  // contents .has_suffix. '>'
  var_has_suffix, 2, LOCAL(7), chr_62, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_3, lambda_4, 1, LOCAL(4),
  // string
  var_string, 10, chr_60, LOCAL(5), LOCAL(6), string_2, LOCAL(2), LOCAL(7), LOCAL(4), string_3, LOCAL(5), string_4, TAIL_CALL,
  POS(41, 7),
  POS(40, 5),
  POS(46, 7),
  POS(45, 5),
  POS(35, 3),
  LOCAL(6),
  LOCAL(5),
  LOCAL(7)
};

static FUNCTION_INFO i_func_multi_line_tag = {
  t_func_multi_line_tag, NULL, 5, 3,
  {"34_23_options\000", "34_19_tag\000", "34_31_contents\000"}
};

static TAB_NUM t_lambda_1[] = {
  0, // locals
  0, // parameters
  //  '@nl;'
  LET, 1, chr_10, TAIL_CALL,
  POS(42, 9)
};

static FUNCTION_INFO i_lambda_1 = {
  t_lambda_1, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_2[] = {
  0, // locals
  0, // parameters
  //  ""
  LET, 1, string_5, TAIL_CALL,
  POS(43, 9)
};

static FUNCTION_INFO i_lambda_2 = {
  t_lambda_2, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_3[] = {
  0, // locals
  0, // parameters
  //  '@nl;'
  LET, 1, chr_10, TAIL_CALL,
  POS(47, 9)
};

static FUNCTION_INFO i_lambda_3 = {
  t_lambda_3, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_4[] = {
  0, // locals
  0, // parameters
  //  ""
  LET, 1, string_5, TAIL_CALL,
  POS(48, 9)
};

static FUNCTION_INFO i_lambda_4 = {
  t_lambda_4, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_extract_options[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 53_20_items
  // filter items is_a_key_value_pair
  var_filter, 2, LOCAL(1), var_is_a_key_value_pair, TAIL_CALL,
  POS(54, 3),
  LOCAL(1)
};

static FUNCTION_INFO i_func_extract_options = {
  t_func_extract_options, NULL, 1, 1,
  {"53_20_items\000"}
};

static TAB_NUM t_func_collect_output[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 56_19_items
  // $buf ""
  LET, 1, string_5, 1, var_57_4_buf,
  // for_each items
  var_for_each, 3, LOCAL(1), lambda_5, lambda_8, TAIL_CALL,
  POS(57, 3),
  POS(58, 3),
  LOCAL(1)
};

static FUNCTION_INFO i_func_collect_output = {
  t_func_collect_output, NULL, 2, 1,
  {"56_19_items\000"}
};

static TAB_NUM t_lambda_5[] = {
  2, // locals
  1, // parameters
  var_59_8_item,
  // is_a_string
  var_is_a_string, 1, var_59_8_item, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_6, lambda_7, 1, LOCAL(2),
  // append &buf
  var_append, 2, var_57_4_buf, LOCAL(2), 1, var_57_4_buf,
  // next
  var_next, 0, TAIL_CALL,
  POS(62, 16),
  POS(61, 9),
  POS(60, 7),
  POS(65, 7)
};

static FUNCTION_INFO i_lambda_5 = {
  t_lambda_5, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_6[] = {
  0, // locals
  0, // parameters
  //  item
  LET, 1, var_59_8_item, TAIL_CALL,
  POS(63, 13)
};

static FUNCTION_INFO i_lambda_6 = {
  t_lambda_6, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_7[] = {
  1, // locals
  0, // parameters
  // item()
  var_59_8_item, 0, 1, LOCAL(1),
  //  item()
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(64, 14),
  POS(64, 13)
};

static FUNCTION_INFO i_lambda_7 = {
  t_lambda_7, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_8[] = {
  0, // locals
  0, // parameters
  //  buf
  LET, 1, var_57_4_buf, TAIL_CALL,
  POS(66, 7)
};

static FUNCTION_INFO i_lambda_8 = {
  t_lambda_8, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_collect_options[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 68_20_options
  // $buf ""
  LET, 1, string_5, 1, var_69_4_buf,
  // for_each options
  var_for_each, 3, LOCAL(1), lambda_9, lambda_10, TAIL_CALL,
  POS(69, 3),
  POS(70, 3),
  LOCAL(1)
};

static FUNCTION_INFO i_func_collect_options = {
  t_func_collect_options, NULL, 2, 1,
  {"68_20_options\000"}
};

static TAB_NUM t_lambda_9[] = {
  4, // locals
  1, // parameters
  LOCAL(2), // 71_8_option
  // option $key $value
  LOCAL(2), 0, 2, LOCAL(3), LOCAL(4),
  // " @(key)=@quot;@(value)@quot;"
  var_std__string, 5, string_6, LOCAL(3), string_7, LOCAL(4), string_8, 1, LOCAL(1),
  // append &buf " @(key)=@quot;@(value)@quot;"
  var_append, 2, var_69_4_buf, LOCAL(1), 1, var_69_4_buf,
  // next
  var_next, 0, TAIL_CALL,
  POS(72, 7),
  POS(73, 19),
  POS(73, 7),
  POS(74, 7),
  LOCAL(4),
  LOCAL(3),
  LOCAL(2)
};

static FUNCTION_INFO i_lambda_9 = {
  t_lambda_9, NULL, 4, 3,
  {"72_20_value\000", "72_15_key\000", "71_8_option\000"}
};

static TAB_NUM t_lambda_10[] = {
  0, // locals
  0, // parameters
  //  buf
  LET, 1, var_69_4_buf, TAIL_CALL,
  POS(75, 7)
};

static FUNCTION_INFO i_lambda_10 = {
  t_lambda_10, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_emit_simple[] = {
  3, // locals
  2, // parameters
  LOCAL(2), // 77_16_tag
  LOCAL(3), // 77_20_options
  // collect_options &options
  func_collect_options, 1, LOCAL(3), 1, LOCAL(3),
  // "
  var_std__string, 4, string_1, LOCAL(2), LOCAL(3), string_9, 1, LOCAL(1),
  // -> "
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(78, 3),
  POS(79, 6),
  POS(79, 3),
  LOCAL(3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_emit_simple = {
  t_func_emit_simple, NULL, 3, 2,
  {"77_20_options\000", "77_16_tag\000"}
};

static TAB_NUM t_func_emit_single_line[] = {
  2, // locals
  2, // parameters
  var_82_21_tag,
  LOCAL(2), // 82_25_items
  // extract_options $options &items
  func_extract_options, 1, LOCAL(2), 2, var_83_20_options, LOCAL(2),
  // collect_options &options
  func_collect_options, 1, var_83_20_options, 1, var_83_20_options,
  // collect_output $buf items
  func_collect_output, 1, LOCAL(2), 1, var_85_19_buf,
  // buf .contains. '@nl;'
  var_contains, 2, var_85_19_buf, chr_10, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_11, lambda_12, TAIL_CALL,
  POS(83, 3),
  POS(84, 3),
  POS(85, 3),
  POS(87, 5),
  POS(86, 3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_emit_single_line = {
  t_func_emit_single_line, NULL, 5, 1,
  {"82_25_items\000"}
};

static TAB_NUM t_lambda_11[] = {
  0, // locals
  0, // parameters
  // multi_line_tag tag options buf
  func_multi_line_tag, 3, var_82_21_tag, var_83_20_options, var_85_19_buf, TAIL_CALL,
  POS(88, 7)
};

static FUNCTION_INFO i_lambda_11 = {
  t_lambda_11, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_12[] = {
  0, // locals
  0, // parameters
  // single_line_tag tag options buf
  func_single_line_tag, 3, var_82_21_tag, var_83_20_options, var_85_19_buf, TAIL_CALL,
  POS(89, 7)
};

static FUNCTION_INFO i_lambda_12 = {
  t_lambda_12, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_emit_inline[] = {
  4, // locals
  2, // parameters
  LOCAL(1), // 91_16_tag
  LOCAL(2), // 91_20_items
  // extract_options $options &items
  func_extract_options, 1, LOCAL(2), 2, LOCAL(3), LOCAL(2),
  // collect_options &options
  func_collect_options, 1, LOCAL(3), 1, LOCAL(3),
  // collect_output $buf items
  func_collect_output, 1, LOCAL(2), 1, LOCAL(4),
  // inline_tag tag options buf
  func_inline_tag, 3, LOCAL(1), LOCAL(3), LOCAL(4), TAIL_CALL,
  POS(92, 3),
  POS(93, 3),
  POS(94, 3),
  POS(95, 3),
  LOCAL(1),
  LOCAL(2),
  LOCAL(4),
  LOCAL(3)
};

static FUNCTION_INFO i_func_emit_inline = {
  t_func_emit_inline, NULL, 4, 4,
  {"91_16_tag\000", "91_20_items\000", "94_19_buf\000", "92_20_options\000"}
};

static TAB_NUM t_func_emit_multi_line[] = {
  4, // locals
  2, // parameters
  LOCAL(1), // 97_20_tag
  LOCAL(2), // 97_24_items
  // extract_options $options &items
  func_extract_options, 1, LOCAL(2), 2, LOCAL(3), LOCAL(2),
  // collect_options &options
  func_collect_options, 1, LOCAL(3), 1, LOCAL(3),
  // collect_output $buf items
  func_collect_output, 1, LOCAL(2), 1, LOCAL(4),
  // multi_line_tag tag options buf
  func_multi_line_tag, 3, LOCAL(1), LOCAL(3), LOCAL(4), TAIL_CALL,
  POS(98, 3),
  POS(99, 3),
  POS(100, 3),
  POS(101, 3),
  LOCAL(3),
  LOCAL(2),
  LOCAL(1),
  LOCAL(4)
};

static FUNCTION_INFO i_func_emit_multi_line = {
  t_func_emit_multi_line, NULL, 4, 4,
  {"98_20_options\000", "97_24_items\000", "97_20_tag\000", "100_19_buf\000"}
};

static TAB_NUM t_func_html__HTML[] = {
  1, // locals
  -1, // parameters
  REST_PARAMETER, LOCAL(1), // 129_5_items
  // emit_multi_line "html" items
  func_emit_multi_line, 2, str_html, LOCAL(1), TAIL_CALL,
  POS(131, 3),
  LOCAL(1)
};

static FUNCTION_INFO i_func_html__HTML = {
  t_func_html__HTML, NULL, 1, 1,
  {"129_5_items\000"}
};

static TAB_NUM t_func_html__HEAD[] = {
  1, // locals
  -1, // parameters
  REST_PARAMETER, LOCAL(1), // 135_5_items
  // emit_multi_line "head" items
  func_emit_multi_line, 2, str_head, LOCAL(1), TAIL_CALL,
  POS(137, 3),
  LOCAL(1)
};

static FUNCTION_INFO i_func_html__HEAD = {
  t_func_html__HEAD, NULL, 1, 1,
  {"135_5_items\000"}
};

static TAB_NUM t_func_html__BODY[] = {
  1, // locals
  -1, // parameters
  REST_PARAMETER, LOCAL(1), // 142_5_items
  // emit_multi_line "body" items
  func_emit_multi_line, 2, str_body, LOCAL(1), TAIL_CALL,
  POS(144, 3),
  LOCAL(1)
};

static FUNCTION_INFO i_func_html__BODY = {
  t_func_html__BODY, NULL, 1, 1,
  {"142_5_items\000"}
};

static TAB_NUM t_func_html__TITLE[] = {
  1, // locals
  -1, // parameters
  REST_PARAMETER, LOCAL(1), // 148_5_items
  // emit_single_line "title" items
  func_emit_single_line, 2, str_title, LOCAL(1), TAIL_CALL,
  POS(150, 3),
  LOCAL(1)
};

static FUNCTION_INFO i_func_html__TITLE = {
  t_func_html__TITLE, NULL, 1, 1,
  {"148_5_items\000"}
};

static TAB_NUM t_func_html__STYLE[] = {
  1, // locals
  -1, // parameters
  REST_PARAMETER, LOCAL(1), // 154_5_items
  // emit_single_line "style" items
  func_emit_single_line, 2, str_style, LOCAL(1), TAIL_CALL,
  POS(156, 3),
  LOCAL(1)
};

static FUNCTION_INFO i_func_html__STYLE = {
  t_func_html__STYLE, NULL, 1, 1,
  {"154_5_items\000"}
};

static TAB_NUM t_func_html__LINK[] = {
  1, // locals
  -1, // parameters
  REST_PARAMETER, LOCAL(1), // 160_5_options
  // emit_simple "link" options
  func_emit_simple, 2, str_link, LOCAL(1), TAIL_CALL,
  POS(162, 3),
  LOCAL(1)
};

static FUNCTION_INFO i_func_html__LINK = {
  t_func_html__LINK, NULL, 1, 1,
  {"160_5_options\000"}
};

static TAB_NUM t_func_html__H1[] = {
  1, // locals
  -1, // parameters
  REST_PARAMETER, LOCAL(1), // 166_5_items
  // emit_single_line "h1" items
  func_emit_single_line, 2, str_h, LOCAL(1), TAIL_CALL,
  POS(168, 3),
  LOCAL(1)
};

static FUNCTION_INFO i_func_html__H1 = {
  t_func_html__H1, NULL, 1, 1,
  {"166_5_items\000"}
};

static TAB_NUM t_func_html__H2[] = {
  1, // locals
  -1, // parameters
  REST_PARAMETER, LOCAL(1), // 172_5_items
  // emit_single_line "h2" items
  func_emit_single_line, 2, str_h_2, LOCAL(1), TAIL_CALL,
  POS(174, 3),
  LOCAL(1)
};

static FUNCTION_INFO i_func_html__H2 = {
  t_func_html__H2, NULL, 1, 1,
  {"172_5_items\000"}
};

static TAB_NUM t_func_html__H3[] = {
  1, // locals
  -1, // parameters
  REST_PARAMETER, LOCAL(1), // 178_5_items
  // emit_single_line "h3" items
  func_emit_single_line, 2, str_h_3, LOCAL(1), TAIL_CALL,
  POS(180, 3),
  LOCAL(1)
};

static FUNCTION_INFO i_func_html__H3 = {
  t_func_html__H3, NULL, 1, 1,
  {"178_5_items\000"}
};

static TAB_NUM t_func_html__H4[] = {
  1, // locals
  -1, // parameters
  REST_PARAMETER, LOCAL(1), // 184_5_items
  // emit_single_line "h4" items
  func_emit_single_line, 2, str_h_4, LOCAL(1), TAIL_CALL,
  POS(186, 3),
  LOCAL(1)
};

static FUNCTION_INFO i_func_html__H4 = {
  t_func_html__H4, NULL, 1, 1,
  {"184_5_items\000"}
};

static TAB_NUM t_func_html__H5[] = {
  1, // locals
  -1, // parameters
  REST_PARAMETER, LOCAL(1), // 190_5_items
  // emit_single_line "h5" items
  func_emit_single_line, 2, str_h_5, LOCAL(1), TAIL_CALL,
  POS(192, 3),
  LOCAL(1)
};

static FUNCTION_INFO i_func_html__H5 = {
  t_func_html__H5, NULL, 1, 1,
  {"190_5_items\000"}
};

static TAB_NUM t_func_html__H6[] = {
  1, // locals
  -1, // parameters
  REST_PARAMETER, LOCAL(1), // 196_5_items
  // emit_single_line "h6" items
  func_emit_single_line, 2, str_h_6, LOCAL(1), TAIL_CALL,
  POS(198, 3),
  LOCAL(1)
};

static FUNCTION_INFO i_func_html__H6 = {
  t_func_html__H6, NULL, 1, 1,
  {"196_5_items\000"}
};

static TAB_NUM t_func_html__P[] = {
  1, // locals
  -1, // parameters
  REST_PARAMETER, LOCAL(1), // 202_5_items
  // emit_single_line "p" items
  func_emit_single_line, 2, str_p, LOCAL(1), TAIL_CALL,
  POS(204, 3),
  LOCAL(1)
};

static FUNCTION_INFO i_func_html__P = {
  t_func_html__P, NULL, 1, 1,
  {"202_5_items\000"}
};

static TAB_NUM t_func_html__DIV[] = {
  1, // locals
  -1, // parameters
  REST_PARAMETER, LOCAL(1), // 208_5_items
  // emit_multi_line "div" items
  func_emit_multi_line, 2, str_div, LOCAL(1), TAIL_CALL,
  POS(210, 3),
  LOCAL(1)
};

static FUNCTION_INFO i_func_html__DIV = {
  t_func_html__DIV, NULL, 1, 1,
  {"208_5_items\000"}
};

static TAB_NUM t_func_html__TABLE[] = {
  1, // locals
  -1, // parameters
  REST_PARAMETER, LOCAL(1), // 214_5_items
  // emit_multi_line "table" items
  func_emit_multi_line, 2, str_table, LOCAL(1), TAIL_CALL,
  POS(216, 3),
  LOCAL(1)
};

static FUNCTION_INFO i_func_html__TABLE = {
  t_func_html__TABLE, NULL, 1, 1,
  {"214_5_items\000"}
};

static TAB_NUM t_func_html__TBODY[] = {
  1, // locals
  -1, // parameters
  REST_PARAMETER, LOCAL(1), // 220_5_items
  // emit_multi_line "tbody" items
  func_emit_multi_line, 2, str_tbody, LOCAL(1), TAIL_CALL,
  POS(222, 3),
  LOCAL(1)
};

static FUNCTION_INFO i_func_html__TBODY = {
  t_func_html__TBODY, NULL, 1, 1,
  {"220_5_items\000"}
};

static TAB_NUM t_func_html__TR[] = {
  1, // locals
  -1, // parameters
  REST_PARAMETER, LOCAL(1), // 226_5_items
  // emit_multi_line "tr" items
  func_emit_multi_line, 2, str_tr, LOCAL(1), TAIL_CALL,
  POS(228, 3),
  LOCAL(1)
};

static FUNCTION_INFO i_func_html__TR = {
  t_func_html__TR, NULL, 1, 1,
  {"226_5_items\000"}
};

static TAB_NUM t_func_html__TH[] = {
  1, // locals
  -1, // parameters
  REST_PARAMETER, LOCAL(1), // 232_5_items
  // emit_single_line "th" items
  func_emit_single_line, 2, str_th, LOCAL(1), TAIL_CALL,
  POS(234, 3),
  LOCAL(1)
};

static FUNCTION_INFO i_func_html__TH = {
  t_func_html__TH, NULL, 1, 1,
  {"232_5_items\000"}
};

static TAB_NUM t_func_html__TD[] = {
  1, // locals
  -1, // parameters
  REST_PARAMETER, LOCAL(1), // 238_5_items
  // emit_single_line "td" items
  func_emit_single_line, 2, str_td, LOCAL(1), TAIL_CALL,
  POS(240, 3),
  LOCAL(1)
};

static FUNCTION_INFO i_func_html__TD = {
  t_func_html__TD, NULL, 1, 1,
  {"238_5_items\000"}
};

static TAB_NUM t_func_html__DL[] = {
  1, // locals
  -1, // parameters
  REST_PARAMETER, LOCAL(1), // 244_5_items
  // emit_multi_line "dl" items
  func_emit_multi_line, 2, str_dl, LOCAL(1), TAIL_CALL,
  POS(246, 3),
  LOCAL(1)
};

static FUNCTION_INFO i_func_html__DL = {
  t_func_html__DL, NULL, 1, 1,
  {"244_5_items\000"}
};

static TAB_NUM t_func_html__DT[] = {
  1, // locals
  -1, // parameters
  REST_PARAMETER, LOCAL(1), // 250_5_items
  // emit_single_line "dt" items
  func_emit_single_line, 2, str_dt, LOCAL(1), TAIL_CALL,
  POS(252, 3),
  LOCAL(1)
};

static FUNCTION_INFO i_func_html__DT = {
  t_func_html__DT, NULL, 1, 1,
  {"250_5_items\000"}
};

static TAB_NUM t_func_html__DD[] = {
  1, // locals
  -1, // parameters
  REST_PARAMETER, LOCAL(1), // 256_5_items
  // emit_multi_line "dd" items
  func_emit_multi_line, 2, str_dd, LOCAL(1), TAIL_CALL,
  POS(258, 3),
  LOCAL(1)
};

static FUNCTION_INFO i_func_html__DD = {
  t_func_html__DD, NULL, 1, 1,
  {"256_5_items\000"}
};

static TAB_NUM t_func_html__PRE[] = {
  1, // locals
  -1, // parameters
  REST_PARAMETER, LOCAL(1), // 262_5_items
  // emit_single_line "pre" items
  func_emit_single_line, 2, str_pre, LOCAL(1), TAIL_CALL,
  POS(264, 3),
  LOCAL(1)
};

static FUNCTION_INFO i_func_html__PRE = {
  t_func_html__PRE, NULL, 1, 1,
  {"262_5_items\000"}
};

static TAB_NUM t_func_html__A[] = {
  1, // locals
  -1, // parameters
  REST_PARAMETER, LOCAL(1), // 268_5_items
  // emit_inline "a" items
  func_emit_inline, 2, str_a, LOCAL(1), TAIL_CALL,
  POS(270, 3),
  LOCAL(1)
};

static FUNCTION_INFO i_func_html__A = {
  t_func_html__A, NULL, 1, 1,
  {"268_5_items\000"}
};

static TAB_NUM t_func_html__I[] = {
  1, // locals
  -1, // parameters
  REST_PARAMETER, LOCAL(1), // 274_5_items
  // emit_inline "i" items
  func_emit_inline, 2, str_i, LOCAL(1), TAIL_CALL,
  POS(276, 3),
  LOCAL(1)
};

static FUNCTION_INFO i_func_html__I = {
  t_func_html__I, NULL, 1, 1,
  {"274_5_items\000"}
};

static TAB_NUM t_func_html__B[] = {
  1, // locals
  -1, // parameters
  REST_PARAMETER, LOCAL(1), // 280_5_items
  // emit_inline "b" items
  func_emit_inline, 2, str_b, LOCAL(1), TAIL_CALL,
  POS(282, 3),
  LOCAL(1)
};

static FUNCTION_INFO i_func_html__B = {
  t_func_html__B, NULL, 1, 1,
  {"280_5_items\000"}
};

static TAB_NUM t_func_html__SPAN[] = {
  1, // locals
  -1, // parameters
  REST_PARAMETER, LOCAL(1), // 286_5_items
  // emit_inline "span" items
  func_emit_inline, 2, str_span, LOCAL(1), TAIL_CALL,
  POS(288, 3),
  LOCAL(1)
};

static FUNCTION_INFO i_func_html__SPAN = {
  t_func_html__SPAN, NULL, 1, 1,
  {"286_5_items\000"}
};

static TAB_NUM t_func_html__GROUP[] = {
  1, // locals
  -1, // parameters
  REST_PARAMETER, LOCAL(1), // 292_5_items
  // $text ""
  LET, 1, string_5, 1, var_294_4_text,
  // for_each items
  var_for_each, 3, LOCAL(1), lambda_13, lambda_14, TAIL_CALL,
  POS(294, 3),
  POS(295, 3),
  LOCAL(1)
};

static FUNCTION_INFO i_func_html__GROUP = {
  t_func_html__GROUP, NULL, 2, 1,
  {"292_5_items\000"}
};

static TAB_NUM t_lambda_13[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 296_8_item
  // item()
  LOCAL(2), 0, 1, LOCAL(1),
  // append &text item()
  var_append, 2, var_294_4_text, LOCAL(1), 1, var_294_4_text,
  // next
  var_next, 0, TAIL_CALL,
  POS(297, 20),
  POS(297, 7),
  POS(298, 7),
  LOCAL(2)
};

static FUNCTION_INFO i_lambda_13 = {
  t_lambda_13, NULL, 3, 1,
  {"296_8_item\000"}
};

static TAB_NUM t_lambda_14[] = {
  0, // locals
  0, // parameters
  //  text
  LET, 1, var_294_4_text, TAIL_CALL,
  POS(299, 7)
};

static FUNCTION_INFO i_lambda_14 = {
  t_lambda_14, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_html__FROM_TO[] = {
  2, // locals
  3, // parameters
  LOCAL(1), // 303_5_from
  LOCAL(2), // 304_5_to
  var_305_5_body,
  // $text ""
  LET, 1, string_5, 1, var_307_4_text,
  // from_to from to
  var_from_to, 4, LOCAL(1), LOCAL(2), lambda_15, lambda_16, TAIL_CALL,
  POS(307, 3),
  POS(308, 3),
  LOCAL(1),
  LOCAL(2)
};

static FUNCTION_INFO i_func_html__FROM_TO = {
  t_func_html__FROM_TO, NULL, 2, 2,
  {"303_5_from\000", "304_5_to\000"}
};

static TAB_NUM t_lambda_15[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 309_8_idx
  // body(idx)
  var_305_5_body, 1, LOCAL(2), 1, LOCAL(1),
  // append &text body(idx)
  var_append, 2, var_307_4_text, LOCAL(1), 1, var_307_4_text,
  // next
  var_next, 0, TAIL_CALL,
  POS(310, 20),
  POS(310, 7),
  POS(311, 7),
  LOCAL(2)
};

static FUNCTION_INFO i_lambda_15 = {
  t_lambda_15, NULL, 3, 1,
  {"309_8_idx\000"}
};

static TAB_NUM t_lambda_16[] = {
  0, // locals
  0, // parameters
  //  text
  LET, 1, var_307_4_text, TAIL_CALL,
  POS(312, 7)
};

static FUNCTION_INFO i_lambda_16 = {
  t_lambda_16, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_html__FOR_EACH[] = {
  2, // locals
  2, // parameters
  var_316_5_items,
  var_317_5_body,
  // $text ""
  LET, 1, string_5, 1, var_319_4_text,
  // parameter_count_of(body) == 2:
  var_parameter_count_of, 1, var_317_5_body, 1, LOCAL(1),
  // parameter_count_of(body) == 2:
  var_std__equal, 2, LOCAL(1), num_2, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_17, lambda_20, TAIL_CALL,
  POS(319, 3),
  POS(321, 5),
  POS(321, 5),
  POS(320, 3)
};

static FUNCTION_INFO i_func_html__FOR_EACH = {
  t_func_html__FOR_EACH, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_17[] = {
  0, // locals
  0, // parameters
  // for_each items
  var_for_each, 3, var_316_5_items, lambda_18, lambda_19, TAIL_CALL,
  POS(322, 7)
};

static FUNCTION_INFO i_lambda_17 = {
  t_lambda_17, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_18[] = {
  3, // locals
  2, // parameters
  LOCAL(2), // 323_12_key
  LOCAL(3), // 323_16_value
  // body(key value)
  var_317_5_body, 2, LOCAL(2), LOCAL(3), 1, LOCAL(1),
  // append &text body(key value)
  var_append, 2, var_319_4_text, LOCAL(1), 1, var_319_4_text,
  // next
  var_next, 0, TAIL_CALL,
  POS(324, 24),
  POS(324, 11),
  POS(325, 11),
  LOCAL(3),
  LOCAL(2)
};

static FUNCTION_INFO i_lambda_18 = {
  t_lambda_18, NULL, 3, 2,
  {"323_16_value\000", "323_12_key\000"}
};

static TAB_NUM t_lambda_19[] = {
  0, // locals
  0, // parameters
  //  text
  LET, 1, var_319_4_text, TAIL_CALL,
  POS(326, 11)
};

static FUNCTION_INFO i_lambda_19 = {
  t_lambda_19, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_20[] = {
  0, // locals
  0, // parameters
  // for_each items
  var_for_each, 3, var_316_5_items, lambda_21, lambda_22, TAIL_CALL,
  POS(328, 7)
};

static FUNCTION_INFO i_lambda_20 = {
  t_lambda_20, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_21[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 329_12_item
  // body(item)
  var_317_5_body, 1, LOCAL(2), 1, LOCAL(1),
  // append &text body(item)
  var_append, 2, var_319_4_text, LOCAL(1), 1, var_319_4_text,
  // next
  var_next, 0, TAIL_CALL,
  POS(330, 24),
  POS(330, 11),
  POS(331, 11),
  LOCAL(2)
};

static FUNCTION_INFO i_lambda_21 = {
  t_lambda_21, NULL, 3, 1,
  {"329_12_item\000"}
};

static TAB_NUM t_lambda_22[] = {
  0, // locals
  0, // parameters
  //  text
  LET, 1, var_319_4_text, TAIL_CALL,
  POS(332, 11)
};

static FUNCTION_INFO i_lambda_22 = {
  t_lambda_22, NULL, 1, 0,
  {}
};

static FUNKY_CONSTANT constants_table[] = {
  {FLT_FUNCTION, 0, {.func_info = &i_func_inline_tag}},
  {FLT_STRING_8, 1, {.str_8 = "<"}},
  {FLT_STRING_8, 1, {.str_8 = ">"}},
  {FLT_STRING_8, 2, {.str_8 = "</"}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_single_line_tag}},
  {FLT_STRING_8, 2, {.str_8 = ">\012"}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_multi_line_tag}},
  {FLT_CHARACTER, 0, {.value = 60}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_1}},
  {FLT_CHARACTER, 0, {.value = 10}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_2}},
  {FLT_STRING_8, 0, {.str_8 = ""}},
  {FLT_CHARACTER, 0, {.value = 62}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_3}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_4}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_extract_options}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_collect_output}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_5}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_6}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_7}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_8}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_collect_options}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_9}},
  {FLT_STRING_8, 1, {.str_8 = " "}},
  {FLT_STRING_8, 2, {.str_8 = "=\042"}},
  {FLT_STRING_8, 1, {.str_8 = "\042"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_10}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_emit_simple}},
  {FLT_STRING_8, 3, {.str_8 = "/>\012"}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_emit_single_line}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_11}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_12}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_emit_inline}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_emit_multi_line}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_html__HTML}},
  {FLT_STRING_8, 4, {.str_8 = "html"}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_html__HEAD}},
  {FLT_STRING_8, 4, {.str_8 = "head"}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_html__BODY}},
  {FLT_STRING_8, 4, {.str_8 = "body"}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_html__TITLE}},
  {FLT_STRING_8, 5, {.str_8 = "title"}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_html__STYLE}},
  {FLT_STRING_8, 5, {.str_8 = "style"}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_html__LINK}},
  {FLT_STRING_8, 4, {.str_8 = "link"}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_html__H1}},
  {FLT_STRING_8, 2, {.str_8 = "h1"}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_html__H2}},
  {FLT_STRING_8, 2, {.str_8 = "h2"}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_html__H3}},
  {FLT_STRING_8, 2, {.str_8 = "h3"}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_html__H4}},
  {FLT_STRING_8, 2, {.str_8 = "h4"}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_html__H5}},
  {FLT_STRING_8, 2, {.str_8 = "h5"}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_html__H6}},
  {FLT_STRING_8, 2, {.str_8 = "h6"}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_html__P}},
  {FLT_STRING_8, 1, {.str_8 = "p"}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_html__DIV}},
  {FLT_STRING_8, 3, {.str_8 = "div"}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_html__TABLE}},
  {FLT_STRING_8, 5, {.str_8 = "table"}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_html__TBODY}},
  {FLT_STRING_8, 5, {.str_8 = "tbody"}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_html__TR}},
  {FLT_STRING_8, 2, {.str_8 = "tr"}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_html__TH}},
  {FLT_STRING_8, 2, {.str_8 = "th"}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_html__TD}},
  {FLT_STRING_8, 2, {.str_8 = "td"}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_html__DL}},
  {FLT_STRING_8, 2, {.str_8 = "dl"}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_html__DT}},
  {FLT_STRING_8, 2, {.str_8 = "dt"}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_html__DD}},
  {FLT_STRING_8, 2, {.str_8 = "dd"}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_html__PRE}},
  {FLT_STRING_8, 3, {.str_8 = "pre"}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_html__A}},
  {FLT_STRING_8, 1, {.str_8 = "a"}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_html__I}},
  {FLT_STRING_8, 1, {.str_8 = "i"}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_html__B}},
  {FLT_STRING_8, 1, {.str_8 = "b"}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_html__SPAN}},
  {FLT_STRING_8, 4, {.str_8 = "span"}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_html__GROUP}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_13}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_14}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_html__FROM_TO}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_15}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_16}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_html__FOR_EACH}},
  {FLT_POSITIVE_INT64, 0, {.value = 2}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_17}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_18}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_19}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_20}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_21}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_22}}
};

static FUNKY_VARIABLE variables_table[] = {
  {
    FOT_UNKNOWN, 0, 0,
    "string\000std", NULL,
    {.position = POS(28, 6)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "assign\000std", NULL,
    {.position = POS(28, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "has_prefix\000", NULL,
    {.position = POS(41, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if\000", NULL,
    {.position = POS(40, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "has_suffix\000", NULL,
    {.position = POS(46, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "string\000", NULL,
    {.position = POS(35, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_a_key_value_pair\000", NULL,
    {.position = POS(54, 16)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "filter\000", NULL,
    {.position = POS(54, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "57_4_buf\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "59_8_item\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_a_string\000", NULL,
    {.position = POS(62, 16)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "append\000", NULL,
    {.position = POS(60, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "next\000", NULL,
    {.position = POS(65, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "for_each\000", NULL,
    {.position = POS(58, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "69_4_buf\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "82_21_tag\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "83_20_options\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "85_19_buf\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "contains\000", NULL,
    {.position = POS(87, 5)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "HTML\000html", NULL,
    {.const_idx = -func_html__HTML}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "HEAD\000html", NULL,
    {.const_idx = -func_html__HEAD}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "BODY\000html", NULL,
    {.const_idx = -func_html__BODY}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "TITLE\000html", NULL,
    {.const_idx = -func_html__TITLE}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "STYLE\000html", NULL,
    {.const_idx = -func_html__STYLE}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "LINK\000html", NULL,
    {.const_idx = -func_html__LINK}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "H1\000html", NULL,
    {.const_idx = -func_html__H1}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "H2\000html", NULL,
    {.const_idx = -func_html__H2}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "H3\000html", NULL,
    {.const_idx = -func_html__H3}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "H4\000html", NULL,
    {.const_idx = -func_html__H4}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "H5\000html", NULL,
    {.const_idx = -func_html__H5}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "H6\000html", NULL,
    {.const_idx = -func_html__H6}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "P\000html", NULL,
    {.const_idx = -func_html__P}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "DIV\000html", NULL,
    {.const_idx = -func_html__DIV}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "TABLE\000html", NULL,
    {.const_idx = -func_html__TABLE}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "TBODY\000html", NULL,
    {.const_idx = -func_html__TBODY}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "TR\000html", NULL,
    {.const_idx = -func_html__TR}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "TH\000html", NULL,
    {.const_idx = -func_html__TH}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "TD\000html", NULL,
    {.const_idx = -func_html__TD}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "DL\000html", NULL,
    {.const_idx = -func_html__DL}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "DT\000html", NULL,
    {.const_idx = -func_html__DT}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "DD\000html", NULL,
    {.const_idx = -func_html__DD}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "PRE\000html", NULL,
    {.const_idx = -func_html__PRE}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "A\000html", NULL,
    {.const_idx = -func_html__A}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "I\000html", NULL,
    {.const_idx = -func_html__I}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "B\000html", NULL,
    {.const_idx = -func_html__B}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "SPAN\000html", NULL,
    {.const_idx = -func_html__SPAN}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "GROUP\000html", NULL,
    {.const_idx = -func_html__GROUP}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "294_4_text\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "FROM_TO\000html", NULL,
    {.const_idx = -func_html__FROM_TO}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "305_5_body\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "307_4_text\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "from_to\000", NULL,
    {.position = POS(308, 3)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "FOR_EACH\000html", NULL,
    {.const_idx = -func_html__FOR_EACH}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "316_5_items\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "317_5_body\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "319_4_text\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "parameter_count_of\000", NULL,
    {.position = POS(321, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "equal\000std", NULL,
    {.position = POS(321, 5)}
  }
};

static FUNKY_NAMESPACE defined_namespaces[] = {
  {"html", 1, 0}
};

static FUNKY_NAMESPACE used_namespaces[] = {
  {"std", 1, 0}
};

FUNKY_MODULE module__basic__export__html = {
  "_basic__export__html", // module name
  "basic/export/html.fky", // module filename
  .major_version = 0,
  .minor_version = 0,
  .feature_flags = FEAT_POSITIONS|FEAT_FUNCTION_INFO,
  .marker = 0,
  0, // number of required modules
  1, // number of defined namespaces
  1, // number of used namespaces
  102, // number of constants
  58, // number of variables
  NULL, // required modules
  defined_namespaces,
  used_namespaces,
  constants_table,
  variables_table,
};
