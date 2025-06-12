#include <stddef.h>
#include <stdint.h>

#include "runtime/common.h"
#include "runtime/builtins.h"
#include "runtime/fko.h"
#include "runtime/memory.h"

enum {
  func_std_types__undefined___simplify = -1,
  func_funky_types__node___simplify = -2,
  func_funky_types__identifier_and_expression___simplify = -3,
  func_funky_types__simple_expression___simplify = -4,
  func_funky_types__function_call_extension___simplify = -5,
  lambda_1 = -6,
  lambda_2 = -7,
  func_funky_types__attribute_access_extension___simplify = -8,
  lambda_3 = -9,
  lambda_4 = -10,
  func_funky_types__inline_function_call_extension___simplify = -11,
  lambda_5 = -12,
  lambda_6 = -13,
  func_funky_types__inline_attribute_access_extension___simplify = -14,
  lambda_7 = -15,
  lambda_8 = -16,
  func_funky_types__function_call___simplify = -17,
  lambda_9 = -18,
  lambda_10 = -19,
  func_funky_types__spaced_arguments___simplify = -20,
  func_funky_types__spaced_statement_arguments___simplify = -21,
  func_funky_types__arguments___simplify = -22,
  lambda_11 = -23,
  lambda_12 = -24,
  func_funky_types__even_more_statement_arguments___simplify = -25,
  lambda_13 = -26,
  lambda_14 = -27,
  func_funky_types__remark_and_multiline_function_call___simplify = -28,
  lambda_15 = -29,
  lambda_16 = -30,
  func_funky_types__expression_and_inline_arguments___simplify = -31,
  func_funky_types__some_string_components___simplify = -32,
  lambda_17 = -33,
  lambda_18 = -34,
  func_funky_types__some_string_line_components___simplify = -35,
  lambda_19 = -36,
  lambda_20 = -37,
  func_funky_types__statements___simplify = -38,
  lambda_21 = -39,
  lambda_22 = -40,
  func_funky_types__one_or_more_inline_parameters___simplify = -41,
  func_funky_types__open_parameters___simplify = -42,
  lambda_23 = -43,
  lambda_24 = -44,
  func_funky_types__initial_value___simplify = -45
};

enum {
  var__START = FIRST_VAR-1,
  var_std_types__undefined, // extern
  var_simplify, // extern polymorphic
  var_empty_statements, // extern
  var_std__assign, // extern
  var_funky_types__node, // extern
  var_funky_types__identifier_and_expression, // extern
  var_funky__expression_of, // extern polymorphic
  var_funky_types__simple_expression, // extern
  var_funky_types__function_call_extension, // extern
  var_24_55_state, // dynamic
  var_funky__call_of, // extern polymorphic
  var_25_41_result_statements, // dynamic
  var_26_4_new_extensions, // dynamic
  var_empty_list, // extern
  var_extensions_of, // extern polymorphic
  var_push, // extern
  var_append, // extern
  var_next, // extern
  var_for_each, // extern
  var_funky_types__attribute_access_extension, // extern
  var_36_58_state, // dynamic
  var_funky__access_of, // extern polymorphic
  var_37_43_result_statements, // dynamic
  var_38_4_new_extensions, // dynamic
  var_funky_types__inline_function_call_extension, // extern
  var_48_62_state, // dynamic
  var_49_41_result_statements, // dynamic
  var_50_4_new_extensions, // dynamic
  var_funky_types__inline_attribute_access_extension, // extern
  var_60_65_state, // dynamic
  var_61_43_result_statements, // dynamic
  var_62_4_new_extensions, // dynamic
  var_funky_types__function_call, // extern
  var_72_45_state, // dynamic
  var_73_4_result_statements, // dynamic
  var_74_4_new_arguments, // dynamic
  var_arguments_of, // extern polymorphic
  var_funky_types__spaced_arguments, // extern
  var_funky__arguments_of, // extern polymorphic
  var_funky_types__spaced_statement_arguments, // extern
  var_funky_types__arguments, // extern
  var_92_41_state, // dynamic
  var_funky__argument_of, // extern polymorphic
  var_93_45_result_statements, // dynamic
  var_94_4_new_arguments, // dynamic
  var_funky_types__even_more_statement_arguments, // extern
  var_104_61_state, // dynamic
  var_105_45_result_statements, // dynamic
  var_106_4_new_arguments, // dynamic
  var_funky_types__remark_and_multiline_function_call, // extern
  var_116_66_state, // dynamic
  var_117_4_result_statements, // dynamic
  var_118_4_new_arguments, // dynamic
  var_funky_types__expression_and_inline_arguments, // extern
  var_funky_types__some_string_components, // extern
  var_134_54_state, // dynamic
  var_funky__component_of, // extern polymorphic
  var_135_46_result_statements, // dynamic
  var_136_4_new_components, // dynamic
  var_components_of, // extern polymorphic
  var_funky_types__some_string_line_components, // extern
  var_146_59_state, // dynamic
  var_147_46_result_statements, // dynamic
  var_148_4_new_components, // dynamic
  var_funky_types__statements, // extern
  var_158_42_state, // dynamic
  var_159_4_result_statements, // dynamic
  var_160_4_new_statement, // dynamic
  var_statement_of, // extern polymorphic
  var_funky_types__one_or_more_inline_parameters, // extern
  var_funky__parameter_of, // extern polymorphic
  var_funky__parameters_of, // extern polymorphic
  var_funky_types__open_parameters, // extern
  var_176_47_state, // dynamic
  var_177_4_result_statements, // dynamic
  var_178_4_new_parameter, // dynamic
  var_parameter_of, // extern polymorphic
  var_funky_types__initial_value, // extern
  var_funky__operand_of, // extern polymorphic
  var__END
};


static TAB_NUM t_func_std_types__undefined___simplify[] = {
  2, // locals
  2, // parameters
  LOCAL(1), // 10_34_self
  LOCAL(2), // 10_39_state
  // -> self state empty_statements
  LET, 3, LOCAL(1), LOCAL(2), var_empty_statements, TAIL_CALL,
  POS(11, 3),
  LOCAL(1),
  LOCAL(2)
};

static FUNCTION_INFO i_func_std_types__undefined___simplify = {
  t_func_std_types__undefined___simplify, NULL, 1, 2,
  {"10_34_self\000", "10_39_state\000"}
};

static TAB_NUM t_func_funky_types__node___simplify[] = {
  2, // locals
  2, // parameters
  LOCAL(1), // 13_31_self
  LOCAL(2), // 13_36_state
  // -> self state empty_statements
  LET, 3, LOCAL(1), LOCAL(2), var_empty_statements, TAIL_CALL,
  POS(14, 3),
  LOCAL(2),
  LOCAL(1)
};

static FUNCTION_INFO i_func_funky_types__node___simplify = {
  t_func_funky_types__node___simplify, NULL, 1, 2,
  {"13_36_state\000", "13_31_self\000"}
};

static TAB_NUM t_func_funky_types__identifier_and_expression___simplify[] = {
  4, // locals
  2, // parameters
  LOCAL(2), // 16_52_self
  LOCAL(3), // 16_57_state
  // funky::expression_of &state $result_statements
  var_funky__expression_of, 1, LOCAL(2), 1, LOCAL(1),
  // simplify &self.funky::expression_of &state $result_statements
  var_simplify, 2, LOCAL(1), LOCAL(3), 3, LOCAL(1), LOCAL(3), LOCAL(4),
  // self.funky::expression_of &state $result_statements
  LET, -1, LOCAL(2), var_funky__expression_of, LOCAL(1), LOCAL(2),
  // -> self state result_statements
  LET, 3, LOCAL(2), LOCAL(3), LOCAL(4), TAIL_CALL,
  POS(17, 18),
  POS(17, 3),
  POS(17, 13),
  POS(18, 3),
  LOCAL(3),
  LOCAL(4),
  LOCAL(2)
};

static FUNCTION_INFO i_func_funky_types__identifier_and_expression___simplify = {
  t_func_funky_types__identifier_and_expression___simplify, NULL, 4, 3,
  {"16_57_state\000", "17_47_result_statements\000", "16_52_self\000"}
};

static TAB_NUM t_func_funky_types__simple_expression___simplify[] = {
  4, // locals
  2, // parameters
  LOCAL(2), // 20_44_self
  LOCAL(3), // 20_49_state
  // funky::expression_of &state $result_statements
  var_funky__expression_of, 1, LOCAL(2), 1, LOCAL(1),
  // simplify &self.funky::expression_of &state $result_statements
  var_simplify, 2, LOCAL(1), LOCAL(3), 3, LOCAL(1), LOCAL(3), LOCAL(4),
  // self.funky::expression_of &state $result_statements
  LET, -1, LOCAL(2), var_funky__expression_of, LOCAL(1), LOCAL(2),
  // -> self state result_statements
  LET, 3, LOCAL(2), LOCAL(3), LOCAL(4), TAIL_CALL,
  POS(21, 18),
  POS(21, 3),
  POS(21, 13),
  POS(22, 3),
  LOCAL(2),
  LOCAL(3),
  LOCAL(4)
};

static FUNCTION_INFO i_func_funky_types__simple_expression___simplify = {
  t_func_funky_types__simple_expression___simplify, NULL, 4, 3,
  {"20_44_self\000", "20_49_state\000", "21_47_result_statements\000"}
};

static TAB_NUM t_func_funky_types__function_call_extension___simplify[] = {
  2, // locals
  2, // parameters
  LOCAL(2), // 24_50_self
  var_24_55_state,
  // funky::call_of &state $result_statements
  var_funky__call_of, 1, LOCAL(2), 1, LOCAL(1),
  // simplify &self.funky::call_of &state $result_statements
  var_simplify, 2, LOCAL(1), var_24_55_state, 3, LOCAL(1), var_24_55_state, var_25_41_result_statements,
  // self.funky::call_of &state $result_statements
  LET, -1, LOCAL(2), var_funky__call_of, LOCAL(1), LOCAL(2),
  // $new_extensions empty_list
  LET, 1, var_empty_list, 1, var_26_4_new_extensions,
  // extensions_of !state !result_statements
  var_extensions_of, 1, LOCAL(2), 1, LOCAL(1),
  // for_each &self.extensions_of !state !result_statements
  var_for_each, 3, LOCAL(1), lambda_1, lambda_2, 3, LOCAL(1), var_24_55_state, var_25_41_result_statements,
  // self.extensions_of !state !result_statements
  LET, -1, LOCAL(2), var_extensions_of, LOCAL(1), LOCAL(2),
  // -> self state result_statements
  LET, 3, LOCAL(2), var_24_55_state, var_25_41_result_statements, TAIL_CALL,
  POS(25, 18),
  POS(25, 3),
  POS(25, 13),
  POS(26, 3),
  POS(27, 18),
  POS(27, 3),
  POS(27, 13),
  POS(34, 3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_funky_types__function_call_extension___simplify = {
  t_func_funky_types__function_call_extension___simplify, NULL, 8, 1,
  {"24_50_self\000"}
};

static TAB_NUM t_lambda_1[] = {
  2, // locals
  1, // parameters
  LOCAL(1), // 28_8_item
  // simplify &item &state $extensions_result_statements
  var_simplify, 2, LOCAL(1), var_24_55_state, 3, LOCAL(1), var_24_55_state, LOCAL(2),
  // push &new_extensions item
  var_push, 2, var_26_4_new_extensions, LOCAL(1), 1, var_26_4_new_extensions,
  // append &result_statements extensions_result_statements
  var_append, 2, var_25_41_result_statements, LOCAL(2), 1, var_25_41_result_statements,
  // next
  var_next, 0, TAIL_CALL,
  POS(29, 7),
  POS(30, 7),
  POS(31, 7),
  POS(32, 7),
  LOCAL(1),
  LOCAL(2)
};

static FUNCTION_INFO i_lambda_1 = {
  t_lambda_1, NULL, 4, 2,
  {"28_8_item\000", "29_30_extensions_result_statements\000"}
};

static TAB_NUM t_lambda_2[] = {
  0, // locals
  0, // parameters
  //  new_extensions state result_statements
  LET, 3, var_26_4_new_extensions, var_24_55_state, var_25_41_result_statements, TAIL_CALL,
  POS(33, 7)
};

static FUNCTION_INFO i_lambda_2 = {
  t_lambda_2, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_funky_types__attribute_access_extension___simplify[] = {
  2, // locals
  2, // parameters
  LOCAL(2), // 36_53_self
  var_36_58_state,
  // funky::access_of &state $result_statements
  var_funky__access_of, 1, LOCAL(2), 1, LOCAL(1),
  // simplify &self.funky::access_of &state $result_statements
  var_simplify, 2, LOCAL(1), var_36_58_state, 3, LOCAL(1), var_36_58_state, var_37_43_result_statements,
  // self.funky::access_of &state $result_statements
  LET, -1, LOCAL(2), var_funky__access_of, LOCAL(1), LOCAL(2),
  // $new_extensions empty_list
  LET, 1, var_empty_list, 1, var_38_4_new_extensions,
  // extensions_of !state !result_statements
  var_extensions_of, 1, LOCAL(2), 1, LOCAL(1),
  // for_each &self.extensions_of !state !result_statements
  var_for_each, 3, LOCAL(1), lambda_3, lambda_4, 3, LOCAL(1), var_36_58_state, var_37_43_result_statements,
  // self.extensions_of !state !result_statements
  LET, -1, LOCAL(2), var_extensions_of, LOCAL(1), LOCAL(2),
  // -> self state result_statements
  LET, 3, LOCAL(2), var_36_58_state, var_37_43_result_statements, TAIL_CALL,
  POS(37, 18),
  POS(37, 3),
  POS(37, 13),
  POS(38, 3),
  POS(39, 18),
  POS(39, 3),
  POS(39, 13),
  POS(46, 3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_funky_types__attribute_access_extension___simplify = {
  t_func_funky_types__attribute_access_extension___simplify, NULL, 8, 1,
  {"36_53_self\000"}
};

static TAB_NUM t_lambda_3[] = {
  2, // locals
  1, // parameters
  LOCAL(1), // 40_8_item
  // simplify &item &state $extensions_result_statements
  var_simplify, 2, LOCAL(1), var_36_58_state, 3, LOCAL(1), var_36_58_state, LOCAL(2),
  // push &new_extensions item
  var_push, 2, var_38_4_new_extensions, LOCAL(1), 1, var_38_4_new_extensions,
  // append &result_statements extensions_result_statements
  var_append, 2, var_37_43_result_statements, LOCAL(2), 1, var_37_43_result_statements,
  // next
  var_next, 0, TAIL_CALL,
  POS(41, 7),
  POS(42, 7),
  POS(43, 7),
  POS(44, 7),
  LOCAL(2),
  LOCAL(1)
};

static FUNCTION_INFO i_lambda_3 = {
  t_lambda_3, NULL, 4, 2,
  {"41_30_extensions_result_statements\000", "40_8_item\000"}
};

static TAB_NUM t_lambda_4[] = {
  0, // locals
  0, // parameters
  //  new_extensions state result_statements
  LET, 3, var_38_4_new_extensions, var_36_58_state, var_37_43_result_statements, TAIL_CALL,
  POS(45, 7)
};

static FUNCTION_INFO i_lambda_4 = {
  t_lambda_4, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_funky_types__inline_function_call_extension___simplify[] = {
  2, // locals
  2, // parameters
  LOCAL(2), // 48_57_self
  var_48_62_state,
  // funky::call_of &state $result_statements
  var_funky__call_of, 1, LOCAL(2), 1, LOCAL(1),
  // simplify &self.funky::call_of &state $result_statements
  var_simplify, 2, LOCAL(1), var_48_62_state, 3, LOCAL(1), var_48_62_state, var_49_41_result_statements,
  // self.funky::call_of &state $result_statements
  LET, -1, LOCAL(2), var_funky__call_of, LOCAL(1), LOCAL(2),
  // $new_extensions empty_list
  LET, 1, var_empty_list, 1, var_50_4_new_extensions,
  // extensions_of !state !result_statements
  var_extensions_of, 1, LOCAL(2), 1, LOCAL(1),
  // for_each &self.extensions_of !state !result_statements
  var_for_each, 3, LOCAL(1), lambda_5, lambda_6, 3, LOCAL(1), var_48_62_state, var_49_41_result_statements,
  // self.extensions_of !state !result_statements
  LET, -1, LOCAL(2), var_extensions_of, LOCAL(1), LOCAL(2),
  // -> self state result_statements
  LET, 3, LOCAL(2), var_48_62_state, var_49_41_result_statements, TAIL_CALL,
  POS(49, 18),
  POS(49, 3),
  POS(49, 13),
  POS(50, 3),
  POS(51, 18),
  POS(51, 3),
  POS(51, 13),
  POS(58, 3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_funky_types__inline_function_call_extension___simplify = {
  t_func_funky_types__inline_function_call_extension___simplify, NULL, 8, 1,
  {"48_57_self\000"}
};

static TAB_NUM t_lambda_5[] = {
  2, // locals
  1, // parameters
  LOCAL(1), // 52_8_item
  // simplify &item &state $extensions_result_statements
  var_simplify, 2, LOCAL(1), var_48_62_state, 3, LOCAL(1), var_48_62_state, LOCAL(2),
  // push &new_extensions item
  var_push, 2, var_50_4_new_extensions, LOCAL(1), 1, var_50_4_new_extensions,
  // append &result_statements extensions_result_statements
  var_append, 2, var_49_41_result_statements, LOCAL(2), 1, var_49_41_result_statements,
  // next
  var_next, 0, TAIL_CALL,
  POS(53, 7),
  POS(54, 7),
  POS(55, 7),
  POS(56, 7),
  LOCAL(2),
  LOCAL(1)
};

static FUNCTION_INFO i_lambda_5 = {
  t_lambda_5, NULL, 4, 2,
  {"53_30_extensions_result_statements\000", "52_8_item\000"}
};

static TAB_NUM t_lambda_6[] = {
  0, // locals
  0, // parameters
  //  new_extensions state result_statements
  LET, 3, var_50_4_new_extensions, var_48_62_state, var_49_41_result_statements, TAIL_CALL,
  POS(57, 7)
};

static FUNCTION_INFO i_lambda_6 = {
  t_lambda_6, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_funky_types__inline_attribute_access_extension___simplify[] = {
  2, // locals
  2, // parameters
  LOCAL(2), // 60_60_self
  var_60_65_state,
  // funky::access_of &state $result_statements
  var_funky__access_of, 1, LOCAL(2), 1, LOCAL(1),
  // simplify &self.funky::access_of &state $result_statements
  var_simplify, 2, LOCAL(1), var_60_65_state, 3, LOCAL(1), var_60_65_state, var_61_43_result_statements,
  // self.funky::access_of &state $result_statements
  LET, -1, LOCAL(2), var_funky__access_of, LOCAL(1), LOCAL(2),
  // $new_extensions empty_list
  LET, 1, var_empty_list, 1, var_62_4_new_extensions,
  // extensions_of !state !result_statements
  var_extensions_of, 1, LOCAL(2), 1, LOCAL(1),
  // for_each &self.extensions_of !state !result_statements
  var_for_each, 3, LOCAL(1), lambda_7, lambda_8, 3, LOCAL(1), var_60_65_state, var_61_43_result_statements,
  // self.extensions_of !state !result_statements
  LET, -1, LOCAL(2), var_extensions_of, LOCAL(1), LOCAL(2),
  // -> self state result_statements
  LET, 3, LOCAL(2), var_60_65_state, var_61_43_result_statements, TAIL_CALL,
  POS(61, 18),
  POS(61, 3),
  POS(61, 13),
  POS(62, 3),
  POS(63, 18),
  POS(63, 3),
  POS(63, 13),
  POS(70, 3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_funky_types__inline_attribute_access_extension___simplify = {
  t_func_funky_types__inline_attribute_access_extension___simplify, NULL, 8, 1,
  {"60_60_self\000"}
};

static TAB_NUM t_lambda_7[] = {
  2, // locals
  1, // parameters
  LOCAL(1), // 64_8_item
  // simplify &item &state $extensions_result_statements
  var_simplify, 2, LOCAL(1), var_60_65_state, 3, LOCAL(1), var_60_65_state, LOCAL(2),
  // push &new_extensions item
  var_push, 2, var_62_4_new_extensions, LOCAL(1), 1, var_62_4_new_extensions,
  // append &result_statements extensions_result_statements
  var_append, 2, var_61_43_result_statements, LOCAL(2), 1, var_61_43_result_statements,
  // next
  var_next, 0, TAIL_CALL,
  POS(65, 7),
  POS(66, 7),
  POS(67, 7),
  POS(68, 7),
  LOCAL(1),
  LOCAL(2)
};

static FUNCTION_INFO i_lambda_7 = {
  t_lambda_7, NULL, 4, 2,
  {"64_8_item\000", "65_30_extensions_result_statements\000"}
};

static TAB_NUM t_lambda_8[] = {
  0, // locals
  0, // parameters
  //  new_extensions state result_statements
  LET, 3, var_62_4_new_extensions, var_60_65_state, var_61_43_result_statements, TAIL_CALL,
  POS(69, 7)
};

static FUNCTION_INFO i_lambda_8 = {
  t_lambda_8, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_funky_types__function_call___simplify[] = {
  2, // locals
  2, // parameters
  LOCAL(2), // 72_40_self
  var_72_45_state,
  // $result_statements empty_statements
  LET, 1, var_empty_statements, 1, var_73_4_result_statements,
  // $new_arguments empty_list
  LET, 1, var_empty_list, 1, var_74_4_new_arguments,
  // arguments_of !state !result_statements
  var_arguments_of, 1, LOCAL(2), 1, LOCAL(1),
  // for_each &self.arguments_of !state !result_statements
  var_for_each, 3, LOCAL(1), lambda_9, lambda_10, 3, LOCAL(1), var_72_45_state, var_73_4_result_statements,
  // self.arguments_of !state !result_statements
  LET, -1, LOCAL(2), var_arguments_of, LOCAL(1), LOCAL(2),
  // -> self state result_statements
  LET, 3, LOCAL(2), var_72_45_state, var_73_4_result_statements, TAIL_CALL,
  POS(73, 3),
  POS(74, 3),
  POS(75, 18),
  POS(75, 3),
  POS(75, 13),
  POS(82, 3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_funky_types__function_call___simplify = {
  t_func_funky_types__function_call___simplify, NULL, 6, 1,
  {"72_40_self\000"}
};

static TAB_NUM t_lambda_9[] = {
  2, // locals
  1, // parameters
  LOCAL(1), // 76_8_item
  // simplify &item &state $arguments_result_statements
  var_simplify, 2, LOCAL(1), var_72_45_state, 3, LOCAL(1), var_72_45_state, LOCAL(2),
  // push &new_arguments item
  var_push, 2, var_74_4_new_arguments, LOCAL(1), 1, var_74_4_new_arguments,
  // append &result_statements arguments_result_statements
  var_append, 2, var_73_4_result_statements, LOCAL(2), 1, var_73_4_result_statements,
  // next
  var_next, 0, TAIL_CALL,
  POS(77, 7),
  POS(78, 7),
  POS(79, 7),
  POS(80, 7),
  LOCAL(2),
  LOCAL(1)
};

static FUNCTION_INFO i_lambda_9 = {
  t_lambda_9, NULL, 4, 2,
  {"77_30_arguments_result_statements\000", "76_8_item\000"}
};

static TAB_NUM t_lambda_10[] = {
  0, // locals
  0, // parameters
  //  new_arguments state result_statements
  LET, 3, var_74_4_new_arguments, var_72_45_state, var_73_4_result_statements, TAIL_CALL,
  POS(81, 7)
};

static FUNCTION_INFO i_lambda_10 = {
  t_lambda_10, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_funky_types__spaced_arguments___simplify[] = {
  4, // locals
  2, // parameters
  LOCAL(2), // 84_43_self
  LOCAL(3), // 84_48_state
  // funky::arguments_of &state $result_statements
  var_funky__arguments_of, 1, LOCAL(2), 1, LOCAL(1),
  // simplify &self.funky::arguments_of &state $result_statements
  var_simplify, 2, LOCAL(1), LOCAL(3), 3, LOCAL(1), LOCAL(3), LOCAL(4),
  // self.funky::arguments_of &state $result_statements
  LET, -1, LOCAL(2), var_funky__arguments_of, LOCAL(1), LOCAL(2),
  // -> self state result_statements
  LET, 3, LOCAL(2), LOCAL(3), LOCAL(4), TAIL_CALL,
  POS(85, 18),
  POS(85, 3),
  POS(85, 13),
  POS(86, 3),
  LOCAL(2),
  LOCAL(3),
  LOCAL(4)
};

static FUNCTION_INFO i_func_funky_types__spaced_arguments___simplify = {
  t_func_funky_types__spaced_arguments___simplify, NULL, 4, 3,
  {"84_43_self\000", "84_48_state\000", "85_46_result_statements\000"}
};

static TAB_NUM t_func_funky_types__spaced_statement_arguments___simplify[] = {
  4, // locals
  2, // parameters
  LOCAL(2), // 88_53_self
  LOCAL(3), // 88_58_state
  // funky::arguments_of &state $result_statements
  var_funky__arguments_of, 1, LOCAL(2), 1, LOCAL(1),
  // simplify &self.funky::arguments_of &state $result_statements
  var_simplify, 2, LOCAL(1), LOCAL(3), 3, LOCAL(1), LOCAL(3), LOCAL(4),
  // self.funky::arguments_of &state $result_statements
  LET, -1, LOCAL(2), var_funky__arguments_of, LOCAL(1), LOCAL(2),
  // -> self state result_statements
  LET, 3, LOCAL(2), LOCAL(3), LOCAL(4), TAIL_CALL,
  POS(89, 18),
  POS(89, 3),
  POS(89, 13),
  POS(90, 3),
  LOCAL(4),
  LOCAL(3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_funky_types__spaced_statement_arguments___simplify = {
  t_func_funky_types__spaced_statement_arguments___simplify, NULL, 4, 3,
  {"89_46_result_statements\000", "88_58_state\000", "88_53_self\000"}
};

static TAB_NUM t_func_funky_types__arguments___simplify[] = {
  2, // locals
  2, // parameters
  LOCAL(2), // 92_36_self
  var_92_41_state,
  // funky::argument_of &state $result_statements
  var_funky__argument_of, 1, LOCAL(2), 1, LOCAL(1),
  // simplify &self.funky::argument_of &state $result_statements
  var_simplify, 2, LOCAL(1), var_92_41_state, 3, LOCAL(1), var_92_41_state, var_93_45_result_statements,
  // self.funky::argument_of &state $result_statements
  LET, -1, LOCAL(2), var_funky__argument_of, LOCAL(1), LOCAL(2),
  // $new_arguments empty_list
  LET, 1, var_empty_list, 1, var_94_4_new_arguments,
  // arguments_of !state !result_statements
  var_arguments_of, 1, LOCAL(2), 1, LOCAL(1),
  // for_each &self.arguments_of !state !result_statements
  var_for_each, 3, LOCAL(1), lambda_11, lambda_12, 3, LOCAL(1), var_92_41_state, var_93_45_result_statements,
  // self.arguments_of !state !result_statements
  LET, -1, LOCAL(2), var_arguments_of, LOCAL(1), LOCAL(2),
  // -> self state result_statements
  LET, 3, LOCAL(2), var_92_41_state, var_93_45_result_statements, TAIL_CALL,
  POS(93, 18),
  POS(93, 3),
  POS(93, 13),
  POS(94, 3),
  POS(95, 18),
  POS(95, 3),
  POS(95, 13),
  POS(102, 3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_funky_types__arguments___simplify = {
  t_func_funky_types__arguments___simplify, NULL, 8, 1,
  {"92_36_self\000"}
};

static TAB_NUM t_lambda_11[] = {
  2, // locals
  1, // parameters
  LOCAL(1), // 96_8_item
  // simplify &item &state $arguments_result_statements
  var_simplify, 2, LOCAL(1), var_92_41_state, 3, LOCAL(1), var_92_41_state, LOCAL(2),
  // push &new_arguments item
  var_push, 2, var_94_4_new_arguments, LOCAL(1), 1, var_94_4_new_arguments,
  // append &result_statements arguments_result_statements
  var_append, 2, var_93_45_result_statements, LOCAL(2), 1, var_93_45_result_statements,
  // next
  var_next, 0, TAIL_CALL,
  POS(97, 7),
  POS(98, 7),
  POS(99, 7),
  POS(100, 7),
  LOCAL(2),
  LOCAL(1)
};

static FUNCTION_INFO i_lambda_11 = {
  t_lambda_11, NULL, 4, 2,
  {"97_30_arguments_result_statements\000", "96_8_item\000"}
};

static TAB_NUM t_lambda_12[] = {
  0, // locals
  0, // parameters
  //  new_arguments state result_statements
  LET, 3, var_94_4_new_arguments, var_92_41_state, var_93_45_result_statements, TAIL_CALL,
  POS(101, 7)
};

static FUNCTION_INFO i_lambda_12 = {
  t_lambda_12, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_funky_types__even_more_statement_arguments___simplify[] = {
  2, // locals
  2, // parameters
  LOCAL(2), // 104_56_self
  var_104_61_state,
  // funky::argument_of &state $result_statements
  var_funky__argument_of, 1, LOCAL(2), 1, LOCAL(1),
  // simplify &self.funky::argument_of &state $result_statements
  var_simplify, 2, LOCAL(1), var_104_61_state, 3, LOCAL(1), var_104_61_state, var_105_45_result_statements,
  // self.funky::argument_of &state $result_statements
  LET, -1, LOCAL(2), var_funky__argument_of, LOCAL(1), LOCAL(2),
  // $new_arguments empty_list
  LET, 1, var_empty_list, 1, var_106_4_new_arguments,
  // arguments_of !state !result_statements
  var_arguments_of, 1, LOCAL(2), 1, LOCAL(1),
  // for_each &self.arguments_of !state !result_statements
  var_for_each, 3, LOCAL(1), lambda_13, lambda_14, 3, LOCAL(1), var_104_61_state, var_105_45_result_statements,
  // self.arguments_of !state !result_statements
  LET, -1, LOCAL(2), var_arguments_of, LOCAL(1), LOCAL(2),
  // -> self state result_statements
  LET, 3, LOCAL(2), var_104_61_state, var_105_45_result_statements, TAIL_CALL,
  POS(105, 18),
  POS(105, 3),
  POS(105, 13),
  POS(106, 3),
  POS(107, 18),
  POS(107, 3),
  POS(107, 13),
  POS(114, 3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_funky_types__even_more_statement_arguments___simplify = {
  t_func_funky_types__even_more_statement_arguments___simplify, NULL, 8, 1,
  {"104_56_self\000"}
};

static TAB_NUM t_lambda_13[] = {
  2, // locals
  1, // parameters
  LOCAL(1), // 108_8_item
  // simplify &item &state $arguments_result_statements
  var_simplify, 2, LOCAL(1), var_104_61_state, 3, LOCAL(1), var_104_61_state, LOCAL(2),
  // push &new_arguments item
  var_push, 2, var_106_4_new_arguments, LOCAL(1), 1, var_106_4_new_arguments,
  // append &result_statements arguments_result_statements
  var_append, 2, var_105_45_result_statements, LOCAL(2), 1, var_105_45_result_statements,
  // next
  var_next, 0, TAIL_CALL,
  POS(109, 7),
  POS(110, 7),
  POS(111, 7),
  POS(112, 7),
  LOCAL(2),
  LOCAL(1)
};

static FUNCTION_INFO i_lambda_13 = {
  t_lambda_13, NULL, 4, 2,
  {"109_30_arguments_result_statements\000", "108_8_item\000"}
};

static TAB_NUM t_lambda_14[] = {
  0, // locals
  0, // parameters
  //  new_arguments state result_statements
  LET, 3, var_106_4_new_arguments, var_104_61_state, var_105_45_result_statements, TAIL_CALL,
  POS(113, 7)
};

static FUNCTION_INFO i_lambda_14 = {
  t_lambda_14, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_funky_types__remark_and_multiline_function_call___simplify[] = {
  2, // locals
  2, // parameters
  LOCAL(2), // 116_61_self
  var_116_66_state,
  // $result_statements empty_statements
  LET, 1, var_empty_statements, 1, var_117_4_result_statements,
  // $new_arguments empty_list
  LET, 1, var_empty_list, 1, var_118_4_new_arguments,
  // arguments_of !state !result_statements
  var_arguments_of, 1, LOCAL(2), 1, LOCAL(1),
  // for_each &self.arguments_of !state !result_statements
  var_for_each, 3, LOCAL(1), lambda_15, lambda_16, 3, LOCAL(1), var_116_66_state, var_117_4_result_statements,
  // self.arguments_of !state !result_statements
  LET, -1, LOCAL(2), var_arguments_of, LOCAL(1), LOCAL(2),
  // -> self state result_statements
  LET, 3, LOCAL(2), var_116_66_state, var_117_4_result_statements, TAIL_CALL,
  POS(117, 3),
  POS(118, 3),
  POS(119, 18),
  POS(119, 3),
  POS(119, 13),
  POS(126, 3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_funky_types__remark_and_multiline_function_call___simplify = {
  t_func_funky_types__remark_and_multiline_function_call___simplify, NULL, 6, 1,
  {"116_61_self\000"}
};

static TAB_NUM t_lambda_15[] = {
  2, // locals
  1, // parameters
  LOCAL(1), // 120_8_item
  // simplify &item &state $arguments_result_statements
  var_simplify, 2, LOCAL(1), var_116_66_state, 3, LOCAL(1), var_116_66_state, LOCAL(2),
  // push &new_arguments item
  var_push, 2, var_118_4_new_arguments, LOCAL(1), 1, var_118_4_new_arguments,
  // append &result_statements arguments_result_statements
  var_append, 2, var_117_4_result_statements, LOCAL(2), 1, var_117_4_result_statements,
  // next
  var_next, 0, TAIL_CALL,
  POS(121, 7),
  POS(122, 7),
  POS(123, 7),
  POS(124, 7),
  LOCAL(1),
  LOCAL(2)
};

static FUNCTION_INFO i_lambda_15 = {
  t_lambda_15, NULL, 4, 2,
  {"120_8_item\000", "121_30_arguments_result_statements\000"}
};

static TAB_NUM t_lambda_16[] = {
  0, // locals
  0, // parameters
  //  new_arguments state result_statements
  LET, 3, var_118_4_new_arguments, var_116_66_state, var_117_4_result_statements, TAIL_CALL,
  POS(125, 7)
};

static FUNCTION_INFO i_lambda_16 = {
  t_lambda_16, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_funky_types__expression_and_inline_arguments___simplify[] = {
  5, // locals
  2, // parameters
  LOCAL(2), // 128_58_self
  LOCAL(3), // 128_63_state
  // funky::expression_of &state $result_statements
  var_funky__expression_of, 1, LOCAL(2), 1, LOCAL(1),
  // simplify &self.funky::expression_of &state $result_statements
  var_simplify, 2, LOCAL(1), LOCAL(3), 3, LOCAL(1), LOCAL(3), LOCAL(4),
  // self.funky::expression_of &state $result_statements
  LET, -1, LOCAL(2), var_funky__expression_of, LOCAL(1), LOCAL(2),
  // funky::arguments_of &state $arguments_result_statements
  var_funky__arguments_of, 1, LOCAL(2), 1, LOCAL(1),
  // simplify &self.funky::arguments_of &state $arguments_result_statements
  var_simplify, 2, LOCAL(1), LOCAL(3), 3, LOCAL(1), LOCAL(3), LOCAL(5),
  // self.funky::arguments_of &state $arguments_result_statements
  LET, -1, LOCAL(2), var_funky__arguments_of, LOCAL(1), LOCAL(2),
  // append &result_statements arguments_result_statements
  var_append, 2, LOCAL(4), LOCAL(5), 1, LOCAL(4),
  // -> self state result_statements
  LET, 3, LOCAL(2), LOCAL(3), LOCAL(4), TAIL_CALL,
  POS(129, 18),
  POS(129, 3),
  POS(129, 13),
  POS(130, 18),
  POS(130, 3),
  POS(130, 13),
  POS(131, 3),
  POS(132, 3),
  LOCAL(2),
  LOCAL(5),
  LOCAL(3),
  LOCAL(4)
};

static FUNCTION_INFO i_func_funky_types__expression_and_inline_arguments___simplify = {
  t_func_funky_types__expression_and_inline_arguments___simplify, NULL, 8, 4,
  {"128_58_self\000", "130_46_arguments_result_statements\000", "128_63_state\000", "129_47_result_statements\000"}
};

static TAB_NUM t_func_funky_types__some_string_components___simplify[] = {
  2, // locals
  2, // parameters
  LOCAL(2), // 134_49_self
  var_134_54_state,
  // funky::component_of &state $result_statements
  var_funky__component_of, 1, LOCAL(2), 1, LOCAL(1),
  // simplify &self.funky::component_of &state $result_statements
  var_simplify, 2, LOCAL(1), var_134_54_state, 3, LOCAL(1), var_134_54_state, var_135_46_result_statements,
  // self.funky::component_of &state $result_statements
  LET, -1, LOCAL(2), var_funky__component_of, LOCAL(1), LOCAL(2),
  // $new_components empty_list
  LET, 1, var_empty_list, 1, var_136_4_new_components,
  // components_of !state !result_statements
  var_components_of, 1, LOCAL(2), 1, LOCAL(1),
  // for_each &self.components_of !state !result_statements
  var_for_each, 3, LOCAL(1), lambda_17, lambda_18, 3, LOCAL(1), var_134_54_state, var_135_46_result_statements,
  // self.components_of !state !result_statements
  LET, -1, LOCAL(2), var_components_of, LOCAL(1), LOCAL(2),
  // -> self state result_statements
  LET, 3, LOCAL(2), var_134_54_state, var_135_46_result_statements, TAIL_CALL,
  POS(135, 18),
  POS(135, 3),
  POS(135, 13),
  POS(136, 3),
  POS(137, 18),
  POS(137, 3),
  POS(137, 13),
  POS(144, 3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_funky_types__some_string_components___simplify = {
  t_func_funky_types__some_string_components___simplify, NULL, 8, 1,
  {"134_49_self\000"}
};

static TAB_NUM t_lambda_17[] = {
  2, // locals
  1, // parameters
  LOCAL(1), // 138_8_item
  // simplify &item &state $components_result_statements
  var_simplify, 2, LOCAL(1), var_134_54_state, 3, LOCAL(1), var_134_54_state, LOCAL(2),
  // push &new_components item
  var_push, 2, var_136_4_new_components, LOCAL(1), 1, var_136_4_new_components,
  // append &result_statements components_result_statements
  var_append, 2, var_135_46_result_statements, LOCAL(2), 1, var_135_46_result_statements,
  // next
  var_next, 0, TAIL_CALL,
  POS(139, 7),
  POS(140, 7),
  POS(141, 7),
  POS(142, 7),
  LOCAL(1),
  LOCAL(2)
};

static FUNCTION_INFO i_lambda_17 = {
  t_lambda_17, NULL, 4, 2,
  {"138_8_item\000", "139_30_components_result_statements\000"}
};

static TAB_NUM t_lambda_18[] = {
  0, // locals
  0, // parameters
  //  new_components state result_statements
  LET, 3, var_136_4_new_components, var_134_54_state, var_135_46_result_statements, TAIL_CALL,
  POS(143, 7)
};

static FUNCTION_INFO i_lambda_18 = {
  t_lambda_18, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_funky_types__some_string_line_components___simplify[] = {
  2, // locals
  2, // parameters
  LOCAL(2), // 146_54_self
  var_146_59_state,
  // funky::component_of &state $result_statements
  var_funky__component_of, 1, LOCAL(2), 1, LOCAL(1),
  // simplify &self.funky::component_of &state $result_statements
  var_simplify, 2, LOCAL(1), var_146_59_state, 3, LOCAL(1), var_146_59_state, var_147_46_result_statements,
  // self.funky::component_of &state $result_statements
  LET, -1, LOCAL(2), var_funky__component_of, LOCAL(1), LOCAL(2),
  // $new_components empty_list
  LET, 1, var_empty_list, 1, var_148_4_new_components,
  // components_of !state !result_statements
  var_components_of, 1, LOCAL(2), 1, LOCAL(1),
  // for_each &self.components_of !state !result_statements
  var_for_each, 3, LOCAL(1), lambda_19, lambda_20, 3, LOCAL(1), var_146_59_state, var_147_46_result_statements,
  // self.components_of !state !result_statements
  LET, -1, LOCAL(2), var_components_of, LOCAL(1), LOCAL(2),
  // -> self state result_statements
  LET, 3, LOCAL(2), var_146_59_state, var_147_46_result_statements, TAIL_CALL,
  POS(147, 18),
  POS(147, 3),
  POS(147, 13),
  POS(148, 3),
  POS(149, 18),
  POS(149, 3),
  POS(149, 13),
  POS(156, 3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_funky_types__some_string_line_components___simplify = {
  t_func_funky_types__some_string_line_components___simplify, NULL, 8, 1,
  {"146_54_self\000"}
};

static TAB_NUM t_lambda_19[] = {
  2, // locals
  1, // parameters
  LOCAL(1), // 150_8_item
  // simplify &item &state $components_result_statements
  var_simplify, 2, LOCAL(1), var_146_59_state, 3, LOCAL(1), var_146_59_state, LOCAL(2),
  // push &new_components item
  var_push, 2, var_148_4_new_components, LOCAL(1), 1, var_148_4_new_components,
  // append &result_statements components_result_statements
  var_append, 2, var_147_46_result_statements, LOCAL(2), 1, var_147_46_result_statements,
  // next
  var_next, 0, TAIL_CALL,
  POS(151, 7),
  POS(152, 7),
  POS(153, 7),
  POS(154, 7),
  LOCAL(1),
  LOCAL(2)
};

static FUNCTION_INFO i_lambda_19 = {
  t_lambda_19, NULL, 4, 2,
  {"150_8_item\000", "151_30_components_result_statements\000"}
};

static TAB_NUM t_lambda_20[] = {
  0, // locals
  0, // parameters
  //  new_components state result_statements
  LET, 3, var_148_4_new_components, var_146_59_state, var_147_46_result_statements, TAIL_CALL,
  POS(155, 7)
};

static FUNCTION_INFO i_lambda_20 = {
  t_lambda_20, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_funky_types__statements___simplify[] = {
  2, // locals
  2, // parameters
  LOCAL(2), // 158_37_self
  var_158_42_state,
  // $result_statements empty_statements
  LET, 1, var_empty_statements, 1, var_159_4_result_statements,
  // $new_statement empty_list
  LET, 1, var_empty_list, 1, var_160_4_new_statement,
  // statement_of !state !result_statements
  var_statement_of, 1, LOCAL(2), 1, LOCAL(1),
  // for_each &self.statement_of !state !result_statements
  var_for_each, 3, LOCAL(1), lambda_21, lambda_22, 3, LOCAL(1), var_158_42_state, var_159_4_result_statements,
  // self.statement_of !state !result_statements
  LET, -1, LOCAL(2), var_statement_of, LOCAL(1), LOCAL(2),
  // -> self state result_statements
  LET, 3, LOCAL(2), var_158_42_state, var_159_4_result_statements, TAIL_CALL,
  POS(159, 3),
  POS(160, 3),
  POS(161, 18),
  POS(161, 3),
  POS(161, 13),
  POS(168, 3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_funky_types__statements___simplify = {
  t_func_funky_types__statements___simplify, NULL, 6, 1,
  {"158_37_self\000"}
};

static TAB_NUM t_lambda_21[] = {
  2, // locals
  1, // parameters
  LOCAL(1), // 162_8_item
  // simplify &item &state $statement_result_statements
  var_simplify, 2, LOCAL(1), var_158_42_state, 3, LOCAL(1), var_158_42_state, LOCAL(2),
  // push &new_statement item
  var_push, 2, var_160_4_new_statement, LOCAL(1), 1, var_160_4_new_statement,
  // append &result_statements statement_result_statements
  var_append, 2, var_159_4_result_statements, LOCAL(2), 1, var_159_4_result_statements,
  // next
  var_next, 0, TAIL_CALL,
  POS(163, 7),
  POS(164, 7),
  POS(165, 7),
  POS(166, 7),
  LOCAL(1),
  LOCAL(2)
};

static FUNCTION_INFO i_lambda_21 = {
  t_lambda_21, NULL, 4, 2,
  {"162_8_item\000", "163_30_statement_result_statements\000"}
};

static TAB_NUM t_lambda_22[] = {
  0, // locals
  0, // parameters
  //  new_statement state result_statements
  LET, 3, var_160_4_new_statement, var_158_42_state, var_159_4_result_statements, TAIL_CALL,
  POS(167, 7)
};

static FUNCTION_INFO i_lambda_22 = {
  t_lambda_22, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_funky_types__one_or_more_inline_parameters___simplify[] = {
  5, // locals
  2, // parameters
  LOCAL(2), // 170_56_self
  LOCAL(3), // 170_61_state
  // funky::parameter_of &state $result_statements
  var_funky__parameter_of, 1, LOCAL(2), 1, LOCAL(1),
  // simplify &self.funky::parameter_of &state $result_statements
  var_simplify, 2, LOCAL(1), LOCAL(3), 3, LOCAL(1), LOCAL(3), LOCAL(4),
  // self.funky::parameter_of &state $result_statements
  LET, -1, LOCAL(2), var_funky__parameter_of, LOCAL(1), LOCAL(2),
  // funky::parameters_of &state $parameters_result_statements
  var_funky__parameters_of, 1, LOCAL(2), 1, LOCAL(1),
  // simplify &self.funky::parameters_of &state $parameters_result_statements
  var_simplify, 2, LOCAL(1), LOCAL(3), 3, LOCAL(1), LOCAL(3), LOCAL(5),
  // self.funky::parameters_of &state $parameters_result_statements
  LET, -1, LOCAL(2), var_funky__parameters_of, LOCAL(1), LOCAL(2),
  // append &result_statements parameters_result_statements
  var_append, 2, LOCAL(4), LOCAL(5), 1, LOCAL(4),
  // -> self state result_statements
  LET, 3, LOCAL(2), LOCAL(3), LOCAL(4), TAIL_CALL,
  POS(171, 18),
  POS(171, 3),
  POS(171, 13),
  POS(172, 18),
  POS(172, 3),
  POS(172, 13),
  POS(173, 3),
  POS(174, 3),
  LOCAL(2),
  LOCAL(3),
  LOCAL(4),
  LOCAL(5)
};

static FUNCTION_INFO i_func_funky_types__one_or_more_inline_parameters___simplify = {
  t_func_funky_types__one_or_more_inline_parameters___simplify, NULL, 8, 4,
  {"170_56_self\000", "170_61_state\000", "171_46_result_statements\000", "172_47_parameters_result_statements\000"}
};

static TAB_NUM t_func_funky_types__open_parameters___simplify[] = {
  2, // locals
  2, // parameters
  LOCAL(2), // 176_42_self
  var_176_47_state,
  // $result_statements empty_statements
  LET, 1, var_empty_statements, 1, var_177_4_result_statements,
  // $new_parameter empty_list
  LET, 1, var_empty_list, 1, var_178_4_new_parameter,
  // parameter_of !state !result_statements
  var_parameter_of, 1, LOCAL(2), 1, LOCAL(1),
  // for_each &self.parameter_of !state !result_statements
  var_for_each, 3, LOCAL(1), lambda_23, lambda_24, 3, LOCAL(1), var_176_47_state, var_177_4_result_statements,
  // self.parameter_of !state !result_statements
  LET, -1, LOCAL(2), var_parameter_of, LOCAL(1), LOCAL(2),
  // -> self state result_statements
  LET, 3, LOCAL(2), var_176_47_state, var_177_4_result_statements, TAIL_CALL,
  POS(177, 3),
  POS(178, 3),
  POS(179, 18),
  POS(179, 3),
  POS(179, 13),
  POS(186, 3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_funky_types__open_parameters___simplify = {
  t_func_funky_types__open_parameters___simplify, NULL, 6, 1,
  {"176_42_self\000"}
};

static TAB_NUM t_lambda_23[] = {
  2, // locals
  1, // parameters
  LOCAL(1), // 180_8_item
  // simplify &item &state $parameter_result_statements
  var_simplify, 2, LOCAL(1), var_176_47_state, 3, LOCAL(1), var_176_47_state, LOCAL(2),
  // push &new_parameter item
  var_push, 2, var_178_4_new_parameter, LOCAL(1), 1, var_178_4_new_parameter,
  // append &result_statements parameter_result_statements
  var_append, 2, var_177_4_result_statements, LOCAL(2), 1, var_177_4_result_statements,
  // next
  var_next, 0, TAIL_CALL,
  POS(181, 7),
  POS(182, 7),
  POS(183, 7),
  POS(184, 7),
  LOCAL(2),
  LOCAL(1)
};

static FUNCTION_INFO i_lambda_23 = {
  t_lambda_23, NULL, 4, 2,
  {"181_30_parameter_result_statements\000", "180_8_item\000"}
};

static TAB_NUM t_lambda_24[] = {
  0, // locals
  0, // parameters
  //  new_parameter state result_statements
  LET, 3, var_178_4_new_parameter, var_176_47_state, var_177_4_result_statements, TAIL_CALL,
  POS(185, 7)
};

static FUNCTION_INFO i_lambda_24 = {
  t_lambda_24, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_funky_types__initial_value___simplify[] = {
  4, // locals
  2, // parameters
  LOCAL(2), // 188_40_self
  LOCAL(3), // 188_45_state
  // funky::operand_of &state $result_statements
  var_funky__operand_of, 1, LOCAL(2), 1, LOCAL(1),
  // simplify &self.funky::operand_of &state $result_statements
  var_simplify, 2, LOCAL(1), LOCAL(3), 3, LOCAL(1), LOCAL(3), LOCAL(4),
  // self.funky::operand_of &state $result_statements
  LET, -1, LOCAL(2), var_funky__operand_of, LOCAL(1), LOCAL(2),
  // -> self state result_statements
  LET, 3, LOCAL(2), LOCAL(3), LOCAL(4), TAIL_CALL,
  POS(189, 18),
  POS(189, 3),
  POS(189, 13),
  POS(190, 3),
  LOCAL(2),
  LOCAL(3),
  LOCAL(4)
};

static FUNCTION_INFO i_func_funky_types__initial_value___simplify = {
  t_func_funky_types__initial_value___simplify, NULL, 4, 3,
  {"188_40_self\000", "188_45_state\000", "189_44_result_statements\000"}
};

static FUNKY_CONSTANT constants_table[] = {
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__undefined___simplify}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_funky_types__node___simplify}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_funky_types__identifier_and_expression___simplify}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_funky_types__simple_expression___simplify}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_funky_types__function_call_extension___simplify}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_1}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_2}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_funky_types__attribute_access_extension___simplify}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_3}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_4}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_funky_types__inline_function_call_extension___simplify}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_5}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_6}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_funky_types__inline_attribute_access_extension___simplify}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_7}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_8}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_funky_types__function_call___simplify}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_9}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_10}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_funky_types__spaced_arguments___simplify}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_funky_types__spaced_statement_arguments___simplify}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_funky_types__arguments___simplify}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_11}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_12}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_funky_types__even_more_statement_arguments___simplify}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_13}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_14}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_funky_types__remark_and_multiline_function_call___simplify}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_15}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_16}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_funky_types__expression_and_inline_arguments___simplify}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_funky_types__some_string_components___simplify}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_17}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_18}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_funky_types__some_string_line_components___simplify}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_19}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_20}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_funky_types__statements___simplify}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_21}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_22}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_funky_types__one_or_more_inline_parameters___simplify}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_funky_types__open_parameters___simplify}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_23}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_24}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_funky_types__initial_value___simplify}}
};

static ATTRIBUTE_DEFINITION std_types__undefined__attributes[] = {
  {var_simplify, -func_std_types__undefined___simplify}
};

static ATTRIBUTE_DEFINITION funky_types__node__attributes[] = {
  {var_simplify, -func_funky_types__node___simplify}
};

static ATTRIBUTE_DEFINITION funky_types__identifier_and_expression__attributes[] = {
  {var_simplify, -func_funky_types__identifier_and_expression___simplify}
};

static ATTRIBUTE_DEFINITION funky_types__simple_expression__attributes[] = {
  {var_simplify, -func_funky_types__simple_expression___simplify}
};

static ATTRIBUTE_DEFINITION funky_types__function_call_extension__attributes[] = {
  {var_simplify, -func_funky_types__function_call_extension___simplify}
};

static ATTRIBUTE_DEFINITION funky_types__attribute_access_extension__attributes[] = {
  {var_simplify, -func_funky_types__attribute_access_extension___simplify}
};

static ATTRIBUTE_DEFINITION funky_types__inline_function_call_extension__attributes[] = {
  {var_simplify, -func_funky_types__inline_function_call_extension___simplify}
};

static ATTRIBUTE_DEFINITION funky_types__inline_attribute_access_extension__attributes[] = {
  {var_simplify, -func_funky_types__inline_attribute_access_extension___simplify}
};

static ATTRIBUTE_DEFINITION funky_types__function_call__attributes[] = {
  {var_simplify, -func_funky_types__function_call___simplify}
};

static ATTRIBUTE_DEFINITION funky_types__spaced_arguments__attributes[] = {
  {var_simplify, -func_funky_types__spaced_arguments___simplify}
};

static ATTRIBUTE_DEFINITION funky_types__spaced_statement_arguments__attributes[] = {
  {var_simplify, -func_funky_types__spaced_statement_arguments___simplify}
};

static ATTRIBUTE_DEFINITION funky_types__arguments__attributes[] = {
  {var_simplify, -func_funky_types__arguments___simplify}
};

static ATTRIBUTE_DEFINITION funky_types__even_more_statement_arguments__attributes[] = {
  {var_simplify, -func_funky_types__even_more_statement_arguments___simplify}
};

static ATTRIBUTE_DEFINITION funky_types__remark_and_multiline_function_call__attributes[] = {
  {var_simplify, -func_funky_types__remark_and_multiline_function_call___simplify}
};

static ATTRIBUTE_DEFINITION funky_types__expression_and_inline_arguments__attributes[] = {
  {var_simplify, -func_funky_types__expression_and_inline_arguments___simplify}
};

static ATTRIBUTE_DEFINITION funky_types__some_string_components__attributes[] = {
  {var_simplify, -func_funky_types__some_string_components___simplify}
};

static ATTRIBUTE_DEFINITION funky_types__some_string_line_components__attributes[] = {
  {var_simplify, -func_funky_types__some_string_line_components___simplify}
};

static ATTRIBUTE_DEFINITION funky_types__statements__attributes[] = {
  {var_simplify, -func_funky_types__statements___simplify}
};

static ATTRIBUTE_DEFINITION funky_types__one_or_more_inline_parameters__attributes[] = {
  {var_simplify, -func_funky_types__one_or_more_inline_parameters___simplify}
};

static ATTRIBUTE_DEFINITION funky_types__open_parameters__attributes[] = {
  {var_simplify, -func_funky_types__open_parameters___simplify}
};

static ATTRIBUTE_DEFINITION funky_types__initial_value__attributes[] = {
  {var_simplify, -func_funky_types__initial_value___simplify}
};

static FUNKY_VARIABLE variables_table[] = {
  {
    FOT_UNKNOWN, 0, 1,
    "undefined\000std_types", std_types__undefined__attributes,
    {.position = POS(10, 1)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "simplify\000", NULL,
    {.position = POS(10, 23)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_statements\000", NULL,
    {.position = POS(11, 17)}
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
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "expression_of\000funky", NULL,
    {.position = POS(17, 18)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "simple_expression\000funky_types", funky_types__simple_expression__attributes,
    {.position = POS(20, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "function_call_extension\000funky_types", funky_types__function_call_extension__attributes,
    {.position = POS(24, 1)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "24_55_state\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "call_of\000funky", NULL,
    {.position = POS(25, 18)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "25_41_result_statements\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "26_4_new_extensions\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_list\000", NULL,
    {.position = POS(26, 19)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "extensions_of\000", NULL,
    {.position = POS(27, 18)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "push\000", NULL,
    {.position = POS(30, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "append\000", NULL,
    {.position = POS(31, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "next\000", NULL,
    {.position = POS(32, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "for_each\000", NULL,
    {.position = POS(27, 3)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "attribute_access_extension\000funky_types", funky_types__attribute_access_extension__attributes,
    {.position = POS(36, 1)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "36_58_state\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "access_of\000funky", NULL,
    {.position = POS(37, 18)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "37_43_result_statements\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "38_4_new_extensions\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 1,
    "inline_function_call_extension\000funky_types", funky_types__inline_function_call_extension__attributes,
    {.position = POS(48, 1)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "48_62_state\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "49_41_result_statements\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "50_4_new_extensions\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 1,
    "inline_attribute_access_extension\000funky_types", funky_types__inline_attribute_access_extension__attributes,
    {.position = POS(60, 1)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "60_65_state\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "61_43_result_statements\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "62_4_new_extensions\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 1,
    "function_call\000funky_types", funky_types__function_call__attributes,
    {.position = POS(72, 1)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "72_45_state\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "73_4_result_statements\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "74_4_new_arguments\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "arguments_of\000", NULL,
    {.position = POS(75, 18)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "spaced_arguments\000funky_types", funky_types__spaced_arguments__attributes,
    {.position = POS(84, 1)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "arguments_of\000funky", NULL,
    {.position = POS(85, 18)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "spaced_statement_arguments\000funky_types", funky_types__spaced_statement_arguments__attributes,
    {.position = POS(88, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "arguments\000funky_types", funky_types__arguments__attributes,
    {.position = POS(92, 1)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "92_41_state\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "argument_of\000funky", NULL,
    {.position = POS(93, 18)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "93_45_result_statements\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "94_4_new_arguments\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 1,
    "even_more_statement_arguments\000funky_types", funky_types__even_more_statement_arguments__attributes,
    {.position = POS(104, 1)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "104_61_state\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "105_45_result_statements\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "106_4_new_arguments\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 1,
    "remark_and_multiline_function_call\000funky_types", funky_types__remark_and_multiline_function_call__attributes,
    {.position = POS(116, 1)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "116_66_state\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "117_4_result_statements\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "118_4_new_arguments\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 1,
    "expression_and_inline_arguments\000funky_types", funky_types__expression_and_inline_arguments__attributes,
    {.position = POS(128, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "some_string_components\000funky_types", funky_types__some_string_components__attributes,
    {.position = POS(134, 1)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "134_54_state\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "component_of\000funky", NULL,
    {.position = POS(135, 18)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "135_46_result_statements\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "136_4_new_components\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "components_of\000", NULL,
    {.position = POS(137, 18)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "some_string_line_components\000funky_types", funky_types__some_string_line_components__attributes,
    {.position = POS(146, 1)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "146_59_state\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "147_46_result_statements\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "148_4_new_components\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 1,
    "statements\000funky_types", funky_types__statements__attributes,
    {.position = POS(158, 1)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "158_42_state\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "159_4_result_statements\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "160_4_new_statement\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "statement_of\000", NULL,
    {.position = POS(161, 18)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "one_or_more_inline_parameters\000funky_types", funky_types__one_or_more_inline_parameters__attributes,
    {.position = POS(170, 1)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "parameter_of\000funky", NULL,
    {.position = POS(171, 18)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "parameters_of\000funky", NULL,
    {.position = POS(172, 18)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "open_parameters\000funky_types", funky_types__open_parameters__attributes,
    {.position = POS(176, 1)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "176_47_state\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "177_4_result_statements\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "178_4_new_parameter\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "parameter_of\000", NULL,
    {.position = POS(179, 18)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "initial_value\000funky_types", funky_types__initial_value__attributes,
    {.position = POS(188, 1)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "operand_of\000funky", NULL,
    {.position = POS(189, 18)}
  }
};

static FUNKY_NAMESPACE used_namespaces[] = {
  {"std", 1, 0},
  {"funky", 1, 0}
};

FUNKY_MODULE module__simplify_autogen = {
  "_simplify_autogen", // module name
  "simplify_autogen.fky", // module filename
  .major_version = 0,
  .minor_version = 0,
  .feature_flags = FEAT_POSITIONS|FEAT_FUNCTION_INFO,
  .marker = 0,
  0, // number of required modules
  0, // number of defined namespaces
  2, // number of used namespaces
  45, // number of constants
  79, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  constants_table,
  variables_table,
};
