#include <stddef.h>
#include <stdint.h>

#include "runtime/common.h"
#include "runtime/builtins.h"
#include "runtime/fko.h"
#include "runtime/memory.h"

enum {
  func_std_types__undefined___collect_literals = -1,
  func_funky_types__node___collect_literals = -2,
  func_funky_types__identifier_and_expression___collect_literals = -3,
  func_funky_types__simple_expression___collect_literals = -4,
  func_funky_types__statement___collect_literals = -5,
  func_funky_types__inline_statement___collect_literals = -6,
  func_funky_types__pair___collect_literals = -7,
  func_funky_types__functor___collect_literals = -8,
  func_funky_types__function_call_extension___collect_literals = -9,
  func_funky_types__attribute_access_extension___collect_literals = -10,
  func_funky_types__inline_function_call_extension___collect_literals = -11,
  func_funky_types__inline_attribute_access_extension___collect_literals = -12,
  func_funky_types__function_call___collect_literals = -13,
  func_funky_types__spaced_arguments___collect_literals = -14,
  func_funky_types__spaced_statement_arguments___collect_literals = -15,
  func_funky_types__arguments___collect_literals = -16,
  func_funky_types__even_more_statement_arguments___collect_literals = -17,
  func_funky_types__remark_and_multiline_function_call___collect_literals = -18,
  func_funky_types__expression___collect_literals = -19,
  func_funky_types__parenthesed_expression___collect_literals = -20,
  func_funky_types__multiline_minus___collect_literals = -21,
  func_funky_types__expression_and_inline_arguments___collect_literals = -22,
  func_funky_types__string_literal___collect_literals = -23,
  func_funky_types__some_string_components___collect_literals = -24,
  func_funky_types__some_string_line_components___collect_literals = -25,
  func_funky_types__inline_body___collect_literals = -26,
  func_funky_types__statements___collect_literals = -27,
  func_funky_types__one_or_more_inline_parameters___collect_literals = -28,
  func_funky_types__open_parameters___collect_literals = -29,
  func_funky_types__inline_parameter___collect_literals = -30,
  func_funky_types__parameter___collect_literals = -31,
  func_funky_types__initial_value___collect_literals = -32
};

enum {
  var__START = FIRST_VAR-1,
  var_std_types__undefined, // extern
  var_collect_literals, // extern polymorphic
  var_empty_insert_order_set, // extern
  var_std__assign, // extern
  var_funky_types__node, // extern
  var_funky_types__identifier_and_expression, // extern
  var_funky__expression_of, // extern
  var_funky_types__simple_expression, // extern
  var_funky_types__statement, // extern
  var_funky__head_of, // extern
  var_funky__arguments_of, // extern
  var_merge, // extern
  var_map_reduce, // extern
  var_funky_types__inline_statement, // extern
  var_funky_types__pair, // extern
  var_funky__argument_of, // extern
  var_funky_types__functor, // extern
  var_funky__extensions_of, // extern
  var_funky_types__function_call_extension, // extern
  var_funky__call_of, // extern
  var_funky_types__attribute_access_extension, // extern
  var_funky__access_of, // extern
  var_funky_types__inline_function_call_extension, // extern
  var_funky_types__inline_attribute_access_extension, // extern
  var_funky_types__function_call, // extern
  var_funky_types__spaced_arguments, // extern
  var_funky_types__spaced_statement_arguments, // extern
  var_funky_types__arguments, // extern
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
  var_funky_types__inline_parameter, // extern
  var_funky__option_of, // extern
  var_funky_types__parameter, // extern
  var_funky_types__initial_value, // extern
  var_funky__operand_of, // extern
  var__END
};


static TAB_NUM t_func_std_types__undefined___collect_literals[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 10_41_self
  // -> empty_insert_order_set
  LET, 1, var_empty_insert_order_set, TAIL_CALL,
  POS(11, 3)
};

static TAB_NUM t_func_funky_types__node___collect_literals[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 13_38_self
  // -> empty_insert_order_set
  LET, 1, var_empty_insert_order_set, TAIL_CALL,
  POS(14, 3)
};

static TAB_NUM t_func_funky_types__identifier_and_expression___collect_literals[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 16_59_self
  // funky::expression_of(self) $result_insert_order_set
  var_funky__expression_of, 1, LOCAL(2), 1, LOCAL(1),
  // collect_literals funky::expression_of(self) $result_insert_order_set
  var_collect_literals, 1, LOCAL(1), 1, LOCAL(3),
  // -> result_insert_order_set
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(17, 20),
  POS(17, 3),
  POS(18, 3)
};

static TAB_NUM t_func_funky_types__simple_expression___collect_literals[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 20_51_self
  // funky::expression_of(self) $result_insert_order_set
  var_funky__expression_of, 1, LOCAL(2), 1, LOCAL(1),
  // collect_literals funky::expression_of(self) $result_insert_order_set
  var_collect_literals, 1, LOCAL(1), 1, LOCAL(3),
  // -> result_insert_order_set
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(21, 20),
  POS(21, 3),
  POS(22, 3)
};

static TAB_NUM t_func_funky_types__statement___collect_literals[] = {
  4, // locals
  1, // parameters
  LOCAL(2), // 24_43_self
  // funky::head_of(self) $result_insert_order_set
  var_funky__head_of, 1, LOCAL(2), 1, LOCAL(1),
  // collect_literals funky::head_of(self) $result_insert_order_set
  var_collect_literals, 1, LOCAL(1), 1, LOCAL(3),
  // funky::arguments_of(self) $arguments_result_insert_order_set collect_literals merge empty_insert_order_set
  var_funky__arguments_of, 1, LOCAL(2), 1, LOCAL(1),
  // map_reduce funky::arguments_of(self) $arguments_result_insert_order_set collect_literals merge empty_insert_order_set
  var_map_reduce, 4, LOCAL(1), var_collect_literals, var_merge, var_empty_insert_order_set, 1, LOCAL(4),
  // merge &result_insert_order_set arguments_result_insert_order_set
  var_merge, 2, LOCAL(3), LOCAL(4), 1, LOCAL(3),
  // -> result_insert_order_set
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(25, 20),
  POS(25, 3),
  POS(26, 14),
  POS(26, 3),
  POS(27, 3),
  POS(28, 3)
};

static TAB_NUM t_func_funky_types__inline_statement___collect_literals[] = {
  4, // locals
  1, // parameters
  LOCAL(2), // 30_50_self
  // funky::head_of(self) $result_insert_order_set
  var_funky__head_of, 1, LOCAL(2), 1, LOCAL(1),
  // collect_literals funky::head_of(self) $result_insert_order_set
  var_collect_literals, 1, LOCAL(1), 1, LOCAL(3),
  // funky::arguments_of(self) $arguments_result_insert_order_set
  var_funky__arguments_of, 1, LOCAL(2), 1, LOCAL(1),
  // collect_literals funky::arguments_of(self) $arguments_result_insert_order_set
  var_collect_literals, 1, LOCAL(1), 1, LOCAL(4),
  // merge &result_insert_order_set arguments_result_insert_order_set
  var_merge, 2, LOCAL(3), LOCAL(4), 1, LOCAL(3),
  // -> result_insert_order_set
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(31, 20),
  POS(31, 3),
  POS(32, 20),
  POS(32, 3),
  POS(33, 3),
  POS(34, 3)
};

static TAB_NUM t_func_funky_types__pair___collect_literals[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 36_38_self
  // funky::argument_of(self) $result_insert_order_set
  var_funky__argument_of, 1, LOCAL(2), 1, LOCAL(1),
  // collect_literals funky::argument_of(self) $result_insert_order_set
  var_collect_literals, 1, LOCAL(1), 1, LOCAL(3),
  // -> result_insert_order_set
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(37, 20),
  POS(37, 3),
  POS(38, 3)
};

static TAB_NUM t_func_funky_types__functor___collect_literals[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 40_41_self
  // funky::extensions_of(self) $result_insert_order_set collect_literals merge empty_insert_order_set
  var_funky__extensions_of, 1, LOCAL(2), 1, LOCAL(1),
  // map_reduce funky::extensions_of(self) $result_insert_order_set collect_literals merge empty_insert_order_set
  var_map_reduce, 4, LOCAL(1), var_collect_literals, var_merge, var_empty_insert_order_set, 1, LOCAL(3),
  // -> result_insert_order_set
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(41, 14),
  POS(41, 3),
  POS(42, 3)
};

static TAB_NUM t_func_funky_types__function_call_extension___collect_literals[] = {
  4, // locals
  1, // parameters
  LOCAL(2), // 44_57_self
  // funky::call_of(self) $result_insert_order_set
  var_funky__call_of, 1, LOCAL(2), 1, LOCAL(1),
  // collect_literals funky::call_of(self) $result_insert_order_set
  var_collect_literals, 1, LOCAL(1), 1, LOCAL(3),
  // funky::extensions_of(self) $extensions_result_insert_order_set collect_literals merge empty_insert_order_set
  var_funky__extensions_of, 1, LOCAL(2), 1, LOCAL(1),
  // map_reduce funky::extensions_of(self) $extensions_result_insert_order_set collect_literals merge empty_insert_order_set
  var_map_reduce, 4, LOCAL(1), var_collect_literals, var_merge, var_empty_insert_order_set, 1, LOCAL(4),
  // merge &result_insert_order_set extensions_result_insert_order_set
  var_merge, 2, LOCAL(3), LOCAL(4), 1, LOCAL(3),
  // -> result_insert_order_set
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(45, 20),
  POS(45, 3),
  POS(46, 14),
  POS(46, 3),
  POS(47, 3),
  POS(48, 3)
};

static TAB_NUM t_func_funky_types__attribute_access_extension___collect_literals[] = {
  4, // locals
  1, // parameters
  LOCAL(2), // 50_60_self
  // funky::access_of(self) $result_insert_order_set
  var_funky__access_of, 1, LOCAL(2), 1, LOCAL(1),
  // collect_literals funky::access_of(self) $result_insert_order_set
  var_collect_literals, 1, LOCAL(1), 1, LOCAL(3),
  // funky::extensions_of(self) $extensions_result_insert_order_set collect_literals merge empty_insert_order_set
  var_funky__extensions_of, 1, LOCAL(2), 1, LOCAL(1),
  // map_reduce funky::extensions_of(self) $extensions_result_insert_order_set collect_literals merge empty_insert_order_set
  var_map_reduce, 4, LOCAL(1), var_collect_literals, var_merge, var_empty_insert_order_set, 1, LOCAL(4),
  // merge &result_insert_order_set extensions_result_insert_order_set
  var_merge, 2, LOCAL(3), LOCAL(4), 1, LOCAL(3),
  // -> result_insert_order_set
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(51, 20),
  POS(51, 3),
  POS(52, 14),
  POS(52, 3),
  POS(53, 3),
  POS(54, 3)
};

static TAB_NUM t_func_funky_types__inline_function_call_extension___collect_literals[] = {
  4, // locals
  1, // parameters
  LOCAL(2), // 56_64_self
  // funky::call_of(self) $result_insert_order_set
  var_funky__call_of, 1, LOCAL(2), 1, LOCAL(1),
  // collect_literals funky::call_of(self) $result_insert_order_set
  var_collect_literals, 1, LOCAL(1), 1, LOCAL(3),
  // funky::extensions_of(self) $extensions_result_insert_order_set collect_literals merge empty_insert_order_set
  var_funky__extensions_of, 1, LOCAL(2), 1, LOCAL(1),
  // map_reduce funky::extensions_of(self) $extensions_result_insert_order_set collect_literals merge empty_insert_order_set
  var_map_reduce, 4, LOCAL(1), var_collect_literals, var_merge, var_empty_insert_order_set, 1, LOCAL(4),
  // merge &result_insert_order_set extensions_result_insert_order_set
  var_merge, 2, LOCAL(3), LOCAL(4), 1, LOCAL(3),
  // -> result_insert_order_set
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(57, 20),
  POS(57, 3),
  POS(58, 14),
  POS(58, 3),
  POS(59, 3),
  POS(60, 3)
};

static TAB_NUM t_func_funky_types__inline_attribute_access_extension___collect_literals[] = {
  4, // locals
  1, // parameters
  LOCAL(2), // 62_67_self
  // funky::access_of(self) $result_insert_order_set
  var_funky__access_of, 1, LOCAL(2), 1, LOCAL(1),
  // collect_literals funky::access_of(self) $result_insert_order_set
  var_collect_literals, 1, LOCAL(1), 1, LOCAL(3),
  // funky::extensions_of(self) $extensions_result_insert_order_set collect_literals merge empty_insert_order_set
  var_funky__extensions_of, 1, LOCAL(2), 1, LOCAL(1),
  // map_reduce funky::extensions_of(self) $extensions_result_insert_order_set collect_literals merge empty_insert_order_set
  var_map_reduce, 4, LOCAL(1), var_collect_literals, var_merge, var_empty_insert_order_set, 1, LOCAL(4),
  // merge &result_insert_order_set extensions_result_insert_order_set
  var_merge, 2, LOCAL(3), LOCAL(4), 1, LOCAL(3),
  // -> result_insert_order_set
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(63, 20),
  POS(63, 3),
  POS(64, 14),
  POS(64, 3),
  POS(65, 3),
  POS(66, 3)
};

static TAB_NUM t_func_funky_types__function_call___collect_literals[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 68_47_self
  // funky::arguments_of(self) $result_insert_order_set collect_literals merge empty_insert_order_set
  var_funky__arguments_of, 1, LOCAL(2), 1, LOCAL(1),
  // map_reduce funky::arguments_of(self) $result_insert_order_set collect_literals merge empty_insert_order_set
  var_map_reduce, 4, LOCAL(1), var_collect_literals, var_merge, var_empty_insert_order_set, 1, LOCAL(3),
  // -> result_insert_order_set
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(69, 14),
  POS(69, 3),
  POS(70, 3)
};

static TAB_NUM t_func_funky_types__spaced_arguments___collect_literals[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 72_50_self
  // funky::arguments_of(self) $result_insert_order_set
  var_funky__arguments_of, 1, LOCAL(2), 1, LOCAL(1),
  // collect_literals funky::arguments_of(self) $result_insert_order_set
  var_collect_literals, 1, LOCAL(1), 1, LOCAL(3),
  // -> result_insert_order_set
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(73, 20),
  POS(73, 3),
  POS(74, 3)
};

static TAB_NUM t_func_funky_types__spaced_statement_arguments___collect_literals[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 76_60_self
  // funky::arguments_of(self) $result_insert_order_set
  var_funky__arguments_of, 1, LOCAL(2), 1, LOCAL(1),
  // collect_literals funky::arguments_of(self) $result_insert_order_set
  var_collect_literals, 1, LOCAL(1), 1, LOCAL(3),
  // -> result_insert_order_set
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(77, 20),
  POS(77, 3),
  POS(78, 3)
};

static TAB_NUM t_func_funky_types__arguments___collect_literals[] = {
  4, // locals
  1, // parameters
  LOCAL(2), // 80_43_self
  // funky::argument_of(self) $result_insert_order_set
  var_funky__argument_of, 1, LOCAL(2), 1, LOCAL(1),
  // collect_literals funky::argument_of(self) $result_insert_order_set
  var_collect_literals, 1, LOCAL(1), 1, LOCAL(3),
  // funky::arguments_of(self) $arguments_result_insert_order_set collect_literals merge empty_insert_order_set
  var_funky__arguments_of, 1, LOCAL(2), 1, LOCAL(1),
  // map_reduce funky::arguments_of(self) $arguments_result_insert_order_set collect_literals merge empty_insert_order_set
  var_map_reduce, 4, LOCAL(1), var_collect_literals, var_merge, var_empty_insert_order_set, 1, LOCAL(4),
  // merge &result_insert_order_set arguments_result_insert_order_set
  var_merge, 2, LOCAL(3), LOCAL(4), 1, LOCAL(3),
  // -> result_insert_order_set
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(81, 20),
  POS(81, 3),
  POS(82, 14),
  POS(82, 3),
  POS(83, 3),
  POS(84, 3)
};

static TAB_NUM t_func_funky_types__even_more_statement_arguments___collect_literals[] = {
  4, // locals
  1, // parameters
  LOCAL(2), // 86_63_self
  // funky::argument_of(self) $result_insert_order_set
  var_funky__argument_of, 1, LOCAL(2), 1, LOCAL(1),
  // collect_literals funky::argument_of(self) $result_insert_order_set
  var_collect_literals, 1, LOCAL(1), 1, LOCAL(3),
  // funky::arguments_of(self) $arguments_result_insert_order_set collect_literals merge empty_insert_order_set
  var_funky__arguments_of, 1, LOCAL(2), 1, LOCAL(1),
  // map_reduce funky::arguments_of(self) $arguments_result_insert_order_set collect_literals merge empty_insert_order_set
  var_map_reduce, 4, LOCAL(1), var_collect_literals, var_merge, var_empty_insert_order_set, 1, LOCAL(4),
  // merge &result_insert_order_set arguments_result_insert_order_set
  var_merge, 2, LOCAL(3), LOCAL(4), 1, LOCAL(3),
  // -> result_insert_order_set
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(87, 20),
  POS(87, 3),
  POS(88, 14),
  POS(88, 3),
  POS(89, 3),
  POS(90, 3)
};

static TAB_NUM t_func_funky_types__remark_and_multiline_function_call___collect_literals[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 92_68_self
  // funky::arguments_of(self) $result_insert_order_set collect_literals merge empty_insert_order_set
  var_funky__arguments_of, 1, LOCAL(2), 1, LOCAL(1),
  // map_reduce funky::arguments_of(self) $result_insert_order_set collect_literals merge empty_insert_order_set
  var_map_reduce, 4, LOCAL(1), var_collect_literals, var_merge, var_empty_insert_order_set, 1, LOCAL(3),
  // -> result_insert_order_set
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(93, 14),
  POS(93, 3),
  POS(94, 3)
};

static TAB_NUM t_func_funky_types__expression___collect_literals[] = {
  4, // locals
  1, // parameters
  LOCAL(2), // 96_44_self
  // funky::expression_of(self) $result_insert_order_set
  var_funky__expression_of, 1, LOCAL(2), 1, LOCAL(1),
  // collect_literals funky::expression_of(self) $result_insert_order_set
  var_collect_literals, 1, LOCAL(1), 1, LOCAL(3),
  // funky::operator_of(self) $operator_result_insert_order_set
  var_funky__operator_of, 1, LOCAL(2), 1, LOCAL(1),
  // collect_literals funky::operator_of(self) $operator_result_insert_order_set
  var_collect_literals, 1, LOCAL(1), 1, LOCAL(4),
  // merge &result_insert_order_set operator_result_insert_order_set
  var_merge, 2, LOCAL(3), LOCAL(4), 1, LOCAL(3),
  // -> result_insert_order_set
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(97, 20),
  POS(97, 3),
  POS(98, 20),
  POS(98, 3),
  POS(99, 3),
  POS(100, 3)
};

static TAB_NUM t_func_funky_types__parenthesed_expression___collect_literals[] = {
  4, // locals
  1, // parameters
  LOCAL(2), // 102_56_self
  // funky::expression_of(self) $result_insert_order_set
  var_funky__expression_of, 1, LOCAL(2), 1, LOCAL(1),
  // collect_literals funky::expression_of(self) $result_insert_order_set
  var_collect_literals, 1, LOCAL(1), 1, LOCAL(3),
  // funky::calls_of(self) $calls_result_insert_order_set collect_literals merge empty_insert_order_set
  var_funky__calls_of, 1, LOCAL(2), 1, LOCAL(1),
  // map_reduce funky::calls_of(self) $calls_result_insert_order_set collect_literals merge empty_insert_order_set
  var_map_reduce, 4, LOCAL(1), var_collect_literals, var_merge, var_empty_insert_order_set, 1, LOCAL(4),
  // merge &result_insert_order_set calls_result_insert_order_set
  var_merge, 2, LOCAL(3), LOCAL(4), 1, LOCAL(3),
  // -> result_insert_order_set
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(103, 20),
  POS(103, 3),
  POS(104, 14),
  POS(104, 3),
  POS(105, 3),
  POS(106, 3)
};

static TAB_NUM t_func_funky_types__multiline_minus___collect_literals[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 108_49_self
  // funky::arguments_of(self) $result_insert_order_set collect_literals merge empty_insert_order_set
  var_funky__arguments_of, 1, LOCAL(2), 1, LOCAL(1),
  // map_reduce funky::arguments_of(self) $result_insert_order_set collect_literals merge empty_insert_order_set
  var_map_reduce, 4, LOCAL(1), var_collect_literals, var_merge, var_empty_insert_order_set, 1, LOCAL(3),
  // -> result_insert_order_set
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(109, 14),
  POS(109, 3),
  POS(110, 3)
};

static TAB_NUM t_func_funky_types__expression_and_inline_arguments___collect_literals[] = {
  4, // locals
  1, // parameters
  LOCAL(2), // 112_65_self
  // funky::expression_of(self) $result_insert_order_set
  var_funky__expression_of, 1, LOCAL(2), 1, LOCAL(1),
  // collect_literals funky::expression_of(self) $result_insert_order_set
  var_collect_literals, 1, LOCAL(1), 1, LOCAL(3),
  // funky::arguments_of(self) $arguments_result_insert_order_set
  var_funky__arguments_of, 1, LOCAL(2), 1, LOCAL(1),
  // collect_literals funky::arguments_of(self) $arguments_result_insert_order_set
  var_collect_literals, 1, LOCAL(1), 1, LOCAL(4),
  // merge &result_insert_order_set arguments_result_insert_order_set
  var_merge, 2, LOCAL(3), LOCAL(4), 1, LOCAL(3),
  // -> result_insert_order_set
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(113, 20),
  POS(113, 3),
  POS(114, 20),
  POS(114, 3),
  POS(115, 3),
  POS(116, 3)
};

static TAB_NUM t_func_funky_types__string_literal___collect_literals[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 118_48_self
  // funky::components_of(self) $result_insert_order_set collect_literals merge empty_insert_order_set
  var_funky__components_of, 1, LOCAL(2), 1, LOCAL(1),
  // map_reduce funky::components_of(self) $result_insert_order_set collect_literals merge empty_insert_order_set
  var_map_reduce, 4, LOCAL(1), var_collect_literals, var_merge, var_empty_insert_order_set, 1, LOCAL(3),
  // -> result_insert_order_set
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(119, 14),
  POS(119, 3),
  POS(120, 3)
};

static TAB_NUM t_func_funky_types__some_string_components___collect_literals[] = {
  4, // locals
  1, // parameters
  LOCAL(2), // 122_56_self
  // funky::component_of(self) $result_insert_order_set
  var_funky__component_of, 1, LOCAL(2), 1, LOCAL(1),
  // collect_literals funky::component_of(self) $result_insert_order_set
  var_collect_literals, 1, LOCAL(1), 1, LOCAL(3),
  // funky::components_of(self) $components_result_insert_order_set collect_literals merge empty_insert_order_set
  var_funky__components_of, 1, LOCAL(2), 1, LOCAL(1),
  // map_reduce funky::components_of(self) $components_result_insert_order_set collect_literals merge empty_insert_order_set
  var_map_reduce, 4, LOCAL(1), var_collect_literals, var_merge, var_empty_insert_order_set, 1, LOCAL(4),
  // merge &result_insert_order_set components_result_insert_order_set
  var_merge, 2, LOCAL(3), LOCAL(4), 1, LOCAL(3),
  // -> result_insert_order_set
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(123, 20),
  POS(123, 3),
  POS(124, 14),
  POS(124, 3),
  POS(125, 3),
  POS(126, 3)
};

static TAB_NUM t_func_funky_types__some_string_line_components___collect_literals[] = {
  4, // locals
  1, // parameters
  LOCAL(2), // 128_61_self
  // funky::component_of(self) $result_insert_order_set
  var_funky__component_of, 1, LOCAL(2), 1, LOCAL(1),
  // collect_literals funky::component_of(self) $result_insert_order_set
  var_collect_literals, 1, LOCAL(1), 1, LOCAL(3),
  // funky::components_of(self) $components_result_insert_order_set collect_literals merge empty_insert_order_set
  var_funky__components_of, 1, LOCAL(2), 1, LOCAL(1),
  // map_reduce funky::components_of(self) $components_result_insert_order_set collect_literals merge empty_insert_order_set
  var_map_reduce, 4, LOCAL(1), var_collect_literals, var_merge, var_empty_insert_order_set, 1, LOCAL(4),
  // merge &result_insert_order_set components_result_insert_order_set
  var_merge, 2, LOCAL(3), LOCAL(4), 1, LOCAL(3),
  // -> result_insert_order_set
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(129, 20),
  POS(129, 3),
  POS(130, 14),
  POS(130, 3),
  POS(131, 3),
  POS(132, 3)
};

static TAB_NUM t_func_funky_types__inline_body___collect_literals[] = {
  4, // locals
  1, // parameters
  LOCAL(2), // 134_45_self
  // funky::parameters_of(self) $result_insert_order_set collect_literals merge empty_insert_order_set
  var_funky__parameters_of, 1, LOCAL(2), 1, LOCAL(1),
  // map_reduce funky::parameters_of(self) $result_insert_order_set collect_literals merge empty_insert_order_set
  var_map_reduce, 4, LOCAL(1), var_collect_literals, var_merge, var_empty_insert_order_set, 1, LOCAL(3),
  // funky::statement_of(self) $statement_result_insert_order_set
  var_funky__statement_of, 1, LOCAL(2), 1, LOCAL(1),
  // collect_literals funky::statement_of(self) $statement_result_insert_order_set
  var_collect_literals, 1, LOCAL(1), 1, LOCAL(4),
  // merge &result_insert_order_set statement_result_insert_order_set
  var_merge, 2, LOCAL(3), LOCAL(4), 1, LOCAL(3),
  // -> result_insert_order_set
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(135, 14),
  POS(135, 3),
  POS(136, 20),
  POS(136, 3),
  POS(137, 3),
  POS(138, 3)
};

static TAB_NUM t_func_funky_types__statements___collect_literals[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 140_44_self
  // funky::statement_of(self) $result_insert_order_set collect_literals merge empty_insert_order_set
  var_funky__statement_of, 1, LOCAL(2), 1, LOCAL(1),
  // map_reduce funky::statement_of(self) $result_insert_order_set collect_literals merge empty_insert_order_set
  var_map_reduce, 4, LOCAL(1), var_collect_literals, var_merge, var_empty_insert_order_set, 1, LOCAL(3),
  // -> result_insert_order_set
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(141, 14),
  POS(141, 3),
  POS(142, 3)
};

static TAB_NUM t_func_funky_types__one_or_more_inline_parameters___collect_literals[] = {
  4, // locals
  1, // parameters
  LOCAL(2), // 144_63_self
  // funky::parameter_of(self) $result_insert_order_set
  var_funky__parameter_of, 1, LOCAL(2), 1, LOCAL(1),
  // collect_literals funky::parameter_of(self) $result_insert_order_set
  var_collect_literals, 1, LOCAL(1), 1, LOCAL(3),
  // funky::parameters_of(self) $parameters_result_insert_order_set
  var_funky__parameters_of, 1, LOCAL(2), 1, LOCAL(1),
  // collect_literals funky::parameters_of(self) $parameters_result_insert_order_set
  var_collect_literals, 1, LOCAL(1), 1, LOCAL(4),
  // merge &result_insert_order_set parameters_result_insert_order_set
  var_merge, 2, LOCAL(3), LOCAL(4), 1, LOCAL(3),
  // -> result_insert_order_set
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(145, 20),
  POS(145, 3),
  POS(146, 20),
  POS(146, 3),
  POS(147, 3),
  POS(148, 3)
};

static TAB_NUM t_func_funky_types__open_parameters___collect_literals[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 150_49_self
  // funky::parameter_of(self) $result_insert_order_set collect_literals merge empty_insert_order_set
  var_funky__parameter_of, 1, LOCAL(2), 1, LOCAL(1),
  // map_reduce funky::parameter_of(self) $result_insert_order_set collect_literals merge empty_insert_order_set
  var_map_reduce, 4, LOCAL(1), var_collect_literals, var_merge, var_empty_insert_order_set, 1, LOCAL(3),
  // -> result_insert_order_set
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(151, 14),
  POS(151, 3),
  POS(152, 3)
};

static TAB_NUM t_func_funky_types__inline_parameter___collect_literals[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 154_50_self
  // funky::option_of(self) $result_insert_order_set
  var_funky__option_of, 1, LOCAL(2), 1, LOCAL(1),
  // collect_literals funky::option_of(self) $result_insert_order_set
  var_collect_literals, 1, LOCAL(1), 1, LOCAL(3),
  // -> result_insert_order_set
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(155, 20),
  POS(155, 3),
  POS(156, 3)
};

static TAB_NUM t_func_funky_types__parameter___collect_literals[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 158_43_self
  // funky::option_of(self) $result_insert_order_set
  var_funky__option_of, 1, LOCAL(2), 1, LOCAL(1),
  // collect_literals funky::option_of(self) $result_insert_order_set
  var_collect_literals, 1, LOCAL(1), 1, LOCAL(3),
  // -> result_insert_order_set
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(159, 20),
  POS(159, 3),
  POS(160, 3)
};

static TAB_NUM t_func_funky_types__initial_value___collect_literals[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 162_47_self
  // funky::operand_of(self) $result_insert_order_set
  var_funky__operand_of, 1, LOCAL(2), 1, LOCAL(1),
  // collect_literals funky::operand_of(self) $result_insert_order_set
  var_collect_literals, 1, LOCAL(1), 1, LOCAL(3),
  // -> result_insert_order_set
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(163, 20),
  POS(163, 3),
  POS(164, 3)
};

static FUNKY_CONSTANT constants_table[] = {
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__undefined___collect_literals}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__node___collect_literals}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__identifier_and_expression___collect_literals}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__simple_expression___collect_literals}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__statement___collect_literals}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__inline_statement___collect_literals}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__pair___collect_literals}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__functor___collect_literals}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__function_call_extension___collect_literals}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__attribute_access_extension___collect_literals}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__inline_function_call_extension___collect_literals}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__inline_attribute_access_extension___collect_literals}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__function_call___collect_literals}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__spaced_arguments___collect_literals}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__spaced_statement_arguments___collect_literals}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__arguments___collect_literals}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__even_more_statement_arguments___collect_literals}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__remark_and_multiline_function_call___collect_literals}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__expression___collect_literals}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__parenthesed_expression___collect_literals}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__multiline_minus___collect_literals}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__expression_and_inline_arguments___collect_literals}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__string_literal___collect_literals}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__some_string_components___collect_literals}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__some_string_line_components___collect_literals}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__inline_body___collect_literals}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__statements___collect_literals}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__one_or_more_inline_parameters___collect_literals}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__open_parameters___collect_literals}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__inline_parameter___collect_literals}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__parameter___collect_literals}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__initial_value___collect_literals}}
};

static ATTRIBUTE_DEFINITION std_types__undefined__attributes[] = {
  {var_collect_literals, -func_std_types__undefined___collect_literals}
};

static ATTRIBUTE_DEFINITION funky_types__node__attributes[] = {
  {var_collect_literals, -func_funky_types__node___collect_literals}
};

static ATTRIBUTE_DEFINITION funky_types__identifier_and_expression__attributes[] = {
  {var_collect_literals, -func_funky_types__identifier_and_expression___collect_literals}
};

static ATTRIBUTE_DEFINITION funky_types__simple_expression__attributes[] = {
  {var_collect_literals, -func_funky_types__simple_expression___collect_literals}
};

static ATTRIBUTE_DEFINITION funky_types__statement__attributes[] = {
  {var_collect_literals, -func_funky_types__statement___collect_literals}
};

static ATTRIBUTE_DEFINITION funky_types__inline_statement__attributes[] = {
  {var_collect_literals, -func_funky_types__inline_statement___collect_literals}
};

static ATTRIBUTE_DEFINITION funky_types__pair__attributes[] = {
  {var_collect_literals, -func_funky_types__pair___collect_literals}
};

static ATTRIBUTE_DEFINITION funky_types__functor__attributes[] = {
  {var_collect_literals, -func_funky_types__functor___collect_literals}
};

static ATTRIBUTE_DEFINITION funky_types__function_call_extension__attributes[] = {
  {var_collect_literals, -func_funky_types__function_call_extension___collect_literals}
};

static ATTRIBUTE_DEFINITION funky_types__attribute_access_extension__attributes[] = {
  {var_collect_literals, -func_funky_types__attribute_access_extension___collect_literals}
};

static ATTRIBUTE_DEFINITION funky_types__inline_function_call_extension__attributes[] = {
  {var_collect_literals, -func_funky_types__inline_function_call_extension___collect_literals}
};

static ATTRIBUTE_DEFINITION funky_types__inline_attribute_access_extension__attributes[] = {
  {var_collect_literals, -func_funky_types__inline_attribute_access_extension___collect_literals}
};

static ATTRIBUTE_DEFINITION funky_types__function_call__attributes[] = {
  {var_collect_literals, -func_funky_types__function_call___collect_literals}
};

static ATTRIBUTE_DEFINITION funky_types__spaced_arguments__attributes[] = {
  {var_collect_literals, -func_funky_types__spaced_arguments___collect_literals}
};

static ATTRIBUTE_DEFINITION funky_types__spaced_statement_arguments__attributes[] = {
  {var_collect_literals, -func_funky_types__spaced_statement_arguments___collect_literals}
};

static ATTRIBUTE_DEFINITION funky_types__arguments__attributes[] = {
  {var_collect_literals, -func_funky_types__arguments___collect_literals}
};

static ATTRIBUTE_DEFINITION funky_types__even_more_statement_arguments__attributes[] = {
  {var_collect_literals, -func_funky_types__even_more_statement_arguments___collect_literals}
};

static ATTRIBUTE_DEFINITION funky_types__remark_and_multiline_function_call__attributes[] = {
  {var_collect_literals, -func_funky_types__remark_and_multiline_function_call___collect_literals}
};

static ATTRIBUTE_DEFINITION funky_types__expression__attributes[] = {
  {var_collect_literals, -func_funky_types__expression___collect_literals}
};

static ATTRIBUTE_DEFINITION funky_types__parenthesed_expression__attributes[] = {
  {var_collect_literals, -func_funky_types__parenthesed_expression___collect_literals}
};

static ATTRIBUTE_DEFINITION funky_types__multiline_minus__attributes[] = {
  {var_collect_literals, -func_funky_types__multiline_minus___collect_literals}
};

static ATTRIBUTE_DEFINITION funky_types__expression_and_inline_arguments__attributes[] = {
  {var_collect_literals, -func_funky_types__expression_and_inline_arguments___collect_literals}
};

static ATTRIBUTE_DEFINITION funky_types__string_literal__attributes[] = {
  {var_collect_literals, -func_funky_types__string_literal___collect_literals}
};

static ATTRIBUTE_DEFINITION funky_types__some_string_components__attributes[] = {
  {var_collect_literals, -func_funky_types__some_string_components___collect_literals}
};

static ATTRIBUTE_DEFINITION funky_types__some_string_line_components__attributes[] = {
  {var_collect_literals, -func_funky_types__some_string_line_components___collect_literals}
};

static ATTRIBUTE_DEFINITION funky_types__inline_body__attributes[] = {
  {var_collect_literals, -func_funky_types__inline_body___collect_literals}
};

static ATTRIBUTE_DEFINITION funky_types__statements__attributes[] = {
  {var_collect_literals, -func_funky_types__statements___collect_literals}
};

static ATTRIBUTE_DEFINITION funky_types__one_or_more_inline_parameters__attributes[] = {
  {var_collect_literals, -func_funky_types__one_or_more_inline_parameters___collect_literals}
};

static ATTRIBUTE_DEFINITION funky_types__open_parameters__attributes[] = {
  {var_collect_literals, -func_funky_types__open_parameters___collect_literals}
};

static ATTRIBUTE_DEFINITION funky_types__inline_parameter__attributes[] = {
  {var_collect_literals, -func_funky_types__inline_parameter___collect_literals}
};

static ATTRIBUTE_DEFINITION funky_types__parameter__attributes[] = {
  {var_collect_literals, -func_funky_types__parameter___collect_literals}
};

static ATTRIBUTE_DEFINITION funky_types__initial_value__attributes[] = {
  {var_collect_literals, -func_funky_types__initial_value___collect_literals}
};

static FUNKY_VARIABLE variables_table[] = {
  {
    FOT_UNKNOWN, 0, 1,
    "undefined\000std_types", std_types__undefined__attributes,
    {.position = POS(10, 1)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "collect_literals\000", NULL,
    {.position = POS(10, 23)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_insert_order_set\000", NULL,
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
    {.position = POS(17, 20)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "simple_expression\000funky_types", funky_types__simple_expression__attributes,
    {.position = POS(20, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "statement\000funky_types", funky_types__statement__attributes,
    {.position = POS(24, 1)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "head_of\000funky", NULL,
    {.position = POS(25, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "arguments_of\000funky", NULL,
    {.position = POS(26, 14)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "merge\000", NULL,
    {.position = POS(26, 92)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "map_reduce\000", NULL,
    {.position = POS(26, 3)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "inline_statement\000funky_types", funky_types__inline_statement__attributes,
    {.position = POS(30, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "pair\000funky_types", funky_types__pair__attributes,
    {.position = POS(36, 1)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "argument_of\000funky", NULL,
    {.position = POS(37, 20)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "functor\000funky_types", funky_types__functor__attributes,
    {.position = POS(40, 1)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "extensions_of\000funky", NULL,
    {.position = POS(41, 14)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "function_call_extension\000funky_types", funky_types__function_call_extension__attributes,
    {.position = POS(44, 1)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "call_of\000funky", NULL,
    {.position = POS(45, 20)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "attribute_access_extension\000funky_types", funky_types__attribute_access_extension__attributes,
    {.position = POS(50, 1)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "access_of\000funky", NULL,
    {.position = POS(51, 20)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "inline_function_call_extension\000funky_types", funky_types__inline_function_call_extension__attributes,
    {.position = POS(56, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "inline_attribute_access_extension\000funky_types", funky_types__inline_attribute_access_extension__attributes,
    {.position = POS(62, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "function_call\000funky_types", funky_types__function_call__attributes,
    {.position = POS(68, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "spaced_arguments\000funky_types", funky_types__spaced_arguments__attributes,
    {.position = POS(72, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "spaced_statement_arguments\000funky_types", funky_types__spaced_statement_arguments__attributes,
    {.position = POS(76, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "arguments\000funky_types", funky_types__arguments__attributes,
    {.position = POS(80, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "even_more_statement_arguments\000funky_types", funky_types__even_more_statement_arguments__attributes,
    {.position = POS(86, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "remark_and_multiline_function_call\000funky_types", funky_types__remark_and_multiline_function_call__attributes,
    {.position = POS(92, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "expression\000funky_types", funky_types__expression__attributes,
    {.position = POS(96, 1)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "operator_of\000funky", NULL,
    {.position = POS(98, 20)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "parenthesed_expression\000funky_types", funky_types__parenthesed_expression__attributes,
    {.position = POS(102, 1)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "calls_of\000funky", NULL,
    {.position = POS(104, 14)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "multiline_minus\000funky_types", funky_types__multiline_minus__attributes,
    {.position = POS(108, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "expression_and_inline_arguments\000funky_types", funky_types__expression_and_inline_arguments__attributes,
    {.position = POS(112, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "string_literal\000funky_types", funky_types__string_literal__attributes,
    {.position = POS(118, 1)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "components_of\000funky", NULL,
    {.position = POS(119, 14)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "some_string_components\000funky_types", funky_types__some_string_components__attributes,
    {.position = POS(122, 1)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "component_of\000funky", NULL,
    {.position = POS(123, 20)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "some_string_line_components\000funky_types", funky_types__some_string_line_components__attributes,
    {.position = POS(128, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "inline_body\000funky_types", funky_types__inline_body__attributes,
    {.position = POS(134, 1)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "parameters_of\000funky", NULL,
    {.position = POS(135, 14)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "statement_of\000funky", NULL,
    {.position = POS(136, 20)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "statements\000funky_types", funky_types__statements__attributes,
    {.position = POS(140, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "one_or_more_inline_parameters\000funky_types", funky_types__one_or_more_inline_parameters__attributes,
    {.position = POS(144, 1)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "parameter_of\000funky", NULL,
    {.position = POS(145, 20)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "open_parameters\000funky_types", funky_types__open_parameters__attributes,
    {.position = POS(150, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "inline_parameter\000funky_types", funky_types__inline_parameter__attributes,
    {.position = POS(154, 1)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "option_of\000funky", NULL,
    {.position = POS(155, 20)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "parameter\000funky_types", funky_types__parameter__attributes,
    {.position = POS(158, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "initial_value\000funky_types", funky_types__initial_value__attributes,
    {.position = POS(162, 1)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "operand_of\000funky", NULL,
    {.position = POS(163, 20)}
  }
};

static FUNKY_NAMESPACE used_namespaces[] = {
  {"std", 1, 0},
  {"funky", 1, 0}
};

FUNKY_MODULE module__collect_literals_autogen = {
  "_collect_literals_autogen", // module name
  "collect_literals_autogen.fky", // module filename
  .major_version = 0,
  .minor_version = 0,
  .feature_flags = FEAT_POSITIONS,
  .marker = 0,
  0, // number of required modules
  0, // number of defined namespaces
  2, // number of used namespaces
  32, // number of constants
  53, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  constants_table,
  variables_table,
};
