#include <stddef.h>
#include <stdint.h>

#include "runtime/common.h"
#include "runtime/builtins.h"
#include "runtime/fko.h"
#include "runtime/memory.h"

enum {
  tuple_53_0 = -1,
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
  str_Missing_statemen = -190,
  lambda_61 = -191,
  lambda_62 = -192,
  lambda_63 = -193,
  lambda_64 = -194,
  str_unexpected_state = -195,
  func_simplify_statements = -196,
  lambda_65 = -197,
  func_check_statements = -198,
  lambda_66 = -199,
  lambda_MULTILINE_REMARK = -200,
  lambda_67 = -201,
  str_Closing_parenthe = -202,
  lambda_OPEN_PARAMETERS = -203,
  lambda_68 = -204,
  lambda_69 = -205,
  str_Unexpected_openi = -206,
  lambda_CLOSE_PARAMETERS = -207,
  lambda_70 = -208,
  lambda_71 = -209,
  str_Unexpected_closi = -210,
  lambda_72 = -211,
  lambda_73 = -212,
  lambda_74 = -213,
  lambda_75 = -214,
  str_Return_statement = -215,
  lambda_76 = -216,
  lambda_77 = -217,
  lambda_78 = -218,
  lambda_79 = -219,
  func_funky_types__statement___simplify = -220,
  lambda_FUNCTOR = -221,
  lambda_RETURN = -222,
  lambda_80 = -223,
  func_simplify_head_and_arguments = -224,
  lambda_81 = -225,
  lambda_82 = -226,
  lambda_83 = -227,
  lambda_84 = -228,
  lambda_85 = -229,
  lambda_86 = -230,
  lambda_87 = -231,
  str_Missing_argument = -232,
  lambda_88 = -233,
  str_Too_many_argumen = -234,
  lambda_is_an_assignment = -235,
  lambda_89 = -236,
  lambda_90 = -237,
  lambda_91 = -238,
  lambda_92 = -239,
  lambda_is_a_slot_definition = -240,
  str_const = -241,
  lambda_93 = -242,
  func_check_trailing_statements = -243,
  lambda_94 = -244,
  str_stdassign = -245,
  lambda_95 = -246,
  func_process_trailing_statements = -247,
  lambda_96 = -248,
  lambda_97 = -249,
  lambda_2_FUNCTOR = -250,
  lambda_98 = -251,
  lambda_INLINE_ATTRIBUTE_VALUE_PAIR = -252,
  lambda_99 = -253,
  lambda_100 = -254,
  str_TEMP_NOT_FOUND_I = -255,
  lambda_101 = -256,
  lambda_102 = -257,
  lambda_103 = -258,
  func_check_that_all_arguments_are_inputs = -259,
  lambda_104 = -260,
  str_Unexpected_outpu = -261,
  func_funky_types__numeric_literal___simplify = -262,
  chr_39 = -263,
  chr_46 = -264,
  string_2 = -265,
  key_value_pair_933_1 = -266,
  key_value_pair_934_1 = -267,
  str_num = -268,
  func_funky_types__character_literal___simplify = -269,
  func_funky_types__numeric_character_literal___simplify = -270,
  str_chr = -271,
  func_funky_types__named_character_literal___simplify = -272,
  lambda_105 = -273,
  lambda_106 = -274,
  str_Invalid_characte = -275,
  func_funky_types__at_character_literal___simplify = -276,
  string_3 = -277,
  func_create_numeric_character_literal = -278,
  func_funky_types__unique___simplify = -279,
  chr_32 = -280,
  str_uni = -281,
  func_funky_types__string_literal___simplify = -282,
  string_4 = -283,
  lambda_107 = -284,
  str_string = -285,
  lambda_108 = -286,
  lambda_109 = -287,
  lambda_CHARACTER_SEQUENCE = -288,
  lambda_110 = -289,
  lambda_111 = -290,
  lambda_112 = -291,
  lambda_NUMERIC_CHARACTER = -292,
  lambda_NAMED_CHARACTER = -293,
  lambda_113 = -294,
  lambda_NEWLINE = -295,
  chr_10 = -296,
  lambda_AT_CHARACTER = -297,
  chr_64 = -298,
  lambda_ESCAPE_EXPRESSION = -299,
  lambda_TAGGED_EMPTY_CHARACTER = -300,
  lambda_114 = -301,
  str_node_type_ofcomp = -302,
  lambda_115 = -303,
  lambda_116 = -304,
  lambda_117 = -305,
  lambda_118 = -306,
  str_stdstring = -307,
  func_add_characters = -308,
  lambda_119 = -309,
  lambda_120 = -310,
  str_string_2 = -311,
  func_std_types__list___simplify = -312,
  lambda_121 = -313,
  lambda_122 = -314,
  func_create_functor = -315,
  func_std = -316,
  str_std = -317,
  func_assign_attributes = -318,
  str__assign_attribut = -319,
  func_temporary = -320,
  str__temp = -321,
  func_redefine_temporary = -322,
  func_update_temporary = -323,
  func_create_statement = -324,
  lambda_arguments_is_not_empty = -325,
  lambda_123 = -326,
  lambda_124 = -327,
  lambda_125 = -328,
  lambda_126 = -329,
  func_expand_backquotes = -330,
  lambda_127 = -331,
  lambda_128 = -332,
  lambda_129 = -333,
  lambda_130 = -334,
  func_resolve_backquoted = -335,
  func_exctract_characters = -336,
  lambda_131 = -337,
  lambda_nl = -338,
  lambda_132 = -339,
  lambda_133 = -340,
  lambda_134 = -341,
  chr_34 = -342,
  lambda_quot = -343,
  chr_40 = -344,
  lambda_135 = -345,
  chr_41 = -346,
  lambda_136 = -347,
  func_funky_types__statement_list___append = -348,
  func_funky_types__statement_list___push_leading_statement = -349,
  func_funky_types__statement_list___push_trailing_statement = -350,
  func_collect_parameter_definitions = -351,
  lambda_137 = -352,
  func_collect_local_definitions = -353,
  lambda_138 = -354,
  func_funky_types__node___add_definitions = -355,
  func_funky_types__statement___add_definitions = -356,
  func_funky_types__node___add_definition = -357,
  func_funky_types__definition___add_definition = -358,
  lambda_139 = -359,
  lambda_140 = -360,
  str_Variable_is_alre = -361,
  func_add_parameter_definition = -362,
  func_funky__mangle_local_definition = -363,
  func_funky__mangle_position = -364
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
  var_funky__is_a_dummy_definition, // attribute
  var_funky_types__functor, // extern
  var_no_of, // extern polymorphic
  var_undefined, // extern
  var_funky_types__definition, // extern
  var_is_a_dummy_definition, // extern polymorphic
  var_false, // extern
  var_funky_types__redefinition, // extern
  var_funky_types__node, // extern
  var_is_an_io_call, // extern polymorphic
  var_kind_of, // extern polymorphic
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
  var_true, // extern
  var_75_33_self, // dynamic
  var_75_38_temp_no, // dynamic
  var_77_1_extensions, // dynamic
  var_extensions_of, // extern polymorphic
  var_is_empty, // extern
  var_if, // extern
  var_84_23_expression, // dynamic
  var_84_45_temp_no, // dynamic
  var_85_31_statements, // dynamic
  var_87_3_extension, // dynamic
  var_88_1_extension_node_type, // dynamic
  var_node_type_of, // extern
  var_FUNCTION_CALL, // extern
  var_REMARK_AND_MULTILINE_FUNCTION_CALL, // extern
  var_std__sequence, // extern
  var_ATTRIBUTE_ACCESS, // extern
  var_inc, // extern
  var_list, // extern
  var_next, // extern
  var_99_1_arguments, // dynamic
  var_arguments_of, // extern polymorphic
  var_length_of, // extern
  var_std__equal, // extern
  var_is_a_pair, // attribute
  var_std__and, // extern
  var_113_8_remark_arguments, // dynamic
  var_is_a_remark, // extern polymorphic
  var_filter, // extern
  var_is_not_empty, // extern
  var_std__or, // extern
  var_IO_CALL, // extern
  var_case, // extern
  var_for_each, // extern
  var_funky_types__parameter, // extern
  var_funky_types__inline_parameter, // extern
  var_137_22_self, // dynamic
  var_137_27_temp_no, // dynamic
  var_option_of, // extern polymorphic
  var_138_35_statements, // dynamic
  var_funky__name_of, // extern polymorphic
  var_resolve_variable, // extern
  var_funky_types__return, // extern
  var_155_38_self, // dynamic
  var_155_43_temp_no, // dynamic
  var_157_1_extensions, // dynamic
  var_163_1_result_temp_no, // dynamic
  var_164_1_base, // dynamic
  var_165_1_bases, // dynamic
  var_166_31_statements, // dynamic
  var_first, // extern
  var_new, // extern
  var_range, // extern
  var_169_3_extension, // dynamic
  var_173_1_remark_arguments, // dynamic
  var_173_19_arguments, // dynamic
  var_196_1_result, // dynamic
  var_200_1_extension, // dynamic
  var_pop, // extern
  var_identifier_of, // extern polymorphic
  var_source_group_of, // extern polymorphic
  var_source_position_of, // extern polymorphic
  var_202_1_destination, // dynamic
  var_funky__key_of, // extern polymorphic
  var_expression_of, // extern polymorphic
  var_from_to_by, // extern
  var_funky_types__update, // extern
  var_234_32_self, // dynamic
  var_234_37_temp_no, // dynamic
  var_236_1_extensions, // dynamic
  var_241_1_base, // dynamic
  var_242_1_bases, // dynamic
  var_243_31_statements, // dynamic
  var_245_3_extension, // dynamic
  var_249_1_remark_arguments, // dynamic
  var_249_19_arguments, // dynamic
  var_272_1_result, // dynamic
  var_277_1_extension, // dynamic
  var_279_1_destination, // dynamic
  var_funky_types__parenthesed_expression, // extern
  var_315_53_temp_no, // dynamic
  var_316_30_expression, // dynamic
  var_316_51_statements, // dynamic
  var_317_1_calls, // dynamic
  var_calls_of, // extern
  var_325_30_self, // dynamic
  var_325_35_temp_no, // dynamic
  var_327_1_argument, // dynamic
  var_argument_of, // extern polymorphic
  var_is_a_list, // extern
  var_not, // extern
  var_syntax_error, // extern
  var_funky__argument_of, // extern polymorphic
  var_funky__expression_of, // extern polymorphic
  var_352_22_node, // dynamic
  var_353_1_identifier, // dynamic
  var_354_1_namespace, // dynamic
  var_before, // extern
  var_357_1_true_namespace, // dynamic
  var_namespace_aliases, // extern
  var_is_defined, // extern
  var_from, // extern
  var_DEFINITION, // extern
  var_std__not, // extern
  var_370_1_version, // dynamic
  var_namespace_versions, // extern
  var_380_1_resolved_identifier, // dynamic
  var_LOCAL, // extern
  var_EXTERN, // extern
  var_funky_types__expression, // extern
  var_389_36_self, // dynamic
  var_389_41_temp_no, // dynamic
  var_390_1_operator, // dynamic
  var_operator_of, // extern
  var_391_10_expression, // dynamic
  var_391_51_statements, // dynamic
  var_funky_types__negation, // extern
  var_397_34_self, // dynamic
  var_397_39_temp_no, // dynamic
  var_398_10_expression, // dynamic
  var_398_51_statements, // dynamic
  var_NUMERIC_LITERAL, // extern
  var_401_1_digits, // dynamic
  var_digits_of, // extern polymorphic
  var_402_1_key, // dynamic
  var_put, // extern
  var_423_9_left, // dynamic
  var_423_14_operator, // dynamic
  var_423_23_temp_no, // dynamic
  var_423_31_statements, // dynamic
  var_424_1_operation, // dynamic
  var_425_1_right, // dynamic
  var_COMMA, // extern
  var_430_24_sequence, // dynamic
  var_430_33_rest, // dynamic
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
  var_618_0_self, // dynamic
  var_619_0_temp_no, // dynamic
  var_621_0_do_negate, // dynamic
  var_622_0_do_swap, // dynamic
  var_625_1_head, // dynamic
  var_REMARK, // extern
  var_626_1_arguments, // dynamic
  var_628_23_left, // dynamic
  var_628_38_statements, // dynamic
  var_629_1_right, // dynamic
  var_630_1_n, // dynamic
  var_633_1_rest, // dynamic
  var_647_1_idx, // dynamic
  var_std__less, // extern
  var_loop, // extern
  var_funky_types__inline_body, // extern
  var_parameters_of, // extern polymorphic
  var_statement_of, // extern polymorphic
  var_694_30_self, // dynamic
  var_694_35_temp_no, // dynamic
  var_on_top_level, // extern
  var_mangle_position, // extern
  var_std__string, // extern
  var_700_1_statement, // dynamic
  var_701_1_statements, // dynamic
  var_is_undefined, // extern
  var_on, // extern
  var_all_of, // extern
  var_map_reduce, // extern
  var_any_of, // extern
  var_727_20_body, // dynamic
  var_728_1_statements, // dynamic
  var_729_1_parameter_state, // dynamic
  var_730_1_parameters, // dynamic
  var_731_1_new_statements, // dynamic
  var_732_1_n, // dynamic
  var_734_3_idx, // dynamic
  var_734_7_statement, // dynamic
  var_MULTILINE_REMARK, // extern
  var_OPEN_PARAMETERS, // extern
  var_parameter_of, // extern
  var_CLOSE_PARAMETERS, // extern
  var_RETURN, // extern
  var_777_35_self, // dynamic
  var_777_40_temp_no, // dynamic
  var_778_1_head, // dynamic
  var_779_1_original_head, // dynamic
  var_780_1_arguments, // dynamic
  var_FUNCTOR, // extern
  var_794_38_result_statements, // dynamic
  var_795_1_new_arguments, // dynamic
  var_797_3_item, // dynamic
  var_BACKQUOTED, // extern
  var_821_19_leading_statements, // dynamic
  var_821_39_trailing_statements, // dynamic
  var_822_1_node_type_of_first_argument, // dynamic
  var_ATTRIBUTE_VALUE_PAIR, // extern
  var_METHOD_VALUE_PAIR, // extern
  var_TYPE_FUNCTION, // extern
  var_823_1_is_a_slot_definition, // dynamic
  var_835_1_last_statement, // dynamic
  var_line_no_of, // extern
  var_CONSTANT_COMPOUND, // extern
  var_879_1_temp_name, // dynamic
  var_880_1_value, // dynamic
  var_882_3_stmt_idx, // dynamic
  var_882_12_trailing_statement, // dynamic
  var_884_3_arg_idx, // dynamic
  var_884_11_argument, // dynamic
  var_INLINE_ATTRIBUTE_VALUE_PAIR, // extern
  var_debug__print, // extern
  var_is_an_output, // extern polymorphic
  var_924_1_argument, // dynamic
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
  var_957_49_self, // dynamic
  var_957_54_temp_no, // dynamic
  var_958_1_chr, // dynamic
  var_character_from_name, // extern
  var_funky_types__at_character_literal, // extern
  var_funky_types__unique, // extern
  var_line_text_of, // extern
  var_truncate_from, // extern
  var_mangle_identifier, // extern
  var_funky_types__string_literal, // extern
  var_992_40_self, // dynamic
  var_992_45_temp_no, // dynamic
  var_993_1_arguments, // dynamic
  var_994_1_characters, // dynamic
  var_995_1_statements, // dynamic
  var_996_1_components, // dynamic
  var_components_of, // extern
  var_funky_types__character_sequence, // extern
  var_characters_of, // extern polymorphic
  var_1009_3_idx, // dynamic
  var_1009_7_component, // dynamic
  var_CHARACTER_SEQUENCE, // extern
  var_1012_1_component_characters, // dynamic
  var_std__minus, // extern
  var_trim_left, // extern
  var_NUMERIC_CHARACTER, // extern
  var_character, // extern
  var_NAMED_CHARACTER, // extern
  var_NEWLINE, // extern
  var_AT_CHARACTER, // extern
  var_ESCAPE_EXPRESSION, // extern
  var_TAGGED_EMPTY_CHARACTER, // extern
  var_std_types__list, // extern
  var_1089_33_temp_no, // dynamic
  var_1090_1_statements, // dynamic
  var_1091_1_simplified_nodes, // dynamic
  var_BUILTIN, // extern
  var_TEMPORARY, // extern
  var_1156_20_head, // dynamic
  var_1156_25_arguments, // dynamic
  var_1159_1_node_type, // dynamic
  var_1183_1_expanded, // dynamic
  var_1185_3_argument, // dynamic
  var_1205_23_str, // dynamic
  var_1206_1_level, // dynamic
  var_1207_1_within_string, // dynamic
  var_1208_15_idx, // dynamic
  var_dec, // extern
  var_add_definition, // attribute
  var_add_definitions, // attribute
  var_1267_42_self, // dynamic
  var_1268_1_identifier, // dynamic
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
  LOCAL(2), // 56_29_statement
  // simplify &statement 0 $_temp_no $generated_statements
  var_simplify, 2, LOCAL(2), num_0, 3, LOCAL(2), LOCAL(1), LOCAL(3),
  // generated_statements $leading_statements $trailing_statements
  LOCAL(3), 0, 2, LOCAL(4), LOCAL(5),
  // push(leading_statements statement) trailing_statements
  var_push, 2, LOCAL(4), LOCAL(2), 1, LOCAL(1),
  // append push(leading_statements statement) trailing_statements
  var_append, 2, LOCAL(1), LOCAL(5), TAIL_CALL,
  POS(57, 3),
  POS(58, 3),
  POS(59, 10),
  POS(59, 3)
};

static TAB_NUM t_func_funky_types__variable___simplify[] = {
  3, // locals
  2, // parameters
  LOCAL(2), // 61_34_self
  LOCAL(3), // 61_39_temp_no
  // resolve_identifier &self
  func_resolve_identifier, 1, LOCAL(2), 1, LOCAL(2),
  // create_functor(self) temp_no empty_statements
  func_create_functor, 1, LOCAL(2), 1, LOCAL(1),
  // -> create_functor(self) temp_no empty_statements
  LET, 3, LOCAL(1), LOCAL(3), var_empty_statements, TAIL_CALL,
  POS(62, 3),
  POS(63, 6),
  POS(63, 3)
};

static TAB_NUM t_func_funky_types__attribute_access___simplify[] = {
  2, // locals
  2, // parameters
  LOCAL(1), // 65_42_self
  LOCAL(2), // 65_47_temp_no
  // resolve_identifier &self
  func_resolve_identifier, 1, LOCAL(1), 1, LOCAL(1),
  // -> self temp_no empty_statements
  LET, 3, LOCAL(1), LOCAL(2), var_empty_statements, TAIL_CALL,
  POS(66, 3),
  POS(67, 3)
};

static TAB_NUM t_func_funky_types__dummy_definition___simplify[] = {
  5, // locals
  2, // parameters
  LOCAL(4), // 69_42_self
  LOCAL(5), // 69_47_temp_no
  // temp_no+1 self)(.is_a_dummy_definition true)
  var_std__plus, 2, LOCAL(5), num_1, 1, LOCAL(1),
  // redefine_temporary(temp_no+1 self)(.is_a_dummy_definition true)
  func_redefine_temporary, 2, LOCAL(1), LOCAL(4), 1, LOCAL(2),
  // .is_a_dummy_definition true)
  LET, -1, LOCAL(2), var_is_a_dummy_definition, var_true, LOCAL(3),
  // ->
  LET, 3, LOCAL(3), LOCAL(5), var_empty_statements, TAIL_CALL,
  POS(71, 24),
  POS(71, 5),
  POS(71, 40),
  POS(70, 3)
};

static TAB_NUM t_func_funky_types__functor___simplify[] = {
  1, // locals
  2, // parameters
  var_75_33_self,
  var_75_38_temp_no,
  // resolve_identifier &self
  func_resolve_identifier, 1, var_75_33_self, 1, var_75_33_self,
  // $extensions extensions_of(self)
  var_extensions_of, 1, var_75_33_self, 1, var_77_1_extensions,
  // is_empty
  var_is_empty, 1, var_77_1_extensions, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1, lambda_2, TAIL_CALL,
  POS(76, 3),
  POS(77, 3),
  POS(79, 16),
  POS(78, 3)
};

static TAB_NUM t_lambda_1[] = {
  0, // locals
  0, // parameters
  //  self temp_no empty_statements
  LET, 3, var_75_33_self, var_75_38_temp_no, var_empty_statements, TAIL_CALL,
  POS(80, 7)
};

static TAB_NUM t_lambda_2[] = {
  1, // locals
  0, // parameters
  // .extensions_of empty_list) extensions temp_no
  LET, -1, var_75_33_self, var_extensions_of, var_empty_list, LOCAL(1),
  // simplify_extensions self(.extensions_of empty_list) extensions temp_no
  func_simplify_extensions, 3, LOCAL(1), var_77_1_extensions, var_75_38_temp_no, TAIL_CALL,
  POS(82, 32),
  POS(82, 7)
};

static TAB_NUM t_func_simplify_extensions[] = {
  1, // locals
  3, // parameters
  var_84_23_expression,
  LOCAL(1), // 84_34_extensions
  var_84_45_temp_no,
  // simplify &extensions &temp_no $statements
  var_simplify, 2, LOCAL(1), var_84_45_temp_no, 3, LOCAL(1), var_84_45_temp_no, var_85_31_statements,
  // for_each extensions
  var_for_each, 3, LOCAL(1), lambda_3, lambda_11, TAIL_CALL,
  POS(85, 3),
  POS(86, 3)
};

static TAB_NUM t_lambda_3[] = {
  1, // locals
  1, // parameters
  var_87_3_extension,
  // $extension_node_type node_type_of(extension)
  var_node_type_of, 1, var_87_3_extension, 1, var_88_1_extension_node_type,
  // FUNCTION_CALL, REMARK_AND_MULTILINE_FUNCTION_CALL:
  var_std__sequence, 2, var_FUNCTION_CALL, var_REMARK_AND_MULTILINE_FUNCTION_CALL, 1, LOCAL(1),
  // case extension_node_type
  var_case, 7, var_88_1_extension_node_type, var_ATTRIBUTE_ACCESS, lambda_ATTRIBUTE_ACCESS, LOCAL(1), lambda_4, var_IO_CALL, lambda_IO_CALL, TAIL_CALL,
  POS(88, 7),
  POS(98, 9),
  POS(89, 7)
};

static TAB_NUM t_lambda_ATTRIBUTE_ACCESS[] = {
  4, // locals
  0, // parameters
  // inc &temp_no
  var_inc, 1, var_84_45_temp_no, 1, var_84_45_temp_no,
  // create_functor(extension)
  func_create_functor, 1, var_87_3_extension, 1, LOCAL(1),
  // redefine_temporary(temp_no extension))
  func_redefine_temporary, 2, var_84_45_temp_no, var_87_3_extension, 1, LOCAL(2),
  // list(expression redefine_temporary(temp_no extension))
  var_list, 2, var_84_23_expression, LOCAL(2), 1, LOCAL(3),
  // create_statement
  func_create_statement, 2, LOCAL(1), LOCAL(3), 1, LOCAL(4),
  // push_leading_statement &statements
  var_push_leading_statement, 2, var_85_31_statements, LOCAL(4), 1, var_85_31_statements,
  // !expression temporary(temp_no extension)
  func_temporary, 2, var_84_45_temp_no, var_87_3_extension, 1, var_84_23_expression,
  // next
  var_next, 0, TAIL_CALL,
  POS(91, 11),
  POS(94, 15),
  POS(95, 31),
  POS(95, 15),
  POS(93, 13),
  POS(92, 11),
  POS(96, 11),
  POS(97, 11)
};

static TAB_NUM t_lambda_4[] = {
  3, // locals
  0, // parameters
  // $arguments arguments_of(extension)
  var_arguments_of, 1, var_87_3_extension, 1, var_99_1_arguments,
  // length_of(arguments) == 1 && arguments(1).is_a_pair:
  var_length_of, 1, var_99_1_arguments, 1, LOCAL(1),
  // length_of(arguments) == 1 && arguments(1).is_a_pair:
  var_std__equal, 2, LOCAL(1), num_1, 1, LOCAL(2),
  // length_of(arguments) == 1 && arguments(1).is_a_pair:
  var_std__and, 2, LOCAL(2), lambda_5, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_6, lambda_7, TAIL_CALL,
  POS(99, 11),
  POS(101, 13),
  POS(101, 13),
  POS(101, 13),
  POS(100, 11)
};

static TAB_NUM t_lambda_5[] = {
  2, // locals
  0, // parameters
  // arguments(1).is_a_pair:
  var_99_1_arguments, 1, num_1, 1, LOCAL(1),
  // is_a_pair:
  var_is_a_pair, 1, LOCAL(1), 1, LOCAL(2),
  // arguments(1).is_a_pair:
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(101, 42),
  POS(101, 55),
  POS(101, 42)
};

static TAB_NUM t_lambda_6[] = {
  5, // locals
  0, // parameters
  // inc &temp_no
  var_inc, 1, var_84_45_temp_no, 1, var_84_45_temp_no,
  // assign_attributes(extension)
  func_assign_attributes, 1, var_87_3_extension, 1, LOCAL(1),
  // arguments(1)
  var_99_1_arguments, 1, num_1, 1, LOCAL(2),
  // redefine_temporary(temp_no extension)
  func_redefine_temporary, 2, var_84_45_temp_no, var_87_3_extension, 1, LOCAL(3),
  // list
  var_list, 3, var_84_23_expression, LOCAL(2), LOCAL(3), 1, LOCAL(4),
  // create_statement
  func_create_statement, 2, LOCAL(1), LOCAL(4), 1, LOCAL(5),
  // push_leading_statement &statements
  var_push_leading_statement, 2, var_85_31_statements, LOCAL(5), 1, var_85_31_statements,
  // !expression temporary(temp_no expression)
  func_temporary, 2, var_84_45_temp_no, var_84_23_expression, 1, var_84_23_expression,
  // next
  var_next, 0, TAIL_CALL,
  POS(102, 15),
  POS(105, 19),
  POS(108, 21),
  POS(109, 21),
  POS(106, 19),
  POS(104, 17),
  POS(103, 15),
  POS(110, 15),
  POS(111, 15)
};

static TAB_NUM t_lambda_7[] = {
  2, // locals
  0, // parameters
  // filter $remark_arguments &arguments is_a_remark
  var_filter, 2, var_99_1_arguments, var_is_a_remark, 2, var_113_8_remark_arguments, var_99_1_arguments,
  // is_empty
  var_is_empty, 1, var_99_1_arguments, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_8, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), var_next, lambda_10, TAIL_CALL,
  POS(113, 15),
  POS(116, 29),
  POS(115, 19),
  POS(114, 15)
};

static TAB_NUM t_lambda_8[] = {
  2, // locals
  0, // parameters
  // extension_node_type == REMARK_AND_MULTILINE_FUNCTION_CALL
  var_std__equal, 2, var_88_1_extension_node_type, var_REMARK_AND_MULTILINE_FUNCTION_CALL, 1, LOCAL(1),
  // 
  var_std__or, 2, LOCAL(1), lambda_9, 1, LOCAL(2),
  // 
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(118, 21),
  POS(117, 21),
  POS(117, 21)
};

static TAB_NUM t_lambda_9[] = {
  1, // locals
  0, // parameters
  // is_not_empty
  var_is_not_empty, 1, var_113_8_remark_arguments, 1, LOCAL(1),
  // remark_arguments.is_not_empty
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(119, 38),
  POS(119, 21)
};

static TAB_NUM t_lambda_10[] = {
  3, // locals
  0, // parameters
  // inc &temp_no
  var_inc, 1, var_84_45_temp_no, 1, var_84_45_temp_no,
  // redefine_temporary(temp_no expression))
  func_redefine_temporary, 2, var_84_45_temp_no, var_84_23_expression, 1, LOCAL(1),
  // push(arguments redefine_temporary(temp_no expression))
  var_push, 2, var_99_1_arguments, LOCAL(1), 1, LOCAL(2),
  // create_statement
  func_create_statement, 2, var_84_23_expression, LOCAL(2), 1, LOCAL(3),
  // push_leading_statement &statements
  var_push_leading_statement, 2, var_85_31_statements, LOCAL(3), 1, var_85_31_statements,
  // !expression temporary(temp_no expression)
  func_temporary, 2, var_84_45_temp_no, var_84_23_expression, 1, var_84_23_expression,
  // next
  var_next, 0, TAIL_CALL,
  POS(122, 19),
  POS(126, 38),
  POS(126, 23),
  POS(124, 21),
  POS(123, 19),
  POS(127, 19),
  POS(128, 19)
};

static TAB_NUM t_lambda_IO_CALL[] = {
  0, // locals
  0, // parameters
  // expression.is_an_io_call true
  LET, -1, var_84_23_expression, var_is_an_io_call, var_true, var_84_23_expression,
  // next
  var_next, 0, TAIL_CALL,
  POS(130, 12),
  POS(131, 11)
};

static TAB_NUM t_lambda_11[] = {
  0, // locals
  0, // parameters
  //  expression temp_no statements
  LET, 3, var_84_23_expression, var_84_45_temp_no, var_85_31_statements, TAIL_CALL,
  POS(132, 7)
};

static TAB_NUM t_func_simplify_parameter[] = {
  3, // locals
  2, // parameters
  var_137_22_self,
  var_137_27_temp_no,
  // option_of &temp_no $statements
  var_option_of, 1, var_137_22_self, 1, LOCAL(1),
  // simplify &self.option_of &temp_no $statements
  var_simplify, 2, LOCAL(1), var_137_27_temp_no, 3, LOCAL(1), var_137_27_temp_no, var_138_35_statements,
  // self.option_of &temp_no $statements
  LET, -1, var_137_22_self, var_option_of, LOCAL(1), var_137_22_self,
  // $name funky::name_of(self)
  var_funky__name_of, 1, var_137_22_self, 1, LOCAL(3),
  // name(1) == '_'
  LOCAL(3), 1, num_1, 1, LOCAL(1),
  // name(1) == '_'
  var_std__equal, 2, LOCAL(1), chr_95, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_12, lambda_13, TAIL_CALL,
  POS(138, 18),
  POS(138, 3),
  POS(138, 13),
  POS(139, 3),
  POS(141, 5),
  POS(141, 5),
  POS(140, 3)
};

static TAB_NUM t_lambda_12[] = {
  4, // locals
  0, // parameters
  // temp_no+1 self)(.option_of option_of(self))
  var_std__plus, 2, var_137_27_temp_no, num_1, 1, LOCAL(1),
  // option_of(self))
  var_option_of, 1, var_137_22_self, 1, LOCAL(2),
  // redefine_temporary(temp_no+1 self)(.option_of option_of(self))
  func_redefine_temporary, 2, LOCAL(1), var_137_22_self, 1, LOCAL(3),
  // .option_of option_of(self))
  LET, -1, LOCAL(3), var_option_of, LOCAL(2), LOCAL(4),
  // 
  LET, 3, LOCAL(4), var_137_27_temp_no, var_empty_statements, TAIL_CALL,
  POS(143, 26),
  POS(143, 53),
  POS(143, 7),
  POS(143, 42),
  POS(142, 7)
};

static TAB_NUM t_lambda_13[] = {
  3, // locals
  0, // parameters
  // funky::name_of(self))
  var_funky__name_of, 1, var_137_22_self, 1, LOCAL(1),
  // resolve_variable(funky::name_of(self))
  var_resolve_variable, 1, LOCAL(1), 1, LOCAL(2),
  // self
  LET, -1, var_137_22_self, var_funky__name_of, LOCAL(2), LOCAL(3),
  // 
  LET, 3, LOCAL(3), var_137_27_temp_no, var_138_35_statements, TAIL_CALL,
  POS(148, 41),
  POS(148, 24),
  POS(147, 7),
  POS(146, 7)
};

static TAB_NUM t_func_funky_types__return___simplify[] = {
  3, // locals
  2, // parameters
  LOCAL(2), // 152_32_self
  LOCAL(3), // 152_37_temp_no
  // std("assign" self) temp_no empty_statements
  func_std, 2, str_assign, LOCAL(2), 1, LOCAL(1),
  // -> std("assign" self) temp_no empty_statements
  LET, 3, LOCAL(1), LOCAL(3), var_empty_statements, TAIL_CALL,
  POS(153, 6),
  POS(153, 3)
};

static TAB_NUM t_func_funky_types__redefinition___simplify[] = {
  1, // locals
  2, // parameters
  var_155_38_self,
  var_155_43_temp_no,
  // resolve_identifier &self
  func_resolve_identifier, 1, var_155_38_self, 1, var_155_38_self,
  // $extensions extensions_of(self)
  var_extensions_of, 1, var_155_38_self, 1, var_157_1_extensions,
  // is_empty
  var_is_empty, 1, var_157_1_extensions, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_14, lambda_15, TAIL_CALL,
  POS(156, 3),
  POS(157, 3),
  POS(159, 16),
  POS(158, 3)
};

static TAB_NUM t_lambda_14[] = {
  0, // locals
  0, // parameters
  //  self temp_no empty_statements
  LET, 3, var_155_38_self, var_155_43_temp_no, var_empty_statements, TAIL_CALL,
  POS(160, 7)
};

static TAB_NUM t_lambda_15[] = {
  1, // locals
  0, // parameters
  // inc &temp_no
  var_inc, 1, var_155_43_temp_no, 1, var_155_43_temp_no,
  // $result_temp_no temp_no
  LET, 1, var_155_43_temp_no, 1, var_163_1_result_temp_no,
  // $base create_functor(self)
  func_create_functor, 1, var_155_38_self, 1, var_164_1_base,
  // $bases list(base)
  var_list, 1, var_164_1_base, 1, var_165_1_bases,
  // simplify &extensions &temp_no $statements
  var_simplify, 2, var_157_1_extensions, var_155_43_temp_no, 3, var_157_1_extensions, var_155_43_temp_no, var_166_31_statements,
  // first(statements))
  var_first, 1, var_166_31_statements, 1, LOCAL(1),
  // !statements new(funky_types::statement_list empty_list first(statements))
  var_new, 3, var_funky_types__statement_list, var_empty_list, LOCAL(1), 1, var_166_31_statements,
  // range(extensions 1 -2)
  var_range, 3, var_157_1_extensions, num_1, minus_num_2, 1, LOCAL(1),
  // for_each range(extensions 1 -2)
  var_for_each, 3, LOCAL(1), lambda_16, lambda_19, TAIL_CALL,
  POS(162, 7),
  POS(163, 7),
  POS(164, 7),
  POS(165, 7),
  POS(166, 7),
  POS(167, 62),
  POS(167, 7),
  POS(168, 16),
  POS(168, 7)
};

static TAB_NUM t_lambda_16[] = {
  1, // locals
  1, // parameters
  var_169_3_extension,
  // node_type_of(extension)
  var_node_type_of, 1, var_169_3_extension, 1, LOCAL(1),
  // case node_type_of(extension)
  var_case, 5, LOCAL(1), var_FUNCTION_CALL, lambda_FUNCTION_CALL, var_ATTRIBUTE_ACCESS, lambda_2_ATTRIBUTE_ACCESS, TAIL_CALL,
  POS(170, 16),
  POS(170, 11)
};

static TAB_NUM t_lambda_FUNCTION_CALL[] = {
  2, // locals
  0, // parameters
  // arguments_of(extension) is_a_remark
  var_arguments_of, 1, var_169_3_extension, 1, LOCAL(1),
  // filter arguments_of(extension) is_a_remark
  var_filter, 2, LOCAL(1), var_is_a_remark, 2, var_173_1_remark_arguments, var_173_19_arguments,
  // is_empty && remark_arguments.is_not_empty
  var_is_empty, 1, var_173_19_arguments, 1, LOCAL(1),
  // is_empty && remark_arguments.is_not_empty
  var_std__and, 2, LOCAL(1), lambda_17, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), var_next, lambda_18, TAIL_CALL,
  POS(172, 22),
  POS(172, 15),
  POS(175, 27),
  POS(175, 27),
  POS(174, 15)
};

static TAB_NUM t_lambda_17[] = {
  1, // locals
  0, // parameters
  // is_not_empty
  var_is_not_empty, 1, var_173_1_remark_arguments, 1, LOCAL(1),
  // remark_arguments.is_not_empty
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(175, 56),
  POS(175, 39)
};

static TAB_NUM t_lambda_18[] = {
  3, // locals
  0, // parameters
  // inc &temp_no
  var_inc, 1, var_155_43_temp_no, 1, var_155_43_temp_no,
  // redefine_temporary(temp_no base))
  func_redefine_temporary, 2, var_155_43_temp_no, var_164_1_base, 1, LOCAL(1),
  // push(arguments redefine_temporary(temp_no base))
  var_push, 2, var_173_19_arguments, LOCAL(1), 1, LOCAL(2),
  // create_statement
  func_create_statement, 2, var_164_1_base, LOCAL(2), 1, LOCAL(3),
  // push_trailing_statement &statements
  var_push_trailing_statement, 2, var_166_31_statements, LOCAL(3), 1, var_166_31_statements,
  // !base temporary(temp_no base)
  func_temporary, 2, var_155_43_temp_no, var_164_1_base, 1, var_164_1_base,
  // push &bases base
  var_push, 2, var_165_1_bases, var_164_1_base, 1, var_165_1_bases,
  // next
  var_next, 0, TAIL_CALL,
  POS(178, 19),
  POS(182, 38),
  POS(182, 23),
  POS(180, 21),
  POS(179, 19),
  POS(183, 19),
  POS(184, 19),
  POS(185, 19)
};

static TAB_NUM t_lambda_2_ATTRIBUTE_ACCESS[] = {
  4, // locals
  0, // parameters
  // inc &temp_no
  var_inc, 1, var_155_43_temp_no, 1, var_155_43_temp_no,
  // create_functor(extension)
  func_create_functor, 1, var_169_3_extension, 1, LOCAL(1),
  // redefine_temporary(temp_no extension))
  func_redefine_temporary, 2, var_155_43_temp_no, var_169_3_extension, 1, LOCAL(2),
  // list(base redefine_temporary(temp_no extension))
  var_list, 2, var_164_1_base, LOCAL(2), 1, LOCAL(3),
  // create_statement
  func_create_statement, 2, LOCAL(1), LOCAL(3), 1, LOCAL(4),
  // push_trailing_statement &statements
  var_push_trailing_statement, 2, var_166_31_statements, LOCAL(4), 1, var_166_31_statements,
  // !base temporary(temp_no extension)
  func_temporary, 2, var_155_43_temp_no, var_169_3_extension, 1, var_164_1_base,
  // push &bases base
  var_push, 2, var_165_1_bases, var_164_1_base, 1, var_165_1_bases,
  // next
  var_next, 0, TAIL_CALL,
  POS(187, 15),
  POS(190, 19),
  POS(191, 29),
  POS(191, 19),
  POS(189, 17),
  POS(188, 15),
  POS(192, 15),
  POS(193, 15),
  POS(194, 15)
};

static TAB_NUM t_lambda_19[] = {
  1, // locals
  0, // parameters
  // $result temporary(result_temp_no self)
  func_temporary, 2, var_163_1_result_temp_no, var_155_38_self, 1, var_196_1_result,
  // $n length_of(extensions)
  var_length_of, 1, var_157_1_extensions, 1, LOCAL(1),
  // from_to_by n 1 -1
  var_from_to_by, 5, LOCAL(1), num_1, minus_num_1, lambda_20, lambda_21, TAIL_CALL,
  POS(196, 11),
  POS(197, 11),
  POS(198, 11)
};

static TAB_NUM t_lambda_20[] = {
  6, // locals
  1, // parameters
  LOCAL(6), // 199_3_idx
  // $extension extensions(idx)
  var_157_1_extensions, 1, LOCAL(6), 1, var_200_1_extension,
  // pop &bases !base
  var_pop, 1, var_165_1_bases, 2, var_165_1_bases, var_164_1_base,
  // identifier_of(base)
  var_identifier_of, 1, var_164_1_base, 1, LOCAL(1),
  // kind_of(base)
  var_kind_of, 1, var_164_1_base, 1, LOCAL(2),
  // no_of(base)
  var_no_of, 1, var_164_1_base, 1, LOCAL(3),
  // source_group_of(base)
  var_source_group_of, 1, var_164_1_base, 1, LOCAL(4),
  // source_position_of(base)
  var_source_position_of, 1, var_164_1_base, 1, LOCAL(5),
  // $destination
  LET, -5, var_funky_types__redefinition, var_identifier_of, LOCAL(1), var_kind_of, LOCAL(2), var_no_of, LOCAL(3), var_source_group_of, LOCAL(4), var_source_position_of, LOCAL(5), var_202_1_destination,
  // node_type_of(extension)
  var_node_type_of, 1, var_200_1_extension, 1, LOCAL(1),
  // case node_type_of(extension)
  var_case, 5, LOCAL(1), var_FUNCTION_CALL, lambda_2_FUNCTION_CALL, var_ATTRIBUTE_ACCESS, lambda_3_ATTRIBUTE_ACCESS, TAIL_CALL,
  POS(200, 15),
  POS(201, 15),
  POS(204, 34),
  POS(205, 28),
  POS(206, 26),
  POS(207, 36),
  POS(208, 39),
  POS(202, 15),
  POS(209, 20),
  POS(209, 15)
};

static TAB_NUM t_lambda_2_FUNCTION_CALL[] = {
  4, // locals
  0, // parameters
  // $arguments arguments_of(extension)
  var_arguments_of, 1, var_200_1_extension, 1, LOCAL(4),
  // push(arguments result) destination)
  var_push, 2, LOCAL(4), var_196_1_result, 1, LOCAL(1),
  // push(push(arguments result) destination)
  var_push, 2, LOCAL(1), var_202_1_destination, 1, LOCAL(2),
  // create_statement
  func_create_statement, 2, var_164_1_base, LOCAL(2), 1, LOCAL(3),
  // push_trailing_statement &statements
  var_push_trailing_statement, 2, var_166_31_statements, LOCAL(3), 1, var_166_31_statements,
  // !result base
  LET, 1, var_164_1_base, 1, var_196_1_result,
  // next
  var_next, 0, TAIL_CALL,
  POS(211, 19),
  POS(215, 28),
  POS(215, 23),
  POS(213, 21),
  POS(212, 19),
  POS(216, 19),
  POS(217, 19)
};

static TAB_NUM t_lambda_3_ATTRIBUTE_ACCESS[] = {
  7, // locals
  0, // parameters
  // assign_attributes(base)
  func_assign_attributes, 1, var_164_1_base, 1, LOCAL(1),
  // identifier_of(extension)
  var_identifier_of, 1, var_200_1_extension, 1, LOCAL(2),
  // kind_of(extension)
  var_kind_of, 1, var_200_1_extension, 1, LOCAL(3),
  // funky::key_of(extension)
  var_funky__key_of, 1, var_200_1_extension, 1, LOCAL(4),
  // funky_types::inline_attribute_value_pair
  LET, -4, var_funky_types__inline_attribute_value_pair, var_identifier_of, LOCAL(2), var_kind_of, LOCAL(3), var_funky__key_of, LOCAL(4), var_expression_of, var_196_1_result, LOCAL(5),
  // list
  var_list, 3, var_164_1_base, LOCAL(5), var_202_1_destination, 1, LOCAL(6),
  // create_statement
  func_create_statement, 2, LOCAL(1), LOCAL(6), 1, LOCAL(7),
  // push_trailing_statement &statements
  var_push_trailing_statement, 2, var_166_31_statements, LOCAL(7), 1, var_166_31_statements,
  // !result base
  LET, 1, var_164_1_base, 1, var_196_1_result,
  // next
  var_next, 0, TAIL_CALL,
  POS(221, 23),
  POS(225, 42),
  POS(226, 36),
  POS(227, 42),
  POS(224, 25),
  POS(222, 23),
  POS(220, 21),
  POS(219, 19),
  POS(230, 19),
  POS(231, 19)
};

static TAB_NUM t_lambda_21[] = {
  1, // locals
  0, // parameters
  // redefine_temporary(result_temp_no self) temp_no statements
  func_redefine_temporary, 2, var_163_1_result_temp_no, var_155_38_self, 1, LOCAL(1),
  //  redefine_temporary(result_temp_no self) temp_no statements
  LET, 3, LOCAL(1), var_155_43_temp_no, var_166_31_statements, TAIL_CALL,
  POS(232, 16),
  POS(232, 15)
};

static TAB_NUM t_func_funky_types__update___simplify[] = {
  1, // locals
  2, // parameters
  var_234_32_self,
  var_234_37_temp_no,
  // resolve_identifier &self
  func_resolve_identifier, 1, var_234_32_self, 1, var_234_32_self,
  // $extensions extensions_of(self)
  var_extensions_of, 1, var_234_32_self, 1, var_236_1_extensions,
  // is_empty
  var_is_empty, 1, var_236_1_extensions, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_22, lambda_23, TAIL_CALL,
  POS(235, 3),
  POS(236, 3),
  POS(238, 16),
  POS(237, 3)
};

static TAB_NUM t_lambda_22[] = {
  0, // locals
  0, // parameters
  //  self temp_no empty_statements
  LET, 3, var_234_32_self, var_234_37_temp_no, var_empty_statements, TAIL_CALL,
  POS(239, 7)
};

static TAB_NUM t_lambda_23[] = {
  0, // locals
  0, // parameters
  // $base create_functor(self)
  func_create_functor, 1, var_234_32_self, 1, var_241_1_base,
  // $bases list(base)
  var_list, 1, var_241_1_base, 1, var_242_1_bases,
  // simplify &extensions &temp_no $statements
  var_simplify, 2, var_236_1_extensions, var_234_37_temp_no, 3, var_236_1_extensions, var_234_37_temp_no, var_243_31_statements,
  // for_each extensions
  var_for_each, 3, var_236_1_extensions, lambda_24, lambda_27, TAIL_CALL,
  POS(241, 7),
  POS(242, 7),
  POS(243, 7),
  POS(244, 7)
};

static TAB_NUM t_lambda_24[] = {
  1, // locals
  1, // parameters
  var_245_3_extension,
  // node_type_of(extension)
  var_node_type_of, 1, var_245_3_extension, 1, LOCAL(1),
  // case node_type_of(extension)
  var_case, 5, LOCAL(1), var_FUNCTION_CALL, lambda_3_FUNCTION_CALL, var_ATTRIBUTE_ACCESS, lambda_4_ATTRIBUTE_ACCESS, TAIL_CALL,
  POS(246, 16),
  POS(246, 11)
};

static TAB_NUM t_lambda_3_FUNCTION_CALL[] = {
  2, // locals
  0, // parameters
  // arguments_of(extension) is_a_remark
  var_arguments_of, 1, var_245_3_extension, 1, LOCAL(1),
  // filter arguments_of(extension) is_a_remark
  var_filter, 2, LOCAL(1), var_is_a_remark, 2, var_249_1_remark_arguments, var_249_19_arguments,
  // is_empty && remark_arguments.is_not_empty
  var_is_empty, 1, var_249_19_arguments, 1, LOCAL(1),
  // is_empty && remark_arguments.is_not_empty
  var_std__and, 2, LOCAL(1), lambda_25, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), var_next, lambda_26, TAIL_CALL,
  POS(248, 22),
  POS(248, 15),
  POS(251, 27),
  POS(251, 27),
  POS(250, 15)
};

static TAB_NUM t_lambda_25[] = {
  1, // locals
  0, // parameters
  // is_not_empty
  var_is_not_empty, 1, var_249_1_remark_arguments, 1, LOCAL(1),
  // remark_arguments.is_not_empty
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(251, 56),
  POS(251, 39)
};

static TAB_NUM t_lambda_26[] = {
  3, // locals
  0, // parameters
  // inc &temp_no
  var_inc, 1, var_234_37_temp_no, 1, var_234_37_temp_no,
  // redefine_temporary(temp_no base))
  func_redefine_temporary, 2, var_234_37_temp_no, var_241_1_base, 1, LOCAL(1),
  // push(arguments redefine_temporary(temp_no base))
  var_push, 2, var_249_19_arguments, LOCAL(1), 1, LOCAL(2),
  // create_statement
  func_create_statement, 2, var_241_1_base, LOCAL(2), 1, LOCAL(3),
  // push_leading_statement &statements
  var_push_leading_statement, 2, var_243_31_statements, LOCAL(3), 1, var_243_31_statements,
  // !base temporary(temp_no base)
  func_temporary, 2, var_234_37_temp_no, var_241_1_base, 1, var_241_1_base,
  // push &bases base
  var_push, 2, var_242_1_bases, var_241_1_base, 1, var_242_1_bases,
  // next
  var_next, 0, TAIL_CALL,
  POS(254, 19),
  POS(258, 38),
  POS(258, 23),
  POS(256, 21),
  POS(255, 19),
  POS(259, 19),
  POS(260, 19),
  POS(261, 19)
};

static TAB_NUM t_lambda_4_ATTRIBUTE_ACCESS[] = {
  4, // locals
  0, // parameters
  // inc &temp_no
  var_inc, 1, var_234_37_temp_no, 1, var_234_37_temp_no,
  // create_functor(extension)
  func_create_functor, 1, var_245_3_extension, 1, LOCAL(1),
  // redefine_temporary(temp_no extension))
  func_redefine_temporary, 2, var_234_37_temp_no, var_245_3_extension, 1, LOCAL(2),
  // list(base redefine_temporary(temp_no extension))
  var_list, 2, var_241_1_base, LOCAL(2), 1, LOCAL(3),
  // create_statement
  func_create_statement, 2, LOCAL(1), LOCAL(3), 1, LOCAL(4),
  // push_leading_statement &statements
  var_push_leading_statement, 2, var_243_31_statements, LOCAL(4), 1, var_243_31_statements,
  // !base temporary(temp_no extension)
  func_temporary, 2, var_234_37_temp_no, var_245_3_extension, 1, var_241_1_base,
  // push &bases base
  var_push, 2, var_242_1_bases, var_241_1_base, 1, var_242_1_bases,
  // next
  var_next, 0, TAIL_CALL,
  POS(263, 15),
  POS(266, 19),
  POS(267, 29),
  POS(267, 19),
  POS(265, 17),
  POS(264, 15),
  POS(268, 15),
  POS(269, 15),
  POS(270, 15)
};

static TAB_NUM t_lambda_27[] = {
  1, // locals
  0, // parameters
  // $result temporary(temp_no self)
  func_temporary, 2, var_234_37_temp_no, var_234_32_self, 1, var_272_1_result,
  // range &bases 1 -2
  var_range, 3, var_242_1_bases, num_1, minus_num_2, 1, var_242_1_bases,
  // $n length_of(extensions)
  var_length_of, 1, var_236_1_extensions, 1, LOCAL(1),
  // from_to_by n 1 -1
  var_from_to_by, 5, LOCAL(1), num_1, minus_num_1, lambda_28, lambda_29, TAIL_CALL,
  POS(272, 11),
  POS(273, 11),
  POS(274, 11),
  POS(275, 11)
};

static TAB_NUM t_lambda_28[] = {
  6, // locals
  1, // parameters
  LOCAL(6), // 276_3_idx
  // $extension extensions(idx)
  var_236_1_extensions, 1, LOCAL(6), 1, var_277_1_extension,
  // pop &bases !base
  var_pop, 1, var_242_1_bases, 2, var_242_1_bases, var_241_1_base,
  // identifier_of(base)
  var_identifier_of, 1, var_241_1_base, 1, LOCAL(1),
  // kind_of(base)
  var_kind_of, 1, var_241_1_base, 1, LOCAL(2),
  // no_of(base)
  var_no_of, 1, var_241_1_base, 1, LOCAL(3),
  // source_group_of(base)
  var_source_group_of, 1, var_241_1_base, 1, LOCAL(4),
  // source_position_of(base)
  var_source_position_of, 1, var_241_1_base, 1, LOCAL(5),
  // $destination
  LET, -5, var_funky_types__redefinition, var_identifier_of, LOCAL(1), var_kind_of, LOCAL(2), var_no_of, LOCAL(3), var_source_group_of, LOCAL(4), var_source_position_of, LOCAL(5), var_279_1_destination,
  // node_type_of(extension)
  var_node_type_of, 1, var_277_1_extension, 1, LOCAL(1),
  // case node_type_of(extension)
  var_case, 5, LOCAL(1), var_FUNCTION_CALL, lambda_4_FUNCTION_CALL, var_ATTRIBUTE_ACCESS, lambda_5_ATTRIBUTE_ACCESS, TAIL_CALL,
  POS(277, 15),
  POS(278, 15),
  POS(281, 34),
  POS(282, 28),
  POS(283, 26),
  POS(284, 36),
  POS(285, 39),
  POS(279, 15),
  POS(286, 20),
  POS(286, 15)
};

static TAB_NUM t_lambda_4_FUNCTION_CALL[] = {
  4, // locals
  0, // parameters
  // $arguments arguments_of(extension)
  var_arguments_of, 1, var_277_1_extension, 1, LOCAL(4),
  // push(arguments result) destination)
  var_push, 2, LOCAL(4), var_272_1_result, 1, LOCAL(1),
  // push(push(arguments result) destination)
  var_push, 2, LOCAL(1), var_279_1_destination, 1, LOCAL(2),
  // create_statement
  func_create_statement, 2, var_241_1_base, LOCAL(2), 1, LOCAL(3),
  // push_trailing_statement &statements
  var_push_trailing_statement, 2, var_243_31_statements, LOCAL(3), 1, var_243_31_statements,
  // !result base
  LET, 1, var_241_1_base, 1, var_272_1_result,
  // next
  var_next, 0, TAIL_CALL,
  POS(288, 19),
  POS(292, 28),
  POS(292, 23),
  POS(290, 21),
  POS(289, 19),
  POS(293, 19),
  POS(294, 19)
};

static TAB_NUM t_lambda_5_ATTRIBUTE_ACCESS[] = {
  7, // locals
  0, // parameters
  // assign_attributes(base)
  func_assign_attributes, 1, var_241_1_base, 1, LOCAL(1),
  // identifier_of(extension)
  var_identifier_of, 1, var_277_1_extension, 1, LOCAL(2),
  // kind_of(extension)
  var_kind_of, 1, var_277_1_extension, 1, LOCAL(3),
  // funky::key_of(extension)
  var_funky__key_of, 1, var_277_1_extension, 1, LOCAL(4),
  // funky_types::inline_attribute_value_pair
  LET, -4, var_funky_types__inline_attribute_value_pair, var_identifier_of, LOCAL(2), var_kind_of, LOCAL(3), var_funky__key_of, LOCAL(4), var_expression_of, var_272_1_result, LOCAL(5),
  // list
  var_list, 3, var_241_1_base, LOCAL(5), var_279_1_destination, 1, LOCAL(6),
  // create_statement
  func_create_statement, 2, LOCAL(1), LOCAL(6), 1, LOCAL(7),
  // push_trailing_statement &statements
  var_push_trailing_statement, 2, var_243_31_statements, LOCAL(7), 1, var_243_31_statements,
  // !result base
  LET, 1, var_241_1_base, 1, var_272_1_result,
  // next
  var_next, 0, TAIL_CALL,
  POS(298, 23),
  POS(302, 42),
  POS(303, 36),
  POS(304, 42),
  POS(301, 25),
  POS(299, 23),
  POS(297, 21),
  POS(296, 19),
  POS(307, 19),
  POS(308, 19)
};

static TAB_NUM t_lambda_29[] = {
  1, // locals
  0, // parameters
  // update_temporary(temp_no self) temp_no statements
  func_update_temporary, 2, var_234_37_temp_no, var_234_32_self, 1, LOCAL(1),
  //  update_temporary(temp_no self) temp_no statements
  LET, 3, LOCAL(1), var_234_37_temp_no, var_243_31_statements, TAIL_CALL,
  POS(309, 16),
  POS(309, 15)
};

static TAB_NUM t_func_funky_types__definition___simplify[] = {
  2, // locals
  2, // parameters
  LOCAL(1), // 311_36_self
  LOCAL(2), // 311_41_temp_no
  // resolve_identifier &self
  func_resolve_identifier, 1, LOCAL(1), 1, LOCAL(1),
  // -> self temp_no empty_statements
  LET, 3, LOCAL(1), LOCAL(2), var_empty_statements, TAIL_CALL,
  POS(312, 3),
  POS(313, 3)
};

static TAB_NUM t_func_funky_types__parenthesed_expression___simplify[] = {
  2, // locals
  2, // parameters
  LOCAL(2), // 315_48_self
  var_315_53_temp_no,
  // expression_of(self) $expression &temp_no $statements
  var_expression_of, 1, LOCAL(2), 1, LOCAL(1),
  // simplify expression_of(self) $expression &temp_no $statements
  var_simplify, 2, LOCAL(1), var_315_53_temp_no, 3, var_316_30_expression, var_315_53_temp_no, var_316_51_statements,
  // $calls calls_of(self)
  var_calls_of, 1, LOCAL(2), 1, var_317_1_calls,
  // is_empty
  var_is_empty, 1, var_317_1_calls, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_30, lambda_31, TAIL_CALL,
  POS(316, 12),
  POS(316, 3),
  POS(317, 3),
  POS(319, 11),
  POS(318, 3)
};

static TAB_NUM t_lambda_30[] = {
  0, // locals
  0, // parameters
  //  expression temp_no statements
  LET, 3, var_316_30_expression, var_315_53_temp_no, var_316_51_statements, TAIL_CALL,
  POS(320, 7)
};

static TAB_NUM t_lambda_31[] = {
  2, // locals
  0, // parameters
  // simplify_extensions &expression calls &temp_no $extension_statements
  func_simplify_extensions, 3, var_316_30_expression, var_317_1_calls, var_315_53_temp_no, 3, var_316_30_expression, var_315_53_temp_no, LOCAL(2),
  // append(statements extension_statements)
  var_append, 2, var_316_51_statements, LOCAL(2), 1, LOCAL(1),
  // -> expression temp_no append(statements extension_statements)
  LET, 3, var_316_30_expression, var_315_53_temp_no, LOCAL(1), TAIL_CALL,
  POS(322, 7),
  POS(323, 29),
  POS(323, 7)
};

static TAB_NUM t_func_funky_types__pair___simplify[] = {
  1, // locals
  2, // parameters
  var_325_30_self,
  var_325_35_temp_no,
  // resolve_identifier &self
  func_resolve_identifier, 1, var_325_30_self, 1, var_325_30_self,
  // $argument argument_of(self)
  var_argument_of, 1, var_325_30_self, 1, var_327_1_argument,
  // is_a_list:
  var_is_a_list, 1, var_327_1_argument, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_argument_is_a_list, lambda_35, TAIL_CALL,
  POS(326, 3),
  POS(327, 3),
  POS(329, 14),
  POS(328, 3)
};

static TAB_NUM t_lambda_argument_is_a_list[] = {
  2, // locals
  0, // parameters
  // filter &argument: (argument) -> not(argument.is_a_remark)
  var_filter, 2, var_327_1_argument, lambda_32, 1, var_327_1_argument,
  // length_of(argument) == 1:
  var_length_of, 1, var_327_1_argument, 1, LOCAL(1),
  // length_of(argument) == 1:
  var_std__equal, 2, LOCAL(1), num_1, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_33, lambda_34, TAIL_CALL,
  POS(330, 7),
  POS(332, 9),
  POS(332, 9),
  POS(331, 7)
};

static TAB_NUM t_lambda_32[] = {
  3, // locals
  1, // parameters
  LOCAL(3), // 330_19_argument
  // is_a_remark)
  var_is_a_remark, 1, LOCAL(3), 1, LOCAL(1),
  // not(argument.is_a_remark)
  var_not, 1, LOCAL(1), 1, LOCAL(2),
  // -> not(argument.is_a_remark)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(330, 52),
  POS(330, 39),
  POS(330, 36)
};

static TAB_NUM t_lambda_33[] = {
  0, // locals
  0, // parameters
  // !argument argument(1)
  var_327_1_argument, 1, num_1, 1, var_327_1_argument,
  // simplify_argument
  func_simplify_argument, 0, TAIL_CALL,
  POS(333, 11),
  POS(334, 11)
};

static TAB_NUM t_lambda_34[] = {
  1, // locals
  0, // parameters
  // argument(2)
  var_327_1_argument, 1, num_2, 1, LOCAL(1),
  // syntax_error "too many arguments" argument(2)
  var_syntax_error, 2, str_too_many_argumen, LOCAL(1), TAIL_CALL,
  POS(336, 45),
  POS(336, 11)
};

static TAB_NUM t_lambda_35[] = {
  0, // locals
  0, // parameters
  // simplify_argument
  func_simplify_argument, 0, TAIL_CALL,
  POS(338, 7)
};

static TAB_NUM t_func_simplify_argument[] = {
  2, // locals
  0, // parameters
  // simplify argument !self.funky::argument_of &temp_no $result_statements
  var_simplify, 2, var_327_1_argument, var_325_35_temp_no, 3, LOCAL(1), var_325_35_temp_no, LOCAL(2),
  // self.funky::argument_of &temp_no $result_statements
  LET, -1, var_325_30_self, var_funky__argument_of, LOCAL(1), var_325_30_self,
  // -> self temp_no result_statements
  LET, 3, var_325_30_self, var_325_35_temp_no, LOCAL(2), TAIL_CALL,
  POS(341, 5),
  POS(341, 24),
  POS(342, 5)
};

static TAB_NUM t_func_simplify_inline_pair[] = {
  4, // locals
  2, // parameters
  LOCAL(2), // 347_24_self
  LOCAL(3), // 347_29_temp_no
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
  POS(348, 3),
  POS(349, 18),
  POS(349, 3),
  POS(349, 13),
  POS(350, 3)
};

static TAB_NUM t_func_resolve_identifier[] = {
  1, // locals
  1, // parameters
  var_352_22_node,
  // $identifier identifier_of(node)
  var_identifier_of, 1, var_352_22_node, 1, var_353_1_identifier,
  // $namespace identifier .before. ':'
  var_before, 2, var_353_1_identifier, chr_58, 1, var_354_1_namespace,
  // is_not_empty:
  var_is_not_empty, 1, var_354_1_namespace, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_namespace_is_not_empty, func_resolve, TAIL_CALL,
  POS(353, 3),
  POS(354, 3),
  POS(356, 15),
  POS(355, 3)
};

static TAB_NUM t_lambda_namespace_is_not_empty[] = {
  1, // locals
  0, // parameters
  // $true_namespace namespace_aliases(namespace)
  var_namespace_aliases, 1, var_354_1_namespace, 1, var_357_1_true_namespace,
  // is_defined:
  var_is_defined, 1, var_357_1_true_namespace, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_true_namespace_is_defined, func_check, TAIL_CALL,
  POS(357, 7),
  POS(359, 24),
  POS(358, 7)
};

static TAB_NUM t_lambda_true_namespace_is_defined[] = {
  1, // locals
  0, // parameters
  // !namespace true_namespace
  LET, 1, var_357_1_true_namespace, 1, var_354_1_namespace,
  // identifier .from. ':')
  var_from, 2, var_353_1_identifier, chr_58, 1, LOCAL(1),
  // !identifier append(namespace identifier .from. ':')
  var_append, 2, var_354_1_namespace, LOCAL(1), 1, var_353_1_identifier,
  // node.identifier_of identifier
  LET, -1, var_352_22_node, var_identifier_of, var_353_1_identifier, var_352_22_node,
  // check
  func_check, 0, TAIL_CALL,
  POS(360, 11),
  POS(361, 40),
  POS(361, 11),
  POS(362, 12),
  POS(363, 11)
};

static TAB_NUM t_func_check[] = {
  2, // locals
  0, // parameters
  // is_defined && node_type_of(node) != DEFINITION:
  var_is_defined, 1, var_354_1_namespace, 1, LOCAL(1),
  // is_defined && node_type_of(node) != DEFINITION:
  var_std__and, 2, LOCAL(1), lambda_36, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_37, func_resolve, TAIL_CALL,
  POS(369, 17),
  POS(369, 17),
  POS(368, 5)
};

static TAB_NUM t_lambda_36[] = {
  3, // locals
  0, // parameters
  // node_type_of(node) != DEFINITION:
  var_node_type_of, 1, var_352_22_node, 1, LOCAL(1),
  // node_type_of(node) != DEFINITION:
  var_std__equal, 2, LOCAL(1), var_DEFINITION, 1, LOCAL(2),
  // node_type_of(node) != DEFINITION:
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // node_type_of(node) != DEFINITION:
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(369, 31),
  POS(369, 31),
  POS(369, 31),
  POS(369, 31)
};

static TAB_NUM t_lambda_37[] = {
  1, // locals
  0, // parameters
  // $version namespace_versions(namespace)
  var_namespace_versions, 1, var_354_1_namespace, 1, var_370_1_version,
  // is_defined:
  var_is_defined, 1, var_370_1_version, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_version_is_defined, func_resolve, TAIL_CALL,
  POS(370, 9),
  POS(372, 19),
  POS(371, 9)
};

static TAB_NUM t_lambda_version_is_defined[] = {
  1, // locals
  0, // parameters
  // identifier .from. ':')
  var_from, 2, var_353_1_identifier, chr_58, 1, LOCAL(1),
  // !identifier append(namespace "-" version identifier .from. ':')
  var_append, 4, var_354_1_namespace, string_1, var_370_1_version, LOCAL(1), 1, var_353_1_identifier,
  // node.identifier_of identifier
  LET, -1, var_352_22_node, var_identifier_of, var_353_1_identifier, var_352_22_node,
  // resolve
  func_resolve, 0, TAIL_CALL,
  POS(373, 54),
  POS(373, 13),
  POS(374, 14),
  POS(375, 13)
};

static TAB_NUM t_func_resolve[] = {
  1, // locals
  0, // parameters
  // $resolved_identifier resolve_variable(identifier)
  var_resolve_variable, 1, var_353_1_identifier, 1, var_380_1_resolved_identifier,
  // is_defined
  var_is_defined, 1, var_380_1_resolved_identifier, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_38, lambda_39, TAIL_CALL,
  POS(380, 5),
  POS(382, 27),
  POS(381, 5)
};

static TAB_NUM t_lambda_38[] = {
  1, // locals
  0, // parameters
  // node
  LET, -2, var_352_22_node, var_identifier_of, var_380_1_resolved_identifier, var_kind_of, var_LOCAL, LOCAL(1),
  // 
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(384, 9),
  POS(383, 9)
};

static TAB_NUM t_lambda_39[] = {
  1, // locals
  0, // parameters
  // .kind_of EXTERN)
  LET, -1, var_352_22_node, var_kind_of, var_EXTERN, LOCAL(1),
  //  node(.kind_of EXTERN)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(387, 15),
  POS(387, 9)
};

static TAB_NUM t_func_funky_types__expression___simplify[] = {
  1, // locals
  2, // parameters
  var_389_36_self,
  var_389_41_temp_no,
  // $operator operator_of(self)
  var_operator_of, 1, var_389_36_self, 1, var_390_1_operator,
  // expression_of(self) &temp_no $statements
  var_expression_of, 1, var_389_36_self, 1, LOCAL(1),
  // simplify $expression expression_of(self) &temp_no $statements
  var_simplify, 2, LOCAL(1), var_389_41_temp_no, 3, var_391_10_expression, var_389_41_temp_no, var_391_51_statements,
  // is_defined:
  var_is_defined, 1, var_390_1_operator, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_operator_is_defined, lambda_40, TAIL_CALL,
  POS(390, 3),
  POS(391, 24),
  POS(391, 3),
  POS(393, 14),
  POS(392, 3)
};

static TAB_NUM t_lambda_operator_is_defined[] = {
  0, // locals
  0, // parameters
  // binop expression operator temp_no statements
  func_binop, 4, var_391_10_expression, var_390_1_operator, var_389_41_temp_no, var_391_51_statements, TAIL_CALL,
  POS(394, 7)
};

static TAB_NUM t_lambda_40[] = {
  1, // locals
  0, // parameters
  // .expression_of expression) temp_no statements
  LET, -1, var_389_36_self, var_expression_of, var_391_10_expression, LOCAL(1),
  //  self(.expression_of expression) temp_no statements
  LET, 3, LOCAL(1), var_389_41_temp_no, var_391_51_statements, TAIL_CALL,
  POS(395, 13),
  POS(395, 7)
};

static TAB_NUM t_func_funky_types__negation___simplify[] = {
  2, // locals
  2, // parameters
  var_397_34_self,
  var_397_39_temp_no,
  // expression_of(self) &temp_no $statements
  var_expression_of, 1, var_397_34_self, 1, LOCAL(1),
  // simplify $expression expression_of(self) &temp_no $statements
  var_simplify, 2, LOCAL(1), var_397_39_temp_no, 3, var_398_10_expression, var_397_39_temp_no, var_398_51_statements,
  // node_type_of(expression) == NUMERIC_LITERAL:
  var_node_type_of, 1, var_398_10_expression, 1, LOCAL(1),
  // node_type_of(expression) == NUMERIC_LITERAL:
  var_std__equal, 2, LOCAL(1), var_NUMERIC_LITERAL, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_41, lambda_44, TAIL_CALL,
  POS(398, 24),
  POS(398, 3),
  POS(400, 5),
  POS(400, 5),
  POS(399, 3)
};

static TAB_NUM t_lambda_41[] = {
  2, // locals
  0, // parameters
  // $digits digits_of(expression)
  var_digits_of, 1, var_398_10_expression, 1, var_401_1_digits,
  // $key funky::key_of(expression)
  var_funky__key_of, 1, var_398_10_expression, 1, var_402_1_key,
  // digits(1) == '-'
  var_401_1_digits, 1, num_1, 1, LOCAL(1),
  // digits(1) == '-'
  var_std__equal, 2, LOCAL(1), chr_45, 1, LOCAL(2),
  // if !digits !key
  var_if, 3, LOCAL(2), lambda_42, lambda_43, 2, var_401_1_digits, var_402_1_key,
  // expression
  LET, -2, var_398_10_expression, var_digits_of, var_401_1_digits, var_funky__key_of, var_402_1_key, LOCAL(1),
  // ->
  LET, 3, LOCAL(1), var_397_39_temp_no, var_398_51_statements, TAIL_CALL,
  POS(401, 7),
  POS(402, 7),
  POS(404, 9),
  POS(404, 9),
  POS(403, 7),
  POS(408, 9),
  POS(407, 7)
};

static TAB_NUM t_lambda_42[] = {
  2, // locals
  0, // parameters
  // range(digits 2 -1) range(key 7 -1)
  var_range, 3, var_401_1_digits, num_2, minus_num_1, 1, LOCAL(1),
  // range(key 7 -1)
  var_range, 3, var_402_1_key, num_7, minus_num_1, 1, LOCAL(2),
  //  range(digits 2 -1) range(key 7 -1)
  LET, 2, LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(405, 12),
  POS(405, 31),
  POS(405, 11)
};

static TAB_NUM t_lambda_43[] = {
  2, // locals
  0, // parameters
  // put(digits '-') append("minus_" key)
  var_put, 2, var_401_1_digits, chr_45, 1, LOCAL(1),
  // append("minus_" key)
  var_append, 2, str_minus, var_402_1_key, 1, LOCAL(2),
  //  put(digits '-') append("minus_" key)
  LET, 2, LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(406, 12),
  POS(406, 28),
  POS(406, 11)
};

static TAB_NUM t_lambda_44[] = {
  4, // locals
  0, // parameters
  // inc &temp_no
  var_inc, 1, var_397_39_temp_no, 1, var_397_39_temp_no,
  // std("negate" self)
  func_std, 2, str_negate, var_397_34_self, 1, LOCAL(1),
  // redefine_temporary(temp_no self)
  func_redefine_temporary, 2, var_397_39_temp_no, var_397_34_self, 1, LOCAL(2),
  // list
  var_list, 2, var_398_10_expression, LOCAL(2), 1, LOCAL(3),
  // create_statement
  func_create_statement, 2, LOCAL(1), LOCAL(3), 1, LOCAL(4),
  // push_leading_statement &statements
  var_push_leading_statement, 2, var_398_51_statements, LOCAL(4), 1, var_398_51_statements,
  // temporary(temp_no self) temp_no statements
  func_temporary, 2, var_397_39_temp_no, var_397_34_self, 1, LOCAL(1),
  // -> temporary(temp_no self) temp_no statements
  LET, 3, LOCAL(1), var_397_39_temp_no, var_398_51_statements, TAIL_CALL,
  POS(414, 7),
  POS(417, 11),
  POS(420, 13),
  POS(418, 11),
  POS(416, 9),
  POS(415, 7),
  POS(421, 10),
  POS(421, 7)
};

static TAB_NUM t_func_binop[] = {
  0, // locals
  4, // parameters
  var_423_9_left,
  var_423_14_operator,
  var_423_23_temp_no,
  var_423_31_statements,
  // $operation node_type_of(operator)
  var_node_type_of, 1, var_423_14_operator, 1, var_424_1_operation,
  // $right expression_of(operator)
  var_expression_of, 1, var_423_14_operator, 1, var_425_1_right,
  // case operation
  var_case, 8, var_424_1_operation, var_COMMA, lambda_COMMA, var_AND, lambda_AND, var_OR, lambda_OR, lambda_49, TAIL_CALL,
  POS(424, 3),
  POS(425, 3),
  POS(426, 3)
};

static TAB_NUM t_lambda_COMMA[] = {
  1, // locals
  0, // parameters
  // list(left) right
  var_list, 1, var_423_9_left, 1, LOCAL(1),
  // sequence_constructor list(left) right
  func_sequence_constructor, 2, LOCAL(1), var_425_1_right, TAIL_CALL,
  POS(428, 28),
  POS(428, 7)
};

static TAB_NUM t_func_sequence_constructor[] = {
  2, // locals
  2, // parameters
  var_430_24_sequence,
  var_430_33_rest,
  // node_type_of(rest) == SEQUENCE_EXPRESSION:
  var_node_type_of, 1, var_430_33_rest, 1, LOCAL(1),
  // node_type_of(rest) == SEQUENCE_EXPRESSION:
  var_std__equal, 2, LOCAL(1), var_SEQUENCE_EXPRESSION, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_45, lambda_46, TAIL_CALL,
  POS(432, 11),
  POS(432, 11),
  POS(431, 9)
};

static TAB_NUM t_lambda_45[] = {
  5, // locals
  0, // parameters
  // expression_of(rest) $item &temp_no $more_statements
  var_expression_of, 1, var_430_33_rest, 1, LOCAL(1),
  // simplify expression_of(rest) $item &temp_no $more_statements
  var_simplify, 2, LOCAL(1), var_423_23_temp_no, 3, LOCAL(4), var_423_23_temp_no, LOCAL(5),
  // append &statements more_statements
  var_append, 2, var_423_31_statements, LOCAL(5), 1, var_423_31_statements,
  // push(sequence item)
  var_push, 2, var_430_24_sequence, LOCAL(4), 1, LOCAL(1),
  // operator_of(rest))
  var_operator_of, 1, var_430_33_rest, 1, LOCAL(2),
  // expression_of(operator_of(rest))
  var_expression_of, 1, LOCAL(2), 1, LOCAL(3),
  // sequence_constructor
  func_sequence_constructor, 2, LOCAL(1), LOCAL(3), TAIL_CALL,
  POS(433, 22),
  POS(433, 13),
  POS(434, 13),
  POS(436, 15),
  POS(437, 29),
  POS(437, 15),
  POS(435, 13)
};

static TAB_NUM t_lambda_46[] = {
  2, // locals
  0, // parameters
  // simplify &rest &temp_no $more_statements
  var_simplify, 2, var_430_33_rest, var_423_23_temp_no, 3, var_430_33_rest, var_423_23_temp_no, LOCAL(2),
  // append &statements more_statements
  var_append, 2, var_423_31_statements, LOCAL(2), 1, var_423_31_statements,
  // push(sequence rest)
  var_push, 2, var_430_24_sequence, var_430_33_rest, 1, LOCAL(1),
  // function_call_from_list "sequence" push(sequence rest)
  func_function_call_from_list, 2, str_sequence, LOCAL(1), TAIL_CALL,
  POS(439, 13),
  POS(440, 13),
  POS(441, 48),
  POS(441, 13)
};

static TAB_NUM t_lambda_AND[] = {
  3, // locals
  0, // parameters
  // operator_of(operator).is_defined &right -> operator
  var_operator_of, 1, var_423_14_operator, 1, LOCAL(1),
  // is_defined &right -> operator
  var_is_defined, 1, LOCAL(1), 1, LOCAL(2),
  // update_if operator_of(operator).is_defined &right -> operator
  var_update_if, 3, LOCAL(2), var_425_1_right, lambda_47, 1, var_425_1_right,
  // source_group_of(right)
  var_source_group_of, 1, var_425_1_right, 1, LOCAL(1),
  // source_position_of(right)
  var_source_position_of, 1, var_425_1_right, 1, LOCAL(2),
  // list(right)
  var_list, 1, var_425_1_right, 1, LOCAL(3),
  // !right
  LET, -3, var_funky_types__return_expression, var_source_group_of, LOCAL(1), var_source_position_of, LOCAL(2), var_arguments_of, LOCAL(3), var_425_1_right,
  // simplify &right &temp_no $_dummy_statements
  var_simplify, 2, var_425_1_right, var_423_23_temp_no, 3, var_425_1_right, var_423_23_temp_no, LOCAL(1),
  // function_call "and" left right
  func_function_call, 3, str_and, var_423_9_left, var_425_1_right, TAIL_CALL,
  POS(443, 17),
  POS(443, 39),
  POS(443, 7),
  POS(446, 28),
  POS(447, 31),
  POS(448, 25),
  POS(444, 7),
  POS(449, 7),
  POS(450, 7)
};

static TAB_NUM t_lambda_47[] = {
  0, // locals
  0, // parameters
  //  operator
  LET, 1, var_423_14_operator, TAIL_CALL,
  POS(443, 59)
};

static TAB_NUM t_lambda_OR[] = {
  3, // locals
  0, // parameters
  // operator_of(operator).is_defined &right -> operator
  var_operator_of, 1, var_423_14_operator, 1, LOCAL(1),
  // is_defined &right -> operator
  var_is_defined, 1, LOCAL(1), 1, LOCAL(2),
  // update_if operator_of(operator).is_defined &right -> operator
  var_update_if, 3, LOCAL(2), var_425_1_right, lambda_48, 1, var_425_1_right,
  // source_group_of(right)
  var_source_group_of, 1, var_425_1_right, 1, LOCAL(1),
  // source_position_of(right)
  var_source_position_of, 1, var_425_1_right, 1, LOCAL(2),
  // list(right)
  var_list, 1, var_425_1_right, 1, LOCAL(3),
  // !right
  LET, -3, var_funky_types__return_expression, var_source_group_of, LOCAL(1), var_source_position_of, LOCAL(2), var_arguments_of, LOCAL(3), var_425_1_right,
  // simplify &right &temp_no $_dummy_statements
  var_simplify, 2, var_425_1_right, var_423_23_temp_no, 3, var_425_1_right, var_423_23_temp_no, LOCAL(1),
  // function_call "or" left right
  func_function_call, 3, str_or, var_423_9_left, var_425_1_right, TAIL_CALL,
  POS(452, 17),
  POS(452, 39),
  POS(452, 7),
  POS(455, 28),
  POS(456, 31),
  POS(457, 25),
  POS(453, 7),
  POS(458, 7),
  POS(459, 7)
};

static TAB_NUM t_lambda_48[] = {
  0, // locals
  0, // parameters
  //  operator
  LET, 1, var_423_14_operator, TAIL_CALL,
  POS(452, 59)
};

static TAB_NUM t_lambda_49[] = {
  2, // locals
  0, // parameters
  // simplify &right &temp_no $right_statements
  var_simplify, 2, var_425_1_right, var_423_23_temp_no, 3, var_425_1_right, var_423_23_temp_no, LOCAL(2),
  // append &statements right_statements
  var_append, 2, var_423_31_statements, LOCAL(2), 1, var_423_31_statements,
  // case operation !left !temp_no !statements
  var_case, 38, var_424_1_operation, var_PLUS, lambda_PLUS, var_MINUS, lambda_MINUS, var_TIMES, lambda_TIMES, var_OVER, lambda_OVER, var_EQUAL, lambda_EQUAL, var_NOT_EQUAL, lambda_NOT_EQUAL, var_LESS_THAN, lambda_LESS_THAN, var_GREATER_THAN, lambda_GREATER_THAN, var_LESS_EQUAL, lambda_LESS_EQUAL, var_GREATER_EQUAL, lambda_GREATER_EQUAL, var_RANGE, lambda_RANGE, var_KEY_VALUE, lambda_KEY_VALUE, var_SHIFT_LEFT, lambda_SHIFT_LEFT, var_SHIFT_RIGHT, lambda_SHIFT_RIGHT, var_BIT_AND, lambda_BIT_AND, var_BIT_OR, lambda_BIT_OR, var_BIT_XOR, lambda_BIT_XOR, var_NAMED_OPERATOR, lambda_NAMED_OPERATOR, lambda_50, 3, var_423_9_left, var_423_23_temp_no, var_423_31_statements,
  // !operator operator_of(operator)
  var_operator_of, 1, var_423_14_operator, 1, var_423_14_operator,
  // is_defined:
  var_is_defined, 1, var_423_14_operator, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_2_operator_is_defined, lambda_51, TAIL_CALL,
  POS(461, 7),
  POS(462, 7),
  POS(463, 7),
  POS(506, 7),
  POS(508, 18),
  POS(507, 7)
};

static TAB_NUM t_lambda_PLUS[] = {
  0, // locals
  0, // parameters
  // function_call "plus" left right
  func_function_call, 3, str_plus, var_423_9_left, var_425_1_right, TAIL_CALL,
  POS(464, 15)
};

static TAB_NUM t_lambda_MINUS[] = {
  0, // locals
  0, // parameters
  // function_call "minus" left right
  func_function_call, 3, str_minus_2, var_423_9_left, var_425_1_right, TAIL_CALL,
  POS(465, 16)
};

static TAB_NUM t_lambda_TIMES[] = {
  0, // locals
  0, // parameters
  // function_call "times" left right
  func_function_call, 3, str_times, var_423_9_left, var_425_1_right, TAIL_CALL,
  POS(466, 16)
};

static TAB_NUM t_lambda_OVER[] = {
  0, // locals
  0, // parameters
  // function_call "over" left right
  func_function_call, 3, str_over, var_423_9_left, var_425_1_right, TAIL_CALL,
  POS(467, 15)
};

static TAB_NUM t_lambda_EQUAL[] = {
  0, // locals
  0, // parameters
  // function_call "equal" left right
  func_function_call, 3, str_equal, var_423_9_left, var_425_1_right, TAIL_CALL,
  POS(468, 16)
};

static TAB_NUM t_lambda_NOT_EQUAL[] = {
  0, // locals
  0, // parameters
  // function_call "equal" &left right !temp_no !statements
  func_function_call, 3, str_equal, var_423_9_left, var_425_1_right, 3, var_423_9_left, var_423_23_temp_no, var_423_31_statements,
  // function_call "not" left
  func_function_call, 2, str_not, var_423_9_left, TAIL_CALL,
  POS(470, 11),
  POS(471, 11)
};

static TAB_NUM t_lambda_LESS_THAN[] = {
  0, // locals
  0, // parameters
  // function_call "less" left right
  func_function_call, 3, str_less, var_423_9_left, var_425_1_right, TAIL_CALL,
  POS(472, 20)
};

static TAB_NUM t_lambda_GREATER_THAN[] = {
  0, // locals
  0, // parameters
  // function_call "less" right left
  func_function_call, 3, str_less, var_425_1_right, var_423_9_left, TAIL_CALL,
  POS(473, 23)
};

static TAB_NUM t_lambda_LESS_EQUAL[] = {
  0, // locals
  0, // parameters
  // function_call "less" right &left !temp_no !statements
  func_function_call, 3, str_less, var_425_1_right, var_423_9_left, 3, var_423_9_left, var_423_23_temp_no, var_423_31_statements,
  // function_call "not" left
  func_function_call, 2, str_not, var_423_9_left, TAIL_CALL,
  POS(475, 11),
  POS(476, 11)
};

static TAB_NUM t_lambda_GREATER_EQUAL[] = {
  0, // locals
  0, // parameters
  // function_call "less" &left right !temp_no !statements
  func_function_call, 3, str_less, var_423_9_left, var_425_1_right, 3, var_423_9_left, var_423_23_temp_no, var_423_31_statements,
  // function_call "not" left
  func_function_call, 2, str_not, var_423_9_left, TAIL_CALL,
  POS(478, 11),
  POS(479, 11)
};

static TAB_NUM t_lambda_RANGE[] = {
  0, // locals
  0, // parameters
  // function_call "value_range" left right
  func_function_call, 3, str_value_range, var_423_9_left, var_425_1_right, TAIL_CALL,
  POS(480, 16)
};

static TAB_NUM t_lambda_KEY_VALUE[] = {
  0, // locals
  0, // parameters
  // function_call "key_value_pair" left right
  func_function_call, 3, str_key_value_pair, var_423_9_left, var_425_1_right, TAIL_CALL,
  POS(481, 20)
};

static TAB_NUM t_lambda_SHIFT_LEFT[] = {
  0, // locals
  0, // parameters
  // function_call "shift_left" left right
  func_function_call, 3, str_shift_left, var_423_9_left, var_425_1_right, TAIL_CALL,
  POS(482, 21)
};

static TAB_NUM t_lambda_SHIFT_RIGHT[] = {
  0, // locals
  0, // parameters
  // function_call "shift_right" left right
  func_function_call, 3, str_shift_right, var_423_9_left, var_425_1_right, TAIL_CALL,
  POS(483, 22)
};

static TAB_NUM t_lambda_BIT_AND[] = {
  0, // locals
  0, // parameters
  // function_call "bit_and" left right
  func_function_call, 3, str_bit_and, var_423_9_left, var_425_1_right, TAIL_CALL,
  POS(484, 18)
};

static TAB_NUM t_lambda_BIT_OR[] = {
  0, // locals
  0, // parameters
  // function_call "bit_or" left right
  func_function_call, 3, str_bit_or, var_423_9_left, var_425_1_right, TAIL_CALL,
  POS(485, 17)
};

static TAB_NUM t_lambda_BIT_XOR[] = {
  0, // locals
  0, // parameters
  // function_call "bit_xor" left right
  func_function_call, 3, str_bit_xor, var_423_9_left, var_425_1_right, TAIL_CALL,
  POS(486, 18)
};

static TAB_NUM t_lambda_NAMED_OPERATOR[] = {
  7, // locals
  0, // parameters
  // inc &temp_no
  var_inc, 1, var_423_23_temp_no, 1, var_423_23_temp_no,
  // identifier_of(operator)
  var_identifier_of, 1, var_423_14_operator, 1, LOCAL(1),
  // source_group_of(left)
  var_source_group_of, 1, var_423_9_left, 1, LOCAL(2),
  // source_position_of(left)
  var_source_position_of, 1, var_423_9_left, 1, LOCAL(3),
  // funky_types::functor
  LET, -4, var_funky_types__functor, var_identifier_of, LOCAL(1), var_kind_of, var_EXTERN, var_source_group_of, LOCAL(2), var_source_position_of, LOCAL(3), LOCAL(4),
  // redefine_temporary(temp_no left))
  func_redefine_temporary, 2, var_423_23_temp_no, var_423_9_left, 1, LOCAL(5),
  // list(left right redefine_temporary(temp_no left))
  var_list, 3, var_423_9_left, var_425_1_right, LOCAL(5), 1, LOCAL(6),
  // create_statement
  func_create_statement, 2, LOCAL(4), LOCAL(6), 1, LOCAL(7),
  // push_leading_statement &statements
  var_push_leading_statement, 2, var_423_31_statements, LOCAL(7), 1, var_423_31_statements,
  // temporary(temp_no left)
  func_temporary, 2, var_423_23_temp_no, var_423_9_left, 1, LOCAL(1),
  // ->
  LET, 3, LOCAL(1), var_423_23_temp_no, var_423_31_statements, TAIL_CALL,
  POS(488, 11),
  POS(492, 32),
  POS(494, 34),
  POS(495, 37),
  POS(491, 15),
  POS(496, 31),
  POS(496, 15),
  POS(490, 13),
  POS(489, 11),
  POS(498, 13),
  POS(497, 11)
};

static TAB_NUM t_lambda_50[] = {
  0, // locals
  0, // parameters
  // debug::dump `operation
  var_debug__dump, 2, str_operation, var_424_1_operation, 0,
  // debug::dump 9 `left
  var_debug__dump, 3, num_9, str_left, var_423_9_left, 0,
  // debug::dump 9 `right
  var_debug__dump, 3, num_9, str_right, var_425_1_right, 0,
  // debug::exit
  var_debug__exit, 0, TAIL_CALL,
  POS(502, 11),
  POS(503, 11),
  POS(504, 11),
  POS(505, 11)
};

static TAB_NUM t_lambda_2_operator_is_defined[] = {
  0, // locals
  0, // parameters
  // binop left operator temp_no statements
  func_binop, 4, var_423_9_left, var_423_14_operator, var_423_23_temp_no, var_423_31_statements, TAIL_CALL,
  POS(509, 11)
};

static TAB_NUM t_lambda_51[] = {
  0, // locals
  0, // parameters
  //  left temp_no statements
  LET, 3, var_423_9_left, var_423_23_temp_no, var_423_31_statements, TAIL_CALL,
  POS(510, 11)
};

static TAB_NUM t_func_function_call[] = {
  2, // locals
  -2, // parameters
  MANDATORY_PARAMETER, LOCAL(1), // 512_17_func
  REST_PARAMETER, LOCAL(2), // 512_22_arguments
  // function_call_from_list func arguments
  func_function_call_from_list, 2, LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(513, 5)
};

static TAB_NUM t_func_function_call_from_list[] = {
  7, // locals
  2, // parameters
  LOCAL(5), // 515_27_func
  LOCAL(6), // 515_32_arguments
  // $first_argument arguments(1)
  LOCAL(6), 1, num_1, 1, LOCAL(7),
  // inc &temp_no
  var_inc, 1, var_423_23_temp_no, 1, var_423_23_temp_no,
  // std(func first_argument)
  func_std, 2, LOCAL(5), LOCAL(7), 1, LOCAL(1),
  // redefine_temporary(temp_no first_argument))
  func_redefine_temporary, 2, var_423_23_temp_no, LOCAL(7), 1, LOCAL(2),
  // push(arguments redefine_temporary(temp_no first_argument))
  var_push, 2, LOCAL(6), LOCAL(2), 1, LOCAL(3),
  // create_statement
  func_create_statement, 2, LOCAL(1), LOCAL(3), 1, LOCAL(4),
  // push_leading_statement &statements
  var_push_leading_statement, 2, var_423_31_statements, LOCAL(4), 1, var_423_31_statements,
  // temporary(temp_no first_argument)
  func_temporary, 2, var_423_23_temp_no, LOCAL(7), 1, LOCAL(1),
  // ->
  LET, 3, LOCAL(1), var_423_23_temp_no, var_423_31_statements, TAIL_CALL,
  POS(516, 5),
  POS(517, 5),
  POS(520, 9),
  POS(521, 24),
  POS(521, 9),
  POS(519, 7),
  POS(518, 5),
  POS(523, 7),
  POS(522, 5)
};

static TAB_NUM t_func_simplify_return[] = {
  11, // locals
  2, // parameters
  LOCAL(10), // 530_19_self
  LOCAL(11), // 530_24_temp_no
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
  POS(533, 24),
  POS(534, 27),
  POS(539, 32),
  POS(540, 35),
  POS(538, 13),
  POS(541, 13),
  POS(537, 11),
  POS(536, 9),
  POS(532, 5),
  POS(531, 3)
};

static TAB_NUM t_func_funky_types__inline_statement___simplify[] = {
  7, // locals
  2, // parameters
  LOCAL(6), // 544_42_self
  LOCAL(7), // 544_47_temp_no
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
  POS(547, 24),
  POS(548, 27),
  POS(549, 16),
  POS(550, 21),
  POS(546, 5),
  POS(545, 3)
};

static TAB_NUM t_func_funky_types__multiline_plus___simplify[] = {
  2, // locals
  2, // parameters
  LOCAL(1), // 553_40_self
  LOCAL(2), // 553_45_temp_no
  // simplify_multiline_operator self temp_no "plus"
  func_simplify_multiline_operator, 3, LOCAL(1), LOCAL(2), str_plus, TAIL_CALL,
  POS(554, 3)
};

static TAB_NUM t_func_funky_types__multiline_minus___simplify[] = {
  2, // locals
  2, // parameters
  LOCAL(1), // 556_41_self
  LOCAL(2), // 556_46_temp_no
  // simplify_multiline_operator self temp_no "minus"
  func_simplify_multiline_operator, 3, LOCAL(1), LOCAL(2), str_minus_2, TAIL_CALL,
  POS(557, 3)
};

static TAB_NUM t_func_funky_types__multiline_minus_with_remark___simplify[] = {
  2, // locals
  2, // parameters
  LOCAL(1), // 559_53_self
  LOCAL(2), // 559_58_temp_no
  // simplify_multiline_operator self temp_no "minus"
  func_simplify_multiline_operator, 3, LOCAL(1), LOCAL(2), str_minus_2, TAIL_CALL,
  POS(560, 3)
};

static TAB_NUM t_func_funky_types__multiline_times___simplify[] = {
  2, // locals
  2, // parameters
  LOCAL(1), // 562_41_self
  LOCAL(2), // 562_46_temp_no
  // simplify_multiline_operator self temp_no "times"
  func_simplify_multiline_operator, 3, LOCAL(1), LOCAL(2), str_times, TAIL_CALL,
  POS(563, 3)
};

static TAB_NUM t_func_funky_types__multiline_over___simplify[] = {
  2, // locals
  2, // parameters
  LOCAL(1), // 565_40_self
  LOCAL(2), // 565_45_temp_no
  // simplify_multiline_operator self temp_no "over"
  func_simplify_multiline_operator, 3, LOCAL(1), LOCAL(2), str_over, TAIL_CALL,
  POS(566, 3)
};

static TAB_NUM t_func_funky_types__multiline_over_with_remark___simplify[] = {
  2, // locals
  2, // parameters
  LOCAL(1), // 568_52_self
  LOCAL(2), // 568_57_temp_no
  // simplify_multiline_operator self temp_no "over"
  func_simplify_multiline_operator, 3, LOCAL(1), LOCAL(2), str_over, TAIL_CALL,
  POS(569, 3)
};

static TAB_NUM t_func_funky_types__multiline_shift_left___simplify[] = {
  2, // locals
  2, // parameters
  LOCAL(1), // 571_46_self
  LOCAL(2), // 571_51_temp_no
  // simplify_multiline_operator self temp_no "shift_left"
  func_simplify_multiline_operator, 3, LOCAL(1), LOCAL(2), str_shift_left, TAIL_CALL,
  POS(572, 3)
};

static TAB_NUM t_func_funky_types__multiline_shift_right___simplify[] = {
  2, // locals
  2, // parameters
  LOCAL(1), // 574_47_self
  LOCAL(2), // 574_52_temp_no
  // simplify_multiline_operator self temp_no "shift_right"
  func_simplify_multiline_operator, 3, LOCAL(1), LOCAL(2), str_shift_right, TAIL_CALL,
  POS(575, 3)
};

static TAB_NUM t_func_funky_types__multiline_equal___simplify[] = {
  2, // locals
  2, // parameters
  LOCAL(1), // 577_41_self
  LOCAL(2), // 577_46_temp_no
  // simplify_multiline_operator self temp_no "equal"
  func_simplify_multiline_operator, 3, LOCAL(1), LOCAL(2), str_equal, TAIL_CALL,
  POS(578, 3)
};

static TAB_NUM t_func_funky_types__multiline_not_equal___simplify[] = {
  2, // locals
  2, // parameters
  LOCAL(1), // 580_45_self
  LOCAL(2), // 580_50_temp_no
  // simplify_multiline_operator self temp_no "equal" true
  func_simplify_multiline_operator, 4, LOCAL(1), LOCAL(2), str_equal, var_true, TAIL_CALL,
  POS(581, 3)
};

static TAB_NUM t_func_funky_types__multiline_less_equal___simplify[] = {
  2, // locals
  2, // parameters
  LOCAL(1), // 583_46_self
  LOCAL(2), // 583_51_temp_no
  // simplify_multiline_operator self temp_no "less" true true
  func_simplify_multiline_operator, 5, LOCAL(1), LOCAL(2), str_less, var_true, var_true, TAIL_CALL,
  POS(584, 3)
};

static TAB_NUM t_func_funky_types__multiline_less_than___simplify[] = {
  2, // locals
  2, // parameters
  LOCAL(1), // 586_45_self
  LOCAL(2), // 586_50_temp_no
  // simplify_multiline_operator self temp_no "less"
  func_simplify_multiline_operator, 3, LOCAL(1), LOCAL(2), str_less, TAIL_CALL,
  POS(587, 3)
};

static TAB_NUM t_func_funky_types__multiline_greater_equal___simplify[] = {
  2, // locals
  2, // parameters
  LOCAL(1), // 589_49_self
  LOCAL(2), // 589_54_temp_no
  // simplify_multiline_operator self temp_no "less" true
  func_simplify_multiline_operator, 4, LOCAL(1), LOCAL(2), str_less, var_true, TAIL_CALL,
  POS(590, 3)
};

static TAB_NUM t_func_funky_types__multiline_greater_than___simplify[] = {
  2, // locals
  2, // parameters
  LOCAL(1), // 592_48_self
  LOCAL(2), // 592_53_temp_no
  // simplify_multiline_operator self temp_no "less" false true
  func_simplify_multiline_operator, 5, LOCAL(1), LOCAL(2), str_less, var_false, var_true, TAIL_CALL,
  POS(593, 3)
};

static TAB_NUM t_func_funky_types__multiline_and___simplify[] = {
  2, // locals
  2, // parameters
  LOCAL(1), // 595_39_self
  LOCAL(2), // 595_44_temp_no
  // simplify_multiline_operator self temp_no "and" false false true
  func_simplify_multiline_operator, 6, LOCAL(1), LOCAL(2), str_and, var_false, var_false, var_true, TAIL_CALL,
  POS(596, 3)
};

static TAB_NUM t_func_funky_types__multiline_or___simplify[] = {
  2, // locals
  2, // parameters
  LOCAL(1), // 598_38_self
  LOCAL(2), // 598_43_temp_no
  // simplify_multiline_operator self temp_no "or" false false true
  func_simplify_multiline_operator, 6, LOCAL(1), LOCAL(2), str_or, var_false, var_false, var_true, TAIL_CALL,
  POS(599, 3)
};

static TAB_NUM t_func_funky_types__multiline_bit_and___simplify[] = {
  2, // locals
  2, // parameters
  LOCAL(1), // 601_43_self
  LOCAL(2), // 601_48_temp_no
  // simplify_multiline_operator self temp_no "bit_and"
  func_simplify_multiline_operator, 3, LOCAL(1), LOCAL(2), str_bit_and, TAIL_CALL,
  POS(602, 3)
};

static TAB_NUM t_func_funky_types__multiline_bit_and_with_remark___simplify[] = {
  2, // locals
  2, // parameters
  LOCAL(1), // 604_55_self
  LOCAL(2), // 604_60_temp_no
  // simplify_multiline_operator self temp_no "bit_and"
  func_simplify_multiline_operator, 3, LOCAL(1), LOCAL(2), str_bit_and, TAIL_CALL,
  POS(605, 3)
};

static TAB_NUM t_func_funky_types__multiline_bit_or___simplify[] = {
  2, // locals
  2, // parameters
  LOCAL(1), // 607_42_self
  LOCAL(2), // 607_47_temp_no
  // simplify_multiline_operator self temp_no "bit_or"
  func_simplify_multiline_operator, 3, LOCAL(1), LOCAL(2), str_bit_or, TAIL_CALL,
  POS(608, 3)
};

static TAB_NUM t_func_funky_types__multiline_bit_xor___simplify[] = {
  2, // locals
  2, // parameters
  LOCAL(1), // 610_43_self
  LOCAL(2), // 610_48_temp_no
  // simplify_multiline_operator self temp_no "bit_xor"
  func_simplify_multiline_operator, 3, LOCAL(1), LOCAL(2), str_bit_xor, TAIL_CALL,
  POS(611, 3)
};

static TAB_NUM t_func_funky_types__multiline_assign___simplify[] = {
  2, // locals
  2, // parameters
  LOCAL(1), // 613_42_self
  LOCAL(2), // 613_47_temp_no
  // simplify_multiline_operator self temp_no "key_value_pair"
  func_simplify_multiline_operator, 3, LOCAL(1), LOCAL(2), str_key_value_pair, TAIL_CALL,
  POS(614, 3)
};

static TAB_NUM t_func_simplify_multiline_operator[] = {
  3, // locals
  -6, // parameters
  MANDATORY_PARAMETER, var_618_0_self,
  MANDATORY_PARAMETER, var_619_0_temp_no,
  MANDATORY_PARAMETER, LOCAL(2), // 620_0_name
  var_false, var_621_0_do_negate,
  var_false, var_622_0_do_swap,
  var_false, LOCAL(3), // 623_0_do_delay
  // $head std(name self)
  func_std, 2, LOCAL(2), var_618_0_self, 1, var_625_1_head,
  // arguments_of(self): (argument) -> node_type_of(argument) != REMARK)
  var_arguments_of, 1, var_618_0_self, 1, LOCAL(1),
  // $arguments
  var_filter, 2, LOCAL(1), lambda_filterarguments_ofself, 1, var_626_1_arguments,
  // arguments(1) $left &temp_no $statements
  var_626_1_arguments, 1, num_1, 1, LOCAL(1),
  // simplify arguments(1) $left &temp_no $statements
  var_simplify, 2, LOCAL(1), var_619_0_temp_no, 3, var_628_23_left, var_619_0_temp_no, var_628_38_statements,
  // $right undefined
  LET, 1, var_undefined, 1, var_629_1_right,
  // $n length_of(arguments)
  var_length_of, 1, var_626_1_arguments, 1, var_630_1_n,
  // if
  var_if, 3, LOCAL(3), lambda_do_delay, lambda_54, TAIL_CALL,
  POS(625, 3),
  POS(627, 12),
  POS(626, 3),
  POS(628, 12),
  POS(628, 3),
  POS(629, 3),
  POS(630, 3),
  POS(631, 3)
};

static TAB_NUM t_lambda_filterarguments_ofself[] = {
  4, // locals
  1, // parameters
  LOCAL(4), // 627_28_argument
  // node_type_of(argument) != REMARK)
  var_node_type_of, 1, LOCAL(4), 1, LOCAL(1),
  // node_type_of(argument) != REMARK)
  var_std__equal, 2, LOCAL(1), var_REMARK, 1, LOCAL(2),
  // node_type_of(argument) != REMARK)
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // -> node_type_of(argument) != REMARK)
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(627, 46),
  POS(627, 46),
  POS(627, 46),
  POS(627, 43)
};

static TAB_NUM t_lambda_do_delay[] = {
  7, // locals
  0, // parameters
  // $rest range(arguments 2 -1)
  var_range, 3, var_626_1_arguments, num_2, minus_num_1, 1, var_633_1_rest,
  // arguments(2))
  var_626_1_arguments, 1, num_2, 1, LOCAL(1),
  // source_group_of(arguments(2))
  var_source_group_of, 1, LOCAL(1), 1, LOCAL(2),
  // arguments(2))
  var_626_1_arguments, 1, num_2, 1, LOCAL(3),
  // source_position_of(arguments(2))
  var_source_position_of, 1, LOCAL(3), 1, LOCAL(4),
  // n == 2
  var_std__equal, 2, var_630_1_n, num_2, 1, LOCAL(5),
  // if
  var_if, 3, LOCAL(5), lambda_52, lambda_53, 1, LOCAL(6),
  // !right
  LET, -3, var_funky_types__return_expression, var_source_group_of, LOCAL(2), var_source_position_of, LOCAL(4), var_arguments_of, LOCAL(6), var_629_1_right,
  // simplify &right &temp_no $more_statements
  var_simplify, 2, var_629_1_right, var_619_0_temp_no, 3, var_629_1_right, var_619_0_temp_no, LOCAL(7),
  // append &statements more_statements
  var_append, 2, var_628_38_statements, LOCAL(7), 1, var_628_38_statements,
  // push_statement
  func_push_statement, 0, TAIL_CALL,
  POS(633, 7),
  POS(636, 44),
  POS(636, 28),
  POS(637, 50),
  POS(637, 31),
  POS(640, 15),
  POS(639, 13),
  POS(634, 7),
  POS(643, 7),
  POS(644, 7),
  POS(645, 7)
};

static TAB_NUM t_lambda_52[] = {
  0, // locals
  0, // parameters
  //  rest
  LET, 1, var_633_1_rest, TAIL_CALL,
  POS(641, 17)
};

static TAB_NUM t_lambda_53[] = {
  2, // locals
  0, // parameters
  // .arguments_of rest))
  LET, -1, var_618_0_self, var_arguments_of, var_633_1_rest, LOCAL(1),
  // list(self(.arguments_of rest))
  var_list, 1, LOCAL(1), 1, LOCAL(2),
  //  list(self(.arguments_of rest))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(642, 28),
  POS(642, 18),
  POS(642, 17)
};

static TAB_NUM t_lambda_54[] = {
  0, // locals
  0, // parameters
  // $idx 2
  LET, 1, num_2, 1, var_647_1_idx,
  // loop:
  var_loop, 1, lambda_loop, TAIL_CALL,
  POS(647, 7),
  POS(648, 7)
};

static TAB_NUM t_lambda_loop[] = {
  2, // locals
  0, // parameters
  // arguments(idx) !right &temp_no $more_statements
  var_626_1_arguments, 1, var_647_1_idx, 1, LOCAL(1),
  // simplify arguments(idx) !right &temp_no $more_statements
  var_simplify, 2, LOCAL(1), var_619_0_temp_no, 3, var_629_1_right, var_619_0_temp_no, LOCAL(2),
  // append &statements more_statements
  var_append, 2, var_628_38_statements, LOCAL(2), 1, var_628_38_statements,
  // update_if do_swap &left &right -> right left
  var_update_if, 4, var_622_0_do_swap, var_628_23_left, var_629_1_right, lambda_55, 2, var_628_23_left, var_629_1_right,
  // push_statement !left !temp_no !statements
  func_push_statement, 0, 3, var_628_23_left, var_619_0_temp_no, var_628_38_statements,
  // idx < n:
  var_std__less, 2, var_647_1_idx, var_630_1_n, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_56, lambda_57, TAIL_CALL,
  POS(649, 18),
  POS(649, 9),
  POS(650, 9),
  POS(651, 9),
  POS(652, 9),
  POS(654, 11),
  POS(653, 9)
};

static TAB_NUM t_lambda_55[] = {
  0, // locals
  0, // parameters
  //  right left
  LET, 2, var_629_1_right, var_628_23_left, TAIL_CALL,
  POS(651, 42)
};

static TAB_NUM t_lambda_56[] = {
  0, // locals
  0, // parameters
  // inc &idx
  var_inc, 1, var_647_1_idx, 1, var_647_1_idx,
  // next
  var_next, 0, TAIL_CALL,
  POS(655, 13),
  POS(656, 13)
};

static TAB_NUM t_lambda_57[] = {
  0, // locals
  0, // parameters
  // if
  var_if, 3, var_621_0_do_negate, lambda_do_negate, lambda_58, TAIL_CALL,
  POS(658, 13)
};

static TAB_NUM t_lambda_do_negate[] = {
  6, // locals
  0, // parameters
  // inc &temp_no
  var_inc, 1, var_619_0_temp_no, 1, var_619_0_temp_no,
  // temporary(temp_no left)
  func_temporary, 2, var_619_0_temp_no, var_628_23_left, 1, LOCAL(1),
  // std("not" left)
  func_std, 2, str_not, var_628_23_left, 1, LOCAL(2),
  // redefine_temporary(temp_no left)
  func_redefine_temporary, 2, var_619_0_temp_no, var_628_23_left, 1, LOCAL(3),
  // list
  var_list, 2, var_628_23_left, LOCAL(3), 1, LOCAL(4),
  // create_statement
  func_create_statement, 2, LOCAL(2), LOCAL(4), 1, LOCAL(5),
  // push_leading_statement
  var_push_leading_statement, 2, var_628_38_statements, LOCAL(5), 1, LOCAL(6),
  // ->
  LET, 3, LOCAL(1), var_619_0_temp_no, LOCAL(6), TAIL_CALL,
  POS(660, 17),
  POS(662, 19),
  POS(667, 23),
  POS(670, 25),
  POS(668, 23),
  POS(666, 21),
  POS(664, 19),
  POS(661, 17)
};

static TAB_NUM t_lambda_58[] = {
  0, // locals
  0, // parameters
  // 
  LET, 3, var_628_23_left, var_619_0_temp_no, var_628_38_statements, TAIL_CALL,
  POS(671, 17)
};

static TAB_NUM t_func_push_statement[] = {
  3, // locals
  0, // parameters
  // inc &temp_no
  var_inc, 1, var_619_0_temp_no, 1, var_619_0_temp_no,
  // redefine_temporary(temp_no left))
  func_redefine_temporary, 2, var_619_0_temp_no, var_628_23_left, 1, LOCAL(1),
  // list(left right redefine_temporary(temp_no left))
  var_list, 3, var_628_23_left, var_629_1_right, LOCAL(1), 1, LOCAL(2),
  // create_statement
  func_create_statement, 2, var_625_1_head, LOCAL(2), 1, LOCAL(3),
  // push_leading_statement &statements
  var_push_leading_statement, 2, var_628_38_statements, LOCAL(3), 1, var_628_38_statements,
  // temporary(temp_no left) temp_no statements
  func_temporary, 2, var_619_0_temp_no, var_628_23_left, 1, LOCAL(1),
  // -> temporary(temp_no left) temp_no statements
  LET, 3, LOCAL(1), var_619_0_temp_no, var_628_38_statements, TAIL_CALL,
  POS(677, 5),
  POS(681, 25),
  POS(681, 9),
  POS(679, 7),
  POS(678, 5),
  POS(682, 8),
  POS(682, 5)
};

static TAB_NUM t_func_funky_types__inline_body___simplify[] = {
  7, // locals
  2, // parameters
  LOCAL(6), // 684_37_self
  LOCAL(7), // 684_42_temp_no
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
  POS(687, 22),
  POS(688, 21),
  POS(690, 24),
  POS(691, 27),
  POS(686, 5),
  POS(685, 3)
};

static TAB_NUM t_func_funky_types__body___simplify[] = {
  3, // locals
  2, // parameters
  var_694_30_self,
  var_694_35_temp_no,
  // !on_top_level false
  LET, 1, var_false, 1, var_on_top_level,
  // mangle_position(self))"
  var_mangle_position, 1, var_694_30_self, 1, LOCAL(1),
  // !self.funky::key_of "func_@(mangle_position(self))"
  var_std__string, 2, str_func, LOCAL(1), 1, LOCAL(3),
  // self.funky::key_of "func_@(mangle_position(self))"
  LET, -1, var_694_30_self, var_funky__key_of, LOCAL(3), var_694_30_self,
  // check_statements &self
  func_check_statements, 1, var_694_30_self, 1, var_694_30_self,
  // collect_parameter_definitions !resolve_variable self
  func_collect_parameter_definitions, 1, var_694_30_self, 1, var_resolve_variable,
  // parameters_of 0 $_parameters_temp_no $_parameters_statements
  var_parameters_of, 1, var_694_30_self, 1, LOCAL(1),
  // simplify &self.parameters_of 0 $_parameters_temp_no $_parameters_statements
  var_simplify, 2, LOCAL(1), num_0, 3, LOCAL(1), LOCAL(2), LOCAL(2),
  // self.parameters_of 0 $_parameters_temp_no $_parameters_statements
  LET, -1, var_694_30_self, var_parameters_of, LOCAL(1), var_694_30_self,
  // $statement statement_of(self)
  var_statement_of, 1, var_694_30_self, 1, var_700_1_statement,
  // $statements statements_of(self)
  var_statements_of, 1, var_694_30_self, 1, var_701_1_statements,
  // is_undefined && statements.is_empty:
  var_is_undefined, 1, var_700_1_statement, 1, LOCAL(1),
  // is_undefined && statements.is_empty:
  var_std__and, 2, LOCAL(1), lambda_59, 1, LOCAL(2),
  // on statement.is_undefined && statements.is_empty:
  var_on, 2, LOCAL(2), lambda_60, 0,
  // is_defined && node_type_of(statement) != REMARK:
  var_is_defined, 1, var_700_1_statement, 1, LOCAL(1),
  // is_defined && node_type_of(statement) != REMARK:
  var_std__and, 2, LOCAL(1), lambda_61, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_62, func_simplify_statements, TAIL_CALL,
  POS(695, 3),
  POS(696, 31),
  POS(696, 3),
  POS(696, 4),
  POS(697, 3),
  POS(698, 3),
  POS(699, 18),
  POS(699, 3),
  POS(699, 13),
  POS(700, 3),
  POS(701, 3),
  POS(702, 16),
  POS(702, 16),
  POS(702, 3),
  POS(705, 15),
  POS(705, 15),
  POS(704, 3)
};

static TAB_NUM t_lambda_59[] = {
  1, // locals
  0, // parameters
  // is_empty:
  var_is_empty, 1, var_701_1_statements, 1, LOCAL(1),
  // statements.is_empty:
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(702, 43),
  POS(702, 32)
};

static TAB_NUM t_lambda_60[] = {
  0, // locals
  0, // parameters
  // syntax_error "Missing statements" self
  var_syntax_error, 2, str_Missing_statemen, var_694_30_self, TAIL_CALL,
  POS(703, 5)
};

static TAB_NUM t_lambda_61[] = {
  3, // locals
  0, // parameters
  // node_type_of(statement) != REMARK:
  var_node_type_of, 1, var_700_1_statement, 1, LOCAL(1),
  // node_type_of(statement) != REMARK:
  var_std__equal, 2, LOCAL(1), var_REMARK, 1, LOCAL(2),
  // node_type_of(statement) != REMARK:
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // node_type_of(statement) != REMARK:
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(705, 29),
  POS(705, 29),
  POS(705, 29),
  POS(705, 29)
};

static TAB_NUM t_lambda_62[] = {
  1, // locals
  0, // parameters
  // all_of(statements is_a_remark):
  var_all_of, 2, var_701_1_statements, var_is_a_remark, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_63, lambda_64, TAIL_CALL,
  POS(707, 9),
  POS(706, 7)
};

static TAB_NUM t_lambda_63[] = {
  0, // locals
  0, // parameters
  // self.statement_of undefined
  LET, -1, var_694_30_self, var_statement_of, var_undefined, var_694_30_self,
  // !statements list(statement)
  var_list, 1, var_700_1_statement, 1, var_701_1_statements,
  // simplify_statements
  func_simplify_statements, 0, TAIL_CALL,
  POS(708, 12),
  POS(709, 11),
  POS(710, 11)
};

static TAB_NUM t_lambda_64[] = {
  1, // locals
  0, // parameters
  // statements(1)
  var_701_1_statements, 1, num_1, 1, LOCAL(1),
  // syntax_error "unexpected statements" statements(1)
  var_syntax_error, 2, str_unexpected_state, LOCAL(1), TAIL_CALL,
  POS(712, 48),
  POS(712, 11)
};

static TAB_NUM t_func_simplify_statements[] = {
  3, // locals
  0, // parameters
  // collect_local_definitions !resolve_variable statements
  func_collect_local_definitions, 1, var_701_1_statements, 1, var_resolve_variable,
  // map_reduce !self.statements_of statements
  var_map_reduce, 4, var_701_1_statements, lambda_65, var_append, var_empty_list, 1, LOCAL(1),
  // self.statements_of statements
  LET, -1, var_694_30_self, var_statements_of, LOCAL(1), var_694_30_self,
  // statements_of(self) is_an_io_call)
  var_statements_of, 1, var_694_30_self, 1, LOCAL(1),
  // !self.is_an_io_call any_of(statements_of(self) is_an_io_call)
  var_any_of, 2, LOCAL(1), var_is_an_io_call, 1, LOCAL(3),
  // self.is_an_io_call any_of(statements_of(self) is_an_io_call)
  LET, -1, var_694_30_self, var_is_an_io_call, LOCAL(3), var_694_30_self,
  // -> self temp_no empty_statements
  LET, 3, var_694_30_self, var_694_35_temp_no, var_empty_statements, TAIL_CALL,
  POS(716, 5),
  POS(717, 5),
  POS(717, 17),
  POS(724, 32),
  POS(724, 5),
  POS(724, 6),
  POS(725, 5)
};

static TAB_NUM t_lambda_65[] = {
  5, // locals
  1, // parameters
  LOCAL(2), // 718_3_a_statement
  // simplify &a_statement 0 $_dummy_temp_no $more_statements
  var_simplify, 2, LOCAL(2), num_0, 3, LOCAL(2), LOCAL(1), LOCAL(3),
  // more_statements $leading_statements $trailing_statements
  LOCAL(3), 0, 2, LOCAL(4), LOCAL(5),
  // list(a_statement) trailing_statements
  var_list, 1, LOCAL(2), 1, LOCAL(1),
  // append leading_statements list(a_statement) trailing_statements
  var_append, 3, LOCAL(4), LOCAL(1), LOCAL(5), TAIL_CALL,
  POS(719, 9),
  POS(720, 9),
  POS(721, 35),
  POS(721, 9)
};

static TAB_NUM t_func_check_statements[] = {
  0, // locals
  1, // parameters
  var_727_20_body,
  // $statements statements_of(body)
  var_statements_of, 1, var_727_20_body, 1, var_728_1_statements,
  // $parameter_state 0
  LET, 1, num_0, 1, var_729_1_parameter_state,
  // $parameters undefined
  LET, 1, var_undefined, 1, var_730_1_parameters,
  // $new_statements empty_list
  LET, 1, var_empty_list, 1, var_731_1_new_statements,
  // $n length_of(statements)
  var_length_of, 1, var_728_1_statements, 1, var_732_1_n,
  // for_each statements
  var_for_each, 3, var_728_1_statements, lambda_66, lambda_77, TAIL_CALL,
  POS(728, 3),
  POS(729, 3),
  POS(730, 3),
  POS(731, 3),
  POS(732, 3),
  POS(733, 3)
};

static TAB_NUM t_lambda_66[] = {
  1, // locals
  2, // parameters
  var_734_3_idx,
  var_734_7_statement,
  // node_type_of(statement)
  var_node_type_of, 1, var_734_7_statement, 1, LOCAL(1),
  // case node_type_of(statement)
  var_case, 8, LOCAL(1), var_MULTILINE_REMARK, lambda_MULTILINE_REMARK, var_OPEN_PARAMETERS, lambda_OPEN_PARAMETERS, var_CLOSE_PARAMETERS, lambda_CLOSE_PARAMETERS, lambda_72, TAIL_CALL,
  POS(735, 12),
  POS(735, 7)
};

static TAB_NUM t_lambda_MULTILINE_REMARK[] = {
  1, // locals
  0, // parameters
  // parameter_state == 1:
  var_std__equal, 2, var_729_1_parameter_state, num_1, 1, LOCAL(1),
  // on parameter_state == 1:
  var_on, 2, LOCAL(1), lambda_67, 0,
  // next
  var_next, 0, TAIL_CALL,
  POS(737, 14),
  POS(737, 11),
  POS(739, 11)
};

static TAB_NUM t_lambda_67[] = {
  0, // locals
  0, // parameters
  // syntax_error "Closing parenthesis expected" statement
  var_syntax_error, 2, str_Closing_parenthe, var_734_7_statement, TAIL_CALL,
  POS(738, 13)
};

static TAB_NUM t_lambda_OPEN_PARAMETERS[] = {
  1, // locals
  0, // parameters
  // parameter_state == 0:
  var_std__equal, 2, var_729_1_parameter_state, num_0, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_68, lambda_69, TAIL_CALL,
  POS(742, 13),
  POS(741, 11)
};

static TAB_NUM t_lambda_68[] = {
  0, // locals
  0, // parameters
  // !parameter_state 1
  LET, 1, num_1, 1, var_729_1_parameter_state,
  // !parameters parameter_of(statement)
  var_parameter_of, 1, var_734_7_statement, 1, var_730_1_parameters,
  // next
  var_next, 0, TAIL_CALL,
  POS(743, 15),
  POS(744, 15),
  POS(745, 15)
};

static TAB_NUM t_lambda_69[] = {
  0, // locals
  0, // parameters
  // syntax_error "Unexpected opening parenthesis" statement
  var_syntax_error, 2, str_Unexpected_openi, var_734_7_statement, TAIL_CALL,
  POS(747, 15)
};

static TAB_NUM t_lambda_CLOSE_PARAMETERS[] = {
  1, // locals
  0, // parameters
  // parameter_state == 1:
  var_std__equal, 2, var_729_1_parameter_state, num_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_70, lambda_71, TAIL_CALL,
  POS(750, 13),
  POS(749, 11)
};

static TAB_NUM t_lambda_70[] = {
  0, // locals
  0, // parameters
  // !parameter_state 2
  LET, 1, num_2, 1, var_729_1_parameter_state,
  // next
  var_next, 0, TAIL_CALL,
  POS(751, 15),
  POS(752, 15)
};

static TAB_NUM t_lambda_71[] = {
  0, // locals
  0, // parameters
  // syntax_error "Unexpected closing parenthesis" statement
  var_syntax_error, 2, str_Unexpected_closi, var_734_7_statement, TAIL_CALL,
  POS(754, 15)
};

static TAB_NUM t_lambda_72[] = {
  4, // locals
  0, // parameters
  // parameter_state == 1:
  var_std__equal, 2, var_729_1_parameter_state, num_1, 1, LOCAL(1),
  // on parameter_state == 1:
  var_on, 2, LOCAL(1), lambda_73, 0,
  // head_of(statement)) == RETURN && idx < n:
  var_head_of, 1, var_734_7_statement, 1, LOCAL(1),
  // node_type_of(head_of(statement)) == RETURN && idx < n:
  var_node_type_of, 1, LOCAL(1), 1, LOCAL(2),
  // node_type_of(head_of(statement)) == RETURN && idx < n:
  var_std__equal, 2, LOCAL(2), var_RETURN, 1, LOCAL(3),
  // node_type_of(head_of(statement)) == RETURN && idx < n:
  var_std__and, 2, LOCAL(3), lambda_74, 1, LOCAL(4),
  // on node_type_of(head_of(statement)) == RETURN && idx < n:
  var_on, 2, LOCAL(4), lambda_75, 0,
  // !parameter_state 2
  LET, 1, num_2, 1, var_729_1_parameter_state,
  // is_not_empty
  var_is_not_empty, 1, var_731_1_new_statements, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), var_next, lambda_76, TAIL_CALL,
  POS(756, 14),
  POS(756, 11),
  POS(758, 27),
  POS(758, 14),
  POS(758, 14),
  POS(758, 14),
  POS(758, 11),
  POS(761, 11),
  POS(763, 28),
  POS(762, 11)
};

static TAB_NUM t_lambda_73[] = {
  0, // locals
  0, // parameters
  // syntax_error "Closing parenthesis expected" statement
  var_syntax_error, 2, str_Closing_parenthe, var_734_7_statement, TAIL_CALL,
  POS(757, 13)
};

static TAB_NUM t_lambda_74[] = {
  1, // locals
  0, // parameters
  // idx < n:
  var_std__less, 2, var_734_3_idx, var_732_1_n, 1, LOCAL(1),
  // idx < n:
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(758, 60),
  POS(758, 60)
};

static TAB_NUM t_lambda_75[] = {
  0, // locals
  0, // parameters
  // syntax_error "Return statement not allowed within function body"
  var_syntax_error, 2, str_Return_statement, var_734_7_statement, TAIL_CALL,
  POS(759, 13)
};

static TAB_NUM t_lambda_76[] = {
  0, // locals
  0, // parameters
  // !new_statements range(statements idx -1)
  var_range, 3, var_728_1_statements, var_734_3_idx, minus_num_1, 1, var_731_1_new_statements,
  // next
  var_next, 0, TAIL_CALL,
  POS(766, 15),
  POS(767, 15)
};

static TAB_NUM t_lambda_77[] = {
  1, // locals
  0, // parameters
  // is_defined
  var_is_defined, 1, var_730_1_parameters, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_78, lambda_79, TAIL_CALL,
  POS(770, 20),
  POS(769, 7)
};

static TAB_NUM t_lambda_78[] = {
  1, // locals
  0, // parameters
  // body
  LET, -2, var_727_20_body, var_parameters_of, var_730_1_parameters, var_statements_of, var_731_1_new_statements, LOCAL(1),
  // 
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(772, 11),
  POS(771, 11)
};

static TAB_NUM t_lambda_79[] = {
  0, // locals
  0, // parameters
  //  body
  LET, 1, var_727_20_body, TAIL_CALL,
  POS(775, 11)
};

static TAB_NUM t_func_funky_types__statement___simplify[] = {
  1, // locals
  2, // parameters
  var_777_35_self,
  var_777_40_temp_no,
  // $head head_of(self)
  var_head_of, 1, var_777_35_self, 1, var_778_1_head,
  // $original_head head
  LET, 1, var_778_1_head, 1, var_779_1_original_head,
  // $arguments arguments_of(self)
  var_arguments_of, 1, var_777_35_self, 1, var_780_1_arguments,
  // node_type_of(head)
  var_node_type_of, 1, var_778_1_head, 1, LOCAL(1),
  // case node_type_of(head)
  var_case, 6, LOCAL(1), var_FUNCTOR, lambda_FUNCTOR, var_RETURN, lambda_RETURN, lambda_80, TAIL_CALL,
  POS(778, 3),
  POS(779, 3),
  POS(780, 3),
  POS(781, 8),
  POS(781, 3)
};

static TAB_NUM t_lambda_FUNCTOR[] = {
  0, // locals
  0, // parameters
  // simplify_head_and_arguments false
  func_simplify_head_and_arguments, 1, var_false, TAIL_CALL,
  POS(783, 7)
};

static TAB_NUM t_lambda_RETURN[] = {
  0, // locals
  0, // parameters
  // check_that_all_arguments_are_inputs
  func_check_that_all_arguments_are_inputs, 0, 0,
  // simplify_head_and_arguments false
  func_simplify_head_and_arguments, 1, var_false, TAIL_CALL,
  POS(785, 7),
  POS(786, 7)
};

static TAB_NUM t_lambda_80[] = {
  0, // locals
  0, // parameters
  // check_that_all_arguments_are_inputs
  func_check_that_all_arguments_are_inputs, 0, 0,
  // push &arguments head
  var_push, 2, var_780_1_arguments, var_778_1_head, 1, var_780_1_arguments,
  // !head std("assign" self)
  func_std, 2, str_assign, var_777_35_self, 1, var_778_1_head,
  // simplify_head_and_arguments true
  func_simplify_head_and_arguments, 1, var_true, TAIL_CALL,
  POS(788, 7),
  POS(789, 7),
  POS(790, 7),
  POS(791, 7)
};

static TAB_NUM t_func_simplify_head_and_arguments[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 793_31_is_an_assignment
  // simplify head !self.head_of &temp_no $result_statements
  var_simplify, 2, var_778_1_head, var_777_40_temp_no, 3, LOCAL(1), var_777_40_temp_no, var_794_38_result_statements,
  // self.head_of &temp_no $result_statements
  LET, -1, var_777_35_self, var_head_of, LOCAL(1), var_777_35_self,
  // $new_arguments empty_list
  LET, 1, var_empty_list, 1, var_795_1_new_arguments,
  // for_each arguments !arguments !temp_no !result_statements
  var_for_each, 3, var_780_1_arguments, lambda_81, lambda_85, 3, var_780_1_arguments, var_777_40_temp_no, var_794_38_result_statements,
  // on is_an_assignment:
  var_on, 2, LOCAL(2), lambda_86, 0,
  // self.arguments_of arguments
  LET, -1, var_777_35_self, var_arguments_of, var_780_1_arguments, var_777_35_self,
  // if
  var_if, 3, LOCAL(2), lambda_is_an_assignment, lambda_102, TAIL_CALL,
  POS(794, 5),
  POS(794, 20),
  POS(795, 5),
  POS(796, 5),
  POS(812, 5),
  POS(818, 6),
  POS(819, 5)
};

static TAB_NUM t_lambda_81[] = {
  1, // locals
  1, // parameters
  var_797_3_item,
  // is_a_remark
  var_is_a_remark, 1, var_797_3_item, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), var_next, lambda_82, TAIL_CALL,
  POS(799, 16),
  POS(798, 9)
};

static TAB_NUM t_lambda_82[] = {
  3, // locals
  0, // parameters
  // simplify &item &temp_no $arguments_result_statements
  var_simplify, 2, var_797_3_item, var_777_40_temp_no, 3, var_797_3_item, var_777_40_temp_no, LOCAL(3),
  // append &result_statements arguments_result_statements
  var_append, 2, var_794_38_result_statements, LOCAL(3), 1, var_794_38_result_statements,
  // node_type_of(item) == BACKQUOTED:
  var_node_type_of, 1, var_797_3_item, 1, LOCAL(1),
  // node_type_of(item) == BACKQUOTED:
  var_std__equal, 2, LOCAL(1), var_BACKQUOTED, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_83, lambda_84, TAIL_CALL,
  POS(802, 13),
  POS(803, 13),
  POS(805, 15),
  POS(805, 15),
  POS(804, 13)
};

static TAB_NUM t_lambda_83[] = {
  0, // locals
  0, // parameters
  // resolve_backquoted &new_arguments item
  func_resolve_backquoted, 2, var_795_1_new_arguments, var_797_3_item, 1, var_795_1_new_arguments,
  // next
  var_next, 0, TAIL_CALL,
  POS(806, 17),
  POS(807, 17)
};

static TAB_NUM t_lambda_84[] = {
  0, // locals
  0, // parameters
  // push &new_arguments item
  var_push, 2, var_795_1_new_arguments, var_797_3_item, 1, var_795_1_new_arguments,
  // next
  var_next, 0, TAIL_CALL,
  POS(809, 17),
  POS(810, 17)
};

static TAB_NUM t_lambda_85[] = {
  0, // locals
  0, // parameters
  //  new_arguments temp_no result_statements
  LET, 3, var_795_1_new_arguments, var_777_40_temp_no, var_794_38_result_statements, TAIL_CALL,
  POS(811, 9)
};

static TAB_NUM t_lambda_86[] = {
  2, // locals
  0, // parameters
  // $n length_of(arguments)
  var_length_of, 1, var_780_1_arguments, 1, LOCAL(2),
  // n < 2:
  var_std__less, 2, LOCAL(2), num_2, 1, LOCAL(1),
  // on n < 2:
  var_on, 2, LOCAL(1), lambda_87, 0,
  // 2:
  var_std__less, 2, num_2, LOCAL(2), 1, LOCAL(1),
  // on n > 2:
  var_on, 2, LOCAL(1), lambda_88, TAIL_CALL,
  POS(813, 7),
  POS(814, 10),
  POS(814, 7),
  POS(816, 14),
  POS(816, 7)
};

static TAB_NUM t_lambda_87[] = {
  0, // locals
  0, // parameters
  // syntax_error "Missing argument in assignment" self
  var_syntax_error, 2, str_Missing_argument, var_777_35_self, TAIL_CALL,
  POS(815, 9)
};

static TAB_NUM t_lambda_88[] = {
  1, // locals
  0, // parameters
  // arguments(2)
  var_780_1_arguments, 1, num_2, 1, LOCAL(1),
  // syntax_error "Too many arguments in assignment" arguments(2)
  var_syntax_error, 2, str_Too_many_argumen, LOCAL(1), TAIL_CALL,
  POS(817, 57),
  POS(817, 9)
};

static TAB_NUM t_lambda_is_an_assignment[] = {
  2, // locals
  0, // parameters
  // result_statements $leading_statements $trailing_statements
  var_794_38_result_statements, 0, 2, var_821_19_leading_statements, var_821_39_trailing_statements,
  // arguments(1))
  var_780_1_arguments, 1, num_1, 1, LOCAL(1),
  // $node_type_of_first_argument node_type_of(arguments(1))
  var_node_type_of, 1, LOCAL(1), 1, var_822_1_node_type_of_first_argument,
  // node_type_of(original_head) == DEFINITION
  var_node_type_of, 1, var_779_1_original_head, 1, LOCAL(1),
  // node_type_of(original_head) == DEFINITION
  var_std__equal, 2, LOCAL(1), var_DEFINITION, 1, LOCAL(2),
  // $is_a_slot_definition
  var_std__and, 2, LOCAL(2), lambda_89, 1, var_823_1_is_a_slot_definition,
  // self.is_a_definition is_a_slot_definition
  LET, -1, var_777_35_self, var_is_a_definition, var_823_1_is_a_slot_definition, var_777_35_self,
  // is_empty
  var_is_empty, 1, var_821_19_leading_statements, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), func_check_trailing_statements, lambda_92, TAIL_CALL,
  POS(821, 9),
  POS(822, 51),
  POS(822, 9),
  POS(825, 13),
  POS(825, 13),
  POS(823, 9),
  POS(830, 10),
  POS(832, 30),
  POS(831, 9)
};

static TAB_NUM t_lambda_89[] = {
  2, // locals
  0, // parameters
  // node_type_of_first_argument == ATTRIBUTE_VALUE_PAIR
  var_std__equal, 2, var_822_1_node_type_of_first_argument, var_ATTRIBUTE_VALUE_PAIR, 1, LOCAL(1),
  // 
  var_std__or, 2, LOCAL(1), lambda_90, 1, LOCAL(2),
  // 
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(827, 15),
  POS(826, 15),
  POS(826, 15)
};

static TAB_NUM t_lambda_90[] = {
  2, // locals
  0, // parameters
  // node_type_of_first_argument == METHOD_VALUE_PAIR
  var_std__equal, 2, var_822_1_node_type_of_first_argument, var_METHOD_VALUE_PAIR, 1, LOCAL(1),
  // 
  var_std__or, 2, LOCAL(1), lambda_91, 1, LOCAL(2),
  // node_type_of_first_argument == METHOD_VALUE_PAIR
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(828, 15),
  POS(826, 15),
  POS(828, 15)
};

static TAB_NUM t_lambda_91[] = {
  1, // locals
  0, // parameters
  // node_type_of_first_argument == TYPE_FUNCTION
  var_std__equal, 2, var_822_1_node_type_of_first_argument, var_TYPE_FUNCTION, 1, LOCAL(1),
  // node_type_of_first_argument == TYPE_FUNCTION
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(829, 15),
  POS(829, 15)
};

static TAB_NUM t_lambda_92[] = {
  0, // locals
  0, // parameters
  // $last_statement leading_statements(-1)
  var_821_19_leading_statements, 1, minus_num_1, 1, var_835_1_last_statement,
  // if
  var_if, 3, var_823_1_is_a_slot_definition, lambda_is_a_slot_definition, lambda_93, TAIL_CALL,
  POS(835, 13),
  POS(836, 13)
};

static TAB_NUM t_lambda_is_a_slot_definition[] = {
  5, // locals
  0, // parameters
  // arguments(1))))
  var_780_1_arguments, 1, num_1, 1, LOCAL(1),
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
  var_arguments_of, 1, var_835_1_last_statement, 1, LOCAL(3),
  // arguments_of(-1)
  LOCAL(3), 2, minus_num_1, LOCAL(2), 1, LOCAL(3),
  // last_statement.arguments_of(-1)
  LET, -1, var_835_1_last_statement, var_arguments_of, LOCAL(3), var_835_1_last_statement,
  // leading_statements(-1) last_statement
  var_821_19_leading_statements, 2, minus_num_1, var_835_1_last_statement, 1, var_821_19_leading_statements,
  // arguments(1).argument_of.identifier_of const_name
  var_780_1_arguments, 1, num_1, 1, LOCAL(2),
  // argument_of.identifier_of const_name
  var_argument_of, 1, LOCAL(2), 1, LOCAL(3),
  // argument_of.identifier_of const_name
  LET, -1, LOCAL(3), var_identifier_of, LOCAL(5), LOCAL(3),
  // arguments(1).argument_of.identifier_of const_name
  LET, -1, LOCAL(2), var_argument_of, LOCAL(3), LOCAL(2),
  // arguments(1).argument_of.identifier_of const_name
  var_780_1_arguments, 2, num_1, LOCAL(2), 1, var_780_1_arguments,
  // arguments(1).argument_of.kind_of LOCAL
  var_780_1_arguments, 1, num_1, 1, LOCAL(2),
  // argument_of.kind_of LOCAL
  var_argument_of, 1, LOCAL(2), 1, LOCAL(3),
  // argument_of.kind_of LOCAL
  LET, -1, LOCAL(3), var_kind_of, var_LOCAL, LOCAL(3),
  // arguments(1).argument_of.kind_of LOCAL
  LET, -1, LOCAL(2), var_argument_of, LOCAL(3), LOCAL(2),
  // arguments(1).argument_of.kind_of LOCAL
  var_780_1_arguments, 2, num_1, LOCAL(2), 1, var_780_1_arguments,
  // self.arguments_of arguments
  LET, -1, var_777_35_self, var_arguments_of, var_780_1_arguments, var_777_35_self,
  // check_trailing_statements
  func_check_trailing_statements, 0, TAIL_CALL,
  POS(838, 65),
  POS(838, 53),
  POS(838, 37),
  POS(838, 17),
  POS(839, 17),
  POS(840, 17),
  POS(840, 33),
  POS(840, 33),
  POS(840, 18),
  POS(844, 18),
  POS(845, 18),
  POS(845, 31),
  POS(845, 31),
  POS(845, 18),
  POS(845, 18),
  POS(846, 18),
  POS(846, 31),
  POS(846, 31),
  POS(846, 18),
  POS(846, 18),
  POS(847, 18),
  POS(848, 17)
};

static TAB_NUM t_lambda_93[] = {
  5, // locals
  0, // parameters
  // source_group_of(self)
  var_source_group_of, 1, var_777_35_self, 1, LOCAL(1),
  // source_position_of(self)
  var_source_position_of, 1, var_777_35_self, 1, LOCAL(2),
  // arguments(2))
  var_780_1_arguments, 1, num_2, 1, LOCAL(3),
  // arguments_of(last_statement)(-1 arguments(2))
  var_arguments_of, 1, var_835_1_last_statement, 1, LOCAL(4),
  // arguments_of(last_statement)(-1 arguments(2))
  LOCAL(4), 2, minus_num_1, LOCAL(3), 1, LOCAL(5),
  // !self
  LET, -3, var_835_1_last_statement, var_source_group_of, LOCAL(1), var_source_position_of, LOCAL(2), var_arguments_of, LOCAL(5), var_777_35_self,
  // range &leading_statements 1 -2
  var_range, 3, var_821_19_leading_statements, num_1, minus_num_2, 1, var_821_19_leading_statements,
  // check_trailing_statements
  func_check_trailing_statements, 0, TAIL_CALL,
  POS(852, 38),
  POS(853, 41),
  POS(854, 67),
  POS(854, 35),
  POS(854, 35),
  POS(850, 17),
  POS(855, 17),
  POS(856, 17)
};

static TAB_NUM t_func_check_trailing_statements[] = {
  2, // locals
  0, // parameters
  // is_empty
  var_is_empty, 1, var_821_39_trailing_statements, 1, LOCAL(1),
  // 
  var_std__or, 2, LOCAL(1), lambda_94, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_95, func_process_trailing_statements, TAIL_CALL,
  POS(861, 35),
  POS(860, 15),
  POS(859, 11)
};

static TAB_NUM t_lambda_94[] = {
  4, // locals
  0, // parameters
  // head_of(self)) != "std::assign"
  var_head_of, 1, var_777_35_self, 1, LOCAL(1),
  // identifier_of(head_of(self)) != "std::assign"
  var_identifier_of, 1, LOCAL(1), 1, LOCAL(2),
  // identifier_of(head_of(self)) != "std::assign"
  var_std__equal, 2, LOCAL(2), str_stdassign, 1, LOCAL(3),
  // identifier_of(head_of(self)) != "std::assign"
  var_std__not, 1, LOCAL(3), 1, LOCAL(4),
  // identifier_of(head_of(self)) != "std::assign"
  LET, 1, LOCAL(4), TAIL_CALL,
  POS(862, 29),
  POS(862, 15),
  POS(862, 15),
  POS(862, 15),
  POS(862, 15)
};

static TAB_NUM t_lambda_95[] = {
  1, // locals
  0, // parameters
  // new
  var_new, 3, var_funky_types__statement_list, var_821_19_leading_statements, var_821_39_trailing_statements, 1, LOCAL(1),
  // 
  LET, 3, var_777_35_self, var_777_40_temp_no, LOCAL(1), TAIL_CALL,
  POS(866, 15),
  POS(863, 15)
};

static TAB_NUM t_func_process_trailing_statements[] = {
  1, // locals
  0, // parameters
  // arguments(2))
  var_780_1_arguments, 1, num_2, 1, LOCAL(1),
  // $temp_name identifier_of(arguments(2))
  var_identifier_of, 1, LOCAL(1), 1, var_879_1_temp_name,
  // $value arguments(1)
  var_780_1_arguments, 1, num_1, 1, var_880_1_value,
  // for_each trailing_statements
  var_for_each, 3, var_821_39_trailing_statements, lambda_96, lambda_100, TAIL_CALL,
  POS(879, 36),
  POS(879, 11),
  POS(880, 11),
  POS(881, 11)
};

static TAB_NUM t_lambda_96[] = {
  1, // locals
  2, // parameters
  var_882_3_stmt_idx,
  var_882_12_trailing_statement,
  // arguments_of(trailing_statement)
  var_arguments_of, 1, var_882_12_trailing_statement, 1, LOCAL(1),
  // for_each arguments_of(trailing_statement)
  var_for_each, 3, LOCAL(1), lambda_97, var_next, TAIL_CALL,
  POS(883, 24),
  POS(883, 15)
};

static TAB_NUM t_lambda_97[] = {
  1, // locals
  2, // parameters
  var_884_3_arg_idx,
  var_884_11_argument,
  // node_type_of(argument)
  var_node_type_of, 1, var_884_11_argument, 1, LOCAL(1),
  // case node_type_of(argument)
  var_case, 6, LOCAL(1), var_FUNCTOR, lambda_2_FUNCTOR, var_INLINE_ATTRIBUTE_VALUE_PAIR, lambda_INLINE_ATTRIBUTE_VALUE_PAIR, var_next, TAIL_CALL,
  POS(885, 24),
  POS(885, 19)
};

static TAB_NUM t_lambda_2_FUNCTOR[] = {
  2, // locals
  0, // parameters
  // identifier_of(argument) == temp_name:
  var_identifier_of, 1, var_884_11_argument, 1, LOCAL(1),
  // identifier_of(argument) == temp_name:
  var_std__equal, 2, LOCAL(1), var_879_1_temp_name, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_98, var_next, TAIL_CALL,
  POS(888, 25),
  POS(888, 25),
  POS(887, 23)
};

static TAB_NUM t_lambda_98[] = {
  2, // locals
  0, // parameters
  // arguments_of(arg_idx) value
  var_arguments_of, 1, var_882_12_trailing_statement, 1, LOCAL(2),
  // arguments_of(arg_idx) value
  LOCAL(2), 2, var_884_3_arg_idx, var_880_1_value, 1, LOCAL(2),
  // trailing_statement.arguments_of(arg_idx) value
  LET, -1, var_882_12_trailing_statement, var_arguments_of, LOCAL(2), var_882_12_trailing_statement,
  // trailing_statements(stmt_idx) trailing_statement
  var_821_39_trailing_statements, 2, var_882_3_stmt_idx, var_882_12_trailing_statement, 1, var_821_39_trailing_statements,
  // return
  lambda_101, 0, TAIL_CALL,
  POS(889, 47),
  POS(889, 47),
  POS(889, 28),
  POS(890, 28),
  POS(891, 27)
};

static TAB_NUM t_lambda_INLINE_ATTRIBUTE_VALUE_PAIR[] = {
  3, // locals
  0, // parameters
  // expression_of(argument)) == temp_name:
  var_expression_of, 1, var_884_11_argument, 1, LOCAL(1),
  // identifier_of(expression_of(argument)) == temp_name:
  var_identifier_of, 1, LOCAL(1), 1, LOCAL(2),
  // identifier_of(expression_of(argument)) == temp_name:
  var_std__equal, 2, LOCAL(2), var_879_1_temp_name, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_99, var_next, TAIL_CALL,
  POS(895, 39),
  POS(895, 25),
  POS(895, 25),
  POS(894, 23)
};

static TAB_NUM t_lambda_99[] = {
  3, // locals
  0, // parameters
  // !trailing_statement.arguments_of(arg_idx)
  LET, -1, var_884_11_argument, var_expression_of, var_880_1_value, LOCAL(2),
  // arguments_of(arg_idx)
  var_arguments_of, 1, var_882_12_trailing_statement, 1, LOCAL(3),
  // arguments_of(arg_idx)
  LOCAL(3), 2, var_884_3_arg_idx, LOCAL(2), 1, LOCAL(3),
  // trailing_statement.arguments_of(arg_idx)
  LET, -1, var_882_12_trailing_statement, var_arguments_of, LOCAL(3), var_882_12_trailing_statement,
  // trailing_statements(stmt_idx) trailing_statement
  var_821_39_trailing_statements, 2, var_882_3_stmt_idx, var_882_12_trailing_statement, 1, var_821_39_trailing_statements,
  // return
  lambda_101, 0, TAIL_CALL,
  POS(896, 27),
  POS(896, 47),
  POS(896, 47),
  POS(896, 28),
  POS(898, 28),
  POS(899, 27)
};

static TAB_NUM t_lambda_100[] = {
  0, // locals
  0, // parameters
  // debug::print "
  var_debug__print, 1, str_TEMP_NOT_FOUND_I, 0,
  // debug::exit
  var_debug__exit, 0, TAIL_CALL,
  POS(904, 15),
  POS(906, 15)
};

static TAB_NUM t_lambda_101[] = {
  3, // locals
  0, // parameters
  // trailing_statements(1)
  var_821_39_trailing_statements, 1, num_1, 1, LOCAL(1),
  // range(trailing_statements 2 -1)
  var_range, 3, var_821_39_trailing_statements, num_2, minus_num_1, 1, LOCAL(2),
  // new
  var_new, 3, var_funky_types__statement_list, var_821_19_leading_statements, LOCAL(2), 1, LOCAL(3),
  // 
  LET, 3, LOCAL(1), var_777_40_temp_no, LOCAL(3), TAIL_CALL,
  POS(910, 13),
  POS(915, 15),
  POS(912, 13),
  POS(909, 13)
};

static TAB_NUM t_lambda_102[] = {
  4, // locals
  0, // parameters
  // head_of(self).is_an_io_call
  var_head_of, 1, var_777_35_self, 1, LOCAL(1),
  // is_an_io_call
  var_is_an_io_call, 1, LOCAL(1), 1, LOCAL(2),
  // !self.is_an_io_call
  var_std__or, 2, LOCAL(2), lambda_103, 1, LOCAL(4),
  // self.is_an_io_call
  LET, -1, var_777_35_self, var_is_an_io_call, LOCAL(4), var_777_35_self,
  // -> self temp_no result_statements
  LET, 3, var_777_35_self, var_777_40_temp_no, var_794_38_result_statements, TAIL_CALL,
  POS(919, 13),
  POS(919, 27),
  POS(917, 9),
  POS(917, 10),
  POS(921, 9)
};

static TAB_NUM t_lambda_103[] = {
  2, // locals
  0, // parameters
  // arguments_of(self) is_an_io_call)
  var_arguments_of, 1, var_777_35_self, 1, LOCAL(1),
  // any_of(arguments_of(self) is_an_io_call)
  var_any_of, 2, LOCAL(1), var_is_an_io_call, 1, LOCAL(2),
  // any_of(arguments_of(self) is_an_io_call)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(920, 20),
  POS(920, 13),
  POS(920, 13)
};

static TAB_NUM t_func_check_that_all_arguments_are_inputs[] = {
  1, // locals
  0, // parameters
  // $argument find_first(arguments is_an_output)
  var_find_first, 2, var_780_1_arguments, var_is_an_output, 1, var_924_1_argument,
  // is_defined:
  var_is_defined, 1, var_924_1_argument, 1, LOCAL(1),
  // on argument.is_defined:
  var_on, 2, LOCAL(1), lambda_104, TAIL_CALL,
  POS(924, 5),
  POS(925, 17),
  POS(925, 5)
};

static TAB_NUM t_lambda_104[] = {
  0, // locals
  0, // parameters
  // syntax_error "Unexpected output argument" argument
  var_syntax_error, 2, str_Unexpected_outpu, var_924_1_argument, TAIL_CALL,
  POS(926, 7)
};

static TAB_NUM t_func_funky_types__numeric_literal___simplify[] = {
  5, // locals
  2, // parameters
  LOCAL(3), // 928_41_self
  LOCAL(4), // 928_46_temp_no
  // digits_of(self) '@apos;')
  var_digits_of, 1, LOCAL(3), 1, LOCAL(1),
  // $digits delete_all(digits_of(self) '@apos;')
  var_delete_all, 2, LOCAL(1), chr_39, 1, LOCAL(5),
  // self.digits_of digits
  LET, -1, LOCAL(3), var_digits_of, LOCAL(5), LOCAL(3),
  // to_string &digits
  var_to_string, 1, LOCAL(5), 1, LOCAL(5),
  // replace_all &digits
  var_replace_all, 3, LOCAL(5), key_value_pair_933_1, key_value_pair_934_1, 1, LOCAL(5),
  // "num_@(digits)")
  var_std__string, 2, str_num, LOCAL(5), 1, LOCAL(1),
  // .funky::key_of "num_@(digits)")
  LET, -1, LOCAL(3), var_funky__key_of, LOCAL(1), LOCAL(2),
  // ->
  LET, 3, LOCAL(2), LOCAL(4), var_empty_statements, TAIL_CALL,
  POS(929, 22),
  POS(929, 3),
  POS(930, 4),
  POS(931, 3),
  POS(932, 3),
  POS(936, 25),
  POS(936, 10),
  POS(935, 3)
};

static TAB_NUM t_func_funky_types__character_literal___simplify[] = {
  7, // locals
  2, // parameters
  LOCAL(6), // 940_43_self
  LOCAL(7), // 940_48_temp_no
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
  POS(943, 7),
  POS(943, 7),
  POS(943, 29),
  POS(943, 40),
  POS(942, 5),
  POS(941, 3)
};

static TAB_NUM t_func_funky_types__numeric_character_literal___simplify[] = {
  5, // locals
  2, // parameters
  LOCAL(3), // 948_51_self
  LOCAL(4), // 948_56_temp_no
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
  POS(949, 11),
  POS(949, 27),
  POS(949, 3),
  POS(953, 22),
  POS(951, 5),
  POS(950, 3)
};

static TAB_NUM t_func_funky_types__named_character_literal___simplify[] = {
  1, // locals
  2, // parameters
  var_957_49_self,
  var_957_54_temp_no,
  // funky::name_of(self))
  var_funky__name_of, 1, var_957_49_self, 1, LOCAL(1),
  // $chr character_from_name(funky::name_of(self))
  var_character_from_name, 1, LOCAL(1), 1, var_958_1_chr,
  // is_defined
  var_is_defined, 1, var_958_1_chr, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_105, lambda_106, TAIL_CALL,
  POS(958, 28),
  POS(958, 3),
  POS(960, 9),
  POS(959, 3)
};

static TAB_NUM t_lambda_105[] = {
  3, // locals
  0, // parameters
  // to_integer.to_string self)
  var_to_integer, 1, var_958_1_chr, 1, LOCAL(1),
  // to_string self)
  var_to_string, 1, LOCAL(1), 1, LOCAL(2),
  // create_numeric_character_literal(chr.to_integer.to_string self)
  func_create_numeric_character_literal, 2, LOCAL(2), var_957_49_self, 1, LOCAL(3),
  // 
  LET, 3, LOCAL(3), var_957_54_temp_no, var_empty_statements, TAIL_CALL,
  POS(962, 44),
  POS(962, 55),
  POS(962, 7),
  POS(961, 7)
};

static TAB_NUM t_lambda_106[] = {
  0, // locals
  0, // parameters
  // syntax_error "Invalid character name" self
  var_syntax_error, 2, str_Invalid_characte, var_957_49_self, TAIL_CALL,
  POS(966, 7)
};

static TAB_NUM t_func_funky_types__at_character_literal___simplify[] = {
  3, // locals
  2, // parameters
  LOCAL(2), // 968_46_self
  LOCAL(3), // 968_51_temp_no
  // create_numeric_character_literal("64" self)
  func_create_numeric_character_literal, 2, string_3, LOCAL(2), 1, LOCAL(1),
  // ->
  LET, 3, LOCAL(1), LOCAL(3), var_empty_statements, TAIL_CALL,
  POS(970, 5),
  POS(969, 3)
};

static TAB_NUM t_func_create_numeric_character_literal[] = {
  6, // locals
  2, // parameters
  LOCAL(5), // 974_36_digits
  LOCAL(6), // 974_43_original_node
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
  POS(978, 22),
  POS(979, 24),
  POS(980, 27),
  POS(976, 5),
  POS(975, 3)
};

static TAB_NUM t_func_funky_types__unique___simplify[] = {
  6, // locals
  2, // parameters
  LOCAL(4), // 982_32_self
  LOCAL(5), // 982_37_temp_no
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
  POS(984, 24),
  POS(984, 11),
  POS(984, 5),
  POS(983, 3),
  POS(988, 29),
  POS(988, 22),
  POS(986, 5),
  POS(985, 3)
};

static TAB_NUM t_func_funky_types__string_literal___simplify[] = {
  1, // locals
  2, // parameters
  var_992_40_self,
  var_992_45_temp_no,
  // $arguments empty_list
  LET, 1, var_empty_list, 1, var_993_1_arguments,
  // $characters ""
  LET, 1, string_4, 1, var_994_1_characters,
  // $statements empty_statements
  LET, 1, var_empty_statements, 1, var_995_1_statements,
  // $components components_of(self)
  var_components_of, 1, var_992_40_self, 1, var_996_1_components,
  // is_empty
  var_is_empty, 1, var_996_1_components, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_107, lambda_108, TAIL_CALL,
  POS(993, 3),
  POS(994, 3),
  POS(995, 3),
  POS(996, 3),
  POS(998, 16),
  POS(997, 3)
};

static TAB_NUM t_lambda_107[] = {
  3, // locals
  0, // parameters
  // source_group_of(self)
  var_source_group_of, 1, var_992_40_self, 1, LOCAL(1),
  // source_position_of(self)
  var_source_position_of, 1, var_992_40_self, 1, LOCAL(2),
  // funky_types::character_sequence
  LET, -4, var_funky_types__character_sequence, var_characters_of, string_4, var_funky__key_of, str_string, var_source_group_of, LOCAL(1), var_source_position_of, LOCAL(2), LOCAL(3),
  // 
  LET, 3, LOCAL(3), var_992_45_temp_no, var_empty_statements, TAIL_CALL,
  POS(1003, 26),
  POS(1004, 29),
  POS(1000, 7),
  POS(999, 7)
};

static TAB_NUM t_lambda_108[] = {
  0, // locals
  0, // parameters
  // for_each components
  var_for_each, 3, var_996_1_components, lambda_109, lambda_115, TAIL_CALL,
  POS(1008, 7)
};

static TAB_NUM t_lambda_109[] = {
  1, // locals
  2, // parameters
  var_1009_3_idx,
  var_1009_7_component,
  // node_type_of(component)
  var_node_type_of, 1, var_1009_7_component, 1, LOCAL(1),
  // case node_type_of(component)
  var_case, 16, LOCAL(1), var_CHARACTER_SEQUENCE, lambda_CHARACTER_SEQUENCE, var_NUMERIC_CHARACTER, lambda_NUMERIC_CHARACTER, var_NAMED_CHARACTER, lambda_NAMED_CHARACTER, var_NEWLINE, lambda_NEWLINE, var_AT_CHARACTER, lambda_AT_CHARACTER, var_ESCAPE_EXPRESSION, lambda_ESCAPE_EXPRESSION, var_TAGGED_EMPTY_CHARACTER, lambda_TAGGED_EMPTY_CHARACTER, lambda_114, TAIL_CALL,
  POS(1010, 16),
  POS(1010, 11)
};

static TAB_NUM t_lambda_CHARACTER_SEQUENCE[] = {
  3, // locals
  0, // parameters
  // $component_characters characters_of(component)
  var_characters_of, 1, var_1009_7_component, 1, var_1012_1_component_characters,
  // 1
  var_std__less, 2, num_1, var_1009_3_idx, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_110, 1, LOCAL(2),
  // if # suppress leading whitespace after line ending with '@'
  var_if, 3, LOCAL(2), lambda_111, lambda_112, 1, LOCAL(3),
  // append &characters
  var_append, 2, var_994_1_characters, LOCAL(3), 1, var_994_1_characters,
  // next
  var_next, 0, TAIL_CALL,
  POS(1012, 15),
  POS(1016, 27),
  POS(1015, 21),
  POS(1014, 17),
  POS(1013, 15),
  POS(1020, 15)
};

static TAB_NUM t_lambda_110[] = {
  4, // locals
  0, // parameters
  // idx-1)) == CHARACTER_SEQUENCE
  var_std__minus, 2, var_1009_3_idx, num_1, 1, LOCAL(1),
  // components(idx-1)) == CHARACTER_SEQUENCE
  var_996_1_components, 1, LOCAL(1), 1, LOCAL(2),
  // node_type_of(components(idx-1)) == CHARACTER_SEQUENCE
  var_node_type_of, 1, LOCAL(2), 1, LOCAL(3),
  // node_type_of(components(idx-1)) == CHARACTER_SEQUENCE
  var_std__equal, 2, LOCAL(3), var_CHARACTER_SEQUENCE, 1, LOCAL(4),
  // node_type_of(components(idx-1)) == CHARACTER_SEQUENCE
  LET, 1, LOCAL(4), TAIL_CALL,
  POS(1017, 45),
  POS(1017, 34),
  POS(1017, 21),
  POS(1017, 21),
  POS(1017, 21)
};

static TAB_NUM t_lambda_111[] = {
  1, // locals
  0, // parameters
  // trim_left(component_characters)
  var_trim_left, 1, var_1012_1_component_characters, 1, LOCAL(1),
  //  trim_left(component_characters)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1018, 22),
  POS(1018, 21)
};

static TAB_NUM t_lambda_112[] = {
  0, // locals
  0, // parameters
  //  component_characters
  LET, 1, var_1012_1_component_characters, TAIL_CALL,
  POS(1019, 21)
};

static TAB_NUM t_lambda_NUMERIC_CHARACTER[] = {
  3, // locals
  0, // parameters
  // digits_of(component).to_integer)
  var_digits_of, 1, var_1009_7_component, 1, LOCAL(1),
  // to_integer)
  var_to_integer, 1, LOCAL(1), 1, LOCAL(2),
  // character(digits_of(component).to_integer)
  var_character, 1, LOCAL(2), 1, LOCAL(3),
  // push &characters character(digits_of(component).to_integer)
  var_push, 2, var_994_1_characters, LOCAL(3), 1, var_994_1_characters,
  // next
  var_next, 0, TAIL_CALL,
  POS(1022, 42),
  POS(1022, 63),
  POS(1022, 32),
  POS(1022, 15),
  POS(1023, 15)
};

static TAB_NUM t_lambda_NAMED_CHARACTER[] = {
  2, // locals
  0, // parameters
  // funky::name_of(component))
  var_funky__name_of, 1, var_1009_7_component, 1, LOCAL(1),
  // $character character_from_name(funky::name_of(component))
  var_character_from_name, 1, LOCAL(1), 1, LOCAL(2),
  // is_undefined:
  var_is_undefined, 1, LOCAL(2), 1, LOCAL(1),
  // on character.is_undefined:
  var_on, 2, LOCAL(1), lambda_113, 0,
  // push &characters character
  var_push, 2, var_994_1_characters, LOCAL(2), 1, var_994_1_characters,
  // next
  var_next, 0, TAIL_CALL,
  POS(1025, 46),
  POS(1025, 15),
  POS(1026, 28),
  POS(1026, 15),
  POS(1028, 15),
  POS(1029, 15)
};

static TAB_NUM t_lambda_113[] = {
  0, // locals
  0, // parameters
  // syntax_error "Invalid character name" component
  var_syntax_error, 2, str_Invalid_characte, var_1009_7_component, TAIL_CALL,
  POS(1027, 17)
};

static TAB_NUM t_lambda_NEWLINE[] = {
  0, // locals
  0, // parameters
  // push &characters '@nl;'
  var_push, 2, var_994_1_characters, chr_10, 1, var_994_1_characters,
  // next
  var_next, 0, TAIL_CALL,
  POS(1031, 15),
  POS(1032, 15)
};

static TAB_NUM t_lambda_AT_CHARACTER[] = {
  0, // locals
  0, // parameters
  // push &characters '@@'
  var_push, 2, var_994_1_characters, chr_64, 1, var_994_1_characters,
  // next
  var_next, 0, TAIL_CALL,
  POS(1034, 15),
  POS(1035, 15)
};

static TAB_NUM t_lambda_ESCAPE_EXPRESSION[] = {
  3, // locals
  0, // parameters
  // expression_of(component)
  var_expression_of, 1, var_1009_7_component, 1, LOCAL(1),
  // simplify expression_of(component)
  var_simplify, 2, LOCAL(1), var_992_45_temp_no, 3, LOCAL(2), var_992_45_temp_no, LOCAL(3),
  // append &statements escape_statements
  var_append, 2, var_995_1_statements, LOCAL(3), 1, var_995_1_statements,
  // add_characters !arguments !characters
  func_add_characters, 0, 2, var_993_1_arguments, var_994_1_characters,
  // push &arguments expression
  var_push, 2, var_993_1_arguments, LOCAL(2), 1, var_993_1_arguments,
  // next
  var_next, 0, TAIL_CALL,
  POS(1037, 24),
  POS(1037, 15),
  POS(1039, 15),
  POS(1040, 15),
  POS(1041, 15),
  POS(1042, 15)
};

static TAB_NUM t_lambda_TAGGED_EMPTY_CHARACTER[] = {
  0, // locals
  0, // parameters
  // next
  var_next, 0, TAIL_CALL,
  POS(1044, 15)
};

static TAB_NUM t_lambda_114[] = {
  1, // locals
  0, // parameters
  // node_type_of(component)
  var_node_type_of, 1, var_1009_7_component, 1, LOCAL(1),
  // debug::dump `node_type_of(component)
  var_debug__dump, 2, str_node_type_ofcomp, LOCAL(1), 0,
  // next
  var_next, 0, TAIL_CALL,
  POS(1046, 28),
  POS(1046, 15),
  POS(1047, 15)
};

static TAB_NUM t_lambda_115[] = {
  3, // locals
  0, // parameters
  // add_characters !arguments !characters
  func_add_characters, 0, 2, var_993_1_arguments, var_994_1_characters,
  // length_of(arguments) == 1
  var_length_of, 1, var_993_1_arguments, 1, LOCAL(1),
  // length_of(arguments) == 1
  var_std__equal, 2, LOCAL(1), num_1, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_116, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_117, lambda_118, TAIL_CALL,
  POS(1049, 11),
  POS(1052, 15),
  POS(1052, 15),
  POS(1051, 15),
  POS(1050, 11)
};

static TAB_NUM t_lambda_116[] = {
  3, // locals
  0, // parameters
  // arguments(1)) == CHARACTER_SEQUENCE
  var_993_1_arguments, 1, num_1, 1, LOCAL(1),
  // node_type_of(arguments(1)) == CHARACTER_SEQUENCE
  var_node_type_of, 1, LOCAL(1), 1, LOCAL(2),
  // node_type_of(arguments(1)) == CHARACTER_SEQUENCE
  var_std__equal, 2, LOCAL(2), var_CHARACTER_SEQUENCE, 1, LOCAL(3),
  // node_type_of(arguments(1)) == CHARACTER_SEQUENCE
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(1053, 28),
  POS(1053, 15),
  POS(1053, 15),
  POS(1053, 15)
};

static TAB_NUM t_lambda_117[] = {
  1, // locals
  0, // parameters
  // arguments(1) temp_no empty_statements
  var_993_1_arguments, 1, num_1, 1, LOCAL(1),
  //  arguments(1) temp_no empty_statements
  LET, 3, LOCAL(1), var_992_45_temp_no, var_empty_statements, TAIL_CALL,
  POS(1054, 16),
  POS(1054, 15)
};

static TAB_NUM t_lambda_118[] = {
  8, // locals
  0, // parameters
  // inc &temp_no
  var_inc, 1, var_992_45_temp_no, 1, var_992_45_temp_no,
  // source_group_of(self))
  var_source_group_of, 1, var_992_40_self, 1, LOCAL(1),
  // $text line_text_of(source_group_of(self))
  var_line_text_of, 1, LOCAL(1), 1, LOCAL(6),
  // $position source_position_of(self)
  var_source_position_of, 1, var_992_40_self, 1, LOCAL(7),
  // length_of(text)-length_of(position) -1)
  var_length_of, 1, LOCAL(6), 1, LOCAL(1),
  // length_of(position) -1)
  var_length_of, 1, LOCAL(7), 1, LOCAL(2),
  // length_of(text)-length_of(position) -1)
  var_std__minus, 2, LOCAL(1), LOCAL(2), 1, LOCAL(3),
  // !position range(text length_of(text)-length_of(position) -1)
  var_range, 3, LOCAL(6), LOCAL(3), minus_num_1, 1, LOCAL(7),
  // source_group_of(self)
  var_source_group_of, 1, var_992_40_self, 1, LOCAL(1),
  // $functor
  LET, -4, var_funky_types__functor, var_identifier_of, str_stdstring, var_kind_of, var_EXTERN, var_source_group_of, LOCAL(1), var_source_position_of, LOCAL(7), LOCAL(8),
  // temporary(temp_no self)
  func_temporary, 2, var_992_45_temp_no, var_992_40_self, 1, LOCAL(1),
  // redefine_temporary(temp_no functor))
  func_redefine_temporary, 2, var_992_45_temp_no, LOCAL(8), 1, LOCAL(2),
  // push(arguments redefine_temporary(temp_no functor))
  var_push, 2, var_993_1_arguments, LOCAL(2), 1, LOCAL(3),
  // create_statement
  func_create_statement, 2, LOCAL(8), LOCAL(3), 1, LOCAL(4),
  // push_leading_statement
  var_push_leading_statement, 2, var_995_1_statements, LOCAL(4), 1, LOCAL(5),
  // ->
  LET, 3, LOCAL(1), var_992_45_temp_no, LOCAL(5), TAIL_CALL,
  POS(1056, 15),
  POS(1057, 34),
  POS(1057, 15),
  POS(1058, 15),
  POS(1059, 36),
  POS(1059, 52),
  POS(1059, 36),
  POS(1059, 15),
  POS(1064, 36),
  POS(1060, 15),
  POS(1067, 17),
  POS(1073, 36),
  POS(1073, 21),
  POS(1071, 19),
  POS(1069, 17),
  POS(1066, 15)
};

static TAB_NUM t_func_add_characters[] = {
  1, // locals
  0, // parameters
  // is_empty
  var_is_empty, 1, var_994_1_characters, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_119, lambda_120, TAIL_CALL,
  POS(1077, 22),
  POS(1076, 9)
};

static TAB_NUM t_lambda_119[] = {
  0, // locals
  0, // parameters
  //  arguments characters
  LET, 2, var_993_1_arguments, var_994_1_characters, TAIL_CALL,
  POS(1078, 13)
};

static TAB_NUM t_lambda_120[] = {
  6, // locals
  0, // parameters
  // source_group_of(self)
  var_source_group_of, 1, var_992_40_self, 1, LOCAL(1),
  // source_position_of(self)
  var_source_position_of, 1, var_992_40_self, 1, LOCAL(2),
  // length_of(characters))_@(characters)"
  var_length_of, 1, var_994_1_characters, 1, LOCAL(3),
  // "string@(length_of(characters))_@(characters)"
  var_std__string, 4, str_string_2, LOCAL(3), string_2, var_994_1_characters, 1, LOCAL(4),
  // funky_types::character_sequence
  LET, -4, var_funky_types__character_sequence, var_source_group_of, LOCAL(1), var_source_position_of, LOCAL(2), var_characters_of, var_994_1_characters, var_funky__key_of, LOCAL(4), LOCAL(5),
  // push
  var_push, 2, var_993_1_arguments, LOCAL(5), 1, LOCAL(6),
  // 
  LET, 2, LOCAL(6), string_4, TAIL_CALL,
  POS(1083, 34),
  POS(1084, 37),
  POS(1086, 41),
  POS(1086, 32),
  POS(1082, 15),
  POS(1080, 13),
  POS(1079, 13)
};

static TAB_NUM t_func_std_types__list___simplify[] = {
  1, // locals
  2, // parameters
  LOCAL(1), // 1089_28_self
  var_1089_33_temp_no,
  // $statements empty_statements
  LET, 1, var_empty_statements, 1, var_1090_1_statements,
  // $simplified_nodes empty_list
  LET, 1, var_empty_list, 1, var_1091_1_simplified_nodes,
  // for_each self
  var_for_each, 3, LOCAL(1), lambda_121, lambda_122, TAIL_CALL,
  POS(1090, 3),
  POS(1091, 3),
  POS(1092, 3)
};

static TAB_NUM t_lambda_121[] = {
  2, // locals
  1, // parameters
  LOCAL(1), // 1093_3_node
  // simplify &node &temp_no $node_statements
  var_simplify, 2, LOCAL(1), var_1089_33_temp_no, 3, LOCAL(1), var_1089_33_temp_no, LOCAL(2),
  // append &statements node_statements
  var_append, 2, var_1090_1_statements, LOCAL(2), 1, var_1090_1_statements,
  // push &simplified_nodes node
  var_push, 2, var_1091_1_simplified_nodes, LOCAL(1), 1, var_1091_1_simplified_nodes,
  // next
  var_next, 0, TAIL_CALL,
  POS(1094, 7),
  POS(1095, 7),
  POS(1096, 7),
  POS(1097, 7)
};

static TAB_NUM t_lambda_122[] = {
  0, // locals
  0, // parameters
  //  simplified_nodes temp_no statements
  LET, 3, var_1091_1_simplified_nodes, var_1089_33_temp_no, var_1090_1_statements, TAIL_CALL,
  POS(1098, 7)
};

static TAB_NUM t_func_create_functor[] = {
  6, // locals
  1, // parameters
  LOCAL(6), // 1102_18_original_node
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
  POS(1105, 22),
  POS(1106, 16),
  POS(1107, 24),
  POS(1108, 27),
  POS(1104, 5),
  POS(1103, 3)
};

static TAB_NUM t_func_std[] = {
  6, // locals
  2, // parameters
  LOCAL(5), // 1110_7_name
  LOCAL(6), // 1110_12_original_node
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
  POS(1113, 22),
  POS(1115, 24),
  POS(1116, 27),
  POS(1112, 5),
  POS(1111, 3)
};

static TAB_NUM t_func_assign_attributes[] = {
  4, // locals
  1, // parameters
  LOCAL(4), // 1118_21_original_node
  // source_group_of(original_node)
  var_source_group_of, 1, LOCAL(4), 1, LOCAL(1),
  // source_position_of(original_node)
  var_source_position_of, 1, LOCAL(4), 1, LOCAL(2),
  // funky_types::functor
  LET, -4, var_funky_types__functor, var_identifier_of, str__assign_attribut, var_kind_of, var_BUILTIN, var_source_group_of, LOCAL(1), var_source_position_of, LOCAL(2), LOCAL(3),
  // ->
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(1123, 24),
  POS(1124, 27),
  POS(1120, 5),
  POS(1119, 3)
};

static TAB_NUM t_func_temporary[] = {
  7, // locals
  2, // parameters
  LOCAL(6), // 1126_13_no
  LOCAL(7), // 1126_16_original_node
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
  POS(1130, 26),
  POS(1130, 22),
  POS(1133, 24),
  POS(1134, 27),
  POS(1129, 5),
  POS(1128, 3)
};

static TAB_NUM t_func_redefine_temporary[] = {
  7, // locals
  2, // parameters
  LOCAL(6), // 1136_22_no
  LOCAL(7), // 1136_25_original_node
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
  POS(1139, 26),
  POS(1139, 22),
  POS(1142, 24),
  POS(1143, 27),
  POS(1138, 5),
  POS(1137, 3)
};

static TAB_NUM t_func_update_temporary[] = {
  7, // locals
  2, // parameters
  LOCAL(6), // 1145_20_no
  LOCAL(7), // 1145_23_original_node
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
  POS(1148, 26),
  POS(1148, 22),
  POS(1151, 24),
  POS(1152, 27),
  POS(1147, 5),
  POS(1146, 3)
};

static TAB_NUM t_func_create_statement[] = {
  1, // locals
  2, // parameters
  var_1156_20_head,
  var_1156_25_arguments,
  // is_not_empty:
  var_is_not_empty, 1, var_1156_25_arguments, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_arguments_is_not_empty, lambda_126, TAIL_CALL,
  POS(1158, 15),
  POS(1157, 3)
};

static TAB_NUM t_lambda_arguments_is_not_empty[] = {
  2, // locals
  0, // parameters
  // arguments(1))
  var_1156_25_arguments, 1, num_1, 1, LOCAL(1),
  // $node_type node_type_of(arguments(1))
  var_node_type_of, 1, LOCAL(1), 1, var_1159_1_node_type,
  // node_type == ATTRIBUTE_VALUE_PAIR
  var_std__equal, 2, var_1159_1_node_type, var_ATTRIBUTE_VALUE_PAIR, 1, LOCAL(1),
  // 
  var_std__or, 2, LOCAL(1), lambda_123, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_125, lambda_126, TAIL_CALL,
  POS(1159, 31),
  POS(1159, 7),
  POS(1162, 11),
  POS(1161, 11),
  POS(1160, 7)
};

static TAB_NUM t_lambda_123[] = {
  2, // locals
  0, // parameters
  // node_type == METHOD_VALUE_PAIR
  var_std__equal, 2, var_1159_1_node_type, var_METHOD_VALUE_PAIR, 1, LOCAL(1),
  // 
  var_std__or, 2, LOCAL(1), lambda_124, 1, LOCAL(2),
  // node_type == METHOD_VALUE_PAIR
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1163, 11),
  POS(1161, 11),
  POS(1163, 11)
};

static TAB_NUM t_lambda_124[] = {
  1, // locals
  0, // parameters
  // node_type == TYPE_FUNCTION
  var_std__equal, 2, var_1159_1_node_type, var_TYPE_FUNCTION, 1, LOCAL(1),
  // node_type == TYPE_FUNCTION
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1164, 11),
  POS(1164, 11)
};

static TAB_NUM t_lambda_125[] = {
  5, // locals
  0, // parameters
  // assign_attributes(head)
  func_assign_attributes, 1, var_1156_20_head, 1, LOCAL(1),
  // put(arguments head)
  var_put, 2, var_1156_25_arguments, var_1156_20_head, 1, LOCAL(2),
  // source_group_of(head)
  var_source_group_of, 1, var_1156_20_head, 1, LOCAL(3),
  // source_position_of(head)
  var_source_position_of, 1, var_1156_20_head, 1, LOCAL(4),
  // funky_types::statement
  LET, -4, var_funky_types__statement, var_head_of, LOCAL(1), var_arguments_of, LOCAL(2), var_source_group_of, LOCAL(3), var_source_position_of, LOCAL(4), LOCAL(5),
  // 
  LET, 1, LOCAL(5), TAIL_CALL,
  POS(1167, 22),
  POS(1168, 27),
  POS(1169, 30),
  POS(1170, 33),
  POS(1166, 11),
  POS(1165, 11)
};

static TAB_NUM t_lambda_126[] = {
  4, // locals
  0, // parameters
  // expand_backquotes(arguments)
  func_expand_backquotes, 1, var_1156_25_arguments, 1, LOCAL(1),
  // source_group_of(head)
  var_source_group_of, 1, var_1156_20_head, 1, LOCAL(2),
  // source_position_of(head)
  var_source_position_of, 1, var_1156_20_head, 1, LOCAL(3),
  // funky_types::statement
  LET, -4, var_funky_types__statement, var_head_of, var_1156_20_head, var_arguments_of, LOCAL(1), var_source_group_of, LOCAL(2), var_source_position_of, LOCAL(3), LOCAL(4),
  // 
  LET, 1, LOCAL(4), TAIL_CALL,
  POS(1178, 23),
  POS(1179, 26),
  POS(1180, 29),
  POS(1176, 7),
  POS(1175, 7)
};

static TAB_NUM t_func_expand_backquotes[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 1182_21_arguments
  // $expanded empty_list
  LET, 1, var_empty_list, 1, var_1183_1_expanded,
  // for_each arguments
  var_for_each, 3, LOCAL(1), lambda_127, lambda_130, TAIL_CALL,
  POS(1183, 3),
  POS(1184, 3)
};

static TAB_NUM t_lambda_127[] = {
  2, // locals
  1, // parameters
  var_1185_3_argument,
  // node_type_of(argument) == BACKQUOTED:
  var_node_type_of, 1, var_1185_3_argument, 1, LOCAL(1),
  // node_type_of(argument) == BACKQUOTED:
  var_std__equal, 2, LOCAL(1), var_BACKQUOTED, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_128, lambda_129, TAIL_CALL,
  POS(1187, 9),
  POS(1187, 9),
  POS(1186, 7)
};

static TAB_NUM t_lambda_128[] = {
  0, // locals
  0, // parameters
  // resolve_backquoted &expanded argument
  func_resolve_backquoted, 2, var_1183_1_expanded, var_1185_3_argument, 1, var_1183_1_expanded,
  // next
  var_next, 0, TAIL_CALL,
  POS(1188, 11),
  POS(1189, 11)
};

static TAB_NUM t_lambda_129[] = {
  0, // locals
  0, // parameters
  // push &expanded argument
  var_push, 2, var_1183_1_expanded, var_1185_3_argument, 1, var_1183_1_expanded,
  // next
  var_next, 0, TAIL_CALL,
  POS(1191, 11),
  POS(1192, 11)
};

static TAB_NUM t_lambda_130[] = {
  0, // locals
  0, // parameters
  //  expanded
  LET, 1, var_1183_1_expanded, TAIL_CALL,
  POS(1193, 7)
};

static TAB_NUM t_func_resolve_backquoted[] = {
  8, // locals
  2, // parameters
  LOCAL(6), // 1195_22_arguments
  LOCAL(7), // 1195_32_node
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
  POS(1196, 35),
  POS(1196, 3),
  POS(1202, 33),
  POS(1202, 24),
  POS(1200, 7),
  POS(1198, 5),
  POS(1203, 5),
  POS(1197, 3)
};

static TAB_NUM t_func_exctract_characters[] = {
  0, // locals
  1, // parameters
  var_1205_23_str,
  // $level 0
  LET, 1, num_0, 1, var_1206_1_level,
  // $within_string false
  LET, 1, var_false, 1, var_1207_1_within_string,
  // for_each str: (idx chr)
  var_for_each, 2, var_1205_23_str, lambda_131, TAIL_CALL,
  POS(1206, 5),
  POS(1207, 5),
  POS(1208, 5)
};

static TAB_NUM t_lambda_131[] = {
  1, // locals
  2, // parameters
  var_1208_15_idx,
  LOCAL(1), // 1208_19_chr
  // case chr
  var_case, 12, LOCAL(1), chr_10, lambda_nl, chr_32, lambda_132, chr_34, lambda_quot, chr_40, lambda_135, chr_41, lambda_136, var_next, TAIL_CALL,
  POS(1209, 7)
};

static TAB_NUM t_lambda_nl[] = {
  1, // locals
  0, // parameters
  // range(str 1 -2)
  var_range, 3, var_1205_23_str, num_1, minus_num_2, 1, LOCAL(1),
  //  range(str 1 -2)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1210, 19),
  POS(1210, 18)
};

static TAB_NUM t_lambda_132[] = {
  2, // locals
  0, // parameters
  // level == 0 && not(within_string)
  var_std__equal, 2, var_1206_1_level, num_0, 1, LOCAL(1),
  // level == 0 && not(within_string)
  var_std__and, 2, LOCAL(1), lambda_133, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_134, var_next, TAIL_CALL,
  POS(1213, 13),
  POS(1213, 13),
  POS(1212, 11)
};

static TAB_NUM t_lambda_133[] = {
  1, // locals
  0, // parameters
  // not(within_string)
  var_not, 1, var_1207_1_within_string, 1, LOCAL(1),
  // not(within_string)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1213, 27),
  POS(1213, 27)
};

static TAB_NUM t_lambda_134[] = {
  2, // locals
  0, // parameters
  // idx-1)
  var_std__minus, 2, var_1208_15_idx, num_1, 1, LOCAL(1),
  // range(str 1 idx-1)
  var_range, 3, var_1205_23_str, num_1, LOCAL(1), 1, LOCAL(2),
  //  range(str 1 idx-1)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1214, 28),
  POS(1214, 16),
  POS(1214, 15)
};

static TAB_NUM t_lambda_quot[] = {
  0, // locals
  0, // parameters
  // not &within_string
  var_not, 1, var_1207_1_within_string, 1, var_1207_1_within_string,
  // next
  var_next, 0, TAIL_CALL,
  POS(1217, 11),
  POS(1218, 11)
};

static TAB_NUM t_lambda_135[] = {
  0, // locals
  0, // parameters
  // inc &level
  var_inc, 1, var_1206_1_level, 1, var_1206_1_level,
  // next
  var_next, 0, TAIL_CALL,
  POS(1220, 11),
  POS(1221, 11)
};

static TAB_NUM t_lambda_136[] = {
  0, // locals
  0, // parameters
  // dec &level
  var_dec, 1, var_1206_1_level, 1, var_1206_1_level,
  // next
  var_next, 0, TAIL_CALL,
  POS(1223, 11),
  POS(1224, 11)
};

static TAB_NUM t_func_funky_types__statement_list___append[] = {
  6, // locals
  2, // parameters
  LOCAL(1), // 1227_38_self
  LOCAL(2), // 1227_43_right
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
  POS(1228, 3),
  POS(1229, 3),
  POS(1230, 3),
  POS(1231, 3),
  POS(1232, 3)
};

static TAB_NUM t_func_funky_types__statement_list___push_leading_statement[] = {
  4, // locals
  2, // parameters
  LOCAL(1), // 1234_54_self
  LOCAL(2), // 1234_59_statement
  // self $leading_statements $trailing_statements
  LOCAL(1), 0, 2, LOCAL(3), LOCAL(4),
  // push &leading_statements statement
  var_push, 2, LOCAL(3), LOCAL(2), 1, LOCAL(3),
  // new self leading_statements trailing_statements
  var_new, 3, LOCAL(1), LOCAL(3), LOCAL(4), TAIL_CALL,
  POS(1235, 3),
  POS(1236, 3),
  POS(1237, 3)
};

static TAB_NUM t_func_funky_types__statement_list___push_trailing_statement[] = {
  4, // locals
  2, // parameters
  LOCAL(1), // 1239_55_self
  LOCAL(2), // 1239_60_statement
  // self $leading_statements $trailing_statements
  LOCAL(1), 0, 2, LOCAL(3), LOCAL(4),
  // push &trailing_statements statement
  var_push, 2, LOCAL(4), LOCAL(2), 1, LOCAL(4),
  // new self leading_statements trailing_statements
  var_new, 3, LOCAL(1), LOCAL(3), LOCAL(4), TAIL_CALL,
  POS(1240, 3),
  POS(1241, 3),
  POS(1242, 3)
};

static TAB_NUM t_func_collect_parameter_definitions[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 1246_33_body
  // parameters_of(body) add_definition -> resolve_variable
  var_parameters_of, 1, LOCAL(2), 1, LOCAL(1),
  // for_each parameters_of(body) add_definition -> resolve_variable
  var_for_each, 3, LOCAL(1), var_add_definition, lambda_137, TAIL_CALL,
  POS(1247, 12),
  POS(1247, 3)
};

static TAB_NUM t_lambda_137[] = {
  0, // locals
  0, // parameters
  //  resolve_variable
  LET, 1, var_resolve_variable, TAIL_CALL,
  POS(1247, 49)
};

static TAB_NUM t_func_collect_local_definitions[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 1249_29_statements
  // for_each statements add_definitions -> resolve_variable
  var_for_each, 3, LOCAL(1), var_add_definitions, lambda_138, TAIL_CALL,
  POS(1250, 3)
};

static TAB_NUM t_lambda_138[] = {
  0, // locals
  0, // parameters
  //  resolve_variable
  LET, 1, var_resolve_variable, TAIL_CALL,
  POS(1250, 41)
};

static TAB_NUM t_func_funky_types__node___add_definitions[] = {
  1, // locals
  1, // parameters
  LOCAL(1),
  // next
  var_next, 0, TAIL_CALL,
  POS(1255, 3)
};

static TAB_NUM t_func_funky_types__statement___add_definitions[] = {
  4, // locals
  1, // parameters
  LOCAL(4), // 1257_42_self
  // arguments_of(self) head_of(self)) add_definition
  var_arguments_of, 1, LOCAL(4), 1, LOCAL(1),
  // head_of(self)) add_definition
  var_head_of, 1, LOCAL(4), 1, LOCAL(2),
  // push(arguments_of(self) head_of(self)) add_definition
  var_push, 2, LOCAL(1), LOCAL(2), 1, LOCAL(3),
  // for_each
  var_for_each, 3, LOCAL(3), var_add_definition, var_next, TAIL_CALL,
  POS(1259, 10),
  POS(1259, 29),
  POS(1259, 5),
  POS(1258, 3)
};

static TAB_NUM t_func_funky_types__node___add_definition[] = {
  1, // locals
  1, // parameters
  LOCAL(1),
  // next
  var_next, 0, TAIL_CALL,
  POS(1265, 3)
};

static TAB_NUM t_func_funky_types__definition___add_definition[] = {
  2, // locals
  1, // parameters
  var_1267_42_self,
  // $identifier identifier_of(self)
  var_identifier_of, 1, var_1267_42_self, 1, var_1268_1_identifier,
  // not(allow_hidden) && resolve_variable(identifier).is_defined:
  var_not, 1, var_allow_hidden, 1, LOCAL(1),
  // not(allow_hidden) && resolve_variable(identifier).is_defined:
  var_std__and, 2, LOCAL(1), lambda_139, 1, LOCAL(2),
  // on not(allow_hidden) && resolve_variable(identifier).is_defined:
  var_on, 2, LOCAL(2), lambda_140, 0,
  // !resolve_variable(identifier) mangle_local_definition(identifier self)
  var_mangle_local_definition, 2, var_1268_1_identifier, var_1267_42_self, 1, LOCAL(2),
  // resolve_variable(identifier) mangle_local_definition(identifier self)
  var_resolve_variable, 2, var_1268_1_identifier, LOCAL(2), 1, var_resolve_variable,
  // next
  var_next, 0, TAIL_CALL,
  POS(1268, 3),
  POS(1269, 6),
  POS(1269, 6),
  POS(1269, 3),
  POS(1271, 3),
  POS(1271, 4),
  POS(1272, 3)
};

static TAB_NUM t_lambda_139[] = {
  2, // locals
  0, // parameters
  // resolve_variable(identifier).is_defined:
  var_resolve_variable, 1, var_1268_1_identifier, 1, LOCAL(1),
  // is_defined:
  var_is_defined, 1, LOCAL(1), 1, LOCAL(2),
  // resolve_variable(identifier).is_defined:
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1269, 27),
  POS(1269, 56),
  POS(1269, 27)
};

static TAB_NUM t_lambda_140[] = {
  0, // locals
  0, // parameters
  // syntax_error "Variable is already defined" self
  var_syntax_error, 2, str_Variable_is_alre, var_1267_42_self, TAIL_CALL,
  POS(1270, 5)
};

static TAB_NUM t_func_add_parameter_definition[] = {
  4, // locals
  1, // parameters
  LOCAL(3), // 1277_28_self
  // $name funky::name_of(self)
  var_funky__name_of, 1, LOCAL(3), 1, LOCAL(4),
  // !resolve_variable(name) mangle_local_definition(name self)
  var_mangle_local_definition, 2, LOCAL(4), LOCAL(3), 1, LOCAL(2),
  // resolve_variable(name) mangle_local_definition(name self)
  var_resolve_variable, 2, LOCAL(4), LOCAL(2), 1, var_resolve_variable,
  // next
  var_next, 0, TAIL_CALL,
  POS(1278, 3),
  POS(1279, 3),
  POS(1279, 4),
  POS(1280, 3)
};

static TAB_NUM t_func_funky__mangle_local_definition[] = {
  4, // locals
  2, // parameters
  LOCAL(3), // 1282_34_identifier
  LOCAL(4), // 1282_45_definition
  // mangle_position(definition))_@(identifier)"
  var_mangle_position, 1, LOCAL(4), 1, LOCAL(1),
  // "@(mangle_position(definition))_@(identifier)"
  var_std__string, 3, LOCAL(1), string_2, LOCAL(3), 1, LOCAL(2),
  // -> "@(mangle_position(definition))_@(identifier)"
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1283, 9),
  POS(1283, 6),
  POS(1283, 3)
};

static TAB_NUM t_func_funky__mangle_position[] = {
  8, // locals
  1, // parameters
  LOCAL(4), // 1285_26_node
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
  POS(1286, 3),
  POS(1287, 3),
  POS(1288, 3),
  POS(1289, 14),
  POS(1289, 45),
  POS(1289, 35),
  POS(1289, 3),
  POS(1290, 6),
  POS(1290, 3)
};

static int tuple_53_0_arguments[] = {
  -var_empty_list, -var_empty_list
};

static int key_value_pair_933_1_arguments[] = {
  -chr_46, -string_2
};

static int key_value_pair_934_1_arguments[] = {
  -chr_45, -string_2
};

static FUNKY_CONSTANT constants_table[] = {
  {FLT_TUPLE, 2, {.arguments = tuple_53_0_arguments}},
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
  {FLT_STRING_8, 18, {.str_8 = "Missing statements"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_61}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_62}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_63}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_64}},
  {FLT_STRING_8, 21, {.str_8 = "unexpected statements"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_simplify_statements}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_65}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_check_statements}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_66}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_MULTILINE_REMARK}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_67}},
  {FLT_STRING_8, 28, {.str_8 = "Closing parenthesis expected"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_OPEN_PARAMETERS}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_68}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_69}},
  {FLT_STRING_8, 30, {.str_8 = "Unexpected opening parenthesis"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_CLOSE_PARAMETERS}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_70}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_71}},
  {FLT_STRING_8, 30, {.str_8 = "Unexpected closing parenthesis"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_72}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_73}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_74}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_75}},
  {FLT_STRING_8, 49, {.str_8 = "Return statement not allowed within function body"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_76}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_77}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_78}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_79}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__statement___simplify}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_FUNCTOR}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_RETURN}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_80}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_simplify_head_and_arguments}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_81}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_82}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_83}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_84}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_85}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_86}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_87}},
  {FLT_STRING_8, 30, {.str_8 = "Missing argument in assignment"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_88}},
  {FLT_STRING_8, 32, {.str_8 = "Too many arguments in assignment"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_is_an_assignment}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_89}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_90}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_91}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_92}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_is_a_slot_definition}},
  {FLT_STRING_8, 6, {.str_8 = "const_"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_93}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_check_trailing_statements}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_94}},
  {FLT_STRING_8, 11, {.str_8 = "std::assign"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_95}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_process_trailing_statements}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_96}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_97}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2_FUNCTOR}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_98}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_INLINE_ATTRIBUTE_VALUE_PAIR}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_99}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_100}},
  {FLT_STRING_8, 38, {.str_8 = "TEMP NOT FOUND IN TRAILING STATEMENT!\012"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_101}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_102}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_103}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_check_that_all_arguments_are_inputs}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_104}},
  {FLT_STRING_8, 26, {.str_8 = "Unexpected output argument"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__numeric_literal___simplify}},
  {FLT_CHARACTER, 0, {.value = 39}},
  {FLT_CHARACTER, 0, {.value = 46}},
  {FLT_STRING_8, 1, {.str_8 = "_"}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_933_1_arguments}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_934_1_arguments}},
  {FLT_STRING_8, 4, {.str_8 = "num_"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__character_literal___simplify}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__numeric_character_literal___simplify}},
  {FLT_STRING_8, 4, {.str_8 = "chr_"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__named_character_literal___simplify}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_105}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_106}},
  {FLT_STRING_8, 22, {.str_8 = "Invalid character name"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__at_character_literal___simplify}},
  {FLT_STRING_8, 2, {.str_8 = "64"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_create_numeric_character_literal}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__unique___simplify}},
  {FLT_CHARACTER, 0, {.value = 32}},
  {FLT_STRING_8, 4, {.str_8 = "uni_"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__string_literal___simplify}},
  {FLT_STRING_8, 0, {.str_8 = ""}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_107}},
  {FLT_STRING_8, 8, {.str_8 = "string0_"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_108}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_109}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_CHARACTER_SEQUENCE}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_110}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_111}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_112}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_NUMERIC_CHARACTER}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_NAMED_CHARACTER}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_113}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_NEWLINE}},
  {FLT_CHARACTER, 0, {.value = 10}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_AT_CHARACTER}},
  {FLT_CHARACTER, 0, {.value = 64}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_ESCAPE_EXPRESSION}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_TAGGED_EMPTY_CHARACTER}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_114}},
  {FLT_STRING_8, 23, {.str_8 = "node_type_of(component)"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_115}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_116}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_117}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_118}},
  {FLT_STRING_8, 11, {.str_8 = "std::string"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_add_characters}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_119}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_120}},
  {FLT_STRING_8, 6, {.str_8 = "string"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__list___simplify}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_121}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_122}},
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
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_123}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_124}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_125}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_126}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_expand_backquotes}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_127}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_128}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_129}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_130}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_resolve_backquoted}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_exctract_characters}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_131}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_nl}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_132}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_133}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_134}},
  {FLT_CHARACTER, 0, {.value = 34}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_quot}},
  {FLT_CHARACTER, 0, {.value = 40}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_135}},
  {FLT_CHARACTER, 0, {.value = 41}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_136}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__statement_list___append}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__statement_list___push_leading_statement}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__statement_list___push_trailing_statement}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_collect_parameter_definitions}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_137}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_collect_local_definitions}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_138}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__node___add_definitions}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__statement___add_definitions}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__node___add_definition}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__definition___add_definition}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_139}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_140}},
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

static ATTRIBUTE_DEFINITION funky_types__definition__attributes[] = {
  {-var_is_a_dummy_definition, -var_false},
  {-var_kind_of, -var_undefined},
  {var_simplify, -func_funky_types__definition___simplify},
  {var_add_definition, -func_funky_types__definition___add_definition},
  {-var_is_an_input, -var_false},
  {-var_is_an_output, -var_true}
};

static ATTRIBUTE_DEFINITION funky_types__redefinition__attributes[] = {
  {-var_is_a_dummy_definition, -var_false},
  {var_simplify, -func_funky_types__redefinition___simplify},
  {-var_is_an_input, -var_false},
  {-var_is_an_output, -var_true}
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
    FOT_POLYMORPHIC, 0, 0,
    "is_a_dummy_definition\000funky", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN, 0, 3,
    "functor\000funky_types", funky_types__functor__attributes,
    {.position = POS(40, 1)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "no_of\000", NULL,
    {.position = POS(40, 23)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "undefined\000", NULL,
    {.position = POS(40, 29)}
  },
  {
    FOT_UNKNOWN, 0, 6,
    "definition\000funky_types", funky_types__definition__attributes,
    {.position = POS(41, 1)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "is_a_dummy_definition\000", NULL,
    {.position = POS(41, 26)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "false\000", NULL,
    {.position = POS(41, 48)}
  },
  {
    FOT_UNKNOWN, 0, 4,
    "redefinition\000funky_types", funky_types__redefinition__attributes,
    {.position = POS(42, 1)}
  },
  {
    FOT_UNKNOWN, 0, 7,
    "node\000funky_types", funky_types__node__attributes,
    {.position = POS(44, 1)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "is_an_io_call\000", NULL,
    {.position = POS(44, 20)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "kind_of\000", NULL,
    {.position = POS(45, 23)}
  },
  {
    FOT_UNKNOWN, 0, 2,
    "pair\000funky_types", funky_types__pair__attributes,
    {.position = POS(47, 1)}
  },
  {
    FOT_UNKNOWN, 0, 3,
    "inline_attribute_value_pair\000funky_types", funky_types__inline_attribute_value_pair__attributes,
    {.position = POS(48, 1)}
  },
  {
    FOT_UNKNOWN, 0, 3,
    "inline_method_value_pair\000funky_types", funky_types__inline_method_value_pair__attributes,
    {.position = POS(49, 1)}
  },
  {
    FOT_UNKNOWN, 0, 3,
    "statement\000funky_types", funky_types__statement__attributes,
    {.position = POS(51, 1)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "is_a_definition\000", NULL,
    {.position = POS(51, 25)}
  },
  {
    FOT_INITIALIZED, 0, 3,
    "statement_list\000funky_types", funky_types__statement_list__attributes,
    {.const_idx = -tuple_53_0}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_list\000", NULL,
    {.position = POS(53, 36)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "tuple\000", NULL,
    {.position = POS(53, 30)}
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
    {.position = POS(57, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "push\000", NULL,
    {.position = POS(59, 10)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "append\000", NULL,
    {.position = POS(59, 3)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "variable\000funky_types", funky_types__variable__attributes,
    {.position = POS(61, 1)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_statements\000", NULL,
    {.position = POS(63, 35)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "attribute_access\000funky_types", funky_types__attribute_access__attributes,
    {.position = POS(65, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "dummy_definition\000funky_types", funky_types__dummy_definition__attributes,
    {.position = POS(69, 1)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000std", NULL,
    {.position = POS(71, 24)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "true\000", NULL,
    {.position = POS(71, 63)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "75_33_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "75_38_temp_no\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "77_1_extensions\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "extensions_of\000", NULL,
    {.position = POS(77, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_empty\000", NULL,
    {.position = POS(79, 16)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if\000", NULL,
    {.position = POS(78, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "84_23_expression\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "84_45_temp_no\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "85_31_statements\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "87_3_extension\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "88_1_extension_node_type\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "node_type_of\000", NULL,
    {.position = POS(88, 28)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "FUNCTION_CALL\000", NULL,
    {.position = POS(98, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "REMARK_AND_MULTILINE_FUNCTION_CALL\000", NULL,
    {.position = POS(98, 24)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "sequence\000std", NULL,
    {.position = POS(98, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "ATTRIBUTE_ACCESS\000", NULL,
    {.position = POS(90, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "inc\000", NULL,
    {.position = POS(91, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "list\000", NULL,
    {.position = POS(95, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "next\000", NULL,
    {.position = POS(97, 11)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "99_1_arguments\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "arguments_of\000", NULL,
    {.position = POS(99, 22)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "length_of\000", NULL,
    {.position = POS(101, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "equal\000std", NULL,
    {.position = POS(101, 13)}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "is_a_pair\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "and\000std", NULL,
    {.position = POS(101, 13)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "113_8_remark_arguments\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "is_a_remark\000", NULL,
    {.position = POS(113, 51)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "filter\000", NULL,
    {.position = POS(113, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_not_empty\000", NULL,
    {.position = POS(119, 38)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "or\000std", NULL,
    {.position = POS(117, 21)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "IO_CALL\000", NULL,
    {.position = POS(129, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "case\000", NULL,
    {.position = POS(89, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "for_each\000", NULL,
    {.position = POS(86, 3)}
  },
  {
    FOT_UNKNOWN, 0, 2,
    "parameter\000funky_types", funky_types__parameter__attributes,
    {.position = POS(134, 1)}
  },
  {
    FOT_UNKNOWN, 0, 2,
    "inline_parameter\000funky_types", funky_types__inline_parameter__attributes,
    {.position = POS(135, 1)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "137_22_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "137_27_temp_no\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "option_of\000", NULL,
    {.position = POS(138, 18)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "138_35_statements\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "name_of\000funky", NULL,
    {.position = POS(139, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "resolve_variable\000", NULL,
    {.position = POS(148, 24)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "return\000funky_types", funky_types__return__attributes,
    {.position = POS(152, 1)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "155_38_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "155_43_temp_no\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "157_1_extensions\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "163_1_result_temp_no\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "164_1_base\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "165_1_bases\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "166_31_statements\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "first\000", NULL,
    {.position = POS(167, 62)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "new\000", NULL,
    {.position = POS(167, 19)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "range\000", NULL,
    {.position = POS(168, 16)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "169_3_extension\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "173_1_remark_arguments\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "173_19_arguments\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "196_1_result\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "200_1_extension\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "pop\000", NULL,
    {.position = POS(201, 15)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "identifier_of\000", NULL,
    {.position = POS(204, 34)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "source_group_of\000", NULL,
    {.position = POS(207, 36)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "source_position_of\000", NULL,
    {.position = POS(208, 39)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "202_1_destination\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "key_of\000funky", NULL,
    {.position = POS(227, 42)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "expression_of\000", NULL,
    {.position = POS(228, 28)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "from_to_by\000", NULL,
    {.position = POS(198, 11)}
  },
  {
    FOT_UNKNOWN, 0, 2,
    "update\000funky_types", funky_types__update__attributes,
    {.position = POS(234, 1)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "234_32_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "234_37_temp_no\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "236_1_extensions\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "241_1_base\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "242_1_bases\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "243_31_statements\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "245_3_extension\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "249_1_remark_arguments\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "249_19_arguments\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "272_1_result\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "277_1_extension\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "279_1_destination\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 1,
    "parenthesed_expression\000funky_types", funky_types__parenthesed_expression__attributes,
    {.position = POS(315, 1)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "315_53_temp_no\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "316_30_expression\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "316_51_statements\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "317_1_calls\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "calls_of\000", NULL,
    {.position = POS(317, 10)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "325_30_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "325_35_temp_no\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "327_1_argument\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "argument_of\000", NULL,
    {.position = POS(327, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_a_list\000", NULL,
    {.position = POS(329, 14)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not\000", NULL,
    {.position = POS(330, 39)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "syntax_error\000", NULL,
    {.position = POS(336, 11)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "argument_of\000funky", NULL,
    {.position = POS(0, 0)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "expression_of\000funky", NULL,
    {.position = POS(349, 18)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "352_22_node\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "353_1_identifier\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "354_1_namespace\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "before\000", NULL,
    {.position = POS(354, 14)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "357_1_true_namespace\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "namespace_aliases\000", NULL,
    {.position = POS(357, 23)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_defined\000", NULL,
    {.position = POS(359, 24)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "from\000", NULL,
    {.position = POS(361, 40)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "DEFINITION\000", NULL,
    {.position = POS(369, 53)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not\000std", NULL,
    {.position = POS(369, 31)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "370_1_version\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "namespace_versions\000", NULL,
    {.position = POS(370, 18)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "380_1_resolved_identifier\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "LOCAL\000", NULL,
    {.position = POS(386, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "EXTERN\000", NULL,
    {.position = POS(387, 24)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "expression\000funky_types", funky_types__expression__attributes,
    {.position = POS(389, 1)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "389_36_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "389_41_temp_no\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "390_1_operator\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "operator_of\000", NULL,
    {.position = POS(390, 13)}
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
    FOT_UNKNOWN, 0, 1,
    "negation\000funky_types", funky_types__negation__attributes,
    {.position = POS(397, 1)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "397_34_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "397_39_temp_no\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "398_10_expression\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "398_51_statements\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "NUMERIC_LITERAL\000", NULL,
    {.position = POS(400, 33)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "401_1_digits\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "digits_of\000", NULL,
    {.position = POS(401, 15)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "402_1_key\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "put\000", NULL,
    {.position = POS(406, 12)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "423_9_left\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "423_14_operator\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "423_23_temp_no\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "423_31_statements\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "424_1_operation\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "425_1_right\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "COMMA\000", NULL,
    {.position = POS(427, 5)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "430_24_sequence\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "430_33_rest\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "SEQUENCE_EXPRESSION\000", NULL,
    {.position = POS(432, 33)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "AND\000", NULL,
    {.position = POS(442, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "update_if\000", NULL,
    {.position = POS(443, 7)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "return_expression\000funky_types", funky_types__return_expression__attributes,
    {.position = POS(445, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "OR\000", NULL,
    {.position = POS(451, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "PLUS\000", NULL,
    {.position = POS(464, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "MINUS\000", NULL,
    {.position = POS(465, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "TIMES\000", NULL,
    {.position = POS(466, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "OVER\000", NULL,
    {.position = POS(467, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "EQUAL\000", NULL,
    {.position = POS(468, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "NOT_EQUAL\000", NULL,
    {.position = POS(469, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "LESS_THAN\000", NULL,
    {.position = POS(472, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "GREATER_THAN\000", NULL,
    {.position = POS(473, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "LESS_EQUAL\000", NULL,
    {.position = POS(474, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "GREATER_EQUAL\000", NULL,
    {.position = POS(477, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "RANGE\000", NULL,
    {.position = POS(480, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "KEY_VALUE\000", NULL,
    {.position = POS(481, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "SHIFT_LEFT\000", NULL,
    {.position = POS(482, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "SHIFT_RIGHT\000", NULL,
    {.position = POS(483, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "BIT_AND\000", NULL,
    {.position = POS(484, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "BIT_OR\000", NULL,
    {.position = POS(485, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "BIT_XOR\000", NULL,
    {.position = POS(486, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "NAMED_OPERATOR\000", NULL,
    {.position = POS(487, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "dump\000debug", NULL,
    {.position = POS(502, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "exit\000debug", NULL,
    {.position = POS(505, 11)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "inline_return\000funky_types", funky_types__inline_return__attributes,
    {.position = POS(528, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "body\000funky_types", funky_types__body__attributes,
    {.position = POS(532, 5)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "statements_of\000", NULL,
    {.position = POS(535, 8)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "inline_statement\000funky_types", funky_types__inline_statement__attributes,
    {.position = POS(544, 1)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "head_of\000", NULL,
    {.position = POS(549, 16)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "multiline_plus\000funky_types", funky_types__multiline_plus__attributes,
    {.position = POS(553, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "multiline_minus\000funky_types", funky_types__multiline_minus__attributes,
    {.position = POS(556, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "multiline_minus_with_remark\000funky_types", funky_types__multiline_minus_with_remark__attributes,
    {.position = POS(559, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "multiline_times\000funky_types", funky_types__multiline_times__attributes,
    {.position = POS(562, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "multiline_over\000funky_types", funky_types__multiline_over__attributes,
    {.position = POS(565, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "multiline_over_with_remark\000funky_types", funky_types__multiline_over_with_remark__attributes,
    {.position = POS(568, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "multiline_shift_left\000funky_types", funky_types__multiline_shift_left__attributes,
    {.position = POS(571, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "multiline_shift_right\000funky_types", funky_types__multiline_shift_right__attributes,
    {.position = POS(574, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "multiline_equal\000funky_types", funky_types__multiline_equal__attributes,
    {.position = POS(577, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "multiline_not_equal\000funky_types", funky_types__multiline_not_equal__attributes,
    {.position = POS(580, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "multiline_less_equal\000funky_types", funky_types__multiline_less_equal__attributes,
    {.position = POS(583, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "multiline_less_than\000funky_types", funky_types__multiline_less_than__attributes,
    {.position = POS(586, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "multiline_greater_equal\000funky_types", funky_types__multiline_greater_equal__attributes,
    {.position = POS(589, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "multiline_greater_than\000funky_types", funky_types__multiline_greater_than__attributes,
    {.position = POS(592, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "multiline_and\000funky_types", funky_types__multiline_and__attributes,
    {.position = POS(595, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "multiline_or\000funky_types", funky_types__multiline_or__attributes,
    {.position = POS(598, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "multiline_bit_and\000funky_types", funky_types__multiline_bit_and__attributes,
    {.position = POS(601, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "multiline_bit_and_with_remark\000funky_types", funky_types__multiline_bit_and_with_remark__attributes,
    {.position = POS(604, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "multiline_bit_or\000funky_types", funky_types__multiline_bit_or__attributes,
    {.position = POS(607, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "multiline_bit_xor\000funky_types", funky_types__multiline_bit_xor__attributes,
    {.position = POS(610, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "multiline_assign\000funky_types", funky_types__multiline_assign__attributes,
    {.position = POS(613, 1)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "618_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "619_0_temp_no\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "621_0_do_negate\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "622_0_do_swap\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "625_1_head\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "REMARK\000", NULL,
    {.position = POS(627, 72)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "626_1_arguments\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "628_23_left\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "628_38_statements\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "629_1_right\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "630_1_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "633_1_rest\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "647_1_idx\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "less\000std", NULL,
    {.position = POS(654, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "loop\000", NULL,
    {.position = POS(648, 7)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "inline_body\000funky_types", funky_types__inline_body__attributes,
    {.position = POS(684, 1)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "parameters_of\000", NULL,
    {.position = POS(687, 22)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "statement_of\000", NULL,
    {.position = POS(688, 21)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "694_30_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "694_35_temp_no\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "on_top_level\000", NULL,
    {.position = POS(695, 4)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "mangle_position\000", NULL,
    {.position = POS(696, 31)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "string\000std", NULL,
    {.position = POS(696, 23)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "700_1_statement\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "701_1_statements\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_undefined\000", NULL,
    {.position = POS(702, 16)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "on\000", NULL,
    {.position = POS(702, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "all_of\000", NULL,
    {.position = POS(707, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "map_reduce\000", NULL,
    {.position = POS(717, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "any_of\000", NULL,
    {.position = POS(724, 25)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "727_20_body\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "728_1_statements\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "729_1_parameter_state\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "730_1_parameters\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "731_1_new_statements\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "732_1_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "734_3_idx\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "734_7_statement\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "MULTILINE_REMARK\000", NULL,
    {.position = POS(736, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "OPEN_PARAMETERS\000", NULL,
    {.position = POS(740, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "parameter_of\000", NULL,
    {.position = POS(744, 27)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "CLOSE_PARAMETERS\000", NULL,
    {.position = POS(748, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "RETURN\000", NULL,
    {.position = POS(758, 50)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "777_35_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "777_40_temp_no\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "778_1_head\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "779_1_original_head\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "780_1_arguments\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "FUNCTOR\000", NULL,
    {.position = POS(782, 5)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "794_38_result_statements\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "795_1_new_arguments\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "797_3_item\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "BACKQUOTED\000", NULL,
    {.position = POS(805, 37)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "821_19_leading_statements\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "821_39_trailing_statements\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "822_1_node_type_of_first_argument\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "ATTRIBUTE_VALUE_PAIR\000", NULL,
    {.position = POS(827, 46)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "METHOD_VALUE_PAIR\000", NULL,
    {.position = POS(828, 46)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "TYPE_FUNCTION\000", NULL,
    {.position = POS(829, 46)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "823_1_is_a_slot_definition\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "835_1_last_statement\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "line_no_of\000", NULL,
    {.position = POS(838, 26)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "CONSTANT_COMPOUND\000", NULL,
    {.position = POS(843, 30)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "879_1_temp_name\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "880_1_value\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "882_3_stmt_idx\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "882_12_trailing_statement\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "884_3_arg_idx\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "884_11_argument\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "INLINE_ATTRIBUTE_VALUE_PAIR\000", NULL,
    {.position = POS(893, 21)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "print\000debug", NULL,
    {.position = POS(904, 15)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "is_an_output\000", NULL,
    {.position = POS(924, 36)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "924_1_argument\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "find_first\000", NULL,
    {.position = POS(924, 15)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "numeric_literal\000funky_types", funky_types__numeric_literal__attributes,
    {.position = POS(928, 1)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "delete_all\000", NULL,
    {.position = POS(929, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "to_string\000", NULL,
    {.position = POS(931, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "key_value_pair\000std", NULL,
    {.position = POS(933, 6)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "replace_all\000", NULL,
    {.position = POS(932, 3)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "character_literal\000funky_types", funky_types__character_literal__attributes,
    {.position = POS(940, 1)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "character_of\000", NULL,
    {.position = POS(943, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "to_integer\000", NULL,
    {.position = POS(943, 29)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "numeric_character_literal\000funky_types", funky_types__numeric_character_literal__attributes,
    {.position = POS(948, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "named_character_literal\000funky_types", funky_types__named_character_literal__attributes,
    {.position = POS(957, 1)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "957_49_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "957_54_temp_no\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "958_1_chr\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "character_from_name\000", NULL,
    {.position = POS(958, 8)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "at_character_literal\000funky_types", funky_types__at_character_literal__attributes,
    {.position = POS(968, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "unique\000funky_types", funky_types__unique__attributes,
    {.position = POS(982, 1)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "line_text_of\000", NULL,
    {.position = POS(984, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "truncate_from\000", NULL,
    {.position = POS(984, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "mangle_identifier\000", NULL,
    {.position = POS(988, 29)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "string_literal\000funky_types", funky_types__string_literal__attributes,
    {.position = POS(992, 1)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "992_40_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "992_45_temp_no\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "993_1_arguments\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "994_1_characters\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "995_1_statements\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "996_1_components\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "components_of\000", NULL,
    {.position = POS(996, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "character_sequence\000funky_types", NULL,
    {.position = POS(1000, 7)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "characters_of\000", NULL,
    {.position = POS(1001, 10)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1009_3_idx\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1009_7_component\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "CHARACTER_SEQUENCE\000", NULL,
    {.position = POS(1011, 13)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1012_1_component_characters\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "minus\000std", NULL,
    {.position = POS(1017, 45)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "trim_left\000", NULL,
    {.position = POS(1018, 22)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "NUMERIC_CHARACTER\000", NULL,
    {.position = POS(1021, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "character\000", NULL,
    {.position = POS(1022, 32)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "NAMED_CHARACTER\000", NULL,
    {.position = POS(1024, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "NEWLINE\000", NULL,
    {.position = POS(1030, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "AT_CHARACTER\000", NULL,
    {.position = POS(1033, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "ESCAPE_EXPRESSION\000", NULL,
    {.position = POS(1036, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "TAGGED_EMPTY_CHARACTER\000", NULL,
    {.position = POS(1043, 13)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "list\000std_types", std_types__list__attributes,
    {.position = POS(1089, 1)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1089_33_temp_no\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1090_1_statements\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1091_1_simplified_nodes\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "BUILTIN\000", NULL,
    {.position = POS(1122, 16)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "TEMPORARY\000", NULL,
    {.position = POS(1132, 16)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1156_20_head\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1156_25_arguments\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1159_1_node_type\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1183_1_expanded\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1185_3_argument\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1205_23_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1206_1_level\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1207_1_within_string\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1208_15_idx\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "dec\000", NULL,
    {.position = POS(1223, 11)}
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
    "1267_42_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1268_1_identifier\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "allow_hidden\000", NULL,
    {.position = POS(1269, 10)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "mangle_local_definition\000", NULL,
    {.position = POS(1271, 33)}
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
    {.position = POS(1287, 14)}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "is_a_remark\000funky", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "remark\000funky_types", funky_types__remark__attributes,
    {.position = POS(1297, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "multiline_remark\000funky_types", funky_types__multiline_remark__attributes,
    {.position = POS(1298, 1)}
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
    {.position = POS(1311, 20)}
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
  364, // number of constants
  371, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  constants_table,
  variables_table,
};
