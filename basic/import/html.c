#include <stddef.h>
#include <stdint.h>

#include "runtime/common.h"
#include "runtime/builtins.h"
#include "runtime/fko.h"
#include "runtime/memory.h"

enum {
  tuple_25_1 = -1,
  func_std__from_html = -2,
  str_area = -3,
  str_base = -4,
  str_br = -5,
  str_col = -6,
  str_embed = -7,
  str_hr = -8,
  str_img = -9,
  str_input = -10,
  str_keygen = -11,
  str_link = -12,
  str_meta = -13,
  str_param = -14,
  str_source = -15,
  str_track = -16,
  str_wbr = -17,
  lambda_1 = -18,
  lambda_2 = -19,
  lambda_3 = -20,
  str_Unexpected_input = -21,
  func_parse_html = -22,
  num_1 = -23,
  func_parse_element = -24,
  lambda_loop = -25,
  lambda_4 = -26,
  str_Unexpected_end_o = -27,
  string_1 = -28,
  lambda_5 = -29,
  chr_32 = -30,
  lambda_6 = -31,
  lambda_7 = -32,
  chr_60 = -33,
  lambda_8 = -34,
  lambda_9 = -35,
  chr_62 = -36,
  lambda_10 = -37,
  minus_num_1 = -38,
  str_Expected = -39,
  lambda_11 = -40,
  lambda_12 = -41,
  lambda_13 = -42,
  lambda_14 = -43,
  lambda_15 = -44,
  chr_47 = -45,
  lambda_16 = -46,
  str_li = -47,
  str_p = -48,
  sequence_104_34 = -49,
  lambda_17 = -50,
  lambda_18 = -51,
  str_Expected_closing = -52,
  lambda_19 = -53,
  num_2 = -54,
  lambda_20 = -55,
  lambda_21 = -56,
  lambda_22 = -57,
  lambda_23 = -58,
  lambda_24 = -59,
  lambda_25 = -60,
  lambda_26 = -61,
  str_Expected_2 = -62,
  func_parse_tag = -63,
  lambda_2_loop = -64,
  lambda_27 = -65,
  lambda_28 = -66,
  lambda_29 = -67,
  lambda_30 = -68,
  lambda_31 = -69,
  func_parse_attributes = -70,
  lambda_3_loop = -71,
  lambda_32 = -72,
  lambda_33 = -73,
  lambda_34 = -74,
  lambda_35 = -75,
  lambda_36 = -76,
  lambda_37 = -77,
  lambda_38 = -78,
  chr_61 = -79,
  lambda_39 = -80,
  lambda_40 = -81,
  func_parse_attribute_name = -82,
  lambda_4_loop = -83,
  lambda_41 = -84,
  lambda_42 = -85,
  lambda_43 = -86,
  lambda_44 = -87,
  lambda_45 = -88,
  lambda_46 = -89,
  func_parse_attribute_value = -90,
  lambda_5_loop = -91,
  lambda_47 = -92,
  lambda_48 = -93,
  chr_34 = -94,
  lambda_49 = -95,
  lambda_6_loop = -96,
  lambda_50 = -97,
  lambda_51 = -98,
  lambda_52 = -99,
  lambda_53 = -100,
  lambda_54 = -101,
  lambda_55 = -102,
  lambda_56 = -103,
  str_Expected_attribu = -104,
  lambda_57 = -105,
  lambda_7_loop = -106,
  lambda_58 = -107,
  lambda_59 = -108,
  lambda_60 = -109,
  lambda_61 = -110,
  lambda_62 = -111,
  func_parse_contents = -112,
  lambda_8_loop = -113,
  lambda_63 = -114,
  lambda_64 = -115,
  lambda_65 = -116,
  lambda_66 = -117,
  lambda_67 = -118,
  lambda_68 = -119,
  lambda_69 = -120,
  lambda_70 = -121,
  func_parse_simple_text = -122,
  lambda_9_loop = -123,
  lambda_71 = -124,
  lambda_72 = -125,
  lambda_73 = -126,
  lambda_74 = -127
};

enum {
  var__START = FIRST_VAR-1,
  var_std_types__html_element, // initialized compound
  var_undefined, // extern
  var_tuple, // extern
  var_std__is_an_html_element, // attribute
  var_std__assign, // extern
  var_is_an_html_element, // extern polymorphic
  var_true, // extern
  var_std_types__object, // extern
  var_false, // extern
  var_is_a_void_element, // derived
  var_std__from_html, // initialized
  var_38_19_text, // dynamic
  var_hash_set, // extern
  var_56_21_element, // dynamic
  var_is_defined, // extern
  var_WHITESPACE, // extern
  var_some, // extern
  var_matches, // extern
  var_std__and, // extern
  var_PARSE_ERROR, // extern
  var_error, // extern
  var_if, // extern
  var_63_15_text, // dynamic
  var_64_4_i, // dynamic
  var_65_4_n, // dynamic
  var_length_of, // extern
  var_range, // extern
  var_std__less, // extern
  var_75_12_chr, // dynamic
  var_std__not, // extern
  var_inc, // extern
  var_next, // extern
  var_std__equal, // extern
  var_84_33_tag, // dynamic
  var_85_45_attributes, // dynamic
  var_std__or, // extern
  var_typed_tuple, // extern
  var_97_28_element, // dynamic
  var_std__plus, // extern
  var_std__sequence, // extern
  var_case, // extern
  var_111_32_bti, // dynamic
  var_plus, // extern
  var_loop, // extern
  var_140_6_s, // dynamic
  var_146_12_chr, // dynamic
  var_std__minus, // extern
  var_155_6_attributes, // dynamic
  var_empty_insert_order_table, // extern
  var_161_12_chr, // dynamic
  var_171_44_name, // dynamic
  var_182_6_s, // dynamic
  var_188_12_chr, // dynamic
  var_202_12_chr, // dynamic
  var_206_16_s, // dynamic
  var_227_20_s, // dynamic
  var_242_21_outer_tag, // dynamic
  var_243_6_contents, // dynamic
  var_empty_list, // extern
  var_has_prefix, // extern
  var_push, // extern
  var_267_6_s, // dynamic
  var__END
};


static TAB_NUM t_func_std__from_html[] = {
  2, // locals
  1, // parameters
  var_38_19_text,
  // !is_a_void_element
  var_hash_set, 15, str_area, str_base, str_br, str_col, str_embed, str_hr, str_img, str_input, str_keygen, str_link, str_meta, str_param, str_source, str_track, str_wbr, 1, var_is_a_void_element,
  // parse_html &text $element
  func_parse_html, 1, var_38_19_text, 2, var_38_19_text, var_56_21_element,
  // is_defined && text .matches. some(WHITESPACE)
  var_is_defined, 1, var_56_21_element, 1, LOCAL(1),
  // is_defined && text .matches. some(WHITESPACE)
  var_std__and, 2, LOCAL(1), lambda_1, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_2, lambda_3, TAIL_CALL,
  POS(39, 3),
  POS(56, 3),
  POS(58, 13),
  POS(58, 13),
  POS(57, 3)
};

static FUNCTION_INFO i_func_std__from_html = {
  t_func_std__from_html, NULL, 5, 0,
  {}
};

static TAB_NUM t_lambda_1[] = {
  2, // locals
  0, // parameters
  // some(WHITESPACE)
  var_some, 1, var_WHITESPACE, 1, LOCAL(1),
  // text .matches. some(WHITESPACE)
  var_matches, 2, var_38_19_text, LOCAL(1), 1, LOCAL(2),
  // text .matches. some(WHITESPACE)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(58, 42),
  POS(58, 27),
  POS(58, 27)
};

static FUNCTION_INFO i_lambda_1 = {
  t_lambda_1, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_2[] = {
  0, // locals
  0, // parameters
  //  element
  LET, 1, var_56_21_element, TAIL_CALL,
  POS(59, 7)
};

static FUNCTION_INFO i_lambda_2 = {
  t_lambda_2, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_3[] = {
  0, // locals
  0, // parameters
  // error PARSE_ERROR "Unexpected input" text
  var_error, 3, var_PARSE_ERROR, str_Unexpected_input, var_38_19_text, TAIL_CALL,
  POS(61, 7)
};

static FUNCTION_INFO i_lambda_3 = {
  t_lambda_3, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_parse_html[] = {
  2, // locals
  1, // parameters
  var_63_15_text,
  // $i 1
  LET, 1, num_1, 1, var_64_4_i,
  // $n length_of(text)
  var_length_of, 1, var_63_15_text, 1, var_65_4_n,
  // parse_element !i $top_level_element
  func_parse_element, 0, 2, var_64_4_i, LOCAL(2),
  // range(text i n) top_level_element
  var_range, 3, var_63_15_text, var_64_4_i, var_65_4_n, 1, LOCAL(1),
  // -> range(text i n) top_level_element
  LET, 2, LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(64, 3),
  POS(65, 3),
  POS(66, 3),
  POS(67, 6),
  POS(67, 3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_parse_html = {
  t_func_parse_html, NULL, 5, 1,
  {"66_21_top_level_element\000"}
};

static TAB_NUM t_func_parse_element[] = {
  0, // locals
  0, // parameters
  // loop:
  var_loop, 1, lambda_loop, TAIL_CALL,
  POS(70, 5)
};

static FUNCTION_INFO i_func_parse_element = {
  t_func_parse_element, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_loop[] = {
  1, // locals
  0, // parameters
  // n
  var_std__less, 2, var_65_4_n, var_64_4_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_4, lambda_5, TAIL_CALL,
  POS(72, 13),
  POS(71, 7)
};

static FUNCTION_INFO i_lambda_loop = {
  t_lambda_loop, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_4[] = {
  0, // locals
  0, // parameters
  // error PARSE_ERROR "Unexpected end of input" ""
  var_error, 3, var_PARSE_ERROR, str_Unexpected_end_o, string_1, TAIL_CALL,
  POS(73, 11)
};

static FUNCTION_INFO i_lambda_4 = {
  t_lambda_4, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_5[] = {
  2, // locals
  0, // parameters
  // $chr text(i)
  var_63_15_text, 1, var_64_4_i, 1, var_75_12_chr,
  //  ':
  var_std__less, 2, chr_32, var_75_12_chr, 1, LOCAL(1),
  //  ':
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_6, lambda_7, TAIL_CALL,
  POS(75, 11),
  POS(77, 21),
  POS(77, 21),
  POS(76, 11)
};

static FUNCTION_INFO i_lambda_5 = {
  t_lambda_5, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_6[] = {
  0, // locals
  0, // parameters
  // inc &i
  var_inc, 1, var_64_4_i, 1, var_64_4_i,
  // next
  var_next, 0, TAIL_CALL,
  POS(78, 15),
  POS(79, 15)
};

static FUNCTION_INFO i_lambda_6 = {
  t_lambda_6, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_7[] = {
  1, // locals
  0, // parameters
  // chr == '<':
  var_std__equal, 2, var_75_12_chr, chr_60, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_8, lambda_24, TAIL_CALL,
  POS(82, 17),
  POS(81, 15)
};

static FUNCTION_INFO i_lambda_7 = {
  t_lambda_7, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_8[] = {
  2, // locals
  0, // parameters
  // inc &i
  var_inc, 1, var_64_4_i, 1, var_64_4_i,
  // parse_tag !i $tag
  func_parse_tag, 0, 2, var_64_4_i, var_84_33_tag,
  // parse_attributes text !i $attributes
  func_parse_attributes, 1, var_63_15_text, 2, var_64_4_i, var_85_45_attributes,
  // n || text(i) != '>'
  var_std__less, 2, var_65_4_n, var_64_4_i, 1, LOCAL(1),
  // n || text(i) != '>'
  var_std__or, 2, LOCAL(1), lambda_9, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_10, lambda_11, TAIL_CALL,
  POS(83, 19),
  POS(84, 19),
  POS(85, 19),
  POS(87, 25),
  POS(87, 25),
  POS(86, 19)
};

static FUNCTION_INFO i_lambda_8 = {
  t_lambda_8, NULL, 6, 0,
  {}
};

static TAB_NUM t_lambda_9[] = {
  3, // locals
  0, // parameters
  // text(i) != '>'
  var_63_15_text, 1, var_64_4_i, 1, LOCAL(1),
  // text(i) != '>'
  var_std__equal, 2, LOCAL(1), chr_62, 1, LOCAL(2),
  // text(i) != '>'
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(i) != '>'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(87, 30),
  POS(87, 30),
  POS(87, 30),
  POS(87, 30)
};

static FUNCTION_INFO i_lambda_9 = {
  t_lambda_9, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_10[] = {
  1, // locals
  0, // parameters
  // range(text i -1)
  var_range, 3, var_63_15_text, var_64_4_i, minus_num_1, 1, LOCAL(1),
  // error PARSE_ERROR "Expected '>'" range(text i -1)
  var_error, 3, var_PARSE_ERROR, str_Expected, LOCAL(1), TAIL_CALL,
  POS(89, 56),
  POS(89, 23)
};

static FUNCTION_INFO i_lambda_10 = {
  t_lambda_10, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_11[] = {
  1, // locals
  0, // parameters
  // inc &i
  var_inc, 1, var_64_4_i, 1, var_64_4_i,
  // is_a_void_element(tag)
  var_is_a_void_element, 1, var_84_33_tag, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_12, lambda_13, TAIL_CALL,
  POS(91, 23),
  POS(93, 25),
  POS(92, 23)
};

static FUNCTION_INFO i_lambda_11 = {
  t_lambda_11, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_12[] = {
  1, // locals
  0, // parameters
  // typed_tuple(std_types::html_element tag attributes undefined)
  var_typed_tuple, 4, var_std_types__html_element, var_84_33_tag, var_85_45_attributes, var_undefined, 1, LOCAL(1),
  //  i typed_tuple(std_types::html_element tag attributes undefined)
  LET, 2, var_64_4_i, LOCAL(1), TAIL_CALL,
  POS(94, 30),
  POS(94, 27)
};

static FUNCTION_INFO i_lambda_12 = {
  t_lambda_12, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_13[] = {
  4, // locals
  0, // parameters
  // parse_contents !i $contents tag
  func_parse_contents, 1, var_84_33_tag, 2, var_64_4_i, LOCAL(4),
  // $element
  var_typed_tuple, 4, var_std_types__html_element, var_84_33_tag, var_85_45_attributes, LOCAL(4), 1, var_97_28_element,
  // i+1 > n || text(i) != '<' || text(i+1) != '/':
  var_std__plus, 2, var_64_4_i, num_1, 1, LOCAL(1),
  // n || text(i) != '<' || text(i+1) != '/':
  var_std__less, 2, var_65_4_n, LOCAL(1), 1, LOCAL(2),
  // n || text(i) != '<' || text(i+1) != '/':
  var_std__or, 2, LOCAL(2), lambda_14, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_16, lambda_19, TAIL_CALL,
  POS(96, 27),
  POS(97, 27),
  POS(102, 29),
  POS(102, 35),
  POS(102, 35),
  POS(101, 27),
  LOCAL(4)
};

static FUNCTION_INFO i_lambda_13 = {
  t_lambda_13, NULL, 6, 1,
  {"96_46_contents\000"}
};

static TAB_NUM t_lambda_14[] = {
  4, // locals
  0, // parameters
  // text(i) != '<' || text(i+1) != '/':
  var_63_15_text, 1, var_64_4_i, 1, LOCAL(1),
  // text(i) != '<' || text(i+1) != '/':
  var_std__equal, 2, LOCAL(1), chr_60, 1, LOCAL(2),
  // text(i) != '<' || text(i+1) != '/':
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(i) != '<' || text(i+1) != '/':
  var_std__or, 2, LOCAL(3), lambda_15, 1, LOCAL(4),
  // text(i) != '<' || text(i+1) != '/':
  LET, 1, LOCAL(4), TAIL_CALL,
  POS(102, 40),
  POS(102, 40),
  POS(102, 40),
  POS(102, 40),
  POS(102, 40)
};

static FUNCTION_INFO i_lambda_14 = {
  t_lambda_14, NULL, 5, 0,
  {}
};

static TAB_NUM t_lambda_15[] = {
  4, // locals
  0, // parameters
  // i+1) != '/':
  var_std__plus, 2, var_64_4_i, num_1, 1, LOCAL(1),
  // text(i+1) != '/':
  var_63_15_text, 1, LOCAL(1), 1, LOCAL(2),
  // text(i+1) != '/':
  var_std__equal, 2, LOCAL(2), chr_47, 1, LOCAL(3),
  // text(i+1) != '/':
  var_std__not, 1, LOCAL(3), 1, LOCAL(4),
  // text(i+1) != '/':
  LET, 1, LOCAL(4), TAIL_CALL,
  POS(102, 63),
  POS(102, 58),
  POS(102, 58),
  POS(102, 58),
  POS(102, 58)
};

static FUNCTION_INFO i_lambda_15 = {
  t_lambda_15, NULL, 5, 0,
  {}
};

static TAB_NUM t_lambda_16[] = {
  0, // locals
  0, // parameters
  // case tag
  var_case, 4, var_84_33_tag, sequence_104_34, lambda_17, lambda_18, TAIL_CALL,
  POS(103, 31)
};

static FUNCTION_INFO i_lambda_16 = {
  t_lambda_16, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_17[] = {
  0, // locals
  0, // parameters
  //  i element
  LET, 2, var_64_4_i, var_97_28_element, TAIL_CALL,
  POS(105, 35)
};

static FUNCTION_INFO i_lambda_17 = {
  t_lambda_17, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_18[] = {
  1, // locals
  0, // parameters
  // range(text i -1)
  var_range, 3, var_63_15_text, var_64_4_i, minus_num_1, 1, LOCAL(1),
  // error PARSE_ERROR
  var_error, 3, var_PARSE_ERROR, str_Expected_closing, LOCAL(1), TAIL_CALL,
  POS(109, 37),
  POS(107, 35)
};

static FUNCTION_INFO i_lambda_18 = {
  t_lambda_18, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_19[] = {
  3, // locals
  0, // parameters
  // $bti i # backtrack position
  LET, 1, var_64_4_i, 1, var_111_32_bti,
  // plus &i 2
  var_plus, 2, var_64_4_i, num_2, 1, var_64_4_i,
  // parse_tag !i $end_tag
  func_parse_tag, 0, 2, var_64_4_i, LOCAL(3),
  // end_tag != tag
  var_std__equal, 2, LOCAL(3), var_84_33_tag, 1, LOCAL(1),
  // end_tag != tag
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_20, lambda_21, TAIL_CALL,
  POS(111, 31),
  POS(112, 31),
  POS(113, 31),
  POS(115, 33),
  POS(115, 33),
  POS(114, 31),
  LOCAL(3)
};

static FUNCTION_INFO i_lambda_19 = {
  t_lambda_19, NULL, 6, 1,
  {"113_45_end_tag\000"}
};

static TAB_NUM t_lambda_20[] = {
  0, // locals
  0, // parameters
  //  bti element
  LET, 2, var_111_32_bti, var_97_28_element, TAIL_CALL,
  POS(116, 35)
};

static FUNCTION_INFO i_lambda_20 = {
  t_lambda_20, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_21[] = {
  3, // locals
  0, // parameters
  // text(i) != '>'
  var_63_15_text, 1, var_64_4_i, 1, LOCAL(1),
  // text(i) != '>'
  var_std__equal, 2, LOCAL(1), chr_62, 1, LOCAL(2),
  // text(i) != '>'
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_22, lambda_23, TAIL_CALL,
  POS(125, 37),
  POS(125, 37),
  POS(125, 37),
  POS(124, 35)
};

static FUNCTION_INFO i_lambda_21 = {
  t_lambda_21, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_22[] = {
  1, // locals
  0, // parameters
  // range(text i -1)
  var_range, 3, var_63_15_text, var_64_4_i, minus_num_1, 1, LOCAL(1),
  // error PARSE_ERROR
  var_error, 3, var_PARSE_ERROR, str_Expected, LOCAL(1), TAIL_CALL,
  POS(129, 41),
  POS(127, 39)
};

static FUNCTION_INFO i_lambda_22 = {
  t_lambda_22, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_23[] = {
  1, // locals
  0, // parameters
  // i+1 element
  var_std__plus, 2, var_64_4_i, num_1, 1, LOCAL(1),
  //  i+1 element
  LET, 2, LOCAL(1), var_97_28_element, TAIL_CALL,
  POS(130, 40),
  POS(130, 39)
};

static FUNCTION_INFO i_lambda_23 = {
  t_lambda_23, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_24[] = {
  2, // locals
  0, // parameters
  //  ':
  var_std__less, 2, chr_32, var_75_12_chr, 1, LOCAL(1),
  //  ':
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_25, lambda_26, TAIL_CALL,
  POS(133, 29),
  POS(133, 29),
  POS(132, 19)
};

static FUNCTION_INFO i_lambda_24 = {
  t_lambda_24, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_25[] = {
  0, // locals
  0, // parameters
  // inc &i
  var_inc, 1, var_64_4_i, 1, var_64_4_i,
  // next
  var_next, 0, TAIL_CALL,
  POS(134, 23),
  POS(135, 23)
};

static FUNCTION_INFO i_lambda_25 = {
  t_lambda_25, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_26[] = {
  1, // locals
  0, // parameters
  // range(text i -1)
  var_range, 3, var_63_15_text, var_64_4_i, minus_num_1, 1, LOCAL(1),
  // error PARSE_ERROR "Expected '<'" range(text i -1)
  var_error, 3, var_PARSE_ERROR, str_Expected_2, LOCAL(1), TAIL_CALL,
  POS(137, 56),
  POS(137, 23)
};

static FUNCTION_INFO i_lambda_26 = {
  t_lambda_26, NULL, 2, 0,
  {}
};

static TAB_NUM t_func_parse_tag[] = {
  0, // locals
  0, // parameters
  // $s i
  LET, 1, var_64_4_i, 1, var_140_6_s,
  // loop:
  var_loop, 1, lambda_2_loop, TAIL_CALL,
  POS(140, 5),
  POS(141, 5)
};

static FUNCTION_INFO i_func_parse_tag = {
  t_func_parse_tag, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_2_loop[] = {
  1, // locals
  0, // parameters
  // n:
  var_std__less, 2, var_65_4_n, var_64_4_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_27, lambda_28, TAIL_CALL,
  POS(143, 13),
  POS(142, 7)
};

static FUNCTION_INFO i_lambda_2_loop = {
  t_lambda_2_loop, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_27[] = {
  1, // locals
  0, // parameters
  // range(text s -1)
  var_range, 3, var_63_15_text, var_140_6_s, minus_num_1, 1, LOCAL(1),
  // error PARSE_ERROR "Expected '>'" range(text s -1)
  var_error, 3, var_PARSE_ERROR, str_Expected, LOCAL(1), TAIL_CALL,
  POS(144, 44),
  POS(144, 11)
};

static FUNCTION_INFO i_lambda_27 = {
  t_lambda_27, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_28[] = {
  3, // locals
  0, // parameters
  // $chr text(i)
  var_63_15_text, 1, var_64_4_i, 1, var_146_12_chr,
  //  ' || chr == '>'
  var_std__less, 2, chr_32, var_146_12_chr, 1, LOCAL(1),
  //  ' || chr == '>'
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  //  ' || chr == '>'
  var_std__or, 2, LOCAL(2), lambda_29, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_30, lambda_31, TAIL_CALL,
  POS(146, 11),
  POS(148, 21),
  POS(148, 21),
  POS(148, 21),
  POS(147, 11)
};

static FUNCTION_INFO i_lambda_28 = {
  t_lambda_28, NULL, 5, 0,
  {}
};

static TAB_NUM t_lambda_29[] = {
  1, // locals
  0, // parameters
  // chr == '>'
  var_std__equal, 2, var_146_12_chr, chr_62, 1, LOCAL(1),
  // chr == '>'
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(148, 27),
  POS(148, 27)
};

static FUNCTION_INFO i_lambda_29 = {
  t_lambda_29, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_30[] = {
  2, // locals
  0, // parameters
  // i-1)
  var_std__minus, 2, var_64_4_i, num_1, 1, LOCAL(1),
  // range(text s i-1)
  var_range, 3, var_63_15_text, var_140_6_s, LOCAL(1), 1, LOCAL(2),
  //  i range(text s i-1)
  LET, 2, var_64_4_i, LOCAL(2), TAIL_CALL,
  POS(149, 31),
  POS(149, 18),
  POS(149, 15)
};

static FUNCTION_INFO i_lambda_30 = {
  t_lambda_30, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_31[] = {
  0, // locals
  0, // parameters
  // inc &i
  var_inc, 1, var_64_4_i, 1, var_64_4_i,
  // next
  var_next, 0, TAIL_CALL,
  POS(151, 15),
  POS(152, 15)
};

static FUNCTION_INFO i_lambda_31 = {
  t_lambda_31, NULL, 2, 0,
  {}
};

static TAB_NUM t_func_parse_attributes[] = {
  0, // locals
  0, // parameters
  // $attributes empty_insert_order_table
  LET, 1, var_empty_insert_order_table, 1, var_155_6_attributes,
  // loop:
  var_loop, 1, lambda_3_loop, TAIL_CALL,
  POS(155, 5),
  POS(156, 5)
};

static FUNCTION_INFO i_func_parse_attributes = {
  t_func_parse_attributes, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_3_loop[] = {
  1, // locals
  0, // parameters
  // n
  var_std__less, 2, var_65_4_n, var_64_4_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_32, lambda_33, TAIL_CALL,
  POS(158, 13),
  POS(157, 7)
};

static FUNCTION_INFO i_lambda_3_loop = {
  t_lambda_3_loop, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_32[] = {
  0, // locals
  0, // parameters
  //  i attributes
  LET, 2, var_64_4_i, var_155_6_attributes, TAIL_CALL,
  POS(159, 11)
};

static FUNCTION_INFO i_lambda_32 = {
  t_lambda_32, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_33[] = {
  1, // locals
  0, // parameters
  // $chr text(i)
  var_63_15_text, 1, var_64_4_i, 1, var_161_12_chr,
  // chr == '>'
  var_std__equal, 2, var_161_12_chr, chr_62, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_34, lambda_35, TAIL_CALL,
  POS(161, 11),
  POS(163, 13),
  POS(162, 11)
};

static FUNCTION_INFO i_lambda_33 = {
  t_lambda_33, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_34[] = {
  0, // locals
  0, // parameters
  //  i attributes
  LET, 2, var_64_4_i, var_155_6_attributes, TAIL_CALL,
  POS(164, 15)
};

static FUNCTION_INFO i_lambda_34 = {
  t_lambda_34, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_35[] = {
  2, // locals
  0, // parameters
  //  ':
  var_std__less, 2, chr_32, var_161_12_chr, 1, LOCAL(1),
  //  ':
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_36, lambda_37, TAIL_CALL,
  POS(167, 25),
  POS(167, 25),
  POS(166, 15)
};

static FUNCTION_INFO i_lambda_35 = {
  t_lambda_35, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_36[] = {
  0, // locals
  0, // parameters
  // inc &i
  var_inc, 1, var_64_4_i, 1, var_64_4_i,
  // next
  var_next, 0, TAIL_CALL,
  POS(168, 19),
  POS(169, 19)
};

static FUNCTION_INFO i_lambda_36 = {
  t_lambda_36, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_37[] = {
  2, // locals
  0, // parameters
  // parse_attribute_name !i $name
  func_parse_attribute_name, 0, 2, var_64_4_i, var_171_44_name,
  // n || text(i) != '='
  var_std__less, 2, var_65_4_n, var_64_4_i, 1, LOCAL(1),
  // n || text(i) != '='
  var_std__or, 2, LOCAL(1), lambda_38, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_39, lambda_40, TAIL_CALL,
  POS(171, 19),
  POS(173, 25),
  POS(173, 25),
  POS(172, 19)
};

static FUNCTION_INFO i_lambda_37 = {
  t_lambda_37, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_38[] = {
  3, // locals
  0, // parameters
  // text(i) != '='
  var_63_15_text, 1, var_64_4_i, 1, LOCAL(1),
  // text(i) != '='
  var_std__equal, 2, LOCAL(1), chr_61, 1, LOCAL(2),
  // text(i) != '='
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(i) != '='
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(173, 30),
  POS(173, 30),
  POS(173, 30),
  POS(173, 30)
};

static FUNCTION_INFO i_lambda_38 = {
  t_lambda_38, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_39[] = {
  0, // locals
  0, // parameters
  //  i undefined
  LET, 2, var_64_4_i, var_undefined, TAIL_CALL,
  POS(174, 23)
};

static FUNCTION_INFO i_lambda_39 = {
  t_lambda_39, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_40[] = {
  1, // locals
  0, // parameters
  // inc &i
  var_inc, 1, var_64_4_i, 1, var_64_4_i,
  // parse_attribute_value !i $value
  func_parse_attribute_value, 0, 2, var_64_4_i, LOCAL(1),
  // attributes(name) value
  var_155_6_attributes, 2, var_171_44_name, LOCAL(1), 1, var_155_6_attributes,
  // next
  var_next, 0, TAIL_CALL,
  POS(176, 23),
  POS(177, 23),
  POS(178, 24),
  POS(179, 23),
  LOCAL(1)
};

static FUNCTION_INFO i_lambda_40 = {
  t_lambda_40, NULL, 4, 1,
  {"177_49_value\000"}
};

static TAB_NUM t_func_parse_attribute_name[] = {
  0, // locals
  0, // parameters
  // $s i
  LET, 1, var_64_4_i, 1, var_182_6_s,
  // loop:
  var_loop, 1, lambda_4_loop, TAIL_CALL,
  POS(182, 5),
  POS(183, 5)
};

static FUNCTION_INFO i_func_parse_attribute_name = {
  t_func_parse_attribute_name, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_4_loop[] = {
  1, // locals
  0, // parameters
  // n:
  var_std__less, 2, var_65_4_n, var_64_4_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_41, lambda_42, TAIL_CALL,
  POS(185, 13),
  POS(184, 7)
};

static FUNCTION_INFO i_lambda_4_loop = {
  t_lambda_4_loop, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_41[] = {
  1, // locals
  0, // parameters
  // range(text s -1)
  var_range, 3, var_63_15_text, var_182_6_s, minus_num_1, 1, LOCAL(1),
  // error PARSE_ERROR "Unexpected end of input" range(text s -1)
  var_error, 3, var_PARSE_ERROR, str_Unexpected_end_o, LOCAL(1), TAIL_CALL,
  POS(186, 55),
  POS(186, 11)
};

static FUNCTION_INFO i_lambda_41 = {
  t_lambda_41, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_42[] = {
  3, // locals
  0, // parameters
  // $chr text(i)
  var_63_15_text, 1, var_64_4_i, 1, var_188_12_chr,
  //  ' || chr == '=' || chr == '>'
  var_std__less, 2, chr_32, var_188_12_chr, 1, LOCAL(1),
  //  ' || chr == '=' || chr == '>'
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  //  ' || chr == '=' || chr == '>'
  var_std__or, 2, LOCAL(2), lambda_43, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_45, lambda_46, TAIL_CALL,
  POS(188, 11),
  POS(190, 21),
  POS(190, 21),
  POS(190, 21),
  POS(189, 11)
};

static FUNCTION_INFO i_lambda_42 = {
  t_lambda_42, NULL, 5, 0,
  {}
};

static TAB_NUM t_lambda_43[] = {
  2, // locals
  0, // parameters
  // chr == '=' || chr == '>'
  var_std__equal, 2, var_188_12_chr, chr_61, 1, LOCAL(1),
  // chr == '=' || chr == '>'
  var_std__or, 2, LOCAL(1), lambda_44, 1, LOCAL(2),
  // chr == '=' || chr == '>'
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(190, 27),
  POS(190, 27),
  POS(190, 27)
};

static FUNCTION_INFO i_lambda_43 = {
  t_lambda_43, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_44[] = {
  1, // locals
  0, // parameters
  // chr == '>'
  var_std__equal, 2, var_188_12_chr, chr_62, 1, LOCAL(1),
  // chr == '>'
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(190, 41),
  POS(190, 41)
};

static FUNCTION_INFO i_lambda_44 = {
  t_lambda_44, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_45[] = {
  2, // locals
  0, // parameters
  // i-1)
  var_std__minus, 2, var_64_4_i, num_1, 1, LOCAL(1),
  // range(text s i-1)
  var_range, 3, var_63_15_text, var_182_6_s, LOCAL(1), 1, LOCAL(2),
  //  i range(text s i-1)
  LET, 2, var_64_4_i, LOCAL(2), TAIL_CALL,
  POS(191, 31),
  POS(191, 18),
  POS(191, 15)
};

static FUNCTION_INFO i_lambda_45 = {
  t_lambda_45, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_46[] = {
  0, // locals
  0, // parameters
  // inc &i
  var_inc, 1, var_64_4_i, 1, var_64_4_i,
  // next
  var_next, 0, TAIL_CALL,
  POS(193, 15),
  POS(194, 15)
};

static FUNCTION_INFO i_lambda_46 = {
  t_lambda_46, NULL, 2, 0,
  {}
};

static TAB_NUM t_func_parse_attribute_value[] = {
  0, // locals
  0, // parameters
  // loop:
  var_loop, 1, lambda_5_loop, TAIL_CALL,
  POS(197, 5)
};

static FUNCTION_INFO i_func_parse_attribute_value = {
  t_func_parse_attribute_value, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_5_loop[] = {
  1, // locals
  0, // parameters
  // n:
  var_std__less, 2, var_65_4_n, var_64_4_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_47, lambda_48, TAIL_CALL,
  POS(199, 13),
  POS(198, 7)
};

static FUNCTION_INFO i_lambda_5_loop = {
  t_lambda_5_loop, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_47[] = {
  1, // locals
  0, // parameters
  // range(text i -1)
  var_range, 3, var_63_15_text, var_64_4_i, minus_num_1, 1, LOCAL(1),
  // error PARSE_ERROR "Unexpected end of input" range(text i -1)
  var_error, 3, var_PARSE_ERROR, str_Unexpected_end_o, LOCAL(1), TAIL_CALL,
  POS(200, 55),
  POS(200, 11)
};

static FUNCTION_INFO i_lambda_47 = {
  t_lambda_47, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_48[] = {
  1, // locals
  0, // parameters
  // $chr text(i)
  var_63_15_text, 1, var_64_4_i, 1, var_202_12_chr,
  // chr == '@quot;':
  var_std__equal, 2, var_202_12_chr, chr_34, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_49, lambda_54, TAIL_CALL,
  POS(202, 11),
  POS(204, 13),
  POS(203, 11)
};

static FUNCTION_INFO i_lambda_48 = {
  t_lambda_48, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_49[] = {
  0, // locals
  0, // parameters
  // inc &i
  var_inc, 1, var_64_4_i, 1, var_64_4_i,
  // $s i
  LET, 1, var_64_4_i, 1, var_206_16_s,
  // loop:
  var_loop, 1, lambda_6_loop, TAIL_CALL,
  POS(205, 15),
  POS(206, 15),
  POS(207, 15)
};

static FUNCTION_INFO i_lambda_49 = {
  t_lambda_49, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_6_loop[] = {
  1, // locals
  0, // parameters
  // n:
  var_std__less, 2, var_65_4_n, var_64_4_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_50, lambda_51, TAIL_CALL,
  POS(209, 23),
  POS(208, 17)
};

static FUNCTION_INFO i_lambda_6_loop = {
  t_lambda_6_loop, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_50[] = {
  1, // locals
  0, // parameters
  // range(text i -1)
  var_range, 3, var_63_15_text, var_64_4_i, minus_num_1, 1, LOCAL(1),
  // error PARSE_ERROR "Unexpected end of input" range(text i -1)
  var_error, 3, var_PARSE_ERROR, str_Unexpected_end_o, LOCAL(1), TAIL_CALL,
  POS(210, 65),
  POS(210, 21)
};

static FUNCTION_INFO i_lambda_50 = {
  t_lambda_50, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_51[] = {
  1, // locals
  0, // parameters
  // !chr text(i)
  var_63_15_text, 1, var_64_4_i, 1, var_202_12_chr,
  // chr == '@quot;'
  var_std__equal, 2, var_202_12_chr, chr_34, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_52, lambda_53, TAIL_CALL,
  POS(212, 21),
  POS(214, 23),
  POS(213, 21)
};

static FUNCTION_INFO i_lambda_51 = {
  t_lambda_51, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_52[] = {
  3, // locals
  0, // parameters
  // i+1 range(text s i-1)
  var_std__plus, 2, var_64_4_i, num_1, 1, LOCAL(1),
  // i-1)
  var_std__minus, 2, var_64_4_i, num_1, 1, LOCAL(2),
  // range(text s i-1)
  var_range, 3, var_63_15_text, var_206_16_s, LOCAL(2), 1, LOCAL(3),
  //  i+1 range(text s i-1)
  LET, 2, LOCAL(1), LOCAL(3), TAIL_CALL,
  POS(215, 26),
  POS(215, 43),
  POS(215, 30),
  POS(215, 25)
};

static FUNCTION_INFO i_lambda_52 = {
  t_lambda_52, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_53[] = {
  0, // locals
  0, // parameters
  // inc &i
  var_inc, 1, var_64_4_i, 1, var_64_4_i,
  // next
  var_next, 0, TAIL_CALL,
  POS(217, 25),
  POS(218, 25)
};

static FUNCTION_INFO i_lambda_53 = {
  t_lambda_53, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_54[] = {
  0, // locals
  0, // parameters
  // case chr
  var_case, 6, var_202_12_chr, chr_32, lambda_55, chr_62, lambda_56, lambda_57, TAIL_CALL,
  POS(220, 15)
};

static FUNCTION_INFO i_lambda_54 = {
  t_lambda_54, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_55[] = {
  0, // locals
  0, // parameters
  // inc &i
  var_inc, 1, var_64_4_i, 1, var_64_4_i,
  // next
  var_next, 0, TAIL_CALL,
  POS(222, 19),
  POS(223, 19)
};

static FUNCTION_INFO i_lambda_55 = {
  t_lambda_55, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_56[] = {
  1, // locals
  0, // parameters
  // range(text i -1)
  var_range, 3, var_63_15_text, var_64_4_i, minus_num_1, 1, LOCAL(1),
  // error PARSE_ERROR "Expected attribute value" range(text i -1)
  var_error, 3, var_PARSE_ERROR, str_Expected_attribu, LOCAL(1), TAIL_CALL,
  POS(225, 64),
  POS(225, 19)
};

static FUNCTION_INFO i_lambda_56 = {
  t_lambda_56, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_57[] = {
  0, // locals
  0, // parameters
  // $s i
  LET, 1, var_64_4_i, 1, var_227_20_s,
  // inc &i
  var_inc, 1, var_64_4_i, 1, var_64_4_i,
  // loop:
  var_loop, 1, lambda_7_loop, TAIL_CALL,
  POS(227, 19),
  POS(228, 19),
  POS(229, 19)
};

static FUNCTION_INFO i_lambda_57 = {
  t_lambda_57, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_7_loop[] = {
  1, // locals
  0, // parameters
  // n
  var_std__less, 2, var_65_4_n, var_64_4_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_58, lambda_59, TAIL_CALL,
  POS(231, 27),
  POS(230, 21)
};

static FUNCTION_INFO i_lambda_7_loop = {
  t_lambda_7_loop, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_58[] = {
  2, // locals
  0, // parameters
  // i-1)
  var_std__minus, 2, var_64_4_i, num_1, 1, LOCAL(1),
  // range(text s i-1)
  var_range, 3, var_63_15_text, var_227_20_s, LOCAL(1), 1, LOCAL(2),
  //  i range(text s i-1)
  LET, 2, var_64_4_i, LOCAL(2), TAIL_CALL,
  POS(232, 41),
  POS(232, 28),
  POS(232, 25)
};

static FUNCTION_INFO i_lambda_58 = {
  t_lambda_58, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_59[] = {
  3, // locals
  0, // parameters
  // !chr text(i)
  var_63_15_text, 1, var_64_4_i, 1, var_202_12_chr,
  //  ' || chr == '>'
  var_std__less, 2, chr_32, var_202_12_chr, 1, LOCAL(1),
  //  ' || chr == '>'
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  //  ' || chr == '>'
  var_std__or, 2, LOCAL(2), lambda_60, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_61, lambda_62, TAIL_CALL,
  POS(234, 25),
  POS(236, 35),
  POS(236, 35),
  POS(236, 35),
  POS(235, 25)
};

static FUNCTION_INFO i_lambda_59 = {
  t_lambda_59, NULL, 5, 0,
  {}
};

static TAB_NUM t_lambda_60[] = {
  1, // locals
  0, // parameters
  // chr == '>'
  var_std__equal, 2, var_202_12_chr, chr_62, 1, LOCAL(1),
  // chr == '>'
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(236, 41),
  POS(236, 41)
};

static FUNCTION_INFO i_lambda_60 = {
  t_lambda_60, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_61[] = {
  2, // locals
  0, // parameters
  // i-1)
  var_std__minus, 2, var_64_4_i, num_1, 1, LOCAL(1),
  // range(text s i-1)
  var_range, 3, var_63_15_text, var_227_20_s, LOCAL(1), 1, LOCAL(2),
  //  i range(text s i-1)
  LET, 2, var_64_4_i, LOCAL(2), TAIL_CALL,
  POS(237, 45),
  POS(237, 32),
  POS(237, 29)
};

static FUNCTION_INFO i_lambda_61 = {
  t_lambda_61, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_62[] = {
  0, // locals
  0, // parameters
  // inc &i
  var_inc, 1, var_64_4_i, 1, var_64_4_i,
  // next
  var_next, 0, TAIL_CALL,
  POS(239, 29),
  POS(240, 29)
};

static FUNCTION_INFO i_lambda_62 = {
  t_lambda_62, NULL, 2, 0,
  {}
};

static TAB_NUM t_func_parse_contents[] = {
  0, // locals
  1, // parameters
  var_242_21_outer_tag,
  // $contents empty_list
  LET, 1, var_empty_list, 1, var_243_6_contents,
  // loop:
  var_loop, 1, lambda_8_loop, TAIL_CALL,
  POS(243, 5),
  POS(244, 5)
};

static FUNCTION_INFO i_func_parse_contents = {
  t_func_parse_contents, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_8_loop[] = {
  1, // locals
  0, // parameters
  // n
  var_std__less, 2, var_65_4_n, var_64_4_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_63, lambda_64, TAIL_CALL,
  POS(246, 13),
  POS(245, 7)
};

static FUNCTION_INFO i_lambda_8_loop = {
  t_lambda_8_loop, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_63[] = {
  0, // locals
  0, // parameters
  //  i contents
  LET, 2, var_64_4_i, var_243_6_contents, TAIL_CALL,
  POS(247, 11)
};

static FUNCTION_INFO i_lambda_63 = {
  t_lambda_63, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_64[] = {
  2, // locals
  0, // parameters
  // $chr text(i)
  var_63_15_text, 1, var_64_4_i, 1, LOCAL(2),
  // chr == '<':
  var_std__equal, 2, LOCAL(2), chr_60, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_65, lambda_70, TAIL_CALL,
  POS(249, 11),
  POS(251, 13),
  POS(250, 11),
  LOCAL(2)
};

static FUNCTION_INFO i_lambda_64 = {
  t_lambda_64, NULL, 3, 1,
  {"249_12_chr\000"}
};

static TAB_NUM t_lambda_65[] = {
  3, // locals
  0, // parameters
  // i+1 < n
  var_std__plus, 2, var_64_4_i, num_1, 1, LOCAL(1),
  // i+1 < n
  var_std__less, 2, LOCAL(1), var_65_4_n, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_66, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_68, lambda_69, TAIL_CALL,
  POS(254, 19),
  POS(254, 19),
  POS(253, 19),
  POS(252, 15)
};

static FUNCTION_INFO i_lambda_65 = {
  t_lambda_65, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_66[] = {
  4, // locals
  0, // parameters
  // i+1) == '/' || range(text i+1 -1) .has_prefix. outer_tag
  var_std__plus, 2, var_64_4_i, num_1, 1, LOCAL(1),
  // text(i+1) == '/' || range(text i+1 -1) .has_prefix. outer_tag
  var_63_15_text, 1, LOCAL(1), 1, LOCAL(2),
  // text(i+1) == '/' || range(text i+1 -1) .has_prefix. outer_tag
  var_std__equal, 2, LOCAL(2), chr_47, 1, LOCAL(3),
  // text(i+1) == '/' || range(text i+1 -1) .has_prefix. outer_tag
  var_std__or, 2, LOCAL(3), lambda_67, 1, LOCAL(4),
  // text(i+1) == '/' || range(text i+1 -1) .has_prefix. outer_tag
  LET, 1, LOCAL(4), TAIL_CALL,
  POS(255, 24),
  POS(255, 19),
  POS(255, 19),
  POS(255, 19),
  POS(255, 19)
};

static FUNCTION_INFO i_lambda_66 = {
  t_lambda_66, NULL, 5, 0,
  {}
};

static TAB_NUM t_lambda_67[] = {
  3, // locals
  0, // parameters
  // i+1 -1) .has_prefix. outer_tag
  var_std__plus, 2, var_64_4_i, num_1, 1, LOCAL(1),
  // range(text i+1 -1) .has_prefix. outer_tag
  var_range, 3, var_63_15_text, LOCAL(1), minus_num_1, 1, LOCAL(2),
  // range(text i+1 -1) .has_prefix. outer_tag
  var_has_prefix, 2, LOCAL(2), var_242_21_outer_tag, 1, LOCAL(3),
  // range(text i+1 -1) .has_prefix. outer_tag
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(255, 50),
  POS(255, 39),
  POS(255, 39),
  POS(255, 39)
};

static FUNCTION_INFO i_lambda_67 = {
  t_lambda_67, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_68[] = {
  0, // locals
  0, // parameters
  //  i contents
  LET, 2, var_64_4_i, var_243_6_contents, TAIL_CALL,
  POS(256, 19)
};

static FUNCTION_INFO i_lambda_68 = {
  t_lambda_68, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_69[] = {
  1, // locals
  0, // parameters
  // parse_element !i $element
  func_parse_element, 0, 2, var_64_4_i, LOCAL(1),
  // push &contents element
  var_push, 2, var_243_6_contents, LOCAL(1), 1, var_243_6_contents,
  // next
  var_next, 0, TAIL_CALL,
  POS(258, 19),
  POS(259, 19),
  POS(260, 19),
  LOCAL(1)
};

static FUNCTION_INFO i_lambda_69 = {
  t_lambda_69, NULL, 3, 1,
  {"258_37_element\000"}
};

static TAB_NUM t_lambda_70[] = {
  1, // locals
  0, // parameters
  // parse_simple_text !i $simple_text
  func_parse_simple_text, 0, 2, var_64_4_i, LOCAL(1),
  // push &contents simple_text
  var_push, 2, var_243_6_contents, LOCAL(1), 1, var_243_6_contents,
  // next
  var_next, 0, TAIL_CALL,
  POS(262, 15),
  POS(263, 15),
  POS(264, 15),
  LOCAL(1)
};

static FUNCTION_INFO i_lambda_70 = {
  t_lambda_70, NULL, 3, 1,
  {"262_37_simple_text\000"}
};

static TAB_NUM t_func_parse_simple_text[] = {
  0, // locals
  0, // parameters
  // $s i
  LET, 1, var_64_4_i, 1, var_267_6_s,
  // loop:
  var_loop, 1, lambda_9_loop, TAIL_CALL,
  POS(267, 5),
  POS(268, 5)
};

static FUNCTION_INFO i_func_parse_simple_text = {
  t_func_parse_simple_text, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_9_loop[] = {
  1, // locals
  0, // parameters
  // n
  var_std__less, 2, var_65_4_n, var_64_4_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_71, lambda_72, TAIL_CALL,
  POS(270, 13),
  POS(269, 7)
};

static FUNCTION_INFO i_lambda_9_loop = {
  t_lambda_9_loop, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_71[] = {
  2, // locals
  0, // parameters
  // i-1)
  var_std__minus, 2, var_64_4_i, num_1, 1, LOCAL(1),
  // range(text s i-1)
  var_range, 3, var_63_15_text, var_267_6_s, LOCAL(1), 1, LOCAL(2),
  //  i range(text s i-1)
  LET, 2, var_64_4_i, LOCAL(2), TAIL_CALL,
  POS(271, 27),
  POS(271, 14),
  POS(271, 11)
};

static FUNCTION_INFO i_lambda_71 = {
  t_lambda_71, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_72[] = {
  2, // locals
  0, // parameters
  // $chr text(i)
  var_63_15_text, 1, var_64_4_i, 1, LOCAL(2),
  // chr == '<':
  var_std__equal, 2, LOCAL(2), chr_60, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_73, lambda_74, TAIL_CALL,
  POS(273, 11),
  POS(275, 13),
  POS(274, 11),
  LOCAL(2)
};

static FUNCTION_INFO i_lambda_72 = {
  t_lambda_72, NULL, 3, 1,
  {"273_12_chr\000"}
};

static TAB_NUM t_lambda_73[] = {
  2, // locals
  0, // parameters
  // i-1)
  var_std__minus, 2, var_64_4_i, num_1, 1, LOCAL(1),
  // range(text s i-1)
  var_range, 3, var_63_15_text, var_267_6_s, LOCAL(1), 1, LOCAL(2),
  // -> i range(text s i-1)
  LET, 2, var_64_4_i, LOCAL(2), TAIL_CALL,
  POS(276, 33),
  POS(276, 20),
  POS(276, 15)
};

static FUNCTION_INFO i_lambda_73 = {
  t_lambda_73, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_74[] = {
  0, // locals
  0, // parameters
  // inc &i
  var_inc, 1, var_64_4_i, 1, var_64_4_i,
  // next
  var_next, 0, TAIL_CALL,
  POS(278, 15),
  POS(279, 15)
};

static FUNCTION_INFO i_lambda_74 = {
  t_lambda_74, NULL, 2, 0,
  {}
};

static int tuple_25_1_arguments[] = {
  -var_undefined, -var_undefined, -var_undefined
};

static int sequence_104_34_arguments[] = {
  -str_li, -str_p
};

static FUNKY_CONSTANT constants_table[] = {
  {FLT_TUPLE, 3, {.arguments = tuple_25_1_arguments}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std__from_html}},
  {FLT_STRING_8, 4, {.str_8 = "area"}},
  {FLT_STRING_8, 4, {.str_8 = "base"}},
  {FLT_STRING_8, 2, {.str_8 = "br"}},
  {FLT_STRING_8, 3, {.str_8 = "col"}},
  {FLT_STRING_8, 5, {.str_8 = "embed"}},
  {FLT_STRING_8, 2, {.str_8 = "hr"}},
  {FLT_STRING_8, 3, {.str_8 = "img"}},
  {FLT_STRING_8, 5, {.str_8 = "input"}},
  {FLT_STRING_8, 6, {.str_8 = "keygen"}},
  {FLT_STRING_8, 4, {.str_8 = "link"}},
  {FLT_STRING_8, 4, {.str_8 = "meta"}},
  {FLT_STRING_8, 5, {.str_8 = "param"}},
  {FLT_STRING_8, 6, {.str_8 = "source"}},
  {FLT_STRING_8, 5, {.str_8 = "track"}},
  {FLT_STRING_8, 3, {.str_8 = "wbr"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_1}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_2}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_3}},
  {FLT_STRING_8, 16, {.str_8 = "Unexpected input"}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_parse_html}},
  {FLT_POSITIVE_INT64, 0, {.value = 1}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_parse_element}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_loop}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_4}},
  {FLT_STRING_8, 23, {.str_8 = "Unexpected end of input"}},
  {FLT_STRING_8, 0, {.str_8 = ""}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_5}},
  {FLT_CHARACTER, 0, {.value = 32}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_6}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_7}},
  {FLT_CHARACTER, 0, {.value = 60}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_8}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_9}},
  {FLT_CHARACTER, 0, {.value = 62}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_10}},
  {FLT_NEGATIVE_INT64, 0, {.value = 1}},
  {FLT_STRING_8, 12, {.str_8 = "Expected '>'"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_11}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_12}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_13}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_14}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_15}},
  {FLT_CHARACTER, 0, {.value = 47}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_16}},
  {FLT_STRING_8, 2, {.str_8 = "li"}},
  {FLT_STRING_8, 1, {.str_8 = "p"}},
  {FLT_SEQUENCE, 2, {.arguments = sequence_104_34_arguments}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_17}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_18}},
  {FLT_STRING_8, 20, {.str_8 = "Expected closing tag"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_19}},
  {FLT_POSITIVE_INT64, 0, {.value = 2}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_20}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_21}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_22}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_23}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_24}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_25}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_26}},
  {FLT_STRING_8, 12, {.str_8 = "Expected '<'"}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_parse_tag}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_2_loop}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_27}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_28}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_29}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_30}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_31}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_parse_attributes}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_3_loop}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_32}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_33}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_34}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_35}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_36}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_37}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_38}},
  {FLT_CHARACTER, 0, {.value = 61}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_39}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_40}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_parse_attribute_name}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_4_loop}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_41}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_42}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_43}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_44}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_45}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_46}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_parse_attribute_value}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_5_loop}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_47}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_48}},
  {FLT_CHARACTER, 0, {.value = 34}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_49}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_6_loop}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_50}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_51}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_52}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_53}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_54}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_55}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_56}},
  {FLT_STRING_8, 24, {.str_8 = "Expected attribute value"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_57}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_7_loop}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_58}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_59}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_60}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_61}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_62}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_parse_contents}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_8_loop}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_63}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_64}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_65}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_66}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_67}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_68}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_69}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_70}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_parse_simple_text}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_9_loop}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_71}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_72}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_73}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_74}}
};

static ATTRIBUTE_DEFINITION std_types__html_element__attributes[] = {
  {-var_is_an_html_element, -var_true}
};

static ATTRIBUTE_DEFINITION std_types__object__attributes[] = {
  {-var_is_an_html_element, -var_false}
};

static FUNKY_VARIABLE variables_table[] = {
  {
    FOT_INITIALIZED, 0, 1,
    "html_element\000std_types", std_types__html_element__attributes,
    {.const_idx = -tuple_25_1}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "undefined\000", NULL,
    {.position = POS(25, 32)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "tuple\000", NULL,
    {.position = POS(25, 26)}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "is_an_html_element\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "assign\000std", NULL,
    {.position = POS(31, 1)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "is_an_html_element\000", NULL,
    {.position = POS(33, 26)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "true\000", NULL,
    {.position = POS(33, 45)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "object\000std_types", std_types__object__attributes,
    {.position = POS(34, 1)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "false\000", NULL,
    {.position = POS(34, 39)}
  },
  {
    FOT_DERIVED, 0, 0,
    "is_a_void_element\000", NULL,
    {"undefined\000"}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "from_html\000std", NULL,
    {.const_idx = -func_std__from_html}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "38_19_text\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "hash_set\000", NULL,
    {.position = POS(40, 5)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "56_21_element\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_defined\000", NULL,
    {.position = POS(58, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "WHITESPACE\000", NULL,
    {.position = POS(58, 47)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "some\000", NULL,
    {.position = POS(58, 42)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "matches\000", NULL,
    {.position = POS(58, 27)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "and\000std", NULL,
    {.position = POS(58, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "PARSE_ERROR\000", NULL,
    {.position = POS(61, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "error\000", NULL,
    {.position = POS(61, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if\000", NULL,
    {.position = POS(57, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "63_15_text\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "64_4_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "65_4_n\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "length_of\000", NULL,
    {.position = POS(65, 6)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "range\000", NULL,
    {.position = POS(67, 6)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "less\000std", NULL,
    {.position = POS(72, 13)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "75_12_chr\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not\000std", NULL,
    {.position = POS(77, 21)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "inc\000", NULL,
    {.position = POS(78, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "next\000", NULL,
    {.position = POS(79, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "equal\000std", NULL,
    {.position = POS(82, 17)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "84_33_tag\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "85_45_attributes\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "or\000std", NULL,
    {.position = POS(87, 25)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "typed_tuple\000", NULL,
    {.position = POS(94, 30)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "97_28_element\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000std", NULL,
    {.position = POS(102, 29)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "sequence\000std", NULL,
    {.position = POS(104, 34)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "case\000", NULL,
    {.position = POS(103, 31)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "111_32_bti\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000", NULL,
    {.position = POS(112, 31)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "loop\000", NULL,
    {.position = POS(70, 5)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "140_6_s\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "146_12_chr\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "minus\000std", NULL,
    {.position = POS(149, 31)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "155_6_attributes\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_insert_order_table\000", NULL,
    {.position = POS(155, 17)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "161_12_chr\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "171_44_name\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "182_6_s\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "188_12_chr\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "202_12_chr\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "206_16_s\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "227_20_s\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "242_21_outer_tag\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "243_6_contents\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_list\000", NULL,
    {.position = POS(243, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "has_prefix\000", NULL,
    {.position = POS(255, 39)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "push\000", NULL,
    {.position = POS(259, 19)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "267_6_s\000", NULL
  }
};

static FUNKY_NAMESPACE used_namespaces[] = {
  {"std", 1, 0}
};

FUNKY_MODULE module__basic__import__html = {
  "_basic__import__html", // module name
  "basic/import/html.fky", // module filename
  .major_version = 0,
  .minor_version = 0,
  .feature_flags = FEAT_POSITIONS|FEAT_FUNCTION_INFO,
  .marker = 0,
  0, // number of required modules
  0, // number of defined namespaces
  1, // number of used namespaces
  127, // number of constants
  62, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  constants_table,
  variables_table,
};
