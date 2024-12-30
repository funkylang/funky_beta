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
  str_Expected_closing = -47,
  lambda_17 = -48,
  num_2 = -49,
  lambda_18 = -50,
  lambda_19 = -51,
  lambda_20 = -52,
  lambda_21 = -53,
  lambda_22 = -54,
  lambda_23 = -55,
  lambda_24 = -56,
  str_Expected_2 = -57,
  func_parse_tag = -58,
  lambda_2_loop = -59,
  lambda_25 = -60,
  lambda_26 = -61,
  lambda_27 = -62,
  lambda_28 = -63,
  lambda_29 = -64,
  func_parse_attributes = -65,
  lambda_3_loop = -66,
  lambda_30 = -67,
  lambda_31 = -68,
  lambda_32 = -69,
  lambda_33 = -70,
  lambda_34 = -71,
  lambda_35 = -72,
  lambda_36 = -73,
  chr_61 = -74,
  lambda_37 = -75,
  lambda_38 = -76,
  func_parse_attribute_name = -77,
  lambda_4_loop = -78,
  lambda_39 = -79,
  lambda_40 = -80,
  lambda_41 = -81,
  lambda_42 = -82,
  lambda_43 = -83,
  lambda_44 = -84,
  func_parse_attribute_value = -85,
  lambda_5_loop = -86,
  lambda_45 = -87,
  lambda_46 = -88,
  chr_34 = -89,
  lambda_47 = -90,
  lambda_6_loop = -91,
  lambda_48 = -92,
  lambda_49 = -93,
  lambda_50 = -94,
  lambda_51 = -95,
  lambda_52 = -96,
  lambda_53 = -97,
  lambda_54 = -98,
  str_Expected_attribu = -99,
  lambda_55 = -100,
  lambda_7_loop = -101,
  lambda_56 = -102,
  lambda_57 = -103,
  lambda_58 = -104,
  lambda_59 = -105,
  lambda_60 = -106,
  func_parse_contents = -107,
  lambda_8_loop = -108,
  lambda_61 = -109,
  lambda_62 = -110,
  lambda_63 = -111,
  lambda_64 = -112,
  lambda_65 = -113,
  lambda_66 = -114,
  lambda_67 = -115,
  func_parse_simple_text = -116,
  lambda_9_loop = -117,
  lambda_68 = -118,
  lambda_69 = -119,
  lambda_70 = -120,
  lambda_71 = -121
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
  var_96_46_contents, // dynamic
  var_std__plus, // extern
  var_103_32_element, // dynamic
  var_107_32_bti, // dynamic
  var_plus, // extern
  var_loop, // extern
  var_136_6_s, // dynamic
  var_142_12_chr, // dynamic
  var_std__minus, // extern
  var_151_6_attributes, // dynamic
  var_empty_insert_order_table, // extern
  var_157_12_chr, // dynamic
  var_167_44_name, // dynamic
  var_178_6_s, // dynamic
  var_184_12_chr, // dynamic
  var_198_12_chr, // dynamic
  var_202_16_s, // dynamic
  var_223_20_s, // dynamic
  var_case, // extern
  var_239_6_contents, // dynamic
  var_empty_list, // extern
  var_push, // extern
  var_261_6_s, // dynamic
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

static TAB_NUM t_lambda_2[] = {
  0, // locals
  0, // parameters
  //  element
  LET, 1, var_56_21_element, TAIL_CALL,
  POS(59, 7)
};

static TAB_NUM t_lambda_3[] = {
  0, // locals
  0, // parameters
  // error PARSE_ERROR "Unexpected input" text
  var_error, 3, var_PARSE_ERROR, str_Unexpected_input, var_38_19_text, TAIL_CALL,
  POS(61, 7)
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
  POS(67, 3)
};

static TAB_NUM t_func_parse_element[] = {
  0, // locals
  0, // parameters
  // loop:
  var_loop, 1, lambda_loop, TAIL_CALL,
  POS(70, 5)
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

static TAB_NUM t_lambda_4[] = {
  0, // locals
  0, // parameters
  // error PARSE_ERROR "Unexpected end of input" ""
  var_error, 3, var_PARSE_ERROR, str_Unexpected_end_o, string_1, TAIL_CALL,
  POS(73, 11)
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

static TAB_NUM t_lambda_7[] = {
  1, // locals
  0, // parameters
  // chr == '<':
  var_std__equal, 2, var_75_12_chr, chr_60, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_8, lambda_22, TAIL_CALL,
  POS(82, 17),
  POS(81, 15)
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

static TAB_NUM t_lambda_13[] = {
  3, // locals
  0, // parameters
  // parse_contents !i $contents
  func_parse_contents, 0, 2, var_64_4_i, var_96_46_contents,
  // i+1 > n || text(i) != '<' || text(i+1) != '/':
  var_std__plus, 2, var_64_4_i, num_1, 1, LOCAL(1),
  // n || text(i) != '<' || text(i+1) != '/':
  var_std__less, 2, var_65_4_n, LOCAL(1), 1, LOCAL(2),
  // n || text(i) != '<' || text(i+1) != '/':
  var_std__or, 2, LOCAL(2), lambda_14, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_16, lambda_17, TAIL_CALL,
  POS(96, 27),
  POS(98, 29),
  POS(98, 35),
  POS(98, 35),
  POS(97, 27)
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
  POS(98, 40),
  POS(98, 40),
  POS(98, 40),
  POS(98, 40),
  POS(98, 40)
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
  POS(98, 63),
  POS(98, 58),
  POS(98, 58),
  POS(98, 58),
  POS(98, 58)
};

static TAB_NUM t_lambda_16[] = {
  1, // locals
  0, // parameters
  // range(text i -1)
  var_range, 3, var_63_15_text, var_64_4_i, minus_num_1, 1, LOCAL(1),
  // error PARSE_ERROR
  var_error, 3, var_PARSE_ERROR, str_Expected_closing, LOCAL(1), TAIL_CALL,
  POS(101, 33),
  POS(99, 31)
};

static TAB_NUM t_lambda_17[] = {
  3, // locals
  0, // parameters
  // $element
  var_typed_tuple, 4, var_std_types__html_element, var_84_33_tag, var_85_45_attributes, var_96_46_contents, 1, var_103_32_element,
  // $bti i # backtrack position
  LET, 1, var_64_4_i, 1, var_107_32_bti,
  // plus &i 2
  var_plus, 2, var_64_4_i, num_2, 1, var_64_4_i,
  // parse_tag !i $end_tag
  func_parse_tag, 0, 2, var_64_4_i, LOCAL(3),
  // end_tag != tag
  var_std__equal, 2, LOCAL(3), var_84_33_tag, 1, LOCAL(1),
  // end_tag != tag
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_18, lambda_19, TAIL_CALL,
  POS(103, 31),
  POS(107, 31),
  POS(108, 31),
  POS(109, 31),
  POS(111, 33),
  POS(111, 33),
  POS(110, 31)
};

static TAB_NUM t_lambda_18[] = {
  0, // locals
  0, // parameters
  //  bti element
  LET, 2, var_107_32_bti, var_103_32_element, TAIL_CALL,
  POS(112, 35)
};

static TAB_NUM t_lambda_19[] = {
  3, // locals
  0, // parameters
  // text(i) != '>'
  var_63_15_text, 1, var_64_4_i, 1, LOCAL(1),
  // text(i) != '>'
  var_std__equal, 2, LOCAL(1), chr_62, 1, LOCAL(2),
  // text(i) != '>'
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_20, lambda_21, TAIL_CALL,
  POS(121, 37),
  POS(121, 37),
  POS(121, 37),
  POS(120, 35)
};

static TAB_NUM t_lambda_20[] = {
  1, // locals
  0, // parameters
  // range(text i -1)
  var_range, 3, var_63_15_text, var_64_4_i, minus_num_1, 1, LOCAL(1),
  // error PARSE_ERROR
  var_error, 3, var_PARSE_ERROR, str_Expected, LOCAL(1), TAIL_CALL,
  POS(125, 41),
  POS(123, 39)
};

static TAB_NUM t_lambda_21[] = {
  1, // locals
  0, // parameters
  // i+1 element
  var_std__plus, 2, var_64_4_i, num_1, 1, LOCAL(1),
  //  i+1 element
  LET, 2, LOCAL(1), var_103_32_element, TAIL_CALL,
  POS(126, 40),
  POS(126, 39)
};

static TAB_NUM t_lambda_22[] = {
  2, // locals
  0, // parameters
  //  ':
  var_std__less, 2, chr_32, var_75_12_chr, 1, LOCAL(1),
  //  ':
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_23, lambda_24, TAIL_CALL,
  POS(129, 29),
  POS(129, 29),
  POS(128, 19)
};

static TAB_NUM t_lambda_23[] = {
  0, // locals
  0, // parameters
  // inc &i
  var_inc, 1, var_64_4_i, 1, var_64_4_i,
  // next
  var_next, 0, TAIL_CALL,
  POS(130, 23),
  POS(131, 23)
};

static TAB_NUM t_lambda_24[] = {
  1, // locals
  0, // parameters
  // range(text i -1)
  var_range, 3, var_63_15_text, var_64_4_i, minus_num_1, 1, LOCAL(1),
  // error PARSE_ERROR "Expected '<'" range(text i -1)
  var_error, 3, var_PARSE_ERROR, str_Expected_2, LOCAL(1), TAIL_CALL,
  POS(133, 56),
  POS(133, 23)
};

static TAB_NUM t_func_parse_tag[] = {
  0, // locals
  0, // parameters
  // $s i
  LET, 1, var_64_4_i, 1, var_136_6_s,
  // loop:
  var_loop, 1, lambda_2_loop, TAIL_CALL,
  POS(136, 5),
  POS(137, 5)
};

static TAB_NUM t_lambda_2_loop[] = {
  1, // locals
  0, // parameters
  // n:
  var_std__less, 2, var_65_4_n, var_64_4_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_25, lambda_26, TAIL_CALL,
  POS(139, 13),
  POS(138, 7)
};

static TAB_NUM t_lambda_25[] = {
  1, // locals
  0, // parameters
  // range(text s -1)
  var_range, 3, var_63_15_text, var_136_6_s, minus_num_1, 1, LOCAL(1),
  // error PARSE_ERROR "Expected '>'" range(text s -1)
  var_error, 3, var_PARSE_ERROR, str_Expected, LOCAL(1), TAIL_CALL,
  POS(140, 44),
  POS(140, 11)
};

static TAB_NUM t_lambda_26[] = {
  3, // locals
  0, // parameters
  // $chr text(i)
  var_63_15_text, 1, var_64_4_i, 1, var_142_12_chr,
  //  ' || chr == '>'
  var_std__less, 2, chr_32, var_142_12_chr, 1, LOCAL(1),
  //  ' || chr == '>'
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  //  ' || chr == '>'
  var_std__or, 2, LOCAL(2), lambda_27, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_28, lambda_29, TAIL_CALL,
  POS(142, 11),
  POS(144, 21),
  POS(144, 21),
  POS(144, 21),
  POS(143, 11)
};

static TAB_NUM t_lambda_27[] = {
  1, // locals
  0, // parameters
  // chr == '>'
  var_std__equal, 2, var_142_12_chr, chr_62, 1, LOCAL(1),
  // chr == '>'
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(144, 27),
  POS(144, 27)
};

static TAB_NUM t_lambda_28[] = {
  2, // locals
  0, // parameters
  // i-1)
  var_std__minus, 2, var_64_4_i, num_1, 1, LOCAL(1),
  // range(text s i-1)
  var_range, 3, var_63_15_text, var_136_6_s, LOCAL(1), 1, LOCAL(2),
  //  i range(text s i-1)
  LET, 2, var_64_4_i, LOCAL(2), TAIL_CALL,
  POS(145, 31),
  POS(145, 18),
  POS(145, 15)
};

static TAB_NUM t_lambda_29[] = {
  0, // locals
  0, // parameters
  // inc &i
  var_inc, 1, var_64_4_i, 1, var_64_4_i,
  // next
  var_next, 0, TAIL_CALL,
  POS(147, 15),
  POS(148, 15)
};

static TAB_NUM t_func_parse_attributes[] = {
  0, // locals
  0, // parameters
  // $attributes empty_insert_order_table
  LET, 1, var_empty_insert_order_table, 1, var_151_6_attributes,
  // loop:
  var_loop, 1, lambda_3_loop, TAIL_CALL,
  POS(151, 5),
  POS(152, 5)
};

static TAB_NUM t_lambda_3_loop[] = {
  1, // locals
  0, // parameters
  // n
  var_std__less, 2, var_65_4_n, var_64_4_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_30, lambda_31, TAIL_CALL,
  POS(154, 13),
  POS(153, 7)
};

static TAB_NUM t_lambda_30[] = {
  0, // locals
  0, // parameters
  //  i attributes
  LET, 2, var_64_4_i, var_151_6_attributes, TAIL_CALL,
  POS(155, 11)
};

static TAB_NUM t_lambda_31[] = {
  1, // locals
  0, // parameters
  // $chr text(i)
  var_63_15_text, 1, var_64_4_i, 1, var_157_12_chr,
  // chr == '>'
  var_std__equal, 2, var_157_12_chr, chr_62, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_32, lambda_33, TAIL_CALL,
  POS(157, 11),
  POS(159, 13),
  POS(158, 11)
};

static TAB_NUM t_lambda_32[] = {
  0, // locals
  0, // parameters
  //  i attributes
  LET, 2, var_64_4_i, var_151_6_attributes, TAIL_CALL,
  POS(160, 15)
};

static TAB_NUM t_lambda_33[] = {
  2, // locals
  0, // parameters
  //  ':
  var_std__less, 2, chr_32, var_157_12_chr, 1, LOCAL(1),
  //  ':
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_34, lambda_35, TAIL_CALL,
  POS(163, 25),
  POS(163, 25),
  POS(162, 15)
};

static TAB_NUM t_lambda_34[] = {
  0, // locals
  0, // parameters
  // inc &i
  var_inc, 1, var_64_4_i, 1, var_64_4_i,
  // next
  var_next, 0, TAIL_CALL,
  POS(164, 19),
  POS(165, 19)
};

static TAB_NUM t_lambda_35[] = {
  2, // locals
  0, // parameters
  // parse_attribute_name !i $name
  func_parse_attribute_name, 0, 2, var_64_4_i, var_167_44_name,
  // n || text(i) != '='
  var_std__less, 2, var_65_4_n, var_64_4_i, 1, LOCAL(1),
  // n || text(i) != '='
  var_std__or, 2, LOCAL(1), lambda_36, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_37, lambda_38, TAIL_CALL,
  POS(167, 19),
  POS(169, 25),
  POS(169, 25),
  POS(168, 19)
};

static TAB_NUM t_lambda_36[] = {
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
  POS(169, 30),
  POS(169, 30),
  POS(169, 30),
  POS(169, 30)
};

static TAB_NUM t_lambda_37[] = {
  0, // locals
  0, // parameters
  //  i undefined
  LET, 2, var_64_4_i, var_undefined, TAIL_CALL,
  POS(170, 23)
};

static TAB_NUM t_lambda_38[] = {
  1, // locals
  0, // parameters
  // inc &i
  var_inc, 1, var_64_4_i, 1, var_64_4_i,
  // parse_attribute_value !i $value
  func_parse_attribute_value, 0, 2, var_64_4_i, LOCAL(1),
  // attributes(name) value
  var_151_6_attributes, 2, var_167_44_name, LOCAL(1), 1, var_151_6_attributes,
  // next
  var_next, 0, TAIL_CALL,
  POS(172, 23),
  POS(173, 23),
  POS(174, 24),
  POS(175, 23)
};

static TAB_NUM t_func_parse_attribute_name[] = {
  0, // locals
  0, // parameters
  // $s i
  LET, 1, var_64_4_i, 1, var_178_6_s,
  // loop:
  var_loop, 1, lambda_4_loop, TAIL_CALL,
  POS(178, 5),
  POS(179, 5)
};

static TAB_NUM t_lambda_4_loop[] = {
  1, // locals
  0, // parameters
  // n:
  var_std__less, 2, var_65_4_n, var_64_4_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_39, lambda_40, TAIL_CALL,
  POS(181, 13),
  POS(180, 7)
};

static TAB_NUM t_lambda_39[] = {
  1, // locals
  0, // parameters
  // range(text s -1)
  var_range, 3, var_63_15_text, var_178_6_s, minus_num_1, 1, LOCAL(1),
  // error PARSE_ERROR "Unexpected end of input" range(text s -1)
  var_error, 3, var_PARSE_ERROR, str_Unexpected_end_o, LOCAL(1), TAIL_CALL,
  POS(182, 55),
  POS(182, 11)
};

static TAB_NUM t_lambda_40[] = {
  3, // locals
  0, // parameters
  // $chr text(i)
  var_63_15_text, 1, var_64_4_i, 1, var_184_12_chr,
  //  ' || chr == '=' || chr == '>'
  var_std__less, 2, chr_32, var_184_12_chr, 1, LOCAL(1),
  //  ' || chr == '=' || chr == '>'
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  //  ' || chr == '=' || chr == '>'
  var_std__or, 2, LOCAL(2), lambda_41, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_43, lambda_44, TAIL_CALL,
  POS(184, 11),
  POS(186, 21),
  POS(186, 21),
  POS(186, 21),
  POS(185, 11)
};

static TAB_NUM t_lambda_41[] = {
  2, // locals
  0, // parameters
  // chr == '=' || chr == '>'
  var_std__equal, 2, var_184_12_chr, chr_61, 1, LOCAL(1),
  // chr == '=' || chr == '>'
  var_std__or, 2, LOCAL(1), lambda_42, 1, LOCAL(2),
  // chr == '=' || chr == '>'
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(186, 27),
  POS(186, 27),
  POS(186, 27)
};

static TAB_NUM t_lambda_42[] = {
  1, // locals
  0, // parameters
  // chr == '>'
  var_std__equal, 2, var_184_12_chr, chr_62, 1, LOCAL(1),
  // chr == '>'
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(186, 41),
  POS(186, 41)
};

static TAB_NUM t_lambda_43[] = {
  2, // locals
  0, // parameters
  // i-1)
  var_std__minus, 2, var_64_4_i, num_1, 1, LOCAL(1),
  // range(text s i-1)
  var_range, 3, var_63_15_text, var_178_6_s, LOCAL(1), 1, LOCAL(2),
  //  i range(text s i-1)
  LET, 2, var_64_4_i, LOCAL(2), TAIL_CALL,
  POS(187, 31),
  POS(187, 18),
  POS(187, 15)
};

static TAB_NUM t_lambda_44[] = {
  0, // locals
  0, // parameters
  // inc &i
  var_inc, 1, var_64_4_i, 1, var_64_4_i,
  // next
  var_next, 0, TAIL_CALL,
  POS(189, 15),
  POS(190, 15)
};

static TAB_NUM t_func_parse_attribute_value[] = {
  0, // locals
  0, // parameters
  // loop:
  var_loop, 1, lambda_5_loop, TAIL_CALL,
  POS(193, 5)
};

static TAB_NUM t_lambda_5_loop[] = {
  1, // locals
  0, // parameters
  // n:
  var_std__less, 2, var_65_4_n, var_64_4_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_45, lambda_46, TAIL_CALL,
  POS(195, 13),
  POS(194, 7)
};

static TAB_NUM t_lambda_45[] = {
  1, // locals
  0, // parameters
  // range(text i -1)
  var_range, 3, var_63_15_text, var_64_4_i, minus_num_1, 1, LOCAL(1),
  // error PARSE_ERROR "Unexpected end of input" range(text i -1)
  var_error, 3, var_PARSE_ERROR, str_Unexpected_end_o, LOCAL(1), TAIL_CALL,
  POS(196, 55),
  POS(196, 11)
};

static TAB_NUM t_lambda_46[] = {
  1, // locals
  0, // parameters
  // $chr text(i)
  var_63_15_text, 1, var_64_4_i, 1, var_198_12_chr,
  // chr == '@quot;':
  var_std__equal, 2, var_198_12_chr, chr_34, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_47, lambda_52, TAIL_CALL,
  POS(198, 11),
  POS(200, 13),
  POS(199, 11)
};

static TAB_NUM t_lambda_47[] = {
  0, // locals
  0, // parameters
  // inc &i
  var_inc, 1, var_64_4_i, 1, var_64_4_i,
  // $s i
  LET, 1, var_64_4_i, 1, var_202_16_s,
  // loop:
  var_loop, 1, lambda_6_loop, TAIL_CALL,
  POS(201, 15),
  POS(202, 15),
  POS(203, 15)
};

static TAB_NUM t_lambda_6_loop[] = {
  1, // locals
  0, // parameters
  // n:
  var_std__less, 2, var_65_4_n, var_64_4_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_48, lambda_49, TAIL_CALL,
  POS(205, 23),
  POS(204, 17)
};

static TAB_NUM t_lambda_48[] = {
  1, // locals
  0, // parameters
  // range(text i -1)
  var_range, 3, var_63_15_text, var_64_4_i, minus_num_1, 1, LOCAL(1),
  // error PARSE_ERROR "Unexpected end of input" range(text i -1)
  var_error, 3, var_PARSE_ERROR, str_Unexpected_end_o, LOCAL(1), TAIL_CALL,
  POS(206, 65),
  POS(206, 21)
};

static TAB_NUM t_lambda_49[] = {
  1, // locals
  0, // parameters
  // !chr text(i)
  var_63_15_text, 1, var_64_4_i, 1, var_198_12_chr,
  // chr == '@quot;'
  var_std__equal, 2, var_198_12_chr, chr_34, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_50, lambda_51, TAIL_CALL,
  POS(208, 21),
  POS(210, 23),
  POS(209, 21)
};

static TAB_NUM t_lambda_50[] = {
  3, // locals
  0, // parameters
  // i+1 range(text s i-1)
  var_std__plus, 2, var_64_4_i, num_1, 1, LOCAL(1),
  // i-1)
  var_std__minus, 2, var_64_4_i, num_1, 1, LOCAL(2),
  // range(text s i-1)
  var_range, 3, var_63_15_text, var_202_16_s, LOCAL(2), 1, LOCAL(3),
  //  i+1 range(text s i-1)
  LET, 2, LOCAL(1), LOCAL(3), TAIL_CALL,
  POS(211, 26),
  POS(211, 43),
  POS(211, 30),
  POS(211, 25)
};

static TAB_NUM t_lambda_51[] = {
  0, // locals
  0, // parameters
  // inc &i
  var_inc, 1, var_64_4_i, 1, var_64_4_i,
  // next
  var_next, 0, TAIL_CALL,
  POS(213, 25),
  POS(214, 25)
};

static TAB_NUM t_lambda_52[] = {
  0, // locals
  0, // parameters
  // case chr
  var_case, 6, var_198_12_chr, chr_32, lambda_53, chr_62, lambda_54, lambda_55, TAIL_CALL,
  POS(216, 15)
};

static TAB_NUM t_lambda_53[] = {
  0, // locals
  0, // parameters
  // inc &i
  var_inc, 1, var_64_4_i, 1, var_64_4_i,
  // next
  var_next, 0, TAIL_CALL,
  POS(218, 19),
  POS(219, 19)
};

static TAB_NUM t_lambda_54[] = {
  1, // locals
  0, // parameters
  // range(text i -1)
  var_range, 3, var_63_15_text, var_64_4_i, minus_num_1, 1, LOCAL(1),
  // error PARSE_ERROR "Expected attribute value" range(text i -1)
  var_error, 3, var_PARSE_ERROR, str_Expected_attribu, LOCAL(1), TAIL_CALL,
  POS(221, 64),
  POS(221, 19)
};

static TAB_NUM t_lambda_55[] = {
  0, // locals
  0, // parameters
  // $s i
  LET, 1, var_64_4_i, 1, var_223_20_s,
  // inc &i
  var_inc, 1, var_64_4_i, 1, var_64_4_i,
  // loop:
  var_loop, 1, lambda_7_loop, TAIL_CALL,
  POS(223, 19),
  POS(224, 19),
  POS(225, 19)
};

static TAB_NUM t_lambda_7_loop[] = {
  1, // locals
  0, // parameters
  // n
  var_std__less, 2, var_65_4_n, var_64_4_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_56, lambda_57, TAIL_CALL,
  POS(227, 27),
  POS(226, 21)
};

static TAB_NUM t_lambda_56[] = {
  2, // locals
  0, // parameters
  // i-1)
  var_std__minus, 2, var_64_4_i, num_1, 1, LOCAL(1),
  // range(text s i-1)
  var_range, 3, var_63_15_text, var_223_20_s, LOCAL(1), 1, LOCAL(2),
  //  i range(text s i-1)
  LET, 2, var_64_4_i, LOCAL(2), TAIL_CALL,
  POS(228, 41),
  POS(228, 28),
  POS(228, 25)
};

static TAB_NUM t_lambda_57[] = {
  3, // locals
  0, // parameters
  // !chr text(i)
  var_63_15_text, 1, var_64_4_i, 1, var_198_12_chr,
  //  ' || chr == '>'
  var_std__less, 2, chr_32, var_198_12_chr, 1, LOCAL(1),
  //  ' || chr == '>'
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  //  ' || chr == '>'
  var_std__or, 2, LOCAL(2), lambda_58, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_59, lambda_60, TAIL_CALL,
  POS(230, 25),
  POS(232, 35),
  POS(232, 35),
  POS(232, 35),
  POS(231, 25)
};

static TAB_NUM t_lambda_58[] = {
  1, // locals
  0, // parameters
  // chr == '>'
  var_std__equal, 2, var_198_12_chr, chr_62, 1, LOCAL(1),
  // chr == '>'
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(232, 41),
  POS(232, 41)
};

static TAB_NUM t_lambda_59[] = {
  2, // locals
  0, // parameters
  // i-1)
  var_std__minus, 2, var_64_4_i, num_1, 1, LOCAL(1),
  // range(text s i-1)
  var_range, 3, var_63_15_text, var_223_20_s, LOCAL(1), 1, LOCAL(2),
  //  i range(text s i-1)
  LET, 2, var_64_4_i, LOCAL(2), TAIL_CALL,
  POS(233, 45),
  POS(233, 32),
  POS(233, 29)
};

static TAB_NUM t_lambda_60[] = {
  0, // locals
  0, // parameters
  // inc &i
  var_inc, 1, var_64_4_i, 1, var_64_4_i,
  // next
  var_next, 0, TAIL_CALL,
  POS(235, 29),
  POS(236, 29)
};

static TAB_NUM t_func_parse_contents[] = {
  0, // locals
  0, // parameters
  // $contents empty_list
  LET, 1, var_empty_list, 1, var_239_6_contents,
  // loop:
  var_loop, 1, lambda_8_loop, TAIL_CALL,
  POS(239, 5),
  POS(240, 5)
};

static TAB_NUM t_lambda_8_loop[] = {
  1, // locals
  0, // parameters
  // n
  var_std__less, 2, var_65_4_n, var_64_4_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_61, lambda_62, TAIL_CALL,
  POS(242, 13),
  POS(241, 7)
};

static TAB_NUM t_lambda_61[] = {
  0, // locals
  0, // parameters
  //  i contents
  LET, 2, var_64_4_i, var_239_6_contents, TAIL_CALL,
  POS(243, 11)
};

static TAB_NUM t_lambda_62[] = {
  2, // locals
  0, // parameters
  // $chr text(i)
  var_63_15_text, 1, var_64_4_i, 1, LOCAL(2),
  // chr == '<':
  var_std__equal, 2, LOCAL(2), chr_60, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_63, lambda_67, TAIL_CALL,
  POS(245, 11),
  POS(247, 13),
  POS(246, 11)
};

static TAB_NUM t_lambda_63[] = {
  3, // locals
  0, // parameters
  // i+1 < n && text(i+1) == '/'
  var_std__plus, 2, var_64_4_i, num_1, 1, LOCAL(1),
  // i+1 < n && text(i+1) == '/'
  var_std__less, 2, LOCAL(1), var_65_4_n, 1, LOCAL(2),
  // i+1 < n && text(i+1) == '/'
  var_std__and, 2, LOCAL(2), lambda_64, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_65, lambda_66, TAIL_CALL,
  POS(249, 17),
  POS(249, 17),
  POS(249, 17),
  POS(248, 15)
};

static TAB_NUM t_lambda_64[] = {
  3, // locals
  0, // parameters
  // i+1) == '/'
  var_std__plus, 2, var_64_4_i, num_1, 1, LOCAL(1),
  // text(i+1) == '/'
  var_63_15_text, 1, LOCAL(1), 1, LOCAL(2),
  // text(i+1) == '/'
  var_std__equal, 2, LOCAL(2), chr_47, 1, LOCAL(3),
  // text(i+1) == '/'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(249, 33),
  POS(249, 28),
  POS(249, 28),
  POS(249, 28)
};

static TAB_NUM t_lambda_65[] = {
  0, // locals
  0, // parameters
  //  i contents
  LET, 2, var_64_4_i, var_239_6_contents, TAIL_CALL,
  POS(250, 19)
};

static TAB_NUM t_lambda_66[] = {
  1, // locals
  0, // parameters
  // parse_element !i $element
  func_parse_element, 0, 2, var_64_4_i, LOCAL(1),
  // push &contents element
  var_push, 2, var_239_6_contents, LOCAL(1), 1, var_239_6_contents,
  // next
  var_next, 0, TAIL_CALL,
  POS(252, 19),
  POS(253, 19),
  POS(254, 19)
};

static TAB_NUM t_lambda_67[] = {
  1, // locals
  0, // parameters
  // parse_simple_text !i $simple_text
  func_parse_simple_text, 0, 2, var_64_4_i, LOCAL(1),
  // push &contents simple_text
  var_push, 2, var_239_6_contents, LOCAL(1), 1, var_239_6_contents,
  // next
  var_next, 0, TAIL_CALL,
  POS(256, 15),
  POS(257, 15),
  POS(258, 15)
};

static TAB_NUM t_func_parse_simple_text[] = {
  0, // locals
  0, // parameters
  // $s i
  LET, 1, var_64_4_i, 1, var_261_6_s,
  // loop:
  var_loop, 1, lambda_9_loop, TAIL_CALL,
  POS(261, 5),
  POS(262, 5)
};

static TAB_NUM t_lambda_9_loop[] = {
  1, // locals
  0, // parameters
  // n
  var_std__less, 2, var_65_4_n, var_64_4_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_68, lambda_69, TAIL_CALL,
  POS(264, 13),
  POS(263, 7)
};

static TAB_NUM t_lambda_68[] = {
  2, // locals
  0, // parameters
  // i-1)
  var_std__minus, 2, var_64_4_i, num_1, 1, LOCAL(1),
  // range(text s i-1)
  var_range, 3, var_63_15_text, var_261_6_s, LOCAL(1), 1, LOCAL(2),
  //  i range(text s i-1)
  LET, 2, var_64_4_i, LOCAL(2), TAIL_CALL,
  POS(265, 27),
  POS(265, 14),
  POS(265, 11)
};

static TAB_NUM t_lambda_69[] = {
  2, // locals
  0, // parameters
  // $chr text(i)
  var_63_15_text, 1, var_64_4_i, 1, LOCAL(2),
  // chr == '<':
  var_std__equal, 2, LOCAL(2), chr_60, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_70, lambda_71, TAIL_CALL,
  POS(267, 11),
  POS(269, 13),
  POS(268, 11)
};

static TAB_NUM t_lambda_70[] = {
  2, // locals
  0, // parameters
  // i-1)
  var_std__minus, 2, var_64_4_i, num_1, 1, LOCAL(1),
  // range(text s i-1)
  var_range, 3, var_63_15_text, var_261_6_s, LOCAL(1), 1, LOCAL(2),
  // -> i range(text s i-1)
  LET, 2, var_64_4_i, LOCAL(2), TAIL_CALL,
  POS(270, 33),
  POS(270, 20),
  POS(270, 15)
};

static TAB_NUM t_lambda_71[] = {
  0, // locals
  0, // parameters
  // inc &i
  var_inc, 1, var_64_4_i, 1, var_64_4_i,
  // next
  var_next, 0, TAIL_CALL,
  POS(272, 15),
  POS(273, 15)
};

static int tuple_25_1_arguments[] = {
  -var_undefined, -var_undefined, -var_undefined
};

static FUNKY_CONSTANT constants_table[] = {
  {FLT_TUPLE, 3, {.arguments = tuple_25_1_arguments}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__from_html}},
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
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_3}},
  {FLT_STRING_8, 16, {.str_8 = "Unexpected input"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_html}},
  {FLT_POSITIVE_INT64, 0, {.value = 1}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_element}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_4}},
  {FLT_STRING_8, 23, {.str_8 = "Unexpected end of input"}},
  {FLT_STRING_8, 0, {.str_8 = ""}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_5}},
  {FLT_CHARACTER, 0, {.value = 32}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_6}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_7}},
  {FLT_CHARACTER, 0, {.value = 60}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_8}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_9}},
  {FLT_CHARACTER, 0, {.value = 62}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_10}},
  {FLT_NEGATIVE_INT64, 0, {.value = 1}},
  {FLT_STRING_8, 12, {.str_8 = "Expected '>'"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_11}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_12}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_13}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_14}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_15}},
  {FLT_CHARACTER, 0, {.value = 47}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_16}},
  {FLT_STRING_8, 20, {.str_8 = "Expected closing tag"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_17}},
  {FLT_POSITIVE_INT64, 0, {.value = 2}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_18}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_19}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_20}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_21}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_22}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_23}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_24}},
  {FLT_STRING_8, 12, {.str_8 = "Expected '<'"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_tag}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_25}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_26}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_27}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_28}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_29}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_attributes}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_3_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_30}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_31}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_32}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_33}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_34}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_35}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_36}},
  {FLT_CHARACTER, 0, {.value = 61}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_37}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_38}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_attribute_name}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_4_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_39}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_40}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_41}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_42}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_43}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_44}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_attribute_value}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_5_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_45}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_46}},
  {FLT_CHARACTER, 0, {.value = 34}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_47}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_6_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_48}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_49}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_50}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_51}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_52}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_53}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_54}},
  {FLT_STRING_8, 24, {.str_8 = "Expected attribute value"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_55}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_7_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_56}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_57}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_58}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_59}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_60}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_contents}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_8_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_61}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_62}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_63}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_64}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_65}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_66}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_67}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_simple_text}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_9_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_68}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_69}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_70}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_71}}
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
    "96_46_contents\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000std", NULL,
    {.position = POS(98, 29)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "103_32_element\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "107_32_bti\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000", NULL,
    {.position = POS(108, 31)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "loop\000", NULL,
    {.position = POS(70, 5)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "136_6_s\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "142_12_chr\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "minus\000std", NULL,
    {.position = POS(145, 31)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "151_6_attributes\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_insert_order_table\000", NULL,
    {.position = POS(151, 17)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "157_12_chr\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "167_44_name\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "178_6_s\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "184_12_chr\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "198_12_chr\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "202_16_s\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "223_20_s\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "case\000", NULL,
    {.position = POS(216, 15)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "239_6_contents\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_list\000", NULL,
    {.position = POS(239, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "push\000", NULL,
    {.position = POS(253, 19)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "261_6_s\000", NULL
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
  .feature_flags = FEAT_POSITIONS,
  .marker = 0,
  0, // number of required modules
  0, // number of defined namespaces
  1, // number of used namespaces
  121, // number of constants
  60, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  constants_table,
  variables_table,
};
