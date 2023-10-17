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
  lambda_4 = -5,
  str_Main_module_does = -6,
  lambda_5 = -7,
  lambda_6 = -8,
  num_1 = -9,
  str_Module_should_on = -10,
  lambda_7 = -11,
  lambda_8 = -12,
  num_0 = -13,
  lambda_countvariables = -14,
  lambda_9 = -15,
  str___constants_tabl = -16,
  lambda_10 = -17,
  str___NULL__no_const = -18,
  lambda_11 = -19,
  str___variables_tabl = -20,
  lambda_12 = -21,
  str___NULL__no_varia = -22,
  str_include_stddefhi = -23,
  string_1 = -24,
  str_FUNKY_MODULE_mod = -25,
  string_2 = -26,
  str___module_name = -27,
  str___module_filenam = -28,
  str___number_of_requ = -29,
  str___number_of_defi = -30,
  str___number_of_used = -31,
  str___number_of_cons = -32,
  str___number_of_vari = -33,
  string_3 = -34,
  str___used_namespace = -35,
  string_4 = -36,
  lambda_13 = -37,
  str_int_mainint_argc = -38,
  string_5 = -39,
  lambda_14 = -40,
  string_6 = -41,
  func_require = -42,
  lambda_15 = -43,
  lambda_16 = -44,
  lambda_17 = -45,
  string_7 = -46,
  lambda_18 = -47,
  chr_47 = -48,
  minus_num_1 = -49,
  str__require = -50,
  func_constants_enum = -51,
  lambda_19 = -52,
  lambda_20 = -53,
  str_enum = -54,
  lambda_21 = -55,
  string_8 = -56,
  string_9 = -57,
  string_10 = -58,
  lambda_22 = -59,
  minus_num_3 = -60,
  func_compound_constants = -61,
  lambda_23 = -62,
  lambda_24 = -63,
  func_constants_table = -64,
  lambda_25 = -65,
  lambda_26 = -66,
  lambda_27 = -67,
  str_static_FUNKY_CON = -68,
  lambda_28 = -69,
  lambda_29 = -70,
  lambda_30 = -71,
  lambda_31 = -72,
  lambda_32 = -73,
  lambda_33 = -74,
  str___FLT_FUNCTION = -75,
  func_variables_enum = -76,
  lambda_34 = -77,
  lambda_35 = -78,
  lambda_36 = -79,
  string_11 = -80,
  chr_95 = -81,
  string_12 = -82,
  key_value_pair_201_1 = -83,
  str___var = -84,
  string_13 = -85,
  lambda_37 = -86,
  lambda_38 = -87,
  str_enum___var__STAR = -88,
  str___var__END = -89,
  func_variables_table = -90,
  lambda_39 = -91,
  lambda_40 = -92,
  lambda_41 = -93,
  lambda_EXTERN = -94,
  str_UNKNOWN = -95,
  lambda_EXTERN_POLYMORPHIC = -96,
  str_UNKNOWN_POLYMORP = -97,
  lambda_42 = -98,
  str_POLYMORPHIC = -99,
  lambda_43 = -100,
  str_INITIALIZED = -101,
  lambda_DYNAMIC = -102,
  str_UNINITIALIZED = -103,
  lambda_DERIVED = -104,
  str_DERIVED = -105,
  lambda_44 = -106,
  str_kind = -107,
  string_14 = -108,
  lambda_45 = -109,
  str_____const_idx = -110,
  string_15 = -111,
  lambda_2_DERIVED = -112,
  string_16 = -113,
  string_17 = -114,
  string_18 = -115,
  lambda_ATTRIBUTE = -116,
  str_____has_a_setter = -117,
  lambda_ATTRIBUTE_WITH_SETTER = -118,
  str_____has_a_setter_2 = -119,
  lambda_46 = -120,
  str_____position = -121,
  lambda_47 = -122,
  str_______FOT = -123,
  string_19 = -124,
  string_20 = -125,
  string_21 = -126,
  string_22 = -127,
  lambda_48 = -128,
  lambda_49 = -129,
  str_static_FUNKY_VAR = -130,
  func_retrieve_base_and_method_count = -131,
  lambda_50 = -132,
  str___attributes = -133,
  lambda_51 = -134,
  str_NULL = -135,
  string_23 = -136,
  func_attributes_tables = -137,
  lambda_52 = -138,
  str_static_ATTRIBUTE = -139,
  str___attributes_2 = -140,
  lambda_53 = -141,
  string_24 = -142,
  string_25 = -143,
  string_26 = -144,
  lambda_54 = -145,
  lambda_55 = -146,
  func_required_modules_table = -147,
  lambda_56 = -148,
  lambda_57 = -149,
  lambda_required_modules = -150,
  str_extern_FUNKY_MOD = -151,
  string_27 = -152,
  lambda_2_required_modules = -153,
  str___module = -154,
  str_static_FUNKY_MOD = -155,
  func_mangled_name = -156,
  lambda_58 = -157,
  string_28 = -158,
  key_value_pair_337_21 = -159,
  func_reference_required_modules = -160,
  lambda_59 = -161,
  str_NULL__required_m = -162,
  lambda_60 = -163,
  str_required_modules = -164,
  func_defined_namespaces_table = -165,
  lambda_61 = -166,
  lambda_62 = -167,
  lambda_defined_namespaces = -168,
  chr_45 = -169,
  string_29 = -170,
  string_30 = -171,
  str_static_FUNKY_NAM = -172,
  func_reference_defined_namespaces = -173,
  lambda_63 = -174,
  str_NULL__defined_na = -175,
  lambda_64 = -176,
  str_defined_namespac = -177,
  func_used_namespaces_table = -178,
  lambda_used_namespaces = -179,
  str_static_FUNKY_NAM_2 = -180,
  func_tabular_functions = -181,
  lambda_65 = -182,
  lambda_66 = -183,
  lambda_67 = -184,
  lambda_68 = -185,
  str_module_entry = -186,
  func_tabular_function = -187,
  lambda_69 = -188,
  lambda_70 = -189,
  lambda_71 = -190,
  lambda_72 = -191,
  lambda_73 = -192,
  lambda_74 = -193,
  lambda_75 = -194,
  lambda_76 = -195,
  lambda_77 = -196,
  lambda_78 = -197,
  func_check_for_locals = -198,
  lambda_79 = -199,
  lambda_80 = -200,
  lambda_81 = -201,
  lambda_82 = -202,
  lambda_83 = -203,
  lambda_84 = -204,
  lambda_85 = -205,
  lambda_86 = -206,
  lambda_87 = -207,
  lambda_88 = -208,
  lambda_map_reducestatements = -209,
  str_static_TAB_NUM_t = -210,
  string_31 = -211,
  str___locals = -212,
  func_add_parameters = -213,
  lambda_any_ofparameters = -214,
  lambda_89 = -215,
  string_32 = -216,
  str___parameters = -217,
  lambda_90 = -218,
  func_add_parameter = -219,
  func_add_parameter_with_option = -220,
  func_parameter_to_index = -221,
  lambda_91 = -222,
  str_LOCAL = -223,
  string_33 = -224,
  lambda_92 = -225,
  lambda_93 = -226,
  string_34 = -227,
  lambda_94 = -228,
  str_var = -229,
  func_is_a_valid_statement = -230,
  lambda_95 = -231,
  lambda_96 = -232,
  lambda_97 = -233,
  lambda_98 = -234,
  func_is_a_valid_argument = -235,
  lambda_DEFINITION = -236,
  lambda_REDEFINITION = -237,
  lambda_99 = -238,
  lambda_info_is_defined = -239,
  lambda_100 = -240,
  lambda_101 = -241,
  lambda_102 = -242,
  func_check_destination = -243,
  lambda_103 = -244,
  lambda_104 = -245,
  func_funky_types__node___variable_kind = -246,
  str_node = -247,
  func_std_types__undefined___variable_kind = -248,
  lambda_105 = -249,
  str_extern_polymorph = -250,
  lambda_106 = -251,
  str_extern = -252,
  func_definition_variable_kind = -253,
  lambda_107 = -254,
  lambda_108 = -255,
  lambda_109 = -256,
  lambda_110 = -257,
  str_dynamic = -258,
  func_funky_types__statement___variable_kind = -259,
  lambda_111 = -260,
  chr_58 = -261,
  lambda_112 = -262,
  lambda_113 = -263,
  str_derived = -264,
  lambda_114 = -265,
  lambda_115 = -266,
  lambda_116 = -267,
  str_initialized = -268,
  lambda_117 = -269,
  lambda_118 = -270,
  lambda_119 = -271,
  str_polymorphic = -272,
  lambda_120 = -273,
  func_funky_types__node___variable_type_and_initialization = -274,
  func_std_types__undefined___variable_type_and_initialization = -275,
  lambda_121 = -276,
  lambda_122 = -277,
  func_definition_variable_type_and_initialization = -278,
  lambda_123 = -279,
  lambda_124 = -280,
  lambda_125 = -281,
  lambda_126 = -282,
  func_funky_types__statement___variable_type_and_initialization = -283,
  lambda_127 = -284,
  lambda_128 = -285,
  lambda_129 = -286,
  lambda_130 = -287,
  lambda_131 = -288,
  lambda_132 = -289,
  lambda_133 = -290,
  lambda_134 = -291,
  lambda_135 = -292,
  lambda_136 = -293,
  lambda_137 = -294,
  lambda_138 = -295,
  str_MANDATORY_PARAME = -296,
  str_MYSELF_PARAMETER = -297,
  str_REST_PARAMETER = -298,
  func_funky_types__initial_value___to_option = -299,
  func_compile = -300,
  lambda_self_is_an_io_call = -301,
  lambda_139 = -302,
  str_IO_TAIL_CALL = -303,
  lambda_140 = -304,
  str_IO_CALL = -305,
  string_35 = -306,
  lambda_141 = -307,
  lambda_142 = -308,
  str_TAIL_CALL = -309,
  lambda_143 = -310,
  lambda_144 = -311,
  lambda_145 = -312,
  str_Last_statement_i = -313,
  string_36 = -314,
  lambda_146 = -315,
  str_stdassign = -316,
  str_assign = -317,
  sequence_687_1 = -318,
  lambda_147 = -319,
  str___LET = -320,
  str__assign_attribut = -321,
  lambda_assign_attributes = -322,
  str___LET_2 = -323,
  lambda_148 = -324,
  lambda_149 = -325,
  str___LET_3 = -326,
  string_37 = -327,
  func_funky_types__node___add_source_positions = -328,
  func_funky_types__statement___add_source_positions = -329,
  func_get_source_position = -330,
  lambda_source_group_is_defined = -331,
  str_POS = -332,
  lambda_150 = -333,
  str_POS_2 = -334,
  func_funky_types__node___to_separated_index = -335,
  func_funky_types__inline_attribute_value_pair___to_separated_index = -336,
  func_funky_types__inline_method_value_pair___to_separated_index = -337,
  func_funky_types__attribute_value_pair___to_separated_index = -338,
  func_funky_types__method_value_pair___to_separated_index = -339,
  func_funky_types__type_function___to_separated_index = -340,
  func_funky_types__node___to_index = -341,
  str_to_index_failed = -342,
  str_self = -343,
  string_38 = -344,
  func_retrieve_name = -345,
  lambda_TEMPORARY = -346,
  lambda_151 = -347,
  lambda_152 = -348,
  lambda_153 = -349,
  lambda_CONSTANT = -350,
  lambda_154 = -351,
  lambda_LOCAL = -352,
  lambda_155 = -353,
  lambda_156 = -354,
  lambda_157 = -355,
  str_value = -356,
  func_get_literal = -357,
  func_funky_types__node___get_index = -358,
  func_funky_types__definition___get_index = -359,
  lambda_158 = -360,
  lambda_159 = -361,
  func_parameter_get_index = -362,
  lambda_160 = -363,
  lambda_161 = -364,
  func_funky_types__statement___get_index = -365,
  lambda_162 = -366,
  lambda_163 = -367,
  lambda_164 = -368,
  lambda_165 = -369,
  lambda_166 = -370,
  func_funky_types__numeric_literal___add_literal = -371,
  func_funky_types__character_sequence___add_literal = -372,
  lambda_167 = -373,
  lambda_168 = -374,
  num_16 = -375,
  lambda_169 = -376,
  lambda_170 = -377,
  lambda_171 = -378,
  lambda_172 = -379,
  lambda_173 = -380,
  chr_32 = -381,
  lambda_174 = -382,
  lambda_175 = -383,
  lambda_176 = -384,
  lambda_mangled_is_empty = -385,
  str_string = -386,
  str_string_2 = -387,
  lambda_177 = -388,
  str_str = -389,
  lambda_178 = -390,
  string_39 = -391,
  lambda_179 = -392,
  func_add_mangled = -393,
  func_funky_types__unique___add_literal = -394,
  func_funky_types__statement___add_literal = -395,
  func_funky_types__body___add_literal = -396,
  string_40 = -397,
  lambda_180 = -398,
  lambda_181 = -399,
  lambda_182 = -400,
  chr_36 = -401,
  lambda_183 = -402,
  num_2 = -403,
  str_func = -404,
  lambda_184 = -405,
  chr_46 = -406,
  key_value_pair_908_19 = -407,
  func_add_lambda = -408,
  lambda_name_is_empty = -409,
  str_lambda = -410,
  str_lambda_2 = -411,
  lambda_185 = -412,
  func_add_function = -413,
  lambda_186 = -414,
  lambda_187 = -415,
  func_2_add_mangled = -416,
  func_mangle_versioned_identifier = -417,
  string_41 = -418,
  lambda_188 = -419,
  lambda_189 = -420,
  lambda_190 = -421,
  lambda_191 = -422,
  func_replace = -423,
  string_42 = -424,
  key_value_pair_949_1 = -425,
  key_value_pair_950_1 = -426,
  key_value_pair_951_1 = -427,
  key_value_pair_952_1 = -428,
  func_check_mangling = -429,
  lambda_192 = -430,
  lambda_193 = -431,
  func_remove_trailing_underscores_and_digits = -432,
  lambda_loop = -433,
  lambda_194 = -434,
  lambda_195 = -435,
  lambda_196 = -436,
  lambda_197 = -437,
  lambda_198 = -438,
  func_remove_non_identifier_characters = -439,
  lambda_199 = -440,
  lambda_200 = -441,
  lambda_201 = -442,
  lambda_202 = -443,
  lambda_203 = -444,
  lambda_204 = -445,
  lambda_205 = -446,
  lambda_206 = -447,
  lambda_207 = -448,
  func_funky_types__statement___to_compound = -449,
  str_static_int = -450,
  str__arguments = -451,
  func_to_negative_index = -452,
  func_funky_types__numeric_literal___to_table_entry = -453,
  lambda_208 = -454,
  str___FLT_REAL_0_rea = -455,
  string_43 = -456,
  lambda_209 = -457,
  lambda_210 = -458,
  str_NEGA = -459,
  lambda_211 = -460,
  str_POSI = -461,
  str_0b = -462,
  lambda_212 = -463,
  str_0o = -464,
  lambda_digits = -465,
  str___FLT = -466,
  str_TIVE_INT64_0_val = -467,
  func_funky_types__numeric_character_literal___to_table_entry = -468,
  str___FLT_CHARACTER = -469,
  func_funky_types__character_sequence___to_table_entry = -470,
  lambda_characters_is_an_octet_string = -471,
  str___FLT_STRING = -472,
  str__str = -473,
  string_44 = -474,
  lambda_213 = -475,
  str___FLT_STRING_2 = -476,
  str__str_32__U = -477,
  func_funky_types__statement___to_table_entry = -478,
  str__arguments_2 = -479,
  str__arguments_3 = -480,
  func_funky_types__unique___to_table_entry = -481,
  key_value_pair_1069_47 = -482,
  str___FLT_UNIQUE_0_s = -483,
  func_funky_types__body___to_table_entry = -484,
  str___FLT_FUNCTION_2 = -485,
  func_is_local_or_constant = -486,
  lambda_214 = -487,
  lambda_215 = -488,
  func_collect_types = -489,
  lambda_216 = -490,
  lambda_217 = -491,
  lambda_218 = -492,
  lambda_TYPE_FUNCTION = -493,
  str_TYPE_FUNCTION = -494,
  lambda_ATTRIBUTE_VALUE_PAIR = -495,
  lambda_METHOD_VALUE_PAIR = -496,
  func_add_method = -497,
  lambda_219 = -498,
  lambda_220 = -499,
  lambda_221 = -500,
  lambda_222 = -501,
  func_add = -502,
  lambda_223 = -503,
  func_funky__mangle_identifier = -504,
  key_value_pair_1138_1 = -505,
  func_to_c_string = -506,
  lambda_224 = -507,
  lambda_225 = -508,
  chr_126 = -509,
  lambda_226 = -510,
  chr_34 = -511,
  lambda_227 = -512,
  chr_92 = -513,
  lambda_228 = -514,
  num_3 = -515,
  string_45 = -516,
  lambda_229 = -517,
  lambda_230 = -518,
  lambda_231 = -519,
  func_to_c_string_32 = -520,
  lambda_232 = -521,
  lambda_233 = -522,
  lambda_234 = -523,
  lambda_235 = -524,
  lambda_236 = -525,
  num_8 = -526,
  str_U = -527,
  lambda_237 = -528,
  lambda_238 = -529,
  lambda_239 = -530
};

enum {
  var__START = FIRST_VAR-1,
  var_add_literal, // attribute
  var_std__assign, // extern
  var_mangled_literals, // derived
  var_empty_hash_table, // extern
  var_mangling_counter, // derived
  var_funky__generate_tabular_code, // initialized
  var_30_32_top_level_statements, // dynamic
  var_30_53_is_a_main_module, // dynamic
  var_literals, // extern
  var_next, // extern
  var_38_1_types, // dynamic
  var_filter, // extern
  var_is_empty, // extern
  var_std__and, // extern
  var_syntax_error, // extern
  var_on, // extern
  var_not, // extern
  var_is_not_empty, // extern
  var_length_of, // extern
  var_if, // extern
  var_std__plus, // extern
  var_variables, // extern
  var_first, // extern
  var_count, // extern
  var_std__less, // extern
  var_required_modules, // extern
  var_defined_namespaces, // extern
  var_used_namespaces, // extern
  var_current_module_name, // extern
  var_current_filename, // extern
  var_std__string, // extern
  var_append, // extern
  var_125_3_name, // dynamic
  var_has_prefix, // extern
  var_without_prefix, // extern
  var_until, // extern
  var_update_if, // extern
  var_map_reduce, // extern
  var_140_1_buf, // dynamic
  var_142_1_idx, // dynamic
  var_dec, // extern
  var_range, // extern
  var_for_each, // extern
  var_155_1_buf, // dynamic
  var_to_compound, // attribute
  var_167_1_buf, // dynamic
  var_to_table_entry, // attribute
  var_190_12_buf, // dynamic
  var_191_3_name, // dynamic
  var_191_8_info, // dynamic
  var_mangle_identifier, // extern
  var_to_string, // extern
  var_truncate_until, // extern
  var_to_lower_case, // extern
  var_std__key_value_pair, // extern
  var_replace_all, // extern
  var_218_12_buf, // dynamic
  var_219_3_name, // dynamic
  var_219_8_info, // dynamic
  var_220_6_kind, // dynamic
  var_220_12_value, // dynamic
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
  var_edump, // extern
  var_case, // extern
  var_identifier_of, // extern
  var_second, // extern
  var_283_1_mangled_name, // dynamic
  var_284_1_type, // dynamic
  var_is_defined, // extern
  var_291_1_buf, // dynamic
  var_332_16_name, // dynamic
  var_base_directory, // extern
  var_truncate_from, // extern
  var_386_3_body, // dynamic
  var_node_type_of, // extern
  var_BODY, // extern
  var_TYPE_FUNCTION, // extern
  var_statements_of, // extern
  var_parameters_of, // extern
  var_empty_list, // extern
  var_400_20_name, // dynamic
  var_400_25_parameters, // dynamic
  var_400_36_statements, // dynamic
  var_temp_count, // derived
  var_local_mapping, // derived
  var_409_3_parameter, // dynamic
  var_REDEFINITION, // extern
  var_std__equal, // extern
  var_415_1_parameter_name, // dynamic
  var_funky__name_of, // extern
  var_LOCAL, // extern
  var_424_3_statement, // dynamic
  var_STATEMENT, // extern
  var_head_of, // extern
  var_arguments_of, // extern
  var_433_20_node, // dynamic
  var_kind_of, // extern
  var_TEMPORARY, // extern
  var_no_of, // extern
  var_max, // extern
  var_DEFINITION, // extern
  var_441_1_identifier, // dynamic
  var_true, // extern
  var_cond, // extern
  var_452_1_n, // dynamic
  var_add_source_positions, // attribute
  var_463_1_parameter_count, // dynamic
  var_option_of, // extern
  var_any_of, // extern
  var_to_option, // attribute
  var_488_22_parameter, // dynamic
  var_493_1_parameter_name, // dynamic
  var_494_1_idx, // dynamic
  var_500_24_statement, // dynamic
  var_is_a_definition, // extern
  var_all_of, // extern
  var_false, // extern
  var_509_23_argument, // dynamic
  var_516_1_info, // dynamic
  var_CONSTANT, // extern
  var_CONSTANT_COMPOUND, // extern
  var_sequence, // extern
  var_variable_kind, // attribute
  var_funky_types__node, // extern
  var_debug_exit, // extern
  var_std_types__undefined, // extern
  var_POLYMORPHIC, // extern
  var_std__bit_and, // extern
  var_std__not, // extern
  var_funky_types__definition, // extern
  var_funky_types__parameter, // extern
  var_funky_types__inline_parameter, // extern
  var_553_34_level, // dynamic
  var_HAS_SLOTS, // extern
  var_is_an_integer, // extern
  var_undefined, // extern
  var_funky_types__statement, // extern
  var_563_40_node, // dynamic
  var_563_45_level, // dynamic
  var_563_51_flags, // dynamic
  var_REDEFINED, // extern
  var_std__bit_or, // extern
  var_contains, // extern
  var_std__or, // extern
  var_FUNCTOR, // extern
  var_TOP_LEVEL, // extern
  var_variable_type_and_initialization, // attribute
  var_602_53_level, // dynamic
  var_612_59_node, // dynamic
  var_612_64_level, // dynamic
  var_612_70_flags, // dynamic
  var_613_1_argument, // dynamic
  var_funky_types__myself, // extern
  var_funky_types__rest, // extern
  var_funky_types__initial_value, // extern
  var_operand_of, // extern
  var_to_index, // attribute
  var_657_11_self, // dynamic
  var_657_16_is_last, // dynamic
  var_658_1_head, // dynamic
  var_is_an_input, // extern
  var_is_an_output, // extern
  var_662_1_input_count, // dynamic
  var_663_1_output_count, // dynamic
  var_is_an_io_call, // extern
  var_to_separated_index, // attribute
  var_676_1_inputs, // dynamic
  var_677_1_outputs, // dynamic
  var_source_position_of, // extern
  var_std__minus, // extern
  var_710_23_node, // dynamic
  var_711_1_source_group, // dynamic
  var_source_group_of, // extern
  var_line_no_of, // extern
  var_funky_types__inline_attribute_value_pair, // extern
  var_expression_of, // extern
  var_funky_types__inline_method_value_pair, // extern
  var_funky_types__attribute_value_pair, // extern
  var_argument_of, // extern
  var_funky_types__method_value_pair, // extern
  var_funky_types__type_function, // extern
  var_debug_write, // extern
  var_funky_types__functor, // extern
  var_funky_types__redefinition, // extern
  var_funky_types__update, // extern
  var_762_17_self, // dynamic
  var_765_1_info, // dynamic
  var_772_1_identifier, // dynamic
  var_773_23_kind, // dynamic
  var_773_29_value, // dynamic
  var_funky_types__numeric_literal, // extern
  var_funky_types__character_literal, // extern
  var_funky_types__character_sequence, // extern
  var_funky_types__unique, // extern
  var_funky_types__body, // extern
  var_get_index, // attribute
  var_812_1_identifier, // dynamic
  var_822_1_name, // dynamic
  var_828_36_node, // dynamic
  var_829_1_identifier, // dynamic
  var_834_1_argument, // dynamic
  var_funky__key_of, // extern
  var_846_47_self, // dynamic
  var_847_1_mangled, // dynamic
  var_characters_of, // extern
  var_849_3_chr, // dynamic
  var_break, // extern
  var_is_a_letter, // extern
  var_is_a_digit, // extern
  var_push, // extern
  var_867_16_n, // dynamic
  var_mangle_position, // extern
  var_889_33_self, // dynamic
  var_893_1_text, // dynamic
  var_without_suffix, // extern
  var_trim_right, // extern
  var_912_14_name, // dynamic
  var_920_16_name, // dynamic
  var_921_16_n, // dynamic
  var_from, // extern
  var_string, // extern
  var_935_31_name, // dynamic
  var_936_1_rest, // dynamic
  var_behind, // extern
  var_955_1_n, // dynamic
  var_963_42_str, // dynamic
  var_964_1_n, // dynamic
  var_loop, // extern
  var_977_1_buf, // dynamic
  var_979_3_chr, // dynamic
  var_concatenate, // extern
  var_1022_1_digits, // dynamic
  var_digits_of, // extern
  var_to_integer, // extern
  var_funky_types__numeric_character_literal, // extern
  var_1045_1_characters, // dynamic
  var_1046_1_length, // dynamic
  var_is_an_octet_string, // extern
  var_to_upper_case, // extern
  var_replace_first, // extern
  var_1082_24_kind, // dynamic
  var_1086_1_types, // dynamic
  var_empty_insert_order_table, // extern
  var_1088_3_statement, // dynamic
  var_1094_1_arguments, // dynamic
  var_1095_1_argument, // dynamic
  var_ATTRIBUTE_VALUE_PAIR, // extern
  var_METHOD_VALUE_PAIR, // extern
  var_1107_1_value, // dynamic
  var_1111_1_identifier, // dynamic
  var_1112_29_constant_value, // dynamic
  var_default_value, // extern
  var_tuple, // extern
  var_funky__mangle_identifier, // initialized
  var_1140_15_str, // dynamic
  var_1141_1_buf, // dynamic
  var_1142_1_s, // dynamic
  var_1144_3_idx, // dynamic
  var_1144_7_chr, // dynamic
  var_oct, // extern
  var_pad_left, // extern
  var_1158_18_str, // dynamic
  var_1159_1_buf, // dynamic
  var_1160_1_s, // dynamic
  var_1162_3_idx, // dynamic
  var_1162_7_chr, // dynamic
  var_hex, // extern
  var__END
};


static TAB_NUM t_func_funky__generate_tabular_code[] = {
  0, // locals
  2, // parameters
  var_30_32_top_level_statements,
  var_30_53_is_a_main_module,
  // for_each literals
  var_for_each, 3, var_literals, lambda_1, lambda_2, IO_TAIL_CALL,
  POS(33, 3)
};

static TAB_NUM t_lambda_1[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 34_3_literal
  // add_literal !mangled_literals !mangling_counter literal
  var_add_literal, 1, LOCAL(1), 2, var_mangled_literals, var_mangling_counter,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(35, 7),
  POS(36, 7)
};

static TAB_NUM t_lambda_2[] = {
  23, // locals
  0, // parameters
  // $types collect_types(top_level_statements)
  func_collect_types, 1, var_30_32_top_level_statements, 1, var_38_1_types,
  // filter &top_level_statements is_a_valid_statement
  var_filter, 2, var_30_32_top_level_statements, func_is_a_valid_statement, 1, var_30_32_top_level_statements,
  // is_a_main_module && top_level_statements.is_empty:
  var_std__and, 2, var_30_53_is_a_main_module, lambda_3, 1, LOCAL(1),
  // on is_a_main_module && top_level_statements.is_empty:
  var_on, 2, LOCAL(1), lambda_4, 0,
  // not(is_a_main_module) && top_level_statements.is_not_empty:
  var_not, 1, var_30_53_is_a_main_module, 1, LOCAL(1),
  // not(is_a_main_module) && top_level_statements.is_not_empty:
  var_std__and, 2, LOCAL(1), lambda_5, 1, LOCAL(2),
  // on not(is_a_main_module) && top_level_statements.is_not_empty:
  var_on, 2, LOCAL(2), lambda_6, 0,
  // length_of(literals)
  var_length_of, 1, var_literals, 1, LOCAL(1),
  // if
  var_if, 3, var_30_53_is_a_main_module, lambda_7, lambda_8, 1, LOCAL(2),
  // $constant_count
  var_std__plus, 2, LOCAL(1), LOCAL(2), 1, LOCAL(20),
  // $variable_count
  var_count, 2, var_variables, lambda_countvariables, 1, LOCAL(21),
  // 0
  var_std__less, 2, num_0, LOCAL(20), 1, LOCAL(1),
  // $ref_constants_table
  var_if, 3, LOCAL(1), lambda_9, lambda_10, 1, LOCAL(22),
  // 0
  var_std__less, 2, num_0, LOCAL(21), 1, LOCAL(1),
  // $ref_variables_table
  var_if, 3, LOCAL(1), lambda_11, lambda_12, 1, LOCAL(23),
  // require())@
  func_require, 0, 1, LOCAL(1),
  // constants_enum())
  func_constants_enum, 0, 1, LOCAL(2),
  // variables_enum())@
  func_variables_enum, 0, 1, LOCAL(3),
  // tabular_functions())@
  func_tabular_functions, 0, 1, LOCAL(4),
  // main_function())@
  lambda_68, 0, 1, LOCAL(5),
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
  var_std__string, 40, LOCAL(1), str_include_stddefhi, LOCAL(2), string_1, LOCAL(3), string_1, LOCAL(4), LOCAL(5), LOCAL(6), LOCAL(7), LOCAL(8), LOCAL(9), LOCAL(10), LOCAL(11), LOCAL(12), str_FUNKY_MODULE_mod, var_current_module_name, string_2, var_current_module_name, str___module_name, var_current_filename, str___module_filenam, LOCAL(13), str___number_of_requ, LOCAL(14), str___number_of_defi, LOCAL(15), str___number_of_used, LOCAL(20), str___number_of_cons, LOCAL(21), str___number_of_vari, LOCAL(16), string_3, LOCAL(17), str___used_namespace, LOCAL(22), string_1, LOCAL(23), string_4, 1, LOCAL(18),
  // if
  var_if, 3, var_30_53_is_a_main_module, lambda_13, lambda_14, 1, LOCAL(19),
  // append
  var_append, 2, LOCAL(18), LOCAL(19), TAIL_CALL,
  POS(38, 7),
  POS(39, 7),
  POS(40, 10),
  POS(40, 7),
  POS(42, 10),
  POS(42, 10),
  POS(42, 7),
  POS(47, 11),
  POS(48, 11),
  POS(45, 7),
  POS(52, 7),
  POS(56, 28),
  POS(54, 7),
  POS(61, 28),
  POS(59, 7),
  POS(66, 13),
  POS(75, 13),
  POS(76, 13),
  POS(78, 13),
  POS(79, 13),
  POS(80, 13),
  POS(81, 13),
  POS(82, 13),
  POS(83, 13),
  POS(84, 13),
  POS(85, 13),
  POS(86, 13),
  POS(95, 15),
  POS(96, 15),
  POS(97, 15),
  POS(100, 15),
  POS(101, 15),
  POS(65, 9),
  POS(107, 9),
  POS(64, 7)
};

static TAB_NUM t_lambda_3[] = {
  1, // locals
  0, // parameters
  // is_empty:
  var_is_empty, 1, var_30_32_top_level_statements, 1, LOCAL(1),
  // top_level_statements.is_empty:
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(40, 51),
  POS(40, 30)
};

static TAB_NUM t_lambda_4[] = {
  0, // locals
  0, // parameters
  // syntax_error "Main module does not contain any statements"
  var_syntax_error, 1, str_Main_module_does, TAIL_CALL,
  POS(41, 9)
};

static TAB_NUM t_lambda_5[] = {
  1, // locals
  0, // parameters
  // is_not_empty:
  var_is_not_empty, 1, var_30_32_top_level_statements, 1, LOCAL(1),
  // top_level_statements.is_not_empty:
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(42, 56),
  POS(42, 35)
};

static TAB_NUM t_lambda_6[] = {
  1, // locals
  0, // parameters
  // top_level_statements(1)
  var_30_32_top_level_statements, 1, num_1, 1, LOCAL(1),
  // syntax_error "Module should only contain definitions"
  var_syntax_error, 2, str_Module_should_on, LOCAL(1), TAIL_CALL,
  POS(44, 11),
  POS(43, 9)
};

static TAB_NUM t_lambda_7[] = {
  0, // locals
  0, // parameters
  //  1
  LET, 1, num_1, TAIL_CALL,
  POS(50, 15)
};

static TAB_NUM t_lambda_8[] = {
  0, // locals
  0, // parameters
  //  0
  LET, 1, num_0, TAIL_CALL,
  POS(51, 15)
};

static TAB_NUM t_lambda_countvariables[] = {
  4, // locals
  1, // parameters
  LOCAL(4), // 53_18_info
  // first(info).is_local_or_constant))
  var_first, 1, LOCAL(4), 1, LOCAL(1),
  // is_local_or_constant))
  func_is_local_or_constant, 1, LOCAL(1), 1, LOCAL(2),
  // not(first(info).is_local_or_constant))
  var_not, 1, LOCAL(2), 1, LOCAL(3),
  // -> not(first(info).is_local_or_constant))
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(53, 40),
  POS(53, 52),
  POS(53, 36),
  POS(53, 33)
};

static TAB_NUM t_lambda_9[] = {
  0, // locals
  0, // parameters
  //  "  constants_table,"
  LET, 1, str___constants_tabl, TAIL_CALL,
  POS(57, 13)
};

static TAB_NUM t_lambda_10[] = {
  0, // locals
  0, // parameters
  //  "  NULL, // no constants"
  LET, 1, str___NULL__no_const, TAIL_CALL,
  POS(58, 13)
};

static TAB_NUM t_lambda_11[] = {
  0, // locals
  0, // parameters
  //  "  variables_table,"
  LET, 1, str___variables_tabl, TAIL_CALL,
  POS(62, 13)
};

static TAB_NUM t_lambda_12[] = {
  0, // locals
  0, // parameters
  //  "  NULL, // no variables"
  LET, 1, str___NULL__no_varia, TAIL_CALL,
  POS(63, 13)
};

static TAB_NUM t_lambda_13[] = {
  1, // locals
  0, // parameters
  // "
  var_std__string, 3, str_int_mainint_argc, var_current_module_name, string_5, 1, LOCAL(1),
  //  "
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(109, 14),
  POS(109, 13)
};

static TAB_NUM t_lambda_14[] = {
  0, // locals
  0, // parameters
  //  ""
  LET, 1, string_6, TAIL_CALL,
  POS(115, 13)
};

static TAB_NUM t_func_require[] = {
  1, // locals
  0, // parameters
  // is_empty
  var_is_empty, 1, var_required_modules, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_15, lambda_16, TAIL_CALL,
  POS(119, 28),
  POS(118, 9)
};

static TAB_NUM t_lambda_15[] = {
  0, // locals
  0, // parameters
  //  ""
  LET, 1, string_6, TAIL_CALL,
  POS(120, 13)
};

static TAB_NUM t_lambda_16[] = {
  1, // locals
  0, // parameters
  // map_reduce
  var_map_reduce, 2, var_required_modules, lambda_17, 1, LOCAL(1),
  // append
  var_append, 2, LOCAL(1), string_1, TAIL_CALL,
  POS(123, 15),
  POS(122, 13)
};

static TAB_NUM t_lambda_17[] = {
  1, // locals
  1, // parameters
  var_125_3_name,
  // name .has_prefix. "./" &name:
  var_has_prefix, 2, var_125_3_name, string_7, 1, LOCAL(1),
  // update_if name .has_prefix. "./" &name:
  var_update_if, 3, LOCAL(1), var_125_3_name, lambda_18, 1, var_125_3_name,
  // "
  var_std__string, 3, str__require, var_125_3_name, string_1, 1, LOCAL(1),
  // -> "
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(126, 29),
  POS(126, 19),
  POS(131, 22),
  POS(131, 19)
};

static TAB_NUM t_lambda_18[] = {
  1, // locals
  0, // parameters
  // without_prefix &name "./"
  var_without_prefix, 2, var_125_3_name, string_7, 1, var_125_3_name,
  // until(current_filename '/' -1)
  var_until, 3, var_current_filename, chr_47, minus_num_1, 1, LOCAL(1),
  // without_prefix &name until(current_filename '/' -1)
  var_without_prefix, 2, var_125_3_name, LOCAL(1), 1, var_125_3_name,
  // append "./" &name
  var_append, 2, string_7, var_125_3_name, 1, var_125_3_name,
  // -> name
  LET, 1, var_125_3_name, TAIL_CALL,
  POS(127, 21),
  POS(128, 42),
  POS(128, 21),
  POS(129, 21),
  POS(130, 21)
};

static TAB_NUM t_func_constants_enum[] = {
  1, // locals
  0, // parameters
  // is_empty
  var_is_empty, 1, var_literals, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_19, lambda_20, TAIL_CALL,
  POS(137, 20),
  POS(136, 9)
};

static TAB_NUM t_lambda_19[] = {
  0, // locals
  0, // parameters
  //  ""
  LET, 1, string_6, TAIL_CALL,
  POS(138, 13)
};

static TAB_NUM t_lambda_20[] = {
  0, // locals
  0, // parameters
  // $buf "
  LET, 1, str_enum, 1, var_140_1_buf,
  // $idx 0
  LET, 1, num_0, 1, var_142_1_idx,
  // for_each literals
  var_for_each, 3, var_literals, lambda_21, lambda_22, TAIL_CALL,
  POS(140, 13),
  POS(142, 13),
  POS(143, 13)
};

static TAB_NUM t_lambda_21[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 145_3_literal
  // $mangled_name mangled_literals(literal)
  var_mangled_literals, 1, LOCAL(2), 1, LOCAL(3),
  // dec &idx
  var_dec, 1, var_142_1_idx, 1, var_142_1_idx,
  // "
  var_std__string, 5, string_8, LOCAL(3), string_9, var_142_1_idx, string_10, 1, LOCAL(1),
  // append &buf "
  var_append, 2, var_140_1_buf, LOCAL(1), 1, var_140_1_buf,
  // next
  var_next, 0, TAIL_CALL,
  POS(146, 17),
  POS(147, 17),
  POS(148, 29),
  POS(148, 17),
  POS(151, 17)
};

static TAB_NUM t_lambda_22[] = {
  2, // locals
  0, // parameters
  // range(buf 1 -3) "@nl;};@nl;")
  var_range, 3, var_140_1_buf, num_1, minus_num_3, 1, LOCAL(1),
  // append(range(buf 1 -3) "@nl;};@nl;")
  var_append, 2, LOCAL(1), string_4, 1, LOCAL(2),
  //  append(range(buf 1 -3) "@nl;};@nl;")
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(152, 25),
  POS(152, 18),
  POS(152, 17)
};

static TAB_NUM t_func_compound_constants[] = {
  0, // locals
  0, // parameters
  // $buf ""
  LET, 1, string_6, 1, var_155_1_buf,
  // for_each literals
  var_for_each, 3, var_literals, lambda_23, lambda_24, TAIL_CALL,
  POS(155, 9),
  POS(156, 9)
};

static TAB_NUM t_lambda_23[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 157_3_literal
  // to_compound
  var_to_compound, 1, LOCAL(2), 1, LOCAL(1),
  // append &buf literal.to_compound
  var_append, 2, var_155_1_buf, LOCAL(1), 1, var_155_1_buf,
  // next
  var_next, 0, TAIL_CALL,
  POS(158, 33),
  POS(158, 13),
  POS(159, 13)
};

static TAB_NUM t_lambda_24[] = {
  0, // locals
  0, // parameters
  //  buf
  LET, 1, var_155_1_buf, TAIL_CALL,
  POS(160, 13)
};

static TAB_NUM t_func_constants_table[] = {
  2, // locals
  0, // parameters
  // is_empty && top_level_statements.is_empty
  var_is_empty, 1, var_literals, 1, LOCAL(1),
  // is_empty && top_level_statements.is_empty
  var_std__and, 2, LOCAL(1), lambda_25, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_26, lambda_27, TAIL_CALL,
  POS(164, 20),
  POS(164, 20),
  POS(163, 9)
};

static TAB_NUM t_lambda_25[] = {
  1, // locals
  0, // parameters
  // is_empty
  var_is_empty, 1, var_30_32_top_level_statements, 1, LOCAL(1),
  // top_level_statements.is_empty
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(164, 53),
  POS(164, 32)
};

static TAB_NUM t_lambda_26[] = {
  0, // locals
  0, // parameters
  //  ""
  LET, 1, string_6, TAIL_CALL,
  POS(165, 13)
};

static TAB_NUM t_lambda_27[] = {
  1, // locals
  0, // parameters
  // $buf "
  LET, 1, str_static_FUNKY_CON, 1, var_167_1_buf,
  // is_empty
  var_is_empty, 1, var_literals, 1, LOCAL(1),
  // !buf
  var_if, 3, LOCAL(1), lambda_28, lambda_29, 1, var_167_1_buf,
  // is_empty
  var_is_empty, 1, var_30_32_top_level_statements, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_32, lambda_33, TAIL_CALL,
  POS(167, 13),
  POS(172, 26),
  POS(170, 13),
  POS(181, 36),
  POS(180, 13)
};

static TAB_NUM t_lambda_28[] = {
  0, // locals
  0, // parameters
  //  buf
  LET, 1, var_167_1_buf, TAIL_CALL,
  POS(173, 19)
};

static TAB_NUM t_lambda_29[] = {
  0, // locals
  0, // parameters
  // for_each literals
  var_for_each, 3, var_literals, lambda_30, lambda_31, TAIL_CALL,
  POS(175, 19)
};

static TAB_NUM t_lambda_30[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 176_3_literal
  // to_table_entry
  var_to_table_entry, 1, LOCAL(2), 1, LOCAL(1),
  // append &buf literal.to_table_entry
  var_append, 2, var_167_1_buf, LOCAL(1), 1, var_167_1_buf,
  // next
  var_next, 0, TAIL_CALL,
  POS(177, 43),
  POS(177, 23),
  POS(178, 23)
};

static TAB_NUM t_lambda_31[] = {
  0, // locals
  0, // parameters
  //  buf
  LET, 1, var_167_1_buf, TAIL_CALL,
  POS(179, 23)
};

static TAB_NUM t_lambda_32[] = {
  2, // locals
  0, // parameters
  // range(buf 1 -3) "@nl;};@nl;")
  var_range, 3, var_167_1_buf, num_1, minus_num_3, 1, LOCAL(1),
  // append(range(buf 1 -3) "@nl;};@nl;")
  var_append, 2, LOCAL(1), string_4, 1, LOCAL(2),
  //  append(range(buf 1 -3) "@nl;};@nl;")
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(182, 25),
  POS(182, 18),
  POS(182, 17)
};

static TAB_NUM t_lambda_33[] = {
  0, // locals
  0, // parameters
  // append buf "
  var_append, 2, var_167_1_buf, str___FLT_FUNCTION, TAIL_CALL,
  POS(184, 17)
};

static TAB_NUM t_func_variables_enum[] = {
  1, // locals
  0, // parameters
  // map_reduce $buf variables
  var_map_reduce, 4, var_variables, lambda_34, var_append, string_6, 1, var_190_12_buf,
  // is_empty
  var_is_empty, 1, var_190_12_buf, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_37, lambda_38, TAIL_CALL,
  POS(190, 9),
  POS(206, 15),
  POS(205, 9)
};

static TAB_NUM t_lambda_34[] = {
  2, // locals
  2, // parameters
  var_191_3_name,
  var_191_8_info,
  // mangle_identifier &name
  var_mangle_identifier, 1, var_191_3_name, 1, var_191_3_name,
  // $kind first(info)
  var_first, 1, var_191_8_info, 1, LOCAL(2),
  // is_local_or_constant
  func_is_local_or_constant, 1, LOCAL(2), 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_35, lambda_36, TAIL_CALL,
  POS(192, 13),
  POS(193, 13),
  POS(195, 20),
  POS(194, 13)
};

static TAB_NUM t_lambda_35[] = {
  0, // locals
  0, // parameters
  //  ""
  LET, 1, string_6, TAIL_CALL,
  POS(196, 17)
};

static TAB_NUM t_lambda_36[] = {
  5, // locals
  0, // parameters
  // first(info).to_string .truncate_until. "::").to_lower_case
  var_first, 1, var_191_8_info, 1, LOCAL(1),
  // to_string .truncate_until. "::").to_lower_case
  var_to_string, 1, LOCAL(1), 1, LOCAL(2),
  // to_string .truncate_until. "::").to_lower_case
  var_truncate_until, 2, LOCAL(2), string_11, 1, LOCAL(3),
  // to_lower_case
  var_to_lower_case, 1, LOCAL(3), 1, LOCAL(4),
  // $remark
  var_replace_all, 2, LOCAL(4), key_value_pair_201_1, 1, LOCAL(5),
  // "  var_@(name), // @(remark)@nl;"
  var_std__string, 5, str___var, var_191_3_name, string_13, LOCAL(5), string_1, 1, LOCAL(1),
  // -> "  var_@(name), // @(remark)@nl;"
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(200, 22),
  POS(200, 34),
  POS(200, 34),
  POS(200, 67),
  POS(198, 17),
  POS(202, 20),
  POS(202, 17)
};

static TAB_NUM t_lambda_37[] = {
  0, // locals
  0, // parameters
  //  ""
  LET, 1, string_6, TAIL_CALL,
  POS(207, 13)
};

static TAB_NUM t_lambda_38[] = {
  1, // locals
  0, // parameters
  // "
  var_std__string, 3, str_enum___var__STAR, var_190_12_buf, str___var__END, 1, LOCAL(1),
  //  "
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(208, 14),
  POS(208, 13)
};

static TAB_NUM t_func_variables_table[] = {
  1, // locals
  0, // parameters
  // map_reduce $buf variables
  var_map_reduce, 4, var_variables, lambda_39, var_append, string_6, 1, var_218_12_buf,
  // is_empty
  var_is_empty, 1, var_218_12_buf, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_48, lambda_49, TAIL_CALL,
  POS(218, 9),
  POS(274, 15),
  POS(273, 9)
};

static TAB_NUM t_lambda_39[] = {
  1, // locals
  2, // parameters
  var_219_3_name,
  var_219_8_info,
  // info $kind $value
  var_219_8_info, 0, 2, var_220_6_kind, var_220_12_value,
  // is_local_or_constant
  func_is_local_or_constant, 1, var_220_6_kind, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_40, lambda_41, TAIL_CALL,
  POS(220, 13),
  POS(222, 20),
  POS(221, 13)
};

static TAB_NUM t_lambda_40[] = {
  0, // locals
  0, // parameters
  //  ""
  LET, 1, string_6, TAIL_CALL,
  POS(223, 17)
};

static TAB_NUM t_lambda_41[] = {
  7, // locals
  0, // parameters
  // retrieve_base_and_method_count $base $method_count name
  func_retrieve_base_and_method_count, 1, var_219_3_name, 2, LOCAL(3), LOCAL(4),
  // $namespace name .before. "::"
  var_before, 2, var_219_3_name, string_11, 1, LOCAL(5),
  // truncate_until &name "::"
  var_truncate_until, 2, var_219_3_name, string_11, 1, var_219_3_name,
  // ATTRIBUTE, ATTRIBUTE_WITH_SETTER -> "POLYMORPHIC"
  var_std__sequence, 2, var_ATTRIBUTE, var_ATTRIBUTE_WITH_SETTER, 1, LOCAL(1),
  // INITIALIZED, INITIALIZED_COMPOUND -> "INITIALIZED"
  var_std__sequence, 2, var_INITIALIZED, var_INITIALIZED_COMPOUND, 1, LOCAL(2),
  // $type
  var_case, 14, var_220_6_kind, var_EXTERN, lambda_EXTERN, var_EXTERN_POLYMORPHIC, lambda_EXTERN_POLYMORPHIC, LOCAL(1), lambda_42, LOCAL(2), lambda_43, var_DYNAMIC, lambda_DYNAMIC, var_DERIVED, lambda_DERIVED, lambda_44, 1, LOCAL(6),
  // INITIALIZED, INITIALIZED_COMPOUND:
  var_std__sequence, 2, var_INITIALIZED, var_INITIALIZED_COMPOUND, 1, LOCAL(1),
  // EXTERN, EXTERN_POLYMORPHIC -> "
  var_std__sequence, 2, var_EXTERN, var_EXTERN_POLYMORPHIC, 1, LOCAL(2),
  // $initialization
  var_case, 12, var_220_6_kind, LOCAL(1), lambda_45, var_DERIVED, lambda_2_DERIVED, var_ATTRIBUTE, lambda_ATTRIBUTE, var_ATTRIBUTE_WITH_SETTER, lambda_ATTRIBUTE_WITH_SETTER, LOCAL(2), lambda_46, lambda_47, 1, LOCAL(7),
  // "
  var_std__string, 12, str_______FOT, LOCAL(6), string_19, LOCAL(4), string_20, var_219_3_name, string_17, LOCAL(5), string_21, LOCAL(3), LOCAL(7), string_22, 1, LOCAL(1),
  // -> "
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(225, 17),
  POS(226, 17),
  POS(227, 17),
  POS(233, 21),
  POS(234, 21),
  POS(228, 17),
  POS(243, 21),
  POS(261, 21),
  POS(240, 17),
  POS(265, 20),
  POS(265, 17)
};

static TAB_NUM t_lambda_EXTERN[] = {
  0, // locals
  0, // parameters
  //  "UNKNOWN"
  LET, 1, str_UNKNOWN, TAIL_CALL,
  POS(231, 30)
};

static TAB_NUM t_lambda_EXTERN_POLYMORPHIC[] = {
  0, // locals
  0, // parameters
  //  "UNKNOWN_POLYMORPHIC"
  LET, 1, str_UNKNOWN_POLYMORP, TAIL_CALL,
  POS(232, 42)
};

static TAB_NUM t_lambda_42[] = {
  0, // locals
  0, // parameters
  //  "POLYMORPHIC"
  LET, 1, str_POLYMORPHIC, TAIL_CALL,
  POS(233, 56)
};

static TAB_NUM t_lambda_43[] = {
  0, // locals
  0, // parameters
  //  "INITIALIZED"
  LET, 1, str_INITIALIZED, TAIL_CALL,
  POS(234, 57)
};

static TAB_NUM t_lambda_DYNAMIC[] = {
  0, // locals
  0, // parameters
  //  "UNINITIALIZED"
  LET, 1, str_UNINITIALIZED, TAIL_CALL,
  POS(235, 31)
};

static TAB_NUM t_lambda_DERIVED[] = {
  0, // locals
  0, // parameters
  //  "DERIVED"
  LET, 1, str_DERIVED, TAIL_CALL,
  POS(236, 31)
};

static TAB_NUM t_lambda_44[] = {
  0, // locals
  0, // parameters
  // edump `kind
  var_edump, 2, str_kind, var_220_6_kind, 0,
  // -> "???"
  LET, 1, string_14, TAIL_CALL,
  POS(238, 23),
  POS(239, 23)
};

static TAB_NUM t_lambda_45[] = {
  2, // locals
  0, // parameters
  // $idx mangled_literals(value)
  var_mangled_literals, 1, var_220_12_value, 1, LOCAL(2),
  // "
  var_std__string, 3, str_____const_idx, LOCAL(2), string_15, 1, LOCAL(1),
  // -> "
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(244, 23),
  POS(245, 26),
  POS(245, 23)
};

static TAB_NUM t_lambda_2_DERIVED[] = {
  4, // locals
  0, // parameters
  // $identifier identifier_of(value)
  var_identifier_of, 1, var_220_12_value, 1, LOCAL(2),
  // $dname identifier .truncate_until. "::"
  var_truncate_until, 2, LOCAL(2), string_11, 1, LOCAL(3),
  // $dnamespace identifier .before. "::"
  var_before, 2, LOCAL(2), string_11, 1, LOCAL(4),
  // "
  var_std__string, 5, string_16, LOCAL(3), string_17, LOCAL(4), string_18, 1, LOCAL(1),
  // -> "
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(249, 23),
  POS(250, 23),
  POS(251, 23),
  POS(252, 26),
  POS(252, 23)
};

static TAB_NUM t_lambda_ATTRIBUTE[] = {
  0, // locals
  0, // parameters
  //  "
  LET, 1, str_____has_a_setter, TAIL_CALL,
  POS(255, 33)
};

static TAB_NUM t_lambda_ATTRIBUTE_WITH_SETTER[] = {
  0, // locals
  0, // parameters
  //  "
  LET, 1, str_____has_a_setter_2, TAIL_CALL,
  POS(258, 45)
};

static TAB_NUM t_lambda_46[] = {
  3, // locals
  0, // parameters
  // second(info)))}@
  var_second, 1, var_219_8_info, 1, LOCAL(1),
  // get_source_position(second(info)))}@
  func_get_source_position, 1, LOCAL(1), 1, LOCAL(2),
  // "
  var_std__string, 3, str_____position, LOCAL(2), string_15, 1, LOCAL(3),
  //  "
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(263, 62),
  POS(263, 42),
  POS(261, 51),
  POS(261, 50)
};

static TAB_NUM t_lambda_47[] = {
  0, // locals
  0, // parameters
  //  ""
  LET, 1, string_6, TAIL_CALL,
  POS(264, 23)
};

static TAB_NUM t_lambda_48[] = {
  0, // locals
  0, // parameters
  //  ""
  LET, 1, string_6, TAIL_CALL,
  POS(275, 13)
};

static TAB_NUM t_lambda_49[] = {
  2, // locals
  0, // parameters
  // range(buf 1 -3))
  var_range, 3, var_218_12_buf, num_1, minus_num_3, 1, LOCAL(1),
  // "
  var_std__string, 3, str_static_FUNKY_VAR, LOCAL(1), string_4, 1, LOCAL(2),
  //  "
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(279, 15),
  POS(276, 14),
  POS(276, 13)
};

static TAB_NUM t_func_retrieve_base_and_method_count[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 282_34_identifier
  // $mangled_name mangle_identifier(identifier)
  var_mangle_identifier, 1, LOCAL(2), 1, var_283_1_mangled_name,
  // $type types(mangled_name)
  var_38_1_types, 1, var_283_1_mangled_name, 1, var_284_1_type,
  // is_defined
  var_is_defined, 1, var_284_1_type, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_50, lambda_51, TAIL_CALL,
  POS(283, 9),
  POS(284, 9),
  POS(286, 16),
  POS(285, 9)
};

static TAB_NUM t_lambda_50[] = {
  2, // locals
  0, // parameters
  // append(mangled_name "__attributes") length_of(type)
  var_append, 2, var_283_1_mangled_name, str___attributes, 1, LOCAL(1),
  // length_of(type)
  var_length_of, 1, var_284_1_type, 1, LOCAL(2),
  //  append(mangled_name "__attributes") length_of(type)
  LET, 2, LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(287, 14),
  POS(287, 50),
  POS(287, 13)
};

static TAB_NUM t_lambda_51[] = {
  0, // locals
  0, // parameters
  //  "NULL" "0"
  LET, 2, str_NULL, string_23, TAIL_CALL,
  POS(288, 13)
};

static TAB_NUM t_func_attributes_tables[] = {
  0, // locals
  0, // parameters
  // $buf ""
  LET, 1, string_6, 1, var_291_1_buf,
  // for_each types
  var_for_each, 3, var_38_1_types, lambda_52, lambda_55, TAIL_CALL,
  POS(291, 9),
  POS(292, 9)
};

static TAB_NUM t_lambda_52[] = {
  3, // locals
  2, // parameters
  LOCAL(2), // 293_3_type
  LOCAL(3), // 293_8_methods
  // "
  var_std__string, 3, str_static_ATTRIBUTE, LOCAL(2), str___attributes_2, 1, LOCAL(1),
  // append &buf "
  var_append, 2, var_291_1_buf, LOCAL(1), 1, var_291_1_buf,
  // for_each methods
  var_for_each, 3, LOCAL(3), lambda_53, lambda_54, TAIL_CALL,
  POS(294, 25),
  POS(294, 13),
  POS(297, 13)
};

static TAB_NUM t_lambda_53[] = {
  4, // locals
  1, // parameters
  LOCAL(2), // 298_3_item
  // item $method $value
  LOCAL(2), 0, 2, LOCAL(3), LOCAL(4),
  // "
  var_std__string, 5, string_24, LOCAL(3), string_25, LOCAL(4), string_26, 1, LOCAL(1),
  // append &buf "
  var_append, 2, var_291_1_buf, LOCAL(1), 1, var_291_1_buf,
  // next
  var_next, 0, TAIL_CALL,
  POS(299, 17),
  POS(300, 29),
  POS(300, 17),
  POS(303, 17)
};

static TAB_NUM t_lambda_54[] = {
  1, // locals
  0, // parameters
  // range(buf 1 -3) "@nl;};@nl;"
  var_range, 3, var_291_1_buf, num_1, minus_num_3, 1, LOCAL(1),
  // append !buf range(buf 1 -3) "@nl;};@nl;"
  var_append, 2, LOCAL(1), string_4, 1, var_291_1_buf,
  // next
  var_next, 0, TAIL_CALL,
  POS(305, 29),
  POS(305, 17),
  POS(306, 17)
};

static TAB_NUM t_lambda_55[] = {
  0, // locals
  0, // parameters
  //  buf
  LET, 1, var_291_1_buf, TAIL_CALL,
  POS(307, 13)
};

static TAB_NUM t_func_required_modules_table[] = {
  1, // locals
  0, // parameters
  // is_empty
  var_is_empty, 1, var_required_modules, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_56, lambda_57, TAIL_CALL,
  POS(311, 28),
  POS(310, 9)
};

static TAB_NUM t_lambda_56[] = {
  0, // locals
  0, // parameters
  //  ""
  LET, 1, string_6, TAIL_CALL,
  POS(312, 13)
};

static TAB_NUM t_lambda_57[] = {
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
  POS(316, 15),
  POS(324, 17),
  POS(323, 15),
  POS(314, 13)
};

static TAB_NUM t_lambda_required_modules[] = {
  3, // locals
  1, // parameters
  LOCAL(3), // 317_19_name
  // mangled_name(name));
  func_mangled_name, 1, LOCAL(3), 1, LOCAL(1),
  // "
  var_std__string, 3, str_extern_FUNKY_MOD, LOCAL(1), string_27, 1, LOCAL(2),
  // -> "
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(319, 51),
  POS(318, 22),
  POS(318, 19)
};

static TAB_NUM t_lambda_2_required_modules[] = {
  3, // locals
  1, // parameters
  LOCAL(3), // 325_19_name
  // mangled_name(name)),
  func_mangled_name, 1, LOCAL(3), 1, LOCAL(1),
  // "
  var_std__string, 3, str___module, LOCAL(1), string_10, 1, LOCAL(2),
  // -> "
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(328, 36),
  POS(326, 24),
  POS(326, 21)
};

static TAB_NUM t_func_mangled_name[] = {
  2, // locals
  1, // parameters
  var_332_16_name,
  // name .has_prefix. "./" &name:
  var_has_prefix, 2, var_332_16_name, string_7, 1, LOCAL(1),
  // update_if name .has_prefix. "./" &name:
  var_update_if, 3, LOCAL(1), var_332_16_name, lambda_58, 1, var_332_16_name,
  // replace_all(name '/' = "__")
  var_replace_all, 2, var_332_16_name, key_value_pair_337_21, 1, LOCAL(2),
  // -> replace_all(name '/' = "__")
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(333, 21),
  POS(333, 11),
  POS(337, 14),
  POS(337, 11)
};

static TAB_NUM t_lambda_58[] = {
  0, // locals
  0, // parameters
  // without_prefix &name "./"
  var_without_prefix, 2, var_332_16_name, string_7, 1, var_332_16_name,
  // without_prefix &name base_directory
  var_without_prefix, 2, var_332_16_name, var_base_directory, 1, var_332_16_name,
  // -> name
  LET, 1, var_332_16_name, TAIL_CALL,
  POS(334, 13),
  POS(335, 13),
  POS(336, 13)
};

static TAB_NUM t_func_reference_required_modules[] = {
  1, // locals
  0, // parameters
  // is_empty
  var_is_empty, 1, var_required_modules, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_59, lambda_60, TAIL_CALL,
  POS(341, 28),
  POS(340, 9)
};

static TAB_NUM t_lambda_59[] = {
  0, // locals
  0, // parameters
  //  "NULL, // required modules"
  LET, 1, str_NULL__required_m, TAIL_CALL,
  POS(342, 13)
};

static TAB_NUM t_lambda_60[] = {
  0, // locals
  0, // parameters
  //  "required_modules,"
  LET, 1, str_required_modules, TAIL_CALL,
  POS(343, 13)
};

static TAB_NUM t_func_defined_namespaces_table[] = {
  1, // locals
  0, // parameters
  // is_empty
  var_is_empty, 1, var_defined_namespaces, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_61, lambda_62, TAIL_CALL,
  POS(347, 30),
  POS(346, 9)
};

static TAB_NUM t_lambda_61[] = {
  0, // locals
  0, // parameters
  //  ""
  LET, 1, string_6, TAIL_CALL,
  POS(348, 13)
};

static TAB_NUM t_lambda_62[] = {
  2, // locals
  0, // parameters
  // map_reduce
  var_map_reduce, 2, var_defined_namespaces, lambda_defined_namespaces, 1, LOCAL(1),
  // range
  var_range, 3, LOCAL(1), num_1, minus_num_3, 1, LOCAL(2),
  // append
  var_append, 3, str_static_FUNKY_NAM, LOCAL(2), string_4, TAIL_CALL,
  POS(355, 17),
  POS(354, 15),
  POS(350, 13)
};

static TAB_NUM t_lambda_defined_namespaces[] = {
  5, // locals
  2, // parameters
  LOCAL(4), // 356_21_name
  LOCAL(5), // 356_26_version
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
  POS(357, 21),
  POS(360, 39),
  POS(360, 58),
  POS(358, 24),
  POS(358, 21)
};

static TAB_NUM t_func_reference_defined_namespaces[] = {
  1, // locals
  0, // parameters
  // is_empty
  var_is_empty, 1, var_defined_namespaces, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_63, lambda_64, TAIL_CALL,
  POS(366, 30),
  POS(365, 9)
};

static TAB_NUM t_lambda_63[] = {
  0, // locals
  0, // parameters
  //  "NULL, // defined namespaces"
  LET, 1, str_NULL__defined_na, TAIL_CALL,
  POS(367, 13)
};

static TAB_NUM t_lambda_64[] = {
  0, // locals
  0, // parameters
  //  "defined_namespaces,"
  LET, 1, str_defined_namespac, TAIL_CALL,
  POS(368, 13)
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
  POS(376, 13),
  POS(375, 11),
  POS(371, 9)
};

static TAB_NUM t_lambda_used_namespaces[] = {
  5, // locals
  2, // parameters
  LOCAL(4), // 377_18_name
  LOCAL(5), // 377_23_version
  // first(version)), @(second(version))},
  var_first, 1, LOCAL(5), 1, LOCAL(1),
  // second(version))},
  var_second, 1, LOCAL(5), 1, LOCAL(2),
  // "
  var_std__string, 7, string_29, LOCAL(4), string_21, LOCAL(1), string_30, LOCAL(2), string_26, 1, LOCAL(3),
  // -> "
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(380, 35),
  POS(380, 54),
  POS(378, 20),
  POS(378, 17)
};

static TAB_NUM t_func_tabular_functions[] = {
  0, // locals
  0, // parameters
  // map_reduce literals
  var_map_reduce, 4, var_literals, lambda_65, var_append, string_6, TAIL_CALL,
  POS(385, 9)
};

static TAB_NUM t_lambda_65[] = {
  2, // locals
  1, // parameters
  var_386_3_body,
  // node_type_of(body)
  var_node_type_of, 1, var_386_3_body, 1, LOCAL(1),
  // BODY, TYPE_FUNCTION:
  var_std__sequence, 2, var_BODY, var_TYPE_FUNCTION, 1, LOCAL(2),
  // case node_type_of(body)
  var_case, 4, LOCAL(1), LOCAL(2), lambda_66, lambda_67, TAIL_CALL,
  POS(387, 18),
  POS(388, 15),
  POS(387, 13)
};

static TAB_NUM t_lambda_66[] = {
  4, // locals
  0, // parameters
  // $mangled_name mangled_literals(body)
  var_mangled_literals, 1, var_386_3_body, 1, LOCAL(3),
  // statements_of(body) is_a_valid_statement)
  var_statements_of, 1, var_386_3_body, 1, LOCAL(1),
  // $statements filter(statements_of(body) is_a_valid_statement)
  var_filter, 2, LOCAL(1), func_is_a_valid_statement, 1, LOCAL(4),
  // parameters_of(body) statements
  var_parameters_of, 1, var_386_3_body, 1, LOCAL(1),
  // tabular_function
  func_tabular_function, 3, LOCAL(3), LOCAL(1), LOCAL(4), 1, LOCAL(2),
  // ->
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(389, 17),
  POS(390, 36),
  POS(390, 17),
  POS(393, 34),
  POS(392, 19),
  POS(391, 17)
};

static TAB_NUM t_lambda_67[] = {
  0, // locals
  0, // parameters
  //  ""
  LET, 1, string_6, TAIL_CALL,
  POS(394, 17)
};

static TAB_NUM t_lambda_68[] = {
  1, // locals
  0, // parameters
  // tabular_function("module_entry" empty_list top_level_statements)
  func_tabular_function, 3, str_module_entry, var_empty_list, var_30_32_top_level_statements, 1, LOCAL(1),
  //  tabular_function("module_entry" empty_list top_level_statements)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(398, 12),
  POS(398, 11)
};

static TAB_NUM t_func_tabular_function[] = {
  1, // locals
  3, // parameters
  var_400_20_name,
  var_400_25_parameters,
  var_400_36_statements,
  // is_empty
  var_is_empty, 1, var_400_36_statements, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_69, lambda_70, TAIL_CALL,
  POS(402, 18),
  POS(401, 5)
};

static TAB_NUM t_lambda_69[] = {
  0, // locals
  0, // parameters
  //  ""
  LET, 1, string_6, TAIL_CALL,
  POS(403, 9)
};

static TAB_NUM t_lambda_70[] = {
  7, // locals
  0, // parameters
  // !temp_count 0
  LET, 1, num_0, 1, var_temp_count,
  // !local_mapping empty_hash_table # maps variable names to local indices
  LET, 1, var_empty_hash_table, 1, var_local_mapping,
  // for_each !local_mapping !temp_count
  var_for_each, 3, var_400_25_parameters, lambda_71, lambda_75, 2, var_local_mapping, var_temp_count,
  // for_each !local_mapping !temp_count
  var_for_each, 3, var_400_36_statements, lambda_76, lambda_88, 2, var_local_mapping, var_temp_count,
  // $n length_of(statements)
  var_length_of, 1, var_400_36_statements, 1, var_452_1_n,
  // length_of(local_mapping)), // locals
  var_length_of, 1, var_local_mapping, 1, LOCAL(1),
  // temp_count+length_of(local_mapping)), // locals
  var_std__plus, 2, var_temp_count, LOCAL(1), 1, LOCAL(2),
  // add_parameters())@
  func_add_parameters, 0, 1, LOCAL(3),
  // map_reduce(statements: (idx statement) compile statement idx == n))@
  var_map_reduce, 2, var_400_36_statements, lambda_map_reducestatements, 1, LOCAL(4),
  // map_reduce(statements add_source_positions) 1 -3))
  var_map_reduce, 2, var_400_36_statements, var_add_source_positions, 1, LOCAL(5),
  // range(map_reduce(statements add_source_positions) 1 -3))
  var_range, 3, LOCAL(5), num_1, minus_num_3, 1, LOCAL(6),
  // "
  var_std__string, 9, str_static_TAB_NUM_t, var_400_20_name, string_31, LOCAL(2), str___locals, LOCAL(3), LOCAL(4), LOCAL(6), string_4, 1, LOCAL(7),
  // -> "
  LET, 1, LOCAL(7), TAIL_CALL,
  POS(405, 9),
  POS(406, 9),
  POS(407, 9),
  POS(422, 9),
  POS(452, 9),
  POS(456, 26),
  POS(456, 15),
  POS(457, 13),
  POS(458, 13),
  POS(459, 19),
  POS(459, 13),
  POS(453, 12),
  POS(453, 9)
};

static TAB_NUM t_lambda_71[] = {
  2, // locals
  1, // parameters
  var_409_3_parameter,
  // node_type_of(parameter) == REDEFINITION: # dummy parameter
  var_node_type_of, 1, var_409_3_parameter, 1, LOCAL(1),
  // node_type_of(parameter) == REDEFINITION: # dummy parameter
  var_std__equal, 2, LOCAL(1), var_REDEFINITION, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_72, lambda_73, TAIL_CALL,
  POS(411, 15),
  POS(411, 15),
  POS(410, 13)
};

static TAB_NUM t_lambda_72[] = {
  0, // locals
  0, // parameters
  // !temp_count 1
  LET, 1, num_1, 1, var_temp_count,
  // next
  var_next, 0, TAIL_CALL,
  POS(412, 17),
  POS(413, 17)
};

static TAB_NUM t_lambda_73[] = {
  3, // locals
  0, // parameters
  // $parameter_name funky::name_of(parameter)
  var_funky__name_of, 1, var_409_3_parameter, 1, var_415_1_parameter_name,
  // variables(parameter_name)) == LOCAL:
  var_variables, 1, var_415_1_parameter_name, 1, LOCAL(1),
  // first(variables(parameter_name)) == LOCAL:
  var_first, 1, LOCAL(1), 1, LOCAL(2),
  // first(variables(parameter_name)) == LOCAL:
  var_std__equal, 2, LOCAL(2), var_LOCAL, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_74, var_next, TAIL_CALL,
  POS(415, 17),
  POS(417, 25),
  POS(417, 19),
  POS(417, 19),
  POS(416, 17)
};

static TAB_NUM t_lambda_74[] = {
  3, // locals
  0, // parameters
  // length_of(local_mapping)+1
  var_length_of, 1, var_local_mapping, 1, LOCAL(1),
  // !local_mapping(parameter_name) length_of(local_mapping)+1
  var_std__plus, 2, LOCAL(1), num_1, 1, LOCAL(3),
  // local_mapping(parameter_name) length_of(local_mapping)+1
  var_local_mapping, 2, var_415_1_parameter_name, LOCAL(3), 1, var_local_mapping,
  // next
  var_next, 0, TAIL_CALL,
  POS(418, 52),
  POS(418, 21),
  POS(418, 22),
  POS(419, 21)
};

static TAB_NUM t_lambda_75[] = {
  0, // locals
  0, // parameters
  //  local_mapping temp_count
  LET, 2, var_local_mapping, var_temp_count, TAIL_CALL,
  POS(421, 13)
};

static TAB_NUM t_lambda_76[] = {
  2, // locals
  1, // parameters
  var_424_3_statement,
  // node_type_of(statement) == STATEMENT:
  var_node_type_of, 1, var_424_3_statement, 1, LOCAL(1),
  // node_type_of(statement) == STATEMENT:
  var_std__equal, 2, LOCAL(1), var_STATEMENT, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_77, var_next, TAIL_CALL,
  POS(426, 15),
  POS(426, 15),
  POS(425, 13)
};

static TAB_NUM t_lambda_77[] = {
  1, // locals
  0, // parameters
  // head_of(statement)
  var_head_of, 1, var_424_3_statement, 1, LOCAL(1),
  // check_for_locals !local_mapping !temp_count head_of(statement)
  func_check_for_locals, 1, LOCAL(1), 2, var_local_mapping, var_temp_count,
  // arguments_of(statement)
  var_arguments_of, 1, var_424_3_statement, 1, LOCAL(1),
  // for_each arguments_of(statement)
  var_for_each, 2, LOCAL(1), lambda_78, TAIL_CALL,
  POS(427, 61),
  POS(427, 17),
  POS(428, 26),
  POS(428, 17)
};

static TAB_NUM t_lambda_78[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 429_3_argument
  // check_for_locals !local_mapping !temp_count argument
  func_check_for_locals, 1, LOCAL(1), 2, var_local_mapping, var_temp_count,
  // next
  var_next, 0, TAIL_CALL,
  POS(430, 21),
  POS(431, 21)
};

static TAB_NUM t_func_check_for_locals[] = {
  0, // locals
  1, // parameters
  var_433_20_node,
  // cond
  var_cond, 3, lambda_79, lambda_82, lambda_86, TAIL_CALL,
  POS(434, 19)
};

static TAB_NUM t_lambda_79[] = {
  3, // locals
  0, // parameters
  // node_type_of(node) == REDEFINITION
  var_node_type_of, 1, var_433_20_node, 1, LOCAL(1),
  // node_type_of(node) == REDEFINITION
  var_std__equal, 2, LOCAL(1), var_REDEFINITION, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_80, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_81, TAIL_CALL,
  POS(437, 25),
  POS(437, 25),
  POS(436, 25),
  POS(435, 23)
};

static TAB_NUM t_lambda_80[] = {
  2, // locals
  0, // parameters
  // kind_of(node) == TEMPORARY
  var_kind_of, 1, var_433_20_node, 1, LOCAL(1),
  // kind_of(node) == TEMPORARY
  var_std__equal, 2, LOCAL(1), var_TEMPORARY, 1, LOCAL(2),
  // kind_of(node) == TEMPORARY
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(438, 25),
  POS(438, 25),
  POS(438, 25)
};

static TAB_NUM t_lambda_81[] = {
  2, // locals
  0, // parameters
  // no_of(node))
  var_no_of, 1, var_433_20_node, 1, LOCAL(1),
  // max(temp_count no_of(node))
  var_max, 2, var_temp_count, LOCAL(1), 1, LOCAL(2),
  //  local_mapping max(temp_count no_of(node))
  LET, 2, var_local_mapping, LOCAL(2), TAIL_CALL,
  POS(439, 55),
  POS(439, 40),
  POS(439, 25)
};

static TAB_NUM t_lambda_82[] = {
  2, // locals
  0, // parameters
  // node_type_of(node) == DEFINITION:
  var_node_type_of, 1, var_433_20_node, 1, LOCAL(1),
  // node_type_of(node) == DEFINITION:
  var_std__equal, 2, LOCAL(1), var_DEFINITION, 1, LOCAL(2),
  //  node_type_of(node) == DEFINITION:
  LET, 2, LOCAL(2), lambda_83, TAIL_CALL,
  POS(440, 24),
  POS(440, 24),
  POS(440, 23)
};

static TAB_NUM t_lambda_83[] = {
  4, // locals
  0, // parameters
  // $identifier identifier_of(node)
  var_identifier_of, 1, var_433_20_node, 1, var_441_1_identifier,
  // variables(identifier)) == LOCAL
  var_variables, 1, var_441_1_identifier, 1, LOCAL(1),
  // first(variables(identifier)) == LOCAL
  var_first, 1, LOCAL(1), 1, LOCAL(2),
  // first(variables(identifier)) == LOCAL
  var_std__equal, 2, LOCAL(2), var_LOCAL, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_84, lambda_85, 1, LOCAL(4),
  // ->
  LET, 2, LOCAL(4), var_temp_count, TAIL_CALL,
  POS(441, 23),
  POS(444, 33),
  POS(444, 27),
  POS(444, 27),
  POS(443, 25),
  POS(442, 23)
};

static TAB_NUM t_lambda_84[] = {
  3, // locals
  0, // parameters
  // length_of(local_mapping)+1)
  var_length_of, 1, var_local_mapping, 1, LOCAL(1),
  // length_of(local_mapping)+1)
  var_std__plus, 2, LOCAL(1), num_1, 1, LOCAL(2),
  // local_mapping(identifier length_of(local_mapping)+1)
  var_local_mapping, 2, var_441_1_identifier, LOCAL(2), 1, LOCAL(3),
  //  local_mapping(identifier length_of(local_mapping)+1)
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(445, 55),
  POS(445, 55),
  POS(445, 30),
  POS(445, 29)
};

static TAB_NUM t_lambda_85[] = {
  0, // locals
  0, // parameters
  //  local_mapping
  LET, 1, var_local_mapping, TAIL_CALL,
  POS(446, 29)
};

static TAB_NUM t_lambda_86[] = {
  0, // locals
  0, // parameters
  //  true
  LET, 2, var_true, lambda_87, TAIL_CALL,
  POS(448, 23)
};

static TAB_NUM t_lambda_87[] = {
  0, // locals
  0, // parameters
  //  local_mapping temp_count
  LET, 2, var_local_mapping, var_temp_count, TAIL_CALL,
  POS(449, 25)
};

static TAB_NUM t_lambda_88[] = {
  0, // locals
  0, // parameters
  //  local_mapping temp_count
  LET, 2, var_local_mapping, var_temp_count, TAIL_CALL,
  POS(451, 13)
};

static TAB_NUM t_lambda_map_reducestatements[] = {
  3, // locals
  2, // parameters
  LOCAL(2), // 458_26_idx
  LOCAL(3), // 458_30_statement
  // idx == n))@
  var_std__equal, 2, LOCAL(2), var_452_1_n, 1, LOCAL(1),
  // compile statement idx == n))@
  func_compile, 2, LOCAL(3), LOCAL(1), TAIL_CALL,
  POS(458, 70),
  POS(458, 52)
};

static TAB_NUM t_func_add_parameters[] = {
  1, // locals
  0, // parameters
  // $parameter_count length_of(parameters)
  var_length_of, 1, var_400_25_parameters, 1, var_463_1_parameter_count,
  // any_of(parameters: (parameter) -> option_of(parameter).is_defined):
  var_any_of, 2, var_400_25_parameters, lambda_any_ofparameters, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_89, lambda_90, TAIL_CALL,
  POS(463, 11),
  POS(465, 13),
  POS(464, 11)
};

static TAB_NUM t_lambda_any_ofparameters[] = {
  3, // locals
  1, // parameters
  LOCAL(3), // 465_20_parameter
  // option_of(parameter).is_defined):
  var_option_of, 1, LOCAL(3), 1, LOCAL(1),
  // is_defined):
  var_is_defined, 1, LOCAL(1), 1, LOCAL(2),
  // -> option_of(parameter).is_defined):
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(465, 47),
  POS(465, 68),
  POS(465, 44)
};

static TAB_NUM t_lambda_89[] = {
  2, // locals
  0, // parameters
  // "
  var_std__string, 3, string_32, var_463_1_parameter_count, str___parameters, 1, LOCAL(1),
  // map_reduce(parameters add_parameter_with_option append "")
  var_map_reduce, 4, var_400_25_parameters, func_add_parameter_with_option, var_append, string_6, 1, LOCAL(2),
  // append
  var_append, 2, LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(467, 17),
  POS(470, 17),
  POS(466, 15)
};

static TAB_NUM t_lambda_90[] = {
  2, // locals
  0, // parameters
  // "
  var_std__string, 3, string_8, var_463_1_parameter_count, str___parameters, 1, LOCAL(1),
  // map_reduce(parameters add_parameter append "")
  var_map_reduce, 4, var_400_25_parameters, func_add_parameter, var_append, string_6, 1, LOCAL(2),
  // append
  var_append, 2, LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(473, 17),
  POS(476, 17),
  POS(472, 15)
};

static TAB_NUM t_func_add_parameter[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 478_17_parameter
  // parameter_to_index(parameter)
  func_parameter_to_index, 1, LOCAL(2), 1, LOCAL(1),
  // append "  " parameter_to_index(parameter)
  var_append, 2, string_8, LOCAL(1), TAIL_CALL,
  POS(479, 23),
  POS(479, 11)
};

static TAB_NUM t_func_add_parameter_with_option[] = {
  4, // locals
  1, // parameters
  LOCAL(4), // 481_29_parameter
  // option_of(parameter).to_option
  var_option_of, 1, LOCAL(4), 1, LOCAL(1),
  // to_option
  var_to_option, 1, LOCAL(1), 1, LOCAL(2),
  // parameter_to_index(parameter)
  func_parameter_to_index, 1, LOCAL(4), 1, LOCAL(3),
  // append
  var_append, 4, string_8, LOCAL(2), string_30, LOCAL(3), TAIL_CALL,
  POS(484, 13),
  POS(484, 34),
  POS(486, 13),
  POS(482, 11)
};

static TAB_NUM t_func_parameter_to_index[] = {
  2, // locals
  1, // parameters
  var_488_22_parameter,
  // node_type_of(parameter) == REDEFINITION
  var_node_type_of, 1, var_488_22_parameter, 1, LOCAL(1),
  // node_type_of(parameter) == REDEFINITION
  var_std__equal, 2, LOCAL(1), var_REDEFINITION, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_91, lambda_92, TAIL_CALL,
  POS(490, 13),
  POS(490, 13),
  POS(489, 11)
};

static TAB_NUM t_lambda_91[] = {
  2, // locals
  0, // parameters
  // no_of(parameter))),@nl;"
  var_no_of, 1, var_488_22_parameter, 1, LOCAL(1),
  // "LOCAL(@(no_of(parameter))),@nl;"
  var_std__string, 3, str_LOCAL, LOCAL(1), string_33, 1, LOCAL(2),
  //  "LOCAL(@(no_of(parameter))),@nl;"
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(491, 25),
  POS(491, 16),
  POS(491, 15)
};

static TAB_NUM t_lambda_92[] = {
  1, // locals
  0, // parameters
  // $parameter_name funky::name_of(parameter)
  var_funky__name_of, 1, var_488_22_parameter, 1, var_493_1_parameter_name,
  // $idx local_mapping(parameter_name)
  var_local_mapping, 1, var_493_1_parameter_name, 1, var_494_1_idx,
  // is_defined
  var_is_defined, 1, var_494_1_idx, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_93, lambda_94, TAIL_CALL,
  POS(493, 15),
  POS(494, 15),
  POS(496, 21),
  POS(495, 15)
};

static TAB_NUM t_lambda_93[] = {
  2, // locals
  0, // parameters
  // temp_count+idx)), // @(parameter_name)@nl;"
  var_std__plus, 2, var_temp_count, var_494_1_idx, 1, LOCAL(1),
  // "LOCAL(@(temp_count+idx)), // @(parameter_name)@nl;"
  var_std__string, 5, str_LOCAL, LOCAL(1), string_34, var_493_1_parameter_name, string_1, 1, LOCAL(2),
  //  "LOCAL(@(temp_count+idx)), // @(parameter_name)@nl;"
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(497, 29),
  POS(497, 20),
  POS(497, 19)
};

static TAB_NUM t_lambda_94[] = {
  1, // locals
  0, // parameters
  // "var_@(parameter_name),@nl;"
  var_std__string, 3, str_var, var_493_1_parameter_name, string_10, 1, LOCAL(1),
  //  "var_@(parameter_name),@nl;"
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(498, 20),
  POS(498, 19)
};

static TAB_NUM t_func_is_a_valid_statement[] = {
  3, // locals
  1, // parameters
  var_500_24_statement,
  // node_type_of(statement) == STATEMENT && not(statement.is_a_definition)
  var_node_type_of, 1, var_500_24_statement, 1, LOCAL(1),
  // node_type_of(statement) == STATEMENT && not(statement.is_a_definition)
  var_std__equal, 2, LOCAL(1), var_STATEMENT, 1, LOCAL(2),
  // node_type_of(statement) == STATEMENT && not(statement.is_a_definition)
  var_std__and, 2, LOCAL(2), lambda_95, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_96, lambda_98, TAIL_CALL,
  POS(502, 5),
  POS(502, 5),
  POS(502, 5),
  POS(501, 3)
};

static TAB_NUM t_lambda_95[] = {
  2, // locals
  0, // parameters
  // is_a_definition)
  var_is_a_definition, 1, var_500_24_statement, 1, LOCAL(1),
  // not(statement.is_a_definition)
  var_not, 1, LOCAL(1), 1, LOCAL(2),
  // not(statement.is_a_definition)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(502, 59),
  POS(502, 45),
  POS(502, 45)
};

static TAB_NUM t_lambda_96[] = {
  3, // locals
  0, // parameters
  // head_of(statement).is_a_valid_argument
  var_head_of, 1, var_500_24_statement, 1, LOCAL(1),
  // is_a_valid_argument
  func_is_a_valid_argument, 1, LOCAL(1), 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_97, 1, LOCAL(3),
  // 
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(505, 9),
  POS(505, 28),
  POS(504, 9),
  POS(503, 7)
};

static TAB_NUM t_lambda_97[] = {
  2, // locals
  0, // parameters
  // arguments_of(statement) is_a_valid_argument)
  var_arguments_of, 1, var_500_24_statement, 1, LOCAL(1),
  // all_of(arguments_of(statement) is_a_valid_argument)
  var_all_of, 2, LOCAL(1), func_is_a_valid_argument, 1, LOCAL(2),
  // all_of(arguments_of(statement) is_a_valid_argument)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(506, 16),
  POS(506, 9),
  POS(506, 9)
};

static TAB_NUM t_lambda_98[] = {
  0, // locals
  0, // parameters
  //  false
  LET, 1, var_false, TAIL_CALL,
  POS(507, 7)
};

static TAB_NUM t_func_is_a_valid_argument[] = {
  1, // locals
  1, // parameters
  var_509_23_argument,
  // node_type_of(argument)
  var_node_type_of, 1, var_509_23_argument, 1, LOCAL(1),
  // case node_type_of(argument)
  var_case, 6, LOCAL(1), var_DEFINITION, lambda_DEFINITION, var_REDEFINITION, lambda_REDEFINITION, lambda_102, TAIL_CALL,
  POS(510, 10),
  POS(510, 5)
};

static TAB_NUM t_lambda_DEFINITION[] = {
  2, // locals
  0, // parameters
  // identifier_of(argument))
  var_identifier_of, 1, var_509_23_argument, 1, LOCAL(1),
  // variables(identifier_of(argument))
  var_variables, 1, LOCAL(1), 1, LOCAL(2),
  // check_destination variables(identifier_of(argument))
  func_check_destination, 1, LOCAL(2), TAIL_CALL,
  POS(512, 37),
  POS(512, 27),
  POS(512, 9)
};

static TAB_NUM t_lambda_REDEFINITION[] = {
  2, // locals
  0, // parameters
  // kind_of(argument) == TEMPORARY:
  var_kind_of, 1, var_509_23_argument, 1, LOCAL(1),
  // kind_of(argument) == TEMPORARY:
  var_std__equal, 2, LOCAL(1), var_TEMPORARY, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_99, lambda_101, TAIL_CALL,
  POS(515, 11),
  POS(515, 11),
  POS(514, 9)
};

static TAB_NUM t_lambda_99[] = {
  1, // locals
  0, // parameters
  // identifier_of(argument))
  var_identifier_of, 1, var_509_23_argument, 1, LOCAL(1),
  // $info variables(identifier_of(argument))
  var_variables, 1, LOCAL(1), 1, var_516_1_info,
  // is_defined:
  var_is_defined, 1, var_516_1_info, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_info_is_defined, lambda_100, TAIL_CALL,
  POS(516, 29),
  POS(516, 13),
  POS(518, 20),
  POS(517, 13)
};

static TAB_NUM t_lambda_info_is_defined[] = {
  0, // locals
  0, // parameters
  // check_destination info
  func_check_destination, 1, var_516_1_info, TAIL_CALL,
  POS(519, 17)
};

static TAB_NUM t_lambda_100[] = {
  0, // locals
  0, // parameters
  //  true
  LET, 1, var_true, TAIL_CALL,
  POS(520, 17)
};

static TAB_NUM t_lambda_101[] = {
  0, // locals
  0, // parameters
  //  true
  LET, 1, var_true, TAIL_CALL,
  POS(521, 13)
};

static TAB_NUM t_lambda_102[] = {
  0, // locals
  0, // parameters
  //  true
  LET, 1, var_true, TAIL_CALL,
  POS(522, 9)
};

static TAB_NUM t_func_check_destination[] = {
  3, // locals
  1, // parameters
  LOCAL(3), // 524_21_info
  // first(info)
  var_first, 1, LOCAL(3), 1, LOCAL(1),
  // sequence
  var_sequence, 7, var_CONSTANT, var_CONSTANT_COMPOUND, var_INITIALIZED, var_INITIALIZED_COMPOUND, var_DERIVED, var_ATTRIBUTE, var_ATTRIBUTE_WITH_SETTER, 1, LOCAL(2),
  // case first(info)
  var_case, 4, LOCAL(1), LOCAL(2), lambda_103, lambda_104, TAIL_CALL,
  POS(525, 12),
  POS(526, 9),
  POS(525, 7)
};

static TAB_NUM t_lambda_103[] = {
  0, // locals
  0, // parameters
  //  false
  LET, 1, var_false, TAIL_CALL,
  POS(534, 11)
};

static TAB_NUM t_lambda_104[] = {
  0, // locals
  0, // parameters
  //  true
  LET, 1, var_true, TAIL_CALL,
  POS(535, 11)
};

static TAB_NUM t_func_funky_types__node___variable_kind[] = {
  2, // locals
  3, // parameters
  LOCAL(2), // 539_35_node
  LOCAL(1),
  LOCAL(1),
  // edump `node
  var_edump, 2, str_node, LOCAL(2), 0,
  // debug_exit
  var_debug_exit, 0, TAIL_CALL,
  POS(540, 3),
  POS(541, 3)
};

static TAB_NUM t_func_std_types__undefined___variable_kind[] = {
  4, // locals
  3, // parameters
  LOCAL(1),
  LOCAL(1),
  LOCAL(4), // 543_51_flags
  // flags & POLYMORPHIC != 0
  var_std__bit_and, 2, LOCAL(4), var_POLYMORPHIC, 1, LOCAL(1),
  // flags & POLYMORPHIC != 0
  var_std__equal, 2, LOCAL(1), num_0, 1, LOCAL(2),
  // flags & POLYMORPHIC != 0
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_105, lambda_106, TAIL_CALL,
  POS(545, 5),
  POS(545, 5),
  POS(545, 5),
  POS(544, 3)
};

static TAB_NUM t_lambda_105[] = {
  0, // locals
  0, // parameters
  //  "extern polymorphic"
  LET, 1, str_extern_polymorph, TAIL_CALL,
  POS(546, 7)
};

static TAB_NUM t_lambda_106[] = {
  0, // locals
  0, // parameters
  //  "extern"
  LET, 1, str_extern, TAIL_CALL,
  POS(547, 7)
};

static TAB_NUM t_func_definition_variable_kind[] = {
  4, // locals
  3, // parameters
  LOCAL(1),
  var_553_34_level,
  LOCAL(4), // 553_40_flags
  // flags & HAS_SLOTS != 0
  var_std__bit_and, 2, LOCAL(4), var_HAS_SLOTS, 1, LOCAL(1),
  // flags & HAS_SLOTS != 0
  var_std__equal, 2, LOCAL(1), num_0, 1, LOCAL(2),
  // flags & HAS_SLOTS != 0
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_107, lambda_108, TAIL_CALL,
  POS(555, 5),
  POS(555, 5),
  POS(555, 5),
  POS(554, 3)
};

static TAB_NUM t_lambda_107[] = {
  0, // locals
  0, // parameters
  //  "extern"
  LET, 1, str_extern, TAIL_CALL,
  POS(556, 7)
};

static TAB_NUM t_lambda_108[] = {
  1, // locals
  0, // parameters
  // is_an_integer
  var_is_an_integer, 1, var_553_34_level, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_109, lambda_110, TAIL_CALL,
  POS(559, 15),
  POS(558, 7)
};

static TAB_NUM t_lambda_109[] = {
  0, // locals
  0, // parameters
  //  undefined # local
  LET, 1, var_undefined, TAIL_CALL,
  POS(560, 11)
};

static TAB_NUM t_lambda_110[] = {
  0, // locals
  0, // parameters
  //  "dynamic"
  LET, 1, str_dynamic, TAIL_CALL,
  POS(561, 11)
};

static TAB_NUM t_func_funky_types__statement___variable_kind[] = {
  5, // locals
  3, // parameters
  var_563_40_node,
  var_563_45_level,
  var_563_51_flags,
  // REDEFINED | HAS_SLOTS) != 0
  var_std__bit_or, 2, var_REDEFINED, var_HAS_SLOTS, 1, LOCAL(1),
  // flags & (REDEFINED | HAS_SLOTS) != 0
  var_std__bit_and, 2, var_563_51_flags, LOCAL(1), 1, LOCAL(2),
  // flags & (REDEFINED | HAS_SLOTS) != 0
  var_std__equal, 2, LOCAL(2), num_0, 1, LOCAL(3),
  // flags & (REDEFINED | HAS_SLOTS) != 0
  var_std__not, 1, LOCAL(3), 1, LOCAL(4),
  // 
  var_std__or, 2, LOCAL(4), lambda_111, 1, LOCAL(5),
  // if
  var_if, 3, LOCAL(5), lambda_112, lambda_118, TAIL_CALL,
  POS(566, 16),
  POS(566, 7),
  POS(566, 7),
  POS(566, 7),
  POS(565, 7),
  POS(564, 3)
};

static TAB_NUM t_lambda_111[] = {
  3, // locals
  0, // parameters
  // head_of(node)) .contains. ':'
  var_head_of, 1, var_563_40_node, 1, LOCAL(1),
  // identifier_of(head_of(node)) .contains. ':'
  var_identifier_of, 1, LOCAL(1), 1, LOCAL(2),
  // identifier_of(head_of(node)) .contains. ':'
  var_contains, 2, LOCAL(2), chr_58, 1, LOCAL(3),
  // identifier_of(head_of(node)) .contains. ':'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(567, 21),
  POS(567, 7),
  POS(567, 7),
  POS(567, 7)
};

static TAB_NUM t_lambda_112[] = {
  3, // locals
  0, // parameters
  // arguments_of(node)(1)
  var_arguments_of, 1, var_563_40_node, 1, LOCAL(1),
  // $argument arguments_of(node)(1)
  LOCAL(1), 1, num_1, 1, LOCAL(3),
  // node_type_of(argument) == FUNCTOR
  var_node_type_of, 1, LOCAL(3), 1, LOCAL(1),
  // node_type_of(argument) == FUNCTOR
  var_std__equal, 2, LOCAL(1), var_FUNCTOR, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_113, lambda_114, TAIL_CALL,
  POS(569, 17),
  POS(569, 7),
  POS(571, 9),
  POS(571, 9),
  POS(570, 7)
};

static TAB_NUM t_lambda_113[] = {
  0, // locals
  0, // parameters
  //  "derived"
  LET, 1, str_derived, TAIL_CALL,
  POS(572, 11)
};

static TAB_NUM t_lambda_114[] = {
  2, // locals
  0, // parameters
  // level == TOP_LEVEL || level == 0
  var_std__equal, 2, var_563_45_level, var_TOP_LEVEL, 1, LOCAL(1),
  // level == TOP_LEVEL || level == 0
  var_std__or, 2, LOCAL(1), lambda_115, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_116, lambda_117, TAIL_CALL,
  POS(575, 13),
  POS(575, 13),
  POS(574, 11)
};

static TAB_NUM t_lambda_115[] = {
  1, // locals
  0, // parameters
  // level == 0
  var_std__equal, 2, var_563_45_level, num_0, 1, LOCAL(1),
  // level == 0
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(575, 35),
  POS(575, 35)
};

static TAB_NUM t_lambda_116[] = {
  0, // locals
  0, // parameters
  //  "initialized"
  LET, 1, str_initialized, TAIL_CALL,
  POS(576, 15)
};

static TAB_NUM t_lambda_117[] = {
  0, // locals
  0, // parameters
  //  "dynamic"
  LET, 1, str_dynamic, TAIL_CALL,
  POS(577, 15)
};

static TAB_NUM t_lambda_118[] = {
  3, // locals
  0, // parameters
  // flags & POLYMORPHIC != 0
  var_std__bit_and, 2, var_563_51_flags, var_POLYMORPHIC, 1, LOCAL(1),
  // flags & POLYMORPHIC != 0
  var_std__equal, 2, LOCAL(1), num_0, 1, LOCAL(2),
  // flags & POLYMORPHIC != 0
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_119, lambda_120, TAIL_CALL,
  POS(580, 9),
  POS(580, 9),
  POS(580, 9),
  POS(579, 7)
};

static TAB_NUM t_lambda_119[] = {
  0, // locals
  0, // parameters
  //  "polymorphic"
  LET, 1, str_polymorphic, TAIL_CALL,
  POS(581, 11)
};

static TAB_NUM t_lambda_120[] = {
  0, // locals
  0, // parameters
  //  undefined # constant
  LET, 1, var_undefined, TAIL_CALL,
  POS(582, 11)
};

static TAB_NUM t_func_funky_types__node___variable_type_and_initialization[] = {
  1, // locals
  3, // parameters
  LOCAL(1),
  LOCAL(1),
  LOCAL(1),
  // -> undefined undefined
  LET, 2, var_undefined, var_undefined, TAIL_CALL,
  POS(587, 3)
};

static TAB_NUM t_func_std_types__undefined___variable_type_and_initialization[] = {
  4, // locals
  3, // parameters
  LOCAL(1),
  LOCAL(1),
  LOCAL(4), // 589_70_flags
  // flags & POLYMORPHIC != 0
  var_std__bit_and, 2, LOCAL(4), var_POLYMORPHIC, 1, LOCAL(1),
  // flags & POLYMORPHIC != 0
  var_std__equal, 2, LOCAL(1), num_0, 1, LOCAL(2),
  // flags & POLYMORPHIC != 0
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_121, lambda_122, TAIL_CALL,
  POS(591, 5),
  POS(591, 5),
  POS(591, 5),
  POS(590, 3)
};

static TAB_NUM t_lambda_121[] = {
  0, // locals
  0, // parameters
  //  "UNKNOWN_POLYMORPHIC" ""
  LET, 2, str_UNKNOWN_POLYMORP, string_6, TAIL_CALL,
  POS(592, 7)
};

static TAB_NUM t_lambda_122[] = {
  0, // locals
  0, // parameters
  //  "UNKNOWN" ""
  LET, 2, str_UNKNOWN, string_6, TAIL_CALL,
  POS(593, 7)
};

static TAB_NUM t_func_definition_variable_type_and_initialization[] = {
  4, // locals
  3, // parameters
  LOCAL(1),
  var_602_53_level,
  LOCAL(4), // 602_59_flags
  // flags & HAS_SLOTS != 0
  var_std__bit_and, 2, LOCAL(4), var_HAS_SLOTS, 1, LOCAL(1),
  // flags & HAS_SLOTS != 0
  var_std__equal, 2, LOCAL(1), num_0, 1, LOCAL(2),
  // flags & HAS_SLOTS != 0
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_123, lambda_124, TAIL_CALL,
  POS(604, 5),
  POS(604, 5),
  POS(604, 5),
  POS(603, 3)
};

static TAB_NUM t_lambda_123[] = {
  0, // locals
  0, // parameters
  //  "UNKNOWN" ""
  LET, 2, str_UNKNOWN, string_6, TAIL_CALL,
  POS(605, 7)
};

static TAB_NUM t_lambda_124[] = {
  1, // locals
  0, // parameters
  // is_an_integer
  var_is_an_integer, 1, var_602_53_level, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_125, lambda_126, TAIL_CALL,
  POS(608, 15),
  POS(607, 7)
};

static TAB_NUM t_lambda_125[] = {
  0, // locals
  0, // parameters
  //  undefined undefined # local
  LET, 2, var_undefined, var_undefined, TAIL_CALL,
  POS(609, 11)
};

static TAB_NUM t_lambda_126[] = {
  0, // locals
  0, // parameters
  //  "UNINITIALIZED" ""
  LET, 2, str_UNINITIALIZED, string_6, TAIL_CALL,
  POS(610, 11)
};

static TAB_NUM t_func_funky_types__statement___variable_type_and_initialization[] = {
  3, // locals
  3, // parameters
  var_612_59_node,
  var_612_64_level,
  var_612_70_flags,
  // arguments_of(node)(1)
  var_arguments_of, 1, var_612_59_node, 1, LOCAL(1),
  // $argument arguments_of(node)(1)
  LOCAL(1), 1, num_1, 1, var_613_1_argument,
  // flags & POLYMORPHIC != 0
  var_std__bit_and, 2, var_612_70_flags, var_POLYMORPHIC, 1, LOCAL(1),
  // flags & POLYMORPHIC != 0
  var_std__equal, 2, LOCAL(1), num_0, 1, LOCAL(2),
  // flags & POLYMORPHIC != 0
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_127, lambda_130, TAIL_CALL,
  POS(613, 13),
  POS(613, 3),
  POS(615, 5),
  POS(615, 5),
  POS(615, 5),
  POS(614, 3)
};

static TAB_NUM t_lambda_127[] = {
  3, // locals
  0, // parameters
  // node_type_of(argument) == ATTRIBUTE_WITH_SETTER
  var_node_type_of, 1, var_613_1_argument, 1, LOCAL(1),
  // node_type_of(argument) == ATTRIBUTE_WITH_SETTER
  var_std__equal, 2, LOCAL(1), var_ATTRIBUTE_WITH_SETTER, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_128, lambda_129, 1, LOCAL(3),
  // 
  LET, 2, str_POLYMORPHIC, LOCAL(3), TAIL_CALL,
  POS(619, 9),
  POS(619, 9),
  POS(618, 7),
  POS(616, 7)
};

static TAB_NUM t_lambda_128[] = {
  0, // locals
  0, // parameters
  //  "
  LET, 1, str_____has_a_setter_2, TAIL_CALL,
  POS(620, 11)
};

static TAB_NUM t_lambda_129[] = {
  0, // locals
  0, // parameters
  //  "
  LET, 1, str_____has_a_setter, TAIL_CALL,
  POS(623, 11)
};

static TAB_NUM t_lambda_130[] = {
  5, // locals
  0, // parameters
  // REDEFINED | HAS_SLOTS) != 0
  var_std__bit_or, 2, var_REDEFINED, var_HAS_SLOTS, 1, LOCAL(1),
  // flags & (REDEFINED | HAS_SLOTS) != 0
  var_std__bit_and, 2, var_612_70_flags, LOCAL(1), 1, LOCAL(2),
  // flags & (REDEFINED | HAS_SLOTS) != 0
  var_std__equal, 2, LOCAL(2), num_0, 1, LOCAL(3),
  // flags & (REDEFINED | HAS_SLOTS) != 0
  var_std__not, 1, LOCAL(3), 1, LOCAL(4),
  // 
  var_std__or, 2, LOCAL(4), lambda_131, 1, LOCAL(5),
  // if
  var_if, 3, LOCAL(5), lambda_132, lambda_138, TAIL_CALL,
  POS(629, 20),
  POS(629, 11),
  POS(629, 11),
  POS(629, 11),
  POS(628, 11),
  POS(627, 7)
};

static TAB_NUM t_lambda_131[] = {
  3, // locals
  0, // parameters
  // head_of(node)) .contains. ':'
  var_head_of, 1, var_612_59_node, 1, LOCAL(1),
  // identifier_of(head_of(node)) .contains. ':'
  var_identifier_of, 1, LOCAL(1), 1, LOCAL(2),
  // identifier_of(head_of(node)) .contains. ':'
  var_contains, 2, LOCAL(2), chr_58, 1, LOCAL(3),
  // identifier_of(head_of(node)) .contains. ':'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(630, 25),
  POS(630, 11),
  POS(630, 11),
  POS(630, 11)
};

static TAB_NUM t_lambda_132[] = {
  2, // locals
  0, // parameters
  // node_type_of(argument) == FUNCTOR:
  var_node_type_of, 1, var_613_1_argument, 1, LOCAL(1),
  // node_type_of(argument) == FUNCTOR:
  var_std__equal, 2, LOCAL(1), var_FUNCTOR, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_133, lambda_134, TAIL_CALL,
  POS(633, 13),
  POS(633, 13),
  POS(632, 11)
};

static TAB_NUM t_lambda_133[] = {
  4, // locals
  0, // parameters
  // $identifier identifier_of(argument)
  var_identifier_of, 1, var_613_1_argument, 1, LOCAL(2),
  // $name identifier .truncate_until. "::"
  var_truncate_until, 2, LOCAL(2), string_11, 1, LOCAL(3),
  // $namespace identifier .before. "::"
  var_before, 2, LOCAL(2), string_11, 1, LOCAL(4),
  // "
  var_std__string, 5, string_16, LOCAL(3), string_17, LOCAL(4), string_18, 1, LOCAL(1),
  // -> "DERIVED" "
  LET, 2, str_DERIVED, LOCAL(1), TAIL_CALL,
  POS(634, 15),
  POS(635, 15),
  POS(636, 15),
  POS(637, 28),
  POS(637, 15)
};

static TAB_NUM t_lambda_134[] = {
  2, // locals
  0, // parameters
  // level == TOP_LEVEL || level == 0:
  var_std__equal, 2, var_612_64_level, var_TOP_LEVEL, 1, LOCAL(1),
  // level == TOP_LEVEL || level == 0:
  var_std__or, 2, LOCAL(1), lambda_135, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_136, lambda_137, TAIL_CALL,
  POS(642, 17),
  POS(642, 17),
  POS(641, 15)
};

static TAB_NUM t_lambda_135[] = {
  1, // locals
  0, // parameters
  // level == 0:
  var_std__equal, 2, var_612_64_level, num_0, 1, LOCAL(1),
  // level == 0:
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(642, 39),
  POS(642, 39)
};

static TAB_NUM t_lambda_136[] = {
  2, // locals
  0, // parameters
  // $idx mangled_literals(argument)
  var_mangled_literals, 1, var_613_1_argument, 1, LOCAL(2),
  // "
  var_std__string, 3, str_____const_idx, LOCAL(2), string_15, 1, LOCAL(1),
  // -> "INITIALIZED" "
  LET, 2, str_INITIALIZED, LOCAL(1), TAIL_CALL,
  POS(643, 19),
  POS(644, 36),
  POS(644, 19)
};

static TAB_NUM t_lambda_137[] = {
  0, // locals
  0, // parameters
  //  "UNINITIALIZED" ""
  LET, 2, str_UNINITIALIZED, string_6, TAIL_CALL,
  POS(647, 19)
};

static TAB_NUM t_lambda_138[] = {
  0, // locals
  0, // parameters
  //  undefined undefined # constant
  LET, 2, var_undefined, var_undefined, TAIL_CALL,
  POS(648, 11)
};

static TAB_NUM t_func_funky_types__initial_value___to_option[] = {
  3, // locals
  1, // parameters
  LOCAL(3), // 655_40_self
  // operand_of(self).to_index
  var_operand_of, 1, LOCAL(3), 1, LOCAL(1),
  // to_index
  var_to_index, 1, LOCAL(1), 1, LOCAL(2),
  // -> operand_of(self).to_index
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(655, 50),
  POS(655, 67),
  POS(655, 47)
};

static TAB_NUM t_func_compile[] = {
  8, // locals
  2, // parameters
  var_657_11_self,
  var_657_16_is_last,
  // $head head_of(self)
  var_head_of, 1, var_657_11_self, 1, var_658_1_head,
  // $arguments arguments_of(self)
  var_arguments_of, 1, var_657_11_self, 1, LOCAL(6),
  // $input_arguments filter(arguments is_an_input)
  var_filter, 2, LOCAL(6), var_is_an_input, 1, LOCAL(7),
  // $output_arguments filter(arguments is_an_output)
  var_filter, 2, LOCAL(6), var_is_an_output, 1, LOCAL(8),
  // $input_count length_of(input_arguments)
  var_length_of, 1, LOCAL(7), 1, var_662_1_input_count,
  // $output_count length_of(output_arguments)
  var_length_of, 1, LOCAL(8), 1, var_663_1_output_count,
  // is_an_io_call:
  var_is_an_io_call, 1, var_657_11_self, 1, LOCAL(1),
  // !output_count
  var_if, 3, LOCAL(1), lambda_self_is_an_io_call, lambda_141, 1, var_663_1_output_count,
  // $inputs map_reduce(input_arguments to_separated_index append "")
  var_map_reduce, 4, LOCAL(7), var_to_separated_index, var_append, string_6, 1, var_676_1_inputs,
  // $outputs map_reduce(output_arguments to_separated_index append "")
  var_map_reduce, 4, LOCAL(8), var_to_separated_index, var_append, string_6, 1, var_677_1_outputs,
  // is_last && outputs.is_not_empty:
  var_std__and, 2, var_657_16_is_last, lambda_144, 1, LOCAL(1),
  // on is_last && outputs.is_not_empty:
  var_on, 2, LOCAL(1), lambda_145, 0,
  // source_position_of(self))@
  var_source_position_of, 1, var_657_11_self, 1, LOCAL(1),
  // "
  var_std__string, 2, string_36, LOCAL(1), 1, LOCAL(2),
  // node_type_of(head) == FUNCTOR:
  var_node_type_of, 1, var_658_1_head, 1, LOCAL(3),
  // node_type_of(head) == FUNCTOR:
  var_std__equal, 2, LOCAL(3), var_FUNCTOR, 1, LOCAL(4),
  // if
  var_if, 3, LOCAL(4), lambda_146, lambda_149, 1, LOCAL(5),
  // append
  var_append, 2, LOCAL(2), LOCAL(5), TAIL_CALL,
  POS(658, 3),
  POS(659, 3),
  POS(660, 3),
  POS(661, 3),
  POS(662, 3),
  POS(663, 3),
  POS(666, 12),
  POS(664, 3),
  POS(676, 3),
  POS(677, 3),
  POS(678, 6),
  POS(678, 3),
  POS(683, 14),
  POS(681, 5),
  POS(685, 7),
  POS(685, 7),
  POS(684, 5),
  POS(680, 3)
};

static TAB_NUM t_lambda_self_is_an_io_call[] = {
  0, // locals
  0, // parameters
  // if
  var_if, 3, var_657_16_is_last, lambda_139, lambda_140, TAIL_CALL,
  POS(667, 9)
};

static TAB_NUM t_lambda_139[] = {
  0, // locals
  0, // parameters
  //  "IO_TAIL_CALL"
  LET, 1, str_IO_TAIL_CALL, TAIL_CALL,
  POS(669, 13)
};

static TAB_NUM t_lambda_140[] = {
  1, // locals
  0, // parameters
  // "IO_CALL(@(output_count))"
  var_std__string, 3, str_IO_CALL, var_663_1_output_count, string_35, 1, LOCAL(1),
  //  "IO_CALL(@(output_count))"
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(670, 14),
  POS(670, 13)
};

static TAB_NUM t_lambda_141[] = {
  0, // locals
  0, // parameters
  // if
  var_if, 3, var_657_16_is_last, lambda_142, lambda_143, TAIL_CALL,
  POS(672, 9)
};

static TAB_NUM t_lambda_142[] = {
  0, // locals
  0, // parameters
  //  "TAIL_CALL"
  LET, 1, str_TAIL_CALL, TAIL_CALL,
  POS(674, 13)
};

static TAB_NUM t_lambda_143[] = {
  0, // locals
  0, // parameters
  //  output_count
  LET, 1, var_663_1_output_count, TAIL_CALL,
  POS(675, 13)
};

static TAB_NUM t_lambda_144[] = {
  1, // locals
  0, // parameters
  // is_not_empty:
  var_is_not_empty, 1, var_677_1_outputs, 1, LOCAL(1),
  // outputs.is_not_empty:
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(678, 25),
  POS(678, 17)
};

static TAB_NUM t_lambda_145[] = {
  0, // locals
  0, // parameters
  // syntax_error "Last statement is not a tail call" self
  var_syntax_error, 2, str_Last_statement_i, var_657_11_self, TAIL_CALL,
  POS(679, 5)
};

static TAB_NUM t_lambda_146[] = {
  1, // locals
  0, // parameters
  // identifier_of(head)
  var_identifier_of, 1, var_658_1_head, 1, LOCAL(1),
  // case identifier_of(head)
  var_case, 6, LOCAL(1), sequence_687_1, lambda_147, str__assign_attribut, lambda_assign_attributes, lambda_148, TAIL_CALL,
  POS(686, 14),
  POS(686, 9)
};

static TAB_NUM t_lambda_147[] = {
  1, // locals
  0, // parameters
  // "
  var_std__string, 7, str___LET, var_662_1_input_count, var_676_1_inputs, string_30, var_663_1_output_count, var_677_1_outputs, string_10, 1, LOCAL(1),
  //  "
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(687, 38),
  POS(687, 37)
};

static TAB_NUM t_lambda_assign_attributes[] = {
  2, // locals
  0, // parameters
  // input_count-1)@(inputs)@(outputs),
  var_std__minus, 2, var_662_1_input_count, num_1, 1, LOCAL(1),
  // "
  var_std__string, 5, str___LET_2, LOCAL(1), var_676_1_inputs, var_677_1_outputs, string_10, 1, LOCAL(2),
  //  "
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(694, 18),
  POS(691, 35),
  POS(691, 34)
};

static TAB_NUM t_lambda_148[] = {
  2, // locals
  0, // parameters
  // to_index), @
  var_to_index, 1, var_658_1_head, 1, LOCAL(1),
  // "
  var_std__string, 9, string_8, LOCAL(1), string_30, var_662_1_input_count, var_676_1_inputs, string_30, var_663_1_output_count, var_677_1_outputs, string_10, 1, LOCAL(2),
  //  "
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(697, 22),
  POS(695, 14),
  POS(695, 13)
};

static TAB_NUM t_lambda_149[] = {
  2, // locals
  0, // parameters
  // to_index),
  var_to_index, 1, var_658_1_head, 1, LOCAL(1),
  // "
  var_std__string, 5, str___LET_3, var_676_1_inputs, string_37, LOCAL(1), string_10, 1, LOCAL(2),
  //  "
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(701, 38),
  POS(699, 10),
  POS(699, 9)
};

static TAB_NUM t_func_funky_types__node___add_source_positions[] = {
  1, // locals
  1, // parameters
  LOCAL(1),
  // -> ""
  LET, 1, string_6, TAIL_CALL,
  POS(705, 50)
};

static TAB_NUM t_func_funky_types__statement___add_source_positions[] = {
  3, // locals
  1, // parameters
  LOCAL(3), // 707_47_self
  // get_source_position(self)),@nl;"
  func_get_source_position, 1, LOCAL(3), 1, LOCAL(1),
  // "  @(get_source_position(self)),@nl;"
  var_std__string, 3, string_8, LOCAL(1), string_10, 1, LOCAL(2),
  // -> "  @(get_source_position(self)),@nl;"
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(708, 11),
  POS(708, 6),
  POS(708, 3)
};

static TAB_NUM t_func_get_source_position[] = {
  1, // locals
  1, // parameters
  var_710_23_node,
  // $source_group source_group_of(node)
  var_source_group_of, 1, var_710_23_node, 1, var_711_1_source_group,
  // is_defined:
  var_is_defined, 1, var_711_1_source_group, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_source_group_is_defined, lambda_150, TAIL_CALL,
  POS(711, 3),
  POS(714, 18),
  POS(713, 3)
};

static TAB_NUM t_lambda_source_group_is_defined[] = {
  9, // locals
  0, // parameters
  // source_group $indent $text
  var_711_1_source_group, 0, 2, LOCAL(6), LOCAL(7),
  // $line_no line_no_of(source_group)
  var_line_no_of, 1, var_711_1_source_group, 1, LOCAL(8),
  // length_of(text)+1-length_of(source_position_of(node))
  var_length_of, 1, LOCAL(7), 1, LOCAL(1),
  // indent+length_of(text)+1-length_of(source_position_of(node))
  var_std__plus, 2, LOCAL(6), LOCAL(1), 1, LOCAL(2),
  // indent+length_of(text)+1-length_of(source_position_of(node))
  var_std__plus, 2, LOCAL(2), num_1, 1, LOCAL(3),
  // source_position_of(node))
  var_source_position_of, 1, var_710_23_node, 1, LOCAL(4),
  // length_of(source_position_of(node))
  var_length_of, 1, LOCAL(4), 1, LOCAL(5),
  // $column_no indent+length_of(text)+1-length_of(source_position_of(node))
  var_std__minus, 2, LOCAL(3), LOCAL(5), 1, LOCAL(9),
  // "POS(@(line_no), @(column_no))"
  var_std__string, 5, str_POS, LOCAL(8), string_30, LOCAL(9), string_35, 1, LOCAL(1),
  // -> "POS(@(line_no), @(column_no))"
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(715, 7),
  POS(716, 7),
  POS(717, 25),
  POS(717, 18),
  POS(717, 18),
  POS(717, 53),
  POS(717, 43),
  POS(717, 7),
  POS(718, 10),
  POS(718, 7)
};

static TAB_NUM t_lambda_150[] = {
  0, // locals
  0, // parameters
  //  "POS(0, 0)"
  LET, 1, str_POS_2, TAIL_CALL,
  POS(719, 7)
};

static TAB_NUM t_func_funky_types__node___to_separated_index[] = {
  3, // locals
  1, // parameters
  LOCAL(3), // 723_40_self
  // to_index)
  var_to_index, 1, LOCAL(3), 1, LOCAL(1),
  // append(", " self.to_index)
  var_append, 2, string_30, LOCAL(1), 1, LOCAL(2),
  // -> append(", " self.to_index)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(723, 67),
  POS(723, 50),
  POS(723, 47)
};

static TAB_NUM t_func_funky_types__inline_attribute_value_pair___to_separated_index[] = {
  5, // locals
  1, // parameters
  LOCAL(5), // 725_63_self
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
  POS(726, 11),
  POS(726, 35),
  POS(726, 55),
  POS(726, 6),
  POS(726, 3)
};

static TAB_NUM t_func_funky_types__inline_method_value_pair___to_separated_index[] = {
  5, // locals
  1, // parameters
  LOCAL(5), // 728_60_self
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
  POS(729, 12),
  POS(729, 36),
  POS(729, 56),
  POS(729, 6),
  POS(729, 3)
};

static TAB_NUM t_func_funky_types__attribute_value_pair___to_separated_index[] = {
  5, // locals
  1, // parameters
  LOCAL(5), // 731_56_self
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
  POS(732, 11),
  POS(732, 35),
  POS(732, 53),
  POS(732, 6),
  POS(732, 3)
};

static TAB_NUM t_func_funky_types__method_value_pair___to_separated_index[] = {
  5, // locals
  1, // parameters
  LOCAL(5), // 734_53_self
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
  POS(735, 12),
  POS(735, 36),
  POS(735, 54),
  POS(735, 6),
  POS(735, 3)
};

static TAB_NUM t_func_funky_types__type_function___to_separated_index[] = {
  3, // locals
  1, // parameters
  LOCAL(3), // 737_49_self
  // mangled_literals(self))"
  var_mangled_literals, 1, LOCAL(3), 1, LOCAL(1),
  // ", 0, @(mangled_literals(self))"
  var_std__string, 2, string_19, LOCAL(1), 1, LOCAL(2),
  // -> ", 0, @(mangled_literals(self))"
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(738, 14),
  POS(738, 6),
  POS(738, 3)
};

static TAB_NUM t_func_funky_types__node___to_index[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 752_30_self
  // debug_write "/to_index failed: "
  var_debug_write, 1, str_to_index_failed, 0,
  // edump `self
  var_edump, 2, str_self, LOCAL(1), 0,
  // -> "?"
  LET, 1, string_38, TAIL_CALL,
  POS(753, 3),
  POS(754, 3),
  POS(755, 3)
};

static TAB_NUM t_func_retrieve_name[] = {
  1, // locals
  1, // parameters
  var_762_17_self,
  // kind_of(self)
  var_kind_of, 1, var_762_17_self, 1, LOCAL(1),
  // case kind_of(self)
  var_case, 6, LOCAL(1), var_TEMPORARY, lambda_TEMPORARY, var_CONSTANT, lambda_CONSTANT, lambda_154, TAIL_CALL,
  POS(763, 8),
  POS(763, 3)
};

static TAB_NUM t_lambda_TEMPORARY[] = {
  2, // locals
  0, // parameters
  // identifier_of(self))
  var_identifier_of, 1, var_762_17_self, 1, LOCAL(1),
  // $info variables(identifier_of(self))
  var_variables, 1, LOCAL(1), 1, var_765_1_info,
  // is_defined && second(info).is_defined
  var_is_defined, 1, var_765_1_info, 1, LOCAL(1),
  // is_defined && second(info).is_defined
  var_std__and, 2, LOCAL(1), lambda_151, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_152, lambda_153, TAIL_CALL,
  POS(765, 23),
  POS(765, 7),
  POS(767, 14),
  POS(767, 14),
  POS(766, 7)
};

static TAB_NUM t_lambda_151[] = {
  2, // locals
  0, // parameters
  // second(info).is_defined
  var_second, 1, var_765_1_info, 1, LOCAL(1),
  // is_defined
  var_is_defined, 1, LOCAL(1), 1, LOCAL(2),
  // second(info).is_defined
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(767, 28),
  POS(767, 41),
  POS(767, 28)
};

static TAB_NUM t_lambda_152[] = {
  2, // locals
  0, // parameters
  // second(info))
  var_second, 1, var_765_1_info, 1, LOCAL(1),
  // mangled_literals(second(info))
  var_mangled_literals, 1, LOCAL(1), 1, LOCAL(2),
  //  mangled_literals(second(info))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(768, 29),
  POS(768, 12),
  POS(768, 11)
};

static TAB_NUM t_lambda_153[] = {
  2, // locals
  0, // parameters
  // no_of(self)))"
  var_no_of, 1, var_762_17_self, 1, LOCAL(1),
  // "LOCAL(@(no_of(self)))"
  var_std__string, 3, str_LOCAL, LOCAL(1), string_35, 1, LOCAL(2),
  //  "LOCAL(@(no_of(self)))"
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(769, 21),
  POS(769, 12),
  POS(769, 11)
};

static TAB_NUM t_lambda_CONSTANT[] = {
  1, // locals
  0, // parameters
  // mangled_literals(self)
  var_mangled_literals, 1, var_762_17_self, 1, LOCAL(1),
  //  mangled_literals(self)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(770, 17),
  POS(770, 16)
};

static TAB_NUM t_lambda_154[] = {
  3, // locals
  0, // parameters
  // $identifier identifier_of(self)
  var_identifier_of, 1, var_762_17_self, 1, var_772_1_identifier,
  // variables(identifier) $kind $value
  var_variables, 1, var_772_1_identifier, 1, LOCAL(1),
  // variables(identifier) $kind $value
  LOCAL(1), 0, 2, var_773_23_kind, var_773_29_value,
  // INITIALIZED, INITIALIZED_COMPOUND
  var_std__sequence, 2, var_INITIALIZED, var_INITIALIZED_COMPOUND, 1, LOCAL(1),
  // sequence
  var_sequence, 7, var_DERIVED, var_DYNAMIC, var_EXTERN, var_EXTERN_POLYMORPHIC, LOCAL(1), var_ATTRIBUTE, var_ATTRIBUTE_WITH_SETTER, 1, LOCAL(2),
  // CONSTANT, CONSTANT_COMPOUND -> mangled_literals(value)
  var_std__sequence, 2, var_CONSTANT, var_CONSTANT_COMPOUND, 1, LOCAL(3),
  // case kind
  var_case, 8, var_773_23_kind, var_LOCAL, lambda_LOCAL, LOCAL(2), lambda_155, LOCAL(3), lambda_156, lambda_157, TAIL_CALL,
  POS(772, 7),
  POS(773, 7),
  POS(773, 7),
  POS(781, 11),
  POS(776, 9),
  POS(786, 9),
  POS(774, 7)
};

static TAB_NUM t_lambda_LOCAL[] = {
  3, // locals
  0, // parameters
  // local_mapping(identifier)))"
  var_local_mapping, 1, var_772_1_identifier, 1, LOCAL(1),
  // temp_count+local_mapping(identifier)))"
  var_std__plus, 2, var_temp_count, LOCAL(1), 1, LOCAL(2),
  // "LOCAL(@(temp_count+local_mapping(identifier)))"
  var_std__string, 3, str_LOCAL, LOCAL(2), string_35, 1, LOCAL(3),
  //  "LOCAL(@(temp_count+local_mapping(identifier)))"
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(775, 38),
  POS(775, 27),
  POS(775, 18),
  POS(775, 17)
};

static TAB_NUM t_lambda_155[] = {
  2, // locals
  0, // parameters
  // mangle_identifier(identifier))
  var_mangle_identifier, 1, var_772_1_identifier, 1, LOCAL(1),
  // append("var_" mangle_identifier(identifier))
  var_append, 2, str_var, LOCAL(1), 1, LOCAL(2),
  // 
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(785, 25),
  POS(785, 11),
  POS(784, 11)
};

static TAB_NUM t_lambda_156[] = {
  1, // locals
  0, // parameters
  // mangled_literals(value)
  var_mangled_literals, 1, var_773_29_value, 1, LOCAL(1),
  //  mangled_literals(value)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(786, 40),
  POS(786, 39)
};

static TAB_NUM t_lambda_157[] = {
  0, // locals
  0, // parameters
  // edump `kind
  var_edump, 2, str_kind, var_773_23_kind, 0,
  // edump `value
  var_edump, 2, str_value, var_773_29_value, 0,
  // debug_exit
  var_debug_exit, 0, TAIL_CALL,
  POS(788, 11),
  POS(789, 11),
  POS(790, 11)
};

static TAB_NUM t_func_get_literal[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 802_15_self
  // mangled_literals(self)
  var_mangled_literals, 1, LOCAL(2), 1, LOCAL(1),
  // -> mangled_literals(self)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(803, 6),
  POS(803, 3)
};

static TAB_NUM t_func_funky_types__node___get_index[] = {
  2, // locals
  3, // parameters
  LOCAL(2), // 807_31_node
  LOCAL(1),
  LOCAL(1),
  // edump `node
  var_edump, 2, str_node, LOCAL(2), 0,
  // -> "???"
  LET, 1, string_14, TAIL_CALL,
  POS(808, 3),
  POS(809, 3)
};

static TAB_NUM t_func_funky_types__definition___get_index[] = {
  3, // locals
  3, // parameters
  LOCAL(2), // 811_37_node
  LOCAL(3), // 811_42_level
  LOCAL(1),
  // $identifier identifier_of(node)
  var_identifier_of, 1, LOCAL(2), 1, var_812_1_identifier,
  // is_an_integer
  var_is_an_integer, 1, LOCAL(3), 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_158, lambda_159, TAIL_CALL,
  POS(812, 3),
  POS(814, 11),
  POS(813, 3)
};

static TAB_NUM t_lambda_158[] = {
  3, // locals
  0, // parameters
  // local_mapping(identifier)))"
  var_local_mapping, 1, var_812_1_identifier, 1, LOCAL(1),
  // temp_count+local_mapping(identifier)))"
  var_std__plus, 2, var_temp_count, LOCAL(1), 1, LOCAL(2),
  // "LOCAL(@(temp_count+local_mapping(identifier)))"
  var_std__string, 3, str_LOCAL, LOCAL(2), string_35, 1, LOCAL(3),
  //  "LOCAL(@(temp_count+local_mapping(identifier)))"
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(815, 28),
  POS(815, 17),
  POS(815, 8),
  POS(815, 7)
};

static TAB_NUM t_lambda_159[] = {
  2, // locals
  0, // parameters
  // mangle_identifier(identifier))
  var_mangle_identifier, 1, var_812_1_identifier, 1, LOCAL(1),
  // append("var_" mangle_identifier(identifier))
  var_append, 2, str_var, LOCAL(1), 1, LOCAL(2),
  //  append("var_" mangle_identifier(identifier))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(816, 22),
  POS(816, 8),
  POS(816, 7)
};

static TAB_NUM t_func_parameter_get_index[] = {
  3, // locals
  3, // parameters
  LOCAL(2), // 821_23_node
  LOCAL(3), // 821_28_level
  LOCAL(1),
  // $name funky::name_of(node)
  var_funky__name_of, 1, LOCAL(2), 1, var_822_1_name,
  // is_an_integer
  var_is_an_integer, 1, LOCAL(3), 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_160, lambda_161, TAIL_CALL,
  POS(822, 3),
  POS(824, 11),
  POS(823, 3)
};

static TAB_NUM t_lambda_160[] = {
  3, // locals
  0, // parameters
  // local_mapping(name)))"
  var_local_mapping, 1, var_822_1_name, 1, LOCAL(1),
  // temp_count+local_mapping(name)))"
  var_std__plus, 2, var_temp_count, LOCAL(1), 1, LOCAL(2),
  // "LOCAL(@(temp_count+local_mapping(name)))"
  var_std__string, 3, str_LOCAL, LOCAL(2), string_35, 1, LOCAL(3),
  //  "LOCAL(@(temp_count+local_mapping(name)))"
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(825, 28),
  POS(825, 17),
  POS(825, 8),
  POS(825, 7)
};

static TAB_NUM t_lambda_161[] = {
  1, // locals
  0, // parameters
  // "var_@(name)"
  var_std__string, 2, str_var, var_822_1_name, 1, LOCAL(1),
  //  "var_@(name)"
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(826, 8),
  POS(826, 7)
};

static TAB_NUM t_func_funky_types__statement___get_index[] = {
  6, // locals
  3, // parameters
  var_828_36_node,
  LOCAL(1),
  LOCAL(6), // 828_48_flags
  // head_of(node))
  var_head_of, 1, var_828_36_node, 1, LOCAL(1),
  // $identifier identifier_of(head_of(node))
  var_identifier_of, 1, LOCAL(1), 1, var_829_1_identifier,
  // REDEFINED | POLYMORPHIC) != 0 || identifier .contains. ':'
  var_std__bit_or, 2, var_REDEFINED, var_POLYMORPHIC, 1, LOCAL(1),
  // flags & (REDEFINED | POLYMORPHIC) != 0 || identifier .contains. ':'
  var_std__bit_and, 2, LOCAL(6), LOCAL(1), 1, LOCAL(2),
  // flags & (REDEFINED | POLYMORPHIC) != 0 || identifier .contains. ':'
  var_std__equal, 2, LOCAL(2), num_0, 1, LOCAL(3),
  // flags & (REDEFINED | POLYMORPHIC) != 0 || identifier .contains. ':'
  var_std__not, 1, LOCAL(3), 1, LOCAL(4),
  // flags & (REDEFINED | POLYMORPHIC) != 0 || identifier .contains. ':'
  var_std__or, 2, LOCAL(4), lambda_162, 1, LOCAL(5),
  // if
  var_if, 3, LOCAL(5), lambda_163, lambda_164, TAIL_CALL,
  POS(829, 29),
  POS(829, 3),
  POS(831, 14),
  POS(831, 5),
  POS(831, 5),
  POS(831, 5),
  POS(831, 5),
  POS(830, 3)
};

static TAB_NUM t_lambda_162[] = {
  1, // locals
  0, // parameters
  // identifier .contains. ':'
  var_contains, 2, var_829_1_identifier, chr_58, 1, LOCAL(1),
  // identifier .contains. ':'
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(831, 47),
  POS(831, 47)
};

static TAB_NUM t_lambda_163[] = {
  2, // locals
  0, // parameters
  // mangle_identifier(identifier))
  var_mangle_identifier, 1, var_829_1_identifier, 1, LOCAL(1),
  // append("var_" mangle_identifier(identifier))
  var_append, 2, str_var, LOCAL(1), 1, LOCAL(2),
  //  append("var_" mangle_identifier(identifier))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(832, 22),
  POS(832, 8),
  POS(832, 7)
};

static TAB_NUM t_lambda_164[] = {
  2, // locals
  0, // parameters
  // arguments_of(node)(1)
  var_arguments_of, 1, var_828_36_node, 1, LOCAL(1),
  // $argument arguments_of(node)(1)
  LOCAL(1), 1, num_1, 1, var_834_1_argument,
  // node_type_of(argument) == FUNCTOR
  var_node_type_of, 1, var_834_1_argument, 1, LOCAL(1),
  // node_type_of(argument) == FUNCTOR
  var_std__equal, 2, LOCAL(1), var_FUNCTOR, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_165, lambda_166, TAIL_CALL,
  POS(834, 17),
  POS(834, 7),
  POS(836, 9),
  POS(836, 9),
  POS(835, 7)
};

static TAB_NUM t_lambda_165[] = {
  1, // locals
  0, // parameters
  // to_index
  var_to_index, 1, var_834_1_argument, 1, LOCAL(1),
  //  argument.to_index
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(837, 21),
  POS(837, 11)
};

static TAB_NUM t_lambda_166[] = {
  1, // locals
  0, // parameters
  // mangled_literals(argument)
  var_mangled_literals, 1, var_834_1_argument, 1, LOCAL(1),
  //  mangled_literals(argument)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(838, 12),
  POS(838, 11)
};

static TAB_NUM t_func_funky_types__numeric_literal___add_literal[] = {
  3, // locals
  1, // parameters
  LOCAL(3), // 842_44_self
  // !mangled_literals(self) funky::key_of(self)
  var_funky__key_of, 1, LOCAL(3), 1, LOCAL(2),
  // mangled_literals(self) funky::key_of(self)
  var_mangled_literals, 2, LOCAL(3), LOCAL(2), 1, var_mangled_literals,
  // -> mangled_literals mangling_counter
  LET, 2, var_mangled_literals, var_mangling_counter, TAIL_CALL,
  POS(843, 3),
  POS(843, 4),
  POS(844, 3)
};

static TAB_NUM t_func_funky_types__character_sequence___add_literal[] = {
  1, // locals
  1, // parameters
  var_846_47_self,
  // $mangled ""
  LET, 1, string_6, 1, var_847_1_mangled,
  // characters_of(self)
  var_characters_of, 1, var_846_47_self, 1, LOCAL(1),
  // for_each characters_of(self)
  var_for_each, 3, LOCAL(1), lambda_167, lambda_176, TAIL_CALL,
  POS(847, 3),
  POS(848, 12),
  POS(848, 3)
};

static TAB_NUM t_lambda_167[] = {
  0, // locals
  1, // parameters
  var_849_3_chr,
  // cond
  var_cond, 4, lambda_168, lambda_169, lambda_173, lambda_175, TAIL_CALL,
  POS(850, 7)
};

static TAB_NUM t_lambda_168[] = {
  3, // locals
  0, // parameters
  // length_of(mangled) >= 16 break
  var_length_of, 1, var_847_1_mangled, 1, LOCAL(1),
  // length_of(mangled) >= 16 break
  var_std__less, 2, LOCAL(1), num_16, 1, LOCAL(2),
  // length_of(mangled) >= 16 break
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  //  length_of(mangled) >= 16 break
  LET, 2, LOCAL(3), var_break, TAIL_CALL,
  POS(851, 12),
  POS(851, 12),
  POS(851, 12),
  POS(851, 11)
};

static TAB_NUM t_lambda_169[] = {
  2, // locals
  0, // parameters
  // is_a_letter || chr.is_a_digit || chr == '_':
  var_is_a_letter, 1, var_849_3_chr, 1, LOCAL(1),
  // is_a_letter || chr.is_a_digit || chr == '_':
  var_std__or, 2, LOCAL(1), lambda_170, 1, LOCAL(2),
  //  chr.is_a_letter || chr.is_a_digit || chr == '_':
  LET, 2, LOCAL(2), lambda_172, TAIL_CALL,
  POS(852, 16),
  POS(852, 16),
  POS(852, 11)
};

static TAB_NUM t_lambda_170[] = {
  2, // locals
  0, // parameters
  // is_a_digit || chr == '_':
  var_is_a_digit, 1, var_849_3_chr, 1, LOCAL(1),
  // is_a_digit || chr == '_':
  var_std__or, 2, LOCAL(1), lambda_171, 1, LOCAL(2),
  // chr.is_a_digit || chr == '_':
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(852, 35),
  POS(852, 35),
  POS(852, 31)
};

static TAB_NUM t_lambda_171[] = {
  1, // locals
  0, // parameters
  // chr == '_':
  var_std__equal, 2, var_849_3_chr, chr_95, 1, LOCAL(1),
  // chr == '_':
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(852, 49),
  POS(852, 49)
};

static TAB_NUM t_lambda_172[] = {
  0, // locals
  0, // parameters
  // push &mangled chr
  var_push, 2, var_847_1_mangled, var_849_3_chr, 1, var_847_1_mangled,
  // next
  var_next, 0, TAIL_CALL,
  POS(853, 11),
  POS(854, 11)
};

static TAB_NUM t_lambda_173[] = {
  1, // locals
  0, // parameters
  // chr == ' ':
  var_std__equal, 2, var_849_3_chr, chr_32, 1, LOCAL(1),
  //  chr == ' ':
  LET, 2, LOCAL(1), lambda_174, TAIL_CALL,
  POS(855, 12),
  POS(855, 11)
};

static TAB_NUM t_lambda_174[] = {
  0, // locals
  0, // parameters
  // push &mangled '_'
  var_push, 2, var_847_1_mangled, chr_95, 1, var_847_1_mangled,
  // next
  var_next, 0, TAIL_CALL,
  POS(856, 11),
  POS(857, 11)
};

static TAB_NUM t_lambda_175[] = {
  0, // locals
  0, // parameters
  //  true next
  LET, 2, var_true, var_next, TAIL_CALL,
  POS(858, 11)
};

static TAB_NUM t_lambda_176[] = {
  1, // locals
  0, // parameters
  // remove_trailing_underscores_and_digits &mangled
  func_remove_trailing_underscores_and_digits, 1, var_847_1_mangled, 1, var_847_1_mangled,
  // is_empty:
  var_is_empty, 1, var_847_1_mangled, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_mangled_is_empty, lambda_177, TAIL_CALL,
  POS(860, 7),
  POS(862, 17),
  POS(861, 7)
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
  POS(863, 11),
  POS(864, 23),
  POS(864, 11)
};

static TAB_NUM t_lambda_177[] = {
  1, // locals
  0, // parameters
  // append "str_" &mangled
  var_append, 2, str_str, var_847_1_mangled, 1, var_847_1_mangled,
  // check_mangling $n !mangling_counter mangled
  func_check_mangling, 1, var_847_1_mangled, 2, var_867_16_n, var_mangling_counter,
  // 1:
  var_std__less, 2, num_1, var_867_16_n, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_178, lambda_179, TAIL_CALL,
  POS(866, 11),
  POS(867, 11),
  POS(869, 17),
  POS(868, 11)
};

static TAB_NUM t_lambda_178[] = {
  1, // locals
  0, // parameters
  // "@(mangled)_@(n)"
  var_std__string, 3, var_847_1_mangled, string_39, var_867_16_n, 1, LOCAL(1),
  // add_mangled "@(mangled)_@(n)"
  func_add_mangled, 1, LOCAL(1), TAIL_CALL,
  POS(870, 27),
  POS(870, 15)
};

static TAB_NUM t_lambda_179[] = {
  0, // locals
  0, // parameters
  // add_mangled mangled
  func_add_mangled, 1, var_847_1_mangled, TAIL_CALL,
  POS(872, 15)
};

static TAB_NUM t_func_add_mangled[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 874_15_mangled_name
  // mangled_literals(self) mangled_name
  var_mangled_literals, 2, var_846_47_self, LOCAL(1), 1, var_mangled_literals,
  // -> mangled_literals mangling_counter
  LET, 2, var_mangled_literals, var_mangling_counter, TAIL_CALL,
  POS(877, 6),
  POS(878, 5)
};

static TAB_NUM t_func_funky_types__unique___add_literal[] = {
  3, // locals
  1, // parameters
  LOCAL(3), // 880_35_self
  // !mangled_literals(self) funky::key_of(self)
  var_funky__key_of, 1, LOCAL(3), 1, LOCAL(2),
  // mangled_literals(self) funky::key_of(self)
  var_mangled_literals, 2, LOCAL(3), LOCAL(2), 1, var_mangled_literals,
  // -> mangled_literals mangling_counter
  LET, 2, var_mangled_literals, var_mangling_counter, TAIL_CALL,
  POS(881, 3),
  POS(881, 4),
  POS(882, 3)
};

static TAB_NUM t_func_funky_types__statement___add_literal[] = {
  5, // locals
  1, // parameters
  LOCAL(3), // 884_38_self
  // head_of(self)) .truncate_until. "::"
  var_head_of, 1, LOCAL(3), 1, LOCAL(1),
  // identifier_of(head_of(self)) .truncate_until. "::"
  var_identifier_of, 1, LOCAL(1), 1, LOCAL(2),
  // $type identifier_of(head_of(self)) .truncate_until. "::"
  var_truncate_until, 2, LOCAL(2), string_11, 1, LOCAL(4),
  // mangle_position(self))
  var_mangle_position, 1, LOCAL(3), 1, LOCAL(1),
  // $mangled_name append(type "_" mangle_position(self))
  var_append, 3, LOCAL(4), string_39, LOCAL(1), 1, LOCAL(5),
  // mangled_literals(self mangled_name) mangling_counter
  var_mangled_literals, 2, LOCAL(3), LOCAL(5), 1, LOCAL(1),
  // -> mangled_literals(self mangled_name) mangling_counter
  LET, 2, LOCAL(1), var_mangling_counter, TAIL_CALL,
  POS(885, 23),
  POS(885, 9),
  POS(885, 3),
  POS(886, 33),
  POS(886, 3),
  POS(887, 6),
  POS(887, 3)
};

static TAB_NUM t_func_funky_types__body___add_literal[] = {
  6, // locals
  1, // parameters
  var_889_33_self,
  // $source_group source_group_of(self)
  var_source_group_of, 1, var_889_33_self, 1, LOCAL(4),
  // $line_text second(source_group)
  var_second, 1, LOCAL(4), 1, LOCAL(5),
  // length_of(line_text)-length_of(source_position_of(self))
  var_length_of, 1, LOCAL(5), 1, LOCAL(1),
  // source_position_of(self))
  var_source_position_of, 1, var_889_33_self, 1, LOCAL(2),
  // length_of(source_position_of(self))
  var_length_of, 1, LOCAL(2), 1, LOCAL(3),
  // $column_no length_of(line_text)-length_of(source_position_of(self))
  var_std__minus, 2, LOCAL(1), LOCAL(3), 1, LOCAL(6),
  // $text range(line_text 1 column_no)
  var_range, 3, LOCAL(5), num_1, LOCAL(6), 1, var_893_1_text,
  // without_suffix &text ':'
  var_without_suffix, 2, var_893_1_text, chr_58, 1, var_893_1_text,
  // without_suffix &text "->"
  var_without_suffix, 2, var_893_1_text, string_40, 1, var_893_1_text,
  // trim_right &text
  var_trim_right, 1, var_893_1_text, 1, var_893_1_text,
  // is_empty || text .contains. ' ':
  var_is_empty, 1, var_893_1_text, 1, LOCAL(1),
  // is_empty || text .contains. ' ':
  var_std__or, 2, LOCAL(1), lambda_180, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_181, lambda_182, TAIL_CALL,
  POS(890, 3),
  POS(891, 3),
  POS(892, 14),
  POS(892, 45),
  POS(892, 35),
  POS(892, 3),
  POS(893, 3),
  POS(894, 3),
  POS(895, 3),
  POS(896, 3),
  POS(898, 10),
  POS(898, 10),
  POS(897, 3)
};

static TAB_NUM t_lambda_180[] = {
  1, // locals
  0, // parameters
  // text .contains. ' ':
  var_contains, 2, var_893_1_text, chr_32, 1, LOCAL(1),
  // text .contains. ' ':
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(898, 22),
  POS(898, 22)
};

static TAB_NUM t_lambda_181[] = {
  0, // locals
  0, // parameters
  // add_lambda ""
  func_add_lambda, 1, string_6, TAIL_CALL,
  POS(899, 7)
};

static TAB_NUM t_lambda_182[] = {
  2, // locals
  0, // parameters
  // text(1) == '$':
  var_893_1_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '$':
  var_std__equal, 2, LOCAL(1), chr_36, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_183, lambda_184, TAIL_CALL,
  POS(902, 9),
  POS(902, 9),
  POS(901, 7)
};

static TAB_NUM t_lambda_183[] = {
  3, // locals
  0, // parameters
  // range(text 2 -1))
  var_range, 3, var_893_1_text, num_2, minus_num_1, 1, LOCAL(1),
  // mangle_versioned_identifier(range(text 2 -1))
  func_mangle_versioned_identifier, 1, LOCAL(1), 1, LOCAL(2),
  // append
  var_append, 2, str_func, LOCAL(2), 1, LOCAL(3),
  // add_function
  func_add_function, 1, LOCAL(3), TAIL_CALL,
  POS(906, 43),
  POS(906, 15),
  POS(904, 13),
  POS(903, 11)
};

static TAB_NUM t_lambda_184[] = {
  0, // locals
  0, // parameters
  // replace_all &text '.' = "_"
  var_replace_all, 2, var_893_1_text, key_value_pair_908_19, 1, var_893_1_text,
  // remove_non_identifier_characters &text
  func_remove_non_identifier_characters, 1, var_893_1_text, 1, var_893_1_text,
  // add_lambda text
  func_add_lambda, 1, var_893_1_text, TAIL_CALL,
  POS(908, 11),
  POS(909, 11),
  POS(910, 11)
};

static TAB_NUM t_func_add_lambda[] = {
  1, // locals
  1, // parameters
  var_912_14_name,
  // is_empty:
  var_is_empty, 1, var_912_14_name, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_name_is_empty, lambda_185, TAIL_CALL,
  POS(914, 12),
  POS(913, 5)
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
  POS(915, 9),
  POS(916, 21),
  POS(916, 9)
};

static TAB_NUM t_lambda_185[] = {
  1, // locals
  0, // parameters
  // append("lambda_" name)
  var_append, 2, str_lambda_2, var_912_14_name, 1, LOCAL(1),
  // add_function append("lambda_" name)
  func_add_function, 1, LOCAL(1), TAIL_CALL,
  POS(918, 22),
  POS(918, 9)
};

static TAB_NUM t_func_add_function[] = {
  1, // locals
  1, // parameters
  var_920_16_name,
  // check_mangling $n !mangling_counter name
  func_check_mangling, 1, var_920_16_name, 2, var_921_16_n, var_mangling_counter,
  // 1:
  var_std__less, 2, num_1, var_921_16_n, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_186, lambda_187, TAIL_CALL,
  POS(921, 5),
  POS(923, 11),
  POS(922, 5)
};

static TAB_NUM t_lambda_186[] = {
  3, // locals
  0, // parameters
  // name .until. '_'
  var_until, 2, var_920_16_name, chr_95, 1, LOCAL(1),
  // name .from. '_'
  var_from, 2, var_920_16_name, chr_95, 1, LOCAL(2),
  // string
  var_string, 3, LOCAL(1), var_921_16_n, LOCAL(2), 1, LOCAL(3),
  // add_mangled
  func_2_add_mangled, 1, LOCAL(3), TAIL_CALL,
  POS(926, 13),
  POS(928, 13),
  POS(925, 11),
  POS(924, 9)
};

static TAB_NUM t_lambda_187[] = {
  0, // locals
  0, // parameters
  // add_mangled name
  func_2_add_mangled, 1, var_920_16_name, TAIL_CALL,
  POS(930, 9)
};

static TAB_NUM t_func_2_add_mangled[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 932_15_name
  // mangled_literals(self name) mangling_counter
  var_mangled_literals, 2, var_889_33_self, LOCAL(2), 1, LOCAL(1),
  // -> mangled_literals(self name) mangling_counter
  LET, 2, LOCAL(1), var_mangling_counter, TAIL_CALL,
  POS(933, 8),
  POS(933, 5)
};

static TAB_NUM t_func_mangle_versioned_identifier[] = {
  1, // locals
  1, // parameters
  var_935_31_name,
  // $rest name .behind. "-"
  var_behind, 2, var_935_31_name, string_41, 1, var_936_1_rest,
  // is_empty
  var_is_empty, 1, var_936_1_rest, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_188, lambda_189, TAIL_CALL,
  POS(936, 5),
  POS(938, 12),
  POS(937, 5)
};

static TAB_NUM t_lambda_188[] = {
  1, // locals
  0, // parameters
  // replace(name)
  func_replace, 1, var_935_31_name, 1, LOCAL(1),
  //  replace(name)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(939, 10),
  POS(939, 9)
};

static TAB_NUM t_lambda_189[] = {
  2, // locals
  0, // parameters
  // rest(1).is_a_digit
  var_936_1_rest, 1, num_1, 1, LOCAL(1),
  // is_a_digit
  var_is_a_digit, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_190, lambda_191, TAIL_CALL,
  POS(942, 11),
  POS(942, 19),
  POS(941, 9)
};

static TAB_NUM t_lambda_190[] = {
  5, // locals
  0, // parameters
  // name .before. '.') "__" replace(name .behind. '.'))
  var_before, 2, var_935_31_name, chr_46, 1, LOCAL(1),
  // replace(name .before. '.') "__" replace(name .behind. '.'))
  func_replace, 1, LOCAL(1), 1, LOCAL(2),
  // name .behind. '.'))
  var_behind, 2, var_935_31_name, chr_46, 1, LOCAL(3),
  // replace(name .behind. '.'))
  func_replace, 1, LOCAL(3), 1, LOCAL(4),
  // append(replace(name .before. '.') "__" replace(name .behind. '.'))
  var_append, 3, LOCAL(2), string_28, LOCAL(4), 1, LOCAL(5),
  //  append(replace(name .before. '.') "__" replace(name .behind. '.'))
  LET, 1, LOCAL(5), TAIL_CALL,
  POS(943, 29),
  POS(943, 21),
  POS(943, 61),
  POS(943, 53),
  POS(943, 14),
  POS(943, 13)
};

static TAB_NUM t_lambda_191[] = {
  1, // locals
  0, // parameters
  // replace(name)
  func_replace, 1, var_935_31_name, 1, LOCAL(1),
  //  replace(name)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(944, 14),
  POS(944, 13)
};

static TAB_NUM t_func_replace[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 946_11_part
  // part .without_suffix. '/'
  var_without_suffix, 2, LOCAL(2), chr_47, 1, LOCAL(1),
  // replace_all
  var_replace_all, 5, LOCAL(1), key_value_pair_949_1, key_value_pair_950_1, key_value_pair_951_1, key_value_pair_952_1, TAIL_CALL,
  POS(948, 9),
  POS(947, 7)
};

static TAB_NUM t_func_check_mangling[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 954_18_name
  // $n mangling_counter(name)
  var_mangling_counter, 1, LOCAL(2), 1, var_955_1_n,
  // is_defined
  var_is_defined, 1, var_955_1_n, 1, LOCAL(1),
  // !n
  var_if, 3, LOCAL(1), lambda_192, lambda_193, 1, var_955_1_n,
  // mangling_counter(name n)
  var_mangling_counter, 2, LOCAL(2), var_955_1_n, 1, LOCAL(1),
  // -> n mangling_counter(name n)
  LET, 2, var_955_1_n, LOCAL(1), TAIL_CALL,
  POS(955, 3),
  POS(958, 9),
  POS(956, 3),
  POS(961, 8),
  POS(961, 3)
};

static TAB_NUM t_lambda_192[] = {
  1, // locals
  0, // parameters
  // n+1
  var_std__plus, 2, var_955_1_n, num_1, 1, LOCAL(1),
  //  n+1
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(959, 10),
  POS(959, 9)
};

static TAB_NUM t_lambda_193[] = {
  0, // locals
  0, // parameters
  //  1
  LET, 1, num_1, TAIL_CALL,
  POS(960, 9)
};

static TAB_NUM t_func_remove_trailing_underscores_and_digits[] = {
  0, // locals
  1, // parameters
  var_963_42_str,
  // $n length_of(str)
  var_length_of, 1, var_963_42_str, 1, var_964_1_n,
  // loop:
  var_loop, 1, lambda_loop, TAIL_CALL,
  POS(964, 3),
  POS(965, 3)
};

static TAB_NUM t_lambda_loop[] = {
  1, // locals
  0, // parameters
  // n == 0
  var_std__equal, 2, var_964_1_n, num_0, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_194, lambda_195, TAIL_CALL,
  POS(967, 7),
  POS(966, 5)
};

static TAB_NUM t_lambda_194[] = {
  0, // locals
  0, // parameters
  //  ""
  LET, 1, string_6, TAIL_CALL,
  POS(968, 9)
};

static TAB_NUM t_lambda_195[] = {
  3, // locals
  0, // parameters
  // str(n) == '_' || str(n).is_a_digit:
  var_963_42_str, 1, var_964_1_n, 1, LOCAL(1),
  // str(n) == '_' || str(n).is_a_digit:
  var_std__equal, 2, LOCAL(1), chr_95, 1, LOCAL(2),
  // str(n) == '_' || str(n).is_a_digit:
  var_std__or, 2, LOCAL(2), lambda_196, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_197, lambda_198, TAIL_CALL,
  POS(971, 11),
  POS(971, 11),
  POS(971, 11),
  POS(970, 9)
};

static TAB_NUM t_lambda_196[] = {
  2, // locals
  0, // parameters
  // str(n).is_a_digit:
  var_963_42_str, 1, var_964_1_n, 1, LOCAL(1),
  // is_a_digit:
  var_is_a_digit, 1, LOCAL(1), 1, LOCAL(2),
  // str(n).is_a_digit:
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(971, 28),
  POS(971, 35),
  POS(971, 28)
};

static TAB_NUM t_lambda_197[] = {
  0, // locals
  0, // parameters
  // dec &n
  var_dec, 1, var_964_1_n, 1, var_964_1_n,
  // next
  var_next, 0, TAIL_CALL,
  POS(972, 13),
  POS(973, 13)
};

static TAB_NUM t_lambda_198[] = {
  1, // locals
  0, // parameters
  // range(str 1 n)
  var_range, 3, var_963_42_str, num_1, var_964_1_n, 1, LOCAL(1),
  //  range(str 1 n)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(974, 14),
  POS(974, 13)
};

static TAB_NUM t_func_remove_non_identifier_characters[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 976_36_str
  // $buf ""
  LET, 1, string_6, 1, var_977_1_buf,
  // for_each str
  var_for_each, 3, LOCAL(1), lambda_199, lambda_207, TAIL_CALL,
  POS(977, 3),
  POS(978, 3)
};

static TAB_NUM t_lambda_199[] = {
  0, // locals
  1, // parameters
  var_979_3_chr,
  // cond
  var_cond, 3, lambda_200, lambda_202, lambda_206, TAIL_CALL,
  POS(980, 7)
};

static TAB_NUM t_lambda_200[] = {
  1, // locals
  0, // parameters
  // is_a_letter:
  var_is_a_letter, 1, var_979_3_chr, 1, LOCAL(1),
  //  chr.is_a_letter:
  LET, 2, LOCAL(1), lambda_201, TAIL_CALL,
  POS(981, 16),
  POS(981, 11)
};

static TAB_NUM t_lambda_201[] = {
  0, // locals
  0, // parameters
  // push &buf chr
  var_push, 2, var_977_1_buf, var_979_3_chr, 1, var_977_1_buf,
  // next
  var_next, 0, TAIL_CALL,
  POS(982, 11),
  POS(983, 11)
};

static TAB_NUM t_lambda_202[] = {
  2, // locals
  0, // parameters
  // is_a_digit || chr == '_':
  var_is_a_digit, 1, var_979_3_chr, 1, LOCAL(1),
  // is_a_digit || chr == '_':
  var_std__or, 2, LOCAL(1), lambda_203, 1, LOCAL(2),
  //  chr.is_a_digit || chr == '_':
  LET, 2, LOCAL(2), lambda_204, TAIL_CALL,
  POS(984, 16),
  POS(984, 16),
  POS(984, 11)
};

static TAB_NUM t_lambda_203[] = {
  1, // locals
  0, // parameters
  // chr == '_':
  var_std__equal, 2, var_979_3_chr, chr_95, 1, LOCAL(1),
  // chr == '_':
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(984, 30),
  POS(984, 30)
};

static TAB_NUM t_lambda_204[] = {
  1, // locals
  0, // parameters
  // is_empty # prevent leading digits!
  var_is_empty, 1, var_977_1_buf, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), var_next, lambda_205, TAIL_CALL,
  POS(986, 17),
  POS(985, 11)
};

static TAB_NUM t_lambda_205[] = {
  0, // locals
  0, // parameters
  // push &buf chr
  var_push, 2, var_977_1_buf, var_979_3_chr, 1, var_977_1_buf,
  // next
  var_next, 0, TAIL_CALL,
  POS(989, 15),
  POS(990, 15)
};

static TAB_NUM t_lambda_206[] = {
  0, // locals
  0, // parameters
  //  true next
  LET, 2, var_true, var_next, TAIL_CALL,
  POS(991, 11)
};

static TAB_NUM t_lambda_207[] = {
  0, // locals
  0, // parameters
  //  buf
  LET, 1, var_977_1_buf, TAIL_CALL,
  POS(992, 7)
};

static TAB_NUM t_func_funky_types__statement___to_compound[] = {
  6, // locals
  1, // parameters
  LOCAL(4), // 1000_38_self
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
  POS(1001, 3),
  POS(1003, 12),
  POS(1003, 5),
  POS(1005, 5),
  POS(1002, 3),
  POS(1007, 6),
  POS(1007, 3)
};

static TAB_NUM t_func_to_negative_index[] = {
  3, // locals
  1, // parameters
  LOCAL(3), // 1013_21_node
  // to_index(node))"
  var_to_index, 1, LOCAL(3), 1, LOCAL(1),
  // "-@(to_index(node))"
  var_std__string, 2, string_41, LOCAL(1), 1, LOCAL(2),
  // -> "-@(to_index(node))"
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1013, 37),
  POS(1013, 33),
  POS(1013, 30)
};

static TAB_NUM t_func_funky_types__numeric_literal___to_table_entry[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 1021_47_self
  // $digits digits_of(self)
  var_digits_of, 1, LOCAL(2), 1, var_1022_1_digits,
  // digits .contains. '.'
  var_contains, 2, var_1022_1_digits, chr_46, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_208, lambda_209, TAIL_CALL,
  POS(1022, 3),
  POS(1024, 5),
  POS(1023, 3)
};

static TAB_NUM t_lambda_208[] = {
  1, // locals
  0, // parameters
  // "
  var_std__string, 3, str___FLT_REAL_0_rea, var_1022_1_digits, string_43, 1, LOCAL(1),
  //  "
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1025, 8),
  POS(1025, 7)
};

static TAB_NUM t_lambda_209[] = {
  3, // locals
  0, // parameters
  // digits(1) == '-'
  var_1022_1_digits, 1, num_1, 1, LOCAL(1),
  // digits(1) == '-'
  var_std__equal, 2, LOCAL(1), chr_45, 1, LOCAL(2),
  // if $sign !digits
  var_if, 3, LOCAL(2), lambda_210, lambda_211, 2, LOCAL(3), var_1022_1_digits,
  // digits .has_prefix. "0b" || digits .has_prefix. "0o"
  var_has_prefix, 2, var_1022_1_digits, str_0b, 1, LOCAL(1),
  // digits .has_prefix. "0b" || digits .has_prefix. "0o"
  var_std__or, 2, LOCAL(1), lambda_212, 1, LOCAL(2),
  // update_if digits .has_prefix. "0b" || digits .has_prefix. "0o"
  var_update_if, 3, LOCAL(2), var_1022_1_digits, lambda_digits, 1, var_1022_1_digits,
  // "
  var_std__string, 5, str___FLT, LOCAL(3), str_TIVE_INT64_0_val, var_1022_1_digits, string_43, 1, LOCAL(1),
  // -> "
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1030, 9),
  POS(1030, 9),
  POS(1029, 7),
  POS(1033, 17),
  POS(1033, 17),
  POS(1033, 7),
  POS(1035, 10),
  POS(1035, 7)
};

static TAB_NUM t_lambda_210[] = {
  1, // locals
  0, // parameters
  // range(digits 2 -1)
  var_range, 3, var_1022_1_digits, num_2, minus_num_1, 1, LOCAL(1),
  //  "NEGA" range(digits 2 -1)
  LET, 2, str_NEGA, LOCAL(1), TAIL_CALL,
  POS(1031, 19),
  POS(1031, 11)
};

static TAB_NUM t_lambda_211[] = {
  0, // locals
  0, // parameters
  //  "POSI" digits
  LET, 2, str_POSI, var_1022_1_digits, TAIL_CALL,
  POS(1032, 11)
};

static TAB_NUM t_lambda_212[] = {
  1, // locals
  0, // parameters
  // digits .has_prefix. "0o"
  var_has_prefix, 2, var_1022_1_digits, str_0o, 1, LOCAL(1),
  // digits .has_prefix. "0o"
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1033, 45),
  POS(1033, 45)
};

static TAB_NUM t_lambda_digits[] = {
  1, // locals
  0, // parameters
  // to_integer
  var_to_integer, 1, var_1022_1_digits, 1, LOCAL(1),
  //  digits.to_integer
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1034, 27),
  POS(1034, 19)
};

static TAB_NUM t_func_funky_types__numeric_character_literal___to_table_entry[] = {
  3, // locals
  1, // parameters
  LOCAL(3), // 1039_57_self
  // digits_of(self))}},
  var_digits_of, 1, LOCAL(3), 1, LOCAL(1),
  // "
  var_std__string, 3, str___FLT_CHARACTER, LOCAL(1), string_43, 1, LOCAL(2),
  // -> "
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1042, 38),
  POS(1040, 6),
  POS(1040, 3)
};

static TAB_NUM t_func_funky_types__character_sequence___to_table_entry[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 1044_50_self
  // $characters characters_of(self)
  var_characters_of, 1, LOCAL(2), 1, var_1045_1_characters,
  // $length length_of(characters)
  var_length_of, 1, var_1045_1_characters, 1, var_1046_1_length,
  // is_an_octet_string:
  var_is_an_octet_string, 1, var_1045_1_characters, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_characters_is_an_octet_string, lambda_213, TAIL_CALL,
  POS(1045, 3),
  POS(1046, 3),
  POS(1048, 16),
  POS(1047, 3)
};

static TAB_NUM t_lambda_characters_is_an_octet_string[] = {
  2, // locals
  0, // parameters
  // $text characters.to_c_string
  func_to_c_string, 1, var_1045_1_characters, 1, LOCAL(2),
  // "
  var_std__string, 5, str___FLT_STRING, var_1046_1_length, str__str, LOCAL(2), string_44, 1, LOCAL(1),
  // -> "
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1049, 7),
  POS(1050, 10),
  POS(1050, 7)
};

static TAB_NUM t_lambda_213[] = {
  2, // locals
  0, // parameters
  // $text characters.to_c_string_32
  func_to_c_string_32, 1, var_1045_1_characters, 1, LOCAL(2),
  // "
  var_std__string, 5, str___FLT_STRING_2, var_1046_1_length, str__str_32__U, LOCAL(2), string_44, 1, LOCAL(1),
  // -> "
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1054, 7),
  POS(1055, 10),
  POS(1055, 7)
};

static TAB_NUM t_func_funky_types__statement___to_table_entry[] = {
  7, // locals
  1, // parameters
  LOCAL(3), // 1059_41_self
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
  POS(1060, 3),
  POS(1061, 10),
  POS(1061, 10),
  POS(1061, 3),
  POS(1062, 20),
  POS(1062, 10),
  POS(1062, 3),
  POS(1063, 3),
  POS(1064, 6),
  POS(1064, 3)
};

static TAB_NUM t_func_funky_types__unique___to_table_entry[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 1068_38_self
  // identifier_of(self) "__" = "::")
  var_identifier_of, 1, LOCAL(2), 1, LOCAL(1),
  // $identifier replace_first(identifier_of(self) "__" = "::")
  var_replace_first, 2, LOCAL(1), key_value_pair_1069_47, 1, LOCAL(3),
  // "
  var_std__string, 3, str___FLT_UNIQUE_0_s, LOCAL(3), string_44, 1, LOCAL(1),
  // -> "
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1069, 29),
  POS(1069, 3),
  POS(1070, 6),
  POS(1070, 3)
};

static TAB_NUM t_func_funky_types__body___to_table_entry[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 1074_36_self
  // $mangled_name mangled_literals(self)
  var_mangled_literals, 1, LOCAL(2), 1, LOCAL(3),
  // "
  var_std__string, 3, str___FLT_FUNCTION_2, LOCAL(3), string_43, 1, LOCAL(1),
  // -> "
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1075, 3),
  POS(1076, 6),
  POS(1076, 3)
};

static TAB_NUM t_func_is_local_or_constant[] = {
  2, // locals
  1, // parameters
  var_1082_24_kind,
  // kind == LOCAL || kind == CONSTANT || kind == CONSTANT_COMPOUND
  var_std__equal, 2, var_1082_24_kind, var_LOCAL, 1, LOCAL(1),
  // kind == LOCAL || kind == CONSTANT || kind == CONSTANT_COMPOUND
  var_std__or, 2, LOCAL(1), lambda_214, 1, LOCAL(2),
  // -> kind == LOCAL || kind == CONSTANT || kind == CONSTANT_COMPOUND
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1083, 6),
  POS(1083, 6),
  POS(1083, 3)
};

static TAB_NUM t_lambda_214[] = {
  2, // locals
  0, // parameters
  // kind == CONSTANT || kind == CONSTANT_COMPOUND
  var_std__equal, 2, var_1082_24_kind, var_CONSTANT, 1, LOCAL(1),
  // kind == CONSTANT || kind == CONSTANT_COMPOUND
  var_std__or, 2, LOCAL(1), lambda_215, 1, LOCAL(2),
  // kind == CONSTANT || kind == CONSTANT_COMPOUND
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1083, 23),
  POS(1083, 23),
  POS(1083, 23)
};

static TAB_NUM t_lambda_215[] = {
  1, // locals
  0, // parameters
  // kind == CONSTANT_COMPOUND
  var_std__equal, 2, var_1082_24_kind, var_CONSTANT_COMPOUND, 1, LOCAL(1),
  // kind == CONSTANT_COMPOUND
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1083, 43),
  POS(1083, 43)
};

static TAB_NUM t_func_collect_types[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 1085_17_statements
  // $types empty_insert_order_table
  LET, 1, var_empty_insert_order_table, 1, var_1086_1_types,
  // for_each statements
  var_for_each, 3, LOCAL(1), lambda_216, lambda_223, TAIL_CALL,
  POS(1086, 3),
  POS(1087, 3)
};

static TAB_NUM t_lambda_216[] = {
  2, // locals
  1, // parameters
  var_1088_3_statement,
  // node_type_of(statement) == STATEMENT:
  var_node_type_of, 1, var_1088_3_statement, 1, LOCAL(1),
  // node_type_of(statement) == STATEMENT:
  var_std__equal, 2, LOCAL(1), var_STATEMENT, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_217, var_next, TAIL_CALL,
  POS(1090, 9),
  POS(1090, 9),
  POS(1089, 7)
};

static TAB_NUM t_lambda_217[] = {
  3, // locals
  0, // parameters
  // $head head_of(statement)
  var_head_of, 1, var_1088_3_statement, 1, LOCAL(3),
  // identifier_of(head) == "std::assign":
  var_identifier_of, 1, LOCAL(3), 1, LOCAL(1),
  // identifier_of(head) == "std::assign":
  var_std__equal, 2, LOCAL(1), str_stdassign, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_218, var_next, TAIL_CALL,
  POS(1091, 11),
  POS(1093, 13),
  POS(1093, 13),
  POS(1092, 11)
};

static TAB_NUM t_lambda_218[] = {
  1, // locals
  0, // parameters
  // $arguments arguments_of(statement)
  var_arguments_of, 1, var_1088_3_statement, 1, var_1094_1_arguments,
  // $argument arguments(1)
  var_1094_1_arguments, 1, num_1, 1, var_1095_1_argument,
  // node_type_of(argument)
  var_node_type_of, 1, var_1095_1_argument, 1, LOCAL(1),
  // case node_type_of(argument)
  var_case, 8, LOCAL(1), var_TYPE_FUNCTION, lambda_TYPE_FUNCTION, var_ATTRIBUTE_VALUE_PAIR, lambda_ATTRIBUTE_VALUE_PAIR, var_METHOD_VALUE_PAIR, lambda_METHOD_VALUE_PAIR, var_next, TAIL_CALL,
  POS(1094, 15),
  POS(1095, 15),
  POS(1096, 20),
  POS(1096, 15)
};

static TAB_NUM t_lambda_TYPE_FUNCTION[] = {
  1, // locals
  0, // parameters
  // mangled_literals(argument)
  var_mangled_literals, 1, var_1095_1_argument, 1, LOCAL(1),
  // add "TYPE_FUNCTION" mangled_literals(argument)
  func_add, 2, str_TYPE_FUNCTION, LOCAL(1), TAIL_CALL,
  POS(1098, 39),
  POS(1098, 19)
};

static TAB_NUM t_lambda_ATTRIBUTE_VALUE_PAIR[] = {
  0, // locals
  0, // parameters
  // add_method "-"
  func_add_method, 1, string_41, TAIL_CALL,
  POS(1100, 19)
};

static TAB_NUM t_lambda_METHOD_VALUE_PAIR[] = {
  0, // locals
  0, // parameters
  // add_method
  func_add_method, 0, TAIL_CALL,
  POS(1102, 19)
};

static TAB_NUM t_func_add_method[] = {
  5, // locals
  -1, // parameters
  string_6, LOCAL(3), // 1105_14_prefix
  // identifier_of(argument))
  var_identifier_of, 1, var_1095_1_argument, 1, LOCAL(1),
  // $method mangle_identifier(identifier_of(argument))
  var_mangle_identifier, 1, LOCAL(1), 1, LOCAL(4),
  // $value argument_of(argument)
  var_argument_of, 1, var_1095_1_argument, 1, var_1107_1_value,
  // node_type_of(value) == FUNCTOR:
  var_node_type_of, 1, var_1107_1_value, 1, LOCAL(1),
  // node_type_of(value) == FUNCTOR:
  var_std__equal, 2, LOCAL(1), var_FUNCTOR, 1, LOCAL(2),
  // $value_idx
  var_if, 3, LOCAL(2), lambda_219, lambda_222, 1, LOCAL(5),
  // append(prefix "var_" method) value_idx
  var_append, 3, LOCAL(3), str_var, LOCAL(4), 1, LOCAL(1),
  // add append(prefix "var_" method) value_idx
  func_add, 2, LOCAL(1), LOCAL(5), TAIL_CALL,
  POS(1106, 43),
  POS(1106, 17),
  POS(1107, 17),
  POS(1110, 21),
  POS(1110, 21),
  POS(1108, 17),
  POS(1118, 21),
  POS(1118, 17)
};

static TAB_NUM t_lambda_219[] = {
  2, // locals
  0, // parameters
  // $identifier identifier_of(value)
  var_identifier_of, 1, var_1107_1_value, 1, var_1111_1_identifier,
  // variables(identifier) $kind $constant_value
  var_variables, 1, var_1111_1_identifier, 1, LOCAL(1),
  // variables(identifier) $kind $constant_value
  LOCAL(1), 0, 2, LOCAL(2), var_1112_29_constant_value,
  // CONSTANT, CONSTANT_COMPOUND
  var_std__sequence, 2, var_CONSTANT, var_CONSTANT_COMPOUND, 1, LOCAL(1),
  // case kind
  var_case, 4, LOCAL(2), LOCAL(1), lambda_220, lambda_221, TAIL_CALL,
  POS(1111, 23),
  POS(1112, 23),
  POS(1112, 23),
  POS(1114, 25),
  POS(1113, 23)
};

static TAB_NUM t_lambda_220[] = {
  1, // locals
  0, // parameters
  // mangled_literals(constant_value)
  var_mangled_literals, 1, var_1112_29_constant_value, 1, LOCAL(1),
  //  mangled_literals(constant_value)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1115, 28),
  POS(1115, 27)
};

static TAB_NUM t_lambda_221[] = {
  2, // locals
  0, // parameters
  // mangle_identifier(identifier))
  var_mangle_identifier, 1, var_1111_1_identifier, 1, LOCAL(1),
  // append("var_" mangle_identifier(identifier))
  var_append, 2, str_var, LOCAL(1), 1, LOCAL(2),
  //  append("var_" mangle_identifier(identifier))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1116, 42),
  POS(1116, 28),
  POS(1116, 27)
};

static TAB_NUM t_lambda_222[] = {
  1, // locals
  0, // parameters
  // mangled_literals(value)
  var_mangled_literals, 1, var_1107_1_value, 1, LOCAL(1),
  //  mangled_literals(value)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1117, 24),
  POS(1117, 23)
};

static TAB_NUM t_func_add[] = {
  7, // locals
  2, // parameters
  LOCAL(4), // 1120_7_method
  LOCAL(5), // 1120_14_value_idx
  // arguments(2)))
  var_1094_1_arguments, 1, num_2, 1, LOCAL(1),
  // identifier_of(arguments(2)))
  var_identifier_of, 1, LOCAL(1), 1, LOCAL(2),
  // $type mangle_identifier(identifier_of(arguments(2)))
  var_mangle_identifier, 1, LOCAL(2), 1, LOCAL(6),
  // types(type) empty_list)
  var_1086_1_types, 1, LOCAL(6), 1, LOCAL(1),
  // $methods default_value(types(type) empty_list)
  var_default_value, 2, LOCAL(1), var_empty_list, 1, LOCAL(7),
  // tuple(method value_idx))
  var_tuple, 2, LOCAL(4), LOCAL(5), 1, LOCAL(1),
  // !types(type) push(methods tuple(method value_idx))
  var_push, 2, LOCAL(7), LOCAL(1), 1, LOCAL(3),
  // types(type) push(methods tuple(method value_idx))
  var_1086_1_types, 2, LOCAL(6), LOCAL(3), 1, var_1086_1_types,
  // next
  var_next, 0, TAIL_CALL,
  POS(1121, 55),
  POS(1121, 41),
  POS(1121, 17),
  POS(1122, 40),
  POS(1122, 17),
  POS(1123, 43),
  POS(1123, 17),
  POS(1123, 18),
  POS(1124, 17)
};

static TAB_NUM t_lambda_223[] = {
  0, // locals
  0, // parameters
  //  types
  LET, 1, var_1086_1_types, TAIL_CALL,
  POS(1127, 7)
};

static TAB_NUM t_func_funky__mangle_identifier[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 1133_28_identifier
  // replace_all
  var_replace_all, 4, LOCAL(1), key_value_pair_951_1, key_value_pair_952_1, key_value_pair_1138_1, TAIL_CALL,
  POS(1134, 3)
};

static TAB_NUM t_func_to_c_string[] = {
  0, // locals
  1, // parameters
  var_1140_15_str,
  // $buf ""
  LET, 1, string_6, 1, var_1141_1_buf,
  // $s 1
  LET, 1, num_1, 1, var_1142_1_s,
  // for_each str
  var_for_each, 3, var_1140_15_str, lambda_224, lambda_229, TAIL_CALL,
  POS(1141, 3),
  POS(1142, 3),
  POS(1143, 3)
};

static TAB_NUM t_lambda_224[] = {
  2, // locals
  2, // parameters
  var_1144_3_idx,
  var_1144_7_chr,
  // chr < ' ' || chr > '~' || chr == '@quot;' || chr == '\':
  var_std__less, 2, var_1144_7_chr, chr_32, 1, LOCAL(1),
  // chr < ' ' || chr > '~' || chr == '@quot;' || chr == '\':
  var_std__or, 2, LOCAL(1), lambda_225, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_228, var_next, TAIL_CALL,
  POS(1146, 9),
  POS(1146, 9),
  POS(1145, 7)
};

static TAB_NUM t_lambda_225[] = {
  2, // locals
  0, // parameters
  // ~' || chr == '@quot;' || chr == '\':
  var_std__less, 2, chr_126, var_1144_7_chr, 1, LOCAL(1),
  // ~' || chr == '@quot;' || chr == '\':
  var_std__or, 2, LOCAL(1), lambda_226, 1, LOCAL(2),
  // chr > '~' || chr == '@quot;' || chr == '\':
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1146, 29),
  POS(1146, 29),
  POS(1146, 22)
};

static TAB_NUM t_lambda_226[] = {
  2, // locals
  0, // parameters
  // chr == '@quot;' || chr == '\':
  var_std__equal, 2, var_1144_7_chr, chr_34, 1, LOCAL(1),
  // chr == '@quot;' || chr == '\':
  var_std__or, 2, LOCAL(1), lambda_227, 1, LOCAL(2),
  // chr == '@quot;' || chr == '\':
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1146, 35),
  POS(1146, 35),
  POS(1146, 35)
};

static TAB_NUM t_lambda_227[] = {
  1, // locals
  0, // parameters
  // chr == '\':
  var_std__equal, 2, var_1144_7_chr, chr_92, 1, LOCAL(1),
  // chr == '\':
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1146, 54),
  POS(1146, 54)
};

static TAB_NUM t_lambda_228[] = {
  3, // locals
  0, // parameters
  // idx-1)
  var_std__minus, 2, var_1144_3_idx, num_1, 1, LOCAL(1),
  // range(str s idx-1)
  var_range, 3, var_1140_15_str, var_1142_1_s, LOCAL(1), 1, LOCAL(2),
  // append &buf range(str s idx-1)
  var_append, 2, var_1141_1_buf, LOCAL(2), 1, var_1141_1_buf,
  // to_integer) 3 "0")
  var_to_integer, 1, var_1144_7_chr, 1, LOCAL(1),
  // oct(chr.to_integer) 3 "0")
  var_oct, 1, LOCAL(1), 1, LOCAL(2),
  // pad_left(oct(chr.to_integer) 3 "0")
  var_pad_left, 3, LOCAL(2), num_3, string_23, 1, LOCAL(3),
  // append &buf "\" pad_left(oct(chr.to_integer) 3 "0")
  var_append, 3, var_1141_1_buf, string_45, LOCAL(3), 1, var_1141_1_buf,
  // !s idx+1
  var_std__plus, 2, var_1144_3_idx, num_1, 1, var_1142_1_s,
  // next
  var_next, 0, TAIL_CALL,
  POS(1147, 35),
  POS(1147, 23),
  POS(1147, 11),
  POS(1148, 44),
  POS(1148, 36),
  POS(1148, 27),
  POS(1148, 11),
  POS(1149, 11),
  POS(1150, 11)
};

static TAB_NUM t_lambda_229[] = {
  3, // locals
  0, // parameters
  // length_of(str)
  var_length_of, 1, var_1140_15_str, 1, LOCAL(1),
  // length_of(str)
  var_std__less, 2, LOCAL(1), var_1142_1_s, 1, LOCAL(2),
  // length_of(str)
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_230, lambda_231, TAIL_CALL,
  POS(1154, 14),
  POS(1154, 14),
  POS(1154, 14),
  POS(1153, 7)
};

static TAB_NUM t_lambda_230[] = {
  2, // locals
  0, // parameters
  // range(str s -1))
  var_range, 3, var_1140_15_str, var_1142_1_s, minus_num_1, 1, LOCAL(1),
  // append(buf range(str s -1))
  var_append, 2, var_1141_1_buf, LOCAL(1), 1, LOCAL(2),
  //  append(buf range(str s -1))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1155, 23),
  POS(1155, 12),
  POS(1155, 11)
};

static TAB_NUM t_lambda_231[] = {
  0, // locals
  0, // parameters
  //  buf
  LET, 1, var_1141_1_buf, TAIL_CALL,
  POS(1156, 11)
};

static TAB_NUM t_func_to_c_string_32[] = {
  0, // locals
  1, // parameters
  var_1158_18_str,
  // $buf ""
  LET, 1, string_6, 1, var_1159_1_buf,
  // $s 1
  LET, 1, num_1, 1, var_1160_1_s,
  // for_each str
  var_for_each, 3, var_1158_18_str, lambda_232, lambda_237, TAIL_CALL,
  POS(1159, 3),
  POS(1160, 3),
  POS(1161, 3)
};

static TAB_NUM t_lambda_232[] = {
  2, // locals
  2, // parameters
  var_1162_3_idx,
  var_1162_7_chr,
  // chr < ' ' || chr > '~' || chr == '@quot;' || chr == '\':
  var_std__less, 2, var_1162_7_chr, chr_32, 1, LOCAL(1),
  // chr < ' ' || chr > '~' || chr == '@quot;' || chr == '\':
  var_std__or, 2, LOCAL(1), lambda_233, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_236, var_next, TAIL_CALL,
  POS(1164, 9),
  POS(1164, 9),
  POS(1163, 7)
};

static TAB_NUM t_lambda_233[] = {
  2, // locals
  0, // parameters
  // ~' || chr == '@quot;' || chr == '\':
  var_std__less, 2, chr_126, var_1162_7_chr, 1, LOCAL(1),
  // ~' || chr == '@quot;' || chr == '\':
  var_std__or, 2, LOCAL(1), lambda_234, 1, LOCAL(2),
  // chr > '~' || chr == '@quot;' || chr == '\':
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1164, 29),
  POS(1164, 29),
  POS(1164, 22)
};

static TAB_NUM t_lambda_234[] = {
  2, // locals
  0, // parameters
  // chr == '@quot;' || chr == '\':
  var_std__equal, 2, var_1162_7_chr, chr_34, 1, LOCAL(1),
  // chr == '@quot;' || chr == '\':
  var_std__or, 2, LOCAL(1), lambda_235, 1, LOCAL(2),
  // chr == '@quot;' || chr == '\':
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1164, 35),
  POS(1164, 35),
  POS(1164, 35)
};

static TAB_NUM t_lambda_235[] = {
  1, // locals
  0, // parameters
  // chr == '\':
  var_std__equal, 2, var_1162_7_chr, chr_92, 1, LOCAL(1),
  // chr == '\':
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1164, 54),
  POS(1164, 54)
};

static TAB_NUM t_lambda_236[] = {
  2, // locals
  0, // parameters
  // idx-1)
  var_std__minus, 2, var_1162_3_idx, num_1, 1, LOCAL(1),
  // range(str s idx-1)
  var_range, 3, var_1158_18_str, var_1160_1_s, LOCAL(1), 1, LOCAL(2),
  // append &buf range(str s idx-1)
  var_append, 2, var_1159_1_buf, LOCAL(2), 1, var_1159_1_buf,
  // to_integer 8)
  var_to_integer, 1, var_1162_7_chr, 1, LOCAL(1),
  // hex(chr.to_integer 8)
  var_hex, 2, LOCAL(1), num_8, 1, LOCAL(2),
  // append &buf "\U" hex(chr.to_integer 8)
  var_append, 3, var_1159_1_buf, str_U, LOCAL(2), 1, var_1159_1_buf,
  // !s idx+1
  var_std__plus, 2, var_1162_3_idx, num_1, 1, var_1160_1_s,
  // next
  var_next, 0, TAIL_CALL,
  POS(1165, 35),
  POS(1165, 23),
  POS(1165, 11),
  POS(1166, 36),
  POS(1166, 28),
  POS(1166, 11),
  POS(1167, 11),
  POS(1168, 11)
};

static TAB_NUM t_lambda_237[] = {
  3, // locals
  0, // parameters
  // length_of(str)
  var_length_of, 1, var_1158_18_str, 1, LOCAL(1),
  // length_of(str)
  var_std__less, 2, LOCAL(1), var_1160_1_s, 1, LOCAL(2),
  // length_of(str)
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_238, lambda_239, TAIL_CALL,
  POS(1172, 14),
  POS(1172, 14),
  POS(1172, 14),
  POS(1171, 7)
};

static TAB_NUM t_lambda_238[] = {
  2, // locals
  0, // parameters
  // range(str s -1))
  var_range, 3, var_1158_18_str, var_1160_1_s, minus_num_1, 1, LOCAL(1),
  // append(buf range(str s -1))
  var_append, 2, var_1159_1_buf, LOCAL(1), 1, LOCAL(2),
  //  append(buf range(str s -1))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1173, 23),
  POS(1173, 12),
  POS(1173, 11)
};

static TAB_NUM t_lambda_239[] = {
  0, // locals
  0, // parameters
  //  buf
  LET, 1, var_1159_1_buf, TAIL_CALL,
  POS(1174, 11)
};

static int key_value_pair_201_1_arguments[] = {
  -chr_95, -string_12
};

static int key_value_pair_337_21_arguments[] = {
  -chr_47, -string_28
};

static int sequence_687_1_arguments[] = {
  -str_stdassign, -str_assign
};

static int key_value_pair_908_19_arguments[] = {
  -chr_46, -string_39
};

static int key_value_pair_949_1_arguments[] = {
  -chr_46, -string_42
};

static int key_value_pair_950_1_arguments[] = {
  -chr_47, -string_42
};

static int key_value_pair_951_1_arguments[] = {
  -string_11, -string_28
};

static int key_value_pair_952_1_arguments[] = {
  -chr_45, -string_28
};

static int key_value_pair_1069_47_arguments[] = {
  -string_28, -string_11
};

static int key_value_pair_1138_1_arguments[] = {
  -chr_46, -string_28
};

static FUNKY_CONSTANT constants_table[] = {
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky__generate_tabular_code}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_3}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_4}},
  {FLT_STRING_8, 43, {.str_8 = "Main module does not contain any statements"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_5}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_6}},
  {FLT_POSITIVE_INT64, 0, {.value = 1}},
  {FLT_STRING_8, 38, {.str_8 = "Module should only contain definitions"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_7}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_8}},
  {FLT_POSITIVE_INT64, 0, {.value = 0}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_countvariables}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_9}},
  {FLT_STRING_8, 18, {.str_8 = "  constants_table,"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_10}},
  {FLT_STRING_8, 23, {.str_8 = "  NULL, // no constants"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_11}},
  {FLT_STRING_8, 18, {.str_8 = "  variables_table,"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_12}},
  {FLT_STRING_8, 23, {.str_8 = "  NULL, // no variables"}},
  {FLT_STRING_8, 153, {.str_8 = "#include <stddef.h>\012#include <stdint.h>\012\012#include \042runtime/common.h\042\012#include \042runtime/builtins.h\042\012#include \042runtime/fko.h\042\012#include \042runtime/memory.h\042\012\012"}},
  {FLT_STRING_8, 1, {.str_8 = "\012"}},
  {FLT_STRING_8, 22, {.str_8 = "\012FUNKY_MODULE module__"}},
  {FLT_STRING_8, 9, {.str_8 = " = {\012  \042_"}},
  {FLT_STRING_8, 21, {.str_8 = "\042, // module name\012  \042"}},
  {FLT_STRING_8, 118, {.str_8 = "\042, // module filename\012  .major_version = 0,\012  .minor_version = 0,\012  .feature_flags = FEAT_POSITIONS,\012  .marker = 0,\012  "}},
  {FLT_STRING_8, 34, {.str_8 = ", // number of required modules\012  "}},
  {FLT_STRING_8, 36, {.str_8 = ", // number of defined namespaces\012  "}},
  {FLT_STRING_8, 33, {.str_8 = ", // number of used namespaces\012  "}},
  {FLT_STRING_8, 27, {.str_8 = ", // number of constants\012  "}},
  {FLT_STRING_8, 27, {.str_8 = ", // number of variables\012  "}},
  {FLT_STRING_8, 3, {.str_8 = "\012  "}},
  {FLT_STRING_8, 20, {.str_8 = "\012  used_namespaces,\012"}},
  {FLT_STRING_8, 4, {.str_8 = "\012};\012"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_13}},
  {FLT_STRING_8, 89, {.str_8 = "int main(int argc, char **argv) {\012  main_argc = argc;\012  main_argv = argv;\012  run(&module__"}},
  {FLT_STRING_8, 5, {.str_8 = ");\012}\012"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_14}},
  {FLT_STRING_8, 0, {.str_8 = ""}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_require}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_15}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_16}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_17}},
  {FLT_STRING_8, 2, {.str_8 = "./"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_18}},
  {FLT_CHARACTER, 0, {.value = 47}},
  {FLT_NEGATIVE_INT64, 0, {.value = 1}},
  {FLT_STRING_8, 12, {.str_8 = "/// require "}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_constants_enum}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_19}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_20}},
  {FLT_STRING_8, 7, {.str_8 = "enum {\012"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_21}},
  {FLT_STRING_8, 2, {.str_8 = "  "}},
  {FLT_STRING_8, 3, {.str_8 = " = "}},
  {FLT_STRING_8, 2, {.str_8 = ",\012"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_22}},
  {FLT_NEGATIVE_INT64, 0, {.value = 3}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_compound_constants}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_23}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_24}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_constants_table}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_25}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_26}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_27}},
  {FLT_STRING_8, 45, {.str_8 = "\012static FUNKY_CONSTANT constants_table[] = {\012"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_28}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_29}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_30}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_31}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_32}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_33}},
  {FLT_STRING_8, 50, {.str_8 = "  {FLT_FUNCTION, 0, {.tfunc = t_module_entry}}\012};\012"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_variables_enum}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_34}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_35}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_36}},
  {FLT_STRING_8, 2, {.str_8 = "::"}},
  {FLT_CHARACTER, 0, {.value = 95}},
  {FLT_STRING_8, 1, {.str_8 = " "}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_201_1_arguments}},
  {FLT_STRING_8, 6, {.str_8 = "  var_"}},
  {FLT_STRING_8, 5, {.str_8 = ", // "}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_37}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_38}},
  {FLT_STRING_8, 35, {.str_8 = "enum {\012  var__START = FIRST_VAR-1,\012"}},
  {FLT_STRING_8, 14, {.str_8 = "  var__END\012};\012"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_variables_table}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_39}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_40}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_41}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_EXTERN}},
  {FLT_STRING_8, 7, {.str_8 = "UNKNOWN"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_EXTERN_POLYMORPHIC}},
  {FLT_STRING_8, 19, {.str_8 = "UNKNOWN_POLYMORPHIC"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_42}},
  {FLT_STRING_8, 11, {.str_8 = "POLYMORPHIC"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_43}},
  {FLT_STRING_8, 11, {.str_8 = "INITIALIZED"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_DYNAMIC}},
  {FLT_STRING_8, 13, {.str_8 = "UNINITIALIZED"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_DERIVED}},
  {FLT_STRING_8, 7, {.str_8 = "DERIVED"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_44}},
  {FLT_STRING_8, 4, {.str_8 = "kind"}},
  {FLT_STRING_8, 3, {.str_8 = "???"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_45}},
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
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_46}},
  {FLT_STRING_8, 19, {.str_8 = ",\012    {.position = "}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_47}},
  {FLT_STRING_8, 12, {.str_8 = "  {\012    FOT_"}},
  {FLT_STRING_8, 5, {.str_8 = ", 0, "}},
  {FLT_STRING_8, 7, {.str_8 = ",\012    \042"}},
  {FLT_STRING_8, 3, {.str_8 = "\042, "}},
  {FLT_STRING_8, 6, {.str_8 = "\012  },\012"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_48}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_49}},
  {FLT_STRING_8, 45, {.str_8 = "\012static FUNKY_VARIABLE variables_table[] = {\012"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_retrieve_base_and_method_count}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_50}},
  {FLT_STRING_8, 12, {.str_8 = "__attributes"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_51}},
  {FLT_STRING_8, 4, {.str_8 = "NULL"}},
  {FLT_STRING_8, 1, {.str_8 = "0"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_attributes_tables}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_52}},
  {FLT_STRING_8, 29, {.str_8 = "\012static ATTRIBUTE_DEFINITION "}},
  {FLT_STRING_8, 19, {.str_8 = "__attributes[] = {\012"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_53}},
  {FLT_STRING_8, 3, {.str_8 = "  {"}},
  {FLT_STRING_8, 3, {.str_8 = ", -"}},
  {FLT_STRING_8, 3, {.str_8 = "},\012"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_54}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_55}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_required_modules_table}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_56}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_57}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_required_modules}},
  {FLT_STRING_8, 28, {.str_8 = "extern FUNKY_MODULE module__"}},
  {FLT_STRING_8, 2, {.str_8 = ";\012"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2_required_modules}},
  {FLT_STRING_8, 11, {.str_8 = "  &module__"}},
  {FLT_STRING_8, 45, {.str_8 = "\012static FUNKY_MODULE *required_modules[] = {\012"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_mangled_name}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_58}},
  {FLT_STRING_8, 2, {.str_8 = "__"}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_337_21_arguments}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_reference_required_modules}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_59}},
  {FLT_STRING_8, 25, {.str_8 = "NULL, // required modules"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_60}},
  {FLT_STRING_8, 17, {.str_8 = "required_modules,"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_defined_namespaces_table}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_61}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_62}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_defined_namespaces}},
  {FLT_CHARACTER, 0, {.value = 45}},
  {FLT_STRING_8, 4, {.str_8 = "  {\042"}},
  {FLT_STRING_8, 2, {.str_8 = ", "}},
  {FLT_STRING_8, 49, {.str_8 = "\012static FUNKY_NAMESPACE defined_namespaces[] = {\012"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_reference_defined_namespaces}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_63}},
  {FLT_STRING_8, 27, {.str_8 = "NULL, // defined namespaces"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_64}},
  {FLT_STRING_8, 19, {.str_8 = "defined_namespaces,"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_used_namespaces_table}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_used_namespaces}},
  {FLT_STRING_8, 46, {.str_8 = "\012static FUNKY_NAMESPACE used_namespaces[] = {\012"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_tabular_functions}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_65}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_66}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_67}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_68}},
  {FLT_STRING_8, 12, {.str_8 = "module_entry"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_tabular_function}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_69}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_70}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_71}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_72}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_73}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_74}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_75}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_76}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_77}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_78}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_check_for_locals}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_79}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_80}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_81}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_82}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_83}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_84}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_85}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_86}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_87}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_88}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_map_reducestatements}},
  {FLT_STRING_8, 18, {.str_8 = "\012static TAB_NUM t_"}},
  {FLT_STRING_8, 9, {.str_8 = "[] = {\012  "}},
  {FLT_STRING_8, 12, {.str_8 = ", // locals\012"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_add_parameters}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_any_ofparameters}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_89}},
  {FLT_STRING_8, 3, {.str_8 = "  -"}},
  {FLT_STRING_8, 16, {.str_8 = ", // parameters\012"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_90}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_add_parameter}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_add_parameter_with_option}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parameter_to_index}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_91}},
  {FLT_STRING_8, 6, {.str_8 = "LOCAL("}},
  {FLT_STRING_8, 3, {.str_8 = "),\012"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_92}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_93}},
  {FLT_STRING_8, 6, {.str_8 = "), // "}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_94}},
  {FLT_STRING_8, 4, {.str_8 = "var_"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_is_a_valid_statement}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_95}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_96}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_97}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_98}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_is_a_valid_argument}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_DEFINITION}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_REDEFINITION}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_99}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_info_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_100}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_101}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_102}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_check_destination}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_103}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_104}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__node___variable_kind}},
  {FLT_STRING_8, 4, {.str_8 = "node"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__undefined___variable_kind}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_105}},
  {FLT_STRING_8, 18, {.str_8 = "extern polymorphic"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_106}},
  {FLT_STRING_8, 6, {.str_8 = "extern"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_definition_variable_kind}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_107}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_108}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_109}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_110}},
  {FLT_STRING_8, 7, {.str_8 = "dynamic"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__statement___variable_kind}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_111}},
  {FLT_CHARACTER, 0, {.value = 58}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_112}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_113}},
  {FLT_STRING_8, 7, {.str_8 = "derived"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_114}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_115}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_116}},
  {FLT_STRING_8, 11, {.str_8 = "initialized"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_117}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_118}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_119}},
  {FLT_STRING_8, 11, {.str_8 = "polymorphic"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_120}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__node___variable_type_and_initialization}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__undefined___variable_type_and_initialization}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_121}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_122}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_definition_variable_type_and_initialization}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_123}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_124}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_125}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_126}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__statement___variable_type_and_initialization}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_127}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_128}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_129}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_130}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_131}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_132}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_133}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_134}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_135}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_136}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_137}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_138}},
  {FLT_STRING_8, 19, {.str_8 = "MANDATORY_PARAMETER"}},
  {FLT_STRING_8, 16, {.str_8 = "MYSELF_PARAMETER"}},
  {FLT_STRING_8, 14, {.str_8 = "REST_PARAMETER"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__initial_value___to_option}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_compile}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_self_is_an_io_call}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_139}},
  {FLT_STRING_8, 12, {.str_8 = "IO_TAIL_CALL"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_140}},
  {FLT_STRING_8, 8, {.str_8 = "IO_CALL("}},
  {FLT_STRING_8, 1, {.str_8 = ")"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_141}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_142}},
  {FLT_STRING_8, 9, {.str_8 = "TAIL_CALL"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_143}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_144}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_145}},
  {FLT_STRING_8, 33, {.str_8 = "Last statement is not a tail call"}},
  {FLT_STRING_8, 5, {.str_8 = "  // "}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_146}},
  {FLT_STRING_8, 11, {.str_8 = "std::assign"}},
  {FLT_STRING_8, 6, {.str_8 = "assign"}},
  {FLT_SEQUENCE, 2, {.arguments = sequence_687_1_arguments}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_147}},
  {FLT_STRING_8, 7, {.str_8 = "  LET, "}},
  {FLT_STRING_8, 18, {.str_8 = "_assign_attributes"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_assign_attributes}},
  {FLT_STRING_8, 8, {.str_8 = "  LET, -"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_148}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_149}},
  {FLT_STRING_8, 8, {.str_8 = "  LET, 1"}},
  {FLT_STRING_8, 5, {.str_8 = ", 1, "}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__node___add_source_positions}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__statement___add_source_positions}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_get_source_position}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_source_group_is_defined}},
  {FLT_STRING_8, 4, {.str_8 = "POS("}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_150}},
  {FLT_STRING_8, 9, {.str_8 = "POS(0, 0)"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__node___to_separated_index}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__inline_attribute_value_pair___to_separated_index}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__inline_method_value_pair___to_separated_index}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__attribute_value_pair___to_separated_index}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__method_value_pair___to_separated_index}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__type_function___to_separated_index}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__node___to_index}},
  {FLT_STRING_8, 18, {.str_8 = "/to_index failed: "}},
  {FLT_STRING_8, 4, {.str_8 = "self"}},
  {FLT_STRING_8, 1, {.str_8 = "?"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_retrieve_name}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_TEMPORARY}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_151}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_152}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_153}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_CONSTANT}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_154}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_LOCAL}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_155}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_156}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_157}},
  {FLT_STRING_8, 5, {.str_8 = "value"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_get_literal}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__node___get_index}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__definition___get_index}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_158}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_159}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parameter_get_index}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_160}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_161}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__statement___get_index}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_162}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_163}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_164}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_165}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_166}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__numeric_literal___add_literal}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__character_sequence___add_literal}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_167}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_168}},
  {FLT_POSITIVE_INT64, 0, {.value = 16}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_169}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_170}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_171}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_172}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_173}},
  {FLT_CHARACTER, 0, {.value = 32}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_174}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_175}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_176}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_mangled_is_empty}},
  {FLT_STRING_8, 6, {.str_8 = "string"}},
  {FLT_STRING_8, 7, {.str_8 = "string_"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_177}},
  {FLT_STRING_8, 4, {.str_8 = "str_"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_178}},
  {FLT_STRING_8, 1, {.str_8 = "_"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_179}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_add_mangled}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__unique___add_literal}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__statement___add_literal}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__body___add_literal}},
  {FLT_STRING_8, 2, {.str_8 = "->"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_180}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_181}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_182}},
  {FLT_CHARACTER, 0, {.value = 36}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_183}},
  {FLT_POSITIVE_INT64, 0, {.value = 2}},
  {FLT_STRING_8, 5, {.str_8 = "func_"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_184}},
  {FLT_CHARACTER, 0, {.value = 46}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_908_19_arguments}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_add_lambda}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_name_is_empty}},
  {FLT_STRING_8, 6, {.str_8 = "lambda"}},
  {FLT_STRING_8, 7, {.str_8 = "lambda_"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_185}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_add_function}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_186}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_187}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_2_add_mangled}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_mangle_versioned_identifier}},
  {FLT_STRING_8, 1, {.str_8 = "-"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_188}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_189}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_190}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_191}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_replace}},
  {FLT_STRING_8, 3, {.str_8 = "___"}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_949_1_arguments}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_950_1_arguments}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_951_1_arguments}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_952_1_arguments}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_check_mangling}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_192}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_193}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_remove_trailing_underscores_and_digits}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_194}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_195}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_196}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_197}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_198}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_remove_non_identifier_characters}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_199}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_200}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_201}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_202}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_203}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_204}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_205}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_206}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_207}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__statement___to_compound}},
  {FLT_STRING_8, 12, {.str_8 = "\012static int "}},
  {FLT_STRING_8, 19, {.str_8 = "_arguments[] = {\012  "}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_to_negative_index}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__numeric_literal___to_table_entry}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_208}},
  {FLT_STRING_8, 31, {.str_8 = "  {FLT_REAL, 0, {.real_value = "}},
  {FLT_STRING_8, 4, {.str_8 = "}},\012"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_209}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_210}},
  {FLT_STRING_8, 4, {.str_8 = "NEGA"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_211}},
  {FLT_STRING_8, 4, {.str_8 = "POSI"}},
  {FLT_STRING_8, 2, {.str_8 = "0b"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_212}},
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
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_213}},
  {FLT_STRING_8, 18, {.str_8 = "  {FLT_STRING_32, "}},
  {FLT_STRING_8, 15, {.str_8 = ", {.str_32 = U\042"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__statement___to_table_entry}},
  {FLT_STRING_8, 16, {.str_8 = ", {.arguments = "}},
  {FLT_STRING_8, 14, {.str_8 = "_arguments}},\012"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__unique___to_table_entry}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_1069_47_arguments}},
  {FLT_STRING_8, 29, {.str_8 = "  {FLT_UNIQUE, 0, {.str_8 = \042"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__body___to_table_entry}},
  {FLT_STRING_8, 32, {.str_8 = "  {FLT_FUNCTION, 0, {.tfunc = t_"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_is_local_or_constant}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_214}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_215}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_collect_types}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_216}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_217}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_218}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_TYPE_FUNCTION}},
  {FLT_STRING_8, 13, {.str_8 = "TYPE_FUNCTION"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_ATTRIBUTE_VALUE_PAIR}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_METHOD_VALUE_PAIR}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_add_method}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_219}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_220}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_221}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_222}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_add}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_223}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky__mangle_identifier}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_1138_1_arguments}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_to_c_string}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_224}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_225}},
  {FLT_CHARACTER, 0, {.value = 126}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_226}},
  {FLT_CHARACTER, 0, {.value = 34}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_227}},
  {FLT_CHARACTER, 0, {.value = 92}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_228}},
  {FLT_POSITIVE_INT64, 0, {.value = 3}},
  {FLT_STRING_8, 1, {.str_8 = "\134"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_229}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_230}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_231}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_to_c_string_32}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_232}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_233}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_234}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_235}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_236}},
  {FLT_POSITIVE_INT64, 0, {.value = 8}},
  {FLT_STRING_8, 2, {.str_8 = "\134U"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_237}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_238}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_239}}
};

static ATTRIBUTE_DEFINITION funky_types__node__attributes[] = {
  {var_variable_kind, -func_funky_types__node___variable_kind},
  {var_variable_type_and_initialization, -func_funky_types__node___variable_type_and_initialization},
  {var_add_source_positions, -func_funky_types__node___add_source_positions},
  {var_to_separated_index, -func_funky_types__node___to_separated_index},
  {var_to_index, -func_funky_types__node___to_index},
  {var_get_index, -func_funky_types__node___get_index},
  {-var_to_compound, -string_6},
  {-var_to_table_entry, -string_14}
};

static ATTRIBUTE_DEFINITION std_types__undefined__attributes[] = {
  {var_variable_kind, -func_std_types__undefined___variable_kind},
  {var_variable_type_and_initialization, -func_std_types__undefined___variable_type_and_initialization},
  {-var_to_option, -str_MANDATORY_PARAME}
};

static ATTRIBUTE_DEFINITION funky_types__definition__attributes[] = {
  {var_variable_kind, -func_definition_variable_kind},
  {var_variable_type_and_initialization, -func_definition_variable_type_and_initialization},
  {var_to_index, -func_retrieve_name},
  {var_get_index, -func_funky_types__definition___get_index}
};

static ATTRIBUTE_DEFINITION funky_types__parameter__attributes[] = {
  {var_variable_kind, -func_definition_variable_kind},
  {var_variable_type_and_initialization, -func_definition_variable_type_and_initialization},
  {var_get_index, -func_parameter_get_index}
};

static ATTRIBUTE_DEFINITION funky_types__inline_parameter__attributes[] = {
  {var_variable_kind, -func_definition_variable_kind},
  {var_variable_type_and_initialization, -func_definition_variable_type_and_initialization},
  {var_get_index, -func_parameter_get_index}
};

static ATTRIBUTE_DEFINITION funky_types__statement__attributes[] = {
  {var_variable_kind, -func_funky_types__statement___variable_kind},
  {var_variable_type_and_initialization, -func_funky_types__statement___variable_type_and_initialization},
  {var_add_source_positions, -func_funky_types__statement___add_source_positions},
  {var_get_index, -func_funky_types__statement___get_index},
  {var_add_literal, -func_funky_types__statement___add_literal},
  {var_to_compound, -func_funky_types__statement___to_compound},
  {var_to_table_entry, -func_funky_types__statement___to_table_entry}
};

static ATTRIBUTE_DEFINITION funky_types__myself__attributes[] = {
  {-var_to_option, -str_MYSELF_PARAMETER}
};

static ATTRIBUTE_DEFINITION funky_types__rest__attributes[] = {
  {-var_to_option, -str_REST_PARAMETER}
};

static ATTRIBUTE_DEFINITION funky_types__initial_value__attributes[] = {
  {var_to_option, -func_funky_types__initial_value___to_option}
};

static ATTRIBUTE_DEFINITION funky_types__inline_attribute_value_pair__attributes[] = {
  {var_to_separated_index, -func_funky_types__inline_attribute_value_pair___to_separated_index}
};

static ATTRIBUTE_DEFINITION funky_types__inline_method_value_pair__attributes[] = {
  {var_to_separated_index, -func_funky_types__inline_method_value_pair___to_separated_index}
};

static ATTRIBUTE_DEFINITION funky_types__attribute_value_pair__attributes[] = {
  {var_to_separated_index, -func_funky_types__attribute_value_pair___to_separated_index}
};

static ATTRIBUTE_DEFINITION funky_types__method_value_pair__attributes[] = {
  {var_to_separated_index, -func_funky_types__method_value_pair___to_separated_index}
};

static ATTRIBUTE_DEFINITION funky_types__type_function__attributes[] = {
  {var_to_separated_index, -func_funky_types__type_function___to_separated_index}
};

static ATTRIBUTE_DEFINITION funky_types__functor__attributes[] = {
  {var_to_index, -func_retrieve_name}
};

static ATTRIBUTE_DEFINITION funky_types__redefinition__attributes[] = {
  {var_to_index, -func_retrieve_name}
};

static ATTRIBUTE_DEFINITION funky_types__update__attributes[] = {
  {var_to_index, -func_retrieve_name}
};

static ATTRIBUTE_DEFINITION funky_types__numeric_literal__attributes[] = {
  {var_to_index, -func_get_literal},
  {var_add_literal, -func_funky_types__numeric_literal___add_literal},
  {var_to_table_entry, -func_funky_types__numeric_literal___to_table_entry}
};

static ATTRIBUTE_DEFINITION funky_types__character_literal__attributes[] = {
  {var_to_index, -func_get_literal}
};

static ATTRIBUTE_DEFINITION funky_types__character_sequence__attributes[] = {
  {var_to_index, -func_get_literal},
  {var_add_literal, -func_funky_types__character_sequence___add_literal},
  {var_to_table_entry, -func_funky_types__character_sequence___to_table_entry}
};

static ATTRIBUTE_DEFINITION funky_types__unique__attributes[] = {
  {var_to_index, -func_get_literal},
  {var_add_literal, -func_funky_types__unique___add_literal},
  {var_to_table_entry, -func_funky_types__unique___to_table_entry}
};

static ATTRIBUTE_DEFINITION funky_types__body__attributes[] = {
  {var_to_index, -func_get_literal},
  {var_add_literal, -func_funky_types__body___add_literal},
  {var_to_table_entry, -func_funky_types__body___to_table_entry}
};

static ATTRIBUTE_DEFINITION funky_types__numeric_character_literal__attributes[] = {
  {var_to_table_entry, -func_funky_types__numeric_character_literal___to_table_entry}
};

static FUNKY_VARIABLE variables_table[] = {
  {
    FOT_POLYMORPHIC, 0, 0,
    "add_literal\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "assign\000std", NULL,
    {.position = POS(25, 1)}
  },
  {
    FOT_DERIVED, 0, 0,
    "mangled_literals\000", NULL,
    {"empty_hash_table\000"}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_hash_table\000", NULL,
    {.position = POS(27, 19)}
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
    "30_32_top_level_statements\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "30_53_is_a_main_module\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "literals\000", NULL,
    {.position = POS(33, 12)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "next\000", NULL,
    {.position = POS(36, 7)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "38_1_types\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "filter\000", NULL,
    {.position = POS(39, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_empty\000", NULL,
    {.position = POS(40, 51)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "and\000std", NULL,
    {.position = POS(40, 10)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "syntax_error\000", NULL,
    {.position = POS(41, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "on\000", NULL,
    {.position = POS(40, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not\000", NULL,
    {.position = POS(42, 10)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_not_empty\000", NULL,
    {.position = POS(42, 56)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "length_of\000", NULL,
    {.position = POS(47, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if\000", NULL,
    {.position = POS(48, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000std", NULL,
    {.position = POS(46, 10)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "variables\000", NULL,
    {.position = POS(53, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "first\000", NULL,
    {.position = POS(53, 40)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "count\000", NULL,
    {.position = POS(53, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "less\000std", NULL,
    {.position = POS(56, 28)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "required_modules\000", NULL,
    {.position = POS(95, 25)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "defined_namespaces\000", NULL,
    {.position = POS(96, 25)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "used_namespaces\000", NULL,
    {.position = POS(97, 25)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "current_module_name\000", NULL,
    {.position = POS(88, 34)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "current_filename\000", NULL,
    {.position = POS(90, 16)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "string\000std", NULL,
    {.position = POS(65, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "append\000", NULL,
    {.position = POS(64, 7)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "125_3_name\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "has_prefix\000", NULL,
    {.position = POS(126, 29)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "without_prefix\000", NULL,
    {.position = POS(127, 21)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "until\000", NULL,
    {.position = POS(128, 42)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "update_if\000", NULL,
    {.position = POS(126, 19)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "map_reduce\000", NULL,
    {.position = POS(123, 15)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "140_1_buf\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "142_1_idx\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "dec\000", NULL,
    {.position = POS(147, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "range\000", NULL,
    {.position = POS(152, 25)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "for_each\000", NULL,
    {.position = POS(143, 13)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "155_1_buf\000", NULL
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "to_compound\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "167_1_buf\000", NULL
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "to_table_entry\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "190_12_buf\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "191_3_name\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "191_8_info\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "mangle_identifier\000", NULL,
    {.position = POS(192, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "to_string\000", NULL,
    {.position = POS(200, 34)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "truncate_until\000", NULL,
    {.position = POS(200, 34)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "to_lower_case\000", NULL,
    {.position = POS(200, 67)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "key_value_pair\000std", NULL,
    {.position = POS(201, 22)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "replace_all\000", NULL,
    {.position = POS(199, 19)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "218_12_buf\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "219_3_name\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "219_8_info\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "220_6_kind\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "220_12_value\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "before\000", NULL,
    {.position = POS(226, 28)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "ATTRIBUTE\000", NULL,
    {.position = POS(233, 21)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "ATTRIBUTE_WITH_SETTER\000", NULL,
    {.position = POS(233, 32)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "sequence\000std", NULL,
    {.position = POS(233, 21)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "INITIALIZED\000", NULL,
    {.position = POS(234, 21)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "INITIALIZED_COMPOUND\000", NULL,
    {.position = POS(234, 34)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "EXTERN\000", NULL,
    {.position = POS(231, 21)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "EXTERN_POLYMORPHIC\000", NULL,
    {.position = POS(232, 21)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "DYNAMIC\000", NULL,
    {.position = POS(235, 21)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "DERIVED\000", NULL,
    {.position = POS(236, 21)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "edump\000", NULL,
    {.position = POS(238, 23)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "case\000", NULL,
    {.position = POS(229, 19)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "identifier_of\000", NULL,
    {.position = POS(249, 35)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "second\000", NULL,
    {.position = POS(263, 62)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "283_1_mangled_name\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "284_1_type\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_defined\000", NULL,
    {.position = POS(286, 16)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "291_1_buf\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "332_16_name\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "base_directory\000", NULL,
    {.position = POS(335, 34)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "truncate_from\000", NULL,
    {.position = POS(357, 21)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "386_3_body\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "node_type_of\000", NULL,
    {.position = POS(387, 18)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "BODY\000", NULL,
    {.position = POS(388, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "TYPE_FUNCTION\000", NULL,
    {.position = POS(388, 21)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "statements_of\000", NULL,
    {.position = POS(390, 36)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "parameters_of\000", NULL,
    {.position = POS(393, 34)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_list\000", NULL,
    {.position = POS(398, 44)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "400_20_name\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "400_25_parameters\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "400_36_statements\000", NULL
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
    "409_3_parameter\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "REDEFINITION\000", NULL,
    {.position = POS(411, 42)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "equal\000std", NULL,
    {.position = POS(411, 15)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "415_1_parameter_name\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "name_of\000funky", NULL,
    {.position = POS(415, 33)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "LOCAL\000", NULL,
    {.position = POS(417, 55)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "424_3_statement\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "STATEMENT\000", NULL,
    {.position = POS(426, 42)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "head_of\000", NULL,
    {.position = POS(427, 61)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "arguments_of\000", NULL,
    {.position = POS(428, 26)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "433_20_node\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "kind_of\000", NULL,
    {.position = POS(438, 25)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "TEMPORARY\000", NULL,
    {.position = POS(438, 42)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "no_of\000", NULL,
    {.position = POS(439, 55)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "max\000", NULL,
    {.position = POS(439, 40)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "DEFINITION\000", NULL,
    {.position = POS(440, 46)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "441_1_identifier\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "true\000", NULL,
    {.position = POS(448, 24)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "cond\000", NULL,
    {.position = POS(434, 19)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "452_1_n\000", NULL
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "add_source_positions\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "463_1_parameter_count\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "option_of\000", NULL,
    {.position = POS(465, 47)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "any_of\000", NULL,
    {.position = POS(465, 13)}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "to_option\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "488_22_parameter\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "493_1_parameter_name\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "494_1_idx\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "500_24_statement\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_a_definition\000", NULL,
    {.position = POS(502, 59)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "all_of\000", NULL,
    {.position = POS(506, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "false\000", NULL,
    {.position = POS(507, 8)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "509_23_argument\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "516_1_info\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "CONSTANT\000", NULL,
    {.position = POS(527, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "CONSTANT_COMPOUND\000", NULL,
    {.position = POS(528, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "sequence\000", NULL,
    {.position = POS(526, 9)}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "variable_kind\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN, 0, 8,
    "node\000funky_types", funky_types__node__attributes,
    {.position = POS(539, 1)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "debug_exit\000", NULL,
    {.position = POS(541, 3)}
  },
  {
    FOT_UNKNOWN, 0, 3,
    "undefined\000std_types", std_types__undefined__attributes,
    {.position = POS(543, 1)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "POLYMORPHIC\000", NULL,
    {.position = POS(545, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "bit_and\000std", NULL,
    {.position = POS(545, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not\000std", NULL,
    {.position = POS(545, 5)}
  },
  {
    FOT_UNKNOWN, 0, 4,
    "definition\000funky_types", funky_types__definition__attributes,
    {.position = POS(549, 1)}
  },
  {
    FOT_UNKNOWN, 0, 3,
    "parameter\000funky_types", funky_types__parameter__attributes,
    {.position = POS(550, 1)}
  },
  {
    FOT_UNKNOWN, 0, 3,
    "inline_parameter\000funky_types", funky_types__inline_parameter__attributes,
    {.position = POS(551, 1)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "553_34_level\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "HAS_SLOTS\000", NULL,
    {.position = POS(555, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_an_integer\000", NULL,
    {.position = POS(559, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "undefined\000", NULL,
    {.position = POS(560, 12)}
  },
  {
    FOT_UNKNOWN, 0, 7,
    "statement\000funky_types", funky_types__statement__attributes,
    {.position = POS(563, 1)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "563_40_node\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "563_45_level\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "563_51_flags\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "REDEFINED\000", NULL,
    {.position = POS(566, 16)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "bit_or\000std", NULL,
    {.position = POS(566, 16)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "contains\000", NULL,
    {.position = POS(567, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "or\000std", NULL,
    {.position = POS(565, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "FUNCTOR\000", NULL,
    {.position = POS(571, 35)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "TOP_LEVEL\000", NULL,
    {.position = POS(575, 22)}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "variable_type_and_initialization\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "602_53_level\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "612_59_node\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "612_64_level\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "612_70_flags\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "613_1_argument\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 1,
    "myself\000funky_types", funky_types__myself__attributes,
    {.position = POS(653, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "rest\000funky_types", funky_types__rest__attributes,
    {.position = POS(654, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "initial_value\000funky_types", funky_types__initial_value__attributes,
    {.position = POS(655, 1)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "operand_of\000", NULL,
    {.position = POS(655, 50)}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "to_index\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "657_11_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "657_16_is_last\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "658_1_head\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_an_input\000", NULL,
    {.position = POS(660, 37)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_an_output\000", NULL,
    {.position = POS(661, 38)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "662_1_input_count\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "663_1_output_count\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_an_io_call\000", NULL,
    {.position = POS(666, 12)}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "to_separated_index\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "676_1_inputs\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "677_1_outputs\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "source_position_of\000", NULL,
    {.position = POS(683, 14)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "minus\000std", NULL,
    {.position = POS(694, 18)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "710_23_node\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "711_1_source_group\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "source_group_of\000", NULL,
    {.position = POS(711, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "line_no_of\000", NULL,
    {.position = POS(716, 16)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "inline_attribute_value_pair\000funky_types", funky_types__inline_attribute_value_pair__attributes,
    {.position = POS(725, 1)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "expression_of\000", NULL,
    {.position = POS(726, 35)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "inline_method_value_pair\000funky_types", funky_types__inline_method_value_pair__attributes,
    {.position = POS(728, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "attribute_value_pair\000funky_types", funky_types__attribute_value_pair__attributes,
    {.position = POS(731, 1)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "argument_of\000", NULL,
    {.position = POS(732, 35)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "method_value_pair\000funky_types", funky_types__method_value_pair__attributes,
    {.position = POS(734, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "type_function\000funky_types", funky_types__type_function__attributes,
    {.position = POS(737, 1)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "debug_write\000", NULL,
    {.position = POS(753, 3)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "functor\000funky_types", funky_types__functor__attributes,
    {.position = POS(757, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "redefinition\000funky_types", funky_types__redefinition__attributes,
    {.position = POS(759, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "update\000funky_types", funky_types__update__attributes,
    {.position = POS(760, 1)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "762_17_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "765_1_info\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "772_1_identifier\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "773_23_kind\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "773_29_value\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 3,
    "numeric_literal\000funky_types", funky_types__numeric_literal__attributes,
    {.position = POS(792, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "character_literal\000funky_types", funky_types__character_literal__attributes,
    {.position = POS(794, 1)}
  },
  {
    FOT_UNKNOWN, 0, 3,
    "character_sequence\000funky_types", funky_types__character_sequence__attributes,
    {.position = POS(796, 1)}
  },
  {
    FOT_UNKNOWN, 0, 3,
    "unique\000funky_types", funky_types__unique__attributes,
    {.position = POS(798, 1)}
  },
  {
    FOT_UNKNOWN, 0, 3,
    "body\000funky_types", funky_types__body__attributes,
    {.position = POS(800, 1)}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "get_index\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "812_1_identifier\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "822_1_name\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "828_36_node\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "829_1_identifier\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "834_1_argument\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "key_of\000funky", NULL,
    {.position = POS(843, 27)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "846_47_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "847_1_mangled\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "characters_of\000", NULL,
    {.position = POS(848, 12)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "849_3_chr\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "break\000", NULL,
    {.position = POS(851, 37)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_a_letter\000", NULL,
    {.position = POS(852, 16)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_a_digit\000", NULL,
    {.position = POS(852, 35)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "push\000", NULL,
    {.position = POS(853, 11)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "867_16_n\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "mangle_position\000", NULL,
    {.position = POS(886, 33)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "889_33_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "893_1_text\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "without_suffix\000", NULL,
    {.position = POS(894, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "trim_right\000", NULL,
    {.position = POS(896, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "912_14_name\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "920_16_name\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "921_16_n\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "from\000", NULL,
    {.position = POS(928, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "string\000", NULL,
    {.position = POS(925, 11)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "935_31_name\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "936_1_rest\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "behind\000", NULL,
    {.position = POS(936, 11)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "955_1_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "963_42_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "964_1_n\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "loop\000", NULL,
    {.position = POS(965, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "977_1_buf\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "979_3_chr\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "concatenate\000", NULL,
    {.position = POS(1005, 5)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1022_1_digits\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "digits_of\000", NULL,
    {.position = POS(1022, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "to_integer\000", NULL,
    {.position = POS(1034, 27)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "numeric_character_literal\000funky_types", funky_types__numeric_character_literal__attributes,
    {.position = POS(1039, 1)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1045_1_characters\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1046_1_length\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_an_octet_string\000", NULL,
    {.position = POS(1048, 16)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "to_upper_case\000", NULL,
    {.position = POS(1061, 53)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "replace_first\000", NULL,
    {.position = POS(1069, 15)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1082_24_kind\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1086_1_types\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_insert_order_table\000", NULL,
    {.position = POS(1086, 10)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1088_3_statement\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1094_1_arguments\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1095_1_argument\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "ATTRIBUTE_VALUE_PAIR\000", NULL,
    {.position = POS(1099, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "METHOD_VALUE_PAIR\000", NULL,
    {.position = POS(1101, 17)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1107_1_value\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1111_1_identifier\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1112_29_constant_value\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "default_value\000", NULL,
    {.position = POS(1122, 26)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "tuple\000", NULL,
    {.position = POS(1123, 43)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "mangle_identifier\000funky", NULL,
    {.const_idx = -func_funky__mangle_identifier}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1140_15_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1141_1_buf\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1142_1_s\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1144_3_idx\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1144_7_chr\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "oct\000", NULL,
    {.position = POS(1148, 36)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "pad_left\000", NULL,
    {.position = POS(1148, 27)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1158_18_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1159_1_buf\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1160_1_s\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1162_3_idx\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1162_7_chr\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "hex\000", NULL,
    {.position = POS(1166, 28)}
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
  530, // number of constants
  276, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  constants_table,
  variables_table,
};
