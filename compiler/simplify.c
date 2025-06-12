#include <stddef.h>
#include <stdint.h>

#include "runtime/common.h"
#include "runtime/builtins.h"
#include "runtime/fko.h"
#include "runtime/memory.h"

enum {
  tuple_55_1 = -1,
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
  lambda_36 = -72,
  lambda_37 = -73,
  chr_58 = -74,
  lambda_namespace_is_not_empty = -75,
  lambda_true_namespace_is_defined = -76,
  func_check = -77,
  lambda_38 = -78,
  lambda_39 = -79,
  lambda_version_is_defined = -80,
  string_1 = -81,
  func_resolve = -82,
  lambda_40 = -83,
  lambda_41 = -84,
  func_funky_types__expression___simplify = -85,
  lambda_operator_is_defined = -86,
  lambda_42 = -87,
  func_funky_types__negation___simplify = -88,
  lambda_43 = -89,
  chr_45 = -90,
  lambda_44 = -91,
  num_7 = -92,
  lambda_45 = -93,
  str_minus = -94,
  lambda_46 = -95,
  str_negate = -96,
  func_binop = -97,
  lambda_COMMA = -98,
  func_sequence_constructor = -99,
  lambda_47 = -100,
  lambda_48 = -101,
  str_sequence = -102,
  lambda_AND = -103,
  lambda_49 = -104,
  str_and = -105,
  lambda_OR = -106,
  lambda_50 = -107,
  str_or = -108,
  lambda_51 = -109,
  lambda_PLUS = -110,
  str_plus = -111,
  lambda_MINUS = -112,
  str_minus_2 = -113,
  lambda_TIMES = -114,
  str_times = -115,
  lambda_OVER = -116,
  str_over = -117,
  lambda_EQUAL = -118,
  str_equal = -119,
  lambda_NOT_EQUAL = -120,
  str_not = -121,
  lambda_LESS_THAN = -122,
  str_less = -123,
  lambda_GREATER_THAN = -124,
  lambda_LESS_EQUAL = -125,
  lambda_GREATER_EQUAL = -126,
  lambda_RANGE = -127,
  str_value_range = -128,
  lambda_KEY_VALUE = -129,
  str_key_value_pair = -130,
  lambda_SHIFT_LEFT = -131,
  str_shift_left = -132,
  lambda_SHIFT_RIGHT = -133,
  str_shift_right = -134,
  lambda_BIT_AND = -135,
  str_bit_and = -136,
  lambda_BIT_OR = -137,
  str_bit_or = -138,
  lambda_BIT_XOR = -139,
  str_bit_xor = -140,
  lambda_NAMED_OPERATOR = -141,
  lambda_52 = -142,
  str_operation = -143,
  num_9 = -144,
  str_left = -145,
  str_right = -146,
  lambda_2_operator_is_defined = -147,
  lambda_53 = -148,
  func_function_call = -149,
  func_function_call_from_list = -150,
  func_simplify_return = -151,
  func_funky_types__inline_statement___simplify = -152,
  func_funky_types__multiline_plus___simplify = -153,
  func_funky_types__multiline_minus___simplify = -154,
  func_funky_types__multiline_minus_with_remark___simplify = -155,
  func_funky_types__multiline_times___simplify = -156,
  func_funky_types__multiline_over___simplify = -157,
  func_funky_types__multiline_over_with_remark___simplify = -158,
  func_funky_types__multiline_shift_left___simplify = -159,
  func_funky_types__multiline_shift_right___simplify = -160,
  func_funky_types__multiline_equal___simplify = -161,
  func_funky_types__multiline_not_equal___simplify = -162,
  func_funky_types__multiline_less_equal___simplify = -163,
  func_funky_types__multiline_less_than___simplify = -164,
  func_funky_types__multiline_greater_equal___simplify = -165,
  func_funky_types__multiline_greater_than___simplify = -166,
  func_funky_types__multiline_and___simplify = -167,
  func_funky_types__multiline_or___simplify = -168,
  func_funky_types__multiline_bit_and___simplify = -169,
  func_funky_types__multiline_bit_and_with_remark___simplify = -170,
  func_funky_types__multiline_bit_or___simplify = -171,
  func_funky_types__multiline_bit_xor___simplify = -172,
  func_funky_types__multiline_assign___simplify = -173,
  func_simplify_multiline_operator = -174,
  lambda_filterarguments_ofself = -175,
  lambda_do_delay = -176,
  lambda_54 = -177,
  lambda_55 = -178,
  lambda_56 = -179,
  lambda_loop = -180,
  lambda_57 = -181,
  lambda_58 = -182,
  lambda_59 = -183,
  lambda_do_negate = -184,
  lambda_60 = -185,
  func_push_statement = -186,
  func_funky_types__inline_body___simplify = -187,
  func_funky_types__body___simplify = -188,
  str_func = -189,
  lambda_61 = -190,
  lambda_62 = -191,
  str_Missing_statemen = -192,
  lambda_63 = -193,
  lambda_64 = -194,
  lambda_65 = -195,
  lambda_66 = -196,
  str_unexpected_state = -197,
  func_simplify_statements = -198,
  lambda_67 = -199,
  func_check_statements = -200,
  lambda_68 = -201,
  lambda_MULTILINE_REMARK = -202,
  lambda_69 = -203,
  str_Closing_parenthe = -204,
  lambda_OPEN_PARAMETERS = -205,
  lambda_70 = -206,
  lambda_71 = -207,
  str_Unexpected_openi = -208,
  lambda_CLOSE_PARAMETERS = -209,
  lambda_72 = -210,
  lambda_73 = -211,
  str_Unexpected_closi = -212,
  lambda_74 = -213,
  lambda_75 = -214,
  lambda_76 = -215,
  lambda_77 = -216,
  lambda_78 = -217,
  lambda_79 = -218,
  func_funky_types__statement___simplify = -219,
  lambda_arguments_ofself = -220,
  lambda_FUNCTOR = -221,
  lambda_RETURN = -222,
  lambda_80 = -223,
  str_Slot_assignment = -224,
  lambda_81 = -225,
  lambda_82 = -226,
  str_Missing_argument = -227,
  lambda_83 = -228,
  lambda_84 = -229,
  str_Too_many_argumen = -230,
  lambda_is_a_slot_assigment = -231,
  lambda_85 = -232,
  lambda_86 = -233,
  lambda_87 = -234,
  lambda_88 = -235,
  lambda_89 = -236,
  lambda_90 = -237,
  lambda_91 = -238,
  func_simplify_head_and_arguments = -239,
  lambda_92 = -240,
  lambda_93 = -241,
  lambda_94 = -242,
  lambda_95 = -243,
  lambda_96 = -244,
  lambda_97 = -245,
  lambda_98 = -246,
  lambda_is_an_assignment = -247,
  lambda_99 = -248,
  lambda_100 = -249,
  lambda_is_a_slot_definition = -250,
  str_const = -251,
  lambda_101 = -252,
  func_check_trailing_statements = -253,
  lambda_102 = -254,
  str_stdassign = -255,
  lambda_103 = -256,
  func_process_trailing_statements = -257,
  lambda_104 = -258,
  lambda_105 = -259,
  lambda_2_FUNCTOR = -260,
  lambda_106 = -261,
  lambda_INLINE_ATTRIBUTE_VALUE_PAIR = -262,
  lambda_107 = -263,
  lambda_108 = -264,
  str_TEMP_NOT_FOUND_I = -265,
  lambda_109 = -266,
  lambda_110 = -267,
  lambda_2_is_a_slot_assigment = -268,
  lambda_111 = -269,
  lambda_112 = -270,
  lambda_113 = -271,
  str_More_than_one_de = -272,
  lambda_114 = -273,
  lambda_115 = -274,
  func_check_that_all_arguments_are_inputs = -275,
  lambda_116 = -276,
  str_Unexpected_outpu = -277,
  func_check_that_all_arguments_are_slot_definitions = -278,
  lambda_117 = -279,
  str_Argument_should = -280,
  func_is_not_a_slot_assigment = -281,
  func_check_that_all_arguments_are_slot_assignments = -282,
  lambda_arguments = -283,
  lambda_118 = -284,
  str_Argument_should_2 = -285,
  func_is_a_pair_or_type_function = -286,
  lambda_119 = -287,
  lambda_120 = -288,
  func_funky_types__numeric_literal___simplify = -289,
  chr_39 = -290,
  chr_46 = -291,
  string_2 = -292,
  key_value_pair_994_6 = -293,
  key_value_pair_995_6 = -294,
  str_num = -295,
  func_funky_types__character_literal___simplify = -296,
  func_funky_types__numeric_character_literal___simplify = -297,
  str_chr = -298,
  func_funky_types__named_character_literal___simplify = -299,
  lambda_121 = -300,
  lambda_122 = -301,
  str_Invalid_characte = -302,
  func_funky_types__at_character_literal___simplify = -303,
  string_3 = -304,
  func_create_numeric_character_literal = -305,
  func_funky_types__unique___simplify = -306,
  chr_32 = -307,
  str_uni = -308,
  func_funky_types__string_literal___simplify = -309,
  string_4 = -310,
  lambda_123 = -311,
  str_string = -312,
  lambda_124 = -313,
  lambda_125 = -314,
  lambda_CHARACTER_SEQUENCE = -315,
  lambda_126 = -316,
  lambda_127 = -317,
  lambda_128 = -318,
  lambda_NUMERIC_CHARACTER = -319,
  lambda_NAMED_CHARACTER = -320,
  lambda_129 = -321,
  lambda_NEWLINE = -322,
  chr_10 = -323,
  lambda_AT_CHARACTER = -324,
  chr_64 = -325,
  lambda_ESCAPE_EXPRESSION = -326,
  lambda_TAGGED_EMPTY_CHARACTER = -327,
  lambda_130 = -328,
  str_node_type_ofcomp = -329,
  lambda_131 = -330,
  lambda_132 = -331,
  lambda_133 = -332,
  lambda_134 = -333,
  str_stdstring = -334,
  func_add_characters = -335,
  lambda_135 = -336,
  lambda_136 = -337,
  str_string_2 = -338,
  func_std_types__list___simplify = -339,
  lambda_137 = -340,
  lambda_138 = -341,
  func_create_functor = -342,
  func_std = -343,
  str_std = -344,
  func_assign_attributes = -345,
  str__assign_attribut = -346,
  func_temporary = -347,
  str__temp = -348,
  func_redefine_temporary = -349,
  func_update_temporary = -350,
  func_create_statement = -351,
  lambda_arguments_is_not_empty = -352,
  lambda_139 = -353,
  lambda_140 = -354,
  lambda_141 = -355,
  lambda_142 = -356,
  str_assigning_method = -357,
  lambda_143 = -358,
  func_expand_backquotes = -359,
  lambda_144 = -360,
  lambda_145 = -361,
  lambda_146 = -362,
  lambda_147 = -363,
  func_resolve_backquoted = -364,
  func_exctract_characters = -365,
  lambda_148 = -366,
  lambda_nl = -367,
  lambda_149 = -368,
  lambda_150 = -369,
  lambda_151 = -370,
  chr_34 = -371,
  lambda_quot = -372,
  chr_40 = -373,
  lambda_152 = -374,
  chr_41 = -375,
  lambda_153 = -376,
  func_funky_types__statement_list___append = -377,
  func_funky_types__statement_list___push_leading_statement = -378,
  func_funky_types__statement_list___push_trailing_statement = -379,
  func_collect_parameter_definitions = -380,
  lambda_154 = -381,
  func_collect_local_definitions = -382,
  lambda_155 = -383,
  func_funky_types__node___add_definitions = -384,
  func_funky_types__statement___add_definitions = -385,
  lambda_156 = -386,
  lambda_157 = -387,
  lambda_158 = -388,
  lambda_159 = -389,
  func_funky_types__node___add_definition = -390,
  func_funky_types__definition___add_definition = -391,
  string_5 = -392,
  lambda_160 = -393,
  lambda_161 = -394,
  lambda_162 = -395,
  str_Variable_is_alre = -396,
  func_add_parameter_definition = -397,
  func_funky__mangle_local_definition = -398,
  func_funky__mangle_position = -399
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
  var_funky_types__update, // extern
  var_funky_types__node, // extern
  var_is_an_io_call, // extern polymorphic
  var_kind_of, // extern polymorphic
  var_funky_types__pair, // extern
  var_funky_types__inline_attribute_value_pair, // extern
  var_funky_types__inline_method_value_pair, // extern
  var_funky_types__attribute_access, // extern
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
  var_funky_types__dummy_definition, // extern
  var_std__plus, // extern
  var_true, // extern
  var_77_34_self, // dynamic
  var_77_39_temp_no, // dynamic
  var_79_4_extensions, // dynamic
  var_extensions_of, // extern polymorphic
  var_is_empty, // extern
  var_if, // extern
  var_86_24_expression, // dynamic
  var_86_46_temp_no, // dynamic
  var_87_34_statements, // dynamic
  var_89_8_extension, // dynamic
  var_90_8_extension_node_type, // dynamic
  var_node_type_of, // extern
  var_FUNCTION_CALL, // extern
  var_REMARK_AND_MULTILINE_FUNCTION_CALL, // extern
  var_std__sequence, // extern
  var_ATTRIBUTE_ACCESS, // extern
  var_inc, // extern
  var_list, // extern
  var_next, // extern
  var_101_12_arguments, // dynamic
  var_arguments_of, // extern polymorphic
  var_length_of, // extern
  var_std__equal, // extern
  var_is_a_pair, // attribute
  var_std__and, // extern
  var_115_23_remark_arguments, // dynamic
  var_is_a_remark, // extern polymorphic
  var_filter, // extern
  var_is_not_empty, // extern
  var_std__or, // extern
  var_IO_CALL, // extern
  var_case, // extern
  var_for_each, // extern
  var_funky_types__parameter, // extern
  var_funky_types__inline_parameter, // extern
  var_139_23_self, // dynamic
  var_139_28_temp_no, // dynamic
  var_option_of, // extern polymorphic
  var_140_38_statements, // dynamic
  var_funky__name_of, // extern polymorphic
  var_resolve_variable, // extern
  var_funky_types__return, // extern
  var_157_39_self, // dynamic
  var_157_44_temp_no, // dynamic
  var_159_4_extensions, // dynamic
  var_165_8_result_temp_no, // dynamic
  var_166_8_base, // dynamic
  var_167_8_bases, // dynamic
  var_168_38_statements, // dynamic
  var_first, // extern
  var_typed_tuple, // extern
  var_range, // extern
  var_171_12_extension, // dynamic
  var_175_18_remark_arguments, // dynamic
  var_175_36_arguments, // dynamic
  var_198_12_result, // dynamic
  var_202_16_extension, // dynamic
  var_pop, // extern
  var_identifier_of, // extern polymorphic
  var_source_group_of, // extern polymorphic
  var_source_position_of, // extern polymorphic
  var_204_16_destination, // dynamic
  var_funky__key_of, // extern polymorphic
  var_expression_of, // extern polymorphic
  var_from_to_by, // extern
  var_236_33_self, // dynamic
  var_236_38_temp_no, // dynamic
  var_238_4_extensions, // dynamic
  var_243_8_base, // dynamic
  var_244_8_bases, // dynamic
  var_245_38_statements, // dynamic
  var_247_12_extension, // dynamic
  var_251_18_remark_arguments, // dynamic
  var_251_36_arguments, // dynamic
  var_274_12_result, // dynamic
  var_279_16_extension, // dynamic
  var_281_16_destination, // dynamic
  var_funky_types__parenthesed_expression, // extern
  var_317_54_temp_no, // dynamic
  var_318_33_expression, // dynamic
  var_318_54_statements, // dynamic
  var_319_4_calls, // dynamic
  var_calls_of, // extern
  var_327_31_self, // dynamic
  var_327_36_temp_no, // dynamic
  var_329_4_argument, // dynamic
  var_argument_of, // extern polymorphic
  var_is_a_list, // extern
  var_not, // extern
  var_syntax_error, // extern
  var_funky__argument_of, // extern polymorphic
  var_funky__expression_of, // extern polymorphic
  var_354_23_node, // dynamic
  var_BUILTIN, // extern
  var_359_8_identifier, // dynamic
  var_360_8_namespace, // dynamic
  var_before, // extern
  var_363_12_true_namespace, // dynamic
  var_namespace_aliases, // extern
  var_is_defined, // extern
  var_from, // extern
  var_DEFINITION, // extern
  var_std__not, // extern
  var_376_14_version, // dynamic
  var_namespace_versions, // extern
  var_386_10_resolved_identifier, // dynamic
  var_LOCAL, // extern
  var_EXTERN, // extern
  var_funky_types__expression, // extern
  var_395_37_self, // dynamic
  var_395_42_temp_no, // dynamic
  var_396_4_operator, // dynamic
  var_operator_of, // extern
  var_397_13_expression, // dynamic
  var_397_54_statements, // dynamic
  var_funky_types__negation, // extern
  var_403_35_self, // dynamic
  var_403_40_temp_no, // dynamic
  var_404_13_expression, // dynamic
  var_404_54_statements, // dynamic
  var_NUMERIC_LITERAL, // extern
  var_407_8_digits, // dynamic
  var_digits_of, // extern polymorphic
  var_408_8_key, // dynamic
  var_put, // extern
  var_429_10_left, // dynamic
  var_429_15_operator, // dynamic
  var_429_24_temp_no, // dynamic
  var_429_32_statements, // dynamic
  var_430_4_operation, // dynamic
  var_431_4_right, // dynamic
  var_COMMA, // extern
  var_436_31_sequence, // dynamic
  var_436_40_rest, // dynamic
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
  var_624_5_self, // dynamic
  var_625_5_temp_no, // dynamic
  var_627_5_do_negate, // dynamic
  var_628_5_do_swap, // dynamic
  var_631_4_head, // dynamic
  var_REMARK, // extern
  var_632_4_arguments, // dynamic
  var_634_26_left, // dynamic
  var_634_41_statements, // dynamic
  var_635_4_right, // dynamic
  var_636_4_n, // dynamic
  var_639_8_rest, // dynamic
  var_653_8_idx, // dynamic
  var_std__less, // extern
  var_loop, // extern
  var_funky_types__inline_body, // extern
  var_parameters_of, // extern polymorphic
  var_statement_of, // extern polymorphic
  var_700_31_self, // dynamic
  var_700_36_temp_no, // dynamic
  var_on_top_level, // extern
  var_mangle_position, // extern
  var_std__string, // extern
  var_706_4_statement, // dynamic
  var_707_4_statements, // dynamic
  var_is_undefined, // extern
  var_on, // extern
  var_all_of, // extern
  var_map_reduce, // extern
  var_any_of, // extern
  var_733_21_body, // dynamic
  var_734_4_statements, // dynamic
  var_735_4_parameter_state, // dynamic
  var_736_4_parameters, // dynamic
  var_737_4_new_statements, // dynamic
  var_739_8_idx, // dynamic
  var_739_12_statement, // dynamic
  var_MULTILINE_REMARK, // extern
  var_OPEN_PARAMETERS, // extern
  var_parameter_of, // extern
  var_CLOSE_PARAMETERS, // extern
  var_779_36_self, // dynamic
  var_779_41_temp_no, // dynamic
  var_780_4_head, // dynamic
  var_781_4_original_head, // dynamic
  var_REDEFINITION, // extern
  var_782_4_is_a_redefinition, // dynamic
  var_783_4_arguments, // dynamic
  var_786_4_is_a_slot_assigment, // dynamic
  var_FUNCTOR, // extern
  var_RETURN, // extern
  var_817_34_is_an_assignment, // dynamic
  var_818_30_result_statements, // dynamic
  var_819_6_new_arguments, // dynamic
  var_821_10_item, // dynamic
  var_BACKQUOTED, // extern
  var_840_32_leading_statements, // dynamic
  var_840_52_trailing_statements, // dynamic
  var_841_14_is_a_slot_definition, // dynamic
  var_848_18_last_statement, // dynamic
  var_line_no_of, // extern
  var_CONSTANT_COMPOUND, // extern
  var_892_16_temp_name, // dynamic
  var_893_16_value, // dynamic
  var_895_20_stmt_idx, // dynamic
  var_895_29_trailing_statement, // dynamic
  var_897_24_arg_idx, // dynamic
  var_897_32_argument, // dynamic
  var_INLINE_ATTRIBUTE_VALUE_PAIR, // extern
  var_debug__print, // extern
  var_932_25_outputs, // dynamic
  var_is_an_output, // extern polymorphic
  var_962_6_argument, // dynamic
  var_find_first, // extern
  var_968_6_argument, // dynamic
  var_ATTRIBUTE_VALUE_PAIR, // extern
  var_975_6_argument, // dynamic
  var_982_4_node_type, // dynamic
  var_METHOD_VALUE_PAIR, // extern
  var_TYPE_FUNCTION, // extern
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
  var_1018_50_self, // dynamic
  var_1018_55_temp_no, // dynamic
  var_1019_4_chr, // dynamic
  var_character_from_name, // extern
  var_funky_types__at_character_literal, // extern
  var_funky_types__unique, // extern
  var_line_text_of, // extern
  var_truncate_from, // extern
  var_mangle_identifier, // extern
  var_funky_types__string_literal, // extern
  var_1053_41_self, // dynamic
  var_1053_46_temp_no, // dynamic
  var_1054_4_arguments, // dynamic
  var_1055_4_characters, // dynamic
  var_1056_4_statements, // dynamic
  var_1057_4_components, // dynamic
  var_components_of, // extern
  var_funky_types__character_sequence, // extern
  var_characters_of, // extern polymorphic
  var_1070_12_idx, // dynamic
  var_1070_16_component, // dynamic
  var_CHARACTER_SEQUENCE, // extern
  var_1073_16_component_characters, // dynamic
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
  var_1150_34_temp_no, // dynamic
  var_1151_4_statements, // dynamic
  var_1152_4_simplified_nodes, // dynamic
  var_TEMPORARY, // extern
  var_1217_21_head, // dynamic
  var_1217_26_arguments, // dynamic
  var_1220_8_node_type, // dynamic
  var_1247_4_expanded, // dynamic
  var_1249_8_argument, // dynamic
  var_1269_26_str, // dynamic
  var_1270_6_level, // dynamic
  var_1271_6_within_string, // dynamic
  var_1273_10_idx, // dynamic
  var_dec, // extern
  var_add_definition, // attribute
  var_add_definitions, // attribute
  var_1324_4_head, // dynamic
  var_1325_4_arguments, // dynamic
  var_1343_43_self, // dynamic
  var_1344_4_identifier, // dynamic
  var_contains, // extern
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
  LOCAL(2), // 58_30_statement
  // simplify &statement 0 $_temp_no $generated_statements
  var_simplify, 2, LOCAL(2), num_0, 3, LOCAL(2), LOCAL(1), LOCAL(3),
  // generated_statements $leading_statements $trailing_statements
  LOCAL(3), 0, 2, LOCAL(4), LOCAL(5),
  // push(leading_statements statement) trailing_statements
  var_push, 2, LOCAL(4), LOCAL(2), 1, LOCAL(1),
  // append push(leading_statements statement) trailing_statements
  var_append, 2, LOCAL(1), LOCAL(5), TAIL_CALL,
  POS(59, 3),
  POS(60, 3),
  POS(61, 10),
  POS(61, 3),
  LOCAL(5),
  LOCAL(3),
  LOCAL(4),
  LOCAL(2)
};

static FUNCTION_INFO i_func_funky__simplify_statement = {
  t_func_funky__simplify_statement, NULL, 4, 4,
  {"60_45_trailing_statements\000", "59_36_generated_statements\000", "60_25_leading_statements\000", "58_30_statement\000"}
};

static TAB_NUM t_func_funky_types__variable___simplify[] = {
  3, // locals
  2, // parameters
  LOCAL(2), // 63_35_self
  LOCAL(3), // 63_40_temp_no
  // resolve_identifier &self
  func_resolve_identifier, 1, LOCAL(2), 1, LOCAL(2),
  // create_functor(self) temp_no empty_statements
  func_create_functor, 1, LOCAL(2), 1, LOCAL(1),
  // -> create_functor(self) temp_no empty_statements
  LET, 3, LOCAL(1), LOCAL(3), var_empty_statements, TAIL_CALL,
  POS(64, 3),
  POS(65, 6),
  POS(65, 3),
  LOCAL(2),
  LOCAL(3)
};

static FUNCTION_INFO i_func_funky_types__variable___simplify = {
  t_func_funky_types__variable___simplify, NULL, 3, 2,
  {"63_35_self\000", "63_40_temp_no\000"}
};

static TAB_NUM t_func_funky_types__attribute_access___simplify[] = {
  2, // locals
  2, // parameters
  LOCAL(1), // 67_43_self
  LOCAL(2), // 67_48_temp_no
  // resolve_identifier &self
  func_resolve_identifier, 1, LOCAL(1), 1, LOCAL(1),
  // -> self temp_no empty_statements
  LET, 3, LOCAL(1), LOCAL(2), var_empty_statements, TAIL_CALL,
  POS(68, 3),
  POS(69, 3),
  LOCAL(2),
  LOCAL(1)
};

static FUNCTION_INFO i_func_funky_types__attribute_access___simplify = {
  t_func_funky_types__attribute_access___simplify, NULL, 2, 2,
  {"67_48_temp_no\000", "67_43_self\000"}
};

static TAB_NUM t_func_funky_types__dummy_definition___simplify[] = {
  5, // locals
  2, // parameters
  LOCAL(4), // 71_43_self
  LOCAL(5), // 71_48_temp_no
  // temp_no+1 self)(.is_a_dummy_definition true)
  var_std__plus, 2, LOCAL(5), num_1, 1, LOCAL(1),
  // redefine_temporary(temp_no+1 self)(.is_a_dummy_definition true)
  func_redefine_temporary, 2, LOCAL(1), LOCAL(4), 1, LOCAL(2),
  // .is_a_dummy_definition true)
  LET, -1, LOCAL(2), var_is_a_dummy_definition, var_true, LOCAL(3),
  // ->
  LET, 3, LOCAL(3), LOCAL(5), var_empty_statements, TAIL_CALL,
  POS(73, 24),
  POS(73, 5),
  POS(73, 40),
  POS(72, 3),
  LOCAL(5),
  LOCAL(4)
};

static FUNCTION_INFO i_func_funky_types__dummy_definition___simplify = {
  t_func_funky_types__dummy_definition___simplify, NULL, 4, 2,
  {"71_48_temp_no\000", "71_43_self\000"}
};

static TAB_NUM t_func_funky_types__functor___simplify[] = {
  1, // locals
  2, // parameters
  var_77_34_self,
  var_77_39_temp_no,
  // resolve_identifier &self
  func_resolve_identifier, 1, var_77_34_self, 1, var_77_34_self,
  // $extensions extensions_of(self)
  var_extensions_of, 1, var_77_34_self, 1, var_79_4_extensions,
  // is_empty
  var_is_empty, 1, var_79_4_extensions, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1, lambda_2, TAIL_CALL,
  POS(78, 3),
  POS(79, 3),
  POS(81, 16),
  POS(80, 3)
};

static FUNCTION_INFO i_func_funky_types__functor___simplify = {
  t_func_funky_types__functor___simplify, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_1[] = {
  0, // locals
  0, // parameters
  //  self temp_no empty_statements
  LET, 3, var_77_34_self, var_77_39_temp_no, var_empty_statements, TAIL_CALL,
  POS(82, 7)
};

static FUNCTION_INFO i_lambda_1 = {
  t_lambda_1, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_2[] = {
  1, // locals
  0, // parameters
  // .extensions_of empty_list) extensions temp_no
  LET, -1, var_77_34_self, var_extensions_of, var_empty_list, LOCAL(1),
  // simplify_extensions self(.extensions_of empty_list) extensions temp_no
  func_simplify_extensions, 3, LOCAL(1), var_79_4_extensions, var_77_39_temp_no, TAIL_CALL,
  POS(84, 32),
  POS(84, 7)
};

static FUNCTION_INFO i_lambda_2 = {
  t_lambda_2, NULL, 2, 0,
  {}
};

static TAB_NUM t_func_simplify_extensions[] = {
  1, // locals
  3, // parameters
  var_86_24_expression,
  LOCAL(1), // 86_35_extensions
  var_86_46_temp_no,
  // simplify &extensions &temp_no $statements
  var_simplify, 2, LOCAL(1), var_86_46_temp_no, 3, LOCAL(1), var_86_46_temp_no, var_87_34_statements,
  // for_each extensions
  var_for_each, 3, LOCAL(1), lambda_3, lambda_11, TAIL_CALL,
  POS(87, 3),
  POS(88, 3),
  LOCAL(1)
};

static FUNCTION_INFO i_func_simplify_extensions = {
  t_func_simplify_extensions, NULL, 2, 1,
  {"86_35_extensions\000"}
};

static TAB_NUM t_lambda_3[] = {
  1, // locals
  1, // parameters
  var_89_8_extension,
  // $extension_node_type node_type_of(extension)
  var_node_type_of, 1, var_89_8_extension, 1, var_90_8_extension_node_type,
  // FUNCTION_CALL, REMARK_AND_MULTILINE_FUNCTION_CALL:
  var_std__sequence, 2, var_FUNCTION_CALL, var_REMARK_AND_MULTILINE_FUNCTION_CALL, 1, LOCAL(1),
  // case extension_node_type
  var_case, 7, var_90_8_extension_node_type, var_ATTRIBUTE_ACCESS, lambda_ATTRIBUTE_ACCESS, LOCAL(1), lambda_4, var_IO_CALL, lambda_IO_CALL, TAIL_CALL,
  POS(90, 7),
  POS(100, 9),
  POS(91, 7)
};

static FUNCTION_INFO i_lambda_3 = {
  t_lambda_3, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_ATTRIBUTE_ACCESS[] = {
  4, // locals
  0, // parameters
  // inc &temp_no
  var_inc, 1, var_86_46_temp_no, 1, var_86_46_temp_no,
  // create_functor(extension)
  func_create_functor, 1, var_89_8_extension, 1, LOCAL(1),
  // redefine_temporary(temp_no extension))
  func_redefine_temporary, 2, var_86_46_temp_no, var_89_8_extension, 1, LOCAL(2),
  // list(expression redefine_temporary(temp_no extension))
  var_list, 2, var_86_24_expression, LOCAL(2), 1, LOCAL(3),
  // create_statement
  func_create_statement, 2, LOCAL(1), LOCAL(3), 1, LOCAL(4),
  // push_leading_statement &statements
  var_push_leading_statement, 2, var_87_34_statements, LOCAL(4), 1, var_87_34_statements,
  // !expression temporary(temp_no extension)
  func_temporary, 2, var_86_46_temp_no, var_89_8_extension, 1, var_86_24_expression,
  // next
  var_next, 0, TAIL_CALL,
  POS(93, 11),
  POS(96, 15),
  POS(97, 31),
  POS(97, 15),
  POS(95, 13),
  POS(94, 11),
  POS(98, 11),
  POS(99, 11)
};

static FUNCTION_INFO i_lambda_ATTRIBUTE_ACCESS = {
  t_lambda_ATTRIBUTE_ACCESS, NULL, 8, 0,
  {}
};

static TAB_NUM t_lambda_4[] = {
  3, // locals
  0, // parameters
  // $arguments arguments_of(extension)
  var_arguments_of, 1, var_89_8_extension, 1, var_101_12_arguments,
  // length_of(arguments) == 1 && arguments(1).is_a_pair:
  var_length_of, 1, var_101_12_arguments, 1, LOCAL(1),
  // length_of(arguments) == 1 && arguments(1).is_a_pair:
  var_std__equal, 2, LOCAL(1), num_1, 1, LOCAL(2),
  // length_of(arguments) == 1 && arguments(1).is_a_pair:
  var_std__and, 2, LOCAL(2), lambda_5, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_6, lambda_7, TAIL_CALL,
  POS(101, 11),
  POS(103, 13),
  POS(103, 13),
  POS(103, 13),
  POS(102, 11)
};

static FUNCTION_INFO i_lambda_4 = {
  t_lambda_4, NULL, 5, 0,
  {}
};

static TAB_NUM t_lambda_5[] = {
  2, // locals
  0, // parameters
  // arguments(1).is_a_pair:
  var_101_12_arguments, 1, num_1, 1, LOCAL(1),
  // is_a_pair:
  var_is_a_pair, 1, LOCAL(1), 1, LOCAL(2),
  // arguments(1).is_a_pair:
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(103, 42),
  POS(103, 55),
  POS(103, 42)
};

static FUNCTION_INFO i_lambda_5 = {
  t_lambda_5, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_6[] = {
  5, // locals
  0, // parameters
  // inc &temp_no
  var_inc, 1, var_86_46_temp_no, 1, var_86_46_temp_no,
  // assign_attributes(extension)
  func_assign_attributes, 1, var_89_8_extension, 1, LOCAL(1),
  // arguments(1)
  var_101_12_arguments, 1, num_1, 1, LOCAL(2),
  // redefine_temporary(temp_no extension)
  func_redefine_temporary, 2, var_86_46_temp_no, var_89_8_extension, 1, LOCAL(3),
  // list
  var_list, 3, var_86_24_expression, LOCAL(2), LOCAL(3), 1, LOCAL(4),
  // create_statement
  func_create_statement, 2, LOCAL(1), LOCAL(4), 1, LOCAL(5),
  // push_leading_statement &statements
  var_push_leading_statement, 2, var_87_34_statements, LOCAL(5), 1, var_87_34_statements,
  // !expression temporary(temp_no expression)
  func_temporary, 2, var_86_46_temp_no, var_86_24_expression, 1, var_86_24_expression,
  // next
  var_next, 0, TAIL_CALL,
  POS(104, 15),
  POS(107, 19),
  POS(110, 21),
  POS(111, 21),
  POS(108, 19),
  POS(106, 17),
  POS(105, 15),
  POS(112, 15),
  POS(113, 15)
};

static FUNCTION_INFO i_lambda_6 = {
  t_lambda_6, NULL, 9, 0,
  {}
};

static TAB_NUM t_lambda_7[] = {
  2, // locals
  0, // parameters
  // filter $remark_arguments &arguments is_a_remark
  var_filter, 2, var_101_12_arguments, var_is_a_remark, 2, var_115_23_remark_arguments, var_101_12_arguments,
  // is_empty
  var_is_empty, 1, var_101_12_arguments, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_8, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), var_next, lambda_10, TAIL_CALL,
  POS(115, 15),
  POS(118, 29),
  POS(117, 19),
  POS(116, 15)
};

static FUNCTION_INFO i_lambda_7 = {
  t_lambda_7, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_8[] = {
  2, // locals
  0, // parameters
  // extension_node_type == REMARK_AND_MULTILINE_FUNCTION_CALL
  var_std__equal, 2, var_90_8_extension_node_type, var_REMARK_AND_MULTILINE_FUNCTION_CALL, 1, LOCAL(1),
  // 
  var_std__or, 2, LOCAL(1), lambda_9, 1, LOCAL(2),
  // 
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(120, 21),
  POS(119, 21),
  POS(119, 21)
};

static FUNCTION_INFO i_lambda_8 = {
  t_lambda_8, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_9[] = {
  1, // locals
  0, // parameters
  // is_not_empty
  var_is_not_empty, 1, var_115_23_remark_arguments, 1, LOCAL(1),
  // remark_arguments.is_not_empty
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(121, 38),
  POS(121, 21)
};

static FUNCTION_INFO i_lambda_9 = {
  t_lambda_9, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_10[] = {
  3, // locals
  0, // parameters
  // inc &temp_no
  var_inc, 1, var_86_46_temp_no, 1, var_86_46_temp_no,
  // redefine_temporary(temp_no expression))
  func_redefine_temporary, 2, var_86_46_temp_no, var_86_24_expression, 1, LOCAL(1),
  // push(arguments redefine_temporary(temp_no expression))
  var_push, 2, var_101_12_arguments, LOCAL(1), 1, LOCAL(2),
  // create_statement
  func_create_statement, 2, var_86_24_expression, LOCAL(2), 1, LOCAL(3),
  // push_leading_statement &statements
  var_push_leading_statement, 2, var_87_34_statements, LOCAL(3), 1, var_87_34_statements,
  // !expression temporary(temp_no expression)
  func_temporary, 2, var_86_46_temp_no, var_86_24_expression, 1, var_86_24_expression,
  // next
  var_next, 0, TAIL_CALL,
  POS(124, 19),
  POS(128, 38),
  POS(128, 23),
  POS(126, 21),
  POS(125, 19),
  POS(129, 19),
  POS(130, 19)
};

static FUNCTION_INFO i_lambda_10 = {
  t_lambda_10, NULL, 7, 0,
  {}
};

static TAB_NUM t_lambda_IO_CALL[] = {
  0, // locals
  0, // parameters
  // expression.is_an_io_call true
  LET, -1, var_86_24_expression, var_is_an_io_call, var_true, var_86_24_expression,
  // next
  var_next, 0, TAIL_CALL,
  POS(132, 12),
  POS(133, 11)
};

static FUNCTION_INFO i_lambda_IO_CALL = {
  t_lambda_IO_CALL, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_11[] = {
  0, // locals
  0, // parameters
  //  expression temp_no statements
  LET, 3, var_86_24_expression, var_86_46_temp_no, var_87_34_statements, TAIL_CALL,
  POS(134, 7)
};

static FUNCTION_INFO i_lambda_11 = {
  t_lambda_11, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_simplify_parameter[] = {
  3, // locals
  2, // parameters
  var_139_23_self,
  var_139_28_temp_no,
  // option_of &temp_no $statements
  var_option_of, 1, var_139_23_self, 1, LOCAL(1),
  // simplify &self.option_of &temp_no $statements
  var_simplify, 2, LOCAL(1), var_139_28_temp_no, 3, LOCAL(1), var_139_28_temp_no, var_140_38_statements,
  // self.option_of &temp_no $statements
  LET, -1, var_139_23_self, var_option_of, LOCAL(1), var_139_23_self,
  // $name funky::name_of(self)
  var_funky__name_of, 1, var_139_23_self, 1, LOCAL(3),
  // name(1) == '_'
  LOCAL(3), 1, num_1, 1, LOCAL(1),
  // name(1) == '_'
  var_std__equal, 2, LOCAL(1), chr_95, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_12, lambda_13, TAIL_CALL,
  POS(140, 18),
  POS(140, 3),
  POS(140, 13),
  POS(141, 3),
  POS(143, 5),
  POS(143, 5),
  POS(142, 3),
  LOCAL(3)
};

static FUNCTION_INFO i_func_simplify_parameter = {
  t_func_simplify_parameter, NULL, 7, 1,
  {"141_4_name\000"}
};

static TAB_NUM t_lambda_12[] = {
  4, // locals
  0, // parameters
  // temp_no+1 self)(.option_of option_of(self))
  var_std__plus, 2, var_139_28_temp_no, num_1, 1, LOCAL(1),
  // option_of(self))
  var_option_of, 1, var_139_23_self, 1, LOCAL(2),
  // redefine_temporary(temp_no+1 self)(.option_of option_of(self))
  func_redefine_temporary, 2, LOCAL(1), var_139_23_self, 1, LOCAL(3),
  // .option_of option_of(self))
  LET, -1, LOCAL(3), var_option_of, LOCAL(2), LOCAL(4),
  // 
  LET, 3, LOCAL(4), var_139_28_temp_no, var_empty_statements, TAIL_CALL,
  POS(145, 26),
  POS(145, 53),
  POS(145, 7),
  POS(145, 42),
  POS(144, 7)
};

static FUNCTION_INFO i_lambda_12 = {
  t_lambda_12, NULL, 5, 0,
  {}
};

static TAB_NUM t_lambda_13[] = {
  3, // locals
  0, // parameters
  // funky::name_of(self))
  var_funky__name_of, 1, var_139_23_self, 1, LOCAL(1),
  // resolve_variable(funky::name_of(self))
  var_resolve_variable, 1, LOCAL(1), 1, LOCAL(2),
  // self
  LET, -1, var_139_23_self, var_funky__name_of, LOCAL(2), LOCAL(3),
  // 
  LET, 3, LOCAL(3), var_139_28_temp_no, var_140_38_statements, TAIL_CALL,
  POS(150, 41),
  POS(150, 24),
  POS(149, 7),
  POS(148, 7)
};

static FUNCTION_INFO i_lambda_13 = {
  t_lambda_13, NULL, 4, 0,
  {}
};

static TAB_NUM t_func_funky_types__return___simplify[] = {
  3, // locals
  2, // parameters
  LOCAL(2), // 154_33_self
  LOCAL(3), // 154_38_temp_no
  // std("assign" self) temp_no empty_statements
  func_std, 2, str_assign, LOCAL(2), 1, LOCAL(1),
  // -> std("assign" self) temp_no empty_statements
  LET, 3, LOCAL(1), LOCAL(3), var_empty_statements, TAIL_CALL,
  POS(155, 6),
  POS(155, 3),
  LOCAL(2),
  LOCAL(3)
};

static FUNCTION_INFO i_func_funky_types__return___simplify = {
  t_func_funky_types__return___simplify, NULL, 2, 2,
  {"154_33_self\000", "154_38_temp_no\000"}
};

static TAB_NUM t_func_funky_types__redefinition___simplify[] = {
  1, // locals
  2, // parameters
  var_157_39_self,
  var_157_44_temp_no,
  // resolve_identifier &self
  func_resolve_identifier, 1, var_157_39_self, 1, var_157_39_self,
  // $extensions extensions_of(self)
  var_extensions_of, 1, var_157_39_self, 1, var_159_4_extensions,
  // is_empty
  var_is_empty, 1, var_159_4_extensions, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_14, lambda_15, TAIL_CALL,
  POS(158, 3),
  POS(159, 3),
  POS(161, 16),
  POS(160, 3)
};

static FUNCTION_INFO i_func_funky_types__redefinition___simplify = {
  t_func_funky_types__redefinition___simplify, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_14[] = {
  0, // locals
  0, // parameters
  //  self temp_no empty_statements
  LET, 3, var_157_39_self, var_157_44_temp_no, var_empty_statements, TAIL_CALL,
  POS(162, 7)
};

static FUNCTION_INFO i_lambda_14 = {
  t_lambda_14, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_15[] = {
  1, // locals
  0, // parameters
  // inc &temp_no
  var_inc, 1, var_157_44_temp_no, 1, var_157_44_temp_no,
  // $result_temp_no temp_no
  LET, 1, var_157_44_temp_no, 1, var_165_8_result_temp_no,
  // $base create_functor(self)
  func_create_functor, 1, var_157_39_self, 1, var_166_8_base,
  // $bases list(base)
  var_list, 1, var_166_8_base, 1, var_167_8_bases,
  // simplify &extensions &temp_no $statements
  var_simplify, 2, var_159_4_extensions, var_157_44_temp_no, 3, var_159_4_extensions, var_157_44_temp_no, var_168_38_statements,
  // first(statements))
  var_first, 1, var_168_38_statements, 1, LOCAL(1),
  // !statements typed_tuple(funky_types::statement_list empty_list first(statements))
  var_typed_tuple, 3, var_funky_types__statement_list, var_empty_list, LOCAL(1), 1, var_168_38_statements,
  // range(extensions 1 -2)
  var_range, 3, var_159_4_extensions, num_1, minus_num_2, 1, LOCAL(1),
  // for_each range(extensions 1 -2)
  var_for_each, 3, LOCAL(1), lambda_16, lambda_19, TAIL_CALL,
  POS(164, 7),
  POS(165, 7),
  POS(166, 7),
  POS(167, 7),
  POS(168, 7),
  POS(169, 70),
  POS(169, 7),
  POS(170, 16),
  POS(170, 7)
};

static FUNCTION_INFO i_lambda_15 = {
  t_lambda_15, NULL, 9, 0,
  {}
};

static TAB_NUM t_lambda_16[] = {
  1, // locals
  1, // parameters
  var_171_12_extension,
  // node_type_of(extension)
  var_node_type_of, 1, var_171_12_extension, 1, LOCAL(1),
  // case node_type_of(extension)
  var_case, 5, LOCAL(1), var_FUNCTION_CALL, lambda_FUNCTION_CALL, var_ATTRIBUTE_ACCESS, lambda_2_ATTRIBUTE_ACCESS, TAIL_CALL,
  POS(172, 16),
  POS(172, 11)
};

static FUNCTION_INFO i_lambda_16 = {
  t_lambda_16, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_FUNCTION_CALL[] = {
  2, // locals
  0, // parameters
  // arguments_of(extension) is_a_remark
  var_arguments_of, 1, var_171_12_extension, 1, LOCAL(1),
  // filter arguments_of(extension) is_a_remark
  var_filter, 2, LOCAL(1), var_is_a_remark, 2, var_175_18_remark_arguments, var_175_36_arguments,
  // is_empty && remark_arguments.is_not_empty
  var_is_empty, 1, var_175_36_arguments, 1, LOCAL(1),
  // is_empty && remark_arguments.is_not_empty
  var_std__and, 2, LOCAL(1), lambda_17, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), var_next, lambda_18, TAIL_CALL,
  POS(174, 22),
  POS(174, 15),
  POS(177, 27),
  POS(177, 27),
  POS(176, 15)
};

static FUNCTION_INFO i_lambda_FUNCTION_CALL = {
  t_lambda_FUNCTION_CALL, NULL, 5, 0,
  {}
};

static TAB_NUM t_lambda_17[] = {
  1, // locals
  0, // parameters
  // is_not_empty
  var_is_not_empty, 1, var_175_18_remark_arguments, 1, LOCAL(1),
  // remark_arguments.is_not_empty
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(177, 56),
  POS(177, 39)
};

static FUNCTION_INFO i_lambda_17 = {
  t_lambda_17, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_18[] = {
  3, // locals
  0, // parameters
  // inc &temp_no
  var_inc, 1, var_157_44_temp_no, 1, var_157_44_temp_no,
  // redefine_temporary(temp_no base))
  func_redefine_temporary, 2, var_157_44_temp_no, var_166_8_base, 1, LOCAL(1),
  // push(arguments redefine_temporary(temp_no base))
  var_push, 2, var_175_36_arguments, LOCAL(1), 1, LOCAL(2),
  // create_statement
  func_create_statement, 2, var_166_8_base, LOCAL(2), 1, LOCAL(3),
  // push_trailing_statement &statements
  var_push_trailing_statement, 2, var_168_38_statements, LOCAL(3), 1, var_168_38_statements,
  // !base temporary(temp_no base)
  func_temporary, 2, var_157_44_temp_no, var_166_8_base, 1, var_166_8_base,
  // push &bases base
  var_push, 2, var_167_8_bases, var_166_8_base, 1, var_167_8_bases,
  // next
  var_next, 0, TAIL_CALL,
  POS(180, 19),
  POS(184, 38),
  POS(184, 23),
  POS(182, 21),
  POS(181, 19),
  POS(185, 19),
  POS(186, 19),
  POS(187, 19)
};

static FUNCTION_INFO i_lambda_18 = {
  t_lambda_18, NULL, 8, 0,
  {}
};

static TAB_NUM t_lambda_2_ATTRIBUTE_ACCESS[] = {
  4, // locals
  0, // parameters
  // inc &temp_no
  var_inc, 1, var_157_44_temp_no, 1, var_157_44_temp_no,
  // create_functor(extension)
  func_create_functor, 1, var_171_12_extension, 1, LOCAL(1),
  // redefine_temporary(temp_no extension))
  func_redefine_temporary, 2, var_157_44_temp_no, var_171_12_extension, 1, LOCAL(2),
  // list(base redefine_temporary(temp_no extension))
  var_list, 2, var_166_8_base, LOCAL(2), 1, LOCAL(3),
  // create_statement
  func_create_statement, 2, LOCAL(1), LOCAL(3), 1, LOCAL(4),
  // push_trailing_statement &statements
  var_push_trailing_statement, 2, var_168_38_statements, LOCAL(4), 1, var_168_38_statements,
  // !base temporary(temp_no extension)
  func_temporary, 2, var_157_44_temp_no, var_171_12_extension, 1, var_166_8_base,
  // push &bases base
  var_push, 2, var_167_8_bases, var_166_8_base, 1, var_167_8_bases,
  // next
  var_next, 0, TAIL_CALL,
  POS(189, 15),
  POS(192, 19),
  POS(193, 29),
  POS(193, 19),
  POS(191, 17),
  POS(190, 15),
  POS(194, 15),
  POS(195, 15),
  POS(196, 15)
};

static FUNCTION_INFO i_lambda_2_ATTRIBUTE_ACCESS = {
  t_lambda_2_ATTRIBUTE_ACCESS, NULL, 9, 0,
  {}
};

static TAB_NUM t_lambda_19[] = {
  1, // locals
  0, // parameters
  // $result temporary(result_temp_no self)
  func_temporary, 2, var_165_8_result_temp_no, var_157_39_self, 1, var_198_12_result,
  // $n length_of(extensions)
  var_length_of, 1, var_159_4_extensions, 1, LOCAL(1),
  // from_to_by n 1 -1
  var_from_to_by, 5, LOCAL(1), num_1, minus_num_1, lambda_20, lambda_21, TAIL_CALL,
  POS(198, 11),
  POS(199, 11),
  POS(200, 11),
  LOCAL(1)
};

static FUNCTION_INFO i_lambda_19 = {
  t_lambda_19, NULL, 3, 1,
  {"199_12_n\000"}
};

static TAB_NUM t_lambda_20[] = {
  6, // locals
  1, // parameters
  LOCAL(6), // 201_16_idx
  // $extension extensions(idx)
  var_159_4_extensions, 1, LOCAL(6), 1, var_202_16_extension,
  // pop &bases !base
  var_pop, 1, var_167_8_bases, 2, var_167_8_bases, var_166_8_base,
  // identifier_of(base)
  var_identifier_of, 1, var_166_8_base, 1, LOCAL(1),
  // kind_of(base)
  var_kind_of, 1, var_166_8_base, 1, LOCAL(2),
  // no_of(base)
  var_no_of, 1, var_166_8_base, 1, LOCAL(3),
  // source_group_of(base)
  var_source_group_of, 1, var_166_8_base, 1, LOCAL(4),
  // source_position_of(base)
  var_source_position_of, 1, var_166_8_base, 1, LOCAL(5),
  // $destination
  LET, -5, var_funky_types__redefinition, var_identifier_of, LOCAL(1), var_kind_of, LOCAL(2), var_no_of, LOCAL(3), var_source_group_of, LOCAL(4), var_source_position_of, LOCAL(5), var_204_16_destination,
  // node_type_of(extension)
  var_node_type_of, 1, var_202_16_extension, 1, LOCAL(1),
  // case node_type_of(extension)
  var_case, 5, LOCAL(1), var_FUNCTION_CALL, lambda_2_FUNCTION_CALL, var_ATTRIBUTE_ACCESS, lambda_3_ATTRIBUTE_ACCESS, TAIL_CALL,
  POS(202, 15),
  POS(203, 15),
  POS(206, 34),
  POS(207, 28),
  POS(208, 26),
  POS(209, 36),
  POS(210, 39),
  POS(204, 15),
  POS(211, 20),
  POS(211, 15),
  LOCAL(6)
};

static FUNCTION_INFO i_lambda_20 = {
  t_lambda_20, NULL, 10, 1,
  {"201_16_idx\000"}
};

static TAB_NUM t_lambda_2_FUNCTION_CALL[] = {
  4, // locals
  0, // parameters
  // $arguments arguments_of(extension)
  var_arguments_of, 1, var_202_16_extension, 1, LOCAL(4),
  // push(arguments result) destination)
  var_push, 2, LOCAL(4), var_198_12_result, 1, LOCAL(1),
  // push(push(arguments result) destination)
  var_push, 2, LOCAL(1), var_204_16_destination, 1, LOCAL(2),
  // create_statement
  func_create_statement, 2, var_166_8_base, LOCAL(2), 1, LOCAL(3),
  // push_trailing_statement &statements
  var_push_trailing_statement, 2, var_168_38_statements, LOCAL(3), 1, var_168_38_statements,
  // !result base
  LET, 1, var_166_8_base, 1, var_198_12_result,
  // next
  var_next, 0, TAIL_CALL,
  POS(213, 19),
  POS(217, 28),
  POS(217, 23),
  POS(215, 21),
  POS(214, 19),
  POS(218, 19),
  POS(219, 19),
  LOCAL(4)
};

static FUNCTION_INFO i_lambda_2_FUNCTION_CALL = {
  t_lambda_2_FUNCTION_CALL, NULL, 7, 1,
  {"213_20_arguments\000"}
};

static TAB_NUM t_lambda_3_ATTRIBUTE_ACCESS[] = {
  7, // locals
  0, // parameters
  // assign_attributes(base)
  func_assign_attributes, 1, var_166_8_base, 1, LOCAL(1),
  // identifier_of(extension)
  var_identifier_of, 1, var_202_16_extension, 1, LOCAL(2),
  // kind_of(extension)
  var_kind_of, 1, var_202_16_extension, 1, LOCAL(3),
  // funky::key_of(extension)
  var_funky__key_of, 1, var_202_16_extension, 1, LOCAL(4),
  // funky_types::inline_attribute_value_pair
  LET, -4, var_funky_types__inline_attribute_value_pair, var_identifier_of, LOCAL(2), var_kind_of, LOCAL(3), var_funky__key_of, LOCAL(4), var_expression_of, var_198_12_result, LOCAL(5),
  // list
  var_list, 3, var_166_8_base, LOCAL(5), var_204_16_destination, 1, LOCAL(6),
  // create_statement
  func_create_statement, 2, LOCAL(1), LOCAL(6), 1, LOCAL(7),
  // push_trailing_statement &statements
  var_push_trailing_statement, 2, var_168_38_statements, LOCAL(7), 1, var_168_38_statements,
  // !result base
  LET, 1, var_166_8_base, 1, var_198_12_result,
  // next
  var_next, 0, TAIL_CALL,
  POS(223, 23),
  POS(227, 42),
  POS(228, 36),
  POS(229, 42),
  POS(226, 25),
  POS(224, 23),
  POS(222, 21),
  POS(221, 19),
  POS(232, 19),
  POS(233, 19)
};

static FUNCTION_INFO i_lambda_3_ATTRIBUTE_ACCESS = {
  t_lambda_3_ATTRIBUTE_ACCESS, NULL, 10, 0,
  {}
};

static TAB_NUM t_lambda_21[] = {
  1, // locals
  0, // parameters
  // redefine_temporary(result_temp_no self) temp_no statements
  func_redefine_temporary, 2, var_165_8_result_temp_no, var_157_39_self, 1, LOCAL(1),
  //  redefine_temporary(result_temp_no self) temp_no statements
  LET, 3, LOCAL(1), var_157_44_temp_no, var_168_38_statements, TAIL_CALL,
  POS(234, 16),
  POS(234, 15)
};

static FUNCTION_INFO i_lambda_21 = {
  t_lambda_21, NULL, 2, 0,
  {}
};

static TAB_NUM t_func_funky_types__update___simplify[] = {
  1, // locals
  2, // parameters
  var_236_33_self,
  var_236_38_temp_no,
  // resolve_identifier &self
  func_resolve_identifier, 1, var_236_33_self, 1, var_236_33_self,
  // $extensions extensions_of(self)
  var_extensions_of, 1, var_236_33_self, 1, var_238_4_extensions,
  // is_empty
  var_is_empty, 1, var_238_4_extensions, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_22, lambda_23, TAIL_CALL,
  POS(237, 3),
  POS(238, 3),
  POS(240, 16),
  POS(239, 3)
};

static FUNCTION_INFO i_func_funky_types__update___simplify = {
  t_func_funky_types__update___simplify, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_22[] = {
  0, // locals
  0, // parameters
  //  self temp_no empty_statements
  LET, 3, var_236_33_self, var_236_38_temp_no, var_empty_statements, TAIL_CALL,
  POS(241, 7)
};

static FUNCTION_INFO i_lambda_22 = {
  t_lambda_22, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_23[] = {
  0, // locals
  0, // parameters
  // $base create_functor(self)
  func_create_functor, 1, var_236_33_self, 1, var_243_8_base,
  // $bases list(base)
  var_list, 1, var_243_8_base, 1, var_244_8_bases,
  // simplify &extensions &temp_no $statements
  var_simplify, 2, var_238_4_extensions, var_236_38_temp_no, 3, var_238_4_extensions, var_236_38_temp_no, var_245_38_statements,
  // for_each extensions
  var_for_each, 3, var_238_4_extensions, lambda_24, lambda_27, TAIL_CALL,
  POS(243, 7),
  POS(244, 7),
  POS(245, 7),
  POS(246, 7)
};

static FUNCTION_INFO i_lambda_23 = {
  t_lambda_23, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_24[] = {
  1, // locals
  1, // parameters
  var_247_12_extension,
  // node_type_of(extension)
  var_node_type_of, 1, var_247_12_extension, 1, LOCAL(1),
  // case node_type_of(extension)
  var_case, 5, LOCAL(1), var_FUNCTION_CALL, lambda_3_FUNCTION_CALL, var_ATTRIBUTE_ACCESS, lambda_4_ATTRIBUTE_ACCESS, TAIL_CALL,
  POS(248, 16),
  POS(248, 11)
};

static FUNCTION_INFO i_lambda_24 = {
  t_lambda_24, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_3_FUNCTION_CALL[] = {
  2, // locals
  0, // parameters
  // arguments_of(extension) is_a_remark
  var_arguments_of, 1, var_247_12_extension, 1, LOCAL(1),
  // filter arguments_of(extension) is_a_remark
  var_filter, 2, LOCAL(1), var_is_a_remark, 2, var_251_18_remark_arguments, var_251_36_arguments,
  // is_empty && remark_arguments.is_not_empty
  var_is_empty, 1, var_251_36_arguments, 1, LOCAL(1),
  // is_empty && remark_arguments.is_not_empty
  var_std__and, 2, LOCAL(1), lambda_25, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), var_next, lambda_26, TAIL_CALL,
  POS(250, 22),
  POS(250, 15),
  POS(253, 27),
  POS(253, 27),
  POS(252, 15)
};

static FUNCTION_INFO i_lambda_3_FUNCTION_CALL = {
  t_lambda_3_FUNCTION_CALL, NULL, 5, 0,
  {}
};

static TAB_NUM t_lambda_25[] = {
  1, // locals
  0, // parameters
  // is_not_empty
  var_is_not_empty, 1, var_251_18_remark_arguments, 1, LOCAL(1),
  // remark_arguments.is_not_empty
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(253, 56),
  POS(253, 39)
};

static FUNCTION_INFO i_lambda_25 = {
  t_lambda_25, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_26[] = {
  3, // locals
  0, // parameters
  // inc &temp_no
  var_inc, 1, var_236_38_temp_no, 1, var_236_38_temp_no,
  // redefine_temporary(temp_no base))
  func_redefine_temporary, 2, var_236_38_temp_no, var_243_8_base, 1, LOCAL(1),
  // push(arguments redefine_temporary(temp_no base))
  var_push, 2, var_251_36_arguments, LOCAL(1), 1, LOCAL(2),
  // create_statement
  func_create_statement, 2, var_243_8_base, LOCAL(2), 1, LOCAL(3),
  // push_leading_statement &statements
  var_push_leading_statement, 2, var_245_38_statements, LOCAL(3), 1, var_245_38_statements,
  // !base temporary(temp_no base)
  func_temporary, 2, var_236_38_temp_no, var_243_8_base, 1, var_243_8_base,
  // push &bases base
  var_push, 2, var_244_8_bases, var_243_8_base, 1, var_244_8_bases,
  // next
  var_next, 0, TAIL_CALL,
  POS(256, 19),
  POS(260, 38),
  POS(260, 23),
  POS(258, 21),
  POS(257, 19),
  POS(261, 19),
  POS(262, 19),
  POS(263, 19)
};

static FUNCTION_INFO i_lambda_26 = {
  t_lambda_26, NULL, 8, 0,
  {}
};

static TAB_NUM t_lambda_4_ATTRIBUTE_ACCESS[] = {
  4, // locals
  0, // parameters
  // inc &temp_no
  var_inc, 1, var_236_38_temp_no, 1, var_236_38_temp_no,
  // create_functor(extension)
  func_create_functor, 1, var_247_12_extension, 1, LOCAL(1),
  // redefine_temporary(temp_no extension))
  func_redefine_temporary, 2, var_236_38_temp_no, var_247_12_extension, 1, LOCAL(2),
  // list(base redefine_temporary(temp_no extension))
  var_list, 2, var_243_8_base, LOCAL(2), 1, LOCAL(3),
  // create_statement
  func_create_statement, 2, LOCAL(1), LOCAL(3), 1, LOCAL(4),
  // push_leading_statement &statements
  var_push_leading_statement, 2, var_245_38_statements, LOCAL(4), 1, var_245_38_statements,
  // !base temporary(temp_no extension)
  func_temporary, 2, var_236_38_temp_no, var_247_12_extension, 1, var_243_8_base,
  // push &bases base
  var_push, 2, var_244_8_bases, var_243_8_base, 1, var_244_8_bases,
  // next
  var_next, 0, TAIL_CALL,
  POS(265, 15),
  POS(268, 19),
  POS(269, 29),
  POS(269, 19),
  POS(267, 17),
  POS(266, 15),
  POS(270, 15),
  POS(271, 15),
  POS(272, 15)
};

static FUNCTION_INFO i_lambda_4_ATTRIBUTE_ACCESS = {
  t_lambda_4_ATTRIBUTE_ACCESS, NULL, 9, 0,
  {}
};

static TAB_NUM t_lambda_27[] = {
  1, // locals
  0, // parameters
  // $result temporary(temp_no self)
  func_temporary, 2, var_236_38_temp_no, var_236_33_self, 1, var_274_12_result,
  // range &bases 1 -2
  var_range, 3, var_244_8_bases, num_1, minus_num_2, 1, var_244_8_bases,
  // $n length_of(extensions)
  var_length_of, 1, var_238_4_extensions, 1, LOCAL(1),
  // from_to_by n 1 -1
  var_from_to_by, 5, LOCAL(1), num_1, minus_num_1, lambda_28, lambda_29, TAIL_CALL,
  POS(274, 11),
  POS(275, 11),
  POS(276, 11),
  POS(277, 11),
  LOCAL(1)
};

static FUNCTION_INFO i_lambda_27 = {
  t_lambda_27, NULL, 4, 1,
  {"276_12_n\000"}
};

static TAB_NUM t_lambda_28[] = {
  6, // locals
  1, // parameters
  LOCAL(6), // 278_16_idx
  // $extension extensions(idx)
  var_238_4_extensions, 1, LOCAL(6), 1, var_279_16_extension,
  // pop &bases !base
  var_pop, 1, var_244_8_bases, 2, var_244_8_bases, var_243_8_base,
  // identifier_of(base)
  var_identifier_of, 1, var_243_8_base, 1, LOCAL(1),
  // kind_of(base)
  var_kind_of, 1, var_243_8_base, 1, LOCAL(2),
  // no_of(base)
  var_no_of, 1, var_243_8_base, 1, LOCAL(3),
  // source_group_of(base)
  var_source_group_of, 1, var_243_8_base, 1, LOCAL(4),
  // source_position_of(base)
  var_source_position_of, 1, var_243_8_base, 1, LOCAL(5),
  // $destination
  LET, -5, var_funky_types__redefinition, var_identifier_of, LOCAL(1), var_kind_of, LOCAL(2), var_no_of, LOCAL(3), var_source_group_of, LOCAL(4), var_source_position_of, LOCAL(5), var_281_16_destination,
  // node_type_of(extension)
  var_node_type_of, 1, var_279_16_extension, 1, LOCAL(1),
  // case node_type_of(extension)
  var_case, 5, LOCAL(1), var_FUNCTION_CALL, lambda_4_FUNCTION_CALL, var_ATTRIBUTE_ACCESS, lambda_5_ATTRIBUTE_ACCESS, TAIL_CALL,
  POS(279, 15),
  POS(280, 15),
  POS(283, 34),
  POS(284, 28),
  POS(285, 26),
  POS(286, 36),
  POS(287, 39),
  POS(281, 15),
  POS(288, 20),
  POS(288, 15),
  LOCAL(6)
};

static FUNCTION_INFO i_lambda_28 = {
  t_lambda_28, NULL, 10, 1,
  {"278_16_idx\000"}
};

static TAB_NUM t_lambda_4_FUNCTION_CALL[] = {
  4, // locals
  0, // parameters
  // $arguments arguments_of(extension)
  var_arguments_of, 1, var_279_16_extension, 1, LOCAL(4),
  // push(arguments result) destination)
  var_push, 2, LOCAL(4), var_274_12_result, 1, LOCAL(1),
  // push(push(arguments result) destination)
  var_push, 2, LOCAL(1), var_281_16_destination, 1, LOCAL(2),
  // create_statement
  func_create_statement, 2, var_243_8_base, LOCAL(2), 1, LOCAL(3),
  // push_trailing_statement &statements
  var_push_trailing_statement, 2, var_245_38_statements, LOCAL(3), 1, var_245_38_statements,
  // !result base
  LET, 1, var_243_8_base, 1, var_274_12_result,
  // next
  var_next, 0, TAIL_CALL,
  POS(290, 19),
  POS(294, 28),
  POS(294, 23),
  POS(292, 21),
  POS(291, 19),
  POS(295, 19),
  POS(296, 19),
  LOCAL(4)
};

static FUNCTION_INFO i_lambda_4_FUNCTION_CALL = {
  t_lambda_4_FUNCTION_CALL, NULL, 7, 1,
  {"290_20_arguments\000"}
};

static TAB_NUM t_lambda_5_ATTRIBUTE_ACCESS[] = {
  7, // locals
  0, // parameters
  // assign_attributes(base)
  func_assign_attributes, 1, var_243_8_base, 1, LOCAL(1),
  // identifier_of(extension)
  var_identifier_of, 1, var_279_16_extension, 1, LOCAL(2),
  // kind_of(extension)
  var_kind_of, 1, var_279_16_extension, 1, LOCAL(3),
  // funky::key_of(extension)
  var_funky__key_of, 1, var_279_16_extension, 1, LOCAL(4),
  // funky_types::inline_attribute_value_pair
  LET, -4, var_funky_types__inline_attribute_value_pair, var_identifier_of, LOCAL(2), var_kind_of, LOCAL(3), var_funky__key_of, LOCAL(4), var_expression_of, var_274_12_result, LOCAL(5),
  // list
  var_list, 3, var_243_8_base, LOCAL(5), var_281_16_destination, 1, LOCAL(6),
  // create_statement
  func_create_statement, 2, LOCAL(1), LOCAL(6), 1, LOCAL(7),
  // push_trailing_statement &statements
  var_push_trailing_statement, 2, var_245_38_statements, LOCAL(7), 1, var_245_38_statements,
  // !result base
  LET, 1, var_243_8_base, 1, var_274_12_result,
  // next
  var_next, 0, TAIL_CALL,
  POS(300, 23),
  POS(304, 42),
  POS(305, 36),
  POS(306, 42),
  POS(303, 25),
  POS(301, 23),
  POS(299, 21),
  POS(298, 19),
  POS(309, 19),
  POS(310, 19)
};

static FUNCTION_INFO i_lambda_5_ATTRIBUTE_ACCESS = {
  t_lambda_5_ATTRIBUTE_ACCESS, NULL, 10, 0,
  {}
};

static TAB_NUM t_lambda_29[] = {
  1, // locals
  0, // parameters
  // update_temporary(temp_no self) temp_no statements
  func_update_temporary, 2, var_236_38_temp_no, var_236_33_self, 1, LOCAL(1),
  //  update_temporary(temp_no self) temp_no statements
  LET, 3, LOCAL(1), var_236_38_temp_no, var_245_38_statements, TAIL_CALL,
  POS(311, 16),
  POS(311, 15)
};

static FUNCTION_INFO i_lambda_29 = {
  t_lambda_29, NULL, 2, 0,
  {}
};

static TAB_NUM t_func_funky_types__definition___simplify[] = {
  2, // locals
  2, // parameters
  LOCAL(1), // 313_37_self
  LOCAL(2), // 313_42_temp_no
  // resolve_identifier &self
  func_resolve_identifier, 1, LOCAL(1), 1, LOCAL(1),
  // -> self temp_no empty_statements
  LET, 3, LOCAL(1), LOCAL(2), var_empty_statements, TAIL_CALL,
  POS(314, 3),
  POS(315, 3),
  LOCAL(2),
  LOCAL(1)
};

static FUNCTION_INFO i_func_funky_types__definition___simplify = {
  t_func_funky_types__definition___simplify, NULL, 2, 2,
  {"313_42_temp_no\000", "313_37_self\000"}
};

static TAB_NUM t_func_funky_types__parenthesed_expression___simplify[] = {
  2, // locals
  2, // parameters
  LOCAL(2), // 317_49_self
  var_317_54_temp_no,
  // expression_of(self) $expression &temp_no $statements
  var_expression_of, 1, LOCAL(2), 1, LOCAL(1),
  // simplify expression_of(self) $expression &temp_no $statements
  var_simplify, 2, LOCAL(1), var_317_54_temp_no, 3, var_318_33_expression, var_317_54_temp_no, var_318_54_statements,
  // $calls calls_of(self)
  var_calls_of, 1, LOCAL(2), 1, var_319_4_calls,
  // is_empty
  var_is_empty, 1, var_319_4_calls, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_30, lambda_31, TAIL_CALL,
  POS(318, 12),
  POS(318, 3),
  POS(319, 3),
  POS(321, 11),
  POS(320, 3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_funky_types__parenthesed_expression___simplify = {
  t_func_funky_types__parenthesed_expression___simplify, NULL, 5, 1,
  {"317_49_self\000"}
};

static TAB_NUM t_lambda_30[] = {
  0, // locals
  0, // parameters
  //  expression temp_no statements
  LET, 3, var_318_33_expression, var_317_54_temp_no, var_318_54_statements, TAIL_CALL,
  POS(322, 7)
};

static FUNCTION_INFO i_lambda_30 = {
  t_lambda_30, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_31[] = {
  2, // locals
  0, // parameters
  // simplify_extensions &expression calls &temp_no $extension_statements
  func_simplify_extensions, 3, var_318_33_expression, var_319_4_calls, var_317_54_temp_no, 3, var_318_33_expression, var_317_54_temp_no, LOCAL(2),
  // append(statements extension_statements)
  var_append, 2, var_318_54_statements, LOCAL(2), 1, LOCAL(1),
  // -> expression temp_no append(statements extension_statements)
  LET, 3, var_318_33_expression, var_317_54_temp_no, LOCAL(1), TAIL_CALL,
  POS(324, 7),
  POS(325, 29),
  POS(325, 7),
  LOCAL(2)
};

static FUNCTION_INFO i_lambda_31 = {
  t_lambda_31, NULL, 3, 1,
  {"324_55_extension_statements\000"}
};

static TAB_NUM t_func_funky_types__pair___simplify[] = {
  1, // locals
  2, // parameters
  var_327_31_self,
  var_327_36_temp_no,
  // resolve_identifier &self
  func_resolve_identifier, 1, var_327_31_self, 1, var_327_31_self,
  // $argument argument_of(self)
  var_argument_of, 1, var_327_31_self, 1, var_329_4_argument,
  // is_a_list:
  var_is_a_list, 1, var_329_4_argument, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_argument_is_a_list, lambda_35, TAIL_CALL,
  POS(328, 3),
  POS(329, 3),
  POS(331, 14),
  POS(330, 3)
};

static FUNCTION_INFO i_func_funky_types__pair___simplify = {
  t_func_funky_types__pair___simplify, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_argument_is_a_list[] = {
  2, // locals
  0, // parameters
  // filter &argument: (argument) -> not(argument.is_a_remark)
  var_filter, 2, var_329_4_argument, lambda_32, 1, var_329_4_argument,
  // length_of(argument) == 1:
  var_length_of, 1, var_329_4_argument, 1, LOCAL(1),
  // length_of(argument) == 1:
  var_std__equal, 2, LOCAL(1), num_1, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_33, lambda_34, TAIL_CALL,
  POS(332, 7),
  POS(334, 9),
  POS(334, 9),
  POS(333, 7)
};

static FUNCTION_INFO i_lambda_argument_is_a_list = {
  t_lambda_argument_is_a_list, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_32[] = {
  3, // locals
  1, // parameters
  LOCAL(3), // 332_26_argument
  // is_a_remark)
  var_is_a_remark, 1, LOCAL(3), 1, LOCAL(1),
  // not(argument.is_a_remark)
  var_not, 1, LOCAL(1), 1, LOCAL(2),
  // -> not(argument.is_a_remark)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(332, 52),
  POS(332, 39),
  POS(332, 36),
  LOCAL(3)
};

static FUNCTION_INFO i_lambda_32 = {
  t_lambda_32, NULL, 3, 1,
  {"332_26_argument\000"}
};

static TAB_NUM t_lambda_33[] = {
  0, // locals
  0, // parameters
  // !argument argument(1)
  var_329_4_argument, 1, num_1, 1, var_329_4_argument,
  // simplify_argument
  func_simplify_argument, 0, TAIL_CALL,
  POS(335, 11),
  POS(336, 11)
};

static FUNCTION_INFO i_lambda_33 = {
  t_lambda_33, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_34[] = {
  1, // locals
  0, // parameters
  // argument(2)
  var_329_4_argument, 1, num_2, 1, LOCAL(1),
  // syntax_error "too many arguments" argument(2)
  var_syntax_error, 2, str_too_many_argumen, LOCAL(1), TAIL_CALL,
  POS(338, 45),
  POS(338, 11)
};

static FUNCTION_INFO i_lambda_34 = {
  t_lambda_34, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_35[] = {
  0, // locals
  0, // parameters
  // simplify_argument
  func_simplify_argument, 0, TAIL_CALL,
  POS(340, 7)
};

static FUNCTION_INFO i_lambda_35 = {
  t_lambda_35, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_simplify_argument[] = {
  2, // locals
  0, // parameters
  // simplify argument !self.funky::argument_of &temp_no $result_statements
  var_simplify, 2, var_329_4_argument, var_327_36_temp_no, 3, LOCAL(1), var_327_36_temp_no, LOCAL(2),
  // self.funky::argument_of &temp_no $result_statements
  LET, -1, var_327_31_self, var_funky__argument_of, LOCAL(1), var_327_31_self,
  // -> self temp_no result_statements
  LET, 3, var_327_31_self, var_327_36_temp_no, LOCAL(2), TAIL_CALL,
  POS(343, 5),
  POS(343, 24),
  POS(344, 5),
  LOCAL(2)
};

static FUNCTION_INFO i_func_simplify_argument = {
  t_func_simplify_argument, NULL, 3, 1,
  {"343_58_result_statements\000"}
};

static TAB_NUM t_func_simplify_inline_pair[] = {
  4, // locals
  2, // parameters
  LOCAL(2), // 349_25_self
  LOCAL(3), // 349_30_temp_no
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
  POS(350, 3),
  POS(351, 18),
  POS(351, 3),
  POS(351, 13),
  POS(352, 3),
  LOCAL(4),
  LOCAL(2),
  LOCAL(3)
};

static FUNCTION_INFO i_func_simplify_inline_pair = {
  t_func_simplify_inline_pair, NULL, 5, 3,
  {"351_49_result_statements\000", "349_25_self\000", "349_30_temp_no\000"}
};

static TAB_NUM t_func_resolve_identifier[] = {
  2, // locals
  1, // parameters
  var_354_23_node,
  // kind_of(node) == BUILTIN
  var_kind_of, 1, var_354_23_node, 1, LOCAL(1),
  // kind_of(node) == BUILTIN
  var_std__equal, 2, LOCAL(1), var_BUILTIN, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_36, lambda_37, TAIL_CALL,
  POS(356, 5),
  POS(356, 5),
  POS(355, 3)
};

static FUNCTION_INFO i_func_resolve_identifier = {
  t_func_resolve_identifier, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_36[] = {
  0, // locals
  0, // parameters
  //  node
  LET, 1, var_354_23_node, TAIL_CALL,
  POS(357, 7)
};

static FUNCTION_INFO i_lambda_36 = {
  t_lambda_36, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_37[] = {
  1, // locals
  0, // parameters
  // $identifier identifier_of(node)
  var_identifier_of, 1, var_354_23_node, 1, var_359_8_identifier,
  // $namespace identifier .before. ':'
  var_before, 2, var_359_8_identifier, chr_58, 1, var_360_8_namespace,
  // is_not_empty:
  var_is_not_empty, 1, var_360_8_namespace, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_namespace_is_not_empty, func_resolve, TAIL_CALL,
  POS(359, 7),
  POS(360, 7),
  POS(362, 19),
  POS(361, 7)
};

static FUNCTION_INFO i_lambda_37 = {
  t_lambda_37, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_namespace_is_not_empty[] = {
  1, // locals
  0, // parameters
  // $true_namespace namespace_aliases(namespace)
  var_namespace_aliases, 1, var_360_8_namespace, 1, var_363_12_true_namespace,
  // is_defined:
  var_is_defined, 1, var_363_12_true_namespace, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_true_namespace_is_defined, func_check, TAIL_CALL,
  POS(363, 11),
  POS(365, 28),
  POS(364, 11)
};

static FUNCTION_INFO i_lambda_namespace_is_not_empty = {
  t_lambda_namespace_is_not_empty, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_true_namespace_is_defined[] = {
  1, // locals
  0, // parameters
  // !namespace true_namespace
  LET, 1, var_363_12_true_namespace, 1, var_360_8_namespace,
  // identifier .from. ':')
  var_from, 2, var_359_8_identifier, chr_58, 1, LOCAL(1),
  // !identifier append(namespace identifier .from. ':')
  var_append, 2, var_360_8_namespace, LOCAL(1), 1, var_359_8_identifier,
  // node.identifier_of identifier
  LET, -1, var_354_23_node, var_identifier_of, var_359_8_identifier, var_354_23_node,
  // check
  func_check, 0, TAIL_CALL,
  POS(366, 15),
  POS(367, 44),
  POS(367, 15),
  POS(368, 16),
  POS(369, 15)
};

static FUNCTION_INFO i_lambda_true_namespace_is_defined = {
  t_lambda_true_namespace_is_defined, NULL, 5, 0,
  {}
};

static TAB_NUM t_func_check[] = {
  2, // locals
  0, // parameters
  // is_defined && node_type_of(node) != DEFINITION:
  var_is_defined, 1, var_360_8_namespace, 1, LOCAL(1),
  // is_defined && node_type_of(node) != DEFINITION:
  var_std__and, 2, LOCAL(1), lambda_38, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_39, func_resolve, TAIL_CALL,
  POS(375, 21),
  POS(375, 21),
  POS(374, 9)
};

static FUNCTION_INFO i_func_check = {
  t_func_check, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_38[] = {
  3, // locals
  0, // parameters
  // node_type_of(node) != DEFINITION:
  var_node_type_of, 1, var_354_23_node, 1, LOCAL(1),
  // node_type_of(node) != DEFINITION:
  var_std__equal, 2, LOCAL(1), var_DEFINITION, 1, LOCAL(2),
  // node_type_of(node) != DEFINITION:
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // node_type_of(node) != DEFINITION:
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(375, 35),
  POS(375, 35),
  POS(375, 35),
  POS(375, 35)
};

static FUNCTION_INFO i_lambda_38 = {
  t_lambda_38, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_39[] = {
  1, // locals
  0, // parameters
  // $version namespace_versions(namespace)
  var_namespace_versions, 1, var_360_8_namespace, 1, var_376_14_version,
  // is_defined:
  var_is_defined, 1, var_376_14_version, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_version_is_defined, func_resolve, TAIL_CALL,
  POS(376, 13),
  POS(378, 23),
  POS(377, 13)
};

static FUNCTION_INFO i_lambda_39 = {
  t_lambda_39, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_version_is_defined[] = {
  1, // locals
  0, // parameters
  // identifier .from. ':')
  var_from, 2, var_359_8_identifier, chr_58, 1, LOCAL(1),
  // !identifier append(namespace "-" version identifier .from. ':')
  var_append, 4, var_360_8_namespace, string_1, var_376_14_version, LOCAL(1), 1, var_359_8_identifier,
  // node.identifier_of identifier
  LET, -1, var_354_23_node, var_identifier_of, var_359_8_identifier, var_354_23_node,
  // resolve
  func_resolve, 0, TAIL_CALL,
  POS(379, 58),
  POS(379, 17),
  POS(380, 18),
  POS(381, 17)
};

static FUNCTION_INFO i_lambda_version_is_defined = {
  t_lambda_version_is_defined, NULL, 4, 0,
  {}
};

static TAB_NUM t_func_resolve[] = {
  1, // locals
  0, // parameters
  // $resolved_identifier resolve_variable(identifier)
  var_resolve_variable, 1, var_359_8_identifier, 1, var_386_10_resolved_identifier,
  // is_defined
  var_is_defined, 1, var_386_10_resolved_identifier, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_40, lambda_41, TAIL_CALL,
  POS(386, 9),
  POS(388, 31),
  POS(387, 9)
};

static FUNCTION_INFO i_func_resolve = {
  t_func_resolve, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_40[] = {
  1, // locals
  0, // parameters
  // node
  LET, -2, var_354_23_node, var_identifier_of, var_386_10_resolved_identifier, var_kind_of, var_LOCAL, LOCAL(1),
  // 
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(390, 13),
  POS(389, 13)
};

static FUNCTION_INFO i_lambda_40 = {
  t_lambda_40, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_41[] = {
  1, // locals
  0, // parameters
  // .kind_of EXTERN)
  LET, -1, var_354_23_node, var_kind_of, var_EXTERN, LOCAL(1),
  //  node(.kind_of EXTERN)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(393, 19),
  POS(393, 13)
};

static FUNCTION_INFO i_lambda_41 = {
  t_lambda_41, NULL, 2, 0,
  {}
};

static TAB_NUM t_func_funky_types__expression___simplify[] = {
  1, // locals
  2, // parameters
  var_395_37_self,
  var_395_42_temp_no,
  // $operator operator_of(self)
  var_operator_of, 1, var_395_37_self, 1, var_396_4_operator,
  // expression_of(self) &temp_no $statements
  var_expression_of, 1, var_395_37_self, 1, LOCAL(1),
  // simplify $expression expression_of(self) &temp_no $statements
  var_simplify, 2, LOCAL(1), var_395_42_temp_no, 3, var_397_13_expression, var_395_42_temp_no, var_397_54_statements,
  // is_defined:
  var_is_defined, 1, var_396_4_operator, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_operator_is_defined, lambda_42, TAIL_CALL,
  POS(396, 3),
  POS(397, 24),
  POS(397, 3),
  POS(399, 14),
  POS(398, 3)
};

static FUNCTION_INFO i_func_funky_types__expression___simplify = {
  t_func_funky_types__expression___simplify, NULL, 5, 0,
  {}
};

static TAB_NUM t_lambda_operator_is_defined[] = {
  0, // locals
  0, // parameters
  // binop expression operator temp_no statements
  func_binop, 4, var_397_13_expression, var_396_4_operator, var_395_42_temp_no, var_397_54_statements, TAIL_CALL,
  POS(400, 7)
};

static FUNCTION_INFO i_lambda_operator_is_defined = {
  t_lambda_operator_is_defined, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_42[] = {
  1, // locals
  0, // parameters
  // .expression_of expression) temp_no statements
  LET, -1, var_395_37_self, var_expression_of, var_397_13_expression, LOCAL(1),
  //  self(.expression_of expression) temp_no statements
  LET, 3, LOCAL(1), var_395_42_temp_no, var_397_54_statements, TAIL_CALL,
  POS(401, 13),
  POS(401, 7)
};

static FUNCTION_INFO i_lambda_42 = {
  t_lambda_42, NULL, 2, 0,
  {}
};

static TAB_NUM t_func_funky_types__negation___simplify[] = {
  2, // locals
  2, // parameters
  var_403_35_self,
  var_403_40_temp_no,
  // expression_of(self) &temp_no $statements
  var_expression_of, 1, var_403_35_self, 1, LOCAL(1),
  // simplify $expression expression_of(self) &temp_no $statements
  var_simplify, 2, LOCAL(1), var_403_40_temp_no, 3, var_404_13_expression, var_403_40_temp_no, var_404_54_statements,
  // node_type_of(expression) == NUMERIC_LITERAL:
  var_node_type_of, 1, var_404_13_expression, 1, LOCAL(1),
  // node_type_of(expression) == NUMERIC_LITERAL:
  var_std__equal, 2, LOCAL(1), var_NUMERIC_LITERAL, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_43, lambda_46, TAIL_CALL,
  POS(404, 24),
  POS(404, 3),
  POS(406, 5),
  POS(406, 5),
  POS(405, 3)
};

static FUNCTION_INFO i_func_funky_types__negation___simplify = {
  t_func_funky_types__negation___simplify, NULL, 5, 0,
  {}
};

static TAB_NUM t_lambda_43[] = {
  2, // locals
  0, // parameters
  // $digits digits_of(expression)
  var_digits_of, 1, var_404_13_expression, 1, var_407_8_digits,
  // $key funky::key_of(expression)
  var_funky__key_of, 1, var_404_13_expression, 1, var_408_8_key,
  // digits(1) == '-'
  var_407_8_digits, 1, num_1, 1, LOCAL(1),
  // digits(1) == '-'
  var_std__equal, 2, LOCAL(1), chr_45, 1, LOCAL(2),
  // if !digits !key
  var_if, 3, LOCAL(2), lambda_44, lambda_45, 2, var_407_8_digits, var_408_8_key,
  // expression
  LET, -2, var_404_13_expression, var_digits_of, var_407_8_digits, var_funky__key_of, var_408_8_key, LOCAL(1),
  // ->
  LET, 3, LOCAL(1), var_403_40_temp_no, var_404_54_statements, TAIL_CALL,
  POS(407, 7),
  POS(408, 7),
  POS(410, 9),
  POS(410, 9),
  POS(409, 7),
  POS(414, 9),
  POS(413, 7)
};

static FUNCTION_INFO i_lambda_43 = {
  t_lambda_43, NULL, 7, 0,
  {}
};

static TAB_NUM t_lambda_44[] = {
  2, // locals
  0, // parameters
  // range(digits 2 -1) range(key 7 -1)
  var_range, 3, var_407_8_digits, num_2, minus_num_1, 1, LOCAL(1),
  // range(key 7 -1)
  var_range, 3, var_408_8_key, num_7, minus_num_1, 1, LOCAL(2),
  //  range(digits 2 -1) range(key 7 -1)
  LET, 2, LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(411, 12),
  POS(411, 31),
  POS(411, 11)
};

static FUNCTION_INFO i_lambda_44 = {
  t_lambda_44, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_45[] = {
  2, // locals
  0, // parameters
  // put(digits '-') append("minus_" key)
  var_put, 2, var_407_8_digits, chr_45, 1, LOCAL(1),
  // append("minus_" key)
  var_append, 2, str_minus, var_408_8_key, 1, LOCAL(2),
  //  put(digits '-') append("minus_" key)
  LET, 2, LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(412, 12),
  POS(412, 28),
  POS(412, 11)
};

static FUNCTION_INFO i_lambda_45 = {
  t_lambda_45, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_46[] = {
  4, // locals
  0, // parameters
  // inc &temp_no
  var_inc, 1, var_403_40_temp_no, 1, var_403_40_temp_no,
  // std("negate" self)
  func_std, 2, str_negate, var_403_35_self, 1, LOCAL(1),
  // redefine_temporary(temp_no self)
  func_redefine_temporary, 2, var_403_40_temp_no, var_403_35_self, 1, LOCAL(2),
  // list
  var_list, 2, var_404_13_expression, LOCAL(2), 1, LOCAL(3),
  // create_statement
  func_create_statement, 2, LOCAL(1), LOCAL(3), 1, LOCAL(4),
  // push_leading_statement &statements
  var_push_leading_statement, 2, var_404_54_statements, LOCAL(4), 1, var_404_54_statements,
  // temporary(temp_no self) temp_no statements
  func_temporary, 2, var_403_40_temp_no, var_403_35_self, 1, LOCAL(1),
  // -> temporary(temp_no self) temp_no statements
  LET, 3, LOCAL(1), var_403_40_temp_no, var_404_54_statements, TAIL_CALL,
  POS(420, 7),
  POS(423, 11),
  POS(426, 13),
  POS(424, 11),
  POS(422, 9),
  POS(421, 7),
  POS(427, 10),
  POS(427, 7)
};

static FUNCTION_INFO i_lambda_46 = {
  t_lambda_46, NULL, 8, 0,
  {}
};

static TAB_NUM t_func_binop[] = {
  0, // locals
  4, // parameters
  var_429_10_left,
  var_429_15_operator,
  var_429_24_temp_no,
  var_429_32_statements,
  // $operation node_type_of(operator)
  var_node_type_of, 1, var_429_15_operator, 1, var_430_4_operation,
  // $right expression_of(operator)
  var_expression_of, 1, var_429_15_operator, 1, var_431_4_right,
  // case operation
  var_case, 8, var_430_4_operation, var_COMMA, lambda_COMMA, var_AND, lambda_AND, var_OR, lambda_OR, lambda_51, TAIL_CALL,
  POS(430, 3),
  POS(431, 3),
  POS(432, 3)
};

static FUNCTION_INFO i_func_binop = {
  t_func_binop, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_COMMA[] = {
  1, // locals
  0, // parameters
  // list(left) right
  var_list, 1, var_429_10_left, 1, LOCAL(1),
  // sequence_constructor list(left) right
  func_sequence_constructor, 2, LOCAL(1), var_431_4_right, TAIL_CALL,
  POS(434, 28),
  POS(434, 7)
};

static FUNCTION_INFO i_lambda_COMMA = {
  t_lambda_COMMA, NULL, 2, 0,
  {}
};

static TAB_NUM t_func_sequence_constructor[] = {
  2, // locals
  2, // parameters
  var_436_31_sequence,
  var_436_40_rest,
  // node_type_of(rest) == SEQUENCE_EXPRESSION:
  var_node_type_of, 1, var_436_40_rest, 1, LOCAL(1),
  // node_type_of(rest) == SEQUENCE_EXPRESSION:
  var_std__equal, 2, LOCAL(1), var_SEQUENCE_EXPRESSION, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_47, lambda_48, TAIL_CALL,
  POS(438, 11),
  POS(438, 11),
  POS(437, 9)
};

static FUNCTION_INFO i_func_sequence_constructor = {
  t_func_sequence_constructor, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_47[] = {
  5, // locals
  0, // parameters
  // expression_of(rest) $item &temp_no $more_statements
  var_expression_of, 1, var_436_40_rest, 1, LOCAL(1),
  // simplify expression_of(rest) $item &temp_no $more_statements
  var_simplify, 2, LOCAL(1), var_429_24_temp_no, 3, LOCAL(4), var_429_24_temp_no, LOCAL(5),
  // append &statements more_statements
  var_append, 2, var_429_32_statements, LOCAL(5), 1, var_429_32_statements,
  // push(sequence item)
  var_push, 2, var_436_31_sequence, LOCAL(4), 1, LOCAL(1),
  // operator_of(rest))
  var_operator_of, 1, var_436_40_rest, 1, LOCAL(2),
  // expression_of(operator_of(rest))
  var_expression_of, 1, LOCAL(2), 1, LOCAL(3),
  // sequence_constructor
  func_sequence_constructor, 2, LOCAL(1), LOCAL(3), TAIL_CALL,
  POS(439, 22),
  POS(439, 13),
  POS(440, 13),
  POS(442, 15),
  POS(443, 29),
  POS(443, 15),
  POS(441, 13),
  LOCAL(5),
  LOCAL(4)
};

static FUNCTION_INFO i_lambda_47 = {
  t_lambda_47, NULL, 7, 2,
  {"439_58_more_statements\000", "439_43_item\000"}
};

static TAB_NUM t_lambda_48[] = {
  2, // locals
  0, // parameters
  // simplify &rest &temp_no $more_statements
  var_simplify, 2, var_436_40_rest, var_429_24_temp_no, 3, var_436_40_rest, var_429_24_temp_no, LOCAL(2),
  // append &statements more_statements
  var_append, 2, var_429_32_statements, LOCAL(2), 1, var_429_32_statements,
  // push(sequence rest)
  var_push, 2, var_436_31_sequence, var_436_40_rest, 1, LOCAL(1),
  // function_call_from_list "sequence" push(sequence rest)
  func_function_call_from_list, 2, str_sequence, LOCAL(1), TAIL_CALL,
  POS(445, 13),
  POS(446, 13),
  POS(447, 48),
  POS(447, 13),
  LOCAL(2)
};

static FUNCTION_INFO i_lambda_48 = {
  t_lambda_48, NULL, 4, 1,
  {"445_38_more_statements\000"}
};

static TAB_NUM t_lambda_AND[] = {
  3, // locals
  0, // parameters
  // operator_of(operator).is_defined &right -> operator
  var_operator_of, 1, var_429_15_operator, 1, LOCAL(1),
  // is_defined &right -> operator
  var_is_defined, 1, LOCAL(1), 1, LOCAL(2),
  // update_if operator_of(operator).is_defined &right -> operator
  var_update_if, 3, LOCAL(2), var_431_4_right, lambda_49, 1, var_431_4_right,
  // source_group_of(right)
  var_source_group_of, 1, var_431_4_right, 1, LOCAL(1),
  // source_position_of(right)
  var_source_position_of, 1, var_431_4_right, 1, LOCAL(2),
  // list(right)
  var_list, 1, var_431_4_right, 1, LOCAL(3),
  // !right
  LET, -3, var_funky_types__return_expression, var_source_group_of, LOCAL(1), var_source_position_of, LOCAL(2), var_arguments_of, LOCAL(3), var_431_4_right,
  // simplify &right &temp_no $_dummy_statements
  var_simplify, 2, var_431_4_right, var_429_24_temp_no, 3, var_431_4_right, var_429_24_temp_no, LOCAL(1),
  // function_call "and" left right
  func_function_call, 3, str_and, var_429_10_left, var_431_4_right, TAIL_CALL,
  POS(449, 17),
  POS(449, 39),
  POS(449, 7),
  POS(452, 28),
  POS(453, 31),
  POS(454, 25),
  POS(450, 7),
  POS(455, 7),
  POS(456, 7)
};

static FUNCTION_INFO i_lambda_AND = {
  t_lambda_AND, NULL, 9, 0,
  {}
};

static TAB_NUM t_lambda_49[] = {
  0, // locals
  0, // parameters
  //  operator
  LET, 1, var_429_15_operator, TAIL_CALL,
  POS(449, 59)
};

static FUNCTION_INFO i_lambda_49 = {
  t_lambda_49, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_OR[] = {
  3, // locals
  0, // parameters
  // operator_of(operator).is_defined &right -> operator
  var_operator_of, 1, var_429_15_operator, 1, LOCAL(1),
  // is_defined &right -> operator
  var_is_defined, 1, LOCAL(1), 1, LOCAL(2),
  // update_if operator_of(operator).is_defined &right -> operator
  var_update_if, 3, LOCAL(2), var_431_4_right, lambda_50, 1, var_431_4_right,
  // source_group_of(right)
  var_source_group_of, 1, var_431_4_right, 1, LOCAL(1),
  // source_position_of(right)
  var_source_position_of, 1, var_431_4_right, 1, LOCAL(2),
  // list(right)
  var_list, 1, var_431_4_right, 1, LOCAL(3),
  // !right
  LET, -3, var_funky_types__return_expression, var_source_group_of, LOCAL(1), var_source_position_of, LOCAL(2), var_arguments_of, LOCAL(3), var_431_4_right,
  // simplify &right &temp_no $_dummy_statements
  var_simplify, 2, var_431_4_right, var_429_24_temp_no, 3, var_431_4_right, var_429_24_temp_no, LOCAL(1),
  // function_call "or" left right
  func_function_call, 3, str_or, var_429_10_left, var_431_4_right, TAIL_CALL,
  POS(458, 17),
  POS(458, 39),
  POS(458, 7),
  POS(461, 28),
  POS(462, 31),
  POS(463, 25),
  POS(459, 7),
  POS(464, 7),
  POS(465, 7)
};

static FUNCTION_INFO i_lambda_OR = {
  t_lambda_OR, NULL, 9, 0,
  {}
};

static TAB_NUM t_lambda_50[] = {
  0, // locals
  0, // parameters
  //  operator
  LET, 1, var_429_15_operator, TAIL_CALL,
  POS(458, 59)
};

static FUNCTION_INFO i_lambda_50 = {
  t_lambda_50, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_51[] = {
  2, // locals
  0, // parameters
  // simplify &right &temp_no $right_statements
  var_simplify, 2, var_431_4_right, var_429_24_temp_no, 3, var_431_4_right, var_429_24_temp_no, LOCAL(2),
  // append &statements right_statements
  var_append, 2, var_429_32_statements, LOCAL(2), 1, var_429_32_statements,
  // case operation !left !temp_no !statements
  var_case, 38, var_430_4_operation, var_PLUS, lambda_PLUS, var_MINUS, lambda_MINUS, var_TIMES, lambda_TIMES, var_OVER, lambda_OVER, var_EQUAL, lambda_EQUAL, var_NOT_EQUAL, lambda_NOT_EQUAL, var_LESS_THAN, lambda_LESS_THAN, var_GREATER_THAN, lambda_GREATER_THAN, var_LESS_EQUAL, lambda_LESS_EQUAL, var_GREATER_EQUAL, lambda_GREATER_EQUAL, var_RANGE, lambda_RANGE, var_KEY_VALUE, lambda_KEY_VALUE, var_SHIFT_LEFT, lambda_SHIFT_LEFT, var_SHIFT_RIGHT, lambda_SHIFT_RIGHT, var_BIT_AND, lambda_BIT_AND, var_BIT_OR, lambda_BIT_OR, var_BIT_XOR, lambda_BIT_XOR, var_NAMED_OPERATOR, lambda_NAMED_OPERATOR, lambda_52, 3, var_429_10_left, var_429_24_temp_no, var_429_32_statements,
  // !operator operator_of(operator)
  var_operator_of, 1, var_429_15_operator, 1, var_429_15_operator,
  // is_defined:
  var_is_defined, 1, var_429_15_operator, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_2_operator_is_defined, lambda_53, TAIL_CALL,
  POS(467, 7),
  POS(468, 7),
  POS(469, 7),
  POS(512, 7),
  POS(514, 18),
  POS(513, 7),
  LOCAL(2)
};

static FUNCTION_INFO i_lambda_51 = {
  t_lambda_51, NULL, 6, 1,
  {"467_33_right_statements\000"}
};

static TAB_NUM t_lambda_PLUS[] = {
  0, // locals
  0, // parameters
  // function_call "plus" left right
  func_function_call, 3, str_plus, var_429_10_left, var_431_4_right, TAIL_CALL,
  POS(470, 15)
};

static FUNCTION_INFO i_lambda_PLUS = {
  t_lambda_PLUS, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_MINUS[] = {
  0, // locals
  0, // parameters
  // function_call "minus" left right
  func_function_call, 3, str_minus_2, var_429_10_left, var_431_4_right, TAIL_CALL,
  POS(471, 16)
};

static FUNCTION_INFO i_lambda_MINUS = {
  t_lambda_MINUS, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_TIMES[] = {
  0, // locals
  0, // parameters
  // function_call "times" left right
  func_function_call, 3, str_times, var_429_10_left, var_431_4_right, TAIL_CALL,
  POS(472, 16)
};

static FUNCTION_INFO i_lambda_TIMES = {
  t_lambda_TIMES, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_OVER[] = {
  0, // locals
  0, // parameters
  // function_call "over" left right
  func_function_call, 3, str_over, var_429_10_left, var_431_4_right, TAIL_CALL,
  POS(473, 15)
};

static FUNCTION_INFO i_lambda_OVER = {
  t_lambda_OVER, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_EQUAL[] = {
  0, // locals
  0, // parameters
  // function_call "equal" left right
  func_function_call, 3, str_equal, var_429_10_left, var_431_4_right, TAIL_CALL,
  POS(474, 16)
};

static FUNCTION_INFO i_lambda_EQUAL = {
  t_lambda_EQUAL, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_NOT_EQUAL[] = {
  0, // locals
  0, // parameters
  // function_call "equal" &left right !temp_no !statements
  func_function_call, 3, str_equal, var_429_10_left, var_431_4_right, 3, var_429_10_left, var_429_24_temp_no, var_429_32_statements,
  // function_call "not" left
  func_function_call, 2, str_not, var_429_10_left, TAIL_CALL,
  POS(476, 11),
  POS(477, 11)
};

static FUNCTION_INFO i_lambda_NOT_EQUAL = {
  t_lambda_NOT_EQUAL, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_LESS_THAN[] = {
  0, // locals
  0, // parameters
  // function_call "less" left right
  func_function_call, 3, str_less, var_429_10_left, var_431_4_right, TAIL_CALL,
  POS(478, 20)
};

static FUNCTION_INFO i_lambda_LESS_THAN = {
  t_lambda_LESS_THAN, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_GREATER_THAN[] = {
  0, // locals
  0, // parameters
  // function_call "less" right left
  func_function_call, 3, str_less, var_431_4_right, var_429_10_left, TAIL_CALL,
  POS(479, 23)
};

static FUNCTION_INFO i_lambda_GREATER_THAN = {
  t_lambda_GREATER_THAN, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_LESS_EQUAL[] = {
  0, // locals
  0, // parameters
  // function_call "less" right &left !temp_no !statements
  func_function_call, 3, str_less, var_431_4_right, var_429_10_left, 3, var_429_10_left, var_429_24_temp_no, var_429_32_statements,
  // function_call "not" left
  func_function_call, 2, str_not, var_429_10_left, TAIL_CALL,
  POS(481, 11),
  POS(482, 11)
};

static FUNCTION_INFO i_lambda_LESS_EQUAL = {
  t_lambda_LESS_EQUAL, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_GREATER_EQUAL[] = {
  0, // locals
  0, // parameters
  // function_call "less" &left right !temp_no !statements
  func_function_call, 3, str_less, var_429_10_left, var_431_4_right, 3, var_429_10_left, var_429_24_temp_no, var_429_32_statements,
  // function_call "not" left
  func_function_call, 2, str_not, var_429_10_left, TAIL_CALL,
  POS(484, 11),
  POS(485, 11)
};

static FUNCTION_INFO i_lambda_GREATER_EQUAL = {
  t_lambda_GREATER_EQUAL, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_RANGE[] = {
  0, // locals
  0, // parameters
  // function_call "value_range" left right
  func_function_call, 3, str_value_range, var_429_10_left, var_431_4_right, TAIL_CALL,
  POS(486, 16)
};

static FUNCTION_INFO i_lambda_RANGE = {
  t_lambda_RANGE, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_KEY_VALUE[] = {
  0, // locals
  0, // parameters
  // function_call "key_value_pair" left right
  func_function_call, 3, str_key_value_pair, var_429_10_left, var_431_4_right, TAIL_CALL,
  POS(487, 20)
};

static FUNCTION_INFO i_lambda_KEY_VALUE = {
  t_lambda_KEY_VALUE, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_SHIFT_LEFT[] = {
  0, // locals
  0, // parameters
  // function_call "shift_left" left right
  func_function_call, 3, str_shift_left, var_429_10_left, var_431_4_right, TAIL_CALL,
  POS(488, 21)
};

static FUNCTION_INFO i_lambda_SHIFT_LEFT = {
  t_lambda_SHIFT_LEFT, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_SHIFT_RIGHT[] = {
  0, // locals
  0, // parameters
  // function_call "shift_right" left right
  func_function_call, 3, str_shift_right, var_429_10_left, var_431_4_right, TAIL_CALL,
  POS(489, 22)
};

static FUNCTION_INFO i_lambda_SHIFT_RIGHT = {
  t_lambda_SHIFT_RIGHT, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_BIT_AND[] = {
  0, // locals
  0, // parameters
  // function_call "bit_and" left right
  func_function_call, 3, str_bit_and, var_429_10_left, var_431_4_right, TAIL_CALL,
  POS(490, 18)
};

static FUNCTION_INFO i_lambda_BIT_AND = {
  t_lambda_BIT_AND, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_BIT_OR[] = {
  0, // locals
  0, // parameters
  // function_call "bit_or" left right
  func_function_call, 3, str_bit_or, var_429_10_left, var_431_4_right, TAIL_CALL,
  POS(491, 17)
};

static FUNCTION_INFO i_lambda_BIT_OR = {
  t_lambda_BIT_OR, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_BIT_XOR[] = {
  0, // locals
  0, // parameters
  // function_call "bit_xor" left right
  func_function_call, 3, str_bit_xor, var_429_10_left, var_431_4_right, TAIL_CALL,
  POS(492, 18)
};

static FUNCTION_INFO i_lambda_BIT_XOR = {
  t_lambda_BIT_XOR, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_NAMED_OPERATOR[] = {
  7, // locals
  0, // parameters
  // inc &temp_no
  var_inc, 1, var_429_24_temp_no, 1, var_429_24_temp_no,
  // identifier_of(operator)
  var_identifier_of, 1, var_429_15_operator, 1, LOCAL(1),
  // source_group_of(left)
  var_source_group_of, 1, var_429_10_left, 1, LOCAL(2),
  // source_position_of(left)
  var_source_position_of, 1, var_429_10_left, 1, LOCAL(3),
  // funky_types::functor
  LET, -4, var_funky_types__functor, var_identifier_of, LOCAL(1), var_kind_of, var_EXTERN, var_source_group_of, LOCAL(2), var_source_position_of, LOCAL(3), LOCAL(4),
  // redefine_temporary(temp_no left))
  func_redefine_temporary, 2, var_429_24_temp_no, var_429_10_left, 1, LOCAL(5),
  // list(left right redefine_temporary(temp_no left))
  var_list, 3, var_429_10_left, var_431_4_right, LOCAL(5), 1, LOCAL(6),
  // create_statement
  func_create_statement, 2, LOCAL(4), LOCAL(6), 1, LOCAL(7),
  // push_leading_statement &statements
  var_push_leading_statement, 2, var_429_32_statements, LOCAL(7), 1, var_429_32_statements,
  // temporary(temp_no left)
  func_temporary, 2, var_429_24_temp_no, var_429_10_left, 1, LOCAL(1),
  // ->
  LET, 3, LOCAL(1), var_429_24_temp_no, var_429_32_statements, TAIL_CALL,
  POS(494, 11),
  POS(498, 32),
  POS(500, 34),
  POS(501, 37),
  POS(497, 15),
  POS(502, 31),
  POS(502, 15),
  POS(496, 13),
  POS(495, 11),
  POS(504, 13),
  POS(503, 11)
};

static FUNCTION_INFO i_lambda_NAMED_OPERATOR = {
  t_lambda_NAMED_OPERATOR, NULL, 11, 0,
  {}
};

static TAB_NUM t_lambda_52[] = {
  0, // locals
  0, // parameters
  // debug::dump `operation
  var_debug__dump, 2, str_operation, var_430_4_operation, 0,
  // debug::dump 9 `left
  var_debug__dump, 3, num_9, str_left, var_429_10_left, 0,
  // debug::dump 9 `right
  var_debug__dump, 3, num_9, str_right, var_431_4_right, 0,
  // debug::exit
  var_debug__exit, 0, TAIL_CALL,
  POS(508, 11),
  POS(509, 11),
  POS(510, 11),
  POS(511, 11)
};

static FUNCTION_INFO i_lambda_52 = {
  t_lambda_52, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_2_operator_is_defined[] = {
  0, // locals
  0, // parameters
  // binop left operator temp_no statements
  func_binop, 4, var_429_10_left, var_429_15_operator, var_429_24_temp_no, var_429_32_statements, TAIL_CALL,
  POS(515, 11)
};

static FUNCTION_INFO i_lambda_2_operator_is_defined = {
  t_lambda_2_operator_is_defined, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_53[] = {
  0, // locals
  0, // parameters
  //  left temp_no statements
  LET, 3, var_429_10_left, var_429_24_temp_no, var_429_32_statements, TAIL_CALL,
  POS(516, 11)
};

static FUNCTION_INFO i_lambda_53 = {
  t_lambda_53, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_function_call[] = {
  2, // locals
  -2, // parameters
  MANDATORY_PARAMETER, LOCAL(1), // 518_20_func
  REST_PARAMETER, LOCAL(2), // 518_25_arguments
  // function_call_from_list func arguments
  func_function_call_from_list, 2, LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(519, 5),
  LOCAL(2),
  LOCAL(1)
};

static FUNCTION_INFO i_func_function_call = {
  t_func_function_call, NULL, 1, 2,
  {"518_25_arguments\000", "518_20_func\000"}
};

static TAB_NUM t_func_function_call_from_list[] = {
  7, // locals
  2, // parameters
  LOCAL(5), // 521_30_func
  LOCAL(6), // 521_35_arguments
  // $first_argument arguments(1)
  LOCAL(6), 1, num_1, 1, LOCAL(7),
  // inc &temp_no
  var_inc, 1, var_429_24_temp_no, 1, var_429_24_temp_no,
  // std(func first_argument)
  func_std, 2, LOCAL(5), LOCAL(7), 1, LOCAL(1),
  // redefine_temporary(temp_no first_argument))
  func_redefine_temporary, 2, var_429_24_temp_no, LOCAL(7), 1, LOCAL(2),
  // push(arguments redefine_temporary(temp_no first_argument))
  var_push, 2, LOCAL(6), LOCAL(2), 1, LOCAL(3),
  // create_statement
  func_create_statement, 2, LOCAL(1), LOCAL(3), 1, LOCAL(4),
  // push_leading_statement &statements
  var_push_leading_statement, 2, var_429_32_statements, LOCAL(4), 1, var_429_32_statements,
  // temporary(temp_no first_argument)
  func_temporary, 2, var_429_24_temp_no, LOCAL(7), 1, LOCAL(1),
  // ->
  LET, 3, LOCAL(1), var_429_24_temp_no, var_429_32_statements, TAIL_CALL,
  POS(522, 5),
  POS(523, 5),
  POS(526, 9),
  POS(527, 24),
  POS(527, 9),
  POS(525, 7),
  POS(524, 5),
  POS(529, 7),
  POS(528, 5),
  LOCAL(6),
  LOCAL(5),
  LOCAL(7)
};

static FUNCTION_INFO i_func_function_call_from_list = {
  t_func_function_call_from_list, NULL, 9, 3,
  {"521_35_arguments\000", "521_30_func\000", "522_6_first_argument\000"}
};

static TAB_NUM t_func_simplify_return[] = {
  11, // locals
  2, // parameters
  LOCAL(10), // 536_20_self
  LOCAL(11), // 536_25_temp_no
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
  POS(539, 24),
  POS(540, 27),
  POS(545, 32),
  POS(546, 35),
  POS(544, 13),
  POS(547, 13),
  POS(543, 11),
  POS(542, 9),
  POS(538, 5),
  POS(537, 3),
  LOCAL(10),
  LOCAL(11)
};

static FUNCTION_INFO i_func_simplify_return = {
  t_func_simplify_return, NULL, 10, 2,
  {"536_20_self\000", "536_25_temp_no\000"}
};

static TAB_NUM t_func_funky_types__inline_statement___simplify[] = {
  7, // locals
  2, // parameters
  LOCAL(6), // 550_43_self
  LOCAL(7), // 550_48_temp_no
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
  POS(553, 24),
  POS(554, 27),
  POS(555, 16),
  POS(556, 21),
  POS(552, 5),
  POS(551, 3),
  LOCAL(6),
  LOCAL(7)
};

static FUNCTION_INFO i_func_funky_types__inline_statement___simplify = {
  t_func_funky_types__inline_statement___simplify, NULL, 6, 2,
  {"550_43_self\000", "550_48_temp_no\000"}
};

static TAB_NUM t_func_funky_types__multiline_plus___simplify[] = {
  2, // locals
  2, // parameters
  LOCAL(1), // 559_41_self
  LOCAL(2), // 559_46_temp_no
  // simplify_multiline_operator self temp_no "plus"
  func_simplify_multiline_operator, 3, LOCAL(1), LOCAL(2), str_plus, TAIL_CALL,
  POS(560, 3),
  LOCAL(1),
  LOCAL(2)
};

static FUNCTION_INFO i_func_funky_types__multiline_plus___simplify = {
  t_func_funky_types__multiline_plus___simplify, NULL, 1, 2,
  {"559_41_self\000", "559_46_temp_no\000"}
};

static TAB_NUM t_func_funky_types__multiline_minus___simplify[] = {
  2, // locals
  2, // parameters
  LOCAL(1), // 562_42_self
  LOCAL(2), // 562_47_temp_no
  // simplify_multiline_operator self temp_no "minus"
  func_simplify_multiline_operator, 3, LOCAL(1), LOCAL(2), str_minus_2, TAIL_CALL,
  POS(563, 3),
  LOCAL(2),
  LOCAL(1)
};

static FUNCTION_INFO i_func_funky_types__multiline_minus___simplify = {
  t_func_funky_types__multiline_minus___simplify, NULL, 1, 2,
  {"562_47_temp_no\000", "562_42_self\000"}
};

static TAB_NUM t_func_funky_types__multiline_minus_with_remark___simplify[] = {
  2, // locals
  2, // parameters
  LOCAL(1), // 565_54_self
  LOCAL(2), // 565_59_temp_no
  // simplify_multiline_operator self temp_no "minus"
  func_simplify_multiline_operator, 3, LOCAL(1), LOCAL(2), str_minus_2, TAIL_CALL,
  POS(566, 3),
  LOCAL(2),
  LOCAL(1)
};

static FUNCTION_INFO i_func_funky_types__multiline_minus_with_remark___simplify = {
  t_func_funky_types__multiline_minus_with_remark___simplify, NULL, 1, 2,
  {"565_59_temp_no\000", "565_54_self\000"}
};

static TAB_NUM t_func_funky_types__multiline_times___simplify[] = {
  2, // locals
  2, // parameters
  LOCAL(1), // 568_42_self
  LOCAL(2), // 568_47_temp_no
  // simplify_multiline_operator self temp_no "times"
  func_simplify_multiline_operator, 3, LOCAL(1), LOCAL(2), str_times, TAIL_CALL,
  POS(569, 3),
  LOCAL(2),
  LOCAL(1)
};

static FUNCTION_INFO i_func_funky_types__multiline_times___simplify = {
  t_func_funky_types__multiline_times___simplify, NULL, 1, 2,
  {"568_47_temp_no\000", "568_42_self\000"}
};

static TAB_NUM t_func_funky_types__multiline_over___simplify[] = {
  2, // locals
  2, // parameters
  LOCAL(1), // 571_41_self
  LOCAL(2), // 571_46_temp_no
  // simplify_multiline_operator self temp_no "over"
  func_simplify_multiline_operator, 3, LOCAL(1), LOCAL(2), str_over, TAIL_CALL,
  POS(572, 3),
  LOCAL(2),
  LOCAL(1)
};

static FUNCTION_INFO i_func_funky_types__multiline_over___simplify = {
  t_func_funky_types__multiline_over___simplify, NULL, 1, 2,
  {"571_46_temp_no\000", "571_41_self\000"}
};

static TAB_NUM t_func_funky_types__multiline_over_with_remark___simplify[] = {
  2, // locals
  2, // parameters
  LOCAL(1), // 574_53_self
  LOCAL(2), // 574_58_temp_no
  // simplify_multiline_operator self temp_no "over"
  func_simplify_multiline_operator, 3, LOCAL(1), LOCAL(2), str_over, TAIL_CALL,
  POS(575, 3),
  LOCAL(1),
  LOCAL(2)
};

static FUNCTION_INFO i_func_funky_types__multiline_over_with_remark___simplify = {
  t_func_funky_types__multiline_over_with_remark___simplify, NULL, 1, 2,
  {"574_53_self\000", "574_58_temp_no\000"}
};

static TAB_NUM t_func_funky_types__multiline_shift_left___simplify[] = {
  2, // locals
  2, // parameters
  LOCAL(1), // 577_47_self
  LOCAL(2), // 577_52_temp_no
  // simplify_multiline_operator self temp_no "shift_left"
  func_simplify_multiline_operator, 3, LOCAL(1), LOCAL(2), str_shift_left, TAIL_CALL,
  POS(578, 3),
  LOCAL(1),
  LOCAL(2)
};

static FUNCTION_INFO i_func_funky_types__multiline_shift_left___simplify = {
  t_func_funky_types__multiline_shift_left___simplify, NULL, 1, 2,
  {"577_47_self\000", "577_52_temp_no\000"}
};

static TAB_NUM t_func_funky_types__multiline_shift_right___simplify[] = {
  2, // locals
  2, // parameters
  LOCAL(1), // 580_48_self
  LOCAL(2), // 580_53_temp_no
  // simplify_multiline_operator self temp_no "shift_right"
  func_simplify_multiline_operator, 3, LOCAL(1), LOCAL(2), str_shift_right, TAIL_CALL,
  POS(581, 3),
  LOCAL(1),
  LOCAL(2)
};

static FUNCTION_INFO i_func_funky_types__multiline_shift_right___simplify = {
  t_func_funky_types__multiline_shift_right___simplify, NULL, 1, 2,
  {"580_48_self\000", "580_53_temp_no\000"}
};

static TAB_NUM t_func_funky_types__multiline_equal___simplify[] = {
  2, // locals
  2, // parameters
  LOCAL(1), // 583_42_self
  LOCAL(2), // 583_47_temp_no
  // simplify_multiline_operator self temp_no "equal"
  func_simplify_multiline_operator, 3, LOCAL(1), LOCAL(2), str_equal, TAIL_CALL,
  POS(584, 3),
  LOCAL(1),
  LOCAL(2)
};

static FUNCTION_INFO i_func_funky_types__multiline_equal___simplify = {
  t_func_funky_types__multiline_equal___simplify, NULL, 1, 2,
  {"583_42_self\000", "583_47_temp_no\000"}
};

static TAB_NUM t_func_funky_types__multiline_not_equal___simplify[] = {
  2, // locals
  2, // parameters
  LOCAL(1), // 586_46_self
  LOCAL(2), // 586_51_temp_no
  // simplify_multiline_operator self temp_no "equal" true
  func_simplify_multiline_operator, 4, LOCAL(1), LOCAL(2), str_equal, var_true, TAIL_CALL,
  POS(587, 3),
  LOCAL(1),
  LOCAL(2)
};

static FUNCTION_INFO i_func_funky_types__multiline_not_equal___simplify = {
  t_func_funky_types__multiline_not_equal___simplify, NULL, 1, 2,
  {"586_46_self\000", "586_51_temp_no\000"}
};

static TAB_NUM t_func_funky_types__multiline_less_equal___simplify[] = {
  2, // locals
  2, // parameters
  LOCAL(1), // 589_47_self
  LOCAL(2), // 589_52_temp_no
  // simplify_multiline_operator self temp_no "less" true true
  func_simplify_multiline_operator, 5, LOCAL(1), LOCAL(2), str_less, var_true, var_true, TAIL_CALL,
  POS(590, 3),
  LOCAL(2),
  LOCAL(1)
};

static FUNCTION_INFO i_func_funky_types__multiline_less_equal___simplify = {
  t_func_funky_types__multiline_less_equal___simplify, NULL, 1, 2,
  {"589_52_temp_no\000", "589_47_self\000"}
};

static TAB_NUM t_func_funky_types__multiline_less_than___simplify[] = {
  2, // locals
  2, // parameters
  LOCAL(1), // 592_46_self
  LOCAL(2), // 592_51_temp_no
  // simplify_multiline_operator self temp_no "less"
  func_simplify_multiline_operator, 3, LOCAL(1), LOCAL(2), str_less, TAIL_CALL,
  POS(593, 3),
  LOCAL(2),
  LOCAL(1)
};

static FUNCTION_INFO i_func_funky_types__multiline_less_than___simplify = {
  t_func_funky_types__multiline_less_than___simplify, NULL, 1, 2,
  {"592_51_temp_no\000", "592_46_self\000"}
};

static TAB_NUM t_func_funky_types__multiline_greater_equal___simplify[] = {
  2, // locals
  2, // parameters
  LOCAL(1), // 595_50_self
  LOCAL(2), // 595_55_temp_no
  // simplify_multiline_operator self temp_no "less" true
  func_simplify_multiline_operator, 4, LOCAL(1), LOCAL(2), str_less, var_true, TAIL_CALL,
  POS(596, 3),
  LOCAL(2),
  LOCAL(1)
};

static FUNCTION_INFO i_func_funky_types__multiline_greater_equal___simplify = {
  t_func_funky_types__multiline_greater_equal___simplify, NULL, 1, 2,
  {"595_55_temp_no\000", "595_50_self\000"}
};

static TAB_NUM t_func_funky_types__multiline_greater_than___simplify[] = {
  2, // locals
  2, // parameters
  LOCAL(1), // 598_49_self
  LOCAL(2), // 598_54_temp_no
  // simplify_multiline_operator self temp_no "less" false true
  func_simplify_multiline_operator, 5, LOCAL(1), LOCAL(2), str_less, var_false, var_true, TAIL_CALL,
  POS(599, 3),
  LOCAL(1),
  LOCAL(2)
};

static FUNCTION_INFO i_func_funky_types__multiline_greater_than___simplify = {
  t_func_funky_types__multiline_greater_than___simplify, NULL, 1, 2,
  {"598_49_self\000", "598_54_temp_no\000"}
};

static TAB_NUM t_func_funky_types__multiline_and___simplify[] = {
  2, // locals
  2, // parameters
  LOCAL(1), // 601_40_self
  LOCAL(2), // 601_45_temp_no
  // simplify_multiline_operator self temp_no "and" false false true
  func_simplify_multiline_operator, 6, LOCAL(1), LOCAL(2), str_and, var_false, var_false, var_true, TAIL_CALL,
  POS(602, 3),
  LOCAL(1),
  LOCAL(2)
};

static FUNCTION_INFO i_func_funky_types__multiline_and___simplify = {
  t_func_funky_types__multiline_and___simplify, NULL, 1, 2,
  {"601_40_self\000", "601_45_temp_no\000"}
};

static TAB_NUM t_func_funky_types__multiline_or___simplify[] = {
  2, // locals
  2, // parameters
  LOCAL(1), // 604_39_self
  LOCAL(2), // 604_44_temp_no
  // simplify_multiline_operator self temp_no "or" false false true
  func_simplify_multiline_operator, 6, LOCAL(1), LOCAL(2), str_or, var_false, var_false, var_true, TAIL_CALL,
  POS(605, 3),
  LOCAL(1),
  LOCAL(2)
};

static FUNCTION_INFO i_func_funky_types__multiline_or___simplify = {
  t_func_funky_types__multiline_or___simplify, NULL, 1, 2,
  {"604_39_self\000", "604_44_temp_no\000"}
};

static TAB_NUM t_func_funky_types__multiline_bit_and___simplify[] = {
  2, // locals
  2, // parameters
  LOCAL(1), // 607_44_self
  LOCAL(2), // 607_49_temp_no
  // simplify_multiline_operator self temp_no "bit_and"
  func_simplify_multiline_operator, 3, LOCAL(1), LOCAL(2), str_bit_and, TAIL_CALL,
  POS(608, 3),
  LOCAL(2),
  LOCAL(1)
};

static FUNCTION_INFO i_func_funky_types__multiline_bit_and___simplify = {
  t_func_funky_types__multiline_bit_and___simplify, NULL, 1, 2,
  {"607_49_temp_no\000", "607_44_self\000"}
};

static TAB_NUM t_func_funky_types__multiline_bit_and_with_remark___simplify[] = {
  2, // locals
  2, // parameters
  LOCAL(1), // 610_56_self
  LOCAL(2), // 610_61_temp_no
  // simplify_multiline_operator self temp_no "bit_and"
  func_simplify_multiline_operator, 3, LOCAL(1), LOCAL(2), str_bit_and, TAIL_CALL,
  POS(611, 3),
  LOCAL(1),
  LOCAL(2)
};

static FUNCTION_INFO i_func_funky_types__multiline_bit_and_with_remark___simplify = {
  t_func_funky_types__multiline_bit_and_with_remark___simplify, NULL, 1, 2,
  {"610_56_self\000", "610_61_temp_no\000"}
};

static TAB_NUM t_func_funky_types__multiline_bit_or___simplify[] = {
  2, // locals
  2, // parameters
  LOCAL(1), // 613_43_self
  LOCAL(2), // 613_48_temp_no
  // simplify_multiline_operator self temp_no "bit_or"
  func_simplify_multiline_operator, 3, LOCAL(1), LOCAL(2), str_bit_or, TAIL_CALL,
  POS(614, 3),
  LOCAL(2),
  LOCAL(1)
};

static FUNCTION_INFO i_func_funky_types__multiline_bit_or___simplify = {
  t_func_funky_types__multiline_bit_or___simplify, NULL, 1, 2,
  {"613_48_temp_no\000", "613_43_self\000"}
};

static TAB_NUM t_func_funky_types__multiline_bit_xor___simplify[] = {
  2, // locals
  2, // parameters
  LOCAL(1), // 616_44_self
  LOCAL(2), // 616_49_temp_no
  // simplify_multiline_operator self temp_no "bit_xor"
  func_simplify_multiline_operator, 3, LOCAL(1), LOCAL(2), str_bit_xor, TAIL_CALL,
  POS(617, 3),
  LOCAL(1),
  LOCAL(2)
};

static FUNCTION_INFO i_func_funky_types__multiline_bit_xor___simplify = {
  t_func_funky_types__multiline_bit_xor___simplify, NULL, 1, 2,
  {"616_44_self\000", "616_49_temp_no\000"}
};

static TAB_NUM t_func_funky_types__multiline_assign___simplify[] = {
  2, // locals
  2, // parameters
  LOCAL(1), // 619_43_self
  LOCAL(2), // 619_48_temp_no
  // simplify_multiline_operator self temp_no "key_value_pair"
  func_simplify_multiline_operator, 3, LOCAL(1), LOCAL(2), str_key_value_pair, TAIL_CALL,
  POS(620, 3),
  LOCAL(2),
  LOCAL(1)
};

static FUNCTION_INFO i_func_funky_types__multiline_assign___simplify = {
  t_func_funky_types__multiline_assign___simplify, NULL, 1, 2,
  {"619_48_temp_no\000", "619_43_self\000"}
};

static TAB_NUM t_func_simplify_multiline_operator[] = {
  3, // locals
  -6, // parameters
  MANDATORY_PARAMETER, var_624_5_self,
  MANDATORY_PARAMETER, var_625_5_temp_no,
  MANDATORY_PARAMETER, LOCAL(2), // 626_5_name
  var_false, var_627_5_do_negate,
  var_false, var_628_5_do_swap,
  var_false, LOCAL(3), // 629_5_do_delay
  // $head std(name self)
  func_std, 2, LOCAL(2), var_624_5_self, 1, var_631_4_head,
  // arguments_of(self): (argument) -> node_type_of(argument) != REMARK)
  var_arguments_of, 1, var_624_5_self, 1, LOCAL(1),
  // $arguments
  var_filter, 2, LOCAL(1), lambda_filterarguments_ofself, 1, var_632_4_arguments,
  // arguments(1) $left &temp_no $statements
  var_632_4_arguments, 1, num_1, 1, LOCAL(1),
  // simplify arguments(1) $left &temp_no $statements
  var_simplify, 2, LOCAL(1), var_625_5_temp_no, 3, var_634_26_left, var_625_5_temp_no, var_634_41_statements,
  // $right undefined
  LET, 1, var_undefined, 1, var_635_4_right,
  // $n length_of(arguments)
  var_length_of, 1, var_632_4_arguments, 1, var_636_4_n,
  // if
  var_if, 3, LOCAL(3), lambda_do_delay, lambda_56, TAIL_CALL,
  POS(631, 3),
  POS(633, 12),
  POS(632, 3),
  POS(634, 12),
  POS(634, 3),
  POS(635, 3),
  POS(636, 3),
  POS(637, 3),
  LOCAL(2),
  LOCAL(3)
};

static FUNCTION_INFO i_func_simplify_multiline_operator = {
  t_func_simplify_multiline_operator, NULL, 8, 2,
  {"626_5_name\000", "629_5_do_delay\000"}
};

static TAB_NUM t_lambda_filterarguments_ofself[] = {
  4, // locals
  1, // parameters
  LOCAL(4), // 633_33_argument
  // node_type_of(argument) != REMARK)
  var_node_type_of, 1, LOCAL(4), 1, LOCAL(1),
  // node_type_of(argument) != REMARK)
  var_std__equal, 2, LOCAL(1), var_REMARK, 1, LOCAL(2),
  // node_type_of(argument) != REMARK)
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // -> node_type_of(argument) != REMARK)
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(633, 46),
  POS(633, 46),
  POS(633, 46),
  POS(633, 43),
  LOCAL(4)
};

static FUNCTION_INFO i_lambda_filterarguments_ofself = {
  t_lambda_filterarguments_ofself, NULL, 4, 1,
  {"633_33_argument\000"}
};

static TAB_NUM t_lambda_do_delay[] = {
  7, // locals
  0, // parameters
  // $rest range(arguments 2 -1)
  var_range, 3, var_632_4_arguments, num_2, minus_num_1, 1, var_639_8_rest,
  // arguments(2))
  var_632_4_arguments, 1, num_2, 1, LOCAL(1),
  // source_group_of(arguments(2))
  var_source_group_of, 1, LOCAL(1), 1, LOCAL(2),
  // arguments(2))
  var_632_4_arguments, 1, num_2, 1, LOCAL(3),
  // source_position_of(arguments(2))
  var_source_position_of, 1, LOCAL(3), 1, LOCAL(4),
  // n == 2
  var_std__equal, 2, var_636_4_n, num_2, 1, LOCAL(5),
  // if
  var_if, 3, LOCAL(5), lambda_54, lambda_55, 1, LOCAL(6),
  // !right
  LET, -3, var_funky_types__return_expression, var_source_group_of, LOCAL(2), var_source_position_of, LOCAL(4), var_arguments_of, LOCAL(6), var_635_4_right,
  // simplify &right &temp_no $more_statements
  var_simplify, 2, var_635_4_right, var_625_5_temp_no, 3, var_635_4_right, var_625_5_temp_no, LOCAL(7),
  // append &statements more_statements
  var_append, 2, var_634_41_statements, LOCAL(7), 1, var_634_41_statements,
  // push_statement
  func_push_statement, 0, TAIL_CALL,
  POS(639, 7),
  POS(642, 44),
  POS(642, 28),
  POS(643, 50),
  POS(643, 31),
  POS(646, 15),
  POS(645, 13),
  POS(640, 7),
  POS(649, 7),
  POS(650, 7),
  POS(651, 7),
  LOCAL(7)
};

static FUNCTION_INFO i_lambda_do_delay = {
  t_lambda_do_delay, NULL, 11, 1,
  {"649_33_more_statements\000"}
};

static TAB_NUM t_lambda_54[] = {
  0, // locals
  0, // parameters
  //  rest
  LET, 1, var_639_8_rest, TAIL_CALL,
  POS(647, 17)
};

static FUNCTION_INFO i_lambda_54 = {
  t_lambda_54, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_55[] = {
  2, // locals
  0, // parameters
  // .arguments_of rest))
  LET, -1, var_624_5_self, var_arguments_of, var_639_8_rest, LOCAL(1),
  // list(self(.arguments_of rest))
  var_list, 1, LOCAL(1), 1, LOCAL(2),
  //  list(self(.arguments_of rest))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(648, 28),
  POS(648, 18),
  POS(648, 17)
};

static FUNCTION_INFO i_lambda_55 = {
  t_lambda_55, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_56[] = {
  0, // locals
  0, // parameters
  // $idx 2
  LET, 1, num_2, 1, var_653_8_idx,
  // loop:
  var_loop, 1, lambda_loop, TAIL_CALL,
  POS(653, 7),
  POS(654, 7)
};

static FUNCTION_INFO i_lambda_56 = {
  t_lambda_56, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_loop[] = {
  2, // locals
  0, // parameters
  // arguments(idx) !right &temp_no $more_statements
  var_632_4_arguments, 1, var_653_8_idx, 1, LOCAL(1),
  // simplify arguments(idx) !right &temp_no $more_statements
  var_simplify, 2, LOCAL(1), var_625_5_temp_no, 3, var_635_4_right, var_625_5_temp_no, LOCAL(2),
  // append &statements more_statements
  var_append, 2, var_634_41_statements, LOCAL(2), 1, var_634_41_statements,
  // update_if do_swap &left &right -> right left
  var_update_if, 4, var_628_5_do_swap, var_634_26_left, var_635_4_right, lambda_57, 2, var_634_26_left, var_635_4_right,
  // push_statement !left !temp_no !statements
  func_push_statement, 0, 3, var_634_26_left, var_625_5_temp_no, var_634_41_statements,
  // idx < n:
  var_std__less, 2, var_653_8_idx, var_636_4_n, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_58, lambda_59, TAIL_CALL,
  POS(655, 18),
  POS(655, 9),
  POS(656, 9),
  POS(657, 9),
  POS(658, 9),
  POS(660, 11),
  POS(659, 9),
  LOCAL(2)
};

static FUNCTION_INFO i_lambda_loop = {
  t_lambda_loop, NULL, 7, 1,
  {"655_50_more_statements\000"}
};

static TAB_NUM t_lambda_57[] = {
  0, // locals
  0, // parameters
  //  right left
  LET, 2, var_635_4_right, var_634_26_left, TAIL_CALL,
  POS(657, 42)
};

static FUNCTION_INFO i_lambda_57 = {
  t_lambda_57, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_58[] = {
  0, // locals
  0, // parameters
  // inc &idx
  var_inc, 1, var_653_8_idx, 1, var_653_8_idx,
  // next
  var_next, 0, TAIL_CALL,
  POS(661, 13),
  POS(662, 13)
};

static FUNCTION_INFO i_lambda_58 = {
  t_lambda_58, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_59[] = {
  0, // locals
  0, // parameters
  // if
  var_if, 3, var_627_5_do_negate, lambda_do_negate, lambda_60, TAIL_CALL,
  POS(664, 13)
};

static FUNCTION_INFO i_lambda_59 = {
  t_lambda_59, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_do_negate[] = {
  6, // locals
  0, // parameters
  // inc &temp_no
  var_inc, 1, var_625_5_temp_no, 1, var_625_5_temp_no,
  // temporary(temp_no left)
  func_temporary, 2, var_625_5_temp_no, var_634_26_left, 1, LOCAL(1),
  // std("not" left)
  func_std, 2, str_not, var_634_26_left, 1, LOCAL(2),
  // redefine_temporary(temp_no left)
  func_redefine_temporary, 2, var_625_5_temp_no, var_634_26_left, 1, LOCAL(3),
  // list
  var_list, 2, var_634_26_left, LOCAL(3), 1, LOCAL(4),
  // create_statement
  func_create_statement, 2, LOCAL(2), LOCAL(4), 1, LOCAL(5),
  // push_leading_statement
  var_push_leading_statement, 2, var_634_41_statements, LOCAL(5), 1, LOCAL(6),
  // ->
  LET, 3, LOCAL(1), var_625_5_temp_no, LOCAL(6), TAIL_CALL,
  POS(666, 17),
  POS(668, 19),
  POS(673, 23),
  POS(676, 25),
  POS(674, 23),
  POS(672, 21),
  POS(670, 19),
  POS(667, 17)
};

static FUNCTION_INFO i_lambda_do_negate = {
  t_lambda_do_negate, NULL, 8, 0,
  {}
};

static TAB_NUM t_lambda_60[] = {
  0, // locals
  0, // parameters
  // 
  LET, 3, var_634_26_left, var_625_5_temp_no, var_634_41_statements, TAIL_CALL,
  POS(677, 17)
};

static FUNCTION_INFO i_lambda_60 = {
  t_lambda_60, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_push_statement[] = {
  3, // locals
  0, // parameters
  // inc &temp_no
  var_inc, 1, var_625_5_temp_no, 1, var_625_5_temp_no,
  // redefine_temporary(temp_no left))
  func_redefine_temporary, 2, var_625_5_temp_no, var_634_26_left, 1, LOCAL(1),
  // list(left right redefine_temporary(temp_no left))
  var_list, 3, var_634_26_left, var_635_4_right, LOCAL(1), 1, LOCAL(2),
  // create_statement
  func_create_statement, 2, var_631_4_head, LOCAL(2), 1, LOCAL(3),
  // push_leading_statement &statements
  var_push_leading_statement, 2, var_634_41_statements, LOCAL(3), 1, var_634_41_statements,
  // temporary(temp_no left) temp_no statements
  func_temporary, 2, var_625_5_temp_no, var_634_26_left, 1, LOCAL(1),
  // -> temporary(temp_no left) temp_no statements
  LET, 3, LOCAL(1), var_625_5_temp_no, var_634_41_statements, TAIL_CALL,
  POS(683, 5),
  POS(687, 25),
  POS(687, 9),
  POS(685, 7),
  POS(684, 5),
  POS(688, 8),
  POS(688, 5)
};

static FUNCTION_INFO i_func_push_statement = {
  t_func_push_statement, NULL, 7, 0,
  {}
};

static TAB_NUM t_func_funky_types__inline_body___simplify[] = {
  7, // locals
  2, // parameters
  LOCAL(6), // 690_38_self
  LOCAL(7), // 690_43_temp_no
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
  POS(693, 22),
  POS(694, 21),
  POS(696, 24),
  POS(697, 27),
  POS(692, 5),
  POS(691, 3),
  LOCAL(6),
  LOCAL(7)
};

static FUNCTION_INFO i_func_funky_types__inline_body___simplify = {
  t_func_funky_types__inline_body___simplify, NULL, 6, 2,
  {"690_38_self\000", "690_43_temp_no\000"}
};

static TAB_NUM t_func_funky_types__body___simplify[] = {
  3, // locals
  2, // parameters
  var_700_31_self,
  var_700_36_temp_no,
  // !on_top_level false
  LET, 1, var_false, 1, var_on_top_level,
  // mangle_position(self))"
  var_mangle_position, 1, var_700_31_self, 1, LOCAL(1),
  // !self.funky::key_of "func_@(mangle_position(self))"
  var_std__string, 2, str_func, LOCAL(1), 1, LOCAL(3),
  // self.funky::key_of "func_@(mangle_position(self))"
  LET, -1, var_700_31_self, var_funky__key_of, LOCAL(3), var_700_31_self,
  // check_statements &self
  func_check_statements, 1, var_700_31_self, 1, var_700_31_self,
  // collect_parameter_definitions !resolve_variable self
  func_collect_parameter_definitions, 1, var_700_31_self, 1, var_resolve_variable,
  // parameters_of 0 $_parameters_temp_no $_parameters_statements
  var_parameters_of, 1, var_700_31_self, 1, LOCAL(1),
  // simplify &self.parameters_of 0 $_parameters_temp_no $_parameters_statements
  var_simplify, 2, LOCAL(1), num_0, 3, LOCAL(1), LOCAL(2), LOCAL(2),
  // self.parameters_of 0 $_parameters_temp_no $_parameters_statements
  LET, -1, var_700_31_self, var_parameters_of, LOCAL(1), var_700_31_self,
  // $statement statement_of(self)
  var_statement_of, 1, var_700_31_self, 1, var_706_4_statement,
  // $statements statements_of(self)
  var_statements_of, 1, var_700_31_self, 1, var_707_4_statements,
  // is_undefined && statements.is_empty:
  var_is_undefined, 1, var_706_4_statement, 1, LOCAL(1),
  // is_undefined && statements.is_empty:
  var_std__and, 2, LOCAL(1), lambda_61, 1, LOCAL(2),
  // on statement.is_undefined && statements.is_empty:
  var_on, 2, LOCAL(2), lambda_62, 0,
  // is_defined && node_type_of(statement) != REMARK:
  var_is_defined, 1, var_706_4_statement, 1, LOCAL(1),
  // is_defined && node_type_of(statement) != REMARK:
  var_std__and, 2, LOCAL(1), lambda_63, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_64, func_simplify_statements, TAIL_CALL,
  POS(701, 3),
  POS(702, 31),
  POS(702, 3),
  POS(702, 4),
  POS(703, 3),
  POS(704, 3),
  POS(705, 18),
  POS(705, 3),
  POS(705, 13),
  POS(706, 3),
  POS(707, 3),
  POS(708, 16),
  POS(708, 16),
  POS(708, 3),
  POS(711, 15),
  POS(711, 15),
  POS(710, 3)
};

static FUNCTION_INFO i_func_funky_types__body___simplify = {
  t_func_funky_types__body___simplify, NULL, 17, 0,
  {}
};

static TAB_NUM t_lambda_61[] = {
  1, // locals
  0, // parameters
  // is_empty:
  var_is_empty, 1, var_707_4_statements, 1, LOCAL(1),
  // statements.is_empty:
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(708, 43),
  POS(708, 32)
};

static FUNCTION_INFO i_lambda_61 = {
  t_lambda_61, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_62[] = {
  0, // locals
  0, // parameters
  // syntax_error "Missing statements" self
  var_syntax_error, 2, str_Missing_statemen, var_700_31_self, TAIL_CALL,
  POS(709, 5)
};

static FUNCTION_INFO i_lambda_62 = {
  t_lambda_62, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_63[] = {
  3, // locals
  0, // parameters
  // node_type_of(statement) != REMARK:
  var_node_type_of, 1, var_706_4_statement, 1, LOCAL(1),
  // node_type_of(statement) != REMARK:
  var_std__equal, 2, LOCAL(1), var_REMARK, 1, LOCAL(2),
  // node_type_of(statement) != REMARK:
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // node_type_of(statement) != REMARK:
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(711, 29),
  POS(711, 29),
  POS(711, 29),
  POS(711, 29)
};

static FUNCTION_INFO i_lambda_63 = {
  t_lambda_63, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_64[] = {
  1, // locals
  0, // parameters
  // all_of(statements is_a_remark):
  var_all_of, 2, var_707_4_statements, var_is_a_remark, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_65, lambda_66, TAIL_CALL,
  POS(713, 9),
  POS(712, 7)
};

static FUNCTION_INFO i_lambda_64 = {
  t_lambda_64, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_65[] = {
  0, // locals
  0, // parameters
  // self.statement_of undefined
  LET, -1, var_700_31_self, var_statement_of, var_undefined, var_700_31_self,
  // !statements list(statement)
  var_list, 1, var_706_4_statement, 1, var_707_4_statements,
  // simplify_statements
  func_simplify_statements, 0, TAIL_CALL,
  POS(714, 12),
  POS(715, 11),
  POS(716, 11)
};

static FUNCTION_INFO i_lambda_65 = {
  t_lambda_65, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_66[] = {
  1, // locals
  0, // parameters
  // statements(1)
  var_707_4_statements, 1, num_1, 1, LOCAL(1),
  // syntax_error "unexpected statements" statements(1)
  var_syntax_error, 2, str_unexpected_state, LOCAL(1), TAIL_CALL,
  POS(718, 48),
  POS(718, 11)
};

static FUNCTION_INFO i_lambda_66 = {
  t_lambda_66, NULL, 2, 0,
  {}
};

static TAB_NUM t_func_simplify_statements[] = {
  3, // locals
  0, // parameters
  // collect_local_definitions !resolve_variable statements
  func_collect_local_definitions, 1, var_707_4_statements, 1, var_resolve_variable,
  // map_reduce !self.statements_of statements
  var_map_reduce, 4, var_707_4_statements, lambda_67, var_append, var_empty_list, 1, LOCAL(1),
  // self.statements_of statements
  LET, -1, var_700_31_self, var_statements_of, LOCAL(1), var_700_31_self,
  // statements_of(self) is_an_io_call)
  var_statements_of, 1, var_700_31_self, 1, LOCAL(1),
  // !self.is_an_io_call any_of(statements_of(self) is_an_io_call)
  var_any_of, 2, LOCAL(1), var_is_an_io_call, 1, LOCAL(3),
  // self.is_an_io_call any_of(statements_of(self) is_an_io_call)
  LET, -1, var_700_31_self, var_is_an_io_call, LOCAL(3), var_700_31_self,
  // -> self temp_no empty_statements
  LET, 3, var_700_31_self, var_700_36_temp_no, var_empty_statements, TAIL_CALL,
  POS(722, 5),
  POS(723, 5),
  POS(723, 17),
  POS(730, 32),
  POS(730, 5),
  POS(730, 6),
  POS(731, 5)
};

static FUNCTION_INFO i_func_simplify_statements = {
  t_func_simplify_statements, NULL, 7, 0,
  {}
};

static TAB_NUM t_lambda_67[] = {
  5, // locals
  1, // parameters
  LOCAL(2), // 724_10_a_statement
  // simplify &a_statement 0 $_dummy_temp_no $more_statements
  var_simplify, 2, LOCAL(2), num_0, 3, LOCAL(2), LOCAL(1), LOCAL(3),
  // more_statements $leading_statements $trailing_statements
  LOCAL(3), 0, 2, LOCAL(4), LOCAL(5),
  // list(a_statement) trailing_statements
  var_list, 1, LOCAL(2), 1, LOCAL(1),
  // append leading_statements list(a_statement) trailing_statements
  var_append, 3, LOCAL(4), LOCAL(1), LOCAL(5), TAIL_CALL,
  POS(725, 9),
  POS(726, 9),
  POS(727, 35),
  POS(727, 9),
  LOCAL(4),
  LOCAL(3),
  LOCAL(5),
  LOCAL(2)
};

static FUNCTION_INFO i_lambda_67 = {
  t_lambda_67, NULL, 4, 4,
  {"726_26_leading_statements\000", "725_50_more_statements\000", "726_46_trailing_statements\000", "724_10_a_statement\000"}
};

static TAB_NUM t_func_check_statements[] = {
  0, // locals
  1, // parameters
  var_733_21_body,
  // $statements statements_of(body)
  var_statements_of, 1, var_733_21_body, 1, var_734_4_statements,
  // $parameter_state 0
  LET, 1, num_0, 1, var_735_4_parameter_state,
  // $parameters undefined
  LET, 1, var_undefined, 1, var_736_4_parameters,
  // $new_statements empty_list
  LET, 1, var_empty_list, 1, var_737_4_new_statements,
  // for_each statements
  var_for_each, 3, var_734_4_statements, lambda_68, lambda_77, TAIL_CALL,
  POS(734, 3),
  POS(735, 3),
  POS(736, 3),
  POS(737, 3),
  POS(738, 3)
};

static FUNCTION_INFO i_func_check_statements = {
  t_func_check_statements, NULL, 5, 0,
  {}
};

static TAB_NUM t_lambda_68[] = {
  1, // locals
  2, // parameters
  var_739_8_idx,
  var_739_12_statement,
  // node_type_of(statement)
  var_node_type_of, 1, var_739_12_statement, 1, LOCAL(1),
  // case node_type_of(statement)
  var_case, 8, LOCAL(1), var_MULTILINE_REMARK, lambda_MULTILINE_REMARK, var_OPEN_PARAMETERS, lambda_OPEN_PARAMETERS, var_CLOSE_PARAMETERS, lambda_CLOSE_PARAMETERS, lambda_74, TAIL_CALL,
  POS(740, 12),
  POS(740, 7)
};

static FUNCTION_INFO i_lambda_68 = {
  t_lambda_68, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_MULTILINE_REMARK[] = {
  1, // locals
  0, // parameters
  // parameter_state == 1:
  var_std__equal, 2, var_735_4_parameter_state, num_1, 1, LOCAL(1),
  // on parameter_state == 1:
  var_on, 2, LOCAL(1), lambda_69, 0,
  // next
  var_next, 0, TAIL_CALL,
  POS(742, 14),
  POS(742, 11),
  POS(744, 11)
};

static FUNCTION_INFO i_lambda_MULTILINE_REMARK = {
  t_lambda_MULTILINE_REMARK, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_69[] = {
  0, // locals
  0, // parameters
  // syntax_error "Closing parenthesis expected" statement
  var_syntax_error, 2, str_Closing_parenthe, var_739_12_statement, TAIL_CALL,
  POS(743, 13)
};

static FUNCTION_INFO i_lambda_69 = {
  t_lambda_69, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_OPEN_PARAMETERS[] = {
  1, // locals
  0, // parameters
  // parameter_state == 0:
  var_std__equal, 2, var_735_4_parameter_state, num_0, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_70, lambda_71, TAIL_CALL,
  POS(747, 13),
  POS(746, 11)
};

static FUNCTION_INFO i_lambda_OPEN_PARAMETERS = {
  t_lambda_OPEN_PARAMETERS, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_70[] = {
  0, // locals
  0, // parameters
  // !parameter_state 1
  LET, 1, num_1, 1, var_735_4_parameter_state,
  // !parameters parameter_of(statement)
  var_parameter_of, 1, var_739_12_statement, 1, var_736_4_parameters,
  // next
  var_next, 0, TAIL_CALL,
  POS(748, 15),
  POS(749, 15),
  POS(750, 15)
};

static FUNCTION_INFO i_lambda_70 = {
  t_lambda_70, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_71[] = {
  0, // locals
  0, // parameters
  // syntax_error "Unexpected opening parenthesis" statement
  var_syntax_error, 2, str_Unexpected_openi, var_739_12_statement, TAIL_CALL,
  POS(752, 15)
};

static FUNCTION_INFO i_lambda_71 = {
  t_lambda_71, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_CLOSE_PARAMETERS[] = {
  1, // locals
  0, // parameters
  // parameter_state == 1:
  var_std__equal, 2, var_735_4_parameter_state, num_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_72, lambda_73, TAIL_CALL,
  POS(755, 13),
  POS(754, 11)
};

static FUNCTION_INFO i_lambda_CLOSE_PARAMETERS = {
  t_lambda_CLOSE_PARAMETERS, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_72[] = {
  0, // locals
  0, // parameters
  // !parameter_state 2
  LET, 1, num_2, 1, var_735_4_parameter_state,
  // next
  var_next, 0, TAIL_CALL,
  POS(756, 15),
  POS(757, 15)
};

static FUNCTION_INFO i_lambda_72 = {
  t_lambda_72, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_73[] = {
  0, // locals
  0, // parameters
  // syntax_error "Unexpected closing parenthesis" statement
  var_syntax_error, 2, str_Unexpected_closi, var_739_12_statement, TAIL_CALL,
  POS(759, 15)
};

static FUNCTION_INFO i_lambda_73 = {
  t_lambda_73, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_74[] = {
  1, // locals
  0, // parameters
  // parameter_state == 1:
  var_std__equal, 2, var_735_4_parameter_state, num_1, 1, LOCAL(1),
  // on parameter_state == 1:
  var_on, 2, LOCAL(1), lambda_75, 0,
  // !parameter_state 2
  LET, 1, num_2, 1, var_735_4_parameter_state,
  // is_not_empty
  var_is_not_empty, 1, var_737_4_new_statements, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), var_next, lambda_76, TAIL_CALL,
  POS(761, 14),
  POS(761, 11),
  POS(763, 11),
  POS(765, 28),
  POS(764, 11)
};

static FUNCTION_INFO i_lambda_74 = {
  t_lambda_74, NULL, 5, 0,
  {}
};

static TAB_NUM t_lambda_75[] = {
  0, // locals
  0, // parameters
  // syntax_error "Closing parenthesis expected" statement
  var_syntax_error, 2, str_Closing_parenthe, var_739_12_statement, TAIL_CALL,
  POS(762, 13)
};

static FUNCTION_INFO i_lambda_75 = {
  t_lambda_75, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_76[] = {
  0, // locals
  0, // parameters
  // !new_statements range(statements idx -1)
  var_range, 3, var_734_4_statements, var_739_8_idx, minus_num_1, 1, var_737_4_new_statements,
  // next
  var_next, 0, TAIL_CALL,
  POS(768, 15),
  POS(769, 15)
};

static FUNCTION_INFO i_lambda_76 = {
  t_lambda_76, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_77[] = {
  1, // locals
  0, // parameters
  // is_defined
  var_is_defined, 1, var_736_4_parameters, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_78, lambda_79, TAIL_CALL,
  POS(772, 20),
  POS(771, 7)
};

static FUNCTION_INFO i_lambda_77 = {
  t_lambda_77, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_78[] = {
  1, // locals
  0, // parameters
  // body
  LET, -2, var_733_21_body, var_parameters_of, var_736_4_parameters, var_statements_of, var_737_4_new_statements, LOCAL(1),
  // 
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(774, 11),
  POS(773, 11)
};

static FUNCTION_INFO i_lambda_78 = {
  t_lambda_78, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_79[] = {
  0, // locals
  0, // parameters
  //  body
  LET, 1, var_733_21_body, TAIL_CALL,
  POS(777, 11)
};

static FUNCTION_INFO i_lambda_79 = {
  t_lambda_79, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_funky_types__statement___simplify[] = {
  1, // locals
  2, // parameters
  var_779_36_self,
  var_779_41_temp_no,
  // $head head_of(self)
  var_head_of, 1, var_779_36_self, 1, var_780_4_head,
  // $original_head head
  LET, 1, var_780_4_head, 1, var_781_4_original_head,
  // node_type_of(original_head) == REDEFINITION
  var_node_type_of, 1, var_781_4_original_head, 1, LOCAL(1),
  // $is_a_redefinition node_type_of(original_head) == REDEFINITION
  var_std__equal, 2, LOCAL(1), var_REDEFINITION, 1, var_782_4_is_a_redefinition,
  // arguments_of(self): (argument) -> not(argument.is_a_remark)
  var_arguments_of, 1, var_779_36_self, 1, LOCAL(1),
  // $arguments
  var_filter, 2, LOCAL(1), lambda_arguments_ofself, 1, var_783_4_arguments,
  // $is_a_slot_assigment any_of(arguments is_a_pair_or_type_function)
  var_any_of, 2, var_783_4_arguments, func_is_a_pair_or_type_function, 1, var_786_4_is_a_slot_assigment,
  // node_type_of(head)
  var_node_type_of, 1, var_780_4_head, 1, LOCAL(1),
  // case node_type_of(head)
  var_case, 6, LOCAL(1), var_FUNCTOR, lambda_FUNCTOR, var_RETURN, lambda_RETURN, lambda_81, TAIL_CALL,
  POS(780, 3),
  POS(781, 3),
  POS(782, 22),
  POS(782, 3),
  POS(785, 7),
  POS(783, 3),
  POS(786, 3),
  POS(787, 8),
  POS(787, 3)
};

static FUNCTION_INFO i_func_funky_types__statement___simplify = {
  t_func_funky_types__statement___simplify, NULL, 9, 0,
  {}
};

static TAB_NUM t_lambda_arguments_ofself[] = {
  3, // locals
  1, // parameters
  LOCAL(3), // 785_28_argument
  // is_a_remark)
  var_is_a_remark, 1, LOCAL(3), 1, LOCAL(1),
  // not(argument.is_a_remark)
  var_not, 1, LOCAL(1), 1, LOCAL(2),
  // -> not(argument.is_a_remark)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(785, 54),
  POS(785, 41),
  POS(785, 38),
  LOCAL(3)
};

static FUNCTION_INFO i_lambda_arguments_ofself = {
  t_lambda_arguments_ofself, NULL, 3, 1,
  {"785_28_argument\000"}
};

static TAB_NUM t_lambda_FUNCTOR[] = {
  0, // locals
  0, // parameters
  // simplify_head_and_arguments false
  func_simplify_head_and_arguments, 1, var_false, TAIL_CALL,
  POS(789, 7)
};

static FUNCTION_INFO i_lambda_FUNCTOR = {
  t_lambda_FUNCTOR, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_RETURN[] = {
  0, // locals
  0, // parameters
  // on is_a_slot_assigment:
  var_on, 2, var_786_4_is_a_slot_assigment, lambda_80, 0,
  // check_that_all_arguments_are_inputs
  func_check_that_all_arguments_are_inputs, 0, 0,
  // simplify_head_and_arguments false
  func_simplify_head_and_arguments, 1, var_false, TAIL_CALL,
  POS(791, 7),
  POS(793, 7),
  POS(794, 7)
};

static FUNCTION_INFO i_lambda_RETURN = {
  t_lambda_RETURN, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_80[] = {
  0, // locals
  0, // parameters
  // syntax_error "Slot assignment in return statement" self
  var_syntax_error, 2, str_Slot_assignment, var_779_36_self, TAIL_CALL,
  POS(792, 9)
};

static FUNCTION_INFO i_lambda_80 = {
  t_lambda_80, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_81[] = {
  3, // locals
  0, // parameters
  // $n length_of(arguments)
  var_length_of, 1, var_783_4_arguments, 1, LOCAL(3),
  // n < 1: syntax_error "Missing argument in assignment" self
  var_std__less, 2, LOCAL(3), num_1, 1, LOCAL(1),
  // on n < 1: syntax_error "Missing argument in assignment" self
  var_on, 2, LOCAL(1), lambda_82, 0,
  // 1 && not(is_a_slot_assigment):
  var_std__less, 2, num_1, LOCAL(3), 1, LOCAL(1),
  // 1 && not(is_a_slot_assigment):
  var_std__and, 2, LOCAL(1), lambda_83, 1, LOCAL(2),
  // on n > 1 && not(is_a_slot_assigment):
  var_on, 2, LOCAL(2), lambda_84, 0,
  // if
  var_if, 3, var_786_4_is_a_slot_assigment, lambda_is_a_slot_assigment, func_check_that_all_arguments_are_inputs, 0,
  // push &arguments head
  var_push, 2, var_783_4_arguments, var_780_4_head, 1, var_783_4_arguments,
  // is_a_slot_assigment && is_a_redefinition &arguments:
  var_std__and, 2, var_786_4_is_a_slot_assigment, lambda_87, 1, LOCAL(1),
  // update_if is_a_slot_assigment && is_a_redefinition &arguments:
  var_update_if, 3, LOCAL(1), var_783_4_arguments, lambda_88, 1, var_783_4_arguments,
  // is_a_slot_assigment && is_a_redefinition
  var_std__and, 2, var_786_4_is_a_slot_assigment, lambda_89, 1, LOCAL(1),
  // !head
  var_if, 3, LOCAL(1), lambda_90, lambda_91, 1, var_780_4_head,
  // simplify_head_and_arguments true
  func_simplify_head_and_arguments, 1, var_true, TAIL_CALL,
  POS(796, 7),
  POS(797, 10),
  POS(797, 7),
  POS(798, 14),
  POS(798, 14),
  POS(798, 7),
  POS(800, 7),
  POS(807, 7),
  POS(808, 17),
  POS(808, 7),
  POS(812, 11),
  POS(810, 7),
  POS(815, 7),
  LOCAL(3)
};

static FUNCTION_INFO i_lambda_81 = {
  t_lambda_81, NULL, 13, 1,
  {"796_8_n\000"}
};

static TAB_NUM t_lambda_82[] = {
  0, // locals
  0, // parameters
  // syntax_error "Missing argument in assignment" self
  var_syntax_error, 2, str_Missing_argument, var_779_36_self, TAIL_CALL,
  POS(797, 17)
};

static FUNCTION_INFO i_lambda_82 = {
  t_lambda_82, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_83[] = {
  1, // locals
  0, // parameters
  // not(is_a_slot_assigment):
  var_not, 1, var_786_4_is_a_slot_assigment, 1, LOCAL(1),
  // not(is_a_slot_assigment):
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(798, 19),
  POS(798, 19)
};

static FUNCTION_INFO i_lambda_83 = {
  t_lambda_83, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_84[] = {
  1, // locals
  0, // parameters
  // arguments(2)
  var_783_4_arguments, 1, num_2, 1, LOCAL(1),
  // syntax_error "Too many arguments in assignment" arguments(2)
  var_syntax_error, 2, str_Too_many_argumen, LOCAL(1), TAIL_CALL,
  POS(799, 57),
  POS(799, 9)
};

static FUNCTION_INFO i_lambda_84 = {
  t_lambda_84, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_is_a_slot_assigment[] = {
  0, // locals
  0, // parameters
  // if
  var_if, 3, var_782_4_is_a_redefinition, lambda_85, lambda_86, TAIL_CALL,
  POS(802, 11)
};

static FUNCTION_INFO i_lambda_is_a_slot_assigment = {
  t_lambda_is_a_slot_assigment, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_85[] = {
  0, // locals
  0, // parameters
  // check_that_all_arguments_are_slot_assignments
  func_check_that_all_arguments_are_slot_assignments, 0, TAIL_CALL,
  POS(804, 15)
};

static FUNCTION_INFO i_lambda_85 = {
  t_lambda_85, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_86[] = {
  0, // locals
  0, // parameters
  // check_that_all_arguments_are_slot_definitions
  func_check_that_all_arguments_are_slot_definitions, 0, TAIL_CALL,
  POS(805, 15)
};

static FUNCTION_INFO i_lambda_86 = {
  t_lambda_86, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_87[] = {
  0, // locals
  0, // parameters
  // is_a_redefinition &arguments:
  LET, 1, var_782_4_is_a_redefinition, TAIL_CALL,
  POS(808, 40)
};

static FUNCTION_INFO i_lambda_87 = {
  t_lambda_87, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_88[] = {
  3, // locals
  0, // parameters
  // extensions_of(head))
  var_extensions_of, 1, var_780_4_head, 1, LOCAL(1),
  // create_functor(head)(.extensions_of extensions_of(head))
  func_create_functor, 1, var_780_4_head, 1, LOCAL(2),
  // .extensions_of extensions_of(head))
  LET, -1, LOCAL(2), var_extensions_of, LOCAL(1), LOCAL(3),
  // put arguments create_functor(head)(.extensions_of extensions_of(head))
  var_put, 2, var_783_4_arguments, LOCAL(3), TAIL_CALL,
  POS(809, 59),
  POS(809, 23),
  POS(809, 44),
  POS(809, 9)
};

static FUNCTION_INFO i_lambda_88 = {
  t_lambda_88, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_89[] = {
  0, // locals
  0, // parameters
  // is_a_redefinition
  LET, 1, var_782_4_is_a_redefinition, TAIL_CALL,
  POS(812, 34)
};

static FUNCTION_INFO i_lambda_89 = {
  t_lambda_89, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_90[] = {
  1, // locals
  0, // parameters
  // assign_attributes(self)
  func_assign_attributes, 1, var_779_36_self, 1, LOCAL(1),
  //  assign_attributes(self)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(813, 14),
  POS(813, 13)
};

static FUNCTION_INFO i_lambda_90 = {
  t_lambda_90, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_91[] = {
  1, // locals
  0, // parameters
  // std("assign" self)
  func_std, 2, str_assign, var_779_36_self, 1, LOCAL(1),
  //  std("assign" self)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(814, 14),
  POS(814, 13)
};

static FUNCTION_INFO i_lambda_91 = {
  t_lambda_91, NULL, 2, 0,
  {}
};

static TAB_NUM t_func_simplify_head_and_arguments[] = {
  1, // locals
  1, // parameters
  var_817_34_is_an_assignment,
  // simplify &head &temp_no $result_statements
  var_simplify, 2, var_780_4_head, var_779_41_temp_no, 3, var_780_4_head, var_779_41_temp_no, var_818_30_result_statements,
  // $new_arguments empty_list
  LET, 1, var_empty_list, 1, var_819_6_new_arguments,
  // for_each arguments !arguments !temp_no !result_statements
  var_for_each, 3, var_783_4_arguments, lambda_92, lambda_95, 3, var_783_4_arguments, var_779_41_temp_no, var_818_30_result_statements,
  // self.head_of head
  LET, -1, var_779_36_self, var_head_of, var_780_4_head, var_779_36_self,
  // self.arguments_of arguments
  LET, -1, var_779_36_self, var_arguments_of, var_783_4_arguments, var_779_36_self,
  // is_a_slot_assigment && is_a_redefinition
  var_std__and, 2, var_786_4_is_a_slot_assigment, lambda_96, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_97, lambda_98, TAIL_CALL,
  POS(818, 5),
  POS(819, 5),
  POS(820, 5),
  POS(832, 6),
  POS(833, 6),
  POS(835, 7),
  POS(834, 5)
};

static FUNCTION_INFO i_func_simplify_head_and_arguments = {
  t_func_simplify_head_and_arguments, NULL, 7, 0,
  {}
};

static TAB_NUM t_lambda_92[] = {
  3, // locals
  1, // parameters
  var_821_10_item,
  // simplify &item &temp_no $arguments_result_statements
  var_simplify, 2, var_821_10_item, var_779_41_temp_no, 3, var_821_10_item, var_779_41_temp_no, LOCAL(3),
  // append &result_statements arguments_result_statements
  var_append, 2, var_818_30_result_statements, LOCAL(3), 1, var_818_30_result_statements,
  // node_type_of(item) == BACKQUOTED:
  var_node_type_of, 1, var_821_10_item, 1, LOCAL(1),
  // node_type_of(item) == BACKQUOTED:
  var_std__equal, 2, LOCAL(1), var_BACKQUOTED, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_93, lambda_94, TAIL_CALL,
  POS(822, 9),
  POS(823, 9),
  POS(825, 11),
  POS(825, 11),
  POS(824, 9),
  LOCAL(3)
};

static FUNCTION_INFO i_lambda_92 = {
  t_lambda_92, NULL, 5, 1,
  {"822_34_arguments_result_statements\000"}
};

static TAB_NUM t_lambda_93[] = {
  0, // locals
  0, // parameters
  // resolve_backquoted &new_arguments item
  func_resolve_backquoted, 2, var_819_6_new_arguments, var_821_10_item, 1, var_819_6_new_arguments,
  // next
  var_next, 0, TAIL_CALL,
  POS(826, 13),
  POS(827, 13)
};

static FUNCTION_INFO i_lambda_93 = {
  t_lambda_93, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_94[] = {
  0, // locals
  0, // parameters
  // push &new_arguments item
  var_push, 2, var_819_6_new_arguments, var_821_10_item, 1, var_819_6_new_arguments,
  // next
  var_next, 0, TAIL_CALL,
  POS(829, 13),
  POS(830, 13)
};

static FUNCTION_INFO i_lambda_94 = {
  t_lambda_94, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_95[] = {
  0, // locals
  0, // parameters
  //  new_arguments temp_no result_statements
  LET, 3, var_819_6_new_arguments, var_779_41_temp_no, var_818_30_result_statements, TAIL_CALL,
  POS(831, 9)
};

static FUNCTION_INFO i_lambda_95 = {
  t_lambda_95, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_96[] = {
  0, // locals
  0, // parameters
  // is_a_redefinition
  LET, 1, var_782_4_is_a_redefinition, TAIL_CALL,
  POS(835, 30)
};

static FUNCTION_INFO i_lambda_96 = {
  t_lambda_96, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_97[] = {
  0, // locals
  0, // parameters
  //  self temp_no result_statements
  LET, 3, var_779_36_self, var_779_41_temp_no, var_818_30_result_statements, TAIL_CALL,
  POS(836, 9)
};

static FUNCTION_INFO i_lambda_97 = {
  t_lambda_97, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_98[] = {
  0, // locals
  0, // parameters
  // if
  var_if, 3, var_817_34_is_an_assignment, lambda_is_an_assignment, lambda_110, TAIL_CALL,
  POS(838, 9)
};

static FUNCTION_INFO i_lambda_98 = {
  t_lambda_98, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_is_an_assignment[] = {
  1, // locals
  0, // parameters
  // result_statements $leading_statements $trailing_statements
  var_818_30_result_statements, 0, 2, var_840_32_leading_statements, var_840_52_trailing_statements,
  // $is_a_slot_definition
  var_std__and, 2, var_786_4_is_a_slot_assigment, lambda_99, 1, var_841_14_is_a_slot_definition,
  // self.is_a_definition is_a_slot_definition
  LET, -1, var_779_36_self, var_is_a_definition, var_841_14_is_a_slot_definition, var_779_36_self,
  // is_empty
  var_is_empty, 1, var_840_32_leading_statements, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), func_check_trailing_statements, lambda_100, TAIL_CALL,
  POS(840, 13),
  POS(841, 13),
  POS(843, 14),
  POS(845, 34),
  POS(844, 13)
};

static FUNCTION_INFO i_lambda_is_an_assignment = {
  t_lambda_is_an_assignment, NULL, 5, 0,
  {}
};

static TAB_NUM t_lambda_99[] = {
  2, // locals
  0, // parameters
  // node_type_of(original_head) == DEFINITION
  var_node_type_of, 1, var_781_4_original_head, 1, LOCAL(1),
  // node_type_of(original_head) == DEFINITION
  var_std__equal, 2, LOCAL(1), var_DEFINITION, 1, LOCAL(2),
  // node_type_of(original_head) == DEFINITION
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(842, 38),
  POS(842, 38),
  POS(842, 38)
};

static FUNCTION_INFO i_lambda_99 = {
  t_lambda_99, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_100[] = {
  0, // locals
  0, // parameters
  // $last_statement leading_statements(-1)
  var_840_32_leading_statements, 1, minus_num_1, 1, var_848_18_last_statement,
  // if
  var_if, 3, var_841_14_is_a_slot_definition, lambda_is_a_slot_definition, lambda_101, TAIL_CALL,
  POS(848, 17),
  POS(849, 17)
};

static FUNCTION_INFO i_lambda_100 = {
  t_lambda_100, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_is_a_slot_definition[] = {
  5, // locals
  0, // parameters
  // arguments(1))))
  var_783_4_arguments, 1, num_1, 1, LOCAL(1),
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
  var_arguments_of, 1, var_848_18_last_statement, 1, LOCAL(3),
  // arguments_of(-1)
  LOCAL(3), 2, minus_num_1, LOCAL(2), 1, LOCAL(3),
  // last_statement.arguments_of(-1)
  LET, -1, var_848_18_last_statement, var_arguments_of, LOCAL(3), var_848_18_last_statement,
  // leading_statements(-1) last_statement
  var_840_32_leading_statements, 2, minus_num_1, var_848_18_last_statement, 1, var_840_32_leading_statements,
  // arguments(1).argument_of.identifier_of const_name
  var_783_4_arguments, 1, num_1, 1, LOCAL(2),
  // argument_of.identifier_of const_name
  var_argument_of, 1, LOCAL(2), 1, LOCAL(3),
  // argument_of.identifier_of const_name
  LET, -1, LOCAL(3), var_identifier_of, LOCAL(5), LOCAL(3),
  // arguments(1).argument_of.identifier_of const_name
  LET, -1, LOCAL(2), var_argument_of, LOCAL(3), LOCAL(2),
  // arguments(1).argument_of.identifier_of const_name
  var_783_4_arguments, 2, num_1, LOCAL(2), 1, var_783_4_arguments,
  // arguments(1).argument_of.kind_of LOCAL
  var_783_4_arguments, 1, num_1, 1, LOCAL(2),
  // argument_of.kind_of LOCAL
  var_argument_of, 1, LOCAL(2), 1, LOCAL(3),
  // argument_of.kind_of LOCAL
  LET, -1, LOCAL(3), var_kind_of, var_LOCAL, LOCAL(3),
  // arguments(1).argument_of.kind_of LOCAL
  LET, -1, LOCAL(2), var_argument_of, LOCAL(3), LOCAL(2),
  // arguments(1).argument_of.kind_of LOCAL
  var_783_4_arguments, 2, num_1, LOCAL(2), 1, var_783_4_arguments,
  // self.arguments_of arguments
  LET, -1, var_779_36_self, var_arguments_of, var_783_4_arguments, var_779_36_self,
  // check_trailing_statements
  func_check_trailing_statements, 0, TAIL_CALL,
  POS(851, 69),
  POS(851, 57),
  POS(851, 41),
  POS(851, 21),
  POS(852, 21),
  POS(853, 21),
  POS(853, 37),
  POS(853, 37),
  POS(853, 22),
  POS(857, 22),
  POS(858, 22),
  POS(858, 35),
  POS(858, 35),
  POS(858, 22),
  POS(858, 22),
  POS(859, 22),
  POS(859, 35),
  POS(859, 35),
  POS(859, 22),
  POS(859, 22),
  POS(860, 22),
  POS(861, 21),
  LOCAL(4),
  LOCAL(5)
};

static FUNCTION_INFO i_lambda_is_a_slot_definition = {
  t_lambda_is_a_slot_definition, NULL, 22, 2,
  {"851_22_line_no\000", "852_22_const_name\000"}
};

static TAB_NUM t_lambda_101[] = {
  5, // locals
  0, // parameters
  // source_group_of(self)
  var_source_group_of, 1, var_779_36_self, 1, LOCAL(1),
  // source_position_of(self)
  var_source_position_of, 1, var_779_36_self, 1, LOCAL(2),
  // arguments(2))
  var_783_4_arguments, 1, num_2, 1, LOCAL(3),
  // arguments_of(last_statement)(-1 arguments(2))
  var_arguments_of, 1, var_848_18_last_statement, 1, LOCAL(4),
  // arguments_of(last_statement)(-1 arguments(2))
  LOCAL(4), 2, minus_num_1, LOCAL(3), 1, LOCAL(5),
  // !self
  LET, -3, var_848_18_last_statement, var_source_group_of, LOCAL(1), var_source_position_of, LOCAL(2), var_arguments_of, LOCAL(5), var_779_36_self,
  // range &leading_statements 1 -2
  var_range, 3, var_840_32_leading_statements, num_1, minus_num_2, 1, var_840_32_leading_statements,
  // check_trailing_statements
  func_check_trailing_statements, 0, TAIL_CALL,
  POS(865, 42),
  POS(866, 45),
  POS(867, 71),
  POS(867, 39),
  POS(867, 39),
  POS(863, 21),
  POS(868, 21),
  POS(869, 21)
};

static FUNCTION_INFO i_lambda_101 = {
  t_lambda_101, NULL, 8, 0,
  {}
};

static TAB_NUM t_func_check_trailing_statements[] = {
  2, // locals
  0, // parameters
  // is_empty
  var_is_empty, 1, var_840_52_trailing_statements, 1, LOCAL(1),
  // 
  var_std__or, 2, LOCAL(1), lambda_102, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_103, func_process_trailing_statements, TAIL_CALL,
  POS(874, 39),
  POS(873, 19),
  POS(872, 15)
};

static FUNCTION_INFO i_func_check_trailing_statements = {
  t_func_check_trailing_statements, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_102[] = {
  4, // locals
  0, // parameters
  // head_of(self)) != "std::assign"
  var_head_of, 1, var_779_36_self, 1, LOCAL(1),
  // identifier_of(head_of(self)) != "std::assign"
  var_identifier_of, 1, LOCAL(1), 1, LOCAL(2),
  // identifier_of(head_of(self)) != "std::assign"
  var_std__equal, 2, LOCAL(2), str_stdassign, 1, LOCAL(3),
  // identifier_of(head_of(self)) != "std::assign"
  var_std__not, 1, LOCAL(3), 1, LOCAL(4),
  // identifier_of(head_of(self)) != "std::assign"
  LET, 1, LOCAL(4), TAIL_CALL,
  POS(875, 33),
  POS(875, 19),
  POS(875, 19),
  POS(875, 19),
  POS(875, 19)
};

static FUNCTION_INFO i_lambda_102 = {
  t_lambda_102, NULL, 5, 0,
  {}
};

static TAB_NUM t_lambda_103[] = {
  1, // locals
  0, // parameters
  // typed_tuple
  var_typed_tuple, 3, var_funky_types__statement_list, var_840_32_leading_statements, var_840_52_trailing_statements, 1, LOCAL(1),
  // 
  LET, 3, var_779_36_self, var_779_41_temp_no, LOCAL(1), TAIL_CALL,
  POS(879, 19),
  POS(876, 19)
};

static FUNCTION_INFO i_lambda_103 = {
  t_lambda_103, NULL, 2, 0,
  {}
};

static TAB_NUM t_func_process_trailing_statements[] = {
  1, // locals
  0, // parameters
  // arguments(2))
  var_783_4_arguments, 1, num_2, 1, LOCAL(1),
  // $temp_name identifier_of(arguments(2))
  var_identifier_of, 1, LOCAL(1), 1, var_892_16_temp_name,
  // $value arguments(1)
  var_783_4_arguments, 1, num_1, 1, var_893_16_value,
  // for_each trailing_statements
  var_for_each, 3, var_840_52_trailing_statements, lambda_104, lambda_108, TAIL_CALL,
  POS(892, 40),
  POS(892, 15),
  POS(893, 15),
  POS(894, 15)
};

static FUNCTION_INFO i_func_process_trailing_statements = {
  t_func_process_trailing_statements, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_104[] = {
  1, // locals
  2, // parameters
  var_895_20_stmt_idx,
  var_895_29_trailing_statement,
  // arguments_of(trailing_statement)
  var_arguments_of, 1, var_895_29_trailing_statement, 1, LOCAL(1),
  // for_each arguments_of(trailing_statement)
  var_for_each, 3, LOCAL(1), lambda_105, var_next, TAIL_CALL,
  POS(896, 28),
  POS(896, 19)
};

static FUNCTION_INFO i_lambda_104 = {
  t_lambda_104, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_105[] = {
  1, // locals
  2, // parameters
  var_897_24_arg_idx,
  var_897_32_argument,
  // node_type_of(argument)
  var_node_type_of, 1, var_897_32_argument, 1, LOCAL(1),
  // case node_type_of(argument)
  var_case, 6, LOCAL(1), var_FUNCTOR, lambda_2_FUNCTOR, var_INLINE_ATTRIBUTE_VALUE_PAIR, lambda_INLINE_ATTRIBUTE_VALUE_PAIR, var_next, TAIL_CALL,
  POS(898, 28),
  POS(898, 23)
};

static FUNCTION_INFO i_lambda_105 = {
  t_lambda_105, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_2_FUNCTOR[] = {
  2, // locals
  0, // parameters
  // identifier_of(argument) == temp_name:
  var_identifier_of, 1, var_897_32_argument, 1, LOCAL(1),
  // identifier_of(argument) == temp_name:
  var_std__equal, 2, LOCAL(1), var_892_16_temp_name, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_106, var_next, TAIL_CALL,
  POS(901, 29),
  POS(901, 29),
  POS(900, 27)
};

static FUNCTION_INFO i_lambda_2_FUNCTOR = {
  t_lambda_2_FUNCTOR, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_106[] = {
  2, // locals
  0, // parameters
  // arguments_of(arg_idx) value
  var_arguments_of, 1, var_895_29_trailing_statement, 1, LOCAL(2),
  // arguments_of(arg_idx) value
  LOCAL(2), 2, var_897_24_arg_idx, var_893_16_value, 1, LOCAL(2),
  // trailing_statement.arguments_of(arg_idx) value
  LET, -1, var_895_29_trailing_statement, var_arguments_of, LOCAL(2), var_895_29_trailing_statement,
  // trailing_statements(stmt_idx) trailing_statement
  var_840_52_trailing_statements, 2, var_895_20_stmt_idx, var_895_29_trailing_statement, 1, var_840_52_trailing_statements,
  // return
  lambda_109, 0, TAIL_CALL,
  POS(902, 51),
  POS(902, 51),
  POS(902, 32),
  POS(903, 32),
  POS(904, 31)
};

static FUNCTION_INFO i_lambda_106 = {
  t_lambda_106, NULL, 5, 0,
  {}
};

static TAB_NUM t_lambda_INLINE_ATTRIBUTE_VALUE_PAIR[] = {
  3, // locals
  0, // parameters
  // expression_of(argument)) == temp_name:
  var_expression_of, 1, var_897_32_argument, 1, LOCAL(1),
  // identifier_of(expression_of(argument)) == temp_name:
  var_identifier_of, 1, LOCAL(1), 1, LOCAL(2),
  // identifier_of(expression_of(argument)) == temp_name:
  var_std__equal, 2, LOCAL(2), var_892_16_temp_name, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_107, var_next, TAIL_CALL,
  POS(908, 43),
  POS(908, 29),
  POS(908, 29),
  POS(907, 27)
};

static FUNCTION_INFO i_lambda_INLINE_ATTRIBUTE_VALUE_PAIR = {
  t_lambda_INLINE_ATTRIBUTE_VALUE_PAIR, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_107[] = {
  3, // locals
  0, // parameters
  // !trailing_statement.arguments_of(arg_idx)
  LET, -1, var_897_32_argument, var_expression_of, var_893_16_value, LOCAL(2),
  // arguments_of(arg_idx)
  var_arguments_of, 1, var_895_29_trailing_statement, 1, LOCAL(3),
  // arguments_of(arg_idx)
  LOCAL(3), 2, var_897_24_arg_idx, LOCAL(2), 1, LOCAL(3),
  // trailing_statement.arguments_of(arg_idx)
  LET, -1, var_895_29_trailing_statement, var_arguments_of, LOCAL(3), var_895_29_trailing_statement,
  // trailing_statements(stmt_idx) trailing_statement
  var_840_52_trailing_statements, 2, var_895_20_stmt_idx, var_895_29_trailing_statement, 1, var_840_52_trailing_statements,
  // return
  lambda_109, 0, TAIL_CALL,
  POS(909, 31),
  POS(909, 51),
  POS(909, 51),
  POS(909, 32),
  POS(911, 32),
  POS(912, 31)
};

static FUNCTION_INFO i_lambda_107 = {
  t_lambda_107, NULL, 6, 0,
  {}
};

static TAB_NUM t_lambda_108[] = {
  0, // locals
  0, // parameters
  // debug::print "
  var_debug__print, 1, str_TEMP_NOT_FOUND_I, 0,
  // debug::exit
  var_debug__exit, 0, TAIL_CALL,
  POS(917, 19),
  POS(919, 19)
};

static FUNCTION_INFO i_lambda_108 = {
  t_lambda_108, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_109[] = {
  3, // locals
  0, // parameters
  // trailing_statements(1)
  var_840_52_trailing_statements, 1, num_1, 1, LOCAL(1),
  // range(trailing_statements 2 -1)
  var_range, 3, var_840_52_trailing_statements, num_2, minus_num_1, 1, LOCAL(2),
  // typed_tuple
  var_typed_tuple, 3, var_funky_types__statement_list, var_840_32_leading_statements, LOCAL(2), 1, LOCAL(3),
  // 
  LET, 3, LOCAL(1), var_779_41_temp_no, LOCAL(3), TAIL_CALL,
  POS(923, 17),
  POS(928, 19),
  POS(925, 17),
  POS(922, 17)
};

static FUNCTION_INFO i_lambda_109 = {
  t_lambda_109, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_110[] = {
  0, // locals
  0, // parameters
  // if
  var_if, 3, var_786_4_is_a_slot_assigment, lambda_2_is_a_slot_assigment, lambda_114, TAIL_CALL,
  POS(930, 13)
};

static FUNCTION_INFO i_lambda_110 = {
  t_lambda_110, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_2_is_a_slot_assigment[] = {
  2, // locals
  0, // parameters
  // filter $outputs &arguments is_an_output
  var_filter, 2, var_783_4_arguments, var_is_an_output, 2, var_932_25_outputs, var_783_4_arguments,
  // check_that_all_arguments_are_slot_assignments
  func_check_that_all_arguments_are_slot_assignments, 0, 0,
  // !self.arguments_of put(arguments head)
  var_put, 2, var_783_4_arguments, var_780_4_head, 1, LOCAL(2),
  // self.arguments_of put(arguments head)
  LET, -1, var_779_36_self, var_arguments_of, LOCAL(2), var_779_36_self,
  // !self.head_of assign_attributes(self)
  func_assign_attributes, 1, var_779_36_self, 1, LOCAL(2),
  // self.head_of assign_attributes(self)
  LET, -1, var_779_36_self, var_head_of, LOCAL(2), var_779_36_self,
  // length_of(outputs)
  var_length_of, 1, var_932_25_outputs, 1, LOCAL(1),
  // case length_of(outputs)
  var_case, 6, LOCAL(1), num_0, lambda_111, num_1, lambda_112, lambda_113, TAIL_CALL,
  POS(932, 17),
  POS(933, 17),
  POS(934, 17),
  POS(934, 18),
  POS(935, 17),
  POS(935, 18),
  POS(936, 22),
  POS(936, 17)
};

static FUNCTION_INFO i_lambda_2_is_a_slot_assigment = {
  t_lambda_2_is_a_slot_assigment, NULL, 8, 0,
  {}
};

static TAB_NUM t_lambda_111[] = {
  4, // locals
  0, // parameters
  // inc &temp_no
  var_inc, 1, var_779_41_temp_no, 1, var_779_41_temp_no,
  // arguments_of redefine_temporary(temp_no self)
  var_arguments_of, 1, var_779_36_self, 1, LOCAL(1),
  // redefine_temporary(temp_no self)
  func_redefine_temporary, 2, var_779_41_temp_no, var_779_36_self, 1, LOCAL(2),
  // push &self.arguments_of redefine_temporary(temp_no self)
  var_push, 2, LOCAL(1), LOCAL(2), 1, LOCAL(1),
  // self.arguments_of redefine_temporary(temp_no self)
  LET, -1, var_779_36_self, var_arguments_of, LOCAL(1), var_779_36_self,
  // std("assign" self)
  func_std, 2, str_assign, var_779_36_self, 1, LOCAL(1),
  // temporary(temp_no self))
  func_temporary, 2, var_779_41_temp_no, var_779_36_self, 1, LOCAL(2),
  // list(temporary(temp_no self))
  var_list, 1, LOCAL(2), 1, LOCAL(3),
  // create_statement
  func_create_statement, 2, LOCAL(1), LOCAL(3), 1, LOCAL(4),
  // push_trailing_statement &result_statements
  var_push_trailing_statement, 2, var_818_30_result_statements, LOCAL(4), 1, var_818_30_result_statements,
  // -> self temp_no result_statements
  LET, 3, var_779_36_self, var_779_41_temp_no, var_818_30_result_statements, TAIL_CALL,
  POS(938, 21),
  POS(939, 32),
  POS(939, 45),
  POS(939, 21),
  POS(939, 27),
  POS(942, 25),
  POS(943, 30),
  POS(943, 25),
  POS(941, 23),
  POS(940, 21),
  POS(944, 21)
};

static FUNCTION_INFO i_lambda_111 = {
  t_lambda_111, NULL, 11, 0,
  {}
};

static TAB_NUM t_lambda_112[] = {
  1, // locals
  0, // parameters
  // arguments_of outputs
  var_arguments_of, 1, var_779_36_self, 1, LOCAL(1),
  // append &self.arguments_of outputs
  var_append, 2, LOCAL(1), var_932_25_outputs, 1, LOCAL(1),
  // self.arguments_of outputs
  LET, -1, var_779_36_self, var_arguments_of, LOCAL(1), var_779_36_self,
  // -> self temp_no result_statements
  LET, 3, var_779_36_self, var_779_41_temp_no, var_818_30_result_statements, TAIL_CALL,
  POS(946, 34),
  POS(946, 21),
  POS(946, 29),
  POS(947, 21)
};

static FUNCTION_INFO i_lambda_112 = {
  t_lambda_112, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_113[] = {
  0, // locals
  0, // parameters
  // syntax_error
  var_syntax_error, 2, str_More_than_one_de, var_779_36_self, TAIL_CALL,
  POS(949, 21)
};

static FUNCTION_INFO i_lambda_113 = {
  t_lambda_113, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_114[] = {
  4, // locals
  0, // parameters
  // head_of(self).is_an_io_call
  var_head_of, 1, var_779_36_self, 1, LOCAL(1),
  // is_an_io_call
  var_is_an_io_call, 1, LOCAL(1), 1, LOCAL(2),
  // 
  var_std__or, 2, LOCAL(2), lambda_115, 1, LOCAL(3),
  // self
  LET, -1, var_779_36_self, var_is_an_io_call, LOCAL(3), LOCAL(4),
  // 
  LET, 3, LOCAL(4), var_779_41_temp_no, var_818_30_result_statements, TAIL_CALL,
  POS(956, 23),
  POS(956, 37),
  POS(955, 23),
  POS(953, 17),
  POS(952, 17)
};

static FUNCTION_INFO i_lambda_114 = {
  t_lambda_114, NULL, 5, 0,
  {}
};

static TAB_NUM t_lambda_115[] = {
  2, // locals
  0, // parameters
  // arguments_of(self) is_an_io_call)
  var_arguments_of, 1, var_779_36_self, 1, LOCAL(1),
  // any_of(arguments_of(self) is_an_io_call)
  var_any_of, 2, LOCAL(1), var_is_an_io_call, 1, LOCAL(2),
  // any_of(arguments_of(self) is_an_io_call)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(957, 30),
  POS(957, 23),
  POS(957, 23)
};

static FUNCTION_INFO i_lambda_115 = {
  t_lambda_115, NULL, 3, 0,
  {}
};

static TAB_NUM t_func_check_that_all_arguments_are_inputs[] = {
  1, // locals
  0, // parameters
  // $argument find_first(arguments is_an_output)
  var_find_first, 2, var_783_4_arguments, var_is_an_output, 1, var_962_6_argument,
  // is_defined:
  var_is_defined, 1, var_962_6_argument, 1, LOCAL(1),
  // on argument.is_defined:
  var_on, 2, LOCAL(1), lambda_116, TAIL_CALL,
  POS(962, 5),
  POS(963, 17),
  POS(963, 5)
};

static FUNCTION_INFO i_func_check_that_all_arguments_are_inputs = {
  t_func_check_that_all_arguments_are_inputs, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_116[] = {
  0, // locals
  0, // parameters
  // syntax_error "Unexpected output argument" argument
  var_syntax_error, 2, str_Unexpected_outpu, var_962_6_argument, TAIL_CALL,
  POS(964, 7)
};

static FUNCTION_INFO i_lambda_116 = {
  t_lambda_116, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_check_that_all_arguments_are_slot_definitions[] = {
  1, // locals
  0, // parameters
  // range(arguments 2 -1) is_not_a_slot_assigment)
  var_range, 3, var_783_4_arguments, num_2, minus_num_1, 1, LOCAL(1),
  // $argument find_first(range(arguments 2 -1) is_not_a_slot_assigment)
  var_find_first, 2, LOCAL(1), func_is_not_a_slot_assigment, 1, var_968_6_argument,
  // is_defined:
  var_is_defined, 1, var_968_6_argument, 1, LOCAL(1),
  // on argument.is_defined:
  var_on, 2, LOCAL(1), lambda_117, TAIL_CALL,
  POS(968, 26),
  POS(968, 5),
  POS(969, 17),
  POS(969, 5)
};

static FUNCTION_INFO i_func_check_that_all_arguments_are_slot_definitions = {
  t_func_check_that_all_arguments_are_slot_definitions, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_117[] = {
  0, // locals
  0, // parameters
  // syntax_error "Argument should be a slot definition" argument
  var_syntax_error, 2, str_Argument_should, var_968_6_argument, TAIL_CALL,
  POS(970, 7)
};

static FUNCTION_INFO i_lambda_117 = {
  t_lambda_117, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_is_not_a_slot_assigment[] = {
  3, // locals
  1, // parameters
  LOCAL(3), // 972_32_node
  // is_a_pair_or_type_function(node))
  func_is_a_pair_or_type_function, 1, LOCAL(3), 1, LOCAL(1),
  // not(is_a_pair_or_type_function(node))
  var_not, 1, LOCAL(1), 1, LOCAL(2),
  // -> not(is_a_pair_or_type_function(node))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(972, 45),
  POS(972, 41),
  POS(972, 38),
  LOCAL(3)
};

static FUNCTION_INFO i_func_is_not_a_slot_assigment = {
  t_func_is_not_a_slot_assigment, NULL, 3, 1,
  {"972_32_node\000"}
};

static TAB_NUM t_func_check_that_all_arguments_are_slot_assignments[] = {
  1, // locals
  0, // parameters
  // $argument
  var_find_first, 2, var_783_4_arguments, lambda_arguments, 1, var_975_6_argument,
  // is_defined:
  var_is_defined, 1, var_975_6_argument, 1, LOCAL(1),
  // on argument.is_defined:
  var_on, 2, LOCAL(1), lambda_118, TAIL_CALL,
  POS(975, 5),
  POS(978, 17),
  POS(978, 5)
};

static FUNCTION_INFO i_func_check_that_all_arguments_are_slot_assignments = {
  t_func_check_that_all_arguments_are_slot_assignments, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_arguments[] = {
  4, // locals
  1, // parameters
  LOCAL(4), // 977_21_argument
  // node_type_of(argument) != ATTRIBUTE_VALUE_PAIR
  var_node_type_of, 1, LOCAL(4), 1, LOCAL(1),
  // node_type_of(argument) != ATTRIBUTE_VALUE_PAIR
  var_std__equal, 2, LOCAL(1), var_ATTRIBUTE_VALUE_PAIR, 1, LOCAL(2),
  // node_type_of(argument) != ATTRIBUTE_VALUE_PAIR
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // -> node_type_of(argument) != ATTRIBUTE_VALUE_PAIR
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(977, 34),
  POS(977, 34),
  POS(977, 34),
  POS(977, 31),
  LOCAL(4)
};

static FUNCTION_INFO i_lambda_arguments = {
  t_lambda_arguments, NULL, 4, 1,
  {"977_21_argument\000"}
};

static TAB_NUM t_lambda_118[] = {
  0, // locals
  0, // parameters
  // syntax_error "Argument should be a slot assignment" argument
  var_syntax_error, 2, str_Argument_should_2, var_975_6_argument, TAIL_CALL,
  POS(979, 7)
};

static FUNCTION_INFO i_lambda_118 = {
  t_lambda_118, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_is_a_pair_or_type_function[] = {
  3, // locals
  1, // parameters
  LOCAL(3), // 981_31_node
  // $node_type node_type_of(node)
  var_node_type_of, 1, LOCAL(3), 1, var_982_4_node_type,
  // node_type == ATTRIBUTE_VALUE_PAIR
  var_std__equal, 2, var_982_4_node_type, var_ATTRIBUTE_VALUE_PAIR, 1, LOCAL(1),
  // 
  var_std__or, 2, LOCAL(1), lambda_119, 1, LOCAL(2),
  // ->
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(982, 3),
  POS(985, 7),
  POS(984, 7),
  POS(983, 3),
  LOCAL(3)
};

static FUNCTION_INFO i_func_is_a_pair_or_type_function = {
  t_func_is_a_pair_or_type_function, NULL, 4, 1,
  {"981_31_node\000"}
};

static TAB_NUM t_lambda_119[] = {
  2, // locals
  0, // parameters
  // node_type == METHOD_VALUE_PAIR
  var_std__equal, 2, var_982_4_node_type, var_METHOD_VALUE_PAIR, 1, LOCAL(1),
  // 
  var_std__or, 2, LOCAL(1), lambda_120, 1, LOCAL(2),
  // node_type == METHOD_VALUE_PAIR
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(986, 7),
  POS(984, 7),
  POS(986, 7)
};

static FUNCTION_INFO i_lambda_119 = {
  t_lambda_119, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_120[] = {
  1, // locals
  0, // parameters
  // node_type == TYPE_FUNCTION
  var_std__equal, 2, var_982_4_node_type, var_TYPE_FUNCTION, 1, LOCAL(1),
  // node_type == TYPE_FUNCTION
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(987, 7),
  POS(987, 7)
};

static FUNCTION_INFO i_lambda_120 = {
  t_lambda_120, NULL, 2, 0,
  {}
};

static TAB_NUM t_func_funky_types__numeric_literal___simplify[] = {
  5, // locals
  2, // parameters
  LOCAL(3), // 989_42_self
  LOCAL(4), // 989_47_temp_no
  // digits_of(self) '@apos;')
  var_digits_of, 1, LOCAL(3), 1, LOCAL(1),
  // $digits delete_all(digits_of(self) '@apos;')
  var_delete_all, 2, LOCAL(1), chr_39, 1, LOCAL(5),
  // self.digits_of digits
  LET, -1, LOCAL(3), var_digits_of, LOCAL(5), LOCAL(3),
  // to_string &digits
  var_to_string, 1, LOCAL(5), 1, LOCAL(5),
  // replace_all &digits
  var_replace_all, 3, LOCAL(5), key_value_pair_994_6, key_value_pair_995_6, 1, LOCAL(5),
  // "num_@(digits)")
  var_std__string, 2, str_num, LOCAL(5), 1, LOCAL(1),
  // .funky::key_of "num_@(digits)")
  LET, -1, LOCAL(3), var_funky__key_of, LOCAL(1), LOCAL(2),
  // ->
  LET, 3, LOCAL(2), LOCAL(4), var_empty_statements, TAIL_CALL,
  POS(990, 22),
  POS(990, 3),
  POS(991, 4),
  POS(992, 3),
  POS(993, 3),
  POS(997, 25),
  POS(997, 10),
  POS(996, 3),
  LOCAL(5),
  LOCAL(4),
  LOCAL(3)
};

static FUNCTION_INFO i_func_funky_types__numeric_literal___simplify = {
  t_func_funky_types__numeric_literal___simplify, NULL, 8, 3,
  {"990_4_digits\000", "989_47_temp_no\000", "989_42_self\000"}
};

static TAB_NUM t_func_funky_types__character_literal___simplify[] = {
  7, // locals
  2, // parameters
  LOCAL(6), // 1001_44_self
  LOCAL(7), // 1001_49_temp_no
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
  POS(1004, 7),
  POS(1004, 7),
  POS(1004, 29),
  POS(1004, 40),
  POS(1003, 5),
  POS(1002, 3),
  LOCAL(7),
  LOCAL(6)
};

static FUNCTION_INFO i_func_funky_types__character_literal___simplify = {
  t_func_funky_types__character_literal___simplify, NULL, 6, 2,
  {"1001_49_temp_no\000", "1001_44_self\000"}
};

static TAB_NUM t_func_funky_types__numeric_character_literal___simplify[] = {
  5, // locals
  2, // parameters
  LOCAL(3), // 1009_52_self
  LOCAL(4), // 1009_57_temp_no
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
  POS(1010, 11),
  POS(1010, 27),
  POS(1010, 3),
  POS(1014, 22),
  POS(1012, 5),
  POS(1011, 3),
  LOCAL(4),
  LOCAL(3),
  LOCAL(5)
};

static FUNCTION_INFO i_func_funky_types__numeric_character_literal___simplify = {
  t_func_funky_types__numeric_character_literal___simplify, NULL, 6, 3,
  {"1009_57_temp_no\000", "1009_52_self\000", "1010_4_digits\000"}
};

static TAB_NUM t_func_funky_types__named_character_literal___simplify[] = {
  1, // locals
  2, // parameters
  var_1018_50_self,
  var_1018_55_temp_no,
  // funky::name_of(self))
  var_funky__name_of, 1, var_1018_50_self, 1, LOCAL(1),
  // $chr character_from_name(funky::name_of(self))
  var_character_from_name, 1, LOCAL(1), 1, var_1019_4_chr,
  // is_defined
  var_is_defined, 1, var_1019_4_chr, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_121, lambda_122, TAIL_CALL,
  POS(1019, 28),
  POS(1019, 3),
  POS(1021, 9),
  POS(1020, 3)
};

static FUNCTION_INFO i_func_funky_types__named_character_literal___simplify = {
  t_func_funky_types__named_character_literal___simplify, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_121[] = {
  3, // locals
  0, // parameters
  // to_integer.to_string self)
  var_to_integer, 1, var_1019_4_chr, 1, LOCAL(1),
  // to_string self)
  var_to_string, 1, LOCAL(1), 1, LOCAL(2),
  // create_numeric_character_literal(chr.to_integer.to_string self)
  func_create_numeric_character_literal, 2, LOCAL(2), var_1018_50_self, 1, LOCAL(3),
  // 
  LET, 3, LOCAL(3), var_1018_55_temp_no, var_empty_statements, TAIL_CALL,
  POS(1023, 44),
  POS(1023, 55),
  POS(1023, 7),
  POS(1022, 7)
};

static FUNCTION_INFO i_lambda_121 = {
  t_lambda_121, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_122[] = {
  0, // locals
  0, // parameters
  // syntax_error "Invalid character name" self
  var_syntax_error, 2, str_Invalid_characte, var_1018_50_self, TAIL_CALL,
  POS(1027, 7)
};

static FUNCTION_INFO i_lambda_122 = {
  t_lambda_122, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_funky_types__at_character_literal___simplify[] = {
  3, // locals
  2, // parameters
  LOCAL(2), // 1029_47_self
  LOCAL(3), // 1029_52_temp_no
  // create_numeric_character_literal("64" self)
  func_create_numeric_character_literal, 2, string_3, LOCAL(2), 1, LOCAL(1),
  // ->
  LET, 3, LOCAL(1), LOCAL(3), var_empty_statements, TAIL_CALL,
  POS(1031, 5),
  POS(1030, 3),
  LOCAL(3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_funky_types__at_character_literal___simplify = {
  t_func_funky_types__at_character_literal___simplify, NULL, 2, 2,
  {"1029_52_temp_no\000", "1029_47_self\000"}
};

static TAB_NUM t_func_create_numeric_character_literal[] = {
  6, // locals
  2, // parameters
  LOCAL(5), // 1035_37_digits
  LOCAL(6), // 1035_44_original_node
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
  POS(1039, 22),
  POS(1040, 24),
  POS(1041, 27),
  POS(1037, 5),
  POS(1036, 3),
  LOCAL(5),
  LOCAL(6)
};

static FUNCTION_INFO i_func_create_numeric_character_literal = {
  t_func_create_numeric_character_literal, NULL, 5, 2,
  {"1035_37_digits\000", "1035_44_original_node\000"}
};

static TAB_NUM t_func_funky_types__unique___simplify[] = {
  6, // locals
  2, // parameters
  LOCAL(4), // 1043_33_self
  LOCAL(5), // 1043_38_temp_no
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
  POS(1045, 24),
  POS(1045, 11),
  POS(1045, 5),
  POS(1044, 3),
  POS(1049, 29),
  POS(1049, 22),
  POS(1047, 5),
  POS(1046, 3),
  LOCAL(4),
  LOCAL(6),
  LOCAL(5)
};

static FUNCTION_INFO i_func_funky_types__unique___simplify = {
  t_func_funky_types__unique___simplify, NULL, 8, 3,
  {"1043_33_self\000", "1044_4_identifier\000", "1043_38_temp_no\000"}
};

static TAB_NUM t_func_funky_types__string_literal___simplify[] = {
  1, // locals
  2, // parameters
  var_1053_41_self,
  var_1053_46_temp_no,
  // $arguments empty_list
  LET, 1, var_empty_list, 1, var_1054_4_arguments,
  // $characters ""
  LET, 1, string_4, 1, var_1055_4_characters,
  // $statements empty_statements
  LET, 1, var_empty_statements, 1, var_1056_4_statements,
  // $components components_of(self)
  var_components_of, 1, var_1053_41_self, 1, var_1057_4_components,
  // is_empty
  var_is_empty, 1, var_1057_4_components, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_123, lambda_124, TAIL_CALL,
  POS(1054, 3),
  POS(1055, 3),
  POS(1056, 3),
  POS(1057, 3),
  POS(1059, 16),
  POS(1058, 3)
};

static FUNCTION_INFO i_func_funky_types__string_literal___simplify = {
  t_func_funky_types__string_literal___simplify, NULL, 6, 0,
  {}
};

static TAB_NUM t_lambda_123[] = {
  3, // locals
  0, // parameters
  // source_group_of(self)
  var_source_group_of, 1, var_1053_41_self, 1, LOCAL(1),
  // source_position_of(self)
  var_source_position_of, 1, var_1053_41_self, 1, LOCAL(2),
  // funky_types::character_sequence
  LET, -4, var_funky_types__character_sequence, var_characters_of, string_4, var_funky__key_of, str_string, var_source_group_of, LOCAL(1), var_source_position_of, LOCAL(2), LOCAL(3),
  // 
  LET, 3, LOCAL(3), var_1053_46_temp_no, var_empty_statements, TAIL_CALL,
  POS(1064, 26),
  POS(1065, 29),
  POS(1061, 7),
  POS(1060, 7)
};

static FUNCTION_INFO i_lambda_123 = {
  t_lambda_123, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_124[] = {
  0, // locals
  0, // parameters
  // for_each components
  var_for_each, 3, var_1057_4_components, lambda_125, lambda_131, TAIL_CALL,
  POS(1069, 7)
};

static FUNCTION_INFO i_lambda_124 = {
  t_lambda_124, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_125[] = {
  1, // locals
  2, // parameters
  var_1070_12_idx,
  var_1070_16_component,
  // node_type_of(component)
  var_node_type_of, 1, var_1070_16_component, 1, LOCAL(1),
  // case node_type_of(component)
  var_case, 16, LOCAL(1), var_CHARACTER_SEQUENCE, lambda_CHARACTER_SEQUENCE, var_NUMERIC_CHARACTER, lambda_NUMERIC_CHARACTER, var_NAMED_CHARACTER, lambda_NAMED_CHARACTER, var_NEWLINE, lambda_NEWLINE, var_AT_CHARACTER, lambda_AT_CHARACTER, var_ESCAPE_EXPRESSION, lambda_ESCAPE_EXPRESSION, var_TAGGED_EMPTY_CHARACTER, lambda_TAGGED_EMPTY_CHARACTER, lambda_130, TAIL_CALL,
  POS(1071, 16),
  POS(1071, 11)
};

static FUNCTION_INFO i_lambda_125 = {
  t_lambda_125, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_CHARACTER_SEQUENCE[] = {
  3, // locals
  0, // parameters
  // $component_characters characters_of(component)
  var_characters_of, 1, var_1070_16_component, 1, var_1073_16_component_characters,
  // 1
  var_std__less, 2, num_1, var_1070_12_idx, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_126, 1, LOCAL(2),
  // if # suppress leading whitespace after line ending with '@'
  var_if, 3, LOCAL(2), lambda_127, lambda_128, 1, LOCAL(3),
  // append &characters
  var_append, 2, var_1055_4_characters, LOCAL(3), 1, var_1055_4_characters,
  // next
  var_next, 0, TAIL_CALL,
  POS(1073, 15),
  POS(1077, 27),
  POS(1076, 21),
  POS(1075, 17),
  POS(1074, 15),
  POS(1081, 15)
};

static FUNCTION_INFO i_lambda_CHARACTER_SEQUENCE = {
  t_lambda_CHARACTER_SEQUENCE, NULL, 6, 0,
  {}
};

static TAB_NUM t_lambda_126[] = {
  4, // locals
  0, // parameters
  // idx-1)) == CHARACTER_SEQUENCE
  var_std__minus, 2, var_1070_12_idx, num_1, 1, LOCAL(1),
  // components(idx-1)) == CHARACTER_SEQUENCE
  var_1057_4_components, 1, LOCAL(1), 1, LOCAL(2),
  // node_type_of(components(idx-1)) == CHARACTER_SEQUENCE
  var_node_type_of, 1, LOCAL(2), 1, LOCAL(3),
  // node_type_of(components(idx-1)) == CHARACTER_SEQUENCE
  var_std__equal, 2, LOCAL(3), var_CHARACTER_SEQUENCE, 1, LOCAL(4),
  // node_type_of(components(idx-1)) == CHARACTER_SEQUENCE
  LET, 1, LOCAL(4), TAIL_CALL,
  POS(1078, 45),
  POS(1078, 34),
  POS(1078, 21),
  POS(1078, 21),
  POS(1078, 21)
};

static FUNCTION_INFO i_lambda_126 = {
  t_lambda_126, NULL, 5, 0,
  {}
};

static TAB_NUM t_lambda_127[] = {
  1, // locals
  0, // parameters
  // trim_left(component_characters)
  var_trim_left, 1, var_1073_16_component_characters, 1, LOCAL(1),
  //  trim_left(component_characters)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1079, 22),
  POS(1079, 21)
};

static FUNCTION_INFO i_lambda_127 = {
  t_lambda_127, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_128[] = {
  0, // locals
  0, // parameters
  //  component_characters
  LET, 1, var_1073_16_component_characters, TAIL_CALL,
  POS(1080, 21)
};

static FUNCTION_INFO i_lambda_128 = {
  t_lambda_128, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_NUMERIC_CHARACTER[] = {
  3, // locals
  0, // parameters
  // digits_of(component).to_integer)
  var_digits_of, 1, var_1070_16_component, 1, LOCAL(1),
  // to_integer)
  var_to_integer, 1, LOCAL(1), 1, LOCAL(2),
  // character(digits_of(component).to_integer)
  var_character, 1, LOCAL(2), 1, LOCAL(3),
  // push &characters character(digits_of(component).to_integer)
  var_push, 2, var_1055_4_characters, LOCAL(3), 1, var_1055_4_characters,
  // next
  var_next, 0, TAIL_CALL,
  POS(1083, 42),
  POS(1083, 63),
  POS(1083, 32),
  POS(1083, 15),
  POS(1084, 15)
};

static FUNCTION_INFO i_lambda_NUMERIC_CHARACTER = {
  t_lambda_NUMERIC_CHARACTER, NULL, 5, 0,
  {}
};

static TAB_NUM t_lambda_NAMED_CHARACTER[] = {
  2, // locals
  0, // parameters
  // funky::name_of(component))
  var_funky__name_of, 1, var_1070_16_component, 1, LOCAL(1),
  // $character character_from_name(funky::name_of(component))
  var_character_from_name, 1, LOCAL(1), 1, LOCAL(2),
  // is_undefined:
  var_is_undefined, 1, LOCAL(2), 1, LOCAL(1),
  // on character.is_undefined:
  var_on, 2, LOCAL(1), lambda_129, 0,
  // push &characters character
  var_push, 2, var_1055_4_characters, LOCAL(2), 1, var_1055_4_characters,
  // next
  var_next, 0, TAIL_CALL,
  POS(1086, 46),
  POS(1086, 15),
  POS(1087, 28),
  POS(1087, 15),
  POS(1089, 15),
  POS(1090, 15),
  LOCAL(2)
};

static FUNCTION_INFO i_lambda_NAMED_CHARACTER = {
  t_lambda_NAMED_CHARACTER, NULL, 6, 1,
  {"1086_16_character\000"}
};

static TAB_NUM t_lambda_129[] = {
  0, // locals
  0, // parameters
  // syntax_error "Invalid character name" component
  var_syntax_error, 2, str_Invalid_characte, var_1070_16_component, TAIL_CALL,
  POS(1088, 17)
};

static FUNCTION_INFO i_lambda_129 = {
  t_lambda_129, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_NEWLINE[] = {
  0, // locals
  0, // parameters
  // push &characters '@nl;'
  var_push, 2, var_1055_4_characters, chr_10, 1, var_1055_4_characters,
  // next
  var_next, 0, TAIL_CALL,
  POS(1092, 15),
  POS(1093, 15)
};

static FUNCTION_INFO i_lambda_NEWLINE = {
  t_lambda_NEWLINE, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_AT_CHARACTER[] = {
  0, // locals
  0, // parameters
  // push &characters '@@'
  var_push, 2, var_1055_4_characters, chr_64, 1, var_1055_4_characters,
  // next
  var_next, 0, TAIL_CALL,
  POS(1095, 15),
  POS(1096, 15)
};

static FUNCTION_INFO i_lambda_AT_CHARACTER = {
  t_lambda_AT_CHARACTER, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_ESCAPE_EXPRESSION[] = {
  3, // locals
  0, // parameters
  // expression_of(component)
  var_expression_of, 1, var_1070_16_component, 1, LOCAL(1),
  // simplify expression_of(component)
  var_simplify, 2, LOCAL(1), var_1053_46_temp_no, 3, LOCAL(2), var_1053_46_temp_no, LOCAL(3),
  // append &statements escape_statements
  var_append, 2, var_1056_4_statements, LOCAL(3), 1, var_1056_4_statements,
  // add_characters !arguments !characters
  func_add_characters, 0, 2, var_1054_4_arguments, var_1055_4_characters,
  // push &arguments expression
  var_push, 2, var_1054_4_arguments, LOCAL(2), 1, var_1054_4_arguments,
  // next
  var_next, 0, TAIL_CALL,
  POS(1098, 24),
  POS(1098, 15),
  POS(1100, 15),
  POS(1101, 15),
  POS(1102, 15),
  POS(1103, 15),
  LOCAL(3),
  LOCAL(2)
};

static FUNCTION_INFO i_lambda_ESCAPE_EXPRESSION = {
  t_lambda_ESCAPE_EXPRESSION, NULL, 6, 2,
  {"1099_39_escape_statements\000", "1099_18_expression\000"}
};

static TAB_NUM t_lambda_TAGGED_EMPTY_CHARACTER[] = {
  0, // locals
  0, // parameters
  // next
  var_next, 0, TAIL_CALL,
  POS(1105, 15)
};

static FUNCTION_INFO i_lambda_TAGGED_EMPTY_CHARACTER = {
  t_lambda_TAGGED_EMPTY_CHARACTER, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_130[] = {
  1, // locals
  0, // parameters
  // node_type_of(component)
  var_node_type_of, 1, var_1070_16_component, 1, LOCAL(1),
  // debug::dump `node_type_of(component)
  var_debug__dump, 2, str_node_type_ofcomp, LOCAL(1), 0,
  // next
  var_next, 0, TAIL_CALL,
  POS(1107, 28),
  POS(1107, 15),
  POS(1108, 15)
};

static FUNCTION_INFO i_lambda_130 = {
  t_lambda_130, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_131[] = {
  3, // locals
  0, // parameters
  // add_characters !arguments !characters
  func_add_characters, 0, 2, var_1054_4_arguments, var_1055_4_characters,
  // length_of(arguments) == 1
  var_length_of, 1, var_1054_4_arguments, 1, LOCAL(1),
  // length_of(arguments) == 1
  var_std__equal, 2, LOCAL(1), num_1, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_132, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_133, lambda_134, TAIL_CALL,
  POS(1110, 11),
  POS(1113, 15),
  POS(1113, 15),
  POS(1112, 15),
  POS(1111, 11)
};

static FUNCTION_INFO i_lambda_131 = {
  t_lambda_131, NULL, 5, 0,
  {}
};

static TAB_NUM t_lambda_132[] = {
  3, // locals
  0, // parameters
  // arguments(1)) == CHARACTER_SEQUENCE
  var_1054_4_arguments, 1, num_1, 1, LOCAL(1),
  // node_type_of(arguments(1)) == CHARACTER_SEQUENCE
  var_node_type_of, 1, LOCAL(1), 1, LOCAL(2),
  // node_type_of(arguments(1)) == CHARACTER_SEQUENCE
  var_std__equal, 2, LOCAL(2), var_CHARACTER_SEQUENCE, 1, LOCAL(3),
  // node_type_of(arguments(1)) == CHARACTER_SEQUENCE
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(1114, 28),
  POS(1114, 15),
  POS(1114, 15),
  POS(1114, 15)
};

static FUNCTION_INFO i_lambda_132 = {
  t_lambda_132, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_133[] = {
  1, // locals
  0, // parameters
  // arguments(1) temp_no empty_statements
  var_1054_4_arguments, 1, num_1, 1, LOCAL(1),
  //  arguments(1) temp_no empty_statements
  LET, 3, LOCAL(1), var_1053_46_temp_no, var_empty_statements, TAIL_CALL,
  POS(1115, 16),
  POS(1115, 15)
};

static FUNCTION_INFO i_lambda_133 = {
  t_lambda_133, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_134[] = {
  8, // locals
  0, // parameters
  // inc &temp_no
  var_inc, 1, var_1053_46_temp_no, 1, var_1053_46_temp_no,
  // source_group_of(self))
  var_source_group_of, 1, var_1053_41_self, 1, LOCAL(1),
  // $text line_text_of(source_group_of(self))
  var_line_text_of, 1, LOCAL(1), 1, LOCAL(6),
  // $position source_position_of(self)
  var_source_position_of, 1, var_1053_41_self, 1, LOCAL(7),
  // length_of(text)-length_of(position) -1)
  var_length_of, 1, LOCAL(6), 1, LOCAL(1),
  // length_of(position) -1)
  var_length_of, 1, LOCAL(7), 1, LOCAL(2),
  // length_of(text)-length_of(position) -1)
  var_std__minus, 2, LOCAL(1), LOCAL(2), 1, LOCAL(3),
  // !position range(text length_of(text)-length_of(position) -1)
  var_range, 3, LOCAL(6), LOCAL(3), minus_num_1, 1, LOCAL(7),
  // source_group_of(self)
  var_source_group_of, 1, var_1053_41_self, 1, LOCAL(1),
  // $functor
  LET, -4, var_funky_types__functor, var_identifier_of, str_stdstring, var_kind_of, var_EXTERN, var_source_group_of, LOCAL(1), var_source_position_of, LOCAL(7), LOCAL(8),
  // temporary(temp_no self)
  func_temporary, 2, var_1053_46_temp_no, var_1053_41_self, 1, LOCAL(1),
  // redefine_temporary(temp_no functor))
  func_redefine_temporary, 2, var_1053_46_temp_no, LOCAL(8), 1, LOCAL(2),
  // push(arguments redefine_temporary(temp_no functor))
  var_push, 2, var_1054_4_arguments, LOCAL(2), 1, LOCAL(3),
  // create_statement
  func_create_statement, 2, LOCAL(8), LOCAL(3), 1, LOCAL(4),
  // push_leading_statement
  var_push_leading_statement, 2, var_1056_4_statements, LOCAL(4), 1, LOCAL(5),
  // ->
  LET, 3, LOCAL(1), var_1053_46_temp_no, LOCAL(5), TAIL_CALL,
  POS(1117, 15),
  POS(1118, 34),
  POS(1118, 15),
  POS(1119, 15),
  POS(1120, 36),
  POS(1120, 52),
  POS(1120, 36),
  POS(1120, 15),
  POS(1125, 36),
  POS(1121, 15),
  POS(1128, 17),
  POS(1134, 36),
  POS(1134, 21),
  POS(1132, 19),
  POS(1130, 17),
  POS(1127, 15),
  LOCAL(6),
  LOCAL(7),
  LOCAL(8)
};

static FUNCTION_INFO i_lambda_134 = {
  t_lambda_134, NULL, 16, 3,
  {"1118_16_text\000", "1119_16_position\000", "1121_16_functor\000"}
};

static TAB_NUM t_func_add_characters[] = {
  1, // locals
  0, // parameters
  // is_empty
  var_is_empty, 1, var_1055_4_characters, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_135, lambda_136, TAIL_CALL,
  POS(1138, 22),
  POS(1137, 9)
};

static FUNCTION_INFO i_func_add_characters = {
  t_func_add_characters, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_135[] = {
  0, // locals
  0, // parameters
  //  arguments characters
  LET, 2, var_1054_4_arguments, var_1055_4_characters, TAIL_CALL,
  POS(1139, 13)
};

static FUNCTION_INFO i_lambda_135 = {
  t_lambda_135, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_136[] = {
  6, // locals
  0, // parameters
  // source_group_of(self)
  var_source_group_of, 1, var_1053_41_self, 1, LOCAL(1),
  // source_position_of(self)
  var_source_position_of, 1, var_1053_41_self, 1, LOCAL(2),
  // length_of(characters))_@(characters)"
  var_length_of, 1, var_1055_4_characters, 1, LOCAL(3),
  // "string@(length_of(characters))_@(characters)"
  var_std__string, 4, str_string_2, LOCAL(3), string_2, var_1055_4_characters, 1, LOCAL(4),
  // funky_types::character_sequence
  LET, -4, var_funky_types__character_sequence, var_source_group_of, LOCAL(1), var_source_position_of, LOCAL(2), var_characters_of, var_1055_4_characters, var_funky__key_of, LOCAL(4), LOCAL(5),
  // push
  var_push, 2, var_1054_4_arguments, LOCAL(5), 1, LOCAL(6),
  // 
  LET, 2, LOCAL(6), string_4, TAIL_CALL,
  POS(1144, 34),
  POS(1145, 37),
  POS(1147, 41),
  POS(1147, 32),
  POS(1143, 15),
  POS(1141, 13),
  POS(1140, 13)
};

static FUNCTION_INFO i_lambda_136 = {
  t_lambda_136, NULL, 7, 0,
  {}
};

static TAB_NUM t_func_std_types__list___simplify[] = {
  1, // locals
  2, // parameters
  LOCAL(1), // 1150_29_self
  var_1150_34_temp_no,
  // $statements empty_statements
  LET, 1, var_empty_statements, 1, var_1151_4_statements,
  // $simplified_nodes empty_list
  LET, 1, var_empty_list, 1, var_1152_4_simplified_nodes,
  // for_each self
  var_for_each, 3, LOCAL(1), lambda_137, lambda_138, TAIL_CALL,
  POS(1151, 3),
  POS(1152, 3),
  POS(1153, 3),
  LOCAL(1)
};

static FUNCTION_INFO i_func_std_types__list___simplify = {
  t_func_std_types__list___simplify, NULL, 3, 1,
  {"1150_29_self\000"}
};

static TAB_NUM t_lambda_137[] = {
  2, // locals
  1, // parameters
  LOCAL(1), // 1154_8_node
  // simplify &node &temp_no $node_statements
  var_simplify, 2, LOCAL(1), var_1150_34_temp_no, 3, LOCAL(1), var_1150_34_temp_no, LOCAL(2),
  // append &statements node_statements
  var_append, 2, var_1151_4_statements, LOCAL(2), 1, var_1151_4_statements,
  // push &simplified_nodes node
  var_push, 2, var_1152_4_simplified_nodes, LOCAL(1), 1, var_1152_4_simplified_nodes,
  // next
  var_next, 0, TAIL_CALL,
  POS(1155, 7),
  POS(1156, 7),
  POS(1157, 7),
  POS(1158, 7),
  LOCAL(2),
  LOCAL(1)
};

static FUNCTION_INFO i_lambda_137 = {
  t_lambda_137, NULL, 4, 2,
  {"1155_32_node_statements\000", "1154_8_node\000"}
};

static TAB_NUM t_lambda_138[] = {
  0, // locals
  0, // parameters
  //  simplified_nodes temp_no statements
  LET, 3, var_1152_4_simplified_nodes, var_1150_34_temp_no, var_1151_4_statements, TAIL_CALL,
  POS(1159, 7)
};

static FUNCTION_INFO i_lambda_138 = {
  t_lambda_138, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_create_functor[] = {
  6, // locals
  1, // parameters
  LOCAL(6), // 1163_19_original_node
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
  POS(1166, 22),
  POS(1167, 16),
  POS(1168, 24),
  POS(1169, 27),
  POS(1165, 5),
  POS(1164, 3),
  LOCAL(6)
};

static FUNCTION_INFO i_func_create_functor = {
  t_func_create_functor, NULL, 6, 1,
  {"1163_19_original_node\000"}
};

static TAB_NUM t_func_std[] = {
  6, // locals
  2, // parameters
  LOCAL(5), // 1171_8_name
  LOCAL(6), // 1171_13_original_node
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
  POS(1174, 22),
  POS(1176, 24),
  POS(1177, 27),
  POS(1173, 5),
  POS(1172, 3),
  LOCAL(6),
  LOCAL(5)
};

static FUNCTION_INFO i_func_std = {
  t_func_std, NULL, 5, 2,
  {"1171_13_original_node\000", "1171_8_name\000"}
};

static TAB_NUM t_func_assign_attributes[] = {
  4, // locals
  1, // parameters
  LOCAL(4), // 1179_22_original_node
  // source_group_of(original_node)
  var_source_group_of, 1, LOCAL(4), 1, LOCAL(1),
  // source_position_of(original_node)
  var_source_position_of, 1, LOCAL(4), 1, LOCAL(2),
  // funky_types::functor
  LET, -4, var_funky_types__functor, var_identifier_of, str__assign_attribut, var_kind_of, var_BUILTIN, var_source_group_of, LOCAL(1), var_source_position_of, LOCAL(2), LOCAL(3),
  // ->
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(1184, 24),
  POS(1185, 27),
  POS(1181, 5),
  POS(1180, 3),
  LOCAL(4)
};

static FUNCTION_INFO i_func_assign_attributes = {
  t_func_assign_attributes, NULL, 4, 1,
  {"1179_22_original_node\000"}
};

static TAB_NUM t_func_temporary[] = {
  7, // locals
  2, // parameters
  LOCAL(6), // 1187_14_no
  LOCAL(7), // 1187_17_original_node
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
  POS(1191, 26),
  POS(1191, 22),
  POS(1194, 24),
  POS(1195, 27),
  POS(1190, 5),
  POS(1189, 3),
  LOCAL(7),
  LOCAL(6)
};

static FUNCTION_INFO i_func_temporary = {
  t_func_temporary, NULL, 6, 2,
  {"1187_17_original_node\000", "1187_14_no\000"}
};

static TAB_NUM t_func_redefine_temporary[] = {
  7, // locals
  2, // parameters
  LOCAL(6), // 1197_23_no
  LOCAL(7), // 1197_26_original_node
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
  POS(1200, 26),
  POS(1200, 22),
  POS(1203, 24),
  POS(1204, 27),
  POS(1199, 5),
  POS(1198, 3),
  LOCAL(7),
  LOCAL(6)
};

static FUNCTION_INFO i_func_redefine_temporary = {
  t_func_redefine_temporary, NULL, 6, 2,
  {"1197_26_original_node\000", "1197_23_no\000"}
};

static TAB_NUM t_func_update_temporary[] = {
  7, // locals
  2, // parameters
  LOCAL(6), // 1206_21_no
  LOCAL(7), // 1206_24_original_node
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
  POS(1209, 26),
  POS(1209, 22),
  POS(1212, 24),
  POS(1213, 27),
  POS(1208, 5),
  POS(1207, 3),
  LOCAL(6),
  LOCAL(7)
};

static FUNCTION_INFO i_func_update_temporary = {
  t_func_update_temporary, NULL, 6, 2,
  {"1206_21_no\000", "1206_24_original_node\000"}
};

static TAB_NUM t_func_create_statement[] = {
  1, // locals
  2, // parameters
  var_1217_21_head,
  var_1217_26_arguments,
  // is_not_empty:
  var_is_not_empty, 1, var_1217_26_arguments, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_arguments_is_not_empty, lambda_143, TAIL_CALL,
  POS(1219, 15),
  POS(1218, 3)
};

static FUNCTION_INFO i_func_create_statement = {
  t_func_create_statement, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_arguments_is_not_empty[] = {
  1, // locals
  0, // parameters
  // arguments(1))
  var_1217_26_arguments, 1, num_1, 1, LOCAL(1),
  // $node_type node_type_of(arguments(1))
  var_node_type_of, 1, LOCAL(1), 1, var_1220_8_node_type,
  // node_type == ATTRIBUTE_VALUE_PAIR
  var_std__equal, 2, var_1220_8_node_type, var_ATTRIBUTE_VALUE_PAIR, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_139, lambda_140, TAIL_CALL,
  POS(1220, 31),
  POS(1220, 7),
  POS(1222, 9),
  POS(1221, 7)
};

static FUNCTION_INFO i_lambda_arguments_is_not_empty = {
  t_lambda_arguments_is_not_empty, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_139[] = {
  5, // locals
  0, // parameters
  // assign_attributes(head)
  func_assign_attributes, 1, var_1217_21_head, 1, LOCAL(1),
  // put(arguments head)
  var_put, 2, var_1217_26_arguments, var_1217_21_head, 1, LOCAL(2),
  // source_group_of(head)
  var_source_group_of, 1, var_1217_21_head, 1, LOCAL(3),
  // source_position_of(head)
  var_source_position_of, 1, var_1217_21_head, 1, LOCAL(4),
  // funky_types::statement
  LET, -4, var_funky_types__statement, var_head_of, LOCAL(1), var_arguments_of, LOCAL(2), var_source_group_of, LOCAL(3), var_source_position_of, LOCAL(4), LOCAL(5),
  // 
  LET, 1, LOCAL(5), TAIL_CALL,
  POS(1225, 22),
  POS(1226, 27),
  POS(1227, 30),
  POS(1228, 33),
  POS(1224, 11),
  POS(1223, 11)
};

static FUNCTION_INFO i_lambda_139 = {
  t_lambda_139, NULL, 6, 0,
  {}
};

static TAB_NUM t_lambda_140[] = {
  2, // locals
  0, // parameters
  // node_type == METHOD_VALUE_PAIR || node_type == TYPE_FUNCTION:
  var_std__equal, 2, var_1220_8_node_type, var_METHOD_VALUE_PAIR, 1, LOCAL(1),
  // node_type == METHOD_VALUE_PAIR || node_type == TYPE_FUNCTION:
  var_std__or, 2, LOCAL(1), lambda_141, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_142, lambda_143, TAIL_CALL,
  POS(1231, 13),
  POS(1231, 13),
  POS(1230, 11)
};

static FUNCTION_INFO i_lambda_140 = {
  t_lambda_140, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_141[] = {
  1, // locals
  0, // parameters
  // node_type == TYPE_FUNCTION:
  var_std__equal, 2, var_1220_8_node_type, var_TYPE_FUNCTION, 1, LOCAL(1),
  // node_type == TYPE_FUNCTION:
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1231, 47),
  POS(1231, 47)
};

static FUNCTION_INFO i_lambda_141 = {
  t_lambda_141, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_142[] = {
  1, // locals
  0, // parameters
  // arguments(1)
  var_1217_26_arguments, 1, num_1, 1, LOCAL(1),
  // syntax_error
  var_syntax_error, 2, str_assigning_method, LOCAL(1), TAIL_CALL,
  POS(1234, 17),
  POS(1232, 15)
};

static FUNCTION_INFO i_lambda_142 = {
  t_lambda_142, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_143[] = {
  4, // locals
  0, // parameters
  // expand_backquotes(arguments)
  func_expand_backquotes, 1, var_1217_26_arguments, 1, LOCAL(1),
  // source_group_of(head)
  var_source_group_of, 1, var_1217_21_head, 1, LOCAL(2),
  // source_position_of(head)
  var_source_position_of, 1, var_1217_21_head, 1, LOCAL(3),
  // funky_types::statement
  LET, -4, var_funky_types__statement, var_head_of, var_1217_21_head, var_arguments_of, LOCAL(1), var_source_group_of, LOCAL(2), var_source_position_of, LOCAL(3), LOCAL(4),
  // 
  LET, 1, LOCAL(4), TAIL_CALL,
  POS(1242, 23),
  POS(1243, 26),
  POS(1244, 29),
  POS(1240, 7),
  POS(1239, 7)
};

static FUNCTION_INFO i_lambda_143 = {
  t_lambda_143, NULL, 5, 0,
  {}
};

static TAB_NUM t_func_expand_backquotes[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 1246_22_arguments
  // $expanded empty_list
  LET, 1, var_empty_list, 1, var_1247_4_expanded,
  // for_each arguments
  var_for_each, 3, LOCAL(1), lambda_144, lambda_147, TAIL_CALL,
  POS(1247, 3),
  POS(1248, 3),
  LOCAL(1)
};

static FUNCTION_INFO i_func_expand_backquotes = {
  t_func_expand_backquotes, NULL, 2, 1,
  {"1246_22_arguments\000"}
};

static TAB_NUM t_lambda_144[] = {
  2, // locals
  1, // parameters
  var_1249_8_argument,
  // node_type_of(argument) == BACKQUOTED:
  var_node_type_of, 1, var_1249_8_argument, 1, LOCAL(1),
  // node_type_of(argument) == BACKQUOTED:
  var_std__equal, 2, LOCAL(1), var_BACKQUOTED, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_145, lambda_146, TAIL_CALL,
  POS(1251, 9),
  POS(1251, 9),
  POS(1250, 7)
};

static FUNCTION_INFO i_lambda_144 = {
  t_lambda_144, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_145[] = {
  0, // locals
  0, // parameters
  // resolve_backquoted &expanded argument
  func_resolve_backquoted, 2, var_1247_4_expanded, var_1249_8_argument, 1, var_1247_4_expanded,
  // next
  var_next, 0, TAIL_CALL,
  POS(1252, 11),
  POS(1253, 11)
};

static FUNCTION_INFO i_lambda_145 = {
  t_lambda_145, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_146[] = {
  0, // locals
  0, // parameters
  // push &expanded argument
  var_push, 2, var_1247_4_expanded, var_1249_8_argument, 1, var_1247_4_expanded,
  // next
  var_next, 0, TAIL_CALL,
  POS(1255, 11),
  POS(1256, 11)
};

static FUNCTION_INFO i_lambda_146 = {
  t_lambda_146, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_147[] = {
  0, // locals
  0, // parameters
  //  expanded
  LET, 1, var_1247_4_expanded, TAIL_CALL,
  POS(1257, 7)
};

static FUNCTION_INFO i_lambda_147 = {
  t_lambda_147, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_resolve_backquoted[] = {
  8, // locals
  2, // parameters
  LOCAL(6), // 1259_23_arguments
  LOCAL(7), // 1259_33_node
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
  POS(1260, 35),
  POS(1260, 3),
  POS(1266, 33),
  POS(1266, 24),
  POS(1264, 7),
  POS(1262, 5),
  POS(1267, 5),
  POS(1261, 3),
  LOCAL(6),
  LOCAL(7),
  LOCAL(8)
};

static FUNCTION_INFO i_func_resolve_backquoted = {
  t_func_resolve_backquoted, NULL, 8, 3,
  {"1259_23_arguments\000", "1259_33_node\000", "1260_4_characters\000"}
};

static TAB_NUM t_func_exctract_characters[] = {
  0, // locals
  1, // parameters
  var_1269_26_str,
  // $level 0
  LET, 1, num_0, 1, var_1270_6_level,
  // $within_string false
  LET, 1, var_false, 1, var_1271_6_within_string,
  // for_each str
  var_for_each, 3, var_1269_26_str, lambda_148, var_next, TAIL_CALL,
  POS(1270, 5),
  POS(1271, 5),
  POS(1272, 5)
};

static FUNCTION_INFO i_func_exctract_characters = {
  t_func_exctract_characters, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_148[] = {
  1, // locals
  2, // parameters
  var_1273_10_idx,
  LOCAL(1), // 1273_14_chr
  // case chr
  var_case, 12, LOCAL(1), chr_10, lambda_nl, chr_32, lambda_149, chr_34, lambda_quot, chr_40, lambda_152, chr_41, lambda_153, var_next, TAIL_CALL,
  POS(1274, 9),
  LOCAL(1)
};

static FUNCTION_INFO i_lambda_148 = {
  t_lambda_148, NULL, 1, 1,
  {"1273_14_chr\000"}
};

static TAB_NUM t_lambda_nl[] = {
  1, // locals
  0, // parameters
  // range(str 1 -2)
  var_range, 3, var_1269_26_str, num_1, minus_num_2, 1, LOCAL(1),
  //  range(str 1 -2)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1275, 21),
  POS(1275, 20)
};

static FUNCTION_INFO i_lambda_nl = {
  t_lambda_nl, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_149[] = {
  2, // locals
  0, // parameters
  // level == 0 && not(within_string)
  var_std__equal, 2, var_1270_6_level, num_0, 1, LOCAL(1),
  // level == 0 && not(within_string)
  var_std__and, 2, LOCAL(1), lambda_150, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_151, var_next, TAIL_CALL,
  POS(1278, 15),
  POS(1278, 15),
  POS(1277, 13)
};

static FUNCTION_INFO i_lambda_149 = {
  t_lambda_149, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_150[] = {
  1, // locals
  0, // parameters
  // not(within_string)
  var_not, 1, var_1271_6_within_string, 1, LOCAL(1),
  // not(within_string)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1278, 29),
  POS(1278, 29)
};

static FUNCTION_INFO i_lambda_150 = {
  t_lambda_150, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_151[] = {
  2, // locals
  0, // parameters
  // idx-1)
  var_std__minus, 2, var_1273_10_idx, num_1, 1, LOCAL(1),
  // range(str 1 idx-1)
  var_range, 3, var_1269_26_str, num_1, LOCAL(1), 1, LOCAL(2),
  //  range(str 1 idx-1)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1279, 30),
  POS(1279, 18),
  POS(1279, 17)
};

static FUNCTION_INFO i_lambda_151 = {
  t_lambda_151, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_quot[] = {
  0, // locals
  0, // parameters
  // not &within_string
  var_not, 1, var_1271_6_within_string, 1, var_1271_6_within_string,
  // next
  var_next, 0, TAIL_CALL,
  POS(1282, 13),
  POS(1283, 13)
};

static FUNCTION_INFO i_lambda_quot = {
  t_lambda_quot, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_152[] = {
  0, // locals
  0, // parameters
  // inc &level
  var_inc, 1, var_1270_6_level, 1, var_1270_6_level,
  // next
  var_next, 0, TAIL_CALL,
  POS(1285, 13),
  POS(1286, 13)
};

static FUNCTION_INFO i_lambda_152 = {
  t_lambda_152, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_153[] = {
  0, // locals
  0, // parameters
  // dec &level
  var_dec, 1, var_1270_6_level, 1, var_1270_6_level,
  // next
  var_next, 0, TAIL_CALL,
  POS(1288, 13),
  POS(1289, 13)
};

static FUNCTION_INFO i_lambda_153 = {
  t_lambda_153, NULL, 2, 0,
  {}
};

static TAB_NUM t_func_funky_types__statement_list___append[] = {
  6, // locals
  2, // parameters
  LOCAL(1), // 1293_39_self
  LOCAL(2), // 1293_44_right
  // self $leading_statements $trailing_statements
  LOCAL(1), 0, 2, LOCAL(3), LOCAL(4),
  // right $right_leading_statements $right_trailing_statements
  LOCAL(2), 0, 2, LOCAL(5), LOCAL(6),
  // append &leading_statements right_leading_statements
  var_append, 2, LOCAL(3), LOCAL(5), 1, LOCAL(3),
  // append &trailing_statements right_trailing_statements
  var_append, 2, LOCAL(4), LOCAL(6), 1, LOCAL(4),
  // typed_tuple self leading_statements trailing_statements
  var_typed_tuple, 3, LOCAL(1), LOCAL(3), LOCAL(4), TAIL_CALL,
  POS(1294, 3),
  POS(1295, 3),
  POS(1296, 3),
  POS(1297, 3),
  POS(1298, 3),
  LOCAL(6),
  LOCAL(5),
  LOCAL(3),
  LOCAL(2),
  LOCAL(4),
  LOCAL(1)
};

static FUNCTION_INFO i_func_funky_types__statement_list___append = {
  t_func_funky_types__statement_list___append, NULL, 5, 6,
  {"1295_36_right_trailing_statements\000", "1295_10_right_leading_statements\000", "1294_9_leading_statements\000", "1293_44_right\000", "1294_29_trailing_statements\000", "1293_39_self\000"}
};

static TAB_NUM t_func_funky_types__statement_list___push_leading_statement[] = {
  4, // locals
  2, // parameters
  LOCAL(1), // 1300_55_self
  LOCAL(2), // 1300_60_statement
  // self $leading_statements $trailing_statements
  LOCAL(1), 0, 2, LOCAL(3), LOCAL(4),
  // push &leading_statements statement
  var_push, 2, LOCAL(3), LOCAL(2), 1, LOCAL(3),
  // typed_tuple self leading_statements trailing_statements
  var_typed_tuple, 3, LOCAL(1), LOCAL(3), LOCAL(4), TAIL_CALL,
  POS(1301, 3),
  POS(1302, 3),
  POS(1303, 3),
  LOCAL(2),
  LOCAL(3),
  LOCAL(1),
  LOCAL(4)
};

static FUNCTION_INFO i_func_funky_types__statement_list___push_leading_statement = {
  t_func_funky_types__statement_list___push_leading_statement, NULL, 3, 4,
  {"1300_60_statement\000", "1301_9_leading_statements\000", "1300_55_self\000", "1301_29_trailing_statements\000"}
};

static TAB_NUM t_func_funky_types__statement_list___push_trailing_statement[] = {
  4, // locals
  2, // parameters
  LOCAL(1), // 1305_56_self
  LOCAL(2), // 1305_61_statement
  // self $leading_statements $trailing_statements
  LOCAL(1), 0, 2, LOCAL(3), LOCAL(4),
  // push &trailing_statements statement
  var_push, 2, LOCAL(4), LOCAL(2), 1, LOCAL(4),
  // typed_tuple self leading_statements trailing_statements
  var_typed_tuple, 3, LOCAL(1), LOCAL(3), LOCAL(4), TAIL_CALL,
  POS(1306, 3),
  POS(1307, 3),
  POS(1308, 3),
  LOCAL(1),
  LOCAL(4),
  LOCAL(2),
  LOCAL(3)
};

static FUNCTION_INFO i_func_funky_types__statement_list___push_trailing_statement = {
  t_func_funky_types__statement_list___push_trailing_statement, NULL, 3, 4,
  {"1305_56_self\000", "1306_29_trailing_statements\000", "1305_61_statement\000", "1306_9_leading_statements\000"}
};

static TAB_NUM t_func_collect_parameter_definitions[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 1312_34_body
  // parameters_of(body) add_definition -> resolve_variable
  var_parameters_of, 1, LOCAL(2), 1, LOCAL(1),
  // for_each parameters_of(body) add_definition -> resolve_variable
  var_for_each, 3, LOCAL(1), var_add_definition, lambda_154, TAIL_CALL,
  POS(1313, 12),
  POS(1313, 3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_collect_parameter_definitions = {
  t_func_collect_parameter_definitions, NULL, 2, 1,
  {"1312_34_body\000"}
};

static TAB_NUM t_lambda_154[] = {
  0, // locals
  0, // parameters
  //  resolve_variable
  LET, 1, var_resolve_variable, TAIL_CALL,
  POS(1313, 49)
};

static FUNCTION_INFO i_lambda_154 = {
  t_lambda_154, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_collect_local_definitions[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 1315_30_statements
  // for_each statements add_definitions -> resolve_variable
  var_for_each, 3, LOCAL(1), var_add_definitions, lambda_155, TAIL_CALL,
  POS(1316, 3),
  LOCAL(1)
};

static FUNCTION_INFO i_func_collect_local_definitions = {
  t_func_collect_local_definitions, NULL, 1, 1,
  {"1315_30_statements\000"}
};

static TAB_NUM t_lambda_155[] = {
  0, // locals
  0, // parameters
  //  resolve_variable
  LET, 1, var_resolve_variable, TAIL_CALL,
  POS(1316, 41)
};

static FUNCTION_INFO i_lambda_155 = {
  t_lambda_155, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_funky_types__node___add_definitions[] = {
  1, // locals
  1, // parameters
  LOCAL(1),
  // next
  var_next, 0, TAIL_CALL,
  POS(1321, 3)
};

static FUNCTION_INFO i_func_funky_types__node___add_definitions = {
  t_func_funky_types__node___add_definitions, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_funky_types__statement___add_definitions[] = {
  3, // locals
  1, // parameters
  LOCAL(3), // 1323_43_self
  // $head head_of(self)
  var_head_of, 1, LOCAL(3), 1, var_1324_4_head,
  // $arguments arguments_of(self)
  var_arguments_of, 1, LOCAL(3), 1, var_1325_4_arguments,
  // node_type_of(head) == DEFINITION:
  var_node_type_of, 1, var_1324_4_head, 1, LOCAL(1),
  // node_type_of(head) == DEFINITION:
  var_std__equal, 2, LOCAL(1), var_DEFINITION, 1, LOCAL(2),
  // !arguments
  var_if, 3, LOCAL(2), lambda_156, lambda_159, 1, var_1325_4_arguments,
  // for_each arguments
  var_for_each, 3, var_1325_4_arguments, var_add_definition, var_next, TAIL_CALL,
  POS(1324, 3),
  POS(1325, 3),
  POS(1328, 7),
  POS(1328, 7),
  POS(1326, 3),
  POS(1334, 3),
  LOCAL(3)
};

static FUNCTION_INFO i_func_funky_types__statement___add_definitions = {
  t_func_funky_types__statement___add_definitions, NULL, 6, 1,
  {"1323_43_self\000"}
};

static TAB_NUM t_lambda_156[] = {
  3, // locals
  0, // parameters
  // arguments(1))
  var_1325_4_arguments, 1, num_1, 1, LOCAL(1),
  // node_type_of(arguments(1))
  var_node_type_of, 1, LOCAL(1), 1, LOCAL(2),
  // ATTRIBUTE_VALUE_PAIR, METHOD_VALUE_PAIR, TYPE_FUNCTION
  var_std__sequence, 3, var_ATTRIBUTE_VALUE_PAIR, var_METHOD_VALUE_PAIR, var_TYPE_FUNCTION, 1, LOCAL(3),
  // case node_type_of(arguments(1))
  var_case, 4, LOCAL(2), LOCAL(3), lambda_157, lambda_158, TAIL_CALL,
  POS(1329, 27),
  POS(1329, 14),
  POS(1330, 11),
  POS(1329, 9)
};

static FUNCTION_INFO i_lambda_156 = {
  t_lambda_156, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_157[] = {
  0, // locals
  0, // parameters
  //  arguments
  LET, 1, var_1325_4_arguments, TAIL_CALL,
  POS(1331, 13)
};

static FUNCTION_INFO i_lambda_157 = {
  t_lambda_157, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_158[] = {
  1, // locals
  0, // parameters
  // push(arguments head)
  var_push, 2, var_1325_4_arguments, var_1324_4_head, 1, LOCAL(1),
  //  push(arguments head)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1332, 14),
  POS(1332, 13)
};

static FUNCTION_INFO i_lambda_158 = {
  t_lambda_158, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_159[] = {
  0, // locals
  0, // parameters
  //  arguments
  LET, 1, var_1325_4_arguments, TAIL_CALL,
  POS(1333, 9)
};

static FUNCTION_INFO i_lambda_159 = {
  t_lambda_159, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_funky_types__node___add_definition[] = {
  1, // locals
  1, // parameters
  LOCAL(1),
  // next
  var_next, 0, TAIL_CALL,
  POS(1341, 3)
};

static FUNCTION_INFO i_func_funky_types__node___add_definition = {
  t_func_funky_types__node___add_definition, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_funky_types__definition___add_definition[] = {
  1, // locals
  1, // parameters
  var_1343_43_self,
  // $identifier identifier_of(self)
  var_identifier_of, 1, var_1343_43_self, 1, var_1344_4_identifier,
  // identifier .contains. "::"
  var_contains, 2, var_1344_4_identifier, string_5, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), var_next, lambda_160, TAIL_CALL,
  POS(1344, 3),
  POS(1346, 5),
  POS(1345, 3)
};

static FUNCTION_INFO i_func_funky_types__definition___add_definition = {
  t_func_funky_types__definition___add_definition, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_160[] = {
  2, // locals
  0, // parameters
  // not(allow_hidden) && resolve_variable(identifier).is_defined:
  var_not, 1, var_allow_hidden, 1, LOCAL(1),
  // not(allow_hidden) && resolve_variable(identifier).is_defined:
  var_std__and, 2, LOCAL(1), lambda_161, 1, LOCAL(2),
  // on not(allow_hidden) && resolve_variable(identifier).is_defined:
  var_on, 2, LOCAL(2), lambda_162, 0,
  // !resolve_variable(identifier) mangle_local_definition(identifier self)
  var_mangle_local_definition, 2, var_1344_4_identifier, var_1343_43_self, 1, LOCAL(2),
  // resolve_variable(identifier) mangle_local_definition(identifier self)
  var_resolve_variable, 2, var_1344_4_identifier, LOCAL(2), 1, var_resolve_variable,
  // next
  var_next, 0, TAIL_CALL,
  POS(1349, 10),
  POS(1349, 10),
  POS(1349, 7),
  POS(1351, 7),
  POS(1351, 8),
  POS(1352, 7)
};

static FUNCTION_INFO i_lambda_160 = {
  t_lambda_160, NULL, 6, 0,
  {}
};

static TAB_NUM t_lambda_161[] = {
  2, // locals
  0, // parameters
  // resolve_variable(identifier).is_defined:
  var_resolve_variable, 1, var_1344_4_identifier, 1, LOCAL(1),
  // is_defined:
  var_is_defined, 1, LOCAL(1), 1, LOCAL(2),
  // resolve_variable(identifier).is_defined:
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1349, 31),
  POS(1349, 60),
  POS(1349, 31)
};

static FUNCTION_INFO i_lambda_161 = {
  t_lambda_161, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_162[] = {
  0, // locals
  0, // parameters
  // syntax_error "Variable is already defined" self
  var_syntax_error, 2, str_Variable_is_alre, var_1343_43_self, TAIL_CALL,
  POS(1350, 9)
};

static FUNCTION_INFO i_lambda_162 = {
  t_lambda_162, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_add_parameter_definition[] = {
  4, // locals
  1, // parameters
  LOCAL(3), // 1357_29_self
  // $name funky::name_of(self)
  var_funky__name_of, 1, LOCAL(3), 1, LOCAL(4),
  // !resolve_variable(name) mangle_local_definition(name self)
  var_mangle_local_definition, 2, LOCAL(4), LOCAL(3), 1, LOCAL(2),
  // resolve_variable(name) mangle_local_definition(name self)
  var_resolve_variable, 2, LOCAL(4), LOCAL(2), 1, var_resolve_variable,
  // next
  var_next, 0, TAIL_CALL,
  POS(1358, 3),
  POS(1359, 3),
  POS(1359, 4),
  POS(1360, 3),
  LOCAL(3),
  LOCAL(4)
};

static FUNCTION_INFO i_func_add_parameter_definition = {
  t_func_add_parameter_definition, NULL, 4, 2,
  {"1357_29_self\000", "1358_4_name\000"}
};

static TAB_NUM t_func_funky__mangle_local_definition[] = {
  4, // locals
  2, // parameters
  LOCAL(3), // 1362_35_identifier
  LOCAL(4), // 1362_46_definition
  // mangle_position(definition))_@(identifier)"
  var_mangle_position, 1, LOCAL(4), 1, LOCAL(1),
  // "@(mangle_position(definition))_@(identifier)"
  var_std__string, 3, LOCAL(1), string_2, LOCAL(3), 1, LOCAL(2),
  // -> "@(mangle_position(definition))_@(identifier)"
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1363, 9),
  POS(1363, 6),
  POS(1363, 3),
  LOCAL(4),
  LOCAL(3)
};

static FUNCTION_INFO i_func_funky__mangle_local_definition = {
  t_func_funky__mangle_local_definition, NULL, 3, 2,
  {"1362_46_definition\000", "1362_35_identifier\000"}
};

static TAB_NUM t_func_funky__mangle_position[] = {
  11, // locals
  1, // parameters
  LOCAL(7), // 1365_27_node
  // $source_group source_group_of(node)
  var_source_group_of, 1, LOCAL(7), 1, LOCAL(8),
  // $line_text second(source_group)
  var_second, 1, LOCAL(8), 1, LOCAL(9),
  // $line_no line_no_of(source_group)
  var_line_no_of, 1, LOCAL(8), 1, LOCAL(10),
  // first(source_group)
  var_first, 1, LOCAL(8), 1, LOCAL(1),
  // 
  var_std__plus, 2, num_1, LOCAL(1), 1, LOCAL(2),
  // length_of(line_text)-length_of(source_position_of(node))
  var_length_of, 1, LOCAL(9), 1, LOCAL(3),
  // source_position_of(node))
  var_source_position_of, 1, LOCAL(7), 1, LOCAL(4),
  // length_of(source_position_of(node))
  var_length_of, 1, LOCAL(4), 1, LOCAL(5),
  // length_of(line_text)-length_of(source_position_of(node))
  var_std__minus, 2, LOCAL(3), LOCAL(5), 1, LOCAL(6),
  // $column_no
  var_std__plus, 2, LOCAL(2), LOCAL(6), 1, LOCAL(11),
  // "@(line_no)_@(column_no)"
  var_std__string, 3, LOCAL(10), string_2, LOCAL(11), 1, LOCAL(1),
  // -> "@(line_no)_@(column_no)"
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1366, 3),
  POS(1367, 3),
  POS(1368, 3),
  POS(1372, 7),
  POS(1370, 6),
  POS(1373, 7),
  POS(1373, 38),
  POS(1373, 28),
  POS(1373, 7),
  POS(1369, 3),
  POS(1374, 6),
  POS(1374, 3),
  LOCAL(7),
  LOCAL(11),
  LOCAL(8),
  LOCAL(9),
  LOCAL(10)
};

static FUNCTION_INFO i_func_funky__mangle_position = {
  t_func_funky__mangle_position, NULL, 12, 5,
  {"1365_27_node\000", "1369_4_column_no\000", "1366_4_source_group\000", "1367_4_line_text\000", "1368_4_line_no\000"}
};

static int tuple_55_1_arguments[] = {
  -var_empty_list, -var_empty_list
};

static int key_value_pair_994_6_arguments[] = {
  -chr_46, -string_2
};

static int key_value_pair_995_6_arguments[] = {
  -chr_45, -string_2
};

static FUNKY_CONSTANT constants_table[] = {
  {FLT_TUPLE, 2, {.arguments = tuple_55_1_arguments}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_funky__simplify_statement}},
  {FLT_POSITIVE_INT64, 0, {.value = 0}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_funky_types__variable___simplify}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_funky_types__attribute_access___simplify}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_funky_types__dummy_definition___simplify}},
  {FLT_POSITIVE_INT64, 0, {.value = 1}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_funky_types__functor___simplify}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_1}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_2}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_simplify_extensions}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_3}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_ATTRIBUTE_ACCESS}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_4}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_5}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_6}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_7}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_8}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_9}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_10}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_IO_CALL}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_11}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_simplify_parameter}},
  {FLT_CHARACTER, 0, {.value = 95}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_12}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_13}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_funky_types__return___simplify}},
  {FLT_STRING_8, 6, {.str_8 = "assign"}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_funky_types__redefinition___simplify}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_14}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_15}},
  {FLT_NEGATIVE_INT64, 0, {.value = 2}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_16}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_FUNCTION_CALL}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_17}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_18}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_2_ATTRIBUTE_ACCESS}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_19}},
  {FLT_NEGATIVE_INT64, 0, {.value = 1}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_20}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_2_FUNCTION_CALL}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_3_ATTRIBUTE_ACCESS}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_21}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_funky_types__update___simplify}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_22}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_23}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_24}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_3_FUNCTION_CALL}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_25}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_26}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_4_ATTRIBUTE_ACCESS}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_27}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_28}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_4_FUNCTION_CALL}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_5_ATTRIBUTE_ACCESS}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_29}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_funky_types__definition___simplify}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_funky_types__parenthesed_expression___simplify}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_30}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_31}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_funky_types__pair___simplify}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_argument_is_a_list}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_32}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_33}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_34}},
  {FLT_POSITIVE_INT64, 0, {.value = 2}},
  {FLT_STRING_8, 18, {.str_8 = "too many arguments"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_35}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_simplify_argument}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_simplify_inline_pair}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_resolve_identifier}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_36}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_37}},
  {FLT_CHARACTER, 0, {.value = 58}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_namespace_is_not_empty}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_true_namespace_is_defined}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_check}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_38}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_39}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_version_is_defined}},
  {FLT_STRING_8, 1, {.str_8 = "-"}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_resolve}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_40}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_41}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_funky_types__expression___simplify}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_operator_is_defined}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_42}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_funky_types__negation___simplify}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_43}},
  {FLT_CHARACTER, 0, {.value = 45}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_44}},
  {FLT_POSITIVE_INT64, 0, {.value = 7}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_45}},
  {FLT_STRING_8, 6, {.str_8 = "minus_"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_46}},
  {FLT_STRING_8, 6, {.str_8 = "negate"}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_binop}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_COMMA}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_sequence_constructor}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_47}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_48}},
  {FLT_STRING_8, 8, {.str_8 = "sequence"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_AND}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_49}},
  {FLT_STRING_8, 3, {.str_8 = "and"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_OR}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_50}},
  {FLT_STRING_8, 2, {.str_8 = "or"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_51}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_PLUS}},
  {FLT_STRING_8, 4, {.str_8 = "plus"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_MINUS}},
  {FLT_STRING_8, 5, {.str_8 = "minus"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_TIMES}},
  {FLT_STRING_8, 5, {.str_8 = "times"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_OVER}},
  {FLT_STRING_8, 4, {.str_8 = "over"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_EQUAL}},
  {FLT_STRING_8, 5, {.str_8 = "equal"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_NOT_EQUAL}},
  {FLT_STRING_8, 3, {.str_8 = "not"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_LESS_THAN}},
  {FLT_STRING_8, 4, {.str_8 = "less"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_GREATER_THAN}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_LESS_EQUAL}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_GREATER_EQUAL}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_RANGE}},
  {FLT_STRING_8, 11, {.str_8 = "value_range"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_KEY_VALUE}},
  {FLT_STRING_8, 14, {.str_8 = "key_value_pair"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_SHIFT_LEFT}},
  {FLT_STRING_8, 10, {.str_8 = "shift_left"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_SHIFT_RIGHT}},
  {FLT_STRING_8, 11, {.str_8 = "shift_right"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_BIT_AND}},
  {FLT_STRING_8, 7, {.str_8 = "bit_and"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_BIT_OR}},
  {FLT_STRING_8, 6, {.str_8 = "bit_or"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_BIT_XOR}},
  {FLT_STRING_8, 7, {.str_8 = "bit_xor"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_NAMED_OPERATOR}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_52}},
  {FLT_STRING_8, 9, {.str_8 = "operation"}},
  {FLT_POSITIVE_INT64, 0, {.value = 9}},
  {FLT_STRING_8, 4, {.str_8 = "left"}},
  {FLT_STRING_8, 5, {.str_8 = "right"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_2_operator_is_defined}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_53}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_function_call}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_function_call_from_list}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_simplify_return}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_funky_types__inline_statement___simplify}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_funky_types__multiline_plus___simplify}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_funky_types__multiline_minus___simplify}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_funky_types__multiline_minus_with_remark___simplify}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_funky_types__multiline_times___simplify}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_funky_types__multiline_over___simplify}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_funky_types__multiline_over_with_remark___simplify}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_funky_types__multiline_shift_left___simplify}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_funky_types__multiline_shift_right___simplify}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_funky_types__multiline_equal___simplify}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_funky_types__multiline_not_equal___simplify}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_funky_types__multiline_less_equal___simplify}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_funky_types__multiline_less_than___simplify}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_funky_types__multiline_greater_equal___simplify}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_funky_types__multiline_greater_than___simplify}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_funky_types__multiline_and___simplify}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_funky_types__multiline_or___simplify}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_funky_types__multiline_bit_and___simplify}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_funky_types__multiline_bit_and_with_remark___simplify}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_funky_types__multiline_bit_or___simplify}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_funky_types__multiline_bit_xor___simplify}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_funky_types__multiline_assign___simplify}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_simplify_multiline_operator}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_filterarguments_ofself}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_do_delay}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_54}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_55}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_56}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_loop}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_57}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_58}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_59}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_do_negate}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_60}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_push_statement}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_funky_types__inline_body___simplify}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_funky_types__body___simplify}},
  {FLT_STRING_8, 5, {.str_8 = "func_"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_61}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_62}},
  {FLT_STRING_8, 18, {.str_8 = "Missing statements"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_63}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_64}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_65}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_66}},
  {FLT_STRING_8, 21, {.str_8 = "unexpected statements"}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_simplify_statements}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_67}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_check_statements}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_68}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_MULTILINE_REMARK}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_69}},
  {FLT_STRING_8, 28, {.str_8 = "Closing parenthesis expected"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_OPEN_PARAMETERS}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_70}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_71}},
  {FLT_STRING_8, 30, {.str_8 = "Unexpected opening parenthesis"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_CLOSE_PARAMETERS}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_72}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_73}},
  {FLT_STRING_8, 30, {.str_8 = "Unexpected closing parenthesis"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_74}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_75}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_76}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_77}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_78}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_79}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_funky_types__statement___simplify}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_arguments_ofself}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_FUNCTOR}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_RETURN}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_80}},
  {FLT_STRING_8, 35, {.str_8 = "Slot assignment in return statement"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_81}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_82}},
  {FLT_STRING_8, 30, {.str_8 = "Missing argument in assignment"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_83}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_84}},
  {FLT_STRING_8, 32, {.str_8 = "Too many arguments in assignment"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_is_a_slot_assigment}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_85}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_86}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_87}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_88}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_89}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_90}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_91}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_simplify_head_and_arguments}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_92}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_93}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_94}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_95}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_96}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_97}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_98}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_is_an_assignment}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_99}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_100}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_is_a_slot_definition}},
  {FLT_STRING_8, 6, {.str_8 = "const_"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_101}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_check_trailing_statements}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_102}},
  {FLT_STRING_8, 11, {.str_8 = "std::assign"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_103}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_process_trailing_statements}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_104}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_105}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_2_FUNCTOR}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_106}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_INLINE_ATTRIBUTE_VALUE_PAIR}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_107}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_108}},
  {FLT_STRING_8, 38, {.str_8 = "TEMP NOT FOUND IN TRAILING STATEMENT!\012"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_109}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_110}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_2_is_a_slot_assigment}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_111}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_112}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_113}},
  {FLT_STRING_8, 44, {.str_8 = "More than one destination in slot assignment"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_114}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_115}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_check_that_all_arguments_are_inputs}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_116}},
  {FLT_STRING_8, 26, {.str_8 = "Unexpected output argument"}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_check_that_all_arguments_are_slot_definitions}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_117}},
  {FLT_STRING_8, 36, {.str_8 = "Argument should be a slot definition"}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_is_not_a_slot_assigment}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_check_that_all_arguments_are_slot_assignments}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_arguments}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_118}},
  {FLT_STRING_8, 36, {.str_8 = "Argument should be a slot assignment"}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_is_a_pair_or_type_function}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_119}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_120}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_funky_types__numeric_literal___simplify}},
  {FLT_CHARACTER, 0, {.value = 39}},
  {FLT_CHARACTER, 0, {.value = 46}},
  {FLT_STRING_8, 1, {.str_8 = "_"}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_994_6_arguments}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_995_6_arguments}},
  {FLT_STRING_8, 4, {.str_8 = "num_"}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_funky_types__character_literal___simplify}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_funky_types__numeric_character_literal___simplify}},
  {FLT_STRING_8, 4, {.str_8 = "chr_"}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_funky_types__named_character_literal___simplify}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_121}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_122}},
  {FLT_STRING_8, 22, {.str_8 = "Invalid character name"}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_funky_types__at_character_literal___simplify}},
  {FLT_STRING_8, 2, {.str_8 = "64"}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_create_numeric_character_literal}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_funky_types__unique___simplify}},
  {FLT_CHARACTER, 0, {.value = 32}},
  {FLT_STRING_8, 4, {.str_8 = "uni_"}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_funky_types__string_literal___simplify}},
  {FLT_STRING_8, 0, {.str_8 = ""}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_123}},
  {FLT_STRING_8, 8, {.str_8 = "string0_"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_124}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_125}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_CHARACTER_SEQUENCE}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_126}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_127}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_128}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_NUMERIC_CHARACTER}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_NAMED_CHARACTER}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_129}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_NEWLINE}},
  {FLT_CHARACTER, 0, {.value = 10}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_AT_CHARACTER}},
  {FLT_CHARACTER, 0, {.value = 64}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_ESCAPE_EXPRESSION}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_TAGGED_EMPTY_CHARACTER}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_130}},
  {FLT_STRING_8, 23, {.str_8 = "node_type_of(component)"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_131}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_132}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_133}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_134}},
  {FLT_STRING_8, 11, {.str_8 = "std::string"}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_add_characters}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_135}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_136}},
  {FLT_STRING_8, 6, {.str_8 = "string"}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__list___simplify}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_137}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_138}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_create_functor}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std}},
  {FLT_STRING_8, 5, {.str_8 = "std::"}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_assign_attributes}},
  {FLT_STRING_8, 18, {.str_8 = "_assign_attributes"}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_temporary}},
  {FLT_STRING_8, 6, {.str_8 = "_temp_"}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_redefine_temporary}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_update_temporary}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_create_statement}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_arguments_is_not_empty}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_139}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_140}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_141}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_142}},
  {FLT_STRING_8, 58, {.str_8 = "assigning methods or type functions is no longer supported"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_143}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_expand_backquotes}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_144}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_145}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_146}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_147}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_resolve_backquoted}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_exctract_characters}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_148}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_nl}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_149}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_150}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_151}},
  {FLT_CHARACTER, 0, {.value = 34}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_quot}},
  {FLT_CHARACTER, 0, {.value = 40}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_152}},
  {FLT_CHARACTER, 0, {.value = 41}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_153}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_funky_types__statement_list___append}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_funky_types__statement_list___push_leading_statement}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_funky_types__statement_list___push_trailing_statement}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_collect_parameter_definitions}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_154}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_collect_local_definitions}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_155}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_funky_types__node___add_definitions}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_funky_types__statement___add_definitions}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_156}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_157}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_158}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_159}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_funky_types__node___add_definition}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_funky_types__definition___add_definition}},
  {FLT_STRING_8, 2, {.str_8 = "::"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_160}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_161}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_162}},
  {FLT_STRING_8, 27, {.str_8 = "Variable is already defined"}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_add_parameter_definition}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_funky__mangle_local_definition}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_funky__mangle_position}}
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

static ATTRIBUTE_DEFINITION funky_types__update__attributes[] = {
  {-var_is_a_dummy_definition, -var_false},
  {var_simplify, -func_funky_types__update___simplify},
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

static ATTRIBUTE_DEFINITION funky_types__attribute_access__attributes[] = {
  {-var_kind_of, -var_undefined},
  {var_simplify, -func_funky_types__attribute_access___simplify}
};

static ATTRIBUTE_DEFINITION funky_types__statement__attributes[] = {
  {-var_is_a_definition, -var_false},
  {var_simplify, -func_funky_types__statement___simplify},
  {var_add_definitions, -func_funky_types__statement___add_definitions}
};

static ATTRIBUTE_DEFINITION funky_types__variable__attributes[] = {
  {var_simplify, -func_funky_types__variable___simplify}
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
    FOT_UNKNOWN, 0, 3,
    "update\000funky_types", funky_types__update__attributes,
    {.position = POS(43, 1)}
  },
  {
    FOT_UNKNOWN, 0, 7,
    "node\000funky_types", funky_types__node__attributes,
    {.position = POS(45, 1)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "is_an_io_call\000", NULL,
    {.position = POS(45, 20)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "kind_of\000", NULL,
    {.position = POS(46, 23)}
  },
  {
    FOT_UNKNOWN, 0, 2,
    "pair\000funky_types", funky_types__pair__attributes,
    {.position = POS(48, 1)}
  },
  {
    FOT_UNKNOWN, 0, 3,
    "inline_attribute_value_pair\000funky_types", funky_types__inline_attribute_value_pair__attributes,
    {.position = POS(49, 1)}
  },
  {
    FOT_UNKNOWN, 0, 3,
    "inline_method_value_pair\000funky_types", funky_types__inline_method_value_pair__attributes,
    {.position = POS(50, 1)}
  },
  {
    FOT_UNKNOWN, 0, 2,
    "attribute_access\000funky_types", funky_types__attribute_access__attributes,
    {.position = POS(51, 1)}
  },
  {
    FOT_UNKNOWN, 0, 3,
    "statement\000funky_types", funky_types__statement__attributes,
    {.position = POS(53, 1)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "is_a_definition\000", NULL,
    {.position = POS(53, 25)}
  },
  {
    FOT_INITIALIZED, 0, 3,
    "statement_list\000funky_types", funky_types__statement_list__attributes,
    {.const_idx = -tuple_55_1}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_list\000", NULL,
    {.position = POS(55, 36)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "tuple\000", NULL,
    {.position = POS(55, 30)}
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
    {.position = POS(59, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "push\000", NULL,
    {.position = POS(61, 10)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "append\000", NULL,
    {.position = POS(61, 3)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "variable\000funky_types", funky_types__variable__attributes,
    {.position = POS(63, 1)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_statements\000", NULL,
    {.position = POS(65, 35)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "dummy_definition\000funky_types", funky_types__dummy_definition__attributes,
    {.position = POS(71, 1)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000std", NULL,
    {.position = POS(73, 24)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "true\000", NULL,
    {.position = POS(73, 63)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "77_34_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "77_39_temp_no\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "79_4_extensions\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "extensions_of\000", NULL,
    {.position = POS(79, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_empty\000", NULL,
    {.position = POS(81, 16)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if\000", NULL,
    {.position = POS(80, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "86_24_expression\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "86_46_temp_no\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "87_34_statements\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "89_8_extension\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "90_8_extension_node_type\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "node_type_of\000", NULL,
    {.position = POS(90, 28)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "FUNCTION_CALL\000", NULL,
    {.position = POS(100, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "REMARK_AND_MULTILINE_FUNCTION_CALL\000", NULL,
    {.position = POS(100, 24)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "sequence\000std", NULL,
    {.position = POS(100, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "ATTRIBUTE_ACCESS\000", NULL,
    {.position = POS(92, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "inc\000", NULL,
    {.position = POS(93, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "list\000", NULL,
    {.position = POS(97, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "next\000", NULL,
    {.position = POS(99, 11)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "101_12_arguments\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "arguments_of\000", NULL,
    {.position = POS(101, 22)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "length_of\000", NULL,
    {.position = POS(103, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "equal\000std", NULL,
    {.position = POS(103, 13)}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "is_a_pair\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "and\000std", NULL,
    {.position = POS(103, 13)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "115_23_remark_arguments\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "is_a_remark\000", NULL,
    {.position = POS(115, 51)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "filter\000", NULL,
    {.position = POS(115, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_not_empty\000", NULL,
    {.position = POS(121, 38)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "or\000std", NULL,
    {.position = POS(119, 21)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "IO_CALL\000", NULL,
    {.position = POS(131, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "case\000", NULL,
    {.position = POS(91, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "for_each\000", NULL,
    {.position = POS(88, 3)}
  },
  {
    FOT_UNKNOWN, 0, 2,
    "parameter\000funky_types", funky_types__parameter__attributes,
    {.position = POS(136, 1)}
  },
  {
    FOT_UNKNOWN, 0, 2,
    "inline_parameter\000funky_types", funky_types__inline_parameter__attributes,
    {.position = POS(137, 1)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "139_23_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "139_28_temp_no\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "option_of\000", NULL,
    {.position = POS(140, 18)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "140_38_statements\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "name_of\000funky", NULL,
    {.position = POS(141, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "resolve_variable\000", NULL,
    {.position = POS(150, 24)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "return\000funky_types", funky_types__return__attributes,
    {.position = POS(154, 1)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "157_39_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "157_44_temp_no\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "159_4_extensions\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "165_8_result_temp_no\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "166_8_base\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "167_8_bases\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "168_38_statements\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "first\000", NULL,
    {.position = POS(169, 70)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "typed_tuple\000", NULL,
    {.position = POS(169, 19)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "range\000", NULL,
    {.position = POS(170, 16)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "171_12_extension\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "175_18_remark_arguments\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "175_36_arguments\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "198_12_result\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "202_16_extension\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "pop\000", NULL,
    {.position = POS(203, 15)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "identifier_of\000", NULL,
    {.position = POS(206, 34)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "source_group_of\000", NULL,
    {.position = POS(209, 36)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "source_position_of\000", NULL,
    {.position = POS(210, 39)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "204_16_destination\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "key_of\000funky", NULL,
    {.position = POS(229, 42)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "expression_of\000", NULL,
    {.position = POS(230, 28)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "from_to_by\000", NULL,
    {.position = POS(200, 11)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "236_33_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "236_38_temp_no\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "238_4_extensions\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "243_8_base\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "244_8_bases\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "245_38_statements\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "247_12_extension\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "251_18_remark_arguments\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "251_36_arguments\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "274_12_result\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "279_16_extension\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "281_16_destination\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 1,
    "parenthesed_expression\000funky_types", funky_types__parenthesed_expression__attributes,
    {.position = POS(317, 1)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "317_54_temp_no\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "318_33_expression\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "318_54_statements\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "319_4_calls\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "calls_of\000", NULL,
    {.position = POS(319, 10)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "327_31_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "327_36_temp_no\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "329_4_argument\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "argument_of\000", NULL,
    {.position = POS(329, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_a_list\000", NULL,
    {.position = POS(331, 14)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not\000", NULL,
    {.position = POS(332, 39)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "syntax_error\000", NULL,
    {.position = POS(338, 11)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "argument_of\000funky", NULL,
    {.position = POS(0, 0)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "expression_of\000funky", NULL,
    {.position = POS(351, 18)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "354_23_node\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "BUILTIN\000", NULL,
    {.position = POS(356, 22)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "359_8_identifier\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "360_8_namespace\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "before\000", NULL,
    {.position = POS(360, 18)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "363_12_true_namespace\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "namespace_aliases\000", NULL,
    {.position = POS(363, 27)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_defined\000", NULL,
    {.position = POS(365, 28)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "from\000", NULL,
    {.position = POS(367, 44)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "DEFINITION\000", NULL,
    {.position = POS(375, 57)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not\000std", NULL,
    {.position = POS(375, 35)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "376_14_version\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "namespace_versions\000", NULL,
    {.position = POS(376, 22)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "386_10_resolved_identifier\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "LOCAL\000", NULL,
    {.position = POS(392, 24)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "EXTERN\000", NULL,
    {.position = POS(393, 28)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "expression\000funky_types", funky_types__expression__attributes,
    {.position = POS(395, 1)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "395_37_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "395_42_temp_no\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "396_4_operator\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "operator_of\000", NULL,
    {.position = POS(396, 13)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "397_13_expression\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "397_54_statements\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 1,
    "negation\000funky_types", funky_types__negation__attributes,
    {.position = POS(403, 1)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "403_35_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "403_40_temp_no\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "404_13_expression\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "404_54_statements\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "NUMERIC_LITERAL\000", NULL,
    {.position = POS(406, 33)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "407_8_digits\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "digits_of\000", NULL,
    {.position = POS(407, 15)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "408_8_key\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "put\000", NULL,
    {.position = POS(412, 12)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "429_10_left\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "429_15_operator\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "429_24_temp_no\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "429_32_statements\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "430_4_operation\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "431_4_right\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "COMMA\000", NULL,
    {.position = POS(433, 5)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "436_31_sequence\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "436_40_rest\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "SEQUENCE_EXPRESSION\000", NULL,
    {.position = POS(438, 33)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "AND\000", NULL,
    {.position = POS(448, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "update_if\000", NULL,
    {.position = POS(449, 7)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "return_expression\000funky_types", funky_types__return_expression__attributes,
    {.position = POS(451, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "OR\000", NULL,
    {.position = POS(457, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "PLUS\000", NULL,
    {.position = POS(470, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "MINUS\000", NULL,
    {.position = POS(471, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "TIMES\000", NULL,
    {.position = POS(472, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "OVER\000", NULL,
    {.position = POS(473, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "EQUAL\000", NULL,
    {.position = POS(474, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "NOT_EQUAL\000", NULL,
    {.position = POS(475, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "LESS_THAN\000", NULL,
    {.position = POS(478, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "GREATER_THAN\000", NULL,
    {.position = POS(479, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "LESS_EQUAL\000", NULL,
    {.position = POS(480, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "GREATER_EQUAL\000", NULL,
    {.position = POS(483, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "RANGE\000", NULL,
    {.position = POS(486, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "KEY_VALUE\000", NULL,
    {.position = POS(487, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "SHIFT_LEFT\000", NULL,
    {.position = POS(488, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "SHIFT_RIGHT\000", NULL,
    {.position = POS(489, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "BIT_AND\000", NULL,
    {.position = POS(490, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "BIT_OR\000", NULL,
    {.position = POS(491, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "BIT_XOR\000", NULL,
    {.position = POS(492, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "NAMED_OPERATOR\000", NULL,
    {.position = POS(493, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "dump\000debug", NULL,
    {.position = POS(508, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "exit\000debug", NULL,
    {.position = POS(511, 11)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "inline_return\000funky_types", funky_types__inline_return__attributes,
    {.position = POS(534, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "body\000funky_types", funky_types__body__attributes,
    {.position = POS(538, 5)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "statements_of\000", NULL,
    {.position = POS(541, 8)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "inline_statement\000funky_types", funky_types__inline_statement__attributes,
    {.position = POS(550, 1)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "head_of\000", NULL,
    {.position = POS(555, 16)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "multiline_plus\000funky_types", funky_types__multiline_plus__attributes,
    {.position = POS(559, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "multiline_minus\000funky_types", funky_types__multiline_minus__attributes,
    {.position = POS(562, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "multiline_minus_with_remark\000funky_types", funky_types__multiline_minus_with_remark__attributes,
    {.position = POS(565, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "multiline_times\000funky_types", funky_types__multiline_times__attributes,
    {.position = POS(568, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "multiline_over\000funky_types", funky_types__multiline_over__attributes,
    {.position = POS(571, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "multiline_over_with_remark\000funky_types", funky_types__multiline_over_with_remark__attributes,
    {.position = POS(574, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "multiline_shift_left\000funky_types", funky_types__multiline_shift_left__attributes,
    {.position = POS(577, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "multiline_shift_right\000funky_types", funky_types__multiline_shift_right__attributes,
    {.position = POS(580, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "multiline_equal\000funky_types", funky_types__multiline_equal__attributes,
    {.position = POS(583, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "multiline_not_equal\000funky_types", funky_types__multiline_not_equal__attributes,
    {.position = POS(586, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "multiline_less_equal\000funky_types", funky_types__multiline_less_equal__attributes,
    {.position = POS(589, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "multiline_less_than\000funky_types", funky_types__multiline_less_than__attributes,
    {.position = POS(592, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "multiline_greater_equal\000funky_types", funky_types__multiline_greater_equal__attributes,
    {.position = POS(595, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "multiline_greater_than\000funky_types", funky_types__multiline_greater_than__attributes,
    {.position = POS(598, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "multiline_and\000funky_types", funky_types__multiline_and__attributes,
    {.position = POS(601, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "multiline_or\000funky_types", funky_types__multiline_or__attributes,
    {.position = POS(604, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "multiline_bit_and\000funky_types", funky_types__multiline_bit_and__attributes,
    {.position = POS(607, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "multiline_bit_and_with_remark\000funky_types", funky_types__multiline_bit_and_with_remark__attributes,
    {.position = POS(610, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "multiline_bit_or\000funky_types", funky_types__multiline_bit_or__attributes,
    {.position = POS(613, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "multiline_bit_xor\000funky_types", funky_types__multiline_bit_xor__attributes,
    {.position = POS(616, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "multiline_assign\000funky_types", funky_types__multiline_assign__attributes,
    {.position = POS(619, 1)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "624_5_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "625_5_temp_no\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "627_5_do_negate\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "628_5_do_swap\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "631_4_head\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "REMARK\000", NULL,
    {.position = POS(633, 72)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "632_4_arguments\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "634_26_left\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "634_41_statements\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "635_4_right\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "636_4_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "639_8_rest\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "653_8_idx\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "less\000std", NULL,
    {.position = POS(660, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "loop\000", NULL,
    {.position = POS(654, 7)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "inline_body\000funky_types", funky_types__inline_body__attributes,
    {.position = POS(690, 1)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "parameters_of\000", NULL,
    {.position = POS(693, 22)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "statement_of\000", NULL,
    {.position = POS(694, 21)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "700_31_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "700_36_temp_no\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "on_top_level\000", NULL,
    {.position = POS(701, 4)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "mangle_position\000", NULL,
    {.position = POS(702, 31)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "string\000std", NULL,
    {.position = POS(702, 23)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "706_4_statement\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "707_4_statements\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_undefined\000", NULL,
    {.position = POS(708, 16)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "on\000", NULL,
    {.position = POS(708, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "all_of\000", NULL,
    {.position = POS(713, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "map_reduce\000", NULL,
    {.position = POS(723, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "any_of\000", NULL,
    {.position = POS(730, 25)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "733_21_body\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "734_4_statements\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "735_4_parameter_state\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "736_4_parameters\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "737_4_new_statements\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "739_8_idx\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "739_12_statement\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "MULTILINE_REMARK\000", NULL,
    {.position = POS(741, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "OPEN_PARAMETERS\000", NULL,
    {.position = POS(745, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "parameter_of\000", NULL,
    {.position = POS(749, 27)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "CLOSE_PARAMETERS\000", NULL,
    {.position = POS(753, 9)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "779_36_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "779_41_temp_no\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "780_4_head\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "781_4_original_head\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "REDEFINITION\000", NULL,
    {.position = POS(782, 53)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "782_4_is_a_redefinition\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "783_4_arguments\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "786_4_is_a_slot_assigment\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "FUNCTOR\000", NULL,
    {.position = POS(788, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "RETURN\000", NULL,
    {.position = POS(790, 5)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "817_34_is_an_assignment\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "818_30_result_statements\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "819_6_new_arguments\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "821_10_item\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "BACKQUOTED\000", NULL,
    {.position = POS(825, 33)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "840_32_leading_statements\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "840_52_trailing_statements\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "841_14_is_a_slot_definition\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "848_18_last_statement\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "line_no_of\000", NULL,
    {.position = POS(851, 30)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "CONSTANT_COMPOUND\000", NULL,
    {.position = POS(856, 34)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "892_16_temp_name\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "893_16_value\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "895_20_stmt_idx\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "895_29_trailing_statement\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "897_24_arg_idx\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "897_32_argument\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "INLINE_ATTRIBUTE_VALUE_PAIR\000", NULL,
    {.position = POS(906, 25)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "print\000debug", NULL,
    {.position = POS(917, 19)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "932_25_outputs\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "is_an_output\000", NULL,
    {.position = POS(932, 44)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "962_6_argument\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "find_first\000", NULL,
    {.position = POS(962, 15)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "968_6_argument\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "ATTRIBUTE_VALUE_PAIR\000", NULL,
    {.position = POS(977, 60)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "975_6_argument\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "982_4_node_type\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "METHOD_VALUE_PAIR\000", NULL,
    {.position = POS(986, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "TYPE_FUNCTION\000", NULL,
    {.position = POS(987, 20)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "numeric_literal\000funky_types", funky_types__numeric_literal__attributes,
    {.position = POS(989, 1)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "delete_all\000", NULL,
    {.position = POS(990, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "to_string\000", NULL,
    {.position = POS(992, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "key_value_pair\000std", NULL,
    {.position = POS(994, 6)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "replace_all\000", NULL,
    {.position = POS(993, 3)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "character_literal\000funky_types", funky_types__character_literal__attributes,
    {.position = POS(1001, 1)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "character_of\000", NULL,
    {.position = POS(1004, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "to_integer\000", NULL,
    {.position = POS(1004, 29)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "numeric_character_literal\000funky_types", funky_types__numeric_character_literal__attributes,
    {.position = POS(1009, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "named_character_literal\000funky_types", funky_types__named_character_literal__attributes,
    {.position = POS(1018, 1)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1018_50_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1018_55_temp_no\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1019_4_chr\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "character_from_name\000", NULL,
    {.position = POS(1019, 8)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "at_character_literal\000funky_types", funky_types__at_character_literal__attributes,
    {.position = POS(1029, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "unique\000funky_types", funky_types__unique__attributes,
    {.position = POS(1043, 1)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "line_text_of\000", NULL,
    {.position = POS(1045, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "truncate_from\000", NULL,
    {.position = POS(1045, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "mangle_identifier\000", NULL,
    {.position = POS(1049, 29)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "string_literal\000funky_types", funky_types__string_literal__attributes,
    {.position = POS(1053, 1)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1053_41_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1053_46_temp_no\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1054_4_arguments\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1055_4_characters\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1056_4_statements\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1057_4_components\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "components_of\000", NULL,
    {.position = POS(1057, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "character_sequence\000funky_types", NULL,
    {.position = POS(1061, 7)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "characters_of\000", NULL,
    {.position = POS(1062, 10)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1070_12_idx\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1070_16_component\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "CHARACTER_SEQUENCE\000", NULL,
    {.position = POS(1072, 13)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1073_16_component_characters\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "minus\000std", NULL,
    {.position = POS(1078, 45)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "trim_left\000", NULL,
    {.position = POS(1079, 22)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "NUMERIC_CHARACTER\000", NULL,
    {.position = POS(1082, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "character\000", NULL,
    {.position = POS(1083, 32)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "NAMED_CHARACTER\000", NULL,
    {.position = POS(1085, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "NEWLINE\000", NULL,
    {.position = POS(1091, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "AT_CHARACTER\000", NULL,
    {.position = POS(1094, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "ESCAPE_EXPRESSION\000", NULL,
    {.position = POS(1097, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "TAGGED_EMPTY_CHARACTER\000", NULL,
    {.position = POS(1104, 13)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "list\000std_types", std_types__list__attributes,
    {.position = POS(1150, 1)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1150_34_temp_no\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1151_4_statements\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1152_4_simplified_nodes\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "TEMPORARY\000", NULL,
    {.position = POS(1193, 16)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1217_21_head\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1217_26_arguments\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1220_8_node_type\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1247_4_expanded\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1249_8_argument\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1269_26_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1270_6_level\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1271_6_within_string\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1273_10_idx\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "dec\000", NULL,
    {.position = POS(1288, 13)}
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
    "1324_4_head\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1325_4_arguments\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1343_43_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1344_4_identifier\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "contains\000", NULL,
    {.position = POS(1346, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "allow_hidden\000", NULL,
    {.position = POS(1349, 14)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "mangle_local_definition\000", NULL,
    {.position = POS(1351, 37)}
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
    {.position = POS(1367, 14)}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "is_a_remark\000funky", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "remark\000funky_types", funky_types__remark__attributes,
    {.position = POS(1381, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "multiline_remark\000funky_types", funky_types__multiline_remark__attributes,
    {.position = POS(1382, 1)}
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
    {.position = POS(1395, 20)}
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
  .feature_flags = FEAT_POSITIONS|FEAT_FUNCTION_INFO,
  .marker = 0,
  0, // number of required modules
  0, // number of defined namespaces
  2, // number of used namespaces
  399, // number of constants
  380, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  constants_table,
  variables_table,
};
