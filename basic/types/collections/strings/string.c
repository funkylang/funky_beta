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
  func_std_types__object___pad_left = -17,
  string_2 = -18,
  lambda_8 = -19,
  lambda_9 = -20,
  func_std_types__object___pad_right = -21,
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
  func_fail = -65,
  lambda_34 = -66,
  lambda_35 = -67,
  func_std_types__string___match_back = -68,
  lambda_36 = -69,
  lambda_37 = -70,
  lambda_38 = -71,
  func_std_types__string___matches = -72,
  func_std_types__string___search = -73,
  lambda_39 = -74,
  lambda_40 = -75,
  func_search_forwards = -76,
  lambda_41 = -77,
  lambda_42 = -78,
  lambda_43 = -79,
  lambda_44 = -80,
  lambda_45 = -81,
  lambda_46 = -82,
  func_search_backwards = -83,
  lambda_47 = -84,
  lambda_48 = -85,
  lambda_49 = -86,
  lambda_50 = -87,
  lambda_51 = -88,
  lambda_52 = -89,
  func_std_types__string___before = -90,
  lambda_53 = -91,
  lambda_54 = -92,
  func_std_types__string___truncate_from = -93,
  lambda_55 = -94,
  lambda_56 = -95,
  func_std_types__string___behind = -96,
  lambda_57 = -97,
  lambda_58 = -98,
  func_std_types__string___truncate_until = -99,
  lambda_59 = -100,
  lambda_60 = -101,
  func_std_types__string___from = -102,
  lambda_61 = -103,
  lambda_62 = -104,
  func_std_types__string___truncate_before = -105,
  lambda_63 = -106,
  lambda_64 = -107,
  func_std_types__string___until = -108,
  lambda_65 = -109,
  lambda_66 = -110,
  func_std_types__string___truncate_behind = -111,
  lambda_67 = -112,
  lambda_68 = -113,
  func_std_types__string___between = -114,
  func_std_types__string___has_prefix = -115,
  func_std_types__string___has_suffix = -116,
  func_std_types__string___without_prefix = -117,
  lambda_69 = -118,
  lambda_70 = -119,
  func_std_types__string___without_suffix = -120,
  lambda_71 = -121,
  lambda_72 = -122,
  func_std_types__string___contains = -123,
  func_std__split = -124,
  lambda_73 = -125,
  lambda_74 = -126,
  lambda_2_loop = -127,
  lambda_pos_is_defined = -128,
  lambda_75 = -129,
  lambda_76 = -130,
  lambda_77 = -131,
  func_std__join = -132,
  lambda_78 = -133,
  func_std__trim = -134,
  lambda_3_loop = -135,
  lambda_79 = -136,
  lambda_80 = -137,
  lambda_81 = -138,
  lambda_4_loop = -139,
  lambda_82 = -140,
  lambda_83 = -141,
  lambda_84 = -142,
  func_std__trim_left = -143,
  lambda_5_loop = -144,
  lambda_85 = -145,
  lambda_86 = -146,
  lambda_87 = -147,
  func_std__trim_right = -148,
  lambda_6_loop = -149,
  lambda_88 = -150,
  lambda_89 = -151,
  lambda_90 = -152,
  func_std__normalize = -153,
  lambda_7_loop = -154,
  lambda_91 = -155,
  lambda_92 = -156,
  lambda_93 = -157,
  lambda_94 = -158,
  lambda_95 = -159,
  lambda_96 = -160,
  lambda_97 = -161,
  lambda_98 = -162,
  lambda_99 = -163,
  func_std_types__octet_string___to_base64 = -164,
  lambda_8_loop = -165,
  lambda_100 = -166,
  num_4 = -167,
  lambda_101 = -168,
  lambda_102 = -169,
  lambda_103 = -170,
  string_7 = -171,
  lambda_104 = -172,
  minus_num_3 = -173,
  string_8 = -174,
  lambda_105 = -175,
  minus_num_2 = -176,
  chr_61 = -177,
  func_encode = -178,
  num_16 = -179,
  lambda_106 = -180,
  num_18 = -181,
  num_0x3ffff = -182,
  num_6 = -183,
  num_25 = -184,
  value_range_1380_11 = -185,
  num_26 = -186,
  num_51 = -187,
  value_range_1383_11 = -188,
  num_52 = -189,
  num_61 = -190,
  value_range_1386_11 = -191,
  lambda_107 = -192,
  chr_65 = -193,
  lambda_108 = -194,
  chr_97 = -195,
  lambda_109 = -196,
  chr_48 = -197,
  num_62 = -198,
  lambda_110 = -199,
  chr_43 = -200,
  num_63 = -201,
  lambda_111 = -202,
  chr_47 = -203,
  lambda_112 = -204,
  func_std_types__octet_string___from_base64 = -205,
  lambda_113 = -206,
  lambda_114 = -207,
  lambda_9_loop = -208,
  lambda_115 = -209,
  lambda_116 = -210,
  lambda_117 = -211,
  lambda_118 = -212,
  lambda_119 = -213,
  lambda_120 = -214,
  num_0xff = -215,
  lambda_121 = -216,
  lambda_122 = -217,
  lambda_123 = -218,
  lambda_124 = -219,
  num_5 = -220,
  func_decode = -221,
  chr_90 = -222,
  value_range_1455_8 = -223,
  chr_122 = -224,
  value_range_1456_8 = -225,
  chr_57 = -226,
  value_range_1457_8 = -227,
  lambda_125 = -228,
  lambda_126 = -229,
  lambda_127 = -230,
  lambda_128 = -231,
  lambda_129 = -232,
  lambda_130 = -233,
  lambda_131 = -234,
  func_std_types__octet_string___sha1 = -235,
  num_0x67452301 = -236,
  num_0xefcdab89 = -237,
  num_0x98badcfe = -238,
  num_0x10325476 = -239,
  num_0xc3d2e1f0 = -240,
  num_0x5a827999 = -241,
  num_0x6ed9eba1 = -242,
  num_0x8f1bbcdc = -243,
  num_0xca62c1d6 = -244,
  chr_128 = -245,
  num_512 = -246,
  num_56 = -247,
  lambda_132 = -248,
  num_64 = -249,
  lambda_10_loop = -250,
  lambda_message_is_empty = -251,
  lambda_133 = -252,
  lambda_134 = -253,
  num_24 = -254,
  lambda_135 = -255,
  num_17 = -256,
  lambda_136 = -257,
  num_14 = -258,
  func_main_loop = -259,
  lambda_137 = -260,
  lambda_138 = -261,
  num_20 = -262,
  lambda_139 = -263,
  num_0xffffffff = -264,
  lambda_140 = -265,
  num_40 = -266,
  lambda_141 = -267,
  lambda_142 = -268,
  num_60 = -269,
  lambda_143 = -270,
  lambda_144 = -271,
  lambda_145 = -272,
  func_compute = -273,
  num_30 = -274,
  lambda_146 = -275,
  num_65 = -276,
  func_big_endian_string_64 = -277,
  num_48 = -278,
  num_32 = -279,
  func_big_endian_string_32 = -280,
  func_rol32 = -281,
  func_std__parse_integer = -282,
  func_maybe_negated = -283,
  lambda_147 = -284,
  lambda_148 = -285,
  func_partial_match = -286,
  lambda_149 = -287,
  lambda_150 = -288,
  func_exhausted = -289,
  lambda_151 = -290,
  lambda_152 = -291,
  chr_45 = -292,
  lambda_153 = -293,
  lambda_154 = -294,
  lambda_155 = -295,
  str_0b = -296,
  lambda_156 = -297,
  lambda_157 = -298,
  chr_49 = -299,
  value_range_1657_14 = -300,
  lambda_158 = -301,
  lambda_159 = -302,
  lambda_160 = -303,
  str_0o = -304,
  lambda_161 = -305,
  lambda_162 = -306,
  chr_55 = -307,
  value_range_1668_14 = -308,
  lambda_163 = -309,
  lambda_164 = -310,
  lambda_165 = -311,
  str_0x = -312,
  lambda_166 = -313,
  lambda_167 = -314,
  chr_102 = -315,
  value_range_1682_14 = -316,
  chr_70 = -317,
  value_range_1685_14 = -318,
  lambda_168 = -319,
  lambda_a__f = -320,
  lambda_A__F = -321,
  lambda_169 = -322,
  lambda_170 = -323,
  lambda_171 = -324,
  lambda_172 = -325,
  lambda_173 = -326,
  lambda_174 = -327,
  func_std__parse_number = -328,
  lambda_175 = -329,
  lambda_176 = -330,
  lambda_177 = -331,
  lambda_178 = -332,
  lambda_179 = -333,
  lambda_180 = -334,
  lambda_181 = -335,
  lambda_182 = -336,
  chr_98 = -337,
  lambda_b = -338,
  chr_111 = -339,
  lambda_o = -340,
  chr_120 = -341,
  lambda_x = -342,
  func_parse = -343,
  lambda_skip_one_ore_more_digits = -344,
  lambda_183 = -345,
  chr_101 = -346,
  chr_69 = -347,
  sequence_1769_14 = -348,
  chr_46 = -349,
  lambda_184 = -350,
  lambda_2_skip_one_ore_more_digits = -351,
  lambda_185 = -352,
  func_skip_one_ore_more_digits = -353,
  lambda_186 = -354,
  lambda_187 = -355,
  lambda_188 = -356,
  lambda_189 = -357,
  lambda_190 = -358,
  lambda_11_loop = -359,
  lambda_191 = -360,
  lambda_192 = -361,
  func_handle_exponent = -362,
  lambda_193 = -363,
  lambda_194 = -364,
  lambda_195 = -365,
  lambda_196 = -366,
  func_return_integer = -367,
  func_return_real = -368,
  func_parse_binary = -369,
  lambda_197 = -370,
  lambda_198 = -371,
  lambda_199 = -372,
  lambda_200 = -373,
  lambda_201 = -374,
  lambda_12_loop = -375,
  lambda_202 = -376,
  lambda_203 = -377,
  lambda_204 = -378,
  lambda_205 = -379,
  lambda_206 = -380,
  func_parse_octal = -381,
  lambda_207 = -382,
  lambda_208 = -383,
  lambda_209 = -384,
  lambda_210 = -385,
  lambda_211 = -386,
  lambda_13_loop = -387,
  lambda_212 = -388,
  lambda_213 = -389,
  lambda_214 = -390,
  lambda_215 = -391,
  lambda_216 = -392,
  func_std__parse_hex = -393,
  lambda_217 = -394,
  lambda_218 = -395,
  lambda_219 = -396,
  lambda_220 = -397,
  lambda_221 = -398,
  lambda_222 = -399,
  lambda_223 = -400,
  lambda_224 = -401,
  lambda_225 = -402,
  lambda_226 = -403,
  lambda_227 = -404,
  lambda_228 = -405,
  lambda_229 = -406,
  func_handle_more_digits = -407,
  lambda_14_loop = -408,
  lambda_230 = -409,
  lambda_231 = -410,
  lambda_232 = -411,
  lambda_233 = -412,
  lambda_234 = -413,
  lambda_235 = -414,
  lambda_236 = -415,
  lambda_237 = -416,
  lambda_238 = -417,
  lambda_239 = -418,
  lambda_240 = -419,
  lambda_241 = -420,
  lambda_242 = -421,
  func_std_types__string___to_integer = -422,
  lambda_243 = -423,
  lambda_244 = -424,
  func_std_types__string___to_number = -425,
  lambda_245 = -426,
  lambda_246 = -427,
  func_std__map_characters = -428,
  lambda_247 = -429,
  lambda_248 = -430,
  lambda_249 = -431,
  lambda_250 = -432,
  lambda_251 = -433,
  lambda_252 = -434,
  lambda_253 = -435,
  lambda_254 = -436,
  lambda_255 = -437,
  lambda_256 = -438,
  lambda_257 = -439,
  lambda_258 = -440,
  func_std_types__string___to_upper_case = -441,
  func_std_types__string___to_lower_case = -442,
  func_std_types__string___to_title_case = -443,
  lambda_259 = -444,
  lambda_260 = -445,
  lambda_261 = -446,
  lambda_262 = -447,
  func_std_types__string___to_sentence_case = -448,
  lambda_263 = -449,
  lambda_264 = -450,
  lambda_265 = -451,
  lambda_266 = -452,
  func_std_types__string___to_wide = -453,
  func_std__delete_all = -454,
  func_delete_all = -455,
  lambda_267 = -456,
  lambda_268 = -457,
  lambda_269 = -458,
  lambda_270 = -459,
  lambda_271 = -460,
  func_std__replace_all = -461,
  func_replace_all = -462,
  lambda_272 = -463,
  lambda_273 = -464,
  lambda_274 = -465,
  lambda_275 = -466,
  lambda_replacement_is_a_string = -467,
  lambda_276 = -468,
  lambda_277 = -469,
  func_std__replace_first = -470,
  func_replace_first = -471,
  lambda_278 = -472,
  lambda_279 = -473,
  lambda_280 = -474,
  lambda_281 = -475,
  lambda_282 = -476,
  lambda_283 = -477,
  func_std__count_occurrences = -478,
  func_search_next = -479,
  lambda_284 = -480,
  lambda_285 = -481,
  lambda_n_is_defined = -482,
  lambda_286 = -483,
  num_300 = -484,
  func_std__split_into_lines = -485,
  lambda_15_loop = -486,
  lambda_287 = -487,
  lambda_288 = -488,
  lambda_289 = -489,
  lambda_290 = -490,
  lambda_291 = -491,
  lambda_292 = -492,
  func_std__split_into_indented_lines = -493,
  func_split = -494,
  lambda_293 = -495,
  lambda_294 = -496,
  lambda_295 = -497,
  lambda_296 = -498,
  lambda_297 = -499,
  lambda_298 = -500,
  lambda_299 = -501,
  lambda_ls_is_defined = -502,
  lambda_300 = -503,
  lambda_301 = -504,
  lambda_302 = -505,
  lambda_303 = -506,
  lambda_16_loop = -507,
  lambda_304 = -508,
  lambda_305 = -509,
  func_create_line = -510,
  lambda_17_loop = -511,
  chr_9 = -512,
  lambda_306 = -513,
  lambda_307 = -514,
  lambda_308 = -515,
  lambda_309 = -516,
  string_9 = -517,
  lambda_310 = -518,
  lambda_311 = -519,
  num_9999 = -520,
  tuple_2521_1 = -521,
  func_line_indent_of = -522,
  lambda_312 = -523,
  lambda_313 = -524,
  func_std__split_into_groups = -525,
  lambda_18_loop = -526,
  lambda_314 = -527,
  lambda_indent_is_defined = -528,
  lambda_315 = -529,
  lambda_316 = -530,
  lambda_317 = -531,
  lambda_318 = -532,
  lambda_319 = -533,
  func_2_split = -534,
  lambda_320 = -535,
  lambda_321 = -536,
  lambda_322 = -537,
  lambda_323 = -538,
  lambda_324 = -539,
  lambda_325 = -540,
  lambda_326 = -541,
  lambda_327 = -542,
  lambda_328 = -543,
  lambda_329 = -544,
  lambda_group_start_is_defined = -545,
  lambda_19_loop = -546,
  lambda_330 = -547,
  lambda_331 = -548,
  lambda_332 = -549,
  lambda_333 = -550,
  lambda_334 = -551,
  lambda_335 = -552,
  lambda_336 = -553,
  func_add_groups = -554,
  lambda_337 = -555,
  lambda_338 = -556,
  func_add = -557,
  lambda_339 = -558,
  lambda_340 = -559,
  lambda_341 = -560,
  lambda_342 = -561,
  func_reduce_minimum_indent_and_next = -562,
  lambda_343 = -563,
  lambda_344 = -564,
  func_start_new_fragment_and_next = -565,
  func_std__wrap_words = -566,
  lambda_20_loop = -567,
  lambda_345 = -568,
  lambda_346 = -569,
  lambda_347 = -570,
  lambda_348 = -571,
  lambda_nl = -572,
  lambda_349 = -573,
  lambda_350 = -574,
  lambda_351 = -575,
  lambda_352 = -576,
  lambda_353 = -577,
  lambda_354 = -578,
  lambda_b_is_defined = -579,
  lambda_355 = -580,
  func_std_types__string___serialize = -581,
  string_10 = -582,
  lambda_356 = -583,
  lambda_357 = -584,
  chr_126 = -585,
  lambda_358 = -586,
  chr_34 = -587,
  lambda_359 = -588,
  chr_64 = -589,
  lambda_360 = -590,
  string_11 = -591,
  string_12 = -592,
  lambda_361 = -593,
  string_13 = -594,
  lambda_362 = -595,
  lambda_363 = -596,
  func_std_types__octet_string___to_uint8_array = -597,
  lambda_364 = -598,
  lambda_365 = -599,
  func_std__indented = -600,
  lambda_21_loop = -601,
  lambda_366 = -602,
  lambda_367 = -603,
  lambda_368 = -604,
  lambda_369 = -605,
  lambda_370 = -606,
  lambda_371 = -607,
  lambda_372 = -608,
  lambda_373 = -609,
  lambda_374 = -610,
  func_skip_indent = -611,
  lambda_375 = -612,
  lambda_376 = -613,
  lambda_377 = -614,
  func_skip_spaces = -615,
  lambda_378 = -616,
  lambda_379 = -617,
  lambda_380 = -618,
  uni_LEFT = -619,
  uni_RIGHT = -620,
  uni_CENTER = -621,
  uni_ZEROS = -622,
  func_std__format = -623,
  lambda_22_loop = -624,
  lambda_381 = -625,
  lambda_382 = -626,
  chr_37 = -627,
  lambda_383 = -628,
  lambda_384 = -629,
  lambda_385 = -630,
  lambda_386 = -631,
  chr_108 = -632,
  lambda_l = -633,
  chr_114 = -634,
  lambda_r = -635,
  chr_99 = -636,
  lambda_c = -637,
  lambda_387 = -638,
  lambda_388 = -639,
  lambda_389 = -640,
  lambda_390 = -641,
  lambda_391 = -642,
  lambda_392 = -643,
  lambda_393 = -644,
  lambda_394 = -645,
  lambda_395 = -646,
  lambda_396 = -647,
  lambda_397 = -648,
  lambda_398 = -649,
  lambda_399 = -650,
  lambda_400 = -651,
  lambda_401 = -652,
  lambda_402 = -653,
  lambda_403 = -654,
  lambda_404 = -655,
  lambda_405 = -656,
  lambda_406 = -657,
  lambda_407 = -658,
  lambda_408 = -659,
  lambda_409 = -660,
  chr_92 = -661,
  lambda_410 = -662,
  lambda_411 = -663,
  lambda_412 = -664,
  lambda_413 = -665,
  func_add_argument = -666,
  lambda_decimal_width_is_defined = -667,
  lambda_414 = -668,
  string_14 = -669,
  lambda_415 = -670,
  string_15 = -671,
  lambda_416 = -672,
  lambda_417 = -673,
  lambda_LEFT = -674,
  lambda_ZEROS = -675,
  lambda_418 = -676,
  lambda_419 = -677,
  lambda_2_LEFT = -678,
  lambda_2_ZEROS = -679,
  lambda_420 = -680,
  func_real_to_string = -681,
  lambda_23_loop = -682,
  lambda_421 = -683,
  lambda_422 = -684,
  lambda_423 = -685,
  func_2_handle_exponent = -686,
  lambda_424 = -687,
  lambda_425 = -688,
  lambda_426 = -689,
  lambda_427 = -690,
  lambda_428 = -691,
  lambda_429 = -692,
  lambda_430 = -693,
  string_16 = -694,
  lambda_431 = -695
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
  var_143_5_arguments, // dynamic
  var_is_empty, // extern
  var_append, // extern
  var_map_reduce, // extern
  var_if, // extern
  var_std__string, // initialized
  var_create_string, // extern
  var_put, // extern polymorphic
  var_dup, // extern polymorphic
  var_204_5_self, // dynamic
  var_205_5_n, // dynamic
  var_std__shift_right, // extern
  var_212_8_str, // dynamic
  var_std__times, // extern
  var_std__equal, // extern
  var_string, // extern
  var_case, // extern
  var_pad_left, // extern polymorphic
  var_244_5_n, // dynamic
  var_245_5_pad, // dynamic
  var_247_4_text, // dynamic
  var_248_4_len, // dynamic
  var_length_of, // extern
  var_std__less, // extern
  var_std__minus, // extern
  var_std__plus, // extern
  var_div, // extern
  var_range, // extern
  var_pad_right, // extern polymorphic
  var_280_5_n, // dynamic
  var_281_5_pad, // dynamic
  var_283_4_text, // dynamic
  var_284_4_len, // dynamic
  var_std__spaces, // initialized
  var_303_5_n, // dynamic
  var_std__not, // extern
  var_std__tabs_and_spaces, // initialized
  var_320_5_n, // dynamic
  var_std__bit_and, // extern
  var_spaces, // extern
  var_std__with_tabs, // initialized
  var_340_5_text, // dynamic
  var_342_4_s, // dynamic
  var_343_4_n, // dynamic
  var_344_4_i, // dynamic
  var_345_4_output, // dynamic
  var_346_4_count, // dynamic
  var_next, // extern
  var_358_18_tab_count, // dynamic
  var_std__shift_left, // extern
  var_loop, // extern
  var_std__and, // extern
  var_break, // extern
  var_match, // extern polymorphic
  var_407_5_self, // dynamic
  var_408_5_stream, // dynamic
  var_410_4_rc, // dynamic
  var_result_count, // extern
  var_411_4_len, // dynamic
  var_undefined, // extern
  var_match_back, // extern polymorphic
  var_431_5_self, // dynamic
  var_432_5_stream, // dynamic
  var_434_4_len, // dynamic
  var_std__negate, // extern
  var_matches, // extern polymorphic
  var_search, // extern polymorphic
  var_470_5_self, // dynamic
  var_471_5_stream, // dynamic
  var_472_5_nth, // dynamic
  var_474_4_i, // dynamic
  var_475_4_length, // dynamic
  var_476_4_offset, // dynamic
  var_477_4_n, // dynamic
  var_dec, // extern
  var_plus, // extern
  var_inc, // extern
  var_minus, // extern
  var_before, // extern polymorphic
  var_558_5_str, // dynamic
  var_562_11_pos, // dynamic
  var_is_defined, // extern
  var_truncate_from, // extern polymorphic
  var_608_5_str, // dynamic
  var_612_11_pos, // dynamic
  var_behind, // extern polymorphic
  var_656_5_str, // dynamic
  var_660_11_pos, // dynamic
  var_660_16_len, // dynamic
  var_truncate_until, // extern polymorphic
  var_705_5_str, // dynamic
  var_709_11_pos, // dynamic
  var_709_16_len, // dynamic
  var_from, // extern polymorphic
  var_754_5_str, // dynamic
  var_758_11_pos, // dynamic
  var_truncate_before, // extern polymorphic
  var_803_5_str, // dynamic
  var_807_11_pos, // dynamic
  var_until, // extern polymorphic
  var_851_5_str, // dynamic
  var_855_11_pos, // dynamic
  var_855_16_len, // dynamic
  var_truncate_behind, // extern polymorphic
  var_900_5_str, // dynamic
  var_904_11_pos, // dynamic
  var_904_16_len, // dynamic
  var_between, // extern polymorphic
  var_has_prefix, // extern polymorphic
  var_has_suffix, // extern polymorphic
  var_without_prefix, // extern polymorphic
  var_1008_5_self, // dynamic
  var_1011_4_n, // dynamic
  var_without_suffix, // extern polymorphic
  var_1038_5_self, // dynamic
  var_1041_4_n, // dynamic
  var_contains, // extern polymorphic
  var_std__split, // initialized
  var_1110_5_self, // dynamic
  var_1111_5_separator, // dynamic
  var_1113_4_rc, // dynamic
  var_empty_list, // extern
  var_1118_8_items, // dynamic
  var_1120_17_pos, // dynamic
  var_1120_22_len, // dynamic
  var_push, // extern
  var_spread, // extern
  var_std__join, // initialized
  var_1158_5_separator, // dynamic
  var_std__trim, // initialized
  var_1187_5_self, // dynamic
  var_1188_5_test, // dynamic
  var_is_a_whitespace_character, // extern
  var_1190_4_s, // dynamic
  var_1191_4_e, // dynamic
  var_std__trim_left, // initialized
  var_1227_5_self, // dynamic
  var_1228_5_test, // dynamic
  var_1230_4_s, // dynamic
  var_1231_4_e, // dynamic
  var_std__trim_right, // initialized
  var_1261_5_self, // dynamic
  var_1262_5_test, // dynamic
  var_1264_4_e, // dynamic
  var_std__normalize, // initialized
  var_1295_5_self, // dynamic
  var_1297_4_buf, // dynamic
  var_1298_4_e, // dynamic
  var_1299_4_i, // dynamic
  var_is_not_empty, // extern
  var_update_if, // extern
  var_1314_10_s, // dynamic
  var_to_base64, // extern polymorphic
  var_1346_5_str, // dynamic
  var_1348_4_base64, // dynamic
  var_1350_6_len, // dynamic
  var_to_integer, // extern polymorphic
  var_std__bit_or, // extern
  var_1369_6_bits, // dynamic
  var_1374_6_buf, // dynamic
  var_1377_10_value, // dynamic
  var_std__value_range, // extern
  var_repeat, // extern
  var_from_base64, // extern polymorphic
  var_1416_5_str, // dynamic
  var_1418_4_octets, // dynamic
  var_mod, // extern
  var_1428_14_bits, // dynamic
  var_1431_18_value, // dynamic
  var_is_undefined, // extern
  var_character, // extern
  var_from_to, // extern
  var_1452_13_chr, // dynamic
  var_sha1, // extern polymorphic
  var_1478_5_message, // dynamic
  var_1482_4_h0, // dynamic
  var_1483_4_h1, // dynamic
  var_1484_4_h2, // dynamic
  var_1485_4_h3, // dynamic
  var_1486_4_h4, // dynamic
  var_1507_4_pad_len, // dynamic
  var_1525_10_w, // dynamic
  var_uint32_array, // extern
  var_std__bit_xor, // extern
  var_1543_12_a, // dynamic
  var_1544_12_b, // dynamic
  var_1545_12_c, // dynamic
  var_1546_12_d, // dynamic
  var_1547_12_e, // dynamic
  var_1549_16_i, // dynamic
  var_cond, // extern
  var_std__parse_integer, // initialized
  var_1622_5_self, // dynamic
  var_1643_4_negate, // dynamic
  var_1649_4_value, // dynamic
  var_1630_20_idx, // dynamic
  var_1642_4_orig, // dynamic
  var_1654_12_idx, // dynamic
  var_1654_16_chr, // dynamic
  var_for_each, // extern
  var_1666_12_idx, // dynamic
  var_1666_16_chr, // dynamic
  var_1677_12_idx, // dynamic
  var_1677_16_chr, // dynamic
  var_1693_12_idx, // dynamic
  var_1693_16_chr, // dynamic
  var_std__parse_number, // initialized
  var_1729_5_self, // dynamic
  var_1731_4_i, // dynamic
  var_1732_4_n, // dynamic
  var_1737_8_sign_chr, // dynamic
  var_std__or, // extern
  var_1739_8_sign, // dynamic
  var_parse_hex, // extern
  var_std__sequence, // extern
  var_1772_33_cont, // dynamic
  var_1777_12_digit, // dynamic
  var_1788_22_next_digit, // dynamic
  var_1800_12_exp_sign_chr, // dynamic
  var_integer, // extern
  var_real, // extern
  var_1808_17_str, // dynamic
  var_1808_21_i, // dynamic
  var_1808_23_sign, // dynamic
  var_1809_4_n, // dynamic
  var_1813_8_digit, // dynamic
  var_1818_12_value, // dynamic
  var_1825_18_next_digit, // dynamic
  var_1832_16_str, // dynamic
  var_1832_20_i, // dynamic
  var_1832_22_sign, // dynamic
  var_1833_4_n, // dynamic
  var_1837_8_digit, // dynamic
  var_1842_12_value, // dynamic
  var_1849_18_next_digit, // dynamic
  var_std__parse_hex, // initialized
  var_1884_5_str, // dynamic
  var_1885_5_i, // dynamic
  var_1886_5_sign, // dynamic
  var_1888_4_n, // dynamic
  var_1892_8_digit, // dynamic
  var_1902_29_value, // dynamic
  var_1909_16_next_digit, // dynamic
  var_1958_24_value, // dynamic
  var_parse_integer, // extern
  var_to_number, // extern polymorphic
  var_2000_23_value, // dynamic
  var_parse_number, // extern
  var_std__map_characters, // initialized
  var_2027_5_self, // dynamic
  var_2028_5_function, // dynamic
  var_parameter_count_of, // extern
  var_2034_12_s, // dynamic
  var_2034_14_e, // dynamic
  var_2030_4_map, // dynamic
  var_2047_12_s, // dynamic
  var_2047_14_e, // dynamic
  var_to_upper_case, // extern polymorphic
  var_map_characters, // extern
  var_to_lower_case, // extern polymorphic
  var_to_title_case, // extern polymorphic
  var_2124_5_self, // dynamic
  var_2126_25_idx, // dynamic
  var_2126_29_chr, // dynamic
  var_is_a_letter_character, // extern
  var_to_sentence_case, // extern polymorphic
  var_2150_5_self, // dynamic
  var_2152_25_idx, // dynamic
  var_2152_29_chr, // dynamic
  var_to_wide, // extern polymorphic
  var_std__delete_all, // initialized
  var_2183_5_expressions, // dynamic
  var_2185_17_txt, // dynamic
  var_2199_4_new_text, // dynamic
  var_2192_14_len, // dynamic
  var_if_not, // extern
  var_std__replace_all, // initialized
  var_2224_5_args, // dynamic
  var_2226_18_txt, // dynamic
  var_2247_4_new_text, // dynamic
  var_2233_30_replacement, // dynamic
  var_2234_14_len, // dynamic
  var_std__replace_first, // initialized
  var_2272_5_args, // dynamic
  var_2274_20_txt, // dynamic
  var_2294_4_new_text, // dynamic
  var_2281_30_replacement, // dynamic
  var_2282_14_len, // dynamic
  var_update_if_not, // extern
  var_std__count_occurrences, // initialized
  var_2317_5_expr, // dynamic
  var_2319_18_txt, // dynamic
  var_2319_22_count, // dynamic
  var_2324_10_n, // dynamic
  var_std__split_into_lines, // initialized
  var_2375_26_text, // dynamic
  var_2376_4_lines, // dynamic
  var_2377_4_i, // dynamic
  var_2378_4_n, // dynamic
  var_2379_4_s, // dynamic
  var_std__split_into_indented_lines, // initialized
  var_2458_5_text, // dynamic
  var_2463_12_s, // dynamic
  var_2463_14_e, // dynamic
  var_2469_10_lines, // dynamic
  var_2470_10_ls, // dynamic
  var_2476_14_i, // dynamic
  var_2497_18_s, // dynamic
  var_2497_20_e, // dynamic
  var_2498_6_indent, // dynamic
  var_2512_16_line_text, // dynamic
  var_std_types__line, // initialized compound
  var_typed_tuple, // extern
  var_tuple, // extern
  var_subgroups_of, // extern polymorphic
  var_2524_19_line, // dynamic
  var_first, // extern
  var_std__split_into_groups, // initialized
  var_2581_5_lines, // dynamic
  var_2582_5_keep_empty_lines, // dynamic
  var_2584_4_n, // dynamic
  var_2585_4_fv, // dynamic
  var_2589_10_indent, // dynamic
  var_list, // extern
  var_2601_12_s, // dynamic
  var_2601_14_e, // dynamic
  var_2601_16_indent, // dynamic
  var_2607_10_groups, // dynamic
  var_2608_10_minimum_indent, // dynamic
  var_2609_10_group_start, // dynamic
  var_2610_10_group_end, // dynamic
  var_2612_14_i, // dynamic
  var_2613_14_current_indent, // dynamic
  var_2634_24_current_indent, // dynamic
  var_2643_23_last, // dynamic
  var_2643_28_curr_idx, // dynamic
  var_2663_43_current_indent, // dynamic
  var_std__wrap_words, // initialized
  var_2703_5_text, // dynamic
  var_2704_5_width, // dynamic
  var_2707_4_lines, // dynamic
  var_2708_4_n, // dynamic
  var_2709_4_s, // dynamic
  var_2710_4_b, // dynamic
  var_2711_4_i, // dynamic
  var_2721_10_chr, // dynamic
  var_serialize, // extern polymorphic
  var_2774_5_self, // dynamic
  var_2775_5_indent, // dynamic
  var_2777_4_str, // dynamic
  var_2778_4_s, // dynamic
  var_2780_8_idx, // dynamic
  var_2780_12_chr, // dynamic
  var_tabs_and_spaces, // extern
  var_to_uint8_array, // extern polymorphic
  var_2812_4_arr, // dynamic
  var_uint8_array, // extern
  var_std__indented, // initialized
  var_2849_5_indent, // dynamic
  var_2850_5_text, // dynamic
  var_2852_4_indented_text, // dynamic
  var_2853_4_new_indent, // dynamic
  var_2854_4_i, // dynamic
  var_2855_4_n, // dynamic
  var_2868_14_s, // dynamic
  var_std__format, // initialized
  var_2939_5_template, // dynamic
  var_2940_5_arguments, // dynamic
  var_2942_4_output, // dynamic
  var_2943_4_arg_idx, // dynamic
  var_2944_4_i, // dynamic
  var_2945_4_n, // dynamic
  var_2951_10_chr, // dynamic
  var_2959_35_alignment, // dynamic
  var_2965_18_len_chr, // dynamic
  var_2970_22_width, // dynamic
  var_2978_30_fmt_chr, // dynamic
  var_2997_38_dw_chr, // dynamic
  var_3002_42_dw, // dynamic
  var_3010_50_fmt_chr, // dynamic
  var_3063_7_alignment, // dynamic
  var_3064_7_width, // dynamic
  var_3065_7_decimal_width, // dynamic
  var_3067_6_argument, // dynamic
  var_3072_10_value, // dynamic
  var_3075_14_decimals, // dynamic
  var_3103_4_str, // dynamic
  var_3104_4_n, // dynamic
  var_3105_4_i, // dynamic
  var_3123_10_exp, // dynamic
  var_3124_10_man, // dynamic
  var_3129_14_zeros, // dynamic
  var_empty_collection_of, // extern polymorphic
  var__END
};


static TAB_NUM t_func_std_types__string___to_string[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 122_5_self
  // -> self
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(124, 3)
};

static TAB_NUM t_func_std__create_string[] = {
  1, // locals
  1, // parameters
  var_143_5_arguments,
  // is_empty
  var_is_empty, 1, var_143_5_arguments, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1, lambda_2, TAIL_CALL,
  POS(146, 15),
  POS(145, 3)
};

static TAB_NUM t_lambda_1[] = {
  0, // locals
  0, // parameters
  //  ""
  LET, 1, string_1, TAIL_CALL,
  POS(147, 7)
};

static TAB_NUM t_lambda_2[] = {
  0, // locals
  0, // parameters
  // map_reduce arguments to_string append
  var_map_reduce, 3, var_143_5_arguments, var_to_string, var_append, TAIL_CALL,
  POS(148, 7)
};

static TAB_NUM t_func_std__string[] = {
  1, // locals
  -1, // parameters
  REST_PARAMETER, LOCAL(1), // 162_5_args
  // create_string args
  var_create_string, 1, LOCAL(1), TAIL_CALL,
  POS(164, 3)
};

static TAB_NUM t_func_std_types__string___put[] = {
  4, // locals
  2, // parameters
  LOCAL(3), // 179_5_self
  LOCAL(4), // 180_5_chr
  // to_string self)
  var_to_string, 1, LOCAL(4), 1, LOCAL(1),
  // append(chr.to_string self)
  var_append, 2, LOCAL(1), LOCAL(3), 1, LOCAL(2),
  // -> append(chr.to_string self)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(182, 17),
  POS(182, 6),
  POS(182, 3)
};

static TAB_NUM t_func_std_types__string___dup[] = {
  0, // locals
  2, // parameters
  var_204_5_self,
  var_205_5_n,
  // case n
  var_case, 6, var_205_5_n, num_0, lambda_3, num_1, lambda_4, lambda_5, TAIL_CALL,
  POS(207, 3)
};

static TAB_NUM t_lambda_3[] = {
  0, // locals
  0, // parameters
  //  ""
  LET, 1, string_1, TAIL_CALL,
  POS(208, 9)
};

static TAB_NUM t_lambda_4[] = {
  0, // locals
  0, // parameters
  //  self
  LET, 1, var_204_5_self, TAIL_CALL,
  POS(209, 9)
};

static TAB_NUM t_lambda_5[] = {
  3, // locals
  0, // parameters
  // $h n >> 1 # fails if <n> is not a positive integer
  var_std__shift_right, 2, var_205_5_n, num_1, 1, LOCAL(3),
  // $str dup(self h)
  var_dup, 2, var_204_5_self, LOCAL(3), 1, var_212_8_str,
  // 2*h == n:
  var_std__times, 2, num_2, LOCAL(3), 1, LOCAL(1),
  // 2*h == n:
  var_std__equal, 2, LOCAL(1), var_205_5_n, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_6, lambda_7, TAIL_CALL,
  POS(211, 7),
  POS(212, 7),
  POS(214, 9),
  POS(214, 9),
  POS(213, 7)
};

static TAB_NUM t_lambda_6[] = {
  0, // locals
  0, // parameters
  // string str str
  var_string, 2, var_212_8_str, var_212_8_str, TAIL_CALL,
  POS(215, 11)
};

static TAB_NUM t_lambda_7[] = {
  0, // locals
  0, // parameters
  // string str str self
  var_string, 3, var_212_8_str, var_212_8_str, var_204_5_self, TAIL_CALL,
  POS(217, 11)
};

static TAB_NUM t_func_std_types__object___pad_left[] = {
  2, // locals
  -3, // parameters
  MANDATORY_PARAMETER, LOCAL(2), // 243_5_expr
  MANDATORY_PARAMETER, var_244_5_n,
  string_2, var_245_5_pad,
  // $text expr.to_string
  var_to_string, 1, LOCAL(2), 1, var_247_4_text,
  // $len length_of(text)
  var_length_of, 1, var_247_4_text, 1, var_248_4_len,
  // len < n:
  var_std__less, 2, var_248_4_len, var_244_5_n, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_8, lambda_9, TAIL_CALL,
  POS(247, 3),
  POS(248, 3),
  POS(250, 5),
  POS(249, 3)
};

static TAB_NUM t_lambda_8[] = {
  8, // locals
  0, // parameters
  // $pad_len length_of(pad)
  var_length_of, 1, var_245_5_pad, 1, LOCAL(8),
  // n-len)+(pad_len-1) .div. pad_len) 1 n-len) text
  var_std__minus, 2, var_244_5_n, var_248_4_len, 1, LOCAL(1),
  // pad_len-1) .div. pad_len) 1 n-len) text
  var_std__minus, 2, LOCAL(8), num_1, 1, LOCAL(2),
  // n-len)+(pad_len-1) .div. pad_len) 1 n-len) text
  var_std__plus, 2, LOCAL(1), LOCAL(2), 1, LOCAL(3),
  // (n-len)+(pad_len-1) .div. pad_len) 1 n-len) text
  var_div, 2, LOCAL(3), LOCAL(8), 1, LOCAL(4),
  // dup(pad (n-len)+(pad_len-1) .div. pad_len) 1 n-len) text
  var_dup, 2, var_245_5_pad, LOCAL(4), 1, LOCAL(5),
  // n-len) text
  var_std__minus, 2, var_244_5_n, var_248_4_len, 1, LOCAL(6),
  // range(dup(pad (n-len)+(pad_len-1) .div. pad_len) 1 n-len) text
  var_range, 3, LOCAL(5), num_1, LOCAL(6), 1, LOCAL(7),
  // string range(dup(pad (n-len)+(pad_len-1) .div. pad_len) 1 n-len) text
  var_string, 2, LOCAL(7), var_247_4_text, TAIL_CALL,
  POS(251, 7),
  POS(252, 29),
  POS(252, 37),
  POS(252, 29),
  POS(252, 28),
  POS(252, 20),
  POS(252, 65),
  POS(252, 14),
  POS(252, 7)
};

static TAB_NUM t_lambda_9[] = {
  0, // locals
  0, // parameters
  //  text
  LET, 1, var_247_4_text, TAIL_CALL,
  POS(253, 7)
};

static TAB_NUM t_func_std_types__object___pad_right[] = {
  2, // locals
  -3, // parameters
  MANDATORY_PARAMETER, LOCAL(2), // 279_5_expr
  MANDATORY_PARAMETER, var_280_5_n,
  string_2, var_281_5_pad,
  // $text expr.to_string
  var_to_string, 1, LOCAL(2), 1, var_283_4_text,
  // $len length_of(text)
  var_length_of, 1, var_283_4_text, 1, var_284_4_len,
  // len < n:
  var_std__less, 2, var_284_4_len, var_280_5_n, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_10, lambda_11, TAIL_CALL,
  POS(283, 3),
  POS(284, 3),
  POS(286, 5),
  POS(285, 3)
};

static TAB_NUM t_lambda_10[] = {
  8, // locals
  0, // parameters
  // $pad_len length_of(pad)
  var_length_of, 1, var_281_5_pad, 1, LOCAL(8),
  // n-len)+(pad_len-1) .div. pad_len) 1 n-len)
  var_std__minus, 2, var_280_5_n, var_284_4_len, 1, LOCAL(1),
  // pad_len-1) .div. pad_len) 1 n-len)
  var_std__minus, 2, LOCAL(8), num_1, 1, LOCAL(2),
  // n-len)+(pad_len-1) .div. pad_len) 1 n-len)
  var_std__plus, 2, LOCAL(1), LOCAL(2), 1, LOCAL(3),
  // (n-len)+(pad_len-1) .div. pad_len) 1 n-len)
  var_div, 2, LOCAL(3), LOCAL(8), 1, LOCAL(4),
  // dup(pad (n-len)+(pad_len-1) .div. pad_len) 1 n-len)
  var_dup, 2, var_281_5_pad, LOCAL(4), 1, LOCAL(5),
  // n-len)
  var_std__minus, 2, var_280_5_n, var_284_4_len, 1, LOCAL(6),
  // range(dup(pad (n-len)+(pad_len-1) .div. pad_len) 1 n-len)
  var_range, 3, LOCAL(5), num_1, LOCAL(6), 1, LOCAL(7),
  // string text range(dup(pad (n-len)+(pad_len-1) .div. pad_len) 1 n-len)
  var_string, 2, var_283_4_text, LOCAL(7), TAIL_CALL,
  POS(287, 7),
  POS(288, 34),
  POS(288, 42),
  POS(288, 34),
  POS(288, 33),
  POS(288, 25),
  POS(288, 70),
  POS(288, 19),
  POS(288, 7)
};

static TAB_NUM t_lambda_11[] = {
  0, // locals
  0, // parameters
  //  text
  LET, 1, var_283_4_text, TAIL_CALL,
  POS(289, 7)
};

static TAB_NUM t_func_std__spaces[] = {
  2, // locals
  1, // parameters
  var_303_5_n,
  // 80
  var_std__less, 2, num_80, var_303_5_n, 1, LOCAL(1),
  // 80
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_12, lambda_13, TAIL_CALL,
  POS(306, 10),
  POS(306, 10),
  POS(305, 3)
};

static TAB_NUM t_lambda_12[] = {
  1, // locals
  0, // parameters
  // range(eighty_spaces 1 n)
  var_range, 3, string_3, num_1, var_303_5_n, 1, LOCAL(1),
  //  range(eighty_spaces 1 n)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(307, 8),
  POS(307, 7)
};

static TAB_NUM t_lambda_13[] = {
  1, // locals
  0, // parameters
  // dup(" " n)
  var_dup, 2, string_2, var_303_5_n, 1, LOCAL(1),
  //  dup(" " n)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(308, 8),
  POS(308, 7)
};

static TAB_NUM t_func_std__tabs_and_spaces[] = {
  1, // locals
  1, // parameters
  var_320_5_n,
  // n < 80
  var_std__less, 2, var_320_5_n, num_80, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_14, lambda_15, TAIL_CALL,
  POS(323, 5),
  POS(322, 3)
};

static TAB_NUM t_lambda_14[] = {
  5, // locals
  0, // parameters
  // n >> 3) 9+(n & 7))
  var_std__shift_right, 2, var_320_5_n, num_3, 1, LOCAL(1),
  // 10-(n >> 3) 9+(n & 7))
  var_std__minus, 2, num_10, LOCAL(1), 1, LOCAL(2),
  // n & 7))
  var_std__bit_and, 2, var_320_5_n, num_7, 1, LOCAL(3),
  // 9+(n & 7))
  var_std__plus, 2, num_9, LOCAL(3), 1, LOCAL(4),
  // range(nine_tabs_and_seven_spaces 10-(n >> 3) 9+(n & 7))
  var_range, 3, string_4, LOCAL(2), LOCAL(4), 1, LOCAL(5),
  //  range(nine_tabs_and_seven_spaces 10-(n >> 3) 9+(n & 7))
  LET, 1, LOCAL(5), TAIL_CALL,
  POS(324, 45),
  POS(324, 41),
  POS(324, 56),
  POS(324, 53),
  POS(324, 8),
  POS(324, 7)
};

static TAB_NUM t_lambda_15[] = {
  5, // locals
  0, // parameters
  // n >> 3) spaces(n & 7))
  var_std__shift_right, 2, var_320_5_n, num_3, 1, LOCAL(1),
  // dup("@ht;" n >> 3) spaces(n & 7))
  var_dup, 2, string_5, LOCAL(1), 1, LOCAL(2),
  // n & 7))
  var_std__bit_and, 2, var_320_5_n, num_7, 1, LOCAL(3),
  // spaces(n & 7))
  var_spaces, 1, LOCAL(3), 1, LOCAL(4),
  // string(dup("@ht;" n >> 3) spaces(n & 7))
  var_string, 2, LOCAL(2), LOCAL(4), 1, LOCAL(5),
  //  string(dup("@ht;" n >> 3) spaces(n & 7))
  LET, 1, LOCAL(5), TAIL_CALL,
  POS(325, 26),
  POS(325, 15),
  POS(325, 41),
  POS(325, 34),
  POS(325, 8),
  POS(325, 7)
};

static TAB_NUM t_func_std__with_tabs[] = {
  0, // locals
  1, // parameters
  var_340_5_text,
  // $s 1
  LET, 1, num_1, 1, var_342_4_s,
  // $n length_of(text)
  var_length_of, 1, var_340_5_text, 1, var_343_4_n,
  // $i 1
  LET, 1, num_1, 1, var_344_4_i,
  // $output ""
  LET, 1, string_1, 1, var_345_4_output,
  // $count 0
  LET, 1, num_0, 1, var_346_4_count,
  // loop:
  var_loop, 1, lambda_loop, TAIL_CALL,
  POS(342, 3),
  POS(343, 3),
  POS(344, 3),
  POS(345, 3),
  POS(346, 3),
  POS(347, 3)
};

static TAB_NUM t_lambda_loop[] = {
  2, // locals
  0, // parameters
  // n:
  var_std__less, 2, var_343_4_n, var_344_4_i, 1, LOCAL(1),
  // n:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_16, lambda_23, TAIL_CALL,
  POS(349, 12),
  POS(349, 12),
  POS(348, 5)
};

static TAB_NUM t_lambda_16[] = {
  2, // locals
  0, // parameters
  // text(i) == ' ':
  var_340_5_text, 1, var_344_4_i, 1, LOCAL(1),
  // text(i) == ' ':
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_17, lambda_18, TAIL_CALL,
  POS(351, 11),
  POS(351, 11),
  POS(350, 9)
};

static TAB_NUM t_lambda_17[] = {
  0, // locals
  0, // parameters
  // !i i+1
  var_std__plus, 2, var_344_4_i, num_1, 1, var_344_4_i,
  // !count count+1
  var_std__plus, 2, var_346_4_count, num_1, 1, var_346_4_count,
  // next
  var_next, 0, TAIL_CALL,
  POS(352, 13),
  POS(353, 13),
  POS(354, 13)
};

static TAB_NUM t_lambda_18[] = {
  2, // locals
  0, // parameters
  // count >= 8:
  var_std__less, 2, var_346_4_count, num_8, 1, LOCAL(1),
  // count >= 8:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_19, func_skip_line, TAIL_CALL,
  POS(357, 15),
  POS(357, 15),
  POS(356, 13)
};

static TAB_NUM t_lambda_19[] = {
  2, // locals
  0, // parameters
  // $tab_count count >> 3
  var_std__shift_right, 2, var_346_4_count, num_3, 1, var_358_18_tab_count,
  // tab_count >= 1:
  var_std__less, 2, var_358_18_tab_count, num_1, 1, LOCAL(1),
  // tab_count >= 1:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_20, func_skip_line, TAIL_CALL,
  POS(358, 17),
  POS(360, 19),
  POS(360, 19),
  POS(359, 17)
};

static TAB_NUM t_lambda_20[] = {
  3, // locals
  0, // parameters
  // count+1))
  var_std__plus, 2, var_346_4_count, num_1, 1, LOCAL(1),
  // i-(count+1))
  var_std__minus, 2, var_344_4_i, LOCAL(1), 1, LOCAL(2),
  // range(text s i-(count+1))
  var_range, 3, var_340_5_text, var_342_4_s, LOCAL(2), 1, LOCAL(3),
  // append &output range(text s i-(count+1))
  var_append, 2, var_345_4_output, LOCAL(3), 1, var_345_4_output,
  // tab_count < 10
  var_std__less, 2, var_358_18_tab_count, num_10, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_21, lambda_22, 1, LOCAL(2),
  // append &output
  var_append, 2, var_345_4_output, LOCAL(2), 1, var_345_4_output,
  // i-count)+(tab_count << 3)
  var_std__minus, 2, var_344_4_i, var_346_4_count, 1, LOCAL(1),
  // tab_count << 3)
  var_std__shift_left, 2, var_358_18_tab_count, num_3, 1, LOCAL(2),
  // !s (i-count)+(tab_count << 3)
  var_std__plus, 2, LOCAL(1), LOCAL(2), 1, var_342_4_s,
  // skip_line
  func_skip_line, 0, TAIL_CALL,
  POS(361, 52),
  POS(361, 49),
  POS(361, 36),
  POS(361, 21),
  POS(364, 25),
  POS(363, 23),
  POS(362, 21),
  POS(367, 25),
  POS(367, 35),
  POS(367, 21),
  POS(368, 21)
};

static TAB_NUM t_lambda_21[] = {
  1, // locals
  0, // parameters
  // range(tabs 1 tab_count)
  var_range, 3, string_6, num_1, var_358_18_tab_count, 1, LOCAL(1),
  //  range(tabs 1 tab_count)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(365, 28),
  POS(365, 27)
};

static TAB_NUM t_lambda_22[] = {
  1, // locals
  0, // parameters
  // dup("@ht;" tab_count)
  var_dup, 2, string_5, var_358_18_tab_count, 1, LOCAL(1),
  //  dup("@ht;" tab_count)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(366, 28),
  POS(366, 27)
};

static TAB_NUM t_lambda_23[] = {
  1, // locals
  0, // parameters
  // s == 1
  var_std__equal, 2, var_342_4_s, num_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_24, lambda_25, TAIL_CALL,
  POS(373, 11),
  POS(372, 9)
};

static TAB_NUM t_lambda_24[] = {
  0, // locals
  0, // parameters
  //  text
  LET, 1, var_340_5_text, TAIL_CALL,
  POS(374, 13)
};

static TAB_NUM t_lambda_25[] = {
  2, // locals
  0, // parameters
  // range(text s -1))
  var_range, 3, var_340_5_text, var_342_4_s, minus_num_1, 1, LOCAL(1),
  // append(output range(text s -1))
  var_append, 2, var_345_4_output, LOCAL(1), 1, LOCAL(2),
  //  append(output range(text s -1))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(375, 28),
  POS(375, 14),
  POS(375, 13)
};

static TAB_NUM t_func_skip_line[] = {
  0, // locals
  0, // parameters
  // loop
  var_loop, 2, lambda_26, lambda_29, TAIL_CALL,
  POS(378, 5)
};

static TAB_NUM t_lambda_26[] = {
  3, // locals
  0, // parameters
  // n && text(i) != '@nl;':
  var_std__less, 2, var_343_4_n, var_344_4_i, 1, LOCAL(1),
  // n && text(i) != '@nl;':
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // n && text(i) != '@nl;':
  var_std__and, 2, LOCAL(2), lambda_27, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_28, var_break, TAIL_CALL,
  POS(381, 16),
  POS(381, 16),
  POS(381, 16),
  POS(380, 9)
};

static TAB_NUM t_lambda_27[] = {
  3, // locals
  0, // parameters
  // text(i) != '@nl;':
  var_340_5_text, 1, var_344_4_i, 1, LOCAL(1),
  // text(i) != '@nl;':
  var_std__equal, 2, LOCAL(1), chr_10, 1, LOCAL(2),
  // text(i) != '@nl;':
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(i) != '@nl;':
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(381, 21),
  POS(381, 21),
  POS(381, 21),
  POS(381, 21)
};

static TAB_NUM t_lambda_28[] = {
  0, // locals
  0, // parameters
  // !i i+1
  var_std__plus, 2, var_344_4_i, num_1, 1, var_344_4_i,
  // next
  var_next, 0, TAIL_CALL,
  POS(382, 13),
  POS(383, 13)
};

static TAB_NUM t_lambda_29[] = {
  0, // locals
  0, // parameters
  // !i i+1
  var_std__plus, 2, var_344_4_i, num_1, 1, var_344_4_i,
  // !count 0
  LET, 1, num_0, 1, var_346_4_count,
  // next
  var_next, 0, TAIL_CALL,
  POS(386, 9),
  POS(387, 9),
  POS(388, 9)
};

static TAB_NUM t_func_std_types__string___match[] = {
  3, // locals
  2, // parameters
  var_407_5_self,
  var_408_5_stream,
  // $rc result_count()
  var_result_count, 0, 1, var_410_4_rc,
  // $len length_of(self)
  var_length_of, 1, var_407_5_self, 1, var_411_4_len,
  // length_of(stream) >= len:
  var_length_of, 1, var_408_5_stream, 1, LOCAL(1),
  // length_of(stream) >= len:
  var_std__less, 2, LOCAL(1), var_411_4_len, 1, LOCAL(2),
  // length_of(stream) >= len:
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_30, func_fail, TAIL_CALL,
  POS(410, 3),
  POS(411, 3),
  POS(413, 5),
  POS(413, 5),
  POS(413, 5),
  POS(412, 3)
};

static TAB_NUM t_lambda_30[] = {
  2, // locals
  0, // parameters
  // range(stream 1 len) == self:
  var_range, 3, var_408_5_stream, num_1, var_411_4_len, 1, LOCAL(1),
  // range(stream 1 len) == self:
  var_std__equal, 2, LOCAL(1), var_407_5_self, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_31, func_fail, TAIL_CALL,
  POS(415, 9),
  POS(415, 9),
  POS(414, 7)
};

static TAB_NUM t_lambda_31[] = {
  1, // locals
  0, // parameters
  // rc == 1
  var_std__equal, 2, var_410_4_rc, num_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_32, lambda_33, TAIL_CALL,
  POS(417, 13),
  POS(416, 11)
};

static TAB_NUM t_lambda_32[] = {
  0, // locals
  0, // parameters
  //  len
  LET, 1, var_411_4_len, TAIL_CALL,
  POS(418, 15)
};

static TAB_NUM t_lambda_33[] = {
  0, // locals
  0, // parameters
  //  len undefined
  LET, 2, var_411_4_len, var_undefined, TAIL_CALL,
  POS(419, 15)
};

static TAB_NUM t_func_fail[] = {
  1, // locals
  0, // parameters
  // rc == 1
  var_std__equal, 2, var_410_4_rc, num_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_34, lambda_35, TAIL_CALL,
  POS(425, 7),
  POS(424, 5)
};

static TAB_NUM t_lambda_34[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(426, 9)
};

static TAB_NUM t_lambda_35[] = {
  0, // locals
  0, // parameters
  //  undefined undefined
  LET, 2, var_undefined, var_undefined, TAIL_CALL,
  POS(427, 9)
};

static TAB_NUM t_func_std_types__string___match_back[] = {
  4, // locals
  2, // parameters
  var_431_5_self,
  var_432_5_stream,
  // $len length_of(self)
  var_length_of, 1, var_431_5_self, 1, var_434_4_len,
  // length_of(stream) >= len && range(stream -len -1) == self
  var_length_of, 1, var_432_5_stream, 1, LOCAL(1),
  // length_of(stream) >= len && range(stream -len -1) == self
  var_std__less, 2, LOCAL(1), var_434_4_len, 1, LOCAL(2),
  // length_of(stream) >= len && range(stream -len -1) == self
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // length_of(stream) >= len && range(stream -len -1) == self
  var_std__and, 2, LOCAL(3), lambda_36, 1, LOCAL(4),
  // if
  var_if, 3, LOCAL(4), lambda_37, lambda_38, TAIL_CALL,
  POS(434, 3),
  POS(436, 5),
  POS(436, 5),
  POS(436, 5),
  POS(436, 5),
  POS(435, 3)
};

static TAB_NUM t_lambda_36[] = {
  3, // locals
  0, // parameters
  // len -1) == self
  var_std__negate, 1, var_434_4_len, 1, LOCAL(1),
  // range(stream -len -1) == self
  var_range, 3, var_432_5_stream, LOCAL(1), minus_num_1, 1, LOCAL(2),
  // range(stream -len -1) == self
  var_std__equal, 2, LOCAL(2), var_431_5_self, 1, LOCAL(3),
  // range(stream -len -1) == self
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(436, 47),
  POS(436, 33),
  POS(436, 33),
  POS(436, 33)
};

static TAB_NUM t_lambda_37[] = {
  0, // locals
  0, // parameters
  //  len
  LET, 1, var_434_4_len, TAIL_CALL,
  POS(437, 7)
};

static TAB_NUM t_lambda_38[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(438, 7)
};

static TAB_NUM t_func_std_types__string___matches[] = {
  5, // locals
  2, // parameters
  LOCAL(4), // 448_5_self
  LOCAL(5), // 449_5_expr
  // match(expr self) == length_of(self)
  var_match, 2, LOCAL(5), LOCAL(4), 1, LOCAL(1),
  // length_of(self)
  var_length_of, 1, LOCAL(4), 1, LOCAL(2),
  // match(expr self) == length_of(self)
  var_std__equal, 2, LOCAL(1), LOCAL(2), 1, LOCAL(3),
  // -> match(expr self) == length_of(self)
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(451, 6),
  POS(451, 26),
  POS(451, 6),
  POS(451, 3)
};

static TAB_NUM t_func_std_types__string___search[] = {
  1, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_470_5_self,
  MANDATORY_PARAMETER, var_471_5_stream,
  num_1, var_472_5_nth,
  // $i undefined
  LET, 1, var_undefined, 1, var_474_4_i,
  // $length length_of(self)
  var_length_of, 1, var_470_5_self, 1, var_475_4_length,
  // $offset length-1
  var_std__minus, 2, var_475_4_length, num_1, 1, var_476_4_offset,
  // length_of(stream)-offset
  var_length_of, 1, var_471_5_stream, 1, LOCAL(1),
  // $n length_of(stream)-offset
  var_std__minus, 2, LOCAL(1), var_476_4_offset, 1, var_477_4_n,
  // nth < 0:
  var_std__less, 2, var_472_5_nth, num_0, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_39, lambda_40, TAIL_CALL,
  POS(474, 3),
  POS(475, 3),
  POS(476, 3),
  POS(477, 6),
  POS(477, 3),
  POS(479, 5),
  POS(478, 3)
};

static TAB_NUM t_lambda_39[] = {
  0, // locals
  0, // parameters
  // !i n
  LET, 1, var_477_4_n, 1, var_474_4_i,
  // search_backwards
  func_search_backwards, 0, TAIL_CALL,
  POS(480, 7),
  POS(481, 7)
};

static TAB_NUM t_lambda_40[] = {
  0, // locals
  0, // parameters
  // !i 1
  LET, 1, num_1, 1, var_474_4_i,
  // search_forwards
  func_search_forwards, 0, TAIL_CALL,
  POS(483, 7),
  POS(484, 7)
};

static TAB_NUM t_func_search_forwards[] = {
  2, // locals
  0, // parameters
  // n
  var_std__less, 2, var_477_4_n, var_474_4_i, 1, LOCAL(1),
  // n
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_41, lambda_46, TAIL_CALL,
  POS(488, 12),
  POS(488, 12),
  POS(487, 5)
};

static TAB_NUM t_lambda_41[] = {
  3, // locals
  0, // parameters
  // i+offset) == self:
  var_std__plus, 2, var_474_4_i, var_476_4_offset, 1, LOCAL(1),
  // range(stream i i+offset) == self:
  var_range, 3, var_471_5_stream, var_474_4_i, LOCAL(1), 1, LOCAL(2),
  // range(stream i i+offset) == self:
  var_std__equal, 2, LOCAL(2), var_470_5_self, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_42, lambda_45, TAIL_CALL,
  POS(491, 26),
  POS(491, 11),
  POS(491, 11),
  POS(490, 9)
};

static TAB_NUM t_lambda_42[] = {
  1, // locals
  0, // parameters
  // 1:
  var_std__less, 2, num_1, var_472_5_nth, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_43, lambda_44, TAIL_CALL,
  POS(493, 21),
  POS(492, 13)
};

static TAB_NUM t_lambda_43[] = {
  0, // locals
  0, // parameters
  // dec &nth
  var_dec, 1, var_472_5_nth, 1, var_472_5_nth,
  // plus &i length
  var_plus, 2, var_474_4_i, var_475_4_length, 1, var_474_4_i,
  // search_forwards
  func_search_forwards, 0, TAIL_CALL,
  POS(494, 17),
  POS(495, 17),
  POS(496, 17)
};

static TAB_NUM t_lambda_44[] = {
  0, // locals
  0, // parameters
  //  i length
  LET, 2, var_474_4_i, var_475_4_length, TAIL_CALL,
  POS(497, 17)
};

static TAB_NUM t_lambda_45[] = {
  0, // locals
  0, // parameters
  // inc &i
  var_inc, 1, var_474_4_i, 1, var_474_4_i,
  // search_forwards
  func_search_forwards, 0, TAIL_CALL,
  POS(499, 13),
  POS(500, 13)
};

static TAB_NUM t_lambda_46[] = {
  0, // locals
  0, // parameters
  //  undefined undefined
  LET, 2, var_undefined, var_undefined, TAIL_CALL,
  POS(501, 9)
};

static TAB_NUM t_func_search_backwards[] = {
  2, // locals
  0, // parameters
  // i >= 1
  var_std__less, 2, var_474_4_i, num_1, 1, LOCAL(1),
  // i >= 1
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_47, lambda_52, TAIL_CALL,
  POS(505, 7),
  POS(505, 7),
  POS(504, 5)
};

static TAB_NUM t_lambda_47[] = {
  3, // locals
  0, // parameters
  // i+offset) == self:
  var_std__plus, 2, var_474_4_i, var_476_4_offset, 1, LOCAL(1),
  // range(stream i i+offset) == self:
  var_range, 3, var_471_5_stream, var_474_4_i, LOCAL(1), 1, LOCAL(2),
  // range(stream i i+offset) == self:
  var_std__equal, 2, LOCAL(2), var_470_5_self, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_48, lambda_51, TAIL_CALL,
  POS(508, 26),
  POS(508, 11),
  POS(508, 11),
  POS(507, 9)
};

static TAB_NUM t_lambda_48[] = {
  1, // locals
  0, // parameters
  // nth < -1:
  var_std__less, 2, var_472_5_nth, minus_num_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_49, lambda_50, TAIL_CALL,
  POS(510, 15),
  POS(509, 13)
};

static TAB_NUM t_lambda_49[] = {
  0, // locals
  0, // parameters
  // inc &nth
  var_inc, 1, var_472_5_nth, 1, var_472_5_nth,
  // minus &i length
  var_minus, 2, var_474_4_i, var_475_4_length, 1, var_474_4_i,
  // search_backwards
  func_search_backwards, 0, TAIL_CALL,
  POS(511, 17),
  POS(512, 17),
  POS(513, 17)
};

static TAB_NUM t_lambda_50[] = {
  0, // locals
  0, // parameters
  //  i length
  LET, 2, var_474_4_i, var_475_4_length, TAIL_CALL,
  POS(514, 17)
};

static TAB_NUM t_lambda_51[] = {
  0, // locals
  0, // parameters
  // dec &i
  var_dec, 1, var_474_4_i, 1, var_474_4_i,
  // search_backwards
  func_search_backwards, 0, TAIL_CALL,
  POS(516, 13),
  POS(517, 13)
};

static TAB_NUM t_lambda_52[] = {
  0, // locals
  0, // parameters
  //  undefined undefined
  LET, 2, var_undefined, var_undefined, TAIL_CALL,
  POS(518, 9)
};

static TAB_NUM t_func_std_types__string___before[] = {
  3, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_558_5_str,
  MANDATORY_PARAMETER, LOCAL(2), // 559_5_expr
  num_1, LOCAL(3), // 560_5_nth
  // search $pos $_len expr str nth
  var_search, 3, LOCAL(2), var_558_5_str, LOCAL(3), 2, var_562_11_pos, LOCAL(1),
  // is_defined
  var_is_defined, 1, var_562_11_pos, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_53, lambda_54, TAIL_CALL,
  POS(562, 3),
  POS(564, 9),
  POS(563, 3)
};

static TAB_NUM t_lambda_53[] = {
  2, // locals
  0, // parameters
  // pos-1)
  var_std__minus, 2, var_562_11_pos, num_1, 1, LOCAL(1),
  // range(str 1 pos-1)
  var_range, 3, var_558_5_str, num_1, LOCAL(1), 1, LOCAL(2),
  //  range(str 1 pos-1)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(565, 20),
  POS(565, 8),
  POS(565, 7)
};

static TAB_NUM t_lambda_54[] = {
  0, // locals
  0, // parameters
  //  ""
  LET, 1, string_1, TAIL_CALL,
  POS(566, 7)
};

static TAB_NUM t_func_std_types__string___truncate_from[] = {
  3, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_608_5_str,
  MANDATORY_PARAMETER, LOCAL(2), // 609_5_expr
  num_1, LOCAL(3), // 610_5_nth
  // search $pos $_len expr str nth
  var_search, 3, LOCAL(2), var_608_5_str, LOCAL(3), 2, var_612_11_pos, LOCAL(1),
  // is_defined
  var_is_defined, 1, var_612_11_pos, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_55, lambda_56, TAIL_CALL,
  POS(612, 3),
  POS(614, 9),
  POS(613, 3)
};

static TAB_NUM t_lambda_55[] = {
  2, // locals
  0, // parameters
  // pos-1)
  var_std__minus, 2, var_612_11_pos, num_1, 1, LOCAL(1),
  // range(str 1 pos-1)
  var_range, 3, var_608_5_str, num_1, LOCAL(1), 1, LOCAL(2),
  //  range(str 1 pos-1)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(615, 20),
  POS(615, 8),
  POS(615, 7)
};

static TAB_NUM t_lambda_56[] = {
  0, // locals
  0, // parameters
  //  str
  LET, 1, var_608_5_str, TAIL_CALL,
  POS(616, 7)
};

static TAB_NUM t_func_std_types__string___behind[] = {
  3, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_656_5_str,
  MANDATORY_PARAMETER, LOCAL(2), // 657_5_expr
  num_1, LOCAL(3), // 658_5_nth
  // search $pos $len expr str nth
  var_search, 3, LOCAL(2), var_656_5_str, LOCAL(3), 2, var_660_11_pos, var_660_16_len,
  // is_defined
  var_is_defined, 1, var_660_11_pos, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_57, lambda_58, TAIL_CALL,
  POS(660, 3),
  POS(662, 9),
  POS(661, 3)
};

static TAB_NUM t_lambda_57[] = {
  2, // locals
  0, // parameters
  // pos+len -1)
  var_std__plus, 2, var_660_11_pos, var_660_16_len, 1, LOCAL(1),
  // range(str pos+len -1)
  var_range, 3, var_656_5_str, LOCAL(1), minus_num_1, 1, LOCAL(2),
  //  range(str pos+len -1)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(663, 18),
  POS(663, 8),
  POS(663, 7)
};

static TAB_NUM t_lambda_58[] = {
  0, // locals
  0, // parameters
  //  ""
  LET, 1, string_1, TAIL_CALL,
  POS(664, 7)
};

static TAB_NUM t_func_std_types__string___truncate_until[] = {
  3, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_705_5_str,
  MANDATORY_PARAMETER, LOCAL(2), // 706_5_expr
  num_1, LOCAL(3), // 707_5_nth
  // search $pos $len expr str nth
  var_search, 3, LOCAL(2), var_705_5_str, LOCAL(3), 2, var_709_11_pos, var_709_16_len,
  // is_defined
  var_is_defined, 1, var_709_11_pos, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_59, lambda_60, TAIL_CALL,
  POS(709, 3),
  POS(711, 9),
  POS(710, 3)
};

static TAB_NUM t_lambda_59[] = {
  2, // locals
  0, // parameters
  // pos+len -1)
  var_std__plus, 2, var_709_11_pos, var_709_16_len, 1, LOCAL(1),
  // range(str pos+len -1)
  var_range, 3, var_705_5_str, LOCAL(1), minus_num_1, 1, LOCAL(2),
  //  range(str pos+len -1)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(712, 18),
  POS(712, 8),
  POS(712, 7)
};

static TAB_NUM t_lambda_60[] = {
  0, // locals
  0, // parameters
  //  str
  LET, 1, var_705_5_str, TAIL_CALL,
  POS(713, 7)
};

static TAB_NUM t_func_std_types__string___from[] = {
  3, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_754_5_str,
  MANDATORY_PARAMETER, LOCAL(2), // 755_5_expr
  num_1, LOCAL(3), // 756_5_nth
  // search $pos $_len expr str nth
  var_search, 3, LOCAL(2), var_754_5_str, LOCAL(3), 2, var_758_11_pos, LOCAL(1),
  // is_defined
  var_is_defined, 1, var_758_11_pos, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_61, lambda_62, TAIL_CALL,
  POS(758, 3),
  POS(760, 9),
  POS(759, 3)
};

static TAB_NUM t_lambda_61[] = {
  1, // locals
  0, // parameters
  // range(str pos -1)
  var_range, 3, var_754_5_str, var_758_11_pos, minus_num_1, 1, LOCAL(1),
  //  range(str pos -1)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(761, 8),
  POS(761, 7)
};

static TAB_NUM t_lambda_62[] = {
  0, // locals
  0, // parameters
  //  ""
  LET, 1, string_1, TAIL_CALL,
  POS(762, 7)
};

static TAB_NUM t_func_std_types__string___truncate_before[] = {
  3, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_803_5_str,
  MANDATORY_PARAMETER, LOCAL(2), // 804_5_expr
  num_1, LOCAL(3), // 805_5_nth
  // search $pos $_len expr str nth
  var_search, 3, LOCAL(2), var_803_5_str, LOCAL(3), 2, var_807_11_pos, LOCAL(1),
  // is_defined
  var_is_defined, 1, var_807_11_pos, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_63, lambda_64, TAIL_CALL,
  POS(807, 3),
  POS(809, 9),
  POS(808, 3)
};

static TAB_NUM t_lambda_63[] = {
  1, // locals
  0, // parameters
  // range(str pos -1)
  var_range, 3, var_803_5_str, var_807_11_pos, minus_num_1, 1, LOCAL(1),
  //  range(str pos -1)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(810, 8),
  POS(810, 7)
};

static TAB_NUM t_lambda_64[] = {
  0, // locals
  0, // parameters
  //  str
  LET, 1, var_803_5_str, TAIL_CALL,
  POS(811, 7)
};

static TAB_NUM t_func_std_types__string___until[] = {
  3, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_851_5_str,
  MANDATORY_PARAMETER, LOCAL(2), // 852_5_expr
  num_1, LOCAL(3), // 853_5_nth
  // search $pos $len expr str nth
  var_search, 3, LOCAL(2), var_851_5_str, LOCAL(3), 2, var_855_11_pos, var_855_16_len,
  // is_defined
  var_is_defined, 1, var_855_11_pos, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_65, lambda_66, TAIL_CALL,
  POS(855, 3),
  POS(857, 9),
  POS(856, 3)
};

static TAB_NUM t_lambda_65[] = {
  3, // locals
  0, // parameters
  // pos+len-1)
  var_std__plus, 2, var_855_11_pos, var_855_16_len, 1, LOCAL(1),
  // pos+len-1)
  var_std__minus, 2, LOCAL(1), num_1, 1, LOCAL(2),
  // range(str 1 pos+len-1)
  var_range, 3, var_851_5_str, num_1, LOCAL(2), 1, LOCAL(3),
  //  range(str 1 pos+len-1)
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(858, 20),
  POS(858, 20),
  POS(858, 8),
  POS(858, 7)
};

static TAB_NUM t_lambda_66[] = {
  0, // locals
  0, // parameters
  //  ""
  LET, 1, string_1, TAIL_CALL,
  POS(859, 7)
};

static TAB_NUM t_func_std_types__string___truncate_behind[] = {
  3, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_900_5_str,
  MANDATORY_PARAMETER, LOCAL(2), // 901_5_expr
  num_1, LOCAL(3), // 902_5_nth
  // search $pos $len expr str nth
  var_search, 3, LOCAL(2), var_900_5_str, LOCAL(3), 2, var_904_11_pos, var_904_16_len,
  // is_defined
  var_is_defined, 1, var_904_11_pos, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_67, lambda_68, TAIL_CALL,
  POS(904, 3),
  POS(906, 9),
  POS(905, 3)
};

static TAB_NUM t_lambda_67[] = {
  3, // locals
  0, // parameters
  // pos+len-1)
  var_std__plus, 2, var_904_11_pos, var_904_16_len, 1, LOCAL(1),
  // pos+len-1)
  var_std__minus, 2, LOCAL(1), num_1, 1, LOCAL(2),
  // range(str 1 pos+len-1)
  var_range, 3, var_900_5_str, num_1, LOCAL(2), 1, LOCAL(3),
  //  range(str 1 pos+len-1)
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(907, 20),
  POS(907, 20),
  POS(907, 8),
  POS(907, 7)
};

static TAB_NUM t_lambda_68[] = {
  0, // locals
  0, // parameters
  //  str
  LET, 1, var_900_5_str, TAIL_CALL,
  POS(908, 7)
};

static TAB_NUM t_func_std_types__string___between[] = {
  6, // locals
  -4, // parameters
  MANDATORY_PARAMETER, LOCAL(3), // 936_5_str
  MANDATORY_PARAMETER, LOCAL(4), // 937_5_expr_1
  MANDATORY_PARAMETER, LOCAL(5), // 938_5_expr_2
  num_1, LOCAL(6), // 939_5_nth
  // behind(str expr_1 nth) .before. expr_2
  var_behind, 3, LOCAL(3), LOCAL(4), LOCAL(6), 1, LOCAL(1),
  // behind(str expr_1 nth) .before. expr_2
  var_before, 2, LOCAL(1), LOCAL(5), 1, LOCAL(2),
  // -> behind(str expr_1 nth) .before. expr_2
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(941, 6),
  POS(941, 6),
  POS(941, 3)
};

static TAB_NUM t_func_std_types__string___has_prefix[] = {
  4, // locals
  2, // parameters
  LOCAL(3), // 960_5_self
  LOCAL(4), // 961_5_prefix
  // match(prefix self).is_defined
  var_match, 2, LOCAL(4), LOCAL(3), 1, LOCAL(1),
  // is_defined
  var_is_defined, 1, LOCAL(1), 1, LOCAL(2),
  // -> match(prefix self).is_defined
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(963, 6),
  POS(963, 25),
  POS(963, 3)
};

static TAB_NUM t_func_std_types__string___has_suffix[] = {
  4, // locals
  2, // parameters
  LOCAL(3), // 982_5_self
  LOCAL(4), // 983_5_suffix
  // match_back(suffix self).is_defined
  var_match_back, 2, LOCAL(4), LOCAL(3), 1, LOCAL(1),
  // is_defined
  var_is_defined, 1, LOCAL(1), 1, LOCAL(2),
  // -> match_back(suffix self).is_defined
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(985, 6),
  POS(985, 30),
  POS(985, 3)
};

static TAB_NUM t_func_std_types__string___without_prefix[] = {
  2, // locals
  2, // parameters
  var_1008_5_self,
  LOCAL(2), // 1009_5_prefix
  // $n match(prefix self)
  var_match, 2, LOCAL(2), var_1008_5_self, 1, var_1011_4_n,
  // is_defined
  var_is_defined, 1, var_1011_4_n, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_69, lambda_70, TAIL_CALL,
  POS(1011, 3),
  POS(1013, 7),
  POS(1012, 3)
};

static TAB_NUM t_lambda_69[] = {
  2, // locals
  0, // parameters
  // n+1 -1)
  var_std__plus, 2, var_1011_4_n, num_1, 1, LOCAL(1),
  // range(self n+1 -1)
  var_range, 3, var_1008_5_self, LOCAL(1), minus_num_1, 1, LOCAL(2),
  //  range(self n+1 -1)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1014, 19),
  POS(1014, 8),
  POS(1014, 7)
};

static TAB_NUM t_lambda_70[] = {
  0, // locals
  0, // parameters
  //  self
  LET, 1, var_1008_5_self, TAIL_CALL,
  POS(1015, 7)
};

static TAB_NUM t_func_std_types__string___without_suffix[] = {
  2, // locals
  2, // parameters
  var_1038_5_self,
  LOCAL(2), // 1039_5_suffix
  // $n match_back(suffix self)
  var_match_back, 2, LOCAL(2), var_1038_5_self, 1, var_1041_4_n,
  // is_defined
  var_is_defined, 1, var_1041_4_n, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_71, lambda_72, TAIL_CALL,
  POS(1041, 3),
  POS(1043, 7),
  POS(1042, 3)
};

static TAB_NUM t_lambda_71[] = {
  3, // locals
  0, // parameters
  // n+1))
  var_std__plus, 2, var_1041_4_n, num_1, 1, LOCAL(1),
  // (n+1))
  var_std__negate, 1, LOCAL(1), 1, LOCAL(2),
  // range(self 1 -(n+1))
  var_range, 3, var_1038_5_self, num_1, LOCAL(2), 1, LOCAL(3),
  //  range(self 1 -(n+1))
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(1044, 23),
  POS(1044, 22),
  POS(1044, 8),
  POS(1044, 7)
};

static TAB_NUM t_lambda_72[] = {
  0, // locals
  0, // parameters
  //  self
  LET, 1, var_1038_5_self, TAIL_CALL,
  POS(1045, 7)
};

static TAB_NUM t_func_std_types__string___contains[] = {
  4, // locals
  2, // parameters
  LOCAL(2), // 1070_5_self
  LOCAL(3), // 1071_5_expr
  // search $pos $_len expr self
  var_search, 2, LOCAL(3), LOCAL(2), 2, LOCAL(4), LOCAL(1),
  // is_defined
  var_is_defined, 1, LOCAL(4), 1, LOCAL(1),
  // -> pos.is_defined
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1073, 3),
  POS(1074, 10),
  POS(1074, 3)
};

static TAB_NUM t_func_std__split[] = {
  1, // locals
  -2, // parameters
  MANDATORY_PARAMETER, var_1110_5_self,
  chr_32, var_1111_5_separator,
  // $rc result_count()
  var_result_count, 0, 1, var_1113_4_rc,
  // is_empty
  var_is_empty, 1, var_1110_5_self, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_73, lambda_74, TAIL_CALL,
  POS(1113, 3),
  POS(1115, 10),
  POS(1114, 3)
};

static TAB_NUM t_lambda_73[] = {
  0, // locals
  0, // parameters
  //  empty_list
  LET, 1, var_empty_list, TAIL_CALL,
  POS(1116, 7)
};

static TAB_NUM t_lambda_74[] = {
  0, // locals
  0, // parameters
  // $items empty_list
  LET, 1, var_empty_list, 1, var_1118_8_items,
  // loop:
  var_loop, 1, lambda_2_loop, TAIL_CALL,
  POS(1118, 7),
  POS(1119, 7)
};

static TAB_NUM t_lambda_2_loop[] = {
  1, // locals
  0, // parameters
  // search $pos $len separator self
  var_search, 2, var_1111_5_separator, var_1110_5_self, 2, var_1120_17_pos, var_1120_22_len,
  // is_defined:
  var_is_defined, 1, var_1120_17_pos, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_pos_is_defined, lambda_75, TAIL_CALL,
  POS(1120, 9),
  POS(1122, 15),
  POS(1121, 9)
};

static TAB_NUM t_lambda_pos_is_defined[] = {
  2, // locals
  0, // parameters
  // pos-1)
  var_std__minus, 2, var_1120_17_pos, num_1, 1, LOCAL(1),
  // range(self 1 pos-1)
  var_range, 3, var_1110_5_self, num_1, LOCAL(1), 1, LOCAL(2),
  // push &items range(self 1 pos-1)
  var_push, 2, var_1118_8_items, LOCAL(2), 1, var_1118_8_items,
  // pos+len -1
  var_std__plus, 2, var_1120_17_pos, var_1120_22_len, 1, LOCAL(1),
  // range &self pos+len -1
  var_range, 3, var_1110_5_self, LOCAL(1), minus_num_1, 1, var_1110_5_self,
  // next
  var_next, 0, TAIL_CALL,
  POS(1123, 38),
  POS(1123, 25),
  POS(1123, 13),
  POS(1124, 25),
  POS(1124, 13),
  POS(1125, 13)
};

static TAB_NUM t_lambda_75[] = {
  1, // locals
  0, // parameters
  // push &items self
  var_push, 2, var_1118_8_items, var_1110_5_self, 1, var_1118_8_items,
  // rc == 1
  var_std__equal, 2, var_1113_4_rc, num_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_76, lambda_77, TAIL_CALL,
  POS(1127, 13),
  POS(1129, 15),
  POS(1128, 13)
};

static TAB_NUM t_lambda_76[] = {
  0, // locals
  0, // parameters
  //  items
  LET, 1, var_1118_8_items, TAIL_CALL,
  POS(1130, 17)
};

static TAB_NUM t_lambda_77[] = {
  0, // locals
  0, // parameters
  // spread items
  var_spread, 1, var_1118_8_items, TAIL_CALL,
  POS(1132, 17)
};

static TAB_NUM t_func_std__join[] = {
  1, // locals
  -2, // parameters
  MANDATORY_PARAMETER, LOCAL(1), // 1157_5_items
  string_2, var_1158_5_separator,
  // to_string &separator
  var_to_string, 1, var_1158_5_separator, 1, var_1158_5_separator,
  // map_reduce
  var_map_reduce, 4, LOCAL(1), var_to_string, lambda_78, string_1, TAIL_CALL,
  POS(1160, 3),
  POS(1161, 3)
};

static TAB_NUM t_lambda_78[] = {
  2, // locals
  2, // parameters
  LOCAL(1), // 1163_8_left
  LOCAL(2), // 1163_13_right
  // append left separator right
  var_append, 3, LOCAL(1), var_1158_5_separator, LOCAL(2), TAIL_CALL,
  POS(1163, 20)
};

static TAB_NUM t_func_std__trim[] = {
  0, // locals
  -2, // parameters
  MANDATORY_PARAMETER, var_1187_5_self,
  var_is_a_whitespace_character, var_1188_5_test,
  // $s 1
  LET, 1, num_1, 1, var_1190_4_s,
  // $e length_of(self)
  var_length_of, 1, var_1187_5_self, 1, var_1191_4_e,
  // loop:
  var_loop, 1, lambda_3_loop, TAIL_CALL,
  POS(1190, 3),
  POS(1191, 3),
  POS(1192, 3)
};

static TAB_NUM t_lambda_3_loop[] = {
  3, // locals
  0, // parameters
  // e && test(self(s)):
  var_std__less, 2, var_1191_4_e, var_1190_4_s, 1, LOCAL(1),
  // e && test(self(s)):
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // e && test(self(s)):
  var_std__and, 2, LOCAL(2), lambda_79, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_80, lambda_81, TAIL_CALL,
  POS(1194, 12),
  POS(1194, 12),
  POS(1194, 12),
  POS(1193, 5)
};

static TAB_NUM t_lambda_79[] = {
  2, // locals
  0, // parameters
  // self(s)):
  var_1187_5_self, 1, var_1190_4_s, 1, LOCAL(1),
  // test(self(s)):
  var_1188_5_test, 1, LOCAL(1), 1, LOCAL(2),
  // test(self(s)):
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1194, 22),
  POS(1194, 17),
  POS(1194, 17)
};

static TAB_NUM t_lambda_80[] = {
  0, // locals
  0, // parameters
  // inc &s
  var_inc, 1, var_1190_4_s, 1, var_1190_4_s,
  // next
  var_next, 0, TAIL_CALL,
  POS(1195, 9),
  POS(1196, 9)
};

static TAB_NUM t_lambda_81[] = {
  0, // locals
  0, // parameters
  // loop:
  var_loop, 1, lambda_4_loop, TAIL_CALL,
  POS(1198, 9)
};

static TAB_NUM t_lambda_4_loop[] = {
  3, // locals
  0, // parameters
  // e >= s && test(self(e)):
  var_std__less, 2, var_1191_4_e, var_1190_4_s, 1, LOCAL(1),
  // e >= s && test(self(e)):
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // e >= s && test(self(e)):
  var_std__and, 2, LOCAL(2), lambda_82, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_83, lambda_84, TAIL_CALL,
  POS(1200, 13),
  POS(1200, 13),
  POS(1200, 13),
  POS(1199, 11)
};

static TAB_NUM t_lambda_82[] = {
  2, // locals
  0, // parameters
  // self(e)):
  var_1187_5_self, 1, var_1191_4_e, 1, LOCAL(1),
  // test(self(e)):
  var_1188_5_test, 1, LOCAL(1), 1, LOCAL(2),
  // test(self(e)):
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1200, 28),
  POS(1200, 23),
  POS(1200, 23)
};

static TAB_NUM t_lambda_83[] = {
  0, // locals
  0, // parameters
  // dec &e
  var_dec, 1, var_1191_4_e, 1, var_1191_4_e,
  // next
  var_next, 0, TAIL_CALL,
  POS(1201, 15),
  POS(1202, 15)
};

static TAB_NUM t_lambda_84[] = {
  0, // locals
  0, // parameters
  // range self s e
  var_range, 3, var_1187_5_self, var_1190_4_s, var_1191_4_e, TAIL_CALL,
  POS(1204, 15)
};

static TAB_NUM t_func_std__trim_left[] = {
  0, // locals
  -2, // parameters
  MANDATORY_PARAMETER, var_1227_5_self,
  var_is_a_whitespace_character, var_1228_5_test,
  // $s 1
  LET, 1, num_1, 1, var_1230_4_s,
  // $e length_of(self)
  var_length_of, 1, var_1227_5_self, 1, var_1231_4_e,
  // loop:
  var_loop, 1, lambda_5_loop, TAIL_CALL,
  POS(1230, 3),
  POS(1231, 3),
  POS(1232, 3)
};

static TAB_NUM t_lambda_5_loop[] = {
  3, // locals
  0, // parameters
  // e && test(self(s)):
  var_std__less, 2, var_1231_4_e, var_1230_4_s, 1, LOCAL(1),
  // e && test(self(s)):
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // e && test(self(s)):
  var_std__and, 2, LOCAL(2), lambda_85, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_86, lambda_87, TAIL_CALL,
  POS(1234, 12),
  POS(1234, 12),
  POS(1234, 12),
  POS(1233, 5)
};

static TAB_NUM t_lambda_85[] = {
  2, // locals
  0, // parameters
  // self(s)):
  var_1227_5_self, 1, var_1230_4_s, 1, LOCAL(1),
  // test(self(s)):
  var_1228_5_test, 1, LOCAL(1), 1, LOCAL(2),
  // test(self(s)):
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1234, 22),
  POS(1234, 17),
  POS(1234, 17)
};

static TAB_NUM t_lambda_86[] = {
  0, // locals
  0, // parameters
  // inc &s
  var_inc, 1, var_1230_4_s, 1, var_1230_4_s,
  // next
  var_next, 0, TAIL_CALL,
  POS(1235, 9),
  POS(1236, 9)
};

static TAB_NUM t_lambda_87[] = {
  0, // locals
  0, // parameters
  // range self s e
  var_range, 3, var_1227_5_self, var_1230_4_s, var_1231_4_e, TAIL_CALL,
  POS(1238, 9)
};

static TAB_NUM t_func_std__trim_right[] = {
  0, // locals
  -2, // parameters
  MANDATORY_PARAMETER, var_1261_5_self,
  var_is_a_whitespace_character, var_1262_5_test,
  // $e length_of(self)
  var_length_of, 1, var_1261_5_self, 1, var_1264_4_e,
  // loop:
  var_loop, 1, lambda_6_loop, TAIL_CALL,
  POS(1264, 3),
  POS(1265, 3)
};

static TAB_NUM t_lambda_6_loop[] = {
  3, // locals
  0, // parameters
  // e >= 1 && test(self(e)):
  var_std__less, 2, var_1264_4_e, num_1, 1, LOCAL(1),
  // e >= 1 && test(self(e)):
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // e >= 1 && test(self(e)):
  var_std__and, 2, LOCAL(2), lambda_88, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_89, lambda_90, TAIL_CALL,
  POS(1267, 7),
  POS(1267, 7),
  POS(1267, 7),
  POS(1266, 5)
};

static TAB_NUM t_lambda_88[] = {
  2, // locals
  0, // parameters
  // self(e)):
  var_1261_5_self, 1, var_1264_4_e, 1, LOCAL(1),
  // test(self(e)):
  var_1262_5_test, 1, LOCAL(1), 1, LOCAL(2),
  // test(self(e)):
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1267, 22),
  POS(1267, 17),
  POS(1267, 17)
};

static TAB_NUM t_lambda_89[] = {
  0, // locals
  0, // parameters
  // dec &e
  var_dec, 1, var_1264_4_e, 1, var_1264_4_e,
  // next
  var_next, 0, TAIL_CALL,
  POS(1268, 9),
  POS(1269, 9)
};

static TAB_NUM t_lambda_90[] = {
  0, // locals
  0, // parameters
  // range self 1 e
  var_range, 3, var_1261_5_self, num_1, var_1264_4_e, TAIL_CALL,
  POS(1271, 9)
};

static TAB_NUM t_func_std__normalize[] = {
  0, // locals
  1, // parameters
  var_1295_5_self,
  // $buf ""
  LET, 1, string_1, 1, var_1297_4_buf,
  // $e length_of(self)
  var_length_of, 1, var_1295_5_self, 1, var_1298_4_e,
  // $i 0
  LET, 1, num_0, 1, var_1299_4_i,
  // loop:
  var_loop, 1, lambda_7_loop, TAIL_CALL,
  POS(1297, 3),
  POS(1298, 3),
  POS(1299, 3),
  POS(1300, 3)
};

static TAB_NUM t_lambda_7_loop[] = {
  0, // locals
  0, // parameters
  // loop
  var_loop, 2, lambda_91, lambda_94, TAIL_CALL,
  POS(1301, 5)
};

static TAB_NUM t_lambda_91[] = {
  1, // locals
  0, // parameters
  // inc &i
  var_inc, 1, var_1299_4_i, 1, var_1299_4_i,
  // e
  var_std__less, 2, var_1298_4_e, var_1299_4_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_92, lambda_93, TAIL_CALL,
  POS(1303, 9),
  POS(1305, 15),
  POS(1304, 9)
};

static TAB_NUM t_lambda_92[] = {
  0, // locals
  0, // parameters
  //  buf
  LET, 1, var_1297_4_buf, TAIL_CALL,
  POS(1306, 13)
};

static TAB_NUM t_lambda_93[] = {
  2, // locals
  0, // parameters
  // self(i).is_a_whitespace_character
  var_1295_5_self, 1, var_1299_4_i, 1, LOCAL(1),
  // is_a_whitespace_character
  var_is_a_whitespace_character, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), var_next, var_break, TAIL_CALL,
  POS(1309, 15),
  POS(1309, 23),
  POS(1308, 13)
};

static TAB_NUM t_lambda_94[] = {
  1, // locals
  0, // parameters
  // is_not_empty &buf -> push(buf ' ')
  var_is_not_empty, 1, var_1297_4_buf, 1, LOCAL(1),
  // update_if buf.is_not_empty &buf -> push(buf ' ')
  var_update_if, 3, LOCAL(1), var_1297_4_buf, lambda_95, 1, var_1297_4_buf,
  // $s i
  LET, 1, var_1299_4_i, 1, var_1314_10_s,
  // loop
  var_loop, 2, lambda_96, lambda_99, TAIL_CALL,
  POS(1313, 23),
  POS(1313, 9),
  POS(1314, 9),
  POS(1315, 9)
};

static TAB_NUM t_lambda_95[] = {
  1, // locals
  0, // parameters
  // push(buf ' ')
  var_push, 2, var_1297_4_buf, chr_32, 1, LOCAL(1),
  //  push(buf ' ')
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1313, 44),
  POS(1313, 43)
};

static TAB_NUM t_lambda_96[] = {
  1, // locals
  0, // parameters
  // inc &i
  var_inc, 1, var_1299_4_i, 1, var_1299_4_i,
  // e
  var_std__less, 2, var_1298_4_e, var_1299_4_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_97, lambda_98, TAIL_CALL,
  POS(1317, 13),
  POS(1319, 19),
  POS(1318, 13)
};

static TAB_NUM t_lambda_97[] = {
  2, // locals
  0, // parameters
  // range(self s e))
  var_range, 3, var_1295_5_self, var_1314_10_s, var_1298_4_e, 1, LOCAL(1),
  // append(buf range(self s e))
  var_append, 2, var_1297_4_buf, LOCAL(1), 1, LOCAL(2),
  //  append(buf range(self s e))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1320, 29),
  POS(1320, 18),
  POS(1320, 17)
};

static TAB_NUM t_lambda_98[] = {
  2, // locals
  0, // parameters
  // self(i).is_a_whitespace_character
  var_1295_5_self, 1, var_1299_4_i, 1, LOCAL(1),
  // is_a_whitespace_character
  var_is_a_whitespace_character, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), var_break, var_next, TAIL_CALL,
  POS(1323, 19),
  POS(1323, 27),
  POS(1322, 17)
};

static TAB_NUM t_lambda_99[] = {
  2, // locals
  0, // parameters
  // i-1)
  var_std__minus, 2, var_1299_4_i, num_1, 1, LOCAL(1),
  // range(self s i-1)
  var_range, 3, var_1295_5_self, var_1314_10_s, LOCAL(1), 1, LOCAL(2),
  // append &buf range(self s i-1)
  var_append, 2, var_1297_4_buf, LOCAL(2), 1, var_1297_4_buf,
  // next
  var_next, 0, TAIL_CALL,
  POS(1327, 38),
  POS(1327, 25),
  POS(1327, 13),
  POS(1328, 13)
};

static TAB_NUM t_func_std_types__octet_string___to_base64[] = {
  0, // locals
  1, // parameters
  var_1346_5_str,
  // $base64 ""
  LET, 1, string_1, 1, var_1348_4_base64,
  // loop:
  var_loop, 1, lambda_8_loop, TAIL_CALL,
  POS(1348, 3),
  POS(1349, 3)
};

static TAB_NUM t_lambda_8_loop[] = {
  2, // locals
  0, // parameters
  // $len length_of(str)
  var_length_of, 1, var_1346_5_str, 1, var_1350_6_len,
  // len >= 3:
  var_std__less, 2, var_1350_6_len, num_3, 1, LOCAL(1),
  // len >= 3:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_100, lambda_101, TAIL_CALL,
  POS(1350, 5),
  POS(1352, 7),
  POS(1352, 7),
  POS(1351, 5)
};

static TAB_NUM t_lambda_100[] = {
  2, // locals
  0, // parameters
  // range(str 1 3))
  var_range, 3, var_1346_5_str, num_1, num_3, 1, LOCAL(1),
  // encode(range(str 1 3))
  func_encode, 1, LOCAL(1), 1, LOCAL(2),
  // append &base64 encode(range(str 1 3))
  var_append, 2, var_1348_4_base64, LOCAL(2), 1, var_1348_4_base64,
  // range &str 4 -1
  var_range, 3, var_1346_5_str, num_4, minus_num_1, 1, var_1346_5_str,
  // next
  var_next, 0, TAIL_CALL,
  POS(1353, 31),
  POS(1353, 24),
  POS(1353, 9),
  POS(1354, 9),
  POS(1355, 9)
};

static TAB_NUM t_lambda_101[] = {
  1, // locals
  0, // parameters
  // len == 0
  var_std__equal, 2, var_1350_6_len, num_0, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_102, lambda_103, TAIL_CALL,
  POS(1358, 11),
  POS(1357, 9)
};

static TAB_NUM t_lambda_102[] = {
  0, // locals
  0, // parameters
  //  base64
  LET, 1, var_1348_4_base64, TAIL_CALL,
  POS(1359, 13)
};

static TAB_NUM t_lambda_103[] = {
  2, // locals
  0, // parameters
  // 3-len)
  var_std__minus, 2, num_3, var_1350_6_len, 1, LOCAL(1),
  // dup("@0;" 3-len)
  var_dup, 2, string_7, LOCAL(1), 1, LOCAL(2),
  // append &str dup("@0;" 3-len)
  var_append, 2, var_1346_5_str, LOCAL(2), 1, var_1346_5_str,
  // encode(str)
  func_encode, 1, var_1346_5_str, 1, LOCAL(1),
  // append &base64 encode(str)
  var_append, 2, var_1348_4_base64, LOCAL(1), 1, var_1348_4_base64,
  // case len
  var_case, 5, var_1350_6_len, num_1, lambda_104, num_2, lambda_105, TAIL_CALL,
  POS(1361, 35),
  POS(1361, 25),
  POS(1361, 13),
  POS(1362, 28),
  POS(1362, 13),
  POS(1363, 13)
};

static TAB_NUM t_lambda_104[] = {
  2, // locals
  0, // parameters
  // range(base64 1 -3) "==")
  var_range, 3, var_1348_4_base64, num_1, minus_num_3, 1, LOCAL(1),
  // append(range(base64 1 -3) "==")
  var_append, 2, LOCAL(1), string_8, 1, LOCAL(2),
  //  append(range(base64 1 -3) "==")
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1364, 27),
  POS(1364, 20),
  POS(1364, 19)
};

static TAB_NUM t_lambda_105[] = {
  2, // locals
  0, // parameters
  // range(base64 1 -2) '=')
  var_range, 3, var_1348_4_base64, num_1, minus_num_2, 1, LOCAL(1),
  // push(range(base64 1 -2) '=')
  var_push, 2, LOCAL(1), chr_61, 1, LOCAL(2),
  //  push(range(base64 1 -2) '=')
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1365, 25),
  POS(1365, 20),
  POS(1365, 19)
};

static TAB_NUM t_func_encode[] = {
  10, // locals
  1, // parameters
  LOCAL(10), // 1367_13_three_octets
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
  var_std__bit_or, 2, LOCAL(7), LOCAL(9), 1, var_1369_6_bits,
  // $buf ""
  LET, 1, string_1, 1, var_1374_6_buf,
  // repeat 4
  var_repeat, 3, num_4, lambda_106, lambda_112, TAIL_CALL,
  POS(1371, 9),
  POS(1371, 25),
  POS(1371, 25),
  POS(1372, 9),
  POS(1372, 25),
  POS(1372, 25),
  POS(1370, 8),
  POS(1373, 9),
  POS(1373, 25),
  POS(1369, 5),
  POS(1374, 5),
  POS(1375, 5)
};

static TAB_NUM t_lambda_106[] = {
  1, // locals
  0, // parameters
  // $value bits >> 18
  var_std__shift_right, 2, var_1369_6_bits, num_18, 1, var_1377_10_value,
  // bits & 0x3ffff) << 6
  var_std__bit_and, 2, var_1369_6_bits, num_0x3ffff, 1, LOCAL(1),
  // !bits (bits & 0x3ffff) << 6
  var_std__shift_left, 2, LOCAL(1), num_6, 1, var_1369_6_bits,
  // case value
  var_case, 11, var_1377_10_value, value_range_1380_11, lambda_107, value_range_1383_11, lambda_108, value_range_1386_11, lambda_109, num_62, lambda_110, num_63, lambda_111, TAIL_CALL,
  POS(1377, 9),
  POS(1378, 16),
  POS(1378, 9),
  POS(1379, 9)
};

static TAB_NUM t_lambda_107[] = {
  1, // locals
  0, // parameters
  // A'+value
  var_std__plus, 2, chr_65, var_1377_10_value, 1, LOCAL(1),
  // push &buf 'A'+value
  var_push, 2, var_1374_6_buf, LOCAL(1), 1, var_1374_6_buf,
  // next
  var_next, 0, TAIL_CALL,
  POS(1381, 24),
  POS(1381, 13),
  POS(1382, 13)
};

static TAB_NUM t_lambda_108[] = {
  2, // locals
  0, // parameters
  // value-26)
  var_std__minus, 2, var_1377_10_value, num_26, 1, LOCAL(1),
  // a'+(value-26)
  var_std__plus, 2, chr_97, LOCAL(1), 1, LOCAL(2),
  // push &buf 'a'+(value-26)
  var_push, 2, var_1374_6_buf, LOCAL(2), 1, var_1374_6_buf,
  // next
  var_next, 0, TAIL_CALL,
  POS(1384, 28),
  POS(1384, 24),
  POS(1384, 13),
  POS(1385, 13)
};

static TAB_NUM t_lambda_109[] = {
  2, // locals
  0, // parameters
  // value-52)
  var_std__minus, 2, var_1377_10_value, num_52, 1, LOCAL(1),
  // 0'+(value-52)
  var_std__plus, 2, chr_48, LOCAL(1), 1, LOCAL(2),
  // push &buf '0'+(value-52)
  var_push, 2, var_1374_6_buf, LOCAL(2), 1, var_1374_6_buf,
  // next
  var_next, 0, TAIL_CALL,
  POS(1387, 28),
  POS(1387, 24),
  POS(1387, 13),
  POS(1388, 13)
};

static TAB_NUM t_lambda_110[] = {
  0, // locals
  0, // parameters
  // push &buf '+'
  var_push, 2, var_1374_6_buf, chr_43, 1, var_1374_6_buf,
  // next
  var_next, 0, TAIL_CALL,
  POS(1390, 13),
  POS(1391, 13)
};

static TAB_NUM t_lambda_111[] = {
  0, // locals
  0, // parameters
  // push &buf '/'
  var_push, 2, var_1374_6_buf, chr_47, 1, var_1374_6_buf,
  // next
  var_next, 0, TAIL_CALL,
  POS(1393, 13),
  POS(1394, 13)
};

static TAB_NUM t_lambda_112[] = {
  0, // locals
  0, // parameters
  //  buf
  LET, 1, var_1374_6_buf, TAIL_CALL,
  POS(1395, 9)
};

static TAB_NUM t_func_std_types__octet_string___from_base64[] = {
  4, // locals
  1, // parameters
  var_1416_5_str,
  // $octets ""
  LET, 1, string_1, 1, var_1418_4_octets,
  // length_of(str) .mod. 4) != 0
  var_length_of, 1, var_1416_5_str, 1, LOCAL(1),
  // length_of(str) .mod. 4) != 0
  var_mod, 2, LOCAL(1), num_4, 1, LOCAL(2),
  // length_of(str) .mod. 4) != 0
  var_std__equal, 2, LOCAL(2), num_0, 1, LOCAL(3),
  // length_of(str) .mod. 4) != 0
  var_std__not, 1, LOCAL(3), 1, LOCAL(4),
  // if
  var_if, 3, LOCAL(4), lambda_113, lambda_114, TAIL_CALL,
  POS(1418, 3),
  POS(1420, 6),
  POS(1420, 6),
  POS(1420, 6),
  POS(1420, 6),
  POS(1419, 3)
};

static TAB_NUM t_lambda_113[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(1421, 7)
};

static TAB_NUM t_lambda_114[] = {
  0, // locals
  0, // parameters
  // loop:
  var_loop, 1, lambda_9_loop, TAIL_CALL,
  POS(1423, 7)
};

static TAB_NUM t_lambda_9_loop[] = {
  1, // locals
  0, // parameters
  // is_empty
  var_is_empty, 1, var_1416_5_str, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_115, lambda_116, TAIL_CALL,
  POS(1425, 15),
  POS(1424, 9)
};

static TAB_NUM t_lambda_115[] = {
  0, // locals
  0, // parameters
  //  octets
  LET, 1, var_1418_4_octets, TAIL_CALL,
  POS(1426, 13)
};

static TAB_NUM t_lambda_116[] = {
  0, // locals
  0, // parameters
  // $bits 0
  LET, 1, num_0, 1, var_1428_14_bits,
  // from_to 1 4
  var_from_to, 4, num_1, num_4, lambda_117, lambda_120, TAIL_CALL,
  POS(1428, 13),
  POS(1429, 13)
};

static TAB_NUM t_lambda_117[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 1430_18_i
  // str(i))
  var_1416_5_str, 1, LOCAL(2), 1, LOCAL(1),
  // $value decode(str(i))
  func_decode, 1, LOCAL(1), 1, var_1431_18_value,
  // is_undefined
  var_is_undefined, 1, var_1431_18_value, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_118, lambda_119, TAIL_CALL,
  POS(1431, 31),
  POS(1431, 17),
  POS(1433, 25),
  POS(1432, 17)
};

static TAB_NUM t_lambda_118[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(1434, 21)
};

static TAB_NUM t_lambda_119[] = {
  1, // locals
  0, // parameters
  // bits << 6) | value
  var_std__shift_left, 2, var_1428_14_bits, num_6, 1, LOCAL(1),
  // !bits (bits << 6) | value
  var_std__bit_or, 2, LOCAL(1), var_1431_18_value, 1, var_1428_14_bits,
  // next
  var_next, 0, TAIL_CALL,
  POS(1436, 28),
  POS(1436, 21),
  POS(1437, 21)
};

static TAB_NUM t_lambda_120[] = {
  3, // locals
  0, // parameters
  // bits >> 16)
  var_std__shift_right, 2, var_1428_14_bits, num_16, 1, LOCAL(1),
  // character(bits >> 16)
  var_character, 1, LOCAL(1), 1, LOCAL(2),
  // push &octets character(bits >> 16)
  var_push, 2, var_1418_4_octets, LOCAL(2), 1, var_1418_4_octets,
  // bits >> 8) & 0xff)
  var_std__shift_right, 2, var_1428_14_bits, num_8, 1, LOCAL(1),
  // bits >> 8) & 0xff)
  var_std__bit_and, 2, LOCAL(1), num_0xff, 1, LOCAL(2),
  // character((bits >> 8) & 0xff)
  var_character, 1, LOCAL(2), 1, LOCAL(3),
  // push &octets character((bits >> 8) & 0xff)
  var_push, 2, var_1418_4_octets, LOCAL(3), 1, var_1418_4_octets,
  // bits & 0xff)
  var_std__bit_and, 2, var_1428_14_bits, num_0xff, 1, LOCAL(1),
  // character(bits & 0xff)
  var_character, 1, LOCAL(1), 1, LOCAL(2),
  // push &octets character(bits & 0xff)
  var_push, 2, var_1418_4_octets, LOCAL(2), 1, var_1418_4_octets,
  // str(4) == '=':
  var_1416_5_str, 1, num_4, 1, LOCAL(1),
  // str(4) == '=':
  var_std__equal, 2, LOCAL(1), chr_61, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_121, lambda_124, TAIL_CALL,
  POS(1439, 40),
  POS(1439, 30),
  POS(1439, 17),
  POS(1440, 41),
  POS(1440, 41),
  POS(1440, 30),
  POS(1440, 17),
  POS(1441, 40),
  POS(1441, 30),
  POS(1441, 17),
  POS(1443, 19),
  POS(1443, 19),
  POS(1442, 17)
};

static TAB_NUM t_lambda_121[] = {
  2, // locals
  0, // parameters
  // str(3) == '='
  var_1416_5_str, 1, num_3, 1, LOCAL(1),
  // str(3) == '='
  var_std__equal, 2, LOCAL(1), chr_61, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_122, lambda_123, TAIL_CALL,
  POS(1445, 23),
  POS(1445, 23),
  POS(1444, 21)
};

static TAB_NUM t_lambda_122[] = {
  1, // locals
  0, // parameters
  // range(octets 1 -3)
  var_range, 3, var_1418_4_octets, num_1, minus_num_3, 1, LOCAL(1),
  //  range(octets 1 -3)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1446, 26),
  POS(1446, 25)
};

static TAB_NUM t_lambda_123[] = {
  1, // locals
  0, // parameters
  // range(octets 1 -2)
  var_range, 3, var_1418_4_octets, num_1, minus_num_2, 1, LOCAL(1),
  //  range(octets 1 -2)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1447, 26),
  POS(1447, 25)
};

static TAB_NUM t_lambda_124[] = {
  0, // locals
  0, // parameters
  // range &str 5 -1
  var_range, 3, var_1416_5_str, num_5, minus_num_1, 1, var_1416_5_str,
  // next
  var_next, 0, TAIL_CALL,
  POS(1449, 21),
  POS(1450, 21)
};

static TAB_NUM t_func_decode[] = {
  0, // locals
  1, // parameters
  var_1452_13_chr,
  // case chr
  var_case, 14, var_1452_13_chr, value_range_1455_8, lambda_125, value_range_1456_8, lambda_126, value_range_1457_8, lambda_127, chr_43, lambda_128, chr_47, lambda_129, chr_61, lambda_130, lambda_131, TAIL_CALL,
  POS(1454, 5)
};

static TAB_NUM t_lambda_125[] = {
  1, // locals
  0, // parameters
  // chr-'A'
  var_std__minus, 2, var_1452_13_chr, chr_65, 1, LOCAL(1),
  //  chr-'A'
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1455, 21),
  POS(1455, 20)
};

static TAB_NUM t_lambda_126[] = {
  2, // locals
  0, // parameters
  // chr-'a'+26
  var_std__minus, 2, var_1452_13_chr, chr_97, 1, LOCAL(1),
  // chr-'a'+26
  var_std__plus, 2, LOCAL(1), num_26, 1, LOCAL(2),
  //  chr-'a'+26
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1456, 21),
  POS(1456, 21),
  POS(1456, 20)
};

static TAB_NUM t_lambda_127[] = {
  2, // locals
  0, // parameters
  // chr-'0'+52
  var_std__minus, 2, var_1452_13_chr, chr_48, 1, LOCAL(1),
  // chr-'0'+52
  var_std__plus, 2, LOCAL(1), num_52, 1, LOCAL(2),
  //  chr-'0'+52
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1457, 21),
  POS(1457, 21),
  POS(1457, 20)
};

static TAB_NUM t_lambda_128[] = {
  0, // locals
  0, // parameters
  //  62
  LET, 1, num_62, TAIL_CALL,
  POS(1458, 13)
};

static TAB_NUM t_lambda_129[] = {
  0, // locals
  0, // parameters
  //  63
  LET, 1, num_63, TAIL_CALL,
  POS(1459, 13)
};

static TAB_NUM t_lambda_130[] = {
  0, // locals
  0, // parameters
  //  0
  LET, 1, num_0, TAIL_CALL,
  POS(1460, 13)
};

static TAB_NUM t_lambda_131[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(1461, 9)
};

static TAB_NUM t_func_std_types__octet_string___sha1[] = {
  4, // locals
  1, // parameters
  var_1478_5_message,
  // $h0 0x67452301
  LET, 1, num_0x67452301, 1, var_1482_4_h0,
  // $h1 0xefcdab89
  LET, 1, num_0xefcdab89, 1, var_1483_4_h1,
  // $h2 0x98badcfe
  LET, 1, num_0x98badcfe, 1, var_1484_4_h2,
  // $h3 0x10325476
  LET, 1, num_0x10325476, 1, var_1485_4_h3,
  // $h4 0xc3d2e1f0
  LET, 1, num_0xc3d2e1f0, 1, var_1486_4_h4,
  // $len length_of(message)
  var_length_of, 1, var_1478_5_message, 1, LOCAL(3),
  // push &message '@0x80;'
  var_push, 2, var_1478_5_message, chr_128, 1, var_1478_5_message,
  // len+1 .mod. 512)
  var_std__plus, 2, LOCAL(3), num_1, 1, LOCAL(1),
  // len+1 .mod. 512)
  var_mod, 2, LOCAL(1), num_512, 1, LOCAL(2),
  // $pad_len 56-(len+1 .mod. 512)
  var_std__minus, 2, num_56, LOCAL(2), 1, var_1507_4_pad_len,
  // pad_len < 0 &pad_len -> pad_len+64
  var_std__less, 2, var_1507_4_pad_len, num_0, 1, LOCAL(1),
  // update_if pad_len < 0 &pad_len -> pad_len+64
  var_update_if, 3, LOCAL(1), var_1507_4_pad_len, lambda_132, 1, var_1507_4_pad_len,
  // $pad_octets dup("@0;" pad_len)
  var_dup, 2, string_7, var_1507_4_pad_len, 1, LOCAL(4),
  // append &message pad_octets
  var_append, 2, var_1478_5_message, LOCAL(4), 1, var_1478_5_message,
  // 8*len)
  var_std__times, 2, num_8, LOCAL(3), 1, LOCAL(1),
  // big_endian_string_64(8*len)
  func_big_endian_string_64, 1, LOCAL(1), 1, LOCAL(2),
  // append &message big_endian_string_64(8*len)
  var_append, 2, var_1478_5_message, LOCAL(2), 1, var_1478_5_message,
  // loop:
  var_loop, 1, lambda_10_loop, TAIL_CALL,
  POS(1482, 3),
  POS(1483, 3),
  POS(1484, 3),
  POS(1485, 3),
  POS(1486, 3),
  POS(1505, 3),
  POS(1506, 3),
  POS(1507, 16),
  POS(1507, 16),
  POS(1507, 3),
  POS(1508, 13),
  POS(1508, 3),
  POS(1509, 3),
  POS(1510, 3),
  POS(1511, 40),
  POS(1511, 19),
  POS(1511, 3),
  POS(1515, 3)
};

static TAB_NUM t_lambda_132[] = {
  1, // locals
  0, // parameters
  // pad_len+64
  var_std__plus, 2, var_1507_4_pad_len, num_64, 1, LOCAL(1),
  //  pad_len+64
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1508, 37),
  POS(1508, 36)
};

static TAB_NUM t_lambda_10_loop[] = {
  1, // locals
  0, // parameters
  // is_empty:
  var_is_empty, 1, var_1478_5_message, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_message_is_empty, lambda_133, TAIL_CALL,
  POS(1517, 15),
  POS(1516, 5)
};

static TAB_NUM t_lambda_message_is_empty[] = {
  5, // locals
  0, // parameters
  // big_endian_string_32(h0)
  func_big_endian_string_32, 1, var_1482_4_h0, 1, LOCAL(1),
  // big_endian_string_32(h1)
  func_big_endian_string_32, 1, var_1483_4_h1, 1, LOCAL(2),
  // big_endian_string_32(h2)
  func_big_endian_string_32, 1, var_1484_4_h2, 1, LOCAL(3),
  // big_endian_string_32(h3)
  func_big_endian_string_32, 1, var_1485_4_h3, 1, LOCAL(4),
  // big_endian_string_32(h4)
  func_big_endian_string_32, 1, var_1486_4_h4, 1, LOCAL(5),
  // string
  var_string, 5, LOCAL(1), LOCAL(2), LOCAL(3), LOCAL(4), LOCAL(5), TAIL_CALL,
  POS(1519, 11),
  POS(1520, 11),
  POS(1521, 11),
  POS(1522, 11),
  POS(1523, 11),
  POS(1518, 9)
};

static TAB_NUM t_lambda_133[] = {
  0, // locals
  0, // parameters
  // $w uint32_array(80)
  var_uint32_array, 1, num_80, 1, var_1525_10_w,
  // from_to 1 16
  var_from_to, 4, num_1, num_16, lambda_134, lambda_135, TAIL_CALL,
  POS(1525, 9),
  POS(1526, 9)
};

static TAB_NUM t_lambda_134[] = {
  23, // locals
  1, // parameters
  LOCAL(23), // 1527_14_i
  // 4*i-3).to_integer << 24
  var_std__times, 2, num_4, LOCAL(23), 1, LOCAL(1),
  // 4*i-3).to_integer << 24
  var_std__minus, 2, LOCAL(1), num_3, 1, LOCAL(2),
  // message(4*i-3).to_integer << 24
  var_1478_5_message, 1, LOCAL(2), 1, LOCAL(3),
  // to_integer << 24
  var_to_integer, 1, LOCAL(3), 1, LOCAL(4),
  // to_integer << 24
  var_std__shift_left, 2, LOCAL(4), num_24, 1, LOCAL(5),
  // 4*i-2).to_integer << 16
  var_std__times, 2, num_4, LOCAL(23), 1, LOCAL(6),
  // 4*i-2).to_integer << 16
  var_std__minus, 2, LOCAL(6), num_2, 1, LOCAL(7),
  // message(4*i-2).to_integer << 16
  var_1478_5_message, 1, LOCAL(7), 1, LOCAL(8),
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
  var_1478_5_message, 1, LOCAL(13), 1, LOCAL(14),
  // to_integer << 8
  var_to_integer, 1, LOCAL(14), 1, LOCAL(15),
  // to_integer << 8
  var_std__shift_left, 2, LOCAL(15), num_8, 1, LOCAL(16),
  // 
  var_std__bit_or, 2, LOCAL(11), LOCAL(16), 1, LOCAL(17),
  // 4*i).to_integer
  var_std__times, 2, num_4, LOCAL(23), 1, LOCAL(18),
  // message(4*i).to_integer
  var_1478_5_message, 1, LOCAL(18), 1, LOCAL(19),
  // to_integer
  var_to_integer, 1, LOCAL(19), 1, LOCAL(20),
  // !w(i)
  var_std__bit_or, 2, LOCAL(17), LOCAL(20), 1, LOCAL(22),
  // w(i)
  var_1525_10_w, 2, LOCAL(23), LOCAL(22), 1, var_1525_10_w,
  // next
  var_next, 0, TAIL_CALL,
  POS(1530, 25),
  POS(1530, 25),
  POS(1530, 17),
  POS(1530, 32),
  POS(1530, 32),
  POS(1531, 25),
  POS(1531, 25),
  POS(1531, 17),
  POS(1531, 32),
  POS(1531, 32),
  POS(1529, 16),
  POS(1532, 25),
  POS(1532, 25),
  POS(1532, 17),
  POS(1532, 32),
  POS(1532, 32),
  POS(1529, 16),
  POS(1533, 25),
  POS(1533, 17),
  POS(1533, 30),
  POS(1528, 13),
  POS(1528, 14),
  POS(1534, 13)
};

static TAB_NUM t_lambda_135[] = {
  0, // locals
  0, // parameters
  // from_to 17 80
  var_from_to, 4, num_17, num_80, lambda_136, func_main_loop, TAIL_CALL,
  POS(1536, 13)
};

static TAB_NUM t_lambda_136[] = {
  14, // locals
  1, // parameters
  LOCAL(14), // 1537_18_i
  // i-3) ^ w(i-8) ^ w(i-14) ^ w(i-16) .rol32. 1
  var_std__minus, 2, LOCAL(14), num_3, 1, LOCAL(1),
  // w(i-3) ^ w(i-8) ^ w(i-14) ^ w(i-16) .rol32. 1
  var_1525_10_w, 1, LOCAL(1), 1, LOCAL(2),
  // i-8) ^ w(i-14) ^ w(i-16) .rol32. 1
  var_std__minus, 2, LOCAL(14), num_8, 1, LOCAL(3),
  // w(i-8) ^ w(i-14) ^ w(i-16) .rol32. 1
  var_1525_10_w, 1, LOCAL(3), 1, LOCAL(4),
  // w(i-3) ^ w(i-8) ^ w(i-14) ^ w(i-16) .rol32. 1
  var_std__bit_xor, 2, LOCAL(2), LOCAL(4), 1, LOCAL(5),
  // i-14) ^ w(i-16) .rol32. 1
  var_std__minus, 2, LOCAL(14), num_14, 1, LOCAL(6),
  // w(i-14) ^ w(i-16) .rol32. 1
  var_1525_10_w, 1, LOCAL(6), 1, LOCAL(7),
  // w(i-3) ^ w(i-8) ^ w(i-14) ^ w(i-16) .rol32. 1
  var_std__bit_xor, 2, LOCAL(5), LOCAL(7), 1, LOCAL(8),
  // i-16) .rol32. 1
  var_std__minus, 2, LOCAL(14), num_16, 1, LOCAL(9),
  // w(i-16) .rol32. 1
  var_1525_10_w, 1, LOCAL(9), 1, LOCAL(10),
  // w(i-3) ^ w(i-8) ^ w(i-14) ^ w(i-16) .rol32. 1
  var_std__bit_xor, 2, LOCAL(8), LOCAL(10), 1, LOCAL(11),
  // !w(i) w(i-3) ^ w(i-8) ^ w(i-14) ^ w(i-16) .rol32. 1
  func_rol32, 2, LOCAL(11), num_1, 1, LOCAL(13),
  // w(i) w(i-3) ^ w(i-8) ^ w(i-14) ^ w(i-16) .rol32. 1
  var_1525_10_w, 2, LOCAL(14), LOCAL(13), 1, var_1525_10_w,
  // next
  var_next, 0, TAIL_CALL,
  POS(1538, 25),
  POS(1538, 23),
  POS(1538, 34),
  POS(1538, 32),
  POS(1538, 23),
  POS(1538, 43),
  POS(1538, 41),
  POS(1538, 23),
  POS(1538, 53),
  POS(1538, 51),
  POS(1538, 23),
  POS(1538, 17),
  POS(1538, 18),
  POS(1539, 17)
};

static TAB_NUM t_func_main_loop[] = {
  0, // locals
  0, // parameters
  // $a h0
  LET, 1, var_1482_4_h0, 1, var_1543_12_a,
  // $b h1
  LET, 1, var_1483_4_h1, 1, var_1544_12_b,
  // $c h2
  LET, 1, var_1484_4_h2, 1, var_1545_12_c,
  // $d h3
  LET, 1, var_1485_4_h3, 1, var_1546_12_d,
  // $e h4
  LET, 1, var_1486_4_h4, 1, var_1547_12_e,
  // from_to 1 80
  var_from_to, 4, num_1, num_80, lambda_137, lambda_146, TAIL_CALL,
  POS(1543, 11),
  POS(1544, 11),
  POS(1545, 11),
  POS(1546, 11),
  POS(1547, 11),
  POS(1548, 11)
};

static TAB_NUM t_lambda_137[] = {
  0, // locals
  1, // parameters
  var_1549_16_i,
  // cond
  var_cond, 4, lambda_138, lambda_140, lambda_142, lambda_144, TAIL_CALL,
  POS(1550, 15)
};

static TAB_NUM t_lambda_138[] = {
  2, // locals
  0, // parameters
  // 20: compute (b & c) | ((b ^ 0xffffffff) & d) k0
  var_std__less, 2, num_20, var_1549_16_i, 1, LOCAL(1),
  // 20: compute (b & c) | ((b ^ 0xffffffff) & d) k0
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  //  i <= 20: compute (b & c) | ((b ^ 0xffffffff) & d) k0
  LET, 2, LOCAL(2), lambda_139, TAIL_CALL,
  POS(1551, 25),
  POS(1551, 25),
  POS(1551, 19)
};

static TAB_NUM t_lambda_139[] = {
  4, // locals
  0, // parameters
  // b & c) | ((b ^ 0xffffffff) & d) k0
  var_std__bit_and, 2, var_1544_12_b, var_1545_12_c, 1, LOCAL(1),
  // b ^ 0xffffffff) & d) k0
  var_std__bit_xor, 2, var_1544_12_b, num_0xffffffff, 1, LOCAL(2),
  // b ^ 0xffffffff) & d) k0
  var_std__bit_and, 2, LOCAL(2), var_1546_12_d, 1, LOCAL(3),
  // b & c) | ((b ^ 0xffffffff) & d) k0
  var_std__bit_or, 2, LOCAL(1), LOCAL(3), 1, LOCAL(4),
  // compute (b & c) | ((b ^ 0xffffffff) & d) k0
  func_compute, 2, LOCAL(4), num_0x5a827999, TAIL_CALL,
  POS(1551, 38),
  POS(1551, 49),
  POS(1551, 49),
  POS(1551, 38),
  POS(1551, 29)
};

static TAB_NUM t_lambda_140[] = {
  2, // locals
  0, // parameters
  // 40: compute (b ^ c ^ d) k1
  var_std__less, 2, num_40, var_1549_16_i, 1, LOCAL(1),
  // 40: compute (b ^ c ^ d) k1
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  //  i <= 40: compute (b ^ c ^ d) k1
  LET, 2, LOCAL(2), lambda_141, TAIL_CALL,
  POS(1552, 25),
  POS(1552, 25),
  POS(1552, 19)
};

static TAB_NUM t_lambda_141[] = {
  2, // locals
  0, // parameters
  // b ^ c ^ d) k1
  var_std__bit_xor, 2, var_1544_12_b, var_1545_12_c, 1, LOCAL(1),
  // b ^ c ^ d) k1
  var_std__bit_xor, 2, LOCAL(1), var_1546_12_d, 1, LOCAL(2),
  // compute (b ^ c ^ d) k1
  func_compute, 2, LOCAL(2), num_0x6ed9eba1, TAIL_CALL,
  POS(1552, 38),
  POS(1552, 38),
  POS(1552, 29)
};

static TAB_NUM t_lambda_142[] = {
  2, // locals
  0, // parameters
  // 60: compute (b & c) | (b & d) | (c & d) k2
  var_std__less, 2, num_60, var_1549_16_i, 1, LOCAL(1),
  // 60: compute (b & c) | (b & d) | (c & d) k2
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  //  i <= 60: compute (b & c) | (b & d) | (c & d) k2
  LET, 2, LOCAL(2), lambda_143, TAIL_CALL,
  POS(1553, 25),
  POS(1553, 25),
  POS(1553, 19)
};

static TAB_NUM t_lambda_143[] = {
  5, // locals
  0, // parameters
  // b & c) | (b & d) | (c & d) k2
  var_std__bit_and, 2, var_1544_12_b, var_1545_12_c, 1, LOCAL(1),
  // b & d) | (c & d) k2
  var_std__bit_and, 2, var_1544_12_b, var_1546_12_d, 1, LOCAL(2),
  // b & c) | (b & d) | (c & d) k2
  var_std__bit_or, 2, LOCAL(1), LOCAL(2), 1, LOCAL(3),
  // c & d) k2
  var_std__bit_and, 2, var_1545_12_c, var_1546_12_d, 1, LOCAL(4),
  // b & c) | (b & d) | (c & d) k2
  var_std__bit_or, 2, LOCAL(3), LOCAL(4), 1, LOCAL(5),
  // compute (b & c) | (b & d) | (c & d) k2
  func_compute, 2, LOCAL(5), num_0x8f1bbcdc, TAIL_CALL,
  POS(1553, 38),
  POS(1553, 48),
  POS(1553, 38),
  POS(1553, 58),
  POS(1553, 38),
  POS(1553, 29)
};

static TAB_NUM t_lambda_144[] = {
  0, // locals
  0, // parameters
  //  true: compute (b ^ c ^ d) k3
  LET, 2, var_true, lambda_145, TAIL_CALL,
  POS(1554, 19)
};

static TAB_NUM t_lambda_145[] = {
  2, // locals
  0, // parameters
  // b ^ c ^ d) k3
  var_std__bit_xor, 2, var_1544_12_b, var_1545_12_c, 1, LOCAL(1),
  // b ^ c ^ d) k3
  var_std__bit_xor, 2, LOCAL(1), var_1546_12_d, 1, LOCAL(2),
  // compute (b ^ c ^ d) k3
  func_compute, 2, LOCAL(2), num_0xca62c1d6, TAIL_CALL,
  POS(1554, 35),
  POS(1554, 35),
  POS(1554, 26)
};

static TAB_NUM t_func_compute[] = {
  9, // locals
  2, // parameters
  LOCAL(7), // 1556_26_f
  LOCAL(8), // 1556_28_k
  // a .rol32. 5) + f + e + k + w(i)) & 0xffffffff
  func_rol32, 2, var_1543_12_a, num_5, 1, LOCAL(1),
  // a .rol32. 5) + f + e + k + w(i)) & 0xffffffff
  var_std__plus, 2, LOCAL(1), LOCAL(7), 1, LOCAL(2),
  // a .rol32. 5) + f + e + k + w(i)) & 0xffffffff
  var_std__plus, 2, LOCAL(2), var_1547_12_e, 1, LOCAL(3),
  // a .rol32. 5) + f + e + k + w(i)) & 0xffffffff
  var_std__plus, 2, LOCAL(3), LOCAL(8), 1, LOCAL(4),
  // w(i)) & 0xffffffff
  var_1525_10_w, 1, var_1549_16_i, 1, LOCAL(5),
  // a .rol32. 5) + f + e + k + w(i)) & 0xffffffff
  var_std__plus, 2, LOCAL(4), LOCAL(5), 1, LOCAL(6),
  // $t ((a .rol32. 5) + f + e + k + w(i)) & 0xffffffff
  var_std__bit_and, 2, LOCAL(6), num_0xffffffff, 1, LOCAL(9),
  // !e d
  LET, 1, var_1546_12_d, 1, var_1547_12_e,
  // !d c
  LET, 1, var_1545_12_c, 1, var_1546_12_d,
  // !c b .rol32. 30
  func_rol32, 2, var_1544_12_b, num_30, 1, var_1545_12_c,
  // !b a
  LET, 1, var_1543_12_a, 1, var_1544_12_b,
  // !a t
  LET, 1, LOCAL(9), 1, var_1543_12_a,
  // next
  var_next, 0, TAIL_CALL,
  POS(1557, 22),
  POS(1557, 22),
  POS(1557, 22),
  POS(1557, 22),
  POS(1557, 49),
  POS(1557, 22),
  POS(1557, 17),
  POS(1558, 17),
  POS(1559, 17),
  POS(1560, 17),
  POS(1561, 17),
  POS(1562, 17),
  POS(1563, 17)
};

static TAB_NUM t_lambda_146[] = {
  1, // locals
  0, // parameters
  // h0+a) & 0xffffffff
  var_std__plus, 2, var_1482_4_h0, var_1543_12_a, 1, LOCAL(1),
  // !h0 (h0+a) & 0xffffffff
  var_std__bit_and, 2, LOCAL(1), num_0xffffffff, 1, var_1482_4_h0,
  // h1+b) & 0xffffffff
  var_std__plus, 2, var_1483_4_h1, var_1544_12_b, 1, LOCAL(1),
  // !h1 (h1+b) & 0xffffffff
  var_std__bit_and, 2, LOCAL(1), num_0xffffffff, 1, var_1483_4_h1,
  // h2+c) & 0xffffffff
  var_std__plus, 2, var_1484_4_h2, var_1545_12_c, 1, LOCAL(1),
  // !h2 (h2+c) & 0xffffffff
  var_std__bit_and, 2, LOCAL(1), num_0xffffffff, 1, var_1484_4_h2,
  // h3+d) & 0xffffffff
  var_std__plus, 2, var_1485_4_h3, var_1546_12_d, 1, LOCAL(1),
  // !h3 (h3+d) & 0xffffffff
  var_std__bit_and, 2, LOCAL(1), num_0xffffffff, 1, var_1485_4_h3,
  // h4+e) & 0xffffffff
  var_std__plus, 2, var_1486_4_h4, var_1547_12_e, 1, LOCAL(1),
  // !h4 (h4+e) & 0xffffffff
  var_std__bit_and, 2, LOCAL(1), num_0xffffffff, 1, var_1486_4_h4,
  // range &message 65 -1
  var_range, 3, var_1478_5_message, num_65, minus_num_1, 1, var_1478_5_message,
  // next
  var_next, 0, TAIL_CALL,
  POS(1565, 20),
  POS(1565, 15),
  POS(1566, 20),
  POS(1566, 15),
  POS(1567, 20),
  POS(1567, 15),
  POS(1568, 20),
  POS(1568, 15),
  POS(1569, 20),
  POS(1569, 15),
  POS(1570, 15),
  POS(1571, 15)
};

static TAB_NUM t_func_big_endian_string_64[] = {
  23, // locals
  1, // parameters
  LOCAL(23), // 1573_27_n
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
  POS(1576, 17),
  POS(1576, 7),
  POS(1577, 18),
  POS(1577, 18),
  POS(1577, 7),
  POS(1578, 18),
  POS(1578, 18),
  POS(1578, 7),
  POS(1579, 18),
  POS(1579, 18),
  POS(1579, 7),
  POS(1580, 18),
  POS(1580, 18),
  POS(1580, 7),
  POS(1581, 18),
  POS(1581, 18),
  POS(1581, 7),
  POS(1582, 18),
  POS(1582, 18),
  POS(1582, 7),
  POS(1583, 17),
  POS(1583, 7),
  POS(1575, 5)
};

static TAB_NUM t_func_big_endian_string_32[] = {
  11, // locals
  1, // parameters
  LOCAL(11), // 1585_27_n
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
  POS(1588, 17),
  POS(1588, 7),
  POS(1589, 18),
  POS(1589, 18),
  POS(1589, 7),
  POS(1590, 18),
  POS(1590, 18),
  POS(1590, 7),
  POS(1591, 17),
  POS(1591, 7),
  POS(1587, 5)
};

static TAB_NUM t_func_rol32[] = {
  7, // locals
  2, // parameters
  LOCAL(6), // 1593_12_n
  LOCAL(7), // 1593_14_k
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
  POS(1593, 22),
  POS(1593, 22),
  POS(1593, 53),
  POS(1593, 47),
  POS(1593, 22),
  POS(1593, 17)
};

static TAB_NUM t_func_std__parse_integer[] = {
  0, // locals
  1, // parameters
  var_1622_5_self,
  // $orig self
  LET, 1, var_1622_5_self, 1, var_1642_4_orig,
  // $negate self .has_prefix. '-'
  var_has_prefix, 2, var_1622_5_self, chr_45, 1, var_1643_4_negate,
  // !self
  var_if, 3, var_1643_4_negate, lambda_153, lambda_154, 1, var_1622_5_self,
  // $value 0
  LET, 1, num_0, 1, var_1649_4_value,
  // cond
  var_cond, 4, lambda_155, lambda_160, lambda_165, lambda_170, TAIL_CALL,
  POS(1642, 3),
  POS(1643, 3),
  POS(1644, 3),
  POS(1649, 3),
  POS(1650, 3)
};

static TAB_NUM t_func_maybe_negated[] = {
  0, // locals
  0, // parameters
  // if
  var_if, 3, var_1643_4_negate, lambda_147, lambda_148, TAIL_CALL,
  POS(1625, 5)
};

static TAB_NUM t_lambda_147[] = {
  1, // locals
  0, // parameters
  // value
  var_std__negate, 1, var_1649_4_value, 1, LOCAL(1),
  //  -value
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1627, 11),
  POS(1627, 9)
};

static TAB_NUM t_lambda_148[] = {
  0, // locals
  0, // parameters
  //  value
  LET, 1, var_1649_4_value, TAIL_CALL,
  POS(1628, 9)
};

static TAB_NUM t_func_partial_match[] = {
  1, // locals
  1, // parameters
  var_1630_20_idx,
  // 1
  var_std__less, 2, num_1, var_1630_20_idx, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_149, lambda_150, TAIL_CALL,
  POS(1632, 13),
  POS(1631, 5)
};

static TAB_NUM t_lambda_149[] = {
  2, // locals
  0, // parameters
  // range(self idx -1) maybe_negated()
  var_range, 3, var_1622_5_self, var_1630_20_idx, minus_num_1, 1, LOCAL(1),
  // maybe_negated()
  func_maybe_negated, 0, 1, LOCAL(2),
  //  range(self idx -1) maybe_negated()
  LET, 2, LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(1633, 10),
  POS(1633, 29),
  POS(1633, 9)
};

static TAB_NUM t_lambda_150[] = {
  0, // locals
  0, // parameters
  //  orig undefined
  LET, 2, var_1642_4_orig, var_undefined, TAIL_CALL,
  POS(1634, 9)
};

static TAB_NUM t_func_exhausted[] = {
  1, // locals
  0, // parameters
  // is_empty
  var_is_empty, 1, var_1622_5_self, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_151, lambda_152, TAIL_CALL,
  POS(1638, 12),
  POS(1637, 5)
};

static TAB_NUM t_lambda_151[] = {
  0, // locals
  0, // parameters
  //  orig undefined
  LET, 2, var_1642_4_orig, var_undefined, TAIL_CALL,
  POS(1639, 9)
};

static TAB_NUM t_lambda_152[] = {
  1, // locals
  0, // parameters
  // maybe_negated()
  func_maybe_negated, 0, 1, LOCAL(1),
  //  "" maybe_negated()
  LET, 2, string_1, LOCAL(1), TAIL_CALL,
  POS(1640, 13),
  POS(1640, 9)
};

static TAB_NUM t_lambda_153[] = {
  1, // locals
  0, // parameters
  // range(self 2 -1)
  var_range, 3, var_1622_5_self, num_2, minus_num_1, 1, LOCAL(1),
  //  range(self 2 -1)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1647, 10),
  POS(1647, 9)
};

static TAB_NUM t_lambda_154[] = {
  0, // locals
  0, // parameters
  //  self
  LET, 1, var_1622_5_self, TAIL_CALL,
  POS(1648, 9)
};

static TAB_NUM t_lambda_155[] = {
  1, // locals
  0, // parameters
  // self .has_prefix. "0b":
  var_has_prefix, 2, var_1622_5_self, str_0b, 1, LOCAL(1),
  //  self .has_prefix. "0b":
  LET, 2, LOCAL(1), lambda_156, TAIL_CALL,
  POS(1651, 8),
  POS(1651, 7)
};

static TAB_NUM t_lambda_156[] = {
  0, // locals
  0, // parameters
  // range &self 3 -1
  var_range, 3, var_1622_5_self, num_3, minus_num_1, 1, var_1622_5_self,
  // for_each self
  var_for_each, 3, var_1622_5_self, lambda_157, func_exhausted, TAIL_CALL,
  POS(1652, 7),
  POS(1653, 7)
};

static TAB_NUM t_lambda_157[] = {
  0, // locals
  2, // parameters
  var_1654_12_idx,
  var_1654_16_chr,
  // case
  var_case, 4, var_1654_16_chr, value_range_1657_14, lambda_158, lambda_159, TAIL_CALL,
  POS(1655, 11)
};

static TAB_NUM t_lambda_158[] = {
  2, // locals
  0, // parameters
  // value << 1)+(chr-'0')
  var_std__shift_left, 2, var_1649_4_value, num_1, 1, LOCAL(1),
  // chr-'0')
  var_std__minus, 2, var_1654_16_chr, chr_48, 1, LOCAL(2),
  // !value (value << 1)+(chr-'0')
  var_std__plus, 2, LOCAL(1), LOCAL(2), 1, var_1649_4_value,
  // next
  var_next, 0, TAIL_CALL,
  POS(1658, 23),
  POS(1658, 36),
  POS(1658, 15),
  POS(1659, 15)
};

static TAB_NUM t_lambda_159[] = {
  0, // locals
  0, // parameters
  // partial_match idx
  func_partial_match, 1, var_1654_12_idx, TAIL_CALL,
  POS(1661, 15)
};

static TAB_NUM t_lambda_160[] = {
  1, // locals
  0, // parameters
  // self .has_prefix. "0o":
  var_has_prefix, 2, var_1622_5_self, str_0o, 1, LOCAL(1),
  //  self .has_prefix. "0o":
  LET, 2, LOCAL(1), lambda_161, TAIL_CALL,
  POS(1663, 8),
  POS(1663, 7)
};

static TAB_NUM t_lambda_161[] = {
  0, // locals
  0, // parameters
  // range &self 3 -1
  var_range, 3, var_1622_5_self, num_3, minus_num_1, 1, var_1622_5_self,
  // for_each self
  var_for_each, 3, var_1622_5_self, lambda_162, func_exhausted, TAIL_CALL,
  POS(1664, 7),
  POS(1665, 7)
};

static TAB_NUM t_lambda_162[] = {
  0, // locals
  2, // parameters
  var_1666_12_idx,
  var_1666_16_chr,
  // case chr
  var_case, 4, var_1666_16_chr, value_range_1668_14, lambda_163, lambda_164, TAIL_CALL,
  POS(1667, 11)
};

static TAB_NUM t_lambda_163[] = {
  2, // locals
  0, // parameters
  // value << 3)+(chr-'0')
  var_std__shift_left, 2, var_1649_4_value, num_3, 1, LOCAL(1),
  // chr-'0')
  var_std__minus, 2, var_1666_16_chr, chr_48, 1, LOCAL(2),
  // !value (value << 3)+(chr-'0')
  var_std__plus, 2, LOCAL(1), LOCAL(2), 1, var_1649_4_value,
  // next
  var_next, 0, TAIL_CALL,
  POS(1669, 23),
  POS(1669, 36),
  POS(1669, 15),
  POS(1670, 15)
};

static TAB_NUM t_lambda_164[] = {
  0, // locals
  0, // parameters
  // partial_match idx
  func_partial_match, 1, var_1666_12_idx, TAIL_CALL,
  POS(1672, 15)
};

static TAB_NUM t_lambda_165[] = {
  1, // locals
  0, // parameters
  // self .has_prefix. "0x":
  var_has_prefix, 2, var_1622_5_self, str_0x, 1, LOCAL(1),
  //  self .has_prefix. "0x":
  LET, 2, LOCAL(1), lambda_166, TAIL_CALL,
  POS(1674, 8),
  POS(1674, 7)
};

static TAB_NUM t_lambda_166[] = {
  0, // locals
  0, // parameters
  // range &self 3 -1
  var_range, 3, var_1622_5_self, num_3, minus_num_1, 1, var_1622_5_self,
  // for_each self
  var_for_each, 3, var_1622_5_self, lambda_167, func_exhausted, TAIL_CALL,
  POS(1675, 7),
  POS(1676, 7)
};

static TAB_NUM t_lambda_167[] = {
  0, // locals
  2, // parameters
  var_1677_12_idx,
  var_1677_16_chr,
  // case chr
  var_case, 8, var_1677_16_chr, value_range_1457_8, lambda_168, value_range_1682_14, lambda_a__f, value_range_1685_14, lambda_A__F, lambda_169, TAIL_CALL,
  POS(1678, 11)
};

static TAB_NUM t_lambda_168[] = {
  2, // locals
  0, // parameters
  // value << 4)+(chr-'0')
  var_std__shift_left, 2, var_1649_4_value, num_4, 1, LOCAL(1),
  // chr-'0')
  var_std__minus, 2, var_1677_16_chr, chr_48, 1, LOCAL(2),
  // !value (value << 4)+(chr-'0')
  var_std__plus, 2, LOCAL(1), LOCAL(2), 1, var_1649_4_value,
  // next
  var_next, 0, TAIL_CALL,
  POS(1680, 23),
  POS(1680, 36),
  POS(1680, 15),
  POS(1681, 15)
};

static TAB_NUM t_lambda_a__f[] = {
  3, // locals
  0, // parameters
  // value << 4)+(chr-'a')+10
  var_std__shift_left, 2, var_1649_4_value, num_4, 1, LOCAL(1),
  // chr-'a')+10
  var_std__minus, 2, var_1677_16_chr, chr_97, 1, LOCAL(2),
  // value << 4)+(chr-'a')+10
  var_std__plus, 2, LOCAL(1), LOCAL(2), 1, LOCAL(3),
  // !value (value << 4)+(chr-'a')+10
  var_std__plus, 2, LOCAL(3), num_10, 1, var_1649_4_value,
  // next
  var_next, 0, TAIL_CALL,
  POS(1683, 23),
  POS(1683, 36),
  POS(1683, 23),
  POS(1683, 15),
  POS(1684, 15)
};

static TAB_NUM t_lambda_A__F[] = {
  3, // locals
  0, // parameters
  // value << 4)+(chr-'A')+10
  var_std__shift_left, 2, var_1649_4_value, num_4, 1, LOCAL(1),
  // chr-'A')+10
  var_std__minus, 2, var_1677_16_chr, chr_65, 1, LOCAL(2),
  // value << 4)+(chr-'A')+10
  var_std__plus, 2, LOCAL(1), LOCAL(2), 1, LOCAL(3),
  // !value (value << 4)+(chr-'A')+10
  var_std__plus, 2, LOCAL(3), num_10, 1, var_1649_4_value,
  // next
  var_next, 0, TAIL_CALL,
  POS(1686, 23),
  POS(1686, 36),
  POS(1686, 23),
  POS(1686, 15),
  POS(1687, 15)
};

static TAB_NUM t_lambda_169[] = {
  0, // locals
  0, // parameters
  // partial_match idx
  func_partial_match, 1, var_1677_12_idx, TAIL_CALL,
  POS(1689, 15)
};

static TAB_NUM t_lambda_170[] = {
  0, // locals
  0, // parameters
  //  true:
  LET, 2, var_true, lambda_171, TAIL_CALL,
  POS(1691, 7)
};

static TAB_NUM t_lambda_171[] = {
  0, // locals
  0, // parameters
  // for_each self
  var_for_each, 3, var_1622_5_self, lambda_172, func_exhausted, TAIL_CALL,
  POS(1692, 7)
};

static TAB_NUM t_lambda_172[] = {
  0, // locals
  2, // parameters
  var_1693_12_idx,
  var_1693_16_chr,
  // case chr
  var_case, 4, var_1693_16_chr, value_range_1457_8, lambda_173, lambda_174, TAIL_CALL,
  POS(1694, 11)
};

static TAB_NUM t_lambda_173[] = {
  2, // locals
  0, // parameters
  // 10*value+(chr-'0')
  var_std__times, 2, num_10, var_1649_4_value, 1, LOCAL(1),
  // chr-'0')
  var_std__minus, 2, var_1693_16_chr, chr_48, 1, LOCAL(2),
  // !value 10*value+(chr-'0')
  var_std__plus, 2, LOCAL(1), LOCAL(2), 1, var_1649_4_value,
  // next
  var_next, 0, TAIL_CALL,
  POS(1696, 22),
  POS(1696, 32),
  POS(1696, 15),
  POS(1697, 15)
};

static TAB_NUM t_lambda_174[] = {
  0, // locals
  0, // parameters
  // partial_match idx
  func_partial_match, 1, var_1693_12_idx, TAIL_CALL,
  POS(1699, 15)
};

static TAB_NUM t_func_std__parse_number[] = {
  1, // locals
  1, // parameters
  var_1729_5_self,
  // $i 1
  LET, 1, num_1, 1, var_1731_4_i,
  // $n length_of(self)
  var_length_of, 1, var_1729_5_self, 1, var_1732_4_n,
  // n
  var_std__less, 2, var_1732_4_n, var_1731_4_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_175, lambda_176, TAIL_CALL,
  POS(1731, 3),
  POS(1732, 3),
  POS(1734, 9),
  POS(1733, 3)
};

static TAB_NUM t_lambda_175[] = {
  0, // locals
  0, // parameters
  //  self undefined
  LET, 2, var_1729_5_self, var_undefined, TAIL_CALL,
  POS(1735, 7)
};

static TAB_NUM t_lambda_176[] = {
  3, // locals
  0, // parameters
  // $sign_chr self(1)
  var_1729_5_self, 1, num_1, 1, var_1737_8_sign_chr,
  // sign_chr == '-' || sign_chr == '+' &i -> i+1
  var_std__equal, 2, var_1737_8_sign_chr, chr_45, 1, LOCAL(1),
  // sign_chr == '-' || sign_chr == '+' &i -> i+1
  var_std__or, 2, LOCAL(1), lambda_177, 1, LOCAL(2),
  // update_if sign_chr == '-' || sign_chr == '+' &i -> i+1
  var_update_if, 3, LOCAL(2), var_1731_4_i, lambda_178, 1, var_1731_4_i,
  // sign_chr == '-'
  var_std__equal, 2, var_1737_8_sign_chr, chr_45, 1, LOCAL(1),
  // $sign
  var_if, 3, LOCAL(1), lambda_179, lambda_180, 1, var_1739_8_sign,
  // self(i) == '0' && i+1 < n:
  var_1729_5_self, 1, var_1731_4_i, 1, LOCAL(1),
  // self(i) == '0' && i+1 < n:
  var_std__equal, 2, LOCAL(1), chr_48, 1, LOCAL(2),
  // self(i) == '0' && i+1 < n:
  var_std__and, 2, LOCAL(2), lambda_181, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_182, func_parse, TAIL_CALL,
  POS(1737, 7),
  POS(1738, 17),
  POS(1738, 17),
  POS(1738, 7),
  POS(1741, 11),
  POS(1739, 7),
  POS(1745, 9),
  POS(1745, 9),
  POS(1745, 9),
  POS(1744, 7)
};

static TAB_NUM t_lambda_177[] = {
  1, // locals
  0, // parameters
  // sign_chr == '+' &i -> i+1
  var_std__equal, 2, var_1737_8_sign_chr, chr_43, 1, LOCAL(1),
  // sign_chr == '+' &i -> i+1
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1738, 36),
  POS(1738, 36)
};

static TAB_NUM t_lambda_178[] = {
  1, // locals
  0, // parameters
  // i+1
  var_std__plus, 2, var_1731_4_i, num_1, 1, LOCAL(1),
  //  i+1
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1738, 58),
  POS(1738, 57)
};

static TAB_NUM t_lambda_179[] = {
  0, // locals
  0, // parameters
  //  -1
  LET, 1, minus_num_1, TAIL_CALL,
  POS(1742, 13)
};

static TAB_NUM t_lambda_180[] = {
  0, // locals
  0, // parameters
  //  1
  LET, 1, num_1, TAIL_CALL,
  POS(1743, 13)
};

static TAB_NUM t_lambda_181[] = {
  2, // locals
  0, // parameters
  // i+1 < n:
  var_std__plus, 2, var_1731_4_i, num_1, 1, LOCAL(1),
  // i+1 < n:
  var_std__less, 2, LOCAL(1), var_1732_4_n, 1, LOCAL(2),
  // i+1 < n:
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1745, 27),
  POS(1745, 27),
  POS(1745, 27)
};

static TAB_NUM t_lambda_182[] = {
  2, // locals
  0, // parameters
  // i+1)
  var_std__plus, 2, var_1731_4_i, num_1, 1, LOCAL(1),
  // self(i+1)
  var_1729_5_self, 1, LOCAL(1), 1, LOCAL(2),
  // case self(i+1)
  var_case, 8, LOCAL(2), chr_98, lambda_b, chr_111, lambda_o, chr_120, lambda_x, func_parse, TAIL_CALL,
  POS(1746, 21),
  POS(1746, 16),
  POS(1746, 11)
};

static TAB_NUM t_lambda_b[] = {
  1, // locals
  0, // parameters
  // i+2 sign
  var_std__plus, 2, var_1731_4_i, num_2, 1, LOCAL(1),
  // parse_binary self i+2 sign
  func_parse_binary, 3, var_1729_5_self, LOCAL(1), var_1739_8_sign, TAIL_CALL,
  POS(1747, 36),
  POS(1747, 18)
};

static TAB_NUM t_lambda_o[] = {
  1, // locals
  0, // parameters
  // i+2 sign
  var_std__plus, 2, var_1731_4_i, num_2, 1, LOCAL(1),
  // parse_octal self i+2 sign
  func_parse_octal, 3, var_1729_5_self, LOCAL(1), var_1739_8_sign, TAIL_CALL,
  POS(1748, 35),
  POS(1748, 18)
};

static TAB_NUM t_lambda_x[] = {
  1, // locals
  0, // parameters
  // i+2 sign
  var_std__plus, 2, var_1731_4_i, num_2, 1, LOCAL(1),
  // parse_hex self i+2 sign
  var_parse_hex, 3, var_1729_5_self, LOCAL(1), var_1739_8_sign, TAIL_CALL,
  POS(1749, 33),
  POS(1749, 18)
};

static TAB_NUM t_func_parse[] = {
  0, // locals
  0, // parameters
  // skip_one_ore_more_digits:
  func_skip_one_ore_more_digits, 1, lambda_skip_one_ore_more_digits, TAIL_CALL,
  POS(1754, 5)
};

static TAB_NUM t_lambda_skip_one_ore_more_digits[] = {
  1, // locals
  0, // parameters
  // n return_integer
  var_std__less, 2, var_1732_4_n, var_1731_4_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), func_return_integer, lambda_183, TAIL_CALL,
  POS(1756, 13),
  POS(1755, 7)
};

static TAB_NUM t_lambda_183[] = {
  1, // locals
  0, // parameters
  // self(i)
  var_1729_5_self, 1, var_1731_4_i, 1, LOCAL(1),
  // case self(i)
  var_case, 6, LOCAL(1), chr_46, lambda_184, sequence_1769_14, func_handle_exponent, func_return_integer, TAIL_CALL,
  POS(1758, 16),
  POS(1758, 11)
};

static TAB_NUM t_lambda_184[] = {
  0, // locals
  0, // parameters
  // !i i+1
  var_std__plus, 2, var_1731_4_i, num_1, 1, var_1731_4_i,
  // skip_one_ore_more_digits:
  func_skip_one_ore_more_digits, 1, lambda_2_skip_one_ore_more_digits, TAIL_CALL,
  POS(1760, 15),
  POS(1761, 15)
};

static TAB_NUM t_lambda_2_skip_one_ore_more_digits[] = {
  1, // locals
  0, // parameters
  // n
  var_std__less, 2, var_1732_4_n, var_1731_4_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), func_return_real, lambda_185, TAIL_CALL,
  POS(1763, 23),
  POS(1762, 17)
};

static TAB_NUM t_lambda_185[] = {
  1, // locals
  0, // parameters
  // self(i)
  var_1729_5_self, 1, var_1731_4_i, 1, LOCAL(1),
  // case self(i)
  var_case, 4, LOCAL(1), sequence_1769_14, func_handle_exponent, func_return_real, TAIL_CALL,
  POS(1766, 26),
  POS(1766, 21)
};

static TAB_NUM t_func_skip_one_ore_more_digits[] = {
  1, // locals
  1, // parameters
  var_1772_33_cont,
  // n
  var_std__less, 2, var_1732_4_n, var_1731_4_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_186, lambda_187, TAIL_CALL,
  POS(1774, 13),
  POS(1773, 7)
};

static TAB_NUM t_lambda_186[] = {
  0, // locals
  0, // parameters
  //  self undefined
  LET, 2, var_1729_5_self, var_undefined, TAIL_CALL,
  POS(1775, 11)
};

static TAB_NUM t_lambda_187[] = {
  2, // locals
  0, // parameters
  // $digit self(i)
  var_1729_5_self, 1, var_1731_4_i, 1, var_1777_12_digit,
  // digit < '0' || digit > '9'
  var_std__less, 2, var_1777_12_digit, chr_48, 1, LOCAL(1),
  // digit < '0' || digit > '9'
  var_std__or, 2, LOCAL(1), lambda_188, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_189, lambda_190, TAIL_CALL,
  POS(1777, 11),
  POS(1779, 13),
  POS(1779, 13),
  POS(1778, 11)
};

static TAB_NUM t_lambda_188[] = {
  1, // locals
  0, // parameters
  // 9'
  var_std__less, 2, chr_57, var_1777_12_digit, 1, LOCAL(1),
  // digit > '9'
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1779, 37),
  POS(1779, 28)
};

static TAB_NUM t_lambda_189[] = {
  0, // locals
  0, // parameters
  //  self undefined
  LET, 2, var_1729_5_self, var_undefined, TAIL_CALL,
  POS(1780, 15)
};

static TAB_NUM t_lambda_190[] = {
  0, // locals
  0, // parameters
  // loop:
  var_loop, 1, lambda_11_loop, TAIL_CALL,
  POS(1782, 15)
};

static TAB_NUM t_lambda_11_loop[] = {
  1, // locals
  0, // parameters
  // !i i+1
  var_std__plus, 2, var_1731_4_i, num_1, 1, var_1731_4_i,
  // n
  var_std__less, 2, var_1732_4_n, var_1731_4_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), var_1772_33_cont, lambda_191, TAIL_CALL,
  POS(1783, 17),
  POS(1785, 23),
  POS(1784, 17)
};

static TAB_NUM t_lambda_191[] = {
  3, // locals
  0, // parameters
  // $next_digit self(i)
  var_1729_5_self, 1, var_1731_4_i, 1, var_1788_22_next_digit,
  // next_digit >= '0' && next_digit <= '9'
  var_std__less, 2, var_1788_22_next_digit, chr_48, 1, LOCAL(1),
  // next_digit >= '0' && next_digit <= '9'
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // next_digit >= '0' && next_digit <= '9'
  var_std__and, 2, LOCAL(2), lambda_192, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), var_next, var_1772_33_cont, TAIL_CALL,
  POS(1788, 21),
  POS(1790, 23),
  POS(1790, 23),
  POS(1790, 23),
  POS(1789, 21)
};

static TAB_NUM t_lambda_192[] = {
  2, // locals
  0, // parameters
  // 9'
  var_std__less, 2, chr_57, var_1788_22_next_digit, 1, LOCAL(1),
  // 9'
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // next_digit <= '9'
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1790, 59),
  POS(1790, 59),
  POS(1790, 44)
};

static TAB_NUM t_func_handle_exponent[] = {
  1, // locals
  0, // parameters
  // !i i+1
  var_std__plus, 2, var_1731_4_i, num_1, 1, var_1731_4_i,
  // n
  var_std__less, 2, var_1732_4_n, var_1731_4_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_193, lambda_194, TAIL_CALL,
  POS(1795, 7),
  POS(1797, 13),
  POS(1796, 7)
};

static TAB_NUM t_lambda_193[] = {
  0, // locals
  0, // parameters
  //  self undefined
  LET, 2, var_1729_5_self, var_undefined, TAIL_CALL,
  POS(1798, 11)
};

static TAB_NUM t_lambda_194[] = {
  2, // locals
  0, // parameters
  // $exp_sign_chr self(i)
  var_1729_5_self, 1, var_1731_4_i, 1, var_1800_12_exp_sign_chr,
  // exp_sign_chr == '-' || exp_sign_chr == '+' &i -> i+1
  var_std__equal, 2, var_1800_12_exp_sign_chr, chr_45, 1, LOCAL(1),
  // exp_sign_chr == '-' || exp_sign_chr == '+' &i -> i+1
  var_std__or, 2, LOCAL(1), lambda_195, 1, LOCAL(2),
  // update_if exp_sign_chr == '-' || exp_sign_chr == '+' &i -> i+1
  var_update_if, 3, LOCAL(2), var_1731_4_i, lambda_196, 1, var_1731_4_i,
  // skip_one_ore_more_digits return_real
  func_skip_one_ore_more_digits, 1, func_return_real, TAIL_CALL,
  POS(1800, 11),
  POS(1801, 21),
  POS(1801, 21),
  POS(1801, 11),
  POS(1802, 11)
};

static TAB_NUM t_lambda_195[] = {
  1, // locals
  0, // parameters
  // exp_sign_chr == '+' &i -> i+1
  var_std__equal, 2, var_1800_12_exp_sign_chr, chr_43, 1, LOCAL(1),
  // exp_sign_chr == '+' &i -> i+1
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1801, 44),
  POS(1801, 44)
};

static TAB_NUM t_lambda_196[] = {
  1, // locals
  0, // parameters
  // i+1
  var_std__plus, 2, var_1731_4_i, num_1, 1, LOCAL(1),
  //  i+1
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1801, 70),
  POS(1801, 69)
};

static TAB_NUM t_func_return_integer[] = {
  4, // locals
  0, // parameters
  // range(self i -1) integer(range(self 1 i-1))
  var_range, 3, var_1729_5_self, var_1731_4_i, minus_num_1, 1, LOCAL(1),
  // i-1))
  var_std__minus, 2, var_1731_4_i, num_1, 1, LOCAL(2),
  // range(self 1 i-1))
  var_range, 3, var_1729_5_self, num_1, LOCAL(2), 1, LOCAL(3),
  // integer(range(self 1 i-1))
  var_integer, 1, LOCAL(3), 1, LOCAL(4),
  //  range(self i -1) integer(range(self 1 i-1))
  LET, 2, LOCAL(1), LOCAL(4), TAIL_CALL,
  POS(1804, 24),
  POS(1804, 62),
  POS(1804, 49),
  POS(1804, 41),
  POS(1804, 23)
};

static TAB_NUM t_func_return_real[] = {
  4, // locals
  0, // parameters
  // range(self i -1) real(range(self 1 i-1))
  var_range, 3, var_1729_5_self, var_1731_4_i, minus_num_1, 1, LOCAL(1),
  // i-1))
  var_std__minus, 2, var_1731_4_i, num_1, 1, LOCAL(2),
  // range(self 1 i-1))
  var_range, 3, var_1729_5_self, num_1, LOCAL(2), 1, LOCAL(3),
  // real(range(self 1 i-1))
  var_real, 1, LOCAL(3), 1, LOCAL(4),
  //  range(self i -1) real(range(self 1 i-1))
  LET, 2, LOCAL(1), LOCAL(4), TAIL_CALL,
  POS(1806, 21),
  POS(1806, 56),
  POS(1806, 43),
  POS(1806, 38),
  POS(1806, 20)
};

static TAB_NUM t_func_parse_binary[] = {
  1, // locals
  3, // parameters
  var_1808_17_str,
  var_1808_21_i,
  var_1808_23_sign,
  // $n length_of(str)
  var_length_of, 1, var_1808_17_str, 1, var_1809_4_n,
  // n -> str undefined
  var_std__less, 2, var_1809_4_n, var_1808_21_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_197, lambda_198, TAIL_CALL,
  POS(1809, 3),
  POS(1811, 9),
  POS(1810, 3)
};

static TAB_NUM t_lambda_197[] = {
  0, // locals
  0, // parameters
  //  str undefined
  LET, 2, var_1808_17_str, var_undefined, TAIL_CALL,
  POS(1811, 13)
};

static TAB_NUM t_lambda_198[] = {
  2, // locals
  0, // parameters
  // $digit str(i)
  var_1808_17_str, 1, var_1808_21_i, 1, var_1813_8_digit,
  // digit < '0' || digit > '1'
  var_std__less, 2, var_1813_8_digit, chr_48, 1, LOCAL(1),
  // digit < '0' || digit > '1'
  var_std__or, 2, LOCAL(1), lambda_199, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_200, lambda_201, TAIL_CALL,
  POS(1813, 7),
  POS(1815, 9),
  POS(1815, 9),
  POS(1814, 7)
};

static TAB_NUM t_lambda_199[] = {
  1, // locals
  0, // parameters
  // 1'
  var_std__less, 2, chr_49, var_1813_8_digit, 1, LOCAL(1),
  // digit > '1'
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1815, 33),
  POS(1815, 24)
};

static TAB_NUM t_lambda_200[] = {
  0, // locals
  0, // parameters
  //  str undefined
  LET, 2, var_1808_17_str, var_undefined, TAIL_CALL,
  POS(1816, 11)
};

static TAB_NUM t_lambda_201[] = {
  0, // locals
  0, // parameters
  // $value digit-'0'
  var_std__minus, 2, var_1813_8_digit, chr_48, 1, var_1818_12_value,
  // loop:
  var_loop, 1, lambda_12_loop, TAIL_CALL,
  POS(1818, 11),
  POS(1819, 11)
};

static TAB_NUM t_lambda_12_loop[] = {
  1, // locals
  0, // parameters
  // !i i+1
  var_std__plus, 2, var_1808_21_i, num_1, 1, var_1808_21_i,
  // n
  var_std__less, 2, var_1809_4_n, var_1808_21_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_202, lambda_203, TAIL_CALL,
  POS(1820, 13),
  POS(1822, 19),
  POS(1821, 13)
};

static TAB_NUM t_lambda_202[] = {
  1, // locals
  0, // parameters
  // value*sign
  var_std__times, 2, var_1818_12_value, var_1808_23_sign, 1, LOCAL(1),
  //  "" value*sign
  LET, 2, string_1, LOCAL(1), TAIL_CALL,
  POS(1823, 21),
  POS(1823, 17)
};

static TAB_NUM t_lambda_203[] = {
  3, // locals
  0, // parameters
  // $next_digit str(i)
  var_1808_17_str, 1, var_1808_21_i, 1, var_1825_18_next_digit,
  // next_digit >= '0' && next_digit <= '1':
  var_std__less, 2, var_1825_18_next_digit, chr_48, 1, LOCAL(1),
  // next_digit >= '0' && next_digit <= '1':
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // next_digit >= '0' && next_digit <= '1':
  var_std__and, 2, LOCAL(2), lambda_204, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_205, lambda_206, TAIL_CALL,
  POS(1825, 17),
  POS(1827, 19),
  POS(1827, 19),
  POS(1827, 19),
  POS(1826, 17)
};

static TAB_NUM t_lambda_204[] = {
  2, // locals
  0, // parameters
  // 1':
  var_std__less, 2, chr_49, var_1825_18_next_digit, 1, LOCAL(1),
  // 1':
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // next_digit <= '1':
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1827, 55),
  POS(1827, 55),
  POS(1827, 40)
};

static TAB_NUM t_lambda_205[] = {
  2, // locals
  0, // parameters
  // value << 1)+(next_digit-'0')
  var_std__shift_left, 2, var_1818_12_value, num_1, 1, LOCAL(1),
  // next_digit-'0')
  var_std__minus, 2, var_1825_18_next_digit, chr_48, 1, LOCAL(2),
  // !value (value << 1)+(next_digit-'0')
  var_std__plus, 2, LOCAL(1), LOCAL(2), 1, var_1818_12_value,
  // next
  var_next, 0, TAIL_CALL,
  POS(1828, 29),
  POS(1828, 42),
  POS(1828, 21),
  POS(1829, 21)
};

static TAB_NUM t_lambda_206[] = {
  2, // locals
  0, // parameters
  // range(str i -1) value*sign
  var_range, 3, var_1808_17_str, var_1808_21_i, minus_num_1, 1, LOCAL(1),
  // value*sign
  var_std__times, 2, var_1818_12_value, var_1808_23_sign, 1, LOCAL(2),
  //  range(str i -1) value*sign
  LET, 2, LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(1830, 22),
  POS(1830, 38),
  POS(1830, 21)
};

static TAB_NUM t_func_parse_octal[] = {
  1, // locals
  3, // parameters
  var_1832_16_str,
  var_1832_20_i,
  var_1832_22_sign,
  // $n length_of(str)
  var_length_of, 1, var_1832_16_str, 1, var_1833_4_n,
  // n -> str undefined
  var_std__less, 2, var_1833_4_n, var_1832_20_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_207, lambda_208, TAIL_CALL,
  POS(1833, 3),
  POS(1835, 9),
  POS(1834, 3)
};

static TAB_NUM t_lambda_207[] = {
  0, // locals
  0, // parameters
  //  str undefined
  LET, 2, var_1832_16_str, var_undefined, TAIL_CALL,
  POS(1835, 13)
};

static TAB_NUM t_lambda_208[] = {
  2, // locals
  0, // parameters
  // $digit str(i)
  var_1832_16_str, 1, var_1832_20_i, 1, var_1837_8_digit,
  // digit < '0' || digit > '7'
  var_std__less, 2, var_1837_8_digit, chr_48, 1, LOCAL(1),
  // digit < '0' || digit > '7'
  var_std__or, 2, LOCAL(1), lambda_209, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_210, lambda_211, TAIL_CALL,
  POS(1837, 7),
  POS(1839, 9),
  POS(1839, 9),
  POS(1838, 7)
};

static TAB_NUM t_lambda_209[] = {
  1, // locals
  0, // parameters
  // 7'
  var_std__less, 2, chr_55, var_1837_8_digit, 1, LOCAL(1),
  // digit > '7'
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1839, 33),
  POS(1839, 24)
};

static TAB_NUM t_lambda_210[] = {
  0, // locals
  0, // parameters
  //  str undefined
  LET, 2, var_1832_16_str, var_undefined, TAIL_CALL,
  POS(1840, 11)
};

static TAB_NUM t_lambda_211[] = {
  0, // locals
  0, // parameters
  // $value digit-'0'
  var_std__minus, 2, var_1837_8_digit, chr_48, 1, var_1842_12_value,
  // loop:
  var_loop, 1, lambda_13_loop, TAIL_CALL,
  POS(1842, 11),
  POS(1843, 11)
};

static TAB_NUM t_lambda_13_loop[] = {
  1, // locals
  0, // parameters
  // !i i+1
  var_std__plus, 2, var_1832_20_i, num_1, 1, var_1832_20_i,
  // n
  var_std__less, 2, var_1833_4_n, var_1832_20_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_212, lambda_213, TAIL_CALL,
  POS(1844, 13),
  POS(1846, 19),
  POS(1845, 13)
};

static TAB_NUM t_lambda_212[] = {
  1, // locals
  0, // parameters
  // value*sign
  var_std__times, 2, var_1842_12_value, var_1832_22_sign, 1, LOCAL(1),
  //  "" value*sign
  LET, 2, string_1, LOCAL(1), TAIL_CALL,
  POS(1847, 21),
  POS(1847, 17)
};

static TAB_NUM t_lambda_213[] = {
  3, // locals
  0, // parameters
  // $next_digit str(i)
  var_1832_16_str, 1, var_1832_20_i, 1, var_1849_18_next_digit,
  // next_digit >= '0' && next_digit <= '7':
  var_std__less, 2, var_1849_18_next_digit, chr_48, 1, LOCAL(1),
  // next_digit >= '0' && next_digit <= '7':
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // next_digit >= '0' && next_digit <= '7':
  var_std__and, 2, LOCAL(2), lambda_214, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_215, lambda_216, TAIL_CALL,
  POS(1849, 17),
  POS(1851, 19),
  POS(1851, 19),
  POS(1851, 19),
  POS(1850, 17)
};

static TAB_NUM t_lambda_214[] = {
  2, // locals
  0, // parameters
  // 7':
  var_std__less, 2, chr_55, var_1849_18_next_digit, 1, LOCAL(1),
  // 7':
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // next_digit <= '7':
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1851, 55),
  POS(1851, 55),
  POS(1851, 40)
};

static TAB_NUM t_lambda_215[] = {
  2, // locals
  0, // parameters
  // value << 3)+(next_digit-'0')
  var_std__shift_left, 2, var_1842_12_value, num_3, 1, LOCAL(1),
  // next_digit-'0')
  var_std__minus, 2, var_1849_18_next_digit, chr_48, 1, LOCAL(2),
  // !value (value << 3)+(next_digit-'0')
  var_std__plus, 2, LOCAL(1), LOCAL(2), 1, var_1842_12_value,
  // next
  var_next, 0, TAIL_CALL,
  POS(1852, 29),
  POS(1852, 42),
  POS(1852, 21),
  POS(1853, 21)
};

static TAB_NUM t_lambda_216[] = {
  2, // locals
  0, // parameters
  // range(str i -1) value*sign
  var_range, 3, var_1832_16_str, var_1832_20_i, minus_num_1, 1, LOCAL(1),
  // value*sign
  var_std__times, 2, var_1842_12_value, var_1832_22_sign, 1, LOCAL(2),
  //  range(str i -1) value*sign
  LET, 2, LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(1854, 22),
  POS(1854, 38),
  POS(1854, 21)
};

static TAB_NUM t_func_std__parse_hex[] = {
  1, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_1884_5_str,
  num_1, var_1885_5_i,
  num_1, var_1886_5_sign,
  // $n length_of(str)
  var_length_of, 1, var_1884_5_str, 1, var_1888_4_n,
  // n -> str undefined
  var_std__less, 2, var_1888_4_n, var_1885_5_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_217, lambda_218, TAIL_CALL,
  POS(1888, 3),
  POS(1890, 9),
  POS(1889, 3)
};

static TAB_NUM t_lambda_217[] = {
  0, // locals
  0, // parameters
  //  str undefined
  LET, 2, var_1884_5_str, var_undefined, TAIL_CALL,
  POS(1890, 13)
};

static TAB_NUM t_lambda_218[] = {
  0, // locals
  0, // parameters
  // $digit str(i)
  var_1884_5_str, 1, var_1885_5_i, 1, var_1892_8_digit,
  // cond
  var_cond, 4, lambda_219, lambda_222, lambda_225, lambda_228, TAIL_CALL,
  POS(1892, 7),
  POS(1893, 7)
};

static TAB_NUM t_lambda_219[] = {
  3, // locals
  0, // parameters
  // digit >= '0' && digit <= '9':
  var_std__less, 2, var_1892_8_digit, chr_48, 1, LOCAL(1),
  // digit >= '0' && digit <= '9':
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // digit >= '0' && digit <= '9':
  var_std__and, 2, LOCAL(2), lambda_220, 1, LOCAL(3),
  //  digit >= '0' && digit <= '9':
  LET, 2, LOCAL(3), lambda_221, TAIL_CALL,
  POS(1894, 12),
  POS(1894, 12),
  POS(1894, 12),
  POS(1894, 11)
};

static TAB_NUM t_lambda_220[] = {
  2, // locals
  0, // parameters
  // 9':
  var_std__less, 2, chr_57, var_1892_8_digit, 1, LOCAL(1),
  // 9':
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // digit <= '9':
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1894, 38),
  POS(1894, 38),
  POS(1894, 28)
};

static TAB_NUM t_lambda_221[] = {
  1, // locals
  0, // parameters
  // digit-'0'
  var_std__minus, 2, var_1892_8_digit, chr_48, 1, LOCAL(1),
  // handle_more_digits digit-'0'
  func_handle_more_digits, 1, LOCAL(1), TAIL_CALL,
  POS(1895, 30),
  POS(1895, 11)
};

static TAB_NUM t_lambda_222[] = {
  3, // locals
  0, // parameters
  // digit >= 'a' && digit <= 'f':
  var_std__less, 2, var_1892_8_digit, chr_97, 1, LOCAL(1),
  // digit >= 'a' && digit <= 'f':
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // digit >= 'a' && digit <= 'f':
  var_std__and, 2, LOCAL(2), lambda_223, 1, LOCAL(3),
  //  digit >= 'a' && digit <= 'f':
  LET, 2, LOCAL(3), lambda_224, TAIL_CALL,
  POS(1896, 12),
  POS(1896, 12),
  POS(1896, 12),
  POS(1896, 11)
};

static TAB_NUM t_lambda_223[] = {
  2, // locals
  0, // parameters
  // f':
  var_std__less, 2, chr_102, var_1892_8_digit, 1, LOCAL(1),
  // f':
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // digit <= 'f':
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1896, 38),
  POS(1896, 38),
  POS(1896, 28)
};

static TAB_NUM t_lambda_224[] = {
  2, // locals
  0, // parameters
  // digit-'a')+10
  var_std__minus, 2, var_1892_8_digit, chr_97, 1, LOCAL(1),
  // digit-'a')+10
  var_std__plus, 2, LOCAL(1), num_10, 1, LOCAL(2),
  // handle_more_digits (digit-'a')+10
  func_handle_more_digits, 1, LOCAL(2), TAIL_CALL,
  POS(1897, 31),
  POS(1897, 31),
  POS(1897, 11)
};

static TAB_NUM t_lambda_225[] = {
  3, // locals
  0, // parameters
  // digit >= 'A' && digit <= 'F':
  var_std__less, 2, var_1892_8_digit, chr_65, 1, LOCAL(1),
  // digit >= 'A' && digit <= 'F':
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // digit >= 'A' && digit <= 'F':
  var_std__and, 2, LOCAL(2), lambda_226, 1, LOCAL(3),
  //  digit >= 'A' && digit <= 'F':
  LET, 2, LOCAL(3), lambda_227, TAIL_CALL,
  POS(1898, 12),
  POS(1898, 12),
  POS(1898, 12),
  POS(1898, 11)
};

static TAB_NUM t_lambda_226[] = {
  2, // locals
  0, // parameters
  // F':
  var_std__less, 2, chr_70, var_1892_8_digit, 1, LOCAL(1),
  // F':
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // digit <= 'F':
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1898, 38),
  POS(1898, 38),
  POS(1898, 28)
};

static TAB_NUM t_lambda_227[] = {
  2, // locals
  0, // parameters
  // digit-'A')+10
  var_std__minus, 2, var_1892_8_digit, chr_65, 1, LOCAL(1),
  // digit-'A')+10
  var_std__plus, 2, LOCAL(1), num_10, 1, LOCAL(2),
  // handle_more_digits (digit-'A')+10
  func_handle_more_digits, 1, LOCAL(2), TAIL_CALL,
  POS(1899, 31),
  POS(1899, 31),
  POS(1899, 11)
};

static TAB_NUM t_lambda_228[] = {
  0, // locals
  0, // parameters
  //  true -> str undefined
  LET, 2, var_true, lambda_229, TAIL_CALL,
  POS(1900, 11)
};

static TAB_NUM t_lambda_229[] = {
  0, // locals
  0, // parameters
  //  str undefined
  LET, 2, var_1884_5_str, var_undefined, TAIL_CALL,
  POS(1900, 19)
};

static TAB_NUM t_func_handle_more_digits[] = {
  0, // locals
  1, // parameters
  var_1902_29_value,
  // loop:
  var_loop, 1, lambda_14_loop, TAIL_CALL,
  POS(1903, 9)
};

static TAB_NUM t_lambda_14_loop[] = {
  1, // locals
  0, // parameters
  // !i i+1
  var_std__plus, 2, var_1885_5_i, num_1, 1, var_1885_5_i,
  // n
  var_std__less, 2, var_1888_4_n, var_1885_5_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_230, lambda_231, TAIL_CALL,
  POS(1904, 11),
  POS(1906, 17),
  POS(1905, 11)
};

static TAB_NUM t_lambda_230[] = {
  1, // locals
  0, // parameters
  // value*sign
  var_std__times, 2, var_1902_29_value, var_1886_5_sign, 1, LOCAL(1),
  //  "" value*sign
  LET, 2, string_1, LOCAL(1), TAIL_CALL,
  POS(1907, 19),
  POS(1907, 15)
};

static TAB_NUM t_lambda_231[] = {
  0, // locals
  0, // parameters
  // $next_digit str(i)
  var_1884_5_str, 1, var_1885_5_i, 1, var_1909_16_next_digit,
  // cond
  var_cond, 4, lambda_232, lambda_235, lambda_238, lambda_241, TAIL_CALL,
  POS(1909, 15),
  POS(1910, 15)
};

static TAB_NUM t_lambda_232[] = {
  3, // locals
  0, // parameters
  // next_digit >= '0' && next_digit <= '9':
  var_std__less, 2, var_1909_16_next_digit, chr_48, 1, LOCAL(1),
  // next_digit >= '0' && next_digit <= '9':
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // next_digit >= '0' && next_digit <= '9':
  var_std__and, 2, LOCAL(2), lambda_233, 1, LOCAL(3),
  //  next_digit >= '0' && next_digit <= '9':
  LET, 2, LOCAL(3), lambda_234, TAIL_CALL,
  POS(1911, 20),
  POS(1911, 20),
  POS(1911, 20),
  POS(1911, 19)
};

static TAB_NUM t_lambda_233[] = {
  2, // locals
  0, // parameters
  // 9':
  var_std__less, 2, chr_57, var_1909_16_next_digit, 1, LOCAL(1),
  // 9':
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // next_digit <= '9':
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1911, 56),
  POS(1911, 56),
  POS(1911, 41)
};

static TAB_NUM t_lambda_234[] = {
  2, // locals
  0, // parameters
  // value << 4)+(next_digit-'0')
  var_std__shift_left, 2, var_1902_29_value, num_4, 1, LOCAL(1),
  // next_digit-'0')
  var_std__minus, 2, var_1909_16_next_digit, chr_48, 1, LOCAL(2),
  // !value (value << 4)+(next_digit-'0')
  var_std__plus, 2, LOCAL(1), LOCAL(2), 1, var_1902_29_value,
  // next
  var_next, 0, TAIL_CALL,
  POS(1912, 27),
  POS(1912, 40),
  POS(1912, 19),
  POS(1913, 19)
};

static TAB_NUM t_lambda_235[] = {
  3, // locals
  0, // parameters
  // next_digit >= 'a' && next_digit <= 'f':
  var_std__less, 2, var_1909_16_next_digit, chr_97, 1, LOCAL(1),
  // next_digit >= 'a' && next_digit <= 'f':
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // next_digit >= 'a' && next_digit <= 'f':
  var_std__and, 2, LOCAL(2), lambda_236, 1, LOCAL(3),
  //  next_digit >= 'a' && next_digit <= 'f':
  LET, 2, LOCAL(3), lambda_237, TAIL_CALL,
  POS(1914, 20),
  POS(1914, 20),
  POS(1914, 20),
  POS(1914, 19)
};

static TAB_NUM t_lambda_236[] = {
  2, // locals
  0, // parameters
  // f':
  var_std__less, 2, chr_102, var_1909_16_next_digit, 1, LOCAL(1),
  // f':
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // next_digit <= 'f':
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1914, 56),
  POS(1914, 56),
  POS(1914, 41)
};

static TAB_NUM t_lambda_237[] = {
  3, // locals
  0, // parameters
  // value << 4)+(next_digit-'a')+10
  var_std__shift_left, 2, var_1902_29_value, num_4, 1, LOCAL(1),
  // next_digit-'a')+10
  var_std__minus, 2, var_1909_16_next_digit, chr_97, 1, LOCAL(2),
  // value << 4)+(next_digit-'a')+10
  var_std__plus, 2, LOCAL(1), LOCAL(2), 1, LOCAL(3),
  // !value (value << 4)+(next_digit-'a')+10
  var_std__plus, 2, LOCAL(3), num_10, 1, var_1902_29_value,
  // next
  var_next, 0, TAIL_CALL,
  POS(1915, 27),
  POS(1915, 40),
  POS(1915, 27),
  POS(1915, 19),
  POS(1916, 19)
};

static TAB_NUM t_lambda_238[] = {
  3, // locals
  0, // parameters
  // next_digit >= 'A' && next_digit <= 'F':
  var_std__less, 2, var_1909_16_next_digit, chr_65, 1, LOCAL(1),
  // next_digit >= 'A' && next_digit <= 'F':
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // next_digit >= 'A' && next_digit <= 'F':
  var_std__and, 2, LOCAL(2), lambda_239, 1, LOCAL(3),
  //  next_digit >= 'A' && next_digit <= 'F':
  LET, 2, LOCAL(3), lambda_240, TAIL_CALL,
  POS(1917, 20),
  POS(1917, 20),
  POS(1917, 20),
  POS(1917, 19)
};

static TAB_NUM t_lambda_239[] = {
  2, // locals
  0, // parameters
  // F':
  var_std__less, 2, chr_70, var_1909_16_next_digit, 1, LOCAL(1),
  // F':
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // next_digit <= 'F':
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1917, 56),
  POS(1917, 56),
  POS(1917, 41)
};

static TAB_NUM t_lambda_240[] = {
  3, // locals
  0, // parameters
  // value << 4)+(next_digit-'A')+10
  var_std__shift_left, 2, var_1902_29_value, num_4, 1, LOCAL(1),
  // next_digit-'A')+10
  var_std__minus, 2, var_1909_16_next_digit, chr_65, 1, LOCAL(2),
  // value << 4)+(next_digit-'A')+10
  var_std__plus, 2, LOCAL(1), LOCAL(2), 1, LOCAL(3),
  // !value (value << 4)+(next_digit-'A')+10
  var_std__plus, 2, LOCAL(3), num_10, 1, var_1902_29_value,
  // next
  var_next, 0, TAIL_CALL,
  POS(1918, 27),
  POS(1918, 40),
  POS(1918, 27),
  POS(1918, 19),
  POS(1919, 19)
};

static TAB_NUM t_lambda_241[] = {
  0, // locals
  0, // parameters
  //  true -> range(str i -1) value*sign
  LET, 2, var_true, lambda_242, TAIL_CALL,
  POS(1920, 19)
};

static TAB_NUM t_lambda_242[] = {
  2, // locals
  0, // parameters
  // range(str i -1) value*sign
  var_range, 3, var_1884_5_str, var_1885_5_i, minus_num_1, 1, LOCAL(1),
  // value*sign
  var_std__times, 2, var_1902_29_value, var_1886_5_sign, 1, LOCAL(2),
  //  range(str i -1) value*sign
  LET, 2, LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(1920, 28),
  POS(1920, 44),
  POS(1920, 27)
};

static TAB_NUM t_func_std_types__string___to_integer[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 1956_5_self
  // parse_integer &self $value
  var_parse_integer, 1, LOCAL(2), 2, LOCAL(2), var_1958_24_value,
  // self == ""
  var_std__equal, 2, LOCAL(2), string_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_243, lambda_244, TAIL_CALL,
  POS(1958, 3),
  POS(1960, 5),
  POS(1959, 3)
};

static TAB_NUM t_lambda_243[] = {
  0, // locals
  0, // parameters
  //  value
  LET, 1, var_1958_24_value, TAIL_CALL,
  POS(1961, 7)
};

static TAB_NUM t_lambda_244[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(1962, 7)
};

static TAB_NUM t_func_std_types__string___to_number[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 1998_5_self
  // parse_number &self $value
  var_parse_number, 1, LOCAL(2), 2, LOCAL(2), var_2000_23_value,
  // self == ""
  var_std__equal, 2, LOCAL(2), string_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_245, lambda_246, TAIL_CALL,
  POS(2000, 3),
  POS(2002, 5),
  POS(2001, 3)
};

static TAB_NUM t_lambda_245[] = {
  0, // locals
  0, // parameters
  //  value
  LET, 1, var_2000_23_value, TAIL_CALL,
  POS(2003, 7)
};

static TAB_NUM t_lambda_246[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(2004, 7)
};

static TAB_NUM t_func_std__map_characters[] = {
  2, // locals
  2, // parameters
  var_2027_5_self,
  var_2028_5_function,
  // parameter_count_of(function) == 2
  var_parameter_count_of, 1, var_2028_5_function, 1, LOCAL(1),
  // parameter_count_of(function) == 2
  var_std__equal, 2, LOCAL(1), num_2, 1, LOCAL(2),
  // $map
  var_if, 3, LOCAL(2), lambda_247, lambda_253, 1, var_2030_4_map,
  // length_of(self)
  var_length_of, 1, var_2027_5_self, 1, LOCAL(1),
  // map 1 length_of(self)
  var_2030_4_map, 2, num_1, LOCAL(1), TAIL_CALL,
  POS(2032, 7),
  POS(2032, 7),
  POS(2030, 3),
  POS(2060, 9),
  POS(2060, 3)
};

static TAB_NUM t_lambda_247[] = {
  0, // locals
  0, // parameters
  // 
  LET, 1, lambda_248, TAIL_CALL,
  POS(2033, 9)
};

static TAB_NUM t_lambda_248[] = {
  1, // locals
  2, // parameters
  var_2034_12_s,
  var_2034_14_e,
  // s < e:
  var_std__less, 2, var_2034_12_s, var_2034_14_e, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_249, lambda_250, TAIL_CALL,
  POS(2036, 13),
  POS(2035, 11)
};

static TAB_NUM t_lambda_249[] = {
  4, // locals
  0, // parameters
  // s+e) >> 1
  var_std__plus, 2, var_2034_12_s, var_2034_14_e, 1, LOCAL(1),
  // $m (s+e) >> 1
  var_std__shift_right, 2, LOCAL(1), num_1, 1, LOCAL(4),
  // map(s m)
  var_2030_4_map, 2, var_2034_12_s, LOCAL(4), 1, LOCAL(1),
  // m+1 e)
  var_std__plus, 2, LOCAL(4), num_1, 1, LOCAL(2),
  // map(m+1 e)
  var_2030_4_map, 2, LOCAL(2), var_2034_14_e, 1, LOCAL(3),
  // append
  var_append, 2, LOCAL(1), LOCAL(3), TAIL_CALL,
  POS(2037, 19),
  POS(2037, 15),
  POS(2039, 17),
  POS(2040, 21),
  POS(2040, 17),
  POS(2038, 15)
};

static TAB_NUM t_lambda_250[] = {
  1, // locals
  0, // parameters
  // e
  var_std__less, 2, var_2034_14_e, var_2034_12_s, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_251, lambda_252, TAIL_CALL,
  POS(2043, 21),
  POS(2042, 15)
};

static TAB_NUM t_lambda_251[] = {
  0, // locals
  0, // parameters
  //  ""
  LET, 1, string_1, TAIL_CALL,
  POS(2044, 19)
};

static TAB_NUM t_lambda_252[] = {
  3, // locals
  0, // parameters
  // self(s)).to_string
  var_2027_5_self, 1, var_2034_12_s, 1, LOCAL(1),
  // function(s self(s)).to_string
  var_2028_5_function, 2, var_2034_12_s, LOCAL(1), 1, LOCAL(2),
  // to_string
  var_to_string, 1, LOCAL(2), 1, LOCAL(3),
  //  function(s self(s)).to_string
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(2045, 31),
  POS(2045, 20),
  POS(2045, 40),
  POS(2045, 19)
};

static TAB_NUM t_lambda_253[] = {
  0, // locals
  0, // parameters
  // 
  LET, 1, lambda_254, TAIL_CALL,
  POS(2046, 9)
};

static TAB_NUM t_lambda_254[] = {
  1, // locals
  2, // parameters
  var_2047_12_s,
  var_2047_14_e,
  // s < e:
  var_std__less, 2, var_2047_12_s, var_2047_14_e, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_255, lambda_256, TAIL_CALL,
  POS(2049, 13),
  POS(2048, 11)
};

static TAB_NUM t_lambda_255[] = {
  4, // locals
  0, // parameters
  // s+e) >> 1
  var_std__plus, 2, var_2047_12_s, var_2047_14_e, 1, LOCAL(1),
  // $m (s+e) >> 1
  var_std__shift_right, 2, LOCAL(1), num_1, 1, LOCAL(4),
  // map(s m)
  var_2030_4_map, 2, var_2047_12_s, LOCAL(4), 1, LOCAL(1),
  // m+1 e)
  var_std__plus, 2, LOCAL(4), num_1, 1, LOCAL(2),
  // map(m+1 e)
  var_2030_4_map, 2, LOCAL(2), var_2047_14_e, 1, LOCAL(3),
  // append
  var_append, 2, LOCAL(1), LOCAL(3), TAIL_CALL,
  POS(2050, 19),
  POS(2050, 15),
  POS(2052, 17),
  POS(2053, 21),
  POS(2053, 17),
  POS(2051, 15)
};

static TAB_NUM t_lambda_256[] = {
  1, // locals
  0, // parameters
  // e
  var_std__less, 2, var_2047_14_e, var_2047_12_s, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_257, lambda_258, TAIL_CALL,
  POS(2056, 21),
  POS(2055, 15)
};

static TAB_NUM t_lambda_257[] = {
  0, // locals
  0, // parameters
  //  ""
  LET, 1, string_1, TAIL_CALL,
  POS(2057, 19)
};

static TAB_NUM t_lambda_258[] = {
  3, // locals
  0, // parameters
  // self(s)).to_string
  var_2027_5_self, 1, var_2047_12_s, 1, LOCAL(1),
  // function(self(s)).to_string
  var_2028_5_function, 1, LOCAL(1), 1, LOCAL(2),
  // to_string
  var_to_string, 1, LOCAL(2), 1, LOCAL(3),
  //  function(self(s)).to_string
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(2058, 29),
  POS(2058, 20),
  POS(2058, 38),
  POS(2058, 19)
};

static TAB_NUM t_func_std_types__string___to_upper_case[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 2080_5_self
  // map_characters self to_upper_case
  var_map_characters, 2, LOCAL(1), var_to_upper_case, TAIL_CALL,
  POS(2082, 3)
};

static TAB_NUM t_func_std_types__string___to_lower_case[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 2102_5_self
  // map_characters self to_lower_case
  var_map_characters, 2, LOCAL(1), var_to_lower_case, TAIL_CALL,
  POS(2104, 3)
};

static TAB_NUM t_func_std_types__string___to_title_case[] = {
  0, // locals
  1, // parameters
  var_2124_5_self,
  // map_characters self: (idx chr)
  var_map_characters, 2, var_2124_5_self, lambda_259, TAIL_CALL,
  POS(2126, 3)
};

static TAB_NUM t_lambda_259[] = {
  2, // locals
  2, // parameters
  var_2126_25_idx,
  var_2126_29_chr,
  // 1 && self(idx-1).is_a_letter_character
  var_std__less, 2, num_1, var_2126_25_idx, 1, LOCAL(1),
  // 1 && self(idx-1).is_a_letter_character
  var_std__and, 2, LOCAL(1), lambda_260, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_261, lambda_262, TAIL_CALL,
  POS(2128, 13),
  POS(2128, 13),
  POS(2127, 5)
};

static TAB_NUM t_lambda_260[] = {
  3, // locals
  0, // parameters
  // idx-1).is_a_letter_character
  var_std__minus, 2, var_2126_25_idx, num_1, 1, LOCAL(1),
  // self(idx-1).is_a_letter_character
  var_2124_5_self, 1, LOCAL(1), 1, LOCAL(2),
  // is_a_letter_character
  var_is_a_letter_character, 1, LOCAL(2), 1, LOCAL(3),
  // self(idx-1).is_a_letter_character
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(2128, 23),
  POS(2128, 18),
  POS(2128, 30),
  POS(2128, 18)
};

static TAB_NUM t_lambda_261[] = {
  1, // locals
  0, // parameters
  // to_lower_case
  var_to_lower_case, 1, var_2126_29_chr, 1, LOCAL(1),
  //  chr.to_lower_case
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(2129, 14),
  POS(2129, 9)
};

static TAB_NUM t_lambda_262[] = {
  1, // locals
  0, // parameters
  // to_title_case
  var_to_title_case, 1, var_2126_29_chr, 1, LOCAL(1),
  //  chr.to_title_case
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(2130, 14),
  POS(2130, 9)
};

static TAB_NUM t_func_std_types__string___to_sentence_case[] = {
  0, // locals
  1, // parameters
  var_2150_5_self,
  // map_characters self: (idx chr)
  var_map_characters, 2, var_2150_5_self, lambda_263, TAIL_CALL,
  POS(2152, 3)
};

static TAB_NUM t_lambda_263[] = {
  2, // locals
  2, // parameters
  var_2152_25_idx,
  var_2152_29_chr,
  // idx == 1 && self(idx).is_a_letter_character
  var_std__equal, 2, var_2152_25_idx, num_1, 1, LOCAL(1),
  // idx == 1 && self(idx).is_a_letter_character
  var_std__and, 2, LOCAL(1), lambda_264, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_265, lambda_266, TAIL_CALL,
  POS(2154, 7),
  POS(2154, 7),
  POS(2153, 5)
};

static TAB_NUM t_lambda_264[] = {
  2, // locals
  0, // parameters
  // self(idx).is_a_letter_character
  var_2150_5_self, 1, var_2152_25_idx, 1, LOCAL(1),
  // is_a_letter_character
  var_is_a_letter_character, 1, LOCAL(1), 1, LOCAL(2),
  // self(idx).is_a_letter_character
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2154, 19),
  POS(2154, 29),
  POS(2154, 19)
};

static TAB_NUM t_lambda_265[] = {
  1, // locals
  0, // parameters
  // to_title_case
  var_to_title_case, 1, var_2152_29_chr, 1, LOCAL(1),
  //  chr.to_title_case
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(2155, 14),
  POS(2155, 9)
};

static TAB_NUM t_lambda_266[] = {
  1, // locals
  0, // parameters
  // to_lower_case
  var_to_lower_case, 1, var_2152_29_chr, 1, LOCAL(1),
  //  chr.to_lower_case
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(2156, 14),
  POS(2156, 9)
};

static TAB_NUM t_func_std_types__string___to_wide[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 2158_30_str
  // map_characters str to_wide
  var_map_characters, 2, LOCAL(1), var_to_wide, TAIL_CALL,
  POS(2159, 3)
};

static TAB_NUM t_func_std__delete_all[] = {
  1, // locals
  -2, // parameters
  MANDATORY_PARAMETER, LOCAL(1), // 2182_5_text
  REST_PARAMETER, var_2183_5_expressions,
  // $new_text ""
  LET, 1, string_1, 1, var_2199_4_new_text,
  // delete_all text
  func_delete_all, 1, LOCAL(1), TAIL_CALL,
  POS(2199, 3),
  POS(2200, 3)
};

static TAB_NUM t_func_delete_all[] = {
  1, // locals
  1, // parameters
  var_2185_17_txt,
  // is_empty
  var_is_empty, 1, var_2185_17_txt, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_267, lambda_268, TAIL_CALL,
  POS(2187, 11),
  POS(2186, 5)
};

static TAB_NUM t_lambda_267[] = {
  0, // locals
  0, // parameters
  //  new_text
  LET, 1, var_2199_4_new_text, TAIL_CALL,
  POS(2188, 9)
};

static TAB_NUM t_lambda_268[] = {
  0, // locals
  0, // parameters
  // for_each expressions
  var_for_each, 3, var_2183_5_expressions, lambda_269, lambda_271, TAIL_CALL,
  POS(2190, 9)
};

static TAB_NUM t_lambda_269[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 2191_14_expression
  // $len match(expression txt)
  var_match, 2, LOCAL(2), var_2185_17_txt, 1, var_2192_14_len,
  // is_defined next:
  var_is_defined, 1, var_2192_14_len, 1, LOCAL(1),
  // if_not len.is_defined next:
  var_if_not, 3, LOCAL(1), var_next, lambda_270, TAIL_CALL,
  POS(2192, 13),
  POS(2193, 24),
  POS(2193, 13)
};

static TAB_NUM t_lambda_270[] = {
  2, // locals
  0, // parameters
  // len+1 -1)
  var_std__plus, 2, var_2192_14_len, num_1, 1, LOCAL(1),
  // range(txt len+1 -1)
  var_range, 3, var_2185_17_txt, LOCAL(1), minus_num_1, 1, LOCAL(2),
  // delete_all range(txt len+1 -1)
  func_delete_all, 1, LOCAL(2), TAIL_CALL,
  POS(2194, 36),
  POS(2194, 26),
  POS(2194, 15)
};

static TAB_NUM t_lambda_271[] = {
  1, // locals
  0, // parameters
  // txt(1)
  var_2185_17_txt, 1, num_1, 1, LOCAL(1),
  // push &new_text txt(1)
  var_push, 2, var_2199_4_new_text, LOCAL(1), 1, var_2199_4_new_text,
  // range(txt 2 -1)
  var_range, 3, var_2185_17_txt, num_2, minus_num_1, 1, LOCAL(1),
  // delete_all range(txt 2 -1)
  func_delete_all, 1, LOCAL(1), TAIL_CALL,
  POS(2196, 28),
  POS(2196, 13),
  POS(2197, 24),
  POS(2197, 13)
};

static TAB_NUM t_func_std__replace_all[] = {
  1, // locals
  -2, // parameters
  MANDATORY_PARAMETER, LOCAL(1), // 2223_5_text
  REST_PARAMETER, var_2224_5_args,
  // $new_text ""
  LET, 1, string_1, 1, var_2247_4_new_text,
  // replace_all text
  func_replace_all, 1, LOCAL(1), TAIL_CALL,
  POS(2247, 3),
  POS(2248, 3)
};

static TAB_NUM t_func_replace_all[] = {
  1, // locals
  1, // parameters
  var_2226_18_txt,
  // is_empty
  var_is_empty, 1, var_2226_18_txt, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_272, lambda_273, TAIL_CALL,
  POS(2228, 11),
  POS(2227, 5)
};

static TAB_NUM t_lambda_272[] = {
  0, // locals
  0, // parameters
  //  new_text
  LET, 1, var_2247_4_new_text, TAIL_CALL,
  POS(2229, 9)
};

static TAB_NUM t_lambda_273[] = {
  0, // locals
  0, // parameters
  // for_each args
  var_for_each, 3, var_2224_5_args, lambda_274, lambda_277, TAIL_CALL,
  POS(2231, 9)
};

static TAB_NUM t_lambda_274[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 2232_14_arg
  // arg $expression $replacement
  LOCAL(2), 0, 2, LOCAL(3), var_2233_30_replacement,
  // $len match(expression txt)
  var_match, 2, LOCAL(3), var_2226_18_txt, 1, var_2234_14_len,
  // is_defined next:
  var_is_defined, 1, var_2234_14_len, 1, LOCAL(1),
  // if_not len.is_defined next:
  var_if_not, 3, LOCAL(1), var_next, lambda_275, TAIL_CALL,
  POS(2233, 13),
  POS(2234, 13),
  POS(2235, 24),
  POS(2235, 13)
};

static TAB_NUM t_lambda_275[] = {
  1, // locals
  0, // parameters
  // is_a_string:
  var_is_a_string, 1, var_2233_30_replacement, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_replacement_is_a_string, lambda_276, TAIL_CALL,
  POS(2237, 29),
  POS(2236, 15)
};

static TAB_NUM t_lambda_replacement_is_a_string[] = {
  2, // locals
  0, // parameters
  // append &new_text replacement
  var_append, 2, var_2247_4_new_text, var_2233_30_replacement, 1, var_2247_4_new_text,
  // len+1 -1)
  var_std__plus, 2, var_2234_14_len, num_1, 1, LOCAL(1),
  // range(txt len+1 -1)
  var_range, 3, var_2226_18_txt, LOCAL(1), minus_num_1, 1, LOCAL(2),
  // replace_all range(txt len+1 -1)
  func_replace_all, 1, LOCAL(2), TAIL_CALL,
  POS(2238, 19),
  POS(2239, 41),
  POS(2239, 31),
  POS(2239, 19)
};

static TAB_NUM t_lambda_276[] = {
  2, // locals
  0, // parameters
  // range(txt 1 len))
  var_range, 3, var_2226_18_txt, num_1, var_2234_14_len, 1, LOCAL(1),
  // replacement(range(txt 1 len))
  var_2233_30_replacement, 1, LOCAL(1), 1, LOCAL(2),
  // append &new_text replacement(range(txt 1 len))
  var_append, 2, var_2247_4_new_text, LOCAL(2), 1, var_2247_4_new_text,
  // len+1 -1)
  var_std__plus, 2, var_2234_14_len, num_1, 1, LOCAL(1),
  // range(txt len+1 -1)
  var_range, 3, var_2226_18_txt, LOCAL(1), minus_num_1, 1, LOCAL(2),
  // replace_all range(txt len+1 -1)
  func_replace_all, 1, LOCAL(2), TAIL_CALL,
  POS(2241, 48),
  POS(2241, 36),
  POS(2241, 19),
  POS(2242, 41),
  POS(2242, 31),
  POS(2242, 19)
};

static TAB_NUM t_lambda_277[] = {
  1, // locals
  0, // parameters
  // txt(1)
  var_2226_18_txt, 1, num_1, 1, LOCAL(1),
  // push &new_text txt(1)
  var_push, 2, var_2247_4_new_text, LOCAL(1), 1, var_2247_4_new_text,
  // range(txt 2 -1)
  var_range, 3, var_2226_18_txt, num_2, minus_num_1, 1, LOCAL(1),
  // replace_all range(txt 2 -1)
  func_replace_all, 1, LOCAL(1), TAIL_CALL,
  POS(2244, 28),
  POS(2244, 13),
  POS(2245, 25),
  POS(2245, 13)
};

static TAB_NUM t_func_std__replace_first[] = {
  1, // locals
  -2, // parameters
  MANDATORY_PARAMETER, LOCAL(1), // 2271_5_text
  REST_PARAMETER, var_2272_5_args,
  // $new_text ""
  LET, 1, string_1, 1, var_2294_4_new_text,
  // replace_first text
  func_replace_first, 1, LOCAL(1), TAIL_CALL,
  POS(2294, 3),
  POS(2295, 3)
};

static TAB_NUM t_func_replace_first[] = {
  1, // locals
  1, // parameters
  var_2274_20_txt,
  // is_empty
  var_is_empty, 1, var_2274_20_txt, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_278, lambda_279, TAIL_CALL,
  POS(2276, 11),
  POS(2275, 5)
};

static TAB_NUM t_lambda_278[] = {
  0, // locals
  0, // parameters
  //  new_text
  LET, 1, var_2294_4_new_text, TAIL_CALL,
  POS(2277, 9)
};

static TAB_NUM t_lambda_279[] = {
  0, // locals
  0, // parameters
  // for_each args
  var_for_each, 3, var_2272_5_args, lambda_280, lambda_283, TAIL_CALL,
  POS(2279, 9)
};

static TAB_NUM t_lambda_280[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 2280_14_arg
  // arg $expression $replacement
  LOCAL(2), 0, 2, LOCAL(3), var_2281_30_replacement,
  // $len match(expression txt)
  var_match, 2, LOCAL(3), var_2274_20_txt, 1, var_2282_14_len,
  // is_defined
  var_is_defined, 1, var_2282_14_len, 1, LOCAL(1),
  // if_not
  var_if_not, 3, LOCAL(1), var_next, lambda_281, TAIL_CALL,
  POS(2281, 13),
  POS(2282, 13),
  POS(2284, 19),
  POS(2283, 13)
};

static TAB_NUM t_lambda_281[] = {
  3, // locals
  0, // parameters
  // is_a_string &replacement
  var_is_a_string, 1, var_2281_30_replacement, 1, LOCAL(1),
  // update_if_not replacement.is_a_string &replacement
  var_update_if_not, 3, LOCAL(1), var_2281_30_replacement, lambda_282, 1, var_2281_30_replacement,
  // len+1 -1))
  var_std__plus, 2, var_2282_14_len, num_1, 1, LOCAL(1),
  // range(txt len+1 -1))
  var_range, 3, var_2274_20_txt, LOCAL(1), minus_num_1, 1, LOCAL(2),
  // append(new_text replacement range(txt len+1 -1))
  var_append, 3, var_2294_4_new_text, var_2281_30_replacement, LOCAL(2), 1, LOCAL(3),
  // -> append(new_text replacement range(txt len+1 -1))
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(2287, 43),
  POS(2287, 17),
  POS(2289, 58),
  POS(2289, 48),
  POS(2289, 20),
  POS(2289, 17)
};

static TAB_NUM t_lambda_282[] = {
  2, // locals
  0, // parameters
  // range(txt 1 len))
  var_range, 3, var_2274_20_txt, num_1, var_2282_14_len, 1, LOCAL(1),
  // replacement(range(txt 1 len))
  var_2281_30_replacement, 1, LOCAL(1), 1, LOCAL(2),
  //  replacement(range(txt 1 len))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2288, 34),
  POS(2288, 22),
  POS(2288, 21)
};

static TAB_NUM t_lambda_283[] = {
  1, // locals
  0, // parameters
  // txt(1)
  var_2274_20_txt, 1, num_1, 1, LOCAL(1),
  // push &new_text txt(1)
  var_push, 2, var_2294_4_new_text, LOCAL(1), 1, var_2294_4_new_text,
  // range(txt 2 -1)
  var_range, 3, var_2274_20_txt, num_2, minus_num_1, 1, LOCAL(1),
  // replace_first range(txt 2 -1)
  func_replace_first, 1, LOCAL(1), TAIL_CALL,
  POS(2291, 28),
  POS(2291, 13),
  POS(2292, 27),
  POS(2292, 13)
};

static TAB_NUM t_func_std__count_occurrences[] = {
  1, // locals
  2, // parameters
  LOCAL(1), // 2316_5_text
  var_2317_5_expr,
  // search_next text 0
  func_search_next, 2, LOCAL(1), num_0, TAIL_CALL,
  POS(2331, 3)
};

static TAB_NUM t_func_search_next[] = {
  1, // locals
  2, // parameters
  var_2319_18_txt,
  var_2319_22_count,
  // txt == ""
  var_std__equal, 2, var_2319_18_txt, string_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_284, lambda_285, TAIL_CALL,
  POS(2321, 7),
  POS(2320, 5)
};

static TAB_NUM t_lambda_284[] = {
  0, // locals
  0, // parameters
  //  count
  LET, 1, var_2319_22_count, TAIL_CALL,
  POS(2322, 9)
};

static TAB_NUM t_lambda_285[] = {
  1, // locals
  0, // parameters
  // $n match(expr txt)
  var_match, 2, var_2317_5_expr, var_2319_18_txt, 1, var_2324_10_n,
  // is_defined:
  var_is_defined, 1, var_2324_10_n, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_n_is_defined, lambda_286, TAIL_CALL,
  POS(2324, 9),
  POS(2326, 13),
  POS(2325, 9)
};

static TAB_NUM t_lambda_n_is_defined[] = {
  3, // locals
  0, // parameters
  // n+1 -1) count+1
  var_std__plus, 2, var_2324_10_n, num_1, 1, LOCAL(1),
  // range(txt n+1 -1) count+1
  var_range, 3, var_2319_18_txt, LOCAL(1), minus_num_1, 1, LOCAL(2),
  // count+1
  var_std__plus, 2, var_2319_22_count, num_1, 1, LOCAL(3),
  // search_next range(txt n+1 -1) count+1
  func_search_next, 2, LOCAL(2), LOCAL(3), TAIL_CALL,
  POS(2327, 35),
  POS(2327, 25),
  POS(2327, 43),
  POS(2327, 13)
};

static TAB_NUM t_lambda_286[] = {
  1, // locals
  0, // parameters
  // range(txt 2 -1) count
  var_range, 3, var_2319_18_txt, num_2, minus_num_1, 1, LOCAL(1),
  // search_next range(txt 2 -1) count
  func_search_next, 2, LOCAL(1), var_2319_22_count, TAIL_CALL,
  POS(2329, 25),
  POS(2329, 13)
};

static TAB_NUM t_func_std__split_into_lines[] = {
  0, // locals
  1, // parameters
  var_2375_26_text,
  // $lines empty_list
  LET, 1, var_empty_list, 1, var_2376_4_lines,
  // $i 1
  LET, 1, num_1, 1, var_2377_4_i,
  // $n length_of(text)
  var_length_of, 1, var_2375_26_text, 1, var_2378_4_n,
  // $s i
  LET, 1, var_2377_4_i, 1, var_2379_4_s,
  // loop:
  var_loop, 1, lambda_15_loop, TAIL_CALL,
  POS(2376, 3),
  POS(2377, 3),
  POS(2378, 3),
  POS(2379, 3),
  POS(2380, 3)
};

static TAB_NUM t_lambda_15_loop[] = {
  1, // locals
  0, // parameters
  // n
  var_std__less, 2, var_2378_4_n, var_2377_4_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_287, lambda_290, TAIL_CALL,
  POS(2382, 11),
  POS(2381, 5)
};

static TAB_NUM t_lambda_287[] = {
  3, // locals
  0, // parameters
  // n
  var_std__less, 2, var_2378_4_n, var_2379_4_s, 1, LOCAL(1),
  // n
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_288, lambda_289, 1, LOCAL(3),
  // 
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(2385, 16),
  POS(2385, 16),
  POS(2384, 9),
  POS(2383, 9)
};

static TAB_NUM t_lambda_288[] = {
  2, // locals
  0, // parameters
  // range(text s n))
  var_range, 3, var_2375_26_text, var_2379_4_s, var_2378_4_n, 1, LOCAL(1),
  // push(lines range(text s n))
  var_push, 2, var_2376_4_lines, LOCAL(1), 1, LOCAL(2),
  //  push(lines range(text s n))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2386, 25),
  POS(2386, 14),
  POS(2386, 13)
};

static TAB_NUM t_lambda_289[] = {
  0, // locals
  0, // parameters
  //  lines
  LET, 1, var_2376_4_lines, TAIL_CALL,
  POS(2387, 13)
};

static TAB_NUM t_lambda_290[] = {
  2, // locals
  0, // parameters
  // text(i) == '@nl;':
  var_2375_26_text, 1, var_2377_4_i, 1, LOCAL(1),
  // text(i) == '@nl;':
  var_std__equal, 2, LOCAL(1), chr_10, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_291, lambda_292, TAIL_CALL,
  POS(2390, 11),
  POS(2390, 11),
  POS(2389, 9)
};

static TAB_NUM t_lambda_291[] = {
  1, // locals
  0, // parameters
  // range(text s i)
  var_range, 3, var_2375_26_text, var_2379_4_s, var_2377_4_i, 1, LOCAL(1),
  // push &lines range(text s i)
  var_push, 2, var_2376_4_lines, LOCAL(1), 1, var_2376_4_lines,
  // !i i+1
  var_std__plus, 2, var_2377_4_i, num_1, 1, var_2377_4_i,
  // !s i
  LET, 1, var_2377_4_i, 1, var_2379_4_s,
  // next
  var_next, 0, TAIL_CALL,
  POS(2391, 25),
  POS(2391, 13),
  POS(2392, 13),
  POS(2393, 13),
  POS(2394, 13)
};

static TAB_NUM t_lambda_292[] = {
  0, // locals
  0, // parameters
  // !i i+1
  var_std__plus, 2, var_2377_4_i, num_1, 1, var_2377_4_i,
  // next
  var_next, 0, TAIL_CALL,
  POS(2396, 13),
  POS(2397, 13)
};

static TAB_NUM t_func_std__split_into_indented_lines[] = {
  1, // locals
  1, // parameters
  var_2458_5_text,
  // $n length_of(text)
  var_length_of, 1, var_2458_5_text, 1, LOCAL(1),
  // split 1 n
  func_split, 2, num_1, LOCAL(1), TAIL_CALL,
  POS(2460, 3),
  POS(2461, 3)
};

static TAB_NUM t_func_split[] = {
  3, // locals
  2, // parameters
  var_2463_12_s,
  var_2463_14_e,
  // e+1-s > FORK_TEXT_THRESHOLD: # recurse to exploit parallel execution
  var_std__plus, 2, var_2463_14_e, num_1, 1, LOCAL(1),
  // e+1-s > FORK_TEXT_THRESHOLD: # recurse to exploit parallel execution
  var_std__minus, 2, LOCAL(1), var_2463_12_s, 1, LOCAL(2),
  // FORK_TEXT_THRESHOLD: # recurse to exploit parallel execution
  var_std__less, 2, num_300, LOCAL(2), 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_293, lambda_294, TAIL_CALL,
  POS(2465, 7),
  POS(2465, 7),
  POS(2465, 15),
  POS(2464, 5)
};

static TAB_NUM t_lambda_293[] = {
  4, // locals
  0, // parameters
  // s+e) .div. 2
  var_std__plus, 2, var_2463_12_s, var_2463_14_e, 1, LOCAL(1),
  // $m (s+e) .div. 2
  var_div, 2, LOCAL(1), num_2, 1, LOCAL(4),
  // split(s m) split(m+1 e)
  func_split, 2, var_2463_12_s, LOCAL(4), 1, LOCAL(1),
  // m+1 e)
  var_std__plus, 2, LOCAL(4), num_1, 1, LOCAL(2),
  // split(m+1 e)
  func_split, 2, LOCAL(2), var_2463_14_e, 1, LOCAL(3),
  // append split(s m) split(m+1 e)
  var_append, 2, LOCAL(1), LOCAL(3), TAIL_CALL,
  POS(2466, 13),
  POS(2466, 9),
  POS(2467, 16),
  POS(2467, 33),
  POS(2467, 27),
  POS(2467, 9)
};

static TAB_NUM t_lambda_294[] = {
  2, // locals
  0, // parameters
  // $lines empty_list
  LET, 1, var_empty_list, 1, var_2469_10_lines,
  // s == 1 || text(s-1) == '@nl;'
  var_std__equal, 2, var_2463_12_s, num_1, 1, LOCAL(1),
  // s == 1 || text(s-1) == '@nl;'
  var_std__or, 2, LOCAL(1), lambda_295, 1, LOCAL(2),
  // $ls
  var_if, 3, LOCAL(2), lambda_296, lambda_297, 1, var_2470_10_ls,
  // from_to s e
  var_from_to, 4, var_2463_12_s, var_2463_14_e, lambda_298, lambda_301, TAIL_CALL,
  POS(2469, 9),
  POS(2472, 13),
  POS(2472, 13),
  POS(2470, 9),
  POS(2475, 9)
};

static TAB_NUM t_lambda_295[] = {
  3, // locals
  0, // parameters
  // s-1) == '@nl;'
  var_std__minus, 2, var_2463_12_s, num_1, 1, LOCAL(1),
  // text(s-1) == '@nl;'
  var_2458_5_text, 1, LOCAL(1), 1, LOCAL(2),
  // text(s-1) == '@nl;'
  var_std__equal, 2, LOCAL(2), chr_10, 1, LOCAL(3),
  // text(s-1) == '@nl;'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(2472, 28),
  POS(2472, 23),
  POS(2472, 23),
  POS(2472, 23)
};

static TAB_NUM t_lambda_296[] = {
  0, // locals
  0, // parameters
  //  s # the current block starts at a line start
  LET, 1, var_2463_12_s, TAIL_CALL,
  POS(2473, 15)
};

static TAB_NUM t_lambda_297[] = {
  0, // locals
  0, // parameters
  //  undefined # just skip the characters until the next line start
  LET, 1, var_undefined, TAIL_CALL,
  POS(2474, 15)
};

static TAB_NUM t_lambda_298[] = {
  2, // locals
  1, // parameters
  var_2476_14_i,
  // text(i) == '@nl;' next:
  var_2458_5_text, 1, var_2476_14_i, 1, LOCAL(1),
  // text(i) == '@nl;' next:
  var_std__equal, 2, LOCAL(1), chr_10, 1, LOCAL(2),
  // if_not text(i) == '@nl;' next:
  var_if_not, 3, LOCAL(2), var_next, lambda_299, TAIL_CALL,
  POS(2477, 20),
  POS(2477, 20),
  POS(2477, 13)
};

static TAB_NUM t_lambda_299[] = {
  1, // locals
  0, // parameters
  // is_defined:
  var_is_defined, 1, var_2470_10_ls, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_ls_is_defined, lambda_300, TAIL_CALL,
  POS(2479, 20),
  POS(2478, 15)
};

static TAB_NUM t_lambda_ls_is_defined[] = {
  1, // locals
  0, // parameters
  // create_line(ls i)
  func_create_line, 2, var_2470_10_ls, var_2476_14_i, 1, LOCAL(1),
  // push &lines create_line(ls i)
  var_push, 2, var_2469_10_lines, LOCAL(1), 1, var_2469_10_lines,
  // !ls i+1
  var_std__plus, 2, var_2476_14_i, num_1, 1, var_2470_10_ls,
  // next
  var_next, 0, TAIL_CALL,
  POS(2480, 31),
  POS(2480, 19),
  POS(2481, 19),
  POS(2482, 19)
};

static TAB_NUM t_lambda_300[] = {
  0, // locals
  0, // parameters
  // !ls i+1
  var_std__plus, 2, var_2476_14_i, num_1, 1, var_2470_10_ls,
  // next
  var_next, 0, TAIL_CALL,
  POS(2484, 19),
  POS(2485, 19)
};

static TAB_NUM t_lambda_301[] = {
  2, // locals
  0, // parameters
  // is_defined && ls <= e:
  var_is_defined, 1, var_2470_10_ls, 1, LOCAL(1),
  // is_defined && ls <= e:
  var_std__and, 2, LOCAL(1), lambda_302, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_303, lambda_305, TAIL_CALL,
  POS(2488, 18),
  POS(2488, 18),
  POS(2487, 13)
};

static TAB_NUM t_lambda_302[] = {
  2, // locals
  0, // parameters
  // e:
  var_std__less, 2, var_2463_14_e, var_2470_10_ls, 1, LOCAL(1),
  // e:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // ls <= e:
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2488, 38),
  POS(2488, 38),
  POS(2488, 32)
};

static TAB_NUM t_lambda_303[] = {
  0, // locals
  0, // parameters
  // loop: # the last line extends into the next block
  var_loop, 1, lambda_16_loop, TAIL_CALL,
  POS(2489, 17)
};

static TAB_NUM t_lambda_16_loop[] = {
  2, // locals
  0, // parameters
  // !e e+1
  var_std__plus, 2, var_2463_14_e, num_1, 1, var_2463_14_e,
  // text(e) == '@nl;'
  var_2458_5_text, 1, var_2463_14_e, 1, LOCAL(1),
  // text(e) == '@nl;'
  var_std__equal, 2, LOCAL(1), chr_10, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_304, var_next, TAIL_CALL,
  POS(2490, 19),
  POS(2492, 21),
  POS(2492, 21),
  POS(2491, 19)
};

static TAB_NUM t_lambda_304[] = {
  2, // locals
  0, // parameters
  // create_line(ls e))
  func_create_line, 2, var_2470_10_ls, var_2463_14_e, 1, LOCAL(1),
  // push(lines create_line(ls e))
  var_push, 2, var_2469_10_lines, LOCAL(1), 1, LOCAL(2),
  //  push(lines create_line(ls e))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2493, 35),
  POS(2493, 24),
  POS(2493, 23)
};

static TAB_NUM t_lambda_305[] = {
  0, // locals
  0, // parameters
  //  lines
  LET, 1, var_2469_10_lines, TAIL_CALL,
  POS(2495, 17)
};

static TAB_NUM t_func_create_line[] = {
  0, // locals
  2, // parameters
  var_2497_18_s,
  var_2497_20_e,
  // $indent 0
  LET, 1, num_0, 1, var_2498_6_indent,
  // loop:
  var_loop, 1, lambda_17_loop, TAIL_CALL,
  POS(2498, 5),
  POS(2499, 5)
};

static TAB_NUM t_lambda_17_loop[] = {
  2, // locals
  0, // parameters
  // text(s) == '@ht;':
  var_2458_5_text, 1, var_2497_18_s, 1, LOCAL(1),
  // text(s) == '@ht;':
  var_std__equal, 2, LOCAL(1), chr_9, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_306, lambda_307, TAIL_CALL,
  POS(2501, 9),
  POS(2501, 9),
  POS(2500, 7)
};

static TAB_NUM t_lambda_306[] = {
  0, // locals
  0, // parameters
  // !indent indent+8
  var_std__plus, 2, var_2498_6_indent, num_8, 1, var_2498_6_indent,
  // !s s+1
  var_std__plus, 2, var_2497_18_s, num_1, 1, var_2497_18_s,
  // next
  var_next, 0, TAIL_CALL,
  POS(2502, 11),
  POS(2503, 11),
  POS(2504, 11)
};

static TAB_NUM t_lambda_307[] = {
  2, // locals
  0, // parameters
  // text(s) == ' ':
  var_2458_5_text, 1, var_2497_18_s, 1, LOCAL(1),
  // text(s) == ' ':
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_308, lambda_309, TAIL_CALL,
  POS(2507, 13),
  POS(2507, 13),
  POS(2506, 11)
};

static TAB_NUM t_lambda_308[] = {
  0, // locals
  0, // parameters
  // !indent indent+1
  var_std__plus, 2, var_2498_6_indent, num_1, 1, var_2498_6_indent,
  // !s s+1
  var_std__plus, 2, var_2497_18_s, num_1, 1, var_2497_18_s,
  // next
  var_next, 0, TAIL_CALL,
  POS(2508, 15),
  POS(2509, 15),
  POS(2510, 15)
};

static TAB_NUM t_lambda_309[] = {
  1, // locals
  0, // parameters
  // $line_text range(text s e)
  var_range, 3, var_2458_5_text, var_2497_18_s, var_2497_20_e, 1, var_2512_16_line_text,
  // line_text == "@nl;"
  var_std__equal, 2, var_2512_16_line_text, string_9, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_310, lambda_311, TAIL_CALL,
  POS(2512, 15),
  POS(2514, 17),
  POS(2513, 15)
};

static TAB_NUM t_lambda_310[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(2515, 19)
};

static TAB_NUM t_lambda_311[] = {
  1, // locals
  0, // parameters
  // typed_tuple(std_types::line indent line_text)
  var_typed_tuple, 3, var_std_types__line, var_2498_6_indent, var_2512_16_line_text, 1, LOCAL(1),
  //  typed_tuple(std_types::line indent line_text)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(2516, 20),
  POS(2516, 19)
};

static TAB_NUM t_func_line_indent_of[] = {
  1, // locals
  1, // parameters
  var_2524_19_line,
  // is_defined
  var_is_defined, 1, var_2524_19_line, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_312, lambda_313, TAIL_CALL,
  POS(2526, 10),
  POS(2525, 3)
};

static TAB_NUM t_lambda_312[] = {
  1, // locals
  0, // parameters
  // first(line)
  var_first, 1, var_2524_19_line, 1, LOCAL(1),
  //  first(line)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(2527, 8),
  POS(2527, 7)
};

static TAB_NUM t_lambda_313[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(2528, 7)
};

static TAB_NUM t_func_std__split_into_groups[] = {
  0, // locals
  -2, // parameters
  MANDATORY_PARAMETER, var_2581_5_lines,
  var_false, var_2582_5_keep_empty_lines,
  // $n length_of(lines)
  var_length_of, 1, var_2581_5_lines, 1, var_2584_4_n,
  // $fv 1 # first valid line
  LET, 1, num_1, 1, var_2585_4_fv,
  // loop:
  var_loop, 1, lambda_18_loop, TAIL_CALL,
  POS(2584, 3),
  POS(2585, 3),
  POS(2586, 3)
};

static TAB_NUM t_lambda_18_loop[] = {
  2, // locals
  0, // parameters
  // n:
  var_std__less, 2, var_2584_4_n, var_2585_4_fv, 1, LOCAL(1),
  // n:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_314, lambda_319, TAIL_CALL,
  POS(2588, 13),
  POS(2588, 13),
  POS(2587, 5)
};

static TAB_NUM t_lambda_314[] = {
  1, // locals
  0, // parameters
  // lines(fv))
  var_2581_5_lines, 1, var_2585_4_fv, 1, LOCAL(1),
  // $indent line_indent_of(lines(fv))
  func_line_indent_of, 1, LOCAL(1), 1, var_2589_10_indent,
  // is_defined:
  var_is_defined, 1, var_2589_10_indent, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_indent_is_defined, lambda_318, TAIL_CALL,
  POS(2589, 32),
  POS(2589, 9),
  POS(2591, 18),
  POS(2590, 9)
};

static TAB_NUM t_lambda_indent_is_defined[] = {
  1, // locals
  0, // parameters
  // keep_empty_lines && fv > 1
  var_std__and, 2, var_2582_5_keep_empty_lines, lambda_315, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_316, lambda_317, TAIL_CALL,
  POS(2593, 15),
  POS(2592, 13)
};

static TAB_NUM t_lambda_315[] = {
  1, // locals
  0, // parameters
  // 1
  var_std__less, 2, num_1, var_2585_4_fv, 1, LOCAL(1),
  // fv > 1
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(2593, 40),
  POS(2593, 35)
};

static TAB_NUM t_lambda_316[] = {
  5, // locals
  0, // parameters
  // list(undefined) fv-1) split(fv n indent))
  var_list, 1, var_undefined, 1, LOCAL(1),
  // fv-1) split(fv n indent))
  var_std__minus, 2, var_2585_4_fv, num_1, 1, LOCAL(2),
  // dup(list(undefined) fv-1) split(fv n indent))
  var_dup, 2, LOCAL(1), LOCAL(2), 1, LOCAL(3),
  // split(fv n indent))
  func_2_split, 3, var_2585_4_fv, var_2584_4_n, var_2589_10_indent, 1, LOCAL(4),
  // append(dup(list(undefined) fv-1) split(fv n indent))
  var_append, 2, LOCAL(3), LOCAL(4), 1, LOCAL(5),
  //  append(dup(list(undefined) fv-1) split(fv n indent))
  LET, 1, LOCAL(5), TAIL_CALL,
  POS(2594, 29),
  POS(2594, 45),
  POS(2594, 25),
  POS(2594, 51),
  POS(2594, 18),
  POS(2594, 17)
};

static TAB_NUM t_lambda_317[] = {
  1, // locals
  0, // parameters
  // split(fv n indent)
  func_2_split, 3, var_2585_4_fv, var_2584_4_n, var_2589_10_indent, 1, LOCAL(1),
  //  split(fv n indent)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(2595, 18),
  POS(2595, 17)
};

static TAB_NUM t_lambda_318[] = {
  0, // locals
  0, // parameters
  // !fv fv+1
  var_std__plus, 2, var_2585_4_fv, num_1, 1, var_2585_4_fv,
  // next
  var_next, 0, TAIL_CALL,
  POS(2597, 13),
  POS(2598, 13)
};

static TAB_NUM t_lambda_319[] = {
  0, // locals
  0, // parameters
  //  empty_list
  LET, 1, var_empty_list, TAIL_CALL,
  POS(2599, 9)
};

static TAB_NUM t_func_2_split[] = {
  3, // locals
  3, // parameters
  var_2601_12_s,
  var_2601_14_e,
  var_2601_16_indent,
  // e+1-s > FORK_LINES_THRESHOLD: # recurse to exploit parallel execution
  var_std__plus, 2, var_2601_14_e, num_1, 1, LOCAL(1),
  // e+1-s > FORK_LINES_THRESHOLD: # recurse to exploit parallel execution
  var_std__minus, 2, LOCAL(1), var_2601_12_s, 1, LOCAL(2),
  // FORK_LINES_THRESHOLD: # recurse to exploit parallel execution
  var_std__less, 2, num_20, LOCAL(2), 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_320, lambda_321, TAIL_CALL,
  POS(2603, 7),
  POS(2603, 7),
  POS(2603, 15),
  POS(2602, 5)
};

static TAB_NUM t_lambda_320[] = {
  4, // locals
  0, // parameters
  // s+e) .div. 2
  var_std__plus, 2, var_2601_12_s, var_2601_14_e, 1, LOCAL(1),
  // $m (s+e) .div. 2
  var_div, 2, LOCAL(1), num_2, 1, LOCAL(4),
  // split(s m indent) split(m+1 e indent)
  func_2_split, 3, var_2601_12_s, LOCAL(4), var_2601_16_indent, 1, LOCAL(1),
  // m+1 e indent)
  var_std__plus, 2, LOCAL(4), num_1, 1, LOCAL(2),
  // split(m+1 e indent)
  func_2_split, 3, LOCAL(2), var_2601_14_e, var_2601_16_indent, 1, LOCAL(3),
  // append split(s m indent) split(m+1 e indent)
  var_append, 2, LOCAL(1), LOCAL(3), TAIL_CALL,
  POS(2604, 13),
  POS(2604, 9),
  POS(2605, 16),
  POS(2605, 40),
  POS(2605, 34),
  POS(2605, 9)
};

static TAB_NUM t_lambda_321[] = {
  0, // locals
  0, // parameters
  // $groups empty_list
  LET, 1, var_empty_list, 1, var_2607_10_groups,
  // $minimum_indent VERY_LARGE_INDENT
  LET, 1, num_9999, 1, var_2608_10_minimum_indent,
  // $group_start undefined
  LET, 1, var_undefined, 1, var_2609_10_group_start,
  // $group_end undefined
  LET, 1, var_undefined, 1, var_2610_10_group_end,
  // from_to s e
  var_from_to, 4, var_2601_12_s, var_2601_14_e, lambda_322, lambda_329, TAIL_CALL,
  POS(2607, 9),
  POS(2608, 9),
  POS(2609, 9),
  POS(2610, 9),
  POS(2611, 9)
};

static TAB_NUM t_lambda_322[] = {
  1, // locals
  1, // parameters
  var_2612_14_i,
  // lines(i))
  var_2581_5_lines, 1, var_2612_14_i, 1, LOCAL(1),
  // $current_indent line_indent_of(lines(i))
  func_line_indent_of, 1, LOCAL(1), 1, var_2613_14_current_indent,
  // current_indent == indent:
  var_std__equal, 2, var_2613_14_current_indent, var_2601_16_indent, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_323, lambda_327, TAIL_CALL,
  POS(2613, 44),
  POS(2613, 13),
  POS(2615, 15),
  POS(2614, 13)
};

static TAB_NUM t_lambda_323[] = {
  2, // locals
  0, // parameters
  // is_defined && group_start < i:
  var_is_defined, 1, var_2609_10_group_start, 1, LOCAL(1),
  // is_defined && group_start < i:
  var_std__and, 2, LOCAL(1), lambda_324, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_325, lambda_326, TAIL_CALL,
  POS(2617, 31),
  POS(2617, 31),
  POS(2616, 17)
};

static TAB_NUM t_lambda_324[] = {
  1, // locals
  0, // parameters
  // group_start < i:
  var_std__less, 2, var_2609_10_group_start, var_2612_14_i, 1, LOCAL(1),
  // group_start < i:
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(2617, 45),
  POS(2617, 45)
};

static TAB_NUM t_lambda_325[] = {
  0, // locals
  0, // parameters
  // add_groups !groups group_end i
  func_add_groups, 2, var_2610_10_group_end, var_2612_14_i, 1, var_2607_10_groups,
  // start_new_fragment_and_next i
  func_start_new_fragment_and_next, 1, var_2612_14_i, TAIL_CALL,
  POS(2618, 21),
  POS(2619, 21)
};

static TAB_NUM t_lambda_326[] = {
  0, // locals
  0, // parameters
  // start_new_fragment_and_next i
  func_start_new_fragment_and_next, 1, var_2612_14_i, TAIL_CALL,
  POS(2621, 21)
};

static TAB_NUM t_lambda_327[] = {
  1, // locals
  0, // parameters
  // is_defined &group_end -> i
  var_is_defined, 1, var_2613_14_current_indent, 1, LOCAL(1),
  // update_if current_indent.is_defined &group_end -> i
  var_update_if, 3, LOCAL(1), var_2610_10_group_end, lambda_328, 1, var_2610_10_group_end,
  // reduce_minimum_indent_and_next current_indent
  func_reduce_minimum_indent_and_next, 1, var_2613_14_current_indent, TAIL_CALL,
  POS(2623, 42),
  POS(2623, 17),
  POS(2624, 17)
};

static TAB_NUM t_lambda_328[] = {
  0, // locals
  0, // parameters
  //  i
  LET, 1, var_2612_14_i, TAIL_CALL,
  POS(2623, 66)
};

static TAB_NUM t_lambda_329[] = {
  1, // locals
  0, // parameters
  // is_defined:
  var_is_defined, 1, var_2609_10_group_start, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_group_start_is_defined, lambda_336, TAIL_CALL,
  POS(2627, 27),
  POS(2626, 13)
};

static TAB_NUM t_lambda_group_start_is_defined[] = {
  0, // locals
  0, // parameters
  // loop: # the last group extends into the next block
  var_loop, 1, lambda_19_loop, TAIL_CALL,
  POS(2628, 17)
};

static TAB_NUM t_lambda_19_loop[] = {
  1, // locals
  0, // parameters
  // !e e+1
  var_std__plus, 2, var_2601_14_e, num_1, 1, var_2601_14_e,
  // n
  var_std__less, 2, var_2584_4_n, var_2601_14_e, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_330, lambda_331, TAIL_CALL,
  POS(2629, 19),
  POS(2631, 25),
  POS(2630, 19)
};

static TAB_NUM t_lambda_330[] = {
  1, // locals
  0, // parameters
  // add_groups(group_end e)
  func_add_groups, 2, var_2610_10_group_end, var_2601_14_e, 1, LOCAL(1),
  //  add_groups(group_end e)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(2632, 24),
  POS(2632, 23)
};

static TAB_NUM t_lambda_331[] = {
  2, // locals
  0, // parameters
  // lines(e))
  var_2581_5_lines, 1, var_2601_14_e, 1, LOCAL(1),
  // $current_indent line_indent_of(lines(e))
  func_line_indent_of, 1, LOCAL(1), 1, var_2634_24_current_indent,
  // is_defined && current_indent <= indent
  var_is_defined, 1, var_2634_24_current_indent, 1, LOCAL(1),
  // is_defined && current_indent <= indent
  var_std__and, 2, LOCAL(1), lambda_332, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_333, lambda_334, TAIL_CALL,
  POS(2634, 54),
  POS(2634, 23),
  POS(2636, 40),
  POS(2636, 40),
  POS(2635, 23)
};

static TAB_NUM t_lambda_332[] = {
  2, // locals
  0, // parameters
  // indent
  var_std__less, 2, var_2601_16_indent, var_2634_24_current_indent, 1, LOCAL(1),
  // indent
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // current_indent <= indent
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2636, 72),
  POS(2636, 72),
  POS(2636, 54)
};

static TAB_NUM t_lambda_333[] = {
  1, // locals
  0, // parameters
  // add_groups(group_end e)
  func_add_groups, 2, var_2610_10_group_end, var_2601_14_e, 1, LOCAL(1),
  //  add_groups(group_end e)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(2637, 28),
  POS(2637, 27)
};

static TAB_NUM t_lambda_334[] = {
  1, // locals
  0, // parameters
  // is_defined &group_end -> e
  var_is_defined, 1, var_2634_24_current_indent, 1, LOCAL(1),
  // update_if current_indent.is_defined &group_end -> e
  var_update_if, 3, LOCAL(1), var_2610_10_group_end, lambda_335, 1, var_2610_10_group_end,
  // reduce_minimum_indent_and_next current_indent
  func_reduce_minimum_indent_and_next, 1, var_2634_24_current_indent, TAIL_CALL,
  POS(2639, 52),
  POS(2639, 27),
  POS(2640, 27)
};

static TAB_NUM t_lambda_335[] = {
  0, // locals
  0, // parameters
  //  e
  LET, 1, var_2601_14_e, TAIL_CALL,
  POS(2639, 76)
};

static TAB_NUM t_lambda_336[] = {
  0, // locals
  0, // parameters
  //  groups
  LET, 1, var_2607_10_groups, TAIL_CALL,
  POS(2641, 17)
};

static TAB_NUM t_func_add_groups[] = {
  1, // locals
  2, // parameters
  var_2643_23_last,
  var_2643_28_curr_idx,
  // keep_empty_lines && curr_idx > last+1:
  var_std__and, 2, var_2582_5_keep_empty_lines, lambda_337, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_338, func_add, TAIL_CALL,
  POS(2645, 13),
  POS(2644, 11)
};

static TAB_NUM t_lambda_337[] = {
  2, // locals
  0, // parameters
  // last+1:
  var_std__plus, 2, var_2643_23_last, num_1, 1, LOCAL(1),
  // last+1:
  var_std__less, 2, LOCAL(1), var_2643_28_curr_idx, 1, LOCAL(2),
  // curr_idx > last+1:
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2645, 44),
  POS(2645, 44),
  POS(2645, 33)
};

static TAB_NUM t_lambda_338[] = {
  4, // locals
  0, // parameters
  // add !groups
  func_add, 0, 1, var_2607_10_groups,
  // list(undefined) curr_idx-last-1)
  var_list, 1, var_undefined, 1, LOCAL(1),
  // curr_idx-last-1)
  var_std__minus, 2, var_2643_28_curr_idx, var_2643_23_last, 1, LOCAL(2),
  // curr_idx-last-1)
  var_std__minus, 2, LOCAL(2), num_1, 1, LOCAL(3),
  // dup(list(undefined) curr_idx-last-1)
  var_dup, 2, LOCAL(1), LOCAL(3), 1, LOCAL(4),
  // append groups dup(list(undefined) curr_idx-last-1)
  var_append, 2, var_2607_10_groups, LOCAL(4), TAIL_CALL,
  POS(2646, 15),
  POS(2647, 33),
  POS(2647, 49),
  POS(2647, 49),
  POS(2647, 29),
  POS(2647, 15)
};

static TAB_NUM t_func_add[] = {
  1, // locals
  0, // parameters
  // group_start == last
  var_std__equal, 2, var_2609_10_group_start, var_2643_23_last, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_339, lambda_340, TAIL_CALL,
  POS(2652, 15),
  POS(2651, 13)
};

static TAB_NUM t_lambda_339[] = {
  2, // locals
  0, // parameters
  // lines(group_start))
  var_2581_5_lines, 1, var_2609_10_group_start, 1, LOCAL(1),
  // push(groups lines(group_start))
  var_push, 2, var_2607_10_groups, LOCAL(1), 1, LOCAL(2),
  //  push(groups lines(group_start))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2653, 30),
  POS(2653, 18),
  POS(2653, 17)
};

static TAB_NUM t_lambda_340[] = {
  1, // locals
  0, // parameters
  // minimum_indent == VERY_LARGE_INDENT
  var_std__equal, 2, var_2608_10_minimum_indent, num_9999, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_341, lambda_342, TAIL_CALL,
  POS(2656, 19),
  POS(2655, 17)
};

static TAB_NUM t_lambda_341[] = {
  2, // locals
  0, // parameters
  // range(lines group_start last))
  var_range, 3, var_2581_5_lines, var_2609_10_group_start, var_2643_23_last, 1, LOCAL(1),
  // append(groups range(lines group_start last))
  var_append, 2, var_2607_10_groups, LOCAL(1), 1, LOCAL(2),
  //  append(groups range(lines group_start last))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2657, 36),
  POS(2657, 22),
  POS(2657, 21)
};

static TAB_NUM t_lambda_342[] = {
  3, // locals
  0, // parameters
  // $head lines(group_start)
  var_2581_5_lines, 1, var_2609_10_group_start, 1, LOCAL(2),
  // group_start+1 last)
  var_std__plus, 2, var_2609_10_group_start, num_1, 1, LOCAL(1),
  // $subgroups range(lines group_start+1 last)
  var_range, 3, var_2581_5_lines, LOCAL(1), var_2643_23_last, 1, LOCAL(3),
  // .subgroups_of subgroups)
  LET, -1, LOCAL(2), var_subgroups_of, LOCAL(3), LOCAL(1),
  // push groups head(.subgroups_of subgroups)
  var_push, 2, var_2607_10_groups, LOCAL(1), TAIL_CALL,
  POS(2659, 21),
  POS(2660, 44),
  POS(2660, 21),
  POS(2661, 38),
  POS(2661, 21)
};

static TAB_NUM t_func_reduce_minimum_indent_and_next[] = {
  2, // locals
  1, // parameters
  var_2663_43_current_indent,
  // is_defined && current_indent < minimum_indent:
  var_is_defined, 1, var_2663_43_current_indent, 1, LOCAL(1),
  // is_defined && current_indent < minimum_indent:
  var_std__and, 2, LOCAL(1), lambda_343, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_344, var_next, TAIL_CALL,
  POS(2665, 28),
  POS(2665, 28),
  POS(2664, 11)
};

static TAB_NUM t_lambda_343[] = {
  1, // locals
  0, // parameters
  // current_indent < minimum_indent:
  var_std__less, 2, var_2663_43_current_indent, var_2608_10_minimum_indent, 1, LOCAL(1),
  // current_indent < minimum_indent:
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(2665, 42),
  POS(2665, 42)
};

static TAB_NUM t_lambda_344[] = {
  0, // locals
  0, // parameters
  // !minimum_indent current_indent
  LET, 1, var_2663_43_current_indent, 1, var_2608_10_minimum_indent,
  // next
  var_next, 0, TAIL_CALL,
  POS(2666, 15),
  POS(2667, 15)
};

static TAB_NUM t_func_start_new_fragment_and_next[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 2670_40_i
  // !minimum_indent VERY_LARGE_INDENT
  LET, 1, num_9999, 1, var_2608_10_minimum_indent,
  // !group_start i
  LET, 1, LOCAL(1), 1, var_2609_10_group_start,
  // !group_end i
  LET, 1, LOCAL(1), 1, var_2610_10_group_end,
  // next
  var_next, 0, TAIL_CALL,
  POS(2671, 11),
  POS(2672, 11),
  POS(2673, 11),
  POS(2674, 11)
};

static TAB_NUM t_func_std__wrap_words[] = {
  1, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_2703_5_text,
  MANDATORY_PARAMETER, var_2704_5_width,
  var_false, LOCAL(1),
  // $lines empty_list
  LET, 1, var_empty_list, 1, var_2707_4_lines,
  // $n length_of(text)
  var_length_of, 1, var_2703_5_text, 1, var_2708_4_n,
  // $s 1 # start of line
  LET, 1, num_1, 1, var_2709_4_s,
  // $b undefined # possible break position
  LET, 1, var_undefined, 1, var_2710_4_b,
  // $i 0
  LET, 1, num_0, 1, var_2711_4_i,
  // loop:
  var_loop, 1, lambda_20_loop, TAIL_CALL,
  POS(2707, 3),
  POS(2708, 3),
  POS(2709, 3),
  POS(2710, 3),
  POS(2711, 3),
  POS(2712, 3)
};

static TAB_NUM t_lambda_20_loop[] = {
  1, // locals
  0, // parameters
  // inc &i
  var_inc, 1, var_2711_4_i, 1, var_2711_4_i,
  // n:
  var_std__less, 2, var_2708_4_n, var_2711_4_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_345, lambda_348, TAIL_CALL,
  POS(2713, 5),
  POS(2715, 11),
  POS(2714, 5)
};

static TAB_NUM t_lambda_345[] = {
  1, // locals
  0, // parameters
  // n
  var_std__less, 2, var_2708_4_n, var_2709_4_s, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_346, lambda_347, TAIL_CALL,
  POS(2717, 15),
  POS(2716, 9)
};

static TAB_NUM t_lambda_346[] = {
  0, // locals
  0, // parameters
  //  lines
  LET, 1, var_2707_4_lines, TAIL_CALL,
  POS(2718, 13)
};

static TAB_NUM t_lambda_347[] = {
  2, // locals
  0, // parameters
  // range(text s n))
  var_range, 3, var_2703_5_text, var_2709_4_s, var_2708_4_n, 1, LOCAL(1),
  // push(lines range(text s n))
  var_push, 2, var_2707_4_lines, LOCAL(1), 1, LOCAL(2),
  //  push(lines range(text s n))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2719, 25),
  POS(2719, 14),
  POS(2719, 13)
};

static TAB_NUM t_lambda_348[] = {
  0, // locals
  0, // parameters
  // $chr text(i)
  var_2703_5_text, 1, var_2711_4_i, 1, var_2721_10_chr,
  // case chr
  var_case, 4, var_2721_10_chr, chr_10, lambda_nl, lambda_349, TAIL_CALL,
  POS(2721, 9),
  POS(2722, 9)
};

static TAB_NUM t_lambda_nl[] = {
  2, // locals
  0, // parameters
  // i-1)
  var_std__minus, 2, var_2711_4_i, num_1, 1, LOCAL(1),
  // range(text s i-1)
  var_range, 3, var_2703_5_text, var_2709_4_s, LOCAL(1), 1, LOCAL(2),
  // push &lines range(text s i-1)
  var_push, 2, var_2707_4_lines, LOCAL(2), 1, var_2707_4_lines,
  // !s i+1
  var_std__plus, 2, var_2711_4_i, num_1, 1, var_2709_4_s,
  // !b undefined
  LET, 1, var_undefined, 1, var_2710_4_b,
  // next
  var_next, 0, TAIL_CALL,
  POS(2724, 38),
  POS(2724, 25),
  POS(2724, 13),
  POS(2725, 13),
  POS(2726, 13),
  POS(2727, 13)
};

static TAB_NUM t_lambda_349[] = {
  1, // locals
  0, // parameters
  // chr == ' ':
  var_std__equal, 2, var_2721_10_chr, chr_32, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_350, lambda_353, TAIL_CALL,
  POS(2730, 15),
  POS(2729, 13)
};

static TAB_NUM t_lambda_350[] = {
  2, // locals
  0, // parameters
  // i-s == width: # break
  var_std__minus, 2, var_2711_4_i, var_2709_4_s, 1, LOCAL(1),
  // i-s == width: # break
  var_std__equal, 2, LOCAL(1), var_2704_5_width, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_351, lambda_352, TAIL_CALL,
  POS(2732, 19),
  POS(2732, 19),
  POS(2731, 17)
};

static TAB_NUM t_lambda_351[] = {
  2, // locals
  0, // parameters
  // i-1)
  var_std__minus, 2, var_2711_4_i, num_1, 1, LOCAL(1),
  // range(text s i-1)
  var_range, 3, var_2703_5_text, var_2709_4_s, LOCAL(1), 1, LOCAL(2),
  // push &lines range(text s i-1)
  var_push, 2, var_2707_4_lines, LOCAL(2), 1, var_2707_4_lines,
  // !s i+1
  var_std__plus, 2, var_2711_4_i, num_1, 1, var_2709_4_s,
  // !b undefined
  LET, 1, var_undefined, 1, var_2710_4_b,
  // next
  var_next, 0, TAIL_CALL,
  POS(2733, 46),
  POS(2733, 33),
  POS(2733, 21),
  POS(2734, 21),
  POS(2735, 21),
  POS(2736, 21)
};

static TAB_NUM t_lambda_352[] = {
  0, // locals
  0, // parameters
  // !b i
  LET, 1, var_2711_4_i, 1, var_2710_4_b,
  // next
  var_next, 0, TAIL_CALL,
  POS(2738, 21),
  POS(2739, 21)
};

static TAB_NUM t_lambda_353[] = {
  2, // locals
  0, // parameters
  // i-s < width
  var_std__minus, 2, var_2711_4_i, var_2709_4_s, 1, LOCAL(1),
  // i-s < width
  var_std__less, 2, LOCAL(1), var_2704_5_width, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), var_next, lambda_354, TAIL_CALL,
  POS(2742, 19),
  POS(2742, 19),
  POS(2741, 17)
};

static TAB_NUM t_lambda_354[] = {
  1, // locals
  0, // parameters
  // is_defined: # wrap
  var_is_defined, 1, var_2710_4_b, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_b_is_defined, lambda_355, TAIL_CALL,
  POS(2746, 25),
  POS(2745, 21)
};

static TAB_NUM t_lambda_b_is_defined[] = {
  2, // locals
  0, // parameters
  // b-1)
  var_std__minus, 2, var_2710_4_b, num_1, 1, LOCAL(1),
  // range(text s b-1)
  var_range, 3, var_2703_5_text, var_2709_4_s, LOCAL(1), 1, LOCAL(2),
  // push &lines range(text s b-1)
  var_push, 2, var_2707_4_lines, LOCAL(2), 1, var_2707_4_lines,
  // !s b+1
  var_std__plus, 2, var_2710_4_b, num_1, 1, var_2709_4_s,
  // !b undefined
  LET, 1, var_undefined, 1, var_2710_4_b,
  // next
  var_next, 0, TAIL_CALL,
  POS(2747, 50),
  POS(2747, 37),
  POS(2747, 25),
  POS(2748, 25),
  POS(2749, 25),
  POS(2750, 25)
};

static TAB_NUM t_lambda_355[] = {
  2, // locals
  0, // parameters
  // i-1)
  var_std__minus, 2, var_2711_4_i, num_1, 1, LOCAL(1),
  // range(text s i-1)
  var_range, 3, var_2703_5_text, var_2709_4_s, LOCAL(1), 1, LOCAL(2),
  // push &lines range(text s i-1)
  var_push, 2, var_2707_4_lines, LOCAL(2), 1, var_2707_4_lines,
  // !s i
  LET, 1, var_2711_4_i, 1, var_2709_4_s,
  // next
  var_next, 0, TAIL_CALL,
  POS(2752, 50),
  POS(2752, 37),
  POS(2752, 25),
  POS(2753, 25),
  POS(2754, 25)
};

static TAB_NUM t_func_std_types__string___serialize[] = {
  0, // locals
  -2, // parameters
  MANDATORY_PARAMETER, var_2774_5_self,
  var_undefined, var_2775_5_indent,
  // $str "@quot;"
  LET, 1, string_10, 1, var_2777_4_str,
  // $s 1
  LET, 1, num_1, 1, var_2778_4_s,
  // for_each self
  var_for_each, 3, var_2774_5_self, lambda_356, lambda_361, TAIL_CALL,
  POS(2777, 3),
  POS(2778, 3),
  POS(2779, 3)
};

static TAB_NUM t_lambda_356[] = {
  2, // locals
  2, // parameters
  var_2780_8_idx,
  var_2780_12_chr,
  // chr < '@0x20;' || chr > '@0x7e;' || chr == '"' || chr == '@@':
  var_std__less, 2, var_2780_12_chr, chr_32, 1, LOCAL(1),
  // chr < '@0x20;' || chr > '@0x7e;' || chr == '"' || chr == '@@':
  var_std__or, 2, LOCAL(1), lambda_357, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_360, var_next, TAIL_CALL,
  POS(2782, 9),
  POS(2782, 9),
  POS(2781, 7)
};

static TAB_NUM t_lambda_357[] = {
  2, // locals
  0, // parameters
  // 0x7e;' || chr == '"' || chr == '@@':
  var_std__less, 2, chr_126, var_2780_12_chr, 1, LOCAL(1),
  // 0x7e;' || chr == '"' || chr == '@@':
  var_std__or, 2, LOCAL(1), lambda_358, 1, LOCAL(2),
  // chr > '@0x7e;' || chr == '"' || chr == '@@':
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2782, 35),
  POS(2782, 35),
  POS(2782, 27)
};

static TAB_NUM t_lambda_358[] = {
  2, // locals
  0, // parameters
  // chr == '"' || chr == '@@':
  var_std__equal, 2, var_2780_12_chr, chr_34, 1, LOCAL(1),
  // chr == '"' || chr == '@@':
  var_std__or, 2, LOCAL(1), lambda_359, 1, LOCAL(2),
  // chr == '"' || chr == '@@':
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2782, 45),
  POS(2782, 45),
  POS(2782, 45)
};

static TAB_NUM t_lambda_359[] = {
  1, // locals
  0, // parameters
  // chr == '@@':
  var_std__equal, 2, var_2780_12_chr, chr_64, 1, LOCAL(1),
  // chr == '@@':
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(2782, 59),
  POS(2782, 59)
};

static TAB_NUM t_lambda_360[] = {
  2, // locals
  0, // parameters
  // idx-1)
  var_std__minus, 2, var_2780_8_idx, num_1, 1, LOCAL(1),
  // range(self s idx-1)
  var_range, 3, var_2774_5_self, var_2778_4_s, LOCAL(1), 1, LOCAL(2),
  // append &str range(self s idx-1)
  var_append, 2, var_2777_4_str, LOCAL(2), 1, var_2777_4_str,
  // to_integer);"
  var_to_integer, 1, var_2780_12_chr, 1, LOCAL(1),
  // "@@@(chr.to_integer);"
  var_std__string, 3, string_11, LOCAL(1), string_12, 1, LOCAL(2),
  // append &str "@@@(chr.to_integer);"
  var_append, 2, var_2777_4_str, LOCAL(2), 1, var_2777_4_str,
  // !s idx+1
  var_std__plus, 2, var_2780_8_idx, num_1, 1, var_2778_4_s,
  // next
  var_next, 0, TAIL_CALL,
  POS(2783, 36),
  POS(2783, 23),
  POS(2783, 11),
  POS(2784, 32),
  POS(2784, 23),
  POS(2784, 11),
  POS(2785, 11),
  POS(2786, 11)
};

static TAB_NUM t_lambda_361[] = {
  1, // locals
  0, // parameters
  // range(self s -1)
  var_range, 3, var_2774_5_self, var_2778_4_s, minus_num_1, 1, LOCAL(1),
  // append &str range(self s -1)
  var_append, 2, var_2777_4_str, LOCAL(1), 1, var_2777_4_str,
  // append &str "@quot;@nl;"
  var_append, 2, var_2777_4_str, string_13, 1, var_2777_4_str,
  // is_defined
  var_is_defined, 1, var_2775_5_indent, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_362, lambda_363, TAIL_CALL,
  POS(2789, 19),
  POS(2789, 7),
  POS(2790, 7),
  POS(2792, 16),
  POS(2791, 7)
};

static TAB_NUM t_lambda_362[] = {
  2, // locals
  0, // parameters
  // tabs_and_spaces(indent) str)
  var_tabs_and_spaces, 1, var_2775_5_indent, 1, LOCAL(1),
  // append(tabs_and_spaces(indent) str)
  var_append, 2, LOCAL(1), var_2777_4_str, 1, LOCAL(2),
  //  append(tabs_and_spaces(indent) str)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2793, 19),
  POS(2793, 12),
  POS(2793, 11)
};

static TAB_NUM t_lambda_363[] = {
  0, // locals
  0, // parameters
  //  str
  LET, 1, var_2777_4_str, TAIL_CALL,
  POS(2794, 11)
};

static TAB_NUM t_func_std_types__octet_string___to_uint8_array[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 2810_5_self
  // length_of(self))
  var_length_of, 1, LOCAL(2), 1, LOCAL(1),
  // $arr uint8_array(length_of(self))
  var_uint8_array, 1, LOCAL(1), 1, var_2812_4_arr,
  // for_each self
  var_for_each, 3, LOCAL(2), lambda_364, lambda_365, TAIL_CALL,
  POS(2812, 20),
  POS(2812, 3),
  POS(2813, 3)
};

static TAB_NUM t_lambda_364[] = {
  4, // locals
  2, // parameters
  LOCAL(3), // 2814_8_idx
  LOCAL(4), // 2814_12_chr
  // !arr(idx) chr.to_integer
  var_to_integer, 1, LOCAL(4), 1, LOCAL(2),
  // arr(idx) chr.to_integer
  var_2812_4_arr, 2, LOCAL(3), LOCAL(2), 1, var_2812_4_arr,
  // next
  var_next, 0, TAIL_CALL,
  POS(2815, 7),
  POS(2815, 8),
  POS(2816, 7)
};

static TAB_NUM t_lambda_365[] = {
  0, // locals
  0, // parameters
  //  arr
  LET, 1, var_2812_4_arr, TAIL_CALL,
  POS(2817, 7)
};

static TAB_NUM t_func_std__indented[] = {
  0, // locals
  2, // parameters
  var_2849_5_indent,
  var_2850_5_text,
  // $indented_text ""
  LET, 1, string_1, 1, var_2852_4_indented_text,
  // $new_indent undefined
  LET, 1, var_undefined, 1, var_2853_4_new_indent,
  // $i 1
  LET, 1, num_1, 1, var_2854_4_i,
  // $n length_of(text)
  var_length_of, 1, var_2850_5_text, 1, var_2855_4_n,
  // loop:
  var_loop, 1, lambda_21_loop, TAIL_CALL,
  POS(2852, 3),
  POS(2853, 3),
  POS(2854, 3),
  POS(2855, 3),
  POS(2856, 3)
};

static TAB_NUM t_lambda_21_loop[] = {
  2, // locals
  0, // parameters
  // !new_indent indent
  LET, 1, var_2849_5_indent, 1, var_2853_4_new_indent,
  // skip_indent !i !new_indent
  func_skip_indent, 0, 2, var_2854_4_i, var_2853_4_new_indent,
  // n:
  var_std__less, 2, var_2855_4_n, var_2854_4_i, 1, LOCAL(1),
  // n:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_366, lambda_374, TAIL_CALL,
  POS(2857, 5),
  POS(2858, 5),
  POS(2860, 12),
  POS(2860, 12),
  POS(2859, 5)
};

static TAB_NUM t_lambda_366[] = {
  2, // locals
  0, // parameters
  // text(i) == '@nl;':
  var_2850_5_text, 1, var_2854_4_i, 1, LOCAL(1),
  // text(i) == '@nl;':
  var_std__equal, 2, LOCAL(1), chr_10, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_367, lambda_368, TAIL_CALL,
  POS(2862, 11),
  POS(2862, 11),
  POS(2861, 9)
};

static TAB_NUM t_lambda_367[] = {
  0, // locals
  0, // parameters
  // push &indented_text '@nl;'
  var_push, 2, var_2852_4_indented_text, chr_10, 1, var_2852_4_indented_text,
  // !i i+1
  var_std__plus, 2, var_2854_4_i, num_1, 1, var_2854_4_i,
  // next
  var_next, 0, TAIL_CALL,
  POS(2863, 13),
  POS(2864, 13),
  POS(2865, 13)
};

static TAB_NUM t_lambda_368[] = {
  1, // locals
  0, // parameters
  // tabs_and_spaces(new_indent)
  var_tabs_and_spaces, 1, var_2853_4_new_indent, 1, LOCAL(1),
  // append &indented_text tabs_and_spaces(new_indent)
  var_append, 2, var_2852_4_indented_text, LOCAL(1), 1, var_2852_4_indented_text,
  // $s i
  LET, 1, var_2854_4_i, 1, var_2868_14_s,
  // loop
  var_loop, 2, lambda_369, var_next, TAIL_CALL,
  POS(2867, 35),
  POS(2867, 13),
  POS(2868, 13),
  POS(2869, 13)
};

static TAB_NUM t_lambda_369[] = {
  2, // locals
  0, // parameters
  // text(i) == '@nl;':
  var_2850_5_text, 1, var_2854_4_i, 1, LOCAL(1),
  // text(i) == '@nl;':
  var_std__equal, 2, LOCAL(1), chr_10, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_370, lambda_371, TAIL_CALL,
  POS(2872, 19),
  POS(2872, 19),
  POS(2871, 17)
};

static TAB_NUM t_lambda_370[] = {
  1, // locals
  0, // parameters
  // range(text s i)
  var_range, 3, var_2850_5_text, var_2868_14_s, var_2854_4_i, 1, LOCAL(1),
  // append &indented_text range(text s i)
  var_append, 2, var_2852_4_indented_text, LOCAL(1), 1, var_2852_4_indented_text,
  // !i i+1
  var_std__plus, 2, var_2854_4_i, num_1, 1, var_2854_4_i,
  // break
  var_break, 0, TAIL_CALL,
  POS(2873, 43),
  POS(2873, 21),
  POS(2874, 21),
  POS(2875, 21)
};

static TAB_NUM t_lambda_371[] = {
  1, // locals
  0, // parameters
  // i < n:
  var_std__less, 2, var_2854_4_i, var_2855_4_n, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_372, lambda_373, TAIL_CALL,
  POS(2878, 23),
  POS(2877, 21)
};

static TAB_NUM t_lambda_372[] = {
  0, // locals
  0, // parameters
  // !i i+1
  var_std__plus, 2, var_2854_4_i, num_1, 1, var_2854_4_i,
  // next
  var_next, 0, TAIL_CALL,
  POS(2879, 25),
  POS(2880, 25)
};

static TAB_NUM t_lambda_373[] = {
  1, // locals
  0, // parameters
  // range(text s -1)
  var_range, 3, var_2850_5_text, var_2868_14_s, minus_num_1, 1, LOCAL(1),
  // append indented_text range(text s -1)
  var_append, 2, var_2852_4_indented_text, LOCAL(1), TAIL_CALL,
  POS(2882, 46),
  POS(2882, 25)
};

static TAB_NUM t_lambda_374[] = {
  0, // locals
  0, // parameters
  //  indented_text
  LET, 1, var_2852_4_indented_text, TAIL_CALL,
  POS(2885, 9)
};

static TAB_NUM t_func_skip_indent[] = {
  2, // locals
  0, // parameters
  // n:
  var_std__less, 2, var_2855_4_n, var_2854_4_i, 1, LOCAL(1),
  // n:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_375, lambda_377, TAIL_CALL,
  POS(2889, 12),
  POS(2889, 12),
  POS(2888, 5)
};

static TAB_NUM t_lambda_375[] = {
  2, // locals
  0, // parameters
  // text(i) == '@ht;':
  var_2850_5_text, 1, var_2854_4_i, 1, LOCAL(1),
  // text(i) == '@ht;':
  var_std__equal, 2, LOCAL(1), chr_9, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_376, func_skip_spaces, TAIL_CALL,
  POS(2891, 11),
  POS(2891, 11),
  POS(2890, 9)
};

static TAB_NUM t_lambda_376[] = {
  0, // locals
  0, // parameters
  // !i i+1
  var_std__plus, 2, var_2854_4_i, num_1, 1, var_2854_4_i,
  // !new_indent new_indent+8
  var_std__plus, 2, var_2853_4_new_indent, num_8, 1, var_2853_4_new_indent,
  // skip_indent
  func_skip_indent, 0, TAIL_CALL,
  POS(2892, 13),
  POS(2893, 13),
  POS(2894, 13)
};

static TAB_NUM t_lambda_377[] = {
  0, // locals
  0, // parameters
  //  i new_indent
  LET, 2, var_2854_4_i, var_2853_4_new_indent, TAIL_CALL,
  POS(2896, 9)
};

static TAB_NUM t_func_skip_spaces[] = {
  3, // locals
  0, // parameters
  // n && text(i) == ' ':
  var_std__less, 2, var_2855_4_n, var_2854_4_i, 1, LOCAL(1),
  // n && text(i) == ' ':
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // n && text(i) == ' ':
  var_std__and, 2, LOCAL(2), lambda_378, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_379, lambda_380, TAIL_CALL,
  POS(2900, 12),
  POS(2900, 12),
  POS(2900, 12),
  POS(2899, 5)
};

static TAB_NUM t_lambda_378[] = {
  2, // locals
  0, // parameters
  // text(i) == ' ':
  var_2850_5_text, 1, var_2854_4_i, 1, LOCAL(1),
  // text(i) == ' ':
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // text(i) == ' ':
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2900, 17),
  POS(2900, 17),
  POS(2900, 17)
};

static TAB_NUM t_lambda_379[] = {
  0, // locals
  0, // parameters
  // !i i+1
  var_std__plus, 2, var_2854_4_i, num_1, 1, var_2854_4_i,
  // !new_indent new_indent+1
  var_std__plus, 2, var_2853_4_new_indent, num_1, 1, var_2853_4_new_indent,
  // skip_spaces
  func_skip_spaces, 0, TAIL_CALL,
  POS(2901, 9),
  POS(2902, 9),
  POS(2903, 9)
};

static TAB_NUM t_lambda_380[] = {
  0, // locals
  0, // parameters
  //  i new_indent
  LET, 2, var_2854_4_i, var_2853_4_new_indent, TAIL_CALL,
  POS(2904, 9)
};

static TAB_NUM t_func_std__format[] = {
  0, // locals
  -2, // parameters
  MANDATORY_PARAMETER, var_2939_5_template,
  REST_PARAMETER, var_2940_5_arguments,
  // $output ""
  LET, 1, string_1, 1, var_2942_4_output,
  // $arg_idx 1
  LET, 1, num_1, 1, var_2943_4_arg_idx,
  // $i 1
  LET, 1, num_1, 1, var_2944_4_i,
  // $n length_of(template)
  var_length_of, 1, var_2939_5_template, 1, var_2945_4_n,
  // loop:
  var_loop, 1, lambda_22_loop, TAIL_CALL,
  POS(2942, 3),
  POS(2943, 3),
  POS(2944, 3),
  POS(2945, 3),
  POS(2946, 3)
};

static TAB_NUM t_lambda_22_loop[] = {
  1, // locals
  0, // parameters
  // n
  var_std__less, 2, var_2945_4_n, var_2944_4_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_381, lambda_382, TAIL_CALL,
  POS(2948, 11),
  POS(2947, 5)
};

static TAB_NUM t_lambda_381[] = {
  0, // locals
  0, // parameters
  //  output
  LET, 1, var_2942_4_output, TAIL_CALL,
  POS(2949, 9)
};

static TAB_NUM t_lambda_382[] = {
  0, // locals
  0, // parameters
  // $chr template(i)
  var_2939_5_template, 1, var_2944_4_i, 1, var_2951_10_chr,
  // !i i+1
  var_std__plus, 2, var_2944_4_i, num_1, 1, var_2944_4_i,
  // case chr
  var_case, 6, var_2951_10_chr, chr_37, lambda_383, chr_92, lambda_410, lambda_413, TAIL_CALL,
  POS(2951, 9),
  POS(2952, 9),
  POS(2953, 9)
};

static TAB_NUM t_lambda_383[] = {
  1, // locals
  0, // parameters
  // n
  var_std__less, 2, var_2945_4_n, var_2944_4_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_384, lambda_385, TAIL_CALL,
  POS(2956, 19),
  POS(2955, 13)
};

static TAB_NUM t_lambda_384[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(2957, 17)
};

static TAB_NUM t_lambda_385[] = {
  2, // locals
  0, // parameters
  // template(i) $alignment !i
  var_2939_5_template, 1, var_2944_4_i, 1, LOCAL(1),
  // case template(i) $alignment !i
  var_case, 10, LOCAL(1), chr_48, lambda_386, chr_108, lambda_l, chr_114, lambda_r, chr_99, lambda_c, lambda_387, 2, var_2959_35_alignment, var_2944_4_i,
  // $len_chr template(i)
  var_2939_5_template, 1, var_2944_4_i, 1, var_2965_18_len_chr,
  // len_chr < '0' || len_chr > '9'
  var_std__less, 2, var_2965_18_len_chr, chr_48, 1, LOCAL(1),
  // len_chr < '0' || len_chr > '9'
  var_std__or, 2, LOCAL(1), lambda_388, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_389, lambda_390, TAIL_CALL,
  POS(2959, 22),
  POS(2959, 17),
  POS(2965, 17),
  POS(2967, 19),
  POS(2967, 19),
  POS(2966, 17)
};

static TAB_NUM t_lambda_386[] = {
  1, // locals
  0, // parameters
  // i+1
  var_std__plus, 2, var_2944_4_i, num_1, 1, LOCAL(1),
  //  ZEROS i+1
  LET, 2, uni_ZEROS, LOCAL(1), TAIL_CALL,
  POS(2960, 32),
  POS(2960, 25)
};

static TAB_NUM t_lambda_l[] = {
  1, // locals
  0, // parameters
  // i+1
  var_std__plus, 2, var_2944_4_i, num_1, 1, LOCAL(1),
  //  LEFT i+1
  LET, 2, uni_LEFT, LOCAL(1), TAIL_CALL,
  POS(2961, 31),
  POS(2961, 25)
};

static TAB_NUM t_lambda_r[] = {
  1, // locals
  0, // parameters
  // i+1
  var_std__plus, 2, var_2944_4_i, num_1, 1, LOCAL(1),
  //  RIGHT i+1
  LET, 2, uni_RIGHT, LOCAL(1), TAIL_CALL,
  POS(2962, 32),
  POS(2962, 25)
};

static TAB_NUM t_lambda_c[] = {
  1, // locals
  0, // parameters
  // i+1
  var_std__plus, 2, var_2944_4_i, num_1, 1, LOCAL(1),
  //  CENTER i+1
  LET, 2, uni_CENTER, LOCAL(1), TAIL_CALL,
  POS(2963, 33),
  POS(2963, 25)
};

static TAB_NUM t_lambda_387[] = {
  0, // locals
  0, // parameters
  //  RIGHT i
  LET, 2, uni_RIGHT, var_2944_4_i, TAIL_CALL,
  POS(2964, 21)
};

static TAB_NUM t_lambda_388[] = {
  1, // locals
  0, // parameters
  // 9'
  var_std__less, 2, chr_57, var_2965_18_len_chr, 1, LOCAL(1),
  // len_chr > '9'
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(2967, 47),
  POS(2967, 36)
};

static TAB_NUM t_lambda_389[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(2968, 21)
};

static TAB_NUM t_lambda_390[] = {
  0, // locals
  0, // parameters
  // $width len_chr-'0'
  var_std__minus, 2, var_2965_18_len_chr, chr_48, 1, var_2970_22_width,
  // loop
  var_loop, 2, lambda_391, lambda_395, TAIL_CALL,
  POS(2970, 21),
  POS(2971, 21)
};

static TAB_NUM t_lambda_391[] = {
  1, // locals
  0, // parameters
  // !i i+1
  var_std__plus, 2, var_2944_4_i, num_1, 1, var_2944_4_i,
  // n
  var_std__less, 2, var_2945_4_n, var_2944_4_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), var_break, lambda_392, TAIL_CALL,
  POS(2973, 25),
  POS(2975, 31),
  POS(2974, 25)
};

static TAB_NUM t_lambda_392[] = {
  2, // locals
  0, // parameters
  // $fmt_chr template(i)
  var_2939_5_template, 1, var_2944_4_i, 1, var_2978_30_fmt_chr,
  // fmt_chr < '0' || fmt_chr > '9'
  var_std__less, 2, var_2978_30_fmt_chr, chr_48, 1, LOCAL(1),
  // fmt_chr < '0' || fmt_chr > '9'
  var_std__or, 2, LOCAL(1), lambda_393, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), var_break, lambda_394, TAIL_CALL,
  POS(2978, 29),
  POS(2980, 31),
  POS(2980, 31),
  POS(2979, 29)
};

static TAB_NUM t_lambda_393[] = {
  1, // locals
  0, // parameters
  // 9'
  var_std__less, 2, chr_57, var_2978_30_fmt_chr, 1, LOCAL(1),
  // fmt_chr > '9'
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(2980, 59),
  POS(2980, 48)
};

static TAB_NUM t_lambda_394[] = {
  2, // locals
  0, // parameters
  // 10*width+(fmt_chr-'0')
  var_std__times, 2, num_10, var_2970_22_width, 1, LOCAL(1),
  // fmt_chr-'0')
  var_std__minus, 2, var_2978_30_fmt_chr, chr_48, 1, LOCAL(2),
  // !width 10*width+(fmt_chr-'0')
  var_std__plus, 2, LOCAL(1), LOCAL(2), 1, var_2970_22_width,
  // next
  var_next, 0, TAIL_CALL,
  POS(2983, 40),
  POS(2983, 50),
  POS(2983, 33),
  POS(2984, 33)
};

static TAB_NUM t_lambda_395[] = {
  1, // locals
  0, // parameters
  // n:
  var_std__less, 2, var_2945_4_n, var_2944_4_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_396, lambda_397, TAIL_CALL,
  POS(2987, 31),
  POS(2986, 25)
};

static TAB_NUM t_lambda_396[] = {
  0, // locals
  0, // parameters
  // add_argument alignment width
  func_add_argument, 2, var_2959_35_alignment, var_2970_22_width, TAIL_CALL,
  POS(2988, 29)
};

static TAB_NUM t_lambda_397[] = {
  2, // locals
  0, // parameters
  // template(i) == '.':
  var_2939_5_template, 1, var_2944_4_i, 1, LOCAL(1),
  // template(i) == '.':
  var_std__equal, 2, LOCAL(1), chr_46, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_398, lambda_409, TAIL_CALL,
  POS(2991, 31),
  POS(2991, 31),
  POS(2990, 29)
};

static TAB_NUM t_lambda_398[] = {
  1, // locals
  0, // parameters
  // !i i+1
  var_std__plus, 2, var_2944_4_i, num_1, 1, var_2944_4_i,
  // n
  var_std__less, 2, var_2945_4_n, var_2944_4_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_399, lambda_400, TAIL_CALL,
  POS(2992, 33),
  POS(2994, 39),
  POS(2993, 33)
};

static TAB_NUM t_lambda_399[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(2995, 37)
};

static TAB_NUM t_lambda_400[] = {
  2, // locals
  0, // parameters
  // $dw_chr template(i)
  var_2939_5_template, 1, var_2944_4_i, 1, var_2997_38_dw_chr,
  // dw_chr < '0' || dw_chr > '9'
  var_std__less, 2, var_2997_38_dw_chr, chr_48, 1, LOCAL(1),
  // dw_chr < '0' || dw_chr > '9'
  var_std__or, 2, LOCAL(1), lambda_401, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_402, lambda_403, TAIL_CALL,
  POS(2997, 37),
  POS(2999, 39),
  POS(2999, 39),
  POS(2998, 37)
};

static TAB_NUM t_lambda_401[] = {
  1, // locals
  0, // parameters
  // 9'
  var_std__less, 2, chr_57, var_2997_38_dw_chr, 1, LOCAL(1),
  // dw_chr > '9'
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(2999, 65),
  POS(2999, 55)
};

static TAB_NUM t_lambda_402[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(3000, 41)
};

static TAB_NUM t_lambda_403[] = {
  0, // locals
  0, // parameters
  // $dw dw_chr-'0'
  var_std__minus, 2, var_2997_38_dw_chr, chr_48, 1, var_3002_42_dw,
  // loop
  var_loop, 2, lambda_404, lambda_408, TAIL_CALL,
  POS(3002, 41),
  POS(3003, 41)
};

static TAB_NUM t_lambda_404[] = {
  1, // locals
  0, // parameters
  // !i i+1
  var_std__plus, 2, var_2944_4_i, num_1, 1, var_2944_4_i,
  // n
  var_std__less, 2, var_2945_4_n, var_2944_4_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), var_break, lambda_405, TAIL_CALL,
  POS(3005, 45),
  POS(3007, 51),
  POS(3006, 45)
};

static TAB_NUM t_lambda_405[] = {
  2, // locals
  0, // parameters
  // $fmt_chr template(i)
  var_2939_5_template, 1, var_2944_4_i, 1, var_3010_50_fmt_chr,
  // fmt_chr < '0' || fmt_chr > '9'
  var_std__less, 2, var_3010_50_fmt_chr, chr_48, 1, LOCAL(1),
  // fmt_chr < '0' || fmt_chr > '9'
  var_std__or, 2, LOCAL(1), lambda_406, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), var_break, lambda_407, TAIL_CALL,
  POS(3010, 49),
  POS(3012, 51),
  POS(3012, 51),
  POS(3011, 49)
};

static TAB_NUM t_lambda_406[] = {
  1, // locals
  0, // parameters
  // 9'
  var_std__less, 2, chr_57, var_3010_50_fmt_chr, 1, LOCAL(1),
  // fmt_chr > '9'
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(3012, 79),
  POS(3012, 68)
};

static TAB_NUM t_lambda_407[] = {
  2, // locals
  0, // parameters
  // 10*dw+(fmt_chr-'0')
  var_std__times, 2, num_10, var_3002_42_dw, 1, LOCAL(1),
  // fmt_chr-'0')
  var_std__minus, 2, var_3010_50_fmt_chr, chr_48, 1, LOCAL(2),
  // !dw 10*dw+(fmt_chr-'0')
  var_std__plus, 2, LOCAL(1), LOCAL(2), 1, var_3002_42_dw,
  // next
  var_next, 0, TAIL_CALL,
  POS(3015, 57),
  POS(3015, 64),
  POS(3015, 53),
  POS(3016, 53)
};

static TAB_NUM t_lambda_408[] = {
  0, // locals
  0, // parameters
  // add_argument alignment width dw
  func_add_argument, 3, var_2959_35_alignment, var_2970_22_width, var_3002_42_dw, TAIL_CALL,
  POS(3018, 45)
};

static TAB_NUM t_lambda_409[] = {
  0, // locals
  0, // parameters
  // add_argument alignment width
  func_add_argument, 2, var_2959_35_alignment, var_2970_22_width, TAIL_CALL,
  POS(3020, 33)
};

static TAB_NUM t_lambda_410[] = {
  1, // locals
  0, // parameters
  // n
  var_std__less, 2, var_2945_4_n, var_2944_4_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_411, lambda_412, TAIL_CALL,
  POS(3023, 19),
  POS(3022, 13)
};

static TAB_NUM t_lambda_411[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(3024, 17)
};

static TAB_NUM t_lambda_412[] = {
  1, // locals
  0, // parameters
  // template(i)
  var_2939_5_template, 1, var_2944_4_i, 1, LOCAL(1),
  // push &output template(i)
  var_push, 2, var_2942_4_output, LOCAL(1), 1, var_2942_4_output,
  // !i i+1
  var_std__plus, 2, var_2944_4_i, num_1, 1, var_2944_4_i,
  // next
  var_next, 0, TAIL_CALL,
  POS(3026, 30),
  POS(3026, 17),
  POS(3027, 17),
  POS(3028, 17)
};

static TAB_NUM t_lambda_413[] = {
  0, // locals
  0, // parameters
  // push &output chr
  var_push, 2, var_2942_4_output, var_2951_10_chr, 1, var_2942_4_output,
  // next
  var_next, 0, TAIL_CALL,
  POS(3030, 13),
  POS(3031, 13)
};

static TAB_NUM t_func_add_argument[] = {
  1, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_3063_7_alignment,
  MANDATORY_PARAMETER, var_3064_7_width,
  var_undefined, var_3065_7_decimal_width,
  // $argument arguments(arg_idx)
  var_2940_5_arguments, 1, var_2943_4_arg_idx, 1, var_3067_6_argument,
  // !arg_idx arg_idx+1
  var_std__plus, 2, var_2943_4_arg_idx, num_1, 1, var_2943_4_arg_idx,
  // is_defined:
  var_is_defined, 1, var_3065_7_decimal_width, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_decimal_width_is_defined, lambda_419, TAIL_CALL,
  POS(3067, 5),
  POS(3068, 5),
  POS(3070, 21),
  POS(3069, 5)
};

static TAB_NUM t_lambda_decimal_width_is_defined[] = {
  1, // locals
  0, // parameters
  // real_to_string &argument
  func_real_to_string, 1, var_3067_6_argument, 1, var_3067_6_argument,
  // $value argument .truncate_from. '.'
  var_truncate_from, 2, var_3067_6_argument, chr_46, 1, var_3072_10_value,
  // 0:
  var_std__less, 2, num_0, var_3065_7_decimal_width, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_414, lambda_417, TAIL_CALL,
  POS(3071, 9),
  POS(3072, 9),
  POS(3074, 27),
  POS(3073, 9)
};

static TAB_NUM t_lambda_414[] = {
  1, // locals
  0, // parameters
  // $decimals argument .behind. '.'
  var_behind, 2, var_3067_6_argument, chr_46, 1, var_3075_14_decimals,
  // pad_right &decimals decimal_width "0"
  var_pad_right, 3, var_3075_14_decimals, var_3065_7_decimal_width, string_14, 1, var_3075_14_decimals,
  // range &decimals 1 decimal_width
  var_range, 3, var_3075_14_decimals, num_1, var_3065_7_decimal_width, 1, var_3075_14_decimals,
  // alignment == ZEROS:
  var_std__equal, 2, var_3063_7_alignment, uni_ZEROS, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_415, lambda_416, TAIL_CALL,
  POS(3075, 13),
  POS(3076, 13),
  POS(3077, 13),
  POS(3079, 15),
  POS(3078, 13)
};

static TAB_NUM t_lambda_415[] = {
  1, // locals
  0, // parameters
  // pad_left(value width "0") "." decimals
  var_pad_left, 3, var_3072_10_value, var_3064_7_width, string_14, 1, LOCAL(1),
  // append &output pad_left(value width "0") "." decimals
  var_append, 4, var_2942_4_output, LOCAL(1), string_15, var_3075_14_decimals, 1, var_2942_4_output,
  // next
  var_next, 0, TAIL_CALL,
  POS(3080, 32),
  POS(3080, 17),
  POS(3081, 17)
};

static TAB_NUM t_lambda_416[] = {
  1, // locals
  0, // parameters
  // pad_left(value width) "." decimals
  var_pad_left, 2, var_3072_10_value, var_3064_7_width, 1, LOCAL(1),
  // append &output pad_left(value width) "." decimals
  var_append, 4, var_2942_4_output, LOCAL(1), string_15, var_3075_14_decimals, 1, var_2942_4_output,
  // next
  var_next, 0, TAIL_CALL,
  POS(3083, 32),
  POS(3083, 17),
  POS(3084, 17)
};

static TAB_NUM t_lambda_417[] = {
  1, // locals
  0, // parameters
  // case
  var_case, 6, var_3063_7_alignment, uni_LEFT, lambda_LEFT, uni_ZEROS, lambda_ZEROS, lambda_418, 1, LOCAL(1),
  // append &output
  var_append, 2, var_2942_4_output, LOCAL(1), 1, var_2942_4_output,
  // next
  var_next, 0, TAIL_CALL,
  POS(3087, 15),
  POS(3086, 13),
  POS(3092, 13)
};

static TAB_NUM t_lambda_LEFT[] = {
  1, // locals
  0, // parameters
  // pad_right(value width)
  var_pad_right, 2, var_3072_10_value, var_3064_7_width, 1, LOCAL(1),
  //  pad_right(value width)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(3089, 25),
  POS(3089, 24)
};

static TAB_NUM t_lambda_ZEROS[] = {
  1, // locals
  0, // parameters
  // pad_left(value width "0")
  var_pad_left, 3, var_3072_10_value, var_3064_7_width, string_14, 1, LOCAL(1),
  //  pad_left(value width "0")
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(3090, 26),
  POS(3090, 25)
};

static TAB_NUM t_lambda_418[] = {
  1, // locals
  0, // parameters
  // pad_left(argument value)
  var_pad_left, 2, var_3067_6_argument, var_3072_10_value, 1, LOCAL(1),
  //  pad_left(argument value)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(3091, 20),
  POS(3091, 19)
};

static TAB_NUM t_lambda_419[] = {
  1, // locals
  0, // parameters
  // case
  var_case, 6, var_3063_7_alignment, uni_LEFT, lambda_2_LEFT, uni_ZEROS, lambda_2_ZEROS, lambda_420, 1, LOCAL(1),
  // append &output
  var_append, 2, var_2942_4_output, LOCAL(1), 1, var_2942_4_output,
  // next
  var_next, 0, TAIL_CALL,
  POS(3095, 11),
  POS(3094, 9),
  POS(3100, 9)
};

static TAB_NUM t_lambda_2_LEFT[] = {
  1, // locals
  0, // parameters
  // pad_right(argument width)
  var_pad_right, 2, var_3067_6_argument, var_3064_7_width, 1, LOCAL(1),
  //  pad_right(argument width)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(3097, 21),
  POS(3097, 20)
};

static TAB_NUM t_lambda_2_ZEROS[] = {
  1, // locals
  0, // parameters
  // pad_left(argument width "0")
  var_pad_left, 3, var_3067_6_argument, var_3064_7_width, string_14, 1, LOCAL(1),
  //  pad_left(argument width "0")
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(3098, 22),
  POS(3098, 21)
};

static TAB_NUM t_lambda_420[] = {
  1, // locals
  0, // parameters
  // pad_left(argument width)
  var_pad_left, 2, var_3067_6_argument, var_3064_7_width, 1, LOCAL(1),
  //  pad_left(argument width)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(3099, 16),
  POS(3099, 15)
};

static TAB_NUM t_func_real_to_string[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 3102_19_num
  // $str num.to_string
  var_to_string, 1, LOCAL(1), 1, var_3103_4_str,
  // $n length_of(str)
  var_length_of, 1, var_3103_4_str, 1, var_3104_4_n,
  // $i n
  LET, 1, var_3104_4_n, 1, var_3105_4_i,
  // loop:
  var_loop, 1, lambda_23_loop, TAIL_CALL,
  POS(3103, 3),
  POS(3104, 3),
  POS(3105, 3),
  POS(3106, 3)
};

static TAB_NUM t_lambda_23_loop[] = {
  1, // locals
  0, // parameters
  // i == 0
  var_std__equal, 2, var_3105_4_i, num_0, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_421, lambda_422, TAIL_CALL,
  POS(3108, 7),
  POS(3107, 5)
};

static TAB_NUM t_lambda_421[] = {
  0, // locals
  0, // parameters
  //  str
  LET, 1, var_3103_4_str, TAIL_CALL,
  POS(3109, 9)
};

static TAB_NUM t_lambda_422[] = {
  2, // locals
  0, // parameters
  // str(i) == 'e'
  var_3103_4_str, 1, var_3105_4_i, 1, LOCAL(1),
  // str(i) == 'e'
  var_std__equal, 2, LOCAL(1), chr_101, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), func_2_handle_exponent, lambda_423, TAIL_CALL,
  POS(3112, 11),
  POS(3112, 11),
  POS(3111, 9)
};

static TAB_NUM t_lambda_423[] = {
  0, // locals
  0, // parameters
  // !i i-1
  var_std__minus, 2, var_3105_4_i, num_1, 1, var_3105_4_i,
  // next
  var_next, 0, TAIL_CALL,
  POS(3115, 13),
  POS(3116, 13)
};

static TAB_NUM t_func_2_handle_exponent[] = {
  3, // locals
  0, // parameters
  // i >= n || str(2) != '.'
  var_std__less, 2, var_3105_4_i, var_3104_4_n, 1, LOCAL(1),
  // i >= n || str(2) != '.'
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // i >= n || str(2) != '.'
  var_std__or, 2, LOCAL(2), lambda_424, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_425, lambda_426, TAIL_CALL,
  POS(3120, 7),
  POS(3120, 7),
  POS(3120, 7),
  POS(3119, 5)
};

static TAB_NUM t_lambda_424[] = {
  3, // locals
  0, // parameters
  // str(2) != '.'
  var_3103_4_str, 1, num_2, 1, LOCAL(1),
  // str(2) != '.'
  var_std__equal, 2, LOCAL(1), chr_46, 1, LOCAL(2),
  // str(2) != '.'
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // str(2) != '.'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(3120, 17),
  POS(3120, 17),
  POS(3120, 17),
  POS(3120, 17)
};

static TAB_NUM t_lambda_425[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(3121, 9)
};

static TAB_NUM t_lambda_426[] = {
  3, // locals
  0, // parameters
  // i+2 n).to_integer
  var_std__plus, 2, var_3105_4_i, num_2, 1, LOCAL(1),
  // range(str i+2 n).to_integer
  var_range, 3, var_3103_4_str, LOCAL(1), var_3104_4_n, 1, LOCAL(2),
  // $exp range(str i+2 n).to_integer
  var_to_integer, 1, LOCAL(2), 1, var_3123_10_exp,
  // i-1) str(1))
  var_std__minus, 2, var_3105_4_i, num_1, 1, LOCAL(1),
  // range(str 3 i-1) str(1))
  var_range, 3, var_3103_4_str, num_3, LOCAL(1), 1, LOCAL(2),
  // str(1))
  var_3103_4_str, 1, num_1, 1, LOCAL(3),
  // $man put(range(str 3 i-1) str(1))
  var_put, 2, LOCAL(2), LOCAL(3), 1, var_3124_10_man,
  // is_undefined
  var_is_undefined, 1, var_3123_10_exp, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_427, lambda_428, TAIL_CALL,
  POS(3123, 24),
  POS(3123, 14),
  POS(3123, 9),
  POS(3124, 30),
  POS(3124, 18),
  POS(3124, 35),
  POS(3124, 9),
  POS(3126, 15),
  POS(3125, 9)
};

static TAB_NUM t_lambda_427[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(3127, 13)
};

static TAB_NUM t_lambda_428[] = {
  2, // locals
  0, // parameters
  // exp-1)
  var_std__minus, 2, var_3123_10_exp, num_1, 1, LOCAL(1),
  // $zeros dup("0" exp-1)
  var_dup, 2, string_14, LOCAL(1), 1, var_3129_14_zeros,
  // i+1)
  var_std__plus, 2, var_3105_4_i, num_1, 1, LOCAL(1),
  // str(i+1)
  var_3103_4_str, 1, LOCAL(1), 1, LOCAL(2),
  // case str(i+1)
  var_case, 6, LOCAL(2), chr_43, lambda_429, chr_45, lambda_430, lambda_431, TAIL_CALL,
  POS(3129, 28),
  POS(3129, 13),
  POS(3130, 22),
  POS(3130, 18),
  POS(3130, 13)
};

static TAB_NUM t_lambda_429[] = {
  1, // locals
  0, // parameters
  // append(man zeros)
  var_append, 2, var_3124_10_man, var_3129_14_zeros, 1, LOCAL(1),
  // -> append(man zeros)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(3132, 20),
  POS(3132, 17)
};

static TAB_NUM t_lambda_430[] = {
  2, // locals
  0, // parameters
  // append(zeros man))
  var_append, 2, var_3129_14_zeros, var_3124_10_man, 1, LOCAL(1),
  // append("0." append(zeros man))
  var_append, 2, string_16, LOCAL(1), 1, LOCAL(2),
  // -> append("0." append(zeros man))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(3134, 32),
  POS(3134, 20),
  POS(3134, 17)
};

static TAB_NUM t_lambda_431[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(3135, 17)
};

static int value_range_1380_11_arguments[] = {
  -num_0, -num_25
};

static int value_range_1383_11_arguments[] = {
  -num_26, -num_51
};

static int value_range_1386_11_arguments[] = {
  -num_52, -num_61
};

static int value_range_1455_8_arguments[] = {
  -chr_65, -chr_90
};

static int value_range_1456_8_arguments[] = {
  -chr_97, -chr_122
};

static int value_range_1457_8_arguments[] = {
  -chr_48, -chr_57
};

static int value_range_1657_14_arguments[] = {
  -chr_48, -chr_49
};

static int value_range_1668_14_arguments[] = {
  -chr_48, -chr_55
};

static int value_range_1682_14_arguments[] = {
  -chr_97, -chr_102
};

static int value_range_1685_14_arguments[] = {
  -chr_65, -chr_70
};

static int sequence_1769_14_arguments[] = {
  -chr_101, -chr_69
};

static int tuple_2521_1_arguments[] = {
  -var_undefined, -var_undefined
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
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__object___pad_left}},
  {FLT_STRING_8, 1, {.str_8 = " "}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_8}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_9}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__object___pad_right}},
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
  {FLT_FUNCTION, 0, {.tfunc = t_func_fail}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_34}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_35}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__string___match_back}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_36}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_37}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_38}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__string___matches}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__string___search}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_39}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_40}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_search_forwards}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_41}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_42}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_43}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_44}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_45}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_46}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_search_backwards}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_47}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_48}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_49}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_50}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_51}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_52}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__string___before}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_53}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_54}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__string___truncate_from}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_55}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_56}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__string___behind}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_57}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_58}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__string___truncate_until}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_59}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_60}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__string___from}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_61}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_62}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__string___truncate_before}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_63}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_64}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__string___until}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_65}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_66}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__string___truncate_behind}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_67}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_68}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__string___between}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__string___has_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__string___has_suffix}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__string___without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_69}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_70}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__string___without_suffix}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_71}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_72}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__string___contains}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__split}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_73}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_74}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_pos_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_75}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_76}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_77}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__join}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_78}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__trim}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_3_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_79}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_80}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_81}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_4_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_82}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_83}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_84}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__trim_left}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_5_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_85}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_86}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_87}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__trim_right}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_6_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_88}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_89}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_90}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__normalize}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_7_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_91}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_92}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_93}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_94}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_95}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_96}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_97}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_98}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_99}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__octet_string___to_base64}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_8_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_100}},
  {FLT_POSITIVE_INT64, 0, {.value = 4}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_101}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_102}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_103}},
  {FLT_STRING_8, 1, {.str_8 = "\000"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_104}},
  {FLT_NEGATIVE_INT64, 0, {.value = 3}},
  {FLT_STRING_8, 2, {.str_8 = "=="}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_105}},
  {FLT_NEGATIVE_INT64, 0, {.value = 2}},
  {FLT_CHARACTER, 0, {.value = 61}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_encode}},
  {FLT_POSITIVE_INT64, 0, {.value = 16}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_106}},
  {FLT_POSITIVE_INT64, 0, {.value = 18}},
  {FLT_POSITIVE_INT64, 0, {.value = 0x3ffff}},
  {FLT_POSITIVE_INT64, 0, {.value = 6}},
  {FLT_POSITIVE_INT64, 0, {.value = 25}},
  {FLT_VALUE_RANGE, 2, {.arguments = value_range_1380_11_arguments}},
  {FLT_POSITIVE_INT64, 0, {.value = 26}},
  {FLT_POSITIVE_INT64, 0, {.value = 51}},
  {FLT_VALUE_RANGE, 2, {.arguments = value_range_1383_11_arguments}},
  {FLT_POSITIVE_INT64, 0, {.value = 52}},
  {FLT_POSITIVE_INT64, 0, {.value = 61}},
  {FLT_VALUE_RANGE, 2, {.arguments = value_range_1386_11_arguments}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_107}},
  {FLT_CHARACTER, 0, {.value = 65}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_108}},
  {FLT_CHARACTER, 0, {.value = 97}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_109}},
  {FLT_CHARACTER, 0, {.value = 48}},
  {FLT_POSITIVE_INT64, 0, {.value = 62}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_110}},
  {FLT_CHARACTER, 0, {.value = 43}},
  {FLT_POSITIVE_INT64, 0, {.value = 63}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_111}},
  {FLT_CHARACTER, 0, {.value = 47}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_112}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__octet_string___from_base64}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_113}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_114}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_9_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_115}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_116}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_117}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_118}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_119}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_120}},
  {FLT_POSITIVE_INT64, 0, {.value = 0xff}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_121}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_122}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_123}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_124}},
  {FLT_POSITIVE_INT64, 0, {.value = 5}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_decode}},
  {FLT_CHARACTER, 0, {.value = 90}},
  {FLT_VALUE_RANGE, 2, {.arguments = value_range_1455_8_arguments}},
  {FLT_CHARACTER, 0, {.value = 122}},
  {FLT_VALUE_RANGE, 2, {.arguments = value_range_1456_8_arguments}},
  {FLT_CHARACTER, 0, {.value = 57}},
  {FLT_VALUE_RANGE, 2, {.arguments = value_range_1457_8_arguments}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_125}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_126}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_127}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_128}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_129}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_130}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_131}},
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
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_132}},
  {FLT_POSITIVE_INT64, 0, {.value = 64}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_10_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_message_is_empty}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_133}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_134}},
  {FLT_POSITIVE_INT64, 0, {.value = 24}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_135}},
  {FLT_POSITIVE_INT64, 0, {.value = 17}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_136}},
  {FLT_POSITIVE_INT64, 0, {.value = 14}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_main_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_137}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_138}},
  {FLT_POSITIVE_INT64, 0, {.value = 20}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_139}},
  {FLT_POSITIVE_INT64, 0, {.value = 0xffffffff}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_140}},
  {FLT_POSITIVE_INT64, 0, {.value = 40}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_141}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_142}},
  {FLT_POSITIVE_INT64, 0, {.value = 60}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_143}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_144}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_145}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_compute}},
  {FLT_POSITIVE_INT64, 0, {.value = 30}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_146}},
  {FLT_POSITIVE_INT64, 0, {.value = 65}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_big_endian_string_64}},
  {FLT_POSITIVE_INT64, 0, {.value = 48}},
  {FLT_POSITIVE_INT64, 0, {.value = 32}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_big_endian_string_32}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_rol32}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__parse_integer}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_maybe_negated}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_147}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_148}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_partial_match}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_149}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_150}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_exhausted}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_151}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_152}},
  {FLT_CHARACTER, 0, {.value = 45}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_153}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_154}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_155}},
  {FLT_STRING_8, 2, {.str_8 = "0b"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_156}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_157}},
  {FLT_CHARACTER, 0, {.value = 49}},
  {FLT_VALUE_RANGE, 2, {.arguments = value_range_1657_14_arguments}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_158}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_159}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_160}},
  {FLT_STRING_8, 2, {.str_8 = "0o"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_161}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_162}},
  {FLT_CHARACTER, 0, {.value = 55}},
  {FLT_VALUE_RANGE, 2, {.arguments = value_range_1668_14_arguments}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_163}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_164}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_165}},
  {FLT_STRING_8, 2, {.str_8 = "0x"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_166}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_167}},
  {FLT_CHARACTER, 0, {.value = 102}},
  {FLT_VALUE_RANGE, 2, {.arguments = value_range_1682_14_arguments}},
  {FLT_CHARACTER, 0, {.value = 70}},
  {FLT_VALUE_RANGE, 2, {.arguments = value_range_1685_14_arguments}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_168}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_a__f}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_A__F}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_169}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_170}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_171}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_172}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_173}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_174}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__parse_number}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_175}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_176}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_177}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_178}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_179}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_180}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_181}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_182}},
  {FLT_CHARACTER, 0, {.value = 98}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_b}},
  {FLT_CHARACTER, 0, {.value = 111}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_o}},
  {FLT_CHARACTER, 0, {.value = 120}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_x}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_skip_one_ore_more_digits}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_183}},
  {FLT_CHARACTER, 0, {.value = 101}},
  {FLT_CHARACTER, 0, {.value = 69}},
  {FLT_SEQUENCE, 2, {.arguments = sequence_1769_14_arguments}},
  {FLT_CHARACTER, 0, {.value = 46}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_184}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2_skip_one_ore_more_digits}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_185}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_skip_one_ore_more_digits}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_186}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_187}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_188}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_189}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_190}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_11_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_191}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_192}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_handle_exponent}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_193}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_194}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_195}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_196}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_return_integer}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_return_real}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_binary}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_197}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_198}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_199}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_200}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_201}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_12_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_202}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_203}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_204}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_205}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_206}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_octal}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_207}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_208}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_209}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_210}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_211}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_13_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_212}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_213}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_214}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_215}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_216}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__parse_hex}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_217}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_218}},
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
  {FLT_FUNCTION, 0, {.tfunc = t_func_handle_more_digits}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_14_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_230}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_231}},
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
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__string___to_integer}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_243}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_244}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__string___to_number}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_245}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_246}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__map_characters}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_247}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_248}},
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
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__string___to_upper_case}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__string___to_lower_case}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__string___to_title_case}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_259}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_260}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_261}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_262}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__string___to_sentence_case}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_263}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_264}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_265}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_266}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__string___to_wide}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__delete_all}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_delete_all}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_267}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_268}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_269}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_270}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_271}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__replace_all}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_replace_all}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_272}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_273}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_274}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_275}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_replacement_is_a_string}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_276}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_277}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__replace_first}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_replace_first}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_278}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_279}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_280}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_281}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_282}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_283}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__count_occurrences}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_search_next}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_284}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_285}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_n_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_286}},
  {FLT_POSITIVE_INT64, 0, {.value = 300}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__split_into_lines}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_15_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_287}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_288}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_289}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_290}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_291}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_292}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__split_into_indented_lines}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_split}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_293}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_294}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_295}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_296}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_297}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_298}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_299}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_ls_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_300}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_301}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_302}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_303}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_16_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_304}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_305}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_create_line}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_17_loop}},
  {FLT_CHARACTER, 0, {.value = 9}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_306}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_307}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_308}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_309}},
  {FLT_STRING_8, 1, {.str_8 = "\012"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_310}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_311}},
  {FLT_POSITIVE_INT64, 0, {.value = 9999}},
  {FLT_TUPLE, 2, {.arguments = tuple_2521_1_arguments}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_line_indent_of}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_312}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_313}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__split_into_groups}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_18_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_314}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_indent_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_315}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_316}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_317}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_318}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_319}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_2_split}},
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
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_group_start_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_19_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_330}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_331}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_332}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_333}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_334}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_335}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_336}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_add_groups}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_337}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_338}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_add}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_339}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_340}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_341}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_342}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_reduce_minimum_indent_and_next}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_343}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_344}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_start_new_fragment_and_next}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__wrap_words}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_20_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_345}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_346}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_347}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_348}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_nl}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_349}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_350}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_351}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_352}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_353}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_354}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_b_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_355}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__string___serialize}},
  {FLT_STRING_8, 1, {.str_8 = "\042"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_356}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_357}},
  {FLT_CHARACTER, 0, {.value = 126}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_358}},
  {FLT_CHARACTER, 0, {.value = 34}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_359}},
  {FLT_CHARACTER, 0, {.value = 64}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_360}},
  {FLT_STRING_8, 1, {.str_8 = "@"}},
  {FLT_STRING_8, 1, {.str_8 = ";"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_361}},
  {FLT_STRING_8, 2, {.str_8 = "\042\012"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_362}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_363}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__octet_string___to_uint8_array}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_364}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_365}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__indented}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_21_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_366}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_367}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_368}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_369}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_370}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_371}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_372}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_373}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_374}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_skip_indent}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_375}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_376}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_377}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_skip_spaces}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_378}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_379}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_380}},
  {FLT_UNIQUE, 0, {.str_8 = "LEFT"}},
  {FLT_UNIQUE, 0, {.str_8 = "RIGHT"}},
  {FLT_UNIQUE, 0, {.str_8 = "CENTER"}},
  {FLT_UNIQUE, 0, {.str_8 = "ZEROS"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__format}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_22_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_381}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_382}},
  {FLT_CHARACTER, 0, {.value = 37}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_383}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_384}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_385}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_386}},
  {FLT_CHARACTER, 0, {.value = 108}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_l}},
  {FLT_CHARACTER, 0, {.value = 114}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_r}},
  {FLT_CHARACTER, 0, {.value = 99}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_c}},
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
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_407}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_408}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_409}},
  {FLT_CHARACTER, 0, {.value = 92}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_410}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_411}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_412}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_413}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_add_argument}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_decimal_width_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_414}},
  {FLT_STRING_8, 1, {.str_8 = "0"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_415}},
  {FLT_STRING_8, 1, {.str_8 = "."}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_416}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_417}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_LEFT}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_ZEROS}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_418}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_419}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2_LEFT}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2_ZEROS}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_420}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_real_to_string}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_23_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_421}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_422}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_423}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_2_handle_exponent}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_424}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_425}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_426}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_427}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_428}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_429}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_430}},
  {FLT_STRING_8, 2, {.str_8 = "0."}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_431}}
};

static ATTRIBUTE_DEFINITION std_types__object__attributes[] = {
  {-var_is_a_string, -var_false},
  {-var_is_an_octet_string, -var_false},
  {var_pad_left, -func_std_types__object___pad_left},
  {var_pad_right, -func_std_types__object___pad_right}
};

static ATTRIBUTE_DEFINITION std_types__string__attributes[] = {
  {-var_is_a_string, -var_true},
  {-var_neutral_element_of, -string_1},
  {var_to_string, -func_std_types__string___to_string},
  {var_put, -func_std_types__string___put},
  {var_dup, -func_std_types__string___dup},
  {var_match, -func_std_types__string___match},
  {var_match_back, -func_std_types__string___match_back},
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

static ATTRIBUTE_DEFINITION std_types__line__attributes[] = {
  {-var_subgroups_of, -var_undefined}
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
    {.position = POS(47, 1)}
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
    FOT_UNKNOWN, 0, 4,
    "object\000std_types", std_types__object__attributes,
    {.position = POS(82, 1)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "is_a_string\000", NULL,
    {.position = POS(82, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "false\000", NULL,
    {.position = POS(82, 32)}
  },
  {
    FOT_UNKNOWN, 0, 32,
    "string\000std_types", std_types__string__attributes,
    {.position = POS(88, 1)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "true\000", NULL,
    {.position = POS(88, 32)}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "is_an_octet_string\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "is_an_octet_string\000", NULL,
    {.position = POS(100, 20)}
  },
  {
    FOT_UNKNOWN, 0, 5,
    "octet_string\000std_types", std_types__octet_string__attributes,
    {.position = POS(106, 1)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "neutral_element_of\000", NULL,
    {.position = POS(112, 20)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "to_string\000", NULL,
    {.position = POS(114, 20)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "create_string\000std", NULL,
    {.const_idx = -func_std__create_string}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "143_5_arguments\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_empty\000", NULL,
    {.position = POS(146, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "append\000", NULL,
    {.position = POS(148, 38)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "map_reduce\000", NULL,
    {.position = POS(148, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if\000", NULL,
    {.position = POS(145, 3)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "string\000std", NULL,
    {.const_idx = -func_std__string}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "create_string\000", NULL,
    {.position = POS(164, 3)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "put\000", NULL,
    {.position = POS(166, 20)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "dup\000", NULL,
    {.position = POS(184, 20)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "204_5_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "205_5_n\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "shift_right\000std", NULL,
    {.position = POS(211, 10)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "212_8_str\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "times\000std", NULL,
    {.position = POS(214, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "equal\000std", NULL,
    {.position = POS(214, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "string\000", NULL,
    {.position = POS(215, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "case\000", NULL,
    {.position = POS(207, 3)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "pad_left\000", NULL,
    {.position = POS(219, 20)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "244_5_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "245_5_pad\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "247_4_text\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "248_4_len\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "length_of\000", NULL,
    {.position = POS(248, 8)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "less\000std", NULL,
    {.position = POS(250, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "minus\000std", NULL,
    {.position = POS(252, 29)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000std", NULL,
    {.position = POS(252, 29)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "div\000", NULL,
    {.position = POS(252, 28)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "range\000", NULL,
    {.position = POS(252, 14)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "pad_right\000", NULL,
    {.position = POS(255, 20)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "280_5_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "281_5_pad\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "283_4_text\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "284_4_len\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "spaces\000std", NULL,
    {.const_idx = -func_std__spaces}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "303_5_n\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not\000std", NULL,
    {.position = POS(306, 10)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "tabs_and_spaces\000std", NULL,
    {.const_idx = -func_std__tabs_and_spaces}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "320_5_n\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "bit_and\000std", NULL,
    {.position = POS(324, 56)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "spaces\000", NULL,
    {.position = POS(325, 34)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "with_tabs\000std", NULL,
    {.const_idx = -func_std__with_tabs}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "340_5_text\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "342_4_s\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "343_4_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "344_4_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "345_4_output\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "346_4_count\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "next\000", NULL,
    {.position = POS(354, 13)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "358_18_tab_count\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "shift_left\000std", NULL,
    {.position = POS(367, 35)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "loop\000", NULL,
    {.position = POS(347, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "and\000std", NULL,
    {.position = POS(381, 16)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "break\000", NULL,
    {.position = POS(384, 11)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "match\000", NULL,
    {.position = POS(391, 20)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "407_5_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "408_5_stream\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "410_4_rc\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "result_count\000", NULL,
    {.position = POS(410, 7)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "411_4_len\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "undefined\000", NULL,
    {.position = POS(419, 20)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "match_back\000", NULL,
    {.position = POS(429, 20)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "431_5_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "432_5_stream\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "434_4_len\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "negate\000std", NULL,
    {.position = POS(436, 47)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "matches\000", NULL,
    {.position = POS(440, 20)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "search\000", NULL,
    {.position = POS(453, 20)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "470_5_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "471_5_stream\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "472_5_nth\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "474_4_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "475_4_length\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "476_4_offset\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "477_4_n\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "dec\000", NULL,
    {.position = POS(494, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000", NULL,
    {.position = POS(495, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "inc\000", NULL,
    {.position = POS(499, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "minus\000", NULL,
    {.position = POS(512, 17)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "before\000", NULL,
    {.position = POS(520, 20)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "558_5_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "562_11_pos\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_defined\000", NULL,
    {.position = POS(564, 9)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "truncate_from\000", NULL,
    {.position = POS(569, 20)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "608_5_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "612_11_pos\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "behind\000", NULL,
    {.position = POS(618, 20)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "656_5_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "660_11_pos\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "660_16_len\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "truncate_until\000", NULL,
    {.position = POS(666, 20)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "705_5_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "709_11_pos\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "709_16_len\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "from\000", NULL,
    {.position = POS(715, 20)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "754_5_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "758_11_pos\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "truncate_before\000", NULL,
    {.position = POS(764, 20)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "803_5_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "807_11_pos\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "until\000", NULL,
    {.position = POS(813, 20)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "851_5_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "855_11_pos\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "855_16_len\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "truncate_behind\000", NULL,
    {.position = POS(861, 20)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "900_5_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "904_11_pos\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "904_16_len\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "between\000", NULL,
    {.position = POS(910, 20)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "has_prefix\000", NULL,
    {.position = POS(943, 20)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "has_suffix\000", NULL,
    {.position = POS(965, 20)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "without_prefix\000", NULL,
    {.position = POS(987, 20)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1008_5_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1011_4_n\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "without_suffix\000", NULL,
    {.position = POS(1017, 20)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1038_5_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1041_4_n\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "contains\000", NULL,
    {.position = POS(1047, 20)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "split\000std", NULL,
    {.const_idx = -func_std__split}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1110_5_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1111_5_separator\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1113_4_rc\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_list\000", NULL,
    {.position = POS(1116, 8)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1118_8_items\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1120_17_pos\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1120_22_len\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "push\000", NULL,
    {.position = POS(1123, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "spread\000", NULL,
    {.position = POS(1132, 17)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "join\000std", NULL,
    {.const_idx = -func_std__join}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1158_5_separator\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "trim\000std", NULL,
    {.const_idx = -func_std__trim}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1187_5_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1188_5_test\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_a_whitespace_character\000", NULL,
    {.position = POS(1188, 12)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1190_4_s\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1191_4_e\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "trim_left\000std", NULL,
    {.const_idx = -func_std__trim_left}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1227_5_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1228_5_test\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1230_4_s\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1231_4_e\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "trim_right\000std", NULL,
    {.const_idx = -func_std__trim_right}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1261_5_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1262_5_test\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1264_4_e\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "normalize\000std", NULL,
    {.const_idx = -func_std__normalize}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1295_5_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1297_4_buf\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1298_4_e\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1299_4_i\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_not_empty\000", NULL,
    {.position = POS(1313, 23)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "update_if\000", NULL,
    {.position = POS(1313, 9)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1314_10_s\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "to_base64\000", NULL,
    {.position = POS(1330, 26)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1346_5_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1348_4_base64\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1350_6_len\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "to_integer\000", NULL,
    {.position = POS(1371, 25)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "bit_or\000std", NULL,
    {.position = POS(1370, 8)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1369_6_bits\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1374_6_buf\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1377_10_value\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "value_range\000std", NULL,
    {.position = POS(1380, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "repeat\000", NULL,
    {.position = POS(1375, 5)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "from_base64\000", NULL,
    {.position = POS(1397, 26)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1416_5_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1418_4_octets\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "mod\000", NULL,
    {.position = POS(1420, 6)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1428_14_bits\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1431_18_value\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_undefined\000", NULL,
    {.position = POS(1433, 25)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "character\000", NULL,
    {.position = POS(1439, 30)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "from_to\000", NULL,
    {.position = POS(1429, 13)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1452_13_chr\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "sha1\000", NULL,
    {.position = POS(1463, 26)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1478_5_message\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1482_4_h0\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1483_4_h1\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1484_4_h2\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1485_4_h3\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1486_4_h4\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1507_4_pad_len\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1525_10_w\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "uint32_array\000", NULL,
    {.position = POS(1525, 12)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "bit_xor\000std", NULL,
    {.position = POS(1538, 23)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1543_12_a\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1544_12_b\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1545_12_c\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1546_12_d\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1547_12_e\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1549_16_i\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "cond\000", NULL,
    {.position = POS(1550, 15)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "parse_integer\000std", NULL,
    {.const_idx = -func_std__parse_integer}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1622_5_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1643_4_negate\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1649_4_value\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1630_20_idx\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1642_4_orig\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1654_12_idx\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1654_16_chr\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "for_each\000", NULL,
    {.position = POS(1653, 7)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1666_12_idx\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1666_16_chr\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1677_12_idx\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1677_16_chr\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1693_12_idx\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1693_16_chr\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "parse_number\000std", NULL,
    {.const_idx = -func_std__parse_number}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1729_5_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1731_4_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1732_4_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1737_8_sign_chr\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "or\000std", NULL,
    {.position = POS(1738, 17)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1739_8_sign\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "parse_hex\000", NULL,
    {.position = POS(1749, 18)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "sequence\000std", NULL,
    {.position = POS(1769, 14)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1772_33_cont\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1777_12_digit\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1788_22_next_digit\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1800_12_exp_sign_chr\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "integer\000", NULL,
    {.position = POS(1804, 41)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "real\000", NULL,
    {.position = POS(1806, 38)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1808_17_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1808_21_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1808_23_sign\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1809_4_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1813_8_digit\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1818_12_value\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1825_18_next_digit\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1832_16_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1832_20_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1832_22_sign\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1833_4_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1837_8_digit\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1842_12_value\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1849_18_next_digit\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "parse_hex\000std", NULL,
    {.const_idx = -func_std__parse_hex}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1884_5_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1885_5_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1886_5_sign\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1888_4_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1892_8_digit\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1902_29_value\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1909_16_next_digit\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1958_24_value\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "parse_integer\000", NULL,
    {.position = POS(1958, 3)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "to_number\000", NULL,
    {.position = POS(1964, 20)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2000_23_value\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "parse_number\000", NULL,
    {.position = POS(2000, 3)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "map_characters\000std", NULL,
    {.const_idx = -func_std__map_characters}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2027_5_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2028_5_function\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "parameter_count_of\000", NULL,
    {.position = POS(2032, 7)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2034_12_s\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2034_14_e\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2030_4_map\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2047_12_s\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2047_14_e\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "to_upper_case\000", NULL,
    {.position = POS(2062, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "map_characters\000", NULL,
    {.position = POS(2082, 3)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "to_lower_case\000", NULL,
    {.position = POS(2084, 20)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "to_title_case\000", NULL,
    {.position = POS(2106, 20)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2124_5_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2126_25_idx\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2126_29_chr\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_a_letter_character\000", NULL,
    {.position = POS(2128, 30)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "to_sentence_case\000", NULL,
    {.position = POS(2132, 20)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2150_5_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2152_25_idx\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2152_29_chr\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "to_wide\000", NULL,
    {.position = POS(2158, 20)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "delete_all\000std", NULL,
    {.const_idx = -func_std__delete_all}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2183_5_expressions\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2185_17_txt\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2199_4_new_text\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2192_14_len\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if_not\000", NULL,
    {.position = POS(2193, 13)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "replace_all\000std", NULL,
    {.const_idx = -func_std__replace_all}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2224_5_args\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2226_18_txt\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2247_4_new_text\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2233_30_replacement\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2234_14_len\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "replace_first\000std", NULL,
    {.const_idx = -func_std__replace_first}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2272_5_args\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2274_20_txt\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2294_4_new_text\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2281_30_replacement\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2282_14_len\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "update_if_not\000", NULL,
    {.position = POS(2287, 17)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "count_occurrences\000std", NULL,
    {.const_idx = -func_std__count_occurrences}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2317_5_expr\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2319_18_txt\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2319_22_count\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2324_10_n\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "split_into_lines\000std", NULL,
    {.const_idx = -func_std__split_into_lines}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2375_26_text\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2376_4_lines\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2377_4_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2378_4_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2379_4_s\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "split_into_indented_lines\000std", NULL,
    {.const_idx = -func_std__split_into_indented_lines}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2458_5_text\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2463_12_s\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2463_14_e\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2469_10_lines\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2470_10_ls\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2476_14_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2497_18_s\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2497_20_e\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2498_6_indent\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2512_16_line_text\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 1,
    "line\000std_types", std_types__line__attributes,
    {.const_idx = -tuple_2521_1}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "typed_tuple\000", NULL,
    {.position = POS(2516, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "tuple\000", NULL,
    {.position = POS(2521, 18)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "subgroups_of\000", NULL,
    {.position = POS(2522, 18)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2524_19_line\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "first\000", NULL,
    {.position = POS(2527, 8)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "split_into_groups\000std", NULL,
    {.const_idx = -func_std__split_into_groups}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2581_5_lines\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2582_5_keep_empty_lines\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2584_4_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2585_4_fv\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2589_10_indent\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "list\000", NULL,
    {.position = POS(2594, 29)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2601_12_s\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2601_14_e\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2601_16_indent\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2607_10_groups\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2608_10_minimum_indent\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2609_10_group_start\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2610_10_group_end\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2612_14_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2613_14_current_indent\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2634_24_current_indent\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2643_23_last\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2643_28_curr_idx\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2663_43_current_indent\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "wrap_words\000std", NULL,
    {.const_idx = -func_std__wrap_words}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2703_5_text\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2704_5_width\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2707_4_lines\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2708_4_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2709_4_s\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2710_4_b\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2711_4_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2721_10_chr\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "serialize\000", NULL,
    {.position = POS(2756, 20)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2774_5_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2775_5_indent\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2777_4_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2778_4_s\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2780_8_idx\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2780_12_chr\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "tabs_and_spaces\000", NULL,
    {.position = POS(2793, 19)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "to_uint8_array\000", NULL,
    {.position = POS(2796, 26)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2812_4_arr\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "uint8_array\000", NULL,
    {.position = POS(2812, 8)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "indented\000std", NULL,
    {.const_idx = -func_std__indented}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2849_5_indent\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2850_5_text\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2852_4_indented_text\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2853_4_new_indent\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2854_4_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2855_4_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2868_14_s\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "format\000std", NULL,
    {.const_idx = -func_std__format}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2939_5_template\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2940_5_arguments\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2942_4_output\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2943_4_arg_idx\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2944_4_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2945_4_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2951_10_chr\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2959_35_alignment\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2965_18_len_chr\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2970_22_width\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2978_30_fmt_chr\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2997_38_dw_chr\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3002_42_dw\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3010_50_fmt_chr\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3063_7_alignment\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3064_7_width\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3065_7_decimal_width\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3067_6_argument\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3072_10_value\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3075_14_decimals\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3103_4_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3104_4_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3105_4_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3123_10_exp\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3124_10_man\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3129_14_zeros\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "empty_collection_of\000", NULL,
    {.position = POS(3138, 20)}
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
  695, // number of constants
  408, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  constants_table,
  variables_table,
};
