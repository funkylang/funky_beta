#include <stddef.h>
#include <stdint.h>

#include "runtime/common.h"
#include "runtime/builtins.h"
#include "runtime/fko.h"
#include "runtime/memory.h"

enum {
  string_1 = -1,
  func_std_types__string___to_string = -2,
  func_std__create_string = -3,
  lambda_1 = -4,
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
  func_std_types__string___matches = -65,
  func_std_types__string___search = -66,
  lambda_34 = -67,
  lambda_35 = -68,
  func_search_forwards = -69,
  lambda_36 = -70,
  lambda_37 = -71,
  lambda_38 = -72,
  lambda_39 = -73,
  lambda_40 = -74,
  lambda_41 = -75,
  func_search_backwards = -76,
  lambda_42 = -77,
  lambda_43 = -78,
  lambda_44 = -79,
  lambda_45 = -80,
  lambda_46 = -81,
  lambda_47 = -82,
  func_std_types__string___before = -83,
  lambda_48 = -84,
  lambda_49 = -85,
  func_std_types__string___truncate_from = -86,
  lambda_50 = -87,
  lambda_51 = -88,
  func_std_types__string___behind = -89,
  lambda_52 = -90,
  lambda_53 = -91,
  func_std_types__string___truncate_until = -92,
  lambda_54 = -93,
  lambda_55 = -94,
  func_std_types__string___from = -95,
  lambda_56 = -96,
  lambda_57 = -97,
  func_std_types__string___truncate_before = -98,
  lambda_58 = -99,
  lambda_59 = -100,
  func_std_types__string___until = -101,
  lambda_60 = -102,
  lambda_61 = -103,
  func_std_types__string___truncate_behind = -104,
  lambda_62 = -105,
  lambda_63 = -106,
  func_std_types__string___between = -107,
  func_std_types__string___has_prefix = -108,
  func_std_types__string___has_suffix = -109,
  lambda_64 = -110,
  lambda_65 = -111,
  lambda_66 = -112,
  lambda_67 = -113,
  func_std_types__string___without_prefix = -114,
  lambda_68 = -115,
  lambda_69 = -116,
  func_std_types__string___without_suffix = -117,
  lambda_suffix_is_a_character = -118,
  lambda_70 = -119,
  lambda_71 = -120,
  minus_num_2 = -121,
  lambda_72 = -122,
  lambda_73 = -123,
  lambda_74 = -124,
  lambda_75 = -125,
  lambda_76 = -126,
  func_std_types__string___contains = -127,
  func_std__split = -128,
  lambda_77 = -129,
  lambda_78 = -130,
  lambda_2_loop = -131,
  lambda_pos_is_defined = -132,
  lambda_79 = -133,
  func_std__join = -134,
  lambda_80 = -135,
  func_std__trim = -136,
  lambda_3_loop = -137,
  lambda_81 = -138,
  lambda_82 = -139,
  lambda_83 = -140,
  lambda_4_loop = -141,
  lambda_84 = -142,
  lambda_85 = -143,
  lambda_86 = -144,
  func_std__trim_left = -145,
  lambda_5_loop = -146,
  lambda_87 = -147,
  lambda_88 = -148,
  lambda_89 = -149,
  func_std__trim_right = -150,
  lambda_6_loop = -151,
  lambda_90 = -152,
  lambda_91 = -153,
  lambda_92 = -154,
  func_std__normalize = -155,
  lambda_7_loop = -156,
  lambda_93 = -157,
  lambda_94 = -158,
  lambda_95 = -159,
  lambda_96 = -160,
  lambda_97 = -161,
  lambda_98 = -162,
  lambda_99 = -163,
  lambda_100 = -164,
  lambda_101 = -165,
  func_std_types__octet_string___to_base64 = -166,
  lambda_8_loop = -167,
  lambda_102 = -168,
  num_4 = -169,
  lambda_103 = -170,
  lambda_104 = -171,
  lambda_105 = -172,
  string_7 = -173,
  lambda_106 = -174,
  minus_num_3 = -175,
  string_8 = -176,
  lambda_107 = -177,
  chr_61 = -178,
  func_encode = -179,
  num_16 = -180,
  lambda_108 = -181,
  num_18 = -182,
  num_0x3ffff = -183,
  num_6 = -184,
  num_25 = -185,
  value_range_1366_0 = -186,
  num_26 = -187,
  num_51 = -188,
  value_range_1369_0 = -189,
  num_52 = -190,
  num_61 = -191,
  value_range_1372_0 = -192,
  lambda_109 = -193,
  chr_65 = -194,
  lambda_110 = -195,
  chr_97 = -196,
  lambda_111 = -197,
  chr_48 = -198,
  num_62 = -199,
  lambda_112 = -200,
  chr_43 = -201,
  num_63 = -202,
  lambda_113 = -203,
  chr_47 = -204,
  lambda_114 = -205,
  func_std_types__octet_string___from_base64 = -206,
  lambda_115 = -207,
  lambda_116 = -208,
  lambda_9_loop = -209,
  lambda_117 = -210,
  lambda_118 = -211,
  lambda_119 = -212,
  lambda_120 = -213,
  lambda_121 = -214,
  lambda_122 = -215,
  num_0xff = -216,
  lambda_123 = -217,
  lambda_124 = -218,
  lambda_125 = -219,
  lambda_126 = -220,
  num_5 = -221,
  func_decode = -222,
  chr_90 = -223,
  value_range_1441_1 = -224,
  chr_122 = -225,
  value_range_1442_1 = -226,
  chr_57 = -227,
  value_range_1443_1 = -228,
  lambda_127 = -229,
  lambda_128 = -230,
  lambda_129 = -231,
  lambda_130 = -232,
  lambda_131 = -233,
  lambda_132 = -234,
  lambda_133 = -235,
  func_std_types__octet_string___sha1 = -236,
  num_0x67452301 = -237,
  num_0xefcdab89 = -238,
  num_0x98badcfe = -239,
  num_0x10325476 = -240,
  num_0xc3d2e1f0 = -241,
  num_0x5a827999 = -242,
  num_0x6ed9eba1 = -243,
  num_0x8f1bbcdc = -244,
  num_0xca62c1d6 = -245,
  chr_128 = -246,
  num_512 = -247,
  num_56 = -248,
  lambda_134 = -249,
  num_64 = -250,
  lambda_10_loop = -251,
  lambda_message_is_empty = -252,
  lambda_135 = -253,
  lambda_136 = -254,
  num_24 = -255,
  lambda_137 = -256,
  num_17 = -257,
  lambda_138 = -258,
  num_14 = -259,
  func_main_loop = -260,
  lambda_139 = -261,
  lambda_140 = -262,
  num_20 = -263,
  lambda_141 = -264,
  num_0xffffffff = -265,
  lambda_142 = -266,
  num_40 = -267,
  lambda_143 = -268,
  lambda_144 = -269,
  num_60 = -270,
  lambda_145 = -271,
  lambda_146 = -272,
  lambda_147 = -273,
  func_compute = -274,
  num_30 = -275,
  lambda_148 = -276,
  num_65 = -277,
  func_big_endian_string_64 = -278,
  num_48 = -279,
  num_32 = -280,
  func_big_endian_string_32 = -281,
  func_rol32 = -282,
  func_std__parse_integer = -283,
  func_maybe_negated = -284,
  lambda_149 = -285,
  lambda_150 = -286,
  func_partial_match = -287,
  lambda_151 = -288,
  lambda_152 = -289,
  func_exhausted = -290,
  lambda_153 = -291,
  lambda_154 = -292,
  chr_45 = -293,
  lambda_155 = -294,
  lambda_156 = -295,
  lambda_157 = -296,
  str_0b = -297,
  lambda_158 = -298,
  lambda_159 = -299,
  chr_49 = -300,
  value_range_1643_1 = -301,
  lambda_160 = -302,
  lambda_161 = -303,
  lambda_162 = -304,
  str_0o = -305,
  lambda_163 = -306,
  lambda_164 = -307,
  chr_55 = -308,
  value_range_1654_1 = -309,
  lambda_165 = -310,
  lambda_166 = -311,
  lambda_167 = -312,
  str_0x = -313,
  lambda_168 = -314,
  lambda_169 = -315,
  chr_102 = -316,
  value_range_1668_1 = -317,
  chr_70 = -318,
  value_range_1671_1 = -319,
  lambda_170 = -320,
  lambda_a__f = -321,
  lambda_A__F = -322,
  lambda_171 = -323,
  lambda_172 = -324,
  lambda_173 = -325,
  lambda_174 = -326,
  lambda_175 = -327,
  lambda_176 = -328,
  func_std__parse_number = -329,
  lambda_177 = -330,
  lambda_178 = -331,
  lambda_179 = -332,
  lambda_180 = -333,
  lambda_181 = -334,
  lambda_182 = -335,
  lambda_183 = -336,
  lambda_184 = -337,
  chr_98 = -338,
  lambda_b = -339,
  chr_111 = -340,
  lambda_o = -341,
  chr_120 = -342,
  lambda_x = -343,
  func_parse = -344,
  lambda_skip_one_ore_more_digits = -345,
  lambda_185 = -346,
  chr_101 = -347,
  chr_69 = -348,
  sequence_1755_1 = -349,
  chr_46 = -350,
  lambda_186 = -351,
  lambda_2_skip_one_ore_more_digits = -352,
  lambda_187 = -353,
  func_skip_one_ore_more_digits = -354,
  lambda_188 = -355,
  lambda_189 = -356,
  lambda_190 = -357,
  lambda_191 = -358,
  lambda_192 = -359,
  lambda_11_loop = -360,
  lambda_193 = -361,
  lambda_194 = -362,
  func_handle_exponent = -363,
  lambda_195 = -364,
  lambda_196 = -365,
  lambda_197 = -366,
  lambda_198 = -367,
  func_return_integer = -368,
  func_return_real = -369,
  func_parse_binary = -370,
  lambda_199 = -371,
  lambda_200 = -372,
  lambda_201 = -373,
  lambda_202 = -374,
  lambda_203 = -375,
  lambda_12_loop = -376,
  lambda_204 = -377,
  lambda_205 = -378,
  lambda_206 = -379,
  lambda_207 = -380,
  lambda_208 = -381,
  func_parse_octal = -382,
  lambda_209 = -383,
  lambda_210 = -384,
  lambda_211 = -385,
  lambda_212 = -386,
  lambda_213 = -387,
  lambda_13_loop = -388,
  lambda_214 = -389,
  lambda_215 = -390,
  lambda_216 = -391,
  lambda_217 = -392,
  lambda_218 = -393,
  func_std__parse_hex = -394,
  lambda_219 = -395,
  lambda_220 = -396,
  lambda_221 = -397,
  lambda_222 = -398,
  lambda_223 = -399,
  lambda_224 = -400,
  lambda_225 = -401,
  lambda_226 = -402,
  lambda_227 = -403,
  lambda_228 = -404,
  lambda_229 = -405,
  lambda_230 = -406,
  lambda_231 = -407,
  func_handle_more_digits = -408,
  lambda_14_loop = -409,
  lambda_232 = -410,
  lambda_233 = -411,
  lambda_234 = -412,
  lambda_235 = -413,
  lambda_236 = -414,
  lambda_237 = -415,
  lambda_238 = -416,
  lambda_239 = -417,
  lambda_240 = -418,
  lambda_241 = -419,
  lambda_242 = -420,
  lambda_243 = -421,
  lambda_244 = -422,
  func_std_types__string___to_integer = -423,
  lambda_245 = -424,
  lambda_246 = -425,
  func_std_types__string___to_number = -426,
  lambda_247 = -427,
  lambda_248 = -428,
  func_std__map_characters = -429,
  lambda_249 = -430,
  lambda_250 = -431,
  lambda_251 = -432,
  lambda_252 = -433,
  lambda_253 = -434,
  lambda_254 = -435,
  lambda_255 = -436,
  lambda_256 = -437,
  lambda_257 = -438,
  lambda_258 = -439,
  lambda_259 = -440,
  lambda_260 = -441,
  func_std_types__string___to_upper_case = -442,
  func_std_types__string___to_lower_case = -443,
  func_std_types__string___to_title_case = -444,
  lambda_261 = -445,
  lambda_262 = -446,
  lambda_263 = -447,
  lambda_264 = -448,
  func_std_types__string___to_sentence_case = -449,
  lambda_265 = -450,
  lambda_266 = -451,
  lambda_267 = -452,
  lambda_268 = -453,
  func_std_types__string___to_wide = -454,
  func_std__delete_all = -455,
  func_delete_all = -456,
  lambda_269 = -457,
  lambda_270 = -458,
  lambda_271 = -459,
  lambda_272 = -460,
  lambda_273 = -461,
  func_std__replace_all = -462,
  func_replace_all = -463,
  lambda_274 = -464,
  lambda_275 = -465,
  lambda_276 = -466,
  lambda_277 = -467,
  lambda_replacement_is_a_string = -468,
  lambda_278 = -469,
  lambda_279 = -470,
  func_std__replace_first = -471,
  func_replace_first = -472,
  lambda_280 = -473,
  lambda_281 = -474,
  lambda_282 = -475,
  lambda_283 = -476,
  lambda_284 = -477,
  lambda_285 = -478,
  func_std__count_occurrences = -479,
  func_search_next = -480,
  lambda_286 = -481,
  lambda_287 = -482,
  lambda_n_is_defined = -483,
  lambda_288 = -484,
  num_300 = -485,
  func_std__split_into_lines = -486,
  lambda_15_loop = -487,
  lambda_289 = -488,
  lambda_290 = -489,
  lambda_291 = -490,
  lambda_292 = -491,
  lambda_293 = -492,
  lambda_294 = -493,
  func_std__split_into_indented_lines = -494,
  func_split = -495,
  lambda_295 = -496,
  lambda_296 = -497,
  lambda_297 = -498,
  lambda_298 = -499,
  lambda_299 = -500,
  lambda_300 = -501,
  lambda_301 = -502,
  lambda_ls_is_defined = -503,
  lambda_302 = -504,
  lambda_303 = -505,
  lambda_304 = -506,
  lambda_305 = -507,
  lambda_16_loop = -508,
  lambda_306 = -509,
  lambda_307 = -510,
  func_create_line = -511,
  lambda_17_loop = -512,
  chr_9 = -513,
  lambda_308 = -514,
  lambda_309 = -515,
  lambda_310 = -516,
  lambda_311 = -517,
  string_9 = -518,
  lambda_312 = -519,
  lambda_313 = -520,
  num_9999 = -521,
  func_indent_of = -522,
  lambda_314 = -523,
  lambda_315 = -524,
  func_std__split_into_groups = -525,
  lambda_18_loop = -526,
  lambda_316 = -527,
  lambda_indent_is_defined = -528,
  lambda_317 = -529,
  lambda_318 = -530,
  func_2_split = -531,
  lambda_319 = -532,
  lambda_320 = -533,
  lambda_321 = -534,
  lambda_322 = -535,
  lambda_323 = -536,
  lambda_324 = -537,
  lambda_325 = -538,
  lambda_326 = -539,
  lambda_327 = -540,
  lambda_328 = -541,
  lambda_329 = -542,
  lambda_gs_is_defined = -543,
  lambda_19_loop = -544,
  lambda_330 = -545,
  lambda_331 = -546,
  lambda_332 = -547,
  lambda_333 = -548,
  lambda_334 = -549,
  lambda_335 = -550,
  lambda_336 = -551,
  lambda_337 = -552,
  func_add_groups = -553,
  lambda_338 = -554,
  lambda_339 = -555,
  lambda_340 = -556,
  lambda_341 = -557,
  func_reduce_minimum_indent_and_next = -558,
  lambda_342 = -559,
  lambda_343 = -560,
  func_start_new_fragment_and_next = -561,
  func_std__wrap_words = -562,
  lambda_20_loop = -563,
  lambda_344 = -564,
  lambda_345 = -565,
  lambda_346 = -566,
  lambda_347 = -567,
  lambda_348 = -568,
  lambda_349 = -569,
  lambda_350 = -570,
  lambda_351 = -571,
  lambda_352 = -572,
  lambda_b_is_defined = -573,
  lambda_353 = -574,
  func_std_types__string___serialize = -575,
  string_10 = -576,
  lambda_354 = -577,
  lambda_355 = -578,
  chr_126 = -579,
  lambda_356 = -580,
  chr_34 = -581,
  lambda_357 = -582,
  chr_64 = -583,
  lambda_358 = -584,
  string_11 = -585,
  string_12 = -586,
  lambda_359 = -587,
  string_13 = -588,
  lambda_360 = -589,
  lambda_361 = -590,
  func_std_types__octet_string___to_uint8_array = -591,
  lambda_362 = -592,
  lambda_363 = -593,
  func_std__indented = -594,
  lambda_21_loop = -595,
  lambda_364 = -596,
  lambda_365 = -597,
  lambda_366 = -598,
  lambda_367 = -599,
  lambda_368 = -600,
  lambda_369 = -601,
  lambda_370 = -602,
  lambda_371 = -603,
  lambda_372 = -604,
  func_skip_indent = -605,
  lambda_373 = -606,
  lambda_374 = -607,
  lambda_375 = -608,
  func_skip_spaces = -609,
  lambda_376 = -610,
  lambda_377 = -611,
  lambda_378 = -612,
  uni_LEFT = -613,
  uni_RIGHT = -614,
  uni_CENTER = -615,
  func_std__format = -616,
  lambda_22_loop = -617,
  lambda_379 = -618,
  lambda_380 = -619,
  chr_37 = -620,
  lambda_381 = -621,
  lambda_382 = -622,
  lambda_383 = -623,
  chr_108 = -624,
  lambda_l = -625,
  chr_114 = -626,
  lambda_r = -627,
  chr_99 = -628,
  lambda_c = -629,
  lambda_384 = -630,
  lambda_385 = -631,
  lambda_386 = -632,
  lambda_387 = -633,
  lambda_388 = -634,
  lambda_389 = -635,
  lambda_390 = -636,
  lambda_391 = -637,
  lambda_392 = -638,
  lambda_393 = -639,
  lambda_394 = -640,
  lambda_395 = -641,
  lambda_396 = -642,
  lambda_397 = -643,
  lambda_398 = -644,
  lambda_399 = -645,
  lambda_400 = -646,
  lambda_401 = -647,
  lambda_402 = -648,
  lambda_403 = -649,
  lambda_404 = -650,
  lambda_405 = -651,
  lambda_406 = -652,
  chr_92 = -653,
  lambda_407 = -654,
  lambda_408 = -655,
  lambda_409 = -656,
  lambda_410 = -657,
  func_add_argument = -658,
  lambda_decimal_width_is_defined = -659,
  lambda_411 = -660,
  lambda_412 = -661,
  string_14 = -662,
  string_15 = -663,
  lambda_413 = -664,
  lambda_LEFT = -665,
  lambda_RIGHT = -666,
  func_real_to_string = -667,
  lambda_23_loop = -668,
  lambda_414 = -669,
  lambda_415 = -670,
  lambda_416 = -671,
  func_2_handle_exponent = -672,
  lambda_417 = -673,
  lambda_418 = -674,
  lambda_419 = -675,
  lambda_420 = -676,
  lambda_421 = -677,
  lambda_422 = -678,
  lambda_423 = -679,
  string_16 = -680,
  lambda_424 = -681
};

enum {
  var__START = FIRST_VAR-1,
  var_std__to_sentence_case, // attribute
  var_std__assign, // extern
  var_std__is_a_string, // attribute
  var_std__to_uint8_array, // attribute
  var_std_types__object, // extern
  var_is_a_string, // extern polymorphic
  var_false, // extern
  var_std_types__string, // extern
  var_true, // extern
  var_std__is_an_octet_string, // attribute
  var_is_an_octet_string, // extern polymorphic
  var_std_types__octet_string, // extern
  var_neutral_element_of, // extern polymorphic
  var_to_string, // extern polymorphic
  var_std__create_string, // initialized
  var_145_0_arguments, // dynamic
  var_is_empty, // extern
  var_append, // extern
  var_map_reduce, // extern
  var_if, // extern
  var_std__string, // initialized
  var_create_string, // extern
  var_put, // extern polymorphic
  var_dup, // extern polymorphic
  var_206_0_self, // dynamic
  var_207_0_n, // dynamic
  var_std__shift_right, // extern
  var_214_1_str, // dynamic
  var_std__times, // extern
  var_std__equal, // extern
  var_string, // extern
  var_case, // extern
  var_std__pad_left, // initialized
  var_246_0_n, // dynamic
  var_247_0_pad, // dynamic
  var_249_1_text, // dynamic
  var_250_1_len, // dynamic
  var_length_of, // extern
  var_std__less, // extern
  var_std__minus, // extern
  var_std__plus, // extern
  var_div, // extern
  var_range, // extern
  var_std__pad_right, // initialized
  var_282_0_n, // dynamic
  var_283_0_pad, // dynamic
  var_285_1_text, // dynamic
  var_286_1_len, // dynamic
  var_std__spaces, // initialized
  var_305_0_n, // dynamic
  var_std__not, // extern
  var_std__tabs_and_spaces, // initialized
  var_322_0_n, // dynamic
  var_std__bit_and, // extern
  var_spaces, // extern
  var_std__with_tabs, // initialized
  var_342_0_text, // dynamic
  var_344_1_s, // dynamic
  var_345_1_n, // dynamic
  var_346_1_i, // dynamic
  var_347_1_output, // dynamic
  var_348_1_count, // dynamic
  var_next, // extern
  var_360_1_tab_count, // dynamic
  var_std__shift_left, // extern
  var_loop, // extern
  var_std__and, // extern
  var_break, // extern
  var_match, // extern polymorphic
  var_407_0_self, // dynamic
  var_408_0_stream, // dynamic
  var_410_1_len, // dynamic
  var_undefined, // extern
  var_matches, // extern polymorphic
  var_search, // extern polymorphic
  var_450_0_self, // dynamic
  var_451_0_stream, // dynamic
  var_452_0_nth, // dynamic
  var_454_1_i, // dynamic
  var_455_1_length, // dynamic
  var_456_1_offset, // dynamic
  var_457_1_n, // dynamic
  var_dec, // extern
  var_plus, // extern
  var_inc, // extern
  var_minus, // extern
  var_before, // extern polymorphic
  var_538_0_str, // dynamic
  var_542_8_pos, // dynamic
  var_is_defined, // extern
  var_truncate_from, // extern polymorphic
  var_588_0_str, // dynamic
  var_592_8_pos, // dynamic
  var_behind, // extern polymorphic
  var_636_0_str, // dynamic
  var_640_8_pos, // dynamic
  var_640_13_len, // dynamic
  var_truncate_until, // extern polymorphic
  var_685_0_str, // dynamic
  var_689_8_pos, // dynamic
  var_689_13_len, // dynamic
  var_from, // extern polymorphic
  var_734_0_str, // dynamic
  var_738_8_pos, // dynamic
  var_truncate_before, // extern polymorphic
  var_783_0_str, // dynamic
  var_787_8_pos, // dynamic
  var_until, // extern polymorphic
  var_831_0_str, // dynamic
  var_835_8_pos, // dynamic
  var_835_13_len, // dynamic
  var_truncate_behind, // extern polymorphic
  var_880_0_str, // dynamic
  var_884_8_pos, // dynamic
  var_884_13_len, // dynamic
  var_between, // extern polymorphic
  var_has_prefix, // extern polymorphic
  var_has_suffix, // extern polymorphic
  var_962_0_self, // dynamic
  var_963_0_suffix, // dynamic
  var_is_a_character, // extern
  var_969_1_len, // dynamic
  var_std__negate, // extern
  var_without_prefix, // extern polymorphic
  var_993_0_self, // dynamic
  var_996_1_n, // dynamic
  var_without_suffix, // extern polymorphic
  var_1023_0_self, // dynamic
  var_1024_0_suffix, // dynamic
  var_1026_1_len, // dynamic
  var_1034_1_slen, // dynamic
  var_contains, // extern polymorphic
  var_std__split, // initialized
  var_1103_0_self, // dynamic
  var_1104_0_separator, // dynamic
  var_empty_list, // extern
  var_1110_1_items, // dynamic
  var_1112_8_pos, // dynamic
  var_1112_13_len, // dynamic
  var_push, // extern
  var_std__join, // initialized
  var_1144_0_separator, // dynamic
  var_std__trim, // initialized
  var_1173_0_self, // dynamic
  var_1174_0_test, // dynamic
  var_is_a_whitespace_character, // extern
  var_1176_1_s, // dynamic
  var_1177_1_e, // dynamic
  var_std__trim_left, // initialized
  var_1213_0_self, // dynamic
  var_1214_0_test, // dynamic
  var_1216_1_s, // dynamic
  var_1217_1_e, // dynamic
  var_std__trim_right, // initialized
  var_1247_0_self, // dynamic
  var_1248_0_test, // dynamic
  var_1250_1_e, // dynamic
  var_std__normalize, // initialized
  var_1281_0_self, // dynamic
  var_1283_1_buf, // dynamic
  var_1284_1_e, // dynamic
  var_1285_1_i, // dynamic
  var_is_not_empty, // extern
  var_update_if, // extern
  var_1300_1_s, // dynamic
  var_to_base64, // extern polymorphic
  var_1332_0_str, // dynamic
  var_1334_1_base64, // dynamic
  var_1336_1_len, // dynamic
  var_to_integer, // extern polymorphic
  var_std__bit_or, // extern
  var_1355_1_bits, // dynamic
  var_1360_1_buf, // dynamic
  var_1363_1_value, // dynamic
  var_std__value_range, // extern
  var_repeat, // extern
  var_from_base64, // extern polymorphic
  var_1402_0_str, // dynamic
  var_1404_1_octets, // dynamic
  var_mod, // extern
  var_1414_1_bits, // dynamic
  var_1417_1_value, // dynamic
  var_is_undefined, // extern
  var_character, // extern
  var_from_to, // extern
  var_1438_10_chr, // dynamic
  var_sha1, // extern polymorphic
  var_1464_0_message, // dynamic
  var_1468_1_h0, // dynamic
  var_1469_1_h1, // dynamic
  var_1470_1_h2, // dynamic
  var_1471_1_h3, // dynamic
  var_1472_1_h4, // dynamic
  var_1493_1_pad_len, // dynamic
  var_1511_1_w, // dynamic
  var_uint32_array, // extern
  var_std__bit_xor, // extern
  var_1529_1_a, // dynamic
  var_1530_1_b, // dynamic
  var_1531_1_c, // dynamic
  var_1532_1_d, // dynamic
  var_1533_1_e, // dynamic
  var_1535_3_i, // dynamic
  var_cond, // extern
  var_std__parse_integer, // initialized
  var_1608_0_self, // dynamic
  var_1629_1_negate, // dynamic
  var_1635_1_value, // dynamic
  var_1616_17_idx, // dynamic
  var_1628_1_orig, // dynamic
  var_1640_3_idx, // dynamic
  var_1640_7_chr, // dynamic
  var_for_each, // extern
  var_1652_3_idx, // dynamic
  var_1652_7_chr, // dynamic
  var_1663_3_idx, // dynamic
  var_1663_7_chr, // dynamic
  var_1679_3_idx, // dynamic
  var_1679_7_chr, // dynamic
  var_std__parse_number, // initialized
  var_1715_0_self, // dynamic
  var_1717_1_i, // dynamic
  var_1718_1_n, // dynamic
  var_1723_1_sign_chr, // dynamic
  var_std__or, // extern
  var_1725_1_sign, // dynamic
  var_parse_hex, // extern
  var_std__sequence, // extern
  var_1758_28_cont, // dynamic
  var_1763_1_digit, // dynamic
  var_1774_1_next_digit, // dynamic
  var_1786_1_exp_sign_chr, // dynamic
  var_integer, // extern
  var_real, // extern
  var_1794_16_str, // dynamic
  var_1794_20_i, // dynamic
  var_1794_22_sign, // dynamic
  var_1795_1_n, // dynamic
  var_1799_1_digit, // dynamic
  var_1804_1_value, // dynamic
  var_1811_1_next_digit, // dynamic
  var_1818_15_str, // dynamic
  var_1818_19_i, // dynamic
  var_1818_21_sign, // dynamic
  var_1819_1_n, // dynamic
  var_1823_1_digit, // dynamic
  var_1828_1_value, // dynamic
  var_1835_1_next_digit, // dynamic
  var_std__parse_hex, // initialized
  var_1870_0_str, // dynamic
  var_1871_0_i, // dynamic
  var_1872_0_sign, // dynamic
  var_1874_1_n, // dynamic
  var_1878_1_digit, // dynamic
  var_1888_22_value, // dynamic
  var_1895_1_next_digit, // dynamic
  var_1944_21_value, // dynamic
  var_parse_integer, // extern
  var_to_number, // extern polymorphic
  var_1986_20_value, // dynamic
  var_parse_number, // extern
  var_std__map_characters, // initialized
  var_2013_0_self, // dynamic
  var_2014_0_function, // dynamic
  var_parameter_count_of, // extern
  var_2020_3_s, // dynamic
  var_2020_5_e, // dynamic
  var_2016_1_map, // dynamic
  var_2033_3_s, // dynamic
  var_2033_5_e, // dynamic
  var_to_upper_case, // extern polymorphic
  var_map_characters, // extern
  var_to_lower_case, // extern polymorphic
  var_to_title_case, // extern polymorphic
  var_2110_0_self, // dynamic
  var_2112_22_idx, // dynamic
  var_2112_26_chr, // dynamic
  var_is_a_letter_character, // extern
  var_to_sentence_case, // extern polymorphic
  var_2136_0_self, // dynamic
  var_2138_22_idx, // dynamic
  var_2138_26_chr, // dynamic
  var_to_wide, // extern polymorphic
  var_std__delete_all, // initialized
  var_2169_0_expressions, // dynamic
  var_2171_14_txt, // dynamic
  var_2185_1_new_text, // dynamic
  var_2178_1_len, // dynamic
  var_if_not, // extern
  var_std__replace_all, // initialized
  var_2210_0_args, // dynamic
  var_2212_15_txt, // dynamic
  var_2233_1_new_text, // dynamic
  var_2219_17_replacement, // dynamic
  var_2220_1_len, // dynamic
  var_std__replace_first, // initialized
  var_2258_0_args, // dynamic
  var_2260_17_txt, // dynamic
  var_2280_1_new_text, // dynamic
  var_2267_17_replacement, // dynamic
  var_2268_1_len, // dynamic
  var_update_if_not, // extern
  var_std__count_occurrences, // initialized
  var_2303_0_expr, // dynamic
  var_2305_15_txt, // dynamic
  var_2305_19_count, // dynamic
  var_2310_1_n, // dynamic
  var_std__split_into_lines, // initialized
  var_2361_25_text, // dynamic
  var_2362_1_lines, // dynamic
  var_2363_1_i, // dynamic
  var_2364_1_n, // dynamic
  var_2365_1_s, // dynamic
  var_std__split_into_indented_lines, // initialized
  var_2444_0_text, // dynamic
  var_2449_9_s, // dynamic
  var_2449_11_e, // dynamic
  var_2455_1_lines, // dynamic
  var_2456_1_ls, // dynamic
  var_2462_3_i, // dynamic
  var_2483_15_s, // dynamic
  var_2483_17_e, // dynamic
  var_2484_1_indent, // dynamic
  var_2498_1_line_text, // dynamic
  var_tuple, // extern
  var_std__subgroups_of, // attribute with setter
  var_2509_13_line, // dynamic
  var_first, // extern
  var_std__split_into_groups, // initialized
  var_2566_0_lines, // dynamic
  var_2568_1_n, // dynamic
  var_2569_1_fv, // dynamic
  var_2573_1_indent, // dynamic
  var_2582_9_s, // dynamic
  var_2582_11_e, // dynamic
  var_2582_13_indent, // dynamic
  var_2582_20_gs, // dynamic
  var_2588_1_groups, // dynamic
  var_2589_1_minimum_indent, // dynamic
  var_2590_1_ge, // dynamic
  var_2592_3_i, // dynamic
  var_2593_1_current_indent, // dynamic
  var_2618_1_current_indent, // dynamic
  var_2631_14_l, // dynamic
  var_subgroups_of, // extern polymorphic
  var_2643_34_current_indent, // dynamic
  var_std__wrap_words, // initialized
  var_2683_0_text, // dynamic
  var_2684_0_width, // dynamic
  var_2686_1_wrapped_text, // dynamic
  var_2687_1_n, // dynamic
  var_2688_1_s, // dynamic
  var_2689_1_l, // dynamic
  var_2690_1_b, // dynamic
  var_2691_1_i, // dynamic
  var_2697_1_chr, // dynamic
  var_serialize, // extern polymorphic
  var_2759_0_self, // dynamic
  var_2760_0_indent, // dynamic
  var_2762_1_str, // dynamic
  var_2763_1_s, // dynamic
  var_2765_3_idx, // dynamic
  var_2765_7_chr, // dynamic
  var_tabs_and_spaces, // extern
  var_to_uint8_array, // extern polymorphic
  var_2797_1_arr, // dynamic
  var_uint8_array, // extern
  var_std__indented, // initialized
  var_2834_0_indent, // dynamic
  var_2835_0_text, // dynamic
  var_2837_1_indented_text, // dynamic
  var_2838_1_new_indent, // dynamic
  var_2839_1_i, // dynamic
  var_2840_1_n, // dynamic
  var_2853_1_s, // dynamic
  var_std__format, // initialized
  var_2923_0_template, // dynamic
  var_2924_0_arguments, // dynamic
  var_2926_1_output, // dynamic
  var_2927_1_arg_idx, // dynamic
  var_2928_1_i, // dynamic
  var_2929_1_n, // dynamic
  var_2935_1_chr, // dynamic
  var_2943_18_alignment, // dynamic
  var_2948_1_len_chr, // dynamic
  var_2953_1_width, // dynamic
  var_2961_1_fmt_chr, // dynamic
  var_2980_1_dw_chr, // dynamic
  var_2985_1_dw, // dynamic
  var_2993_1_fmt_chr, // dynamic
  var_3018_0_alignment, // dynamic
  var_3019_0_width, // dynamic
  var_3020_0_decimal_width, // dynamic
  var_3022_1_argument, // dynamic
  var_pad_left, // extern
  var_pad_right, // extern
  var_truncate, // extern
  var_3045_1_str, // dynamic
  var_3046_1_n, // dynamic
  var_3047_1_i, // dynamic
  var_3065_1_exp, // dynamic
  var_3066_1_man, // dynamic
  var_3071_1_zeros, // dynamic
  var_empty_collection_of, // extern polymorphic
  var__END
};


static TAB_NUM t_func_std_types__string___to_string[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 124_0_self
  // -> self
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(126, 3)
};

static TAB_NUM t_func_std__create_string[] = {
  1, // locals
  1, // parameters
  var_145_0_arguments,
  // is_empty
  var_is_empty, 1, var_145_0_arguments, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1, lambda_2, TAIL_CALL,
  POS(148, 15),
  POS(147, 3)
};

static TAB_NUM t_lambda_1[] = {
  0, // locals
  0, // parameters
  //  ""
  LET, 1, string_1, TAIL_CALL,
  POS(149, 7)
};

static TAB_NUM t_lambda_2[] = {
  0, // locals
  0, // parameters
  // map_reduce arguments to_string append
  var_map_reduce, 3, var_145_0_arguments, var_to_string, var_append, TAIL_CALL,
  POS(150, 7)
};

static TAB_NUM t_func_std__string[] = {
  1, // locals
  -1, // parameters
  REST_PARAMETER, LOCAL(1), // 164_0_args
  // create_string args
  var_create_string, 1, LOCAL(1), TAIL_CALL,
  POS(166, 3)
};

static TAB_NUM t_func_std_types__string___put[] = {
  4, // locals
  2, // parameters
  LOCAL(3), // 181_0_self
  LOCAL(4), // 182_0_chr
  // to_string self)
  var_to_string, 1, LOCAL(4), 1, LOCAL(1),
  // append(chr.to_string self)
  var_append, 2, LOCAL(1), LOCAL(3), 1, LOCAL(2),
  // -> append(chr.to_string self)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(184, 17),
  POS(184, 6),
  POS(184, 3)
};

static TAB_NUM t_func_std_types__string___dup[] = {
  0, // locals
  2, // parameters
  var_206_0_self,
  var_207_0_n,
  // case n
  var_case, 6, var_207_0_n, num_0, lambda_3, num_1, lambda_4, lambda_5, TAIL_CALL,
  POS(209, 3)
};

static TAB_NUM t_lambda_3[] = {
  0, // locals
  0, // parameters
  //  ""
  LET, 1, string_1, TAIL_CALL,
  POS(210, 9)
};

static TAB_NUM t_lambda_4[] = {
  0, // locals
  0, // parameters
  //  self
  LET, 1, var_206_0_self, TAIL_CALL,
  POS(211, 9)
};

static TAB_NUM t_lambda_5[] = {
  3, // locals
  0, // parameters
  // $h n >> 1 # fails if <n> is not a positive integer
  var_std__shift_right, 2, var_207_0_n, num_1, 1, LOCAL(3),
  // $str dup(self h)
  var_dup, 2, var_206_0_self, LOCAL(3), 1, var_214_1_str,
  // 2*h == n:
  var_std__times, 2, num_2, LOCAL(3), 1, LOCAL(1),
  // 2*h == n:
  var_std__equal, 2, LOCAL(1), var_207_0_n, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_6, lambda_7, TAIL_CALL,
  POS(213, 7),
  POS(214, 7),
  POS(216, 9),
  POS(216, 9),
  POS(215, 7)
};

static TAB_NUM t_lambda_6[] = {
  0, // locals
  0, // parameters
  // string str str
  var_string, 2, var_214_1_str, var_214_1_str, TAIL_CALL,
  POS(217, 11)
};

static TAB_NUM t_lambda_7[] = {
  0, // locals
  0, // parameters
  // string str str self
  var_string, 3, var_214_1_str, var_214_1_str, var_206_0_self, TAIL_CALL,
  POS(219, 11)
};

static TAB_NUM t_func_std__pad_left[] = {
  2, // locals
  -3, // parameters
  MANDATORY_PARAMETER, LOCAL(2), // 245_0_expr
  MANDATORY_PARAMETER, var_246_0_n,
  string_2, var_247_0_pad,
  // $text expr.to_string
  var_to_string, 1, LOCAL(2), 1, var_249_1_text,
  // $len length_of(text)
  var_length_of, 1, var_249_1_text, 1, var_250_1_len,
  // len < n:
  var_std__less, 2, var_250_1_len, var_246_0_n, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_8, lambda_9, TAIL_CALL,
  POS(249, 3),
  POS(250, 3),
  POS(252, 5),
  POS(251, 3)
};

static TAB_NUM t_lambda_8[] = {
  8, // locals
  0, // parameters
  // $pad_len length_of(pad)
  var_length_of, 1, var_247_0_pad, 1, LOCAL(8),
  // n-len)+(pad_len-1) .div. pad_len) 1 n-len) text
  var_std__minus, 2, var_246_0_n, var_250_1_len, 1, LOCAL(1),
  // pad_len-1) .div. pad_len) 1 n-len) text
  var_std__minus, 2, LOCAL(8), num_1, 1, LOCAL(2),
  // n-len)+(pad_len-1) .div. pad_len) 1 n-len) text
  var_std__plus, 2, LOCAL(1), LOCAL(2), 1, LOCAL(3),
  // (n-len)+(pad_len-1) .div. pad_len) 1 n-len) text
  var_div, 2, LOCAL(3), LOCAL(8), 1, LOCAL(4),
  // dup(pad (n-len)+(pad_len-1) .div. pad_len) 1 n-len) text
  var_dup, 2, var_247_0_pad, LOCAL(4), 1, LOCAL(5),
  // n-len) text
  var_std__minus, 2, var_246_0_n, var_250_1_len, 1, LOCAL(6),
  // range(dup(pad (n-len)+(pad_len-1) .div. pad_len) 1 n-len) text
  var_range, 3, LOCAL(5), num_1, LOCAL(6), 1, LOCAL(7),
  // string range(dup(pad (n-len)+(pad_len-1) .div. pad_len) 1 n-len) text
  var_string, 2, LOCAL(7), var_249_1_text, TAIL_CALL,
  POS(253, 7),
  POS(254, 29),
  POS(254, 37),
  POS(254, 29),
  POS(254, 28),
  POS(254, 20),
  POS(254, 65),
  POS(254, 14),
  POS(254, 7)
};

static TAB_NUM t_lambda_9[] = {
  0, // locals
  0, // parameters
  //  text
  LET, 1, var_249_1_text, TAIL_CALL,
  POS(255, 7)
};

static TAB_NUM t_func_std__pad_right[] = {
  2, // locals
  -3, // parameters
  MANDATORY_PARAMETER, LOCAL(2), // 281_0_expr
  MANDATORY_PARAMETER, var_282_0_n,
  string_2, var_283_0_pad,
  // $text expr.to_string
  var_to_string, 1, LOCAL(2), 1, var_285_1_text,
  // $len length_of(text)
  var_length_of, 1, var_285_1_text, 1, var_286_1_len,
  // len < n:
  var_std__less, 2, var_286_1_len, var_282_0_n, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_10, lambda_11, TAIL_CALL,
  POS(285, 3),
  POS(286, 3),
  POS(288, 5),
  POS(287, 3)
};

static TAB_NUM t_lambda_10[] = {
  8, // locals
  0, // parameters
  // $pad_len length_of(pad)
  var_length_of, 1, var_283_0_pad, 1, LOCAL(8),
  // n-len)+(pad_len-1) .div. pad_len) 1 n-len)
  var_std__minus, 2, var_282_0_n, var_286_1_len, 1, LOCAL(1),
  // pad_len-1) .div. pad_len) 1 n-len)
  var_std__minus, 2, LOCAL(8), num_1, 1, LOCAL(2),
  // n-len)+(pad_len-1) .div. pad_len) 1 n-len)
  var_std__plus, 2, LOCAL(1), LOCAL(2), 1, LOCAL(3),
  // (n-len)+(pad_len-1) .div. pad_len) 1 n-len)
  var_div, 2, LOCAL(3), LOCAL(8), 1, LOCAL(4),
  // dup(pad (n-len)+(pad_len-1) .div. pad_len) 1 n-len)
  var_dup, 2, var_283_0_pad, LOCAL(4), 1, LOCAL(5),
  // n-len)
  var_std__minus, 2, var_282_0_n, var_286_1_len, 1, LOCAL(6),
  // range(dup(pad (n-len)+(pad_len-1) .div. pad_len) 1 n-len)
  var_range, 3, LOCAL(5), num_1, LOCAL(6), 1, LOCAL(7),
  // string text range(dup(pad (n-len)+(pad_len-1) .div. pad_len) 1 n-len)
  var_string, 2, var_285_1_text, LOCAL(7), TAIL_CALL,
  POS(289, 7),
  POS(290, 34),
  POS(290, 42),
  POS(290, 34),
  POS(290, 33),
  POS(290, 25),
  POS(290, 70),
  POS(290, 19),
  POS(290, 7)
};

static TAB_NUM t_lambda_11[] = {
  0, // locals
  0, // parameters
  //  text
  LET, 1, var_285_1_text, TAIL_CALL,
  POS(291, 7)
};

static TAB_NUM t_func_std__spaces[] = {
  2, // locals
  1, // parameters
  var_305_0_n,
  // 80
  var_std__less, 2, num_80, var_305_0_n, 1, LOCAL(1),
  // 80
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_12, lambda_13, TAIL_CALL,
  POS(308, 10),
  POS(308, 10),
  POS(307, 3)
};

static TAB_NUM t_lambda_12[] = {
  1, // locals
  0, // parameters
  // range(eighty_spaces 1 n)
  var_range, 3, string_3, num_1, var_305_0_n, 1, LOCAL(1),
  //  range(eighty_spaces 1 n)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(309, 8),
  POS(309, 7)
};

static TAB_NUM t_lambda_13[] = {
  1, // locals
  0, // parameters
  // dup(" " n)
  var_dup, 2, string_2, var_305_0_n, 1, LOCAL(1),
  //  dup(" " n)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(310, 8),
  POS(310, 7)
};

static TAB_NUM t_func_std__tabs_and_spaces[] = {
  1, // locals
  1, // parameters
  var_322_0_n,
  // n < 80
  var_std__less, 2, var_322_0_n, num_80, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_14, lambda_15, TAIL_CALL,
  POS(325, 5),
  POS(324, 3)
};

static TAB_NUM t_lambda_14[] = {
  5, // locals
  0, // parameters
  // n >> 3) 9+(n & 7))
  var_std__shift_right, 2, var_322_0_n, num_3, 1, LOCAL(1),
  // 10-(n >> 3) 9+(n & 7))
  var_std__minus, 2, num_10, LOCAL(1), 1, LOCAL(2),
  // n & 7))
  var_std__bit_and, 2, var_322_0_n, num_7, 1, LOCAL(3),
  // 9+(n & 7))
  var_std__plus, 2, num_9, LOCAL(3), 1, LOCAL(4),
  // range(nine_tabs_and_seven_spaces 10-(n >> 3) 9+(n & 7))
  var_range, 3, string_4, LOCAL(2), LOCAL(4), 1, LOCAL(5),
  //  range(nine_tabs_and_seven_spaces 10-(n >> 3) 9+(n & 7))
  LET, 1, LOCAL(5), TAIL_CALL,
  POS(326, 45),
  POS(326, 41),
  POS(326, 56),
  POS(326, 53),
  POS(326, 8),
  POS(326, 7)
};

static TAB_NUM t_lambda_15[] = {
  5, // locals
  0, // parameters
  // n >> 3) spaces(n & 7))
  var_std__shift_right, 2, var_322_0_n, num_3, 1, LOCAL(1),
  // dup("@ht;" n >> 3) spaces(n & 7))
  var_dup, 2, string_5, LOCAL(1), 1, LOCAL(2),
  // n & 7))
  var_std__bit_and, 2, var_322_0_n, num_7, 1, LOCAL(3),
  // spaces(n & 7))
  var_spaces, 1, LOCAL(3), 1, LOCAL(4),
  // string(dup("@ht;" n >> 3) spaces(n & 7))
  var_string, 2, LOCAL(2), LOCAL(4), 1, LOCAL(5),
  //  string(dup("@ht;" n >> 3) spaces(n & 7))
  LET, 1, LOCAL(5), TAIL_CALL,
  POS(327, 26),
  POS(327, 15),
  POS(327, 41),
  POS(327, 34),
  POS(327, 8),
  POS(327, 7)
};

static TAB_NUM t_func_std__with_tabs[] = {
  0, // locals
  1, // parameters
  var_342_0_text,
  // $s 1
  LET, 1, num_1, 1, var_344_1_s,
  // $n length_of(text)
  var_length_of, 1, var_342_0_text, 1, var_345_1_n,
  // $i 1
  LET, 1, num_1, 1, var_346_1_i,
  // $output ""
  LET, 1, string_1, 1, var_347_1_output,
  // $count 0
  LET, 1, num_0, 1, var_348_1_count,
  // loop:
  var_loop, 1, lambda_loop, TAIL_CALL,
  POS(344, 3),
  POS(345, 3),
  POS(346, 3),
  POS(347, 3),
  POS(348, 3),
  POS(349, 3)
};

static TAB_NUM t_lambda_loop[] = {
  2, // locals
  0, // parameters
  // n:
  var_std__less, 2, var_345_1_n, var_346_1_i, 1, LOCAL(1),
  // n:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_16, lambda_23, TAIL_CALL,
  POS(351, 12),
  POS(351, 12),
  POS(350, 5)
};

static TAB_NUM t_lambda_16[] = {
  2, // locals
  0, // parameters
  // text(i) == ' ':
  var_342_0_text, 1, var_346_1_i, 1, LOCAL(1),
  // text(i) == ' ':
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_17, lambda_18, TAIL_CALL,
  POS(353, 11),
  POS(353, 11),
  POS(352, 9)
};

static TAB_NUM t_lambda_17[] = {
  0, // locals
  0, // parameters
  // !i i+1
  var_std__plus, 2, var_346_1_i, num_1, 1, var_346_1_i,
  // !count count+1
  var_std__plus, 2, var_348_1_count, num_1, 1, var_348_1_count,
  // next
  var_next, 0, TAIL_CALL,
  POS(354, 13),
  POS(355, 13),
  POS(356, 13)
};

static TAB_NUM t_lambda_18[] = {
  2, // locals
  0, // parameters
  // count >= 8:
  var_std__less, 2, var_348_1_count, num_8, 1, LOCAL(1),
  // count >= 8:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_19, func_skip_line, TAIL_CALL,
  POS(359, 15),
  POS(359, 15),
  POS(358, 13)
};

static TAB_NUM t_lambda_19[] = {
  2, // locals
  0, // parameters
  // $tab_count count >> 3
  var_std__shift_right, 2, var_348_1_count, num_3, 1, var_360_1_tab_count,
  // tab_count >= 1:
  var_std__less, 2, var_360_1_tab_count, num_1, 1, LOCAL(1),
  // tab_count >= 1:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_20, func_skip_line, TAIL_CALL,
  POS(360, 17),
  POS(362, 19),
  POS(362, 19),
  POS(361, 17)
};

static TAB_NUM t_lambda_20[] = {
  3, // locals
  0, // parameters
  // count+1))
  var_std__plus, 2, var_348_1_count, num_1, 1, LOCAL(1),
  // i-(count+1))
  var_std__minus, 2, var_346_1_i, LOCAL(1), 1, LOCAL(2),
  // range(text s i-(count+1))
  var_range, 3, var_342_0_text, var_344_1_s, LOCAL(2), 1, LOCAL(3),
  // append &output range(text s i-(count+1))
  var_append, 2, var_347_1_output, LOCAL(3), 1, var_347_1_output,
  // tab_count < 10
  var_std__less, 2, var_360_1_tab_count, num_10, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_21, lambda_22, 1, LOCAL(2),
  // append &output
  var_append, 2, var_347_1_output, LOCAL(2), 1, var_347_1_output,
  // i-count)+(tab_count << 3)
  var_std__minus, 2, var_346_1_i, var_348_1_count, 1, LOCAL(1),
  // tab_count << 3)
  var_std__shift_left, 2, var_360_1_tab_count, num_3, 1, LOCAL(2),
  // !s (i-count)+(tab_count << 3)
  var_std__plus, 2, LOCAL(1), LOCAL(2), 1, var_344_1_s,
  // skip_line
  func_skip_line, 0, TAIL_CALL,
  POS(363, 52),
  POS(363, 49),
  POS(363, 36),
  POS(363, 21),
  POS(366, 25),
  POS(365, 23),
  POS(364, 21),
  POS(369, 25),
  POS(369, 35),
  POS(369, 21),
  POS(370, 21)
};

static TAB_NUM t_lambda_21[] = {
  1, // locals
  0, // parameters
  // range(tabs 1 tab_count)
  var_range, 3, string_6, num_1, var_360_1_tab_count, 1, LOCAL(1),
  //  range(tabs 1 tab_count)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(367, 28),
  POS(367, 27)
};

static TAB_NUM t_lambda_22[] = {
  1, // locals
  0, // parameters
  // dup("@ht;" tab_count)
  var_dup, 2, string_5, var_360_1_tab_count, 1, LOCAL(1),
  //  dup("@ht;" tab_count)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(368, 28),
  POS(368, 27)
};

static TAB_NUM t_lambda_23[] = {
  1, // locals
  0, // parameters
  // s == 1
  var_std__equal, 2, var_344_1_s, num_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_24, lambda_25, TAIL_CALL,
  POS(375, 11),
  POS(374, 9)
};

static TAB_NUM t_lambda_24[] = {
  0, // locals
  0, // parameters
  //  text
  LET, 1, var_342_0_text, TAIL_CALL,
  POS(376, 13)
};

static TAB_NUM t_lambda_25[] = {
  2, // locals
  0, // parameters
  // range(text s -1))
  var_range, 3, var_342_0_text, var_344_1_s, minus_num_1, 1, LOCAL(1),
  // append(output range(text s -1))
  var_append, 2, var_347_1_output, LOCAL(1), 1, LOCAL(2),
  //  append(output range(text s -1))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(377, 28),
  POS(377, 14),
  POS(377, 13)
};

static TAB_NUM t_func_skip_line[] = {
  0, // locals
  0, // parameters
  // loop
  var_loop, 2, lambda_26, lambda_29, TAIL_CALL,
  POS(380, 5)
};

static TAB_NUM t_lambda_26[] = {
  3, // locals
  0, // parameters
  // n && text(i) != '@nl;':
  var_std__less, 2, var_345_1_n, var_346_1_i, 1, LOCAL(1),
  // n && text(i) != '@nl;':
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // n && text(i) != '@nl;':
  var_std__and, 2, LOCAL(2), lambda_27, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_28, var_break, TAIL_CALL,
  POS(383, 16),
  POS(383, 16),
  POS(383, 16),
  POS(382, 9)
};

static TAB_NUM t_lambda_27[] = {
  3, // locals
  0, // parameters
  // text(i) != '@nl;':
  var_342_0_text, 1, var_346_1_i, 1, LOCAL(1),
  // text(i) != '@nl;':
  var_std__equal, 2, LOCAL(1), chr_10, 1, LOCAL(2),
  // text(i) != '@nl;':
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(i) != '@nl;':
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(383, 21),
  POS(383, 21),
  POS(383, 21),
  POS(383, 21)
};

static TAB_NUM t_lambda_28[] = {
  0, // locals
  0, // parameters
  // !i i+1
  var_std__plus, 2, var_346_1_i, num_1, 1, var_346_1_i,
  // next
  var_next, 0, TAIL_CALL,
  POS(384, 13),
  POS(385, 13)
};

static TAB_NUM t_lambda_29[] = {
  0, // locals
  0, // parameters
  // !i i+1
  var_std__plus, 2, var_346_1_i, num_1, 1, var_346_1_i,
  // !count 0
  LET, 1, num_0, 1, var_348_1_count,
  // next
  var_next, 0, TAIL_CALL,
  POS(388, 9),
  POS(389, 9),
  POS(390, 9)
};

static TAB_NUM t_func_std_types__string___match[] = {
  3, // locals
  2, // parameters
  var_407_0_self,
  var_408_0_stream,
  // $len length_of(self)
  var_length_of, 1, var_407_0_self, 1, var_410_1_len,
  // length_of(stream) >= len
  var_length_of, 1, var_408_0_stream, 1, LOCAL(1),
  // length_of(stream) >= len
  var_std__less, 2, LOCAL(1), var_410_1_len, 1, LOCAL(2),
  // length_of(stream) >= len
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_30, lambda_33, TAIL_CALL,
  POS(410, 3),
  POS(412, 5),
  POS(412, 5),
  POS(412, 5),
  POS(411, 3)
};

static TAB_NUM t_lambda_30[] = {
  2, // locals
  0, // parameters
  // range(stream 1 len) == self
  var_range, 3, var_408_0_stream, num_1, var_410_1_len, 1, LOCAL(1),
  // range(stream 1 len) == self
  var_std__equal, 2, LOCAL(1), var_407_0_self, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_31, lambda_32, TAIL_CALL,
  POS(415, 9),
  POS(415, 9),
  POS(414, 7)
};

static TAB_NUM t_lambda_31[] = {
  0, // locals
  0, // parameters
  //  len
  LET, 1, var_410_1_len, TAIL_CALL,
  POS(416, 11)
};

static TAB_NUM t_lambda_32[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(417, 11)
};

static TAB_NUM t_lambda_33[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(418, 7)
};

static TAB_NUM t_func_std_types__string___matches[] = {
  5, // locals
  2, // parameters
  LOCAL(4), // 428_0_self
  LOCAL(5), // 429_0_expr
  // match(expr self) == length_of(self)
  var_match, 2, LOCAL(5), LOCAL(4), 1, LOCAL(1),
  // length_of(self)
  var_length_of, 1, LOCAL(4), 1, LOCAL(2),
  // match(expr self) == length_of(self)
  var_std__equal, 2, LOCAL(1), LOCAL(2), 1, LOCAL(3),
  // -> match(expr self) == length_of(self)
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(431, 6),
  POS(431, 26),
  POS(431, 6),
  POS(431, 3)
};

static TAB_NUM t_func_std_types__string___search[] = {
  1, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_450_0_self,
  MANDATORY_PARAMETER, var_451_0_stream,
  num_1, var_452_0_nth,
  // $i undefined
  LET, 1, var_undefined, 1, var_454_1_i,
  // $length length_of(self)
  var_length_of, 1, var_450_0_self, 1, var_455_1_length,
  // $offset length-1
  var_std__minus, 2, var_455_1_length, num_1, 1, var_456_1_offset,
  // length_of(stream)-offset
  var_length_of, 1, var_451_0_stream, 1, LOCAL(1),
  // $n length_of(stream)-offset
  var_std__minus, 2, LOCAL(1), var_456_1_offset, 1, var_457_1_n,
  // nth < 0:
  var_std__less, 2, var_452_0_nth, num_0, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_34, lambda_35, TAIL_CALL,
  POS(454, 3),
  POS(455, 3),
  POS(456, 3),
  POS(457, 6),
  POS(457, 3),
  POS(459, 5),
  POS(458, 3)
};

static TAB_NUM t_lambda_34[] = {
  0, // locals
  0, // parameters
  // !i n
  LET, 1, var_457_1_n, 1, var_454_1_i,
  // search_backwards
  func_search_backwards, 0, TAIL_CALL,
  POS(460, 7),
  POS(461, 7)
};

static TAB_NUM t_lambda_35[] = {
  0, // locals
  0, // parameters
  // !i 1
  LET, 1, num_1, 1, var_454_1_i,
  // search_forwards
  func_search_forwards, 0, TAIL_CALL,
  POS(463, 7),
  POS(464, 7)
};

static TAB_NUM t_func_search_forwards[] = {
  2, // locals
  0, // parameters
  // n
  var_std__less, 2, var_457_1_n, var_454_1_i, 1, LOCAL(1),
  // n
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_36, lambda_41, TAIL_CALL,
  POS(468, 12),
  POS(468, 12),
  POS(467, 5)
};

static TAB_NUM t_lambda_36[] = {
  3, // locals
  0, // parameters
  // i+offset) == self:
  var_std__plus, 2, var_454_1_i, var_456_1_offset, 1, LOCAL(1),
  // range(stream i i+offset) == self:
  var_range, 3, var_451_0_stream, var_454_1_i, LOCAL(1), 1, LOCAL(2),
  // range(stream i i+offset) == self:
  var_std__equal, 2, LOCAL(2), var_450_0_self, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_37, lambda_40, TAIL_CALL,
  POS(471, 26),
  POS(471, 11),
  POS(471, 11),
  POS(470, 9)
};

static TAB_NUM t_lambda_37[] = {
  1, // locals
  0, // parameters
  // 1:
  var_std__less, 2, num_1, var_452_0_nth, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_38, lambda_39, TAIL_CALL,
  POS(473, 21),
  POS(472, 13)
};

static TAB_NUM t_lambda_38[] = {
  0, // locals
  0, // parameters
  // dec &nth
  var_dec, 1, var_452_0_nth, 1, var_452_0_nth,
  // plus &i length
  var_plus, 2, var_454_1_i, var_455_1_length, 1, var_454_1_i,
  // search_forwards
  func_search_forwards, 0, TAIL_CALL,
  POS(474, 17),
  POS(475, 17),
  POS(476, 17)
};

static TAB_NUM t_lambda_39[] = {
  0, // locals
  0, // parameters
  //  i length
  LET, 2, var_454_1_i, var_455_1_length, TAIL_CALL,
  POS(477, 17)
};

static TAB_NUM t_lambda_40[] = {
  0, // locals
  0, // parameters
  // inc &i
  var_inc, 1, var_454_1_i, 1, var_454_1_i,
  // search_forwards
  func_search_forwards, 0, TAIL_CALL,
  POS(479, 13),
  POS(480, 13)
};

static TAB_NUM t_lambda_41[] = {
  0, // locals
  0, // parameters
  //  undefined undefined
  LET, 2, var_undefined, var_undefined, TAIL_CALL,
  POS(481, 9)
};

static TAB_NUM t_func_search_backwards[] = {
  2, // locals
  0, // parameters
  // i >= 1
  var_std__less, 2, var_454_1_i, num_1, 1, LOCAL(1),
  // i >= 1
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_42, lambda_47, TAIL_CALL,
  POS(485, 7),
  POS(485, 7),
  POS(484, 5)
};

static TAB_NUM t_lambda_42[] = {
  3, // locals
  0, // parameters
  // i+offset) == self:
  var_std__plus, 2, var_454_1_i, var_456_1_offset, 1, LOCAL(1),
  // range(stream i i+offset) == self:
  var_range, 3, var_451_0_stream, var_454_1_i, LOCAL(1), 1, LOCAL(2),
  // range(stream i i+offset) == self:
  var_std__equal, 2, LOCAL(2), var_450_0_self, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_43, lambda_46, TAIL_CALL,
  POS(488, 26),
  POS(488, 11),
  POS(488, 11),
  POS(487, 9)
};

static TAB_NUM t_lambda_43[] = {
  1, // locals
  0, // parameters
  // nth < -1:
  var_std__less, 2, var_452_0_nth, minus_num_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_44, lambda_45, TAIL_CALL,
  POS(490, 15),
  POS(489, 13)
};

static TAB_NUM t_lambda_44[] = {
  0, // locals
  0, // parameters
  // inc &nth
  var_inc, 1, var_452_0_nth, 1, var_452_0_nth,
  // minus &i length
  var_minus, 2, var_454_1_i, var_455_1_length, 1, var_454_1_i,
  // search_backwards
  func_search_backwards, 0, TAIL_CALL,
  POS(491, 17),
  POS(492, 17),
  POS(493, 17)
};

static TAB_NUM t_lambda_45[] = {
  0, // locals
  0, // parameters
  //  i length
  LET, 2, var_454_1_i, var_455_1_length, TAIL_CALL,
  POS(494, 17)
};

static TAB_NUM t_lambda_46[] = {
  0, // locals
  0, // parameters
  // dec &i
  var_dec, 1, var_454_1_i, 1, var_454_1_i,
  // search_backwards
  func_search_backwards, 0, TAIL_CALL,
  POS(496, 13),
  POS(497, 13)
};

static TAB_NUM t_lambda_47[] = {
  0, // locals
  0, // parameters
  //  undefined undefined
  LET, 2, var_undefined, var_undefined, TAIL_CALL,
  POS(498, 9)
};

static TAB_NUM t_func_std_types__string___before[] = {
  3, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_538_0_str,
  MANDATORY_PARAMETER, LOCAL(2), // 539_0_expr
  num_1, LOCAL(3), // 540_0_nth
  // search $pos $_len expr str nth
  var_search, 3, LOCAL(2), var_538_0_str, LOCAL(3), 2, var_542_8_pos, LOCAL(1),
  // is_defined
  var_is_defined, 1, var_542_8_pos, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_48, lambda_49, TAIL_CALL,
  POS(542, 3),
  POS(544, 9),
  POS(543, 3)
};

static TAB_NUM t_lambda_48[] = {
  2, // locals
  0, // parameters
  // pos-1)
  var_std__minus, 2, var_542_8_pos, num_1, 1, LOCAL(1),
  // range(str 1 pos-1)
  var_range, 3, var_538_0_str, num_1, LOCAL(1), 1, LOCAL(2),
  //  range(str 1 pos-1)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(545, 20),
  POS(545, 8),
  POS(545, 7)
};

static TAB_NUM t_lambda_49[] = {
  0, // locals
  0, // parameters
  //  ""
  LET, 1, string_1, TAIL_CALL,
  POS(546, 7)
};

static TAB_NUM t_func_std_types__string___truncate_from[] = {
  3, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_588_0_str,
  MANDATORY_PARAMETER, LOCAL(2), // 589_0_expr
  num_1, LOCAL(3), // 590_0_nth
  // search $pos $_len expr str nth
  var_search, 3, LOCAL(2), var_588_0_str, LOCAL(3), 2, var_592_8_pos, LOCAL(1),
  // is_defined
  var_is_defined, 1, var_592_8_pos, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_50, lambda_51, TAIL_CALL,
  POS(592, 3),
  POS(594, 9),
  POS(593, 3)
};

static TAB_NUM t_lambda_50[] = {
  2, // locals
  0, // parameters
  // pos-1)
  var_std__minus, 2, var_592_8_pos, num_1, 1, LOCAL(1),
  // range(str 1 pos-1)
  var_range, 3, var_588_0_str, num_1, LOCAL(1), 1, LOCAL(2),
  //  range(str 1 pos-1)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(595, 20),
  POS(595, 8),
  POS(595, 7)
};

static TAB_NUM t_lambda_51[] = {
  0, // locals
  0, // parameters
  //  str
  LET, 1, var_588_0_str, TAIL_CALL,
  POS(596, 7)
};

static TAB_NUM t_func_std_types__string___behind[] = {
  3, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_636_0_str,
  MANDATORY_PARAMETER, LOCAL(2), // 637_0_expr
  num_1, LOCAL(3), // 638_0_nth
  // search $pos $len expr str nth
  var_search, 3, LOCAL(2), var_636_0_str, LOCAL(3), 2, var_640_8_pos, var_640_13_len,
  // is_defined
  var_is_defined, 1, var_640_8_pos, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_52, lambda_53, TAIL_CALL,
  POS(640, 3),
  POS(642, 9),
  POS(641, 3)
};

static TAB_NUM t_lambda_52[] = {
  2, // locals
  0, // parameters
  // pos+len -1)
  var_std__plus, 2, var_640_8_pos, var_640_13_len, 1, LOCAL(1),
  // range(str pos+len -1)
  var_range, 3, var_636_0_str, LOCAL(1), minus_num_1, 1, LOCAL(2),
  //  range(str pos+len -1)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(643, 18),
  POS(643, 8),
  POS(643, 7)
};

static TAB_NUM t_lambda_53[] = {
  0, // locals
  0, // parameters
  //  ""
  LET, 1, string_1, TAIL_CALL,
  POS(644, 7)
};

static TAB_NUM t_func_std_types__string___truncate_until[] = {
  3, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_685_0_str,
  MANDATORY_PARAMETER, LOCAL(2), // 686_0_expr
  num_1, LOCAL(3), // 687_0_nth
  // search $pos $len expr str nth
  var_search, 3, LOCAL(2), var_685_0_str, LOCAL(3), 2, var_689_8_pos, var_689_13_len,
  // is_defined
  var_is_defined, 1, var_689_8_pos, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_54, lambda_55, TAIL_CALL,
  POS(689, 3),
  POS(691, 9),
  POS(690, 3)
};

static TAB_NUM t_lambda_54[] = {
  2, // locals
  0, // parameters
  // pos+len -1)
  var_std__plus, 2, var_689_8_pos, var_689_13_len, 1, LOCAL(1),
  // range(str pos+len -1)
  var_range, 3, var_685_0_str, LOCAL(1), minus_num_1, 1, LOCAL(2),
  //  range(str pos+len -1)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(692, 18),
  POS(692, 8),
  POS(692, 7)
};

static TAB_NUM t_lambda_55[] = {
  0, // locals
  0, // parameters
  //  str
  LET, 1, var_685_0_str, TAIL_CALL,
  POS(693, 7)
};

static TAB_NUM t_func_std_types__string___from[] = {
  3, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_734_0_str,
  MANDATORY_PARAMETER, LOCAL(2), // 735_0_expr
  num_1, LOCAL(3), // 736_0_nth
  // search $pos $_len expr str nth
  var_search, 3, LOCAL(2), var_734_0_str, LOCAL(3), 2, var_738_8_pos, LOCAL(1),
  // is_defined
  var_is_defined, 1, var_738_8_pos, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_56, lambda_57, TAIL_CALL,
  POS(738, 3),
  POS(740, 9),
  POS(739, 3)
};

static TAB_NUM t_lambda_56[] = {
  1, // locals
  0, // parameters
  // range(str pos -1)
  var_range, 3, var_734_0_str, var_738_8_pos, minus_num_1, 1, LOCAL(1),
  //  range(str pos -1)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(741, 8),
  POS(741, 7)
};

static TAB_NUM t_lambda_57[] = {
  0, // locals
  0, // parameters
  //  ""
  LET, 1, string_1, TAIL_CALL,
  POS(742, 7)
};

static TAB_NUM t_func_std_types__string___truncate_before[] = {
  3, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_783_0_str,
  MANDATORY_PARAMETER, LOCAL(2), // 784_0_expr
  num_1, LOCAL(3), // 785_0_nth
  // search $pos $_len expr str nth
  var_search, 3, LOCAL(2), var_783_0_str, LOCAL(3), 2, var_787_8_pos, LOCAL(1),
  // is_defined
  var_is_defined, 1, var_787_8_pos, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_58, lambda_59, TAIL_CALL,
  POS(787, 3),
  POS(789, 9),
  POS(788, 3)
};

static TAB_NUM t_lambda_58[] = {
  1, // locals
  0, // parameters
  // range(str pos -1)
  var_range, 3, var_783_0_str, var_787_8_pos, minus_num_1, 1, LOCAL(1),
  //  range(str pos -1)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(790, 8),
  POS(790, 7)
};

static TAB_NUM t_lambda_59[] = {
  0, // locals
  0, // parameters
  //  str
  LET, 1, var_783_0_str, TAIL_CALL,
  POS(791, 7)
};

static TAB_NUM t_func_std_types__string___until[] = {
  3, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_831_0_str,
  MANDATORY_PARAMETER, LOCAL(2), // 832_0_expr
  num_1, LOCAL(3), // 833_0_nth
  // search $pos $len expr str nth
  var_search, 3, LOCAL(2), var_831_0_str, LOCAL(3), 2, var_835_8_pos, var_835_13_len,
  // is_defined
  var_is_defined, 1, var_835_8_pos, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_60, lambda_61, TAIL_CALL,
  POS(835, 3),
  POS(837, 9),
  POS(836, 3)
};

static TAB_NUM t_lambda_60[] = {
  3, // locals
  0, // parameters
  // pos+len-1)
  var_std__plus, 2, var_835_8_pos, var_835_13_len, 1, LOCAL(1),
  // pos+len-1)
  var_std__minus, 2, LOCAL(1), num_1, 1, LOCAL(2),
  // range(str 1 pos+len-1)
  var_range, 3, var_831_0_str, num_1, LOCAL(2), 1, LOCAL(3),
  //  range(str 1 pos+len-1)
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(838, 20),
  POS(838, 20),
  POS(838, 8),
  POS(838, 7)
};

static TAB_NUM t_lambda_61[] = {
  0, // locals
  0, // parameters
  //  ""
  LET, 1, string_1, TAIL_CALL,
  POS(839, 7)
};

static TAB_NUM t_func_std_types__string___truncate_behind[] = {
  3, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_880_0_str,
  MANDATORY_PARAMETER, LOCAL(2), // 881_0_expr
  num_1, LOCAL(3), // 882_0_nth
  // search $pos $len expr str nth
  var_search, 3, LOCAL(2), var_880_0_str, LOCAL(3), 2, var_884_8_pos, var_884_13_len,
  // is_defined
  var_is_defined, 1, var_884_8_pos, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_62, lambda_63, TAIL_CALL,
  POS(884, 3),
  POS(886, 9),
  POS(885, 3)
};

static TAB_NUM t_lambda_62[] = {
  3, // locals
  0, // parameters
  // pos+len-1)
  var_std__plus, 2, var_884_8_pos, var_884_13_len, 1, LOCAL(1),
  // pos+len-1)
  var_std__minus, 2, LOCAL(1), num_1, 1, LOCAL(2),
  // range(str 1 pos+len-1)
  var_range, 3, var_880_0_str, num_1, LOCAL(2), 1, LOCAL(3),
  //  range(str 1 pos+len-1)
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(887, 20),
  POS(887, 20),
  POS(887, 8),
  POS(887, 7)
};

static TAB_NUM t_lambda_63[] = {
  0, // locals
  0, // parameters
  //  str
  LET, 1, var_880_0_str, TAIL_CALL,
  POS(888, 7)
};

static TAB_NUM t_func_std_types__string___between[] = {
  6, // locals
  -4, // parameters
  MANDATORY_PARAMETER, LOCAL(3), // 916_0_str
  MANDATORY_PARAMETER, LOCAL(4), // 917_0_expr_1
  MANDATORY_PARAMETER, LOCAL(5), // 918_0_expr_2
  num_1, LOCAL(6), // 919_0_nth
  // behind(str expr_1 nth) .before. expr_2
  var_behind, 3, LOCAL(3), LOCAL(4), LOCAL(6), 1, LOCAL(1),
  // behind(str expr_1 nth) .before. expr_2
  var_before, 2, LOCAL(1), LOCAL(5), 1, LOCAL(2),
  // -> behind(str expr_1 nth) .before. expr_2
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(921, 6),
  POS(921, 6),
  POS(921, 3)
};

static TAB_NUM t_func_std_types__string___has_prefix[] = {
  4, // locals
  2, // parameters
  LOCAL(3), // 940_0_self
  LOCAL(4), // 941_0_prefix
  // match(prefix self).is_defined
  var_match, 2, LOCAL(4), LOCAL(3), 1, LOCAL(1),
  // is_defined
  var_is_defined, 1, LOCAL(1), 1, LOCAL(2),
  // -> match(prefix self).is_defined
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(943, 6),
  POS(943, 25),
  POS(943, 3)
};

static TAB_NUM t_func_std_types__string___has_suffix[] = {
  1, // locals
  2, // parameters
  var_962_0_self,
  var_963_0_suffix,
  // is_a_character
  var_is_a_character, 1, var_963_0_suffix, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_64, lambda_66, TAIL_CALL,
  POS(966, 12),
  POS(965, 3)
};

static TAB_NUM t_lambda_64[] = {
  4, // locals
  0, // parameters
  // length_of(self) >= 1 && self(-1) == suffix
  var_length_of, 1, var_962_0_self, 1, LOCAL(1),
  // length_of(self) >= 1 && self(-1) == suffix
  var_std__less, 2, LOCAL(1), num_1, 1, LOCAL(2),
  // length_of(self) >= 1 && self(-1) == suffix
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // length_of(self) >= 1 && self(-1) == suffix
  var_std__and, 2, LOCAL(3), lambda_65, 1, LOCAL(4),
  //  length_of(self) >= 1 && self(-1) == suffix
  LET, 1, LOCAL(4), TAIL_CALL,
  POS(967, 8),
  POS(967, 8),
  POS(967, 8),
  POS(967, 8),
  POS(967, 7)
};

static TAB_NUM t_lambda_65[] = {
  2, // locals
  0, // parameters
  // self(-1) == suffix
  var_962_0_self, 1, minus_num_1, 1, LOCAL(1),
  // self(-1) == suffix
  var_std__equal, 2, LOCAL(1), var_963_0_suffix, 1, LOCAL(2),
  // self(-1) == suffix
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(967, 32),
  POS(967, 32),
  POS(967, 32)
};

static TAB_NUM t_lambda_66[] = {
  4, // locals
  0, // parameters
  // $len length_of(suffix)
  var_length_of, 1, var_963_0_suffix, 1, var_969_1_len,
  // length_of(self) >= len && range(self -len -1) == suffix
  var_length_of, 1, var_962_0_self, 1, LOCAL(1),
  // length_of(self) >= len && range(self -len -1) == suffix
  var_std__less, 2, LOCAL(1), var_969_1_len, 1, LOCAL(2),
  // length_of(self) >= len && range(self -len -1) == suffix
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // length_of(self) >= len && range(self -len -1) == suffix
  var_std__and, 2, LOCAL(3), lambda_67, 1, LOCAL(4),
  // -> length_of(self) >= len && range(self -len -1) == suffix
  LET, 1, LOCAL(4), TAIL_CALL,
  POS(969, 7),
  POS(970, 10),
  POS(970, 10),
  POS(970, 10),
  POS(970, 10),
  POS(970, 7)
};

static TAB_NUM t_lambda_67[] = {
  3, // locals
  0, // parameters
  // len -1) == suffix
  var_std__negate, 1, var_969_1_len, 1, LOCAL(1),
  // range(self -len -1) == suffix
  var_range, 3, var_962_0_self, LOCAL(1), minus_num_1, 1, LOCAL(2),
  // range(self -len -1) == suffix
  var_std__equal, 2, LOCAL(2), var_963_0_suffix, 1, LOCAL(3),
  // range(self -len -1) == suffix
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(970, 48),
  POS(970, 36),
  POS(970, 36),
  POS(970, 36)
};

static TAB_NUM t_func_std_types__string___without_prefix[] = {
  2, // locals
  2, // parameters
  var_993_0_self,
  LOCAL(2), // 994_0_prefix
  // $n match(prefix self)
  var_match, 2, LOCAL(2), var_993_0_self, 1, var_996_1_n,
  // is_defined
  var_is_defined, 1, var_996_1_n, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_68, lambda_69, TAIL_CALL,
  POS(996, 3),
  POS(998, 7),
  POS(997, 3)
};

static TAB_NUM t_lambda_68[] = {
  2, // locals
  0, // parameters
  // n+1 -1)
  var_std__plus, 2, var_996_1_n, num_1, 1, LOCAL(1),
  // range(self n+1 -1)
  var_range, 3, var_993_0_self, LOCAL(1), minus_num_1, 1, LOCAL(2),
  //  range(self n+1 -1)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(999, 19),
  POS(999, 8),
  POS(999, 7)
};

static TAB_NUM t_lambda_69[] = {
  0, // locals
  0, // parameters
  //  self
  LET, 1, var_993_0_self, TAIL_CALL,
  POS(1000, 7)
};

static TAB_NUM t_func_std_types__string___without_suffix[] = {
  1, // locals
  2, // parameters
  var_1023_0_self,
  var_1024_0_suffix,
  // $len length_of(self)
  var_length_of, 1, var_1023_0_self, 1, var_1026_1_len,
  // is_a_character:
  var_is_a_character, 1, var_1024_0_suffix, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_suffix_is_a_character, lambda_73, TAIL_CALL,
  POS(1026, 3),
  POS(1028, 12),
  POS(1027, 3)
};

static TAB_NUM t_lambda_suffix_is_a_character[] = {
  3, // locals
  0, // parameters
  // len >= 1 && self(-1) == suffix
  var_std__less, 2, var_1026_1_len, num_1, 1, LOCAL(1),
  // len >= 1 && self(-1) == suffix
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // len >= 1 && self(-1) == suffix
  var_std__and, 2, LOCAL(2), lambda_70, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_71, lambda_72, TAIL_CALL,
  POS(1030, 9),
  POS(1030, 9),
  POS(1030, 9),
  POS(1029, 7)
};

static TAB_NUM t_lambda_70[] = {
  2, // locals
  0, // parameters
  // self(-1) == suffix
  var_1023_0_self, 1, minus_num_1, 1, LOCAL(1),
  // self(-1) == suffix
  var_std__equal, 2, LOCAL(1), var_1024_0_suffix, 1, LOCAL(2),
  // self(-1) == suffix
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1030, 21),
  POS(1030, 21),
  POS(1030, 21)
};

static TAB_NUM t_lambda_71[] = {
  1, // locals
  0, // parameters
  // range(self 1 -2)
  var_range, 3, var_1023_0_self, num_1, minus_num_2, 1, LOCAL(1),
  //  range(self 1 -2)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1031, 12),
  POS(1031, 11)
};

static TAB_NUM t_lambda_72[] = {
  0, // locals
  0, // parameters
  //  self
  LET, 1, var_1023_0_self, TAIL_CALL,
  POS(1032, 11)
};

static TAB_NUM t_lambda_73[] = {
  3, // locals
  0, // parameters
  // $slen length_of(suffix)
  var_length_of, 1, var_1024_0_suffix, 1, var_1034_1_slen,
  // len >= slen && range(self -slen -1) == suffix
  var_std__less, 2, var_1026_1_len, var_1034_1_slen, 1, LOCAL(1),
  // len >= slen && range(self -slen -1) == suffix
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // len >= slen && range(self -slen -1) == suffix
  var_std__and, 2, LOCAL(2), lambda_74, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_75, lambda_76, TAIL_CALL,
  POS(1034, 7),
  POS(1036, 9),
  POS(1036, 9),
  POS(1036, 9),
  POS(1035, 7)
};

static TAB_NUM t_lambda_74[] = {
  3, // locals
  0, // parameters
  // slen -1) == suffix
  var_std__negate, 1, var_1034_1_slen, 1, LOCAL(1),
  // range(self -slen -1) == suffix
  var_range, 3, var_1023_0_self, LOCAL(1), minus_num_1, 1, LOCAL(2),
  // range(self -slen -1) == suffix
  var_std__equal, 2, LOCAL(2), var_1024_0_suffix, 1, LOCAL(3),
  // range(self -slen -1) == suffix
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(1036, 36),
  POS(1036, 24),
  POS(1036, 24),
  POS(1036, 24)
};

static TAB_NUM t_lambda_75[] = {
  3, // locals
  0, // parameters
  // slen-1)
  var_std__negate, 1, var_1034_1_slen, 1, LOCAL(1),
  // slen-1)
  var_std__minus, 2, LOCAL(1), num_1, 1, LOCAL(2),
  // range(self 1 -slen-1)
  var_range, 3, var_1023_0_self, num_1, LOCAL(2), 1, LOCAL(3),
  //  range(self 1 -slen-1)
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(1037, 26),
  POS(1037, 26),
  POS(1037, 12),
  POS(1037, 11)
};

static TAB_NUM t_lambda_76[] = {
  0, // locals
  0, // parameters
  //  self
  LET, 1, var_1023_0_self, TAIL_CALL,
  POS(1038, 11)
};

static TAB_NUM t_func_std_types__string___contains[] = {
  4, // locals
  2, // parameters
  LOCAL(2), // 1063_0_self
  LOCAL(3), // 1064_0_expr
  // search $pos $_len expr self
  var_search, 2, LOCAL(3), LOCAL(2), 2, LOCAL(4), LOCAL(1),
  // is_defined
  var_is_defined, 1, LOCAL(4), 1, LOCAL(1),
  // -> pos.is_defined
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1066, 3),
  POS(1067, 10),
  POS(1067, 3)
};

static TAB_NUM t_func_std__split[] = {
  1, // locals
  -2, // parameters
  MANDATORY_PARAMETER, var_1103_0_self,
  chr_32, var_1104_0_separator,
  // is_empty
  var_is_empty, 1, var_1103_0_self, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_77, lambda_78, TAIL_CALL,
  POS(1107, 10),
  POS(1106, 3)
};

static TAB_NUM t_lambda_77[] = {
  0, // locals
  0, // parameters
  //  empty_list
  LET, 1, var_empty_list, TAIL_CALL,
  POS(1108, 7)
};

static TAB_NUM t_lambda_78[] = {
  0, // locals
  0, // parameters
  // $items empty_list
  LET, 1, var_empty_list, 1, var_1110_1_items,
  // loop:
  var_loop, 1, lambda_2_loop, TAIL_CALL,
  POS(1110, 7),
  POS(1111, 7)
};

static TAB_NUM t_lambda_2_loop[] = {
  1, // locals
  0, // parameters
  // search $pos $len separator self
  var_search, 2, var_1104_0_separator, var_1103_0_self, 2, var_1112_8_pos, var_1112_13_len,
  // is_defined:
  var_is_defined, 1, var_1112_8_pos, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_pos_is_defined, lambda_79, TAIL_CALL,
  POS(1112, 9),
  POS(1114, 15),
  POS(1113, 9)
};

static TAB_NUM t_lambda_pos_is_defined[] = {
  2, // locals
  0, // parameters
  // pos-1)
  var_std__minus, 2, var_1112_8_pos, num_1, 1, LOCAL(1),
  // range(self 1 pos-1)
  var_range, 3, var_1103_0_self, num_1, LOCAL(1), 1, LOCAL(2),
  // push &items range(self 1 pos-1)
  var_push, 2, var_1110_1_items, LOCAL(2), 1, var_1110_1_items,
  // pos+len -1
  var_std__plus, 2, var_1112_8_pos, var_1112_13_len, 1, LOCAL(1),
  // range &self pos+len -1
  var_range, 3, var_1103_0_self, LOCAL(1), minus_num_1, 1, var_1103_0_self,
  // next
  var_next, 0, TAIL_CALL,
  POS(1115, 38),
  POS(1115, 25),
  POS(1115, 13),
  POS(1116, 25),
  POS(1116, 13),
  POS(1117, 13)
};

static TAB_NUM t_lambda_79[] = {
  1, // locals
  0, // parameters
  // push(items self)
  var_push, 2, var_1110_1_items, var_1103_0_self, 1, LOCAL(1),
  //  push(items self)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1118, 14),
  POS(1118, 13)
};

static TAB_NUM t_func_std__join[] = {
  1, // locals
  -2, // parameters
  MANDATORY_PARAMETER, LOCAL(1), // 1143_0_items
  string_2, var_1144_0_separator,
  // to_string &separator
  var_to_string, 1, var_1144_0_separator, 1, var_1144_0_separator,
  // map_reduce
  var_map_reduce, 4, LOCAL(1), var_to_string, lambda_80, string_1, TAIL_CALL,
  POS(1146, 3),
  POS(1147, 3)
};

static TAB_NUM t_lambda_80[] = {
  2, // locals
  2, // parameters
  LOCAL(1), // 1149_3_left
  LOCAL(2), // 1149_8_right
  // append left separator right
  var_append, 3, LOCAL(1), var_1144_0_separator, LOCAL(2), TAIL_CALL,
  POS(1149, 20)
};

static TAB_NUM t_func_std__trim[] = {
  0, // locals
  -2, // parameters
  MANDATORY_PARAMETER, var_1173_0_self,
  var_is_a_whitespace_character, var_1174_0_test,
  // $s 1
  LET, 1, num_1, 1, var_1176_1_s,
  // $e length_of(self)
  var_length_of, 1, var_1173_0_self, 1, var_1177_1_e,
  // loop:
  var_loop, 1, lambda_3_loop, TAIL_CALL,
  POS(1176, 3),
  POS(1177, 3),
  POS(1178, 3)
};

static TAB_NUM t_lambda_3_loop[] = {
  3, // locals
  0, // parameters
  // e && test(self(s)):
  var_std__less, 2, var_1177_1_e, var_1176_1_s, 1, LOCAL(1),
  // e && test(self(s)):
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // e && test(self(s)):
  var_std__and, 2, LOCAL(2), lambda_81, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_82, lambda_83, TAIL_CALL,
  POS(1180, 12),
  POS(1180, 12),
  POS(1180, 12),
  POS(1179, 5)
};

static TAB_NUM t_lambda_81[] = {
  2, // locals
  0, // parameters
  // self(s)):
  var_1173_0_self, 1, var_1176_1_s, 1, LOCAL(1),
  // test(self(s)):
  var_1174_0_test, 1, LOCAL(1), 1, LOCAL(2),
  // test(self(s)):
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1180, 22),
  POS(1180, 17),
  POS(1180, 17)
};

static TAB_NUM t_lambda_82[] = {
  0, // locals
  0, // parameters
  // inc &s
  var_inc, 1, var_1176_1_s, 1, var_1176_1_s,
  // next
  var_next, 0, TAIL_CALL,
  POS(1181, 9),
  POS(1182, 9)
};

static TAB_NUM t_lambda_83[] = {
  0, // locals
  0, // parameters
  // loop:
  var_loop, 1, lambda_4_loop, TAIL_CALL,
  POS(1184, 9)
};

static TAB_NUM t_lambda_4_loop[] = {
  3, // locals
  0, // parameters
  // e >= s && test(self(e)):
  var_std__less, 2, var_1177_1_e, var_1176_1_s, 1, LOCAL(1),
  // e >= s && test(self(e)):
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // e >= s && test(self(e)):
  var_std__and, 2, LOCAL(2), lambda_84, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_85, lambda_86, TAIL_CALL,
  POS(1186, 13),
  POS(1186, 13),
  POS(1186, 13),
  POS(1185, 11)
};

static TAB_NUM t_lambda_84[] = {
  2, // locals
  0, // parameters
  // self(e)):
  var_1173_0_self, 1, var_1177_1_e, 1, LOCAL(1),
  // test(self(e)):
  var_1174_0_test, 1, LOCAL(1), 1, LOCAL(2),
  // test(self(e)):
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1186, 28),
  POS(1186, 23),
  POS(1186, 23)
};

static TAB_NUM t_lambda_85[] = {
  0, // locals
  0, // parameters
  // dec &e
  var_dec, 1, var_1177_1_e, 1, var_1177_1_e,
  // next
  var_next, 0, TAIL_CALL,
  POS(1187, 15),
  POS(1188, 15)
};

static TAB_NUM t_lambda_86[] = {
  0, // locals
  0, // parameters
  // range self s e
  var_range, 3, var_1173_0_self, var_1176_1_s, var_1177_1_e, TAIL_CALL,
  POS(1190, 15)
};

static TAB_NUM t_func_std__trim_left[] = {
  0, // locals
  -2, // parameters
  MANDATORY_PARAMETER, var_1213_0_self,
  var_is_a_whitespace_character, var_1214_0_test,
  // $s 1
  LET, 1, num_1, 1, var_1216_1_s,
  // $e length_of(self)
  var_length_of, 1, var_1213_0_self, 1, var_1217_1_e,
  // loop:
  var_loop, 1, lambda_5_loop, TAIL_CALL,
  POS(1216, 3),
  POS(1217, 3),
  POS(1218, 3)
};

static TAB_NUM t_lambda_5_loop[] = {
  3, // locals
  0, // parameters
  // e && test(self(s)):
  var_std__less, 2, var_1217_1_e, var_1216_1_s, 1, LOCAL(1),
  // e && test(self(s)):
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // e && test(self(s)):
  var_std__and, 2, LOCAL(2), lambda_87, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_88, lambda_89, TAIL_CALL,
  POS(1220, 12),
  POS(1220, 12),
  POS(1220, 12),
  POS(1219, 5)
};

static TAB_NUM t_lambda_87[] = {
  2, // locals
  0, // parameters
  // self(s)):
  var_1213_0_self, 1, var_1216_1_s, 1, LOCAL(1),
  // test(self(s)):
  var_1214_0_test, 1, LOCAL(1), 1, LOCAL(2),
  // test(self(s)):
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1220, 22),
  POS(1220, 17),
  POS(1220, 17)
};

static TAB_NUM t_lambda_88[] = {
  0, // locals
  0, // parameters
  // inc &s
  var_inc, 1, var_1216_1_s, 1, var_1216_1_s,
  // next
  var_next, 0, TAIL_CALL,
  POS(1221, 9),
  POS(1222, 9)
};

static TAB_NUM t_lambda_89[] = {
  0, // locals
  0, // parameters
  // range self s e
  var_range, 3, var_1213_0_self, var_1216_1_s, var_1217_1_e, TAIL_CALL,
  POS(1224, 9)
};

static TAB_NUM t_func_std__trim_right[] = {
  0, // locals
  -2, // parameters
  MANDATORY_PARAMETER, var_1247_0_self,
  var_is_a_whitespace_character, var_1248_0_test,
  // $e length_of(self)
  var_length_of, 1, var_1247_0_self, 1, var_1250_1_e,
  // loop:
  var_loop, 1, lambda_6_loop, TAIL_CALL,
  POS(1250, 3),
  POS(1251, 3)
};

static TAB_NUM t_lambda_6_loop[] = {
  3, // locals
  0, // parameters
  // e >= 1 && test(self(e)):
  var_std__less, 2, var_1250_1_e, num_1, 1, LOCAL(1),
  // e >= 1 && test(self(e)):
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // e >= 1 && test(self(e)):
  var_std__and, 2, LOCAL(2), lambda_90, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_91, lambda_92, TAIL_CALL,
  POS(1253, 7),
  POS(1253, 7),
  POS(1253, 7),
  POS(1252, 5)
};

static TAB_NUM t_lambda_90[] = {
  2, // locals
  0, // parameters
  // self(e)):
  var_1247_0_self, 1, var_1250_1_e, 1, LOCAL(1),
  // test(self(e)):
  var_1248_0_test, 1, LOCAL(1), 1, LOCAL(2),
  // test(self(e)):
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1253, 22),
  POS(1253, 17),
  POS(1253, 17)
};

static TAB_NUM t_lambda_91[] = {
  0, // locals
  0, // parameters
  // dec &e
  var_dec, 1, var_1250_1_e, 1, var_1250_1_e,
  // next
  var_next, 0, TAIL_CALL,
  POS(1254, 9),
  POS(1255, 9)
};

static TAB_NUM t_lambda_92[] = {
  0, // locals
  0, // parameters
  // range self 1 e
  var_range, 3, var_1247_0_self, num_1, var_1250_1_e, TAIL_CALL,
  POS(1257, 9)
};

static TAB_NUM t_func_std__normalize[] = {
  0, // locals
  1, // parameters
  var_1281_0_self,
  // $buf ""
  LET, 1, string_1, 1, var_1283_1_buf,
  // $e length_of(self)
  var_length_of, 1, var_1281_0_self, 1, var_1284_1_e,
  // $i 0
  LET, 1, num_0, 1, var_1285_1_i,
  // loop:
  var_loop, 1, lambda_7_loop, TAIL_CALL,
  POS(1283, 3),
  POS(1284, 3),
  POS(1285, 3),
  POS(1286, 3)
};

static TAB_NUM t_lambda_7_loop[] = {
  0, // locals
  0, // parameters
  // loop
  var_loop, 2, lambda_93, lambda_96, TAIL_CALL,
  POS(1287, 5)
};

static TAB_NUM t_lambda_93[] = {
  1, // locals
  0, // parameters
  // inc &i
  var_inc, 1, var_1285_1_i, 1, var_1285_1_i,
  // e
  var_std__less, 2, var_1284_1_e, var_1285_1_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_94, lambda_95, TAIL_CALL,
  POS(1289, 9),
  POS(1291, 15),
  POS(1290, 9)
};

static TAB_NUM t_lambda_94[] = {
  0, // locals
  0, // parameters
  //  buf
  LET, 1, var_1283_1_buf, TAIL_CALL,
  POS(1292, 13)
};

static TAB_NUM t_lambda_95[] = {
  2, // locals
  0, // parameters
  // self(i).is_a_whitespace_character
  var_1281_0_self, 1, var_1285_1_i, 1, LOCAL(1),
  // is_a_whitespace_character
  var_is_a_whitespace_character, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), var_next, var_break, TAIL_CALL,
  POS(1295, 15),
  POS(1295, 23),
  POS(1294, 13)
};

static TAB_NUM t_lambda_96[] = {
  1, // locals
  0, // parameters
  // is_not_empty &buf -> push(buf ' ')
  var_is_not_empty, 1, var_1283_1_buf, 1, LOCAL(1),
  // update_if buf.is_not_empty &buf -> push(buf ' ')
  var_update_if, 3, LOCAL(1), var_1283_1_buf, lambda_97, 1, var_1283_1_buf,
  // $s i
  LET, 1, var_1285_1_i, 1, var_1300_1_s,
  // loop
  var_loop, 2, lambda_98, lambda_101, TAIL_CALL,
  POS(1299, 23),
  POS(1299, 9),
  POS(1300, 9),
  POS(1301, 9)
};

static TAB_NUM t_lambda_97[] = {
  1, // locals
  0, // parameters
  // push(buf ' ')
  var_push, 2, var_1283_1_buf, chr_32, 1, LOCAL(1),
  //  push(buf ' ')
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1299, 44),
  POS(1299, 43)
};

static TAB_NUM t_lambda_98[] = {
  1, // locals
  0, // parameters
  // inc &i
  var_inc, 1, var_1285_1_i, 1, var_1285_1_i,
  // e
  var_std__less, 2, var_1284_1_e, var_1285_1_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_99, lambda_100, TAIL_CALL,
  POS(1303, 13),
  POS(1305, 19),
  POS(1304, 13)
};

static TAB_NUM t_lambda_99[] = {
  2, // locals
  0, // parameters
  // range(self s e))
  var_range, 3, var_1281_0_self, var_1300_1_s, var_1284_1_e, 1, LOCAL(1),
  // append(buf range(self s e))
  var_append, 2, var_1283_1_buf, LOCAL(1), 1, LOCAL(2),
  //  append(buf range(self s e))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1306, 29),
  POS(1306, 18),
  POS(1306, 17)
};

static TAB_NUM t_lambda_100[] = {
  2, // locals
  0, // parameters
  // self(i).is_a_whitespace_character
  var_1281_0_self, 1, var_1285_1_i, 1, LOCAL(1),
  // is_a_whitespace_character
  var_is_a_whitespace_character, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), var_break, var_next, TAIL_CALL,
  POS(1309, 19),
  POS(1309, 27),
  POS(1308, 17)
};

static TAB_NUM t_lambda_101[] = {
  2, // locals
  0, // parameters
  // i-1)
  var_std__minus, 2, var_1285_1_i, num_1, 1, LOCAL(1),
  // range(self s i-1)
  var_range, 3, var_1281_0_self, var_1300_1_s, LOCAL(1), 1, LOCAL(2),
  // append &buf range(self s i-1)
  var_append, 2, var_1283_1_buf, LOCAL(2), 1, var_1283_1_buf,
  // next
  var_next, 0, TAIL_CALL,
  POS(1313, 38),
  POS(1313, 25),
  POS(1313, 13),
  POS(1314, 13)
};

static TAB_NUM t_func_std_types__octet_string___to_base64[] = {
  0, // locals
  1, // parameters
  var_1332_0_str,
  // $base64 ""
  LET, 1, string_1, 1, var_1334_1_base64,
  // loop:
  var_loop, 1, lambda_8_loop, TAIL_CALL,
  POS(1334, 3),
  POS(1335, 3)
};

static TAB_NUM t_lambda_8_loop[] = {
  2, // locals
  0, // parameters
  // $len length_of(str)
  var_length_of, 1, var_1332_0_str, 1, var_1336_1_len,
  // len >= 3:
  var_std__less, 2, var_1336_1_len, num_3, 1, LOCAL(1),
  // len >= 3:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_102, lambda_103, TAIL_CALL,
  POS(1336, 5),
  POS(1338, 7),
  POS(1338, 7),
  POS(1337, 5)
};

static TAB_NUM t_lambda_102[] = {
  2, // locals
  0, // parameters
  // range(str 1 3))
  var_range, 3, var_1332_0_str, num_1, num_3, 1, LOCAL(1),
  // encode(range(str 1 3))
  func_encode, 1, LOCAL(1), 1, LOCAL(2),
  // append &base64 encode(range(str 1 3))
  var_append, 2, var_1334_1_base64, LOCAL(2), 1, var_1334_1_base64,
  // range &str 4 -1
  var_range, 3, var_1332_0_str, num_4, minus_num_1, 1, var_1332_0_str,
  // next
  var_next, 0, TAIL_CALL,
  POS(1339, 31),
  POS(1339, 24),
  POS(1339, 9),
  POS(1340, 9),
  POS(1341, 9)
};

static TAB_NUM t_lambda_103[] = {
  1, // locals
  0, // parameters
  // len == 0
  var_std__equal, 2, var_1336_1_len, num_0, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_104, lambda_105, TAIL_CALL,
  POS(1344, 11),
  POS(1343, 9)
};

static TAB_NUM t_lambda_104[] = {
  0, // locals
  0, // parameters
  //  base64
  LET, 1, var_1334_1_base64, TAIL_CALL,
  POS(1345, 13)
};

static TAB_NUM t_lambda_105[] = {
  2, // locals
  0, // parameters
  // 3-len)
  var_std__minus, 2, num_3, var_1336_1_len, 1, LOCAL(1),
  // dup("@0;" 3-len)
  var_dup, 2, string_7, LOCAL(1), 1, LOCAL(2),
  // append &str dup("@0;" 3-len)
  var_append, 2, var_1332_0_str, LOCAL(2), 1, var_1332_0_str,
  // encode(str)
  func_encode, 1, var_1332_0_str, 1, LOCAL(1),
  // append &base64 encode(str)
  var_append, 2, var_1334_1_base64, LOCAL(1), 1, var_1334_1_base64,
  // case len
  var_case, 5, var_1336_1_len, num_1, lambda_106, num_2, lambda_107, TAIL_CALL,
  POS(1347, 35),
  POS(1347, 25),
  POS(1347, 13),
  POS(1348, 28),
  POS(1348, 13),
  POS(1349, 13)
};

static TAB_NUM t_lambda_106[] = {
  2, // locals
  0, // parameters
  // range(base64 1 -3) "==")
  var_range, 3, var_1334_1_base64, num_1, minus_num_3, 1, LOCAL(1),
  // append(range(base64 1 -3) "==")
  var_append, 2, LOCAL(1), string_8, 1, LOCAL(2),
  //  append(range(base64 1 -3) "==")
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1350, 27),
  POS(1350, 20),
  POS(1350, 19)
};

static TAB_NUM t_lambda_107[] = {
  2, // locals
  0, // parameters
  // range(base64 1 -2) '=')
  var_range, 3, var_1334_1_base64, num_1, minus_num_2, 1, LOCAL(1),
  // push(range(base64 1 -2) '=')
  var_push, 2, LOCAL(1), chr_61, 1, LOCAL(2),
  //  push(range(base64 1 -2) '=')
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1351, 25),
  POS(1351, 20),
  POS(1351, 19)
};

static TAB_NUM t_func_encode[] = {
  10, // locals
  1, // parameters
  LOCAL(10), // 1353_10_three_octets
  // three_octets(1).to_integer << 16
  LOCAL(10), 1, num_1, 1, LOCAL(1),
  // to_integer << 16
  var_to_integer, 1, LOCAL(1), 1, LOCAL(2),
  // to_integer << 16
  var_std__shift_left, 2, LOCAL(2), num_16, 1, LOCAL(3),
  // three_octets(2).to_integer << 8
  LOCAL(10), 1, num_2, 1, LOCAL(4),
  // to_integer << 8
  var_to_integer, 1, LOCAL(4), 1, LOCAL(5),
  // to_integer << 8
  var_std__shift_left, 2, LOCAL(5), num_8, 1, LOCAL(6),
  // 
  var_std__bit_or, 2, LOCAL(3), LOCAL(6), 1, LOCAL(7),
  // three_octets(3).to_integer
  LOCAL(10), 1, num_3, 1, LOCAL(8),
  // to_integer
  var_to_integer, 1, LOCAL(8), 1, LOCAL(9),
  // $bits
  var_std__bit_or, 2, LOCAL(7), LOCAL(9), 1, var_1355_1_bits,
  // $buf ""
  LET, 1, string_1, 1, var_1360_1_buf,
  // repeat 4
  var_repeat, 3, num_4, lambda_108, lambda_114, TAIL_CALL,
  POS(1357, 9),
  POS(1357, 25),
  POS(1357, 25),
  POS(1358, 9),
  POS(1358, 25),
  POS(1358, 25),
  POS(1356, 8),
  POS(1359, 9),
  POS(1359, 25),
  POS(1355, 5),
  POS(1360, 5),
  POS(1361, 5)
};

static TAB_NUM t_lambda_108[] = {
  1, // locals
  0, // parameters
  // $value bits >> 18
  var_std__shift_right, 2, var_1355_1_bits, num_18, 1, var_1363_1_value,
  // bits & 0x3ffff) << 6
  var_std__bit_and, 2, var_1355_1_bits, num_0x3ffff, 1, LOCAL(1),
  // !bits (bits & 0x3ffff) << 6
  var_std__shift_left, 2, LOCAL(1), num_6, 1, var_1355_1_bits,
  // case value
  var_case, 11, var_1363_1_value, value_range_1366_0, lambda_109, value_range_1369_0, lambda_110, value_range_1372_0, lambda_111, num_62, lambda_112, num_63, lambda_113, TAIL_CALL,
  POS(1363, 9),
  POS(1364, 16),
  POS(1364, 9),
  POS(1365, 9)
};

static TAB_NUM t_lambda_109[] = {
  1, // locals
  0, // parameters
  // A'+value
  var_std__plus, 2, chr_65, var_1363_1_value, 1, LOCAL(1),
  // push &buf 'A'+value
  var_push, 2, var_1360_1_buf, LOCAL(1), 1, var_1360_1_buf,
  // next
  var_next, 0, TAIL_CALL,
  POS(1367, 24),
  POS(1367, 13),
  POS(1368, 13)
};

static TAB_NUM t_lambda_110[] = {
  2, // locals
  0, // parameters
  // value-26)
  var_std__minus, 2, var_1363_1_value, num_26, 1, LOCAL(1),
  // a'+(value-26)
  var_std__plus, 2, chr_97, LOCAL(1), 1, LOCAL(2),
  // push &buf 'a'+(value-26)
  var_push, 2, var_1360_1_buf, LOCAL(2), 1, var_1360_1_buf,
  // next
  var_next, 0, TAIL_CALL,
  POS(1370, 28),
  POS(1370, 24),
  POS(1370, 13),
  POS(1371, 13)
};

static TAB_NUM t_lambda_111[] = {
  2, // locals
  0, // parameters
  // value-52)
  var_std__minus, 2, var_1363_1_value, num_52, 1, LOCAL(1),
  // 0'+(value-52)
  var_std__plus, 2, chr_48, LOCAL(1), 1, LOCAL(2),
  // push &buf '0'+(value-52)
  var_push, 2, var_1360_1_buf, LOCAL(2), 1, var_1360_1_buf,
  // next
  var_next, 0, TAIL_CALL,
  POS(1373, 28),
  POS(1373, 24),
  POS(1373, 13),
  POS(1374, 13)
};

static TAB_NUM t_lambda_112[] = {
  0, // locals
  0, // parameters
  // push &buf '+'
  var_push, 2, var_1360_1_buf, chr_43, 1, var_1360_1_buf,
  // next
  var_next, 0, TAIL_CALL,
  POS(1376, 13),
  POS(1377, 13)
};

static TAB_NUM t_lambda_113[] = {
  0, // locals
  0, // parameters
  // push &buf '/'
  var_push, 2, var_1360_1_buf, chr_47, 1, var_1360_1_buf,
  // next
  var_next, 0, TAIL_CALL,
  POS(1379, 13),
  POS(1380, 13)
};

static TAB_NUM t_lambda_114[] = {
  0, // locals
  0, // parameters
  //  buf
  LET, 1, var_1360_1_buf, TAIL_CALL,
  POS(1381, 9)
};

static TAB_NUM t_func_std_types__octet_string___from_base64[] = {
  4, // locals
  1, // parameters
  var_1402_0_str,
  // $octets ""
  LET, 1, string_1, 1, var_1404_1_octets,
  // length_of(str) .mod. 4) != 0
  var_length_of, 1, var_1402_0_str, 1, LOCAL(1),
  // length_of(str) .mod. 4) != 0
  var_mod, 2, LOCAL(1), num_4, 1, LOCAL(2),
  // length_of(str) .mod. 4) != 0
  var_std__equal, 2, LOCAL(2), num_0, 1, LOCAL(3),
  // length_of(str) .mod. 4) != 0
  var_std__not, 1, LOCAL(3), 1, LOCAL(4),
  // if
  var_if, 3, LOCAL(4), lambda_115, lambda_116, TAIL_CALL,
  POS(1404, 3),
  POS(1406, 6),
  POS(1406, 6),
  POS(1406, 6),
  POS(1406, 6),
  POS(1405, 3)
};

static TAB_NUM t_lambda_115[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(1407, 7)
};

static TAB_NUM t_lambda_116[] = {
  0, // locals
  0, // parameters
  // loop:
  var_loop, 1, lambda_9_loop, TAIL_CALL,
  POS(1409, 7)
};

static TAB_NUM t_lambda_9_loop[] = {
  1, // locals
  0, // parameters
  // is_empty
  var_is_empty, 1, var_1402_0_str, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_117, lambda_118, TAIL_CALL,
  POS(1411, 15),
  POS(1410, 9)
};

static TAB_NUM t_lambda_117[] = {
  0, // locals
  0, // parameters
  //  octets
  LET, 1, var_1404_1_octets, TAIL_CALL,
  POS(1412, 13)
};

static TAB_NUM t_lambda_118[] = {
  0, // locals
  0, // parameters
  // $bits 0
  LET, 1, num_0, 1, var_1414_1_bits,
  // from_to 1 4
  var_from_to, 4, num_1, num_4, lambda_119, lambda_122, TAIL_CALL,
  POS(1414, 13),
  POS(1415, 13)
};

static TAB_NUM t_lambda_119[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 1416_3_i
  // str(i))
  var_1402_0_str, 1, LOCAL(2), 1, LOCAL(1),
  // $value decode(str(i))
  func_decode, 1, LOCAL(1), 1, var_1417_1_value,
  // is_undefined
  var_is_undefined, 1, var_1417_1_value, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_120, lambda_121, TAIL_CALL,
  POS(1417, 31),
  POS(1417, 17),
  POS(1419, 25),
  POS(1418, 17)
};

static TAB_NUM t_lambda_120[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(1420, 21)
};

static TAB_NUM t_lambda_121[] = {
  1, // locals
  0, // parameters
  // bits << 6) | value
  var_std__shift_left, 2, var_1414_1_bits, num_6, 1, LOCAL(1),
  // !bits (bits << 6) | value
  var_std__bit_or, 2, LOCAL(1), var_1417_1_value, 1, var_1414_1_bits,
  // next
  var_next, 0, TAIL_CALL,
  POS(1422, 28),
  POS(1422, 21),
  POS(1423, 21)
};

static TAB_NUM t_lambda_122[] = {
  3, // locals
  0, // parameters
  // bits >> 16)
  var_std__shift_right, 2, var_1414_1_bits, num_16, 1, LOCAL(1),
  // character(bits >> 16)
  var_character, 1, LOCAL(1), 1, LOCAL(2),
  // push &octets character(bits >> 16)
  var_push, 2, var_1404_1_octets, LOCAL(2), 1, var_1404_1_octets,
  // bits >> 8) & 0xff)
  var_std__shift_right, 2, var_1414_1_bits, num_8, 1, LOCAL(1),
  // bits >> 8) & 0xff)
  var_std__bit_and, 2, LOCAL(1), num_0xff, 1, LOCAL(2),
  // character((bits >> 8) & 0xff)
  var_character, 1, LOCAL(2), 1, LOCAL(3),
  // push &octets character((bits >> 8) & 0xff)
  var_push, 2, var_1404_1_octets, LOCAL(3), 1, var_1404_1_octets,
  // bits & 0xff)
  var_std__bit_and, 2, var_1414_1_bits, num_0xff, 1, LOCAL(1),
  // character(bits & 0xff)
  var_character, 1, LOCAL(1), 1, LOCAL(2),
  // push &octets character(bits & 0xff)
  var_push, 2, var_1404_1_octets, LOCAL(2), 1, var_1404_1_octets,
  // str(4) == '=':
  var_1402_0_str, 1, num_4, 1, LOCAL(1),
  // str(4) == '=':
  var_std__equal, 2, LOCAL(1), chr_61, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_123, lambda_126, TAIL_CALL,
  POS(1425, 40),
  POS(1425, 30),
  POS(1425, 17),
  POS(1426, 41),
  POS(1426, 41),
  POS(1426, 30),
  POS(1426, 17),
  POS(1427, 40),
  POS(1427, 30),
  POS(1427, 17),
  POS(1429, 19),
  POS(1429, 19),
  POS(1428, 17)
};

static TAB_NUM t_lambda_123[] = {
  2, // locals
  0, // parameters
  // str(3) == '='
  var_1402_0_str, 1, num_3, 1, LOCAL(1),
  // str(3) == '='
  var_std__equal, 2, LOCAL(1), chr_61, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_124, lambda_125, TAIL_CALL,
  POS(1431, 23),
  POS(1431, 23),
  POS(1430, 21)
};

static TAB_NUM t_lambda_124[] = {
  1, // locals
  0, // parameters
  // range(octets 1 -3)
  var_range, 3, var_1404_1_octets, num_1, minus_num_3, 1, LOCAL(1),
  //  range(octets 1 -3)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1432, 26),
  POS(1432, 25)
};

static TAB_NUM t_lambda_125[] = {
  1, // locals
  0, // parameters
  // range(octets 1 -2)
  var_range, 3, var_1404_1_octets, num_1, minus_num_2, 1, LOCAL(1),
  //  range(octets 1 -2)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1433, 26),
  POS(1433, 25)
};

static TAB_NUM t_lambda_126[] = {
  0, // locals
  0, // parameters
  // range &str 5 -1
  var_range, 3, var_1402_0_str, num_5, minus_num_1, 1, var_1402_0_str,
  // next
  var_next, 0, TAIL_CALL,
  POS(1435, 21),
  POS(1436, 21)
};

static TAB_NUM t_func_decode[] = {
  0, // locals
  1, // parameters
  var_1438_10_chr,
  // case chr
  var_case, 14, var_1438_10_chr, value_range_1441_1, lambda_127, value_range_1442_1, lambda_128, value_range_1443_1, lambda_129, chr_43, lambda_130, chr_47, lambda_131, chr_61, lambda_132, lambda_133, TAIL_CALL,
  POS(1440, 5)
};

static TAB_NUM t_lambda_127[] = {
  1, // locals
  0, // parameters
  // chr-'A'
  var_std__minus, 2, var_1438_10_chr, chr_65, 1, LOCAL(1),
  //  chr-'A'
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1441, 21),
  POS(1441, 20)
};

static TAB_NUM t_lambda_128[] = {
  2, // locals
  0, // parameters
  // chr-'a'+26
  var_std__minus, 2, var_1438_10_chr, chr_97, 1, LOCAL(1),
  // chr-'a'+26
  var_std__plus, 2, LOCAL(1), num_26, 1, LOCAL(2),
  //  chr-'a'+26
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1442, 21),
  POS(1442, 21),
  POS(1442, 20)
};

static TAB_NUM t_lambda_129[] = {
  2, // locals
  0, // parameters
  // chr-'0'+52
  var_std__minus, 2, var_1438_10_chr, chr_48, 1, LOCAL(1),
  // chr-'0'+52
  var_std__plus, 2, LOCAL(1), num_52, 1, LOCAL(2),
  //  chr-'0'+52
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1443, 21),
  POS(1443, 21),
  POS(1443, 20)
};

static TAB_NUM t_lambda_130[] = {
  0, // locals
  0, // parameters
  //  62
  LET, 1, num_62, TAIL_CALL,
  POS(1444, 13)
};

static TAB_NUM t_lambda_131[] = {
  0, // locals
  0, // parameters
  //  63
  LET, 1, num_63, TAIL_CALL,
  POS(1445, 13)
};

static TAB_NUM t_lambda_132[] = {
  0, // locals
  0, // parameters
  //  0
  LET, 1, num_0, TAIL_CALL,
  POS(1446, 13)
};

static TAB_NUM t_lambda_133[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(1447, 9)
};

static TAB_NUM t_func_std_types__octet_string___sha1[] = {
  4, // locals
  1, // parameters
  var_1464_0_message,
  // $h0 0x67452301
  LET, 1, num_0x67452301, 1, var_1468_1_h0,
  // $h1 0xefcdab89
  LET, 1, num_0xefcdab89, 1, var_1469_1_h1,
  // $h2 0x98badcfe
  LET, 1, num_0x98badcfe, 1, var_1470_1_h2,
  // $h3 0x10325476
  LET, 1, num_0x10325476, 1, var_1471_1_h3,
  // $h4 0xc3d2e1f0
  LET, 1, num_0xc3d2e1f0, 1, var_1472_1_h4,
  // $len length_of(message)
  var_length_of, 1, var_1464_0_message, 1, LOCAL(3),
  // push &message '@0x80;'
  var_push, 2, var_1464_0_message, chr_128, 1, var_1464_0_message,
  // len+1 .mod. 512)
  var_std__plus, 2, LOCAL(3), num_1, 1, LOCAL(1),
  // len+1 .mod. 512)
  var_mod, 2, LOCAL(1), num_512, 1, LOCAL(2),
  // $pad_len 56-(len+1 .mod. 512)
  var_std__minus, 2, num_56, LOCAL(2), 1, var_1493_1_pad_len,
  // pad_len < 0 &pad_len -> pad_len+64
  var_std__less, 2, var_1493_1_pad_len, num_0, 1, LOCAL(1),
  // update_if pad_len < 0 &pad_len -> pad_len+64
  var_update_if, 3, LOCAL(1), var_1493_1_pad_len, lambda_134, 1, var_1493_1_pad_len,
  // $pad_octets dup("@0;" pad_len)
  var_dup, 2, string_7, var_1493_1_pad_len, 1, LOCAL(4),
  // append &message pad_octets
  var_append, 2, var_1464_0_message, LOCAL(4), 1, var_1464_0_message,
  // 8*len)
  var_std__times, 2, num_8, LOCAL(3), 1, LOCAL(1),
  // big_endian_string_64(8*len)
  func_big_endian_string_64, 1, LOCAL(1), 1, LOCAL(2),
  // append &message big_endian_string_64(8*len)
  var_append, 2, var_1464_0_message, LOCAL(2), 1, var_1464_0_message,
  // loop:
  var_loop, 1, lambda_10_loop, TAIL_CALL,
  POS(1468, 3),
  POS(1469, 3),
  POS(1470, 3),
  POS(1471, 3),
  POS(1472, 3),
  POS(1491, 3),
  POS(1492, 3),
  POS(1493, 16),
  POS(1493, 16),
  POS(1493, 3),
  POS(1494, 13),
  POS(1494, 3),
  POS(1495, 3),
  POS(1496, 3),
  POS(1497, 40),
  POS(1497, 19),
  POS(1497, 3),
  POS(1501, 3)
};

static TAB_NUM t_lambda_134[] = {
  1, // locals
  0, // parameters
  // pad_len+64
  var_std__plus, 2, var_1493_1_pad_len, num_64, 1, LOCAL(1),
  //  pad_len+64
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1494, 37),
  POS(1494, 36)
};

static TAB_NUM t_lambda_10_loop[] = {
  1, // locals
  0, // parameters
  // is_empty:
  var_is_empty, 1, var_1464_0_message, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_message_is_empty, lambda_135, TAIL_CALL,
  POS(1503, 15),
  POS(1502, 5)
};

static TAB_NUM t_lambda_message_is_empty[] = {
  5, // locals
  0, // parameters
  // big_endian_string_32(h0)
  func_big_endian_string_32, 1, var_1468_1_h0, 1, LOCAL(1),
  // big_endian_string_32(h1)
  func_big_endian_string_32, 1, var_1469_1_h1, 1, LOCAL(2),
  // big_endian_string_32(h2)
  func_big_endian_string_32, 1, var_1470_1_h2, 1, LOCAL(3),
  // big_endian_string_32(h3)
  func_big_endian_string_32, 1, var_1471_1_h3, 1, LOCAL(4),
  // big_endian_string_32(h4)
  func_big_endian_string_32, 1, var_1472_1_h4, 1, LOCAL(5),
  // string
  var_string, 5, LOCAL(1), LOCAL(2), LOCAL(3), LOCAL(4), LOCAL(5), TAIL_CALL,
  POS(1505, 11),
  POS(1506, 11),
  POS(1507, 11),
  POS(1508, 11),
  POS(1509, 11),
  POS(1504, 9)
};

static TAB_NUM t_lambda_135[] = {
  0, // locals
  0, // parameters
  // $w uint32_array(80)
  var_uint32_array, 1, num_80, 1, var_1511_1_w,
  // from_to 1 16
  var_from_to, 4, num_1, num_16, lambda_136, lambda_137, TAIL_CALL,
  POS(1511, 9),
  POS(1512, 9)
};

static TAB_NUM t_lambda_136[] = {
  23, // locals
  1, // parameters
  LOCAL(23), // 1513_3_i
  // 4*i-3).to_integer << 24
  var_std__times, 2, num_4, LOCAL(23), 1, LOCAL(1),
  // 4*i-3).to_integer << 24
  var_std__minus, 2, LOCAL(1), num_3, 1, LOCAL(2),
  // message(4*i-3).to_integer << 24
  var_1464_0_message, 1, LOCAL(2), 1, LOCAL(3),
  // to_integer << 24
  var_to_integer, 1, LOCAL(3), 1, LOCAL(4),
  // to_integer << 24
  var_std__shift_left, 2, LOCAL(4), num_24, 1, LOCAL(5),
  // 4*i-2).to_integer << 16
  var_std__times, 2, num_4, LOCAL(23), 1, LOCAL(6),
  // 4*i-2).to_integer << 16
  var_std__minus, 2, LOCAL(6), num_2, 1, LOCAL(7),
  // message(4*i-2).to_integer << 16
  var_1464_0_message, 1, LOCAL(7), 1, LOCAL(8),
  // to_integer << 16
  var_to_integer, 1, LOCAL(8), 1, LOCAL(9),
  // to_integer << 16
  var_std__shift_left, 2, LOCAL(9), num_16, 1, LOCAL(10),
  // 
  var_std__bit_or, 2, LOCAL(5), LOCAL(10), 1, LOCAL(11),
  // 4*i-1).to_integer << 8
  var_std__times, 2, num_4, LOCAL(23), 1, LOCAL(12),
  // 4*i-1).to_integer << 8
  var_std__minus, 2, LOCAL(12), num_1, 1, LOCAL(13),
  // message(4*i-1).to_integer << 8
  var_1464_0_message, 1, LOCAL(13), 1, LOCAL(14),
  // to_integer << 8
  var_to_integer, 1, LOCAL(14), 1, LOCAL(15),
  // to_integer << 8
  var_std__shift_left, 2, LOCAL(15), num_8, 1, LOCAL(16),
  // 
  var_std__bit_or, 2, LOCAL(11), LOCAL(16), 1, LOCAL(17),
  // 4*i).to_integer
  var_std__times, 2, num_4, LOCAL(23), 1, LOCAL(18),
  // message(4*i).to_integer
  var_1464_0_message, 1, LOCAL(18), 1, LOCAL(19),
  // to_integer
  var_to_integer, 1, LOCAL(19), 1, LOCAL(20),
  // !w(i)
  var_std__bit_or, 2, LOCAL(17), LOCAL(20), 1, LOCAL(22),
  // w(i)
  var_1511_1_w, 2, LOCAL(23), LOCAL(22), 1, var_1511_1_w,
  // next
  var_next, 0, TAIL_CALL,
  POS(1516, 25),
  POS(1516, 25),
  POS(1516, 17),
  POS(1516, 32),
  POS(1516, 32),
  POS(1517, 25),
  POS(1517, 25),
  POS(1517, 17),
  POS(1517, 32),
  POS(1517, 32),
  POS(1515, 16),
  POS(1518, 25),
  POS(1518, 25),
  POS(1518, 17),
  POS(1518, 32),
  POS(1518, 32),
  POS(1515, 16),
  POS(1519, 25),
  POS(1519, 17),
  POS(1519, 30),
  POS(1514, 13),
  POS(1514, 14),
  POS(1520, 13)
};

static TAB_NUM t_lambda_137[] = {
  0, // locals
  0, // parameters
  // from_to 17 80
  var_from_to, 4, num_17, num_80, lambda_138, func_main_loop, TAIL_CALL,
  POS(1522, 13)
};

static TAB_NUM t_lambda_138[] = {
  14, // locals
  1, // parameters
  LOCAL(14), // 1523_3_i
  // i-3) ^ w(i-8) ^ w(i-14) ^ w(i-16) .rol32. 1
  var_std__minus, 2, LOCAL(14), num_3, 1, LOCAL(1),
  // w(i-3) ^ w(i-8) ^ w(i-14) ^ w(i-16) .rol32. 1
  var_1511_1_w, 1, LOCAL(1), 1, LOCAL(2),
  // i-8) ^ w(i-14) ^ w(i-16) .rol32. 1
  var_std__minus, 2, LOCAL(14), num_8, 1, LOCAL(3),
  // w(i-8) ^ w(i-14) ^ w(i-16) .rol32. 1
  var_1511_1_w, 1, LOCAL(3), 1, LOCAL(4),
  // w(i-3) ^ w(i-8) ^ w(i-14) ^ w(i-16) .rol32. 1
  var_std__bit_xor, 2, LOCAL(2), LOCAL(4), 1, LOCAL(5),
  // i-14) ^ w(i-16) .rol32. 1
  var_std__minus, 2, LOCAL(14), num_14, 1, LOCAL(6),
  // w(i-14) ^ w(i-16) .rol32. 1
  var_1511_1_w, 1, LOCAL(6), 1, LOCAL(7),
  // w(i-3) ^ w(i-8) ^ w(i-14) ^ w(i-16) .rol32. 1
  var_std__bit_xor, 2, LOCAL(5), LOCAL(7), 1, LOCAL(8),
  // i-16) .rol32. 1
  var_std__minus, 2, LOCAL(14), num_16, 1, LOCAL(9),
  // w(i-16) .rol32. 1
  var_1511_1_w, 1, LOCAL(9), 1, LOCAL(10),
  // w(i-3) ^ w(i-8) ^ w(i-14) ^ w(i-16) .rol32. 1
  var_std__bit_xor, 2, LOCAL(8), LOCAL(10), 1, LOCAL(11),
  // !w(i) w(i-3) ^ w(i-8) ^ w(i-14) ^ w(i-16) .rol32. 1
  func_rol32, 2, LOCAL(11), num_1, 1, LOCAL(13),
  // w(i) w(i-3) ^ w(i-8) ^ w(i-14) ^ w(i-16) .rol32. 1
  var_1511_1_w, 2, LOCAL(14), LOCAL(13), 1, var_1511_1_w,
  // next
  var_next, 0, TAIL_CALL,
  POS(1524, 25),
  POS(1524, 23),
  POS(1524, 34),
  POS(1524, 32),
  POS(1524, 23),
  POS(1524, 43),
  POS(1524, 41),
  POS(1524, 23),
  POS(1524, 53),
  POS(1524, 51),
  POS(1524, 23),
  POS(1524, 17),
  POS(1524, 18),
  POS(1525, 17)
};

static TAB_NUM t_func_main_loop[] = {
  0, // locals
  0, // parameters
  // $a h0
  LET, 1, var_1468_1_h0, 1, var_1529_1_a,
  // $b h1
  LET, 1, var_1469_1_h1, 1, var_1530_1_b,
  // $c h2
  LET, 1, var_1470_1_h2, 1, var_1531_1_c,
  // $d h3
  LET, 1, var_1471_1_h3, 1, var_1532_1_d,
  // $e h4
  LET, 1, var_1472_1_h4, 1, var_1533_1_e,
  // from_to 1 80
  var_from_to, 4, num_1, num_80, lambda_139, lambda_148, TAIL_CALL,
  POS(1529, 11),
  POS(1530, 11),
  POS(1531, 11),
  POS(1532, 11),
  POS(1533, 11),
  POS(1534, 11)
};

static TAB_NUM t_lambda_139[] = {
  0, // locals
  1, // parameters
  var_1535_3_i,
  // cond
  var_cond, 4, lambda_140, lambda_142, lambda_144, lambda_146, TAIL_CALL,
  POS(1536, 15)
};

static TAB_NUM t_lambda_140[] = {
  2, // locals
  0, // parameters
  // 20: compute (b & c) | ((b ^ 0xffffffff) & d) k0
  var_std__less, 2, num_20, var_1535_3_i, 1, LOCAL(1),
  // 20: compute (b & c) | ((b ^ 0xffffffff) & d) k0
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  //  i <= 20: compute (b & c) | ((b ^ 0xffffffff) & d) k0
  LET, 2, LOCAL(2), lambda_141, TAIL_CALL,
  POS(1537, 25),
  POS(1537, 25),
  POS(1537, 19)
};

static TAB_NUM t_lambda_141[] = {
  4, // locals
  0, // parameters
  // b & c) | ((b ^ 0xffffffff) & d) k0
  var_std__bit_and, 2, var_1530_1_b, var_1531_1_c, 1, LOCAL(1),
  // b ^ 0xffffffff) & d) k0
  var_std__bit_xor, 2, var_1530_1_b, num_0xffffffff, 1, LOCAL(2),
  // b ^ 0xffffffff) & d) k0
  var_std__bit_and, 2, LOCAL(2), var_1532_1_d, 1, LOCAL(3),
  // b & c) | ((b ^ 0xffffffff) & d) k0
  var_std__bit_or, 2, LOCAL(1), LOCAL(3), 1, LOCAL(4),
  // compute (b & c) | ((b ^ 0xffffffff) & d) k0
  func_compute, 2, LOCAL(4), num_0x5a827999, TAIL_CALL,
  POS(1537, 38),
  POS(1537, 49),
  POS(1537, 49),
  POS(1537, 38),
  POS(1537, 29)
};

static TAB_NUM t_lambda_142[] = {
  2, // locals
  0, // parameters
  // 40: compute (b ^ c ^ d) k1
  var_std__less, 2, num_40, var_1535_3_i, 1, LOCAL(1),
  // 40: compute (b ^ c ^ d) k1
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  //  i <= 40: compute (b ^ c ^ d) k1
  LET, 2, LOCAL(2), lambda_143, TAIL_CALL,
  POS(1538, 25),
  POS(1538, 25),
  POS(1538, 19)
};

static TAB_NUM t_lambda_143[] = {
  2, // locals
  0, // parameters
  // b ^ c ^ d) k1
  var_std__bit_xor, 2, var_1530_1_b, var_1531_1_c, 1, LOCAL(1),
  // b ^ c ^ d) k1
  var_std__bit_xor, 2, LOCAL(1), var_1532_1_d, 1, LOCAL(2),
  // compute (b ^ c ^ d) k1
  func_compute, 2, LOCAL(2), num_0x6ed9eba1, TAIL_CALL,
  POS(1538, 38),
  POS(1538, 38),
  POS(1538, 29)
};

static TAB_NUM t_lambda_144[] = {
  2, // locals
  0, // parameters
  // 60: compute (b & c) | (b & d) | (c & d) k2
  var_std__less, 2, num_60, var_1535_3_i, 1, LOCAL(1),
  // 60: compute (b & c) | (b & d) | (c & d) k2
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  //  i <= 60: compute (b & c) | (b & d) | (c & d) k2
  LET, 2, LOCAL(2), lambda_145, TAIL_CALL,
  POS(1539, 25),
  POS(1539, 25),
  POS(1539, 19)
};

static TAB_NUM t_lambda_145[] = {
  5, // locals
  0, // parameters
  // b & c) | (b & d) | (c & d) k2
  var_std__bit_and, 2, var_1530_1_b, var_1531_1_c, 1, LOCAL(1),
  // b & d) | (c & d) k2
  var_std__bit_and, 2, var_1530_1_b, var_1532_1_d, 1, LOCAL(2),
  // b & c) | (b & d) | (c & d) k2
  var_std__bit_or, 2, LOCAL(1), LOCAL(2), 1, LOCAL(3),
  // c & d) k2
  var_std__bit_and, 2, var_1531_1_c, var_1532_1_d, 1, LOCAL(4),
  // b & c) | (b & d) | (c & d) k2
  var_std__bit_or, 2, LOCAL(3), LOCAL(4), 1, LOCAL(5),
  // compute (b & c) | (b & d) | (c & d) k2
  func_compute, 2, LOCAL(5), num_0x8f1bbcdc, TAIL_CALL,
  POS(1539, 38),
  POS(1539, 48),
  POS(1539, 38),
  POS(1539, 58),
  POS(1539, 38),
  POS(1539, 29)
};

static TAB_NUM t_lambda_146[] = {
  0, // locals
  0, // parameters
  //  true: compute (b ^ c ^ d) k3
  LET, 2, var_true, lambda_147, TAIL_CALL,
  POS(1540, 19)
};

static TAB_NUM t_lambda_147[] = {
  2, // locals
  0, // parameters
  // b ^ c ^ d) k3
  var_std__bit_xor, 2, var_1530_1_b, var_1531_1_c, 1, LOCAL(1),
  // b ^ c ^ d) k3
  var_std__bit_xor, 2, LOCAL(1), var_1532_1_d, 1, LOCAL(2),
  // compute (b ^ c ^ d) k3
  func_compute, 2, LOCAL(2), num_0xca62c1d6, TAIL_CALL,
  POS(1540, 35),
  POS(1540, 35),
  POS(1540, 26)
};

static TAB_NUM t_func_compute[] = {
  9, // locals
  2, // parameters
  LOCAL(7), // 1542_11_f
  LOCAL(8), // 1542_13_k
  // a .rol32. 5) + f + e + k + w(i)) & 0xffffffff
  func_rol32, 2, var_1529_1_a, num_5, 1, LOCAL(1),
  // a .rol32. 5) + f + e + k + w(i)) & 0xffffffff
  var_std__plus, 2, LOCAL(1), LOCAL(7), 1, LOCAL(2),
  // a .rol32. 5) + f + e + k + w(i)) & 0xffffffff
  var_std__plus, 2, LOCAL(2), var_1533_1_e, 1, LOCAL(3),
  // a .rol32. 5) + f + e + k + w(i)) & 0xffffffff
  var_std__plus, 2, LOCAL(3), LOCAL(8), 1, LOCAL(4),
  // w(i)) & 0xffffffff
  var_1511_1_w, 1, var_1535_3_i, 1, LOCAL(5),
  // a .rol32. 5) + f + e + k + w(i)) & 0xffffffff
  var_std__plus, 2, LOCAL(4), LOCAL(5), 1, LOCAL(6),
  // $t ((a .rol32. 5) + f + e + k + w(i)) & 0xffffffff
  var_std__bit_and, 2, LOCAL(6), num_0xffffffff, 1, LOCAL(9),
  // !e d
  LET, 1, var_1532_1_d, 1, var_1533_1_e,
  // !d c
  LET, 1, var_1531_1_c, 1, var_1532_1_d,
  // !c b .rol32. 30
  func_rol32, 2, var_1530_1_b, num_30, 1, var_1531_1_c,
  // !b a
  LET, 1, var_1529_1_a, 1, var_1530_1_b,
  // !a t
  LET, 1, LOCAL(9), 1, var_1529_1_a,
  // next
  var_next, 0, TAIL_CALL,
  POS(1543, 22),
  POS(1543, 22),
  POS(1543, 22),
  POS(1543, 22),
  POS(1543, 49),
  POS(1543, 22),
  POS(1543, 17),
  POS(1544, 17),
  POS(1545, 17),
  POS(1546, 17),
  POS(1547, 17),
  POS(1548, 17),
  POS(1549, 17)
};

static TAB_NUM t_lambda_148[] = {
  1, // locals
  0, // parameters
  // h0+a) & 0xffffffff
  var_std__plus, 2, var_1468_1_h0, var_1529_1_a, 1, LOCAL(1),
  // !h0 (h0+a) & 0xffffffff
  var_std__bit_and, 2, LOCAL(1), num_0xffffffff, 1, var_1468_1_h0,
  // h1+b) & 0xffffffff
  var_std__plus, 2, var_1469_1_h1, var_1530_1_b, 1, LOCAL(1),
  // !h1 (h1+b) & 0xffffffff
  var_std__bit_and, 2, LOCAL(1), num_0xffffffff, 1, var_1469_1_h1,
  // h2+c) & 0xffffffff
  var_std__plus, 2, var_1470_1_h2, var_1531_1_c, 1, LOCAL(1),
  // !h2 (h2+c) & 0xffffffff
  var_std__bit_and, 2, LOCAL(1), num_0xffffffff, 1, var_1470_1_h2,
  // h3+d) & 0xffffffff
  var_std__plus, 2, var_1471_1_h3, var_1532_1_d, 1, LOCAL(1),
  // !h3 (h3+d) & 0xffffffff
  var_std__bit_and, 2, LOCAL(1), num_0xffffffff, 1, var_1471_1_h3,
  // h4+e) & 0xffffffff
  var_std__plus, 2, var_1472_1_h4, var_1533_1_e, 1, LOCAL(1),
  // !h4 (h4+e) & 0xffffffff
  var_std__bit_and, 2, LOCAL(1), num_0xffffffff, 1, var_1472_1_h4,
  // range &message 65 -1
  var_range, 3, var_1464_0_message, num_65, minus_num_1, 1, var_1464_0_message,
  // next
  var_next, 0, TAIL_CALL,
  POS(1551, 20),
  POS(1551, 15),
  POS(1552, 20),
  POS(1552, 15),
  POS(1553, 20),
  POS(1553, 15),
  POS(1554, 20),
  POS(1554, 15),
  POS(1555, 20),
  POS(1555, 15),
  POS(1556, 15),
  POS(1557, 15)
};

static TAB_NUM t_func_big_endian_string_64[] = {
  23, // locals
  1, // parameters
  LOCAL(23), // 1559_24_n
  // n >> 56)
  var_std__shift_right, 2, LOCAL(23), num_56, 1, LOCAL(1),
  // character(n >> 56)
  var_character, 1, LOCAL(1), 1, LOCAL(2),
  // n >> 48) & 0xff)
  var_std__shift_right, 2, LOCAL(23), num_48, 1, LOCAL(3),
  // n >> 48) & 0xff)
  var_std__bit_and, 2, LOCAL(3), num_0xff, 1, LOCAL(4),
  // character((n >> 48) & 0xff)
  var_character, 1, LOCAL(4), 1, LOCAL(5),
  // n >> 40) & 0xff)
  var_std__shift_right, 2, LOCAL(23), num_40, 1, LOCAL(6),
  // n >> 40) & 0xff)
  var_std__bit_and, 2, LOCAL(6), num_0xff, 1, LOCAL(7),
  // character((n >> 40) & 0xff)
  var_character, 1, LOCAL(7), 1, LOCAL(8),
  // n >> 32) & 0xff)
  var_std__shift_right, 2, LOCAL(23), num_32, 1, LOCAL(9),
  // n >> 32) & 0xff)
  var_std__bit_and, 2, LOCAL(9), num_0xff, 1, LOCAL(10),
  // character((n >> 32) & 0xff)
  var_character, 1, LOCAL(10), 1, LOCAL(11),
  // n >> 24) & 0xff)
  var_std__shift_right, 2, LOCAL(23), num_24, 1, LOCAL(12),
  // n >> 24) & 0xff)
  var_std__bit_and, 2, LOCAL(12), num_0xff, 1, LOCAL(13),
  // character((n >> 24) & 0xff)
  var_character, 1, LOCAL(13), 1, LOCAL(14),
  // n >> 16) & 0xff)
  var_std__shift_right, 2, LOCAL(23), num_16, 1, LOCAL(15),
  // n >> 16) & 0xff)
  var_std__bit_and, 2, LOCAL(15), num_0xff, 1, LOCAL(16),
  // character((n >> 16) & 0xff)
  var_character, 1, LOCAL(16), 1, LOCAL(17),
  // n >> 8) & 0xff)
  var_std__shift_right, 2, LOCAL(23), num_8, 1, LOCAL(18),
  // n >> 8) & 0xff)
  var_std__bit_and, 2, LOCAL(18), num_0xff, 1, LOCAL(19),
  // character((n >> 8) & 0xff)
  var_character, 1, LOCAL(19), 1, LOCAL(20),
  // n & 0xff)
  var_std__bit_and, 2, LOCAL(23), num_0xff, 1, LOCAL(21),
  // character(n & 0xff)
  var_character, 1, LOCAL(21), 1, LOCAL(22),
  // string
  var_string, 8, LOCAL(2), LOCAL(5), LOCAL(8), LOCAL(11), LOCAL(14), LOCAL(17), LOCAL(20), LOCAL(22), TAIL_CALL,
  POS(1562, 17),
  POS(1562, 7),
  POS(1563, 18),
  POS(1563, 18),
  POS(1563, 7),
  POS(1564, 18),
  POS(1564, 18),
  POS(1564, 7),
  POS(1565, 18),
  POS(1565, 18),
  POS(1565, 7),
  POS(1566, 18),
  POS(1566, 18),
  POS(1566, 7),
  POS(1567, 18),
  POS(1567, 18),
  POS(1567, 7),
  POS(1568, 18),
  POS(1568, 18),
  POS(1568, 7),
  POS(1569, 17),
  POS(1569, 7),
  POS(1561, 5)
};

static TAB_NUM t_func_big_endian_string_32[] = {
  11, // locals
  1, // parameters
  LOCAL(11), // 1571_24_n
  // n >> 24)
  var_std__shift_right, 2, LOCAL(11), num_24, 1, LOCAL(1),
  // character(n >> 24)
  var_character, 1, LOCAL(1), 1, LOCAL(2),
  // n >> 16) & 0xff)
  var_std__shift_right, 2, LOCAL(11), num_16, 1, LOCAL(3),
  // n >> 16) & 0xff)
  var_std__bit_and, 2, LOCAL(3), num_0xff, 1, LOCAL(4),
  // character((n >> 16) & 0xff)
  var_character, 1, LOCAL(4), 1, LOCAL(5),
  // n >> 8) & 0xff)
  var_std__shift_right, 2, LOCAL(11), num_8, 1, LOCAL(6),
  // n >> 8) & 0xff)
  var_std__bit_and, 2, LOCAL(6), num_0xff, 1, LOCAL(7),
  // character((n >> 8) & 0xff)
  var_character, 1, LOCAL(7), 1, LOCAL(8),
  // n & 0xff)
  var_std__bit_and, 2, LOCAL(11), num_0xff, 1, LOCAL(9),
  // character(n & 0xff)
  var_character, 1, LOCAL(9), 1, LOCAL(10),
  // string
  var_string, 4, LOCAL(2), LOCAL(5), LOCAL(8), LOCAL(10), TAIL_CALL,
  POS(1574, 17),
  POS(1574, 7),
  POS(1575, 18),
  POS(1575, 18),
  POS(1575, 7),
  POS(1576, 18),
  POS(1576, 18),
  POS(1576, 7),
  POS(1577, 17),
  POS(1577, 7),
  POS(1573, 5)
};

static TAB_NUM t_func_rol32[] = {
  7, // locals
  2, // parameters
  LOCAL(6), // 1579_9_n
  LOCAL(7), // 1579_11_k
  // n << k) & 0xffffffff) | (n >> (32-k))
  var_std__shift_left, 2, LOCAL(6), LOCAL(7), 1, LOCAL(1),
  // n << k) & 0xffffffff) | (n >> (32-k))
  var_std__bit_and, 2, LOCAL(1), num_0xffffffff, 1, LOCAL(2),
  // 32-k))
  var_std__minus, 2, num_32, LOCAL(7), 1, LOCAL(3),
  // n >> (32-k))
  var_std__shift_right, 2, LOCAL(6), LOCAL(3), 1, LOCAL(4),
  // n << k) & 0xffffffff) | (n >> (32-k))
  var_std__bit_or, 2, LOCAL(2), LOCAL(4), 1, LOCAL(5),
  // -> ((n << k) & 0xffffffff) | (n >> (32-k))
  LET, 1, LOCAL(5), TAIL_CALL,
  POS(1579, 22),
  POS(1579, 22),
  POS(1579, 53),
  POS(1579, 47),
  POS(1579, 22),
  POS(1579, 17)
};

static TAB_NUM t_func_std__parse_integer[] = {
  0, // locals
  1, // parameters
  var_1608_0_self,
  // $orig self
  LET, 1, var_1608_0_self, 1, var_1628_1_orig,
  // $negate self .has_prefix. '-'
  var_has_prefix, 2, var_1608_0_self, chr_45, 1, var_1629_1_negate,
  // !self
  var_if, 3, var_1629_1_negate, lambda_155, lambda_156, 1, var_1608_0_self,
  // $value 0
  LET, 1, num_0, 1, var_1635_1_value,
  // cond
  var_cond, 4, lambda_157, lambda_162, lambda_167, lambda_172, TAIL_CALL,
  POS(1628, 3),
  POS(1629, 3),
  POS(1630, 3),
  POS(1635, 3),
  POS(1636, 3)
};

static TAB_NUM t_func_maybe_negated[] = {
  0, // locals
  0, // parameters
  // if
  var_if, 3, var_1629_1_negate, lambda_149, lambda_150, TAIL_CALL,
  POS(1611, 5)
};

static TAB_NUM t_lambda_149[] = {
  1, // locals
  0, // parameters
  // value
  var_std__negate, 1, var_1635_1_value, 1, LOCAL(1),
  //  -value
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1613, 11),
  POS(1613, 9)
};

static TAB_NUM t_lambda_150[] = {
  0, // locals
  0, // parameters
  //  value
  LET, 1, var_1635_1_value, TAIL_CALL,
  POS(1614, 9)
};

static TAB_NUM t_func_partial_match[] = {
  1, // locals
  1, // parameters
  var_1616_17_idx,
  // 1
  var_std__less, 2, num_1, var_1616_17_idx, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_151, lambda_152, TAIL_CALL,
  POS(1618, 13),
  POS(1617, 5)
};

static TAB_NUM t_lambda_151[] = {
  2, // locals
  0, // parameters
  // range(self idx -1) maybe_negated()
  var_range, 3, var_1608_0_self, var_1616_17_idx, minus_num_1, 1, LOCAL(1),
  // maybe_negated()
  func_maybe_negated, 0, 1, LOCAL(2),
  //  range(self idx -1) maybe_negated()
  LET, 2, LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(1619, 10),
  POS(1619, 29),
  POS(1619, 9)
};

static TAB_NUM t_lambda_152[] = {
  0, // locals
  0, // parameters
  //  orig undefined
  LET, 2, var_1628_1_orig, var_undefined, TAIL_CALL,
  POS(1620, 9)
};

static TAB_NUM t_func_exhausted[] = {
  1, // locals
  0, // parameters
  // is_empty
  var_is_empty, 1, var_1608_0_self, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_153, lambda_154, TAIL_CALL,
  POS(1624, 12),
  POS(1623, 5)
};

static TAB_NUM t_lambda_153[] = {
  0, // locals
  0, // parameters
  //  orig undefined
  LET, 2, var_1628_1_orig, var_undefined, TAIL_CALL,
  POS(1625, 9)
};

static TAB_NUM t_lambda_154[] = {
  1, // locals
  0, // parameters
  // maybe_negated()
  func_maybe_negated, 0, 1, LOCAL(1),
  //  "" maybe_negated()
  LET, 2, string_1, LOCAL(1), TAIL_CALL,
  POS(1626, 13),
  POS(1626, 9)
};

static TAB_NUM t_lambda_155[] = {
  1, // locals
  0, // parameters
  // range(self 2 -1)
  var_range, 3, var_1608_0_self, num_2, minus_num_1, 1, LOCAL(1),
  //  range(self 2 -1)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1633, 10),
  POS(1633, 9)
};

static TAB_NUM t_lambda_156[] = {
  0, // locals
  0, // parameters
  //  self
  LET, 1, var_1608_0_self, TAIL_CALL,
  POS(1634, 9)
};

static TAB_NUM t_lambda_157[] = {
  1, // locals
  0, // parameters
  // self .has_prefix. "0b":
  var_has_prefix, 2, var_1608_0_self, str_0b, 1, LOCAL(1),
  //  self .has_prefix. "0b":
  LET, 2, LOCAL(1), lambda_158, TAIL_CALL,
  POS(1637, 8),
  POS(1637, 7)
};

static TAB_NUM t_lambda_158[] = {
  0, // locals
  0, // parameters
  // range &self 3 -1
  var_range, 3, var_1608_0_self, num_3, minus_num_1, 1, var_1608_0_self,
  // for_each self
  var_for_each, 3, var_1608_0_self, lambda_159, func_exhausted, TAIL_CALL,
  POS(1638, 7),
  POS(1639, 7)
};

static TAB_NUM t_lambda_159[] = {
  0, // locals
  2, // parameters
  var_1640_3_idx,
  var_1640_7_chr,
  // case
  var_case, 4, var_1640_7_chr, value_range_1643_1, lambda_160, lambda_161, TAIL_CALL,
  POS(1641, 11)
};

static TAB_NUM t_lambda_160[] = {
  2, // locals
  0, // parameters
  // value << 1)+(chr-'0')
  var_std__shift_left, 2, var_1635_1_value, num_1, 1, LOCAL(1),
  // chr-'0')
  var_std__minus, 2, var_1640_7_chr, chr_48, 1, LOCAL(2),
  // !value (value << 1)+(chr-'0')
  var_std__plus, 2, LOCAL(1), LOCAL(2), 1, var_1635_1_value,
  // next
  var_next, 0, TAIL_CALL,
  POS(1644, 23),
  POS(1644, 36),
  POS(1644, 15),
  POS(1645, 15)
};

static TAB_NUM t_lambda_161[] = {
  0, // locals
  0, // parameters
  // partial_match idx
  func_partial_match, 1, var_1640_3_idx, TAIL_CALL,
  POS(1647, 15)
};

static TAB_NUM t_lambda_162[] = {
  1, // locals
  0, // parameters
  // self .has_prefix. "0o":
  var_has_prefix, 2, var_1608_0_self, str_0o, 1, LOCAL(1),
  //  self .has_prefix. "0o":
  LET, 2, LOCAL(1), lambda_163, TAIL_CALL,
  POS(1649, 8),
  POS(1649, 7)
};

static TAB_NUM t_lambda_163[] = {
  0, // locals
  0, // parameters
  // range &self 3 -1
  var_range, 3, var_1608_0_self, num_3, minus_num_1, 1, var_1608_0_self,
  // for_each self
  var_for_each, 3, var_1608_0_self, lambda_164, func_exhausted, TAIL_CALL,
  POS(1650, 7),
  POS(1651, 7)
};

static TAB_NUM t_lambda_164[] = {
  0, // locals
  2, // parameters
  var_1652_3_idx,
  var_1652_7_chr,
  // case chr
  var_case, 4, var_1652_7_chr, value_range_1654_1, lambda_165, lambda_166, TAIL_CALL,
  POS(1653, 11)
};

static TAB_NUM t_lambda_165[] = {
  2, // locals
  0, // parameters
  // value << 3)+(chr-'0')
  var_std__shift_left, 2, var_1635_1_value, num_3, 1, LOCAL(1),
  // chr-'0')
  var_std__minus, 2, var_1652_7_chr, chr_48, 1, LOCAL(2),
  // !value (value << 3)+(chr-'0')
  var_std__plus, 2, LOCAL(1), LOCAL(2), 1, var_1635_1_value,
  // next
  var_next, 0, TAIL_CALL,
  POS(1655, 23),
  POS(1655, 36),
  POS(1655, 15),
  POS(1656, 15)
};

static TAB_NUM t_lambda_166[] = {
  0, // locals
  0, // parameters
  // partial_match idx
  func_partial_match, 1, var_1652_3_idx, TAIL_CALL,
  POS(1658, 15)
};

static TAB_NUM t_lambda_167[] = {
  1, // locals
  0, // parameters
  // self .has_prefix. "0x":
  var_has_prefix, 2, var_1608_0_self, str_0x, 1, LOCAL(1),
  //  self .has_prefix. "0x":
  LET, 2, LOCAL(1), lambda_168, TAIL_CALL,
  POS(1660, 8),
  POS(1660, 7)
};

static TAB_NUM t_lambda_168[] = {
  0, // locals
  0, // parameters
  // range &self 3 -1
  var_range, 3, var_1608_0_self, num_3, minus_num_1, 1, var_1608_0_self,
  // for_each self
  var_for_each, 3, var_1608_0_self, lambda_169, func_exhausted, TAIL_CALL,
  POS(1661, 7),
  POS(1662, 7)
};

static TAB_NUM t_lambda_169[] = {
  0, // locals
  2, // parameters
  var_1663_3_idx,
  var_1663_7_chr,
  // case chr
  var_case, 8, var_1663_7_chr, value_range_1443_1, lambda_170, value_range_1668_1, lambda_a__f, value_range_1671_1, lambda_A__F, lambda_171, TAIL_CALL,
  POS(1664, 11)
};

static TAB_NUM t_lambda_170[] = {
  2, // locals
  0, // parameters
  // value << 4)+(chr-'0')
  var_std__shift_left, 2, var_1635_1_value, num_4, 1, LOCAL(1),
  // chr-'0')
  var_std__minus, 2, var_1663_7_chr, chr_48, 1, LOCAL(2),
  // !value (value << 4)+(chr-'0')
  var_std__plus, 2, LOCAL(1), LOCAL(2), 1, var_1635_1_value,
  // next
  var_next, 0, TAIL_CALL,
  POS(1666, 23),
  POS(1666, 36),
  POS(1666, 15),
  POS(1667, 15)
};

static TAB_NUM t_lambda_a__f[] = {
  3, // locals
  0, // parameters
  // value << 4)+(chr-'a')+10
  var_std__shift_left, 2, var_1635_1_value, num_4, 1, LOCAL(1),
  // chr-'a')+10
  var_std__minus, 2, var_1663_7_chr, chr_97, 1, LOCAL(2),
  // value << 4)+(chr-'a')+10
  var_std__plus, 2, LOCAL(1), LOCAL(2), 1, LOCAL(3),
  // !value (value << 4)+(chr-'a')+10
  var_std__plus, 2, LOCAL(3), num_10, 1, var_1635_1_value,
  // next
  var_next, 0, TAIL_CALL,
  POS(1669, 23),
  POS(1669, 36),
  POS(1669, 23),
  POS(1669, 15),
  POS(1670, 15)
};

static TAB_NUM t_lambda_A__F[] = {
  3, // locals
  0, // parameters
  // value << 4)+(chr-'A')+10
  var_std__shift_left, 2, var_1635_1_value, num_4, 1, LOCAL(1),
  // chr-'A')+10
  var_std__minus, 2, var_1663_7_chr, chr_65, 1, LOCAL(2),
  // value << 4)+(chr-'A')+10
  var_std__plus, 2, LOCAL(1), LOCAL(2), 1, LOCAL(3),
  // !value (value << 4)+(chr-'A')+10
  var_std__plus, 2, LOCAL(3), num_10, 1, var_1635_1_value,
  // next
  var_next, 0, TAIL_CALL,
  POS(1672, 23),
  POS(1672, 36),
  POS(1672, 23),
  POS(1672, 15),
  POS(1673, 15)
};

static TAB_NUM t_lambda_171[] = {
  0, // locals
  0, // parameters
  // partial_match idx
  func_partial_match, 1, var_1663_3_idx, TAIL_CALL,
  POS(1675, 15)
};

static TAB_NUM t_lambda_172[] = {
  0, // locals
  0, // parameters
  //  true:
  LET, 2, var_true, lambda_173, TAIL_CALL,
  POS(1677, 7)
};

static TAB_NUM t_lambda_173[] = {
  0, // locals
  0, // parameters
  // for_each self
  var_for_each, 3, var_1608_0_self, lambda_174, func_exhausted, TAIL_CALL,
  POS(1678, 7)
};

static TAB_NUM t_lambda_174[] = {
  0, // locals
  2, // parameters
  var_1679_3_idx,
  var_1679_7_chr,
  // case chr
  var_case, 4, var_1679_7_chr, value_range_1443_1, lambda_175, lambda_176, TAIL_CALL,
  POS(1680, 11)
};

static TAB_NUM t_lambda_175[] = {
  2, // locals
  0, // parameters
  // 10*value+(chr-'0')
  var_std__times, 2, num_10, var_1635_1_value, 1, LOCAL(1),
  // chr-'0')
  var_std__minus, 2, var_1679_7_chr, chr_48, 1, LOCAL(2),
  // !value 10*value+(chr-'0')
  var_std__plus, 2, LOCAL(1), LOCAL(2), 1, var_1635_1_value,
  // next
  var_next, 0, TAIL_CALL,
  POS(1682, 22),
  POS(1682, 32),
  POS(1682, 15),
  POS(1683, 15)
};

static TAB_NUM t_lambda_176[] = {
  0, // locals
  0, // parameters
  // partial_match idx
  func_partial_match, 1, var_1679_3_idx, TAIL_CALL,
  POS(1685, 15)
};

static TAB_NUM t_func_std__parse_number[] = {
  1, // locals
  1, // parameters
  var_1715_0_self,
  // $i 1
  LET, 1, num_1, 1, var_1717_1_i,
  // $n length_of(self)
  var_length_of, 1, var_1715_0_self, 1, var_1718_1_n,
  // n
  var_std__less, 2, var_1718_1_n, var_1717_1_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_177, lambda_178, TAIL_CALL,
  POS(1717, 3),
  POS(1718, 3),
  POS(1720, 9),
  POS(1719, 3)
};

static TAB_NUM t_lambda_177[] = {
  0, // locals
  0, // parameters
  //  self undefined
  LET, 2, var_1715_0_self, var_undefined, TAIL_CALL,
  POS(1721, 7)
};

static TAB_NUM t_lambda_178[] = {
  3, // locals
  0, // parameters
  // $sign_chr self(1)
  var_1715_0_self, 1, num_1, 1, var_1723_1_sign_chr,
  // sign_chr == '-' || sign_chr == '+' &i -> i+1
  var_std__equal, 2, var_1723_1_sign_chr, chr_45, 1, LOCAL(1),
  // sign_chr == '-' || sign_chr == '+' &i -> i+1
  var_std__or, 2, LOCAL(1), lambda_179, 1, LOCAL(2),
  // update_if sign_chr == '-' || sign_chr == '+' &i -> i+1
  var_update_if, 3, LOCAL(2), var_1717_1_i, lambda_180, 1, var_1717_1_i,
  // sign_chr == '-'
  var_std__equal, 2, var_1723_1_sign_chr, chr_45, 1, LOCAL(1),
  // $sign
  var_if, 3, LOCAL(1), lambda_181, lambda_182, 1, var_1725_1_sign,
  // self(i) == '0' && i+1 < n:
  var_1715_0_self, 1, var_1717_1_i, 1, LOCAL(1),
  // self(i) == '0' && i+1 < n:
  var_std__equal, 2, LOCAL(1), chr_48, 1, LOCAL(2),
  // self(i) == '0' && i+1 < n:
  var_std__and, 2, LOCAL(2), lambda_183, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_184, func_parse, TAIL_CALL,
  POS(1723, 7),
  POS(1724, 17),
  POS(1724, 17),
  POS(1724, 7),
  POS(1727, 11),
  POS(1725, 7),
  POS(1731, 9),
  POS(1731, 9),
  POS(1731, 9),
  POS(1730, 7)
};

static TAB_NUM t_lambda_179[] = {
  1, // locals
  0, // parameters
  // sign_chr == '+' &i -> i+1
  var_std__equal, 2, var_1723_1_sign_chr, chr_43, 1, LOCAL(1),
  // sign_chr == '+' &i -> i+1
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1724, 36),
  POS(1724, 36)
};

static TAB_NUM t_lambda_180[] = {
  1, // locals
  0, // parameters
  // i+1
  var_std__plus, 2, var_1717_1_i, num_1, 1, LOCAL(1),
  //  i+1
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1724, 58),
  POS(1724, 57)
};

static TAB_NUM t_lambda_181[] = {
  0, // locals
  0, // parameters
  //  -1
  LET, 1, minus_num_1, TAIL_CALL,
  POS(1728, 13)
};

static TAB_NUM t_lambda_182[] = {
  0, // locals
  0, // parameters
  //  1
  LET, 1, num_1, TAIL_CALL,
  POS(1729, 13)
};

static TAB_NUM t_lambda_183[] = {
  2, // locals
  0, // parameters
  // i+1 < n:
  var_std__plus, 2, var_1717_1_i, num_1, 1, LOCAL(1),
  // i+1 < n:
  var_std__less, 2, LOCAL(1), var_1718_1_n, 1, LOCAL(2),
  // i+1 < n:
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1731, 27),
  POS(1731, 27),
  POS(1731, 27)
};

static TAB_NUM t_lambda_184[] = {
  2, // locals
  0, // parameters
  // i+1)
  var_std__plus, 2, var_1717_1_i, num_1, 1, LOCAL(1),
  // self(i+1)
  var_1715_0_self, 1, LOCAL(1), 1, LOCAL(2),
  // case self(i+1)
  var_case, 8, LOCAL(2), chr_98, lambda_b, chr_111, lambda_o, chr_120, lambda_x, func_parse, TAIL_CALL,
  POS(1732, 21),
  POS(1732, 16),
  POS(1732, 11)
};

static TAB_NUM t_lambda_b[] = {
  1, // locals
  0, // parameters
  // i+2 sign
  var_std__plus, 2, var_1717_1_i, num_2, 1, LOCAL(1),
  // parse_binary self i+2 sign
  func_parse_binary, 3, var_1715_0_self, LOCAL(1), var_1725_1_sign, TAIL_CALL,
  POS(1733, 36),
  POS(1733, 18)
};

static TAB_NUM t_lambda_o[] = {
  1, // locals
  0, // parameters
  // i+2 sign
  var_std__plus, 2, var_1717_1_i, num_2, 1, LOCAL(1),
  // parse_octal self i+2 sign
  func_parse_octal, 3, var_1715_0_self, LOCAL(1), var_1725_1_sign, TAIL_CALL,
  POS(1734, 35),
  POS(1734, 18)
};

static TAB_NUM t_lambda_x[] = {
  1, // locals
  0, // parameters
  // i+2 sign
  var_std__plus, 2, var_1717_1_i, num_2, 1, LOCAL(1),
  // parse_hex self i+2 sign
  var_parse_hex, 3, var_1715_0_self, LOCAL(1), var_1725_1_sign, TAIL_CALL,
  POS(1735, 33),
  POS(1735, 18)
};

static TAB_NUM t_func_parse[] = {
  0, // locals
  0, // parameters
  // skip_one_ore_more_digits:
  func_skip_one_ore_more_digits, 1, lambda_skip_one_ore_more_digits, TAIL_CALL,
  POS(1740, 5)
};

static TAB_NUM t_lambda_skip_one_ore_more_digits[] = {
  1, // locals
  0, // parameters
  // n return_integer
  var_std__less, 2, var_1718_1_n, var_1717_1_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), func_return_integer, lambda_185, TAIL_CALL,
  POS(1742, 13),
  POS(1741, 7)
};

static TAB_NUM t_lambda_185[] = {
  1, // locals
  0, // parameters
  // self(i)
  var_1715_0_self, 1, var_1717_1_i, 1, LOCAL(1),
  // case self(i)
  var_case, 6, LOCAL(1), chr_46, lambda_186, sequence_1755_1, func_handle_exponent, func_return_integer, TAIL_CALL,
  POS(1744, 16),
  POS(1744, 11)
};

static TAB_NUM t_lambda_186[] = {
  0, // locals
  0, // parameters
  // !i i+1
  var_std__plus, 2, var_1717_1_i, num_1, 1, var_1717_1_i,
  // skip_one_ore_more_digits:
  func_skip_one_ore_more_digits, 1, lambda_2_skip_one_ore_more_digits, TAIL_CALL,
  POS(1746, 15),
  POS(1747, 15)
};

static TAB_NUM t_lambda_2_skip_one_ore_more_digits[] = {
  1, // locals
  0, // parameters
  // n
  var_std__less, 2, var_1718_1_n, var_1717_1_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), func_return_real, lambda_187, TAIL_CALL,
  POS(1749, 23),
  POS(1748, 17)
};

static TAB_NUM t_lambda_187[] = {
  1, // locals
  0, // parameters
  // self(i)
  var_1715_0_self, 1, var_1717_1_i, 1, LOCAL(1),
  // case self(i)
  var_case, 4, LOCAL(1), sequence_1755_1, func_handle_exponent, func_return_real, TAIL_CALL,
  POS(1752, 26),
  POS(1752, 21)
};

static TAB_NUM t_func_skip_one_ore_more_digits[] = {
  1, // locals
  1, // parameters
  var_1758_28_cont,
  // n
  var_std__less, 2, var_1718_1_n, var_1717_1_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_188, lambda_189, TAIL_CALL,
  POS(1760, 13),
  POS(1759, 7)
};

static TAB_NUM t_lambda_188[] = {
  0, // locals
  0, // parameters
  //  self undefined
  LET, 2, var_1715_0_self, var_undefined, TAIL_CALL,
  POS(1761, 11)
};

static TAB_NUM t_lambda_189[] = {
  2, // locals
  0, // parameters
  // $digit self(i)
  var_1715_0_self, 1, var_1717_1_i, 1, var_1763_1_digit,
  // digit < '0' || digit > '9'
  var_std__less, 2, var_1763_1_digit, chr_48, 1, LOCAL(1),
  // digit < '0' || digit > '9'
  var_std__or, 2, LOCAL(1), lambda_190, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_191, lambda_192, TAIL_CALL,
  POS(1763, 11),
  POS(1765, 13),
  POS(1765, 13),
  POS(1764, 11)
};

static TAB_NUM t_lambda_190[] = {
  1, // locals
  0, // parameters
  // 9'
  var_std__less, 2, chr_57, var_1763_1_digit, 1, LOCAL(1),
  // digit > '9'
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1765, 37),
  POS(1765, 28)
};

static TAB_NUM t_lambda_191[] = {
  0, // locals
  0, // parameters
  //  self undefined
  LET, 2, var_1715_0_self, var_undefined, TAIL_CALL,
  POS(1766, 15)
};

static TAB_NUM t_lambda_192[] = {
  0, // locals
  0, // parameters
  // loop:
  var_loop, 1, lambda_11_loop, TAIL_CALL,
  POS(1768, 15)
};

static TAB_NUM t_lambda_11_loop[] = {
  1, // locals
  0, // parameters
  // !i i+1
  var_std__plus, 2, var_1717_1_i, num_1, 1, var_1717_1_i,
  // n
  var_std__less, 2, var_1718_1_n, var_1717_1_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), var_1758_28_cont, lambda_193, TAIL_CALL,
  POS(1769, 17),
  POS(1771, 23),
  POS(1770, 17)
};

static TAB_NUM t_lambda_193[] = {
  3, // locals
  0, // parameters
  // $next_digit self(i)
  var_1715_0_self, 1, var_1717_1_i, 1, var_1774_1_next_digit,
  // next_digit >= '0' && next_digit <= '9'
  var_std__less, 2, var_1774_1_next_digit, chr_48, 1, LOCAL(1),
  // next_digit >= '0' && next_digit <= '9'
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // next_digit >= '0' && next_digit <= '9'
  var_std__and, 2, LOCAL(2), lambda_194, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), var_next, var_1758_28_cont, TAIL_CALL,
  POS(1774, 21),
  POS(1776, 23),
  POS(1776, 23),
  POS(1776, 23),
  POS(1775, 21)
};

static TAB_NUM t_lambda_194[] = {
  2, // locals
  0, // parameters
  // 9'
  var_std__less, 2, chr_57, var_1774_1_next_digit, 1, LOCAL(1),
  // 9'
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // next_digit <= '9'
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1776, 59),
  POS(1776, 59),
  POS(1776, 44)
};

static TAB_NUM t_func_handle_exponent[] = {
  1, // locals
  0, // parameters
  // !i i+1
  var_std__plus, 2, var_1717_1_i, num_1, 1, var_1717_1_i,
  // n
  var_std__less, 2, var_1718_1_n, var_1717_1_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_195, lambda_196, TAIL_CALL,
  POS(1781, 7),
  POS(1783, 13),
  POS(1782, 7)
};

static TAB_NUM t_lambda_195[] = {
  0, // locals
  0, // parameters
  //  self undefined
  LET, 2, var_1715_0_self, var_undefined, TAIL_CALL,
  POS(1784, 11)
};

static TAB_NUM t_lambda_196[] = {
  2, // locals
  0, // parameters
  // $exp_sign_chr self(i)
  var_1715_0_self, 1, var_1717_1_i, 1, var_1786_1_exp_sign_chr,
  // exp_sign_chr == '-' || exp_sign_chr == '+' &i -> i+1
  var_std__equal, 2, var_1786_1_exp_sign_chr, chr_45, 1, LOCAL(1),
  // exp_sign_chr == '-' || exp_sign_chr == '+' &i -> i+1
  var_std__or, 2, LOCAL(1), lambda_197, 1, LOCAL(2),
  // update_if exp_sign_chr == '-' || exp_sign_chr == '+' &i -> i+1
  var_update_if, 3, LOCAL(2), var_1717_1_i, lambda_198, 1, var_1717_1_i,
  // skip_one_ore_more_digits return_real
  func_skip_one_ore_more_digits, 1, func_return_real, TAIL_CALL,
  POS(1786, 11),
  POS(1787, 21),
  POS(1787, 21),
  POS(1787, 11),
  POS(1788, 11)
};

static TAB_NUM t_lambda_197[] = {
  1, // locals
  0, // parameters
  // exp_sign_chr == '+' &i -> i+1
  var_std__equal, 2, var_1786_1_exp_sign_chr, chr_43, 1, LOCAL(1),
  // exp_sign_chr == '+' &i -> i+1
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1787, 44),
  POS(1787, 44)
};

static TAB_NUM t_lambda_198[] = {
  1, // locals
  0, // parameters
  // i+1
  var_std__plus, 2, var_1717_1_i, num_1, 1, LOCAL(1),
  //  i+1
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1787, 70),
  POS(1787, 69)
};

static TAB_NUM t_func_return_integer[] = {
  4, // locals
  0, // parameters
  // range(self i -1) integer(range(self 1 i-1))
  var_range, 3, var_1715_0_self, var_1717_1_i, minus_num_1, 1, LOCAL(1),
  // i-1))
  var_std__minus, 2, var_1717_1_i, num_1, 1, LOCAL(2),
  // range(self 1 i-1))
  var_range, 3, var_1715_0_self, num_1, LOCAL(2), 1, LOCAL(3),
  // integer(range(self 1 i-1))
  var_integer, 1, LOCAL(3), 1, LOCAL(4),
  //  range(self i -1) integer(range(self 1 i-1))
  LET, 2, LOCAL(1), LOCAL(4), TAIL_CALL,
  POS(1790, 24),
  POS(1790, 62),
  POS(1790, 49),
  POS(1790, 41),
  POS(1790, 23)
};

static TAB_NUM t_func_return_real[] = {
  4, // locals
  0, // parameters
  // range(self i -1) real(range(self 1 i-1))
  var_range, 3, var_1715_0_self, var_1717_1_i, minus_num_1, 1, LOCAL(1),
  // i-1))
  var_std__minus, 2, var_1717_1_i, num_1, 1, LOCAL(2),
  // range(self 1 i-1))
  var_range, 3, var_1715_0_self, num_1, LOCAL(2), 1, LOCAL(3),
  // real(range(self 1 i-1))
  var_real, 1, LOCAL(3), 1, LOCAL(4),
  //  range(self i -1) real(range(self 1 i-1))
  LET, 2, LOCAL(1), LOCAL(4), TAIL_CALL,
  POS(1792, 21),
  POS(1792, 56),
  POS(1792, 43),
  POS(1792, 38),
  POS(1792, 20)
};

static TAB_NUM t_func_parse_binary[] = {
  1, // locals
  3, // parameters
  var_1794_16_str,
  var_1794_20_i,
  var_1794_22_sign,
  // $n length_of(str)
  var_length_of, 1, var_1794_16_str, 1, var_1795_1_n,
  // n -> str undefined
  var_std__less, 2, var_1795_1_n, var_1794_20_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_199, lambda_200, TAIL_CALL,
  POS(1795, 3),
  POS(1797, 9),
  POS(1796, 3)
};

static TAB_NUM t_lambda_199[] = {
  0, // locals
  0, // parameters
  //  str undefined
  LET, 2, var_1794_16_str, var_undefined, TAIL_CALL,
  POS(1797, 13)
};

static TAB_NUM t_lambda_200[] = {
  2, // locals
  0, // parameters
  // $digit str(i)
  var_1794_16_str, 1, var_1794_20_i, 1, var_1799_1_digit,
  // digit < '0' || digit > '1'
  var_std__less, 2, var_1799_1_digit, chr_48, 1, LOCAL(1),
  // digit < '0' || digit > '1'
  var_std__or, 2, LOCAL(1), lambda_201, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_202, lambda_203, TAIL_CALL,
  POS(1799, 7),
  POS(1801, 9),
  POS(1801, 9),
  POS(1800, 7)
};

static TAB_NUM t_lambda_201[] = {
  1, // locals
  0, // parameters
  // 1'
  var_std__less, 2, chr_49, var_1799_1_digit, 1, LOCAL(1),
  // digit > '1'
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1801, 33),
  POS(1801, 24)
};

static TAB_NUM t_lambda_202[] = {
  0, // locals
  0, // parameters
  //  str undefined
  LET, 2, var_1794_16_str, var_undefined, TAIL_CALL,
  POS(1802, 11)
};

static TAB_NUM t_lambda_203[] = {
  0, // locals
  0, // parameters
  // $value digit-'0'
  var_std__minus, 2, var_1799_1_digit, chr_48, 1, var_1804_1_value,
  // loop:
  var_loop, 1, lambda_12_loop, TAIL_CALL,
  POS(1804, 11),
  POS(1805, 11)
};

static TAB_NUM t_lambda_12_loop[] = {
  1, // locals
  0, // parameters
  // !i i+1
  var_std__plus, 2, var_1794_20_i, num_1, 1, var_1794_20_i,
  // n
  var_std__less, 2, var_1795_1_n, var_1794_20_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_204, lambda_205, TAIL_CALL,
  POS(1806, 13),
  POS(1808, 19),
  POS(1807, 13)
};

static TAB_NUM t_lambda_204[] = {
  1, // locals
  0, // parameters
  // value*sign
  var_std__times, 2, var_1804_1_value, var_1794_22_sign, 1, LOCAL(1),
  //  "" value*sign
  LET, 2, string_1, LOCAL(1), TAIL_CALL,
  POS(1809, 21),
  POS(1809, 17)
};

static TAB_NUM t_lambda_205[] = {
  3, // locals
  0, // parameters
  // $next_digit str(i)
  var_1794_16_str, 1, var_1794_20_i, 1, var_1811_1_next_digit,
  // next_digit >= '0' && next_digit <= '1':
  var_std__less, 2, var_1811_1_next_digit, chr_48, 1, LOCAL(1),
  // next_digit >= '0' && next_digit <= '1':
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // next_digit >= '0' && next_digit <= '1':
  var_std__and, 2, LOCAL(2), lambda_206, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_207, lambda_208, TAIL_CALL,
  POS(1811, 17),
  POS(1813, 19),
  POS(1813, 19),
  POS(1813, 19),
  POS(1812, 17)
};

static TAB_NUM t_lambda_206[] = {
  2, // locals
  0, // parameters
  // 1':
  var_std__less, 2, chr_49, var_1811_1_next_digit, 1, LOCAL(1),
  // 1':
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // next_digit <= '1':
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1813, 55),
  POS(1813, 55),
  POS(1813, 40)
};

static TAB_NUM t_lambda_207[] = {
  2, // locals
  0, // parameters
  // value << 1)+(next_digit-'0')
  var_std__shift_left, 2, var_1804_1_value, num_1, 1, LOCAL(1),
  // next_digit-'0')
  var_std__minus, 2, var_1811_1_next_digit, chr_48, 1, LOCAL(2),
  // !value (value << 1)+(next_digit-'0')
  var_std__plus, 2, LOCAL(1), LOCAL(2), 1, var_1804_1_value,
  // next
  var_next, 0, TAIL_CALL,
  POS(1814, 29),
  POS(1814, 42),
  POS(1814, 21),
  POS(1815, 21)
};

static TAB_NUM t_lambda_208[] = {
  2, // locals
  0, // parameters
  // range(str i -1) value*sign
  var_range, 3, var_1794_16_str, var_1794_20_i, minus_num_1, 1, LOCAL(1),
  // value*sign
  var_std__times, 2, var_1804_1_value, var_1794_22_sign, 1, LOCAL(2),
  //  range(str i -1) value*sign
  LET, 2, LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(1816, 22),
  POS(1816, 38),
  POS(1816, 21)
};

static TAB_NUM t_func_parse_octal[] = {
  1, // locals
  3, // parameters
  var_1818_15_str,
  var_1818_19_i,
  var_1818_21_sign,
  // $n length_of(str)
  var_length_of, 1, var_1818_15_str, 1, var_1819_1_n,
  // n -> str undefined
  var_std__less, 2, var_1819_1_n, var_1818_19_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_209, lambda_210, TAIL_CALL,
  POS(1819, 3),
  POS(1821, 9),
  POS(1820, 3)
};

static TAB_NUM t_lambda_209[] = {
  0, // locals
  0, // parameters
  //  str undefined
  LET, 2, var_1818_15_str, var_undefined, TAIL_CALL,
  POS(1821, 13)
};

static TAB_NUM t_lambda_210[] = {
  2, // locals
  0, // parameters
  // $digit str(i)
  var_1818_15_str, 1, var_1818_19_i, 1, var_1823_1_digit,
  // digit < '0' || digit > '7'
  var_std__less, 2, var_1823_1_digit, chr_48, 1, LOCAL(1),
  // digit < '0' || digit > '7'
  var_std__or, 2, LOCAL(1), lambda_211, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_212, lambda_213, TAIL_CALL,
  POS(1823, 7),
  POS(1825, 9),
  POS(1825, 9),
  POS(1824, 7)
};

static TAB_NUM t_lambda_211[] = {
  1, // locals
  0, // parameters
  // 7'
  var_std__less, 2, chr_55, var_1823_1_digit, 1, LOCAL(1),
  // digit > '7'
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1825, 33),
  POS(1825, 24)
};

static TAB_NUM t_lambda_212[] = {
  0, // locals
  0, // parameters
  //  str undefined
  LET, 2, var_1818_15_str, var_undefined, TAIL_CALL,
  POS(1826, 11)
};

static TAB_NUM t_lambda_213[] = {
  0, // locals
  0, // parameters
  // $value digit-'0'
  var_std__minus, 2, var_1823_1_digit, chr_48, 1, var_1828_1_value,
  // loop:
  var_loop, 1, lambda_13_loop, TAIL_CALL,
  POS(1828, 11),
  POS(1829, 11)
};

static TAB_NUM t_lambda_13_loop[] = {
  1, // locals
  0, // parameters
  // !i i+1
  var_std__plus, 2, var_1818_19_i, num_1, 1, var_1818_19_i,
  // n
  var_std__less, 2, var_1819_1_n, var_1818_19_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_214, lambda_215, TAIL_CALL,
  POS(1830, 13),
  POS(1832, 19),
  POS(1831, 13)
};

static TAB_NUM t_lambda_214[] = {
  1, // locals
  0, // parameters
  // value*sign
  var_std__times, 2, var_1828_1_value, var_1818_21_sign, 1, LOCAL(1),
  //  "" value*sign
  LET, 2, string_1, LOCAL(1), TAIL_CALL,
  POS(1833, 21),
  POS(1833, 17)
};

static TAB_NUM t_lambda_215[] = {
  3, // locals
  0, // parameters
  // $next_digit str(i)
  var_1818_15_str, 1, var_1818_19_i, 1, var_1835_1_next_digit,
  // next_digit >= '0' && next_digit <= '7':
  var_std__less, 2, var_1835_1_next_digit, chr_48, 1, LOCAL(1),
  // next_digit >= '0' && next_digit <= '7':
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // next_digit >= '0' && next_digit <= '7':
  var_std__and, 2, LOCAL(2), lambda_216, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_217, lambda_218, TAIL_CALL,
  POS(1835, 17),
  POS(1837, 19),
  POS(1837, 19),
  POS(1837, 19),
  POS(1836, 17)
};

static TAB_NUM t_lambda_216[] = {
  2, // locals
  0, // parameters
  // 7':
  var_std__less, 2, chr_55, var_1835_1_next_digit, 1, LOCAL(1),
  // 7':
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // next_digit <= '7':
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1837, 55),
  POS(1837, 55),
  POS(1837, 40)
};

static TAB_NUM t_lambda_217[] = {
  2, // locals
  0, // parameters
  // value << 3)+(next_digit-'0')
  var_std__shift_left, 2, var_1828_1_value, num_3, 1, LOCAL(1),
  // next_digit-'0')
  var_std__minus, 2, var_1835_1_next_digit, chr_48, 1, LOCAL(2),
  // !value (value << 3)+(next_digit-'0')
  var_std__plus, 2, LOCAL(1), LOCAL(2), 1, var_1828_1_value,
  // next
  var_next, 0, TAIL_CALL,
  POS(1838, 29),
  POS(1838, 42),
  POS(1838, 21),
  POS(1839, 21)
};

static TAB_NUM t_lambda_218[] = {
  2, // locals
  0, // parameters
  // range(str i -1) value*sign
  var_range, 3, var_1818_15_str, var_1818_19_i, minus_num_1, 1, LOCAL(1),
  // value*sign
  var_std__times, 2, var_1828_1_value, var_1818_21_sign, 1, LOCAL(2),
  //  range(str i -1) value*sign
  LET, 2, LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(1840, 22),
  POS(1840, 38),
  POS(1840, 21)
};

static TAB_NUM t_func_std__parse_hex[] = {
  1, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_1870_0_str,
  num_1, var_1871_0_i,
  num_1, var_1872_0_sign,
  // $n length_of(str)
  var_length_of, 1, var_1870_0_str, 1, var_1874_1_n,
  // n -> str undefined
  var_std__less, 2, var_1874_1_n, var_1871_0_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_219, lambda_220, TAIL_CALL,
  POS(1874, 3),
  POS(1876, 9),
  POS(1875, 3)
};

static TAB_NUM t_lambda_219[] = {
  0, // locals
  0, // parameters
  //  str undefined
  LET, 2, var_1870_0_str, var_undefined, TAIL_CALL,
  POS(1876, 13)
};

static TAB_NUM t_lambda_220[] = {
  0, // locals
  0, // parameters
  // $digit str(i)
  var_1870_0_str, 1, var_1871_0_i, 1, var_1878_1_digit,
  // cond
  var_cond, 4, lambda_221, lambda_224, lambda_227, lambda_230, TAIL_CALL,
  POS(1878, 7),
  POS(1879, 7)
};

static TAB_NUM t_lambda_221[] = {
  3, // locals
  0, // parameters
  // digit >= '0' && digit <= '9':
  var_std__less, 2, var_1878_1_digit, chr_48, 1, LOCAL(1),
  // digit >= '0' && digit <= '9':
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // digit >= '0' && digit <= '9':
  var_std__and, 2, LOCAL(2), lambda_222, 1, LOCAL(3),
  //  digit >= '0' && digit <= '9':
  LET, 2, LOCAL(3), lambda_223, TAIL_CALL,
  POS(1880, 12),
  POS(1880, 12),
  POS(1880, 12),
  POS(1880, 11)
};

static TAB_NUM t_lambda_222[] = {
  2, // locals
  0, // parameters
  // 9':
  var_std__less, 2, chr_57, var_1878_1_digit, 1, LOCAL(1),
  // 9':
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // digit <= '9':
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1880, 38),
  POS(1880, 38),
  POS(1880, 28)
};

static TAB_NUM t_lambda_223[] = {
  1, // locals
  0, // parameters
  // digit-'0'
  var_std__minus, 2, var_1878_1_digit, chr_48, 1, LOCAL(1),
  // handle_more_digits digit-'0'
  func_handle_more_digits, 1, LOCAL(1), TAIL_CALL,
  POS(1881, 30),
  POS(1881, 11)
};

static TAB_NUM t_lambda_224[] = {
  3, // locals
  0, // parameters
  // digit >= 'a' && digit <= 'f':
  var_std__less, 2, var_1878_1_digit, chr_97, 1, LOCAL(1),
  // digit >= 'a' && digit <= 'f':
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // digit >= 'a' && digit <= 'f':
  var_std__and, 2, LOCAL(2), lambda_225, 1, LOCAL(3),
  //  digit >= 'a' && digit <= 'f':
  LET, 2, LOCAL(3), lambda_226, TAIL_CALL,
  POS(1882, 12),
  POS(1882, 12),
  POS(1882, 12),
  POS(1882, 11)
};

static TAB_NUM t_lambda_225[] = {
  2, // locals
  0, // parameters
  // f':
  var_std__less, 2, chr_102, var_1878_1_digit, 1, LOCAL(1),
  // f':
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // digit <= 'f':
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1882, 38),
  POS(1882, 38),
  POS(1882, 28)
};

static TAB_NUM t_lambda_226[] = {
  2, // locals
  0, // parameters
  // digit-'a')+10
  var_std__minus, 2, var_1878_1_digit, chr_97, 1, LOCAL(1),
  // digit-'a')+10
  var_std__plus, 2, LOCAL(1), num_10, 1, LOCAL(2),
  // handle_more_digits (digit-'a')+10
  func_handle_more_digits, 1, LOCAL(2), TAIL_CALL,
  POS(1883, 31),
  POS(1883, 31),
  POS(1883, 11)
};

static TAB_NUM t_lambda_227[] = {
  3, // locals
  0, // parameters
  // digit >= 'A' && digit <= 'F':
  var_std__less, 2, var_1878_1_digit, chr_65, 1, LOCAL(1),
  // digit >= 'A' && digit <= 'F':
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // digit >= 'A' && digit <= 'F':
  var_std__and, 2, LOCAL(2), lambda_228, 1, LOCAL(3),
  //  digit >= 'A' && digit <= 'F':
  LET, 2, LOCAL(3), lambda_229, TAIL_CALL,
  POS(1884, 12),
  POS(1884, 12),
  POS(1884, 12),
  POS(1884, 11)
};

static TAB_NUM t_lambda_228[] = {
  2, // locals
  0, // parameters
  // F':
  var_std__less, 2, chr_70, var_1878_1_digit, 1, LOCAL(1),
  // F':
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // digit <= 'F':
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1884, 38),
  POS(1884, 38),
  POS(1884, 28)
};

static TAB_NUM t_lambda_229[] = {
  2, // locals
  0, // parameters
  // digit-'A')+10
  var_std__minus, 2, var_1878_1_digit, chr_65, 1, LOCAL(1),
  // digit-'A')+10
  var_std__plus, 2, LOCAL(1), num_10, 1, LOCAL(2),
  // handle_more_digits (digit-'A')+10
  func_handle_more_digits, 1, LOCAL(2), TAIL_CALL,
  POS(1885, 31),
  POS(1885, 31),
  POS(1885, 11)
};

static TAB_NUM t_lambda_230[] = {
  0, // locals
  0, // parameters
  //  true -> str undefined
  LET, 2, var_true, lambda_231, TAIL_CALL,
  POS(1886, 11)
};

static TAB_NUM t_lambda_231[] = {
  0, // locals
  0, // parameters
  //  str undefined
  LET, 2, var_1870_0_str, var_undefined, TAIL_CALL,
  POS(1886, 19)
};

static TAB_NUM t_func_handle_more_digits[] = {
  0, // locals
  1, // parameters
  var_1888_22_value,
  // loop:
  var_loop, 1, lambda_14_loop, TAIL_CALL,
  POS(1889, 9)
};

static TAB_NUM t_lambda_14_loop[] = {
  1, // locals
  0, // parameters
  // !i i+1
  var_std__plus, 2, var_1871_0_i, num_1, 1, var_1871_0_i,
  // n
  var_std__less, 2, var_1874_1_n, var_1871_0_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_232, lambda_233, TAIL_CALL,
  POS(1890, 11),
  POS(1892, 17),
  POS(1891, 11)
};

static TAB_NUM t_lambda_232[] = {
  1, // locals
  0, // parameters
  // value*sign
  var_std__times, 2, var_1888_22_value, var_1872_0_sign, 1, LOCAL(1),
  //  "" value*sign
  LET, 2, string_1, LOCAL(1), TAIL_CALL,
  POS(1893, 19),
  POS(1893, 15)
};

static TAB_NUM t_lambda_233[] = {
  0, // locals
  0, // parameters
  // $next_digit str(i)
  var_1870_0_str, 1, var_1871_0_i, 1, var_1895_1_next_digit,
  // cond
  var_cond, 4, lambda_234, lambda_237, lambda_240, lambda_243, TAIL_CALL,
  POS(1895, 15),
  POS(1896, 15)
};

static TAB_NUM t_lambda_234[] = {
  3, // locals
  0, // parameters
  // next_digit >= '0' && next_digit <= '9':
  var_std__less, 2, var_1895_1_next_digit, chr_48, 1, LOCAL(1),
  // next_digit >= '0' && next_digit <= '9':
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // next_digit >= '0' && next_digit <= '9':
  var_std__and, 2, LOCAL(2), lambda_235, 1, LOCAL(3),
  //  next_digit >= '0' && next_digit <= '9':
  LET, 2, LOCAL(3), lambda_236, TAIL_CALL,
  POS(1897, 20),
  POS(1897, 20),
  POS(1897, 20),
  POS(1897, 19)
};

static TAB_NUM t_lambda_235[] = {
  2, // locals
  0, // parameters
  // 9':
  var_std__less, 2, chr_57, var_1895_1_next_digit, 1, LOCAL(1),
  // 9':
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // next_digit <= '9':
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1897, 56),
  POS(1897, 56),
  POS(1897, 41)
};

static TAB_NUM t_lambda_236[] = {
  2, // locals
  0, // parameters
  // value << 4)+(next_digit-'0')
  var_std__shift_left, 2, var_1888_22_value, num_4, 1, LOCAL(1),
  // next_digit-'0')
  var_std__minus, 2, var_1895_1_next_digit, chr_48, 1, LOCAL(2),
  // !value (value << 4)+(next_digit-'0')
  var_std__plus, 2, LOCAL(1), LOCAL(2), 1, var_1888_22_value,
  // next
  var_next, 0, TAIL_CALL,
  POS(1898, 27),
  POS(1898, 40),
  POS(1898, 19),
  POS(1899, 19)
};

static TAB_NUM t_lambda_237[] = {
  3, // locals
  0, // parameters
  // next_digit >= 'a' && next_digit <= 'f':
  var_std__less, 2, var_1895_1_next_digit, chr_97, 1, LOCAL(1),
  // next_digit >= 'a' && next_digit <= 'f':
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // next_digit >= 'a' && next_digit <= 'f':
  var_std__and, 2, LOCAL(2), lambda_238, 1, LOCAL(3),
  //  next_digit >= 'a' && next_digit <= 'f':
  LET, 2, LOCAL(3), lambda_239, TAIL_CALL,
  POS(1900, 20),
  POS(1900, 20),
  POS(1900, 20),
  POS(1900, 19)
};

static TAB_NUM t_lambda_238[] = {
  2, // locals
  0, // parameters
  // f':
  var_std__less, 2, chr_102, var_1895_1_next_digit, 1, LOCAL(1),
  // f':
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // next_digit <= 'f':
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1900, 56),
  POS(1900, 56),
  POS(1900, 41)
};

static TAB_NUM t_lambda_239[] = {
  3, // locals
  0, // parameters
  // value << 4)+(next_digit-'a')+10
  var_std__shift_left, 2, var_1888_22_value, num_4, 1, LOCAL(1),
  // next_digit-'a')+10
  var_std__minus, 2, var_1895_1_next_digit, chr_97, 1, LOCAL(2),
  // value << 4)+(next_digit-'a')+10
  var_std__plus, 2, LOCAL(1), LOCAL(2), 1, LOCAL(3),
  // !value (value << 4)+(next_digit-'a')+10
  var_std__plus, 2, LOCAL(3), num_10, 1, var_1888_22_value,
  // next
  var_next, 0, TAIL_CALL,
  POS(1901, 27),
  POS(1901, 40),
  POS(1901, 27),
  POS(1901, 19),
  POS(1902, 19)
};

static TAB_NUM t_lambda_240[] = {
  3, // locals
  0, // parameters
  // next_digit >= 'A' && next_digit <= 'F':
  var_std__less, 2, var_1895_1_next_digit, chr_65, 1, LOCAL(1),
  // next_digit >= 'A' && next_digit <= 'F':
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // next_digit >= 'A' && next_digit <= 'F':
  var_std__and, 2, LOCAL(2), lambda_241, 1, LOCAL(3),
  //  next_digit >= 'A' && next_digit <= 'F':
  LET, 2, LOCAL(3), lambda_242, TAIL_CALL,
  POS(1903, 20),
  POS(1903, 20),
  POS(1903, 20),
  POS(1903, 19)
};

static TAB_NUM t_lambda_241[] = {
  2, // locals
  0, // parameters
  // F':
  var_std__less, 2, chr_70, var_1895_1_next_digit, 1, LOCAL(1),
  // F':
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // next_digit <= 'F':
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1903, 56),
  POS(1903, 56),
  POS(1903, 41)
};

static TAB_NUM t_lambda_242[] = {
  3, // locals
  0, // parameters
  // value << 4)+(next_digit-'A')+10
  var_std__shift_left, 2, var_1888_22_value, num_4, 1, LOCAL(1),
  // next_digit-'A')+10
  var_std__minus, 2, var_1895_1_next_digit, chr_65, 1, LOCAL(2),
  // value << 4)+(next_digit-'A')+10
  var_std__plus, 2, LOCAL(1), LOCAL(2), 1, LOCAL(3),
  // !value (value << 4)+(next_digit-'A')+10
  var_std__plus, 2, LOCAL(3), num_10, 1, var_1888_22_value,
  // next
  var_next, 0, TAIL_CALL,
  POS(1904, 27),
  POS(1904, 40),
  POS(1904, 27),
  POS(1904, 19),
  POS(1905, 19)
};

static TAB_NUM t_lambda_243[] = {
  0, // locals
  0, // parameters
  //  true -> range(str i -1) value*sign
  LET, 2, var_true, lambda_244, TAIL_CALL,
  POS(1906, 19)
};

static TAB_NUM t_lambda_244[] = {
  2, // locals
  0, // parameters
  // range(str i -1) value*sign
  var_range, 3, var_1870_0_str, var_1871_0_i, minus_num_1, 1, LOCAL(1),
  // value*sign
  var_std__times, 2, var_1888_22_value, var_1872_0_sign, 1, LOCAL(2),
  //  range(str i -1) value*sign
  LET, 2, LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(1906, 28),
  POS(1906, 44),
  POS(1906, 27)
};

static TAB_NUM t_func_std_types__string___to_integer[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 1942_0_self
  // parse_integer &self $value
  var_parse_integer, 1, LOCAL(2), 2, LOCAL(2), var_1944_21_value,
  // self == ""
  var_std__equal, 2, LOCAL(2), string_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_245, lambda_246, TAIL_CALL,
  POS(1944, 3),
  POS(1946, 5),
  POS(1945, 3)
};

static TAB_NUM t_lambda_245[] = {
  0, // locals
  0, // parameters
  //  value
  LET, 1, var_1944_21_value, TAIL_CALL,
  POS(1947, 7)
};

static TAB_NUM t_lambda_246[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(1948, 7)
};

static TAB_NUM t_func_std_types__string___to_number[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 1984_0_self
  // parse_number &self $value
  var_parse_number, 1, LOCAL(2), 2, LOCAL(2), var_1986_20_value,
  // self == ""
  var_std__equal, 2, LOCAL(2), string_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_247, lambda_248, TAIL_CALL,
  POS(1986, 3),
  POS(1988, 5),
  POS(1987, 3)
};

static TAB_NUM t_lambda_247[] = {
  0, // locals
  0, // parameters
  //  value
  LET, 1, var_1986_20_value, TAIL_CALL,
  POS(1989, 7)
};

static TAB_NUM t_lambda_248[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(1990, 7)
};

static TAB_NUM t_func_std__map_characters[] = {
  2, // locals
  2, // parameters
  var_2013_0_self,
  var_2014_0_function,
  // parameter_count_of(function) == 2
  var_parameter_count_of, 1, var_2014_0_function, 1, LOCAL(1),
  // parameter_count_of(function) == 2
  var_std__equal, 2, LOCAL(1), num_2, 1, LOCAL(2),
  // $map
  var_if, 3, LOCAL(2), lambda_249, lambda_255, 1, var_2016_1_map,
  // length_of(self)
  var_length_of, 1, var_2013_0_self, 1, LOCAL(1),
  // map 1 length_of(self)
  var_2016_1_map, 2, num_1, LOCAL(1), TAIL_CALL,
  POS(2018, 7),
  POS(2018, 7),
  POS(2016, 3),
  POS(2046, 9),
  POS(2046, 3)
};

static TAB_NUM t_lambda_249[] = {
  0, // locals
  0, // parameters
  // 
  LET, 1, lambda_250, TAIL_CALL,
  POS(2019, 9)
};

static TAB_NUM t_lambda_250[] = {
  1, // locals
  2, // parameters
  var_2020_3_s,
  var_2020_5_e,
  // s < e:
  var_std__less, 2, var_2020_3_s, var_2020_5_e, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_251, lambda_252, TAIL_CALL,
  POS(2022, 13),
  POS(2021, 11)
};

static TAB_NUM t_lambda_251[] = {
  4, // locals
  0, // parameters
  // s+e) >> 1
  var_std__plus, 2, var_2020_3_s, var_2020_5_e, 1, LOCAL(1),
  // $m (s+e) >> 1
  var_std__shift_right, 2, LOCAL(1), num_1, 1, LOCAL(4),
  // map(s m)
  var_2016_1_map, 2, var_2020_3_s, LOCAL(4), 1, LOCAL(1),
  // m+1 e)
  var_std__plus, 2, LOCAL(4), num_1, 1, LOCAL(2),
  // map(m+1 e)
  var_2016_1_map, 2, LOCAL(2), var_2020_5_e, 1, LOCAL(3),
  // append
  var_append, 2, LOCAL(1), LOCAL(3), TAIL_CALL,
  POS(2023, 19),
  POS(2023, 15),
  POS(2025, 17),
  POS(2026, 21),
  POS(2026, 17),
  POS(2024, 15)
};

static TAB_NUM t_lambda_252[] = {
  1, // locals
  0, // parameters
  // e
  var_std__less, 2, var_2020_5_e, var_2020_3_s, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_253, lambda_254, TAIL_CALL,
  POS(2029, 21),
  POS(2028, 15)
};

static TAB_NUM t_lambda_253[] = {
  0, // locals
  0, // parameters
  //  ""
  LET, 1, string_1, TAIL_CALL,
  POS(2030, 19)
};

static TAB_NUM t_lambda_254[] = {
  3, // locals
  0, // parameters
  // self(s)).to_string
  var_2013_0_self, 1, var_2020_3_s, 1, LOCAL(1),
  // function(s self(s)).to_string
  var_2014_0_function, 2, var_2020_3_s, LOCAL(1), 1, LOCAL(2),
  // to_string
  var_to_string, 1, LOCAL(2), 1, LOCAL(3),
  //  function(s self(s)).to_string
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(2031, 31),
  POS(2031, 20),
  POS(2031, 40),
  POS(2031, 19)
};

static TAB_NUM t_lambda_255[] = {
  0, // locals
  0, // parameters
  // 
  LET, 1, lambda_256, TAIL_CALL,
  POS(2032, 9)
};

static TAB_NUM t_lambda_256[] = {
  1, // locals
  2, // parameters
  var_2033_3_s,
  var_2033_5_e,
  // s < e:
  var_std__less, 2, var_2033_3_s, var_2033_5_e, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_257, lambda_258, TAIL_CALL,
  POS(2035, 13),
  POS(2034, 11)
};

static TAB_NUM t_lambda_257[] = {
  4, // locals
  0, // parameters
  // s+e) >> 1
  var_std__plus, 2, var_2033_3_s, var_2033_5_e, 1, LOCAL(1),
  // $m (s+e) >> 1
  var_std__shift_right, 2, LOCAL(1), num_1, 1, LOCAL(4),
  // map(s m)
  var_2016_1_map, 2, var_2033_3_s, LOCAL(4), 1, LOCAL(1),
  // m+1 e)
  var_std__plus, 2, LOCAL(4), num_1, 1, LOCAL(2),
  // map(m+1 e)
  var_2016_1_map, 2, LOCAL(2), var_2033_5_e, 1, LOCAL(3),
  // append
  var_append, 2, LOCAL(1), LOCAL(3), TAIL_CALL,
  POS(2036, 19),
  POS(2036, 15),
  POS(2038, 17),
  POS(2039, 21),
  POS(2039, 17),
  POS(2037, 15)
};

static TAB_NUM t_lambda_258[] = {
  1, // locals
  0, // parameters
  // e
  var_std__less, 2, var_2033_5_e, var_2033_3_s, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_259, lambda_260, TAIL_CALL,
  POS(2042, 21),
  POS(2041, 15)
};

static TAB_NUM t_lambda_259[] = {
  0, // locals
  0, // parameters
  //  ""
  LET, 1, string_1, TAIL_CALL,
  POS(2043, 19)
};

static TAB_NUM t_lambda_260[] = {
  3, // locals
  0, // parameters
  // self(s)).to_string
  var_2013_0_self, 1, var_2033_3_s, 1, LOCAL(1),
  // function(self(s)).to_string
  var_2014_0_function, 1, LOCAL(1), 1, LOCAL(2),
  // to_string
  var_to_string, 1, LOCAL(2), 1, LOCAL(3),
  //  function(self(s)).to_string
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(2044, 29),
  POS(2044, 20),
  POS(2044, 38),
  POS(2044, 19)
};

static TAB_NUM t_func_std_types__string___to_upper_case[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 2066_0_self
  // map_characters self to_upper_case
  var_map_characters, 2, LOCAL(1), var_to_upper_case, TAIL_CALL,
  POS(2068, 3)
};

static TAB_NUM t_func_std_types__string___to_lower_case[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 2088_0_self
  // map_characters self to_lower_case
  var_map_characters, 2, LOCAL(1), var_to_lower_case, TAIL_CALL,
  POS(2090, 3)
};

static TAB_NUM t_func_std_types__string___to_title_case[] = {
  0, // locals
  1, // parameters
  var_2110_0_self,
  // map_characters self: (idx chr)
  var_map_characters, 2, var_2110_0_self, lambda_261, TAIL_CALL,
  POS(2112, 3)
};

static TAB_NUM t_lambda_261[] = {
  2, // locals
  2, // parameters
  var_2112_22_idx,
  var_2112_26_chr,
  // 1 && self(idx-1).is_a_letter_character
  var_std__less, 2, num_1, var_2112_22_idx, 1, LOCAL(1),
  // 1 && self(idx-1).is_a_letter_character
  var_std__and, 2, LOCAL(1), lambda_262, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_263, lambda_264, TAIL_CALL,
  POS(2114, 13),
  POS(2114, 13),
  POS(2113, 5)
};

static TAB_NUM t_lambda_262[] = {
  3, // locals
  0, // parameters
  // idx-1).is_a_letter_character
  var_std__minus, 2, var_2112_22_idx, num_1, 1, LOCAL(1),
  // self(idx-1).is_a_letter_character
  var_2110_0_self, 1, LOCAL(1), 1, LOCAL(2),
  // is_a_letter_character
  var_is_a_letter_character, 1, LOCAL(2), 1, LOCAL(3),
  // self(idx-1).is_a_letter_character
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(2114, 23),
  POS(2114, 18),
  POS(2114, 30),
  POS(2114, 18)
};

static TAB_NUM t_lambda_263[] = {
  1, // locals
  0, // parameters
  // to_lower_case
  var_to_lower_case, 1, var_2112_26_chr, 1, LOCAL(1),
  //  chr.to_lower_case
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(2115, 14),
  POS(2115, 9)
};

static TAB_NUM t_lambda_264[] = {
  1, // locals
  0, // parameters
  // to_title_case
  var_to_title_case, 1, var_2112_26_chr, 1, LOCAL(1),
  //  chr.to_title_case
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(2116, 14),
  POS(2116, 9)
};

static TAB_NUM t_func_std_types__string___to_sentence_case[] = {
  0, // locals
  1, // parameters
  var_2136_0_self,
  // map_characters self: (idx chr)
  var_map_characters, 2, var_2136_0_self, lambda_265, TAIL_CALL,
  POS(2138, 3)
};

static TAB_NUM t_lambda_265[] = {
  2, // locals
  2, // parameters
  var_2138_22_idx,
  var_2138_26_chr,
  // idx == 1 && self(idx).is_a_letter_character
  var_std__equal, 2, var_2138_22_idx, num_1, 1, LOCAL(1),
  // idx == 1 && self(idx).is_a_letter_character
  var_std__and, 2, LOCAL(1), lambda_266, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_267, lambda_268, TAIL_CALL,
  POS(2140, 7),
  POS(2140, 7),
  POS(2139, 5)
};

static TAB_NUM t_lambda_266[] = {
  2, // locals
  0, // parameters
  // self(idx).is_a_letter_character
  var_2136_0_self, 1, var_2138_22_idx, 1, LOCAL(1),
  // is_a_letter_character
  var_is_a_letter_character, 1, LOCAL(1), 1, LOCAL(2),
  // self(idx).is_a_letter_character
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2140, 19),
  POS(2140, 29),
  POS(2140, 19)
};

static TAB_NUM t_lambda_267[] = {
  1, // locals
  0, // parameters
  // to_title_case
  var_to_title_case, 1, var_2138_26_chr, 1, LOCAL(1),
  //  chr.to_title_case
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(2141, 14),
  POS(2141, 9)
};

static TAB_NUM t_lambda_268[] = {
  1, // locals
  0, // parameters
  // to_lower_case
  var_to_lower_case, 1, var_2138_26_chr, 1, LOCAL(1),
  //  chr.to_lower_case
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(2142, 14),
  POS(2142, 9)
};

static TAB_NUM t_func_std_types__string___to_wide[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 2144_29_str
  // map_characters str to_wide
  var_map_characters, 2, LOCAL(1), var_to_wide, TAIL_CALL,
  POS(2145, 3)
};

static TAB_NUM t_func_std__delete_all[] = {
  1, // locals
  -2, // parameters
  MANDATORY_PARAMETER, LOCAL(1), // 2168_0_text
  REST_PARAMETER, var_2169_0_expressions,
  // $new_text ""
  LET, 1, string_1, 1, var_2185_1_new_text,
  // delete_all text
  func_delete_all, 1, LOCAL(1), TAIL_CALL,
  POS(2185, 3),
  POS(2186, 3)
};

static TAB_NUM t_func_delete_all[] = {
  1, // locals
  1, // parameters
  var_2171_14_txt,
  // is_empty
  var_is_empty, 1, var_2171_14_txt, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_269, lambda_270, TAIL_CALL,
  POS(2173, 11),
  POS(2172, 5)
};

static TAB_NUM t_lambda_269[] = {
  0, // locals
  0, // parameters
  //  new_text
  LET, 1, var_2185_1_new_text, TAIL_CALL,
  POS(2174, 9)
};

static TAB_NUM t_lambda_270[] = {
  0, // locals
  0, // parameters
  // for_each expressions
  var_for_each, 3, var_2169_0_expressions, lambda_271, lambda_273, TAIL_CALL,
  POS(2176, 9)
};

static TAB_NUM t_lambda_271[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 2177_3_expression
  // $len match(expression txt)
  var_match, 2, LOCAL(2), var_2171_14_txt, 1, var_2178_1_len,
  // is_defined next:
  var_is_defined, 1, var_2178_1_len, 1, LOCAL(1),
  // if_not len.is_defined next:
  var_if_not, 3, LOCAL(1), var_next, lambda_272, TAIL_CALL,
  POS(2178, 13),
  POS(2179, 24),
  POS(2179, 13)
};

static TAB_NUM t_lambda_272[] = {
  2, // locals
  0, // parameters
  // len+1 -1)
  var_std__plus, 2, var_2178_1_len, num_1, 1, LOCAL(1),
  // range(txt len+1 -1)
  var_range, 3, var_2171_14_txt, LOCAL(1), minus_num_1, 1, LOCAL(2),
  // delete_all range(txt len+1 -1)
  func_delete_all, 1, LOCAL(2), TAIL_CALL,
  POS(2180, 36),
  POS(2180, 26),
  POS(2180, 15)
};

static TAB_NUM t_lambda_273[] = {
  1, // locals
  0, // parameters
  // txt(1)
  var_2171_14_txt, 1, num_1, 1, LOCAL(1),
  // push &new_text txt(1)
  var_push, 2, var_2185_1_new_text, LOCAL(1), 1, var_2185_1_new_text,
  // range(txt 2 -1)
  var_range, 3, var_2171_14_txt, num_2, minus_num_1, 1, LOCAL(1),
  // delete_all range(txt 2 -1)
  func_delete_all, 1, LOCAL(1), TAIL_CALL,
  POS(2182, 28),
  POS(2182, 13),
  POS(2183, 24),
  POS(2183, 13)
};

static TAB_NUM t_func_std__replace_all[] = {
  1, // locals
  -2, // parameters
  MANDATORY_PARAMETER, LOCAL(1), // 2209_0_text
  REST_PARAMETER, var_2210_0_args,
  // $new_text ""
  LET, 1, string_1, 1, var_2233_1_new_text,
  // replace_all text
  func_replace_all, 1, LOCAL(1), TAIL_CALL,
  POS(2233, 3),
  POS(2234, 3)
};

static TAB_NUM t_func_replace_all[] = {
  1, // locals
  1, // parameters
  var_2212_15_txt,
  // is_empty
  var_is_empty, 1, var_2212_15_txt, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_274, lambda_275, TAIL_CALL,
  POS(2214, 11),
  POS(2213, 5)
};

static TAB_NUM t_lambda_274[] = {
  0, // locals
  0, // parameters
  //  new_text
  LET, 1, var_2233_1_new_text, TAIL_CALL,
  POS(2215, 9)
};

static TAB_NUM t_lambda_275[] = {
  0, // locals
  0, // parameters
  // for_each args
  var_for_each, 3, var_2210_0_args, lambda_276, lambda_279, TAIL_CALL,
  POS(2217, 9)
};

static TAB_NUM t_lambda_276[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 2218_3_arg
  // arg $expression $replacement
  LOCAL(2), 0, 2, LOCAL(3), var_2219_17_replacement,
  // $len match(expression txt)
  var_match, 2, LOCAL(3), var_2212_15_txt, 1, var_2220_1_len,
  // is_defined next:
  var_is_defined, 1, var_2220_1_len, 1, LOCAL(1),
  // if_not len.is_defined next:
  var_if_not, 3, LOCAL(1), var_next, lambda_277, TAIL_CALL,
  POS(2219, 13),
  POS(2220, 13),
  POS(2221, 24),
  POS(2221, 13)
};

static TAB_NUM t_lambda_277[] = {
  1, // locals
  0, // parameters
  // is_a_string:
  var_is_a_string, 1, var_2219_17_replacement, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_replacement_is_a_string, lambda_278, TAIL_CALL,
  POS(2223, 29),
  POS(2222, 15)
};

static TAB_NUM t_lambda_replacement_is_a_string[] = {
  2, // locals
  0, // parameters
  // append &new_text replacement
  var_append, 2, var_2233_1_new_text, var_2219_17_replacement, 1, var_2233_1_new_text,
  // len+1 -1)
  var_std__plus, 2, var_2220_1_len, num_1, 1, LOCAL(1),
  // range(txt len+1 -1)
  var_range, 3, var_2212_15_txt, LOCAL(1), minus_num_1, 1, LOCAL(2),
  // replace_all range(txt len+1 -1)
  func_replace_all, 1, LOCAL(2), TAIL_CALL,
  POS(2224, 19),
  POS(2225, 41),
  POS(2225, 31),
  POS(2225, 19)
};

static TAB_NUM t_lambda_278[] = {
  2, // locals
  0, // parameters
  // range(txt 1 len))
  var_range, 3, var_2212_15_txt, num_1, var_2220_1_len, 1, LOCAL(1),
  // replacement(range(txt 1 len))
  var_2219_17_replacement, 1, LOCAL(1), 1, LOCAL(2),
  // append &new_text replacement(range(txt 1 len))
  var_append, 2, var_2233_1_new_text, LOCAL(2), 1, var_2233_1_new_text,
  // len+1 -1)
  var_std__plus, 2, var_2220_1_len, num_1, 1, LOCAL(1),
  // range(txt len+1 -1)
  var_range, 3, var_2212_15_txt, LOCAL(1), minus_num_1, 1, LOCAL(2),
  // replace_all range(txt len+1 -1)
  func_replace_all, 1, LOCAL(2), TAIL_CALL,
  POS(2227, 48),
  POS(2227, 36),
  POS(2227, 19),
  POS(2228, 41),
  POS(2228, 31),
  POS(2228, 19)
};

static TAB_NUM t_lambda_279[] = {
  1, // locals
  0, // parameters
  // txt(1)
  var_2212_15_txt, 1, num_1, 1, LOCAL(1),
  // push &new_text txt(1)
  var_push, 2, var_2233_1_new_text, LOCAL(1), 1, var_2233_1_new_text,
  // range(txt 2 -1)
  var_range, 3, var_2212_15_txt, num_2, minus_num_1, 1, LOCAL(1),
  // replace_all range(txt 2 -1)
  func_replace_all, 1, LOCAL(1), TAIL_CALL,
  POS(2230, 28),
  POS(2230, 13),
  POS(2231, 25),
  POS(2231, 13)
};

static TAB_NUM t_func_std__replace_first[] = {
  1, // locals
  -2, // parameters
  MANDATORY_PARAMETER, LOCAL(1), // 2257_0_text
  REST_PARAMETER, var_2258_0_args,
  // $new_text ""
  LET, 1, string_1, 1, var_2280_1_new_text,
  // replace_first text
  func_replace_first, 1, LOCAL(1), TAIL_CALL,
  POS(2280, 3),
  POS(2281, 3)
};

static TAB_NUM t_func_replace_first[] = {
  1, // locals
  1, // parameters
  var_2260_17_txt,
  // is_empty
  var_is_empty, 1, var_2260_17_txt, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_280, lambda_281, TAIL_CALL,
  POS(2262, 11),
  POS(2261, 5)
};

static TAB_NUM t_lambda_280[] = {
  0, // locals
  0, // parameters
  //  new_text
  LET, 1, var_2280_1_new_text, TAIL_CALL,
  POS(2263, 9)
};

static TAB_NUM t_lambda_281[] = {
  0, // locals
  0, // parameters
  // for_each args
  var_for_each, 3, var_2258_0_args, lambda_282, lambda_285, TAIL_CALL,
  POS(2265, 9)
};

static TAB_NUM t_lambda_282[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 2266_3_arg
  // arg $expression $replacement
  LOCAL(2), 0, 2, LOCAL(3), var_2267_17_replacement,
  // $len match(expression txt)
  var_match, 2, LOCAL(3), var_2260_17_txt, 1, var_2268_1_len,
  // is_defined
  var_is_defined, 1, var_2268_1_len, 1, LOCAL(1),
  // if_not
  var_if_not, 3, LOCAL(1), var_next, lambda_283, TAIL_CALL,
  POS(2267, 13),
  POS(2268, 13),
  POS(2270, 19),
  POS(2269, 13)
};

static TAB_NUM t_lambda_283[] = {
  3, // locals
  0, // parameters
  // is_a_string &replacement
  var_is_a_string, 1, var_2267_17_replacement, 1, LOCAL(1),
  // update_if_not replacement.is_a_string &replacement
  var_update_if_not, 3, LOCAL(1), var_2267_17_replacement, lambda_284, 1, var_2267_17_replacement,
  // len+1 -1))
  var_std__plus, 2, var_2268_1_len, num_1, 1, LOCAL(1),
  // range(txt len+1 -1))
  var_range, 3, var_2260_17_txt, LOCAL(1), minus_num_1, 1, LOCAL(2),
  // append(new_text replacement range(txt len+1 -1))
  var_append, 3, var_2280_1_new_text, var_2267_17_replacement, LOCAL(2), 1, LOCAL(3),
  // -> append(new_text replacement range(txt len+1 -1))
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(2273, 43),
  POS(2273, 17),
  POS(2275, 58),
  POS(2275, 48),
  POS(2275, 20),
  POS(2275, 17)
};

static TAB_NUM t_lambda_284[] = {
  2, // locals
  0, // parameters
  // range(txt 1 len))
  var_range, 3, var_2260_17_txt, num_1, var_2268_1_len, 1, LOCAL(1),
  // replacement(range(txt 1 len))
  var_2267_17_replacement, 1, LOCAL(1), 1, LOCAL(2),
  //  replacement(range(txt 1 len))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2274, 34),
  POS(2274, 22),
  POS(2274, 21)
};

static TAB_NUM t_lambda_285[] = {
  1, // locals
  0, // parameters
  // txt(1)
  var_2260_17_txt, 1, num_1, 1, LOCAL(1),
  // push &new_text txt(1)
  var_push, 2, var_2280_1_new_text, LOCAL(1), 1, var_2280_1_new_text,
  // range(txt 2 -1)
  var_range, 3, var_2260_17_txt, num_2, minus_num_1, 1, LOCAL(1),
  // replace_first range(txt 2 -1)
  func_replace_first, 1, LOCAL(1), TAIL_CALL,
  POS(2277, 28),
  POS(2277, 13),
  POS(2278, 27),
  POS(2278, 13)
};

static TAB_NUM t_func_std__count_occurrences[] = {
  1, // locals
  2, // parameters
  LOCAL(1), // 2302_0_text
  var_2303_0_expr,
  // search_next text 0
  func_search_next, 2, LOCAL(1), num_0, TAIL_CALL,
  POS(2317, 3)
};

static TAB_NUM t_func_search_next[] = {
  1, // locals
  2, // parameters
  var_2305_15_txt,
  var_2305_19_count,
  // txt == ""
  var_std__equal, 2, var_2305_15_txt, string_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_286, lambda_287, TAIL_CALL,
  POS(2307, 7),
  POS(2306, 5)
};

static TAB_NUM t_lambda_286[] = {
  0, // locals
  0, // parameters
  //  count
  LET, 1, var_2305_19_count, TAIL_CALL,
  POS(2308, 9)
};

static TAB_NUM t_lambda_287[] = {
  1, // locals
  0, // parameters
  // $n match(expr txt)
  var_match, 2, var_2303_0_expr, var_2305_15_txt, 1, var_2310_1_n,
  // is_defined:
  var_is_defined, 1, var_2310_1_n, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_n_is_defined, lambda_288, TAIL_CALL,
  POS(2310, 9),
  POS(2312, 13),
  POS(2311, 9)
};

static TAB_NUM t_lambda_n_is_defined[] = {
  3, // locals
  0, // parameters
  // n+1 -1) count+1
  var_std__plus, 2, var_2310_1_n, num_1, 1, LOCAL(1),
  // range(txt n+1 -1) count+1
  var_range, 3, var_2305_15_txt, LOCAL(1), minus_num_1, 1, LOCAL(2),
  // count+1
  var_std__plus, 2, var_2305_19_count, num_1, 1, LOCAL(3),
  // search_next range(txt n+1 -1) count+1
  func_search_next, 2, LOCAL(2), LOCAL(3), TAIL_CALL,
  POS(2313, 35),
  POS(2313, 25),
  POS(2313, 43),
  POS(2313, 13)
};

static TAB_NUM t_lambda_288[] = {
  1, // locals
  0, // parameters
  // range(txt 2 -1) count
  var_range, 3, var_2305_15_txt, num_2, minus_num_1, 1, LOCAL(1),
  // search_next range(txt 2 -1) count
  func_search_next, 2, LOCAL(1), var_2305_19_count, TAIL_CALL,
  POS(2315, 25),
  POS(2315, 13)
};

static TAB_NUM t_func_std__split_into_lines[] = {
  0, // locals
  1, // parameters
  var_2361_25_text,
  // $lines empty_list
  LET, 1, var_empty_list, 1, var_2362_1_lines,
  // $i 1
  LET, 1, num_1, 1, var_2363_1_i,
  // $n length_of(text)
  var_length_of, 1, var_2361_25_text, 1, var_2364_1_n,
  // $s i
  LET, 1, var_2363_1_i, 1, var_2365_1_s,
  // loop:
  var_loop, 1, lambda_15_loop, TAIL_CALL,
  POS(2362, 3),
  POS(2363, 3),
  POS(2364, 3),
  POS(2365, 3),
  POS(2366, 3)
};

static TAB_NUM t_lambda_15_loop[] = {
  1, // locals
  0, // parameters
  // n
  var_std__less, 2, var_2364_1_n, var_2363_1_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_289, lambda_292, TAIL_CALL,
  POS(2368, 11),
  POS(2367, 5)
};

static TAB_NUM t_lambda_289[] = {
  3, // locals
  0, // parameters
  // n
  var_std__less, 2, var_2364_1_n, var_2365_1_s, 1, LOCAL(1),
  // n
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_290, lambda_291, 1, LOCAL(3),
  // 
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(2371, 16),
  POS(2371, 16),
  POS(2370, 9),
  POS(2369, 9)
};

static TAB_NUM t_lambda_290[] = {
  2, // locals
  0, // parameters
  // range(text s n))
  var_range, 3, var_2361_25_text, var_2365_1_s, var_2364_1_n, 1, LOCAL(1),
  // push(lines range(text s n))
  var_push, 2, var_2362_1_lines, LOCAL(1), 1, LOCAL(2),
  //  push(lines range(text s n))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2372, 25),
  POS(2372, 14),
  POS(2372, 13)
};

static TAB_NUM t_lambda_291[] = {
  0, // locals
  0, // parameters
  //  lines
  LET, 1, var_2362_1_lines, TAIL_CALL,
  POS(2373, 13)
};

static TAB_NUM t_lambda_292[] = {
  2, // locals
  0, // parameters
  // text(i) == '@nl;':
  var_2361_25_text, 1, var_2363_1_i, 1, LOCAL(1),
  // text(i) == '@nl;':
  var_std__equal, 2, LOCAL(1), chr_10, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_293, lambda_294, TAIL_CALL,
  POS(2376, 11),
  POS(2376, 11),
  POS(2375, 9)
};

static TAB_NUM t_lambda_293[] = {
  1, // locals
  0, // parameters
  // range(text s i)
  var_range, 3, var_2361_25_text, var_2365_1_s, var_2363_1_i, 1, LOCAL(1),
  // push &lines range(text s i)
  var_push, 2, var_2362_1_lines, LOCAL(1), 1, var_2362_1_lines,
  // !i i+1
  var_std__plus, 2, var_2363_1_i, num_1, 1, var_2363_1_i,
  // !s i
  LET, 1, var_2363_1_i, 1, var_2365_1_s,
  // next
  var_next, 0, TAIL_CALL,
  POS(2377, 25),
  POS(2377, 13),
  POS(2378, 13),
  POS(2379, 13),
  POS(2380, 13)
};

static TAB_NUM t_lambda_294[] = {
  0, // locals
  0, // parameters
  // !i i+1
  var_std__plus, 2, var_2363_1_i, num_1, 1, var_2363_1_i,
  // next
  var_next, 0, TAIL_CALL,
  POS(2382, 13),
  POS(2383, 13)
};

static TAB_NUM t_func_std__split_into_indented_lines[] = {
  1, // locals
  1, // parameters
  var_2444_0_text,
  // $n length_of(text)
  var_length_of, 1, var_2444_0_text, 1, LOCAL(1),
  // split 1 n
  func_split, 2, num_1, LOCAL(1), TAIL_CALL,
  POS(2446, 3),
  POS(2447, 3)
};

static TAB_NUM t_func_split[] = {
  3, // locals
  2, // parameters
  var_2449_9_s,
  var_2449_11_e,
  // e+1-s > FORK_TEXT_THRESHOLD: # recurse to exploit parallel execution
  var_std__plus, 2, var_2449_11_e, num_1, 1, LOCAL(1),
  // e+1-s > FORK_TEXT_THRESHOLD: # recurse to exploit parallel execution
  var_std__minus, 2, LOCAL(1), var_2449_9_s, 1, LOCAL(2),
  // FORK_TEXT_THRESHOLD: # recurse to exploit parallel execution
  var_std__less, 2, num_300, LOCAL(2), 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_295, lambda_296, TAIL_CALL,
  POS(2451, 7),
  POS(2451, 7),
  POS(2451, 15),
  POS(2450, 5)
};

static TAB_NUM t_lambda_295[] = {
  4, // locals
  0, // parameters
  // s+e) .div. 2
  var_std__plus, 2, var_2449_9_s, var_2449_11_e, 1, LOCAL(1),
  // $m (s+e) .div. 2
  var_div, 2, LOCAL(1), num_2, 1, LOCAL(4),
  // split(s m) split(m+1 e)
  func_split, 2, var_2449_9_s, LOCAL(4), 1, LOCAL(1),
  // m+1 e)
  var_std__plus, 2, LOCAL(4), num_1, 1, LOCAL(2),
  // split(m+1 e)
  func_split, 2, LOCAL(2), var_2449_11_e, 1, LOCAL(3),
  // append split(s m) split(m+1 e)
  var_append, 2, LOCAL(1), LOCAL(3), TAIL_CALL,
  POS(2452, 13),
  POS(2452, 9),
  POS(2453, 16),
  POS(2453, 33),
  POS(2453, 27),
  POS(2453, 9)
};

static TAB_NUM t_lambda_296[] = {
  2, // locals
  0, // parameters
  // $lines empty_list
  LET, 1, var_empty_list, 1, var_2455_1_lines,
  // s == 1 || text(s-1) == '@nl;'
  var_std__equal, 2, var_2449_9_s, num_1, 1, LOCAL(1),
  // s == 1 || text(s-1) == '@nl;'
  var_std__or, 2, LOCAL(1), lambda_297, 1, LOCAL(2),
  // $ls
  var_if, 3, LOCAL(2), lambda_298, lambda_299, 1, var_2456_1_ls,
  // from_to s e
  var_from_to, 4, var_2449_9_s, var_2449_11_e, lambda_300, lambda_303, TAIL_CALL,
  POS(2455, 9),
  POS(2458, 13),
  POS(2458, 13),
  POS(2456, 9),
  POS(2461, 9)
};

static TAB_NUM t_lambda_297[] = {
  3, // locals
  0, // parameters
  // s-1) == '@nl;'
  var_std__minus, 2, var_2449_9_s, num_1, 1, LOCAL(1),
  // text(s-1) == '@nl;'
  var_2444_0_text, 1, LOCAL(1), 1, LOCAL(2),
  // text(s-1) == '@nl;'
  var_std__equal, 2, LOCAL(2), chr_10, 1, LOCAL(3),
  // text(s-1) == '@nl;'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(2458, 28),
  POS(2458, 23),
  POS(2458, 23),
  POS(2458, 23)
};

static TAB_NUM t_lambda_298[] = {
  0, // locals
  0, // parameters
  //  s # the current block starts at a line start
  LET, 1, var_2449_9_s, TAIL_CALL,
  POS(2459, 15)
};

static TAB_NUM t_lambda_299[] = {
  0, // locals
  0, // parameters
  //  undefined # just skip the characters until the next line start
  LET, 1, var_undefined, TAIL_CALL,
  POS(2460, 15)
};

static TAB_NUM t_lambda_300[] = {
  2, // locals
  1, // parameters
  var_2462_3_i,
  // text(i) == '@nl;' next:
  var_2444_0_text, 1, var_2462_3_i, 1, LOCAL(1),
  // text(i) == '@nl;' next:
  var_std__equal, 2, LOCAL(1), chr_10, 1, LOCAL(2),
  // if_not text(i) == '@nl;' next:
  var_if_not, 3, LOCAL(2), var_next, lambda_301, TAIL_CALL,
  POS(2463, 20),
  POS(2463, 20),
  POS(2463, 13)
};

static TAB_NUM t_lambda_301[] = {
  1, // locals
  0, // parameters
  // is_defined:
  var_is_defined, 1, var_2456_1_ls, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_ls_is_defined, lambda_302, TAIL_CALL,
  POS(2465, 20),
  POS(2464, 15)
};

static TAB_NUM t_lambda_ls_is_defined[] = {
  1, // locals
  0, // parameters
  // create_line(ls i)
  func_create_line, 2, var_2456_1_ls, var_2462_3_i, 1, LOCAL(1),
  // push &lines create_line(ls i)
  var_push, 2, var_2455_1_lines, LOCAL(1), 1, var_2455_1_lines,
  // !ls i+1
  var_std__plus, 2, var_2462_3_i, num_1, 1, var_2456_1_ls,
  // next
  var_next, 0, TAIL_CALL,
  POS(2466, 31),
  POS(2466, 19),
  POS(2467, 19),
  POS(2468, 19)
};

static TAB_NUM t_lambda_302[] = {
  0, // locals
  0, // parameters
  // !ls i+1
  var_std__plus, 2, var_2462_3_i, num_1, 1, var_2456_1_ls,
  // next
  var_next, 0, TAIL_CALL,
  POS(2470, 19),
  POS(2471, 19)
};

static TAB_NUM t_lambda_303[] = {
  2, // locals
  0, // parameters
  // is_defined && ls <= e:
  var_is_defined, 1, var_2456_1_ls, 1, LOCAL(1),
  // is_defined && ls <= e:
  var_std__and, 2, LOCAL(1), lambda_304, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_305, lambda_307, TAIL_CALL,
  POS(2474, 18),
  POS(2474, 18),
  POS(2473, 13)
};

static TAB_NUM t_lambda_304[] = {
  2, // locals
  0, // parameters
  // e:
  var_std__less, 2, var_2449_11_e, var_2456_1_ls, 1, LOCAL(1),
  // e:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // ls <= e:
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2474, 38),
  POS(2474, 38),
  POS(2474, 32)
};

static TAB_NUM t_lambda_305[] = {
  0, // locals
  0, // parameters
  // loop: # the last line extends into the next block
  var_loop, 1, lambda_16_loop, TAIL_CALL,
  POS(2475, 17)
};

static TAB_NUM t_lambda_16_loop[] = {
  2, // locals
  0, // parameters
  // !e e+1
  var_std__plus, 2, var_2449_11_e, num_1, 1, var_2449_11_e,
  // text(e) == '@nl;'
  var_2444_0_text, 1, var_2449_11_e, 1, LOCAL(1),
  // text(e) == '@nl;'
  var_std__equal, 2, LOCAL(1), chr_10, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_306, var_next, TAIL_CALL,
  POS(2476, 19),
  POS(2478, 21),
  POS(2478, 21),
  POS(2477, 19)
};

static TAB_NUM t_lambda_306[] = {
  2, // locals
  0, // parameters
  // create_line(ls e))
  func_create_line, 2, var_2456_1_ls, var_2449_11_e, 1, LOCAL(1),
  // push(lines create_line(ls e))
  var_push, 2, var_2455_1_lines, LOCAL(1), 1, LOCAL(2),
  //  push(lines create_line(ls e))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2479, 35),
  POS(2479, 24),
  POS(2479, 23)
};

static TAB_NUM t_lambda_307[] = {
  0, // locals
  0, // parameters
  //  lines
  LET, 1, var_2455_1_lines, TAIL_CALL,
  POS(2481, 17)
};

static TAB_NUM t_func_create_line[] = {
  0, // locals
  2, // parameters
  var_2483_15_s,
  var_2483_17_e,
  // $indent 0
  LET, 1, num_0, 1, var_2484_1_indent,
  // loop:
  var_loop, 1, lambda_17_loop, TAIL_CALL,
  POS(2484, 5),
  POS(2485, 5)
};

static TAB_NUM t_lambda_17_loop[] = {
  2, // locals
  0, // parameters
  // text(s) == '@ht;':
  var_2444_0_text, 1, var_2483_15_s, 1, LOCAL(1),
  // text(s) == '@ht;':
  var_std__equal, 2, LOCAL(1), chr_9, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_308, lambda_309, TAIL_CALL,
  POS(2487, 9),
  POS(2487, 9),
  POS(2486, 7)
};

static TAB_NUM t_lambda_308[] = {
  0, // locals
  0, // parameters
  // !indent indent+8
  var_std__plus, 2, var_2484_1_indent, num_8, 1, var_2484_1_indent,
  // !s s+1
  var_std__plus, 2, var_2483_15_s, num_1, 1, var_2483_15_s,
  // next
  var_next, 0, TAIL_CALL,
  POS(2488, 11),
  POS(2489, 11),
  POS(2490, 11)
};

static TAB_NUM t_lambda_309[] = {
  2, // locals
  0, // parameters
  // text(s) == ' ':
  var_2444_0_text, 1, var_2483_15_s, 1, LOCAL(1),
  // text(s) == ' ':
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_310, lambda_311, TAIL_CALL,
  POS(2493, 13),
  POS(2493, 13),
  POS(2492, 11)
};

static TAB_NUM t_lambda_310[] = {
  0, // locals
  0, // parameters
  // !indent indent+1
  var_std__plus, 2, var_2484_1_indent, num_1, 1, var_2484_1_indent,
  // !s s+1
  var_std__plus, 2, var_2483_15_s, num_1, 1, var_2483_15_s,
  // next
  var_next, 0, TAIL_CALL,
  POS(2494, 15),
  POS(2495, 15),
  POS(2496, 15)
};

static TAB_NUM t_lambda_311[] = {
  1, // locals
  0, // parameters
  // $line_text range(text s e)
  var_range, 3, var_2444_0_text, var_2483_15_s, var_2483_17_e, 1, var_2498_1_line_text,
  // line_text == "@nl;"
  var_std__equal, 2, var_2498_1_line_text, string_9, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_312, lambda_313, TAIL_CALL,
  POS(2498, 15),
  POS(2500, 17),
  POS(2499, 15)
};

static TAB_NUM t_lambda_312[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(2501, 19)
};

static TAB_NUM t_lambda_313[] = {
  1, // locals
  0, // parameters
  // tuple(indent line_text)
  var_tuple, 2, var_2484_1_indent, var_2498_1_line_text, 1, LOCAL(1),
  //  tuple(indent line_text)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(2502, 20),
  POS(2502, 19)
};

static TAB_NUM t_func_indent_of[] = {
  1, // locals
  1, // parameters
  var_2509_13_line,
  // is_defined
  var_is_defined, 1, var_2509_13_line, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_314, lambda_315, TAIL_CALL,
  POS(2511, 10),
  POS(2510, 3)
};

static TAB_NUM t_lambda_314[] = {
  1, // locals
  0, // parameters
  // first(line)
  var_first, 1, var_2509_13_line, 1, LOCAL(1),
  //  first(line)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(2512, 8),
  POS(2512, 7)
};

static TAB_NUM t_lambda_315[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(2513, 7)
};

static TAB_NUM t_func_std__split_into_groups[] = {
  0, // locals
  1, // parameters
  var_2566_0_lines,
  // $n length_of(lines)
  var_length_of, 1, var_2566_0_lines, 1, var_2568_1_n,
  // $fv 1 # first valid line
  LET, 1, num_1, 1, var_2569_1_fv,
  // loop:
  var_loop, 1, lambda_18_loop, TAIL_CALL,
  POS(2568, 3),
  POS(2569, 3),
  POS(2570, 3)
};

static TAB_NUM t_lambda_18_loop[] = {
  2, // locals
  0, // parameters
  // n:
  var_std__less, 2, var_2568_1_n, var_2569_1_fv, 1, LOCAL(1),
  // n:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_316, lambda_318, TAIL_CALL,
  POS(2572, 13),
  POS(2572, 13),
  POS(2571, 5)
};

static TAB_NUM t_lambda_316[] = {
  1, // locals
  0, // parameters
  // lines(fv))
  var_2566_0_lines, 1, var_2569_1_fv, 1, LOCAL(1),
  // $indent indent_of(lines(fv))
  func_indent_of, 1, LOCAL(1), 1, var_2573_1_indent,
  // is_defined:
  var_is_defined, 1, var_2573_1_indent, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_indent_is_defined, lambda_317, TAIL_CALL,
  POS(2573, 27),
  POS(2573, 9),
  POS(2575, 18),
  POS(2574, 9)
};

static TAB_NUM t_lambda_indent_is_defined[] = {
  0, // locals
  0, // parameters
  // split fv n indent undefined
  func_2_split, 4, var_2569_1_fv, var_2568_1_n, var_2573_1_indent, var_undefined, TAIL_CALL,
  POS(2576, 13)
};

static TAB_NUM t_lambda_317[] = {
  0, // locals
  0, // parameters
  // !fv fv+1
  var_std__plus, 2, var_2569_1_fv, num_1, 1, var_2569_1_fv,
  // next
  var_next, 0, TAIL_CALL,
  POS(2578, 13),
  POS(2579, 13)
};

static TAB_NUM t_lambda_318[] = {
  0, // locals
  0, // parameters
  //  empty_list
  LET, 1, var_empty_list, TAIL_CALL,
  POS(2580, 9)
};

static TAB_NUM t_func_2_split[] = {
  3, // locals
  4, // parameters
  var_2582_9_s,
  var_2582_11_e,
  var_2582_13_indent,
  var_2582_20_gs,
  // e+1-s > FORK_LINES_THRESHOLD: # recurse to exploit parallel execution
  var_std__plus, 2, var_2582_11_e, num_1, 1, LOCAL(1),
  // e+1-s > FORK_LINES_THRESHOLD: # recurse to exploit parallel execution
  var_std__minus, 2, LOCAL(1), var_2582_9_s, 1, LOCAL(2),
  // FORK_LINES_THRESHOLD: # recurse to exploit parallel execution
  var_std__less, 2, num_20, LOCAL(2), 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_319, lambda_320, TAIL_CALL,
  POS(2584, 7),
  POS(2584, 7),
  POS(2584, 15),
  POS(2583, 5)
};

static TAB_NUM t_lambda_319[] = {
  4, // locals
  0, // parameters
  // s+e) .div. 2
  var_std__plus, 2, var_2582_9_s, var_2582_11_e, 1, LOCAL(1),
  // $m (s+e) .div. 2
  var_div, 2, LOCAL(1), num_2, 1, LOCAL(4),
  // split(s m indent gs) split(m+1 e indent undefined)
  func_2_split, 4, var_2582_9_s, LOCAL(4), var_2582_13_indent, var_2582_20_gs, 1, LOCAL(1),
  // m+1 e indent undefined)
  var_std__plus, 2, LOCAL(4), num_1, 1, LOCAL(2),
  // split(m+1 e indent undefined)
  func_2_split, 4, LOCAL(2), var_2582_11_e, var_2582_13_indent, var_undefined, 1, LOCAL(3),
  // append split(s m indent gs) split(m+1 e indent undefined)
  var_append, 2, LOCAL(1), LOCAL(3), TAIL_CALL,
  POS(2585, 13),
  POS(2585, 9),
  POS(2586, 16),
  POS(2586, 43),
  POS(2586, 37),
  POS(2586, 9)
};

static TAB_NUM t_lambda_320[] = {
  0, // locals
  0, // parameters
  // $groups empty_list
  LET, 1, var_empty_list, 1, var_2588_1_groups,
  // $minimum_indent VERY_LARGE_INDENT
  LET, 1, num_9999, 1, var_2589_1_minimum_indent,
  // $ge gs
  LET, 1, var_2582_20_gs, 1, var_2590_1_ge,
  // from_to s e
  var_from_to, 4, var_2582_9_s, var_2582_11_e, lambda_321, lambda_329, TAIL_CALL,
  POS(2588, 9),
  POS(2589, 9),
  POS(2590, 9),
  POS(2591, 9)
};

static TAB_NUM t_lambda_321[] = {
  1, // locals
  1, // parameters
  var_2592_3_i,
  // lines(i))
  var_2566_0_lines, 1, var_2592_3_i, 1, LOCAL(1),
  // $current_indent indent_of(lines(i))
  func_indent_of, 1, LOCAL(1), 1, var_2593_1_current_indent,
  // current_indent == indent:
  var_std__equal, 2, var_2593_1_current_indent, var_2582_13_indent, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_322, lambda_326, TAIL_CALL,
  POS(2593, 39),
  POS(2593, 13),
  POS(2595, 15),
  POS(2594, 13)
};

static TAB_NUM t_lambda_322[] = {
  2, // locals
  0, // parameters
  // is_defined && gs < i:
  var_is_defined, 1, var_2582_20_gs, 1, LOCAL(1),
  // is_defined && gs < i:
  var_std__and, 2, LOCAL(1), lambda_323, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_324, lambda_325, TAIL_CALL,
  POS(2597, 22),
  POS(2597, 22),
  POS(2596, 17)
};

static TAB_NUM t_lambda_323[] = {
  1, // locals
  0, // parameters
  // gs < i:
  var_std__less, 2, var_2582_20_gs, var_2592_3_i, 1, LOCAL(1),
  // gs < i:
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(2597, 36),
  POS(2597, 36)
};

static TAB_NUM t_lambda_324[] = {
  0, // locals
  0, // parameters
  // add_groups !groups ge
  func_add_groups, 1, var_2590_1_ge, 1, var_2588_1_groups,
  // start_new_fragment_and_next i
  func_start_new_fragment_and_next, 1, var_2592_3_i, TAIL_CALL,
  POS(2598, 21),
  POS(2599, 21)
};

static TAB_NUM t_lambda_325[] = {
  0, // locals
  0, // parameters
  // start_new_fragment_and_next i
  func_start_new_fragment_and_next, 1, var_2592_3_i, TAIL_CALL,
  POS(2601, 21)
};

static TAB_NUM t_lambda_326[] = {
  1, // locals
  0, // parameters
  // is_defined
  var_is_defined, 1, var_2593_1_current_indent, 1, LOCAL(1),
  // !ge
  var_if, 3, LOCAL(1), lambda_327, lambda_328, 1, var_2590_1_ge,
  // reduce_minimum_indent_and_next current_indent
  func_reduce_minimum_indent_and_next, 1, var_2593_1_current_indent, TAIL_CALL,
  POS(2605, 36),
  POS(2603, 17),
  POS(2608, 17)
};

static TAB_NUM t_lambda_327[] = {
  0, // locals
  0, // parameters
  //  i
  LET, 1, var_2592_3_i, TAIL_CALL,
  POS(2606, 23)
};

static TAB_NUM t_lambda_328[] = {
  0, // locals
  0, // parameters
  //  ge
  LET, 1, var_2590_1_ge, TAIL_CALL,
  POS(2607, 23)
};

static TAB_NUM t_lambda_329[] = {
  1, // locals
  0, // parameters
  // is_defined:
  var_is_defined, 1, var_2582_20_gs, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_gs_is_defined, lambda_337, TAIL_CALL,
  POS(2611, 18),
  POS(2610, 13)
};

static TAB_NUM t_lambda_gs_is_defined[] = {
  0, // locals
  0, // parameters
  // loop: # the last group extends into the next block
  var_loop, 1, lambda_19_loop, TAIL_CALL,
  POS(2612, 17)
};

static TAB_NUM t_lambda_19_loop[] = {
  1, // locals
  0, // parameters
  // !e e+1
  var_std__plus, 2, var_2582_11_e, num_1, 1, var_2582_11_e,
  // n
  var_std__less, 2, var_2568_1_n, var_2582_11_e, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_330, lambda_331, TAIL_CALL,
  POS(2613, 19),
  POS(2615, 25),
  POS(2614, 19)
};

static TAB_NUM t_lambda_330[] = {
  1, // locals
  0, // parameters
  // add_groups(ge)
  func_add_groups, 1, var_2590_1_ge, 1, LOCAL(1),
  //  add_groups(ge)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(2616, 24),
  POS(2616, 23)
};

static TAB_NUM t_lambda_331[] = {
  2, // locals
  0, // parameters
  // lines(e))
  var_2566_0_lines, 1, var_2582_11_e, 1, LOCAL(1),
  // $current_indent indent_of(lines(e))
  func_indent_of, 1, LOCAL(1), 1, var_2618_1_current_indent,
  // is_defined && current_indent <= indent
  var_is_defined, 1, var_2618_1_current_indent, 1, LOCAL(1),
  // is_defined && current_indent <= indent
  var_std__and, 2, LOCAL(1), lambda_332, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_333, lambda_334, TAIL_CALL,
  POS(2618, 49),
  POS(2618, 23),
  POS(2620, 40),
  POS(2620, 40),
  POS(2619, 23)
};

static TAB_NUM t_lambda_332[] = {
  2, // locals
  0, // parameters
  // indent
  var_std__less, 2, var_2582_13_indent, var_2618_1_current_indent, 1, LOCAL(1),
  // indent
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // current_indent <= indent
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2620, 72),
  POS(2620, 72),
  POS(2620, 54)
};

static TAB_NUM t_lambda_333[] = {
  1, // locals
  0, // parameters
  // add_groups(ge)
  func_add_groups, 1, var_2590_1_ge, 1, LOCAL(1),
  //  add_groups(ge)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(2621, 28),
  POS(2621, 27)
};

static TAB_NUM t_lambda_334[] = {
  1, // locals
  0, // parameters
  // is_defined
  var_is_defined, 1, var_2618_1_current_indent, 1, LOCAL(1),
  // !ge
  var_if, 3, LOCAL(1), lambda_335, lambda_336, 1, var_2590_1_ge,
  // reduce_minimum_indent_and_next current_indent
  func_reduce_minimum_indent_and_next, 1, var_2618_1_current_indent, TAIL_CALL,
  POS(2625, 46),
  POS(2623, 27),
  POS(2628, 27)
};

static TAB_NUM t_lambda_335[] = {
  0, // locals
  0, // parameters
  //  e
  LET, 1, var_2582_11_e, TAIL_CALL,
  POS(2626, 33)
};

static TAB_NUM t_lambda_336[] = {
  0, // locals
  0, // parameters
  //  ge
  LET, 1, var_2590_1_ge, TAIL_CALL,
  POS(2627, 33)
};

static TAB_NUM t_lambda_337[] = {
  0, // locals
  0, // parameters
  //  groups
  LET, 1, var_2588_1_groups, TAIL_CALL,
  POS(2629, 17)
};

static TAB_NUM t_func_add_groups[] = {
  1, // locals
  1, // parameters
  var_2631_14_l,
  // gs == l
  var_std__equal, 2, var_2582_20_gs, var_2631_14_l, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_338, lambda_339, TAIL_CALL,
  POS(2633, 13),
  POS(2632, 11)
};

static TAB_NUM t_lambda_338[] = {
  2, // locals
  0, // parameters
  // lines(gs))
  var_2566_0_lines, 1, var_2582_20_gs, 1, LOCAL(1),
  // push(groups lines(gs))
  var_push, 2, var_2588_1_groups, LOCAL(1), 1, LOCAL(2),
  //  push(groups lines(gs))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2634, 28),
  POS(2634, 16),
  POS(2634, 15)
};

static TAB_NUM t_lambda_339[] = {
  1, // locals
  0, // parameters
  // minimum_indent == VERY_LARGE_INDENT
  var_std__equal, 2, var_2589_1_minimum_indent, num_9999, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_340, lambda_341, TAIL_CALL,
  POS(2637, 17),
  POS(2636, 15)
};

static TAB_NUM t_lambda_340[] = {
  2, // locals
  0, // parameters
  // range(lines gs l))
  var_range, 3, var_2566_0_lines, var_2582_20_gs, var_2631_14_l, 1, LOCAL(1),
  // append(groups range(lines gs l))
  var_append, 2, var_2588_1_groups, LOCAL(1), 1, LOCAL(2),
  //  append(groups range(lines gs l))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2638, 34),
  POS(2638, 20),
  POS(2638, 19)
};

static TAB_NUM t_lambda_341[] = {
  4, // locals
  0, // parameters
  // $headline lines(gs)
  var_2566_0_lines, 1, var_2582_20_gs, 1, LOCAL(4),
  // gs+1 l))
  var_std__plus, 2, var_2582_20_gs, num_1, 1, LOCAL(1),
  // range(lines gs+1 l))
  var_range, 3, var_2566_0_lines, LOCAL(1), var_2631_14_l, 1, LOCAL(2),
  // .subgroups_of range(lines gs+1 l))
  LET, -1, LOCAL(4), var_subgroups_of, LOCAL(2), LOCAL(3),
  // push groups headline(.subgroups_of range(lines gs+1 l))
  var_push, 2, var_2588_1_groups, LOCAL(3), TAIL_CALL,
  POS(2640, 19),
  POS(2641, 66),
  POS(2641, 54),
  POS(2641, 40),
  POS(2641, 19)
};

static TAB_NUM t_func_reduce_minimum_indent_and_next[] = {
  2, // locals
  1, // parameters
  var_2643_34_current_indent,
  // is_defined && current_indent < minimum_indent:
  var_is_defined, 1, var_2643_34_current_indent, 1, LOCAL(1),
  // is_defined && current_indent < minimum_indent:
  var_std__and, 2, LOCAL(1), lambda_342, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_343, var_next, TAIL_CALL,
  POS(2645, 28),
  POS(2645, 28),
  POS(2644, 11)
};

static TAB_NUM t_lambda_342[] = {
  1, // locals
  0, // parameters
  // current_indent < minimum_indent:
  var_std__less, 2, var_2643_34_current_indent, var_2589_1_minimum_indent, 1, LOCAL(1),
  // current_indent < minimum_indent:
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(2645, 42),
  POS(2645, 42)
};

static TAB_NUM t_lambda_343[] = {
  0, // locals
  0, // parameters
  // !minimum_indent current_indent
  LET, 1, var_2643_34_current_indent, 1, var_2589_1_minimum_indent,
  // next
  var_next, 0, TAIL_CALL,
  POS(2646, 15),
  POS(2647, 15)
};

static TAB_NUM t_func_start_new_fragment_and_next[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 2650_31_i
  // !minimum_indent VERY_LARGE_INDENT
  LET, 1, num_9999, 1, var_2589_1_minimum_indent,
  // !gs i
  LET, 1, LOCAL(1), 1, var_2582_20_gs,
  // !ge i
  LET, 1, LOCAL(1), 1, var_2590_1_ge,
  // next
  var_next, 0, TAIL_CALL,
  POS(2651, 11),
  POS(2652, 11),
  POS(2653, 11),
  POS(2654, 11)
};

static TAB_NUM t_func_std__wrap_words[] = {
  0, // locals
  2, // parameters
  var_2683_0_text,
  var_2684_0_width,
  // $wrapped_text ""
  LET, 1, string_1, 1, var_2686_1_wrapped_text,
  // $n length_of(text)
  var_length_of, 1, var_2683_0_text, 1, var_2687_1_n,
  // $s 1 # start of not yet copied text
  LET, 1, num_1, 1, var_2688_1_s,
  // $l s # line start position
  LET, 1, var_2688_1_s, 1, var_2689_1_l,
  // $b undefined # possible break position
  LET, 1, var_undefined, 1, var_2690_1_b,
  // $i 1
  LET, 1, num_1, 1, var_2691_1_i,
  // loop:
  var_loop, 1, lambda_20_loop, TAIL_CALL,
  POS(2686, 3),
  POS(2687, 3),
  POS(2688, 3),
  POS(2689, 3),
  POS(2690, 3),
  POS(2691, 3),
  POS(2692, 3)
};

static TAB_NUM t_lambda_20_loop[] = {
  1, // locals
  0, // parameters
  // n
  var_std__less, 2, var_2687_1_n, var_2691_1_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_344, lambda_345, TAIL_CALL,
  POS(2694, 11),
  POS(2693, 5)
};

static TAB_NUM t_lambda_344[] = {
  2, // locals
  0, // parameters
  // range(text s n))
  var_range, 3, var_2683_0_text, var_2688_1_s, var_2687_1_n, 1, LOCAL(1),
  // append(wrapped_text range(text s n))
  var_append, 2, var_2686_1_wrapped_text, LOCAL(1), 1, LOCAL(2),
  //  append(wrapped_text range(text s n))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2695, 30),
  POS(2695, 10),
  POS(2695, 9)
};

static TAB_NUM t_lambda_345[] = {
  1, // locals
  0, // parameters
  // $chr text(i)
  var_2683_0_text, 1, var_2691_1_i, 1, var_2697_1_chr,
  // chr == '@nl;':
  var_std__equal, 2, var_2697_1_chr, chr_10, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_346, lambda_347, TAIL_CALL,
  POS(2697, 9),
  POS(2699, 11),
  POS(2698, 9)
};

static TAB_NUM t_lambda_346[] = {
  0, // locals
  0, // parameters
  // !i i+1
  var_std__plus, 2, var_2691_1_i, num_1, 1, var_2691_1_i,
  // !l i
  LET, 1, var_2691_1_i, 1, var_2689_1_l,
  // !b undefined
  LET, 1, var_undefined, 1, var_2690_1_b,
  // next
  var_next, 0, TAIL_CALL,
  POS(2700, 13),
  POS(2701, 13),
  POS(2702, 13),
  POS(2703, 13)
};

static TAB_NUM t_lambda_347[] = {
  1, // locals
  0, // parameters
  // chr == ' ':
  var_std__equal, 2, var_2697_1_chr, chr_32, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_348, lambda_351, TAIL_CALL,
  POS(2706, 15),
  POS(2705, 13)
};

static TAB_NUM t_lambda_348[] = {
  2, // locals
  0, // parameters
  // i-l == width: # break
  var_std__minus, 2, var_2691_1_i, var_2689_1_l, 1, LOCAL(1),
  // i-l == width: # break
  var_std__equal, 2, LOCAL(1), var_2684_0_width, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_349, lambda_350, TAIL_CALL,
  POS(2708, 19),
  POS(2708, 19),
  POS(2707, 17)
};

static TAB_NUM t_lambda_349[] = {
  2, // locals
  0, // parameters
  // i-1)
  var_std__minus, 2, var_2691_1_i, num_1, 1, LOCAL(1),
  // range(text s i-1)
  var_range, 3, var_2683_0_text, var_2688_1_s, LOCAL(1), 1, LOCAL(2),
  // append &wrapped_text range(text s i-1)
  var_append, 2, var_2686_1_wrapped_text, LOCAL(2), 1, var_2686_1_wrapped_text,
  // push &wrapped_text '@nl;'
  var_push, 2, var_2686_1_wrapped_text, chr_10, 1, var_2686_1_wrapped_text,
  // !i i+1
  var_std__plus, 2, var_2691_1_i, num_1, 1, var_2691_1_i,
  // !s i
  LET, 1, var_2691_1_i, 1, var_2688_1_s,
  // !l s
  LET, 1, var_2688_1_s, 1, var_2689_1_l,
  // !b undefined
  LET, 1, var_undefined, 1, var_2690_1_b,
  // next
  var_next, 0, TAIL_CALL,
  POS(2709, 55),
  POS(2709, 42),
  POS(2709, 21),
  POS(2710, 21),
  POS(2711, 21),
  POS(2712, 21),
  POS(2713, 21),
  POS(2714, 21),
  POS(2715, 21)
};

static TAB_NUM t_lambda_350[] = {
  0, // locals
  0, // parameters
  // !b i
  LET, 1, var_2691_1_i, 1, var_2690_1_b,
  // !i i+1
  var_std__plus, 2, var_2691_1_i, num_1, 1, var_2691_1_i,
  // next
  var_next, 0, TAIL_CALL,
  POS(2717, 21),
  POS(2718, 21),
  POS(2719, 21)
};

static TAB_NUM t_lambda_351[] = {
  3, // locals
  0, // parameters
  // !i i+1
  var_std__plus, 2, var_2691_1_i, num_1, 1, var_2691_1_i,
  // i-l <= width
  var_std__minus, 2, var_2691_1_i, var_2689_1_l, 1, LOCAL(1),
  // width
  var_std__less, 2, var_2684_0_width, LOCAL(1), 1, LOCAL(2),
  // width
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), var_next, lambda_352, TAIL_CALL,
  POS(2721, 17),
  POS(2723, 19),
  POS(2723, 26),
  POS(2723, 26),
  POS(2722, 17)
};

static TAB_NUM t_lambda_352[] = {
  1, // locals
  0, // parameters
  // is_defined: # wrap
  var_is_defined, 1, var_2690_1_b, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_b_is_defined, lambda_353, TAIL_CALL,
  POS(2727, 25),
  POS(2726, 21)
};

static TAB_NUM t_lambda_b_is_defined[] = {
  2, // locals
  0, // parameters
  // b-1)
  var_std__minus, 2, var_2690_1_b, num_1, 1, LOCAL(1),
  // range(text s b-1)
  var_range, 3, var_2683_0_text, var_2688_1_s, LOCAL(1), 1, LOCAL(2),
  // append &wrapped_text range(text s b-1)
  var_append, 2, var_2686_1_wrapped_text, LOCAL(2), 1, var_2686_1_wrapped_text,
  // push &wrapped_text '@nl;'
  var_push, 2, var_2686_1_wrapped_text, chr_10, 1, var_2686_1_wrapped_text,
  // !s b+1
  var_std__plus, 2, var_2690_1_b, num_1, 1, var_2688_1_s,
  // !l s
  LET, 1, var_2688_1_s, 1, var_2689_1_l,
  // !b undefined
  LET, 1, var_undefined, 1, var_2690_1_b,
  // next
  var_next, 0, TAIL_CALL,
  POS(2728, 59),
  POS(2728, 46),
  POS(2728, 25),
  POS(2729, 25),
  POS(2730, 25),
  POS(2731, 25),
  POS(2732, 25),
  POS(2733, 25)
};

static TAB_NUM t_lambda_353[] = {
  2, // locals
  0, // parameters
  // i-2)
  var_std__minus, 2, var_2691_1_i, num_2, 1, LOCAL(1),
  // range(text s i-2)
  var_range, 3, var_2683_0_text, var_2688_1_s, LOCAL(1), 1, LOCAL(2),
  // append &wrapped_text range(text s i-2)
  var_append, 2, var_2686_1_wrapped_text, LOCAL(2), 1, var_2686_1_wrapped_text,
  // push &wrapped_text '@nl;'
  var_push, 2, var_2686_1_wrapped_text, chr_10, 1, var_2686_1_wrapped_text,
  // !s i-1
  var_std__minus, 2, var_2691_1_i, num_1, 1, var_2688_1_s,
  // !l s
  LET, 1, var_2688_1_s, 1, var_2689_1_l,
  // next
  var_next, 0, TAIL_CALL,
  POS(2735, 59),
  POS(2735, 46),
  POS(2735, 25),
  POS(2736, 25),
  POS(2737, 25),
  POS(2738, 25),
  POS(2739, 25)
};

static TAB_NUM t_func_std_types__string___serialize[] = {
  0, // locals
  -2, // parameters
  MANDATORY_PARAMETER, var_2759_0_self,
  var_undefined, var_2760_0_indent,
  // $str "@quot;"
  LET, 1, string_10, 1, var_2762_1_str,
  // $s 1
  LET, 1, num_1, 1, var_2763_1_s,
  // for_each self
  var_for_each, 3, var_2759_0_self, lambda_354, lambda_359, TAIL_CALL,
  POS(2762, 3),
  POS(2763, 3),
  POS(2764, 3)
};

static TAB_NUM t_lambda_354[] = {
  2, // locals
  2, // parameters
  var_2765_3_idx,
  var_2765_7_chr,
  // chr < '@0x20;' || chr > '@0x7e;' || chr == '"' || chr == '@@':
  var_std__less, 2, var_2765_7_chr, chr_32, 1, LOCAL(1),
  // chr < '@0x20;' || chr > '@0x7e;' || chr == '"' || chr == '@@':
  var_std__or, 2, LOCAL(1), lambda_355, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_358, var_next, TAIL_CALL,
  POS(2767, 9),
  POS(2767, 9),
  POS(2766, 7)
};

static TAB_NUM t_lambda_355[] = {
  2, // locals
  0, // parameters
  // 0x7e;' || chr == '"' || chr == '@@':
  var_std__less, 2, chr_126, var_2765_7_chr, 1, LOCAL(1),
  // 0x7e;' || chr == '"' || chr == '@@':
  var_std__or, 2, LOCAL(1), lambda_356, 1, LOCAL(2),
  // chr > '@0x7e;' || chr == '"' || chr == '@@':
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2767, 35),
  POS(2767, 35),
  POS(2767, 27)
};

static TAB_NUM t_lambda_356[] = {
  2, // locals
  0, // parameters
  // chr == '"' || chr == '@@':
  var_std__equal, 2, var_2765_7_chr, chr_34, 1, LOCAL(1),
  // chr == '"' || chr == '@@':
  var_std__or, 2, LOCAL(1), lambda_357, 1, LOCAL(2),
  // chr == '"' || chr == '@@':
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2767, 45),
  POS(2767, 45),
  POS(2767, 45)
};

static TAB_NUM t_lambda_357[] = {
  1, // locals
  0, // parameters
  // chr == '@@':
  var_std__equal, 2, var_2765_7_chr, chr_64, 1, LOCAL(1),
  // chr == '@@':
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(2767, 59),
  POS(2767, 59)
};

static TAB_NUM t_lambda_358[] = {
  2, // locals
  0, // parameters
  // idx-1)
  var_std__minus, 2, var_2765_3_idx, num_1, 1, LOCAL(1),
  // range(self s idx-1)
  var_range, 3, var_2759_0_self, var_2763_1_s, LOCAL(1), 1, LOCAL(2),
  // append &str range(self s idx-1)
  var_append, 2, var_2762_1_str, LOCAL(2), 1, var_2762_1_str,
  // to_integer);"
  var_to_integer, 1, var_2765_7_chr, 1, LOCAL(1),
  // "@@@(chr.to_integer);"
  var_std__string, 3, string_11, LOCAL(1), string_12, 1, LOCAL(2),
  // append &str "@@@(chr.to_integer);"
  var_append, 2, var_2762_1_str, LOCAL(2), 1, var_2762_1_str,
  // !s idx+1
  var_std__plus, 2, var_2765_3_idx, num_1, 1, var_2763_1_s,
  // next
  var_next, 0, TAIL_CALL,
  POS(2768, 36),
  POS(2768, 23),
  POS(2768, 11),
  POS(2769, 32),
  POS(2769, 23),
  POS(2769, 11),
  POS(2770, 11),
  POS(2771, 11)
};

static TAB_NUM t_lambda_359[] = {
  1, // locals
  0, // parameters
  // range(self s -1)
  var_range, 3, var_2759_0_self, var_2763_1_s, minus_num_1, 1, LOCAL(1),
  // append &str range(self s -1)
  var_append, 2, var_2762_1_str, LOCAL(1), 1, var_2762_1_str,
  // append &str "@quot;@nl;"
  var_append, 2, var_2762_1_str, string_13, 1, var_2762_1_str,
  // is_defined
  var_is_defined, 1, var_2760_0_indent, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_360, lambda_361, TAIL_CALL,
  POS(2774, 19),
  POS(2774, 7),
  POS(2775, 7),
  POS(2777, 16),
  POS(2776, 7)
};

static TAB_NUM t_lambda_360[] = {
  2, // locals
  0, // parameters
  // tabs_and_spaces(indent) str)
  var_tabs_and_spaces, 1, var_2760_0_indent, 1, LOCAL(1),
  // append(tabs_and_spaces(indent) str)
  var_append, 2, LOCAL(1), var_2762_1_str, 1, LOCAL(2),
  //  append(tabs_and_spaces(indent) str)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2778, 19),
  POS(2778, 12),
  POS(2778, 11)
};

static TAB_NUM t_lambda_361[] = {
  0, // locals
  0, // parameters
  //  str
  LET, 1, var_2762_1_str, TAIL_CALL,
  POS(2779, 11)
};

static TAB_NUM t_func_std_types__octet_string___to_uint8_array[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 2795_0_self
  // length_of(self))
  var_length_of, 1, LOCAL(2), 1, LOCAL(1),
  // $arr uint8_array(length_of(self))
  var_uint8_array, 1, LOCAL(1), 1, var_2797_1_arr,
  // for_each self
  var_for_each, 3, LOCAL(2), lambda_362, lambda_363, TAIL_CALL,
  POS(2797, 20),
  POS(2797, 3),
  POS(2798, 3)
};

static TAB_NUM t_lambda_362[] = {
  4, // locals
  2, // parameters
  LOCAL(3), // 2799_3_idx
  LOCAL(4), // 2799_7_chr
  // !arr(idx) chr.to_integer
  var_to_integer, 1, LOCAL(4), 1, LOCAL(2),
  // arr(idx) chr.to_integer
  var_2797_1_arr, 2, LOCAL(3), LOCAL(2), 1, var_2797_1_arr,
  // next
  var_next, 0, TAIL_CALL,
  POS(2800, 7),
  POS(2800, 8),
  POS(2801, 7)
};

static TAB_NUM t_lambda_363[] = {
  0, // locals
  0, // parameters
  //  arr
  LET, 1, var_2797_1_arr, TAIL_CALL,
  POS(2802, 7)
};

static TAB_NUM t_func_std__indented[] = {
  0, // locals
  2, // parameters
  var_2834_0_indent,
  var_2835_0_text,
  // $indented_text ""
  LET, 1, string_1, 1, var_2837_1_indented_text,
  // $new_indent undefined
  LET, 1, var_undefined, 1, var_2838_1_new_indent,
  // $i 1
  LET, 1, num_1, 1, var_2839_1_i,
  // $n length_of(text)
  var_length_of, 1, var_2835_0_text, 1, var_2840_1_n,
  // loop:
  var_loop, 1, lambda_21_loop, TAIL_CALL,
  POS(2837, 3),
  POS(2838, 3),
  POS(2839, 3),
  POS(2840, 3),
  POS(2841, 3)
};

static TAB_NUM t_lambda_21_loop[] = {
  2, // locals
  0, // parameters
  // !new_indent indent
  LET, 1, var_2834_0_indent, 1, var_2838_1_new_indent,
  // skip_indent !i !new_indent
  func_skip_indent, 0, 2, var_2839_1_i, var_2838_1_new_indent,
  // n:
  var_std__less, 2, var_2840_1_n, var_2839_1_i, 1, LOCAL(1),
  // n:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_364, lambda_372, TAIL_CALL,
  POS(2842, 5),
  POS(2843, 5),
  POS(2845, 12),
  POS(2845, 12),
  POS(2844, 5)
};

static TAB_NUM t_lambda_364[] = {
  2, // locals
  0, // parameters
  // text(i) == '@nl;':
  var_2835_0_text, 1, var_2839_1_i, 1, LOCAL(1),
  // text(i) == '@nl;':
  var_std__equal, 2, LOCAL(1), chr_10, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_365, lambda_366, TAIL_CALL,
  POS(2847, 11),
  POS(2847, 11),
  POS(2846, 9)
};

static TAB_NUM t_lambda_365[] = {
  0, // locals
  0, // parameters
  // push &indented_text '@nl;'
  var_push, 2, var_2837_1_indented_text, chr_10, 1, var_2837_1_indented_text,
  // !i i+1
  var_std__plus, 2, var_2839_1_i, num_1, 1, var_2839_1_i,
  // next
  var_next, 0, TAIL_CALL,
  POS(2848, 13),
  POS(2849, 13),
  POS(2850, 13)
};

static TAB_NUM t_lambda_366[] = {
  1, // locals
  0, // parameters
  // tabs_and_spaces(new_indent)
  var_tabs_and_spaces, 1, var_2838_1_new_indent, 1, LOCAL(1),
  // append &indented_text tabs_and_spaces(new_indent)
  var_append, 2, var_2837_1_indented_text, LOCAL(1), 1, var_2837_1_indented_text,
  // $s i
  LET, 1, var_2839_1_i, 1, var_2853_1_s,
  // loop
  var_loop, 2, lambda_367, var_next, TAIL_CALL,
  POS(2852, 35),
  POS(2852, 13),
  POS(2853, 13),
  POS(2854, 13)
};

static TAB_NUM t_lambda_367[] = {
  2, // locals
  0, // parameters
  // text(i) == '@nl;':
  var_2835_0_text, 1, var_2839_1_i, 1, LOCAL(1),
  // text(i) == '@nl;':
  var_std__equal, 2, LOCAL(1), chr_10, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_368, lambda_369, TAIL_CALL,
  POS(2857, 19),
  POS(2857, 19),
  POS(2856, 17)
};

static TAB_NUM t_lambda_368[] = {
  1, // locals
  0, // parameters
  // range(text s i)
  var_range, 3, var_2835_0_text, var_2853_1_s, var_2839_1_i, 1, LOCAL(1),
  // append &indented_text range(text s i)
  var_append, 2, var_2837_1_indented_text, LOCAL(1), 1, var_2837_1_indented_text,
  // !i i+1
  var_std__plus, 2, var_2839_1_i, num_1, 1, var_2839_1_i,
  // break
  var_break, 0, TAIL_CALL,
  POS(2858, 43),
  POS(2858, 21),
  POS(2859, 21),
  POS(2860, 21)
};

static TAB_NUM t_lambda_369[] = {
  1, // locals
  0, // parameters
  // i < n:
  var_std__less, 2, var_2839_1_i, var_2840_1_n, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_370, lambda_371, TAIL_CALL,
  POS(2863, 23),
  POS(2862, 21)
};

static TAB_NUM t_lambda_370[] = {
  0, // locals
  0, // parameters
  // !i i+1
  var_std__plus, 2, var_2839_1_i, num_1, 1, var_2839_1_i,
  // next
  var_next, 0, TAIL_CALL,
  POS(2864, 25),
  POS(2865, 25)
};

static TAB_NUM t_lambda_371[] = {
  1, // locals
  0, // parameters
  // range(text s -1)
  var_range, 3, var_2835_0_text, var_2853_1_s, minus_num_1, 1, LOCAL(1),
  // append indented_text range(text s -1)
  var_append, 2, var_2837_1_indented_text, LOCAL(1), TAIL_CALL,
  POS(2867, 46),
  POS(2867, 25)
};

static TAB_NUM t_lambda_372[] = {
  0, // locals
  0, // parameters
  //  indented_text
  LET, 1, var_2837_1_indented_text, TAIL_CALL,
  POS(2870, 9)
};

static TAB_NUM t_func_skip_indent[] = {
  2, // locals
  0, // parameters
  // n:
  var_std__less, 2, var_2840_1_n, var_2839_1_i, 1, LOCAL(1),
  // n:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_373, lambda_375, TAIL_CALL,
  POS(2874, 12),
  POS(2874, 12),
  POS(2873, 5)
};

static TAB_NUM t_lambda_373[] = {
  2, // locals
  0, // parameters
  // text(i) == '@ht;':
  var_2835_0_text, 1, var_2839_1_i, 1, LOCAL(1),
  // text(i) == '@ht;':
  var_std__equal, 2, LOCAL(1), chr_9, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_374, func_skip_spaces, TAIL_CALL,
  POS(2876, 11),
  POS(2876, 11),
  POS(2875, 9)
};

static TAB_NUM t_lambda_374[] = {
  0, // locals
  0, // parameters
  // !i i+1
  var_std__plus, 2, var_2839_1_i, num_1, 1, var_2839_1_i,
  // !new_indent new_indent+8
  var_std__plus, 2, var_2838_1_new_indent, num_8, 1, var_2838_1_new_indent,
  // skip_indent
  func_skip_indent, 0, TAIL_CALL,
  POS(2877, 13),
  POS(2878, 13),
  POS(2879, 13)
};

static TAB_NUM t_lambda_375[] = {
  0, // locals
  0, // parameters
  //  i new_indent
  LET, 2, var_2839_1_i, var_2838_1_new_indent, TAIL_CALL,
  POS(2881, 9)
};

static TAB_NUM t_func_skip_spaces[] = {
  3, // locals
  0, // parameters
  // n && text(i) == ' ':
  var_std__less, 2, var_2840_1_n, var_2839_1_i, 1, LOCAL(1),
  // n && text(i) == ' ':
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // n && text(i) == ' ':
  var_std__and, 2, LOCAL(2), lambda_376, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_377, lambda_378, TAIL_CALL,
  POS(2885, 12),
  POS(2885, 12),
  POS(2885, 12),
  POS(2884, 5)
};

static TAB_NUM t_lambda_376[] = {
  2, // locals
  0, // parameters
  // text(i) == ' ':
  var_2835_0_text, 1, var_2839_1_i, 1, LOCAL(1),
  // text(i) == ' ':
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // text(i) == ' ':
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2885, 17),
  POS(2885, 17),
  POS(2885, 17)
};

static TAB_NUM t_lambda_377[] = {
  0, // locals
  0, // parameters
  // !i i+1
  var_std__plus, 2, var_2839_1_i, num_1, 1, var_2839_1_i,
  // !new_indent new_indent+1
  var_std__plus, 2, var_2838_1_new_indent, num_1, 1, var_2838_1_new_indent,
  // skip_spaces
  func_skip_spaces, 0, TAIL_CALL,
  POS(2886, 9),
  POS(2887, 9),
  POS(2888, 9)
};

static TAB_NUM t_lambda_378[] = {
  0, // locals
  0, // parameters
  //  i new_indent
  LET, 2, var_2839_1_i, var_2838_1_new_indent, TAIL_CALL,
  POS(2889, 9)
};

static TAB_NUM t_func_std__format[] = {
  0, // locals
  -2, // parameters
  MANDATORY_PARAMETER, var_2923_0_template,
  REST_PARAMETER, var_2924_0_arguments,
  // $output ""
  LET, 1, string_1, 1, var_2926_1_output,
  // $arg_idx 1
  LET, 1, num_1, 1, var_2927_1_arg_idx,
  // $i 1
  LET, 1, num_1, 1, var_2928_1_i,
  // $n length_of(template)
  var_length_of, 1, var_2923_0_template, 1, var_2929_1_n,
  // loop:
  var_loop, 1, lambda_22_loop, TAIL_CALL,
  POS(2926, 3),
  POS(2927, 3),
  POS(2928, 3),
  POS(2929, 3),
  POS(2930, 3)
};

static TAB_NUM t_lambda_22_loop[] = {
  1, // locals
  0, // parameters
  // n
  var_std__less, 2, var_2929_1_n, var_2928_1_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_379, lambda_380, TAIL_CALL,
  POS(2932, 11),
  POS(2931, 5)
};

static TAB_NUM t_lambda_379[] = {
  0, // locals
  0, // parameters
  //  output
  LET, 1, var_2926_1_output, TAIL_CALL,
  POS(2933, 9)
};

static TAB_NUM t_lambda_380[] = {
  0, // locals
  0, // parameters
  // $chr template(i)
  var_2923_0_template, 1, var_2928_1_i, 1, var_2935_1_chr,
  // !i i+1
  var_std__plus, 2, var_2928_1_i, num_1, 1, var_2928_1_i,
  // case chr
  var_case, 6, var_2935_1_chr, chr_37, lambda_381, chr_92, lambda_407, lambda_410, TAIL_CALL,
  POS(2935, 9),
  POS(2936, 9),
  POS(2937, 9)
};

static TAB_NUM t_lambda_381[] = {
  1, // locals
  0, // parameters
  // n
  var_std__less, 2, var_2929_1_n, var_2928_1_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_382, lambda_383, TAIL_CALL,
  POS(2940, 19),
  POS(2939, 13)
};

static TAB_NUM t_lambda_382[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(2941, 17)
};

static TAB_NUM t_lambda_383[] = {
  2, // locals
  0, // parameters
  // template(i) $alignment !i
  var_2923_0_template, 1, var_2928_1_i, 1, LOCAL(1),
  // case template(i) $alignment !i
  var_case, 8, LOCAL(1), chr_108, lambda_l, chr_114, lambda_r, chr_99, lambda_c, lambda_384, 2, var_2943_18_alignment, var_2928_1_i,
  // $len_chr template(i)
  var_2923_0_template, 1, var_2928_1_i, 1, var_2948_1_len_chr,
  // len_chr < '0' || len_chr > '9'
  var_std__less, 2, var_2948_1_len_chr, chr_48, 1, LOCAL(1),
  // len_chr < '0' || len_chr > '9'
  var_std__or, 2, LOCAL(1), lambda_385, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_386, lambda_387, TAIL_CALL,
  POS(2943, 22),
  POS(2943, 17),
  POS(2948, 17),
  POS(2950, 19),
  POS(2950, 19),
  POS(2949, 17)
};

static TAB_NUM t_lambda_l[] = {
  1, // locals
  0, // parameters
  // i+1
  var_std__plus, 2, var_2928_1_i, num_1, 1, LOCAL(1),
  //  LEFT i+1
  LET, 2, uni_LEFT, LOCAL(1), TAIL_CALL,
  POS(2944, 31),
  POS(2944, 25)
};

static TAB_NUM t_lambda_r[] = {
  1, // locals
  0, // parameters
  // i+1
  var_std__plus, 2, var_2928_1_i, num_1, 1, LOCAL(1),
  //  RIGHT i+1
  LET, 2, uni_RIGHT, LOCAL(1), TAIL_CALL,
  POS(2945, 32),
  POS(2945, 25)
};

static TAB_NUM t_lambda_c[] = {
  1, // locals
  0, // parameters
  // i+1
  var_std__plus, 2, var_2928_1_i, num_1, 1, LOCAL(1),
  //  CENTER i+1
  LET, 2, uni_CENTER, LOCAL(1), TAIL_CALL,
  POS(2946, 33),
  POS(2946, 25)
};

static TAB_NUM t_lambda_384[] = {
  0, // locals
  0, // parameters
  //  RIGHT i
  LET, 2, uni_RIGHT, var_2928_1_i, TAIL_CALL,
  POS(2947, 21)
};

static TAB_NUM t_lambda_385[] = {
  1, // locals
  0, // parameters
  // 9'
  var_std__less, 2, chr_57, var_2948_1_len_chr, 1, LOCAL(1),
  // len_chr > '9'
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(2950, 47),
  POS(2950, 36)
};

static TAB_NUM t_lambda_386[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(2951, 21)
};

static TAB_NUM t_lambda_387[] = {
  0, // locals
  0, // parameters
  // $width len_chr-'0'
  var_std__minus, 2, var_2948_1_len_chr, chr_48, 1, var_2953_1_width,
  // loop
  var_loop, 2, lambda_388, lambda_392, TAIL_CALL,
  POS(2953, 21),
  POS(2954, 21)
};

static TAB_NUM t_lambda_388[] = {
  1, // locals
  0, // parameters
  // !i i+1
  var_std__plus, 2, var_2928_1_i, num_1, 1, var_2928_1_i,
  // n
  var_std__less, 2, var_2929_1_n, var_2928_1_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), var_break, lambda_389, TAIL_CALL,
  POS(2956, 25),
  POS(2958, 31),
  POS(2957, 25)
};

static TAB_NUM t_lambda_389[] = {
  2, // locals
  0, // parameters
  // $fmt_chr template(i)
  var_2923_0_template, 1, var_2928_1_i, 1, var_2961_1_fmt_chr,
  // fmt_chr < '0' || fmt_chr > '9'
  var_std__less, 2, var_2961_1_fmt_chr, chr_48, 1, LOCAL(1),
  // fmt_chr < '0' || fmt_chr > '9'
  var_std__or, 2, LOCAL(1), lambda_390, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), var_break, lambda_391, TAIL_CALL,
  POS(2961, 29),
  POS(2963, 31),
  POS(2963, 31),
  POS(2962, 29)
};

static TAB_NUM t_lambda_390[] = {
  1, // locals
  0, // parameters
  // 9'
  var_std__less, 2, chr_57, var_2961_1_fmt_chr, 1, LOCAL(1),
  // fmt_chr > '9'
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(2963, 59),
  POS(2963, 48)
};

static TAB_NUM t_lambda_391[] = {
  2, // locals
  0, // parameters
  // 10*width+(fmt_chr-'0')
  var_std__times, 2, num_10, var_2953_1_width, 1, LOCAL(1),
  // fmt_chr-'0')
  var_std__minus, 2, var_2961_1_fmt_chr, chr_48, 1, LOCAL(2),
  // !width 10*width+(fmt_chr-'0')
  var_std__plus, 2, LOCAL(1), LOCAL(2), 1, var_2953_1_width,
  // next
  var_next, 0, TAIL_CALL,
  POS(2966, 40),
  POS(2966, 50),
  POS(2966, 33),
  POS(2967, 33)
};

static TAB_NUM t_lambda_392[] = {
  1, // locals
  0, // parameters
  // n:
  var_std__less, 2, var_2929_1_n, var_2928_1_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_393, lambda_394, TAIL_CALL,
  POS(2970, 31),
  POS(2969, 25)
};

static TAB_NUM t_lambda_393[] = {
  0, // locals
  0, // parameters
  // add_argument width
  func_add_argument, 1, var_2953_1_width, TAIL_CALL,
  POS(2971, 29)
};

static TAB_NUM t_lambda_394[] = {
  2, // locals
  0, // parameters
  // template(i) == '.':
  var_2923_0_template, 1, var_2928_1_i, 1, LOCAL(1),
  // template(i) == '.':
  var_std__equal, 2, LOCAL(1), chr_46, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_395, lambda_406, TAIL_CALL,
  POS(2974, 31),
  POS(2974, 31),
  POS(2973, 29)
};

static TAB_NUM t_lambda_395[] = {
  1, // locals
  0, // parameters
  // !i i+1
  var_std__plus, 2, var_2928_1_i, num_1, 1, var_2928_1_i,
  // n
  var_std__less, 2, var_2929_1_n, var_2928_1_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_396, lambda_397, TAIL_CALL,
  POS(2975, 33),
  POS(2977, 39),
  POS(2976, 33)
};

static TAB_NUM t_lambda_396[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(2978, 37)
};

static TAB_NUM t_lambda_397[] = {
  2, // locals
  0, // parameters
  // $dw_chr template(i)
  var_2923_0_template, 1, var_2928_1_i, 1, var_2980_1_dw_chr,
  // dw_chr < '0' || dw_chr > '9'
  var_std__less, 2, var_2980_1_dw_chr, chr_48, 1, LOCAL(1),
  // dw_chr < '0' || dw_chr > '9'
  var_std__or, 2, LOCAL(1), lambda_398, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_399, lambda_400, TAIL_CALL,
  POS(2980, 37),
  POS(2982, 39),
  POS(2982, 39),
  POS(2981, 37)
};

static TAB_NUM t_lambda_398[] = {
  1, // locals
  0, // parameters
  // 9'
  var_std__less, 2, chr_57, var_2980_1_dw_chr, 1, LOCAL(1),
  // dw_chr > '9'
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(2982, 65),
  POS(2982, 55)
};

static TAB_NUM t_lambda_399[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(2983, 41)
};

static TAB_NUM t_lambda_400[] = {
  0, // locals
  0, // parameters
  // $dw dw_chr-'0'
  var_std__minus, 2, var_2980_1_dw_chr, chr_48, 1, var_2985_1_dw,
  // loop
  var_loop, 2, lambda_401, lambda_405, TAIL_CALL,
  POS(2985, 41),
  POS(2986, 41)
};

static TAB_NUM t_lambda_401[] = {
  1, // locals
  0, // parameters
  // !i i+1
  var_std__plus, 2, var_2928_1_i, num_1, 1, var_2928_1_i,
  // n
  var_std__less, 2, var_2929_1_n, var_2928_1_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), var_break, lambda_402, TAIL_CALL,
  POS(2988, 45),
  POS(2990, 51),
  POS(2989, 45)
};

static TAB_NUM t_lambda_402[] = {
  2, // locals
  0, // parameters
  // $fmt_chr template(i)
  var_2923_0_template, 1, var_2928_1_i, 1, var_2993_1_fmt_chr,
  // fmt_chr < '0' || fmt_chr > '9'
  var_std__less, 2, var_2993_1_fmt_chr, chr_48, 1, LOCAL(1),
  // fmt_chr < '0' || fmt_chr > '9'
  var_std__or, 2, LOCAL(1), lambda_403, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), var_break, lambda_404, TAIL_CALL,
  POS(2993, 49),
  POS(2995, 51),
  POS(2995, 51),
  POS(2994, 49)
};

static TAB_NUM t_lambda_403[] = {
  1, // locals
  0, // parameters
  // 9'
  var_std__less, 2, chr_57, var_2993_1_fmt_chr, 1, LOCAL(1),
  // fmt_chr > '9'
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(2995, 79),
  POS(2995, 68)
};

static TAB_NUM t_lambda_404[] = {
  2, // locals
  0, // parameters
  // 10*dw+(fmt_chr-'0')
  var_std__times, 2, num_10, var_2985_1_dw, 1, LOCAL(1),
  // fmt_chr-'0')
  var_std__minus, 2, var_2993_1_fmt_chr, chr_48, 1, LOCAL(2),
  // !dw 10*dw+(fmt_chr-'0')
  var_std__plus, 2, LOCAL(1), LOCAL(2), 1, var_2985_1_dw,
  // next
  var_next, 0, TAIL_CALL,
  POS(2998, 57),
  POS(2998, 64),
  POS(2998, 53),
  POS(2999, 53)
};

static TAB_NUM t_lambda_405[] = {
  0, // locals
  0, // parameters
  // add_argument alignment width dw
  func_add_argument, 3, var_2943_18_alignment, var_2953_1_width, var_2985_1_dw, TAIL_CALL,
  POS(3001, 45)
};

static TAB_NUM t_lambda_406[] = {
  0, // locals
  0, // parameters
  // add_argument alignment width
  func_add_argument, 2, var_2943_18_alignment, var_2953_1_width, TAIL_CALL,
  POS(3003, 33)
};

static TAB_NUM t_lambda_407[] = {
  1, // locals
  0, // parameters
  // n
  var_std__less, 2, var_2929_1_n, var_2928_1_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_408, lambda_409, TAIL_CALL,
  POS(3006, 19),
  POS(3005, 13)
};

static TAB_NUM t_lambda_408[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(3007, 17)
};

static TAB_NUM t_lambda_409[] = {
  1, // locals
  0, // parameters
  // template(i)
  var_2923_0_template, 1, var_2928_1_i, 1, LOCAL(1),
  // push &output template(i)
  var_push, 2, var_2926_1_output, LOCAL(1), 1, var_2926_1_output,
  // !i i+1
  var_std__plus, 2, var_2928_1_i, num_1, 1, var_2928_1_i,
  // next
  var_next, 0, TAIL_CALL,
  POS(3009, 30),
  POS(3009, 17),
  POS(3010, 17),
  POS(3011, 17)
};

static TAB_NUM t_lambda_410[] = {
  0, // locals
  0, // parameters
  // push &output chr
  var_push, 2, var_2926_1_output, var_2935_1_chr, 1, var_2926_1_output,
  // next
  var_next, 0, TAIL_CALL,
  POS(3013, 13),
  POS(3014, 13)
};

static TAB_NUM t_func_add_argument[] = {
  2, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_3018_0_alignment,
  MANDATORY_PARAMETER, var_3019_0_width,
  var_undefined, var_3020_0_decimal_width,
  // $argument arguments(arg_idx)
  var_2924_0_arguments, 1, var_2927_1_arg_idx, 1, var_3022_1_argument,
  // !arg_idx arg_idx+1
  var_std__plus, 2, var_2927_1_arg_idx, num_1, 1, var_2927_1_arg_idx,
  // is_defined:
  var_is_defined, 1, var_3020_0_decimal_width, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_decimal_width_is_defined, lambda_413, 1, LOCAL(2),
  // append &output
  var_append, 2, var_2926_1_output, LOCAL(2), 1, var_2926_1_output,
  // next
  var_next, 0, TAIL_CALL,
  POS(3022, 5),
  POS(3023, 5),
  POS(3026, 23),
  POS(3025, 7),
  POS(3024, 5),
  POS(3042, 5)
};

static TAB_NUM t_lambda_decimal_width_is_defined[] = {
  1, // locals
  0, // parameters
  // real_to_string &argument
  func_real_to_string, 1, var_3022_1_argument, 1, var_3022_1_argument,
  // is_undefined
  var_is_undefined, 1, var_3022_1_argument, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_411, lambda_412, TAIL_CALL,
  POS(3027, 11),
  POS(3029, 22),
  POS(3028, 11)
};

static TAB_NUM t_lambda_411[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(3030, 15)
};

static TAB_NUM t_lambda_412[] = {
  5, // locals
  0, // parameters
  // $value argument .truncate_from. '.'
  var_truncate_from, 2, var_3022_1_argument, chr_46, 1, LOCAL(4),
  // $decimals argument .behind. '.'
  var_behind, 2, var_3022_1_argument, chr_46, 1, LOCAL(5),
  // pad_left(value width)
  var_pad_left, 2, LOCAL(4), var_3019_0_width, 1, LOCAL(1),
  // pad_right(decimals decimal_width "0") decimal_width)
  var_pad_right, 3, LOCAL(5), var_3020_0_decimal_width, string_14, 1, LOCAL(2),
  // truncate(pad_right(decimals decimal_width "0") decimal_width)
  var_truncate, 2, LOCAL(2), var_3020_0_decimal_width, 1, LOCAL(3),
  // string
  var_string, 3, LOCAL(1), string_15, LOCAL(3), TAIL_CALL,
  POS(3032, 15),
  POS(3033, 15),
  POS(3035, 17),
  POS(3037, 26),
  POS(3037, 17),
  POS(3034, 15)
};

static TAB_NUM t_lambda_413[] = {
  0, // locals
  0, // parameters
  // case alignment
  var_case, 5, var_3018_0_alignment, uni_LEFT, lambda_LEFT, uni_RIGHT, lambda_RIGHT, TAIL_CALL,
  POS(3039, 11)
};

static TAB_NUM t_lambda_LEFT[] = {
  1, // locals
  0, // parameters
  // pad_right(argument width)
  var_pad_right, 2, var_3022_1_argument, var_3019_0_width, 1, LOCAL(1),
  //  pad_right(argument width)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(3040, 21),
  POS(3040, 20)
};

static TAB_NUM t_lambda_RIGHT[] = {
  1, // locals
  0, // parameters
  // pad_left(argument width)
  var_pad_left, 2, var_3022_1_argument, var_3019_0_width, 1, LOCAL(1),
  //  pad_left(argument width)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(3041, 22),
  POS(3041, 21)
};

static TAB_NUM t_func_real_to_string[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 3044_18_num
  // $str num.to_string
  var_to_string, 1, LOCAL(1), 1, var_3045_1_str,
  // $n length_of(str)
  var_length_of, 1, var_3045_1_str, 1, var_3046_1_n,
  // $i n
  LET, 1, var_3046_1_n, 1, var_3047_1_i,
  // loop:
  var_loop, 1, lambda_23_loop, TAIL_CALL,
  POS(3045, 3),
  POS(3046, 3),
  POS(3047, 3),
  POS(3048, 3)
};

static TAB_NUM t_lambda_23_loop[] = {
  1, // locals
  0, // parameters
  // i == 0
  var_std__equal, 2, var_3047_1_i, num_0, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_414, lambda_415, TAIL_CALL,
  POS(3050, 7),
  POS(3049, 5)
};

static TAB_NUM t_lambda_414[] = {
  0, // locals
  0, // parameters
  //  str
  LET, 1, var_3045_1_str, TAIL_CALL,
  POS(3051, 9)
};

static TAB_NUM t_lambda_415[] = {
  2, // locals
  0, // parameters
  // str(i) == 'e'
  var_3045_1_str, 1, var_3047_1_i, 1, LOCAL(1),
  // str(i) == 'e'
  var_std__equal, 2, LOCAL(1), chr_101, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), func_2_handle_exponent, lambda_416, TAIL_CALL,
  POS(3054, 11),
  POS(3054, 11),
  POS(3053, 9)
};

static TAB_NUM t_lambda_416[] = {
  0, // locals
  0, // parameters
  // !i i-1
  var_std__minus, 2, var_3047_1_i, num_1, 1, var_3047_1_i,
  // next
  var_next, 0, TAIL_CALL,
  POS(3057, 13),
  POS(3058, 13)
};

static TAB_NUM t_func_2_handle_exponent[] = {
  3, // locals
  0, // parameters
  // i >= n || str(2) != '.'
  var_std__less, 2, var_3047_1_i, var_3046_1_n, 1, LOCAL(1),
  // i >= n || str(2) != '.'
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // i >= n || str(2) != '.'
  var_std__or, 2, LOCAL(2), lambda_417, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_418, lambda_419, TAIL_CALL,
  POS(3062, 7),
  POS(3062, 7),
  POS(3062, 7),
  POS(3061, 5)
};

static TAB_NUM t_lambda_417[] = {
  3, // locals
  0, // parameters
  // str(2) != '.'
  var_3045_1_str, 1, num_2, 1, LOCAL(1),
  // str(2) != '.'
  var_std__equal, 2, LOCAL(1), chr_46, 1, LOCAL(2),
  // str(2) != '.'
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // str(2) != '.'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(3062, 17),
  POS(3062, 17),
  POS(3062, 17),
  POS(3062, 17)
};

static TAB_NUM t_lambda_418[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(3063, 9)
};

static TAB_NUM t_lambda_419[] = {
  3, // locals
  0, // parameters
  // i+2 n).to_integer
  var_std__plus, 2, var_3047_1_i, num_2, 1, LOCAL(1),
  // range(str i+2 n).to_integer
  var_range, 3, var_3045_1_str, LOCAL(1), var_3046_1_n, 1, LOCAL(2),
  // $exp range(str i+2 n).to_integer
  var_to_integer, 1, LOCAL(2), 1, var_3065_1_exp,
  // i-1) str(1))
  var_std__minus, 2, var_3047_1_i, num_1, 1, LOCAL(1),
  // range(str 3 i-1) str(1))
  var_range, 3, var_3045_1_str, num_3, LOCAL(1), 1, LOCAL(2),
  // str(1))
  var_3045_1_str, 1, num_1, 1, LOCAL(3),
  // $man put(range(str 3 i-1) str(1))
  var_put, 2, LOCAL(2), LOCAL(3), 1, var_3066_1_man,
  // is_undefined
  var_is_undefined, 1, var_3065_1_exp, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_420, lambda_421, TAIL_CALL,
  POS(3065, 24),
  POS(3065, 14),
  POS(3065, 9),
  POS(3066, 30),
  POS(3066, 18),
  POS(3066, 35),
  POS(3066, 9),
  POS(3068, 15),
  POS(3067, 9)
};

static TAB_NUM t_lambda_420[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(3069, 13)
};

static TAB_NUM t_lambda_421[] = {
  2, // locals
  0, // parameters
  // exp-1)
  var_std__minus, 2, var_3065_1_exp, num_1, 1, LOCAL(1),
  // $zeros dup("0" exp-1)
  var_dup, 2, string_14, LOCAL(1), 1, var_3071_1_zeros,
  // i+1)
  var_std__plus, 2, var_3047_1_i, num_1, 1, LOCAL(1),
  // str(i+1)
  var_3045_1_str, 1, LOCAL(1), 1, LOCAL(2),
  // case str(i+1)
  var_case, 6, LOCAL(2), chr_43, lambda_422, chr_45, lambda_423, lambda_424, TAIL_CALL,
  POS(3071, 28),
  POS(3071, 13),
  POS(3072, 22),
  POS(3072, 18),
  POS(3072, 13)
};

static TAB_NUM t_lambda_422[] = {
  1, // locals
  0, // parameters
  // append(man zeros)
  var_append, 2, var_3066_1_man, var_3071_1_zeros, 1, LOCAL(1),
  // -> append(man zeros)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(3074, 20),
  POS(3074, 17)
};

static TAB_NUM t_lambda_423[] = {
  2, // locals
  0, // parameters
  // append(zeros man))
  var_append, 2, var_3071_1_zeros, var_3066_1_man, 1, LOCAL(1),
  // append("0." append(zeros man))
  var_append, 2, string_16, LOCAL(1), 1, LOCAL(2),
  // -> append("0." append(zeros man))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(3076, 32),
  POS(3076, 20),
  POS(3076, 17)
};

static TAB_NUM t_lambda_424[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(3077, 17)
};

static int value_range_1366_0_arguments[] = {
  -num_0, -num_25
};

static int value_range_1369_0_arguments[] = {
  -num_26, -num_51
};

static int value_range_1372_0_arguments[] = {
  -num_52, -num_61
};

static int value_range_1441_1_arguments[] = {
  -chr_65, -chr_90
};

static int value_range_1442_1_arguments[] = {
  -chr_97, -chr_122
};

static int value_range_1443_1_arguments[] = {
  -chr_48, -chr_57
};

static int value_range_1643_1_arguments[] = {
  -chr_48, -chr_49
};

static int value_range_1654_1_arguments[] = {
  -chr_48, -chr_55
};

static int value_range_1668_1_arguments[] = {
  -chr_97, -chr_102
};

static int value_range_1671_1_arguments[] = {
  -chr_65, -chr_70
};

static int sequence_1755_1_arguments[] = {
  -chr_101, -chr_69
};

static FUNKY_CONSTANT constants_table[] = {
  {FLT_STRING_8, 0, {.str_8 = ""}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__string___to_string}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__create_string}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1}},
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
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__string___matches}},
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
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__join}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_80}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__trim}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_3_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_81}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_82}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_83}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_4_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_84}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_85}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_86}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__trim_left}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_5_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_87}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_88}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_89}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__trim_right}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_6_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_90}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_91}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_92}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__normalize}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_7_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_93}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_94}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_95}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_96}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_97}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_98}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_99}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_100}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_101}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__octet_string___to_base64}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_8_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_102}},
  {FLT_POSITIVE_INT64, 0, {.value = 4}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_103}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_104}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_105}},
  {FLT_STRING_8, 1, {.str_8 = "\000"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_106}},
  {FLT_NEGATIVE_INT64, 0, {.value = 3}},
  {FLT_STRING_8, 2, {.str_8 = "=="}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_107}},
  {FLT_CHARACTER, 0, {.value = 61}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_encode}},
  {FLT_POSITIVE_INT64, 0, {.value = 16}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_108}},
  {FLT_POSITIVE_INT64, 0, {.value = 18}},
  {FLT_POSITIVE_INT64, 0, {.value = 0x3ffff}},
  {FLT_POSITIVE_INT64, 0, {.value = 6}},
  {FLT_POSITIVE_INT64, 0, {.value = 25}},
  {FLT_VALUE_RANGE, 2, {.arguments = value_range_1366_0_arguments}},
  {FLT_POSITIVE_INT64, 0, {.value = 26}},
  {FLT_POSITIVE_INT64, 0, {.value = 51}},
  {FLT_VALUE_RANGE, 2, {.arguments = value_range_1369_0_arguments}},
  {FLT_POSITIVE_INT64, 0, {.value = 52}},
  {FLT_POSITIVE_INT64, 0, {.value = 61}},
  {FLT_VALUE_RANGE, 2, {.arguments = value_range_1372_0_arguments}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_109}},
  {FLT_CHARACTER, 0, {.value = 65}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_110}},
  {FLT_CHARACTER, 0, {.value = 97}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_111}},
  {FLT_CHARACTER, 0, {.value = 48}},
  {FLT_POSITIVE_INT64, 0, {.value = 62}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_112}},
  {FLT_CHARACTER, 0, {.value = 43}},
  {FLT_POSITIVE_INT64, 0, {.value = 63}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_113}},
  {FLT_CHARACTER, 0, {.value = 47}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_114}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__octet_string___from_base64}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_115}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_116}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_9_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_117}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_118}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_119}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_120}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_121}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_122}},
  {FLT_POSITIVE_INT64, 0, {.value = 0xff}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_123}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_124}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_125}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_126}},
  {FLT_POSITIVE_INT64, 0, {.value = 5}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_decode}},
  {FLT_CHARACTER, 0, {.value = 90}},
  {FLT_VALUE_RANGE, 2, {.arguments = value_range_1441_1_arguments}},
  {FLT_CHARACTER, 0, {.value = 122}},
  {FLT_VALUE_RANGE, 2, {.arguments = value_range_1442_1_arguments}},
  {FLT_CHARACTER, 0, {.value = 57}},
  {FLT_VALUE_RANGE, 2, {.arguments = value_range_1443_1_arguments}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_127}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_128}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_129}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_130}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_131}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_132}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_133}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__octet_string___sha1}},
  {FLT_POSITIVE_INT64, 0, {.value = 0x67452301}},
  {FLT_POSITIVE_INT64, 0, {.value = 0xefcdab89}},
  {FLT_POSITIVE_INT64, 0, {.value = 0x98badcfe}},
  {FLT_POSITIVE_INT64, 0, {.value = 0x10325476}},
  {FLT_POSITIVE_INT64, 0, {.value = 0xc3d2e1f0}},
  {FLT_POSITIVE_INT64, 0, {.value = 0x5a827999}},
  {FLT_POSITIVE_INT64, 0, {.value = 0x6ed9eba1}},
  {FLT_POSITIVE_INT64, 0, {.value = 0x8f1bbcdc}},
  {FLT_POSITIVE_INT64, 0, {.value = 0xca62c1d6}},
  {FLT_CHARACTER, 0, {.value = 128}},
  {FLT_POSITIVE_INT64, 0, {.value = 512}},
  {FLT_POSITIVE_INT64, 0, {.value = 56}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_134}},
  {FLT_POSITIVE_INT64, 0, {.value = 64}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_10_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_message_is_empty}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_135}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_136}},
  {FLT_POSITIVE_INT64, 0, {.value = 24}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_137}},
  {FLT_POSITIVE_INT64, 0, {.value = 17}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_138}},
  {FLT_POSITIVE_INT64, 0, {.value = 14}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_main_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_139}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_140}},
  {FLT_POSITIVE_INT64, 0, {.value = 20}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_141}},
  {FLT_POSITIVE_INT64, 0, {.value = 0xffffffff}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_142}},
  {FLT_POSITIVE_INT64, 0, {.value = 40}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_143}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_144}},
  {FLT_POSITIVE_INT64, 0, {.value = 60}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_145}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_146}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_147}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_compute}},
  {FLT_POSITIVE_INT64, 0, {.value = 30}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_148}},
  {FLT_POSITIVE_INT64, 0, {.value = 65}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_big_endian_string_64}},
  {FLT_POSITIVE_INT64, 0, {.value = 48}},
  {FLT_POSITIVE_INT64, 0, {.value = 32}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_big_endian_string_32}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_rol32}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__parse_integer}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_maybe_negated}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_149}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_150}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_partial_match}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_151}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_152}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_exhausted}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_153}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_154}},
  {FLT_CHARACTER, 0, {.value = 45}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_155}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_156}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_157}},
  {FLT_STRING_8, 2, {.str_8 = "0b"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_158}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_159}},
  {FLT_CHARACTER, 0, {.value = 49}},
  {FLT_VALUE_RANGE, 2, {.arguments = value_range_1643_1_arguments}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_160}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_161}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_162}},
  {FLT_STRING_8, 2, {.str_8 = "0o"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_163}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_164}},
  {FLT_CHARACTER, 0, {.value = 55}},
  {FLT_VALUE_RANGE, 2, {.arguments = value_range_1654_1_arguments}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_165}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_166}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_167}},
  {FLT_STRING_8, 2, {.str_8 = "0x"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_168}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_169}},
  {FLT_CHARACTER, 0, {.value = 102}},
  {FLT_VALUE_RANGE, 2, {.arguments = value_range_1668_1_arguments}},
  {FLT_CHARACTER, 0, {.value = 70}},
  {FLT_VALUE_RANGE, 2, {.arguments = value_range_1671_1_arguments}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_170}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_a__f}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_A__F}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_171}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_172}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_173}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_174}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_175}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_176}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__parse_number}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_177}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_178}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_179}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_180}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_181}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_182}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_183}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_184}},
  {FLT_CHARACTER, 0, {.value = 98}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_b}},
  {FLT_CHARACTER, 0, {.value = 111}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_o}},
  {FLT_CHARACTER, 0, {.value = 120}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_x}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_skip_one_ore_more_digits}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_185}},
  {FLT_CHARACTER, 0, {.value = 101}},
  {FLT_CHARACTER, 0, {.value = 69}},
  {FLT_SEQUENCE, 2, {.arguments = sequence_1755_1_arguments}},
  {FLT_CHARACTER, 0, {.value = 46}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_186}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2_skip_one_ore_more_digits}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_187}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_skip_one_ore_more_digits}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_188}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_189}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_190}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_191}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_192}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_11_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_193}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_194}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_handle_exponent}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_195}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_196}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_197}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_198}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_return_integer}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_return_real}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_binary}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_199}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_200}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_201}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_202}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_203}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_12_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_204}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_205}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_206}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_207}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_208}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_octal}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_209}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_210}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_211}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_212}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_213}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_13_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_214}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_215}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_216}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_217}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_218}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__parse_hex}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_219}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_220}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_221}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_222}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_223}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_224}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_225}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_226}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_227}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_228}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_229}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_230}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_231}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_handle_more_digits}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_14_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_232}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_233}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_234}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_235}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_236}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_237}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_238}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_239}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_240}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_241}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_242}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_243}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_244}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__string___to_integer}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_245}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_246}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__string___to_number}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_247}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_248}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__map_characters}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_249}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_250}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_251}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_252}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_253}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_254}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_255}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_256}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_257}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_258}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_259}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_260}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__string___to_upper_case}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__string___to_lower_case}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__string___to_title_case}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_261}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_262}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_263}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_264}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__string___to_sentence_case}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_265}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_266}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_267}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_268}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__string___to_wide}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__delete_all}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_delete_all}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_269}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_270}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_271}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_272}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_273}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__replace_all}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_replace_all}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_274}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_275}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_276}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_277}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_replacement_is_a_string}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_278}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_279}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__replace_first}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_replace_first}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_280}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_281}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_282}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_283}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_284}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_285}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__count_occurrences}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_search_next}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_286}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_287}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_n_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_288}},
  {FLT_POSITIVE_INT64, 0, {.value = 300}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__split_into_lines}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_15_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_289}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_290}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_291}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_292}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_293}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_294}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__split_into_indented_lines}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_split}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_295}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_296}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_297}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_298}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_299}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_300}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_301}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_ls_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_302}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_303}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_304}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_305}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_16_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_306}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_307}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_create_line}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_17_loop}},
  {FLT_CHARACTER, 0, {.value = 9}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_308}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_309}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_310}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_311}},
  {FLT_STRING_8, 1, {.str_8 = "\012"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_312}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_313}},
  {FLT_POSITIVE_INT64, 0, {.value = 9999}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_indent_of}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_314}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_315}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__split_into_groups}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_18_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_316}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_indent_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_317}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_318}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_2_split}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_319}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_320}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_321}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_322}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_323}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_324}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_325}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_326}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_327}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_328}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_329}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_gs_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_19_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_330}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_331}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_332}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_333}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_334}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_335}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_336}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_337}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_add_groups}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_338}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_339}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_340}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_341}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_reduce_minimum_indent_and_next}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_342}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_343}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_start_new_fragment_and_next}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__wrap_words}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_20_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_344}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_345}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_346}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_347}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_348}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_349}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_350}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_351}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_352}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_b_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_353}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__string___serialize}},
  {FLT_STRING_8, 1, {.str_8 = "\042"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_354}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_355}},
  {FLT_CHARACTER, 0, {.value = 126}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_356}},
  {FLT_CHARACTER, 0, {.value = 34}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_357}},
  {FLT_CHARACTER, 0, {.value = 64}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_358}},
  {FLT_STRING_8, 1, {.str_8 = "@"}},
  {FLT_STRING_8, 1, {.str_8 = ";"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_359}},
  {FLT_STRING_8, 2, {.str_8 = "\042\012"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_360}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_361}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__octet_string___to_uint8_array}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_362}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_363}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__indented}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_21_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_364}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_365}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_366}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_367}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_368}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_369}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_370}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_371}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_372}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_skip_indent}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_373}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_374}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_375}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_skip_spaces}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_376}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_377}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_378}},
  {FLT_UNIQUE, 0, {.str_8 = "LEFT"}},
  {FLT_UNIQUE, 0, {.str_8 = "RIGHT"}},
  {FLT_UNIQUE, 0, {.str_8 = "CENTER"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__format}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_22_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_379}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_380}},
  {FLT_CHARACTER, 0, {.value = 37}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_381}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_382}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_383}},
  {FLT_CHARACTER, 0, {.value = 108}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_l}},
  {FLT_CHARACTER, 0, {.value = 114}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_r}},
  {FLT_CHARACTER, 0, {.value = 99}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_c}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_384}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_385}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_386}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_387}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_388}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_389}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_390}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_391}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_392}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_393}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_394}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_395}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_396}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_397}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_398}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_399}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_400}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_401}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_402}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_403}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_404}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_405}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_406}},
  {FLT_CHARACTER, 0, {.value = 92}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_407}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_408}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_409}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_410}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_add_argument}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_decimal_width_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_411}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_412}},
  {FLT_STRING_8, 1, {.str_8 = "0"}},
  {FLT_STRING_8, 1, {.str_8 = "."}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_413}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_LEFT}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_RIGHT}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_real_to_string}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_23_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_414}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_415}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_416}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_2_handle_exponent}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_417}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_418}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_419}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_420}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_421}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_422}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_423}},
  {FLT_STRING_8, 2, {.str_8 = "0."}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_424}}
};

static ATTRIBUTE_DEFINITION std_types__object__attributes[] = {
  {-var_is_a_string, -var_false},
  {-var_is_an_octet_string, -var_false}
};

static ATTRIBUTE_DEFINITION std_types__string__attributes[] = {
  {-var_is_a_string, -var_true},
  {-var_neutral_element_of, -string_1},
  {var_to_string, -func_std_types__string___to_string},
  {var_put, -func_std_types__string___put},
  {var_dup, -func_std_types__string___dup},
  {var_match, -func_std_types__string___match},
  {var_matches, -func_std_types__string___matches},
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
  {var_to_wide, -func_std_types__string___to_wide},
  {var_serialize, -func_std_types__string___serialize},
  {-var_empty_collection_of, -string_1}
};

static ATTRIBUTE_DEFINITION std_types__octet_string__attributes[] = {
  {-var_is_an_octet_string, -var_true},
  {var_to_base64, -func_std_types__octet_string___to_base64},
  {var_from_base64, -func_std_types__octet_string___from_base64},
  {var_sha1, -func_std_types__octet_string___sha1},
  {var_to_uint8_array, -func_std_types__octet_string___to_uint8_array}
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
    {.position = POS(49, 1)}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "is_a_string\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "to_uint8_array\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN, 0, 2,
    "object\000std_types", std_types__object__attributes,
    {.position = POS(84, 1)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "is_a_string\000", NULL,
    {.position = POS(84, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "false\000", NULL,
    {.position = POS(84, 32)}
  },
  {
    FOT_UNKNOWN, 0, 31,
    "string\000std_types", std_types__string__attributes,
    {.position = POS(90, 1)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "true\000", NULL,
    {.position = POS(90, 32)}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "is_an_octet_string\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "is_an_octet_string\000", NULL,
    {.position = POS(102, 20)}
  },
  {
    FOT_UNKNOWN, 0, 5,
    "octet_string\000std_types", std_types__octet_string__attributes,
    {.position = POS(108, 1)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "neutral_element_of\000", NULL,
    {.position = POS(114, 20)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "to_string\000", NULL,
    {.position = POS(116, 20)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "create_string\000std", NULL,
    {.const_idx = -func_std__create_string}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "145_0_arguments\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_empty\000", NULL,
    {.position = POS(148, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "append\000", NULL,
    {.position = POS(150, 38)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "map_reduce\000", NULL,
    {.position = POS(150, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if\000", NULL,
    {.position = POS(147, 3)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "string\000std", NULL,
    {.const_idx = -func_std__string}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "create_string\000", NULL,
    {.position = POS(166, 3)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "put\000", NULL,
    {.position = POS(168, 20)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "dup\000", NULL,
    {.position = POS(186, 20)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "206_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "207_0_n\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "shift_right\000std", NULL,
    {.position = POS(213, 10)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "214_1_str\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "times\000std", NULL,
    {.position = POS(216, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "equal\000std", NULL,
    {.position = POS(216, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "string\000", NULL,
    {.position = POS(217, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "case\000", NULL,
    {.position = POS(209, 3)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "pad_left\000std", NULL,
    {.const_idx = -func_std__pad_left}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "246_0_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "247_0_pad\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "249_1_text\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "250_1_len\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "length_of\000", NULL,
    {.position = POS(250, 8)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "less\000std", NULL,
    {.position = POS(252, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "minus\000std", NULL,
    {.position = POS(254, 29)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000std", NULL,
    {.position = POS(254, 29)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "div\000", NULL,
    {.position = POS(254, 28)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "range\000", NULL,
    {.position = POS(254, 14)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "pad_right\000std", NULL,
    {.const_idx = -func_std__pad_right}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "282_0_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "283_0_pad\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "285_1_text\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "286_1_len\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "spaces\000std", NULL,
    {.const_idx = -func_std__spaces}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "305_0_n\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not\000std", NULL,
    {.position = POS(308, 10)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "tabs_and_spaces\000std", NULL,
    {.const_idx = -func_std__tabs_and_spaces}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "322_0_n\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "bit_and\000std", NULL,
    {.position = POS(326, 56)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "spaces\000", NULL,
    {.position = POS(327, 34)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "with_tabs\000std", NULL,
    {.const_idx = -func_std__with_tabs}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "342_0_text\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "344_1_s\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "345_1_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "346_1_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "347_1_output\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "348_1_count\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "next\000", NULL,
    {.position = POS(356, 13)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "360_1_tab_count\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "shift_left\000std", NULL,
    {.position = POS(369, 35)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "loop\000", NULL,
    {.position = POS(349, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "and\000std", NULL,
    {.position = POS(383, 16)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "break\000", NULL,
    {.position = POS(386, 11)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "match\000", NULL,
    {.position = POS(393, 20)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "407_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "408_0_stream\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "410_1_len\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "undefined\000", NULL,
    {.position = POS(417, 12)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "matches\000", NULL,
    {.position = POS(420, 20)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "search\000", NULL,
    {.position = POS(433, 20)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "450_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "451_0_stream\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "452_0_nth\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "454_1_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "455_1_length\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "456_1_offset\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "457_1_n\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "dec\000", NULL,
    {.position = POS(474, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000", NULL,
    {.position = POS(475, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "inc\000", NULL,
    {.position = POS(479, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "minus\000", NULL,
    {.position = POS(492, 17)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "before\000", NULL,
    {.position = POS(500, 20)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "538_0_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "542_8_pos\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_defined\000", NULL,
    {.position = POS(544, 9)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "truncate_from\000", NULL,
    {.position = POS(549, 20)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "588_0_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "592_8_pos\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "behind\000", NULL,
    {.position = POS(598, 20)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "636_0_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "640_8_pos\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "640_13_len\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "truncate_until\000", NULL,
    {.position = POS(646, 20)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "685_0_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "689_8_pos\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "689_13_len\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "from\000", NULL,
    {.position = POS(695, 20)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "734_0_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "738_8_pos\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "truncate_before\000", NULL,
    {.position = POS(744, 20)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "783_0_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "787_8_pos\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "until\000", NULL,
    {.position = POS(793, 20)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "831_0_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "835_8_pos\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "835_13_len\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "truncate_behind\000", NULL,
    {.position = POS(841, 20)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "880_0_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "884_8_pos\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "884_13_len\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "between\000", NULL,
    {.position = POS(890, 20)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "has_prefix\000", NULL,
    {.position = POS(923, 20)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "has_suffix\000", NULL,
    {.position = POS(945, 20)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "962_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "963_0_suffix\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_a_character\000", NULL,
    {.position = POS(966, 12)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "969_1_len\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "negate\000std", NULL,
    {.position = POS(970, 48)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "without_prefix\000", NULL,
    {.position = POS(972, 20)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "993_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "996_1_n\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "without_suffix\000", NULL,
    {.position = POS(1002, 20)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1023_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1024_0_suffix\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1026_1_len\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1034_1_slen\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "contains\000", NULL,
    {.position = POS(1040, 20)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "split\000std", NULL,
    {.const_idx = -func_std__split}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1103_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1104_0_separator\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_list\000", NULL,
    {.position = POS(1108, 8)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1110_1_items\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1112_8_pos\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1112_13_len\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "push\000", NULL,
    {.position = POS(1115, 13)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "join\000std", NULL,
    {.const_idx = -func_std__join}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1144_0_separator\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "trim\000std", NULL,
    {.const_idx = -func_std__trim}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1173_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1174_0_test\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_a_whitespace_character\000", NULL,
    {.position = POS(1174, 12)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1176_1_s\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1177_1_e\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "trim_left\000std", NULL,
    {.const_idx = -func_std__trim_left}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1213_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1214_0_test\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1216_1_s\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1217_1_e\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "trim_right\000std", NULL,
    {.const_idx = -func_std__trim_right}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1247_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1248_0_test\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1250_1_e\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "normalize\000std", NULL,
    {.const_idx = -func_std__normalize}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1281_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1283_1_buf\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1284_1_e\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1285_1_i\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_not_empty\000", NULL,
    {.position = POS(1299, 23)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "update_if\000", NULL,
    {.position = POS(1299, 9)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1300_1_s\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "to_base64\000", NULL,
    {.position = POS(1316, 26)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1332_0_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1334_1_base64\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1336_1_len\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "to_integer\000", NULL,
    {.position = POS(1357, 25)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "bit_or\000std", NULL,
    {.position = POS(1356, 8)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1355_1_bits\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1360_1_buf\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1363_1_value\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "value_range\000std", NULL,
    {.position = POS(1366, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "repeat\000", NULL,
    {.position = POS(1361, 5)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "from_base64\000", NULL,
    {.position = POS(1383, 26)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1402_0_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1404_1_octets\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "mod\000", NULL,
    {.position = POS(1406, 6)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1414_1_bits\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1417_1_value\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_undefined\000", NULL,
    {.position = POS(1419, 25)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "character\000", NULL,
    {.position = POS(1425, 30)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "from_to\000", NULL,
    {.position = POS(1415, 13)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1438_10_chr\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "sha1\000", NULL,
    {.position = POS(1449, 26)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1464_0_message\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1468_1_h0\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1469_1_h1\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1470_1_h2\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1471_1_h3\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1472_1_h4\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1493_1_pad_len\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1511_1_w\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "uint32_array\000", NULL,
    {.position = POS(1511, 12)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "bit_xor\000std", NULL,
    {.position = POS(1524, 23)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1529_1_a\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1530_1_b\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1531_1_c\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1532_1_d\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1533_1_e\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1535_3_i\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "cond\000", NULL,
    {.position = POS(1536, 15)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "parse_integer\000std", NULL,
    {.const_idx = -func_std__parse_integer}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1608_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1629_1_negate\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1635_1_value\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1616_17_idx\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1628_1_orig\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1640_3_idx\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1640_7_chr\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "for_each\000", NULL,
    {.position = POS(1639, 7)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1652_3_idx\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1652_7_chr\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1663_3_idx\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1663_7_chr\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1679_3_idx\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1679_7_chr\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "parse_number\000std", NULL,
    {.const_idx = -func_std__parse_number}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1715_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1717_1_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1718_1_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1723_1_sign_chr\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "or\000std", NULL,
    {.position = POS(1724, 17)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1725_1_sign\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "parse_hex\000", NULL,
    {.position = POS(1735, 18)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "sequence\000std", NULL,
    {.position = POS(1755, 14)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1758_28_cont\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1763_1_digit\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1774_1_next_digit\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1786_1_exp_sign_chr\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "integer\000", NULL,
    {.position = POS(1790, 41)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "real\000", NULL,
    {.position = POS(1792, 38)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1794_16_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1794_20_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1794_22_sign\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1795_1_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1799_1_digit\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1804_1_value\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1811_1_next_digit\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1818_15_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1818_19_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1818_21_sign\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1819_1_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1823_1_digit\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1828_1_value\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1835_1_next_digit\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "parse_hex\000std", NULL,
    {.const_idx = -func_std__parse_hex}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1870_0_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1871_0_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1872_0_sign\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1874_1_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1878_1_digit\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1888_22_value\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1895_1_next_digit\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1944_21_value\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "parse_integer\000", NULL,
    {.position = POS(1944, 3)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "to_number\000", NULL,
    {.position = POS(1950, 20)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1986_20_value\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "parse_number\000", NULL,
    {.position = POS(1986, 3)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "map_characters\000std", NULL,
    {.const_idx = -func_std__map_characters}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2013_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2014_0_function\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "parameter_count_of\000", NULL,
    {.position = POS(2018, 7)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2020_3_s\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2020_5_e\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2016_1_map\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2033_3_s\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2033_5_e\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "to_upper_case\000", NULL,
    {.position = POS(2048, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "map_characters\000", NULL,
    {.position = POS(2068, 3)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "to_lower_case\000", NULL,
    {.position = POS(2070, 20)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "to_title_case\000", NULL,
    {.position = POS(2092, 20)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2110_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2112_22_idx\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2112_26_chr\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_a_letter_character\000", NULL,
    {.position = POS(2114, 30)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "to_sentence_case\000", NULL,
    {.position = POS(2118, 20)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2136_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2138_22_idx\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2138_26_chr\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "to_wide\000", NULL,
    {.position = POS(2144, 20)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "delete_all\000std", NULL,
    {.const_idx = -func_std__delete_all}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2169_0_expressions\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2171_14_txt\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2185_1_new_text\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2178_1_len\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if_not\000", NULL,
    {.position = POS(2179, 13)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "replace_all\000std", NULL,
    {.const_idx = -func_std__replace_all}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2210_0_args\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2212_15_txt\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2233_1_new_text\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2219_17_replacement\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2220_1_len\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "replace_first\000std", NULL,
    {.const_idx = -func_std__replace_first}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2258_0_args\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2260_17_txt\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2280_1_new_text\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2267_17_replacement\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2268_1_len\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "update_if_not\000", NULL,
    {.position = POS(2273, 17)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "count_occurrences\000std", NULL,
    {.const_idx = -func_std__count_occurrences}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2303_0_expr\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2305_15_txt\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2305_19_count\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2310_1_n\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "split_into_lines\000std", NULL,
    {.const_idx = -func_std__split_into_lines}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2361_25_text\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2362_1_lines\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2363_1_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2364_1_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2365_1_s\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "split_into_indented_lines\000std", NULL,
    {.const_idx = -func_std__split_into_indented_lines}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2444_0_text\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2449_9_s\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2449_11_e\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2455_1_lines\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2456_1_ls\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2462_3_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2483_15_s\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2483_17_e\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2484_1_indent\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2498_1_line_text\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "tuple\000", NULL,
    {.position = POS(2502, 20)}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "subgroups_of\000std", NULL,
    {.has_a_setter = true}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2509_13_line\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "first\000", NULL,
    {.position = POS(2512, 8)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "split_into_groups\000std", NULL,
    {.const_idx = -func_std__split_into_groups}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2566_0_lines\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2568_1_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2569_1_fv\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2573_1_indent\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2582_9_s\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2582_11_e\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2582_13_indent\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2582_20_gs\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2588_1_groups\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2589_1_minimum_indent\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2590_1_ge\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2592_3_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2593_1_current_indent\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2618_1_current_indent\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2631_14_l\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "subgroups_of\000", NULL,
    {.position = POS(2641, 41)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2643_34_current_indent\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "wrap_words\000std", NULL,
    {.const_idx = -func_std__wrap_words}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2683_0_text\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2684_0_width\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2686_1_wrapped_text\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2687_1_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2688_1_s\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2689_1_l\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2690_1_b\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2691_1_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2697_1_chr\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "serialize\000", NULL,
    {.position = POS(2741, 20)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2759_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2760_0_indent\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2762_1_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2763_1_s\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2765_3_idx\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2765_7_chr\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "tabs_and_spaces\000", NULL,
    {.position = POS(2778, 19)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "to_uint8_array\000", NULL,
    {.position = POS(2781, 26)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2797_1_arr\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "uint8_array\000", NULL,
    {.position = POS(2797, 8)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "indented\000std", NULL,
    {.const_idx = -func_std__indented}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2834_0_indent\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2835_0_text\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2837_1_indented_text\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2838_1_new_indent\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2839_1_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2840_1_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2853_1_s\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "format\000std", NULL,
    {.const_idx = -func_std__format}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2923_0_template\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2924_0_arguments\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2926_1_output\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2927_1_arg_idx\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2928_1_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2929_1_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2935_1_chr\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2943_18_alignment\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2948_1_len_chr\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2953_1_width\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2961_1_fmt_chr\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2980_1_dw_chr\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2985_1_dw\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2993_1_fmt_chr\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3018_0_alignment\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3019_0_width\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3020_0_decimal_width\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3022_1_argument\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "pad_left\000", NULL,
    {.position = POS(3035, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "pad_right\000", NULL,
    {.position = POS(3037, 26)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "truncate\000", NULL,
    {.position = POS(3037, 17)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3045_1_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3046_1_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3047_1_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3065_1_exp\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3066_1_man\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3071_1_zeros\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "empty_collection_of\000", NULL,
    {.position = POS(3080, 20)}
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
  681, // number of constants
  404, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  constants_table,
  variables_table,
};
