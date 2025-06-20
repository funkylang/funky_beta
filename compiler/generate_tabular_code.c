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
  str_FEAT_POSITIONSFE = -24,
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
  key_value_pair_212_22 = -89,
  str___var = -90,
  string_13 = -91,
  lambda_40 = -92,
  lambda_41 = -93,
  str_enum___var__STAR = -94,
  str___var__END = -95,
  func_variables_table = -96,
  lambda_42 = -97,
  lambda_kind_is_local_or_constant = -98,
  lambda_43 = -99,
  lambda_EXTERN = -100,
  str_UNKNOWN = -101,
  lambda_EXTERN_POLYMORPHIC = -102,
  str_UNKNOWN_POLYMORP = -103,
  lambda_44 = -104,
  str_POLYMORPHIC = -105,
  lambda_45 = -106,
  str_INITIALIZED = -107,
  lambda_DYNAMIC = -108,
  str_UNINITIALIZED = -109,
  lambda_DERIVED = -110,
  str_DERIVED = -111,
  lambda_46 = -112,
  str_kind = -113,
  string_14 = -114,
  lambda_47 = -115,
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
  lambda_48 = -126,
  str_____position = -127,
  lambda_49 = -128,
  str_______FOT = -129,
  string_19 = -130,
  string_20 = -131,
  string_21 = -132,
  string_22 = -133,
  lambda_50 = -134,
  lambda_51 = -135,
  str_static_FUNKY_VAR = -136,
  func_retrieve_base_and_method_count = -137,
  lambda_52 = -138,
  str___attributes = -139,
  lambda_53 = -140,
  str_NULL = -141,
  string_23 = -142,
  func_attributes_tables = -143,
  lambda_54 = -144,
  str_static_ATTRIBUTE = -145,
  str___attributes_2 = -146,
  lambda_55 = -147,
  string_24 = -148,
  string_25 = -149,
  string_26 = -150,
  lambda_56 = -151,
  lambda_57 = -152,
  func_required_modules_table = -153,
  lambda_58 = -154,
  lambda_59 = -155,
  lambda_required_modules = -156,
  str_extern_FUNKY_MOD = -157,
  string_27 = -158,
  lambda_2_required_modules = -159,
  str___module = -160,
  str_static_FUNKY_MOD = -161,
  func_mangled_name = -162,
  lambda_60 = -163,
  string_28 = -164,
  key_value_pair_349_32 = -165,
  func_reference_required_modules = -166,
  lambda_61 = -167,
  str_NULL__required_m = -168,
  lambda_62 = -169,
  str_required_modules = -170,
  func_defined_namespaces_table = -171,
  lambda_63 = -172,
  lambda_64 = -173,
  lambda_defined_namespaces = -174,
  chr_45 = -175,
  string_29 = -176,
  string_30 = -177,
  str_static_FUNKY_NAM = -178,
  func_reference_defined_namespaces = -179,
  lambda_65 = -180,
  str_NULL__defined_na = -181,
  lambda_66 = -182,
  str_defined_namespac = -183,
  func_used_namespaces_table = -184,
  lambda_used_namespaces = -185,
  str_static_FUNKY_NAM_2 = -186,
  func_tabular_functions = -187,
  lambda_67 = -188,
  lambda_68 = -189,
  lambda_69 = -190,
  lambda_70 = -191,
  lambda_71 = -192,
  lambda_72 = -193,
  lambda_73 = -194,
  lambda_74 = -195,
  lambda_75 = -196,
  str_module_entry = -197,
  func_tabular_function = -198,
  lambda_76 = -199,
  lambda_77 = -200,
  lambda_78 = -201,
  lambda_79 = -202,
  lambda_80 = -203,
  lambda_81 = -204,
  lambda_82 = -205,
  lambda_83 = -206,
  lambda_84 = -207,
  lambda_85 = -208,
  func_check_for_locals = -209,
  lambda_86 = -210,
  lambda_87 = -211,
  lambda_88 = -212,
  lambda_89 = -213,
  lambda_90 = -214,
  lambda_91 = -215,
  lambda_92 = -216,
  lambda_93 = -217,
  lambda_94 = -218,
  lambda_95 = -219,
  lambda_96 = -220,
  str___LOCAL = -221,
  string_31 = -222,
  lambda_97 = -223,
  string_32 = -224,
  string_33 = -225,
  lambda_map_reducestatements = -226,
  str_static_TAB_NUM_t = -227,
  string_34 = -228,
  str___locals = -229,
  str_static_FUNCTION = -230,
  str_____t = -231,
  str__NULL = -232,
  string_35 = -233,
  string_36 = -234,
  func_add_parameters = -235,
  lambda_any_ofparameters = -236,
  lambda_98 = -237,
  string_37 = -238,
  str___parameters = -239,
  lambda_99 = -240,
  func_add_parameter = -241,
  func_add_parameter_with_option = -242,
  func_parameter_to_index = -243,
  lambda_100 = -244,
  str_LOCAL = -245,
  string_38 = -246,
  lambda_101 = -247,
  lambda_102 = -248,
  string_39 = -249,
  lambda_103 = -250,
  str_var = -251,
  func_compile = -252,
  lambda_104 = -253,
  lambda_105 = -254,
  lambda_106 = -255,
  lambda_107 = -256,
  str_Last_statement_i = -257,
  lambda_108 = -258,
  lambda_self_is_an_io_call = -259,
  lambda_109 = -260,
  str_IO_TAIL_CALL = -261,
  lambda_110 = -262,
  str_IO_CALL = -263,
  lambda_111 = -264,
  lambda_112 = -265,
  str_TAIL_CALL = -266,
  lambda_113 = -267,
  string_40 = -268,
  lambda_114 = -269,
  str_stdassign = -270,
  str_assign = -271,
  sequence_577_16 = -272,
  lambda_115 = -273,
  lambda_116 = -274,
  lambda_117 = -275,
  str_Return_statement = -276,
  str___LET = -277,
  str__assign_attribut = -278,
  lambda_assign_attributes = -279,
  str___LET_2 = -280,
  lambda_118 = -281,
  lambda_119 = -282,
  lambda_120 = -283,
  lambda_121 = -284,
  str___LET_1_0_TAIL_C = -285,
  lambda_122 = -286,
  str___LET_0_TAIL_CAL = -287,
  lambda_123 = -288,
  lambda_124 = -289,
  str___LET_3 = -290,
  string_41 = -291,
  func_funky_types__node___to_separated_index = -292,
  func_funky_types__inline_attribute_value_pair___to_separated_index = -293,
  func_funky_types__inline_method_value_pair___to_separated_index = -294,
  func_funky_types__attribute_value_pair___to_separated_index = -295,
  func_funky_types__method_value_pair___to_separated_index = -296,
  func_funky_types__type_function___to_separated_index = -297,
  func_funky_types__numeric_literal___add_literal = -298,
  func_funky_types__character_sequence___add_literal = -299,
  lambda_125 = -300,
  lambda_126 = -301,
  num_16 = -302,
  lambda_127 = -303,
  lambda_128 = -304,
  lambda_129 = -305,
  lambda_130 = -306,
  lambda_131 = -307,
  chr_32 = -308,
  lambda_132 = -309,
  lambda_133 = -310,
  lambda_134 = -311,
  lambda_mangled_is_empty = -312,
  str_string = -313,
  str_string_2 = -314,
  lambda_135 = -315,
  str_str = -316,
  lambda_136 = -317,
  string_42 = -318,
  lambda_137 = -319,
  func_add_mangled = -320,
  func_funky_types__unique___add_literal = -321,
  func_funky_types__statement___add_literal = -322,
  func_funky_types__body___add_literal = -323,
  chr_58 = -324,
  string_43 = -325,
  lambda_138 = -326,
  lambda_139 = -327,
  lambda_140 = -328,
  chr_36 = -329,
  lambda_141 = -330,
  num_2 = -331,
  str_func = -332,
  lambda_142 = -333,
  chr_46 = -334,
  key_value_pair_696_32 = -335,
  func_add_lambda = -336,
  lambda_name_is_empty = -337,
  str_lambda = -338,
  str_lambda_2 = -339,
  lambda_143 = -340,
  func_add_function = -341,
  lambda_144 = -342,
  lambda_145 = -343,
  func_2_add_mangled = -344,
  func_mangle_versioned_identifier = -345,
  string_44 = -346,
  lambda_146 = -347,
  lambda_147 = -348,
  lambda_148 = -349,
  lambda_149 = -350,
  func_replace = -351,
  string_45 = -352,
  key_value_pair_737_12 = -353,
  key_value_pair_738_12 = -354,
  key_value_pair_739_12 = -355,
  key_value_pair_740_12 = -356,
  str_MANDATORY_PARAME = -357,
  str_MYSELF_PARAMETER = -358,
  str_REST_PARAMETER = -359,
  func_funky_types__initial_value___to_option = -360,
  func_funky_types__node___add_source_positions = -361,
  func_funky_types__statement___add_source_positions = -362,
  func_get_source_position = -363,
  lambda_source_group_is_defined = -364,
  str_POS = -365,
  lambda_150 = -366,
  str_POS_2 = -367,
  func_funky_types__statement___to_compound = -368,
  str_static_int = -369,
  str__arguments = -370,
  func_to_negative_index = -371,
  func_funky_types__numeric_literal___to_table_entry = -372,
  lambda_151 = -373,
  str___FLT_REAL_0_rea = -374,
  string_46 = -375,
  lambda_152 = -376,
  lambda_153 = -377,
  str_NEGA = -378,
  lambda_154 = -379,
  str_POSI = -380,
  str_0b = -381,
  lambda_155 = -382,
  str_0o = -383,
  lambda_digits = -384,
  str___FLT = -385,
  str_TIVE_INT64_0_val = -386,
  func_funky_types__numeric_character_literal___to_table_entry = -387,
  str___FLT_CHARACTER = -388,
  func_funky_types__character_sequence___to_table_entry = -389,
  lambda_characters_is_an_octet_string = -390,
  str___FLT_STRING = -391,
  str__str = -392,
  string_47 = -393,
  lambda_156 = -394,
  str___FLT_STRING_2 = -395,
  str__str_32__U = -396,
  func_funky_types__statement___to_table_entry = -397,
  str__arguments_2 = -398,
  str__arguments_3 = -399,
  func_funky_types__unique___to_table_entry = -400,
  key_value_pair_838_52 = -401,
  str___FLT_UNIQUE_0_s = -402,
  func_funky_types__body___to_table_entry = -403,
  str___FLT_FUNCTION_2 = -404,
  func_is_a_valid_statement = -405,
  lambda_157 = -406,
  lambda_158 = -407,
  lambda_159 = -408,
  lambda_160 = -409,
  func_is_a_valid_argument = -410,
  lambda_DEFINITION = -411,
  lambda_REDEFINITION = -412,
  lambda_161 = -413,
  lambda_info_is_defined = -414,
  lambda_162 = -415,
  lambda_163 = -416,
  lambda_164 = -417,
  func_check_destination = -418,
  lambda_165 = -419,
  lambda_166 = -420,
  func_funky_types__node___to_index = -421,
  str_to_index_failed = -422,
  str_self = -423,
  string_48 = -424,
  func_retrieve_name = -425,
  lambda_TEMPORARY = -426,
  lambda_167 = -427,
  lambda_168 = -428,
  lambda_169 = -429,
  lambda_CONSTANT = -430,
  lambda_170 = -431,
  lambda_LOCAL = -432,
  lambda_171 = -433,
  lambda_172 = -434,
  lambda_173 = -435,
  str_value = -436,
  func_get_literal = -437,
  func_check_mangling = -438,
  lambda_174 = -439,
  lambda_175 = -440,
  func_remove_trailing_underscores_and_digits = -441,
  lambda_loop = -442,
  lambda_176 = -443,
  lambda_177 = -444,
  lambda_178 = -445,
  lambda_179 = -446,
  lambda_180 = -447,
  func_remove_non_identifier_characters = -448,
  lambda_181 = -449,
  lambda_182 = -450,
  lambda_183 = -451,
  lambda_184 = -452,
  lambda_185 = -453,
  lambda_186 = -454,
  lambda_187 = -455,
  lambda_188 = -456,
  lambda_189 = -457,
  func_is_local_or_constant = -458,
  lambda_190 = -459,
  lambda_191 = -460,
  func_collect_types = -461,
  lambda_192 = -462,
  lambda_193 = -463,
  lambda_194 = -464,
  lambda_BODY = -465,
  lambda_195 = -466,
  lambda_196 = -467,
  func_check_types = -468,
  lambda_197 = -469,
  lambda_198 = -470,
  lambda_199 = -471,
  minus_num_2 = -472,
  lambda_200 = -473,
  lambda_TYPE_FUNCTION = -474,
  lambda_201 = -475,
  lambda_202 = -476,
  lambda_203 = -477,
  lambda_204 = -478,
  lambda_205 = -479,
  lambda_206 = -480,
  str_TYPE_FUNCTION = -481,
  lambda_ATTRIBUTE_VALUE_PAIR = -482,
  lambda_METHOD_VALUE_PAIR = -483,
  func_add_method = -484,
  lambda_207 = -485,
  lambda_208 = -486,
  lambda_209 = -487,
  lambda_210 = -488,
  func_add = -489,
  lambda_211 = -490,
  func_funky__mangle_identifier = -491,
  key_value_pair_1083_6 = -492,
  func_to_c_string = -493,
  lambda_212 = -494,
  lambda_213 = -495,
  chr_126 = -496,
  lambda_214 = -497,
  chr_34 = -498,
  lambda_215 = -499,
  chr_92 = -500,
  lambda_216 = -501,
  num_3 = -502,
  string_49 = -503,
  lambda_217 = -504,
  lambda_218 = -505,
  lambda_219 = -506,
  func_to_c_string_32 = -507,
  lambda_220 = -508,
  lambda_221 = -509,
  lambda_222 = -510,
  lambda_223 = -511,
  lambda_224 = -512,
  num_0xff = -513,
  lambda_225 = -514,
  lambda_226 = -515,
  num_0xffff = -516,
  lambda_227 = -517,
  num_4 = -518,
  str_u = -519,
  lambda_228 = -520,
  num_8 = -521,
  str_U = -522,
  lambda_229 = -523,
  lambda_230 = -524,
  lambda_231 = -525
};

enum {
  var__START = FIRST_VAR-1,
  var_mangled_literals, // derived
  var_empty_hash_table, // extern
  var_std__assign, // extern
  var_mangling_counter, // derived
  var_funky__generate_tabular_code, // initialized
  var_28_33_top_level_statements, // dynamic
  var_28_54_is_a_main_module, // dynamic
  var_literals, // extern
  var_to_list, // extern
  var_32_22_literal, // dynamic
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
  var_628_4_add_literal, // attribute
  var_next, // extern
  var_empty_insert_order_table, // extern
  var_45_8_types, // dynamic
  var_syntax_error, // extern
  var_on, // extern
  var_if, // extern
  var_std__plus, // extern
  var_variables, // extern
  var_first, // extern
  var_count, // extern
  var_std__less, // extern
  var_71_8_feature_flags, // dynamic
  var_is_not_empty, // extern
  var_append, // extern
  var_update_if, // extern
  var_required_modules, // extern
  var_defined_namespaces, // extern
  var_used_namespaces, // extern
  var_current_module_name, // extern
  var_current_filename, // extern
  var_std__string, // extern
  var_136_20_name, // dynamic
  var_has_prefix, // extern
  var_without_prefix, // extern
  var_until, // extern
  var_map_reduce, // extern
  var_151_14_buf, // dynamic
  var_153_14_idx, // dynamic
  var_dec, // extern
  var_range, // extern
  var_for_each, // extern
  var_166_10_buf, // dynamic
  var_767_4_to_compound, // attribute
  var_178_14_buf, // dynamic
  var_786_4_to_table_entry, // attribute
  var_201_21_buf, // dynamic
  var_202_14_name, // dynamic
  var_mangle_identifier, // extern
  var_204_14_kind, // dynamic
  var_to_string, // extern
  var_truncate_until, // extern
  var_to_lower_case, // extern
  var_std__key_value_pair, // extern
  var_replace_all, // extern
  var_229_21_buf, // dynamic
  var_230_14_name, // dynamic
  var_230_19_info, // dynamic
  var_231_19_kind, // dynamic
  var_231_25_value, // dynamic
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
  var_295_10_mangled_name, // dynamic
  var_296_10_type, // dynamic
  var_is_defined, // extern
  var_303_10_buf, // dynamic
  var_344_25_name, // dynamic
  var_base_directory, // extern
  var_truncate_from, // extern
  var_398_14_body, // dynamic
  var_BODY, // extern
  var_empty_list, // extern
  var_420_23_name, // dynamic
  var_420_28_parameters, // dynamic
  var_420_39_statements, // dynamic
  var_temp_count, // derived
  var_local_mapping, // derived
  var_429_14_parameter, // dynamic
  var_REDEFINITION, // extern
  var_435_18_parameter_name, // dynamic
  var_funky__name_of, // extern
  var_LOCAL, // extern
  var_444_14_statement, // dynamic
  var_STATEMENT, // extern
  var_head_of, // extern
  var_454_37_node, // dynamic
  var_kind_of, // extern
  var_TEMPORARY, // extern
  var_no_of, // extern
  var_max, // extern
  var_DEFINITION, // extern
  var_462_24_identifier, // dynamic
  var_true, // extern
  var_cond, // extern
  var_473_10_n, // dynamic
  var_concatenate, // extern
  var_749_4_add_source_positions, // attribute
  var_503_12_parameter_count, // dynamic
  var_option_of, // extern
  var_any_of, // extern
  var_742_4_to_option, // attribute
  var_528_31_parameter, // dynamic
  var_533_16_parameter_name, // dynamic
  var_534_16_idx, // dynamic
  var_540_16_self, // dynamic
  var_540_21_is_last, // dynamic
  var_541_8_head, // dynamic
  var_is_an_input, // extern
  var_is_an_output, // extern
  var_544_8_output_arguments, // dynamic
  var_is_a_dummy_definition, // extern
  var_all_of, // extern
  var_545_8_invalid_last_statement, // dynamic
  var_std__not, // extern
  var_std__or, // extern
  var_553_8_input_count, // dynamic
  var_554_8_output_count, // dynamic
  var_555_8_is_a_tail_call, // dynamic
  var_is_an_io_call, // extern
  var_609_8_to_separated_index, // attribute
  var_568_8_inputs, // dynamic
  var_569_8_outputs, // dynamic
  var_source_position_of, // extern
  var_FUNCTOR, // extern
  var_std__minus, // extern
  var_to_index, // attribute
  var_590_18_statement, // dynamic
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
  var_634_50_self, // dynamic
  var_635_6_mangled, // dynamic
  var_characters_of, // extern
  var_637_10_chr, // dynamic
  var_break, // extern
  var_is_a_letter, // extern
  var_is_a_digit, // extern
  var_push, // extern
  var_655_29_n, // dynamic
  var_funky_types__unique, // extern
  var_funky_types__statement, // extern
  var_mangle_position, // extern
  var_funky_types__body, // extern
  var_677_36_self, // dynamic
  var_source_group_of, // extern
  var_681_6_text, // dynamic
  var_without_suffix, // extern
  var_trim_right, // extern
  var_contains, // extern
  var_700_19_name, // dynamic
  var_708_21_name, // dynamic
  var_709_23_n, // dynamic
  var_from, // extern
  var_string, // extern
  var_723_36_name, // dynamic
  var_724_8_rest, // dynamic
  var_behind, // extern
  var_std_types__undefined, // extern
  var_funky_types__myself, // extern
  var_funky_types__rest, // extern
  var_funky_types__initial_value, // extern
  var_operand_of, // extern
  var_756_26_node, // dynamic
  var_757_6_source_group, // dynamic
  var_line_no_of, // extern
  var_791_6_digits, // dynamic
  var_digits_of, // extern
  var_to_integer, // extern
  var_funky_types__numeric_character_literal, // extern
  var_814_6_characters, // dynamic
  var_815_6_length, // dynamic
  var_is_an_octet_string, // extern
  var_to_upper_case, // extern
  var_replace_first, // extern
  var_849_25_statement, // dynamic
  var_is_a_definition, // extern
  var_false, // extern
  var_858_26_argument, // dynamic
  var_865_14_info, // dynamic
  var_CONSTANT, // extern
  var_CONSTANT_COMPOUND, // extern
  var_sequence, // extern
  var_undefined, // extern
  var_debug__print, // extern
  var_funky_types__functor, // extern
  var_funky_types__definition, // extern
  var_funky_types__redefinition, // extern
  var_funky_types__update, // extern
  var_908_18_self, // dynamic
  var_911_8_info, // dynamic
  var_918_8_identifier, // dynamic
  var_919_30_kind, // dynamic
  var_919_36_value, // dynamic
  var_debug__exit, // extern
  var_funky_types__character_literal, // extern
  var_952_4_n, // dynamic
  var_960_43_str, // dynamic
  var_961_4_n, // dynamic
  var_loop, // extern
  var_974_4_buf, // dynamic
  var_976_8_chr, // dynamic
  var_993_25_kind, // dynamic
  var_996_18_types, // dynamic
  var_998_8_statement, // dynamic
  var_1002_16_argument, // dynamic
  var_METHOD_VALUE_PAIR, // extern
  var_ATTRIBUTE_VALUE_PAIR, // extern
  var_1018_10_arguments, // dynamic
  var_1019_10_functor_name, // dynamic
  var_1027_18_argument, // dynamic
  var_1038_28_identifier, // dynamic
  var_1039_56_constant_value, // dynamic
  var_1054_20_value, // dynamic
  var_1058_26_identifier, // dynamic
  var_1059_54_constant_value, // dynamic
  var_default_value, // extern
  var_tuple, // extern
  var_funky__mangle_identifier, // initialized
  var_1085_16_str, // dynamic
  var_1086_4_buf, // dynamic
  var_1087_4_s, // dynamic
  var_1089_8_idx, // dynamic
  var_1089_12_chr, // dynamic
  var_oct, // extern
  var_pad_left, // extern
  var_1103_19_str, // dynamic
  var_1104_4_buf, // dynamic
  var_1105_4_s, // dynamic
  var_1107_8_idx, // dynamic
  var_1107_12_chr, // dynamic
  var_1111_12_val, // dynamic
  var_hex, // extern
  var__END
};


static TAB_NUM t_func_funky__generate_tabular_code[] = {
  0, // locals
  2, // parameters
  var_28_33_top_level_statements,
  var_28_54_is_a_main_module,
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

static FUNCTION_INFO i_func_funky__generate_tabular_code = {
  t_func_funky__generate_tabular_code, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_1[] = {
  3, // locals
  1, // parameters
  var_32_22_literal,
  // node_type_of(literal) == TYPE_FUNCTION
  var_node_type_of, 1, var_32_22_literal, 1, LOCAL(1),
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

static FUNCTION_INFO i_lambda_1 = {
  t_lambda_1, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_2[] = {
  3, // locals
  0, // parameters
  // parameters_of(literal).is_empty
  var_parameters_of, 1, var_32_22_literal, 1, LOCAL(1),
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

static FUNCTION_INFO i_lambda_2 = {
  t_lambda_2, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_3[] = {
  4, // locals
  0, // parameters
  // statements_of(literal)) == 1
  var_statements_of, 1, var_32_22_literal, 1, LOCAL(1),
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

static FUNCTION_INFO i_lambda_3 = {
  t_lambda_3, NULL, 5, 0,
  {}
};

static TAB_NUM t_lambda_4[] = {
  4, // locals
  0, // parameters
  // statements_of(literal)(1)).is_empty
  var_statements_of, 1, var_32_22_literal, 1, LOCAL(1),
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

static FUNCTION_INFO i_lambda_4 = {
  t_lambda_4, NULL, 5, 0,
  {}
};

static TAB_NUM t_lambda_5[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 41_8_literal
  // add_literal !mangled_literals !mangling_counter literal
  var_628_4_add_literal, 1, LOCAL(1), 2, var_mangled_literals, var_mangling_counter,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(42, 7),
  POS(43, 7),
  LOCAL(1)
};

static FUNCTION_INFO i_lambda_5 = {
  t_lambda_5, NULL, 2, 1,
  {"41_8_literal\000"}
};

static TAB_NUM t_lambda_6[] = {
  23, // locals
  0, // parameters
  // $types collect_types(empty_insert_order_table top_level_statements)
  func_collect_types, 2, var_empty_insert_order_table, var_28_33_top_level_statements, 1, var_45_8_types,
  // filter &top_level_statements is_a_valid_statement
  var_filter, 2, var_28_33_top_level_statements, func_is_a_valid_statement, 1, var_28_33_top_level_statements,
  // is_a_main_module && top_level_statements.is_empty:
  var_std__and, 2, var_28_54_is_a_main_module, lambda_7, 1, LOCAL(1),
  // on is_a_main_module && top_level_statements.is_empty:
  var_on, 2, LOCAL(1), lambda_8, 0,
  // length_of(literals)
  var_length_of, 1, var_literals, 1, LOCAL(1),
  // is_empty
  var_is_empty, 1, var_28_33_top_level_statements, 1, LOCAL(2),
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
  // $feature_flags "FEAT_POSITIONS|FEAT_FUNCTION_INFO"
  LET, 1, str_FEAT_POSITIONSFE, 1, var_71_8_feature_flags,
  // is_not_empty && not(is_a_main_module)
  var_is_not_empty, 1, var_28_33_top_level_statements, 1, LOCAL(1),
  // is_not_empty && not(is_a_main_module)
  var_std__and, 2, LOCAL(1), lambda_15, 1, LOCAL(2),
  // update_if top_level_statements.is_not_empty && not(is_a_main_module)
  var_update_if, 3, LOCAL(2), var_71_8_feature_flags, lambda_feature_flags, 1, var_71_8_feature_flags,
  // require())@
  func_require, 0, 1, LOCAL(1),
  // constants_enum())
  func_constants_enum, 0, 1, LOCAL(2),
  // variables_enum())@
  func_variables_enum, 0, 1, LOCAL(3),
  // tabular_functions())@
  func_tabular_functions, 0, 1, LOCAL(4),
  // main_function())@
  lambda_75, 0, 1, LOCAL(5),
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
  var_std__string, 42, LOCAL(1), str_include_stddefhi, LOCAL(2), string_1, LOCAL(3), string_1, LOCAL(4), LOCAL(5), LOCAL(6), LOCAL(7), LOCAL(8), LOCAL(9), LOCAL(10), LOCAL(11), LOCAL(12), str_FUNKY_MODULE_mod, var_current_module_name, string_2, var_current_module_name, str___module_name, var_current_filename, str___module_filenam, var_71_8_feature_flags, str___marker, LOCAL(13), str___number_of_requ, LOCAL(14), str___number_of_defi, LOCAL(15), str___number_of_used, LOCAL(20), str___number_of_cons, LOCAL(21), str___number_of_vari, LOCAL(16), string_3, LOCAL(17), str___used_namespace, LOCAL(22), string_1, LOCAL(23), string_4, 1, LOCAL(18),
  // if
  var_if, 3, var_28_54_is_a_main_module, lambda_16, lambda_17, 1, LOCAL(19),
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
  POS(74, 7),
  LOCAL(22),
  LOCAL(20),
  LOCAL(23),
  LOCAL(21)
};

static FUNCTION_INFO i_lambda_6 = {
  t_lambda_6, NULL, 37, 4,
  {"61_8_ref_constants_table\000", "52_8_constant_count\000", "66_8_ref_variables_table\000", "59_8_variable_count\000"}
};

static TAB_NUM t_lambda_7[] = {
  1, // locals
  0, // parameters
  // is_empty:
  var_is_empty, 1, var_28_33_top_level_statements, 1, LOCAL(1),
  // top_level_statements.is_empty:
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(47, 51),
  POS(47, 30)
};

static FUNCTION_INFO i_lambda_7 = {
  t_lambda_7, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_8[] = {
  0, // locals
  0, // parameters
  // syntax_error "Main module does not contain any statements"
  var_syntax_error, 1, str_Main_module_does, TAIL_CALL,
  POS(48, 9)
};

static FUNCTION_INFO i_lambda_8 = {
  t_lambda_8, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_9[] = {
  0, // locals
  0, // parameters
  //  0
  LET, 1, num_0, TAIL_CALL,
  POS(57, 15)
};

static FUNCTION_INFO i_lambda_9 = {
  t_lambda_9, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_10[] = {
  0, // locals
  0, // parameters
  //  1
  LET, 1, num_1, TAIL_CALL,
  POS(58, 15)
};

static FUNCTION_INFO i_lambda_10 = {
  t_lambda_10, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_countvariables[] = {
  4, // locals
  1, // parameters
  LOCAL(4), // 60_27_info
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
  POS(60, 33),
  LOCAL(4)
};

static FUNCTION_INFO i_lambda_countvariables = {
  t_lambda_countvariables, NULL, 4, 1,
  {"60_27_info\000"}
};

static TAB_NUM t_lambda_11[] = {
  0, // locals
  0, // parameters
  //  "  constants_table,"
  LET, 1, str___constants_tabl, TAIL_CALL,
  POS(64, 13)
};

static FUNCTION_INFO i_lambda_11 = {
  t_lambda_11, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_12[] = {
  0, // locals
  0, // parameters
  //  "  NULL, // no constants"
  LET, 1, str___NULL__no_const, TAIL_CALL,
  POS(65, 13)
};

static FUNCTION_INFO i_lambda_12 = {
  t_lambda_12, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_13[] = {
  0, // locals
  0, // parameters
  //  "  variables_table,"
  LET, 1, str___variables_tabl, TAIL_CALL,
  POS(69, 13)
};

static FUNCTION_INFO i_lambda_13 = {
  t_lambda_13, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_14[] = {
  0, // locals
  0, // parameters
  //  "  NULL, // no variables"
  LET, 1, str___NULL__no_varia, TAIL_CALL,
  POS(70, 13)
};

static FUNCTION_INFO i_lambda_14 = {
  t_lambda_14, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_15[] = {
  1, // locals
  0, // parameters
  // not(is_a_main_module)
  var_not, 1, var_28_54_is_a_main_module, 1, LOCAL(1),
  // not(is_a_main_module)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(72, 54),
  POS(72, 54)
};

static FUNCTION_INFO i_lambda_15 = {
  t_lambda_15, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_feature_flags[] = {
  0, // locals
  0, // parameters
  // append feature_flags "|FEAT_INITIALIZER"
  var_append, 2, var_71_8_feature_flags, str_FEAT_INITIALIZER, TAIL_CALL,
  POS(73, 25)
};

static FUNCTION_INFO i_lambda_feature_flags = {
  t_lambda_feature_flags, NULL, 1, 0,
  {}
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

static FUNCTION_INFO i_lambda_16 = {
  t_lambda_16, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_17[] = {
  0, // locals
  0, // parameters
  //  ""
  LET, 1, string_6, TAIL_CALL,
  POS(126, 13)
};

static FUNCTION_INFO i_lambda_17 = {
  t_lambda_17, NULL, 1, 0,
  {}
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

static FUNCTION_INFO i_func_require = {
  t_func_require, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_18[] = {
  0, // locals
  0, // parameters
  //  ""
  LET, 1, string_6, TAIL_CALL,
  POS(131, 13)
};

static FUNCTION_INFO i_lambda_18 = {
  t_lambda_18, NULL, 1, 0,
  {}
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

static FUNCTION_INFO i_lambda_19 = {
  t_lambda_19, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_20[] = {
  1, // locals
  1, // parameters
  var_136_20_name,
  // name .has_prefix. "./" &name:
  var_has_prefix, 2, var_136_20_name, string_7, 1, LOCAL(1),
  // update_if name .has_prefix. "./" &name:
  var_update_if, 3, LOCAL(1), var_136_20_name, lambda_21, 1, var_136_20_name,
  // "
  var_std__string, 3, str__require, var_136_20_name, string_1, 1, LOCAL(1),
  // -> "
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(137, 29),
  POS(137, 19),
  POS(142, 22),
  POS(142, 19)
};

static FUNCTION_INFO i_lambda_20 = {
  t_lambda_20, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_21[] = {
  1, // locals
  0, // parameters
  // without_prefix &name "./"
  var_without_prefix, 2, var_136_20_name, string_7, 1, var_136_20_name,
  // until(current_filename '/' -1)
  var_until, 3, var_current_filename, chr_47, minus_num_1, 1, LOCAL(1),
  // without_prefix &name until(current_filename '/' -1)
  var_without_prefix, 2, var_136_20_name, LOCAL(1), 1, var_136_20_name,
  // append "./" &name
  var_append, 2, string_7, var_136_20_name, 1, var_136_20_name,
  // -> name
  LET, 1, var_136_20_name, TAIL_CALL,
  POS(138, 21),
  POS(139, 42),
  POS(139, 21),
  POS(140, 21),
  POS(141, 21)
};

static FUNCTION_INFO i_lambda_21 = {
  t_lambda_21, NULL, 5, 0,
  {}
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

static FUNCTION_INFO i_func_constants_enum = {
  t_func_constants_enum, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_22[] = {
  0, // locals
  0, // parameters
  //  ""
  LET, 1, string_6, TAIL_CALL,
  POS(149, 13)
};

static FUNCTION_INFO i_lambda_22 = {
  t_lambda_22, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_23[] = {
  0, // locals
  0, // parameters
  // $buf "
  LET, 1, str_enum, 1, var_151_14_buf,
  // $idx 0
  LET, 1, num_0, 1, var_153_14_idx,
  // for_each literals
  var_for_each, 3, var_literals, lambda_24, lambda_25, TAIL_CALL,
  POS(151, 13),
  POS(153, 13),
  POS(154, 13)
};

static FUNCTION_INFO i_lambda_23 = {
  t_lambda_23, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_24[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 156_18_literal
  // $mangled_name mangled_literals(literal)
  var_mangled_literals, 1, LOCAL(2), 1, LOCAL(3),
  // dec &idx
  var_dec, 1, var_153_14_idx, 1, var_153_14_idx,
  // "
  var_std__string, 5, string_8, LOCAL(3), string_9, var_153_14_idx, string_10, 1, LOCAL(1),
  // append &buf "
  var_append, 2, var_151_14_buf, LOCAL(1), 1, var_151_14_buf,
  // next
  var_next, 0, TAIL_CALL,
  POS(157, 17),
  POS(158, 17),
  POS(159, 29),
  POS(159, 17),
  POS(162, 17),
  LOCAL(3),
  LOCAL(2)
};

static FUNCTION_INFO i_lambda_24 = {
  t_lambda_24, NULL, 5, 2,
  {"157_18_mangled_name\000", "156_18_literal\000"}
};

static TAB_NUM t_lambda_25[] = {
  2, // locals
  0, // parameters
  // range(buf 1 -3) "@nl;};@nl;")
  var_range, 3, var_151_14_buf, num_1, minus_num_3, 1, LOCAL(1),
  // append(range(buf 1 -3) "@nl;};@nl;")
  var_append, 2, LOCAL(1), string_4, 1, LOCAL(2),
  //  append(range(buf 1 -3) "@nl;};@nl;")
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(163, 25),
  POS(163, 18),
  POS(163, 17)
};

static FUNCTION_INFO i_lambda_25 = {
  t_lambda_25, NULL, 3, 0,
  {}
};

static TAB_NUM t_func_compound_constants[] = {
  0, // locals
  0, // parameters
  // $buf ""
  LET, 1, string_6, 1, var_166_10_buf,
  // for_each literals
  var_for_each, 3, var_literals, lambda_26, lambda_27, TAIL_CALL,
  POS(166, 9),
  POS(167, 9)
};

static FUNCTION_INFO i_func_compound_constants = {
  t_func_compound_constants, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_26[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 168_14_literal
  // to_compound
  var_767_4_to_compound, 1, LOCAL(2), 1, LOCAL(1),
  // append &buf literal.to_compound
  var_append, 2, var_166_10_buf, LOCAL(1), 1, var_166_10_buf,
  // next
  var_next, 0, TAIL_CALL,
  POS(169, 33),
  POS(169, 13),
  POS(170, 13),
  LOCAL(2)
};

static FUNCTION_INFO i_lambda_26 = {
  t_lambda_26, NULL, 3, 1,
  {"168_14_literal\000"}
};

static TAB_NUM t_lambda_27[] = {
  0, // locals
  0, // parameters
  //  buf
  LET, 1, var_166_10_buf, TAIL_CALL,
  POS(171, 13)
};

static FUNCTION_INFO i_lambda_27 = {
  t_lambda_27, NULL, 1, 0,
  {}
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

static FUNCTION_INFO i_func_constants_table = {
  t_func_constants_table, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_28[] = {
  1, // locals
  0, // parameters
  // is_empty
  var_is_empty, 1, var_28_33_top_level_statements, 1, LOCAL(1),
  // top_level_statements.is_empty
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(175, 53),
  POS(175, 32)
};

static FUNCTION_INFO i_lambda_28 = {
  t_lambda_28, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_29[] = {
  0, // locals
  0, // parameters
  //  ""
  LET, 1, string_6, TAIL_CALL,
  POS(176, 13)
};

static FUNCTION_INFO i_lambda_29 = {
  t_lambda_29, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_30[] = {
  1, // locals
  0, // parameters
  // $buf "
  LET, 1, str_static_FUNKY_CON, 1, var_178_14_buf,
  // is_empty
  var_is_empty, 1, var_literals, 1, LOCAL(1),
  // !buf
  var_if, 3, LOCAL(1), lambda_31, lambda_32, 1, var_178_14_buf,
  // is_empty
  var_is_empty, 1, var_28_33_top_level_statements, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_35, lambda_36, TAIL_CALL,
  POS(178, 13),
  POS(183, 26),
  POS(181, 13),
  POS(192, 36),
  POS(191, 13)
};

static FUNCTION_INFO i_lambda_30 = {
  t_lambda_30, NULL, 5, 0,
  {}
};

static TAB_NUM t_lambda_31[] = {
  0, // locals
  0, // parameters
  //  buf
  LET, 1, var_178_14_buf, TAIL_CALL,
  POS(184, 19)
};

static FUNCTION_INFO i_lambda_31 = {
  t_lambda_31, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_32[] = {
  0, // locals
  0, // parameters
  // for_each literals
  var_for_each, 3, var_literals, lambda_33, lambda_34, TAIL_CALL,
  POS(186, 19)
};

static FUNCTION_INFO i_lambda_32 = {
  t_lambda_32, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_33[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 187_24_literal
  // to_table_entry
  var_786_4_to_table_entry, 1, LOCAL(2), 1, LOCAL(1),
  // append &buf literal.to_table_entry
  var_append, 2, var_178_14_buf, LOCAL(1), 1, var_178_14_buf,
  // next
  var_next, 0, TAIL_CALL,
  POS(188, 43),
  POS(188, 23),
  POS(189, 23),
  LOCAL(2)
};

static FUNCTION_INFO i_lambda_33 = {
  t_lambda_33, NULL, 3, 1,
  {"187_24_literal\000"}
};

static TAB_NUM t_lambda_34[] = {
  0, // locals
  0, // parameters
  //  buf
  LET, 1, var_178_14_buf, TAIL_CALL,
  POS(190, 23)
};

static FUNCTION_INFO i_lambda_34 = {
  t_lambda_34, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_35[] = {
  2, // locals
  0, // parameters
  // range(buf 1 -3) "@nl;};@nl;")
  var_range, 3, var_178_14_buf, num_1, minus_num_3, 1, LOCAL(1),
  // append(range(buf 1 -3) "@nl;};@nl;")
  var_append, 2, LOCAL(1), string_4, 1, LOCAL(2),
  //  append(range(buf 1 -3) "@nl;};@nl;")
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(193, 25),
  POS(193, 18),
  POS(193, 17)
};

static FUNCTION_INFO i_lambda_35 = {
  t_lambda_35, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_36[] = {
  0, // locals
  0, // parameters
  // append buf "
  var_append, 2, var_178_14_buf, str___FLT_FUNCTION, TAIL_CALL,
  POS(195, 17)
};

static FUNCTION_INFO i_lambda_36 = {
  t_lambda_36, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_variables_enum[] = {
  1, // locals
  0, // parameters
  // map_reduce $buf variables
  var_map_reduce, 4, var_variables, lambda_37, var_append, string_6, 1, var_201_21_buf,
  // is_empty
  var_is_empty, 1, var_201_21_buf, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_40, lambda_41, TAIL_CALL,
  POS(201, 9),
  POS(217, 15),
  POS(216, 9)
};

static FUNCTION_INFO i_func_variables_enum = {
  t_func_variables_enum, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_37[] = {
  2, // locals
  2, // parameters
  var_202_14_name,
  LOCAL(2), // 202_19_info
  // mangle_identifier &name
  var_mangle_identifier, 1, var_202_14_name, 1, var_202_14_name,
  // $kind first(info)
  var_first, 1, LOCAL(2), 1, var_204_14_kind,
  // is_local_or_constant
  func_is_local_or_constant, 1, var_204_14_kind, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_38, lambda_39, TAIL_CALL,
  POS(203, 13),
  POS(204, 13),
  POS(206, 20),
  POS(205, 13),
  LOCAL(2)
};

static FUNCTION_INFO i_lambda_37 = {
  t_lambda_37, NULL, 4, 1,
  {"202_19_info\000"}
};

static TAB_NUM t_lambda_38[] = {
  0, // locals
  0, // parameters
  //  ""
  LET, 1, string_6, TAIL_CALL,
  POS(207, 17)
};

static FUNCTION_INFO i_lambda_38 = {
  t_lambda_38, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_39[] = {
  4, // locals
  0, // parameters
  // to_string .truncate_until. "::").to_lower_case
  var_to_string, 1, var_204_14_kind, 1, LOCAL(1),
  // kind.to_string .truncate_until. "::").to_lower_case
  var_truncate_until, 2, LOCAL(1), string_11, 1, LOCAL(2),
  // to_lower_case
  var_to_lower_case, 1, LOCAL(2), 1, LOCAL(3),
  // $remark
  var_replace_all, 2, LOCAL(3), key_value_pair_212_22, 1, LOCAL(4),
  // "  var_@(name), // @(remark)@nl;"
  var_std__string, 5, str___var, var_202_14_name, string_13, LOCAL(4), string_1, 1, LOCAL(1),
  // -> "  var_@(name), // @(remark)@nl;"
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(211, 27),
  POS(211, 22),
  POS(211, 60),
  POS(209, 17),
  POS(213, 20),
  POS(213, 17),
  LOCAL(4)
};

static FUNCTION_INFO i_lambda_39 = {
  t_lambda_39, NULL, 6, 1,
  {"209_18_remark\000"}
};

static TAB_NUM t_lambda_40[] = {
  0, // locals
  0, // parameters
  //  ""
  LET, 1, string_6, TAIL_CALL,
  POS(218, 13)
};

static FUNCTION_INFO i_lambda_40 = {
  t_lambda_40, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_41[] = {
  1, // locals
  0, // parameters
  // "
  var_std__string, 3, str_enum___var__STAR, var_201_21_buf, str___var__END, 1, LOCAL(1),
  //  "
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(219, 14),
  POS(219, 13)
};

static FUNCTION_INFO i_lambda_41 = {
  t_lambda_41, NULL, 2, 0,
  {}
};

static TAB_NUM t_func_variables_table[] = {
  1, // locals
  0, // parameters
  // map_reduce $buf variables
  var_map_reduce, 4, var_variables, lambda_42, var_append, string_6, 1, var_229_21_buf,
  // is_empty
  var_is_empty, 1, var_229_21_buf, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_50, lambda_51, TAIL_CALL,
  POS(229, 9),
  POS(286, 15),
  POS(285, 9)
};

static FUNCTION_INFO i_func_variables_table = {
  t_func_variables_table, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_42[] = {
  1, // locals
  2, // parameters
  var_230_14_name,
  var_230_19_info,
  // info $kind $value
  var_230_19_info, 0, 2, var_231_19_kind, var_231_25_value,
  // is_local_or_constant:
  func_is_local_or_constant, 1, var_231_19_kind, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_kind_is_local_or_constant, lambda_43, TAIL_CALL,
  POS(231, 13),
  POS(233, 20),
  POS(232, 13)
};

static FUNCTION_INFO i_lambda_42 = {
  t_lambda_42, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_kind_is_local_or_constant[] = {
  0, // locals
  0, // parameters
  // -> ""
  LET, 1, string_6, TAIL_CALL,
  POS(235, 17)
};

static FUNCTION_INFO i_lambda_kind_is_local_or_constant = {
  t_lambda_kind_is_local_or_constant, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_43[] = {
  7, // locals
  0, // parameters
  // retrieve_base_and_method_count $base $method_count name
  func_retrieve_base_and_method_count, 1, var_230_14_name, 2, LOCAL(3), LOCAL(4),
  // $namespace name .before. "::"
  var_before, 2, var_230_14_name, string_11, 1, LOCAL(5),
  // truncate_until &name "::"
  var_truncate_until, 2, var_230_14_name, string_11, 1, var_230_14_name,
  // ATTRIBUTE, ATTRIBUTE_WITH_SETTER -> "POLYMORPHIC"
  var_std__sequence, 2, var_ATTRIBUTE, var_ATTRIBUTE_WITH_SETTER, 1, LOCAL(1),
  // INITIALIZED, INITIALIZED_COMPOUND -> "INITIALIZED"
  var_std__sequence, 2, var_INITIALIZED, var_INITIALIZED_COMPOUND, 1, LOCAL(2),
  // $type
  var_case, 14, var_231_19_kind, var_EXTERN, lambda_EXTERN, var_EXTERN_POLYMORPHIC, lambda_EXTERN_POLYMORPHIC, LOCAL(1), lambda_44, LOCAL(2), lambda_45, var_DYNAMIC, lambda_DYNAMIC, var_DERIVED, lambda_DERIVED, lambda_46, 1, LOCAL(6),
  // INITIALIZED, INITIALIZED_COMPOUND:
  var_std__sequence, 2, var_INITIALIZED, var_INITIALIZED_COMPOUND, 1, LOCAL(1),
  // EXTERN, EXTERN_POLYMORPHIC -> "
  var_std__sequence, 2, var_EXTERN, var_EXTERN_POLYMORPHIC, 1, LOCAL(2),
  // $initialization
  var_case, 12, var_231_19_kind, LOCAL(1), lambda_47, var_DERIVED, lambda_2_DERIVED, var_ATTRIBUTE, lambda_ATTRIBUTE, var_ATTRIBUTE_WITH_SETTER, lambda_ATTRIBUTE_WITH_SETTER, LOCAL(2), lambda_48, lambda_49, 1, LOCAL(7),
  // "
  var_std__string, 12, str_______FOT, LOCAL(6), string_19, LOCAL(4), string_20, var_230_14_name, string_17, LOCAL(5), string_21, LOCAL(3), LOCAL(7), string_22, 1, LOCAL(1),
  // -> "
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(237, 17),
  POS(238, 17),
  POS(239, 17),
  POS(245, 21),
  POS(246, 21),
  POS(240, 17),
  POS(255, 21),
  POS(273, 21),
  POS(252, 17),
  POS(277, 20),
  POS(277, 17),
  LOCAL(3),
  LOCAL(5),
  LOCAL(7),
  LOCAL(6),
  LOCAL(4)
};

static FUNCTION_INFO i_lambda_43 = {
  t_lambda_43, NULL, 11, 5,
  {"237_49_base\000", "238_18_namespace\000", "252_18_initialization\000", "240_18_type\000", "237_55_method_count\000"}
};

static TAB_NUM t_lambda_EXTERN[] = {
  0, // locals
  0, // parameters
  //  "UNKNOWN"
  LET, 1, str_UNKNOWN, TAIL_CALL,
  POS(243, 30)
};

static FUNCTION_INFO i_lambda_EXTERN = {
  t_lambda_EXTERN, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_EXTERN_POLYMORPHIC[] = {
  0, // locals
  0, // parameters
  //  "UNKNOWN_POLYMORPHIC"
  LET, 1, str_UNKNOWN_POLYMORP, TAIL_CALL,
  POS(244, 42)
};

static FUNCTION_INFO i_lambda_EXTERN_POLYMORPHIC = {
  t_lambda_EXTERN_POLYMORPHIC, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_44[] = {
  0, // locals
  0, // parameters
  //  "POLYMORPHIC"
  LET, 1, str_POLYMORPHIC, TAIL_CALL,
  POS(245, 56)
};

static FUNCTION_INFO i_lambda_44 = {
  t_lambda_44, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_45[] = {
  0, // locals
  0, // parameters
  //  "INITIALIZED"
  LET, 1, str_INITIALIZED, TAIL_CALL,
  POS(246, 57)
};

static FUNCTION_INFO i_lambda_45 = {
  t_lambda_45, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_DYNAMIC[] = {
  0, // locals
  0, // parameters
  //  "UNINITIALIZED"
  LET, 1, str_UNINITIALIZED, TAIL_CALL,
  POS(247, 31)
};

static FUNCTION_INFO i_lambda_DYNAMIC = {
  t_lambda_DYNAMIC, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_DERIVED[] = {
  0, // locals
  0, // parameters
  //  "DERIVED"
  LET, 1, str_DERIVED, TAIL_CALL,
  POS(248, 31)
};

static FUNCTION_INFO i_lambda_DERIVED = {
  t_lambda_DERIVED, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_46[] = {
  0, // locals
  0, // parameters
  // debug::dump `kind
  var_debug__dump, 2, str_kind, var_231_19_kind, 0,
  // -> "???"
  LET, 1, string_14, TAIL_CALL,
  POS(250, 23),
  POS(251, 23)
};

static FUNCTION_INFO i_lambda_46 = {
  t_lambda_46, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_47[] = {
  2, // locals
  0, // parameters
  // $idx mangled_literals(value)
  var_mangled_literals, 1, var_231_25_value, 1, LOCAL(2),
  // "
  var_std__string, 3, str_____const_idx, LOCAL(2), string_15, 1, LOCAL(1),
  // -> "
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(256, 23),
  POS(257, 26),
  POS(257, 23),
  LOCAL(2)
};

static FUNCTION_INFO i_lambda_47 = {
  t_lambda_47, NULL, 3, 1,
  {"256_24_idx\000"}
};

static TAB_NUM t_lambda_2_DERIVED[] = {
  4, // locals
  0, // parameters
  // $identifier identifier_of(value)
  var_identifier_of, 1, var_231_25_value, 1, LOCAL(2),
  // $dname identifier .truncate_until. "::"
  var_truncate_until, 2, LOCAL(2), string_11, 1, LOCAL(3),
  // $dnamespace identifier .before. "::"
  var_before, 2, LOCAL(2), string_11, 1, LOCAL(4),
  // "
  var_std__string, 5, string_16, LOCAL(3), string_17, LOCAL(4), string_18, 1, LOCAL(1),
  // -> "
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(261, 23),
  POS(262, 23),
  POS(263, 23),
  POS(264, 26),
  POS(264, 23),
  LOCAL(4),
  LOCAL(2),
  LOCAL(3)
};

static FUNCTION_INFO i_lambda_2_DERIVED = {
  t_lambda_2_DERIVED, NULL, 5, 3,
  {"263_24_dnamespace\000", "261_24_identifier\000", "262_24_dname\000"}
};

static TAB_NUM t_lambda_ATTRIBUTE[] = {
  0, // locals
  0, // parameters
  //  "
  LET, 1, str_____has_a_setter, TAIL_CALL,
  POS(267, 33)
};

static FUNCTION_INFO i_lambda_ATTRIBUTE = {
  t_lambda_ATTRIBUTE, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_ATTRIBUTE_WITH_SETTER[] = {
  0, // locals
  0, // parameters
  //  "
  LET, 1, str_____has_a_setter_2, TAIL_CALL,
  POS(270, 45)
};

static FUNCTION_INFO i_lambda_ATTRIBUTE_WITH_SETTER = {
  t_lambda_ATTRIBUTE_WITH_SETTER, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_48[] = {
  3, // locals
  0, // parameters
  // second(info)))}@
  var_second, 1, var_230_19_info, 1, LOCAL(1),
  // get_source_position(second(info)))}@
  func_get_source_position, 1, LOCAL(1), 1, LOCAL(2),
  // "
  var_std__string, 3, str_____position, LOCAL(2), string_15, 1, LOCAL(3),
  //  "
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(275, 62),
  POS(275, 42),
  POS(273, 51),
  POS(273, 50)
};

static FUNCTION_INFO i_lambda_48 = {
  t_lambda_48, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_49[] = {
  0, // locals
  0, // parameters
  //  ""
  LET, 1, string_6, TAIL_CALL,
  POS(276, 23)
};

static FUNCTION_INFO i_lambda_49 = {
  t_lambda_49, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_50[] = {
  0, // locals
  0, // parameters
  //  ""
  LET, 1, string_6, TAIL_CALL,
  POS(287, 13)
};

static FUNCTION_INFO i_lambda_50 = {
  t_lambda_50, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_51[] = {
  2, // locals
  0, // parameters
  // range(buf 1 -3))
  var_range, 3, var_229_21_buf, num_1, minus_num_3, 1, LOCAL(1),
  // "
  var_std__string, 3, str_static_FUNKY_VAR, LOCAL(1), string_4, 1, LOCAL(2),
  //  "
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(291, 15),
  POS(288, 14),
  POS(288, 13)
};

static FUNCTION_INFO i_lambda_51 = {
  t_lambda_51, NULL, 3, 0,
  {}
};

static TAB_NUM t_func_retrieve_base_and_method_count[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 294_41_identifier
  // $mangled_name mangle_identifier(identifier)
  var_mangle_identifier, 1, LOCAL(2), 1, var_295_10_mangled_name,
  // $type types(mangled_name)
  var_45_8_types, 1, var_295_10_mangled_name, 1, var_296_10_type,
  // is_defined
  var_is_defined, 1, var_296_10_type, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_52, lambda_53, TAIL_CALL,
  POS(295, 9),
  POS(296, 9),
  POS(298, 16),
  POS(297, 9),
  LOCAL(2)
};

static FUNCTION_INFO i_func_retrieve_base_and_method_count = {
  t_func_retrieve_base_and_method_count, NULL, 4, 1,
  {"294_41_identifier\000"}
};

static TAB_NUM t_lambda_52[] = {
  2, // locals
  0, // parameters
  // append(mangled_name "__attributes") length_of(type)
  var_append, 2, var_295_10_mangled_name, str___attributes, 1, LOCAL(1),
  // length_of(type)
  var_length_of, 1, var_296_10_type, 1, LOCAL(2),
  //  append(mangled_name "__attributes") length_of(type)
  LET, 2, LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(299, 14),
  POS(299, 50),
  POS(299, 13)
};

static FUNCTION_INFO i_lambda_52 = {
  t_lambda_52, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_53[] = {
  0, // locals
  0, // parameters
  //  "NULL" "0"
  LET, 2, str_NULL, string_23, TAIL_CALL,
  POS(300, 13)
};

static FUNCTION_INFO i_lambda_53 = {
  t_lambda_53, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_attributes_tables[] = {
  0, // locals
  0, // parameters
  // $buf ""
  LET, 1, string_6, 1, var_303_10_buf,
  // for_each types
  var_for_each, 3, var_45_8_types, lambda_54, lambda_57, TAIL_CALL,
  POS(303, 9),
  POS(304, 9)
};

static FUNCTION_INFO i_func_attributes_tables = {
  t_func_attributes_tables, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_54[] = {
  3, // locals
  2, // parameters
  LOCAL(2), // 305_14_type
  LOCAL(3), // 305_19_methods
  // "
  var_std__string, 3, str_static_ATTRIBUTE, LOCAL(2), str___attributes_2, 1, LOCAL(1),
  // append &buf "
  var_append, 2, var_303_10_buf, LOCAL(1), 1, var_303_10_buf,
  // for_each methods
  var_for_each, 3, LOCAL(3), lambda_55, lambda_56, TAIL_CALL,
  POS(306, 25),
  POS(306, 13),
  POS(309, 13),
  LOCAL(2),
  LOCAL(3)
};

static FUNCTION_INFO i_lambda_54 = {
  t_lambda_54, NULL, 3, 2,
  {"305_14_type\000", "305_19_methods\000"}
};

static TAB_NUM t_lambda_55[] = {
  4, // locals
  1, // parameters
  LOCAL(2), // 310_18_item
  // item $method $value
  LOCAL(2), 0, 2, LOCAL(3), LOCAL(4),
  // "
  var_std__string, 5, string_24, LOCAL(3), string_25, LOCAL(4), string_26, 1, LOCAL(1),
  // append &buf "
  var_append, 2, var_303_10_buf, LOCAL(1), 1, var_303_10_buf,
  // next
  var_next, 0, TAIL_CALL,
  POS(311, 17),
  POS(312, 29),
  POS(312, 17),
  POS(315, 17),
  LOCAL(2),
  LOCAL(3),
  LOCAL(4)
};

static FUNCTION_INFO i_lambda_55 = {
  t_lambda_55, NULL, 4, 3,
  {"310_18_item\000", "311_23_method\000", "311_31_value\000"}
};

static TAB_NUM t_lambda_56[] = {
  1, // locals
  0, // parameters
  // range(buf 1 -3) "@nl;};@nl;"
  var_range, 3, var_303_10_buf, num_1, minus_num_3, 1, LOCAL(1),
  // append !buf range(buf 1 -3) "@nl;};@nl;"
  var_append, 2, LOCAL(1), string_4, 1, var_303_10_buf,
  // next
  var_next, 0, TAIL_CALL,
  POS(317, 29),
  POS(317, 17),
  POS(318, 17)
};

static FUNCTION_INFO i_lambda_56 = {
  t_lambda_56, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_57[] = {
  0, // locals
  0, // parameters
  //  buf
  LET, 1, var_303_10_buf, TAIL_CALL,
  POS(319, 13)
};

static FUNCTION_INFO i_lambda_57 = {
  t_lambda_57, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_required_modules_table[] = {
  1, // locals
  0, // parameters
  // is_empty
  var_is_empty, 1, var_required_modules, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_58, lambda_59, TAIL_CALL,
  POS(323, 28),
  POS(322, 9)
};

static FUNCTION_INFO i_func_required_modules_table = {
  t_func_required_modules_table, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_58[] = {
  0, // locals
  0, // parameters
  //  ""
  LET, 1, string_6, TAIL_CALL,
  POS(324, 13)
};

static FUNCTION_INFO i_lambda_58 = {
  t_lambda_58, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_59[] = {
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
  POS(328, 15),
  POS(336, 17),
  POS(335, 15),
  POS(326, 13)
};

static FUNCTION_INFO i_lambda_59 = {
  t_lambda_59, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_required_modules[] = {
  3, // locals
  1, // parameters
  LOCAL(3), // 329_36_name
  // mangled_name(name));
  func_mangled_name, 1, LOCAL(3), 1, LOCAL(1),
  // "
  var_std__string, 3, str_extern_FUNKY_MOD, LOCAL(1), string_27, 1, LOCAL(2),
  // -> "
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(331, 51),
  POS(330, 22),
  POS(330, 19),
  LOCAL(3)
};

static FUNCTION_INFO i_lambda_required_modules = {
  t_lambda_required_modules, NULL, 3, 1,
  {"329_36_name\000"}
};

static TAB_NUM t_lambda_2_required_modules[] = {
  3, // locals
  1, // parameters
  LOCAL(3), // 337_38_name
  // mangled_name(name)),
  func_mangled_name, 1, LOCAL(3), 1, LOCAL(1),
  // "
  var_std__string, 3, str___module, LOCAL(1), string_10, 1, LOCAL(2),
  // -> "
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(340, 36),
  POS(338, 24),
  POS(338, 21),
  LOCAL(3)
};

static FUNCTION_INFO i_lambda_2_required_modules = {
  t_lambda_2_required_modules, NULL, 3, 1,
  {"337_38_name\000"}
};

static TAB_NUM t_func_mangled_name[] = {
  2, // locals
  1, // parameters
  var_344_25_name,
  // name .has_prefix. "./" &name:
  var_has_prefix, 2, var_344_25_name, string_7, 1, LOCAL(1),
  // update_if name .has_prefix. "./" &name:
  var_update_if, 3, LOCAL(1), var_344_25_name, lambda_60, 1, var_344_25_name,
  // replace_all(name '/' = "__")
  var_replace_all, 2, var_344_25_name, key_value_pair_349_32, 1, LOCAL(2),
  // -> replace_all(name '/' = "__")
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(345, 21),
  POS(345, 11),
  POS(349, 14),
  POS(349, 11)
};

static FUNCTION_INFO i_func_mangled_name = {
  t_func_mangled_name, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_60[] = {
  0, // locals
  0, // parameters
  // without_prefix &name "./"
  var_without_prefix, 2, var_344_25_name, string_7, 1, var_344_25_name,
  // without_prefix &name base_directory
  var_without_prefix, 2, var_344_25_name, var_base_directory, 1, var_344_25_name,
  // -> name
  LET, 1, var_344_25_name, TAIL_CALL,
  POS(346, 13),
  POS(347, 13),
  POS(348, 13)
};

static FUNCTION_INFO i_lambda_60 = {
  t_lambda_60, NULL, 3, 0,
  {}
};

static TAB_NUM t_func_reference_required_modules[] = {
  1, // locals
  0, // parameters
  // is_empty
  var_is_empty, 1, var_required_modules, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_61, lambda_62, TAIL_CALL,
  POS(353, 28),
  POS(352, 9)
};

static FUNCTION_INFO i_func_reference_required_modules = {
  t_func_reference_required_modules, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_61[] = {
  0, // locals
  0, // parameters
  //  "NULL, // required modules"
  LET, 1, str_NULL__required_m, TAIL_CALL,
  POS(354, 13)
};

static FUNCTION_INFO i_lambda_61 = {
  t_lambda_61, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_62[] = {
  0, // locals
  0, // parameters
  //  "required_modules,"
  LET, 1, str_required_modules, TAIL_CALL,
  POS(355, 13)
};

static FUNCTION_INFO i_lambda_62 = {
  t_lambda_62, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_defined_namespaces_table[] = {
  1, // locals
  0, // parameters
  // is_empty
  var_is_empty, 1, var_defined_namespaces, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_63, lambda_64, TAIL_CALL,
  POS(359, 30),
  POS(358, 9)
};

static FUNCTION_INFO i_func_defined_namespaces_table = {
  t_func_defined_namespaces_table, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_63[] = {
  0, // locals
  0, // parameters
  //  ""
  LET, 1, string_6, TAIL_CALL,
  POS(360, 13)
};

static FUNCTION_INFO i_lambda_63 = {
  t_lambda_63, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_64[] = {
  2, // locals
  0, // parameters
  // map_reduce
  var_map_reduce, 2, var_defined_namespaces, lambda_defined_namespaces, 1, LOCAL(1),
  // range
  var_range, 3, LOCAL(1), num_1, minus_num_3, 1, LOCAL(2),
  // append
  var_append, 3, str_static_FUNKY_NAM, LOCAL(2), string_4, TAIL_CALL,
  POS(367, 17),
  POS(366, 15),
  POS(362, 13)
};

static FUNCTION_INFO i_lambda_64 = {
  t_lambda_64, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_defined_namespaces[] = {
  5, // locals
  2, // parameters
  LOCAL(4), // 368_40_name
  LOCAL(5), // 368_45_version
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
  POS(369, 21),
  POS(372, 39),
  POS(372, 58),
  POS(370, 24),
  POS(370, 21),
  LOCAL(4),
  LOCAL(5)
};

static FUNCTION_INFO i_lambda_defined_namespaces = {
  t_lambda_defined_namespaces, NULL, 5, 2,
  {"368_40_name\000", "368_45_version\000"}
};

static TAB_NUM t_func_reference_defined_namespaces[] = {
  1, // locals
  0, // parameters
  // is_empty
  var_is_empty, 1, var_defined_namespaces, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_65, lambda_66, TAIL_CALL,
  POS(378, 30),
  POS(377, 9)
};

static FUNCTION_INFO i_func_reference_defined_namespaces = {
  t_func_reference_defined_namespaces, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_65[] = {
  0, // locals
  0, // parameters
  //  "NULL, // defined namespaces"
  LET, 1, str_NULL__defined_na, TAIL_CALL,
  POS(379, 13)
};

static FUNCTION_INFO i_lambda_65 = {
  t_lambda_65, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_66[] = {
  0, // locals
  0, // parameters
  //  "defined_namespaces,"
  LET, 1, str_defined_namespac, TAIL_CALL,
  POS(380, 13)
};

static FUNCTION_INFO i_lambda_66 = {
  t_lambda_66, NULL, 1, 0,
  {}
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
  POS(388, 13),
  POS(387, 11),
  POS(383, 9)
};

static FUNCTION_INFO i_func_used_namespaces_table = {
  t_func_used_namespaces_table, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_used_namespaces[] = {
  5, // locals
  2, // parameters
  LOCAL(4), // 389_33_name
  LOCAL(5), // 389_38_version
  // first(version)), @(second(version))},
  var_first, 1, LOCAL(5), 1, LOCAL(1),
  // second(version))},
  var_second, 1, LOCAL(5), 1, LOCAL(2),
  // "
  var_std__string, 7, string_29, LOCAL(4), string_21, LOCAL(1), string_30, LOCAL(2), string_26, 1, LOCAL(3),
  // -> "
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(392, 35),
  POS(392, 54),
  POS(390, 20),
  POS(390, 17),
  LOCAL(5),
  LOCAL(4)
};

static FUNCTION_INFO i_lambda_used_namespaces = {
  t_lambda_used_namespaces, NULL, 4, 2,
  {"389_38_version\000", "389_33_name\000"}
};

static TAB_NUM t_func_tabular_functions[] = {
  0, // locals
  0, // parameters
  // map_reduce literals
  var_map_reduce, 4, var_literals, lambda_67, var_append, string_6, TAIL_CALL,
  POS(397, 9)
};

static FUNCTION_INFO i_func_tabular_functions = {
  t_func_tabular_functions, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_67[] = {
  2, // locals
  1, // parameters
  var_398_14_body,
  // node_type_of(body)
  var_node_type_of, 1, var_398_14_body, 1, LOCAL(1),
  // BODY, TYPE_FUNCTION:
  var_std__sequence, 2, var_BODY, var_TYPE_FUNCTION, 1, LOCAL(2),
  // case node_type_of(body)
  var_case, 4, LOCAL(1), LOCAL(2), lambda_68, lambda_74, TAIL_CALL,
  POS(399, 18),
  POS(400, 15),
  POS(399, 13)
};

static FUNCTION_INFO i_lambda_67 = {
  t_lambda_67, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_68[] = {
  3, // locals
  0, // parameters
  // node_type_of(body) == TYPE_FUNCTION
  var_node_type_of, 1, var_398_14_body, 1, LOCAL(1),
  // node_type_of(body) == TYPE_FUNCTION
  var_std__equal, 2, LOCAL(1), var_TYPE_FUNCTION, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_69, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_72, lambda_73, TAIL_CALL,
  POS(403, 21),
  POS(403, 21),
  POS(402, 21),
  POS(401, 17)
};

static FUNCTION_INFO i_lambda_68 = {
  t_lambda_68, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_69[] = {
  3, // locals
  0, // parameters
  // parameters_of(body).is_empty
  var_parameters_of, 1, var_398_14_body, 1, LOCAL(1),
  // is_empty
  var_is_empty, 1, LOCAL(1), 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_70, 1, LOCAL(3),
  // parameters_of(body).is_empty
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(404, 21),
  POS(404, 41),
  POS(402, 21),
  POS(404, 21)
};

static FUNCTION_INFO i_lambda_69 = {
  t_lambda_69, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_70[] = {
  4, // locals
  0, // parameters
  // statements_of(body)) == 1
  var_statements_of, 1, var_398_14_body, 1, LOCAL(1),
  // length_of(statements_of(body)) == 1
  var_length_of, 1, LOCAL(1), 1, LOCAL(2),
  // length_of(statements_of(body)) == 1
  var_std__equal, 2, LOCAL(2), num_1, 1, LOCAL(3),
  // 
  var_std__and, 2, LOCAL(3), lambda_71, 1, LOCAL(4),
  // length_of(statements_of(body)) == 1
  LET, 1, LOCAL(4), TAIL_CALL,
  POS(405, 31),
  POS(405, 21),
  POS(405, 21),
  POS(402, 21),
  POS(405, 21)
};

static FUNCTION_INFO i_lambda_70 = {
  t_lambda_70, NULL, 5, 0,
  {}
};

static TAB_NUM t_lambda_71[] = {
  4, // locals
  0, // parameters
  // statements_of(body)(1)).is_empty
  var_statements_of, 1, var_398_14_body, 1, LOCAL(1),
  // statements_of(body)(1)).is_empty
  LOCAL(1), 1, num_1, 1, LOCAL(2),
  // arguments_of(statements_of(body)(1)).is_empty
  var_arguments_of, 1, LOCAL(2), 1, LOCAL(3),
  // is_empty
  var_is_empty, 1, LOCAL(3), 1, LOCAL(4),
  // arguments_of(statements_of(body)(1)).is_empty
  LET, 1, LOCAL(4), TAIL_CALL,
  POS(406, 34),
  POS(406, 34),
  POS(406, 21),
  POS(406, 58),
  POS(406, 21)
};

static FUNCTION_INFO i_lambda_71 = {
  t_lambda_71, NULL, 5, 0,
  {}
};

static TAB_NUM t_lambda_72[] = {
  0, // locals
  0, // parameters
  //  ""
  LET, 1, string_6, TAIL_CALL,
  POS(407, 21)
};

static FUNCTION_INFO i_lambda_72 = {
  t_lambda_72, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_73[] = {
  3, // locals
  0, // parameters
  // $mangled_name mangled_literals(body)
  var_mangled_literals, 1, var_398_14_body, 1, LOCAL(2),
  // statements_of(body) is_a_valid_statement)
  var_statements_of, 1, var_398_14_body, 1, LOCAL(1),
  // $statements filter(statements_of(body) is_a_valid_statement)
  var_filter, 2, LOCAL(1), func_is_a_valid_statement, 1, LOCAL(3),
  // parameters_of(body) statements
  var_parameters_of, 1, var_398_14_body, 1, LOCAL(1),
  // tabular_function
  func_tabular_function, 3, LOCAL(2), LOCAL(1), LOCAL(3), TAIL_CALL,
  POS(409, 21),
  POS(411, 40),
  POS(411, 21),
  POS(413, 36),
  POS(412, 21),
  LOCAL(3),
  LOCAL(2)
};

static FUNCTION_INFO i_lambda_73 = {
  t_lambda_73, NULL, 5, 2,
  {"411_22_statements\000", "409_22_mangled_name\000"}
};

static TAB_NUM t_lambda_74[] = {
  0, // locals
  0, // parameters
  //  ""
  LET, 1, string_6, TAIL_CALL,
  POS(414, 17)
};

static FUNCTION_INFO i_lambda_74 = {
  t_lambda_74, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_75[] = {
  1, // locals
  0, // parameters
  // tabular_function("module_entry" empty_list top_level_statements)
  func_tabular_function, 3, str_module_entry, var_empty_list, var_28_33_top_level_statements, 1, LOCAL(1),
  //  tabular_function("module_entry" empty_list top_level_statements)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(418, 12),
  POS(418, 11)
};

static FUNCTION_INFO i_lambda_75 = {
  t_lambda_75, NULL, 2, 0,
  {}
};

static TAB_NUM t_func_tabular_function[] = {
  1, // locals
  3, // parameters
  var_420_23_name,
  var_420_28_parameters,
  var_420_39_statements,
  // is_empty
  var_is_empty, 1, var_420_39_statements, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_76, lambda_77, TAIL_CALL,
  POS(422, 18),
  POS(421, 5)
};

static FUNCTION_INFO i_func_tabular_function = {
  t_func_tabular_function, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_76[] = {
  0, // locals
  0, // parameters
  //  ""
  LET, 1, string_6, TAIL_CALL,
  POS(423, 9)
};

static FUNCTION_INFO i_lambda_76 = {
  t_lambda_76, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_77[] = {
  10, // locals
  0, // parameters
  // !temp_count 0
  LET, 1, num_0, 1, var_temp_count,
  // !local_mapping empty_hash_table # maps variable names to local indices
  LET, 1, var_empty_hash_table, 1, var_local_mapping,
  // for_each !local_mapping !temp_count
  var_for_each, 3, var_420_28_parameters, lambda_78, lambda_82, 2, var_local_mapping, var_temp_count,
  // for_each !local_mapping !temp_count
  var_for_each, 3, var_420_39_statements, lambda_83, lambda_95, 2, var_local_mapping, var_temp_count,
  // $n length_of(statements)
  var_length_of, 1, var_420_39_statements, 1, var_473_10_n,
  // $local_count length_of(local_mapping)
  var_length_of, 1, var_local_mapping, 1, LOCAL(8),
  // $local_positions
  var_map_reduce, 4, var_local_mapping, lambda_96, var_append, string_6, 1, LOCAL(9),
  // concatenate(", ")
  var_concatenate, 1, string_30, 1, LOCAL(1),
  // $locals
  var_map_reduce, 4, var_local_mapping, lambda_97, LOCAL(1), string_6, 1, LOCAL(10),
  // length_of(local_mapping)), // locals
  var_length_of, 1, var_local_mapping, 1, LOCAL(1),
  // temp_count+length_of(local_mapping)), // locals
  var_std__plus, 2, var_temp_count, LOCAL(1), 1, LOCAL(2),
  // add_parameters())@
  func_add_parameters, 0, 1, LOCAL(3),
  // map_reduce(statements: (idx statement) compile statement idx == n))@
  var_map_reduce, 2, var_420_39_statements, lambda_map_reducestatements, 1, LOCAL(4),
  // map_reduce(statements add_source_positions) 1 -3))@
  var_map_reduce, 2, var_420_39_statements, var_749_4_add_source_positions, 1, LOCAL(5),
  // range(map_reduce(statements add_source_positions) 1 -3))@
  var_range, 3, LOCAL(5), num_1, minus_num_3, 1, LOCAL(6),
  // "
  var_std__string, 20, str_static_TAB_NUM_t, var_420_23_name, string_34, LOCAL(2), str___locals, LOCAL(3), LOCAL(4), LOCAL(6), LOCAL(9), str_static_FUNCTION, var_420_23_name, str_____t, var_420_23_name, str__NULL, var_473_10_n, string_30, LOCAL(8), string_35, LOCAL(10), string_36, 1, LOCAL(7),
  // -> "
  LET, 1, LOCAL(7), TAIL_CALL,
  POS(425, 9),
  POS(426, 9),
  POS(427, 9),
  POS(442, 9),
  POS(473, 9),
  POS(474, 9),
  POS(475, 9),
  POS(485, 13),
  POS(481, 9),
  POS(490, 26),
  POS(490, 15),
  POS(491, 13),
  POS(492, 13),
  POS(493, 19),
  POS(493, 13),
  POS(487, 12),
  POS(487, 9),
  LOCAL(9),
  LOCAL(10),
  LOCAL(8)
};

static FUNCTION_INFO i_lambda_77 = {
  t_lambda_77, NULL, 17, 3,
  {"475_10_local_positions\000", "481_10_locals\000", "474_10_local_count\000"}
};

static TAB_NUM t_lambda_78[] = {
  2, // locals
  1, // parameters
  var_429_14_parameter,
  // node_type_of(parameter) == REDEFINITION: # dummy parameter
  var_node_type_of, 1, var_429_14_parameter, 1, LOCAL(1),
  // node_type_of(parameter) == REDEFINITION: # dummy parameter
  var_std__equal, 2, LOCAL(1), var_REDEFINITION, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_79, lambda_80, TAIL_CALL,
  POS(431, 15),
  POS(431, 15),
  POS(430, 13)
};

static FUNCTION_INFO i_lambda_78 = {
  t_lambda_78, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_79[] = {
  0, // locals
  0, // parameters
  // !temp_count 1
  LET, 1, num_1, 1, var_temp_count,
  // next
  var_next, 0, TAIL_CALL,
  POS(432, 17),
  POS(433, 17)
};

static FUNCTION_INFO i_lambda_79 = {
  t_lambda_79, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_80[] = {
  3, // locals
  0, // parameters
  // $parameter_name funky::name_of(parameter)
  var_funky__name_of, 1, var_429_14_parameter, 1, var_435_18_parameter_name,
  // variables(parameter_name)) == LOCAL:
  var_variables, 1, var_435_18_parameter_name, 1, LOCAL(1),
  // first(variables(parameter_name)) == LOCAL:
  var_first, 1, LOCAL(1), 1, LOCAL(2),
  // first(variables(parameter_name)) == LOCAL:
  var_std__equal, 2, LOCAL(2), var_LOCAL, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_81, var_next, TAIL_CALL,
  POS(435, 17),
  POS(437, 25),
  POS(437, 19),
  POS(437, 19),
  POS(436, 17)
};

static FUNCTION_INFO i_lambda_80 = {
  t_lambda_80, NULL, 5, 0,
  {}
};

static TAB_NUM t_lambda_81[] = {
  3, // locals
  0, // parameters
  // length_of(local_mapping)+1
  var_length_of, 1, var_local_mapping, 1, LOCAL(1),
  // !local_mapping(parameter_name) length_of(local_mapping)+1
  var_std__plus, 2, LOCAL(1), num_1, 1, LOCAL(3),
  // local_mapping(parameter_name) length_of(local_mapping)+1
  var_local_mapping, 2, var_435_18_parameter_name, LOCAL(3), 1, var_local_mapping,
  // next
  var_next, 0, TAIL_CALL,
  POS(438, 52),
  POS(438, 21),
  POS(438, 22),
  POS(439, 21)
};

static FUNCTION_INFO i_lambda_81 = {
  t_lambda_81, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_82[] = {
  0, // locals
  0, // parameters
  //  local_mapping temp_count
  LET, 2, var_local_mapping, var_temp_count, TAIL_CALL,
  POS(441, 13)
};

static FUNCTION_INFO i_lambda_82 = {
  t_lambda_82, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_83[] = {
  2, // locals
  1, // parameters
  var_444_14_statement,
  // node_type_of(statement) == STATEMENT:
  var_node_type_of, 1, var_444_14_statement, 1, LOCAL(1),
  // node_type_of(statement) == STATEMENT:
  var_std__equal, 2, LOCAL(1), var_STATEMENT, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_84, var_next, TAIL_CALL,
  POS(446, 15),
  POS(446, 15),
  POS(445, 13)
};

static FUNCTION_INFO i_lambda_83 = {
  t_lambda_83, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_84[] = {
  1, // locals
  0, // parameters
  // head_of(statement)
  var_head_of, 1, var_444_14_statement, 1, LOCAL(1),
  // check_for_locals !local_mapping !temp_count head_of(statement)
  func_check_for_locals, 1, LOCAL(1), 2, var_local_mapping, var_temp_count,
  // arguments_of(statement)
  var_arguments_of, 1, var_444_14_statement, 1, LOCAL(1),
  // for_each arguments_of(statement)
  var_for_each, 3, LOCAL(1), lambda_85, var_next, TAIL_CALL,
  POS(447, 61),
  POS(447, 17),
  POS(448, 26),
  POS(448, 17)
};

static FUNCTION_INFO i_lambda_84 = {
  t_lambda_84, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_85[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 449_22_argument
  // check_for_locals !local_mapping !temp_count argument
  func_check_for_locals, 1, LOCAL(1), 2, var_local_mapping, var_temp_count,
  // next
  var_next, 0, TAIL_CALL,
  POS(450, 21),
  POS(451, 21),
  LOCAL(1)
};

static FUNCTION_INFO i_lambda_85 = {
  t_lambda_85, NULL, 2, 1,
  {"449_22_argument\000"}
};

static TAB_NUM t_func_check_for_locals[] = {
  0, // locals
  1, // parameters
  var_454_37_node,
  // cond
  var_cond, 3, lambda_86, lambda_89, lambda_93, TAIL_CALL,
  POS(455, 19)
};

static FUNCTION_INFO i_func_check_for_locals = {
  t_func_check_for_locals, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_86[] = {
  3, // locals
  0, // parameters
  // node_type_of(node) == REDEFINITION
  var_node_type_of, 1, var_454_37_node, 1, LOCAL(1),
  // node_type_of(node) == REDEFINITION
  var_std__equal, 2, LOCAL(1), var_REDEFINITION, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_87, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_88, TAIL_CALL,
  POS(458, 25),
  POS(458, 25),
  POS(457, 25),
  POS(456, 23)
};

static FUNCTION_INFO i_lambda_86 = {
  t_lambda_86, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_87[] = {
  2, // locals
  0, // parameters
  // kind_of(node) == TEMPORARY
  var_kind_of, 1, var_454_37_node, 1, LOCAL(1),
  // kind_of(node) == TEMPORARY
  var_std__equal, 2, LOCAL(1), var_TEMPORARY, 1, LOCAL(2),
  // kind_of(node) == TEMPORARY
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(459, 25),
  POS(459, 25),
  POS(459, 25)
};

static FUNCTION_INFO i_lambda_87 = {
  t_lambda_87, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_88[] = {
  2, // locals
  0, // parameters
  // no_of(node))
  var_no_of, 1, var_454_37_node, 1, LOCAL(1),
  // max(temp_count no_of(node))
  var_max, 2, var_temp_count, LOCAL(1), 1, LOCAL(2),
  //  local_mapping max(temp_count no_of(node))
  LET, 2, var_local_mapping, LOCAL(2), TAIL_CALL,
  POS(460, 55),
  POS(460, 40),
  POS(460, 25)
};

static FUNCTION_INFO i_lambda_88 = {
  t_lambda_88, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_89[] = {
  2, // locals
  0, // parameters
  // node_type_of(node) == DEFINITION:
  var_node_type_of, 1, var_454_37_node, 1, LOCAL(1),
  // node_type_of(node) == DEFINITION:
  var_std__equal, 2, LOCAL(1), var_DEFINITION, 1, LOCAL(2),
  //  node_type_of(node) == DEFINITION:
  LET, 2, LOCAL(2), lambda_90, TAIL_CALL,
  POS(461, 24),
  POS(461, 24),
  POS(461, 23)
};

static FUNCTION_INFO i_lambda_89 = {
  t_lambda_89, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_90[] = {
  4, // locals
  0, // parameters
  // $identifier identifier_of(node)
  var_identifier_of, 1, var_454_37_node, 1, var_462_24_identifier,
  // variables(identifier)) == LOCAL
  var_variables, 1, var_462_24_identifier, 1, LOCAL(1),
  // first(variables(identifier)) == LOCAL
  var_first, 1, LOCAL(1), 1, LOCAL(2),
  // first(variables(identifier)) == LOCAL
  var_std__equal, 2, LOCAL(2), var_LOCAL, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_91, lambda_92, 1, LOCAL(4),
  // ->
  LET, 2, LOCAL(4), var_temp_count, TAIL_CALL,
  POS(462, 23),
  POS(465, 33),
  POS(465, 27),
  POS(465, 27),
  POS(464, 25),
  POS(463, 23)
};

static FUNCTION_INFO i_lambda_90 = {
  t_lambda_90, NULL, 6, 0,
  {}
};

static TAB_NUM t_lambda_91[] = {
  3, // locals
  0, // parameters
  // length_of(local_mapping)+1)
  var_length_of, 1, var_local_mapping, 1, LOCAL(1),
  // length_of(local_mapping)+1)
  var_std__plus, 2, LOCAL(1), num_1, 1, LOCAL(2),
  // local_mapping(identifier length_of(local_mapping)+1)
  var_local_mapping, 2, var_462_24_identifier, LOCAL(2), 1, LOCAL(3),
  //  local_mapping(identifier length_of(local_mapping)+1)
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(466, 55),
  POS(466, 55),
  POS(466, 30),
  POS(466, 29)
};

static FUNCTION_INFO i_lambda_91 = {
  t_lambda_91, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_92[] = {
  0, // locals
  0, // parameters
  //  local_mapping
  LET, 1, var_local_mapping, TAIL_CALL,
  POS(467, 29)
};

static FUNCTION_INFO i_lambda_92 = {
  t_lambda_92, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_93[] = {
  0, // locals
  0, // parameters
  //  true
  LET, 2, var_true, lambda_94, TAIL_CALL,
  POS(469, 23)
};

static FUNCTION_INFO i_lambda_93 = {
  t_lambda_93, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_94[] = {
  0, // locals
  0, // parameters
  //  local_mapping temp_count
  LET, 2, var_local_mapping, var_temp_count, TAIL_CALL,
  POS(470, 25)
};

static FUNCTION_INFO i_lambda_94 = {
  t_lambda_94, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_95[] = {
  0, // locals
  0, // parameters
  //  local_mapping temp_count
  LET, 2, var_local_mapping, var_temp_count, TAIL_CALL,
  POS(472, 13)
};

static FUNCTION_INFO i_lambda_95 = {
  t_lambda_95, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_96[] = {
  3, // locals
  2, // parameters
  LOCAL(1),
  LOCAL(3), // 478_28_idx
  // temp_count+idx))"
  var_std__plus, 2, var_temp_count, LOCAL(3), 1, LOCAL(1),
  // ",@nl;  LOCAL(@(temp_count+idx))"
  var_std__string, 3, str___LOCAL, LOCAL(1), string_31, 1, LOCAL(2),
  // -> ",@nl;  LOCAL(@(temp_count+idx))"
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(478, 52),
  POS(478, 36),
  POS(478, 33),
  LOCAL(3)
};

static FUNCTION_INFO i_lambda_96 = {
  t_lambda_96, NULL, 3, 1,
  {"478_28_idx\000"}
};

static TAB_NUM t_lambda_97[] = {
  2, // locals
  2, // parameters
  LOCAL(2), // 484_16_identifier
  LOCAL(1),
  // "@quot;@(identifier)\000@quot;"
  var_std__string, 3, string_32, LOCAL(2), string_33, 1, LOCAL(1),
  // -> "@quot;@(identifier)\000@quot;"
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(484, 36),
  POS(484, 33),
  LOCAL(2)
};

static FUNCTION_INFO i_lambda_97 = {
  t_lambda_97, NULL, 2, 1,
  {"484_16_identifier\000"}
};

static TAB_NUM t_lambda_map_reducestatements[] = {
  3, // locals
  2, // parameters
  LOCAL(2), // 492_37_idx
  LOCAL(3), // 492_41_statement
  // idx == n))@
  var_std__equal, 2, LOCAL(2), var_473_10_n, 1, LOCAL(1),
  // compile statement idx == n))@
  func_compile, 2, LOCAL(3), LOCAL(1), TAIL_CALL,
  POS(492, 70),
  POS(492, 52),
  LOCAL(2),
  LOCAL(3)
};

static FUNCTION_INFO i_lambda_map_reducestatements = {
  t_lambda_map_reducestatements, NULL, 2, 2,
  {"492_37_idx\000", "492_41_statement\000"}
};

static TAB_NUM t_func_add_parameters[] = {
  1, // locals
  0, // parameters
  // $parameter_count length_of(parameters)
  var_length_of, 1, var_420_28_parameters, 1, var_503_12_parameter_count,
  // any_of(parameters: (parameter) -> option_of(parameter).is_defined):
  var_any_of, 2, var_420_28_parameters, lambda_any_ofparameters, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_98, lambda_99, TAIL_CALL,
  POS(503, 11),
  POS(505, 13),
  POS(504, 11)
};

static FUNCTION_INFO i_func_add_parameters = {
  t_func_add_parameters, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_any_ofparameters[] = {
  3, // locals
  1, // parameters
  LOCAL(3), // 505_33_parameter
  // option_of(parameter).is_defined):
  var_option_of, 1, LOCAL(3), 1, LOCAL(1),
  // is_defined):
  var_is_defined, 1, LOCAL(1), 1, LOCAL(2),
  // -> option_of(parameter).is_defined):
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(505, 47),
  POS(505, 68),
  POS(505, 44),
  LOCAL(3)
};

static FUNCTION_INFO i_lambda_any_ofparameters = {
  t_lambda_any_ofparameters, NULL, 3, 1,
  {"505_33_parameter\000"}
};

static TAB_NUM t_lambda_98[] = {
  2, // locals
  0, // parameters
  // "
  var_std__string, 3, string_37, var_503_12_parameter_count, str___parameters, 1, LOCAL(1),
  // map_reduce(parameters add_parameter_with_option append "")
  var_map_reduce, 4, var_420_28_parameters, func_add_parameter_with_option, var_append, string_6, 1, LOCAL(2),
  // append
  var_append, 2, LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(507, 17),
  POS(510, 17),
  POS(506, 15)
};

static FUNCTION_INFO i_lambda_98 = {
  t_lambda_98, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_99[] = {
  2, // locals
  0, // parameters
  // "
  var_std__string, 3, string_8, var_503_12_parameter_count, str___parameters, 1, LOCAL(1),
  // map_reduce(parameters add_parameter append "")
  var_map_reduce, 4, var_420_28_parameters, func_add_parameter, var_append, string_6, 1, LOCAL(2),
  // append
  var_append, 2, LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(513, 17),
  POS(516, 17),
  POS(512, 15)
};

static FUNCTION_INFO i_lambda_99 = {
  t_lambda_99, NULL, 3, 0,
  {}
};

static TAB_NUM t_func_add_parameter[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 518_26_parameter
  // parameter_to_index(parameter)
  func_parameter_to_index, 1, LOCAL(2), 1, LOCAL(1),
  // append "  " parameter_to_index(parameter)
  var_append, 2, string_8, LOCAL(1), TAIL_CALL,
  POS(519, 23),
  POS(519, 11),
  LOCAL(2)
};

static FUNCTION_INFO i_func_add_parameter = {
  t_func_add_parameter, NULL, 2, 1,
  {"518_26_parameter\000"}
};

static TAB_NUM t_func_add_parameter_with_option[] = {
  4, // locals
  1, // parameters
  LOCAL(4), // 521_38_parameter
  // option_of(parameter).to_option
  var_option_of, 1, LOCAL(4), 1, LOCAL(1),
  // to_option
  var_742_4_to_option, 1, LOCAL(1), 1, LOCAL(2),
  // parameter_to_index(parameter)
  func_parameter_to_index, 1, LOCAL(4), 1, LOCAL(3),
  // append
  var_append, 4, string_8, LOCAL(2), string_30, LOCAL(3), TAIL_CALL,
  POS(524, 13),
  POS(524, 34),
  POS(526, 13),
  POS(522, 11),
  LOCAL(4)
};

static FUNCTION_INFO i_func_add_parameter_with_option = {
  t_func_add_parameter_with_option, NULL, 4, 1,
  {"521_38_parameter\000"}
};

static TAB_NUM t_func_parameter_to_index[] = {
  2, // locals
  1, // parameters
  var_528_31_parameter,
  // node_type_of(parameter) == REDEFINITION
  var_node_type_of, 1, var_528_31_parameter, 1, LOCAL(1),
  // node_type_of(parameter) == REDEFINITION
  var_std__equal, 2, LOCAL(1), var_REDEFINITION, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_100, lambda_101, TAIL_CALL,
  POS(530, 13),
  POS(530, 13),
  POS(529, 11)
};

static FUNCTION_INFO i_func_parameter_to_index = {
  t_func_parameter_to_index, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_100[] = {
  2, // locals
  0, // parameters
  // no_of(parameter))),@nl;"
  var_no_of, 1, var_528_31_parameter, 1, LOCAL(1),
  // "LOCAL(@(no_of(parameter))),@nl;"
  var_std__string, 3, str_LOCAL, LOCAL(1), string_38, 1, LOCAL(2),
  //  "LOCAL(@(no_of(parameter))),@nl;"
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(531, 25),
  POS(531, 16),
  POS(531, 15)
};

static FUNCTION_INFO i_lambda_100 = {
  t_lambda_100, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_101[] = {
  1, // locals
  0, // parameters
  // $parameter_name funky::name_of(parameter)
  var_funky__name_of, 1, var_528_31_parameter, 1, var_533_16_parameter_name,
  // $idx local_mapping(parameter_name)
  var_local_mapping, 1, var_533_16_parameter_name, 1, var_534_16_idx,
  // is_defined
  var_is_defined, 1, var_534_16_idx, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_102, lambda_103, TAIL_CALL,
  POS(533, 15),
  POS(534, 15),
  POS(536, 21),
  POS(535, 15)
};

static FUNCTION_INFO i_lambda_101 = {
  t_lambda_101, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_102[] = {
  2, // locals
  0, // parameters
  // temp_count+idx)), // @(parameter_name)@nl;"
  var_std__plus, 2, var_temp_count, var_534_16_idx, 1, LOCAL(1),
  // "LOCAL(@(temp_count+idx)), // @(parameter_name)@nl;"
  var_std__string, 5, str_LOCAL, LOCAL(1), string_39, var_533_16_parameter_name, string_1, 1, LOCAL(2),
  //  "LOCAL(@(temp_count+idx)), // @(parameter_name)@nl;"
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(537, 29),
  POS(537, 20),
  POS(537, 19)
};

static FUNCTION_INFO i_lambda_102 = {
  t_lambda_102, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_103[] = {
  1, // locals
  0, // parameters
  // "var_@(parameter_name),@nl;"
  var_std__string, 3, str_var, var_533_16_parameter_name, string_10, 1, LOCAL(1),
  //  "var_@(parameter_name),@nl;"
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(538, 20),
  POS(538, 19)
};

static FUNCTION_INFO i_lambda_103 = {
  t_lambda_103, NULL, 2, 0,
  {}
};

static TAB_NUM t_func_compile[] = {
  7, // locals
  2, // parameters
  var_540_16_self,
  var_540_21_is_last,
  // $head head_of(self)
  var_head_of, 1, var_540_16_self, 1, var_541_8_head,
  // $arguments arguments_of(self)
  var_arguments_of, 1, var_540_16_self, 1, LOCAL(6),
  // $input_arguments filter(arguments is_an_input)
  var_filter, 2, LOCAL(6), var_is_an_input, 1, LOCAL(7),
  // $output_arguments filter(arguments is_an_output)
  var_filter, 2, LOCAL(6), var_is_an_output, 1, var_544_8_output_arguments,
  // $invalid_last_statement
  var_std__and, 2, var_540_21_is_last, lambda_104, 1, var_545_8_invalid_last_statement,
  // 
  var_std__and, 2, var_545_8_invalid_last_statement, lambda_105, 1, LOCAL(1),
  // on
  var_on, 2, LOCAL(1), lambda_107, 0,
  // $input_count length_of(input_arguments)
  var_length_of, 1, LOCAL(7), 1, var_553_8_input_count,
  // $output_count length_of(output_arguments)
  var_length_of, 1, var_544_8_output_arguments, 1, var_554_8_output_count,
  // $is_a_tail_call (is_last && output_arguments.is_empty)
  var_std__and, 2, var_540_21_is_last, lambda_108, 1, var_555_8_is_a_tail_call,
  // is_an_io_call:
  var_is_an_io_call, 1, var_540_16_self, 1, LOCAL(1),
  // !output_count
  var_if, 3, LOCAL(1), lambda_self_is_an_io_call, lambda_111, 1, var_554_8_output_count,
  // $inputs map_reduce(input_arguments to_separated_index append "")
  var_map_reduce, 4, LOCAL(7), var_609_8_to_separated_index, var_append, string_6, 1, var_568_8_inputs,
  // $outputs map_reduce(output_arguments to_separated_index append "")
  var_map_reduce, 4, var_544_8_output_arguments, var_609_8_to_separated_index, var_append, string_6, 1, var_569_8_outputs,
  // source_position_of(self))@
  var_source_position_of, 1, var_540_16_self, 1, LOCAL(1),
  // "
  var_std__string, 2, string_40, LOCAL(1), 1, LOCAL(2),
  // node_type_of(head) == FUNCTOR:
  var_node_type_of, 1, var_541_8_head, 1, LOCAL(3),
  // node_type_of(head) == FUNCTOR:
  var_std__equal, 2, LOCAL(3), var_FUNCTOR, 1, LOCAL(4),
  // if
  var_if, 3, LOCAL(4), lambda_114, lambda_124, 1, LOCAL(5),
  // append
  var_append, 2, LOCAL(2), LOCAL(5), TAIL_CALL,
  POS(541, 7),
  POS(542, 7),
  POS(543, 7),
  POS(544, 7),
  POS(545, 7),
  POS(548, 11),
  POS(547, 7),
  POS(553, 7),
  POS(554, 7),
  POS(555, 7),
  POS(558, 16),
  POS(556, 7),
  POS(568, 7),
  POS(569, 7),
  POS(573, 18),
  POS(571, 9),
  POS(575, 11),
  POS(575, 11),
  POS(574, 9),
  POS(570, 7),
  LOCAL(7),
  LOCAL(6)
};

static FUNCTION_INFO i_func_compile = {
  t_func_compile, NULL, 20, 2,
  {"543_8_input_arguments\000", "542_8_arguments\000"}
};

static TAB_NUM t_lambda_104[] = {
  2, // locals
  0, // parameters
  // all_of(output_arguments is_a_dummy_definition))
  var_all_of, 2, var_544_8_output_arguments, var_is_a_dummy_definition, 1, LOCAL(1),
  // not(all_of(output_arguments is_a_dummy_definition))
  var_not, 1, LOCAL(1), 1, LOCAL(2),
  // not(all_of(output_arguments is_a_dummy_definition))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(546, 24),
  POS(546, 20),
  POS(546, 20)
};

static FUNCTION_INFO i_lambda_104 = {
  t_lambda_104, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_105[] = {
  1, // locals
  0, // parameters
  // is_a_main_module || name != "module_entry"
  var_std__or, 2, var_28_54_is_a_main_module, lambda_106, 1, LOCAL(1),
  // is_a_main_module || name != "module_entry"
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(550, 11),
  POS(550, 11)
};

static FUNCTION_INFO i_lambda_105 = {
  t_lambda_105, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_106[] = {
  2, // locals
  0, // parameters
  // name != "module_entry"
  var_std__equal, 2, var_420_23_name, str_module_entry, 1, LOCAL(1),
  // name != "module_entry"
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // name != "module_entry"
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(550, 31),
  POS(550, 31),
  POS(550, 31)
};

static FUNCTION_INFO i_lambda_106 = {
  t_lambda_106, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_107[] = {
  0, // locals
  0, // parameters
  // syntax_error "Last statement is not a tail call" self
  var_syntax_error, 2, str_Last_statement_i, var_540_16_self, TAIL_CALL,
  POS(552, 11)
};

static FUNCTION_INFO i_lambda_107 = {
  t_lambda_107, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_108[] = {
  1, // locals
  0, // parameters
  // is_empty)
  var_is_empty, 1, var_544_8_output_arguments, 1, LOCAL(1),
  // output_arguments.is_empty)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(555, 52),
  POS(555, 35)
};

static FUNCTION_INFO i_lambda_108 = {
  t_lambda_108, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_self_is_an_io_call[] = {
  0, // locals
  0, // parameters
  // if
  var_if, 3, var_555_8_is_a_tail_call, lambda_109, lambda_110, TAIL_CALL,
  POS(559, 13)
};

static FUNCTION_INFO i_lambda_self_is_an_io_call = {
  t_lambda_self_is_an_io_call, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_109[] = {
  0, // locals
  0, // parameters
  //  "IO_TAIL_CALL"
  LET, 1, str_IO_TAIL_CALL, TAIL_CALL,
  POS(561, 17)
};

static FUNCTION_INFO i_lambda_109 = {
  t_lambda_109, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_110[] = {
  1, // locals
  0, // parameters
  // "IO_CALL(@(output_count))"
  var_std__string, 3, str_IO_CALL, var_554_8_output_count, string_31, 1, LOCAL(1),
  //  "IO_CALL(@(output_count))"
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(562, 18),
  POS(562, 17)
};

static FUNCTION_INFO i_lambda_110 = {
  t_lambda_110, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_111[] = {
  0, // locals
  0, // parameters
  // if
  var_if, 3, var_555_8_is_a_tail_call, lambda_112, lambda_113, TAIL_CALL,
  POS(564, 13)
};

static FUNCTION_INFO i_lambda_111 = {
  t_lambda_111, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_112[] = {
  0, // locals
  0, // parameters
  //  "TAIL_CALL"
  LET, 1, str_TAIL_CALL, TAIL_CALL,
  POS(566, 17)
};

static FUNCTION_INFO i_lambda_112 = {
  t_lambda_112, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_113[] = {
  0, // locals
  0, // parameters
  //  output_count
  LET, 1, var_554_8_output_count, TAIL_CALL,
  POS(567, 17)
};

static FUNCTION_INFO i_lambda_113 = {
  t_lambda_113, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_114[] = {
  1, // locals
  0, // parameters
  // identifier_of(head)
  var_identifier_of, 1, var_541_8_head, 1, LOCAL(1),
  // case identifier_of(head)
  var_case, 6, LOCAL(1), sequence_577_16, lambda_115, str__assign_attribut, lambda_assign_attributes, lambda_118, TAIL_CALL,
  POS(576, 18),
  POS(576, 13)
};

static FUNCTION_INFO i_lambda_114 = {
  t_lambda_114, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_115[] = {
  2, // locals
  0, // parameters
  // output_count == 0 && not(is_last):
  var_std__equal, 2, var_554_8_output_count, num_0, 1, LOCAL(1),
  // output_count == 0 && not(is_last):
  var_std__and, 2, LOCAL(1), lambda_116, 1, LOCAL(2),
  // on output_count == 0 && not(is_last):
  var_on, 2, LOCAL(2), lambda_117, 0,
  // "
  var_std__string, 7, str___LET, var_553_8_input_count, var_568_8_inputs, string_30, var_554_8_output_count, var_569_8_outputs, string_10, 1, LOCAL(1),
  // -> "
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(578, 20),
  POS(578, 20),
  POS(578, 17),
  POS(581, 20),
  POS(581, 17)
};

static FUNCTION_INFO i_lambda_115 = {
  t_lambda_115, NULL, 5, 0,
  {}
};

static TAB_NUM t_lambda_116[] = {
  1, // locals
  0, // parameters
  // not(is_last):
  var_not, 1, var_540_21_is_last, 1, LOCAL(1),
  // not(is_last):
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(578, 41),
  POS(578, 41)
};

static FUNCTION_INFO i_lambda_116 = {
  t_lambda_116, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_117[] = {
  0, // locals
  0, // parameters
  // syntax_error "Return statement not allowed within function body"
  var_syntax_error, 2, str_Return_statement, var_540_16_self, TAIL_CALL,
  POS(579, 19)
};

static FUNCTION_INFO i_lambda_117 = {
  t_lambda_117, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_assign_attributes[] = {
  2, // locals
  0, // parameters
  // input_count-1)@(inputs)@(outputs),
  var_std__minus, 2, var_553_8_input_count, num_1, 1, LOCAL(1),
  // "
  var_std__string, 5, str___LET_2, LOCAL(1), var_568_8_inputs, var_569_8_outputs, string_10, 1, LOCAL(2),
  //  "
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(588, 22),
  POS(585, 39),
  POS(585, 38)
};

static FUNCTION_INFO i_lambda_assign_attributes = {
  t_lambda_assign_attributes, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_118[] = {
  1, // locals
  0, // parameters
  // to_index), @
  var_to_index, 1, var_541_8_head, 1, LOCAL(1),
  // $statement "
  var_std__string, 9, string_8, LOCAL(1), string_30, var_553_8_input_count, var_568_8_inputs, string_30, var_554_8_output_count, var_569_8_outputs, string_10, 1, var_590_18_statement,
  // is_last && not(is_a_tail_call):
  var_std__and, 2, var_540_21_is_last, lambda_119, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_120, lambda_123, TAIL_CALL,
  POS(592, 28),
  POS(590, 17),
  POS(595, 19),
  POS(594, 17)
};

static FUNCTION_INFO i_lambda_118 = {
  t_lambda_118, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_119[] = {
  1, // locals
  0, // parameters
  // not(is_a_tail_call):
  var_not, 1, var_555_8_is_a_tail_call, 1, LOCAL(1),
  // not(is_a_tail_call):
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(595, 30),
  POS(595, 30)
};

static FUNCTION_INFO i_lambda_119 = {
  t_lambda_119, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_120[] = {
  0, // locals
  0, // parameters
  // if
  var_if, 3, var_545_8_invalid_last_statement, lambda_121, lambda_122, TAIL_CALL,
  POS(596, 21)
};

static FUNCTION_INFO i_lambda_120 = {
  t_lambda_120, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_121[] = {
  1, // locals
  0, // parameters
  // "
  var_std__string, 2, var_590_18_statement, str___LET_1_0_TAIL_C, 1, LOCAL(1),
  //  "
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(598, 26),
  POS(598, 25)
};

static FUNCTION_INFO i_lambda_121 = {
  t_lambda_121, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_122[] = {
  1, // locals
  0, // parameters
  // "
  var_std__string, 2, var_590_18_statement, str___LET_0_TAIL_CAL, 1, LOCAL(1),
  //  "
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(601, 26),
  POS(601, 25)
};

static FUNCTION_INFO i_lambda_122 = {
  t_lambda_122, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_123[] = {
  0, // locals
  0, // parameters
  //  statement
  LET, 1, var_590_18_statement, TAIL_CALL,
  POS(604, 21)
};

static FUNCTION_INFO i_lambda_123 = {
  t_lambda_123, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_124[] = {
  2, // locals
  0, // parameters
  // to_index),
  var_to_index, 1, var_541_8_head, 1, LOCAL(1),
  // "
  var_std__string, 5, str___LET_3, var_568_8_inputs, string_41, LOCAL(1), string_10, 1, LOCAL(2),
  //  "
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(607, 42),
  POS(605, 14),
  POS(605, 13)
};

static FUNCTION_INFO i_lambda_124 = {
  t_lambda_124, NULL, 3, 0,
  {}
};

static TAB_NUM t_func_funky_types__node___to_separated_index[] = {
  3, // locals
  1, // parameters
  LOCAL(3), // 611_47_self
  // to_index)
  var_to_index, 1, LOCAL(3), 1, LOCAL(1),
  // append(", " self.to_index)
  var_append, 2, string_30, LOCAL(1), 1, LOCAL(2),
  // -> append(", " self.to_index)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(611, 73),
  POS(611, 56),
  POS(611, 53),
  LOCAL(3)
};

static FUNCTION_INFO i_func_funky_types__node___to_separated_index = {
  t_func_funky_types__node___to_separated_index, NULL, 3, 1,
  {"611_47_self\000"}
};

static TAB_NUM t_func_funky_types__inline_attribute_value_pair___to_separated_index[] = {
  5, // locals
  1, // parameters
  LOCAL(5), // 613_70_self
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
  POS(614, 17),
  POS(614, 41),
  POS(614, 61),
  POS(614, 12),
  POS(614, 9),
  LOCAL(5)
};

static FUNCTION_INFO i_func_funky_types__inline_attribute_value_pair___to_separated_index = {
  t_func_funky_types__inline_attribute_value_pair___to_separated_index, NULL, 5, 1,
  {"613_70_self\000"}
};

static TAB_NUM t_func_funky_types__inline_method_value_pair___to_separated_index[] = {
  5, // locals
  1, // parameters
  LOCAL(5), // 616_67_self
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
  POS(617, 18),
  POS(617, 42),
  POS(617, 62),
  POS(617, 12),
  POS(617, 9),
  LOCAL(5)
};

static FUNCTION_INFO i_func_funky_types__inline_method_value_pair___to_separated_index = {
  t_func_funky_types__inline_method_value_pair___to_separated_index, NULL, 5, 1,
  {"616_67_self\000"}
};

static TAB_NUM t_func_funky_types__attribute_value_pair___to_separated_index[] = {
  5, // locals
  1, // parameters
  LOCAL(5), // 619_63_self
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
  POS(620, 17),
  POS(620, 41),
  POS(620, 59),
  POS(620, 12),
  POS(620, 9),
  LOCAL(5)
};

static FUNCTION_INFO i_func_funky_types__attribute_value_pair___to_separated_index = {
  t_func_funky_types__attribute_value_pair___to_separated_index, NULL, 5, 1,
  {"619_63_self\000"}
};

static TAB_NUM t_func_funky_types__method_value_pair___to_separated_index[] = {
  5, // locals
  1, // parameters
  LOCAL(5), // 622_60_self
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
  POS(623, 18),
  POS(623, 42),
  POS(623, 60),
  POS(623, 12),
  POS(623, 9),
  LOCAL(5)
};

static FUNCTION_INFO i_func_funky_types__method_value_pair___to_separated_index = {
  t_func_funky_types__method_value_pair___to_separated_index, NULL, 5, 1,
  {"622_60_self\000"}
};

static TAB_NUM t_func_funky_types__type_function___to_separated_index[] = {
  3, // locals
  1, // parameters
  LOCAL(3), // 625_56_self
  // mangled_literals(self))"
  var_mangled_literals, 1, LOCAL(3), 1, LOCAL(1),
  // ", 0, @(mangled_literals(self))"
  var_std__string, 2, string_19, LOCAL(1), 1, LOCAL(2),
  // -> ", 0, @(mangled_literals(self))"
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(626, 20),
  POS(626, 12),
  POS(626, 9),
  LOCAL(3)
};

static FUNCTION_INFO i_func_funky_types__type_function___to_separated_index = {
  t_func_funky_types__type_function___to_separated_index, NULL, 3, 1,
  {"625_56_self\000"}
};

static TAB_NUM t_func_funky_types__numeric_literal___add_literal[] = {
  3, // locals
  1, // parameters
  LOCAL(3), // 630_47_self
  // !mangled_literals(self) funky::key_of(self)
  var_funky__key_of, 1, LOCAL(3), 1, LOCAL(2),
  // mangled_literals(self) funky::key_of(self)
  var_mangled_literals, 2, LOCAL(3), LOCAL(2), 1, var_mangled_literals,
  // -> mangled_literals mangling_counter
  LET, 2, var_mangled_literals, var_mangling_counter, TAIL_CALL,
  POS(631, 5),
  POS(631, 6),
  POS(632, 5),
  LOCAL(3)
};

static FUNCTION_INFO i_func_funky_types__numeric_literal___add_literal = {
  t_func_funky_types__numeric_literal___add_literal, NULL, 3, 1,
  {"630_47_self\000"}
};

static TAB_NUM t_func_funky_types__character_sequence___add_literal[] = {
  1, // locals
  1, // parameters
  var_634_50_self,
  // $mangled ""
  LET, 1, string_6, 1, var_635_6_mangled,
  // characters_of(self)
  var_characters_of, 1, var_634_50_self, 1, LOCAL(1),
  // for_each characters_of(self)
  var_for_each, 3, LOCAL(1), lambda_125, lambda_134, TAIL_CALL,
  POS(635, 5),
  POS(636, 14),
  POS(636, 5)
};

static FUNCTION_INFO i_func_funky_types__character_sequence___add_literal = {
  t_func_funky_types__character_sequence___add_literal, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_125[] = {
  0, // locals
  1, // parameters
  var_637_10_chr,
  // cond
  var_cond, 4, lambda_126, lambda_127, lambda_131, lambda_133, TAIL_CALL,
  POS(638, 9)
};

static FUNCTION_INFO i_lambda_125 = {
  t_lambda_125, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_126[] = {
  3, // locals
  0, // parameters
  // length_of(mangled) >= 16 break
  var_length_of, 1, var_635_6_mangled, 1, LOCAL(1),
  // length_of(mangled) >= 16 break
  var_std__less, 2, LOCAL(1), num_16, 1, LOCAL(2),
  // length_of(mangled) >= 16 break
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  //  length_of(mangled) >= 16 break
  LET, 2, LOCAL(3), var_break, TAIL_CALL,
  POS(639, 14),
  POS(639, 14),
  POS(639, 14),
  POS(639, 13)
};

static FUNCTION_INFO i_lambda_126 = {
  t_lambda_126, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_127[] = {
  2, // locals
  0, // parameters
  // is_a_letter || chr.is_a_digit || chr == '_':
  var_is_a_letter, 1, var_637_10_chr, 1, LOCAL(1),
  // is_a_letter || chr.is_a_digit || chr == '_':
  var_std__or, 2, LOCAL(1), lambda_128, 1, LOCAL(2),
  //  chr.is_a_letter || chr.is_a_digit || chr == '_':
  LET, 2, LOCAL(2), lambda_130, TAIL_CALL,
  POS(640, 18),
  POS(640, 18),
  POS(640, 13)
};

static FUNCTION_INFO i_lambda_127 = {
  t_lambda_127, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_128[] = {
  2, // locals
  0, // parameters
  // is_a_digit || chr == '_':
  var_is_a_digit, 1, var_637_10_chr, 1, LOCAL(1),
  // is_a_digit || chr == '_':
  var_std__or, 2, LOCAL(1), lambda_129, 1, LOCAL(2),
  // chr.is_a_digit || chr == '_':
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(640, 37),
  POS(640, 37),
  POS(640, 33)
};

static FUNCTION_INFO i_lambda_128 = {
  t_lambda_128, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_129[] = {
  1, // locals
  0, // parameters
  // chr == '_':
  var_std__equal, 2, var_637_10_chr, chr_95, 1, LOCAL(1),
  // chr == '_':
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(640, 51),
  POS(640, 51)
};

static FUNCTION_INFO i_lambda_129 = {
  t_lambda_129, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_130[] = {
  0, // locals
  0, // parameters
  // push &mangled chr
  var_push, 2, var_635_6_mangled, var_637_10_chr, 1, var_635_6_mangled,
  // next
  var_next, 0, TAIL_CALL,
  POS(641, 13),
  POS(642, 13)
};

static FUNCTION_INFO i_lambda_130 = {
  t_lambda_130, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_131[] = {
  1, // locals
  0, // parameters
  // chr == ' ':
  var_std__equal, 2, var_637_10_chr, chr_32, 1, LOCAL(1),
  //  chr == ' ':
  LET, 2, LOCAL(1), lambda_132, TAIL_CALL,
  POS(643, 14),
  POS(643, 13)
};

static FUNCTION_INFO i_lambda_131 = {
  t_lambda_131, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_132[] = {
  0, // locals
  0, // parameters
  // push &mangled '_'
  var_push, 2, var_635_6_mangled, chr_95, 1, var_635_6_mangled,
  // next
  var_next, 0, TAIL_CALL,
  POS(644, 13),
  POS(645, 13)
};

static FUNCTION_INFO i_lambda_132 = {
  t_lambda_132, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_133[] = {
  0, // locals
  0, // parameters
  //  true next
  LET, 2, var_true, var_next, TAIL_CALL,
  POS(646, 13)
};

static FUNCTION_INFO i_lambda_133 = {
  t_lambda_133, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_134[] = {
  1, // locals
  0, // parameters
  // remove_trailing_underscores_and_digits &mangled
  func_remove_trailing_underscores_and_digits, 1, var_635_6_mangled, 1, var_635_6_mangled,
  // is_empty:
  var_is_empty, 1, var_635_6_mangled, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_mangled_is_empty, lambda_135, TAIL_CALL,
  POS(648, 9),
  POS(650, 19),
  POS(649, 9)
};

static FUNCTION_INFO i_lambda_134 = {
  t_lambda_134, NULL, 3, 0,
  {}
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
  POS(651, 13),
  POS(652, 25),
  POS(652, 13),
  LOCAL(2)
};

static FUNCTION_INFO i_lambda_mangled_is_empty = {
  t_lambda_mangled_is_empty, NULL, 3, 1,
  {"651_29_n\000"}
};

static TAB_NUM t_lambda_135[] = {
  1, // locals
  0, // parameters
  // append "str_" &mangled
  var_append, 2, str_str, var_635_6_mangled, 1, var_635_6_mangled,
  // check_mangling $n !mangling_counter mangled
  func_check_mangling, 1, var_635_6_mangled, 2, var_655_29_n, var_mangling_counter,
  // 1:
  var_std__less, 2, num_1, var_655_29_n, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_136, lambda_137, TAIL_CALL,
  POS(654, 13),
  POS(655, 13),
  POS(657, 19),
  POS(656, 13)
};

static FUNCTION_INFO i_lambda_135 = {
  t_lambda_135, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_136[] = {
  1, // locals
  0, // parameters
  // "@(mangled)_@(n)"
  var_std__string, 3, var_635_6_mangled, string_42, var_655_29_n, 1, LOCAL(1),
  // add_mangled "@(mangled)_@(n)"
  func_add_mangled, 1, LOCAL(1), TAIL_CALL,
  POS(658, 29),
  POS(658, 17)
};

static FUNCTION_INFO i_lambda_136 = {
  t_lambda_136, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_137[] = {
  0, // locals
  0, // parameters
  // add_mangled mangled
  func_add_mangled, 1, var_635_6_mangled, TAIL_CALL,
  POS(660, 17)
};

static FUNCTION_INFO i_lambda_137 = {
  t_lambda_137, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_add_mangled[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 662_20_mangled_name
  // mangled_literals(self) mangled_name
  var_mangled_literals, 2, var_634_50_self, LOCAL(1), 1, var_mangled_literals,
  // -> mangled_literals mangling_counter
  LET, 2, var_mangled_literals, var_mangling_counter, TAIL_CALL,
  POS(665, 8),
  POS(666, 7),
  LOCAL(1)
};

static FUNCTION_INFO i_func_add_mangled = {
  t_func_add_mangled, NULL, 2, 1,
  {"662_20_mangled_name\000"}
};

static TAB_NUM t_func_funky_types__unique___add_literal[] = {
  3, // locals
  1, // parameters
  LOCAL(3), // 668_38_self
  // !mangled_literals(self) funky::key_of(self)
  var_funky__key_of, 1, LOCAL(3), 1, LOCAL(2),
  // mangled_literals(self) funky::key_of(self)
  var_mangled_literals, 2, LOCAL(3), LOCAL(2), 1, var_mangled_literals,
  // -> mangled_literals mangling_counter
  LET, 2, var_mangled_literals, var_mangling_counter, TAIL_CALL,
  POS(669, 5),
  POS(669, 6),
  POS(670, 5),
  LOCAL(3)
};

static FUNCTION_INFO i_func_funky_types__unique___add_literal = {
  t_func_funky_types__unique___add_literal, NULL, 3, 1,
  {"668_38_self\000"}
};

static TAB_NUM t_func_funky_types__statement___add_literal[] = {
  5, // locals
  1, // parameters
  LOCAL(3), // 672_41_self
  // head_of(self)) .truncate_until. "::"
  var_head_of, 1, LOCAL(3), 1, LOCAL(1),
  // identifier_of(head_of(self)) .truncate_until. "::"
  var_identifier_of, 1, LOCAL(1), 1, LOCAL(2),
  // $type identifier_of(head_of(self)) .truncate_until. "::"
  var_truncate_until, 2, LOCAL(2), string_11, 1, LOCAL(4),
  // mangle_position(self))
  var_mangle_position, 1, LOCAL(3), 1, LOCAL(1),
  // $mangled_name append(type "_" mangle_position(self))
  var_append, 3, LOCAL(4), string_42, LOCAL(1), 1, LOCAL(5),
  // mangled_literals(self mangled_name) mangling_counter
  var_mangled_literals, 2, LOCAL(3), LOCAL(5), 1, LOCAL(1),
  // -> mangled_literals(self mangled_name) mangling_counter
  LET, 2, LOCAL(1), var_mangling_counter, TAIL_CALL,
  POS(673, 25),
  POS(673, 11),
  POS(673, 5),
  POS(674, 35),
  POS(674, 5),
  POS(675, 8),
  POS(675, 5),
  LOCAL(4),
  LOCAL(3),
  LOCAL(5)
};

static FUNCTION_INFO i_func_funky_types__statement___add_literal = {
  t_func_funky_types__statement___add_literal, NULL, 7, 3,
  {"673_6_type\000", "672_41_self\000", "674_6_mangled_name\000"}
};

static TAB_NUM t_func_funky_types__body___add_literal[] = {
  6, // locals
  1, // parameters
  var_677_36_self,
  // $source_group source_group_of(self)
  var_source_group_of, 1, var_677_36_self, 1, LOCAL(4),
  // $line_text second(source_group)
  var_second, 1, LOCAL(4), 1, LOCAL(5),
  // length_of(line_text)-length_of(source_position_of(self))
  var_length_of, 1, LOCAL(5), 1, LOCAL(1),
  // source_position_of(self))
  var_source_position_of, 1, var_677_36_self, 1, LOCAL(2),
  // length_of(source_position_of(self))
  var_length_of, 1, LOCAL(2), 1, LOCAL(3),
  // $column_no length_of(line_text)-length_of(source_position_of(self))
  var_std__minus, 2, LOCAL(1), LOCAL(3), 1, LOCAL(6),
  // $text range(line_text 1 column_no)
  var_range, 3, LOCAL(5), num_1, LOCAL(6), 1, var_681_6_text,
  // without_suffix &text ':'
  var_without_suffix, 2, var_681_6_text, chr_58, 1, var_681_6_text,
  // without_suffix &text "->"
  var_without_suffix, 2, var_681_6_text, string_43, 1, var_681_6_text,
  // trim_right &text
  var_trim_right, 1, var_681_6_text, 1, var_681_6_text,
  // is_empty || text .contains. ' ':
  var_is_empty, 1, var_681_6_text, 1, LOCAL(1),
  // is_empty || text .contains. ' ':
  var_std__or, 2, LOCAL(1), lambda_138, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_139, lambda_140, TAIL_CALL,
  POS(678, 5),
  POS(679, 5),
  POS(680, 16),
  POS(680, 47),
  POS(680, 37),
  POS(680, 5),
  POS(681, 5),
  POS(682, 5),
  POS(683, 5),
  POS(684, 5),
  POS(686, 12),
  POS(686, 12),
  POS(685, 5),
  LOCAL(6),
  LOCAL(4),
  LOCAL(5)
};

static FUNCTION_INFO i_func_funky_types__body___add_literal = {
  t_func_funky_types__body___add_literal, NULL, 13, 3,
  {"680_6_column_no\000", "678_6_source_group\000", "679_6_line_text\000"}
};

static TAB_NUM t_lambda_138[] = {
  1, // locals
  0, // parameters
  // text .contains. ' ':
  var_contains, 2, var_681_6_text, chr_32, 1, LOCAL(1),
  // text .contains. ' ':
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(686, 24),
  POS(686, 24)
};

static FUNCTION_INFO i_lambda_138 = {
  t_lambda_138, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_139[] = {
  0, // locals
  0, // parameters
  // add_lambda ""
  func_add_lambda, 1, string_6, TAIL_CALL,
  POS(687, 9)
};

static FUNCTION_INFO i_lambda_139 = {
  t_lambda_139, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_140[] = {
  2, // locals
  0, // parameters
  // text(1) == '$':
  var_681_6_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '$':
  var_std__equal, 2, LOCAL(1), chr_36, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_141, lambda_142, TAIL_CALL,
  POS(690, 11),
  POS(690, 11),
  POS(689, 9)
};

static FUNCTION_INFO i_lambda_140 = {
  t_lambda_140, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_141[] = {
  3, // locals
  0, // parameters
  // range(text 2 -1))
  var_range, 3, var_681_6_text, num_2, minus_num_1, 1, LOCAL(1),
  // mangle_versioned_identifier(range(text 2 -1))
  func_mangle_versioned_identifier, 1, LOCAL(1), 1, LOCAL(2),
  // append
  var_append, 2, str_func, LOCAL(2), 1, LOCAL(3),
  // add_function
  func_add_function, 1, LOCAL(3), TAIL_CALL,
  POS(694, 45),
  POS(694, 17),
  POS(692, 15),
  POS(691, 13)
};

static FUNCTION_INFO i_lambda_141 = {
  t_lambda_141, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_142[] = {
  0, // locals
  0, // parameters
  // replace_all &text '.' = "_"
  var_replace_all, 2, var_681_6_text, key_value_pair_696_32, 1, var_681_6_text,
  // remove_non_identifier_characters &text
  func_remove_non_identifier_characters, 1, var_681_6_text, 1, var_681_6_text,
  // add_lambda text
  func_add_lambda, 1, var_681_6_text, TAIL_CALL,
  POS(696, 13),
  POS(697, 13),
  POS(698, 13)
};

static FUNCTION_INFO i_lambda_142 = {
  t_lambda_142, NULL, 3, 0,
  {}
};

static TAB_NUM t_func_add_lambda[] = {
  1, // locals
  1, // parameters
  var_700_19_name,
  // is_empty:
  var_is_empty, 1, var_700_19_name, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_name_is_empty, lambda_143, TAIL_CALL,
  POS(702, 14),
  POS(701, 7)
};

static FUNCTION_INFO i_func_add_lambda = {
  t_func_add_lambda, NULL, 2, 0,
  {}
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
  POS(703, 11),
  POS(704, 23),
  POS(704, 11),
  LOCAL(2)
};

static FUNCTION_INFO i_lambda_name_is_empty = {
  t_lambda_name_is_empty, NULL, 3, 1,
  {"703_27_n\000"}
};

static TAB_NUM t_lambda_143[] = {
  1, // locals
  0, // parameters
  // append("lambda_" name)
  var_append, 2, str_lambda_2, var_700_19_name, 1, LOCAL(1),
  // add_function append("lambda_" name)
  func_add_function, 1, LOCAL(1), TAIL_CALL,
  POS(706, 24),
  POS(706, 11)
};

static FUNCTION_INFO i_lambda_143 = {
  t_lambda_143, NULL, 2, 0,
  {}
};

static TAB_NUM t_func_add_function[] = {
  1, // locals
  1, // parameters
  var_708_21_name,
  // check_mangling $n !mangling_counter name
  func_check_mangling, 1, var_708_21_name, 2, var_709_23_n, var_mangling_counter,
  // 1:
  var_std__less, 2, num_1, var_709_23_n, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_144, lambda_145, TAIL_CALL,
  POS(709, 7),
  POS(711, 13),
  POS(710, 7)
};

static FUNCTION_INFO i_func_add_function = {
  t_func_add_function, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_144[] = {
  3, // locals
  0, // parameters
  // name .until. '_'
  var_until, 2, var_708_21_name, chr_95, 1, LOCAL(1),
  // name .from. '_'
  var_from, 2, var_708_21_name, chr_95, 1, LOCAL(2),
  // string
  var_string, 3, LOCAL(1), var_709_23_n, LOCAL(2), 1, LOCAL(3),
  // add_mangled
  func_2_add_mangled, 1, LOCAL(3), TAIL_CALL,
  POS(714, 15),
  POS(716, 15),
  POS(713, 13),
  POS(712, 11)
};

static FUNCTION_INFO i_lambda_144 = {
  t_lambda_144, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_145[] = {
  0, // locals
  0, // parameters
  // add_mangled name
  func_2_add_mangled, 1, var_708_21_name, TAIL_CALL,
  POS(718, 11)
};

static FUNCTION_INFO i_lambda_145 = {
  t_lambda_145, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_2_add_mangled[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 720_20_name
  // mangled_literals(self name) mangling_counter
  var_mangled_literals, 2, var_677_36_self, LOCAL(2), 1, LOCAL(1),
  // -> mangled_literals(self name) mangling_counter
  LET, 2, LOCAL(1), var_mangling_counter, TAIL_CALL,
  POS(721, 10),
  POS(721, 7),
  LOCAL(2)
};

static FUNCTION_INFO i_func_2_add_mangled = {
  t_func_2_add_mangled, NULL, 2, 1,
  {"720_20_name\000"}
};

static TAB_NUM t_func_mangle_versioned_identifier[] = {
  1, // locals
  1, // parameters
  var_723_36_name,
  // $rest name .behind. "-"
  var_behind, 2, var_723_36_name, string_44, 1, var_724_8_rest,
  // is_empty
  var_is_empty, 1, var_724_8_rest, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_146, lambda_147, TAIL_CALL,
  POS(724, 7),
  POS(726, 14),
  POS(725, 7)
};

static FUNCTION_INFO i_func_mangle_versioned_identifier = {
  t_func_mangle_versioned_identifier, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_146[] = {
  1, // locals
  0, // parameters
  // replace(name)
  func_replace, 1, var_723_36_name, 1, LOCAL(1),
  //  replace(name)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(727, 12),
  POS(727, 11)
};

static FUNCTION_INFO i_lambda_146 = {
  t_lambda_146, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_147[] = {
  2, // locals
  0, // parameters
  // rest(1).is_a_digit
  var_724_8_rest, 1, num_1, 1, LOCAL(1),
  // is_a_digit
  var_is_a_digit, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_148, lambda_149, TAIL_CALL,
  POS(730, 13),
  POS(730, 21),
  POS(729, 11)
};

static FUNCTION_INFO i_lambda_147 = {
  t_lambda_147, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_148[] = {
  5, // locals
  0, // parameters
  // name .before. '.') "__" replace(name .behind. '.'))
  var_before, 2, var_723_36_name, chr_46, 1, LOCAL(1),
  // replace(name .before. '.') "__" replace(name .behind. '.'))
  func_replace, 1, LOCAL(1), 1, LOCAL(2),
  // name .behind. '.'))
  var_behind, 2, var_723_36_name, chr_46, 1, LOCAL(3),
  // replace(name .behind. '.'))
  func_replace, 1, LOCAL(3), 1, LOCAL(4),
  // append(replace(name .before. '.') "__" replace(name .behind. '.'))
  var_append, 3, LOCAL(2), string_28, LOCAL(4), 1, LOCAL(5),
  //  append(replace(name .before. '.') "__" replace(name .behind. '.'))
  LET, 1, LOCAL(5), TAIL_CALL,
  POS(731, 31),
  POS(731, 23),
  POS(731, 63),
  POS(731, 55),
  POS(731, 16),
  POS(731, 15)
};

static FUNCTION_INFO i_lambda_148 = {
  t_lambda_148, NULL, 6, 0,
  {}
};

static TAB_NUM t_lambda_149[] = {
  1, // locals
  0, // parameters
  // replace(name)
  func_replace, 1, var_723_36_name, 1, LOCAL(1),
  //  replace(name)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(732, 16),
  POS(732, 15)
};

static FUNCTION_INFO i_lambda_149 = {
  t_lambda_149, NULL, 2, 0,
  {}
};

static TAB_NUM t_func_replace[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 734_18_part
  // part .without_suffix. '/'
  var_without_suffix, 2, LOCAL(2), chr_47, 1, LOCAL(1),
  // replace_all
  var_replace_all, 5, LOCAL(1), key_value_pair_737_12, key_value_pair_738_12, key_value_pair_739_12, key_value_pair_740_12, TAIL_CALL,
  POS(736, 11),
  POS(735, 9),
  LOCAL(2)
};

static FUNCTION_INFO i_func_replace = {
  t_func_replace, NULL, 2, 1,
  {"734_18_part\000"}
};

static TAB_NUM t_func_funky_types__initial_value___to_option[] = {
  3, // locals
  1, // parameters
  LOCAL(3), // 747_43_self
  // operand_of(self).to_index
  var_operand_of, 1, LOCAL(3), 1, LOCAL(1),
  // to_index
  var_to_index, 1, LOCAL(1), 1, LOCAL(2),
  // -> operand_of(self).to_index
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(747, 52),
  POS(747, 69),
  POS(747, 49),
  LOCAL(3)
};

static FUNCTION_INFO i_func_funky_types__initial_value___to_option = {
  t_func_funky_types__initial_value___to_option, NULL, 3, 1,
  {"747_43_self\000"}
};

static TAB_NUM t_func_funky_types__node___add_source_positions[] = {
  1, // locals
  1, // parameters
  LOCAL(1),
  // -> ""
  LET, 1, string_6, TAIL_CALL,
  POS(751, 52)
};

static FUNCTION_INFO i_func_funky_types__node___add_source_positions = {
  t_func_funky_types__node___add_source_positions, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_funky_types__statement___add_source_positions[] = {
  3, // locals
  1, // parameters
  LOCAL(3), // 753_50_self
  // get_source_position(self)),@nl;"
  func_get_source_position, 1, LOCAL(3), 1, LOCAL(1),
  // "  @(get_source_position(self)),@nl;"
  var_std__string, 3, string_8, LOCAL(1), string_10, 1, LOCAL(2),
  // -> "  @(get_source_position(self)),@nl;"
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(754, 13),
  POS(754, 8),
  POS(754, 5),
  LOCAL(3)
};

static FUNCTION_INFO i_func_funky_types__statement___add_source_positions = {
  t_func_funky_types__statement___add_source_positions, NULL, 3, 1,
  {"753_50_self\000"}
};

static TAB_NUM t_func_get_source_position[] = {
  1, // locals
  1, // parameters
  var_756_26_node,
  // $source_group source_group_of(node)
  var_source_group_of, 1, var_756_26_node, 1, var_757_6_source_group,
  // is_defined:
  var_is_defined, 1, var_757_6_source_group, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_source_group_is_defined, lambda_150, TAIL_CALL,
  POS(757, 5),
  POS(760, 20),
  POS(759, 5)
};

static FUNCTION_INFO i_func_get_source_position = {
  t_func_get_source_position, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_source_group_is_defined[] = {
  9, // locals
  0, // parameters
  // source_group $indent $text
  var_757_6_source_group, 0, 2, LOCAL(6), LOCAL(7),
  // $line_no line_no_of(source_group)
  var_line_no_of, 1, var_757_6_source_group, 1, LOCAL(8),
  // length_of(text)+1-length_of(source_position_of(node))
  var_length_of, 1, LOCAL(7), 1, LOCAL(1),
  // indent+length_of(text)+1-length_of(source_position_of(node))
  var_std__plus, 2, LOCAL(6), LOCAL(1), 1, LOCAL(2),
  // indent+length_of(text)+1-length_of(source_position_of(node))
  var_std__plus, 2, LOCAL(2), num_1, 1, LOCAL(3),
  // source_position_of(node))
  var_source_position_of, 1, var_756_26_node, 1, LOCAL(4),
  // length_of(source_position_of(node))
  var_length_of, 1, LOCAL(4), 1, LOCAL(5),
  // $column_no indent+length_of(text)+1-length_of(source_position_of(node))
  var_std__minus, 2, LOCAL(3), LOCAL(5), 1, LOCAL(9),
  // "POS(@(line_no), @(column_no))"
  var_std__string, 5, str_POS, LOCAL(8), string_30, LOCAL(9), string_31, 1, LOCAL(1),
  // -> "POS(@(line_no), @(column_no))"
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(761, 9),
  POS(762, 9),
  POS(763, 27),
  POS(763, 20),
  POS(763, 20),
  POS(763, 55),
  POS(763, 45),
  POS(763, 9),
  POS(764, 12),
  POS(764, 9),
  LOCAL(6),
  LOCAL(7),
  LOCAL(9),
  LOCAL(8)
};

static FUNCTION_INFO i_lambda_source_group_is_defined = {
  t_lambda_source_group_is_defined, NULL, 10, 4,
  {"761_23_indent\000", "761_31_text\000", "763_10_column_no\000", "762_10_line_no\000"}
};

static TAB_NUM t_lambda_150[] = {
  0, // locals
  0, // parameters
  //  "POS(0, 0)"
  LET, 1, str_POS_2, TAIL_CALL,
  POS(765, 9)
};

static FUNCTION_INFO i_lambda_150 = {
  t_lambda_150, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_funky_types__statement___to_compound[] = {
  6, // locals
  1, // parameters
  LOCAL(4), // 771_41_self
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
  POS(772, 5),
  POS(774, 14),
  POS(774, 7),
  POS(776, 7),
  POS(773, 5),
  POS(778, 8),
  POS(778, 5),
  LOCAL(6),
  LOCAL(5),
  LOCAL(4)
};

static FUNCTION_INFO i_func_funky_types__statement___to_compound = {
  t_func_funky_types__statement___to_compound, NULL, 7, 3,
  {"773_17_indices\000", "772_6_mangled_name\000", "771_41_self\000"}
};

static TAB_NUM t_func_to_negative_index[] = {
  3, // locals
  1, // parameters
  LOCAL(3), // 784_26_node
  // to_index(node))"
  var_to_index, 1, LOCAL(3), 1, LOCAL(1),
  // "-@(to_index(node))"
  var_std__string, 2, string_44, LOCAL(1), 1, LOCAL(2),
  // -> "-@(to_index(node))"
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(784, 39),
  POS(784, 35),
  POS(784, 32),
  LOCAL(3)
};

static FUNCTION_INFO i_func_to_negative_index = {
  t_func_to_negative_index, NULL, 3, 1,
  {"784_26_node\000"}
};

static TAB_NUM t_func_funky_types__numeric_literal___to_table_entry[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 790_50_self
  // $digits digits_of(self)
  var_digits_of, 1, LOCAL(2), 1, var_791_6_digits,
  // digits .contains. '.'
  var_contains, 2, var_791_6_digits, chr_46, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_151, lambda_152, TAIL_CALL,
  POS(791, 5),
  POS(793, 7),
  POS(792, 5),
  LOCAL(2)
};

static FUNCTION_INFO i_func_funky_types__numeric_literal___to_table_entry = {
  t_func_funky_types__numeric_literal___to_table_entry, NULL, 3, 1,
  {"790_50_self\000"}
};

static TAB_NUM t_lambda_151[] = {
  1, // locals
  0, // parameters
  // "
  var_std__string, 3, str___FLT_REAL_0_rea, var_791_6_digits, string_46, 1, LOCAL(1),
  //  "
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(794, 10),
  POS(794, 9)
};

static FUNCTION_INFO i_lambda_151 = {
  t_lambda_151, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_152[] = {
  3, // locals
  0, // parameters
  // digits(1) == '-'
  var_791_6_digits, 1, num_1, 1, LOCAL(1),
  // digits(1) == '-'
  var_std__equal, 2, LOCAL(1), chr_45, 1, LOCAL(2),
  // if $sign !digits
  var_if, 3, LOCAL(2), lambda_153, lambda_154, 2, LOCAL(3), var_791_6_digits,
  // digits .has_prefix. "0b" || digits .has_prefix. "0o"
  var_has_prefix, 2, var_791_6_digits, str_0b, 1, LOCAL(1),
  // digits .has_prefix. "0b" || digits .has_prefix. "0o"
  var_std__or, 2, LOCAL(1), lambda_155, 1, LOCAL(2),
  // update_if digits .has_prefix. "0b" || digits .has_prefix. "0o"
  var_update_if, 3, LOCAL(2), var_791_6_digits, lambda_digits, 1, var_791_6_digits,
  // "
  var_std__string, 5, str___FLT, LOCAL(3), str_TIVE_INT64_0_val, var_791_6_digits, string_46, 1, LOCAL(1),
  // -> "
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(799, 11),
  POS(799, 11),
  POS(798, 9),
  POS(802, 19),
  POS(802, 19),
  POS(802, 9),
  POS(804, 12),
  POS(804, 9),
  LOCAL(3)
};

static FUNCTION_INFO i_lambda_152 = {
  t_lambda_152, NULL, 8, 1,
  {"798_13_sign\000"}
};

static TAB_NUM t_lambda_153[] = {
  1, // locals
  0, // parameters
  // range(digits 2 -1)
  var_range, 3, var_791_6_digits, num_2, minus_num_1, 1, LOCAL(1),
  //  "NEGA" range(digits 2 -1)
  LET, 2, str_NEGA, LOCAL(1), TAIL_CALL,
  POS(800, 21),
  POS(800, 13)
};

static FUNCTION_INFO i_lambda_153 = {
  t_lambda_153, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_154[] = {
  0, // locals
  0, // parameters
  //  "POSI" digits
  LET, 2, str_POSI, var_791_6_digits, TAIL_CALL,
  POS(801, 13)
};

static FUNCTION_INFO i_lambda_154 = {
  t_lambda_154, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_155[] = {
  1, // locals
  0, // parameters
  // digits .has_prefix. "0o"
  var_has_prefix, 2, var_791_6_digits, str_0o, 1, LOCAL(1),
  // digits .has_prefix. "0o"
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(802, 47),
  POS(802, 47)
};

static FUNCTION_INFO i_lambda_155 = {
  t_lambda_155, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_digits[] = {
  1, // locals
  0, // parameters
  // to_integer
  var_to_integer, 1, var_791_6_digits, 1, LOCAL(1),
  //  digits.to_integer
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(803, 29),
  POS(803, 21)
};

static FUNCTION_INFO i_lambda_digits = {
  t_lambda_digits, NULL, 2, 0,
  {}
};

static TAB_NUM t_func_funky_types__numeric_character_literal___to_table_entry[] = {
  3, // locals
  1, // parameters
  LOCAL(3), // 808_60_self
  // digits_of(self))}},
  var_digits_of, 1, LOCAL(3), 1, LOCAL(1),
  // "
  var_std__string, 3, str___FLT_CHARACTER, LOCAL(1), string_46, 1, LOCAL(2),
  // -> "
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(811, 40),
  POS(809, 8),
  POS(809, 5),
  LOCAL(3)
};

static FUNCTION_INFO i_func_funky_types__numeric_character_literal___to_table_entry = {
  t_func_funky_types__numeric_character_literal___to_table_entry, NULL, 3, 1,
  {"808_60_self\000"}
};

static TAB_NUM t_func_funky_types__character_sequence___to_table_entry[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 813_53_self
  // $characters characters_of(self)
  var_characters_of, 1, LOCAL(2), 1, var_814_6_characters,
  // $length length_of(characters)
  var_length_of, 1, var_814_6_characters, 1, var_815_6_length,
  // is_an_octet_string:
  var_is_an_octet_string, 1, var_814_6_characters, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_characters_is_an_octet_string, lambda_156, TAIL_CALL,
  POS(814, 5),
  POS(815, 5),
  POS(817, 18),
  POS(816, 5),
  LOCAL(2)
};

static FUNCTION_INFO i_func_funky_types__character_sequence___to_table_entry = {
  t_func_funky_types__character_sequence___to_table_entry, NULL, 4, 1,
  {"813_53_self\000"}
};

static TAB_NUM t_lambda_characters_is_an_octet_string[] = {
  2, // locals
  0, // parameters
  // $text characters.to_c_string
  func_to_c_string, 1, var_814_6_characters, 1, LOCAL(2),
  // "
  var_std__string, 5, str___FLT_STRING, var_815_6_length, str__str, LOCAL(2), string_47, 1, LOCAL(1),
  // -> "
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(818, 9),
  POS(819, 12),
  POS(819, 9),
  LOCAL(2)
};

static FUNCTION_INFO i_lambda_characters_is_an_octet_string = {
  t_lambda_characters_is_an_octet_string, NULL, 3, 1,
  {"818_10_text\000"}
};

static TAB_NUM t_lambda_156[] = {
  2, // locals
  0, // parameters
  // $text characters.to_c_string_32
  func_to_c_string_32, 1, var_814_6_characters, 1, LOCAL(2),
  // "
  var_std__string, 5, str___FLT_STRING_2, var_815_6_length, str__str_32__U, LOCAL(2), string_47, 1, LOCAL(1),
  // -> "
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(823, 9),
  POS(824, 12),
  POS(824, 9),
  LOCAL(2)
};

static FUNCTION_INFO i_lambda_156 = {
  t_lambda_156, NULL, 3, 1,
  {"823_10_text\000"}
};

static TAB_NUM t_func_funky_types__statement___to_table_entry[] = {
  7, // locals
  1, // parameters
  LOCAL(3), // 828_44_self
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
  POS(829, 5),
  POS(830, 12),
  POS(830, 12),
  POS(830, 5),
  POS(831, 22),
  POS(831, 12),
  POS(831, 5),
  POS(832, 5),
  POS(833, 8),
  POS(833, 5),
  LOCAL(3),
  LOCAL(4),
  LOCAL(5),
  LOCAL(6),
  LOCAL(7)
};

static FUNCTION_INFO i_func_funky_types__statement___to_table_entry = {
  t_func_funky_types__statement___to_table_entry, NULL, 10, 5,
  {"828_44_self\000", "829_6_head\000", "830_6_kind\000", "831_6_count\000", "832_6_mangled_name\000"}
};

static TAB_NUM t_func_funky_types__unique___to_table_entry[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 837_41_self
  // identifier_of(self) "__" = "::")
  var_identifier_of, 1, LOCAL(2), 1, LOCAL(1),
  // $identifier replace_first(identifier_of(self) "__" = "::")
  var_replace_first, 2, LOCAL(1), key_value_pair_838_52, 1, LOCAL(3),
  // "
  var_std__string, 3, str___FLT_UNIQUE_0_s, LOCAL(3), string_47, 1, LOCAL(1),
  // -> "
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(838, 31),
  POS(838, 5),
  POS(839, 8),
  POS(839, 5),
  LOCAL(2),
  LOCAL(3)
};

static FUNCTION_INFO i_func_funky_types__unique___to_table_entry = {
  t_func_funky_types__unique___to_table_entry, NULL, 4, 2,
  {"837_41_self\000", "838_6_identifier\000"}
};

static TAB_NUM t_func_funky_types__body___to_table_entry[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 843_39_self
  // $mangled_name mangled_literals(self)
  var_mangled_literals, 1, LOCAL(2), 1, LOCAL(3),
  // "
  var_std__string, 3, str___FLT_FUNCTION_2, LOCAL(3), string_46, 1, LOCAL(1),
  // -> "
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(844, 5),
  POS(845, 8),
  POS(845, 5),
  LOCAL(2),
  LOCAL(3)
};

static FUNCTION_INFO i_func_funky_types__body___to_table_entry = {
  t_func_funky_types__body___to_table_entry, NULL, 3, 2,
  {"843_39_self\000", "844_6_mangled_name\000"}
};

static TAB_NUM t_func_is_a_valid_statement[] = {
  3, // locals
  1, // parameters
  var_849_25_statement,
  // node_type_of(statement) == STATEMENT && not(statement.is_a_definition)
  var_node_type_of, 1, var_849_25_statement, 1, LOCAL(1),
  // node_type_of(statement) == STATEMENT && not(statement.is_a_definition)
  var_std__equal, 2, LOCAL(1), var_STATEMENT, 1, LOCAL(2),
  // node_type_of(statement) == STATEMENT && not(statement.is_a_definition)
  var_std__and, 2, LOCAL(2), lambda_157, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_158, lambda_160, TAIL_CALL,
  POS(851, 5),
  POS(851, 5),
  POS(851, 5),
  POS(850, 3)
};

static FUNCTION_INFO i_func_is_a_valid_statement = {
  t_func_is_a_valid_statement, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_157[] = {
  2, // locals
  0, // parameters
  // is_a_definition)
  var_is_a_definition, 1, var_849_25_statement, 1, LOCAL(1),
  // not(statement.is_a_definition)
  var_not, 1, LOCAL(1), 1, LOCAL(2),
  // not(statement.is_a_definition)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(851, 59),
  POS(851, 45),
  POS(851, 45)
};

static FUNCTION_INFO i_lambda_157 = {
  t_lambda_157, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_158[] = {
  3, // locals
  0, // parameters
  // head_of(statement).is_a_valid_argument
  var_head_of, 1, var_849_25_statement, 1, LOCAL(1),
  // is_a_valid_argument
  func_is_a_valid_argument, 1, LOCAL(1), 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_159, 1, LOCAL(3),
  // 
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(854, 9),
  POS(854, 28),
  POS(853, 9),
  POS(852, 7)
};

static FUNCTION_INFO i_lambda_158 = {
  t_lambda_158, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_159[] = {
  2, // locals
  0, // parameters
  // arguments_of(statement) is_a_valid_argument)
  var_arguments_of, 1, var_849_25_statement, 1, LOCAL(1),
  // all_of(arguments_of(statement) is_a_valid_argument)
  var_all_of, 2, LOCAL(1), func_is_a_valid_argument, 1, LOCAL(2),
  // all_of(arguments_of(statement) is_a_valid_argument)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(855, 16),
  POS(855, 9),
  POS(855, 9)
};

static FUNCTION_INFO i_lambda_159 = {
  t_lambda_159, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_160[] = {
  0, // locals
  0, // parameters
  //  false
  LET, 1, var_false, TAIL_CALL,
  POS(856, 7)
};

static FUNCTION_INFO i_lambda_160 = {
  t_lambda_160, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_is_a_valid_argument[] = {
  1, // locals
  1, // parameters
  var_858_26_argument,
  // node_type_of(argument)
  var_node_type_of, 1, var_858_26_argument, 1, LOCAL(1),
  // case node_type_of(argument)
  var_case, 6, LOCAL(1), var_DEFINITION, lambda_DEFINITION, var_REDEFINITION, lambda_REDEFINITION, lambda_164, TAIL_CALL,
  POS(859, 10),
  POS(859, 5)
};

static FUNCTION_INFO i_func_is_a_valid_argument = {
  t_func_is_a_valid_argument, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_DEFINITION[] = {
  2, // locals
  0, // parameters
  // identifier_of(argument))
  var_identifier_of, 1, var_858_26_argument, 1, LOCAL(1),
  // variables(identifier_of(argument))
  var_variables, 1, LOCAL(1), 1, LOCAL(2),
  // check_destination variables(identifier_of(argument))
  func_check_destination, 1, LOCAL(2), TAIL_CALL,
  POS(861, 37),
  POS(861, 27),
  POS(861, 9)
};

static FUNCTION_INFO i_lambda_DEFINITION = {
  t_lambda_DEFINITION, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_REDEFINITION[] = {
  2, // locals
  0, // parameters
  // kind_of(argument) == TEMPORARY:
  var_kind_of, 1, var_858_26_argument, 1, LOCAL(1),
  // kind_of(argument) == TEMPORARY:
  var_std__equal, 2, LOCAL(1), var_TEMPORARY, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_161, lambda_163, TAIL_CALL,
  POS(864, 11),
  POS(864, 11),
  POS(863, 9)
};

static FUNCTION_INFO i_lambda_REDEFINITION = {
  t_lambda_REDEFINITION, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_161[] = {
  1, // locals
  0, // parameters
  // identifier_of(argument))
  var_identifier_of, 1, var_858_26_argument, 1, LOCAL(1),
  // $info variables(identifier_of(argument))
  var_variables, 1, LOCAL(1), 1, var_865_14_info,
  // is_defined:
  var_is_defined, 1, var_865_14_info, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_info_is_defined, lambda_162, TAIL_CALL,
  POS(865, 29),
  POS(865, 13),
  POS(867, 20),
  POS(866, 13)
};

static FUNCTION_INFO i_lambda_161 = {
  t_lambda_161, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_info_is_defined[] = {
  0, // locals
  0, // parameters
  // check_destination info
  func_check_destination, 1, var_865_14_info, TAIL_CALL,
  POS(868, 17)
};

static FUNCTION_INFO i_lambda_info_is_defined = {
  t_lambda_info_is_defined, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_162[] = {
  0, // locals
  0, // parameters
  //  true
  LET, 1, var_true, TAIL_CALL,
  POS(869, 17)
};

static FUNCTION_INFO i_lambda_162 = {
  t_lambda_162, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_163[] = {
  0, // locals
  0, // parameters
  //  true
  LET, 1, var_true, TAIL_CALL,
  POS(870, 13)
};

static FUNCTION_INFO i_lambda_163 = {
  t_lambda_163, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_164[] = {
  0, // locals
  0, // parameters
  //  true
  LET, 1, var_true, TAIL_CALL,
  POS(871, 9)
};

static FUNCTION_INFO i_lambda_164 = {
  t_lambda_164, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_check_destination[] = {
  3, // locals
  1, // parameters
  LOCAL(3), // 873_26_info
  // first(info)
  var_first, 1, LOCAL(3), 1, LOCAL(1),
  // sequence
  var_sequence, 7, var_CONSTANT, var_CONSTANT_COMPOUND, var_INITIALIZED, var_INITIALIZED_COMPOUND, var_DERIVED, var_ATTRIBUTE, var_ATTRIBUTE_WITH_SETTER, 1, LOCAL(2),
  // case first(info)
  var_case, 4, LOCAL(1), LOCAL(2), lambda_165, lambda_166, TAIL_CALL,
  POS(874, 12),
  POS(875, 9),
  POS(874, 7),
  LOCAL(3)
};

static FUNCTION_INFO i_func_check_destination = {
  t_func_check_destination, NULL, 3, 1,
  {"873_26_info\000"}
};

static TAB_NUM t_lambda_165[] = {
  0, // locals
  0, // parameters
  //  false
  LET, 1, var_false, TAIL_CALL,
  POS(883, 11)
};

static FUNCTION_INFO i_lambda_165 = {
  t_lambda_165, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_166[] = {
  0, // locals
  0, // parameters
  //  true
  LET, 1, var_true, TAIL_CALL,
  POS(884, 11)
};

static FUNCTION_INFO i_lambda_166 = {
  t_lambda_166, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_funky_types__node___to_index[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 898_31_self
  // debug::print "/to_index failed: "
  var_debug__print, 1, str_to_index_failed, 0,
  // debug::dump `self
  var_debug__dump, 2, str_self, LOCAL(1), 0,
  // -> "?"
  LET, 1, string_48, TAIL_CALL,
  POS(899, 3),
  POS(900, 3),
  POS(901, 3),
  LOCAL(1)
};

static FUNCTION_INFO i_func_funky_types__node___to_index = {
  t_func_funky_types__node___to_index, NULL, 3, 1,
  {"898_31_self\000"}
};

static TAB_NUM t_func_retrieve_name[] = {
  1, // locals
  1, // parameters
  var_908_18_self,
  // kind_of(self)
  var_kind_of, 1, var_908_18_self, 1, LOCAL(1),
  // case kind_of(self)
  var_case, 6, LOCAL(1), var_TEMPORARY, lambda_TEMPORARY, var_CONSTANT, lambda_CONSTANT, lambda_170, TAIL_CALL,
  POS(909, 8),
  POS(909, 3)
};

static FUNCTION_INFO i_func_retrieve_name = {
  t_func_retrieve_name, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_TEMPORARY[] = {
  2, // locals
  0, // parameters
  // identifier_of(self))
  var_identifier_of, 1, var_908_18_self, 1, LOCAL(1),
  // $info variables(identifier_of(self))
  var_variables, 1, LOCAL(1), 1, var_911_8_info,
  // is_defined && second(info).is_defined
  var_is_defined, 1, var_911_8_info, 1, LOCAL(1),
  // is_defined && second(info).is_defined
  var_std__and, 2, LOCAL(1), lambda_167, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_168, lambda_169, TAIL_CALL,
  POS(911, 23),
  POS(911, 7),
  POS(913, 14),
  POS(913, 14),
  POS(912, 7)
};

static FUNCTION_INFO i_lambda_TEMPORARY = {
  t_lambda_TEMPORARY, NULL, 5, 0,
  {}
};

static TAB_NUM t_lambda_167[] = {
  2, // locals
  0, // parameters
  // second(info).is_defined
  var_second, 1, var_911_8_info, 1, LOCAL(1),
  // is_defined
  var_is_defined, 1, LOCAL(1), 1, LOCAL(2),
  // second(info).is_defined
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(913, 28),
  POS(913, 41),
  POS(913, 28)
};

static FUNCTION_INFO i_lambda_167 = {
  t_lambda_167, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_168[] = {
  2, // locals
  0, // parameters
  // second(info))
  var_second, 1, var_911_8_info, 1, LOCAL(1),
  // mangled_literals(second(info))
  var_mangled_literals, 1, LOCAL(1), 1, LOCAL(2),
  //  mangled_literals(second(info))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(914, 29),
  POS(914, 12),
  POS(914, 11)
};

static FUNCTION_INFO i_lambda_168 = {
  t_lambda_168, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_169[] = {
  2, // locals
  0, // parameters
  // no_of(self)))"
  var_no_of, 1, var_908_18_self, 1, LOCAL(1),
  // "LOCAL(@(no_of(self)))"
  var_std__string, 3, str_LOCAL, LOCAL(1), string_31, 1, LOCAL(2),
  //  "LOCAL(@(no_of(self)))"
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(915, 21),
  POS(915, 12),
  POS(915, 11)
};

static FUNCTION_INFO i_lambda_169 = {
  t_lambda_169, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_CONSTANT[] = {
  1, // locals
  0, // parameters
  // mangled_literals(self)
  var_mangled_literals, 1, var_908_18_self, 1, LOCAL(1),
  //  mangled_literals(self)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(916, 17),
  POS(916, 16)
};

static FUNCTION_INFO i_lambda_CONSTANT = {
  t_lambda_CONSTANT, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_170[] = {
  3, // locals
  0, // parameters
  // $identifier identifier_of(self)
  var_identifier_of, 1, var_908_18_self, 1, var_918_8_identifier,
  // variables(identifier) $kind $value
  var_variables, 1, var_918_8_identifier, 1, LOCAL(1),
  // variables(identifier) $kind $value
  LOCAL(1), 0, 2, var_919_30_kind, var_919_36_value,
  // INITIALIZED, INITIALIZED_COMPOUND
  var_std__sequence, 2, var_INITIALIZED, var_INITIALIZED_COMPOUND, 1, LOCAL(1),
  // sequence
  var_sequence, 7, var_DERIVED, var_DYNAMIC, var_EXTERN, var_EXTERN_POLYMORPHIC, LOCAL(1), var_ATTRIBUTE, var_ATTRIBUTE_WITH_SETTER, 1, LOCAL(2),
  // CONSTANT, CONSTANT_COMPOUND -> mangled_literals(value)
  var_std__sequence, 2, var_CONSTANT, var_CONSTANT_COMPOUND, 1, LOCAL(3),
  // case kind
  var_case, 8, var_919_30_kind, var_LOCAL, lambda_LOCAL, LOCAL(2), lambda_171, LOCAL(3), lambda_172, lambda_173, TAIL_CALL,
  POS(918, 7),
  POS(919, 7),
  POS(919, 7),
  POS(927, 11),
  POS(922, 9),
  POS(932, 9),
  POS(920, 7)
};

static FUNCTION_INFO i_lambda_170 = {
  t_lambda_170, NULL, 7, 0,
  {}
};

static TAB_NUM t_lambda_LOCAL[] = {
  3, // locals
  0, // parameters
  // local_mapping(identifier)))"
  var_local_mapping, 1, var_918_8_identifier, 1, LOCAL(1),
  // temp_count+local_mapping(identifier)))"
  var_std__plus, 2, var_temp_count, LOCAL(1), 1, LOCAL(2),
  // "LOCAL(@(temp_count+local_mapping(identifier)))"
  var_std__string, 3, str_LOCAL, LOCAL(2), string_31, 1, LOCAL(3),
  //  "LOCAL(@(temp_count+local_mapping(identifier)))"
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(921, 38),
  POS(921, 27),
  POS(921, 18),
  POS(921, 17)
};

static FUNCTION_INFO i_lambda_LOCAL = {
  t_lambda_LOCAL, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_171[] = {
  2, // locals
  0, // parameters
  // mangle_identifier(identifier))
  var_mangle_identifier, 1, var_918_8_identifier, 1, LOCAL(1),
  // append("var_" mangle_identifier(identifier))
  var_append, 2, str_var, LOCAL(1), 1, LOCAL(2),
  // 
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(931, 25),
  POS(931, 11),
  POS(930, 11)
};

static FUNCTION_INFO i_lambda_171 = {
  t_lambda_171, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_172[] = {
  1, // locals
  0, // parameters
  // mangled_literals(value)
  var_mangled_literals, 1, var_919_36_value, 1, LOCAL(1),
  //  mangled_literals(value)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(932, 40),
  POS(932, 39)
};

static FUNCTION_INFO i_lambda_172 = {
  t_lambda_172, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_173[] = {
  0, // locals
  0, // parameters
  // debug::dump `kind
  var_debug__dump, 2, str_kind, var_919_30_kind, 0,
  // debug::dump `value
  var_debug__dump, 2, str_value, var_919_36_value, 0,
  // debug::exit
  var_debug__exit, 0, TAIL_CALL,
  POS(934, 11),
  POS(935, 11),
  POS(936, 11)
};

static FUNCTION_INFO i_lambda_173 = {
  t_lambda_173, NULL, 3, 0,
  {}
};

static TAB_NUM t_func_get_literal[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 948_16_self
  // mangled_literals(self)
  var_mangled_literals, 1, LOCAL(2), 1, LOCAL(1),
  // -> mangled_literals(self)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(949, 6),
  POS(949, 3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_get_literal = {
  t_func_get_literal, NULL, 2, 1,
  {"948_16_self\000"}
};

static TAB_NUM t_func_check_mangling[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 951_19_name
  // $n mangling_counter(name)
  var_mangling_counter, 1, LOCAL(2), 1, var_952_4_n,
  // is_defined
  var_is_defined, 1, var_952_4_n, 1, LOCAL(1),
  // !n
  var_if, 3, LOCAL(1), lambda_174, lambda_175, 1, var_952_4_n,
  // mangling_counter(name n)
  var_mangling_counter, 2, LOCAL(2), var_952_4_n, 1, LOCAL(1),
  // -> n mangling_counter(name n)
  LET, 2, var_952_4_n, LOCAL(1), TAIL_CALL,
  POS(952, 3),
  POS(955, 9),
  POS(953, 3),
  POS(958, 8),
  POS(958, 3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_check_mangling = {
  t_func_check_mangling, NULL, 5, 1,
  {"951_19_name\000"}
};

static TAB_NUM t_lambda_174[] = {
  1, // locals
  0, // parameters
  // n+1
  var_std__plus, 2, var_952_4_n, num_1, 1, LOCAL(1),
  //  n+1
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(956, 10),
  POS(956, 9)
};

static FUNCTION_INFO i_lambda_174 = {
  t_lambda_174, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_175[] = {
  0, // locals
  0, // parameters
  //  1
  LET, 1, num_1, TAIL_CALL,
  POS(957, 9)
};

static FUNCTION_INFO i_lambda_175 = {
  t_lambda_175, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_remove_trailing_underscores_and_digits[] = {
  0, // locals
  1, // parameters
  var_960_43_str,
  // $n length_of(str)
  var_length_of, 1, var_960_43_str, 1, var_961_4_n,
  // loop:
  var_loop, 1, lambda_loop, TAIL_CALL,
  POS(961, 3),
  POS(962, 3)
};

static FUNCTION_INFO i_func_remove_trailing_underscores_and_digits = {
  t_func_remove_trailing_underscores_and_digits, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_loop[] = {
  1, // locals
  0, // parameters
  // n == 0
  var_std__equal, 2, var_961_4_n, num_0, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_176, lambda_177, TAIL_CALL,
  POS(964, 7),
  POS(963, 5)
};

static FUNCTION_INFO i_lambda_loop = {
  t_lambda_loop, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_176[] = {
  0, // locals
  0, // parameters
  //  ""
  LET, 1, string_6, TAIL_CALL,
  POS(965, 9)
};

static FUNCTION_INFO i_lambda_176 = {
  t_lambda_176, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_177[] = {
  3, // locals
  0, // parameters
  // str(n) == '_' || str(n).is_a_digit:
  var_960_43_str, 1, var_961_4_n, 1, LOCAL(1),
  // str(n) == '_' || str(n).is_a_digit:
  var_std__equal, 2, LOCAL(1), chr_95, 1, LOCAL(2),
  // str(n) == '_' || str(n).is_a_digit:
  var_std__or, 2, LOCAL(2), lambda_178, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_179, lambda_180, TAIL_CALL,
  POS(968, 11),
  POS(968, 11),
  POS(968, 11),
  POS(967, 9)
};

static FUNCTION_INFO i_lambda_177 = {
  t_lambda_177, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_178[] = {
  2, // locals
  0, // parameters
  // str(n).is_a_digit:
  var_960_43_str, 1, var_961_4_n, 1, LOCAL(1),
  // is_a_digit:
  var_is_a_digit, 1, LOCAL(1), 1, LOCAL(2),
  // str(n).is_a_digit:
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(968, 28),
  POS(968, 35),
  POS(968, 28)
};

static FUNCTION_INFO i_lambda_178 = {
  t_lambda_178, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_179[] = {
  0, // locals
  0, // parameters
  // dec &n
  var_dec, 1, var_961_4_n, 1, var_961_4_n,
  // next
  var_next, 0, TAIL_CALL,
  POS(969, 13),
  POS(970, 13)
};

static FUNCTION_INFO i_lambda_179 = {
  t_lambda_179, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_180[] = {
  1, // locals
  0, // parameters
  // range(str 1 n)
  var_range, 3, var_960_43_str, num_1, var_961_4_n, 1, LOCAL(1),
  //  range(str 1 n)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(971, 14),
  POS(971, 13)
};

static FUNCTION_INFO i_lambda_180 = {
  t_lambda_180, NULL, 2, 0,
  {}
};

static TAB_NUM t_func_remove_non_identifier_characters[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 973_37_str
  // $buf ""
  LET, 1, string_6, 1, var_974_4_buf,
  // for_each str
  var_for_each, 3, LOCAL(1), lambda_181, lambda_189, TAIL_CALL,
  POS(974, 3),
  POS(975, 3),
  LOCAL(1)
};

static FUNCTION_INFO i_func_remove_non_identifier_characters = {
  t_func_remove_non_identifier_characters, NULL, 2, 1,
  {"973_37_str\000"}
};

static TAB_NUM t_lambda_181[] = {
  0, // locals
  1, // parameters
  var_976_8_chr,
  // cond
  var_cond, 3, lambda_182, lambda_184, lambda_188, TAIL_CALL,
  POS(977, 7)
};

static FUNCTION_INFO i_lambda_181 = {
  t_lambda_181, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_182[] = {
  1, // locals
  0, // parameters
  // is_a_letter:
  var_is_a_letter, 1, var_976_8_chr, 1, LOCAL(1),
  //  chr.is_a_letter:
  LET, 2, LOCAL(1), lambda_183, TAIL_CALL,
  POS(978, 16),
  POS(978, 11)
};

static FUNCTION_INFO i_lambda_182 = {
  t_lambda_182, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_183[] = {
  0, // locals
  0, // parameters
  // push &buf chr
  var_push, 2, var_974_4_buf, var_976_8_chr, 1, var_974_4_buf,
  // next
  var_next, 0, TAIL_CALL,
  POS(979, 11),
  POS(980, 11)
};

static FUNCTION_INFO i_lambda_183 = {
  t_lambda_183, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_184[] = {
  2, // locals
  0, // parameters
  // is_a_digit || chr == '_':
  var_is_a_digit, 1, var_976_8_chr, 1, LOCAL(1),
  // is_a_digit || chr == '_':
  var_std__or, 2, LOCAL(1), lambda_185, 1, LOCAL(2),
  //  chr.is_a_digit || chr == '_':
  LET, 2, LOCAL(2), lambda_186, TAIL_CALL,
  POS(981, 16),
  POS(981, 16),
  POS(981, 11)
};

static FUNCTION_INFO i_lambda_184 = {
  t_lambda_184, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_185[] = {
  1, // locals
  0, // parameters
  // chr == '_':
  var_std__equal, 2, var_976_8_chr, chr_95, 1, LOCAL(1),
  // chr == '_':
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(981, 30),
  POS(981, 30)
};

static FUNCTION_INFO i_lambda_185 = {
  t_lambda_185, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_186[] = {
  1, // locals
  0, // parameters
  // is_empty # prevent leading digits!
  var_is_empty, 1, var_974_4_buf, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), var_next, lambda_187, TAIL_CALL,
  POS(983, 17),
  POS(982, 11)
};

static FUNCTION_INFO i_lambda_186 = {
  t_lambda_186, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_187[] = {
  0, // locals
  0, // parameters
  // push &buf chr
  var_push, 2, var_974_4_buf, var_976_8_chr, 1, var_974_4_buf,
  // next
  var_next, 0, TAIL_CALL,
  POS(986, 15),
  POS(987, 15)
};

static FUNCTION_INFO i_lambda_187 = {
  t_lambda_187, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_188[] = {
  0, // locals
  0, // parameters
  //  true next
  LET, 2, var_true, var_next, TAIL_CALL,
  POS(988, 11)
};

static FUNCTION_INFO i_lambda_188 = {
  t_lambda_188, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_189[] = {
  0, // locals
  0, // parameters
  //  buf
  LET, 1, var_974_4_buf, TAIL_CALL,
  POS(989, 7)
};

static FUNCTION_INFO i_lambda_189 = {
  t_lambda_189, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_is_local_or_constant[] = {
  2, // locals
  1, // parameters
  var_993_25_kind,
  // kind == LOCAL || kind == CONSTANT || kind == CONSTANT_COMPOUND
  var_std__equal, 2, var_993_25_kind, var_LOCAL, 1, LOCAL(1),
  // kind == LOCAL || kind == CONSTANT || kind == CONSTANT_COMPOUND
  var_std__or, 2, LOCAL(1), lambda_190, 1, LOCAL(2),
  // -> kind == LOCAL || kind == CONSTANT || kind == CONSTANT_COMPOUND
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(994, 6),
  POS(994, 6),
  POS(994, 3)
};

static FUNCTION_INFO i_func_is_local_or_constant = {
  t_func_is_local_or_constant, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_190[] = {
  2, // locals
  0, // parameters
  // kind == CONSTANT || kind == CONSTANT_COMPOUND
  var_std__equal, 2, var_993_25_kind, var_CONSTANT, 1, LOCAL(1),
  // kind == CONSTANT || kind == CONSTANT_COMPOUND
  var_std__or, 2, LOCAL(1), lambda_191, 1, LOCAL(2),
  // kind == CONSTANT || kind == CONSTANT_COMPOUND
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(994, 23),
  POS(994, 23),
  POS(994, 23)
};

static FUNCTION_INFO i_lambda_190 = {
  t_lambda_190, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_191[] = {
  1, // locals
  0, // parameters
  // kind == CONSTANT_COMPOUND
  var_std__equal, 2, var_993_25_kind, var_CONSTANT_COMPOUND, 1, LOCAL(1),
  // kind == CONSTANT_COMPOUND
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(994, 43),
  POS(994, 43)
};

static FUNCTION_INFO i_lambda_191 = {
  t_lambda_191, NULL, 2, 0,
  {}
};

static TAB_NUM t_func_collect_types[] = {
  1, // locals
  2, // parameters
  var_996_18_types,
  LOCAL(1), // 996_24_statements
  // for_each statements
  var_for_each, 3, LOCAL(1), lambda_192, lambda_211, TAIL_CALL,
  POS(997, 3),
  LOCAL(1)
};

static FUNCTION_INFO i_func_collect_types = {
  t_func_collect_types, NULL, 1, 1,
  {"996_24_statements\000"}
};

static TAB_NUM t_lambda_192[] = {
  2, // locals
  1, // parameters
  var_998_8_statement,
  // node_type_of(statement) == STATEMENT:
  var_node_type_of, 1, var_998_8_statement, 1, LOCAL(1),
  // node_type_of(statement) == STATEMENT:
  var_std__equal, 2, LOCAL(1), var_STATEMENT, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_193, var_next, TAIL_CALL,
  POS(1000, 9),
  POS(1000, 9),
  POS(999, 7)
};

static FUNCTION_INFO i_lambda_192 = {
  t_lambda_192, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_193[] = {
  1, // locals
  0, // parameters
  // arguments_of(statement)
  var_arguments_of, 1, var_998_8_statement, 1, LOCAL(1),
  // for_each arguments_of(statement)
  var_for_each, 3, LOCAL(1), lambda_194, func_check_types, TAIL_CALL,
  POS(1001, 20),
  POS(1001, 11)
};

static FUNCTION_INFO i_lambda_193 = {
  t_lambda_193, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_194[] = {
  2, // locals
  1, // parameters
  var_1002_16_argument,
  // node_type_of(argument)
  var_node_type_of, 1, var_1002_16_argument, 1, LOCAL(1),
  // METHOD_VALUE_PAIR, ATTRIBUTE_VALUE_PAIR:
  var_std__sequence, 2, var_METHOD_VALUE_PAIR, var_ATTRIBUTE_VALUE_PAIR, 1, LOCAL(2),
  // case node_type_of(argument)
  var_case, 6, LOCAL(1), var_BODY, lambda_BODY, LOCAL(2), lambda_195, var_next, TAIL_CALL,
  POS(1003, 20),
  POS(1007, 17),
  POS(1003, 15)
};

static FUNCTION_INFO i_lambda_194 = {
  t_lambda_194, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_BODY[] = {
  1, // locals
  0, // parameters
  // statements_of(argument)
  var_statements_of, 1, var_1002_16_argument, 1, LOCAL(1),
  // collect_types &types statements_of(argument)
  func_collect_types, 2, var_996_18_types, LOCAL(1), 1, var_996_18_types,
  // next
  var_next, 0, TAIL_CALL,
  POS(1005, 40),
  POS(1005, 19),
  POS(1006, 19)
};

static FUNCTION_INFO i_lambda_BODY = {
  t_lambda_BODY, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_195[] = {
  3, // locals
  0, // parameters
  // argument_of(argument)) == BODY:
  var_argument_of, 1, var_1002_16_argument, 1, LOCAL(1),
  // node_type_of(argument_of(argument)) == BODY:
  var_node_type_of, 1, LOCAL(1), 1, LOCAL(2),
  // node_type_of(argument_of(argument)) == BODY:
  var_std__equal, 2, LOCAL(2), var_BODY, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_196, var_next, TAIL_CALL,
  POS(1009, 34),
  POS(1009, 21),
  POS(1009, 21),
  POS(1008, 19)
};

static FUNCTION_INFO i_lambda_195 = {
  t_lambda_195, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_196[] = {
  2, // locals
  0, // parameters
  // argument_of(argument))
  var_argument_of, 1, var_1002_16_argument, 1, LOCAL(1),
  // statements_of(argument_of(argument))
  var_statements_of, 1, LOCAL(1), 1, LOCAL(2),
  // collect_types &types statements_of(argument_of(argument))
  func_collect_types, 2, var_996_18_types, LOCAL(2), 1, var_996_18_types,
  // next
  var_next, 0, TAIL_CALL,
  POS(1010, 58),
  POS(1010, 44),
  POS(1010, 23),
  POS(1011, 23)
};

static FUNCTION_INFO i_lambda_196 = {
  t_lambda_196, NULL, 4, 0,
  {}
};

static TAB_NUM t_func_check_types[] = {
  2, // locals
  0, // parameters
  // $arguments arguments_of(statement)
  var_arguments_of, 1, var_998_8_statement, 1, var_1018_10_arguments,
  // head_of(statement))
  var_head_of, 1, var_998_8_statement, 1, LOCAL(1),
  // $functor_name identifier_of(head_of(statement))
  var_identifier_of, 1, LOCAL(1), 1, var_1019_10_functor_name,
  // is_not_empty
  var_is_not_empty, 1, var_1018_10_arguments, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_197, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_199, var_next, TAIL_CALL,
  POS(1018, 9),
  POS(1019, 37),
  POS(1019, 9),
  POS(1022, 23),
  POS(1021, 13),
  POS(1020, 9)
};

static FUNCTION_INFO i_func_check_types = {
  t_func_check_types, NULL, 6, 0,
  {}
};

static TAB_NUM t_lambda_197[] = {
  4, // locals
  0, // parameters
  // arguments(-1)) == DEFINITION
  var_1018_10_arguments, 1, minus_num_1, 1, LOCAL(1),
  // node_type_of(arguments(-1)) == DEFINITION
  var_node_type_of, 1, LOCAL(1), 1, LOCAL(2),
  // node_type_of(arguments(-1)) == DEFINITION
  var_std__equal, 2, LOCAL(2), var_DEFINITION, 1, LOCAL(3),
  // 
  var_std__and, 2, LOCAL(3), lambda_198, 1, LOCAL(4),
  // node_type_of(arguments(-1)) == DEFINITION
  LET, 1, LOCAL(4), TAIL_CALL,
  POS(1023, 26),
  POS(1023, 13),
  POS(1023, 13),
  POS(1021, 13),
  POS(1023, 13)
};

static FUNCTION_INFO i_lambda_197 = {
  t_lambda_197, NULL, 5, 0,
  {}
};

static TAB_NUM t_lambda_198[] = {
  1, // locals
  0, // parameters
  // functor_name == "std::assign"
  var_std__equal, 2, var_1019_10_functor_name, str_stdassign, 1, LOCAL(1),
  // functor_name == "std::assign"
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1024, 13),
  POS(1024, 13)
};

static FUNCTION_INFO i_lambda_198 = {
  t_lambda_198, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_199[] = {
  1, // locals
  0, // parameters
  // range(arguments 1 -2)
  var_range, 3, var_1018_10_arguments, num_1, minus_num_2, 1, LOCAL(1),
  // for_each range(arguments 1 -2)
  var_for_each, 3, LOCAL(1), lambda_200, var_next, TAIL_CALL,
  POS(1026, 22),
  POS(1026, 13)
};

static FUNCTION_INFO i_lambda_199 = {
  t_lambda_199, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_200[] = {
  1, // locals
  1, // parameters
  var_1027_18_argument,
  // node_type_of(argument)
  var_node_type_of, 1, var_1027_18_argument, 1, LOCAL(1),
  // case node_type_of(argument)
  var_case, 8, LOCAL(1), var_TYPE_FUNCTION, lambda_TYPE_FUNCTION, var_ATTRIBUTE_VALUE_PAIR, lambda_ATTRIBUTE_VALUE_PAIR, var_METHOD_VALUE_PAIR, lambda_METHOD_VALUE_PAIR, var_next, TAIL_CALL,
  POS(1028, 22),
  POS(1028, 17)
};

static FUNCTION_INFO i_lambda_200 = {
  t_lambda_200, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_TYPE_FUNCTION[] = {
  4, // locals
  0, // parameters
  // parameters_of(argument).is_empty
  var_parameters_of, 1, var_1027_18_argument, 1, LOCAL(1),
  // is_empty
  var_is_empty, 1, LOCAL(1), 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_201, 1, LOCAL(3),
  // $value_idx
  var_if, 3, LOCAL(3), lambda_203, lambda_206, 1, LOCAL(4),
  // add "TYPE_FUNCTION" value_idx
  func_add, 2, str_TYPE_FUNCTION, LOCAL(4), TAIL_CALL,
  POS(1033, 27),
  POS(1033, 51),
  POS(1032, 27),
  POS(1030, 21),
  POS(1045, 21),
  LOCAL(4)
};

static FUNCTION_INFO i_lambda_TYPE_FUNCTION = {
  t_lambda_TYPE_FUNCTION, NULL, 5, 1,
  {"1030_22_value_idx\000"}
};

static TAB_NUM t_lambda_201[] = {
  4, // locals
  0, // parameters
  // statements_of(argument)) == 1
  var_statements_of, 1, var_1027_18_argument, 1, LOCAL(1),
  // length_of(statements_of(argument)) == 1
  var_length_of, 1, LOCAL(1), 1, LOCAL(2),
  // length_of(statements_of(argument)) == 1
  var_std__equal, 2, LOCAL(2), num_1, 1, LOCAL(3),
  // 
  var_std__and, 2, LOCAL(3), lambda_202, 1, LOCAL(4),
  // length_of(statements_of(argument)) == 1
  LET, 1, LOCAL(4), TAIL_CALL,
  POS(1034, 37),
  POS(1034, 27),
  POS(1034, 27),
  POS(1032, 27),
  POS(1034, 27)
};

static FUNCTION_INFO i_lambda_201 = {
  t_lambda_201, NULL, 5, 0,
  {}
};

static TAB_NUM t_lambda_202[] = {
  4, // locals
  0, // parameters
  // statements_of(argument)(1)).is_empty
  var_statements_of, 1, var_1027_18_argument, 1, LOCAL(1),
  // statements_of(argument)(1)).is_empty
  LOCAL(1), 1, num_1, 1, LOCAL(2),
  // arguments_of(statements_of(argument)(1)).is_empty
  var_arguments_of, 1, LOCAL(2), 1, LOCAL(3),
  // is_empty
  var_is_empty, 1, LOCAL(3), 1, LOCAL(4),
  // arguments_of(statements_of(argument)(1)).is_empty
  LET, 1, LOCAL(4), TAIL_CALL,
  POS(1035, 40),
  POS(1035, 40),
  POS(1035, 27),
  POS(1035, 68),
  POS(1035, 27)
};

static FUNCTION_INFO i_lambda_202 = {
  t_lambda_202, NULL, 5, 0,
  {}
};

static TAB_NUM t_lambda_203[] = {
  4, // locals
  0, // parameters
  // statements_of(argument)(1))
  var_statements_of, 1, var_1027_18_argument, 1, LOCAL(1),
  // statements_of(argument)(1))
  LOCAL(1), 1, num_1, 1, LOCAL(2),
  // $reference head_of(statements_of(argument)(1))
  var_head_of, 1, LOCAL(2), 1, LOCAL(3),
  // $identifier identifier_of(reference)
  var_identifier_of, 1, LOCAL(3), 1, var_1038_28_identifier,
  // variables(identifier) $kind $constant_value
  var_variables, 1, var_1038_28_identifier, 1, LOCAL(1),
  // variables(identifier) $kind $constant_value
  LOCAL(1), 0, 2, LOCAL(4), var_1039_56_constant_value,
  // CONSTANT, CONSTANT_COMPOUND
  var_std__sequence, 2, var_CONSTANT, var_CONSTANT_COMPOUND, 1, LOCAL(1),
  // case kind
  var_case, 4, LOCAL(4), LOCAL(1), lambda_204, lambda_205, TAIL_CALL,
  POS(1037, 46),
  POS(1037, 46),
  POS(1037, 27),
  POS(1038, 27),
  POS(1039, 27),
  POS(1039, 27),
  POS(1041, 29),
  POS(1040, 27),
  LOCAL(3),
  LOCAL(4)
};

static FUNCTION_INFO i_lambda_203 = {
  t_lambda_203, NULL, 8, 2,
  {"1037_28_reference\000", "1039_50_kind\000"}
};

static TAB_NUM t_lambda_204[] = {
  1, // locals
  0, // parameters
  // mangled_literals(constant_value)
  var_mangled_literals, 1, var_1039_56_constant_value, 1, LOCAL(1),
  //  mangled_literals(constant_value)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1042, 32),
  POS(1042, 31)
};

static FUNCTION_INFO i_lambda_204 = {
  t_lambda_204, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_205[] = {
  2, // locals
  0, // parameters
  // mangle_identifier(identifier))
  var_mangle_identifier, 1, var_1038_28_identifier, 1, LOCAL(1),
  // append("var_" mangle_identifier(identifier))
  var_append, 2, str_var, LOCAL(1), 1, LOCAL(2),
  //  append("var_" mangle_identifier(identifier))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1043, 46),
  POS(1043, 32),
  POS(1043, 31)
};

static FUNCTION_INFO i_lambda_205 = {
  t_lambda_205, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_206[] = {
  1, // locals
  0, // parameters
  // mangled_literals(argument)
  var_mangled_literals, 1, var_1027_18_argument, 1, LOCAL(1),
  //  mangled_literals(argument)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1044, 28),
  POS(1044, 27)
};

static FUNCTION_INFO i_lambda_206 = {
  t_lambda_206, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_ATTRIBUTE_VALUE_PAIR[] = {
  0, // locals
  0, // parameters
  // add_method "-"
  func_add_method, 1, string_44, TAIL_CALL,
  POS(1047, 21)
};

static FUNCTION_INFO i_lambda_ATTRIBUTE_VALUE_PAIR = {
  t_lambda_ATTRIBUTE_VALUE_PAIR, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_METHOD_VALUE_PAIR[] = {
  0, // locals
  0, // parameters
  // add_method
  func_add_method, 0, TAIL_CALL,
  POS(1049, 21)
};

static FUNCTION_INFO i_lambda_METHOD_VALUE_PAIR = {
  t_lambda_METHOD_VALUE_PAIR, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_add_method[] = {
  5, // locals
  -1, // parameters
  string_6, LOCAL(3), // 1052_31_prefix
  // identifier_of(argument))
  var_identifier_of, 1, var_1027_18_argument, 1, LOCAL(1),
  // $method mangle_identifier(identifier_of(argument))
  var_mangle_identifier, 1, LOCAL(1), 1, LOCAL(4),
  // $value argument_of(argument)
  var_argument_of, 1, var_1027_18_argument, 1, var_1054_20_value,
  // node_type_of(value) == FUNCTOR:
  var_node_type_of, 1, var_1054_20_value, 1, LOCAL(1),
  // node_type_of(value) == FUNCTOR:
  var_std__equal, 2, LOCAL(1), var_FUNCTOR, 1, LOCAL(2),
  // $value_idx
  var_if, 3, LOCAL(2), lambda_207, lambda_210, 1, LOCAL(5),
  // append(prefix "var_" method) value_idx
  var_append, 3, LOCAL(3), str_var, LOCAL(4), 1, LOCAL(1),
  // add append(prefix "var_" method) value_idx
  func_add, 2, LOCAL(1), LOCAL(5), TAIL_CALL,
  POS(1053, 45),
  POS(1053, 19),
  POS(1054, 19),
  POS(1057, 23),
  POS(1057, 23),
  POS(1055, 19),
  POS(1065, 23),
  POS(1065, 19),
  LOCAL(4),
  LOCAL(5),
  LOCAL(3)
};

static FUNCTION_INFO i_func_add_method = {
  t_func_add_method, NULL, 8, 3,
  {"1053_20_method\000", "1055_20_value_idx\000", "1052_31_prefix\000"}
};

static TAB_NUM t_lambda_207[] = {
  2, // locals
  0, // parameters
  // $identifier identifier_of(value)
  var_identifier_of, 1, var_1054_20_value, 1, var_1058_26_identifier,
  // variables(identifier) $kind $constant_value
  var_variables, 1, var_1058_26_identifier, 1, LOCAL(1),
  // variables(identifier) $kind $constant_value
  LOCAL(1), 0, 2, LOCAL(2), var_1059_54_constant_value,
  // CONSTANT, CONSTANT_COMPOUND
  var_std__sequence, 2, var_CONSTANT, var_CONSTANT_COMPOUND, 1, LOCAL(1),
  // case kind
  var_case, 4, LOCAL(2), LOCAL(1), lambda_208, lambda_209, TAIL_CALL,
  POS(1058, 25),
  POS(1059, 25),
  POS(1059, 25),
  POS(1061, 27),
  POS(1060, 25),
  LOCAL(2)
};

static FUNCTION_INFO i_lambda_207 = {
  t_lambda_207, NULL, 5, 1,
  {"1059_48_kind\000"}
};

static TAB_NUM t_lambda_208[] = {
  1, // locals
  0, // parameters
  // mangled_literals(constant_value)
  var_mangled_literals, 1, var_1059_54_constant_value, 1, LOCAL(1),
  //  mangled_literals(constant_value)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1062, 30),
  POS(1062, 29)
};

static FUNCTION_INFO i_lambda_208 = {
  t_lambda_208, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_209[] = {
  2, // locals
  0, // parameters
  // mangle_identifier(identifier))
  var_mangle_identifier, 1, var_1058_26_identifier, 1, LOCAL(1),
  // append("var_" mangle_identifier(identifier))
  var_append, 2, str_var, LOCAL(1), 1, LOCAL(2),
  //  append("var_" mangle_identifier(identifier))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1063, 44),
  POS(1063, 30),
  POS(1063, 29)
};

static FUNCTION_INFO i_lambda_209 = {
  t_lambda_209, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_210[] = {
  1, // locals
  0, // parameters
  // mangled_literals(value)
  var_mangled_literals, 1, var_1054_20_value, 1, LOCAL(1),
  //  mangled_literals(value)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1064, 26),
  POS(1064, 25)
};

static FUNCTION_INFO i_lambda_210 = {
  t_lambda_210, NULL, 2, 0,
  {}
};

static TAB_NUM t_func_add[] = {
  7, // locals
  2, // parameters
  LOCAL(4), // 1067_24_method
  LOCAL(5), // 1067_31_value_idx
  // arguments(-1)))
  var_1018_10_arguments, 1, minus_num_1, 1, LOCAL(1),
  // identifier_of(arguments(-1)))
  var_identifier_of, 1, LOCAL(1), 1, LOCAL(2),
  // $type mangle_identifier(identifier_of(arguments(-1)))
  var_mangle_identifier, 1, LOCAL(2), 1, LOCAL(6),
  // types(type) empty_list)
  var_996_18_types, 1, LOCAL(6), 1, LOCAL(1),
  // $methods default_value(types(type) empty_list)
  var_default_value, 2, LOCAL(1), var_empty_list, 1, LOCAL(7),
  // tuple(method value_idx))
  var_tuple, 2, LOCAL(4), LOCAL(5), 1, LOCAL(1),
  // !types(type) push(methods tuple(method value_idx))
  var_push, 2, LOCAL(7), LOCAL(1), 1, LOCAL(3),
  // types(type) push(methods tuple(method value_idx))
  var_996_18_types, 2, LOCAL(6), LOCAL(3), 1, var_996_18_types,
  // next
  var_next, 0, TAIL_CALL,
  POS(1068, 57),
  POS(1068, 43),
  POS(1068, 19),
  POS(1069, 42),
  POS(1069, 19),
  POS(1070, 45),
  POS(1070, 19),
  POS(1070, 20),
  POS(1071, 19),
  LOCAL(4),
  LOCAL(5),
  LOCAL(7),
  LOCAL(6)
};

static FUNCTION_INFO i_func_add = {
  t_func_add, NULL, 9, 4,
  {"1067_24_method\000", "1067_31_value_idx\000", "1069_20_methods\000", "1068_20_type\000"}
};

static TAB_NUM t_lambda_211[] = {
  0, // locals
  0, // parameters
  //  types
  LET, 1, var_996_18_types, TAIL_CALL,
  POS(1074, 7)
};

static FUNCTION_INFO i_lambda_211 = {
  t_lambda_211, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_funky__mangle_identifier[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 1078_29_identifier
  // replace_all
  var_replace_all, 4, LOCAL(1), key_value_pair_739_12, key_value_pair_740_12, key_value_pair_1083_6, TAIL_CALL,
  POS(1079, 3),
  LOCAL(1)
};

static FUNCTION_INFO i_func_funky__mangle_identifier = {
  t_func_funky__mangle_identifier, NULL, 1, 1,
  {"1078_29_identifier\000"}
};

static TAB_NUM t_func_to_c_string[] = {
  0, // locals
  1, // parameters
  var_1085_16_str,
  // $buf ""
  LET, 1, string_6, 1, var_1086_4_buf,
  // $s 1
  LET, 1, num_1, 1, var_1087_4_s,
  // for_each str
  var_for_each, 3, var_1085_16_str, lambda_212, lambda_217, TAIL_CALL,
  POS(1086, 3),
  POS(1087, 3),
  POS(1088, 3)
};

static FUNCTION_INFO i_func_to_c_string = {
  t_func_to_c_string, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_212[] = {
  2, // locals
  2, // parameters
  var_1089_8_idx,
  var_1089_12_chr,
  // chr < ' ' || chr > '~' || chr == '@quot;' || chr == '\':
  var_std__less, 2, var_1089_12_chr, chr_32, 1, LOCAL(1),
  // chr < ' ' || chr > '~' || chr == '@quot;' || chr == '\':
  var_std__or, 2, LOCAL(1), lambda_213, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_216, var_next, TAIL_CALL,
  POS(1091, 9),
  POS(1091, 9),
  POS(1090, 7)
};

static FUNCTION_INFO i_lambda_212 = {
  t_lambda_212, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_213[] = {
  2, // locals
  0, // parameters
  // ~' || chr == '@quot;' || chr == '\':
  var_std__less, 2, chr_126, var_1089_12_chr, 1, LOCAL(1),
  // ~' || chr == '@quot;' || chr == '\':
  var_std__or, 2, LOCAL(1), lambda_214, 1, LOCAL(2),
  // chr > '~' || chr == '@quot;' || chr == '\':
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1091, 29),
  POS(1091, 29),
  POS(1091, 22)
};

static FUNCTION_INFO i_lambda_213 = {
  t_lambda_213, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_214[] = {
  2, // locals
  0, // parameters
  // chr == '@quot;' || chr == '\':
  var_std__equal, 2, var_1089_12_chr, chr_34, 1, LOCAL(1),
  // chr == '@quot;' || chr == '\':
  var_std__or, 2, LOCAL(1), lambda_215, 1, LOCAL(2),
  // chr == '@quot;' || chr == '\':
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1091, 35),
  POS(1091, 35),
  POS(1091, 35)
};

static FUNCTION_INFO i_lambda_214 = {
  t_lambda_214, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_215[] = {
  1, // locals
  0, // parameters
  // chr == '\':
  var_std__equal, 2, var_1089_12_chr, chr_92, 1, LOCAL(1),
  // chr == '\':
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1091, 54),
  POS(1091, 54)
};

static FUNCTION_INFO i_lambda_215 = {
  t_lambda_215, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_216[] = {
  3, // locals
  0, // parameters
  // idx-1)
  var_std__minus, 2, var_1089_8_idx, num_1, 1, LOCAL(1),
  // range(str s idx-1)
  var_range, 3, var_1085_16_str, var_1087_4_s, LOCAL(1), 1, LOCAL(2),
  // append &buf range(str s idx-1)
  var_append, 2, var_1086_4_buf, LOCAL(2), 1, var_1086_4_buf,
  // to_integer) 3 "0")
  var_to_integer, 1, var_1089_12_chr, 1, LOCAL(1),
  // oct(chr.to_integer) 3 "0")
  var_oct, 1, LOCAL(1), 1, LOCAL(2),
  // pad_left(oct(chr.to_integer) 3 "0")
  var_pad_left, 3, LOCAL(2), num_3, string_23, 1, LOCAL(3),
  // append &buf "\" pad_left(oct(chr.to_integer) 3 "0")
  var_append, 3, var_1086_4_buf, string_49, LOCAL(3), 1, var_1086_4_buf,
  // !s idx+1
  var_std__plus, 2, var_1089_8_idx, num_1, 1, var_1087_4_s,
  // next
  var_next, 0, TAIL_CALL,
  POS(1092, 35),
  POS(1092, 23),
  POS(1092, 11),
  POS(1093, 44),
  POS(1093, 36),
  POS(1093, 27),
  POS(1093, 11),
  POS(1094, 11),
  POS(1095, 11)
};

static FUNCTION_INFO i_lambda_216 = {
  t_lambda_216, NULL, 9, 0,
  {}
};

static TAB_NUM t_lambda_217[] = {
  3, // locals
  0, // parameters
  // length_of(str)
  var_length_of, 1, var_1085_16_str, 1, LOCAL(1),
  // length_of(str)
  var_std__less, 2, LOCAL(1), var_1087_4_s, 1, LOCAL(2),
  // length_of(str)
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_218, lambda_219, TAIL_CALL,
  POS(1099, 14),
  POS(1099, 14),
  POS(1099, 14),
  POS(1098, 7)
};

static FUNCTION_INFO i_lambda_217 = {
  t_lambda_217, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_218[] = {
  2, // locals
  0, // parameters
  // range(str s -1))
  var_range, 3, var_1085_16_str, var_1087_4_s, minus_num_1, 1, LOCAL(1),
  // append(buf range(str s -1))
  var_append, 2, var_1086_4_buf, LOCAL(1), 1, LOCAL(2),
  //  append(buf range(str s -1))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1100, 23),
  POS(1100, 12),
  POS(1100, 11)
};

static FUNCTION_INFO i_lambda_218 = {
  t_lambda_218, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_219[] = {
  0, // locals
  0, // parameters
  //  buf
  LET, 1, var_1086_4_buf, TAIL_CALL,
  POS(1101, 11)
};

static FUNCTION_INFO i_lambda_219 = {
  t_lambda_219, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_to_c_string_32[] = {
  0, // locals
  1, // parameters
  var_1103_19_str,
  // $buf ""
  LET, 1, string_6, 1, var_1104_4_buf,
  // $s 1
  LET, 1, num_1, 1, var_1105_4_s,
  // for_each str
  var_for_each, 3, var_1103_19_str, lambda_220, lambda_229, TAIL_CALL,
  POS(1104, 3),
  POS(1105, 3),
  POS(1106, 3)
};

static FUNCTION_INFO i_func_to_c_string_32 = {
  t_func_to_c_string_32, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_220[] = {
  2, // locals
  2, // parameters
  var_1107_8_idx,
  var_1107_12_chr,
  // chr < ' ' || chr > '~' || chr == '@quot;' || chr == '\':
  var_std__less, 2, var_1107_12_chr, chr_32, 1, LOCAL(1),
  // chr < ' ' || chr > '~' || chr == '@quot;' || chr == '\':
  var_std__or, 2, LOCAL(1), lambda_221, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_224, var_next, TAIL_CALL,
  POS(1109, 9),
  POS(1109, 9),
  POS(1108, 7)
};

static FUNCTION_INFO i_lambda_220 = {
  t_lambda_220, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_221[] = {
  2, // locals
  0, // parameters
  // ~' || chr == '@quot;' || chr == '\':
  var_std__less, 2, chr_126, var_1107_12_chr, 1, LOCAL(1),
  // ~' || chr == '@quot;' || chr == '\':
  var_std__or, 2, LOCAL(1), lambda_222, 1, LOCAL(2),
  // chr > '~' || chr == '@quot;' || chr == '\':
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1109, 29),
  POS(1109, 29),
  POS(1109, 22)
};

static FUNCTION_INFO i_lambda_221 = {
  t_lambda_221, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_222[] = {
  2, // locals
  0, // parameters
  // chr == '@quot;' || chr == '\':
  var_std__equal, 2, var_1107_12_chr, chr_34, 1, LOCAL(1),
  // chr == '@quot;' || chr == '\':
  var_std__or, 2, LOCAL(1), lambda_223, 1, LOCAL(2),
  // chr == '@quot;' || chr == '\':
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1109, 35),
  POS(1109, 35),
  POS(1109, 35)
};

static FUNCTION_INFO i_lambda_222 = {
  t_lambda_222, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_223[] = {
  1, // locals
  0, // parameters
  // chr == '\':
  var_std__equal, 2, var_1107_12_chr, chr_92, 1, LOCAL(1),
  // chr == '\':
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1109, 54),
  POS(1109, 54)
};

static FUNCTION_INFO i_lambda_223 = {
  t_lambda_223, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_224[] = {
  2, // locals
  0, // parameters
  // idx-1)
  var_std__minus, 2, var_1107_8_idx, num_1, 1, LOCAL(1),
  // range(str s idx-1)
  var_range, 3, var_1103_19_str, var_1105_4_s, LOCAL(1), 1, LOCAL(2),
  // append &buf range(str s idx-1)
  var_append, 2, var_1104_4_buf, LOCAL(2), 1, var_1104_4_buf,
  // $val chr.to_integer
  var_to_integer, 1, var_1107_12_chr, 1, var_1111_12_val,
  // !s idx+1
  var_std__plus, 2, var_1107_8_idx, num_1, 1, var_1105_4_s,
  // 0xff:
  var_std__less, 2, num_0xff, var_1111_12_val, 1, LOCAL(1),
  // 0xff:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_225, lambda_226, TAIL_CALL,
  POS(1110, 35),
  POS(1110, 23),
  POS(1110, 11),
  POS(1111, 11),
  POS(1112, 11),
  POS(1114, 20),
  POS(1114, 20),
  POS(1113, 11)
};

static FUNCTION_INFO i_lambda_224 = {
  t_lambda_224, NULL, 8, 0,
  {}
};

static TAB_NUM t_lambda_225[] = {
  1, // locals
  0, // parameters
  // oct(val 3)
  var_oct, 2, var_1111_12_val, num_3, 1, LOCAL(1),
  // append &buf "\" oct(val 3)
  var_append, 3, var_1104_4_buf, string_49, LOCAL(1), 1, var_1104_4_buf,
  // next
  var_next, 0, TAIL_CALL,
  POS(1115, 31),
  POS(1115, 15),
  POS(1116, 15)
};

static FUNCTION_INFO i_lambda_225 = {
  t_lambda_225, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_226[] = {
  2, // locals
  0, // parameters
  // 0xffff:
  var_std__less, 2, num_0xffff, var_1111_12_val, 1, LOCAL(1),
  // 0xffff:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_227, lambda_228, TAIL_CALL,
  POS(1119, 24),
  POS(1119, 24),
  POS(1118, 15)
};

static FUNCTION_INFO i_lambda_226 = {
  t_lambda_226, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_227[] = {
  1, // locals
  0, // parameters
  // hex(val 4)
  var_hex, 2, var_1111_12_val, num_4, 1, LOCAL(1),
  // append &buf "\u" hex(val 4)
  var_append, 3, var_1104_4_buf, str_u, LOCAL(1), 1, var_1104_4_buf,
  // next
  var_next, 0, TAIL_CALL,
  POS(1120, 36),
  POS(1120, 19),
  POS(1121, 19)
};

static FUNCTION_INFO i_lambda_227 = {
  t_lambda_227, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_228[] = {
  1, // locals
  0, // parameters
  // hex(val 8)
  var_hex, 2, var_1111_12_val, num_8, 1, LOCAL(1),
  // append &buf "\U" hex(val 8)
  var_append, 3, var_1104_4_buf, str_U, LOCAL(1), 1, var_1104_4_buf,
  // next
  var_next, 0, TAIL_CALL,
  POS(1123, 36),
  POS(1123, 19),
  POS(1124, 19)
};

static FUNCTION_INFO i_lambda_228 = {
  t_lambda_228, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_229[] = {
  3, // locals
  0, // parameters
  // length_of(str)
  var_length_of, 1, var_1103_19_str, 1, LOCAL(1),
  // length_of(str)
  var_std__less, 2, LOCAL(1), var_1105_4_s, 1, LOCAL(2),
  // length_of(str)
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_230, lambda_231, TAIL_CALL,
  POS(1128, 14),
  POS(1128, 14),
  POS(1128, 14),
  POS(1127, 7)
};

static FUNCTION_INFO i_lambda_229 = {
  t_lambda_229, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_230[] = {
  2, // locals
  0, // parameters
  // range(str s -1))
  var_range, 3, var_1103_19_str, var_1105_4_s, minus_num_1, 1, LOCAL(1),
  // append(buf range(str s -1))
  var_append, 2, var_1104_4_buf, LOCAL(1), 1, LOCAL(2),
  //  append(buf range(str s -1))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1129, 23),
  POS(1129, 12),
  POS(1129, 11)
};

static FUNCTION_INFO i_lambda_230 = {
  t_lambda_230, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_231[] = {
  0, // locals
  0, // parameters
  //  buf
  LET, 1, var_1104_4_buf, TAIL_CALL,
  POS(1130, 11)
};

static FUNCTION_INFO i_lambda_231 = {
  t_lambda_231, NULL, 1, 0,
  {}
};

static int key_value_pair_212_22_arguments[] = {
  -chr_95, -string_12
};

static int key_value_pair_349_32_arguments[] = {
  -chr_47, -string_28
};

static int sequence_577_16_arguments[] = {
  -str_stdassign, -str_assign
};

static int key_value_pair_696_32_arguments[] = {
  -chr_46, -string_42
};

static int key_value_pair_737_12_arguments[] = {
  -chr_46, -string_45
};

static int key_value_pair_738_12_arguments[] = {
  -chr_47, -string_45
};

static int key_value_pair_739_12_arguments[] = {
  -string_11, -string_28
};

static int key_value_pair_740_12_arguments[] = {
  -chr_45, -string_28
};

static int key_value_pair_838_52_arguments[] = {
  -string_28, -string_11
};

static int key_value_pair_1083_6_arguments[] = {
  -chr_46, -string_28
};

static FUNKY_CONSTANT constants_table[] = {
  {FLT_FUNCTION, 0, {.func_info = &i_func_funky__generate_tabular_code}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_1}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_2}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_3}},
  {FLT_POSITIVE_INT64, 0, {.value = 1}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_4}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_5}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_6}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_7}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_8}},
  {FLT_STRING_8, 43, {.str_8 = "Main module does not contain any statements"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_9}},
  {FLT_POSITIVE_INT64, 0, {.value = 0}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_10}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_countvariables}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_11}},
  {FLT_STRING_8, 18, {.str_8 = "  constants_table,"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_12}},
  {FLT_STRING_8, 23, {.str_8 = "  NULL, // no constants"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_13}},
  {FLT_STRING_8, 18, {.str_8 = "  variables_table,"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_14}},
  {FLT_STRING_8, 23, {.str_8 = "  NULL, // no variables"}},
  {FLT_STRING_8, 33, {.str_8 = "FEAT_POSITIONS|FEAT_FUNCTION_INFO"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_15}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_feature_flags}},
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
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_16}},
  {FLT_STRING_8, 90, {.str_8 = "\012int main(int argc, char **argv) {\012  main_argc = argc;\012  main_argv = argv;\012  run(&module__"}},
  {FLT_STRING_8, 5, {.str_8 = ");\012}\012"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_17}},
  {FLT_STRING_8, 0, {.str_8 = ""}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_require}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_18}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_19}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_20}},
  {FLT_STRING_8, 2, {.str_8 = "./"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_21}},
  {FLT_CHARACTER, 0, {.value = 47}},
  {FLT_NEGATIVE_INT64, 0, {.value = 1}},
  {FLT_STRING_8, 12, {.str_8 = "/// require "}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_constants_enum}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_22}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_23}},
  {FLT_STRING_8, 7, {.str_8 = "enum {\012"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_24}},
  {FLT_STRING_8, 2, {.str_8 = "  "}},
  {FLT_STRING_8, 3, {.str_8 = " = "}},
  {FLT_STRING_8, 2, {.str_8 = ",\012"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_25}},
  {FLT_NEGATIVE_INT64, 0, {.value = 3}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_compound_constants}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_26}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_27}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_constants_table}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_28}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_29}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_30}},
  {FLT_STRING_8, 45, {.str_8 = "\012static FUNKY_CONSTANT constants_table[] = {\012"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_31}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_32}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_33}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_34}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_35}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_36}},
  {FLT_STRING_8, 55, {.str_8 = "  {FLT_FUNCTION, 0, {.func_info = &i_module_entry}}\012};\012"}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_variables_enum}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_37}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_38}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_39}},
  {FLT_STRING_8, 2, {.str_8 = "::"}},
  {FLT_CHARACTER, 0, {.value = 95}},
  {FLT_STRING_8, 1, {.str_8 = " "}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_212_22_arguments}},
  {FLT_STRING_8, 6, {.str_8 = "  var_"}},
  {FLT_STRING_8, 5, {.str_8 = ", // "}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_40}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_41}},
  {FLT_STRING_8, 35, {.str_8 = "enum {\012  var__START = FIRST_VAR-1,\012"}},
  {FLT_STRING_8, 14, {.str_8 = "  var__END\012};\012"}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_variables_table}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_42}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_kind_is_local_or_constant}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_43}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_EXTERN}},
  {FLT_STRING_8, 7, {.str_8 = "UNKNOWN"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_EXTERN_POLYMORPHIC}},
  {FLT_STRING_8, 19, {.str_8 = "UNKNOWN_POLYMORPHIC"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_44}},
  {FLT_STRING_8, 11, {.str_8 = "POLYMORPHIC"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_45}},
  {FLT_STRING_8, 11, {.str_8 = "INITIALIZED"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_DYNAMIC}},
  {FLT_STRING_8, 13, {.str_8 = "UNINITIALIZED"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_DERIVED}},
  {FLT_STRING_8, 7, {.str_8 = "DERIVED"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_46}},
  {FLT_STRING_8, 4, {.str_8 = "kind"}},
  {FLT_STRING_8, 3, {.str_8 = "???"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_47}},
  {FLT_STRING_8, 21, {.str_8 = ",\012    {.const_idx = -"}},
  {FLT_STRING_8, 1, {.str_8 = "}"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_2_DERIVED}},
  {FLT_STRING_8, 8, {.str_8 = ",\012    {\042"}},
  {FLT_STRING_8, 4, {.str_8 = "\134000"}},
  {FLT_STRING_8, 2, {.str_8 = "\042}"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_ATTRIBUTE}},
  {FLT_STRING_8, 29, {.str_8 = ",\012    {.has_a_setter = false}"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_ATTRIBUTE_WITH_SETTER}},
  {FLT_STRING_8, 28, {.str_8 = ",\012    {.has_a_setter = true}"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_48}},
  {FLT_STRING_8, 19, {.str_8 = ",\012    {.position = "}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_49}},
  {FLT_STRING_8, 12, {.str_8 = "  {\012    FOT_"}},
  {FLT_STRING_8, 5, {.str_8 = ", 0, "}},
  {FLT_STRING_8, 7, {.str_8 = ",\012    \042"}},
  {FLT_STRING_8, 3, {.str_8 = "\042, "}},
  {FLT_STRING_8, 6, {.str_8 = "\012  },\012"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_50}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_51}},
  {FLT_STRING_8, 45, {.str_8 = "\012static FUNKY_VARIABLE variables_table[] = {\012"}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_retrieve_base_and_method_count}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_52}},
  {FLT_STRING_8, 12, {.str_8 = "__attributes"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_53}},
  {FLT_STRING_8, 4, {.str_8 = "NULL"}},
  {FLT_STRING_8, 1, {.str_8 = "0"}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_attributes_tables}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_54}},
  {FLT_STRING_8, 29, {.str_8 = "\012static ATTRIBUTE_DEFINITION "}},
  {FLT_STRING_8, 19, {.str_8 = "__attributes[] = {\012"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_55}},
  {FLT_STRING_8, 3, {.str_8 = "  {"}},
  {FLT_STRING_8, 3, {.str_8 = ", -"}},
  {FLT_STRING_8, 3, {.str_8 = "},\012"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_56}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_57}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_required_modules_table}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_58}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_59}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_required_modules}},
  {FLT_STRING_8, 28, {.str_8 = "extern FUNKY_MODULE module__"}},
  {FLT_STRING_8, 2, {.str_8 = ";\012"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_2_required_modules}},
  {FLT_STRING_8, 11, {.str_8 = "  &module__"}},
  {FLT_STRING_8, 45, {.str_8 = "\012static FUNKY_MODULE *required_modules[] = {\012"}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_mangled_name}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_60}},
  {FLT_STRING_8, 2, {.str_8 = "__"}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_349_32_arguments}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_reference_required_modules}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_61}},
  {FLT_STRING_8, 25, {.str_8 = "NULL, // required modules"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_62}},
  {FLT_STRING_8, 17, {.str_8 = "required_modules,"}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_defined_namespaces_table}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_63}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_64}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_defined_namespaces}},
  {FLT_CHARACTER, 0, {.value = 45}},
  {FLT_STRING_8, 4, {.str_8 = "  {\042"}},
  {FLT_STRING_8, 2, {.str_8 = ", "}},
  {FLT_STRING_8, 49, {.str_8 = "\012static FUNKY_NAMESPACE defined_namespaces[] = {\012"}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_reference_defined_namespaces}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_65}},
  {FLT_STRING_8, 27, {.str_8 = "NULL, // defined namespaces"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_66}},
  {FLT_STRING_8, 19, {.str_8 = "defined_namespaces,"}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_used_namespaces_table}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_used_namespaces}},
  {FLT_STRING_8, 46, {.str_8 = "\012static FUNKY_NAMESPACE used_namespaces[] = {\012"}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_tabular_functions}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_67}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_68}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_69}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_70}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_71}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_72}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_73}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_74}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_75}},
  {FLT_STRING_8, 12, {.str_8 = "module_entry"}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_tabular_function}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_76}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_77}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_78}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_79}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_80}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_81}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_82}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_83}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_84}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_85}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_check_for_locals}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_86}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_87}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_88}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_89}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_90}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_91}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_92}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_93}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_94}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_95}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_96}},
  {FLT_STRING_8, 10, {.str_8 = ",\012  LOCAL("}},
  {FLT_STRING_8, 1, {.str_8 = ")"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_97}},
  {FLT_STRING_8, 1, {.str_8 = "\042"}},
  {FLT_STRING_8, 5, {.str_8 = "\134000\042"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_map_reducestatements}},
  {FLT_STRING_8, 18, {.str_8 = "\012static TAB_NUM t_"}},
  {FLT_STRING_8, 9, {.str_8 = "[] = {\012  "}},
  {FLT_STRING_8, 12, {.str_8 = ", // locals\012"}},
  {FLT_STRING_8, 28, {.str_8 = "\012};\012\012static FUNCTION_INFO i_"}},
  {FLT_STRING_8, 9, {.str_8 = " = {\012  t_"}},
  {FLT_STRING_8, 8, {.str_8 = ", NULL, "}},
  {FLT_STRING_8, 5, {.str_8 = ",\012  {"}},
  {FLT_STRING_8, 5, {.str_8 = "}\012};\012"}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_add_parameters}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_any_ofparameters}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_98}},
  {FLT_STRING_8, 3, {.str_8 = "  -"}},
  {FLT_STRING_8, 16, {.str_8 = ", // parameters\012"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_99}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_add_parameter}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_add_parameter_with_option}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_parameter_to_index}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_100}},
  {FLT_STRING_8, 6, {.str_8 = "LOCAL("}},
  {FLT_STRING_8, 3, {.str_8 = "),\012"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_101}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_102}},
  {FLT_STRING_8, 6, {.str_8 = "), // "}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_103}},
  {FLT_STRING_8, 4, {.str_8 = "var_"}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_compile}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_104}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_105}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_106}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_107}},
  {FLT_STRING_8, 33, {.str_8 = "Last statement is not a tail call"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_108}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_self_is_an_io_call}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_109}},
  {FLT_STRING_8, 12, {.str_8 = "IO_TAIL_CALL"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_110}},
  {FLT_STRING_8, 8, {.str_8 = "IO_CALL("}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_111}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_112}},
  {FLT_STRING_8, 9, {.str_8 = "TAIL_CALL"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_113}},
  {FLT_STRING_8, 5, {.str_8 = "  // "}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_114}},
  {FLT_STRING_8, 11, {.str_8 = "std::assign"}},
  {FLT_STRING_8, 6, {.str_8 = "assign"}},
  {FLT_SEQUENCE, 2, {.arguments = sequence_577_16_arguments}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_115}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_116}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_117}},
  {FLT_STRING_8, 49, {.str_8 = "Return statement not allowed within function body"}},
  {FLT_STRING_8, 7, {.str_8 = "  LET, "}},
  {FLT_STRING_8, 18, {.str_8 = "_assign_attributes"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_assign_attributes}},
  {FLT_STRING_8, 8, {.str_8 = "  LET, -"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_118}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_119}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_120}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_121}},
  {FLT_STRING_8, 24, {.str_8 = "  LET, 1, 0, TAIL_CALL,\012"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_122}},
  {FLT_STRING_8, 21, {.str_8 = "  LET, 0, TAIL_CALL,\012"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_123}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_124}},
  {FLT_STRING_8, 8, {.str_8 = "  LET, 1"}},
  {FLT_STRING_8, 5, {.str_8 = ", 1, "}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_funky_types__node___to_separated_index}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_funky_types__inline_attribute_value_pair___to_separated_index}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_funky_types__inline_method_value_pair___to_separated_index}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_funky_types__attribute_value_pair___to_separated_index}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_funky_types__method_value_pair___to_separated_index}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_funky_types__type_function___to_separated_index}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_funky_types__numeric_literal___add_literal}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_funky_types__character_sequence___add_literal}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_125}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_126}},
  {FLT_POSITIVE_INT64, 0, {.value = 16}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_127}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_128}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_129}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_130}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_131}},
  {FLT_CHARACTER, 0, {.value = 32}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_132}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_133}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_134}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_mangled_is_empty}},
  {FLT_STRING_8, 6, {.str_8 = "string"}},
  {FLT_STRING_8, 7, {.str_8 = "string_"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_135}},
  {FLT_STRING_8, 4, {.str_8 = "str_"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_136}},
  {FLT_STRING_8, 1, {.str_8 = "_"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_137}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_add_mangled}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_funky_types__unique___add_literal}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_funky_types__statement___add_literal}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_funky_types__body___add_literal}},
  {FLT_CHARACTER, 0, {.value = 58}},
  {FLT_STRING_8, 2, {.str_8 = "->"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_138}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_139}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_140}},
  {FLT_CHARACTER, 0, {.value = 36}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_141}},
  {FLT_POSITIVE_INT64, 0, {.value = 2}},
  {FLT_STRING_8, 5, {.str_8 = "func_"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_142}},
  {FLT_CHARACTER, 0, {.value = 46}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_696_32_arguments}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_add_lambda}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_name_is_empty}},
  {FLT_STRING_8, 6, {.str_8 = "lambda"}},
  {FLT_STRING_8, 7, {.str_8 = "lambda_"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_143}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_add_function}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_144}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_145}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_2_add_mangled}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_mangle_versioned_identifier}},
  {FLT_STRING_8, 1, {.str_8 = "-"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_146}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_147}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_148}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_149}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_replace}},
  {FLT_STRING_8, 3, {.str_8 = "___"}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_737_12_arguments}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_738_12_arguments}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_739_12_arguments}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_740_12_arguments}},
  {FLT_STRING_8, 19, {.str_8 = "MANDATORY_PARAMETER"}},
  {FLT_STRING_8, 16, {.str_8 = "MYSELF_PARAMETER"}},
  {FLT_STRING_8, 14, {.str_8 = "REST_PARAMETER"}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_funky_types__initial_value___to_option}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_funky_types__node___add_source_positions}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_funky_types__statement___add_source_positions}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_get_source_position}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_source_group_is_defined}},
  {FLT_STRING_8, 4, {.str_8 = "POS("}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_150}},
  {FLT_STRING_8, 9, {.str_8 = "POS(0, 0)"}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_funky_types__statement___to_compound}},
  {FLT_STRING_8, 12, {.str_8 = "\012static int "}},
  {FLT_STRING_8, 19, {.str_8 = "_arguments[] = {\012  "}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_to_negative_index}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_funky_types__numeric_literal___to_table_entry}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_151}},
  {FLT_STRING_8, 31, {.str_8 = "  {FLT_REAL, 0, {.real_value = "}},
  {FLT_STRING_8, 4, {.str_8 = "}},\012"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_152}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_153}},
  {FLT_STRING_8, 4, {.str_8 = "NEGA"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_154}},
  {FLT_STRING_8, 4, {.str_8 = "POSI"}},
  {FLT_STRING_8, 2, {.str_8 = "0b"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_155}},
  {FLT_STRING_8, 2, {.str_8 = "0o"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_digits}},
  {FLT_STRING_8, 7, {.str_8 = "  {FLT_"}},
  {FLT_STRING_8, 25, {.str_8 = "TIVE_INT64, 0, {.value = "}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_funky_types__numeric_character_literal___to_table_entry}},
  {FLT_STRING_8, 31, {.str_8 = "  {FLT_CHARACTER, 0, {.value = "}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_funky_types__character_sequence___to_table_entry}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_characters_is_an_octet_string}},
  {FLT_STRING_8, 17, {.str_8 = "  {FLT_STRING_8, "}},
  {FLT_STRING_8, 13, {.str_8 = ", {.str_8 = \042"}},
  {FLT_STRING_8, 5, {.str_8 = "\042}},\012"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_156}},
  {FLT_STRING_8, 18, {.str_8 = "  {FLT_STRING_32, "}},
  {FLT_STRING_8, 15, {.str_8 = ", {.str_32 = U\042"}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_funky_types__statement___to_table_entry}},
  {FLT_STRING_8, 16, {.str_8 = ", {.arguments = "}},
  {FLT_STRING_8, 14, {.str_8 = "_arguments}},\012"}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_funky_types__unique___to_table_entry}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_838_52_arguments}},
  {FLT_STRING_8, 29, {.str_8 = "  {FLT_UNIQUE, 0, {.str_8 = \042"}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_funky_types__body___to_table_entry}},
  {FLT_STRING_8, 37, {.str_8 = "  {FLT_FUNCTION, 0, {.func_info = &i_"}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_is_a_valid_statement}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_157}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_158}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_159}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_160}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_is_a_valid_argument}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_DEFINITION}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_REDEFINITION}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_161}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_info_is_defined}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_162}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_163}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_164}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_check_destination}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_165}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_166}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_funky_types__node___to_index}},
  {FLT_STRING_8, 18, {.str_8 = "/to_index failed: "}},
  {FLT_STRING_8, 4, {.str_8 = "self"}},
  {FLT_STRING_8, 1, {.str_8 = "?"}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_retrieve_name}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_TEMPORARY}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_167}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_168}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_169}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_CONSTANT}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_170}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_LOCAL}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_171}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_172}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_173}},
  {FLT_STRING_8, 5, {.str_8 = "value"}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_get_literal}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_check_mangling}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_174}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_175}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_remove_trailing_underscores_and_digits}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_loop}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_176}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_177}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_178}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_179}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_180}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_remove_non_identifier_characters}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_181}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_182}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_183}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_184}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_185}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_186}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_187}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_188}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_189}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_is_local_or_constant}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_190}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_191}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_collect_types}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_192}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_193}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_194}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_BODY}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_195}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_196}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_check_types}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_197}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_198}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_199}},
  {FLT_NEGATIVE_INT64, 0, {.value = 2}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_200}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_TYPE_FUNCTION}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_201}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_202}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_203}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_204}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_205}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_206}},
  {FLT_STRING_8, 13, {.str_8 = "TYPE_FUNCTION"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_ATTRIBUTE_VALUE_PAIR}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_METHOD_VALUE_PAIR}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_add_method}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_207}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_208}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_209}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_210}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_add}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_211}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_funky__mangle_identifier}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_1083_6_arguments}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_to_c_string}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_212}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_213}},
  {FLT_CHARACTER, 0, {.value = 126}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_214}},
  {FLT_CHARACTER, 0, {.value = 34}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_215}},
  {FLT_CHARACTER, 0, {.value = 92}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_216}},
  {FLT_POSITIVE_INT64, 0, {.value = 3}},
  {FLT_STRING_8, 1, {.str_8 = "\134"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_217}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_218}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_219}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_to_c_string_32}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_220}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_221}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_222}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_223}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_224}},
  {FLT_POSITIVE_INT64, 0, {.value = 0xff}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_225}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_226}},
  {FLT_POSITIVE_INT64, 0, {.value = 0xffff}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_227}},
  {FLT_POSITIVE_INT64, 0, {.value = 4}},
  {FLT_STRING_8, 2, {.str_8 = "\134u"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_228}},
  {FLT_POSITIVE_INT64, 0, {.value = 8}},
  {FLT_STRING_8, 2, {.str_8 = "\134U"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_229}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_230}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_231}}
};

static ATTRIBUTE_DEFINITION funky_types__node__attributes[] = {
  {var_609_8_to_separated_index, -func_funky_types__node___to_separated_index},
  {var_749_4_add_source_positions, -func_funky_types__node___add_source_positions},
  {-var_767_4_to_compound, -string_6},
  {-var_786_4_to_table_entry, -string_14},
  {var_to_index, -func_funky_types__node___to_index}
};

static ATTRIBUTE_DEFINITION funky_types__inline_attribute_value_pair__attributes[] = {
  {var_609_8_to_separated_index, -func_funky_types__inline_attribute_value_pair___to_separated_index}
};

static ATTRIBUTE_DEFINITION funky_types__inline_method_value_pair__attributes[] = {
  {var_609_8_to_separated_index, -func_funky_types__inline_method_value_pair___to_separated_index}
};

static ATTRIBUTE_DEFINITION funky_types__attribute_value_pair__attributes[] = {
  {var_609_8_to_separated_index, -func_funky_types__attribute_value_pair___to_separated_index}
};

static ATTRIBUTE_DEFINITION funky_types__method_value_pair__attributes[] = {
  {var_609_8_to_separated_index, -func_funky_types__method_value_pair___to_separated_index}
};

static ATTRIBUTE_DEFINITION funky_types__type_function__attributes[] = {
  {var_609_8_to_separated_index, -func_funky_types__type_function___to_separated_index}
};

static ATTRIBUTE_DEFINITION funky_types__numeric_literal__attributes[] = {
  {var_628_4_add_literal, -func_funky_types__numeric_literal___add_literal},
  {var_786_4_to_table_entry, -func_funky_types__numeric_literal___to_table_entry},
  {var_to_index, -func_get_literal}
};

static ATTRIBUTE_DEFINITION funky_types__character_sequence__attributes[] = {
  {var_628_4_add_literal, -func_funky_types__character_sequence___add_literal},
  {var_786_4_to_table_entry, -func_funky_types__character_sequence___to_table_entry},
  {var_to_index, -func_get_literal}
};

static ATTRIBUTE_DEFINITION funky_types__unique__attributes[] = {
  {var_628_4_add_literal, -func_funky_types__unique___add_literal},
  {var_786_4_to_table_entry, -func_funky_types__unique___to_table_entry},
  {var_to_index, -func_get_literal}
};

static ATTRIBUTE_DEFINITION funky_types__statement__attributes[] = {
  {var_628_4_add_literal, -func_funky_types__statement___add_literal},
  {var_749_4_add_source_positions, -func_funky_types__statement___add_source_positions},
  {var_767_4_to_compound, -func_funky_types__statement___to_compound},
  {var_786_4_to_table_entry, -func_funky_types__statement___to_table_entry}
};

static ATTRIBUTE_DEFINITION funky_types__body__attributes[] = {
  {var_628_4_add_literal, -func_funky_types__body___add_literal},
  {var_786_4_to_table_entry, -func_funky_types__body___to_table_entry},
  {var_to_index, -func_get_literal}
};

static ATTRIBUTE_DEFINITION std_types__undefined__attributes[] = {
  {-var_742_4_to_option, -str_MANDATORY_PARAME}
};

static ATTRIBUTE_DEFINITION funky_types__myself__attributes[] = {
  {-var_742_4_to_option, -str_MYSELF_PARAMETER}
};

static ATTRIBUTE_DEFINITION funky_types__rest__attributes[] = {
  {-var_742_4_to_option, -str_REST_PARAMETER}
};

static ATTRIBUTE_DEFINITION funky_types__initial_value__attributes[] = {
  {var_742_4_to_option, -func_funky_types__initial_value___to_option}
};

static ATTRIBUTE_DEFINITION funky_types__numeric_character_literal__attributes[] = {
  {var_786_4_to_table_entry, -func_funky_types__numeric_character_literal___to_table_entry}
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
    "28_33_top_level_statements\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "28_54_is_a_main_module\000", NULL
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
    "32_22_literal\000", NULL
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
    "628_4_add_literal\000", NULL,
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
    "45_8_types\000", NULL
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
    "71_8_feature_flags\000", NULL
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
    "136_20_name\000", NULL
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
    "151_14_buf\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "153_14_idx\000", NULL
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
    "166_10_buf\000", NULL
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "767_4_to_compound\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "178_14_buf\000", NULL
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "786_4_to_table_entry\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "201_21_buf\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "202_14_name\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "mangle_identifier\000", NULL,
    {.position = POS(203, 13)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "204_14_kind\000", NULL
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
    "229_21_buf\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "230_14_name\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "230_19_info\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "231_19_kind\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "231_25_value\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "before\000", NULL,
    {.position = POS(238, 28)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "ATTRIBUTE\000", NULL,
    {.position = POS(245, 21)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "ATTRIBUTE_WITH_SETTER\000", NULL,
    {.position = POS(245, 32)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "sequence\000std", NULL,
    {.position = POS(245, 21)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "INITIALIZED\000", NULL,
    {.position = POS(246, 21)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "INITIALIZED_COMPOUND\000", NULL,
    {.position = POS(246, 34)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "EXTERN\000", NULL,
    {.position = POS(243, 21)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "EXTERN_POLYMORPHIC\000", NULL,
    {.position = POS(244, 21)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "DYNAMIC\000", NULL,
    {.position = POS(247, 21)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "DERIVED\000", NULL,
    {.position = POS(248, 21)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "dump\000debug", NULL,
    {.position = POS(250, 23)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "case\000", NULL,
    {.position = POS(241, 19)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "identifier_of\000", NULL,
    {.position = POS(261, 35)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "second\000", NULL,
    {.position = POS(275, 62)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "295_10_mangled_name\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "296_10_type\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_defined\000", NULL,
    {.position = POS(298, 16)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "303_10_buf\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "344_25_name\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "base_directory\000", NULL,
    {.position = POS(347, 34)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "truncate_from\000", NULL,
    {.position = POS(369, 21)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "398_14_body\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "BODY\000", NULL,
    {.position = POS(400, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_list\000", NULL,
    {.position = POS(418, 44)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "420_23_name\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "420_28_parameters\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "420_39_statements\000", NULL
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
    "429_14_parameter\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "REDEFINITION\000", NULL,
    {.position = POS(431, 42)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "435_18_parameter_name\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "name_of\000funky", NULL,
    {.position = POS(435, 33)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "LOCAL\000", NULL,
    {.position = POS(437, 55)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "444_14_statement\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "STATEMENT\000", NULL,
    {.position = POS(446, 42)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "head_of\000", NULL,
    {.position = POS(447, 61)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "454_37_node\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "kind_of\000", NULL,
    {.position = POS(459, 25)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "TEMPORARY\000", NULL,
    {.position = POS(459, 42)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "no_of\000", NULL,
    {.position = POS(460, 55)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "max\000", NULL,
    {.position = POS(460, 40)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "DEFINITION\000", NULL,
    {.position = POS(461, 46)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "462_24_identifier\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "true\000", NULL,
    {.position = POS(469, 24)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "cond\000", NULL,
    {.position = POS(455, 19)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "473_10_n\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "concatenate\000", NULL,
    {.position = POS(485, 13)}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "749_4_add_source_positions\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "503_12_parameter_count\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "option_of\000", NULL,
    {.position = POS(505, 47)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "any_of\000", NULL,
    {.position = POS(505, 13)}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "742_4_to_option\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "528_31_parameter\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "533_16_parameter_name\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "534_16_idx\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "540_16_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "540_21_is_last\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "541_8_head\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_an_input\000", NULL,
    {.position = POS(543, 41)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_an_output\000", NULL,
    {.position = POS(544, 42)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "544_8_output_arguments\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_a_dummy_definition\000", NULL,
    {.position = POS(546, 48)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "all_of\000", NULL,
    {.position = POS(546, 24)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "545_8_invalid_last_statement\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not\000std", NULL,
    {.position = POS(550, 31)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "or\000std", NULL,
    {.position = POS(550, 11)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "553_8_input_count\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "554_8_output_count\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "555_8_is_a_tail_call\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_an_io_call\000", NULL,
    {.position = POS(558, 16)}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "609_8_to_separated_index\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "568_8_inputs\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "569_8_outputs\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "source_position_of\000", NULL,
    {.position = POS(573, 18)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "FUNCTOR\000", NULL,
    {.position = POS(575, 33)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "minus\000std", NULL,
    {.position = POS(588, 22)}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "to_index\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "590_18_statement\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 5,
    "node\000funky_types", funky_types__node__attributes,
    {.position = POS(611, 7)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "inline_attribute_value_pair\000funky_types", funky_types__inline_attribute_value_pair__attributes,
    {.position = POS(613, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "expression_of\000", NULL,
    {.position = POS(614, 41)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "inline_method_value_pair\000funky_types", funky_types__inline_method_value_pair__attributes,
    {.position = POS(616, 7)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "attribute_value_pair\000funky_types", funky_types__attribute_value_pair__attributes,
    {.position = POS(619, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "argument_of\000", NULL,
    {.position = POS(620, 41)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "method_value_pair\000funky_types", funky_types__method_value_pair__attributes,
    {.position = POS(622, 7)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "type_function\000funky_types", funky_types__type_function__attributes,
    {.position = POS(625, 7)}
  },
  {
    FOT_UNKNOWN, 0, 3,
    "numeric_literal\000funky_types", funky_types__numeric_literal__attributes,
    {.position = POS(630, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "key_of\000funky", NULL,
    {.position = POS(631, 29)}
  },
  {
    FOT_UNKNOWN, 0, 3,
    "character_sequence\000funky_types", funky_types__character_sequence__attributes,
    {.position = POS(634, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "634_50_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "635_6_mangled\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "characters_of\000", NULL,
    {.position = POS(636, 14)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "637_10_chr\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "break\000", NULL,
    {.position = POS(639, 39)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_a_letter\000", NULL,
    {.position = POS(640, 18)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_a_digit\000", NULL,
    {.position = POS(640, 37)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "push\000", NULL,
    {.position = POS(641, 13)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "655_29_n\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 3,
    "unique\000funky_types", funky_types__unique__attributes,
    {.position = POS(668, 3)}
  },
  {
    FOT_UNKNOWN, 0, 4,
    "statement\000funky_types", funky_types__statement__attributes,
    {.position = POS(672, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "mangle_position\000", NULL,
    {.position = POS(674, 35)}
  },
  {
    FOT_UNKNOWN, 0, 3,
    "body\000funky_types", funky_types__body__attributes,
    {.position = POS(677, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "677_36_self\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "source_group_of\000", NULL,
    {.position = POS(678, 19)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "681_6_text\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "without_suffix\000", NULL,
    {.position = POS(682, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "trim_right\000", NULL,
    {.position = POS(684, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "contains\000", NULL,
    {.position = POS(686, 24)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "700_19_name\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "708_21_name\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "709_23_n\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "from\000", NULL,
    {.position = POS(716, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "string\000", NULL,
    {.position = POS(713, 13)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "723_36_name\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "724_8_rest\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "behind\000", NULL,
    {.position = POS(724, 13)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "undefined\000std_types", std_types__undefined__attributes,
    {.position = POS(744, 3)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "myself\000funky_types", funky_types__myself__attributes,
    {.position = POS(745, 3)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "rest\000funky_types", funky_types__rest__attributes,
    {.position = POS(746, 3)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "initial_value\000funky_types", funky_types__initial_value__attributes,
    {.position = POS(747, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "operand_of\000", NULL,
    {.position = POS(747, 52)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "756_26_node\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "757_6_source_group\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "line_no_of\000", NULL,
    {.position = POS(762, 18)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "791_6_digits\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "digits_of\000", NULL,
    {.position = POS(791, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "to_integer\000", NULL,
    {.position = POS(803, 29)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "numeric_character_literal\000funky_types", funky_types__numeric_character_literal__attributes,
    {.position = POS(808, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "814_6_characters\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "815_6_length\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_an_octet_string\000", NULL,
    {.position = POS(817, 18)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "to_upper_case\000", NULL,
    {.position = POS(830, 55)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "replace_first\000", NULL,
    {.position = POS(838, 17)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "849_25_statement\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_a_definition\000", NULL,
    {.position = POS(851, 59)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "false\000", NULL,
    {.position = POS(856, 8)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "858_26_argument\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "865_14_info\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "CONSTANT\000", NULL,
    {.position = POS(876, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "CONSTANT_COMPOUND\000", NULL,
    {.position = POS(877, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "sequence\000", NULL,
    {.position = POS(875, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "undefined\000", NULL,
    {.position = POS(886, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "print\000debug", NULL,
    {.position = POS(899, 3)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "functor\000funky_types", funky_types__functor__attributes,
    {.position = POS(903, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "definition\000funky_types", funky_types__definition__attributes,
    {.position = POS(904, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "redefinition\000funky_types", funky_types__redefinition__attributes,
    {.position = POS(905, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "update\000funky_types", funky_types__update__attributes,
    {.position = POS(906, 1)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "908_18_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "911_8_info\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "918_8_identifier\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "919_30_kind\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "919_36_value\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "exit\000debug", NULL,
    {.position = POS(936, 11)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "character_literal\000funky_types", funky_types__character_literal__attributes,
    {.position = POS(940, 1)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "952_4_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "960_43_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "961_4_n\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "loop\000", NULL,
    {.position = POS(962, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "974_4_buf\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "976_8_chr\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "993_25_kind\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "996_18_types\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "998_8_statement\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1002_16_argument\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "METHOD_VALUE_PAIR\000", NULL,
    {.position = POS(1007, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "ATTRIBUTE_VALUE_PAIR\000", NULL,
    {.position = POS(1007, 36)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1018_10_arguments\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1019_10_functor_name\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1027_18_argument\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1038_28_identifier\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1039_56_constant_value\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1054_20_value\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1058_26_identifier\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1059_54_constant_value\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "default_value\000", NULL,
    {.position = POS(1069, 28)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "tuple\000", NULL,
    {.position = POS(1070, 45)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "mangle_identifier\000funky", NULL,
    {.const_idx = -func_funky__mangle_identifier}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1085_16_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1086_4_buf\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1087_4_s\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1089_8_idx\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1089_12_chr\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "oct\000", NULL,
    {.position = POS(1093, 36)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "pad_left\000", NULL,
    {.position = POS(1093, 27)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1103_19_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1104_4_buf\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1105_4_s\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1107_8_idx\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1107_12_chr\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1111_12_val\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "hex\000", NULL,
    {.position = POS(1120, 36)}
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
  .feature_flags = FEAT_POSITIONS|FEAT_FUNCTION_INFO,
  .marker = 0,
  0, // number of required modules
  0, // number of defined namespaces
  2, // number of used namespaces
  525, // number of constants
  263, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  constants_table,
  variables_table,
};
