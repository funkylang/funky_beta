#include <stddef.h>
#include <stdint.h>

#include "runtime/common.h"
#include "runtime/builtins.h"
#include "runtime/fko.h"
#include "runtime/memory.h"

enum {
  func_std_types__string___to_string = -1,
  func_std__create_string = -2,
  lambda_1 = -3,
  string_1 = -4,
  lambda_2 = -5,
  func_std__string = -6,
  func_std_types__string___put = -7,
  func_std_types__string___dup = -8,
  num_0 = -9,
  lambda_3 = -10,
  num_1 = -11,
  lambda_4 = -12,
  lambda_5 = -13,
  num_2 = -14,
  lambda_6 = -15,
  lambda_7 = -16,
  func_std__pad_left = -17,
  string_2 = -18,
  lambda_8 = -19,
  lambda_9 = -20,
  func_std__pad_right = -21,
  lambda_10 = -22,
  lambda_11 = -23,
  string_3 = -24,
  func_std__spaces = -25,
  num_80 = -26,
  lambda_12 = -27,
  lambda_13 = -28,
  string_4 = -29,
  func_std__tabs_and_spaces = -30,
  lambda_14 = -31,
  num_3 = -32,
  num_10 = -33,
  num_7 = -34,
  num_9 = -35,
  lambda_15 = -36,
  string_5 = -37,
  string_6 = -38,
  func_std__with_tabs = -39,
  lambda_loop = -40,
  lambda_16 = -41,
  chr_32 = -42,
  lambda_17 = -43,
  lambda_18 = -44,
  num_8 = -45,
  lambda_19 = -46,
  lambda_20 = -47,
  lambda_21 = -48,
  lambda_22 = -49,
  lambda_23 = -50,
  lambda_24 = -51,
  lambda_25 = -52,
  minus_num_1 = -53,
  func_skip_line = -54,
  lambda_26 = -55,
  lambda_27 = -56,
  chr_10 = -57,
  lambda_28 = -58,
  lambda_29 = -59,
  func_std_types__string___match = -60,
  lambda_30 = -61,
  lambda_31 = -62,
  lambda_32 = -63,
  lambda_33 = -64,
  func_std_types__string___search = -65,
  lambda_34 = -66,
  lambda_35 = -67,
  func_search_forwards = -68,
  lambda_36 = -69,
  lambda_37 = -70,
  lambda_38 = -71,
  lambda_39 = -72,
  lambda_40 = -73,
  lambda_41 = -74,
  func_search_backwards = -75,
  lambda_42 = -76,
  lambda_43 = -77,
  lambda_44 = -78,
  lambda_45 = -79,
  lambda_46 = -80,
  lambda_47 = -81,
  func_std_types__string___before = -82,
  lambda_48 = -83,
  lambda_49 = -84,
  func_std_types__string___truncate_from = -85,
  lambda_50 = -86,
  lambda_51 = -87,
  func_std_types__string___behind = -88,
  lambda_52 = -89,
  lambda_53 = -90,
  func_std_types__string___truncate_until = -91,
  lambda_54 = -92,
  lambda_55 = -93,
  func_std_types__string___from = -94,
  lambda_56 = -95,
  lambda_57 = -96,
  func_std_types__string___truncate_before = -97,
  lambda_58 = -98,
  lambda_59 = -99,
  func_std_types__string___until = -100,
  lambda_60 = -101,
  lambda_61 = -102,
  func_std_types__string___truncate_behind = -103,
  lambda_62 = -104,
  lambda_63 = -105,
  func_std_types__string___between = -106,
  func_std_types__string___has_prefix = -107,
  func_std_types__string___has_suffix = -108,
  lambda_64 = -109,
  lambda_65 = -110,
  lambda_66 = -111,
  lambda_67 = -112,
  func_std_types__string___without_prefix = -113,
  lambda_68 = -114,
  lambda_69 = -115,
  func_std_types__string___without_suffix = -116,
  lambda_suffix_is_a_character = -117,
  lambda_70 = -118,
  lambda_71 = -119,
  minus_num_2 = -120,
  lambda_72 = -121,
  lambda_73 = -122,
  lambda_74 = -123,
  lambda_75 = -124,
  lambda_76 = -125,
  func_std_types__string___contains = -126,
  func_std__split = -127,
  lambda_77 = -128,
  lambda_78 = -129,
  lambda_2_loop = -130,
  lambda_pos_is_defined = -131,
  lambda_79 = -132,
  lambda_80 = -133,
  lambda_81 = -134,
  func_std__join = -135,
  lambda_82 = -136,
  func_std__trim = -137,
  lambda_3_loop = -138,
  lambda_83 = -139,
  lambda_84 = -140,
  lambda_85 = -141,
  lambda_4_loop = -142,
  lambda_86 = -143,
  lambda_87 = -144,
  lambda_88 = -145,
  func_std__trim_left = -146,
  lambda_5_loop = -147,
  lambda_89 = -148,
  lambda_90 = -149,
  lambda_91 = -150,
  func_std__trim_right = -151,
  lambda_6_loop = -152,
  lambda_92 = -153,
  lambda_93 = -154,
  lambda_94 = -155,
  func_std__normalize = -156,
  lambda_7_loop = -157,
  lambda_95 = -158,
  lambda_96 = -159,
  lambda_97 = -160,
  lambda_98 = -161,
  lambda_99 = -162,
  lambda_100 = -163,
  lambda_101 = -164,
  lambda_102 = -165,
  lambda_103 = -166,
  func_std__parse_integer = -167,
  func_maybe_negated = -168,
  lambda_104 = -169,
  lambda_105 = -170,
  func_partial_match = -171,
  lambda_106 = -172,
  lambda_107 = -173,
  func_exhausted = -174,
  lambda_108 = -175,
  lambda_109 = -176,
  chr_45 = -177,
  lambda_110 = -178,
  lambda_111 = -179,
  lambda_112 = -180,
  str_0b = -181,
  lambda_113 = -182,
  lambda_114 = -183,
  chr_48 = -184,
  chr_49 = -185,
  value_range_1301_1 = -186,
  lambda_115 = -187,
  lambda_116 = -188,
  lambda_117 = -189,
  str_0o = -190,
  lambda_118 = -191,
  lambda_119 = -192,
  chr_55 = -193,
  value_range_1312_1 = -194,
  lambda_120 = -195,
  lambda_121 = -196,
  lambda_122 = -197,
  str_0x = -198,
  lambda_123 = -199,
  lambda_124 = -200,
  chr_57 = -201,
  value_range_1323_1 = -202,
  chr_97 = -203,
  chr_102 = -204,
  value_range_1326_1 = -205,
  chr_65 = -206,
  chr_70 = -207,
  value_range_1329_1 = -208,
  lambda_125 = -209,
  num_4 = -210,
  lambda_a__f = -211,
  lambda_A__F = -212,
  lambda_126 = -213,
  lambda_127 = -214,
  lambda_128 = -215,
  lambda_129 = -216,
  lambda_130 = -217,
  lambda_131 = -218,
  func_std__parse_number = -219,
  lambda_132 = -220,
  lambda_133 = -221,
  lambda_134 = -222,
  chr_43 = -223,
  lambda_135 = -224,
  lambda_136 = -225,
  lambda_137 = -226,
  chr_98 = -227,
  lambda_b = -228,
  chr_111 = -229,
  lambda_o = -230,
  chr_120 = -231,
  lambda_x = -232,
  func_parse = -233,
  lambda_skip_one_ore_more_digits = -234,
  lambda_138 = -235,
  chr_101 = -236,
  chr_69 = -237,
  sequence_1408_1 = -238,
  chr_46 = -239,
  lambda_139 = -240,
  lambda_2_skip_one_ore_more_digits = -241,
  lambda_140 = -242,
  func_skip_one_ore_more_digits = -243,
  lambda_141 = -244,
  lambda_142 = -245,
  lambda_143 = -246,
  lambda_144 = -247,
  lambda_145 = -248,
  lambda_8_loop = -249,
  lambda_146 = -250,
  lambda_147 = -251,
  func_handle_exponent = -252,
  lambda_148 = -253,
  lambda_149 = -254,
  lambda_150 = -255,
  lambda_151 = -256,
  func_return_integer = -257,
  func_return_real = -258,
  func_parse_binary = -259,
  lambda_152 = -260,
  lambda_153 = -261,
  lambda_154 = -262,
  lambda_155 = -263,
  lambda_156 = -264,
  lambda_9_loop = -265,
  lambda_157 = -266,
  lambda_158 = -267,
  lambda_159 = -268,
  lambda_160 = -269,
  lambda_161 = -270,
  func_parse_octal = -271,
  lambda_162 = -272,
  lambda_163 = -273,
  lambda_164 = -274,
  lambda_165 = -275,
  lambda_166 = -276,
  lambda_10_loop = -277,
  lambda_167 = -278,
  lambda_168 = -279,
  lambda_169 = -280,
  lambda_170 = -281,
  lambda_171 = -282,
  func_std__parse_hex = -283,
  lambda_172 = -284,
  lambda_173 = -285,
  lambda_174 = -286,
  lambda_175 = -287,
  lambda_176 = -288,
  lambda_177 = -289,
  lambda_178 = -290,
  lambda_179 = -291,
  lambda_180 = -292,
  lambda_181 = -293,
  lambda_182 = -294,
  lambda_183 = -295,
  lambda_184 = -296,
  func_handle_more_digits = -297,
  lambda_11_loop = -298,
  lambda_185 = -299,
  lambda_186 = -300,
  lambda_187 = -301,
  lambda_188 = -302,
  lambda_189 = -303,
  lambda_190 = -304,
  lambda_191 = -305,
  lambda_192 = -306,
  lambda_193 = -307,
  lambda_194 = -308,
  lambda_195 = -309,
  lambda_196 = -310,
  lambda_197 = -311,
  func_std_types__string___to_integer = -312,
  lambda_198 = -313,
  lambda_199 = -314,
  func_std_types__string___to_number = -315,
  lambda_200 = -316,
  lambda_201 = -317,
  func_std__map_characters = -318,
  lambda_202 = -319,
  lambda_203 = -320,
  lambda_204 = -321,
  lambda_205 = -322,
  lambda_206 = -323,
  lambda_207 = -324,
  lambda_208 = -325,
  lambda_209 = -326,
  lambda_210 = -327,
  lambda_211 = -328,
  lambda_212 = -329,
  lambda_213 = -330,
  func_std_types__string___to_upper_case = -331,
  func_std_types__string___to_lower_case = -332,
  func_std_types__string___to_title_case = -333,
  lambda_214 = -334,
  lambda_215 = -335,
  lambda_216 = -336,
  lambda_217 = -337,
  func_std_types__string___to_sentence_case = -338,
  lambda_218 = -339,
  lambda_219 = -340,
  lambda_220 = -341,
  lambda_221 = -342,
  func_std__delete_all = -343,
  func_delete_all = -344,
  lambda_222 = -345,
  lambda_223 = -346,
  lambda_224 = -347,
  lambda_225 = -348,
  lambda_226 = -349,
  func_std__replace_all = -350,
  func_replace_all = -351,
  lambda_227 = -352,
  lambda_228 = -353,
  lambda_229 = -354,
  lambda_230 = -355,
  lambda_replacement_is_a_string = -356,
  lambda_231 = -357,
  lambda_232 = -358,
  func_std__replace_first = -359,
  func_replace_first = -360,
  lambda_233 = -361,
  lambda_234 = -362,
  lambda_235 = -363,
  lambda_236 = -364,
  lambda_237 = -365,
  lambda_238 = -366,
  func_std__count_occurrences = -367,
  func_search_next = -368,
  lambda_239 = -369,
  lambda_240 = -370,
  lambda_n_is_defined = -371,
  lambda_241 = -372,
  num_300 = -373,
  func_std__partition = -374,
  func_partition = -375,
  lambda_242 = -376,
  lambda_243 = -377,
  lambda_244 = -378,
  lambda_245 = -379,
  lambda_ls_is_defined = -380,
  lambda_246 = -381,
  lambda_247 = -382,
  lambda_248 = -383,
  lambda_249 = -384,
  lambda_250 = -385,
  lambda_251 = -386,
  lambda_12_loop = -387,
  lambda_252 = -388,
  lambda_253 = -389,
  func_std__split_into_lines = -390,
  lambda_13_loop = -391,
  lambda_254 = -392,
  lambda_255 = -393,
  lambda_256 = -394,
  lambda_257 = -395,
  lambda_258 = -396,
  lambda_259 = -397,
  func_std__split_into_indented_lines = -398,
  func_split = -399,
  lambda_260 = -400,
  lambda_261 = -401,
  lambda_262 = -402,
  lambda_263 = -403,
  lambda_264 = -404,
  lambda_265 = -405,
  lambda_266 = -406,
  lambda_2_ls_is_defined = -407,
  lambda_267 = -408,
  lambda_268 = -409,
  lambda_269 = -410,
  lambda_270 = -411,
  lambda_14_loop = -412,
  lambda_271 = -413,
  lambda_272 = -414,
  func_create_line = -415,
  lambda_15_loop = -416,
  chr_9 = -417,
  lambda_273 = -418,
  lambda_274 = -419,
  lambda_275 = -420,
  lambda_276 = -421,
  string_7 = -422,
  lambda_277 = -423,
  lambda_278 = -424,
  num_20 = -425,
  num_9999 = -426,
  func_indent_of = -427,
  lambda_279 = -428,
  lambda_280 = -429,
  func_std__split_into_groups = -430,
  lambda_16_loop = -431,
  lambda_281 = -432,
  lambda_indent_is_defined = -433,
  lambda_282 = -434,
  lambda_283 = -435,
  func_2_split = -436,
  lambda_284 = -437,
  lambda_285 = -438,
  lambda_286 = -439,
  lambda_287 = -440,
  lambda_288 = -441,
  lambda_289 = -442,
  lambda_290 = -443,
  lambda_291 = -444,
  lambda_292 = -445,
  lambda_293 = -446,
  lambda_294 = -447,
  lambda_gs_is_defined = -448,
  lambda_17_loop = -449,
  lambda_295 = -450,
  lambda_296 = -451,
  lambda_297 = -452,
  lambda_298 = -453,
  lambda_299 = -454,
  lambda_300 = -455,
  lambda_301 = -456,
  lambda_302 = -457,
  func_add_groups = -458,
  lambda_303 = -459,
  lambda_304 = -460,
  lambda_305 = -461,
  lambda_306 = -462,
  func_reduce_minimum_indent_and_next = -463,
  lambda_307 = -464,
  lambda_308 = -465,
  func_start_new_fragment_and_next = -466,
  func_std__wrap_words = -467,
  lambda_18_loop = -468,
  lambda_309 = -469,
  lambda_310 = -470,
  lambda_311 = -471,
  lambda_312 = -472,
  lambda_313 = -473,
  lambda_314 = -474,
  lambda_315 = -475,
  lambda_316 = -476,
  lambda_317 = -477,
  lambda_b_is_defined = -478,
  lambda_318 = -479,
  func_std_types__string___serialize = -480,
  string_8 = -481,
  lambda_319 = -482,
  lambda_320 = -483,
  chr_126 = -484,
  lambda_321 = -485,
  chr_34 = -486,
  lambda_322 = -487,
  chr_64 = -488,
  lambda_323 = -489,
  string_9 = -490,
  string_10 = -491,
  lambda_324 = -492,
  string_11 = -493,
  lambda_325 = -494,
  lambda_326 = -495,
  func_std__indented = -496,
  lambda_19_loop = -497,
  lambda_327 = -498,
  lambda_328 = -499,
  lambda_329 = -500,
  lambda_330 = -501,
  lambda_331 = -502,
  lambda_332 = -503,
  lambda_333 = -504,
  lambda_334 = -505,
  lambda_335 = -506,
  func_skip_indent = -507,
  lambda_336 = -508,
  lambda_337 = -509,
  lambda_338 = -510,
  func_skip_spaces = -511,
  lambda_339 = -512,
  lambda_340 = -513,
  lambda_341 = -514,
  uni_LEFT = -515,
  uni_RIGHT = -516,
  uni_CENTER = -517,
  func_std__format = -518,
  lambda_20_loop = -519,
  lambda_342 = -520,
  lambda_343 = -521,
  chr_37 = -522,
  lambda_344 = -523,
  lambda_345 = -524,
  lambda_346 = -525,
  chr_108 = -526,
  lambda_l = -527,
  chr_114 = -528,
  lambda_r = -529,
  chr_99 = -530,
  lambda_c = -531,
  lambda_347 = -532,
  lambda_348 = -533,
  lambda_349 = -534,
  lambda_350 = -535,
  lambda_351 = -536,
  lambda_352 = -537,
  lambda_353 = -538,
  lambda_354 = -539,
  lambda_355 = -540,
  lambda_356 = -541,
  lambda_357 = -542,
  lambda_358 = -543,
  lambda_359 = -544,
  lambda_360 = -545,
  lambda_361 = -546,
  lambda_362 = -547,
  lambda_363 = -548,
  lambda_364 = -549,
  lambda_365 = -550,
  lambda_366 = -551,
  lambda_367 = -552,
  lambda_368 = -553,
  lambda_369 = -554,
  chr_92 = -555,
  lambda_370 = -556,
  lambda_371 = -557,
  lambda_372 = -558,
  lambda_373 = -559,
  func_add_argument = -560,
  lambda_decimal_width_is_defined = -561,
  lambda_374 = -562,
  lambda_375 = -563,
  string_12 = -564,
  string_13 = -565,
  lambda_376 = -566,
  lambda_LEFT = -567,
  lambda_RIGHT = -568,
  func_real_to_string = -569,
  lambda_21_loop = -570,
  lambda_377 = -571,
  lambda_378 = -572,
  lambda_379 = -573,
  func_2_handle_exponent = -574,
  lambda_380 = -575,
  lambda_381 = -576,
  lambda_382 = -577,
  lambda_383 = -578,
  lambda_384 = -579,
  lambda_385 = -580,
  lambda_386 = -581,
  string_14 = -582,
  lambda_387 = -583
};

enum {
  var__START = FIRST_VAR-1,
  var_std__to_sentence_case, // attribute
  var_std__assign, // extern
  var_std__is_a_string, // attribute
  var_std_types__object, // extern
  var_is_a_string, // extern polymorphic
  var_false, // extern
  var_std_types__string, // extern
  var_true, // extern
  var_std__is_an_octet_string, // attribute
  var_is_an_octet_string, // extern polymorphic
  var_std_types__octet_string, // extern
  var_to_string, // extern polymorphic
  var_std__create_string, // initialized
  var_90_0_arguments, // dynamic
  var_is_empty, // extern
  var_append, // extern
  var_map_reduce, // extern
  var_if, // extern
  var_std__string, // initialized
  var_create_string, // extern
  var_put, // extern polymorphic
  var_dup, // extern polymorphic
  var_151_0_self, // dynamic
  var_152_0_n, // dynamic
  var_std__shift_right, // extern
  var_159_1_str, // dynamic
  var_std__times, // extern
  var_std__equal, // extern
  var_string, // extern
  var_case, // extern
  var_std__pad_left, // initialized
  var_191_0_n, // dynamic
  var_192_0_pad, // dynamic
  var_194_1_text, // dynamic
  var_195_1_len, // dynamic
  var_length_of, // extern
  var_std__less, // extern
  var_std__minus, // extern
  var_std__plus, // extern
  var_div, // extern
  var_range, // extern
  var_std__pad_right, // initialized
  var_227_0_n, // dynamic
  var_228_0_pad, // dynamic
  var_230_1_text, // dynamic
  var_231_1_len, // dynamic
  var_std__spaces, // initialized
  var_250_0_n, // dynamic
  var_std__not, // extern
  var_std__tabs_and_spaces, // initialized
  var_267_0_n, // dynamic
  var_std__bit_and, // extern
  var_spaces, // extern
  var_std__with_tabs, // initialized
  var_287_0_text, // dynamic
  var_289_1_s, // dynamic
  var_290_1_n, // dynamic
  var_291_1_i, // dynamic
  var_292_1_output, // dynamic
  var_293_1_count, // dynamic
  var_next, // extern
  var_305_1_tab_count, // dynamic
  var_std__shift_left, // extern
  var_loop, // extern
  var_std__and, // extern
  var_break, // extern
  var_match, // extern polymorphic
  var_350_0_self, // dynamic
  var_351_0_stream, // dynamic
  var_353_1_len, // dynamic
  var_undefined, // extern
  var_search, // extern polymorphic
  var_380_0_self, // dynamic
  var_381_0_stream, // dynamic
  var_382_0_nth, // dynamic
  var_384_1_i, // dynamic
  var_385_1_length, // dynamic
  var_386_1_offset, // dynamic
  var_387_1_n, // dynamic
  var_dec, // extern
  var_plus, // extern
  var_inc, // extern
  var_minus, // extern
  var_before, // extern polymorphic
  var_468_0_str, // dynamic
  var_472_8_pos, // dynamic
  var_is_defined, // extern
  var_truncate_from, // extern polymorphic
  var_518_0_str, // dynamic
  var_522_8_pos, // dynamic
  var_behind, // extern polymorphic
  var_566_0_str, // dynamic
  var_570_8_pos, // dynamic
  var_570_13_len, // dynamic
  var_truncate_until, // extern polymorphic
  var_615_0_str, // dynamic
  var_619_8_pos, // dynamic
  var_619_13_len, // dynamic
  var_from, // extern polymorphic
  var_664_0_str, // dynamic
  var_668_8_pos, // dynamic
  var_truncate_before, // extern polymorphic
  var_713_0_str, // dynamic
  var_717_8_pos, // dynamic
  var_until, // extern polymorphic
  var_761_0_str, // dynamic
  var_765_8_pos, // dynamic
  var_765_13_len, // dynamic
  var_truncate_behind, // extern polymorphic
  var_810_0_str, // dynamic
  var_814_8_pos, // dynamic
  var_814_13_len, // dynamic
  var_between, // extern polymorphic
  var_has_prefix, // extern polymorphic
  var_has_suffix, // extern polymorphic
  var_892_0_self, // dynamic
  var_893_0_suffix, // dynamic
  var_is_a_character, // extern
  var_899_1_len, // dynamic
  var_std__negate, // extern
  var_without_prefix, // extern polymorphic
  var_923_0_self, // dynamic
  var_926_1_n, // dynamic
  var_without_suffix, // extern polymorphic
  var_953_0_self, // dynamic
  var_954_0_suffix, // dynamic
  var_956_1_len, // dynamic
  var_964_1_slen, // dynamic
  var_contains, // extern polymorphic
  var_std__split, // initialized
  var_1022_0_self, // dynamic
  var_1023_0_separator, // dynamic
  var_empty_list, // extern
  var_1029_1_items, // dynamic
  var_1031_8_pos, // dynamic
  var_1031_13_len, // dynamic
  var_push, // extern
  var_std__join, // initialized
  var_1067_0_separator, // dynamic
  var_std__trim, // initialized
  var_1096_0_self, // dynamic
  var_1097_0_test, // dynamic
  var_is_a_whitespace_character, // extern
  var_1099_1_s, // dynamic
  var_1100_1_e, // dynamic
  var_std__trim_left, // initialized
  var_1136_0_self, // dynamic
  var_1137_0_test, // dynamic
  var_1139_1_s, // dynamic
  var_1140_1_e, // dynamic
  var_std__trim_right, // initialized
  var_1170_0_self, // dynamic
  var_1171_0_test, // dynamic
  var_1173_1_e, // dynamic
  var_std__normalize, // initialized
  var_1204_0_self, // dynamic
  var_1206_1_buf, // dynamic
  var_1207_1_e, // dynamic
  var_1208_1_i, // dynamic
  var_is_not_empty, // extern
  var_update_if, // extern
  var_1223_1_s, // dynamic
  var_std__parse_integer, // initialized
  var_1266_0_self, // dynamic
  var_1287_1_negate, // dynamic
  var_1293_1_value, // dynamic
  var_1274_17_idx, // dynamic
  var_1286_1_orig, // dynamic
  var_1298_3_idx, // dynamic
  var_1298_7_chr, // dynamic
  var_std__value_range, // extern
  var_for_each, // extern
  var_1310_3_idx, // dynamic
  var_1310_7_chr, // dynamic
  var_1321_3_idx, // dynamic
  var_1321_7_chr, // dynamic
  var_1337_3_idx, // dynamic
  var_1337_7_chr, // dynamic
  var_cond, // extern
  var_std__parse_number, // initialized
  var_1373_0_self, // dynamic
  var_1375_1_i, // dynamic
  var_1376_1_n, // dynamic
  var_1381_1_sign_chr, // dynamic
  var_std__or, // extern
  var_parse_hex, // extern
  var_std__sequence, // extern
  var_1411_28_cont, // dynamic
  var_1416_1_digit, // dynamic
  var_1427_1_next_digit, // dynamic
  var_1439_1_exp_sign_chr, // dynamic
  var_integer, // extern
  var_real, // extern
  var_1447_16_str, // dynamic
  var_1447_20_i, // dynamic
  var_1448_1_n, // dynamic
  var_1452_1_digit, // dynamic
  var_1457_1_value, // dynamic
  var_1464_1_next_digit, // dynamic
  var_1471_15_str, // dynamic
  var_1471_19_i, // dynamic
  var_1472_1_n, // dynamic
  var_1476_1_digit, // dynamic
  var_1481_1_value, // dynamic
  var_1488_1_next_digit, // dynamic
  var_std__parse_hex, // initialized
  var_1523_0_str, // dynamic
  var_1524_0_i, // dynamic
  var_1526_1_n, // dynamic
  var_1530_1_digit, // dynamic
  var_1540_22_value, // dynamic
  var_1547_1_next_digit, // dynamic
  var_to_integer, // extern polymorphic
  var_1596_21_value, // dynamic
  var_parse_integer, // extern
  var_to_number, // extern polymorphic
  var_1638_20_value, // dynamic
  var_parse_number, // extern
  var_std__map_characters, // initialized
  var_1665_0_self, // dynamic
  var_1666_0_function, // dynamic
  var_parameter_count_of, // extern
  var_1672_3_s, // dynamic
  var_1672_5_e, // dynamic
  var_1668_1_map, // dynamic
  var_1685_3_s, // dynamic
  var_1685_5_e, // dynamic
  var_to_upper_case, // extern polymorphic
  var_map_characters, // extern
  var_to_lower_case, // extern polymorphic
  var_to_title_case, // extern polymorphic
  var_1762_0_self, // dynamic
  var_1764_22_idx, // dynamic
  var_1764_26_chr, // dynamic
  var_is_a_letter_character, // extern
  var_to_sentence_case, // extern polymorphic
  var_1788_0_self, // dynamic
  var_1790_22_idx, // dynamic
  var_1790_26_chr, // dynamic
  var_std__delete_all, // initialized
  var_1818_0_expressions, // dynamic
  var_1820_14_txt, // dynamic
  var_1834_1_new_text, // dynamic
  var_1827_1_len, // dynamic
  var_if_not, // extern
  var_std__replace_all, // initialized
  var_1859_0_args, // dynamic
  var_1861_15_txt, // dynamic
  var_1882_1_new_text, // dynamic
  var_1868_17_replacement, // dynamic
  var_1869_1_len, // dynamic
  var_std__replace_first, // initialized
  var_1907_0_args, // dynamic
  var_1909_17_txt, // dynamic
  var_1929_1_new_text, // dynamic
  var_1916_17_replacement, // dynamic
  var_1917_1_len, // dynamic
  var_update_if_not, // extern
  var_std__count_occurrences, // initialized
  var_1952_0_expr, // dynamic
  var_1954_15_txt, // dynamic
  var_1954_19_count, // dynamic
  var_1959_1_n, // dynamic
  var_std__partition, // initialized
  var_1993_0_text, // dynamic
  var_1994_0_separators, // dynamic
  var_1996_1_n, // dynamic
  var_1999_13_s, // dynamic
  var_1999_15_e, // dynamic
  var_2005_1_parts, // dynamic
  var_2006_1_ls, // dynamic
  var_2008_3_i, // dynamic
  var_equal, // extern
  var_any_of, // extern
  var_from_to, // extern
  var_std__split_into_lines, // initialized
  var_2073_25_text, // dynamic
  var_2074_1_lines, // dynamic
  var_2075_1_i, // dynamic
  var_2076_1_n, // dynamic
  var_2077_1_s, // dynamic
  var_std__split_into_indented_lines, // initialized
  var_2156_0_text, // dynamic
  var_2161_9_s, // dynamic
  var_2161_11_e, // dynamic
  var_2167_1_lines, // dynamic
  var_2168_1_ls, // dynamic
  var_2174_3_i, // dynamic
  var_2195_15_s, // dynamic
  var_2195_17_e, // dynamic
  var_2196_1_indent, // dynamic
  var_2210_1_line_text, // dynamic
  var_tuple, // extern
  var_std__subgroups_of, // attribute with setter
  var_2221_13_line, // dynamic
  var_first, // extern
  var_std__split_into_groups, // initialized
  var_2278_0_lines, // dynamic
  var_2280_1_n, // dynamic
  var_2281_1_fv, // dynamic
  var_2285_1_indent, // dynamic
  var_2294_9_s, // dynamic
  var_2294_11_e, // dynamic
  var_2294_13_indent, // dynamic
  var_2294_20_gs, // dynamic
  var_2300_1_groups, // dynamic
  var_2301_1_minimum_indent, // dynamic
  var_2302_1_ge, // dynamic
  var_2304_3_i, // dynamic
  var_2305_1_current_indent, // dynamic
  var_2330_1_current_indent, // dynamic
  var_2343_14_l, // dynamic
  var_subgroups_of, // extern polymorphic
  var_2355_34_current_indent, // dynamic
  var_std__wrap_words, // initialized
  var_2395_0_text, // dynamic
  var_2396_0_width, // dynamic
  var_2398_1_wrapped_text, // dynamic
  var_2399_1_n, // dynamic
  var_2400_1_s, // dynamic
  var_2401_1_l, // dynamic
  var_2402_1_b, // dynamic
  var_2403_1_i, // dynamic
  var_2409_1_chr, // dynamic
  var_serialize, // extern polymorphic
  var_2471_0_self, // dynamic
  var_2472_0_indent, // dynamic
  var_2474_1_str, // dynamic
  var_2475_1_s, // dynamic
  var_2477_3_idx, // dynamic
  var_2477_7_chr, // dynamic
  var_tabs_and_spaces, // extern
  var_std__indented, // initialized
  var_2523_0_indent, // dynamic
  var_2524_0_text, // dynamic
  var_2526_1_indented_text, // dynamic
  var_2527_1_new_indent, // dynamic
  var_2528_1_i, // dynamic
  var_2529_1_n, // dynamic
  var_2542_1_s, // dynamic
  var_std__format, // initialized
  var_2612_0_template, // dynamic
  var_2613_0_arguments, // dynamic
  var_2615_1_output, // dynamic
  var_2616_1_arg_idx, // dynamic
  var_2617_1_i, // dynamic
  var_2618_1_n, // dynamic
  var_2624_1_chr, // dynamic
  var_2632_18_alignment, // dynamic
  var_2637_1_len_chr, // dynamic
  var_2642_1_width, // dynamic
  var_2650_1_fmt_chr, // dynamic
  var_2669_1_dw_chr, // dynamic
  var_2674_1_dw, // dynamic
  var_2682_1_fmt_chr, // dynamic
  var_2707_0_alignment, // dynamic
  var_2708_0_width, // dynamic
  var_2709_0_decimal_width, // dynamic
  var_2711_1_argument, // dynamic
  var_is_undefined, // extern
  var_pad_left, // extern
  var_pad_right, // extern
  var_truncate, // extern
  var_2734_1_str, // dynamic
  var_2735_1_n, // dynamic
  var_2736_1_i, // dynamic
  var_2754_1_exp, // dynamic
  var_2755_1_man, // dynamic
  var_2760_1_zeros, // dynamic
  var_empty_collection_of, // extern polymorphic
  var__END
};


static TAB_NUM t_func_std_types__string___to_string[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 69_0_self
  // -> self
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(71, 3)
};

static TAB_NUM t_func_std__create_string[] = {
  1, // locals
  1, // parameters
  var_90_0_arguments,
  // is_empty
  var_is_empty, 1, var_90_0_arguments, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1, lambda_2, TAIL_CALL,
  POS(93, 15),
  POS(92, 3)
};

static TAB_NUM t_lambda_1[] = {
  0, // locals
  0, // parameters
  //  ""
  LET, 1, string_1, TAIL_CALL,
  POS(94, 7)
};

static TAB_NUM t_lambda_2[] = {
  0, // locals
  0, // parameters
  // map_reduce arguments to_string append
  var_map_reduce, 3, var_90_0_arguments, var_to_string, var_append, TAIL_CALL,
  POS(95, 7)
};

static TAB_NUM t_func_std__string[] = {
  1, // locals
  -1, // parameters
  REST_PARAMETER, LOCAL(1), // 109_0_args
  // create_string args
  var_create_string, 1, LOCAL(1), TAIL_CALL,
  POS(111, 3)
};

static TAB_NUM t_func_std_types__string___put[] = {
  4, // locals
  2, // parameters
  LOCAL(3), // 126_0_self
  LOCAL(4), // 127_0_chr
  // to_string self)
  var_to_string, 1, LOCAL(4), 1, LOCAL(1),
  // append(chr.to_string self)
  var_append, 2, LOCAL(1), LOCAL(3), 1, LOCAL(2),
  // -> append(chr.to_string self)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(129, 17),
  POS(129, 6),
  POS(129, 3)
};

static TAB_NUM t_func_std_types__string___dup[] = {
  0, // locals
  2, // parameters
  var_151_0_self,
  var_152_0_n,
  // case n
  var_case, 6, var_152_0_n, num_0, lambda_3, num_1, lambda_4, lambda_5, TAIL_CALL,
  POS(154, 3)
};

static TAB_NUM t_lambda_3[] = {
  0, // locals
  0, // parameters
  //  ""
  LET, 1, string_1, TAIL_CALL,
  POS(155, 9)
};

static TAB_NUM t_lambda_4[] = {
  0, // locals
  0, // parameters
  //  self
  LET, 1, var_151_0_self, TAIL_CALL,
  POS(156, 9)
};

static TAB_NUM t_lambda_5[] = {
  3, // locals
  0, // parameters
  // $h n >> 1 # fails if <n> is not a positive integer
  var_std__shift_right, 2, var_152_0_n, num_1, 1, LOCAL(3),
  // $str dup(self h)
  var_dup, 2, var_151_0_self, LOCAL(3), 1, var_159_1_str,
  // 2*h == n:
  var_std__times, 2, num_2, LOCAL(3), 1, LOCAL(1),
  // 2*h == n:
  var_std__equal, 2, LOCAL(1), var_152_0_n, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_6, lambda_7, TAIL_CALL,
  POS(158, 7),
  POS(159, 7),
  POS(161, 9),
  POS(161, 9),
  POS(160, 7)
};

static TAB_NUM t_lambda_6[] = {
  0, // locals
  0, // parameters
  // string str str
  var_string, 2, var_159_1_str, var_159_1_str, TAIL_CALL,
  POS(162, 11)
};

static TAB_NUM t_lambda_7[] = {
  0, // locals
  0, // parameters
  // string str str self
  var_string, 3, var_159_1_str, var_159_1_str, var_151_0_self, TAIL_CALL,
  POS(164, 11)
};

static TAB_NUM t_func_std__pad_left[] = {
  2, // locals
  -3, // parameters
  MANDATORY_PARAMETER, LOCAL(2), // 190_0_expr
  MANDATORY_PARAMETER, var_191_0_n,
  string_2, var_192_0_pad,
  // $text expr.to_string
  var_to_string, 1, LOCAL(2), 1, var_194_1_text,
  // $len length_of(text)
  var_length_of, 1, var_194_1_text, 1, var_195_1_len,
  // len < n:
  var_std__less, 2, var_195_1_len, var_191_0_n, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_8, lambda_9, TAIL_CALL,
  POS(194, 3),
  POS(195, 3),
  POS(197, 5),
  POS(196, 3)
};

static TAB_NUM t_lambda_8[] = {
  8, // locals
  0, // parameters
  // $pad_len length_of(pad)
  var_length_of, 1, var_192_0_pad, 1, LOCAL(8),
  // n-len)+(pad_len-1) .div. pad_len) 1 n-len) text
  var_std__minus, 2, var_191_0_n, var_195_1_len, 1, LOCAL(1),
  // pad_len-1) .div. pad_len) 1 n-len) text
  var_std__minus, 2, LOCAL(8), num_1, 1, LOCAL(2),
  // n-len)+(pad_len-1) .div. pad_len) 1 n-len) text
  var_std__plus, 2, LOCAL(1), LOCAL(2), 1, LOCAL(3),
  // n-len)+(pad_len-1) .div. pad_len) 1 n-len) text
  var_div, 2, LOCAL(3), LOCAL(8), 1, LOCAL(4),
  // dup(pad (n-len)+(pad_len-1) .div. pad_len) 1 n-len) text
  var_dup, 2, var_192_0_pad, LOCAL(4), 1, LOCAL(5),
  // n-len) text
  var_std__minus, 2, var_191_0_n, var_195_1_len, 1, LOCAL(6),
  // range(dup(pad (n-len)+(pad_len-1) .div. pad_len) 1 n-len) text
  var_range, 3, LOCAL(5), num_1, LOCAL(6), 1, LOCAL(7),
  // string range(dup(pad (n-len)+(pad_len-1) .div. pad_len) 1 n-len) text
  var_string, 2, LOCAL(7), var_194_1_text, TAIL_CALL,
  POS(198, 7),
  POS(199, 29),
  POS(199, 37),
  POS(199, 29),
  POS(199, 29),
  POS(199, 20),
  POS(199, 65),
  POS(199, 14),
  POS(199, 7)
};

static TAB_NUM t_lambda_9[] = {
  0, // locals
  0, // parameters
  //  text
  LET, 1, var_194_1_text, TAIL_CALL,
  POS(200, 7)
};

static TAB_NUM t_func_std__pad_right[] = {
  2, // locals
  -3, // parameters
  MANDATORY_PARAMETER, LOCAL(2), // 226_0_expr
  MANDATORY_PARAMETER, var_227_0_n,
  string_2, var_228_0_pad,
  // $text expr.to_string
  var_to_string, 1, LOCAL(2), 1, var_230_1_text,
  // $len length_of(text)
  var_length_of, 1, var_230_1_text, 1, var_231_1_len,
  // len < n:
  var_std__less, 2, var_231_1_len, var_227_0_n, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_10, lambda_11, TAIL_CALL,
  POS(230, 3),
  POS(231, 3),
  POS(233, 5),
  POS(232, 3)
};

static TAB_NUM t_lambda_10[] = {
  8, // locals
  0, // parameters
  // $pad_len length_of(pad)
  var_length_of, 1, var_228_0_pad, 1, LOCAL(8),
  // n-len)+(pad_len-1) .div. pad_len) 1 n-len)
  var_std__minus, 2, var_227_0_n, var_231_1_len, 1, LOCAL(1),
  // pad_len-1) .div. pad_len) 1 n-len)
  var_std__minus, 2, LOCAL(8), num_1, 1, LOCAL(2),
  // n-len)+(pad_len-1) .div. pad_len) 1 n-len)
  var_std__plus, 2, LOCAL(1), LOCAL(2), 1, LOCAL(3),
  // n-len)+(pad_len-1) .div. pad_len) 1 n-len)
  var_div, 2, LOCAL(3), LOCAL(8), 1, LOCAL(4),
  // dup(pad (n-len)+(pad_len-1) .div. pad_len) 1 n-len)
  var_dup, 2, var_228_0_pad, LOCAL(4), 1, LOCAL(5),
  // n-len)
  var_std__minus, 2, var_227_0_n, var_231_1_len, 1, LOCAL(6),
  // range(dup(pad (n-len)+(pad_len-1) .div. pad_len) 1 n-len)
  var_range, 3, LOCAL(5), num_1, LOCAL(6), 1, LOCAL(7),
  // string text range(dup(pad (n-len)+(pad_len-1) .div. pad_len) 1 n-len)
  var_string, 2, var_230_1_text, LOCAL(7), TAIL_CALL,
  POS(234, 7),
  POS(235, 34),
  POS(235, 42),
  POS(235, 34),
  POS(235, 34),
  POS(235, 25),
  POS(235, 70),
  POS(235, 19),
  POS(235, 7)
};

static TAB_NUM t_lambda_11[] = {
  0, // locals
  0, // parameters
  //  text
  LET, 1, var_230_1_text, TAIL_CALL,
  POS(236, 7)
};

static TAB_NUM t_func_std__spaces[] = {
  2, // locals
  1, // parameters
  var_250_0_n,
  // 80
  var_std__less, 2, num_80, var_250_0_n, 1, LOCAL(1),
  // 80
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_12, lambda_13, TAIL_CALL,
  POS(253, 10),
  POS(253, 10),
  POS(252, 3)
};

static TAB_NUM t_lambda_12[] = {
  1, // locals
  0, // parameters
  // range(eighty_spaces 1 n)
  var_range, 3, string_3, num_1, var_250_0_n, 1, LOCAL(1),
  //  range(eighty_spaces 1 n)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(254, 8),
  POS(254, 7)
};

static TAB_NUM t_lambda_13[] = {
  1, // locals
  0, // parameters
  // dup(" " n)
  var_dup, 2, string_2, var_250_0_n, 1, LOCAL(1),
  //  dup(" " n)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(255, 8),
  POS(255, 7)
};

static TAB_NUM t_func_std__tabs_and_spaces[] = {
  1, // locals
  1, // parameters
  var_267_0_n,
  // n < 80
  var_std__less, 2, var_267_0_n, num_80, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_14, lambda_15, TAIL_CALL,
  POS(270, 5),
  POS(269, 3)
};

static TAB_NUM t_lambda_14[] = {
  5, // locals
  0, // parameters
  // n >> 3) 9+(n & 7))
  var_std__shift_right, 2, var_267_0_n, num_3, 1, LOCAL(1),
  // 10-(n >> 3) 9+(n & 7))
  var_std__minus, 2, num_10, LOCAL(1), 1, LOCAL(2),
  // n & 7))
  var_std__bit_and, 2, var_267_0_n, num_7, 1, LOCAL(3),
  // 9+(n & 7))
  var_std__plus, 2, num_9, LOCAL(3), 1, LOCAL(4),
  // range(nine_tabs_and_seven_spaces 10-(n >> 3) 9+(n & 7))
  var_range, 3, string_4, LOCAL(2), LOCAL(4), 1, LOCAL(5),
  //  range(nine_tabs_and_seven_spaces 10-(n >> 3) 9+(n & 7))
  LET, 1, LOCAL(5), TAIL_CALL,
  POS(271, 45),
  POS(271, 41),
  POS(271, 56),
  POS(271, 53),
  POS(271, 8),
  POS(271, 7)
};

static TAB_NUM t_lambda_15[] = {
  5, // locals
  0, // parameters
  // n >> 3) spaces(n & 7))
  var_std__shift_right, 2, var_267_0_n, num_3, 1, LOCAL(1),
  // dup("@ht;" n >> 3) spaces(n & 7))
  var_dup, 2, string_5, LOCAL(1), 1, LOCAL(2),
  // n & 7))
  var_std__bit_and, 2, var_267_0_n, num_7, 1, LOCAL(3),
  // spaces(n & 7))
  var_spaces, 1, LOCAL(3), 1, LOCAL(4),
  // string(dup("@ht;" n >> 3) spaces(n & 7))
  var_string, 2, LOCAL(2), LOCAL(4), 1, LOCAL(5),
  //  string(dup("@ht;" n >> 3) spaces(n & 7))
  LET, 1, LOCAL(5), TAIL_CALL,
  POS(272, 26),
  POS(272, 15),
  POS(272, 41),
  POS(272, 34),
  POS(272, 8),
  POS(272, 7)
};

static TAB_NUM t_func_std__with_tabs[] = {
  0, // locals
  1, // parameters
  var_287_0_text,
  // $s 1
  LET, 1, num_1, 1, var_289_1_s,
  // $n length_of(text)
  var_length_of, 1, var_287_0_text, 1, var_290_1_n,
  // $i 1
  LET, 1, num_1, 1, var_291_1_i,
  // $output ""
  LET, 1, string_1, 1, var_292_1_output,
  // $count 0
  LET, 1, num_0, 1, var_293_1_count,
  // loop:
  var_loop, 1, lambda_loop, TAIL_CALL,
  POS(289, 3),
  POS(290, 3),
  POS(291, 3),
  POS(292, 3),
  POS(293, 3),
  POS(294, 3)
};

static TAB_NUM t_lambda_loop[] = {
  2, // locals
  0, // parameters
  // n:
  var_std__less, 2, var_290_1_n, var_291_1_i, 1, LOCAL(1),
  // n:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_16, lambda_23, TAIL_CALL,
  POS(296, 12),
  POS(296, 12),
  POS(295, 5)
};

static TAB_NUM t_lambda_16[] = {
  2, // locals
  0, // parameters
  // text(i) == ' ':
  var_287_0_text, 1, var_291_1_i, 1, LOCAL(1),
  // text(i) == ' ':
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_17, lambda_18, TAIL_CALL,
  POS(298, 11),
  POS(298, 11),
  POS(297, 9)
};

static TAB_NUM t_lambda_17[] = {
  0, // locals
  0, // parameters
  // !i i+1
  var_std__plus, 2, var_291_1_i, num_1, 1, var_291_1_i,
  // !count count+1
  var_std__plus, 2, var_293_1_count, num_1, 1, var_293_1_count,
  // next
  var_next, 0, TAIL_CALL,
  POS(299, 13),
  POS(300, 13),
  POS(301, 13)
};

static TAB_NUM t_lambda_18[] = {
  2, // locals
  0, // parameters
  // count >= 8:
  var_std__less, 2, var_293_1_count, num_8, 1, LOCAL(1),
  // count >= 8:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_19, func_skip_line, TAIL_CALL,
  POS(304, 15),
  POS(304, 15),
  POS(303, 13)
};

static TAB_NUM t_lambda_19[] = {
  2, // locals
  0, // parameters
  // $tab_count count >> 3
  var_std__shift_right, 2, var_293_1_count, num_3, 1, var_305_1_tab_count,
  // tab_count >= 1:
  var_std__less, 2, var_305_1_tab_count, num_1, 1, LOCAL(1),
  // tab_count >= 1:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_20, func_skip_line, TAIL_CALL,
  POS(305, 17),
  POS(307, 19),
  POS(307, 19),
  POS(306, 17)
};

static TAB_NUM t_lambda_20[] = {
  3, // locals
  0, // parameters
  // count+1))
  var_std__plus, 2, var_293_1_count, num_1, 1, LOCAL(1),
  // i-(count+1))
  var_std__minus, 2, var_291_1_i, LOCAL(1), 1, LOCAL(2),
  // range(text s i-(count+1))
  var_range, 3, var_287_0_text, var_289_1_s, LOCAL(2), 1, LOCAL(3),
  // append &output range(text s i-(count+1))
  var_append, 2, var_292_1_output, LOCAL(3), 1, var_292_1_output,
  // tab_count < 10
  var_std__less, 2, var_305_1_tab_count, num_10, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_21, lambda_22, 1, LOCAL(2),
  // append &output
  var_append, 2, var_292_1_output, LOCAL(2), 1, var_292_1_output,
  // i-count)+(tab_count << 3)
  var_std__minus, 2, var_291_1_i, var_293_1_count, 1, LOCAL(1),
  // tab_count << 3)
  var_std__shift_left, 2, var_305_1_tab_count, num_3, 1, LOCAL(2),
  // !s (i-count)+(tab_count << 3)
  var_std__plus, 2, LOCAL(1), LOCAL(2), 1, var_289_1_s,
  // skip_line
  func_skip_line, 0, TAIL_CALL,
  POS(308, 52),
  POS(308, 49),
  POS(308, 36),
  POS(308, 21),
  POS(311, 25),
  POS(310, 23),
  POS(309, 21),
  POS(314, 25),
  POS(314, 35),
  POS(314, 21),
  POS(315, 21)
};

static TAB_NUM t_lambda_21[] = {
  1, // locals
  0, // parameters
  // range(tabs 1 tab_count)
  var_range, 3, string_6, num_1, var_305_1_tab_count, 1, LOCAL(1),
  //  range(tabs 1 tab_count)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(312, 28),
  POS(312, 27)
};

static TAB_NUM t_lambda_22[] = {
  1, // locals
  0, // parameters
  // dup("@ht;" tab_count)
  var_dup, 2, string_5, var_305_1_tab_count, 1, LOCAL(1),
  //  dup("@ht;" tab_count)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(313, 28),
  POS(313, 27)
};

static TAB_NUM t_lambda_23[] = {
  1, // locals
  0, // parameters
  // s == 1
  var_std__equal, 2, var_289_1_s, num_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_24, lambda_25, TAIL_CALL,
  POS(320, 11),
  POS(319, 9)
};

static TAB_NUM t_lambda_24[] = {
  0, // locals
  0, // parameters
  //  text
  LET, 1, var_287_0_text, TAIL_CALL,
  POS(321, 13)
};

static TAB_NUM t_lambda_25[] = {
  2, // locals
  0, // parameters
  // range(text s -1))
  var_range, 3, var_287_0_text, var_289_1_s, minus_num_1, 1, LOCAL(1),
  // append(output range(text s -1))
  var_append, 2, var_292_1_output, LOCAL(1), 1, LOCAL(2),
  //  append(output range(text s -1))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(322, 28),
  POS(322, 14),
  POS(322, 13)
};

static TAB_NUM t_func_skip_line[] = {
  0, // locals
  0, // parameters
  // loop
  var_loop, 2, lambda_26, lambda_29, TAIL_CALL,
  POS(325, 5)
};

static TAB_NUM t_lambda_26[] = {
  3, // locals
  0, // parameters
  // n && text(i) != '@nl;':
  var_std__less, 2, var_290_1_n, var_291_1_i, 1, LOCAL(1),
  // n && text(i) != '@nl;':
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // n && text(i) != '@nl;':
  var_std__and, 2, LOCAL(2), lambda_27, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_28, var_break, TAIL_CALL,
  POS(328, 16),
  POS(328, 16),
  POS(328, 16),
  POS(327, 9)
};

static TAB_NUM t_lambda_27[] = {
  3, // locals
  0, // parameters
  // text(i) != '@nl;':
  var_287_0_text, 1, var_291_1_i, 1, LOCAL(1),
  // text(i) != '@nl;':
  var_std__equal, 2, LOCAL(1), chr_10, 1, LOCAL(2),
  // text(i) != '@nl;':
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(i) != '@nl;':
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(328, 21),
  POS(328, 21),
  POS(328, 21),
  POS(328, 21)
};

static TAB_NUM t_lambda_28[] = {
  0, // locals
  0, // parameters
  // !i i+1
  var_std__plus, 2, var_291_1_i, num_1, 1, var_291_1_i,
  // next
  var_next, 0, TAIL_CALL,
  POS(329, 13),
  POS(330, 13)
};

static TAB_NUM t_lambda_29[] = {
  0, // locals
  0, // parameters
  // !i i+1
  var_std__plus, 2, var_291_1_i, num_1, 1, var_291_1_i,
  // !count 0
  LET, 1, num_0, 1, var_293_1_count,
  // next
  var_next, 0, TAIL_CALL,
  POS(333, 9),
  POS(334, 9),
  POS(335, 9)
};

static TAB_NUM t_func_std_types__string___match[] = {
  3, // locals
  2, // parameters
  var_350_0_self,
  var_351_0_stream,
  // $len length_of(self)
  var_length_of, 1, var_350_0_self, 1, var_353_1_len,
  // length_of(stream) >= len
  var_length_of, 1, var_351_0_stream, 1, LOCAL(1),
  // length_of(stream) >= len
  var_std__less, 2, LOCAL(1), var_353_1_len, 1, LOCAL(2),
  // length_of(stream) >= len
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_30, lambda_33, TAIL_CALL,
  POS(353, 3),
  POS(355, 5),
  POS(355, 5),
  POS(355, 5),
  POS(354, 3)
};

static TAB_NUM t_lambda_30[] = {
  2, // locals
  0, // parameters
  // range(stream 1 len) == self
  var_range, 3, var_351_0_stream, num_1, var_353_1_len, 1, LOCAL(1),
  // range(stream 1 len) == self
  var_std__equal, 2, LOCAL(1), var_350_0_self, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_31, lambda_32, TAIL_CALL,
  POS(358, 9),
  POS(358, 9),
  POS(357, 7)
};

static TAB_NUM t_lambda_31[] = {
  0, // locals
  0, // parameters
  //  len
  LET, 1, var_353_1_len, TAIL_CALL,
  POS(359, 11)
};

static TAB_NUM t_lambda_32[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(360, 11)
};

static TAB_NUM t_lambda_33[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(361, 7)
};

static TAB_NUM t_func_std_types__string___search[] = {
  1, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_380_0_self,
  MANDATORY_PARAMETER, var_381_0_stream,
  num_1, var_382_0_nth,
  // $i undefined
  LET, 1, var_undefined, 1, var_384_1_i,
  // $length length_of(self)
  var_length_of, 1, var_380_0_self, 1, var_385_1_length,
  // $offset length-1
  var_std__minus, 2, var_385_1_length, num_1, 1, var_386_1_offset,
  // length_of(stream)-offset
  var_length_of, 1, var_381_0_stream, 1, LOCAL(1),
  // $n length_of(stream)-offset
  var_std__minus, 2, LOCAL(1), var_386_1_offset, 1, var_387_1_n,
  // nth < 0:
  var_std__less, 2, var_382_0_nth, num_0, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_34, lambda_35, TAIL_CALL,
  POS(384, 3),
  POS(385, 3),
  POS(386, 3),
  POS(387, 6),
  POS(387, 3),
  POS(389, 5),
  POS(388, 3)
};

static TAB_NUM t_lambda_34[] = {
  0, // locals
  0, // parameters
  // !i n
  LET, 1, var_387_1_n, 1, var_384_1_i,
  // search_backwards
  func_search_backwards, 0, TAIL_CALL,
  POS(390, 7),
  POS(391, 7)
};

static TAB_NUM t_lambda_35[] = {
  0, // locals
  0, // parameters
  // !i 1
  LET, 1, num_1, 1, var_384_1_i,
  // search_forwards
  func_search_forwards, 0, TAIL_CALL,
  POS(393, 7),
  POS(394, 7)
};

static TAB_NUM t_func_search_forwards[] = {
  2, // locals
  0, // parameters
  // n
  var_std__less, 2, var_387_1_n, var_384_1_i, 1, LOCAL(1),
  // n
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_36, lambda_41, TAIL_CALL,
  POS(398, 12),
  POS(398, 12),
  POS(397, 5)
};

static TAB_NUM t_lambda_36[] = {
  3, // locals
  0, // parameters
  // i+offset) == self:
  var_std__plus, 2, var_384_1_i, var_386_1_offset, 1, LOCAL(1),
  // range(stream i i+offset) == self:
  var_range, 3, var_381_0_stream, var_384_1_i, LOCAL(1), 1, LOCAL(2),
  // range(stream i i+offset) == self:
  var_std__equal, 2, LOCAL(2), var_380_0_self, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_37, lambda_40, TAIL_CALL,
  POS(401, 26),
  POS(401, 11),
  POS(401, 11),
  POS(400, 9)
};

static TAB_NUM t_lambda_37[] = {
  1, // locals
  0, // parameters
  // 1:
  var_std__less, 2, num_1, var_382_0_nth, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_38, lambda_39, TAIL_CALL,
  POS(403, 21),
  POS(402, 13)
};

static TAB_NUM t_lambda_38[] = {
  0, // locals
  0, // parameters
  // dec &nth
  var_dec, 1, var_382_0_nth, 1, var_382_0_nth,
  // plus &i length
  var_plus, 2, var_384_1_i, var_385_1_length, 1, var_384_1_i,
  // search_forwards
  func_search_forwards, 0, TAIL_CALL,
  POS(404, 17),
  POS(405, 17),
  POS(406, 17)
};

static TAB_NUM t_lambda_39[] = {
  0, // locals
  0, // parameters
  //  i length
  LET, 2, var_384_1_i, var_385_1_length, TAIL_CALL,
  POS(407, 17)
};

static TAB_NUM t_lambda_40[] = {
  0, // locals
  0, // parameters
  // inc &i
  var_inc, 1, var_384_1_i, 1, var_384_1_i,
  // search_forwards
  func_search_forwards, 0, TAIL_CALL,
  POS(409, 13),
  POS(410, 13)
};

static TAB_NUM t_lambda_41[] = {
  0, // locals
  0, // parameters
  //  undefined undefined
  LET, 2, var_undefined, var_undefined, TAIL_CALL,
  POS(411, 9)
};

static TAB_NUM t_func_search_backwards[] = {
  2, // locals
  0, // parameters
  // i >= 1
  var_std__less, 2, var_384_1_i, num_1, 1, LOCAL(1),
  // i >= 1
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_42, lambda_47, TAIL_CALL,
  POS(415, 7),
  POS(415, 7),
  POS(414, 5)
};

static TAB_NUM t_lambda_42[] = {
  3, // locals
  0, // parameters
  // i+offset) == self:
  var_std__plus, 2, var_384_1_i, var_386_1_offset, 1, LOCAL(1),
  // range(stream i i+offset) == self:
  var_range, 3, var_381_0_stream, var_384_1_i, LOCAL(1), 1, LOCAL(2),
  // range(stream i i+offset) == self:
  var_std__equal, 2, LOCAL(2), var_380_0_self, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_43, lambda_46, TAIL_CALL,
  POS(418, 26),
  POS(418, 11),
  POS(418, 11),
  POS(417, 9)
};

static TAB_NUM t_lambda_43[] = {
  1, // locals
  0, // parameters
  // nth < -1:
  var_std__less, 2, var_382_0_nth, minus_num_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_44, lambda_45, TAIL_CALL,
  POS(420, 15),
  POS(419, 13)
};

static TAB_NUM t_lambda_44[] = {
  0, // locals
  0, // parameters
  // inc &nth
  var_inc, 1, var_382_0_nth, 1, var_382_0_nth,
  // minus &i length
  var_minus, 2, var_384_1_i, var_385_1_length, 1, var_384_1_i,
  // search_backwards
  func_search_backwards, 0, TAIL_CALL,
  POS(421, 17),
  POS(422, 17),
  POS(423, 17)
};

static TAB_NUM t_lambda_45[] = {
  0, // locals
  0, // parameters
  //  i length
  LET, 2, var_384_1_i, var_385_1_length, TAIL_CALL,
  POS(424, 17)
};

static TAB_NUM t_lambda_46[] = {
  0, // locals
  0, // parameters
  // dec &i
  var_dec, 1, var_384_1_i, 1, var_384_1_i,
  // search_backwards
  func_search_backwards, 0, TAIL_CALL,
  POS(426, 13),
  POS(427, 13)
};

static TAB_NUM t_lambda_47[] = {
  0, // locals
  0, // parameters
  //  undefined undefined
  LET, 2, var_undefined, var_undefined, TAIL_CALL,
  POS(428, 9)
};

static TAB_NUM t_func_std_types__string___before[] = {
  3, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_468_0_str,
  MANDATORY_PARAMETER, LOCAL(2), // 469_0_expr
  num_1, LOCAL(3), // 470_0_nth
  // search $pos $_len expr str nth
  var_search, 3, LOCAL(2), var_468_0_str, LOCAL(3), 2, var_472_8_pos, LOCAL(1),
  // is_defined
  var_is_defined, 1, var_472_8_pos, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_48, lambda_49, TAIL_CALL,
  POS(472, 3),
  POS(474, 9),
  POS(473, 3)
};

static TAB_NUM t_lambda_48[] = {
  2, // locals
  0, // parameters
  // pos-1)
  var_std__minus, 2, var_472_8_pos, num_1, 1, LOCAL(1),
  // range(str 1 pos-1)
  var_range, 3, var_468_0_str, num_1, LOCAL(1), 1, LOCAL(2),
  //  range(str 1 pos-1)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(475, 20),
  POS(475, 8),
  POS(475, 7)
};

static TAB_NUM t_lambda_49[] = {
  0, // locals
  0, // parameters
  //  ""
  LET, 1, string_1, TAIL_CALL,
  POS(476, 7)
};

static TAB_NUM t_func_std_types__string___truncate_from[] = {
  3, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_518_0_str,
  MANDATORY_PARAMETER, LOCAL(2), // 519_0_expr
  num_1, LOCAL(3), // 520_0_nth
  // search $pos $_len expr str nth
  var_search, 3, LOCAL(2), var_518_0_str, LOCAL(3), 2, var_522_8_pos, LOCAL(1),
  // is_defined
  var_is_defined, 1, var_522_8_pos, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_50, lambda_51, TAIL_CALL,
  POS(522, 3),
  POS(524, 9),
  POS(523, 3)
};

static TAB_NUM t_lambda_50[] = {
  2, // locals
  0, // parameters
  // pos-1)
  var_std__minus, 2, var_522_8_pos, num_1, 1, LOCAL(1),
  // range(str 1 pos-1)
  var_range, 3, var_518_0_str, num_1, LOCAL(1), 1, LOCAL(2),
  //  range(str 1 pos-1)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(525, 20),
  POS(525, 8),
  POS(525, 7)
};

static TAB_NUM t_lambda_51[] = {
  0, // locals
  0, // parameters
  //  str
  LET, 1, var_518_0_str, TAIL_CALL,
  POS(526, 7)
};

static TAB_NUM t_func_std_types__string___behind[] = {
  3, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_566_0_str,
  MANDATORY_PARAMETER, LOCAL(2), // 567_0_expr
  num_1, LOCAL(3), // 568_0_nth
  // search $pos $len expr str nth
  var_search, 3, LOCAL(2), var_566_0_str, LOCAL(3), 2, var_570_8_pos, var_570_13_len,
  // is_defined
  var_is_defined, 1, var_570_8_pos, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_52, lambda_53, TAIL_CALL,
  POS(570, 3),
  POS(572, 9),
  POS(571, 3)
};

static TAB_NUM t_lambda_52[] = {
  2, // locals
  0, // parameters
  // pos+len -1)
  var_std__plus, 2, var_570_8_pos, var_570_13_len, 1, LOCAL(1),
  // range(str pos+len -1)
  var_range, 3, var_566_0_str, LOCAL(1), minus_num_1, 1, LOCAL(2),
  //  range(str pos+len -1)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(573, 18),
  POS(573, 8),
  POS(573, 7)
};

static TAB_NUM t_lambda_53[] = {
  0, // locals
  0, // parameters
  //  ""
  LET, 1, string_1, TAIL_CALL,
  POS(574, 7)
};

static TAB_NUM t_func_std_types__string___truncate_until[] = {
  3, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_615_0_str,
  MANDATORY_PARAMETER, LOCAL(2), // 616_0_expr
  num_1, LOCAL(3), // 617_0_nth
  // search $pos $len expr str nth
  var_search, 3, LOCAL(2), var_615_0_str, LOCAL(3), 2, var_619_8_pos, var_619_13_len,
  // is_defined
  var_is_defined, 1, var_619_8_pos, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_54, lambda_55, TAIL_CALL,
  POS(619, 3),
  POS(621, 9),
  POS(620, 3)
};

static TAB_NUM t_lambda_54[] = {
  2, // locals
  0, // parameters
  // pos+len -1)
  var_std__plus, 2, var_619_8_pos, var_619_13_len, 1, LOCAL(1),
  // range(str pos+len -1)
  var_range, 3, var_615_0_str, LOCAL(1), minus_num_1, 1, LOCAL(2),
  //  range(str pos+len -1)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(622, 18),
  POS(622, 8),
  POS(622, 7)
};

static TAB_NUM t_lambda_55[] = {
  0, // locals
  0, // parameters
  //  str
  LET, 1, var_615_0_str, TAIL_CALL,
  POS(623, 7)
};

static TAB_NUM t_func_std_types__string___from[] = {
  3, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_664_0_str,
  MANDATORY_PARAMETER, LOCAL(2), // 665_0_expr
  num_1, LOCAL(3), // 666_0_nth
  // search $pos $_len expr str nth
  var_search, 3, LOCAL(2), var_664_0_str, LOCAL(3), 2, var_668_8_pos, LOCAL(1),
  // is_defined
  var_is_defined, 1, var_668_8_pos, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_56, lambda_57, TAIL_CALL,
  POS(668, 3),
  POS(670, 9),
  POS(669, 3)
};

static TAB_NUM t_lambda_56[] = {
  1, // locals
  0, // parameters
  // range(str pos -1)
  var_range, 3, var_664_0_str, var_668_8_pos, minus_num_1, 1, LOCAL(1),
  //  range(str pos -1)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(671, 8),
  POS(671, 7)
};

static TAB_NUM t_lambda_57[] = {
  0, // locals
  0, // parameters
  //  ""
  LET, 1, string_1, TAIL_CALL,
  POS(672, 7)
};

static TAB_NUM t_func_std_types__string___truncate_before[] = {
  3, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_713_0_str,
  MANDATORY_PARAMETER, LOCAL(2), // 714_0_expr
  num_1, LOCAL(3), // 715_0_nth
  // search $pos $_len expr str nth
  var_search, 3, LOCAL(2), var_713_0_str, LOCAL(3), 2, var_717_8_pos, LOCAL(1),
  // is_defined
  var_is_defined, 1, var_717_8_pos, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_58, lambda_59, TAIL_CALL,
  POS(717, 3),
  POS(719, 9),
  POS(718, 3)
};

static TAB_NUM t_lambda_58[] = {
  1, // locals
  0, // parameters
  // range(str pos -1)
  var_range, 3, var_713_0_str, var_717_8_pos, minus_num_1, 1, LOCAL(1),
  //  range(str pos -1)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(720, 8),
  POS(720, 7)
};

static TAB_NUM t_lambda_59[] = {
  0, // locals
  0, // parameters
  //  str
  LET, 1, var_713_0_str, TAIL_CALL,
  POS(721, 7)
};

static TAB_NUM t_func_std_types__string___until[] = {
  3, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_761_0_str,
  MANDATORY_PARAMETER, LOCAL(2), // 762_0_expr
  num_1, LOCAL(3), // 763_0_nth
  // search $pos $len expr str nth
  var_search, 3, LOCAL(2), var_761_0_str, LOCAL(3), 2, var_765_8_pos, var_765_13_len,
  // is_defined
  var_is_defined, 1, var_765_8_pos, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_60, lambda_61, TAIL_CALL,
  POS(765, 3),
  POS(767, 9),
  POS(766, 3)
};

static TAB_NUM t_lambda_60[] = {
  3, // locals
  0, // parameters
  // pos+len-1)
  var_std__plus, 2, var_765_8_pos, var_765_13_len, 1, LOCAL(1),
  // pos+len-1)
  var_std__minus, 2, LOCAL(1), num_1, 1, LOCAL(2),
  // range(str 1 pos+len-1)
  var_range, 3, var_761_0_str, num_1, LOCAL(2), 1, LOCAL(3),
  //  range(str 1 pos+len-1)
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(768, 20),
  POS(768, 20),
  POS(768, 8),
  POS(768, 7)
};

static TAB_NUM t_lambda_61[] = {
  0, // locals
  0, // parameters
  //  ""
  LET, 1, string_1, TAIL_CALL,
  POS(769, 7)
};

static TAB_NUM t_func_std_types__string___truncate_behind[] = {
  3, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_810_0_str,
  MANDATORY_PARAMETER, LOCAL(2), // 811_0_expr
  num_1, LOCAL(3), // 812_0_nth
  // search $pos $len expr str nth
  var_search, 3, LOCAL(2), var_810_0_str, LOCAL(3), 2, var_814_8_pos, var_814_13_len,
  // is_defined
  var_is_defined, 1, var_814_8_pos, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_62, lambda_63, TAIL_CALL,
  POS(814, 3),
  POS(816, 9),
  POS(815, 3)
};

static TAB_NUM t_lambda_62[] = {
  3, // locals
  0, // parameters
  // pos+len-1)
  var_std__plus, 2, var_814_8_pos, var_814_13_len, 1, LOCAL(1),
  // pos+len-1)
  var_std__minus, 2, LOCAL(1), num_1, 1, LOCAL(2),
  // range(str 1 pos+len-1)
  var_range, 3, var_810_0_str, num_1, LOCAL(2), 1, LOCAL(3),
  //  range(str 1 pos+len-1)
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(817, 20),
  POS(817, 20),
  POS(817, 8),
  POS(817, 7)
};

static TAB_NUM t_lambda_63[] = {
  0, // locals
  0, // parameters
  //  str
  LET, 1, var_810_0_str, TAIL_CALL,
  POS(818, 7)
};

static TAB_NUM t_func_std_types__string___between[] = {
  6, // locals
  -4, // parameters
  MANDATORY_PARAMETER, LOCAL(3), // 846_0_str
  MANDATORY_PARAMETER, LOCAL(4), // 847_0_expr_1
  MANDATORY_PARAMETER, LOCAL(5), // 848_0_expr_2
  num_1, LOCAL(6), // 849_0_nth
  // behind(str expr_1 nth) .before. expr_2
  var_behind, 3, LOCAL(3), LOCAL(4), LOCAL(6), 1, LOCAL(1),
  // behind(str expr_1 nth) .before. expr_2
  var_before, 2, LOCAL(1), LOCAL(5), 1, LOCAL(2),
  // -> behind(str expr_1 nth) .before. expr_2
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(851, 6),
  POS(851, 6),
  POS(851, 3)
};

static TAB_NUM t_func_std_types__string___has_prefix[] = {
  4, // locals
  2, // parameters
  LOCAL(3), // 870_0_self
  LOCAL(4), // 871_0_prefix
  // match(prefix self).is_defined
  var_match, 2, LOCAL(4), LOCAL(3), 1, LOCAL(1),
  // is_defined
  var_is_defined, 1, LOCAL(1), 1, LOCAL(2),
  // -> match(prefix self).is_defined
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(873, 6),
  POS(873, 25),
  POS(873, 3)
};

static TAB_NUM t_func_std_types__string___has_suffix[] = {
  1, // locals
  2, // parameters
  var_892_0_self,
  var_893_0_suffix,
  // is_a_character
  var_is_a_character, 1, var_893_0_suffix, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_64, lambda_66, TAIL_CALL,
  POS(896, 12),
  POS(895, 3)
};

static TAB_NUM t_lambda_64[] = {
  4, // locals
  0, // parameters
  // length_of(self) >= 1 && self(-1) == suffix
  var_length_of, 1, var_892_0_self, 1, LOCAL(1),
  // length_of(self) >= 1 && self(-1) == suffix
  var_std__less, 2, LOCAL(1), num_1, 1, LOCAL(2),
  // length_of(self) >= 1 && self(-1) == suffix
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // length_of(self) >= 1 && self(-1) == suffix
  var_std__and, 2, LOCAL(3), lambda_65, 1, LOCAL(4),
  //  length_of(self) >= 1 && self(-1) == suffix
  LET, 1, LOCAL(4), TAIL_CALL,
  POS(897, 8),
  POS(897, 8),
  POS(897, 8),
  POS(897, 8),
  POS(897, 7)
};

static TAB_NUM t_lambda_65[] = {
  2, // locals
  0, // parameters
  // self(-1) == suffix
  var_892_0_self, 1, minus_num_1, 1, LOCAL(1),
  // self(-1) == suffix
  var_std__equal, 2, LOCAL(1), var_893_0_suffix, 1, LOCAL(2),
  // self(-1) == suffix
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(897, 32),
  POS(897, 32),
  POS(897, 32)
};

static TAB_NUM t_lambda_66[] = {
  4, // locals
  0, // parameters
  // $len length_of(suffix)
  var_length_of, 1, var_893_0_suffix, 1, var_899_1_len,
  // length_of(self) >= len && range(self -len -1) == suffix
  var_length_of, 1, var_892_0_self, 1, LOCAL(1),
  // length_of(self) >= len && range(self -len -1) == suffix
  var_std__less, 2, LOCAL(1), var_899_1_len, 1, LOCAL(2),
  // length_of(self) >= len && range(self -len -1) == suffix
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // length_of(self) >= len && range(self -len -1) == suffix
  var_std__and, 2, LOCAL(3), lambda_67, 1, LOCAL(4),
  // -> length_of(self) >= len && range(self -len -1) == suffix
  LET, 1, LOCAL(4), TAIL_CALL,
  POS(899, 7),
  POS(900, 10),
  POS(900, 10),
  POS(900, 10),
  POS(900, 10),
  POS(900, 7)
};

static TAB_NUM t_lambda_67[] = {
  3, // locals
  0, // parameters
  // len -1) == suffix
  var_std__negate, 1, var_899_1_len, 1, LOCAL(1),
  // range(self -len -1) == suffix
  var_range, 3, var_892_0_self, LOCAL(1), minus_num_1, 1, LOCAL(2),
  // range(self -len -1) == suffix
  var_std__equal, 2, LOCAL(2), var_893_0_suffix, 1, LOCAL(3),
  // range(self -len -1) == suffix
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(900, 48),
  POS(900, 36),
  POS(900, 36),
  POS(900, 36)
};

static TAB_NUM t_func_std_types__string___without_prefix[] = {
  2, // locals
  2, // parameters
  var_923_0_self,
  LOCAL(2), // 924_0_prefix
  // $n match(prefix self)
  var_match, 2, LOCAL(2), var_923_0_self, 1, var_926_1_n,
  // is_defined
  var_is_defined, 1, var_926_1_n, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_68, lambda_69, TAIL_CALL,
  POS(926, 3),
  POS(928, 7),
  POS(927, 3)
};

static TAB_NUM t_lambda_68[] = {
  2, // locals
  0, // parameters
  // n+1 -1)
  var_std__plus, 2, var_926_1_n, num_1, 1, LOCAL(1),
  // range(self n+1 -1)
  var_range, 3, var_923_0_self, LOCAL(1), minus_num_1, 1, LOCAL(2),
  //  range(self n+1 -1)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(929, 19),
  POS(929, 8),
  POS(929, 7)
};

static TAB_NUM t_lambda_69[] = {
  0, // locals
  0, // parameters
  //  self
  LET, 1, var_923_0_self, TAIL_CALL,
  POS(930, 7)
};

static TAB_NUM t_func_std_types__string___without_suffix[] = {
  1, // locals
  2, // parameters
  var_953_0_self,
  var_954_0_suffix,
  // $len length_of(self)
  var_length_of, 1, var_953_0_self, 1, var_956_1_len,
  // is_a_character:
  var_is_a_character, 1, var_954_0_suffix, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_suffix_is_a_character, lambda_73, TAIL_CALL,
  POS(956, 3),
  POS(958, 12),
  POS(957, 3)
};

static TAB_NUM t_lambda_suffix_is_a_character[] = {
  3, // locals
  0, // parameters
  // len >= 1 && self(-1) == suffix
  var_std__less, 2, var_956_1_len, num_1, 1, LOCAL(1),
  // len >= 1 && self(-1) == suffix
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // len >= 1 && self(-1) == suffix
  var_std__and, 2, LOCAL(2), lambda_70, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_71, lambda_72, TAIL_CALL,
  POS(960, 9),
  POS(960, 9),
  POS(960, 9),
  POS(959, 7)
};

static TAB_NUM t_lambda_70[] = {
  2, // locals
  0, // parameters
  // self(-1) == suffix
  var_953_0_self, 1, minus_num_1, 1, LOCAL(1),
  // self(-1) == suffix
  var_std__equal, 2, LOCAL(1), var_954_0_suffix, 1, LOCAL(2),
  // self(-1) == suffix
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(960, 21),
  POS(960, 21),
  POS(960, 21)
};

static TAB_NUM t_lambda_71[] = {
  1, // locals
  0, // parameters
  // range(self 1 -2)
  var_range, 3, var_953_0_self, num_1, minus_num_2, 1, LOCAL(1),
  //  range(self 1 -2)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(961, 12),
  POS(961, 11)
};

static TAB_NUM t_lambda_72[] = {
  0, // locals
  0, // parameters
  //  self
  LET, 1, var_953_0_self, TAIL_CALL,
  POS(962, 11)
};

static TAB_NUM t_lambda_73[] = {
  3, // locals
  0, // parameters
  // $slen length_of(suffix)
  var_length_of, 1, var_954_0_suffix, 1, var_964_1_slen,
  // len >= slen && range(self -slen -1) == suffix
  var_std__less, 2, var_956_1_len, var_964_1_slen, 1, LOCAL(1),
  // len >= slen && range(self -slen -1) == suffix
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // len >= slen && range(self -slen -1) == suffix
  var_std__and, 2, LOCAL(2), lambda_74, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_75, lambda_76, TAIL_CALL,
  POS(964, 7),
  POS(966, 9),
  POS(966, 9),
  POS(966, 9),
  POS(965, 7)
};

static TAB_NUM t_lambda_74[] = {
  3, // locals
  0, // parameters
  // slen -1) == suffix
  var_std__negate, 1, var_964_1_slen, 1, LOCAL(1),
  // range(self -slen -1) == suffix
  var_range, 3, var_953_0_self, LOCAL(1), minus_num_1, 1, LOCAL(2),
  // range(self -slen -1) == suffix
  var_std__equal, 2, LOCAL(2), var_954_0_suffix, 1, LOCAL(3),
  // range(self -slen -1) == suffix
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(966, 36),
  POS(966, 24),
  POS(966, 24),
  POS(966, 24)
};

static TAB_NUM t_lambda_75[] = {
  3, // locals
  0, // parameters
  // slen-1)
  var_std__negate, 1, var_964_1_slen, 1, LOCAL(1),
  // slen-1)
  var_std__minus, 2, LOCAL(1), num_1, 1, LOCAL(2),
  // range(self 1 -slen-1)
  var_range, 3, var_953_0_self, num_1, LOCAL(2), 1, LOCAL(3),
  //  range(self 1 -slen-1)
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(967, 26),
  POS(967, 26),
  POS(967, 12),
  POS(967, 11)
};

static TAB_NUM t_lambda_76[] = {
  0, // locals
  0, // parameters
  //  self
  LET, 1, var_953_0_self, TAIL_CALL,
  POS(968, 11)
};

static TAB_NUM t_func_std_types__string___contains[] = {
  4, // locals
  2, // parameters
  LOCAL(2), // 993_0_self
  LOCAL(3), // 994_0_expr
  // search $pos $_len expr self
  var_search, 2, LOCAL(3), LOCAL(2), 2, LOCAL(4), LOCAL(1),
  // is_defined
  var_is_defined, 1, LOCAL(4), 1, LOCAL(1),
  // -> pos.is_defined
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(996, 3),
  POS(997, 10),
  POS(997, 3)
};

static TAB_NUM t_func_std__split[] = {
  1, // locals
  -2, // parameters
  MANDATORY_PARAMETER, var_1022_0_self,
  chr_32, var_1023_0_separator,
  // is_empty
  var_is_empty, 1, var_1022_0_self, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_77, lambda_78, TAIL_CALL,
  POS(1026, 10),
  POS(1025, 3)
};

static TAB_NUM t_lambda_77[] = {
  0, // locals
  0, // parameters
  //  empty_list
  LET, 1, var_empty_list, TAIL_CALL,
  POS(1027, 7)
};

static TAB_NUM t_lambda_78[] = {
  0, // locals
  0, // parameters
  // $items empty_list
  LET, 1, var_empty_list, 1, var_1029_1_items,
  // loop:
  var_loop, 1, lambda_2_loop, TAIL_CALL,
  POS(1029, 7),
  POS(1030, 7)
};

static TAB_NUM t_lambda_2_loop[] = {
  1, // locals
  0, // parameters
  // search $pos $len separator self
  var_search, 2, var_1023_0_separator, var_1022_0_self, 2, var_1031_8_pos, var_1031_13_len,
  // is_defined:
  var_is_defined, 1, var_1031_8_pos, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_pos_is_defined, lambda_79, TAIL_CALL,
  POS(1031, 9),
  POS(1033, 15),
  POS(1032, 9)
};

static TAB_NUM t_lambda_pos_is_defined[] = {
  2, // locals
  0, // parameters
  // pos-1)
  var_std__minus, 2, var_1031_8_pos, num_1, 1, LOCAL(1),
  // range(self 1 pos-1)
  var_range, 3, var_1022_0_self, num_1, LOCAL(1), 1, LOCAL(2),
  // push &items range(self 1 pos-1)
  var_push, 2, var_1029_1_items, LOCAL(2), 1, var_1029_1_items,
  // pos+len -1
  var_std__plus, 2, var_1031_8_pos, var_1031_13_len, 1, LOCAL(1),
  // range &self pos+len -1
  var_range, 3, var_1022_0_self, LOCAL(1), minus_num_1, 1, var_1022_0_self,
  // next
  var_next, 0, TAIL_CALL,
  POS(1034, 38),
  POS(1034, 25),
  POS(1034, 13),
  POS(1035, 25),
  POS(1035, 13),
  POS(1036, 13)
};

static TAB_NUM t_lambda_79[] = {
  1, // locals
  0, // parameters
  // is_empty
  var_is_empty, 1, var_1022_0_self, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_80, lambda_81, TAIL_CALL,
  POS(1039, 20),
  POS(1038, 13)
};

static TAB_NUM t_lambda_80[] = {
  0, // locals
  0, // parameters
  //  items
  LET, 1, var_1029_1_items, TAIL_CALL,
  POS(1040, 17)
};

static TAB_NUM t_lambda_81[] = {
  1, // locals
  0, // parameters
  // push(items self)
  var_push, 2, var_1029_1_items, var_1022_0_self, 1, LOCAL(1),
  //  push(items self)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1041, 18),
  POS(1041, 17)
};

static TAB_NUM t_func_std__join[] = {
  1, // locals
  -2, // parameters
  MANDATORY_PARAMETER, LOCAL(1), // 1066_0_items
  string_2, var_1067_0_separator,
  // to_string &separator
  var_to_string, 1, var_1067_0_separator, 1, var_1067_0_separator,
  // map_reduce
  var_map_reduce, 4, LOCAL(1), var_to_string, lambda_82, string_1, TAIL_CALL,
  POS(1069, 3),
  POS(1070, 3)
};

static TAB_NUM t_lambda_82[] = {
  2, // locals
  2, // parameters
  LOCAL(1), // 1072_3_left
  LOCAL(2), // 1072_8_right
  // append left separator right
  var_append, 3, LOCAL(1), var_1067_0_separator, LOCAL(2), TAIL_CALL,
  POS(1072, 20)
};

static TAB_NUM t_func_std__trim[] = {
  0, // locals
  -2, // parameters
  MANDATORY_PARAMETER, var_1096_0_self,
  var_is_a_whitespace_character, var_1097_0_test,
  // $s 1
  LET, 1, num_1, 1, var_1099_1_s,
  // $e length_of(self)
  var_length_of, 1, var_1096_0_self, 1, var_1100_1_e,
  // loop:
  var_loop, 1, lambda_3_loop, TAIL_CALL,
  POS(1099, 3),
  POS(1100, 3),
  POS(1101, 3)
};

static TAB_NUM t_lambda_3_loop[] = {
  3, // locals
  0, // parameters
  // e && test(self(s)):
  var_std__less, 2, var_1100_1_e, var_1099_1_s, 1, LOCAL(1),
  // e && test(self(s)):
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // e && test(self(s)):
  var_std__and, 2, LOCAL(2), lambda_83, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_84, lambda_85, TAIL_CALL,
  POS(1103, 12),
  POS(1103, 12),
  POS(1103, 12),
  POS(1102, 5)
};

static TAB_NUM t_lambda_83[] = {
  2, // locals
  0, // parameters
  // self(s)):
  var_1096_0_self, 1, var_1099_1_s, 1, LOCAL(1),
  // test(self(s)):
  var_1097_0_test, 1, LOCAL(1), 1, LOCAL(2),
  // test(self(s)):
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1103, 22),
  POS(1103, 17),
  POS(1103, 17)
};

static TAB_NUM t_lambda_84[] = {
  0, // locals
  0, // parameters
  // inc &s
  var_inc, 1, var_1099_1_s, 1, var_1099_1_s,
  // next
  var_next, 0, TAIL_CALL,
  POS(1104, 9),
  POS(1105, 9)
};

static TAB_NUM t_lambda_85[] = {
  0, // locals
  0, // parameters
  // loop:
  var_loop, 1, lambda_4_loop, TAIL_CALL,
  POS(1107, 9)
};

static TAB_NUM t_lambda_4_loop[] = {
  3, // locals
  0, // parameters
  // e >= s && test(self(e)):
  var_std__less, 2, var_1100_1_e, var_1099_1_s, 1, LOCAL(1),
  // e >= s && test(self(e)):
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // e >= s && test(self(e)):
  var_std__and, 2, LOCAL(2), lambda_86, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_87, lambda_88, TAIL_CALL,
  POS(1109, 13),
  POS(1109, 13),
  POS(1109, 13),
  POS(1108, 11)
};

static TAB_NUM t_lambda_86[] = {
  2, // locals
  0, // parameters
  // self(e)):
  var_1096_0_self, 1, var_1100_1_e, 1, LOCAL(1),
  // test(self(e)):
  var_1097_0_test, 1, LOCAL(1), 1, LOCAL(2),
  // test(self(e)):
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1109, 28),
  POS(1109, 23),
  POS(1109, 23)
};

static TAB_NUM t_lambda_87[] = {
  0, // locals
  0, // parameters
  // dec &e
  var_dec, 1, var_1100_1_e, 1, var_1100_1_e,
  // next
  var_next, 0, TAIL_CALL,
  POS(1110, 15),
  POS(1111, 15)
};

static TAB_NUM t_lambda_88[] = {
  0, // locals
  0, // parameters
  // range self s e
  var_range, 3, var_1096_0_self, var_1099_1_s, var_1100_1_e, TAIL_CALL,
  POS(1113, 15)
};

static TAB_NUM t_func_std__trim_left[] = {
  0, // locals
  -2, // parameters
  MANDATORY_PARAMETER, var_1136_0_self,
  var_is_a_whitespace_character, var_1137_0_test,
  // $s 1
  LET, 1, num_1, 1, var_1139_1_s,
  // $e length_of(self)
  var_length_of, 1, var_1136_0_self, 1, var_1140_1_e,
  // loop:
  var_loop, 1, lambda_5_loop, TAIL_CALL,
  POS(1139, 3),
  POS(1140, 3),
  POS(1141, 3)
};

static TAB_NUM t_lambda_5_loop[] = {
  3, // locals
  0, // parameters
  // e && test(self(s)):
  var_std__less, 2, var_1140_1_e, var_1139_1_s, 1, LOCAL(1),
  // e && test(self(s)):
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // e && test(self(s)):
  var_std__and, 2, LOCAL(2), lambda_89, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_90, lambda_91, TAIL_CALL,
  POS(1143, 12),
  POS(1143, 12),
  POS(1143, 12),
  POS(1142, 5)
};

static TAB_NUM t_lambda_89[] = {
  2, // locals
  0, // parameters
  // self(s)):
  var_1136_0_self, 1, var_1139_1_s, 1, LOCAL(1),
  // test(self(s)):
  var_1137_0_test, 1, LOCAL(1), 1, LOCAL(2),
  // test(self(s)):
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1143, 22),
  POS(1143, 17),
  POS(1143, 17)
};

static TAB_NUM t_lambda_90[] = {
  0, // locals
  0, // parameters
  // inc &s
  var_inc, 1, var_1139_1_s, 1, var_1139_1_s,
  // next
  var_next, 0, TAIL_CALL,
  POS(1144, 9),
  POS(1145, 9)
};

static TAB_NUM t_lambda_91[] = {
  0, // locals
  0, // parameters
  // range self s e
  var_range, 3, var_1136_0_self, var_1139_1_s, var_1140_1_e, TAIL_CALL,
  POS(1147, 9)
};

static TAB_NUM t_func_std__trim_right[] = {
  0, // locals
  -2, // parameters
  MANDATORY_PARAMETER, var_1170_0_self,
  var_is_a_whitespace_character, var_1171_0_test,
  // $e length_of(self)
  var_length_of, 1, var_1170_0_self, 1, var_1173_1_e,
  // loop:
  var_loop, 1, lambda_6_loop, TAIL_CALL,
  POS(1173, 3),
  POS(1174, 3)
};

static TAB_NUM t_lambda_6_loop[] = {
  3, // locals
  0, // parameters
  // e >= 1 && test(self(e)):
  var_std__less, 2, var_1173_1_e, num_1, 1, LOCAL(1),
  // e >= 1 && test(self(e)):
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // e >= 1 && test(self(e)):
  var_std__and, 2, LOCAL(2), lambda_92, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_93, lambda_94, TAIL_CALL,
  POS(1176, 7),
  POS(1176, 7),
  POS(1176, 7),
  POS(1175, 5)
};

static TAB_NUM t_lambda_92[] = {
  2, // locals
  0, // parameters
  // self(e)):
  var_1170_0_self, 1, var_1173_1_e, 1, LOCAL(1),
  // test(self(e)):
  var_1171_0_test, 1, LOCAL(1), 1, LOCAL(2),
  // test(self(e)):
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1176, 22),
  POS(1176, 17),
  POS(1176, 17)
};

static TAB_NUM t_lambda_93[] = {
  0, // locals
  0, // parameters
  // dec &e
  var_dec, 1, var_1173_1_e, 1, var_1173_1_e,
  // next
  var_next, 0, TAIL_CALL,
  POS(1177, 9),
  POS(1178, 9)
};

static TAB_NUM t_lambda_94[] = {
  0, // locals
  0, // parameters
  // range self 1 e
  var_range, 3, var_1170_0_self, num_1, var_1173_1_e, TAIL_CALL,
  POS(1180, 9)
};

static TAB_NUM t_func_std__normalize[] = {
  0, // locals
  1, // parameters
  var_1204_0_self,
  // $buf ""
  LET, 1, string_1, 1, var_1206_1_buf,
  // $e length_of(self)
  var_length_of, 1, var_1204_0_self, 1, var_1207_1_e,
  // $i 0
  LET, 1, num_0, 1, var_1208_1_i,
  // loop:
  var_loop, 1, lambda_7_loop, TAIL_CALL,
  POS(1206, 3),
  POS(1207, 3),
  POS(1208, 3),
  POS(1209, 3)
};

static TAB_NUM t_lambda_7_loop[] = {
  0, // locals
  0, // parameters
  // loop
  var_loop, 2, lambda_95, lambda_98, TAIL_CALL,
  POS(1210, 5)
};

static TAB_NUM t_lambda_95[] = {
  1, // locals
  0, // parameters
  // inc &i
  var_inc, 1, var_1208_1_i, 1, var_1208_1_i,
  // e
  var_std__less, 2, var_1207_1_e, var_1208_1_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_96, lambda_97, TAIL_CALL,
  POS(1212, 9),
  POS(1214, 15),
  POS(1213, 9)
};

static TAB_NUM t_lambda_96[] = {
  0, // locals
  0, // parameters
  //  buf
  LET, 1, var_1206_1_buf, TAIL_CALL,
  POS(1215, 13)
};

static TAB_NUM t_lambda_97[] = {
  2, // locals
  0, // parameters
  // self(i).is_a_whitespace_character
  var_1204_0_self, 1, var_1208_1_i, 1, LOCAL(1),
  // is_a_whitespace_character
  var_is_a_whitespace_character, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), var_next, var_break, TAIL_CALL,
  POS(1218, 15),
  POS(1218, 23),
  POS(1217, 13)
};

static TAB_NUM t_lambda_98[] = {
  1, // locals
  0, // parameters
  // is_not_empty &buf -> push(buf ' ')
  var_is_not_empty, 1, var_1206_1_buf, 1, LOCAL(1),
  // update_if buf.is_not_empty &buf -> push(buf ' ')
  var_update_if, 3, LOCAL(1), var_1206_1_buf, lambda_99, 1, var_1206_1_buf,
  // $s i
  LET, 1, var_1208_1_i, 1, var_1223_1_s,
  // loop
  var_loop, 2, lambda_100, lambda_103, TAIL_CALL,
  POS(1222, 23),
  POS(1222, 9),
  POS(1223, 9),
  POS(1224, 9)
};

static TAB_NUM t_lambda_99[] = {
  1, // locals
  0, // parameters
  // push(buf ' ')
  var_push, 2, var_1206_1_buf, chr_32, 1, LOCAL(1),
  //  push(buf ' ')
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1222, 44),
  POS(1222, 43)
};

static TAB_NUM t_lambda_100[] = {
  1, // locals
  0, // parameters
  // inc &i
  var_inc, 1, var_1208_1_i, 1, var_1208_1_i,
  // e
  var_std__less, 2, var_1207_1_e, var_1208_1_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_101, lambda_102, TAIL_CALL,
  POS(1226, 13),
  POS(1228, 19),
  POS(1227, 13)
};

static TAB_NUM t_lambda_101[] = {
  2, // locals
  0, // parameters
  // range(self s e))
  var_range, 3, var_1204_0_self, var_1223_1_s, var_1207_1_e, 1, LOCAL(1),
  // append(buf range(self s e))
  var_append, 2, var_1206_1_buf, LOCAL(1), 1, LOCAL(2),
  //  append(buf range(self s e))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1229, 29),
  POS(1229, 18),
  POS(1229, 17)
};

static TAB_NUM t_lambda_102[] = {
  2, // locals
  0, // parameters
  // self(i).is_a_whitespace_character
  var_1204_0_self, 1, var_1208_1_i, 1, LOCAL(1),
  // is_a_whitespace_character
  var_is_a_whitespace_character, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), var_break, var_next, TAIL_CALL,
  POS(1232, 19),
  POS(1232, 27),
  POS(1231, 17)
};

static TAB_NUM t_lambda_103[] = {
  2, // locals
  0, // parameters
  // i-1)
  var_std__minus, 2, var_1208_1_i, num_1, 1, LOCAL(1),
  // range(self s i-1)
  var_range, 3, var_1204_0_self, var_1223_1_s, LOCAL(1), 1, LOCAL(2),
  // append &buf range(self s i-1)
  var_append, 2, var_1206_1_buf, LOCAL(2), 1, var_1206_1_buf,
  // next
  var_next, 0, TAIL_CALL,
  POS(1236, 38),
  POS(1236, 25),
  POS(1236, 13),
  POS(1237, 13)
};

static TAB_NUM t_func_std__parse_integer[] = {
  0, // locals
  1, // parameters
  var_1266_0_self,
  // $orig self
  LET, 1, var_1266_0_self, 1, var_1286_1_orig,
  // $negate self .has_prefix. '-'
  var_has_prefix, 2, var_1266_0_self, chr_45, 1, var_1287_1_negate,
  // !self
  var_if, 3, var_1287_1_negate, lambda_110, lambda_111, 1, var_1266_0_self,
  // $value 0
  LET, 1, num_0, 1, var_1293_1_value,
  // cond
  var_cond, 4, lambda_112, lambda_117, lambda_122, lambda_127, TAIL_CALL,
  POS(1286, 3),
  POS(1287, 3),
  POS(1288, 3),
  POS(1293, 3),
  POS(1294, 3)
};

static TAB_NUM t_func_maybe_negated[] = {
  0, // locals
  0, // parameters
  // if
  var_if, 3, var_1287_1_negate, lambda_104, lambda_105, TAIL_CALL,
  POS(1269, 5)
};

static TAB_NUM t_lambda_104[] = {
  1, // locals
  0, // parameters
  // value
  var_std__negate, 1, var_1293_1_value, 1, LOCAL(1),
  //  -value
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1271, 11),
  POS(1271, 9)
};

static TAB_NUM t_lambda_105[] = {
  0, // locals
  0, // parameters
  //  value
  LET, 1, var_1293_1_value, TAIL_CALL,
  POS(1272, 9)
};

static TAB_NUM t_func_partial_match[] = {
  1, // locals
  1, // parameters
  var_1274_17_idx,
  // 1
  var_std__less, 2, num_1, var_1274_17_idx, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_106, lambda_107, TAIL_CALL,
  POS(1276, 13),
  POS(1275, 5)
};

static TAB_NUM t_lambda_106[] = {
  2, // locals
  0, // parameters
  // range(self idx -1) maybe_negated()
  var_range, 3, var_1266_0_self, var_1274_17_idx, minus_num_1, 1, LOCAL(1),
  // maybe_negated()
  func_maybe_negated, 0, 1, LOCAL(2),
  //  range(self idx -1) maybe_negated()
  LET, 2, LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(1277, 10),
  POS(1277, 29),
  POS(1277, 9)
};

static TAB_NUM t_lambda_107[] = {
  0, // locals
  0, // parameters
  //  orig undefined
  LET, 2, var_1286_1_orig, var_undefined, TAIL_CALL,
  POS(1278, 9)
};

static TAB_NUM t_func_exhausted[] = {
  1, // locals
  0, // parameters
  // is_empty
  var_is_empty, 1, var_1266_0_self, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_108, lambda_109, TAIL_CALL,
  POS(1282, 12),
  POS(1281, 5)
};

static TAB_NUM t_lambda_108[] = {
  0, // locals
  0, // parameters
  //  orig undefined
  LET, 2, var_1286_1_orig, var_undefined, TAIL_CALL,
  POS(1283, 9)
};

static TAB_NUM t_lambda_109[] = {
  1, // locals
  0, // parameters
  // maybe_negated()
  func_maybe_negated, 0, 1, LOCAL(1),
  //  "" maybe_negated()
  LET, 2, string_1, LOCAL(1), TAIL_CALL,
  POS(1284, 13),
  POS(1284, 9)
};

static TAB_NUM t_lambda_110[] = {
  1, // locals
  0, // parameters
  // range(self 2 -1)
  var_range, 3, var_1266_0_self, num_2, minus_num_1, 1, LOCAL(1),
  //  range(self 2 -1)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1291, 10),
  POS(1291, 9)
};

static TAB_NUM t_lambda_111[] = {
  0, // locals
  0, // parameters
  //  self
  LET, 1, var_1266_0_self, TAIL_CALL,
  POS(1292, 9)
};

static TAB_NUM t_lambda_112[] = {
  1, // locals
  0, // parameters
  // self .has_prefix. "0b":
  var_has_prefix, 2, var_1266_0_self, str_0b, 1, LOCAL(1),
  //  self .has_prefix. "0b":
  LET, 2, LOCAL(1), lambda_113, TAIL_CALL,
  POS(1295, 8),
  POS(1295, 7)
};

static TAB_NUM t_lambda_113[] = {
  0, // locals
  0, // parameters
  // range &self 3 -1
  var_range, 3, var_1266_0_self, num_3, minus_num_1, 1, var_1266_0_self,
  // for_each self
  var_for_each, 3, var_1266_0_self, lambda_114, func_exhausted, TAIL_CALL,
  POS(1296, 7),
  POS(1297, 7)
};

static TAB_NUM t_lambda_114[] = {
  0, // locals
  2, // parameters
  var_1298_3_idx,
  var_1298_7_chr,
  // case
  var_case, 4, var_1298_7_chr, value_range_1301_1, lambda_115, lambda_116, TAIL_CALL,
  POS(1299, 11)
};

static TAB_NUM t_lambda_115[] = {
  2, // locals
  0, // parameters
  // value << 1)+(chr-'0')
  var_std__shift_left, 2, var_1293_1_value, num_1, 1, LOCAL(1),
  // chr-'0')
  var_std__minus, 2, var_1298_7_chr, chr_48, 1, LOCAL(2),
  // !value (value << 1)+(chr-'0')
  var_std__plus, 2, LOCAL(1), LOCAL(2), 1, var_1293_1_value,
  // next
  var_next, 0, TAIL_CALL,
  POS(1302, 23),
  POS(1302, 36),
  POS(1302, 15),
  POS(1303, 15)
};

static TAB_NUM t_lambda_116[] = {
  0, // locals
  0, // parameters
  // partial_match idx
  func_partial_match, 1, var_1298_3_idx, TAIL_CALL,
  POS(1305, 15)
};

static TAB_NUM t_lambda_117[] = {
  1, // locals
  0, // parameters
  // self .has_prefix. "0o":
  var_has_prefix, 2, var_1266_0_self, str_0o, 1, LOCAL(1),
  //  self .has_prefix. "0o":
  LET, 2, LOCAL(1), lambda_118, TAIL_CALL,
  POS(1307, 8),
  POS(1307, 7)
};

static TAB_NUM t_lambda_118[] = {
  0, // locals
  0, // parameters
  // range &self 3 -1
  var_range, 3, var_1266_0_self, num_3, minus_num_1, 1, var_1266_0_self,
  // for_each self
  var_for_each, 3, var_1266_0_self, lambda_119, func_exhausted, TAIL_CALL,
  POS(1308, 7),
  POS(1309, 7)
};

static TAB_NUM t_lambda_119[] = {
  0, // locals
  2, // parameters
  var_1310_3_idx,
  var_1310_7_chr,
  // case chr
  var_case, 4, var_1310_7_chr, value_range_1312_1, lambda_120, lambda_121, TAIL_CALL,
  POS(1311, 11)
};

static TAB_NUM t_lambda_120[] = {
  2, // locals
  0, // parameters
  // value << 3)+(chr-'0')
  var_std__shift_left, 2, var_1293_1_value, num_3, 1, LOCAL(1),
  // chr-'0')
  var_std__minus, 2, var_1310_7_chr, chr_48, 1, LOCAL(2),
  // !value (value << 3)+(chr-'0')
  var_std__plus, 2, LOCAL(1), LOCAL(2), 1, var_1293_1_value,
  // next
  var_next, 0, TAIL_CALL,
  POS(1313, 23),
  POS(1313, 36),
  POS(1313, 15),
  POS(1314, 15)
};

static TAB_NUM t_lambda_121[] = {
  0, // locals
  0, // parameters
  // partial_match idx
  func_partial_match, 1, var_1310_3_idx, TAIL_CALL,
  POS(1316, 15)
};

static TAB_NUM t_lambda_122[] = {
  1, // locals
  0, // parameters
  // self .has_prefix. "0x":
  var_has_prefix, 2, var_1266_0_self, str_0x, 1, LOCAL(1),
  //  self .has_prefix. "0x":
  LET, 2, LOCAL(1), lambda_123, TAIL_CALL,
  POS(1318, 8),
  POS(1318, 7)
};

static TAB_NUM t_lambda_123[] = {
  0, // locals
  0, // parameters
  // range &self 3 -1
  var_range, 3, var_1266_0_self, num_3, minus_num_1, 1, var_1266_0_self,
  // for_each self
  var_for_each, 3, var_1266_0_self, lambda_124, func_exhausted, TAIL_CALL,
  POS(1319, 7),
  POS(1320, 7)
};

static TAB_NUM t_lambda_124[] = {
  0, // locals
  2, // parameters
  var_1321_3_idx,
  var_1321_7_chr,
  // case chr
  var_case, 8, var_1321_7_chr, value_range_1323_1, lambda_125, value_range_1326_1, lambda_a__f, value_range_1329_1, lambda_A__F, lambda_126, TAIL_CALL,
  POS(1322, 11)
};

static TAB_NUM t_lambda_125[] = {
  2, // locals
  0, // parameters
  // value << 4)+(chr-'0')
  var_std__shift_left, 2, var_1293_1_value, num_4, 1, LOCAL(1),
  // chr-'0')
  var_std__minus, 2, var_1321_7_chr, chr_48, 1, LOCAL(2),
  // !value (value << 4)+(chr-'0')
  var_std__plus, 2, LOCAL(1), LOCAL(2), 1, var_1293_1_value,
  // next
  var_next, 0, TAIL_CALL,
  POS(1324, 23),
  POS(1324, 36),
  POS(1324, 15),
  POS(1325, 15)
};

static TAB_NUM t_lambda_a__f[] = {
  3, // locals
  0, // parameters
  // value << 4)+(chr-'a')+10
  var_std__shift_left, 2, var_1293_1_value, num_4, 1, LOCAL(1),
  // chr-'a')+10
  var_std__minus, 2, var_1321_7_chr, chr_97, 1, LOCAL(2),
  // value << 4)+(chr-'a')+10
  var_std__plus, 2, LOCAL(1), LOCAL(2), 1, LOCAL(3),
  // !value (value << 4)+(chr-'a')+10
  var_std__plus, 2, LOCAL(3), num_10, 1, var_1293_1_value,
  // next
  var_next, 0, TAIL_CALL,
  POS(1327, 23),
  POS(1327, 36),
  POS(1327, 23),
  POS(1327, 15),
  POS(1328, 15)
};

static TAB_NUM t_lambda_A__F[] = {
  3, // locals
  0, // parameters
  // value << 4)+(chr-'A')+10
  var_std__shift_left, 2, var_1293_1_value, num_4, 1, LOCAL(1),
  // chr-'A')+10
  var_std__minus, 2, var_1321_7_chr, chr_65, 1, LOCAL(2),
  // value << 4)+(chr-'A')+10
  var_std__plus, 2, LOCAL(1), LOCAL(2), 1, LOCAL(3),
  // !value (value << 4)+(chr-'A')+10
  var_std__plus, 2, LOCAL(3), num_10, 1, var_1293_1_value,
  // next
  var_next, 0, TAIL_CALL,
  POS(1330, 23),
  POS(1330, 36),
  POS(1330, 23),
  POS(1330, 15),
  POS(1331, 15)
};

static TAB_NUM t_lambda_126[] = {
  0, // locals
  0, // parameters
  // partial_match idx
  func_partial_match, 1, var_1321_3_idx, TAIL_CALL,
  POS(1333, 15)
};

static TAB_NUM t_lambda_127[] = {
  0, // locals
  0, // parameters
  //  true:
  LET, 2, var_true, lambda_128, TAIL_CALL,
  POS(1335, 7)
};

static TAB_NUM t_lambda_128[] = {
  0, // locals
  0, // parameters
  // for_each self
  var_for_each, 3, var_1266_0_self, lambda_129, func_exhausted, TAIL_CALL,
  POS(1336, 7)
};

static TAB_NUM t_lambda_129[] = {
  0, // locals
  2, // parameters
  var_1337_3_idx,
  var_1337_7_chr,
  // case chr
  var_case, 4, var_1337_7_chr, value_range_1323_1, lambda_130, lambda_131, TAIL_CALL,
  POS(1338, 11)
};

static TAB_NUM t_lambda_130[] = {
  2, // locals
  0, // parameters
  // 10*value+(chr-'0')
  var_std__times, 2, num_10, var_1293_1_value, 1, LOCAL(1),
  // chr-'0')
  var_std__minus, 2, var_1337_7_chr, chr_48, 1, LOCAL(2),
  // !value 10*value+(chr-'0')
  var_std__plus, 2, LOCAL(1), LOCAL(2), 1, var_1293_1_value,
  // next
  var_next, 0, TAIL_CALL,
  POS(1340, 22),
  POS(1340, 32),
  POS(1340, 15),
  POS(1341, 15)
};

static TAB_NUM t_lambda_131[] = {
  0, // locals
  0, // parameters
  // partial_match idx
  func_partial_match, 1, var_1337_3_idx, TAIL_CALL,
  POS(1343, 15)
};

static TAB_NUM t_func_std__parse_number[] = {
  1, // locals
  1, // parameters
  var_1373_0_self,
  // $i 1
  LET, 1, num_1, 1, var_1375_1_i,
  // $n length_of(self)
  var_length_of, 1, var_1373_0_self, 1, var_1376_1_n,
  // n
  var_std__less, 2, var_1376_1_n, var_1375_1_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_132, lambda_133, TAIL_CALL,
  POS(1375, 3),
  POS(1376, 3),
  POS(1378, 9),
  POS(1377, 3)
};

static TAB_NUM t_lambda_132[] = {
  0, // locals
  0, // parameters
  //  self undefined
  LET, 2, var_1373_0_self, var_undefined, TAIL_CALL,
  POS(1379, 7)
};

static TAB_NUM t_lambda_133[] = {
  3, // locals
  0, // parameters
  // $sign_chr self(1)
  var_1373_0_self, 1, num_1, 1, var_1381_1_sign_chr,
  // sign_chr == '-' || sign_chr == '+' &i -> i+1
  var_std__equal, 2, var_1381_1_sign_chr, chr_45, 1, LOCAL(1),
  // sign_chr == '-' || sign_chr == '+' &i -> i+1
  var_std__or, 2, LOCAL(1), lambda_134, 1, LOCAL(2),
  // update_if sign_chr == '-' || sign_chr == '+' &i -> i+1
  var_update_if, 3, LOCAL(2), var_1375_1_i, lambda_135, 1, var_1375_1_i,
  // self(i) == '0' && i+1 < n:
  var_1373_0_self, 1, var_1375_1_i, 1, LOCAL(1),
  // self(i) == '0' && i+1 < n:
  var_std__equal, 2, LOCAL(1), chr_48, 1, LOCAL(2),
  // self(i) == '0' && i+1 < n:
  var_std__and, 2, LOCAL(2), lambda_136, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_137, func_parse, TAIL_CALL,
  POS(1381, 7),
  POS(1382, 17),
  POS(1382, 17),
  POS(1382, 7),
  POS(1384, 9),
  POS(1384, 9),
  POS(1384, 9),
  POS(1383, 7)
};

static TAB_NUM t_lambda_134[] = {
  1, // locals
  0, // parameters
  // sign_chr == '+' &i -> i+1
  var_std__equal, 2, var_1381_1_sign_chr, chr_43, 1, LOCAL(1),
  // sign_chr == '+' &i -> i+1
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1382, 36),
  POS(1382, 36)
};

static TAB_NUM t_lambda_135[] = {
  1, // locals
  0, // parameters
  // i+1
  var_std__plus, 2, var_1375_1_i, num_1, 1, LOCAL(1),
  //  i+1
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1382, 58),
  POS(1382, 57)
};

static TAB_NUM t_lambda_136[] = {
  2, // locals
  0, // parameters
  // i+1 < n:
  var_std__plus, 2, var_1375_1_i, num_1, 1, LOCAL(1),
  // i+1 < n:
  var_std__less, 2, LOCAL(1), var_1376_1_n, 1, LOCAL(2),
  // i+1 < n:
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1384, 27),
  POS(1384, 27),
  POS(1384, 27)
};

static TAB_NUM t_lambda_137[] = {
  2, // locals
  0, // parameters
  // i+1)
  var_std__plus, 2, var_1375_1_i, num_1, 1, LOCAL(1),
  // self(i+1)
  var_1373_0_self, 1, LOCAL(1), 1, LOCAL(2),
  // case self(i+1)
  var_case, 8, LOCAL(2), chr_98, lambda_b, chr_111, lambda_o, chr_120, lambda_x, func_parse, TAIL_CALL,
  POS(1385, 21),
  POS(1385, 16),
  POS(1385, 11)
};

static TAB_NUM t_lambda_b[] = {
  1, // locals
  0, // parameters
  // i+2
  var_std__plus, 2, var_1375_1_i, num_2, 1, LOCAL(1),
  // parse_binary self i+2
  func_parse_binary, 2, var_1373_0_self, LOCAL(1), TAIL_CALL,
  POS(1386, 36),
  POS(1386, 18)
};

static TAB_NUM t_lambda_o[] = {
  1, // locals
  0, // parameters
  // i+2
  var_std__plus, 2, var_1375_1_i, num_2, 1, LOCAL(1),
  // parse_octal self i+2
  func_parse_octal, 2, var_1373_0_self, LOCAL(1), TAIL_CALL,
  POS(1387, 35),
  POS(1387, 18)
};

static TAB_NUM t_lambda_x[] = {
  1, // locals
  0, // parameters
  // i+2
  var_std__plus, 2, var_1375_1_i, num_2, 1, LOCAL(1),
  // parse_hex self i+2
  var_parse_hex, 2, var_1373_0_self, LOCAL(1), TAIL_CALL,
  POS(1388, 33),
  POS(1388, 18)
};

static TAB_NUM t_func_parse[] = {
  0, // locals
  0, // parameters
  // skip_one_ore_more_digits:
  func_skip_one_ore_more_digits, 1, lambda_skip_one_ore_more_digits, TAIL_CALL,
  POS(1393, 5)
};

static TAB_NUM t_lambda_skip_one_ore_more_digits[] = {
  1, // locals
  0, // parameters
  // n return_integer
  var_std__less, 2, var_1376_1_n, var_1375_1_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), func_return_integer, lambda_138, TAIL_CALL,
  POS(1395, 13),
  POS(1394, 7)
};

static TAB_NUM t_lambda_138[] = {
  1, // locals
  0, // parameters
  // self(i)
  var_1373_0_self, 1, var_1375_1_i, 1, LOCAL(1),
  // case self(i)
  var_case, 6, LOCAL(1), chr_46, lambda_139, sequence_1408_1, func_handle_exponent, func_return_integer, TAIL_CALL,
  POS(1397, 16),
  POS(1397, 11)
};

static TAB_NUM t_lambda_139[] = {
  0, // locals
  0, // parameters
  // !i i+1
  var_std__plus, 2, var_1375_1_i, num_1, 1, var_1375_1_i,
  // skip_one_ore_more_digits:
  func_skip_one_ore_more_digits, 1, lambda_2_skip_one_ore_more_digits, TAIL_CALL,
  POS(1399, 15),
  POS(1400, 15)
};

static TAB_NUM t_lambda_2_skip_one_ore_more_digits[] = {
  1, // locals
  0, // parameters
  // n
  var_std__less, 2, var_1376_1_n, var_1375_1_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), func_return_real, lambda_140, TAIL_CALL,
  POS(1402, 23),
  POS(1401, 17)
};

static TAB_NUM t_lambda_140[] = {
  1, // locals
  0, // parameters
  // self(i)
  var_1373_0_self, 1, var_1375_1_i, 1, LOCAL(1),
  // case self(i)
  var_case, 4, LOCAL(1), sequence_1408_1, func_handle_exponent, func_return_real, TAIL_CALL,
  POS(1405, 26),
  POS(1405, 21)
};

static TAB_NUM t_func_skip_one_ore_more_digits[] = {
  1, // locals
  1, // parameters
  var_1411_28_cont,
  // n
  var_std__less, 2, var_1376_1_n, var_1375_1_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_141, lambda_142, TAIL_CALL,
  POS(1413, 13),
  POS(1412, 7)
};

static TAB_NUM t_lambda_141[] = {
  0, // locals
  0, // parameters
  //  self undefined
  LET, 2, var_1373_0_self, var_undefined, TAIL_CALL,
  POS(1414, 11)
};

static TAB_NUM t_lambda_142[] = {
  2, // locals
  0, // parameters
  // $digit self(i)
  var_1373_0_self, 1, var_1375_1_i, 1, var_1416_1_digit,
  // digit < '0' || digit > '9'
  var_std__less, 2, var_1416_1_digit, chr_48, 1, LOCAL(1),
  // digit < '0' || digit > '9'
  var_std__or, 2, LOCAL(1), lambda_143, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_144, lambda_145, TAIL_CALL,
  POS(1416, 11),
  POS(1418, 13),
  POS(1418, 13),
  POS(1417, 11)
};

static TAB_NUM t_lambda_143[] = {
  1, // locals
  0, // parameters
  // 9'
  var_std__less, 2, chr_57, var_1416_1_digit, 1, LOCAL(1),
  // digit > '9'
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1418, 37),
  POS(1418, 28)
};

static TAB_NUM t_lambda_144[] = {
  0, // locals
  0, // parameters
  //  self undefined
  LET, 2, var_1373_0_self, var_undefined, TAIL_CALL,
  POS(1419, 15)
};

static TAB_NUM t_lambda_145[] = {
  0, // locals
  0, // parameters
  // loop:
  var_loop, 1, lambda_8_loop, TAIL_CALL,
  POS(1421, 15)
};

static TAB_NUM t_lambda_8_loop[] = {
  1, // locals
  0, // parameters
  // !i i+1
  var_std__plus, 2, var_1375_1_i, num_1, 1, var_1375_1_i,
  // n
  var_std__less, 2, var_1376_1_n, var_1375_1_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), var_1411_28_cont, lambda_146, TAIL_CALL,
  POS(1422, 17),
  POS(1424, 23),
  POS(1423, 17)
};

static TAB_NUM t_lambda_146[] = {
  3, // locals
  0, // parameters
  // $next_digit self(i)
  var_1373_0_self, 1, var_1375_1_i, 1, var_1427_1_next_digit,
  // next_digit >= '0' && next_digit <= '9'
  var_std__less, 2, var_1427_1_next_digit, chr_48, 1, LOCAL(1),
  // next_digit >= '0' && next_digit <= '9'
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // next_digit >= '0' && next_digit <= '9'
  var_std__and, 2, LOCAL(2), lambda_147, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), var_next, var_1411_28_cont, TAIL_CALL,
  POS(1427, 21),
  POS(1429, 23),
  POS(1429, 23),
  POS(1429, 23),
  POS(1428, 21)
};

static TAB_NUM t_lambda_147[] = {
  2, // locals
  0, // parameters
  // 9'
  var_std__less, 2, chr_57, var_1427_1_next_digit, 1, LOCAL(1),
  // 9'
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // next_digit <= '9'
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1429, 59),
  POS(1429, 59),
  POS(1429, 44)
};

static TAB_NUM t_func_handle_exponent[] = {
  1, // locals
  0, // parameters
  // !i i+1
  var_std__plus, 2, var_1375_1_i, num_1, 1, var_1375_1_i,
  // n
  var_std__less, 2, var_1376_1_n, var_1375_1_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_148, lambda_149, TAIL_CALL,
  POS(1434, 7),
  POS(1436, 13),
  POS(1435, 7)
};

static TAB_NUM t_lambda_148[] = {
  0, // locals
  0, // parameters
  //  self undefined
  LET, 2, var_1373_0_self, var_undefined, TAIL_CALL,
  POS(1437, 11)
};

static TAB_NUM t_lambda_149[] = {
  2, // locals
  0, // parameters
  // $exp_sign_chr self(i)
  var_1373_0_self, 1, var_1375_1_i, 1, var_1439_1_exp_sign_chr,
  // exp_sign_chr == '-' || exp_sign_chr == '+' &i -> i+1
  var_std__equal, 2, var_1439_1_exp_sign_chr, chr_45, 1, LOCAL(1),
  // exp_sign_chr == '-' || exp_sign_chr == '+' &i -> i+1
  var_std__or, 2, LOCAL(1), lambda_150, 1, LOCAL(2),
  // update_if exp_sign_chr == '-' || exp_sign_chr == '+' &i -> i+1
  var_update_if, 3, LOCAL(2), var_1375_1_i, lambda_151, 1, var_1375_1_i,
  // skip_one_ore_more_digits return_real
  func_skip_one_ore_more_digits, 1, func_return_real, TAIL_CALL,
  POS(1439, 11),
  POS(1440, 21),
  POS(1440, 21),
  POS(1440, 11),
  POS(1441, 11)
};

static TAB_NUM t_lambda_150[] = {
  1, // locals
  0, // parameters
  // exp_sign_chr == '+' &i -> i+1
  var_std__equal, 2, var_1439_1_exp_sign_chr, chr_43, 1, LOCAL(1),
  // exp_sign_chr == '+' &i -> i+1
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1440, 44),
  POS(1440, 44)
};

static TAB_NUM t_lambda_151[] = {
  1, // locals
  0, // parameters
  // i+1
  var_std__plus, 2, var_1375_1_i, num_1, 1, LOCAL(1),
  //  i+1
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1440, 70),
  POS(1440, 69)
};

static TAB_NUM t_func_return_integer[] = {
  4, // locals
  0, // parameters
  // range(self i -1) integer(range(self 1 i-1))
  var_range, 3, var_1373_0_self, var_1375_1_i, minus_num_1, 1, LOCAL(1),
  // i-1))
  var_std__minus, 2, var_1375_1_i, num_1, 1, LOCAL(2),
  // range(self 1 i-1))
  var_range, 3, var_1373_0_self, num_1, LOCAL(2), 1, LOCAL(3),
  // integer(range(self 1 i-1))
  var_integer, 1, LOCAL(3), 1, LOCAL(4),
  //  range(self i -1) integer(range(self 1 i-1))
  LET, 2, LOCAL(1), LOCAL(4), TAIL_CALL,
  POS(1443, 24),
  POS(1443, 62),
  POS(1443, 49),
  POS(1443, 41),
  POS(1443, 23)
};

static TAB_NUM t_func_return_real[] = {
  4, // locals
  0, // parameters
  // range(self i -1) real(range(self 1 i-1))
  var_range, 3, var_1373_0_self, var_1375_1_i, minus_num_1, 1, LOCAL(1),
  // i-1))
  var_std__minus, 2, var_1375_1_i, num_1, 1, LOCAL(2),
  // range(self 1 i-1))
  var_range, 3, var_1373_0_self, num_1, LOCAL(2), 1, LOCAL(3),
  // real(range(self 1 i-1))
  var_real, 1, LOCAL(3), 1, LOCAL(4),
  //  range(self i -1) real(range(self 1 i-1))
  LET, 2, LOCAL(1), LOCAL(4), TAIL_CALL,
  POS(1445, 21),
  POS(1445, 56),
  POS(1445, 43),
  POS(1445, 38),
  POS(1445, 20)
};

static TAB_NUM t_func_parse_binary[] = {
  1, // locals
  2, // parameters
  var_1447_16_str,
  var_1447_20_i,
  // $n length_of(str)
  var_length_of, 1, var_1447_16_str, 1, var_1448_1_n,
  // n -> str undefined
  var_std__less, 2, var_1448_1_n, var_1447_20_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_152, lambda_153, TAIL_CALL,
  POS(1448, 3),
  POS(1450, 9),
  POS(1449, 3)
};

static TAB_NUM t_lambda_152[] = {
  0, // locals
  0, // parameters
  //  str undefined
  LET, 2, var_1447_16_str, var_undefined, TAIL_CALL,
  POS(1450, 13)
};

static TAB_NUM t_lambda_153[] = {
  2, // locals
  0, // parameters
  // $digit str(i)
  var_1447_16_str, 1, var_1447_20_i, 1, var_1452_1_digit,
  // digit < '0' || digit > '1'
  var_std__less, 2, var_1452_1_digit, chr_48, 1, LOCAL(1),
  // digit < '0' || digit > '1'
  var_std__or, 2, LOCAL(1), lambda_154, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_155, lambda_156, TAIL_CALL,
  POS(1452, 7),
  POS(1454, 9),
  POS(1454, 9),
  POS(1453, 7)
};

static TAB_NUM t_lambda_154[] = {
  1, // locals
  0, // parameters
  // 1'
  var_std__less, 2, chr_49, var_1452_1_digit, 1, LOCAL(1),
  // digit > '1'
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1454, 33),
  POS(1454, 24)
};

static TAB_NUM t_lambda_155[] = {
  0, // locals
  0, // parameters
  //  str undefined
  LET, 2, var_1447_16_str, var_undefined, TAIL_CALL,
  POS(1455, 11)
};

static TAB_NUM t_lambda_156[] = {
  0, // locals
  0, // parameters
  // $value digit-'0'
  var_std__minus, 2, var_1452_1_digit, chr_48, 1, var_1457_1_value,
  // loop:
  var_loop, 1, lambda_9_loop, TAIL_CALL,
  POS(1457, 11),
  POS(1458, 11)
};

static TAB_NUM t_lambda_9_loop[] = {
  1, // locals
  0, // parameters
  // !i i+1
  var_std__plus, 2, var_1447_20_i, num_1, 1, var_1447_20_i,
  // n
  var_std__less, 2, var_1448_1_n, var_1447_20_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_157, lambda_158, TAIL_CALL,
  POS(1459, 13),
  POS(1461, 19),
  POS(1460, 13)
};

static TAB_NUM t_lambda_157[] = {
  0, // locals
  0, // parameters
  //  "" value
  LET, 2, string_1, var_1457_1_value, TAIL_CALL,
  POS(1462, 17)
};

static TAB_NUM t_lambda_158[] = {
  3, // locals
  0, // parameters
  // $next_digit str(i)
  var_1447_16_str, 1, var_1447_20_i, 1, var_1464_1_next_digit,
  // next_digit >= '0' && next_digit <= '1':
  var_std__less, 2, var_1464_1_next_digit, chr_48, 1, LOCAL(1),
  // next_digit >= '0' && next_digit <= '1':
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // next_digit >= '0' && next_digit <= '1':
  var_std__and, 2, LOCAL(2), lambda_159, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_160, lambda_161, TAIL_CALL,
  POS(1464, 17),
  POS(1466, 19),
  POS(1466, 19),
  POS(1466, 19),
  POS(1465, 17)
};

static TAB_NUM t_lambda_159[] = {
  2, // locals
  0, // parameters
  // 1':
  var_std__less, 2, chr_49, var_1464_1_next_digit, 1, LOCAL(1),
  // 1':
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // next_digit <= '1':
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1466, 55),
  POS(1466, 55),
  POS(1466, 40)
};

static TAB_NUM t_lambda_160[] = {
  2, // locals
  0, // parameters
  // value << 1)+(next_digit-'0')
  var_std__shift_left, 2, var_1457_1_value, num_1, 1, LOCAL(1),
  // next_digit-'0')
  var_std__minus, 2, var_1464_1_next_digit, chr_48, 1, LOCAL(2),
  // !value (value << 1)+(next_digit-'0')
  var_std__plus, 2, LOCAL(1), LOCAL(2), 1, var_1457_1_value,
  // next
  var_next, 0, TAIL_CALL,
  POS(1467, 29),
  POS(1467, 42),
  POS(1467, 21),
  POS(1468, 21)
};

static TAB_NUM t_lambda_161[] = {
  1, // locals
  0, // parameters
  // range(str i -1) value
  var_range, 3, var_1447_16_str, var_1447_20_i, minus_num_1, 1, LOCAL(1),
  //  range(str i -1) value
  LET, 2, LOCAL(1), var_1457_1_value, TAIL_CALL,
  POS(1469, 22),
  POS(1469, 21)
};

static TAB_NUM t_func_parse_octal[] = {
  1, // locals
  2, // parameters
  var_1471_15_str,
  var_1471_19_i,
  // $n length_of(str)
  var_length_of, 1, var_1471_15_str, 1, var_1472_1_n,
  // n -> str undefined
  var_std__less, 2, var_1472_1_n, var_1471_19_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_162, lambda_163, TAIL_CALL,
  POS(1472, 3),
  POS(1474, 9),
  POS(1473, 3)
};

static TAB_NUM t_lambda_162[] = {
  0, // locals
  0, // parameters
  //  str undefined
  LET, 2, var_1471_15_str, var_undefined, TAIL_CALL,
  POS(1474, 13)
};

static TAB_NUM t_lambda_163[] = {
  2, // locals
  0, // parameters
  // $digit str(i)
  var_1471_15_str, 1, var_1471_19_i, 1, var_1476_1_digit,
  // digit < '0' || digit > '7'
  var_std__less, 2, var_1476_1_digit, chr_48, 1, LOCAL(1),
  // digit < '0' || digit > '7'
  var_std__or, 2, LOCAL(1), lambda_164, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_165, lambda_166, TAIL_CALL,
  POS(1476, 7),
  POS(1478, 9),
  POS(1478, 9),
  POS(1477, 7)
};

static TAB_NUM t_lambda_164[] = {
  1, // locals
  0, // parameters
  // 7'
  var_std__less, 2, chr_55, var_1476_1_digit, 1, LOCAL(1),
  // digit > '7'
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1478, 33),
  POS(1478, 24)
};

static TAB_NUM t_lambda_165[] = {
  0, // locals
  0, // parameters
  //  str undefined
  LET, 2, var_1471_15_str, var_undefined, TAIL_CALL,
  POS(1479, 11)
};

static TAB_NUM t_lambda_166[] = {
  0, // locals
  0, // parameters
  // $value digit-'0'
  var_std__minus, 2, var_1476_1_digit, chr_48, 1, var_1481_1_value,
  // loop:
  var_loop, 1, lambda_10_loop, TAIL_CALL,
  POS(1481, 11),
  POS(1482, 11)
};

static TAB_NUM t_lambda_10_loop[] = {
  1, // locals
  0, // parameters
  // !i i+1
  var_std__plus, 2, var_1471_19_i, num_1, 1, var_1471_19_i,
  // n
  var_std__less, 2, var_1472_1_n, var_1471_19_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_167, lambda_168, TAIL_CALL,
  POS(1483, 13),
  POS(1485, 19),
  POS(1484, 13)
};

static TAB_NUM t_lambda_167[] = {
  0, // locals
  0, // parameters
  //  "" value
  LET, 2, string_1, var_1481_1_value, TAIL_CALL,
  POS(1486, 17)
};

static TAB_NUM t_lambda_168[] = {
  3, // locals
  0, // parameters
  // $next_digit str(i)
  var_1471_15_str, 1, var_1471_19_i, 1, var_1488_1_next_digit,
  // next_digit >= '0' && next_digit <= '7':
  var_std__less, 2, var_1488_1_next_digit, chr_48, 1, LOCAL(1),
  // next_digit >= '0' && next_digit <= '7':
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // next_digit >= '0' && next_digit <= '7':
  var_std__and, 2, LOCAL(2), lambda_169, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_170, lambda_171, TAIL_CALL,
  POS(1488, 17),
  POS(1490, 19),
  POS(1490, 19),
  POS(1490, 19),
  POS(1489, 17)
};

static TAB_NUM t_lambda_169[] = {
  2, // locals
  0, // parameters
  // 7':
  var_std__less, 2, chr_55, var_1488_1_next_digit, 1, LOCAL(1),
  // 7':
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // next_digit <= '7':
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1490, 55),
  POS(1490, 55),
  POS(1490, 40)
};

static TAB_NUM t_lambda_170[] = {
  2, // locals
  0, // parameters
  // value << 3)+(next_digit-'0')
  var_std__shift_left, 2, var_1481_1_value, num_3, 1, LOCAL(1),
  // next_digit-'0')
  var_std__minus, 2, var_1488_1_next_digit, chr_48, 1, LOCAL(2),
  // !value (value << 3)+(next_digit-'0')
  var_std__plus, 2, LOCAL(1), LOCAL(2), 1, var_1481_1_value,
  // next
  var_next, 0, TAIL_CALL,
  POS(1491, 29),
  POS(1491, 42),
  POS(1491, 21),
  POS(1492, 21)
};

static TAB_NUM t_lambda_171[] = {
  1, // locals
  0, // parameters
  // range(str i -1) value
  var_range, 3, var_1471_15_str, var_1471_19_i, minus_num_1, 1, LOCAL(1),
  //  range(str i -1) value
  LET, 2, LOCAL(1), var_1481_1_value, TAIL_CALL,
  POS(1493, 22),
  POS(1493, 21)
};

static TAB_NUM t_func_std__parse_hex[] = {
  1, // locals
  -2, // parameters
  MANDATORY_PARAMETER, var_1523_0_str,
  num_1, var_1524_0_i,
  // $n length_of(str)
  var_length_of, 1, var_1523_0_str, 1, var_1526_1_n,
  // n -> str undefined
  var_std__less, 2, var_1526_1_n, var_1524_0_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_172, lambda_173, TAIL_CALL,
  POS(1526, 3),
  POS(1528, 9),
  POS(1527, 3)
};

static TAB_NUM t_lambda_172[] = {
  0, // locals
  0, // parameters
  //  str undefined
  LET, 2, var_1523_0_str, var_undefined, TAIL_CALL,
  POS(1528, 13)
};

static TAB_NUM t_lambda_173[] = {
  0, // locals
  0, // parameters
  // $digit str(i)
  var_1523_0_str, 1, var_1524_0_i, 1, var_1530_1_digit,
  // cond
  var_cond, 4, lambda_174, lambda_177, lambda_180, lambda_183, TAIL_CALL,
  POS(1530, 7),
  POS(1531, 7)
};

static TAB_NUM t_lambda_174[] = {
  3, // locals
  0, // parameters
  // digit >= '0' && digit <= '9':
  var_std__less, 2, var_1530_1_digit, chr_48, 1, LOCAL(1),
  // digit >= '0' && digit <= '9':
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // digit >= '0' && digit <= '9':
  var_std__and, 2, LOCAL(2), lambda_175, 1, LOCAL(3),
  //  digit >= '0' && digit <= '9':
  LET, 2, LOCAL(3), lambda_176, TAIL_CALL,
  POS(1532, 12),
  POS(1532, 12),
  POS(1532, 12),
  POS(1532, 11)
};

static TAB_NUM t_lambda_175[] = {
  2, // locals
  0, // parameters
  // 9':
  var_std__less, 2, chr_57, var_1530_1_digit, 1, LOCAL(1),
  // 9':
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // digit <= '9':
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1532, 38),
  POS(1532, 38),
  POS(1532, 28)
};

static TAB_NUM t_lambda_176[] = {
  1, // locals
  0, // parameters
  // digit-'0'
  var_std__minus, 2, var_1530_1_digit, chr_48, 1, LOCAL(1),
  // handle_more_digits digit-'0'
  func_handle_more_digits, 1, LOCAL(1), TAIL_CALL,
  POS(1533, 30),
  POS(1533, 11)
};

static TAB_NUM t_lambda_177[] = {
  3, // locals
  0, // parameters
  // digit >= 'a' && digit <= 'f':
  var_std__less, 2, var_1530_1_digit, chr_97, 1, LOCAL(1),
  // digit >= 'a' && digit <= 'f':
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // digit >= 'a' && digit <= 'f':
  var_std__and, 2, LOCAL(2), lambda_178, 1, LOCAL(3),
  //  digit >= 'a' && digit <= 'f':
  LET, 2, LOCAL(3), lambda_179, TAIL_CALL,
  POS(1534, 12),
  POS(1534, 12),
  POS(1534, 12),
  POS(1534, 11)
};

static TAB_NUM t_lambda_178[] = {
  2, // locals
  0, // parameters
  // f':
  var_std__less, 2, chr_102, var_1530_1_digit, 1, LOCAL(1),
  // f':
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // digit <= 'f':
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1534, 38),
  POS(1534, 38),
  POS(1534, 28)
};

static TAB_NUM t_lambda_179[] = {
  2, // locals
  0, // parameters
  // digit-'a')+10
  var_std__minus, 2, var_1530_1_digit, chr_97, 1, LOCAL(1),
  // digit-'a')+10
  var_std__plus, 2, LOCAL(1), num_10, 1, LOCAL(2),
  // handle_more_digits (digit-'a')+10
  func_handle_more_digits, 1, LOCAL(2), TAIL_CALL,
  POS(1535, 31),
  POS(1535, 31),
  POS(1535, 11)
};

static TAB_NUM t_lambda_180[] = {
  3, // locals
  0, // parameters
  // digit >= 'A' && digit <= 'F':
  var_std__less, 2, var_1530_1_digit, chr_65, 1, LOCAL(1),
  // digit >= 'A' && digit <= 'F':
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // digit >= 'A' && digit <= 'F':
  var_std__and, 2, LOCAL(2), lambda_181, 1, LOCAL(3),
  //  digit >= 'A' && digit <= 'F':
  LET, 2, LOCAL(3), lambda_182, TAIL_CALL,
  POS(1536, 12),
  POS(1536, 12),
  POS(1536, 12),
  POS(1536, 11)
};

static TAB_NUM t_lambda_181[] = {
  2, // locals
  0, // parameters
  // F':
  var_std__less, 2, chr_70, var_1530_1_digit, 1, LOCAL(1),
  // F':
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // digit <= 'F':
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1536, 38),
  POS(1536, 38),
  POS(1536, 28)
};

static TAB_NUM t_lambda_182[] = {
  2, // locals
  0, // parameters
  // digit-'A')+10
  var_std__minus, 2, var_1530_1_digit, chr_65, 1, LOCAL(1),
  // digit-'A')+10
  var_std__plus, 2, LOCAL(1), num_10, 1, LOCAL(2),
  // handle_more_digits (digit-'A')+10
  func_handle_more_digits, 1, LOCAL(2), TAIL_CALL,
  POS(1537, 31),
  POS(1537, 31),
  POS(1537, 11)
};

static TAB_NUM t_lambda_183[] = {
  0, // locals
  0, // parameters
  //  true -> str undefined
  LET, 2, var_true, lambda_184, TAIL_CALL,
  POS(1538, 11)
};

static TAB_NUM t_lambda_184[] = {
  0, // locals
  0, // parameters
  //  str undefined
  LET, 2, var_1523_0_str, var_undefined, TAIL_CALL,
  POS(1538, 19)
};

static TAB_NUM t_func_handle_more_digits[] = {
  0, // locals
  1, // parameters
  var_1540_22_value,
  // loop:
  var_loop, 1, lambda_11_loop, TAIL_CALL,
  POS(1541, 9)
};

static TAB_NUM t_lambda_11_loop[] = {
  1, // locals
  0, // parameters
  // !i i+1
  var_std__plus, 2, var_1524_0_i, num_1, 1, var_1524_0_i,
  // n
  var_std__less, 2, var_1526_1_n, var_1524_0_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_185, lambda_186, TAIL_CALL,
  POS(1542, 11),
  POS(1544, 17),
  POS(1543, 11)
};

static TAB_NUM t_lambda_185[] = {
  0, // locals
  0, // parameters
  //  "" value
  LET, 2, string_1, var_1540_22_value, TAIL_CALL,
  POS(1545, 15)
};

static TAB_NUM t_lambda_186[] = {
  0, // locals
  0, // parameters
  // $next_digit str(i)
  var_1523_0_str, 1, var_1524_0_i, 1, var_1547_1_next_digit,
  // cond
  var_cond, 4, lambda_187, lambda_190, lambda_193, lambda_196, TAIL_CALL,
  POS(1547, 15),
  POS(1548, 15)
};

static TAB_NUM t_lambda_187[] = {
  3, // locals
  0, // parameters
  // next_digit >= '0' && next_digit <= '9':
  var_std__less, 2, var_1547_1_next_digit, chr_48, 1, LOCAL(1),
  // next_digit >= '0' && next_digit <= '9':
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // next_digit >= '0' && next_digit <= '9':
  var_std__and, 2, LOCAL(2), lambda_188, 1, LOCAL(3),
  //  next_digit >= '0' && next_digit <= '9':
  LET, 2, LOCAL(3), lambda_189, TAIL_CALL,
  POS(1549, 20),
  POS(1549, 20),
  POS(1549, 20),
  POS(1549, 19)
};

static TAB_NUM t_lambda_188[] = {
  2, // locals
  0, // parameters
  // 9':
  var_std__less, 2, chr_57, var_1547_1_next_digit, 1, LOCAL(1),
  // 9':
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // next_digit <= '9':
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1549, 56),
  POS(1549, 56),
  POS(1549, 41)
};

static TAB_NUM t_lambda_189[] = {
  2, // locals
  0, // parameters
  // value << 4)+(next_digit-'0')
  var_std__shift_left, 2, var_1540_22_value, num_4, 1, LOCAL(1),
  // next_digit-'0')
  var_std__minus, 2, var_1547_1_next_digit, chr_48, 1, LOCAL(2),
  // !value (value << 4)+(next_digit-'0')
  var_std__plus, 2, LOCAL(1), LOCAL(2), 1, var_1540_22_value,
  // next
  var_next, 0, TAIL_CALL,
  POS(1550, 27),
  POS(1550, 40),
  POS(1550, 19),
  POS(1551, 19)
};

static TAB_NUM t_lambda_190[] = {
  3, // locals
  0, // parameters
  // next_digit >= 'a' && next_digit <= 'f':
  var_std__less, 2, var_1547_1_next_digit, chr_97, 1, LOCAL(1),
  // next_digit >= 'a' && next_digit <= 'f':
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // next_digit >= 'a' && next_digit <= 'f':
  var_std__and, 2, LOCAL(2), lambda_191, 1, LOCAL(3),
  //  next_digit >= 'a' && next_digit <= 'f':
  LET, 2, LOCAL(3), lambda_192, TAIL_CALL,
  POS(1552, 20),
  POS(1552, 20),
  POS(1552, 20),
  POS(1552, 19)
};

static TAB_NUM t_lambda_191[] = {
  2, // locals
  0, // parameters
  // f':
  var_std__less, 2, chr_102, var_1547_1_next_digit, 1, LOCAL(1),
  // f':
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // next_digit <= 'f':
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1552, 56),
  POS(1552, 56),
  POS(1552, 41)
};

static TAB_NUM t_lambda_192[] = {
  3, // locals
  0, // parameters
  // value << 4)+(next_digit-'a')+10
  var_std__shift_left, 2, var_1540_22_value, num_4, 1, LOCAL(1),
  // next_digit-'a')+10
  var_std__minus, 2, var_1547_1_next_digit, chr_97, 1, LOCAL(2),
  // value << 4)+(next_digit-'a')+10
  var_std__plus, 2, LOCAL(1), LOCAL(2), 1, LOCAL(3),
  // !value (value << 4)+(next_digit-'a')+10
  var_std__plus, 2, LOCAL(3), num_10, 1, var_1540_22_value,
  // next
  var_next, 0, TAIL_CALL,
  POS(1553, 27),
  POS(1553, 40),
  POS(1553, 27),
  POS(1553, 19),
  POS(1554, 19)
};

static TAB_NUM t_lambda_193[] = {
  3, // locals
  0, // parameters
  // next_digit >= 'A' && next_digit <= 'F':
  var_std__less, 2, var_1547_1_next_digit, chr_65, 1, LOCAL(1),
  // next_digit >= 'A' && next_digit <= 'F':
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // next_digit >= 'A' && next_digit <= 'F':
  var_std__and, 2, LOCAL(2), lambda_194, 1, LOCAL(3),
  //  next_digit >= 'A' && next_digit <= 'F':
  LET, 2, LOCAL(3), lambda_195, TAIL_CALL,
  POS(1555, 20),
  POS(1555, 20),
  POS(1555, 20),
  POS(1555, 19)
};

static TAB_NUM t_lambda_194[] = {
  2, // locals
  0, // parameters
  // F':
  var_std__less, 2, chr_70, var_1547_1_next_digit, 1, LOCAL(1),
  // F':
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // next_digit <= 'F':
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1555, 56),
  POS(1555, 56),
  POS(1555, 41)
};

static TAB_NUM t_lambda_195[] = {
  3, // locals
  0, // parameters
  // value << 4)+(next_digit-'A')+10
  var_std__shift_left, 2, var_1540_22_value, num_4, 1, LOCAL(1),
  // next_digit-'A')+10
  var_std__minus, 2, var_1547_1_next_digit, chr_65, 1, LOCAL(2),
  // value << 4)+(next_digit-'A')+10
  var_std__plus, 2, LOCAL(1), LOCAL(2), 1, LOCAL(3),
  // !value (value << 4)+(next_digit-'A')+10
  var_std__plus, 2, LOCAL(3), num_10, 1, var_1540_22_value,
  // next
  var_next, 0, TAIL_CALL,
  POS(1556, 27),
  POS(1556, 40),
  POS(1556, 27),
  POS(1556, 19),
  POS(1557, 19)
};

static TAB_NUM t_lambda_196[] = {
  0, // locals
  0, // parameters
  //  true -> range(str i -1) value
  LET, 2, var_true, lambda_197, TAIL_CALL,
  POS(1558, 19)
};

static TAB_NUM t_lambda_197[] = {
  1, // locals
  0, // parameters
  // range(str i -1) value
  var_range, 3, var_1523_0_str, var_1524_0_i, minus_num_1, 1, LOCAL(1),
  //  range(str i -1) value
  LET, 2, LOCAL(1), var_1540_22_value, TAIL_CALL,
  POS(1558, 28),
  POS(1558, 27)
};

static TAB_NUM t_func_std_types__string___to_integer[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 1594_0_self
  // parse_integer &self $value
  var_parse_integer, 1, LOCAL(2), 2, LOCAL(2), var_1596_21_value,
  // self == ""
  var_std__equal, 2, LOCAL(2), string_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_198, lambda_199, TAIL_CALL,
  POS(1596, 3),
  POS(1598, 5),
  POS(1597, 3)
};

static TAB_NUM t_lambda_198[] = {
  0, // locals
  0, // parameters
  //  value
  LET, 1, var_1596_21_value, TAIL_CALL,
  POS(1599, 7)
};

static TAB_NUM t_lambda_199[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(1600, 7)
};

static TAB_NUM t_func_std_types__string___to_number[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 1636_0_self
  // parse_number &self $value
  var_parse_number, 1, LOCAL(2), 2, LOCAL(2), var_1638_20_value,
  // self == ""
  var_std__equal, 2, LOCAL(2), string_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_200, lambda_201, TAIL_CALL,
  POS(1638, 3),
  POS(1640, 5),
  POS(1639, 3)
};

static TAB_NUM t_lambda_200[] = {
  0, // locals
  0, // parameters
  //  value
  LET, 1, var_1638_20_value, TAIL_CALL,
  POS(1641, 7)
};

static TAB_NUM t_lambda_201[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(1642, 7)
};

static TAB_NUM t_func_std__map_characters[] = {
  2, // locals
  2, // parameters
  var_1665_0_self,
  var_1666_0_function,
  // parameter_count_of(function) == 2
  var_parameter_count_of, 1, var_1666_0_function, 1, LOCAL(1),
  // parameter_count_of(function) == 2
  var_std__equal, 2, LOCAL(1), num_2, 1, LOCAL(2),
  // $map
  var_if, 3, LOCAL(2), lambda_202, lambda_208, 1, var_1668_1_map,
  // length_of(self)
  var_length_of, 1, var_1665_0_self, 1, LOCAL(1),
  // map 1 length_of(self)
  var_1668_1_map, 2, num_1, LOCAL(1), TAIL_CALL,
  POS(1670, 7),
  POS(1670, 7),
  POS(1668, 3),
  POS(1698, 9),
  POS(1698, 3)
};

static TAB_NUM t_lambda_202[] = {
  0, // locals
  0, // parameters
  // 
  LET, 1, lambda_203, TAIL_CALL,
  POS(1671, 9)
};

static TAB_NUM t_lambda_203[] = {
  1, // locals
  2, // parameters
  var_1672_3_s,
  var_1672_5_e,
  // s < e:
  var_std__less, 2, var_1672_3_s, var_1672_5_e, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_204, lambda_205, TAIL_CALL,
  POS(1674, 13),
  POS(1673, 11)
};

static TAB_NUM t_lambda_204[] = {
  4, // locals
  0, // parameters
  // s+e) >> 1
  var_std__plus, 2, var_1672_3_s, var_1672_5_e, 1, LOCAL(1),
  // $m (s+e) >> 1
  var_std__shift_right, 2, LOCAL(1), num_1, 1, LOCAL(4),
  // map(s m)
  var_1668_1_map, 2, var_1672_3_s, LOCAL(4), 1, LOCAL(1),
  // m+1 e)
  var_std__plus, 2, LOCAL(4), num_1, 1, LOCAL(2),
  // map(m+1 e)
  var_1668_1_map, 2, LOCAL(2), var_1672_5_e, 1, LOCAL(3),
  // append
  var_append, 2, LOCAL(1), LOCAL(3), TAIL_CALL,
  POS(1675, 19),
  POS(1675, 15),
  POS(1677, 17),
  POS(1678, 21),
  POS(1678, 17),
  POS(1676, 15)
};

static TAB_NUM t_lambda_205[] = {
  1, // locals
  0, // parameters
  // e
  var_std__less, 2, var_1672_5_e, var_1672_3_s, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_206, lambda_207, TAIL_CALL,
  POS(1681, 21),
  POS(1680, 15)
};

static TAB_NUM t_lambda_206[] = {
  0, // locals
  0, // parameters
  //  ""
  LET, 1, string_1, TAIL_CALL,
  POS(1682, 19)
};

static TAB_NUM t_lambda_207[] = {
  3, // locals
  0, // parameters
  // self(s)))
  var_1665_0_self, 1, var_1672_3_s, 1, LOCAL(1),
  // function(s self(s)))
  var_1666_0_function, 2, var_1672_3_s, LOCAL(1), 1, LOCAL(2),
  // string(function(s self(s)))
  var_string, 1, LOCAL(2), 1, LOCAL(3),
  //  string(function(s self(s)))
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(1683, 38),
  POS(1683, 27),
  POS(1683, 20),
  POS(1683, 19)
};

static TAB_NUM t_lambda_208[] = {
  0, // locals
  0, // parameters
  // 
  LET, 1, lambda_209, TAIL_CALL,
  POS(1684, 9)
};

static TAB_NUM t_lambda_209[] = {
  1, // locals
  2, // parameters
  var_1685_3_s,
  var_1685_5_e,
  // s < e:
  var_std__less, 2, var_1685_3_s, var_1685_5_e, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_210, lambda_211, TAIL_CALL,
  POS(1687, 13),
  POS(1686, 11)
};

static TAB_NUM t_lambda_210[] = {
  4, // locals
  0, // parameters
  // s+e) >> 1
  var_std__plus, 2, var_1685_3_s, var_1685_5_e, 1, LOCAL(1),
  // $m (s+e) >> 1
  var_std__shift_right, 2, LOCAL(1), num_1, 1, LOCAL(4),
  // map(s m)
  var_1668_1_map, 2, var_1685_3_s, LOCAL(4), 1, LOCAL(1),
  // m+1 e)
  var_std__plus, 2, LOCAL(4), num_1, 1, LOCAL(2),
  // map(m+1 e)
  var_1668_1_map, 2, LOCAL(2), var_1685_5_e, 1, LOCAL(3),
  // append
  var_append, 2, LOCAL(1), LOCAL(3), TAIL_CALL,
  POS(1688, 19),
  POS(1688, 15),
  POS(1690, 17),
  POS(1691, 21),
  POS(1691, 17),
  POS(1689, 15)
};

static TAB_NUM t_lambda_211[] = {
  1, // locals
  0, // parameters
  // e
  var_std__less, 2, var_1685_5_e, var_1685_3_s, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_212, lambda_213, TAIL_CALL,
  POS(1694, 21),
  POS(1693, 15)
};

static TAB_NUM t_lambda_212[] = {
  0, // locals
  0, // parameters
  //  ""
  LET, 1, string_1, TAIL_CALL,
  POS(1695, 19)
};

static TAB_NUM t_lambda_213[] = {
  3, // locals
  0, // parameters
  // self(s)))
  var_1665_0_self, 1, var_1685_3_s, 1, LOCAL(1),
  // function(self(s)))
  var_1666_0_function, 1, LOCAL(1), 1, LOCAL(2),
  // string(function(self(s)))
  var_string, 1, LOCAL(2), 1, LOCAL(3),
  //  string(function(self(s)))
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(1696, 36),
  POS(1696, 27),
  POS(1696, 20),
  POS(1696, 19)
};

static TAB_NUM t_func_std_types__string___to_upper_case[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 1718_0_self
  // map_characters self to_upper_case
  var_map_characters, 2, LOCAL(1), var_to_upper_case, TAIL_CALL,
  POS(1720, 3)
};

static TAB_NUM t_func_std_types__string___to_lower_case[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 1740_0_self
  // map_characters self to_lower_case
  var_map_characters, 2, LOCAL(1), var_to_lower_case, TAIL_CALL,
  POS(1742, 3)
};

static TAB_NUM t_func_std_types__string___to_title_case[] = {
  0, // locals
  1, // parameters
  var_1762_0_self,
  // map_characters self: (idx chr)
  var_map_characters, 2, var_1762_0_self, lambda_214, TAIL_CALL,
  POS(1764, 3)
};

static TAB_NUM t_lambda_214[] = {
  2, // locals
  2, // parameters
  var_1764_22_idx,
  var_1764_26_chr,
  // 1 && self(idx-1).is_a_letter_character
  var_std__less, 2, num_1, var_1764_22_idx, 1, LOCAL(1),
  // 1 && self(idx-1).is_a_letter_character
  var_std__and, 2, LOCAL(1), lambda_215, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_216, lambda_217, TAIL_CALL,
  POS(1766, 13),
  POS(1766, 13),
  POS(1765, 5)
};

static TAB_NUM t_lambda_215[] = {
  3, // locals
  0, // parameters
  // idx-1).is_a_letter_character
  var_std__minus, 2, var_1764_22_idx, num_1, 1, LOCAL(1),
  // self(idx-1).is_a_letter_character
  var_1762_0_self, 1, LOCAL(1), 1, LOCAL(2),
  // is_a_letter_character
  var_is_a_letter_character, 1, LOCAL(2), 1, LOCAL(3),
  // self(idx-1).is_a_letter_character
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(1766, 23),
  POS(1766, 18),
  POS(1766, 30),
  POS(1766, 18)
};

static TAB_NUM t_lambda_216[] = {
  1, // locals
  0, // parameters
  // to_lower_case
  var_to_lower_case, 1, var_1764_26_chr, 1, LOCAL(1),
  //  chr.to_lower_case
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1767, 14),
  POS(1767, 9)
};

static TAB_NUM t_lambda_217[] = {
  1, // locals
  0, // parameters
  // to_title_case
  var_to_title_case, 1, var_1764_26_chr, 1, LOCAL(1),
  //  chr.to_title_case
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1768, 14),
  POS(1768, 9)
};

static TAB_NUM t_func_std_types__string___to_sentence_case[] = {
  0, // locals
  1, // parameters
  var_1788_0_self,
  // map_characters self: (idx chr)
  var_map_characters, 2, var_1788_0_self, lambda_218, TAIL_CALL,
  POS(1790, 3)
};

static TAB_NUM t_lambda_218[] = {
  2, // locals
  2, // parameters
  var_1790_22_idx,
  var_1790_26_chr,
  // idx == 1 && self(idx).is_a_letter_character
  var_std__equal, 2, var_1790_22_idx, num_1, 1, LOCAL(1),
  // idx == 1 && self(idx).is_a_letter_character
  var_std__and, 2, LOCAL(1), lambda_219, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_220, lambda_221, TAIL_CALL,
  POS(1792, 7),
  POS(1792, 7),
  POS(1791, 5)
};

static TAB_NUM t_lambda_219[] = {
  2, // locals
  0, // parameters
  // self(idx).is_a_letter_character
  var_1788_0_self, 1, var_1790_22_idx, 1, LOCAL(1),
  // is_a_letter_character
  var_is_a_letter_character, 1, LOCAL(1), 1, LOCAL(2),
  // self(idx).is_a_letter_character
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1792, 19),
  POS(1792, 29),
  POS(1792, 19)
};

static TAB_NUM t_lambda_220[] = {
  1, // locals
  0, // parameters
  // to_title_case
  var_to_title_case, 1, var_1790_26_chr, 1, LOCAL(1),
  //  chr.to_title_case
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1793, 14),
  POS(1793, 9)
};

static TAB_NUM t_lambda_221[] = {
  1, // locals
  0, // parameters
  // to_lower_case
  var_to_lower_case, 1, var_1790_26_chr, 1, LOCAL(1),
  //  chr.to_lower_case
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1794, 14),
  POS(1794, 9)
};

static TAB_NUM t_func_std__delete_all[] = {
  1, // locals
  -2, // parameters
  MANDATORY_PARAMETER, LOCAL(1), // 1817_0_text
  REST_PARAMETER, var_1818_0_expressions,
  // $new_text ""
  LET, 1, string_1, 1, var_1834_1_new_text,
  // delete_all text
  func_delete_all, 1, LOCAL(1), TAIL_CALL,
  POS(1834, 3),
  POS(1835, 3)
};

static TAB_NUM t_func_delete_all[] = {
  1, // locals
  1, // parameters
  var_1820_14_txt,
  // is_empty
  var_is_empty, 1, var_1820_14_txt, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_222, lambda_223, TAIL_CALL,
  POS(1822, 11),
  POS(1821, 5)
};

static TAB_NUM t_lambda_222[] = {
  0, // locals
  0, // parameters
  //  new_text
  LET, 1, var_1834_1_new_text, TAIL_CALL,
  POS(1823, 9)
};

static TAB_NUM t_lambda_223[] = {
  0, // locals
  0, // parameters
  // for_each expressions
  var_for_each, 3, var_1818_0_expressions, lambda_224, lambda_226, TAIL_CALL,
  POS(1825, 9)
};

static TAB_NUM t_lambda_224[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 1826_3_expression
  // $len match(expression txt)
  var_match, 2, LOCAL(2), var_1820_14_txt, 1, var_1827_1_len,
  // is_defined next:
  var_is_defined, 1, var_1827_1_len, 1, LOCAL(1),
  // if_not len.is_defined next:
  var_if_not, 3, LOCAL(1), var_next, lambda_225, TAIL_CALL,
  POS(1827, 13),
  POS(1828, 24),
  POS(1828, 13)
};

static TAB_NUM t_lambda_225[] = {
  2, // locals
  0, // parameters
  // len+1 -1)
  var_std__plus, 2, var_1827_1_len, num_1, 1, LOCAL(1),
  // range(txt len+1 -1)
  var_range, 3, var_1820_14_txt, LOCAL(1), minus_num_1, 1, LOCAL(2),
  // delete_all range(txt len+1 -1)
  func_delete_all, 1, LOCAL(2), TAIL_CALL,
  POS(1829, 36),
  POS(1829, 26),
  POS(1829, 15)
};

static TAB_NUM t_lambda_226[] = {
  1, // locals
  0, // parameters
  // txt(1)
  var_1820_14_txt, 1, num_1, 1, LOCAL(1),
  // push &new_text txt(1)
  var_push, 2, var_1834_1_new_text, LOCAL(1), 1, var_1834_1_new_text,
  // range(txt 2 -1)
  var_range, 3, var_1820_14_txt, num_2, minus_num_1, 1, LOCAL(1),
  // delete_all range(txt 2 -1)
  func_delete_all, 1, LOCAL(1), TAIL_CALL,
  POS(1831, 28),
  POS(1831, 13),
  POS(1832, 24),
  POS(1832, 13)
};

static TAB_NUM t_func_std__replace_all[] = {
  1, // locals
  -2, // parameters
  MANDATORY_PARAMETER, LOCAL(1), // 1858_0_text
  REST_PARAMETER, var_1859_0_args,
  // $new_text ""
  LET, 1, string_1, 1, var_1882_1_new_text,
  // replace_all text
  func_replace_all, 1, LOCAL(1), TAIL_CALL,
  POS(1882, 3),
  POS(1883, 3)
};

static TAB_NUM t_func_replace_all[] = {
  1, // locals
  1, // parameters
  var_1861_15_txt,
  // is_empty
  var_is_empty, 1, var_1861_15_txt, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_227, lambda_228, TAIL_CALL,
  POS(1863, 11),
  POS(1862, 5)
};

static TAB_NUM t_lambda_227[] = {
  0, // locals
  0, // parameters
  //  new_text
  LET, 1, var_1882_1_new_text, TAIL_CALL,
  POS(1864, 9)
};

static TAB_NUM t_lambda_228[] = {
  0, // locals
  0, // parameters
  // for_each args
  var_for_each, 3, var_1859_0_args, lambda_229, lambda_232, TAIL_CALL,
  POS(1866, 9)
};

static TAB_NUM t_lambda_229[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 1867_3_arg
  // arg $expression $replacement
  LOCAL(2), 0, 2, LOCAL(3), var_1868_17_replacement,
  // $len match(expression txt)
  var_match, 2, LOCAL(3), var_1861_15_txt, 1, var_1869_1_len,
  // is_defined next:
  var_is_defined, 1, var_1869_1_len, 1, LOCAL(1),
  // if_not len.is_defined next:
  var_if_not, 3, LOCAL(1), var_next, lambda_230, TAIL_CALL,
  POS(1868, 13),
  POS(1869, 13),
  POS(1870, 24),
  POS(1870, 13)
};

static TAB_NUM t_lambda_230[] = {
  1, // locals
  0, // parameters
  // is_a_string:
  var_is_a_string, 1, var_1868_17_replacement, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_replacement_is_a_string, lambda_231, TAIL_CALL,
  POS(1872, 29),
  POS(1871, 15)
};

static TAB_NUM t_lambda_replacement_is_a_string[] = {
  2, // locals
  0, // parameters
  // append &new_text replacement
  var_append, 2, var_1882_1_new_text, var_1868_17_replacement, 1, var_1882_1_new_text,
  // len+1 -1)
  var_std__plus, 2, var_1869_1_len, num_1, 1, LOCAL(1),
  // range(txt len+1 -1)
  var_range, 3, var_1861_15_txt, LOCAL(1), minus_num_1, 1, LOCAL(2),
  // replace_all range(txt len+1 -1)
  func_replace_all, 1, LOCAL(2), TAIL_CALL,
  POS(1873, 19),
  POS(1874, 41),
  POS(1874, 31),
  POS(1874, 19)
};

static TAB_NUM t_lambda_231[] = {
  2, // locals
  0, // parameters
  // range(txt 1 len))
  var_range, 3, var_1861_15_txt, num_1, var_1869_1_len, 1, LOCAL(1),
  // replacement(range(txt 1 len))
  var_1868_17_replacement, 1, LOCAL(1), 1, LOCAL(2),
  // append &new_text replacement(range(txt 1 len))
  var_append, 2, var_1882_1_new_text, LOCAL(2), 1, var_1882_1_new_text,
  // len+1 -1)
  var_std__plus, 2, var_1869_1_len, num_1, 1, LOCAL(1),
  // range(txt len+1 -1)
  var_range, 3, var_1861_15_txt, LOCAL(1), minus_num_1, 1, LOCAL(2),
  // replace_all range(txt len+1 -1)
  func_replace_all, 1, LOCAL(2), TAIL_CALL,
  POS(1876, 48),
  POS(1876, 36),
  POS(1876, 19),
  POS(1877, 41),
  POS(1877, 31),
  POS(1877, 19)
};

static TAB_NUM t_lambda_232[] = {
  1, // locals
  0, // parameters
  // txt(1)
  var_1861_15_txt, 1, num_1, 1, LOCAL(1),
  // push &new_text txt(1)
  var_push, 2, var_1882_1_new_text, LOCAL(1), 1, var_1882_1_new_text,
  // range(txt 2 -1)
  var_range, 3, var_1861_15_txt, num_2, minus_num_1, 1, LOCAL(1),
  // replace_all range(txt 2 -1)
  func_replace_all, 1, LOCAL(1), TAIL_CALL,
  POS(1879, 28),
  POS(1879, 13),
  POS(1880, 25),
  POS(1880, 13)
};

static TAB_NUM t_func_std__replace_first[] = {
  1, // locals
  -2, // parameters
  MANDATORY_PARAMETER, LOCAL(1), // 1906_0_text
  REST_PARAMETER, var_1907_0_args,
  // $new_text ""
  LET, 1, string_1, 1, var_1929_1_new_text,
  // replace_first text
  func_replace_first, 1, LOCAL(1), TAIL_CALL,
  POS(1929, 3),
  POS(1930, 3)
};

static TAB_NUM t_func_replace_first[] = {
  1, // locals
  1, // parameters
  var_1909_17_txt,
  // is_empty
  var_is_empty, 1, var_1909_17_txt, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_233, lambda_234, TAIL_CALL,
  POS(1911, 11),
  POS(1910, 5)
};

static TAB_NUM t_lambda_233[] = {
  0, // locals
  0, // parameters
  //  new_text
  LET, 1, var_1929_1_new_text, TAIL_CALL,
  POS(1912, 9)
};

static TAB_NUM t_lambda_234[] = {
  0, // locals
  0, // parameters
  // for_each args
  var_for_each, 3, var_1907_0_args, lambda_235, lambda_238, TAIL_CALL,
  POS(1914, 9)
};

static TAB_NUM t_lambda_235[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 1915_3_arg
  // arg $expression $replacement
  LOCAL(2), 0, 2, LOCAL(3), var_1916_17_replacement,
  // $len match(expression txt)
  var_match, 2, LOCAL(3), var_1909_17_txt, 1, var_1917_1_len,
  // is_defined
  var_is_defined, 1, var_1917_1_len, 1, LOCAL(1),
  // if_not
  var_if_not, 3, LOCAL(1), var_next, lambda_236, TAIL_CALL,
  POS(1916, 13),
  POS(1917, 13),
  POS(1919, 19),
  POS(1918, 13)
};

static TAB_NUM t_lambda_236[] = {
  3, // locals
  0, // parameters
  // is_a_string &replacement
  var_is_a_string, 1, var_1916_17_replacement, 1, LOCAL(1),
  // update_if_not replacement.is_a_string &replacement
  var_update_if_not, 3, LOCAL(1), var_1916_17_replacement, lambda_237, 1, var_1916_17_replacement,
  // len+1 -1))
  var_std__plus, 2, var_1917_1_len, num_1, 1, LOCAL(1),
  // range(txt len+1 -1))
  var_range, 3, var_1909_17_txt, LOCAL(1), minus_num_1, 1, LOCAL(2),
  // append(new_text replacement range(txt len+1 -1))
  var_append, 3, var_1929_1_new_text, var_1916_17_replacement, LOCAL(2), 1, LOCAL(3),
  // -> append(new_text replacement range(txt len+1 -1))
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(1922, 43),
  POS(1922, 17),
  POS(1924, 58),
  POS(1924, 48),
  POS(1924, 20),
  POS(1924, 17)
};

static TAB_NUM t_lambda_237[] = {
  2, // locals
  0, // parameters
  // range(txt 1 len))
  var_range, 3, var_1909_17_txt, num_1, var_1917_1_len, 1, LOCAL(1),
  // replacement(range(txt 1 len))
  var_1916_17_replacement, 1, LOCAL(1), 1, LOCAL(2),
  //  replacement(range(txt 1 len))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1923, 34),
  POS(1923, 22),
  POS(1923, 21)
};

static TAB_NUM t_lambda_238[] = {
  1, // locals
  0, // parameters
  // txt(1)
  var_1909_17_txt, 1, num_1, 1, LOCAL(1),
  // push &new_text txt(1)
  var_push, 2, var_1929_1_new_text, LOCAL(1), 1, var_1929_1_new_text,
  // range(txt 2 -1)
  var_range, 3, var_1909_17_txt, num_2, minus_num_1, 1, LOCAL(1),
  // replace_first range(txt 2 -1)
  func_replace_first, 1, LOCAL(1), TAIL_CALL,
  POS(1926, 28),
  POS(1926, 13),
  POS(1927, 27),
  POS(1927, 13)
};

static TAB_NUM t_func_std__count_occurrences[] = {
  1, // locals
  2, // parameters
  LOCAL(1), // 1951_0_text
  var_1952_0_expr,
  // search_next text 0
  func_search_next, 2, LOCAL(1), num_0, TAIL_CALL,
  POS(1966, 3)
};

static TAB_NUM t_func_search_next[] = {
  1, // locals
  2, // parameters
  var_1954_15_txt,
  var_1954_19_count,
  // txt == ""
  var_std__equal, 2, var_1954_15_txt, string_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_239, lambda_240, TAIL_CALL,
  POS(1956, 7),
  POS(1955, 5)
};

static TAB_NUM t_lambda_239[] = {
  0, // locals
  0, // parameters
  //  count
  LET, 1, var_1954_19_count, TAIL_CALL,
  POS(1957, 9)
};

static TAB_NUM t_lambda_240[] = {
  1, // locals
  0, // parameters
  // $n match(expr txt)
  var_match, 2, var_1952_0_expr, var_1954_15_txt, 1, var_1959_1_n,
  // is_defined:
  var_is_defined, 1, var_1959_1_n, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_n_is_defined, lambda_241, TAIL_CALL,
  POS(1959, 9),
  POS(1961, 13),
  POS(1960, 9)
};

static TAB_NUM t_lambda_n_is_defined[] = {
  3, // locals
  0, // parameters
  // n+1 -1) count+1
  var_std__plus, 2, var_1959_1_n, num_1, 1, LOCAL(1),
  // range(txt n+1 -1) count+1
  var_range, 3, var_1954_15_txt, LOCAL(1), minus_num_1, 1, LOCAL(2),
  // count+1
  var_std__plus, 2, var_1954_19_count, num_1, 1, LOCAL(3),
  // search_next range(txt n+1 -1) count+1
  func_search_next, 2, LOCAL(2), LOCAL(3), TAIL_CALL,
  POS(1962, 35),
  POS(1962, 25),
  POS(1962, 43),
  POS(1962, 13)
};

static TAB_NUM t_lambda_241[] = {
  1, // locals
  0, // parameters
  // range(txt 2 -1) count
  var_range, 3, var_1954_15_txt, num_2, minus_num_1, 1, LOCAL(1),
  // search_next range(txt 2 -1) count
  func_search_next, 2, LOCAL(1), var_1954_19_count, TAIL_CALL,
  POS(1964, 25),
  POS(1964, 13)
};

static TAB_NUM t_func_std__partition[] = {
  0, // locals
  -2, // parameters
  MANDATORY_PARAMETER, var_1993_0_text,
  REST_PARAMETER, var_1994_0_separators,
  // $n length_of(text)
  var_length_of, 1, var_1993_0_text, 1, var_1996_1_n,
  // partition 1 n
  func_partition, 2, num_1, var_1996_1_n, TAIL_CALL,
  POS(1996, 3),
  POS(1997, 3)
};

static TAB_NUM t_func_partition[] = {
  3, // locals
  2, // parameters
  var_1999_13_s,
  var_1999_15_e,
  // e+1-s > FORK_TEXT_THRESHOLD: # recurse to exploit parallel execution
  var_std__plus, 2, var_1999_15_e, num_1, 1, LOCAL(1),
  // e+1-s > FORK_TEXT_THRESHOLD: # recurse to exploit parallel execution
  var_std__minus, 2, LOCAL(1), var_1999_13_s, 1, LOCAL(2),
  // FORK_TEXT_THRESHOLD: # recurse to exploit parallel execution
  var_std__less, 2, num_300, LOCAL(2), 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_242, lambda_243, TAIL_CALL,
  POS(2001, 7),
  POS(2001, 7),
  POS(2001, 15),
  POS(2000, 5)
};

static TAB_NUM t_lambda_242[] = {
  4, // locals
  0, // parameters
  // s+e) .div. 2
  var_std__plus, 2, var_1999_13_s, var_1999_15_e, 1, LOCAL(1),
  // $m (s+e) .div. 2
  var_div, 2, LOCAL(1), num_2, 1, LOCAL(4),
  // partition(s m) partition(m+1 e)
  func_partition, 2, var_1999_13_s, LOCAL(4), 1, LOCAL(1),
  // m+1 e)
  var_std__plus, 2, LOCAL(4), num_1, 1, LOCAL(2),
  // partition(m+1 e)
  func_partition, 2, LOCAL(2), var_1999_15_e, 1, LOCAL(3),
  // append partition(s m) partition(m+1 e)
  var_append, 2, LOCAL(1), LOCAL(3), TAIL_CALL,
  POS(2002, 13),
  POS(2002, 9),
  POS(2003, 16),
  POS(2003, 41),
  POS(2003, 31),
  POS(2003, 9)
};

static TAB_NUM t_lambda_243[] = {
  0, // locals
  0, // parameters
  // $parts empty_list
  LET, 1, var_empty_list, 1, var_2005_1_parts,
  // $ls undefined
  LET, 1, var_undefined, 1, var_2006_1_ls,
  // from_to s e
  var_from_to, 4, var_1999_13_s, var_1999_15_e, lambda_244, lambda_247, TAIL_CALL,
  POS(2005, 9),
  POS(2006, 9),
  POS(2007, 9)
};

static TAB_NUM t_lambda_244[] = {
  2, // locals
  1, // parameters
  var_2008_3_i,
  // text(i)) next:
  var_1993_0_text, 1, var_2008_3_i, 1, LOCAL(1),
  // any_of(separators equal text(i)) next:
  var_any_of, 3, var_1994_0_separators, var_equal, LOCAL(1), 1, LOCAL(2),
  // if_not any_of(separators equal text(i)) next:
  var_if_not, 3, LOCAL(2), var_next, lambda_245, TAIL_CALL,
  POS(2009, 44),
  POS(2009, 20),
  POS(2009, 13)
};

static TAB_NUM t_lambda_245[] = {
  1, // locals
  0, // parameters
  // is_defined:
  var_is_defined, 1, var_2006_1_ls, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_ls_is_defined, lambda_246, TAIL_CALL,
  POS(2011, 20),
  POS(2010, 15)
};

static TAB_NUM t_lambda_ls_is_defined[] = {
  2, // locals
  0, // parameters
  // i-1)
  var_std__minus, 2, var_2008_3_i, num_1, 1, LOCAL(1),
  // range(text ls i-1)
  var_range, 3, var_1993_0_text, var_2006_1_ls, LOCAL(1), 1, LOCAL(2),
  // push &parts range(text ls i-1)
  var_push, 2, var_2005_1_parts, LOCAL(2), 1, var_2005_1_parts,
  // !ls i
  LET, 1, var_2008_3_i, 1, var_2006_1_ls,
  // next
  var_next, 0, TAIL_CALL,
  POS(2012, 45),
  POS(2012, 31),
  POS(2012, 19),
  POS(2013, 19),
  POS(2014, 19)
};

static TAB_NUM t_lambda_246[] = {
  0, // locals
  0, // parameters
  // !ls i
  LET, 1, var_2008_3_i, 1, var_2006_1_ls,
  // next
  var_next, 0, TAIL_CALL,
  POS(2016, 19),
  POS(2017, 19)
};

static TAB_NUM t_lambda_247[] = {
  2, // locals
  0, // parameters
  // is_defined && ls <= e:
  var_is_defined, 1, var_2006_1_ls, 1, LOCAL(1),
  // is_defined && ls <= e:
  var_std__and, 2, LOCAL(1), lambda_248, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_249, lambda_253, TAIL_CALL,
  POS(2020, 18),
  POS(2020, 18),
  POS(2019, 13)
};

static TAB_NUM t_lambda_248[] = {
  2, // locals
  0, // parameters
  // e:
  var_std__less, 2, var_1999_15_e, var_2006_1_ls, 1, LOCAL(1),
  // e:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // ls <= e:
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2020, 38),
  POS(2020, 38),
  POS(2020, 32)
};

static TAB_NUM t_lambda_249[] = {
  1, // locals
  0, // parameters
  // e == n:
  var_std__equal, 2, var_1999_15_e, var_1996_1_n, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_250, lambda_251, TAIL_CALL,
  POS(2022, 19),
  POS(2021, 17)
};

static TAB_NUM t_lambda_250[] = {
  2, // locals
  0, // parameters
  // range(text ls e))
  var_range, 3, var_1993_0_text, var_2006_1_ls, var_1999_15_e, 1, LOCAL(1),
  // push(parts range(text ls e))
  var_push, 2, var_2005_1_parts, LOCAL(1), 1, LOCAL(2),
  // -> push(parts range(text ls e))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2023, 35),
  POS(2023, 24),
  POS(2023, 21)
};

static TAB_NUM t_lambda_251[] = {
  0, // locals
  0, // parameters
  // loop: # the last part extends into the next block
  var_loop, 1, lambda_12_loop, TAIL_CALL,
  POS(2025, 21)
};

static TAB_NUM t_lambda_12_loop[] = {
  2, // locals
  0, // parameters
  // !e e+1
  var_std__plus, 2, var_1999_15_e, num_1, 1, var_1999_15_e,
  // text(e))
  var_1993_0_text, 1, var_1999_15_e, 1, LOCAL(1),
  // any_of(separators equal text(e))
  var_any_of, 3, var_1994_0_separators, var_equal, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_252, var_next, TAIL_CALL,
  POS(2026, 23),
  POS(2028, 49),
  POS(2028, 25),
  POS(2027, 23)
};

static TAB_NUM t_lambda_252[] = {
  3, // locals
  0, // parameters
  // e-1))
  var_std__minus, 2, var_1999_15_e, num_1, 1, LOCAL(1),
  // range(text ls e-1))
  var_range, 3, var_1993_0_text, var_2006_1_ls, LOCAL(1), 1, LOCAL(2),
  // push(parts range(text ls e-1))
  var_push, 2, var_2005_1_parts, LOCAL(2), 1, LOCAL(3),
  //  push(parts range(text ls e-1))
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(2029, 53),
  POS(2029, 39),
  POS(2029, 28),
  POS(2029, 27)
};

static TAB_NUM t_lambda_253[] = {
  0, // locals
  0, // parameters
  //  parts
  LET, 1, var_2005_1_parts, TAIL_CALL,
  POS(2031, 17)
};

static TAB_NUM t_func_std__split_into_lines[] = {
  0, // locals
  1, // parameters
  var_2073_25_text,
  // $lines empty_list
  LET, 1, var_empty_list, 1, var_2074_1_lines,
  // $i 1
  LET, 1, num_1, 1, var_2075_1_i,
  // $n length_of(text)
  var_length_of, 1, var_2073_25_text, 1, var_2076_1_n,
  // $s i
  LET, 1, var_2075_1_i, 1, var_2077_1_s,
  // loop:
  var_loop, 1, lambda_13_loop, TAIL_CALL,
  POS(2074, 3),
  POS(2075, 3),
  POS(2076, 3),
  POS(2077, 3),
  POS(2078, 3)
};

static TAB_NUM t_lambda_13_loop[] = {
  1, // locals
  0, // parameters
  // n
  var_std__less, 2, var_2076_1_n, var_2075_1_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_254, lambda_257, TAIL_CALL,
  POS(2080, 11),
  POS(2079, 5)
};

static TAB_NUM t_lambda_254[] = {
  3, // locals
  0, // parameters
  // n
  var_std__less, 2, var_2076_1_n, var_2077_1_s, 1, LOCAL(1),
  // n
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_255, lambda_256, 1, LOCAL(3),
  // 
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(2083, 16),
  POS(2083, 16),
  POS(2082, 9),
  POS(2081, 9)
};

static TAB_NUM t_lambda_255[] = {
  2, // locals
  0, // parameters
  // range(text s n))
  var_range, 3, var_2073_25_text, var_2077_1_s, var_2076_1_n, 1, LOCAL(1),
  // push(lines range(text s n))
  var_push, 2, var_2074_1_lines, LOCAL(1), 1, LOCAL(2),
  //  push(lines range(text s n))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2084, 25),
  POS(2084, 14),
  POS(2084, 13)
};

static TAB_NUM t_lambda_256[] = {
  0, // locals
  0, // parameters
  //  lines
  LET, 1, var_2074_1_lines, TAIL_CALL,
  POS(2085, 13)
};

static TAB_NUM t_lambda_257[] = {
  2, // locals
  0, // parameters
  // text(i) == '@nl;':
  var_2073_25_text, 1, var_2075_1_i, 1, LOCAL(1),
  // text(i) == '@nl;':
  var_std__equal, 2, LOCAL(1), chr_10, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_258, lambda_259, TAIL_CALL,
  POS(2088, 11),
  POS(2088, 11),
  POS(2087, 9)
};

static TAB_NUM t_lambda_258[] = {
  1, // locals
  0, // parameters
  // range(text s i)
  var_range, 3, var_2073_25_text, var_2077_1_s, var_2075_1_i, 1, LOCAL(1),
  // push &lines range(text s i)
  var_push, 2, var_2074_1_lines, LOCAL(1), 1, var_2074_1_lines,
  // !i i+1
  var_std__plus, 2, var_2075_1_i, num_1, 1, var_2075_1_i,
  // !s i
  LET, 1, var_2075_1_i, 1, var_2077_1_s,
  // next
  var_next, 0, TAIL_CALL,
  POS(2089, 25),
  POS(2089, 13),
  POS(2090, 13),
  POS(2091, 13),
  POS(2092, 13)
};

static TAB_NUM t_lambda_259[] = {
  0, // locals
  0, // parameters
  // !i i+1
  var_std__plus, 2, var_2075_1_i, num_1, 1, var_2075_1_i,
  // next
  var_next, 0, TAIL_CALL,
  POS(2094, 13),
  POS(2095, 13)
};

static TAB_NUM t_func_std__split_into_indented_lines[] = {
  1, // locals
  1, // parameters
  var_2156_0_text,
  // $n length_of(text)
  var_length_of, 1, var_2156_0_text, 1, LOCAL(1),
  // split 1 n
  func_split, 2, num_1, LOCAL(1), TAIL_CALL,
  POS(2158, 3),
  POS(2159, 3)
};

static TAB_NUM t_func_split[] = {
  3, // locals
  2, // parameters
  var_2161_9_s,
  var_2161_11_e,
  // e+1-s > FORK_TEXT_THRESHOLD: # recurse to exploit parallel execution
  var_std__plus, 2, var_2161_11_e, num_1, 1, LOCAL(1),
  // e+1-s > FORK_TEXT_THRESHOLD: # recurse to exploit parallel execution
  var_std__minus, 2, LOCAL(1), var_2161_9_s, 1, LOCAL(2),
  // FORK_TEXT_THRESHOLD: # recurse to exploit parallel execution
  var_std__less, 2, num_300, LOCAL(2), 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_260, lambda_261, TAIL_CALL,
  POS(2163, 7),
  POS(2163, 7),
  POS(2163, 15),
  POS(2162, 5)
};

static TAB_NUM t_lambda_260[] = {
  4, // locals
  0, // parameters
  // s+e) .div. 2
  var_std__plus, 2, var_2161_9_s, var_2161_11_e, 1, LOCAL(1),
  // $m (s+e) .div. 2
  var_div, 2, LOCAL(1), num_2, 1, LOCAL(4),
  // split(s m) split(m+1 e)
  func_split, 2, var_2161_9_s, LOCAL(4), 1, LOCAL(1),
  // m+1 e)
  var_std__plus, 2, LOCAL(4), num_1, 1, LOCAL(2),
  // split(m+1 e)
  func_split, 2, LOCAL(2), var_2161_11_e, 1, LOCAL(3),
  // append split(s m) split(m+1 e)
  var_append, 2, LOCAL(1), LOCAL(3), TAIL_CALL,
  POS(2164, 13),
  POS(2164, 9),
  POS(2165, 16),
  POS(2165, 33),
  POS(2165, 27),
  POS(2165, 9)
};

static TAB_NUM t_lambda_261[] = {
  2, // locals
  0, // parameters
  // $lines empty_list
  LET, 1, var_empty_list, 1, var_2167_1_lines,
  // s == 1 || text(s-1) == '@nl;'
  var_std__equal, 2, var_2161_9_s, num_1, 1, LOCAL(1),
  // s == 1 || text(s-1) == '@nl;'
  var_std__or, 2, LOCAL(1), lambda_262, 1, LOCAL(2),
  // $ls
  var_if, 3, LOCAL(2), lambda_263, lambda_264, 1, var_2168_1_ls,
  // from_to s e
  var_from_to, 4, var_2161_9_s, var_2161_11_e, lambda_265, lambda_268, TAIL_CALL,
  POS(2167, 9),
  POS(2170, 13),
  POS(2170, 13),
  POS(2168, 9),
  POS(2173, 9)
};

static TAB_NUM t_lambda_262[] = {
  3, // locals
  0, // parameters
  // s-1) == '@nl;'
  var_std__minus, 2, var_2161_9_s, num_1, 1, LOCAL(1),
  // text(s-1) == '@nl;'
  var_2156_0_text, 1, LOCAL(1), 1, LOCAL(2),
  // text(s-1) == '@nl;'
  var_std__equal, 2, LOCAL(2), chr_10, 1, LOCAL(3),
  // text(s-1) == '@nl;'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(2170, 28),
  POS(2170, 23),
  POS(2170, 23),
  POS(2170, 23)
};

static TAB_NUM t_lambda_263[] = {
  0, // locals
  0, // parameters
  //  s # the current block starts at a line start
  LET, 1, var_2161_9_s, TAIL_CALL,
  POS(2171, 15)
};

static TAB_NUM t_lambda_264[] = {
  0, // locals
  0, // parameters
  //  undefined # just skip the characters until the next line start
  LET, 1, var_undefined, TAIL_CALL,
  POS(2172, 15)
};

static TAB_NUM t_lambda_265[] = {
  2, // locals
  1, // parameters
  var_2174_3_i,
  // text(i) == '@nl;' next:
  var_2156_0_text, 1, var_2174_3_i, 1, LOCAL(1),
  // text(i) == '@nl;' next:
  var_std__equal, 2, LOCAL(1), chr_10, 1, LOCAL(2),
  // if_not text(i) == '@nl;' next:
  var_if_not, 3, LOCAL(2), var_next, lambda_266, TAIL_CALL,
  POS(2175, 20),
  POS(2175, 20),
  POS(2175, 13)
};

static TAB_NUM t_lambda_266[] = {
  1, // locals
  0, // parameters
  // is_defined:
  var_is_defined, 1, var_2168_1_ls, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_2_ls_is_defined, lambda_267, TAIL_CALL,
  POS(2177, 20),
  POS(2176, 15)
};

static TAB_NUM t_lambda_2_ls_is_defined[] = {
  1, // locals
  0, // parameters
  // create_line(ls i)
  func_create_line, 2, var_2168_1_ls, var_2174_3_i, 1, LOCAL(1),
  // push &lines create_line(ls i)
  var_push, 2, var_2167_1_lines, LOCAL(1), 1, var_2167_1_lines,
  // !ls i+1
  var_std__plus, 2, var_2174_3_i, num_1, 1, var_2168_1_ls,
  // next
  var_next, 0, TAIL_CALL,
  POS(2178, 31),
  POS(2178, 19),
  POS(2179, 19),
  POS(2180, 19)
};

static TAB_NUM t_lambda_267[] = {
  0, // locals
  0, // parameters
  // !ls i+1
  var_std__plus, 2, var_2174_3_i, num_1, 1, var_2168_1_ls,
  // next
  var_next, 0, TAIL_CALL,
  POS(2182, 19),
  POS(2183, 19)
};

static TAB_NUM t_lambda_268[] = {
  2, // locals
  0, // parameters
  // is_defined && ls <= e:
  var_is_defined, 1, var_2168_1_ls, 1, LOCAL(1),
  // is_defined && ls <= e:
  var_std__and, 2, LOCAL(1), lambda_269, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_270, lambda_272, TAIL_CALL,
  POS(2186, 18),
  POS(2186, 18),
  POS(2185, 13)
};

static TAB_NUM t_lambda_269[] = {
  2, // locals
  0, // parameters
  // e:
  var_std__less, 2, var_2161_11_e, var_2168_1_ls, 1, LOCAL(1),
  // e:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // ls <= e:
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2186, 38),
  POS(2186, 38),
  POS(2186, 32)
};

static TAB_NUM t_lambda_270[] = {
  0, // locals
  0, // parameters
  // loop: # the last line extends into the next block
  var_loop, 1, lambda_14_loop, TAIL_CALL,
  POS(2187, 17)
};

static TAB_NUM t_lambda_14_loop[] = {
  2, // locals
  0, // parameters
  // !e e+1
  var_std__plus, 2, var_2161_11_e, num_1, 1, var_2161_11_e,
  // text(e) == '@nl;'
  var_2156_0_text, 1, var_2161_11_e, 1, LOCAL(1),
  // text(e) == '@nl;'
  var_std__equal, 2, LOCAL(1), chr_10, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_271, var_next, TAIL_CALL,
  POS(2188, 19),
  POS(2190, 21),
  POS(2190, 21),
  POS(2189, 19)
};

static TAB_NUM t_lambda_271[] = {
  2, // locals
  0, // parameters
  // create_line(ls e))
  func_create_line, 2, var_2168_1_ls, var_2161_11_e, 1, LOCAL(1),
  // push(lines create_line(ls e))
  var_push, 2, var_2167_1_lines, LOCAL(1), 1, LOCAL(2),
  //  push(lines create_line(ls e))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2191, 35),
  POS(2191, 24),
  POS(2191, 23)
};

static TAB_NUM t_lambda_272[] = {
  0, // locals
  0, // parameters
  //  lines
  LET, 1, var_2167_1_lines, TAIL_CALL,
  POS(2193, 17)
};

static TAB_NUM t_func_create_line[] = {
  0, // locals
  2, // parameters
  var_2195_15_s,
  var_2195_17_e,
  // $indent 0
  LET, 1, num_0, 1, var_2196_1_indent,
  // loop:
  var_loop, 1, lambda_15_loop, TAIL_CALL,
  POS(2196, 5),
  POS(2197, 5)
};

static TAB_NUM t_lambda_15_loop[] = {
  2, // locals
  0, // parameters
  // text(s) == '@ht;':
  var_2156_0_text, 1, var_2195_15_s, 1, LOCAL(1),
  // text(s) == '@ht;':
  var_std__equal, 2, LOCAL(1), chr_9, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_273, lambda_274, TAIL_CALL,
  POS(2199, 9),
  POS(2199, 9),
  POS(2198, 7)
};

static TAB_NUM t_lambda_273[] = {
  0, // locals
  0, // parameters
  // !indent indent+8
  var_std__plus, 2, var_2196_1_indent, num_8, 1, var_2196_1_indent,
  // !s s+1
  var_std__plus, 2, var_2195_15_s, num_1, 1, var_2195_15_s,
  // next
  var_next, 0, TAIL_CALL,
  POS(2200, 11),
  POS(2201, 11),
  POS(2202, 11)
};

static TAB_NUM t_lambda_274[] = {
  2, // locals
  0, // parameters
  // text(s) == ' ':
  var_2156_0_text, 1, var_2195_15_s, 1, LOCAL(1),
  // text(s) == ' ':
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_275, lambda_276, TAIL_CALL,
  POS(2205, 13),
  POS(2205, 13),
  POS(2204, 11)
};

static TAB_NUM t_lambda_275[] = {
  0, // locals
  0, // parameters
  // !indent indent+1
  var_std__plus, 2, var_2196_1_indent, num_1, 1, var_2196_1_indent,
  // !s s+1
  var_std__plus, 2, var_2195_15_s, num_1, 1, var_2195_15_s,
  // next
  var_next, 0, TAIL_CALL,
  POS(2206, 15),
  POS(2207, 15),
  POS(2208, 15)
};

static TAB_NUM t_lambda_276[] = {
  1, // locals
  0, // parameters
  // $line_text range(text s e)
  var_range, 3, var_2156_0_text, var_2195_15_s, var_2195_17_e, 1, var_2210_1_line_text,
  // line_text == "@nl;"
  var_std__equal, 2, var_2210_1_line_text, string_7, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_277, lambda_278, TAIL_CALL,
  POS(2210, 15),
  POS(2212, 17),
  POS(2211, 15)
};

static TAB_NUM t_lambda_277[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(2213, 19)
};

static TAB_NUM t_lambda_278[] = {
  1, // locals
  0, // parameters
  // tuple(indent line_text)
  var_tuple, 2, var_2196_1_indent, var_2210_1_line_text, 1, LOCAL(1),
  //  tuple(indent line_text)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(2214, 20),
  POS(2214, 19)
};

static TAB_NUM t_func_indent_of[] = {
  1, // locals
  1, // parameters
  var_2221_13_line,
  // is_defined
  var_is_defined, 1, var_2221_13_line, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_279, lambda_280, TAIL_CALL,
  POS(2223, 10),
  POS(2222, 3)
};

static TAB_NUM t_lambda_279[] = {
  1, // locals
  0, // parameters
  // first(line)
  var_first, 1, var_2221_13_line, 1, LOCAL(1),
  //  first(line)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(2224, 8),
  POS(2224, 7)
};

static TAB_NUM t_lambda_280[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(2225, 7)
};

static TAB_NUM t_func_std__split_into_groups[] = {
  0, // locals
  1, // parameters
  var_2278_0_lines,
  // $n length_of(lines)
  var_length_of, 1, var_2278_0_lines, 1, var_2280_1_n,
  // $fv 1 # first valid line
  LET, 1, num_1, 1, var_2281_1_fv,
  // loop:
  var_loop, 1, lambda_16_loop, TAIL_CALL,
  POS(2280, 3),
  POS(2281, 3),
  POS(2282, 3)
};

static TAB_NUM t_lambda_16_loop[] = {
  2, // locals
  0, // parameters
  // n:
  var_std__less, 2, var_2280_1_n, var_2281_1_fv, 1, LOCAL(1),
  // n:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_281, lambda_283, TAIL_CALL,
  POS(2284, 13),
  POS(2284, 13),
  POS(2283, 5)
};

static TAB_NUM t_lambda_281[] = {
  1, // locals
  0, // parameters
  // lines(fv))
  var_2278_0_lines, 1, var_2281_1_fv, 1, LOCAL(1),
  // $indent indent_of(lines(fv))
  func_indent_of, 1, LOCAL(1), 1, var_2285_1_indent,
  // is_defined:
  var_is_defined, 1, var_2285_1_indent, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_indent_is_defined, lambda_282, TAIL_CALL,
  POS(2285, 27),
  POS(2285, 9),
  POS(2287, 18),
  POS(2286, 9)
};

static TAB_NUM t_lambda_indent_is_defined[] = {
  0, // locals
  0, // parameters
  // split fv n indent undefined
  func_2_split, 4, var_2281_1_fv, var_2280_1_n, var_2285_1_indent, var_undefined, TAIL_CALL,
  POS(2288, 13)
};

static TAB_NUM t_lambda_282[] = {
  0, // locals
  0, // parameters
  // !fv fv+1
  var_std__plus, 2, var_2281_1_fv, num_1, 1, var_2281_1_fv,
  // next
  var_next, 0, TAIL_CALL,
  POS(2290, 13),
  POS(2291, 13)
};

static TAB_NUM t_lambda_283[] = {
  0, // locals
  0, // parameters
  //  empty_list
  LET, 1, var_empty_list, TAIL_CALL,
  POS(2292, 9)
};

static TAB_NUM t_func_2_split[] = {
  3, // locals
  4, // parameters
  var_2294_9_s,
  var_2294_11_e,
  var_2294_13_indent,
  var_2294_20_gs,
  // e+1-s > FORK_LINES_THRESHOLD: # recurse to exploit parallel execution
  var_std__plus, 2, var_2294_11_e, num_1, 1, LOCAL(1),
  // e+1-s > FORK_LINES_THRESHOLD: # recurse to exploit parallel execution
  var_std__minus, 2, LOCAL(1), var_2294_9_s, 1, LOCAL(2),
  // FORK_LINES_THRESHOLD: # recurse to exploit parallel execution
  var_std__less, 2, num_20, LOCAL(2), 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_284, lambda_285, TAIL_CALL,
  POS(2296, 7),
  POS(2296, 7),
  POS(2296, 15),
  POS(2295, 5)
};

static TAB_NUM t_lambda_284[] = {
  4, // locals
  0, // parameters
  // s+e) .div. 2
  var_std__plus, 2, var_2294_9_s, var_2294_11_e, 1, LOCAL(1),
  // $m (s+e) .div. 2
  var_div, 2, LOCAL(1), num_2, 1, LOCAL(4),
  // split(s m indent gs) split(m+1 e indent undefined)
  func_2_split, 4, var_2294_9_s, LOCAL(4), var_2294_13_indent, var_2294_20_gs, 1, LOCAL(1),
  // m+1 e indent undefined)
  var_std__plus, 2, LOCAL(4), num_1, 1, LOCAL(2),
  // split(m+1 e indent undefined)
  func_2_split, 4, LOCAL(2), var_2294_11_e, var_2294_13_indent, var_undefined, 1, LOCAL(3),
  // append split(s m indent gs) split(m+1 e indent undefined)
  var_append, 2, LOCAL(1), LOCAL(3), TAIL_CALL,
  POS(2297, 13),
  POS(2297, 9),
  POS(2298, 16),
  POS(2298, 43),
  POS(2298, 37),
  POS(2298, 9)
};

static TAB_NUM t_lambda_285[] = {
  0, // locals
  0, // parameters
  // $groups empty_list
  LET, 1, var_empty_list, 1, var_2300_1_groups,
  // $minimum_indent VERY_LARGE_INDENT
  LET, 1, num_9999, 1, var_2301_1_minimum_indent,
  // $ge gs
  LET, 1, var_2294_20_gs, 1, var_2302_1_ge,
  // from_to s e
  var_from_to, 4, var_2294_9_s, var_2294_11_e, lambda_286, lambda_294, TAIL_CALL,
  POS(2300, 9),
  POS(2301, 9),
  POS(2302, 9),
  POS(2303, 9)
};

static TAB_NUM t_lambda_286[] = {
  1, // locals
  1, // parameters
  var_2304_3_i,
  // lines(i))
  var_2278_0_lines, 1, var_2304_3_i, 1, LOCAL(1),
  // $current_indent indent_of(lines(i))
  func_indent_of, 1, LOCAL(1), 1, var_2305_1_current_indent,
  // current_indent == indent:
  var_std__equal, 2, var_2305_1_current_indent, var_2294_13_indent, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_287, lambda_291, TAIL_CALL,
  POS(2305, 39),
  POS(2305, 13),
  POS(2307, 15),
  POS(2306, 13)
};

static TAB_NUM t_lambda_287[] = {
  2, // locals
  0, // parameters
  // is_defined && gs < i:
  var_is_defined, 1, var_2294_20_gs, 1, LOCAL(1),
  // is_defined && gs < i:
  var_std__and, 2, LOCAL(1), lambda_288, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_289, lambda_290, TAIL_CALL,
  POS(2309, 22),
  POS(2309, 22),
  POS(2308, 17)
};

static TAB_NUM t_lambda_288[] = {
  1, // locals
  0, // parameters
  // gs < i:
  var_std__less, 2, var_2294_20_gs, var_2304_3_i, 1, LOCAL(1),
  // gs < i:
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(2309, 36),
  POS(2309, 36)
};

static TAB_NUM t_lambda_289[] = {
  0, // locals
  0, // parameters
  // add_groups !groups ge
  func_add_groups, 1, var_2302_1_ge, 1, var_2300_1_groups,
  // start_new_fragment_and_next i
  func_start_new_fragment_and_next, 1, var_2304_3_i, TAIL_CALL,
  POS(2310, 21),
  POS(2311, 21)
};

static TAB_NUM t_lambda_290[] = {
  0, // locals
  0, // parameters
  // start_new_fragment_and_next i
  func_start_new_fragment_and_next, 1, var_2304_3_i, TAIL_CALL,
  POS(2313, 21)
};

static TAB_NUM t_lambda_291[] = {
  1, // locals
  0, // parameters
  // is_defined
  var_is_defined, 1, var_2305_1_current_indent, 1, LOCAL(1),
  // !ge
  var_if, 3, LOCAL(1), lambda_292, lambda_293, 1, var_2302_1_ge,
  // reduce_minimum_indent_and_next current_indent
  func_reduce_minimum_indent_and_next, 1, var_2305_1_current_indent, TAIL_CALL,
  POS(2317, 36),
  POS(2315, 17),
  POS(2320, 17)
};

static TAB_NUM t_lambda_292[] = {
  0, // locals
  0, // parameters
  //  i
  LET, 1, var_2304_3_i, TAIL_CALL,
  POS(2318, 23)
};

static TAB_NUM t_lambda_293[] = {
  0, // locals
  0, // parameters
  //  ge
  LET, 1, var_2302_1_ge, TAIL_CALL,
  POS(2319, 23)
};

static TAB_NUM t_lambda_294[] = {
  1, // locals
  0, // parameters
  // is_defined:
  var_is_defined, 1, var_2294_20_gs, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_gs_is_defined, lambda_302, TAIL_CALL,
  POS(2323, 18),
  POS(2322, 13)
};

static TAB_NUM t_lambda_gs_is_defined[] = {
  0, // locals
  0, // parameters
  // loop: # the last group extends into the next block
  var_loop, 1, lambda_17_loop, TAIL_CALL,
  POS(2324, 17)
};

static TAB_NUM t_lambda_17_loop[] = {
  1, // locals
  0, // parameters
  // !e e+1
  var_std__plus, 2, var_2294_11_e, num_1, 1, var_2294_11_e,
  // n
  var_std__less, 2, var_2280_1_n, var_2294_11_e, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_295, lambda_296, TAIL_CALL,
  POS(2325, 19),
  POS(2327, 25),
  POS(2326, 19)
};

static TAB_NUM t_lambda_295[] = {
  1, // locals
  0, // parameters
  // add_groups(ge)
  func_add_groups, 1, var_2302_1_ge, 1, LOCAL(1),
  //  add_groups(ge)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(2328, 24),
  POS(2328, 23)
};

static TAB_NUM t_lambda_296[] = {
  2, // locals
  0, // parameters
  // lines(e))
  var_2278_0_lines, 1, var_2294_11_e, 1, LOCAL(1),
  // $current_indent indent_of(lines(e))
  func_indent_of, 1, LOCAL(1), 1, var_2330_1_current_indent,
  // is_defined && current_indent <= indent
  var_is_defined, 1, var_2330_1_current_indent, 1, LOCAL(1),
  // is_defined && current_indent <= indent
  var_std__and, 2, LOCAL(1), lambda_297, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_298, lambda_299, TAIL_CALL,
  POS(2330, 49),
  POS(2330, 23),
  POS(2332, 40),
  POS(2332, 40),
  POS(2331, 23)
};

static TAB_NUM t_lambda_297[] = {
  2, // locals
  0, // parameters
  // indent
  var_std__less, 2, var_2294_13_indent, var_2330_1_current_indent, 1, LOCAL(1),
  // indent
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // current_indent <= indent
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2332, 72),
  POS(2332, 72),
  POS(2332, 54)
};

static TAB_NUM t_lambda_298[] = {
  1, // locals
  0, // parameters
  // add_groups(ge)
  func_add_groups, 1, var_2302_1_ge, 1, LOCAL(1),
  //  add_groups(ge)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(2333, 28),
  POS(2333, 27)
};

static TAB_NUM t_lambda_299[] = {
  1, // locals
  0, // parameters
  // is_defined
  var_is_defined, 1, var_2330_1_current_indent, 1, LOCAL(1),
  // !ge
  var_if, 3, LOCAL(1), lambda_300, lambda_301, 1, var_2302_1_ge,
  // reduce_minimum_indent_and_next current_indent
  func_reduce_minimum_indent_and_next, 1, var_2330_1_current_indent, TAIL_CALL,
  POS(2337, 46),
  POS(2335, 27),
  POS(2340, 27)
};

static TAB_NUM t_lambda_300[] = {
  0, // locals
  0, // parameters
  //  e
  LET, 1, var_2294_11_e, TAIL_CALL,
  POS(2338, 33)
};

static TAB_NUM t_lambda_301[] = {
  0, // locals
  0, // parameters
  //  ge
  LET, 1, var_2302_1_ge, TAIL_CALL,
  POS(2339, 33)
};

static TAB_NUM t_lambda_302[] = {
  0, // locals
  0, // parameters
  //  groups
  LET, 1, var_2300_1_groups, TAIL_CALL,
  POS(2341, 17)
};

static TAB_NUM t_func_add_groups[] = {
  1, // locals
  1, // parameters
  var_2343_14_l,
  // gs == l
  var_std__equal, 2, var_2294_20_gs, var_2343_14_l, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_303, lambda_304, TAIL_CALL,
  POS(2345, 13),
  POS(2344, 11)
};

static TAB_NUM t_lambda_303[] = {
  2, // locals
  0, // parameters
  // lines(gs))
  var_2278_0_lines, 1, var_2294_20_gs, 1, LOCAL(1),
  // push(groups lines(gs))
  var_push, 2, var_2300_1_groups, LOCAL(1), 1, LOCAL(2),
  //  push(groups lines(gs))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2346, 28),
  POS(2346, 16),
  POS(2346, 15)
};

static TAB_NUM t_lambda_304[] = {
  1, // locals
  0, // parameters
  // minimum_indent == VERY_LARGE_INDENT
  var_std__equal, 2, var_2301_1_minimum_indent, num_9999, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_305, lambda_306, TAIL_CALL,
  POS(2349, 17),
  POS(2348, 15)
};

static TAB_NUM t_lambda_305[] = {
  2, // locals
  0, // parameters
  // range(lines gs l))
  var_range, 3, var_2278_0_lines, var_2294_20_gs, var_2343_14_l, 1, LOCAL(1),
  // append(groups range(lines gs l))
  var_append, 2, var_2300_1_groups, LOCAL(1), 1, LOCAL(2),
  //  append(groups range(lines gs l))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2350, 34),
  POS(2350, 20),
  POS(2350, 19)
};

static TAB_NUM t_lambda_306[] = {
  4, // locals
  0, // parameters
  // $headline lines(gs)
  var_2278_0_lines, 1, var_2294_20_gs, 1, LOCAL(4),
  // gs+1 l))
  var_std__plus, 2, var_2294_20_gs, num_1, 1, LOCAL(1),
  // range(lines gs+1 l))
  var_range, 3, var_2278_0_lines, LOCAL(1), var_2343_14_l, 1, LOCAL(2),
  // .subgroups_of range(lines gs+1 l))
  LET, -1, LOCAL(4), var_subgroups_of, LOCAL(2), LOCAL(3),
  // push groups headline(.subgroups_of range(lines gs+1 l))
  var_push, 2, var_2300_1_groups, LOCAL(3), TAIL_CALL,
  POS(2352, 19),
  POS(2353, 66),
  POS(2353, 54),
  POS(2353, 40),
  POS(2353, 19)
};

static TAB_NUM t_func_reduce_minimum_indent_and_next[] = {
  2, // locals
  1, // parameters
  var_2355_34_current_indent,
  // is_defined && current_indent < minimum_indent:
  var_is_defined, 1, var_2355_34_current_indent, 1, LOCAL(1),
  // is_defined && current_indent < minimum_indent:
  var_std__and, 2, LOCAL(1), lambda_307, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_308, var_next, TAIL_CALL,
  POS(2357, 28),
  POS(2357, 28),
  POS(2356, 11)
};

static TAB_NUM t_lambda_307[] = {
  1, // locals
  0, // parameters
  // current_indent < minimum_indent:
  var_std__less, 2, var_2355_34_current_indent, var_2301_1_minimum_indent, 1, LOCAL(1),
  // current_indent < minimum_indent:
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(2357, 42),
  POS(2357, 42)
};

static TAB_NUM t_lambda_308[] = {
  0, // locals
  0, // parameters
  // !minimum_indent current_indent
  LET, 1, var_2355_34_current_indent, 1, var_2301_1_minimum_indent,
  // next
  var_next, 0, TAIL_CALL,
  POS(2358, 15),
  POS(2359, 15)
};

static TAB_NUM t_func_start_new_fragment_and_next[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 2362_31_i
  // !minimum_indent VERY_LARGE_INDENT
  LET, 1, num_9999, 1, var_2301_1_minimum_indent,
  // !gs i
  LET, 1, LOCAL(1), 1, var_2294_20_gs,
  // !ge i
  LET, 1, LOCAL(1), 1, var_2302_1_ge,
  // next
  var_next, 0, TAIL_CALL,
  POS(2363, 11),
  POS(2364, 11),
  POS(2365, 11),
  POS(2366, 11)
};

static TAB_NUM t_func_std__wrap_words[] = {
  0, // locals
  2, // parameters
  var_2395_0_text,
  var_2396_0_width,
  // $wrapped_text ""
  LET, 1, string_1, 1, var_2398_1_wrapped_text,
  // $n length_of(text)
  var_length_of, 1, var_2395_0_text, 1, var_2399_1_n,
  // $s 1 # start of not yet copied text
  LET, 1, num_1, 1, var_2400_1_s,
  // $l s # line start position
  LET, 1, var_2400_1_s, 1, var_2401_1_l,
  // $b undefined # possible break position
  LET, 1, var_undefined, 1, var_2402_1_b,
  // $i 1
  LET, 1, num_1, 1, var_2403_1_i,
  // loop:
  var_loop, 1, lambda_18_loop, TAIL_CALL,
  POS(2398, 3),
  POS(2399, 3),
  POS(2400, 3),
  POS(2401, 3),
  POS(2402, 3),
  POS(2403, 3),
  POS(2404, 3)
};

static TAB_NUM t_lambda_18_loop[] = {
  1, // locals
  0, // parameters
  // n
  var_std__less, 2, var_2399_1_n, var_2403_1_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_309, lambda_310, TAIL_CALL,
  POS(2406, 11),
  POS(2405, 5)
};

static TAB_NUM t_lambda_309[] = {
  2, // locals
  0, // parameters
  // range(text s n))
  var_range, 3, var_2395_0_text, var_2400_1_s, var_2399_1_n, 1, LOCAL(1),
  // append(wrapped_text range(text s n))
  var_append, 2, var_2398_1_wrapped_text, LOCAL(1), 1, LOCAL(2),
  //  append(wrapped_text range(text s n))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2407, 30),
  POS(2407, 10),
  POS(2407, 9)
};

static TAB_NUM t_lambda_310[] = {
  1, // locals
  0, // parameters
  // $chr text(i)
  var_2395_0_text, 1, var_2403_1_i, 1, var_2409_1_chr,
  // chr == '@nl;':
  var_std__equal, 2, var_2409_1_chr, chr_10, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_311, lambda_312, TAIL_CALL,
  POS(2409, 9),
  POS(2411, 11),
  POS(2410, 9)
};

static TAB_NUM t_lambda_311[] = {
  0, // locals
  0, // parameters
  // !i i+1
  var_std__plus, 2, var_2403_1_i, num_1, 1, var_2403_1_i,
  // !l i
  LET, 1, var_2403_1_i, 1, var_2401_1_l,
  // !b undefined
  LET, 1, var_undefined, 1, var_2402_1_b,
  // next
  var_next, 0, TAIL_CALL,
  POS(2412, 13),
  POS(2413, 13),
  POS(2414, 13),
  POS(2415, 13)
};

static TAB_NUM t_lambda_312[] = {
  1, // locals
  0, // parameters
  // chr == ' ':
  var_std__equal, 2, var_2409_1_chr, chr_32, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_313, lambda_316, TAIL_CALL,
  POS(2418, 15),
  POS(2417, 13)
};

static TAB_NUM t_lambda_313[] = {
  2, // locals
  0, // parameters
  // i-l == width: # break
  var_std__minus, 2, var_2403_1_i, var_2401_1_l, 1, LOCAL(1),
  // i-l == width: # break
  var_std__equal, 2, LOCAL(1), var_2396_0_width, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_314, lambda_315, TAIL_CALL,
  POS(2420, 19),
  POS(2420, 19),
  POS(2419, 17)
};

static TAB_NUM t_lambda_314[] = {
  2, // locals
  0, // parameters
  // i-1)
  var_std__minus, 2, var_2403_1_i, num_1, 1, LOCAL(1),
  // range(text s i-1)
  var_range, 3, var_2395_0_text, var_2400_1_s, LOCAL(1), 1, LOCAL(2),
  // append &wrapped_text range(text s i-1)
  var_append, 2, var_2398_1_wrapped_text, LOCAL(2), 1, var_2398_1_wrapped_text,
  // push &wrapped_text '@nl;'
  var_push, 2, var_2398_1_wrapped_text, chr_10, 1, var_2398_1_wrapped_text,
  // !i i+1
  var_std__plus, 2, var_2403_1_i, num_1, 1, var_2403_1_i,
  // !s i
  LET, 1, var_2403_1_i, 1, var_2400_1_s,
  // !l s
  LET, 1, var_2400_1_s, 1, var_2401_1_l,
  // !b undefined
  LET, 1, var_undefined, 1, var_2402_1_b,
  // next
  var_next, 0, TAIL_CALL,
  POS(2421, 55),
  POS(2421, 42),
  POS(2421, 21),
  POS(2422, 21),
  POS(2423, 21),
  POS(2424, 21),
  POS(2425, 21),
  POS(2426, 21),
  POS(2427, 21)
};

static TAB_NUM t_lambda_315[] = {
  0, // locals
  0, // parameters
  // !b i
  LET, 1, var_2403_1_i, 1, var_2402_1_b,
  // !i i+1
  var_std__plus, 2, var_2403_1_i, num_1, 1, var_2403_1_i,
  // next
  var_next, 0, TAIL_CALL,
  POS(2429, 21),
  POS(2430, 21),
  POS(2431, 21)
};

static TAB_NUM t_lambda_316[] = {
  3, // locals
  0, // parameters
  // !i i+1
  var_std__plus, 2, var_2403_1_i, num_1, 1, var_2403_1_i,
  // i-l <= width
  var_std__minus, 2, var_2403_1_i, var_2401_1_l, 1, LOCAL(1),
  // width
  var_std__less, 2, var_2396_0_width, LOCAL(1), 1, LOCAL(2),
  // width
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), var_next, lambda_317, TAIL_CALL,
  POS(2433, 17),
  POS(2435, 19),
  POS(2435, 26),
  POS(2435, 26),
  POS(2434, 17)
};

static TAB_NUM t_lambda_317[] = {
  1, // locals
  0, // parameters
  // is_defined: # wrap
  var_is_defined, 1, var_2402_1_b, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_b_is_defined, lambda_318, TAIL_CALL,
  POS(2439, 25),
  POS(2438, 21)
};

static TAB_NUM t_lambda_b_is_defined[] = {
  2, // locals
  0, // parameters
  // b-1)
  var_std__minus, 2, var_2402_1_b, num_1, 1, LOCAL(1),
  // range(text s b-1)
  var_range, 3, var_2395_0_text, var_2400_1_s, LOCAL(1), 1, LOCAL(2),
  // append &wrapped_text range(text s b-1)
  var_append, 2, var_2398_1_wrapped_text, LOCAL(2), 1, var_2398_1_wrapped_text,
  // push &wrapped_text '@nl;'
  var_push, 2, var_2398_1_wrapped_text, chr_10, 1, var_2398_1_wrapped_text,
  // !s b+1
  var_std__plus, 2, var_2402_1_b, num_1, 1, var_2400_1_s,
  // !l s
  LET, 1, var_2400_1_s, 1, var_2401_1_l,
  // !b undefined
  LET, 1, var_undefined, 1, var_2402_1_b,
  // next
  var_next, 0, TAIL_CALL,
  POS(2440, 59),
  POS(2440, 46),
  POS(2440, 25),
  POS(2441, 25),
  POS(2442, 25),
  POS(2443, 25),
  POS(2444, 25),
  POS(2445, 25)
};

static TAB_NUM t_lambda_318[] = {
  2, // locals
  0, // parameters
  // i-2)
  var_std__minus, 2, var_2403_1_i, num_2, 1, LOCAL(1),
  // range(text s i-2)
  var_range, 3, var_2395_0_text, var_2400_1_s, LOCAL(1), 1, LOCAL(2),
  // append &wrapped_text range(text s i-2)
  var_append, 2, var_2398_1_wrapped_text, LOCAL(2), 1, var_2398_1_wrapped_text,
  // push &wrapped_text '@nl;'
  var_push, 2, var_2398_1_wrapped_text, chr_10, 1, var_2398_1_wrapped_text,
  // !s i-1
  var_std__minus, 2, var_2403_1_i, num_1, 1, var_2400_1_s,
  // !l s
  LET, 1, var_2400_1_s, 1, var_2401_1_l,
  // next
  var_next, 0, TAIL_CALL,
  POS(2447, 59),
  POS(2447, 46),
  POS(2447, 25),
  POS(2448, 25),
  POS(2449, 25),
  POS(2450, 25),
  POS(2451, 25)
};

static TAB_NUM t_func_std_types__string___serialize[] = {
  0, // locals
  -2, // parameters
  MANDATORY_PARAMETER, var_2471_0_self,
  var_undefined, var_2472_0_indent,
  // $str "@quot;"
  LET, 1, string_8, 1, var_2474_1_str,
  // $s 1
  LET, 1, num_1, 1, var_2475_1_s,
  // for_each self
  var_for_each, 3, var_2471_0_self, lambda_319, lambda_324, TAIL_CALL,
  POS(2474, 3),
  POS(2475, 3),
  POS(2476, 3)
};

static TAB_NUM t_lambda_319[] = {
  2, // locals
  2, // parameters
  var_2477_3_idx,
  var_2477_7_chr,
  // chr < '@0x20;' || chr > '@0x7e;' || chr == '"' || chr == '@@':
  var_std__less, 2, var_2477_7_chr, chr_32, 1, LOCAL(1),
  // chr < '@0x20;' || chr > '@0x7e;' || chr == '"' || chr == '@@':
  var_std__or, 2, LOCAL(1), lambda_320, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_323, var_next, TAIL_CALL,
  POS(2479, 9),
  POS(2479, 9),
  POS(2478, 7)
};

static TAB_NUM t_lambda_320[] = {
  2, // locals
  0, // parameters
  // 0x7e;' || chr == '"' || chr == '@@':
  var_std__less, 2, chr_126, var_2477_7_chr, 1, LOCAL(1),
  // 0x7e;' || chr == '"' || chr == '@@':
  var_std__or, 2, LOCAL(1), lambda_321, 1, LOCAL(2),
  // chr > '@0x7e;' || chr == '"' || chr == '@@':
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2479, 35),
  POS(2479, 35),
  POS(2479, 27)
};

static TAB_NUM t_lambda_321[] = {
  2, // locals
  0, // parameters
  // chr == '"' || chr == '@@':
  var_std__equal, 2, var_2477_7_chr, chr_34, 1, LOCAL(1),
  // chr == '"' || chr == '@@':
  var_std__or, 2, LOCAL(1), lambda_322, 1, LOCAL(2),
  // chr == '"' || chr == '@@':
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2479, 45),
  POS(2479, 45),
  POS(2479, 45)
};

static TAB_NUM t_lambda_322[] = {
  1, // locals
  0, // parameters
  // chr == '@@':
  var_std__equal, 2, var_2477_7_chr, chr_64, 1, LOCAL(1),
  // chr == '@@':
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(2479, 59),
  POS(2479, 59)
};

static TAB_NUM t_lambda_323[] = {
  2, // locals
  0, // parameters
  // idx-1)
  var_std__minus, 2, var_2477_3_idx, num_1, 1, LOCAL(1),
  // range(self s idx-1)
  var_range, 3, var_2471_0_self, var_2475_1_s, LOCAL(1), 1, LOCAL(2),
  // append &str range(self s idx-1)
  var_append, 2, var_2474_1_str, LOCAL(2), 1, var_2474_1_str,
  // to_integer);"
  var_to_integer, 1, var_2477_7_chr, 1, LOCAL(1),
  // "@@@(chr.to_integer);"
  var_std__string, 3, string_9, LOCAL(1), string_10, 1, LOCAL(2),
  // append &str "@@@(chr.to_integer);"
  var_append, 2, var_2474_1_str, LOCAL(2), 1, var_2474_1_str,
  // !s idx+1
  var_std__plus, 2, var_2477_3_idx, num_1, 1, var_2475_1_s,
  // next
  var_next, 0, TAIL_CALL,
  POS(2480, 36),
  POS(2480, 23),
  POS(2480, 11),
  POS(2481, 32),
  POS(2481, 23),
  POS(2481, 11),
  POS(2482, 11),
  POS(2483, 11)
};

static TAB_NUM t_lambda_324[] = {
  1, // locals
  0, // parameters
  // range(self s -1)
  var_range, 3, var_2471_0_self, var_2475_1_s, minus_num_1, 1, LOCAL(1),
  // append &str range(self s -1)
  var_append, 2, var_2474_1_str, LOCAL(1), 1, var_2474_1_str,
  // append &str "@quot;@nl;"
  var_append, 2, var_2474_1_str, string_11, 1, var_2474_1_str,
  // is_defined
  var_is_defined, 1, var_2472_0_indent, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_325, lambda_326, TAIL_CALL,
  POS(2486, 19),
  POS(2486, 7),
  POS(2487, 7),
  POS(2489, 16),
  POS(2488, 7)
};

static TAB_NUM t_lambda_325[] = {
  2, // locals
  0, // parameters
  // tabs_and_spaces(indent) str)
  var_tabs_and_spaces, 1, var_2472_0_indent, 1, LOCAL(1),
  // append(tabs_and_spaces(indent) str)
  var_append, 2, LOCAL(1), var_2474_1_str, 1, LOCAL(2),
  //  append(tabs_and_spaces(indent) str)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2490, 19),
  POS(2490, 12),
  POS(2490, 11)
};

static TAB_NUM t_lambda_326[] = {
  0, // locals
  0, // parameters
  //  str
  LET, 1, var_2474_1_str, TAIL_CALL,
  POS(2491, 11)
};

static TAB_NUM t_func_std__indented[] = {
  0, // locals
  2, // parameters
  var_2523_0_indent,
  var_2524_0_text,
  // $indented_text ""
  LET, 1, string_1, 1, var_2526_1_indented_text,
  // $new_indent undefined
  LET, 1, var_undefined, 1, var_2527_1_new_indent,
  // $i 1
  LET, 1, num_1, 1, var_2528_1_i,
  // $n length_of(text)
  var_length_of, 1, var_2524_0_text, 1, var_2529_1_n,
  // loop:
  var_loop, 1, lambda_19_loop, TAIL_CALL,
  POS(2526, 3),
  POS(2527, 3),
  POS(2528, 3),
  POS(2529, 3),
  POS(2530, 3)
};

static TAB_NUM t_lambda_19_loop[] = {
  2, // locals
  0, // parameters
  // !new_indent indent
  LET, 1, var_2523_0_indent, 1, var_2527_1_new_indent,
  // skip_indent !i !new_indent
  func_skip_indent, 0, 2, var_2528_1_i, var_2527_1_new_indent,
  // n:
  var_std__less, 2, var_2529_1_n, var_2528_1_i, 1, LOCAL(1),
  // n:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_327, lambda_335, TAIL_CALL,
  POS(2531, 5),
  POS(2532, 5),
  POS(2534, 12),
  POS(2534, 12),
  POS(2533, 5)
};

static TAB_NUM t_lambda_327[] = {
  2, // locals
  0, // parameters
  // text(i) == '@nl;':
  var_2524_0_text, 1, var_2528_1_i, 1, LOCAL(1),
  // text(i) == '@nl;':
  var_std__equal, 2, LOCAL(1), chr_10, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_328, lambda_329, TAIL_CALL,
  POS(2536, 11),
  POS(2536, 11),
  POS(2535, 9)
};

static TAB_NUM t_lambda_328[] = {
  0, // locals
  0, // parameters
  // push &indented_text '@nl;'
  var_push, 2, var_2526_1_indented_text, chr_10, 1, var_2526_1_indented_text,
  // !i i+1
  var_std__plus, 2, var_2528_1_i, num_1, 1, var_2528_1_i,
  // next
  var_next, 0, TAIL_CALL,
  POS(2537, 13),
  POS(2538, 13),
  POS(2539, 13)
};

static TAB_NUM t_lambda_329[] = {
  1, // locals
  0, // parameters
  // tabs_and_spaces(new_indent)
  var_tabs_and_spaces, 1, var_2527_1_new_indent, 1, LOCAL(1),
  // append &indented_text tabs_and_spaces(new_indent)
  var_append, 2, var_2526_1_indented_text, LOCAL(1), 1, var_2526_1_indented_text,
  // $s i
  LET, 1, var_2528_1_i, 1, var_2542_1_s,
  // loop
  var_loop, 2, lambda_330, var_next, TAIL_CALL,
  POS(2541, 35),
  POS(2541, 13),
  POS(2542, 13),
  POS(2543, 13)
};

static TAB_NUM t_lambda_330[] = {
  2, // locals
  0, // parameters
  // text(i) == '@nl;':
  var_2524_0_text, 1, var_2528_1_i, 1, LOCAL(1),
  // text(i) == '@nl;':
  var_std__equal, 2, LOCAL(1), chr_10, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_331, lambda_332, TAIL_CALL,
  POS(2546, 19),
  POS(2546, 19),
  POS(2545, 17)
};

static TAB_NUM t_lambda_331[] = {
  1, // locals
  0, // parameters
  // range(text s i)
  var_range, 3, var_2524_0_text, var_2542_1_s, var_2528_1_i, 1, LOCAL(1),
  // append &indented_text range(text s i)
  var_append, 2, var_2526_1_indented_text, LOCAL(1), 1, var_2526_1_indented_text,
  // !i i+1
  var_std__plus, 2, var_2528_1_i, num_1, 1, var_2528_1_i,
  // break
  var_break, 0, TAIL_CALL,
  POS(2547, 43),
  POS(2547, 21),
  POS(2548, 21),
  POS(2549, 21)
};

static TAB_NUM t_lambda_332[] = {
  1, // locals
  0, // parameters
  // i < n:
  var_std__less, 2, var_2528_1_i, var_2529_1_n, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_333, lambda_334, TAIL_CALL,
  POS(2552, 23),
  POS(2551, 21)
};

static TAB_NUM t_lambda_333[] = {
  0, // locals
  0, // parameters
  // !i i+1
  var_std__plus, 2, var_2528_1_i, num_1, 1, var_2528_1_i,
  // next
  var_next, 0, TAIL_CALL,
  POS(2553, 25),
  POS(2554, 25)
};

static TAB_NUM t_lambda_334[] = {
  1, // locals
  0, // parameters
  // range(text s -1)
  var_range, 3, var_2524_0_text, var_2542_1_s, minus_num_1, 1, LOCAL(1),
  // append indented_text range(text s -1)
  var_append, 2, var_2526_1_indented_text, LOCAL(1), TAIL_CALL,
  POS(2556, 46),
  POS(2556, 25)
};

static TAB_NUM t_lambda_335[] = {
  0, // locals
  0, // parameters
  //  indented_text
  LET, 1, var_2526_1_indented_text, TAIL_CALL,
  POS(2559, 9)
};

static TAB_NUM t_func_skip_indent[] = {
  2, // locals
  0, // parameters
  // n:
  var_std__less, 2, var_2529_1_n, var_2528_1_i, 1, LOCAL(1),
  // n:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_336, lambda_338, TAIL_CALL,
  POS(2563, 12),
  POS(2563, 12),
  POS(2562, 5)
};

static TAB_NUM t_lambda_336[] = {
  2, // locals
  0, // parameters
  // text(i) == '@ht;':
  var_2524_0_text, 1, var_2528_1_i, 1, LOCAL(1),
  // text(i) == '@ht;':
  var_std__equal, 2, LOCAL(1), chr_9, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_337, func_skip_spaces, TAIL_CALL,
  POS(2565, 11),
  POS(2565, 11),
  POS(2564, 9)
};

static TAB_NUM t_lambda_337[] = {
  0, // locals
  0, // parameters
  // !i i+1
  var_std__plus, 2, var_2528_1_i, num_1, 1, var_2528_1_i,
  // !new_indent new_indent+8
  var_std__plus, 2, var_2527_1_new_indent, num_8, 1, var_2527_1_new_indent,
  // skip_indent
  func_skip_indent, 0, TAIL_CALL,
  POS(2566, 13),
  POS(2567, 13),
  POS(2568, 13)
};

static TAB_NUM t_lambda_338[] = {
  0, // locals
  0, // parameters
  //  i new_indent
  LET, 2, var_2528_1_i, var_2527_1_new_indent, TAIL_CALL,
  POS(2570, 9)
};

static TAB_NUM t_func_skip_spaces[] = {
  3, // locals
  0, // parameters
  // n && text(i) == ' ':
  var_std__less, 2, var_2529_1_n, var_2528_1_i, 1, LOCAL(1),
  // n && text(i) == ' ':
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // n && text(i) == ' ':
  var_std__and, 2, LOCAL(2), lambda_339, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_340, lambda_341, TAIL_CALL,
  POS(2574, 12),
  POS(2574, 12),
  POS(2574, 12),
  POS(2573, 5)
};

static TAB_NUM t_lambda_339[] = {
  2, // locals
  0, // parameters
  // text(i) == ' ':
  var_2524_0_text, 1, var_2528_1_i, 1, LOCAL(1),
  // text(i) == ' ':
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // text(i) == ' ':
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2574, 17),
  POS(2574, 17),
  POS(2574, 17)
};

static TAB_NUM t_lambda_340[] = {
  0, // locals
  0, // parameters
  // !i i+1
  var_std__plus, 2, var_2528_1_i, num_1, 1, var_2528_1_i,
  // !new_indent new_indent+1
  var_std__plus, 2, var_2527_1_new_indent, num_1, 1, var_2527_1_new_indent,
  // skip_spaces
  func_skip_spaces, 0, TAIL_CALL,
  POS(2575, 9),
  POS(2576, 9),
  POS(2577, 9)
};

static TAB_NUM t_lambda_341[] = {
  0, // locals
  0, // parameters
  //  i new_indent
  LET, 2, var_2528_1_i, var_2527_1_new_indent, TAIL_CALL,
  POS(2578, 9)
};

static TAB_NUM t_func_std__format[] = {
  0, // locals
  -2, // parameters
  MANDATORY_PARAMETER, var_2612_0_template,
  REST_PARAMETER, var_2613_0_arguments,
  // $output ""
  LET, 1, string_1, 1, var_2615_1_output,
  // $arg_idx 1
  LET, 1, num_1, 1, var_2616_1_arg_idx,
  // $i 1
  LET, 1, num_1, 1, var_2617_1_i,
  // $n length_of(template)
  var_length_of, 1, var_2612_0_template, 1, var_2618_1_n,
  // loop:
  var_loop, 1, lambda_20_loop, TAIL_CALL,
  POS(2615, 3),
  POS(2616, 3),
  POS(2617, 3),
  POS(2618, 3),
  POS(2619, 3)
};

static TAB_NUM t_lambda_20_loop[] = {
  1, // locals
  0, // parameters
  // n
  var_std__less, 2, var_2618_1_n, var_2617_1_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_342, lambda_343, TAIL_CALL,
  POS(2621, 11),
  POS(2620, 5)
};

static TAB_NUM t_lambda_342[] = {
  0, // locals
  0, // parameters
  //  output
  LET, 1, var_2615_1_output, TAIL_CALL,
  POS(2622, 9)
};

static TAB_NUM t_lambda_343[] = {
  0, // locals
  0, // parameters
  // $chr template(i)
  var_2612_0_template, 1, var_2617_1_i, 1, var_2624_1_chr,
  // !i i+1
  var_std__plus, 2, var_2617_1_i, num_1, 1, var_2617_1_i,
  // case chr
  var_case, 6, var_2624_1_chr, chr_37, lambda_344, chr_92, lambda_370, lambda_373, TAIL_CALL,
  POS(2624, 9),
  POS(2625, 9),
  POS(2626, 9)
};

static TAB_NUM t_lambda_344[] = {
  1, // locals
  0, // parameters
  // n
  var_std__less, 2, var_2618_1_n, var_2617_1_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_345, lambda_346, TAIL_CALL,
  POS(2629, 19),
  POS(2628, 13)
};

static TAB_NUM t_lambda_345[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(2630, 17)
};

static TAB_NUM t_lambda_346[] = {
  2, // locals
  0, // parameters
  // template(i) $alignment !i
  var_2612_0_template, 1, var_2617_1_i, 1, LOCAL(1),
  // case template(i) $alignment !i
  var_case, 8, LOCAL(1), chr_108, lambda_l, chr_114, lambda_r, chr_99, lambda_c, lambda_347, 2, var_2632_18_alignment, var_2617_1_i,
  // $len_chr template(i)
  var_2612_0_template, 1, var_2617_1_i, 1, var_2637_1_len_chr,
  // len_chr < '0' || len_chr > '9'
  var_std__less, 2, var_2637_1_len_chr, chr_48, 1, LOCAL(1),
  // len_chr < '0' || len_chr > '9'
  var_std__or, 2, LOCAL(1), lambda_348, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_349, lambda_350, TAIL_CALL,
  POS(2632, 22),
  POS(2632, 17),
  POS(2637, 17),
  POS(2639, 19),
  POS(2639, 19),
  POS(2638, 17)
};

static TAB_NUM t_lambda_l[] = {
  1, // locals
  0, // parameters
  // i+1
  var_std__plus, 2, var_2617_1_i, num_1, 1, LOCAL(1),
  //  LEFT i+1
  LET, 2, uni_LEFT, LOCAL(1), TAIL_CALL,
  POS(2633, 31),
  POS(2633, 25)
};

static TAB_NUM t_lambda_r[] = {
  1, // locals
  0, // parameters
  // i+1
  var_std__plus, 2, var_2617_1_i, num_1, 1, LOCAL(1),
  //  RIGHT i+1
  LET, 2, uni_RIGHT, LOCAL(1), TAIL_CALL,
  POS(2634, 32),
  POS(2634, 25)
};

static TAB_NUM t_lambda_c[] = {
  1, // locals
  0, // parameters
  // i+1
  var_std__plus, 2, var_2617_1_i, num_1, 1, LOCAL(1),
  //  CENTER i+1
  LET, 2, uni_CENTER, LOCAL(1), TAIL_CALL,
  POS(2635, 33),
  POS(2635, 25)
};

static TAB_NUM t_lambda_347[] = {
  0, // locals
  0, // parameters
  //  RIGHT i
  LET, 2, uni_RIGHT, var_2617_1_i, TAIL_CALL,
  POS(2636, 21)
};

static TAB_NUM t_lambda_348[] = {
  1, // locals
  0, // parameters
  // 9'
  var_std__less, 2, chr_57, var_2637_1_len_chr, 1, LOCAL(1),
  // len_chr > '9'
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(2639, 47),
  POS(2639, 36)
};

static TAB_NUM t_lambda_349[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(2640, 21)
};

static TAB_NUM t_lambda_350[] = {
  0, // locals
  0, // parameters
  // $width len_chr-'0'
  var_std__minus, 2, var_2637_1_len_chr, chr_48, 1, var_2642_1_width,
  // loop
  var_loop, 2, lambda_351, lambda_355, TAIL_CALL,
  POS(2642, 21),
  POS(2643, 21)
};

static TAB_NUM t_lambda_351[] = {
  1, // locals
  0, // parameters
  // !i i+1
  var_std__plus, 2, var_2617_1_i, num_1, 1, var_2617_1_i,
  // n
  var_std__less, 2, var_2618_1_n, var_2617_1_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), var_break, lambda_352, TAIL_CALL,
  POS(2645, 25),
  POS(2647, 31),
  POS(2646, 25)
};

static TAB_NUM t_lambda_352[] = {
  2, // locals
  0, // parameters
  // $fmt_chr template(i)
  var_2612_0_template, 1, var_2617_1_i, 1, var_2650_1_fmt_chr,
  // fmt_chr < '0' || fmt_chr > '9'
  var_std__less, 2, var_2650_1_fmt_chr, chr_48, 1, LOCAL(1),
  // fmt_chr < '0' || fmt_chr > '9'
  var_std__or, 2, LOCAL(1), lambda_353, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), var_break, lambda_354, TAIL_CALL,
  POS(2650, 29),
  POS(2652, 31),
  POS(2652, 31),
  POS(2651, 29)
};

static TAB_NUM t_lambda_353[] = {
  1, // locals
  0, // parameters
  // 9'
  var_std__less, 2, chr_57, var_2650_1_fmt_chr, 1, LOCAL(1),
  // fmt_chr > '9'
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(2652, 59),
  POS(2652, 48)
};

static TAB_NUM t_lambda_354[] = {
  2, // locals
  0, // parameters
  // 10*width+(fmt_chr-'0')
  var_std__times, 2, num_10, var_2642_1_width, 1, LOCAL(1),
  // fmt_chr-'0')
  var_std__minus, 2, var_2650_1_fmt_chr, chr_48, 1, LOCAL(2),
  // !width 10*width+(fmt_chr-'0')
  var_std__plus, 2, LOCAL(1), LOCAL(2), 1, var_2642_1_width,
  // next
  var_next, 0, TAIL_CALL,
  POS(2655, 40),
  POS(2655, 50),
  POS(2655, 33),
  POS(2656, 33)
};

static TAB_NUM t_lambda_355[] = {
  1, // locals
  0, // parameters
  // n:
  var_std__less, 2, var_2618_1_n, var_2617_1_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_356, lambda_357, TAIL_CALL,
  POS(2659, 31),
  POS(2658, 25)
};

static TAB_NUM t_lambda_356[] = {
  0, // locals
  0, // parameters
  // add_argument width
  func_add_argument, 1, var_2642_1_width, TAIL_CALL,
  POS(2660, 29)
};

static TAB_NUM t_lambda_357[] = {
  2, // locals
  0, // parameters
  // template(i) == '.':
  var_2612_0_template, 1, var_2617_1_i, 1, LOCAL(1),
  // template(i) == '.':
  var_std__equal, 2, LOCAL(1), chr_46, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_358, lambda_369, TAIL_CALL,
  POS(2663, 31),
  POS(2663, 31),
  POS(2662, 29)
};

static TAB_NUM t_lambda_358[] = {
  1, // locals
  0, // parameters
  // !i i+1
  var_std__plus, 2, var_2617_1_i, num_1, 1, var_2617_1_i,
  // n
  var_std__less, 2, var_2618_1_n, var_2617_1_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_359, lambda_360, TAIL_CALL,
  POS(2664, 33),
  POS(2666, 39),
  POS(2665, 33)
};

static TAB_NUM t_lambda_359[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(2667, 37)
};

static TAB_NUM t_lambda_360[] = {
  2, // locals
  0, // parameters
  // $dw_chr template(i)
  var_2612_0_template, 1, var_2617_1_i, 1, var_2669_1_dw_chr,
  // dw_chr < '0' || dw_chr > '9'
  var_std__less, 2, var_2669_1_dw_chr, chr_48, 1, LOCAL(1),
  // dw_chr < '0' || dw_chr > '9'
  var_std__or, 2, LOCAL(1), lambda_361, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_362, lambda_363, TAIL_CALL,
  POS(2669, 37),
  POS(2671, 39),
  POS(2671, 39),
  POS(2670, 37)
};

static TAB_NUM t_lambda_361[] = {
  1, // locals
  0, // parameters
  // 9'
  var_std__less, 2, chr_57, var_2669_1_dw_chr, 1, LOCAL(1),
  // dw_chr > '9'
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(2671, 65),
  POS(2671, 55)
};

static TAB_NUM t_lambda_362[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(2672, 41)
};

static TAB_NUM t_lambda_363[] = {
  0, // locals
  0, // parameters
  // $dw dw_chr-'0'
  var_std__minus, 2, var_2669_1_dw_chr, chr_48, 1, var_2674_1_dw,
  // loop
  var_loop, 2, lambda_364, lambda_368, TAIL_CALL,
  POS(2674, 41),
  POS(2675, 41)
};

static TAB_NUM t_lambda_364[] = {
  1, // locals
  0, // parameters
  // !i i+1
  var_std__plus, 2, var_2617_1_i, num_1, 1, var_2617_1_i,
  // n
  var_std__less, 2, var_2618_1_n, var_2617_1_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), var_break, lambda_365, TAIL_CALL,
  POS(2677, 45),
  POS(2679, 51),
  POS(2678, 45)
};

static TAB_NUM t_lambda_365[] = {
  2, // locals
  0, // parameters
  // $fmt_chr template(i)
  var_2612_0_template, 1, var_2617_1_i, 1, var_2682_1_fmt_chr,
  // fmt_chr < '0' || fmt_chr > '9'
  var_std__less, 2, var_2682_1_fmt_chr, chr_48, 1, LOCAL(1),
  // fmt_chr < '0' || fmt_chr > '9'
  var_std__or, 2, LOCAL(1), lambda_366, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), var_break, lambda_367, TAIL_CALL,
  POS(2682, 49),
  POS(2684, 51),
  POS(2684, 51),
  POS(2683, 49)
};

static TAB_NUM t_lambda_366[] = {
  1, // locals
  0, // parameters
  // 9'
  var_std__less, 2, chr_57, var_2682_1_fmt_chr, 1, LOCAL(1),
  // fmt_chr > '9'
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(2684, 79),
  POS(2684, 68)
};

static TAB_NUM t_lambda_367[] = {
  2, // locals
  0, // parameters
  // 10*dw+(fmt_chr-'0')
  var_std__times, 2, num_10, var_2674_1_dw, 1, LOCAL(1),
  // fmt_chr-'0')
  var_std__minus, 2, var_2682_1_fmt_chr, chr_48, 1, LOCAL(2),
  // !dw 10*dw+(fmt_chr-'0')
  var_std__plus, 2, LOCAL(1), LOCAL(2), 1, var_2674_1_dw,
  // next
  var_next, 0, TAIL_CALL,
  POS(2687, 57),
  POS(2687, 64),
  POS(2687, 53),
  POS(2688, 53)
};

static TAB_NUM t_lambda_368[] = {
  0, // locals
  0, // parameters
  // add_argument alignment width dw
  func_add_argument, 3, var_2632_18_alignment, var_2642_1_width, var_2674_1_dw, TAIL_CALL,
  POS(2690, 45)
};

static TAB_NUM t_lambda_369[] = {
  0, // locals
  0, // parameters
  // add_argument alignment width
  func_add_argument, 2, var_2632_18_alignment, var_2642_1_width, TAIL_CALL,
  POS(2692, 33)
};

static TAB_NUM t_lambda_370[] = {
  1, // locals
  0, // parameters
  // n
  var_std__less, 2, var_2618_1_n, var_2617_1_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_371, lambda_372, TAIL_CALL,
  POS(2695, 19),
  POS(2694, 13)
};

static TAB_NUM t_lambda_371[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(2696, 17)
};

static TAB_NUM t_lambda_372[] = {
  1, // locals
  0, // parameters
  // template(i)
  var_2612_0_template, 1, var_2617_1_i, 1, LOCAL(1),
  // push &output template(i)
  var_push, 2, var_2615_1_output, LOCAL(1), 1, var_2615_1_output,
  // !i i+1
  var_std__plus, 2, var_2617_1_i, num_1, 1, var_2617_1_i,
  // next
  var_next, 0, TAIL_CALL,
  POS(2698, 30),
  POS(2698, 17),
  POS(2699, 17),
  POS(2700, 17)
};

static TAB_NUM t_lambda_373[] = {
  0, // locals
  0, // parameters
  // push &output chr
  var_push, 2, var_2615_1_output, var_2624_1_chr, 1, var_2615_1_output,
  // next
  var_next, 0, TAIL_CALL,
  POS(2702, 13),
  POS(2703, 13)
};

static TAB_NUM t_func_add_argument[] = {
  2, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_2707_0_alignment,
  MANDATORY_PARAMETER, var_2708_0_width,
  var_undefined, var_2709_0_decimal_width,
  // $argument arguments(arg_idx)
  var_2613_0_arguments, 1, var_2616_1_arg_idx, 1, var_2711_1_argument,
  // !arg_idx arg_idx+1
  var_std__plus, 2, var_2616_1_arg_idx, num_1, 1, var_2616_1_arg_idx,
  // is_defined:
  var_is_defined, 1, var_2709_0_decimal_width, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_decimal_width_is_defined, lambda_376, 1, LOCAL(2),
  // append &output
  var_append, 2, var_2615_1_output, LOCAL(2), 1, var_2615_1_output,
  // next
  var_next, 0, TAIL_CALL,
  POS(2711, 5),
  POS(2712, 5),
  POS(2715, 23),
  POS(2714, 7),
  POS(2713, 5),
  POS(2731, 5)
};

static TAB_NUM t_lambda_decimal_width_is_defined[] = {
  1, // locals
  0, // parameters
  // real_to_string &argument
  func_real_to_string, 1, var_2711_1_argument, 1, var_2711_1_argument,
  // is_undefined
  var_is_undefined, 1, var_2711_1_argument, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_374, lambda_375, TAIL_CALL,
  POS(2716, 11),
  POS(2718, 22),
  POS(2717, 11)
};

static TAB_NUM t_lambda_374[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(2719, 15)
};

static TAB_NUM t_lambda_375[] = {
  5, // locals
  0, // parameters
  // $value argument .truncate_from. '.'
  var_truncate_from, 2, var_2711_1_argument, chr_46, 1, LOCAL(4),
  // $decimals argument .behind. '.'
  var_behind, 2, var_2711_1_argument, chr_46, 1, LOCAL(5),
  // pad_left(value width)
  var_pad_left, 2, LOCAL(4), var_2708_0_width, 1, LOCAL(1),
  // pad_right(decimals decimal_width "0") decimal_width)
  var_pad_right, 3, LOCAL(5), var_2709_0_decimal_width, string_12, 1, LOCAL(2),
  // truncate(pad_right(decimals decimal_width "0") decimal_width)
  var_truncate, 2, LOCAL(2), var_2709_0_decimal_width, 1, LOCAL(3),
  // string
  var_string, 3, LOCAL(1), string_13, LOCAL(3), TAIL_CALL,
  POS(2721, 15),
  POS(2722, 15),
  POS(2724, 17),
  POS(2726, 26),
  POS(2726, 17),
  POS(2723, 15)
};

static TAB_NUM t_lambda_376[] = {
  0, // locals
  0, // parameters
  // case alignment
  var_case, 5, var_2707_0_alignment, uni_LEFT, lambda_LEFT, uni_RIGHT, lambda_RIGHT, TAIL_CALL,
  POS(2728, 11)
};

static TAB_NUM t_lambda_LEFT[] = {
  1, // locals
  0, // parameters
  // pad_right(argument width)
  var_pad_right, 2, var_2711_1_argument, var_2708_0_width, 1, LOCAL(1),
  //  pad_right(argument width)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(2729, 21),
  POS(2729, 20)
};

static TAB_NUM t_lambda_RIGHT[] = {
  1, // locals
  0, // parameters
  // pad_left(argument width)
  var_pad_left, 2, var_2711_1_argument, var_2708_0_width, 1, LOCAL(1),
  //  pad_left(argument width)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(2730, 22),
  POS(2730, 21)
};

static TAB_NUM t_func_real_to_string[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 2733_18_num
  // $str num.to_string
  var_to_string, 1, LOCAL(1), 1, var_2734_1_str,
  // $n length_of(str)
  var_length_of, 1, var_2734_1_str, 1, var_2735_1_n,
  // $i n
  LET, 1, var_2735_1_n, 1, var_2736_1_i,
  // loop:
  var_loop, 1, lambda_21_loop, TAIL_CALL,
  POS(2734, 3),
  POS(2735, 3),
  POS(2736, 3),
  POS(2737, 3)
};

static TAB_NUM t_lambda_21_loop[] = {
  1, // locals
  0, // parameters
  // i == 0
  var_std__equal, 2, var_2736_1_i, num_0, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_377, lambda_378, TAIL_CALL,
  POS(2739, 7),
  POS(2738, 5)
};

static TAB_NUM t_lambda_377[] = {
  0, // locals
  0, // parameters
  //  str
  LET, 1, var_2734_1_str, TAIL_CALL,
  POS(2740, 9)
};

static TAB_NUM t_lambda_378[] = {
  2, // locals
  0, // parameters
  // str(i) == 'e'
  var_2734_1_str, 1, var_2736_1_i, 1, LOCAL(1),
  // str(i) == 'e'
  var_std__equal, 2, LOCAL(1), chr_101, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), func_2_handle_exponent, lambda_379, TAIL_CALL,
  POS(2743, 11),
  POS(2743, 11),
  POS(2742, 9)
};

static TAB_NUM t_lambda_379[] = {
  0, // locals
  0, // parameters
  // !i i-1
  var_std__minus, 2, var_2736_1_i, num_1, 1, var_2736_1_i,
  // next
  var_next, 0, TAIL_CALL,
  POS(2746, 13),
  POS(2747, 13)
};

static TAB_NUM t_func_2_handle_exponent[] = {
  3, // locals
  0, // parameters
  // i >= n || str(2) != '.'
  var_std__less, 2, var_2736_1_i, var_2735_1_n, 1, LOCAL(1),
  // i >= n || str(2) != '.'
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // i >= n || str(2) != '.'
  var_std__or, 2, LOCAL(2), lambda_380, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_381, lambda_382, TAIL_CALL,
  POS(2751, 7),
  POS(2751, 7),
  POS(2751, 7),
  POS(2750, 5)
};

static TAB_NUM t_lambda_380[] = {
  3, // locals
  0, // parameters
  // str(2) != '.'
  var_2734_1_str, 1, num_2, 1, LOCAL(1),
  // str(2) != '.'
  var_std__equal, 2, LOCAL(1), chr_46, 1, LOCAL(2),
  // str(2) != '.'
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // str(2) != '.'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(2751, 17),
  POS(2751, 17),
  POS(2751, 17),
  POS(2751, 17)
};

static TAB_NUM t_lambda_381[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(2752, 9)
};

static TAB_NUM t_lambda_382[] = {
  3, // locals
  0, // parameters
  // i+2 n).to_integer
  var_std__plus, 2, var_2736_1_i, num_2, 1, LOCAL(1),
  // range(str i+2 n).to_integer
  var_range, 3, var_2734_1_str, LOCAL(1), var_2735_1_n, 1, LOCAL(2),
  // $exp range(str i+2 n).to_integer
  var_to_integer, 1, LOCAL(2), 1, var_2754_1_exp,
  // i-1) str(1))
  var_std__minus, 2, var_2736_1_i, num_1, 1, LOCAL(1),
  // range(str 3 i-1) str(1))
  var_range, 3, var_2734_1_str, num_3, LOCAL(1), 1, LOCAL(2),
  // str(1))
  var_2734_1_str, 1, num_1, 1, LOCAL(3),
  // $man put(range(str 3 i-1) str(1))
  var_put, 2, LOCAL(2), LOCAL(3), 1, var_2755_1_man,
  // is_undefined
  var_is_undefined, 1, var_2754_1_exp, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_383, lambda_384, TAIL_CALL,
  POS(2754, 24),
  POS(2754, 14),
  POS(2754, 9),
  POS(2755, 30),
  POS(2755, 18),
  POS(2755, 35),
  POS(2755, 9),
  POS(2757, 15),
  POS(2756, 9)
};

static TAB_NUM t_lambda_383[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(2758, 13)
};

static TAB_NUM t_lambda_384[] = {
  2, // locals
  0, // parameters
  // exp-1)
  var_std__minus, 2, var_2754_1_exp, num_1, 1, LOCAL(1),
  // $zeros dup("0" exp-1)
  var_dup, 2, string_12, LOCAL(1), 1, var_2760_1_zeros,
  // i+1)
  var_std__plus, 2, var_2736_1_i, num_1, 1, LOCAL(1),
  // str(i+1)
  var_2734_1_str, 1, LOCAL(1), 1, LOCAL(2),
  // case str(i+1)
  var_case, 6, LOCAL(2), chr_43, lambda_385, chr_45, lambda_386, lambda_387, TAIL_CALL,
  POS(2760, 28),
  POS(2760, 13),
  POS(2761, 22),
  POS(2761, 18),
  POS(2761, 13)
};

static TAB_NUM t_lambda_385[] = {
  1, // locals
  0, // parameters
  // append(man zeros)
  var_append, 2, var_2755_1_man, var_2760_1_zeros, 1, LOCAL(1),
  // -> append(man zeros)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(2763, 20),
  POS(2763, 17)
};

static TAB_NUM t_lambda_386[] = {
  2, // locals
  0, // parameters
  // append(zeros man))
  var_append, 2, var_2760_1_zeros, var_2755_1_man, 1, LOCAL(1),
  // append("0." append(zeros man))
  var_append, 2, string_14, LOCAL(1), 1, LOCAL(2),
  // -> append("0." append(zeros man))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2765, 32),
  POS(2765, 20),
  POS(2765, 17)
};

static TAB_NUM t_lambda_387[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(2766, 17)
};

static int value_range_1301_1_arguments[] = {
  -chr_48, -chr_49
};

static int value_range_1312_1_arguments[] = {
  -chr_48, -chr_55
};

static int value_range_1323_1_arguments[] = {
  -chr_48, -chr_57
};

static int value_range_1326_1_arguments[] = {
  -chr_97, -chr_102
};

static int value_range_1329_1_arguments[] = {
  -chr_65, -chr_70
};

static int sequence_1408_1_arguments[] = {
  -chr_101, -chr_69
};

static FUNKY_CONSTANT constants_table[] = {
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__string___to_string}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__create_string}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1}},
  {FLT_STRING_8, 0, {.str_8 = ""}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__string}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__string___put}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__string___dup}},
  {FLT_POSITIVE_INT64, 0, {.value = 0}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_3}},
  {FLT_POSITIVE_INT64, 0, {.value = 1}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_4}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_5}},
  {FLT_POSITIVE_INT64, 0, {.value = 2}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_6}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_7}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__pad_left}},
  {FLT_STRING_8, 1, {.str_8 = " "}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_8}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_9}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__pad_right}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_10}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_11}},
  {FLT_STRING_8, 80, {.str_8 = "                                                                                "}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__spaces}},
  {FLT_POSITIVE_INT64, 0, {.value = 80}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_12}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_13}},
  {FLT_STRING_8, 16, {.str_8 = "\011\011\011\011\011\011\011\011\011       "}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__tabs_and_spaces}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_14}},
  {FLT_POSITIVE_INT64, 0, {.value = 3}},
  {FLT_POSITIVE_INT64, 0, {.value = 10}},
  {FLT_POSITIVE_INT64, 0, {.value = 7}},
  {FLT_POSITIVE_INT64, 0, {.value = 9}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_15}},
  {FLT_STRING_8, 1, {.str_8 = "\011"}},
  {FLT_STRING_8, 9, {.str_8 = "\011\011\011\011\011\011\011\011\011"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__with_tabs}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_16}},
  {FLT_CHARACTER, 0, {.value = 32}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_17}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_18}},
  {FLT_POSITIVE_INT64, 0, {.value = 8}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_19}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_20}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_21}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_22}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_23}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_24}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_25}},
  {FLT_NEGATIVE_INT64, 0, {.value = 1}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_skip_line}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_26}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_27}},
  {FLT_CHARACTER, 0, {.value = 10}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_28}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_29}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__string___match}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_30}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_31}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_32}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_33}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__string___search}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_34}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_35}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_search_forwards}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_36}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_37}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_38}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_39}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_40}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_41}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_search_backwards}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_42}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_43}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_44}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_45}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_46}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_47}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__string___before}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_48}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_49}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__string___truncate_from}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_50}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_51}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__string___behind}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_52}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_53}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__string___truncate_until}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_54}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_55}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__string___from}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_56}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_57}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__string___truncate_before}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_58}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_59}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__string___until}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_60}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_61}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__string___truncate_behind}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_62}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_63}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__string___between}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__string___has_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__string___has_suffix}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_64}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_65}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_66}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_67}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__string___without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_68}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_69}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__string___without_suffix}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_suffix_is_a_character}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_70}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_71}},
  {FLT_NEGATIVE_INT64, 0, {.value = 2}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_72}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_73}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_74}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_75}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_76}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__string___contains}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__split}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_77}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_78}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_pos_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_79}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_80}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_81}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__join}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_82}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__trim}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_3_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_83}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_84}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_85}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_4_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_86}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_87}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_88}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__trim_left}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_5_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_89}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_90}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_91}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__trim_right}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_6_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_92}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_93}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_94}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__normalize}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_7_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_95}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_96}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_97}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_98}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_99}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_100}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_101}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_102}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_103}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__parse_integer}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_maybe_negated}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_104}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_105}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_partial_match}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_106}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_107}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_exhausted}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_108}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_109}},
  {FLT_CHARACTER, 0, {.value = 45}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_110}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_111}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_112}},
  {FLT_STRING_8, 2, {.str_8 = "0b"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_113}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_114}},
  {FLT_CHARACTER, 0, {.value = 48}},
  {FLT_CHARACTER, 0, {.value = 49}},
  {FLT_VALUE_RANGE, 2, {.arguments = value_range_1301_1_arguments}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_115}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_116}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_117}},
  {FLT_STRING_8, 2, {.str_8 = "0o"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_118}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_119}},
  {FLT_CHARACTER, 0, {.value = 55}},
  {FLT_VALUE_RANGE, 2, {.arguments = value_range_1312_1_arguments}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_120}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_121}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_122}},
  {FLT_STRING_8, 2, {.str_8 = "0x"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_123}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_124}},
  {FLT_CHARACTER, 0, {.value = 57}},
  {FLT_VALUE_RANGE, 2, {.arguments = value_range_1323_1_arguments}},
  {FLT_CHARACTER, 0, {.value = 97}},
  {FLT_CHARACTER, 0, {.value = 102}},
  {FLT_VALUE_RANGE, 2, {.arguments = value_range_1326_1_arguments}},
  {FLT_CHARACTER, 0, {.value = 65}},
  {FLT_CHARACTER, 0, {.value = 70}},
  {FLT_VALUE_RANGE, 2, {.arguments = value_range_1329_1_arguments}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_125}},
  {FLT_POSITIVE_INT64, 0, {.value = 4}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_a__f}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_A__F}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_126}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_127}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_128}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_129}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_130}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_131}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__parse_number}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_132}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_133}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_134}},
  {FLT_CHARACTER, 0, {.value = 43}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_135}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_136}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_137}},
  {FLT_CHARACTER, 0, {.value = 98}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_b}},
  {FLT_CHARACTER, 0, {.value = 111}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_o}},
  {FLT_CHARACTER, 0, {.value = 120}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_x}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_skip_one_ore_more_digits}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_138}},
  {FLT_CHARACTER, 0, {.value = 101}},
  {FLT_CHARACTER, 0, {.value = 69}},
  {FLT_SEQUENCE, 2, {.arguments = sequence_1408_1_arguments}},
  {FLT_CHARACTER, 0, {.value = 46}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_139}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2_skip_one_ore_more_digits}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_140}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_skip_one_ore_more_digits}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_141}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_142}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_143}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_144}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_145}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_8_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_146}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_147}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_handle_exponent}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_148}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_149}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_150}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_151}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_return_integer}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_return_real}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_binary}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_152}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_153}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_154}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_155}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_156}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_9_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_157}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_158}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_159}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_160}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_161}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_octal}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_162}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_163}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_164}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_165}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_166}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_10_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_167}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_168}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_169}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_170}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_171}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__parse_hex}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_172}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_173}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_174}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_175}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_176}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_177}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_178}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_179}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_180}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_181}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_182}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_183}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_184}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_handle_more_digits}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_11_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_185}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_186}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_187}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_188}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_189}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_190}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_191}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_192}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_193}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_194}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_195}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_196}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_197}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__string___to_integer}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_198}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_199}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__string___to_number}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_200}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_201}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__map_characters}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_202}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_203}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_204}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_205}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_206}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_207}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_208}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_209}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_210}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_211}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_212}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_213}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__string___to_upper_case}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__string___to_lower_case}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__string___to_title_case}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_214}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_215}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_216}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_217}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__string___to_sentence_case}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_218}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_219}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_220}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_221}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__delete_all}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_delete_all}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_222}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_223}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_224}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_225}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_226}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__replace_all}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_replace_all}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_227}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_228}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_229}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_230}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_replacement_is_a_string}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_231}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_232}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__replace_first}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_replace_first}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_233}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_234}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_235}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_236}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_237}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_238}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__count_occurrences}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_search_next}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_239}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_240}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_n_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_241}},
  {FLT_POSITIVE_INT64, 0, {.value = 300}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__partition}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_partition}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_242}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_243}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_244}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_245}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_ls_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_246}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_247}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_248}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_249}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_250}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_251}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_12_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_252}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_253}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__split_into_lines}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_13_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_254}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_255}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_256}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_257}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_258}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_259}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__split_into_indented_lines}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_split}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_260}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_261}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_262}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_263}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_264}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_265}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_266}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2_ls_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_267}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_268}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_269}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_270}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_14_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_271}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_272}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_create_line}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_15_loop}},
  {FLT_CHARACTER, 0, {.value = 9}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_273}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_274}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_275}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_276}},
  {FLT_STRING_8, 1, {.str_8 = "\012"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_277}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_278}},
  {FLT_POSITIVE_INT64, 0, {.value = 20}},
  {FLT_POSITIVE_INT64, 0, {.value = 9999}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_indent_of}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_279}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_280}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__split_into_groups}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_16_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_281}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_indent_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_282}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_283}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_2_split}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_284}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_285}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_286}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_287}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_288}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_289}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_290}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_291}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_292}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_293}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_294}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_gs_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_17_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_295}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_296}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_297}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_298}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_299}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_300}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_301}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_302}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_add_groups}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_303}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_304}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_305}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_306}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_reduce_minimum_indent_and_next}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_307}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_308}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_start_new_fragment_and_next}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__wrap_words}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_18_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_309}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_310}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_311}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_312}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_313}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_314}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_315}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_316}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_317}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_b_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_318}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__string___serialize}},
  {FLT_STRING_8, 1, {.str_8 = "\042"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_319}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_320}},
  {FLT_CHARACTER, 0, {.value = 126}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_321}},
  {FLT_CHARACTER, 0, {.value = 34}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_322}},
  {FLT_CHARACTER, 0, {.value = 64}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_323}},
  {FLT_STRING_8, 1, {.str_8 = "@"}},
  {FLT_STRING_8, 1, {.str_8 = ";"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_324}},
  {FLT_STRING_8, 2, {.str_8 = "\042\012"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_325}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_326}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__indented}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_19_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_327}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_328}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_329}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_330}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_331}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_332}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_333}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_334}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_335}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_skip_indent}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_336}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_337}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_338}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_skip_spaces}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_339}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_340}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_341}},
  {FLT_UNIQUE, 0, {.str_8 = "LEFT"}},
  {FLT_UNIQUE, 0, {.str_8 = "RIGHT"}},
  {FLT_UNIQUE, 0, {.str_8 = "CENTER"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__format}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_20_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_342}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_343}},
  {FLT_CHARACTER, 0, {.value = 37}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_344}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_345}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_346}},
  {FLT_CHARACTER, 0, {.value = 108}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_l}},
  {FLT_CHARACTER, 0, {.value = 114}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_r}},
  {FLT_CHARACTER, 0, {.value = 99}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_c}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_347}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_348}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_349}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_350}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_351}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_352}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_353}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_354}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_355}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_356}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_357}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_358}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_359}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_360}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_361}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_362}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_363}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_364}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_365}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_366}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_367}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_368}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_369}},
  {FLT_CHARACTER, 0, {.value = 92}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_370}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_371}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_372}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_373}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_add_argument}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_decimal_width_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_374}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_375}},
  {FLT_STRING_8, 1, {.str_8 = "0"}},
  {FLT_STRING_8, 1, {.str_8 = "."}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_376}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_LEFT}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_RIGHT}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_real_to_string}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_21_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_377}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_378}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_379}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_2_handle_exponent}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_380}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_381}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_382}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_383}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_384}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_385}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_386}},
  {FLT_STRING_8, 2, {.str_8 = "0."}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_387}}
};

static ATTRIBUTE_DEFINITION std_types__object__attributes[] = {
  {-var_is_a_string, -var_false},
  {-var_is_an_octet_string, -var_false}
};

static ATTRIBUTE_DEFINITION std_types__string__attributes[] = {
  {-var_is_a_string, -var_true},
  {var_to_string, -func_std_types__string___to_string},
  {var_put, -func_std_types__string___put},
  {var_dup, -func_std_types__string___dup},
  {var_match, -func_std_types__string___match},
  {var_search, -func_std_types__string___search},
  {var_before, -func_std_types__string___before},
  {var_truncate_from, -func_std_types__string___truncate_from},
  {var_behind, -func_std_types__string___behind},
  {var_truncate_until, -func_std_types__string___truncate_until},
  {var_from, -func_std_types__string___from},
  {var_truncate_before, -func_std_types__string___truncate_before},
  {var_until, -func_std_types__string___until},
  {var_truncate_behind, -func_std_types__string___truncate_behind},
  {var_between, -func_std_types__string___between},
  {var_has_prefix, -func_std_types__string___has_prefix},
  {var_has_suffix, -func_std_types__string___has_suffix},
  {var_without_prefix, -func_std_types__string___without_prefix},
  {var_without_suffix, -func_std_types__string___without_suffix},
  {var_contains, -func_std_types__string___contains},
  {var_to_integer, -func_std_types__string___to_integer},
  {var_to_number, -func_std_types__string___to_number},
  {var_to_upper_case, -func_std_types__string___to_upper_case},
  {var_to_lower_case, -func_std_types__string___to_lower_case},
  {var_to_title_case, -func_std_types__string___to_title_case},
  {var_to_sentence_case, -func_std_types__string___to_sentence_case},
  {var_serialize, -func_std_types__string___serialize},
  {-var_empty_collection_of, -string_1}
};

static ATTRIBUTE_DEFINITION std_types__octet_string__attributes[] = {
  {-var_is_an_octet_string, -var_true}
};

static FUNKY_VARIABLE variables_table[] = {
  {
    FOT_POLYMORPHIC, 0, 0,
    "to_sentence_case\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "assign\000std", NULL,
    {.position = POS(23, 1)}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "is_a_string\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN, 0, 2,
    "object\000std_types", std_types__object__attributes,
    {.position = POS(31, 1)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "is_a_string\000", NULL,
    {.position = POS(31, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "false\000", NULL,
    {.position = POS(31, 32)}
  },
  {
    FOT_UNKNOWN, 0, 28,
    "string\000std_types", std_types__string__attributes,
    {.position = POS(37, 1)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "true\000", NULL,
    {.position = POS(37, 32)}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "is_an_octet_string\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "is_an_octet_string\000", NULL,
    {.position = POS(49, 20)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "octet_string\000std_types", std_types__octet_string__attributes,
    {.position = POS(55, 1)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "to_string\000", NULL,
    {.position = POS(61, 20)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "create_string\000std", NULL,
    {.const_idx = -func_std__create_string}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "90_0_arguments\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_empty\000", NULL,
    {.position = POS(93, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "append\000", NULL,
    {.position = POS(95, 38)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "map_reduce\000", NULL,
    {.position = POS(95, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if\000", NULL,
    {.position = POS(92, 3)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "string\000std", NULL,
    {.const_idx = -func_std__string}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "create_string\000", NULL,
    {.position = POS(111, 3)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "put\000", NULL,
    {.position = POS(113, 20)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "dup\000", NULL,
    {.position = POS(131, 20)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "151_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "152_0_n\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "shift_right\000std", NULL,
    {.position = POS(158, 10)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "159_1_str\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "times\000std", NULL,
    {.position = POS(161, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "equal\000std", NULL,
    {.position = POS(161, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "string\000", NULL,
    {.position = POS(162, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "case\000", NULL,
    {.position = POS(154, 3)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "pad_left\000std", NULL,
    {.const_idx = -func_std__pad_left}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "191_0_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "192_0_pad\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "194_1_text\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "195_1_len\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "length_of\000", NULL,
    {.position = POS(195, 8)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "less\000std", NULL,
    {.position = POS(197, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "minus\000std", NULL,
    {.position = POS(199, 29)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000std", NULL,
    {.position = POS(199, 29)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "div\000", NULL,
    {.position = POS(199, 29)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "range\000", NULL,
    {.position = POS(199, 14)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "pad_right\000std", NULL,
    {.const_idx = -func_std__pad_right}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "227_0_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "228_0_pad\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "230_1_text\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "231_1_len\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "spaces\000std", NULL,
    {.const_idx = -func_std__spaces}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "250_0_n\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not\000std", NULL,
    {.position = POS(253, 10)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "tabs_and_spaces\000std", NULL,
    {.const_idx = -func_std__tabs_and_spaces}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "267_0_n\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "bit_and\000std", NULL,
    {.position = POS(271, 56)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "spaces\000", NULL,
    {.position = POS(272, 34)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "with_tabs\000std", NULL,
    {.const_idx = -func_std__with_tabs}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "287_0_text\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "289_1_s\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "290_1_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "291_1_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "292_1_output\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "293_1_count\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "next\000", NULL,
    {.position = POS(301, 13)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "305_1_tab_count\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "shift_left\000std", NULL,
    {.position = POS(314, 35)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "loop\000", NULL,
    {.position = POS(294, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "and\000std", NULL,
    {.position = POS(328, 16)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "break\000", NULL,
    {.position = POS(331, 11)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "match\000", NULL,
    {.position = POS(338, 20)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "350_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "351_0_stream\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "353_1_len\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "undefined\000", NULL,
    {.position = POS(360, 12)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "search\000", NULL,
    {.position = POS(363, 20)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "380_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "381_0_stream\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "382_0_nth\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "384_1_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "385_1_length\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "386_1_offset\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "387_1_n\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "dec\000", NULL,
    {.position = POS(404, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000", NULL,
    {.position = POS(405, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "inc\000", NULL,
    {.position = POS(409, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "minus\000", NULL,
    {.position = POS(422, 17)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "before\000", NULL,
    {.position = POS(430, 20)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "468_0_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "472_8_pos\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_defined\000", NULL,
    {.position = POS(474, 9)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "truncate_from\000", NULL,
    {.position = POS(479, 20)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "518_0_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "522_8_pos\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "behind\000", NULL,
    {.position = POS(528, 20)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "566_0_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "570_8_pos\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "570_13_len\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "truncate_until\000", NULL,
    {.position = POS(576, 20)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "615_0_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "619_8_pos\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "619_13_len\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "from\000", NULL,
    {.position = POS(625, 20)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "664_0_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "668_8_pos\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "truncate_before\000", NULL,
    {.position = POS(674, 20)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "713_0_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "717_8_pos\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "until\000", NULL,
    {.position = POS(723, 20)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "761_0_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "765_8_pos\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "765_13_len\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "truncate_behind\000", NULL,
    {.position = POS(771, 20)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "810_0_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "814_8_pos\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "814_13_len\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "between\000", NULL,
    {.position = POS(820, 20)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "has_prefix\000", NULL,
    {.position = POS(853, 20)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "has_suffix\000", NULL,
    {.position = POS(875, 20)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "892_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "893_0_suffix\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_a_character\000", NULL,
    {.position = POS(896, 12)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "899_1_len\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "negate\000std", NULL,
    {.position = POS(900, 48)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "without_prefix\000", NULL,
    {.position = POS(902, 20)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "923_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "926_1_n\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "without_suffix\000", NULL,
    {.position = POS(932, 20)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "953_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "954_0_suffix\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "956_1_len\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "964_1_slen\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "contains\000", NULL,
    {.position = POS(970, 20)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "split\000std", NULL,
    {.const_idx = -func_std__split}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1022_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1023_0_separator\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_list\000", NULL,
    {.position = POS(1027, 8)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1029_1_items\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1031_8_pos\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1031_13_len\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "push\000", NULL,
    {.position = POS(1034, 13)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "join\000std", NULL,
    {.const_idx = -func_std__join}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1067_0_separator\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "trim\000std", NULL,
    {.const_idx = -func_std__trim}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1096_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1097_0_test\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_a_whitespace_character\000", NULL,
    {.position = POS(1097, 12)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1099_1_s\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1100_1_e\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "trim_left\000std", NULL,
    {.const_idx = -func_std__trim_left}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1136_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1137_0_test\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1139_1_s\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1140_1_e\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "trim_right\000std", NULL,
    {.const_idx = -func_std__trim_right}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1170_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1171_0_test\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1173_1_e\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "normalize\000std", NULL,
    {.const_idx = -func_std__normalize}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1204_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1206_1_buf\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1207_1_e\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1208_1_i\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_not_empty\000", NULL,
    {.position = POS(1222, 23)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "update_if\000", NULL,
    {.position = POS(1222, 9)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1223_1_s\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "parse_integer\000std", NULL,
    {.const_idx = -func_std__parse_integer}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1266_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1287_1_negate\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1293_1_value\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1274_17_idx\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1286_1_orig\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1298_3_idx\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1298_7_chr\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "value_range\000std", NULL,
    {.position = POS(1301, 14)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "for_each\000", NULL,
    {.position = POS(1297, 7)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1310_3_idx\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1310_7_chr\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1321_3_idx\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1321_7_chr\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1337_3_idx\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1337_7_chr\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "cond\000", NULL,
    {.position = POS(1294, 3)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "parse_number\000std", NULL,
    {.const_idx = -func_std__parse_number}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1373_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1375_1_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1376_1_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1381_1_sign_chr\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "or\000std", NULL,
    {.position = POS(1382, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "parse_hex\000", NULL,
    {.position = POS(1388, 18)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "sequence\000std", NULL,
    {.position = POS(1408, 14)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1411_28_cont\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1416_1_digit\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1427_1_next_digit\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1439_1_exp_sign_chr\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "integer\000", NULL,
    {.position = POS(1443, 41)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "real\000", NULL,
    {.position = POS(1445, 38)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1447_16_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1447_20_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1448_1_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1452_1_digit\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1457_1_value\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1464_1_next_digit\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1471_15_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1471_19_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1472_1_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1476_1_digit\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1481_1_value\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1488_1_next_digit\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "parse_hex\000std", NULL,
    {.const_idx = -func_std__parse_hex}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1523_0_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1524_0_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1526_1_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1530_1_digit\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1540_22_value\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1547_1_next_digit\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "to_integer\000", NULL,
    {.position = POS(1560, 20)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1596_21_value\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "parse_integer\000", NULL,
    {.position = POS(1596, 3)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "to_number\000", NULL,
    {.position = POS(1602, 20)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1638_20_value\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "parse_number\000", NULL,
    {.position = POS(1638, 3)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "map_characters\000std", NULL,
    {.const_idx = -func_std__map_characters}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1665_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1666_0_function\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "parameter_count_of\000", NULL,
    {.position = POS(1670, 7)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1672_3_s\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1672_5_e\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1668_1_map\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1685_3_s\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1685_5_e\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "to_upper_case\000", NULL,
    {.position = POS(1700, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "map_characters\000", NULL,
    {.position = POS(1720, 3)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "to_lower_case\000", NULL,
    {.position = POS(1722, 20)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "to_title_case\000", NULL,
    {.position = POS(1744, 20)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1762_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1764_22_idx\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1764_26_chr\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_a_letter_character\000", NULL,
    {.position = POS(1766, 30)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "to_sentence_case\000", NULL,
    {.position = POS(1770, 20)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1788_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1790_22_idx\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1790_26_chr\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "delete_all\000std", NULL,
    {.const_idx = -func_std__delete_all}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1818_0_expressions\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1820_14_txt\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1834_1_new_text\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1827_1_len\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if_not\000", NULL,
    {.position = POS(1828, 13)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "replace_all\000std", NULL,
    {.const_idx = -func_std__replace_all}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1859_0_args\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1861_15_txt\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1882_1_new_text\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1868_17_replacement\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1869_1_len\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "replace_first\000std", NULL,
    {.const_idx = -func_std__replace_first}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1907_0_args\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1909_17_txt\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1929_1_new_text\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1916_17_replacement\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1917_1_len\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "update_if_not\000", NULL,
    {.position = POS(1922, 17)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "count_occurrences\000std", NULL,
    {.const_idx = -func_std__count_occurrences}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1952_0_expr\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1954_15_txt\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1954_19_count\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1959_1_n\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "partition\000std", NULL,
    {.const_idx = -func_std__partition}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1993_0_text\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1994_0_separators\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1996_1_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1999_13_s\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1999_15_e\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2005_1_parts\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2006_1_ls\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2008_3_i\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "equal\000", NULL,
    {.position = POS(2009, 38)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "any_of\000", NULL,
    {.position = POS(2009, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "from_to\000", NULL,
    {.position = POS(2007, 9)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "split_into_lines\000std", NULL,
    {.const_idx = -func_std__split_into_lines}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2073_25_text\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2074_1_lines\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2075_1_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2076_1_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2077_1_s\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "split_into_indented_lines\000std", NULL,
    {.const_idx = -func_std__split_into_indented_lines}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2156_0_text\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2161_9_s\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2161_11_e\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2167_1_lines\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2168_1_ls\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2174_3_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2195_15_s\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2195_17_e\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2196_1_indent\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2210_1_line_text\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "tuple\000", NULL,
    {.position = POS(2214, 20)}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "subgroups_of\000std", NULL,
    {.has_a_setter = true}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2221_13_line\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "first\000", NULL,
    {.position = POS(2224, 8)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "split_into_groups\000std", NULL,
    {.const_idx = -func_std__split_into_groups}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2278_0_lines\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2280_1_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2281_1_fv\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2285_1_indent\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2294_9_s\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2294_11_e\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2294_13_indent\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2294_20_gs\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2300_1_groups\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2301_1_minimum_indent\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2302_1_ge\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2304_3_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2305_1_current_indent\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2330_1_current_indent\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2343_14_l\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "subgroups_of\000", NULL,
    {.position = POS(2353, 41)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2355_34_current_indent\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "wrap_words\000std", NULL,
    {.const_idx = -func_std__wrap_words}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2395_0_text\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2396_0_width\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2398_1_wrapped_text\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2399_1_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2400_1_s\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2401_1_l\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2402_1_b\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2403_1_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2409_1_chr\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "serialize\000", NULL,
    {.position = POS(2453, 20)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2471_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2472_0_indent\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2474_1_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2475_1_s\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2477_3_idx\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2477_7_chr\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "tabs_and_spaces\000", NULL,
    {.position = POS(2490, 19)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "indented\000std", NULL,
    {.const_idx = -func_std__indented}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2523_0_indent\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2524_0_text\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2526_1_indented_text\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2527_1_new_indent\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2528_1_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2529_1_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2542_1_s\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "format\000std", NULL,
    {.const_idx = -func_std__format}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2612_0_template\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2613_0_arguments\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2615_1_output\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2616_1_arg_idx\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2617_1_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2618_1_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2624_1_chr\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2632_18_alignment\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2637_1_len_chr\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2642_1_width\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2650_1_fmt_chr\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2669_1_dw_chr\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2674_1_dw\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2682_1_fmt_chr\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2707_0_alignment\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2708_0_width\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2709_0_decimal_width\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2711_1_argument\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_undefined\000", NULL,
    {.position = POS(2718, 22)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "pad_left\000", NULL,
    {.position = POS(2724, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "pad_right\000", NULL,
    {.position = POS(2726, 26)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "truncate\000", NULL,
    {.position = POS(2726, 17)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2734_1_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2735_1_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2736_1_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2754_1_exp\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2755_1_man\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2760_1_zeros\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "empty_collection_of\000", NULL,
    {.position = POS(2768, 20)}
  }
};

static FUNKY_NAMESPACE used_namespaces[] = {
  {"std", 1, 0}
};

FUNKY_MODULE module__basic__types__collections__strings__string = {
  "_basic__types__collections__strings__string", // module name
  "basic/types/collections/strings/string.fky", // module filename
  .major_version = 0,
  .minor_version = 0,
  .feature_flags = FEAT_POSITIONS,
  .marker = 0,
  0, // number of required modules
  0, // number of defined namespaces
  1, // number of used namespaces
  583, // number of constants
  370, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  constants_table,
  variables_table,
};
