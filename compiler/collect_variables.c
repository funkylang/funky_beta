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
  num_12 = -20,
  num_16 = -21,
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
  sequence_189_1 = -41,
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
  func_funky__categorize_variables = -73,
  lambda_36 = -74,
  lambda_37 = -75,
  lambda_38 = -76,
  func_categorize = -77,
  lambda_39 = -78,
  str_Object_with_slot = -79,
  lambda_40 = -80,
  lambda_41 = -81,
  lambda_42 = -82,
  chr_95 = -83,
  lambda_43 = -84,
  chr_58 = -85,
  lambda_44 = -86,
  str_Unused_variable = -87,
  lambda_definition_is_defined = -88,
  lambda_45 = -89,
  lambda_46 = -90,
  lambda_47 = -91,
  lambda_48 = -92,
  lambda_arguments_are_constant = -93,
  lambda_49 = -94,
  lambda_50 = -95,
  string_1 = -96,
  str_assign = -97,
  lambda_51 = -98,
  lambda_52 = -99,
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
  string_2 = -118,
  string_3 = -119,
  lambda_71 = -120,
  lambda_72 = -121,
  lambda_73 = -122,
  lambda_74 = -123,
  lambda_75 = -124,
  lambda_76 = -125,
  lambda_77 = -126,
  lambda_78 = -127,
  lambda_79 = -128,
  func_local_or_dynamic = -129,
  lambda_80 = -130,
  lambda_81 = -131,
  lambda_82 = -132,
  func_check_arguments = -133,
  lambda_83 = -134,
  lambda_84 = -135,
  lambda_85 = -136,
  lambda_86 = -137,
  lambda_87 = -138,
  lambda_88 = -139,
  lambda_89 = -140,
  lambda_info_is_defined = -141,
  lambda_90 = -142,
  func_check_new_info = -143,
  lambda_91 = -144,
  lambda_92 = -145,
  lambda_93 = -146,
  lambda_94 = -147,
  lambda_95 = -148,
  func_get_key = -149,
  lambda_96 = -150,
  lambda_FUNCTOR = -151,
  lambda_97 = -152,
  str_ext = -153,
  lambda_98 = -154,
  lambda_99 = -155,
  str_attr = -156,
  lambda_100 = -157,
  lambda_101 = -158
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
  var_132_44_self, // dynamic
  var_133_1_head, // dynamic
  var_head_of, // extern
  var_134_1_arguments, // dynamic
  var_arguments_of, // extern
  var_identifier_of, // extern
  var_is_a_builtin_function_name, // extern
  var_137_8_destinations, // dynamic
  var_137_22_rest, // dynamic
  var_137_39_argument, // dynamic
  var_138_1_node_type, // dynamic
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
  var_180_45_self, // dynamic
  var_181_1_identifier, // dynamic
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
  var_206_47_self, // dynamic
  var_REDEFINED_ON_TOP_LEVEL, // extern
  var_REDEFINED, // extern
  var_funky_types__update, // extern
  var_223_41_self, // dynamic
  var_funky_types__functor, // extern
  var_242_42_self, // dynamic
  var_BUILTIN, // extern
  var_funky_types__pair, // extern
  var_USED_POLYMORPHIC, // extern
  var_argument_of, // extern
  var_funky_types__inline_attribute_value_pair, // extern
  var_funky_types__inline_method_value_pair, // extern
  var_expression_of, // extern
  var_funky__merge_variables, // initialized
  var_267_11_left_definition, // dynamic
  var_267_28_left_level, // dynamic
  var_268_12_right_definition, // dynamic
  var_268_30_right_level, // dynamic
  var_is_defined, // extern
  var_TOP_LEVEL, // extern
  var_MULTI_LEVEL, // extern
  var_merge, // extern
  var_funky__categorize_variables, // initialized
  var_287_31_variables, // dynamic
  var_288_1_new_variables, // dynamic
  var_290_3_name, // dynamic
  var_290_8_info, // dynamic
  var_next, // extern
  var_for_each, // extern
  var_299_14_name, // dynamic
  var_300_6_definition, // dynamic
  var_300_18_level, // dynamic
  var_300_25_flags, // dynamic
  var_std__bit_and, // extern
  var_syntax_error, // extern
  var_on, // extern
  var_allow_unused, // extern
  var_not, // extern
  var_std__not, // extern
  var_contains, // extern
  var_318_1_node_type, // dynamic
  var_INLINE_PARAMETER, // extern
  var_PARAMETER, // extern
  var_327_1_arguments, // dynamic
  var_332_1_first_argument, // dynamic
  var_333_1_node_type_of_first_argument, // dynamic
  var_ATTRIBUTE, // extern
  var_ATTRIBUTE_WITH_SETTER, // extern
  var_338_1_func, // dynamic
  var_truncate_until, // extern
  var_342_1_value, // dynamic
  var_FUNCTOR, // extern
  var_EXTERN, // extern
  var_DERIVED, // extern
  var_355_1_new_info, // dynamic
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
  var_419_29_level, // dynamic
  var_421_3_argument, // dynamic
  var_432_1_identifier, // dynamic
  var_433_1_new_info, // dynamic
  var_438_1_info, // dynamic
  var_sequence, // extern
  var_true, // extern
  var_465_11_node, // dynamic
  var_std__string, // extern
  var_474_12_value, // dynamic
  var__END
};


static TAB_NUM t_func_std_types__list___collect_variables[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 119_37_self
  // map_reduce self collect_variables merge_variables empty_insert_order_table
  var_map_reduce, 4, LOCAL(1), var_collect_variables, var_merge_variables, var_empty_insert_order_table, TAIL_CALL,
  POS(120, 3)
};

static TAB_NUM t_func_funky_types__body___collect_variables[] = {
  4, // locals
  1, // parameters
  LOCAL(2), // 122_39_self
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
  POS(130, 3)
};

static TAB_NUM t_func_funky_types__statement___collect_variables[] = {
  2, // locals
  1, // parameters
  var_132_44_self,
  // $head head_of(self)
  var_head_of, 1, var_132_44_self, 1, var_133_1_head,
  // $arguments arguments_of(self)
  var_arguments_of, 1, var_132_44_self, 1, var_134_1_arguments,
  // identifier_of(head).is_a_builtin_function_name:
  var_identifier_of, 1, var_133_1_head, 1, LOCAL(1),
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

static TAB_NUM t_lambda_identifier_ofhead_is_a_builtin_function_name[] = {
  3, // locals
  0, // parameters
  // filter $destinations $rest arguments: (argument)
  var_filter, 2, var_134_1_arguments, lambda_1, 2, var_137_8_destinations, var_137_22_rest,
  // length_of(rest) == 1
  var_length_of, 1, var_137_22_rest, 1, LOCAL(1),
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

static TAB_NUM t_lambda_1[] = {
  2, // locals
  1, // parameters
  var_137_39_argument,
  // $node_type node_type_of(argument)
  var_node_type_of, 1, var_137_39_argument, 1, var_138_1_node_type,
  // node_type == DEFINITION
  var_std__equal, 2, var_138_1_node_type, var_DEFINITION, 1, LOCAL(1),
  // 
  var_std__or, 2, LOCAL(1), lambda_2, 1, LOCAL(2),
  // ->
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(138, 9),
  POS(141, 13),
  POS(140, 13),
  POS(139, 9)
};

static TAB_NUM t_lambda_2[] = {
  2, // locals
  0, // parameters
  // node_type == REDEFINITION && kind_of(argument) == TEMPORARY
  var_std__equal, 2, var_138_1_node_type, var_REDEFINITION, 1, LOCAL(1),
  // node_type == REDEFINITION && kind_of(argument) == TEMPORARY
  var_std__and, 2, LOCAL(1), lambda_3, 1, LOCAL(2),
  // node_type == REDEFINITION && kind_of(argument) == TEMPORARY
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(142, 13),
  POS(142, 13),
  POS(142, 13)
};

static TAB_NUM t_lambda_3[] = {
  2, // locals
  0, // parameters
  // kind_of(argument) == TEMPORARY
  var_kind_of, 1, var_137_39_argument, 1, LOCAL(1),
  // kind_of(argument) == TEMPORARY
  var_std__equal, 2, LOCAL(1), var_TEMPORARY, 1, LOCAL(2),
  // kind_of(argument) == TEMPORARY
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(142, 42),
  POS(142, 42),
  POS(142, 42)
};

static TAB_NUM t_lambda_4[] = {
  4, // locals
  0, // parameters
  // rest(1)) == ATTRIBUTE_VALUE_PAIR
  var_137_22_rest, 1, num_1, 1, LOCAL(1),
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

static TAB_NUM t_lambda_5[] = {
  4, // locals
  0, // parameters
  // rest(1)) == METHOD_VALUE_PAIR
  var_137_22_rest, 1, num_1, 1, LOCAL(1),
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

static TAB_NUM t_lambda_6[] = {
  3, // locals
  0, // parameters
  // rest(1)) == TYPE_FUNCTION
  var_137_22_rest, 1, num_1, 1, LOCAL(1),
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

static TAB_NUM t_lambda_7[] = {
  8, // locals
  0, // parameters
  // destinations(1))
  var_137_8_destinations, 1, num_1, 1, LOCAL(1),
  // identifier_of(destinations(1))
  var_identifier_of, 1, LOCAL(1), 1, LOCAL(2),
  // USED | HAS_SLOTS)
  var_std__bit_or, 2, var_USED, var_HAS_SLOTS, 1, LOCAL(3),
  // tuple(undefined current_level USED | HAS_SLOTS)
  var_tuple, 3, var_undefined, var_current_level, LOCAL(3), 1, LOCAL(4),
  // 
  var_std__key_value_pair, 2, LOCAL(2), LOCAL(4), 1, LOCAL(5),
  // insert_order_table
  var_insert_order_table, 1, LOCAL(5), 1, LOCAL(6),
  // rest(1))
  var_137_22_rest, 1, num_1, 1, LOCAL(7),
  // collect_variables(rest(1))
  var_collect_variables, 1, LOCAL(7), 1, LOCAL(8),
  // merge_variables
  var_merge_variables, 2, LOCAL(6), LOCAL(8), TAIL_CALL,
  POS(154, 31),
  POS(154, 17),
  POS(155, 47),
  POS(155, 17),
  POS(153, 16),
  POS(152, 13),
  POS(156, 31),
  POS(156, 13),
  POS(151, 11)
};

static TAB_NUM t_lambda_8[] = {
  2, // locals
  0, // parameters
  // length_of(destinations) == 1:
  var_length_of, 1, var_137_8_destinations, 1, LOCAL(1),
  // length_of(destinations) == 1:
  var_std__equal, 2, LOCAL(1), num_1, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_9, func_collect_statement, TAIL_CALL,
  POS(159, 13),
  POS(159, 13),
  POS(158, 11)
};

static TAB_NUM t_lambda_9[] = {
  7, // locals
  0, // parameters
  // destinations(1)) = tuple(self current_level 0)
  var_137_8_destinations, 1, num_1, 1, LOCAL(1),
  // identifier_of(destinations(1)) = tuple(self current_level 0)
  var_identifier_of, 1, LOCAL(1), 1, LOCAL(2),
  // tuple(self current_level 0)
  var_tuple, 3, var_132_44_self, var_current_level, num_0, 1, LOCAL(3),
  // identifier_of(destinations(1)) = tuple(self current_level 0)
  var_std__key_value_pair, 2, LOCAL(2), LOCAL(3), 1, LOCAL(4),
  // insert_order_table
  var_insert_order_table, 1, LOCAL(4), 1, LOCAL(5),
  // push(rest head)
  var_push, 2, var_137_22_rest, var_133_1_head, 1, LOCAL(6),
  // map_reduce
  var_map_reduce, 4, LOCAL(6), var_collect_variables, var_merge_variables, var_empty_insert_order_table, 1, LOCAL(7),
  // merge_variables
  var_merge_variables, 2, LOCAL(5), LOCAL(7), TAIL_CALL,
  POS(162, 33),
  POS(162, 19),
  POS(162, 52),
  POS(162, 19),
  POS(161, 17),
  POS(164, 19),
  POS(163, 17),
  POS(160, 15)
};

static TAB_NUM t_func_collect_statement[] = {
  1, // locals
  0, // parameters
  // push(arguments head)
  var_push, 2, var_134_1_arguments, var_133_1_head, 1, LOCAL(1),
  // map_reduce
  var_map_reduce, 4, LOCAL(1), var_collect_variables, var_merge_variables, var_empty_insert_order_table, TAIL_CALL,
  POS(173, 7),
  POS(172, 5)
};

static TAB_NUM t_func_funky_types__definition___collect_variables[] = {
  4, // locals
  1, // parameters
  var_180_45_self,
  // $identifier identifier_of(self)
  var_identifier_of, 1, var_180_45_self, 1, var_181_1_identifier,
  // identifier(1).is_a_digit
  var_181_1_identifier, 1, num_1, 1, LOCAL(1),
  // is_a_digit
  var_is_a_digit, 1, LOCAL(1), 1, LOCAL(2),
  // $flags
  var_if, 3, LOCAL(2), lambda_10, lambda_11, 1, LOCAL(4),
  // tuple(self current_level flags)
  var_tuple, 3, var_180_45_self, var_current_level, LOCAL(4), 1, LOCAL(1),
  // identifier = tuple(self current_level flags)
  var_std__key_value_pair, 2, var_181_1_identifier, LOCAL(1), 1, LOCAL(2),
  // insert_order_table
  var_insert_order_table, 1, LOCAL(2), 1, LOCAL(3),
  // ->
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(181, 3),
  POS(184, 7),
  POS(184, 21),
  POS(182, 3),
  POS(193, 20),
  POS(193, 7),
  POS(192, 5),
  POS(191, 3)
};

static TAB_NUM t_lambda_10[] = {
  0, // locals
  0, // parameters
  //  0
  LET, 1, num_0, TAIL_CALL,
  POS(185, 9)
};

static TAB_NUM t_lambda_11[] = {
  4, // locals
  0, // parameters
  // length_of(identifier)+1)
  var_length_of, 1, var_181_1_identifier, 1, LOCAL(1),
  // length_of(identifier)+1)
  var_std__plus, 2, LOCAL(1), num_1, 1, LOCAL(2),
  // source_position_of(self)(length_of(identifier)+1)
  var_source_position_of, 1, var_180_45_self, 1, LOCAL(3),
  // source_position_of(self)(length_of(identifier)+1)
  LOCAL(3), 1, LOCAL(2), 1, LOCAL(4),
  // case
  var_case, 4, LOCAL(4), sequence_189_1, lambda_12, lambda_13, TAIL_CALL,
  POS(188, 36),
  POS(188, 36),
  POS(188, 11),
  POS(188, 11),
  POS(187, 9)
};

static TAB_NUM t_lambda_12[] = {
  0, // locals
  0, // parameters
  //  HAS_SLOTS
  LET, 1, var_HAS_SLOTS, TAIL_CALL,
  POS(189, 22)
};

static TAB_NUM t_lambda_13[] = {
  0, // locals
  0, // parameters
  //  0
  LET, 1, num_0, TAIL_CALL,
  POS(190, 13)
};

static TAB_NUM t_func_collect_parameter[] = {
  7, // locals
  1, // parameters
  LOCAL(7), // 198_21_self
  // funky::name_of(self) = tuple(self current_level 0)
  var_funky__name_of, 1, LOCAL(7), 1, LOCAL(1),
  // tuple(self current_level 0)
  var_tuple, 3, LOCAL(7), var_current_level, num_0, 1, LOCAL(2),
  // funky::name_of(self) = tuple(self current_level 0)
  var_std__key_value_pair, 2, LOCAL(1), LOCAL(2), 1, LOCAL(3),
  // insert_order_table
  var_insert_order_table, 1, LOCAL(3), 1, LOCAL(4),
  // option_of(self))
  var_option_of, 1, LOCAL(7), 1, LOCAL(5),
  // collect_variables(option_of(self))
  var_collect_variables, 1, LOCAL(5), 1, LOCAL(6),
  // merge_variables
  var_merge_variables, 2, LOCAL(4), LOCAL(6), TAIL_CALL,
  POS(201, 7),
  POS(201, 30),
  POS(201, 7),
  POS(200, 5),
  POS(202, 23),
  POS(202, 5),
  POS(199, 3)
};

static TAB_NUM t_func_funky_types__redefinition___collect_variables[] = {
  2, // locals
  1, // parameters
  var_206_47_self,
  // $kind kind_of(self)
  var_kind_of, 1, var_206_47_self, 1, LOCAL(2),
  // kind == TEMPORARY
  var_std__equal, 2, LOCAL(2), var_TEMPORARY, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_14, lambda_15, TAIL_CALL,
  POS(207, 3),
  POS(209, 5),
  POS(208, 3)
};

static TAB_NUM t_lambda_14[] = {
  0, // locals
  0, // parameters
  //  empty_insert_order_table
  LET, 1, var_empty_insert_order_table, TAIL_CALL,
  POS(210, 7)
};

static TAB_NUM t_lambda_15[] = {
  6, // locals
  0, // parameters
  // identifier_of(self)
  var_identifier_of, 1, var_206_47_self, 1, LOCAL(1),
  // current_level == 0
  var_std__equal, 2, var_current_level, num_0, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_16, lambda_17, 1, LOCAL(3),
  // tuple
  var_tuple, 3, var_undefined, var_current_level, LOCAL(3), 1, LOCAL(4),
  // 
  var_std__key_value_pair, 2, LOCAL(1), LOCAL(4), 1, LOCAL(5),
  // insert_order_table
  var_insert_order_table, 1, LOCAL(5), 1, LOCAL(6),
  // 
  LET, 1, LOCAL(6), TAIL_CALL,
  POS(214, 11),
  POS(219, 15),
  POS(218, 13),
  POS(215, 11),
  POS(213, 10),
  POS(212, 7),
  POS(211, 7)
};

static TAB_NUM t_lambda_16[] = {
  0, // locals
  0, // parameters
  //  REDEFINED_ON_TOP_LEVEL
  LET, 1, var_REDEFINED_ON_TOP_LEVEL, TAIL_CALL,
  POS(220, 17)
};

static TAB_NUM t_lambda_17[] = {
  0, // locals
  0, // parameters
  //  REDEFINED
  LET, 1, var_REDEFINED, TAIL_CALL,
  POS(221, 17)
};

static TAB_NUM t_func_funky_types__update___collect_variables[] = {
  2, // locals
  1, // parameters
  var_223_41_self,
  // $kind kind_of(self)
  var_kind_of, 1, var_223_41_self, 1, LOCAL(2),
  // kind == TEMPORARY
  var_std__equal, 2, LOCAL(2), var_TEMPORARY, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_18, lambda_19, TAIL_CALL,
  POS(224, 3),
  POS(226, 5),
  POS(225, 3)
};

static TAB_NUM t_lambda_18[] = {
  0, // locals
  0, // parameters
  //  empty_insert_order_table
  LET, 1, var_empty_insert_order_table, TAIL_CALL,
  POS(227, 7)
};

static TAB_NUM t_lambda_19[] = {
  6, // locals
  0, // parameters
  // identifier_of(self)
  var_identifier_of, 1, var_223_41_self, 1, LOCAL(1),
  // current_level == 0
  var_std__equal, 2, var_current_level, num_0, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_20, lambda_21, 1, LOCAL(3),
  // tuple
  var_tuple, 3, var_undefined, var_current_level, LOCAL(3), 1, LOCAL(4),
  // 
  var_std__key_value_pair, 2, LOCAL(1), LOCAL(4), 1, LOCAL(5),
  // insert_order_table
  var_insert_order_table, 1, LOCAL(5), 1, LOCAL(6),
  // 
  LET, 1, LOCAL(6), TAIL_CALL,
  POS(231, 11),
  POS(236, 15),
  POS(235, 13),
  POS(232, 11),
  POS(230, 10),
  POS(229, 7),
  POS(228, 7)
};

static TAB_NUM t_lambda_20[] = {
  1, // locals
  0, // parameters
  // REDEFINED_ON_TOP_LEVEL | USED
  var_std__bit_or, 2, var_REDEFINED_ON_TOP_LEVEL, var_USED, 1, LOCAL(1),
  //  REDEFINED_ON_TOP_LEVEL | USED
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(237, 18),
  POS(237, 17)
};

static TAB_NUM t_lambda_21[] = {
  1, // locals
  0, // parameters
  // REDEFINED | USED
  var_std__bit_or, 2, var_REDEFINED, var_USED, 1, LOCAL(1),
  //  REDEFINED | USED
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(238, 18),
  POS(238, 17)
};

static TAB_NUM t_func_funky_types__functor___collect_variables[] = {
  2, // locals
  1, // parameters
  var_242_42_self,
  // $kind kind_of(self)
  var_kind_of, 1, var_242_42_self, 1, LOCAL(2),
  // TEMPORARY, BUILTIN -> empty_insert_order_table
  var_std__sequence, 2, var_TEMPORARY, var_BUILTIN, 1, LOCAL(1),
  // case kind
  var_case, 4, LOCAL(2), LOCAL(1), lambda_22, lambda_23, TAIL_CALL,
  POS(243, 3),
  POS(245, 5),
  POS(244, 3)
};

static TAB_NUM t_lambda_22[] = {
  0, // locals
  0, // parameters
  //  empty_insert_order_table
  LET, 1, var_empty_insert_order_table, TAIL_CALL,
  POS(245, 26)
};

static TAB_NUM t_lambda_23[] = {
  4, // locals
  0, // parameters
  // identifier_of(self) = tuple(undefined current_level USED)
  var_identifier_of, 1, var_242_42_self, 1, LOCAL(1),
  // tuple(undefined current_level USED)
  var_tuple, 3, var_undefined, var_current_level, var_USED, 1, LOCAL(2),
  // identifier_of(self) = tuple(undefined current_level USED)
  var_std__key_value_pair, 2, LOCAL(1), LOCAL(2), 1, LOCAL(3),
  // insert_order_table
  var_insert_order_table, 1, LOCAL(3), 1, LOCAL(4),
  // 
  LET, 1, LOCAL(4), TAIL_CALL,
  POS(248, 9),
  POS(248, 31),
  POS(248, 9),
  POS(247, 7),
  POS(246, 7)
};

static TAB_NUM t_func_funky_types__pair___collect_variables[] = {
  7, // locals
  1, // parameters
  LOCAL(7), // 250_39_self
  // identifier_of(self) = tuple(undefined current_level USED_POLYMORPHIC)
  var_identifier_of, 1, LOCAL(7), 1, LOCAL(1),
  // tuple(undefined current_level USED_POLYMORPHIC)
  var_tuple, 3, var_undefined, var_current_level, var_USED_POLYMORPHIC, 1, LOCAL(2),
  // identifier_of(self) = tuple(undefined current_level USED_POLYMORPHIC)
  var_std__key_value_pair, 2, LOCAL(1), LOCAL(2), 1, LOCAL(3),
  // insert_order_table
  var_insert_order_table, 1, LOCAL(3), 1, LOCAL(4),
  // argument_of(self))
  var_argument_of, 1, LOCAL(7), 1, LOCAL(5),
  // collect_variables(argument_of(self))
  var_collect_variables, 1, LOCAL(5), 1, LOCAL(6),
  // merge_variables
  var_merge_variables, 2, LOCAL(4), LOCAL(6), TAIL_CALL,
  POS(253, 7),
  POS(253, 29),
  POS(253, 7),
  POS(252, 5),
  POS(254, 23),
  POS(254, 5),
  POS(251, 3)
};

static TAB_NUM t_func_collect_inline_pair[] = {
  7, // locals
  1, // parameters
  LOCAL(7), // 259_23_self
  // identifier_of(self) = tuple(undefined current_level USED_POLYMORPHIC)
  var_identifier_of, 1, LOCAL(7), 1, LOCAL(1),
  // tuple(undefined current_level USED_POLYMORPHIC)
  var_tuple, 3, var_undefined, var_current_level, var_USED_POLYMORPHIC, 1, LOCAL(2),
  // identifier_of(self) = tuple(undefined current_level USED_POLYMORPHIC)
  var_std__key_value_pair, 2, LOCAL(1), LOCAL(2), 1, LOCAL(3),
  // insert_order_table
  var_insert_order_table, 1, LOCAL(3), 1, LOCAL(4),
  // expression_of(self))
  var_expression_of, 1, LOCAL(7), 1, LOCAL(5),
  // collect_variables(expression_of(self))
  var_collect_variables, 1, LOCAL(5), 1, LOCAL(6),
  // merge_variables
  var_merge_variables, 2, LOCAL(4), LOCAL(6), TAIL_CALL,
  POS(262, 7),
  POS(262, 29),
  POS(262, 7),
  POS(261, 5),
  POS(263, 23),
  POS(263, 5),
  POS(260, 3)
};

static TAB_NUM t_func_funky__merge_variables[] = {
  2, // locals
  2, // parameters
  LOCAL(1), // 265_26_left
  LOCAL(2), // 265_31_right
  // merge left right: (left_info right_info)
  var_merge, 3, LOCAL(1), LOCAL(2), lambda_24, TAIL_CALL,
  POS(266, 3)
};

static TAB_NUM t_lambda_24[] = {
  10, // locals
  2, // parameters
  LOCAL(7), // 266_19_left_info
  LOCAL(8), // 266_29_right_info
  // left_info $left_definition $left_level $left_flags
  LOCAL(7), 0, 3, var_267_11_left_definition, var_267_28_left_level, LOCAL(9),
  // right_info $right_definition $right_level $right_flags
  LOCAL(8), 0, 3, var_268_12_right_definition, var_268_30_right_level, LOCAL(10),
  // is_defined
  var_is_defined, 1, var_267_11_left_definition, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_25, lambda_26, 1, LOCAL(2),
  // left_level == right_level || left_level == TOP_LEVEL
  var_std__equal, 2, var_267_28_left_level, var_268_30_right_level, 1, LOCAL(3),
  // left_level == right_level || left_level == TOP_LEVEL
  var_std__or, 2, LOCAL(3), lambda_27, 1, LOCAL(4),
  // if
  var_if, 3, LOCAL(4), lambda_28, lambda_29, 1, LOCAL(5),
  // left_flags|right_flags
  var_std__bit_or, 2, LOCAL(9), LOCAL(10), 1, LOCAL(6),
  // tuple
  var_tuple, 3, LOCAL(2), LOCAL(5), LOCAL(6), TAIL_CALL,
  POS(267, 5),
  POS(268, 5),
  POS(271, 25),
  POS(270, 7),
  POS(275, 9),
  POS(275, 9),
  POS(274, 7),
  POS(285, 7),
  POS(269, 5)
};

static TAB_NUM t_lambda_25[] = {
  0, // locals
  0, // parameters
  //  left_definition
  LET, 1, var_267_11_left_definition, TAIL_CALL,
  POS(272, 11)
};

static TAB_NUM t_lambda_26[] = {
  0, // locals
  0, // parameters
  //  right_definition
  LET, 1, var_268_12_right_definition, TAIL_CALL,
  POS(273, 11)
};

static TAB_NUM t_lambda_27[] = {
  1, // locals
  0, // parameters
  // left_level == TOP_LEVEL
  var_std__equal, 2, var_267_28_left_level, var_TOP_LEVEL, 1, LOCAL(1),
  // left_level == TOP_LEVEL
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(275, 38),
  POS(275, 38)
};

static TAB_NUM t_lambda_28[] = {
  0, // locals
  0, // parameters
  //  left_level
  LET, 1, var_267_28_left_level, TAIL_CALL,
  POS(276, 11)
};

static TAB_NUM t_lambda_29[] = {
  2, // locals
  0, // parameters
  // right_level == TOP_LEVEL
  var_std__equal, 2, var_268_30_right_level, var_TOP_LEVEL, 1, LOCAL(1),
  // 
  var_std__or, 2, LOCAL(1), lambda_30, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_34, lambda_35, TAIL_CALL,
  POS(280, 15),
  POS(279, 15),
  POS(278, 11)
};

static TAB_NUM t_lambda_30[] = {
  3, // locals
  0, // parameters
  // is_defined && left_level == 0
  var_is_defined, 1, var_267_11_left_definition, 1, LOCAL(1),
  // is_defined && left_level == 0
  var_std__and, 2, LOCAL(1), lambda_31, 1, LOCAL(2),
  // 
  var_std__or, 2, LOCAL(2), lambda_32, 1, LOCAL(3),
  // left_definition.is_defined && left_level == 0
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(281, 31),
  POS(281, 31),
  POS(279, 15),
  POS(281, 15)
};

static TAB_NUM t_lambda_31[] = {
  1, // locals
  0, // parameters
  // left_level == 0
  var_std__equal, 2, var_267_28_left_level, num_0, 1, LOCAL(1),
  // left_level == 0
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(281, 45),
  POS(281, 45)
};

static TAB_NUM t_lambda_32[] = {
  2, // locals
  0, // parameters
  // is_defined && right_level == 0
  var_is_defined, 1, var_268_12_right_definition, 1, LOCAL(1),
  // is_defined && right_level == 0
  var_std__and, 2, LOCAL(1), lambda_33, 1, LOCAL(2),
  // right_definition.is_defined && right_level == 0
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(282, 32),
  POS(282, 32),
  POS(282, 15)
};

static TAB_NUM t_lambda_33[] = {
  1, // locals
  0, // parameters
  // right_level == 0
  var_std__equal, 2, var_268_30_right_level, num_0, 1, LOCAL(1),
  // right_level == 0
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(282, 46),
  POS(282, 46)
};

static TAB_NUM t_lambda_34[] = {
  0, // locals
  0, // parameters
  //  TOP_LEVEL
  LET, 1, var_TOP_LEVEL, TAIL_CALL,
  POS(283, 15)
};

static TAB_NUM t_lambda_35[] = {
  0, // locals
  0, // parameters
  //  MULTI_LEVEL
  LET, 1, var_MULTI_LEVEL, TAIL_CALL,
  POS(284, 15)
};

static TAB_NUM t_func_funky__categorize_variables[] = {
  0, // locals
  1, // parameters
  var_287_31_variables,
  // $new_variables empty_insert_order_table
  LET, 1, var_empty_insert_order_table, 1, var_288_1_new_variables,
  // for_each variables
  var_for_each, 3, var_287_31_variables, lambda_36, lambda_38, TAIL_CALL,
  POS(288, 3),
  POS(289, 3)
};

static TAB_NUM t_lambda_36[] = {
  2, // locals
  2, // parameters
  var_290_3_name,
  var_290_8_info,
  // new_variables(name).is_defined
  var_288_1_new_variables, 1, var_290_3_name, 1, LOCAL(1),
  // is_defined
  var_is_defined, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), var_next, lambda_37, TAIL_CALL,
  POS(292, 9),
  POS(292, 29),
  POS(291, 7)
};

static TAB_NUM t_lambda_37[] = {
  0, // locals
  0, // parameters
  // categorize name info !new_variables
  func_categorize, 2, var_290_3_name, var_290_8_info, 1, var_288_1_new_variables,
  // next
  var_next, 0, TAIL_CALL,
  POS(295, 11),
  POS(296, 11)
};

static TAB_NUM t_lambda_38[] = {
  0, // locals
  0, // parameters
  //  new_variables
  LET, 1, var_288_1_new_variables, TAIL_CALL,
  POS(297, 7)
};

static TAB_NUM t_func_categorize[] = {
  5, // locals
  2, // parameters
  var_299_14_name,
  LOCAL(5), // 299_19_info
  // info $definition $level $flags
  LOCAL(5), 0, 3, var_300_6_definition, var_300_18_level, var_300_25_flags,
  // HAS_SLOTS | REDEFINED_ON_TOP_LEVEL)
  var_std__bit_or, 2, var_HAS_SLOTS, var_REDEFINED_ON_TOP_LEVEL, 1, LOCAL(1),
  // flags & (HAS_SLOTS | REDEFINED_ON_TOP_LEVEL)
  var_std__bit_and, 2, var_300_25_flags, LOCAL(1), 1, LOCAL(2),
  // HAS_SLOTS | REDEFINED_ON_TOP_LEVEL
  var_std__bit_or, 2, var_HAS_SLOTS, var_REDEFINED_ON_TOP_LEVEL, 1, LOCAL(3),
  // 
  var_std__equal, 2, LOCAL(2), LOCAL(3), 1, LOCAL(4),
  // on
  var_on, 2, LOCAL(4), lambda_39, 0,
  // not(allow_unused)
  var_not, 1, var_allow_unused, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_40, 1, LOCAL(2),
  // on
  var_on, 2, LOCAL(2), lambda_44, 0,
  // is_defined:
  var_is_defined, 1, var_300_6_definition, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_definition_is_defined, lambda_77, TAIL_CALL,
  POS(300, 5),
  POS(303, 18),
  POS(303, 9),
  POS(304, 9),
  POS(302, 9),
  POS(301, 5),
  POS(309, 9),
  POS(308, 9),
  POS(307, 5),
  POS(317, 18),
  POS(316, 5)
};

static TAB_NUM t_lambda_39[] = {
  0, // locals
  0, // parameters
  // syntax_error "Object with slots redefined on top-level" definition
  var_syntax_error, 2, str_Object_with_slot, var_300_6_definition, TAIL_CALL,
  POS(306, 9)
};

static TAB_NUM t_lambda_40[] = {
  2, // locals
  0, // parameters
  // is_defined
  var_is_defined, 1, var_300_6_definition, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_41, 1, LOCAL(2),
  // definition.is_defined
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(310, 20),
  POS(308, 9),
  POS(310, 9)
};

static TAB_NUM t_lambda_41[] = {
  3, // locals
  0, // parameters
  // flags & USED == 0
  var_std__bit_and, 2, var_300_25_flags, var_USED, 1, LOCAL(1),
  // flags & USED == 0
  var_std__equal, 2, LOCAL(1), num_0, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_42, 1, LOCAL(3),
  // flags & USED == 0
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(311, 9),
  POS(311, 9),
  POS(308, 9),
  POS(311, 9)
};

static TAB_NUM t_lambda_42[] = {
  4, // locals
  0, // parameters
  // name(1) != '_'
  var_299_14_name, 1, num_1, 1, LOCAL(1),
  // name(1) != '_'
  var_std__equal, 2, LOCAL(1), chr_95, 1, LOCAL(2),
  // name(1) != '_'
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // 
  var_std__and, 2, LOCAL(3), lambda_43, 1, LOCAL(4),
  // name(1) != '_'
  LET, 1, LOCAL(4), TAIL_CALL,
  POS(312, 9),
  POS(312, 9),
  POS(312, 9),
  POS(308, 9),
  POS(312, 9)
};

static TAB_NUM t_lambda_43[] = {
  2, // locals
  0, // parameters
  // name .contains. ':')
  var_contains, 2, var_299_14_name, chr_58, 1, LOCAL(1),
  // not(name .contains. ':')
  var_not, 1, LOCAL(1), 1, LOCAL(2),
  // not(name .contains. ':')
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(313, 13),
  POS(313, 9),
  POS(313, 9)
};

static TAB_NUM t_lambda_44[] = {
  0, // locals
  0, // parameters
  // syntax_error "Unused variable" definition
  var_syntax_error, 2, str_Unused_variable, var_300_6_definition, TAIL_CALL,
  POS(315, 9)
};

static TAB_NUM t_lambda_definition_is_defined[] = {
  3, // locals
  0, // parameters
  // $node_type node_type_of(definition)
  var_node_type_of, 1, var_300_6_definition, 1, var_318_1_node_type,
  // flags & REDEFINED_ON_TOP_LEVEL == REDEFINED_ON_TOP_LEVEL
  var_std__bit_and, 2, var_300_25_flags, var_REDEFINED_ON_TOP_LEVEL, 1, LOCAL(1),
  // flags & REDEFINED_ON_TOP_LEVEL == REDEFINED_ON_TOP_LEVEL
  var_std__equal, 2, LOCAL(1), var_REDEFINED_ON_TOP_LEVEL, 1, LOCAL(2),
  // 
  var_std__or, 2, LOCAL(2), lambda_45, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), func_local_or_dynamic, lambda_48, TAIL_CALL,
  POS(318, 9),
  POS(321, 13),
  POS(321, 13),
  POS(320, 13),
  POS(319, 9)
};

static TAB_NUM t_lambda_45[] = {
  2, // locals
  0, // parameters
  // node_type == DEFINITION
  var_std__equal, 2, var_318_1_node_type, var_DEFINITION, 1, LOCAL(1),
  // 
  var_std__or, 2, LOCAL(1), lambda_46, 1, LOCAL(2),
  // node_type == DEFINITION
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(322, 13),
  POS(320, 13),
  POS(322, 13)
};

static TAB_NUM t_lambda_46[] = {
  2, // locals
  0, // parameters
  // node_type == INLINE_PARAMETER
  var_std__equal, 2, var_318_1_node_type, var_INLINE_PARAMETER, 1, LOCAL(1),
  // 
  var_std__or, 2, LOCAL(1), lambda_47, 1, LOCAL(2),
  // node_type == INLINE_PARAMETER
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(323, 13),
  POS(320, 13),
  POS(323, 13)
};

static TAB_NUM t_lambda_47[] = {
  1, // locals
  0, // parameters
  // node_type == PARAMETER
  var_std__equal, 2, var_318_1_node_type, var_PARAMETER, 1, LOCAL(1),
  // node_type == PARAMETER
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(324, 13),
  POS(324, 13)
};

static TAB_NUM t_lambda_48[] = {
  1, // locals
  0, // parameters
  // $arguments arguments_of(definition)
  var_arguments_of, 1, var_300_6_definition, 1, var_327_1_arguments,
  // check_arguments $arguments_are_constant !new_variables
  func_check_arguments, 2, var_327_1_arguments, var_300_18_level, 2, LOCAL(1), var_288_1_new_variables,
  // if
  var_if, 3, LOCAL(1), lambda_arguments_are_constant, func_local_or_dynamic, TAIL_CALL,
  POS(327, 13),
  POS(328, 13),
  POS(330, 13)
};

static TAB_NUM t_lambda_arguments_are_constant[] = {
  1, // locals
  0, // parameters
  // $first_argument arguments(1)
  var_327_1_arguments, 1, num_1, 1, var_332_1_first_argument,
  // $node_type_of_first_argument node_type_of(first_argument)
  var_node_type_of, 1, var_332_1_first_argument, 1, var_333_1_node_type_of_first_argument,
  // ATTRIBUTE, ATTRIBUTE_WITH_SETTER
  var_std__sequence, 2, var_ATTRIBUTE, var_ATTRIBUTE_WITH_SETTER, 1, LOCAL(1),
  // case node_type_of_first_argument
  var_case, 4, var_333_1_node_type_of_first_argument, LOCAL(1), lambda_49, lambda_50, TAIL_CALL,
  POS(332, 17),
  POS(333, 17),
  POS(335, 19),
  POS(334, 17)
};

static TAB_NUM t_lambda_49[] = {
  2, // locals
  0, // parameters
  // tuple(node_type_of_first_argument undefined))
  var_tuple, 2, var_333_1_node_type_of_first_argument, var_undefined, 1, LOCAL(1),
  // new_variables(name tuple(node_type_of_first_argument undefined))
  var_288_1_new_variables, 2, var_299_14_name, LOCAL(1), 1, LOCAL(2),
  //  new_variables(name tuple(node_type_of_first_argument undefined))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(336, 41),
  POS(336, 22),
  POS(336, 21)
};

static TAB_NUM t_lambda_50[] = {
  2, // locals
  0, // parameters
  // head_of(definition)) .truncate_until. "::"
  var_head_of, 1, var_300_6_definition, 1, LOCAL(1),
  // identifier_of(head_of(definition)) .truncate_until. "::"
  var_identifier_of, 1, LOCAL(1), 1, LOCAL(2),
  // $func
  var_truncate_until, 2, LOCAL(2), string_1, 1, var_338_1_func,
  // func == "assign":
  var_std__equal, 2, var_338_1_func, str_assign, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_51, lambda_69, TAIL_CALL,
  POS(339, 37),
  POS(339, 23),
  POS(338, 21),
  POS(341, 23),
  POS(340, 21)
};

static TAB_NUM t_lambda_51[] = {
  2, // locals
  0, // parameters
  // node_type_of(first_argument) == DEFINITION
  var_node_type_of, 1, var_332_1_first_argument, 1, LOCAL(1),
  // node_type_of(first_argument) == DEFINITION
  var_std__equal, 2, LOCAL(1), var_DEFINITION, 1, LOCAL(2),
  // $value
  var_if, 3, LOCAL(2), lambda_52, lambda_53, 1, var_342_1_value,
  // node_type_of(value) == FUNCTOR:
  var_node_type_of, 1, var_342_1_value, 1, LOCAL(1),
  // node_type_of(value) == FUNCTOR:
  var_std__equal, 2, LOCAL(1), var_FUNCTOR, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_54, lambda_61, TAIL_CALL,
  POS(344, 29),
  POS(344, 29),
  POS(342, 25),
  POS(348, 27),
  POS(348, 27),
  POS(347, 25)
};

static TAB_NUM t_lambda_52[] = {
  1, // locals
  0, // parameters
  // arguments(2)
  var_327_1_arguments, 1, num_2, 1, LOCAL(1),
  //  arguments(2)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(345, 32),
  POS(345, 31)
};

static TAB_NUM t_lambda_53[] = {
  0, // locals
  0, // parameters
  //  first_argument
  LET, 1, var_332_1_first_argument, TAIL_CALL,
  POS(346, 31)
};

static TAB_NUM t_lambda_54[] = {
  2, // locals
  0, // parameters
  // kind_of(value) == EXTERN
  var_kind_of, 1, var_342_1_value, 1, LOCAL(1),
  // kind_of(value) == EXTERN
  var_std__equal, 2, LOCAL(1), var_EXTERN, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_55, lambda_56, TAIL_CALL,
  POS(350, 31),
  POS(350, 31),
  POS(349, 29)
};

static TAB_NUM t_lambda_55[] = {
  2, // locals
  0, // parameters
  // tuple(DERIVED value))
  var_tuple, 2, var_DERIVED, var_342_1_value, 1, LOCAL(1),
  // new_variables(name tuple(DERIVED value))
  var_288_1_new_variables, 2, var_299_14_name, LOCAL(1), 1, LOCAL(2),
  //  new_variables(name tuple(DERIVED value))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(351, 53),
  POS(351, 34),
  POS(351, 33)
};

static TAB_NUM t_lambda_56[] = {
  2, // locals
  0, // parameters
  // level == 0 || level == TOP_LEVEL:
  var_std__equal, 2, var_300_18_level, num_0, 1, LOCAL(1),
  // level == 0 || level == TOP_LEVEL:
  var_std__or, 2, LOCAL(1), lambda_57, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_58, func_local_or_dynamic, TAIL_CALL,
  POS(354, 35),
  POS(354, 35),
  POS(353, 33)
};

static TAB_NUM t_lambda_57[] = {
  1, // locals
  0, // parameters
  // level == TOP_LEVEL:
  var_std__equal, 2, var_300_18_level, var_TOP_LEVEL, 1, LOCAL(1),
  // level == TOP_LEVEL:
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(354, 49),
  POS(354, 49)
};

static TAB_NUM t_lambda_58[] = {
  4, // locals
  0, // parameters
  // identifier_of(value))
  var_identifier_of, 1, var_342_1_value, 1, LOCAL(1),
  // $new_info new_variables(identifier_of(value))
  var_288_1_new_variables, 1, LOCAL(1), 1, var_355_1_new_info,
  // first(new_info)
  var_first, 1, var_355_1_new_info, 1, LOCAL(1),
  // DERIVED, INITIALIZED_COMPOUND
  var_std__sequence, 2, var_DERIVED, var_INITIALIZED_COMPOUND, 1, LOCAL(2),
  // case
  var_case, 4, LOCAL(1), LOCAL(2), lambda_59, lambda_60, 1, LOCAL(3),
  // new_variables
  var_288_1_new_variables, 2, var_299_14_name, LOCAL(3), 1, LOCAL(4),
  // ->
  LET, 1, LOCAL(4), TAIL_CALL,
  POS(355, 61),
  POS(355, 37),
  POS(360, 43),
  POS(361, 43),
  POS(359, 41),
  POS(357, 39),
  POS(356, 37)
};

static TAB_NUM t_lambda_59[] = {
  1, // locals
  0, // parameters
  // tuple(DERIVED value)
  var_tuple, 2, var_DERIVED, var_342_1_value, 1, LOCAL(1),
  //  tuple(DERIVED value)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(362, 46),
  POS(362, 45)
};

static TAB_NUM t_lambda_60[] = {
  2, // locals
  0, // parameters
  // second(new_info))
  var_second, 1, var_355_1_new_info, 1, LOCAL(1),
  // tuple(INITIALIZED second(new_info))
  var_tuple, 2, var_INITIALIZED, LOCAL(1), 1, LOCAL(2),
  //  tuple(INITIALIZED second(new_info))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(363, 64),
  POS(363, 46),
  POS(363, 45)
};

static TAB_NUM t_lambda_61[] = {
  2, // locals
  0, // parameters
  // flags & REDEFINED == 0:
  var_std__bit_and, 2, var_300_25_flags, var_REDEFINED, 1, LOCAL(1),
  // flags & REDEFINED == 0:
  var_std__equal, 2, LOCAL(1), num_0, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_62, lambda_66, TAIL_CALL,
  POS(367, 31),
  POS(367, 31),
  POS(366, 29)
};

static TAB_NUM t_lambda_62[] = {
  2, // locals
  0, // parameters
  // name .contains. ':' || flags & HAS_SLOTS != 0
  var_contains, 2, var_299_14_name, chr_58, 1, LOCAL(1),
  // name .contains. ':' || flags & HAS_SLOTS != 0
  var_std__or, 2, LOCAL(1), lambda_63, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_64, lambda_65, TAIL_CALL,
  POS(369, 35),
  POS(369, 35),
  POS(368, 33)
};

static TAB_NUM t_lambda_63[] = {
  3, // locals
  0, // parameters
  // flags & HAS_SLOTS != 0
  var_std__bit_and, 2, var_300_25_flags, var_HAS_SLOTS, 1, LOCAL(1),
  // flags & HAS_SLOTS != 0
  var_std__equal, 2, LOCAL(1), num_0, 1, LOCAL(2),
  // flags & HAS_SLOTS != 0
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // flags & HAS_SLOTS != 0
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(369, 58),
  POS(369, 58),
  POS(369, 58),
  POS(369, 58)
};

static TAB_NUM t_lambda_64[] = {
  2, // locals
  0, // parameters
  // tuple(INITIALIZED value))
  var_tuple, 2, var_INITIALIZED, var_342_1_value, 1, LOCAL(1),
  // new_variables(name tuple(INITIALIZED value))
  var_288_1_new_variables, 2, var_299_14_name, LOCAL(1), 1, LOCAL(2),
  //  new_variables(name tuple(INITIALIZED value))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(370, 57),
  POS(370, 38),
  POS(370, 37)
};

static TAB_NUM t_lambda_65[] = {
  2, // locals
  0, // parameters
  // tuple(CONSTANT value))
  var_tuple, 2, var_CONSTANT, var_342_1_value, 1, LOCAL(1),
  // new_variables(name tuple(CONSTANT value))
  var_288_1_new_variables, 2, var_299_14_name, LOCAL(1), 1, LOCAL(2),
  //  new_variables(name tuple(CONSTANT value))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(371, 57),
  POS(371, 38),
  POS(371, 37)
};

static TAB_NUM t_lambda_66[] = {
  2, // locals
  0, // parameters
  // level == 0 || level == TOP_LEVEL
  var_std__equal, 2, var_300_18_level, num_0, 1, LOCAL(1),
  // level == 0 || level == TOP_LEVEL
  var_std__or, 2, LOCAL(1), lambda_67, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_68, func_local_or_dynamic, TAIL_CALL,
  POS(374, 35),
  POS(374, 35),
  POS(373, 33)
};

static TAB_NUM t_lambda_67[] = {
  1, // locals
  0, // parameters
  // level == TOP_LEVEL
  var_std__equal, 2, var_300_18_level, var_TOP_LEVEL, 1, LOCAL(1),
  // level == TOP_LEVEL
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(374, 49),
  POS(374, 49)
};

static TAB_NUM t_lambda_68[] = {
  2, // locals
  0, // parameters
  // tuple(INITIALIZED value))
  var_tuple, 2, var_INITIALIZED, var_342_1_value, 1, LOCAL(1),
  // new_variables(name tuple(INITIALIZED value))
  var_288_1_new_variables, 2, var_299_14_name, LOCAL(1), 1, LOCAL(2),
  //  new_variables(name tuple(INITIALIZED value))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(375, 57),
  POS(375, 38),
  POS(375, 37)
};

static TAB_NUM t_lambda_69[] = {
  2, // locals
  0, // parameters
  // flags & REDEFINED == 0:
  var_std__bit_and, 2, var_300_25_flags, var_REDEFINED, 1, LOCAL(1),
  // flags & REDEFINED == 0:
  var_std__equal, 2, LOCAL(1), num_0, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_70, lambda_74, TAIL_CALL,
  POS(379, 27),
  POS(379, 27),
  POS(378, 25)
};

static TAB_NUM t_lambda_70[] = {
  4, // locals
  0, // parameters
  // length_of(arguments)-1
  var_length_of, 1, var_327_1_arguments, 1, LOCAL(1),
  // $n length_of(arguments)-1
  var_std__minus, 2, LOCAL(1), num_1, 1, LOCAL(4),
  // map_reduce(arguments get_key append "")
  var_map_reduce, 4, var_327_1_arguments, func_get_key, var_append, string_2, 1, LOCAL(1),
  // !definition.funky::key_of
  var_string, 4, var_338_1_func, LOCAL(4), string_3, LOCAL(1), 1, LOCAL(3),
  // definition.funky::key_of
  LET, -1, var_300_6_definition, var_funky__key_of, LOCAL(3), var_300_6_definition,
  // name .contains. ':' || flags & HAS_SLOTS != 0
  var_contains, 2, var_299_14_name, chr_58, 1, LOCAL(1),
  // name .contains. ':' || flags & HAS_SLOTS != 0
  var_std__or, 2, LOCAL(1), lambda_71, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_72, lambda_73, TAIL_CALL,
  POS(380, 32),
  POS(380, 29),
  POS(386, 33),
  POS(381, 29),
  POS(381, 30),
  POS(388, 31),
  POS(388, 31),
  POS(387, 29)
};

static TAB_NUM t_lambda_71[] = {
  3, // locals
  0, // parameters
  // flags & HAS_SLOTS != 0
  var_std__bit_and, 2, var_300_25_flags, var_HAS_SLOTS, 1, LOCAL(1),
  // flags & HAS_SLOTS != 0
  var_std__equal, 2, LOCAL(1), num_0, 1, LOCAL(2),
  // flags & HAS_SLOTS != 0
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // flags & HAS_SLOTS != 0
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(388, 54),
  POS(388, 54),
  POS(388, 54),
  POS(388, 54)
};

static TAB_NUM t_lambda_72[] = {
  2, // locals
  0, // parameters
  // tuple(INITIALIZED_COMPOUND definition)
  var_tuple, 2, var_INITIALIZED_COMPOUND, var_300_6_definition, 1, LOCAL(1),
  // new_variables
  var_288_1_new_variables, 2, var_299_14_name, LOCAL(1), 1, LOCAL(2),
  // 
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(391, 40),
  POS(390, 33),
  POS(389, 33)
};

static TAB_NUM t_lambda_73[] = {
  2, // locals
  0, // parameters
  // tuple(CONSTANT_COMPOUND definition)
  var_tuple, 2, var_CONSTANT_COMPOUND, var_300_6_definition, 1, LOCAL(1),
  // new_variables
  var_288_1_new_variables, 2, var_299_14_name, LOCAL(1), 1, LOCAL(2),
  // 
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(394, 40),
  POS(393, 33),
  POS(392, 33)
};

static TAB_NUM t_lambda_74[] = {
  2, // locals
  0, // parameters
  // level == 0 || level == TOP_LEVEL
  var_std__equal, 2, var_300_18_level, num_0, 1, LOCAL(1),
  // level == 0 || level == TOP_LEVEL
  var_std__or, 2, LOCAL(1), lambda_75, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_76, func_local_or_dynamic, TAIL_CALL,
  POS(397, 31),
  POS(397, 31),
  POS(396, 29)
};

static TAB_NUM t_lambda_75[] = {
  1, // locals
  0, // parameters
  // level == TOP_LEVEL
  var_std__equal, 2, var_300_18_level, var_TOP_LEVEL, 1, LOCAL(1),
  // level == TOP_LEVEL
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(397, 45),
  POS(397, 45)
};

static TAB_NUM t_lambda_76[] = {
  2, // locals
  0, // parameters
  // tuple(INITIALIZED definition)
  var_tuple, 2, var_INITIALIZED, var_300_6_definition, 1, LOCAL(1),
  // new_variables
  var_288_1_new_variables, 2, var_299_14_name, LOCAL(1), 1, LOCAL(2),
  // 
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(400, 40),
  POS(399, 33),
  POS(398, 33)
};

static TAB_NUM t_lambda_77[] = {
  6, // locals
  0, // parameters
  // flags & POLYMORPHIC != 0
  var_std__bit_and, 2, var_300_25_flags, var_POLYMORPHIC, 1, LOCAL(1),
  // flags & POLYMORPHIC != 0
  var_std__equal, 2, LOCAL(1), num_0, 1, LOCAL(2),
  // flags & POLYMORPHIC != 0
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_78, lambda_79, 1, LOCAL(4),
  // !new_variables(name)
  var_tuple, 2, LOCAL(4), var_undefined, 1, LOCAL(6),
  // new_variables(name)
  var_288_1_new_variables, 2, var_299_14_name, LOCAL(6), 1, var_288_1_new_variables,
  // -> new_variables
  LET, 1, var_288_1_new_variables, TAIL_CALL,
  POS(407, 15),
  POS(407, 15),
  POS(407, 15),
  POS(406, 13),
  POS(404, 9),
  POS(404, 10),
  POS(411, 9)
};

static TAB_NUM t_lambda_78[] = {
  0, // locals
  0, // parameters
  //  EXTERN_POLYMORPHIC
  LET, 1, var_EXTERN_POLYMORPHIC, TAIL_CALL,
  POS(408, 17)
};

static TAB_NUM t_lambda_79[] = {
  0, // locals
  0, // parameters
  //  EXTERN
  LET, 1, var_EXTERN, TAIL_CALL,
  POS(409, 17)
};

static TAB_NUM t_func_local_or_dynamic[] = {
  2, // locals
  0, // parameters
  // is_an_integer && not(name .contains. ':')
  var_is_an_integer, 1, var_300_18_level, 1, LOCAL(1),
  // is_an_integer && not(name .contains. ':')
  var_std__and, 2, LOCAL(1), lambda_80, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_81, lambda_82, TAIL_CALL,
  POS(415, 15),
  POS(415, 15),
  POS(414, 7)
};

static TAB_NUM t_lambda_80[] = {
  2, // locals
  0, // parameters
  // name .contains. ':')
  var_contains, 2, var_299_14_name, chr_58, 1, LOCAL(1),
  // not(name .contains. ':')
  var_not, 1, LOCAL(1), 1, LOCAL(2),
  // not(name .contains. ':')
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(415, 36),
  POS(415, 32),
  POS(415, 32)
};

static TAB_NUM t_lambda_81[] = {
  2, // locals
  0, // parameters
  // tuple(LOCAL undefined))
  var_tuple, 2, var_LOCAL, var_undefined, 1, LOCAL(1),
  // new_variables(name tuple(LOCAL undefined))
  var_288_1_new_variables, 2, var_299_14_name, LOCAL(1), 1, LOCAL(2),
  //  new_variables(name tuple(LOCAL undefined))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(416, 31),
  POS(416, 12),
  POS(416, 11)
};

static TAB_NUM t_lambda_82[] = {
  2, // locals
  0, // parameters
  // tuple(DYNAMIC undefined))
  var_tuple, 2, var_DYNAMIC, var_undefined, 1, LOCAL(1),
  // new_variables(name tuple(DYNAMIC undefined))
  var_288_1_new_variables, 2, var_299_14_name, LOCAL(1), 1, LOCAL(2),
  //  new_variables(name tuple(DYNAMIC undefined))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(417, 31),
  POS(417, 12),
  POS(417, 11)
};

static TAB_NUM t_func_check_arguments[] = {
  1, // locals
  2, // parameters
  LOCAL(1), // 419_19_arguments
  var_419_29_level,
  // for_each arguments
  var_for_each, 3, LOCAL(1), lambda_83, lambda_95, TAIL_CALL,
  POS(420, 5)
};

static TAB_NUM t_lambda_83[] = {
  2, // locals
  1, // parameters
  var_421_3_argument,
  // node_type_of(argument) == FUNCTOR:
  var_node_type_of, 1, var_421_3_argument, 1, LOCAL(1),
  // node_type_of(argument) == FUNCTOR:
  var_std__equal, 2, LOCAL(1), var_FUNCTOR, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_84, var_next, TAIL_CALL,
  POS(423, 11),
  POS(423, 11),
  POS(422, 9)
};

static TAB_NUM t_lambda_84[] = {
  2, // locals
  0, // parameters
  // kind_of(argument) == EXTERN:
  var_kind_of, 1, var_421_3_argument, 1, LOCAL(1),
  // kind_of(argument) == EXTERN:
  var_std__equal, 2, LOCAL(1), var_EXTERN, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_85, lambda_88, TAIL_CALL,
  POS(426, 15),
  POS(426, 15),
  POS(425, 13)
};

static TAB_NUM t_lambda_85[] = {
  2, // locals
  0, // parameters
  // level == 0 || level == TOP_LEVEL
  var_std__equal, 2, var_419_29_level, num_0, 1, LOCAL(1),
  // level == 0 || level == TOP_LEVEL
  var_std__or, 2, LOCAL(1), lambda_86, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), var_next, lambda_87, TAIL_CALL,
  POS(428, 19),
  POS(428, 19),
  POS(427, 17)
};

static TAB_NUM t_lambda_86[] = {
  1, // locals
  0, // parameters
  // level == TOP_LEVEL
  var_std__equal, 2, var_419_29_level, var_TOP_LEVEL, 1, LOCAL(1),
  // level == TOP_LEVEL
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(428, 33),
  POS(428, 33)
};

static TAB_NUM t_lambda_87[] = {
  0, // locals
  0, // parameters
  //  false new_variables
  LET, 2, var_false, var_288_1_new_variables, TAIL_CALL,
  POS(430, 21)
};

static TAB_NUM t_lambda_88[] = {
  1, // locals
  0, // parameters
  // $identifier identifier_of(argument)
  var_identifier_of, 1, var_421_3_argument, 1, var_432_1_identifier,
  // $new_info new_variables(identifier)
  var_288_1_new_variables, 1, var_432_1_identifier, 1, var_433_1_new_info,
  // is_defined
  var_is_defined, 1, var_433_1_new_info, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), func_check_new_info, lambda_89, TAIL_CALL,
  POS(432, 17),
  POS(433, 17),
  POS(435, 28),
  POS(434, 17)
};

static TAB_NUM t_lambda_89[] = {
  1, // locals
  0, // parameters
  // $info variables(identifier)
  var_287_31_variables, 1, var_432_1_identifier, 1, var_438_1_info,
  // is_defined:
  var_is_defined, 1, var_438_1_info, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_info_is_defined, lambda_90, TAIL_CALL,
  POS(438, 21),
  POS(440, 28),
  POS(439, 21)
};

static TAB_NUM t_lambda_info_is_defined[] = {
  0, // locals
  0, // parameters
  // categorize identifier info !new_variables
  func_categorize, 2, var_432_1_identifier, var_438_1_info, 1, var_288_1_new_variables,
  // !new_info new_variables(identifier)
  var_288_1_new_variables, 1, var_432_1_identifier, 1, var_433_1_new_info,
  // check_new_info
  func_check_new_info, 0, TAIL_CALL,
  POS(441, 25),
  POS(442, 25),
  POS(443, 25)
};

static TAB_NUM t_lambda_90[] = {
  0, // locals
  0, // parameters
  //  false new_variables # a non-constant temporary
  LET, 2, var_false, var_288_1_new_variables, TAIL_CALL,
  POS(444, 25)
};

static TAB_NUM t_func_check_new_info[] = {
  3, // locals
  0, // parameters
  // first(new_info)
  var_first, 1, var_433_1_new_info, 1, LOCAL(1),
  // CONSTANT, CONSTANT_COMPOUND
  var_std__sequence, 2, var_CONSTANT, var_CONSTANT_COMPOUND, 1, LOCAL(2),
  // sequence
  var_sequence, 5, var_INITIALIZED, var_INITIALIZED_COMPOUND, var_ATTRIBUTE, var_ATTRIBUTE_WITH_SETTER, var_DERIVED, 1, LOCAL(3),
  // case first(new_info)
  var_case, 6, LOCAL(1), LOCAL(2), var_next, LOCAL(3), lambda_91, lambda_94, TAIL_CALL,
  POS(447, 24),
  POS(448, 21),
  POS(450, 21),
  POS(447, 19)
};

static TAB_NUM t_lambda_91[] = {
  2, // locals
  0, // parameters
  // level == 0 || level == TOP_LEVEL
  var_std__equal, 2, var_419_29_level, num_0, 1, LOCAL(1),
  // level == 0 || level == TOP_LEVEL
  var_std__or, 2, LOCAL(1), lambda_92, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), var_next, lambda_93, TAIL_CALL,
  POS(458, 25),
  POS(458, 25),
  POS(457, 23)
};

static TAB_NUM t_lambda_92[] = {
  1, // locals
  0, // parameters
  // level == TOP_LEVEL
  var_std__equal, 2, var_419_29_level, var_TOP_LEVEL, 1, LOCAL(1),
  // level == TOP_LEVEL
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(458, 39),
  POS(458, 39)
};

static TAB_NUM t_lambda_93[] = {
  0, // locals
  0, // parameters
  //  false new_variables
  LET, 2, var_false, var_288_1_new_variables, TAIL_CALL,
  POS(460, 27)
};

static TAB_NUM t_lambda_94[] = {
  0, // locals
  0, // parameters
  //  false new_variables
  LET, 2, var_false, var_288_1_new_variables, TAIL_CALL,
  POS(461, 23)
};

static TAB_NUM t_lambda_95[] = {
  0, // locals
  0, // parameters
  //  true new_variables
  LET, 2, var_true, var_288_1_new_variables, TAIL_CALL,
  POS(463, 9)
};

static TAB_NUM t_func_get_key[] = {
  2, // locals
  1, // parameters
  var_465_11_node,
  // node_type_of(node)
  var_node_type_of, 1, var_465_11_node, 1, LOCAL(1),
  // DEFINITION, REDEFINITION -> ""
  var_std__sequence, 2, var_DEFINITION, var_REDEFINITION, 1, LOCAL(2),
  // case node_type_of(node)
  var_case, 6, LOCAL(1), LOCAL(2), lambda_96, var_FUNCTOR, lambda_FUNCTOR, lambda_101, TAIL_CALL,
  POS(466, 10),
  POS(467, 7),
  POS(466, 5)
};

static TAB_NUM t_lambda_96[] = {
  0, // locals
  0, // parameters
  //  ""
  LET, 1, string_2, TAIL_CALL,
  POS(467, 34)
};

static TAB_NUM t_lambda_FUNCTOR[] = {
  2, // locals
  0, // parameters
  // kind_of(node) == EXTERN
  var_kind_of, 1, var_465_11_node, 1, LOCAL(1),
  // kind_of(node) == EXTERN
  var_std__equal, 2, LOCAL(1), var_EXTERN, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_97, lambda_98, TAIL_CALL,
  POS(470, 11),
  POS(470, 11),
  POS(469, 9)
};

static TAB_NUM t_lambda_97[] = {
  2, // locals
  0, // parameters
  // identifier_of(node))"
  var_identifier_of, 1, var_465_11_node, 1, LOCAL(1),
  // "ext_@(identifier_of(node))"
  var_std__string, 2, str_ext, LOCAL(1), 1, LOCAL(2),
  //  "ext_@(identifier_of(node))"
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(471, 21),
  POS(471, 14),
  POS(471, 13)
};

static TAB_NUM t_lambda_98[] = {
  3, // locals
  0, // parameters
  // identifier_of(node))
  var_identifier_of, 1, var_465_11_node, 1, LOCAL(1),
  // $info new_variables(identifier_of(node))
  var_288_1_new_variables, 1, LOCAL(1), 1, LOCAL(2),
  // info $kind $value
  LOCAL(2), 0, 2, LOCAL(3), var_474_12_value,
  // ATTRIBUTE, ATTRIBUTE_WITH_SETTER
  var_std__sequence, 2, var_ATTRIBUTE, var_ATTRIBUTE_WITH_SETTER, 1, LOCAL(1),
  // case kind
  var_case, 4, LOCAL(3), LOCAL(1), lambda_99, lambda_100, TAIL_CALL,
  POS(473, 33),
  POS(473, 13),
  POS(474, 13),
  POS(476, 15),
  POS(475, 13)
};

static TAB_NUM t_lambda_99[] = {
  2, // locals
  0, // parameters
  // identifier_of(node))"
  var_identifier_of, 1, var_465_11_node, 1, LOCAL(1),
  // "attr_@(identifier_of(node))"
  var_std__string, 2, str_attr, LOCAL(1), 1, LOCAL(2),
  //  "attr_@(identifier_of(node))"
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(477, 26),
  POS(477, 18),
  POS(477, 17)
};

static TAB_NUM t_lambda_100[] = {
  1, // locals
  0, // parameters
  // get_key(value)
  func_get_key, 1, var_474_12_value, 1, LOCAL(1),
  //  get_key(value)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(478, 18),
  POS(478, 17)
};

static TAB_NUM t_lambda_101[] = {
  1, // locals
  0, // parameters
  // funky::key_of(node)
  var_funky__key_of, 1, var_465_11_node, 1, LOCAL(1),
  //  funky::key_of(node)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(479, 10),
  POS(479, 9)
};

static int sequence_189_1_arguments[] = {
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
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__list___collect_variables}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__body___collect_variables}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__statement___collect_variables}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_identifier_ofhead_is_a_builtin_function_name}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_3}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_4}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_5}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_6}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_7}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_8}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_9}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_collect_statement}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__definition___collect_variables}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_10}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_11}},
  {FLT_CHARACTER, 0, {.value = 46}},
  {FLT_CHARACTER, 0, {.value = 47}},
  {FLT_SEQUENCE, 2, {.arguments = sequence_189_1_arguments}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_12}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_13}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_collect_parameter}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__redefinition___collect_variables}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_14}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_15}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_16}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_17}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__update___collect_variables}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_18}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_19}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_20}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_21}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__functor___collect_variables}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_22}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_23}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__pair___collect_variables}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_collect_inline_pair}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky__merge_variables}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_24}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_25}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_26}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_27}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_28}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_29}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_30}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_31}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_32}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_33}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_34}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_35}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky__categorize_variables}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_36}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_37}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_38}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_categorize}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_39}},
  {FLT_STRING_8, 40, {.str_8 = "Object with slots redefined on top-level"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_40}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_41}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_42}},
  {FLT_CHARACTER, 0, {.value = 95}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_43}},
  {FLT_CHARACTER, 0, {.value = 58}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_44}},
  {FLT_STRING_8, 15, {.str_8 = "Unused variable"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_definition_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_45}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_46}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_47}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_48}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_arguments_are_constant}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_49}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_50}},
  {FLT_STRING_8, 2, {.str_8 = "::"}},
  {FLT_STRING_8, 6, {.str_8 = "assign"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_51}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_52}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_53}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_54}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_55}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_56}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_57}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_58}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_59}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_60}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_61}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_62}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_63}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_64}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_65}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_66}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_67}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_68}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_69}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_70}},
  {FLT_STRING_8, 0, {.str_8 = ""}},
  {FLT_STRING_8, 1, {.str_8 = "_"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_71}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_72}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_73}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_74}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_75}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_76}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_77}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_78}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_79}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_local_or_dynamic}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_80}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_81}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_82}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_check_arguments}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_83}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_84}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_85}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_86}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_87}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_88}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_89}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_info_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_90}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_check_new_info}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_91}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_92}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_93}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_94}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_95}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_get_key}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_96}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_FUNCTOR}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_97}},
  {FLT_STRING_8, 4, {.str_8 = "ext_"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_98}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_99}},
  {FLT_STRING_8, 5, {.str_8 = "attr_"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_100}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_101}}
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
    "assign\000std", NULL
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
    {.const_idx = -num_12}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "HAS_SLOTS\000funky", NULL,
    {.const_idx = -num_16}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "list\000std_types", std_types__list__attributes
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "collect_variables\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "merge_variables\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_insert_order_table\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "map_reduce\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 1,
    "body\000funky_types", funky_types__body__attributes
  },
  {
    FOT_UNKNOWN, 0, 0,
    "false\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "on_top_level\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "inc\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "parameters_of\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "statements_of\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 1,
    "statement\000funky_types", funky_types__statement__attributes
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "132_44_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "133_1_head\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "head_of\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "134_1_arguments\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "arguments_of\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "identifier_of\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_a_builtin_function_name\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "137_8_destinations\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "137_22_rest\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "137_39_argument\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "138_1_node_type\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "node_type_of\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "DEFINITION\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "equal\000std", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "REDEFINITION\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "kind_of\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "TEMPORARY\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "and\000std", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "or\000std", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "filter\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "length_of\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "ATTRIBUTE_VALUE_PAIR\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "METHOD_VALUE_PAIR\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "TYPE_FUNCTION\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "USED\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "HAS_SLOTS\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "bit_or\000std", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "undefined\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "tuple\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "key_value_pair\000std", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "insert_order_table\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "push\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 1,
    "definition\000funky_types", funky_types__definition__attributes
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "180_45_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "181_1_identifier\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_a_digit\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000std", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "source_position_of\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "sequence\000std", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "case\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 1,
    "parameter\000funky_types", funky_types__parameter__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "inline_parameter\000funky_types", funky_types__inline_parameter__attributes
  },
  {
    FOT_UNKNOWN, 0, 0,
    "name_of\000funky", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "option_of\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 1,
    "redefinition\000funky_types", funky_types__redefinition__attributes
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "206_47_self\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "REDEFINED_ON_TOP_LEVEL\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "REDEFINED\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 1,
    "update\000funky_types", funky_types__update__attributes
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "223_41_self\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 1,
    "functor\000funky_types", funky_types__functor__attributes
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "242_42_self\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "BUILTIN\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 1,
    "pair\000funky_types", funky_types__pair__attributes
  },
  {
    FOT_UNKNOWN, 0, 0,
    "USED_POLYMORPHIC\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "argument_of\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 1,
    "inline_attribute_value_pair\000funky_types", funky_types__inline_attribute_value_pair__attributes
  },
  {
    FOT_UNKNOWN, 0, 1,
    "inline_method_value_pair\000funky_types", funky_types__inline_method_value_pair__attributes
  },
  {
    FOT_UNKNOWN, 0, 0,
    "expression_of\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "merge_variables\000funky", NULL,
    {.const_idx = -func_funky__merge_variables}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "267_11_left_definition\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "267_28_left_level\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "268_12_right_definition\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "268_30_right_level\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_defined\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "TOP_LEVEL\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "MULTI_LEVEL\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "merge\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "categorize_variables\000funky", NULL,
    {.const_idx = -func_funky__categorize_variables}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "287_31_variables\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "288_1_new_variables\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "290_3_name\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "290_8_info\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "next\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "for_each\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "299_14_name\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "300_6_definition\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "300_18_level\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "300_25_flags\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "bit_and\000std", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "syntax_error\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "on\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "allow_unused\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not\000std", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "contains\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "318_1_node_type\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "INLINE_PARAMETER\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "PARAMETER\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "327_1_arguments\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "332_1_first_argument\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "333_1_node_type_of_first_argument\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "ATTRIBUTE\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "ATTRIBUTE_WITH_SETTER\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "338_1_func\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "truncate_until\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "342_1_value\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "FUNCTOR\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "EXTERN\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "DERIVED\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "355_1_new_info\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "first\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "INITIALIZED_COMPOUND\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "second\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "INITIALIZED\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "CONSTANT\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "minus\000std", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "append\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "string\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "key_of\000funky", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "CONSTANT_COMPOUND\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "POLYMORPHIC\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "EXTERN_POLYMORPHIC\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_an_integer\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "LOCAL\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "DYNAMIC\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "419_29_level\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "421_3_argument\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "432_1_identifier\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "433_1_new_info\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "438_1_info\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "sequence\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "true\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "465_11_node\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "string\000std", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "474_12_value\000", NULL
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
  .feature_flags = FEAT_POSITIONS,
  .marker = 0,
  0, // number of required modules
  0, // number of defined namespaces
  2, // number of used namespaces
  158, // number of constants
  162, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  constants_table,
  variables_table,
};
