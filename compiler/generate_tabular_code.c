#include <stddef.h>
#include <stdint.h>

#include "runtime/common.h"
#include "runtime/builtins.h"
#include "runtime/fko.h"
#include "runtime/memory.h"

enum {
  func_funky__generate_tabular_code = -1,
  lambda_1 = -2,
  lambda_2 = -3,
  lambda_3 = -4,
  num_1 = -5,
  lambda_4 = -6,
  lambda_5 = -7,
  lambda_6 = -8,
  lambda_7 = -9,
  lambda_8 = -10,
  str_Main_module_does = -11,
  lambda_9 = -12,
  num_0 = -13,
  lambda_10 = -14,
  lambda_countvariables = -15,
  lambda_11 = -16,
  str___constants_tabl = -17,
  lambda_12 = -18,
  str___NULL__no_const = -19,
  lambda_13 = -20,
  str___variables_tabl = -21,
  lambda_14 = -22,
  str___NULL__no_varia = -23,
  str_FEAT_POSITIONS = -24,
  lambda_15 = -25,
  lambda_feature_flags = -26,
  str_FEAT_INITIALIZER = -27,
  str_include_stddefhi = -28,
  string_1 = -29,
  str_FUNKY_MODULE_mod = -30,
  string_2 = -31,
  str___module_name = -32,
  str___module_filenam = -33,
  str___marker = -34,
  str___number_of_requ = -35,
  str___number_of_defi = -36,
  str___number_of_used = -37,
  str___number_of_cons = -38,
  str___number_of_vari = -39,
  string_3 = -40,
  str___used_namespace = -41,
  string_4 = -42,
  lambda_16 = -43,
  str_int_mainint_argc = -44,
  string_5 = -45,
  lambda_17 = -46,
  string_6 = -47,
  func_require = -48,
  lambda_18 = -49,
  lambda_19 = -50,
  lambda_20 = -51,
  string_7 = -52,
  lambda_21 = -53,
  chr_47 = -54,
  minus_num_1 = -55,
  str__require = -56,
  func_constants_enum = -57,
  lambda_22 = -58,
  lambda_23 = -59,
  str_enum = -60,
  lambda_24 = -61,
  string_8 = -62,
  string_9 = -63,
  string_10 = -64,
  lambda_25 = -65,
  minus_num_3 = -66,
  func_compound_constants = -67,
  lambda_26 = -68,
  lambda_27 = -69,
  func_constants_table = -70,
  lambda_28 = -71,
  lambda_29 = -72,
  lambda_30 = -73,
  str_static_FUNKY_CON = -74,
  lambda_31 = -75,
  lambda_32 = -76,
  lambda_33 = -77,
  lambda_34 = -78,
  lambda_35 = -79,
  lambda_36 = -80,
  str___FLT_FUNCTION = -81,
  func_variables_enum = -82,
  lambda_37 = -83,
  lambda_38 = -84,
  lambda_39 = -85,
  string_11 = -86,
  chr_95 = -87,
  string_12 = -88,
  key_value_pair_212_1 = -89,
  str___var = -90,
  string_13 = -91,
  lambda_40 = -92,
  lambda_41 = -93,
  str_enum___var__STAR = -94,
  str___var__END = -95,
  func_variables_table = -96,
  lambda_42 = -97,
  lambda_43 = -98,
  lambda_44 = -99,
  lambda_EXTERN = -100,
  str_UNKNOWN = -101,
  lambda_EXTERN_POLYMORPHIC = -102,
  str_UNKNOWN_POLYMORP = -103,
  lambda_45 = -104,
  str_POLYMORPHIC = -105,
  lambda_46 = -106,
  str_INITIALIZED = -107,
  lambda_DYNAMIC = -108,
  str_UNINITIALIZED = -109,
  lambda_DERIVED = -110,
  str_DERIVED = -111,
  lambda_47 = -112,
  str_kind = -113,
  string_14 = -114,
  lambda_48 = -115,
  str_____const_idx = -116,
  string_15 = -117,
  lambda_2_DERIVED = -118,
  string_16 = -119,
  string_17 = -120,
  string_18 = -121,
  lambda_ATTRIBUTE = -122,
  str_____has_a_setter = -123,
  lambda_ATTRIBUTE_WITH_SETTER = -124,
  str_____has_a_setter_2 = -125,
  lambda_49 = -126,
  str_____position = -127,
  lambda_50 = -128,
  str_______FOT = -129,
  string_19 = -130,
  string_20 = -131,
  string_21 = -132,
  string_22 = -133,
  lambda_51 = -134,
  lambda_52 = -135,
  str_static_FUNKY_VAR = -136,
  func_retrieve_base_and_method_count = -137,
  lambda_53 = -138,
  str___attributes = -139,
  lambda_54 = -140,
  str_NULL = -141,
  string_23 = -142,
  func_attributes_tables = -143,
  lambda_55 = -144,
  str_static_ATTRIBUTE = -145,
  str___attributes_2 = -146,
  lambda_56 = -147,
  string_24 = -148,
  string_25 = -149,
  string_26 = -150,
  lambda_57 = -151,
  lambda_58 = -152,
  func_required_modules_table = -153,
  lambda_59 = -154,
  lambda_60 = -155,
  lambda_required_modules = -156,
  str_extern_FUNKY_MOD = -157,
  string_27 = -158,
  lambda_2_required_modules = -159,
  str___module = -160,
  str_static_FUNKY_MOD = -161,
  func_mangled_name = -162,
  lambda_61 = -163,
  string_28 = -164,
  key_value_pair_348_21 = -165,
  func_reference_required_modules = -166,
  lambda_62 = -167,
  str_NULL__required_m = -168,
  lambda_63 = -169,
  str_required_modules = -170,
  func_defined_namespaces_table = -171,
  lambda_64 = -172,
  lambda_65 = -173,
  lambda_defined_namespaces = -174,
  chr_45 = -175,
  string_29 = -176,
  string_30 = -177,
  str_static_FUNKY_NAM = -178,
  func_reference_defined_namespaces = -179,
  lambda_66 = -180,
  str_NULL__defined_na = -181,
  lambda_67 = -182,
  str_defined_namespac = -183,
  func_used_namespaces_table = -184,
  lambda_used_namespaces = -185,
  str_static_FUNKY_NAM_2 = -186,
  func_tabular_functions = -187,
  lambda_68 = -188,
  lambda_69 = -189,
  lambda_70 = -190,
  lambda_71 = -191,
  lambda_72 = -192,
  lambda_73 = -193,
  lambda_74 = -194,
  lambda_75 = -195,
  lambda_76 = -196,
  str_module_entry = -197,
  func_tabular_function = -198,
  lambda_77 = -199,
  lambda_78 = -200,
  lambda_79 = -201,
  lambda_80 = -202,
  lambda_81 = -203,
  lambda_82 = -204,
  lambda_83 = -205,
  lambda_84 = -206,
  lambda_85 = -207,
  lambda_86 = -208,
  func_check_for_locals = -209,
  lambda_87 = -210,
  lambda_88 = -211,
  lambda_89 = -212,
  lambda_90 = -213,
  lambda_91 = -214,
  lambda_92 = -215,
  lambda_93 = -216,
  lambda_94 = -217,
  lambda_95 = -218,
  lambda_96 = -219,
  lambda_map_reducestatements = -220,
  str_static_TAB_NUM_t = -221,
  string_31 = -222,
  str___locals = -223,
  func_add_parameters = -224,
  lambda_any_ofparameters = -225,
  lambda_97 = -226,
  string_32 = -227,
  str___parameters = -228,
  lambda_98 = -229,
  func_add_parameter = -230,
  func_add_parameter_with_option = -231,
  func_parameter_to_index = -232,
  lambda_99 = -233,
  str_LOCAL = -234,
  string_33 = -235,
  lambda_100 = -236,
  lambda_101 = -237,
  string_34 = -238,
  lambda_102 = -239,
  str_var = -240,
  func_compile = -241,
  lambda_103 = -242,
  lambda_104 = -243,
  lambda_105 = -244,
  str_Last_statement_i = -245,
  lambda_106 = -246,
  lambda_self_is_an_io_call = -247,
  lambda_107 = -248,
  str_IO_TAIL_CALL = -249,
  lambda_108 = -250,
  str_IO_CALL = -251,
  string_35 = -252,
  lambda_109 = -253,
  lambda_110 = -254,
  str_TAIL_CALL = -255,
  lambda_111 = -256,
  string_36 = -257,
  lambda_112 = -258,
  str_stdassign = -259,
  str_assign = -260,
  sequence_553_1 = -261,
  lambda_113 = -262,
  lambda_114 = -263,
  lambda_115 = -264,
  str_Return_statement = -265,
  str___LET = -266,
  str__assign_attribut = -267,
  lambda_assign_attributes = -268,
  str___LET_2 = -269,
  lambda_116 = -270,
  lambda_117 = -271,
  lambda_118 = -272,
  lambda_119 = -273,
  str___LET_1_0_TAIL_C = -274,
  lambda_120 = -275,
  str___LET_0_TAIL_CAL = -276,
  lambda_121 = -277,
  lambda_122 = -278,
  str___LET_3 = -279,
  string_37 = -280,
  func_funky_types__node___to_separated_index = -281,
  func_funky_types__inline_attribute_value_pair___to_separated_index = -282,
  func_funky_types__inline_method_value_pair___to_separated_index = -283,
  func_funky_types__attribute_value_pair___to_separated_index = -284,
  func_funky_types__method_value_pair___to_separated_index = -285,
  func_funky_types__type_function___to_separated_index = -286,
  func_funky_types__numeric_literal___add_literal = -287,
  func_funky_types__character_sequence___add_literal = -288,
  lambda_123 = -289,
  lambda_124 = -290,
  num_16 = -291,
  lambda_125 = -292,
  lambda_126 = -293,
  lambda_127 = -294,
  lambda_128 = -295,
  lambda_129 = -296,
  chr_32 = -297,
  lambda_130 = -298,
  lambda_131 = -299,
  lambda_132 = -300,
  lambda_mangled_is_empty = -301,
  str_string = -302,
  str_string_2 = -303,
  lambda_133 = -304,
  str_str = -305,
  lambda_134 = -306,
  string_38 = -307,
  lambda_135 = -308,
  func_add_mangled = -309,
  func_funky_types__unique___add_literal = -310,
  func_funky_types__statement___add_literal = -311,
  func_funky_types__body___add_literal = -312,
  chr_58 = -313,
  string_39 = -314,
  lambda_136 = -315,
  lambda_137 = -316,
  lambda_138 = -317,
  chr_36 = -318,
  lambda_139 = -319,
  num_2 = -320,
  str_func = -321,
  lambda_140 = -322,
  chr_46 = -323,
  key_value_pair_672_19 = -324,
  func_add_lambda = -325,
  lambda_name_is_empty = -326,
  str_lambda = -327,
  str_lambda_2 = -328,
  lambda_141 = -329,
  func_add_function = -330,
  lambda_142 = -331,
  lambda_143 = -332,
  func_2_add_mangled = -333,
  func_mangle_versioned_identifier = -334,
  string_40 = -335,
  lambda_144 = -336,
  lambda_145 = -337,
  lambda_146 = -338,
  lambda_147 = -339,
  func_replace = -340,
  string_41 = -341,
  key_value_pair_713_1 = -342,
  key_value_pair_714_1 = -343,
  key_value_pair_715_1 = -344,
  key_value_pair_716_1 = -345,
  str_MANDATORY_PARAME = -346,
  str_MYSELF_PARAMETER = -347,
  str_REST_PARAMETER = -348,
  func_funky_types__initial_value___to_option = -349,
  func_funky_types__node___add_source_positions = -350,
  func_funky_types__statement___add_source_positions = -351,
  func_get_source_position = -352,
  lambda_source_group_is_defined = -353,
  str_POS = -354,
  lambda_148 = -355,
  str_POS_2 = -356,
  func_funky_types__statement___to_compound = -357,
  str_static_int = -358,
  str__arguments = -359,
  func_to_negative_index = -360,
  func_funky_types__numeric_literal___to_table_entry = -361,
  lambda_149 = -362,
  str___FLT_REAL_0_rea = -363,
  string_42 = -364,
  lambda_150 = -365,
  lambda_151 = -366,
  str_NEGA = -367,
  lambda_152 = -368,
  str_POSI = -369,
  str_0b = -370,
  lambda_153 = -371,
  str_0o = -372,
  lambda_digits = -373,
  str___FLT = -374,
  str_TIVE_INT64_0_val = -375,
  func_funky_types__numeric_character_literal___to_table_entry = -376,
  str___FLT_CHARACTER = -377,
  func_funky_types__character_sequence___to_table_entry = -378,
  lambda_characters_is_an_octet_string = -379,
  str___FLT_STRING = -380,
  str__str = -381,
  string_43 = -382,
  lambda_154 = -383,
  str___FLT_STRING_2 = -384,
  str__str_32__U = -385,
  func_funky_types__statement___to_table_entry = -386,
  str__arguments_2 = -387,
  str__arguments_3 = -388,
  func_funky_types__unique___to_table_entry = -389,
  key_value_pair_814_47 = -390,
  str___FLT_UNIQUE_0_s = -391,
  func_funky_types__body___to_table_entry = -392,
  str___FLT_FUNCTION_2 = -393,
  func_is_a_valid_statement = -394,
  lambda_155 = -395,
  lambda_156 = -396,
  lambda_157 = -397,
  lambda_158 = -398,
  func_is_a_valid_argument = -399,
  lambda_DEFINITION = -400,
  lambda_REDEFINITION = -401,
  lambda_159 = -402,
  lambda_info_is_defined = -403,
  lambda_160 = -404,
  lambda_161 = -405,
  lambda_162 = -406,
  func_check_destination = -407,
  lambda_163 = -408,
  lambda_164 = -409,
  func_funky_types__node___to_index = -410,
  str_to_index_failed = -411,
  str_self = -412,
  string_44 = -413,
  func_retrieve_name = -414,
  lambda_TEMPORARY = -415,
  lambda_165 = -416,
  lambda_166 = -417,
  lambda_167 = -418,
  lambda_CONSTANT = -419,
  lambda_168 = -420,
  lambda_LOCAL = -421,
  lambda_169 = -422,
  lambda_170 = -423,
  lambda_171 = -424,
  str_value = -425,
  func_get_literal = -426,
  func_check_mangling = -427,
  lambda_172 = -428,
  lambda_173 = -429,
  func_remove_trailing_underscores_and_digits = -430,
  lambda_loop = -431,
  lambda_174 = -432,
  lambda_175 = -433,
  lambda_176 = -434,
  lambda_177 = -435,
  lambda_178 = -436,
  func_remove_non_identifier_characters = -437,
  lambda_179 = -438,
  lambda_180 = -439,
  lambda_181 = -440,
  lambda_182 = -441,
  lambda_183 = -442,
  lambda_184 = -443,
  lambda_185 = -444,
  lambda_186 = -445,
  lambda_187 = -446,
  func_is_local_or_constant = -447,
  lambda_188 = -448,
  lambda_189 = -449,
  func_collect_types = -450,
  lambda_190 = -451,
  lambda_191 = -452,
  lambda_192 = -453,
  lambda_BODY = -454,
  lambda_193 = -455,
  lambda_194 = -456,
  func_check_types = -457,
  lambda_195 = -458,
  lambda_196 = -459,
  lambda_197 = -460,
  minus_num_2 = -461,
  lambda_198 = -462,
  lambda_TYPE_FUNCTION = -463,
  lambda_199 = -464,
  lambda_200 = -465,
  lambda_201 = -466,
  lambda_202 = -467,
  lambda_203 = -468,
  lambda_204 = -469,
  str_TYPE_FUNCTION = -470,
  lambda_ATTRIBUTE_VALUE_PAIR = -471,
  lambda_METHOD_VALUE_PAIR = -472,
  func_add_method = -473,
  lambda_205 = -474,
  lambda_206 = -475,
  lambda_207 = -476,
  lambda_208 = -477,
  func_add = -478,
  lambda_209 = -479,
  func_funky__mangle_identifier = -480,
  key_value_pair_1059_1 = -481,
  func_to_c_string = -482,
  lambda_210 = -483,
  lambda_211 = -484,
  chr_126 = -485,
  lambda_212 = -486,
  chr_34 = -487,
  lambda_213 = -488,
  chr_92 = -489,
  lambda_214 = -490,
  num_3 = -491,
  string_45 = -492,
  lambda_215 = -493,
  lambda_216 = -494,
  lambda_217 = -495,
  func_to_c_string_32 = -496,
  lambda_218 = -497,
  lambda_219 = -498,
  lambda_220 = -499,
  lambda_221 = -500,
  lambda_222 = -501,
  num_0xff = -502,
  lambda_223 = -503,
  lambda_224 = -504,
  num_0xffff = -505,
  lambda_225 = -506,
  num_4 = -507,
  str_u = -508,
  lambda_226 = -509,
  num_8 = -510,
  str_U = -511,
  lambda_227 = -512,
  lambda_228 = -513,
  lambda_229 = -514
};

enum {
  var__START = FIRST_VAR-1,
  var_mangled_literals, // derived
  var_empty_hash_table, // extern
  var_std__assign, // extern
  var_mangling_counter, // derived
  var_funky__generate_tabular_code, // initialized
  var_28_32_top_level_statements, // dynamic
  var_28_53_is_a_main_module, // dynamic
  var_literals, // extern
  var_to_list, // extern
  var_32_19_literal, // dynamic
  var_node_type_of, // extern
  var_TYPE_FUNCTION, // extern
  var_std__equal, // extern
  var_parameters_of, // extern
  var_is_empty, // extern
  var_statements_of, // extern
  var_length_of, // extern
  var_arguments_of, // extern
  var_std__and, // extern
  var_not, // extern
  var_filter, // extern
  var_604_1_add_literal, // attribute
  var_next, // extern
  var_empty_insert_order_table, // extern
  var_45_1_types, // dynamic
  var_syntax_error, // extern
  var_on, // extern
  var_if, // extern
  var_std__plus, // extern
  var_variables, // extern
  var_first, // extern
  var_count, // extern
  var_std__less, // extern
  var_71_1_feature_flags, // dynamic
  var_is_not_empty, // extern
  var_append, // extern
  var_update_if, // extern
  var_required_modules, // extern
  var_defined_namespaces, // extern
  var_used_namespaces, // extern
  var_current_module_name, // extern
  var_current_filename, // extern
  var_std__string, // extern
  var_136_3_name, // dynamic
  var_has_prefix, // extern
  var_without_prefix, // extern
  var_until, // extern
  var_map_reduce, // extern
  var_151_1_buf, // dynamic
  var_153_1_idx, // dynamic
  var_dec, // extern
  var_range, // extern
  var_for_each, // extern
  var_166_1_buf, // dynamic
  var_743_1_to_compound, // attribute
  var_178_1_buf, // dynamic
  var_762_1_to_table_entry, // attribute
  var_201_12_buf, // dynamic
  var_202_3_name, // dynamic
  var_mangle_identifier, // extern
  var_204_1_kind, // dynamic
  var_to_string, // extern
  var_truncate_until, // extern
  var_to_lower_case, // extern
  var_std__key_value_pair, // extern
  var_replace_all, // extern
  var_229_12_buf, // dynamic
  var_230_3_name, // dynamic
  var_230_8_info, // dynamic
  var_231_6_kind, // dynamic
  var_231_12_value, // dynamic
  var_before, // extern
  var_ATTRIBUTE, // extern
  var_ATTRIBUTE_WITH_SETTER, // extern
  var_std__sequence, // extern
  var_INITIALIZED, // extern
  var_INITIALIZED_COMPOUND, // extern
  var_EXTERN, // extern
  var_EXTERN_POLYMORPHIC, // extern
  var_DYNAMIC, // extern
  var_DERIVED, // extern
  var_debug__dump, // extern
  var_case, // extern
  var_identifier_of, // extern
  var_second, // extern
  var_294_1_mangled_name, // dynamic
  var_295_1_type, // dynamic
  var_is_defined, // extern
  var_302_1_buf, // dynamic
  var_343_16_name, // dynamic
  var_base_directory, // extern
  var_truncate_from, // extern
  var_397_3_body, // dynamic
  var_BODY, // extern
  var_empty_list, // extern
  var_419_20_name, // dynamic
  var_419_25_parameters, // dynamic
  var_419_36_statements, // dynamic
  var_temp_count, // derived
  var_local_mapping, // derived
  var_428_3_parameter, // dynamic
  var_REDEFINITION, // extern
  var_434_1_parameter_name, // dynamic
  var_funky__name_of, // extern
  var_LOCAL, // extern
  var_443_3_statement, // dynamic
  var_STATEMENT, // extern
  var_head_of, // extern
  var_453_20_node, // dynamic
  var_kind_of, // extern
  var_TEMPORARY, // extern
  var_no_of, // extern
  var_max, // extern
  var_DEFINITION, // extern
  var_461_1_identifier, // dynamic
  var_true, // extern
  var_cond, // extern
  var_472_1_n, // dynamic
  var_725_1_add_source_positions, // attribute
  var_483_1_parameter_count, // dynamic
  var_option_of, // extern
  var_any_of, // extern
  var_718_1_to_option, // attribute
  var_508_22_parameter, // dynamic
  var_513_1_parameter_name, // dynamic
  var_514_1_idx, // dynamic
  var_520_11_self, // dynamic
  var_520_16_is_last, // dynamic
  var_521_1_head, // dynamic
  var_is_an_input, // extern
  var_is_an_output, // extern
  var_524_1_output_arguments, // dynamic
  var_is_a_dummy_definition, // extern
  var_all_of, // extern
  var_525_1_invalid_last_statement, // dynamic
  var_std__not, // extern
  var_529_1_input_count, // dynamic
  var_530_1_output_count, // dynamic
  var_531_1_is_a_tail_call, // dynamic
  var_is_an_io_call, // extern
  var_585_1_to_separated_index, // attribute
  var_544_1_inputs, // dynamic
  var_545_1_outputs, // dynamic
  var_source_position_of, // extern
  var_FUNCTOR, // extern
  var_std__minus, // extern
  var_to_index, // attribute
  var_566_1_statement, // dynamic
  var_funky_types__node, // extern
  var_funky_types__inline_attribute_value_pair, // extern
  var_expression_of, // extern
  var_funky_types__inline_method_value_pair, // extern
  var_funky_types__attribute_value_pair, // extern
  var_argument_of, // extern
  var_funky_types__method_value_pair, // extern
  var_funky_types__type_function, // extern
  var_funky_types__numeric_literal, // extern
  var_funky__key_of, // extern
  var_funky_types__character_sequence, // extern
  var_610_47_self, // dynamic
  var_611_1_mangled, // dynamic
  var_characters_of, // extern
  var_613_3_chr, // dynamic
  var_break, // extern
  var_is_a_letter, // extern
  var_is_a_digit, // extern
  var_std__or, // extern
  var_push, // extern
  var_631_16_n, // dynamic
  var_funky_types__unique, // extern
  var_funky_types__statement, // extern
  var_mangle_position, // extern
  var_funky_types__body, // extern
  var_653_33_self, // dynamic
  var_source_group_of, // extern
  var_657_1_text, // dynamic
  var_without_suffix, // extern
  var_trim_right, // extern
  var_contains, // extern
  var_676_14_name, // dynamic
  var_684_16_name, // dynamic
  var_685_16_n, // dynamic
  var_from, // extern
  var_string, // extern
  var_699_31_name, // dynamic
  var_700_1_rest, // dynamic
  var_behind, // extern
  var_std_types__undefined, // extern
  var_funky_types__myself, // extern
  var_funky_types__rest, // extern
  var_funky_types__initial_value, // extern
  var_operand_of, // extern
  var_732_23_node, // dynamic
  var_733_1_source_group, // dynamic
  var_line_no_of, // extern
  var_concatenate, // extern
  var_767_1_digits, // dynamic
  var_digits_of, // extern
  var_to_integer, // extern
  var_funky_types__numeric_character_literal, // extern
  var_790_1_characters, // dynamic
  var_791_1_length, // dynamic
  var_is_an_octet_string, // extern
  var_to_upper_case, // extern
  var_replace_first, // extern
  var_825_24_statement, // dynamic
  var_is_a_definition, // extern
  var_false, // extern
  var_834_23_argument, // dynamic
  var_841_1_info, // dynamic
  var_CONSTANT, // extern
  var_CONSTANT_COMPOUND, // extern
  var_sequence, // extern
  var_undefined, // extern
  var_debug__print, // extern
  var_funky_types__functor, // extern
  var_funky_types__definition, // extern
  var_funky_types__redefinition, // extern
  var_funky_types__update, // extern
  var_884_17_self, // dynamic
  var_887_1_info, // dynamic
  var_894_1_identifier, // dynamic
  var_895_23_kind, // dynamic
  var_895_29_value, // dynamic
  var_debug__exit, // extern
  var_funky_types__character_literal, // extern
  var_928_1_n, // dynamic
  var_936_42_str, // dynamic
  var_937_1_n, // dynamic
  var_loop, // extern
  var_950_1_buf, // dynamic
  var_952_3_chr, // dynamic
  var_969_24_kind, // dynamic
  var_972_17_types, // dynamic
  var_974_3_statement, // dynamic
  var_978_3_argument, // dynamic
  var_METHOD_VALUE_PAIR, // extern
  var_ATTRIBUTE_VALUE_PAIR, // extern
  var_994_1_arguments, // dynamic
  var_995_1_functor_name, // dynamic
  var_1003_3_argument, // dynamic
  var_1014_1_identifier, // dynamic
  var_1015_29_constant_value, // dynamic
  var_1030_1_value, // dynamic
  var_1034_1_identifier, // dynamic
  var_1035_29_constant_value, // dynamic
  var_default_value, // extern
  var_tuple, // extern
  var_funky__mangle_identifier, // initialized
  var_1061_15_str, // dynamic
  var_1062_1_buf, // dynamic
  var_1063_1_s, // dynamic
  var_1065_3_idx, // dynamic
  var_1065_7_chr, // dynamic
  var_oct, // extern
  var_pad_left, // extern
  var_1079_18_str, // dynamic
  var_1080_1_buf, // dynamic
  var_1081_1_s, // dynamic
  var_1083_3_idx, // dynamic
  var_1083_7_chr, // dynamic
  var_1087_1_val, // dynamic
  var_hex, // extern
  var__END
};


static TAB_NUM t_func_funky__generate_tabular_code[] = {
  0, // locals
  2, // parameters
  var_28_32_top_level_statements,
  var_28_53_is_a_main_module,
  // to_list &literals
  var_to_list, 1, var_literals, 1, var_literals,
  // filter &literals: (literal)
  var_filter, 2, var_literals, lambda_1, 1, var_literals,
  // for_each literals
  var_for_each, 3, var_literals, lambda_5, lambda_6, IO_TAIL_CALL,
  POS(31, 3),
  POS(32, 3),
  POS(40, 3)
};

static TAB_NUM t_lambda_1[] = {
  3, // locals
  1, // parameters
  var_32_19_literal,
  // node_type_of(literal) == TYPE_FUNCTION
  var_node_type_of, 1, var_32_19_literal, 1, LOCAL(1),
  // node_type_of(literal) == TYPE_FUNCTION
  var_std__equal, 2, LOCAL(1), var_TYPE_FUNCTION, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_2, 1, LOCAL(3),
  // not
  var_not, 1, LOCAL(3), TAIL_CALL,
  POS(35, 9),
  POS(35, 9),
  POS(34, 9),
  POS(33, 5)
};

static TAB_NUM t_lambda_2[] = {
  3, // locals
  0, // parameters
  // parameters_of(literal).is_empty
  var_parameters_of, 1, var_32_19_literal, 1, LOCAL(1),
  // is_empty
  var_is_empty, 1, LOCAL(1), 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_3, 1, LOCAL(3),
  // parameters_of(literal).is_empty
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(36, 9),
  POS(36, 32),
  POS(34, 9),
  POS(36, 9)
};

static TAB_NUM t_lambda_3[] = {
  4, // locals
  0, // parameters
  // statements_of(literal)) == 1
  var_statements_of, 1, var_32_19_literal, 1, LOCAL(1),
  // length_of(statements_of(literal)) == 1
  var_length_of, 1, LOCAL(1), 1, LOCAL(2),
  // length_of(statements_of(literal)) == 1
  var_std__equal, 2, LOCAL(2), num_1, 1, LOCAL(3),
  // 
  var_std__and, 2, LOCAL(3), lambda_4, 1, LOCAL(4),
  // length_of(statements_of(literal)) == 1
  LET, 1, LOCAL(4), TAIL_CALL,
  POS(37, 19),
  POS(37, 9),
  POS(37, 9),
  POS(34, 9),
  POS(37, 9)
};

static TAB_NUM t_lambda_4[] = {
  4, // locals
  0, // parameters
  // statements_of(literal)(1)).is_empty
  var_statements_of, 1, var_32_19_literal, 1, LOCAL(1),
  // statements_of(literal)(1)).is_empty
  LOCAL(1), 1, num_1, 1, LOCAL(2),
  // arguments_of(statements_of(literal)(1)).is_empty
  var_arguments_of, 1, LOCAL(2), 1, LOCAL(3),
  // is_empty
  var_is_empty, 1, LOCAL(3), 1, LOCAL(4),
  // arguments_of(statements_of(literal)(1)).is_empty
  LET, 1, LOCAL(4), TAIL_CALL,
  POS(38, 22),
  POS(38, 22),
  POS(38, 9),
  POS(38, 49),
  POS(38, 9)
};

static TAB_NUM t_lambda_5[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 41_3_literal
  // add_literal !mangled_literals !mangling_counter literal
  var_604_1_add_literal, 1, LOCAL(1), 2, var_mangled_literals, var_mangling_counter,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(42, 7),
  POS(43, 7)
};

static TAB_NUM t_lambda_6[] = {
  23, // locals
  0, // parameters
  // $types collect_types(empty_insert_order_table top_level_statements)
  func_collect_types, 2, var_empty_insert_order_table, var_28_32_top_level_statements, 1, var_45_1_types,
  // filter &top_level_statements is_a_valid_statement
  var_filter, 2, var_28_32_top_level_statements, func_is_a_valid_statement, 1, var_28_32_top_level_statements,
  // is_a_main_module && top_level_statements.is_empty:
  var_std__and, 2, var_28_53_is_a_main_module, lambda_7, 1, LOCAL(1),
  // on is_a_main_module && top_level_statements.is_empty:
  var_on, 2, LOCAL(1), lambda_8, 0,
  // length_of(literals)
  var_length_of, 1, var_literals, 1, LOCAL(1),
  // is_empty
  var_is_empty, 1, var_28_32_top_level_statements, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_9, lambda_10, 1, LOCAL(3),
  // $constant_count
  var_std__plus, 2, LOCAL(1), LOCAL(3), 1, LOCAL(20),
  // $variable_count
  var_count, 2, var_variables, lambda_countvariables, 1, LOCAL(21),
  // 0
  var_std__less, 2, num_0, LOCAL(20), 1, LOCAL(1),
  // $ref_constants_table
  var_if, 3, LOCAL(1), lambda_11, lambda_12, 1, LOCAL(22),
  // 0
  var_std__less, 2, num_0, LOCAL(21), 1, LOCAL(1),
  // $ref_variables_table
  var_if, 3, LOCAL(1), lambda_13, lambda_14, 1, LOCAL(23),
  // $feature_flags "FEAT_POSITIONS"
  LET, 1, str_FEAT_POSITIONS, 1, var_71_1_feature_flags,
  // is_not_empty && not(is_a_main_module)
  var_is_not_empty, 1, var_28_32_top_level_statements, 1, LOCAL(1),
  // is_not_empty && not(is_a_main_module)
  var_std__and, 2, LOCAL(1), lambda_15, 1, LOCAL(2),
  // update_if top_level_statements.is_not_empty && not(is_a_main_module)
  var_update_if, 3, LOCAL(2), var_71_1_feature_flags, lambda_feature_flags, 1, var_71_1_feature_flags,
  // require())@
  func_require, 0, 1, LOCAL(1),
  // constants_enum())
  func_constants_enum, 0, 1, LOCAL(2),
  // variables_enum())@
  func_variables_enum, 0, 1, LOCAL(3),
  // tabular_functions())@
  func_tabular_functions, 0, 1, LOCAL(4),
  // main_function())@
  lambda_76, 0, 1, LOCAL(5),
  // compound_constants())@
  func_compound_constants, 0, 1, LOCAL(6),
  // constants_table())@
  func_constants_table, 0, 1, LOCAL(7),
  // attributes_tables())@
  func_attributes_tables, 0, 1, LOCAL(8),
  // variables_table())@
  func_variables_table, 0, 1, LOCAL(9),
  // required_modules_table())@
  func_required_modules_table, 0, 1, LOCAL(10),
  // defined_namespaces_table())@
  func_defined_namespaces_table, 0, 1, LOCAL(11),
  // used_namespaces_table())@
  func_used_namespaces_table, 0, 1, LOCAL(12),
  // length_of(required_modules)), // number of required modules
  var_length_of, 1, var_required_modules, 1, LOCAL(13),
  // length_of(defined_namespaces)), // number of defined namespaces
  var_length_of, 1, var_defined_namespaces, 1, LOCAL(14),
  // length_of(used_namespaces)), // number of used namespaces
  var_length_of, 1, var_used_namespaces, 1, LOCAL(15),
  // reference_required_modules())
  func_reference_required_modules, 0, 1, LOCAL(16),
  // reference_defined_namespaces())
  func_reference_defined_namespaces, 0, 1, LOCAL(17),
  // "
  var_std__string, 42, LOCAL(1), str_include_stddefhi, LOCAL(2), string_1, LOCAL(3), string_1, LOCAL(4), LOCAL(5), LOCAL(6), LOCAL(7), LOCAL(8), LOCAL(9), LOCAL(10), LOCAL(11), LOCAL(12), str_FUNKY_MODULE_mod, var_current_module_name, string_2, var_current_module_name, str___module_name, var_current_filename, str___module_filenam, var_71_1_feature_flags, str___marker, LOCAL(13), str___number_of_requ, LOCAL(14), str___number_of_defi, LOCAL(15), str___number_of_used, LOCAL(20), str___number_of_cons, LOCAL(21), str___number_of_vari, LOCAL(16), string_3, LOCAL(17), str___used_namespace, LOCAL(22), string_1, LOCAL(23), string_4, 1, LOCAL(18),
  // if
  var_if, 3, var_28_53_is_a_main_module, lambda_16, lambda_17, 1, LOCAL(19),
  // append
  var_append, 2, LOCAL(18), LOCAL(19), TAIL_CALL,
  POS(45, 7),
  POS(46, 7),
  POS(47, 10),
  POS(47, 7),
  POS(54, 11),
  POS(56, 34),
  POS(55, 11),
  POS(52, 7),
  POS(59, 7),
  POS(63, 28),
  POS(61, 7),
  POS(68, 28),
  POS(66, 7),
  POS(71, 7),
  POS(72, 38),
  POS(72, 38),
  POS(72, 7),
  POS(76, 13),
  POS(85, 13),
  POS(86, 13),
  POS(88, 13),
  POS(89, 13),
  POS(90, 13),
  POS(91, 13),
  POS(92, 13),
  POS(93, 13),
  POS(94, 13),
  POS(95, 13),
  POS(96, 13),
  POS(105, 15),
  POS(106, 15),
  POS(107, 15),
  POS(110, 15),
  POS(111, 15),
  POS(75, 9),
  POS(117, 9),
  POS(74, 7)
};

static TAB_NUM t_lambda_7[] = {
  1, // locals
  0, // parameters
  // is_empty:
  var_is_empty, 1, var_28_32_top_level_statements, 1, LOCAL(1),
  // top_level_statements.is_empty:
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(47, 51),
  POS(47, 30)
};

static TAB_NUM t_lambda_8[] = {
  0, // locals
  0, // parameters
  // syntax_error "Main module does not contain any statements"
  var_syntax_error, 1, str_Main_module_does, TAIL_CALL,
  POS(48, 9)
};

static TAB_NUM t_lambda_9[] = {
  0, // locals
  0, // parameters
  //  0
  LET, 1, num_0, TAIL_CALL,
  POS(57, 15)
};

static TAB_NUM t_lambda_10[] = {
  0, // locals
  0, // parameters
  //  1
  LET, 1, num_1, TAIL_CALL,
  POS(58, 15)
};

static TAB_NUM t_lambda_countvariables[] = {
  4, // locals
  1, // parameters
  LOCAL(4), // 60_18_info
  // first(info).is_local_or_constant))
  var_first, 1, LOCAL(4), 1, LOCAL(1),
  // is_local_or_constant))
  func_is_local_or_constant, 1, LOCAL(1), 1, LOCAL(2),
  // not(first(info).is_local_or_constant))
  var_not, 1, LOCAL(2), 1, LOCAL(3),
  // -> not(first(info).is_local_or_constant))
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(60, 40),
  POS(60, 52),
  POS(60, 36),
  POS(60, 33)
};

static TAB_NUM t_lambda_11[] = {
  0, // locals
  0, // parameters
  //  "  constants_table,"
  LET, 1, str___constants_tabl, TAIL_CALL,
  POS(64, 13)
};

static TAB_NUM t_lambda_12[] = {
  0, // locals
  0, // parameters
  //  "  NULL, // no constants"
  LET, 1, str___NULL__no_const, TAIL_CALL,
  POS(65, 13)
};

static TAB_NUM t_lambda_13[] = {
  0, // locals
  0, // parameters
  //  "  variables_table,"
  LET, 1, str___variables_tabl, TAIL_CALL,
  POS(69, 13)
};

static TAB_NUM t_lambda_14[] = {
  0, // locals
  0, // parameters
  //  "  NULL, // no variables"
  LET, 1, str___NULL__no_varia, TAIL_CALL,
  POS(70, 13)
};

static TAB_NUM t_lambda_15[] = {
  1, // locals
  0, // parameters
  // not(is_a_main_module)
  var_not, 1, var_28_53_is_a_main_module, 1, LOCAL(1),
  // not(is_a_main_module)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(72, 54),
  POS(72, 54)
};

static TAB_NUM t_lambda_feature_flags[] = {
  0, // locals
  0, // parameters
  // append feature_flags "|FEAT_INITIALIZER"
  var_append, 2, var_71_1_feature_flags, str_FEAT_INITIALIZER, TAIL_CALL,
  POS(73, 25)
};

static TAB_NUM t_lambda_16[] = {
  1, // locals
  0, // parameters
  // "
  var_std__string, 3, str_int_mainint_argc, var_current_module_name, string_5, 1, LOCAL(1),
  //  "
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(119, 14),
  POS(119, 13)
};

static TAB_NUM t_lambda_17[] = {
  0, // locals
  0, // parameters
  //  ""
  LET, 1, string_6, TAIL_CALL,
  POS(126, 13)
};

static TAB_NUM t_func_require[] = {
  1, // locals
  0, // parameters
  // is_empty
  var_is_empty, 1, var_required_modules, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_18, lambda_19, TAIL_CALL,
  POS(130, 28),
  POS(129, 9)
};

static TAB_NUM t_lambda_18[] = {
  0, // locals
  0, // parameters
  //  ""
  LET, 1, string_6, TAIL_CALL,
  POS(131, 13)
};

static TAB_NUM t_lambda_19[] = {
  1, // locals
  0, // parameters
  // map_reduce
  var_map_reduce, 2, var_required_modules, lambda_20, 1, LOCAL(1),
  // append
  var_append, 2, LOCAL(1), string_1, TAIL_CALL,
  POS(134, 15),
  POS(133, 13)
};

static TAB_NUM t_lambda_20[] = {
  1, // locals
  1, // parameters
  var_136_3_name,
  // name .has_prefix. "./" &name:
  var_has_prefix, 2, var_136_3_name, string_7, 1, LOCAL(1),
  // update_if name .has_prefix. "./" &name:
  var_update_if, 3, LOCAL(1), var_136_3_name, lambda_21, 1, var_136_3_name,
  // "
  var_std__string, 3, str__require, var_136_3_name, string_1, 1, LOCAL(1),
  // -> "
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(137, 29),
  POS(137, 19),
  POS(142, 22),
  POS(142, 19)
};

static TAB_NUM t_lambda_21[] = {
  1, // locals
  0, // parameters
  // without_prefix &name "./"
  var_without_prefix, 2, var_136_3_name, string_7, 1, var_136_3_name,
  // until(current_filename '/' -1)
  var_until, 3, var_current_filename, chr_47, minus_num_1, 1, LOCAL(1),
  // without_prefix &name until(current_filename '/' -1)
  var_without_prefix, 2, var_136_3_name, LOCAL(1), 1, var_136_3_name,
  // append "./" &name
  var_append, 2, string_7, var_136_3_name, 1, var_136_3_name,
  // -> name
  LET, 1, var_136_3_name, TAIL_CALL,
  POS(138, 21),
  POS(139, 42),
  POS(139, 21),
  POS(140, 21),
  POS(141, 21)
};

static TAB_NUM t_func_constants_enum[] = {
  1, // locals
  0, // parameters
  // is_empty
  var_is_empty, 1, var_literals, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_22, lambda_23, TAIL_CALL,
  POS(148, 20),
  POS(147, 9)
};

static TAB_NUM t_lambda_22[] = {
  0, // locals
  0, // parameters
  //  ""
  LET, 1, string_6, TAIL_CALL,
  POS(149, 13)
};

static TAB_NUM t_lambda_23[] = {
  0, // locals
  0, // parameters
  // $buf "
  LET, 1, str_enum, 1, var_151_1_buf,
  // $idx 0
  LET, 1, num_0, 1, var_153_1_idx,
  // for_each literals
  var_for_each, 3, var_literals, lambda_24, lambda_25, TAIL_CALL,
  POS(151, 13),
  POS(153, 13),
  POS(154, 13)
};

static TAB_NUM t_lambda_24[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 156_3_literal
  // $mangled_name mangled_literals(literal)
  var_mangled_literals, 1, LOCAL(2), 1, LOCAL(3),
  // dec &idx
  var_dec, 1, var_153_1_idx, 1, var_153_1_idx,
  // "
  var_std__string, 5, string_8, LOCAL(3), string_9, var_153_1_idx, string_10, 1, LOCAL(1),
  // append &buf "
  var_append, 2, var_151_1_buf, LOCAL(1), 1, var_151_1_buf,
  // next
  var_next, 0, TAIL_CALL,
  POS(157, 17),
  POS(158, 17),
  POS(159, 29),
  POS(159, 17),
  POS(162, 17)
};

static TAB_NUM t_lambda_25[] = {
  2, // locals
  0, // parameters
  // range(buf 1 -3) "@nl;};@nl;")
  var_range, 3, var_151_1_buf, num_1, minus_num_3, 1, LOCAL(1),
  // append(range(buf 1 -3) "@nl;};@nl;")
  var_append, 2, LOCAL(1), string_4, 1, LOCAL(2),
  //  append(range(buf 1 -3) "@nl;};@nl;")
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(163, 25),
  POS(163, 18),
  POS(163, 17)
};

static TAB_NUM t_func_compound_constants[] = {
  0, // locals
  0, // parameters
  // $buf ""
  LET, 1, string_6, 1, var_166_1_buf,
  // for_each literals
  var_for_each, 3, var_literals, lambda_26, lambda_27, TAIL_CALL,
  POS(166, 9),
  POS(167, 9)
};

static TAB_NUM t_lambda_26[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 168_3_literal
  // to_compound
  var_743_1_to_compound, 1, LOCAL(2), 1, LOCAL(1),
  // append &buf literal.to_compound
  var_append, 2, var_166_1_buf, LOCAL(1), 1, var_166_1_buf,
  // next
  var_next, 0, TAIL_CALL,
  POS(169, 33),
  POS(169, 13),
  POS(170, 13)
};

static TAB_NUM t_lambda_27[] = {
  0, // locals
  0, // parameters
  //  buf
  LET, 1, var_166_1_buf, TAIL_CALL,
  POS(171, 13)
};

static TAB_NUM t_func_constants_table[] = {
  2, // locals
  0, // parameters
  // is_empty && top_level_statements.is_empty
  var_is_empty, 1, var_literals, 1, LOCAL(1),
  // is_empty && top_level_statements.is_empty
  var_std__and, 2, LOCAL(1), lambda_28, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_29, lambda_30, TAIL_CALL,
  POS(175, 20),
  POS(175, 20),
  POS(174, 9)
};

static TAB_NUM t_lambda_28[] = {
  1, // locals
  0, // parameters
  // is_empty
  var_is_empty, 1, var_28_32_top_level_statements, 1, LOCAL(1),
  // top_level_statements.is_empty
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(175, 53),
  POS(175, 32)
};

static TAB_NUM t_lambda_29[] = {
  0, // locals
  0, // parameters
  //  ""
  LET, 1, string_6, TAIL_CALL,
  POS(176, 13)
};

static TAB_NUM t_lambda_30[] = {
  1, // locals
  0, // parameters
  // $buf "
  LET, 1, str_static_FUNKY_CON, 1, var_178_1_buf,
  // is_empty
  var_is_empty, 1, var_literals, 1, LOCAL(1),
  // !buf
  var_if, 3, LOCAL(1), lambda_31, lambda_32, 1, var_178_1_buf,
  // is_empty
  var_is_empty, 1, var_28_32_top_level_statements, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_35, lambda_36, TAIL_CALL,
  POS(178, 13),
  POS(183, 26),
  POS(181, 13),
  POS(192, 36),
  POS(191, 13)
};

static TAB_NUM t_lambda_31[] = {
  0, // locals
  0, // parameters
  //  buf
  LET, 1, var_178_1_buf, TAIL_CALL,
  POS(184, 19)
};

static TAB_NUM t_lambda_32[] = {
  0, // locals
  0, // parameters
  // for_each literals
  var_for_each, 3, var_literals, lambda_33, lambda_34, TAIL_CALL,
  POS(186, 19)
};

static TAB_NUM t_lambda_33[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 187_3_literal
  // to_table_entry
  var_762_1_to_table_entry, 1, LOCAL(2), 1, LOCAL(1),
  // append &buf literal.to_table_entry
  var_append, 2, var_178_1_buf, LOCAL(1), 1, var_178_1_buf,
  // next
  var_next, 0, TAIL_CALL,
  POS(188, 43),
  POS(188, 23),
  POS(189, 23)
};

static TAB_NUM t_lambda_34[] = {
  0, // locals
  0, // parameters
  //  buf
  LET, 1, var_178_1_buf, TAIL_CALL,
  POS(190, 23)
};

static TAB_NUM t_lambda_35[] = {
  2, // locals
  0, // parameters
  // range(buf 1 -3) "@nl;};@nl;")
  var_range, 3, var_178_1_buf, num_1, minus_num_3, 1, LOCAL(1),
  // append(range(buf 1 -3) "@nl;};@nl;")
  var_append, 2, LOCAL(1), string_4, 1, LOCAL(2),
  //  append(range(buf 1 -3) "@nl;};@nl;")
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(193, 25),
  POS(193, 18),
  POS(193, 17)
};

static TAB_NUM t_lambda_36[] = {
  0, // locals
  0, // parameters
  // append buf "
  var_append, 2, var_178_1_buf, str___FLT_FUNCTION, TAIL_CALL,
  POS(195, 17)
};

static TAB_NUM t_func_variables_enum[] = {
  1, // locals
  0, // parameters
  // map_reduce $buf variables
  var_map_reduce, 4, var_variables, lambda_37, var_append, string_6, 1, var_201_12_buf,
  // is_empty
  var_is_empty, 1, var_201_12_buf, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_40, lambda_41, TAIL_CALL,
  POS(201, 9),
  POS(217, 15),
  POS(216, 9)
};

static TAB_NUM t_lambda_37[] = {
  2, // locals
  2, // parameters
  var_202_3_name,
  LOCAL(2), // 202_8_info
  // mangle_identifier &name
  var_mangle_identifier, 1, var_202_3_name, 1, var_202_3_name,
  // $kind first(info)
  var_first, 1, LOCAL(2), 1, var_204_1_kind,
  // is_local_or_constant
  func_is_local_or_constant, 1, var_204_1_kind, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_38, lambda_39, TAIL_CALL,
  POS(203, 13),
  POS(204, 13),
  POS(206, 20),
  POS(205, 13)
};

static TAB_NUM t_lambda_38[] = {
  0, // locals
  0, // parameters
  //  ""
  LET, 1, string_6, TAIL_CALL,
  POS(207, 17)
};

static TAB_NUM t_lambda_39[] = {
  4, // locals
  0, // parameters
  // to_string .truncate_until. "::").to_lower_case
  var_to_string, 1, var_204_1_kind, 1, LOCAL(1),
  // kind.to_string .truncate_until. "::").to_lower_case
  var_truncate_until, 2, LOCAL(1), string_11, 1, LOCAL(2),
  // to_lower_case
  var_to_lower_case, 1, LOCAL(2), 1, LOCAL(3),
  // $remark
  var_replace_all, 2, LOCAL(3), key_value_pair_212_1, 1, LOCAL(4),
  // "  var_@(name), // @(remark)@nl;"
  var_std__string, 5, str___var, var_202_3_name, string_13, LOCAL(4), string_1, 1, LOCAL(1),
  // -> "  var_@(name), // @(remark)@nl;"
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(211, 27),
  POS(211, 22),
  POS(211, 60),
  POS(209, 17),
  POS(213, 20),
  POS(213, 17)
};

static TAB_NUM t_lambda_40[] = {
  0, // locals
  0, // parameters
  //  ""
  LET, 1, string_6, TAIL_CALL,
  POS(218, 13)
};

static TAB_NUM t_lambda_41[] = {
  1, // locals
  0, // parameters
  // "
  var_std__string, 3, str_enum___var__STAR, var_201_12_buf, str___var__END, 1, LOCAL(1),
  //  "
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(219, 14),
  POS(219, 13)
};

static TAB_NUM t_func_variables_table[] = {
  1, // locals
  0, // parameters
  // map_reduce $buf variables
  var_map_reduce, 4, var_variables, lambda_42, var_append, string_6, 1, var_229_12_buf,
  // is_empty
  var_is_empty, 1, var_229_12_buf, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_51, lambda_52, TAIL_CALL,
  POS(229, 9),
  POS(285, 15),
  POS(284, 9)
};

static TAB_NUM t_lambda_42[] = {
  1, // locals
  2, // parameters
  var_230_3_name,
  var_230_8_info,
  // info $kind $value
  var_230_8_info, 0, 2, var_231_6_kind, var_231_12_value,
  // is_local_or_constant
  func_is_local_or_constant, 1, var_231_6_kind, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_43, lambda_44, TAIL_CALL,
  POS(231, 13),
  POS(233, 20),
  POS(232, 13)
};

static TAB_NUM t_lambda_43[] = {
  0, // locals
  0, // parameters
  //  ""
  LET, 1, string_6, TAIL_CALL,
  POS(234, 17)
};

static TAB_NUM t_lambda_44[] = {
  7, // locals
  0, // parameters
  // retrieve_base_and_method_count $base $method_count name
  func_retrieve_base_and_method_count, 1, var_230_3_name, 2, LOCAL(3), LOCAL(4),
  // $namespace name .before. "::"
  var_before, 2, var_230_3_name, string_11, 1, LOCAL(5),
  // truncate_until &name "::"
  var_truncate_until, 2, var_230_3_name, string_11, 1, var_230_3_name,
  // ATTRIBUTE, ATTRIBUTE_WITH_SETTER -> "POLYMORPHIC"
  var_std__sequence, 2, var_ATTRIBUTE, var_ATTRIBUTE_WITH_SETTER, 1, LOCAL(1),
  // INITIALIZED, INITIALIZED_COMPOUND -> "INITIALIZED"
  var_std__sequence, 2, var_INITIALIZED, var_INITIALIZED_COMPOUND, 1, LOCAL(2),
  // $type
  var_case, 14, var_231_6_kind, var_EXTERN, lambda_EXTERN, var_EXTERN_POLYMORPHIC, lambda_EXTERN_POLYMORPHIC, LOCAL(1), lambda_45, LOCAL(2), lambda_46, var_DYNAMIC, lambda_DYNAMIC, var_DERIVED, lambda_DERIVED, lambda_47, 1, LOCAL(6),
  // INITIALIZED, INITIALIZED_COMPOUND:
  var_std__sequence, 2, var_INITIALIZED, var_INITIALIZED_COMPOUND, 1, LOCAL(1),
  // EXTERN, EXTERN_POLYMORPHIC -> "
  var_std__sequence, 2, var_EXTERN, var_EXTERN_POLYMORPHIC, 1, LOCAL(2),
  // $initialization
  var_case, 12, var_231_6_kind, LOCAL(1), lambda_48, var_DERIVED, lambda_2_DERIVED, var_ATTRIBUTE, lambda_ATTRIBUTE, var_ATTRIBUTE_WITH_SETTER, lambda_ATTRIBUTE_WITH_SETTER, LOCAL(2), lambda_49, lambda_50, 1, LOCAL(7),
  // "
  var_std__string, 12, str_______FOT, LOCAL(6), string_19, LOCAL(4), string_20, var_230_3_name, string_17, LOCAL(5), string_21, LOCAL(3), LOCAL(7), string_22, 1, LOCAL(1),
  // -> "
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(236, 17),
  POS(237, 17),
  POS(238, 17),
  POS(244, 21),
  POS(245, 21),
  POS(239, 17),
  POS(254, 21),
  POS(272, 21),
  POS(251, 17),
  POS(276, 20),
  POS(276, 17)
};

static TAB_NUM t_lambda_EXTERN[] = {
  0, // locals
  0, // parameters
  //  "UNKNOWN"
  LET, 1, str_UNKNOWN, TAIL_CALL,
  POS(242, 30)
};

static TAB_NUM t_lambda_EXTERN_POLYMORPHIC[] = {
  0, // locals
  0, // parameters
  //  "UNKNOWN_POLYMORPHIC"
  LET, 1, str_UNKNOWN_POLYMORP, TAIL_CALL,
  POS(243, 42)
};

static TAB_NUM t_lambda_45[] = {
  0, // locals
  0, // parameters
  //  "POLYMORPHIC"
  LET, 1, str_POLYMORPHIC, TAIL_CALL,
  POS(244, 56)
};

static TAB_NUM t_lambda_46[] = {
  0, // locals
  0, // parameters
  //  "INITIALIZED"
  LET, 1, str_INITIALIZED, TAIL_CALL,
  POS(245, 57)
};

static TAB_NUM t_lambda_DYNAMIC[] = {
  0, // locals
  0, // parameters
  //  "UNINITIALIZED"
  LET, 1, str_UNINITIALIZED, TAIL_CALL,
  POS(246, 31)
};

static TAB_NUM t_lambda_DERIVED[] = {
  0, // locals
  0, // parameters
  //  "DERIVED"
  LET, 1, str_DERIVED, TAIL_CALL,
  POS(247, 31)
};

static TAB_NUM t_lambda_47[] = {
  0, // locals
  0, // parameters
  // debug::dump `kind
  var_debug__dump, 2, str_kind, var_231_6_kind, 0,
  // -> "???"
  LET, 1, string_14, TAIL_CALL,
  POS(249, 23),
  POS(250, 23)
};

static TAB_NUM t_lambda_48[] = {
  2, // locals
  0, // parameters
  // $idx mangled_literals(value)
  var_mangled_literals, 1, var_231_12_value, 1, LOCAL(2),
  // "
  var_std__string, 3, str_____const_idx, LOCAL(2), string_15, 1, LOCAL(1),
  // -> "
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(255, 23),
  POS(256, 26),
  POS(256, 23)
};

static TAB_NUM t_lambda_2_DERIVED[] = {
  4, // locals
  0, // parameters
  // $identifier identifier_of(value)
  var_identifier_of, 1, var_231_12_value, 1, LOCAL(2),
  // $dname identifier .truncate_until. "::"
  var_truncate_until, 2, LOCAL(2), string_11, 1, LOCAL(3),
  // $dnamespace identifier .before. "::"
  var_before, 2, LOCAL(2), string_11, 1, LOCAL(4),
  // "
  var_std__string, 5, string_16, LOCAL(3), string_17, LOCAL(4), string_18, 1, LOCAL(1),
  // -> "
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(260, 23),
  POS(261, 23),
  POS(262, 23),
  POS(263, 26),
  POS(263, 23)
};

static TAB_NUM t_lambda_ATTRIBUTE[] = {
  0, // locals
  0, // parameters
  //  "
  LET, 1, str_____has_a_setter, TAIL_CALL,
  POS(266, 33)
};

static TAB_NUM t_lambda_ATTRIBUTE_WITH_SETTER[] = {
  0, // locals
  0, // parameters
  //  "
  LET, 1, str_____has_a_setter_2, TAIL_CALL,
  POS(269, 45)
};

static TAB_NUM t_lambda_49[] = {
  3, // locals
  0, // parameters
  // second(info)))}@
  var_second, 1, var_230_8_info, 1, LOCAL(1),
  // get_source_position(second(info)))}@
  func_get_source_position, 1, LOCAL(1), 1, LOCAL(2),
  // "
  var_std__string, 3, str_____position, LOCAL(2), string_15, 1, LOCAL(3),
  //  "
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(274, 62),
  POS(274, 42),
  POS(272, 51),
  POS(272, 50)
};

static TAB_NUM t_lambda_50[] = {
  0, // locals
  0, // parameters
  //  ""
  LET, 1, string_6, TAIL_CALL,
  POS(275, 23)
};

static TAB_NUM t_lambda_51[] = {
  0, // locals
  0, // parameters
  //  ""
  LET, 1, string_6, TAIL_CALL,
  POS(286, 13)
};

static TAB_NUM t_lambda_52[] = {
  2, // locals
  0, // parameters
  // range(buf 1 -3))
  var_range, 3, var_229_12_buf, num_1, minus_num_3, 1, LOCAL(1),
  // "
  var_std__string, 3, str_static_FUNKY_VAR, LOCAL(1), string_4, 1, LOCAL(2),
  //  "
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(290, 15),
  POS(287, 14),
  POS(287, 13)
};

static TAB_NUM t_func_retrieve_base_and_method_count[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 293_34_identifier
  // $mangled_name mangle_identifier(identifier)
  var_mangle_identifier, 1, LOCAL(2), 1, var_294_1_mangled_name,
  // $type types(mangled_name)
  var_45_1_types, 1, var_294_1_mangled_name, 1, var_295_1_type,
  // is_defined
  var_is_defined, 1, var_295_1_type, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_53, lambda_54, TAIL_CALL,
  POS(294, 9),
  POS(295, 9),
  POS(297, 16),
  POS(296, 9)
};

static TAB_NUM t_lambda_53[] = {
  2, // locals
  0, // parameters
  // append(mangled_name "__attributes") length_of(type)
  var_append, 2, var_294_1_mangled_name, str___attributes, 1, LOCAL(1),
  // length_of(type)
  var_length_of, 1, var_295_1_type, 1, LOCAL(2),
  //  append(mangled_name "__attributes") length_of(type)
  LET, 2, LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(298, 14),
  POS(298, 50),
  POS(298, 13)
};

static TAB_NUM t_lambda_54[] = {
  0, // locals
  0, // parameters
  //  "NULL" "0"
  LET, 2, str_NULL, string_23, TAIL_CALL,
  POS(299, 13)
};

static TAB_NUM t_func_attributes_tables[] = {
  0, // locals
  0, // parameters
  // $buf ""
  LET, 1, string_6, 1, var_302_1_buf,
  // for_each types
  var_for_each, 3, var_45_1_types, lambda_55, lambda_58, TAIL_CALL,
  POS(302, 9),
  POS(303, 9)
};

static TAB_NUM t_lambda_55[] = {
  3, // locals
  2, // parameters
  LOCAL(2), // 304_3_type
  LOCAL(3), // 304_8_methods
  // "
  var_std__string, 3, str_static_ATTRIBUTE, LOCAL(2), str___attributes_2, 1, LOCAL(1),
  // append &buf "
  var_append, 2, var_302_1_buf, LOCAL(1), 1, var_302_1_buf,
  // for_each methods
  var_for_each, 3, LOCAL(3), lambda_56, lambda_57, TAIL_CALL,
  POS(305, 25),
  POS(305, 13),
  POS(308, 13)
};

static TAB_NUM t_lambda_56[] = {
  4, // locals
  1, // parameters
  LOCAL(2), // 309_3_item
  // item $method $value
  LOCAL(2), 0, 2, LOCAL(3), LOCAL(4),
  // "
  var_std__string, 5, string_24, LOCAL(3), string_25, LOCAL(4), string_26, 1, LOCAL(1),
  // append &buf "
  var_append, 2, var_302_1_buf, LOCAL(1), 1, var_302_1_buf,
  // next
  var_next, 0, TAIL_CALL,
  POS(310, 17),
  POS(311, 29),
  POS(311, 17),
  POS(314, 17)
};

static TAB_NUM t_lambda_57[] = {
  1, // locals
  0, // parameters
  // range(buf 1 -3) "@nl;};@nl;"
  var_range, 3, var_302_1_buf, num_1, minus_num_3, 1, LOCAL(1),
  // append !buf range(buf 1 -3) "@nl;};@nl;"
  var_append, 2, LOCAL(1), string_4, 1, var_302_1_buf,
  // next
  var_next, 0, TAIL_CALL,
  POS(316, 29),
  POS(316, 17),
  POS(317, 17)
};

static TAB_NUM t_lambda_58[] = {
  0, // locals
  0, // parameters
  //  buf
  LET, 1, var_302_1_buf, TAIL_CALL,
  POS(318, 13)
};

static TAB_NUM t_func_required_modules_table[] = {
  1, // locals
  0, // parameters
  // is_empty
  var_is_empty, 1, var_required_modules, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_59, lambda_60, TAIL_CALL,
  POS(322, 28),
  POS(321, 9)
};

static TAB_NUM t_lambda_59[] = {
  0, // locals
  0, // parameters
  //  ""
  LET, 1, string_6, TAIL_CALL,
  POS(323, 13)
};

static TAB_NUM t_lambda_60[] = {
  3, // locals
  0, // parameters
  // map_reduce
  var_map_reduce, 2, var_required_modules, lambda_required_modules, 1, LOCAL(1),
  // map_reduce
  var_map_reduce, 2, var_required_modules, lambda_2_required_modules, 1, LOCAL(2),
  // range
  var_range, 3, LOCAL(2), num_1, minus_num_3, 1, LOCAL(3),
  // append
  var_append, 5, string_1, LOCAL(1), str_static_FUNKY_MOD, LOCAL(3), string_4, TAIL_CALL,
  POS(327, 15),
  POS(335, 17),
  POS(334, 15),
  POS(325, 13)
};

static TAB_NUM t_lambda_required_modules[] = {
  3, // locals
  1, // parameters
  LOCAL(3), // 328_19_name
  // mangled_name(name));
  func_mangled_name, 1, LOCAL(3), 1, LOCAL(1),
  // "
  var_std__string, 3, str_extern_FUNKY_MOD, LOCAL(1), string_27, 1, LOCAL(2),
  // -> "
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(330, 51),
  POS(329, 22),
  POS(329, 19)
};

static TAB_NUM t_lambda_2_required_modules[] = {
  3, // locals
  1, // parameters
  LOCAL(3), // 336_19_name
  // mangled_name(name)),
  func_mangled_name, 1, LOCAL(3), 1, LOCAL(1),
  // "
  var_std__string, 3, str___module, LOCAL(1), string_10, 1, LOCAL(2),
  // -> "
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(339, 36),
  POS(337, 24),
  POS(337, 21)
};

static TAB_NUM t_func_mangled_name[] = {
  2, // locals
  1, // parameters
  var_343_16_name,
  // name .has_prefix. "./" &name:
  var_has_prefix, 2, var_343_16_name, string_7, 1, LOCAL(1),
  // update_if name .has_prefix. "./" &name:
  var_update_if, 3, LOCAL(1), var_343_16_name, lambda_61, 1, var_343_16_name,
  // replace_all(name '/' = "__")
  var_replace_all, 2, var_343_16_name, key_value_pair_348_21, 1, LOCAL(2),
  // -> replace_all(name '/' = "__")
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(344, 21),
  POS(344, 11),
  POS(348, 14),
  POS(348, 11)
};

static TAB_NUM t_lambda_61[] = {
  0, // locals
  0, // parameters
  // without_prefix &name "./"
  var_without_prefix, 2, var_343_16_name, string_7, 1, var_343_16_name,
  // without_prefix &name base_directory
  var_without_prefix, 2, var_343_16_name, var_base_directory, 1, var_343_16_name,
  // -> name
  LET, 1, var_343_16_name, TAIL_CALL,
  POS(345, 13),
  POS(346, 13),
  POS(347, 13)
};

static TAB_NUM t_func_reference_required_modules[] = {
  1, // locals
  0, // parameters
  // is_empty
  var_is_empty, 1, var_required_modules, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_62, lambda_63, TAIL_CALL,
  POS(352, 28),
  POS(351, 9)
};

static TAB_NUM t_lambda_62[] = {
  0, // locals
  0, // parameters
  //  "NULL, // required modules"
  LET, 1, str_NULL__required_m, TAIL_CALL,
  POS(353, 13)
};

static TAB_NUM t_lambda_63[] = {
  0, // locals
  0, // parameters
  //  "required_modules,"
  LET, 1, str_required_modules, TAIL_CALL,
  POS(354, 13)
};

static TAB_NUM t_func_defined_namespaces_table[] = {
  1, // locals
  0, // parameters
  // is_empty
  var_is_empty, 1, var_defined_namespaces, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_64, lambda_65, TAIL_CALL,
  POS(358, 30),
  POS(357, 9)
};

static TAB_NUM t_lambda_64[] = {
  0, // locals
  0, // parameters
  //  ""
  LET, 1, string_6, TAIL_CALL,
  POS(359, 13)
};

static TAB_NUM t_lambda_65[] = {
  2, // locals
  0, // parameters
  // map_reduce
  var_map_reduce, 2, var_defined_namespaces, lambda_defined_namespaces, 1, LOCAL(1),
  // range
  var_range, 3, LOCAL(1), num_1, minus_num_3, 1, LOCAL(2),
  // append
  var_append, 3, str_static_FUNKY_NAM, LOCAL(2), string_4, TAIL_CALL,
  POS(366, 17),
  POS(365, 15),
  POS(361, 13)
};

static TAB_NUM t_lambda_defined_namespaces[] = {
  5, // locals
  2, // parameters
  LOCAL(4), // 367_21_name
  LOCAL(5), // 367_26_version
  // truncate_from &name '-'
  var_truncate_from, 2, LOCAL(4), chr_45, 1, LOCAL(4),
  // first(version)), @(second(version))},
  var_first, 1, LOCAL(5), 1, LOCAL(1),
  // second(version))},
  var_second, 1, LOCAL(5), 1, LOCAL(2),
  // "
  var_std__string, 7, string_29, LOCAL(4), string_21, LOCAL(1), string_30, LOCAL(2), string_26, 1, LOCAL(3),
  // -> "
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(368, 21),
  POS(371, 39),
  POS(371, 58),
  POS(369, 24),
  POS(369, 21)
};

static TAB_NUM t_func_reference_defined_namespaces[] = {
  1, // locals
  0, // parameters
  // is_empty
  var_is_empty, 1, var_defined_namespaces, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_66, lambda_67, TAIL_CALL,
  POS(377, 30),
  POS(376, 9)
};

static TAB_NUM t_lambda_66[] = {
  0, // locals
  0, // parameters
  //  "NULL, // defined namespaces"
  LET, 1, str_NULL__defined_na, TAIL_CALL,
  POS(378, 13)
};

static TAB_NUM t_lambda_67[] = {
  0, // locals
  0, // parameters
  //  "defined_namespaces,"
  LET, 1, str_defined_namespac, TAIL_CALL,
  POS(379, 13)
};

static TAB_NUM t_func_used_namespaces_table[] = {
  2, // locals
  0, // parameters
  // map_reduce
  var_map_reduce, 2, var_used_namespaces, lambda_used_namespaces, 1, LOCAL(1),
  // range
  var_range, 3, LOCAL(1), num_1, minus_num_3, 1, LOCAL(2),
  // append
  var_append, 3, str_static_FUNKY_NAM_2, LOCAL(2), string_4, TAIL_CALL,
  POS(387, 13),
  POS(386, 11),
  POS(382, 9)
};

static TAB_NUM t_lambda_used_namespaces[] = {
  5, // locals
  2, // parameters
  LOCAL(4), // 388_18_name
  LOCAL(5), // 388_23_version
  // first(version)), @(second(version))},
  var_first, 1, LOCAL(5), 1, LOCAL(1),
  // second(version))},
  var_second, 1, LOCAL(5), 1, LOCAL(2),
  // "
  var_std__string, 7, string_29, LOCAL(4), string_21, LOCAL(1), string_30, LOCAL(2), string_26, 1, LOCAL(3),
  // -> "
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(391, 35),
  POS(391, 54),
  POS(389, 20),
  POS(389, 17)
};

static TAB_NUM t_func_tabular_functions[] = {
  0, // locals
  0, // parameters
  // map_reduce literals
  var_map_reduce, 4, var_literals, lambda_68, var_append, string_6, TAIL_CALL,
  POS(396, 9)
};

static TAB_NUM t_lambda_68[] = {
  2, // locals
  1, // parameters
  var_397_3_body,
  // node_type_of(body)
  var_node_type_of, 1, var_397_3_body, 1, LOCAL(1),
  // BODY, TYPE_FUNCTION:
  var_std__sequence, 2, var_BODY, var_TYPE_FUNCTION, 1, LOCAL(2),
  // case node_type_of(body)
  var_case, 4, LOCAL(1), LOCAL(2), lambda_69, lambda_75, TAIL_CALL,
  POS(398, 18),
  POS(399, 15),
  POS(398, 13)
};

static TAB_NUM t_lambda_69[] = {
  3, // locals
  0, // parameters
  // node_type_of(body) == TYPE_FUNCTION
  var_node_type_of, 1, var_397_3_body, 1, LOCAL(1),
  // node_type_of(body) == TYPE_FUNCTION
  var_std__equal, 2, LOCAL(1), var_TYPE_FUNCTION, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_70, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_73, lambda_74, TAIL_CALL,
  POS(402, 21),
  POS(402, 21),
  POS(401, 21),
  POS(400, 17)
};

static TAB_NUM t_lambda_70[] = {
  3, // locals
  0, // parameters
  // parameters_of(body).is_empty
  var_parameters_of, 1, var_397_3_body, 1, LOCAL(1),
  // is_empty
  var_is_empty, 1, LOCAL(1), 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_71, 1, LOCAL(3),
  // parameters_of(body).is_empty
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(403, 21),
  POS(403, 41),
  POS(401, 21),
  POS(403, 21)
};

static TAB_NUM t_lambda_71[] = {
  4, // locals
  0, // parameters
  // statements_of(body)) == 1
  var_statements_of, 1, var_397_3_body, 1, LOCAL(1),
  // length_of(statements_of(body)) == 1
  var_length_of, 1, LOCAL(1), 1, LOCAL(2),
  // length_of(statements_of(body)) == 1
  var_std__equal, 2, LOCAL(2), num_1, 1, LOCAL(3),
  // 
  var_std__and, 2, LOCAL(3), lambda_72, 1, LOCAL(4),
  // length_of(statements_of(body)) == 1
  LET, 1, LOCAL(4), TAIL_CALL,
  POS(404, 31),
  POS(404, 21),
  POS(404, 21),
  POS(401, 21),
  POS(404, 21)
};

static TAB_NUM t_lambda_72[] = {
  4, // locals
  0, // parameters
  // statements_of(body)(1)).is_empty
  var_statements_of, 1, var_397_3_body, 1, LOCAL(1),
  // statements_of(body)(1)).is_empty
  LOCAL(1), 1, num_1, 1, LOCAL(2),
  // arguments_of(statements_of(body)(1)).is_empty
  var_arguments_of, 1, LOCAL(2), 1, LOCAL(3),
  // is_empty
  var_is_empty, 1, LOCAL(3), 1, LOCAL(4),
  // arguments_of(statements_of(body)(1)).is_empty
  LET, 1, LOCAL(4), TAIL_CALL,
  POS(405, 34),
  POS(405, 34),
  POS(405, 21),
  POS(405, 58),
  POS(405, 21)
};

static TAB_NUM t_lambda_73[] = {
  0, // locals
  0, // parameters
  //  ""
  LET, 1, string_6, TAIL_CALL,
  POS(406, 21)
};

static TAB_NUM t_lambda_74[] = {
  3, // locals
  0, // parameters
  // $mangled_name mangled_literals(body)
  var_mangled_literals, 1, var_397_3_body, 1, LOCAL(2),
  // statements_of(body) is_a_valid_statement)
  var_statements_of, 1, var_397_3_body, 1, LOCAL(1),
  // $statements filter(statements_of(body) is_a_valid_statement)
  var_filter, 2, LOCAL(1), func_is_a_valid_statement, 1, LOCAL(3),
  // parameters_of(body) statements
  var_parameters_of, 1, var_397_3_body, 1, LOCAL(1),
  // tabular_function
  func_tabular_function, 3, LOCAL(2), LOCAL(1), LOCAL(3), TAIL_CALL,
  POS(408, 21),
  POS(410, 40),
  POS(410, 21),
  POS(412, 36),
  POS(411, 21)
};

static TAB_NUM t_lambda_75[] = {
  0, // locals
  0, // parameters
  //  ""
  LET, 1, string_6, TAIL_CALL,
  POS(413, 17)
};

static TAB_NUM t_lambda_76[] = {
  1, // locals
  0, // parameters
  // tabular_function("module_entry" empty_list top_level_statements)
  func_tabular_function, 3, str_module_entry, var_empty_list, var_28_32_top_level_statements, 1, LOCAL(1),
  //  tabular_function("module_entry" empty_list top_level_statements)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(417, 12),
  POS(417, 11)
};

static TAB_NUM t_func_tabular_function[] = {
  1, // locals
  3, // parameters
  var_419_20_name,
  var_419_25_parameters,
  var_419_36_statements,
  // is_empty
  var_is_empty, 1, var_419_36_statements, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_77, lambda_78, TAIL_CALL,
  POS(421, 18),
  POS(420, 5)
};

static TAB_NUM t_lambda_77[] = {
  0, // locals
  0, // parameters
  //  ""
  LET, 1, string_6, TAIL_CALL,
  POS(422, 9)
};

static TAB_NUM t_lambda_78[] = {
  7, // locals
  0, // parameters
  // !temp_count 0
  LET, 1, num_0, 1, var_temp_count,
  // !local_mapping empty_hash_table # maps variable names to local indices
  LET, 1, var_empty_hash_table, 1, var_local_mapping,
  // for_each !local_mapping !temp_count
  var_for_each, 3, var_419_25_parameters, lambda_79, lambda_83, 2, var_local_mapping, var_temp_count,
  // for_each !local_mapping !temp_count
  var_for_each, 3, var_419_36_statements, lambda_84, lambda_96, 2, var_local_mapping, var_temp_count,
  // $n length_of(statements)
  var_length_of, 1, var_419_36_statements, 1, var_472_1_n,
  // length_of(local_mapping)), // locals
  var_length_of, 1, var_local_mapping, 1, LOCAL(1),
  // temp_count+length_of(local_mapping)), // locals
  var_std__plus, 2, var_temp_count, LOCAL(1), 1, LOCAL(2),
  // add_parameters())@
  func_add_parameters, 0, 1, LOCAL(3),
  // map_reduce(statements: (idx statement) compile statement idx == n))@
  var_map_reduce, 2, var_419_36_statements, lambda_map_reducestatements, 1, LOCAL(4),
  // map_reduce(statements add_source_positions) 1 -3))
  var_map_reduce, 2, var_419_36_statements, var_725_1_add_source_positions, 1, LOCAL(5),
  // range(map_reduce(statements add_source_positions) 1 -3))
  var_range, 3, LOCAL(5), num_1, minus_num_3, 1, LOCAL(6),
  // "
  var_std__string, 9, str_static_TAB_NUM_t, var_419_20_name, string_31, LOCAL(2), str___locals, LOCAL(3), LOCAL(4), LOCAL(6), string_4, 1, LOCAL(7),
  // -> "
  LET, 1, LOCAL(7), TAIL_CALL,
  POS(424, 9),
  POS(425, 9),
  POS(426, 9),
  POS(441, 9),
  POS(472, 9),
  POS(476, 26),
  POS(476, 15),
  POS(477, 13),
  POS(478, 13),
  POS(479, 19),
  POS(479, 13),
  POS(473, 12),
  POS(473, 9)
};

static TAB_NUM t_lambda_79[] = {
  2, // locals
  1, // parameters
  var_428_3_parameter,
  // node_type_of(parameter) == REDEFINITION: # dummy parameter
  var_node_type_of, 1, var_428_3_parameter, 1, LOCAL(1),
  // node_type_of(parameter) == REDEFINITION: # dummy parameter
  var_std__equal, 2, LOCAL(1), var_REDEFINITION, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_80, lambda_81, TAIL_CALL,
  POS(430, 15),
  POS(430, 15),
  POS(429, 13)
};

static TAB_NUM t_lambda_80[] = {
  0, // locals
  0, // parameters
  // !temp_count 1
  LET, 1, num_1, 1, var_temp_count,
  // next
  var_next, 0, TAIL_CALL,
  POS(431, 17),
  POS(432, 17)
};

static TAB_NUM t_lambda_81[] = {
  3, // locals
  0, // parameters
  // $parameter_name funky::name_of(parameter)
  var_funky__name_of, 1, var_428_3_parameter, 1, var_434_1_parameter_name,
  // variables(parameter_name)) == LOCAL:
  var_variables, 1, var_434_1_parameter_name, 1, LOCAL(1),
  // first(variables(parameter_name)) == LOCAL:
  var_first, 1, LOCAL(1), 1, LOCAL(2),
  // first(variables(parameter_name)) == LOCAL:
  var_std__equal, 2, LOCAL(2), var_LOCAL, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_82, var_next, TAIL_CALL,
  POS(434, 17),
  POS(436, 25),
  POS(436, 19),
  POS(436, 19),
  POS(435, 17)
};

static TAB_NUM t_lambda_82[] = {
  3, // locals
  0, // parameters
  // length_of(local_mapping)+1
  var_length_of, 1, var_local_mapping, 1, LOCAL(1),
  // !local_mapping(parameter_name) length_of(local_mapping)+1
  var_std__plus, 2, LOCAL(1), num_1, 1, LOCAL(3),
  // local_mapping(parameter_name) length_of(local_mapping)+1
  var_local_mapping, 2, var_434_1_parameter_name, LOCAL(3), 1, var_local_mapping,
  // next
  var_next, 0, TAIL_CALL,
  POS(437, 52),
  POS(437, 21),
  POS(437, 22),
  POS(438, 21)
};

static TAB_NUM t_lambda_83[] = {
  0, // locals
  0, // parameters
  //  local_mapping temp_count
  LET, 2, var_local_mapping, var_temp_count, TAIL_CALL,
  POS(440, 13)
};

static TAB_NUM t_lambda_84[] = {
  2, // locals
  1, // parameters
  var_443_3_statement,
  // node_type_of(statement) == STATEMENT:
  var_node_type_of, 1, var_443_3_statement, 1, LOCAL(1),
  // node_type_of(statement) == STATEMENT:
  var_std__equal, 2, LOCAL(1), var_STATEMENT, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_85, var_next, TAIL_CALL,
  POS(445, 15),
  POS(445, 15),
  POS(444, 13)
};

static TAB_NUM t_lambda_85[] = {
  1, // locals
  0, // parameters
  // head_of(statement)
  var_head_of, 1, var_443_3_statement, 1, LOCAL(1),
  // check_for_locals !local_mapping !temp_count head_of(statement)
  func_check_for_locals, 1, LOCAL(1), 2, var_local_mapping, var_temp_count,
  // arguments_of(statement)
  var_arguments_of, 1, var_443_3_statement, 1, LOCAL(1),
  // for_each arguments_of(statement)
  var_for_each, 3, LOCAL(1), lambda_86, var_next, TAIL_CALL,
  POS(446, 61),
  POS(446, 17),
  POS(447, 26),
  POS(447, 17)
};

static TAB_NUM t_lambda_86[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 448_3_argument
  // check_for_locals !local_mapping !temp_count argument
  func_check_for_locals, 1, LOCAL(1), 2, var_local_mapping, var_temp_count,
  // next
  var_next, 0, TAIL_CALL,
  POS(449, 21),
  POS(450, 21)
};

static TAB_NUM t_func_check_for_locals[] = {
  0, // locals
  1, // parameters
  var_453_20_node,
  // cond
  var_cond, 3, lambda_87, lambda_90, lambda_94, TAIL_CALL,
  POS(454, 19)
};

static TAB_NUM t_lambda_87[] = {
  3, // locals
  0, // parameters
  // node_type_of(node) == REDEFINITION
  var_node_type_of, 1, var_453_20_node, 1, LOCAL(1),
  // node_type_of(node) == REDEFINITION
  var_std__equal, 2, LOCAL(1), var_REDEFINITION, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_88, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_89, TAIL_CALL,
  POS(457, 25),
  POS(457, 25),
  POS(456, 25),
  POS(455, 23)
};

static TAB_NUM t_lambda_88[] = {
  2, // locals
  0, // parameters
  // kind_of(node) == TEMPORARY
  var_kind_of, 1, var_453_20_node, 1, LOCAL(1),
  // kind_of(node) == TEMPORARY
  var_std__equal, 2, LOCAL(1), var_TEMPORARY, 1, LOCAL(2),
  // kind_of(node) == TEMPORARY
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(458, 25),
  POS(458, 25),
  POS(458, 25)
};

static TAB_NUM t_lambda_89[] = {
  2, // locals
  0, // parameters
  // no_of(node))
  var_no_of, 1, var_453_20_node, 1, LOCAL(1),
  // max(temp_count no_of(node))
  var_max, 2, var_temp_count, LOCAL(1), 1, LOCAL(2),
  //  local_mapping max(temp_count no_of(node))
  LET, 2, var_local_mapping, LOCAL(2), TAIL_CALL,
  POS(459, 55),
  POS(459, 40),
  POS(459, 25)
};

static TAB_NUM t_lambda_90[] = {
  2, // locals
  0, // parameters
  // node_type_of(node) == DEFINITION:
  var_node_type_of, 1, var_453_20_node, 1, LOCAL(1),
  // node_type_of(node) == DEFINITION:
  var_std__equal, 2, LOCAL(1), var_DEFINITION, 1, LOCAL(2),
  //  node_type_of(node) == DEFINITION:
  LET, 2, LOCAL(2), lambda_91, TAIL_CALL,
  POS(460, 24),
  POS(460, 24),
  POS(460, 23)
};

static TAB_NUM t_lambda_91[] = {
  4, // locals
  0, // parameters
  // $identifier identifier_of(node)
  var_identifier_of, 1, var_453_20_node, 1, var_461_1_identifier,
  // variables(identifier)) == LOCAL
  var_variables, 1, var_461_1_identifier, 1, LOCAL(1),
  // first(variables(identifier)) == LOCAL
  var_first, 1, LOCAL(1), 1, LOCAL(2),
  // first(variables(identifier)) == LOCAL
  var_std__equal, 2, LOCAL(2), var_LOCAL, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_92, lambda_93, 1, LOCAL(4),
  // ->
  LET, 2, LOCAL(4), var_temp_count, TAIL_CALL,
  POS(461, 23),
  POS(464, 33),
  POS(464, 27),
  POS(464, 27),
  POS(463, 25),
  POS(462, 23)
};

static TAB_NUM t_lambda_92[] = {
  3, // locals
  0, // parameters
  // length_of(local_mapping)+1)
  var_length_of, 1, var_local_mapping, 1, LOCAL(1),
  // length_of(local_mapping)+1)
  var_std__plus, 2, LOCAL(1), num_1, 1, LOCAL(2),
  // local_mapping(identifier length_of(local_mapping)+1)
  var_local_mapping, 2, var_461_1_identifier, LOCAL(2), 1, LOCAL(3),
  //  local_mapping(identifier length_of(local_mapping)+1)
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(465, 55),
  POS(465, 55),
  POS(465, 30),
  POS(465, 29)
};

static TAB_NUM t_lambda_93[] = {
  0, // locals
  0, // parameters
  //  local_mapping
  LET, 1, var_local_mapping, TAIL_CALL,
  POS(466, 29)
};

static TAB_NUM t_lambda_94[] = {
  0, // locals
  0, // parameters
  //  true
  LET, 2, var_true, lambda_95, TAIL_CALL,
  POS(468, 23)
};

static TAB_NUM t_lambda_95[] = {
  0, // locals
  0, // parameters
  //  local_mapping temp_count
  LET, 2, var_local_mapping, var_temp_count, TAIL_CALL,
  POS(469, 25)
};

static TAB_NUM t_lambda_96[] = {
  0, // locals
  0, // parameters
  //  local_mapping temp_count
  LET, 2, var_local_mapping, var_temp_count, TAIL_CALL,
  POS(471, 13)
};

static TAB_NUM t_lambda_map_reducestatements[] = {
  3, // locals
  2, // parameters
  LOCAL(2), // 478_26_idx
  LOCAL(3), // 478_30_statement
  // idx == n))@
  var_std__equal, 2, LOCAL(2), var_472_1_n, 1, LOCAL(1),
  // compile statement idx == n))@
  func_compile, 2, LOCAL(3), LOCAL(1), TAIL_CALL,
  POS(478, 70),
  POS(478, 52)
};

static TAB_NUM t_func_add_parameters[] = {
  1, // locals
  0, // parameters
  // $parameter_count length_of(parameters)
  var_length_of, 1, var_419_25_parameters, 1, var_483_1_parameter_count,
  // any_of(parameters: (parameter) -> option_of(parameter).is_defined):
  var_any_of, 2, var_419_25_parameters, lambda_any_ofparameters, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_97, lambda_98, TAIL_CALL,
  POS(483, 11),
  POS(485, 13),
  POS(484, 11)
};

static TAB_NUM t_lambda_any_ofparameters[] = {
  3, // locals
  1, // parameters
  LOCAL(3), // 485_20_parameter
  // option_of(parameter).is_defined):
  var_option_of, 1, LOCAL(3), 1, LOCAL(1),
  // is_defined):
  var_is_defined, 1, LOCAL(1), 1, LOCAL(2),
  // -> option_of(parameter).is_defined):
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(485, 47),
  POS(485, 68),
  POS(485, 44)
};

static TAB_NUM t_lambda_97[] = {
  2, // locals
  0, // parameters
  // "
  var_std__string, 3, string_32, var_483_1_parameter_count, str___parameters, 1, LOCAL(1),
  // map_reduce(parameters add_parameter_with_option append "")
  var_map_reduce, 4, var_419_25_parameters, func_add_parameter_with_option, var_append, string_6, 1, LOCAL(2),
  // append
  var_append, 2, LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(487, 17),
  POS(490, 17),
  POS(486, 15)
};

static TAB_NUM t_lambda_98[] = {
  2, // locals
  0, // parameters
  // "
  var_std__string, 3, string_8, var_483_1_parameter_count, str___parameters, 1, LOCAL(1),
  // map_reduce(parameters add_parameter append "")
  var_map_reduce, 4, var_419_25_parameters, func_add_parameter, var_append, string_6, 1, LOCAL(2),
  // append
  var_append, 2, LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(493, 17),
  POS(496, 17),
  POS(492, 15)
};

static TAB_NUM t_func_add_parameter[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 498_17_parameter
  // parameter_to_index(parameter)
  func_parameter_to_index, 1, LOCAL(2), 1, LOCAL(1),
  // append "  " parameter_to_index(parameter)
  var_append, 2, string_8, LOCAL(1), TAIL_CALL,
  POS(499, 23),
  POS(499, 11)
};

static TAB_NUM t_func_add_parameter_with_option[] = {
  4, // locals
  1, // parameters
  LOCAL(4), // 501_29_parameter
  // option_of(parameter).to_option
  var_option_of, 1, LOCAL(4), 1, LOCAL(1),
  // to_option
  var_718_1_to_option, 1, LOCAL(1), 1, LOCAL(2),
  // parameter_to_index(parameter)
  func_parameter_to_index, 1, LOCAL(4), 1, LOCAL(3),
  // append
  var_append, 4, string_8, LOCAL(2), string_30, LOCAL(3), TAIL_CALL,
  POS(504, 13),
  POS(504, 34),
  POS(506, 13),
  POS(502, 11)
};

static TAB_NUM t_func_parameter_to_index[] = {
  2, // locals
  1, // parameters
  var_508_22_parameter,
  // node_type_of(parameter) == REDEFINITION
  var_node_type_of, 1, var_508_22_parameter, 1, LOCAL(1),
  // node_type_of(parameter) == REDEFINITION
  var_std__equal, 2, LOCAL(1), var_REDEFINITION, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_99, lambda_100, TAIL_CALL,
  POS(510, 13),
  POS(510, 13),
  POS(509, 11)
};

static TAB_NUM t_lambda_99[] = {
  2, // locals
  0, // parameters
  // no_of(parameter))),@nl;"
  var_no_of, 1, var_508_22_parameter, 1, LOCAL(1),
  // "LOCAL(@(no_of(parameter))),@nl;"
  var_std__string, 3, str_LOCAL, LOCAL(1), string_33, 1, LOCAL(2),
  //  "LOCAL(@(no_of(parameter))),@nl;"
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(511, 25),
  POS(511, 16),
  POS(511, 15)
};

static TAB_NUM t_lambda_100[] = {
  1, // locals
  0, // parameters
  // $parameter_name funky::name_of(parameter)
  var_funky__name_of, 1, var_508_22_parameter, 1, var_513_1_parameter_name,
  // $idx local_mapping(parameter_name)
  var_local_mapping, 1, var_513_1_parameter_name, 1, var_514_1_idx,
  // is_defined
  var_is_defined, 1, var_514_1_idx, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_101, lambda_102, TAIL_CALL,
  POS(513, 15),
  POS(514, 15),
  POS(516, 21),
  POS(515, 15)
};

static TAB_NUM t_lambda_101[] = {
  2, // locals
  0, // parameters
  // temp_count+idx)), // @(parameter_name)@nl;"
  var_std__plus, 2, var_temp_count, var_514_1_idx, 1, LOCAL(1),
  // "LOCAL(@(temp_count+idx)), // @(parameter_name)@nl;"
  var_std__string, 5, str_LOCAL, LOCAL(1), string_34, var_513_1_parameter_name, string_1, 1, LOCAL(2),
  //  "LOCAL(@(temp_count+idx)), // @(parameter_name)@nl;"
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(517, 29),
  POS(517, 20),
  POS(517, 19)
};

static TAB_NUM t_lambda_102[] = {
  1, // locals
  0, // parameters
  // "var_@(parameter_name),@nl;"
  var_std__string, 3, str_var, var_513_1_parameter_name, string_10, 1, LOCAL(1),
  //  "var_@(parameter_name),@nl;"
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(518, 20),
  POS(518, 19)
};

static TAB_NUM t_func_compile[] = {
  7, // locals
  2, // parameters
  var_520_11_self,
  var_520_16_is_last,
  // $head head_of(self)
  var_head_of, 1, var_520_11_self, 1, var_521_1_head,
  // $arguments arguments_of(self)
  var_arguments_of, 1, var_520_11_self, 1, LOCAL(6),
  // $input_arguments filter(arguments is_an_input)
  var_filter, 2, LOCAL(6), var_is_an_input, 1, LOCAL(7),
  // $output_arguments filter(arguments is_an_output)
  var_filter, 2, LOCAL(6), var_is_an_output, 1, var_524_1_output_arguments,
  // $invalid_last_statement
  var_std__and, 2, var_520_16_is_last, lambda_103, 1, var_525_1_invalid_last_statement,
  // invalid_last_statement && name != "module_entry":
  var_std__and, 2, var_525_1_invalid_last_statement, lambda_104, 1, LOCAL(1),
  // on invalid_last_statement && name != "module_entry":
  var_on, 2, LOCAL(1), lambda_105, 0,
  // $input_count length_of(input_arguments)
  var_length_of, 1, LOCAL(7), 1, var_529_1_input_count,
  // $output_count length_of(output_arguments)
  var_length_of, 1, var_524_1_output_arguments, 1, var_530_1_output_count,
  // $is_a_tail_call (is_last && output_arguments.is_empty)
  var_std__and, 2, var_520_16_is_last, lambda_106, 1, var_531_1_is_a_tail_call,
  // is_an_io_call:
  var_is_an_io_call, 1, var_520_11_self, 1, LOCAL(1),
  // !output_count
  var_if, 3, LOCAL(1), lambda_self_is_an_io_call, lambda_109, 1, var_530_1_output_count,
  // $inputs map_reduce(input_arguments to_separated_index append "")
  var_map_reduce, 4, LOCAL(7), var_585_1_to_separated_index, var_append, string_6, 1, var_544_1_inputs,
  // $outputs map_reduce(output_arguments to_separated_index append "")
  var_map_reduce, 4, var_524_1_output_arguments, var_585_1_to_separated_index, var_append, string_6, 1, var_545_1_outputs,
  // source_position_of(self))@
  var_source_position_of, 1, var_520_11_self, 1, LOCAL(1),
  // "
  var_std__string, 2, string_36, LOCAL(1), 1, LOCAL(2),
  // node_type_of(head) == FUNCTOR:
  var_node_type_of, 1, var_521_1_head, 1, LOCAL(3),
  // node_type_of(head) == FUNCTOR:
  var_std__equal, 2, LOCAL(3), var_FUNCTOR, 1, LOCAL(4),
  // if
  var_if, 3, LOCAL(4), lambda_112, lambda_122, 1, LOCAL(5),
  // append
  var_append, 2, LOCAL(2), LOCAL(5), TAIL_CALL,
  POS(521, 7),
  POS(522, 7),
  POS(523, 7),
  POS(524, 7),
  POS(525, 7),
  POS(527, 10),
  POS(527, 7),
  POS(529, 7),
  POS(530, 7),
  POS(531, 7),
  POS(534, 16),
  POS(532, 7),
  POS(544, 7),
  POS(545, 7),
  POS(549, 18),
  POS(547, 9),
  POS(551, 11),
  POS(551, 11),
  POS(550, 9),
  POS(546, 7)
};

static TAB_NUM t_lambda_103[] = {
  2, // locals
  0, // parameters
  // all_of(output_arguments is_a_dummy_definition))
  var_all_of, 2, var_524_1_output_arguments, var_is_a_dummy_definition, 1, LOCAL(1),
  // not(all_of(output_arguments is_a_dummy_definition))
  var_not, 1, LOCAL(1), 1, LOCAL(2),
  // not(all_of(output_arguments is_a_dummy_definition))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(526, 24),
  POS(526, 20),
  POS(526, 20)
};

static TAB_NUM t_lambda_104[] = {
  2, // locals
  0, // parameters
  // name != "module_entry":
  var_std__equal, 2, var_419_20_name, str_module_entry, 1, LOCAL(1),
  // name != "module_entry":
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // name != "module_entry":
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(527, 36),
  POS(527, 36),
  POS(527, 36)
};

static TAB_NUM t_lambda_105[] = {
  0, // locals
  0, // parameters
  // syntax_error "Last statement is not a tail call" self
  var_syntax_error, 2, str_Last_statement_i, var_520_11_self, TAIL_CALL,
  POS(528, 9)
};

static TAB_NUM t_lambda_106[] = {
  1, // locals
  0, // parameters
  // is_empty)
  var_is_empty, 1, var_524_1_output_arguments, 1, LOCAL(1),
  // output_arguments.is_empty)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(531, 52),
  POS(531, 35)
};

static TAB_NUM t_lambda_self_is_an_io_call[] = {
  0, // locals
  0, // parameters
  // if
  var_if, 3, var_531_1_is_a_tail_call, lambda_107, lambda_108, TAIL_CALL,
  POS(535, 13)
};

static TAB_NUM t_lambda_107[] = {
  0, // locals
  0, // parameters
  //  "IO_TAIL_CALL"
  LET, 1, str_IO_TAIL_CALL, TAIL_CALL,
  POS(537, 17)
};

static TAB_NUM t_lambda_108[] = {
  1, // locals
  0, // parameters
  // "IO_CALL(@(output_count))"
  var_std__string, 3, str_IO_CALL, var_530_1_output_count, string_35, 1, LOCAL(1),
  //  "IO_CALL(@(output_count))"
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(538, 18),
  POS(538, 17)
};

static TAB_NUM t_lambda_109[] = {
  0, // locals
  0, // parameters
  // if
  var_if, 3, var_531_1_is_a_tail_call, lambda_110, lambda_111, TAIL_CALL,
  POS(540, 13)
};

static TAB_NUM t_lambda_110[] = {
  0, // locals
  0, // parameters
  //  "TAIL_CALL"
  LET, 1, str_TAIL_CALL, TAIL_CALL,
  POS(542, 17)
};

static TAB_NUM t_lambda_111[] = {
  0, // locals
  0, // parameters
  //  output_count
  LET, 1, var_530_1_output_count, TAIL_CALL,
  POS(543, 17)
};

static TAB_NUM t_lambda_112[] = {
  1, // locals
  0, // parameters
  // identifier_of(head)
  var_identifier_of, 1, var_521_1_head, 1, LOCAL(1),
  // case identifier_of(head)
  var_case, 6, LOCAL(1), sequence_553_1, lambda_113, str__assign_attribut, lambda_assign_attributes, lambda_116, TAIL_CALL,
  POS(552, 18),
  POS(552, 13)
};

static TAB_NUM t_lambda_113[] = {
  2, // locals
  0, // parameters
  // output_count == 0 && not(is_last):
  var_std__equal, 2, var_530_1_output_count, num_0, 1, LOCAL(1),
  // output_count == 0 && not(is_last):
  var_std__and, 2, LOCAL(1), lambda_114, 1, LOCAL(2),
  // on output_count == 0 && not(is_last):
  var_on, 2, LOCAL(2), lambda_115, 0,
  // "
  var_std__string, 7, str___LET, var_529_1_input_count, var_544_1_inputs, string_30, var_530_1_output_count, var_545_1_outputs, string_10, 1, LOCAL(1),
  // -> "
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(554, 20),
  POS(554, 20),
  POS(554, 17),
  POS(557, 20),
  POS(557, 17)
};

static TAB_NUM t_lambda_114[] = {
  1, // locals
  0, // parameters
  // not(is_last):
  var_not, 1, var_520_16_is_last, 1, LOCAL(1),
  // not(is_last):
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(554, 41),
  POS(554, 41)
};

static TAB_NUM t_lambda_115[] = {
  0, // locals
  0, // parameters
  // syntax_error "Return statement not allowed within function body"
  var_syntax_error, 2, str_Return_statement, var_520_11_self, TAIL_CALL,
  POS(555, 19)
};

static TAB_NUM t_lambda_assign_attributes[] = {
  2, // locals
  0, // parameters
  // input_count-1)@(inputs)@(outputs),
  var_std__minus, 2, var_529_1_input_count, num_1, 1, LOCAL(1),
  // "
  var_std__string, 5, str___LET_2, LOCAL(1), var_544_1_inputs, var_545_1_outputs, string_10, 1, LOCAL(2),
  //  "
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(564, 22),
  POS(561, 39),
  POS(561, 38)
};

static TAB_NUM t_lambda_116[] = {
  1, // locals
  0, // parameters
  // to_index), @
  var_to_index, 1, var_521_1_head, 1, LOCAL(1),
  // $statement "
  var_std__string, 9, string_8, LOCAL(1), string_30, var_529_1_input_count, var_544_1_inputs, string_30, var_530_1_output_count, var_545_1_outputs, string_10, 1, var_566_1_statement,
  // is_last && not(is_a_tail_call):
  var_std__and, 2, var_520_16_is_last, lambda_117, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_118, lambda_121, TAIL_CALL,
  POS(568, 28),
  POS(566, 17),
  POS(571, 19),
  POS(570, 17)
};

static TAB_NUM t_lambda_117[] = {
  1, // locals
  0, // parameters
  // not(is_a_tail_call):
  var_not, 1, var_531_1_is_a_tail_call, 1, LOCAL(1),
  // not(is_a_tail_call):
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(571, 30),
  POS(571, 30)
};

static TAB_NUM t_lambda_118[] = {
  0, // locals
  0, // parameters
  // if
  var_if, 3, var_525_1_invalid_last_statement, lambda_119, lambda_120, TAIL_CALL,
  POS(572, 21)
};

static TAB_NUM t_lambda_119[] = {
  1, // locals
  0, // parameters
  // "
  var_std__string, 2, var_566_1_statement, str___LET_1_0_TAIL_C, 1, LOCAL(1),
  //  "
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(574, 26),
  POS(574, 25)
};

static TAB_NUM t_lambda_120[] = {
  1, // locals
  0, // parameters
  // "
  var_std__string, 2, var_566_1_statement, str___LET_0_TAIL_CAL, 1, LOCAL(1),
  //  "
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(577, 26),
  POS(577, 25)
};

static TAB_NUM t_lambda_121[] = {
  0, // locals
  0, // parameters
  //  statement
  LET, 1, var_566_1_statement, TAIL_CALL,
  POS(580, 21)
};

static TAB_NUM t_lambda_122[] = {
  2, // locals
  0, // parameters
  // to_index),
  var_to_index, 1, var_521_1_head, 1, LOCAL(1),
  // "
  var_std__string, 5, str___LET_3, var_544_1_inputs, string_37, LOCAL(1), string_10, 1, LOCAL(2),
  //  "
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(583, 42),
  POS(581, 14),
  POS(581, 13)
};

static TAB_NUM t_func_funky_types__node___to_separated_index[] = {
  3, // locals
  1, // parameters
  LOCAL(3), // 587_40_self
  // to_index)
  var_to_index, 1, LOCAL(3), 1, LOCAL(1),
  // append(", " self.to_index)
  var_append, 2, string_30, LOCAL(1), 1, LOCAL(2),
  // -> append(", " self.to_index)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(587, 73),
  POS(587, 56),
  POS(587, 53)
};

static TAB_NUM t_func_funky_types__inline_attribute_value_pair___to_separated_index[] = {
  5, // locals
  1, // parameters
  LOCAL(5), // 589_63_self
  // retrieve_name(self)), @(expression_of(self).to_index)"
  func_retrieve_name, 1, LOCAL(5), 1, LOCAL(1),
  // expression_of(self).to_index)"
  var_expression_of, 1, LOCAL(5), 1, LOCAL(2),
  // to_index)"
  var_to_index, 1, LOCAL(2), 1, LOCAL(3),
  // ", @(retrieve_name(self)), @(expression_of(self).to_index)"
  var_std__string, 4, string_30, LOCAL(1), string_30, LOCAL(3), 1, LOCAL(4),
  // -> ", @(retrieve_name(self)), @(expression_of(self).to_index)"
  LET, 1, LOCAL(4), TAIL_CALL,
  POS(590, 17),
  POS(590, 41),
  POS(590, 61),
  POS(590, 12),
  POS(590, 9)
};

static TAB_NUM t_func_funky_types__inline_method_value_pair___to_separated_index[] = {
  5, // locals
  1, // parameters
  LOCAL(5), // 592_60_self
  // retrieve_name(self)), @(expression_of(self).to_index)"
  func_retrieve_name, 1, LOCAL(5), 1, LOCAL(1),
  // expression_of(self).to_index)"
  var_expression_of, 1, LOCAL(5), 1, LOCAL(2),
  // to_index)"
  var_to_index, 1, LOCAL(2), 1, LOCAL(3),
  // ", -@(retrieve_name(self)), @(expression_of(self).to_index)"
  var_std__string, 4, string_25, LOCAL(1), string_30, LOCAL(3), 1, LOCAL(4),
  // -> ", -@(retrieve_name(self)), @(expression_of(self).to_index)"
  LET, 1, LOCAL(4), TAIL_CALL,
  POS(593, 18),
  POS(593, 42),
  POS(593, 62),
  POS(593, 12),
  POS(593, 9)
};

static TAB_NUM t_func_funky_types__attribute_value_pair___to_separated_index[] = {
  5, // locals
  1, // parameters
  LOCAL(5), // 595_56_self
  // retrieve_name(self)), @(argument_of(self).to_index)"
  func_retrieve_name, 1, LOCAL(5), 1, LOCAL(1),
  // argument_of(self).to_index)"
  var_argument_of, 1, LOCAL(5), 1, LOCAL(2),
  // to_index)"
  var_to_index, 1, LOCAL(2), 1, LOCAL(3),
  // ", @(retrieve_name(self)), @(argument_of(self).to_index)"
  var_std__string, 4, string_30, LOCAL(1), string_30, LOCAL(3), 1, LOCAL(4),
  // -> ", @(retrieve_name(self)), @(argument_of(self).to_index)"
  LET, 1, LOCAL(4), TAIL_CALL,
  POS(596, 17),
  POS(596, 41),
  POS(596, 59),
  POS(596, 12),
  POS(596, 9)
};

static TAB_NUM t_func_funky_types__method_value_pair___to_separated_index[] = {
  5, // locals
  1, // parameters
  LOCAL(5), // 598_53_self
  // retrieve_name(self)), @(argument_of(self).to_index)"
  func_retrieve_name, 1, LOCAL(5), 1, LOCAL(1),
  // argument_of(self).to_index)"
  var_argument_of, 1, LOCAL(5), 1, LOCAL(2),
  // to_index)"
  var_to_index, 1, LOCAL(2), 1, LOCAL(3),
  // ", -@(retrieve_name(self)), @(argument_of(self).to_index)"
  var_std__string, 4, string_25, LOCAL(1), string_30, LOCAL(3), 1, LOCAL(4),
  // -> ", -@(retrieve_name(self)), @(argument_of(self).to_index)"
  LET, 1, LOCAL(4), TAIL_CALL,
  POS(599, 18),
  POS(599, 42),
  POS(599, 60),
  POS(599, 12),
  POS(599, 9)
};

static TAB_NUM t_func_funky_types__type_function___to_separated_index[] = {
  3, // locals
  1, // parameters
  LOCAL(3), // 601_49_self
  // mangled_literals(self))"
  var_mangled_literals, 1, LOCAL(3), 1, LOCAL(1),
  // ", 0, @(mangled_literals(self))"
  var_std__string, 2, string_19, LOCAL(1), 1, LOCAL(2),
  // -> ", 0, @(mangled_literals(self))"
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(602, 20),
  POS(602, 12),
  POS(602, 9)
};

static TAB_NUM t_func_funky_types__numeric_literal___add_literal[] = {
  3, // locals
  1, // parameters
  LOCAL(3), // 606_44_self
  // !mangled_literals(self) funky::key_of(self)
  var_funky__key_of, 1, LOCAL(3), 1, LOCAL(2),
  // mangled_literals(self) funky::key_of(self)
  var_mangled_literals, 2, LOCAL(3), LOCAL(2), 1, var_mangled_literals,
  // -> mangled_literals mangling_counter
  LET, 2, var_mangled_literals, var_mangling_counter, TAIL_CALL,
  POS(607, 5),
  POS(607, 6),
  POS(608, 5)
};

static TAB_NUM t_func_funky_types__character_sequence___add_literal[] = {
  1, // locals
  1, // parameters
  var_610_47_self,
  // $mangled ""
  LET, 1, string_6, 1, var_611_1_mangled,
  // characters_of(self)
  var_characters_of, 1, var_610_47_self, 1, LOCAL(1),
  // for_each characters_of(self)
  var_for_each, 3, LOCAL(1), lambda_123, lambda_132, TAIL_CALL,
  POS(611, 5),
  POS(612, 14),
  POS(612, 5)
};

static TAB_NUM t_lambda_123[] = {
  0, // locals
  1, // parameters
  var_613_3_chr,
  // cond
  var_cond, 4, lambda_124, lambda_125, lambda_129, lambda_131, TAIL_CALL,
  POS(614, 9)
};

static TAB_NUM t_lambda_124[] = {
  3, // locals
  0, // parameters
  // length_of(mangled) >= 16 break
  var_length_of, 1, var_611_1_mangled, 1, LOCAL(1),
  // length_of(mangled) >= 16 break
  var_std__less, 2, LOCAL(1), num_16, 1, LOCAL(2),
  // length_of(mangled) >= 16 break
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  //  length_of(mangled) >= 16 break
  LET, 2, LOCAL(3), var_break, TAIL_CALL,
  POS(615, 14),
  POS(615, 14),
  POS(615, 14),
  POS(615, 13)
};

static TAB_NUM t_lambda_125[] = {
  2, // locals
  0, // parameters
  // is_a_letter || chr.is_a_digit || chr == '_':
  var_is_a_letter, 1, var_613_3_chr, 1, LOCAL(1),
  // is_a_letter || chr.is_a_digit || chr == '_':
  var_std__or, 2, LOCAL(1), lambda_126, 1, LOCAL(2),
  //  chr.is_a_letter || chr.is_a_digit || chr == '_':
  LET, 2, LOCAL(2), lambda_128, TAIL_CALL,
  POS(616, 18),
  POS(616, 18),
  POS(616, 13)
};

static TAB_NUM t_lambda_126[] = {
  2, // locals
  0, // parameters
  // is_a_digit || chr == '_':
  var_is_a_digit, 1, var_613_3_chr, 1, LOCAL(1),
  // is_a_digit || chr == '_':
  var_std__or, 2, LOCAL(1), lambda_127, 1, LOCAL(2),
  // chr.is_a_digit || chr == '_':
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(616, 37),
  POS(616, 37),
  POS(616, 33)
};

static TAB_NUM t_lambda_127[] = {
  1, // locals
  0, // parameters
  // chr == '_':
  var_std__equal, 2, var_613_3_chr, chr_95, 1, LOCAL(1),
  // chr == '_':
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(616, 51),
  POS(616, 51)
};

static TAB_NUM t_lambda_128[] = {
  0, // locals
  0, // parameters
  // push &mangled chr
  var_push, 2, var_611_1_mangled, var_613_3_chr, 1, var_611_1_mangled,
  // next
  var_next, 0, TAIL_CALL,
  POS(617, 13),
  POS(618, 13)
};

static TAB_NUM t_lambda_129[] = {
  1, // locals
  0, // parameters
  // chr == ' ':
  var_std__equal, 2, var_613_3_chr, chr_32, 1, LOCAL(1),
  //  chr == ' ':
  LET, 2, LOCAL(1), lambda_130, TAIL_CALL,
  POS(619, 14),
  POS(619, 13)
};

static TAB_NUM t_lambda_130[] = {
  0, // locals
  0, // parameters
  // push &mangled '_'
  var_push, 2, var_611_1_mangled, chr_95, 1, var_611_1_mangled,
  // next
  var_next, 0, TAIL_CALL,
  POS(620, 13),
  POS(621, 13)
};

static TAB_NUM t_lambda_131[] = {
  0, // locals
  0, // parameters
  //  true next
  LET, 2, var_true, var_next, TAIL_CALL,
  POS(622, 13)
};

static TAB_NUM t_lambda_132[] = {
  1, // locals
  0, // parameters
  // remove_trailing_underscores_and_digits &mangled
  func_remove_trailing_underscores_and_digits, 1, var_611_1_mangled, 1, var_611_1_mangled,
  // is_empty:
  var_is_empty, 1, var_611_1_mangled, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_mangled_is_empty, lambda_133, TAIL_CALL,
  POS(624, 9),
  POS(626, 19),
  POS(625, 9)
};

static TAB_NUM t_lambda_mangled_is_empty[] = {
  2, // locals
  0, // parameters
  // check_mangling $n !mangling_counter "string"
  func_check_mangling, 1, str_string, 2, LOCAL(2), var_mangling_counter,
  // "string_@(n)"
  var_std__string, 2, str_string_2, LOCAL(2), 1, LOCAL(1),
  // add_mangled "string_@(n)"
  func_add_mangled, 1, LOCAL(1), TAIL_CALL,
  POS(627, 13),
  POS(628, 25),
  POS(628, 13)
};

static TAB_NUM t_lambda_133[] = {
  1, // locals
  0, // parameters
  // append "str_" &mangled
  var_append, 2, str_str, var_611_1_mangled, 1, var_611_1_mangled,
  // check_mangling $n !mangling_counter mangled
  func_check_mangling, 1, var_611_1_mangled, 2, var_631_16_n, var_mangling_counter,
  // 1:
  var_std__less, 2, num_1, var_631_16_n, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_134, lambda_135, TAIL_CALL,
  POS(630, 13),
  POS(631, 13),
  POS(633, 19),
  POS(632, 13)
};

static TAB_NUM t_lambda_134[] = {
  1, // locals
  0, // parameters
  // "@(mangled)_@(n)"
  var_std__string, 3, var_611_1_mangled, string_38, var_631_16_n, 1, LOCAL(1),
  // add_mangled "@(mangled)_@(n)"
  func_add_mangled, 1, LOCAL(1), TAIL_CALL,
  POS(634, 29),
  POS(634, 17)
};

static TAB_NUM t_lambda_135[] = {
  0, // locals
  0, // parameters
  // add_mangled mangled
  func_add_mangled, 1, var_611_1_mangled, TAIL_CALL,
  POS(636, 17)
};

static TAB_NUM t_func_add_mangled[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 638_15_mangled_name
  // mangled_literals(self) mangled_name
  var_mangled_literals, 2, var_610_47_self, LOCAL(1), 1, var_mangled_literals,
  // -> mangled_literals mangling_counter
  LET, 2, var_mangled_literals, var_mangling_counter, TAIL_CALL,
  POS(641, 8),
  POS(642, 7)
};

static TAB_NUM t_func_funky_types__unique___add_literal[] = {
  3, // locals
  1, // parameters
  LOCAL(3), // 644_35_self
  // !mangled_literals(self) funky::key_of(self)
  var_funky__key_of, 1, LOCAL(3), 1, LOCAL(2),
  // mangled_literals(self) funky::key_of(self)
  var_mangled_literals, 2, LOCAL(3), LOCAL(2), 1, var_mangled_literals,
  // -> mangled_literals mangling_counter
  LET, 2, var_mangled_literals, var_mangling_counter, TAIL_CALL,
  POS(645, 5),
  POS(645, 6),
  POS(646, 5)
};

static TAB_NUM t_func_funky_types__statement___add_literal[] = {
  5, // locals
  1, // parameters
  LOCAL(3), // 648_38_self
  // head_of(self)) .truncate_until. "::"
  var_head_of, 1, LOCAL(3), 1, LOCAL(1),
  // identifier_of(head_of(self)) .truncate_until. "::"
  var_identifier_of, 1, LOCAL(1), 1, LOCAL(2),
  // $type identifier_of(head_of(self)) .truncate_until. "::"
  var_truncate_until, 2, LOCAL(2), string_11, 1, LOCAL(4),
  // mangle_position(self))
  var_mangle_position, 1, LOCAL(3), 1, LOCAL(1),
  // $mangled_name append(type "_" mangle_position(self))
  var_append, 3, LOCAL(4), string_38, LOCAL(1), 1, LOCAL(5),
  // mangled_literals(self mangled_name) mangling_counter
  var_mangled_literals, 2, LOCAL(3), LOCAL(5), 1, LOCAL(1),
  // -> mangled_literals(self mangled_name) mangling_counter
  LET, 2, LOCAL(1), var_mangling_counter, TAIL_CALL,
  POS(649, 25),
  POS(649, 11),
  POS(649, 5),
  POS(650, 35),
  POS(650, 5),
  POS(651, 8),
  POS(651, 5)
};

static TAB_NUM t_func_funky_types__body___add_literal[] = {
  6, // locals
  1, // parameters
  var_653_33_self,
  // $source_group source_group_of(self)
  var_source_group_of, 1, var_653_33_self, 1, LOCAL(4),
  // $line_text second(source_group)
  var_second, 1, LOCAL(4), 1, LOCAL(5),
  // length_of(line_text)-length_of(source_position_of(self))
  var_length_of, 1, LOCAL(5), 1, LOCAL(1),
  // source_position_of(self))
  var_source_position_of, 1, var_653_33_self, 1, LOCAL(2),
  // length_of(source_position_of(self))
  var_length_of, 1, LOCAL(2), 1, LOCAL(3),
  // $column_no length_of(line_text)-length_of(source_position_of(self))
  var_std__minus, 2, LOCAL(1), LOCAL(3), 1, LOCAL(6),
  // $text range(line_text 1 column_no)
  var_range, 3, LOCAL(5), num_1, LOCAL(6), 1, var_657_1_text,
  // without_suffix &text ':'
  var_without_suffix, 2, var_657_1_text, chr_58, 1, var_657_1_text,
  // without_suffix &text "->"
  var_without_suffix, 2, var_657_1_text, string_39, 1, var_657_1_text,
  // trim_right &text
  var_trim_right, 1, var_657_1_text, 1, var_657_1_text,
  // is_empty || text .contains. ' ':
  var_is_empty, 1, var_657_1_text, 1, LOCAL(1),
  // is_empty || text .contains. ' ':
  var_std__or, 2, LOCAL(1), lambda_136, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_137, lambda_138, TAIL_CALL,
  POS(654, 5),
  POS(655, 5),
  POS(656, 16),
  POS(656, 47),
  POS(656, 37),
  POS(656, 5),
  POS(657, 5),
  POS(658, 5),
  POS(659, 5),
  POS(660, 5),
  POS(662, 12),
  POS(662, 12),
  POS(661, 5)
};

static TAB_NUM t_lambda_136[] = {
  1, // locals
  0, // parameters
  // text .contains. ' ':
  var_contains, 2, var_657_1_text, chr_32, 1, LOCAL(1),
  // text .contains. ' ':
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(662, 24),
  POS(662, 24)
};

static TAB_NUM t_lambda_137[] = {
  0, // locals
  0, // parameters
  // add_lambda ""
  func_add_lambda, 1, string_6, TAIL_CALL,
  POS(663, 9)
};

static TAB_NUM t_lambda_138[] = {
  2, // locals
  0, // parameters
  // text(1) == '$':
  var_657_1_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '$':
  var_std__equal, 2, LOCAL(1), chr_36, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_139, lambda_140, TAIL_CALL,
  POS(666, 11),
  POS(666, 11),
  POS(665, 9)
};

static TAB_NUM t_lambda_139[] = {
  3, // locals
  0, // parameters
  // range(text 2 -1))
  var_range, 3, var_657_1_text, num_2, minus_num_1, 1, LOCAL(1),
  // mangle_versioned_identifier(range(text 2 -1))
  func_mangle_versioned_identifier, 1, LOCAL(1), 1, LOCAL(2),
  // append
  var_append, 2, str_func, LOCAL(2), 1, LOCAL(3),
  // add_function
  func_add_function, 1, LOCAL(3), TAIL_CALL,
  POS(670, 45),
  POS(670, 17),
  POS(668, 15),
  POS(667, 13)
};

static TAB_NUM t_lambda_140[] = {
  0, // locals
  0, // parameters
  // replace_all &text '.' = "_"
  var_replace_all, 2, var_657_1_text, key_value_pair_672_19, 1, var_657_1_text,
  // remove_non_identifier_characters &text
  func_remove_non_identifier_characters, 1, var_657_1_text, 1, var_657_1_text,
  // add_lambda text
  func_add_lambda, 1, var_657_1_text, TAIL_CALL,
  POS(672, 13),
  POS(673, 13),
  POS(674, 13)
};

static TAB_NUM t_func_add_lambda[] = {
  1, // locals
  1, // parameters
  var_676_14_name,
  // is_empty:
  var_is_empty, 1, var_676_14_name, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_name_is_empty, lambda_141, TAIL_CALL,
  POS(678, 14),
  POS(677, 7)
};

static TAB_NUM t_lambda_name_is_empty[] = {
  2, // locals
  0, // parameters
  // check_mangling $n !mangling_counter "lambda"
  func_check_mangling, 1, str_lambda, 2, LOCAL(2), var_mangling_counter,
  // "lambda_@(n)"
  var_std__string, 2, str_lambda_2, LOCAL(2), 1, LOCAL(1),
  // add_mangled "lambda_@(n)"
  func_2_add_mangled, 1, LOCAL(1), TAIL_CALL,
  POS(679, 11),
  POS(680, 23),
  POS(680, 11)
};

static TAB_NUM t_lambda_141[] = {
  1, // locals
  0, // parameters
  // append("lambda_" name)
  var_append, 2, str_lambda_2, var_676_14_name, 1, LOCAL(1),
  // add_function append("lambda_" name)
  func_add_function, 1, LOCAL(1), TAIL_CALL,
  POS(682, 24),
  POS(682, 11)
};

static TAB_NUM t_func_add_function[] = {
  1, // locals
  1, // parameters
  var_684_16_name,
  // check_mangling $n !mangling_counter name
  func_check_mangling, 1, var_684_16_name, 2, var_685_16_n, var_mangling_counter,
  // 1:
  var_std__less, 2, num_1, var_685_16_n, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_142, lambda_143, TAIL_CALL,
  POS(685, 7),
  POS(687, 13),
  POS(686, 7)
};

static TAB_NUM t_lambda_142[] = {
  3, // locals
  0, // parameters
  // name .until. '_'
  var_until, 2, var_684_16_name, chr_95, 1, LOCAL(1),
  // name .from. '_'
  var_from, 2, var_684_16_name, chr_95, 1, LOCAL(2),
  // string
  var_string, 3, LOCAL(1), var_685_16_n, LOCAL(2), 1, LOCAL(3),
  // add_mangled
  func_2_add_mangled, 1, LOCAL(3), TAIL_CALL,
  POS(690, 15),
  POS(692, 15),
  POS(689, 13),
  POS(688, 11)
};

static TAB_NUM t_lambda_143[] = {
  0, // locals
  0, // parameters
  // add_mangled name
  func_2_add_mangled, 1, var_684_16_name, TAIL_CALL,
  POS(694, 11)
};

static TAB_NUM t_func_2_add_mangled[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 696_15_name
  // mangled_literals(self name) mangling_counter
  var_mangled_literals, 2, var_653_33_self, LOCAL(2), 1, LOCAL(1),
  // -> mangled_literals(self name) mangling_counter
  LET, 2, LOCAL(1), var_mangling_counter, TAIL_CALL,
  POS(697, 10),
  POS(697, 7)
};

static TAB_NUM t_func_mangle_versioned_identifier[] = {
  1, // locals
  1, // parameters
  var_699_31_name,
  // $rest name .behind. "-"
  var_behind, 2, var_699_31_name, string_40, 1, var_700_1_rest,
  // is_empty
  var_is_empty, 1, var_700_1_rest, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_144, lambda_145, TAIL_CALL,
  POS(700, 7),
  POS(702, 14),
  POS(701, 7)
};

static TAB_NUM t_lambda_144[] = {
  1, // locals
  0, // parameters
  // replace(name)
  func_replace, 1, var_699_31_name, 1, LOCAL(1),
  //  replace(name)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(703, 12),
  POS(703, 11)
};

static TAB_NUM t_lambda_145[] = {
  2, // locals
  0, // parameters
  // rest(1).is_a_digit
  var_700_1_rest, 1, num_1, 1, LOCAL(1),
  // is_a_digit
  var_is_a_digit, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_146, lambda_147, TAIL_CALL,
  POS(706, 13),
  POS(706, 21),
  POS(705, 11)
};

static TAB_NUM t_lambda_146[] = {
  5, // locals
  0, // parameters
  // name .before. '.') "__" replace(name .behind. '.'))
  var_before, 2, var_699_31_name, chr_46, 1, LOCAL(1),
  // replace(name .before. '.') "__" replace(name .behind. '.'))
  func_replace, 1, LOCAL(1), 1, LOCAL(2),
  // name .behind. '.'))
  var_behind, 2, var_699_31_name, chr_46, 1, LOCAL(3),
  // replace(name .behind. '.'))
  func_replace, 1, LOCAL(3), 1, LOCAL(4),
  // append(replace(name .before. '.') "__" replace(name .behind. '.'))
  var_append, 3, LOCAL(2), string_28, LOCAL(4), 1, LOCAL(5),
  //  append(replace(name .before. '.') "__" replace(name .behind. '.'))
  LET, 1, LOCAL(5), TAIL_CALL,
  POS(707, 31),
  POS(707, 23),
  POS(707, 63),
  POS(707, 55),
  POS(707, 16),
  POS(707, 15)
};

static TAB_NUM t_lambda_147[] = {
  1, // locals
  0, // parameters
  // replace(name)
  func_replace, 1, var_699_31_name, 1, LOCAL(1),
  //  replace(name)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(708, 16),
  POS(708, 15)
};

static TAB_NUM t_func_replace[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 710_11_part
  // part .without_suffix. '/'
  var_without_suffix, 2, LOCAL(2), chr_47, 1, LOCAL(1),
  // replace_all
  var_replace_all, 5, LOCAL(1), key_value_pair_713_1, key_value_pair_714_1, key_value_pair_715_1, key_value_pair_716_1, TAIL_CALL,
  POS(712, 11),
  POS(711, 9)
};

static TAB_NUM t_func_funky_types__initial_value___to_option[] = {
  3, // locals
  1, // parameters
  LOCAL(3), // 723_40_self
  // operand_of(self).to_index
  var_operand_of, 1, LOCAL(3), 1, LOCAL(1),
  // to_index
  var_to_index, 1, LOCAL(1), 1, LOCAL(2),
  // -> operand_of(self).to_index
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(723, 52),
  POS(723, 69),
  POS(723, 49)
};

static TAB_NUM t_func_funky_types__node___add_source_positions[] = {
  1, // locals
  1, // parameters
  LOCAL(1),
  // -> ""
  LET, 1, string_6, TAIL_CALL,
  POS(727, 52)
};

static TAB_NUM t_func_funky_types__statement___add_source_positions[] = {
  3, // locals
  1, // parameters
  LOCAL(3), // 729_47_self
  // get_source_position(self)),@nl;"
  func_get_source_position, 1, LOCAL(3), 1, LOCAL(1),
  // "  @(get_source_position(self)),@nl;"
  var_std__string, 3, string_8, LOCAL(1), string_10, 1, LOCAL(2),
  // -> "  @(get_source_position(self)),@nl;"
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(730, 13),
  POS(730, 8),
  POS(730, 5)
};

static TAB_NUM t_func_get_source_position[] = {
  1, // locals
  1, // parameters
  var_732_23_node,
  // $source_group source_group_of(node)
  var_source_group_of, 1, var_732_23_node, 1, var_733_1_source_group,
  // is_defined:
  var_is_defined, 1, var_733_1_source_group, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_source_group_is_defined, lambda_148, TAIL_CALL,
  POS(733, 5),
  POS(736, 20),
  POS(735, 5)
};

static TAB_NUM t_lambda_source_group_is_defined[] = {
  9, // locals
  0, // parameters
  // source_group $indent $text
  var_733_1_source_group, 0, 2, LOCAL(6), LOCAL(7),
  // $line_no line_no_of(source_group)
  var_line_no_of, 1, var_733_1_source_group, 1, LOCAL(8),
  // length_of(text)+1-length_of(source_position_of(node))
  var_length_of, 1, LOCAL(7), 1, LOCAL(1),
  // indent+length_of(text)+1-length_of(source_position_of(node))
  var_std__plus, 2, LOCAL(6), LOCAL(1), 1, LOCAL(2),
  // indent+length_of(text)+1-length_of(source_position_of(node))
  var_std__plus, 2, LOCAL(2), num_1, 1, LOCAL(3),
  // source_position_of(node))
  var_source_position_of, 1, var_732_23_node, 1, LOCAL(4),
  // length_of(source_position_of(node))
  var_length_of, 1, LOCAL(4), 1, LOCAL(5),
  // $column_no indent+length_of(text)+1-length_of(source_position_of(node))
  var_std__minus, 2, LOCAL(3), LOCAL(5), 1, LOCAL(9),
  // "POS(@(line_no), @(column_no))"
  var_std__string, 5, str_POS, LOCAL(8), string_30, LOCAL(9), string_35, 1, LOCAL(1),
  // -> "POS(@(line_no), @(column_no))"
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(737, 9),
  POS(738, 9),
  POS(739, 27),
  POS(739, 20),
  POS(739, 20),
  POS(739, 55),
  POS(739, 45),
  POS(739, 9),
  POS(740, 12),
  POS(740, 9)
};

static TAB_NUM t_lambda_148[] = {
  0, // locals
  0, // parameters
  //  "POS(0, 0)"
  LET, 1, str_POS_2, TAIL_CALL,
  POS(741, 9)
};

static TAB_NUM t_func_funky_types__statement___to_compound[] = {
  6, // locals
  1, // parameters
  LOCAL(4), // 747_38_self
  // $mangled_name mangled_literals(self)
  var_mangled_literals, 1, LOCAL(4), 1, LOCAL(5),
  // arguments_of(self) is_an_input)
  var_arguments_of, 1, LOCAL(4), 1, LOCAL(1),
  // filter(arguments_of(self) is_an_input)
  var_filter, 2, LOCAL(1), var_is_an_input, 1, LOCAL(2),
  // concatenate(", ")
  var_concatenate, 1, string_30, 1, LOCAL(3),
  // map_reduce $indices
  var_map_reduce, 4, LOCAL(2), func_to_negative_index, LOCAL(3), string_6, 1, LOCAL(6),
  // "
  var_std__string, 5, str_static_int, LOCAL(5), str__arguments, LOCAL(6), string_4, 1, LOCAL(1),
  // -> "
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(748, 5),
  POS(750, 14),
  POS(750, 7),
  POS(752, 7),
  POS(749, 5),
  POS(754, 8),
  POS(754, 5)
};

static TAB_NUM t_func_to_negative_index[] = {
  3, // locals
  1, // parameters
  LOCAL(3), // 760_21_node
  // to_index(node))"
  var_to_index, 1, LOCAL(3), 1, LOCAL(1),
  // "-@(to_index(node))"
  var_std__string, 2, string_40, LOCAL(1), 1, LOCAL(2),
  // -> "-@(to_index(node))"
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(760, 39),
  POS(760, 35),
  POS(760, 32)
};

static TAB_NUM t_func_funky_types__numeric_literal___to_table_entry[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 766_47_self
  // $digits digits_of(self)
  var_digits_of, 1, LOCAL(2), 1, var_767_1_digits,
  // digits .contains. '.'
  var_contains, 2, var_767_1_digits, chr_46, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_149, lambda_150, TAIL_CALL,
  POS(767, 5),
  POS(769, 7),
  POS(768, 5)
};

static TAB_NUM t_lambda_149[] = {
  1, // locals
  0, // parameters
  // "
  var_std__string, 3, str___FLT_REAL_0_rea, var_767_1_digits, string_42, 1, LOCAL(1),
  //  "
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(770, 10),
  POS(770, 9)
};

static TAB_NUM t_lambda_150[] = {
  3, // locals
  0, // parameters
  // digits(1) == '-'
  var_767_1_digits, 1, num_1, 1, LOCAL(1),
  // digits(1) == '-'
  var_std__equal, 2, LOCAL(1), chr_45, 1, LOCAL(2),
  // if $sign !digits
  var_if, 3, LOCAL(2), lambda_151, lambda_152, 2, LOCAL(3), var_767_1_digits,
  // digits .has_prefix. "0b" || digits .has_prefix. "0o"
  var_has_prefix, 2, var_767_1_digits, str_0b, 1, LOCAL(1),
  // digits .has_prefix. "0b" || digits .has_prefix. "0o"
  var_std__or, 2, LOCAL(1), lambda_153, 1, LOCAL(2),
  // update_if digits .has_prefix. "0b" || digits .has_prefix. "0o"
  var_update_if, 3, LOCAL(2), var_767_1_digits, lambda_digits, 1, var_767_1_digits,
  // "
  var_std__string, 5, str___FLT, LOCAL(3), str_TIVE_INT64_0_val, var_767_1_digits, string_42, 1, LOCAL(1),
  // -> "
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(775, 11),
  POS(775, 11),
  POS(774, 9),
  POS(778, 19),
  POS(778, 19),
  POS(778, 9),
  POS(780, 12),
  POS(780, 9)
};

static TAB_NUM t_lambda_151[] = {
  1, // locals
  0, // parameters
  // range(digits 2 -1)
  var_range, 3, var_767_1_digits, num_2, minus_num_1, 1, LOCAL(1),
  //  "NEGA" range(digits 2 -1)
  LET, 2, str_NEGA, LOCAL(1), TAIL_CALL,
  POS(776, 21),
  POS(776, 13)
};

static TAB_NUM t_lambda_152[] = {
  0, // locals
  0, // parameters
  //  "POSI" digits
  LET, 2, str_POSI, var_767_1_digits, TAIL_CALL,
  POS(777, 13)
};

static TAB_NUM t_lambda_153[] = {
  1, // locals
  0, // parameters
  // digits .has_prefix. "0o"
  var_has_prefix, 2, var_767_1_digits, str_0o, 1, LOCAL(1),
  // digits .has_prefix. "0o"
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(778, 47),
  POS(778, 47)
};

static TAB_NUM t_lambda_digits[] = {
  1, // locals
  0, // parameters
  // to_integer
  var_to_integer, 1, var_767_1_digits, 1, LOCAL(1),
  //  digits.to_integer
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(779, 29),
  POS(779, 21)
};

static TAB_NUM t_func_funky_types__numeric_character_literal___to_table_entry[] = {
  3, // locals
  1, // parameters
  LOCAL(3), // 784_57_self
  // digits_of(self))}},
  var_digits_of, 1, LOCAL(3), 1, LOCAL(1),
  // "
  var_std__string, 3, str___FLT_CHARACTER, LOCAL(1), string_42, 1, LOCAL(2),
  // -> "
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(787, 40),
  POS(785, 8),
  POS(785, 5)
};

static TAB_NUM t_func_funky_types__character_sequence___to_table_entry[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 789_50_self
  // $characters characters_of(self)
  var_characters_of, 1, LOCAL(2), 1, var_790_1_characters,
  // $length length_of(characters)
  var_length_of, 1, var_790_1_characters, 1, var_791_1_length,
  // is_an_octet_string:
  var_is_an_octet_string, 1, var_790_1_characters, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_characters_is_an_octet_string, lambda_154, TAIL_CALL,
  POS(790, 5),
  POS(791, 5),
  POS(793, 18),
  POS(792, 5)
};

static TAB_NUM t_lambda_characters_is_an_octet_string[] = {
  2, // locals
  0, // parameters
  // $text characters.to_c_string
  func_to_c_string, 1, var_790_1_characters, 1, LOCAL(2),
  // "
  var_std__string, 5, str___FLT_STRING, var_791_1_length, str__str, LOCAL(2), string_43, 1, LOCAL(1),
  // -> "
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(794, 9),
  POS(795, 12),
  POS(795, 9)
};

static TAB_NUM t_lambda_154[] = {
  2, // locals
  0, // parameters
  // $text characters.to_c_string_32
  func_to_c_string_32, 1, var_790_1_characters, 1, LOCAL(2),
  // "
  var_std__string, 5, str___FLT_STRING_2, var_791_1_length, str__str_32__U, LOCAL(2), string_43, 1, LOCAL(1),
  // -> "
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(799, 9),
  POS(800, 12),
  POS(800, 9)
};

static TAB_NUM t_func_funky_types__statement___to_table_entry[] = {
  7, // locals
  1, // parameters
  LOCAL(3), // 804_41_self
  // $head head_of(self)
  var_head_of, 1, LOCAL(3), 1, LOCAL(4),
  // identifier_of(head) .truncate_until. "::").to_upper_case
  var_identifier_of, 1, LOCAL(4), 1, LOCAL(1),
  // identifier_of(head) .truncate_until. "::").to_upper_case
  var_truncate_until, 2, LOCAL(1), string_11, 1, LOCAL(2),
  // $kind (identifier_of(head) .truncate_until. "::").to_upper_case
  var_to_upper_case, 1, LOCAL(2), 1, LOCAL(5),
  // arguments_of(self))-1
  var_arguments_of, 1, LOCAL(3), 1, LOCAL(1),
  // length_of(arguments_of(self))-1
  var_length_of, 1, LOCAL(1), 1, LOCAL(2),
  // $count length_of(arguments_of(self))-1
  var_std__minus, 2, LOCAL(2), num_1, 1, LOCAL(6),
  // $mangled_name mangled_literals(self)
  var_mangled_literals, 1, LOCAL(3), 1, LOCAL(7),
  // "
  var_std__string, 7, str___FLT, LOCAL(5), string_30, LOCAL(6), str__arguments_2, LOCAL(7), str__arguments_3, 1, LOCAL(1),
  // -> "
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(805, 5),
  POS(806, 12),
  POS(806, 12),
  POS(806, 5),
  POS(807, 22),
  POS(807, 12),
  POS(807, 5),
  POS(808, 5),
  POS(809, 8),
  POS(809, 5)
};

static TAB_NUM t_func_funky_types__unique___to_table_entry[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 813_38_self
  // identifier_of(self) "__" = "::")
  var_identifier_of, 1, LOCAL(2), 1, LOCAL(1),
  // $identifier replace_first(identifier_of(self) "__" = "::")
  var_replace_first, 2, LOCAL(1), key_value_pair_814_47, 1, LOCAL(3),
  // "
  var_std__string, 3, str___FLT_UNIQUE_0_s, LOCAL(3), string_43, 1, LOCAL(1),
  // -> "
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(814, 31),
  POS(814, 5),
  POS(815, 8),
  POS(815, 5)
};

static TAB_NUM t_func_funky_types__body___to_table_entry[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 819_36_self
  // $mangled_name mangled_literals(self)
  var_mangled_literals, 1, LOCAL(2), 1, LOCAL(3),
  // "
  var_std__string, 3, str___FLT_FUNCTION_2, LOCAL(3), string_42, 1, LOCAL(1),
  // -> "
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(820, 5),
  POS(821, 8),
  POS(821, 5)
};

static TAB_NUM t_func_is_a_valid_statement[] = {
  3, // locals
  1, // parameters
  var_825_24_statement,
  // node_type_of(statement) == STATEMENT && not(statement.is_a_definition)
  var_node_type_of, 1, var_825_24_statement, 1, LOCAL(1),
  // node_type_of(statement) == STATEMENT && not(statement.is_a_definition)
  var_std__equal, 2, LOCAL(1), var_STATEMENT, 1, LOCAL(2),
  // node_type_of(statement) == STATEMENT && not(statement.is_a_definition)
  var_std__and, 2, LOCAL(2), lambda_155, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_156, lambda_158, TAIL_CALL,
  POS(827, 5),
  POS(827, 5),
  POS(827, 5),
  POS(826, 3)
};

static TAB_NUM t_lambda_155[] = {
  2, // locals
  0, // parameters
  // is_a_definition)
  var_is_a_definition, 1, var_825_24_statement, 1, LOCAL(1),
  // not(statement.is_a_definition)
  var_not, 1, LOCAL(1), 1, LOCAL(2),
  // not(statement.is_a_definition)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(827, 59),
  POS(827, 45),
  POS(827, 45)
};

static TAB_NUM t_lambda_156[] = {
  3, // locals
  0, // parameters
  // head_of(statement).is_a_valid_argument
  var_head_of, 1, var_825_24_statement, 1, LOCAL(1),
  // is_a_valid_argument
  func_is_a_valid_argument, 1, LOCAL(1), 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_157, 1, LOCAL(3),
  // 
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(830, 9),
  POS(830, 28),
  POS(829, 9),
  POS(828, 7)
};

static TAB_NUM t_lambda_157[] = {
  2, // locals
  0, // parameters
  // arguments_of(statement) is_a_valid_argument)
  var_arguments_of, 1, var_825_24_statement, 1, LOCAL(1),
  // all_of(arguments_of(statement) is_a_valid_argument)
  var_all_of, 2, LOCAL(1), func_is_a_valid_argument, 1, LOCAL(2),
  // all_of(arguments_of(statement) is_a_valid_argument)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(831, 16),
  POS(831, 9),
  POS(831, 9)
};

static TAB_NUM t_lambda_158[] = {
  0, // locals
  0, // parameters
  //  false
  LET, 1, var_false, TAIL_CALL,
  POS(832, 7)
};

static TAB_NUM t_func_is_a_valid_argument[] = {
  1, // locals
  1, // parameters
  var_834_23_argument,
  // node_type_of(argument)
  var_node_type_of, 1, var_834_23_argument, 1, LOCAL(1),
  // case node_type_of(argument)
  var_case, 6, LOCAL(1), var_DEFINITION, lambda_DEFINITION, var_REDEFINITION, lambda_REDEFINITION, lambda_162, TAIL_CALL,
  POS(835, 10),
  POS(835, 5)
};

static TAB_NUM t_lambda_DEFINITION[] = {
  2, // locals
  0, // parameters
  // identifier_of(argument))
  var_identifier_of, 1, var_834_23_argument, 1, LOCAL(1),
  // variables(identifier_of(argument))
  var_variables, 1, LOCAL(1), 1, LOCAL(2),
  // check_destination variables(identifier_of(argument))
  func_check_destination, 1, LOCAL(2), TAIL_CALL,
  POS(837, 37),
  POS(837, 27),
  POS(837, 9)
};

static TAB_NUM t_lambda_REDEFINITION[] = {
  2, // locals
  0, // parameters
  // kind_of(argument) == TEMPORARY:
  var_kind_of, 1, var_834_23_argument, 1, LOCAL(1),
  // kind_of(argument) == TEMPORARY:
  var_std__equal, 2, LOCAL(1), var_TEMPORARY, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_159, lambda_161, TAIL_CALL,
  POS(840, 11),
  POS(840, 11),
  POS(839, 9)
};

static TAB_NUM t_lambda_159[] = {
  1, // locals
  0, // parameters
  // identifier_of(argument))
  var_identifier_of, 1, var_834_23_argument, 1, LOCAL(1),
  // $info variables(identifier_of(argument))
  var_variables, 1, LOCAL(1), 1, var_841_1_info,
  // is_defined:
  var_is_defined, 1, var_841_1_info, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_info_is_defined, lambda_160, TAIL_CALL,
  POS(841, 29),
  POS(841, 13),
  POS(843, 20),
  POS(842, 13)
};

static TAB_NUM t_lambda_info_is_defined[] = {
  0, // locals
  0, // parameters
  // check_destination info
  func_check_destination, 1, var_841_1_info, TAIL_CALL,
  POS(844, 17)
};

static TAB_NUM t_lambda_160[] = {
  0, // locals
  0, // parameters
  //  true
  LET, 1, var_true, TAIL_CALL,
  POS(845, 17)
};

static TAB_NUM t_lambda_161[] = {
  0, // locals
  0, // parameters
  //  true
  LET, 1, var_true, TAIL_CALL,
  POS(846, 13)
};

static TAB_NUM t_lambda_162[] = {
  0, // locals
  0, // parameters
  //  true
  LET, 1, var_true, TAIL_CALL,
  POS(847, 9)
};

static TAB_NUM t_func_check_destination[] = {
  3, // locals
  1, // parameters
  LOCAL(3), // 849_21_info
  // first(info)
  var_first, 1, LOCAL(3), 1, LOCAL(1),
  // sequence
  var_sequence, 7, var_CONSTANT, var_CONSTANT_COMPOUND, var_INITIALIZED, var_INITIALIZED_COMPOUND, var_DERIVED, var_ATTRIBUTE, var_ATTRIBUTE_WITH_SETTER, 1, LOCAL(2),
  // case first(info)
  var_case, 4, LOCAL(1), LOCAL(2), lambda_163, lambda_164, TAIL_CALL,
  POS(850, 12),
  POS(851, 9),
  POS(850, 7)
};

static TAB_NUM t_lambda_163[] = {
  0, // locals
  0, // parameters
  //  false
  LET, 1, var_false, TAIL_CALL,
  POS(859, 11)
};

static TAB_NUM t_lambda_164[] = {
  0, // locals
  0, // parameters
  //  true
  LET, 1, var_true, TAIL_CALL,
  POS(860, 11)
};

static TAB_NUM t_func_funky_types__node___to_index[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 874_30_self
  // debug::print "/to_index failed: "
  var_debug__print, 1, str_to_index_failed, 0,
  // debug::dump `self
  var_debug__dump, 2, str_self, LOCAL(1), 0,
  // -> "?"
  LET, 1, string_44, TAIL_CALL,
  POS(875, 3),
  POS(876, 3),
  POS(877, 3)
};

static TAB_NUM t_func_retrieve_name[] = {
  1, // locals
  1, // parameters
  var_884_17_self,
  // kind_of(self)
  var_kind_of, 1, var_884_17_self, 1, LOCAL(1),
  // case kind_of(self)
  var_case, 6, LOCAL(1), var_TEMPORARY, lambda_TEMPORARY, var_CONSTANT, lambda_CONSTANT, lambda_168, TAIL_CALL,
  POS(885, 8),
  POS(885, 3)
};

static TAB_NUM t_lambda_TEMPORARY[] = {
  2, // locals
  0, // parameters
  // identifier_of(self))
  var_identifier_of, 1, var_884_17_self, 1, LOCAL(1),
  // $info variables(identifier_of(self))
  var_variables, 1, LOCAL(1), 1, var_887_1_info,
  // is_defined && second(info).is_defined
  var_is_defined, 1, var_887_1_info, 1, LOCAL(1),
  // is_defined && second(info).is_defined
  var_std__and, 2, LOCAL(1), lambda_165, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_166, lambda_167, TAIL_CALL,
  POS(887, 23),
  POS(887, 7),
  POS(889, 14),
  POS(889, 14),
  POS(888, 7)
};

static TAB_NUM t_lambda_165[] = {
  2, // locals
  0, // parameters
  // second(info).is_defined
  var_second, 1, var_887_1_info, 1, LOCAL(1),
  // is_defined
  var_is_defined, 1, LOCAL(1), 1, LOCAL(2),
  // second(info).is_defined
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(889, 28),
  POS(889, 41),
  POS(889, 28)
};

static TAB_NUM t_lambda_166[] = {
  2, // locals
  0, // parameters
  // second(info))
  var_second, 1, var_887_1_info, 1, LOCAL(1),
  // mangled_literals(second(info))
  var_mangled_literals, 1, LOCAL(1), 1, LOCAL(2),
  //  mangled_literals(second(info))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(890, 29),
  POS(890, 12),
  POS(890, 11)
};

static TAB_NUM t_lambda_167[] = {
  2, // locals
  0, // parameters
  // no_of(self)))"
  var_no_of, 1, var_884_17_self, 1, LOCAL(1),
  // "LOCAL(@(no_of(self)))"
  var_std__string, 3, str_LOCAL, LOCAL(1), string_35, 1, LOCAL(2),
  //  "LOCAL(@(no_of(self)))"
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(891, 21),
  POS(891, 12),
  POS(891, 11)
};

static TAB_NUM t_lambda_CONSTANT[] = {
  1, // locals
  0, // parameters
  // mangled_literals(self)
  var_mangled_literals, 1, var_884_17_self, 1, LOCAL(1),
  //  mangled_literals(self)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(892, 17),
  POS(892, 16)
};

static TAB_NUM t_lambda_168[] = {
  3, // locals
  0, // parameters
  // $identifier identifier_of(self)
  var_identifier_of, 1, var_884_17_self, 1, var_894_1_identifier,
  // variables(identifier) $kind $value
  var_variables, 1, var_894_1_identifier, 1, LOCAL(1),
  // variables(identifier) $kind $value
  LOCAL(1), 0, 2, var_895_23_kind, var_895_29_value,
  // INITIALIZED, INITIALIZED_COMPOUND
  var_std__sequence, 2, var_INITIALIZED, var_INITIALIZED_COMPOUND, 1, LOCAL(1),
  // sequence
  var_sequence, 7, var_DERIVED, var_DYNAMIC, var_EXTERN, var_EXTERN_POLYMORPHIC, LOCAL(1), var_ATTRIBUTE, var_ATTRIBUTE_WITH_SETTER, 1, LOCAL(2),
  // CONSTANT, CONSTANT_COMPOUND -> mangled_literals(value)
  var_std__sequence, 2, var_CONSTANT, var_CONSTANT_COMPOUND, 1, LOCAL(3),
  // case kind
  var_case, 8, var_895_23_kind, var_LOCAL, lambda_LOCAL, LOCAL(2), lambda_169, LOCAL(3), lambda_170, lambda_171, TAIL_CALL,
  POS(894, 7),
  POS(895, 7),
  POS(895, 7),
  POS(903, 11),
  POS(898, 9),
  POS(908, 9),
  POS(896, 7)
};

static TAB_NUM t_lambda_LOCAL[] = {
  3, // locals
  0, // parameters
  // local_mapping(identifier)))"
  var_local_mapping, 1, var_894_1_identifier, 1, LOCAL(1),
  // temp_count+local_mapping(identifier)))"
  var_std__plus, 2, var_temp_count, LOCAL(1), 1, LOCAL(2),
  // "LOCAL(@(temp_count+local_mapping(identifier)))"
  var_std__string, 3, str_LOCAL, LOCAL(2), string_35, 1, LOCAL(3),
  //  "LOCAL(@(temp_count+local_mapping(identifier)))"
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(897, 38),
  POS(897, 27),
  POS(897, 18),
  POS(897, 17)
};

static TAB_NUM t_lambda_169[] = {
  2, // locals
  0, // parameters
  // mangle_identifier(identifier))
  var_mangle_identifier, 1, var_894_1_identifier, 1, LOCAL(1),
  // append("var_" mangle_identifier(identifier))
  var_append, 2, str_var, LOCAL(1), 1, LOCAL(2),
  // 
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(907, 25),
  POS(907, 11),
  POS(906, 11)
};

static TAB_NUM t_lambda_170[] = {
  1, // locals
  0, // parameters
  // mangled_literals(value)
  var_mangled_literals, 1, var_895_29_value, 1, LOCAL(1),
  //  mangled_literals(value)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(908, 40),
  POS(908, 39)
};

static TAB_NUM t_lambda_171[] = {
  0, // locals
  0, // parameters
  // debug::dump `kind
  var_debug__dump, 2, str_kind, var_895_23_kind, 0,
  // debug::dump `value
  var_debug__dump, 2, str_value, var_895_29_value, 0,
  // debug::exit
  var_debug__exit, 0, TAIL_CALL,
  POS(910, 11),
  POS(911, 11),
  POS(912, 11)
};

static TAB_NUM t_func_get_literal[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 924_15_self
  // mangled_literals(self)
  var_mangled_literals, 1, LOCAL(2), 1, LOCAL(1),
  // -> mangled_literals(self)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(925, 6),
  POS(925, 3)
};

static TAB_NUM t_func_check_mangling[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 927_18_name
  // $n mangling_counter(name)
  var_mangling_counter, 1, LOCAL(2), 1, var_928_1_n,
  // is_defined
  var_is_defined, 1, var_928_1_n, 1, LOCAL(1),
  // !n
  var_if, 3, LOCAL(1), lambda_172, lambda_173, 1, var_928_1_n,
  // mangling_counter(name n)
  var_mangling_counter, 2, LOCAL(2), var_928_1_n, 1, LOCAL(1),
  // -> n mangling_counter(name n)
  LET, 2, var_928_1_n, LOCAL(1), TAIL_CALL,
  POS(928, 3),
  POS(931, 9),
  POS(929, 3),
  POS(934, 8),
  POS(934, 3)
};

static TAB_NUM t_lambda_172[] = {
  1, // locals
  0, // parameters
  // n+1
  var_std__plus, 2, var_928_1_n, num_1, 1, LOCAL(1),
  //  n+1
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(932, 10),
  POS(932, 9)
};

static TAB_NUM t_lambda_173[] = {
  0, // locals
  0, // parameters
  //  1
  LET, 1, num_1, TAIL_CALL,
  POS(933, 9)
};

static TAB_NUM t_func_remove_trailing_underscores_and_digits[] = {
  0, // locals
  1, // parameters
  var_936_42_str,
  // $n length_of(str)
  var_length_of, 1, var_936_42_str, 1, var_937_1_n,
  // loop:
  var_loop, 1, lambda_loop, TAIL_CALL,
  POS(937, 3),
  POS(938, 3)
};

static TAB_NUM t_lambda_loop[] = {
  1, // locals
  0, // parameters
  // n == 0
  var_std__equal, 2, var_937_1_n, num_0, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_174, lambda_175, TAIL_CALL,
  POS(940, 7),
  POS(939, 5)
};

static TAB_NUM t_lambda_174[] = {
  0, // locals
  0, // parameters
  //  ""
  LET, 1, string_6, TAIL_CALL,
  POS(941, 9)
};

static TAB_NUM t_lambda_175[] = {
  3, // locals
  0, // parameters
  // str(n) == '_' || str(n).is_a_digit:
  var_936_42_str, 1, var_937_1_n, 1, LOCAL(1),
  // str(n) == '_' || str(n).is_a_digit:
  var_std__equal, 2, LOCAL(1), chr_95, 1, LOCAL(2),
  // str(n) == '_' || str(n).is_a_digit:
  var_std__or, 2, LOCAL(2), lambda_176, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_177, lambda_178, TAIL_CALL,
  POS(944, 11),
  POS(944, 11),
  POS(944, 11),
  POS(943, 9)
};

static TAB_NUM t_lambda_176[] = {
  2, // locals
  0, // parameters
  // str(n).is_a_digit:
  var_936_42_str, 1, var_937_1_n, 1, LOCAL(1),
  // is_a_digit:
  var_is_a_digit, 1, LOCAL(1), 1, LOCAL(2),
  // str(n).is_a_digit:
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(944, 28),
  POS(944, 35),
  POS(944, 28)
};

static TAB_NUM t_lambda_177[] = {
  0, // locals
  0, // parameters
  // dec &n
  var_dec, 1, var_937_1_n, 1, var_937_1_n,
  // next
  var_next, 0, TAIL_CALL,
  POS(945, 13),
  POS(946, 13)
};

static TAB_NUM t_lambda_178[] = {
  1, // locals
  0, // parameters
  // range(str 1 n)
  var_range, 3, var_936_42_str, num_1, var_937_1_n, 1, LOCAL(1),
  //  range(str 1 n)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(947, 14),
  POS(947, 13)
};

static TAB_NUM t_func_remove_non_identifier_characters[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 949_36_str
  // $buf ""
  LET, 1, string_6, 1, var_950_1_buf,
  // for_each str
  var_for_each, 3, LOCAL(1), lambda_179, lambda_187, TAIL_CALL,
  POS(950, 3),
  POS(951, 3)
};

static TAB_NUM t_lambda_179[] = {
  0, // locals
  1, // parameters
  var_952_3_chr,
  // cond
  var_cond, 3, lambda_180, lambda_182, lambda_186, TAIL_CALL,
  POS(953, 7)
};

static TAB_NUM t_lambda_180[] = {
  1, // locals
  0, // parameters
  // is_a_letter:
  var_is_a_letter, 1, var_952_3_chr, 1, LOCAL(1),
  //  chr.is_a_letter:
  LET, 2, LOCAL(1), lambda_181, TAIL_CALL,
  POS(954, 16),
  POS(954, 11)
};

static TAB_NUM t_lambda_181[] = {
  0, // locals
  0, // parameters
  // push &buf chr
  var_push, 2, var_950_1_buf, var_952_3_chr, 1, var_950_1_buf,
  // next
  var_next, 0, TAIL_CALL,
  POS(955, 11),
  POS(956, 11)
};

static TAB_NUM t_lambda_182[] = {
  2, // locals
  0, // parameters
  // is_a_digit || chr == '_':
  var_is_a_digit, 1, var_952_3_chr, 1, LOCAL(1),
  // is_a_digit || chr == '_':
  var_std__or, 2, LOCAL(1), lambda_183, 1, LOCAL(2),
  //  chr.is_a_digit || chr == '_':
  LET, 2, LOCAL(2), lambda_184, TAIL_CALL,
  POS(957, 16),
  POS(957, 16),
  POS(957, 11)
};

static TAB_NUM t_lambda_183[] = {
  1, // locals
  0, // parameters
  // chr == '_':
  var_std__equal, 2, var_952_3_chr, chr_95, 1, LOCAL(1),
  // chr == '_':
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(957, 30),
  POS(957, 30)
};

static TAB_NUM t_lambda_184[] = {
  1, // locals
  0, // parameters
  // is_empty # prevent leading digits!
  var_is_empty, 1, var_950_1_buf, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), var_next, lambda_185, TAIL_CALL,
  POS(959, 17),
  POS(958, 11)
};

static TAB_NUM t_lambda_185[] = {
  0, // locals
  0, // parameters
  // push &buf chr
  var_push, 2, var_950_1_buf, var_952_3_chr, 1, var_950_1_buf,
  // next
  var_next, 0, TAIL_CALL,
  POS(962, 15),
  POS(963, 15)
};

static TAB_NUM t_lambda_186[] = {
  0, // locals
  0, // parameters
  //  true next
  LET, 2, var_true, var_next, TAIL_CALL,
  POS(964, 11)
};

static TAB_NUM t_lambda_187[] = {
  0, // locals
  0, // parameters
  //  buf
  LET, 1, var_950_1_buf, TAIL_CALL,
  POS(965, 7)
};

static TAB_NUM t_func_is_local_or_constant[] = {
  2, // locals
  1, // parameters
  var_969_24_kind,
  // kind == LOCAL || kind == CONSTANT || kind == CONSTANT_COMPOUND
  var_std__equal, 2, var_969_24_kind, var_LOCAL, 1, LOCAL(1),
  // kind == LOCAL || kind == CONSTANT || kind == CONSTANT_COMPOUND
  var_std__or, 2, LOCAL(1), lambda_188, 1, LOCAL(2),
  // -> kind == LOCAL || kind == CONSTANT || kind == CONSTANT_COMPOUND
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(970, 6),
  POS(970, 6),
  POS(970, 3)
};

static TAB_NUM t_lambda_188[] = {
  2, // locals
  0, // parameters
  // kind == CONSTANT || kind == CONSTANT_COMPOUND
  var_std__equal, 2, var_969_24_kind, var_CONSTANT, 1, LOCAL(1),
  // kind == CONSTANT || kind == CONSTANT_COMPOUND
  var_std__or, 2, LOCAL(1), lambda_189, 1, LOCAL(2),
  // kind == CONSTANT || kind == CONSTANT_COMPOUND
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(970, 23),
  POS(970, 23),
  POS(970, 23)
};

static TAB_NUM t_lambda_189[] = {
  1, // locals
  0, // parameters
  // kind == CONSTANT_COMPOUND
  var_std__equal, 2, var_969_24_kind, var_CONSTANT_COMPOUND, 1, LOCAL(1),
  // kind == CONSTANT_COMPOUND
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(970, 43),
  POS(970, 43)
};

static TAB_NUM t_func_collect_types[] = {
  1, // locals
  2, // parameters
  var_972_17_types,
  LOCAL(1), // 972_23_statements
  // for_each statements
  var_for_each, 3, LOCAL(1), lambda_190, lambda_209, TAIL_CALL,
  POS(973, 3)
};

static TAB_NUM t_lambda_190[] = {
  2, // locals
  1, // parameters
  var_974_3_statement,
  // node_type_of(statement) == STATEMENT:
  var_node_type_of, 1, var_974_3_statement, 1, LOCAL(1),
  // node_type_of(statement) == STATEMENT:
  var_std__equal, 2, LOCAL(1), var_STATEMENT, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_191, var_next, TAIL_CALL,
  POS(976, 9),
  POS(976, 9),
  POS(975, 7)
};

static TAB_NUM t_lambda_191[] = {
  1, // locals
  0, // parameters
  // arguments_of(statement)
  var_arguments_of, 1, var_974_3_statement, 1, LOCAL(1),
  // for_each arguments_of(statement)
  var_for_each, 3, LOCAL(1), lambda_192, func_check_types, TAIL_CALL,
  POS(977, 20),
  POS(977, 11)
};

static TAB_NUM t_lambda_192[] = {
  2, // locals
  1, // parameters
  var_978_3_argument,
  // node_type_of(argument)
  var_node_type_of, 1, var_978_3_argument, 1, LOCAL(1),
  // METHOD_VALUE_PAIR, ATTRIBUTE_VALUE_PAIR:
  var_std__sequence, 2, var_METHOD_VALUE_PAIR, var_ATTRIBUTE_VALUE_PAIR, 1, LOCAL(2),
  // case node_type_of(argument)
  var_case, 6, LOCAL(1), var_BODY, lambda_BODY, LOCAL(2), lambda_193, var_next, TAIL_CALL,
  POS(979, 20),
  POS(983, 17),
  POS(979, 15)
};

static TAB_NUM t_lambda_BODY[] = {
  1, // locals
  0, // parameters
  // statements_of(argument)
  var_statements_of, 1, var_978_3_argument, 1, LOCAL(1),
  // collect_types &types statements_of(argument)
  func_collect_types, 2, var_972_17_types, LOCAL(1), 1, var_972_17_types,
  // next
  var_next, 0, TAIL_CALL,
  POS(981, 40),
  POS(981, 19),
  POS(982, 19)
};

static TAB_NUM t_lambda_193[] = {
  3, // locals
  0, // parameters
  // argument_of(argument)) == BODY:
  var_argument_of, 1, var_978_3_argument, 1, LOCAL(1),
  // node_type_of(argument_of(argument)) == BODY:
  var_node_type_of, 1, LOCAL(1), 1, LOCAL(2),
  // node_type_of(argument_of(argument)) == BODY:
  var_std__equal, 2, LOCAL(2), var_BODY, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_194, var_next, TAIL_CALL,
  POS(985, 34),
  POS(985, 21),
  POS(985, 21),
  POS(984, 19)
};

static TAB_NUM t_lambda_194[] = {
  2, // locals
  0, // parameters
  // argument_of(argument))
  var_argument_of, 1, var_978_3_argument, 1, LOCAL(1),
  // statements_of(argument_of(argument))
  var_statements_of, 1, LOCAL(1), 1, LOCAL(2),
  // collect_types &types statements_of(argument_of(argument))
  func_collect_types, 2, var_972_17_types, LOCAL(2), 1, var_972_17_types,
  // next
  var_next, 0, TAIL_CALL,
  POS(986, 58),
  POS(986, 44),
  POS(986, 23),
  POS(987, 23)
};

static TAB_NUM t_func_check_types[] = {
  2, // locals
  0, // parameters
  // $arguments arguments_of(statement)
  var_arguments_of, 1, var_974_3_statement, 1, var_994_1_arguments,
  // head_of(statement))
  var_head_of, 1, var_974_3_statement, 1, LOCAL(1),
  // $functor_name identifier_of(head_of(statement))
  var_identifier_of, 1, LOCAL(1), 1, var_995_1_functor_name,
  // is_not_empty
  var_is_not_empty, 1, var_994_1_arguments, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_195, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_197, var_next, TAIL_CALL,
  POS(994, 9),
  POS(995, 37),
  POS(995, 9),
  POS(998, 23),
  POS(997, 13),
  POS(996, 9)
};

static TAB_NUM t_lambda_195[] = {
  4, // locals
  0, // parameters
  // arguments(-1)) == DEFINITION
  var_994_1_arguments, 1, minus_num_1, 1, LOCAL(1),
  // node_type_of(arguments(-1)) == DEFINITION
  var_node_type_of, 1, LOCAL(1), 1, LOCAL(2),
  // node_type_of(arguments(-1)) == DEFINITION
  var_std__equal, 2, LOCAL(2), var_DEFINITION, 1, LOCAL(3),
  // 
  var_std__and, 2, LOCAL(3), lambda_196, 1, LOCAL(4),
  // node_type_of(arguments(-1)) == DEFINITION
  LET, 1, LOCAL(4), TAIL_CALL,
  POS(999, 26),
  POS(999, 13),
  POS(999, 13),
  POS(997, 13),
  POS(999, 13)
};

static TAB_NUM t_lambda_196[] = {
  1, // locals
  0, // parameters
  // functor_name == "std::assign"
  var_std__equal, 2, var_995_1_functor_name, str_stdassign, 1, LOCAL(1),
  // functor_name == "std::assign"
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1000, 13),
  POS(1000, 13)
};

static TAB_NUM t_lambda_197[] = {
  1, // locals
  0, // parameters
  // range(arguments 1 -2)
  var_range, 3, var_994_1_arguments, num_1, minus_num_2, 1, LOCAL(1),
  // for_each range(arguments 1 -2)
  var_for_each, 3, LOCAL(1), lambda_198, var_next, TAIL_CALL,
  POS(1002, 22),
  POS(1002, 13)
};

static TAB_NUM t_lambda_198[] = {
  1, // locals
  1, // parameters
  var_1003_3_argument,
  // node_type_of(argument)
  var_node_type_of, 1, var_1003_3_argument, 1, LOCAL(1),
  // case node_type_of(argument)
  var_case, 8, LOCAL(1), var_TYPE_FUNCTION, lambda_TYPE_FUNCTION, var_ATTRIBUTE_VALUE_PAIR, lambda_ATTRIBUTE_VALUE_PAIR, var_METHOD_VALUE_PAIR, lambda_METHOD_VALUE_PAIR, var_next, TAIL_CALL,
  POS(1004, 22),
  POS(1004, 17)
};

static TAB_NUM t_lambda_TYPE_FUNCTION[] = {
  4, // locals
  0, // parameters
  // parameters_of(argument).is_empty
  var_parameters_of, 1, var_1003_3_argument, 1, LOCAL(1),
  // is_empty
  var_is_empty, 1, LOCAL(1), 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_199, 1, LOCAL(3),
  // $value_idx
  var_if, 3, LOCAL(3), lambda_201, lambda_204, 1, LOCAL(4),
  // add "TYPE_FUNCTION" value_idx
  func_add, 2, str_TYPE_FUNCTION, LOCAL(4), TAIL_CALL,
  POS(1009, 27),
  POS(1009, 51),
  POS(1008, 27),
  POS(1006, 21),
  POS(1021, 21)
};

static TAB_NUM t_lambda_199[] = {
  4, // locals
  0, // parameters
  // statements_of(argument)) == 1
  var_statements_of, 1, var_1003_3_argument, 1, LOCAL(1),
  // length_of(statements_of(argument)) == 1
  var_length_of, 1, LOCAL(1), 1, LOCAL(2),
  // length_of(statements_of(argument)) == 1
  var_std__equal, 2, LOCAL(2), num_1, 1, LOCAL(3),
  // 
  var_std__and, 2, LOCAL(3), lambda_200, 1, LOCAL(4),
  // length_of(statements_of(argument)) == 1
  LET, 1, LOCAL(4), TAIL_CALL,
  POS(1010, 37),
  POS(1010, 27),
  POS(1010, 27),
  POS(1008, 27),
  POS(1010, 27)
};

static TAB_NUM t_lambda_200[] = {
  4, // locals
  0, // parameters
  // statements_of(argument)(1)).is_empty
  var_statements_of, 1, var_1003_3_argument, 1, LOCAL(1),
  // statements_of(argument)(1)).is_empty
  LOCAL(1), 1, num_1, 1, LOCAL(2),
  // arguments_of(statements_of(argument)(1)).is_empty
  var_arguments_of, 1, LOCAL(2), 1, LOCAL(3),
  // is_empty
  var_is_empty, 1, LOCAL(3), 1, LOCAL(4),
  // arguments_of(statements_of(argument)(1)).is_empty
  LET, 1, LOCAL(4), TAIL_CALL,
  POS(1011, 40),
  POS(1011, 40),
  POS(1011, 27),
  POS(1011, 68),
  POS(1011, 27)
};

static TAB_NUM t_lambda_201[] = {
  4, // locals
  0, // parameters
  // statements_of(argument)(1))
  var_statements_of, 1, var_1003_3_argument, 1, LOCAL(1),
  // statements_of(argument)(1))
  LOCAL(1), 1, num_1, 1, LOCAL(2),
  // $reference head_of(statements_of(argument)(1))
  var_head_of, 1, LOCAL(2), 1, LOCAL(3),
  // $identifier identifier_of(reference)
  var_identifier_of, 1, LOCAL(3), 1, var_1014_1_identifier,
  // variables(identifier) $kind $constant_value
  var_variables, 1, var_1014_1_identifier, 1, LOCAL(1),
  // variables(identifier) $kind $constant_value
  LOCAL(1), 0, 2, LOCAL(4), var_1015_29_constant_value,
  // CONSTANT, CONSTANT_COMPOUND
  var_std__sequence, 2, var_CONSTANT, var_CONSTANT_COMPOUND, 1, LOCAL(1),
  // case kind
  var_case, 4, LOCAL(4), LOCAL(1), lambda_202, lambda_203, TAIL_CALL,
  POS(1013, 46),
  POS(1013, 46),
  POS(1013, 27),
  POS(1014, 27),
  POS(1015, 27),
  POS(1015, 27),
  POS(1017, 29),
  POS(1016, 27)
};

static TAB_NUM t_lambda_202[] = {
  1, // locals
  0, // parameters
  // mangled_literals(constant_value)
  var_mangled_literals, 1, var_1015_29_constant_value, 1, LOCAL(1),
  //  mangled_literals(constant_value)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1018, 32),
  POS(1018, 31)
};

static TAB_NUM t_lambda_203[] = {
  2, // locals
  0, // parameters
  // mangle_identifier(identifier))
  var_mangle_identifier, 1, var_1014_1_identifier, 1, LOCAL(1),
  // append("var_" mangle_identifier(identifier))
  var_append, 2, str_var, LOCAL(1), 1, LOCAL(2),
  //  append("var_" mangle_identifier(identifier))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1019, 46),
  POS(1019, 32),
  POS(1019, 31)
};

static TAB_NUM t_lambda_204[] = {
  1, // locals
  0, // parameters
  // mangled_literals(argument)
  var_mangled_literals, 1, var_1003_3_argument, 1, LOCAL(1),
  //  mangled_literals(argument)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1020, 28),
  POS(1020, 27)
};

static TAB_NUM t_lambda_ATTRIBUTE_VALUE_PAIR[] = {
  0, // locals
  0, // parameters
  // add_method "-"
  func_add_method, 1, string_40, TAIL_CALL,
  POS(1023, 21)
};

static TAB_NUM t_lambda_METHOD_VALUE_PAIR[] = {
  0, // locals
  0, // parameters
  // add_method
  func_add_method, 0, TAIL_CALL,
  POS(1025, 21)
};

static TAB_NUM t_func_add_method[] = {
  5, // locals
  -1, // parameters
  string_6, LOCAL(3), // 1028_14_prefix
  // identifier_of(argument))
  var_identifier_of, 1, var_1003_3_argument, 1, LOCAL(1),
  // $method mangle_identifier(identifier_of(argument))
  var_mangle_identifier, 1, LOCAL(1), 1, LOCAL(4),
  // $value argument_of(argument)
  var_argument_of, 1, var_1003_3_argument, 1, var_1030_1_value,
  // node_type_of(value) == FUNCTOR:
  var_node_type_of, 1, var_1030_1_value, 1, LOCAL(1),
  // node_type_of(value) == FUNCTOR:
  var_std__equal, 2, LOCAL(1), var_FUNCTOR, 1, LOCAL(2),
  // $value_idx
  var_if, 3, LOCAL(2), lambda_205, lambda_208, 1, LOCAL(5),
  // append(prefix "var_" method) value_idx
  var_append, 3, LOCAL(3), str_var, LOCAL(4), 1, LOCAL(1),
  // add append(prefix "var_" method) value_idx
  func_add, 2, LOCAL(1), LOCAL(5), TAIL_CALL,
  POS(1029, 45),
  POS(1029, 19),
  POS(1030, 19),
  POS(1033, 23),
  POS(1033, 23),
  POS(1031, 19),
  POS(1041, 23),
  POS(1041, 19)
};

static TAB_NUM t_lambda_205[] = {
  2, // locals
  0, // parameters
  // $identifier identifier_of(value)
  var_identifier_of, 1, var_1030_1_value, 1, var_1034_1_identifier,
  // variables(identifier) $kind $constant_value
  var_variables, 1, var_1034_1_identifier, 1, LOCAL(1),
  // variables(identifier) $kind $constant_value
  LOCAL(1), 0, 2, LOCAL(2), var_1035_29_constant_value,
  // CONSTANT, CONSTANT_COMPOUND
  var_std__sequence, 2, var_CONSTANT, var_CONSTANT_COMPOUND, 1, LOCAL(1),
  // case kind
  var_case, 4, LOCAL(2), LOCAL(1), lambda_206, lambda_207, TAIL_CALL,
  POS(1034, 25),
  POS(1035, 25),
  POS(1035, 25),
  POS(1037, 27),
  POS(1036, 25)
};

static TAB_NUM t_lambda_206[] = {
  1, // locals
  0, // parameters
  // mangled_literals(constant_value)
  var_mangled_literals, 1, var_1035_29_constant_value, 1, LOCAL(1),
  //  mangled_literals(constant_value)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1038, 30),
  POS(1038, 29)
};

static TAB_NUM t_lambda_207[] = {
  2, // locals
  0, // parameters
  // mangle_identifier(identifier))
  var_mangle_identifier, 1, var_1034_1_identifier, 1, LOCAL(1),
  // append("var_" mangle_identifier(identifier))
  var_append, 2, str_var, LOCAL(1), 1, LOCAL(2),
  //  append("var_" mangle_identifier(identifier))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1039, 44),
  POS(1039, 30),
  POS(1039, 29)
};

static TAB_NUM t_lambda_208[] = {
  1, // locals
  0, // parameters
  // mangled_literals(value)
  var_mangled_literals, 1, var_1030_1_value, 1, LOCAL(1),
  //  mangled_literals(value)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1040, 26),
  POS(1040, 25)
};

static TAB_NUM t_func_add[] = {
  7, // locals
  2, // parameters
  LOCAL(4), // 1043_7_method
  LOCAL(5), // 1043_14_value_idx
  // arguments(-1)))
  var_994_1_arguments, 1, minus_num_1, 1, LOCAL(1),
  // identifier_of(arguments(-1)))
  var_identifier_of, 1, LOCAL(1), 1, LOCAL(2),
  // $type mangle_identifier(identifier_of(arguments(-1)))
  var_mangle_identifier, 1, LOCAL(2), 1, LOCAL(6),
  // types(type) empty_list)
  var_972_17_types, 1, LOCAL(6), 1, LOCAL(1),
  // $methods default_value(types(type) empty_list)
  var_default_value, 2, LOCAL(1), var_empty_list, 1, LOCAL(7),
  // tuple(method value_idx))
  var_tuple, 2, LOCAL(4), LOCAL(5), 1, LOCAL(1),
  // !types(type) push(methods tuple(method value_idx))
  var_push, 2, LOCAL(7), LOCAL(1), 1, LOCAL(3),
  // types(type) push(methods tuple(method value_idx))
  var_972_17_types, 2, LOCAL(6), LOCAL(3), 1, var_972_17_types,
  // next
  var_next, 0, TAIL_CALL,
  POS(1044, 57),
  POS(1044, 43),
  POS(1044, 19),
  POS(1045, 42),
  POS(1045, 19),
  POS(1046, 45),
  POS(1046, 19),
  POS(1046, 20),
  POS(1047, 19)
};

static TAB_NUM t_lambda_209[] = {
  0, // locals
  0, // parameters
  //  types
  LET, 1, var_972_17_types, TAIL_CALL,
  POS(1050, 7)
};

static TAB_NUM t_func_funky__mangle_identifier[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 1054_28_identifier
  // replace_all
  var_replace_all, 4, LOCAL(1), key_value_pair_715_1, key_value_pair_716_1, key_value_pair_1059_1, TAIL_CALL,
  POS(1055, 3)
};

static TAB_NUM t_func_to_c_string[] = {
  0, // locals
  1, // parameters
  var_1061_15_str,
  // $buf ""
  LET, 1, string_6, 1, var_1062_1_buf,
  // $s 1
  LET, 1, num_1, 1, var_1063_1_s,
  // for_each str
  var_for_each, 3, var_1061_15_str, lambda_210, lambda_215, TAIL_CALL,
  POS(1062, 3),
  POS(1063, 3),
  POS(1064, 3)
};

static TAB_NUM t_lambda_210[] = {
  2, // locals
  2, // parameters
  var_1065_3_idx,
  var_1065_7_chr,
  // chr < ' ' || chr > '~' || chr == '@quot;' || chr == '\':
  var_std__less, 2, var_1065_7_chr, chr_32, 1, LOCAL(1),
  // chr < ' ' || chr > '~' || chr == '@quot;' || chr == '\':
  var_std__or, 2, LOCAL(1), lambda_211, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_214, var_next, TAIL_CALL,
  POS(1067, 9),
  POS(1067, 9),
  POS(1066, 7)
};

static TAB_NUM t_lambda_211[] = {
  2, // locals
  0, // parameters
  // ~' || chr == '@quot;' || chr == '\':
  var_std__less, 2, chr_126, var_1065_7_chr, 1, LOCAL(1),
  // ~' || chr == '@quot;' || chr == '\':
  var_std__or, 2, LOCAL(1), lambda_212, 1, LOCAL(2),
  // chr > '~' || chr == '@quot;' || chr == '\':
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1067, 29),
  POS(1067, 29),
  POS(1067, 22)
};

static TAB_NUM t_lambda_212[] = {
  2, // locals
  0, // parameters
  // chr == '@quot;' || chr == '\':
  var_std__equal, 2, var_1065_7_chr, chr_34, 1, LOCAL(1),
  // chr == '@quot;' || chr == '\':
  var_std__or, 2, LOCAL(1), lambda_213, 1, LOCAL(2),
  // chr == '@quot;' || chr == '\':
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1067, 35),
  POS(1067, 35),
  POS(1067, 35)
};

static TAB_NUM t_lambda_213[] = {
  1, // locals
  0, // parameters
  // chr == '\':
  var_std__equal, 2, var_1065_7_chr, chr_92, 1, LOCAL(1),
  // chr == '\':
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1067, 54),
  POS(1067, 54)
};

static TAB_NUM t_lambda_214[] = {
  3, // locals
  0, // parameters
  // idx-1)
  var_std__minus, 2, var_1065_3_idx, num_1, 1, LOCAL(1),
  // range(str s idx-1)
  var_range, 3, var_1061_15_str, var_1063_1_s, LOCAL(1), 1, LOCAL(2),
  // append &buf range(str s idx-1)
  var_append, 2, var_1062_1_buf, LOCAL(2), 1, var_1062_1_buf,
  // to_integer) 3 "0")
  var_to_integer, 1, var_1065_7_chr, 1, LOCAL(1),
  // oct(chr.to_integer) 3 "0")
  var_oct, 1, LOCAL(1), 1, LOCAL(2),
  // pad_left(oct(chr.to_integer) 3 "0")
  var_pad_left, 3, LOCAL(2), num_3, string_23, 1, LOCAL(3),
  // append &buf "\" pad_left(oct(chr.to_integer) 3 "0")
  var_append, 3, var_1062_1_buf, string_45, LOCAL(3), 1, var_1062_1_buf,
  // !s idx+1
  var_std__plus, 2, var_1065_3_idx, num_1, 1, var_1063_1_s,
  // next
  var_next, 0, TAIL_CALL,
  POS(1068, 35),
  POS(1068, 23),
  POS(1068, 11),
  POS(1069, 44),
  POS(1069, 36),
  POS(1069, 27),
  POS(1069, 11),
  POS(1070, 11),
  POS(1071, 11)
};

static TAB_NUM t_lambda_215[] = {
  3, // locals
  0, // parameters
  // length_of(str)
  var_length_of, 1, var_1061_15_str, 1, LOCAL(1),
  // length_of(str)
  var_std__less, 2, LOCAL(1), var_1063_1_s, 1, LOCAL(2),
  // length_of(str)
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_216, lambda_217, TAIL_CALL,
  POS(1075, 14),
  POS(1075, 14),
  POS(1075, 14),
  POS(1074, 7)
};

static TAB_NUM t_lambda_216[] = {
  2, // locals
  0, // parameters
  // range(str s -1))
  var_range, 3, var_1061_15_str, var_1063_1_s, minus_num_1, 1, LOCAL(1),
  // append(buf range(str s -1))
  var_append, 2, var_1062_1_buf, LOCAL(1), 1, LOCAL(2),
  //  append(buf range(str s -1))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1076, 23),
  POS(1076, 12),
  POS(1076, 11)
};

static TAB_NUM t_lambda_217[] = {
  0, // locals
  0, // parameters
  //  buf
  LET, 1, var_1062_1_buf, TAIL_CALL,
  POS(1077, 11)
};

static TAB_NUM t_func_to_c_string_32[] = {
  0, // locals
  1, // parameters
  var_1079_18_str,
  // $buf ""
  LET, 1, string_6, 1, var_1080_1_buf,
  // $s 1
  LET, 1, num_1, 1, var_1081_1_s,
  // for_each str
  var_for_each, 3, var_1079_18_str, lambda_218, lambda_227, TAIL_CALL,
  POS(1080, 3),
  POS(1081, 3),
  POS(1082, 3)
};

static TAB_NUM t_lambda_218[] = {
  2, // locals
  2, // parameters
  var_1083_3_idx,
  var_1083_7_chr,
  // chr < ' ' || chr > '~' || chr == '@quot;' || chr == '\':
  var_std__less, 2, var_1083_7_chr, chr_32, 1, LOCAL(1),
  // chr < ' ' || chr > '~' || chr == '@quot;' || chr == '\':
  var_std__or, 2, LOCAL(1), lambda_219, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_222, var_next, TAIL_CALL,
  POS(1085, 9),
  POS(1085, 9),
  POS(1084, 7)
};

static TAB_NUM t_lambda_219[] = {
  2, // locals
  0, // parameters
  // ~' || chr == '@quot;' || chr == '\':
  var_std__less, 2, chr_126, var_1083_7_chr, 1, LOCAL(1),
  // ~' || chr == '@quot;' || chr == '\':
  var_std__or, 2, LOCAL(1), lambda_220, 1, LOCAL(2),
  // chr > '~' || chr == '@quot;' || chr == '\':
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1085, 29),
  POS(1085, 29),
  POS(1085, 22)
};

static TAB_NUM t_lambda_220[] = {
  2, // locals
  0, // parameters
  // chr == '@quot;' || chr == '\':
  var_std__equal, 2, var_1083_7_chr, chr_34, 1, LOCAL(1),
  // chr == '@quot;' || chr == '\':
  var_std__or, 2, LOCAL(1), lambda_221, 1, LOCAL(2),
  // chr == '@quot;' || chr == '\':
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1085, 35),
  POS(1085, 35),
  POS(1085, 35)
};

static TAB_NUM t_lambda_221[] = {
  1, // locals
  0, // parameters
  // chr == '\':
  var_std__equal, 2, var_1083_7_chr, chr_92, 1, LOCAL(1),
  // chr == '\':
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1085, 54),
  POS(1085, 54)
};

static TAB_NUM t_lambda_222[] = {
  2, // locals
  0, // parameters
  // idx-1)
  var_std__minus, 2, var_1083_3_idx, num_1, 1, LOCAL(1),
  // range(str s idx-1)
  var_range, 3, var_1079_18_str, var_1081_1_s, LOCAL(1), 1, LOCAL(2),
  // append &buf range(str s idx-1)
  var_append, 2, var_1080_1_buf, LOCAL(2), 1, var_1080_1_buf,
  // $val chr.to_integer
  var_to_integer, 1, var_1083_7_chr, 1, var_1087_1_val,
  // !s idx+1
  var_std__plus, 2, var_1083_3_idx, num_1, 1, var_1081_1_s,
  // 0xff:
  var_std__less, 2, num_0xff, var_1087_1_val, 1, LOCAL(1),
  // 0xff:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_223, lambda_224, TAIL_CALL,
  POS(1086, 35),
  POS(1086, 23),
  POS(1086, 11),
  POS(1087, 11),
  POS(1088, 11),
  POS(1090, 20),
  POS(1090, 20),
  POS(1089, 11)
};

static TAB_NUM t_lambda_223[] = {
  1, // locals
  0, // parameters
  // oct(val 3)
  var_oct, 2, var_1087_1_val, num_3, 1, LOCAL(1),
  // append &buf "\" oct(val 3)
  var_append, 3, var_1080_1_buf, string_45, LOCAL(1), 1, var_1080_1_buf,
  // next
  var_next, 0, TAIL_CALL,
  POS(1091, 31),
  POS(1091, 15),
  POS(1092, 15)
};

static TAB_NUM t_lambda_224[] = {
  2, // locals
  0, // parameters
  // 0xffff:
  var_std__less, 2, num_0xffff, var_1087_1_val, 1, LOCAL(1),
  // 0xffff:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_225, lambda_226, TAIL_CALL,
  POS(1095, 24),
  POS(1095, 24),
  POS(1094, 15)
};

static TAB_NUM t_lambda_225[] = {
  1, // locals
  0, // parameters
  // hex(val 4)
  var_hex, 2, var_1087_1_val, num_4, 1, LOCAL(1),
  // append &buf "\u" hex(val 4)
  var_append, 3, var_1080_1_buf, str_u, LOCAL(1), 1, var_1080_1_buf,
  // next
  var_next, 0, TAIL_CALL,
  POS(1096, 36),
  POS(1096, 19),
  POS(1097, 19)
};

static TAB_NUM t_lambda_226[] = {
  1, // locals
  0, // parameters
  // hex(val 8)
  var_hex, 2, var_1087_1_val, num_8, 1, LOCAL(1),
  // append &buf "\U" hex(val 8)
  var_append, 3, var_1080_1_buf, str_U, LOCAL(1), 1, var_1080_1_buf,
  // next
  var_next, 0, TAIL_CALL,
  POS(1099, 36),
  POS(1099, 19),
  POS(1100, 19)
};

static TAB_NUM t_lambda_227[] = {
  3, // locals
  0, // parameters
  // length_of(str)
  var_length_of, 1, var_1079_18_str, 1, LOCAL(1),
  // length_of(str)
  var_std__less, 2, LOCAL(1), var_1081_1_s, 1, LOCAL(2),
  // length_of(str)
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_228, lambda_229, TAIL_CALL,
  POS(1104, 14),
  POS(1104, 14),
  POS(1104, 14),
  POS(1103, 7)
};

static TAB_NUM t_lambda_228[] = {
  2, // locals
  0, // parameters
  // range(str s -1))
  var_range, 3, var_1079_18_str, var_1081_1_s, minus_num_1, 1, LOCAL(1),
  // append(buf range(str s -1))
  var_append, 2, var_1080_1_buf, LOCAL(1), 1, LOCAL(2),
  //  append(buf range(str s -1))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1105, 23),
  POS(1105, 12),
  POS(1105, 11)
};

static TAB_NUM t_lambda_229[] = {
  0, // locals
  0, // parameters
  //  buf
  LET, 1, var_1080_1_buf, TAIL_CALL,
  POS(1106, 11)
};

static int key_value_pair_212_1_arguments[] = {
  -chr_95, -string_12
};

static int key_value_pair_348_21_arguments[] = {
  -chr_47, -string_28
};

static int sequence_553_1_arguments[] = {
  -str_stdassign, -str_assign
};

static int key_value_pair_672_19_arguments[] = {
  -chr_46, -string_38
};

static int key_value_pair_713_1_arguments[] = {
  -chr_46, -string_41
};

static int key_value_pair_714_1_arguments[] = {
  -chr_47, -string_41
};

static int key_value_pair_715_1_arguments[] = {
  -string_11, -string_28
};

static int key_value_pair_716_1_arguments[] = {
  -chr_45, -string_28
};

static int key_value_pair_814_47_arguments[] = {
  -string_28, -string_11
};

static int key_value_pair_1059_1_arguments[] = {
  -chr_46, -string_28
};

static FUNKY_CONSTANT constants_table[] = {
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky__generate_tabular_code}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_3}},
  {FLT_POSITIVE_INT64, 0, {.value = 1}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_4}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_5}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_6}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_7}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_8}},
  {FLT_STRING_8, 43, {.str_8 = "Main module does not contain any statements"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_9}},
  {FLT_POSITIVE_INT64, 0, {.value = 0}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_10}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_countvariables}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_11}},
  {FLT_STRING_8, 18, {.str_8 = "  constants_table,"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_12}},
  {FLT_STRING_8, 23, {.str_8 = "  NULL, // no constants"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_13}},
  {FLT_STRING_8, 18, {.str_8 = "  variables_table,"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_14}},
  {FLT_STRING_8, 23, {.str_8 = "  NULL, // no variables"}},
  {FLT_STRING_8, 14, {.str_8 = "FEAT_POSITIONS"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_15}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_feature_flags}},
  {FLT_STRING_8, 17, {.str_8 = "|FEAT_INITIALIZER"}},
  {FLT_STRING_8, 153, {.str_8 = "#include <stddef.h>\012#include <stdint.h>\012\012#include \042runtime/common.h\042\012#include \042runtime/builtins.h\042\012#include \042runtime/fko.h\042\012#include \042runtime/memory.h\042\012\012"}},
  {FLT_STRING_8, 1, {.str_8 = "\012"}},
  {FLT_STRING_8, 22, {.str_8 = "\012FUNKY_MODULE module__"}},
  {FLT_STRING_8, 9, {.str_8 = " = {\012  \042_"}},
  {FLT_STRING_8, 21, {.str_8 = "\042, // module name\012  \042"}},
  {FLT_STRING_8, 85, {.str_8 = "\042, // module filename\012  .major_version = 0,\012  .minor_version = 0,\012  .feature_flags = "}},
  {FLT_STRING_8, 19, {.str_8 = ",\012  .marker = 0,\012  "}},
  {FLT_STRING_8, 34, {.str_8 = ", // number of required modules\012  "}},
  {FLT_STRING_8, 36, {.str_8 = ", // number of defined namespaces\012  "}},
  {FLT_STRING_8, 33, {.str_8 = ", // number of used namespaces\012  "}},
  {FLT_STRING_8, 27, {.str_8 = ", // number of constants\012  "}},
  {FLT_STRING_8, 27, {.str_8 = ", // number of variables\012  "}},
  {FLT_STRING_8, 3, {.str_8 = "\012  "}},
  {FLT_STRING_8, 20, {.str_8 = "\012  used_namespaces,\012"}},
  {FLT_STRING_8, 4, {.str_8 = "\012};\012"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_16}},
  {FLT_STRING_8, 90, {.str_8 = "\012int main(int argc, char **argv) {\012  main_argc = argc;\012  main_argv = argv;\012  run(&module__"}},
  {FLT_STRING_8, 5, {.str_8 = ");\012}\012"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_17}},
  {FLT_STRING_8, 0, {.str_8 = ""}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_require}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_18}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_19}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_20}},
  {FLT_STRING_8, 2, {.str_8 = "./"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_21}},
  {FLT_CHARACTER, 0, {.value = 47}},
  {FLT_NEGATIVE_INT64, 0, {.value = 1}},
  {FLT_STRING_8, 12, {.str_8 = "/// require "}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_constants_enum}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_22}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_23}},
  {FLT_STRING_8, 7, {.str_8 = "enum {\012"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_24}},
  {FLT_STRING_8, 2, {.str_8 = "  "}},
  {FLT_STRING_8, 3, {.str_8 = " = "}},
  {FLT_STRING_8, 2, {.str_8 = ",\012"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_25}},
  {FLT_NEGATIVE_INT64, 0, {.value = 3}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_compound_constants}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_26}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_27}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_constants_table}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_28}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_29}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_30}},
  {FLT_STRING_8, 45, {.str_8 = "\012static FUNKY_CONSTANT constants_table[] = {\012"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_31}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_32}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_33}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_34}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_35}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_36}},
  {FLT_STRING_8, 50, {.str_8 = "  {FLT_FUNCTION, 0, {.tfunc = t_module_entry}}\012};\012"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_variables_enum}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_37}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_38}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_39}},
  {FLT_STRING_8, 2, {.str_8 = "::"}},
  {FLT_CHARACTER, 0, {.value = 95}},
  {FLT_STRING_8, 1, {.str_8 = " "}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_212_1_arguments}},
  {FLT_STRING_8, 6, {.str_8 = "  var_"}},
  {FLT_STRING_8, 5, {.str_8 = ", // "}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_40}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_41}},
  {FLT_STRING_8, 35, {.str_8 = "enum {\012  var__START = FIRST_VAR-1,\012"}},
  {FLT_STRING_8, 14, {.str_8 = "  var__END\012};\012"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_variables_table}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_42}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_43}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_44}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_EXTERN}},
  {FLT_STRING_8, 7, {.str_8 = "UNKNOWN"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_EXTERN_POLYMORPHIC}},
  {FLT_STRING_8, 19, {.str_8 = "UNKNOWN_POLYMORPHIC"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_45}},
  {FLT_STRING_8, 11, {.str_8 = "POLYMORPHIC"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_46}},
  {FLT_STRING_8, 11, {.str_8 = "INITIALIZED"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_DYNAMIC}},
  {FLT_STRING_8, 13, {.str_8 = "UNINITIALIZED"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_DERIVED}},
  {FLT_STRING_8, 7, {.str_8 = "DERIVED"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_47}},
  {FLT_STRING_8, 4, {.str_8 = "kind"}},
  {FLT_STRING_8, 3, {.str_8 = "???"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_48}},
  {FLT_STRING_8, 21, {.str_8 = ",\012    {.const_idx = -"}},
  {FLT_STRING_8, 1, {.str_8 = "}"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2_DERIVED}},
  {FLT_STRING_8, 8, {.str_8 = ",\012    {\042"}},
  {FLT_STRING_8, 4, {.str_8 = "\134000"}},
  {FLT_STRING_8, 2, {.str_8 = "\042}"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_ATTRIBUTE}},
  {FLT_STRING_8, 29, {.str_8 = ",\012    {.has_a_setter = false}"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_ATTRIBUTE_WITH_SETTER}},
  {FLT_STRING_8, 28, {.str_8 = ",\012    {.has_a_setter = true}"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_49}},
  {FLT_STRING_8, 19, {.str_8 = ",\012    {.position = "}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_50}},
  {FLT_STRING_8, 12, {.str_8 = "  {\012    FOT_"}},
  {FLT_STRING_8, 5, {.str_8 = ", 0, "}},
  {FLT_STRING_8, 7, {.str_8 = ",\012    \042"}},
  {FLT_STRING_8, 3, {.str_8 = "\042, "}},
  {FLT_STRING_8, 6, {.str_8 = "\012  },\012"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_51}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_52}},
  {FLT_STRING_8, 45, {.str_8 = "\012static FUNKY_VARIABLE variables_table[] = {\012"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_retrieve_base_and_method_count}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_53}},
  {FLT_STRING_8, 12, {.str_8 = "__attributes"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_54}},
  {FLT_STRING_8, 4, {.str_8 = "NULL"}},
  {FLT_STRING_8, 1, {.str_8 = "0"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_attributes_tables}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_55}},
  {FLT_STRING_8, 29, {.str_8 = "\012static ATTRIBUTE_DEFINITION "}},
  {FLT_STRING_8, 19, {.str_8 = "__attributes[] = {\012"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_56}},
  {FLT_STRING_8, 3, {.str_8 = "  {"}},
  {FLT_STRING_8, 3, {.str_8 = ", -"}},
  {FLT_STRING_8, 3, {.str_8 = "},\012"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_57}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_58}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_required_modules_table}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_59}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_60}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_required_modules}},
  {FLT_STRING_8, 28, {.str_8 = "extern FUNKY_MODULE module__"}},
  {FLT_STRING_8, 2, {.str_8 = ";\012"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2_required_modules}},
  {FLT_STRING_8, 11, {.str_8 = "  &module__"}},
  {FLT_STRING_8, 45, {.str_8 = "\012static FUNKY_MODULE *required_modules[] = {\012"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_mangled_name}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_61}},
  {FLT_STRING_8, 2, {.str_8 = "__"}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_348_21_arguments}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_reference_required_modules}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_62}},
  {FLT_STRING_8, 25, {.str_8 = "NULL, // required modules"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_63}},
  {FLT_STRING_8, 17, {.str_8 = "required_modules,"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_defined_namespaces_table}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_64}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_65}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_defined_namespaces}},
  {FLT_CHARACTER, 0, {.value = 45}},
  {FLT_STRING_8, 4, {.str_8 = "  {\042"}},
  {FLT_STRING_8, 2, {.str_8 = ", "}},
  {FLT_STRING_8, 49, {.str_8 = "\012static FUNKY_NAMESPACE defined_namespaces[] = {\012"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_reference_defined_namespaces}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_66}},
  {FLT_STRING_8, 27, {.str_8 = "NULL, // defined namespaces"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_67}},
  {FLT_STRING_8, 19, {.str_8 = "defined_namespaces,"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_used_namespaces_table}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_used_namespaces}},
  {FLT_STRING_8, 46, {.str_8 = "\012static FUNKY_NAMESPACE used_namespaces[] = {\012"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_tabular_functions}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_68}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_69}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_70}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_71}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_72}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_73}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_74}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_75}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_76}},
  {FLT_STRING_8, 12, {.str_8 = "module_entry"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_tabular_function}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_77}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_78}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_79}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_80}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_81}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_82}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_83}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_84}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_85}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_86}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_check_for_locals}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_87}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_88}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_89}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_90}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_91}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_92}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_93}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_94}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_95}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_96}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_map_reducestatements}},
  {FLT_STRING_8, 18, {.str_8 = "\012static TAB_NUM t_"}},
  {FLT_STRING_8, 9, {.str_8 = "[] = {\012  "}},
  {FLT_STRING_8, 12, {.str_8 = ", // locals\012"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_add_parameters}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_any_ofparameters}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_97}},
  {FLT_STRING_8, 3, {.str_8 = "  -"}},
  {FLT_STRING_8, 16, {.str_8 = ", // parameters\012"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_98}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_add_parameter}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_add_parameter_with_option}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parameter_to_index}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_99}},
  {FLT_STRING_8, 6, {.str_8 = "LOCAL("}},
  {FLT_STRING_8, 3, {.str_8 = "),\012"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_100}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_101}},
  {FLT_STRING_8, 6, {.str_8 = "), // "}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_102}},
  {FLT_STRING_8, 4, {.str_8 = "var_"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_compile}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_103}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_104}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_105}},
  {FLT_STRING_8, 33, {.str_8 = "Last statement is not a tail call"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_106}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_self_is_an_io_call}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_107}},
  {FLT_STRING_8, 12, {.str_8 = "IO_TAIL_CALL"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_108}},
  {FLT_STRING_8, 8, {.str_8 = "IO_CALL("}},
  {FLT_STRING_8, 1, {.str_8 = ")"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_109}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_110}},
  {FLT_STRING_8, 9, {.str_8 = "TAIL_CALL"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_111}},
  {FLT_STRING_8, 5, {.str_8 = "  // "}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_112}},
  {FLT_STRING_8, 11, {.str_8 = "std::assign"}},
  {FLT_STRING_8, 6, {.str_8 = "assign"}},
  {FLT_SEQUENCE, 2, {.arguments = sequence_553_1_arguments}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_113}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_114}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_115}},
  {FLT_STRING_8, 49, {.str_8 = "Return statement not allowed within function body"}},
  {FLT_STRING_8, 7, {.str_8 = "  LET, "}},
  {FLT_STRING_8, 18, {.str_8 = "_assign_attributes"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_assign_attributes}},
  {FLT_STRING_8, 8, {.str_8 = "  LET, -"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_116}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_117}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_118}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_119}},
  {FLT_STRING_8, 24, {.str_8 = "  LET, 1, 0, TAIL_CALL,\012"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_120}},
  {FLT_STRING_8, 21, {.str_8 = "  LET, 0, TAIL_CALL,\012"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_121}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_122}},
  {FLT_STRING_8, 8, {.str_8 = "  LET, 1"}},
  {FLT_STRING_8, 5, {.str_8 = ", 1, "}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__node___to_separated_index}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__inline_attribute_value_pair___to_separated_index}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__inline_method_value_pair___to_separated_index}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__attribute_value_pair___to_separated_index}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__method_value_pair___to_separated_index}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__type_function___to_separated_index}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__numeric_literal___add_literal}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__character_sequence___add_literal}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_123}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_124}},
  {FLT_POSITIVE_INT64, 0, {.value = 16}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_125}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_126}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_127}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_128}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_129}},
  {FLT_CHARACTER, 0, {.value = 32}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_130}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_131}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_132}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_mangled_is_empty}},
  {FLT_STRING_8, 6, {.str_8 = "string"}},
  {FLT_STRING_8, 7, {.str_8 = "string_"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_133}},
  {FLT_STRING_8, 4, {.str_8 = "str_"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_134}},
  {FLT_STRING_8, 1, {.str_8 = "_"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_135}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_add_mangled}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__unique___add_literal}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__statement___add_literal}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__body___add_literal}},
  {FLT_CHARACTER, 0, {.value = 58}},
  {FLT_STRING_8, 2, {.str_8 = "->"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_136}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_137}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_138}},
  {FLT_CHARACTER, 0, {.value = 36}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_139}},
  {FLT_POSITIVE_INT64, 0, {.value = 2}},
  {FLT_STRING_8, 5, {.str_8 = "func_"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_140}},
  {FLT_CHARACTER, 0, {.value = 46}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_672_19_arguments}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_add_lambda}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_name_is_empty}},
  {FLT_STRING_8, 6, {.str_8 = "lambda"}},
  {FLT_STRING_8, 7, {.str_8 = "lambda_"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_141}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_add_function}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_142}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_143}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_2_add_mangled}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_mangle_versioned_identifier}},
  {FLT_STRING_8, 1, {.str_8 = "-"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_144}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_145}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_146}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_147}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_replace}},
  {FLT_STRING_8, 3, {.str_8 = "___"}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_713_1_arguments}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_714_1_arguments}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_715_1_arguments}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_716_1_arguments}},
  {FLT_STRING_8, 19, {.str_8 = "MANDATORY_PARAMETER"}},
  {FLT_STRING_8, 16, {.str_8 = "MYSELF_PARAMETER"}},
  {FLT_STRING_8, 14, {.str_8 = "REST_PARAMETER"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__initial_value___to_option}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__node___add_source_positions}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__statement___add_source_positions}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_get_source_position}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_source_group_is_defined}},
  {FLT_STRING_8, 4, {.str_8 = "POS("}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_148}},
  {FLT_STRING_8, 9, {.str_8 = "POS(0, 0)"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__statement___to_compound}},
  {FLT_STRING_8, 12, {.str_8 = "\012static int "}},
  {FLT_STRING_8, 19, {.str_8 = "_arguments[] = {\012  "}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_to_negative_index}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__numeric_literal___to_table_entry}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_149}},
  {FLT_STRING_8, 31, {.str_8 = "  {FLT_REAL, 0, {.real_value = "}},
  {FLT_STRING_8, 4, {.str_8 = "}},\012"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_150}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_151}},
  {FLT_STRING_8, 4, {.str_8 = "NEGA"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_152}},
  {FLT_STRING_8, 4, {.str_8 = "POSI"}},
  {FLT_STRING_8, 2, {.str_8 = "0b"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_153}},
  {FLT_STRING_8, 2, {.str_8 = "0o"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_digits}},
  {FLT_STRING_8, 7, {.str_8 = "  {FLT_"}},
  {FLT_STRING_8, 25, {.str_8 = "TIVE_INT64, 0, {.value = "}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__numeric_character_literal___to_table_entry}},
  {FLT_STRING_8, 31, {.str_8 = "  {FLT_CHARACTER, 0, {.value = "}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__character_sequence___to_table_entry}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_characters_is_an_octet_string}},
  {FLT_STRING_8, 17, {.str_8 = "  {FLT_STRING_8, "}},
  {FLT_STRING_8, 13, {.str_8 = ", {.str_8 = \042"}},
  {FLT_STRING_8, 5, {.str_8 = "\042}},\012"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_154}},
  {FLT_STRING_8, 18, {.str_8 = "  {FLT_STRING_32, "}},
  {FLT_STRING_8, 15, {.str_8 = ", {.str_32 = U\042"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__statement___to_table_entry}},
  {FLT_STRING_8, 16, {.str_8 = ", {.arguments = "}},
  {FLT_STRING_8, 14, {.str_8 = "_arguments}},\012"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__unique___to_table_entry}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_814_47_arguments}},
  {FLT_STRING_8, 29, {.str_8 = "  {FLT_UNIQUE, 0, {.str_8 = \042"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__body___to_table_entry}},
  {FLT_STRING_8, 32, {.str_8 = "  {FLT_FUNCTION, 0, {.tfunc = t_"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_is_a_valid_statement}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_155}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_156}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_157}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_158}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_is_a_valid_argument}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_DEFINITION}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_REDEFINITION}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_159}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_info_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_160}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_161}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_162}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_check_destination}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_163}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_164}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__node___to_index}},
  {FLT_STRING_8, 18, {.str_8 = "/to_index failed: "}},
  {FLT_STRING_8, 4, {.str_8 = "self"}},
  {FLT_STRING_8, 1, {.str_8 = "?"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_retrieve_name}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_TEMPORARY}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_165}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_166}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_167}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_CONSTANT}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_168}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_LOCAL}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_169}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_170}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_171}},
  {FLT_STRING_8, 5, {.str_8 = "value"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_get_literal}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_check_mangling}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_172}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_173}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_remove_trailing_underscores_and_digits}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_174}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_175}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_176}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_177}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_178}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_remove_non_identifier_characters}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_179}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_180}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_181}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_182}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_183}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_184}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_185}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_186}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_187}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_is_local_or_constant}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_188}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_189}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_collect_types}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_190}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_191}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_192}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_BODY}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_193}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_194}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_check_types}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_195}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_196}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_197}},
  {FLT_NEGATIVE_INT64, 0, {.value = 2}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_198}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_TYPE_FUNCTION}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_199}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_200}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_201}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_202}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_203}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_204}},
  {FLT_STRING_8, 13, {.str_8 = "TYPE_FUNCTION"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_ATTRIBUTE_VALUE_PAIR}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_METHOD_VALUE_PAIR}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_add_method}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_205}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_206}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_207}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_208}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_add}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_209}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky__mangle_identifier}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_1059_1_arguments}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_to_c_string}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_210}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_211}},
  {FLT_CHARACTER, 0, {.value = 126}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_212}},
  {FLT_CHARACTER, 0, {.value = 34}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_213}},
  {FLT_CHARACTER, 0, {.value = 92}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_214}},
  {FLT_POSITIVE_INT64, 0, {.value = 3}},
  {FLT_STRING_8, 1, {.str_8 = "\134"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_215}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_216}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_217}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_to_c_string_32}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_218}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_219}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_220}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_221}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_222}},
  {FLT_POSITIVE_INT64, 0, {.value = 0xff}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_223}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_224}},
  {FLT_POSITIVE_INT64, 0, {.value = 0xffff}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_225}},
  {FLT_POSITIVE_INT64, 0, {.value = 4}},
  {FLT_STRING_8, 2, {.str_8 = "\134u"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_226}},
  {FLT_POSITIVE_INT64, 0, {.value = 8}},
  {FLT_STRING_8, 2, {.str_8 = "\134U"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_227}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_228}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_229}}
};

static ATTRIBUTE_DEFINITION funky_types__node__attributes[] = {
  {var_585_1_to_separated_index, -func_funky_types__node___to_separated_index},
  {var_725_1_add_source_positions, -func_funky_types__node___add_source_positions},
  {-var_743_1_to_compound, -string_6},
  {-var_762_1_to_table_entry, -string_14},
  {var_to_index, -func_funky_types__node___to_index}
};

static ATTRIBUTE_DEFINITION funky_types__inline_attribute_value_pair__attributes[] = {
  {var_585_1_to_separated_index, -func_funky_types__inline_attribute_value_pair___to_separated_index}
};

static ATTRIBUTE_DEFINITION funky_types__inline_method_value_pair__attributes[] = {
  {var_585_1_to_separated_index, -func_funky_types__inline_method_value_pair___to_separated_index}
};

static ATTRIBUTE_DEFINITION funky_types__attribute_value_pair__attributes[] = {
  {var_585_1_to_separated_index, -func_funky_types__attribute_value_pair___to_separated_index}
};

static ATTRIBUTE_DEFINITION funky_types__method_value_pair__attributes[] = {
  {var_585_1_to_separated_index, -func_funky_types__method_value_pair___to_separated_index}
};

static ATTRIBUTE_DEFINITION funky_types__type_function__attributes[] = {
  {var_585_1_to_separated_index, -func_funky_types__type_function___to_separated_index}
};

static ATTRIBUTE_DEFINITION funky_types__numeric_literal__attributes[] = {
  {var_604_1_add_literal, -func_funky_types__numeric_literal___add_literal},
  {var_762_1_to_table_entry, -func_funky_types__numeric_literal___to_table_entry},
  {var_to_index, -func_get_literal}
};

static ATTRIBUTE_DEFINITION funky_types__character_sequence__attributes[] = {
  {var_604_1_add_literal, -func_funky_types__character_sequence___add_literal},
  {var_762_1_to_table_entry, -func_funky_types__character_sequence___to_table_entry},
  {var_to_index, -func_get_literal}
};

static ATTRIBUTE_DEFINITION funky_types__unique__attributes[] = {
  {var_604_1_add_literal, -func_funky_types__unique___add_literal},
  {var_762_1_to_table_entry, -func_funky_types__unique___to_table_entry},
  {var_to_index, -func_get_literal}
};

static ATTRIBUTE_DEFINITION funky_types__statement__attributes[] = {
  {var_604_1_add_literal, -func_funky_types__statement___add_literal},
  {var_725_1_add_source_positions, -func_funky_types__statement___add_source_positions},
  {var_743_1_to_compound, -func_funky_types__statement___to_compound},
  {var_762_1_to_table_entry, -func_funky_types__statement___to_table_entry}
};

static ATTRIBUTE_DEFINITION funky_types__body__attributes[] = {
  {var_604_1_add_literal, -func_funky_types__body___add_literal},
  {var_762_1_to_table_entry, -func_funky_types__body___to_table_entry},
  {var_to_index, -func_get_literal}
};

static ATTRIBUTE_DEFINITION std_types__undefined__attributes[] = {
  {-var_718_1_to_option, -str_MANDATORY_PARAME}
};

static ATTRIBUTE_DEFINITION funky_types__myself__attributes[] = {
  {-var_718_1_to_option, -str_MYSELF_PARAMETER}
};

static ATTRIBUTE_DEFINITION funky_types__rest__attributes[] = {
  {-var_718_1_to_option, -str_REST_PARAMETER}
};

static ATTRIBUTE_DEFINITION funky_types__initial_value__attributes[] = {
  {var_718_1_to_option, -func_funky_types__initial_value___to_option}
};

static ATTRIBUTE_DEFINITION funky_types__numeric_character_literal__attributes[] = {
  {var_762_1_to_table_entry, -func_funky_types__numeric_character_literal___to_table_entry}
};

static ATTRIBUTE_DEFINITION funky_types__functor__attributes[] = {
  {var_to_index, -func_retrieve_name}
};

static ATTRIBUTE_DEFINITION funky_types__definition__attributes[] = {
  {var_to_index, -func_retrieve_name}
};

static ATTRIBUTE_DEFINITION funky_types__redefinition__attributes[] = {
  {var_to_index, -func_retrieve_name}
};

static ATTRIBUTE_DEFINITION funky_types__update__attributes[] = {
  {var_to_index, -func_retrieve_name}
};

static ATTRIBUTE_DEFINITION funky_types__character_literal__attributes[] = {
  {var_to_index, -func_get_literal}
};

static FUNKY_VARIABLE variables_table[] = {
  {
    FOT_DERIVED, 0, 0,
    "mangled_literals\000", NULL,
    {"empty_hash_table\000"}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_hash_table\000", NULL,
    {.position = POS(25, 19)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "assign\000std", NULL,
    {.position = POS(25, 1)}
  },
  {
    FOT_DERIVED, 0, 0,
    "mangling_counter\000", NULL,
    {"empty_hash_table\000"}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "generate_tabular_code\000funky", NULL,
    {.const_idx = -func_funky__generate_tabular_code}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "28_32_top_level_statements\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "28_53_is_a_main_module\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "literals\000", NULL,
    {.position = POS(31, 12)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "to_list\000", NULL,
    {.position = POS(31, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "32_19_literal\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "node_type_of\000", NULL,
    {.position = POS(35, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "TYPE_FUNCTION\000", NULL,
    {.position = POS(35, 34)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "equal\000std", NULL,
    {.position = POS(35, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "parameters_of\000", NULL,
    {.position = POS(36, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_empty\000", NULL,
    {.position = POS(36, 32)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "statements_of\000", NULL,
    {.position = POS(37, 19)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "length_of\000", NULL,
    {.position = POS(37, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "arguments_of\000", NULL,
    {.position = POS(38, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "and\000std", NULL,
    {.position = POS(34, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not\000", NULL,
    {.position = POS(33, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "filter\000", NULL,
    {.position = POS(32, 3)}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "604_1_add_literal\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "next\000", NULL,
    {.position = POS(43, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_insert_order_table\000", NULL,
    {.position = POS(45, 28)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "45_1_types\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "syntax_error\000", NULL,
    {.position = POS(48, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "on\000", NULL,
    {.position = POS(47, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if\000", NULL,
    {.position = POS(55, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000std", NULL,
    {.position = POS(53, 10)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "variables\000", NULL,
    {.position = POS(60, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "first\000", NULL,
    {.position = POS(60, 40)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "count\000", NULL,
    {.position = POS(60, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "less\000std", NULL,
    {.position = POS(63, 28)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "71_1_feature_flags\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_not_empty\000", NULL,
    {.position = POS(72, 38)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "append\000", NULL,
    {.position = POS(73, 25)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "update_if\000", NULL,
    {.position = POS(72, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "required_modules\000", NULL,
    {.position = POS(105, 25)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "defined_namespaces\000", NULL,
    {.position = POS(106, 25)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "used_namespaces\000", NULL,
    {.position = POS(107, 25)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "current_module_name\000", NULL,
    {.position = POS(98, 34)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "current_filename\000", NULL,
    {.position = POS(100, 16)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "string\000std", NULL,
    {.position = POS(75, 9)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "136_3_name\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "has_prefix\000", NULL,
    {.position = POS(137, 29)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "without_prefix\000", NULL,
    {.position = POS(138, 21)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "until\000", NULL,
    {.position = POS(139, 42)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "map_reduce\000", NULL,
    {.position = POS(134, 15)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "151_1_buf\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "153_1_idx\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "dec\000", NULL,
    {.position = POS(158, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "range\000", NULL,
    {.position = POS(163, 25)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "for_each\000", NULL,
    {.position = POS(154, 13)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "166_1_buf\000", NULL
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "743_1_to_compound\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "178_1_buf\000", NULL
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "762_1_to_table_entry\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "201_12_buf\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "202_3_name\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "mangle_identifier\000", NULL,
    {.position = POS(203, 13)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "204_1_kind\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "to_string\000", NULL,
    {.position = POS(211, 27)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "truncate_until\000", NULL,
    {.position = POS(211, 22)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "to_lower_case\000", NULL,
    {.position = POS(211, 60)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "key_value_pair\000std", NULL,
    {.position = POS(212, 22)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "replace_all\000", NULL,
    {.position = POS(210, 19)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "229_12_buf\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "230_3_name\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "230_8_info\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "231_6_kind\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "231_12_value\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "before\000", NULL,
    {.position = POS(237, 28)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "ATTRIBUTE\000", NULL,
    {.position = POS(244, 21)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "ATTRIBUTE_WITH_SETTER\000", NULL,
    {.position = POS(244, 32)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "sequence\000std", NULL,
    {.position = POS(244, 21)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "INITIALIZED\000", NULL,
    {.position = POS(245, 21)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "INITIALIZED_COMPOUND\000", NULL,
    {.position = POS(245, 34)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "EXTERN\000", NULL,
    {.position = POS(242, 21)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "EXTERN_POLYMORPHIC\000", NULL,
    {.position = POS(243, 21)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "DYNAMIC\000", NULL,
    {.position = POS(246, 21)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "DERIVED\000", NULL,
    {.position = POS(247, 21)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "dump\000debug", NULL,
    {.position = POS(249, 23)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "case\000", NULL,
    {.position = POS(240, 19)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "identifier_of\000", NULL,
    {.position = POS(260, 35)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "second\000", NULL,
    {.position = POS(274, 62)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "294_1_mangled_name\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "295_1_type\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_defined\000", NULL,
    {.position = POS(297, 16)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "302_1_buf\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "343_16_name\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "base_directory\000", NULL,
    {.position = POS(346, 34)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "truncate_from\000", NULL,
    {.position = POS(368, 21)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "397_3_body\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "BODY\000", NULL,
    {.position = POS(399, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_list\000", NULL,
    {.position = POS(417, 44)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "419_20_name\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "419_25_parameters\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "419_36_statements\000", NULL
  },
  {
    FOT_DERIVED, 0, 0,
    "temp_count\000", NULL,
    {"undefined\000"}
  },
  {
    FOT_DERIVED, 0, 0,
    "local_mapping\000", NULL,
    {"undefined\000"}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "428_3_parameter\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "REDEFINITION\000", NULL,
    {.position = POS(430, 42)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "434_1_parameter_name\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "name_of\000funky", NULL,
    {.position = POS(434, 33)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "LOCAL\000", NULL,
    {.position = POS(436, 55)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "443_3_statement\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "STATEMENT\000", NULL,
    {.position = POS(445, 42)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "head_of\000", NULL,
    {.position = POS(446, 61)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "453_20_node\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "kind_of\000", NULL,
    {.position = POS(458, 25)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "TEMPORARY\000", NULL,
    {.position = POS(458, 42)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "no_of\000", NULL,
    {.position = POS(459, 55)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "max\000", NULL,
    {.position = POS(459, 40)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "DEFINITION\000", NULL,
    {.position = POS(460, 46)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "461_1_identifier\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "true\000", NULL,
    {.position = POS(468, 24)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "cond\000", NULL,
    {.position = POS(454, 19)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "472_1_n\000", NULL
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "725_1_add_source_positions\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "483_1_parameter_count\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "option_of\000", NULL,
    {.position = POS(485, 47)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "any_of\000", NULL,
    {.position = POS(485, 13)}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "718_1_to_option\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "508_22_parameter\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "513_1_parameter_name\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "514_1_idx\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "520_11_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "520_16_is_last\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "521_1_head\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_an_input\000", NULL,
    {.position = POS(523, 41)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_an_output\000", NULL,
    {.position = POS(524, 42)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "524_1_output_arguments\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_a_dummy_definition\000", NULL,
    {.position = POS(526, 48)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "all_of\000", NULL,
    {.position = POS(526, 24)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "525_1_invalid_last_statement\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not\000std", NULL,
    {.position = POS(527, 36)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "529_1_input_count\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "530_1_output_count\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "531_1_is_a_tail_call\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_an_io_call\000", NULL,
    {.position = POS(534, 16)}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "585_1_to_separated_index\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "544_1_inputs\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "545_1_outputs\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "source_position_of\000", NULL,
    {.position = POS(549, 18)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "FUNCTOR\000", NULL,
    {.position = POS(551, 33)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "minus\000std", NULL,
    {.position = POS(564, 22)}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "to_index\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "566_1_statement\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 5,
    "node\000funky_types", funky_types__node__attributes,
    {.position = POS(587, 7)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "inline_attribute_value_pair\000funky_types", funky_types__inline_attribute_value_pair__attributes,
    {.position = POS(589, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "expression_of\000", NULL,
    {.position = POS(590, 41)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "inline_method_value_pair\000funky_types", funky_types__inline_method_value_pair__attributes,
    {.position = POS(592, 7)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "attribute_value_pair\000funky_types", funky_types__attribute_value_pair__attributes,
    {.position = POS(595, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "argument_of\000", NULL,
    {.position = POS(596, 41)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "method_value_pair\000funky_types", funky_types__method_value_pair__attributes,
    {.position = POS(598, 7)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "type_function\000funky_types", funky_types__type_function__attributes,
    {.position = POS(601, 7)}
  },
  {
    FOT_UNKNOWN, 0, 3,
    "numeric_literal\000funky_types", funky_types__numeric_literal__attributes,
    {.position = POS(606, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "key_of\000funky", NULL,
    {.position = POS(607, 29)}
  },
  {
    FOT_UNKNOWN, 0, 3,
    "character_sequence\000funky_types", funky_types__character_sequence__attributes,
    {.position = POS(610, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "610_47_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "611_1_mangled\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "characters_of\000", NULL,
    {.position = POS(612, 14)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "613_3_chr\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "break\000", NULL,
    {.position = POS(615, 39)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_a_letter\000", NULL,
    {.position = POS(616, 18)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_a_digit\000", NULL,
    {.position = POS(616, 37)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "or\000std", NULL,
    {.position = POS(616, 37)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "push\000", NULL,
    {.position = POS(617, 13)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "631_16_n\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 3,
    "unique\000funky_types", funky_types__unique__attributes,
    {.position = POS(644, 3)}
  },
  {
    FOT_UNKNOWN, 0, 4,
    "statement\000funky_types", funky_types__statement__attributes,
    {.position = POS(648, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "mangle_position\000", NULL,
    {.position = POS(650, 35)}
  },
  {
    FOT_UNKNOWN, 0, 3,
    "body\000funky_types", funky_types__body__attributes,
    {.position = POS(653, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "653_33_self\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "source_group_of\000", NULL,
    {.position = POS(654, 19)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "657_1_text\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "without_suffix\000", NULL,
    {.position = POS(658, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "trim_right\000", NULL,
    {.position = POS(660, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "contains\000", NULL,
    {.position = POS(662, 24)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "676_14_name\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "684_16_name\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "685_16_n\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "from\000", NULL,
    {.position = POS(692, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "string\000", NULL,
    {.position = POS(689, 13)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "699_31_name\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "700_1_rest\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "behind\000", NULL,
    {.position = POS(700, 13)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "undefined\000std_types", std_types__undefined__attributes,
    {.position = POS(720, 3)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "myself\000funky_types", funky_types__myself__attributes,
    {.position = POS(721, 3)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "rest\000funky_types", funky_types__rest__attributes,
    {.position = POS(722, 3)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "initial_value\000funky_types", funky_types__initial_value__attributes,
    {.position = POS(723, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "operand_of\000", NULL,
    {.position = POS(723, 52)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "732_23_node\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "733_1_source_group\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "line_no_of\000", NULL,
    {.position = POS(738, 18)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "concatenate\000", NULL,
    {.position = POS(752, 7)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "767_1_digits\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "digits_of\000", NULL,
    {.position = POS(767, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "to_integer\000", NULL,
    {.position = POS(779, 29)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "numeric_character_literal\000funky_types", funky_types__numeric_character_literal__attributes,
    {.position = POS(784, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "790_1_characters\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "791_1_length\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_an_octet_string\000", NULL,
    {.position = POS(793, 18)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "to_upper_case\000", NULL,
    {.position = POS(806, 55)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "replace_first\000", NULL,
    {.position = POS(814, 17)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "825_24_statement\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_a_definition\000", NULL,
    {.position = POS(827, 59)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "false\000", NULL,
    {.position = POS(832, 8)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "834_23_argument\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "841_1_info\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "CONSTANT\000", NULL,
    {.position = POS(852, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "CONSTANT_COMPOUND\000", NULL,
    {.position = POS(853, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "sequence\000", NULL,
    {.position = POS(851, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "undefined\000", NULL,
    {.position = POS(862, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "print\000debug", NULL,
    {.position = POS(875, 3)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "functor\000funky_types", funky_types__functor__attributes,
    {.position = POS(879, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "definition\000funky_types", funky_types__definition__attributes,
    {.position = POS(880, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "redefinition\000funky_types", funky_types__redefinition__attributes,
    {.position = POS(881, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "update\000funky_types", funky_types__update__attributes,
    {.position = POS(882, 1)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "884_17_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "887_1_info\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "894_1_identifier\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "895_23_kind\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "895_29_value\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "exit\000debug", NULL,
    {.position = POS(912, 11)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "character_literal\000funky_types", funky_types__character_literal__attributes,
    {.position = POS(916, 1)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "928_1_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "936_42_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "937_1_n\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "loop\000", NULL,
    {.position = POS(938, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "950_1_buf\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "952_3_chr\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "969_24_kind\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "972_17_types\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "974_3_statement\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "978_3_argument\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "METHOD_VALUE_PAIR\000", NULL,
    {.position = POS(983, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "ATTRIBUTE_VALUE_PAIR\000", NULL,
    {.position = POS(983, 36)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "994_1_arguments\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "995_1_functor_name\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1003_3_argument\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1014_1_identifier\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1015_29_constant_value\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1030_1_value\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1034_1_identifier\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1035_29_constant_value\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "default_value\000", NULL,
    {.position = POS(1045, 28)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "tuple\000", NULL,
    {.position = POS(1046, 45)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "mangle_identifier\000funky", NULL,
    {.const_idx = -func_funky__mangle_identifier}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1061_15_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1062_1_buf\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1063_1_s\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1065_3_idx\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1065_7_chr\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "oct\000", NULL,
    {.position = POS(1069, 36)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "pad_left\000", NULL,
    {.position = POS(1069, 27)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1079_18_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1080_1_buf\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1081_1_s\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1083_3_idx\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1083_7_chr\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1087_1_val\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "hex\000", NULL,
    {.position = POS(1096, 36)}
  }
};

static FUNKY_NAMESPACE used_namespaces[] = {
  {"std", 1, 0},
  {"funky", 1, 0}
};

FUNKY_MODULE module__generate_tabular_code = {
  "_generate_tabular_code", // module name
  "generate_tabular_code.fky", // module filename
  .major_version = 0,
  .minor_version = 0,
  .feature_flags = FEAT_POSITIONS,
  .marker = 0,
  0, // number of required modules
  0, // number of defined namespaces
  2, // number of used namespaces
  514, // number of constants
  263, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  constants_table,
  variables_table,
};
