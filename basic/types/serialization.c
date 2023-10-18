#include <stddef.h>
#include <stdint.h>

#include "runtime/common.h"
#include "runtime/builtins.h"
#include "runtime/fko.h"
#include "runtime/memory.h"

enum {
  func_std__register_type = -1,
  func_std__register_types = -2,
  lambda_1 = -3,
  lambda_2 = -4,
  func_std__deserialize = -5,
  lambda_3 = -6,
  num_1 = -7,
  chr_48 = -8,
  chr_57 = -9,
  value_range_99_1 = -10,
  chr_34 = -11,
  lambda_quot = -12,
  string_1 = -13,
  num_2 = -14,
  minus_num_2 = -15,
  lambda_loop = -16,
  lambda_4 = -17,
  lambda_5 = -18,
  minus_num_1 = -19,
  chr_64 = -20,
  lambda_6 = -21,
  lambda_7 = -22,
  lambda_line1_is_a_digit = -23,
  lambda_8 = -24,
  lambda_9 = -25,
  chr_39 = -26,
  lambda_apos = -27,
  lambda_10 = -28,
  num_3 = -29,
  lambda_11 = -30,
  lambda_12 = -31,
  chr_46 = -32,
  lambda_13 = -33,
  lambda_14 = -34,
  chr_60 = -35,
  lambda_15 = -36,
  str_true = -37,
  lambda_true = -38,
  str_false = -39,
  lambda_false = -40,
  str_undefined = -41,
  lambda_undefined = -42,
  lambda_16 = -43,
  lambda_17 = -44,
  lambda_2_loop = -45,
  lambda_18 = -46,
  lambda_19 = -47,
  chr_32 = -48,
  lambda_20 = -49,
  lambda_21 = -50,
  chr_62 = -51,
  lambda_22 = -52,
  lambda_23 = -53,
  func_fetch = -54,
  lambda_24 = -55,
  lambda_25 = -56,
  lambda_26 = -57,
  lambda_argument_is_an_integer = -58,
  lambda_27 = -59,
  lambda_28 = -60,
  lambda_29 = -61
};

enum {
  var__START = FIRST_VAR-1,
  var_std__serialize, // attribute
  var_std__assign, // extern
  var_std__serialization_tag_of, // attribute
  var_std__deserializer_of, // attribute
  var_std__deserializers, // derived
  var_empty_hash_table, // extern
  var_std__register_type, // initialized
  var_serialization_tag_of, // extern
  var_std__register_types, // initialized
  var_48_0_deserializers, // dynamic
  var_next, // extern
  var_for_each, // extern
  var_std__deserialize, // initialized
  var_61_18_lines, // dynamic
  var_split_into_lines, // extern
  var_62_13_line, // dynamic
  var_trim, // extern
  var_std__value_range, // extern
  var_66_1_buf, // dynamic
  var_range, // extern
  var_is_empty, // extern
  var_73_1_chr, // dynamic
  var_std__equal, // extern
  var_integer, // extern
  var_character, // extern
  var_push, // extern
  var_is_a_digit, // extern
  var_break, // extern
  var_if, // extern
  var_loop, // extern
  var_93_1_chr, // dynamic
  var_contains, // extern
  var_real, // extern
  var_true, // extern
  var_false, // extern
  var_undefined, // extern
  var_unique_item, // extern
  var_case, // extern
  var_111_1_idx, // dynamic
  var_112_1_len, // dynamic
  var_length_of, // extern
  var_std__less, // extern
  var_deserializers, // extern
  var_tuple, // extern
  var_std__plus, // extern
  var_121_1_value, // dynamic
  var_std__and, // extern
  var_to_integer, // extern
  var_update_if, // extern
  var_std__minus, // extern
  var_inc, // extern
  var_map, // extern
  var_135_9_i, // dynamic
  var_136_1_items, // dynamic
  var_empty_list, // extern
  var_139_1_item, // dynamic
  var_is_defined, // extern
  var_is_a_tuple, // extern
  var_143_6_type, // dynamic
  var_143_12_argument, // dynamic
  var_is_an_integer, // extern
  var_deserializer_of, // extern
  var_repeat, // extern
  var__END
};


static TAB_NUM t_func_std__register_type[] = {
  4, // locals
  2, // parameters
  LOCAL(3), // 41_0_deserializers
  LOCAL(4), // 42_0_type
  // serialization_tag_of(type) type)
  var_serialization_tag_of, 1, LOCAL(4), 1, LOCAL(1),
  // deserializers(serialization_tag_of(type) type)
  LOCAL(3), 2, LOCAL(1), LOCAL(4), 1, LOCAL(2),
  // -> deserializers(serialization_tag_of(type) type)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(44, 20),
  POS(44, 6),
  POS(44, 3)
};

static TAB_NUM t_func_std__register_types[] = {
  1, // locals
  2, // parameters
  var_48_0_deserializers,
  LOCAL(1), // 49_0_types
  // for_each types
  var_for_each, 3, LOCAL(1), lambda_1, lambda_2, TAIL_CALL,
  POS(51, 3)
};

static TAB_NUM t_lambda_1[] = {
  3, // locals
  1, // parameters
  LOCAL(3), // 52_3_type
  // serialization_tag_of(type)) type
  var_serialization_tag_of, 1, LOCAL(3), 1, LOCAL(2),
  // deserializers(serialization_tag_of(type)) type
  var_48_0_deserializers, 2, LOCAL(2), LOCAL(3), 1, var_48_0_deserializers,
  // next
  var_next, 0, TAIL_CALL,
  POS(53, 22),
  POS(53, 8),
  POS(54, 7)
};

static TAB_NUM t_lambda_2[] = {
  0, // locals
  0, // parameters
  //  deserializers
  LET, 1, var_48_0_deserializers, TAIL_CALL,
  POS(55, 7)
};

static TAB_NUM t_func_std__deserialize[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 59_0_text
  // split_into_lines $lines text
  var_split_into_lines, 1, LOCAL(2), 1, var_61_18_lines,
  // map &lines: (line)
  var_map, 2, var_61_18_lines, lambda_3, 1, var_61_18_lines,
  // fetch 1 $_pos 1 $objects
  func_fetch, 2, num_1, num_1, 2, LOCAL(1), LOCAL(3),
  // objects(1)
  LOCAL(3), 1, num_1, 1, LOCAL(1),
  // -> objects(1)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(61, 3),
  POS(62, 3),
  POS(132, 3),
  POS(133, 6),
  POS(133, 3)
};

static TAB_NUM t_lambda_3[] = {
  1, // locals
  1, // parameters
  var_62_13_line,
  // trim &line
  var_trim, 1, var_62_13_line, 1, var_62_13_line,
  // line(1)
  var_62_13_line, 1, num_1, 1, LOCAL(1),
  // case line(1)
  var_case, 10, LOCAL(1), chr_34, lambda_quot, chr_39, lambda_apos, value_range_99_1, lambda_12, chr_60, lambda_15, lambda_17, TAIL_CALL,
  POS(63, 5),
  POS(64, 10),
  POS(64, 5)
};

static TAB_NUM t_lambda_quot[] = {
  0, // locals
  0, // parameters
  // $buf ""
  LET, 1, string_1, 1, var_66_1_buf,
  // range &line 2 -2
  var_range, 3, var_62_13_line, num_2, minus_num_2, 1, var_62_13_line,
  // loop:
  var_loop, 1, lambda_loop, TAIL_CALL,
  POS(66, 9),
  POS(67, 9),
  POS(68, 9)
};

static TAB_NUM t_lambda_loop[] = {
  1, // locals
  0, // parameters
  // is_empty
  var_is_empty, 1, var_62_13_line, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_4, lambda_5, TAIL_CALL,
  POS(70, 18),
  POS(69, 11)
};

static TAB_NUM t_lambda_4[] = {
  0, // locals
  0, // parameters
  //  buf
  LET, 1, var_66_1_buf, TAIL_CALL,
  POS(71, 15)
};

static TAB_NUM t_lambda_5[] = {
  1, // locals
  0, // parameters
  // $chr line(1)
  var_62_13_line, 1, num_1, 1, var_73_1_chr,
  // range &line 2 -1
  var_range, 3, var_62_13_line, num_2, minus_num_1, 1, var_62_13_line,
  // chr == '@@':
  var_std__equal, 2, var_73_1_chr, chr_64, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_6, lambda_9, TAIL_CALL,
  POS(73, 15),
  POS(74, 15),
  POS(76, 17),
  POS(75, 15)
};

static TAB_NUM t_lambda_6[] = {
  2, // locals
  0, // parameters
  // $code integer(line)
  var_integer, 1, var_62_13_line, 1, LOCAL(2),
  // character(code)
  var_character, 1, LOCAL(2), 1, LOCAL(1),
  // push &buf character(code)
  var_push, 2, var_66_1_buf, LOCAL(1), 1, var_66_1_buf,
  // loop
  var_loop, 2, lambda_7, var_next, TAIL_CALL,
  POS(77, 19),
  POS(78, 29),
  POS(78, 19),
  POS(79, 19)
};

static TAB_NUM t_lambda_7[] = {
  2, // locals
  0, // parameters
  // line(1).is_a_digit:
  var_62_13_line, 1, num_1, 1, LOCAL(1),
  // is_a_digit:
  var_is_a_digit, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_line1_is_a_digit, lambda_8, TAIL_CALL,
  POS(82, 25),
  POS(82, 33),
  POS(81, 23)
};

static TAB_NUM t_lambda_line1_is_a_digit[] = {
  0, // locals
  0, // parameters
  // range &line 2 -1
  var_range, 3, var_62_13_line, num_2, minus_num_1, 1, var_62_13_line,
  // next
  var_next, 0, TAIL_CALL,
  POS(83, 27),
  POS(84, 27)
};

static TAB_NUM t_lambda_8[] = {
  0, // locals
  0, // parameters
  // range &line 2 -1 # skip semicolon
  var_range, 3, var_62_13_line, num_2, minus_num_1, 1, var_62_13_line,
  // break
  var_break, 0, TAIL_CALL,
  POS(86, 27),
  POS(87, 27)
};

static TAB_NUM t_lambda_9[] = {
  0, // locals
  0, // parameters
  // push &buf chr
  var_push, 2, var_66_1_buf, var_73_1_chr, 1, var_66_1_buf,
  // next
  var_next, 0, TAIL_CALL,
  POS(90, 19),
  POS(91, 19)
};

static TAB_NUM t_lambda_apos[] = {
  1, // locals
  0, // parameters
  // $chr line(2)
  var_62_13_line, 1, num_2, 1, var_93_1_chr,
  // chr == '@@':
  var_std__equal, 2, var_93_1_chr, chr_64, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_10, lambda_11, TAIL_CALL,
  POS(93, 9),
  POS(95, 11),
  POS(94, 9)
};

static TAB_NUM t_lambda_10[] = {
  2, // locals
  0, // parameters
  // range(line 3 -1))
  var_range, 3, var_62_13_line, num_3, minus_num_1, 1, LOCAL(1),
  // $code integer(range(line 3 -1))
  var_integer, 1, LOCAL(1), 1, LOCAL(2),
  // character(code)
  var_character, 1, LOCAL(2), 1, LOCAL(1),
  // -> character(code)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(96, 27),
  POS(96, 13),
  POS(97, 16),
  POS(97, 13)
};

static TAB_NUM t_lambda_11[] = {
  0, // locals
  0, // parameters
  //  chr
  LET, 1, var_93_1_chr, TAIL_CALL,
  POS(98, 13)
};

static TAB_NUM t_lambda_12[] = {
  1, // locals
  0, // parameters
  // line .contains. '.'
  var_contains, 2, var_62_13_line, chr_46, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_13, lambda_14, TAIL_CALL,
  POS(101, 11),
  POS(100, 9)
};

static TAB_NUM t_lambda_13[] = {
  1, // locals
  0, // parameters
  // real(line)
  var_real, 1, var_62_13_line, 1, LOCAL(1),
  //  real(line)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(102, 14),
  POS(102, 13)
};

static TAB_NUM t_lambda_14[] = {
  1, // locals
  0, // parameters
  // integer(line)
  var_integer, 1, var_62_13_line, 1, LOCAL(1),
  //  integer(line)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(103, 14),
  POS(103, 13)
};

static TAB_NUM t_lambda_15[] = {
  0, // locals
  0, // parameters
  // case line
  var_case, 8, var_62_13_line, str_true, lambda_true, str_false, lambda_false, str_undefined, lambda_undefined, lambda_16, TAIL_CALL,
  POS(105, 9)
};

static TAB_NUM t_lambda_true[] = {
  0, // locals
  0, // parameters
  //  true
  LET, 1, var_true, TAIL_CALL,
  POS(106, 22)
};

static TAB_NUM t_lambda_false[] = {
  0, // locals
  0, // parameters
  //  false
  LET, 1, var_false, TAIL_CALL,
  POS(107, 23)
};

static TAB_NUM t_lambda_undefined[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(108, 27)
};

static TAB_NUM t_lambda_16[] = {
  2, // locals
  0, // parameters
  // range(line 2 -2))
  var_range, 3, var_62_13_line, num_2, minus_num_2, 1, LOCAL(1),
  // unique_item(range(line 2 -2))
  var_unique_item, 1, LOCAL(1), 1, LOCAL(2),
  //  unique_item(range(line 2 -2))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(109, 26),
  POS(109, 14),
  POS(109, 13)
};

static TAB_NUM t_lambda_17[] = {
  0, // locals
  0, // parameters
  // $idx 1
  LET, 1, num_1, 1, var_111_1_idx,
  // $len length_of(line)
  var_length_of, 1, var_62_13_line, 1, var_112_1_len,
  // loop:
  var_loop, 1, lambda_2_loop, TAIL_CALL,
  POS(111, 9),
  POS(112, 9),
  POS(113, 9)
};

static TAB_NUM t_lambda_2_loop[] = {
  1, // locals
  0, // parameters
  // len
  var_std__less, 2, var_112_1_len, var_111_1_idx, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_18, lambda_19, TAIL_CALL,
  POS(115, 19),
  POS(114, 11)
};

static TAB_NUM t_lambda_18[] = {
  2, // locals
  0, // parameters
  // deserializers(line) "")
  var_deserializers, 1, var_62_13_line, 1, LOCAL(1),
  // tuple(deserializers(line) "")
  var_tuple, 2, LOCAL(1), string_1, 1, LOCAL(2),
  //  tuple(deserializers(line) "")
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(116, 22),
  POS(116, 16),
  POS(116, 15)
};

static TAB_NUM t_lambda_19[] = {
  2, // locals
  0, // parameters
  // line(idx) == ' '
  var_62_13_line, 1, var_111_1_idx, 1, LOCAL(1),
  // line(idx) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_20, lambda_23, TAIL_CALL,
  POS(119, 17),
  POS(119, 17),
  POS(118, 15)
};

static TAB_NUM t_lambda_20[] = {
  4, // locals
  0, // parameters
  // idx+1 -1)
  var_std__plus, 2, var_111_1_idx, num_1, 1, LOCAL(1),
  // $value range(line idx+1 -1)
  var_range, 3, var_62_13_line, LOCAL(1), minus_num_1, 1, var_121_1_value,
  // value(1) == '<' && value(-1) == '>' &value
  var_121_1_value, 1, num_1, 1, LOCAL(1),
  // value(1) == '<' && value(-1) == '>' &value
  var_std__equal, 2, LOCAL(1), chr_60, 1, LOCAL(2),
  // value(1) == '<' && value(-1) == '>' &value
  var_std__and, 2, LOCAL(2), lambda_21, 1, LOCAL(3),
  // update_if value(1) == '<' && value(-1) == '>' &value
  var_update_if, 3, LOCAL(3), var_121_1_value, lambda_22, 1, var_121_1_value,
  // idx-1))
  var_std__minus, 2, var_111_1_idx, num_1, 1, LOCAL(1),
  // range(line 1 idx-1))
  var_range, 3, var_62_13_line, num_1, LOCAL(1), 1, LOCAL(2),
  // deserializers(range(line 1 idx-1))
  var_deserializers, 1, LOCAL(2), 1, LOCAL(3),
  // tuple
  var_tuple, 2, LOCAL(3), var_121_1_value, 1, LOCAL(4),
  // ->
  LET, 1, LOCAL(4), TAIL_CALL,
  POS(121, 37),
  POS(121, 19),
  POS(122, 29),
  POS(122, 29),
  POS(122, 29),
  POS(122, 19),
  POS(126, 50),
  POS(126, 37),
  POS(126, 23),
  POS(125, 21),
  POS(124, 19)
};

static TAB_NUM t_lambda_21[] = {
  2, // locals
  0, // parameters
  // value(-1) == '>' &value
  var_121_1_value, 1, minus_num_1, 1, LOCAL(1),
  // value(-1) == '>' &value
  var_std__equal, 2, LOCAL(1), chr_62, 1, LOCAL(2),
  // value(-1) == '>' &value
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(122, 48),
  POS(122, 48),
  POS(122, 48)
};

static TAB_NUM t_lambda_22[] = {
  2, // locals
  0, // parameters
  // range(value 2 -2).to_integer
  var_range, 3, var_121_1_value, num_2, minus_num_2, 1, LOCAL(1),
  // to_integer
  var_to_integer, 1, LOCAL(1), 1, LOCAL(2),
  //  range(value 2 -2).to_integer
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(123, 24),
  POS(123, 42),
  POS(123, 23)
};

static TAB_NUM t_lambda_23[] = {
  0, // locals
  0, // parameters
  // inc &idx
  var_inc, 1, var_111_1_idx, 1, var_111_1_idx,
  // next
  var_next, 0, TAIL_CALL,
  POS(129, 19),
  POS(130, 19)
};

static TAB_NUM t_func_fetch[] = {
  1, // locals
  2, // parameters
  var_135_9_i,
  LOCAL(1), // 135_11_len
  // $items empty_list
  LET, 1, var_empty_list, 1, var_136_1_items,
  // repeat len
  var_repeat, 3, LOCAL(1), lambda_24, lambda_29, TAIL_CALL,
  POS(136, 5),
  POS(137, 5)
};

static TAB_NUM t_lambda_24[] = {
  2, // locals
  0, // parameters
  // $item lines(i)
  var_61_18_lines, 1, var_135_9_i, 1, var_139_1_item,
  // !i i+1
  var_std__plus, 2, var_135_9_i, num_1, 1, var_135_9_i,
  // is_defined && item.is_a_tuple:
  var_is_defined, 1, var_139_1_item, 1, LOCAL(1),
  // is_defined && item.is_a_tuple:
  var_std__and, 2, LOCAL(1), lambda_25, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_26, lambda_28, TAIL_CALL,
  POS(139, 9),
  POS(140, 9),
  POS(142, 16),
  POS(142, 16),
  POS(141, 9)
};

static TAB_NUM t_lambda_25[] = {
  1, // locals
  0, // parameters
  // is_a_tuple:
  var_is_a_tuple, 1, var_139_1_item, 1, LOCAL(1),
  // item.is_a_tuple:
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(142, 35),
  POS(142, 30)
};

static TAB_NUM t_lambda_26[] = {
  1, // locals
  0, // parameters
  // item $type $argument
  var_139_1_item, 0, 2, var_143_6_type, var_143_12_argument,
  // is_an_integer:
  var_is_an_integer, 1, var_143_12_argument, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_argument_is_an_integer, lambda_27, TAIL_CALL,
  POS(143, 13),
  POS(145, 24),
  POS(144, 13)
};

static TAB_NUM t_lambda_argument_is_an_integer[] = {
  3, // locals
  0, // parameters
  // fetch &i argument $arguments
  func_fetch, 2, var_135_9_i, var_143_12_argument, 2, var_135_9_i, LOCAL(3),
  // deserializer_of(type)(type arguments)
  var_deserializer_of, 1, var_143_6_type, 1, LOCAL(1),
  // deserializer_of(type)(type arguments)
  LOCAL(1), 2, var_143_6_type, LOCAL(3), 1, LOCAL(2),
  // push &items deserializer_of(type)(type arguments)
  var_push, 2, var_136_1_items, LOCAL(2), 1, var_136_1_items,
  // next
  var_next, 0, TAIL_CALL,
  POS(146, 17),
  POS(147, 29),
  POS(147, 29),
  POS(147, 17),
  POS(148, 17)
};

static TAB_NUM t_lambda_27[] = {
  2, // locals
  0, // parameters
  // deserializer_of(type)(type argument)
  var_deserializer_of, 1, var_143_6_type, 1, LOCAL(1),
  // deserializer_of(type)(type argument)
  LOCAL(1), 2, var_143_6_type, var_143_12_argument, 1, LOCAL(2),
  // push &items deserializer_of(type)(type argument)
  var_push, 2, var_136_1_items, LOCAL(2), 1, var_136_1_items,
  // next
  var_next, 0, TAIL_CALL,
  POS(150, 29),
  POS(150, 29),
  POS(150, 17),
  POS(151, 17)
};

static TAB_NUM t_lambda_28[] = {
  0, // locals
  0, // parameters
  // push &items item
  var_push, 2, var_136_1_items, var_139_1_item, 1, var_136_1_items,
  // next
  var_next, 0, TAIL_CALL,
  POS(153, 13),
  POS(154, 13)
};

static TAB_NUM t_lambda_29[] = {
  0, // locals
  0, // parameters
  //  i items
  LET, 2, var_135_9_i, var_136_1_items, TAIL_CALL,
  POS(155, 9)
};

static int value_range_99_1_arguments[] = {
  -chr_48, -chr_57
};

static FUNKY_CONSTANT constants_table[] = {
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__register_type}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__register_types}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__deserialize}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_3}},
  {FLT_POSITIVE_INT64, 0, {.value = 1}},
  {FLT_CHARACTER, 0, {.value = 48}},
  {FLT_CHARACTER, 0, {.value = 57}},
  {FLT_VALUE_RANGE, 2, {.arguments = value_range_99_1_arguments}},
  {FLT_CHARACTER, 0, {.value = 34}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_quot}},
  {FLT_STRING_8, 0, {.str_8 = ""}},
  {FLT_POSITIVE_INT64, 0, {.value = 2}},
  {FLT_NEGATIVE_INT64, 0, {.value = 2}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_4}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_5}},
  {FLT_NEGATIVE_INT64, 0, {.value = 1}},
  {FLT_CHARACTER, 0, {.value = 64}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_6}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_7}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_line1_is_a_digit}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_8}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_9}},
  {FLT_CHARACTER, 0, {.value = 39}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_apos}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_10}},
  {FLT_POSITIVE_INT64, 0, {.value = 3}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_11}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_12}},
  {FLT_CHARACTER, 0, {.value = 46}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_13}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_14}},
  {FLT_CHARACTER, 0, {.value = 60}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_15}},
  {FLT_STRING_8, 6, {.str_8 = "<true>"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_true}},
  {FLT_STRING_8, 7, {.str_8 = "<false>"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_false}},
  {FLT_STRING_8, 11, {.str_8 = "<undefined>"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_undefined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_16}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_17}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_18}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_19}},
  {FLT_CHARACTER, 0, {.value = 32}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_20}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_21}},
  {FLT_CHARACTER, 0, {.value = 62}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_22}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_23}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_fetch}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_24}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_25}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_26}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_argument_is_an_integer}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_27}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_28}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_29}}
};

static FUNKY_VARIABLE variables_table[] = {
  {
    FOT_POLYMORPHIC, 0, 0,
    "serialize\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "assign\000std", NULL,
    {.position = POS(23, 1)}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "serialization_tag_of\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "deserializer_of\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_DERIVED, 0, 0,
    "deserializers\000std", NULL,
    {"empty_hash_table\000"}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_hash_table\000", NULL,
    {.position = POS(37, 21)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "register_type\000std", NULL,
    {.const_idx = -func_std__register_type}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "serialization_tag_of\000", NULL,
    {.position = POS(44, 20)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "register_types\000std", NULL,
    {.const_idx = -func_std__register_types}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "48_0_deserializers\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "next\000", NULL,
    {.position = POS(54, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "for_each\000", NULL,
    {.position = POS(51, 3)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "deserialize\000std", NULL,
    {.const_idx = -func_std__deserialize}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "61_18_lines\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "split_into_lines\000", NULL,
    {.position = POS(61, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "62_13_line\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "trim\000", NULL,
    {.position = POS(63, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "value_range\000std", NULL,
    {.position = POS(99, 8)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "66_1_buf\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "range\000", NULL,
    {.position = POS(67, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_empty\000", NULL,
    {.position = POS(70, 18)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "73_1_chr\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "equal\000std", NULL,
    {.position = POS(76, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "integer\000", NULL,
    {.position = POS(77, 25)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "character\000", NULL,
    {.position = POS(78, 29)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "push\000", NULL,
    {.position = POS(78, 19)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_a_digit\000", NULL,
    {.position = POS(82, 33)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "break\000", NULL,
    {.position = POS(87, 27)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if\000", NULL,
    {.position = POS(81, 23)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "loop\000", NULL,
    {.position = POS(79, 19)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "93_1_chr\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "contains\000", NULL,
    {.position = POS(101, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "real\000", NULL,
    {.position = POS(102, 14)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "true\000", NULL,
    {.position = POS(106, 23)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "false\000", NULL,
    {.position = POS(107, 24)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "undefined\000", NULL,
    {.position = POS(108, 28)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "unique_item\000", NULL,
    {.position = POS(109, 14)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "case\000", NULL,
    {.position = POS(105, 9)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "111_1_idx\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "112_1_len\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "length_of\000", NULL,
    {.position = POS(112, 14)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "less\000std", NULL,
    {.position = POS(115, 19)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "deserializers\000", NULL,
    {.position = POS(116, 22)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "tuple\000", NULL,
    {.position = POS(116, 16)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000std", NULL,
    {.position = POS(121, 37)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "121_1_value\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "and\000std", NULL,
    {.position = POS(122, 29)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "to_integer\000", NULL,
    {.position = POS(123, 42)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "update_if\000", NULL,
    {.position = POS(122, 19)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "minus\000std", NULL,
    {.position = POS(126, 50)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "inc\000", NULL,
    {.position = POS(129, 19)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "map\000", NULL,
    {.position = POS(62, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "135_9_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "136_1_items\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_list\000", NULL,
    {.position = POS(136, 12)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "139_1_item\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_defined\000", NULL,
    {.position = POS(142, 16)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_a_tuple\000", NULL,
    {.position = POS(142, 35)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "143_6_type\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "143_12_argument\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_an_integer\000", NULL,
    {.position = POS(145, 24)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "deserializer_of\000", NULL,
    {.position = POS(147, 29)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "repeat\000", NULL,
    {.position = POS(137, 5)}
  }
};

static FUNKY_NAMESPACE used_namespaces[] = {
  {"std", 1, 0}
};

FUNKY_MODULE module__basic__types__serialization = {
  "_basic__types__serialization", // module name
  "basic/types/serialization.fky", // module filename
  .major_version = 0,
  .minor_version = 0,
  .feature_flags = FEAT_POSITIONS,
  .marker = 0,
  0, // number of required modules
  0, // number of defined namespaces
  1, // number of used namespaces
  61, // number of constants
  63, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  constants_table,
  variables_table,
};
