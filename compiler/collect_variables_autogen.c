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
  LOCAL(1), // 10_42_self
  // -> empty_insert_order_table
  LET, 1, var_empty_insert_order_table, TAIL_CALL,
  POS(11, 3)
};

static TAB_NUM t_func_funky_types__node___collect_variables[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 13_39_self
  // -> empty_insert_order_table
  LET, 1, var_empty_insert_order_table, TAIL_CALL,
  POS(14, 3)
};

static TAB_NUM t_func_funky_types__identifier_and_expression___collect_variables[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 16_60_self
  // funky::expression_of(self) $result_insert_order_table
  var_funky__expression_of, 1, LOCAL(2), 1, LOCAL(1),
  // collect_variables funky::expression_of(self) $result_insert_order_table
  var_collect_variables, 1, LOCAL(1), 1, LOCAL(3),
  // -> result_insert_order_table
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(17, 21),
  POS(17, 3),
  POS(18, 3)
};

static TAB_NUM t_func_funky_types__simple_expression___collect_variables[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 20_52_self
  // funky::expression_of(self) $result_insert_order_table
  var_funky__expression_of, 1, LOCAL(2), 1, LOCAL(1),
  // collect_variables funky::expression_of(self) $result_insert_order_table
  var_collect_variables, 1, LOCAL(1), 1, LOCAL(3),
  // -> result_insert_order_table
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(21, 21),
  POS(21, 3),
  POS(22, 3)
};

static TAB_NUM t_func_funky_types__inline_statement___collect_variables[] = {
  4, // locals
  1, // parameters
  LOCAL(2), // 24_51_self
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
  POS(28, 3)
};

static TAB_NUM t_func_funky_types__function_call_extension___collect_variables[] = {
  4, // locals
  1, // parameters
  LOCAL(2), // 30_58_self
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
  POS(34, 3)
};

static TAB_NUM t_func_funky_types__attribute_access_extension___collect_variables[] = {
  4, // locals
  1, // parameters
  LOCAL(2), // 36_61_self
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
  POS(40, 3)
};

static TAB_NUM t_func_funky_types__inline_function_call_extension___collect_variables[] = {
  4, // locals
  1, // parameters
  LOCAL(2), // 42_65_self
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
  POS(46, 3)
};

static TAB_NUM t_func_funky_types__inline_attribute_access_extension___collect_variables[] = {
  4, // locals
  1, // parameters
  LOCAL(2), // 48_68_self
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
  POS(52, 3)
};

static TAB_NUM t_func_funky_types__function_call___collect_variables[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 54_48_self
  // funky::arguments_of(self) $result_insert_order_table collect_variables merge_variables empty_insert_order_table
  var_funky__arguments_of, 1, LOCAL(2), 1, LOCAL(1),
  // map_reduce funky::arguments_of(self) $result_insert_order_table collect_variables merge_variables empty_insert_order_table
  var_map_reduce, 4, LOCAL(1), var_collect_variables, var_merge_variables, var_empty_insert_order_table, 1, LOCAL(3),
  // -> result_insert_order_table
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(55, 14),
  POS(55, 3),
  POS(56, 3)
};

static TAB_NUM t_func_funky_types__spaced_arguments___collect_variables[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 58_51_self
  // funky::arguments_of(self) $result_insert_order_table
  var_funky__arguments_of, 1, LOCAL(2), 1, LOCAL(1),
  // collect_variables funky::arguments_of(self) $result_insert_order_table
  var_collect_variables, 1, LOCAL(1), 1, LOCAL(3),
  // -> result_insert_order_table
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(59, 21),
  POS(59, 3),
  POS(60, 3)
};

static TAB_NUM t_func_funky_types__spaced_statement_arguments___collect_variables[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 62_61_self
  // funky::arguments_of(self) $result_insert_order_table
  var_funky__arguments_of, 1, LOCAL(2), 1, LOCAL(1),
  // collect_variables funky::arguments_of(self) $result_insert_order_table
  var_collect_variables, 1, LOCAL(1), 1, LOCAL(3),
  // -> result_insert_order_table
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(63, 21),
  POS(63, 3),
  POS(64, 3)
};

static TAB_NUM t_func_funky_types__arguments___collect_variables[] = {
  4, // locals
  1, // parameters
  LOCAL(2), // 66_44_self
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
  POS(70, 3)
};

static TAB_NUM t_func_funky_types__even_more_statement_arguments___collect_variables[] = {
  4, // locals
  1, // parameters
  LOCAL(2), // 72_64_self
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
  POS(76, 3)
};

static TAB_NUM t_func_funky_types__remark_and_multiline_function_call___collect_variables[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 78_69_self
  // funky::arguments_of(self) $result_insert_order_table collect_variables merge_variables empty_insert_order_table
  var_funky__arguments_of, 1, LOCAL(2), 1, LOCAL(1),
  // map_reduce funky::arguments_of(self) $result_insert_order_table collect_variables merge_variables empty_insert_order_table
  var_map_reduce, 4, LOCAL(1), var_collect_variables, var_merge_variables, var_empty_insert_order_table, 1, LOCAL(3),
  // -> result_insert_order_table
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(79, 14),
  POS(79, 3),
  POS(80, 3)
};

static TAB_NUM t_func_funky_types__expression___collect_variables[] = {
  4, // locals
  1, // parameters
  LOCAL(2), // 82_45_self
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
  POS(86, 3)
};

static TAB_NUM t_func_funky_types__parenthesed_expression___collect_variables[] = {
  4, // locals
  1, // parameters
  LOCAL(2), // 88_57_self
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
  POS(92, 3)
};

static TAB_NUM t_func_funky_types__multiline_minus___collect_variables[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 94_50_self
  // funky::arguments_of(self) $result_insert_order_table collect_variables merge_variables empty_insert_order_table
  var_funky__arguments_of, 1, LOCAL(2), 1, LOCAL(1),
  // map_reduce funky::arguments_of(self) $result_insert_order_table collect_variables merge_variables empty_insert_order_table
  var_map_reduce, 4, LOCAL(1), var_collect_variables, var_merge_variables, var_empty_insert_order_table, 1, LOCAL(3),
  // -> result_insert_order_table
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(95, 14),
  POS(95, 3),
  POS(96, 3)
};

static TAB_NUM t_func_funky_types__expression_and_inline_arguments___collect_variables[] = {
  4, // locals
  1, // parameters
  LOCAL(2), // 98_66_self
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
  POS(102, 3)
};

static TAB_NUM t_func_funky_types__string_literal___collect_variables[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 104_49_self
  // funky::components_of(self) $result_insert_order_table collect_variables merge_variables empty_insert_order_table
  var_funky__components_of, 1, LOCAL(2), 1, LOCAL(1),
  // map_reduce funky::components_of(self) $result_insert_order_table collect_variables merge_variables empty_insert_order_table
  var_map_reduce, 4, LOCAL(1), var_collect_variables, var_merge_variables, var_empty_insert_order_table, 1, LOCAL(3),
  // -> result_insert_order_table
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(105, 14),
  POS(105, 3),
  POS(106, 3)
};

static TAB_NUM t_func_funky_types__some_string_components___collect_variables[] = {
  4, // locals
  1, // parameters
  LOCAL(2), // 108_57_self
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
  POS(112, 3)
};

static TAB_NUM t_func_funky_types__some_string_line_components___collect_variables[] = {
  4, // locals
  1, // parameters
  LOCAL(2), // 114_62_self
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
  POS(118, 3)
};

static TAB_NUM t_func_funky_types__inline_body___collect_variables[] = {
  4, // locals
  1, // parameters
  LOCAL(2), // 120_46_self
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
  POS(124, 3)
};

static TAB_NUM t_func_funky_types__statements___collect_variables[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 126_45_self
  // funky::statement_of(self) $result_insert_order_table collect_variables merge_variables empty_insert_order_table
  var_funky__statement_of, 1, LOCAL(2), 1, LOCAL(1),
  // map_reduce funky::statement_of(self) $result_insert_order_table collect_variables merge_variables empty_insert_order_table
  var_map_reduce, 4, LOCAL(1), var_collect_variables, var_merge_variables, var_empty_insert_order_table, 1, LOCAL(3),
  // -> result_insert_order_table
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(127, 14),
  POS(127, 3),
  POS(128, 3)
};

static TAB_NUM t_func_funky_types__one_or_more_inline_parameters___collect_variables[] = {
  4, // locals
  1, // parameters
  LOCAL(2), // 130_64_self
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
  POS(134, 3)
};

static TAB_NUM t_func_funky_types__open_parameters___collect_variables[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 136_50_self
  // funky::parameter_of(self) $result_insert_order_table collect_variables merge_variables empty_insert_order_table
  var_funky__parameter_of, 1, LOCAL(2), 1, LOCAL(1),
  // map_reduce funky::parameter_of(self) $result_insert_order_table collect_variables merge_variables empty_insert_order_table
  var_map_reduce, 4, LOCAL(1), var_collect_variables, var_merge_variables, var_empty_insert_order_table, 1, LOCAL(3),
  // -> result_insert_order_table
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(137, 14),
  POS(137, 3),
  POS(138, 3)
};

static TAB_NUM t_func_funky_types__initial_value___collect_variables[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 140_48_self
  // funky::operand_of(self) $result_insert_order_table
  var_funky__operand_of, 1, LOCAL(2), 1, LOCAL(1),
  // collect_variables funky::operand_of(self) $result_insert_order_table
  var_collect_variables, 1, LOCAL(1), 1, LOCAL(3),
  // -> result_insert_order_table
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(141, 21),
  POS(141, 3),
  POS(142, 3)
};

static FUNKY_CONSTANT constants_table[] = {
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__undefined___collect_variables}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__node___collect_variables}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__identifier_and_expression___collect_variables}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__simple_expression___collect_variables}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__inline_statement___collect_variables}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__function_call_extension___collect_variables}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__attribute_access_extension___collect_variables}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__inline_function_call_extension___collect_variables}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__inline_attribute_access_extension___collect_variables}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__function_call___collect_variables}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__spaced_arguments___collect_variables}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__spaced_statement_arguments___collect_variables}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__arguments___collect_variables}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__even_more_statement_arguments___collect_variables}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__remark_and_multiline_function_call___collect_variables}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__expression___collect_variables}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__parenthesed_expression___collect_variables}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__multiline_minus___collect_variables}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__expression_and_inline_arguments___collect_variables}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__string_literal___collect_variables}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__some_string_components___collect_variables}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__some_string_line_components___collect_variables}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__inline_body___collect_variables}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__statements___collect_variables}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__one_or_more_inline_parameters___collect_variables}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__open_parameters___collect_variables}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__initial_value___collect_variables}}
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
    "undefined\000std_types", std_types__undefined__attributes
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "collect_variables\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_insert_order_table\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "assign\000std", NULL
  },
  {
    FOT_UNKNOWN, 0, 1,
    "node\000funky_types", funky_types__node__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "identifier_and_expression\000funky_types", funky_types__identifier_and_expression__attributes
  },
  {
    FOT_UNKNOWN, 0, 0,
    "expression_of\000funky", NULL
  },
  {
    FOT_UNKNOWN, 0, 1,
    "simple_expression\000funky_types", funky_types__simple_expression__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "inline_statement\000funky_types", funky_types__inline_statement__attributes
  },
  {
    FOT_UNKNOWN, 0, 0,
    "head_of\000funky", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "arguments_of\000funky", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "merge_variables\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 1,
    "function_call_extension\000funky_types", funky_types__function_call_extension__attributes
  },
  {
    FOT_UNKNOWN, 0, 0,
    "call_of\000funky", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "extensions_of\000funky", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "map_reduce\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 1,
    "attribute_access_extension\000funky_types", funky_types__attribute_access_extension__attributes
  },
  {
    FOT_UNKNOWN, 0, 0,
    "access_of\000funky", NULL
  },
  {
    FOT_UNKNOWN, 0, 1,
    "inline_function_call_extension\000funky_types", funky_types__inline_function_call_extension__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "inline_attribute_access_extension\000funky_types", funky_types__inline_attribute_access_extension__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "function_call\000funky_types", funky_types__function_call__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "spaced_arguments\000funky_types", funky_types__spaced_arguments__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "spaced_statement_arguments\000funky_types", funky_types__spaced_statement_arguments__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "arguments\000funky_types", funky_types__arguments__attributes
  },
  {
    FOT_UNKNOWN, 0, 0,
    "argument_of\000funky", NULL
  },
  {
    FOT_UNKNOWN, 0, 1,
    "even_more_statement_arguments\000funky_types", funky_types__even_more_statement_arguments__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "remark_and_multiline_function_call\000funky_types", funky_types__remark_and_multiline_function_call__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "expression\000funky_types", funky_types__expression__attributes
  },
  {
    FOT_UNKNOWN, 0, 0,
    "operator_of\000funky", NULL
  },
  {
    FOT_UNKNOWN, 0, 1,
    "parenthesed_expression\000funky_types", funky_types__parenthesed_expression__attributes
  },
  {
    FOT_UNKNOWN, 0, 0,
    "calls_of\000funky", NULL
  },
  {
    FOT_UNKNOWN, 0, 1,
    "multiline_minus\000funky_types", funky_types__multiline_minus__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "expression_and_inline_arguments\000funky_types", funky_types__expression_and_inline_arguments__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "string_literal\000funky_types", funky_types__string_literal__attributes
  },
  {
    FOT_UNKNOWN, 0, 0,
    "components_of\000funky", NULL
  },
  {
    FOT_UNKNOWN, 0, 1,
    "some_string_components\000funky_types", funky_types__some_string_components__attributes
  },
  {
    FOT_UNKNOWN, 0, 0,
    "component_of\000funky", NULL
  },
  {
    FOT_UNKNOWN, 0, 1,
    "some_string_line_components\000funky_types", funky_types__some_string_line_components__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "inline_body\000funky_types", funky_types__inline_body__attributes
  },
  {
    FOT_UNKNOWN, 0, 0,
    "parameters_of\000funky", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "statement_of\000funky", NULL
  },
  {
    FOT_UNKNOWN, 0, 1,
    "statements\000funky_types", funky_types__statements__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "one_or_more_inline_parameters\000funky_types", funky_types__one_or_more_inline_parameters__attributes
  },
  {
    FOT_UNKNOWN, 0, 0,
    "parameter_of\000funky", NULL
  },
  {
    FOT_UNKNOWN, 0, 1,
    "open_parameters\000funky_types", funky_types__open_parameters__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "initial_value\000funky_types", funky_types__initial_value__attributes
  },
  {
    FOT_UNKNOWN, 0, 0,
    "operand_of\000funky", NULL
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
  .feature_flags = FEAT_POSITIONS,
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
