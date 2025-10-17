#include <stddef.h>
#include <stdint.h>

#include "runtime/common.h"
#include "runtime/builtins.h"
#include "runtime/fko.h"
#include "runtime/memory.h"

enum {
  num_80 = -1,
  num_0 = -2,
  func_funky_types__body___to_source = -3,
  lambda_1 = -4,
  lambda_2 = -5,
  num_2 = -6,
  lambda_3 = -7,
  string_1 = -8,
  lambda_4 = -9,
  string_2 = -10,
  string_3 = -11,
  string_4 = -12,
  string_5 = -13,
  func_funky_types__inline_parameter___to_source = -14,
  func_funky__statements_to_source = -15,
  string_6 = -16,
  string_7 = -17,
  key_value_pair_60_27 = -18,
  func_funky_types__multiline_remark___to_source = -19,
  lambda_5 = -20,
  lambda_6 = -21,
  string_8 = -22,
  func_funky_types__statement___to_source = -23,
  lambda_arguments_is_empty = -24,
  lambda_7 = -25,
  lambda_do_return_inline_only = -26,
  lambda_8 = -27,
  lambda_9 = -28,
  lambda_10 = -29,
  lambda_11 = -30,
  lambda_12 = -31,
  lambda_13 = -32,
  lambda_14 = -33,
  minus_num_1 = -34,
  lambda_15 = -35,
  num_1 = -36,
  minus_num_2 = -37,
  lambda_16 = -38,
  chr_36 = -39,
  lambda_17 = -40,
  lambda_18 = -41,
  string_9 = -42,
  lambda_19 = -43,
  lambda_20 = -44,
  lambda_21 = -45,
  lambda_22 = -46,
  func_multiline_layout = -47,
  func_add_statement_arguments = -48,
  lambda_23 = -49,
  lambda_arg_is_undefined = -50,
  chr_58 = -51,
  lambda_24 = -52,
  lambda_25 = -53,
  lambda_26 = -54,
  lambda_27 = -55,
  chr_10 = -56,
  lambda_28 = -57,
  lambda_29 = -58,
  lambda_30 = -59,
  lambda_at_line_start = -60,
  lambda_31 = -61,
  lambda_32 = -62,
  lambda_33 = -63,
  lambda_34 = -64,
  func_funky_types__functor___to_source = -65,
  string_10 = -66,
  func_funky_types__attribute_access___to_source = -67,
  string_11 = -68,
  func_funky_types__definition___to_source = -69,
  string_12 = -70,
  func_funky_types__dummy_definition___to_source = -71,
  string_13 = -72,
  func_funky_types__redefinition___to_source = -73,
  func_funky_types__update___to_source = -74,
  string_14 = -75,
  func_funky_types__function_call___to_source = -76,
  string_15 = -77,
  string_16 = -78,
  func_funky_types__remark_and_multiline_function_call___to_source = -79,
  lambda_35 = -80,
  lambda_36 = -81,
  lambda_37 = -82,
  lambda_38 = -83,
  lambda_39 = -84,
  func_funky_types__remark___to_source = -85,
  string_17 = -86,
  func_funky_types__return_expression___to_source = -87,
  string_18 = -88,
  string_19 = -89,
  func_funky_types__expression___to_source = -90,
  func_funky_types__not_equal___to_source = -91,
  string_20 = -92,
  func_funky_types__numeric_literal___to_source = -93,
  func_funky_types__string_literal___to_source = -94,
  string_21 = -95,
  lambda_40 = -96,
  lambda_41 = -97,
  chr_34 = -98,
  func_funky_types__character_sequence___to_source = -99,
  func_funky_types__escape_expression___to_source = -100,
  string_22 = -101,
  string_23 = -102,
  string_24 = -103,
  func_funky_types__attribute_value_pair___to_source = -104,
  lambda_42 = -105,
  lambda_43 = -106,
  func_funky_types__node___to_source = -107,
  str_self = -108,
  string_25 = -109,
  func_fits_on_line = -110
};

enum {
  var__START = FIRST_VAR-1,
  var_std__assign, // extern
  var_indent, // initialized
  var_do_return_inline_only, // derived
  var_false, // extern
  var_to_source, // attribute
  var_funky_types__body, // extern
  var_34_32_self, // dynamic
  var_undefined, // extern
  var_parameters_of, // extern
  var_39_8_parameters, // dynamic
  var_map, // extern
  var_statement_of, // extern
  var_plus, // extern
  var_statements_of, // extern
  var_statements_to_source, // extern
  var_is_empty, // extern
  var_join, // extern
  var_append, // extern
  var_if, // extern
  var_funky_types__inline_parameter, // extern
  var_funky__name_of, // extern
  var_funky__statements_to_source, // initialized
  var_map_reduce, // extern
  var_std__key_value_pair, // extern
  var_replace_all, // extern
  var_funky_types__multiline_remark, // extern
  var_62_44_self, // dynamic
  var_tabs_and_spaces, // extern
  var_text_of, // extern
  var_funky_types__statement, // extern
  var_head_of, // extern
  var_69_4_head, // dynamic
  var_70_4_arguments, // dynamic
  var_arguments_of, // extern
  var_80_16_args, // dynamic
  var_is_defined, // extern
  var_all_of, // extern
  var_83_16_stmt, // dynamic
  var_true, // extern
  var_91_16_args, // dynamic
  var_is_undefined, // extern
  var_range, // extern
  var_std__and, // extern
  var_std__equal, // extern
  var_112_31_idx, // dynamic
  var_find_first, // extern
  var_std__less, // extern
  var_std__minus, // extern
  var_115_24_start_args, // dynamic
  var_width_of, // extern
  var_std__plus, // extern
  var_std__not, // extern
  var_139_30_buf, // dynamic
  var_140_6_at_line_start, // dynamic
  var_141_6_width, // dynamic
  var_143_6_spacing, // dynamic
  var_145_10_idx, // dynamic
  var_145_14_arg, // dynamic
  var_next, // extern
  var_push, // extern
  var_update_if_not, // extern
  var_162_14_arg_width, // dynamic
  var_for_each, // extern
  var_funky_types__functor, // extern
  var_identifier_of, // extern
  var_extensions_of, // extern
  var_funky_types__io_call, // extern
  var_funky_types__attribute_access, // extern
  var_funky_types__definition, // extern
  var_funky_types__dummy_definition, // extern
  var_funky_types__redefinition, // extern
  var_funky_types__update, // extern
  var_funky_types__function_call, // extern
  var_funky_types__remark_and_multiline_function_call, // extern
  var_216_4_arguments, // dynamic
  var_remark_of, // extern
  var_217_4_head, // dynamic
  var_funky_types__remark, // extern
  var_funky_types__return_expression, // extern
  var_funky_types__return, // extern
  var_funky_types__expression, // extern
  var_expression_of, // extern
  var_operator_of, // extern
  var_funky_types__not_equal, // extern
  var_funky_types__numeric_literal, // extern
  var_digits_of, // extern
  var_funky_types__string_literal, // extern
  var_components_of, // extern
  var_251_4_buf, // dynamic
  var_funky_types__character_sequence, // extern
  var_characters_of, // extern
  var_funky_types__escape_expression, // extern
  var_funky_types__unique, // extern
  var_funky_types__attribute, // extern
  var_funky_types__attribute_with_setter, // extern
  var_funky_types__attribute_value_pair, // extern
  var_271_48_self, // dynamic
  var_argument_of, // extern
  var_funky_types__node, // extern
  var_debug__dump, // extern
  var_length_of, // extern
  var__END
};


static TAB_NUM t_func_funky_types__body___to_source[] = {
  0, // locals
  1, // parameters
  var_34_32_self,
  // if
  var_if, 3, var_do_return_inline_only, lambda_1, lambda_2, TAIL_CALL,
  POS(35, 3)
};

static FUNCTION_INFO i_func_funky_types__body___to_source = {
  t_func_funky_types__body___to_source, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_1[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(37, 7)
};

static FUNCTION_INFO i_lambda_1 = {
  t_lambda_1, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_2[] = {
  3, // locals
  0, // parameters
  // parameters_of(self) to_source)
  var_parameters_of, 1, var_34_32_self, 1, LOCAL(1),
  // $parameters map(parameters_of(self) to_source)
  var_map, 2, LOCAL(1), var_to_source, 1, var_39_8_parameters,
  // $statement_list statement_of(self)
  var_statement_of, 1, var_34_32_self, 1, LOCAL(2),
  // plus &indent 2
  var_plus, 2, var_indent, num_2, 1, var_indent,
  // statements_of(self))
  var_statements_of, 1, var_34_32_self, 1, LOCAL(1),
  // $statements statements_to_source(statements_of(self))
  var_statements_to_source, 1, LOCAL(1), 1, LOCAL(3),
  // is_empty
  var_is_empty, 1, var_39_8_parameters, 1, LOCAL(1),
  // !parameters
  var_if, 3, LOCAL(1), lambda_3, lambda_4, 1, var_39_8_parameters,
  // append
  var_append, 3, string_5, var_39_8_parameters, LOCAL(3), TAIL_CALL,
  POS(39, 23),
  POS(39, 7),
  POS(40, 7),
  POS(41, 7),
  POS(42, 40),
  POS(42, 7),
  POS(45, 22),
  POS(43, 7),
  POS(48, 7),
  LOCAL(3),
  LOCAL(2)
};

static FUNCTION_INFO i_lambda_2 = {
  t_lambda_2, NULL, 9, 2,
  {"42_8_statements\000", "40_8_statement_list\000"}
};

static TAB_NUM t_lambda_3[] = {
  0, // locals
  0, // parameters
  //  "@nl;"
  LET, 1, string_1, TAIL_CALL,
  POS(46, 13)
};

static FUNCTION_INFO i_lambda_3 = {
  t_lambda_3, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_4[] = {
  2, // locals
  0, // parameters
  // join(parameters " ") ")@nl;")
  var_join, 2, var_39_8_parameters, string_2, 1, LOCAL(1),
  // append(" (" join(parameters " ") ")@nl;")
  var_append, 3, string_3, LOCAL(1), string_4, 1, LOCAL(2),
  //  append(" (" join(parameters " ") ")@nl;")
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(47, 26),
  POS(47, 14),
  POS(47, 13)
};

static FUNCTION_INFO i_lambda_4 = {
  t_lambda_4, NULL, 3, 0,
  {}
};

static TAB_NUM t_func_funky_types__inline_parameter___to_source[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 53_44_self
  // funky::name_of(self)
  var_funky__name_of, 1, LOCAL(2), 1, LOCAL(1),
  // -> funky::name_of(self)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(54, 6),
  POS(54, 3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_funky_types__inline_parameter___to_source = {
  t_func_funky_types__inline_parameter___to_source, NULL, 2, 1,
  {"53_44_self\000"}
};

static TAB_NUM t_func_funky__statements_to_source[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 56_32_statements
  // map_reduce &statements to_source
  var_map_reduce, 2, LOCAL(1), var_to_source, 1, LOCAL(1),
  // replace_all statements "@nl;@nl;@nl;" = "@nl;@nl;"
  var_replace_all, 2, LOCAL(1), key_value_pair_60_27, TAIL_CALL,
  POS(57, 3),
  POS(60, 3),
  LOCAL(1)
};

static FUNCTION_INFO i_func_funky__statements_to_source = {
  t_func_funky__statements_to_source, NULL, 2, 1,
  {"56_32_statements\000"}
};

static TAB_NUM t_func_funky_types__multiline_remark___to_source[] = {
  0, // locals
  1, // parameters
  var_62_44_self,
  // if
  var_if, 3, var_do_return_inline_only, lambda_5, lambda_6, TAIL_CALL,
  POS(63, 3)
};

static FUNCTION_INFO i_func_funky_types__multiline_remark___to_source = {
  t_func_funky_types__multiline_remark___to_source, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_5[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(65, 7)
};

static FUNCTION_INFO i_lambda_5 = {
  t_lambda_5, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_6[] = {
  3, // locals
  0, // parameters
  // tabs_and_spaces(indent) "#" text_of(self) "@nl;@nl;")
  var_tabs_and_spaces, 1, var_indent, 1, LOCAL(1),
  // text_of(self) "@nl;@nl;")
  var_text_of, 1, var_62_44_self, 1, LOCAL(2),
  // append(tabs_and_spaces(indent) "#" text_of(self) "@nl;@nl;")
  var_append, 4, LOCAL(1), string_8, LOCAL(2), string_7, 1, LOCAL(3),
  //  append(tabs_and_spaces(indent) "#" text_of(self) "@nl;@nl;")
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(66, 15),
  POS(66, 43),
  POS(66, 8),
  POS(66, 7)
};

static FUNCTION_INFO i_lambda_6 = {
  t_lambda_6, NULL, 4, 0,
  {}
};

static TAB_NUM t_func_funky_types__statement___to_source[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 68_37_self
  // head_of(self).to_source
  var_head_of, 1, LOCAL(2), 1, LOCAL(1),
  // $head head_of(self).to_source
  var_to_source, 1, LOCAL(1), 1, var_69_4_head,
  // $arguments arguments_of(self)
  var_arguments_of, 1, LOCAL(2), 1, var_70_4_arguments,
  // is_empty:
  var_is_empty, 1, var_70_4_arguments, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_arguments_is_empty, lambda_7, TAIL_CALL,
  POS(69, 9),
  POS(69, 3),
  POS(70, 3),
  POS(72, 15),
  POS(71, 3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_funky_types__statement___to_source = {
  t_func_funky_types__statement___to_source, NULL, 5, 1,
  {"68_37_self\000"}
};

static TAB_NUM t_lambda_arguments_is_empty[] = {
  1, // locals
  0, // parameters
  // tabs_and_spaces(indent)
  var_tabs_and_spaces, 1, var_indent, 1, LOCAL(1),
  // append
  var_append, 3, LOCAL(1), var_69_4_head, string_1, TAIL_CALL,
  POS(74, 9),
  POS(73, 7)
};

static FUNCTION_INFO i_lambda_arguments_is_empty = {
  t_lambda_arguments_is_empty, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_7[] = {
  0, // locals
  0, // parameters
  // if
  var_if, 3, var_do_return_inline_only, lambda_do_return_inline_only, lambda_12, TAIL_CALL,
  POS(78, 7)
};

static FUNCTION_INFO i_lambda_7 = {
  t_lambda_7, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_do_return_inline_only[] = {
  1, // locals
  0, // parameters
  // map $args arguments to_source
  var_map, 2, var_70_4_arguments, var_to_source, 1, var_80_16_args,
  // all_of(args is_defined):
  var_all_of, 2, var_80_16_args, var_is_defined, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_8, lambda_11, TAIL_CALL,
  POS(80, 11),
  POS(82, 13),
  POS(81, 11)
};

static FUNCTION_INFO i_lambda_do_return_inline_only = {
  t_lambda_do_return_inline_only, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_8[] = {
  1, // locals
  0, // parameters
  // join(args))
  var_join, 1, var_80_16_args, 1, LOCAL(1),
  // $stmt append(head " " join(args))
  var_append, 3, var_69_4_head, string_2, LOCAL(1), 1, var_83_16_stmt,
  // fits_on_line(stmt)
  func_fits_on_line, 1, var_83_16_stmt, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_9, lambda_10, TAIL_CALL,
  POS(83, 37),
  POS(83, 15),
  POS(85, 17),
  POS(84, 15)
};

static FUNCTION_INFO i_lambda_8 = {
  t_lambda_8, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_9[] = {
  0, // locals
  0, // parameters
  //  stmt
  LET, 1, var_83_16_stmt, TAIL_CALL,
  POS(86, 19)
};

static FUNCTION_INFO i_lambda_9 = {
  t_lambda_9, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_10[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(87, 19)
};

static FUNCTION_INFO i_lambda_10 = {
  t_lambda_10, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_11[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(88, 15)
};

static FUNCTION_INFO i_lambda_11 = {
  t_lambda_11, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_12[] = {
  1, // locals
  0, // parameters
  // !do_return_inline_only true
  LET, 1, var_true, 1, var_do_return_inline_only,
  // map $args arguments to_source
  var_map, 2, var_70_4_arguments, var_to_source, 1, var_91_16_args,
  // all_of(args is_defined)
  var_all_of, 2, var_91_16_args, var_is_defined, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_13, lambda_14, TAIL_CALL,
  POS(90, 11),
  POS(91, 11),
  POS(93, 13),
  POS(92, 11)
};

static FUNCTION_INFO i_lambda_12 = {
  t_lambda_12, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_13[] = {
  3, // locals
  0, // parameters
  // tabs_and_spaces(indent) head " " join(args) "@nl;")
  var_tabs_and_spaces, 1, var_indent, 1, LOCAL(1),
  // join(args) "@nl;")
  var_join, 1, var_91_16_args, 1, LOCAL(2),
  // append(tabs_and_spaces(indent) head " " join(args) "@nl;")
  var_append, 5, LOCAL(1), var_69_4_head, string_2, LOCAL(2), string_1, 1, LOCAL(3),
  //  append(tabs_and_spaces(indent) head " " join(args) "@nl;")
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(94, 23),
  POS(94, 56),
  POS(94, 16),
  POS(94, 15)
};

static FUNCTION_INFO i_lambda_13 = {
  t_lambda_13, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_14[] = {
  3, // locals
  0, // parameters
  // !do_return_inline_only false
  LET, 1, var_false, 1, var_do_return_inline_only,
  // args(-1).is_undefined
  var_91_16_args, 1, minus_num_1, 1, LOCAL(1),
  // is_undefined
  var_is_undefined, 1, LOCAL(1), 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_15, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_16, lambda_19, TAIL_CALL,
  POS(96, 15),
  POS(99, 19),
  POS(99, 28),
  POS(98, 19),
  POS(97, 15)
};

static FUNCTION_INFO i_lambda_14 = {
  t_lambda_14, NULL, 5, 0,
  {}
};

static TAB_NUM t_lambda_15[] = {
  2, // locals
  0, // parameters
  // range(args 1 -2) is_defined)
  var_range, 3, var_91_16_args, num_1, minus_num_2, 1, LOCAL(1),
  // all_of(range(args 1 -2) is_defined)
  var_all_of, 2, LOCAL(1), var_is_defined, 1, LOCAL(2),
  // all_of(range(args 1 -2) is_defined)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(100, 26),
  POS(100, 19),
  POS(100, 19)
};

static FUNCTION_INFO i_lambda_15 = {
  t_lambda_15, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_16[] = {
  8, // locals
  0, // parameters
  // arguments(-1).to_source
  var_70_4_arguments, 1, minus_num_1, 1, LOCAL(1),
  // $last_arg arguments(-1).to_source
  var_to_source, 1, LOCAL(1), 1, LOCAL(8),
  // head(1) == '$'
  var_69_4_head, 1, num_1, 1, LOCAL(1),
  // head(1) == '$'
  var_std__equal, 2, LOCAL(1), chr_36, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_17, lambda_18, 1, LOCAL(3),
  // tabs_and_spaces(indent)
  var_tabs_and_spaces, 1, var_indent, 1, LOCAL(4),
  // range(args 1 -2)) 1 -2)
  var_range, 3, var_91_16_args, num_1, minus_num_2, 1, LOCAL(5),
  // add_statement_arguments(head range(args 1 -2)) 1 -2)
  func_add_statement_arguments, 2, var_69_4_head, LOCAL(5), 1, LOCAL(6),
  // range(add_statement_arguments(head range(args 1 -2)) 1 -2)
  var_range, 3, LOCAL(6), num_1, minus_num_2, 1, LOCAL(7),
  // append
  var_append, 4, LOCAL(3), LOCAL(4), LOCAL(7), LOCAL(8), TAIL_CALL,
  POS(102, 29),
  POS(102, 19),
  POS(105, 23),
  POS(105, 23),
  POS(104, 21),
  POS(108, 21),
  POS(109, 56),
  POS(109, 27),
  POS(109, 21),
  POS(103, 19),
  LOCAL(8)
};

static FUNCTION_INFO i_lambda_16 = {
  t_lambda_16, NULL, 10, 1,
  {"102_20_last_arg\000"}
};

static TAB_NUM t_lambda_17[] = {
  0, // locals
  0, // parameters
  //  "@nl;"
  LET, 1, string_1, TAIL_CALL,
  POS(106, 25)
};

static FUNCTION_INFO i_lambda_17 = {
  t_lambda_17, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_18[] = {
  0, // locals
  0, // parameters
  //  ""
  LET, 1, string_9, TAIL_CALL,
  POS(107, 25)
};

static FUNCTION_INFO i_lambda_18 = {
  t_lambda_18, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_19[] = {
  1, // locals
  0, // parameters
  // find_first $idx $_item args: (arg) -> arg.is_undefined
  var_find_first, 2, var_91_16_args, lambda_20, 2, var_112_31_idx, LOCAL(1),
  // 2:
  var_std__less, 2, num_2, var_112_31_idx, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_21, func_multiline_layout, TAIL_CALL,
  POS(112, 19),
  POS(114, 27),
  POS(113, 19)
};

static FUNCTION_INFO i_lambda_19 = {
  t_lambda_19, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_20[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 112_49_arg
  // is_undefined
  var_is_undefined, 1, LOCAL(2), 1, LOCAL(1),
  // -> arg.is_undefined
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(112, 61),
  POS(112, 54),
  LOCAL(2)
};

static FUNCTION_INFO i_lambda_20 = {
  t_lambda_20, NULL, 2, 1,
  {"112_49_arg\000"}
};

static TAB_NUM t_lambda_21[] = {
  7, // locals
  0, // parameters
  // idx-2) " ")
  var_std__minus, 2, var_112_31_idx, num_2, 1, LOCAL(1),
  // range(args 1 idx-2) " ")
  var_range, 3, var_91_16_args, num_1, LOCAL(1), 1, LOCAL(2),
  // $start_args join(range(args 1 idx-2) " ")
  var_join, 2, LOCAL(2), string_2, 1, var_115_24_start_args,
  // width_of(head)+1+width_of(start_args)
  var_width_of, 1, var_69_4_head, 1, LOCAL(1),
  // indent+width_of(head)+1+width_of(start_args)
  var_std__plus, 2, var_indent, LOCAL(1), 1, LOCAL(2),
  // indent+width_of(head)+1+width_of(start_args)
  var_std__plus, 2, LOCAL(2), num_1, 1, LOCAL(3),
  // width_of(start_args)
  var_width_of, 1, var_115_24_start_args, 1, LOCAL(4),
  // indent+width_of(head)+1+width_of(start_args)
  var_std__plus, 2, LOCAL(3), LOCAL(4), 1, LOCAL(5),
  // 
  var_std__less, 2, num_80, LOCAL(5), 1, LOCAL(6),
  // LINE_WIDTH
  var_std__not, 1, LOCAL(6), 1, LOCAL(7),
  // if
  var_if, 3, LOCAL(7), lambda_22, func_multiline_layout, TAIL_CALL,
  POS(115, 53),
  POS(115, 40),
  POS(115, 23),
  POS(118, 34),
  POS(118, 27),
  POS(118, 27),
  POS(118, 51),
  POS(118, 27),
  POS(117, 27),
  POS(119, 27),
  POS(116, 23)
};

static FUNCTION_INFO i_lambda_21 = {
  t_lambda_21, NULL, 11, 0,
  {}
};

static TAB_NUM t_lambda_22[] = {
  4, // locals
  0, // parameters
  // idx-1 -1 # must correspond to args
  var_std__minus, 2, var_112_31_idx, num_1, 1, LOCAL(1),
  // range &arguments idx-1 -1 # must correspond to args
  var_range, 3, var_70_4_arguments, LOCAL(1), minus_num_1, 1, var_70_4_arguments,
  // tabs_and_spaces(indent)
  var_tabs_and_spaces, 1, var_indent, 1, LOCAL(1),
  // idx-1 -1))
  var_std__minus, 2, var_112_31_idx, num_1, 1, LOCAL(2),
  // range(args idx-1 -1))
  var_range, 3, var_91_16_args, LOCAL(2), minus_num_1, 1, LOCAL(3),
  // add_statement_arguments("" range(args idx-1 -1))
  func_add_statement_arguments, 2, string_9, LOCAL(3), 1, LOCAL(4),
  // append
  var_append, 6, LOCAL(1), var_69_4_head, string_2, var_115_24_start_args, string_1, LOCAL(4), TAIL_CALL,
  POS(121, 44),
  POS(121, 27),
  POS(123, 29),
  POS(128, 67),
  POS(128, 56),
  POS(128, 29),
  POS(122, 27)
};

static FUNCTION_INFO i_lambda_22 = {
  t_lambda_22, NULL, 7, 0,
  {}
};

static TAB_NUM t_func_multiline_layout[] = {
  2, // locals
  0, // parameters
  // tabs_and_spaces(indent)
  var_tabs_and_spaces, 1, var_indent, 1, LOCAL(1),
  // add_statement_arguments("" args)
  func_add_statement_arguments, 2, string_9, var_91_16_args, 1, LOCAL(2),
  // append
  var_append, 4, LOCAL(1), var_69_4_head, string_1, LOCAL(2), TAIL_CALL,
  POS(134, 23),
  POS(137, 23),
  POS(133, 21)
};

static FUNCTION_INFO i_func_multiline_layout = {
  t_func_multiline_layout, NULL, 3, 0,
  {}
};

static TAB_NUM t_func_add_statement_arguments[] = {
  2, // locals
  2, // parameters
  var_139_30_buf,
  LOCAL(2), // 139_34_args
  // $at_line_start buf.is_empty
  var_is_empty, 1, var_139_30_buf, 1, var_140_6_at_line_start,
  // width_of(buf)
  var_width_of, 1, var_139_30_buf, 1, LOCAL(1),
  // $width indent+width_of(buf)
  var_std__plus, 2, var_indent, LOCAL(1), 1, var_141_6_width,
  // plus &indent 2
  var_plus, 2, var_indent, num_2, 1, var_indent,
  // $spacing tabs_and_spaces(indent)
  var_tabs_and_spaces, 1, var_indent, 1, var_143_6_spacing,
  // for_each args
  var_for_each, 3, LOCAL(2), lambda_23, lambda_32, TAIL_CALL,
  POS(140, 5),
  POS(141, 19),
  POS(141, 5),
  POS(142, 5),
  POS(143, 5),
  POS(144, 5),
  LOCAL(2)
};

static FUNCTION_INFO i_func_add_statement_arguments = {
  t_func_add_statement_arguments, NULL, 6, 1,
  {"139_34_args\000"}
};

static TAB_NUM t_lambda_23[] = {
  1, // locals
  2, // parameters
  var_145_10_idx,
  var_145_14_arg,
  // is_undefined:
  var_is_undefined, 1, var_145_14_arg, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_arg_is_undefined, lambda_28, TAIL_CALL,
  POS(147, 15),
  POS(146, 9)
};

static FUNCTION_INFO i_lambda_23 = {
  t_lambda_23, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_arg_is_undefined[] = {
  3, // locals
  0, // parameters
  // arguments(idx).to_source
  var_70_4_arguments, 1, var_145_10_idx, 1, LOCAL(1),
  // !arg arguments(idx).to_source
  var_to_source, 1, LOCAL(1), 1, var_145_14_arg,
  // arg(1) == ':' && width+1 <= LINE_WIDTH:
  var_145_14_arg, 1, num_1, 1, LOCAL(1),
  // arg(1) == ':' && width+1 <= LINE_WIDTH:
  var_std__equal, 2, LOCAL(1), chr_58, 1, LOCAL(2),
  // arg(1) == ':' && width+1 <= LINE_WIDTH:
  var_std__and, 2, LOCAL(2), lambda_24, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_25, lambda_26, TAIL_CALL,
  POS(148, 18),
  POS(148, 13),
  POS(150, 15),
  POS(150, 15),
  POS(150, 15),
  POS(149, 13)
};

static FUNCTION_INFO i_lambda_arg_is_undefined = {
  t_lambda_arg_is_undefined, NULL, 6, 0,
  {}
};

static TAB_NUM t_lambda_24[] = {
  3, // locals
  0, // parameters
  // width+1 <= LINE_WIDTH:
  var_std__plus, 2, var_141_6_width, num_1, 1, LOCAL(1),
  // LINE_WIDTH:
  var_std__less, 2, num_80, LOCAL(1), 1, LOCAL(2),
  // LINE_WIDTH:
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // width+1 <= LINE_WIDTH:
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(150, 32),
  POS(150, 43),
  POS(150, 43),
  POS(150, 32)
};

static FUNCTION_INFO i_lambda_24 = {
  t_lambda_24, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_25[] = {
  0, // locals
  0, // parameters
  // append &buf arg
  var_append, 2, var_139_30_buf, var_145_14_arg, 1, var_139_30_buf,
  // !at_line_start true
  LET, 1, var_true, 1, var_140_6_at_line_start,
  // !width 0
  LET, 1, num_0, 1, var_141_6_width,
  // next
  var_next, 0, TAIL_CALL,
  POS(151, 17),
  POS(152, 17),
  POS(153, 17),
  POS(154, 17)
};

static FUNCTION_INFO i_lambda_25 = {
  t_lambda_25, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_26[] = {
  0, // locals
  0, // parameters
  // update_if_not at_line_start &buf: push buf '@nl;'
  var_update_if_not, 3, var_140_6_at_line_start, var_139_30_buf, lambda_27, 1, var_139_30_buf,
  // append &buf spacing arg
  var_append, 3, var_139_30_buf, var_143_6_spacing, var_145_14_arg, 1, var_139_30_buf,
  // !at_line_start true
  LET, 1, var_true, 1, var_140_6_at_line_start,
  // !width 0
  LET, 1, num_0, 1, var_141_6_width,
  // next
  var_next, 0, TAIL_CALL,
  POS(156, 17),
  POS(157, 17),
  POS(158, 17),
  POS(159, 17),
  POS(160, 17)
};

static FUNCTION_INFO i_lambda_26 = {
  t_lambda_26, NULL, 5, 0,
  {}
};

static TAB_NUM t_lambda_27[] = {
  0, // locals
  0, // parameters
  // push buf '@nl;'
  var_push, 2, var_139_30_buf, chr_10, TAIL_CALL,
  POS(156, 51)
};

static FUNCTION_INFO i_lambda_27 = {
  t_lambda_27, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_28[] = {
  3, // locals
  0, // parameters
  // $arg_width width_of(arg)
  var_width_of, 1, var_145_14_arg, 1, var_162_14_arg_width,
  // width+1+arg_width > LINE_WIDTH:
  var_std__plus, 2, var_141_6_width, num_1, 1, LOCAL(1),
  // width+1+arg_width > LINE_WIDTH:
  var_std__plus, 2, LOCAL(1), var_162_14_arg_width, 1, LOCAL(2),
  // LINE_WIDTH:
  var_std__less, 2, num_80, LOCAL(2), 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_29, lambda_30, TAIL_CALL,
  POS(162, 13),
  POS(164, 15),
  POS(164, 15),
  POS(164, 35),
  POS(163, 13)
};

static FUNCTION_INFO i_lambda_28 = {
  t_lambda_28, NULL, 5, 0,
  {}
};

static TAB_NUM t_lambda_29[] = {
  0, // locals
  0, // parameters
  // append &buf "@nl;" spacing arg
  var_append, 4, var_139_30_buf, string_1, var_143_6_spacing, var_145_14_arg, 1, var_139_30_buf,
  // !width indent+arg_width
  var_std__plus, 2, var_indent, var_162_14_arg_width, 1, var_141_6_width,
  // !at_line_start true
  LET, 1, var_true, 1, var_140_6_at_line_start,
  // next
  var_next, 0, TAIL_CALL,
  POS(165, 17),
  POS(166, 17),
  POS(167, 17),
  POS(168, 17)
};

static FUNCTION_INFO i_lambda_29 = {
  t_lambda_29, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_30[] = {
  0, // locals
  0, // parameters
  // if
  var_if, 3, var_140_6_at_line_start, lambda_at_line_start, lambda_31, TAIL_CALL,
  POS(170, 17)
};

static FUNCTION_INFO i_lambda_30 = {
  t_lambda_30, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_at_line_start[] = {
  0, // locals
  0, // parameters
  // append &buf spacing arg
  var_append, 3, var_139_30_buf, var_143_6_spacing, var_145_14_arg, 1, var_139_30_buf,
  // !width indent+arg_width
  var_std__plus, 2, var_indent, var_162_14_arg_width, 1, var_141_6_width,
  // !at_line_start false
  LET, 1, var_false, 1, var_140_6_at_line_start,
  // next
  var_next, 0, TAIL_CALL,
  POS(172, 21),
  POS(173, 21),
  POS(174, 21),
  POS(175, 21)
};

static FUNCTION_INFO i_lambda_at_line_start = {
  t_lambda_at_line_start, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_31[] = {
  1, // locals
  0, // parameters
  // append &buf " " arg
  var_append, 3, var_139_30_buf, string_2, var_145_14_arg, 1, var_139_30_buf,
  // 1+arg_width
  var_std__plus, 2, num_1, var_162_14_arg_width, 1, LOCAL(1),
  // plus &width 1+arg_width
  var_plus, 2, var_141_6_width, LOCAL(1), 1, var_141_6_width,
  // !at_line_start false
  LET, 1, var_false, 1, var_140_6_at_line_start,
  // next
  var_next, 0, TAIL_CALL,
  POS(177, 21),
  POS(178, 33),
  POS(178, 21),
  POS(179, 21),
  POS(180, 21)
};

static FUNCTION_INFO i_lambda_31 = {
  t_lambda_31, NULL, 5, 0,
  {}
};

static TAB_NUM t_lambda_32[] = {
  0, // locals
  0, // parameters
  // if
  var_if, 3, var_140_6_at_line_start, lambda_33, lambda_34, TAIL_CALL,
  POS(182, 9)
};

static FUNCTION_INFO i_lambda_32 = {
  t_lambda_32, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_33[] = {
  0, // locals
  0, // parameters
  //  buf
  LET, 1, var_139_30_buf, TAIL_CALL,
  POS(184, 13)
};

static FUNCTION_INFO i_lambda_33 = {
  t_lambda_33, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_34[] = {
  1, // locals
  0, // parameters
  // push(buf '@nl;')
  var_push, 2, var_139_30_buf, chr_10, 1, LOCAL(1),
  //  push(buf '@nl;')
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(185, 14),
  POS(185, 13)
};

static FUNCTION_INFO i_lambda_34 = {
  t_lambda_34, NULL, 2, 0,
  {}
};

static TAB_NUM t_func_funky_types__functor___to_source[] = {
  4, // locals
  1, // parameters
  LOCAL(4), // 187_35_self
  // identifier_of(self) map_reduce(extensions_of(self) to_source append "")
  var_identifier_of, 1, LOCAL(4), 1, LOCAL(1),
  // extensions_of(self) to_source append "")
  var_extensions_of, 1, LOCAL(4), 1, LOCAL(2),
  // map_reduce(extensions_of(self) to_source append "")
  var_map_reduce, 4, LOCAL(2), var_to_source, var_append, string_9, 1, LOCAL(3),
  // append identifier_of(self) map_reduce(extensions_of(self) to_source append "")
  var_append, 2, LOCAL(1), LOCAL(3), TAIL_CALL,
  POS(188, 10),
  POS(188, 41),
  POS(188, 30),
  POS(188, 3),
  LOCAL(4)
};

static FUNCTION_INFO i_func_funky_types__functor___to_source = {
  t_func_funky_types__functor___to_source, NULL, 4, 1,
  {"187_35_self\000"}
};

static TAB_NUM t_func_funky_types__attribute_access___to_source[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 192_44_self
  // identifier_of(self)
  var_identifier_of, 1, LOCAL(2), 1, LOCAL(1),
  // append "." identifier_of(self)
  var_append, 2, string_11, LOCAL(1), TAIL_CALL,
  POS(193, 14),
  POS(193, 3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_funky_types__attribute_access___to_source = {
  t_func_funky_types__attribute_access___to_source, NULL, 2, 1,
  {"192_44_self\000"}
};

static TAB_NUM t_func_funky_types__definition___to_source[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 195_38_self
  // identifier_of(self)
  var_identifier_of, 1, LOCAL(2), 1, LOCAL(1),
  // append "$" identifier_of(self)
  var_append, 2, string_12, LOCAL(1), TAIL_CALL,
  POS(196, 14),
  POS(196, 3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_funky_types__definition___to_source = {
  t_func_funky_types__definition___to_source, NULL, 2, 1,
  {"195_38_self\000"}
};

static TAB_NUM t_func_funky_types__dummy_definition___to_source[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 198_44_self
  // funky::name_of(self)
  var_funky__name_of, 1, LOCAL(2), 1, LOCAL(1),
  // append "$_" funky::name_of(self)
  var_append, 2, string_13, LOCAL(1), TAIL_CALL,
  POS(199, 15),
  POS(199, 3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_funky_types__dummy_definition___to_source = {
  t_func_funky_types__dummy_definition___to_source, NULL, 2, 1,
  {"198_44_self\000"}
};

static TAB_NUM t_func_funky_types__redefinition___to_source[] = {
  4, // locals
  1, // parameters
  LOCAL(4), // 201_40_self
  // identifier_of(self)
  var_identifier_of, 1, LOCAL(4), 1, LOCAL(1),
  // extensions_of(self) to_source append "")
  var_extensions_of, 1, LOCAL(4), 1, LOCAL(2),
  // map_reduce(extensions_of(self) to_source append "")
  var_map_reduce, 4, LOCAL(2), var_to_source, var_append, string_9, 1, LOCAL(3),
  // append
  var_append, 3, string_10, LOCAL(1), LOCAL(3), TAIL_CALL,
  POS(203, 9),
  POS(204, 16),
  POS(204, 5),
  POS(202, 3),
  LOCAL(4)
};

static FUNCTION_INFO i_func_funky_types__redefinition___to_source = {
  t_func_funky_types__redefinition___to_source, NULL, 4, 1,
  {"201_40_self\000"}
};

static TAB_NUM t_func_funky_types__update___to_source[] = {
  4, // locals
  1, // parameters
  LOCAL(4), // 206_34_self
  // identifier_of(self)
  var_identifier_of, 1, LOCAL(4), 1, LOCAL(1),
  // extensions_of(self) to_source append "")
  var_extensions_of, 1, LOCAL(4), 1, LOCAL(2),
  // map_reduce(extensions_of(self) to_source append "")
  var_map_reduce, 4, LOCAL(2), var_to_source, var_append, string_9, 1, LOCAL(3),
  // append
  var_append, 3, string_14, LOCAL(1), LOCAL(3), TAIL_CALL,
  POS(208, 9),
  POS(209, 16),
  POS(209, 5),
  POS(207, 3),
  LOCAL(4)
};

static FUNCTION_INFO i_func_funky_types__update___to_source = {
  t_func_funky_types__update___to_source, NULL, 4, 1,
  {"206_34_self\000"}
};

static TAB_NUM t_func_funky_types__function_call___to_source[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 211_41_self
  // arguments_of(self) to_source)
  var_arguments_of, 1, LOCAL(2), 1, LOCAL(1),
  // $arguments map(arguments_of(self) to_source)
  var_map, 2, LOCAL(1), var_to_source, 1, LOCAL(3),
  // join(arguments " ") ")"
  var_join, 2, LOCAL(3), string_2, 1, LOCAL(1),
  // append "(" join(arguments " ") ")"
  var_append, 3, string_15, LOCAL(1), string_16, TAIL_CALL,
  POS(212, 18),
  POS(212, 3),
  POS(213, 14),
  POS(213, 3),
  LOCAL(2),
  LOCAL(3)
};

static FUNCTION_INFO i_func_funky_types__function_call___to_source = {
  t_func_funky_types__function_call___to_source, NULL, 4, 2,
  {"211_41_self\000", "212_4_arguments\000"}
};

static TAB_NUM t_func_funky_types__remark_and_multiline_function_call___to_source[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 215_62_self
  // $arguments arguments_of(self)
  var_arguments_of, 1, LOCAL(2), 1, var_216_4_arguments,
  // remark_of(self).to_source
  var_remark_of, 1, LOCAL(2), 1, LOCAL(1),
  // $head remark_of(self).to_source
  var_to_source, 1, LOCAL(1), 1, var_217_4_head,
  // is_empty
  var_is_empty, 1, var_216_4_arguments, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_35, lambda_36, TAIL_CALL,
  POS(216, 3),
  POS(217, 9),
  POS(217, 3),
  POS(219, 15),
  POS(218, 3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_funky_types__remark_and_multiline_function_call___to_source = {
  t_func_funky_types__remark_and_multiline_function_call___to_source, NULL, 5, 1,
  {"215_62_self\000"}
};

static TAB_NUM t_lambda_35[] = {
  0, // locals
  0, // parameters
  //  head
  LET, 1, var_217_4_head, TAIL_CALL,
  POS(220, 7)
};

static FUNCTION_INFO i_lambda_35 = {
  t_lambda_35, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_36[] = {
  0, // locals
  0, // parameters
  // if
  var_if, 3, var_do_return_inline_only, lambda_37, lambda_38, TAIL_CALL,
  POS(222, 7)
};

static FUNCTION_INFO i_lambda_36 = {
  t_lambda_36, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_37[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(224, 11)
};

static FUNCTION_INFO i_lambda_37 = {
  t_lambda_37, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_38[] = {
  0, // locals
  0, // parameters
  // map &arguments to_source
  var_map, 2, var_216_4_arguments, var_to_source, 1, var_216_4_arguments,
  // append
  var_append, 3, var_217_4_head, string_1, lambda_39, TAIL_CALL,
  POS(226, 11),
  POS(227, 11)
};

static FUNCTION_INFO i_lambda_38 = {
  t_lambda_38, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_39[] = {
  3, // locals
  1, // parameters
  LOCAL(3), // 229_16_argument
  // indent+2) argument "@nl;"
  var_std__plus, 2, var_indent, num_2, 1, LOCAL(1),
  // tabs_and_spaces(indent+2) argument "@nl;"
  var_tabs_and_spaces, 1, LOCAL(1), 1, LOCAL(2),
  // append tabs_and_spaces(indent+2) argument "@nl;"
  var_append, 3, LOCAL(2), LOCAL(3), string_1, TAIL_CALL,
  POS(229, 49),
  POS(229, 33),
  POS(229, 26),
  LOCAL(3)
};

static FUNCTION_INFO i_lambda_39 = {
  t_lambda_39, NULL, 3, 1,
  {"229_16_argument\000"}
};

static TAB_NUM t_func_funky_types__remark___to_source[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 231_34_self
  // text_of(self)
  var_text_of, 1, LOCAL(2), 1, LOCAL(1),
  // append " #" text_of(self)
  var_append, 2, string_17, LOCAL(1), TAIL_CALL,
  POS(232, 15),
  POS(232, 3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_funky_types__remark___to_source = {
  t_func_funky_types__remark___to_source, NULL, 2, 1,
  {"231_34_self\000"}
};

static TAB_NUM t_func_funky_types__return_expression___to_source[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 234_45_self
  // arguments_of(self) to_source)
  var_arguments_of, 1, LOCAL(2), 1, LOCAL(1),
  // $arguments map(arguments_of(self) to_source)
  var_map, 2, LOCAL(1), var_to_source, 1, LOCAL(3),
  // join(arguments " ")
  var_join, 2, LOCAL(3), string_2, 1, LOCAL(1),
  // append "-> " join(arguments " ")
  var_append, 2, string_18, LOCAL(1), TAIL_CALL,
  POS(235, 18),
  POS(235, 3),
  POS(236, 16),
  POS(236, 3),
  LOCAL(2),
  LOCAL(3)
};

static FUNCTION_INFO i_func_funky_types__return_expression___to_source = {
  t_func_funky_types__return_expression___to_source, NULL, 4, 2,
  {"234_45_self\000", "235_4_arguments\000"}
};

static TAB_NUM t_func_funky_types__expression___to_source[] = {
  5, // locals
  1, // parameters
  LOCAL(5), // 240_38_self
  // expression_of(self).to_source operator_of(self).to_source
  var_expression_of, 1, LOCAL(5), 1, LOCAL(1),
  // to_source operator_of(self).to_source
  var_to_source, 1, LOCAL(1), 1, LOCAL(2),
  // operator_of(self).to_source
  var_operator_of, 1, LOCAL(5), 1, LOCAL(3),
  // to_source
  var_to_source, 1, LOCAL(3), 1, LOCAL(4),
  // append expression_of(self).to_source operator_of(self).to_source
  var_append, 2, LOCAL(2), LOCAL(4), TAIL_CALL,
  POS(241, 10),
  POS(241, 30),
  POS(241, 40),
  POS(241, 58),
  POS(241, 3),
  LOCAL(5)
};

static FUNCTION_INFO i_func_funky_types__expression___to_source = {
  t_func_funky_types__expression___to_source, NULL, 5, 1,
  {"240_38_self\000"}
};

static TAB_NUM t_func_funky_types__not_equal___to_source[] = {
  3, // locals
  1, // parameters
  LOCAL(3), // 243_37_self
  // expression_of(self).to_source
  var_expression_of, 1, LOCAL(3), 1, LOCAL(1),
  // to_source
  var_to_source, 1, LOCAL(1), 1, LOCAL(2),
  // append " != " expression_of(self).to_source
  var_append, 2, string_20, LOCAL(2), TAIL_CALL,
  POS(244, 17),
  POS(244, 37),
  POS(244, 3),
  LOCAL(3)
};

static FUNCTION_INFO i_func_funky_types__not_equal___to_source = {
  t_func_funky_types__not_equal___to_source, NULL, 3, 1,
  {"243_37_self\000"}
};

static TAB_NUM t_func_funky_types__numeric_literal___to_source[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 246_43_self
  // digits_of(self)
  var_digits_of, 1, LOCAL(2), 1, LOCAL(1),
  // -> digits_of(self)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(247, 6),
  POS(247, 3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_funky_types__numeric_literal___to_source = {
  t_func_funky_types__numeric_literal___to_source, NULL, 2, 1,
  {"246_43_self\000"}
};

static TAB_NUM t_func_funky_types__string_literal___to_source[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 249_42_self
  // components_of(self) to_source)
  var_components_of, 1, LOCAL(2), 1, LOCAL(1),
  // $components map(components_of(self) to_source)
  var_map, 2, LOCAL(1), var_to_source, 1, LOCAL(3),
  // $buf "@quot;"
  LET, 1, string_21, 1, var_251_4_buf,
  // for_each components
  var_for_each, 3, LOCAL(3), lambda_40, lambda_41, TAIL_CALL,
  POS(250, 19),
  POS(250, 3),
  POS(251, 3),
  POS(252, 3),
  LOCAL(2),
  LOCAL(3)
};

static FUNCTION_INFO i_func_funky_types__string_literal___to_source = {
  t_func_funky_types__string_literal___to_source, NULL, 4, 2,
  {"249_42_self\000", "250_4_components\000"}
};

static TAB_NUM t_lambda_40[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 253_8_component
  // append &buf component
  var_append, 2, var_251_4_buf, LOCAL(1), 1, var_251_4_buf,
  // next
  var_next, 0, TAIL_CALL,
  POS(254, 7),
  POS(255, 7),
  LOCAL(1)
};

static FUNCTION_INFO i_lambda_40 = {
  t_lambda_40, NULL, 2, 1,
  {"253_8_component\000"}
};

static TAB_NUM t_lambda_41[] = {
  0, // locals
  0, // parameters
  // push buf '@quot;'
  var_push, 2, var_251_4_buf, chr_34, TAIL_CALL,
  POS(257, 7)
};

static FUNCTION_INFO i_lambda_41 = {
  t_lambda_41, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_funky_types__character_sequence___to_source[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 259_46_self
  // characters_of(self)
  var_characters_of, 1, LOCAL(2), 1, LOCAL(1),
  // -> characters_of(self)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(260, 6),
  POS(260, 3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_funky_types__character_sequence___to_source = {
  t_func_funky_types__character_sequence___to_source, NULL, 2, 1,
  {"259_46_self\000"}
};

static TAB_NUM t_func_funky_types__escape_expression___to_source[] = {
  3, // locals
  1, // parameters
  LOCAL(3), // 262_45_self
  // expression_of(self).to_source ")"
  var_expression_of, 1, LOCAL(3), 1, LOCAL(1),
  // to_source ")"
  var_to_source, 1, LOCAL(1), 1, LOCAL(2),
  // append "@@(" expression_of(self).to_source ")"
  var_append, 3, string_22, LOCAL(2), string_16, TAIL_CALL,
  POS(263, 16),
  POS(263, 36),
  POS(263, 3),
  LOCAL(3)
};

static FUNCTION_INFO i_func_funky_types__escape_expression___to_source = {
  t_func_funky_types__escape_expression___to_source, NULL, 3, 1,
  {"262_45_self\000"}
};

static TAB_NUM t_func_funky_types__attribute_value_pair___to_source[] = {
  0, // locals
  1, // parameters
  var_271_48_self,
  // if
  var_if, 3, var_do_return_inline_only, lambda_42, lambda_43, TAIL_CALL,
  POS(272, 3)
};

static FUNCTION_INFO i_func_funky_types__attribute_value_pair___to_source = {
  t_func_funky_types__attribute_value_pair___to_source, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_42[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(274, 7)
};

static FUNCTION_INFO i_lambda_42 = {
  t_lambda_42, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_43[] = {
  3, // locals
  0, // parameters
  // $identifier identifier_of(self)
  var_identifier_of, 1, var_271_48_self, 1, LOCAL(2),
  // argument_of(self).to_source
  var_argument_of, 1, var_271_48_self, 1, LOCAL(1),
  // $value argument_of(self).to_source
  var_to_source, 1, LOCAL(1), 1, LOCAL(3),
  // append "." identifier " " value "@nl;"
  var_append, 5, string_11, LOCAL(2), string_2, LOCAL(3), string_1, TAIL_CALL,
  POS(276, 7),
  POS(277, 14),
  POS(277, 7),
  POS(278, 7),
  LOCAL(3),
  LOCAL(2)
};

static FUNCTION_INFO i_lambda_43 = {
  t_lambda_43, NULL, 4, 2,
  {"277_8_value\000", "276_8_identifier\000"}
};

static TAB_NUM t_func_funky_types__node___to_source[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 280_32_self
  // debug::dump `self
  var_debug__dump, 2, str_self, LOCAL(1), 0,
  // -> "???"
  LET, 1, string_25, TAIL_CALL,
  POS(281, 3),
  POS(282, 3),
  LOCAL(1)
};

static FUNCTION_INFO i_func_funky_types__node___to_source = {
  t_func_funky_types__node___to_source, NULL, 2, 1,
  {"280_32_self\000"}
};

static TAB_NUM t_func_fits_on_line[] = {
  5, // locals
  1, // parameters
  LOCAL(5), // 284_17_expr
  // length_of(expr) <= LINE_WIDTH
  var_length_of, 1, LOCAL(5), 1, LOCAL(1),
  // indent+length_of(expr) <= LINE_WIDTH
  var_std__plus, 2, var_indent, LOCAL(1), 1, LOCAL(2),
  // LINE_WIDTH
  var_std__less, 2, num_80, LOCAL(2), 1, LOCAL(3),
  // LINE_WIDTH
  var_std__not, 1, LOCAL(3), 1, LOCAL(4),
  // -> indent+length_of(expr) <= LINE_WIDTH
  LET, 1, LOCAL(4), TAIL_CALL,
  POS(285, 13),
  POS(285, 6),
  POS(285, 32),
  POS(285, 32),
  POS(285, 3),
  LOCAL(5)
};

static FUNCTION_INFO i_func_fits_on_line = {
  t_func_fits_on_line, NULL, 5, 1,
  {"284_17_expr\000"}
};

static int key_value_pair_60_27_arguments[] = {
  -string_6, -string_7
};

static FUNKY_CONSTANT constants_table[] = {
  {FLT_POSITIVE_INT64, 0, {.value = 80}},
  {FLT_POSITIVE_INT64, 0, {.value = 0}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_funky_types__body___to_source}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_1}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_2}},
  {FLT_POSITIVE_INT64, 0, {.value = 2}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_3}},
  {FLT_STRING_8, 1, {.str_8 = "\012"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_4}},
  {FLT_STRING_8, 1, {.str_8 = " "}},
  {FLT_STRING_8, 2, {.str_8 = " ("}},
  {FLT_STRING_8, 2, {.str_8 = ")\012"}},
  {FLT_STRING_8, 1, {.str_8 = ":"}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_funky_types__inline_parameter___to_source}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_funky__statements_to_source}},
  {FLT_STRING_8, 3, {.str_8 = "\012\012\012"}},
  {FLT_STRING_8, 2, {.str_8 = "\012\012"}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_60_27_arguments}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_funky_types__multiline_remark___to_source}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_5}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_6}},
  {FLT_STRING_8, 1, {.str_8 = "#"}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_funky_types__statement___to_source}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_arguments_is_empty}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_7}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_do_return_inline_only}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_8}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_9}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_10}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_11}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_12}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_13}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_14}},
  {FLT_NEGATIVE_INT64, 0, {.value = 1}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_15}},
  {FLT_POSITIVE_INT64, 0, {.value = 1}},
  {FLT_NEGATIVE_INT64, 0, {.value = 2}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_16}},
  {FLT_CHARACTER, 0, {.value = 36}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_17}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_18}},
  {FLT_STRING_8, 0, {.str_8 = ""}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_19}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_20}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_21}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_22}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_multiline_layout}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_add_statement_arguments}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_23}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_arg_is_undefined}},
  {FLT_CHARACTER, 0, {.value = 58}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_24}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_25}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_26}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_27}},
  {FLT_CHARACTER, 0, {.value = 10}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_28}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_29}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_30}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_at_line_start}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_31}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_32}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_33}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_34}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_funky_types__functor___to_source}},
  {FLT_STRING_8, 1, {.str_8 = "!"}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_funky_types__attribute_access___to_source}},
  {FLT_STRING_8, 1, {.str_8 = "."}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_funky_types__definition___to_source}},
  {FLT_STRING_8, 1, {.str_8 = "$"}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_funky_types__dummy_definition___to_source}},
  {FLT_STRING_8, 2, {.str_8 = "$_"}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_funky_types__redefinition___to_source}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_funky_types__update___to_source}},
  {FLT_STRING_8, 1, {.str_8 = "&"}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_funky_types__function_call___to_source}},
  {FLT_STRING_8, 1, {.str_8 = "("}},
  {FLT_STRING_8, 1, {.str_8 = ")"}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_funky_types__remark_and_multiline_function_call___to_source}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_35}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_36}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_37}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_38}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_39}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_funky_types__remark___to_source}},
  {FLT_STRING_8, 2, {.str_8 = " #"}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_funky_types__return_expression___to_source}},
  {FLT_STRING_8, 3, {.str_8 = "-> "}},
  {FLT_STRING_8, 2, {.str_8 = "->"}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_funky_types__expression___to_source}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_funky_types__not_equal___to_source}},
  {FLT_STRING_8, 4, {.str_8 = " != "}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_funky_types__numeric_literal___to_source}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_funky_types__string_literal___to_source}},
  {FLT_STRING_8, 1, {.str_8 = "\042"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_40}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_41}},
  {FLT_CHARACTER, 0, {.value = 34}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_funky_types__character_sequence___to_source}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_funky_types__escape_expression___to_source}},
  {FLT_STRING_8, 2, {.str_8 = "@("}},
  {FLT_STRING_8, 2, {.str_8 = "()"}},
  {FLT_STRING_8, 3, {.str_8 = "(!)"}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_funky_types__attribute_value_pair___to_source}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_42}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_43}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_funky_types__node___to_source}},
  {FLT_STRING_8, 4, {.str_8 = "self"}},
  {FLT_STRING_8, 3, {.str_8 = "???"}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_fits_on_line}}
};

static ATTRIBUTE_DEFINITION funky_types__body__attributes[] = {
  {var_to_source, -func_funky_types__body___to_source}
};

static ATTRIBUTE_DEFINITION funky_types__inline_parameter__attributes[] = {
  {var_to_source, -func_funky_types__inline_parameter___to_source}
};

static ATTRIBUTE_DEFINITION funky_types__multiline_remark__attributes[] = {
  {var_to_source, -func_funky_types__multiline_remark___to_source}
};

static ATTRIBUTE_DEFINITION funky_types__statement__attributes[] = {
  {var_to_source, -func_funky_types__statement___to_source}
};

static ATTRIBUTE_DEFINITION funky_types__functor__attributes[] = {
  {var_to_source, -func_funky_types__functor___to_source}
};

static ATTRIBUTE_DEFINITION funky_types__io_call__attributes[] = {
  {-var_to_source, -string_10}
};

static ATTRIBUTE_DEFINITION funky_types__attribute_access__attributes[] = {
  {var_to_source, -func_funky_types__attribute_access___to_source}
};

static ATTRIBUTE_DEFINITION funky_types__definition__attributes[] = {
  {var_to_source, -func_funky_types__definition___to_source}
};

static ATTRIBUTE_DEFINITION funky_types__dummy_definition__attributes[] = {
  {var_to_source, -func_funky_types__dummy_definition___to_source}
};

static ATTRIBUTE_DEFINITION funky_types__redefinition__attributes[] = {
  {var_to_source, -func_funky_types__redefinition___to_source}
};

static ATTRIBUTE_DEFINITION funky_types__update__attributes[] = {
  {var_to_source, -func_funky_types__update___to_source}
};

static ATTRIBUTE_DEFINITION funky_types__function_call__attributes[] = {
  {var_to_source, -func_funky_types__function_call___to_source}
};

static ATTRIBUTE_DEFINITION funky_types__remark_and_multiline_function_call__attributes[] = {
  {var_to_source, -func_funky_types__remark_and_multiline_function_call___to_source}
};

static ATTRIBUTE_DEFINITION funky_types__remark__attributes[] = {
  {var_to_source, -func_funky_types__remark___to_source}
};

static ATTRIBUTE_DEFINITION funky_types__return_expression__attributes[] = {
  {var_to_source, -func_funky_types__return_expression___to_source}
};

static ATTRIBUTE_DEFINITION funky_types__return__attributes[] = {
  {-var_to_source, -string_19}
};

static ATTRIBUTE_DEFINITION funky_types__expression__attributes[] = {
  {var_to_source, -func_funky_types__expression___to_source}
};

static ATTRIBUTE_DEFINITION funky_types__not_equal__attributes[] = {
  {var_to_source, -func_funky_types__not_equal___to_source}
};

static ATTRIBUTE_DEFINITION funky_types__numeric_literal__attributes[] = {
  {var_to_source, -func_funky_types__numeric_literal___to_source}
};

static ATTRIBUTE_DEFINITION funky_types__string_literal__attributes[] = {
  {var_to_source, -func_funky_types__string_literal___to_source}
};

static ATTRIBUTE_DEFINITION funky_types__character_sequence__attributes[] = {
  {var_to_source, -func_funky_types__character_sequence___to_source}
};

static ATTRIBUTE_DEFINITION funky_types__escape_expression__attributes[] = {
  {var_to_source, -func_funky_types__escape_expression___to_source}
};

static ATTRIBUTE_DEFINITION funky_types__unique__attributes[] = {
  {-var_to_source, -string_11}
};

static ATTRIBUTE_DEFINITION funky_types__attribute__attributes[] = {
  {-var_to_source, -string_23}
};

static ATTRIBUTE_DEFINITION funky_types__attribute_with_setter__attributes[] = {
  {-var_to_source, -string_24}
};

static ATTRIBUTE_DEFINITION funky_types__attribute_value_pair__attributes[] = {
  {var_to_source, -func_funky_types__attribute_value_pair___to_source}
};

static ATTRIBUTE_DEFINITION funky_types__node__attributes[] = {
  {var_to_source, -func_funky_types__node___to_source}
};

static FUNKY_VARIABLE variables_table[] = {
  {
    FOT_UNKNOWN, 0, 0,
    "assign\000std", NULL,
    {.position = POS(27, 1)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "indent\000", NULL,
    {.const_idx = -num_0}
  },
  {
    FOT_DERIVED, 0, 0,
    "do_return_inline_only\000", NULL,
    {"false\000"}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "false\000", NULL,
    {.position = POS(30, 24)}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "to_source\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "body\000funky_types", funky_types__body__attributes,
    {.position = POS(34, 1)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "34_32_self\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "undefined\000", NULL,
    {.position = POS(37, 8)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "parameters_of\000", NULL,
    {.position = POS(39, 23)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "39_8_parameters\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "map\000", NULL,
    {.position = POS(39, 19)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "statement_of\000", NULL,
    {.position = POS(40, 23)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000", NULL,
    {.position = POS(41, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "statements_of\000", NULL,
    {.position = POS(42, 40)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "statements_to_source\000", NULL,
    {.position = POS(42, 19)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_empty\000", NULL,
    {.position = POS(45, 22)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "join\000", NULL,
    {.position = POS(47, 26)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "append\000", NULL,
    {.position = POS(47, 14)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if\000", NULL,
    {.position = POS(44, 9)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "inline_parameter\000funky_types", funky_types__inline_parameter__attributes,
    {.position = POS(53, 1)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "name_of\000funky", NULL,
    {.position = POS(54, 6)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "statements_to_source\000funky", NULL,
    {.const_idx = -func_funky__statements_to_source}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "map_reduce\000", NULL,
    {.position = POS(57, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "key_value_pair\000std", NULL,
    {.position = POS(60, 27)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "replace_all\000", NULL,
    {.position = POS(60, 3)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "multiline_remark\000funky_types", funky_types__multiline_remark__attributes,
    {.position = POS(62, 1)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "62_44_self\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "tabs_and_spaces\000", NULL,
    {.position = POS(66, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "text_of\000", NULL,
    {.position = POS(66, 43)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "statement\000funky_types", funky_types__statement__attributes,
    {.position = POS(68, 1)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "head_of\000", NULL,
    {.position = POS(69, 9)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "69_4_head\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "70_4_arguments\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "arguments_of\000", NULL,
    {.position = POS(70, 14)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "80_16_args\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_defined\000", NULL,
    {.position = POS(82, 25)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "all_of\000", NULL,
    {.position = POS(82, 13)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "83_16_stmt\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "true\000", NULL,
    {.position = POS(90, 34)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "91_16_args\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_undefined\000", NULL,
    {.position = POS(99, 28)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "range\000", NULL,
    {.position = POS(100, 26)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "and\000std", NULL,
    {.position = POS(98, 19)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "equal\000std", NULL,
    {.position = POS(105, 23)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "112_31_idx\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "find_first\000", NULL,
    {.position = POS(112, 19)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "less\000std", NULL,
    {.position = POS(114, 27)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "minus\000std", NULL,
    {.position = POS(115, 53)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "115_24_start_args\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "width_of\000", NULL,
    {.position = POS(118, 34)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000std", NULL,
    {.position = POS(118, 27)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not\000std", NULL,
    {.position = POS(119, 27)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "139_30_buf\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "140_6_at_line_start\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "141_6_width\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "143_6_spacing\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "145_10_idx\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "145_14_arg\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "next\000", NULL,
    {.position = POS(154, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "push\000", NULL,
    {.position = POS(156, 51)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "update_if_not\000", NULL,
    {.position = POS(156, 17)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "162_14_arg_width\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "for_each\000", NULL,
    {.position = POS(144, 5)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "functor\000funky_types", funky_types__functor__attributes,
    {.position = POS(187, 1)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "identifier_of\000", NULL,
    {.position = POS(188, 10)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "extensions_of\000", NULL,
    {.position = POS(188, 41)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "io_call\000funky_types", funky_types__io_call__attributes,
    {.position = POS(190, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "attribute_access\000funky_types", funky_types__attribute_access__attributes,
    {.position = POS(192, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "definition\000funky_types", funky_types__definition__attributes,
    {.position = POS(195, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "dummy_definition\000funky_types", funky_types__dummy_definition__attributes,
    {.position = POS(198, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "redefinition\000funky_types", funky_types__redefinition__attributes,
    {.position = POS(201, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "update\000funky_types", funky_types__update__attributes,
    {.position = POS(206, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "function_call\000funky_types", funky_types__function_call__attributes,
    {.position = POS(211, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "remark_and_multiline_function_call\000funky_types", funky_types__remark_and_multiline_function_call__attributes,
    {.position = POS(215, 1)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "216_4_arguments\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "remark_of\000", NULL,
    {.position = POS(217, 9)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "217_4_head\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 1,
    "remark\000funky_types", funky_types__remark__attributes,
    {.position = POS(231, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "return_expression\000funky_types", funky_types__return_expression__attributes,
    {.position = POS(234, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "return\000funky_types", funky_types__return__attributes,
    {.position = POS(238, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "expression\000funky_types", funky_types__expression__attributes,
    {.position = POS(240, 1)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "expression_of\000", NULL,
    {.position = POS(241, 10)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "operator_of\000", NULL,
    {.position = POS(241, 40)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "not_equal\000funky_types", funky_types__not_equal__attributes,
    {.position = POS(243, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "numeric_literal\000funky_types", funky_types__numeric_literal__attributes,
    {.position = POS(246, 1)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "digits_of\000", NULL,
    {.position = POS(247, 6)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "string_literal\000funky_types", funky_types__string_literal__attributes,
    {.position = POS(249, 1)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "components_of\000", NULL,
    {.position = POS(250, 19)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "251_4_buf\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 1,
    "character_sequence\000funky_types", funky_types__character_sequence__attributes,
    {.position = POS(259, 1)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "characters_of\000", NULL,
    {.position = POS(260, 6)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "escape_expression\000funky_types", funky_types__escape_expression__attributes,
    {.position = POS(262, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "unique\000funky_types", funky_types__unique__attributes,
    {.position = POS(265, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "attribute\000funky_types", funky_types__attribute__attributes,
    {.position = POS(267, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "attribute_with_setter\000funky_types", funky_types__attribute_with_setter__attributes,
    {.position = POS(269, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "attribute_value_pair\000funky_types", funky_types__attribute_value_pair__attributes,
    {.position = POS(271, 1)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "271_48_self\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "argument_of\000", NULL,
    {.position = POS(277, 14)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "node\000funky_types", funky_types__node__attributes,
    {.position = POS(280, 1)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "dump\000debug", NULL,
    {.position = POS(281, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "length_of\000", NULL,
    {.position = POS(285, 13)}
  }
};

static FUNKY_NAMESPACE used_namespaces[] = {
  {"std", 1, 0},
  {"funky", 1, 0}
};

FUNKY_MODULE module__pretty_print = {
  "_pretty_print", // module name
  "pretty_print.fky", // module filename
  .major_version = 0,
  .minor_version = 0,
  .feature_flags = FEAT_POSITIONS|FEAT_FUNCTION_INFO,
  .marker = 0,
  0, // number of required modules
  0, // number of defined namespaces
  2, // number of used namespaces
  110, // number of constants
  101, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  constants_table,
  variables_table,
};
