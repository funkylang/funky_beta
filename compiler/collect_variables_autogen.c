#include <stddef.h>
#include <stdint.h>

#include "runtime/common.h"
#include "runtime/builtins.h"
#include "runtime/fko.h"
#include "runtime/memory.h"

enum {
  func_std_types__undefined___collect_variables = -1,
  func_funky_types__node___collect_variables = -2,
  func_funky_types__identifier_and_expression___collect_variables = -3,
  func_funky_types__simple_expression___collect_variables = -4,
  func_funky_types__inline_statement___collect_variables = -5,
  func_funky_types__function_call_extension___collect_variables = -6,
  func_funky_types__attribute_access_extension___collect_variables = -7,
  func_funky_types__inline_function_call_extension___collect_variables = -8,
  func_funky_types__inline_attribute_access_extension___collect_variables = -9,
  func_funky_types__function_call___collect_variables = -10,
  func_funky_types__spaced_arguments___collect_variables = -11,
  func_funky_types__spaced_statement_arguments___collect_variables = -12,
  func_funky_types__arguments___collect_variables = -13,
  func_funky_types__even_more_statement_arguments___collect_variables = -14,
  func_funky_types__remark_and_multiline_function_call___collect_variables = -15,
  func_funky_types__expression___collect_variables = -16,
  func_funky_types__parenthesed_expression___collect_variables = -17,
  func_funky_types__multiline_minus___collect_variables = -18,
  func_funky_types__expression_and_inline_arguments___collect_variables = -19,
  func_funky_types__string_literal___collect_variables = -20,
  func_funky_types__some_string_components___collect_variables = -21,
  func_funky_types__some_string_line_components___collect_variables = -22,
  func_funky_types__inline_body___collect_variables = -23,
  func_funky_types__statements___collect_variables = -24,
  func_funky_types__one_or_more_inline_parameters___collect_variables = -25,
  func_funky_types__open_parameters___collect_variables = -26,
  func_funky_types__initial_value___collect_variables = -27
};

enum {
  var__START = FIRST_VAR-1,
  var_std_types__undefined, // extern
  var_collect_variables, // extern polymorphic
  var_empty_insert_order_table, // extern
  var_std__assign, // extern
  var_funky_types__node, // extern
  var_funky_types__identifier_and_expression, // extern
  var_funky__expression_of, // extern
  var_funky_types__simple_expression, // extern
  var_funky_types__inline_statement, // extern
  var_funky__head_of, // extern
  var_funky__arguments_of, // extern
  var_merge_variables, // extern
  var_funky_types__function_call_extension, // extern
  var_funky__call_of, // extern
  var_funky__extensions_of, // extern
  var_map_reduce, // extern
  var_funky_types__attribute_access_extension, // extern
  var_funky__access_of, // extern
  var_funky_types__inline_function_call_extension, // extern
  var_funky_types__inline_attribute_access_extension, // extern
  var_funky_types__function_call, // extern
  var_funky_types__spaced_arguments, // extern
  var_funky_types__spaced_statement_arguments, // extern
  var_funky_types__arguments, // extern
  var_funky__argument_of, // extern
  var_funky_types__even_more_statement_arguments, // extern
  var_funky_types__remark_and_multiline_function_call, // extern
  var_funky_types__expression, // extern
  var_funky__operator_of, // extern
  var_funky_types__parenthesed_expression, // extern
  var_funky__calls_of, // extern
  var_funky_types__multiline_minus, // extern
  var_funky_types__expression_and_inline_arguments, // extern
  var_funky_types__string_literal, // extern
  var_funky__components_of, // extern
  var_funky_types__some_string_components, // extern
  var_funky__component_of, // extern
  var_funky_types__some_string_line_components, // extern
  var_funky_types__inline_body, // extern
  var_funky__parameters_of, // extern
  var_funky__statement_of, // extern
  var_funky_types__statements, // extern
  var_funky_types__one_or_more_inline_parameters, // extern
  var_funky__parameter_of, // extern
  var_funky_types__open_parameters, // extern
  var_funky_types__initial_value, // extern
  var_funky__operand_of, // extern
  var__END
};


static TAB_NUM t_func_std_types__undefined___collect_variables[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 10_43_self
  // -> empty_insert_order_table
  LET, 1, var_empty_insert_order_table, TAIL_CALL,
  POS(11, 3),
  LOCAL(1)
};

static FUNCTION_INFO i_func_std_types__undefined___collect_variables = {
  t_func_std_types__undefined___collect_variables, NULL, 1, 1,
  {"10_43_self\000"}
};

static TAB_NUM t_func_funky_types__node___collect_variables[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 13_40_self
  // -> empty_insert_order_table
  LET, 1, var_empty_insert_order_table, TAIL_CALL,
  POS(14, 3),
  LOCAL(1)
};

static FUNCTION_INFO i_func_funky_types__node___collect_variables = {
  t_func_funky_types__node___collect_variables, NULL, 1, 1,
  {"13_40_self\000"}
};

static TAB_NUM t_func_funky_types__identifier_and_expression___collect_variables[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 16_61_self
  // funky::expression_of(self) $result_insert_order_table
  var_funky__expression_of, 1, LOCAL(2), 1, LOCAL(1),
  // collect_variables funky::expression_of(self) $result_insert_order_table
  var_collect_variables, 1, LOCAL(1), 1, LOCAL(3),
  // -> result_insert_order_table
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(17, 21),
  POS(17, 3),
  POS(18, 3),
  LOCAL(3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_funky_types__identifier_and_expression___collect_variables = {
  t_func_funky_types__identifier_and_expression___collect_variables, NULL, 3, 2,
  {"17_49_result_insert_order_table\000", "16_61_self\000"}
};

static TAB_NUM t_func_funky_types__simple_expression___collect_variables[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 20_53_self
  // funky::expression_of(self) $result_insert_order_table
  var_funky__expression_of, 1, LOCAL(2), 1, LOCAL(1),
  // collect_variables funky::expression_of(self) $result_insert_order_table
  var_collect_variables, 1, LOCAL(1), 1, LOCAL(3),
  // -> result_insert_order_table
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(21, 21),
  POS(21, 3),
  POS(22, 3),
  LOCAL(2),
  LOCAL(3)
};

static FUNCTION_INFO i_func_funky_types__simple_expression___collect_variables = {
  t_func_funky_types__simple_expression___collect_variables, NULL, 3, 2,
  {"20_53_self\000", "21_49_result_insert_order_table\000"}
};

static TAB_NUM t_func_funky_types__inline_statement___collect_variables[] = {
  4, // locals
  1, // parameters
  LOCAL(2), // 24_52_self
  // funky::head_of(self) $result_insert_order_table
  var_funky__head_of, 1, LOCAL(2), 1, LOCAL(1),
  // collect_variables funky::head_of(self) $result_insert_order_table
  var_collect_variables, 1, LOCAL(1), 1, LOCAL(3),
  // funky::arguments_of(self) $arguments_result_insert_order_table
  var_funky__arguments_of, 1, LOCAL(2), 1, LOCAL(1),
  // collect_variables funky::arguments_of(self) $arguments_result_insert_order_table
  var_collect_variables, 1, LOCAL(1), 1, LOCAL(4),
  // merge_variables &result_insert_order_table arguments_result_insert_order_table
  var_merge_variables, 2, LOCAL(3), LOCAL(4), 1, LOCAL(3),
  // -> result_insert_order_table
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(25, 21),
  POS(25, 3),
  POS(26, 21),
  POS(26, 3),
  POS(27, 3),
  POS(28, 3),
  LOCAL(3),
  LOCAL(4),
  LOCAL(2)
};

static FUNCTION_INFO i_func_funky_types__inline_statement___collect_variables = {
  t_func_funky_types__inline_statement___collect_variables, NULL, 6, 3,
  {"25_43_result_insert_order_table\000", "26_48_arguments_result_insert_order_table\000", "24_52_self\000"}
};

static TAB_NUM t_func_funky_types__function_call_extension___collect_variables[] = {
  4, // locals
  1, // parameters
  LOCAL(2), // 30_59_self
  // funky::call_of(self) $result_insert_order_table
  var_funky__call_of, 1, LOCAL(2), 1, LOCAL(1),
  // collect_variables funky::call_of(self) $result_insert_order_table
  var_collect_variables, 1, LOCAL(1), 1, LOCAL(3),
  // funky::extensions_of(self) $extensions_result_insert_order_table collect_variables merge_variables empty_insert_order_table
  var_funky__extensions_of, 1, LOCAL(2), 1, LOCAL(1),
  // map_reduce funky::extensions_of(self) $extensions_result_insert_order_table collect_variables merge_variables empty_insert_order_table
  var_map_reduce, 4, LOCAL(1), var_collect_variables, var_merge_variables, var_empty_insert_order_table, 1, LOCAL(4),
  // merge_variables &result_insert_order_table extensions_result_insert_order_table
  var_merge_variables, 2, LOCAL(3), LOCAL(4), 1, LOCAL(3),
  // -> result_insert_order_table
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(31, 21),
  POS(31, 3),
  POS(32, 14),
  POS(32, 3),
  POS(33, 3),
  POS(34, 3),
  LOCAL(2),
  LOCAL(3),
  LOCAL(4)
};

static FUNCTION_INFO i_func_funky_types__function_call_extension___collect_variables = {
  t_func_funky_types__function_call_extension___collect_variables, NULL, 6, 3,
  {"30_59_self\000", "31_43_result_insert_order_table\000", "32_42_extensions_result_insert_order_table\000"}
};

static TAB_NUM t_func_funky_types__attribute_access_extension___collect_variables[] = {
  4, // locals
  1, // parameters
  LOCAL(2), // 36_62_self
  // funky::access_of(self) $result_insert_order_table
  var_funky__access_of, 1, LOCAL(2), 1, LOCAL(1),
  // collect_variables funky::access_of(self) $result_insert_order_table
  var_collect_variables, 1, LOCAL(1), 1, LOCAL(3),
  // funky::extensions_of(self) $extensions_result_insert_order_table collect_variables merge_variables empty_insert_order_table
  var_funky__extensions_of, 1, LOCAL(2), 1, LOCAL(1),
  // map_reduce funky::extensions_of(self) $extensions_result_insert_order_table collect_variables merge_variables empty_insert_order_table
  var_map_reduce, 4, LOCAL(1), var_collect_variables, var_merge_variables, var_empty_insert_order_table, 1, LOCAL(4),
  // merge_variables &result_insert_order_table extensions_result_insert_order_table
  var_merge_variables, 2, LOCAL(3), LOCAL(4), 1, LOCAL(3),
  // -> result_insert_order_table
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(37, 21),
  POS(37, 3),
  POS(38, 14),
  POS(38, 3),
  POS(39, 3),
  POS(40, 3),
  LOCAL(2),
  LOCAL(4),
  LOCAL(3)
};

static FUNCTION_INFO i_func_funky_types__attribute_access_extension___collect_variables = {
  t_func_funky_types__attribute_access_extension___collect_variables, NULL, 6, 3,
  {"36_62_self\000", "38_42_extensions_result_insert_order_table\000", "37_45_result_insert_order_table\000"}
};

static TAB_NUM t_func_funky_types__inline_function_call_extension___collect_variables[] = {
  4, // locals
  1, // parameters
  LOCAL(2), // 42_66_self
  // funky::call_of(self) $result_insert_order_table
  var_funky__call_of, 1, LOCAL(2), 1, LOCAL(1),
  // collect_variables funky::call_of(self) $result_insert_order_table
  var_collect_variables, 1, LOCAL(1), 1, LOCAL(3),
  // funky::extensions_of(self) $extensions_result_insert_order_table collect_variables merge_variables empty_insert_order_table
  var_funky__extensions_of, 1, LOCAL(2), 1, LOCAL(1),
  // map_reduce funky::extensions_of(self) $extensions_result_insert_order_table collect_variables merge_variables empty_insert_order_table
  var_map_reduce, 4, LOCAL(1), var_collect_variables, var_merge_variables, var_empty_insert_order_table, 1, LOCAL(4),
  // merge_variables &result_insert_order_table extensions_result_insert_order_table
  var_merge_variables, 2, LOCAL(3), LOCAL(4), 1, LOCAL(3),
  // -> result_insert_order_table
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(43, 21),
  POS(43, 3),
  POS(44, 14),
  POS(44, 3),
  POS(45, 3),
  POS(46, 3),
  LOCAL(3),
  LOCAL(4),
  LOCAL(2)
};

static FUNCTION_INFO i_func_funky_types__inline_function_call_extension___collect_variables = {
  t_func_funky_types__inline_function_call_extension___collect_variables, NULL, 6, 3,
  {"43_43_result_insert_order_table\000", "44_42_extensions_result_insert_order_table\000", "42_66_self\000"}
};

static TAB_NUM t_func_funky_types__inline_attribute_access_extension___collect_variables[] = {
  4, // locals
  1, // parameters
  LOCAL(2), // 48_69_self
  // funky::access_of(self) $result_insert_order_table
  var_funky__access_of, 1, LOCAL(2), 1, LOCAL(1),
  // collect_variables funky::access_of(self) $result_insert_order_table
  var_collect_variables, 1, LOCAL(1), 1, LOCAL(3),
  // funky::extensions_of(self) $extensions_result_insert_order_table collect_variables merge_variables empty_insert_order_table
  var_funky__extensions_of, 1, LOCAL(2), 1, LOCAL(1),
  // map_reduce funky::extensions_of(self) $extensions_result_insert_order_table collect_variables merge_variables empty_insert_order_table
  var_map_reduce, 4, LOCAL(1), var_collect_variables, var_merge_variables, var_empty_insert_order_table, 1, LOCAL(4),
  // merge_variables &result_insert_order_table extensions_result_insert_order_table
  var_merge_variables, 2, LOCAL(3), LOCAL(4), 1, LOCAL(3),
  // -> result_insert_order_table
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(49, 21),
  POS(49, 3),
  POS(50, 14),
  POS(50, 3),
  POS(51, 3),
  POS(52, 3),
  LOCAL(2),
  LOCAL(3),
  LOCAL(4)
};

static FUNCTION_INFO i_func_funky_types__inline_attribute_access_extension___collect_variables = {
  t_func_funky_types__inline_attribute_access_extension___collect_variables, NULL, 6, 3,
  {"48_69_self\000", "49_45_result_insert_order_table\000", "50_42_extensions_result_insert_order_table\000"}
};

static TAB_NUM t_func_funky_types__function_call___collect_variables[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 54_49_self
  // funky::arguments_of(self) $result_insert_order_table collect_variables merge_variables empty_insert_order_table
  var_funky__arguments_of, 1, LOCAL(2), 1, LOCAL(1),
  // map_reduce funky::arguments_of(self) $result_insert_order_table collect_variables merge_variables empty_insert_order_table
  var_map_reduce, 4, LOCAL(1), var_collect_variables, var_merge_variables, var_empty_insert_order_table, 1, LOCAL(3),
  // -> result_insert_order_table
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(55, 14),
  POS(55, 3),
  POS(56, 3),
  LOCAL(2),
  LOCAL(3)
};

static FUNCTION_INFO i_func_funky_types__function_call___collect_variables = {
  t_func_funky_types__function_call___collect_variables, NULL, 3, 2,
  {"54_49_self\000", "55_41_result_insert_order_table\000"}
};

static TAB_NUM t_func_funky_types__spaced_arguments___collect_variables[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 58_52_self
  // funky::arguments_of(self) $result_insert_order_table
  var_funky__arguments_of, 1, LOCAL(2), 1, LOCAL(1),
  // collect_variables funky::arguments_of(self) $result_insert_order_table
  var_collect_variables, 1, LOCAL(1), 1, LOCAL(3),
  // -> result_insert_order_table
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(59, 21),
  POS(59, 3),
  POS(60, 3),
  LOCAL(2),
  LOCAL(3)
};

static FUNCTION_INFO i_func_funky_types__spaced_arguments___collect_variables = {
  t_func_funky_types__spaced_arguments___collect_variables, NULL, 3, 2,
  {"58_52_self\000", "59_48_result_insert_order_table\000"}
};

static TAB_NUM t_func_funky_types__spaced_statement_arguments___collect_variables[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 62_62_self
  // funky::arguments_of(self) $result_insert_order_table
  var_funky__arguments_of, 1, LOCAL(2), 1, LOCAL(1),
  // collect_variables funky::arguments_of(self) $result_insert_order_table
  var_collect_variables, 1, LOCAL(1), 1, LOCAL(3),
  // -> result_insert_order_table
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(63, 21),
  POS(63, 3),
  POS(64, 3),
  LOCAL(3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_funky_types__spaced_statement_arguments___collect_variables = {
  t_func_funky_types__spaced_statement_arguments___collect_variables, NULL, 3, 2,
  {"63_48_result_insert_order_table\000", "62_62_self\000"}
};

static TAB_NUM t_func_funky_types__arguments___collect_variables[] = {
  4, // locals
  1, // parameters
  LOCAL(2), // 66_45_self
  // funky::argument_of(self) $result_insert_order_table
  var_funky__argument_of, 1, LOCAL(2), 1, LOCAL(1),
  // collect_variables funky::argument_of(self) $result_insert_order_table
  var_collect_variables, 1, LOCAL(1), 1, LOCAL(3),
  // funky::arguments_of(self) $arguments_result_insert_order_table collect_variables merge_variables empty_insert_order_table
  var_funky__arguments_of, 1, LOCAL(2), 1, LOCAL(1),
  // map_reduce funky::arguments_of(self) $arguments_result_insert_order_table collect_variables merge_variables empty_insert_order_table
  var_map_reduce, 4, LOCAL(1), var_collect_variables, var_merge_variables, var_empty_insert_order_table, 1, LOCAL(4),
  // merge_variables &result_insert_order_table arguments_result_insert_order_table
  var_merge_variables, 2, LOCAL(3), LOCAL(4), 1, LOCAL(3),
  // -> result_insert_order_table
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(67, 21),
  POS(67, 3),
  POS(68, 14),
  POS(68, 3),
  POS(69, 3),
  POS(70, 3),
  LOCAL(2),
  LOCAL(3),
  LOCAL(4)
};

static FUNCTION_INFO i_func_funky_types__arguments___collect_variables = {
  t_func_funky_types__arguments___collect_variables, NULL, 6, 3,
  {"66_45_self\000", "67_47_result_insert_order_table\000", "68_41_arguments_result_insert_order_table\000"}
};

static TAB_NUM t_func_funky_types__even_more_statement_arguments___collect_variables[] = {
  4, // locals
  1, // parameters
  LOCAL(2), // 72_65_self
  // funky::argument_of(self) $result_insert_order_table
  var_funky__argument_of, 1, LOCAL(2), 1, LOCAL(1),
  // collect_variables funky::argument_of(self) $result_insert_order_table
  var_collect_variables, 1, LOCAL(1), 1, LOCAL(3),
  // funky::arguments_of(self) $arguments_result_insert_order_table collect_variables merge_variables empty_insert_order_table
  var_funky__arguments_of, 1, LOCAL(2), 1, LOCAL(1),
  // map_reduce funky::arguments_of(self) $arguments_result_insert_order_table collect_variables merge_variables empty_insert_order_table
  var_map_reduce, 4, LOCAL(1), var_collect_variables, var_merge_variables, var_empty_insert_order_table, 1, LOCAL(4),
  // merge_variables &result_insert_order_table arguments_result_insert_order_table
  var_merge_variables, 2, LOCAL(3), LOCAL(4), 1, LOCAL(3),
  // -> result_insert_order_table
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(73, 21),
  POS(73, 3),
  POS(74, 14),
  POS(74, 3),
  POS(75, 3),
  POS(76, 3),
  LOCAL(3),
  LOCAL(4),
  LOCAL(2)
};

static FUNCTION_INFO i_func_funky_types__even_more_statement_arguments___collect_variables = {
  t_func_funky_types__even_more_statement_arguments___collect_variables, NULL, 6, 3,
  {"73_47_result_insert_order_table\000", "74_41_arguments_result_insert_order_table\000", "72_65_self\000"}
};

static TAB_NUM t_func_funky_types__remark_and_multiline_function_call___collect_variables[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 78_70_self
  // funky::arguments_of(self) $result_insert_order_table collect_variables merge_variables empty_insert_order_table
  var_funky__arguments_of, 1, LOCAL(2), 1, LOCAL(1),
  // map_reduce funky::arguments_of(self) $result_insert_order_table collect_variables merge_variables empty_insert_order_table
  var_map_reduce, 4, LOCAL(1), var_collect_variables, var_merge_variables, var_empty_insert_order_table, 1, LOCAL(3),
  // -> result_insert_order_table
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(79, 14),
  POS(79, 3),
  POS(80, 3),
  LOCAL(3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_funky_types__remark_and_multiline_function_call___collect_variables = {
  t_func_funky_types__remark_and_multiline_function_call___collect_variables, NULL, 3, 2,
  {"79_41_result_insert_order_table\000", "78_70_self\000"}
};

static TAB_NUM t_func_funky_types__expression___collect_variables[] = {
  4, // locals
  1, // parameters
  LOCAL(2), // 82_46_self
  // funky::expression_of(self) $result_insert_order_table
  var_funky__expression_of, 1, LOCAL(2), 1, LOCAL(1),
  // collect_variables funky::expression_of(self) $result_insert_order_table
  var_collect_variables, 1, LOCAL(1), 1, LOCAL(3),
  // funky::operator_of(self) $operator_result_insert_order_table
  var_funky__operator_of, 1, LOCAL(2), 1, LOCAL(1),
  // collect_variables funky::operator_of(self) $operator_result_insert_order_table
  var_collect_variables, 1, LOCAL(1), 1, LOCAL(4),
  // merge_variables &result_insert_order_table operator_result_insert_order_table
  var_merge_variables, 2, LOCAL(3), LOCAL(4), 1, LOCAL(3),
  // -> result_insert_order_table
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(83, 21),
  POS(83, 3),
  POS(84, 21),
  POS(84, 3),
  POS(85, 3),
  POS(86, 3),
  LOCAL(3),
  LOCAL(4),
  LOCAL(2)
};

static FUNCTION_INFO i_func_funky_types__expression___collect_variables = {
  t_func_funky_types__expression___collect_variables, NULL, 6, 3,
  {"83_49_result_insert_order_table\000", "84_47_operator_result_insert_order_table\000", "82_46_self\000"}
};

static TAB_NUM t_func_funky_types__parenthesed_expression___collect_variables[] = {
  4, // locals
  1, // parameters
  LOCAL(2), // 88_58_self
  // funky::expression_of(self) $result_insert_order_table
  var_funky__expression_of, 1, LOCAL(2), 1, LOCAL(1),
  // collect_variables funky::expression_of(self) $result_insert_order_table
  var_collect_variables, 1, LOCAL(1), 1, LOCAL(3),
  // funky::calls_of(self) $calls_result_insert_order_table collect_variables merge_variables empty_insert_order_table
  var_funky__calls_of, 1, LOCAL(2), 1, LOCAL(1),
  // map_reduce funky::calls_of(self) $calls_result_insert_order_table collect_variables merge_variables empty_insert_order_table
  var_map_reduce, 4, LOCAL(1), var_collect_variables, var_merge_variables, var_empty_insert_order_table, 1, LOCAL(4),
  // merge_variables &result_insert_order_table calls_result_insert_order_table
  var_merge_variables, 2, LOCAL(3), LOCAL(4), 1, LOCAL(3),
  // -> result_insert_order_table
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(89, 21),
  POS(89, 3),
  POS(90, 14),
  POS(90, 3),
  POS(91, 3),
  POS(92, 3),
  LOCAL(2),
  LOCAL(3),
  LOCAL(4)
};

static FUNCTION_INFO i_func_funky_types__parenthesed_expression___collect_variables = {
  t_func_funky_types__parenthesed_expression___collect_variables, NULL, 6, 3,
  {"88_58_self\000", "89_49_result_insert_order_table\000", "90_37_calls_result_insert_order_table\000"}
};

static TAB_NUM t_func_funky_types__multiline_minus___collect_variables[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 94_51_self
  // funky::arguments_of(self) $result_insert_order_table collect_variables merge_variables empty_insert_order_table
  var_funky__arguments_of, 1, LOCAL(2), 1, LOCAL(1),
  // map_reduce funky::arguments_of(self) $result_insert_order_table collect_variables merge_variables empty_insert_order_table
  var_map_reduce, 4, LOCAL(1), var_collect_variables, var_merge_variables, var_empty_insert_order_table, 1, LOCAL(3),
  // -> result_insert_order_table
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(95, 14),
  POS(95, 3),
  POS(96, 3),
  LOCAL(3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_funky_types__multiline_minus___collect_variables = {
  t_func_funky_types__multiline_minus___collect_variables, NULL, 3, 2,
  {"95_41_result_insert_order_table\000", "94_51_self\000"}
};

static TAB_NUM t_func_funky_types__expression_and_inline_arguments___collect_variables[] = {
  4, // locals
  1, // parameters
  LOCAL(2), // 98_67_self
  // funky::expression_of(self) $result_insert_order_table
  var_funky__expression_of, 1, LOCAL(2), 1, LOCAL(1),
  // collect_variables funky::expression_of(self) $result_insert_order_table
  var_collect_variables, 1, LOCAL(1), 1, LOCAL(3),
  // funky::arguments_of(self) $arguments_result_insert_order_table
  var_funky__arguments_of, 1, LOCAL(2), 1, LOCAL(1),
  // collect_variables funky::arguments_of(self) $arguments_result_insert_order_table
  var_collect_variables, 1, LOCAL(1), 1, LOCAL(4),
  // merge_variables &result_insert_order_table arguments_result_insert_order_table
  var_merge_variables, 2, LOCAL(3), LOCAL(4), 1, LOCAL(3),
  // -> result_insert_order_table
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(99, 21),
  POS(99, 3),
  POS(100, 21),
  POS(100, 3),
  POS(101, 3),
  POS(102, 3),
  LOCAL(2),
  LOCAL(4),
  LOCAL(3)
};

static FUNCTION_INFO i_func_funky_types__expression_and_inline_arguments___collect_variables = {
  t_func_funky_types__expression_and_inline_arguments___collect_variables, NULL, 6, 3,
  {"98_67_self\000", "100_48_arguments_result_insert_order_table\000", "99_49_result_insert_order_table\000"}
};

static TAB_NUM t_func_funky_types__string_literal___collect_variables[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 104_50_self
  // funky::components_of(self) $result_insert_order_table collect_variables merge_variables empty_insert_order_table
  var_funky__components_of, 1, LOCAL(2), 1, LOCAL(1),
  // map_reduce funky::components_of(self) $result_insert_order_table collect_variables merge_variables empty_insert_order_table
  var_map_reduce, 4, LOCAL(1), var_collect_variables, var_merge_variables, var_empty_insert_order_table, 1, LOCAL(3),
  // -> result_insert_order_table
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(105, 14),
  POS(105, 3),
  POS(106, 3),
  LOCAL(2),
  LOCAL(3)
};

static FUNCTION_INFO i_func_funky_types__string_literal___collect_variables = {
  t_func_funky_types__string_literal___collect_variables, NULL, 3, 2,
  {"104_50_self\000", "105_42_result_insert_order_table\000"}
};

static TAB_NUM t_func_funky_types__some_string_components___collect_variables[] = {
  4, // locals
  1, // parameters
  LOCAL(2), // 108_58_self
  // funky::component_of(self) $result_insert_order_table
  var_funky__component_of, 1, LOCAL(2), 1, LOCAL(1),
  // collect_variables funky::component_of(self) $result_insert_order_table
  var_collect_variables, 1, LOCAL(1), 1, LOCAL(3),
  // funky::components_of(self) $components_result_insert_order_table collect_variables merge_variables empty_insert_order_table
  var_funky__components_of, 1, LOCAL(2), 1, LOCAL(1),
  // map_reduce funky::components_of(self) $components_result_insert_order_table collect_variables merge_variables empty_insert_order_table
  var_map_reduce, 4, LOCAL(1), var_collect_variables, var_merge_variables, var_empty_insert_order_table, 1, LOCAL(4),
  // merge_variables &result_insert_order_table components_result_insert_order_table
  var_merge_variables, 2, LOCAL(3), LOCAL(4), 1, LOCAL(3),
  // -> result_insert_order_table
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(109, 21),
  POS(109, 3),
  POS(110, 14),
  POS(110, 3),
  POS(111, 3),
  POS(112, 3),
  LOCAL(2),
  LOCAL(4),
  LOCAL(3)
};

static FUNCTION_INFO i_func_funky_types__some_string_components___collect_variables = {
  t_func_funky_types__some_string_components___collect_variables, NULL, 6, 3,
  {"108_58_self\000", "110_42_components_result_insert_order_table\000", "109_48_result_insert_order_table\000"}
};

static TAB_NUM t_func_funky_types__some_string_line_components___collect_variables[] = {
  4, // locals
  1, // parameters
  LOCAL(2), // 114_63_self
  // funky::component_of(self) $result_insert_order_table
  var_funky__component_of, 1, LOCAL(2), 1, LOCAL(1),
  // collect_variables funky::component_of(self) $result_insert_order_table
  var_collect_variables, 1, LOCAL(1), 1, LOCAL(3),
  // funky::components_of(self) $components_result_insert_order_table collect_variables merge_variables empty_insert_order_table
  var_funky__components_of, 1, LOCAL(2), 1, LOCAL(1),
  // map_reduce funky::components_of(self) $components_result_insert_order_table collect_variables merge_variables empty_insert_order_table
  var_map_reduce, 4, LOCAL(1), var_collect_variables, var_merge_variables, var_empty_insert_order_table, 1, LOCAL(4),
  // merge_variables &result_insert_order_table components_result_insert_order_table
  var_merge_variables, 2, LOCAL(3), LOCAL(4), 1, LOCAL(3),
  // -> result_insert_order_table
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(115, 21),
  POS(115, 3),
  POS(116, 14),
  POS(116, 3),
  POS(117, 3),
  POS(118, 3),
  LOCAL(3),
  LOCAL(4),
  LOCAL(2)
};

static FUNCTION_INFO i_func_funky_types__some_string_line_components___collect_variables = {
  t_func_funky_types__some_string_line_components___collect_variables, NULL, 6, 3,
  {"115_48_result_insert_order_table\000", "116_42_components_result_insert_order_table\000", "114_63_self\000"}
};

static TAB_NUM t_func_funky_types__inline_body___collect_variables[] = {
  4, // locals
  1, // parameters
  LOCAL(2), // 120_47_self
  // funky::parameters_of(self) $result_insert_order_table collect_variables merge_variables empty_insert_order_table
  var_funky__parameters_of, 1, LOCAL(2), 1, LOCAL(1),
  // map_reduce funky::parameters_of(self) $result_insert_order_table collect_variables merge_variables empty_insert_order_table
  var_map_reduce, 4, LOCAL(1), var_collect_variables, var_merge_variables, var_empty_insert_order_table, 1, LOCAL(3),
  // funky::statement_of(self) $statement_result_insert_order_table
  var_funky__statement_of, 1, LOCAL(2), 1, LOCAL(1),
  // collect_variables funky::statement_of(self) $statement_result_insert_order_table
  var_collect_variables, 1, LOCAL(1), 1, LOCAL(4),
  // merge_variables &result_insert_order_table statement_result_insert_order_table
  var_merge_variables, 2, LOCAL(3), LOCAL(4), 1, LOCAL(3),
  // -> result_insert_order_table
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(121, 14),
  POS(121, 3),
  POS(122, 21),
  POS(122, 3),
  POS(123, 3),
  POS(124, 3),
  LOCAL(3),
  LOCAL(4),
  LOCAL(2)
};

static FUNCTION_INFO i_func_funky_types__inline_body___collect_variables = {
  t_func_funky_types__inline_body___collect_variables, NULL, 6, 3,
  {"121_42_result_insert_order_table\000", "122_48_statement_result_insert_order_table\000", "120_47_self\000"}
};

static TAB_NUM t_func_funky_types__statements___collect_variables[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 126_46_self
  // funky::statement_of(self) $result_insert_order_table collect_variables merge_variables empty_insert_order_table
  var_funky__statement_of, 1, LOCAL(2), 1, LOCAL(1),
  // map_reduce funky::statement_of(self) $result_insert_order_table collect_variables merge_variables empty_insert_order_table
  var_map_reduce, 4, LOCAL(1), var_collect_variables, var_merge_variables, var_empty_insert_order_table, 1, LOCAL(3),
  // -> result_insert_order_table
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(127, 14),
  POS(127, 3),
  POS(128, 3),
  LOCAL(2),
  LOCAL(3)
};

static FUNCTION_INFO i_func_funky_types__statements___collect_variables = {
  t_func_funky_types__statements___collect_variables, NULL, 3, 2,
  {"126_46_self\000", "127_41_result_insert_order_table\000"}
};

static TAB_NUM t_func_funky_types__one_or_more_inline_parameters___collect_variables[] = {
  4, // locals
  1, // parameters
  LOCAL(2), // 130_65_self
  // funky::parameter_of(self) $result_insert_order_table
  var_funky__parameter_of, 1, LOCAL(2), 1, LOCAL(1),
  // collect_variables funky::parameter_of(self) $result_insert_order_table
  var_collect_variables, 1, LOCAL(1), 1, LOCAL(3),
  // funky::parameters_of(self) $parameters_result_insert_order_table
  var_funky__parameters_of, 1, LOCAL(2), 1, LOCAL(1),
  // collect_variables funky::parameters_of(self) $parameters_result_insert_order_table
  var_collect_variables, 1, LOCAL(1), 1, LOCAL(4),
  // merge_variables &result_insert_order_table parameters_result_insert_order_table
  var_merge_variables, 2, LOCAL(3), LOCAL(4), 1, LOCAL(3),
  // -> result_insert_order_table
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(131, 21),
  POS(131, 3),
  POS(132, 21),
  POS(132, 3),
  POS(133, 3),
  POS(134, 3),
  LOCAL(4),
  LOCAL(2),
  LOCAL(3)
};

static FUNCTION_INFO i_func_funky_types__one_or_more_inline_parameters___collect_variables = {
  t_func_funky_types__one_or_more_inline_parameters___collect_variables, NULL, 6, 3,
  {"132_49_parameters_result_insert_order_table\000", "130_65_self\000", "131_48_result_insert_order_table\000"}
};

static TAB_NUM t_func_funky_types__open_parameters___collect_variables[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 136_51_self
  // funky::parameter_of(self) $result_insert_order_table collect_variables merge_variables empty_insert_order_table
  var_funky__parameter_of, 1, LOCAL(2), 1, LOCAL(1),
  // map_reduce funky::parameter_of(self) $result_insert_order_table collect_variables merge_variables empty_insert_order_table
  var_map_reduce, 4, LOCAL(1), var_collect_variables, var_merge_variables, var_empty_insert_order_table, 1, LOCAL(3),
  // -> result_insert_order_table
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(137, 14),
  POS(137, 3),
  POS(138, 3),
  LOCAL(3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_funky_types__open_parameters___collect_variables = {
  t_func_funky_types__open_parameters___collect_variables, NULL, 3, 2,
  {"137_41_result_insert_order_table\000", "136_51_self\000"}
};

static TAB_NUM t_func_funky_types__initial_value___collect_variables[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 140_49_self
  // funky::operand_of(self) $result_insert_order_table
  var_funky__operand_of, 1, LOCAL(2), 1, LOCAL(1),
  // collect_variables funky::operand_of(self) $result_insert_order_table
  var_collect_variables, 1, LOCAL(1), 1, LOCAL(3),
  // -> result_insert_order_table
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(141, 21),
  POS(141, 3),
  POS(142, 3),
  LOCAL(3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_funky_types__initial_value___collect_variables = {
  t_func_funky_types__initial_value___collect_variables, NULL, 3, 2,
  {"141_46_result_insert_order_table\000", "140_49_self\000"}
};

static FUNKY_CONSTANT constants_table[] = {
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__undefined___collect_variables}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_funky_types__node___collect_variables}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_funky_types__identifier_and_expression___collect_variables}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_funky_types__simple_expression___collect_variables}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_funky_types__inline_statement___collect_variables}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_funky_types__function_call_extension___collect_variables}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_funky_types__attribute_access_extension___collect_variables}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_funky_types__inline_function_call_extension___collect_variables}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_funky_types__inline_attribute_access_extension___collect_variables}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_funky_types__function_call___collect_variables}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_funky_types__spaced_arguments___collect_variables}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_funky_types__spaced_statement_arguments___collect_variables}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_funky_types__arguments___collect_variables}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_funky_types__even_more_statement_arguments___collect_variables}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_funky_types__remark_and_multiline_function_call___collect_variables}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_funky_types__expression___collect_variables}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_funky_types__parenthesed_expression___collect_variables}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_funky_types__multiline_minus___collect_variables}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_funky_types__expression_and_inline_arguments___collect_variables}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_funky_types__string_literal___collect_variables}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_funky_types__some_string_components___collect_variables}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_funky_types__some_string_line_components___collect_variables}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_funky_types__inline_body___collect_variables}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_funky_types__statements___collect_variables}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_funky_types__one_or_more_inline_parameters___collect_variables}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_funky_types__open_parameters___collect_variables}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_funky_types__initial_value___collect_variables}}
};

static ATTRIBUTE_DEFINITION std_types__undefined__attributes[] = {
  {var_collect_variables, -func_std_types__undefined___collect_variables}
};

static ATTRIBUTE_DEFINITION funky_types__node__attributes[] = {
  {var_collect_variables, -func_funky_types__node___collect_variables}
};

static ATTRIBUTE_DEFINITION funky_types__identifier_and_expression__attributes[] = {
  {var_collect_variables, -func_funky_types__identifier_and_expression___collect_variables}
};

static ATTRIBUTE_DEFINITION funky_types__simple_expression__attributes[] = {
  {var_collect_variables, -func_funky_types__simple_expression___collect_variables}
};

static ATTRIBUTE_DEFINITION funky_types__inline_statement__attributes[] = {
  {var_collect_variables, -func_funky_types__inline_statement___collect_variables}
};

static ATTRIBUTE_DEFINITION funky_types__function_call_extension__attributes[] = {
  {var_collect_variables, -func_funky_types__function_call_extension___collect_variables}
};

static ATTRIBUTE_DEFINITION funky_types__attribute_access_extension__attributes[] = {
  {var_collect_variables, -func_funky_types__attribute_access_extension___collect_variables}
};

static ATTRIBUTE_DEFINITION funky_types__inline_function_call_extension__attributes[] = {
  {var_collect_variables, -func_funky_types__inline_function_call_extension___collect_variables}
};

static ATTRIBUTE_DEFINITION funky_types__inline_attribute_access_extension__attributes[] = {
  {var_collect_variables, -func_funky_types__inline_attribute_access_extension___collect_variables}
};

static ATTRIBUTE_DEFINITION funky_types__function_call__attributes[] = {
  {var_collect_variables, -func_funky_types__function_call___collect_variables}
};

static ATTRIBUTE_DEFINITION funky_types__spaced_arguments__attributes[] = {
  {var_collect_variables, -func_funky_types__spaced_arguments___collect_variables}
};

static ATTRIBUTE_DEFINITION funky_types__spaced_statement_arguments__attributes[] = {
  {var_collect_variables, -func_funky_types__spaced_statement_arguments___collect_variables}
};

static ATTRIBUTE_DEFINITION funky_types__arguments__attributes[] = {
  {var_collect_variables, -func_funky_types__arguments___collect_variables}
};

static ATTRIBUTE_DEFINITION funky_types__even_more_statement_arguments__attributes[] = {
  {var_collect_variables, -func_funky_types__even_more_statement_arguments___collect_variables}
};

static ATTRIBUTE_DEFINITION funky_types__remark_and_multiline_function_call__attributes[] = {
  {var_collect_variables, -func_funky_types__remark_and_multiline_function_call___collect_variables}
};

static ATTRIBUTE_DEFINITION funky_types__expression__attributes[] = {
  {var_collect_variables, -func_funky_types__expression___collect_variables}
};

static ATTRIBUTE_DEFINITION funky_types__parenthesed_expression__attributes[] = {
  {var_collect_variables, -func_funky_types__parenthesed_expression___collect_variables}
};

static ATTRIBUTE_DEFINITION funky_types__multiline_minus__attributes[] = {
  {var_collect_variables, -func_funky_types__multiline_minus___collect_variables}
};

static ATTRIBUTE_DEFINITION funky_types__expression_and_inline_arguments__attributes[] = {
  {var_collect_variables, -func_funky_types__expression_and_inline_arguments___collect_variables}
};

static ATTRIBUTE_DEFINITION funky_types__string_literal__attributes[] = {
  {var_collect_variables, -func_funky_types__string_literal___collect_variables}
};

static ATTRIBUTE_DEFINITION funky_types__some_string_components__attributes[] = {
  {var_collect_variables, -func_funky_types__some_string_components___collect_variables}
};

static ATTRIBUTE_DEFINITION funky_types__some_string_line_components__attributes[] = {
  {var_collect_variables, -func_funky_types__some_string_line_components___collect_variables}
};

static ATTRIBUTE_DEFINITION funky_types__inline_body__attributes[] = {
  {var_collect_variables, -func_funky_types__inline_body___collect_variables}
};

static ATTRIBUTE_DEFINITION funky_types__statements__attributes[] = {
  {var_collect_variables, -func_funky_types__statements___collect_variables}
};

static ATTRIBUTE_DEFINITION funky_types__one_or_more_inline_parameters__attributes[] = {
  {var_collect_variables, -func_funky_types__one_or_more_inline_parameters___collect_variables}
};

static ATTRIBUTE_DEFINITION funky_types__open_parameters__attributes[] = {
  {var_collect_variables, -func_funky_types__open_parameters___collect_variables}
};

static ATTRIBUTE_DEFINITION funky_types__initial_value__attributes[] = {
  {var_collect_variables, -func_funky_types__initial_value___collect_variables}
};

static FUNKY_VARIABLE variables_table[] = {
  {
    FOT_UNKNOWN, 0, 1,
    "undefined\000std_types", std_types__undefined__attributes,
    {.position = POS(10, 1)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "collect_variables\000", NULL,
    {.position = POS(10, 23)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_insert_order_table\000", NULL,
    {.position = POS(11, 6)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "assign\000std", NULL,
    {.position = POS(11, 5)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "node\000funky_types", funky_types__node__attributes,
    {.position = POS(13, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "identifier_and_expression\000funky_types", funky_types__identifier_and_expression__attributes,
    {.position = POS(16, 1)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "expression_of\000funky", NULL,
    {.position = POS(17, 21)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "simple_expression\000funky_types", funky_types__simple_expression__attributes,
    {.position = POS(20, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "inline_statement\000funky_types", funky_types__inline_statement__attributes,
    {.position = POS(24, 1)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "head_of\000funky", NULL,
    {.position = POS(25, 21)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "arguments_of\000funky", NULL,
    {.position = POS(26, 21)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "merge_variables\000", NULL,
    {.position = POS(27, 3)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "function_call_extension\000funky_types", funky_types__function_call_extension__attributes,
    {.position = POS(30, 1)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "call_of\000funky", NULL,
    {.position = POS(31, 21)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "extensions_of\000funky", NULL,
    {.position = POS(32, 14)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "map_reduce\000", NULL,
    {.position = POS(32, 3)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "attribute_access_extension\000funky_types", funky_types__attribute_access_extension__attributes,
    {.position = POS(36, 1)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "access_of\000funky", NULL,
    {.position = POS(37, 21)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "inline_function_call_extension\000funky_types", funky_types__inline_function_call_extension__attributes,
    {.position = POS(42, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "inline_attribute_access_extension\000funky_types", funky_types__inline_attribute_access_extension__attributes,
    {.position = POS(48, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "function_call\000funky_types", funky_types__function_call__attributes,
    {.position = POS(54, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "spaced_arguments\000funky_types", funky_types__spaced_arguments__attributes,
    {.position = POS(58, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "spaced_statement_arguments\000funky_types", funky_types__spaced_statement_arguments__attributes,
    {.position = POS(62, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "arguments\000funky_types", funky_types__arguments__attributes,
    {.position = POS(66, 1)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "argument_of\000funky", NULL,
    {.position = POS(67, 21)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "even_more_statement_arguments\000funky_types", funky_types__even_more_statement_arguments__attributes,
    {.position = POS(72, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "remark_and_multiline_function_call\000funky_types", funky_types__remark_and_multiline_function_call__attributes,
    {.position = POS(78, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "expression\000funky_types", funky_types__expression__attributes,
    {.position = POS(82, 1)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "operator_of\000funky", NULL,
    {.position = POS(84, 21)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "parenthesed_expression\000funky_types", funky_types__parenthesed_expression__attributes,
    {.position = POS(88, 1)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "calls_of\000funky", NULL,
    {.position = POS(90, 14)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "multiline_minus\000funky_types", funky_types__multiline_minus__attributes,
    {.position = POS(94, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "expression_and_inline_arguments\000funky_types", funky_types__expression_and_inline_arguments__attributes,
    {.position = POS(98, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "string_literal\000funky_types", funky_types__string_literal__attributes,
    {.position = POS(104, 1)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "components_of\000funky", NULL,
    {.position = POS(105, 14)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "some_string_components\000funky_types", funky_types__some_string_components__attributes,
    {.position = POS(108, 1)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "component_of\000funky", NULL,
    {.position = POS(109, 21)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "some_string_line_components\000funky_types", funky_types__some_string_line_components__attributes,
    {.position = POS(114, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "inline_body\000funky_types", funky_types__inline_body__attributes,
    {.position = POS(120, 1)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "parameters_of\000funky", NULL,
    {.position = POS(121, 14)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "statement_of\000funky", NULL,
    {.position = POS(122, 21)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "statements\000funky_types", funky_types__statements__attributes,
    {.position = POS(126, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "one_or_more_inline_parameters\000funky_types", funky_types__one_or_more_inline_parameters__attributes,
    {.position = POS(130, 1)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "parameter_of\000funky", NULL,
    {.position = POS(131, 21)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "open_parameters\000funky_types", funky_types__open_parameters__attributes,
    {.position = POS(136, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "initial_value\000funky_types", funky_types__initial_value__attributes,
    {.position = POS(140, 1)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "operand_of\000funky", NULL,
    {.position = POS(141, 21)}
  }
};

static FUNKY_NAMESPACE used_namespaces[] = {
  {"std", 1, 0},
  {"funky", 1, 0}
};

FUNKY_MODULE module__collect_variables_autogen = {
  "_collect_variables_autogen", // module name
  "collect_variables_autogen.fky", // module filename
  .major_version = 0,
  .minor_version = 0,
  .feature_flags = FEAT_POSITIONS|FEAT_FUNCTION_INFO,
  .marker = 0,
  0, // number of required modules
  0, // number of defined namespaces
  2, // number of used namespaces
  27, // number of constants
  47, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  constants_table,
  variables_table,
};
