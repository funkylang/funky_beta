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
  lambda_139 = -301,
  lambda_140 = -302,
  str_Last_statement_i = -303,
  lambda_141 = -304,
  lambda_self_is_an_io_call = -305,
  lambda_142 = -306,
  str_IO_TAIL_CALL = -307,
  lambda_143 = -308,
  str_IO_CALL = -309,
  string_35 = -310,
  lambda_144 = -311,
  lambda_145 = -312,
  str_TAIL_CALL = -313,
  lambda_146 = -314,
  string_36 = -315,
  lambda_147 = -316,
  str_stdassign = -317,
  str_assign = -318,
  sequence_688_1 = -319,
  lambda_148 = -320,
  lambda_149 = -321,
  lambda_150 = -322,
  str_Return_statement = -323,
  str___LET = -324,
  str__assign_attribut = -325,
  lambda_assign_attributes = -326,
  str___LET_2 = -327,
  lambda_151 = -328,
  lambda_152 = -329,
  lambda_153 = -330,
  str___LET_0_TAIL_CAL = -331,
  lambda_154 = -332,
  lambda_155 = -333,
  str___LET_3 = -334,
  string_37 = -335,
  func_funky_types__node___add_source_positions = -336,
  func_funky_types__statement___add_source_positions = -337,
  func_get_source_position = -338,
  lambda_source_group_is_defined = -339,
  str_POS = -340,
  lambda_156 = -341,
  str_POS_2 = -342,
  func_funky_types__node___to_separated_index = -343,
  func_funky_types__inline_attribute_value_pair___to_separated_index = -344,
  func_funky_types__inline_method_value_pair___to_separated_index = -345,
  func_funky_types__attribute_value_pair___to_separated_index = -346,
  func_funky_types__method_value_pair___to_separated_index = -347,
  func_funky_types__type_function___to_separated_index = -348,
  func_funky_types__node___to_index = -349,
  str_to_index_failed = -350,
  str_self = -351,
  string_38 = -352,
  func_retrieve_name = -353,
  lambda_TEMPORARY = -354,
  lambda_157 = -355,
  lambda_158 = -356,
  lambda_159 = -357,
  lambda_CONSTANT = -358,
  lambda_160 = -359,
  lambda_LOCAL = -360,
  lambda_161 = -361,
  lambda_162 = -362,
  lambda_163 = -363,
  str_value = -364,
  func_get_literal = -365,
  func_funky_types__node___get_index = -366,
  func_funky_types__definition___get_index = -367,
  lambda_164 = -368,
  lambda_165 = -369,
  func_parameter_get_index = -370,
  lambda_166 = -371,
  lambda_167 = -372,
  func_funky_types__statement___get_index = -373,
  lambda_168 = -374,
  lambda_169 = -375,
  lambda_170 = -376,
  lambda_171 = -377,
  lambda_172 = -378,
  func_funky_types__numeric_literal___add_literal = -379,
  func_funky_types__character_sequence___add_literal = -380,
  lambda_173 = -381,
  lambda_174 = -382,
  num_16 = -383,
  lambda_175 = -384,
  lambda_176 = -385,
  lambda_177 = -386,
  lambda_178 = -387,
  lambda_179 = -388,
  chr_32 = -389,
  lambda_180 = -390,
  lambda_181 = -391,
  lambda_182 = -392,
  lambda_mangled_is_empty = -393,
  str_string = -394,
  str_string_2 = -395,
  lambda_183 = -396,
  str_str = -397,
  lambda_184 = -398,
  string_39 = -399,
  lambda_185 = -400,
  func_add_mangled = -401,
  func_funky_types__unique___add_literal = -402,
  func_funky_types__statement___add_literal = -403,
  func_funky_types__body___add_literal = -404,
  string_40 = -405,
  lambda_186 = -406,
  lambda_187 = -407,
  lambda_188 = -408,
  chr_36 = -409,
  lambda_189 = -410,
  num_2 = -411,
  str_func = -412,
  lambda_190 = -413,
  chr_46 = -414,
  key_value_pair_920_19 = -415,
  func_add_lambda = -416,
  lambda_name_is_empty = -417,
  str_lambda = -418,
  str_lambda_2 = -419,
  lambda_191 = -420,
  func_add_function = -421,
  lambda_192 = -422,
  lambda_193 = -423,
  func_2_add_mangled = -424,
  func_mangle_versioned_identifier = -425,
  string_41 = -426,
  lambda_194 = -427,
  lambda_195 = -428,
  lambda_196 = -429,
  lambda_197 = -430,
  func_replace = -431,
  string_42 = -432,
  key_value_pair_961_1 = -433,
  key_value_pair_962_1 = -434,
  key_value_pair_963_1 = -435,
  key_value_pair_964_1 = -436,
  func_check_mangling = -437,
  lambda_198 = -438,
  lambda_199 = -439,
  func_remove_trailing_underscores_and_digits = -440,
  lambda_loop = -441,
  lambda_200 = -442,
  lambda_201 = -443,
  lambda_202 = -444,
  lambda_203 = -445,
  lambda_204 = -446,
  func_remove_non_identifier_characters = -447,
  lambda_205 = -448,
  lambda_206 = -449,
  lambda_207 = -450,
  lambda_208 = -451,
  lambda_209 = -452,
  lambda_210 = -453,
  lambda_211 = -454,
  lambda_212 = -455,
  lambda_213 = -456,
  func_funky_types__statement___to_compound = -457,
  str_static_int = -458,
  str__arguments = -459,
  func_to_negative_index = -460,
  func_funky_types__numeric_literal___to_table_entry = -461,
  lambda_214 = -462,
  str___FLT_REAL_0_rea = -463,
  string_43 = -464,
  lambda_215 = -465,
  lambda_216 = -466,
  str_NEGA = -467,
  lambda_217 = -468,
  str_POSI = -469,
  str_0b = -470,
  lambda_218 = -471,
  str_0o = -472,
  lambda_digits = -473,
  str___FLT = -474,
  str_TIVE_INT64_0_val = -475,
  func_funky_types__numeric_character_literal___to_table_entry = -476,
  str___FLT_CHARACTER = -477,
  func_funky_types__character_sequence___to_table_entry = -478,
  lambda_characters_is_an_octet_string = -479,
  str___FLT_STRING = -480,
  str__str = -481,
  string_44 = -482,
  lambda_219 = -483,
  str___FLT_STRING_2 = -484,
  str__str_32__U = -485,
  func_funky_types__statement___to_table_entry = -486,
  str__arguments_2 = -487,
  str__arguments_3 = -488,
  func_funky_types__unique___to_table_entry = -489,
  key_value_pair_1081_47 = -490,
  str___FLT_UNIQUE_0_s = -491,
  func_funky_types__body___to_table_entry = -492,
  str___FLT_FUNCTION_2 = -493,
  func_is_local_or_constant = -494,
  lambda_220 = -495,
  lambda_221 = -496,
  func_collect_types = -497,
  lambda_222 = -498,
  lambda_223 = -499,
  lambda_224 = -500,
  lambda_225 = -501,
  lambda_226 = -502,
  minus_num_2 = -503,
  lambda_227 = -504,
  lambda_TYPE_FUNCTION = -505,
  str_TYPE_FUNCTION = -506,
  lambda_ATTRIBUTE_VALUE_PAIR = -507,
  lambda_METHOD_VALUE_PAIR = -508,
  func_add_method = -509,
  lambda_228 = -510,
  lambda_229 = -511,
  lambda_230 = -512,
  lambda_231 = -513,
  func_add = -514,
  lambda_232 = -515,
  func_funky__mangle_identifier = -516,
  key_value_pair_1156_1 = -517,
  func_to_c_string = -518,
  lambda_233 = -519,
  lambda_234 = -520,
  chr_126 = -521,
  lambda_235 = -522,
  chr_34 = -523,
  lambda_236 = -524,
  chr_92 = -525,
  lambda_237 = -526,
  num_3 = -527,
  string_45 = -528,
  lambda_238 = -529,
  lambda_239 = -530,
  lambda_240 = -531,
  func_to_c_string_32 = -532,
  lambda_241 = -533,
  lambda_242 = -534,
  lambda_243 = -535,
  lambda_244 = -536,
  lambda_245 = -537,
  num_0xff = -538,
  lambda_246 = -539,
  lambda_247 = -540,
  num_0xffff = -541,
  lambda_248 = -542,
  num_4 = -543,
  str_u = -544,
  lambda_249 = -545,
  num_8 = -546,
  str_U = -547,
  lambda_250 = -548,
  lambda_251 = -549,
  lambda_252 = -550
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
  var_mangle_identifier, // extern
  var_193_1_kind, // dynamic
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
  var_debug__dump, // extern
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
  var_debug__exit, // extern
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
  var_661_1_output_arguments, // dynamic
  var_is_a_dummy_definition, // extern
  var_664_1_input_count, // dynamic
  var_665_1_output_count, // dynamic
  var_666_1_is_a_tail_call, // dynamic
  var_is_an_io_call, // extern
  var_to_separated_index, // attribute
  var_679_1_inputs, // dynamic
  var_680_1_outputs, // dynamic
  var_source_position_of, // extern
  var_std__minus, // extern
  var_701_1_statement, // dynamic
  var_722_23_node, // dynamic
  var_723_1_source_group, // dynamic
  var_source_group_of, // extern
  var_line_no_of, // extern
  var_funky_types__inline_attribute_value_pair, // extern
  var_expression_of, // extern
  var_funky_types__inline_method_value_pair, // extern
  var_funky_types__attribute_value_pair, // extern
  var_argument_of, // extern
  var_funky_types__method_value_pair, // extern
  var_funky_types__type_function, // extern
  var_debug__print, // extern
  var_funky_types__functor, // extern
  var_funky_types__redefinition, // extern
  var_funky_types__update, // extern
  var_774_17_self, // dynamic
  var_777_1_info, // dynamic
  var_784_1_identifier, // dynamic
  var_785_23_kind, // dynamic
  var_785_29_value, // dynamic
  var_funky_types__numeric_literal, // extern
  var_funky_types__character_literal, // extern
  var_funky_types__character_sequence, // extern
  var_funky_types__unique, // extern
  var_funky_types__body, // extern
  var_get_index, // attribute
  var_824_1_identifier, // dynamic
  var_834_1_name, // dynamic
  var_840_36_node, // dynamic
  var_841_1_identifier, // dynamic
  var_846_1_argument, // dynamic
  var_funky__key_of, // extern
  var_858_47_self, // dynamic
  var_859_1_mangled, // dynamic
  var_characters_of, // extern
  var_861_3_chr, // dynamic
  var_break, // extern
  var_is_a_letter, // extern
  var_is_a_digit, // extern
  var_push, // extern
  var_879_16_n, // dynamic
  var_mangle_position, // extern
  var_901_33_self, // dynamic
  var_905_1_text, // dynamic
  var_without_suffix, // extern
  var_trim_right, // extern
  var_924_14_name, // dynamic
  var_932_16_name, // dynamic
  var_933_16_n, // dynamic
  var_from, // extern
  var_string, // extern
  var_947_31_name, // dynamic
  var_948_1_rest, // dynamic
  var_behind, // extern
  var_967_1_n, // dynamic
  var_975_42_str, // dynamic
  var_976_1_n, // dynamic
  var_loop, // extern
  var_989_1_buf, // dynamic
  var_991_3_chr, // dynamic
  var_concatenate, // extern
  var_1034_1_digits, // dynamic
  var_digits_of, // extern
  var_to_integer, // extern
  var_funky_types__numeric_character_literal, // extern
  var_1057_1_characters, // dynamic
  var_1058_1_length, // dynamic
  var_is_an_octet_string, // extern
  var_to_upper_case, // extern
  var_replace_first, // extern
  var_1094_24_kind, // dynamic
  var_1098_1_types, // dynamic
  var_empty_insert_order_table, // extern
  var_1100_3_statement, // dynamic
  var_1103_1_arguments, // dynamic
  var_1104_1_functor_name, // dynamic
  var_1112_3_argument, // dynamic
  var_ATTRIBUTE_VALUE_PAIR, // extern
  var_METHOD_VALUE_PAIR, // extern
  var_1124_1_value, // dynamic
  var_1128_1_identifier, // dynamic
  var_1129_29_constant_value, // dynamic
  var_default_value, // extern
  var_tuple, // extern
  var_funky__mangle_identifier, // initialized
  var_1158_15_str, // dynamic
  var_1159_1_buf, // dynamic
  var_1160_1_s, // dynamic
  var_1162_3_idx, // dynamic
  var_1162_7_chr, // dynamic
  var_oct, // extern
  var_pad_left, // extern
  var_1176_18_str, // dynamic
  var_1177_1_buf, // dynamic
  var_1178_1_s, // dynamic
  var_1180_3_idx, // dynamic
  var_1180_7_chr, // dynamic
  var_1184_1_val, // dynamic
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
  LOCAL(2), // 191_8_info
  // mangle_identifier &name
  var_mangle_identifier, 1, var_191_3_name, 1, var_191_3_name,
  // $kind first(info)
  var_first, 1, LOCAL(2), 1, var_193_1_kind,
  // is_local_or_constant
  func_is_local_or_constant, 1, var_193_1_kind, 1, LOCAL(1),
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
  4, // locals
  0, // parameters
  // to_string .truncate_until. "::").to_lower_case
  var_to_string, 1, var_193_1_kind, 1, LOCAL(1),
  // kind.to_string .truncate_until. "::").to_lower_case
  var_truncate_until, 2, LOCAL(1), string_11, 1, LOCAL(2),
  // to_lower_case
  var_to_lower_case, 1, LOCAL(2), 1, LOCAL(3),
  // $remark
  var_replace_all, 2, LOCAL(3), key_value_pair_201_1, 1, LOCAL(4),
  // "  var_@(name), // @(remark)@nl;"
  var_std__string, 5, str___var, var_191_3_name, string_13, LOCAL(4), string_1, 1, LOCAL(1),
  // -> "  var_@(name), // @(remark)@nl;"
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(200, 27),
  POS(200, 22),
  POS(200, 60),
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
  // debug::dump `kind
  var_debug__dump, 2, str_kind, var_220_6_kind, 0,
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
  // debug::dump `node
  var_debug__dump, 2, str_node, LOCAL(2), 0,
  // debug::exit
  var_debug__exit, 0, TAIL_CALL,
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
  7, // locals
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
  var_filter, 2, LOCAL(6), var_is_an_output, 1, var_661_1_output_arguments,
  // is_last && not(all_of(output_arguments is_a_dummy_definition)):
  var_std__and, 2, var_657_16_is_last, lambda_139, 1, LOCAL(1),
  // on is_last && not(all_of(output_arguments is_a_dummy_definition)):
  var_on, 2, LOCAL(1), lambda_140, 0,
  // $input_count length_of(input_arguments)
  var_length_of, 1, LOCAL(7), 1, var_664_1_input_count,
  // $output_count length_of(output_arguments)
  var_length_of, 1, var_661_1_output_arguments, 1, var_665_1_output_count,
  // $is_a_tail_call (is_last && output_arguments.is_empty)
  var_std__and, 2, var_657_16_is_last, lambda_141, 1, var_666_1_is_a_tail_call,
  // is_an_io_call:
  var_is_an_io_call, 1, var_657_11_self, 1, LOCAL(1),
  // !output_count
  var_if, 3, LOCAL(1), lambda_self_is_an_io_call, lambda_144, 1, var_665_1_output_count,
  // $inputs map_reduce(input_arguments to_separated_index append "")
  var_map_reduce, 4, LOCAL(7), var_to_separated_index, var_append, string_6, 1, var_679_1_inputs,
  // $outputs map_reduce(output_arguments to_separated_index append "")
  var_map_reduce, 4, var_661_1_output_arguments, var_to_separated_index, var_append, string_6, 1, var_680_1_outputs,
  // source_position_of(self))@
  var_source_position_of, 1, var_657_11_self, 1, LOCAL(1),
  // "
  var_std__string, 2, string_36, LOCAL(1), 1, LOCAL(2),
  // node_type_of(head) == FUNCTOR:
  var_node_type_of, 1, var_658_1_head, 1, LOCAL(3),
  // node_type_of(head) == FUNCTOR:
  var_std__equal, 2, LOCAL(3), var_FUNCTOR, 1, LOCAL(4),
  // if
  var_if, 3, LOCAL(4), lambda_147, lambda_155, 1, LOCAL(5),
  // append
  var_append, 2, LOCAL(2), LOCAL(5), TAIL_CALL,
  POS(658, 3),
  POS(659, 3),
  POS(660, 3),
  POS(661, 3),
  POS(662, 6),
  POS(662, 3),
  POS(664, 3),
  POS(665, 3),
  POS(666, 3),
  POS(669, 12),
  POS(667, 3),
  POS(679, 3),
  POS(680, 3),
  POS(684, 14),
  POS(682, 5),
  POS(686, 7),
  POS(686, 7),
  POS(685, 5),
  POS(681, 3)
};

static TAB_NUM t_lambda_139[] = {
  2, // locals
  0, // parameters
  // all_of(output_arguments is_a_dummy_definition)):
  var_all_of, 2, var_661_1_output_arguments, var_is_a_dummy_definition, 1, LOCAL(1),
  // not(all_of(output_arguments is_a_dummy_definition)):
  var_not, 1, LOCAL(1), 1, LOCAL(2),
  // not(all_of(output_arguments is_a_dummy_definition)):
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(662, 21),
  POS(662, 17),
  POS(662, 17)
};

static TAB_NUM t_lambda_140[] = {
  0, // locals
  0, // parameters
  // syntax_error "Last statement is not a tail call" self
  var_syntax_error, 2, str_Last_statement_i, var_657_11_self, TAIL_CALL,
  POS(663, 5)
};

static TAB_NUM t_lambda_141[] = {
  1, // locals
  0, // parameters
  // is_empty)
  var_is_empty, 1, var_661_1_output_arguments, 1, LOCAL(1),
  // output_arguments.is_empty)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(666, 48),
  POS(666, 31)
};

static TAB_NUM t_lambda_self_is_an_io_call[] = {
  0, // locals
  0, // parameters
  // if
  var_if, 3, var_666_1_is_a_tail_call, lambda_142, lambda_143, TAIL_CALL,
  POS(670, 9)
};

static TAB_NUM t_lambda_142[] = {
  0, // locals
  0, // parameters
  //  "IO_TAIL_CALL"
  LET, 1, str_IO_TAIL_CALL, TAIL_CALL,
  POS(672, 13)
};

static TAB_NUM t_lambda_143[] = {
  1, // locals
  0, // parameters
  // "IO_CALL(@(output_count))"
  var_std__string, 3, str_IO_CALL, var_665_1_output_count, string_35, 1, LOCAL(1),
  //  "IO_CALL(@(output_count))"
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(673, 14),
  POS(673, 13)
};

static TAB_NUM t_lambda_144[] = {
  0, // locals
  0, // parameters
  // if
  var_if, 3, var_666_1_is_a_tail_call, lambda_145, lambda_146, TAIL_CALL,
  POS(675, 9)
};

static TAB_NUM t_lambda_145[] = {
  0, // locals
  0, // parameters
  //  "TAIL_CALL"
  LET, 1, str_TAIL_CALL, TAIL_CALL,
  POS(677, 13)
};

static TAB_NUM t_lambda_146[] = {
  0, // locals
  0, // parameters
  //  output_count
  LET, 1, var_665_1_output_count, TAIL_CALL,
  POS(678, 13)
};

static TAB_NUM t_lambda_147[] = {
  1, // locals
  0, // parameters
  // identifier_of(head)
  var_identifier_of, 1, var_658_1_head, 1, LOCAL(1),
  // case identifier_of(head)
  var_case, 6, LOCAL(1), sequence_688_1, lambda_148, str__assign_attribut, lambda_assign_attributes, lambda_151, TAIL_CALL,
  POS(687, 14),
  POS(687, 9)
};

static TAB_NUM t_lambda_148[] = {
  2, // locals
  0, // parameters
  // output_count == 0 && not(is_last):
  var_std__equal, 2, var_665_1_output_count, num_0, 1, LOCAL(1),
  // output_count == 0 && not(is_last):
  var_std__and, 2, LOCAL(1), lambda_149, 1, LOCAL(2),
  // on output_count == 0 && not(is_last):
  var_on, 2, LOCAL(2), lambda_150, 0,
  // "
  var_std__string, 7, str___LET, var_664_1_input_count, var_679_1_inputs, string_30, var_665_1_output_count, var_680_1_outputs, string_10, 1, LOCAL(1),
  // -> "
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(689, 16),
  POS(689, 16),
  POS(689, 13),
  POS(692, 16),
  POS(692, 13)
};

static TAB_NUM t_lambda_149[] = {
  1, // locals
  0, // parameters
  // not(is_last):
  var_not, 1, var_657_16_is_last, 1, LOCAL(1),
  // not(is_last):
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(689, 37),
  POS(689, 37)
};

static TAB_NUM t_lambda_150[] = {
  0, // locals
  0, // parameters
  // syntax_error "Return statement not allowed within function body"
  var_syntax_error, 2, str_Return_statement, var_657_11_self, TAIL_CALL,
  POS(690, 15)
};

static TAB_NUM t_lambda_assign_attributes[] = {
  2, // locals
  0, // parameters
  // input_count-1)@(inputs)@(outputs),
  var_std__minus, 2, var_664_1_input_count, num_1, 1, LOCAL(1),
  // "
  var_std__string, 5, str___LET_2, LOCAL(1), var_679_1_inputs, var_680_1_outputs, string_10, 1, LOCAL(2),
  //  "
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(699, 18),
  POS(696, 35),
  POS(696, 34)
};

static TAB_NUM t_lambda_151[] = {
  1, // locals
  0, // parameters
  // to_index), @
  var_to_index, 1, var_658_1_head, 1, LOCAL(1),
  // $statement "
  var_std__string, 9, string_8, LOCAL(1), string_30, var_664_1_input_count, var_679_1_inputs, string_30, var_665_1_output_count, var_680_1_outputs, string_10, 1, var_701_1_statement,
  // is_last && not(is_a_tail_call)
  var_std__and, 2, var_657_16_is_last, lambda_152, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_153, lambda_154, TAIL_CALL,
  POS(703, 24),
  POS(701, 13),
  POS(706, 15),
  POS(705, 13)
};

static TAB_NUM t_lambda_152[] = {
  1, // locals
  0, // parameters
  // not(is_a_tail_call)
  var_not, 1, var_666_1_is_a_tail_call, 1, LOCAL(1),
  // not(is_a_tail_call)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(706, 26),
  POS(706, 26)
};

static TAB_NUM t_lambda_153[] = {
  1, // locals
  0, // parameters
  // "
  var_std__string, 2, var_701_1_statement, str___LET_0_TAIL_CAL, 1, LOCAL(1),
  //  "
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(707, 18),
  POS(707, 17)
};

static TAB_NUM t_lambda_154[] = {
  0, // locals
  0, // parameters
  //  statement
  LET, 1, var_701_1_statement, TAIL_CALL,
  POS(710, 17)
};

static TAB_NUM t_lambda_155[] = {
  2, // locals
  0, // parameters
  // to_index),
  var_to_index, 1, var_658_1_head, 1, LOCAL(1),
  // "
  var_std__string, 5, str___LET_3, var_679_1_inputs, string_37, LOCAL(1), string_10, 1, LOCAL(2),
  //  "
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(713, 38),
  POS(711, 10),
  POS(711, 9)
};

static TAB_NUM t_func_funky_types__node___add_source_positions[] = {
  1, // locals
  1, // parameters
  LOCAL(1),
  // -> ""
  LET, 1, string_6, TAIL_CALL,
  POS(717, 50)
};

static TAB_NUM t_func_funky_types__statement___add_source_positions[] = {
  3, // locals
  1, // parameters
  LOCAL(3), // 719_47_self
  // get_source_position(self)),@nl;"
  func_get_source_position, 1, LOCAL(3), 1, LOCAL(1),
  // "  @(get_source_position(self)),@nl;"
  var_std__string, 3, string_8, LOCAL(1), string_10, 1, LOCAL(2),
  // -> "  @(get_source_position(self)),@nl;"
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(720, 11),
  POS(720, 6),
  POS(720, 3)
};

static TAB_NUM t_func_get_source_position[] = {
  1, // locals
  1, // parameters
  var_722_23_node,
  // $source_group source_group_of(node)
  var_source_group_of, 1, var_722_23_node, 1, var_723_1_source_group,
  // is_defined:
  var_is_defined, 1, var_723_1_source_group, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_source_group_is_defined, lambda_156, TAIL_CALL,
  POS(723, 3),
  POS(726, 18),
  POS(725, 3)
};

static TAB_NUM t_lambda_source_group_is_defined[] = {
  9, // locals
  0, // parameters
  // source_group $indent $text
  var_723_1_source_group, 0, 2, LOCAL(6), LOCAL(7),
  // $line_no line_no_of(source_group)
  var_line_no_of, 1, var_723_1_source_group, 1, LOCAL(8),
  // length_of(text)+1-length_of(source_position_of(node))
  var_length_of, 1, LOCAL(7), 1, LOCAL(1),
  // indent+length_of(text)+1-length_of(source_position_of(node))
  var_std__plus, 2, LOCAL(6), LOCAL(1), 1, LOCAL(2),
  // indent+length_of(text)+1-length_of(source_position_of(node))
  var_std__plus, 2, LOCAL(2), num_1, 1, LOCAL(3),
  // source_position_of(node))
  var_source_position_of, 1, var_722_23_node, 1, LOCAL(4),
  // length_of(source_position_of(node))
  var_length_of, 1, LOCAL(4), 1, LOCAL(5),
  // $column_no indent+length_of(text)+1-length_of(source_position_of(node))
  var_std__minus, 2, LOCAL(3), LOCAL(5), 1, LOCAL(9),
  // "POS(@(line_no), @(column_no))"
  var_std__string, 5, str_POS, LOCAL(8), string_30, LOCAL(9), string_35, 1, LOCAL(1),
  // -> "POS(@(line_no), @(column_no))"
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(727, 7),
  POS(728, 7),
  POS(729, 25),
  POS(729, 18),
  POS(729, 18),
  POS(729, 53),
  POS(729, 43),
  POS(729, 7),
  POS(730, 10),
  POS(730, 7)
};

static TAB_NUM t_lambda_156[] = {
  0, // locals
  0, // parameters
  //  "POS(0, 0)"
  LET, 1, str_POS_2, TAIL_CALL,
  POS(731, 7)
};

static TAB_NUM t_func_funky_types__node___to_separated_index[] = {
  3, // locals
  1, // parameters
  LOCAL(3), // 735_40_self
  // to_index)
  var_to_index, 1, LOCAL(3), 1, LOCAL(1),
  // append(", " self.to_index)
  var_append, 2, string_30, LOCAL(1), 1, LOCAL(2),
  // -> append(", " self.to_index)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(735, 67),
  POS(735, 50),
  POS(735, 47)
};

static TAB_NUM t_func_funky_types__inline_attribute_value_pair___to_separated_index[] = {
  5, // locals
  1, // parameters
  LOCAL(5), // 737_63_self
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
  POS(738, 11),
  POS(738, 35),
  POS(738, 55),
  POS(738, 6),
  POS(738, 3)
};

static TAB_NUM t_func_funky_types__inline_method_value_pair___to_separated_index[] = {
  5, // locals
  1, // parameters
  LOCAL(5), // 740_60_self
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
  POS(741, 12),
  POS(741, 36),
  POS(741, 56),
  POS(741, 6),
  POS(741, 3)
};

static TAB_NUM t_func_funky_types__attribute_value_pair___to_separated_index[] = {
  5, // locals
  1, // parameters
  LOCAL(5), // 743_56_self
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
  POS(744, 11),
  POS(744, 35),
  POS(744, 53),
  POS(744, 6),
  POS(744, 3)
};

static TAB_NUM t_func_funky_types__method_value_pair___to_separated_index[] = {
  5, // locals
  1, // parameters
  LOCAL(5), // 746_53_self
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
  POS(747, 12),
  POS(747, 36),
  POS(747, 54),
  POS(747, 6),
  POS(747, 3)
};

static TAB_NUM t_func_funky_types__type_function___to_separated_index[] = {
  3, // locals
  1, // parameters
  LOCAL(3), // 749_49_self
  // mangled_literals(self))"
  var_mangled_literals, 1, LOCAL(3), 1, LOCAL(1),
  // ", 0, @(mangled_literals(self))"
  var_std__string, 2, string_19, LOCAL(1), 1, LOCAL(2),
  // -> ", 0, @(mangled_literals(self))"
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(750, 14),
  POS(750, 6),
  POS(750, 3)
};

static TAB_NUM t_func_funky_types__node___to_index[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 764_30_self
  // debug::print "/to_index failed: "
  var_debug__print, 1, str_to_index_failed, 0,
  // debug::dump `self
  var_debug__dump, 2, str_self, LOCAL(1), 0,
  // -> "?"
  LET, 1, string_38, TAIL_CALL,
  POS(765, 3),
  POS(766, 3),
  POS(767, 3)
};

static TAB_NUM t_func_retrieve_name[] = {
  1, // locals
  1, // parameters
  var_774_17_self,
  // kind_of(self)
  var_kind_of, 1, var_774_17_self, 1, LOCAL(1),
  // case kind_of(self)
  var_case, 6, LOCAL(1), var_TEMPORARY, lambda_TEMPORARY, var_CONSTANT, lambda_CONSTANT, lambda_160, TAIL_CALL,
  POS(775, 8),
  POS(775, 3)
};

static TAB_NUM t_lambda_TEMPORARY[] = {
  2, // locals
  0, // parameters
  // identifier_of(self))
  var_identifier_of, 1, var_774_17_self, 1, LOCAL(1),
  // $info variables(identifier_of(self))
  var_variables, 1, LOCAL(1), 1, var_777_1_info,
  // is_defined && second(info).is_defined
  var_is_defined, 1, var_777_1_info, 1, LOCAL(1),
  // is_defined && second(info).is_defined
  var_std__and, 2, LOCAL(1), lambda_157, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_158, lambda_159, TAIL_CALL,
  POS(777, 23),
  POS(777, 7),
  POS(779, 14),
  POS(779, 14),
  POS(778, 7)
};

static TAB_NUM t_lambda_157[] = {
  2, // locals
  0, // parameters
  // second(info).is_defined
  var_second, 1, var_777_1_info, 1, LOCAL(1),
  // is_defined
  var_is_defined, 1, LOCAL(1), 1, LOCAL(2),
  // second(info).is_defined
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(779, 28),
  POS(779, 41),
  POS(779, 28)
};

static TAB_NUM t_lambda_158[] = {
  2, // locals
  0, // parameters
  // second(info))
  var_second, 1, var_777_1_info, 1, LOCAL(1),
  // mangled_literals(second(info))
  var_mangled_literals, 1, LOCAL(1), 1, LOCAL(2),
  //  mangled_literals(second(info))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(780, 29),
  POS(780, 12),
  POS(780, 11)
};

static TAB_NUM t_lambda_159[] = {
  2, // locals
  0, // parameters
  // no_of(self)))"
  var_no_of, 1, var_774_17_self, 1, LOCAL(1),
  // "LOCAL(@(no_of(self)))"
  var_std__string, 3, str_LOCAL, LOCAL(1), string_35, 1, LOCAL(2),
  //  "LOCAL(@(no_of(self)))"
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(781, 21),
  POS(781, 12),
  POS(781, 11)
};

static TAB_NUM t_lambda_CONSTANT[] = {
  1, // locals
  0, // parameters
  // mangled_literals(self)
  var_mangled_literals, 1, var_774_17_self, 1, LOCAL(1),
  //  mangled_literals(self)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(782, 17),
  POS(782, 16)
};

static TAB_NUM t_lambda_160[] = {
  3, // locals
  0, // parameters
  // $identifier identifier_of(self)
  var_identifier_of, 1, var_774_17_self, 1, var_784_1_identifier,
  // variables(identifier) $kind $value
  var_variables, 1, var_784_1_identifier, 1, LOCAL(1),
  // variables(identifier) $kind $value
  LOCAL(1), 0, 2, var_785_23_kind, var_785_29_value,
  // INITIALIZED, INITIALIZED_COMPOUND
  var_std__sequence, 2, var_INITIALIZED, var_INITIALIZED_COMPOUND, 1, LOCAL(1),
  // sequence
  var_sequence, 7, var_DERIVED, var_DYNAMIC, var_EXTERN, var_EXTERN_POLYMORPHIC, LOCAL(1), var_ATTRIBUTE, var_ATTRIBUTE_WITH_SETTER, 1, LOCAL(2),
  // CONSTANT, CONSTANT_COMPOUND -> mangled_literals(value)
  var_std__sequence, 2, var_CONSTANT, var_CONSTANT_COMPOUND, 1, LOCAL(3),
  // case kind
  var_case, 8, var_785_23_kind, var_LOCAL, lambda_LOCAL, LOCAL(2), lambda_161, LOCAL(3), lambda_162, lambda_163, TAIL_CALL,
  POS(784, 7),
  POS(785, 7),
  POS(785, 7),
  POS(793, 11),
  POS(788, 9),
  POS(798, 9),
  POS(786, 7)
};

static TAB_NUM t_lambda_LOCAL[] = {
  3, // locals
  0, // parameters
  // local_mapping(identifier)))"
  var_local_mapping, 1, var_784_1_identifier, 1, LOCAL(1),
  // temp_count+local_mapping(identifier)))"
  var_std__plus, 2, var_temp_count, LOCAL(1), 1, LOCAL(2),
  // "LOCAL(@(temp_count+local_mapping(identifier)))"
  var_std__string, 3, str_LOCAL, LOCAL(2), string_35, 1, LOCAL(3),
  //  "LOCAL(@(temp_count+local_mapping(identifier)))"
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(787, 38),
  POS(787, 27),
  POS(787, 18),
  POS(787, 17)
};

static TAB_NUM t_lambda_161[] = {
  2, // locals
  0, // parameters
  // mangle_identifier(identifier))
  var_mangle_identifier, 1, var_784_1_identifier, 1, LOCAL(1),
  // append("var_" mangle_identifier(identifier))
  var_append, 2, str_var, LOCAL(1), 1, LOCAL(2),
  // 
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(797, 25),
  POS(797, 11),
  POS(796, 11)
};

static TAB_NUM t_lambda_162[] = {
  1, // locals
  0, // parameters
  // mangled_literals(value)
  var_mangled_literals, 1, var_785_29_value, 1, LOCAL(1),
  //  mangled_literals(value)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(798, 40),
  POS(798, 39)
};

static TAB_NUM t_lambda_163[] = {
  0, // locals
  0, // parameters
  // debug::dump `kind
  var_debug__dump, 2, str_kind, var_785_23_kind, 0,
  // debug::dump `value
  var_debug__dump, 2, str_value, var_785_29_value, 0,
  // debug::exit
  var_debug__exit, 0, TAIL_CALL,
  POS(800, 11),
  POS(801, 11),
  POS(802, 11)
};

static TAB_NUM t_func_get_literal[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 814_15_self
  // mangled_literals(self)
  var_mangled_literals, 1, LOCAL(2), 1, LOCAL(1),
  // -> mangled_literals(self)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(815, 6),
  POS(815, 3)
};

static TAB_NUM t_func_funky_types__node___get_index[] = {
  2, // locals
  3, // parameters
  LOCAL(2), // 819_31_node
  LOCAL(1),
  LOCAL(1),
  // debug::dump `node
  var_debug__dump, 2, str_node, LOCAL(2), 0,
  // -> "???"
  LET, 1, string_14, TAIL_CALL,
  POS(820, 3),
  POS(821, 3)
};

static TAB_NUM t_func_funky_types__definition___get_index[] = {
  3, // locals
  3, // parameters
  LOCAL(2), // 823_37_node
  LOCAL(3), // 823_42_level
  LOCAL(1),
  // $identifier identifier_of(node)
  var_identifier_of, 1, LOCAL(2), 1, var_824_1_identifier,
  // is_an_integer
  var_is_an_integer, 1, LOCAL(3), 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_164, lambda_165, TAIL_CALL,
  POS(824, 3),
  POS(826, 11),
  POS(825, 3)
};

static TAB_NUM t_lambda_164[] = {
  3, // locals
  0, // parameters
  // local_mapping(identifier)))"
  var_local_mapping, 1, var_824_1_identifier, 1, LOCAL(1),
  // temp_count+local_mapping(identifier)))"
  var_std__plus, 2, var_temp_count, LOCAL(1), 1, LOCAL(2),
  // "LOCAL(@(temp_count+local_mapping(identifier)))"
  var_std__string, 3, str_LOCAL, LOCAL(2), string_35, 1, LOCAL(3),
  //  "LOCAL(@(temp_count+local_mapping(identifier)))"
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(827, 28),
  POS(827, 17),
  POS(827, 8),
  POS(827, 7)
};

static TAB_NUM t_lambda_165[] = {
  2, // locals
  0, // parameters
  // mangle_identifier(identifier))
  var_mangle_identifier, 1, var_824_1_identifier, 1, LOCAL(1),
  // append("var_" mangle_identifier(identifier))
  var_append, 2, str_var, LOCAL(1), 1, LOCAL(2),
  //  append("var_" mangle_identifier(identifier))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(828, 22),
  POS(828, 8),
  POS(828, 7)
};

static TAB_NUM t_func_parameter_get_index[] = {
  3, // locals
  3, // parameters
  LOCAL(2), // 833_23_node
  LOCAL(3), // 833_28_level
  LOCAL(1),
  // $name funky::name_of(node)
  var_funky__name_of, 1, LOCAL(2), 1, var_834_1_name,
  // is_an_integer
  var_is_an_integer, 1, LOCAL(3), 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_166, lambda_167, TAIL_CALL,
  POS(834, 3),
  POS(836, 11),
  POS(835, 3)
};

static TAB_NUM t_lambda_166[] = {
  3, // locals
  0, // parameters
  // local_mapping(name)))"
  var_local_mapping, 1, var_834_1_name, 1, LOCAL(1),
  // temp_count+local_mapping(name)))"
  var_std__plus, 2, var_temp_count, LOCAL(1), 1, LOCAL(2),
  // "LOCAL(@(temp_count+local_mapping(name)))"
  var_std__string, 3, str_LOCAL, LOCAL(2), string_35, 1, LOCAL(3),
  //  "LOCAL(@(temp_count+local_mapping(name)))"
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(837, 28),
  POS(837, 17),
  POS(837, 8),
  POS(837, 7)
};

static TAB_NUM t_lambda_167[] = {
  1, // locals
  0, // parameters
  // "var_@(name)"
  var_std__string, 2, str_var, var_834_1_name, 1, LOCAL(1),
  //  "var_@(name)"
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(838, 8),
  POS(838, 7)
};

static TAB_NUM t_func_funky_types__statement___get_index[] = {
  6, // locals
  3, // parameters
  var_840_36_node,
  LOCAL(1),
  LOCAL(6), // 840_48_flags
  // head_of(node))
  var_head_of, 1, var_840_36_node, 1, LOCAL(1),
  // $identifier identifier_of(head_of(node))
  var_identifier_of, 1, LOCAL(1), 1, var_841_1_identifier,
  // REDEFINED | POLYMORPHIC) != 0 || identifier .contains. ':'
  var_std__bit_or, 2, var_REDEFINED, var_POLYMORPHIC, 1, LOCAL(1),
  // flags & (REDEFINED | POLYMORPHIC) != 0 || identifier .contains. ':'
  var_std__bit_and, 2, LOCAL(6), LOCAL(1), 1, LOCAL(2),
  // flags & (REDEFINED | POLYMORPHIC) != 0 || identifier .contains. ':'
  var_std__equal, 2, LOCAL(2), num_0, 1, LOCAL(3),
  // flags & (REDEFINED | POLYMORPHIC) != 0 || identifier .contains. ':'
  var_std__not, 1, LOCAL(3), 1, LOCAL(4),
  // flags & (REDEFINED | POLYMORPHIC) != 0 || identifier .contains. ':'
  var_std__or, 2, LOCAL(4), lambda_168, 1, LOCAL(5),
  // if
  var_if, 3, LOCAL(5), lambda_169, lambda_170, TAIL_CALL,
  POS(841, 29),
  POS(841, 3),
  POS(843, 14),
  POS(843, 5),
  POS(843, 5),
  POS(843, 5),
  POS(843, 5),
  POS(842, 3)
};

static TAB_NUM t_lambda_168[] = {
  1, // locals
  0, // parameters
  // identifier .contains. ':'
  var_contains, 2, var_841_1_identifier, chr_58, 1, LOCAL(1),
  // identifier .contains. ':'
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(843, 47),
  POS(843, 47)
};

static TAB_NUM t_lambda_169[] = {
  2, // locals
  0, // parameters
  // mangle_identifier(identifier))
  var_mangle_identifier, 1, var_841_1_identifier, 1, LOCAL(1),
  // append("var_" mangle_identifier(identifier))
  var_append, 2, str_var, LOCAL(1), 1, LOCAL(2),
  //  append("var_" mangle_identifier(identifier))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(844, 22),
  POS(844, 8),
  POS(844, 7)
};

static TAB_NUM t_lambda_170[] = {
  2, // locals
  0, // parameters
  // arguments_of(node)(1)
  var_arguments_of, 1, var_840_36_node, 1, LOCAL(1),
  // $argument arguments_of(node)(1)
  LOCAL(1), 1, num_1, 1, var_846_1_argument,
  // node_type_of(argument) == FUNCTOR
  var_node_type_of, 1, var_846_1_argument, 1, LOCAL(1),
  // node_type_of(argument) == FUNCTOR
  var_std__equal, 2, LOCAL(1), var_FUNCTOR, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_171, lambda_172, TAIL_CALL,
  POS(846, 17),
  POS(846, 7),
  POS(848, 9),
  POS(848, 9),
  POS(847, 7)
};

static TAB_NUM t_lambda_171[] = {
  1, // locals
  0, // parameters
  // to_index
  var_to_index, 1, var_846_1_argument, 1, LOCAL(1),
  //  argument.to_index
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(849, 21),
  POS(849, 11)
};

static TAB_NUM t_lambda_172[] = {
  1, // locals
  0, // parameters
  // mangled_literals(argument)
  var_mangled_literals, 1, var_846_1_argument, 1, LOCAL(1),
  //  mangled_literals(argument)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(850, 12),
  POS(850, 11)
};

static TAB_NUM t_func_funky_types__numeric_literal___add_literal[] = {
  3, // locals
  1, // parameters
  LOCAL(3), // 854_44_self
  // !mangled_literals(self) funky::key_of(self)
  var_funky__key_of, 1, LOCAL(3), 1, LOCAL(2),
  // mangled_literals(self) funky::key_of(self)
  var_mangled_literals, 2, LOCAL(3), LOCAL(2), 1, var_mangled_literals,
  // -> mangled_literals mangling_counter
  LET, 2, var_mangled_literals, var_mangling_counter, TAIL_CALL,
  POS(855, 3),
  POS(855, 4),
  POS(856, 3)
};

static TAB_NUM t_func_funky_types__character_sequence___add_literal[] = {
  1, // locals
  1, // parameters
  var_858_47_self,
  // $mangled ""
  LET, 1, string_6, 1, var_859_1_mangled,
  // characters_of(self)
  var_characters_of, 1, var_858_47_self, 1, LOCAL(1),
  // for_each characters_of(self)
  var_for_each, 3, LOCAL(1), lambda_173, lambda_182, TAIL_CALL,
  POS(859, 3),
  POS(860, 12),
  POS(860, 3)
};

static TAB_NUM t_lambda_173[] = {
  0, // locals
  1, // parameters
  var_861_3_chr,
  // cond
  var_cond, 4, lambda_174, lambda_175, lambda_179, lambda_181, TAIL_CALL,
  POS(862, 7)
};

static TAB_NUM t_lambda_174[] = {
  3, // locals
  0, // parameters
  // length_of(mangled) >= 16 break
  var_length_of, 1, var_859_1_mangled, 1, LOCAL(1),
  // length_of(mangled) >= 16 break
  var_std__less, 2, LOCAL(1), num_16, 1, LOCAL(2),
  // length_of(mangled) >= 16 break
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  //  length_of(mangled) >= 16 break
  LET, 2, LOCAL(3), var_break, TAIL_CALL,
  POS(863, 12),
  POS(863, 12),
  POS(863, 12),
  POS(863, 11)
};

static TAB_NUM t_lambda_175[] = {
  2, // locals
  0, // parameters
  // is_a_letter || chr.is_a_digit || chr == '_':
  var_is_a_letter, 1, var_861_3_chr, 1, LOCAL(1),
  // is_a_letter || chr.is_a_digit || chr == '_':
  var_std__or, 2, LOCAL(1), lambda_176, 1, LOCAL(2),
  //  chr.is_a_letter || chr.is_a_digit || chr == '_':
  LET, 2, LOCAL(2), lambda_178, TAIL_CALL,
  POS(864, 16),
  POS(864, 16),
  POS(864, 11)
};

static TAB_NUM t_lambda_176[] = {
  2, // locals
  0, // parameters
  // is_a_digit || chr == '_':
  var_is_a_digit, 1, var_861_3_chr, 1, LOCAL(1),
  // is_a_digit || chr == '_':
  var_std__or, 2, LOCAL(1), lambda_177, 1, LOCAL(2),
  // chr.is_a_digit || chr == '_':
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(864, 35),
  POS(864, 35),
  POS(864, 31)
};

static TAB_NUM t_lambda_177[] = {
  1, // locals
  0, // parameters
  // chr == '_':
  var_std__equal, 2, var_861_3_chr, chr_95, 1, LOCAL(1),
  // chr == '_':
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(864, 49),
  POS(864, 49)
};

static TAB_NUM t_lambda_178[] = {
  0, // locals
  0, // parameters
  // push &mangled chr
  var_push, 2, var_859_1_mangled, var_861_3_chr, 1, var_859_1_mangled,
  // next
  var_next, 0, TAIL_CALL,
  POS(865, 11),
  POS(866, 11)
};

static TAB_NUM t_lambda_179[] = {
  1, // locals
  0, // parameters
  // chr == ' ':
  var_std__equal, 2, var_861_3_chr, chr_32, 1, LOCAL(1),
  //  chr == ' ':
  LET, 2, LOCAL(1), lambda_180, TAIL_CALL,
  POS(867, 12),
  POS(867, 11)
};

static TAB_NUM t_lambda_180[] = {
  0, // locals
  0, // parameters
  // push &mangled '_'
  var_push, 2, var_859_1_mangled, chr_95, 1, var_859_1_mangled,
  // next
  var_next, 0, TAIL_CALL,
  POS(868, 11),
  POS(869, 11)
};

static TAB_NUM t_lambda_181[] = {
  0, // locals
  0, // parameters
  //  true next
  LET, 2, var_true, var_next, TAIL_CALL,
  POS(870, 11)
};

static TAB_NUM t_lambda_182[] = {
  1, // locals
  0, // parameters
  // remove_trailing_underscores_and_digits &mangled
  func_remove_trailing_underscores_and_digits, 1, var_859_1_mangled, 1, var_859_1_mangled,
  // is_empty:
  var_is_empty, 1, var_859_1_mangled, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_mangled_is_empty, lambda_183, TAIL_CALL,
  POS(872, 7),
  POS(874, 17),
  POS(873, 7)
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
  POS(875, 11),
  POS(876, 23),
  POS(876, 11)
};

static TAB_NUM t_lambda_183[] = {
  1, // locals
  0, // parameters
  // append "str_" &mangled
  var_append, 2, str_str, var_859_1_mangled, 1, var_859_1_mangled,
  // check_mangling $n !mangling_counter mangled
  func_check_mangling, 1, var_859_1_mangled, 2, var_879_16_n, var_mangling_counter,
  // 1:
  var_std__less, 2, num_1, var_879_16_n, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_184, lambda_185, TAIL_CALL,
  POS(878, 11),
  POS(879, 11),
  POS(881, 17),
  POS(880, 11)
};

static TAB_NUM t_lambda_184[] = {
  1, // locals
  0, // parameters
  // "@(mangled)_@(n)"
  var_std__string, 3, var_859_1_mangled, string_39, var_879_16_n, 1, LOCAL(1),
  // add_mangled "@(mangled)_@(n)"
  func_add_mangled, 1, LOCAL(1), TAIL_CALL,
  POS(882, 27),
  POS(882, 15)
};

static TAB_NUM t_lambda_185[] = {
  0, // locals
  0, // parameters
  // add_mangled mangled
  func_add_mangled, 1, var_859_1_mangled, TAIL_CALL,
  POS(884, 15)
};

static TAB_NUM t_func_add_mangled[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 886_15_mangled_name
  // mangled_literals(self) mangled_name
  var_mangled_literals, 2, var_858_47_self, LOCAL(1), 1, var_mangled_literals,
  // -> mangled_literals mangling_counter
  LET, 2, var_mangled_literals, var_mangling_counter, TAIL_CALL,
  POS(889, 6),
  POS(890, 5)
};

static TAB_NUM t_func_funky_types__unique___add_literal[] = {
  3, // locals
  1, // parameters
  LOCAL(3), // 892_35_self
  // !mangled_literals(self) funky::key_of(self)
  var_funky__key_of, 1, LOCAL(3), 1, LOCAL(2),
  // mangled_literals(self) funky::key_of(self)
  var_mangled_literals, 2, LOCAL(3), LOCAL(2), 1, var_mangled_literals,
  // -> mangled_literals mangling_counter
  LET, 2, var_mangled_literals, var_mangling_counter, TAIL_CALL,
  POS(893, 3),
  POS(893, 4),
  POS(894, 3)
};

static TAB_NUM t_func_funky_types__statement___add_literal[] = {
  5, // locals
  1, // parameters
  LOCAL(3), // 896_38_self
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
  POS(897, 23),
  POS(897, 9),
  POS(897, 3),
  POS(898, 33),
  POS(898, 3),
  POS(899, 6),
  POS(899, 3)
};

static TAB_NUM t_func_funky_types__body___add_literal[] = {
  6, // locals
  1, // parameters
  var_901_33_self,
  // $source_group source_group_of(self)
  var_source_group_of, 1, var_901_33_self, 1, LOCAL(4),
  // $line_text second(source_group)
  var_second, 1, LOCAL(4), 1, LOCAL(5),
  // length_of(line_text)-length_of(source_position_of(self))
  var_length_of, 1, LOCAL(5), 1, LOCAL(1),
  // source_position_of(self))
  var_source_position_of, 1, var_901_33_self, 1, LOCAL(2),
  // length_of(source_position_of(self))
  var_length_of, 1, LOCAL(2), 1, LOCAL(3),
  // $column_no length_of(line_text)-length_of(source_position_of(self))
  var_std__minus, 2, LOCAL(1), LOCAL(3), 1, LOCAL(6),
  // $text range(line_text 1 column_no)
  var_range, 3, LOCAL(5), num_1, LOCAL(6), 1, var_905_1_text,
  // without_suffix &text ':'
  var_without_suffix, 2, var_905_1_text, chr_58, 1, var_905_1_text,
  // without_suffix &text "->"
  var_without_suffix, 2, var_905_1_text, string_40, 1, var_905_1_text,
  // trim_right &text
  var_trim_right, 1, var_905_1_text, 1, var_905_1_text,
  // is_empty || text .contains. ' ':
  var_is_empty, 1, var_905_1_text, 1, LOCAL(1),
  // is_empty || text .contains. ' ':
  var_std__or, 2, LOCAL(1), lambda_186, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_187, lambda_188, TAIL_CALL,
  POS(902, 3),
  POS(903, 3),
  POS(904, 14),
  POS(904, 45),
  POS(904, 35),
  POS(904, 3),
  POS(905, 3),
  POS(906, 3),
  POS(907, 3),
  POS(908, 3),
  POS(910, 10),
  POS(910, 10),
  POS(909, 3)
};

static TAB_NUM t_lambda_186[] = {
  1, // locals
  0, // parameters
  // text .contains. ' ':
  var_contains, 2, var_905_1_text, chr_32, 1, LOCAL(1),
  // text .contains. ' ':
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(910, 22),
  POS(910, 22)
};

static TAB_NUM t_lambda_187[] = {
  0, // locals
  0, // parameters
  // add_lambda ""
  func_add_lambda, 1, string_6, TAIL_CALL,
  POS(911, 7)
};

static TAB_NUM t_lambda_188[] = {
  2, // locals
  0, // parameters
  // text(1) == '$':
  var_905_1_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '$':
  var_std__equal, 2, LOCAL(1), chr_36, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_189, lambda_190, TAIL_CALL,
  POS(914, 9),
  POS(914, 9),
  POS(913, 7)
};

static TAB_NUM t_lambda_189[] = {
  3, // locals
  0, // parameters
  // range(text 2 -1))
  var_range, 3, var_905_1_text, num_2, minus_num_1, 1, LOCAL(1),
  // mangle_versioned_identifier(range(text 2 -1))
  func_mangle_versioned_identifier, 1, LOCAL(1), 1, LOCAL(2),
  // append
  var_append, 2, str_func, LOCAL(2), 1, LOCAL(3),
  // add_function
  func_add_function, 1, LOCAL(3), TAIL_CALL,
  POS(918, 43),
  POS(918, 15),
  POS(916, 13),
  POS(915, 11)
};

static TAB_NUM t_lambda_190[] = {
  0, // locals
  0, // parameters
  // replace_all &text '.' = "_"
  var_replace_all, 2, var_905_1_text, key_value_pair_920_19, 1, var_905_1_text,
  // remove_non_identifier_characters &text
  func_remove_non_identifier_characters, 1, var_905_1_text, 1, var_905_1_text,
  // add_lambda text
  func_add_lambda, 1, var_905_1_text, TAIL_CALL,
  POS(920, 11),
  POS(921, 11),
  POS(922, 11)
};

static TAB_NUM t_func_add_lambda[] = {
  1, // locals
  1, // parameters
  var_924_14_name,
  // is_empty:
  var_is_empty, 1, var_924_14_name, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_name_is_empty, lambda_191, TAIL_CALL,
  POS(926, 12),
  POS(925, 5)
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
  POS(927, 9),
  POS(928, 21),
  POS(928, 9)
};

static TAB_NUM t_lambda_191[] = {
  1, // locals
  0, // parameters
  // append("lambda_" name)
  var_append, 2, str_lambda_2, var_924_14_name, 1, LOCAL(1),
  // add_function append("lambda_" name)
  func_add_function, 1, LOCAL(1), TAIL_CALL,
  POS(930, 22),
  POS(930, 9)
};

static TAB_NUM t_func_add_function[] = {
  1, // locals
  1, // parameters
  var_932_16_name,
  // check_mangling $n !mangling_counter name
  func_check_mangling, 1, var_932_16_name, 2, var_933_16_n, var_mangling_counter,
  // 1:
  var_std__less, 2, num_1, var_933_16_n, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_192, lambda_193, TAIL_CALL,
  POS(933, 5),
  POS(935, 11),
  POS(934, 5)
};

static TAB_NUM t_lambda_192[] = {
  3, // locals
  0, // parameters
  // name .until. '_'
  var_until, 2, var_932_16_name, chr_95, 1, LOCAL(1),
  // name .from. '_'
  var_from, 2, var_932_16_name, chr_95, 1, LOCAL(2),
  // string
  var_string, 3, LOCAL(1), var_933_16_n, LOCAL(2), 1, LOCAL(3),
  // add_mangled
  func_2_add_mangled, 1, LOCAL(3), TAIL_CALL,
  POS(938, 13),
  POS(940, 13),
  POS(937, 11),
  POS(936, 9)
};

static TAB_NUM t_lambda_193[] = {
  0, // locals
  0, // parameters
  // add_mangled name
  func_2_add_mangled, 1, var_932_16_name, TAIL_CALL,
  POS(942, 9)
};

static TAB_NUM t_func_2_add_mangled[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 944_15_name
  // mangled_literals(self name) mangling_counter
  var_mangled_literals, 2, var_901_33_self, LOCAL(2), 1, LOCAL(1),
  // -> mangled_literals(self name) mangling_counter
  LET, 2, LOCAL(1), var_mangling_counter, TAIL_CALL,
  POS(945, 8),
  POS(945, 5)
};

static TAB_NUM t_func_mangle_versioned_identifier[] = {
  1, // locals
  1, // parameters
  var_947_31_name,
  // $rest name .behind. "-"
  var_behind, 2, var_947_31_name, string_41, 1, var_948_1_rest,
  // is_empty
  var_is_empty, 1, var_948_1_rest, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_194, lambda_195, TAIL_CALL,
  POS(948, 5),
  POS(950, 12),
  POS(949, 5)
};

static TAB_NUM t_lambda_194[] = {
  1, // locals
  0, // parameters
  // replace(name)
  func_replace, 1, var_947_31_name, 1, LOCAL(1),
  //  replace(name)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(951, 10),
  POS(951, 9)
};

static TAB_NUM t_lambda_195[] = {
  2, // locals
  0, // parameters
  // rest(1).is_a_digit
  var_948_1_rest, 1, num_1, 1, LOCAL(1),
  // is_a_digit
  var_is_a_digit, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_196, lambda_197, TAIL_CALL,
  POS(954, 11),
  POS(954, 19),
  POS(953, 9)
};

static TAB_NUM t_lambda_196[] = {
  5, // locals
  0, // parameters
  // name .before. '.') "__" replace(name .behind. '.'))
  var_before, 2, var_947_31_name, chr_46, 1, LOCAL(1),
  // replace(name .before. '.') "__" replace(name .behind. '.'))
  func_replace, 1, LOCAL(1), 1, LOCAL(2),
  // name .behind. '.'))
  var_behind, 2, var_947_31_name, chr_46, 1, LOCAL(3),
  // replace(name .behind. '.'))
  func_replace, 1, LOCAL(3), 1, LOCAL(4),
  // append(replace(name .before. '.') "__" replace(name .behind. '.'))
  var_append, 3, LOCAL(2), string_28, LOCAL(4), 1, LOCAL(5),
  //  append(replace(name .before. '.') "__" replace(name .behind. '.'))
  LET, 1, LOCAL(5), TAIL_CALL,
  POS(955, 29),
  POS(955, 21),
  POS(955, 61),
  POS(955, 53),
  POS(955, 14),
  POS(955, 13)
};

static TAB_NUM t_lambda_197[] = {
  1, // locals
  0, // parameters
  // replace(name)
  func_replace, 1, var_947_31_name, 1, LOCAL(1),
  //  replace(name)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(956, 14),
  POS(956, 13)
};

static TAB_NUM t_func_replace[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 958_11_part
  // part .without_suffix. '/'
  var_without_suffix, 2, LOCAL(2), chr_47, 1, LOCAL(1),
  // replace_all
  var_replace_all, 5, LOCAL(1), key_value_pair_961_1, key_value_pair_962_1, key_value_pair_963_1, key_value_pair_964_1, TAIL_CALL,
  POS(960, 9),
  POS(959, 7)
};

static TAB_NUM t_func_check_mangling[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 966_18_name
  // $n mangling_counter(name)
  var_mangling_counter, 1, LOCAL(2), 1, var_967_1_n,
  // is_defined
  var_is_defined, 1, var_967_1_n, 1, LOCAL(1),
  // !n
  var_if, 3, LOCAL(1), lambda_198, lambda_199, 1, var_967_1_n,
  // mangling_counter(name n)
  var_mangling_counter, 2, LOCAL(2), var_967_1_n, 1, LOCAL(1),
  // -> n mangling_counter(name n)
  LET, 2, var_967_1_n, LOCAL(1), TAIL_CALL,
  POS(967, 3),
  POS(970, 9),
  POS(968, 3),
  POS(973, 8),
  POS(973, 3)
};

static TAB_NUM t_lambda_198[] = {
  1, // locals
  0, // parameters
  // n+1
  var_std__plus, 2, var_967_1_n, num_1, 1, LOCAL(1),
  //  n+1
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(971, 10),
  POS(971, 9)
};

static TAB_NUM t_lambda_199[] = {
  0, // locals
  0, // parameters
  //  1
  LET, 1, num_1, TAIL_CALL,
  POS(972, 9)
};

static TAB_NUM t_func_remove_trailing_underscores_and_digits[] = {
  0, // locals
  1, // parameters
  var_975_42_str,
  // $n length_of(str)
  var_length_of, 1, var_975_42_str, 1, var_976_1_n,
  // loop:
  var_loop, 1, lambda_loop, TAIL_CALL,
  POS(976, 3),
  POS(977, 3)
};

static TAB_NUM t_lambda_loop[] = {
  1, // locals
  0, // parameters
  // n == 0
  var_std__equal, 2, var_976_1_n, num_0, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_200, lambda_201, TAIL_CALL,
  POS(979, 7),
  POS(978, 5)
};

static TAB_NUM t_lambda_200[] = {
  0, // locals
  0, // parameters
  //  ""
  LET, 1, string_6, TAIL_CALL,
  POS(980, 9)
};

static TAB_NUM t_lambda_201[] = {
  3, // locals
  0, // parameters
  // str(n) == '_' || str(n).is_a_digit:
  var_975_42_str, 1, var_976_1_n, 1, LOCAL(1),
  // str(n) == '_' || str(n).is_a_digit:
  var_std__equal, 2, LOCAL(1), chr_95, 1, LOCAL(2),
  // str(n) == '_' || str(n).is_a_digit:
  var_std__or, 2, LOCAL(2), lambda_202, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_203, lambda_204, TAIL_CALL,
  POS(983, 11),
  POS(983, 11),
  POS(983, 11),
  POS(982, 9)
};

static TAB_NUM t_lambda_202[] = {
  2, // locals
  0, // parameters
  // str(n).is_a_digit:
  var_975_42_str, 1, var_976_1_n, 1, LOCAL(1),
  // is_a_digit:
  var_is_a_digit, 1, LOCAL(1), 1, LOCAL(2),
  // str(n).is_a_digit:
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(983, 28),
  POS(983, 35),
  POS(983, 28)
};

static TAB_NUM t_lambda_203[] = {
  0, // locals
  0, // parameters
  // dec &n
  var_dec, 1, var_976_1_n, 1, var_976_1_n,
  // next
  var_next, 0, TAIL_CALL,
  POS(984, 13),
  POS(985, 13)
};

static TAB_NUM t_lambda_204[] = {
  1, // locals
  0, // parameters
  // range(str 1 n)
  var_range, 3, var_975_42_str, num_1, var_976_1_n, 1, LOCAL(1),
  //  range(str 1 n)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(986, 14),
  POS(986, 13)
};

static TAB_NUM t_func_remove_non_identifier_characters[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 988_36_str
  // $buf ""
  LET, 1, string_6, 1, var_989_1_buf,
  // for_each str
  var_for_each, 3, LOCAL(1), lambda_205, lambda_213, TAIL_CALL,
  POS(989, 3),
  POS(990, 3)
};

static TAB_NUM t_lambda_205[] = {
  0, // locals
  1, // parameters
  var_991_3_chr,
  // cond
  var_cond, 3, lambda_206, lambda_208, lambda_212, TAIL_CALL,
  POS(992, 7)
};

static TAB_NUM t_lambda_206[] = {
  1, // locals
  0, // parameters
  // is_a_letter:
  var_is_a_letter, 1, var_991_3_chr, 1, LOCAL(1),
  //  chr.is_a_letter:
  LET, 2, LOCAL(1), lambda_207, TAIL_CALL,
  POS(993, 16),
  POS(993, 11)
};

static TAB_NUM t_lambda_207[] = {
  0, // locals
  0, // parameters
  // push &buf chr
  var_push, 2, var_989_1_buf, var_991_3_chr, 1, var_989_1_buf,
  // next
  var_next, 0, TAIL_CALL,
  POS(994, 11),
  POS(995, 11)
};

static TAB_NUM t_lambda_208[] = {
  2, // locals
  0, // parameters
  // is_a_digit || chr == '_':
  var_is_a_digit, 1, var_991_3_chr, 1, LOCAL(1),
  // is_a_digit || chr == '_':
  var_std__or, 2, LOCAL(1), lambda_209, 1, LOCAL(2),
  //  chr.is_a_digit || chr == '_':
  LET, 2, LOCAL(2), lambda_210, TAIL_CALL,
  POS(996, 16),
  POS(996, 16),
  POS(996, 11)
};

static TAB_NUM t_lambda_209[] = {
  1, // locals
  0, // parameters
  // chr == '_':
  var_std__equal, 2, var_991_3_chr, chr_95, 1, LOCAL(1),
  // chr == '_':
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(996, 30),
  POS(996, 30)
};

static TAB_NUM t_lambda_210[] = {
  1, // locals
  0, // parameters
  // is_empty # prevent leading digits!
  var_is_empty, 1, var_989_1_buf, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), var_next, lambda_211, TAIL_CALL,
  POS(998, 17),
  POS(997, 11)
};

static TAB_NUM t_lambda_211[] = {
  0, // locals
  0, // parameters
  // push &buf chr
  var_push, 2, var_989_1_buf, var_991_3_chr, 1, var_989_1_buf,
  // next
  var_next, 0, TAIL_CALL,
  POS(1001, 15),
  POS(1002, 15)
};

static TAB_NUM t_lambda_212[] = {
  0, // locals
  0, // parameters
  //  true next
  LET, 2, var_true, var_next, TAIL_CALL,
  POS(1003, 11)
};

static TAB_NUM t_lambda_213[] = {
  0, // locals
  0, // parameters
  //  buf
  LET, 1, var_989_1_buf, TAIL_CALL,
  POS(1004, 7)
};

static TAB_NUM t_func_funky_types__statement___to_compound[] = {
  6, // locals
  1, // parameters
  LOCAL(4), // 1012_38_self
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
  POS(1013, 3),
  POS(1015, 12),
  POS(1015, 5),
  POS(1017, 5),
  POS(1014, 3),
  POS(1019, 6),
  POS(1019, 3)
};

static TAB_NUM t_func_to_negative_index[] = {
  3, // locals
  1, // parameters
  LOCAL(3), // 1025_21_node
  // to_index(node))"
  var_to_index, 1, LOCAL(3), 1, LOCAL(1),
  // "-@(to_index(node))"
  var_std__string, 2, string_41, LOCAL(1), 1, LOCAL(2),
  // -> "-@(to_index(node))"
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1025, 37),
  POS(1025, 33),
  POS(1025, 30)
};

static TAB_NUM t_func_funky_types__numeric_literal___to_table_entry[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 1033_47_self
  // $digits digits_of(self)
  var_digits_of, 1, LOCAL(2), 1, var_1034_1_digits,
  // digits .contains. '.'
  var_contains, 2, var_1034_1_digits, chr_46, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_214, lambda_215, TAIL_CALL,
  POS(1034, 3),
  POS(1036, 5),
  POS(1035, 3)
};

static TAB_NUM t_lambda_214[] = {
  1, // locals
  0, // parameters
  // "
  var_std__string, 3, str___FLT_REAL_0_rea, var_1034_1_digits, string_43, 1, LOCAL(1),
  //  "
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1037, 8),
  POS(1037, 7)
};

static TAB_NUM t_lambda_215[] = {
  3, // locals
  0, // parameters
  // digits(1) == '-'
  var_1034_1_digits, 1, num_1, 1, LOCAL(1),
  // digits(1) == '-'
  var_std__equal, 2, LOCAL(1), chr_45, 1, LOCAL(2),
  // if $sign !digits
  var_if, 3, LOCAL(2), lambda_216, lambda_217, 2, LOCAL(3), var_1034_1_digits,
  // digits .has_prefix. "0b" || digits .has_prefix. "0o"
  var_has_prefix, 2, var_1034_1_digits, str_0b, 1, LOCAL(1),
  // digits .has_prefix. "0b" || digits .has_prefix. "0o"
  var_std__or, 2, LOCAL(1), lambda_218, 1, LOCAL(2),
  // update_if digits .has_prefix. "0b" || digits .has_prefix. "0o"
  var_update_if, 3, LOCAL(2), var_1034_1_digits, lambda_digits, 1, var_1034_1_digits,
  // "
  var_std__string, 5, str___FLT, LOCAL(3), str_TIVE_INT64_0_val, var_1034_1_digits, string_43, 1, LOCAL(1),
  // -> "
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1042, 9),
  POS(1042, 9),
  POS(1041, 7),
  POS(1045, 17),
  POS(1045, 17),
  POS(1045, 7),
  POS(1047, 10),
  POS(1047, 7)
};

static TAB_NUM t_lambda_216[] = {
  1, // locals
  0, // parameters
  // range(digits 2 -1)
  var_range, 3, var_1034_1_digits, num_2, minus_num_1, 1, LOCAL(1),
  //  "NEGA" range(digits 2 -1)
  LET, 2, str_NEGA, LOCAL(1), TAIL_CALL,
  POS(1043, 19),
  POS(1043, 11)
};

static TAB_NUM t_lambda_217[] = {
  0, // locals
  0, // parameters
  //  "POSI" digits
  LET, 2, str_POSI, var_1034_1_digits, TAIL_CALL,
  POS(1044, 11)
};

static TAB_NUM t_lambda_218[] = {
  1, // locals
  0, // parameters
  // digits .has_prefix. "0o"
  var_has_prefix, 2, var_1034_1_digits, str_0o, 1, LOCAL(1),
  // digits .has_prefix. "0o"
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1045, 45),
  POS(1045, 45)
};

static TAB_NUM t_lambda_digits[] = {
  1, // locals
  0, // parameters
  // to_integer
  var_to_integer, 1, var_1034_1_digits, 1, LOCAL(1),
  //  digits.to_integer
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1046, 27),
  POS(1046, 19)
};

static TAB_NUM t_func_funky_types__numeric_character_literal___to_table_entry[] = {
  3, // locals
  1, // parameters
  LOCAL(3), // 1051_57_self
  // digits_of(self))}},
  var_digits_of, 1, LOCAL(3), 1, LOCAL(1),
  // "
  var_std__string, 3, str___FLT_CHARACTER, LOCAL(1), string_43, 1, LOCAL(2),
  // -> "
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1054, 38),
  POS(1052, 6),
  POS(1052, 3)
};

static TAB_NUM t_func_funky_types__character_sequence___to_table_entry[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 1056_50_self
  // $characters characters_of(self)
  var_characters_of, 1, LOCAL(2), 1, var_1057_1_characters,
  // $length length_of(characters)
  var_length_of, 1, var_1057_1_characters, 1, var_1058_1_length,
  // is_an_octet_string:
  var_is_an_octet_string, 1, var_1057_1_characters, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_characters_is_an_octet_string, lambda_219, TAIL_CALL,
  POS(1057, 3),
  POS(1058, 3),
  POS(1060, 16),
  POS(1059, 3)
};

static TAB_NUM t_lambda_characters_is_an_octet_string[] = {
  2, // locals
  0, // parameters
  // $text characters.to_c_string
  func_to_c_string, 1, var_1057_1_characters, 1, LOCAL(2),
  // "
  var_std__string, 5, str___FLT_STRING, var_1058_1_length, str__str, LOCAL(2), string_44, 1, LOCAL(1),
  // -> "
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1061, 7),
  POS(1062, 10),
  POS(1062, 7)
};

static TAB_NUM t_lambda_219[] = {
  2, // locals
  0, // parameters
  // $text characters.to_c_string_32
  func_to_c_string_32, 1, var_1057_1_characters, 1, LOCAL(2),
  // "
  var_std__string, 5, str___FLT_STRING_2, var_1058_1_length, str__str_32__U, LOCAL(2), string_44, 1, LOCAL(1),
  // -> "
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1066, 7),
  POS(1067, 10),
  POS(1067, 7)
};

static TAB_NUM t_func_funky_types__statement___to_table_entry[] = {
  7, // locals
  1, // parameters
  LOCAL(3), // 1071_41_self
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
  POS(1072, 3),
  POS(1073, 10),
  POS(1073, 10),
  POS(1073, 3),
  POS(1074, 20),
  POS(1074, 10),
  POS(1074, 3),
  POS(1075, 3),
  POS(1076, 6),
  POS(1076, 3)
};

static TAB_NUM t_func_funky_types__unique___to_table_entry[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 1080_38_self
  // identifier_of(self) "__" = "::")
  var_identifier_of, 1, LOCAL(2), 1, LOCAL(1),
  // $identifier replace_first(identifier_of(self) "__" = "::")
  var_replace_first, 2, LOCAL(1), key_value_pair_1081_47, 1, LOCAL(3),
  // "
  var_std__string, 3, str___FLT_UNIQUE_0_s, LOCAL(3), string_44, 1, LOCAL(1),
  // -> "
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1081, 29),
  POS(1081, 3),
  POS(1082, 6),
  POS(1082, 3)
};

static TAB_NUM t_func_funky_types__body___to_table_entry[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 1086_36_self
  // $mangled_name mangled_literals(self)
  var_mangled_literals, 1, LOCAL(2), 1, LOCAL(3),
  // "
  var_std__string, 3, str___FLT_FUNCTION_2, LOCAL(3), string_43, 1, LOCAL(1),
  // -> "
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1087, 3),
  POS(1088, 6),
  POS(1088, 3)
};

static TAB_NUM t_func_is_local_or_constant[] = {
  2, // locals
  1, // parameters
  var_1094_24_kind,
  // kind == LOCAL || kind == CONSTANT || kind == CONSTANT_COMPOUND
  var_std__equal, 2, var_1094_24_kind, var_LOCAL, 1, LOCAL(1),
  // kind == LOCAL || kind == CONSTANT || kind == CONSTANT_COMPOUND
  var_std__or, 2, LOCAL(1), lambda_220, 1, LOCAL(2),
  // -> kind == LOCAL || kind == CONSTANT || kind == CONSTANT_COMPOUND
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1095, 6),
  POS(1095, 6),
  POS(1095, 3)
};

static TAB_NUM t_lambda_220[] = {
  2, // locals
  0, // parameters
  // kind == CONSTANT || kind == CONSTANT_COMPOUND
  var_std__equal, 2, var_1094_24_kind, var_CONSTANT, 1, LOCAL(1),
  // kind == CONSTANT || kind == CONSTANT_COMPOUND
  var_std__or, 2, LOCAL(1), lambda_221, 1, LOCAL(2),
  // kind == CONSTANT || kind == CONSTANT_COMPOUND
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1095, 23),
  POS(1095, 23),
  POS(1095, 23)
};

static TAB_NUM t_lambda_221[] = {
  1, // locals
  0, // parameters
  // kind == CONSTANT_COMPOUND
  var_std__equal, 2, var_1094_24_kind, var_CONSTANT_COMPOUND, 1, LOCAL(1),
  // kind == CONSTANT_COMPOUND
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1095, 43),
  POS(1095, 43)
};

static TAB_NUM t_func_collect_types[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 1097_17_statements
  // $types empty_insert_order_table
  LET, 1, var_empty_insert_order_table, 1, var_1098_1_types,
  // for_each statements
  var_for_each, 3, LOCAL(1), lambda_222, lambda_232, TAIL_CALL,
  POS(1098, 3),
  POS(1099, 3)
};

static TAB_NUM t_lambda_222[] = {
  2, // locals
  1, // parameters
  var_1100_3_statement,
  // node_type_of(statement) == STATEMENT:
  var_node_type_of, 1, var_1100_3_statement, 1, LOCAL(1),
  // node_type_of(statement) == STATEMENT:
  var_std__equal, 2, LOCAL(1), var_STATEMENT, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_223, var_next, TAIL_CALL,
  POS(1102, 9),
  POS(1102, 9),
  POS(1101, 7)
};

static TAB_NUM t_lambda_223[] = {
  2, // locals
  0, // parameters
  // $arguments arguments_of(statement)
  var_arguments_of, 1, var_1100_3_statement, 1, var_1103_1_arguments,
  // head_of(statement))
  var_head_of, 1, var_1100_3_statement, 1, LOCAL(1),
  // $functor_name identifier_of(head_of(statement))
  var_identifier_of, 1, LOCAL(1), 1, var_1104_1_functor_name,
  // is_not_empty
  var_is_not_empty, 1, var_1103_1_arguments, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_224, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_226, var_next, TAIL_CALL,
  POS(1103, 11),
  POS(1104, 39),
  POS(1104, 11),
  POS(1107, 25),
  POS(1106, 15),
  POS(1105, 11)
};

static TAB_NUM t_lambda_224[] = {
  4, // locals
  0, // parameters
  // arguments(-1)) == DEFINITION
  var_1103_1_arguments, 1, minus_num_1, 1, LOCAL(1),
  // node_type_of(arguments(-1)) == DEFINITION
  var_node_type_of, 1, LOCAL(1), 1, LOCAL(2),
  // node_type_of(arguments(-1)) == DEFINITION
  var_std__equal, 2, LOCAL(2), var_DEFINITION, 1, LOCAL(3),
  // 
  var_std__and, 2, LOCAL(3), lambda_225, 1, LOCAL(4),
  // node_type_of(arguments(-1)) == DEFINITION
  LET, 1, LOCAL(4), TAIL_CALL,
  POS(1108, 28),
  POS(1108, 15),
  POS(1108, 15),
  POS(1106, 15),
  POS(1108, 15)
};

static TAB_NUM t_lambda_225[] = {
  1, // locals
  0, // parameters
  // functor_name == "std::assign"
  var_std__equal, 2, var_1104_1_functor_name, str_stdassign, 1, LOCAL(1),
  // functor_name == "std::assign"
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1109, 15),
  POS(1109, 15)
};

static TAB_NUM t_lambda_226[] = {
  1, // locals
  0, // parameters
  // range(arguments 1 -2)
  var_range, 3, var_1103_1_arguments, num_1, minus_num_2, 1, LOCAL(1),
  // for_each range(arguments 1 -2)
  var_for_each, 3, LOCAL(1), lambda_227, var_next, TAIL_CALL,
  POS(1111, 24),
  POS(1111, 15)
};

static TAB_NUM t_lambda_227[] = {
  1, // locals
  1, // parameters
  var_1112_3_argument,
  // node_type_of(argument)
  var_node_type_of, 1, var_1112_3_argument, 1, LOCAL(1),
  // case node_type_of(argument)
  var_case, 8, LOCAL(1), var_TYPE_FUNCTION, lambda_TYPE_FUNCTION, var_ATTRIBUTE_VALUE_PAIR, lambda_ATTRIBUTE_VALUE_PAIR, var_METHOD_VALUE_PAIR, lambda_METHOD_VALUE_PAIR, var_next, TAIL_CALL,
  POS(1113, 24),
  POS(1113, 19)
};

static TAB_NUM t_lambda_TYPE_FUNCTION[] = {
  1, // locals
  0, // parameters
  // mangled_literals(argument)
  var_mangled_literals, 1, var_1112_3_argument, 1, LOCAL(1),
  // add "TYPE_FUNCTION" mangled_literals(argument)
  func_add, 2, str_TYPE_FUNCTION, LOCAL(1), TAIL_CALL,
  POS(1115, 43),
  POS(1115, 23)
};

static TAB_NUM t_lambda_ATTRIBUTE_VALUE_PAIR[] = {
  0, // locals
  0, // parameters
  // add_method "-"
  func_add_method, 1, string_41, TAIL_CALL,
  POS(1117, 23)
};

static TAB_NUM t_lambda_METHOD_VALUE_PAIR[] = {
  0, // locals
  0, // parameters
  // add_method
  func_add_method, 0, TAIL_CALL,
  POS(1119, 23)
};

static TAB_NUM t_func_add_method[] = {
  5, // locals
  -1, // parameters
  string_6, LOCAL(3), // 1122_14_prefix
  // identifier_of(argument))
  var_identifier_of, 1, var_1112_3_argument, 1, LOCAL(1),
  // $method mangle_identifier(identifier_of(argument))
  var_mangle_identifier, 1, LOCAL(1), 1, LOCAL(4),
  // $value argument_of(argument)
  var_argument_of, 1, var_1112_3_argument, 1, var_1124_1_value,
  // node_type_of(value) == FUNCTOR:
  var_node_type_of, 1, var_1124_1_value, 1, LOCAL(1),
  // node_type_of(value) == FUNCTOR:
  var_std__equal, 2, LOCAL(1), var_FUNCTOR, 1, LOCAL(2),
  // $value_idx
  var_if, 3, LOCAL(2), lambda_228, lambda_231, 1, LOCAL(5),
  // append(prefix "var_" method) value_idx
  var_append, 3, LOCAL(3), str_var, LOCAL(4), 1, LOCAL(1),
  // add append(prefix "var_" method) value_idx
  func_add, 2, LOCAL(1), LOCAL(5), TAIL_CALL,
  POS(1123, 47),
  POS(1123, 21),
  POS(1124, 21),
  POS(1127, 25),
  POS(1127, 25),
  POS(1125, 21),
  POS(1135, 25),
  POS(1135, 21)
};

static TAB_NUM t_lambda_228[] = {
  2, // locals
  0, // parameters
  // $identifier identifier_of(value)
  var_identifier_of, 1, var_1124_1_value, 1, var_1128_1_identifier,
  // variables(identifier) $kind $constant_value
  var_variables, 1, var_1128_1_identifier, 1, LOCAL(1),
  // variables(identifier) $kind $constant_value
  LOCAL(1), 0, 2, LOCAL(2), var_1129_29_constant_value,
  // CONSTANT, CONSTANT_COMPOUND
  var_std__sequence, 2, var_CONSTANT, var_CONSTANT_COMPOUND, 1, LOCAL(1),
  // case kind
  var_case, 4, LOCAL(2), LOCAL(1), lambda_229, lambda_230, TAIL_CALL,
  POS(1128, 27),
  POS(1129, 27),
  POS(1129, 27),
  POS(1131, 29),
  POS(1130, 27)
};

static TAB_NUM t_lambda_229[] = {
  1, // locals
  0, // parameters
  // mangled_literals(constant_value)
  var_mangled_literals, 1, var_1129_29_constant_value, 1, LOCAL(1),
  //  mangled_literals(constant_value)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1132, 32),
  POS(1132, 31)
};

static TAB_NUM t_lambda_230[] = {
  2, // locals
  0, // parameters
  // mangle_identifier(identifier))
  var_mangle_identifier, 1, var_1128_1_identifier, 1, LOCAL(1),
  // append("var_" mangle_identifier(identifier))
  var_append, 2, str_var, LOCAL(1), 1, LOCAL(2),
  //  append("var_" mangle_identifier(identifier))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1133, 46),
  POS(1133, 32),
  POS(1133, 31)
};

static TAB_NUM t_lambda_231[] = {
  1, // locals
  0, // parameters
  // mangled_literals(value)
  var_mangled_literals, 1, var_1124_1_value, 1, LOCAL(1),
  //  mangled_literals(value)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1134, 28),
  POS(1134, 27)
};

static TAB_NUM t_func_add[] = {
  7, // locals
  2, // parameters
  LOCAL(4), // 1137_7_method
  LOCAL(5), // 1137_14_value_idx
  // arguments(-1)))
  var_1103_1_arguments, 1, minus_num_1, 1, LOCAL(1),
  // identifier_of(arguments(-1)))
  var_identifier_of, 1, LOCAL(1), 1, LOCAL(2),
  // $type mangle_identifier(identifier_of(arguments(-1)))
  var_mangle_identifier, 1, LOCAL(2), 1, LOCAL(6),
  // types(type) empty_list)
  var_1098_1_types, 1, LOCAL(6), 1, LOCAL(1),
  // $methods default_value(types(type) empty_list)
  var_default_value, 2, LOCAL(1), var_empty_list, 1, LOCAL(7),
  // tuple(method value_idx))
  var_tuple, 2, LOCAL(4), LOCAL(5), 1, LOCAL(1),
  // !types(type) push(methods tuple(method value_idx))
  var_push, 2, LOCAL(7), LOCAL(1), 1, LOCAL(3),
  // types(type) push(methods tuple(method value_idx))
  var_1098_1_types, 2, LOCAL(6), LOCAL(3), 1, var_1098_1_types,
  // next
  var_next, 0, TAIL_CALL,
  POS(1138, 59),
  POS(1138, 45),
  POS(1138, 21),
  POS(1139, 44),
  POS(1139, 21),
  POS(1140, 47),
  POS(1140, 21),
  POS(1140, 22),
  POS(1141, 21)
};

static TAB_NUM t_lambda_232[] = {
  0, // locals
  0, // parameters
  //  types
  LET, 1, var_1098_1_types, TAIL_CALL,
  POS(1145, 7)
};

static TAB_NUM t_func_funky__mangle_identifier[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 1151_28_identifier
  // replace_all
  var_replace_all, 4, LOCAL(1), key_value_pair_963_1, key_value_pair_964_1, key_value_pair_1156_1, TAIL_CALL,
  POS(1152, 3)
};

static TAB_NUM t_func_to_c_string[] = {
  0, // locals
  1, // parameters
  var_1158_15_str,
  // $buf ""
  LET, 1, string_6, 1, var_1159_1_buf,
  // $s 1
  LET, 1, num_1, 1, var_1160_1_s,
  // for_each str
  var_for_each, 3, var_1158_15_str, lambda_233, lambda_238, TAIL_CALL,
  POS(1159, 3),
  POS(1160, 3),
  POS(1161, 3)
};

static TAB_NUM t_lambda_233[] = {
  2, // locals
  2, // parameters
  var_1162_3_idx,
  var_1162_7_chr,
  // chr < ' ' || chr > '~' || chr == '@quot;' || chr == '\':
  var_std__less, 2, var_1162_7_chr, chr_32, 1, LOCAL(1),
  // chr < ' ' || chr > '~' || chr == '@quot;' || chr == '\':
  var_std__or, 2, LOCAL(1), lambda_234, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_237, var_next, TAIL_CALL,
  POS(1164, 9),
  POS(1164, 9),
  POS(1163, 7)
};

static TAB_NUM t_lambda_234[] = {
  2, // locals
  0, // parameters
  // ~' || chr == '@quot;' || chr == '\':
  var_std__less, 2, chr_126, var_1162_7_chr, 1, LOCAL(1),
  // ~' || chr == '@quot;' || chr == '\':
  var_std__or, 2, LOCAL(1), lambda_235, 1, LOCAL(2),
  // chr > '~' || chr == '@quot;' || chr == '\':
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1164, 29),
  POS(1164, 29),
  POS(1164, 22)
};

static TAB_NUM t_lambda_235[] = {
  2, // locals
  0, // parameters
  // chr == '@quot;' || chr == '\':
  var_std__equal, 2, var_1162_7_chr, chr_34, 1, LOCAL(1),
  // chr == '@quot;' || chr == '\':
  var_std__or, 2, LOCAL(1), lambda_236, 1, LOCAL(2),
  // chr == '@quot;' || chr == '\':
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1164, 35),
  POS(1164, 35),
  POS(1164, 35)
};

static TAB_NUM t_lambda_236[] = {
  1, // locals
  0, // parameters
  // chr == '\':
  var_std__equal, 2, var_1162_7_chr, chr_92, 1, LOCAL(1),
  // chr == '\':
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1164, 54),
  POS(1164, 54)
};

static TAB_NUM t_lambda_237[] = {
  3, // locals
  0, // parameters
  // idx-1)
  var_std__minus, 2, var_1162_3_idx, num_1, 1, LOCAL(1),
  // range(str s idx-1)
  var_range, 3, var_1158_15_str, var_1160_1_s, LOCAL(1), 1, LOCAL(2),
  // append &buf range(str s idx-1)
  var_append, 2, var_1159_1_buf, LOCAL(2), 1, var_1159_1_buf,
  // to_integer) 3 "0")
  var_to_integer, 1, var_1162_7_chr, 1, LOCAL(1),
  // oct(chr.to_integer) 3 "0")
  var_oct, 1, LOCAL(1), 1, LOCAL(2),
  // pad_left(oct(chr.to_integer) 3 "0")
  var_pad_left, 3, LOCAL(2), num_3, string_23, 1, LOCAL(3),
  // append &buf "\" pad_left(oct(chr.to_integer) 3 "0")
  var_append, 3, var_1159_1_buf, string_45, LOCAL(3), 1, var_1159_1_buf,
  // !s idx+1
  var_std__plus, 2, var_1162_3_idx, num_1, 1, var_1160_1_s,
  // next
  var_next, 0, TAIL_CALL,
  POS(1165, 35),
  POS(1165, 23),
  POS(1165, 11),
  POS(1166, 44),
  POS(1166, 36),
  POS(1166, 27),
  POS(1166, 11),
  POS(1167, 11),
  POS(1168, 11)
};

static TAB_NUM t_lambda_238[] = {
  3, // locals
  0, // parameters
  // length_of(str)
  var_length_of, 1, var_1158_15_str, 1, LOCAL(1),
  // length_of(str)
  var_std__less, 2, LOCAL(1), var_1160_1_s, 1, LOCAL(2),
  // length_of(str)
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_239, lambda_240, TAIL_CALL,
  POS(1172, 14),
  POS(1172, 14),
  POS(1172, 14),
  POS(1171, 7)
};

static TAB_NUM t_lambda_239[] = {
  2, // locals
  0, // parameters
  // range(str s -1))
  var_range, 3, var_1158_15_str, var_1160_1_s, minus_num_1, 1, LOCAL(1),
  // append(buf range(str s -1))
  var_append, 2, var_1159_1_buf, LOCAL(1), 1, LOCAL(2),
  //  append(buf range(str s -1))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1173, 23),
  POS(1173, 12),
  POS(1173, 11)
};

static TAB_NUM t_lambda_240[] = {
  0, // locals
  0, // parameters
  //  buf
  LET, 1, var_1159_1_buf, TAIL_CALL,
  POS(1174, 11)
};

static TAB_NUM t_func_to_c_string_32[] = {
  0, // locals
  1, // parameters
  var_1176_18_str,
  // $buf ""
  LET, 1, string_6, 1, var_1177_1_buf,
  // $s 1
  LET, 1, num_1, 1, var_1178_1_s,
  // for_each str
  var_for_each, 3, var_1176_18_str, lambda_241, lambda_250, TAIL_CALL,
  POS(1177, 3),
  POS(1178, 3),
  POS(1179, 3)
};

static TAB_NUM t_lambda_241[] = {
  2, // locals
  2, // parameters
  var_1180_3_idx,
  var_1180_7_chr,
  // chr < ' ' || chr > '~' || chr == '@quot;' || chr == '\':
  var_std__less, 2, var_1180_7_chr, chr_32, 1, LOCAL(1),
  // chr < ' ' || chr > '~' || chr == '@quot;' || chr == '\':
  var_std__or, 2, LOCAL(1), lambda_242, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_245, var_next, TAIL_CALL,
  POS(1182, 9),
  POS(1182, 9),
  POS(1181, 7)
};

static TAB_NUM t_lambda_242[] = {
  2, // locals
  0, // parameters
  // ~' || chr == '@quot;' || chr == '\':
  var_std__less, 2, chr_126, var_1180_7_chr, 1, LOCAL(1),
  // ~' || chr == '@quot;' || chr == '\':
  var_std__or, 2, LOCAL(1), lambda_243, 1, LOCAL(2),
  // chr > '~' || chr == '@quot;' || chr == '\':
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1182, 29),
  POS(1182, 29),
  POS(1182, 22)
};

static TAB_NUM t_lambda_243[] = {
  2, // locals
  0, // parameters
  // chr == '@quot;' || chr == '\':
  var_std__equal, 2, var_1180_7_chr, chr_34, 1, LOCAL(1),
  // chr == '@quot;' || chr == '\':
  var_std__or, 2, LOCAL(1), lambda_244, 1, LOCAL(2),
  // chr == '@quot;' || chr == '\':
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1182, 35),
  POS(1182, 35),
  POS(1182, 35)
};

static TAB_NUM t_lambda_244[] = {
  1, // locals
  0, // parameters
  // chr == '\':
  var_std__equal, 2, var_1180_7_chr, chr_92, 1, LOCAL(1),
  // chr == '\':
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1182, 54),
  POS(1182, 54)
};

static TAB_NUM t_lambda_245[] = {
  2, // locals
  0, // parameters
  // idx-1)
  var_std__minus, 2, var_1180_3_idx, num_1, 1, LOCAL(1),
  // range(str s idx-1)
  var_range, 3, var_1176_18_str, var_1178_1_s, LOCAL(1), 1, LOCAL(2),
  // append &buf range(str s idx-1)
  var_append, 2, var_1177_1_buf, LOCAL(2), 1, var_1177_1_buf,
  // $val chr.to_integer
  var_to_integer, 1, var_1180_7_chr, 1, var_1184_1_val,
  // !s idx+1
  var_std__plus, 2, var_1180_3_idx, num_1, 1, var_1178_1_s,
  // 0xff:
  var_std__less, 2, num_0xff, var_1184_1_val, 1, LOCAL(1),
  // 0xff:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_246, lambda_247, TAIL_CALL,
  POS(1183, 35),
  POS(1183, 23),
  POS(1183, 11),
  POS(1184, 11),
  POS(1185, 11),
  POS(1187, 20),
  POS(1187, 20),
  POS(1186, 11)
};

static TAB_NUM t_lambda_246[] = {
  1, // locals
  0, // parameters
  // oct(val 3)
  var_oct, 2, var_1184_1_val, num_3, 1, LOCAL(1),
  // append &buf "\" oct(val 3)
  var_append, 3, var_1177_1_buf, string_45, LOCAL(1), 1, var_1177_1_buf,
  // next
  var_next, 0, TAIL_CALL,
  POS(1188, 31),
  POS(1188, 15),
  POS(1189, 15)
};

static TAB_NUM t_lambda_247[] = {
  2, // locals
  0, // parameters
  // 0xffff:
  var_std__less, 2, num_0xffff, var_1184_1_val, 1, LOCAL(1),
  // 0xffff:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_248, lambda_249, TAIL_CALL,
  POS(1192, 24),
  POS(1192, 24),
  POS(1191, 15)
};

static TAB_NUM t_lambda_248[] = {
  1, // locals
  0, // parameters
  // hex(val 4)
  var_hex, 2, var_1184_1_val, num_4, 1, LOCAL(1),
  // append &buf "\u" hex(val 4)
  var_append, 3, var_1177_1_buf, str_u, LOCAL(1), 1, var_1177_1_buf,
  // next
  var_next, 0, TAIL_CALL,
  POS(1193, 36),
  POS(1193, 19),
  POS(1194, 19)
};

static TAB_NUM t_lambda_249[] = {
  1, // locals
  0, // parameters
  // hex(val 8)
  var_hex, 2, var_1184_1_val, num_8, 1, LOCAL(1),
  // append &buf "\U" hex(val 8)
  var_append, 3, var_1177_1_buf, str_U, LOCAL(1), 1, var_1177_1_buf,
  // next
  var_next, 0, TAIL_CALL,
  POS(1196, 36),
  POS(1196, 19),
  POS(1197, 19)
};

static TAB_NUM t_lambda_250[] = {
  3, // locals
  0, // parameters
  // length_of(str)
  var_length_of, 1, var_1176_18_str, 1, LOCAL(1),
  // length_of(str)
  var_std__less, 2, LOCAL(1), var_1178_1_s, 1, LOCAL(2),
  // length_of(str)
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_251, lambda_252, TAIL_CALL,
  POS(1201, 14),
  POS(1201, 14),
  POS(1201, 14),
  POS(1200, 7)
};

static TAB_NUM t_lambda_251[] = {
  2, // locals
  0, // parameters
  // range(str s -1))
  var_range, 3, var_1176_18_str, var_1178_1_s, minus_num_1, 1, LOCAL(1),
  // append(buf range(str s -1))
  var_append, 2, var_1177_1_buf, LOCAL(1), 1, LOCAL(2),
  //  append(buf range(str s -1))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1202, 23),
  POS(1202, 12),
  POS(1202, 11)
};

static TAB_NUM t_lambda_252[] = {
  0, // locals
  0, // parameters
  //  buf
  LET, 1, var_1177_1_buf, TAIL_CALL,
  POS(1203, 11)
};

static int key_value_pair_201_1_arguments[] = {
  -chr_95, -string_12
};

static int key_value_pair_337_21_arguments[] = {
  -chr_47, -string_28
};

static int sequence_688_1_arguments[] = {
  -str_stdassign, -str_assign
};

static int key_value_pair_920_19_arguments[] = {
  -chr_46, -string_39
};

static int key_value_pair_961_1_arguments[] = {
  -chr_46, -string_42
};

static int key_value_pair_962_1_arguments[] = {
  -chr_47, -string_42
};

static int key_value_pair_963_1_arguments[] = {
  -string_11, -string_28
};

static int key_value_pair_964_1_arguments[] = {
  -chr_45, -string_28
};

static int key_value_pair_1081_47_arguments[] = {
  -string_28, -string_11
};

static int key_value_pair_1156_1_arguments[] = {
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
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_139}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_140}},
  {FLT_STRING_8, 33, {.str_8 = "Last statement is not a tail call"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_141}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_self_is_an_io_call}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_142}},
  {FLT_STRING_8, 12, {.str_8 = "IO_TAIL_CALL"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_143}},
  {FLT_STRING_8, 8, {.str_8 = "IO_CALL("}},
  {FLT_STRING_8, 1, {.str_8 = ")"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_144}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_145}},
  {FLT_STRING_8, 9, {.str_8 = "TAIL_CALL"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_146}},
  {FLT_STRING_8, 5, {.str_8 = "  // "}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_147}},
  {FLT_STRING_8, 11, {.str_8 = "std::assign"}},
  {FLT_STRING_8, 6, {.str_8 = "assign"}},
  {FLT_SEQUENCE, 2, {.arguments = sequence_688_1_arguments}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_148}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_149}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_150}},
  {FLT_STRING_8, 49, {.str_8 = "Return statement not allowed within function body"}},
  {FLT_STRING_8, 7, {.str_8 = "  LET, "}},
  {FLT_STRING_8, 18, {.str_8 = "_assign_attributes"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_assign_attributes}},
  {FLT_STRING_8, 8, {.str_8 = "  LET, -"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_151}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_152}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_153}},
  {FLT_STRING_8, 21, {.str_8 = "  LET, 0, TAIL_CALL,\012"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_154}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_155}},
  {FLT_STRING_8, 8, {.str_8 = "  LET, 1"}},
  {FLT_STRING_8, 5, {.str_8 = ", 1, "}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__node___add_source_positions}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__statement___add_source_positions}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_get_source_position}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_source_group_is_defined}},
  {FLT_STRING_8, 4, {.str_8 = "POS("}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_156}},
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
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_157}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_158}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_159}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_CONSTANT}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_160}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_LOCAL}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_161}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_162}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_163}},
  {FLT_STRING_8, 5, {.str_8 = "value"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_get_literal}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__node___get_index}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__definition___get_index}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_164}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_165}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parameter_get_index}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_166}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_167}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__statement___get_index}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_168}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_169}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_170}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_171}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_172}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__numeric_literal___add_literal}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__character_sequence___add_literal}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_173}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_174}},
  {FLT_POSITIVE_INT64, 0, {.value = 16}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_175}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_176}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_177}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_178}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_179}},
  {FLT_CHARACTER, 0, {.value = 32}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_180}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_181}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_182}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_mangled_is_empty}},
  {FLT_STRING_8, 6, {.str_8 = "string"}},
  {FLT_STRING_8, 7, {.str_8 = "string_"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_183}},
  {FLT_STRING_8, 4, {.str_8 = "str_"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_184}},
  {FLT_STRING_8, 1, {.str_8 = "_"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_185}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_add_mangled}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__unique___add_literal}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__statement___add_literal}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__body___add_literal}},
  {FLT_STRING_8, 2, {.str_8 = "->"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_186}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_187}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_188}},
  {FLT_CHARACTER, 0, {.value = 36}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_189}},
  {FLT_POSITIVE_INT64, 0, {.value = 2}},
  {FLT_STRING_8, 5, {.str_8 = "func_"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_190}},
  {FLT_CHARACTER, 0, {.value = 46}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_920_19_arguments}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_add_lambda}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_name_is_empty}},
  {FLT_STRING_8, 6, {.str_8 = "lambda"}},
  {FLT_STRING_8, 7, {.str_8 = "lambda_"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_191}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_add_function}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_192}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_193}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_2_add_mangled}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_mangle_versioned_identifier}},
  {FLT_STRING_8, 1, {.str_8 = "-"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_194}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_195}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_196}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_197}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_replace}},
  {FLT_STRING_8, 3, {.str_8 = "___"}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_961_1_arguments}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_962_1_arguments}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_963_1_arguments}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_964_1_arguments}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_check_mangling}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_198}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_199}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_remove_trailing_underscores_and_digits}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_200}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_201}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_202}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_203}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_204}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_remove_non_identifier_characters}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_205}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_206}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_207}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_208}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_209}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_210}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_211}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_212}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_213}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__statement___to_compound}},
  {FLT_STRING_8, 12, {.str_8 = "\012static int "}},
  {FLT_STRING_8, 19, {.str_8 = "_arguments[] = {\012  "}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_to_negative_index}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__numeric_literal___to_table_entry}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_214}},
  {FLT_STRING_8, 31, {.str_8 = "  {FLT_REAL, 0, {.real_value = "}},
  {FLT_STRING_8, 4, {.str_8 = "}},\012"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_215}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_216}},
  {FLT_STRING_8, 4, {.str_8 = "NEGA"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_217}},
  {FLT_STRING_8, 4, {.str_8 = "POSI"}},
  {FLT_STRING_8, 2, {.str_8 = "0b"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_218}},
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
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_219}},
  {FLT_STRING_8, 18, {.str_8 = "  {FLT_STRING_32, "}},
  {FLT_STRING_8, 15, {.str_8 = ", {.str_32 = U\042"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__statement___to_table_entry}},
  {FLT_STRING_8, 16, {.str_8 = ", {.arguments = "}},
  {FLT_STRING_8, 14, {.str_8 = "_arguments}},\012"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__unique___to_table_entry}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_1081_47_arguments}},
  {FLT_STRING_8, 29, {.str_8 = "  {FLT_UNIQUE, 0, {.str_8 = \042"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__body___to_table_entry}},
  {FLT_STRING_8, 32, {.str_8 = "  {FLT_FUNCTION, 0, {.tfunc = t_"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_is_local_or_constant}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_220}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_221}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_collect_types}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_222}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_223}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_224}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_225}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_226}},
  {FLT_NEGATIVE_INT64, 0, {.value = 2}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_227}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_TYPE_FUNCTION}},
  {FLT_STRING_8, 13, {.str_8 = "TYPE_FUNCTION"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_ATTRIBUTE_VALUE_PAIR}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_METHOD_VALUE_PAIR}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_add_method}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_228}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_229}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_230}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_231}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_add}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_232}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky__mangle_identifier}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_1156_1_arguments}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_to_c_string}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_233}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_234}},
  {FLT_CHARACTER, 0, {.value = 126}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_235}},
  {FLT_CHARACTER, 0, {.value = 34}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_236}},
  {FLT_CHARACTER, 0, {.value = 92}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_237}},
  {FLT_POSITIVE_INT64, 0, {.value = 3}},
  {FLT_STRING_8, 1, {.str_8 = "\134"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_238}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_239}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_240}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_to_c_string_32}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_241}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_242}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_243}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_244}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_245}},
  {FLT_POSITIVE_INT64, 0, {.value = 0xff}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_246}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_247}},
  {FLT_POSITIVE_INT64, 0, {.value = 0xffff}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_248}},
  {FLT_POSITIVE_INT64, 0, {.value = 4}},
  {FLT_STRING_8, 2, {.str_8 = "\134u"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_249}},
  {FLT_POSITIVE_INT64, 0, {.value = 8}},
  {FLT_STRING_8, 2, {.str_8 = "\134U"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_250}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_251}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_252}}
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
    FOT_UNKNOWN, 0, 0,
    "mangle_identifier\000", NULL,
    {.position = POS(192, 13)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "193_1_kind\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "to_string\000", NULL,
    {.position = POS(200, 27)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "truncate_until\000", NULL,
    {.position = POS(200, 22)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "to_lower_case\000", NULL,
    {.position = POS(200, 60)}
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
    "dump\000debug", NULL,
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
    "exit\000debug", NULL,
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
    "661_1_output_arguments\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_a_dummy_definition\000", NULL,
    {.position = POS(662, 45)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "664_1_input_count\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "665_1_output_count\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "666_1_is_a_tail_call\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_an_io_call\000", NULL,
    {.position = POS(669, 12)}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "to_separated_index\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "679_1_inputs\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "680_1_outputs\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "source_position_of\000", NULL,
    {.position = POS(684, 14)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "minus\000std", NULL,
    {.position = POS(699, 18)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "701_1_statement\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "722_23_node\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "723_1_source_group\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "source_group_of\000", NULL,
    {.position = POS(723, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "line_no_of\000", NULL,
    {.position = POS(728, 16)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "inline_attribute_value_pair\000funky_types", funky_types__inline_attribute_value_pair__attributes,
    {.position = POS(737, 1)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "expression_of\000", NULL,
    {.position = POS(738, 35)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "inline_method_value_pair\000funky_types", funky_types__inline_method_value_pair__attributes,
    {.position = POS(740, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "attribute_value_pair\000funky_types", funky_types__attribute_value_pair__attributes,
    {.position = POS(743, 1)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "argument_of\000", NULL,
    {.position = POS(744, 35)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "method_value_pair\000funky_types", funky_types__method_value_pair__attributes,
    {.position = POS(746, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "type_function\000funky_types", funky_types__type_function__attributes,
    {.position = POS(749, 1)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "print\000debug", NULL,
    {.position = POS(765, 3)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "functor\000funky_types", funky_types__functor__attributes,
    {.position = POS(769, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "redefinition\000funky_types", funky_types__redefinition__attributes,
    {.position = POS(771, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "update\000funky_types", funky_types__update__attributes,
    {.position = POS(772, 1)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "774_17_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "777_1_info\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "784_1_identifier\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "785_23_kind\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "785_29_value\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 3,
    "numeric_literal\000funky_types", funky_types__numeric_literal__attributes,
    {.position = POS(804, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "character_literal\000funky_types", funky_types__character_literal__attributes,
    {.position = POS(806, 1)}
  },
  {
    FOT_UNKNOWN, 0, 3,
    "character_sequence\000funky_types", funky_types__character_sequence__attributes,
    {.position = POS(808, 1)}
  },
  {
    FOT_UNKNOWN, 0, 3,
    "unique\000funky_types", funky_types__unique__attributes,
    {.position = POS(810, 1)}
  },
  {
    FOT_UNKNOWN, 0, 3,
    "body\000funky_types", funky_types__body__attributes,
    {.position = POS(812, 1)}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "get_index\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "824_1_identifier\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "834_1_name\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "840_36_node\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "841_1_identifier\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "846_1_argument\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "key_of\000funky", NULL,
    {.position = POS(855, 27)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "858_47_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "859_1_mangled\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "characters_of\000", NULL,
    {.position = POS(860, 12)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "861_3_chr\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "break\000", NULL,
    {.position = POS(863, 37)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_a_letter\000", NULL,
    {.position = POS(864, 16)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_a_digit\000", NULL,
    {.position = POS(864, 35)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "push\000", NULL,
    {.position = POS(865, 11)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "879_16_n\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "mangle_position\000", NULL,
    {.position = POS(898, 33)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "901_33_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "905_1_text\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "without_suffix\000", NULL,
    {.position = POS(906, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "trim_right\000", NULL,
    {.position = POS(908, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "924_14_name\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "932_16_name\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "933_16_n\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "from\000", NULL,
    {.position = POS(940, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "string\000", NULL,
    {.position = POS(937, 11)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "947_31_name\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "948_1_rest\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "behind\000", NULL,
    {.position = POS(948, 11)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "967_1_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "975_42_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "976_1_n\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "loop\000", NULL,
    {.position = POS(977, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "989_1_buf\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "991_3_chr\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "concatenate\000", NULL,
    {.position = POS(1017, 5)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1034_1_digits\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "digits_of\000", NULL,
    {.position = POS(1034, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "to_integer\000", NULL,
    {.position = POS(1046, 27)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "numeric_character_literal\000funky_types", funky_types__numeric_character_literal__attributes,
    {.position = POS(1051, 1)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1057_1_characters\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1058_1_length\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_an_octet_string\000", NULL,
    {.position = POS(1060, 16)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "to_upper_case\000", NULL,
    {.position = POS(1073, 53)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "replace_first\000", NULL,
    {.position = POS(1081, 15)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1094_24_kind\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1098_1_types\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_insert_order_table\000", NULL,
    {.position = POS(1098, 10)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1100_3_statement\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1103_1_arguments\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1104_1_functor_name\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1112_3_argument\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "ATTRIBUTE_VALUE_PAIR\000", NULL,
    {.position = POS(1116, 21)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "METHOD_VALUE_PAIR\000", NULL,
    {.position = POS(1118, 21)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1124_1_value\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1128_1_identifier\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1129_29_constant_value\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "default_value\000", NULL,
    {.position = POS(1139, 30)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "tuple\000", NULL,
    {.position = POS(1140, 47)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "mangle_identifier\000funky", NULL,
    {.const_idx = -func_funky__mangle_identifier}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1158_15_str\000", NULL
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
    "oct\000", NULL,
    {.position = POS(1166, 36)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "pad_left\000", NULL,
    {.position = POS(1166, 27)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1176_18_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1177_1_buf\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1178_1_s\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1180_3_idx\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1180_7_chr\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1184_1_val\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "hex\000", NULL,
    {.position = POS(1193, 36)}
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
  550, // number of constants
  282, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  constants_table,
  variables_table,
};
