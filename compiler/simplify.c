#include <stddef.h>
#include <stdint.h>

#include "runtime/common.h"
#include "runtime/builtins.h"
#include "runtime/fko.h"
#include "runtime/memory.h"

enum {
  tuple_50_0 = -1,
  func_funky__simplify_statement = -2,
  num_0 = -3,
  func_funky_types__variable___simplify = -4,
  func_funky_types__attribute_access___simplify = -5,
  func_funky_types__dummy_definition___simplify = -6,
  num_1 = -7,
  func_funky_types__functor___simplify = -8,
  lambda_1 = -9,
  lambda_2 = -10,
  func_simplify_extensions = -11,
  lambda_3 = -12,
  lambda_ATTRIBUTE_ACCESS = -13,
  lambda_4 = -14,
  lambda_5 = -15,
  lambda_6 = -16,
  lambda_7 = -17,
  lambda_8 = -18,
  lambda_9 = -19,
  lambda_10 = -20,
  lambda_IO_CALL = -21,
  lambda_11 = -22,
  func_simplify_parameter = -23,
  chr_95 = -24,
  lambda_12 = -25,
  lambda_13 = -26,
  func_funky_types__return___simplify = -27,
  str_assign = -28,
  func_funky_types__redefinition___simplify = -29,
  lambda_14 = -30,
  lambda_15 = -31,
  minus_num_2 = -32,
  lambda_16 = -33,
  lambda_FUNCTION_CALL = -34,
  lambda_17 = -35,
  lambda_18 = -36,
  lambda_2_ATTRIBUTE_ACCESS = -37,
  lambda_19 = -38,
  minus_num_1 = -39,
  lambda_20 = -40,
  lambda_2_FUNCTION_CALL = -41,
  lambda_3_ATTRIBUTE_ACCESS = -42,
  lambda_21 = -43,
  func_funky_types__update___simplify = -44,
  lambda_22 = -45,
  lambda_23 = -46,
  lambda_24 = -47,
  lambda_3_FUNCTION_CALL = -48,
  lambda_25 = -49,
  lambda_26 = -50,
  lambda_4_ATTRIBUTE_ACCESS = -51,
  lambda_27 = -52,
  lambda_28 = -53,
  lambda_4_FUNCTION_CALL = -54,
  lambda_5_ATTRIBUTE_ACCESS = -55,
  lambda_29 = -56,
  func_funky_types__definition___simplify = -57,
  func_funky_types__parenthesed_expression___simplify = -58,
  lambda_30 = -59,
  lambda_31 = -60,
  func_funky_types__pair___simplify = -61,
  lambda_argument_is_a_list = -62,
  lambda_32 = -63,
  lambda_33 = -64,
  lambda_34 = -65,
  num_2 = -66,
  str_too_many_argumen = -67,
  lambda_35 = -68,
  func_simplify_argument = -69,
  func_simplify_inline_pair = -70,
  func_resolve_identifier = -71,
  chr_58 = -72,
  lambda_namespace_is_not_empty = -73,
  lambda_true_namespace_is_defined = -74,
  func_check = -75,
  lambda_36 = -76,
  lambda_37 = -77,
  lambda_version_is_defined = -78,
  string_1 = -79,
  func_resolve = -80,
  lambda_38 = -81,
  lambda_39 = -82,
  func_funky_types__expression___simplify = -83,
  lambda_operator_is_defined = -84,
  lambda_40 = -85,
  func_funky_types__negation___simplify = -86,
  lambda_41 = -87,
  chr_45 = -88,
  lambda_42 = -89,
  num_7 = -90,
  lambda_43 = -91,
  str_minus = -92,
  lambda_44 = -93,
  str_negate = -94,
  func_binop = -95,
  lambda_COMMA = -96,
  func_sequence_constructor = -97,
  lambda_45 = -98,
  lambda_46 = -99,
  str_sequence = -100,
  lambda_AND = -101,
  lambda_47 = -102,
  str_and = -103,
  lambda_OR = -104,
  lambda_48 = -105,
  str_or = -106,
  lambda_49 = -107,
  lambda_PLUS = -108,
  str_plus = -109,
  lambda_MINUS = -110,
  str_minus_2 = -111,
  lambda_TIMES = -112,
  str_times = -113,
  lambda_OVER = -114,
  str_over = -115,
  lambda_EQUAL = -116,
  str_equal = -117,
  lambda_NOT_EQUAL = -118,
  str_not = -119,
  lambda_LESS_THAN = -120,
  str_less = -121,
  lambda_GREATER_THAN = -122,
  lambda_LESS_EQUAL = -123,
  lambda_GREATER_EQUAL = -124,
  lambda_RANGE = -125,
  str_value_range = -126,
  lambda_KEY_VALUE = -127,
  str_key_value_pair = -128,
  lambda_SHIFT_LEFT = -129,
  str_shift_left = -130,
  lambda_SHIFT_RIGHT = -131,
  str_shift_right = -132,
  lambda_BIT_AND = -133,
  str_bit_and = -134,
  lambda_BIT_OR = -135,
  str_bit_or = -136,
  lambda_BIT_XOR = -137,
  str_bit_xor = -138,
  lambda_NAMED_OPERATOR = -139,
  lambda_50 = -140,
  str_operation = -141,
  num_9 = -142,
  str_left = -143,
  str_right = -144,
  lambda_2_operator_is_defined = -145,
  lambda_51 = -146,
  func_function_call = -147,
  func_function_call_from_list = -148,
  func_simplify_return = -149,
  func_funky_types__inline_statement___simplify = -150,
  func_funky_types__multiline_plus___simplify = -151,
  func_funky_types__multiline_minus___simplify = -152,
  func_funky_types__multiline_minus_with_remark___simplify = -153,
  func_funky_types__multiline_times___simplify = -154,
  func_funky_types__multiline_over___simplify = -155,
  func_funky_types__multiline_over_with_remark___simplify = -156,
  func_funky_types__multiline_shift_left___simplify = -157,
  func_funky_types__multiline_shift_right___simplify = -158,
  func_funky_types__multiline_equal___simplify = -159,
  func_funky_types__multiline_not_equal___simplify = -160,
  func_funky_types__multiline_less_equal___simplify = -161,
  func_funky_types__multiline_less_than___simplify = -162,
  func_funky_types__multiline_greater_equal___simplify = -163,
  func_funky_types__multiline_greater_than___simplify = -164,
  func_funky_types__multiline_and___simplify = -165,
  func_funky_types__multiline_or___simplify = -166,
  func_funky_types__multiline_bit_and___simplify = -167,
  func_funky_types__multiline_bit_and_with_remark___simplify = -168,
  func_funky_types__multiline_bit_or___simplify = -169,
  func_funky_types__multiline_bit_xor___simplify = -170,
  func_funky_types__multiline_assign___simplify = -171,
  func_simplify_multiline_operator = -172,
  lambda_filterarguments_ofself = -173,
  lambda_do_delay = -174,
  lambda_52 = -175,
  lambda_53 = -176,
  lambda_54 = -177,
  lambda_loop = -178,
  lambda_55 = -179,
  lambda_56 = -180,
  lambda_57 = -181,
  lambda_do_negate = -182,
  lambda_58 = -183,
  func_push_statement = -184,
  func_funky_types__inline_body___simplify = -185,
  func_funky_types__body___simplify = -186,
  str_func = -187,
  lambda_59 = -188,
  lambda_60 = -189,
  lambda_61 = -190,
  lambda_62 = -191,
  str_unexpected_state = -192,
  func_simplify_statements = -193,
  lambda_63 = -194,
  func_check_statements = -195,
  lambda_64 = -196,
  lambda_MULTILINE_REMARK = -197,
  lambda_65 = -198,
  str_Closing_parenthe = -199,
  lambda_OPEN_PARAMETERS = -200,
  lambda_66 = -201,
  lambda_67 = -202,
  str_Unexpected_openi = -203,
  lambda_CLOSE_PARAMETERS = -204,
  lambda_68 = -205,
  lambda_69 = -206,
  str_Unexpected_closi = -207,
  lambda_70 = -208,
  lambda_71 = -209,
  lambda_72 = -210,
  lambda_73 = -211,
  lambda_74 = -212,
  lambda_75 = -213,
  func_funky_types__statement___simplify = -214,
  lambda_FUNCTOR = -215,
  lambda_RETURN = -216,
  lambda_76 = -217,
  func_simplify_head_and_arguments = -218,
  lambda_77 = -219,
  lambda_78 = -220,
  lambda_79 = -221,
  lambda_80 = -222,
  lambda_81 = -223,
  lambda_82 = -224,
  lambda_83 = -225,
  str_Missing_argument = -226,
  lambda_84 = -227,
  str_Too_many_argumen = -228,
  lambda_is_an_assignment = -229,
  lambda_85 = -230,
  lambda_86 = -231,
  lambda_87 = -232,
  lambda_88 = -233,
  lambda_is_a_slot_definition = -234,
  str_const = -235,
  lambda_89 = -236,
  func_check_trailing_statements = -237,
  lambda_90 = -238,
  str_stdassign = -239,
  lambda_91 = -240,
  func_process_trailing_statements = -241,
  lambda_92 = -242,
  lambda_93 = -243,
  lambda_2_FUNCTOR = -244,
  lambda_94 = -245,
  lambda_INLINE_ATTRIBUTE_VALUE_PAIR = -246,
  lambda_95 = -247,
  lambda_96 = -248,
  str_TEMP_NOT_FOUND_I = -249,
  lambda_97 = -250,
  lambda_98 = -251,
  lambda_99 = -252,
  func_check_that_all_arguments_are_inputs = -253,
  lambda_100 = -254,
  str_Unexpected_outpu = -255,
  func_funky_types__numeric_literal___simplify = -256,
  chr_39 = -257,
  chr_46 = -258,
  string_2 = -259,
  key_value_pair_920_1 = -260,
  key_value_pair_921_1 = -261,
  str_num = -262,
  func_funky_types__character_literal___simplify = -263,
  func_funky_types__numeric_character_literal___simplify = -264,
  str_chr = -265,
  func_funky_types__named_character_literal___simplify = -266,
  lambda_101 = -267,
  lambda_102 = -268,
  str_Invalid_characte = -269,
  func_funky_types__at_character_literal___simplify = -270,
  string_3 = -271,
  func_create_numeric_character_literal = -272,
  func_funky_types__unique___simplify = -273,
  chr_32 = -274,
  str_uni = -275,
  func_funky_types__string_literal___simplify = -276,
  string_4 = -277,
  lambda_103 = -278,
  str_string = -279,
  lambda_104 = -280,
  lambda_105 = -281,
  lambda_CHARACTER_SEQUENCE = -282,
  lambda_106 = -283,
  lambda_107 = -284,
  lambda_108 = -285,
  lambda_NUMERIC_CHARACTER = -286,
  lambda_NAMED_CHARACTER = -287,
  lambda_109 = -288,
  lambda_NEWLINE = -289,
  chr_10 = -290,
  lambda_AT_CHARACTER = -291,
  chr_64 = -292,
  lambda_ESCAPE_EXPRESSION = -293,
  lambda_TAGGED_EMPTY_CHARACTER = -294,
  lambda_110 = -295,
  str_node_type_ofcomp = -296,
  lambda_111 = -297,
  lambda_112 = -298,
  lambda_113 = -299,
  lambda_114 = -300,
  str_stdstring = -301,
  func_add_characters = -302,
  lambda_115 = -303,
  lambda_116 = -304,
  str_string_2 = -305,
  func_std_types__list___simplify = -306,
  lambda_117 = -307,
  lambda_118 = -308,
  func_create_functor = -309,
  func_std = -310,
  str_std = -311,
  func_assign_attributes = -312,
  str__assign_attribut = -313,
  func_temporary = -314,
  str__temp = -315,
  func_redefine_temporary = -316,
  func_update_temporary = -317,
  func_create_statement = -318,
  lambda_arguments_is_not_empty = -319,
  lambda_119 = -320,
  lambda_120 = -321,
  lambda_121 = -322,
  lambda_122 = -323,
  func_expand_backquotes = -324,
  lambda_123 = -325,
  lambda_124 = -326,
  lambda_125 = -327,
  lambda_126 = -328,
  func_resolve_backquoted = -329,
  func_exctract_characters = -330,
  lambda_127 = -331,
  lambda_nl = -332,
  lambda_128 = -333,
  lambda_129 = -334,
  lambda_130 = -335,
  chr_34 = -336,
  lambda_quot = -337,
  chr_40 = -338,
  lambda_131 = -339,
  chr_41 = -340,
  lambda_132 = -341,
  func_funky_types__statement_list___append = -342,
  func_funky_types__statement_list___push_leading_statement = -343,
  func_funky_types__statement_list___push_trailing_statement = -344,
  func_collect_parameter_definitions = -345,
  lambda_133 = -346,
  func_collect_local_definitions = -347,
  lambda_134 = -348,
  func_funky_types__node___add_definitions = -349,
  func_funky_types__statement___add_definitions = -350,
  func_funky_types__node___add_definition = -351,
  func_funky_types__definition___add_definition = -352,
  lambda_135 = -353,
  lambda_136 = -354,
  str_Variable_is_alre = -355,
  func_add_parameter_definition = -356,
  func_funky__mangle_local_definition = -357,
  func_funky__mangle_position = -358
};

enum {
  var__START = FIRST_VAR-1,
  var_funky__simplify, // attribute
  var_std__assign, // extern
  var_push_leading_statement, // attribute
  var_push_trailing_statement, // attribute
  var_funky__kind_of, // attribute
  var_funky__no_of, // attribute
  var_funky__is_an_io_call, // attribute
  var_funky__is_a_definition, // attribute
  var_funky_types__functor, // extern
  var_no_of, // extern polymorphic
  var_undefined, // extern
  var_funky_types__node, // extern
  var_is_an_io_call, // extern polymorphic
  var_false, // extern
  var_kind_of, // extern polymorphic
  var_funky_types__definition, // extern
  var_funky_types__pair, // extern
  var_funky_types__inline_attribute_value_pair, // extern
  var_funky_types__inline_method_value_pair, // extern
  var_funky_types__statement, // extern
  var_is_a_definition, // extern polymorphic
  var_funky_types__statement_list, // initialized compound
  var_empty_list, // extern
  var_tuple, // extern
  var_funky__empty_statements, // derived
  var_funky__simplify_statement, // initialized
  var_simplify, // extern polymorphic
  var_push, // extern
  var_append, // extern polymorphic
  var_funky_types__variable, // extern
  var_empty_statements, // extern
  var_funky_types__attribute_access, // extern
  var_funky_types__dummy_definition, // extern
  var_std__plus, // extern
  var_69_33_self, // dynamic
  var_69_38_temp_no, // dynamic
  var_71_1_extensions, // dynamic
  var_extensions_of, // extern polymorphic
  var_is_empty, // extern
  var_if, // extern
  var_78_23_expression, // dynamic
  var_78_45_temp_no, // dynamic
  var_79_31_statements, // dynamic
  var_81_3_extension, // dynamic
  var_82_1_extension_node_type, // dynamic
  var_node_type_of, // extern
  var_FUNCTION_CALL, // extern
  var_REMARK_AND_MULTILINE_FUNCTION_CALL, // extern
  var_std__sequence, // extern
  var_ATTRIBUTE_ACCESS, // extern
  var_inc, // extern
  var_list, // extern
  var_next, // extern
  var_93_1_arguments, // dynamic
  var_arguments_of, // extern polymorphic
  var_length_of, // extern
  var_std__equal, // extern
  var_is_a_pair, // attribute
  var_std__and, // extern
  var_107_8_remark_arguments, // dynamic
  var_is_a_remark, // extern polymorphic
  var_filter, // extern
  var_is_not_empty, // extern
  var_std__or, // extern
  var_IO_CALL, // extern
  var_true, // extern
  var_case, // extern
  var_for_each, // extern
  var_funky_types__parameter, // extern
  var_funky_types__inline_parameter, // extern
  var_131_22_self, // dynamic
  var_131_27_temp_no, // dynamic
  var_option_of, // extern polymorphic
  var_132_35_statements, // dynamic
  var_funky__name_of, // extern polymorphic
  var_resolve_variable, // extern
  var_funky_types__return, // extern
  var_funky_types__redefinition, // extern
  var_149_38_self, // dynamic
  var_149_43_temp_no, // dynamic
  var_151_1_extensions, // dynamic
  var_157_1_result_temp_no, // dynamic
  var_158_1_base, // dynamic
  var_159_1_bases, // dynamic
  var_160_31_statements, // dynamic
  var_first, // extern
  var_new, // extern
  var_range, // extern
  var_163_3_extension, // dynamic
  var_167_1_remark_arguments, // dynamic
  var_167_19_arguments, // dynamic
  var_190_1_result, // dynamic
  var_194_1_extension, // dynamic
  var_pop, // extern
  var_identifier_of, // extern polymorphic
  var_source_group_of, // extern polymorphic
  var_source_position_of, // extern polymorphic
  var_196_1_destination, // dynamic
  var_funky__key_of, // extern polymorphic
  var_expression_of, // extern polymorphic
  var_from_to_by, // extern
  var_funky_types__update, // extern
  var_228_32_self, // dynamic
  var_228_37_temp_no, // dynamic
  var_230_1_extensions, // dynamic
  var_235_1_base, // dynamic
  var_236_1_bases, // dynamic
  var_237_31_statements, // dynamic
  var_239_3_extension, // dynamic
  var_243_1_remark_arguments, // dynamic
  var_243_19_arguments, // dynamic
  var_266_1_result, // dynamic
  var_271_1_extension, // dynamic
  var_273_1_destination, // dynamic
  var_funky_types__parenthesed_expression, // extern
  var_308_53_temp_no, // dynamic
  var_309_30_expression, // dynamic
  var_309_51_statements, // dynamic
  var_310_1_calls, // dynamic
  var_calls_of, // extern
  var_318_30_self, // dynamic
  var_318_35_temp_no, // dynamic
  var_320_1_argument, // dynamic
  var_argument_of, // extern polymorphic
  var_is_a_list, // extern
  var_not, // extern
  var_syntax_error, // extern
  var_funky__argument_of, // extern polymorphic
  var_funky__expression_of, // extern polymorphic
  var_345_22_node, // dynamic
  var_346_1_identifier, // dynamic
  var_347_1_namespace, // dynamic
  var_before, // extern
  var_350_1_true_namespace, // dynamic
  var_namespace_aliases, // extern
  var_is_defined, // extern
  var_from, // extern
  var_DEFINITION, // extern
  var_std__not, // extern
  var_363_1_version, // dynamic
  var_namespace_versions, // extern
  var_373_1_resolved_identifier, // dynamic
  var_LOCAL, // extern
  var_EXTERN, // extern
  var_funky_types__expression, // extern
  var_382_36_self, // dynamic
  var_382_41_temp_no, // dynamic
  var_383_1_operator, // dynamic
  var_operator_of, // extern
  var_384_10_expression, // dynamic
  var_384_51_statements, // dynamic
  var_funky_types__negation, // extern
  var_390_34_self, // dynamic
  var_390_39_temp_no, // dynamic
  var_391_10_expression, // dynamic
  var_391_51_statements, // dynamic
  var_NUMERIC_LITERAL, // extern
  var_394_1_digits, // dynamic
  var_digits_of, // extern polymorphic
  var_395_1_key, // dynamic
  var_put, // extern
  var_416_9_left, // dynamic
  var_416_14_operator, // dynamic
  var_416_23_temp_no, // dynamic
  var_416_31_statements, // dynamic
  var_417_1_operation, // dynamic
  var_418_1_right, // dynamic
  var_COMMA, // extern
  var_423_24_sequence, // dynamic
  var_423_33_rest, // dynamic
  var_SEQUENCE_EXPRESSION, // extern
  var_AND, // extern
  var_update_if, // extern
  var_funky_types__return_expression, // extern
  var_OR, // extern
  var_PLUS, // extern
  var_MINUS, // extern
  var_TIMES, // extern
  var_OVER, // extern
  var_EQUAL, // extern
  var_NOT_EQUAL, // extern
  var_LESS_THAN, // extern
  var_GREATER_THAN, // extern
  var_LESS_EQUAL, // extern
  var_GREATER_EQUAL, // extern
  var_RANGE, // extern
  var_KEY_VALUE, // extern
  var_SHIFT_LEFT, // extern
  var_SHIFT_RIGHT, // extern
  var_BIT_AND, // extern
  var_BIT_OR, // extern
  var_BIT_XOR, // extern
  var_NAMED_OPERATOR, // extern
  var_debug__dump, // extern
  var_debug__exit, // extern
  var_funky_types__inline_return, // extern
  var_funky_types__body, // extern
  var_statements_of, // extern polymorphic
  var_funky_types__inline_statement, // extern
  var_head_of, // extern polymorphic
  var_funky_types__multiline_plus, // extern
  var_funky_types__multiline_minus, // extern
  var_funky_types__multiline_minus_with_remark, // extern
  var_funky_types__multiline_times, // extern
  var_funky_types__multiline_over, // extern
  var_funky_types__multiline_over_with_remark, // extern
  var_funky_types__multiline_shift_left, // extern
  var_funky_types__multiline_shift_right, // extern
  var_funky_types__multiline_equal, // extern
  var_funky_types__multiline_not_equal, // extern
  var_funky_types__multiline_less_equal, // extern
  var_funky_types__multiline_less_than, // extern
  var_funky_types__multiline_greater_equal, // extern
  var_funky_types__multiline_greater_than, // extern
  var_funky_types__multiline_and, // extern
  var_funky_types__multiline_or, // extern
  var_funky_types__multiline_bit_and, // extern
  var_funky_types__multiline_bit_and_with_remark, // extern
  var_funky_types__multiline_bit_or, // extern
  var_funky_types__multiline_bit_xor, // extern
  var_funky_types__multiline_assign, // extern
  var_611_0_self, // dynamic
  var_612_0_temp_no, // dynamic
  var_614_0_do_negate, // dynamic
  var_615_0_do_swap, // dynamic
  var_618_1_head, // dynamic
  var_REMARK, // extern
  var_619_1_arguments, // dynamic
  var_621_23_left, // dynamic
  var_621_38_statements, // dynamic
  var_622_1_right, // dynamic
  var_623_1_n, // dynamic
  var_626_1_rest, // dynamic
  var_640_1_idx, // dynamic
  var_std__less, // extern
  var_loop, // extern
  var_funky_types__inline_body, // extern
  var_parameters_of, // extern polymorphic
  var_statement_of, // extern polymorphic
  var_687_30_self, // dynamic
  var_687_35_temp_no, // dynamic
  var_on_top_level, // extern
  var_mangle_position, // extern
  var_std__string, // extern
  var_693_1_statement, // dynamic
  var_694_1_statements, // dynamic
  var_all_of, // extern
  var_map_reduce, // extern
  var_any_of, // extern
  var_718_20_body, // dynamic
  var_719_1_statements, // dynamic
  var_720_1_parameter_state, // dynamic
  var_721_1_parameters, // dynamic
  var_722_1_new_statements, // dynamic
  var_724_3_idx, // dynamic
  var_724_7_statement, // dynamic
  var_MULTILINE_REMARK, // extern
  var_on, // extern
  var_OPEN_PARAMETERS, // extern
  var_parameter_of, // extern
  var_CLOSE_PARAMETERS, // extern
  var_764_35_self, // dynamic
  var_764_40_temp_no, // dynamic
  var_765_1_head, // dynamic
  var_766_1_original_head, // dynamic
  var_767_1_arguments, // dynamic
  var_FUNCTOR, // extern
  var_RETURN, // extern
  var_781_38_result_statements, // dynamic
  var_782_1_new_arguments, // dynamic
  var_784_3_item, // dynamic
  var_BACKQUOTED, // extern
  var_808_19_leading_statements, // dynamic
  var_808_39_trailing_statements, // dynamic
  var_809_1_node_type_of_first_argument, // dynamic
  var_ATTRIBUTE_VALUE_PAIR, // extern
  var_METHOD_VALUE_PAIR, // extern
  var_TYPE_FUNCTION, // extern
  var_810_1_is_a_slot_definition, // dynamic
  var_822_1_last_statement, // dynamic
  var_line_no_of, // extern
  var_CONSTANT_COMPOUND, // extern
  var_866_1_temp_name, // dynamic
  var_867_1_value, // dynamic
  var_869_3_stmt_idx, // dynamic
  var_869_12_trailing_statement, // dynamic
  var_871_3_arg_idx, // dynamic
  var_871_11_argument, // dynamic
  var_INLINE_ATTRIBUTE_VALUE_PAIR, // extern
  var_debug__print, // extern
  var_is_an_output, // extern polymorphic
  var_911_1_argument, // dynamic
  var_find_first, // extern
  var_funky_types__numeric_literal, // extern
  var_delete_all, // extern
  var_to_string, // extern
  var_std__key_value_pair, // extern
  var_replace_all, // extern
  var_funky_types__character_literal, // extern
  var_character_of, // extern
  var_to_integer, // extern
  var_funky_types__numeric_character_literal, // extern
  var_funky_types__named_character_literal, // extern
  var_944_49_self, // dynamic
  var_944_54_temp_no, // dynamic
  var_945_1_chr, // dynamic
  var_character_from_name, // extern
  var_funky_types__at_character_literal, // extern
  var_funky_types__unique, // extern
  var_line_text_of, // extern
  var_truncate_from, // extern
  var_mangle_identifier, // extern
  var_funky_types__string_literal, // extern
  var_979_40_self, // dynamic
  var_979_45_temp_no, // dynamic
  var_980_1_arguments, // dynamic
  var_981_1_characters, // dynamic
  var_982_1_statements, // dynamic
  var_983_1_components, // dynamic
  var_components_of, // extern
  var_funky_types__character_sequence, // extern
  var_characters_of, // extern polymorphic
  var_996_3_idx, // dynamic
  var_996_7_component, // dynamic
  var_CHARACTER_SEQUENCE, // extern
  var_999_1_component_characters, // dynamic
  var_std__minus, // extern
  var_trim_left, // extern
  var_NUMERIC_CHARACTER, // extern
  var_character, // extern
  var_NAMED_CHARACTER, // extern
  var_is_undefined, // extern
  var_NEWLINE, // extern
  var_AT_CHARACTER, // extern
  var_ESCAPE_EXPRESSION, // extern
  var_TAGGED_EMPTY_CHARACTER, // extern
  var_std_types__list, // extern
  var_1076_33_temp_no, // dynamic
  var_1077_1_statements, // dynamic
  var_1078_1_simplified_nodes, // dynamic
  var_BUILTIN, // extern
  var_TEMPORARY, // extern
  var_1143_20_head, // dynamic
  var_1143_25_arguments, // dynamic
  var_1146_1_node_type, // dynamic
  var_1170_1_expanded, // dynamic
  var_1172_3_argument, // dynamic
  var_1192_23_str, // dynamic
  var_1193_1_level, // dynamic
  var_1194_1_within_string, // dynamic
  var_1195_15_idx, // dynamic
  var_dec, // extern
  var_add_definition, // attribute
  var_add_definitions, // attribute
  var_1254_42_self, // dynamic
  var_1255_1_identifier, // dynamic
  var_allow_hidden, // extern
  var_mangle_local_definition, // extern
  var_funky__mangle_local_definition, // initialized
  var_funky__mangle_position, // initialized
  var_second, // extern
  var_funky__is_a_remark, // attribute
  var_funky_types__remark, // extern
  var_funky_types__multiline_remark, // extern
  var_funky__on_top_level, // derived
  var_funky__is_an_input, // attribute
  var_funky__is_an_output, // attribute
  var_is_an_input, // extern polymorphic
  var__END
};


static TAB_NUM t_func_funky__simplify_statement[] = {
  5, // locals
  1, // parameters
  LOCAL(2), // 53_29_statement
  // simplify &statement 0 $_temp_no $generated_statements
  var_simplify, 2, LOCAL(2), num_0, 3, LOCAL(2), LOCAL(1), LOCAL(3),
  // generated_statements $leading_statements $trailing_statements
  LOCAL(3), 0, 2, LOCAL(4), LOCAL(5),
  // push(leading_statements statement) trailing_statements
  var_push, 2, LOCAL(4), LOCAL(2), 1, LOCAL(1),
  // append push(leading_statements statement) trailing_statements
  var_append, 2, LOCAL(1), LOCAL(5), TAIL_CALL,
  POS(54, 3),
  POS(55, 3),
  POS(56, 10),
  POS(56, 3)
};

static TAB_NUM t_func_funky_types__variable___simplify[] = {
  3, // locals
  2, // parameters
  LOCAL(2), // 58_34_self
  LOCAL(3), // 58_39_temp_no
  // resolve_identifier &self
  func_resolve_identifier, 1, LOCAL(2), 1, LOCAL(2),
  // create_functor(self) temp_no empty_statements
  func_create_functor, 1, LOCAL(2), 1, LOCAL(1),
  // -> create_functor(self) temp_no empty_statements
  LET, 3, LOCAL(1), LOCAL(3), var_empty_statements, TAIL_CALL,
  POS(59, 3),
  POS(60, 6),
  POS(60, 3)
};

static TAB_NUM t_func_funky_types__attribute_access___simplify[] = {
  2, // locals
  2, // parameters
  LOCAL(1), // 62_42_self
  LOCAL(2), // 62_47_temp_no
  // resolve_identifier &self
  func_resolve_identifier, 1, LOCAL(1), 1, LOCAL(1),
  // -> self temp_no empty_statements
  LET, 3, LOCAL(1), LOCAL(2), var_empty_statements, TAIL_CALL,
  POS(63, 3),
  POS(64, 3)
};

static TAB_NUM t_func_funky_types__dummy_definition___simplify[] = {
  4, // locals
  2, // parameters
  LOCAL(3), // 66_42_self
  LOCAL(4), // 66_47_temp_no
  // temp_no+1 self) temp_no empty_statements
  var_std__plus, 2, LOCAL(4), num_1, 1, LOCAL(1),
  // redefine_temporary(temp_no+1 self) temp_no empty_statements
  func_redefine_temporary, 2, LOCAL(1), LOCAL(3), 1, LOCAL(2),
  // -> redefine_temporary(temp_no+1 self) temp_no empty_statements
  LET, 3, LOCAL(2), LOCAL(4), var_empty_statements, TAIL_CALL,
  POS(67, 25),
  POS(67, 6),
  POS(67, 3)
};

static TAB_NUM t_func_funky_types__functor___simplify[] = {
  1, // locals
  2, // parameters
  var_69_33_self,
  var_69_38_temp_no,
  // resolve_identifier &self
  func_resolve_identifier, 1, var_69_33_self, 1, var_69_33_self,
  // $extensions extensions_of(self)
  var_extensions_of, 1, var_69_33_self, 1, var_71_1_extensions,
  // is_empty
  var_is_empty, 1, var_71_1_extensions, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1, lambda_2, TAIL_CALL,
  POS(70, 3),
  POS(71, 3),
  POS(73, 16),
  POS(72, 3)
};

static TAB_NUM t_lambda_1[] = {
  0, // locals
  0, // parameters
  //  self temp_no empty_statements
  LET, 3, var_69_33_self, var_69_38_temp_no, var_empty_statements, TAIL_CALL,
  POS(74, 7)
};

static TAB_NUM t_lambda_2[] = {
  1, // locals
  0, // parameters
  // .extensions_of empty_list) extensions temp_no
  LET, -1, var_69_33_self, var_extensions_of, var_empty_list, LOCAL(1),
  // simplify_extensions self(.extensions_of empty_list) extensions temp_no
  func_simplify_extensions, 3, LOCAL(1), var_71_1_extensions, var_69_38_temp_no, TAIL_CALL,
  POS(76, 32),
  POS(76, 7)
};

static TAB_NUM t_func_simplify_extensions[] = {
  1, // locals
  3, // parameters
  var_78_23_expression,
  LOCAL(1), // 78_34_extensions
  var_78_45_temp_no,
  // simplify &extensions &temp_no $statements
  var_simplify, 2, LOCAL(1), var_78_45_temp_no, 3, LOCAL(1), var_78_45_temp_no, var_79_31_statements,
  // for_each extensions
  var_for_each, 3, LOCAL(1), lambda_3, lambda_11, TAIL_CALL,
  POS(79, 3),
  POS(80, 3)
};

static TAB_NUM t_lambda_3[] = {
  1, // locals
  1, // parameters
  var_81_3_extension,
  // $extension_node_type node_type_of(extension)
  var_node_type_of, 1, var_81_3_extension, 1, var_82_1_extension_node_type,
  // FUNCTION_CALL, REMARK_AND_MULTILINE_FUNCTION_CALL:
  var_std__sequence, 2, var_FUNCTION_CALL, var_REMARK_AND_MULTILINE_FUNCTION_CALL, 1, LOCAL(1),
  // case extension_node_type
  var_case, 7, var_82_1_extension_node_type, var_ATTRIBUTE_ACCESS, lambda_ATTRIBUTE_ACCESS, LOCAL(1), lambda_4, var_IO_CALL, lambda_IO_CALL, TAIL_CALL,
  POS(82, 7),
  POS(92, 9),
  POS(83, 7)
};

static TAB_NUM t_lambda_ATTRIBUTE_ACCESS[] = {
  4, // locals
  0, // parameters
  // inc &temp_no
  var_inc, 1, var_78_45_temp_no, 1, var_78_45_temp_no,
  // create_functor(extension)
  func_create_functor, 1, var_81_3_extension, 1, LOCAL(1),
  // redefine_temporary(temp_no extension))
  func_redefine_temporary, 2, var_78_45_temp_no, var_81_3_extension, 1, LOCAL(2),
  // list(expression redefine_temporary(temp_no extension))
  var_list, 2, var_78_23_expression, LOCAL(2), 1, LOCAL(3),
  // create_statement
  func_create_statement, 2, LOCAL(1), LOCAL(3), 1, LOCAL(4),
  // push_leading_statement &statements
  var_push_leading_statement, 2, var_79_31_statements, LOCAL(4), 1, var_79_31_statements,
  // !expression temporary(temp_no extension)
  func_temporary, 2, var_78_45_temp_no, var_81_3_extension, 1, var_78_23_expression,
  // next
  var_next, 0, TAIL_CALL,
  POS(85, 11),
  POS(88, 15),
  POS(89, 31),
  POS(89, 15),
  POS(87, 13),
  POS(86, 11),
  POS(90, 11),
  POS(91, 11)
};

static TAB_NUM t_lambda_4[] = {
  3, // locals
  0, // parameters
  // $arguments arguments_of(extension)
  var_arguments_of, 1, var_81_3_extension, 1, var_93_1_arguments,
  // length_of(arguments) == 1 && arguments(1).is_a_pair:
  var_length_of, 1, var_93_1_arguments, 1, LOCAL(1),
  // length_of(arguments) == 1 && arguments(1).is_a_pair:
  var_std__equal, 2, LOCAL(1), num_1, 1, LOCAL(2),
  // length_of(arguments) == 1 && arguments(1).is_a_pair:
  var_std__and, 2, LOCAL(2), lambda_5, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_6, lambda_7, TAIL_CALL,
  POS(93, 11),
  POS(95, 13),
  POS(95, 13),
  POS(95, 13),
  POS(94, 11)
};

static TAB_NUM t_lambda_5[] = {
  2, // locals
  0, // parameters
  // arguments(1).is_a_pair:
  var_93_1_arguments, 1, num_1, 1, LOCAL(1),
  // is_a_pair:
  var_is_a_pair, 1, LOCAL(1), 1, LOCAL(2),
  // arguments(1).is_a_pair:
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(95, 42),
  POS(95, 55),
  POS(95, 42)
};

static TAB_NUM t_lambda_6[] = {
  5, // locals
  0, // parameters
  // inc &temp_no
  var_inc, 1, var_78_45_temp_no, 1, var_78_45_temp_no,
  // assign_attributes(extension)
  func_assign_attributes, 1, var_81_3_extension, 1, LOCAL(1),
  // arguments(1)
  var_93_1_arguments, 1, num_1, 1, LOCAL(2),
  // redefine_temporary(temp_no extension)
  func_redefine_temporary, 2, var_78_45_temp_no, var_81_3_extension, 1, LOCAL(3),
  // list
  var_list, 3, var_78_23_expression, LOCAL(2), LOCAL(3), 1, LOCAL(4),
  // create_statement
  func_create_statement, 2, LOCAL(1), LOCAL(4), 1, LOCAL(5),
  // push_leading_statement &statements
  var_push_leading_statement, 2, var_79_31_statements, LOCAL(5), 1, var_79_31_statements,
  // !expression temporary(temp_no expression)
  func_temporary, 2, var_78_45_temp_no, var_78_23_expression, 1, var_78_23_expression,
  // next
  var_next, 0, TAIL_CALL,
  POS(96, 15),
  POS(99, 19),
  POS(102, 21),
  POS(103, 21),
  POS(100, 19),
  POS(98, 17),
  POS(97, 15),
  POS(104, 15),
  POS(105, 15)
};

static TAB_NUM t_lambda_7[] = {
  2, // locals
  0, // parameters
  // filter $remark_arguments &arguments is_a_remark
  var_filter, 2, var_93_1_arguments, var_is_a_remark, 2, var_107_8_remark_arguments, var_93_1_arguments,
  // is_empty
  var_is_empty, 1, var_93_1_arguments, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_8, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), var_next, lambda_10, TAIL_CALL,
  POS(107, 15),
  POS(110, 29),
  POS(109, 19),
  POS(108, 15)
};

static TAB_NUM t_lambda_8[] = {
  2, // locals
  0, // parameters
  // extension_node_type == REMARK_AND_MULTILINE_FUNCTION_CALL
  var_std__equal, 2, var_82_1_extension_node_type, var_REMARK_AND_MULTILINE_FUNCTION_CALL, 1, LOCAL(1),
  // 
  var_std__or, 2, LOCAL(1), lambda_9, 1, LOCAL(2),
  // 
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(112, 21),
  POS(111, 21),
  POS(111, 21)
};

static TAB_NUM t_lambda_9[] = {
  1, // locals
  0, // parameters
  // is_not_empty
  var_is_not_empty, 1, var_107_8_remark_arguments, 1, LOCAL(1),
  // remark_arguments.is_not_empty
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(113, 38),
  POS(113, 21)
};

static TAB_NUM t_lambda_10[] = {
  3, // locals
  0, // parameters
  // inc &temp_no
  var_inc, 1, var_78_45_temp_no, 1, var_78_45_temp_no,
  // redefine_temporary(temp_no expression))
  func_redefine_temporary, 2, var_78_45_temp_no, var_78_23_expression, 1, LOCAL(1),
  // push(arguments redefine_temporary(temp_no expression))
  var_push, 2, var_93_1_arguments, LOCAL(1), 1, LOCAL(2),
  // create_statement
  func_create_statement, 2, var_78_23_expression, LOCAL(2), 1, LOCAL(3),
  // push_leading_statement &statements
  var_push_leading_statement, 2, var_79_31_statements, LOCAL(3), 1, var_79_31_statements,
  // !expression temporary(temp_no expression)
  func_temporary, 2, var_78_45_temp_no, var_78_23_expression, 1, var_78_23_expression,
  // next
  var_next, 0, TAIL_CALL,
  POS(116, 19),
  POS(120, 38),
  POS(120, 23),
  POS(118, 21),
  POS(117, 19),
  POS(121, 19),
  POS(122, 19)
};

static TAB_NUM t_lambda_IO_CALL[] = {
  0, // locals
  0, // parameters
  // expression.is_an_io_call true
  LET, -1, var_78_23_expression, var_is_an_io_call, var_true, var_78_23_expression,
  // next
  var_next, 0, TAIL_CALL,
  POS(124, 12),
  POS(125, 11)
};

static TAB_NUM t_lambda_11[] = {
  0, // locals
  0, // parameters
  //  expression temp_no statements
  LET, 3, var_78_23_expression, var_78_45_temp_no, var_79_31_statements, TAIL_CALL,
  POS(126, 7)
};

static TAB_NUM t_func_simplify_parameter[] = {
  3, // locals
  2, // parameters
  var_131_22_self,
  var_131_27_temp_no,
  // option_of &temp_no $statements
  var_option_of, 1, var_131_22_self, 1, LOCAL(1),
  // simplify &self.option_of &temp_no $statements
  var_simplify, 2, LOCAL(1), var_131_27_temp_no, 3, LOCAL(1), var_131_27_temp_no, var_132_35_statements,
  // self.option_of &temp_no $statements
  LET, -1, var_131_22_self, var_option_of, LOCAL(1), var_131_22_self,
  // $name funky::name_of(self)
  var_funky__name_of, 1, var_131_22_self, 1, LOCAL(3),
  // name(1) == '_'
  LOCAL(3), 1, num_1, 1, LOCAL(1),
  // name(1) == '_'
  var_std__equal, 2, LOCAL(1), chr_95, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_12, lambda_13, TAIL_CALL,
  POS(132, 18),
  POS(132, 3),
  POS(132, 13),
  POS(133, 3),
  POS(135, 5),
  POS(135, 5),
  POS(134, 3)
};

static TAB_NUM t_lambda_12[] = {
  4, // locals
  0, // parameters
  // temp_no+1 self)(.option_of option_of(self))
  var_std__plus, 2, var_131_27_temp_no, num_1, 1, LOCAL(1),
  // option_of(self))
  var_option_of, 1, var_131_22_self, 1, LOCAL(2),
  // redefine_temporary(temp_no+1 self)(.option_of option_of(self))
  func_redefine_temporary, 2, LOCAL(1), var_131_22_self, 1, LOCAL(3),
  // .option_of option_of(self))
  LET, -1, LOCAL(3), var_option_of, LOCAL(2), LOCAL(4),
  // 
  LET, 3, LOCAL(4), var_131_27_temp_no, var_empty_statements, TAIL_CALL,
  POS(137, 26),
  POS(137, 53),
  POS(137, 7),
  POS(137, 42),
  POS(136, 7)
};

static TAB_NUM t_lambda_13[] = {
  3, // locals
  0, // parameters
  // funky::name_of(self))
  var_funky__name_of, 1, var_131_22_self, 1, LOCAL(1),
  // resolve_variable(funky::name_of(self))
  var_resolve_variable, 1, LOCAL(1), 1, LOCAL(2),
  // self
  LET, -1, var_131_22_self, var_funky__name_of, LOCAL(2), LOCAL(3),
  // 
  LET, 3, LOCAL(3), var_131_27_temp_no, var_132_35_statements, TAIL_CALL,
  POS(142, 41),
  POS(142, 24),
  POS(141, 7),
  POS(140, 7)
};

static TAB_NUM t_func_funky_types__return___simplify[] = {
  3, // locals
  2, // parameters
  LOCAL(2), // 146_32_self
  LOCAL(3), // 146_37_temp_no
  // std("assign" self) temp_no empty_statements
  func_std, 2, str_assign, LOCAL(2), 1, LOCAL(1),
  // -> std("assign" self) temp_no empty_statements
  LET, 3, LOCAL(1), LOCAL(3), var_empty_statements, TAIL_CALL,
  POS(147, 6),
  POS(147, 3)
};

static TAB_NUM t_func_funky_types__redefinition___simplify[] = {
  1, // locals
  2, // parameters
  var_149_38_self,
  var_149_43_temp_no,
  // resolve_identifier &self
  func_resolve_identifier, 1, var_149_38_self, 1, var_149_38_self,
  // $extensions extensions_of(self)
  var_extensions_of, 1, var_149_38_self, 1, var_151_1_extensions,
  // is_empty
  var_is_empty, 1, var_151_1_extensions, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_14, lambda_15, TAIL_CALL,
  POS(150, 3),
  POS(151, 3),
  POS(153, 16),
  POS(152, 3)
};

static TAB_NUM t_lambda_14[] = {
  0, // locals
  0, // parameters
  //  self temp_no empty_statements
  LET, 3, var_149_38_self, var_149_43_temp_no, var_empty_statements, TAIL_CALL,
  POS(154, 7)
};

static TAB_NUM t_lambda_15[] = {
  1, // locals
  0, // parameters
  // inc &temp_no
  var_inc, 1, var_149_43_temp_no, 1, var_149_43_temp_no,
  // $result_temp_no temp_no
  LET, 1, var_149_43_temp_no, 1, var_157_1_result_temp_no,
  // $base create_functor(self)
  func_create_functor, 1, var_149_38_self, 1, var_158_1_base,
  // $bases list(base)
  var_list, 1, var_158_1_base, 1, var_159_1_bases,
  // simplify &extensions &temp_no $statements
  var_simplify, 2, var_151_1_extensions, var_149_43_temp_no, 3, var_151_1_extensions, var_149_43_temp_no, var_160_31_statements,
  // first(statements))
  var_first, 1, var_160_31_statements, 1, LOCAL(1),
  // !statements new(funky_types::statement_list empty_list first(statements))
  var_new, 3, var_funky_types__statement_list, var_empty_list, LOCAL(1), 1, var_160_31_statements,
  // range(extensions 1 -2)
  var_range, 3, var_151_1_extensions, num_1, minus_num_2, 1, LOCAL(1),
  // for_each range(extensions 1 -2)
  var_for_each, 3, LOCAL(1), lambda_16, lambda_19, TAIL_CALL,
  POS(156, 7),
  POS(157, 7),
  POS(158, 7),
  POS(159, 7),
  POS(160, 7),
  POS(161, 62),
  POS(161, 7),
  POS(162, 16),
  POS(162, 7)
};

static TAB_NUM t_lambda_16[] = {
  1, // locals
  1, // parameters
  var_163_3_extension,
  // node_type_of(extension)
  var_node_type_of, 1, var_163_3_extension, 1, LOCAL(1),
  // case node_type_of(extension)
  var_case, 5, LOCAL(1), var_FUNCTION_CALL, lambda_FUNCTION_CALL, var_ATTRIBUTE_ACCESS, lambda_2_ATTRIBUTE_ACCESS, TAIL_CALL,
  POS(164, 16),
  POS(164, 11)
};

static TAB_NUM t_lambda_FUNCTION_CALL[] = {
  2, // locals
  0, // parameters
  // arguments_of(extension) is_a_remark
  var_arguments_of, 1, var_163_3_extension, 1, LOCAL(1),
  // filter arguments_of(extension) is_a_remark
  var_filter, 2, LOCAL(1), var_is_a_remark, 2, var_167_1_remark_arguments, var_167_19_arguments,
  // is_empty && remark_arguments.is_not_empty
  var_is_empty, 1, var_167_19_arguments, 1, LOCAL(1),
  // is_empty && remark_arguments.is_not_empty
  var_std__and, 2, LOCAL(1), lambda_17, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), var_next, lambda_18, TAIL_CALL,
  POS(166, 22),
  POS(166, 15),
  POS(169, 27),
  POS(169, 27),
  POS(168, 15)
};

static TAB_NUM t_lambda_17[] = {
  1, // locals
  0, // parameters
  // is_not_empty
  var_is_not_empty, 1, var_167_1_remark_arguments, 1, LOCAL(1),
  // remark_arguments.is_not_empty
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(169, 56),
  POS(169, 39)
};

static TAB_NUM t_lambda_18[] = {
  3, // locals
  0, // parameters
  // inc &temp_no
  var_inc, 1, var_149_43_temp_no, 1, var_149_43_temp_no,
  // redefine_temporary(temp_no base))
  func_redefine_temporary, 2, var_149_43_temp_no, var_158_1_base, 1, LOCAL(1),
  // push(arguments redefine_temporary(temp_no base))
  var_push, 2, var_167_19_arguments, LOCAL(1), 1, LOCAL(2),
  // create_statement
  func_create_statement, 2, var_158_1_base, LOCAL(2), 1, LOCAL(3),
  // push_trailing_statement &statements
  var_push_trailing_statement, 2, var_160_31_statements, LOCAL(3), 1, var_160_31_statements,
  // !base temporary(temp_no base)
  func_temporary, 2, var_149_43_temp_no, var_158_1_base, 1, var_158_1_base,
  // push &bases base
  var_push, 2, var_159_1_bases, var_158_1_base, 1, var_159_1_bases,
  // next
  var_next, 0, TAIL_CALL,
  POS(172, 19),
  POS(176, 38),
  POS(176, 23),
  POS(174, 21),
  POS(173, 19),
  POS(177, 19),
  POS(178, 19),
  POS(179, 19)
};

static TAB_NUM t_lambda_2_ATTRIBUTE_ACCESS[] = {
  4, // locals
  0, // parameters
  // inc &temp_no
  var_inc, 1, var_149_43_temp_no, 1, var_149_43_temp_no,
  // create_functor(extension)
  func_create_functor, 1, var_163_3_extension, 1, LOCAL(1),
  // redefine_temporary(temp_no extension))
  func_redefine_temporary, 2, var_149_43_temp_no, var_163_3_extension, 1, LOCAL(2),
  // list(base redefine_temporary(temp_no extension))
  var_list, 2, var_158_1_base, LOCAL(2), 1, LOCAL(3),
  // create_statement
  func_create_statement, 2, LOCAL(1), LOCAL(3), 1, LOCAL(4),
  // push_trailing_statement &statements
  var_push_trailing_statement, 2, var_160_31_statements, LOCAL(4), 1, var_160_31_statements,
  // !base temporary(temp_no extension)
  func_temporary, 2, var_149_43_temp_no, var_163_3_extension, 1, var_158_1_base,
  // push &bases base
  var_push, 2, var_159_1_bases, var_158_1_base, 1, var_159_1_bases,
  // next
  var_next, 0, TAIL_CALL,
  POS(181, 15),
  POS(184, 19),
  POS(185, 29),
  POS(185, 19),
  POS(183, 17),
  POS(182, 15),
  POS(186, 15),
  POS(187, 15),
  POS(188, 15)
};

static TAB_NUM t_lambda_19[] = {
  1, // locals
  0, // parameters
  // $result temporary(result_temp_no self)
  func_temporary, 2, var_157_1_result_temp_no, var_149_38_self, 1, var_190_1_result,
  // $n length_of(extensions)
  var_length_of, 1, var_151_1_extensions, 1, LOCAL(1),
  // from_to_by n 1 -1
  var_from_to_by, 5, LOCAL(1), num_1, minus_num_1, lambda_20, lambda_21, TAIL_CALL,
  POS(190, 11),
  POS(191, 11),
  POS(192, 11)
};

static TAB_NUM t_lambda_20[] = {
  6, // locals
  1, // parameters
  LOCAL(6), // 193_3_idx
  // $extension extensions(idx)
  var_151_1_extensions, 1, LOCAL(6), 1, var_194_1_extension,
  // pop &bases !base
  var_pop, 1, var_159_1_bases, 2, var_159_1_bases, var_158_1_base,
  // identifier_of(base)
  var_identifier_of, 1, var_158_1_base, 1, LOCAL(1),
  // kind_of(base)
  var_kind_of, 1, var_158_1_base, 1, LOCAL(2),
  // no_of(base)
  var_no_of, 1, var_158_1_base, 1, LOCAL(3),
  // source_group_of(base)
  var_source_group_of, 1, var_158_1_base, 1, LOCAL(4),
  // source_position_of(base)
  var_source_position_of, 1, var_158_1_base, 1, LOCAL(5),
  // $destination
  LET, -5, var_funky_types__redefinition, var_identifier_of, LOCAL(1), var_kind_of, LOCAL(2), var_no_of, LOCAL(3), var_source_group_of, LOCAL(4), var_source_position_of, LOCAL(5), var_196_1_destination,
  // node_type_of(extension)
  var_node_type_of, 1, var_194_1_extension, 1, LOCAL(1),
  // case node_type_of(extension)
  var_case, 5, LOCAL(1), var_FUNCTION_CALL, lambda_2_FUNCTION_CALL, var_ATTRIBUTE_ACCESS, lambda_3_ATTRIBUTE_ACCESS, TAIL_CALL,
  POS(194, 15),
  POS(195, 15),
  POS(198, 34),
  POS(199, 28),
  POS(200, 26),
  POS(201, 36),
  POS(202, 39),
  POS(196, 15),
  POS(203, 20),
  POS(203, 15)
};

static TAB_NUM t_lambda_2_FUNCTION_CALL[] = {
  4, // locals
  0, // parameters
  // $arguments arguments_of(extension)
  var_arguments_of, 1, var_194_1_extension, 1, LOCAL(4),
  // push(arguments result) destination)
  var_push, 2, LOCAL(4), var_190_1_result, 1, LOCAL(1),
  // push(push(arguments result) destination)
  var_push, 2, LOCAL(1), var_196_1_destination, 1, LOCAL(2),
  // create_statement
  func_create_statement, 2, var_158_1_base, LOCAL(2), 1, LOCAL(3),
  // push_trailing_statement &statements
  var_push_trailing_statement, 2, var_160_31_statements, LOCAL(3), 1, var_160_31_statements,
  // !result base
  LET, 1, var_158_1_base, 1, var_190_1_result,
  // next
  var_next, 0, TAIL_CALL,
  POS(205, 19),
  POS(209, 28),
  POS(209, 23),
  POS(207, 21),
  POS(206, 19),
  POS(210, 19),
  POS(211, 19)
};

static TAB_NUM t_lambda_3_ATTRIBUTE_ACCESS[] = {
  7, // locals
  0, // parameters
  // assign_attributes(base)
  func_assign_attributes, 1, var_158_1_base, 1, LOCAL(1),
  // identifier_of(extension)
  var_identifier_of, 1, var_194_1_extension, 1, LOCAL(2),
  // kind_of(extension)
  var_kind_of, 1, var_194_1_extension, 1, LOCAL(3),
  // funky::key_of(extension)
  var_funky__key_of, 1, var_194_1_extension, 1, LOCAL(4),
  // funky_types::inline_attribute_value_pair
  LET, -4, var_funky_types__inline_attribute_value_pair, var_identifier_of, LOCAL(2), var_kind_of, LOCAL(3), var_funky__key_of, LOCAL(4), var_expression_of, var_190_1_result, LOCAL(5),
  // list
  var_list, 3, var_158_1_base, LOCAL(5), var_196_1_destination, 1, LOCAL(6),
  // create_statement
  func_create_statement, 2, LOCAL(1), LOCAL(6), 1, LOCAL(7),
  // push_trailing_statement &statements
  var_push_trailing_statement, 2, var_160_31_statements, LOCAL(7), 1, var_160_31_statements,
  // !result base
  LET, 1, var_158_1_base, 1, var_190_1_result,
  // next
  var_next, 0, TAIL_CALL,
  POS(215, 23),
  POS(219, 42),
  POS(220, 36),
  POS(221, 42),
  POS(218, 25),
  POS(216, 23),
  POS(214, 21),
  POS(213, 19),
  POS(224, 19),
  POS(225, 19)
};

static TAB_NUM t_lambda_21[] = {
  1, // locals
  0, // parameters
  // redefine_temporary(result_temp_no self) temp_no statements
  func_redefine_temporary, 2, var_157_1_result_temp_no, var_149_38_self, 1, LOCAL(1),
  //  redefine_temporary(result_temp_no self) temp_no statements
  LET, 3, LOCAL(1), var_149_43_temp_no, var_160_31_statements, TAIL_CALL,
  POS(226, 16),
  POS(226, 15)
};

static TAB_NUM t_func_funky_types__update___simplify[] = {
  1, // locals
  2, // parameters
  var_228_32_self,
  var_228_37_temp_no,
  // resolve_identifier &self
  func_resolve_identifier, 1, var_228_32_self, 1, var_228_32_self,
  // $extensions extensions_of(self)
  var_extensions_of, 1, var_228_32_self, 1, var_230_1_extensions,
  // is_empty
  var_is_empty, 1, var_230_1_extensions, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_22, lambda_23, TAIL_CALL,
  POS(229, 3),
  POS(230, 3),
  POS(232, 16),
  POS(231, 3)
};

static TAB_NUM t_lambda_22[] = {
  0, // locals
  0, // parameters
  //  self temp_no empty_statements
  LET, 3, var_228_32_self, var_228_37_temp_no, var_empty_statements, TAIL_CALL,
  POS(233, 7)
};

static TAB_NUM t_lambda_23[] = {
  0, // locals
  0, // parameters
  // $base create_functor(self)
  func_create_functor, 1, var_228_32_self, 1, var_235_1_base,
  // $bases list(base)
  var_list, 1, var_235_1_base, 1, var_236_1_bases,
  // simplify &extensions &temp_no $statements
  var_simplify, 2, var_230_1_extensions, var_228_37_temp_no, 3, var_230_1_extensions, var_228_37_temp_no, var_237_31_statements,
  // for_each extensions
  var_for_each, 3, var_230_1_extensions, lambda_24, lambda_27, TAIL_CALL,
  POS(235, 7),
  POS(236, 7),
  POS(237, 7),
  POS(238, 7)
};

static TAB_NUM t_lambda_24[] = {
  1, // locals
  1, // parameters
  var_239_3_extension,
  // node_type_of(extension)
  var_node_type_of, 1, var_239_3_extension, 1, LOCAL(1),
  // case node_type_of(extension)
  var_case, 5, LOCAL(1), var_FUNCTION_CALL, lambda_3_FUNCTION_CALL, var_ATTRIBUTE_ACCESS, lambda_4_ATTRIBUTE_ACCESS, TAIL_CALL,
  POS(240, 16),
  POS(240, 11)
};

static TAB_NUM t_lambda_3_FUNCTION_CALL[] = {
  2, // locals
  0, // parameters
  // arguments_of(extension) is_a_remark
  var_arguments_of, 1, var_239_3_extension, 1, LOCAL(1),
  // filter arguments_of(extension) is_a_remark
  var_filter, 2, LOCAL(1), var_is_a_remark, 2, var_243_1_remark_arguments, var_243_19_arguments,
  // is_empty && remark_arguments.is_not_empty
  var_is_empty, 1, var_243_19_arguments, 1, LOCAL(1),
  // is_empty && remark_arguments.is_not_empty
  var_std__and, 2, LOCAL(1), lambda_25, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), var_next, lambda_26, TAIL_CALL,
  POS(242, 22),
  POS(242, 15),
  POS(245, 27),
  POS(245, 27),
  POS(244, 15)
};

static TAB_NUM t_lambda_25[] = {
  1, // locals
  0, // parameters
  // is_not_empty
  var_is_not_empty, 1, var_243_1_remark_arguments, 1, LOCAL(1),
  // remark_arguments.is_not_empty
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(245, 56),
  POS(245, 39)
};

static TAB_NUM t_lambda_26[] = {
  3, // locals
  0, // parameters
  // inc &temp_no
  var_inc, 1, var_228_37_temp_no, 1, var_228_37_temp_no,
  // redefine_temporary(temp_no base))
  func_redefine_temporary, 2, var_228_37_temp_no, var_235_1_base, 1, LOCAL(1),
  // push(arguments redefine_temporary(temp_no base))
  var_push, 2, var_243_19_arguments, LOCAL(1), 1, LOCAL(2),
  // create_statement
  func_create_statement, 2, var_235_1_base, LOCAL(2), 1, LOCAL(3),
  // push_leading_statement &statements
  var_push_leading_statement, 2, var_237_31_statements, LOCAL(3), 1, var_237_31_statements,
  // !base temporary(temp_no base)
  func_temporary, 2, var_228_37_temp_no, var_235_1_base, 1, var_235_1_base,
  // push &bases base
  var_push, 2, var_236_1_bases, var_235_1_base, 1, var_236_1_bases,
  // next
  var_next, 0, TAIL_CALL,
  POS(248, 19),
  POS(252, 38),
  POS(252, 23),
  POS(250, 21),
  POS(249, 19),
  POS(253, 19),
  POS(254, 19),
  POS(255, 19)
};

static TAB_NUM t_lambda_4_ATTRIBUTE_ACCESS[] = {
  4, // locals
  0, // parameters
  // inc &temp_no
  var_inc, 1, var_228_37_temp_no, 1, var_228_37_temp_no,
  // create_functor(extension)
  func_create_functor, 1, var_239_3_extension, 1, LOCAL(1),
  // redefine_temporary(temp_no extension))
  func_redefine_temporary, 2, var_228_37_temp_no, var_239_3_extension, 1, LOCAL(2),
  // list(base redefine_temporary(temp_no extension))
  var_list, 2, var_235_1_base, LOCAL(2), 1, LOCAL(3),
  // create_statement
  func_create_statement, 2, LOCAL(1), LOCAL(3), 1, LOCAL(4),
  // push_leading_statement &statements
  var_push_leading_statement, 2, var_237_31_statements, LOCAL(4), 1, var_237_31_statements,
  // !base temporary(temp_no extension)
  func_temporary, 2, var_228_37_temp_no, var_239_3_extension, 1, var_235_1_base,
  // push &bases base
  var_push, 2, var_236_1_bases, var_235_1_base, 1, var_236_1_bases,
  // next
  var_next, 0, TAIL_CALL,
  POS(257, 15),
  POS(260, 19),
  POS(261, 29),
  POS(261, 19),
  POS(259, 17),
  POS(258, 15),
  POS(262, 15),
  POS(263, 15),
  POS(264, 15)
};

static TAB_NUM t_lambda_27[] = {
  1, // locals
  0, // parameters
  // $result temporary(temp_no self)
  func_temporary, 2, var_228_37_temp_no, var_228_32_self, 1, var_266_1_result,
  // range &bases 1 -2
  var_range, 3, var_236_1_bases, num_1, minus_num_2, 1, var_236_1_bases,
  // $n length_of(extensions)
  var_length_of, 1, var_230_1_extensions, 1, LOCAL(1),
  // from_to_by n 1 -1
  var_from_to_by, 5, LOCAL(1), num_1, minus_num_1, lambda_28, lambda_29, TAIL_CALL,
  POS(266, 11),
  POS(267, 11),
  POS(268, 11),
  POS(269, 11)
};

static TAB_NUM t_lambda_28[] = {
  5, // locals
  1, // parameters
  LOCAL(5), // 270_3_idx
  // $extension extensions(idx)
  var_230_1_extensions, 1, LOCAL(5), 1, var_271_1_extension,
  // pop &bases !base
  var_pop, 1, var_236_1_bases, 2, var_236_1_bases, var_235_1_base,
  // identifier_of(base)
  var_identifier_of, 1, var_235_1_base, 1, LOCAL(1),
  // kind_of(base)
  var_kind_of, 1, var_235_1_base, 1, LOCAL(2),
  // source_group_of(base)
  var_source_group_of, 1, var_235_1_base, 1, LOCAL(3),
  // source_position_of(base)
  var_source_position_of, 1, var_235_1_base, 1, LOCAL(4),
  // $destination
  LET, -4, var_funky_types__redefinition, var_identifier_of, LOCAL(1), var_kind_of, LOCAL(2), var_source_group_of, LOCAL(3), var_source_position_of, LOCAL(4), var_273_1_destination,
  // node_type_of(extension)
  var_node_type_of, 1, var_271_1_extension, 1, LOCAL(1),
  // case node_type_of(extension)
  var_case, 5, LOCAL(1), var_FUNCTION_CALL, lambda_4_FUNCTION_CALL, var_ATTRIBUTE_ACCESS, lambda_5_ATTRIBUTE_ACCESS, TAIL_CALL,
  POS(271, 15),
  POS(272, 15),
  POS(275, 34),
  POS(276, 28),
  POS(277, 36),
  POS(278, 39),
  POS(273, 15),
  POS(279, 20),
  POS(279, 15)
};

static TAB_NUM t_lambda_4_FUNCTION_CALL[] = {
  4, // locals
  0, // parameters
  // $arguments arguments_of(extension)
  var_arguments_of, 1, var_271_1_extension, 1, LOCAL(4),
  // push(arguments result) destination)
  var_push, 2, LOCAL(4), var_266_1_result, 1, LOCAL(1),
  // push(push(arguments result) destination)
  var_push, 2, LOCAL(1), var_273_1_destination, 1, LOCAL(2),
  // create_statement
  func_create_statement, 2, var_235_1_base, LOCAL(2), 1, LOCAL(3),
  // push_trailing_statement &statements
  var_push_trailing_statement, 2, var_237_31_statements, LOCAL(3), 1, var_237_31_statements,
  // !result base
  LET, 1, var_235_1_base, 1, var_266_1_result,
  // next
  var_next, 0, TAIL_CALL,
  POS(281, 19),
  POS(285, 28),
  POS(285, 23),
  POS(283, 21),
  POS(282, 19),
  POS(286, 19),
  POS(287, 19)
};

static TAB_NUM t_lambda_5_ATTRIBUTE_ACCESS[] = {
  7, // locals
  0, // parameters
  // assign_attributes(base)
  func_assign_attributes, 1, var_235_1_base, 1, LOCAL(1),
  // identifier_of(extension)
  var_identifier_of, 1, var_271_1_extension, 1, LOCAL(2),
  // kind_of(extension)
  var_kind_of, 1, var_271_1_extension, 1, LOCAL(3),
  // funky::key_of(extension)
  var_funky__key_of, 1, var_271_1_extension, 1, LOCAL(4),
  // funky_types::inline_attribute_value_pair
  LET, -4, var_funky_types__inline_attribute_value_pair, var_identifier_of, LOCAL(2), var_kind_of, LOCAL(3), var_funky__key_of, LOCAL(4), var_expression_of, var_266_1_result, LOCAL(5),
  // list
  var_list, 3, var_235_1_base, LOCAL(5), var_273_1_destination, 1, LOCAL(6),
  // create_statement
  func_create_statement, 2, LOCAL(1), LOCAL(6), 1, LOCAL(7),
  // push_trailing_statement &statements
  var_push_trailing_statement, 2, var_237_31_statements, LOCAL(7), 1, var_237_31_statements,
  // !result base
  LET, 1, var_235_1_base, 1, var_266_1_result,
  // next
  var_next, 0, TAIL_CALL,
  POS(291, 23),
  POS(295, 42),
  POS(296, 36),
  POS(297, 42),
  POS(294, 25),
  POS(292, 23),
  POS(290, 21),
  POS(289, 19),
  POS(300, 19),
  POS(301, 19)
};

static TAB_NUM t_lambda_29[] = {
  1, // locals
  0, // parameters
  // update_temporary(temp_no self) temp_no statements
  func_update_temporary, 2, var_228_37_temp_no, var_228_32_self, 1, LOCAL(1),
  //  update_temporary(temp_no self) temp_no statements
  LET, 3, LOCAL(1), var_228_37_temp_no, var_237_31_statements, TAIL_CALL,
  POS(302, 16),
  POS(302, 15)
};

static TAB_NUM t_func_funky_types__definition___simplify[] = {
  2, // locals
  2, // parameters
  LOCAL(1), // 304_36_self
  LOCAL(2), // 304_41_temp_no
  // resolve_identifier &self
  func_resolve_identifier, 1, LOCAL(1), 1, LOCAL(1),
  // -> self temp_no empty_statements
  LET, 3, LOCAL(1), LOCAL(2), var_empty_statements, TAIL_CALL,
  POS(305, 3),
  POS(306, 3)
};

static TAB_NUM t_func_funky_types__parenthesed_expression___simplify[] = {
  2, // locals
  2, // parameters
  LOCAL(2), // 308_48_self
  var_308_53_temp_no,
  // expression_of(self) $expression &temp_no $statements
  var_expression_of, 1, LOCAL(2), 1, LOCAL(1),
  // simplify expression_of(self) $expression &temp_no $statements
  var_simplify, 2, LOCAL(1), var_308_53_temp_no, 3, var_309_30_expression, var_308_53_temp_no, var_309_51_statements,
  // $calls calls_of(self)
  var_calls_of, 1, LOCAL(2), 1, var_310_1_calls,
  // is_empty
  var_is_empty, 1, var_310_1_calls, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_30, lambda_31, TAIL_CALL,
  POS(309, 12),
  POS(309, 3),
  POS(310, 3),
  POS(312, 11),
  POS(311, 3)
};

static TAB_NUM t_lambda_30[] = {
  0, // locals
  0, // parameters
  //  expression temp_no statements
  LET, 3, var_309_30_expression, var_308_53_temp_no, var_309_51_statements, TAIL_CALL,
  POS(313, 7)
};

static TAB_NUM t_lambda_31[] = {
  2, // locals
  0, // parameters
  // simplify_extensions &expression calls &temp_no $extension_statements
  func_simplify_extensions, 3, var_309_30_expression, var_310_1_calls, var_308_53_temp_no, 3, var_309_30_expression, var_308_53_temp_no, LOCAL(2),
  // append(statements extension_statements)
  var_append, 2, var_309_51_statements, LOCAL(2), 1, LOCAL(1),
  // -> expression temp_no append(statements extension_statements)
  LET, 3, var_309_30_expression, var_308_53_temp_no, LOCAL(1), TAIL_CALL,
  POS(315, 7),
  POS(316, 29),
  POS(316, 7)
};

static TAB_NUM t_func_funky_types__pair___simplify[] = {
  1, // locals
  2, // parameters
  var_318_30_self,
  var_318_35_temp_no,
  // resolve_identifier &self
  func_resolve_identifier, 1, var_318_30_self, 1, var_318_30_self,
  // $argument argument_of(self)
  var_argument_of, 1, var_318_30_self, 1, var_320_1_argument,
  // is_a_list:
  var_is_a_list, 1, var_320_1_argument, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_argument_is_a_list, lambda_35, TAIL_CALL,
  POS(319, 3),
  POS(320, 3),
  POS(322, 14),
  POS(321, 3)
};

static TAB_NUM t_lambda_argument_is_a_list[] = {
  2, // locals
  0, // parameters
  // filter &argument: (argument) -> not(argument.is_a_remark)
  var_filter, 2, var_320_1_argument, lambda_32, 1, var_320_1_argument,
  // length_of(argument) == 1:
  var_length_of, 1, var_320_1_argument, 1, LOCAL(1),
  // length_of(argument) == 1:
  var_std__equal, 2, LOCAL(1), num_1, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_33, lambda_34, TAIL_CALL,
  POS(323, 7),
  POS(325, 9),
  POS(325, 9),
  POS(324, 7)
};

static TAB_NUM t_lambda_32[] = {
  3, // locals
  1, // parameters
  LOCAL(3), // 323_19_argument
  // is_a_remark)
  var_is_a_remark, 1, LOCAL(3), 1, LOCAL(1),
  // not(argument.is_a_remark)
  var_not, 1, LOCAL(1), 1, LOCAL(2),
  // -> not(argument.is_a_remark)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(323, 52),
  POS(323, 39),
  POS(323, 36)
};

static TAB_NUM t_lambda_33[] = {
  0, // locals
  0, // parameters
  // !argument argument(1)
  var_320_1_argument, 1, num_1, 1, var_320_1_argument,
  // simplify_argument
  func_simplify_argument, 0, TAIL_CALL,
  POS(326, 11),
  POS(327, 11)
};

static TAB_NUM t_lambda_34[] = {
  1, // locals
  0, // parameters
  // argument(2)
  var_320_1_argument, 1, num_2, 1, LOCAL(1),
  // syntax_error "too many arguments" argument(2)
  var_syntax_error, 2, str_too_many_argumen, LOCAL(1), TAIL_CALL,
  POS(329, 45),
  POS(329, 11)
};

static TAB_NUM t_lambda_35[] = {
  0, // locals
  0, // parameters
  // simplify_argument
  func_simplify_argument, 0, TAIL_CALL,
  POS(331, 7)
};

static TAB_NUM t_func_simplify_argument[] = {
  2, // locals
  0, // parameters
  // simplify argument !self.funky::argument_of &temp_no $result_statements
  var_simplify, 2, var_320_1_argument, var_318_35_temp_no, 3, LOCAL(1), var_318_35_temp_no, LOCAL(2),
  // self.funky::argument_of &temp_no $result_statements
  LET, -1, var_318_30_self, var_funky__argument_of, LOCAL(1), var_318_30_self,
  // -> self temp_no result_statements
  LET, 3, var_318_30_self, var_318_35_temp_no, LOCAL(2), TAIL_CALL,
  POS(334, 5),
  POS(334, 24),
  POS(335, 5)
};

static TAB_NUM t_func_simplify_inline_pair[] = {
  4, // locals
  2, // parameters
  LOCAL(2), // 340_24_self
  LOCAL(3), // 340_29_temp_no
  // resolve_identifier &self
  func_resolve_identifier, 1, LOCAL(2), 1, LOCAL(2),
  // funky::expression_of &temp_no $result_statements
  var_funky__expression_of, 1, LOCAL(2), 1, LOCAL(1),
  // simplify &self.funky::expression_of &temp_no $result_statements
  var_simplify, 2, LOCAL(1), LOCAL(3), 3, LOCAL(1), LOCAL(3), LOCAL(4),
  // self.funky::expression_of &temp_no $result_statements
  LET, -1, LOCAL(2), var_funky__expression_of, LOCAL(1), LOCAL(2),
  // -> self temp_no result_statements
  LET, 3, LOCAL(2), LOCAL(3), LOCAL(4), TAIL_CALL,
  POS(341, 3),
  POS(342, 18),
  POS(342, 3),
  POS(342, 13),
  POS(343, 3)
};

static TAB_NUM t_func_resolve_identifier[] = {
  1, // locals
  1, // parameters
  var_345_22_node,
  // $identifier identifier_of(node)
  var_identifier_of, 1, var_345_22_node, 1, var_346_1_identifier,
  // $namespace identifier .before. ':'
  var_before, 2, var_346_1_identifier, chr_58, 1, var_347_1_namespace,
  // is_not_empty:
  var_is_not_empty, 1, var_347_1_namespace, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_namespace_is_not_empty, func_resolve, TAIL_CALL,
  POS(346, 3),
  POS(347, 3),
  POS(349, 15),
  POS(348, 3)
};

static TAB_NUM t_lambda_namespace_is_not_empty[] = {
  1, // locals
  0, // parameters
  // $true_namespace namespace_aliases(namespace)
  var_namespace_aliases, 1, var_347_1_namespace, 1, var_350_1_true_namespace,
  // is_defined:
  var_is_defined, 1, var_350_1_true_namespace, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_true_namespace_is_defined, func_check, TAIL_CALL,
  POS(350, 7),
  POS(352, 24),
  POS(351, 7)
};

static TAB_NUM t_lambda_true_namespace_is_defined[] = {
  1, // locals
  0, // parameters
  // !namespace true_namespace
  LET, 1, var_350_1_true_namespace, 1, var_347_1_namespace,
  // identifier .from. ':')
  var_from, 2, var_346_1_identifier, chr_58, 1, LOCAL(1),
  // !identifier append(namespace identifier .from. ':')
  var_append, 2, var_347_1_namespace, LOCAL(1), 1, var_346_1_identifier,
  // node.identifier_of identifier
  LET, -1, var_345_22_node, var_identifier_of, var_346_1_identifier, var_345_22_node,
  // check
  func_check, 0, TAIL_CALL,
  POS(353, 11),
  POS(354, 40),
  POS(354, 11),
  POS(355, 12),
  POS(356, 11)
};

static TAB_NUM t_func_check[] = {
  2, // locals
  0, // parameters
  // is_defined && node_type_of(node) != DEFINITION:
  var_is_defined, 1, var_347_1_namespace, 1, LOCAL(1),
  // is_defined && node_type_of(node) != DEFINITION:
  var_std__and, 2, LOCAL(1), lambda_36, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_37, func_resolve, TAIL_CALL,
  POS(362, 17),
  POS(362, 17),
  POS(361, 5)
};

static TAB_NUM t_lambda_36[] = {
  3, // locals
  0, // parameters
  // node_type_of(node) != DEFINITION:
  var_node_type_of, 1, var_345_22_node, 1, LOCAL(1),
  // node_type_of(node) != DEFINITION:
  var_std__equal, 2, LOCAL(1), var_DEFINITION, 1, LOCAL(2),
  // node_type_of(node) != DEFINITION:
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // node_type_of(node) != DEFINITION:
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(362, 31),
  POS(362, 31),
  POS(362, 31),
  POS(362, 31)
};

static TAB_NUM t_lambda_37[] = {
  1, // locals
  0, // parameters
  // $version namespace_versions(namespace)
  var_namespace_versions, 1, var_347_1_namespace, 1, var_363_1_version,
  // is_defined:
  var_is_defined, 1, var_363_1_version, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_version_is_defined, func_resolve, TAIL_CALL,
  POS(363, 9),
  POS(365, 19),
  POS(364, 9)
};

static TAB_NUM t_lambda_version_is_defined[] = {
  1, // locals
  0, // parameters
  // identifier .from. ':')
  var_from, 2, var_346_1_identifier, chr_58, 1, LOCAL(1),
  // !identifier append(namespace "-" version identifier .from. ':')
  var_append, 4, var_347_1_namespace, string_1, var_363_1_version, LOCAL(1), 1, var_346_1_identifier,
  // node.identifier_of identifier
  LET, -1, var_345_22_node, var_identifier_of, var_346_1_identifier, var_345_22_node,
  // resolve
  func_resolve, 0, TAIL_CALL,
  POS(366, 54),
  POS(366, 13),
  POS(367, 14),
  POS(368, 13)
};

static TAB_NUM t_func_resolve[] = {
  1, // locals
  0, // parameters
  // $resolved_identifier resolve_variable(identifier)
  var_resolve_variable, 1, var_346_1_identifier, 1, var_373_1_resolved_identifier,
  // is_defined
  var_is_defined, 1, var_373_1_resolved_identifier, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_38, lambda_39, TAIL_CALL,
  POS(373, 5),
  POS(375, 27),
  POS(374, 5)
};

static TAB_NUM t_lambda_38[] = {
  1, // locals
  0, // parameters
  // node
  LET, -2, var_345_22_node, var_identifier_of, var_373_1_resolved_identifier, var_kind_of, var_LOCAL, LOCAL(1),
  // 
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(377, 9),
  POS(376, 9)
};

static TAB_NUM t_lambda_39[] = {
  1, // locals
  0, // parameters
  // .kind_of EXTERN)
  LET, -1, var_345_22_node, var_kind_of, var_EXTERN, LOCAL(1),
  //  node(.kind_of EXTERN)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(380, 15),
  POS(380, 9)
};

static TAB_NUM t_func_funky_types__expression___simplify[] = {
  1, // locals
  2, // parameters
  var_382_36_self,
  var_382_41_temp_no,
  // $operator operator_of(self)
  var_operator_of, 1, var_382_36_self, 1, var_383_1_operator,
  // expression_of(self) &temp_no $statements
  var_expression_of, 1, var_382_36_self, 1, LOCAL(1),
  // simplify $expression expression_of(self) &temp_no $statements
  var_simplify, 2, LOCAL(1), var_382_41_temp_no, 3, var_384_10_expression, var_382_41_temp_no, var_384_51_statements,
  // is_defined:
  var_is_defined, 1, var_383_1_operator, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_operator_is_defined, lambda_40, TAIL_CALL,
  POS(383, 3),
  POS(384, 24),
  POS(384, 3),
  POS(386, 14),
  POS(385, 3)
};

static TAB_NUM t_lambda_operator_is_defined[] = {
  0, // locals
  0, // parameters
  // binop expression operator temp_no statements
  func_binop, 4, var_384_10_expression, var_383_1_operator, var_382_41_temp_no, var_384_51_statements, TAIL_CALL,
  POS(387, 7)
};

static TAB_NUM t_lambda_40[] = {
  1, // locals
  0, // parameters
  // .expression_of expression) temp_no statements
  LET, -1, var_382_36_self, var_expression_of, var_384_10_expression, LOCAL(1),
  //  self(.expression_of expression) temp_no statements
  LET, 3, LOCAL(1), var_382_41_temp_no, var_384_51_statements, TAIL_CALL,
  POS(388, 13),
  POS(388, 7)
};

static TAB_NUM t_func_funky_types__negation___simplify[] = {
  2, // locals
  2, // parameters
  var_390_34_self,
  var_390_39_temp_no,
  // expression_of(self) &temp_no $statements
  var_expression_of, 1, var_390_34_self, 1, LOCAL(1),
  // simplify $expression expression_of(self) &temp_no $statements
  var_simplify, 2, LOCAL(1), var_390_39_temp_no, 3, var_391_10_expression, var_390_39_temp_no, var_391_51_statements,
  // node_type_of(expression) == NUMERIC_LITERAL:
  var_node_type_of, 1, var_391_10_expression, 1, LOCAL(1),
  // node_type_of(expression) == NUMERIC_LITERAL:
  var_std__equal, 2, LOCAL(1), var_NUMERIC_LITERAL, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_41, lambda_44, TAIL_CALL,
  POS(391, 24),
  POS(391, 3),
  POS(393, 5),
  POS(393, 5),
  POS(392, 3)
};

static TAB_NUM t_lambda_41[] = {
  2, // locals
  0, // parameters
  // $digits digits_of(expression)
  var_digits_of, 1, var_391_10_expression, 1, var_394_1_digits,
  // $key funky::key_of(expression)
  var_funky__key_of, 1, var_391_10_expression, 1, var_395_1_key,
  // digits(1) == '-'
  var_394_1_digits, 1, num_1, 1, LOCAL(1),
  // digits(1) == '-'
  var_std__equal, 2, LOCAL(1), chr_45, 1, LOCAL(2),
  // if !digits !key
  var_if, 3, LOCAL(2), lambda_42, lambda_43, 2, var_394_1_digits, var_395_1_key,
  // expression
  LET, -2, var_391_10_expression, var_digits_of, var_394_1_digits, var_funky__key_of, var_395_1_key, LOCAL(1),
  // ->
  LET, 3, LOCAL(1), var_390_39_temp_no, var_391_51_statements, TAIL_CALL,
  POS(394, 7),
  POS(395, 7),
  POS(397, 9),
  POS(397, 9),
  POS(396, 7),
  POS(401, 9),
  POS(400, 7)
};

static TAB_NUM t_lambda_42[] = {
  2, // locals
  0, // parameters
  // range(digits 2 -1) range(key 7 -1)
  var_range, 3, var_394_1_digits, num_2, minus_num_1, 1, LOCAL(1),
  // range(key 7 -1)
  var_range, 3, var_395_1_key, num_7, minus_num_1, 1, LOCAL(2),
  //  range(digits 2 -1) range(key 7 -1)
  LET, 2, LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(398, 12),
  POS(398, 31),
  POS(398, 11)
};

static TAB_NUM t_lambda_43[] = {
  2, // locals
  0, // parameters
  // put(digits '-') append("minus_" key)
  var_put, 2, var_394_1_digits, chr_45, 1, LOCAL(1),
  // append("minus_" key)
  var_append, 2, str_minus, var_395_1_key, 1, LOCAL(2),
  //  put(digits '-') append("minus_" key)
  LET, 2, LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(399, 12),
  POS(399, 28),
  POS(399, 11)
};

static TAB_NUM t_lambda_44[] = {
  4, // locals
  0, // parameters
  // inc &temp_no
  var_inc, 1, var_390_39_temp_no, 1, var_390_39_temp_no,
  // std("negate" self)
  func_std, 2, str_negate, var_390_34_self, 1, LOCAL(1),
  // redefine_temporary(temp_no self)
  func_redefine_temporary, 2, var_390_39_temp_no, var_390_34_self, 1, LOCAL(2),
  // list
  var_list, 2, var_391_10_expression, LOCAL(2), 1, LOCAL(3),
  // create_statement
  func_create_statement, 2, LOCAL(1), LOCAL(3), 1, LOCAL(4),
  // push_leading_statement &statements
  var_push_leading_statement, 2, var_391_51_statements, LOCAL(4), 1, var_391_51_statements,
  // temporary(temp_no self) temp_no statements
  func_temporary, 2, var_390_39_temp_no, var_390_34_self, 1, LOCAL(1),
  // -> temporary(temp_no self) temp_no statements
  LET, 3, LOCAL(1), var_390_39_temp_no, var_391_51_statements, TAIL_CALL,
  POS(407, 7),
  POS(410, 11),
  POS(413, 13),
  POS(411, 11),
  POS(409, 9),
  POS(408, 7),
  POS(414, 10),
  POS(414, 7)
};

static TAB_NUM t_func_binop[] = {
  0, // locals
  4, // parameters
  var_416_9_left,
  var_416_14_operator,
  var_416_23_temp_no,
  var_416_31_statements,
  // $operation node_type_of(operator)
  var_node_type_of, 1, var_416_14_operator, 1, var_417_1_operation,
  // $right expression_of(operator)
  var_expression_of, 1, var_416_14_operator, 1, var_418_1_right,
  // case operation
  var_case, 8, var_417_1_operation, var_COMMA, lambda_COMMA, var_AND, lambda_AND, var_OR, lambda_OR, lambda_49, TAIL_CALL,
  POS(417, 3),
  POS(418, 3),
  POS(419, 3)
};

static TAB_NUM t_lambda_COMMA[] = {
  1, // locals
  0, // parameters
  // list(left) right
  var_list, 1, var_416_9_left, 1, LOCAL(1),
  // sequence_constructor list(left) right
  func_sequence_constructor, 2, LOCAL(1), var_418_1_right, TAIL_CALL,
  POS(421, 28),
  POS(421, 7)
};

static TAB_NUM t_func_sequence_constructor[] = {
  2, // locals
  2, // parameters
  var_423_24_sequence,
  var_423_33_rest,
  // node_type_of(rest) == SEQUENCE_EXPRESSION:
  var_node_type_of, 1, var_423_33_rest, 1, LOCAL(1),
  // node_type_of(rest) == SEQUENCE_EXPRESSION:
  var_std__equal, 2, LOCAL(1), var_SEQUENCE_EXPRESSION, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_45, lambda_46, TAIL_CALL,
  POS(425, 11),
  POS(425, 11),
  POS(424, 9)
};

static TAB_NUM t_lambda_45[] = {
  5, // locals
  0, // parameters
  // expression_of(rest) $item &temp_no $more_statements
  var_expression_of, 1, var_423_33_rest, 1, LOCAL(1),
  // simplify expression_of(rest) $item &temp_no $more_statements
  var_simplify, 2, LOCAL(1), var_416_23_temp_no, 3, LOCAL(4), var_416_23_temp_no, LOCAL(5),
  // append &statements more_statements
  var_append, 2, var_416_31_statements, LOCAL(5), 1, var_416_31_statements,
  // push(sequence item)
  var_push, 2, var_423_24_sequence, LOCAL(4), 1, LOCAL(1),
  // operator_of(rest))
  var_operator_of, 1, var_423_33_rest, 1, LOCAL(2),
  // expression_of(operator_of(rest))
  var_expression_of, 1, LOCAL(2), 1, LOCAL(3),
  // sequence_constructor
  func_sequence_constructor, 2, LOCAL(1), LOCAL(3), TAIL_CALL,
  POS(426, 22),
  POS(426, 13),
  POS(427, 13),
  POS(429, 15),
  POS(430, 29),
  POS(430, 15),
  POS(428, 13)
};

static TAB_NUM t_lambda_46[] = {
  2, // locals
  0, // parameters
  // simplify &rest &temp_no $more_statements
  var_simplify, 2, var_423_33_rest, var_416_23_temp_no, 3, var_423_33_rest, var_416_23_temp_no, LOCAL(2),
  // append &statements more_statements
  var_append, 2, var_416_31_statements, LOCAL(2), 1, var_416_31_statements,
  // push(sequence rest)
  var_push, 2, var_423_24_sequence, var_423_33_rest, 1, LOCAL(1),
  // function_call_from_list "sequence" push(sequence rest)
  func_function_call_from_list, 2, str_sequence, LOCAL(1), TAIL_CALL,
  POS(432, 13),
  POS(433, 13),
  POS(434, 48),
  POS(434, 13)
};

static TAB_NUM t_lambda_AND[] = {
  3, // locals
  0, // parameters
  // operator_of(operator).is_defined &right -> operator
  var_operator_of, 1, var_416_14_operator, 1, LOCAL(1),
  // is_defined &right -> operator
  var_is_defined, 1, LOCAL(1), 1, LOCAL(2),
  // update_if operator_of(operator).is_defined &right -> operator
  var_update_if, 3, LOCAL(2), var_418_1_right, lambda_47, 1, var_418_1_right,
  // source_group_of(right)
  var_source_group_of, 1, var_418_1_right, 1, LOCAL(1),
  // source_position_of(right)
  var_source_position_of, 1, var_418_1_right, 1, LOCAL(2),
  // list(right)
  var_list, 1, var_418_1_right, 1, LOCAL(3),
  // !right
  LET, -3, var_funky_types__return_expression, var_source_group_of, LOCAL(1), var_source_position_of, LOCAL(2), var_arguments_of, LOCAL(3), var_418_1_right,
  // simplify &right &temp_no $_dummy_statements
  var_simplify, 2, var_418_1_right, var_416_23_temp_no, 3, var_418_1_right, var_416_23_temp_no, LOCAL(1),
  // function_call "and" left right
  func_function_call, 3, str_and, var_416_9_left, var_418_1_right, TAIL_CALL,
  POS(436, 17),
  POS(436, 39),
  POS(436, 7),
  POS(439, 28),
  POS(440, 31),
  POS(441, 25),
  POS(437, 7),
  POS(442, 7),
  POS(443, 7)
};

static TAB_NUM t_lambda_47[] = {
  0, // locals
  0, // parameters
  //  operator
  LET, 1, var_416_14_operator, TAIL_CALL,
  POS(436, 59)
};

static TAB_NUM t_lambda_OR[] = {
  3, // locals
  0, // parameters
  // operator_of(operator).is_defined &right -> operator
  var_operator_of, 1, var_416_14_operator, 1, LOCAL(1),
  // is_defined &right -> operator
  var_is_defined, 1, LOCAL(1), 1, LOCAL(2),
  // update_if operator_of(operator).is_defined &right -> operator
  var_update_if, 3, LOCAL(2), var_418_1_right, lambda_48, 1, var_418_1_right,
  // source_group_of(right)
  var_source_group_of, 1, var_418_1_right, 1, LOCAL(1),
  // source_position_of(right)
  var_source_position_of, 1, var_418_1_right, 1, LOCAL(2),
  // list(right)
  var_list, 1, var_418_1_right, 1, LOCAL(3),
  // !right
  LET, -3, var_funky_types__return_expression, var_source_group_of, LOCAL(1), var_source_position_of, LOCAL(2), var_arguments_of, LOCAL(3), var_418_1_right,
  // simplify &right &temp_no $_dummy_statements
  var_simplify, 2, var_418_1_right, var_416_23_temp_no, 3, var_418_1_right, var_416_23_temp_no, LOCAL(1),
  // function_call "or" left right
  func_function_call, 3, str_or, var_416_9_left, var_418_1_right, TAIL_CALL,
  POS(445, 17),
  POS(445, 39),
  POS(445, 7),
  POS(448, 28),
  POS(449, 31),
  POS(450, 25),
  POS(446, 7),
  POS(451, 7),
  POS(452, 7)
};

static TAB_NUM t_lambda_48[] = {
  0, // locals
  0, // parameters
  //  operator
  LET, 1, var_416_14_operator, TAIL_CALL,
  POS(445, 59)
};

static TAB_NUM t_lambda_49[] = {
  2, // locals
  0, // parameters
  // simplify &right &temp_no $right_statements
  var_simplify, 2, var_418_1_right, var_416_23_temp_no, 3, var_418_1_right, var_416_23_temp_no, LOCAL(2),
  // append &statements right_statements
  var_append, 2, var_416_31_statements, LOCAL(2), 1, var_416_31_statements,
  // case operation !left !temp_no !statements
  var_case, 38, var_417_1_operation, var_PLUS, lambda_PLUS, var_MINUS, lambda_MINUS, var_TIMES, lambda_TIMES, var_OVER, lambda_OVER, var_EQUAL, lambda_EQUAL, var_NOT_EQUAL, lambda_NOT_EQUAL, var_LESS_THAN, lambda_LESS_THAN, var_GREATER_THAN, lambda_GREATER_THAN, var_LESS_EQUAL, lambda_LESS_EQUAL, var_GREATER_EQUAL, lambda_GREATER_EQUAL, var_RANGE, lambda_RANGE, var_KEY_VALUE, lambda_KEY_VALUE, var_SHIFT_LEFT, lambda_SHIFT_LEFT, var_SHIFT_RIGHT, lambda_SHIFT_RIGHT, var_BIT_AND, lambda_BIT_AND, var_BIT_OR, lambda_BIT_OR, var_BIT_XOR, lambda_BIT_XOR, var_NAMED_OPERATOR, lambda_NAMED_OPERATOR, lambda_50, 3, var_416_9_left, var_416_23_temp_no, var_416_31_statements,
  // !operator operator_of(operator)
  var_operator_of, 1, var_416_14_operator, 1, var_416_14_operator,
  // is_defined:
  var_is_defined, 1, var_416_14_operator, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_2_operator_is_defined, lambda_51, TAIL_CALL,
  POS(454, 7),
  POS(455, 7),
  POS(456, 7),
  POS(499, 7),
  POS(501, 18),
  POS(500, 7)
};

static TAB_NUM t_lambda_PLUS[] = {
  0, // locals
  0, // parameters
  // function_call "plus" left right
  func_function_call, 3, str_plus, var_416_9_left, var_418_1_right, TAIL_CALL,
  POS(457, 15)
};

static TAB_NUM t_lambda_MINUS[] = {
  0, // locals
  0, // parameters
  // function_call "minus" left right
  func_function_call, 3, str_minus_2, var_416_9_left, var_418_1_right, TAIL_CALL,
  POS(458, 16)
};

static TAB_NUM t_lambda_TIMES[] = {
  0, // locals
  0, // parameters
  // function_call "times" left right
  func_function_call, 3, str_times, var_416_9_left, var_418_1_right, TAIL_CALL,
  POS(459, 16)
};

static TAB_NUM t_lambda_OVER[] = {
  0, // locals
  0, // parameters
  // function_call "over" left right
  func_function_call, 3, str_over, var_416_9_left, var_418_1_right, TAIL_CALL,
  POS(460, 15)
};

static TAB_NUM t_lambda_EQUAL[] = {
  0, // locals
  0, // parameters
  // function_call "equal" left right
  func_function_call, 3, str_equal, var_416_9_left, var_418_1_right, TAIL_CALL,
  POS(461, 16)
};

static TAB_NUM t_lambda_NOT_EQUAL[] = {
  0, // locals
  0, // parameters
  // function_call "equal" &left right !temp_no !statements
  func_function_call, 3, str_equal, var_416_9_left, var_418_1_right, 3, var_416_9_left, var_416_23_temp_no, var_416_31_statements,
  // function_call "not" left
  func_function_call, 2, str_not, var_416_9_left, TAIL_CALL,
  POS(463, 11),
  POS(464, 11)
};

static TAB_NUM t_lambda_LESS_THAN[] = {
  0, // locals
  0, // parameters
  // function_call "less" left right
  func_function_call, 3, str_less, var_416_9_left, var_418_1_right, TAIL_CALL,
  POS(465, 20)
};

static TAB_NUM t_lambda_GREATER_THAN[] = {
  0, // locals
  0, // parameters
  // function_call "less" right left
  func_function_call, 3, str_less, var_418_1_right, var_416_9_left, TAIL_CALL,
  POS(466, 23)
};

static TAB_NUM t_lambda_LESS_EQUAL[] = {
  0, // locals
  0, // parameters
  // function_call "less" right &left !temp_no !statements
  func_function_call, 3, str_less, var_418_1_right, var_416_9_left, 3, var_416_9_left, var_416_23_temp_no, var_416_31_statements,
  // function_call "not" left
  func_function_call, 2, str_not, var_416_9_left, TAIL_CALL,
  POS(468, 11),
  POS(469, 11)
};

static TAB_NUM t_lambda_GREATER_EQUAL[] = {
  0, // locals
  0, // parameters
  // function_call "less" &left right !temp_no !statements
  func_function_call, 3, str_less, var_416_9_left, var_418_1_right, 3, var_416_9_left, var_416_23_temp_no, var_416_31_statements,
  // function_call "not" left
  func_function_call, 2, str_not, var_416_9_left, TAIL_CALL,
  POS(471, 11),
  POS(472, 11)
};

static TAB_NUM t_lambda_RANGE[] = {
  0, // locals
  0, // parameters
  // function_call "value_range" left right
  func_function_call, 3, str_value_range, var_416_9_left, var_418_1_right, TAIL_CALL,
  POS(473, 16)
};

static TAB_NUM t_lambda_KEY_VALUE[] = {
  0, // locals
  0, // parameters
  // function_call "key_value_pair" left right
  func_function_call, 3, str_key_value_pair, var_416_9_left, var_418_1_right, TAIL_CALL,
  POS(474, 20)
};

static TAB_NUM t_lambda_SHIFT_LEFT[] = {
  0, // locals
  0, // parameters
  // function_call "shift_left" left right
  func_function_call, 3, str_shift_left, var_416_9_left, var_418_1_right, TAIL_CALL,
  POS(475, 21)
};

static TAB_NUM t_lambda_SHIFT_RIGHT[] = {
  0, // locals
  0, // parameters
  // function_call "shift_right" left right
  func_function_call, 3, str_shift_right, var_416_9_left, var_418_1_right, TAIL_CALL,
  POS(476, 22)
};

static TAB_NUM t_lambda_BIT_AND[] = {
  0, // locals
  0, // parameters
  // function_call "bit_and" left right
  func_function_call, 3, str_bit_and, var_416_9_left, var_418_1_right, TAIL_CALL,
  POS(477, 18)
};

static TAB_NUM t_lambda_BIT_OR[] = {
  0, // locals
  0, // parameters
  // function_call "bit_or" left right
  func_function_call, 3, str_bit_or, var_416_9_left, var_418_1_right, TAIL_CALL,
  POS(478, 17)
};

static TAB_NUM t_lambda_BIT_XOR[] = {
  0, // locals
  0, // parameters
  // function_call "bit_xor" left right
  func_function_call, 3, str_bit_xor, var_416_9_left, var_418_1_right, TAIL_CALL,
  POS(479, 18)
};

static TAB_NUM t_lambda_NAMED_OPERATOR[] = {
  7, // locals
  0, // parameters
  // inc &temp_no
  var_inc, 1, var_416_23_temp_no, 1, var_416_23_temp_no,
  // identifier_of(operator)
  var_identifier_of, 1, var_416_14_operator, 1, LOCAL(1),
  // source_group_of(left)
  var_source_group_of, 1, var_416_9_left, 1, LOCAL(2),
  // source_position_of(left)
  var_source_position_of, 1, var_416_9_left, 1, LOCAL(3),
  // funky_types::functor
  LET, -4, var_funky_types__functor, var_identifier_of, LOCAL(1), var_kind_of, var_EXTERN, var_source_group_of, LOCAL(2), var_source_position_of, LOCAL(3), LOCAL(4),
  // redefine_temporary(temp_no left))
  func_redefine_temporary, 2, var_416_23_temp_no, var_416_9_left, 1, LOCAL(5),
  // list(left right redefine_temporary(temp_no left))
  var_list, 3, var_416_9_left, var_418_1_right, LOCAL(5), 1, LOCAL(6),
  // create_statement
  func_create_statement, 2, LOCAL(4), LOCAL(6), 1, LOCAL(7),
  // push_leading_statement &statements
  var_push_leading_statement, 2, var_416_31_statements, LOCAL(7), 1, var_416_31_statements,
  // temporary(temp_no left)
  func_temporary, 2, var_416_23_temp_no, var_416_9_left, 1, LOCAL(1),
  // ->
  LET, 3, LOCAL(1), var_416_23_temp_no, var_416_31_statements, TAIL_CALL,
  POS(481, 11),
  POS(485, 32),
  POS(487, 34),
  POS(488, 37),
  POS(484, 15),
  POS(489, 31),
  POS(489, 15),
  POS(483, 13),
  POS(482, 11),
  POS(491, 13),
  POS(490, 11)
};

static TAB_NUM t_lambda_50[] = {
  0, // locals
  0, // parameters
  // debug::dump `operation
  var_debug__dump, 2, str_operation, var_417_1_operation, 0,
  // debug::dump 9 `left
  var_debug__dump, 3, num_9, str_left, var_416_9_left, 0,
  // debug::dump 9 `right
  var_debug__dump, 3, num_9, str_right, var_418_1_right, 0,
  // debug::exit
  var_debug__exit, 0, TAIL_CALL,
  POS(495, 11),
  POS(496, 11),
  POS(497, 11),
  POS(498, 11)
};

static TAB_NUM t_lambda_2_operator_is_defined[] = {
  0, // locals
  0, // parameters
  // binop left operator temp_no statements
  func_binop, 4, var_416_9_left, var_416_14_operator, var_416_23_temp_no, var_416_31_statements, TAIL_CALL,
  POS(502, 11)
};

static TAB_NUM t_lambda_51[] = {
  0, // locals
  0, // parameters
  //  left temp_no statements
  LET, 3, var_416_9_left, var_416_23_temp_no, var_416_31_statements, TAIL_CALL,
  POS(503, 11)
};

static TAB_NUM t_func_function_call[] = {
  2, // locals
  -2, // parameters
  MANDATORY_PARAMETER, LOCAL(1), // 505_17_func
  REST_PARAMETER, LOCAL(2), // 505_22_arguments
  // function_call_from_list func arguments
  func_function_call_from_list, 2, LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(506, 5)
};

static TAB_NUM t_func_function_call_from_list[] = {
  7, // locals
  2, // parameters
  LOCAL(5), // 508_27_func
  LOCAL(6), // 508_32_arguments
  // $first_argument arguments(1)
  LOCAL(6), 1, num_1, 1, LOCAL(7),
  // inc &temp_no
  var_inc, 1, var_416_23_temp_no, 1, var_416_23_temp_no,
  // std(func first_argument)
  func_std, 2, LOCAL(5), LOCAL(7), 1, LOCAL(1),
  // redefine_temporary(temp_no first_argument))
  func_redefine_temporary, 2, var_416_23_temp_no, LOCAL(7), 1, LOCAL(2),
  // push(arguments redefine_temporary(temp_no first_argument))
  var_push, 2, LOCAL(6), LOCAL(2), 1, LOCAL(3),
  // create_statement
  func_create_statement, 2, LOCAL(1), LOCAL(3), 1, LOCAL(4),
  // push_leading_statement &statements
  var_push_leading_statement, 2, var_416_31_statements, LOCAL(4), 1, var_416_31_statements,
  // temporary(temp_no first_argument)
  func_temporary, 2, var_416_23_temp_no, LOCAL(7), 1, LOCAL(1),
  // ->
  LET, 3, LOCAL(1), var_416_23_temp_no, var_416_31_statements, TAIL_CALL,
  POS(509, 5),
  POS(510, 5),
  POS(513, 9),
  POS(514, 24),
  POS(514, 9),
  POS(512, 7),
  POS(511, 5),
  POS(516, 7),
  POS(515, 5)
};

static TAB_NUM t_func_simplify_return[] = {
  11, // locals
  2, // parameters
  LOCAL(10), // 523_19_self
  LOCAL(11), // 523_24_temp_no
  // source_group_of(self)
  var_source_group_of, 1, LOCAL(10), 1, LOCAL(1),
  // source_position_of(self)
  var_source_position_of, 1, LOCAL(10), 1, LOCAL(2),
  // source_group_of(self)
  var_source_group_of, 1, LOCAL(10), 1, LOCAL(3),
  // source_position_of(self)
  var_source_position_of, 1, LOCAL(10), 1, LOCAL(4),
  // funky_types::return
  LET, -2, var_funky_types__return, var_source_group_of, LOCAL(3), var_source_position_of, LOCAL(4), LOCAL(5),
  // arguments_of(self)
  var_arguments_of, 1, LOCAL(10), 1, LOCAL(6),
  // create_statement
  func_create_statement, 2, LOCAL(5), LOCAL(6), 1, LOCAL(7),
  // list
  var_list, 1, LOCAL(7), 1, LOCAL(8),
  // funky_types::body
  LET, -3, var_funky_types__body, var_source_group_of, LOCAL(1), var_source_position_of, LOCAL(2), var_statements_of, LOCAL(8), LOCAL(9),
  // simplify
  var_simplify, 2, LOCAL(9), LOCAL(11), TAIL_CALL,
  POS(526, 24),
  POS(527, 27),
  POS(532, 32),
  POS(533, 35),
  POS(531, 13),
  POS(534, 13),
  POS(530, 11),
  POS(529, 9),
  POS(525, 5),
  POS(524, 3)
};

static TAB_NUM t_func_funky_types__inline_statement___simplify[] = {
  7, // locals
  2, // parameters
  LOCAL(6), // 537_42_self
  LOCAL(7), // 537_47_temp_no
  // source_group_of(self)
  var_source_group_of, 1, LOCAL(6), 1, LOCAL(1),
  // source_position_of(self)
  var_source_position_of, 1, LOCAL(6), 1, LOCAL(2),
  // head_of(self)
  var_head_of, 1, LOCAL(6), 1, LOCAL(3),
  // arguments_of(self)
  var_arguments_of, 1, LOCAL(6), 1, LOCAL(4),
  // funky_types::statement
  LET, -4, var_funky_types__statement, var_source_group_of, LOCAL(1), var_source_position_of, LOCAL(2), var_head_of, LOCAL(3), var_arguments_of, LOCAL(4), LOCAL(5),
  // simplify
  var_simplify, 2, LOCAL(5), LOCAL(7), TAIL_CALL,
  POS(540, 24),
  POS(541, 27),
  POS(542, 16),
  POS(543, 21),
  POS(539, 5),
  POS(538, 3)
};

static TAB_NUM t_func_funky_types__multiline_plus___simplify[] = {
  2, // locals
  2, // parameters
  LOCAL(1), // 546_40_self
  LOCAL(2), // 546_45_temp_no
  // simplify_multiline_operator self temp_no "plus"
  func_simplify_multiline_operator, 3, LOCAL(1), LOCAL(2), str_plus, TAIL_CALL,
  POS(547, 3)
};

static TAB_NUM t_func_funky_types__multiline_minus___simplify[] = {
  2, // locals
  2, // parameters
  LOCAL(1), // 549_41_self
  LOCAL(2), // 549_46_temp_no
  // simplify_multiline_operator self temp_no "minus"
  func_simplify_multiline_operator, 3, LOCAL(1), LOCAL(2), str_minus_2, TAIL_CALL,
  POS(550, 3)
};

static TAB_NUM t_func_funky_types__multiline_minus_with_remark___simplify[] = {
  2, // locals
  2, // parameters
  LOCAL(1), // 552_53_self
  LOCAL(2), // 552_58_temp_no
  // simplify_multiline_operator self temp_no "minus"
  func_simplify_multiline_operator, 3, LOCAL(1), LOCAL(2), str_minus_2, TAIL_CALL,
  POS(553, 3)
};

static TAB_NUM t_func_funky_types__multiline_times___simplify[] = {
  2, // locals
  2, // parameters
  LOCAL(1), // 555_41_self
  LOCAL(2), // 555_46_temp_no
  // simplify_multiline_operator self temp_no "times"
  func_simplify_multiline_operator, 3, LOCAL(1), LOCAL(2), str_times, TAIL_CALL,
  POS(556, 3)
};

static TAB_NUM t_func_funky_types__multiline_over___simplify[] = {
  2, // locals
  2, // parameters
  LOCAL(1), // 558_40_self
  LOCAL(2), // 558_45_temp_no
  // simplify_multiline_operator self temp_no "over"
  func_simplify_multiline_operator, 3, LOCAL(1), LOCAL(2), str_over, TAIL_CALL,
  POS(559, 3)
};

static TAB_NUM t_func_funky_types__multiline_over_with_remark___simplify[] = {
  2, // locals
  2, // parameters
  LOCAL(1), // 561_52_self
  LOCAL(2), // 561_57_temp_no
  // simplify_multiline_operator self temp_no "over"
  func_simplify_multiline_operator, 3, LOCAL(1), LOCAL(2), str_over, TAIL_CALL,
  POS(562, 3)
};

static TAB_NUM t_func_funky_types__multiline_shift_left___simplify[] = {
  2, // locals
  2, // parameters
  LOCAL(1), // 564_46_self
  LOCAL(2), // 564_51_temp_no
  // simplify_multiline_operator self temp_no "shift_left"
  func_simplify_multiline_operator, 3, LOCAL(1), LOCAL(2), str_shift_left, TAIL_CALL,
  POS(565, 3)
};

static TAB_NUM t_func_funky_types__multiline_shift_right___simplify[] = {
  2, // locals
  2, // parameters
  LOCAL(1), // 567_47_self
  LOCAL(2), // 567_52_temp_no
  // simplify_multiline_operator self temp_no "shift_right"
  func_simplify_multiline_operator, 3, LOCAL(1), LOCAL(2), str_shift_right, TAIL_CALL,
  POS(568, 3)
};

static TAB_NUM t_func_funky_types__multiline_equal___simplify[] = {
  2, // locals
  2, // parameters
  LOCAL(1), // 570_41_self
  LOCAL(2), // 570_46_temp_no
  // simplify_multiline_operator self temp_no "equal"
  func_simplify_multiline_operator, 3, LOCAL(1), LOCAL(2), str_equal, TAIL_CALL,
  POS(571, 3)
};

static TAB_NUM t_func_funky_types__multiline_not_equal___simplify[] = {
  2, // locals
  2, // parameters
  LOCAL(1), // 573_45_self
  LOCAL(2), // 573_50_temp_no
  // simplify_multiline_operator self temp_no "equal" true
  func_simplify_multiline_operator, 4, LOCAL(1), LOCAL(2), str_equal, var_true, TAIL_CALL,
  POS(574, 3)
};

static TAB_NUM t_func_funky_types__multiline_less_equal___simplify[] = {
  2, // locals
  2, // parameters
  LOCAL(1), // 576_46_self
  LOCAL(2), // 576_51_temp_no
  // simplify_multiline_operator self temp_no "less" true true
  func_simplify_multiline_operator, 5, LOCAL(1), LOCAL(2), str_less, var_true, var_true, TAIL_CALL,
  POS(577, 3)
};

static TAB_NUM t_func_funky_types__multiline_less_than___simplify[] = {
  2, // locals
  2, // parameters
  LOCAL(1), // 579_45_self
  LOCAL(2), // 579_50_temp_no
  // simplify_multiline_operator self temp_no "less"
  func_simplify_multiline_operator, 3, LOCAL(1), LOCAL(2), str_less, TAIL_CALL,
  POS(580, 3)
};

static TAB_NUM t_func_funky_types__multiline_greater_equal___simplify[] = {
  2, // locals
  2, // parameters
  LOCAL(1), // 582_49_self
  LOCAL(2), // 582_54_temp_no
  // simplify_multiline_operator self temp_no "less" true
  func_simplify_multiline_operator, 4, LOCAL(1), LOCAL(2), str_less, var_true, TAIL_CALL,
  POS(583, 3)
};

static TAB_NUM t_func_funky_types__multiline_greater_than___simplify[] = {
  2, // locals
  2, // parameters
  LOCAL(1), // 585_48_self
  LOCAL(2), // 585_53_temp_no
  // simplify_multiline_operator self temp_no "less" false true
  func_simplify_multiline_operator, 5, LOCAL(1), LOCAL(2), str_less, var_false, var_true, TAIL_CALL,
  POS(586, 3)
};

static TAB_NUM t_func_funky_types__multiline_and___simplify[] = {
  2, // locals
  2, // parameters
  LOCAL(1), // 588_39_self
  LOCAL(2), // 588_44_temp_no
  // simplify_multiline_operator self temp_no "and" false false true
  func_simplify_multiline_operator, 6, LOCAL(1), LOCAL(2), str_and, var_false, var_false, var_true, TAIL_CALL,
  POS(589, 3)
};

static TAB_NUM t_func_funky_types__multiline_or___simplify[] = {
  2, // locals
  2, // parameters
  LOCAL(1), // 591_38_self
  LOCAL(2), // 591_43_temp_no
  // simplify_multiline_operator self temp_no "or" false false true
  func_simplify_multiline_operator, 6, LOCAL(1), LOCAL(2), str_or, var_false, var_false, var_true, TAIL_CALL,
  POS(592, 3)
};

static TAB_NUM t_func_funky_types__multiline_bit_and___simplify[] = {
  2, // locals
  2, // parameters
  LOCAL(1), // 594_43_self
  LOCAL(2), // 594_48_temp_no
  // simplify_multiline_operator self temp_no "bit_and"
  func_simplify_multiline_operator, 3, LOCAL(1), LOCAL(2), str_bit_and, TAIL_CALL,
  POS(595, 3)
};

static TAB_NUM t_func_funky_types__multiline_bit_and_with_remark___simplify[] = {
  2, // locals
  2, // parameters
  LOCAL(1), // 597_55_self
  LOCAL(2), // 597_60_temp_no
  // simplify_multiline_operator self temp_no "bit_and"
  func_simplify_multiline_operator, 3, LOCAL(1), LOCAL(2), str_bit_and, TAIL_CALL,
  POS(598, 3)
};

static TAB_NUM t_func_funky_types__multiline_bit_or___simplify[] = {
  2, // locals
  2, // parameters
  LOCAL(1), // 600_42_self
  LOCAL(2), // 600_47_temp_no
  // simplify_multiline_operator self temp_no "bit_or"
  func_simplify_multiline_operator, 3, LOCAL(1), LOCAL(2), str_bit_or, TAIL_CALL,
  POS(601, 3)
};

static TAB_NUM t_func_funky_types__multiline_bit_xor___simplify[] = {
  2, // locals
  2, // parameters
  LOCAL(1), // 603_43_self
  LOCAL(2), // 603_48_temp_no
  // simplify_multiline_operator self temp_no "bit_xor"
  func_simplify_multiline_operator, 3, LOCAL(1), LOCAL(2), str_bit_xor, TAIL_CALL,
  POS(604, 3)
};

static TAB_NUM t_func_funky_types__multiline_assign___simplify[] = {
  2, // locals
  2, // parameters
  LOCAL(1), // 606_42_self
  LOCAL(2), // 606_47_temp_no
  // simplify_multiline_operator self temp_no "key_value_pair"
  func_simplify_multiline_operator, 3, LOCAL(1), LOCAL(2), str_key_value_pair, TAIL_CALL,
  POS(607, 3)
};

static TAB_NUM t_func_simplify_multiline_operator[] = {
  3, // locals
  -6, // parameters
  MANDATORY_PARAMETER, var_611_0_self,
  MANDATORY_PARAMETER, var_612_0_temp_no,
  MANDATORY_PARAMETER, LOCAL(2), // 613_0_name
  var_false, var_614_0_do_negate,
  var_false, var_615_0_do_swap,
  var_false, LOCAL(3), // 616_0_do_delay
  // $head std(name self)
  func_std, 2, LOCAL(2), var_611_0_self, 1, var_618_1_head,
  // arguments_of(self): (argument) -> node_type_of(argument) != REMARK)
  var_arguments_of, 1, var_611_0_self, 1, LOCAL(1),
  // $arguments
  var_filter, 2, LOCAL(1), lambda_filterarguments_ofself, 1, var_619_1_arguments,
  // arguments(1) $left &temp_no $statements
  var_619_1_arguments, 1, num_1, 1, LOCAL(1),
  // simplify arguments(1) $left &temp_no $statements
  var_simplify, 2, LOCAL(1), var_612_0_temp_no, 3, var_621_23_left, var_612_0_temp_no, var_621_38_statements,
  // $right undefined
  LET, 1, var_undefined, 1, var_622_1_right,
  // $n length_of(arguments)
  var_length_of, 1, var_619_1_arguments, 1, var_623_1_n,
  // if
  var_if, 3, LOCAL(3), lambda_do_delay, lambda_54, TAIL_CALL,
  POS(618, 3),
  POS(620, 12),
  POS(619, 3),
  POS(621, 12),
  POS(621, 3),
  POS(622, 3),
  POS(623, 3),
  POS(624, 3)
};

static TAB_NUM t_lambda_filterarguments_ofself[] = {
  4, // locals
  1, // parameters
  LOCAL(4), // 620_28_argument
  // node_type_of(argument) != REMARK)
  var_node_type_of, 1, LOCAL(4), 1, LOCAL(1),
  // node_type_of(argument) != REMARK)
  var_std__equal, 2, LOCAL(1), var_REMARK, 1, LOCAL(2),
  // node_type_of(argument) != REMARK)
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // -> node_type_of(argument) != REMARK)
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(620, 46),
  POS(620, 46),
  POS(620, 46),
  POS(620, 43)
};

static TAB_NUM t_lambda_do_delay[] = {
  7, // locals
  0, // parameters
  // $rest range(arguments 2 -1)
  var_range, 3, var_619_1_arguments, num_2, minus_num_1, 1, var_626_1_rest,
  // arguments(2))
  var_619_1_arguments, 1, num_2, 1, LOCAL(1),
  // source_group_of(arguments(2))
  var_source_group_of, 1, LOCAL(1), 1, LOCAL(2),
  // arguments(2))
  var_619_1_arguments, 1, num_2, 1, LOCAL(3),
  // source_position_of(arguments(2))
  var_source_position_of, 1, LOCAL(3), 1, LOCAL(4),
  // n == 2
  var_std__equal, 2, var_623_1_n, num_2, 1, LOCAL(5),
  // if
  var_if, 3, LOCAL(5), lambda_52, lambda_53, 1, LOCAL(6),
  // !right
  LET, -3, var_funky_types__return_expression, var_source_group_of, LOCAL(2), var_source_position_of, LOCAL(4), var_arguments_of, LOCAL(6), var_622_1_right,
  // simplify &right &temp_no $more_statements
  var_simplify, 2, var_622_1_right, var_612_0_temp_no, 3, var_622_1_right, var_612_0_temp_no, LOCAL(7),
  // append &statements more_statements
  var_append, 2, var_621_38_statements, LOCAL(7), 1, var_621_38_statements,
  // push_statement
  func_push_statement, 0, TAIL_CALL,
  POS(626, 7),
  POS(629, 44),
  POS(629, 28),
  POS(630, 50),
  POS(630, 31),
  POS(633, 15),
  POS(632, 13),
  POS(627, 7),
  POS(636, 7),
  POS(637, 7),
  POS(638, 7)
};

static TAB_NUM t_lambda_52[] = {
  0, // locals
  0, // parameters
  //  rest
  LET, 1, var_626_1_rest, TAIL_CALL,
  POS(634, 17)
};

static TAB_NUM t_lambda_53[] = {
  2, // locals
  0, // parameters
  // .arguments_of rest))
  LET, -1, var_611_0_self, var_arguments_of, var_626_1_rest, LOCAL(1),
  // list(self(.arguments_of rest))
  var_list, 1, LOCAL(1), 1, LOCAL(2),
  //  list(self(.arguments_of rest))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(635, 28),
  POS(635, 18),
  POS(635, 17)
};

static TAB_NUM t_lambda_54[] = {
  0, // locals
  0, // parameters
  // $idx 2
  LET, 1, num_2, 1, var_640_1_idx,
  // loop:
  var_loop, 1, lambda_loop, TAIL_CALL,
  POS(640, 7),
  POS(641, 7)
};

static TAB_NUM t_lambda_loop[] = {
  2, // locals
  0, // parameters
  // arguments(idx) !right &temp_no $more_statements
  var_619_1_arguments, 1, var_640_1_idx, 1, LOCAL(1),
  // simplify arguments(idx) !right &temp_no $more_statements
  var_simplify, 2, LOCAL(1), var_612_0_temp_no, 3, var_622_1_right, var_612_0_temp_no, LOCAL(2),
  // append &statements more_statements
  var_append, 2, var_621_38_statements, LOCAL(2), 1, var_621_38_statements,
  // update_if do_swap &left &right -> right left
  var_update_if, 4, var_615_0_do_swap, var_621_23_left, var_622_1_right, lambda_55, 2, var_621_23_left, var_622_1_right,
  // push_statement !left !temp_no !statements
  func_push_statement, 0, 3, var_621_23_left, var_612_0_temp_no, var_621_38_statements,
  // idx < n:
  var_std__less, 2, var_640_1_idx, var_623_1_n, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_56, lambda_57, TAIL_CALL,
  POS(642, 18),
  POS(642, 9),
  POS(643, 9),
  POS(644, 9),
  POS(645, 9),
  POS(647, 11),
  POS(646, 9)
};

static TAB_NUM t_lambda_55[] = {
  0, // locals
  0, // parameters
  //  right left
  LET, 2, var_622_1_right, var_621_23_left, TAIL_CALL,
  POS(644, 42)
};

static TAB_NUM t_lambda_56[] = {
  0, // locals
  0, // parameters
  // inc &idx
  var_inc, 1, var_640_1_idx, 1, var_640_1_idx,
  // next
  var_next, 0, TAIL_CALL,
  POS(648, 13),
  POS(649, 13)
};

static TAB_NUM t_lambda_57[] = {
  0, // locals
  0, // parameters
  // if
  var_if, 3, var_614_0_do_negate, lambda_do_negate, lambda_58, TAIL_CALL,
  POS(651, 13)
};

static TAB_NUM t_lambda_do_negate[] = {
  6, // locals
  0, // parameters
  // inc &temp_no
  var_inc, 1, var_612_0_temp_no, 1, var_612_0_temp_no,
  // temporary(temp_no left)
  func_temporary, 2, var_612_0_temp_no, var_621_23_left, 1, LOCAL(1),
  // std("not" left)
  func_std, 2, str_not, var_621_23_left, 1, LOCAL(2),
  // redefine_temporary(temp_no left)
  func_redefine_temporary, 2, var_612_0_temp_no, var_621_23_left, 1, LOCAL(3),
  // list
  var_list, 2, var_621_23_left, LOCAL(3), 1, LOCAL(4),
  // create_statement
  func_create_statement, 2, LOCAL(2), LOCAL(4), 1, LOCAL(5),
  // push_leading_statement
  var_push_leading_statement, 2, var_621_38_statements, LOCAL(5), 1, LOCAL(6),
  // ->
  LET, 3, LOCAL(1), var_612_0_temp_no, LOCAL(6), TAIL_CALL,
  POS(653, 17),
  POS(655, 19),
  POS(660, 23),
  POS(663, 25),
  POS(661, 23),
  POS(659, 21),
  POS(657, 19),
  POS(654, 17)
};

static TAB_NUM t_lambda_58[] = {
  0, // locals
  0, // parameters
  // 
  LET, 3, var_621_23_left, var_612_0_temp_no, var_621_38_statements, TAIL_CALL,
  POS(664, 17)
};

static TAB_NUM t_func_push_statement[] = {
  3, // locals
  0, // parameters
  // inc &temp_no
  var_inc, 1, var_612_0_temp_no, 1, var_612_0_temp_no,
  // redefine_temporary(temp_no left))
  func_redefine_temporary, 2, var_612_0_temp_no, var_621_23_left, 1, LOCAL(1),
  // list(left right redefine_temporary(temp_no left))
  var_list, 3, var_621_23_left, var_622_1_right, LOCAL(1), 1, LOCAL(2),
  // create_statement
  func_create_statement, 2, var_618_1_head, LOCAL(2), 1, LOCAL(3),
  // push_leading_statement &statements
  var_push_leading_statement, 2, var_621_38_statements, LOCAL(3), 1, var_621_38_statements,
  // temporary(temp_no left) temp_no statements
  func_temporary, 2, var_612_0_temp_no, var_621_23_left, 1, LOCAL(1),
  // -> temporary(temp_no left) temp_no statements
  LET, 3, LOCAL(1), var_612_0_temp_no, var_621_38_statements, TAIL_CALL,
  POS(670, 5),
  POS(674, 25),
  POS(674, 9),
  POS(672, 7),
  POS(671, 5),
  POS(675, 8),
  POS(675, 5)
};

static TAB_NUM t_func_funky_types__inline_body___simplify[] = {
  7, // locals
  2, // parameters
  LOCAL(6), // 677_37_self
  LOCAL(7), // 677_42_temp_no
  // parameters_of(self)
  var_parameters_of, 1, LOCAL(6), 1, LOCAL(1),
  // statement_of(self)
  var_statement_of, 1, LOCAL(6), 1, LOCAL(2),
  // source_group_of(self)
  var_source_group_of, 1, LOCAL(6), 1, LOCAL(3),
  // source_position_of(self)
  var_source_position_of, 1, LOCAL(6), 1, LOCAL(4),
  // funky_types::body
  LET, -5, var_funky_types__body, var_parameters_of, LOCAL(1), var_statement_of, LOCAL(2), var_statements_of, var_empty_list, var_source_group_of, LOCAL(3), var_source_position_of, LOCAL(4), LOCAL(5),
  // simplify
  var_simplify, 2, LOCAL(5), LOCAL(7), TAIL_CALL,
  POS(680, 22),
  POS(681, 21),
  POS(683, 24),
  POS(684, 27),
  POS(679, 5),
  POS(678, 3)
};

static TAB_NUM t_func_funky_types__body___simplify[] = {
  3, // locals
  2, // parameters
  var_687_30_self,
  var_687_35_temp_no,
  // !on_top_level false
  LET, 1, var_false, 1, var_on_top_level,
  // mangle_position(self))"
  var_mangle_position, 1, var_687_30_self, 1, LOCAL(1),
  // !self.funky::key_of "func_@(mangle_position(self))"
  var_std__string, 2, str_func, LOCAL(1), 1, LOCAL(3),
  // self.funky::key_of "func_@(mangle_position(self))"
  LET, -1, var_687_30_self, var_funky__key_of, LOCAL(3), var_687_30_self,
  // check_statements &self
  func_check_statements, 1, var_687_30_self, 1, var_687_30_self,
  // collect_parameter_definitions !resolve_variable self
  func_collect_parameter_definitions, 1, var_687_30_self, 1, var_resolve_variable,
  // parameters_of 0 $_parameters_temp_no $_parameters_statements
  var_parameters_of, 1, var_687_30_self, 1, LOCAL(1),
  // simplify &self.parameters_of 0 $_parameters_temp_no $_parameters_statements
  var_simplify, 2, LOCAL(1), num_0, 3, LOCAL(1), LOCAL(2), LOCAL(2),
  // self.parameters_of 0 $_parameters_temp_no $_parameters_statements
  LET, -1, var_687_30_self, var_parameters_of, LOCAL(1), var_687_30_self,
  // $statement statement_of(self)
  var_statement_of, 1, var_687_30_self, 1, var_693_1_statement,
  // $statements statements_of(self)
  var_statements_of, 1, var_687_30_self, 1, var_694_1_statements,
  // is_defined && node_type_of(statement) != REMARK:
  var_is_defined, 1, var_693_1_statement, 1, LOCAL(1),
  // is_defined && node_type_of(statement) != REMARK:
  var_std__and, 2, LOCAL(1), lambda_59, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_60, func_simplify_statements, TAIL_CALL,
  POS(688, 3),
  POS(689, 31),
  POS(689, 3),
  POS(689, 4),
  POS(690, 3),
  POS(691, 3),
  POS(692, 18),
  POS(692, 3),
  POS(692, 13),
  POS(693, 3),
  POS(694, 3),
  POS(696, 15),
  POS(696, 15),
  POS(695, 3)
};

static TAB_NUM t_lambda_59[] = {
  3, // locals
  0, // parameters
  // node_type_of(statement) != REMARK:
  var_node_type_of, 1, var_693_1_statement, 1, LOCAL(1),
  // node_type_of(statement) != REMARK:
  var_std__equal, 2, LOCAL(1), var_REMARK, 1, LOCAL(2),
  // node_type_of(statement) != REMARK:
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // node_type_of(statement) != REMARK:
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(696, 29),
  POS(696, 29),
  POS(696, 29),
  POS(696, 29)
};

static TAB_NUM t_lambda_60[] = {
  1, // locals
  0, // parameters
  // all_of(statements is_a_remark):
  var_all_of, 2, var_694_1_statements, var_is_a_remark, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_61, lambda_62, TAIL_CALL,
  POS(698, 9),
  POS(697, 7)
};

static TAB_NUM t_lambda_61[] = {
  0, // locals
  0, // parameters
  // self.statement_of undefined
  LET, -1, var_687_30_self, var_statement_of, var_undefined, var_687_30_self,
  // !statements list(statement)
  var_list, 1, var_693_1_statement, 1, var_694_1_statements,
  // simplify_statements
  func_simplify_statements, 0, TAIL_CALL,
  POS(699, 12),
  POS(700, 11),
  POS(701, 11)
};

static TAB_NUM t_lambda_62[] = {
  1, // locals
  0, // parameters
  // statements(1)
  var_694_1_statements, 1, num_1, 1, LOCAL(1),
  // syntax_error "unexpected statements" statements(1)
  var_syntax_error, 2, str_unexpected_state, LOCAL(1), TAIL_CALL,
  POS(703, 48),
  POS(703, 11)
};

static TAB_NUM t_func_simplify_statements[] = {
  3, // locals
  0, // parameters
  // collect_local_definitions !resolve_variable statements
  func_collect_local_definitions, 1, var_694_1_statements, 1, var_resolve_variable,
  // map_reduce !self.statements_of statements
  var_map_reduce, 4, var_694_1_statements, lambda_63, var_append, var_empty_list, 1, LOCAL(1),
  // self.statements_of statements
  LET, -1, var_687_30_self, var_statements_of, LOCAL(1), var_687_30_self,
  // statements_of(self) is_an_io_call)
  var_statements_of, 1, var_687_30_self, 1, LOCAL(1),
  // !self.is_an_io_call any_of(statements_of(self) is_an_io_call)
  var_any_of, 2, LOCAL(1), var_is_an_io_call, 1, LOCAL(3),
  // self.is_an_io_call any_of(statements_of(self) is_an_io_call)
  LET, -1, var_687_30_self, var_is_an_io_call, LOCAL(3), var_687_30_self,
  // -> self temp_no empty_statements
  LET, 3, var_687_30_self, var_687_35_temp_no, var_empty_statements, TAIL_CALL,
  POS(707, 5),
  POS(708, 5),
  POS(708, 17),
  POS(715, 32),
  POS(715, 5),
  POS(715, 6),
  POS(716, 5)
};

static TAB_NUM t_lambda_63[] = {
  5, // locals
  1, // parameters
  LOCAL(2), // 709_3_a_statement
  // simplify &a_statement 0 $_dummy_temp_no $more_statements
  var_simplify, 2, LOCAL(2), num_0, 3, LOCAL(2), LOCAL(1), LOCAL(3),
  // more_statements $leading_statements $trailing_statements
  LOCAL(3), 0, 2, LOCAL(4), LOCAL(5),
  // list(a_statement) trailing_statements
  var_list, 1, LOCAL(2), 1, LOCAL(1),
  // append leading_statements list(a_statement) trailing_statements
  var_append, 3, LOCAL(4), LOCAL(1), LOCAL(5), TAIL_CALL,
  POS(710, 9),
  POS(711, 9),
  POS(712, 35),
  POS(712, 9)
};

static TAB_NUM t_func_check_statements[] = {
  0, // locals
  1, // parameters
  var_718_20_body,
  // $statements statements_of(body)
  var_statements_of, 1, var_718_20_body, 1, var_719_1_statements,
  // $parameter_state 0
  LET, 1, num_0, 1, var_720_1_parameter_state,
  // $parameters undefined
  LET, 1, var_undefined, 1, var_721_1_parameters,
  // $new_statements empty_list
  LET, 1, var_empty_list, 1, var_722_1_new_statements,
  // for_each statements
  var_for_each, 3, var_719_1_statements, lambda_64, lambda_73, TAIL_CALL,
  POS(719, 3),
  POS(720, 3),
  POS(721, 3),
  POS(722, 3),
  POS(723, 3)
};

static TAB_NUM t_lambda_64[] = {
  1, // locals
  2, // parameters
  var_724_3_idx,
  var_724_7_statement,
  // node_type_of(statement)
  var_node_type_of, 1, var_724_7_statement, 1, LOCAL(1),
  // case node_type_of(statement)
  var_case, 8, LOCAL(1), var_MULTILINE_REMARK, lambda_MULTILINE_REMARK, var_OPEN_PARAMETERS, lambda_OPEN_PARAMETERS, var_CLOSE_PARAMETERS, lambda_CLOSE_PARAMETERS, lambda_70, TAIL_CALL,
  POS(725, 12),
  POS(725, 7)
};

static TAB_NUM t_lambda_MULTILINE_REMARK[] = {
  1, // locals
  0, // parameters
  // parameter_state == 1:
  var_std__equal, 2, var_720_1_parameter_state, num_1, 1, LOCAL(1),
  // on parameter_state == 1:
  var_on, 2, LOCAL(1), lambda_65, 0,
  // next
  var_next, 0, TAIL_CALL,
  POS(727, 14),
  POS(727, 11),
  POS(729, 11)
};

static TAB_NUM t_lambda_65[] = {
  0, // locals
  0, // parameters
  // syntax_error "Closing parenthesis expected" statement
  var_syntax_error, 2, str_Closing_parenthe, var_724_7_statement, TAIL_CALL,
  POS(728, 13)
};

static TAB_NUM t_lambda_OPEN_PARAMETERS[] = {
  1, // locals
  0, // parameters
  // parameter_state == 0:
  var_std__equal, 2, var_720_1_parameter_state, num_0, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_66, lambda_67, TAIL_CALL,
  POS(732, 13),
  POS(731, 11)
};

static TAB_NUM t_lambda_66[] = {
  0, // locals
  0, // parameters
  // !parameter_state 1
  LET, 1, num_1, 1, var_720_1_parameter_state,
  // !parameters parameter_of(statement)
  var_parameter_of, 1, var_724_7_statement, 1, var_721_1_parameters,
  // next
  var_next, 0, TAIL_CALL,
  POS(733, 15),
  POS(734, 15),
  POS(735, 15)
};

static TAB_NUM t_lambda_67[] = {
  0, // locals
  0, // parameters
  // syntax_error "Unexpected opening parenthesis" statement
  var_syntax_error, 2, str_Unexpected_openi, var_724_7_statement, TAIL_CALL,
  POS(737, 15)
};

static TAB_NUM t_lambda_CLOSE_PARAMETERS[] = {
  1, // locals
  0, // parameters
  // parameter_state == 1:
  var_std__equal, 2, var_720_1_parameter_state, num_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_68, lambda_69, TAIL_CALL,
  POS(740, 13),
  POS(739, 11)
};

static TAB_NUM t_lambda_68[] = {
  0, // locals
  0, // parameters
  // !parameter_state 2
  LET, 1, num_2, 1, var_720_1_parameter_state,
  // next
  var_next, 0, TAIL_CALL,
  POS(741, 15),
  POS(742, 15)
};

static TAB_NUM t_lambda_69[] = {
  0, // locals
  0, // parameters
  // syntax_error "Unexpected closing parenthesis" statement
  var_syntax_error, 2, str_Unexpected_closi, var_724_7_statement, TAIL_CALL,
  POS(744, 15)
};

static TAB_NUM t_lambda_70[] = {
  1, // locals
  0, // parameters
  // parameter_state == 1:
  var_std__equal, 2, var_720_1_parameter_state, num_1, 1, LOCAL(1),
  // on parameter_state == 1:
  var_on, 2, LOCAL(1), lambda_71, 0,
  // !parameter_state 2
  LET, 1, num_2, 1, var_720_1_parameter_state,
  // is_not_empty
  var_is_not_empty, 1, var_722_1_new_statements, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), var_next, lambda_72, TAIL_CALL,
  POS(746, 14),
  POS(746, 11),
  POS(748, 11),
  POS(750, 28),
  POS(749, 11)
};

static TAB_NUM t_lambda_71[] = {
  0, // locals
  0, // parameters
  // syntax_error "Closing parenthesis expected" statement
  var_syntax_error, 2, str_Closing_parenthe, var_724_7_statement, TAIL_CALL,
  POS(747, 13)
};

static TAB_NUM t_lambda_72[] = {
  0, // locals
  0, // parameters
  // !new_statements range(statements idx -1)
  var_range, 3, var_719_1_statements, var_724_3_idx, minus_num_1, 1, var_722_1_new_statements,
  // next
  var_next, 0, TAIL_CALL,
  POS(753, 15),
  POS(754, 15)
};

static TAB_NUM t_lambda_73[] = {
  1, // locals
  0, // parameters
  // is_defined
  var_is_defined, 1, var_721_1_parameters, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_74, lambda_75, TAIL_CALL,
  POS(757, 20),
  POS(756, 7)
};

static TAB_NUM t_lambda_74[] = {
  1, // locals
  0, // parameters
  // body
  LET, -2, var_718_20_body, var_parameters_of, var_721_1_parameters, var_statements_of, var_722_1_new_statements, LOCAL(1),
  // 
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(759, 11),
  POS(758, 11)
};

static TAB_NUM t_lambda_75[] = {
  0, // locals
  0, // parameters
  //  body
  LET, 1, var_718_20_body, TAIL_CALL,
  POS(762, 11)
};

static TAB_NUM t_func_funky_types__statement___simplify[] = {
  1, // locals
  2, // parameters
  var_764_35_self,
  var_764_40_temp_no,
  // $head head_of(self)
  var_head_of, 1, var_764_35_self, 1, var_765_1_head,
  // $original_head head
  LET, 1, var_765_1_head, 1, var_766_1_original_head,
  // $arguments arguments_of(self)
  var_arguments_of, 1, var_764_35_self, 1, var_767_1_arguments,
  // node_type_of(head)
  var_node_type_of, 1, var_765_1_head, 1, LOCAL(1),
  // case node_type_of(head)
  var_case, 6, LOCAL(1), var_FUNCTOR, lambda_FUNCTOR, var_RETURN, lambda_RETURN, lambda_76, TAIL_CALL,
  POS(765, 3),
  POS(766, 3),
  POS(767, 3),
  POS(768, 8),
  POS(768, 3)
};

static TAB_NUM t_lambda_FUNCTOR[] = {
  0, // locals
  0, // parameters
  // simplify_head_and_arguments false
  func_simplify_head_and_arguments, 1, var_false, TAIL_CALL,
  POS(770, 7)
};

static TAB_NUM t_lambda_RETURN[] = {
  0, // locals
  0, // parameters
  // check_that_all_arguments_are_inputs
  func_check_that_all_arguments_are_inputs, 0, 0,
  // simplify_head_and_arguments false
  func_simplify_head_and_arguments, 1, var_false, TAIL_CALL,
  POS(772, 7),
  POS(773, 7)
};

static TAB_NUM t_lambda_76[] = {
  0, // locals
  0, // parameters
  // check_that_all_arguments_are_inputs
  func_check_that_all_arguments_are_inputs, 0, 0,
  // push &arguments head
  var_push, 2, var_767_1_arguments, var_765_1_head, 1, var_767_1_arguments,
  // !head std("assign" self)
  func_std, 2, str_assign, var_764_35_self, 1, var_765_1_head,
  // simplify_head_and_arguments true
  func_simplify_head_and_arguments, 1, var_true, TAIL_CALL,
  POS(775, 7),
  POS(776, 7),
  POS(777, 7),
  POS(778, 7)
};

static TAB_NUM t_func_simplify_head_and_arguments[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 780_31_is_an_assignment
  // simplify head !self.head_of &temp_no $result_statements
  var_simplify, 2, var_765_1_head, var_764_40_temp_no, 3, LOCAL(1), var_764_40_temp_no, var_781_38_result_statements,
  // self.head_of &temp_no $result_statements
  LET, -1, var_764_35_self, var_head_of, LOCAL(1), var_764_35_self,
  // $new_arguments empty_list
  LET, 1, var_empty_list, 1, var_782_1_new_arguments,
  // for_each arguments !arguments !temp_no !result_statements
  var_for_each, 3, var_767_1_arguments, lambda_77, lambda_81, 3, var_767_1_arguments, var_764_40_temp_no, var_781_38_result_statements,
  // on is_an_assignment:
  var_on, 2, LOCAL(2), lambda_82, 0,
  // self.arguments_of arguments
  LET, -1, var_764_35_self, var_arguments_of, var_767_1_arguments, var_764_35_self,
  // if
  var_if, 3, LOCAL(2), lambda_is_an_assignment, lambda_98, TAIL_CALL,
  POS(781, 5),
  POS(781, 20),
  POS(782, 5),
  POS(783, 5),
  POS(799, 5),
  POS(805, 6),
  POS(806, 5)
};

static TAB_NUM t_lambda_77[] = {
  1, // locals
  1, // parameters
  var_784_3_item,
  // is_a_remark
  var_is_a_remark, 1, var_784_3_item, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), var_next, lambda_78, TAIL_CALL,
  POS(786, 16),
  POS(785, 9)
};

static TAB_NUM t_lambda_78[] = {
  3, // locals
  0, // parameters
  // simplify &item &temp_no $arguments_result_statements
  var_simplify, 2, var_784_3_item, var_764_40_temp_no, 3, var_784_3_item, var_764_40_temp_no, LOCAL(3),
  // append &result_statements arguments_result_statements
  var_append, 2, var_781_38_result_statements, LOCAL(3), 1, var_781_38_result_statements,
  // node_type_of(item) == BACKQUOTED:
  var_node_type_of, 1, var_784_3_item, 1, LOCAL(1),
  // node_type_of(item) == BACKQUOTED:
  var_std__equal, 2, LOCAL(1), var_BACKQUOTED, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_79, lambda_80, TAIL_CALL,
  POS(789, 13),
  POS(790, 13),
  POS(792, 15),
  POS(792, 15),
  POS(791, 13)
};

static TAB_NUM t_lambda_79[] = {
  0, // locals
  0, // parameters
  // resolve_backquoted &new_arguments item
  func_resolve_backquoted, 2, var_782_1_new_arguments, var_784_3_item, 1, var_782_1_new_arguments,
  // next
  var_next, 0, TAIL_CALL,
  POS(793, 17),
  POS(794, 17)
};

static TAB_NUM t_lambda_80[] = {
  0, // locals
  0, // parameters
  // push &new_arguments item
  var_push, 2, var_782_1_new_arguments, var_784_3_item, 1, var_782_1_new_arguments,
  // next
  var_next, 0, TAIL_CALL,
  POS(796, 17),
  POS(797, 17)
};

static TAB_NUM t_lambda_81[] = {
  0, // locals
  0, // parameters
  //  new_arguments temp_no result_statements
  LET, 3, var_782_1_new_arguments, var_764_40_temp_no, var_781_38_result_statements, TAIL_CALL,
  POS(798, 9)
};

static TAB_NUM t_lambda_82[] = {
  2, // locals
  0, // parameters
  // $n length_of(arguments)
  var_length_of, 1, var_767_1_arguments, 1, LOCAL(2),
  // n < 2:
  var_std__less, 2, LOCAL(2), num_2, 1, LOCAL(1),
  // on n < 2:
  var_on, 2, LOCAL(1), lambda_83, 0,
  // 2:
  var_std__less, 2, num_2, LOCAL(2), 1, LOCAL(1),
  // on n > 2:
  var_on, 2, LOCAL(1), lambda_84, TAIL_CALL,
  POS(800, 7),
  POS(801, 10),
  POS(801, 7),
  POS(803, 14),
  POS(803, 7)
};

static TAB_NUM t_lambda_83[] = {
  0, // locals
  0, // parameters
  // syntax_error "Missing argument in assignment" self
  var_syntax_error, 2, str_Missing_argument, var_764_35_self, TAIL_CALL,
  POS(802, 9)
};

static TAB_NUM t_lambda_84[] = {
  1, // locals
  0, // parameters
  // arguments(2)
  var_767_1_arguments, 1, num_2, 1, LOCAL(1),
  // syntax_error "Too many arguments in assignment" arguments(2)
  var_syntax_error, 2, str_Too_many_argumen, LOCAL(1), TAIL_CALL,
  POS(804, 57),
  POS(804, 9)
};

static TAB_NUM t_lambda_is_an_assignment[] = {
  2, // locals
  0, // parameters
  // result_statements $leading_statements $trailing_statements
  var_781_38_result_statements, 0, 2, var_808_19_leading_statements, var_808_39_trailing_statements,
  // arguments(1))
  var_767_1_arguments, 1, num_1, 1, LOCAL(1),
  // $node_type_of_first_argument node_type_of(arguments(1))
  var_node_type_of, 1, LOCAL(1), 1, var_809_1_node_type_of_first_argument,
  // node_type_of(original_head) == DEFINITION
  var_node_type_of, 1, var_766_1_original_head, 1, LOCAL(1),
  // node_type_of(original_head) == DEFINITION
  var_std__equal, 2, LOCAL(1), var_DEFINITION, 1, LOCAL(2),
  // $is_a_slot_definition
  var_std__and, 2, LOCAL(2), lambda_85, 1, var_810_1_is_a_slot_definition,
  // self.is_a_definition is_a_slot_definition
  LET, -1, var_764_35_self, var_is_a_definition, var_810_1_is_a_slot_definition, var_764_35_self,
  // is_empty
  var_is_empty, 1, var_808_19_leading_statements, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), func_check_trailing_statements, lambda_88, TAIL_CALL,
  POS(808, 9),
  POS(809, 51),
  POS(809, 9),
  POS(812, 13),
  POS(812, 13),
  POS(810, 9),
  POS(817, 10),
  POS(819, 30),
  POS(818, 9)
};

static TAB_NUM t_lambda_85[] = {
  2, // locals
  0, // parameters
  // node_type_of_first_argument == ATTRIBUTE_VALUE_PAIR
  var_std__equal, 2, var_809_1_node_type_of_first_argument, var_ATTRIBUTE_VALUE_PAIR, 1, LOCAL(1),
  // 
  var_std__or, 2, LOCAL(1), lambda_86, 1, LOCAL(2),
  // 
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(814, 15),
  POS(813, 15),
  POS(813, 15)
};

static TAB_NUM t_lambda_86[] = {
  2, // locals
  0, // parameters
  // node_type_of_first_argument == METHOD_VALUE_PAIR
  var_std__equal, 2, var_809_1_node_type_of_first_argument, var_METHOD_VALUE_PAIR, 1, LOCAL(1),
  // 
  var_std__or, 2, LOCAL(1), lambda_87, 1, LOCAL(2),
  // node_type_of_first_argument == METHOD_VALUE_PAIR
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(815, 15),
  POS(813, 15),
  POS(815, 15)
};

static TAB_NUM t_lambda_87[] = {
  1, // locals
  0, // parameters
  // node_type_of_first_argument == TYPE_FUNCTION
  var_std__equal, 2, var_809_1_node_type_of_first_argument, var_TYPE_FUNCTION, 1, LOCAL(1),
  // node_type_of_first_argument == TYPE_FUNCTION
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(816, 15),
  POS(816, 15)
};

static TAB_NUM t_lambda_88[] = {
  0, // locals
  0, // parameters
  // $last_statement leading_statements(-1)
  var_808_19_leading_statements, 1, minus_num_1, 1, var_822_1_last_statement,
  // if
  var_if, 3, var_810_1_is_a_slot_definition, lambda_is_a_slot_definition, lambda_89, TAIL_CALL,
  POS(822, 13),
  POS(823, 13)
};

static TAB_NUM t_lambda_is_a_slot_definition[] = {
  5, // locals
  0, // parameters
  // arguments(1))))
  var_767_1_arguments, 1, num_1, 1, LOCAL(1),
  // argument_of(arguments(1))))
  var_argument_of, 1, LOCAL(1), 1, LOCAL(2),
  // source_group_of(argument_of(arguments(1))))
  var_source_group_of, 1, LOCAL(2), 1, LOCAL(3),
  // $line_no line_no_of(source_group_of(argument_of(arguments(1))))
  var_line_no_of, 1, LOCAL(3), 1, LOCAL(4),
  // $const_name "const_@(line_no)"
  var_std__string, 2, str_const, LOCAL(4), 1, LOCAL(5),
  // !last_statement.arguments_of(-1)
  LET, -2, var_funky_types__definition, var_identifier_of, LOCAL(5), var_kind_of, var_CONSTANT_COMPOUND, LOCAL(2),
  // arguments_of(-1)
  var_arguments_of, 1, var_822_1_last_statement, 1, LOCAL(3),
  // arguments_of(-1)
  LOCAL(3), 2, minus_num_1, LOCAL(2), 1, LOCAL(3),
  // last_statement.arguments_of(-1)
  LET, -1, var_822_1_last_statement, var_arguments_of, LOCAL(3), var_822_1_last_statement,
  // leading_statements(-1) last_statement
  var_808_19_leading_statements, 2, minus_num_1, var_822_1_last_statement, 1, var_808_19_leading_statements,
  // arguments(1).argument_of.identifier_of const_name
  var_767_1_arguments, 1, num_1, 1, LOCAL(2),
  // argument_of.identifier_of const_name
  var_argument_of, 1, LOCAL(2), 1, LOCAL(3),
  // argument_of.identifier_of const_name
  LET, -1, LOCAL(3), var_identifier_of, LOCAL(5), LOCAL(3),
  // arguments(1).argument_of.identifier_of const_name
  LET, -1, LOCAL(2), var_argument_of, LOCAL(3), LOCAL(2),
  // arguments(1).argument_of.identifier_of const_name
  var_767_1_arguments, 2, num_1, LOCAL(2), 1, var_767_1_arguments,
  // arguments(1).argument_of.kind_of LOCAL
  var_767_1_arguments, 1, num_1, 1, LOCAL(2),
  // argument_of.kind_of LOCAL
  var_argument_of, 1, LOCAL(2), 1, LOCAL(3),
  // argument_of.kind_of LOCAL
  LET, -1, LOCAL(3), var_kind_of, var_LOCAL, LOCAL(3),
  // arguments(1).argument_of.kind_of LOCAL
  LET, -1, LOCAL(2), var_argument_of, LOCAL(3), LOCAL(2),
  // arguments(1).argument_of.kind_of LOCAL
  var_767_1_arguments, 2, num_1, LOCAL(2), 1, var_767_1_arguments,
  // self.arguments_of arguments
  LET, -1, var_764_35_self, var_arguments_of, var_767_1_arguments, var_764_35_self,
  // check_trailing_statements
  func_check_trailing_statements, 0, TAIL_CALL,
  POS(825, 65),
  POS(825, 53),
  POS(825, 37),
  POS(825, 17),
  POS(826, 17),
  POS(827, 17),
  POS(827, 33),
  POS(827, 33),
  POS(827, 18),
  POS(831, 18),
  POS(832, 18),
  POS(832, 31),
  POS(832, 31),
  POS(832, 18),
  POS(832, 18),
  POS(833, 18),
  POS(833, 31),
  POS(833, 31),
  POS(833, 18),
  POS(833, 18),
  POS(834, 18),
  POS(835, 17)
};

static TAB_NUM t_lambda_89[] = {
  5, // locals
  0, // parameters
  // source_group_of(self)
  var_source_group_of, 1, var_764_35_self, 1, LOCAL(1),
  // source_position_of(self)
  var_source_position_of, 1, var_764_35_self, 1, LOCAL(2),
  // arguments(2))
  var_767_1_arguments, 1, num_2, 1, LOCAL(3),
  // arguments_of(last_statement)(-1 arguments(2))
  var_arguments_of, 1, var_822_1_last_statement, 1, LOCAL(4),
  // arguments_of(last_statement)(-1 arguments(2))
  LOCAL(4), 2, minus_num_1, LOCAL(3), 1, LOCAL(5),
  // !self
  LET, -3, var_822_1_last_statement, var_source_group_of, LOCAL(1), var_source_position_of, LOCAL(2), var_arguments_of, LOCAL(5), var_764_35_self,
  // range &leading_statements 1 -2
  var_range, 3, var_808_19_leading_statements, num_1, minus_num_2, 1, var_808_19_leading_statements,
  // check_trailing_statements
  func_check_trailing_statements, 0, TAIL_CALL,
  POS(839, 38),
  POS(840, 41),
  POS(841, 67),
  POS(841, 35),
  POS(841, 35),
  POS(837, 17),
  POS(842, 17),
  POS(843, 17)
};

static TAB_NUM t_func_check_trailing_statements[] = {
  2, // locals
  0, // parameters
  // is_empty
  var_is_empty, 1, var_808_39_trailing_statements, 1, LOCAL(1),
  // 
  var_std__or, 2, LOCAL(1), lambda_90, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_91, func_process_trailing_statements, TAIL_CALL,
  POS(848, 35),
  POS(847, 15),
  POS(846, 11)
};

static TAB_NUM t_lambda_90[] = {
  4, // locals
  0, // parameters
  // head_of(self)) != "std::assign"
  var_head_of, 1, var_764_35_self, 1, LOCAL(1),
  // identifier_of(head_of(self)) != "std::assign"
  var_identifier_of, 1, LOCAL(1), 1, LOCAL(2),
  // identifier_of(head_of(self)) != "std::assign"
  var_std__equal, 2, LOCAL(2), str_stdassign, 1, LOCAL(3),
  // identifier_of(head_of(self)) != "std::assign"
  var_std__not, 1, LOCAL(3), 1, LOCAL(4),
  // identifier_of(head_of(self)) != "std::assign"
  LET, 1, LOCAL(4), TAIL_CALL,
  POS(849, 29),
  POS(849, 15),
  POS(849, 15),
  POS(849, 15),
  POS(849, 15)
};

static TAB_NUM t_lambda_91[] = {
  1, // locals
  0, // parameters
  // new
  var_new, 3, var_funky_types__statement_list, var_808_19_leading_statements, var_808_39_trailing_statements, 1, LOCAL(1),
  // 
  LET, 3, var_764_35_self, var_764_40_temp_no, LOCAL(1), TAIL_CALL,
  POS(853, 15),
  POS(850, 15)
};

static TAB_NUM t_func_process_trailing_statements[] = {
  1, // locals
  0, // parameters
  // arguments(2))
  var_767_1_arguments, 1, num_2, 1, LOCAL(1),
  // $temp_name identifier_of(arguments(2))
  var_identifier_of, 1, LOCAL(1), 1, var_866_1_temp_name,
  // $value arguments(1)
  var_767_1_arguments, 1, num_1, 1, var_867_1_value,
  // for_each trailing_statements
  var_for_each, 3, var_808_39_trailing_statements, lambda_92, lambda_96, TAIL_CALL,
  POS(866, 36),
  POS(866, 11),
  POS(867, 11),
  POS(868, 11)
};

static TAB_NUM t_lambda_92[] = {
  1, // locals
  2, // parameters
  var_869_3_stmt_idx,
  var_869_12_trailing_statement,
  // arguments_of(trailing_statement)
  var_arguments_of, 1, var_869_12_trailing_statement, 1, LOCAL(1),
  // for_each arguments_of(trailing_statement)
  var_for_each, 3, LOCAL(1), lambda_93, var_next, TAIL_CALL,
  POS(870, 24),
  POS(870, 15)
};

static TAB_NUM t_lambda_93[] = {
  1, // locals
  2, // parameters
  var_871_3_arg_idx,
  var_871_11_argument,
  // node_type_of(argument)
  var_node_type_of, 1, var_871_11_argument, 1, LOCAL(1),
  // case node_type_of(argument)
  var_case, 6, LOCAL(1), var_FUNCTOR, lambda_2_FUNCTOR, var_INLINE_ATTRIBUTE_VALUE_PAIR, lambda_INLINE_ATTRIBUTE_VALUE_PAIR, var_next, TAIL_CALL,
  POS(872, 24),
  POS(872, 19)
};

static TAB_NUM t_lambda_2_FUNCTOR[] = {
  2, // locals
  0, // parameters
  // identifier_of(argument) == temp_name:
  var_identifier_of, 1, var_871_11_argument, 1, LOCAL(1),
  // identifier_of(argument) == temp_name:
  var_std__equal, 2, LOCAL(1), var_866_1_temp_name, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_94, var_next, TAIL_CALL,
  POS(875, 25),
  POS(875, 25),
  POS(874, 23)
};

static TAB_NUM t_lambda_94[] = {
  2, // locals
  0, // parameters
  // arguments_of(arg_idx) value
  var_arguments_of, 1, var_869_12_trailing_statement, 1, LOCAL(2),
  // arguments_of(arg_idx) value
  LOCAL(2), 2, var_871_3_arg_idx, var_867_1_value, 1, LOCAL(2),
  // trailing_statement.arguments_of(arg_idx) value
  LET, -1, var_869_12_trailing_statement, var_arguments_of, LOCAL(2), var_869_12_trailing_statement,
  // trailing_statements(stmt_idx) trailing_statement
  var_808_39_trailing_statements, 2, var_869_3_stmt_idx, var_869_12_trailing_statement, 1, var_808_39_trailing_statements,
  // return
  lambda_97, 0, TAIL_CALL,
  POS(876, 47),
  POS(876, 47),
  POS(876, 28),
  POS(877, 28),
  POS(878, 27)
};

static TAB_NUM t_lambda_INLINE_ATTRIBUTE_VALUE_PAIR[] = {
  3, // locals
  0, // parameters
  // expression_of(argument)) == temp_name:
  var_expression_of, 1, var_871_11_argument, 1, LOCAL(1),
  // identifier_of(expression_of(argument)) == temp_name:
  var_identifier_of, 1, LOCAL(1), 1, LOCAL(2),
  // identifier_of(expression_of(argument)) == temp_name:
  var_std__equal, 2, LOCAL(2), var_866_1_temp_name, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_95, var_next, TAIL_CALL,
  POS(882, 39),
  POS(882, 25),
  POS(882, 25),
  POS(881, 23)
};

static TAB_NUM t_lambda_95[] = {
  3, // locals
  0, // parameters
  // !trailing_statement.arguments_of(arg_idx)
  LET, -1, var_871_11_argument, var_expression_of, var_867_1_value, LOCAL(2),
  // arguments_of(arg_idx)
  var_arguments_of, 1, var_869_12_trailing_statement, 1, LOCAL(3),
  // arguments_of(arg_idx)
  LOCAL(3), 2, var_871_3_arg_idx, LOCAL(2), 1, LOCAL(3),
  // trailing_statement.arguments_of(arg_idx)
  LET, -1, var_869_12_trailing_statement, var_arguments_of, LOCAL(3), var_869_12_trailing_statement,
  // trailing_statements(stmt_idx) trailing_statement
  var_808_39_trailing_statements, 2, var_869_3_stmt_idx, var_869_12_trailing_statement, 1, var_808_39_trailing_statements,
  // return
  lambda_97, 0, TAIL_CALL,
  POS(883, 27),
  POS(883, 47),
  POS(883, 47),
  POS(883, 28),
  POS(885, 28),
  POS(886, 27)
};

static TAB_NUM t_lambda_96[] = {
  0, // locals
  0, // parameters
  // debug::print "
  var_debug__print, 1, str_TEMP_NOT_FOUND_I, 0,
  // debug::exit
  var_debug__exit, 0, TAIL_CALL,
  POS(891, 15),
  POS(893, 15)
};

static TAB_NUM t_lambda_97[] = {
  3, // locals
  0, // parameters
  // trailing_statements(1)
  var_808_39_trailing_statements, 1, num_1, 1, LOCAL(1),
  // range(trailing_statements 2 -1)
  var_range, 3, var_808_39_trailing_statements, num_2, minus_num_1, 1, LOCAL(2),
  // new
  var_new, 3, var_funky_types__statement_list, var_808_19_leading_statements, LOCAL(2), 1, LOCAL(3),
  // 
  LET, 3, LOCAL(1), var_764_40_temp_no, LOCAL(3), TAIL_CALL,
  POS(897, 13),
  POS(902, 15),
  POS(899, 13),
  POS(896, 13)
};

static TAB_NUM t_lambda_98[] = {
  4, // locals
  0, // parameters
  // head_of(self).is_an_io_call
  var_head_of, 1, var_764_35_self, 1, LOCAL(1),
  // is_an_io_call
  var_is_an_io_call, 1, LOCAL(1), 1, LOCAL(2),
  // !self.is_an_io_call
  var_std__or, 2, LOCAL(2), lambda_99, 1, LOCAL(4),
  // self.is_an_io_call
  LET, -1, var_764_35_self, var_is_an_io_call, LOCAL(4), var_764_35_self,
  // -> self temp_no result_statements
  LET, 3, var_764_35_self, var_764_40_temp_no, var_781_38_result_statements, TAIL_CALL,
  POS(906, 13),
  POS(906, 27),
  POS(904, 9),
  POS(904, 10),
  POS(908, 9)
};

static TAB_NUM t_lambda_99[] = {
  2, // locals
  0, // parameters
  // arguments_of(self) is_an_io_call)
  var_arguments_of, 1, var_764_35_self, 1, LOCAL(1),
  // any_of(arguments_of(self) is_an_io_call)
  var_any_of, 2, LOCAL(1), var_is_an_io_call, 1, LOCAL(2),
  // any_of(arguments_of(self) is_an_io_call)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(907, 20),
  POS(907, 13),
  POS(907, 13)
};

static TAB_NUM t_func_check_that_all_arguments_are_inputs[] = {
  1, // locals
  0, // parameters
  // $argument find_first(arguments is_an_output)
  var_find_first, 2, var_767_1_arguments, var_is_an_output, 1, var_911_1_argument,
  // is_defined:
  var_is_defined, 1, var_911_1_argument, 1, LOCAL(1),
  // on argument.is_defined:
  var_on, 2, LOCAL(1), lambda_100, TAIL_CALL,
  POS(911, 5),
  POS(912, 17),
  POS(912, 5)
};

static TAB_NUM t_lambda_100[] = {
  0, // locals
  0, // parameters
  // syntax_error "Unexpected output argument" argument
  var_syntax_error, 2, str_Unexpected_outpu, var_911_1_argument, TAIL_CALL,
  POS(913, 7)
};

static TAB_NUM t_func_funky_types__numeric_literal___simplify[] = {
  5, // locals
  2, // parameters
  LOCAL(3), // 915_41_self
  LOCAL(4), // 915_46_temp_no
  // digits_of(self) '@apos;')
  var_digits_of, 1, LOCAL(3), 1, LOCAL(1),
  // $digits delete_all(digits_of(self) '@apos;')
  var_delete_all, 2, LOCAL(1), chr_39, 1, LOCAL(5),
  // self.digits_of digits
  LET, -1, LOCAL(3), var_digits_of, LOCAL(5), LOCAL(3),
  // to_string &digits
  var_to_string, 1, LOCAL(5), 1, LOCAL(5),
  // replace_all &digits
  var_replace_all, 3, LOCAL(5), key_value_pair_920_1, key_value_pair_921_1, 1, LOCAL(5),
  // "num_@(digits)")
  var_std__string, 2, str_num, LOCAL(5), 1, LOCAL(1),
  // .funky::key_of "num_@(digits)")
  LET, -1, LOCAL(3), var_funky__key_of, LOCAL(1), LOCAL(2),
  // ->
  LET, 3, LOCAL(2), LOCAL(4), var_empty_statements, TAIL_CALL,
  POS(916, 22),
  POS(916, 3),
  POS(917, 4),
  POS(918, 3),
  POS(919, 3),
  POS(923, 25),
  POS(923, 10),
  POS(922, 3)
};

static TAB_NUM t_func_funky_types__character_literal___simplify[] = {
  7, // locals
  2, // parameters
  LOCAL(6), // 927_43_self
  LOCAL(7), // 927_48_temp_no
  // character_of(self)(1).to_integer.to_string
  var_character_of, 1, LOCAL(6), 1, LOCAL(1),
  // character_of(self)(1).to_integer.to_string
  LOCAL(1), 1, num_1, 1, LOCAL(2),
  // to_integer.to_string
  var_to_integer, 1, LOCAL(2), 1, LOCAL(3),
  // to_string
  var_to_string, 1, LOCAL(3), 1, LOCAL(4),
  // create_numeric_character_literal
  func_create_numeric_character_literal, 2, LOCAL(4), LOCAL(6), 1, LOCAL(5),
  // ->
  LET, 3, LOCAL(5), LOCAL(7), var_empty_statements, TAIL_CALL,
  POS(930, 7),
  POS(930, 7),
  POS(930, 29),
  POS(930, 40),
  POS(929, 5),
  POS(928, 3)
};

static TAB_NUM t_func_funky_types__numeric_character_literal___simplify[] = {
  5, // locals
  2, // parameters
  LOCAL(3), // 935_51_self
  LOCAL(4), // 935_56_temp_no
  // digits_of(self).to_integer.to_string
  var_digits_of, 1, LOCAL(3), 1, LOCAL(1),
  // to_integer.to_string
  var_to_integer, 1, LOCAL(1), 1, LOCAL(2),
  // $digits digits_of(self).to_integer.to_string
  var_to_string, 1, LOCAL(2), 1, LOCAL(5),
  // "chr_@(digits)"
  var_std__string, 2, str_chr, LOCAL(5), 1, LOCAL(1),
  // self
  LET, -2, LOCAL(3), var_digits_of, LOCAL(5), var_funky__key_of, LOCAL(1), LOCAL(2),
  // ->
  LET, 3, LOCAL(2), LOCAL(4), var_empty_statements, TAIL_CALL,
  POS(936, 11),
  POS(936, 27),
  POS(936, 3),
  POS(940, 22),
  POS(938, 5),
  POS(937, 3)
};

static TAB_NUM t_func_funky_types__named_character_literal___simplify[] = {
  1, // locals
  2, // parameters
  var_944_49_self,
  var_944_54_temp_no,
  // funky::name_of(self))
  var_funky__name_of, 1, var_944_49_self, 1, LOCAL(1),
  // $chr character_from_name(funky::name_of(self))
  var_character_from_name, 1, LOCAL(1), 1, var_945_1_chr,
  // is_defined
  var_is_defined, 1, var_945_1_chr, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_101, lambda_102, TAIL_CALL,
  POS(945, 28),
  POS(945, 3),
  POS(947, 9),
  POS(946, 3)
};

static TAB_NUM t_lambda_101[] = {
  3, // locals
  0, // parameters
  // to_integer.to_string self)
  var_to_integer, 1, var_945_1_chr, 1, LOCAL(1),
  // to_string self)
  var_to_string, 1, LOCAL(1), 1, LOCAL(2),
  // create_numeric_character_literal(chr.to_integer.to_string self)
  func_create_numeric_character_literal, 2, LOCAL(2), var_944_49_self, 1, LOCAL(3),
  // 
  LET, 3, LOCAL(3), var_944_54_temp_no, var_empty_statements, TAIL_CALL,
  POS(949, 44),
  POS(949, 55),
  POS(949, 7),
  POS(948, 7)
};

static TAB_NUM t_lambda_102[] = {
  0, // locals
  0, // parameters
  // syntax_error "Invalid character name" self
  var_syntax_error, 2, str_Invalid_characte, var_944_49_self, TAIL_CALL,
  POS(953, 7)
};

static TAB_NUM t_func_funky_types__at_character_literal___simplify[] = {
  3, // locals
  2, // parameters
  LOCAL(2), // 955_46_self
  LOCAL(3), // 955_51_temp_no
  // create_numeric_character_literal("64" self)
  func_create_numeric_character_literal, 2, string_3, LOCAL(2), 1, LOCAL(1),
  // ->
  LET, 3, LOCAL(1), LOCAL(3), var_empty_statements, TAIL_CALL,
  POS(957, 5),
  POS(956, 3)
};

static TAB_NUM t_func_create_numeric_character_literal[] = {
  6, // locals
  2, // parameters
  LOCAL(5), // 961_36_digits
  LOCAL(6), // 961_43_original_node
  // "chr_@(digits)"
  var_std__string, 2, str_chr, LOCAL(5), 1, LOCAL(1),
  // source_group_of(original_node)
  var_source_group_of, 1, LOCAL(6), 1, LOCAL(2),
  // source_position_of(original_node)
  var_source_position_of, 1, LOCAL(6), 1, LOCAL(3),
  // funky_types::numeric_character_literal
  LET, -4, var_funky_types__numeric_character_literal, var_digits_of, LOCAL(5), var_funky__key_of, LOCAL(1), var_source_group_of, LOCAL(2), var_source_position_of, LOCAL(3), LOCAL(4),
  // ->
  LET, 1, LOCAL(4), TAIL_CALL,
  POS(965, 22),
  POS(966, 24),
  POS(967, 27),
  POS(963, 5),
  POS(962, 3)
};

static TAB_NUM t_func_funky_types__unique___simplify[] = {
  6, // locals
  2, // parameters
  LOCAL(4), // 969_32_self
  LOCAL(5), // 969_37_temp_no
  // source_group_of(self)) 2 -1) .truncate_from. ' '
  var_source_group_of, 1, LOCAL(4), 1, LOCAL(1),
  // line_text_of(source_group_of(self)) 2 -1) .truncate_from. ' '
  var_line_text_of, 1, LOCAL(1), 1, LOCAL(2),
  // range(line_text_of(source_group_of(self)) 2 -1) .truncate_from. ' '
  var_range, 3, LOCAL(2), num_2, minus_num_1, 1, LOCAL(3),
  // $identifier
  var_truncate_from, 2, LOCAL(3), chr_32, 1, LOCAL(6),
  // mangle_identifier(identifier))"
  var_mangle_identifier, 1, LOCAL(6), 1, LOCAL(1),
  // "uni_@(mangle_identifier(identifier))"
  var_std__string, 2, str_uni, LOCAL(1), 1, LOCAL(2),
  // self
  LET, -2, LOCAL(4), var_identifier_of, LOCAL(6), var_funky__key_of, LOCAL(2), LOCAL(3),
  // ->
  LET, 3, LOCAL(3), LOCAL(5), var_empty_statements, TAIL_CALL,
  POS(971, 24),
  POS(971, 11),
  POS(971, 5),
  POS(970, 3),
  POS(975, 29),
  POS(975, 22),
  POS(973, 5),
  POS(972, 3)
};

static TAB_NUM t_func_funky_types__string_literal___simplify[] = {
  1, // locals
  2, // parameters
  var_979_40_self,
  var_979_45_temp_no,
  // $arguments empty_list
  LET, 1, var_empty_list, 1, var_980_1_arguments,
  // $characters ""
  LET, 1, string_4, 1, var_981_1_characters,
  // $statements empty_statements
  LET, 1, var_empty_statements, 1, var_982_1_statements,
  // $components components_of(self)
  var_components_of, 1, var_979_40_self, 1, var_983_1_components,
  // is_empty
  var_is_empty, 1, var_983_1_components, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_103, lambda_104, TAIL_CALL,
  POS(980, 3),
  POS(981, 3),
  POS(982, 3),
  POS(983, 3),
  POS(985, 16),
  POS(984, 3)
};

static TAB_NUM t_lambda_103[] = {
  3, // locals
  0, // parameters
  // source_group_of(self)
  var_source_group_of, 1, var_979_40_self, 1, LOCAL(1),
  // source_position_of(self)
  var_source_position_of, 1, var_979_40_self, 1, LOCAL(2),
  // funky_types::character_sequence
  LET, -4, var_funky_types__character_sequence, var_characters_of, string_4, var_funky__key_of, str_string, var_source_group_of, LOCAL(1), var_source_position_of, LOCAL(2), LOCAL(3),
  // 
  LET, 3, LOCAL(3), var_979_45_temp_no, var_empty_statements, TAIL_CALL,
  POS(990, 26),
  POS(991, 29),
  POS(987, 7),
  POS(986, 7)
};

static TAB_NUM t_lambda_104[] = {
  0, // locals
  0, // parameters
  // for_each components
  var_for_each, 3, var_983_1_components, lambda_105, lambda_111, TAIL_CALL,
  POS(995, 7)
};

static TAB_NUM t_lambda_105[] = {
  1, // locals
  2, // parameters
  var_996_3_idx,
  var_996_7_component,
  // node_type_of(component)
  var_node_type_of, 1, var_996_7_component, 1, LOCAL(1),
  // case node_type_of(component)
  var_case, 16, LOCAL(1), var_CHARACTER_SEQUENCE, lambda_CHARACTER_SEQUENCE, var_NUMERIC_CHARACTER, lambda_NUMERIC_CHARACTER, var_NAMED_CHARACTER, lambda_NAMED_CHARACTER, var_NEWLINE, lambda_NEWLINE, var_AT_CHARACTER, lambda_AT_CHARACTER, var_ESCAPE_EXPRESSION, lambda_ESCAPE_EXPRESSION, var_TAGGED_EMPTY_CHARACTER, lambda_TAGGED_EMPTY_CHARACTER, lambda_110, TAIL_CALL,
  POS(997, 16),
  POS(997, 11)
};

static TAB_NUM t_lambda_CHARACTER_SEQUENCE[] = {
  3, // locals
  0, // parameters
  // $component_characters characters_of(component)
  var_characters_of, 1, var_996_7_component, 1, var_999_1_component_characters,
  // 1
  var_std__less, 2, num_1, var_996_3_idx, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_106, 1, LOCAL(2),
  // if # suppress leading whitespace after line ending with '@'
  var_if, 3, LOCAL(2), lambda_107, lambda_108, 1, LOCAL(3),
  // append &characters
  var_append, 2, var_981_1_characters, LOCAL(3), 1, var_981_1_characters,
  // next
  var_next, 0, TAIL_CALL,
  POS(999, 15),
  POS(1003, 27),
  POS(1002, 21),
  POS(1001, 17),
  POS(1000, 15),
  POS(1007, 15)
};

static TAB_NUM t_lambda_106[] = {
  4, // locals
  0, // parameters
  // idx-1)) == CHARACTER_SEQUENCE
  var_std__minus, 2, var_996_3_idx, num_1, 1, LOCAL(1),
  // components(idx-1)) == CHARACTER_SEQUENCE
  var_983_1_components, 1, LOCAL(1), 1, LOCAL(2),
  // node_type_of(components(idx-1)) == CHARACTER_SEQUENCE
  var_node_type_of, 1, LOCAL(2), 1, LOCAL(3),
  // node_type_of(components(idx-1)) == CHARACTER_SEQUENCE
  var_std__equal, 2, LOCAL(3), var_CHARACTER_SEQUENCE, 1, LOCAL(4),
  // node_type_of(components(idx-1)) == CHARACTER_SEQUENCE
  LET, 1, LOCAL(4), TAIL_CALL,
  POS(1004, 45),
  POS(1004, 34),
  POS(1004, 21),
  POS(1004, 21),
  POS(1004, 21)
};

static TAB_NUM t_lambda_107[] = {
  1, // locals
  0, // parameters
  // trim_left(component_characters)
  var_trim_left, 1, var_999_1_component_characters, 1, LOCAL(1),
  //  trim_left(component_characters)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1005, 22),
  POS(1005, 21)
};

static TAB_NUM t_lambda_108[] = {
  0, // locals
  0, // parameters
  //  component_characters
  LET, 1, var_999_1_component_characters, TAIL_CALL,
  POS(1006, 21)
};

static TAB_NUM t_lambda_NUMERIC_CHARACTER[] = {
  3, // locals
  0, // parameters
  // digits_of(component).to_integer)
  var_digits_of, 1, var_996_7_component, 1, LOCAL(1),
  // to_integer)
  var_to_integer, 1, LOCAL(1), 1, LOCAL(2),
  // character(digits_of(component).to_integer)
  var_character, 1, LOCAL(2), 1, LOCAL(3),
  // push &characters character(digits_of(component).to_integer)
  var_push, 2, var_981_1_characters, LOCAL(3), 1, var_981_1_characters,
  // next
  var_next, 0, TAIL_CALL,
  POS(1009, 42),
  POS(1009, 63),
  POS(1009, 32),
  POS(1009, 15),
  POS(1010, 15)
};

static TAB_NUM t_lambda_NAMED_CHARACTER[] = {
  2, // locals
  0, // parameters
  // funky::name_of(component))
  var_funky__name_of, 1, var_996_7_component, 1, LOCAL(1),
  // $character character_from_name(funky::name_of(component))
  var_character_from_name, 1, LOCAL(1), 1, LOCAL(2),
  // is_undefined:
  var_is_undefined, 1, LOCAL(2), 1, LOCAL(1),
  // on character.is_undefined:
  var_on, 2, LOCAL(1), lambda_109, 0,
  // push &characters character
  var_push, 2, var_981_1_characters, LOCAL(2), 1, var_981_1_characters,
  // next
  var_next, 0, TAIL_CALL,
  POS(1012, 46),
  POS(1012, 15),
  POS(1013, 28),
  POS(1013, 15),
  POS(1015, 15),
  POS(1016, 15)
};

static TAB_NUM t_lambda_109[] = {
  0, // locals
  0, // parameters
  // syntax_error "Invalid character name" component
  var_syntax_error, 2, str_Invalid_characte, var_996_7_component, TAIL_CALL,
  POS(1014, 17)
};

static TAB_NUM t_lambda_NEWLINE[] = {
  0, // locals
  0, // parameters
  // push &characters '@nl;'
  var_push, 2, var_981_1_characters, chr_10, 1, var_981_1_characters,
  // next
  var_next, 0, TAIL_CALL,
  POS(1018, 15),
  POS(1019, 15)
};

static TAB_NUM t_lambda_AT_CHARACTER[] = {
  0, // locals
  0, // parameters
  // push &characters '@@'
  var_push, 2, var_981_1_characters, chr_64, 1, var_981_1_characters,
  // next
  var_next, 0, TAIL_CALL,
  POS(1021, 15),
  POS(1022, 15)
};

static TAB_NUM t_lambda_ESCAPE_EXPRESSION[] = {
  3, // locals
  0, // parameters
  // expression_of(component)
  var_expression_of, 1, var_996_7_component, 1, LOCAL(1),
  // simplify expression_of(component)
  var_simplify, 2, LOCAL(1), var_979_45_temp_no, 3, LOCAL(2), var_979_45_temp_no, LOCAL(3),
  // append &statements escape_statements
  var_append, 2, var_982_1_statements, LOCAL(3), 1, var_982_1_statements,
  // add_characters !arguments !characters
  func_add_characters, 0, 2, var_980_1_arguments, var_981_1_characters,
  // push &arguments expression
  var_push, 2, var_980_1_arguments, LOCAL(2), 1, var_980_1_arguments,
  // next
  var_next, 0, TAIL_CALL,
  POS(1024, 24),
  POS(1024, 15),
  POS(1026, 15),
  POS(1027, 15),
  POS(1028, 15),
  POS(1029, 15)
};

static TAB_NUM t_lambda_TAGGED_EMPTY_CHARACTER[] = {
  0, // locals
  0, // parameters
  // next
  var_next, 0, TAIL_CALL,
  POS(1031, 15)
};

static TAB_NUM t_lambda_110[] = {
  1, // locals
  0, // parameters
  // node_type_of(component)
  var_node_type_of, 1, var_996_7_component, 1, LOCAL(1),
  // debug::dump `node_type_of(component)
  var_debug__dump, 2, str_node_type_ofcomp, LOCAL(1), 0,
  // next
  var_next, 0, TAIL_CALL,
  POS(1033, 28),
  POS(1033, 15),
  POS(1034, 15)
};

static TAB_NUM t_lambda_111[] = {
  3, // locals
  0, // parameters
  // add_characters !arguments !characters
  func_add_characters, 0, 2, var_980_1_arguments, var_981_1_characters,
  // length_of(arguments) == 1
  var_length_of, 1, var_980_1_arguments, 1, LOCAL(1),
  // length_of(arguments) == 1
  var_std__equal, 2, LOCAL(1), num_1, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_112, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_113, lambda_114, TAIL_CALL,
  POS(1036, 11),
  POS(1039, 15),
  POS(1039, 15),
  POS(1038, 15),
  POS(1037, 11)
};

static TAB_NUM t_lambda_112[] = {
  3, // locals
  0, // parameters
  // arguments(1)) == CHARACTER_SEQUENCE
  var_980_1_arguments, 1, num_1, 1, LOCAL(1),
  // node_type_of(arguments(1)) == CHARACTER_SEQUENCE
  var_node_type_of, 1, LOCAL(1), 1, LOCAL(2),
  // node_type_of(arguments(1)) == CHARACTER_SEQUENCE
  var_std__equal, 2, LOCAL(2), var_CHARACTER_SEQUENCE, 1, LOCAL(3),
  // node_type_of(arguments(1)) == CHARACTER_SEQUENCE
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(1040, 28),
  POS(1040, 15),
  POS(1040, 15),
  POS(1040, 15)
};

static TAB_NUM t_lambda_113[] = {
  1, // locals
  0, // parameters
  // arguments(1) temp_no empty_statements
  var_980_1_arguments, 1, num_1, 1, LOCAL(1),
  //  arguments(1) temp_no empty_statements
  LET, 3, LOCAL(1), var_979_45_temp_no, var_empty_statements, TAIL_CALL,
  POS(1041, 16),
  POS(1041, 15)
};

static TAB_NUM t_lambda_114[] = {
  8, // locals
  0, // parameters
  // inc &temp_no
  var_inc, 1, var_979_45_temp_no, 1, var_979_45_temp_no,
  // source_group_of(self))
  var_source_group_of, 1, var_979_40_self, 1, LOCAL(1),
  // $text line_text_of(source_group_of(self))
  var_line_text_of, 1, LOCAL(1), 1, LOCAL(6),
  // $position source_position_of(self)
  var_source_position_of, 1, var_979_40_self, 1, LOCAL(7),
  // length_of(text)-length_of(position) -1)
  var_length_of, 1, LOCAL(6), 1, LOCAL(1),
  // length_of(position) -1)
  var_length_of, 1, LOCAL(7), 1, LOCAL(2),
  // length_of(text)-length_of(position) -1)
  var_std__minus, 2, LOCAL(1), LOCAL(2), 1, LOCAL(3),
  // !position range(text length_of(text)-length_of(position) -1)
  var_range, 3, LOCAL(6), LOCAL(3), minus_num_1, 1, LOCAL(7),
  // source_group_of(self)
  var_source_group_of, 1, var_979_40_self, 1, LOCAL(1),
  // $functor
  LET, -4, var_funky_types__functor, var_identifier_of, str_stdstring, var_kind_of, var_EXTERN, var_source_group_of, LOCAL(1), var_source_position_of, LOCAL(7), LOCAL(8),
  // temporary(temp_no self)
  func_temporary, 2, var_979_45_temp_no, var_979_40_self, 1, LOCAL(1),
  // redefine_temporary(temp_no functor))
  func_redefine_temporary, 2, var_979_45_temp_no, LOCAL(8), 1, LOCAL(2),
  // push(arguments redefine_temporary(temp_no functor))
  var_push, 2, var_980_1_arguments, LOCAL(2), 1, LOCAL(3),
  // create_statement
  func_create_statement, 2, LOCAL(8), LOCAL(3), 1, LOCAL(4),
  // push_leading_statement
  var_push_leading_statement, 2, var_982_1_statements, LOCAL(4), 1, LOCAL(5),
  // ->
  LET, 3, LOCAL(1), var_979_45_temp_no, LOCAL(5), TAIL_CALL,
  POS(1043, 15),
  POS(1044, 34),
  POS(1044, 15),
  POS(1045, 15),
  POS(1046, 36),
  POS(1046, 52),
  POS(1046, 36),
  POS(1046, 15),
  POS(1051, 36),
  POS(1047, 15),
  POS(1054, 17),
  POS(1060, 36),
  POS(1060, 21),
  POS(1058, 19),
  POS(1056, 17),
  POS(1053, 15)
};

static TAB_NUM t_func_add_characters[] = {
  1, // locals
  0, // parameters
  // is_empty
  var_is_empty, 1, var_981_1_characters, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_115, lambda_116, TAIL_CALL,
  POS(1064, 22),
  POS(1063, 9)
};

static TAB_NUM t_lambda_115[] = {
  0, // locals
  0, // parameters
  //  arguments characters
  LET, 2, var_980_1_arguments, var_981_1_characters, TAIL_CALL,
  POS(1065, 13)
};

static TAB_NUM t_lambda_116[] = {
  6, // locals
  0, // parameters
  // source_group_of(self)
  var_source_group_of, 1, var_979_40_self, 1, LOCAL(1),
  // source_position_of(self)
  var_source_position_of, 1, var_979_40_self, 1, LOCAL(2),
  // length_of(characters))_@(characters)"
  var_length_of, 1, var_981_1_characters, 1, LOCAL(3),
  // "string@(length_of(characters))_@(characters)"
  var_std__string, 4, str_string_2, LOCAL(3), string_2, var_981_1_characters, 1, LOCAL(4),
  // funky_types::character_sequence
  LET, -4, var_funky_types__character_sequence, var_source_group_of, LOCAL(1), var_source_position_of, LOCAL(2), var_characters_of, var_981_1_characters, var_funky__key_of, LOCAL(4), LOCAL(5),
  // push
  var_push, 2, var_980_1_arguments, LOCAL(5), 1, LOCAL(6),
  // 
  LET, 2, LOCAL(6), string_4, TAIL_CALL,
  POS(1070, 34),
  POS(1071, 37),
  POS(1073, 41),
  POS(1073, 32),
  POS(1069, 15),
  POS(1067, 13),
  POS(1066, 13)
};

static TAB_NUM t_func_std_types__list___simplify[] = {
  1, // locals
  2, // parameters
  LOCAL(1), // 1076_28_self
  var_1076_33_temp_no,
  // $statements empty_statements
  LET, 1, var_empty_statements, 1, var_1077_1_statements,
  // $simplified_nodes empty_list
  LET, 1, var_empty_list, 1, var_1078_1_simplified_nodes,
  // for_each self
  var_for_each, 3, LOCAL(1), lambda_117, lambda_118, TAIL_CALL,
  POS(1077, 3),
  POS(1078, 3),
  POS(1079, 3)
};

static TAB_NUM t_lambda_117[] = {
  2, // locals
  1, // parameters
  LOCAL(1), // 1080_3_node
  // simplify &node &temp_no $node_statements
  var_simplify, 2, LOCAL(1), var_1076_33_temp_no, 3, LOCAL(1), var_1076_33_temp_no, LOCAL(2),
  // append &statements node_statements
  var_append, 2, var_1077_1_statements, LOCAL(2), 1, var_1077_1_statements,
  // push &simplified_nodes node
  var_push, 2, var_1078_1_simplified_nodes, LOCAL(1), 1, var_1078_1_simplified_nodes,
  // next
  var_next, 0, TAIL_CALL,
  POS(1081, 7),
  POS(1082, 7),
  POS(1083, 7),
  POS(1084, 7)
};

static TAB_NUM t_lambda_118[] = {
  0, // locals
  0, // parameters
  //  simplified_nodes temp_no statements
  LET, 3, var_1078_1_simplified_nodes, var_1076_33_temp_no, var_1077_1_statements, TAIL_CALL,
  POS(1085, 7)
};

static TAB_NUM t_func_create_functor[] = {
  6, // locals
  1, // parameters
  LOCAL(6), // 1089_18_original_node
  // identifier_of(original_node)
  var_identifier_of, 1, LOCAL(6), 1, LOCAL(1),
  // kind_of(original_node)
  var_kind_of, 1, LOCAL(6), 1, LOCAL(2),
  // source_group_of(original_node)
  var_source_group_of, 1, LOCAL(6), 1, LOCAL(3),
  // source_position_of(original_node)
  var_source_position_of, 1, LOCAL(6), 1, LOCAL(4),
  // funky_types::functor
  LET, -4, var_funky_types__functor, var_identifier_of, LOCAL(1), var_kind_of, LOCAL(2), var_source_group_of, LOCAL(3), var_source_position_of, LOCAL(4), LOCAL(5),
  // ->
  LET, 1, LOCAL(5), TAIL_CALL,
  POS(1092, 22),
  POS(1093, 16),
  POS(1094, 24),
  POS(1095, 27),
  POS(1091, 5),
  POS(1090, 3)
};

static TAB_NUM t_func_std[] = {
  6, // locals
  2, // parameters
  LOCAL(5), // 1097_7_name
  LOCAL(6), // 1097_12_original_node
  // "std::@(name)"
  var_std__string, 2, str_std, LOCAL(5), 1, LOCAL(1),
  // source_group_of(original_node)
  var_source_group_of, 1, LOCAL(6), 1, LOCAL(2),
  // source_position_of(original_node)
  var_source_position_of, 1, LOCAL(6), 1, LOCAL(3),
  // funky_types::functor
  LET, -4, var_funky_types__functor, var_identifier_of, LOCAL(1), var_kind_of, var_EXTERN, var_source_group_of, LOCAL(2), var_source_position_of, LOCAL(3), LOCAL(4),
  // ->
  LET, 1, LOCAL(4), TAIL_CALL,
  POS(1100, 22),
  POS(1102, 24),
  POS(1103, 27),
  POS(1099, 5),
  POS(1098, 3)
};

static TAB_NUM t_func_assign_attributes[] = {
  4, // locals
  1, // parameters
  LOCAL(4), // 1105_21_original_node
  // source_group_of(original_node)
  var_source_group_of, 1, LOCAL(4), 1, LOCAL(1),
  // source_position_of(original_node)
  var_source_position_of, 1, LOCAL(4), 1, LOCAL(2),
  // funky_types::functor
  LET, -4, var_funky_types__functor, var_identifier_of, str__assign_attribut, var_kind_of, var_BUILTIN, var_source_group_of, LOCAL(1), var_source_position_of, LOCAL(2), LOCAL(3),
  // ->
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(1110, 24),
  POS(1111, 27),
  POS(1107, 5),
  POS(1106, 3)
};

static TAB_NUM t_func_temporary[] = {
  7, // locals
  2, // parameters
  LOCAL(6), // 1113_13_no
  LOCAL(7), // 1113_16_original_node
  // mangle_position(original_node))_temp_@(no)"
  var_mangle_position, 1, LOCAL(7), 1, LOCAL(1),
  // "_@(mangle_position(original_node))_temp_@(no)"
  var_std__string, 4, string_2, LOCAL(1), str__temp, LOCAL(6), 1, LOCAL(2),
  // source_group_of(original_node)
  var_source_group_of, 1, LOCAL(7), 1, LOCAL(3),
  // source_position_of(original_node)
  var_source_position_of, 1, LOCAL(7), 1, LOCAL(4),
  // funky_types::functor
  LET, -5, var_funky_types__functor, var_identifier_of, LOCAL(2), var_no_of, LOCAL(6), var_kind_of, var_TEMPORARY, var_source_group_of, LOCAL(3), var_source_position_of, LOCAL(4), LOCAL(5),
  // ->
  LET, 1, LOCAL(5), TAIL_CALL,
  POS(1117, 26),
  POS(1117, 22),
  POS(1120, 24),
  POS(1121, 27),
  POS(1116, 5),
  POS(1115, 3)
};

static TAB_NUM t_func_redefine_temporary[] = {
  7, // locals
  2, // parameters
  LOCAL(6), // 1123_22_no
  LOCAL(7), // 1123_25_original_node
  // mangle_position(original_node))_temp_@(no)"
  var_mangle_position, 1, LOCAL(7), 1, LOCAL(1),
  // "_@(mangle_position(original_node))_temp_@(no)"
  var_std__string, 4, string_2, LOCAL(1), str__temp, LOCAL(6), 1, LOCAL(2),
  // source_group_of(original_node)
  var_source_group_of, 1, LOCAL(7), 1, LOCAL(3),
  // source_position_of(original_node)
  var_source_position_of, 1, LOCAL(7), 1, LOCAL(4),
  // funky_types::redefinition
  LET, -5, var_funky_types__redefinition, var_identifier_of, LOCAL(2), var_no_of, LOCAL(6), var_kind_of, var_TEMPORARY, var_source_group_of, LOCAL(3), var_source_position_of, LOCAL(4), LOCAL(5),
  // ->
  LET, 1, LOCAL(5), TAIL_CALL,
  POS(1126, 26),
  POS(1126, 22),
  POS(1129, 24),
  POS(1130, 27),
  POS(1125, 5),
  POS(1124, 3)
};

static TAB_NUM t_func_update_temporary[] = {
  7, // locals
  2, // parameters
  LOCAL(6), // 1132_20_no
  LOCAL(7), // 1132_23_original_node
  // mangle_position(original_node))_temp_@(no)"
  var_mangle_position, 1, LOCAL(7), 1, LOCAL(1),
  // "_@(mangle_position(original_node))_temp_@(no)"
  var_std__string, 4, string_2, LOCAL(1), str__temp, LOCAL(6), 1, LOCAL(2),
  // source_group_of(original_node)
  var_source_group_of, 1, LOCAL(7), 1, LOCAL(3),
  // source_position_of(original_node)
  var_source_position_of, 1, LOCAL(7), 1, LOCAL(4),
  // funky_types::update
  LET, -5, var_funky_types__update, var_identifier_of, LOCAL(2), var_no_of, LOCAL(6), var_kind_of, var_TEMPORARY, var_source_group_of, LOCAL(3), var_source_position_of, LOCAL(4), LOCAL(5),
  // ->
  LET, 1, LOCAL(5), TAIL_CALL,
  POS(1135, 26),
  POS(1135, 22),
  POS(1138, 24),
  POS(1139, 27),
  POS(1134, 5),
  POS(1133, 3)
};

static TAB_NUM t_func_create_statement[] = {
  1, // locals
  2, // parameters
  var_1143_20_head,
  var_1143_25_arguments,
  // is_not_empty:
  var_is_not_empty, 1, var_1143_25_arguments, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_arguments_is_not_empty, lambda_122, TAIL_CALL,
  POS(1145, 15),
  POS(1144, 3)
};

static TAB_NUM t_lambda_arguments_is_not_empty[] = {
  2, // locals
  0, // parameters
  // arguments(1))
  var_1143_25_arguments, 1, num_1, 1, LOCAL(1),
  // $node_type node_type_of(arguments(1))
  var_node_type_of, 1, LOCAL(1), 1, var_1146_1_node_type,
  // node_type == ATTRIBUTE_VALUE_PAIR
  var_std__equal, 2, var_1146_1_node_type, var_ATTRIBUTE_VALUE_PAIR, 1, LOCAL(1),
  // 
  var_std__or, 2, LOCAL(1), lambda_119, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_121, lambda_122, TAIL_CALL,
  POS(1146, 31),
  POS(1146, 7),
  POS(1149, 11),
  POS(1148, 11),
  POS(1147, 7)
};

static TAB_NUM t_lambda_119[] = {
  2, // locals
  0, // parameters
  // node_type == METHOD_VALUE_PAIR
  var_std__equal, 2, var_1146_1_node_type, var_METHOD_VALUE_PAIR, 1, LOCAL(1),
  // 
  var_std__or, 2, LOCAL(1), lambda_120, 1, LOCAL(2),
  // node_type == METHOD_VALUE_PAIR
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1150, 11),
  POS(1148, 11),
  POS(1150, 11)
};

static TAB_NUM t_lambda_120[] = {
  1, // locals
  0, // parameters
  // node_type == TYPE_FUNCTION
  var_std__equal, 2, var_1146_1_node_type, var_TYPE_FUNCTION, 1, LOCAL(1),
  // node_type == TYPE_FUNCTION
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1151, 11),
  POS(1151, 11)
};

static TAB_NUM t_lambda_121[] = {
  5, // locals
  0, // parameters
  // assign_attributes(head)
  func_assign_attributes, 1, var_1143_20_head, 1, LOCAL(1),
  // put(arguments head)
  var_put, 2, var_1143_25_arguments, var_1143_20_head, 1, LOCAL(2),
  // source_group_of(head)
  var_source_group_of, 1, var_1143_20_head, 1, LOCAL(3),
  // source_position_of(head)
  var_source_position_of, 1, var_1143_20_head, 1, LOCAL(4),
  // funky_types::statement
  LET, -4, var_funky_types__statement, var_head_of, LOCAL(1), var_arguments_of, LOCAL(2), var_source_group_of, LOCAL(3), var_source_position_of, LOCAL(4), LOCAL(5),
  // 
  LET, 1, LOCAL(5), TAIL_CALL,
  POS(1154, 22),
  POS(1155, 27),
  POS(1156, 30),
  POS(1157, 33),
  POS(1153, 11),
  POS(1152, 11)
};

static TAB_NUM t_lambda_122[] = {
  4, // locals
  0, // parameters
  // expand_backquotes(arguments)
  func_expand_backquotes, 1, var_1143_25_arguments, 1, LOCAL(1),
  // source_group_of(head)
  var_source_group_of, 1, var_1143_20_head, 1, LOCAL(2),
  // source_position_of(head)
  var_source_position_of, 1, var_1143_20_head, 1, LOCAL(3),
  // funky_types::statement
  LET, -4, var_funky_types__statement, var_head_of, var_1143_20_head, var_arguments_of, LOCAL(1), var_source_group_of, LOCAL(2), var_source_position_of, LOCAL(3), LOCAL(4),
  // 
  LET, 1, LOCAL(4), TAIL_CALL,
  POS(1165, 23),
  POS(1166, 26),
  POS(1167, 29),
  POS(1163, 7),
  POS(1162, 7)
};

static TAB_NUM t_func_expand_backquotes[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 1169_21_arguments
  // $expanded empty_list
  LET, 1, var_empty_list, 1, var_1170_1_expanded,
  // for_each arguments
  var_for_each, 3, LOCAL(1), lambda_123, lambda_126, TAIL_CALL,
  POS(1170, 3),
  POS(1171, 3)
};

static TAB_NUM t_lambda_123[] = {
  2, // locals
  1, // parameters
  var_1172_3_argument,
  // node_type_of(argument) == BACKQUOTED:
  var_node_type_of, 1, var_1172_3_argument, 1, LOCAL(1),
  // node_type_of(argument) == BACKQUOTED:
  var_std__equal, 2, LOCAL(1), var_BACKQUOTED, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_124, lambda_125, TAIL_CALL,
  POS(1174, 9),
  POS(1174, 9),
  POS(1173, 7)
};

static TAB_NUM t_lambda_124[] = {
  0, // locals
  0, // parameters
  // resolve_backquoted &expanded argument
  func_resolve_backquoted, 2, var_1170_1_expanded, var_1172_3_argument, 1, var_1170_1_expanded,
  // next
  var_next, 0, TAIL_CALL,
  POS(1175, 11),
  POS(1176, 11)
};

static TAB_NUM t_lambda_125[] = {
  0, // locals
  0, // parameters
  // push &expanded argument
  var_push, 2, var_1170_1_expanded, var_1172_3_argument, 1, var_1170_1_expanded,
  // next
  var_next, 0, TAIL_CALL,
  POS(1178, 11),
  POS(1179, 11)
};

static TAB_NUM t_lambda_126[] = {
  0, // locals
  0, // parameters
  //  expanded
  LET, 1, var_1170_1_expanded, TAIL_CALL,
  POS(1180, 7)
};

static TAB_NUM t_func_resolve_backquoted[] = {
  8, // locals
  2, // parameters
  LOCAL(6), // 1182_22_arguments
  LOCAL(7), // 1182_32_node
  // source_position_of(node))
  var_source_position_of, 1, LOCAL(7), 1, LOCAL(1),
  // $characters exctract_characters(source_position_of(node))
  func_exctract_characters, 1, LOCAL(1), 1, LOCAL(8),
  // length_of(characters))_@(characters)"
  var_length_of, 1, LOCAL(8), 1, LOCAL(1),
  // "string@(length_of(characters))_@(characters)"
  var_std__string, 4, str_string_2, LOCAL(1), string_2, LOCAL(8), 1, LOCAL(2),
  // funky_types::character_sequence
  LET, -2, var_funky_types__character_sequence, var_characters_of, LOCAL(8), var_funky__key_of, LOCAL(2), LOCAL(3),
  // push
  var_push, 2, LOCAL(6), LOCAL(3), 1, LOCAL(4),
  // expression_of(node)
  var_expression_of, 1, LOCAL(7), 1, LOCAL(5),
  // push
  var_push, 2, LOCAL(4), LOCAL(5), TAIL_CALL,
  POS(1183, 35),
  POS(1183, 3),
  POS(1189, 33),
  POS(1189, 24),
  POS(1187, 7),
  POS(1185, 5),
  POS(1190, 5),
  POS(1184, 3)
};

static TAB_NUM t_func_exctract_characters[] = {
  0, // locals
  1, // parameters
  var_1192_23_str,
  // $level 0
  LET, 1, num_0, 1, var_1193_1_level,
  // $within_string false
  LET, 1, var_false, 1, var_1194_1_within_string,
  // for_each str: (idx chr)
  var_for_each, 2, var_1192_23_str, lambda_127, TAIL_CALL,
  POS(1193, 5),
  POS(1194, 5),
  POS(1195, 5)
};

static TAB_NUM t_lambda_127[] = {
  1, // locals
  2, // parameters
  var_1195_15_idx,
  LOCAL(1), // 1195_19_chr
  // case chr
  var_case, 12, LOCAL(1), chr_10, lambda_nl, chr_32, lambda_128, chr_34, lambda_quot, chr_40, lambda_131, chr_41, lambda_132, var_next, TAIL_CALL,
  POS(1196, 7)
};

static TAB_NUM t_lambda_nl[] = {
  1, // locals
  0, // parameters
  // range(str 1 -2)
  var_range, 3, var_1192_23_str, num_1, minus_num_2, 1, LOCAL(1),
  //  range(str 1 -2)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1197, 19),
  POS(1197, 18)
};

static TAB_NUM t_lambda_128[] = {
  2, // locals
  0, // parameters
  // level == 0 && not(within_string)
  var_std__equal, 2, var_1193_1_level, num_0, 1, LOCAL(1),
  // level == 0 && not(within_string)
  var_std__and, 2, LOCAL(1), lambda_129, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_130, var_next, TAIL_CALL,
  POS(1200, 13),
  POS(1200, 13),
  POS(1199, 11)
};

static TAB_NUM t_lambda_129[] = {
  1, // locals
  0, // parameters
  // not(within_string)
  var_not, 1, var_1194_1_within_string, 1, LOCAL(1),
  // not(within_string)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1200, 27),
  POS(1200, 27)
};

static TAB_NUM t_lambda_130[] = {
  2, // locals
  0, // parameters
  // idx-1)
  var_std__minus, 2, var_1195_15_idx, num_1, 1, LOCAL(1),
  // range(str 1 idx-1)
  var_range, 3, var_1192_23_str, num_1, LOCAL(1), 1, LOCAL(2),
  //  range(str 1 idx-1)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1201, 28),
  POS(1201, 16),
  POS(1201, 15)
};

static TAB_NUM t_lambda_quot[] = {
  0, // locals
  0, // parameters
  // not &within_string
  var_not, 1, var_1194_1_within_string, 1, var_1194_1_within_string,
  // next
  var_next, 0, TAIL_CALL,
  POS(1204, 11),
  POS(1205, 11)
};

static TAB_NUM t_lambda_131[] = {
  0, // locals
  0, // parameters
  // inc &level
  var_inc, 1, var_1193_1_level, 1, var_1193_1_level,
  // next
  var_next, 0, TAIL_CALL,
  POS(1207, 11),
  POS(1208, 11)
};

static TAB_NUM t_lambda_132[] = {
  0, // locals
  0, // parameters
  // dec &level
  var_dec, 1, var_1193_1_level, 1, var_1193_1_level,
  // next
  var_next, 0, TAIL_CALL,
  POS(1210, 11),
  POS(1211, 11)
};

static TAB_NUM t_func_funky_types__statement_list___append[] = {
  6, // locals
  2, // parameters
  LOCAL(1), // 1214_38_self
  LOCAL(2), // 1214_43_right
  // self $leading_statements $trailing_statements
  LOCAL(1), 0, 2, LOCAL(3), LOCAL(4),
  // right $right_leading_statements $right_trailing_statements
  LOCAL(2), 0, 2, LOCAL(5), LOCAL(6),
  // append &leading_statements right_leading_statements
  var_append, 2, LOCAL(3), LOCAL(5), 1, LOCAL(3),
  // append &trailing_statements right_trailing_statements
  var_append, 2, LOCAL(4), LOCAL(6), 1, LOCAL(4),
  // new self leading_statements trailing_statements
  var_new, 3, LOCAL(1), LOCAL(3), LOCAL(4), TAIL_CALL,
  POS(1215, 3),
  POS(1216, 3),
  POS(1217, 3),
  POS(1218, 3),
  POS(1219, 3)
};

static TAB_NUM t_func_funky_types__statement_list___push_leading_statement[] = {
  4, // locals
  2, // parameters
  LOCAL(1), // 1221_54_self
  LOCAL(2), // 1221_59_statement
  // self $leading_statements $trailing_statements
  LOCAL(1), 0, 2, LOCAL(3), LOCAL(4),
  // push &leading_statements statement
  var_push, 2, LOCAL(3), LOCAL(2), 1, LOCAL(3),
  // new self leading_statements trailing_statements
  var_new, 3, LOCAL(1), LOCAL(3), LOCAL(4), TAIL_CALL,
  POS(1222, 3),
  POS(1223, 3),
  POS(1224, 3)
};

static TAB_NUM t_func_funky_types__statement_list___push_trailing_statement[] = {
  4, // locals
  2, // parameters
  LOCAL(1), // 1226_55_self
  LOCAL(2), // 1226_60_statement
  // self $leading_statements $trailing_statements
  LOCAL(1), 0, 2, LOCAL(3), LOCAL(4),
  // push &trailing_statements statement
  var_push, 2, LOCAL(4), LOCAL(2), 1, LOCAL(4),
  // new self leading_statements trailing_statements
  var_new, 3, LOCAL(1), LOCAL(3), LOCAL(4), TAIL_CALL,
  POS(1227, 3),
  POS(1228, 3),
  POS(1229, 3)
};

static TAB_NUM t_func_collect_parameter_definitions[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 1233_33_body
  // parameters_of(body) add_definition -> resolve_variable
  var_parameters_of, 1, LOCAL(2), 1, LOCAL(1),
  // for_each parameters_of(body) add_definition -> resolve_variable
  var_for_each, 3, LOCAL(1), var_add_definition, lambda_133, TAIL_CALL,
  POS(1234, 12),
  POS(1234, 3)
};

static TAB_NUM t_lambda_133[] = {
  0, // locals
  0, // parameters
  //  resolve_variable
  LET, 1, var_resolve_variable, TAIL_CALL,
  POS(1234, 49)
};

static TAB_NUM t_func_collect_local_definitions[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 1236_29_statements
  // for_each statements add_definitions -> resolve_variable
  var_for_each, 3, LOCAL(1), var_add_definitions, lambda_134, TAIL_CALL,
  POS(1237, 3)
};

static TAB_NUM t_lambda_134[] = {
  0, // locals
  0, // parameters
  //  resolve_variable
  LET, 1, var_resolve_variable, TAIL_CALL,
  POS(1237, 41)
};

static TAB_NUM t_func_funky_types__node___add_definitions[] = {
  1, // locals
  1, // parameters
  LOCAL(1),
  // next
  var_next, 0, TAIL_CALL,
  POS(1242, 3)
};

static TAB_NUM t_func_funky_types__statement___add_definitions[] = {
  4, // locals
  1, // parameters
  LOCAL(4), // 1244_42_self
  // arguments_of(self) head_of(self)) add_definition
  var_arguments_of, 1, LOCAL(4), 1, LOCAL(1),
  // head_of(self)) add_definition
  var_head_of, 1, LOCAL(4), 1, LOCAL(2),
  // push(arguments_of(self) head_of(self)) add_definition
  var_push, 2, LOCAL(1), LOCAL(2), 1, LOCAL(3),
  // for_each
  var_for_each, 3, LOCAL(3), var_add_definition, var_next, TAIL_CALL,
  POS(1246, 10),
  POS(1246, 29),
  POS(1246, 5),
  POS(1245, 3)
};

static TAB_NUM t_func_funky_types__node___add_definition[] = {
  1, // locals
  1, // parameters
  LOCAL(1),
  // next
  var_next, 0, TAIL_CALL,
  POS(1252, 3)
};

static TAB_NUM t_func_funky_types__definition___add_definition[] = {
  2, // locals
  1, // parameters
  var_1254_42_self,
  // $identifier identifier_of(self)
  var_identifier_of, 1, var_1254_42_self, 1, var_1255_1_identifier,
  // not(allow_hidden) && resolve_variable(identifier).is_defined:
  var_not, 1, var_allow_hidden, 1, LOCAL(1),
  // not(allow_hidden) && resolve_variable(identifier).is_defined:
  var_std__and, 2, LOCAL(1), lambda_135, 1, LOCAL(2),
  // on not(allow_hidden) && resolve_variable(identifier).is_defined:
  var_on, 2, LOCAL(2), lambda_136, 0,
  // !resolve_variable(identifier) mangle_local_definition(identifier self)
  var_mangle_local_definition, 2, var_1255_1_identifier, var_1254_42_self, 1, LOCAL(2),
  // resolve_variable(identifier) mangle_local_definition(identifier self)
  var_resolve_variable, 2, var_1255_1_identifier, LOCAL(2), 1, var_resolve_variable,
  // next
  var_next, 0, TAIL_CALL,
  POS(1255, 3),
  POS(1256, 6),
  POS(1256, 6),
  POS(1256, 3),
  POS(1258, 3),
  POS(1258, 4),
  POS(1259, 3)
};

static TAB_NUM t_lambda_135[] = {
  2, // locals
  0, // parameters
  // resolve_variable(identifier).is_defined:
  var_resolve_variable, 1, var_1255_1_identifier, 1, LOCAL(1),
  // is_defined:
  var_is_defined, 1, LOCAL(1), 1, LOCAL(2),
  // resolve_variable(identifier).is_defined:
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1256, 27),
  POS(1256, 56),
  POS(1256, 27)
};

static TAB_NUM t_lambda_136[] = {
  0, // locals
  0, // parameters
  // syntax_error "Variable is already defined" self
  var_syntax_error, 2, str_Variable_is_alre, var_1254_42_self, TAIL_CALL,
  POS(1257, 5)
};

static TAB_NUM t_func_add_parameter_definition[] = {
  4, // locals
  1, // parameters
  LOCAL(3), // 1264_28_self
  // $name funky::name_of(self)
  var_funky__name_of, 1, LOCAL(3), 1, LOCAL(4),
  // !resolve_variable(name) mangle_local_definition(name self)
  var_mangle_local_definition, 2, LOCAL(4), LOCAL(3), 1, LOCAL(2),
  // resolve_variable(name) mangle_local_definition(name self)
  var_resolve_variable, 2, LOCAL(4), LOCAL(2), 1, var_resolve_variable,
  // next
  var_next, 0, TAIL_CALL,
  POS(1265, 3),
  POS(1266, 3),
  POS(1266, 4),
  POS(1267, 3)
};

static TAB_NUM t_func_funky__mangle_local_definition[] = {
  4, // locals
  2, // parameters
  LOCAL(3), // 1269_34_identifier
  LOCAL(4), // 1269_45_definition
  // mangle_position(definition))_@(identifier)"
  var_mangle_position, 1, LOCAL(4), 1, LOCAL(1),
  // "@(mangle_position(definition))_@(identifier)"
  var_std__string, 3, LOCAL(1), string_2, LOCAL(3), 1, LOCAL(2),
  // -> "@(mangle_position(definition))_@(identifier)"
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1270, 9),
  POS(1270, 6),
  POS(1270, 3)
};

static TAB_NUM t_func_funky__mangle_position[] = {
  8, // locals
  1, // parameters
  LOCAL(4), // 1272_26_node
  // $source_group source_group_of(node)
  var_source_group_of, 1, LOCAL(4), 1, LOCAL(5),
  // $line_text second(source_group)
  var_second, 1, LOCAL(5), 1, LOCAL(6),
  // $line_no line_no_of(source_group)
  var_line_no_of, 1, LOCAL(5), 1, LOCAL(7),
  // length_of(line_text)-length_of(source_position_of(node))
  var_length_of, 1, LOCAL(6), 1, LOCAL(1),
  // source_position_of(node))
  var_source_position_of, 1, LOCAL(4), 1, LOCAL(2),
  // length_of(source_position_of(node))
  var_length_of, 1, LOCAL(2), 1, LOCAL(3),
  // $column_no length_of(line_text)-length_of(source_position_of(node))
  var_std__minus, 2, LOCAL(1), LOCAL(3), 1, LOCAL(8),
  // "@(line_no)_@(column_no)"
  var_std__string, 3, LOCAL(7), string_2, LOCAL(8), 1, LOCAL(1),
  // -> "@(line_no)_@(column_no)"
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1273, 3),
  POS(1274, 3),
  POS(1275, 3),
  POS(1276, 14),
  POS(1276, 45),
  POS(1276, 35),
  POS(1276, 3),
  POS(1277, 6),
  POS(1277, 3)
};

static int tuple_50_0_arguments[] = {
  -var_empty_list, -var_empty_list
};

static int key_value_pair_920_1_arguments[] = {
  -chr_46, -string_2
};

static int key_value_pair_921_1_arguments[] = {
  -chr_45, -string_2
};

static FUNKY_CONSTANT constants_table[] = {
  {FLT_TUPLE, 2, {.arguments = tuple_50_0_arguments}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky__simplify_statement}},
  {FLT_POSITIVE_INT64, 0, {.value = 0}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__variable___simplify}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__attribute_access___simplify}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__dummy_definition___simplify}},
  {FLT_POSITIVE_INT64, 0, {.value = 1}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__functor___simplify}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_simplify_extensions}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_3}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_ATTRIBUTE_ACCESS}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_4}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_5}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_6}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_7}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_8}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_9}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_10}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_IO_CALL}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_11}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_simplify_parameter}},
  {FLT_CHARACTER, 0, {.value = 95}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_12}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_13}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__return___simplify}},
  {FLT_STRING_8, 6, {.str_8 = "assign"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__redefinition___simplify}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_14}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_15}},
  {FLT_NEGATIVE_INT64, 0, {.value = 2}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_16}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_FUNCTION_CALL}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_17}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_18}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2_ATTRIBUTE_ACCESS}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_19}},
  {FLT_NEGATIVE_INT64, 0, {.value = 1}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_20}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2_FUNCTION_CALL}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_3_ATTRIBUTE_ACCESS}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_21}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__update___simplify}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_22}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_23}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_24}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_3_FUNCTION_CALL}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_25}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_26}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_4_ATTRIBUTE_ACCESS}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_27}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_28}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_4_FUNCTION_CALL}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_5_ATTRIBUTE_ACCESS}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_29}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__definition___simplify}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__parenthesed_expression___simplify}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_30}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_31}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__pair___simplify}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_argument_is_a_list}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_32}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_33}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_34}},
  {FLT_POSITIVE_INT64, 0, {.value = 2}},
  {FLT_STRING_8, 18, {.str_8 = "too many arguments"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_35}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_simplify_argument}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_simplify_inline_pair}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_resolve_identifier}},
  {FLT_CHARACTER, 0, {.value = 58}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_namespace_is_not_empty}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_true_namespace_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_check}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_36}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_37}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_version_is_defined}},
  {FLT_STRING_8, 1, {.str_8 = "-"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_resolve}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_38}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_39}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__expression___simplify}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_operator_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_40}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__negation___simplify}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_41}},
  {FLT_CHARACTER, 0, {.value = 45}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_42}},
  {FLT_POSITIVE_INT64, 0, {.value = 7}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_43}},
  {FLT_STRING_8, 6, {.str_8 = "minus_"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_44}},
  {FLT_STRING_8, 6, {.str_8 = "negate"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_binop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_COMMA}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_sequence_constructor}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_45}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_46}},
  {FLT_STRING_8, 8, {.str_8 = "sequence"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_AND}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_47}},
  {FLT_STRING_8, 3, {.str_8 = "and"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_OR}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_48}},
  {FLT_STRING_8, 2, {.str_8 = "or"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_49}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_PLUS}},
  {FLT_STRING_8, 4, {.str_8 = "plus"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_MINUS}},
  {FLT_STRING_8, 5, {.str_8 = "minus"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_TIMES}},
  {FLT_STRING_8, 5, {.str_8 = "times"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_OVER}},
  {FLT_STRING_8, 4, {.str_8 = "over"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_EQUAL}},
  {FLT_STRING_8, 5, {.str_8 = "equal"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_NOT_EQUAL}},
  {FLT_STRING_8, 3, {.str_8 = "not"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_LESS_THAN}},
  {FLT_STRING_8, 4, {.str_8 = "less"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_GREATER_THAN}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_LESS_EQUAL}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_GREATER_EQUAL}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_RANGE}},
  {FLT_STRING_8, 11, {.str_8 = "value_range"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_KEY_VALUE}},
  {FLT_STRING_8, 14, {.str_8 = "key_value_pair"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_SHIFT_LEFT}},
  {FLT_STRING_8, 10, {.str_8 = "shift_left"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_SHIFT_RIGHT}},
  {FLT_STRING_8, 11, {.str_8 = "shift_right"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_BIT_AND}},
  {FLT_STRING_8, 7, {.str_8 = "bit_and"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_BIT_OR}},
  {FLT_STRING_8, 6, {.str_8 = "bit_or"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_BIT_XOR}},
  {FLT_STRING_8, 7, {.str_8 = "bit_xor"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_NAMED_OPERATOR}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_50}},
  {FLT_STRING_8, 9, {.str_8 = "operation"}},
  {FLT_POSITIVE_INT64, 0, {.value = 9}},
  {FLT_STRING_8, 4, {.str_8 = "left"}},
  {FLT_STRING_8, 5, {.str_8 = "right"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2_operator_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_51}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_function_call}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_function_call_from_list}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_simplify_return}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__inline_statement___simplify}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__multiline_plus___simplify}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__multiline_minus___simplify}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__multiline_minus_with_remark___simplify}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__multiline_times___simplify}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__multiline_over___simplify}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__multiline_over_with_remark___simplify}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__multiline_shift_left___simplify}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__multiline_shift_right___simplify}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__multiline_equal___simplify}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__multiline_not_equal___simplify}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__multiline_less_equal___simplify}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__multiline_less_than___simplify}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__multiline_greater_equal___simplify}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__multiline_greater_than___simplify}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__multiline_and___simplify}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__multiline_or___simplify}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__multiline_bit_and___simplify}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__multiline_bit_and_with_remark___simplify}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__multiline_bit_or___simplify}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__multiline_bit_xor___simplify}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__multiline_assign___simplify}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_simplify_multiline_operator}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_filterarguments_ofself}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_do_delay}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_52}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_53}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_54}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_55}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_56}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_57}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_do_negate}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_58}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_push_statement}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__inline_body___simplify}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__body___simplify}},
  {FLT_STRING_8, 5, {.str_8 = "func_"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_59}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_60}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_61}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_62}},
  {FLT_STRING_8, 21, {.str_8 = "unexpected statements"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_simplify_statements}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_63}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_check_statements}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_64}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_MULTILINE_REMARK}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_65}},
  {FLT_STRING_8, 28, {.str_8 = "Closing parenthesis expected"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_OPEN_PARAMETERS}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_66}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_67}},
  {FLT_STRING_8, 30, {.str_8 = "Unexpected opening parenthesis"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_CLOSE_PARAMETERS}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_68}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_69}},
  {FLT_STRING_8, 30, {.str_8 = "Unexpected closing parenthesis"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_70}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_71}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_72}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_73}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_74}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_75}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__statement___simplify}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_FUNCTOR}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_RETURN}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_76}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_simplify_head_and_arguments}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_77}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_78}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_79}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_80}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_81}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_82}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_83}},
  {FLT_STRING_8, 30, {.str_8 = "Missing argument in assignment"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_84}},
  {FLT_STRING_8, 32, {.str_8 = "Too many arguments in assignment"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_is_an_assignment}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_85}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_86}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_87}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_88}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_is_a_slot_definition}},
  {FLT_STRING_8, 6, {.str_8 = "const_"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_89}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_check_trailing_statements}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_90}},
  {FLT_STRING_8, 11, {.str_8 = "std::assign"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_91}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_process_trailing_statements}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_92}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_93}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2_FUNCTOR}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_94}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_INLINE_ATTRIBUTE_VALUE_PAIR}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_95}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_96}},
  {FLT_STRING_8, 38, {.str_8 = "TEMP NOT FOUND IN TRAILING STATEMENT!\012"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_97}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_98}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_99}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_check_that_all_arguments_are_inputs}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_100}},
  {FLT_STRING_8, 26, {.str_8 = "Unexpected output argument"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__numeric_literal___simplify}},
  {FLT_CHARACTER, 0, {.value = 39}},
  {FLT_CHARACTER, 0, {.value = 46}},
  {FLT_STRING_8, 1, {.str_8 = "_"}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_920_1_arguments}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_921_1_arguments}},
  {FLT_STRING_8, 4, {.str_8 = "num_"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__character_literal___simplify}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__numeric_character_literal___simplify}},
  {FLT_STRING_8, 4, {.str_8 = "chr_"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__named_character_literal___simplify}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_101}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_102}},
  {FLT_STRING_8, 22, {.str_8 = "Invalid character name"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__at_character_literal___simplify}},
  {FLT_STRING_8, 2, {.str_8 = "64"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_create_numeric_character_literal}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__unique___simplify}},
  {FLT_CHARACTER, 0, {.value = 32}},
  {FLT_STRING_8, 4, {.str_8 = "uni_"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__string_literal___simplify}},
  {FLT_STRING_8, 0, {.str_8 = ""}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_103}},
  {FLT_STRING_8, 8, {.str_8 = "string0_"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_104}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_105}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_CHARACTER_SEQUENCE}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_106}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_107}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_108}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_NUMERIC_CHARACTER}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_NAMED_CHARACTER}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_109}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_NEWLINE}},
  {FLT_CHARACTER, 0, {.value = 10}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_AT_CHARACTER}},
  {FLT_CHARACTER, 0, {.value = 64}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_ESCAPE_EXPRESSION}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_TAGGED_EMPTY_CHARACTER}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_110}},
  {FLT_STRING_8, 23, {.str_8 = "node_type_of(component)"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_111}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_112}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_113}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_114}},
  {FLT_STRING_8, 11, {.str_8 = "std::string"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_add_characters}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_115}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_116}},
  {FLT_STRING_8, 6, {.str_8 = "string"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__list___simplify}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_117}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_118}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_create_functor}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std}},
  {FLT_STRING_8, 5, {.str_8 = "std::"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_assign_attributes}},
  {FLT_STRING_8, 18, {.str_8 = "_assign_attributes"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_temporary}},
  {FLT_STRING_8, 6, {.str_8 = "_temp_"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_redefine_temporary}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_update_temporary}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_create_statement}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_arguments_is_not_empty}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_119}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_120}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_121}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_122}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_expand_backquotes}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_123}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_124}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_125}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_126}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_resolve_backquoted}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_exctract_characters}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_127}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_nl}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_128}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_129}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_130}},
  {FLT_CHARACTER, 0, {.value = 34}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_quot}},
  {FLT_CHARACTER, 0, {.value = 40}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_131}},
  {FLT_CHARACTER, 0, {.value = 41}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_132}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__statement_list___append}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__statement_list___push_leading_statement}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__statement_list___push_trailing_statement}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_collect_parameter_definitions}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_133}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_collect_local_definitions}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_134}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__node___add_definitions}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__statement___add_definitions}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__node___add_definition}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__definition___add_definition}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_135}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_136}},
  {FLT_STRING_8, 27, {.str_8 = "Variable is already defined"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_add_parameter_definition}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky__mangle_local_definition}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky__mangle_position}}
};

static ATTRIBUTE_DEFINITION funky_types__functor__attributes[] = {
  {-var_no_of, -var_undefined},
  {-var_kind_of, -var_undefined},
  {var_simplify, -func_funky_types__functor___simplify}
};

static ATTRIBUTE_DEFINITION funky_types__node__attributes[] = {
  {-var_is_an_io_call, -var_false},
  {var_add_definitions, -func_funky_types__node___add_definitions},
  {var_add_definition, -func_funky_types__node___add_definition},
  {-var_is_a_remark, -var_false},
  {-var_is_a_pair, -var_false},
  {-var_is_an_input, -var_true},
  {-var_is_an_output, -var_false}
};

static ATTRIBUTE_DEFINITION funky_types__definition__attributes[] = {
  {-var_kind_of, -var_undefined},
  {var_simplify, -func_funky_types__definition___simplify},
  {var_add_definition, -func_funky_types__definition___add_definition},
  {-var_is_an_input, -var_false},
  {-var_is_an_output, -var_true}
};

static ATTRIBUTE_DEFINITION funky_types__pair__attributes[] = {
  {-var_kind_of, -var_undefined},
  {var_simplify, -func_funky_types__pair___simplify}
};

static ATTRIBUTE_DEFINITION funky_types__inline_attribute_value_pair__attributes[] = {
  {-var_kind_of, -var_undefined},
  {var_simplify, -func_simplify_inline_pair},
  {-var_is_a_pair, -var_true}
};

static ATTRIBUTE_DEFINITION funky_types__inline_method_value_pair__attributes[] = {
  {-var_kind_of, -var_undefined},
  {var_simplify, -func_simplify_inline_pair},
  {-var_is_a_pair, -var_true}
};

static ATTRIBUTE_DEFINITION funky_types__statement__attributes[] = {
  {-var_is_a_definition, -var_false},
  {var_simplify, -func_funky_types__statement___simplify},
  {var_add_definitions, -func_funky_types__statement___add_definitions}
};

static ATTRIBUTE_DEFINITION funky_types__variable__attributes[] = {
  {var_simplify, -func_funky_types__variable___simplify}
};

static ATTRIBUTE_DEFINITION funky_types__attribute_access__attributes[] = {
  {var_simplify, -func_funky_types__attribute_access___simplify}
};

static ATTRIBUTE_DEFINITION funky_types__dummy_definition__attributes[] = {
  {var_simplify, -func_funky_types__dummy_definition___simplify}
};

static ATTRIBUTE_DEFINITION funky_types__parameter__attributes[] = {
  {var_simplify, -func_simplify_parameter},
  {var_add_definition, -func_add_parameter_definition}
};

static ATTRIBUTE_DEFINITION funky_types__inline_parameter__attributes[] = {
  {var_simplify, -func_simplify_parameter},
  {var_add_definition, -func_add_parameter_definition}
};

static ATTRIBUTE_DEFINITION funky_types__return__attributes[] = {
  {var_simplify, -func_funky_types__return___simplify}
};

static ATTRIBUTE_DEFINITION funky_types__redefinition__attributes[] = {
  {var_simplify, -func_funky_types__redefinition___simplify},
  {-var_is_an_input, -var_false},
  {-var_is_an_output, -var_true}
};

static ATTRIBUTE_DEFINITION funky_types__update__attributes[] = {
  {var_simplify, -func_funky_types__update___simplify},
  {-var_is_an_output, -var_true}
};

static ATTRIBUTE_DEFINITION funky_types__parenthesed_expression__attributes[] = {
  {var_simplify, -func_funky_types__parenthesed_expression___simplify}
};

static ATTRIBUTE_DEFINITION funky_types__expression__attributes[] = {
  {var_simplify, -func_funky_types__expression___simplify}
};

static ATTRIBUTE_DEFINITION funky_types__negation__attributes[] = {
  {var_simplify, -func_funky_types__negation___simplify}
};

static ATTRIBUTE_DEFINITION funky_types__return_expression__attributes[] = {
  {var_simplify, -func_simplify_return}
};

static ATTRIBUTE_DEFINITION funky_types__inline_return__attributes[] = {
  {var_simplify, -func_simplify_return}
};

static ATTRIBUTE_DEFINITION funky_types__inline_statement__attributes[] = {
  {var_simplify, -func_funky_types__inline_statement___simplify}
};

static ATTRIBUTE_DEFINITION funky_types__multiline_plus__attributes[] = {
  {var_simplify, -func_funky_types__multiline_plus___simplify}
};

static ATTRIBUTE_DEFINITION funky_types__multiline_minus__attributes[] = {
  {var_simplify, -func_funky_types__multiline_minus___simplify}
};

static ATTRIBUTE_DEFINITION funky_types__multiline_minus_with_remark__attributes[] = {
  {var_simplify, -func_funky_types__multiline_minus_with_remark___simplify}
};

static ATTRIBUTE_DEFINITION funky_types__multiline_times__attributes[] = {
  {var_simplify, -func_funky_types__multiline_times___simplify}
};

static ATTRIBUTE_DEFINITION funky_types__multiline_over__attributes[] = {
  {var_simplify, -func_funky_types__multiline_over___simplify}
};

static ATTRIBUTE_DEFINITION funky_types__multiline_over_with_remark__attributes[] = {
  {var_simplify, -func_funky_types__multiline_over_with_remark___simplify}
};

static ATTRIBUTE_DEFINITION funky_types__multiline_shift_left__attributes[] = {
  {var_simplify, -func_funky_types__multiline_shift_left___simplify}
};

static ATTRIBUTE_DEFINITION funky_types__multiline_shift_right__attributes[] = {
  {var_simplify, -func_funky_types__multiline_shift_right___simplify}
};

static ATTRIBUTE_DEFINITION funky_types__multiline_equal__attributes[] = {
  {var_simplify, -func_funky_types__multiline_equal___simplify}
};

static ATTRIBUTE_DEFINITION funky_types__multiline_not_equal__attributes[] = {
  {var_simplify, -func_funky_types__multiline_not_equal___simplify}
};

static ATTRIBUTE_DEFINITION funky_types__multiline_less_equal__attributes[] = {
  {var_simplify, -func_funky_types__multiline_less_equal___simplify}
};

static ATTRIBUTE_DEFINITION funky_types__multiline_less_than__attributes[] = {
  {var_simplify, -func_funky_types__multiline_less_than___simplify}
};

static ATTRIBUTE_DEFINITION funky_types__multiline_greater_equal__attributes[] = {
  {var_simplify, -func_funky_types__multiline_greater_equal___simplify}
};

static ATTRIBUTE_DEFINITION funky_types__multiline_greater_than__attributes[] = {
  {var_simplify, -func_funky_types__multiline_greater_than___simplify}
};

static ATTRIBUTE_DEFINITION funky_types__multiline_and__attributes[] = {
  {var_simplify, -func_funky_types__multiline_and___simplify}
};

static ATTRIBUTE_DEFINITION funky_types__multiline_or__attributes[] = {
  {var_simplify, -func_funky_types__multiline_or___simplify}
};

static ATTRIBUTE_DEFINITION funky_types__multiline_bit_and__attributes[] = {
  {var_simplify, -func_funky_types__multiline_bit_and___simplify}
};

static ATTRIBUTE_DEFINITION funky_types__multiline_bit_and_with_remark__attributes[] = {
  {var_simplify, -func_funky_types__multiline_bit_and_with_remark___simplify}
};

static ATTRIBUTE_DEFINITION funky_types__multiline_bit_or__attributes[] = {
  {var_simplify, -func_funky_types__multiline_bit_or___simplify}
};

static ATTRIBUTE_DEFINITION funky_types__multiline_bit_xor__attributes[] = {
  {var_simplify, -func_funky_types__multiline_bit_xor___simplify}
};

static ATTRIBUTE_DEFINITION funky_types__multiline_assign__attributes[] = {
  {var_simplify, -func_funky_types__multiline_assign___simplify}
};

static ATTRIBUTE_DEFINITION funky_types__inline_body__attributes[] = {
  {var_simplify, -func_funky_types__inline_body___simplify}
};

static ATTRIBUTE_DEFINITION funky_types__body__attributes[] = {
  {var_simplify, -func_funky_types__body___simplify}
};

static ATTRIBUTE_DEFINITION funky_types__numeric_literal__attributes[] = {
  {var_simplify, -func_funky_types__numeric_literal___simplify}
};

static ATTRIBUTE_DEFINITION funky_types__character_literal__attributes[] = {
  {var_simplify, -func_funky_types__character_literal___simplify}
};

static ATTRIBUTE_DEFINITION funky_types__numeric_character_literal__attributes[] = {
  {var_simplify, -func_funky_types__numeric_character_literal___simplify}
};

static ATTRIBUTE_DEFINITION funky_types__named_character_literal__attributes[] = {
  {var_simplify, -func_funky_types__named_character_literal___simplify}
};

static ATTRIBUTE_DEFINITION funky_types__at_character_literal__attributes[] = {
  {var_simplify, -func_funky_types__at_character_literal___simplify}
};

static ATTRIBUTE_DEFINITION funky_types__unique__attributes[] = {
  {var_simplify, -func_funky_types__unique___simplify}
};

static ATTRIBUTE_DEFINITION funky_types__string_literal__attributes[] = {
  {var_simplify, -func_funky_types__string_literal___simplify}
};

static ATTRIBUTE_DEFINITION std_types__list__attributes[] = {
  {var_simplify, -func_std_types__list___simplify}
};

static ATTRIBUTE_DEFINITION funky_types__statement_list__attributes[] = {
  {var_append, -func_funky_types__statement_list___append},
  {var_push_leading_statement, -func_funky_types__statement_list___push_leading_statement},
  {var_push_trailing_statement, -func_funky_types__statement_list___push_trailing_statement}
};

static ATTRIBUTE_DEFINITION funky_types__remark__attributes[] = {
  {-var_is_a_remark, -var_true}
};

static ATTRIBUTE_DEFINITION funky_types__multiline_remark__attributes[] = {
  {-var_is_a_remark, -var_true}
};

static FUNKY_VARIABLE variables_table[] = {
  {
    FOT_POLYMORPHIC, 0, 0,
    "simplify\000funky", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "assign\000std", NULL,
    {.position = POS(27, 1)}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "push_leading_statement\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "push_trailing_statement\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "kind_of\000funky", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "no_of\000funky", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "is_an_io_call\000funky", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "is_a_definition\000funky", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN, 0, 3,
    "functor\000funky_types", funky_types__functor__attributes,
    {.position = POS(39, 1)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "no_of\000", NULL,
    {.position = POS(39, 23)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "undefined\000", NULL,
    {.position = POS(39, 29)}
  },
  {
    FOT_UNKNOWN, 0, 7,
    "node\000funky_types", funky_types__node__attributes,
    {.position = POS(41, 1)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "is_an_io_call\000", NULL,
    {.position = POS(41, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "false\000", NULL,
    {.position = POS(41, 34)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "kind_of\000", NULL,
    {.position = POS(42, 23)}
  },
  {
    FOT_UNKNOWN, 0, 5,
    "definition\000funky_types", funky_types__definition__attributes,
    {.position = POS(43, 1)}
  },
  {
    FOT_UNKNOWN, 0, 2,
    "pair\000funky_types", funky_types__pair__attributes,
    {.position = POS(44, 1)}
  },
  {
    FOT_UNKNOWN, 0, 3,
    "inline_attribute_value_pair\000funky_types", funky_types__inline_attribute_value_pair__attributes,
    {.position = POS(45, 1)}
  },
  {
    FOT_UNKNOWN, 0, 3,
    "inline_method_value_pair\000funky_types", funky_types__inline_method_value_pair__attributes,
    {.position = POS(46, 1)}
  },
  {
    FOT_UNKNOWN, 0, 3,
    "statement\000funky_types", funky_types__statement__attributes,
    {.position = POS(48, 1)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "is_a_definition\000", NULL,
    {.position = POS(48, 25)}
  },
  {
    FOT_INITIALIZED, 0, 3,
    "statement_list\000funky_types", funky_types__statement_list__attributes,
    {.const_idx = -tuple_50_0}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_list\000", NULL,
    {.position = POS(50, 36)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "tuple\000", NULL,
    {.position = POS(50, 30)}
  },
  {
    FOT_DERIVED, 0, 0,
    "empty_statements\000funky", NULL,
    {"statement_list\000funky_types"}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "simplify_statement\000funky", NULL,
    {.const_idx = -func_funky__simplify_statement}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "simplify\000", NULL,
    {.position = POS(54, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "push\000", NULL,
    {.position = POS(56, 10)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "append\000", NULL,
    {.position = POS(56, 3)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "variable\000funky_types", funky_types__variable__attributes,
    {.position = POS(58, 1)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_statements\000", NULL,
    {.position = POS(60, 35)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "attribute_access\000funky_types", funky_types__attribute_access__attributes,
    {.position = POS(62, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "dummy_definition\000funky_types", funky_types__dummy_definition__attributes,
    {.position = POS(66, 1)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000std", NULL,
    {.position = POS(67, 25)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "69_33_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "69_38_temp_no\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "71_1_extensions\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "extensions_of\000", NULL,
    {.position = POS(71, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_empty\000", NULL,
    {.position = POS(73, 16)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if\000", NULL,
    {.position = POS(72, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "78_23_expression\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "78_45_temp_no\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "79_31_statements\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "81_3_extension\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "82_1_extension_node_type\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "node_type_of\000", NULL,
    {.position = POS(82, 28)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "FUNCTION_CALL\000", NULL,
    {.position = POS(92, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "REMARK_AND_MULTILINE_FUNCTION_CALL\000", NULL,
    {.position = POS(92, 24)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "sequence\000std", NULL,
    {.position = POS(92, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "ATTRIBUTE_ACCESS\000", NULL,
    {.position = POS(84, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "inc\000", NULL,
    {.position = POS(85, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "list\000", NULL,
    {.position = POS(89, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "next\000", NULL,
    {.position = POS(91, 11)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "93_1_arguments\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "arguments_of\000", NULL,
    {.position = POS(93, 22)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "length_of\000", NULL,
    {.position = POS(95, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "equal\000std", NULL,
    {.position = POS(95, 13)}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "is_a_pair\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "and\000std", NULL,
    {.position = POS(95, 13)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "107_8_remark_arguments\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "is_a_remark\000", NULL,
    {.position = POS(107, 51)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "filter\000", NULL,
    {.position = POS(107, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_not_empty\000", NULL,
    {.position = POS(113, 38)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "or\000std", NULL,
    {.position = POS(111, 21)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "IO_CALL\000", NULL,
    {.position = POS(123, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "true\000", NULL,
    {.position = POS(124, 37)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "case\000", NULL,
    {.position = POS(83, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "for_each\000", NULL,
    {.position = POS(80, 3)}
  },
  {
    FOT_UNKNOWN, 0, 2,
    "parameter\000funky_types", funky_types__parameter__attributes,
    {.position = POS(128, 1)}
  },
  {
    FOT_UNKNOWN, 0, 2,
    "inline_parameter\000funky_types", funky_types__inline_parameter__attributes,
    {.position = POS(129, 1)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "131_22_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "131_27_temp_no\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "option_of\000", NULL,
    {.position = POS(132, 18)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "132_35_statements\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "name_of\000funky", NULL,
    {.position = POS(133, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "resolve_variable\000", NULL,
    {.position = POS(142, 24)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "return\000funky_types", funky_types__return__attributes,
    {.position = POS(146, 1)}
  },
  {
    FOT_UNKNOWN, 0, 3,
    "redefinition\000funky_types", funky_types__redefinition__attributes,
    {.position = POS(149, 1)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "149_38_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "149_43_temp_no\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "151_1_extensions\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "157_1_result_temp_no\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "158_1_base\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "159_1_bases\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "160_31_statements\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "first\000", NULL,
    {.position = POS(161, 62)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "new\000", NULL,
    {.position = POS(161, 19)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "range\000", NULL,
    {.position = POS(162, 16)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "163_3_extension\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "167_1_remark_arguments\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "167_19_arguments\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "190_1_result\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "194_1_extension\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "pop\000", NULL,
    {.position = POS(195, 15)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "identifier_of\000", NULL,
    {.position = POS(198, 34)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "source_group_of\000", NULL,
    {.position = POS(201, 36)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "source_position_of\000", NULL,
    {.position = POS(202, 39)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "196_1_destination\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "key_of\000funky", NULL,
    {.position = POS(221, 42)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "expression_of\000", NULL,
    {.position = POS(222, 28)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "from_to_by\000", NULL,
    {.position = POS(192, 11)}
  },
  {
    FOT_UNKNOWN, 0, 2,
    "update\000funky_types", funky_types__update__attributes,
    {.position = POS(228, 1)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "228_32_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "228_37_temp_no\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "230_1_extensions\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "235_1_base\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "236_1_bases\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "237_31_statements\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "239_3_extension\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "243_1_remark_arguments\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "243_19_arguments\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "266_1_result\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "271_1_extension\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "273_1_destination\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 1,
    "parenthesed_expression\000funky_types", funky_types__parenthesed_expression__attributes,
    {.position = POS(308, 1)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "308_53_temp_no\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "309_30_expression\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "309_51_statements\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "310_1_calls\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "calls_of\000", NULL,
    {.position = POS(310, 10)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "318_30_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "318_35_temp_no\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "320_1_argument\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "argument_of\000", NULL,
    {.position = POS(320, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_a_list\000", NULL,
    {.position = POS(322, 14)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not\000", NULL,
    {.position = POS(323, 39)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "syntax_error\000", NULL,
    {.position = POS(329, 11)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "argument_of\000funky", NULL,
    {.position = POS(0, 0)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "expression_of\000funky", NULL,
    {.position = POS(342, 18)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "345_22_node\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "346_1_identifier\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "347_1_namespace\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "before\000", NULL,
    {.position = POS(347, 14)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "350_1_true_namespace\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "namespace_aliases\000", NULL,
    {.position = POS(350, 23)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_defined\000", NULL,
    {.position = POS(352, 24)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "from\000", NULL,
    {.position = POS(354, 40)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "DEFINITION\000", NULL,
    {.position = POS(362, 53)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not\000std", NULL,
    {.position = POS(362, 31)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "363_1_version\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "namespace_versions\000", NULL,
    {.position = POS(363, 18)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "373_1_resolved_identifier\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "LOCAL\000", NULL,
    {.position = POS(379, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "EXTERN\000", NULL,
    {.position = POS(380, 24)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "expression\000funky_types", funky_types__expression__attributes,
    {.position = POS(382, 1)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "382_36_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "382_41_temp_no\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "383_1_operator\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "operator_of\000", NULL,
    {.position = POS(383, 13)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "384_10_expression\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "384_51_statements\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 1,
    "negation\000funky_types", funky_types__negation__attributes,
    {.position = POS(390, 1)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "390_34_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "390_39_temp_no\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "391_10_expression\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "391_51_statements\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "NUMERIC_LITERAL\000", NULL,
    {.position = POS(393, 33)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "394_1_digits\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "digits_of\000", NULL,
    {.position = POS(394, 15)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "395_1_key\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "put\000", NULL,
    {.position = POS(399, 12)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "416_9_left\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "416_14_operator\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "416_23_temp_no\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "416_31_statements\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "417_1_operation\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "418_1_right\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "COMMA\000", NULL,
    {.position = POS(420, 5)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "423_24_sequence\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "423_33_rest\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "SEQUENCE_EXPRESSION\000", NULL,
    {.position = POS(425, 33)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "AND\000", NULL,
    {.position = POS(435, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "update_if\000", NULL,
    {.position = POS(436, 7)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "return_expression\000funky_types", funky_types__return_expression__attributes,
    {.position = POS(438, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "OR\000", NULL,
    {.position = POS(444, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "PLUS\000", NULL,
    {.position = POS(457, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "MINUS\000", NULL,
    {.position = POS(458, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "TIMES\000", NULL,
    {.position = POS(459, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "OVER\000", NULL,
    {.position = POS(460, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "EQUAL\000", NULL,
    {.position = POS(461, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "NOT_EQUAL\000", NULL,
    {.position = POS(462, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "LESS_THAN\000", NULL,
    {.position = POS(465, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "GREATER_THAN\000", NULL,
    {.position = POS(466, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "LESS_EQUAL\000", NULL,
    {.position = POS(467, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "GREATER_EQUAL\000", NULL,
    {.position = POS(470, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "RANGE\000", NULL,
    {.position = POS(473, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "KEY_VALUE\000", NULL,
    {.position = POS(474, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "SHIFT_LEFT\000", NULL,
    {.position = POS(475, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "SHIFT_RIGHT\000", NULL,
    {.position = POS(476, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "BIT_AND\000", NULL,
    {.position = POS(477, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "BIT_OR\000", NULL,
    {.position = POS(478, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "BIT_XOR\000", NULL,
    {.position = POS(479, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "NAMED_OPERATOR\000", NULL,
    {.position = POS(480, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "dump\000debug", NULL,
    {.position = POS(495, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "exit\000debug", NULL,
    {.position = POS(498, 11)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "inline_return\000funky_types", funky_types__inline_return__attributes,
    {.position = POS(521, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "body\000funky_types", funky_types__body__attributes,
    {.position = POS(525, 5)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "statements_of\000", NULL,
    {.position = POS(528, 8)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "inline_statement\000funky_types", funky_types__inline_statement__attributes,
    {.position = POS(537, 1)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "head_of\000", NULL,
    {.position = POS(542, 16)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "multiline_plus\000funky_types", funky_types__multiline_plus__attributes,
    {.position = POS(546, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "multiline_minus\000funky_types", funky_types__multiline_minus__attributes,
    {.position = POS(549, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "multiline_minus_with_remark\000funky_types", funky_types__multiline_minus_with_remark__attributes,
    {.position = POS(552, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "multiline_times\000funky_types", funky_types__multiline_times__attributes,
    {.position = POS(555, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "multiline_over\000funky_types", funky_types__multiline_over__attributes,
    {.position = POS(558, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "multiline_over_with_remark\000funky_types", funky_types__multiline_over_with_remark__attributes,
    {.position = POS(561, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "multiline_shift_left\000funky_types", funky_types__multiline_shift_left__attributes,
    {.position = POS(564, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "multiline_shift_right\000funky_types", funky_types__multiline_shift_right__attributes,
    {.position = POS(567, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "multiline_equal\000funky_types", funky_types__multiline_equal__attributes,
    {.position = POS(570, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "multiline_not_equal\000funky_types", funky_types__multiline_not_equal__attributes,
    {.position = POS(573, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "multiline_less_equal\000funky_types", funky_types__multiline_less_equal__attributes,
    {.position = POS(576, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "multiline_less_than\000funky_types", funky_types__multiline_less_than__attributes,
    {.position = POS(579, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "multiline_greater_equal\000funky_types", funky_types__multiline_greater_equal__attributes,
    {.position = POS(582, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "multiline_greater_than\000funky_types", funky_types__multiline_greater_than__attributes,
    {.position = POS(585, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "multiline_and\000funky_types", funky_types__multiline_and__attributes,
    {.position = POS(588, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "multiline_or\000funky_types", funky_types__multiline_or__attributes,
    {.position = POS(591, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "multiline_bit_and\000funky_types", funky_types__multiline_bit_and__attributes,
    {.position = POS(594, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "multiline_bit_and_with_remark\000funky_types", funky_types__multiline_bit_and_with_remark__attributes,
    {.position = POS(597, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "multiline_bit_or\000funky_types", funky_types__multiline_bit_or__attributes,
    {.position = POS(600, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "multiline_bit_xor\000funky_types", funky_types__multiline_bit_xor__attributes,
    {.position = POS(603, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "multiline_assign\000funky_types", funky_types__multiline_assign__attributes,
    {.position = POS(606, 1)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "611_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "612_0_temp_no\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "614_0_do_negate\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "615_0_do_swap\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "618_1_head\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "REMARK\000", NULL,
    {.position = POS(620, 72)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "619_1_arguments\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "621_23_left\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "621_38_statements\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "622_1_right\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "623_1_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "626_1_rest\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "640_1_idx\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "less\000std", NULL,
    {.position = POS(647, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "loop\000", NULL,
    {.position = POS(641, 7)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "inline_body\000funky_types", funky_types__inline_body__attributes,
    {.position = POS(677, 1)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "parameters_of\000", NULL,
    {.position = POS(680, 22)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "statement_of\000", NULL,
    {.position = POS(681, 21)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "687_30_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "687_35_temp_no\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "on_top_level\000", NULL,
    {.position = POS(688, 4)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "mangle_position\000", NULL,
    {.position = POS(689, 31)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "string\000std", NULL,
    {.position = POS(689, 23)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "693_1_statement\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "694_1_statements\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "all_of\000", NULL,
    {.position = POS(698, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "map_reduce\000", NULL,
    {.position = POS(708, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "any_of\000", NULL,
    {.position = POS(715, 25)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "718_20_body\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "719_1_statements\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "720_1_parameter_state\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "721_1_parameters\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "722_1_new_statements\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "724_3_idx\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "724_7_statement\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "MULTILINE_REMARK\000", NULL,
    {.position = POS(726, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "on\000", NULL,
    {.position = POS(727, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "OPEN_PARAMETERS\000", NULL,
    {.position = POS(730, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "parameter_of\000", NULL,
    {.position = POS(734, 27)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "CLOSE_PARAMETERS\000", NULL,
    {.position = POS(738, 9)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "764_35_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "764_40_temp_no\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "765_1_head\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "766_1_original_head\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "767_1_arguments\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "FUNCTOR\000", NULL,
    {.position = POS(769, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "RETURN\000", NULL,
    {.position = POS(771, 5)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "781_38_result_statements\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "782_1_new_arguments\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "784_3_item\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "BACKQUOTED\000", NULL,
    {.position = POS(792, 37)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "808_19_leading_statements\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "808_39_trailing_statements\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "809_1_node_type_of_first_argument\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "ATTRIBUTE_VALUE_PAIR\000", NULL,
    {.position = POS(814, 46)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "METHOD_VALUE_PAIR\000", NULL,
    {.position = POS(815, 46)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "TYPE_FUNCTION\000", NULL,
    {.position = POS(816, 46)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "810_1_is_a_slot_definition\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "822_1_last_statement\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "line_no_of\000", NULL,
    {.position = POS(825, 26)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "CONSTANT_COMPOUND\000", NULL,
    {.position = POS(830, 30)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "866_1_temp_name\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "867_1_value\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "869_3_stmt_idx\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "869_12_trailing_statement\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "871_3_arg_idx\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "871_11_argument\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "INLINE_ATTRIBUTE_VALUE_PAIR\000", NULL,
    {.position = POS(880, 21)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "print\000debug", NULL,
    {.position = POS(891, 15)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "is_an_output\000", NULL,
    {.position = POS(911, 36)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "911_1_argument\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "find_first\000", NULL,
    {.position = POS(911, 15)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "numeric_literal\000funky_types", funky_types__numeric_literal__attributes,
    {.position = POS(915, 1)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "delete_all\000", NULL,
    {.position = POS(916, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "to_string\000", NULL,
    {.position = POS(918, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "key_value_pair\000std", NULL,
    {.position = POS(920, 6)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "replace_all\000", NULL,
    {.position = POS(919, 3)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "character_literal\000funky_types", funky_types__character_literal__attributes,
    {.position = POS(927, 1)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "character_of\000", NULL,
    {.position = POS(930, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "to_integer\000", NULL,
    {.position = POS(930, 29)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "numeric_character_literal\000funky_types", funky_types__numeric_character_literal__attributes,
    {.position = POS(935, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "named_character_literal\000funky_types", funky_types__named_character_literal__attributes,
    {.position = POS(944, 1)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "944_49_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "944_54_temp_no\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "945_1_chr\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "character_from_name\000", NULL,
    {.position = POS(945, 8)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "at_character_literal\000funky_types", funky_types__at_character_literal__attributes,
    {.position = POS(955, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "unique\000funky_types", funky_types__unique__attributes,
    {.position = POS(969, 1)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "line_text_of\000", NULL,
    {.position = POS(971, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "truncate_from\000", NULL,
    {.position = POS(971, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "mangle_identifier\000", NULL,
    {.position = POS(975, 29)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "string_literal\000funky_types", funky_types__string_literal__attributes,
    {.position = POS(979, 1)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "979_40_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "979_45_temp_no\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "980_1_arguments\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "981_1_characters\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "982_1_statements\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "983_1_components\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "components_of\000", NULL,
    {.position = POS(983, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "character_sequence\000funky_types", NULL,
    {.position = POS(987, 7)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "characters_of\000", NULL,
    {.position = POS(988, 10)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "996_3_idx\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "996_7_component\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "CHARACTER_SEQUENCE\000", NULL,
    {.position = POS(998, 13)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "999_1_component_characters\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "minus\000std", NULL,
    {.position = POS(1004, 45)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "trim_left\000", NULL,
    {.position = POS(1005, 22)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "NUMERIC_CHARACTER\000", NULL,
    {.position = POS(1008, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "character\000", NULL,
    {.position = POS(1009, 32)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "NAMED_CHARACTER\000", NULL,
    {.position = POS(1011, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_undefined\000", NULL,
    {.position = POS(1013, 28)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "NEWLINE\000", NULL,
    {.position = POS(1017, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "AT_CHARACTER\000", NULL,
    {.position = POS(1020, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "ESCAPE_EXPRESSION\000", NULL,
    {.position = POS(1023, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "TAGGED_EMPTY_CHARACTER\000", NULL,
    {.position = POS(1030, 13)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "list\000std_types", std_types__list__attributes,
    {.position = POS(1076, 1)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1076_33_temp_no\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1077_1_statements\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1078_1_simplified_nodes\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "BUILTIN\000", NULL,
    {.position = POS(1109, 16)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "TEMPORARY\000", NULL,
    {.position = POS(1119, 16)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1143_20_head\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1143_25_arguments\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1146_1_node_type\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1170_1_expanded\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1172_3_argument\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1192_23_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1193_1_level\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1194_1_within_string\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1195_15_idx\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "dec\000", NULL,
    {.position = POS(1210, 11)}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "add_definition\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "add_definitions\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1254_42_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1255_1_identifier\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "allow_hidden\000", NULL,
    {.position = POS(1256, 10)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "mangle_local_definition\000", NULL,
    {.position = POS(1258, 33)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "mangle_local_definition\000funky", NULL,
    {.const_idx = -func_funky__mangle_local_definition}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "mangle_position\000funky", NULL,
    {.const_idx = -func_funky__mangle_position}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "second\000", NULL,
    {.position = POS(1274, 14)}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "is_a_remark\000funky", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "remark\000funky_types", funky_types__remark__attributes,
    {.position = POS(1284, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "multiline_remark\000funky_types", funky_types__multiline_remark__attributes,
    {.position = POS(1285, 1)}
  },
  {
    FOT_DERIVED, 0, 0,
    "on_top_level\000funky", NULL,
    {"true\000"}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "is_an_input\000funky", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "is_an_output\000funky", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "is_an_input\000", NULL,
    {.position = POS(1298, 20)}
  }
};

static FUNKY_NAMESPACE used_namespaces[] = {
  {"std", 1, 0},
  {"funky", 1, 0}
};

FUNKY_MODULE module__simplify = {
  "_simplify", // module name
  "simplify.fky", // module filename
  .major_version = 0,
  .minor_version = 0,
  .feature_flags = FEAT_POSITIONS,
  .marker = 0,
  0, // number of required modules
  0, // number of defined namespaces
  2, // number of used namespaces
  358, // number of constants
  368, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  constants_table,
  variables_table,
};
