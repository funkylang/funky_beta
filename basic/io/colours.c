#include <stddef.h>
#include <stdint.h>

#include "runtime/common.h"
#include "runtime/builtins.h"
#include "runtime/fko.h"
#include "runtime/memory.h"

enum {
  chr_0 = -1,
  chr_16777215 = -2,
  chr_16711680 = -3,
  chr_16744576 = -4,
  chr_16761024 = -5,
  chr_8388608 = -6,
  chr_4194304 = -7,
  chr_65280 = -8,
  chr_8454016 = -9,
  chr_12648384 = -10,
  chr_32768 = -11,
  chr_16384 = -12,
  chr_255 = -13,
  chr_8421631 = -14,
  chr_12632319 = -15,
  chr_128 = -16,
  chr_64 = -17,
  chr_65535 = -18,
  chr_8454143 = -19,
  chr_12648447 = -20,
  chr_32896 = -21,
  chr_16711935 = -22,
  chr_8388736 = -23,
  chr_4194368 = -24,
  chr_16776960 = -25,
  chr_16777088 = -26,
  chr_16777152 = -27,
  chr_8421376 = -28,
  chr_4210688 = -29,
  chr_8421504 = -30,
  chr_12632256 = -31,
  chr_14737632 = -32,
  chr_4210752 = -33,
  chr_2105376 = -34,
  func_std__rgb_character = -35,
  num_0 = -36,
  num_24 = -37,
  num_16 = -38,
  num_8 = -39,
  func_std_types__character___text_attributes_of = -40,
  num_0xff = -41,
  func_std_types__character___red_component_of = -42,
  func_std_types__character___green_component_of = -43,
  func_std_types__character___blue_component_of = -44,
  func_std__is_dark = -45,
  num_0x180 = -46,
  func_std__colour_mixture = -47,
  lambda_1 = -48,
  lambda_arg_is_a_key_value_pair = -49,
  lambda_2 = -50,
  lambda_3 = -51,
  func_std__ansi_text_colour = -52,
  num_38 = -53,
  num_2 = -54,
  chr_109 = -55,
  func_std__ansi_background_colour = -56,
  num_48 = -57,
  func_std__ansi_reset_colour = -58,
  str_0m = -59,
  func_std__restore_colours = -60,
  str_39m49m = -61,
  func_std__csi = -62,
  chr_59 = -63,
  string_1 = -64
};

enum {
  var__START = FIRST_VAR-1,
  var_std__text_attributes_of, // attribute
  var_std__assign, // extern
  var_std__red_component_of, // attribute
  var_std__green_component_of, // attribute
  var_std__blue_component_of, // attribute
  var_std__BLACK, // initialized
  var_std__WHITE, // initialized
  var_std__RED, // initialized
  var_std__LIGHT_RED, // initialized
  var_std__VERY_LIGHT_RED, // initialized
  var_std__DARK_RED, // initialized
  var_std__VERY_DARK_RED, // initialized
  var_std__GREEN, // initialized
  var_std__LIGHT_GREEN, // initialized
  var_std__VERY_LIGHT_GREEN, // initialized
  var_std__DARK_GREEN, // initialized
  var_std__VERY_DARK_GREEN, // initialized
  var_std__BLUE, // initialized
  var_std__LIGHT_BLUE, // initialized
  var_std__VERY_LIGHT_BLUE, // initialized
  var_std__DARK_BLUE, // initialized
  var_std__VERY_DARK_BLUE, // initialized
  var_std__CYAN, // initialized
  var_std__LIGHT_CYAN, // initialized
  var_std__VERY_LIGHT_CYAN, // initialized
  var_std__DARK_CYAN, // initialized
  var_std__VERY_DARK_CYAN, // initialized
  var_std__MAGENTA, // initialized
  var_std__LIGHT_MAGENTA, // initialized
  var_std__VERY_LIGHT_MAGENTA, // initialized
  var_std__DARK_MAGENTA, // initialized
  var_std__VERY_DARK_MAGENTA, // initialized
  var_std__YELLOW, // initialized
  var_std__LIGHT_YELLOW, // initialized
  var_std__VERY_LIGHT_YELLOW, // initialized
  var_std__DARK_YELLOW, // initialized
  var_std__VERY_DARK_YELLOW, // initialized
  var_std__GREY, // initialized
  var_std__LIGHT_GREY, // initialized
  var_std__VERY_LIGHT_GREY, // initialized
  var_std__DARK_GREY, // initialized
  var_std__VERY_DARK_GREY, // initialized
  var_std__rgb_character, // initialized
  var_std__shift_left, // extern
  var_std__bit_or, // extern
  var_character, // extern
  var_std_types__character, // extern
  var_text_attributes_of, // extern polymorphic
  var_to_integer, // extern
  var_std__shift_right, // extern
  var_std__bit_and, // extern
  var_red_component_of, // extern polymorphic
  var_green_component_of, // extern polymorphic
  var_blue_component_of, // extern polymorphic
  var_std__is_dark, // initialized
  var_std__plus, // extern
  var_std__less, // extern
  var_std__colour_mixture, // initialized
  var_120_4_total_parts, // dynamic
  var_121_4_red, // dynamic
  var_122_4_green, // dynamic
  var_123_4_blue, // dynamic
  var_125_8_arg, // dynamic
  var_is_a_key_value_pair, // extern
  var_key_of, // extern
  var_value_of, // extern
  var_std__times, // extern
  var_plus, // extern
  var_next, // extern
  var_inc, // extern
  var_if, // extern
  var_std__over, // extern
  var_round, // extern
  var_rgb_character, // extern
  var_for_each, // extern
  var_std__ansi_text_colour, // initialized
  var_csi, // extern
  var_std__ansi_background_colour, // initialized
  var_std__ansi_reset_colour, // initialized
  var_std__restore_colours, // initialized
  var_print, // extern
  var_std__csi, // initialized
  var_join, // extern
  var_string, // extern
  var__END
};


static TAB_NUM t_func_std__rgb_character[] = {
  11, // locals
  -4, // parameters
  num_0, LOCAL(8), // 71_5_text_attributes
  MANDATORY_PARAMETER, LOCAL(9), // 72_5_red
  MANDATORY_PARAMETER, LOCAL(10), // 73_5_green
  MANDATORY_PARAMETER, LOCAL(11), // 74_5_blue
  // text_attributes << 24) | (red << 16) | (green << 8) | blue)
  var_std__shift_left, 2, LOCAL(8), num_24, 1, LOCAL(1),
  // red << 16) | (green << 8) | blue)
  var_std__shift_left, 2, LOCAL(9), num_16, 1, LOCAL(2),
  // text_attributes << 24) | (red << 16) | (green << 8) | blue)
  var_std__bit_or, 2, LOCAL(1), LOCAL(2), 1, LOCAL(3),
  // green << 8) | blue)
  var_std__shift_left, 2, LOCAL(10), num_8, 1, LOCAL(4),
  // text_attributes << 24) | (red << 16) | (green << 8) | blue)
  var_std__bit_or, 2, LOCAL(3), LOCAL(4), 1, LOCAL(5),
  // text_attributes << 24) | (red << 16) | (green << 8) | blue)
  var_std__bit_or, 2, LOCAL(5), LOCAL(11), 1, LOCAL(6),
  // character((text_attributes << 24) | (red << 16) | (green << 8) | blue)
  var_character, 1, LOCAL(6), 1, LOCAL(7),
  // -> character((text_attributes << 24) | (red << 16) | (green << 8) | blue)
  LET, 1, LOCAL(7), TAIL_CALL,
  POS(76, 17),
  POS(76, 43),
  POS(76, 17),
  POS(76, 57),
  POS(76, 17),
  POS(76, 17),
  POS(76, 6),
  POS(76, 3),
  LOCAL(10),
  LOCAL(8),
  LOCAL(11),
  LOCAL(9)
};

static FUNCTION_INFO i_func_std__rgb_character = {
  t_func_std__rgb_character, NULL, 8, 4,
  {"73_5_green\000", "71_5_text_attributes\000", "74_5_blue\000", "72_5_red\000"}
};

static TAB_NUM t_func_std_types__character___text_attributes_of[] = {
  4, // locals
  1, // parameters
  LOCAL(4), // 80_5_chr
  // to_integer >> 24) & 0xff
  var_to_integer, 1, LOCAL(4), 1, LOCAL(1),
  // to_integer >> 24) & 0xff
  var_std__shift_right, 2, LOCAL(1), num_24, 1, LOCAL(2),
  // to_integer >> 24) & 0xff
  var_std__bit_and, 2, LOCAL(2), num_0xff, 1, LOCAL(3),
  // -> (chr.to_integer >> 24) & 0xff
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(82, 11),
  POS(82, 11),
  POS(82, 11),
  POS(82, 3),
  LOCAL(4)
};

static FUNCTION_INFO i_func_std_types__character___text_attributes_of = {
  t_func_std_types__character___text_attributes_of, NULL, 4, 1,
  {"80_5_chr\000"}
};

static TAB_NUM t_func_std_types__character___red_component_of[] = {
  4, // locals
  1, // parameters
  LOCAL(4), // 86_5_chr
  // to_integer >> 16) & 0xff
  var_to_integer, 1, LOCAL(4), 1, LOCAL(1),
  // to_integer >> 16) & 0xff
  var_std__shift_right, 2, LOCAL(1), num_16, 1, LOCAL(2),
  // to_integer >> 16) & 0xff
  var_std__bit_and, 2, LOCAL(2), num_0xff, 1, LOCAL(3),
  // -> (chr.to_integer >> 16) & 0xff
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(88, 11),
  POS(88, 11),
  POS(88, 11),
  POS(88, 3),
  LOCAL(4)
};

static FUNCTION_INFO i_func_std_types__character___red_component_of = {
  t_func_std_types__character___red_component_of, NULL, 4, 1,
  {"86_5_chr\000"}
};

static TAB_NUM t_func_std_types__character___green_component_of[] = {
  4, // locals
  1, // parameters
  LOCAL(4), // 92_5_chr
  // to_integer >> 8) & 0xff
  var_to_integer, 1, LOCAL(4), 1, LOCAL(1),
  // to_integer >> 8) & 0xff
  var_std__shift_right, 2, LOCAL(1), num_8, 1, LOCAL(2),
  // to_integer >> 8) & 0xff
  var_std__bit_and, 2, LOCAL(2), num_0xff, 1, LOCAL(3),
  // -> (chr.to_integer >> 8) & 0xff
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(94, 11),
  POS(94, 11),
  POS(94, 11),
  POS(94, 3),
  LOCAL(4)
};

static FUNCTION_INFO i_func_std_types__character___green_component_of = {
  t_func_std_types__character___green_component_of, NULL, 4, 1,
  {"92_5_chr\000"}
};

static TAB_NUM t_func_std_types__character___blue_component_of[] = {
  3, // locals
  1, // parameters
  LOCAL(3), // 98_5_chr
  // to_integer & 0xff
  var_to_integer, 1, LOCAL(3), 1, LOCAL(1),
  // to_integer & 0xff
  var_std__bit_and, 2, LOCAL(1), num_0xff, 1, LOCAL(2),
  // -> chr.to_integer & 0xff
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(100, 10),
  POS(100, 10),
  POS(100, 3),
  LOCAL(3)
};

static FUNCTION_INFO i_func_std_types__character___blue_component_of = {
  t_func_std_types__character___blue_component_of, NULL, 3, 1,
  {"98_5_chr\000"}
};

static TAB_NUM t_func_std__is_dark[] = {
  10, // locals
  1, // parameters
  LOCAL(9), // 104_5_chr
  // $val chr.to_integer
  var_to_integer, 1, LOCAL(9), 1, LOCAL(10),
  // val >> 24) & 0xff)+((val >> 16) & 0xff)+(val >> 8) < 0x180
  var_std__shift_right, 2, LOCAL(10), num_24, 1, LOCAL(1),
  // val >> 24) & 0xff)+((val >> 16) & 0xff)+(val >> 8) < 0x180
  var_std__bit_and, 2, LOCAL(1), num_0xff, 1, LOCAL(2),
  // val >> 16) & 0xff)+(val >> 8) < 0x180
  var_std__shift_right, 2, LOCAL(10), num_16, 1, LOCAL(3),
  // val >> 16) & 0xff)+(val >> 8) < 0x180
  var_std__bit_and, 2, LOCAL(3), num_0xff, 1, LOCAL(4),
  // val >> 24) & 0xff)+((val >> 16) & 0xff)+(val >> 8) < 0x180
  var_std__plus, 2, LOCAL(2), LOCAL(4), 1, LOCAL(5),
  // val >> 8) < 0x180
  var_std__shift_right, 2, LOCAL(10), num_8, 1, LOCAL(6),
  // val >> 24) & 0xff)+((val >> 16) & 0xff)+(val >> 8) < 0x180
  var_std__plus, 2, LOCAL(5), LOCAL(6), 1, LOCAL(7),
  // val >> 24) & 0xff)+((val >> 16) & 0xff)+(val >> 8) < 0x180
  var_std__less, 2, LOCAL(7), num_0x180, 1, LOCAL(8),
  // -> ((val >> 24) & 0xff)+((val >> 16) & 0xff)+(val >> 8) < 0x180
  LET, 1, LOCAL(8), TAIL_CALL,
  POS(106, 3),
  POS(107, 8),
  POS(107, 8),
  POS(107, 29),
  POS(107, 29),
  POS(107, 8),
  POS(107, 49),
  POS(107, 8),
  POS(107, 8),
  POS(107, 3),
  LOCAL(10),
  LOCAL(9)
};

static FUNCTION_INFO i_func_std__is_dark = {
  t_func_std__is_dark, NULL, 10, 2,
  {"106_4_val\000", "104_5_chr\000"}
};

static TAB_NUM t_func_std__colour_mixture[] = {
  1, // locals
  -1, // parameters
  REST_PARAMETER, LOCAL(1), // 118_5_args
  // $total_parts 0
  LET, 1, num_0, 1, var_120_4_total_parts,
  // $red 0
  LET, 1, num_0, 1, var_121_4_red,
  // $green 0
  LET, 1, num_0, 1, var_122_4_green,
  // $blue 0
  LET, 1, num_0, 1, var_123_4_blue,
  // for_each args
  var_for_each, 3, LOCAL(1), lambda_1, lambda_3, TAIL_CALL,
  POS(120, 3),
  POS(121, 3),
  POS(122, 3),
  POS(123, 3),
  POS(124, 3),
  LOCAL(1)
};

static FUNCTION_INFO i_func_std__colour_mixture = {
  t_func_std__colour_mixture, NULL, 5, 1,
  {"118_5_args\000"}
};

static TAB_NUM t_lambda_1[] = {
  1, // locals
  1, // parameters
  var_125_8_arg,
  // is_a_key_value_pair:
  var_is_a_key_value_pair, 1, var_125_8_arg, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_arg_is_a_key_value_pair, lambda_2, TAIL_CALL,
  POS(127, 13),
  POS(126, 7)
};

static FUNCTION_INFO i_lambda_1 = {
  t_lambda_1, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_arg_is_a_key_value_pair[] = {
  4, // locals
  0, // parameters
  // $colour key_of(arg)
  var_key_of, 1, var_125_8_arg, 1, LOCAL(3),
  // $parts value_of(arg)
  var_value_of, 1, var_125_8_arg, 1, LOCAL(4),
  // red_component_of(colour)
  var_red_component_of, 1, LOCAL(3), 1, LOCAL(1),
  // parts*red_component_of(colour)
  var_std__times, 2, LOCAL(4), LOCAL(1), 1, LOCAL(2),
  // plus &red parts*red_component_of(colour)
  var_plus, 2, var_121_4_red, LOCAL(2), 1, var_121_4_red,
  // green_component_of(colour)
  var_green_component_of, 1, LOCAL(3), 1, LOCAL(1),
  // parts*green_component_of(colour)
  var_std__times, 2, LOCAL(4), LOCAL(1), 1, LOCAL(2),
  // plus &green parts*green_component_of(colour)
  var_plus, 2, var_122_4_green, LOCAL(2), 1, var_122_4_green,
  // blue_component_of(colour)
  var_blue_component_of, 1, LOCAL(3), 1, LOCAL(1),
  // parts*blue_component_of(colour)
  var_std__times, 2, LOCAL(4), LOCAL(1), 1, LOCAL(2),
  // plus &blue parts*blue_component_of(colour)
  var_plus, 2, var_123_4_blue, LOCAL(2), 1, var_123_4_blue,
  // plus &total_parts parts
  var_plus, 2, var_120_4_total_parts, LOCAL(4), 1, var_120_4_total_parts,
  // next
  var_next, 0, TAIL_CALL,
  POS(128, 11),
  POS(129, 11),
  POS(130, 27),
  POS(130, 21),
  POS(130, 11),
  POS(131, 29),
  POS(131, 23),
  POS(131, 11),
  POS(132, 28),
  POS(132, 22),
  POS(132, 11),
  POS(133, 11),
  POS(134, 11),
  LOCAL(3),
  LOCAL(4)
};

static FUNCTION_INFO i_lambda_arg_is_a_key_value_pair = {
  t_lambda_arg_is_a_key_value_pair, NULL, 13, 2,
  {"128_12_colour\000", "129_12_parts\000"}
};

static TAB_NUM t_lambda_2[] = {
  1, // locals
  0, // parameters
  // red_component_of(arg)
  var_red_component_of, 1, var_125_8_arg, 1, LOCAL(1),
  // plus &red red_component_of(arg)
  var_plus, 2, var_121_4_red, LOCAL(1), 1, var_121_4_red,
  // green_component_of(arg)
  var_green_component_of, 1, var_125_8_arg, 1, LOCAL(1),
  // plus &green green_component_of(arg)
  var_plus, 2, var_122_4_green, LOCAL(1), 1, var_122_4_green,
  // blue_component_of(arg)
  var_blue_component_of, 1, var_125_8_arg, 1, LOCAL(1),
  // plus &blue blue_component_of(arg)
  var_plus, 2, var_123_4_blue, LOCAL(1), 1, var_123_4_blue,
  // inc &total_parts
  var_inc, 1, var_120_4_total_parts, 1, var_120_4_total_parts,
  // next
  var_next, 0, TAIL_CALL,
  POS(136, 21),
  POS(136, 11),
  POS(137, 23),
  POS(137, 11),
  POS(138, 22),
  POS(138, 11),
  POS(139, 11),
  POS(140, 11)
};

static FUNCTION_INFO i_lambda_2 = {
  t_lambda_2, NULL, 8, 0,
  {}
};

static TAB_NUM t_lambda_3[] = {
  10, // locals
  0, // parameters
  // red/total_parts).to_integer
  var_std__over, 2, var_121_4_red, var_120_4_total_parts, 1, LOCAL(1),
  // round(red/total_parts).to_integer
  var_round, 1, LOCAL(1), 1, LOCAL(2),
  // to_integer
  var_to_integer, 1, LOCAL(2), 1, LOCAL(3),
  // green/total_parts).to_integer
  var_std__over, 2, var_122_4_green, var_120_4_total_parts, 1, LOCAL(4),
  // round(green/total_parts).to_integer
  var_round, 1, LOCAL(4), 1, LOCAL(5),
  // to_integer
  var_to_integer, 1, LOCAL(5), 1, LOCAL(6),
  // blue/total_parts).to_integer
  var_std__over, 2, var_123_4_blue, var_120_4_total_parts, 1, LOCAL(7),
  // round(blue/total_parts).to_integer
  var_round, 1, LOCAL(7), 1, LOCAL(8),
  // to_integer
  var_to_integer, 1, LOCAL(8), 1, LOCAL(9),
  // rgb_character
  var_rgb_character, 3, LOCAL(3), LOCAL(6), LOCAL(9), 1, LOCAL(10),
  // 
  LET, 1, LOCAL(10), TAIL_CALL,
  POS(143, 15),
  POS(143, 9),
  POS(143, 32),
  POS(144, 15),
  POS(144, 9),
  POS(144, 34),
  POS(145, 15),
  POS(145, 9),
  POS(145, 33),
  POS(142, 7),
  POS(141, 7)
};

static FUNCTION_INFO i_lambda_3 = {
  t_lambda_3, NULL, 11, 0,
  {}
};

static TAB_NUM t_func_std__ansi_text_colour[] = {
  6, // locals
  1, // parameters
  LOCAL(2), // 149_5_colour
  // $colour_value colour.to_integer
  var_to_integer, 1, LOCAL(2), 1, LOCAL(3),
  // $red colour_value >> 16
  var_std__shift_right, 2, LOCAL(3), num_16, 1, LOCAL(4),
  // colour_value >> 8) & 0xff
  var_std__shift_right, 2, LOCAL(3), num_8, 1, LOCAL(1),
  // $green (colour_value >> 8) & 0xff
  var_std__bit_and, 2, LOCAL(1), num_0xff, 1, LOCAL(5),
  // $blue colour_value & 0xff
  var_std__bit_and, 2, LOCAL(3), num_0xff, 1, LOCAL(6),
  // csi(38 2 red green blue 'm')
  var_csi, 6, num_38, num_2, LOCAL(4), LOCAL(5), LOCAL(6), chr_109, 1, LOCAL(1),
  // -> csi(38 2 red green blue 'm')
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(151, 3),
  POS(152, 3),
  POS(153, 11),
  POS(153, 3),
  POS(154, 3),
  POS(155, 6),
  POS(155, 3),
  LOCAL(3),
  LOCAL(5),
  LOCAL(2),
  LOCAL(4),
  LOCAL(6)
};

static FUNCTION_INFO i_func_std__ansi_text_colour = {
  t_func_std__ansi_text_colour, NULL, 7, 5,
  {"151_4_colour_value\000", "153_4_green\000", "149_5_colour\000", "152_4_red\000", "154_4_blue\000"}
};

static TAB_NUM t_func_std__ansi_background_colour[] = {
  6, // locals
  1, // parameters
  LOCAL(2), // 159_5_colour
  // $colour_value colour.to_integer
  var_to_integer, 1, LOCAL(2), 1, LOCAL(3),
  // $red colour_value >> 16
  var_std__shift_right, 2, LOCAL(3), num_16, 1, LOCAL(4),
  // colour_value >> 8) & 0xff
  var_std__shift_right, 2, LOCAL(3), num_8, 1, LOCAL(1),
  // $green (colour_value >> 8) & 0xff
  var_std__bit_and, 2, LOCAL(1), num_0xff, 1, LOCAL(5),
  // $blue colour_value & 0xff
  var_std__bit_and, 2, LOCAL(3), num_0xff, 1, LOCAL(6),
  // csi(48 2 red green blue 'm')
  var_csi, 6, num_48, num_2, LOCAL(4), LOCAL(5), LOCAL(6), chr_109, 1, LOCAL(1),
  // -> csi(48 2 red green blue 'm')
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(161, 3),
  POS(162, 3),
  POS(163, 11),
  POS(163, 3),
  POS(164, 3),
  POS(165, 6),
  POS(165, 3),
  LOCAL(6),
  LOCAL(4),
  LOCAL(3),
  LOCAL(5),
  LOCAL(2)
};

static FUNCTION_INFO i_func_std__ansi_background_colour = {
  t_func_std__ansi_background_colour, NULL, 7, 5,
  {"164_4_blue\000", "162_4_red\000", "161_4_colour_value\000", "163_4_green\000", "159_5_colour\000"}
};

static TAB_NUM t_func_std__ansi_reset_colour[] = {
  1, // locals
  0, // parameters
  // csi("0m")
  var_csi, 1, str_0m, 1, LOCAL(1),
  // -> csi("0m")
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(168, 6),
  POS(168, 3)
};

static FUNCTION_INFO i_func_std__ansi_reset_colour = {
  t_func_std__ansi_reset_colour, NULL, 2, 0,
  {}
};

static TAB_NUM t_func_std__restore_colours[] = {
  0, // locals
  0, // parameters
  // print! "@esc;[39m@esc;[49m"
  var_print, 1, str_39m49m, IO_TAIL_CALL,
  POS(171, 3)
};

static FUNCTION_INFO i_func_std__restore_colours = {
  t_func_std__restore_colours, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_std__csi[] = {
  4, // locals
  -2, // parameters
  REST_PARAMETER, LOCAL(3), // 173_13_arguments
  MANDATORY_PARAMETER, LOCAL(4), // 173_24_command
  // join(arguments ';') command)
  var_join, 2, LOCAL(3), chr_59, 1, LOCAL(1),
  // string("@esc;[" join(arguments ';') command)
  var_string, 3, string_1, LOCAL(1), LOCAL(4), 1, LOCAL(2),
  // -> string("@esc;[" join(arguments ';') command)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(174, 22),
  POS(174, 6),
  POS(174, 3),
  LOCAL(3),
  LOCAL(4)
};

static FUNCTION_INFO i_func_std__csi = {
  t_func_std__csi, NULL, 3, 2,
  {"173_13_arguments\000", "173_24_command\000"}
};

static FUNKY_CONSTANT constants_table[] = {
  {FLT_CHARACTER, 0, {.value = 0}},
  {FLT_CHARACTER, 0, {.value = 16777215}},
  {FLT_CHARACTER, 0, {.value = 16711680}},
  {FLT_CHARACTER, 0, {.value = 16744576}},
  {FLT_CHARACTER, 0, {.value = 16761024}},
  {FLT_CHARACTER, 0, {.value = 8388608}},
  {FLT_CHARACTER, 0, {.value = 4194304}},
  {FLT_CHARACTER, 0, {.value = 65280}},
  {FLT_CHARACTER, 0, {.value = 8454016}},
  {FLT_CHARACTER, 0, {.value = 12648384}},
  {FLT_CHARACTER, 0, {.value = 32768}},
  {FLT_CHARACTER, 0, {.value = 16384}},
  {FLT_CHARACTER, 0, {.value = 255}},
  {FLT_CHARACTER, 0, {.value = 8421631}},
  {FLT_CHARACTER, 0, {.value = 12632319}},
  {FLT_CHARACTER, 0, {.value = 128}},
  {FLT_CHARACTER, 0, {.value = 64}},
  {FLT_CHARACTER, 0, {.value = 65535}},
  {FLT_CHARACTER, 0, {.value = 8454143}},
  {FLT_CHARACTER, 0, {.value = 12648447}},
  {FLT_CHARACTER, 0, {.value = 32896}},
  {FLT_CHARACTER, 0, {.value = 16711935}},
  {FLT_CHARACTER, 0, {.value = 8388736}},
  {FLT_CHARACTER, 0, {.value = 4194368}},
  {FLT_CHARACTER, 0, {.value = 16776960}},
  {FLT_CHARACTER, 0, {.value = 16777088}},
  {FLT_CHARACTER, 0, {.value = 16777152}},
  {FLT_CHARACTER, 0, {.value = 8421376}},
  {FLT_CHARACTER, 0, {.value = 4210688}},
  {FLT_CHARACTER, 0, {.value = 8421504}},
  {FLT_CHARACTER, 0, {.value = 12632256}},
  {FLT_CHARACTER, 0, {.value = 14737632}},
  {FLT_CHARACTER, 0, {.value = 4210752}},
  {FLT_CHARACTER, 0, {.value = 2105376}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std__rgb_character}},
  {FLT_POSITIVE_INT64, 0, {.value = 0}},
  {FLT_POSITIVE_INT64, 0, {.value = 24}},
  {FLT_POSITIVE_INT64, 0, {.value = 16}},
  {FLT_POSITIVE_INT64, 0, {.value = 8}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__character___text_attributes_of}},
  {FLT_POSITIVE_INT64, 0, {.value = 0xff}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__character___red_component_of}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__character___green_component_of}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__character___blue_component_of}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std__is_dark}},
  {FLT_POSITIVE_INT64, 0, {.value = 0x180}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std__colour_mixture}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_1}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_arg_is_a_key_value_pair}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_2}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_3}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std__ansi_text_colour}},
  {FLT_POSITIVE_INT64, 0, {.value = 38}},
  {FLT_POSITIVE_INT64, 0, {.value = 2}},
  {FLT_CHARACTER, 0, {.value = 109}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std__ansi_background_colour}},
  {FLT_POSITIVE_INT64, 0, {.value = 48}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std__ansi_reset_colour}},
  {FLT_STRING_8, 2, {.str_8 = "0m"}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std__restore_colours}},
  {FLT_STRING_8, 10, {.str_8 = "\033[39m\033[49m"}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std__csi}},
  {FLT_CHARACTER, 0, {.value = 59}},
  {FLT_STRING_8, 2, {.str_8 = "\033["}}
};

static ATTRIBUTE_DEFINITION std_types__character__attributes[] = {
  {var_text_attributes_of, -func_std_types__character___text_attributes_of},
  {var_red_component_of, -func_std_types__character___red_component_of},
  {var_green_component_of, -func_std_types__character___green_component_of},
  {var_blue_component_of, -func_std_types__character___blue_component_of}
};

static FUNKY_VARIABLE variables_table[] = {
  {
    FOT_POLYMORPHIC, 0, 0,
    "text_attributes_of\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "assign\000std", NULL,
    {.position = POS(26, 1)}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "red_component_of\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "green_component_of\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "blue_component_of\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "BLACK\000std", NULL,
    {.const_idx = -chr_0}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "WHITE\000std", NULL,
    {.const_idx = -chr_16777215}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "RED\000std", NULL,
    {.const_idx = -chr_16711680}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "LIGHT_RED\000std", NULL,
    {.const_idx = -chr_16744576}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "VERY_LIGHT_RED\000std", NULL,
    {.const_idx = -chr_16761024}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "DARK_RED\000std", NULL,
    {.const_idx = -chr_8388608}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "VERY_DARK_RED\000std", NULL,
    {.const_idx = -chr_4194304}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "GREEN\000std", NULL,
    {.const_idx = -chr_65280}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "LIGHT_GREEN\000std", NULL,
    {.const_idx = -chr_8454016}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "VERY_LIGHT_GREEN\000std", NULL,
    {.const_idx = -chr_12648384}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "DARK_GREEN\000std", NULL,
    {.const_idx = -chr_32768}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "VERY_DARK_GREEN\000std", NULL,
    {.const_idx = -chr_16384}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "BLUE\000std", NULL,
    {.const_idx = -chr_255}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "LIGHT_BLUE\000std", NULL,
    {.const_idx = -chr_8421631}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "VERY_LIGHT_BLUE\000std", NULL,
    {.const_idx = -chr_12632319}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "DARK_BLUE\000std", NULL,
    {.const_idx = -chr_128}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "VERY_DARK_BLUE\000std", NULL,
    {.const_idx = -chr_64}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "CYAN\000std", NULL,
    {.const_idx = -chr_65535}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "LIGHT_CYAN\000std", NULL,
    {.const_idx = -chr_8454143}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "VERY_LIGHT_CYAN\000std", NULL,
    {.const_idx = -chr_12648447}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "DARK_CYAN\000std", NULL,
    {.const_idx = -chr_32896}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "VERY_DARK_CYAN\000std", NULL,
    {.const_idx = -chr_128}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "MAGENTA\000std", NULL,
    {.const_idx = -chr_16711935}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "LIGHT_MAGENTA\000std", NULL,
    {.const_idx = -chr_16744576}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "VERY_LIGHT_MAGENTA\000std", NULL,
    {.const_idx = -chr_16761024}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "DARK_MAGENTA\000std", NULL,
    {.const_idx = -chr_8388736}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "VERY_DARK_MAGENTA\000std", NULL,
    {.const_idx = -chr_4194368}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "YELLOW\000std", NULL,
    {.const_idx = -chr_16776960}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "LIGHT_YELLOW\000std", NULL,
    {.const_idx = -chr_16777088}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "VERY_LIGHT_YELLOW\000std", NULL,
    {.const_idx = -chr_16777152}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "DARK_YELLOW\000std", NULL,
    {.const_idx = -chr_8421376}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "VERY_DARK_YELLOW\000std", NULL,
    {.const_idx = -chr_4210688}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "GREY\000std", NULL,
    {.const_idx = -chr_8421504}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "LIGHT_GREY\000std", NULL,
    {.const_idx = -chr_12632256}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "VERY_LIGHT_GREY\000std", NULL,
    {.const_idx = -chr_14737632}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "DARK_GREY\000std", NULL,
    {.const_idx = -chr_4210752}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "VERY_DARK_GREY\000std", NULL,
    {.const_idx = -chr_2105376}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "rgb_character\000std", NULL,
    {.const_idx = -func_std__rgb_character}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "shift_left\000std", NULL,
    {.position = POS(76, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "bit_or\000std", NULL,
    {.position = POS(76, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "character\000", NULL,
    {.position = POS(76, 6)}
  },
  {
    FOT_UNKNOWN, 0, 4,
    "character\000std_types", std_types__character__attributes,
    {.position = POS(78, 1)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "text_attributes_of\000", NULL,
    {.position = POS(78, 23)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "to_integer\000", NULL,
    {.position = POS(82, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "shift_right\000std", NULL,
    {.position = POS(82, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "bit_and\000std", NULL,
    {.position = POS(82, 11)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "red_component_of\000", NULL,
    {.position = POS(84, 23)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "green_component_of\000", NULL,
    {.position = POS(90, 23)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "blue_component_of\000", NULL,
    {.position = POS(96, 23)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "is_dark\000std", NULL,
    {.const_idx = -func_std__is_dark}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000std", NULL,
    {.position = POS(107, 8)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "less\000std", NULL,
    {.position = POS(107, 8)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "colour_mixture\000std", NULL,
    {.const_idx = -func_std__colour_mixture}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "120_4_total_parts\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "121_4_red\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "122_4_green\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "123_4_blue\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "125_8_arg\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_a_key_value_pair\000", NULL,
    {.position = POS(127, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "key_of\000", NULL,
    {.position = POS(128, 19)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "value_of\000", NULL,
    {.position = POS(129, 18)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "times\000std", NULL,
    {.position = POS(130, 21)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000", NULL,
    {.position = POS(130, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "next\000", NULL,
    {.position = POS(134, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "inc\000", NULL,
    {.position = POS(139, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if\000", NULL,
    {.position = POS(126, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "over\000std", NULL,
    {.position = POS(143, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "round\000", NULL,
    {.position = POS(143, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "rgb_character\000", NULL,
    {.position = POS(142, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "for_each\000", NULL,
    {.position = POS(124, 3)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "ansi_text_colour\000std", NULL,
    {.const_idx = -func_std__ansi_text_colour}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "csi\000", NULL,
    {.position = POS(155, 6)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "ansi_background_colour\000std", NULL,
    {.const_idx = -func_std__ansi_background_colour}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "ansi_reset_colour\000std", NULL,
    {.const_idx = -func_std__ansi_reset_colour}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "restore_colours\000std", NULL,
    {.const_idx = -func_std__restore_colours}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "print\000", NULL,
    {.position = POS(171, 3)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "csi\000std", NULL,
    {.const_idx = -func_std__csi}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "join\000", NULL,
    {.position = POS(174, 22)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "string\000", NULL,
    {.position = POS(174, 6)}
  }
};

static FUNKY_NAMESPACE used_namespaces[] = {
  {"std", 1, 0}
};

FUNKY_MODULE module__basic__io__colours = {
  "_basic__io__colours", // module name
  "basic/io/colours.fky", // module filename
  .major_version = 0,
  .minor_version = 0,
  .feature_flags = FEAT_POSITIONS|FEAT_FUNCTION_INFO,
  .marker = 0,
  0, // number of required modules
  0, // number of defined namespaces
  1, // number of used namespaces
  64, // number of constants
  84, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  constants_table,
  variables_table,
};
