#include <stddef.h>
#include <stdint.h>

#include "runtime/common.h"
#include "runtime/builtins.h"
#include "runtime/fko.h"
#include "runtime/memory.h"

enum {
  num_0 = -1,
  uni_funky__BUILTIN = -2,
  uni_funky__CONSTANT = -3,
  uni_funky__CONSTANT_COMPOUND = -4,
  uni_funky__DERIVED = -5,
  uni_funky__DYNAMIC = -6,
  uni_funky__EXTERN = -7,
  uni_funky__EXTERN_POLYMORPHIC = -8,
  uni_funky__INITIALIZED = -9,
  uni_funky__INITIALIZED_COMPOUND = -10,
  uni_funky__LOCAL = -11,
  uni_funky__TEMPORARY = -12,
  uni_funky__TOP_LEVEL = -13,
  uni_funky__MULTI_LEVEL = -14,
  num_1 = -15,
  num_2 = -16,
  num_3 = -17,
  num_4 = -18,
  num_8 = -19,
  num_0xc = -20,
  num_0x10 = -21,
  func_std_types__list___collect_variables = -22,
  func_funky_types__body___collect_variables = -23,
  func_funky_types__statement___collect_variables = -24,
  lambda_identifier_ofhead_is_a_builtin_function_name = -25,
  lambda_1 = -26,
  lambda_2 = -27,
  lambda_3 = -28,
  lambda_4 = -29,
  lambda_5 = -30,
  lambda_6 = -31,
  lambda_7 = -32,
  lambda_8 = -33,
  lambda_9 = -34,
  func_collect_statement = -35,
  func_funky_types__definition___collect_variables = -36,
  lambda_10 = -37,
  lambda_11 = -38,
  chr_46 = -39,
  chr_47 = -40,
  sequence_191_12 = -41,
  lambda_12 = -42,
  lambda_13 = -43,
  func_collect_parameter = -44,
  func_funky_types__redefinition___collect_variables = -45,
  lambda_14 = -46,
  lambda_15 = -47,
  lambda_16 = -48,
  lambda_17 = -49,
  func_funky_types__update___collect_variables = -50,
  lambda_18 = -51,
  lambda_19 = -52,
  lambda_20 = -53,
  lambda_21 = -54,
  func_funky_types__functor___collect_variables = -55,
  lambda_22 = -56,
  lambda_23 = -57,
  func_funky_types__pair___collect_variables = -58,
  func_collect_inline_pair = -59,
  func_funky__merge_variables = -60,
  lambda_24 = -61,
  lambda_25 = -62,
  lambda_26 = -63,
  lambda_27 = -64,
  lambda_28 = -65,
  lambda_29 = -66,
  lambda_30 = -67,
  lambda_31 = -68,
  lambda_32 = -69,
  lambda_33 = -70,
  lambda_34 = -71,
  lambda_35 = -72,
  lambda_36 = -73,
  lambda_37 = -74,
  func_funky__categorize_variables = -75,
  lambda_38 = -76,
  lambda_39 = -77,
  lambda_40 = -78,
  func_categorize = -79,
  lambda_41 = -80,
  str_Object_with_slot = -81,
  lambda_42 = -82,
  lambda_43 = -83,
  lambda_44 = -84,
  chr_95 = -85,
  lambda_45 = -86,
  chr_58 = -87,
  lambda_46 = -88,
  str_Unused_variable = -89,
  lambda_definition_is_defined = -90,
  lambda_47 = -91,
  lambda_48 = -92,
  lambda_49 = -93,
  lambda_50 = -94,
  lambda_arguments_are_constant = -95,
  lambda_51 = -96,
  lambda_52 = -97,
  string_1 = -98,
  str_assign = -99,
  lambda_53 = -100,
  lambda_54 = -101,
  lambda_55 = -102,
  lambda_56 = -103,
  lambda_57 = -104,
  lambda_58 = -105,
  lambda_59 = -106,
  lambda_60 = -107,
  lambda_61 = -108,
  lambda_62 = -109,
  lambda_63 = -110,
  lambda_64 = -111,
  lambda_65 = -112,
  lambda_66 = -113,
  lambda_67 = -114,
  lambda_68 = -115,
  lambda_69 = -116,
  lambda_70 = -117,
  lambda_71 = -118,
  lambda_72 = -119,
  lambda_73 = -120,
  string_2 = -121,
  string_3 = -122,
  lambda_74 = -123,
  lambda_75 = -124,
  lambda_76 = -125,
  lambda_77 = -126,
  lambda_78 = -127,
  lambda_79 = -128,
  lambda_80 = -129,
  lambda_81 = -130,
  lambda_82 = -131,
  lambda_83 = -132,
  func_local_or_dynamic = -133,
  lambda_84 = -134,
  lambda_85 = -135,
  lambda_86 = -136,
  func_check_arguments = -137,
  lambda_87 = -138,
  lambda_88 = -139,
  lambda_89 = -140,
  lambda_90 = -141,
  lambda_91 = -142,
  lambda_92 = -143,
  lambda_93 = -144,
  lambda_info_is_defined = -145,
  lambda_94 = -146,
  func_check_new_info = -147,
  lambda_95 = -148,
  lambda_96 = -149,
  lambda_97 = -150,
  lambda_98 = -151,
  lambda_99 = -152,
  func_get_key = -153,
  lambda_100 = -154,
  lambda_FUNCTOR = -155,
  lambda_101 = -156,
  str_ext = -157,
  lambda_102 = -158,
  lambda_103 = -159,
  str_attr = -160,
  lambda_104 = -161,
  lambda_105 = -162
};

enum {
  var__START = FIRST_VAR-1,
  var_funky__collect_variables, // attribute
  var_std__assign, // extern
  var_current_level, // initialized
  var_funky__BUILTIN, // initialized
  var_funky__CONSTANT, // initialized
  var_funky__CONSTANT_COMPOUND, // initialized
  var_funky__DERIVED, // initialized
  var_funky__DYNAMIC, // initialized
  var_funky__EXTERN, // initialized
  var_funky__EXTERN_POLYMORPHIC, // initialized
  var_funky__INITIALIZED, // initialized
  var_funky__INITIALIZED_COMPOUND, // initialized
  var_funky__LOCAL, // initialized
  var_funky__TEMPORARY, // initialized
  var_funky__TOP_LEVEL, // initialized
  var_funky__MULTI_LEVEL, // initialized
  var_funky__USED, // initialized
  var_funky__POLYMORPHIC, // initialized
  var_funky__USED_POLYMORPHIC, // initialized
  var_funky__REDEFINED, // initialized
  var_funky__ON_TOP_LEVEL, // initialized
  var_funky__REDEFINED_ON_TOP_LEVEL, // initialized
  var_funky__HAS_SLOTS, // initialized
  var_std_types__list, // extern
  var_collect_variables, // extern polymorphic
  var_merge_variables, // extern
  var_empty_insert_order_table, // extern
  var_map_reduce, // extern
  var_funky_types__body, // extern
  var_false, // extern
  var_on_top_level, // extern
  var_inc, // extern
  var_parameters_of, // extern
  var_statements_of, // extern
  var_funky_types__statement, // extern
  var_132_45_self, // dynamic
  var_133_4_head, // dynamic
  var_head_of, // extern
  var_134_4_arguments, // dynamic
  var_arguments_of, // extern
  var_identifier_of, // extern
  var_is_a_builtin_function_name, // extern
  var_137_15_destinations, // dynamic
  var_137_29_rest, // dynamic
  var_137_46_argument, // dynamic
  var_138_10_node_type, // dynamic
  var_node_type_of, // extern
  var_DEFINITION, // extern
  var_std__equal, // extern
  var_REDEFINITION, // extern
  var_kind_of, // extern
  var_TEMPORARY, // extern
  var_std__and, // extern
  var_std__or, // extern
  var_filter, // extern
  var_length_of, // extern
  var_ATTRIBUTE_VALUE_PAIR, // extern
  var_METHOD_VALUE_PAIR, // extern
  var_TYPE_FUNCTION, // extern
  var_USED, // extern
  var_HAS_SLOTS, // extern
  var_std__bit_or, // extern
  var_undefined, // extern
  var_tuple, // extern
  var_std__key_value_pair, // extern
  var_insert_order_table, // extern
  var_push, // extern
  var_if, // extern
  var_funky_types__definition, // extern
  var_182_46_self, // dynamic
  var_183_4_identifier, // dynamic
  var_is_a_digit, // extern
  var_std__plus, // extern
  var_source_position_of, // extern
  var_std__sequence, // extern
  var_case, // extern
  var_funky_types__parameter, // extern
  var_funky_types__inline_parameter, // extern
  var_funky__name_of, // extern
  var_option_of, // extern
  var_funky_types__redefinition, // extern
  var_208_48_self, // dynamic
  var_REDEFINED_ON_TOP_LEVEL, // extern
  var_REDEFINED, // extern
  var_funky_types__update, // extern
  var_226_42_self, // dynamic
  var_funky_types__functor, // extern
  var_246_43_self, // dynamic
  var_BUILTIN, // extern
  var_funky_types__pair, // extern
  var_USED_POLYMORPHIC, // extern
  var_argument_of, // extern
  var_funky_types__inline_attribute_value_pair, // extern
  var_funky_types__inline_method_value_pair, // extern
  var_expression_of, // extern
  var_funky__merge_variables, // initialized
  var_271_16_left_definition, // dynamic
  var_271_33_left_use, // dynamic
  var_271_43_left_level, // dynamic
  var_272_17_right_definition, // dynamic
  var_272_35_right_use, // dynamic
  var_272_46_right_level, // dynamic
  var_is_defined, // extern
  var_TOP_LEVEL, // extern
  var_MULTI_LEVEL, // extern
  var_merge, // extern
  var_funky__categorize_variables, // initialized
  var_295_32_variables, // dynamic
  var_296_4_new_variables, // dynamic
  var_298_8_name, // dynamic
  var_298_13_info, // dynamic
  var_next, // extern
  var_for_each, // extern
  var_307_17_name, // dynamic
  var_308_11_definition, // dynamic
  var_308_23_use, // dynamic
  var_308_28_level, // dynamic
  var_308_35_flags, // dynamic
  var_std__bit_and, // extern
  var_syntax_error, // extern
  var_on, // extern
  var_allow_unused, // extern
  var_not, // extern
  var_std__not, // extern
  var_contains, // extern
  var_329_10_node_type, // dynamic
  var_INLINE_PARAMETER, // extern
  var_PARAMETER, // extern
  var_338_14_arguments, // dynamic
  var_343_18_first_argument, // dynamic
  var_344_18_node_type_of_first_argument, // dynamic
  var_ATTRIBUTE, // extern
  var_ATTRIBUTE_WITH_SETTER, // extern
  var_349_22_func, // dynamic
  var_truncate_until, // extern
  var_353_26_value, // dynamic
  var_FUNCTOR, // extern
  var_EXTERN, // extern
  var_DERIVED, // extern
  var_366_38_new_info, // dynamic
  var_first, // extern
  var_INITIALIZED_COMPOUND, // extern
  var_second, // extern
  var_INITIALIZED, // extern
  var_CONSTANT, // extern
  var_std__minus, // extern
  var_append, // extern
  var_string, // extern
  var_funky__key_of, // extern polymorphic
  var_CONSTANT_COMPOUND, // extern
  var_POLYMORPHIC, // extern
  var_EXTERN_POLYMORPHIC, // extern
  var_is_an_integer, // extern
  var_LOCAL, // extern
  var_DYNAMIC, // extern
  var_434_32_level, // dynamic
  var_436_10_argument, // dynamic
  var_447_18_identifier, // dynamic
  var_448_18_new_info, // dynamic
  var_453_22_info, // dynamic
  var_sequence, // extern
  var_true, // extern
  var_480_14_node, // dynamic
  var_std__string, // extern
  var_489_25_value, // dynamic
  var__END
};


static TAB_NUM t_func_std_types__list___collect_variables[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 119_38_self
  // map_reduce self collect_variables merge_variables empty_insert_order_table
  var_map_reduce, 4, LOCAL(1), var_collect_variables, var_merge_variables, var_empty_insert_order_table, TAIL_CALL,
  POS(120, 3),
  LOCAL(1)
};

static FUNCTION_INFO i_func_std_types__list___collect_variables = {
  t_func_std_types__list___collect_variables, NULL, 1, 1,
  {"119_38_self\000"}
};

static TAB_NUM t_func_funky_types__body___collect_variables[] = {
  4, // locals
  1, // parameters
  LOCAL(2), // 122_40_self
  // !on_top_level false
  LET, 1, var_false, 1, var_on_top_level,
  // inc &current_level
  var_inc, 1, var_current_level, 1, var_current_level,
  // parameters_of(self) $result_insert_order_table
  var_parameters_of, 1, LOCAL(2), 1, LOCAL(1),
  // map_reduce parameters_of(self) $result_insert_order_table
  var_map_reduce, 4, LOCAL(1), var_collect_variables, var_merge_variables, var_empty_insert_order_table, 1, LOCAL(3),
  // statements_of(self) $statements_result_insert_order_table
  var_statements_of, 1, LOCAL(2), 1, LOCAL(1),
  // map_reduce statements_of(self) $statements_result_insert_order_table
  var_map_reduce, 4, LOCAL(1), var_collect_variables, var_merge_variables, var_empty_insert_order_table, 1, LOCAL(4),
  // merge_variables &result_insert_order_table statements_result_insert_order_table
  var_merge_variables, 2, LOCAL(3), LOCAL(4), 1, LOCAL(3),
  // -> result_insert_order_table
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(123, 3),
  POS(124, 3),
  POS(125, 14),
  POS(125, 3),
  POS(127, 14),
  POS(127, 3),
  POS(129, 3),
  POS(130, 3),
  LOCAL(4),
  LOCAL(3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_funky_types__body___collect_variables = {
  t_func_funky_types__body___collect_variables, NULL, 8, 3,
  {"127_35_statements_result_insert_order_table\000", "125_35_result_insert_order_table\000", "122_40_self\000"}
};

static TAB_NUM t_func_funky_types__statement___collect_variables[] = {
  2, // locals
  1, // parameters
  var_132_45_self,
  // $head head_of(self)
  var_head_of, 1, var_132_45_self, 1, var_133_4_head,
  // $arguments arguments_of(self)
  var_arguments_of, 1, var_132_45_self, 1, var_134_4_arguments,
  // identifier_of(head).is_a_builtin_function_name:
  var_identifier_of, 1, var_133_4_head, 1, LOCAL(1),
  // is_a_builtin_function_name:
  var_is_a_builtin_function_name, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_identifier_ofhead_is_a_builtin_function_name, func_collect_statement, TAIL_CALL,
  POS(133, 3),
  POS(134, 3),
  POS(136, 5),
  POS(136, 25),
  POS(135, 3)
};

static FUNCTION_INFO i_func_funky_types__statement___collect_variables = {
  t_func_funky_types__statement___collect_variables, NULL, 5, 0,
  {}
};

static TAB_NUM t_lambda_identifier_ofhead_is_a_builtin_function_name[] = {
  3, // locals
  0, // parameters
  // filter $destinations $rest arguments: (argument)
  var_filter, 2, var_134_4_arguments, lambda_1, 2, var_137_15_destinations, var_137_29_rest,
  // length_of(rest) == 1
  var_length_of, 1, var_137_29_rest, 1, LOCAL(1),
  // length_of(rest) == 1
  var_std__equal, 2, LOCAL(1), num_1, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_4, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_7, lambda_8, TAIL_CALL,
  POS(137, 7),
  POS(145, 11),
  POS(145, 11),
  POS(144, 11),
  POS(143, 7)
};

static FUNCTION_INFO i_lambda_identifier_ofhead_is_a_builtin_function_name = {
  t_lambda_identifier_ofhead_is_a_builtin_function_name, NULL, 5, 0,
  {}
};

static TAB_NUM t_lambda_1[] = {
  2, // locals
  1, // parameters
  var_137_46_argument,
  // $node_type node_type_of(argument)
  var_node_type_of, 1, var_137_46_argument, 1, var_138_10_node_type,
  // node_type == DEFINITION
  var_std__equal, 2, var_138_10_node_type, var_DEFINITION, 1, LOCAL(1),
  // 
  var_std__or, 2, LOCAL(1), lambda_2, 1, LOCAL(2),
  // ->
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(138, 9),
  POS(141, 13),
  POS(140, 13),
  POS(139, 9)
};

static FUNCTION_INFO i_lambda_1 = {
  t_lambda_1, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_2[] = {
  2, // locals
  0, // parameters
  // node_type == REDEFINITION && kind_of(argument) == TEMPORARY
  var_std__equal, 2, var_138_10_node_type, var_REDEFINITION, 1, LOCAL(1),
  // node_type == REDEFINITION && kind_of(argument) == TEMPORARY
  var_std__and, 2, LOCAL(1), lambda_3, 1, LOCAL(2),
  // node_type == REDEFINITION && kind_of(argument) == TEMPORARY
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(142, 13),
  POS(142, 13),
  POS(142, 13)
};

static FUNCTION_INFO i_lambda_2 = {
  t_lambda_2, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_3[] = {
  2, // locals
  0, // parameters
  // kind_of(argument) == TEMPORARY
  var_kind_of, 1, var_137_46_argument, 1, LOCAL(1),
  // kind_of(argument) == TEMPORARY
  var_std__equal, 2, LOCAL(1), var_TEMPORARY, 1, LOCAL(2),
  // kind_of(argument) == TEMPORARY
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(142, 42),
  POS(142, 42),
  POS(142, 42)
};

static FUNCTION_INFO i_lambda_3 = {
  t_lambda_3, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_4[] = {
  4, // locals
  0, // parameters
  // rest(1)) == ATTRIBUTE_VALUE_PAIR
  var_137_29_rest, 1, num_1, 1, LOCAL(1),
  // node_type_of(rest(1)) == ATTRIBUTE_VALUE_PAIR
  var_node_type_of, 1, LOCAL(1), 1, LOCAL(2),
  // node_type_of(rest(1)) == ATTRIBUTE_VALUE_PAIR
  var_std__equal, 2, LOCAL(2), var_ATTRIBUTE_VALUE_PAIR, 1, LOCAL(3),
  // 
  var_std__or, 2, LOCAL(3), lambda_5, 1, LOCAL(4),
  // 
  LET, 1, LOCAL(4), TAIL_CALL,
  POS(147, 26),
  POS(147, 13),
  POS(147, 13),
  POS(146, 13),
  POS(146, 13)
};

static FUNCTION_INFO i_lambda_4 = {
  t_lambda_4, NULL, 5, 0,
  {}
};

static TAB_NUM t_lambda_5[] = {
  4, // locals
  0, // parameters
  // rest(1)) == METHOD_VALUE_PAIR
  var_137_29_rest, 1, num_1, 1, LOCAL(1),
  // node_type_of(rest(1)) == METHOD_VALUE_PAIR
  var_node_type_of, 1, LOCAL(1), 1, LOCAL(2),
  // node_type_of(rest(1)) == METHOD_VALUE_PAIR
  var_std__equal, 2, LOCAL(2), var_METHOD_VALUE_PAIR, 1, LOCAL(3),
  // 
  var_std__or, 2, LOCAL(3), lambda_6, 1, LOCAL(4),
  // node_type_of(rest(1)) == METHOD_VALUE_PAIR
  LET, 1, LOCAL(4), TAIL_CALL,
  POS(148, 26),
  POS(148, 13),
  POS(148, 13),
  POS(146, 13),
  POS(148, 13)
};

static FUNCTION_INFO i_lambda_5 = {
  t_lambda_5, NULL, 5, 0,
  {}
};

static TAB_NUM t_lambda_6[] = {
  3, // locals
  0, // parameters
  // rest(1)) == TYPE_FUNCTION
  var_137_29_rest, 1, num_1, 1, LOCAL(1),
  // node_type_of(rest(1)) == TYPE_FUNCTION
  var_node_type_of, 1, LOCAL(1), 1, LOCAL(2),
  // node_type_of(rest(1)) == TYPE_FUNCTION
  var_std__equal, 2, LOCAL(2), var_TYPE_FUNCTION, 1, LOCAL(3),
  // node_type_of(rest(1)) == TYPE_FUNCTION
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(149, 26),
  POS(149, 13),
  POS(149, 13),
  POS(149, 13)
};

static FUNCTION_INFO i_lambda_6 = {
  t_lambda_6, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_7[] = {
  8, // locals
  0, // parameters
  // destinations(1))
  var_137_15_destinations, 1, num_1, 1, LOCAL(1),
  // identifier_of(destinations(1))
  var_identifier_of, 1, LOCAL(1), 1, LOCAL(2),
  // USED | HAS_SLOTS)
  var_std__bit_or, 2, var_USED, var_HAS_SLOTS, 1, LOCAL(3),
  // tuple(undefined head current_level USED | HAS_SLOTS)
  var_tuple, 4, var_undefined, var_133_4_head, var_current_level, LOCAL(3), 1, LOCAL(4),
  // 
  var_std__key_value_pair, 2, LOCAL(2), LOCAL(4), 1, LOCAL(5),
  // insert_order_table
  var_insert_order_table, 1, LOCAL(5), 1, LOCAL(6),
  // rest(1))
  var_137_29_rest, 1, num_1, 1, LOCAL(7),
  // collect_variables(rest(1))
  var_collect_variables, 1, LOCAL(7), 1, LOCAL(8),
  // merge_variables
  var_merge_variables, 2, LOCAL(6), LOCAL(8), TAIL_CALL,
  POS(154, 31),
  POS(154, 17),
  POS(155, 52),
  POS(155, 17),
  POS(153, 16),
  POS(152, 13),
  POS(156, 31),
  POS(156, 13),
  POS(151, 11)
};

static FUNCTION_INFO i_lambda_7 = {
  t_lambda_7, NULL, 9, 0,
  {}
};

static TAB_NUM t_lambda_8[] = {
  2, // locals
  0, // parameters
  // length_of(destinations) == 1:
  var_length_of, 1, var_137_15_destinations, 1, LOCAL(1),
  // length_of(destinations) == 1:
  var_std__equal, 2, LOCAL(1), num_1, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_9, func_collect_statement, TAIL_CALL,
  POS(159, 13),
  POS(159, 13),
  POS(158, 11)
};

static FUNCTION_INFO i_lambda_8 = {
  t_lambda_8, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_9[] = {
  8, // locals
  0, // parameters
  // destinations(1))
  var_137_15_destinations, 1, num_1, 1, LOCAL(1),
  // identifier_of(destinations(1))
  var_identifier_of, 1, LOCAL(1), 1, LOCAL(2),
  // destinations(1) current_level 0)
  var_137_15_destinations, 1, num_1, 1, LOCAL(3),
  // tuple(self destinations(1) current_level 0)
  var_tuple, 4, var_132_45_self, LOCAL(3), var_current_level, num_0, 1, LOCAL(4),
  // 
  var_std__key_value_pair, 2, LOCAL(2), LOCAL(4), 1, LOCAL(5),
  // insert_order_table
  var_insert_order_table, 1, LOCAL(5), 1, LOCAL(6),
  // push(rest head)
  var_push, 2, var_137_29_rest, var_133_4_head, 1, LOCAL(7),
  // map_reduce
  var_map_reduce, 4, LOCAL(7), var_collect_variables, var_merge_variables, var_empty_insert_order_table, 1, LOCAL(8),
  // merge_variables
  var_merge_variables, 2, LOCAL(6), LOCAL(8), TAIL_CALL,
  POS(163, 35),
  POS(163, 21),
  POS(164, 32),
  POS(164, 21),
  POS(162, 20),
  POS(161, 17),
  POS(166, 19),
  POS(165, 17),
  POS(160, 15)
};

static FUNCTION_INFO i_lambda_9 = {
  t_lambda_9, NULL, 9, 0,
  {}
};

static TAB_NUM t_func_collect_statement[] = {
  1, // locals
  0, // parameters
  // push(arguments head)
  var_push, 2, var_134_4_arguments, var_133_4_head, 1, LOCAL(1),
  // map_reduce
  var_map_reduce, 4, LOCAL(1), var_collect_variables, var_merge_variables, var_empty_insert_order_table, TAIL_CALL,
  POS(175, 7),
  POS(174, 5)
};

static FUNCTION_INFO i_func_collect_statement = {
  t_func_collect_statement, NULL, 2, 0,
  {}
};

static TAB_NUM t_func_funky_types__definition___collect_variables[] = {
  4, // locals
  1, // parameters
  var_182_46_self,
  // $identifier identifier_of(self)
  var_identifier_of, 1, var_182_46_self, 1, var_183_4_identifier,
  // identifier(1).is_a_digit
  var_183_4_identifier, 1, num_1, 1, LOCAL(1),
  // is_a_digit
  var_is_a_digit, 1, LOCAL(1), 1, LOCAL(2),
  // $flags
  var_if, 3, LOCAL(2), lambda_10, lambda_11, 1, LOCAL(4),
  // tuple(self undefined current_level flags)
  var_tuple, 4, var_182_46_self, var_undefined, var_current_level, LOCAL(4), 1, LOCAL(1),
  // identifier = tuple(self undefined current_level flags)
  var_std__key_value_pair, 2, var_183_4_identifier, LOCAL(1), 1, LOCAL(2),
  // insert_order_table
  var_insert_order_table, 1, LOCAL(2), 1, LOCAL(3),
  // ->
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(183, 3),
  POS(186, 7),
  POS(186, 21),
  POS(184, 3),
  POS(195, 20),
  POS(195, 7),
  POS(194, 5),
  POS(193, 3),
  LOCAL(4)
};

static FUNCTION_INFO i_func_funky_types__definition___collect_variables = {
  t_func_funky_types__definition___collect_variables, NULL, 8, 1,
  {"184_4_flags\000"}
};

static TAB_NUM t_lambda_10[] = {
  0, // locals
  0, // parameters
  //  0
  LET, 1, num_0, TAIL_CALL,
  POS(187, 9)
};

static FUNCTION_INFO i_lambda_10 = {
  t_lambda_10, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_11[] = {
  4, // locals
  0, // parameters
  // length_of(identifier)+1)
  var_length_of, 1, var_183_4_identifier, 1, LOCAL(1),
  // length_of(identifier)+1)
  var_std__plus, 2, LOCAL(1), num_1, 1, LOCAL(2),
  // source_position_of(self)(length_of(identifier)+1)
  var_source_position_of, 1, var_182_46_self, 1, LOCAL(3),
  // source_position_of(self)(length_of(identifier)+1)
  LOCAL(3), 1, LOCAL(2), 1, LOCAL(4),
  // case
  var_case, 4, LOCAL(4), sequence_191_12, lambda_12, lambda_13, TAIL_CALL,
  POS(190, 36),
  POS(190, 36),
  POS(190, 11),
  POS(190, 11),
  POS(189, 9)
};

static FUNCTION_INFO i_lambda_11 = {
  t_lambda_11, NULL, 5, 0,
  {}
};

static TAB_NUM t_lambda_12[] = {
  0, // locals
  0, // parameters
  //  HAS_SLOTS
  LET, 1, var_HAS_SLOTS, TAIL_CALL,
  POS(191, 22)
};

static FUNCTION_INFO i_lambda_12 = {
  t_lambda_12, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_13[] = {
  0, // locals
  0, // parameters
  //  0
  LET, 1, num_0, TAIL_CALL,
  POS(192, 13)
};

static FUNCTION_INFO i_lambda_13 = {
  t_lambda_13, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_collect_parameter[] = {
  7, // locals
  1, // parameters
  LOCAL(7), // 200_22_self
  // funky::name_of(self) = tuple(self undefined current_level 0)
  var_funky__name_of, 1, LOCAL(7), 1, LOCAL(1),
  // tuple(self undefined current_level 0)
  var_tuple, 4, LOCAL(7), var_undefined, var_current_level, num_0, 1, LOCAL(2),
  // funky::name_of(self) = tuple(self undefined current_level 0)
  var_std__key_value_pair, 2, LOCAL(1), LOCAL(2), 1, LOCAL(3),
  // insert_order_table
  var_insert_order_table, 1, LOCAL(3), 1, LOCAL(4),
  // option_of(self))
  var_option_of, 1, LOCAL(7), 1, LOCAL(5),
  // collect_variables(option_of(self))
  var_collect_variables, 1, LOCAL(5), 1, LOCAL(6),
  // merge_variables
  var_merge_variables, 2, LOCAL(4), LOCAL(6), TAIL_CALL,
  POS(203, 7),
  POS(203, 30),
  POS(203, 7),
  POS(202, 5),
  POS(204, 23),
  POS(204, 5),
  POS(201, 3),
  LOCAL(7)
};

static FUNCTION_INFO i_func_collect_parameter = {
  t_func_collect_parameter, NULL, 7, 1,
  {"200_22_self\000"}
};

static TAB_NUM t_func_funky_types__redefinition___collect_variables[] = {
  2, // locals
  1, // parameters
  var_208_48_self,
  // $kind kind_of(self)
  var_kind_of, 1, var_208_48_self, 1, LOCAL(2),
  // kind == TEMPORARY
  var_std__equal, 2, LOCAL(2), var_TEMPORARY, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_14, lambda_15, TAIL_CALL,
  POS(209, 3),
  POS(211, 5),
  POS(210, 3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_funky_types__redefinition___collect_variables = {
  t_func_funky_types__redefinition___collect_variables, NULL, 3, 1,
  {"209_4_kind\000"}
};

static TAB_NUM t_lambda_14[] = {
  0, // locals
  0, // parameters
  //  empty_insert_order_table
  LET, 1, var_empty_insert_order_table, TAIL_CALL,
  POS(212, 7)
};

static FUNCTION_INFO i_lambda_14 = {
  t_lambda_14, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_15[] = {
  6, // locals
  0, // parameters
  // identifier_of(self)
  var_identifier_of, 1, var_208_48_self, 1, LOCAL(1),
  // current_level == 0
  var_std__equal, 2, var_current_level, num_0, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_16, lambda_17, 1, LOCAL(3),
  // tuple
  var_tuple, 4, var_undefined, var_208_48_self, var_current_level, LOCAL(3), 1, LOCAL(4),
  // 
  var_std__key_value_pair, 2, LOCAL(1), LOCAL(4), 1, LOCAL(5),
  // insert_order_table
  var_insert_order_table, 1, LOCAL(5), 1, LOCAL(6),
  // 
  LET, 1, LOCAL(6), TAIL_CALL,
  POS(216, 11),
  POS(222, 15),
  POS(221, 13),
  POS(217, 11),
  POS(215, 10),
  POS(214, 7),
  POS(213, 7)
};

static FUNCTION_INFO i_lambda_15 = {
  t_lambda_15, NULL, 7, 0,
  {}
};

static TAB_NUM t_lambda_16[] = {
  0, // locals
  0, // parameters
  //  REDEFINED_ON_TOP_LEVEL
  LET, 1, var_REDEFINED_ON_TOP_LEVEL, TAIL_CALL,
  POS(223, 17)
};

static FUNCTION_INFO i_lambda_16 = {
  t_lambda_16, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_17[] = {
  0, // locals
  0, // parameters
  //  REDEFINED
  LET, 1, var_REDEFINED, TAIL_CALL,
  POS(224, 17)
};

static FUNCTION_INFO i_lambda_17 = {
  t_lambda_17, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_funky_types__update___collect_variables[] = {
  2, // locals
  1, // parameters
  var_226_42_self,
  // $kind kind_of(self)
  var_kind_of, 1, var_226_42_self, 1, LOCAL(2),
  // kind == TEMPORARY
  var_std__equal, 2, LOCAL(2), var_TEMPORARY, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_18, lambda_19, TAIL_CALL,
  POS(227, 3),
  POS(229, 5),
  POS(228, 3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_funky_types__update___collect_variables = {
  t_func_funky_types__update___collect_variables, NULL, 3, 1,
  {"227_4_kind\000"}
};

static TAB_NUM t_lambda_18[] = {
  0, // locals
  0, // parameters
  //  empty_insert_order_table
  LET, 1, var_empty_insert_order_table, TAIL_CALL,
  POS(230, 7)
};

static FUNCTION_INFO i_lambda_18 = {
  t_lambda_18, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_19[] = {
  6, // locals
  0, // parameters
  // identifier_of(self)
  var_identifier_of, 1, var_226_42_self, 1, LOCAL(1),
  // current_level == 0
  var_std__equal, 2, var_current_level, num_0, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_20, lambda_21, 1, LOCAL(3),
  // tuple
  var_tuple, 4, var_undefined, var_226_42_self, var_current_level, LOCAL(3), 1, LOCAL(4),
  // 
  var_std__key_value_pair, 2, LOCAL(1), LOCAL(4), 1, LOCAL(5),
  // insert_order_table
  var_insert_order_table, 1, LOCAL(5), 1, LOCAL(6),
  // 
  LET, 1, LOCAL(6), TAIL_CALL,
  POS(234, 11),
  POS(240, 15),
  POS(239, 13),
  POS(235, 11),
  POS(233, 10),
  POS(232, 7),
  POS(231, 7)
};

static FUNCTION_INFO i_lambda_19 = {
  t_lambda_19, NULL, 7, 0,
  {}
};

static TAB_NUM t_lambda_20[] = {
  1, // locals
  0, // parameters
  // REDEFINED_ON_TOP_LEVEL | USED
  var_std__bit_or, 2, var_REDEFINED_ON_TOP_LEVEL, var_USED, 1, LOCAL(1),
  //  REDEFINED_ON_TOP_LEVEL | USED
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(241, 18),
  POS(241, 17)
};

static FUNCTION_INFO i_lambda_20 = {
  t_lambda_20, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_21[] = {
  1, // locals
  0, // parameters
  // REDEFINED | USED
  var_std__bit_or, 2, var_REDEFINED, var_USED, 1, LOCAL(1),
  //  REDEFINED | USED
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(242, 18),
  POS(242, 17)
};

static FUNCTION_INFO i_lambda_21 = {
  t_lambda_21, NULL, 2, 0,
  {}
};

static TAB_NUM t_func_funky_types__functor___collect_variables[] = {
  2, // locals
  1, // parameters
  var_246_43_self,
  // $kind kind_of(self)
  var_kind_of, 1, var_246_43_self, 1, LOCAL(2),
  // TEMPORARY, BUILTIN -> empty_insert_order_table
  var_std__sequence, 2, var_TEMPORARY, var_BUILTIN, 1, LOCAL(1),
  // case kind
  var_case, 4, LOCAL(2), LOCAL(1), lambda_22, lambda_23, TAIL_CALL,
  POS(247, 3),
  POS(249, 5),
  POS(248, 3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_funky_types__functor___collect_variables = {
  t_func_funky_types__functor___collect_variables, NULL, 3, 1,
  {"247_4_kind\000"}
};

static TAB_NUM t_lambda_22[] = {
  0, // locals
  0, // parameters
  //  empty_insert_order_table
  LET, 1, var_empty_insert_order_table, TAIL_CALL,
  POS(249, 26)
};

static FUNCTION_INFO i_lambda_22 = {
  t_lambda_22, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_23[] = {
  4, // locals
  0, // parameters
  // identifier_of(self) = tuple(undefined self current_level USED)
  var_identifier_of, 1, var_246_43_self, 1, LOCAL(1),
  // tuple(undefined self current_level USED)
  var_tuple, 4, var_undefined, var_246_43_self, var_current_level, var_USED, 1, LOCAL(2),
  // identifier_of(self) = tuple(undefined self current_level USED)
  var_std__key_value_pair, 2, LOCAL(1), LOCAL(2), 1, LOCAL(3),
  // insert_order_table
  var_insert_order_table, 1, LOCAL(3), 1, LOCAL(4),
  // 
  LET, 1, LOCAL(4), TAIL_CALL,
  POS(252, 9),
  POS(252, 31),
  POS(252, 9),
  POS(251, 7),
  POS(250, 7)
};

static FUNCTION_INFO i_lambda_23 = {
  t_lambda_23, NULL, 5, 0,
  {}
};

static TAB_NUM t_func_funky_types__pair___collect_variables[] = {
  7, // locals
  1, // parameters
  LOCAL(7), // 254_40_self
  // identifier_of(self) = tuple(undefined self current_level USED_POLYMORPHIC)
  var_identifier_of, 1, LOCAL(7), 1, LOCAL(1),
  // tuple(undefined self current_level USED_POLYMORPHIC)
  var_tuple, 4, var_undefined, LOCAL(7), var_current_level, var_USED_POLYMORPHIC, 1, LOCAL(2),
  // identifier_of(self) = tuple(undefined self current_level USED_POLYMORPHIC)
  var_std__key_value_pair, 2, LOCAL(1), LOCAL(2), 1, LOCAL(3),
  // insert_order_table
  var_insert_order_table, 1, LOCAL(3), 1, LOCAL(4),
  // argument_of(self))
  var_argument_of, 1, LOCAL(7), 1, LOCAL(5),
  // collect_variables(argument_of(self))
  var_collect_variables, 1, LOCAL(5), 1, LOCAL(6),
  // merge_variables
  var_merge_variables, 2, LOCAL(4), LOCAL(6), TAIL_CALL,
  POS(257, 7),
  POS(257, 29),
  POS(257, 7),
  POS(256, 5),
  POS(258, 23),
  POS(258, 5),
  POS(255, 3),
  LOCAL(7)
};

static FUNCTION_INFO i_func_funky_types__pair___collect_variables = {
  t_func_funky_types__pair___collect_variables, NULL, 7, 1,
  {"254_40_self\000"}
};

static TAB_NUM t_func_collect_inline_pair[] = {
  7, // locals
  1, // parameters
  LOCAL(7), // 263_24_self
  // identifier_of(self) = tuple(undefined self current_level USED_POLYMORPHIC)
  var_identifier_of, 1, LOCAL(7), 1, LOCAL(1),
  // tuple(undefined self current_level USED_POLYMORPHIC)
  var_tuple, 4, var_undefined, LOCAL(7), var_current_level, var_USED_POLYMORPHIC, 1, LOCAL(2),
  // identifier_of(self) = tuple(undefined self current_level USED_POLYMORPHIC)
  var_std__key_value_pair, 2, LOCAL(1), LOCAL(2), 1, LOCAL(3),
  // insert_order_table
  var_insert_order_table, 1, LOCAL(3), 1, LOCAL(4),
  // expression_of(self))
  var_expression_of, 1, LOCAL(7), 1, LOCAL(5),
  // collect_variables(expression_of(self))
  var_collect_variables, 1, LOCAL(5), 1, LOCAL(6),
  // merge_variables
  var_merge_variables, 2, LOCAL(4), LOCAL(6), TAIL_CALL,
  POS(266, 7),
  POS(266, 29),
  POS(266, 7),
  POS(265, 5),
  POS(267, 23),
  POS(267, 5),
  POS(264, 3),
  LOCAL(7)
};

static FUNCTION_INFO i_func_collect_inline_pair = {
  t_func_collect_inline_pair, NULL, 7, 1,
  {"263_24_self\000"}
};

static TAB_NUM t_func_funky__merge_variables[] = {
  2, // locals
  2, // parameters
  LOCAL(1), // 269_27_left
  LOCAL(2), // 269_32_right
  // merge left right: (left_info right_info)
  var_merge, 3, LOCAL(1), LOCAL(2), lambda_24, TAIL_CALL,
  POS(270, 3),
  LOCAL(1),
  LOCAL(2)
};

static FUNCTION_INFO i_func_funky__merge_variables = {
  t_func_funky__merge_variables, NULL, 1, 2,
  {"269_27_left\000", "269_32_right\000"}
};

static TAB_NUM t_lambda_24[] = {
  12, // locals
  2, // parameters
  LOCAL(9), // 270_22_left_info
  LOCAL(10), // 270_32_right_info
  // left_info $left_definition $left_use $left_level $left_flags
  LOCAL(9), 0, 4, var_271_16_left_definition, var_271_33_left_use, var_271_43_left_level, LOCAL(11),
  // right_info $right_definition $right_use $right_level $right_flags
  LOCAL(10), 0, 4, var_272_17_right_definition, var_272_35_right_use, var_272_46_right_level, LOCAL(12),
  // is_defined
  var_is_defined, 1, var_271_16_left_definition, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_25, lambda_26, 1, LOCAL(2),
  // is_defined
  var_is_defined, 1, var_271_33_left_use, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_27, lambda_28, 1, LOCAL(4),
  // left_level == right_level || left_level == TOP_LEVEL
  var_std__equal, 2, var_271_43_left_level, var_272_46_right_level, 1, LOCAL(5),
  // left_level == right_level || left_level == TOP_LEVEL
  var_std__or, 2, LOCAL(5), lambda_29, 1, LOCAL(6),
  // if
  var_if, 3, LOCAL(6), lambda_30, lambda_31, 1, LOCAL(7),
  // left_flags|right_flags
  var_std__bit_or, 2, LOCAL(11), LOCAL(12), 1, LOCAL(8),
  // tuple
  var_tuple, 4, LOCAL(2), LOCAL(4), LOCAL(7), LOCAL(8), TAIL_CALL,
  POS(271, 5),
  POS(272, 5),
  POS(275, 25),
  POS(274, 7),
  POS(279, 18),
  POS(278, 7),
  POS(283, 9),
  POS(283, 9),
  POS(282, 7),
  POS(293, 7),
  POS(273, 5),
  LOCAL(12),
  LOCAL(9),
  LOCAL(11),
  LOCAL(10)
};

static FUNCTION_INFO i_lambda_24 = {
  t_lambda_24, NULL, 11, 4,
  {"272_59_right_flags\000", "270_22_left_info\000", "271_55_left_flags\000", "270_32_right_info\000"}
};

static TAB_NUM t_lambda_25[] = {
  0, // locals
  0, // parameters
  //  left_definition
  LET, 1, var_271_16_left_definition, TAIL_CALL,
  POS(276, 11)
};

static FUNCTION_INFO i_lambda_25 = {
  t_lambda_25, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_26[] = {
  0, // locals
  0, // parameters
  //  right_definition
  LET, 1, var_272_17_right_definition, TAIL_CALL,
  POS(277, 11)
};

static FUNCTION_INFO i_lambda_26 = {
  t_lambda_26, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_27[] = {
  0, // locals
  0, // parameters
  //  left_use
  LET, 1, var_271_33_left_use, TAIL_CALL,
  POS(280, 11)
};

static FUNCTION_INFO i_lambda_27 = {
  t_lambda_27, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_28[] = {
  0, // locals
  0, // parameters
  //  right_use
  LET, 1, var_272_35_right_use, TAIL_CALL,
  POS(281, 11)
};

static FUNCTION_INFO i_lambda_28 = {
  t_lambda_28, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_29[] = {
  1, // locals
  0, // parameters
  // left_level == TOP_LEVEL
  var_std__equal, 2, var_271_43_left_level, var_TOP_LEVEL, 1, LOCAL(1),
  // left_level == TOP_LEVEL
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(283, 38),
  POS(283, 38)
};

static FUNCTION_INFO i_lambda_29 = {
  t_lambda_29, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_30[] = {
  0, // locals
  0, // parameters
  //  left_level
  LET, 1, var_271_43_left_level, TAIL_CALL,
  POS(284, 11)
};

static FUNCTION_INFO i_lambda_30 = {
  t_lambda_30, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_31[] = {
  2, // locals
  0, // parameters
  // right_level == TOP_LEVEL
  var_std__equal, 2, var_272_46_right_level, var_TOP_LEVEL, 1, LOCAL(1),
  // 
  var_std__or, 2, LOCAL(1), lambda_32, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_36, lambda_37, TAIL_CALL,
  POS(288, 15),
  POS(287, 15),
  POS(286, 11)
};

static FUNCTION_INFO i_lambda_31 = {
  t_lambda_31, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_32[] = {
  3, // locals
  0, // parameters
  // is_defined && left_level == 0
  var_is_defined, 1, var_271_16_left_definition, 1, LOCAL(1),
  // is_defined && left_level == 0
  var_std__and, 2, LOCAL(1), lambda_33, 1, LOCAL(2),
  // 
  var_std__or, 2, LOCAL(2), lambda_34, 1, LOCAL(3),
  // left_definition.is_defined && left_level == 0
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(289, 31),
  POS(289, 31),
  POS(287, 15),
  POS(289, 15)
};

static FUNCTION_INFO i_lambda_32 = {
  t_lambda_32, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_33[] = {
  1, // locals
  0, // parameters
  // left_level == 0
  var_std__equal, 2, var_271_43_left_level, num_0, 1, LOCAL(1),
  // left_level == 0
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(289, 45),
  POS(289, 45)
};

static FUNCTION_INFO i_lambda_33 = {
  t_lambda_33, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_34[] = {
  2, // locals
  0, // parameters
  // is_defined && right_level == 0
  var_is_defined, 1, var_272_17_right_definition, 1, LOCAL(1),
  // is_defined && right_level == 0
  var_std__and, 2, LOCAL(1), lambda_35, 1, LOCAL(2),
  // right_definition.is_defined && right_level == 0
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(290, 32),
  POS(290, 32),
  POS(290, 15)
};

static FUNCTION_INFO i_lambda_34 = {
  t_lambda_34, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_35[] = {
  1, // locals
  0, // parameters
  // right_level == 0
  var_std__equal, 2, var_272_46_right_level, num_0, 1, LOCAL(1),
  // right_level == 0
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(290, 46),
  POS(290, 46)
};

static FUNCTION_INFO i_lambda_35 = {
  t_lambda_35, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_36[] = {
  0, // locals
  0, // parameters
  //  TOP_LEVEL
  LET, 1, var_TOP_LEVEL, TAIL_CALL,
  POS(291, 15)
};

static FUNCTION_INFO i_lambda_36 = {
  t_lambda_36, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_37[] = {
  0, // locals
  0, // parameters
  //  MULTI_LEVEL
  LET, 1, var_MULTI_LEVEL, TAIL_CALL,
  POS(292, 15)
};

static FUNCTION_INFO i_lambda_37 = {
  t_lambda_37, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_funky__categorize_variables[] = {
  0, // locals
  1, // parameters
  var_295_32_variables,
  // $new_variables empty_insert_order_table
  LET, 1, var_empty_insert_order_table, 1, var_296_4_new_variables,
  // for_each variables
  var_for_each, 3, var_295_32_variables, lambda_38, lambda_40, TAIL_CALL,
  POS(296, 3),
  POS(297, 3)
};

static FUNCTION_INFO i_func_funky__categorize_variables = {
  t_func_funky__categorize_variables, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_38[] = {
  2, // locals
  2, // parameters
  var_298_8_name,
  var_298_13_info,
  // new_variables(name).is_defined
  var_296_4_new_variables, 1, var_298_8_name, 1, LOCAL(1),
  // is_defined
  var_is_defined, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), var_next, lambda_39, TAIL_CALL,
  POS(300, 9),
  POS(300, 29),
  POS(299, 7)
};

static FUNCTION_INFO i_lambda_38 = {
  t_lambda_38, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_39[] = {
  0, // locals
  0, // parameters
  // categorize name info !new_variables
  func_categorize, 2, var_298_8_name, var_298_13_info, 1, var_296_4_new_variables,
  // next
  var_next, 0, TAIL_CALL,
  POS(303, 11),
  POS(304, 11)
};

static FUNCTION_INFO i_lambda_39 = {
  t_lambda_39, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_40[] = {
  0, // locals
  0, // parameters
  //  new_variables
  LET, 1, var_296_4_new_variables, TAIL_CALL,
  POS(305, 7)
};

static FUNCTION_INFO i_lambda_40 = {
  t_lambda_40, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_categorize[] = {
  5, // locals
  2, // parameters
  var_307_17_name,
  LOCAL(5), // 307_22_info
  // info $definition $use $level $flags
  LOCAL(5), 0, 4, var_308_11_definition, var_308_23_use, var_308_28_level, var_308_35_flags,
  // HAS_SLOTS | REDEFINED_ON_TOP_LEVEL)
  var_std__bit_or, 2, var_HAS_SLOTS, var_REDEFINED_ON_TOP_LEVEL, 1, LOCAL(1),
  // flags & (HAS_SLOTS | REDEFINED_ON_TOP_LEVEL)
  var_std__bit_and, 2, var_308_35_flags, LOCAL(1), 1, LOCAL(2),
  // HAS_SLOTS | REDEFINED_ON_TOP_LEVEL
  var_std__bit_or, 2, var_HAS_SLOTS, var_REDEFINED_ON_TOP_LEVEL, 1, LOCAL(3),
  // 
  var_std__equal, 2, LOCAL(2), LOCAL(3), 1, LOCAL(4),
  // on
  var_on, 2, LOCAL(4), lambda_41, 0,
  // not(allow_unused)
  var_not, 1, var_allow_unused, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_42, 1, LOCAL(2),
  // on
  var_on, 2, LOCAL(2), lambda_46, 0,
  // is_defined:
  var_is_defined, 1, var_308_11_definition, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_definition_is_defined, lambda_81, TAIL_CALL,
  POS(308, 5),
  POS(311, 18),
  POS(311, 9),
  POS(312, 9),
  POS(310, 9),
  POS(309, 5),
  POS(320, 9),
  POS(319, 9),
  POS(318, 5),
  POS(328, 18),
  POS(327, 5),
  LOCAL(5)
};

static FUNCTION_INFO i_func_categorize = {
  t_func_categorize, NULL, 11, 1,
  {"307_22_info\000"}
};

static TAB_NUM t_lambda_41[] = {
  0, // locals
  0, // parameters
  // syntax_error "Object with slots redefined on top-level" definition
  var_syntax_error, 2, str_Object_with_slot, var_308_11_definition, TAIL_CALL,
  POS(314, 9)
};

static FUNCTION_INFO i_lambda_41 = {
  t_lambda_41, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_42[] = {
  2, // locals
  0, // parameters
  // is_defined
  var_is_defined, 1, var_308_11_definition, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_43, 1, LOCAL(2),
  // definition.is_defined
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(321, 20),
  POS(319, 9),
  POS(321, 9)
};

static FUNCTION_INFO i_lambda_42 = {
  t_lambda_42, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_43[] = {
  3, // locals
  0, // parameters
  // flags & USED == 0
  var_std__bit_and, 2, var_308_35_flags, var_USED, 1, LOCAL(1),
  // flags & USED == 0
  var_std__equal, 2, LOCAL(1), num_0, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_44, 1, LOCAL(3),
  // flags & USED == 0
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(322, 9),
  POS(322, 9),
  POS(319, 9),
  POS(322, 9)
};

static FUNCTION_INFO i_lambda_43 = {
  t_lambda_43, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_44[] = {
  4, // locals
  0, // parameters
  // name(1) != '_'
  var_307_17_name, 1, num_1, 1, LOCAL(1),
  // name(1) != '_'
  var_std__equal, 2, LOCAL(1), chr_95, 1, LOCAL(2),
  // name(1) != '_'
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // 
  var_std__and, 2, LOCAL(3), lambda_45, 1, LOCAL(4),
  // name(1) != '_'
  LET, 1, LOCAL(4), TAIL_CALL,
  POS(323, 9),
  POS(323, 9),
  POS(323, 9),
  POS(319, 9),
  POS(323, 9)
};

static FUNCTION_INFO i_lambda_44 = {
  t_lambda_44, NULL, 5, 0,
  {}
};

static TAB_NUM t_lambda_45[] = {
  2, // locals
  0, // parameters
  // name .contains. ':')
  var_contains, 2, var_307_17_name, chr_58, 1, LOCAL(1),
  // not(name .contains. ':')
  var_not, 1, LOCAL(1), 1, LOCAL(2),
  // not(name .contains. ':')
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(324, 13),
  POS(324, 9),
  POS(324, 9)
};

static FUNCTION_INFO i_lambda_45 = {
  t_lambda_45, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_46[] = {
  0, // locals
  0, // parameters
  // syntax_error "Unused variable" definition
  var_syntax_error, 2, str_Unused_variable, var_308_11_definition, TAIL_CALL,
  POS(326, 9)
};

static FUNCTION_INFO i_lambda_46 = {
  t_lambda_46, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_definition_is_defined[] = {
  3, // locals
  0, // parameters
  // $node_type node_type_of(definition)
  var_node_type_of, 1, var_308_11_definition, 1, var_329_10_node_type,
  // flags & REDEFINED_ON_TOP_LEVEL == REDEFINED_ON_TOP_LEVEL
  var_std__bit_and, 2, var_308_35_flags, var_REDEFINED_ON_TOP_LEVEL, 1, LOCAL(1),
  // flags & REDEFINED_ON_TOP_LEVEL == REDEFINED_ON_TOP_LEVEL
  var_std__equal, 2, LOCAL(1), var_REDEFINED_ON_TOP_LEVEL, 1, LOCAL(2),
  // 
  var_std__or, 2, LOCAL(2), lambda_47, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), func_local_or_dynamic, lambda_50, TAIL_CALL,
  POS(329, 9),
  POS(332, 13),
  POS(332, 13),
  POS(331, 13),
  POS(330, 9)
};

static FUNCTION_INFO i_lambda_definition_is_defined = {
  t_lambda_definition_is_defined, NULL, 5, 0,
  {}
};

static TAB_NUM t_lambda_47[] = {
  2, // locals
  0, // parameters
  // node_type == DEFINITION
  var_std__equal, 2, var_329_10_node_type, var_DEFINITION, 1, LOCAL(1),
  // 
  var_std__or, 2, LOCAL(1), lambda_48, 1, LOCAL(2),
  // node_type == DEFINITION
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(333, 13),
  POS(331, 13),
  POS(333, 13)
};

static FUNCTION_INFO i_lambda_47 = {
  t_lambda_47, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_48[] = {
  2, // locals
  0, // parameters
  // node_type == INLINE_PARAMETER
  var_std__equal, 2, var_329_10_node_type, var_INLINE_PARAMETER, 1, LOCAL(1),
  // 
  var_std__or, 2, LOCAL(1), lambda_49, 1, LOCAL(2),
  // node_type == INLINE_PARAMETER
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(334, 13),
  POS(331, 13),
  POS(334, 13)
};

static FUNCTION_INFO i_lambda_48 = {
  t_lambda_48, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_49[] = {
  1, // locals
  0, // parameters
  // node_type == PARAMETER
  var_std__equal, 2, var_329_10_node_type, var_PARAMETER, 1, LOCAL(1),
  // node_type == PARAMETER
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(335, 13),
  POS(335, 13)
};

static FUNCTION_INFO i_lambda_49 = {
  t_lambda_49, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_50[] = {
  1, // locals
  0, // parameters
  // $arguments arguments_of(definition)
  var_arguments_of, 1, var_308_11_definition, 1, var_338_14_arguments,
  // check_arguments $arguments_are_constant !new_variables
  func_check_arguments, 2, var_338_14_arguments, var_308_28_level, 2, LOCAL(1), var_296_4_new_variables,
  // if
  var_if, 3, LOCAL(1), lambda_arguments_are_constant, func_local_or_dynamic, TAIL_CALL,
  POS(338, 13),
  POS(339, 13),
  POS(341, 13),
  LOCAL(1)
};

static FUNCTION_INFO i_lambda_50 = {
  t_lambda_50, NULL, 3, 1,
  {"339_30_arguments_are_constant\000"}
};

static TAB_NUM t_lambda_arguments_are_constant[] = {
  1, // locals
  0, // parameters
  // $first_argument arguments(1)
  var_338_14_arguments, 1, num_1, 1, var_343_18_first_argument,
  // $node_type_of_first_argument node_type_of(first_argument)
  var_node_type_of, 1, var_343_18_first_argument, 1, var_344_18_node_type_of_first_argument,
  // ATTRIBUTE, ATTRIBUTE_WITH_SETTER
  var_std__sequence, 2, var_ATTRIBUTE, var_ATTRIBUTE_WITH_SETTER, 1, LOCAL(1),
  // case node_type_of_first_argument
  var_case, 4, var_344_18_node_type_of_first_argument, LOCAL(1), lambda_51, lambda_52, TAIL_CALL,
  POS(343, 17),
  POS(344, 17),
  POS(346, 19),
  POS(345, 17)
};

static FUNCTION_INFO i_lambda_arguments_are_constant = {
  t_lambda_arguments_are_constant, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_51[] = {
  2, // locals
  0, // parameters
  // tuple(node_type_of_first_argument undefined))
  var_tuple, 2, var_344_18_node_type_of_first_argument, var_undefined, 1, LOCAL(1),
  // new_variables(name tuple(node_type_of_first_argument undefined))
  var_296_4_new_variables, 2, var_307_17_name, LOCAL(1), 1, LOCAL(2),
  //  new_variables(name tuple(node_type_of_first_argument undefined))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(347, 41),
  POS(347, 22),
  POS(347, 21)
};

static FUNCTION_INFO i_lambda_51 = {
  t_lambda_51, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_52[] = {
  2, // locals
  0, // parameters
  // head_of(definition)) .truncate_until. "::"
  var_head_of, 1, var_308_11_definition, 1, LOCAL(1),
  // identifier_of(head_of(definition)) .truncate_until. "::"
  var_identifier_of, 1, LOCAL(1), 1, LOCAL(2),
  // $func
  var_truncate_until, 2, LOCAL(2), string_1, 1, var_349_22_func,
  // func == "assign":
  var_std__equal, 2, var_349_22_func, str_assign, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_53, lambda_73, TAIL_CALL,
  POS(350, 37),
  POS(350, 23),
  POS(349, 21),
  POS(352, 23),
  POS(351, 21)
};

static FUNCTION_INFO i_lambda_52 = {
  t_lambda_52, NULL, 5, 0,
  {}
};

static TAB_NUM t_lambda_53[] = {
  2, // locals
  0, // parameters
  // node_type_of(first_argument) == DEFINITION
  var_node_type_of, 1, var_343_18_first_argument, 1, LOCAL(1),
  // node_type_of(first_argument) == DEFINITION
  var_std__equal, 2, LOCAL(1), var_DEFINITION, 1, LOCAL(2),
  // $value
  var_if, 3, LOCAL(2), lambda_54, lambda_55, 1, var_353_26_value,
  // node_type_of(value) == FUNCTOR:
  var_node_type_of, 1, var_353_26_value, 1, LOCAL(1),
  // node_type_of(value) == FUNCTOR:
  var_std__equal, 2, LOCAL(1), var_FUNCTOR, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_56, lambda_63, TAIL_CALL,
  POS(355, 29),
  POS(355, 29),
  POS(353, 25),
  POS(359, 27),
  POS(359, 27),
  POS(358, 25)
};

static FUNCTION_INFO i_lambda_53 = {
  t_lambda_53, NULL, 6, 0,
  {}
};

static TAB_NUM t_lambda_54[] = {
  1, // locals
  0, // parameters
  // arguments(2)
  var_338_14_arguments, 1, num_2, 1, LOCAL(1),
  //  arguments(2)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(356, 32),
  POS(356, 31)
};

static FUNCTION_INFO i_lambda_54 = {
  t_lambda_54, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_55[] = {
  0, // locals
  0, // parameters
  //  first_argument
  LET, 1, var_343_18_first_argument, TAIL_CALL,
  POS(357, 31)
};

static FUNCTION_INFO i_lambda_55 = {
  t_lambda_55, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_56[] = {
  2, // locals
  0, // parameters
  // kind_of(value) == EXTERN
  var_kind_of, 1, var_353_26_value, 1, LOCAL(1),
  // kind_of(value) == EXTERN
  var_std__equal, 2, LOCAL(1), var_EXTERN, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_57, lambda_58, TAIL_CALL,
  POS(361, 31),
  POS(361, 31),
  POS(360, 29)
};

static FUNCTION_INFO i_lambda_56 = {
  t_lambda_56, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_57[] = {
  2, // locals
  0, // parameters
  // tuple(DERIVED value))
  var_tuple, 2, var_DERIVED, var_353_26_value, 1, LOCAL(1),
  // new_variables(name tuple(DERIVED value))
  var_296_4_new_variables, 2, var_307_17_name, LOCAL(1), 1, LOCAL(2),
  //  new_variables(name tuple(DERIVED value))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(362, 53),
  POS(362, 34),
  POS(362, 33)
};

static FUNCTION_INFO i_lambda_57 = {
  t_lambda_57, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_58[] = {
  2, // locals
  0, // parameters
  // level == 0 || level == TOP_LEVEL:
  var_std__equal, 2, var_308_28_level, num_0, 1, LOCAL(1),
  // level == 0 || level == TOP_LEVEL:
  var_std__or, 2, LOCAL(1), lambda_59, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_60, func_local_or_dynamic, TAIL_CALL,
  POS(365, 35),
  POS(365, 35),
  POS(364, 33)
};

static FUNCTION_INFO i_lambda_58 = {
  t_lambda_58, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_59[] = {
  1, // locals
  0, // parameters
  // level == TOP_LEVEL:
  var_std__equal, 2, var_308_28_level, var_TOP_LEVEL, 1, LOCAL(1),
  // level == TOP_LEVEL:
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(365, 49),
  POS(365, 49)
};

static FUNCTION_INFO i_lambda_59 = {
  t_lambda_59, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_60[] = {
  4, // locals
  0, // parameters
  // identifier_of(value))
  var_identifier_of, 1, var_353_26_value, 1, LOCAL(1),
  // $new_info new_variables(identifier_of(value))
  var_296_4_new_variables, 1, LOCAL(1), 1, var_366_38_new_info,
  // first(new_info)
  var_first, 1, var_366_38_new_info, 1, LOCAL(1),
  // DERIVED, INITIALIZED_COMPOUND
  var_std__sequence, 2, var_DERIVED, var_INITIALIZED_COMPOUND, 1, LOCAL(2),
  // case
  var_case, 4, LOCAL(1), LOCAL(2), lambda_61, lambda_62, 1, LOCAL(3),
  // new_variables
  var_296_4_new_variables, 2, var_307_17_name, LOCAL(3), 1, LOCAL(4),
  // ->
  LET, 1, LOCAL(4), TAIL_CALL,
  POS(366, 61),
  POS(366, 37),
  POS(371, 43),
  POS(372, 43),
  POS(370, 41),
  POS(368, 39),
  POS(367, 37)
};

static FUNCTION_INFO i_lambda_60 = {
  t_lambda_60, NULL, 7, 0,
  {}
};

static TAB_NUM t_lambda_61[] = {
  1, // locals
  0, // parameters
  // tuple(DERIVED value)
  var_tuple, 2, var_DERIVED, var_353_26_value, 1, LOCAL(1),
  //  tuple(DERIVED value)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(373, 46),
  POS(373, 45)
};

static FUNCTION_INFO i_lambda_61 = {
  t_lambda_61, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_62[] = {
  2, // locals
  0, // parameters
  // second(new_info))
  var_second, 1, var_366_38_new_info, 1, LOCAL(1),
  // tuple(INITIALIZED second(new_info))
  var_tuple, 2, var_INITIALIZED, LOCAL(1), 1, LOCAL(2),
  //  tuple(INITIALIZED second(new_info))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(374, 64),
  POS(374, 46),
  POS(374, 45)
};

static FUNCTION_INFO i_lambda_62 = {
  t_lambda_62, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_63[] = {
  2, // locals
  0, // parameters
  // node_type_of(value)
  var_node_type_of, 1, var_353_26_value, 1, LOCAL(1),
  // METHOD_VALUE_PAIR, ATTRIBUTE_VALUE_PAIR, TYPE_FUNCTION
  var_std__sequence, 3, var_METHOD_VALUE_PAIR, var_ATTRIBUTE_VALUE_PAIR, var_TYPE_FUNCTION, 1, LOCAL(2),
  // case node_type_of(value)
  var_case, 4, LOCAL(1), LOCAL(2), lambda_64, lambda_65, TAIL_CALL,
  POS(377, 34),
  POS(378, 31),
  POS(377, 29)
};

static FUNCTION_INFO i_lambda_63 = {
  t_lambda_63, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_64[] = {
  2, // locals
  0, // parameters
  // tuple(EXTERN use))
  var_tuple, 2, var_EXTERN, var_308_23_use, 1, LOCAL(1),
  // new_variables(name tuple(EXTERN use))
  var_296_4_new_variables, 2, var_307_17_name, LOCAL(1), 1, LOCAL(2),
  //  new_variables(name tuple(EXTERN use))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(379, 53),
  POS(379, 34),
  POS(379, 33)
};

static FUNCTION_INFO i_lambda_64 = {
  t_lambda_64, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_65[] = {
  2, // locals
  0, // parameters
  // flags & REDEFINED == 0:
  var_std__bit_and, 2, var_308_35_flags, var_REDEFINED, 1, LOCAL(1),
  // flags & REDEFINED == 0:
  var_std__equal, 2, LOCAL(1), num_0, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_66, lambda_70, TAIL_CALL,
  POS(382, 35),
  POS(382, 35),
  POS(381, 33)
};

static FUNCTION_INFO i_lambda_65 = {
  t_lambda_65, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_66[] = {
  2, // locals
  0, // parameters
  // name .contains. ':' || flags & HAS_SLOTS != 0
  var_contains, 2, var_307_17_name, chr_58, 1, LOCAL(1),
  // name .contains. ':' || flags & HAS_SLOTS != 0
  var_std__or, 2, LOCAL(1), lambda_67, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_68, lambda_69, TAIL_CALL,
  POS(384, 39),
  POS(384, 39),
  POS(383, 37)
};

static FUNCTION_INFO i_lambda_66 = {
  t_lambda_66, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_67[] = {
  3, // locals
  0, // parameters
  // flags & HAS_SLOTS != 0
  var_std__bit_and, 2, var_308_35_flags, var_HAS_SLOTS, 1, LOCAL(1),
  // flags & HAS_SLOTS != 0
  var_std__equal, 2, LOCAL(1), num_0, 1, LOCAL(2),
  // flags & HAS_SLOTS != 0
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // flags & HAS_SLOTS != 0
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(384, 62),
  POS(384, 62),
  POS(384, 62),
  POS(384, 62)
};

static FUNCTION_INFO i_lambda_67 = {
  t_lambda_67, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_68[] = {
  2, // locals
  0, // parameters
  // tuple(INITIALIZED value))
  var_tuple, 2, var_INITIALIZED, var_353_26_value, 1, LOCAL(1),
  // new_variables(name tuple(INITIALIZED value))
  var_296_4_new_variables, 2, var_307_17_name, LOCAL(1), 1, LOCAL(2),
  //  new_variables(name tuple(INITIALIZED value))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(385, 61),
  POS(385, 42),
  POS(385, 41)
};

static FUNCTION_INFO i_lambda_68 = {
  t_lambda_68, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_69[] = {
  2, // locals
  0, // parameters
  // tuple(CONSTANT value))
  var_tuple, 2, var_CONSTANT, var_353_26_value, 1, LOCAL(1),
  // new_variables(name tuple(CONSTANT value))
  var_296_4_new_variables, 2, var_307_17_name, LOCAL(1), 1, LOCAL(2),
  //  new_variables(name tuple(CONSTANT value))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(386, 61),
  POS(386, 42),
  POS(386, 41)
};

static FUNCTION_INFO i_lambda_69 = {
  t_lambda_69, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_70[] = {
  2, // locals
  0, // parameters
  // level == 0 || level == TOP_LEVEL
  var_std__equal, 2, var_308_28_level, num_0, 1, LOCAL(1),
  // level == 0 || level == TOP_LEVEL
  var_std__or, 2, LOCAL(1), lambda_71, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_72, func_local_or_dynamic, TAIL_CALL,
  POS(389, 39),
  POS(389, 39),
  POS(388, 37)
};

static FUNCTION_INFO i_lambda_70 = {
  t_lambda_70, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_71[] = {
  1, // locals
  0, // parameters
  // level == TOP_LEVEL
  var_std__equal, 2, var_308_28_level, var_TOP_LEVEL, 1, LOCAL(1),
  // level == TOP_LEVEL
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(389, 53),
  POS(389, 53)
};

static FUNCTION_INFO i_lambda_71 = {
  t_lambda_71, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_72[] = {
  2, // locals
  0, // parameters
  // tuple(INITIALIZED value))
  var_tuple, 2, var_INITIALIZED, var_353_26_value, 1, LOCAL(1),
  // new_variables(name tuple(INITIALIZED value))
  var_296_4_new_variables, 2, var_307_17_name, LOCAL(1), 1, LOCAL(2),
  //  new_variables(name tuple(INITIALIZED value))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(390, 61),
  POS(390, 42),
  POS(390, 41)
};

static FUNCTION_INFO i_lambda_72 = {
  t_lambda_72, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_73[] = {
  4, // locals
  0, // parameters
  // length_of(arguments)-1
  var_length_of, 1, var_338_14_arguments, 1, LOCAL(1),
  // $n length_of(arguments)-1
  var_std__minus, 2, LOCAL(1), num_1, 1, LOCAL(4),
  // map_reduce(arguments get_key append "")
  var_map_reduce, 4, var_338_14_arguments, func_get_key, var_append, string_2, 1, LOCAL(1),
  // !definition.funky::key_of
  var_string, 4, var_349_22_func, LOCAL(4), string_3, LOCAL(1), 1, LOCAL(3),
  // definition.funky::key_of
  LET, -1, var_308_11_definition, var_funky__key_of, LOCAL(3), var_308_11_definition,
  // flags & REDEFINED == 0:
  var_std__bit_and, 2, var_308_35_flags, var_REDEFINED, 1, LOCAL(1),
  // flags & REDEFINED == 0:
  var_std__equal, 2, LOCAL(1), num_0, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_74, lambda_78, TAIL_CALL,
  POS(393, 28),
  POS(393, 25),
  POS(399, 29),
  POS(394, 25),
  POS(394, 26),
  POS(401, 27),
  POS(401, 27),
  POS(400, 25),
  LOCAL(4)
};

static FUNCTION_INFO i_lambda_73 = {
  t_lambda_73, NULL, 8, 1,
  {"393_26_n\000"}
};

static TAB_NUM t_lambda_74[] = {
  2, // locals
  0, // parameters
  // name .contains. ':' || flags & HAS_SLOTS != 0
  var_contains, 2, var_307_17_name, chr_58, 1, LOCAL(1),
  // name .contains. ':' || flags & HAS_SLOTS != 0
  var_std__or, 2, LOCAL(1), lambda_75, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_76, lambda_77, TAIL_CALL,
  POS(403, 31),
  POS(403, 31),
  POS(402, 29)
};

static FUNCTION_INFO i_lambda_74 = {
  t_lambda_74, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_75[] = {
  3, // locals
  0, // parameters
  // flags & HAS_SLOTS != 0
  var_std__bit_and, 2, var_308_35_flags, var_HAS_SLOTS, 1, LOCAL(1),
  // flags & HAS_SLOTS != 0
  var_std__equal, 2, LOCAL(1), num_0, 1, LOCAL(2),
  // flags & HAS_SLOTS != 0
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // flags & HAS_SLOTS != 0
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(403, 54),
  POS(403, 54),
  POS(403, 54),
  POS(403, 54)
};

static FUNCTION_INFO i_lambda_75 = {
  t_lambda_75, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_76[] = {
  2, // locals
  0, // parameters
  // tuple(INITIALIZED_COMPOUND definition)
  var_tuple, 2, var_INITIALIZED_COMPOUND, var_308_11_definition, 1, LOCAL(1),
  // new_variables
  var_296_4_new_variables, 2, var_307_17_name, LOCAL(1), 1, LOCAL(2),
  // 
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(406, 40),
  POS(405, 33),
  POS(404, 33)
};

static FUNCTION_INFO i_lambda_76 = {
  t_lambda_76, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_77[] = {
  2, // locals
  0, // parameters
  // tuple(CONSTANT_COMPOUND definition)
  var_tuple, 2, var_CONSTANT_COMPOUND, var_308_11_definition, 1, LOCAL(1),
  // new_variables
  var_296_4_new_variables, 2, var_307_17_name, LOCAL(1), 1, LOCAL(2),
  // 
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(409, 40),
  POS(408, 33),
  POS(407, 33)
};

static FUNCTION_INFO i_lambda_77 = {
  t_lambda_77, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_78[] = {
  2, // locals
  0, // parameters
  // level == 0 || level == TOP_LEVEL
  var_std__equal, 2, var_308_28_level, num_0, 1, LOCAL(1),
  // level == 0 || level == TOP_LEVEL
  var_std__or, 2, LOCAL(1), lambda_79, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_80, func_local_or_dynamic, TAIL_CALL,
  POS(412, 31),
  POS(412, 31),
  POS(411, 29)
};

static FUNCTION_INFO i_lambda_78 = {
  t_lambda_78, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_79[] = {
  1, // locals
  0, // parameters
  // level == TOP_LEVEL
  var_std__equal, 2, var_308_28_level, var_TOP_LEVEL, 1, LOCAL(1),
  // level == TOP_LEVEL
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(412, 45),
  POS(412, 45)
};

static FUNCTION_INFO i_lambda_79 = {
  t_lambda_79, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_80[] = {
  2, // locals
  0, // parameters
  // tuple(INITIALIZED_COMPOUND definition)
  var_tuple, 2, var_INITIALIZED_COMPOUND, var_308_11_definition, 1, LOCAL(1),
  // new_variables
  var_296_4_new_variables, 2, var_307_17_name, LOCAL(1), 1, LOCAL(2),
  // 
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(415, 40),
  POS(414, 33),
  POS(413, 33)
};

static FUNCTION_INFO i_lambda_80 = {
  t_lambda_80, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_81[] = {
  6, // locals
  0, // parameters
  // flags & POLYMORPHIC != 0
  var_std__bit_and, 2, var_308_35_flags, var_POLYMORPHIC, 1, LOCAL(1),
  // flags & POLYMORPHIC != 0
  var_std__equal, 2, LOCAL(1), num_0, 1, LOCAL(2),
  // flags & POLYMORPHIC != 0
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_82, lambda_83, 1, LOCAL(4),
  // !new_variables(name)
  var_tuple, 2, LOCAL(4), var_308_23_use, 1, LOCAL(6),
  // new_variables(name)
  var_296_4_new_variables, 2, var_307_17_name, LOCAL(6), 1, var_296_4_new_variables,
  // -> new_variables
  LET, 1, var_296_4_new_variables, TAIL_CALL,
  POS(422, 15),
  POS(422, 15),
  POS(422, 15),
  POS(421, 13),
  POS(419, 9),
  POS(419, 10),
  POS(426, 9)
};

static FUNCTION_INFO i_lambda_81 = {
  t_lambda_81, NULL, 7, 0,
  {}
};

static TAB_NUM t_lambda_82[] = {
  0, // locals
  0, // parameters
  //  EXTERN_POLYMORPHIC
  LET, 1, var_EXTERN_POLYMORPHIC, TAIL_CALL,
  POS(423, 17)
};

static FUNCTION_INFO i_lambda_82 = {
  t_lambda_82, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_83[] = {
  0, // locals
  0, // parameters
  //  EXTERN
  LET, 1, var_EXTERN, TAIL_CALL,
  POS(424, 17)
};

static FUNCTION_INFO i_lambda_83 = {
  t_lambda_83, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_local_or_dynamic[] = {
  2, // locals
  0, // parameters
  // is_an_integer && not(name .contains. ':')
  var_is_an_integer, 1, var_308_28_level, 1, LOCAL(1),
  // is_an_integer && not(name .contains. ':')
  var_std__and, 2, LOCAL(1), lambda_84, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_85, lambda_86, TAIL_CALL,
  POS(430, 15),
  POS(430, 15),
  POS(429, 7)
};

static FUNCTION_INFO i_func_local_or_dynamic = {
  t_func_local_or_dynamic, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_84[] = {
  2, // locals
  0, // parameters
  // name .contains. ':')
  var_contains, 2, var_307_17_name, chr_58, 1, LOCAL(1),
  // not(name .contains. ':')
  var_not, 1, LOCAL(1), 1, LOCAL(2),
  // not(name .contains. ':')
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(430, 36),
  POS(430, 32),
  POS(430, 32)
};

static FUNCTION_INFO i_lambda_84 = {
  t_lambda_84, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_85[] = {
  2, // locals
  0, // parameters
  // tuple(LOCAL undefined))
  var_tuple, 2, var_LOCAL, var_undefined, 1, LOCAL(1),
  // new_variables(name tuple(LOCAL undefined))
  var_296_4_new_variables, 2, var_307_17_name, LOCAL(1), 1, LOCAL(2),
  //  new_variables(name tuple(LOCAL undefined))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(431, 31),
  POS(431, 12),
  POS(431, 11)
};

static FUNCTION_INFO i_lambda_85 = {
  t_lambda_85, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_86[] = {
  2, // locals
  0, // parameters
  // tuple(DYNAMIC undefined))
  var_tuple, 2, var_DYNAMIC, var_undefined, 1, LOCAL(1),
  // new_variables(name tuple(DYNAMIC undefined))
  var_296_4_new_variables, 2, var_307_17_name, LOCAL(1), 1, LOCAL(2),
  //  new_variables(name tuple(DYNAMIC undefined))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(432, 31),
  POS(432, 12),
  POS(432, 11)
};

static FUNCTION_INFO i_lambda_86 = {
  t_lambda_86, NULL, 3, 0,
  {}
};

static TAB_NUM t_func_check_arguments[] = {
  1, // locals
  2, // parameters
  LOCAL(1), // 434_22_arguments
  var_434_32_level,
  // for_each arguments
  var_for_each, 3, LOCAL(1), lambda_87, lambda_99, TAIL_CALL,
  POS(435, 5),
  LOCAL(1)
};

static FUNCTION_INFO i_func_check_arguments = {
  t_func_check_arguments, NULL, 1, 1,
  {"434_22_arguments\000"}
};

static TAB_NUM t_lambda_87[] = {
  2, // locals
  1, // parameters
  var_436_10_argument,
  // node_type_of(argument) == FUNCTOR:
  var_node_type_of, 1, var_436_10_argument, 1, LOCAL(1),
  // node_type_of(argument) == FUNCTOR:
  var_std__equal, 2, LOCAL(1), var_FUNCTOR, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_88, var_next, TAIL_CALL,
  POS(438, 11),
  POS(438, 11),
  POS(437, 9)
};

static FUNCTION_INFO i_lambda_87 = {
  t_lambda_87, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_88[] = {
  2, // locals
  0, // parameters
  // kind_of(argument) == EXTERN:
  var_kind_of, 1, var_436_10_argument, 1, LOCAL(1),
  // kind_of(argument) == EXTERN:
  var_std__equal, 2, LOCAL(1), var_EXTERN, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_89, lambda_92, TAIL_CALL,
  POS(441, 15),
  POS(441, 15),
  POS(440, 13)
};

static FUNCTION_INFO i_lambda_88 = {
  t_lambda_88, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_89[] = {
  2, // locals
  0, // parameters
  // level == 0 || level == TOP_LEVEL
  var_std__equal, 2, var_434_32_level, num_0, 1, LOCAL(1),
  // level == 0 || level == TOP_LEVEL
  var_std__or, 2, LOCAL(1), lambda_90, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), var_next, lambda_91, TAIL_CALL,
  POS(443, 19),
  POS(443, 19),
  POS(442, 17)
};

static FUNCTION_INFO i_lambda_89 = {
  t_lambda_89, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_90[] = {
  1, // locals
  0, // parameters
  // level == TOP_LEVEL
  var_std__equal, 2, var_434_32_level, var_TOP_LEVEL, 1, LOCAL(1),
  // level == TOP_LEVEL
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(443, 33),
  POS(443, 33)
};

static FUNCTION_INFO i_lambda_90 = {
  t_lambda_90, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_91[] = {
  0, // locals
  0, // parameters
  //  false new_variables
  LET, 2, var_false, var_296_4_new_variables, TAIL_CALL,
  POS(445, 21)
};

static FUNCTION_INFO i_lambda_91 = {
  t_lambda_91, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_92[] = {
  1, // locals
  0, // parameters
  // $identifier identifier_of(argument)
  var_identifier_of, 1, var_436_10_argument, 1, var_447_18_identifier,
  // $new_info new_variables(identifier)
  var_296_4_new_variables, 1, var_447_18_identifier, 1, var_448_18_new_info,
  // is_defined
  var_is_defined, 1, var_448_18_new_info, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), func_check_new_info, lambda_93, TAIL_CALL,
  POS(447, 17),
  POS(448, 17),
  POS(450, 28),
  POS(449, 17)
};

static FUNCTION_INFO i_lambda_92 = {
  t_lambda_92, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_93[] = {
  1, // locals
  0, // parameters
  // $info variables(identifier)
  var_295_32_variables, 1, var_447_18_identifier, 1, var_453_22_info,
  // is_defined:
  var_is_defined, 1, var_453_22_info, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_info_is_defined, lambda_94, TAIL_CALL,
  POS(453, 21),
  POS(455, 28),
  POS(454, 21)
};

static FUNCTION_INFO i_lambda_93 = {
  t_lambda_93, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_info_is_defined[] = {
  0, // locals
  0, // parameters
  // categorize identifier info !new_variables
  func_categorize, 2, var_447_18_identifier, var_453_22_info, 1, var_296_4_new_variables,
  // !new_info new_variables(identifier)
  var_296_4_new_variables, 1, var_447_18_identifier, 1, var_448_18_new_info,
  // check_new_info
  func_check_new_info, 0, TAIL_CALL,
  POS(456, 25),
  POS(457, 25),
  POS(458, 25)
};

static FUNCTION_INFO i_lambda_info_is_defined = {
  t_lambda_info_is_defined, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_94[] = {
  0, // locals
  0, // parameters
  //  false new_variables # a non-constant temporary
  LET, 2, var_false, var_296_4_new_variables, TAIL_CALL,
  POS(459, 25)
};

static FUNCTION_INFO i_lambda_94 = {
  t_lambda_94, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_check_new_info[] = {
  3, // locals
  0, // parameters
  // first(new_info)
  var_first, 1, var_448_18_new_info, 1, LOCAL(1),
  // CONSTANT, CONSTANT_COMPOUND
  var_std__sequence, 2, var_CONSTANT, var_CONSTANT_COMPOUND, 1, LOCAL(2),
  // sequence
  var_sequence, 5, var_INITIALIZED, var_INITIALIZED_COMPOUND, var_ATTRIBUTE, var_ATTRIBUTE_WITH_SETTER, var_DERIVED, 1, LOCAL(3),
  // case first(new_info)
  var_case, 6, LOCAL(1), LOCAL(2), var_next, LOCAL(3), lambda_95, lambda_98, TAIL_CALL,
  POS(462, 24),
  POS(463, 21),
  POS(465, 21),
  POS(462, 19)
};

static FUNCTION_INFO i_func_check_new_info = {
  t_func_check_new_info, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_95[] = {
  2, // locals
  0, // parameters
  // level == 0 || level == TOP_LEVEL
  var_std__equal, 2, var_434_32_level, num_0, 1, LOCAL(1),
  // level == 0 || level == TOP_LEVEL
  var_std__or, 2, LOCAL(1), lambda_96, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), var_next, lambda_97, TAIL_CALL,
  POS(473, 25),
  POS(473, 25),
  POS(472, 23)
};

static FUNCTION_INFO i_lambda_95 = {
  t_lambda_95, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_96[] = {
  1, // locals
  0, // parameters
  // level == TOP_LEVEL
  var_std__equal, 2, var_434_32_level, var_TOP_LEVEL, 1, LOCAL(1),
  // level == TOP_LEVEL
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(473, 39),
  POS(473, 39)
};

static FUNCTION_INFO i_lambda_96 = {
  t_lambda_96, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_97[] = {
  0, // locals
  0, // parameters
  //  false new_variables
  LET, 2, var_false, var_296_4_new_variables, TAIL_CALL,
  POS(475, 27)
};

static FUNCTION_INFO i_lambda_97 = {
  t_lambda_97, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_98[] = {
  0, // locals
  0, // parameters
  //  false new_variables
  LET, 2, var_false, var_296_4_new_variables, TAIL_CALL,
  POS(476, 23)
};

static FUNCTION_INFO i_lambda_98 = {
  t_lambda_98, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_99[] = {
  0, // locals
  0, // parameters
  //  true new_variables
  LET, 2, var_true, var_296_4_new_variables, TAIL_CALL,
  POS(478, 9)
};

static FUNCTION_INFO i_lambda_99 = {
  t_lambda_99, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_get_key[] = {
  2, // locals
  1, // parameters
  var_480_14_node,
  // node_type_of(node)
  var_node_type_of, 1, var_480_14_node, 1, LOCAL(1),
  // DEFINITION, REDEFINITION -> ""
  var_std__sequence, 2, var_DEFINITION, var_REDEFINITION, 1, LOCAL(2),
  // case node_type_of(node)
  var_case, 6, LOCAL(1), LOCAL(2), lambda_100, var_FUNCTOR, lambda_FUNCTOR, lambda_105, TAIL_CALL,
  POS(481, 10),
  POS(482, 7),
  POS(481, 5)
};

static FUNCTION_INFO i_func_get_key = {
  t_func_get_key, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_100[] = {
  0, // locals
  0, // parameters
  //  ""
  LET, 1, string_2, TAIL_CALL,
  POS(482, 34)
};

static FUNCTION_INFO i_lambda_100 = {
  t_lambda_100, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_FUNCTOR[] = {
  2, // locals
  0, // parameters
  // kind_of(node) == EXTERN
  var_kind_of, 1, var_480_14_node, 1, LOCAL(1),
  // kind_of(node) == EXTERN
  var_std__equal, 2, LOCAL(1), var_EXTERN, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_101, lambda_102, TAIL_CALL,
  POS(485, 11),
  POS(485, 11),
  POS(484, 9)
};

static FUNCTION_INFO i_lambda_FUNCTOR = {
  t_lambda_FUNCTOR, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_101[] = {
  2, // locals
  0, // parameters
  // identifier_of(node))"
  var_identifier_of, 1, var_480_14_node, 1, LOCAL(1),
  // "ext_@(identifier_of(node))"
  var_std__string, 2, str_ext, LOCAL(1), 1, LOCAL(2),
  //  "ext_@(identifier_of(node))"
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(486, 21),
  POS(486, 14),
  POS(486, 13)
};

static FUNCTION_INFO i_lambda_101 = {
  t_lambda_101, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_102[] = {
  3, // locals
  0, // parameters
  // identifier_of(node))
  var_identifier_of, 1, var_480_14_node, 1, LOCAL(1),
  // $info new_variables(identifier_of(node))
  var_296_4_new_variables, 1, LOCAL(1), 1, LOCAL(2),
  // info $kind $value
  LOCAL(2), 0, 2, LOCAL(3), var_489_25_value,
  // ATTRIBUTE, ATTRIBUTE_WITH_SETTER
  var_std__sequence, 2, var_ATTRIBUTE, var_ATTRIBUTE_WITH_SETTER, 1, LOCAL(1),
  // case kind
  var_case, 4, LOCAL(3), LOCAL(1), lambda_103, lambda_104, TAIL_CALL,
  POS(488, 33),
  POS(488, 13),
  POS(489, 13),
  POS(491, 15),
  POS(490, 13),
  LOCAL(3),
  LOCAL(2)
};

static FUNCTION_INFO i_lambda_102 = {
  t_lambda_102, NULL, 5, 2,
  {"489_19_kind\000", "488_14_info\000"}
};

static TAB_NUM t_lambda_103[] = {
  2, // locals
  0, // parameters
  // identifier_of(node))"
  var_identifier_of, 1, var_480_14_node, 1, LOCAL(1),
  // "attr_@(identifier_of(node))"
  var_std__string, 2, str_attr, LOCAL(1), 1, LOCAL(2),
  //  "attr_@(identifier_of(node))"
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(492, 26),
  POS(492, 18),
  POS(492, 17)
};

static FUNCTION_INFO i_lambda_103 = {
  t_lambda_103, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_104[] = {
  1, // locals
  0, // parameters
  // get_key(value)
  func_get_key, 1, var_489_25_value, 1, LOCAL(1),
  //  get_key(value)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(493, 18),
  POS(493, 17)
};

static FUNCTION_INFO i_lambda_104 = {
  t_lambda_104, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_105[] = {
  1, // locals
  0, // parameters
  // funky::key_of(node)
  var_funky__key_of, 1, var_480_14_node, 1, LOCAL(1),
  //  funky::key_of(node)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(494, 10),
  POS(494, 9)
};

static FUNCTION_INFO i_lambda_105 = {
  t_lambda_105, NULL, 2, 0,
  {}
};

static int sequence_191_12_arguments[] = {
  -chr_46, -chr_47
};

static FUNKY_CONSTANT constants_table[] = {
  {FLT_POSITIVE_INT64, 0, {.value = 0}},
  {FLT_UNIQUE, 0, {.str_8 = "funky::BUILTIN"}},
  {FLT_UNIQUE, 0, {.str_8 = "funky::CONSTANT"}},
  {FLT_UNIQUE, 0, {.str_8 = "funky::CONSTANT_COMPOUND"}},
  {FLT_UNIQUE, 0, {.str_8 = "funky::DERIVED"}},
  {FLT_UNIQUE, 0, {.str_8 = "funky::DYNAMIC"}},
  {FLT_UNIQUE, 0, {.str_8 = "funky::EXTERN"}},
  {FLT_UNIQUE, 0, {.str_8 = "funky::EXTERN_POLYMORPHIC"}},
  {FLT_UNIQUE, 0, {.str_8 = "funky::INITIALIZED"}},
  {FLT_UNIQUE, 0, {.str_8 = "funky::INITIALIZED_COMPOUND"}},
  {FLT_UNIQUE, 0, {.str_8 = "funky::LOCAL"}},
  {FLT_UNIQUE, 0, {.str_8 = "funky::TEMPORARY"}},
  {FLT_UNIQUE, 0, {.str_8 = "funky::TOP_LEVEL"}},
  {FLT_UNIQUE, 0, {.str_8 = "funky::MULTI_LEVEL"}},
  {FLT_POSITIVE_INT64, 0, {.value = 1}},
  {FLT_POSITIVE_INT64, 0, {.value = 2}},
  {FLT_POSITIVE_INT64, 0, {.value = 3}},
  {FLT_POSITIVE_INT64, 0, {.value = 4}},
  {FLT_POSITIVE_INT64, 0, {.value = 8}},
  {FLT_POSITIVE_INT64, 0, {.value = 0xc}},
  {FLT_POSITIVE_INT64, 0, {.value = 0x10}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__list___collect_variables}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_funky_types__body___collect_variables}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_funky_types__statement___collect_variables}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_identifier_ofhead_is_a_builtin_function_name}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_1}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_2}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_3}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_4}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_5}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_6}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_7}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_8}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_9}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_collect_statement}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_funky_types__definition___collect_variables}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_10}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_11}},
  {FLT_CHARACTER, 0, {.value = 46}},
  {FLT_CHARACTER, 0, {.value = 47}},
  {FLT_SEQUENCE, 2, {.arguments = sequence_191_12_arguments}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_12}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_13}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_collect_parameter}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_funky_types__redefinition___collect_variables}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_14}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_15}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_16}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_17}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_funky_types__update___collect_variables}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_18}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_19}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_20}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_21}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_funky_types__functor___collect_variables}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_22}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_23}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_funky_types__pair___collect_variables}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_collect_inline_pair}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_funky__merge_variables}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_24}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_25}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_26}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_27}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_28}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_29}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_30}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_31}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_32}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_33}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_34}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_35}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_36}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_37}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_funky__categorize_variables}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_38}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_39}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_40}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_categorize}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_41}},
  {FLT_STRING_8, 40, {.str_8 = "Object with slots redefined on top-level"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_42}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_43}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_44}},
  {FLT_CHARACTER, 0, {.value = 95}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_45}},
  {FLT_CHARACTER, 0, {.value = 58}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_46}},
  {FLT_STRING_8, 15, {.str_8 = "Unused variable"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_definition_is_defined}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_47}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_48}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_49}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_50}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_arguments_are_constant}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_51}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_52}},
  {FLT_STRING_8, 2, {.str_8 = "::"}},
  {FLT_STRING_8, 6, {.str_8 = "assign"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_53}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_54}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_55}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_56}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_57}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_58}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_59}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_60}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_61}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_62}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_63}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_64}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_65}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_66}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_67}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_68}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_69}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_70}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_71}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_72}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_73}},
  {FLT_STRING_8, 0, {.str_8 = ""}},
  {FLT_STRING_8, 1, {.str_8 = "_"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_74}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_75}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_76}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_77}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_78}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_79}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_80}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_81}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_82}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_83}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_local_or_dynamic}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_84}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_85}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_86}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_check_arguments}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_87}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_88}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_89}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_90}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_91}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_92}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_93}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_info_is_defined}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_94}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_check_new_info}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_95}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_96}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_97}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_98}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_99}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_get_key}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_100}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_FUNCTOR}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_101}},
  {FLT_STRING_8, 4, {.str_8 = "ext_"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_102}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_103}},
  {FLT_STRING_8, 5, {.str_8 = "attr_"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_104}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_105}}
};

static ATTRIBUTE_DEFINITION std_types__list__attributes[] = {
  {var_collect_variables, -func_std_types__list___collect_variables}
};

static ATTRIBUTE_DEFINITION funky_types__body__attributes[] = {
  {var_collect_variables, -func_funky_types__body___collect_variables}
};

static ATTRIBUTE_DEFINITION funky_types__statement__attributes[] = {
  {var_collect_variables, -func_funky_types__statement___collect_variables}
};

static ATTRIBUTE_DEFINITION funky_types__definition__attributes[] = {
  {var_collect_variables, -func_funky_types__definition___collect_variables}
};

static ATTRIBUTE_DEFINITION funky_types__parameter__attributes[] = {
  {var_collect_variables, -func_collect_parameter}
};

static ATTRIBUTE_DEFINITION funky_types__inline_parameter__attributes[] = {
  {var_collect_variables, -func_collect_parameter}
};

static ATTRIBUTE_DEFINITION funky_types__redefinition__attributes[] = {
  {var_collect_variables, -func_funky_types__redefinition___collect_variables}
};

static ATTRIBUTE_DEFINITION funky_types__update__attributes[] = {
  {var_collect_variables, -func_funky_types__update___collect_variables}
};

static ATTRIBUTE_DEFINITION funky_types__functor__attributes[] = {
  {var_collect_variables, -func_funky_types__functor___collect_variables}
};

static ATTRIBUTE_DEFINITION funky_types__pair__attributes[] = {
  {var_collect_variables, -func_funky_types__pair___collect_variables}
};

static ATTRIBUTE_DEFINITION funky_types__inline_attribute_value_pair__attributes[] = {
  {var_collect_variables, -func_collect_inline_pair}
};

static ATTRIBUTE_DEFINITION funky_types__inline_method_value_pair__attributes[] = {
  {var_collect_variables, -func_collect_inline_pair}
};

static FUNKY_VARIABLE variables_table[] = {
  {
    FOT_POLYMORPHIC, 0, 0,
    "collect_variables\000funky", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "assign\000std", NULL,
    {.position = POS(27, 1)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "current_level\000", NULL,
    {.const_idx = -num_0}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "BUILTIN\000funky", NULL,
    {.const_idx = -uni_funky__BUILTIN}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "CONSTANT\000funky", NULL,
    {.const_idx = -uni_funky__CONSTANT}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "CONSTANT_COMPOUND\000funky", NULL,
    {.const_idx = -uni_funky__CONSTANT_COMPOUND}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "DERIVED\000funky", NULL,
    {.const_idx = -uni_funky__DERIVED}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "DYNAMIC\000funky", NULL,
    {.const_idx = -uni_funky__DYNAMIC}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "EXTERN\000funky", NULL,
    {.const_idx = -uni_funky__EXTERN}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "EXTERN_POLYMORPHIC\000funky", NULL,
    {.const_idx = -uni_funky__EXTERN_POLYMORPHIC}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "INITIALIZED\000funky", NULL,
    {.const_idx = -uni_funky__INITIALIZED}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "INITIALIZED_COMPOUND\000funky", NULL,
    {.const_idx = -uni_funky__INITIALIZED_COMPOUND}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "LOCAL\000funky", NULL,
    {.const_idx = -uni_funky__LOCAL}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "TEMPORARY\000funky", NULL,
    {.const_idx = -uni_funky__TEMPORARY}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "TOP_LEVEL\000funky", NULL,
    {.const_idx = -uni_funky__TOP_LEVEL}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "MULTI_LEVEL\000funky", NULL,
    {.const_idx = -uni_funky__MULTI_LEVEL}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "USED\000funky", NULL,
    {.const_idx = -num_1}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "POLYMORPHIC\000funky", NULL,
    {.const_idx = -num_2}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "USED_POLYMORPHIC\000funky", NULL,
    {.const_idx = -num_3}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "REDEFINED\000funky", NULL,
    {.const_idx = -num_4}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "ON_TOP_LEVEL\000funky", NULL,
    {.const_idx = -num_8}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "REDEFINED_ON_TOP_LEVEL\000funky", NULL,
    {.const_idx = -num_0xc}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "HAS_SLOTS\000funky", NULL,
    {.const_idx = -num_0x10}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "list\000std_types", std_types__list__attributes,
    {.position = POS(119, 1)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "collect_variables\000", NULL,
    {.position = POS(119, 18)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "merge_variables\000", NULL,
    {.position = POS(120, 37)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_insert_order_table\000", NULL,
    {.position = POS(120, 53)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "map_reduce\000", NULL,
    {.position = POS(120, 3)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "body\000funky_types", funky_types__body__attributes,
    {.position = POS(122, 1)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "false\000", NULL,
    {.position = POS(123, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "on_top_level\000", NULL,
    {.position = POS(123, 4)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "inc\000", NULL,
    {.position = POS(124, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "parameters_of\000", NULL,
    {.position = POS(125, 14)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "statements_of\000", NULL,
    {.position = POS(127, 14)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "statement\000funky_types", funky_types__statement__attributes,
    {.position = POS(132, 1)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "132_45_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "133_4_head\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "head_of\000", NULL,
    {.position = POS(133, 9)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "134_4_arguments\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "arguments_of\000", NULL,
    {.position = POS(134, 14)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "identifier_of\000", NULL,
    {.position = POS(136, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_a_builtin_function_name\000", NULL,
    {.position = POS(136, 25)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "137_15_destinations\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "137_29_rest\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "137_46_argument\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "138_10_node_type\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "node_type_of\000", NULL,
    {.position = POS(138, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "DEFINITION\000", NULL,
    {.position = POS(141, 26)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "equal\000std", NULL,
    {.position = POS(141, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "REDEFINITION\000", NULL,
    {.position = POS(142, 26)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "kind_of\000", NULL,
    {.position = POS(142, 42)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "TEMPORARY\000", NULL,
    {.position = POS(142, 63)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "and\000std", NULL,
    {.position = POS(142, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "or\000std", NULL,
    {.position = POS(140, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "filter\000", NULL,
    {.position = POS(137, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "length_of\000", NULL,
    {.position = POS(145, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "ATTRIBUTE_VALUE_PAIR\000", NULL,
    {.position = POS(147, 38)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "METHOD_VALUE_PAIR\000", NULL,
    {.position = POS(148, 38)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "TYPE_FUNCTION\000", NULL,
    {.position = POS(149, 38)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "USED\000", NULL,
    {.position = POS(155, 52)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "HAS_SLOTS\000", NULL,
    {.position = POS(155, 59)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "bit_or\000std", NULL,
    {.position = POS(155, 52)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "undefined\000", NULL,
    {.position = POS(155, 23)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "tuple\000", NULL,
    {.position = POS(155, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "key_value_pair\000std", NULL,
    {.position = POS(153, 16)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "insert_order_table\000", NULL,
    {.position = POS(152, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "push\000", NULL,
    {.position = POS(166, 19)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if\000", NULL,
    {.position = POS(158, 11)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "definition\000funky_types", funky_types__definition__attributes,
    {.position = POS(182, 1)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "182_46_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "183_4_identifier\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_a_digit\000", NULL,
    {.position = POS(186, 21)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000std", NULL,
    {.position = POS(190, 36)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "source_position_of\000", NULL,
    {.position = POS(190, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "sequence\000std", NULL,
    {.position = POS(191, 12)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "case\000", NULL,
    {.position = POS(189, 9)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "parameter\000funky_types", funky_types__parameter__attributes,
    {.position = POS(197, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "inline_parameter\000funky_types", funky_types__inline_parameter__attributes,
    {.position = POS(198, 1)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "name_of\000funky", NULL,
    {.position = POS(203, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "option_of\000", NULL,
    {.position = POS(204, 23)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "redefinition\000funky_types", funky_types__redefinition__attributes,
    {.position = POS(208, 1)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "208_48_self\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "REDEFINED_ON_TOP_LEVEL\000", NULL,
    {.position = POS(223, 18)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "REDEFINED\000", NULL,
    {.position = POS(224, 18)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "update\000funky_types", funky_types__update__attributes,
    {.position = POS(226, 1)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "226_42_self\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 1,
    "functor\000funky_types", funky_types__functor__attributes,
    {.position = POS(246, 1)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "246_43_self\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "BUILTIN\000", NULL,
    {.position = POS(249, 16)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "pair\000funky_types", funky_types__pair__attributes,
    {.position = POS(254, 1)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "USED_POLYMORPHIC\000", NULL,
    {.position = POS(257, 64)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "argument_of\000", NULL,
    {.position = POS(258, 23)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "inline_attribute_value_pair\000funky_types", funky_types__inline_attribute_value_pair__attributes,
    {.position = POS(260, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "inline_method_value_pair\000funky_types", funky_types__inline_method_value_pair__attributes,
    {.position = POS(261, 1)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "expression_of\000", NULL,
    {.position = POS(267, 23)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "merge_variables\000funky", NULL,
    {.const_idx = -func_funky__merge_variables}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "271_16_left_definition\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "271_33_left_use\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "271_43_left_level\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "272_17_right_definition\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "272_35_right_use\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "272_46_right_level\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_defined\000", NULL,
    {.position = POS(275, 25)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "TOP_LEVEL\000", NULL,
    {.position = POS(283, 52)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "MULTI_LEVEL\000", NULL,
    {.position = POS(292, 16)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "merge\000", NULL,
    {.position = POS(270, 3)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "categorize_variables\000funky", NULL,
    {.const_idx = -func_funky__categorize_variables}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "295_32_variables\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "296_4_new_variables\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "298_8_name\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "298_13_info\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "next\000", NULL,
    {.position = POS(301, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "for_each\000", NULL,
    {.position = POS(297, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "307_17_name\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "308_11_definition\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "308_23_use\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "308_28_level\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "308_35_flags\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "bit_and\000std", NULL,
    {.position = POS(311, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "syntax_error\000", NULL,
    {.position = POS(314, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "on\000", NULL,
    {.position = POS(309, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "allow_unused\000", NULL,
    {.position = POS(320, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not\000", NULL,
    {.position = POS(320, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not\000std", NULL,
    {.position = POS(323, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "contains\000", NULL,
    {.position = POS(324, 13)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "329_10_node_type\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "INLINE_PARAMETER\000", NULL,
    {.position = POS(334, 26)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "PARAMETER\000", NULL,
    {.position = POS(335, 26)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "338_14_arguments\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "343_18_first_argument\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "344_18_node_type_of_first_argument\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "ATTRIBUTE\000", NULL,
    {.position = POS(346, 19)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "ATTRIBUTE_WITH_SETTER\000", NULL,
    {.position = POS(346, 30)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "349_22_func\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "truncate_until\000", NULL,
    {.position = POS(350, 23)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "353_26_value\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "FUNCTOR\000", NULL,
    {.position = POS(359, 50)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "EXTERN\000", NULL,
    {.position = POS(361, 49)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "DERIVED\000", NULL,
    {.position = POS(362, 59)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "366_38_new_info\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "first\000", NULL,
    {.position = POS(371, 43)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "INITIALIZED_COMPOUND\000", NULL,
    {.position = POS(372, 52)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "second\000", NULL,
    {.position = POS(374, 64)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "INITIALIZED\000", NULL,
    {.position = POS(374, 52)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "CONSTANT\000", NULL,
    {.position = POS(386, 67)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "minus\000std", NULL,
    {.position = POS(393, 28)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "append\000", NULL,
    {.position = POS(399, 58)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "string\000", NULL,
    {.position = POS(395, 27)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "key_of\000funky", NULL,
    {.position = POS(0, 0)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "CONSTANT_COMPOUND\000", NULL,
    {.position = POS(409, 46)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "POLYMORPHIC\000", NULL,
    {.position = POS(422, 23)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "EXTERN_POLYMORPHIC\000", NULL,
    {.position = POS(423, 18)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_an_integer\000", NULL,
    {.position = POS(430, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "LOCAL\000", NULL,
    {.position = POS(431, 37)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "DYNAMIC\000", NULL,
    {.position = POS(432, 37)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "434_32_level\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "436_10_argument\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "447_18_identifier\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "448_18_new_info\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "453_22_info\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "sequence\000", NULL,
    {.position = POS(465, 21)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "true\000", NULL,
    {.position = POS(478, 10)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "480_14_node\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "string\000std", NULL,
    {.position = POS(486, 14)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "489_25_value\000", NULL
  }
};

static FUNKY_NAMESPACE used_namespaces[] = {
  {"std", 1, 0},
  {"funky", 1, 0}
};

FUNKY_MODULE module__collect_variables = {
  "_collect_variables", // module name
  "collect_variables.fky", // module filename
  .major_version = 0,
  .minor_version = 0,
  .feature_flags = FEAT_POSITIONS|FEAT_FUNCTION_INFO,
  .marker = 0,
  0, // number of required modules
  0, // number of defined namespaces
  2, // number of used namespaces
  162, // number of constants
  165, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  constants_table,
  variables_table,
};
