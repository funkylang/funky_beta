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
  var_54_1_buf, // dynamic
  var_56_3_item, // dynamic
  var_is_a_string, // extern
  var_append, // extern
  var_next, // extern
  var_for_each, // extern
  var_66_1_buf, // dynamic
  var_79_20_tag, // dynamic
  var_80_17_options, // dynamic
  var_82_16_buf, // dynamic
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
  var_267_1_text, // dynamic
  var_html__FROM_TO, // initialized
  var_278_0_body, // dynamic
  var_280_1_text, // dynamic
  var_from_to, // extern
  var_html__FOR_EACH, // initialized
  var_289_0_items, // dynamic
  var_290_0_body, // dynamic
  var_292_1_text, // dynamic
  var_parameter_count_of, // extern
  var_std__equal, // extern
  var__END
};


static TAB_NUM t_func_inline_tag[] = {
  4, // locals
  3, // parameters
  LOCAL(2), // 24_14_tag
  LOCAL(3), // 24_18_options
  LOCAL(4), // 24_26_contents
  // "<@(tag)@(options)>@(contents)</@(tag)>"
  var_std__string, 8, string_1, LOCAL(2), LOCAL(3), string_2, LOCAL(4), string_3, LOCAL(2), string_2, 1, LOCAL(1),
  // -> "<@(tag)@(options)>@(contents)</@(tag)>"
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(25, 6),
  POS(25, 3)
};

static TAB_NUM t_func_single_line_tag[] = {
  4, // locals
  3, // parameters
  LOCAL(2), // 27_19_tag
  LOCAL(3), // 27_23_options
  LOCAL(4), // 27_31_contents
  // "
  var_std__string, 8, string_1, LOCAL(2), LOCAL(3), string_2, LOCAL(4), string_3, LOCAL(2), string_4, 1, LOCAL(1),
  // -> "
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(28, 6),
  POS(28, 3)
};

static TAB_NUM t_func_multi_line_tag[] = {
  7, // locals
  3, // parameters
  LOCAL(5), // 31_18_tag
  LOCAL(6), // 31_22_options
  LOCAL(7), // 31_30_contents
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
  POS(38, 7),
  POS(37, 5),
  POS(43, 7),
  POS(42, 5),
  POS(32, 3)
};

static TAB_NUM t_lambda_1[] = {
  0, // locals
  0, // parameters
  //  '@nl;'
  LET, 1, chr_10, TAIL_CALL,
  POS(39, 9)
};

static TAB_NUM t_lambda_2[] = {
  0, // locals
  0, // parameters
  //  ""
  LET, 1, string_5, TAIL_CALL,
  POS(40, 9)
};

static TAB_NUM t_lambda_3[] = {
  0, // locals
  0, // parameters
  //  '@nl;'
  LET, 1, chr_10, TAIL_CALL,
  POS(44, 9)
};

static TAB_NUM t_lambda_4[] = {
  0, // locals
  0, // parameters
  //  ""
  LET, 1, string_5, TAIL_CALL,
  POS(45, 9)
};

static TAB_NUM t_func_extract_options[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 50_19_items
  // filter items is_a_key_value_pair
  var_filter, 2, LOCAL(1), var_is_a_key_value_pair, TAIL_CALL,
  POS(51, 3)
};

static TAB_NUM t_func_collect_output[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 53_18_items
  // $buf ""
  LET, 1, string_5, 1, var_54_1_buf,
  // for_each items
  var_for_each, 3, LOCAL(1), lambda_5, lambda_8, TAIL_CALL,
  POS(54, 3),
  POS(55, 3)
};

static TAB_NUM t_lambda_5[] = {
  2, // locals
  1, // parameters
  var_56_3_item,
  // is_a_string
  var_is_a_string, 1, var_56_3_item, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_6, lambda_7, 1, LOCAL(2),
  // append &buf
  var_append, 2, var_54_1_buf, LOCAL(2), 1, var_54_1_buf,
  // next
  var_next, 0, TAIL_CALL,
  POS(59, 16),
  POS(58, 9),
  POS(57, 7),
  POS(62, 7)
};

static TAB_NUM t_lambda_6[] = {
  0, // locals
  0, // parameters
  //  item
  LET, 1, var_56_3_item, TAIL_CALL,
  POS(60, 13)
};

static TAB_NUM t_lambda_7[] = {
  1, // locals
  0, // parameters
  // item()
  var_56_3_item, 0, 1, LOCAL(1),
  //  item()
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(61, 14),
  POS(61, 13)
};

static TAB_NUM t_lambda_8[] = {
  0, // locals
  0, // parameters
  //  buf
  LET, 1, var_54_1_buf, TAIL_CALL,
  POS(63, 7)
};

static TAB_NUM t_func_collect_options[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 65_19_options
  // $buf ""
  LET, 1, string_5, 1, var_66_1_buf,
  // for_each options
  var_for_each, 3, LOCAL(1), lambda_9, lambda_10, TAIL_CALL,
  POS(66, 3),
  POS(67, 3)
};

static TAB_NUM t_lambda_9[] = {
  4, // locals
  1, // parameters
  LOCAL(2), // 68_3_option
  // option $key $value
  LOCAL(2), 0, 2, LOCAL(3), LOCAL(4),
  // " @(key)=@quot;@(value)@quot;"
  var_std__string, 5, string_6, LOCAL(3), string_7, LOCAL(4), string_8, 1, LOCAL(1),
  // append &buf " @(key)=@quot;@(value)@quot;"
  var_append, 2, var_66_1_buf, LOCAL(1), 1, var_66_1_buf,
  // next
  var_next, 0, TAIL_CALL,
  POS(69, 7),
  POS(70, 19),
  POS(70, 7),
  POS(71, 7)
};

static TAB_NUM t_lambda_10[] = {
  0, // locals
  0, // parameters
  //  buf
  LET, 1, var_66_1_buf, TAIL_CALL,
  POS(72, 7)
};

static TAB_NUM t_func_emit_simple[] = {
  3, // locals
  2, // parameters
  LOCAL(2), // 74_15_tag
  LOCAL(3), // 74_19_options
  // collect_options &options
  func_collect_options, 1, LOCAL(3), 1, LOCAL(3),
  // "
  var_std__string, 4, string_1, LOCAL(2), LOCAL(3), string_9, 1, LOCAL(1),
  // -> "
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(75, 3),
  POS(76, 6),
  POS(76, 3)
};

static TAB_NUM t_func_emit_single_line[] = {
  2, // locals
  2, // parameters
  var_79_20_tag,
  LOCAL(2), // 79_24_items
  // extract_options $options &items
  func_extract_options, 1, LOCAL(2), 2, var_80_17_options, LOCAL(2),
  // collect_options &options
  func_collect_options, 1, var_80_17_options, 1, var_80_17_options,
  // collect_output $buf items
  func_collect_output, 1, LOCAL(2), 1, var_82_16_buf,
  // buf .contains. '@nl;'
  var_contains, 2, var_82_16_buf, chr_10, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_11, lambda_12, TAIL_CALL,
  POS(80, 3),
  POS(81, 3),
  POS(82, 3),
  POS(84, 5),
  POS(83, 3)
};

static TAB_NUM t_lambda_11[] = {
  0, // locals
  0, // parameters
  // multi_line_tag tag options buf
  func_multi_line_tag, 3, var_79_20_tag, var_80_17_options, var_82_16_buf, TAIL_CALL,
  POS(85, 7)
};

static TAB_NUM t_lambda_12[] = {
  0, // locals
  0, // parameters
  // single_line_tag tag options buf
  func_single_line_tag, 3, var_79_20_tag, var_80_17_options, var_82_16_buf, TAIL_CALL,
  POS(86, 7)
};

static TAB_NUM t_func_emit_inline[] = {
  4, // locals
  2, // parameters
  LOCAL(1), // 88_15_tag
  LOCAL(2), // 88_19_items
  // extract_options $options &items
  func_extract_options, 1, LOCAL(2), 2, LOCAL(3), LOCAL(2),
  // collect_options &options
  func_collect_options, 1, LOCAL(3), 1, LOCAL(3),
  // collect_output $buf items
  func_collect_output, 1, LOCAL(2), 1, LOCAL(4),
  // inline_tag tag options buf
  func_inline_tag, 3, LOCAL(1), LOCAL(3), LOCAL(4), TAIL_CALL,
  POS(89, 3),
  POS(90, 3),
  POS(91, 3),
  POS(92, 3)
};

static TAB_NUM t_func_emit_multi_line[] = {
  4, // locals
  2, // parameters
  LOCAL(1), // 94_19_tag
  LOCAL(2), // 94_23_items
  // extract_options $options &items
  func_extract_options, 1, LOCAL(2), 2, LOCAL(3), LOCAL(2),
  // collect_options &options
  func_collect_options, 1, LOCAL(3), 1, LOCAL(3),
  // collect_output $buf items
  func_collect_output, 1, LOCAL(2), 1, LOCAL(4),
  // multi_line_tag tag options buf
  func_multi_line_tag, 3, LOCAL(1), LOCAL(3), LOCAL(4), TAIL_CALL,
  POS(95, 3),
  POS(96, 3),
  POS(97, 3),
  POS(98, 3)
};

static TAB_NUM t_func_html__HTML[] = {
  1, // locals
  -1, // parameters
  REST_PARAMETER, LOCAL(1), // 102_0_items
  // emit_multi_line "html" items
  func_emit_multi_line, 2, str_html, LOCAL(1), TAIL_CALL,
  POS(104, 3)
};

static TAB_NUM t_func_html__HEAD[] = {
  1, // locals
  -1, // parameters
  REST_PARAMETER, LOCAL(1), // 108_0_items
  // emit_multi_line "head" items
  func_emit_multi_line, 2, str_head, LOCAL(1), TAIL_CALL,
  POS(110, 3)
};

static TAB_NUM t_func_html__BODY[] = {
  1, // locals
  -1, // parameters
  REST_PARAMETER, LOCAL(1), // 115_0_items
  // emit_multi_line "body" items
  func_emit_multi_line, 2, str_body, LOCAL(1), TAIL_CALL,
  POS(117, 3)
};

static TAB_NUM t_func_html__TITLE[] = {
  1, // locals
  -1, // parameters
  REST_PARAMETER, LOCAL(1), // 121_0_items
  // emit_single_line "title" items
  func_emit_single_line, 2, str_title, LOCAL(1), TAIL_CALL,
  POS(123, 3)
};

static TAB_NUM t_func_html__STYLE[] = {
  1, // locals
  -1, // parameters
  REST_PARAMETER, LOCAL(1), // 127_0_items
  // emit_single_line "style" items
  func_emit_single_line, 2, str_style, LOCAL(1), TAIL_CALL,
  POS(129, 3)
};

static TAB_NUM t_func_html__LINK[] = {
  1, // locals
  -1, // parameters
  REST_PARAMETER, LOCAL(1), // 133_0_options
  // emit_simple "link" options
  func_emit_simple, 2, str_link, LOCAL(1), TAIL_CALL,
  POS(135, 3)
};

static TAB_NUM t_func_html__H1[] = {
  1, // locals
  -1, // parameters
  REST_PARAMETER, LOCAL(1), // 139_0_items
  // emit_single_line "h1" items
  func_emit_single_line, 2, str_h, LOCAL(1), TAIL_CALL,
  POS(141, 3)
};

static TAB_NUM t_func_html__H2[] = {
  1, // locals
  -1, // parameters
  REST_PARAMETER, LOCAL(1), // 145_0_items
  // emit_single_line "h2" items
  func_emit_single_line, 2, str_h_2, LOCAL(1), TAIL_CALL,
  POS(147, 3)
};

static TAB_NUM t_func_html__H3[] = {
  1, // locals
  -1, // parameters
  REST_PARAMETER, LOCAL(1), // 151_0_items
  // emit_single_line "h3" items
  func_emit_single_line, 2, str_h_3, LOCAL(1), TAIL_CALL,
  POS(153, 3)
};

static TAB_NUM t_func_html__H4[] = {
  1, // locals
  -1, // parameters
  REST_PARAMETER, LOCAL(1), // 157_0_items
  // emit_single_line "h4" items
  func_emit_single_line, 2, str_h_4, LOCAL(1), TAIL_CALL,
  POS(159, 3)
};

static TAB_NUM t_func_html__H5[] = {
  1, // locals
  -1, // parameters
  REST_PARAMETER, LOCAL(1), // 163_0_items
  // emit_single_line "h5" items
  func_emit_single_line, 2, str_h_5, LOCAL(1), TAIL_CALL,
  POS(165, 3)
};

static TAB_NUM t_func_html__H6[] = {
  1, // locals
  -1, // parameters
  REST_PARAMETER, LOCAL(1), // 169_0_items
  // emit_single_line "h6" items
  func_emit_single_line, 2, str_h_6, LOCAL(1), TAIL_CALL,
  POS(171, 3)
};

static TAB_NUM t_func_html__P[] = {
  1, // locals
  -1, // parameters
  REST_PARAMETER, LOCAL(1), // 175_0_items
  // emit_single_line "p" items
  func_emit_single_line, 2, str_p, LOCAL(1), TAIL_CALL,
  POS(177, 3)
};

static TAB_NUM t_func_html__DIV[] = {
  1, // locals
  -1, // parameters
  REST_PARAMETER, LOCAL(1), // 181_0_items
  // emit_multi_line "div" items
  func_emit_multi_line, 2, str_div, LOCAL(1), TAIL_CALL,
  POS(183, 3)
};

static TAB_NUM t_func_html__TABLE[] = {
  1, // locals
  -1, // parameters
  REST_PARAMETER, LOCAL(1), // 187_0_items
  // emit_multi_line "table" items
  func_emit_multi_line, 2, str_table, LOCAL(1), TAIL_CALL,
  POS(189, 3)
};

static TAB_NUM t_func_html__TBODY[] = {
  1, // locals
  -1, // parameters
  REST_PARAMETER, LOCAL(1), // 193_0_items
  // emit_multi_line "tbody" items
  func_emit_multi_line, 2, str_tbody, LOCAL(1), TAIL_CALL,
  POS(195, 3)
};

static TAB_NUM t_func_html__TR[] = {
  1, // locals
  -1, // parameters
  REST_PARAMETER, LOCAL(1), // 199_0_items
  // emit_multi_line "tr" items
  func_emit_multi_line, 2, str_tr, LOCAL(1), TAIL_CALL,
  POS(201, 3)
};

static TAB_NUM t_func_html__TH[] = {
  1, // locals
  -1, // parameters
  REST_PARAMETER, LOCAL(1), // 205_0_items
  // emit_single_line "th" items
  func_emit_single_line, 2, str_th, LOCAL(1), TAIL_CALL,
  POS(207, 3)
};

static TAB_NUM t_func_html__TD[] = {
  1, // locals
  -1, // parameters
  REST_PARAMETER, LOCAL(1), // 211_0_items
  // emit_single_line "td" items
  func_emit_single_line, 2, str_td, LOCAL(1), TAIL_CALL,
  POS(213, 3)
};

static TAB_NUM t_func_html__DL[] = {
  1, // locals
  -1, // parameters
  REST_PARAMETER, LOCAL(1), // 217_0_items
  // emit_multi_line "dl" items
  func_emit_multi_line, 2, str_dl, LOCAL(1), TAIL_CALL,
  POS(219, 3)
};

static TAB_NUM t_func_html__DT[] = {
  1, // locals
  -1, // parameters
  REST_PARAMETER, LOCAL(1), // 223_0_items
  // emit_single_line "dt" items
  func_emit_single_line, 2, str_dt, LOCAL(1), TAIL_CALL,
  POS(225, 3)
};

static TAB_NUM t_func_html__DD[] = {
  1, // locals
  -1, // parameters
  REST_PARAMETER, LOCAL(1), // 229_0_items
  // emit_multi_line "dd" items
  func_emit_multi_line, 2, str_dd, LOCAL(1), TAIL_CALL,
  POS(231, 3)
};

static TAB_NUM t_func_html__PRE[] = {
  1, // locals
  -1, // parameters
  REST_PARAMETER, LOCAL(1), // 235_0_items
  // emit_single_line "pre" items
  func_emit_single_line, 2, str_pre, LOCAL(1), TAIL_CALL,
  POS(237, 3)
};

static TAB_NUM t_func_html__A[] = {
  1, // locals
  -1, // parameters
  REST_PARAMETER, LOCAL(1), // 241_0_items
  // emit_inline "a" items
  func_emit_inline, 2, str_a, LOCAL(1), TAIL_CALL,
  POS(243, 3)
};

static TAB_NUM t_func_html__I[] = {
  1, // locals
  -1, // parameters
  REST_PARAMETER, LOCAL(1), // 247_0_items
  // emit_inline "i" items
  func_emit_inline, 2, str_i, LOCAL(1), TAIL_CALL,
  POS(249, 3)
};

static TAB_NUM t_func_html__B[] = {
  1, // locals
  -1, // parameters
  REST_PARAMETER, LOCAL(1), // 253_0_items
  // emit_inline "b" items
  func_emit_inline, 2, str_b, LOCAL(1), TAIL_CALL,
  POS(255, 3)
};

static TAB_NUM t_func_html__SPAN[] = {
  1, // locals
  -1, // parameters
  REST_PARAMETER, LOCAL(1), // 259_0_items
  // emit_inline "span" items
  func_emit_inline, 2, str_span, LOCAL(1), TAIL_CALL,
  POS(261, 3)
};

static TAB_NUM t_func_html__GROUP[] = {
  1, // locals
  -1, // parameters
  REST_PARAMETER, LOCAL(1), // 265_0_items
  // $text ""
  LET, 1, string_5, 1, var_267_1_text,
  // for_each items
  var_for_each, 3, LOCAL(1), lambda_13, lambda_14, TAIL_CALL,
  POS(267, 3),
  POS(268, 3)
};

static TAB_NUM t_lambda_13[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 269_3_item
  // item()
  LOCAL(2), 0, 1, LOCAL(1),
  // append &text item()
  var_append, 2, var_267_1_text, LOCAL(1), 1, var_267_1_text,
  // next
  var_next, 0, TAIL_CALL,
  POS(270, 20),
  POS(270, 7),
  POS(271, 7)
};

static TAB_NUM t_lambda_14[] = {
  0, // locals
  0, // parameters
  //  text
  LET, 1, var_267_1_text, TAIL_CALL,
  POS(272, 7)
};

static TAB_NUM t_func_html__FROM_TO[] = {
  2, // locals
  3, // parameters
  LOCAL(1), // 276_0_from
  LOCAL(2), // 277_0_to
  var_278_0_body,
  // $text ""
  LET, 1, string_5, 1, var_280_1_text,
  // from_to from to
  var_from_to, 4, LOCAL(1), LOCAL(2), lambda_15, lambda_16, TAIL_CALL,
  POS(280, 3),
  POS(281, 3)
};

static TAB_NUM t_lambda_15[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 282_3_idx
  // body(idx)
  var_278_0_body, 1, LOCAL(2), 1, LOCAL(1),
  // append &text body(idx)
  var_append, 2, var_280_1_text, LOCAL(1), 1, var_280_1_text,
  // next
  var_next, 0, TAIL_CALL,
  POS(283, 20),
  POS(283, 7),
  POS(284, 7)
};

static TAB_NUM t_lambda_16[] = {
  0, // locals
  0, // parameters
  //  text
  LET, 1, var_280_1_text, TAIL_CALL,
  POS(285, 7)
};

static TAB_NUM t_func_html__FOR_EACH[] = {
  2, // locals
  2, // parameters
  var_289_0_items,
  var_290_0_body,
  // $text ""
  LET, 1, string_5, 1, var_292_1_text,
  // parameter_count_of(body) == 2:
  var_parameter_count_of, 1, var_290_0_body, 1, LOCAL(1),
  // parameter_count_of(body) == 2:
  var_std__equal, 2, LOCAL(1), num_2, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_17, lambda_20, TAIL_CALL,
  POS(292, 3),
  POS(294, 5),
  POS(294, 5),
  POS(293, 3)
};

static TAB_NUM t_lambda_17[] = {
  0, // locals
  0, // parameters
  // for_each items
  var_for_each, 3, var_289_0_items, lambda_18, lambda_19, TAIL_CALL,
  POS(295, 7)
};

static TAB_NUM t_lambda_18[] = {
  3, // locals
  2, // parameters
  LOCAL(2), // 296_3_key
  LOCAL(3), // 296_7_value
  // body(key value)
  var_290_0_body, 2, LOCAL(2), LOCAL(3), 1, LOCAL(1),
  // append &text body(key value)
  var_append, 2, var_292_1_text, LOCAL(1), 1, var_292_1_text,
  // next
  var_next, 0, TAIL_CALL,
  POS(297, 24),
  POS(297, 11),
  POS(298, 11)
};

static TAB_NUM t_lambda_19[] = {
  0, // locals
  0, // parameters
  //  text
  LET, 1, var_292_1_text, TAIL_CALL,
  POS(299, 11)
};

static TAB_NUM t_lambda_20[] = {
  0, // locals
  0, // parameters
  // for_each items
  var_for_each, 3, var_289_0_items, lambda_21, lambda_22, TAIL_CALL,
  POS(301, 7)
};

static TAB_NUM t_lambda_21[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 302_3_item
  // body(item)
  var_290_0_body, 1, LOCAL(2), 1, LOCAL(1),
  // append &text body(item)
  var_append, 2, var_292_1_text, LOCAL(1), 1, var_292_1_text,
  // next
  var_next, 0, TAIL_CALL,
  POS(303, 24),
  POS(303, 11),
  POS(304, 11)
};

static TAB_NUM t_lambda_22[] = {
  0, // locals
  0, // parameters
  //  text
  LET, 1, var_292_1_text, TAIL_CALL,
  POS(305, 11)
};

static FUNKY_CONSTANT constants_table[] = {
  {FLT_FUNCTION, 0, {.tfunc = t_func_inline_tag}},
  {FLT_STRING_8, 1, {.str_8 = "<"}},
  {FLT_STRING_8, 1, {.str_8 = ">"}},
  {FLT_STRING_8, 2, {.str_8 = "</"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_single_line_tag}},
  {FLT_STRING_8, 2, {.str_8 = ">\012"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_multi_line_tag}},
  {FLT_CHARACTER, 0, {.value = 60}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1}},
  {FLT_CHARACTER, 0, {.value = 10}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2}},
  {FLT_STRING_8, 0, {.str_8 = ""}},
  {FLT_CHARACTER, 0, {.value = 62}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_3}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_4}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_extract_options}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_collect_output}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_5}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_6}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_7}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_8}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_collect_options}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_9}},
  {FLT_STRING_8, 1, {.str_8 = " "}},
  {FLT_STRING_8, 2, {.str_8 = "=\042"}},
  {FLT_STRING_8, 1, {.str_8 = "\042"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_10}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_emit_simple}},
  {FLT_STRING_8, 3, {.str_8 = "/>\012"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_emit_single_line}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_11}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_12}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_emit_inline}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_emit_multi_line}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_html__HTML}},
  {FLT_STRING_8, 4, {.str_8 = "html"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_html__HEAD}},
  {FLT_STRING_8, 4, {.str_8 = "head"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_html__BODY}},
  {FLT_STRING_8, 4, {.str_8 = "body"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_html__TITLE}},
  {FLT_STRING_8, 5, {.str_8 = "title"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_html__STYLE}},
  {FLT_STRING_8, 5, {.str_8 = "style"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_html__LINK}},
  {FLT_STRING_8, 4, {.str_8 = "link"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_html__H1}},
  {FLT_STRING_8, 2, {.str_8 = "h1"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_html__H2}},
  {FLT_STRING_8, 2, {.str_8 = "h2"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_html__H3}},
  {FLT_STRING_8, 2, {.str_8 = "h3"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_html__H4}},
  {FLT_STRING_8, 2, {.str_8 = "h4"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_html__H5}},
  {FLT_STRING_8, 2, {.str_8 = "h5"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_html__H6}},
  {FLT_STRING_8, 2, {.str_8 = "h6"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_html__P}},
  {FLT_STRING_8, 1, {.str_8 = "p"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_html__DIV}},
  {FLT_STRING_8, 3, {.str_8 = "div"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_html__TABLE}},
  {FLT_STRING_8, 5, {.str_8 = "table"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_html__TBODY}},
  {FLT_STRING_8, 5, {.str_8 = "tbody"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_html__TR}},
  {FLT_STRING_8, 2, {.str_8 = "tr"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_html__TH}},
  {FLT_STRING_8, 2, {.str_8 = "th"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_html__TD}},
  {FLT_STRING_8, 2, {.str_8 = "td"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_html__DL}},
  {FLT_STRING_8, 2, {.str_8 = "dl"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_html__DT}},
  {FLT_STRING_8, 2, {.str_8 = "dt"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_html__DD}},
  {FLT_STRING_8, 2, {.str_8 = "dd"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_html__PRE}},
  {FLT_STRING_8, 3, {.str_8 = "pre"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_html__A}},
  {FLT_STRING_8, 1, {.str_8 = "a"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_html__I}},
  {FLT_STRING_8, 1, {.str_8 = "i"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_html__B}},
  {FLT_STRING_8, 1, {.str_8 = "b"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_html__SPAN}},
  {FLT_STRING_8, 4, {.str_8 = "span"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_html__GROUP}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_13}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_14}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_html__FROM_TO}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_15}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_16}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_html__FOR_EACH}},
  {FLT_POSITIVE_INT64, 0, {.value = 2}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_17}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_18}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_19}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_20}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_21}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_22}}
};

static FUNKY_VARIABLE variables_table[] = {
  {
    FOT_UNKNOWN, 0, 0,
    "string\000std", NULL,
    {.position = POS(25, 6)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "assign\000std", NULL,
    {.position = POS(25, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "has_prefix\000", NULL,
    {.position = POS(38, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if\000", NULL,
    {.position = POS(37, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "has_suffix\000", NULL,
    {.position = POS(43, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "string\000", NULL,
    {.position = POS(32, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_a_key_value_pair\000", NULL,
    {.position = POS(51, 16)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "filter\000", NULL,
    {.position = POS(51, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "54_1_buf\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "56_3_item\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_a_string\000", NULL,
    {.position = POS(59, 16)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "append\000", NULL,
    {.position = POS(57, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "next\000", NULL,
    {.position = POS(62, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "for_each\000", NULL,
    {.position = POS(55, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "66_1_buf\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "79_20_tag\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "80_17_options\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "82_16_buf\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "contains\000", NULL,
    {.position = POS(84, 5)}
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
    "267_1_text\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "FROM_TO\000html", NULL,
    {.const_idx = -func_html__FROM_TO}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "278_0_body\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "280_1_text\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "from_to\000", NULL,
    {.position = POS(281, 3)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "FOR_EACH\000html", NULL,
    {.const_idx = -func_html__FOR_EACH}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "289_0_items\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "290_0_body\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "292_1_text\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "parameter_count_of\000", NULL,
    {.position = POS(294, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "equal\000std", NULL,
    {.position = POS(294, 5)}
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
  .feature_flags = FEAT_POSITIONS,
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
