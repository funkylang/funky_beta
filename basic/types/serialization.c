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
  value_range_102_8 = -10,
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
  var_51_5_deserializers, // dynamic
  var_next, // extern
  var_for_each, // extern
  var_std__deserialize, // initialized
  var_64_21_lines, // dynamic
  var_split_into_lines, // extern
  var_65_16_line, // dynamic
  var_trim, // extern
  var_std__value_range, // extern
  var_69_10_buf, // dynamic
  var_range, // extern
  var_is_empty, // extern
  var_76_16_chr, // dynamic
  var_std__equal, // extern
  var_integer, // extern
  var_character, // extern
  var_push, // extern
  var_is_a_digit, // extern
  var_break, // extern
  var_if, // extern
  var_loop, // extern
  var_96_10_chr, // dynamic
  var_contains, // extern
  var_real, // extern
  var_true, // extern
  var_false, // extern
  var_undefined, // extern
  var_unique_item, // extern
  var_case, // extern
  var_114_10_idx, // dynamic
  var_115_10_len, // dynamic
  var_length_of, // extern
  var_std__less, // extern
  var_deserializers, // extern
  var_tuple, // extern
  var_std__plus, // extern
  var_124_20_value, // dynamic
  var_std__and, // extern
  var_to_integer, // extern
  var_update_if, // extern
  var_std__minus, // extern
  var_inc, // extern
  var_map, // extern
  var_138_12_i, // dynamic
  var_139_6_items, // dynamic
  var_empty_list, // extern
  var_142_10_item, // dynamic
  var_is_defined, // extern
  var_is_a_tuple, // extern
  var_146_19_type, // dynamic
  var_146_25_argument, // dynamic
  var_is_an_integer, // extern
  var_deserializer_of, // extern
  var_repeat, // extern
  var__END
};


static TAB_NUM t_func_std__register_type[] = {
  4, // locals
  2, // parameters
  LOCAL(3), // 44_5_deserializers
  LOCAL(4), // 45_5_type
  // serialization_tag_of(type) type)
  var_serialization_tag_of, 1, LOCAL(4), 1, LOCAL(1),
  // deserializers(serialization_tag_of(type) type)
  LOCAL(3), 2, LOCAL(1), LOCAL(4), 1, LOCAL(2),
  // -> deserializers(serialization_tag_of(type) type)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(47, 20),
  POS(47, 6),
  POS(47, 3)
};

static TAB_NUM t_func_std__register_types[] = {
  1, // locals
  2, // parameters
  var_51_5_deserializers,
  LOCAL(1), // 52_5_types
  // for_each types
  var_for_each, 3, LOCAL(1), lambda_1, lambda_2, TAIL_CALL,
  POS(54, 3)
};

static TAB_NUM t_lambda_1[] = {
  3, // locals
  1, // parameters
  LOCAL(3), // 55_8_type
  // serialization_tag_of(type)) type
  var_serialization_tag_of, 1, LOCAL(3), 1, LOCAL(2),
  // deserializers(serialization_tag_of(type)) type
  var_51_5_deserializers, 2, LOCAL(2), LOCAL(3), 1, var_51_5_deserializers,
  // next
  var_next, 0, TAIL_CALL,
  POS(56, 22),
  POS(56, 8),
  POS(57, 7)
};

static TAB_NUM t_lambda_2[] = {
  0, // locals
  0, // parameters
  //  deserializers
  LET, 1, var_51_5_deserializers, TAIL_CALL,
  POS(58, 7)
};

static TAB_NUM t_func_std__deserialize[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 62_5_text
  // split_into_lines $lines text
  var_split_into_lines, 1, LOCAL(2), 1, var_64_21_lines,
  // map &lines: (line)
  var_map, 2, var_64_21_lines, lambda_3, 1, var_64_21_lines,
  // fetch 1 $_pos 1 $objects
  func_fetch, 2, num_1, num_1, 2, LOCAL(1), LOCAL(3),
  // objects(1)
  LOCAL(3), 1, num_1, 1, LOCAL(1),
  // -> objects(1)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(64, 3),
  POS(65, 3),
  POS(135, 3),
  POS(136, 6),
  POS(136, 3)
};

static TAB_NUM t_lambda_3[] = {
  1, // locals
  1, // parameters
  var_65_16_line,
  // trim &line
  var_trim, 1, var_65_16_line, 1, var_65_16_line,
  // line(1)
  var_65_16_line, 1, num_1, 1, LOCAL(1),
  // case line(1)
  var_case, 10, LOCAL(1), chr_34, lambda_quot, chr_39, lambda_apos, value_range_102_8, lambda_12, chr_60, lambda_15, lambda_17, TAIL_CALL,
  POS(66, 5),
  POS(67, 10),
  POS(67, 5)
};

static TAB_NUM t_lambda_quot[] = {
  0, // locals
  0, // parameters
  // $buf ""
  LET, 1, string_1, 1, var_69_10_buf,
  // range &line 2 -2
  var_range, 3, var_65_16_line, num_2, minus_num_2, 1, var_65_16_line,
  // loop:
  var_loop, 1, lambda_loop, TAIL_CALL,
  POS(69, 9),
  POS(70, 9),
  POS(71, 9)
};

static TAB_NUM t_lambda_loop[] = {
  1, // locals
  0, // parameters
  // is_empty
  var_is_empty, 1, var_65_16_line, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_4, lambda_5, TAIL_CALL,
  POS(73, 18),
  POS(72, 11)
};

static TAB_NUM t_lambda_4[] = {
  0, // locals
  0, // parameters
  //  buf
  LET, 1, var_69_10_buf, TAIL_CALL,
  POS(74, 15)
};

static TAB_NUM t_lambda_5[] = {
  1, // locals
  0, // parameters
  // $chr line(1)
  var_65_16_line, 1, num_1, 1, var_76_16_chr,
  // range &line 2 -1
  var_range, 3, var_65_16_line, num_2, minus_num_1, 1, var_65_16_line,
  // chr == '@@':
  var_std__equal, 2, var_76_16_chr, chr_64, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_6, lambda_9, TAIL_CALL,
  POS(76, 15),
  POS(77, 15),
  POS(79, 17),
  POS(78, 15)
};

static TAB_NUM t_lambda_6[] = {
  2, // locals
  0, // parameters
  // $code integer(line)
  var_integer, 1, var_65_16_line, 1, LOCAL(2),
  // character(code)
  var_character, 1, LOCAL(2), 1, LOCAL(1),
  // push &buf character(code)
  var_push, 2, var_69_10_buf, LOCAL(1), 1, var_69_10_buf,
  // loop
  var_loop, 2, lambda_7, var_next, TAIL_CALL,
  POS(80, 19),
  POS(81, 29),
  POS(81, 19),
  POS(82, 19)
};

static TAB_NUM t_lambda_7[] = {
  2, // locals
  0, // parameters
  // line(1).is_a_digit:
  var_65_16_line, 1, num_1, 1, LOCAL(1),
  // is_a_digit:
  var_is_a_digit, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_line1_is_a_digit, lambda_8, TAIL_CALL,
  POS(85, 25),
  POS(85, 33),
  POS(84, 23)
};

static TAB_NUM t_lambda_line1_is_a_digit[] = {
  0, // locals
  0, // parameters
  // range &line 2 -1
  var_range, 3, var_65_16_line, num_2, minus_num_1, 1, var_65_16_line,
  // next
  var_next, 0, TAIL_CALL,
  POS(86, 27),
  POS(87, 27)
};

static TAB_NUM t_lambda_8[] = {
  0, // locals
  0, // parameters
  // range &line 2 -1 # skip semicolon
  var_range, 3, var_65_16_line, num_2, minus_num_1, 1, var_65_16_line,
  // break
  var_break, 0, TAIL_CALL,
  POS(89, 27),
  POS(90, 27)
};

static TAB_NUM t_lambda_9[] = {
  0, // locals
  0, // parameters
  // push &buf chr
  var_push, 2, var_69_10_buf, var_76_16_chr, 1, var_69_10_buf,
  // next
  var_next, 0, TAIL_CALL,
  POS(93, 19),
  POS(94, 19)
};

static TAB_NUM t_lambda_apos[] = {
  1, // locals
  0, // parameters
  // $chr line(2)
  var_65_16_line, 1, num_2, 1, var_96_10_chr,
  // chr == '@@':
  var_std__equal, 2, var_96_10_chr, chr_64, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_10, lambda_11, TAIL_CALL,
  POS(96, 9),
  POS(98, 11),
  POS(97, 9)
};

static TAB_NUM t_lambda_10[] = {
  2, // locals
  0, // parameters
  // range(line 3 -1))
  var_range, 3, var_65_16_line, num_3, minus_num_1, 1, LOCAL(1),
  // $code integer(range(line 3 -1))
  var_integer, 1, LOCAL(1), 1, LOCAL(2),
  // character(code)
  var_character, 1, LOCAL(2), 1, LOCAL(1),
  // -> character(code)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(99, 27),
  POS(99, 13),
  POS(100, 16),
  POS(100, 13)
};

static TAB_NUM t_lambda_11[] = {
  0, // locals
  0, // parameters
  //  chr
  LET, 1, var_96_10_chr, TAIL_CALL,
  POS(101, 13)
};

static TAB_NUM t_lambda_12[] = {
  1, // locals
  0, // parameters
  // line .contains. '.'
  var_contains, 2, var_65_16_line, chr_46, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_13, lambda_14, TAIL_CALL,
  POS(104, 11),
  POS(103, 9)
};

static TAB_NUM t_lambda_13[] = {
  1, // locals
  0, // parameters
  // real(line)
  var_real, 1, var_65_16_line, 1, LOCAL(1),
  //  real(line)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(105, 14),
  POS(105, 13)
};

static TAB_NUM t_lambda_14[] = {
  1, // locals
  0, // parameters
  // integer(line)
  var_integer, 1, var_65_16_line, 1, LOCAL(1),
  //  integer(line)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(106, 14),
  POS(106, 13)
};

static TAB_NUM t_lambda_15[] = {
  0, // locals
  0, // parameters
  // case line
  var_case, 8, var_65_16_line, str_true, lambda_true, str_false, lambda_false, str_undefined, lambda_undefined, lambda_16, TAIL_CALL,
  POS(108, 9)
};

static TAB_NUM t_lambda_true[] = {
  0, // locals
  0, // parameters
  //  true
  LET, 1, var_true, TAIL_CALL,
  POS(109, 22)
};

static TAB_NUM t_lambda_false[] = {
  0, // locals
  0, // parameters
  //  false
  LET, 1, var_false, TAIL_CALL,
  POS(110, 23)
};

static TAB_NUM t_lambda_undefined[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(111, 27)
};

static TAB_NUM t_lambda_16[] = {
  2, // locals
  0, // parameters
  // range(line 2 -2))
  var_range, 3, var_65_16_line, num_2, minus_num_2, 1, LOCAL(1),
  // unique_item(range(line 2 -2))
  var_unique_item, 1, LOCAL(1), 1, LOCAL(2),
  //  unique_item(range(line 2 -2))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(112, 26),
  POS(112, 14),
  POS(112, 13)
};

static TAB_NUM t_lambda_17[] = {
  0, // locals
  0, // parameters
  // $idx 1
  LET, 1, num_1, 1, var_114_10_idx,
  // $len length_of(line)
  var_length_of, 1, var_65_16_line, 1, var_115_10_len,
  // loop:
  var_loop, 1, lambda_2_loop, TAIL_CALL,
  POS(114, 9),
  POS(115, 9),
  POS(116, 9)
};

static TAB_NUM t_lambda_2_loop[] = {
  1, // locals
  0, // parameters
  // len
  var_std__less, 2, var_115_10_len, var_114_10_idx, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_18, lambda_19, TAIL_CALL,
  POS(118, 19),
  POS(117, 11)
};

static TAB_NUM t_lambda_18[] = {
  2, // locals
  0, // parameters
  // deserializers(line) "")
  var_deserializers, 1, var_65_16_line, 1, LOCAL(1),
  // tuple(deserializers(line) "")
  var_tuple, 2, LOCAL(1), string_1, 1, LOCAL(2),
  //  tuple(deserializers(line) "")
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(119, 22),
  POS(119, 16),
  POS(119, 15)
};

static TAB_NUM t_lambda_19[] = {
  2, // locals
  0, // parameters
  // line(idx) == ' '
  var_65_16_line, 1, var_114_10_idx, 1, LOCAL(1),
  // line(idx) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_20, lambda_23, TAIL_CALL,
  POS(122, 17),
  POS(122, 17),
  POS(121, 15)
};

static TAB_NUM t_lambda_20[] = {
  4, // locals
  0, // parameters
  // idx+1 -1)
  var_std__plus, 2, var_114_10_idx, num_1, 1, LOCAL(1),
  // $value range(line idx+1 -1)
  var_range, 3, var_65_16_line, LOCAL(1), minus_num_1, 1, var_124_20_value,
  // value(1) == '<' && value(-1) == '>' &value
  var_124_20_value, 1, num_1, 1, LOCAL(1),
  // value(1) == '<' && value(-1) == '>' &value
  var_std__equal, 2, LOCAL(1), chr_60, 1, LOCAL(2),
  // value(1) == '<' && value(-1) == '>' &value
  var_std__and, 2, LOCAL(2), lambda_21, 1, LOCAL(3),
  // update_if value(1) == '<' && value(-1) == '>' &value
  var_update_if, 3, LOCAL(3), var_124_20_value, lambda_22, 1, var_124_20_value,
  // idx-1))
  var_std__minus, 2, var_114_10_idx, num_1, 1, LOCAL(1),
  // range(line 1 idx-1))
  var_range, 3, var_65_16_line, num_1, LOCAL(1), 1, LOCAL(2),
  // deserializers(range(line 1 idx-1))
  var_deserializers, 1, LOCAL(2), 1, LOCAL(3),
  // tuple
  var_tuple, 2, LOCAL(3), var_124_20_value, 1, LOCAL(4),
  // ->
  LET, 1, LOCAL(4), TAIL_CALL,
  POS(124, 37),
  POS(124, 19),
  POS(125, 29),
  POS(125, 29),
  POS(125, 29),
  POS(125, 19),
  POS(129, 50),
  POS(129, 37),
  POS(129, 23),
  POS(128, 21),
  POS(127, 19)
};

static TAB_NUM t_lambda_21[] = {
  2, // locals
  0, // parameters
  // value(-1) == '>' &value
  var_124_20_value, 1, minus_num_1, 1, LOCAL(1),
  // value(-1) == '>' &value
  var_std__equal, 2, LOCAL(1), chr_62, 1, LOCAL(2),
  // value(-1) == '>' &value
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(125, 48),
  POS(125, 48),
  POS(125, 48)
};

static TAB_NUM t_lambda_22[] = {
  2, // locals
  0, // parameters
  // range(value 2 -2).to_integer
  var_range, 3, var_124_20_value, num_2, minus_num_2, 1, LOCAL(1),
  // to_integer
  var_to_integer, 1, LOCAL(1), 1, LOCAL(2),
  //  range(value 2 -2).to_integer
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(126, 24),
  POS(126, 42),
  POS(126, 23)
};

static TAB_NUM t_lambda_23[] = {
  0, // locals
  0, // parameters
  // inc &idx
  var_inc, 1, var_114_10_idx, 1, var_114_10_idx,
  // next
  var_next, 0, TAIL_CALL,
  POS(132, 19),
  POS(133, 19)
};

static TAB_NUM t_func_fetch[] = {
  1, // locals
  2, // parameters
  var_138_12_i,
  LOCAL(1), // 138_14_len
  // $items empty_list
  LET, 1, var_empty_list, 1, var_139_6_items,
  // repeat len
  var_repeat, 3, LOCAL(1), lambda_24, lambda_29, TAIL_CALL,
  POS(139, 5),
  POS(140, 5)
};

static TAB_NUM t_lambda_24[] = {
  2, // locals
  0, // parameters
  // $item lines(i)
  var_64_21_lines, 1, var_138_12_i, 1, var_142_10_item,
  // !i i+1
  var_std__plus, 2, var_138_12_i, num_1, 1, var_138_12_i,
  // is_defined && item.is_a_tuple:
  var_is_defined, 1, var_142_10_item, 1, LOCAL(1),
  // is_defined && item.is_a_tuple:
  var_std__and, 2, LOCAL(1), lambda_25, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_26, lambda_28, TAIL_CALL,
  POS(142, 9),
  POS(143, 9),
  POS(145, 16),
  POS(145, 16),
  POS(144, 9)
};

static TAB_NUM t_lambda_25[] = {
  1, // locals
  0, // parameters
  // is_a_tuple:
  var_is_a_tuple, 1, var_142_10_item, 1, LOCAL(1),
  // item.is_a_tuple:
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(145, 35),
  POS(145, 30)
};

static TAB_NUM t_lambda_26[] = {
  1, // locals
  0, // parameters
  // item $type $argument
  var_142_10_item, 0, 2, var_146_19_type, var_146_25_argument,
  // is_an_integer:
  var_is_an_integer, 1, var_146_25_argument, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_argument_is_an_integer, lambda_27, TAIL_CALL,
  POS(146, 13),
  POS(148, 24),
  POS(147, 13)
};

static TAB_NUM t_lambda_argument_is_an_integer[] = {
  3, // locals
  0, // parameters
  // fetch &i argument $arguments
  func_fetch, 2, var_138_12_i, var_146_25_argument, 2, var_138_12_i, LOCAL(3),
  // deserializer_of(type)(type arguments)
  var_deserializer_of, 1, var_146_19_type, 1, LOCAL(1),
  // deserializer_of(type)(type arguments)
  LOCAL(1), 2, var_146_19_type, LOCAL(3), 1, LOCAL(2),
  // push &items deserializer_of(type)(type arguments)
  var_push, 2, var_139_6_items, LOCAL(2), 1, var_139_6_items,
  // next
  var_next, 0, TAIL_CALL,
  POS(149, 17),
  POS(150, 29),
  POS(150, 29),
  POS(150, 17),
  POS(151, 17)
};

static TAB_NUM t_lambda_27[] = {
  2, // locals
  0, // parameters
  // deserializer_of(type)(type argument)
  var_deserializer_of, 1, var_146_19_type, 1, LOCAL(1),
  // deserializer_of(type)(type argument)
  LOCAL(1), 2, var_146_19_type, var_146_25_argument, 1, LOCAL(2),
  // push &items deserializer_of(type)(type argument)
  var_push, 2, var_139_6_items, LOCAL(2), 1, var_139_6_items,
  // next
  var_next, 0, TAIL_CALL,
  POS(153, 29),
  POS(153, 29),
  POS(153, 17),
  POS(154, 17)
};

static TAB_NUM t_lambda_28[] = {
  0, // locals
  0, // parameters
  // push &items item
  var_push, 2, var_139_6_items, var_142_10_item, 1, var_139_6_items,
  // next
  var_next, 0, TAIL_CALL,
  POS(156, 13),
  POS(157, 13)
};

static TAB_NUM t_lambda_29[] = {
  0, // locals
  0, // parameters
  //  i items
  LET, 2, var_138_12_i, var_139_6_items, TAIL_CALL,
  POS(158, 9)
};

static int value_range_102_8_arguments[] = {
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
  {FLT_VALUE_RANGE, 2, {.arguments = value_range_102_8_arguments}},
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
    {.position = POS(26, 1)}
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
    {.position = POS(40, 21)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "register_type\000std", NULL,
    {.const_idx = -func_std__register_type}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "serialization_tag_of\000", NULL,
    {.position = POS(47, 20)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "register_types\000std", NULL,
    {.const_idx = -func_std__register_types}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "51_5_deserializers\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "next\000", NULL,
    {.position = POS(57, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "for_each\000", NULL,
    {.position = POS(54, 3)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "deserialize\000std", NULL,
    {.const_idx = -func_std__deserialize}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "64_21_lines\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "split_into_lines\000", NULL,
    {.position = POS(64, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "65_16_line\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "trim\000", NULL,
    {.position = POS(66, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "value_range\000std", NULL,
    {.position = POS(102, 8)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "69_10_buf\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "range\000", NULL,
    {.position = POS(70, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_empty\000", NULL,
    {.position = POS(73, 18)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "76_16_chr\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "equal\000std", NULL,
    {.position = POS(79, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "integer\000", NULL,
    {.position = POS(80, 25)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "character\000", NULL,
    {.position = POS(81, 29)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "push\000", NULL,
    {.position = POS(81, 19)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_a_digit\000", NULL,
    {.position = POS(85, 33)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "break\000", NULL,
    {.position = POS(90, 27)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if\000", NULL,
    {.position = POS(84, 23)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "loop\000", NULL,
    {.position = POS(82, 19)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "96_10_chr\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "contains\000", NULL,
    {.position = POS(104, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "real\000", NULL,
    {.position = POS(105, 14)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "true\000", NULL,
    {.position = POS(109, 23)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "false\000", NULL,
    {.position = POS(110, 24)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "undefined\000", NULL,
    {.position = POS(111, 28)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "unique_item\000", NULL,
    {.position = POS(112, 14)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "case\000", NULL,
    {.position = POS(108, 9)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "114_10_idx\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "115_10_len\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "length_of\000", NULL,
    {.position = POS(115, 14)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "less\000std", NULL,
    {.position = POS(118, 19)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "deserializers\000", NULL,
    {.position = POS(119, 22)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "tuple\000", NULL,
    {.position = POS(119, 16)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000std", NULL,
    {.position = POS(124, 37)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "124_20_value\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "and\000std", NULL,
    {.position = POS(125, 29)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "to_integer\000", NULL,
    {.position = POS(126, 42)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "update_if\000", NULL,
    {.position = POS(125, 19)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "minus\000std", NULL,
    {.position = POS(129, 50)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "inc\000", NULL,
    {.position = POS(132, 19)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "map\000", NULL,
    {.position = POS(65, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "138_12_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "139_6_items\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_list\000", NULL,
    {.position = POS(139, 12)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "142_10_item\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_defined\000", NULL,
    {.position = POS(145, 16)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_a_tuple\000", NULL,
    {.position = POS(145, 35)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "146_19_type\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "146_25_argument\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_an_integer\000", NULL,
    {.position = POS(148, 24)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "deserializer_of\000", NULL,
    {.position = POS(150, 29)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "repeat\000", NULL,
    {.position = POS(140, 5)}
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
