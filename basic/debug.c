#include <stddef.h>
#include <stdint.h>

#include "runtime/common.h"
#include "runtime/builtins.h"
#include "runtime/fko.h"
#include "runtime/memory.h"

enum {
  func_std_types__object___debug__to_string = -1,
  num_0 = -2,
  num_1 = -3,
  lambda_is_a_plain_objectself = -4,
  lambda_1 = -5,
  string_1 = -6,
  string_2 = -7,
  lambda_2 = -8,
  num_2 = -9,
  num_4 = -10,
  string_3 = -11,
  lambda_3 = -12,
  chr_10 = -13,
  lambda_4 = -14,
  string_4 = -15,
  lambda_5 = -16,
  string_5 = -17,
  lambda_6 = -18,
  lambda_7 = -19,
  func_std_types__undefined___debug__to_string = -20,
  str_undefined = -21,
  func_std_types__error___debug__to_string = -22,
  func_debug__print = -23,
  func_debug__println = -24,
  func_debug__dump = -25,
  lambda_8 = -26,
  minus_num_1 = -27,
  lambda_loop = -28,
  lambda_9 = -29,
  lambda_10 = -30,
  string_6 = -31,
  lambda_11 = -32,
  string_7 = -33,
  func_debug__dump_one = -34,
  func_dump_args_to = -35,
  lambda_2_loop = -36,
  lambda_12 = -37,
  lambda_expr_is_an_error = -38,
  lambda_13 = -39,
  func_std__dump_to = -40,
  func_std__dump = -41,
  func_std__edump = -42,
  func_std__hexdump_to = -43,
  lambda_3_loop = -44,
  lambda_14 = -45,
  num_16 = -46,
  lambda_15 = -47,
  lambda_16 = -48,
  lambda_17 = -49,
  num_8 = -50,
  string_8 = -51,
  lambda_18 = -52,
  func_std__hexdump = -53,
  func_std__ehexdump = -54,
  func_debug__hexdump = -55,
  lambda_4_loop = -56,
  lambda_19 = -57,
  lambda_20 = -58,
  lambda_21 = -59,
  lambda_22 = -60,
  lambda_23 = -61
};

enum {
  var__START = FIRST_VAR-1,
  var_debug__to_string, // attribute
  var_std__assign, // extern
  var_std_types__object, // extern
  var_41_5_self, // dynamic
  var_42_5_indent, // dynamic
  var_43_5_depth, // dynamic
  var_is_a_plain_object, // extern
  var_47_8_typename, // dynamic
  var_debug__object_type, // extern
  var_std__equal, // extern
  var_std__string, // extern
  var_53_12_attr_indent, // dynamic
  var_std__plus, // extern
  var_54_12_value_indent, // dynamic
  var_55_12_attributes, // dynamic
  var_debug__object_attributes, // extern
  var_tabs_and_spaces, // extern
  var_56_12_buf, // dynamic
  var_append, // extern
  var_length_of, // extern
  var_59_16_attr_text, // dynamic
  var_std__minus, // extern
  var_60_16_value_text, // dynamic
  var_if, // extern
  var_next, // extern
  var_from_to_by, // extern
  var_debug__string, // extern
  var_std_types__undefined, // extern
  var_std_types__error, // extern
  var_to_error_message_string, // extern
  var_debug__print, // initialized
  var_to_utf8, // extern
  var_debug__write, // extern
  var_debug__println, // initialized
  var_debug__dump, // initialized
  var_161_16_args, // dynamic
  var_162_4_depth, // dynamic
  var_is_an_integer, // extern
  var_range, // extern
  var_update_if, // extern
  var_165_4_i, // dynamic
  var_166_4_n, // dynamic
  var_std__less, // extern
  var_170_10_label, // dynamic
  var_173_10_text, // dynamic
  var_break, // extern
  var_loop, // extern
  var_debug__dump_one, // initialized
  var_debug__dump_object, // extern
  var_224_17_fd, // dynamic
  var_224_20_args, // dynamic
  var_225_4_i, // dynamic
  var_226_4_n, // dynamic
  var_231_10_expr, // dynamic
  var_print_to, // extern
  var_is_an_error, // extern
  var_error_message_text_of, // extern
  var_println_to, // extern
  var_serialize, // extern
  var_std__dump_to, // initialized
  var_std__dump, // initialized
  var_STDOUT_FILENO, // extern
  var_std__edump, // initialized
  var_STDERR_FILENO, // extern
  var_std__hexdump_to, // initialized
  var_382_5_fd, // dynamic
  var_383_5_str, // dynamic
  var_385_4_i, // dynamic
  var_386_4_n, // dynamic
  var_std__not, // extern
  var_mod, // extern
  var_on, // extern
  var_hex, // extern
  var_inc, // extern
  var_to_integer, // extern
  var_std__hexdump, // initialized
  var_hexdump_to, // extern
  var_std__ehexdump, // initialized
  var_debug__hexdump, // initialized
  var_472_5_str, // dynamic
  var_474_4_i, // dynamic
  var_475_4_n, // dynamic
  var__END
};


static TAB_NUM t_func_std_types__object___debug__to_string[] = {
  1, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_41_5_self,
  num_0, var_42_5_indent,
  num_1, var_43_5_depth,
  // is_a_plain_object(self):
  var_is_a_plain_object, 1, var_41_5_self, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_is_a_plain_objectself, lambda_7, TAIL_CALL,
  POS(46, 5),
  POS(45, 3)
};

static FUNCTION_INFO i_func_std_types__object___debug__to_string = {
  t_func_std_types__object___debug__to_string, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_is_a_plain_objectself[] = {
  1, // locals
  0, // parameters
  // $typename debug::object_type(self)
  var_debug__object_type, 1, var_41_5_self, 1, var_47_8_typename,
  // depth == 0
  var_std__equal, 2, var_43_5_depth, num_0, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1, lambda_2, TAIL_CALL,
  POS(47, 7),
  POS(49, 9),
  POS(48, 7)
};

static FUNCTION_INFO i_lambda_is_a_plain_objectself = {
  t_lambda_is_a_plain_objectself, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_1[] = {
  1, // locals
  0, // parameters
  // "
  var_std__string, 3, string_1, var_47_8_typename, string_2, 1, LOCAL(1),
  //  "
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(50, 12),
  POS(50, 11)
};

static FUNCTION_INFO i_lambda_1 = {
  t_lambda_1, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_2[] = {
  1, // locals
  0, // parameters
  // $attr_indent indent+2
  var_std__plus, 2, var_42_5_indent, num_2, 1, var_53_12_attr_indent,
  // $value_indent indent+4
  var_std__plus, 2, var_42_5_indent, num_4, 1, var_54_12_value_indent,
  // $attributes debug::object_attributes(self)
  var_debug__object_attributes, 1, var_41_5_self, 1, var_55_12_attributes,
  // tabs_and_spaces(indent) typename "@nl;")
  var_tabs_and_spaces, 1, var_42_5_indent, 1, LOCAL(1),
  // $buf append("@nl;" tabs_and_spaces(indent) typename "@nl;")
  var_append, 4, string_3, LOCAL(1), var_47_8_typename, string_3, 1, var_56_12_buf,
  // length_of(attributes) 2
  var_length_of, 1, var_55_12_attributes, 1, LOCAL(1),
  // from_to_by 1 length_of(attributes) 2
  var_from_to_by, 5, num_1, LOCAL(1), num_2, lambda_3, lambda_6, TAIL_CALL,
  POS(53, 11),
  POS(54, 11),
  POS(55, 11),
  POS(56, 30),
  POS(56, 11),
  POS(57, 24),
  POS(57, 11)
};

static FUNCTION_INFO i_lambda_2 = {
  t_lambda_2, NULL, 7, 0,
  {}
};

static TAB_NUM t_lambda_3[] = {
  4, // locals
  1, // parameters
  LOCAL(4), // 58_16_i
  // tabs_and_spaces(attr_indent) attributes(i))
  var_tabs_and_spaces, 1, var_53_12_attr_indent, 1, LOCAL(1),
  // attributes(i))
  var_55_12_attributes, 1, LOCAL(4), 1, LOCAL(2),
  // $attr_text append(tabs_and_spaces(attr_indent) attributes(i))
  var_append, 2, LOCAL(1), LOCAL(2), 1, var_59_16_attr_text,
  // i+1) value_indent depth-1)
  var_std__plus, 2, LOCAL(4), num_1, 1, LOCAL(1),
  // attributes(i+1) value_indent depth-1)
  var_55_12_attributes, 1, LOCAL(1), 1, LOCAL(2),
  // depth-1)
  var_std__minus, 2, var_43_5_depth, num_1, 1, LOCAL(3),
  // $value_text debug::to_string(attributes(i+1) value_indent depth-1)
  var_debug__to_string, 3, LOCAL(2), var_54_12_value_indent, LOCAL(3), 1, var_60_16_value_text,
  // value_text(1) == '@nl;'
  var_60_16_value_text, 1, num_1, 1, LOCAL(1),
  // value_text(1) == '@nl;'
  var_std__equal, 2, LOCAL(1), chr_10, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_4, lambda_5, 1, LOCAL(3),
  // append &buf
  var_append, 2, var_56_12_buf, LOCAL(3), 1, var_56_12_buf,
  // next
  var_next, 0, TAIL_CALL,
  POS(59, 33),
  POS(59, 62),
  POS(59, 15),
  POS(60, 55),
  POS(60, 44),
  POS(60, 73),
  POS(60, 15),
  POS(63, 19),
  POS(63, 19),
  POS(62, 17),
  POS(61, 15),
  POS(66, 15),
  LOCAL(4)
};

static FUNCTION_INFO i_lambda_3 = {
  t_lambda_3, NULL, 12, 1,
  {"58_16_i\000"}
};

static TAB_NUM t_lambda_4[] = {
  1, // locals
  0, // parameters
  // "@(attr_text) =@(value_text)"
  var_std__string, 3, var_59_16_attr_text, string_4, var_60_16_value_text, 1, LOCAL(1),
  //  "@(attr_text) =@(value_text)"
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(64, 22),
  POS(64, 21)
};

static FUNCTION_INFO i_lambda_4 = {
  t_lambda_4, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_5[] = {
  1, // locals
  0, // parameters
  // "@(attr_text) = @(value_text)"
  var_std__string, 3, var_59_16_attr_text, string_5, var_60_16_value_text, 1, LOCAL(1),
  //  "@(attr_text) = @(value_text)"
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(65, 22),
  POS(65, 21)
};

static FUNCTION_INFO i_lambda_5 = {
  t_lambda_5, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_6[] = {
  0, // locals
  0, // parameters
  //  buf
  LET, 1, var_56_12_buf, TAIL_CALL,
  POS(67, 15)
};

static FUNCTION_INFO i_lambda_6 = {
  t_lambda_6, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_7[] = {
  1, // locals
  0, // parameters
  // debug::string(self indent depth)
  var_debug__string, 3, var_41_5_self, var_42_5_indent, var_43_5_depth, 1, LOCAL(1),
  //  debug::string(self indent depth)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(68, 8),
  POS(68, 7)
};

static FUNCTION_INFO i_lambda_7 = {
  t_lambda_7, NULL, 2, 0,
  {}
};

static TAB_NUM t_func_std_types__undefined___debug__to_string[] = {
  1, // locals
  -3, // parameters
  MANDATORY_PARAMETER, LOCAL(1),
  num_0, LOCAL(1),
  num_1, LOCAL(1),
  // -> "undefined@nl;"
  LET, 1, str_undefined, TAIL_CALL,
  POS(76, 3)
};

static FUNCTION_INFO i_func_std_types__undefined___debug__to_string = {
  t_func_std_types__undefined___debug__to_string, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_std_types__error___debug__to_string[] = {
  3, // locals
  -3, // parameters
  MANDATORY_PARAMETER, LOCAL(3), // 80_5_self
  num_0, LOCAL(1),
  num_1, LOCAL(1),
  // to_error_message_string)@nl;"
  var_to_error_message_string, 1, LOCAL(3), 1, LOCAL(1),
  // "@(self.to_error_message_string)@nl;"
  var_std__string, 2, LOCAL(1), string_3, 1, LOCAL(2),
  // -> "@(self.to_error_message_string)@nl;"
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(84, 14),
  POS(84, 6),
  POS(84, 3),
  LOCAL(3)
};

static FUNCTION_INFO i_func_std_types__error___debug__to_string = {
  t_func_std_types__error___debug__to_string, NULL, 3, 1,
  {"80_5_self\000"}
};

static TAB_NUM t_func_debug__print[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 88_5_str
  // to_utf8
  var_to_utf8, 1, LOCAL(2), 1, LOCAL(1),
  // debug::write str.to_utf8
  var_debug__write, 1, LOCAL(1), TAIL_CALL,
  POS(90, 20),
  POS(90, 3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_debug__print = {
  t_func_debug__print, NULL, 2, 1,
  {"88_5_str\000"}
};

static TAB_NUM t_func_debug__println[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 115_5_str
  // debug::print str
  var_debug__print, 1, LOCAL(1), 0,
  // debug::print "@nl;"
  var_debug__print, 1, string_3, TAIL_CALL,
  POS(117, 3),
  POS(118, 3),
  LOCAL(1)
};

static FUNCTION_INFO i_func_debug__println = {
  t_func_debug__println, NULL, 2, 1,
  {"115_5_str\000"}
};

static TAB_NUM t_func_debug__dump[] = {
  2, // locals
  -1, // parameters
  REST_PARAMETER, var_161_16_args,
  // $depth 1
  LET, 1, num_1, 1, var_162_4_depth,
  // args(1).is_an_integer &depth &args
  var_161_16_args, 1, num_1, 1, LOCAL(1),
  // is_an_integer &depth &args
  var_is_an_integer, 1, LOCAL(1), 1, LOCAL(2),
  // update_if args(1).is_an_integer &depth &args
  var_update_if, 4, LOCAL(2), var_162_4_depth, var_161_16_args, lambda_8, 2, var_162_4_depth, var_161_16_args,
  // $i 1
  LET, 1, num_1, 1, var_165_4_i,
  // $n length_of(args)
  var_length_of, 1, var_161_16_args, 1, var_166_4_n,
  // loop:
  var_loop, 1, lambda_loop, TAIL_CALL,
  POS(162, 3),
  POS(163, 13),
  POS(163, 21),
  POS(163, 3),
  POS(165, 3),
  POS(166, 3),
  POS(167, 3)
};

static FUNCTION_INFO i_func_debug__dump = {
  t_func_debug__dump, NULL, 7, 0,
  {}
};

static TAB_NUM t_lambda_8[] = {
  2, // locals
  0, // parameters
  // args(1) range(args 2 -1)
  var_161_16_args, 1, num_1, 1, LOCAL(1),
  // range(args 2 -1)
  var_range, 3, var_161_16_args, num_2, minus_num_1, 1, LOCAL(2),
  //  args(1) range(args 2 -1)
  LET, 2, LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(164, 8),
  POS(164, 16),
  POS(164, 7)
};

static FUNCTION_INFO i_lambda_8 = {
  t_lambda_8, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_loop[] = {
  1, // locals
  0, // parameters
  // i < n:
  var_std__less, 2, var_165_4_i, var_166_4_n, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_9, var_break, TAIL_CALL,
  POS(169, 7),
  POS(168, 5)
};

static FUNCTION_INFO i_lambda_loop = {
  t_lambda_loop, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_9[] = {
  3, // locals
  0, // parameters
  // $label args(i)
  var_161_16_args, 1, var_165_4_i, 1, var_170_10_label,
  // i+1)
  var_std__plus, 2, var_165_4_i, num_1, 1, LOCAL(1),
  // $expr args(i+1)
  var_161_16_args, 1, LOCAL(1), 1, LOCAL(3),
  // !i i+2
  var_std__plus, 2, var_165_4_i, num_2, 1, var_165_4_i,
  // $text debug::to_string(expr 2 depth)
  var_debug__to_string, 3, LOCAL(3), num_2, var_162_4_depth, 1, var_173_10_text,
  // text(1) == '@nl;':
  var_173_10_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '@nl;':
  var_std__equal, 2, LOCAL(1), chr_10, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_10, lambda_11, TAIL_CALL,
  POS(170, 9),
  POS(171, 20),
  POS(171, 9),
  POS(172, 9),
  POS(173, 9),
  POS(175, 11),
  POS(175, 11),
  POS(174, 9),
  LOCAL(3)
};

static FUNCTION_INFO i_lambda_9 = {
  t_lambda_9, NULL, 8, 1,
  {"171_10_expr\000"}
};

static TAB_NUM t_lambda_10[] = {
  1, // locals
  0, // parameters
  // "@(label):@(text)"
  var_std__string, 3, var_170_10_label, string_6, var_173_10_text, 1, LOCAL(1),
  // debug::print "@(label):@(text)"
  var_debug__print, 1, LOCAL(1), 0,
  // next
  var_next, 0, TAIL_CALL,
  POS(176, 26),
  POS(176, 13),
  POS(177, 13)
};

static FUNCTION_INFO i_lambda_10 = {
  t_lambda_10, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_11[] = {
  1, // locals
  0, // parameters
  // "@(label): @(text)"
  var_std__string, 3, var_170_10_label, string_7, var_173_10_text, 1, LOCAL(1),
  // debug::print "@(label): @(text)"
  var_debug__print, 1, LOCAL(1), 0,
  // next
  var_next, 0, TAIL_CALL,
  POS(179, 26),
  POS(179, 13),
  POS(180, 13)
};

static FUNCTION_INFO i_lambda_11 = {
  t_lambda_11, NULL, 3, 0,
  {}
};

static TAB_NUM t_func_debug__dump_one[] = {
  3, // locals
  -3, // parameters
  num_1, LOCAL(1), // 216_5_depth
  MANDATORY_PARAMETER, LOCAL(2), // 217_5_label
  MANDATORY_PARAMETER, LOCAL(3), // 218_5_expr
  // debug::print label
  var_debug__print, 1, LOCAL(2), 0,
  // debug::print ": "
  var_debug__print, 1, string_7, 0,
  // debug::dump_object depth expr
  var_debug__dump_object, 2, LOCAL(1), LOCAL(3), TAIL_CALL,
  POS(220, 3),
  POS(221, 3),
  POS(222, 3),
  LOCAL(2),
  LOCAL(1),
  LOCAL(3)
};

static FUNCTION_INFO i_func_debug__dump_one = {
  t_func_debug__dump_one, NULL, 3, 3,
  {"217_5_label\000", "216_5_depth\000", "218_5_expr\000"}
};

static TAB_NUM t_func_dump_args_to[] = {
  0, // locals
  2, // parameters
  var_224_17_fd,
  var_224_20_args,
  // $i 1
  LET, 1, num_1, 1, var_225_4_i,
  // $n length_of(args)
  var_length_of, 1, var_224_20_args, 1, var_226_4_n,
  // loop:
  var_loop, 1, lambda_2_loop, IO_TAIL_CALL,
  POS(225, 3),
  POS(226, 3),
  POS(227, 3)
};

static FUNCTION_INFO i_func_dump_args_to = {
  t_func_dump_args_to, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_2_loop[] = {
  1, // locals
  0, // parameters
  // i < n:
  var_std__less, 2, var_225_4_i, var_226_4_n, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_12, var_break, IO_TAIL_CALL,
  POS(229, 7),
  POS(228, 5)
};

static FUNCTION_INFO i_lambda_2_loop = {
  t_lambda_2_loop, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_12[] = {
  2, // locals
  0, // parameters
  // $name args(i)
  var_224_20_args, 1, var_225_4_i, 1, LOCAL(2),
  // i+1)
  var_std__plus, 2, var_225_4_i, num_1, 1, LOCAL(1),
  // $expr args(i+1)
  var_224_20_args, 1, LOCAL(1), 1, var_231_10_expr,
  // !i i+2
  var_std__plus, 2, var_225_4_i, num_2, 1, var_225_4_i,
  // print_to! fd name ": "
  var_print_to, 3, var_224_17_fd, LOCAL(2), string_7, IO_CALL(0),
  // is_an_error:
  var_is_an_error, 1, var_231_10_expr, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_expr_is_an_error, lambda_13, IO_TAIL_CALL,
  POS(230, 9),
  POS(231, 20),
  POS(231, 9),
  POS(232, 9),
  POS(233, 9),
  POS(235, 16),
  POS(234, 9),
  LOCAL(2)
};

static FUNCTION_INFO i_lambda_12 = {
  t_lambda_12, NULL, 7, 1,
  {"230_10_name\000"}
};

static TAB_NUM t_lambda_expr_is_an_error[] = {
  1, // locals
  0, // parameters
  // error_message_text_of(expr)
  var_error_message_text_of, 1, var_231_10_expr, 1, LOCAL(1),
  // println_to! fd error_message_text_of(expr)
  var_println_to, 2, var_224_17_fd, LOCAL(1), IO_CALL(0),
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(236, 28),
  POS(236, 13),
  POS(237, 13)
};

static FUNCTION_INFO i_lambda_expr_is_an_error = {
  t_lambda_expr_is_an_error, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_13[] = {
  1, // locals
  0, // parameters
  // serialize(expr 0)
  var_serialize, 2, var_231_10_expr, num_0, 1, LOCAL(1),
  // print_to! fd serialize(expr 0)
  var_print_to, 2, var_224_17_fd, LOCAL(1), IO_CALL(0),
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(239, 26),
  POS(239, 13),
  POS(240, 13)
};

static FUNCTION_INFO i_lambda_13 = {
  t_lambda_13, NULL, 3, 0,
  {}
};

static TAB_NUM t_func_std__dump_to[] = {
  2, // locals
  -2, // parameters
  MANDATORY_PARAMETER, LOCAL(1), // 271_5_fd
  REST_PARAMETER, LOCAL(2), // 272_5_args
  // dump_args_to! fd args
  func_dump_args_to, 2, LOCAL(1), LOCAL(2), IO_TAIL_CALL,
  POS(274, 3),
  LOCAL(2),
  LOCAL(1)
};

static FUNCTION_INFO i_func_std__dump_to = {
  t_func_std__dump_to, NULL, 1, 2,
  {"272_5_args\000", "271_5_fd\000"}
};

static TAB_NUM t_func_std__dump[] = {
  1, // locals
  -1, // parameters
  REST_PARAMETER, LOCAL(1), // 321_5_args
  // dump_args_to! STDOUT_FILENO args
  func_dump_args_to, 2, var_STDOUT_FILENO, LOCAL(1), IO_TAIL_CALL,
  POS(323, 3),
  LOCAL(1)
};

static FUNCTION_INFO i_func_std__dump = {
  t_func_std__dump, NULL, 1, 1,
  {"321_5_args\000"}
};

static TAB_NUM t_func_std__edump[] = {
  1, // locals
  -1, // parameters
  REST_PARAMETER, LOCAL(1), // 357_5_args
  // dump_args_to! STDERR_FILENO args
  func_dump_args_to, 2, var_STDERR_FILENO, LOCAL(1), IO_TAIL_CALL,
  POS(359, 3),
  LOCAL(1)
};

static FUNCTION_INFO i_func_std__edump = {
  t_func_std__edump, NULL, 1, 1,
  {"357_5_args\000"}
};

static TAB_NUM t_func_std__hexdump_to[] = {
  0, // locals
  2, // parameters
  var_382_5_fd,
  var_383_5_str,
  // $i 0
  LET, 1, num_0, 1, var_385_4_i,
  // $n length_of(str)
  var_length_of, 1, var_383_5_str, 1, var_386_4_n,
  // loop:
  var_loop, 1, lambda_3_loop, IO_TAIL_CALL,
  POS(385, 3),
  POS(386, 3),
  POS(387, 3)
};

static FUNCTION_INFO i_func_std__hexdump_to = {
  t_func_std__hexdump_to, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_3_loop[] = {
  2, // locals
  0, // parameters
  // i >= n:
  var_std__less, 2, var_385_4_i, var_386_4_n, 1, LOCAL(1),
  // i >= n:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_14, lambda_16, IO_TAIL_CALL,
  POS(389, 7),
  POS(389, 7),
  POS(388, 5)
};

static FUNCTION_INFO i_lambda_3_loop = {
  t_lambda_3_loop, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_14[] = {
  3, // locals
  0, // parameters
  // i .mod. 16) != 0: print_to! fd "@nl;"
  var_mod, 2, var_385_4_i, num_16, 1, LOCAL(1),
  // i .mod. 16) != 0: print_to! fd "@nl;"
  var_std__equal, 2, LOCAL(1), num_0, 1, LOCAL(2),
  // i .mod. 16) != 0: print_to! fd "@nl;"
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // on (i .mod. 16) != 0: print_to! fd "@nl;"
  var_on, 2, LOCAL(3), lambda_15, IO_TAIL_CALL,
  POS(390, 13),
  POS(390, 13),
  POS(390, 13),
  POS(390, 9)
};

static FUNCTION_INFO i_lambda_14 = {
  t_lambda_14, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_15[] = {
  0, // locals
  0, // parameters
  // print_to! fd "@nl;"
  var_print_to, 2, var_382_5_fd, string_3, IO_TAIL_CALL,
  POS(390, 31)
};

static FUNCTION_INFO i_lambda_15 = {
  t_lambda_15, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_16[] = {
  3, // locals
  0, // parameters
  // i .mod. 16) == 0:
  var_mod, 2, var_385_4_i, num_16, 1, LOCAL(1),
  // i .mod. 16) == 0:
  var_std__equal, 2, LOCAL(1), num_0, 1, LOCAL(2),
  // on (i .mod. 16) == 0:
  var_on, 2, LOCAL(2), lambda_17, IO_CALL(0),
  // inc &i
  var_inc, 1, var_385_4_i, 1, var_385_4_i,
  // print_to! fd " "
  var_print_to, 2, var_382_5_fd, string_8, IO_CALL(0),
  // str(i).to_integer 2)
  var_383_5_str, 1, var_385_4_i, 1, LOCAL(1),
  // to_integer 2)
  var_to_integer, 1, LOCAL(1), 1, LOCAL(2),
  // hex(str(i).to_integer 2)
  var_hex, 2, LOCAL(2), num_2, 1, LOCAL(3),
  // print_to! fd hex(str(i).to_integer 2)
  var_print_to, 2, var_382_5_fd, LOCAL(3), IO_CALL(0),
  // i .mod. 16) == 0: print_to! fd "@nl;"
  var_mod, 2, var_385_4_i, num_16, 1, LOCAL(1),
  // i .mod. 16) == 0: print_to! fd "@nl;"
  var_std__equal, 2, LOCAL(1), num_0, 1, LOCAL(2),
  // on (i .mod. 16) == 0: print_to! fd "@nl;"
  var_on, 2, LOCAL(2), lambda_18, IO_CALL(0),
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(392, 13),
  POS(392, 13),
  POS(392, 9),
  POS(395, 9),
  POS(396, 9),
  POS(397, 26),
  POS(397, 33),
  POS(397, 22),
  POS(397, 9),
  POS(398, 13),
  POS(398, 13),
  POS(398, 9),
  POS(399, 9)
};

static FUNCTION_INFO i_lambda_16 = {
  t_lambda_16, NULL, 13, 0,
  {}
};

static TAB_NUM t_lambda_17[] = {
  1, // locals
  0, // parameters
  // hex(i 8)
  var_hex, 2, var_385_4_i, num_8, 1, LOCAL(1),
  // print_to! fd hex(i 8)
  var_print_to, 2, var_382_5_fd, LOCAL(1), IO_CALL(0),
  // print_to! fd ":"
  var_print_to, 2, var_382_5_fd, string_6, IO_TAIL_CALL,
  POS(393, 24),
  POS(393, 11),
  POS(394, 11)
};

static FUNCTION_INFO i_lambda_17 = {
  t_lambda_17, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_18[] = {
  0, // locals
  0, // parameters
  // print_to! fd "@nl;"
  var_print_to, 2, var_382_5_fd, string_3, IO_TAIL_CALL,
  POS(398, 31)
};

static FUNCTION_INFO i_lambda_18 = {
  t_lambda_18, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_std__hexdump[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 422_5_str
  // hexdump_to! STDOUT_FILENO str
  var_hexdump_to, 2, var_STDOUT_FILENO, LOCAL(1), IO_TAIL_CALL,
  POS(424, 3),
  LOCAL(1)
};

static FUNCTION_INFO i_func_std__hexdump = {
  t_func_std__hexdump, NULL, 1, 1,
  {"422_5_str\000"}
};

static TAB_NUM t_func_std__ehexdump[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 447_5_str
  // hexdump_to! STDERR_FILENO str
  var_hexdump_to, 2, var_STDERR_FILENO, LOCAL(1), IO_TAIL_CALL,
  POS(449, 3),
  LOCAL(1)
};

static FUNCTION_INFO i_func_std__ehexdump = {
  t_func_std__ehexdump, NULL, 1, 1,
  {"447_5_str\000"}
};

static TAB_NUM t_func_debug__hexdump[] = {
  0, // locals
  1, // parameters
  var_472_5_str,
  // $i 0
  LET, 1, num_0, 1, var_474_4_i,
  // $n length_of(str)
  var_length_of, 1, var_472_5_str, 1, var_475_4_n,
  // loop:
  var_loop, 1, lambda_4_loop, IO_TAIL_CALL,
  POS(474, 3),
  POS(475, 3),
  POS(476, 3)
};

static FUNCTION_INFO i_func_debug__hexdump = {
  t_func_debug__hexdump, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_4_loop[] = {
  2, // locals
  0, // parameters
  // i >= n:
  var_std__less, 2, var_474_4_i, var_475_4_n, 1, LOCAL(1),
  // i >= n:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_19, lambda_21, IO_TAIL_CALL,
  POS(478, 7),
  POS(478, 7),
  POS(477, 5)
};

static FUNCTION_INFO i_lambda_4_loop = {
  t_lambda_4_loop, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_19[] = {
  3, // locals
  0, // parameters
  // i .mod. 16) != 0: debug::print! "@nl;"
  var_mod, 2, var_474_4_i, num_16, 1, LOCAL(1),
  // i .mod. 16) != 0: debug::print! "@nl;"
  var_std__equal, 2, LOCAL(1), num_0, 1, LOCAL(2),
  // i .mod. 16) != 0: debug::print! "@nl;"
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // on (i .mod. 16) != 0: debug::print! "@nl;"
  var_on, 2, LOCAL(3), lambda_20, IO_TAIL_CALL,
  POS(479, 13),
  POS(479, 13),
  POS(479, 13),
  POS(479, 9)
};

static FUNCTION_INFO i_lambda_19 = {
  t_lambda_19, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_20[] = {
  0, // locals
  0, // parameters
  // debug::print! "@nl;"
  var_debug__print, 1, string_3, IO_TAIL_CALL,
  POS(479, 31)
};

static FUNCTION_INFO i_lambda_20 = {
  t_lambda_20, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_21[] = {
  3, // locals
  0, // parameters
  // i .mod. 16) == 0:
  var_mod, 2, var_474_4_i, num_16, 1, LOCAL(1),
  // i .mod. 16) == 0:
  var_std__equal, 2, LOCAL(1), num_0, 1, LOCAL(2),
  // on (i .mod. 16) == 0:
  var_on, 2, LOCAL(2), lambda_22, IO_CALL(0),
  // inc &i
  var_inc, 1, var_474_4_i, 1, var_474_4_i,
  // debug::print! " "
  var_debug__print, 1, string_8, IO_CALL(0),
  // str(i).to_integer 2)
  var_472_5_str, 1, var_474_4_i, 1, LOCAL(1),
  // to_integer 2)
  var_to_integer, 1, LOCAL(1), 1, LOCAL(2),
  // hex(str(i).to_integer 2)
  var_hex, 2, LOCAL(2), num_2, 1, LOCAL(3),
  // debug::print! hex(str(i).to_integer 2)
  var_debug__print, 1, LOCAL(3), IO_CALL(0),
  // i .mod. 16) == 0: debug::print! "@nl;"
  var_mod, 2, var_474_4_i, num_16, 1, LOCAL(1),
  // i .mod. 16) == 0: debug::print! "@nl;"
  var_std__equal, 2, LOCAL(1), num_0, 1, LOCAL(2),
  // on (i .mod. 16) == 0: debug::print! "@nl;"
  var_on, 2, LOCAL(2), lambda_23, IO_CALL(0),
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(481, 13),
  POS(481, 13),
  POS(481, 9),
  POS(484, 9),
  POS(485, 9),
  POS(486, 27),
  POS(486, 34),
  POS(486, 23),
  POS(486, 9),
  POS(487, 13),
  POS(487, 13),
  POS(487, 9),
  POS(488, 9)
};

static FUNCTION_INFO i_lambda_21 = {
  t_lambda_21, NULL, 13, 0,
  {}
};

static TAB_NUM t_lambda_22[] = {
  1, // locals
  0, // parameters
  // hex(i 8)
  var_hex, 2, var_474_4_i, num_8, 1, LOCAL(1),
  // debug::print! hex(i 8)
  var_debug__print, 1, LOCAL(1), IO_CALL(0),
  // debug::print! ":"
  var_debug__print, 1, string_6, IO_TAIL_CALL,
  POS(482, 25),
  POS(482, 11),
  POS(483, 11)
};

static FUNCTION_INFO i_lambda_22 = {
  t_lambda_22, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_23[] = {
  0, // locals
  0, // parameters
  // debug::print! "@nl;"
  var_debug__print, 1, string_3, IO_TAIL_CALL,
  POS(487, 31)
};

static FUNCTION_INFO i_lambda_23 = {
  t_lambda_23, NULL, 1, 0,
  {}
};

static FUNKY_CONSTANT constants_table[] = {
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__object___debug__to_string}},
  {FLT_POSITIVE_INT64, 0, {.value = 0}},
  {FLT_POSITIVE_INT64, 0, {.value = 1}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_is_a_plain_objectself}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_1}},
  {FLT_STRING_8, 1, {.str_8 = "<"}},
  {FLT_STRING_8, 2, {.str_8 = ">\012"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_2}},
  {FLT_POSITIVE_INT64, 0, {.value = 2}},
  {FLT_POSITIVE_INT64, 0, {.value = 4}},
  {FLT_STRING_8, 1, {.str_8 = "\012"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_3}},
  {FLT_CHARACTER, 0, {.value = 10}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_4}},
  {FLT_STRING_8, 2, {.str_8 = " ="}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_5}},
  {FLT_STRING_8, 3, {.str_8 = " = "}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_6}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_7}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__undefined___debug__to_string}},
  {FLT_STRING_8, 10, {.str_8 = "undefined\012"}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__error___debug__to_string}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_debug__print}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_debug__println}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_debug__dump}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_8}},
  {FLT_NEGATIVE_INT64, 0, {.value = 1}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_loop}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_9}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_10}},
  {FLT_STRING_8, 1, {.str_8 = ":"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_11}},
  {FLT_STRING_8, 2, {.str_8 = ": "}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_debug__dump_one}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_dump_args_to}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_2_loop}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_12}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_expr_is_an_error}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_13}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std__dump_to}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std__dump}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std__edump}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std__hexdump_to}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_3_loop}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_14}},
  {FLT_POSITIVE_INT64, 0, {.value = 16}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_15}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_16}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_17}},
  {FLT_POSITIVE_INT64, 0, {.value = 8}},
  {FLT_STRING_8, 1, {.str_8 = " "}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_18}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std__hexdump}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std__ehexdump}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_debug__hexdump}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_4_loop}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_19}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_20}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_21}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_22}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_23}}
};

static ATTRIBUTE_DEFINITION std_types__object__attributes[] = {
  {var_debug__to_string, -func_std_types__object___debug__to_string}
};

static ATTRIBUTE_DEFINITION std_types__undefined__attributes[] = {
  {var_debug__to_string, -func_std_types__undefined___debug__to_string}
};

static ATTRIBUTE_DEFINITION std_types__error__attributes[] = {
  {var_debug__to_string, -func_std_types__error___debug__to_string}
};

static FUNKY_VARIABLE variables_table[] = {
  {
    FOT_POLYMORPHIC, 0, 0,
    "to_string\000debug", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "assign\000std", NULL,
    {.position = POS(37, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "object\000std_types", std_types__object__attributes,
    {.position = POS(39, 1)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "41_5_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "42_5_indent\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "43_5_depth\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_a_plain_object\000", NULL,
    {.position = POS(46, 5)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "47_8_typename\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "object_type\000debug", NULL,
    {.position = POS(47, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "equal\000std", NULL,
    {.position = POS(49, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "string\000std", NULL,
    {.position = POS(50, 12)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "53_12_attr_indent\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000std", NULL,
    {.position = POS(53, 24)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "54_12_value_indent\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "55_12_attributes\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "object_attributes\000debug", NULL,
    {.position = POS(55, 23)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "tabs_and_spaces\000", NULL,
    {.position = POS(56, 30)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "56_12_buf\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "append\000", NULL,
    {.position = POS(56, 16)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "length_of\000", NULL,
    {.position = POS(57, 24)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "59_16_attr_text\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "minus\000std", NULL,
    {.position = POS(60, 73)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "60_16_value_text\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if\000", NULL,
    {.position = POS(62, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "next\000", NULL,
    {.position = POS(66, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "from_to_by\000", NULL,
    {.position = POS(57, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "string\000debug", NULL,
    {.position = POS(68, 8)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "undefined\000std_types", std_types__undefined__attributes,
    {.position = POS(70, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "error\000std_types", std_types__error__attributes,
    {.position = POS(78, 1)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "to_error_message_string\000", NULL,
    {.position = POS(84, 14)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "print\000debug", NULL,
    {.const_idx = -func_debug__print}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "to_utf8\000", NULL,
    {.position = POS(90, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "write\000debug", NULL,
    {.position = POS(90, 3)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "println\000debug", NULL,
    {.const_idx = -func_debug__println}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "dump\000debug", NULL,
    {.const_idx = -func_debug__dump}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "161_16_args\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "162_4_depth\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_an_integer\000", NULL,
    {.position = POS(163, 21)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "range\000", NULL,
    {.position = POS(164, 16)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "update_if\000", NULL,
    {.position = POS(163, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "165_4_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "166_4_n\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "less\000std", NULL,
    {.position = POS(169, 7)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "170_10_label\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "173_10_text\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "break\000", NULL,
    {.position = POS(181, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "loop\000", NULL,
    {.position = POS(167, 3)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "dump_one\000debug", NULL,
    {.const_idx = -func_debug__dump_one}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "dump_object\000debug", NULL,
    {.position = POS(222, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "224_17_fd\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "224_20_args\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "225_4_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "226_4_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "231_10_expr\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "print_to\000", NULL,
    {.position = POS(233, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_an_error\000", NULL,
    {.position = POS(235, 16)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "error_message_text_of\000", NULL,
    {.position = POS(236, 28)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "println_to\000", NULL,
    {.position = POS(236, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "serialize\000", NULL,
    {.position = POS(239, 26)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "dump_to\000std", NULL,
    {.const_idx = -func_std__dump_to}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "dump\000std", NULL,
    {.const_idx = -func_std__dump}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "STDOUT_FILENO\000", NULL,
    {.position = POS(323, 17)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "edump\000std", NULL,
    {.const_idx = -func_std__edump}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "STDERR_FILENO\000", NULL,
    {.position = POS(359, 17)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "hexdump_to\000std", NULL,
    {.const_idx = -func_std__hexdump_to}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "382_5_fd\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "383_5_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "385_4_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "386_4_n\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not\000std", NULL,
    {.position = POS(389, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "mod\000", NULL,
    {.position = POS(390, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "on\000", NULL,
    {.position = POS(390, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "hex\000", NULL,
    {.position = POS(393, 24)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "inc\000", NULL,
    {.position = POS(395, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "to_integer\000", NULL,
    {.position = POS(397, 33)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "hexdump\000std", NULL,
    {.const_idx = -func_std__hexdump}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "hexdump_to\000", NULL,
    {.position = POS(424, 3)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "ehexdump\000std", NULL,
    {.const_idx = -func_std__ehexdump}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "hexdump\000debug", NULL,
    {.const_idx = -func_debug__hexdump}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "472_5_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "474_4_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "475_4_n\000", NULL
  }
};

static FUNKY_NAMESPACE used_namespaces[] = {
  {"std", 1, 0}
};

FUNKY_MODULE module__basic__debug = {
  "_basic__debug", // module name
  "basic/debug.fky", // module filename
  .major_version = 0,
  .minor_version = 0,
  .feature_flags = FEAT_POSITIONS|FEAT_FUNCTION_INFO,
  .marker = 0,
  0, // number of required modules
  0, // number of defined namespaces
  1, // number of used namespaces
  61, // number of constants
  82, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  constants_table,
  variables_table,
};
