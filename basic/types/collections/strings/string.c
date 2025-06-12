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
  value_range_1414_11 = -185,
  num_26 = -186,
  num_51 = -187,
  value_range_1417_11 = -188,
  num_52 = -189,
  num_61 = -190,
  value_range_1420_11 = -191,
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
  value_range_1489_8 = -223,
  chr_122 = -224,
  value_range_1490_8 = -225,
  chr_57 = -226,
  value_range_1491_8 = -227,
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
  value_range_1691_14 = -300,
  lambda_158 = -301,
  lambda_159 = -302,
  lambda_160 = -303,
  str_0o = -304,
  lambda_161 = -305,
  lambda_162 = -306,
  chr_55 = -307,
  value_range_1702_14 = -308,
  lambda_163 = -309,
  lambda_164 = -310,
  lambda_165 = -311,
  str_0x = -312,
  lambda_166 = -313,
  lambda_167 = -314,
  chr_102 = -315,
  value_range_1716_14 = -316,
  chr_70 = -317,
  value_range_1719_14 = -318,
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
  sequence_1803_14 = -348,
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
  tuple_2555_1 = -521,
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
  var_177_5_arguments, // dynamic
  var_is_empty, // extern
  var_append, // extern
  var_map_reduce, // extern
  var_if, // extern
  var_std__string, // initialized
  var_create_string, // extern
  var_put, // extern polymorphic
  var_dup, // extern polymorphic
  var_238_5_self, // dynamic
  var_239_5_n, // dynamic
  var_std__shift_right, // extern
  var_246_8_str, // dynamic
  var_std__times, // extern
  var_std__equal, // extern
  var_string, // extern
  var_case, // extern
  var_pad_left, // extern polymorphic
  var_278_5_n, // dynamic
  var_279_5_pad, // dynamic
  var_281_4_text, // dynamic
  var_282_4_len, // dynamic
  var_length_of, // extern
  var_std__less, // extern
  var_std__minus, // extern
  var_std__plus, // extern
  var_div, // extern
  var_range, // extern
  var_pad_right, // extern polymorphic
  var_314_5_n, // dynamic
  var_315_5_pad, // dynamic
  var_317_4_text, // dynamic
  var_318_4_len, // dynamic
  var_std__spaces, // initialized
  var_337_5_n, // dynamic
  var_std__not, // extern
  var_std__tabs_and_spaces, // initialized
  var_354_5_n, // dynamic
  var_std__bit_and, // extern
  var_spaces, // extern
  var_std__with_tabs, // initialized
  var_374_5_text, // dynamic
  var_376_4_s, // dynamic
  var_377_4_n, // dynamic
  var_378_4_i, // dynamic
  var_379_4_output, // dynamic
  var_380_4_count, // dynamic
  var_next, // extern
  var_392_18_tab_count, // dynamic
  var_std__shift_left, // extern
  var_loop, // extern
  var_std__and, // extern
  var_break, // extern
  var_match, // extern polymorphic
  var_441_5_self, // dynamic
  var_442_5_stream, // dynamic
  var_444_4_rc, // dynamic
  var_result_count, // extern
  var_445_4_len, // dynamic
  var_undefined, // extern
  var_match_back, // extern polymorphic
  var_465_5_self, // dynamic
  var_466_5_stream, // dynamic
  var_468_4_len, // dynamic
  var_std__negate, // extern
  var_matches, // extern polymorphic
  var_search, // extern polymorphic
  var_504_5_self, // dynamic
  var_505_5_stream, // dynamic
  var_506_5_nth, // dynamic
  var_508_4_i, // dynamic
  var_509_4_length, // dynamic
  var_510_4_offset, // dynamic
  var_511_4_n, // dynamic
  var_dec, // extern
  var_plus, // extern
  var_inc, // extern
  var_minus, // extern
  var_before, // extern polymorphic
  var_592_5_str, // dynamic
  var_596_11_pos, // dynamic
  var_is_defined, // extern
  var_truncate_from, // extern polymorphic
  var_642_5_str, // dynamic
  var_646_11_pos, // dynamic
  var_behind, // extern polymorphic
  var_690_5_str, // dynamic
  var_694_11_pos, // dynamic
  var_694_16_len, // dynamic
  var_truncate_until, // extern polymorphic
  var_739_5_str, // dynamic
  var_743_11_pos, // dynamic
  var_743_16_len, // dynamic
  var_from, // extern polymorphic
  var_788_5_str, // dynamic
  var_792_11_pos, // dynamic
  var_truncate_before, // extern polymorphic
  var_837_5_str, // dynamic
  var_841_11_pos, // dynamic
  var_until, // extern polymorphic
  var_885_5_str, // dynamic
  var_889_11_pos, // dynamic
  var_889_16_len, // dynamic
  var_truncate_behind, // extern polymorphic
  var_934_5_str, // dynamic
  var_938_11_pos, // dynamic
  var_938_16_len, // dynamic
  var_between, // extern polymorphic
  var_has_prefix, // extern polymorphic
  var_has_suffix, // extern polymorphic
  var_without_prefix, // extern polymorphic
  var_1042_5_self, // dynamic
  var_1045_4_n, // dynamic
  var_without_suffix, // extern polymorphic
  var_1072_5_self, // dynamic
  var_1075_4_n, // dynamic
  var_contains, // extern polymorphic
  var_std__split, // initialized
  var_1144_5_self, // dynamic
  var_1145_5_separator, // dynamic
  var_1147_4_rc, // dynamic
  var_empty_list, // extern
  var_1152_8_items, // dynamic
  var_1154_17_pos, // dynamic
  var_1154_22_len, // dynamic
  var_push, // extern
  var_spread, // extern
  var_std__join, // initialized
  var_1192_5_separator, // dynamic
  var_std__trim, // initialized
  var_1221_5_self, // dynamic
  var_1222_5_test, // dynamic
  var_is_a_whitespace_character, // extern
  var_1224_4_s, // dynamic
  var_1225_4_e, // dynamic
  var_std__trim_left, // initialized
  var_1261_5_self, // dynamic
  var_1262_5_test, // dynamic
  var_1264_4_s, // dynamic
  var_1265_4_e, // dynamic
  var_std__trim_right, // initialized
  var_1295_5_self, // dynamic
  var_1296_5_test, // dynamic
  var_1298_4_e, // dynamic
  var_std__normalize, // initialized
  var_1329_5_self, // dynamic
  var_1331_4_buf, // dynamic
  var_1332_4_e, // dynamic
  var_1333_4_i, // dynamic
  var_is_not_empty, // extern
  var_update_if, // extern
  var_1348_10_s, // dynamic
  var_to_base64, // extern polymorphic
  var_1380_5_str, // dynamic
  var_1382_4_base64, // dynamic
  var_1384_6_len, // dynamic
  var_to_integer, // extern polymorphic
  var_std__bit_or, // extern
  var_1403_6_bits, // dynamic
  var_1408_6_buf, // dynamic
  var_1411_10_value, // dynamic
  var_std__value_range, // extern
  var_repeat, // extern
  var_from_base64, // extern polymorphic
  var_1450_5_str, // dynamic
  var_1452_4_octets, // dynamic
  var_mod, // extern
  var_1462_14_bits, // dynamic
  var_1465_18_value, // dynamic
  var_is_undefined, // extern
  var_character, // extern
  var_from_to, // extern
  var_1486_13_chr, // dynamic
  var_sha1, // extern polymorphic
  var_1512_5_message, // dynamic
  var_1516_4_h0, // dynamic
  var_1517_4_h1, // dynamic
  var_1518_4_h2, // dynamic
  var_1519_4_h3, // dynamic
  var_1520_4_h4, // dynamic
  var_1541_4_pad_len, // dynamic
  var_1559_10_w, // dynamic
  var_uint32_array, // extern
  var_std__bit_xor, // extern
  var_1577_12_a, // dynamic
  var_1578_12_b, // dynamic
  var_1579_12_c, // dynamic
  var_1580_12_d, // dynamic
  var_1581_12_e, // dynamic
  var_1583_16_i, // dynamic
  var_cond, // extern
  var_std__parse_integer, // initialized
  var_1656_5_self, // dynamic
  var_1677_4_negate, // dynamic
  var_1683_4_value, // dynamic
  var_1664_20_idx, // dynamic
  var_1676_4_orig, // dynamic
  var_1688_12_idx, // dynamic
  var_1688_16_chr, // dynamic
  var_for_each, // extern
  var_1700_12_idx, // dynamic
  var_1700_16_chr, // dynamic
  var_1711_12_idx, // dynamic
  var_1711_16_chr, // dynamic
  var_1727_12_idx, // dynamic
  var_1727_16_chr, // dynamic
  var_std__parse_number, // initialized
  var_1763_5_self, // dynamic
  var_1765_4_i, // dynamic
  var_1766_4_n, // dynamic
  var_1771_8_sign_chr, // dynamic
  var_std__or, // extern
  var_1773_8_sign, // dynamic
  var_parse_hex, // extern
  var_std__sequence, // extern
  var_1806_33_cont, // dynamic
  var_1811_12_digit, // dynamic
  var_1822_22_next_digit, // dynamic
  var_1834_12_exp_sign_chr, // dynamic
  var_integer, // extern
  var_real, // extern
  var_1842_17_str, // dynamic
  var_1842_21_i, // dynamic
  var_1842_23_sign, // dynamic
  var_1843_4_n, // dynamic
  var_1847_8_digit, // dynamic
  var_1852_12_value, // dynamic
  var_1859_18_next_digit, // dynamic
  var_1866_16_str, // dynamic
  var_1866_20_i, // dynamic
  var_1866_22_sign, // dynamic
  var_1867_4_n, // dynamic
  var_1871_8_digit, // dynamic
  var_1876_12_value, // dynamic
  var_1883_18_next_digit, // dynamic
  var_std__parse_hex, // initialized
  var_1918_5_str, // dynamic
  var_1919_5_i, // dynamic
  var_1920_5_sign, // dynamic
  var_1922_4_n, // dynamic
  var_1926_8_digit, // dynamic
  var_1936_29_value, // dynamic
  var_1943_16_next_digit, // dynamic
  var_1992_24_value, // dynamic
  var_parse_integer, // extern
  var_to_number, // extern polymorphic
  var_2034_23_value, // dynamic
  var_parse_number, // extern
  var_std__map_characters, // initialized
  var_2061_5_self, // dynamic
  var_2062_5_function, // dynamic
  var_parameter_count_of, // extern
  var_2068_12_s, // dynamic
  var_2068_14_e, // dynamic
  var_2064_4_map, // dynamic
  var_2081_12_s, // dynamic
  var_2081_14_e, // dynamic
  var_to_upper_case, // extern polymorphic
  var_map_characters, // extern
  var_to_lower_case, // extern polymorphic
  var_to_title_case, // extern polymorphic
  var_2158_5_self, // dynamic
  var_2160_25_idx, // dynamic
  var_2160_29_chr, // dynamic
  var_is_a_letter_character, // extern
  var_to_sentence_case, // extern polymorphic
  var_2184_5_self, // dynamic
  var_2186_25_idx, // dynamic
  var_2186_29_chr, // dynamic
  var_to_wide, // extern polymorphic
  var_std__delete_all, // initialized
  var_2217_5_expressions, // dynamic
  var_2219_17_txt, // dynamic
  var_2233_4_new_text, // dynamic
  var_2226_14_len, // dynamic
  var_if_not, // extern
  var_std__replace_all, // initialized
  var_2258_5_args, // dynamic
  var_2260_18_txt, // dynamic
  var_2281_4_new_text, // dynamic
  var_2267_30_replacement, // dynamic
  var_2268_14_len, // dynamic
  var_std__replace_first, // initialized
  var_2306_5_args, // dynamic
  var_2308_20_txt, // dynamic
  var_2328_4_new_text, // dynamic
  var_2315_30_replacement, // dynamic
  var_2316_14_len, // dynamic
  var_update_if_not, // extern
  var_std__count_occurrences, // initialized
  var_2351_5_expr, // dynamic
  var_2353_18_txt, // dynamic
  var_2353_22_count, // dynamic
  var_2358_10_n, // dynamic
  var_std__split_into_lines, // initialized
  var_2409_26_text, // dynamic
  var_2410_4_lines, // dynamic
  var_2411_4_i, // dynamic
  var_2412_4_n, // dynamic
  var_2413_4_s, // dynamic
  var_std__split_into_indented_lines, // initialized
  var_2492_5_text, // dynamic
  var_2497_12_s, // dynamic
  var_2497_14_e, // dynamic
  var_2503_10_lines, // dynamic
  var_2504_10_ls, // dynamic
  var_2510_14_i, // dynamic
  var_2531_18_s, // dynamic
  var_2531_20_e, // dynamic
  var_2532_6_indent, // dynamic
  var_2546_16_line_text, // dynamic
  var_std_types__line, // initialized compound
  var_typed_tuple, // extern
  var_tuple, // extern
  var_subgroups_of, // extern polymorphic
  var_2558_19_line, // dynamic
  var_first, // extern
  var_std__split_into_groups, // initialized
  var_2615_5_lines, // dynamic
  var_2616_5_keep_empty_lines, // dynamic
  var_2618_4_n, // dynamic
  var_2619_4_fv, // dynamic
  var_2623_10_indent, // dynamic
  var_list, // extern
  var_2635_12_s, // dynamic
  var_2635_14_e, // dynamic
  var_2635_16_indent, // dynamic
  var_2641_10_groups, // dynamic
  var_2642_10_minimum_indent, // dynamic
  var_2643_10_group_start, // dynamic
  var_2644_10_group_end, // dynamic
  var_2646_14_i, // dynamic
  var_2647_14_current_indent, // dynamic
  var_2668_24_current_indent, // dynamic
  var_2677_23_last, // dynamic
  var_2677_28_curr_idx, // dynamic
  var_2697_43_current_indent, // dynamic
  var_std__wrap_words, // initialized
  var_2737_5_text, // dynamic
  var_2738_5_width, // dynamic
  var_2741_4_lines, // dynamic
  var_2742_4_n, // dynamic
  var_2743_4_s, // dynamic
  var_2744_4_b, // dynamic
  var_2745_4_i, // dynamic
  var_2755_10_chr, // dynamic
  var_serialize, // extern polymorphic
  var_2808_5_self, // dynamic
  var_2809_5_indent, // dynamic
  var_2811_4_str, // dynamic
  var_2812_4_s, // dynamic
  var_2814_8_idx, // dynamic
  var_2814_12_chr, // dynamic
  var_tabs_and_spaces, // extern
  var_to_uint8_array, // extern polymorphic
  var_2846_4_arr, // dynamic
  var_uint8_array, // extern
  var_std__indented, // initialized
  var_2883_5_indent, // dynamic
  var_2884_5_text, // dynamic
  var_2886_4_indented_text, // dynamic
  var_2887_4_new_indent, // dynamic
  var_2888_4_i, // dynamic
  var_2889_4_n, // dynamic
  var_2902_14_s, // dynamic
  var_std__format, // initialized
  var_2973_5_template, // dynamic
  var_2974_5_arguments, // dynamic
  var_2976_4_output, // dynamic
  var_2977_4_arg_idx, // dynamic
  var_2978_4_i, // dynamic
  var_2979_4_n, // dynamic
  var_2985_10_chr, // dynamic
  var_2993_35_alignment, // dynamic
  var_2999_18_len_chr, // dynamic
  var_3004_22_width, // dynamic
  var_3012_30_fmt_chr, // dynamic
  var_3031_38_dw_chr, // dynamic
  var_3036_42_dw, // dynamic
  var_3044_50_fmt_chr, // dynamic
  var_3097_7_alignment, // dynamic
  var_3098_7_width, // dynamic
  var_3099_7_decimal_width, // dynamic
  var_3101_6_argument, // dynamic
  var_3106_10_value, // dynamic
  var_3109_14_decimals, // dynamic
  var_3137_4_str, // dynamic
  var_3138_4_n, // dynamic
  var_3139_4_i, // dynamic
  var_3157_10_exp, // dynamic
  var_3158_10_man, // dynamic
  var_3163_14_zeros, // dynamic
  var_empty_collection_of, // extern polymorphic
  var__END
};


static TAB_NUM t_func_std_types__string___to_string[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 156_5_self
  // -> self
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(158, 3),
  LOCAL(1)
};

static FUNCTION_INFO i_func_std_types__string___to_string = {
  t_func_std_types__string___to_string, NULL, 1, 1,
  {"156_5_self\000"}
};

static TAB_NUM t_func_std__create_string[] = {
  1, // locals
  1, // parameters
  var_177_5_arguments,
  // is_empty
  var_is_empty, 1, var_177_5_arguments, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1, lambda_2, TAIL_CALL,
  POS(180, 15),
  POS(179, 3)
};

static FUNCTION_INFO i_func_std__create_string = {
  t_func_std__create_string, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_1[] = {
  0, // locals
  0, // parameters
  //  ""
  LET, 1, string_1, TAIL_CALL,
  POS(181, 7)
};

static FUNCTION_INFO i_lambda_1 = {
  t_lambda_1, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_2[] = {
  0, // locals
  0, // parameters
  // map_reduce arguments to_string append
  var_map_reduce, 3, var_177_5_arguments, var_to_string, var_append, TAIL_CALL,
  POS(182, 7)
};

static FUNCTION_INFO i_lambda_2 = {
  t_lambda_2, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_std__string[] = {
  1, // locals
  -1, // parameters
  REST_PARAMETER, LOCAL(1), // 196_5_args
  // create_string args
  var_create_string, 1, LOCAL(1), TAIL_CALL,
  POS(198, 3),
  LOCAL(1)
};

static FUNCTION_INFO i_func_std__string = {
  t_func_std__string, NULL, 1, 1,
  {"196_5_args\000"}
};

static TAB_NUM t_func_std_types__string___put[] = {
  4, // locals
  2, // parameters
  LOCAL(3), // 213_5_self
  LOCAL(4), // 214_5_chr
  // to_string self)
  var_to_string, 1, LOCAL(4), 1, LOCAL(1),
  // append(chr.to_string self)
  var_append, 2, LOCAL(1), LOCAL(3), 1, LOCAL(2),
  // -> append(chr.to_string self)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(216, 17),
  POS(216, 6),
  POS(216, 3),
  LOCAL(3),
  LOCAL(4)
};

static FUNCTION_INFO i_func_std_types__string___put = {
  t_func_std_types__string___put, NULL, 3, 2,
  {"213_5_self\000", "214_5_chr\000"}
};

static TAB_NUM t_func_std_types__string___dup[] = {
  0, // locals
  2, // parameters
  var_238_5_self,
  var_239_5_n,
  // case n
  var_case, 6, var_239_5_n, num_0, lambda_3, num_1, lambda_4, lambda_5, TAIL_CALL,
  POS(241, 3)
};

static FUNCTION_INFO i_func_std_types__string___dup = {
  t_func_std_types__string___dup, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_3[] = {
  0, // locals
  0, // parameters
  //  ""
  LET, 1, string_1, TAIL_CALL,
  POS(242, 9)
};

static FUNCTION_INFO i_lambda_3 = {
  t_lambda_3, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_4[] = {
  0, // locals
  0, // parameters
  //  self
  LET, 1, var_238_5_self, TAIL_CALL,
  POS(243, 9)
};

static FUNCTION_INFO i_lambda_4 = {
  t_lambda_4, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_5[] = {
  3, // locals
  0, // parameters
  // $h n >> 1 # fails if <n> is not a positive integer
  var_std__shift_right, 2, var_239_5_n, num_1, 1, LOCAL(3),
  // $str dup(self h)
  var_dup, 2, var_238_5_self, LOCAL(3), 1, var_246_8_str,
  // 2*h == n:
  var_std__times, 2, num_2, LOCAL(3), 1, LOCAL(1),
  // 2*h == n:
  var_std__equal, 2, LOCAL(1), var_239_5_n, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_6, lambda_7, TAIL_CALL,
  POS(245, 7),
  POS(246, 7),
  POS(248, 9),
  POS(248, 9),
  POS(247, 7),
  LOCAL(3)
};

static FUNCTION_INFO i_lambda_5 = {
  t_lambda_5, NULL, 5, 1,
  {"245_8_h\000"}
};

static TAB_NUM t_lambda_6[] = {
  0, // locals
  0, // parameters
  // string str str
  var_string, 2, var_246_8_str, var_246_8_str, TAIL_CALL,
  POS(249, 11)
};

static FUNCTION_INFO i_lambda_6 = {
  t_lambda_6, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_7[] = {
  0, // locals
  0, // parameters
  // string str str self
  var_string, 3, var_246_8_str, var_246_8_str, var_238_5_self, TAIL_CALL,
  POS(251, 11)
};

static FUNCTION_INFO i_lambda_7 = {
  t_lambda_7, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_std_types__object___pad_left[] = {
  2, // locals
  -3, // parameters
  MANDATORY_PARAMETER, LOCAL(2), // 277_5_expr
  MANDATORY_PARAMETER, var_278_5_n,
  string_2, var_279_5_pad,
  // $text expr.to_string
  var_to_string, 1, LOCAL(2), 1, var_281_4_text,
  // $len length_of(text)
  var_length_of, 1, var_281_4_text, 1, var_282_4_len,
  // len < n:
  var_std__less, 2, var_282_4_len, var_278_5_n, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_8, lambda_9, TAIL_CALL,
  POS(281, 3),
  POS(282, 3),
  POS(284, 5),
  POS(283, 3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_std_types__object___pad_left = {
  t_func_std_types__object___pad_left, NULL, 4, 1,
  {"277_5_expr\000"}
};

static TAB_NUM t_lambda_8[] = {
  8, // locals
  0, // parameters
  // $pad_len length_of(pad)
  var_length_of, 1, var_279_5_pad, 1, LOCAL(8),
  // n-len)+(pad_len-1) .div. pad_len) 1 n-len) text
  var_std__minus, 2, var_278_5_n, var_282_4_len, 1, LOCAL(1),
  // pad_len-1) .div. pad_len) 1 n-len) text
  var_std__minus, 2, LOCAL(8), num_1, 1, LOCAL(2),
  // n-len)+(pad_len-1) .div. pad_len) 1 n-len) text
  var_std__plus, 2, LOCAL(1), LOCAL(2), 1, LOCAL(3),
  // (n-len)+(pad_len-1) .div. pad_len) 1 n-len) text
  var_div, 2, LOCAL(3), LOCAL(8), 1, LOCAL(4),
  // dup(pad (n-len)+(pad_len-1) .div. pad_len) 1 n-len) text
  var_dup, 2, var_279_5_pad, LOCAL(4), 1, LOCAL(5),
  // n-len) text
  var_std__minus, 2, var_278_5_n, var_282_4_len, 1, LOCAL(6),
  // range(dup(pad (n-len)+(pad_len-1) .div. pad_len) 1 n-len) text
  var_range, 3, LOCAL(5), num_1, LOCAL(6), 1, LOCAL(7),
  // string range(dup(pad (n-len)+(pad_len-1) .div. pad_len) 1 n-len) text
  var_string, 2, LOCAL(7), var_281_4_text, TAIL_CALL,
  POS(285, 7),
  POS(286, 29),
  POS(286, 37),
  POS(286, 29),
  POS(286, 28),
  POS(286, 20),
  POS(286, 65),
  POS(286, 14),
  POS(286, 7),
  LOCAL(8)
};

static FUNCTION_INFO i_lambda_8 = {
  t_lambda_8, NULL, 9, 1,
  {"285_8_pad_len\000"}
};

static TAB_NUM t_lambda_9[] = {
  0, // locals
  0, // parameters
  //  text
  LET, 1, var_281_4_text, TAIL_CALL,
  POS(287, 7)
};

static FUNCTION_INFO i_lambda_9 = {
  t_lambda_9, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_std_types__object___pad_right[] = {
  2, // locals
  -3, // parameters
  MANDATORY_PARAMETER, LOCAL(2), // 313_5_expr
  MANDATORY_PARAMETER, var_314_5_n,
  string_2, var_315_5_pad,
  // $text expr.to_string
  var_to_string, 1, LOCAL(2), 1, var_317_4_text,
  // $len length_of(text)
  var_length_of, 1, var_317_4_text, 1, var_318_4_len,
  // len < n:
  var_std__less, 2, var_318_4_len, var_314_5_n, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_10, lambda_11, TAIL_CALL,
  POS(317, 3),
  POS(318, 3),
  POS(320, 5),
  POS(319, 3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_std_types__object___pad_right = {
  t_func_std_types__object___pad_right, NULL, 4, 1,
  {"313_5_expr\000"}
};

static TAB_NUM t_lambda_10[] = {
  8, // locals
  0, // parameters
  // $pad_len length_of(pad)
  var_length_of, 1, var_315_5_pad, 1, LOCAL(8),
  // n-len)+(pad_len-1) .div. pad_len) 1 n-len)
  var_std__minus, 2, var_314_5_n, var_318_4_len, 1, LOCAL(1),
  // pad_len-1) .div. pad_len) 1 n-len)
  var_std__minus, 2, LOCAL(8), num_1, 1, LOCAL(2),
  // n-len)+(pad_len-1) .div. pad_len) 1 n-len)
  var_std__plus, 2, LOCAL(1), LOCAL(2), 1, LOCAL(3),
  // (n-len)+(pad_len-1) .div. pad_len) 1 n-len)
  var_div, 2, LOCAL(3), LOCAL(8), 1, LOCAL(4),
  // dup(pad (n-len)+(pad_len-1) .div. pad_len) 1 n-len)
  var_dup, 2, var_315_5_pad, LOCAL(4), 1, LOCAL(5),
  // n-len)
  var_std__minus, 2, var_314_5_n, var_318_4_len, 1, LOCAL(6),
  // range(dup(pad (n-len)+(pad_len-1) .div. pad_len) 1 n-len)
  var_range, 3, LOCAL(5), num_1, LOCAL(6), 1, LOCAL(7),
  // string text range(dup(pad (n-len)+(pad_len-1) .div. pad_len) 1 n-len)
  var_string, 2, var_317_4_text, LOCAL(7), TAIL_CALL,
  POS(321, 7),
  POS(322, 34),
  POS(322, 42),
  POS(322, 34),
  POS(322, 33),
  POS(322, 25),
  POS(322, 70),
  POS(322, 19),
  POS(322, 7),
  LOCAL(8)
};

static FUNCTION_INFO i_lambda_10 = {
  t_lambda_10, NULL, 9, 1,
  {"321_8_pad_len\000"}
};

static TAB_NUM t_lambda_11[] = {
  0, // locals
  0, // parameters
  //  text
  LET, 1, var_317_4_text, TAIL_CALL,
  POS(323, 7)
};

static FUNCTION_INFO i_lambda_11 = {
  t_lambda_11, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_std__spaces[] = {
  2, // locals
  1, // parameters
  var_337_5_n,
  // 80
  var_std__less, 2, num_80, var_337_5_n, 1, LOCAL(1),
  // 80
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_12, lambda_13, TAIL_CALL,
  POS(340, 10),
  POS(340, 10),
  POS(339, 3)
};

static FUNCTION_INFO i_func_std__spaces = {
  t_func_std__spaces, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_12[] = {
  1, // locals
  0, // parameters
  // range(eighty_spaces 1 n)
  var_range, 3, string_3, num_1, var_337_5_n, 1, LOCAL(1),
  //  range(eighty_spaces 1 n)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(341, 8),
  POS(341, 7)
};

static FUNCTION_INFO i_lambda_12 = {
  t_lambda_12, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_13[] = {
  1, // locals
  0, // parameters
  // dup(" " n)
  var_dup, 2, string_2, var_337_5_n, 1, LOCAL(1),
  //  dup(" " n)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(342, 8),
  POS(342, 7)
};

static FUNCTION_INFO i_lambda_13 = {
  t_lambda_13, NULL, 2, 0,
  {}
};

static TAB_NUM t_func_std__tabs_and_spaces[] = {
  1, // locals
  1, // parameters
  var_354_5_n,
  // n < 80
  var_std__less, 2, var_354_5_n, num_80, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_14, lambda_15, TAIL_CALL,
  POS(357, 5),
  POS(356, 3)
};

static FUNCTION_INFO i_func_std__tabs_and_spaces = {
  t_func_std__tabs_and_spaces, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_14[] = {
  5, // locals
  0, // parameters
  // n >> 3) 9+(n & 7))
  var_std__shift_right, 2, var_354_5_n, num_3, 1, LOCAL(1),
  // 10-(n >> 3) 9+(n & 7))
  var_std__minus, 2, num_10, LOCAL(1), 1, LOCAL(2),
  // n & 7))
  var_std__bit_and, 2, var_354_5_n, num_7, 1, LOCAL(3),
  // 9+(n & 7))
  var_std__plus, 2, num_9, LOCAL(3), 1, LOCAL(4),
  // range(nine_tabs_and_seven_spaces 10-(n >> 3) 9+(n & 7))
  var_range, 3, string_4, LOCAL(2), LOCAL(4), 1, LOCAL(5),
  //  range(nine_tabs_and_seven_spaces 10-(n >> 3) 9+(n & 7))
  LET, 1, LOCAL(5), TAIL_CALL,
  POS(358, 45),
  POS(358, 41),
  POS(358, 56),
  POS(358, 53),
  POS(358, 8),
  POS(358, 7)
};

static FUNCTION_INFO i_lambda_14 = {
  t_lambda_14, NULL, 6, 0,
  {}
};

static TAB_NUM t_lambda_15[] = {
  5, // locals
  0, // parameters
  // n >> 3) spaces(n & 7))
  var_std__shift_right, 2, var_354_5_n, num_3, 1, LOCAL(1),
  // dup("@ht;" n >> 3) spaces(n & 7))
  var_dup, 2, string_5, LOCAL(1), 1, LOCAL(2),
  // n & 7))
  var_std__bit_and, 2, var_354_5_n, num_7, 1, LOCAL(3),
  // spaces(n & 7))
  var_spaces, 1, LOCAL(3), 1, LOCAL(4),
  // string(dup("@ht;" n >> 3) spaces(n & 7))
  var_string, 2, LOCAL(2), LOCAL(4), 1, LOCAL(5),
  //  string(dup("@ht;" n >> 3) spaces(n & 7))
  LET, 1, LOCAL(5), TAIL_CALL,
  POS(359, 26),
  POS(359, 15),
  POS(359, 41),
  POS(359, 34),
  POS(359, 8),
  POS(359, 7)
};

static FUNCTION_INFO i_lambda_15 = {
  t_lambda_15, NULL, 6, 0,
  {}
};

static TAB_NUM t_func_std__with_tabs[] = {
  0, // locals
  1, // parameters
  var_374_5_text,
  // $s 1
  LET, 1, num_1, 1, var_376_4_s,
  // $n length_of(text)
  var_length_of, 1, var_374_5_text, 1, var_377_4_n,
  // $i 1
  LET, 1, num_1, 1, var_378_4_i,
  // $output ""
  LET, 1, string_1, 1, var_379_4_output,
  // $count 0
  LET, 1, num_0, 1, var_380_4_count,
  // loop:
  var_loop, 1, lambda_loop, TAIL_CALL,
  POS(376, 3),
  POS(377, 3),
  POS(378, 3),
  POS(379, 3),
  POS(380, 3),
  POS(381, 3)
};

static FUNCTION_INFO i_func_std__with_tabs = {
  t_func_std__with_tabs, NULL, 6, 0,
  {}
};

static TAB_NUM t_lambda_loop[] = {
  2, // locals
  0, // parameters
  // n:
  var_std__less, 2, var_377_4_n, var_378_4_i, 1, LOCAL(1),
  // n:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_16, lambda_23, TAIL_CALL,
  POS(383, 12),
  POS(383, 12),
  POS(382, 5)
};

static FUNCTION_INFO i_lambda_loop = {
  t_lambda_loop, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_16[] = {
  2, // locals
  0, // parameters
  // text(i) == ' ':
  var_374_5_text, 1, var_378_4_i, 1, LOCAL(1),
  // text(i) == ' ':
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_17, lambda_18, TAIL_CALL,
  POS(385, 11),
  POS(385, 11),
  POS(384, 9)
};

static FUNCTION_INFO i_lambda_16 = {
  t_lambda_16, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_17[] = {
  0, // locals
  0, // parameters
  // !i i+1
  var_std__plus, 2, var_378_4_i, num_1, 1, var_378_4_i,
  // !count count+1
  var_std__plus, 2, var_380_4_count, num_1, 1, var_380_4_count,
  // next
  var_next, 0, TAIL_CALL,
  POS(386, 13),
  POS(387, 13),
  POS(388, 13)
};

static FUNCTION_INFO i_lambda_17 = {
  t_lambda_17, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_18[] = {
  2, // locals
  0, // parameters
  // count >= 8:
  var_std__less, 2, var_380_4_count, num_8, 1, LOCAL(1),
  // count >= 8:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_19, func_skip_line, TAIL_CALL,
  POS(391, 15),
  POS(391, 15),
  POS(390, 13)
};

static FUNCTION_INFO i_lambda_18 = {
  t_lambda_18, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_19[] = {
  2, // locals
  0, // parameters
  // $tab_count count >> 3
  var_std__shift_right, 2, var_380_4_count, num_3, 1, var_392_18_tab_count,
  // tab_count >= 1:
  var_std__less, 2, var_392_18_tab_count, num_1, 1, LOCAL(1),
  // tab_count >= 1:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_20, func_skip_line, TAIL_CALL,
  POS(392, 17),
  POS(394, 19),
  POS(394, 19),
  POS(393, 17)
};

static FUNCTION_INFO i_lambda_19 = {
  t_lambda_19, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_20[] = {
  3, // locals
  0, // parameters
  // count+1))
  var_std__plus, 2, var_380_4_count, num_1, 1, LOCAL(1),
  // i-(count+1))
  var_std__minus, 2, var_378_4_i, LOCAL(1), 1, LOCAL(2),
  // range(text s i-(count+1))
  var_range, 3, var_374_5_text, var_376_4_s, LOCAL(2), 1, LOCAL(3),
  // append &output range(text s i-(count+1))
  var_append, 2, var_379_4_output, LOCAL(3), 1, var_379_4_output,
  // tab_count < 10
  var_std__less, 2, var_392_18_tab_count, num_10, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_21, lambda_22, 1, LOCAL(2),
  // append &output
  var_append, 2, var_379_4_output, LOCAL(2), 1, var_379_4_output,
  // i-count)+(tab_count << 3)
  var_std__minus, 2, var_378_4_i, var_380_4_count, 1, LOCAL(1),
  // tab_count << 3)
  var_std__shift_left, 2, var_392_18_tab_count, num_3, 1, LOCAL(2),
  // !s (i-count)+(tab_count << 3)
  var_std__plus, 2, LOCAL(1), LOCAL(2), 1, var_376_4_s,
  // skip_line
  func_skip_line, 0, TAIL_CALL,
  POS(395, 52),
  POS(395, 49),
  POS(395, 36),
  POS(395, 21),
  POS(398, 25),
  POS(397, 23),
  POS(396, 21),
  POS(401, 25),
  POS(401, 35),
  POS(401, 21),
  POS(402, 21)
};

static FUNCTION_INFO i_lambda_20 = {
  t_lambda_20, NULL, 11, 0,
  {}
};

static TAB_NUM t_lambda_21[] = {
  1, // locals
  0, // parameters
  // range(tabs 1 tab_count)
  var_range, 3, string_6, num_1, var_392_18_tab_count, 1, LOCAL(1),
  //  range(tabs 1 tab_count)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(399, 28),
  POS(399, 27)
};

static FUNCTION_INFO i_lambda_21 = {
  t_lambda_21, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_22[] = {
  1, // locals
  0, // parameters
  // dup("@ht;" tab_count)
  var_dup, 2, string_5, var_392_18_tab_count, 1, LOCAL(1),
  //  dup("@ht;" tab_count)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(400, 28),
  POS(400, 27)
};

static FUNCTION_INFO i_lambda_22 = {
  t_lambda_22, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_23[] = {
  1, // locals
  0, // parameters
  // s == 1
  var_std__equal, 2, var_376_4_s, num_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_24, lambda_25, TAIL_CALL,
  POS(407, 11),
  POS(406, 9)
};

static FUNCTION_INFO i_lambda_23 = {
  t_lambda_23, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_24[] = {
  0, // locals
  0, // parameters
  //  text
  LET, 1, var_374_5_text, TAIL_CALL,
  POS(408, 13)
};

static FUNCTION_INFO i_lambda_24 = {
  t_lambda_24, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_25[] = {
  2, // locals
  0, // parameters
  // range(text s -1))
  var_range, 3, var_374_5_text, var_376_4_s, minus_num_1, 1, LOCAL(1),
  // append(output range(text s -1))
  var_append, 2, var_379_4_output, LOCAL(1), 1, LOCAL(2),
  //  append(output range(text s -1))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(409, 28),
  POS(409, 14),
  POS(409, 13)
};

static FUNCTION_INFO i_lambda_25 = {
  t_lambda_25, NULL, 3, 0,
  {}
};

static TAB_NUM t_func_skip_line[] = {
  0, // locals
  0, // parameters
  // loop
  var_loop, 2, lambda_26, lambda_29, TAIL_CALL,
  POS(412, 5)
};

static FUNCTION_INFO i_func_skip_line = {
  t_func_skip_line, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_26[] = {
  3, // locals
  0, // parameters
  // n && text(i) != '@nl;':
  var_std__less, 2, var_377_4_n, var_378_4_i, 1, LOCAL(1),
  // n && text(i) != '@nl;':
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // n && text(i) != '@nl;':
  var_std__and, 2, LOCAL(2), lambda_27, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_28, var_break, TAIL_CALL,
  POS(415, 16),
  POS(415, 16),
  POS(415, 16),
  POS(414, 9)
};

static FUNCTION_INFO i_lambda_26 = {
  t_lambda_26, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_27[] = {
  3, // locals
  0, // parameters
  // text(i) != '@nl;':
  var_374_5_text, 1, var_378_4_i, 1, LOCAL(1),
  // text(i) != '@nl;':
  var_std__equal, 2, LOCAL(1), chr_10, 1, LOCAL(2),
  // text(i) != '@nl;':
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(i) != '@nl;':
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(415, 21),
  POS(415, 21),
  POS(415, 21),
  POS(415, 21)
};

static FUNCTION_INFO i_lambda_27 = {
  t_lambda_27, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_28[] = {
  0, // locals
  0, // parameters
  // !i i+1
  var_std__plus, 2, var_378_4_i, num_1, 1, var_378_4_i,
  // next
  var_next, 0, TAIL_CALL,
  POS(416, 13),
  POS(417, 13)
};

static FUNCTION_INFO i_lambda_28 = {
  t_lambda_28, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_29[] = {
  0, // locals
  0, // parameters
  // !i i+1
  var_std__plus, 2, var_378_4_i, num_1, 1, var_378_4_i,
  // !count 0
  LET, 1, num_0, 1, var_380_4_count,
  // next
  var_next, 0, TAIL_CALL,
  POS(420, 9),
  POS(421, 9),
  POS(422, 9)
};

static FUNCTION_INFO i_lambda_29 = {
  t_lambda_29, NULL, 3, 0,
  {}
};

static TAB_NUM t_func_std_types__string___match[] = {
  3, // locals
  2, // parameters
  var_441_5_self,
  var_442_5_stream,
  // $rc result_count()
  var_result_count, 0, 1, var_444_4_rc,
  // $len length_of(self)
  var_length_of, 1, var_441_5_self, 1, var_445_4_len,
  // length_of(stream) >= len:
  var_length_of, 1, var_442_5_stream, 1, LOCAL(1),
  // length_of(stream) >= len:
  var_std__less, 2, LOCAL(1), var_445_4_len, 1, LOCAL(2),
  // length_of(stream) >= len:
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_30, func_fail, TAIL_CALL,
  POS(444, 3),
  POS(445, 3),
  POS(447, 5),
  POS(447, 5),
  POS(447, 5),
  POS(446, 3)
};

static FUNCTION_INFO i_func_std_types__string___match = {
  t_func_std_types__string___match, NULL, 6, 0,
  {}
};

static TAB_NUM t_lambda_30[] = {
  2, // locals
  0, // parameters
  // range(stream 1 len) == self:
  var_range, 3, var_442_5_stream, num_1, var_445_4_len, 1, LOCAL(1),
  // range(stream 1 len) == self:
  var_std__equal, 2, LOCAL(1), var_441_5_self, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_31, func_fail, TAIL_CALL,
  POS(449, 9),
  POS(449, 9),
  POS(448, 7)
};

static FUNCTION_INFO i_lambda_30 = {
  t_lambda_30, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_31[] = {
  1, // locals
  0, // parameters
  // rc == 1
  var_std__equal, 2, var_444_4_rc, num_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_32, lambda_33, TAIL_CALL,
  POS(451, 13),
  POS(450, 11)
};

static FUNCTION_INFO i_lambda_31 = {
  t_lambda_31, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_32[] = {
  0, // locals
  0, // parameters
  //  len
  LET, 1, var_445_4_len, TAIL_CALL,
  POS(452, 15)
};

static FUNCTION_INFO i_lambda_32 = {
  t_lambda_32, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_33[] = {
  0, // locals
  0, // parameters
  //  len undefined
  LET, 2, var_445_4_len, var_undefined, TAIL_CALL,
  POS(453, 15)
};

static FUNCTION_INFO i_lambda_33 = {
  t_lambda_33, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_fail[] = {
  1, // locals
  0, // parameters
  // rc == 1
  var_std__equal, 2, var_444_4_rc, num_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_34, lambda_35, TAIL_CALL,
  POS(459, 7),
  POS(458, 5)
};

static FUNCTION_INFO i_func_fail = {
  t_func_fail, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_34[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(460, 9)
};

static FUNCTION_INFO i_lambda_34 = {
  t_lambda_34, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_35[] = {
  0, // locals
  0, // parameters
  //  undefined undefined
  LET, 2, var_undefined, var_undefined, TAIL_CALL,
  POS(461, 9)
};

static FUNCTION_INFO i_lambda_35 = {
  t_lambda_35, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_std_types__string___match_back[] = {
  4, // locals
  2, // parameters
  var_465_5_self,
  var_466_5_stream,
  // $len length_of(self)
  var_length_of, 1, var_465_5_self, 1, var_468_4_len,
  // length_of(stream) >= len && range(stream -len -1) == self
  var_length_of, 1, var_466_5_stream, 1, LOCAL(1),
  // length_of(stream) >= len && range(stream -len -1) == self
  var_std__less, 2, LOCAL(1), var_468_4_len, 1, LOCAL(2),
  // length_of(stream) >= len && range(stream -len -1) == self
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // length_of(stream) >= len && range(stream -len -1) == self
  var_std__and, 2, LOCAL(3), lambda_36, 1, LOCAL(4),
  // if
  var_if, 3, LOCAL(4), lambda_37, lambda_38, TAIL_CALL,
  POS(468, 3),
  POS(470, 5),
  POS(470, 5),
  POS(470, 5),
  POS(470, 5),
  POS(469, 3)
};

static FUNCTION_INFO i_func_std_types__string___match_back = {
  t_func_std_types__string___match_back, NULL, 6, 0,
  {}
};

static TAB_NUM t_lambda_36[] = {
  3, // locals
  0, // parameters
  // len -1) == self
  var_std__negate, 1, var_468_4_len, 1, LOCAL(1),
  // range(stream -len -1) == self
  var_range, 3, var_466_5_stream, LOCAL(1), minus_num_1, 1, LOCAL(2),
  // range(stream -len -1) == self
  var_std__equal, 2, LOCAL(2), var_465_5_self, 1, LOCAL(3),
  // range(stream -len -1) == self
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(470, 47),
  POS(470, 33),
  POS(470, 33),
  POS(470, 33)
};

static FUNCTION_INFO i_lambda_36 = {
  t_lambda_36, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_37[] = {
  0, // locals
  0, // parameters
  //  len
  LET, 1, var_468_4_len, TAIL_CALL,
  POS(471, 7)
};

static FUNCTION_INFO i_lambda_37 = {
  t_lambda_37, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_38[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(472, 7)
};

static FUNCTION_INFO i_lambda_38 = {
  t_lambda_38, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_std_types__string___matches[] = {
  5, // locals
  2, // parameters
  LOCAL(4), // 482_5_self
  LOCAL(5), // 483_5_expr
  // match(expr self) == length_of(self)
  var_match, 2, LOCAL(5), LOCAL(4), 1, LOCAL(1),
  // length_of(self)
  var_length_of, 1, LOCAL(4), 1, LOCAL(2),
  // match(expr self) == length_of(self)
  var_std__equal, 2, LOCAL(1), LOCAL(2), 1, LOCAL(3),
  // -> match(expr self) == length_of(self)
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(485, 6),
  POS(485, 26),
  POS(485, 6),
  POS(485, 3),
  LOCAL(4),
  LOCAL(5)
};

static FUNCTION_INFO i_func_std_types__string___matches = {
  t_func_std_types__string___matches, NULL, 4, 2,
  {"482_5_self\000", "483_5_expr\000"}
};

static TAB_NUM t_func_std_types__string___search[] = {
  1, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_504_5_self,
  MANDATORY_PARAMETER, var_505_5_stream,
  num_1, var_506_5_nth,
  // $i undefined
  LET, 1, var_undefined, 1, var_508_4_i,
  // $length length_of(self)
  var_length_of, 1, var_504_5_self, 1, var_509_4_length,
  // $offset length-1
  var_std__minus, 2, var_509_4_length, num_1, 1, var_510_4_offset,
  // length_of(stream)-offset
  var_length_of, 1, var_505_5_stream, 1, LOCAL(1),
  // $n length_of(stream)-offset
  var_std__minus, 2, LOCAL(1), var_510_4_offset, 1, var_511_4_n,
  // nth < 0:
  var_std__less, 2, var_506_5_nth, num_0, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_39, lambda_40, TAIL_CALL,
  POS(508, 3),
  POS(509, 3),
  POS(510, 3),
  POS(511, 6),
  POS(511, 3),
  POS(513, 5),
  POS(512, 3)
};

static FUNCTION_INFO i_func_std_types__string___search = {
  t_func_std_types__string___search, NULL, 7, 0,
  {}
};

static TAB_NUM t_lambda_39[] = {
  0, // locals
  0, // parameters
  // !i n
  LET, 1, var_511_4_n, 1, var_508_4_i,
  // search_backwards
  func_search_backwards, 0, TAIL_CALL,
  POS(514, 7),
  POS(515, 7)
};

static FUNCTION_INFO i_lambda_39 = {
  t_lambda_39, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_40[] = {
  0, // locals
  0, // parameters
  // !i 1
  LET, 1, num_1, 1, var_508_4_i,
  // search_forwards
  func_search_forwards, 0, TAIL_CALL,
  POS(517, 7),
  POS(518, 7)
};

static FUNCTION_INFO i_lambda_40 = {
  t_lambda_40, NULL, 2, 0,
  {}
};

static TAB_NUM t_func_search_forwards[] = {
  2, // locals
  0, // parameters
  // n
  var_std__less, 2, var_511_4_n, var_508_4_i, 1, LOCAL(1),
  // n
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_41, lambda_46, TAIL_CALL,
  POS(522, 12),
  POS(522, 12),
  POS(521, 5)
};

static FUNCTION_INFO i_func_search_forwards = {
  t_func_search_forwards, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_41[] = {
  3, // locals
  0, // parameters
  // i+offset) == self:
  var_std__plus, 2, var_508_4_i, var_510_4_offset, 1, LOCAL(1),
  // range(stream i i+offset) == self:
  var_range, 3, var_505_5_stream, var_508_4_i, LOCAL(1), 1, LOCAL(2),
  // range(stream i i+offset) == self:
  var_std__equal, 2, LOCAL(2), var_504_5_self, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_42, lambda_45, TAIL_CALL,
  POS(525, 26),
  POS(525, 11),
  POS(525, 11),
  POS(524, 9)
};

static FUNCTION_INFO i_lambda_41 = {
  t_lambda_41, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_42[] = {
  1, // locals
  0, // parameters
  // 1:
  var_std__less, 2, num_1, var_506_5_nth, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_43, lambda_44, TAIL_CALL,
  POS(527, 21),
  POS(526, 13)
};

static FUNCTION_INFO i_lambda_42 = {
  t_lambda_42, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_43[] = {
  0, // locals
  0, // parameters
  // dec &nth
  var_dec, 1, var_506_5_nth, 1, var_506_5_nth,
  // plus &i length
  var_plus, 2, var_508_4_i, var_509_4_length, 1, var_508_4_i,
  // search_forwards
  func_search_forwards, 0, TAIL_CALL,
  POS(528, 17),
  POS(529, 17),
  POS(530, 17)
};

static FUNCTION_INFO i_lambda_43 = {
  t_lambda_43, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_44[] = {
  0, // locals
  0, // parameters
  //  i length
  LET, 2, var_508_4_i, var_509_4_length, TAIL_CALL,
  POS(531, 17)
};

static FUNCTION_INFO i_lambda_44 = {
  t_lambda_44, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_45[] = {
  0, // locals
  0, // parameters
  // inc &i
  var_inc, 1, var_508_4_i, 1, var_508_4_i,
  // search_forwards
  func_search_forwards, 0, TAIL_CALL,
  POS(533, 13),
  POS(534, 13)
};

static FUNCTION_INFO i_lambda_45 = {
  t_lambda_45, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_46[] = {
  0, // locals
  0, // parameters
  //  undefined undefined
  LET, 2, var_undefined, var_undefined, TAIL_CALL,
  POS(535, 9)
};

static FUNCTION_INFO i_lambda_46 = {
  t_lambda_46, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_search_backwards[] = {
  2, // locals
  0, // parameters
  // i >= 1
  var_std__less, 2, var_508_4_i, num_1, 1, LOCAL(1),
  // i >= 1
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_47, lambda_52, TAIL_CALL,
  POS(539, 7),
  POS(539, 7),
  POS(538, 5)
};

static FUNCTION_INFO i_func_search_backwards = {
  t_func_search_backwards, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_47[] = {
  3, // locals
  0, // parameters
  // i+offset) == self:
  var_std__plus, 2, var_508_4_i, var_510_4_offset, 1, LOCAL(1),
  // range(stream i i+offset) == self:
  var_range, 3, var_505_5_stream, var_508_4_i, LOCAL(1), 1, LOCAL(2),
  // range(stream i i+offset) == self:
  var_std__equal, 2, LOCAL(2), var_504_5_self, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_48, lambda_51, TAIL_CALL,
  POS(542, 26),
  POS(542, 11),
  POS(542, 11),
  POS(541, 9)
};

static FUNCTION_INFO i_lambda_47 = {
  t_lambda_47, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_48[] = {
  1, // locals
  0, // parameters
  // nth < -1:
  var_std__less, 2, var_506_5_nth, minus_num_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_49, lambda_50, TAIL_CALL,
  POS(544, 15),
  POS(543, 13)
};

static FUNCTION_INFO i_lambda_48 = {
  t_lambda_48, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_49[] = {
  0, // locals
  0, // parameters
  // inc &nth
  var_inc, 1, var_506_5_nth, 1, var_506_5_nth,
  // minus &i length
  var_minus, 2, var_508_4_i, var_509_4_length, 1, var_508_4_i,
  // search_backwards
  func_search_backwards, 0, TAIL_CALL,
  POS(545, 17),
  POS(546, 17),
  POS(547, 17)
};

static FUNCTION_INFO i_lambda_49 = {
  t_lambda_49, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_50[] = {
  0, // locals
  0, // parameters
  //  i length
  LET, 2, var_508_4_i, var_509_4_length, TAIL_CALL,
  POS(548, 17)
};

static FUNCTION_INFO i_lambda_50 = {
  t_lambda_50, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_51[] = {
  0, // locals
  0, // parameters
  // dec &i
  var_dec, 1, var_508_4_i, 1, var_508_4_i,
  // search_backwards
  func_search_backwards, 0, TAIL_CALL,
  POS(550, 13),
  POS(551, 13)
};

static FUNCTION_INFO i_lambda_51 = {
  t_lambda_51, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_52[] = {
  0, // locals
  0, // parameters
  //  undefined undefined
  LET, 2, var_undefined, var_undefined, TAIL_CALL,
  POS(552, 9)
};

static FUNCTION_INFO i_lambda_52 = {
  t_lambda_52, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_std_types__string___before[] = {
  3, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_592_5_str,
  MANDATORY_PARAMETER, LOCAL(2), // 593_5_expr
  num_1, LOCAL(3), // 594_5_nth
  // search $pos $_len expr str nth
  var_search, 3, LOCAL(2), var_592_5_str, LOCAL(3), 2, var_596_11_pos, LOCAL(1),
  // is_defined
  var_is_defined, 1, var_596_11_pos, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_53, lambda_54, TAIL_CALL,
  POS(596, 3),
  POS(598, 9),
  POS(597, 3),
  LOCAL(3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_std_types__string___before = {
  t_func_std_types__string___before, NULL, 3, 2,
  {"594_5_nth\000", "593_5_expr\000"}
};

static TAB_NUM t_lambda_53[] = {
  2, // locals
  0, // parameters
  // pos-1)
  var_std__minus, 2, var_596_11_pos, num_1, 1, LOCAL(1),
  // range(str 1 pos-1)
  var_range, 3, var_592_5_str, num_1, LOCAL(1), 1, LOCAL(2),
  //  range(str 1 pos-1)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(599, 20),
  POS(599, 8),
  POS(599, 7)
};

static FUNCTION_INFO i_lambda_53 = {
  t_lambda_53, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_54[] = {
  0, // locals
  0, // parameters
  //  ""
  LET, 1, string_1, TAIL_CALL,
  POS(600, 7)
};

static FUNCTION_INFO i_lambda_54 = {
  t_lambda_54, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_std_types__string___truncate_from[] = {
  3, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_642_5_str,
  MANDATORY_PARAMETER, LOCAL(2), // 643_5_expr
  num_1, LOCAL(3), // 644_5_nth
  // search $pos $_len expr str nth
  var_search, 3, LOCAL(2), var_642_5_str, LOCAL(3), 2, var_646_11_pos, LOCAL(1),
  // is_defined
  var_is_defined, 1, var_646_11_pos, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_55, lambda_56, TAIL_CALL,
  POS(646, 3),
  POS(648, 9),
  POS(647, 3),
  LOCAL(2),
  LOCAL(3)
};

static FUNCTION_INFO i_func_std_types__string___truncate_from = {
  t_func_std_types__string___truncate_from, NULL, 3, 2,
  {"643_5_expr\000", "644_5_nth\000"}
};

static TAB_NUM t_lambda_55[] = {
  2, // locals
  0, // parameters
  // pos-1)
  var_std__minus, 2, var_646_11_pos, num_1, 1, LOCAL(1),
  // range(str 1 pos-1)
  var_range, 3, var_642_5_str, num_1, LOCAL(1), 1, LOCAL(2),
  //  range(str 1 pos-1)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(649, 20),
  POS(649, 8),
  POS(649, 7)
};

static FUNCTION_INFO i_lambda_55 = {
  t_lambda_55, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_56[] = {
  0, // locals
  0, // parameters
  //  str
  LET, 1, var_642_5_str, TAIL_CALL,
  POS(650, 7)
};

static FUNCTION_INFO i_lambda_56 = {
  t_lambda_56, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_std_types__string___behind[] = {
  3, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_690_5_str,
  MANDATORY_PARAMETER, LOCAL(2), // 691_5_expr
  num_1, LOCAL(3), // 692_5_nth
  // search $pos $len expr str nth
  var_search, 3, LOCAL(2), var_690_5_str, LOCAL(3), 2, var_694_11_pos, var_694_16_len,
  // is_defined
  var_is_defined, 1, var_694_11_pos, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_57, lambda_58, TAIL_CALL,
  POS(694, 3),
  POS(696, 9),
  POS(695, 3),
  LOCAL(2),
  LOCAL(3)
};

static FUNCTION_INFO i_func_std_types__string___behind = {
  t_func_std_types__string___behind, NULL, 3, 2,
  {"691_5_expr\000", "692_5_nth\000"}
};

static TAB_NUM t_lambda_57[] = {
  2, // locals
  0, // parameters
  // pos+len -1)
  var_std__plus, 2, var_694_11_pos, var_694_16_len, 1, LOCAL(1),
  // range(str pos+len -1)
  var_range, 3, var_690_5_str, LOCAL(1), minus_num_1, 1, LOCAL(2),
  //  range(str pos+len -1)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(697, 18),
  POS(697, 8),
  POS(697, 7)
};

static FUNCTION_INFO i_lambda_57 = {
  t_lambda_57, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_58[] = {
  0, // locals
  0, // parameters
  //  ""
  LET, 1, string_1, TAIL_CALL,
  POS(698, 7)
};

static FUNCTION_INFO i_lambda_58 = {
  t_lambda_58, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_std_types__string___truncate_until[] = {
  3, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_739_5_str,
  MANDATORY_PARAMETER, LOCAL(2), // 740_5_expr
  num_1, LOCAL(3), // 741_5_nth
  // search $pos $len expr str nth
  var_search, 3, LOCAL(2), var_739_5_str, LOCAL(3), 2, var_743_11_pos, var_743_16_len,
  // is_defined
  var_is_defined, 1, var_743_11_pos, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_59, lambda_60, TAIL_CALL,
  POS(743, 3),
  POS(745, 9),
  POS(744, 3),
  LOCAL(2),
  LOCAL(3)
};

static FUNCTION_INFO i_func_std_types__string___truncate_until = {
  t_func_std_types__string___truncate_until, NULL, 3, 2,
  {"740_5_expr\000", "741_5_nth\000"}
};

static TAB_NUM t_lambda_59[] = {
  2, // locals
  0, // parameters
  // pos+len -1)
  var_std__plus, 2, var_743_11_pos, var_743_16_len, 1, LOCAL(1),
  // range(str pos+len -1)
  var_range, 3, var_739_5_str, LOCAL(1), minus_num_1, 1, LOCAL(2),
  //  range(str pos+len -1)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(746, 18),
  POS(746, 8),
  POS(746, 7)
};

static FUNCTION_INFO i_lambda_59 = {
  t_lambda_59, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_60[] = {
  0, // locals
  0, // parameters
  //  str
  LET, 1, var_739_5_str, TAIL_CALL,
  POS(747, 7)
};

static FUNCTION_INFO i_lambda_60 = {
  t_lambda_60, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_std_types__string___from[] = {
  3, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_788_5_str,
  MANDATORY_PARAMETER, LOCAL(2), // 789_5_expr
  num_1, LOCAL(3), // 790_5_nth
  // search $pos $_len expr str nth
  var_search, 3, LOCAL(2), var_788_5_str, LOCAL(3), 2, var_792_11_pos, LOCAL(1),
  // is_defined
  var_is_defined, 1, var_792_11_pos, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_61, lambda_62, TAIL_CALL,
  POS(792, 3),
  POS(794, 9),
  POS(793, 3),
  LOCAL(2),
  LOCAL(3)
};

static FUNCTION_INFO i_func_std_types__string___from = {
  t_func_std_types__string___from, NULL, 3, 2,
  {"789_5_expr\000", "790_5_nth\000"}
};

static TAB_NUM t_lambda_61[] = {
  1, // locals
  0, // parameters
  // range(str pos -1)
  var_range, 3, var_788_5_str, var_792_11_pos, minus_num_1, 1, LOCAL(1),
  //  range(str pos -1)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(795, 8),
  POS(795, 7)
};

static FUNCTION_INFO i_lambda_61 = {
  t_lambda_61, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_62[] = {
  0, // locals
  0, // parameters
  //  ""
  LET, 1, string_1, TAIL_CALL,
  POS(796, 7)
};

static FUNCTION_INFO i_lambda_62 = {
  t_lambda_62, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_std_types__string___truncate_before[] = {
  3, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_837_5_str,
  MANDATORY_PARAMETER, LOCAL(2), // 838_5_expr
  num_1, LOCAL(3), // 839_5_nth
  // search $pos $_len expr str nth
  var_search, 3, LOCAL(2), var_837_5_str, LOCAL(3), 2, var_841_11_pos, LOCAL(1),
  // is_defined
  var_is_defined, 1, var_841_11_pos, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_63, lambda_64, TAIL_CALL,
  POS(841, 3),
  POS(843, 9),
  POS(842, 3),
  LOCAL(2),
  LOCAL(3)
};

static FUNCTION_INFO i_func_std_types__string___truncate_before = {
  t_func_std_types__string___truncate_before, NULL, 3, 2,
  {"838_5_expr\000", "839_5_nth\000"}
};

static TAB_NUM t_lambda_63[] = {
  1, // locals
  0, // parameters
  // range(str pos -1)
  var_range, 3, var_837_5_str, var_841_11_pos, minus_num_1, 1, LOCAL(1),
  //  range(str pos -1)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(844, 8),
  POS(844, 7)
};

static FUNCTION_INFO i_lambda_63 = {
  t_lambda_63, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_64[] = {
  0, // locals
  0, // parameters
  //  str
  LET, 1, var_837_5_str, TAIL_CALL,
  POS(845, 7)
};

static FUNCTION_INFO i_lambda_64 = {
  t_lambda_64, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_std_types__string___until[] = {
  3, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_885_5_str,
  MANDATORY_PARAMETER, LOCAL(2), // 886_5_expr
  num_1, LOCAL(3), // 887_5_nth
  // search $pos $len expr str nth
  var_search, 3, LOCAL(2), var_885_5_str, LOCAL(3), 2, var_889_11_pos, var_889_16_len,
  // is_defined
  var_is_defined, 1, var_889_11_pos, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_65, lambda_66, TAIL_CALL,
  POS(889, 3),
  POS(891, 9),
  POS(890, 3),
  LOCAL(3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_std_types__string___until = {
  t_func_std_types__string___until, NULL, 3, 2,
  {"887_5_nth\000", "886_5_expr\000"}
};

static TAB_NUM t_lambda_65[] = {
  3, // locals
  0, // parameters
  // pos+len-1)
  var_std__plus, 2, var_889_11_pos, var_889_16_len, 1, LOCAL(1),
  // pos+len-1)
  var_std__minus, 2, LOCAL(1), num_1, 1, LOCAL(2),
  // range(str 1 pos+len-1)
  var_range, 3, var_885_5_str, num_1, LOCAL(2), 1, LOCAL(3),
  //  range(str 1 pos+len-1)
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(892, 20),
  POS(892, 20),
  POS(892, 8),
  POS(892, 7)
};

static FUNCTION_INFO i_lambda_65 = {
  t_lambda_65, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_66[] = {
  0, // locals
  0, // parameters
  //  ""
  LET, 1, string_1, TAIL_CALL,
  POS(893, 7)
};

static FUNCTION_INFO i_lambda_66 = {
  t_lambda_66, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_std_types__string___truncate_behind[] = {
  3, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_934_5_str,
  MANDATORY_PARAMETER, LOCAL(2), // 935_5_expr
  num_1, LOCAL(3), // 936_5_nth
  // search $pos $len expr str nth
  var_search, 3, LOCAL(2), var_934_5_str, LOCAL(3), 2, var_938_11_pos, var_938_16_len,
  // is_defined
  var_is_defined, 1, var_938_11_pos, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_67, lambda_68, TAIL_CALL,
  POS(938, 3),
  POS(940, 9),
  POS(939, 3),
  LOCAL(3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_std_types__string___truncate_behind = {
  t_func_std_types__string___truncate_behind, NULL, 3, 2,
  {"936_5_nth\000", "935_5_expr\000"}
};

static TAB_NUM t_lambda_67[] = {
  3, // locals
  0, // parameters
  // pos+len-1)
  var_std__plus, 2, var_938_11_pos, var_938_16_len, 1, LOCAL(1),
  // pos+len-1)
  var_std__minus, 2, LOCAL(1), num_1, 1, LOCAL(2),
  // range(str 1 pos+len-1)
  var_range, 3, var_934_5_str, num_1, LOCAL(2), 1, LOCAL(3),
  //  range(str 1 pos+len-1)
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(941, 20),
  POS(941, 20),
  POS(941, 8),
  POS(941, 7)
};

static FUNCTION_INFO i_lambda_67 = {
  t_lambda_67, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_68[] = {
  0, // locals
  0, // parameters
  //  str
  LET, 1, var_934_5_str, TAIL_CALL,
  POS(942, 7)
};

static FUNCTION_INFO i_lambda_68 = {
  t_lambda_68, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_std_types__string___between[] = {
  6, // locals
  -4, // parameters
  MANDATORY_PARAMETER, LOCAL(3), // 970_5_str
  MANDATORY_PARAMETER, LOCAL(4), // 971_5_expr_1
  MANDATORY_PARAMETER, LOCAL(5), // 972_5_expr_2
  num_1, LOCAL(6), // 973_5_nth
  // behind(str expr_1 nth) .before. expr_2
  var_behind, 3, LOCAL(3), LOCAL(4), LOCAL(6), 1, LOCAL(1),
  // behind(str expr_1 nth) .before. expr_2
  var_before, 2, LOCAL(1), LOCAL(5), 1, LOCAL(2),
  // -> behind(str expr_1 nth) .before. expr_2
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(975, 6),
  POS(975, 6),
  POS(975, 3),
  LOCAL(4),
  LOCAL(6),
  LOCAL(5),
  LOCAL(3)
};

static FUNCTION_INFO i_func_std_types__string___between = {
  t_func_std_types__string___between, NULL, 3, 4,
  {"971_5_expr_1\000", "973_5_nth\000", "972_5_expr_2\000", "970_5_str\000"}
};

static TAB_NUM t_func_std_types__string___has_prefix[] = {
  4, // locals
  2, // parameters
  LOCAL(3), // 994_5_self
  LOCAL(4), // 995_5_prefix
  // match(prefix self).is_defined
  var_match, 2, LOCAL(4), LOCAL(3), 1, LOCAL(1),
  // is_defined
  var_is_defined, 1, LOCAL(1), 1, LOCAL(2),
  // -> match(prefix self).is_defined
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(997, 6),
  POS(997, 25),
  POS(997, 3),
  LOCAL(3),
  LOCAL(4)
};

static FUNCTION_INFO i_func_std_types__string___has_prefix = {
  t_func_std_types__string___has_prefix, NULL, 3, 2,
  {"994_5_self\000", "995_5_prefix\000"}
};

static TAB_NUM t_func_std_types__string___has_suffix[] = {
  4, // locals
  2, // parameters
  LOCAL(3), // 1016_5_self
  LOCAL(4), // 1017_5_suffix
  // match_back(suffix self).is_defined
  var_match_back, 2, LOCAL(4), LOCAL(3), 1, LOCAL(1),
  // is_defined
  var_is_defined, 1, LOCAL(1), 1, LOCAL(2),
  // -> match_back(suffix self).is_defined
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1019, 6),
  POS(1019, 30),
  POS(1019, 3),
  LOCAL(3),
  LOCAL(4)
};

static FUNCTION_INFO i_func_std_types__string___has_suffix = {
  t_func_std_types__string___has_suffix, NULL, 3, 2,
  {"1016_5_self\000", "1017_5_suffix\000"}
};

static TAB_NUM t_func_std_types__string___without_prefix[] = {
  2, // locals
  2, // parameters
  var_1042_5_self,
  LOCAL(2), // 1043_5_prefix
  // $n match(prefix self)
  var_match, 2, LOCAL(2), var_1042_5_self, 1, var_1045_4_n,
  // is_defined
  var_is_defined, 1, var_1045_4_n, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_69, lambda_70, TAIL_CALL,
  POS(1045, 3),
  POS(1047, 7),
  POS(1046, 3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_std_types__string___without_prefix = {
  t_func_std_types__string___without_prefix, NULL, 3, 1,
  {"1043_5_prefix\000"}
};

static TAB_NUM t_lambda_69[] = {
  2, // locals
  0, // parameters
  // n+1 -1)
  var_std__plus, 2, var_1045_4_n, num_1, 1, LOCAL(1),
  // range(self n+1 -1)
  var_range, 3, var_1042_5_self, LOCAL(1), minus_num_1, 1, LOCAL(2),
  //  range(self n+1 -1)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1048, 19),
  POS(1048, 8),
  POS(1048, 7)
};

static FUNCTION_INFO i_lambda_69 = {
  t_lambda_69, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_70[] = {
  0, // locals
  0, // parameters
  //  self
  LET, 1, var_1042_5_self, TAIL_CALL,
  POS(1049, 7)
};

static FUNCTION_INFO i_lambda_70 = {
  t_lambda_70, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_std_types__string___without_suffix[] = {
  2, // locals
  2, // parameters
  var_1072_5_self,
  LOCAL(2), // 1073_5_suffix
  // $n match_back(suffix self)
  var_match_back, 2, LOCAL(2), var_1072_5_self, 1, var_1075_4_n,
  // is_defined
  var_is_defined, 1, var_1075_4_n, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_71, lambda_72, TAIL_CALL,
  POS(1075, 3),
  POS(1077, 7),
  POS(1076, 3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_std_types__string___without_suffix = {
  t_func_std_types__string___without_suffix, NULL, 3, 1,
  {"1073_5_suffix\000"}
};

static TAB_NUM t_lambda_71[] = {
  3, // locals
  0, // parameters
  // n+1))
  var_std__plus, 2, var_1075_4_n, num_1, 1, LOCAL(1),
  // (n+1))
  var_std__negate, 1, LOCAL(1), 1, LOCAL(2),
  // range(self 1 -(n+1))
  var_range, 3, var_1072_5_self, num_1, LOCAL(2), 1, LOCAL(3),
  //  range(self 1 -(n+1))
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(1078, 23),
  POS(1078, 22),
  POS(1078, 8),
  POS(1078, 7)
};

static FUNCTION_INFO i_lambda_71 = {
  t_lambda_71, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_72[] = {
  0, // locals
  0, // parameters
  //  self
  LET, 1, var_1072_5_self, TAIL_CALL,
  POS(1079, 7)
};

static FUNCTION_INFO i_lambda_72 = {
  t_lambda_72, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_std_types__string___contains[] = {
  4, // locals
  2, // parameters
  LOCAL(2), // 1104_5_self
  LOCAL(3), // 1105_5_expr
  // search $pos $_len expr self
  var_search, 2, LOCAL(3), LOCAL(2), 2, LOCAL(4), LOCAL(1),
  // is_defined
  var_is_defined, 1, LOCAL(4), 1, LOCAL(1),
  // -> pos.is_defined
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1107, 3),
  POS(1108, 10),
  POS(1108, 3),
  LOCAL(3),
  LOCAL(2),
  LOCAL(4)
};

static FUNCTION_INFO i_func_std_types__string___contains = {
  t_func_std_types__string___contains, NULL, 3, 3,
  {"1105_5_expr\000", "1104_5_self\000", "1107_11_pos\000"}
};

static TAB_NUM t_func_std__split[] = {
  1, // locals
  -2, // parameters
  MANDATORY_PARAMETER, var_1144_5_self,
  chr_32, var_1145_5_separator,
  // $rc result_count()
  var_result_count, 0, 1, var_1147_4_rc,
  // is_empty
  var_is_empty, 1, var_1144_5_self, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_73, lambda_74, TAIL_CALL,
  POS(1147, 3),
  POS(1149, 10),
  POS(1148, 3)
};

static FUNCTION_INFO i_func_std__split = {
  t_func_std__split, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_73[] = {
  0, // locals
  0, // parameters
  //  empty_list
  LET, 1, var_empty_list, TAIL_CALL,
  POS(1150, 7)
};

static FUNCTION_INFO i_lambda_73 = {
  t_lambda_73, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_74[] = {
  0, // locals
  0, // parameters
  // $items empty_list
  LET, 1, var_empty_list, 1, var_1152_8_items,
  // loop:
  var_loop, 1, lambda_2_loop, TAIL_CALL,
  POS(1152, 7),
  POS(1153, 7)
};

static FUNCTION_INFO i_lambda_74 = {
  t_lambda_74, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_2_loop[] = {
  1, // locals
  0, // parameters
  // search $pos $len separator self
  var_search, 2, var_1145_5_separator, var_1144_5_self, 2, var_1154_17_pos, var_1154_22_len,
  // is_defined:
  var_is_defined, 1, var_1154_17_pos, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_pos_is_defined, lambda_75, TAIL_CALL,
  POS(1154, 9),
  POS(1156, 15),
  POS(1155, 9)
};

static FUNCTION_INFO i_lambda_2_loop = {
  t_lambda_2_loop, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_pos_is_defined[] = {
  2, // locals
  0, // parameters
  // pos-1)
  var_std__minus, 2, var_1154_17_pos, num_1, 1, LOCAL(1),
  // range(self 1 pos-1)
  var_range, 3, var_1144_5_self, num_1, LOCAL(1), 1, LOCAL(2),
  // push &items range(self 1 pos-1)
  var_push, 2, var_1152_8_items, LOCAL(2), 1, var_1152_8_items,
  // pos+len -1
  var_std__plus, 2, var_1154_17_pos, var_1154_22_len, 1, LOCAL(1),
  // range &self pos+len -1
  var_range, 3, var_1144_5_self, LOCAL(1), minus_num_1, 1, var_1144_5_self,
  // next
  var_next, 0, TAIL_CALL,
  POS(1157, 38),
  POS(1157, 25),
  POS(1157, 13),
  POS(1158, 25),
  POS(1158, 13),
  POS(1159, 13)
};

static FUNCTION_INFO i_lambda_pos_is_defined = {
  t_lambda_pos_is_defined, NULL, 6, 0,
  {}
};

static TAB_NUM t_lambda_75[] = {
  1, // locals
  0, // parameters
  // push &items self
  var_push, 2, var_1152_8_items, var_1144_5_self, 1, var_1152_8_items,
  // rc == 1
  var_std__equal, 2, var_1147_4_rc, num_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_76, lambda_77, TAIL_CALL,
  POS(1161, 13),
  POS(1163, 15),
  POS(1162, 13)
};

static FUNCTION_INFO i_lambda_75 = {
  t_lambda_75, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_76[] = {
  0, // locals
  0, // parameters
  //  items
  LET, 1, var_1152_8_items, TAIL_CALL,
  POS(1164, 17)
};

static FUNCTION_INFO i_lambda_76 = {
  t_lambda_76, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_77[] = {
  0, // locals
  0, // parameters
  // spread items
  var_spread, 1, var_1152_8_items, TAIL_CALL,
  POS(1166, 17)
};

static FUNCTION_INFO i_lambda_77 = {
  t_lambda_77, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_std__join[] = {
  1, // locals
  -2, // parameters
  MANDATORY_PARAMETER, LOCAL(1), // 1191_5_items
  string_2, var_1192_5_separator,
  // to_string &separator
  var_to_string, 1, var_1192_5_separator, 1, var_1192_5_separator,
  // map_reduce
  var_map_reduce, 4, LOCAL(1), var_to_string, lambda_78, string_1, TAIL_CALL,
  POS(1194, 3),
  POS(1195, 3),
  LOCAL(1)
};

static FUNCTION_INFO i_func_std__join = {
  t_func_std__join, NULL, 2, 1,
  {"1191_5_items\000"}
};

static TAB_NUM t_lambda_78[] = {
  2, // locals
  2, // parameters
  LOCAL(1), // 1197_8_left
  LOCAL(2), // 1197_13_right
  // append left separator right
  var_append, 3, LOCAL(1), var_1192_5_separator, LOCAL(2), TAIL_CALL,
  POS(1197, 20),
  LOCAL(1),
  LOCAL(2)
};

static FUNCTION_INFO i_lambda_78 = {
  t_lambda_78, NULL, 1, 2,
  {"1197_8_left\000", "1197_13_right\000"}
};

static TAB_NUM t_func_std__trim[] = {
  0, // locals
  -2, // parameters
  MANDATORY_PARAMETER, var_1221_5_self,
  var_is_a_whitespace_character, var_1222_5_test,
  // $s 1
  LET, 1, num_1, 1, var_1224_4_s,
  // $e length_of(self)
  var_length_of, 1, var_1221_5_self, 1, var_1225_4_e,
  // loop:
  var_loop, 1, lambda_3_loop, TAIL_CALL,
  POS(1224, 3),
  POS(1225, 3),
  POS(1226, 3)
};

static FUNCTION_INFO i_func_std__trim = {
  t_func_std__trim, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_3_loop[] = {
  3, // locals
  0, // parameters
  // e && test(self(s)):
  var_std__less, 2, var_1225_4_e, var_1224_4_s, 1, LOCAL(1),
  // e && test(self(s)):
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // e && test(self(s)):
  var_std__and, 2, LOCAL(2), lambda_79, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_80, lambda_81, TAIL_CALL,
  POS(1228, 12),
  POS(1228, 12),
  POS(1228, 12),
  POS(1227, 5)
};

static FUNCTION_INFO i_lambda_3_loop = {
  t_lambda_3_loop, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_79[] = {
  2, // locals
  0, // parameters
  // self(s)):
  var_1221_5_self, 1, var_1224_4_s, 1, LOCAL(1),
  // test(self(s)):
  var_1222_5_test, 1, LOCAL(1), 1, LOCAL(2),
  // test(self(s)):
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1228, 22),
  POS(1228, 17),
  POS(1228, 17)
};

static FUNCTION_INFO i_lambda_79 = {
  t_lambda_79, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_80[] = {
  0, // locals
  0, // parameters
  // inc &s
  var_inc, 1, var_1224_4_s, 1, var_1224_4_s,
  // next
  var_next, 0, TAIL_CALL,
  POS(1229, 9),
  POS(1230, 9)
};

static FUNCTION_INFO i_lambda_80 = {
  t_lambda_80, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_81[] = {
  0, // locals
  0, // parameters
  // loop:
  var_loop, 1, lambda_4_loop, TAIL_CALL,
  POS(1232, 9)
};

static FUNCTION_INFO i_lambda_81 = {
  t_lambda_81, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_4_loop[] = {
  3, // locals
  0, // parameters
  // e >= s && test(self(e)):
  var_std__less, 2, var_1225_4_e, var_1224_4_s, 1, LOCAL(1),
  // e >= s && test(self(e)):
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // e >= s && test(self(e)):
  var_std__and, 2, LOCAL(2), lambda_82, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_83, lambda_84, TAIL_CALL,
  POS(1234, 13),
  POS(1234, 13),
  POS(1234, 13),
  POS(1233, 11)
};

static FUNCTION_INFO i_lambda_4_loop = {
  t_lambda_4_loop, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_82[] = {
  2, // locals
  0, // parameters
  // self(e)):
  var_1221_5_self, 1, var_1225_4_e, 1, LOCAL(1),
  // test(self(e)):
  var_1222_5_test, 1, LOCAL(1), 1, LOCAL(2),
  // test(self(e)):
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1234, 28),
  POS(1234, 23),
  POS(1234, 23)
};

static FUNCTION_INFO i_lambda_82 = {
  t_lambda_82, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_83[] = {
  0, // locals
  0, // parameters
  // dec &e
  var_dec, 1, var_1225_4_e, 1, var_1225_4_e,
  // next
  var_next, 0, TAIL_CALL,
  POS(1235, 15),
  POS(1236, 15)
};

static FUNCTION_INFO i_lambda_83 = {
  t_lambda_83, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_84[] = {
  0, // locals
  0, // parameters
  // range self s e
  var_range, 3, var_1221_5_self, var_1224_4_s, var_1225_4_e, TAIL_CALL,
  POS(1238, 15)
};

static FUNCTION_INFO i_lambda_84 = {
  t_lambda_84, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_std__trim_left[] = {
  0, // locals
  -2, // parameters
  MANDATORY_PARAMETER, var_1261_5_self,
  var_is_a_whitespace_character, var_1262_5_test,
  // $s 1
  LET, 1, num_1, 1, var_1264_4_s,
  // $e length_of(self)
  var_length_of, 1, var_1261_5_self, 1, var_1265_4_e,
  // loop:
  var_loop, 1, lambda_5_loop, TAIL_CALL,
  POS(1264, 3),
  POS(1265, 3),
  POS(1266, 3)
};

static FUNCTION_INFO i_func_std__trim_left = {
  t_func_std__trim_left, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_5_loop[] = {
  3, // locals
  0, // parameters
  // e && test(self(s)):
  var_std__less, 2, var_1265_4_e, var_1264_4_s, 1, LOCAL(1),
  // e && test(self(s)):
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // e && test(self(s)):
  var_std__and, 2, LOCAL(2), lambda_85, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_86, lambda_87, TAIL_CALL,
  POS(1268, 12),
  POS(1268, 12),
  POS(1268, 12),
  POS(1267, 5)
};

static FUNCTION_INFO i_lambda_5_loop = {
  t_lambda_5_loop, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_85[] = {
  2, // locals
  0, // parameters
  // self(s)):
  var_1261_5_self, 1, var_1264_4_s, 1, LOCAL(1),
  // test(self(s)):
  var_1262_5_test, 1, LOCAL(1), 1, LOCAL(2),
  // test(self(s)):
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1268, 22),
  POS(1268, 17),
  POS(1268, 17)
};

static FUNCTION_INFO i_lambda_85 = {
  t_lambda_85, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_86[] = {
  0, // locals
  0, // parameters
  // inc &s
  var_inc, 1, var_1264_4_s, 1, var_1264_4_s,
  // next
  var_next, 0, TAIL_CALL,
  POS(1269, 9),
  POS(1270, 9)
};

static FUNCTION_INFO i_lambda_86 = {
  t_lambda_86, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_87[] = {
  0, // locals
  0, // parameters
  // range self s e
  var_range, 3, var_1261_5_self, var_1264_4_s, var_1265_4_e, TAIL_CALL,
  POS(1272, 9)
};

static FUNCTION_INFO i_lambda_87 = {
  t_lambda_87, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_std__trim_right[] = {
  0, // locals
  -2, // parameters
  MANDATORY_PARAMETER, var_1295_5_self,
  var_is_a_whitespace_character, var_1296_5_test,
  // $e length_of(self)
  var_length_of, 1, var_1295_5_self, 1, var_1298_4_e,
  // loop:
  var_loop, 1, lambda_6_loop, TAIL_CALL,
  POS(1298, 3),
  POS(1299, 3)
};

static FUNCTION_INFO i_func_std__trim_right = {
  t_func_std__trim_right, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_6_loop[] = {
  3, // locals
  0, // parameters
  // e >= 1 && test(self(e)):
  var_std__less, 2, var_1298_4_e, num_1, 1, LOCAL(1),
  // e >= 1 && test(self(e)):
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // e >= 1 && test(self(e)):
  var_std__and, 2, LOCAL(2), lambda_88, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_89, lambda_90, TAIL_CALL,
  POS(1301, 7),
  POS(1301, 7),
  POS(1301, 7),
  POS(1300, 5)
};

static FUNCTION_INFO i_lambda_6_loop = {
  t_lambda_6_loop, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_88[] = {
  2, // locals
  0, // parameters
  // self(e)):
  var_1295_5_self, 1, var_1298_4_e, 1, LOCAL(1),
  // test(self(e)):
  var_1296_5_test, 1, LOCAL(1), 1, LOCAL(2),
  // test(self(e)):
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1301, 22),
  POS(1301, 17),
  POS(1301, 17)
};

static FUNCTION_INFO i_lambda_88 = {
  t_lambda_88, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_89[] = {
  0, // locals
  0, // parameters
  // dec &e
  var_dec, 1, var_1298_4_e, 1, var_1298_4_e,
  // next
  var_next, 0, TAIL_CALL,
  POS(1302, 9),
  POS(1303, 9)
};

static FUNCTION_INFO i_lambda_89 = {
  t_lambda_89, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_90[] = {
  0, // locals
  0, // parameters
  // range self 1 e
  var_range, 3, var_1295_5_self, num_1, var_1298_4_e, TAIL_CALL,
  POS(1305, 9)
};

static FUNCTION_INFO i_lambda_90 = {
  t_lambda_90, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_std__normalize[] = {
  0, // locals
  1, // parameters
  var_1329_5_self,
  // $buf ""
  LET, 1, string_1, 1, var_1331_4_buf,
  // $e length_of(self)
  var_length_of, 1, var_1329_5_self, 1, var_1332_4_e,
  // $i 0
  LET, 1, num_0, 1, var_1333_4_i,
  // loop:
  var_loop, 1, lambda_7_loop, TAIL_CALL,
  POS(1331, 3),
  POS(1332, 3),
  POS(1333, 3),
  POS(1334, 3)
};

static FUNCTION_INFO i_func_std__normalize = {
  t_func_std__normalize, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_7_loop[] = {
  0, // locals
  0, // parameters
  // loop
  var_loop, 2, lambda_91, lambda_94, TAIL_CALL,
  POS(1335, 5)
};

static FUNCTION_INFO i_lambda_7_loop = {
  t_lambda_7_loop, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_91[] = {
  1, // locals
  0, // parameters
  // inc &i
  var_inc, 1, var_1333_4_i, 1, var_1333_4_i,
  // e
  var_std__less, 2, var_1332_4_e, var_1333_4_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_92, lambda_93, TAIL_CALL,
  POS(1337, 9),
  POS(1339, 15),
  POS(1338, 9)
};

static FUNCTION_INFO i_lambda_91 = {
  t_lambda_91, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_92[] = {
  0, // locals
  0, // parameters
  //  buf
  LET, 1, var_1331_4_buf, TAIL_CALL,
  POS(1340, 13)
};

static FUNCTION_INFO i_lambda_92 = {
  t_lambda_92, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_93[] = {
  2, // locals
  0, // parameters
  // self(i).is_a_whitespace_character
  var_1329_5_self, 1, var_1333_4_i, 1, LOCAL(1),
  // is_a_whitespace_character
  var_is_a_whitespace_character, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), var_next, var_break, TAIL_CALL,
  POS(1343, 15),
  POS(1343, 23),
  POS(1342, 13)
};

static FUNCTION_INFO i_lambda_93 = {
  t_lambda_93, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_94[] = {
  1, // locals
  0, // parameters
  // is_not_empty &buf -> push(buf ' ')
  var_is_not_empty, 1, var_1331_4_buf, 1, LOCAL(1),
  // update_if buf.is_not_empty &buf -> push(buf ' ')
  var_update_if, 3, LOCAL(1), var_1331_4_buf, lambda_95, 1, var_1331_4_buf,
  // $s i
  LET, 1, var_1333_4_i, 1, var_1348_10_s,
  // loop
  var_loop, 2, lambda_96, lambda_99, TAIL_CALL,
  POS(1347, 23),
  POS(1347, 9),
  POS(1348, 9),
  POS(1349, 9)
};

static FUNCTION_INFO i_lambda_94 = {
  t_lambda_94, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_95[] = {
  1, // locals
  0, // parameters
  // push(buf ' ')
  var_push, 2, var_1331_4_buf, chr_32, 1, LOCAL(1),
  //  push(buf ' ')
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1347, 44),
  POS(1347, 43)
};

static FUNCTION_INFO i_lambda_95 = {
  t_lambda_95, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_96[] = {
  1, // locals
  0, // parameters
  // inc &i
  var_inc, 1, var_1333_4_i, 1, var_1333_4_i,
  // e
  var_std__less, 2, var_1332_4_e, var_1333_4_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_97, lambda_98, TAIL_CALL,
  POS(1351, 13),
  POS(1353, 19),
  POS(1352, 13)
};

static FUNCTION_INFO i_lambda_96 = {
  t_lambda_96, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_97[] = {
  2, // locals
  0, // parameters
  // range(self s e))
  var_range, 3, var_1329_5_self, var_1348_10_s, var_1332_4_e, 1, LOCAL(1),
  // append(buf range(self s e))
  var_append, 2, var_1331_4_buf, LOCAL(1), 1, LOCAL(2),
  //  append(buf range(self s e))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1354, 29),
  POS(1354, 18),
  POS(1354, 17)
};

static FUNCTION_INFO i_lambda_97 = {
  t_lambda_97, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_98[] = {
  2, // locals
  0, // parameters
  // self(i).is_a_whitespace_character
  var_1329_5_self, 1, var_1333_4_i, 1, LOCAL(1),
  // is_a_whitespace_character
  var_is_a_whitespace_character, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), var_break, var_next, TAIL_CALL,
  POS(1357, 19),
  POS(1357, 27),
  POS(1356, 17)
};

static FUNCTION_INFO i_lambda_98 = {
  t_lambda_98, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_99[] = {
  2, // locals
  0, // parameters
  // i-1)
  var_std__minus, 2, var_1333_4_i, num_1, 1, LOCAL(1),
  // range(self s i-1)
  var_range, 3, var_1329_5_self, var_1348_10_s, LOCAL(1), 1, LOCAL(2),
  // append &buf range(self s i-1)
  var_append, 2, var_1331_4_buf, LOCAL(2), 1, var_1331_4_buf,
  // next
  var_next, 0, TAIL_CALL,
  POS(1361, 38),
  POS(1361, 25),
  POS(1361, 13),
  POS(1362, 13)
};

static FUNCTION_INFO i_lambda_99 = {
  t_lambda_99, NULL, 4, 0,
  {}
};

static TAB_NUM t_func_std_types__octet_string___to_base64[] = {
  0, // locals
  1, // parameters
  var_1380_5_str,
  // $base64 ""
  LET, 1, string_1, 1, var_1382_4_base64,
  // loop:
  var_loop, 1, lambda_8_loop, TAIL_CALL,
  POS(1382, 3),
  POS(1383, 3)
};

static FUNCTION_INFO i_func_std_types__octet_string___to_base64 = {
  t_func_std_types__octet_string___to_base64, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_8_loop[] = {
  2, // locals
  0, // parameters
  // $len length_of(str)
  var_length_of, 1, var_1380_5_str, 1, var_1384_6_len,
  // len >= 3:
  var_std__less, 2, var_1384_6_len, num_3, 1, LOCAL(1),
  // len >= 3:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_100, lambda_101, TAIL_CALL,
  POS(1384, 5),
  POS(1386, 7),
  POS(1386, 7),
  POS(1385, 5)
};

static FUNCTION_INFO i_lambda_8_loop = {
  t_lambda_8_loop, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_100[] = {
  2, // locals
  0, // parameters
  // range(str 1 3))
  var_range, 3, var_1380_5_str, num_1, num_3, 1, LOCAL(1),
  // encode(range(str 1 3))
  func_encode, 1, LOCAL(1), 1, LOCAL(2),
  // append &base64 encode(range(str 1 3))
  var_append, 2, var_1382_4_base64, LOCAL(2), 1, var_1382_4_base64,
  // range &str 4 -1
  var_range, 3, var_1380_5_str, num_4, minus_num_1, 1, var_1380_5_str,
  // next
  var_next, 0, TAIL_CALL,
  POS(1387, 31),
  POS(1387, 24),
  POS(1387, 9),
  POS(1388, 9),
  POS(1389, 9)
};

static FUNCTION_INFO i_lambda_100 = {
  t_lambda_100, NULL, 5, 0,
  {}
};

static TAB_NUM t_lambda_101[] = {
  1, // locals
  0, // parameters
  // len == 0
  var_std__equal, 2, var_1384_6_len, num_0, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_102, lambda_103, TAIL_CALL,
  POS(1392, 11),
  POS(1391, 9)
};

static FUNCTION_INFO i_lambda_101 = {
  t_lambda_101, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_102[] = {
  0, // locals
  0, // parameters
  //  base64
  LET, 1, var_1382_4_base64, TAIL_CALL,
  POS(1393, 13)
};

static FUNCTION_INFO i_lambda_102 = {
  t_lambda_102, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_103[] = {
  2, // locals
  0, // parameters
  // 3-len)
  var_std__minus, 2, num_3, var_1384_6_len, 1, LOCAL(1),
  // dup("@0;" 3-len)
  var_dup, 2, string_7, LOCAL(1), 1, LOCAL(2),
  // append &str dup("@0;" 3-len)
  var_append, 2, var_1380_5_str, LOCAL(2), 1, var_1380_5_str,
  // encode(str)
  func_encode, 1, var_1380_5_str, 1, LOCAL(1),
  // append &base64 encode(str)
  var_append, 2, var_1382_4_base64, LOCAL(1), 1, var_1382_4_base64,
  // case len
  var_case, 5, var_1384_6_len, num_1, lambda_104, num_2, lambda_105, TAIL_CALL,
  POS(1395, 35),
  POS(1395, 25),
  POS(1395, 13),
  POS(1396, 28),
  POS(1396, 13),
  POS(1397, 13)
};

static FUNCTION_INFO i_lambda_103 = {
  t_lambda_103, NULL, 6, 0,
  {}
};

static TAB_NUM t_lambda_104[] = {
  2, // locals
  0, // parameters
  // range(base64 1 -3) "==")
  var_range, 3, var_1382_4_base64, num_1, minus_num_3, 1, LOCAL(1),
  // append(range(base64 1 -3) "==")
  var_append, 2, LOCAL(1), string_8, 1, LOCAL(2),
  //  append(range(base64 1 -3) "==")
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1398, 27),
  POS(1398, 20),
  POS(1398, 19)
};

static FUNCTION_INFO i_lambda_104 = {
  t_lambda_104, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_105[] = {
  2, // locals
  0, // parameters
  // range(base64 1 -2) '=')
  var_range, 3, var_1382_4_base64, num_1, minus_num_2, 1, LOCAL(1),
  // push(range(base64 1 -2) '=')
  var_push, 2, LOCAL(1), chr_61, 1, LOCAL(2),
  //  push(range(base64 1 -2) '=')
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1399, 25),
  POS(1399, 20),
  POS(1399, 19)
};

static FUNCTION_INFO i_lambda_105 = {
  t_lambda_105, NULL, 3, 0,
  {}
};

static TAB_NUM t_func_encode[] = {
  10, // locals
  1, // parameters
  LOCAL(10), // 1401_13_three_octets
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
  var_std__bit_or, 2, LOCAL(7), LOCAL(9), 1, var_1403_6_bits,
  // $buf ""
  LET, 1, string_1, 1, var_1408_6_buf,
  // repeat 4
  var_repeat, 3, num_4, lambda_106, lambda_112, TAIL_CALL,
  POS(1405, 9),
  POS(1405, 25),
  POS(1405, 25),
  POS(1406, 9),
  POS(1406, 25),
  POS(1406, 25),
  POS(1404, 8),
  POS(1407, 9),
  POS(1407, 25),
  POS(1403, 5),
  POS(1408, 5),
  POS(1409, 5),
  LOCAL(10)
};

static FUNCTION_INFO i_func_encode = {
  t_func_encode, NULL, 12, 1,
  {"1401_13_three_octets\000"}
};

static TAB_NUM t_lambda_106[] = {
  1, // locals
  0, // parameters
  // $value bits >> 18
  var_std__shift_right, 2, var_1403_6_bits, num_18, 1, var_1411_10_value,
  // bits & 0x3ffff) << 6
  var_std__bit_and, 2, var_1403_6_bits, num_0x3ffff, 1, LOCAL(1),
  // !bits (bits & 0x3ffff) << 6
  var_std__shift_left, 2, LOCAL(1), num_6, 1, var_1403_6_bits,
  // case value
  var_case, 11, var_1411_10_value, value_range_1414_11, lambda_107, value_range_1417_11, lambda_108, value_range_1420_11, lambda_109, num_62, lambda_110, num_63, lambda_111, TAIL_CALL,
  POS(1411, 9),
  POS(1412, 16),
  POS(1412, 9),
  POS(1413, 9)
};

static FUNCTION_INFO i_lambda_106 = {
  t_lambda_106, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_107[] = {
  1, // locals
  0, // parameters
  // A'+value
  var_std__plus, 2, chr_65, var_1411_10_value, 1, LOCAL(1),
  // push &buf 'A'+value
  var_push, 2, var_1408_6_buf, LOCAL(1), 1, var_1408_6_buf,
  // next
  var_next, 0, TAIL_CALL,
  POS(1415, 24),
  POS(1415, 13),
  POS(1416, 13)
};

static FUNCTION_INFO i_lambda_107 = {
  t_lambda_107, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_108[] = {
  2, // locals
  0, // parameters
  // value-26)
  var_std__minus, 2, var_1411_10_value, num_26, 1, LOCAL(1),
  // a'+(value-26)
  var_std__plus, 2, chr_97, LOCAL(1), 1, LOCAL(2),
  // push &buf 'a'+(value-26)
  var_push, 2, var_1408_6_buf, LOCAL(2), 1, var_1408_6_buf,
  // next
  var_next, 0, TAIL_CALL,
  POS(1418, 28),
  POS(1418, 24),
  POS(1418, 13),
  POS(1419, 13)
};

static FUNCTION_INFO i_lambda_108 = {
  t_lambda_108, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_109[] = {
  2, // locals
  0, // parameters
  // value-52)
  var_std__minus, 2, var_1411_10_value, num_52, 1, LOCAL(1),
  // 0'+(value-52)
  var_std__plus, 2, chr_48, LOCAL(1), 1, LOCAL(2),
  // push &buf '0'+(value-52)
  var_push, 2, var_1408_6_buf, LOCAL(2), 1, var_1408_6_buf,
  // next
  var_next, 0, TAIL_CALL,
  POS(1421, 28),
  POS(1421, 24),
  POS(1421, 13),
  POS(1422, 13)
};

static FUNCTION_INFO i_lambda_109 = {
  t_lambda_109, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_110[] = {
  0, // locals
  0, // parameters
  // push &buf '+'
  var_push, 2, var_1408_6_buf, chr_43, 1, var_1408_6_buf,
  // next
  var_next, 0, TAIL_CALL,
  POS(1424, 13),
  POS(1425, 13)
};

static FUNCTION_INFO i_lambda_110 = {
  t_lambda_110, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_111[] = {
  0, // locals
  0, // parameters
  // push &buf '/'
  var_push, 2, var_1408_6_buf, chr_47, 1, var_1408_6_buf,
  // next
  var_next, 0, TAIL_CALL,
  POS(1427, 13),
  POS(1428, 13)
};

static FUNCTION_INFO i_lambda_111 = {
  t_lambda_111, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_112[] = {
  0, // locals
  0, // parameters
  //  buf
  LET, 1, var_1408_6_buf, TAIL_CALL,
  POS(1429, 9)
};

static FUNCTION_INFO i_lambda_112 = {
  t_lambda_112, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_std_types__octet_string___from_base64[] = {
  4, // locals
  1, // parameters
  var_1450_5_str,
  // $octets ""
  LET, 1, string_1, 1, var_1452_4_octets,
  // length_of(str) .mod. 4) != 0
  var_length_of, 1, var_1450_5_str, 1, LOCAL(1),
  // length_of(str) .mod. 4) != 0
  var_mod, 2, LOCAL(1), num_4, 1, LOCAL(2),
  // length_of(str) .mod. 4) != 0
  var_std__equal, 2, LOCAL(2), num_0, 1, LOCAL(3),
  // length_of(str) .mod. 4) != 0
  var_std__not, 1, LOCAL(3), 1, LOCAL(4),
  // if
  var_if, 3, LOCAL(4), lambda_113, lambda_114, TAIL_CALL,
  POS(1452, 3),
  POS(1454, 6),
  POS(1454, 6),
  POS(1454, 6),
  POS(1454, 6),
  POS(1453, 3)
};

static FUNCTION_INFO i_func_std_types__octet_string___from_base64 = {
  t_func_std_types__octet_string___from_base64, NULL, 6, 0,
  {}
};

static TAB_NUM t_lambda_113[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(1455, 7)
};

static FUNCTION_INFO i_lambda_113 = {
  t_lambda_113, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_114[] = {
  0, // locals
  0, // parameters
  // loop:
  var_loop, 1, lambda_9_loop, TAIL_CALL,
  POS(1457, 7)
};

static FUNCTION_INFO i_lambda_114 = {
  t_lambda_114, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_9_loop[] = {
  1, // locals
  0, // parameters
  // is_empty
  var_is_empty, 1, var_1450_5_str, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_115, lambda_116, TAIL_CALL,
  POS(1459, 15),
  POS(1458, 9)
};

static FUNCTION_INFO i_lambda_9_loop = {
  t_lambda_9_loop, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_115[] = {
  0, // locals
  0, // parameters
  //  octets
  LET, 1, var_1452_4_octets, TAIL_CALL,
  POS(1460, 13)
};

static FUNCTION_INFO i_lambda_115 = {
  t_lambda_115, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_116[] = {
  0, // locals
  0, // parameters
  // $bits 0
  LET, 1, num_0, 1, var_1462_14_bits,
  // from_to 1 4
  var_from_to, 4, num_1, num_4, lambda_117, lambda_120, TAIL_CALL,
  POS(1462, 13),
  POS(1463, 13)
};

static FUNCTION_INFO i_lambda_116 = {
  t_lambda_116, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_117[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 1464_18_i
  // str(i))
  var_1450_5_str, 1, LOCAL(2), 1, LOCAL(1),
  // $value decode(str(i))
  func_decode, 1, LOCAL(1), 1, var_1465_18_value,
  // is_undefined
  var_is_undefined, 1, var_1465_18_value, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_118, lambda_119, TAIL_CALL,
  POS(1465, 31),
  POS(1465, 17),
  POS(1467, 25),
  POS(1466, 17),
  LOCAL(2)
};

static FUNCTION_INFO i_lambda_117 = {
  t_lambda_117, NULL, 4, 1,
  {"1464_18_i\000"}
};

static TAB_NUM t_lambda_118[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(1468, 21)
};

static FUNCTION_INFO i_lambda_118 = {
  t_lambda_118, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_119[] = {
  1, // locals
  0, // parameters
  // bits << 6) | value
  var_std__shift_left, 2, var_1462_14_bits, num_6, 1, LOCAL(1),
  // !bits (bits << 6) | value
  var_std__bit_or, 2, LOCAL(1), var_1465_18_value, 1, var_1462_14_bits,
  // next
  var_next, 0, TAIL_CALL,
  POS(1470, 28),
  POS(1470, 21),
  POS(1471, 21)
};

static FUNCTION_INFO i_lambda_119 = {
  t_lambda_119, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_120[] = {
  3, // locals
  0, // parameters
  // bits >> 16)
  var_std__shift_right, 2, var_1462_14_bits, num_16, 1, LOCAL(1),
  // character(bits >> 16)
  var_character, 1, LOCAL(1), 1, LOCAL(2),
  // push &octets character(bits >> 16)
  var_push, 2, var_1452_4_octets, LOCAL(2), 1, var_1452_4_octets,
  // bits >> 8) & 0xff)
  var_std__shift_right, 2, var_1462_14_bits, num_8, 1, LOCAL(1),
  // bits >> 8) & 0xff)
  var_std__bit_and, 2, LOCAL(1), num_0xff, 1, LOCAL(2),
  // character((bits >> 8) & 0xff)
  var_character, 1, LOCAL(2), 1, LOCAL(3),
  // push &octets character((bits >> 8) & 0xff)
  var_push, 2, var_1452_4_octets, LOCAL(3), 1, var_1452_4_octets,
  // bits & 0xff)
  var_std__bit_and, 2, var_1462_14_bits, num_0xff, 1, LOCAL(1),
  // character(bits & 0xff)
  var_character, 1, LOCAL(1), 1, LOCAL(2),
  // push &octets character(bits & 0xff)
  var_push, 2, var_1452_4_octets, LOCAL(2), 1, var_1452_4_octets,
  // str(4) == '=':
  var_1450_5_str, 1, num_4, 1, LOCAL(1),
  // str(4) == '=':
  var_std__equal, 2, LOCAL(1), chr_61, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_121, lambda_124, TAIL_CALL,
  POS(1473, 40),
  POS(1473, 30),
  POS(1473, 17),
  POS(1474, 41),
  POS(1474, 41),
  POS(1474, 30),
  POS(1474, 17),
  POS(1475, 40),
  POS(1475, 30),
  POS(1475, 17),
  POS(1477, 19),
  POS(1477, 19),
  POS(1476, 17)
};

static FUNCTION_INFO i_lambda_120 = {
  t_lambda_120, NULL, 13, 0,
  {}
};

static TAB_NUM t_lambda_121[] = {
  2, // locals
  0, // parameters
  // str(3) == '='
  var_1450_5_str, 1, num_3, 1, LOCAL(1),
  // str(3) == '='
  var_std__equal, 2, LOCAL(1), chr_61, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_122, lambda_123, TAIL_CALL,
  POS(1479, 23),
  POS(1479, 23),
  POS(1478, 21)
};

static FUNCTION_INFO i_lambda_121 = {
  t_lambda_121, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_122[] = {
  1, // locals
  0, // parameters
  // range(octets 1 -3)
  var_range, 3, var_1452_4_octets, num_1, minus_num_3, 1, LOCAL(1),
  //  range(octets 1 -3)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1480, 26),
  POS(1480, 25)
};

static FUNCTION_INFO i_lambda_122 = {
  t_lambda_122, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_123[] = {
  1, // locals
  0, // parameters
  // range(octets 1 -2)
  var_range, 3, var_1452_4_octets, num_1, minus_num_2, 1, LOCAL(1),
  //  range(octets 1 -2)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1481, 26),
  POS(1481, 25)
};

static FUNCTION_INFO i_lambda_123 = {
  t_lambda_123, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_124[] = {
  0, // locals
  0, // parameters
  // range &str 5 -1
  var_range, 3, var_1450_5_str, num_5, minus_num_1, 1, var_1450_5_str,
  // next
  var_next, 0, TAIL_CALL,
  POS(1483, 21),
  POS(1484, 21)
};

static FUNCTION_INFO i_lambda_124 = {
  t_lambda_124, NULL, 2, 0,
  {}
};

static TAB_NUM t_func_decode[] = {
  0, // locals
  1, // parameters
  var_1486_13_chr,
  // case chr
  var_case, 14, var_1486_13_chr, value_range_1489_8, lambda_125, value_range_1490_8, lambda_126, value_range_1491_8, lambda_127, chr_43, lambda_128, chr_47, lambda_129, chr_61, lambda_130, lambda_131, TAIL_CALL,
  POS(1488, 5)
};

static FUNCTION_INFO i_func_decode = {
  t_func_decode, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_125[] = {
  1, // locals
  0, // parameters
  // chr-'A'
  var_std__minus, 2, var_1486_13_chr, chr_65, 1, LOCAL(1),
  //  chr-'A'
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1489, 21),
  POS(1489, 20)
};

static FUNCTION_INFO i_lambda_125 = {
  t_lambda_125, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_126[] = {
  2, // locals
  0, // parameters
  // chr-'a'+26
  var_std__minus, 2, var_1486_13_chr, chr_97, 1, LOCAL(1),
  // chr-'a'+26
  var_std__plus, 2, LOCAL(1), num_26, 1, LOCAL(2),
  //  chr-'a'+26
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1490, 21),
  POS(1490, 21),
  POS(1490, 20)
};

static FUNCTION_INFO i_lambda_126 = {
  t_lambda_126, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_127[] = {
  2, // locals
  0, // parameters
  // chr-'0'+52
  var_std__minus, 2, var_1486_13_chr, chr_48, 1, LOCAL(1),
  // chr-'0'+52
  var_std__plus, 2, LOCAL(1), num_52, 1, LOCAL(2),
  //  chr-'0'+52
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1491, 21),
  POS(1491, 21),
  POS(1491, 20)
};

static FUNCTION_INFO i_lambda_127 = {
  t_lambda_127, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_128[] = {
  0, // locals
  0, // parameters
  //  62
  LET, 1, num_62, TAIL_CALL,
  POS(1492, 13)
};

static FUNCTION_INFO i_lambda_128 = {
  t_lambda_128, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_129[] = {
  0, // locals
  0, // parameters
  //  63
  LET, 1, num_63, TAIL_CALL,
  POS(1493, 13)
};

static FUNCTION_INFO i_lambda_129 = {
  t_lambda_129, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_130[] = {
  0, // locals
  0, // parameters
  //  0
  LET, 1, num_0, TAIL_CALL,
  POS(1494, 13)
};

static FUNCTION_INFO i_lambda_130 = {
  t_lambda_130, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_131[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(1495, 9)
};

static FUNCTION_INFO i_lambda_131 = {
  t_lambda_131, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_std_types__octet_string___sha1[] = {
  4, // locals
  1, // parameters
  var_1512_5_message,
  // $h0 0x67452301
  LET, 1, num_0x67452301, 1, var_1516_4_h0,
  // $h1 0xefcdab89
  LET, 1, num_0xefcdab89, 1, var_1517_4_h1,
  // $h2 0x98badcfe
  LET, 1, num_0x98badcfe, 1, var_1518_4_h2,
  // $h3 0x10325476
  LET, 1, num_0x10325476, 1, var_1519_4_h3,
  // $h4 0xc3d2e1f0
  LET, 1, num_0xc3d2e1f0, 1, var_1520_4_h4,
  // $len length_of(message)
  var_length_of, 1, var_1512_5_message, 1, LOCAL(3),
  // push &message '@0x80;'
  var_push, 2, var_1512_5_message, chr_128, 1, var_1512_5_message,
  // len+1 .mod. 512)
  var_std__plus, 2, LOCAL(3), num_1, 1, LOCAL(1),
  // len+1 .mod. 512)
  var_mod, 2, LOCAL(1), num_512, 1, LOCAL(2),
  // $pad_len 56-(len+1 .mod. 512)
  var_std__minus, 2, num_56, LOCAL(2), 1, var_1541_4_pad_len,
  // pad_len < 0 &pad_len -> pad_len+64
  var_std__less, 2, var_1541_4_pad_len, num_0, 1, LOCAL(1),
  // update_if pad_len < 0 &pad_len -> pad_len+64
  var_update_if, 3, LOCAL(1), var_1541_4_pad_len, lambda_132, 1, var_1541_4_pad_len,
  // $pad_octets dup("@0;" pad_len)
  var_dup, 2, string_7, var_1541_4_pad_len, 1, LOCAL(4),
  // append &message pad_octets
  var_append, 2, var_1512_5_message, LOCAL(4), 1, var_1512_5_message,
  // 8*len)
  var_std__times, 2, num_8, LOCAL(3), 1, LOCAL(1),
  // big_endian_string_64(8*len)
  func_big_endian_string_64, 1, LOCAL(1), 1, LOCAL(2),
  // append &message big_endian_string_64(8*len)
  var_append, 2, var_1512_5_message, LOCAL(2), 1, var_1512_5_message,
  // loop:
  var_loop, 1, lambda_10_loop, TAIL_CALL,
  POS(1516, 3),
  POS(1517, 3),
  POS(1518, 3),
  POS(1519, 3),
  POS(1520, 3),
  POS(1539, 3),
  POS(1540, 3),
  POS(1541, 16),
  POS(1541, 16),
  POS(1541, 3),
  POS(1542, 13),
  POS(1542, 3),
  POS(1543, 3),
  POS(1544, 3),
  POS(1545, 40),
  POS(1545, 19),
  POS(1545, 3),
  POS(1549, 3),
  LOCAL(3),
  LOCAL(4)
};

static FUNCTION_INFO i_func_std_types__octet_string___sha1 = {
  t_func_std_types__octet_string___sha1, NULL, 18, 2,
  {"1539_4_len\000", "1543_4_pad_octets\000"}
};

static TAB_NUM t_lambda_132[] = {
  1, // locals
  0, // parameters
  // pad_len+64
  var_std__plus, 2, var_1541_4_pad_len, num_64, 1, LOCAL(1),
  //  pad_len+64
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1542, 37),
  POS(1542, 36)
};

static FUNCTION_INFO i_lambda_132 = {
  t_lambda_132, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_10_loop[] = {
  1, // locals
  0, // parameters
  // is_empty:
  var_is_empty, 1, var_1512_5_message, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_message_is_empty, lambda_133, TAIL_CALL,
  POS(1551, 15),
  POS(1550, 5)
};

static FUNCTION_INFO i_lambda_10_loop = {
  t_lambda_10_loop, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_message_is_empty[] = {
  5, // locals
  0, // parameters
  // big_endian_string_32(h0)
  func_big_endian_string_32, 1, var_1516_4_h0, 1, LOCAL(1),
  // big_endian_string_32(h1)
  func_big_endian_string_32, 1, var_1517_4_h1, 1, LOCAL(2),
  // big_endian_string_32(h2)
  func_big_endian_string_32, 1, var_1518_4_h2, 1, LOCAL(3),
  // big_endian_string_32(h3)
  func_big_endian_string_32, 1, var_1519_4_h3, 1, LOCAL(4),
  // big_endian_string_32(h4)
  func_big_endian_string_32, 1, var_1520_4_h4, 1, LOCAL(5),
  // string
  var_string, 5, LOCAL(1), LOCAL(2), LOCAL(3), LOCAL(4), LOCAL(5), TAIL_CALL,
  POS(1553, 11),
  POS(1554, 11),
  POS(1555, 11),
  POS(1556, 11),
  POS(1557, 11),
  POS(1552, 9)
};

static FUNCTION_INFO i_lambda_message_is_empty = {
  t_lambda_message_is_empty, NULL, 6, 0,
  {}
};

static TAB_NUM t_lambda_133[] = {
  0, // locals
  0, // parameters
  // $w uint32_array(80)
  var_uint32_array, 1, num_80, 1, var_1559_10_w,
  // from_to 1 16
  var_from_to, 4, num_1, num_16, lambda_134, lambda_135, TAIL_CALL,
  POS(1559, 9),
  POS(1560, 9)
};

static FUNCTION_INFO i_lambda_133 = {
  t_lambda_133, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_134[] = {
  23, // locals
  1, // parameters
  LOCAL(23), // 1561_14_i
  // 4*i-3).to_integer << 24
  var_std__times, 2, num_4, LOCAL(23), 1, LOCAL(1),
  // 4*i-3).to_integer << 24
  var_std__minus, 2, LOCAL(1), num_3, 1, LOCAL(2),
  // message(4*i-3).to_integer << 24
  var_1512_5_message, 1, LOCAL(2), 1, LOCAL(3),
  // to_integer << 24
  var_to_integer, 1, LOCAL(3), 1, LOCAL(4),
  // to_integer << 24
  var_std__shift_left, 2, LOCAL(4), num_24, 1, LOCAL(5),
  // 4*i-2).to_integer << 16
  var_std__times, 2, num_4, LOCAL(23), 1, LOCAL(6),
  // 4*i-2).to_integer << 16
  var_std__minus, 2, LOCAL(6), num_2, 1, LOCAL(7),
  // message(4*i-2).to_integer << 16
  var_1512_5_message, 1, LOCAL(7), 1, LOCAL(8),
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
  var_1512_5_message, 1, LOCAL(13), 1, LOCAL(14),
  // to_integer << 8
  var_to_integer, 1, LOCAL(14), 1, LOCAL(15),
  // to_integer << 8
  var_std__shift_left, 2, LOCAL(15), num_8, 1, LOCAL(16),
  // 
  var_std__bit_or, 2, LOCAL(11), LOCAL(16), 1, LOCAL(17),
  // 4*i).to_integer
  var_std__times, 2, num_4, LOCAL(23), 1, LOCAL(18),
  // message(4*i).to_integer
  var_1512_5_message, 1, LOCAL(18), 1, LOCAL(19),
  // to_integer
  var_to_integer, 1, LOCAL(19), 1, LOCAL(20),
  // !w(i)
  var_std__bit_or, 2, LOCAL(17), LOCAL(20), 1, LOCAL(22),
  // w(i)
  var_1559_10_w, 2, LOCAL(23), LOCAL(22), 1, var_1559_10_w,
  // next
  var_next, 0, TAIL_CALL,
  POS(1564, 25),
  POS(1564, 25),
  POS(1564, 17),
  POS(1564, 32),
  POS(1564, 32),
  POS(1565, 25),
  POS(1565, 25),
  POS(1565, 17),
  POS(1565, 32),
  POS(1565, 32),
  POS(1563, 16),
  POS(1566, 25),
  POS(1566, 25),
  POS(1566, 17),
  POS(1566, 32),
  POS(1566, 32),
  POS(1563, 16),
  POS(1567, 25),
  POS(1567, 17),
  POS(1567, 30),
  POS(1562, 13),
  POS(1562, 14),
  POS(1568, 13),
  LOCAL(23)
};

static FUNCTION_INFO i_lambda_134 = {
  t_lambda_134, NULL, 23, 1,
  {"1561_14_i\000"}
};

static TAB_NUM t_lambda_135[] = {
  0, // locals
  0, // parameters
  // from_to 17 80
  var_from_to, 4, num_17, num_80, lambda_136, func_main_loop, TAIL_CALL,
  POS(1570, 13)
};

static FUNCTION_INFO i_lambda_135 = {
  t_lambda_135, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_136[] = {
  14, // locals
  1, // parameters
  LOCAL(14), // 1571_18_i
  // i-3) ^ w(i-8) ^ w(i-14) ^ w(i-16) .rol32. 1
  var_std__minus, 2, LOCAL(14), num_3, 1, LOCAL(1),
  // w(i-3) ^ w(i-8) ^ w(i-14) ^ w(i-16) .rol32. 1
  var_1559_10_w, 1, LOCAL(1), 1, LOCAL(2),
  // i-8) ^ w(i-14) ^ w(i-16) .rol32. 1
  var_std__minus, 2, LOCAL(14), num_8, 1, LOCAL(3),
  // w(i-8) ^ w(i-14) ^ w(i-16) .rol32. 1
  var_1559_10_w, 1, LOCAL(3), 1, LOCAL(4),
  // w(i-3) ^ w(i-8) ^ w(i-14) ^ w(i-16) .rol32. 1
  var_std__bit_xor, 2, LOCAL(2), LOCAL(4), 1, LOCAL(5),
  // i-14) ^ w(i-16) .rol32. 1
  var_std__minus, 2, LOCAL(14), num_14, 1, LOCAL(6),
  // w(i-14) ^ w(i-16) .rol32. 1
  var_1559_10_w, 1, LOCAL(6), 1, LOCAL(7),
  // w(i-3) ^ w(i-8) ^ w(i-14) ^ w(i-16) .rol32. 1
  var_std__bit_xor, 2, LOCAL(5), LOCAL(7), 1, LOCAL(8),
  // i-16) .rol32. 1
  var_std__minus, 2, LOCAL(14), num_16, 1, LOCAL(9),
  // w(i-16) .rol32. 1
  var_1559_10_w, 1, LOCAL(9), 1, LOCAL(10),
  // w(i-3) ^ w(i-8) ^ w(i-14) ^ w(i-16) .rol32. 1
  var_std__bit_xor, 2, LOCAL(8), LOCAL(10), 1, LOCAL(11),
  // !w(i) w(i-3) ^ w(i-8) ^ w(i-14) ^ w(i-16) .rol32. 1
  func_rol32, 2, LOCAL(11), num_1, 1, LOCAL(13),
  // w(i) w(i-3) ^ w(i-8) ^ w(i-14) ^ w(i-16) .rol32. 1
  var_1559_10_w, 2, LOCAL(14), LOCAL(13), 1, var_1559_10_w,
  // next
  var_next, 0, TAIL_CALL,
  POS(1572, 25),
  POS(1572, 23),
  POS(1572, 34),
  POS(1572, 32),
  POS(1572, 23),
  POS(1572, 43),
  POS(1572, 41),
  POS(1572, 23),
  POS(1572, 53),
  POS(1572, 51),
  POS(1572, 23),
  POS(1572, 17),
  POS(1572, 18),
  POS(1573, 17),
  LOCAL(14)
};

static FUNCTION_INFO i_lambda_136 = {
  t_lambda_136, NULL, 14, 1,
  {"1571_18_i\000"}
};

static TAB_NUM t_func_main_loop[] = {
  0, // locals
  0, // parameters
  // $a h0
  LET, 1, var_1516_4_h0, 1, var_1577_12_a,
  // $b h1
  LET, 1, var_1517_4_h1, 1, var_1578_12_b,
  // $c h2
  LET, 1, var_1518_4_h2, 1, var_1579_12_c,
  // $d h3
  LET, 1, var_1519_4_h3, 1, var_1580_12_d,
  // $e h4
  LET, 1, var_1520_4_h4, 1, var_1581_12_e,
  // from_to 1 80
  var_from_to, 4, num_1, num_80, lambda_137, lambda_146, TAIL_CALL,
  POS(1577, 11),
  POS(1578, 11),
  POS(1579, 11),
  POS(1580, 11),
  POS(1581, 11),
  POS(1582, 11)
};

static FUNCTION_INFO i_func_main_loop = {
  t_func_main_loop, NULL, 6, 0,
  {}
};

static TAB_NUM t_lambda_137[] = {
  0, // locals
  1, // parameters
  var_1583_16_i,
  // cond
  var_cond, 4, lambda_138, lambda_140, lambda_142, lambda_144, TAIL_CALL,
  POS(1584, 15)
};

static FUNCTION_INFO i_lambda_137 = {
  t_lambda_137, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_138[] = {
  2, // locals
  0, // parameters
  // 20: compute (b & c) | ((b ^ 0xffffffff) & d) k0
  var_std__less, 2, num_20, var_1583_16_i, 1, LOCAL(1),
  // 20: compute (b & c) | ((b ^ 0xffffffff) & d) k0
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  //  i <= 20: compute (b & c) | ((b ^ 0xffffffff) & d) k0
  LET, 2, LOCAL(2), lambda_139, TAIL_CALL,
  POS(1585, 25),
  POS(1585, 25),
  POS(1585, 19)
};

static FUNCTION_INFO i_lambda_138 = {
  t_lambda_138, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_139[] = {
  4, // locals
  0, // parameters
  // b & c) | ((b ^ 0xffffffff) & d) k0
  var_std__bit_and, 2, var_1578_12_b, var_1579_12_c, 1, LOCAL(1),
  // b ^ 0xffffffff) & d) k0
  var_std__bit_xor, 2, var_1578_12_b, num_0xffffffff, 1, LOCAL(2),
  // b ^ 0xffffffff) & d) k0
  var_std__bit_and, 2, LOCAL(2), var_1580_12_d, 1, LOCAL(3),
  // b & c) | ((b ^ 0xffffffff) & d) k0
  var_std__bit_or, 2, LOCAL(1), LOCAL(3), 1, LOCAL(4),
  // compute (b & c) | ((b ^ 0xffffffff) & d) k0
  func_compute, 2, LOCAL(4), num_0x5a827999, TAIL_CALL,
  POS(1585, 38),
  POS(1585, 49),
  POS(1585, 49),
  POS(1585, 38),
  POS(1585, 29)
};

static FUNCTION_INFO i_lambda_139 = {
  t_lambda_139, NULL, 5, 0,
  {}
};

static TAB_NUM t_lambda_140[] = {
  2, // locals
  0, // parameters
  // 40: compute (b ^ c ^ d) k1
  var_std__less, 2, num_40, var_1583_16_i, 1, LOCAL(1),
  // 40: compute (b ^ c ^ d) k1
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  //  i <= 40: compute (b ^ c ^ d) k1
  LET, 2, LOCAL(2), lambda_141, TAIL_CALL,
  POS(1586, 25),
  POS(1586, 25),
  POS(1586, 19)
};

static FUNCTION_INFO i_lambda_140 = {
  t_lambda_140, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_141[] = {
  2, // locals
  0, // parameters
  // b ^ c ^ d) k1
  var_std__bit_xor, 2, var_1578_12_b, var_1579_12_c, 1, LOCAL(1),
  // b ^ c ^ d) k1
  var_std__bit_xor, 2, LOCAL(1), var_1580_12_d, 1, LOCAL(2),
  // compute (b ^ c ^ d) k1
  func_compute, 2, LOCAL(2), num_0x6ed9eba1, TAIL_CALL,
  POS(1586, 38),
  POS(1586, 38),
  POS(1586, 29)
};

static FUNCTION_INFO i_lambda_141 = {
  t_lambda_141, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_142[] = {
  2, // locals
  0, // parameters
  // 60: compute (b & c) | (b & d) | (c & d) k2
  var_std__less, 2, num_60, var_1583_16_i, 1, LOCAL(1),
  // 60: compute (b & c) | (b & d) | (c & d) k2
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  //  i <= 60: compute (b & c) | (b & d) | (c & d) k2
  LET, 2, LOCAL(2), lambda_143, TAIL_CALL,
  POS(1587, 25),
  POS(1587, 25),
  POS(1587, 19)
};

static FUNCTION_INFO i_lambda_142 = {
  t_lambda_142, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_143[] = {
  5, // locals
  0, // parameters
  // b & c) | (b & d) | (c & d) k2
  var_std__bit_and, 2, var_1578_12_b, var_1579_12_c, 1, LOCAL(1),
  // b & d) | (c & d) k2
  var_std__bit_and, 2, var_1578_12_b, var_1580_12_d, 1, LOCAL(2),
  // b & c) | (b & d) | (c & d) k2
  var_std__bit_or, 2, LOCAL(1), LOCAL(2), 1, LOCAL(3),
  // c & d) k2
  var_std__bit_and, 2, var_1579_12_c, var_1580_12_d, 1, LOCAL(4),
  // b & c) | (b & d) | (c & d) k2
  var_std__bit_or, 2, LOCAL(3), LOCAL(4), 1, LOCAL(5),
  // compute (b & c) | (b & d) | (c & d) k2
  func_compute, 2, LOCAL(5), num_0x8f1bbcdc, TAIL_CALL,
  POS(1587, 38),
  POS(1587, 48),
  POS(1587, 38),
  POS(1587, 58),
  POS(1587, 38),
  POS(1587, 29)
};

static FUNCTION_INFO i_lambda_143 = {
  t_lambda_143, NULL, 6, 0,
  {}
};

static TAB_NUM t_lambda_144[] = {
  0, // locals
  0, // parameters
  //  true: compute (b ^ c ^ d) k3
  LET, 2, var_true, lambda_145, TAIL_CALL,
  POS(1588, 19)
};

static FUNCTION_INFO i_lambda_144 = {
  t_lambda_144, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_145[] = {
  2, // locals
  0, // parameters
  // b ^ c ^ d) k3
  var_std__bit_xor, 2, var_1578_12_b, var_1579_12_c, 1, LOCAL(1),
  // b ^ c ^ d) k3
  var_std__bit_xor, 2, LOCAL(1), var_1580_12_d, 1, LOCAL(2),
  // compute (b ^ c ^ d) k3
  func_compute, 2, LOCAL(2), num_0xca62c1d6, TAIL_CALL,
  POS(1588, 35),
  POS(1588, 35),
  POS(1588, 26)
};

static FUNCTION_INFO i_lambda_145 = {
  t_lambda_145, NULL, 3, 0,
  {}
};

static TAB_NUM t_func_compute[] = {
  9, // locals
  2, // parameters
  LOCAL(7), // 1590_26_f
  LOCAL(8), // 1590_28_k
  // a .rol32. 5) + f + e + k + w(i)) & 0xffffffff
  func_rol32, 2, var_1577_12_a, num_5, 1, LOCAL(1),
  // a .rol32. 5) + f + e + k + w(i)) & 0xffffffff
  var_std__plus, 2, LOCAL(1), LOCAL(7), 1, LOCAL(2),
  // a .rol32. 5) + f + e + k + w(i)) & 0xffffffff
  var_std__plus, 2, LOCAL(2), var_1581_12_e, 1, LOCAL(3),
  // a .rol32. 5) + f + e + k + w(i)) & 0xffffffff
  var_std__plus, 2, LOCAL(3), LOCAL(8), 1, LOCAL(4),
  // w(i)) & 0xffffffff
  var_1559_10_w, 1, var_1583_16_i, 1, LOCAL(5),
  // a .rol32. 5) + f + e + k + w(i)) & 0xffffffff
  var_std__plus, 2, LOCAL(4), LOCAL(5), 1, LOCAL(6),
  // $t ((a .rol32. 5) + f + e + k + w(i)) & 0xffffffff
  var_std__bit_and, 2, LOCAL(6), num_0xffffffff, 1, LOCAL(9),
  // !e d
  LET, 1, var_1580_12_d, 1, var_1581_12_e,
  // !d c
  LET, 1, var_1579_12_c, 1, var_1580_12_d,
  // !c b .rol32. 30
  func_rol32, 2, var_1578_12_b, num_30, 1, var_1579_12_c,
  // !b a
  LET, 1, var_1577_12_a, 1, var_1578_12_b,
  // !a t
  LET, 1, LOCAL(9), 1, var_1577_12_a,
  // next
  var_next, 0, TAIL_CALL,
  POS(1591, 22),
  POS(1591, 22),
  POS(1591, 22),
  POS(1591, 22),
  POS(1591, 49),
  POS(1591, 22),
  POS(1591, 17),
  POS(1592, 17),
  POS(1593, 17),
  POS(1594, 17),
  POS(1595, 17),
  POS(1596, 17),
  POS(1597, 17),
  LOCAL(9),
  LOCAL(8),
  LOCAL(7)
};

static FUNCTION_INFO i_func_compute = {
  t_func_compute, NULL, 13, 3,
  {"1591_18_t\000", "1590_28_k\000", "1590_26_f\000"}
};

static TAB_NUM t_lambda_146[] = {
  1, // locals
  0, // parameters
  // h0+a) & 0xffffffff
  var_std__plus, 2, var_1516_4_h0, var_1577_12_a, 1, LOCAL(1),
  // !h0 (h0+a) & 0xffffffff
  var_std__bit_and, 2, LOCAL(1), num_0xffffffff, 1, var_1516_4_h0,
  // h1+b) & 0xffffffff
  var_std__plus, 2, var_1517_4_h1, var_1578_12_b, 1, LOCAL(1),
  // !h1 (h1+b) & 0xffffffff
  var_std__bit_and, 2, LOCAL(1), num_0xffffffff, 1, var_1517_4_h1,
  // h2+c) & 0xffffffff
  var_std__plus, 2, var_1518_4_h2, var_1579_12_c, 1, LOCAL(1),
  // !h2 (h2+c) & 0xffffffff
  var_std__bit_and, 2, LOCAL(1), num_0xffffffff, 1, var_1518_4_h2,
  // h3+d) & 0xffffffff
  var_std__plus, 2, var_1519_4_h3, var_1580_12_d, 1, LOCAL(1),
  // !h3 (h3+d) & 0xffffffff
  var_std__bit_and, 2, LOCAL(1), num_0xffffffff, 1, var_1519_4_h3,
  // h4+e) & 0xffffffff
  var_std__plus, 2, var_1520_4_h4, var_1581_12_e, 1, LOCAL(1),
  // !h4 (h4+e) & 0xffffffff
  var_std__bit_and, 2, LOCAL(1), num_0xffffffff, 1, var_1520_4_h4,
  // range &message 65 -1
  var_range, 3, var_1512_5_message, num_65, minus_num_1, 1, var_1512_5_message,
  // next
  var_next, 0, TAIL_CALL,
  POS(1599, 20),
  POS(1599, 15),
  POS(1600, 20),
  POS(1600, 15),
  POS(1601, 20),
  POS(1601, 15),
  POS(1602, 20),
  POS(1602, 15),
  POS(1603, 20),
  POS(1603, 15),
  POS(1604, 15),
  POS(1605, 15)
};

static FUNCTION_INFO i_lambda_146 = {
  t_lambda_146, NULL, 12, 0,
  {}
};

static TAB_NUM t_func_big_endian_string_64[] = {
  23, // locals
  1, // parameters
  LOCAL(23), // 1607_27_n
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
  POS(1610, 17),
  POS(1610, 7),
  POS(1611, 18),
  POS(1611, 18),
  POS(1611, 7),
  POS(1612, 18),
  POS(1612, 18),
  POS(1612, 7),
  POS(1613, 18),
  POS(1613, 18),
  POS(1613, 7),
  POS(1614, 18),
  POS(1614, 18),
  POS(1614, 7),
  POS(1615, 18),
  POS(1615, 18),
  POS(1615, 7),
  POS(1616, 18),
  POS(1616, 18),
  POS(1616, 7),
  POS(1617, 17),
  POS(1617, 7),
  POS(1609, 5),
  LOCAL(23)
};

static FUNCTION_INFO i_func_big_endian_string_64 = {
  t_func_big_endian_string_64, NULL, 23, 1,
  {"1607_27_n\000"}
};

static TAB_NUM t_func_big_endian_string_32[] = {
  11, // locals
  1, // parameters
  LOCAL(11), // 1619_27_n
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
  POS(1622, 17),
  POS(1622, 7),
  POS(1623, 18),
  POS(1623, 18),
  POS(1623, 7),
  POS(1624, 18),
  POS(1624, 18),
  POS(1624, 7),
  POS(1625, 17),
  POS(1625, 7),
  POS(1621, 5),
  LOCAL(11)
};

static FUNCTION_INFO i_func_big_endian_string_32 = {
  t_func_big_endian_string_32, NULL, 11, 1,
  {"1619_27_n\000"}
};

static TAB_NUM t_func_rol32[] = {
  7, // locals
  2, // parameters
  LOCAL(6), // 1627_12_n
  LOCAL(7), // 1627_14_k
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
  POS(1627, 22),
  POS(1627, 22),
  POS(1627, 53),
  POS(1627, 47),
  POS(1627, 22),
  POS(1627, 17),
  LOCAL(7),
  LOCAL(6)
};

static FUNCTION_INFO i_func_rol32 = {
  t_func_rol32, NULL, 6, 2,
  {"1627_14_k\000", "1627_12_n\000"}
};

static TAB_NUM t_func_std__parse_integer[] = {
  0, // locals
  1, // parameters
  var_1656_5_self,
  // $orig self
  LET, 1, var_1656_5_self, 1, var_1676_4_orig,
  // $negate self .has_prefix. '-'
  var_has_prefix, 2, var_1656_5_self, chr_45, 1, var_1677_4_negate,
  // !self
  var_if, 3, var_1677_4_negate, lambda_153, lambda_154, 1, var_1656_5_self,
  // $value 0
  LET, 1, num_0, 1, var_1683_4_value,
  // cond
  var_cond, 4, lambda_155, lambda_160, lambda_165, lambda_170, TAIL_CALL,
  POS(1676, 3),
  POS(1677, 3),
  POS(1678, 3),
  POS(1683, 3),
  POS(1684, 3)
};

static FUNCTION_INFO i_func_std__parse_integer = {
  t_func_std__parse_integer, NULL, 5, 0,
  {}
};

static TAB_NUM t_func_maybe_negated[] = {
  0, // locals
  0, // parameters
  // if
  var_if, 3, var_1677_4_negate, lambda_147, lambda_148, TAIL_CALL,
  POS(1659, 5)
};

static FUNCTION_INFO i_func_maybe_negated = {
  t_func_maybe_negated, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_147[] = {
  1, // locals
  0, // parameters
  // value
  var_std__negate, 1, var_1683_4_value, 1, LOCAL(1),
  //  -value
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1661, 11),
  POS(1661, 9)
};

static FUNCTION_INFO i_lambda_147 = {
  t_lambda_147, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_148[] = {
  0, // locals
  0, // parameters
  //  value
  LET, 1, var_1683_4_value, TAIL_CALL,
  POS(1662, 9)
};

static FUNCTION_INFO i_lambda_148 = {
  t_lambda_148, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_partial_match[] = {
  1, // locals
  1, // parameters
  var_1664_20_idx,
  // 1
  var_std__less, 2, num_1, var_1664_20_idx, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_149, lambda_150, TAIL_CALL,
  POS(1666, 13),
  POS(1665, 5)
};

static FUNCTION_INFO i_func_partial_match = {
  t_func_partial_match, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_149[] = {
  2, // locals
  0, // parameters
  // range(self idx -1) maybe_negated()
  var_range, 3, var_1656_5_self, var_1664_20_idx, minus_num_1, 1, LOCAL(1),
  // maybe_negated()
  func_maybe_negated, 0, 1, LOCAL(2),
  //  range(self idx -1) maybe_negated()
  LET, 2, LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(1667, 10),
  POS(1667, 29),
  POS(1667, 9)
};

static FUNCTION_INFO i_lambda_149 = {
  t_lambda_149, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_150[] = {
  0, // locals
  0, // parameters
  //  orig undefined
  LET, 2, var_1676_4_orig, var_undefined, TAIL_CALL,
  POS(1668, 9)
};

static FUNCTION_INFO i_lambda_150 = {
  t_lambda_150, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_exhausted[] = {
  1, // locals
  0, // parameters
  // is_empty
  var_is_empty, 1, var_1656_5_self, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_151, lambda_152, TAIL_CALL,
  POS(1672, 12),
  POS(1671, 5)
};

static FUNCTION_INFO i_func_exhausted = {
  t_func_exhausted, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_151[] = {
  0, // locals
  0, // parameters
  //  orig undefined
  LET, 2, var_1676_4_orig, var_undefined, TAIL_CALL,
  POS(1673, 9)
};

static FUNCTION_INFO i_lambda_151 = {
  t_lambda_151, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_152[] = {
  1, // locals
  0, // parameters
  // maybe_negated()
  func_maybe_negated, 0, 1, LOCAL(1),
  //  "" maybe_negated()
  LET, 2, string_1, LOCAL(1), TAIL_CALL,
  POS(1674, 13),
  POS(1674, 9)
};

static FUNCTION_INFO i_lambda_152 = {
  t_lambda_152, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_153[] = {
  1, // locals
  0, // parameters
  // range(self 2 -1)
  var_range, 3, var_1656_5_self, num_2, minus_num_1, 1, LOCAL(1),
  //  range(self 2 -1)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1681, 10),
  POS(1681, 9)
};

static FUNCTION_INFO i_lambda_153 = {
  t_lambda_153, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_154[] = {
  0, // locals
  0, // parameters
  //  self
  LET, 1, var_1656_5_self, TAIL_CALL,
  POS(1682, 9)
};

static FUNCTION_INFO i_lambda_154 = {
  t_lambda_154, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_155[] = {
  1, // locals
  0, // parameters
  // self .has_prefix. "0b":
  var_has_prefix, 2, var_1656_5_self, str_0b, 1, LOCAL(1),
  //  self .has_prefix. "0b":
  LET, 2, LOCAL(1), lambda_156, TAIL_CALL,
  POS(1685, 8),
  POS(1685, 7)
};

static FUNCTION_INFO i_lambda_155 = {
  t_lambda_155, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_156[] = {
  0, // locals
  0, // parameters
  // range &self 3 -1
  var_range, 3, var_1656_5_self, num_3, minus_num_1, 1, var_1656_5_self,
  // for_each self
  var_for_each, 3, var_1656_5_self, lambda_157, func_exhausted, TAIL_CALL,
  POS(1686, 7),
  POS(1687, 7)
};

static FUNCTION_INFO i_lambda_156 = {
  t_lambda_156, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_157[] = {
  0, // locals
  2, // parameters
  var_1688_12_idx,
  var_1688_16_chr,
  // case
  var_case, 4, var_1688_16_chr, value_range_1691_14, lambda_158, lambda_159, TAIL_CALL,
  POS(1689, 11)
};

static FUNCTION_INFO i_lambda_157 = {
  t_lambda_157, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_158[] = {
  2, // locals
  0, // parameters
  // value << 1)+(chr-'0')
  var_std__shift_left, 2, var_1683_4_value, num_1, 1, LOCAL(1),
  // chr-'0')
  var_std__minus, 2, var_1688_16_chr, chr_48, 1, LOCAL(2),
  // !value (value << 1)+(chr-'0')
  var_std__plus, 2, LOCAL(1), LOCAL(2), 1, var_1683_4_value,
  // next
  var_next, 0, TAIL_CALL,
  POS(1692, 23),
  POS(1692, 36),
  POS(1692, 15),
  POS(1693, 15)
};

static FUNCTION_INFO i_lambda_158 = {
  t_lambda_158, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_159[] = {
  0, // locals
  0, // parameters
  // partial_match idx
  func_partial_match, 1, var_1688_12_idx, TAIL_CALL,
  POS(1695, 15)
};

static FUNCTION_INFO i_lambda_159 = {
  t_lambda_159, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_160[] = {
  1, // locals
  0, // parameters
  // self .has_prefix. "0o":
  var_has_prefix, 2, var_1656_5_self, str_0o, 1, LOCAL(1),
  //  self .has_prefix. "0o":
  LET, 2, LOCAL(1), lambda_161, TAIL_CALL,
  POS(1697, 8),
  POS(1697, 7)
};

static FUNCTION_INFO i_lambda_160 = {
  t_lambda_160, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_161[] = {
  0, // locals
  0, // parameters
  // range &self 3 -1
  var_range, 3, var_1656_5_self, num_3, minus_num_1, 1, var_1656_5_self,
  // for_each self
  var_for_each, 3, var_1656_5_self, lambda_162, func_exhausted, TAIL_CALL,
  POS(1698, 7),
  POS(1699, 7)
};

static FUNCTION_INFO i_lambda_161 = {
  t_lambda_161, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_162[] = {
  0, // locals
  2, // parameters
  var_1700_12_idx,
  var_1700_16_chr,
  // case chr
  var_case, 4, var_1700_16_chr, value_range_1702_14, lambda_163, lambda_164, TAIL_CALL,
  POS(1701, 11)
};

static FUNCTION_INFO i_lambda_162 = {
  t_lambda_162, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_163[] = {
  2, // locals
  0, // parameters
  // value << 3)+(chr-'0')
  var_std__shift_left, 2, var_1683_4_value, num_3, 1, LOCAL(1),
  // chr-'0')
  var_std__minus, 2, var_1700_16_chr, chr_48, 1, LOCAL(2),
  // !value (value << 3)+(chr-'0')
  var_std__plus, 2, LOCAL(1), LOCAL(2), 1, var_1683_4_value,
  // next
  var_next, 0, TAIL_CALL,
  POS(1703, 23),
  POS(1703, 36),
  POS(1703, 15),
  POS(1704, 15)
};

static FUNCTION_INFO i_lambda_163 = {
  t_lambda_163, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_164[] = {
  0, // locals
  0, // parameters
  // partial_match idx
  func_partial_match, 1, var_1700_12_idx, TAIL_CALL,
  POS(1706, 15)
};

static FUNCTION_INFO i_lambda_164 = {
  t_lambda_164, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_165[] = {
  1, // locals
  0, // parameters
  // self .has_prefix. "0x":
  var_has_prefix, 2, var_1656_5_self, str_0x, 1, LOCAL(1),
  //  self .has_prefix. "0x":
  LET, 2, LOCAL(1), lambda_166, TAIL_CALL,
  POS(1708, 8),
  POS(1708, 7)
};

static FUNCTION_INFO i_lambda_165 = {
  t_lambda_165, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_166[] = {
  0, // locals
  0, // parameters
  // range &self 3 -1
  var_range, 3, var_1656_5_self, num_3, minus_num_1, 1, var_1656_5_self,
  // for_each self
  var_for_each, 3, var_1656_5_self, lambda_167, func_exhausted, TAIL_CALL,
  POS(1709, 7),
  POS(1710, 7)
};

static FUNCTION_INFO i_lambda_166 = {
  t_lambda_166, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_167[] = {
  0, // locals
  2, // parameters
  var_1711_12_idx,
  var_1711_16_chr,
  // case chr
  var_case, 8, var_1711_16_chr, value_range_1491_8, lambda_168, value_range_1716_14, lambda_a__f, value_range_1719_14, lambda_A__F, lambda_169, TAIL_CALL,
  POS(1712, 11)
};

static FUNCTION_INFO i_lambda_167 = {
  t_lambda_167, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_168[] = {
  2, // locals
  0, // parameters
  // value << 4)+(chr-'0')
  var_std__shift_left, 2, var_1683_4_value, num_4, 1, LOCAL(1),
  // chr-'0')
  var_std__minus, 2, var_1711_16_chr, chr_48, 1, LOCAL(2),
  // !value (value << 4)+(chr-'0')
  var_std__plus, 2, LOCAL(1), LOCAL(2), 1, var_1683_4_value,
  // next
  var_next, 0, TAIL_CALL,
  POS(1714, 23),
  POS(1714, 36),
  POS(1714, 15),
  POS(1715, 15)
};

static FUNCTION_INFO i_lambda_168 = {
  t_lambda_168, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_a__f[] = {
  3, // locals
  0, // parameters
  // value << 4)+(chr-'a')+10
  var_std__shift_left, 2, var_1683_4_value, num_4, 1, LOCAL(1),
  // chr-'a')+10
  var_std__minus, 2, var_1711_16_chr, chr_97, 1, LOCAL(2),
  // value << 4)+(chr-'a')+10
  var_std__plus, 2, LOCAL(1), LOCAL(2), 1, LOCAL(3),
  // !value (value << 4)+(chr-'a')+10
  var_std__plus, 2, LOCAL(3), num_10, 1, var_1683_4_value,
  // next
  var_next, 0, TAIL_CALL,
  POS(1717, 23),
  POS(1717, 36),
  POS(1717, 23),
  POS(1717, 15),
  POS(1718, 15)
};

static FUNCTION_INFO i_lambda_a__f = {
  t_lambda_a__f, NULL, 5, 0,
  {}
};

static TAB_NUM t_lambda_A__F[] = {
  3, // locals
  0, // parameters
  // value << 4)+(chr-'A')+10
  var_std__shift_left, 2, var_1683_4_value, num_4, 1, LOCAL(1),
  // chr-'A')+10
  var_std__minus, 2, var_1711_16_chr, chr_65, 1, LOCAL(2),
  // value << 4)+(chr-'A')+10
  var_std__plus, 2, LOCAL(1), LOCAL(2), 1, LOCAL(3),
  // !value (value << 4)+(chr-'A')+10
  var_std__plus, 2, LOCAL(3), num_10, 1, var_1683_4_value,
  // next
  var_next, 0, TAIL_CALL,
  POS(1720, 23),
  POS(1720, 36),
  POS(1720, 23),
  POS(1720, 15),
  POS(1721, 15)
};

static FUNCTION_INFO i_lambda_A__F = {
  t_lambda_A__F, NULL, 5, 0,
  {}
};

static TAB_NUM t_lambda_169[] = {
  0, // locals
  0, // parameters
  // partial_match idx
  func_partial_match, 1, var_1711_12_idx, TAIL_CALL,
  POS(1723, 15)
};

static FUNCTION_INFO i_lambda_169 = {
  t_lambda_169, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_170[] = {
  0, // locals
  0, // parameters
  //  true:
  LET, 2, var_true, lambda_171, TAIL_CALL,
  POS(1725, 7)
};

static FUNCTION_INFO i_lambda_170 = {
  t_lambda_170, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_171[] = {
  0, // locals
  0, // parameters
  // for_each self
  var_for_each, 3, var_1656_5_self, lambda_172, func_exhausted, TAIL_CALL,
  POS(1726, 7)
};

static FUNCTION_INFO i_lambda_171 = {
  t_lambda_171, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_172[] = {
  0, // locals
  2, // parameters
  var_1727_12_idx,
  var_1727_16_chr,
  // case chr
  var_case, 4, var_1727_16_chr, value_range_1491_8, lambda_173, lambda_174, TAIL_CALL,
  POS(1728, 11)
};

static FUNCTION_INFO i_lambda_172 = {
  t_lambda_172, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_173[] = {
  2, // locals
  0, // parameters
  // 10*value+(chr-'0')
  var_std__times, 2, num_10, var_1683_4_value, 1, LOCAL(1),
  // chr-'0')
  var_std__minus, 2, var_1727_16_chr, chr_48, 1, LOCAL(2),
  // !value 10*value+(chr-'0')
  var_std__plus, 2, LOCAL(1), LOCAL(2), 1, var_1683_4_value,
  // next
  var_next, 0, TAIL_CALL,
  POS(1730, 22),
  POS(1730, 32),
  POS(1730, 15),
  POS(1731, 15)
};

static FUNCTION_INFO i_lambda_173 = {
  t_lambda_173, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_174[] = {
  0, // locals
  0, // parameters
  // partial_match idx
  func_partial_match, 1, var_1727_12_idx, TAIL_CALL,
  POS(1733, 15)
};

static FUNCTION_INFO i_lambda_174 = {
  t_lambda_174, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_std__parse_number[] = {
  1, // locals
  1, // parameters
  var_1763_5_self,
  // $i 1
  LET, 1, num_1, 1, var_1765_4_i,
  // $n length_of(self)
  var_length_of, 1, var_1763_5_self, 1, var_1766_4_n,
  // n
  var_std__less, 2, var_1766_4_n, var_1765_4_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_175, lambda_176, TAIL_CALL,
  POS(1765, 3),
  POS(1766, 3),
  POS(1768, 9),
  POS(1767, 3)
};

static FUNCTION_INFO i_func_std__parse_number = {
  t_func_std__parse_number, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_175[] = {
  0, // locals
  0, // parameters
  //  self undefined
  LET, 2, var_1763_5_self, var_undefined, TAIL_CALL,
  POS(1769, 7)
};

static FUNCTION_INFO i_lambda_175 = {
  t_lambda_175, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_176[] = {
  3, // locals
  0, // parameters
  // $sign_chr self(1)
  var_1763_5_self, 1, num_1, 1, var_1771_8_sign_chr,
  // sign_chr == '-' || sign_chr == '+' &i -> i+1
  var_std__equal, 2, var_1771_8_sign_chr, chr_45, 1, LOCAL(1),
  // sign_chr == '-' || sign_chr == '+' &i -> i+1
  var_std__or, 2, LOCAL(1), lambda_177, 1, LOCAL(2),
  // update_if sign_chr == '-' || sign_chr == '+' &i -> i+1
  var_update_if, 3, LOCAL(2), var_1765_4_i, lambda_178, 1, var_1765_4_i,
  // sign_chr == '-'
  var_std__equal, 2, var_1771_8_sign_chr, chr_45, 1, LOCAL(1),
  // $sign
  var_if, 3, LOCAL(1), lambda_179, lambda_180, 1, var_1773_8_sign,
  // self(i) == '0' && i+1 < n:
  var_1763_5_self, 1, var_1765_4_i, 1, LOCAL(1),
  // self(i) == '0' && i+1 < n:
  var_std__equal, 2, LOCAL(1), chr_48, 1, LOCAL(2),
  // self(i) == '0' && i+1 < n:
  var_std__and, 2, LOCAL(2), lambda_181, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_182, func_parse, TAIL_CALL,
  POS(1771, 7),
  POS(1772, 17),
  POS(1772, 17),
  POS(1772, 7),
  POS(1775, 11),
  POS(1773, 7),
  POS(1779, 9),
  POS(1779, 9),
  POS(1779, 9),
  POS(1778, 7)
};

static FUNCTION_INFO i_lambda_176 = {
  t_lambda_176, NULL, 10, 0,
  {}
};

static TAB_NUM t_lambda_177[] = {
  1, // locals
  0, // parameters
  // sign_chr == '+' &i -> i+1
  var_std__equal, 2, var_1771_8_sign_chr, chr_43, 1, LOCAL(1),
  // sign_chr == '+' &i -> i+1
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1772, 36),
  POS(1772, 36)
};

static FUNCTION_INFO i_lambda_177 = {
  t_lambda_177, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_178[] = {
  1, // locals
  0, // parameters
  // i+1
  var_std__plus, 2, var_1765_4_i, num_1, 1, LOCAL(1),
  //  i+1
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1772, 58),
  POS(1772, 57)
};

static FUNCTION_INFO i_lambda_178 = {
  t_lambda_178, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_179[] = {
  0, // locals
  0, // parameters
  //  -1
  LET, 1, minus_num_1, TAIL_CALL,
  POS(1776, 13)
};

static FUNCTION_INFO i_lambda_179 = {
  t_lambda_179, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_180[] = {
  0, // locals
  0, // parameters
  //  1
  LET, 1, num_1, TAIL_CALL,
  POS(1777, 13)
};

static FUNCTION_INFO i_lambda_180 = {
  t_lambda_180, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_181[] = {
  2, // locals
  0, // parameters
  // i+1 < n:
  var_std__plus, 2, var_1765_4_i, num_1, 1, LOCAL(1),
  // i+1 < n:
  var_std__less, 2, LOCAL(1), var_1766_4_n, 1, LOCAL(2),
  // i+1 < n:
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1779, 27),
  POS(1779, 27),
  POS(1779, 27)
};

static FUNCTION_INFO i_lambda_181 = {
  t_lambda_181, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_182[] = {
  2, // locals
  0, // parameters
  // i+1)
  var_std__plus, 2, var_1765_4_i, num_1, 1, LOCAL(1),
  // self(i+1)
  var_1763_5_self, 1, LOCAL(1), 1, LOCAL(2),
  // case self(i+1)
  var_case, 8, LOCAL(2), chr_98, lambda_b, chr_111, lambda_o, chr_120, lambda_x, func_parse, TAIL_CALL,
  POS(1780, 21),
  POS(1780, 16),
  POS(1780, 11)
};

static FUNCTION_INFO i_lambda_182 = {
  t_lambda_182, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_b[] = {
  1, // locals
  0, // parameters
  // i+2 sign
  var_std__plus, 2, var_1765_4_i, num_2, 1, LOCAL(1),
  // parse_binary self i+2 sign
  func_parse_binary, 3, var_1763_5_self, LOCAL(1), var_1773_8_sign, TAIL_CALL,
  POS(1781, 36),
  POS(1781, 18)
};

static FUNCTION_INFO i_lambda_b = {
  t_lambda_b, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_o[] = {
  1, // locals
  0, // parameters
  // i+2 sign
  var_std__plus, 2, var_1765_4_i, num_2, 1, LOCAL(1),
  // parse_octal self i+2 sign
  func_parse_octal, 3, var_1763_5_self, LOCAL(1), var_1773_8_sign, TAIL_CALL,
  POS(1782, 35),
  POS(1782, 18)
};

static FUNCTION_INFO i_lambda_o = {
  t_lambda_o, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_x[] = {
  1, // locals
  0, // parameters
  // i+2 sign
  var_std__plus, 2, var_1765_4_i, num_2, 1, LOCAL(1),
  // parse_hex self i+2 sign
  var_parse_hex, 3, var_1763_5_self, LOCAL(1), var_1773_8_sign, TAIL_CALL,
  POS(1783, 33),
  POS(1783, 18)
};

static FUNCTION_INFO i_lambda_x = {
  t_lambda_x, NULL, 2, 0,
  {}
};

static TAB_NUM t_func_parse[] = {
  0, // locals
  0, // parameters
  // skip_one_ore_more_digits:
  func_skip_one_ore_more_digits, 1, lambda_skip_one_ore_more_digits, TAIL_CALL,
  POS(1788, 5)
};

static FUNCTION_INFO i_func_parse = {
  t_func_parse, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_skip_one_ore_more_digits[] = {
  1, // locals
  0, // parameters
  // n return_integer
  var_std__less, 2, var_1766_4_n, var_1765_4_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), func_return_integer, lambda_183, TAIL_CALL,
  POS(1790, 13),
  POS(1789, 7)
};

static FUNCTION_INFO i_lambda_skip_one_ore_more_digits = {
  t_lambda_skip_one_ore_more_digits, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_183[] = {
  1, // locals
  0, // parameters
  // self(i)
  var_1763_5_self, 1, var_1765_4_i, 1, LOCAL(1),
  // case self(i)
  var_case, 6, LOCAL(1), chr_46, lambda_184, sequence_1803_14, func_handle_exponent, func_return_integer, TAIL_CALL,
  POS(1792, 16),
  POS(1792, 11)
};

static FUNCTION_INFO i_lambda_183 = {
  t_lambda_183, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_184[] = {
  0, // locals
  0, // parameters
  // !i i+1
  var_std__plus, 2, var_1765_4_i, num_1, 1, var_1765_4_i,
  // skip_one_ore_more_digits:
  func_skip_one_ore_more_digits, 1, lambda_2_skip_one_ore_more_digits, TAIL_CALL,
  POS(1794, 15),
  POS(1795, 15)
};

static FUNCTION_INFO i_lambda_184 = {
  t_lambda_184, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_2_skip_one_ore_more_digits[] = {
  1, // locals
  0, // parameters
  // n
  var_std__less, 2, var_1766_4_n, var_1765_4_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), func_return_real, lambda_185, TAIL_CALL,
  POS(1797, 23),
  POS(1796, 17)
};

static FUNCTION_INFO i_lambda_2_skip_one_ore_more_digits = {
  t_lambda_2_skip_one_ore_more_digits, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_185[] = {
  1, // locals
  0, // parameters
  // self(i)
  var_1763_5_self, 1, var_1765_4_i, 1, LOCAL(1),
  // case self(i)
  var_case, 4, LOCAL(1), sequence_1803_14, func_handle_exponent, func_return_real, TAIL_CALL,
  POS(1800, 26),
  POS(1800, 21)
};

static FUNCTION_INFO i_lambda_185 = {
  t_lambda_185, NULL, 2, 0,
  {}
};

static TAB_NUM t_func_skip_one_ore_more_digits[] = {
  1, // locals
  1, // parameters
  var_1806_33_cont,
  // n
  var_std__less, 2, var_1766_4_n, var_1765_4_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_186, lambda_187, TAIL_CALL,
  POS(1808, 13),
  POS(1807, 7)
};

static FUNCTION_INFO i_func_skip_one_ore_more_digits = {
  t_func_skip_one_ore_more_digits, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_186[] = {
  0, // locals
  0, // parameters
  //  self undefined
  LET, 2, var_1763_5_self, var_undefined, TAIL_CALL,
  POS(1809, 11)
};

static FUNCTION_INFO i_lambda_186 = {
  t_lambda_186, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_187[] = {
  2, // locals
  0, // parameters
  // $digit self(i)
  var_1763_5_self, 1, var_1765_4_i, 1, var_1811_12_digit,
  // digit < '0' || digit > '9'
  var_std__less, 2, var_1811_12_digit, chr_48, 1, LOCAL(1),
  // digit < '0' || digit > '9'
  var_std__or, 2, LOCAL(1), lambda_188, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_189, lambda_190, TAIL_CALL,
  POS(1811, 11),
  POS(1813, 13),
  POS(1813, 13),
  POS(1812, 11)
};

static FUNCTION_INFO i_lambda_187 = {
  t_lambda_187, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_188[] = {
  1, // locals
  0, // parameters
  // 9'
  var_std__less, 2, chr_57, var_1811_12_digit, 1, LOCAL(1),
  // digit > '9'
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1813, 37),
  POS(1813, 28)
};

static FUNCTION_INFO i_lambda_188 = {
  t_lambda_188, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_189[] = {
  0, // locals
  0, // parameters
  //  self undefined
  LET, 2, var_1763_5_self, var_undefined, TAIL_CALL,
  POS(1814, 15)
};

static FUNCTION_INFO i_lambda_189 = {
  t_lambda_189, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_190[] = {
  0, // locals
  0, // parameters
  // loop:
  var_loop, 1, lambda_11_loop, TAIL_CALL,
  POS(1816, 15)
};

static FUNCTION_INFO i_lambda_190 = {
  t_lambda_190, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_11_loop[] = {
  1, // locals
  0, // parameters
  // !i i+1
  var_std__plus, 2, var_1765_4_i, num_1, 1, var_1765_4_i,
  // n
  var_std__less, 2, var_1766_4_n, var_1765_4_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), var_1806_33_cont, lambda_191, TAIL_CALL,
  POS(1817, 17),
  POS(1819, 23),
  POS(1818, 17)
};

static FUNCTION_INFO i_lambda_11_loop = {
  t_lambda_11_loop, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_191[] = {
  3, // locals
  0, // parameters
  // $next_digit self(i)
  var_1763_5_self, 1, var_1765_4_i, 1, var_1822_22_next_digit,
  // next_digit >= '0' && next_digit <= '9'
  var_std__less, 2, var_1822_22_next_digit, chr_48, 1, LOCAL(1),
  // next_digit >= '0' && next_digit <= '9'
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // next_digit >= '0' && next_digit <= '9'
  var_std__and, 2, LOCAL(2), lambda_192, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), var_next, var_1806_33_cont, TAIL_CALL,
  POS(1822, 21),
  POS(1824, 23),
  POS(1824, 23),
  POS(1824, 23),
  POS(1823, 21)
};

static FUNCTION_INFO i_lambda_191 = {
  t_lambda_191, NULL, 5, 0,
  {}
};

static TAB_NUM t_lambda_192[] = {
  2, // locals
  0, // parameters
  // 9'
  var_std__less, 2, chr_57, var_1822_22_next_digit, 1, LOCAL(1),
  // 9'
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // next_digit <= '9'
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1824, 59),
  POS(1824, 59),
  POS(1824, 44)
};

static FUNCTION_INFO i_lambda_192 = {
  t_lambda_192, NULL, 3, 0,
  {}
};

static TAB_NUM t_func_handle_exponent[] = {
  1, // locals
  0, // parameters
  // !i i+1
  var_std__plus, 2, var_1765_4_i, num_1, 1, var_1765_4_i,
  // n
  var_std__less, 2, var_1766_4_n, var_1765_4_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_193, lambda_194, TAIL_CALL,
  POS(1829, 7),
  POS(1831, 13),
  POS(1830, 7)
};

static FUNCTION_INFO i_func_handle_exponent = {
  t_func_handle_exponent, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_193[] = {
  0, // locals
  0, // parameters
  //  self undefined
  LET, 2, var_1763_5_self, var_undefined, TAIL_CALL,
  POS(1832, 11)
};

static FUNCTION_INFO i_lambda_193 = {
  t_lambda_193, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_194[] = {
  2, // locals
  0, // parameters
  // $exp_sign_chr self(i)
  var_1763_5_self, 1, var_1765_4_i, 1, var_1834_12_exp_sign_chr,
  // exp_sign_chr == '-' || exp_sign_chr == '+' &i -> i+1
  var_std__equal, 2, var_1834_12_exp_sign_chr, chr_45, 1, LOCAL(1),
  // exp_sign_chr == '-' || exp_sign_chr == '+' &i -> i+1
  var_std__or, 2, LOCAL(1), lambda_195, 1, LOCAL(2),
  // update_if exp_sign_chr == '-' || exp_sign_chr == '+' &i -> i+1
  var_update_if, 3, LOCAL(2), var_1765_4_i, lambda_196, 1, var_1765_4_i,
  // skip_one_ore_more_digits return_real
  func_skip_one_ore_more_digits, 1, func_return_real, TAIL_CALL,
  POS(1834, 11),
  POS(1835, 21),
  POS(1835, 21),
  POS(1835, 11),
  POS(1836, 11)
};

static FUNCTION_INFO i_lambda_194 = {
  t_lambda_194, NULL, 5, 0,
  {}
};

static TAB_NUM t_lambda_195[] = {
  1, // locals
  0, // parameters
  // exp_sign_chr == '+' &i -> i+1
  var_std__equal, 2, var_1834_12_exp_sign_chr, chr_43, 1, LOCAL(1),
  // exp_sign_chr == '+' &i -> i+1
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1835, 44),
  POS(1835, 44)
};

static FUNCTION_INFO i_lambda_195 = {
  t_lambda_195, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_196[] = {
  1, // locals
  0, // parameters
  // i+1
  var_std__plus, 2, var_1765_4_i, num_1, 1, LOCAL(1),
  //  i+1
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1835, 70),
  POS(1835, 69)
};

static FUNCTION_INFO i_lambda_196 = {
  t_lambda_196, NULL, 2, 0,
  {}
};

static TAB_NUM t_func_return_integer[] = {
  4, // locals
  0, // parameters
  // range(self i -1) integer(range(self 1 i-1))
  var_range, 3, var_1763_5_self, var_1765_4_i, minus_num_1, 1, LOCAL(1),
  // i-1))
  var_std__minus, 2, var_1765_4_i, num_1, 1, LOCAL(2),
  // range(self 1 i-1))
  var_range, 3, var_1763_5_self, num_1, LOCAL(2), 1, LOCAL(3),
  // integer(range(self 1 i-1))
  var_integer, 1, LOCAL(3), 1, LOCAL(4),
  //  range(self i -1) integer(range(self 1 i-1))
  LET, 2, LOCAL(1), LOCAL(4), TAIL_CALL,
  POS(1838, 24),
  POS(1838, 62),
  POS(1838, 49),
  POS(1838, 41),
  POS(1838, 23)
};

static FUNCTION_INFO i_func_return_integer = {
  t_func_return_integer, NULL, 5, 0,
  {}
};

static TAB_NUM t_func_return_real[] = {
  4, // locals
  0, // parameters
  // range(self i -1) real(range(self 1 i-1))
  var_range, 3, var_1763_5_self, var_1765_4_i, minus_num_1, 1, LOCAL(1),
  // i-1))
  var_std__minus, 2, var_1765_4_i, num_1, 1, LOCAL(2),
  // range(self 1 i-1))
  var_range, 3, var_1763_5_self, num_1, LOCAL(2), 1, LOCAL(3),
  // real(range(self 1 i-1))
  var_real, 1, LOCAL(3), 1, LOCAL(4),
  //  range(self i -1) real(range(self 1 i-1))
  LET, 2, LOCAL(1), LOCAL(4), TAIL_CALL,
  POS(1840, 21),
  POS(1840, 56),
  POS(1840, 43),
  POS(1840, 38),
  POS(1840, 20)
};

static FUNCTION_INFO i_func_return_real = {
  t_func_return_real, NULL, 5, 0,
  {}
};

static TAB_NUM t_func_parse_binary[] = {
  1, // locals
  3, // parameters
  var_1842_17_str,
  var_1842_21_i,
  var_1842_23_sign,
  // $n length_of(str)
  var_length_of, 1, var_1842_17_str, 1, var_1843_4_n,
  // n -> str undefined
  var_std__less, 2, var_1843_4_n, var_1842_21_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_197, lambda_198, TAIL_CALL,
  POS(1843, 3),
  POS(1845, 9),
  POS(1844, 3)
};

static FUNCTION_INFO i_func_parse_binary = {
  t_func_parse_binary, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_197[] = {
  0, // locals
  0, // parameters
  //  str undefined
  LET, 2, var_1842_17_str, var_undefined, TAIL_CALL,
  POS(1845, 13)
};

static FUNCTION_INFO i_lambda_197 = {
  t_lambda_197, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_198[] = {
  2, // locals
  0, // parameters
  // $digit str(i)
  var_1842_17_str, 1, var_1842_21_i, 1, var_1847_8_digit,
  // digit < '0' || digit > '1'
  var_std__less, 2, var_1847_8_digit, chr_48, 1, LOCAL(1),
  // digit < '0' || digit > '1'
  var_std__or, 2, LOCAL(1), lambda_199, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_200, lambda_201, TAIL_CALL,
  POS(1847, 7),
  POS(1849, 9),
  POS(1849, 9),
  POS(1848, 7)
};

static FUNCTION_INFO i_lambda_198 = {
  t_lambda_198, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_199[] = {
  1, // locals
  0, // parameters
  // 1'
  var_std__less, 2, chr_49, var_1847_8_digit, 1, LOCAL(1),
  // digit > '1'
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1849, 33),
  POS(1849, 24)
};

static FUNCTION_INFO i_lambda_199 = {
  t_lambda_199, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_200[] = {
  0, // locals
  0, // parameters
  //  str undefined
  LET, 2, var_1842_17_str, var_undefined, TAIL_CALL,
  POS(1850, 11)
};

static FUNCTION_INFO i_lambda_200 = {
  t_lambda_200, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_201[] = {
  0, // locals
  0, // parameters
  // $value digit-'0'
  var_std__minus, 2, var_1847_8_digit, chr_48, 1, var_1852_12_value,
  // loop:
  var_loop, 1, lambda_12_loop, TAIL_CALL,
  POS(1852, 11),
  POS(1853, 11)
};

static FUNCTION_INFO i_lambda_201 = {
  t_lambda_201, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_12_loop[] = {
  1, // locals
  0, // parameters
  // !i i+1
  var_std__plus, 2, var_1842_21_i, num_1, 1, var_1842_21_i,
  // n
  var_std__less, 2, var_1843_4_n, var_1842_21_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_202, lambda_203, TAIL_CALL,
  POS(1854, 13),
  POS(1856, 19),
  POS(1855, 13)
};

static FUNCTION_INFO i_lambda_12_loop = {
  t_lambda_12_loop, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_202[] = {
  1, // locals
  0, // parameters
  // value*sign
  var_std__times, 2, var_1852_12_value, var_1842_23_sign, 1, LOCAL(1),
  //  "" value*sign
  LET, 2, string_1, LOCAL(1), TAIL_CALL,
  POS(1857, 21),
  POS(1857, 17)
};

static FUNCTION_INFO i_lambda_202 = {
  t_lambda_202, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_203[] = {
  3, // locals
  0, // parameters
  // $next_digit str(i)
  var_1842_17_str, 1, var_1842_21_i, 1, var_1859_18_next_digit,
  // next_digit >= '0' && next_digit <= '1':
  var_std__less, 2, var_1859_18_next_digit, chr_48, 1, LOCAL(1),
  // next_digit >= '0' && next_digit <= '1':
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // next_digit >= '0' && next_digit <= '1':
  var_std__and, 2, LOCAL(2), lambda_204, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_205, lambda_206, TAIL_CALL,
  POS(1859, 17),
  POS(1861, 19),
  POS(1861, 19),
  POS(1861, 19),
  POS(1860, 17)
};

static FUNCTION_INFO i_lambda_203 = {
  t_lambda_203, NULL, 5, 0,
  {}
};

static TAB_NUM t_lambda_204[] = {
  2, // locals
  0, // parameters
  // 1':
  var_std__less, 2, chr_49, var_1859_18_next_digit, 1, LOCAL(1),
  // 1':
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // next_digit <= '1':
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1861, 55),
  POS(1861, 55),
  POS(1861, 40)
};

static FUNCTION_INFO i_lambda_204 = {
  t_lambda_204, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_205[] = {
  2, // locals
  0, // parameters
  // value << 1)+(next_digit-'0')
  var_std__shift_left, 2, var_1852_12_value, num_1, 1, LOCAL(1),
  // next_digit-'0')
  var_std__minus, 2, var_1859_18_next_digit, chr_48, 1, LOCAL(2),
  // !value (value << 1)+(next_digit-'0')
  var_std__plus, 2, LOCAL(1), LOCAL(2), 1, var_1852_12_value,
  // next
  var_next, 0, TAIL_CALL,
  POS(1862, 29),
  POS(1862, 42),
  POS(1862, 21),
  POS(1863, 21)
};

static FUNCTION_INFO i_lambda_205 = {
  t_lambda_205, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_206[] = {
  2, // locals
  0, // parameters
  // range(str i -1) value*sign
  var_range, 3, var_1842_17_str, var_1842_21_i, minus_num_1, 1, LOCAL(1),
  // value*sign
  var_std__times, 2, var_1852_12_value, var_1842_23_sign, 1, LOCAL(2),
  //  range(str i -1) value*sign
  LET, 2, LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(1864, 22),
  POS(1864, 38),
  POS(1864, 21)
};

static FUNCTION_INFO i_lambda_206 = {
  t_lambda_206, NULL, 3, 0,
  {}
};

static TAB_NUM t_func_parse_octal[] = {
  1, // locals
  3, // parameters
  var_1866_16_str,
  var_1866_20_i,
  var_1866_22_sign,
  // $n length_of(str)
  var_length_of, 1, var_1866_16_str, 1, var_1867_4_n,
  // n -> str undefined
  var_std__less, 2, var_1867_4_n, var_1866_20_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_207, lambda_208, TAIL_CALL,
  POS(1867, 3),
  POS(1869, 9),
  POS(1868, 3)
};

static FUNCTION_INFO i_func_parse_octal = {
  t_func_parse_octal, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_207[] = {
  0, // locals
  0, // parameters
  //  str undefined
  LET, 2, var_1866_16_str, var_undefined, TAIL_CALL,
  POS(1869, 13)
};

static FUNCTION_INFO i_lambda_207 = {
  t_lambda_207, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_208[] = {
  2, // locals
  0, // parameters
  // $digit str(i)
  var_1866_16_str, 1, var_1866_20_i, 1, var_1871_8_digit,
  // digit < '0' || digit > '7'
  var_std__less, 2, var_1871_8_digit, chr_48, 1, LOCAL(1),
  // digit < '0' || digit > '7'
  var_std__or, 2, LOCAL(1), lambda_209, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_210, lambda_211, TAIL_CALL,
  POS(1871, 7),
  POS(1873, 9),
  POS(1873, 9),
  POS(1872, 7)
};

static FUNCTION_INFO i_lambda_208 = {
  t_lambda_208, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_209[] = {
  1, // locals
  0, // parameters
  // 7'
  var_std__less, 2, chr_55, var_1871_8_digit, 1, LOCAL(1),
  // digit > '7'
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1873, 33),
  POS(1873, 24)
};

static FUNCTION_INFO i_lambda_209 = {
  t_lambda_209, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_210[] = {
  0, // locals
  0, // parameters
  //  str undefined
  LET, 2, var_1866_16_str, var_undefined, TAIL_CALL,
  POS(1874, 11)
};

static FUNCTION_INFO i_lambda_210 = {
  t_lambda_210, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_211[] = {
  0, // locals
  0, // parameters
  // $value digit-'0'
  var_std__minus, 2, var_1871_8_digit, chr_48, 1, var_1876_12_value,
  // loop:
  var_loop, 1, lambda_13_loop, TAIL_CALL,
  POS(1876, 11),
  POS(1877, 11)
};

static FUNCTION_INFO i_lambda_211 = {
  t_lambda_211, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_13_loop[] = {
  1, // locals
  0, // parameters
  // !i i+1
  var_std__plus, 2, var_1866_20_i, num_1, 1, var_1866_20_i,
  // n
  var_std__less, 2, var_1867_4_n, var_1866_20_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_212, lambda_213, TAIL_CALL,
  POS(1878, 13),
  POS(1880, 19),
  POS(1879, 13)
};

static FUNCTION_INFO i_lambda_13_loop = {
  t_lambda_13_loop, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_212[] = {
  1, // locals
  0, // parameters
  // value*sign
  var_std__times, 2, var_1876_12_value, var_1866_22_sign, 1, LOCAL(1),
  //  "" value*sign
  LET, 2, string_1, LOCAL(1), TAIL_CALL,
  POS(1881, 21),
  POS(1881, 17)
};

static FUNCTION_INFO i_lambda_212 = {
  t_lambda_212, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_213[] = {
  3, // locals
  0, // parameters
  // $next_digit str(i)
  var_1866_16_str, 1, var_1866_20_i, 1, var_1883_18_next_digit,
  // next_digit >= '0' && next_digit <= '7':
  var_std__less, 2, var_1883_18_next_digit, chr_48, 1, LOCAL(1),
  // next_digit >= '0' && next_digit <= '7':
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // next_digit >= '0' && next_digit <= '7':
  var_std__and, 2, LOCAL(2), lambda_214, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_215, lambda_216, TAIL_CALL,
  POS(1883, 17),
  POS(1885, 19),
  POS(1885, 19),
  POS(1885, 19),
  POS(1884, 17)
};

static FUNCTION_INFO i_lambda_213 = {
  t_lambda_213, NULL, 5, 0,
  {}
};

static TAB_NUM t_lambda_214[] = {
  2, // locals
  0, // parameters
  // 7':
  var_std__less, 2, chr_55, var_1883_18_next_digit, 1, LOCAL(1),
  // 7':
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // next_digit <= '7':
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1885, 55),
  POS(1885, 55),
  POS(1885, 40)
};

static FUNCTION_INFO i_lambda_214 = {
  t_lambda_214, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_215[] = {
  2, // locals
  0, // parameters
  // value << 3)+(next_digit-'0')
  var_std__shift_left, 2, var_1876_12_value, num_3, 1, LOCAL(1),
  // next_digit-'0')
  var_std__minus, 2, var_1883_18_next_digit, chr_48, 1, LOCAL(2),
  // !value (value << 3)+(next_digit-'0')
  var_std__plus, 2, LOCAL(1), LOCAL(2), 1, var_1876_12_value,
  // next
  var_next, 0, TAIL_CALL,
  POS(1886, 29),
  POS(1886, 42),
  POS(1886, 21),
  POS(1887, 21)
};

static FUNCTION_INFO i_lambda_215 = {
  t_lambda_215, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_216[] = {
  2, // locals
  0, // parameters
  // range(str i -1) value*sign
  var_range, 3, var_1866_16_str, var_1866_20_i, minus_num_1, 1, LOCAL(1),
  // value*sign
  var_std__times, 2, var_1876_12_value, var_1866_22_sign, 1, LOCAL(2),
  //  range(str i -1) value*sign
  LET, 2, LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(1888, 22),
  POS(1888, 38),
  POS(1888, 21)
};

static FUNCTION_INFO i_lambda_216 = {
  t_lambda_216, NULL, 3, 0,
  {}
};

static TAB_NUM t_func_std__parse_hex[] = {
  1, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_1918_5_str,
  num_1, var_1919_5_i,
  num_1, var_1920_5_sign,
  // $n length_of(str)
  var_length_of, 1, var_1918_5_str, 1, var_1922_4_n,
  // n -> str undefined
  var_std__less, 2, var_1922_4_n, var_1919_5_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_217, lambda_218, TAIL_CALL,
  POS(1922, 3),
  POS(1924, 9),
  POS(1923, 3)
};

static FUNCTION_INFO i_func_std__parse_hex = {
  t_func_std__parse_hex, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_217[] = {
  0, // locals
  0, // parameters
  //  str undefined
  LET, 2, var_1918_5_str, var_undefined, TAIL_CALL,
  POS(1924, 13)
};

static FUNCTION_INFO i_lambda_217 = {
  t_lambda_217, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_218[] = {
  0, // locals
  0, // parameters
  // $digit str(i)
  var_1918_5_str, 1, var_1919_5_i, 1, var_1926_8_digit,
  // cond
  var_cond, 4, lambda_219, lambda_222, lambda_225, lambda_228, TAIL_CALL,
  POS(1926, 7),
  POS(1927, 7)
};

static FUNCTION_INFO i_lambda_218 = {
  t_lambda_218, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_219[] = {
  3, // locals
  0, // parameters
  // digit >= '0' && digit <= '9':
  var_std__less, 2, var_1926_8_digit, chr_48, 1, LOCAL(1),
  // digit >= '0' && digit <= '9':
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // digit >= '0' && digit <= '9':
  var_std__and, 2, LOCAL(2), lambda_220, 1, LOCAL(3),
  //  digit >= '0' && digit <= '9':
  LET, 2, LOCAL(3), lambda_221, TAIL_CALL,
  POS(1928, 12),
  POS(1928, 12),
  POS(1928, 12),
  POS(1928, 11)
};

static FUNCTION_INFO i_lambda_219 = {
  t_lambda_219, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_220[] = {
  2, // locals
  0, // parameters
  // 9':
  var_std__less, 2, chr_57, var_1926_8_digit, 1, LOCAL(1),
  // 9':
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // digit <= '9':
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1928, 38),
  POS(1928, 38),
  POS(1928, 28)
};

static FUNCTION_INFO i_lambda_220 = {
  t_lambda_220, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_221[] = {
  1, // locals
  0, // parameters
  // digit-'0'
  var_std__minus, 2, var_1926_8_digit, chr_48, 1, LOCAL(1),
  // handle_more_digits digit-'0'
  func_handle_more_digits, 1, LOCAL(1), TAIL_CALL,
  POS(1929, 30),
  POS(1929, 11)
};

static FUNCTION_INFO i_lambda_221 = {
  t_lambda_221, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_222[] = {
  3, // locals
  0, // parameters
  // digit >= 'a' && digit <= 'f':
  var_std__less, 2, var_1926_8_digit, chr_97, 1, LOCAL(1),
  // digit >= 'a' && digit <= 'f':
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // digit >= 'a' && digit <= 'f':
  var_std__and, 2, LOCAL(2), lambda_223, 1, LOCAL(3),
  //  digit >= 'a' && digit <= 'f':
  LET, 2, LOCAL(3), lambda_224, TAIL_CALL,
  POS(1930, 12),
  POS(1930, 12),
  POS(1930, 12),
  POS(1930, 11)
};

static FUNCTION_INFO i_lambda_222 = {
  t_lambda_222, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_223[] = {
  2, // locals
  0, // parameters
  // f':
  var_std__less, 2, chr_102, var_1926_8_digit, 1, LOCAL(1),
  // f':
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // digit <= 'f':
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1930, 38),
  POS(1930, 38),
  POS(1930, 28)
};

static FUNCTION_INFO i_lambda_223 = {
  t_lambda_223, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_224[] = {
  2, // locals
  0, // parameters
  // digit-'a')+10
  var_std__minus, 2, var_1926_8_digit, chr_97, 1, LOCAL(1),
  // digit-'a')+10
  var_std__plus, 2, LOCAL(1), num_10, 1, LOCAL(2),
  // handle_more_digits (digit-'a')+10
  func_handle_more_digits, 1, LOCAL(2), TAIL_CALL,
  POS(1931, 31),
  POS(1931, 31),
  POS(1931, 11)
};

static FUNCTION_INFO i_lambda_224 = {
  t_lambda_224, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_225[] = {
  3, // locals
  0, // parameters
  // digit >= 'A' && digit <= 'F':
  var_std__less, 2, var_1926_8_digit, chr_65, 1, LOCAL(1),
  // digit >= 'A' && digit <= 'F':
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // digit >= 'A' && digit <= 'F':
  var_std__and, 2, LOCAL(2), lambda_226, 1, LOCAL(3),
  //  digit >= 'A' && digit <= 'F':
  LET, 2, LOCAL(3), lambda_227, TAIL_CALL,
  POS(1932, 12),
  POS(1932, 12),
  POS(1932, 12),
  POS(1932, 11)
};

static FUNCTION_INFO i_lambda_225 = {
  t_lambda_225, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_226[] = {
  2, // locals
  0, // parameters
  // F':
  var_std__less, 2, chr_70, var_1926_8_digit, 1, LOCAL(1),
  // F':
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // digit <= 'F':
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1932, 38),
  POS(1932, 38),
  POS(1932, 28)
};

static FUNCTION_INFO i_lambda_226 = {
  t_lambda_226, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_227[] = {
  2, // locals
  0, // parameters
  // digit-'A')+10
  var_std__minus, 2, var_1926_8_digit, chr_65, 1, LOCAL(1),
  // digit-'A')+10
  var_std__plus, 2, LOCAL(1), num_10, 1, LOCAL(2),
  // handle_more_digits (digit-'A')+10
  func_handle_more_digits, 1, LOCAL(2), TAIL_CALL,
  POS(1933, 31),
  POS(1933, 31),
  POS(1933, 11)
};

static FUNCTION_INFO i_lambda_227 = {
  t_lambda_227, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_228[] = {
  0, // locals
  0, // parameters
  //  true -> str undefined
  LET, 2, var_true, lambda_229, TAIL_CALL,
  POS(1934, 11)
};

static FUNCTION_INFO i_lambda_228 = {
  t_lambda_228, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_229[] = {
  0, // locals
  0, // parameters
  //  str undefined
  LET, 2, var_1918_5_str, var_undefined, TAIL_CALL,
  POS(1934, 19)
};

static FUNCTION_INFO i_lambda_229 = {
  t_lambda_229, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_handle_more_digits[] = {
  0, // locals
  1, // parameters
  var_1936_29_value,
  // loop:
  var_loop, 1, lambda_14_loop, TAIL_CALL,
  POS(1937, 9)
};

static FUNCTION_INFO i_func_handle_more_digits = {
  t_func_handle_more_digits, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_14_loop[] = {
  1, // locals
  0, // parameters
  // !i i+1
  var_std__plus, 2, var_1919_5_i, num_1, 1, var_1919_5_i,
  // n
  var_std__less, 2, var_1922_4_n, var_1919_5_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_230, lambda_231, TAIL_CALL,
  POS(1938, 11),
  POS(1940, 17),
  POS(1939, 11)
};

static FUNCTION_INFO i_lambda_14_loop = {
  t_lambda_14_loop, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_230[] = {
  1, // locals
  0, // parameters
  // value*sign
  var_std__times, 2, var_1936_29_value, var_1920_5_sign, 1, LOCAL(1),
  //  "" value*sign
  LET, 2, string_1, LOCAL(1), TAIL_CALL,
  POS(1941, 19),
  POS(1941, 15)
};

static FUNCTION_INFO i_lambda_230 = {
  t_lambda_230, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_231[] = {
  0, // locals
  0, // parameters
  // $next_digit str(i)
  var_1918_5_str, 1, var_1919_5_i, 1, var_1943_16_next_digit,
  // cond
  var_cond, 4, lambda_232, lambda_235, lambda_238, lambda_241, TAIL_CALL,
  POS(1943, 15),
  POS(1944, 15)
};

static FUNCTION_INFO i_lambda_231 = {
  t_lambda_231, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_232[] = {
  3, // locals
  0, // parameters
  // next_digit >= '0' && next_digit <= '9':
  var_std__less, 2, var_1943_16_next_digit, chr_48, 1, LOCAL(1),
  // next_digit >= '0' && next_digit <= '9':
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // next_digit >= '0' && next_digit <= '9':
  var_std__and, 2, LOCAL(2), lambda_233, 1, LOCAL(3),
  //  next_digit >= '0' && next_digit <= '9':
  LET, 2, LOCAL(3), lambda_234, TAIL_CALL,
  POS(1945, 20),
  POS(1945, 20),
  POS(1945, 20),
  POS(1945, 19)
};

static FUNCTION_INFO i_lambda_232 = {
  t_lambda_232, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_233[] = {
  2, // locals
  0, // parameters
  // 9':
  var_std__less, 2, chr_57, var_1943_16_next_digit, 1, LOCAL(1),
  // 9':
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // next_digit <= '9':
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1945, 56),
  POS(1945, 56),
  POS(1945, 41)
};

static FUNCTION_INFO i_lambda_233 = {
  t_lambda_233, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_234[] = {
  2, // locals
  0, // parameters
  // value << 4)+(next_digit-'0')
  var_std__shift_left, 2, var_1936_29_value, num_4, 1, LOCAL(1),
  // next_digit-'0')
  var_std__minus, 2, var_1943_16_next_digit, chr_48, 1, LOCAL(2),
  // !value (value << 4)+(next_digit-'0')
  var_std__plus, 2, LOCAL(1), LOCAL(2), 1, var_1936_29_value,
  // next
  var_next, 0, TAIL_CALL,
  POS(1946, 27),
  POS(1946, 40),
  POS(1946, 19),
  POS(1947, 19)
};

static FUNCTION_INFO i_lambda_234 = {
  t_lambda_234, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_235[] = {
  3, // locals
  0, // parameters
  // next_digit >= 'a' && next_digit <= 'f':
  var_std__less, 2, var_1943_16_next_digit, chr_97, 1, LOCAL(1),
  // next_digit >= 'a' && next_digit <= 'f':
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // next_digit >= 'a' && next_digit <= 'f':
  var_std__and, 2, LOCAL(2), lambda_236, 1, LOCAL(3),
  //  next_digit >= 'a' && next_digit <= 'f':
  LET, 2, LOCAL(3), lambda_237, TAIL_CALL,
  POS(1948, 20),
  POS(1948, 20),
  POS(1948, 20),
  POS(1948, 19)
};

static FUNCTION_INFO i_lambda_235 = {
  t_lambda_235, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_236[] = {
  2, // locals
  0, // parameters
  // f':
  var_std__less, 2, chr_102, var_1943_16_next_digit, 1, LOCAL(1),
  // f':
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // next_digit <= 'f':
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1948, 56),
  POS(1948, 56),
  POS(1948, 41)
};

static FUNCTION_INFO i_lambda_236 = {
  t_lambda_236, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_237[] = {
  3, // locals
  0, // parameters
  // value << 4)+(next_digit-'a')+10
  var_std__shift_left, 2, var_1936_29_value, num_4, 1, LOCAL(1),
  // next_digit-'a')+10
  var_std__minus, 2, var_1943_16_next_digit, chr_97, 1, LOCAL(2),
  // value << 4)+(next_digit-'a')+10
  var_std__plus, 2, LOCAL(1), LOCAL(2), 1, LOCAL(3),
  // !value (value << 4)+(next_digit-'a')+10
  var_std__plus, 2, LOCAL(3), num_10, 1, var_1936_29_value,
  // next
  var_next, 0, TAIL_CALL,
  POS(1949, 27),
  POS(1949, 40),
  POS(1949, 27),
  POS(1949, 19),
  POS(1950, 19)
};

static FUNCTION_INFO i_lambda_237 = {
  t_lambda_237, NULL, 5, 0,
  {}
};

static TAB_NUM t_lambda_238[] = {
  3, // locals
  0, // parameters
  // next_digit >= 'A' && next_digit <= 'F':
  var_std__less, 2, var_1943_16_next_digit, chr_65, 1, LOCAL(1),
  // next_digit >= 'A' && next_digit <= 'F':
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // next_digit >= 'A' && next_digit <= 'F':
  var_std__and, 2, LOCAL(2), lambda_239, 1, LOCAL(3),
  //  next_digit >= 'A' && next_digit <= 'F':
  LET, 2, LOCAL(3), lambda_240, TAIL_CALL,
  POS(1951, 20),
  POS(1951, 20),
  POS(1951, 20),
  POS(1951, 19)
};

static FUNCTION_INFO i_lambda_238 = {
  t_lambda_238, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_239[] = {
  2, // locals
  0, // parameters
  // F':
  var_std__less, 2, chr_70, var_1943_16_next_digit, 1, LOCAL(1),
  // F':
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // next_digit <= 'F':
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1951, 56),
  POS(1951, 56),
  POS(1951, 41)
};

static FUNCTION_INFO i_lambda_239 = {
  t_lambda_239, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_240[] = {
  3, // locals
  0, // parameters
  // value << 4)+(next_digit-'A')+10
  var_std__shift_left, 2, var_1936_29_value, num_4, 1, LOCAL(1),
  // next_digit-'A')+10
  var_std__minus, 2, var_1943_16_next_digit, chr_65, 1, LOCAL(2),
  // value << 4)+(next_digit-'A')+10
  var_std__plus, 2, LOCAL(1), LOCAL(2), 1, LOCAL(3),
  // !value (value << 4)+(next_digit-'A')+10
  var_std__plus, 2, LOCAL(3), num_10, 1, var_1936_29_value,
  // next
  var_next, 0, TAIL_CALL,
  POS(1952, 27),
  POS(1952, 40),
  POS(1952, 27),
  POS(1952, 19),
  POS(1953, 19)
};

static FUNCTION_INFO i_lambda_240 = {
  t_lambda_240, NULL, 5, 0,
  {}
};

static TAB_NUM t_lambda_241[] = {
  0, // locals
  0, // parameters
  //  true -> range(str i -1) value*sign
  LET, 2, var_true, lambda_242, TAIL_CALL,
  POS(1954, 19)
};

static FUNCTION_INFO i_lambda_241 = {
  t_lambda_241, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_242[] = {
  2, // locals
  0, // parameters
  // range(str i -1) value*sign
  var_range, 3, var_1918_5_str, var_1919_5_i, minus_num_1, 1, LOCAL(1),
  // value*sign
  var_std__times, 2, var_1936_29_value, var_1920_5_sign, 1, LOCAL(2),
  //  range(str i -1) value*sign
  LET, 2, LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(1954, 28),
  POS(1954, 44),
  POS(1954, 27)
};

static FUNCTION_INFO i_lambda_242 = {
  t_lambda_242, NULL, 3, 0,
  {}
};

static TAB_NUM t_func_std_types__string___to_integer[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 1990_5_self
  // parse_integer &self $value
  var_parse_integer, 1, LOCAL(2), 2, LOCAL(2), var_1992_24_value,
  // self == ""
  var_std__equal, 2, LOCAL(2), string_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_243, lambda_244, TAIL_CALL,
  POS(1992, 3),
  POS(1994, 5),
  POS(1993, 3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_std_types__string___to_integer = {
  t_func_std_types__string___to_integer, NULL, 3, 1,
  {"1990_5_self\000"}
};

static TAB_NUM t_lambda_243[] = {
  0, // locals
  0, // parameters
  //  value
  LET, 1, var_1992_24_value, TAIL_CALL,
  POS(1995, 7)
};

static FUNCTION_INFO i_lambda_243 = {
  t_lambda_243, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_244[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(1996, 7)
};

static FUNCTION_INFO i_lambda_244 = {
  t_lambda_244, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_std_types__string___to_number[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 2032_5_self
  // parse_number &self $value
  var_parse_number, 1, LOCAL(2), 2, LOCAL(2), var_2034_23_value,
  // self == ""
  var_std__equal, 2, LOCAL(2), string_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_245, lambda_246, TAIL_CALL,
  POS(2034, 3),
  POS(2036, 5),
  POS(2035, 3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_std_types__string___to_number = {
  t_func_std_types__string___to_number, NULL, 3, 1,
  {"2032_5_self\000"}
};

static TAB_NUM t_lambda_245[] = {
  0, // locals
  0, // parameters
  //  value
  LET, 1, var_2034_23_value, TAIL_CALL,
  POS(2037, 7)
};

static FUNCTION_INFO i_lambda_245 = {
  t_lambda_245, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_246[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(2038, 7)
};

static FUNCTION_INFO i_lambda_246 = {
  t_lambda_246, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_std__map_characters[] = {
  2, // locals
  2, // parameters
  var_2061_5_self,
  var_2062_5_function,
  // parameter_count_of(function) == 2
  var_parameter_count_of, 1, var_2062_5_function, 1, LOCAL(1),
  // parameter_count_of(function) == 2
  var_std__equal, 2, LOCAL(1), num_2, 1, LOCAL(2),
  // $map
  var_if, 3, LOCAL(2), lambda_247, lambda_253, 1, var_2064_4_map,
  // length_of(self)
  var_length_of, 1, var_2061_5_self, 1, LOCAL(1),
  // map 1 length_of(self)
  var_2064_4_map, 2, num_1, LOCAL(1), TAIL_CALL,
  POS(2066, 7),
  POS(2066, 7),
  POS(2064, 3),
  POS(2094, 9),
  POS(2094, 3)
};

static FUNCTION_INFO i_func_std__map_characters = {
  t_func_std__map_characters, NULL, 5, 0,
  {}
};

static TAB_NUM t_lambda_247[] = {
  0, // locals
  0, // parameters
  // 
  LET, 1, lambda_248, TAIL_CALL,
  POS(2067, 9)
};

static FUNCTION_INFO i_lambda_247 = {
  t_lambda_247, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_248[] = {
  1, // locals
  2, // parameters
  var_2068_12_s,
  var_2068_14_e,
  // s < e:
  var_std__less, 2, var_2068_12_s, var_2068_14_e, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_249, lambda_250, TAIL_CALL,
  POS(2070, 13),
  POS(2069, 11)
};

static FUNCTION_INFO i_lambda_248 = {
  t_lambda_248, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_249[] = {
  4, // locals
  0, // parameters
  // s+e) >> 1
  var_std__plus, 2, var_2068_12_s, var_2068_14_e, 1, LOCAL(1),
  // $m (s+e) >> 1
  var_std__shift_right, 2, LOCAL(1), num_1, 1, LOCAL(4),
  // map(s m)
  var_2064_4_map, 2, var_2068_12_s, LOCAL(4), 1, LOCAL(1),
  // m+1 e)
  var_std__plus, 2, LOCAL(4), num_1, 1, LOCAL(2),
  // map(m+1 e)
  var_2064_4_map, 2, LOCAL(2), var_2068_14_e, 1, LOCAL(3),
  // append
  var_append, 2, LOCAL(1), LOCAL(3), TAIL_CALL,
  POS(2071, 19),
  POS(2071, 15),
  POS(2073, 17),
  POS(2074, 21),
  POS(2074, 17),
  POS(2072, 15),
  LOCAL(4)
};

static FUNCTION_INFO i_lambda_249 = {
  t_lambda_249, NULL, 6, 1,
  {"2071_16_m\000"}
};

static TAB_NUM t_lambda_250[] = {
  1, // locals
  0, // parameters
  // e
  var_std__less, 2, var_2068_14_e, var_2068_12_s, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_251, lambda_252, TAIL_CALL,
  POS(2077, 21),
  POS(2076, 15)
};

static FUNCTION_INFO i_lambda_250 = {
  t_lambda_250, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_251[] = {
  0, // locals
  0, // parameters
  //  ""
  LET, 1, string_1, TAIL_CALL,
  POS(2078, 19)
};

static FUNCTION_INFO i_lambda_251 = {
  t_lambda_251, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_252[] = {
  3, // locals
  0, // parameters
  // self(s)).to_string
  var_2061_5_self, 1, var_2068_12_s, 1, LOCAL(1),
  // function(s self(s)).to_string
  var_2062_5_function, 2, var_2068_12_s, LOCAL(1), 1, LOCAL(2),
  // to_string
  var_to_string, 1, LOCAL(2), 1, LOCAL(3),
  //  function(s self(s)).to_string
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(2079, 31),
  POS(2079, 20),
  POS(2079, 40),
  POS(2079, 19)
};

static FUNCTION_INFO i_lambda_252 = {
  t_lambda_252, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_253[] = {
  0, // locals
  0, // parameters
  // 
  LET, 1, lambda_254, TAIL_CALL,
  POS(2080, 9)
};

static FUNCTION_INFO i_lambda_253 = {
  t_lambda_253, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_254[] = {
  1, // locals
  2, // parameters
  var_2081_12_s,
  var_2081_14_e,
  // s < e:
  var_std__less, 2, var_2081_12_s, var_2081_14_e, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_255, lambda_256, TAIL_CALL,
  POS(2083, 13),
  POS(2082, 11)
};

static FUNCTION_INFO i_lambda_254 = {
  t_lambda_254, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_255[] = {
  4, // locals
  0, // parameters
  // s+e) >> 1
  var_std__plus, 2, var_2081_12_s, var_2081_14_e, 1, LOCAL(1),
  // $m (s+e) >> 1
  var_std__shift_right, 2, LOCAL(1), num_1, 1, LOCAL(4),
  // map(s m)
  var_2064_4_map, 2, var_2081_12_s, LOCAL(4), 1, LOCAL(1),
  // m+1 e)
  var_std__plus, 2, LOCAL(4), num_1, 1, LOCAL(2),
  // map(m+1 e)
  var_2064_4_map, 2, LOCAL(2), var_2081_14_e, 1, LOCAL(3),
  // append
  var_append, 2, LOCAL(1), LOCAL(3), TAIL_CALL,
  POS(2084, 19),
  POS(2084, 15),
  POS(2086, 17),
  POS(2087, 21),
  POS(2087, 17),
  POS(2085, 15),
  LOCAL(4)
};

static FUNCTION_INFO i_lambda_255 = {
  t_lambda_255, NULL, 6, 1,
  {"2084_16_m\000"}
};

static TAB_NUM t_lambda_256[] = {
  1, // locals
  0, // parameters
  // e
  var_std__less, 2, var_2081_14_e, var_2081_12_s, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_257, lambda_258, TAIL_CALL,
  POS(2090, 21),
  POS(2089, 15)
};

static FUNCTION_INFO i_lambda_256 = {
  t_lambda_256, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_257[] = {
  0, // locals
  0, // parameters
  //  ""
  LET, 1, string_1, TAIL_CALL,
  POS(2091, 19)
};

static FUNCTION_INFO i_lambda_257 = {
  t_lambda_257, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_258[] = {
  3, // locals
  0, // parameters
  // self(s)).to_string
  var_2061_5_self, 1, var_2081_12_s, 1, LOCAL(1),
  // function(self(s)).to_string
  var_2062_5_function, 1, LOCAL(1), 1, LOCAL(2),
  // to_string
  var_to_string, 1, LOCAL(2), 1, LOCAL(3),
  //  function(self(s)).to_string
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(2092, 29),
  POS(2092, 20),
  POS(2092, 38),
  POS(2092, 19)
};

static FUNCTION_INFO i_lambda_258 = {
  t_lambda_258, NULL, 4, 0,
  {}
};

static TAB_NUM t_func_std_types__string___to_upper_case[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 2114_5_self
  // map_characters self to_upper_case
  var_map_characters, 2, LOCAL(1), var_to_upper_case, TAIL_CALL,
  POS(2116, 3),
  LOCAL(1)
};

static FUNCTION_INFO i_func_std_types__string___to_upper_case = {
  t_func_std_types__string___to_upper_case, NULL, 1, 1,
  {"2114_5_self\000"}
};

static TAB_NUM t_func_std_types__string___to_lower_case[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 2136_5_self
  // map_characters self to_lower_case
  var_map_characters, 2, LOCAL(1), var_to_lower_case, TAIL_CALL,
  POS(2138, 3),
  LOCAL(1)
};

static FUNCTION_INFO i_func_std_types__string___to_lower_case = {
  t_func_std_types__string___to_lower_case, NULL, 1, 1,
  {"2136_5_self\000"}
};

static TAB_NUM t_func_std_types__string___to_title_case[] = {
  0, // locals
  1, // parameters
  var_2158_5_self,
  // map_characters self: (idx chr)
  var_map_characters, 2, var_2158_5_self, lambda_259, TAIL_CALL,
  POS(2160, 3)
};

static FUNCTION_INFO i_func_std_types__string___to_title_case = {
  t_func_std_types__string___to_title_case, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_259[] = {
  2, // locals
  2, // parameters
  var_2160_25_idx,
  var_2160_29_chr,
  // 1 && self(idx-1).is_a_letter_character
  var_std__less, 2, num_1, var_2160_25_idx, 1, LOCAL(1),
  // 1 && self(idx-1).is_a_letter_character
  var_std__and, 2, LOCAL(1), lambda_260, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_261, lambda_262, TAIL_CALL,
  POS(2162, 13),
  POS(2162, 13),
  POS(2161, 5)
};

static FUNCTION_INFO i_lambda_259 = {
  t_lambda_259, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_260[] = {
  3, // locals
  0, // parameters
  // idx-1).is_a_letter_character
  var_std__minus, 2, var_2160_25_idx, num_1, 1, LOCAL(1),
  // self(idx-1).is_a_letter_character
  var_2158_5_self, 1, LOCAL(1), 1, LOCAL(2),
  // is_a_letter_character
  var_is_a_letter_character, 1, LOCAL(2), 1, LOCAL(3),
  // self(idx-1).is_a_letter_character
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(2162, 23),
  POS(2162, 18),
  POS(2162, 30),
  POS(2162, 18)
};

static FUNCTION_INFO i_lambda_260 = {
  t_lambda_260, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_261[] = {
  1, // locals
  0, // parameters
  // to_lower_case
  var_to_lower_case, 1, var_2160_29_chr, 1, LOCAL(1),
  //  chr.to_lower_case
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(2163, 14),
  POS(2163, 9)
};

static FUNCTION_INFO i_lambda_261 = {
  t_lambda_261, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_262[] = {
  1, // locals
  0, // parameters
  // to_title_case
  var_to_title_case, 1, var_2160_29_chr, 1, LOCAL(1),
  //  chr.to_title_case
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(2164, 14),
  POS(2164, 9)
};

static FUNCTION_INFO i_lambda_262 = {
  t_lambda_262, NULL, 2, 0,
  {}
};

static TAB_NUM t_func_std_types__string___to_sentence_case[] = {
  0, // locals
  1, // parameters
  var_2184_5_self,
  // map_characters self: (idx chr)
  var_map_characters, 2, var_2184_5_self, lambda_263, TAIL_CALL,
  POS(2186, 3)
};

static FUNCTION_INFO i_func_std_types__string___to_sentence_case = {
  t_func_std_types__string___to_sentence_case, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_263[] = {
  2, // locals
  2, // parameters
  var_2186_25_idx,
  var_2186_29_chr,
  // idx == 1 && self(idx).is_a_letter_character
  var_std__equal, 2, var_2186_25_idx, num_1, 1, LOCAL(1),
  // idx == 1 && self(idx).is_a_letter_character
  var_std__and, 2, LOCAL(1), lambda_264, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_265, lambda_266, TAIL_CALL,
  POS(2188, 7),
  POS(2188, 7),
  POS(2187, 5)
};

static FUNCTION_INFO i_lambda_263 = {
  t_lambda_263, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_264[] = {
  2, // locals
  0, // parameters
  // self(idx).is_a_letter_character
  var_2184_5_self, 1, var_2186_25_idx, 1, LOCAL(1),
  // is_a_letter_character
  var_is_a_letter_character, 1, LOCAL(1), 1, LOCAL(2),
  // self(idx).is_a_letter_character
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2188, 19),
  POS(2188, 29),
  POS(2188, 19)
};

static FUNCTION_INFO i_lambda_264 = {
  t_lambda_264, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_265[] = {
  1, // locals
  0, // parameters
  // to_title_case
  var_to_title_case, 1, var_2186_29_chr, 1, LOCAL(1),
  //  chr.to_title_case
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(2189, 14),
  POS(2189, 9)
};

static FUNCTION_INFO i_lambda_265 = {
  t_lambda_265, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_266[] = {
  1, // locals
  0, // parameters
  // to_lower_case
  var_to_lower_case, 1, var_2186_29_chr, 1, LOCAL(1),
  //  chr.to_lower_case
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(2190, 14),
  POS(2190, 9)
};

static FUNCTION_INFO i_lambda_266 = {
  t_lambda_266, NULL, 2, 0,
  {}
};

static TAB_NUM t_func_std_types__string___to_wide[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 2192_30_str
  // map_characters str to_wide
  var_map_characters, 2, LOCAL(1), var_to_wide, TAIL_CALL,
  POS(2193, 3),
  LOCAL(1)
};

static FUNCTION_INFO i_func_std_types__string___to_wide = {
  t_func_std_types__string___to_wide, NULL, 1, 1,
  {"2192_30_str\000"}
};

static TAB_NUM t_func_std__delete_all[] = {
  1, // locals
  -2, // parameters
  MANDATORY_PARAMETER, LOCAL(1), // 2216_5_text
  REST_PARAMETER, var_2217_5_expressions,
  // $new_text ""
  LET, 1, string_1, 1, var_2233_4_new_text,
  // delete_all text
  func_delete_all, 1, LOCAL(1), TAIL_CALL,
  POS(2233, 3),
  POS(2234, 3),
  LOCAL(1)
};

static FUNCTION_INFO i_func_std__delete_all = {
  t_func_std__delete_all, NULL, 2, 1,
  {"2216_5_text\000"}
};

static TAB_NUM t_func_delete_all[] = {
  1, // locals
  1, // parameters
  var_2219_17_txt,
  // is_empty
  var_is_empty, 1, var_2219_17_txt, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_267, lambda_268, TAIL_CALL,
  POS(2221, 11),
  POS(2220, 5)
};

static FUNCTION_INFO i_func_delete_all = {
  t_func_delete_all, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_267[] = {
  0, // locals
  0, // parameters
  //  new_text
  LET, 1, var_2233_4_new_text, TAIL_CALL,
  POS(2222, 9)
};

static FUNCTION_INFO i_lambda_267 = {
  t_lambda_267, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_268[] = {
  0, // locals
  0, // parameters
  // for_each expressions
  var_for_each, 3, var_2217_5_expressions, lambda_269, lambda_271, TAIL_CALL,
  POS(2224, 9)
};

static FUNCTION_INFO i_lambda_268 = {
  t_lambda_268, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_269[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 2225_14_expression
  // $len match(expression txt)
  var_match, 2, LOCAL(2), var_2219_17_txt, 1, var_2226_14_len,
  // is_defined next:
  var_is_defined, 1, var_2226_14_len, 1, LOCAL(1),
  // if_not len.is_defined next:
  var_if_not, 3, LOCAL(1), var_next, lambda_270, TAIL_CALL,
  POS(2226, 13),
  POS(2227, 24),
  POS(2227, 13),
  LOCAL(2)
};

static FUNCTION_INFO i_lambda_269 = {
  t_lambda_269, NULL, 3, 1,
  {"2225_14_expression\000"}
};

static TAB_NUM t_lambda_270[] = {
  2, // locals
  0, // parameters
  // len+1 -1)
  var_std__plus, 2, var_2226_14_len, num_1, 1, LOCAL(1),
  // range(txt len+1 -1)
  var_range, 3, var_2219_17_txt, LOCAL(1), minus_num_1, 1, LOCAL(2),
  // delete_all range(txt len+1 -1)
  func_delete_all, 1, LOCAL(2), TAIL_CALL,
  POS(2228, 36),
  POS(2228, 26),
  POS(2228, 15)
};

static FUNCTION_INFO i_lambda_270 = {
  t_lambda_270, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_271[] = {
  1, // locals
  0, // parameters
  // txt(1)
  var_2219_17_txt, 1, num_1, 1, LOCAL(1),
  // push &new_text txt(1)
  var_push, 2, var_2233_4_new_text, LOCAL(1), 1, var_2233_4_new_text,
  // range(txt 2 -1)
  var_range, 3, var_2219_17_txt, num_2, minus_num_1, 1, LOCAL(1),
  // delete_all range(txt 2 -1)
  func_delete_all, 1, LOCAL(1), TAIL_CALL,
  POS(2230, 28),
  POS(2230, 13),
  POS(2231, 24),
  POS(2231, 13)
};

static FUNCTION_INFO i_lambda_271 = {
  t_lambda_271, NULL, 4, 0,
  {}
};

static TAB_NUM t_func_std__replace_all[] = {
  1, // locals
  -2, // parameters
  MANDATORY_PARAMETER, LOCAL(1), // 2257_5_text
  REST_PARAMETER, var_2258_5_args,
  // $new_text ""
  LET, 1, string_1, 1, var_2281_4_new_text,
  // replace_all text
  func_replace_all, 1, LOCAL(1), TAIL_CALL,
  POS(2281, 3),
  POS(2282, 3),
  LOCAL(1)
};

static FUNCTION_INFO i_func_std__replace_all = {
  t_func_std__replace_all, NULL, 2, 1,
  {"2257_5_text\000"}
};

static TAB_NUM t_func_replace_all[] = {
  1, // locals
  1, // parameters
  var_2260_18_txt,
  // is_empty
  var_is_empty, 1, var_2260_18_txt, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_272, lambda_273, TAIL_CALL,
  POS(2262, 11),
  POS(2261, 5)
};

static FUNCTION_INFO i_func_replace_all = {
  t_func_replace_all, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_272[] = {
  0, // locals
  0, // parameters
  //  new_text
  LET, 1, var_2281_4_new_text, TAIL_CALL,
  POS(2263, 9)
};

static FUNCTION_INFO i_lambda_272 = {
  t_lambda_272, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_273[] = {
  0, // locals
  0, // parameters
  // for_each args
  var_for_each, 3, var_2258_5_args, lambda_274, lambda_277, TAIL_CALL,
  POS(2265, 9)
};

static FUNCTION_INFO i_lambda_273 = {
  t_lambda_273, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_274[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 2266_14_arg
  // arg $expression $replacement
  LOCAL(2), 0, 2, LOCAL(3), var_2267_30_replacement,
  // $len match(expression txt)
  var_match, 2, LOCAL(3), var_2260_18_txt, 1, var_2268_14_len,
  // is_defined next:
  var_is_defined, 1, var_2268_14_len, 1, LOCAL(1),
  // if_not len.is_defined next:
  var_if_not, 3, LOCAL(1), var_next, lambda_275, TAIL_CALL,
  POS(2267, 13),
  POS(2268, 13),
  POS(2269, 24),
  POS(2269, 13),
  LOCAL(3),
  LOCAL(2)
};

static FUNCTION_INFO i_lambda_274 = {
  t_lambda_274, NULL, 4, 2,
  {"2267_18_expression\000", "2266_14_arg\000"}
};

static TAB_NUM t_lambda_275[] = {
  1, // locals
  0, // parameters
  // is_a_string:
  var_is_a_string, 1, var_2267_30_replacement, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_replacement_is_a_string, lambda_276, TAIL_CALL,
  POS(2271, 29),
  POS(2270, 15)
};

static FUNCTION_INFO i_lambda_275 = {
  t_lambda_275, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_replacement_is_a_string[] = {
  2, // locals
  0, // parameters
  // append &new_text replacement
  var_append, 2, var_2281_4_new_text, var_2267_30_replacement, 1, var_2281_4_new_text,
  // len+1 -1)
  var_std__plus, 2, var_2268_14_len, num_1, 1, LOCAL(1),
  // range(txt len+1 -1)
  var_range, 3, var_2260_18_txt, LOCAL(1), minus_num_1, 1, LOCAL(2),
  // replace_all range(txt len+1 -1)
  func_replace_all, 1, LOCAL(2), TAIL_CALL,
  POS(2272, 19),
  POS(2273, 41),
  POS(2273, 31),
  POS(2273, 19)
};

static FUNCTION_INFO i_lambda_replacement_is_a_string = {
  t_lambda_replacement_is_a_string, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_276[] = {
  2, // locals
  0, // parameters
  // range(txt 1 len))
  var_range, 3, var_2260_18_txt, num_1, var_2268_14_len, 1, LOCAL(1),
  // replacement(range(txt 1 len))
  var_2267_30_replacement, 1, LOCAL(1), 1, LOCAL(2),
  // append &new_text replacement(range(txt 1 len))
  var_append, 2, var_2281_4_new_text, LOCAL(2), 1, var_2281_4_new_text,
  // len+1 -1)
  var_std__plus, 2, var_2268_14_len, num_1, 1, LOCAL(1),
  // range(txt len+1 -1)
  var_range, 3, var_2260_18_txt, LOCAL(1), minus_num_1, 1, LOCAL(2),
  // replace_all range(txt len+1 -1)
  func_replace_all, 1, LOCAL(2), TAIL_CALL,
  POS(2275, 48),
  POS(2275, 36),
  POS(2275, 19),
  POS(2276, 41),
  POS(2276, 31),
  POS(2276, 19)
};

static FUNCTION_INFO i_lambda_276 = {
  t_lambda_276, NULL, 6, 0,
  {}
};

static TAB_NUM t_lambda_277[] = {
  1, // locals
  0, // parameters
  // txt(1)
  var_2260_18_txt, 1, num_1, 1, LOCAL(1),
  // push &new_text txt(1)
  var_push, 2, var_2281_4_new_text, LOCAL(1), 1, var_2281_4_new_text,
  // range(txt 2 -1)
  var_range, 3, var_2260_18_txt, num_2, minus_num_1, 1, LOCAL(1),
  // replace_all range(txt 2 -1)
  func_replace_all, 1, LOCAL(1), TAIL_CALL,
  POS(2278, 28),
  POS(2278, 13),
  POS(2279, 25),
  POS(2279, 13)
};

static FUNCTION_INFO i_lambda_277 = {
  t_lambda_277, NULL, 4, 0,
  {}
};

static TAB_NUM t_func_std__replace_first[] = {
  1, // locals
  -2, // parameters
  MANDATORY_PARAMETER, LOCAL(1), // 2305_5_text
  REST_PARAMETER, var_2306_5_args,
  // $new_text ""
  LET, 1, string_1, 1, var_2328_4_new_text,
  // replace_first text
  func_replace_first, 1, LOCAL(1), TAIL_CALL,
  POS(2328, 3),
  POS(2329, 3),
  LOCAL(1)
};

static FUNCTION_INFO i_func_std__replace_first = {
  t_func_std__replace_first, NULL, 2, 1,
  {"2305_5_text\000"}
};

static TAB_NUM t_func_replace_first[] = {
  1, // locals
  1, // parameters
  var_2308_20_txt,
  // is_empty
  var_is_empty, 1, var_2308_20_txt, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_278, lambda_279, TAIL_CALL,
  POS(2310, 11),
  POS(2309, 5)
};

static FUNCTION_INFO i_func_replace_first = {
  t_func_replace_first, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_278[] = {
  0, // locals
  0, // parameters
  //  new_text
  LET, 1, var_2328_4_new_text, TAIL_CALL,
  POS(2311, 9)
};

static FUNCTION_INFO i_lambda_278 = {
  t_lambda_278, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_279[] = {
  0, // locals
  0, // parameters
  // for_each args
  var_for_each, 3, var_2306_5_args, lambda_280, lambda_283, TAIL_CALL,
  POS(2313, 9)
};

static FUNCTION_INFO i_lambda_279 = {
  t_lambda_279, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_280[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 2314_14_arg
  // arg $expression $replacement
  LOCAL(2), 0, 2, LOCAL(3), var_2315_30_replacement,
  // $len match(expression txt)
  var_match, 2, LOCAL(3), var_2308_20_txt, 1, var_2316_14_len,
  // is_defined
  var_is_defined, 1, var_2316_14_len, 1, LOCAL(1),
  // if_not
  var_if_not, 3, LOCAL(1), var_next, lambda_281, TAIL_CALL,
  POS(2315, 13),
  POS(2316, 13),
  POS(2318, 19),
  POS(2317, 13),
  LOCAL(2),
  LOCAL(3)
};

static FUNCTION_INFO i_lambda_280 = {
  t_lambda_280, NULL, 4, 2,
  {"2314_14_arg\000", "2315_18_expression\000"}
};

static TAB_NUM t_lambda_281[] = {
  3, // locals
  0, // parameters
  // is_a_string &replacement
  var_is_a_string, 1, var_2315_30_replacement, 1, LOCAL(1),
  // update_if_not replacement.is_a_string &replacement
  var_update_if_not, 3, LOCAL(1), var_2315_30_replacement, lambda_282, 1, var_2315_30_replacement,
  // len+1 -1))
  var_std__plus, 2, var_2316_14_len, num_1, 1, LOCAL(1),
  // range(txt len+1 -1))
  var_range, 3, var_2308_20_txt, LOCAL(1), minus_num_1, 1, LOCAL(2),
  // append(new_text replacement range(txt len+1 -1))
  var_append, 3, var_2328_4_new_text, var_2315_30_replacement, LOCAL(2), 1, LOCAL(3),
  // -> append(new_text replacement range(txt len+1 -1))
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(2321, 43),
  POS(2321, 17),
  POS(2323, 58),
  POS(2323, 48),
  POS(2323, 20),
  POS(2323, 17)
};

static FUNCTION_INFO i_lambda_281 = {
  t_lambda_281, NULL, 6, 0,
  {}
};

static TAB_NUM t_lambda_282[] = {
  2, // locals
  0, // parameters
  // range(txt 1 len))
  var_range, 3, var_2308_20_txt, num_1, var_2316_14_len, 1, LOCAL(1),
  // replacement(range(txt 1 len))
  var_2315_30_replacement, 1, LOCAL(1), 1, LOCAL(2),
  //  replacement(range(txt 1 len))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2322, 34),
  POS(2322, 22),
  POS(2322, 21)
};

static FUNCTION_INFO i_lambda_282 = {
  t_lambda_282, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_283[] = {
  1, // locals
  0, // parameters
  // txt(1)
  var_2308_20_txt, 1, num_1, 1, LOCAL(1),
  // push &new_text txt(1)
  var_push, 2, var_2328_4_new_text, LOCAL(1), 1, var_2328_4_new_text,
  // range(txt 2 -1)
  var_range, 3, var_2308_20_txt, num_2, minus_num_1, 1, LOCAL(1),
  // replace_first range(txt 2 -1)
  func_replace_first, 1, LOCAL(1), TAIL_CALL,
  POS(2325, 28),
  POS(2325, 13),
  POS(2326, 27),
  POS(2326, 13)
};

static FUNCTION_INFO i_lambda_283 = {
  t_lambda_283, NULL, 4, 0,
  {}
};

static TAB_NUM t_func_std__count_occurrences[] = {
  1, // locals
  2, // parameters
  LOCAL(1), // 2350_5_text
  var_2351_5_expr,
  // search_next text 0
  func_search_next, 2, LOCAL(1), num_0, TAIL_CALL,
  POS(2365, 3),
  LOCAL(1)
};

static FUNCTION_INFO i_func_std__count_occurrences = {
  t_func_std__count_occurrences, NULL, 1, 1,
  {"2350_5_text\000"}
};

static TAB_NUM t_func_search_next[] = {
  1, // locals
  2, // parameters
  var_2353_18_txt,
  var_2353_22_count,
  // txt == ""
  var_std__equal, 2, var_2353_18_txt, string_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_284, lambda_285, TAIL_CALL,
  POS(2355, 7),
  POS(2354, 5)
};

static FUNCTION_INFO i_func_search_next = {
  t_func_search_next, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_284[] = {
  0, // locals
  0, // parameters
  //  count
  LET, 1, var_2353_22_count, TAIL_CALL,
  POS(2356, 9)
};

static FUNCTION_INFO i_lambda_284 = {
  t_lambda_284, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_285[] = {
  1, // locals
  0, // parameters
  // $n match(expr txt)
  var_match, 2, var_2351_5_expr, var_2353_18_txt, 1, var_2358_10_n,
  // is_defined:
  var_is_defined, 1, var_2358_10_n, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_n_is_defined, lambda_286, TAIL_CALL,
  POS(2358, 9),
  POS(2360, 13),
  POS(2359, 9)
};

static FUNCTION_INFO i_lambda_285 = {
  t_lambda_285, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_n_is_defined[] = {
  3, // locals
  0, // parameters
  // n+1 -1) count+1
  var_std__plus, 2, var_2358_10_n, num_1, 1, LOCAL(1),
  // range(txt n+1 -1) count+1
  var_range, 3, var_2353_18_txt, LOCAL(1), minus_num_1, 1, LOCAL(2),
  // count+1
  var_std__plus, 2, var_2353_22_count, num_1, 1, LOCAL(3),
  // search_next range(txt n+1 -1) count+1
  func_search_next, 2, LOCAL(2), LOCAL(3), TAIL_CALL,
  POS(2361, 35),
  POS(2361, 25),
  POS(2361, 43),
  POS(2361, 13)
};

static FUNCTION_INFO i_lambda_n_is_defined = {
  t_lambda_n_is_defined, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_286[] = {
  1, // locals
  0, // parameters
  // range(txt 2 -1) count
  var_range, 3, var_2353_18_txt, num_2, minus_num_1, 1, LOCAL(1),
  // search_next range(txt 2 -1) count
  func_search_next, 2, LOCAL(1), var_2353_22_count, TAIL_CALL,
  POS(2363, 25),
  POS(2363, 13)
};

static FUNCTION_INFO i_lambda_286 = {
  t_lambda_286, NULL, 2, 0,
  {}
};

static TAB_NUM t_func_std__split_into_lines[] = {
  0, // locals
  1, // parameters
  var_2409_26_text,
  // $lines empty_list
  LET, 1, var_empty_list, 1, var_2410_4_lines,
  // $i 1
  LET, 1, num_1, 1, var_2411_4_i,
  // $n length_of(text)
  var_length_of, 1, var_2409_26_text, 1, var_2412_4_n,
  // $s i
  LET, 1, var_2411_4_i, 1, var_2413_4_s,
  // loop:
  var_loop, 1, lambda_15_loop, TAIL_CALL,
  POS(2410, 3),
  POS(2411, 3),
  POS(2412, 3),
  POS(2413, 3),
  POS(2414, 3)
};

static FUNCTION_INFO i_func_std__split_into_lines = {
  t_func_std__split_into_lines, NULL, 5, 0,
  {}
};

static TAB_NUM t_lambda_15_loop[] = {
  1, // locals
  0, // parameters
  // n
  var_std__less, 2, var_2412_4_n, var_2411_4_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_287, lambda_290, TAIL_CALL,
  POS(2416, 11),
  POS(2415, 5)
};

static FUNCTION_INFO i_lambda_15_loop = {
  t_lambda_15_loop, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_287[] = {
  3, // locals
  0, // parameters
  // n
  var_std__less, 2, var_2412_4_n, var_2413_4_s, 1, LOCAL(1),
  // n
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_288, lambda_289, 1, LOCAL(3),
  // 
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(2419, 16),
  POS(2419, 16),
  POS(2418, 9),
  POS(2417, 9)
};

static FUNCTION_INFO i_lambda_287 = {
  t_lambda_287, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_288[] = {
  2, // locals
  0, // parameters
  // range(text s n))
  var_range, 3, var_2409_26_text, var_2413_4_s, var_2412_4_n, 1, LOCAL(1),
  // push(lines range(text s n))
  var_push, 2, var_2410_4_lines, LOCAL(1), 1, LOCAL(2),
  //  push(lines range(text s n))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2420, 25),
  POS(2420, 14),
  POS(2420, 13)
};

static FUNCTION_INFO i_lambda_288 = {
  t_lambda_288, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_289[] = {
  0, // locals
  0, // parameters
  //  lines
  LET, 1, var_2410_4_lines, TAIL_CALL,
  POS(2421, 13)
};

static FUNCTION_INFO i_lambda_289 = {
  t_lambda_289, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_290[] = {
  2, // locals
  0, // parameters
  // text(i) == '@nl;':
  var_2409_26_text, 1, var_2411_4_i, 1, LOCAL(1),
  // text(i) == '@nl;':
  var_std__equal, 2, LOCAL(1), chr_10, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_291, lambda_292, TAIL_CALL,
  POS(2424, 11),
  POS(2424, 11),
  POS(2423, 9)
};

static FUNCTION_INFO i_lambda_290 = {
  t_lambda_290, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_291[] = {
  1, // locals
  0, // parameters
  // range(text s i)
  var_range, 3, var_2409_26_text, var_2413_4_s, var_2411_4_i, 1, LOCAL(1),
  // push &lines range(text s i)
  var_push, 2, var_2410_4_lines, LOCAL(1), 1, var_2410_4_lines,
  // !i i+1
  var_std__plus, 2, var_2411_4_i, num_1, 1, var_2411_4_i,
  // !s i
  LET, 1, var_2411_4_i, 1, var_2413_4_s,
  // next
  var_next, 0, TAIL_CALL,
  POS(2425, 25),
  POS(2425, 13),
  POS(2426, 13),
  POS(2427, 13),
  POS(2428, 13)
};

static FUNCTION_INFO i_lambda_291 = {
  t_lambda_291, NULL, 5, 0,
  {}
};

static TAB_NUM t_lambda_292[] = {
  0, // locals
  0, // parameters
  // !i i+1
  var_std__plus, 2, var_2411_4_i, num_1, 1, var_2411_4_i,
  // next
  var_next, 0, TAIL_CALL,
  POS(2430, 13),
  POS(2431, 13)
};

static FUNCTION_INFO i_lambda_292 = {
  t_lambda_292, NULL, 2, 0,
  {}
};

static TAB_NUM t_func_std__split_into_indented_lines[] = {
  1, // locals
  1, // parameters
  var_2492_5_text,
  // $n length_of(text)
  var_length_of, 1, var_2492_5_text, 1, LOCAL(1),
  // split 1 n
  func_split, 2, num_1, LOCAL(1), TAIL_CALL,
  POS(2494, 3),
  POS(2495, 3),
  LOCAL(1)
};

static FUNCTION_INFO i_func_std__split_into_indented_lines = {
  t_func_std__split_into_indented_lines, NULL, 2, 1,
  {"2494_4_n\000"}
};

static TAB_NUM t_func_split[] = {
  3, // locals
  2, // parameters
  var_2497_12_s,
  var_2497_14_e,
  // e+1-s > FORK_TEXT_THRESHOLD: # recurse to exploit parallel execution
  var_std__plus, 2, var_2497_14_e, num_1, 1, LOCAL(1),
  // e+1-s > FORK_TEXT_THRESHOLD: # recurse to exploit parallel execution
  var_std__minus, 2, LOCAL(1), var_2497_12_s, 1, LOCAL(2),
  // FORK_TEXT_THRESHOLD: # recurse to exploit parallel execution
  var_std__less, 2, num_300, LOCAL(2), 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_293, lambda_294, TAIL_CALL,
  POS(2499, 7),
  POS(2499, 7),
  POS(2499, 15),
  POS(2498, 5)
};

static FUNCTION_INFO i_func_split = {
  t_func_split, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_293[] = {
  4, // locals
  0, // parameters
  // s+e) .div. 2
  var_std__plus, 2, var_2497_12_s, var_2497_14_e, 1, LOCAL(1),
  // $m (s+e) .div. 2
  var_div, 2, LOCAL(1), num_2, 1, LOCAL(4),
  // split(s m) split(m+1 e)
  func_split, 2, var_2497_12_s, LOCAL(4), 1, LOCAL(1),
  // m+1 e)
  var_std__plus, 2, LOCAL(4), num_1, 1, LOCAL(2),
  // split(m+1 e)
  func_split, 2, LOCAL(2), var_2497_14_e, 1, LOCAL(3),
  // append split(s m) split(m+1 e)
  var_append, 2, LOCAL(1), LOCAL(3), TAIL_CALL,
  POS(2500, 13),
  POS(2500, 9),
  POS(2501, 16),
  POS(2501, 33),
  POS(2501, 27),
  POS(2501, 9),
  LOCAL(4)
};

static FUNCTION_INFO i_lambda_293 = {
  t_lambda_293, NULL, 6, 1,
  {"2500_10_m\000"}
};

static TAB_NUM t_lambda_294[] = {
  2, // locals
  0, // parameters
  // $lines empty_list
  LET, 1, var_empty_list, 1, var_2503_10_lines,
  // s == 1 || text(s-1) == '@nl;'
  var_std__equal, 2, var_2497_12_s, num_1, 1, LOCAL(1),
  // s == 1 || text(s-1) == '@nl;'
  var_std__or, 2, LOCAL(1), lambda_295, 1, LOCAL(2),
  // $ls
  var_if, 3, LOCAL(2), lambda_296, lambda_297, 1, var_2504_10_ls,
  // from_to s e
  var_from_to, 4, var_2497_12_s, var_2497_14_e, lambda_298, lambda_301, TAIL_CALL,
  POS(2503, 9),
  POS(2506, 13),
  POS(2506, 13),
  POS(2504, 9),
  POS(2509, 9)
};

static FUNCTION_INFO i_lambda_294 = {
  t_lambda_294, NULL, 5, 0,
  {}
};

static TAB_NUM t_lambda_295[] = {
  3, // locals
  0, // parameters
  // s-1) == '@nl;'
  var_std__minus, 2, var_2497_12_s, num_1, 1, LOCAL(1),
  // text(s-1) == '@nl;'
  var_2492_5_text, 1, LOCAL(1), 1, LOCAL(2),
  // text(s-1) == '@nl;'
  var_std__equal, 2, LOCAL(2), chr_10, 1, LOCAL(3),
  // text(s-1) == '@nl;'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(2506, 28),
  POS(2506, 23),
  POS(2506, 23),
  POS(2506, 23)
};

static FUNCTION_INFO i_lambda_295 = {
  t_lambda_295, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_296[] = {
  0, // locals
  0, // parameters
  //  s # the current block starts at a line start
  LET, 1, var_2497_12_s, TAIL_CALL,
  POS(2507, 15)
};

static FUNCTION_INFO i_lambda_296 = {
  t_lambda_296, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_297[] = {
  0, // locals
  0, // parameters
  //  undefined # just skip the characters until the next line start
  LET, 1, var_undefined, TAIL_CALL,
  POS(2508, 15)
};

static FUNCTION_INFO i_lambda_297 = {
  t_lambda_297, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_298[] = {
  2, // locals
  1, // parameters
  var_2510_14_i,
  // text(i) == '@nl;' next:
  var_2492_5_text, 1, var_2510_14_i, 1, LOCAL(1),
  // text(i) == '@nl;' next:
  var_std__equal, 2, LOCAL(1), chr_10, 1, LOCAL(2),
  // if_not text(i) == '@nl;' next:
  var_if_not, 3, LOCAL(2), var_next, lambda_299, TAIL_CALL,
  POS(2511, 20),
  POS(2511, 20),
  POS(2511, 13)
};

static FUNCTION_INFO i_lambda_298 = {
  t_lambda_298, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_299[] = {
  1, // locals
  0, // parameters
  // is_defined:
  var_is_defined, 1, var_2504_10_ls, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_ls_is_defined, lambda_300, TAIL_CALL,
  POS(2513, 20),
  POS(2512, 15)
};

static FUNCTION_INFO i_lambda_299 = {
  t_lambda_299, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_ls_is_defined[] = {
  1, // locals
  0, // parameters
  // create_line(ls i)
  func_create_line, 2, var_2504_10_ls, var_2510_14_i, 1, LOCAL(1),
  // push &lines create_line(ls i)
  var_push, 2, var_2503_10_lines, LOCAL(1), 1, var_2503_10_lines,
  // !ls i+1
  var_std__plus, 2, var_2510_14_i, num_1, 1, var_2504_10_ls,
  // next
  var_next, 0, TAIL_CALL,
  POS(2514, 31),
  POS(2514, 19),
  POS(2515, 19),
  POS(2516, 19)
};

static FUNCTION_INFO i_lambda_ls_is_defined = {
  t_lambda_ls_is_defined, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_300[] = {
  0, // locals
  0, // parameters
  // !ls i+1
  var_std__plus, 2, var_2510_14_i, num_1, 1, var_2504_10_ls,
  // next
  var_next, 0, TAIL_CALL,
  POS(2518, 19),
  POS(2519, 19)
};

static FUNCTION_INFO i_lambda_300 = {
  t_lambda_300, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_301[] = {
  2, // locals
  0, // parameters
  // is_defined && ls <= e:
  var_is_defined, 1, var_2504_10_ls, 1, LOCAL(1),
  // is_defined && ls <= e:
  var_std__and, 2, LOCAL(1), lambda_302, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_303, lambda_305, TAIL_CALL,
  POS(2522, 18),
  POS(2522, 18),
  POS(2521, 13)
};

static FUNCTION_INFO i_lambda_301 = {
  t_lambda_301, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_302[] = {
  2, // locals
  0, // parameters
  // e:
  var_std__less, 2, var_2497_14_e, var_2504_10_ls, 1, LOCAL(1),
  // e:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // ls <= e:
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2522, 38),
  POS(2522, 38),
  POS(2522, 32)
};

static FUNCTION_INFO i_lambda_302 = {
  t_lambda_302, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_303[] = {
  0, // locals
  0, // parameters
  // loop: # the last line extends into the next block
  var_loop, 1, lambda_16_loop, TAIL_CALL,
  POS(2523, 17)
};

static FUNCTION_INFO i_lambda_303 = {
  t_lambda_303, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_16_loop[] = {
  2, // locals
  0, // parameters
  // !e e+1
  var_std__plus, 2, var_2497_14_e, num_1, 1, var_2497_14_e,
  // text(e) == '@nl;'
  var_2492_5_text, 1, var_2497_14_e, 1, LOCAL(1),
  // text(e) == '@nl;'
  var_std__equal, 2, LOCAL(1), chr_10, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_304, var_next, TAIL_CALL,
  POS(2524, 19),
  POS(2526, 21),
  POS(2526, 21),
  POS(2525, 19)
};

static FUNCTION_INFO i_lambda_16_loop = {
  t_lambda_16_loop, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_304[] = {
  2, // locals
  0, // parameters
  // create_line(ls e))
  func_create_line, 2, var_2504_10_ls, var_2497_14_e, 1, LOCAL(1),
  // push(lines create_line(ls e))
  var_push, 2, var_2503_10_lines, LOCAL(1), 1, LOCAL(2),
  //  push(lines create_line(ls e))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2527, 35),
  POS(2527, 24),
  POS(2527, 23)
};

static FUNCTION_INFO i_lambda_304 = {
  t_lambda_304, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_305[] = {
  0, // locals
  0, // parameters
  //  lines
  LET, 1, var_2503_10_lines, TAIL_CALL,
  POS(2529, 17)
};

static FUNCTION_INFO i_lambda_305 = {
  t_lambda_305, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_create_line[] = {
  0, // locals
  2, // parameters
  var_2531_18_s,
  var_2531_20_e,
  // $indent 0
  LET, 1, num_0, 1, var_2532_6_indent,
  // loop:
  var_loop, 1, lambda_17_loop, TAIL_CALL,
  POS(2532, 5),
  POS(2533, 5)
};

static FUNCTION_INFO i_func_create_line = {
  t_func_create_line, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_17_loop[] = {
  2, // locals
  0, // parameters
  // text(s) == '@ht;':
  var_2492_5_text, 1, var_2531_18_s, 1, LOCAL(1),
  // text(s) == '@ht;':
  var_std__equal, 2, LOCAL(1), chr_9, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_306, lambda_307, TAIL_CALL,
  POS(2535, 9),
  POS(2535, 9),
  POS(2534, 7)
};

static FUNCTION_INFO i_lambda_17_loop = {
  t_lambda_17_loop, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_306[] = {
  0, // locals
  0, // parameters
  // !indent indent+8
  var_std__plus, 2, var_2532_6_indent, num_8, 1, var_2532_6_indent,
  // !s s+1
  var_std__plus, 2, var_2531_18_s, num_1, 1, var_2531_18_s,
  // next
  var_next, 0, TAIL_CALL,
  POS(2536, 11),
  POS(2537, 11),
  POS(2538, 11)
};

static FUNCTION_INFO i_lambda_306 = {
  t_lambda_306, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_307[] = {
  2, // locals
  0, // parameters
  // text(s) == ' ':
  var_2492_5_text, 1, var_2531_18_s, 1, LOCAL(1),
  // text(s) == ' ':
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_308, lambda_309, TAIL_CALL,
  POS(2541, 13),
  POS(2541, 13),
  POS(2540, 11)
};

static FUNCTION_INFO i_lambda_307 = {
  t_lambda_307, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_308[] = {
  0, // locals
  0, // parameters
  // !indent indent+1
  var_std__plus, 2, var_2532_6_indent, num_1, 1, var_2532_6_indent,
  // !s s+1
  var_std__plus, 2, var_2531_18_s, num_1, 1, var_2531_18_s,
  // next
  var_next, 0, TAIL_CALL,
  POS(2542, 15),
  POS(2543, 15),
  POS(2544, 15)
};

static FUNCTION_INFO i_lambda_308 = {
  t_lambda_308, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_309[] = {
  1, // locals
  0, // parameters
  // $line_text range(text s e)
  var_range, 3, var_2492_5_text, var_2531_18_s, var_2531_20_e, 1, var_2546_16_line_text,
  // line_text == "@nl;"
  var_std__equal, 2, var_2546_16_line_text, string_9, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_310, lambda_311, TAIL_CALL,
  POS(2546, 15),
  POS(2548, 17),
  POS(2547, 15)
};

static FUNCTION_INFO i_lambda_309 = {
  t_lambda_309, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_310[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(2549, 19)
};

static FUNCTION_INFO i_lambda_310 = {
  t_lambda_310, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_311[] = {
  1, // locals
  0, // parameters
  // typed_tuple(std_types::line indent line_text)
  var_typed_tuple, 3, var_std_types__line, var_2532_6_indent, var_2546_16_line_text, 1, LOCAL(1),
  //  typed_tuple(std_types::line indent line_text)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(2550, 20),
  POS(2550, 19)
};

static FUNCTION_INFO i_lambda_311 = {
  t_lambda_311, NULL, 2, 0,
  {}
};

static TAB_NUM t_func_line_indent_of[] = {
  1, // locals
  1, // parameters
  var_2558_19_line,
  // is_defined
  var_is_defined, 1, var_2558_19_line, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_312, lambda_313, TAIL_CALL,
  POS(2560, 10),
  POS(2559, 3)
};

static FUNCTION_INFO i_func_line_indent_of = {
  t_func_line_indent_of, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_312[] = {
  1, // locals
  0, // parameters
  // first(line)
  var_first, 1, var_2558_19_line, 1, LOCAL(1),
  //  first(line)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(2561, 8),
  POS(2561, 7)
};

static FUNCTION_INFO i_lambda_312 = {
  t_lambda_312, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_313[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(2562, 7)
};

static FUNCTION_INFO i_lambda_313 = {
  t_lambda_313, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_std__split_into_groups[] = {
  0, // locals
  -2, // parameters
  MANDATORY_PARAMETER, var_2615_5_lines,
  var_false, var_2616_5_keep_empty_lines,
  // $n length_of(lines)
  var_length_of, 1, var_2615_5_lines, 1, var_2618_4_n,
  // $fv 1 # first valid line
  LET, 1, num_1, 1, var_2619_4_fv,
  // loop:
  var_loop, 1, lambda_18_loop, TAIL_CALL,
  POS(2618, 3),
  POS(2619, 3),
  POS(2620, 3)
};

static FUNCTION_INFO i_func_std__split_into_groups = {
  t_func_std__split_into_groups, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_18_loop[] = {
  2, // locals
  0, // parameters
  // n:
  var_std__less, 2, var_2618_4_n, var_2619_4_fv, 1, LOCAL(1),
  // n:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_314, lambda_319, TAIL_CALL,
  POS(2622, 13),
  POS(2622, 13),
  POS(2621, 5)
};

static FUNCTION_INFO i_lambda_18_loop = {
  t_lambda_18_loop, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_314[] = {
  1, // locals
  0, // parameters
  // lines(fv))
  var_2615_5_lines, 1, var_2619_4_fv, 1, LOCAL(1),
  // $indent line_indent_of(lines(fv))
  func_line_indent_of, 1, LOCAL(1), 1, var_2623_10_indent,
  // is_defined:
  var_is_defined, 1, var_2623_10_indent, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_indent_is_defined, lambda_318, TAIL_CALL,
  POS(2623, 32),
  POS(2623, 9),
  POS(2625, 18),
  POS(2624, 9)
};

static FUNCTION_INFO i_lambda_314 = {
  t_lambda_314, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_indent_is_defined[] = {
  1, // locals
  0, // parameters
  // keep_empty_lines && fv > 1
  var_std__and, 2, var_2616_5_keep_empty_lines, lambda_315, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_316, lambda_317, TAIL_CALL,
  POS(2627, 15),
  POS(2626, 13)
};

static FUNCTION_INFO i_lambda_indent_is_defined = {
  t_lambda_indent_is_defined, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_315[] = {
  1, // locals
  0, // parameters
  // 1
  var_std__less, 2, num_1, var_2619_4_fv, 1, LOCAL(1),
  // fv > 1
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(2627, 40),
  POS(2627, 35)
};

static FUNCTION_INFO i_lambda_315 = {
  t_lambda_315, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_316[] = {
  5, // locals
  0, // parameters
  // list(undefined) fv-1) split(fv n indent))
  var_list, 1, var_undefined, 1, LOCAL(1),
  // fv-1) split(fv n indent))
  var_std__minus, 2, var_2619_4_fv, num_1, 1, LOCAL(2),
  // dup(list(undefined) fv-1) split(fv n indent))
  var_dup, 2, LOCAL(1), LOCAL(2), 1, LOCAL(3),
  // split(fv n indent))
  func_2_split, 3, var_2619_4_fv, var_2618_4_n, var_2623_10_indent, 1, LOCAL(4),
  // append(dup(list(undefined) fv-1) split(fv n indent))
  var_append, 2, LOCAL(3), LOCAL(4), 1, LOCAL(5),
  //  append(dup(list(undefined) fv-1) split(fv n indent))
  LET, 1, LOCAL(5), TAIL_CALL,
  POS(2628, 29),
  POS(2628, 45),
  POS(2628, 25),
  POS(2628, 51),
  POS(2628, 18),
  POS(2628, 17)
};

static FUNCTION_INFO i_lambda_316 = {
  t_lambda_316, NULL, 6, 0,
  {}
};

static TAB_NUM t_lambda_317[] = {
  1, // locals
  0, // parameters
  // split(fv n indent)
  func_2_split, 3, var_2619_4_fv, var_2618_4_n, var_2623_10_indent, 1, LOCAL(1),
  //  split(fv n indent)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(2629, 18),
  POS(2629, 17)
};

static FUNCTION_INFO i_lambda_317 = {
  t_lambda_317, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_318[] = {
  0, // locals
  0, // parameters
  // !fv fv+1
  var_std__plus, 2, var_2619_4_fv, num_1, 1, var_2619_4_fv,
  // next
  var_next, 0, TAIL_CALL,
  POS(2631, 13),
  POS(2632, 13)
};

static FUNCTION_INFO i_lambda_318 = {
  t_lambda_318, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_319[] = {
  0, // locals
  0, // parameters
  //  empty_list
  LET, 1, var_empty_list, TAIL_CALL,
  POS(2633, 9)
};

static FUNCTION_INFO i_lambda_319 = {
  t_lambda_319, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_2_split[] = {
  3, // locals
  3, // parameters
  var_2635_12_s,
  var_2635_14_e,
  var_2635_16_indent,
  // e+1-s > FORK_LINES_THRESHOLD: # recurse to exploit parallel execution
  var_std__plus, 2, var_2635_14_e, num_1, 1, LOCAL(1),
  // e+1-s > FORK_LINES_THRESHOLD: # recurse to exploit parallel execution
  var_std__minus, 2, LOCAL(1), var_2635_12_s, 1, LOCAL(2),
  // FORK_LINES_THRESHOLD: # recurse to exploit parallel execution
  var_std__less, 2, num_20, LOCAL(2), 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_320, lambda_321, TAIL_CALL,
  POS(2637, 7),
  POS(2637, 7),
  POS(2637, 15),
  POS(2636, 5)
};

static FUNCTION_INFO i_func_2_split = {
  t_func_2_split, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_320[] = {
  4, // locals
  0, // parameters
  // s+e) .div. 2
  var_std__plus, 2, var_2635_12_s, var_2635_14_e, 1, LOCAL(1),
  // $m (s+e) .div. 2
  var_div, 2, LOCAL(1), num_2, 1, LOCAL(4),
  // split(s m indent) split(m+1 e indent)
  func_2_split, 3, var_2635_12_s, LOCAL(4), var_2635_16_indent, 1, LOCAL(1),
  // m+1 e indent)
  var_std__plus, 2, LOCAL(4), num_1, 1, LOCAL(2),
  // split(m+1 e indent)
  func_2_split, 3, LOCAL(2), var_2635_14_e, var_2635_16_indent, 1, LOCAL(3),
  // append split(s m indent) split(m+1 e indent)
  var_append, 2, LOCAL(1), LOCAL(3), TAIL_CALL,
  POS(2638, 13),
  POS(2638, 9),
  POS(2639, 16),
  POS(2639, 40),
  POS(2639, 34),
  POS(2639, 9),
  LOCAL(4)
};

static FUNCTION_INFO i_lambda_320 = {
  t_lambda_320, NULL, 6, 1,
  {"2638_10_m\000"}
};

static TAB_NUM t_lambda_321[] = {
  0, // locals
  0, // parameters
  // $groups empty_list
  LET, 1, var_empty_list, 1, var_2641_10_groups,
  // $minimum_indent VERY_LARGE_INDENT
  LET, 1, num_9999, 1, var_2642_10_minimum_indent,
  // $group_start undefined
  LET, 1, var_undefined, 1, var_2643_10_group_start,
  // $group_end undefined
  LET, 1, var_undefined, 1, var_2644_10_group_end,
  // from_to s e
  var_from_to, 4, var_2635_12_s, var_2635_14_e, lambda_322, lambda_329, TAIL_CALL,
  POS(2641, 9),
  POS(2642, 9),
  POS(2643, 9),
  POS(2644, 9),
  POS(2645, 9)
};

static FUNCTION_INFO i_lambda_321 = {
  t_lambda_321, NULL, 5, 0,
  {}
};

static TAB_NUM t_lambda_322[] = {
  1, // locals
  1, // parameters
  var_2646_14_i,
  // lines(i))
  var_2615_5_lines, 1, var_2646_14_i, 1, LOCAL(1),
  // $current_indent line_indent_of(lines(i))
  func_line_indent_of, 1, LOCAL(1), 1, var_2647_14_current_indent,
  // current_indent == indent:
  var_std__equal, 2, var_2647_14_current_indent, var_2635_16_indent, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_323, lambda_327, TAIL_CALL,
  POS(2647, 44),
  POS(2647, 13),
  POS(2649, 15),
  POS(2648, 13)
};

static FUNCTION_INFO i_lambda_322 = {
  t_lambda_322, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_323[] = {
  2, // locals
  0, // parameters
  // is_defined && group_start < i:
  var_is_defined, 1, var_2643_10_group_start, 1, LOCAL(1),
  // is_defined && group_start < i:
  var_std__and, 2, LOCAL(1), lambda_324, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_325, lambda_326, TAIL_CALL,
  POS(2651, 31),
  POS(2651, 31),
  POS(2650, 17)
};

static FUNCTION_INFO i_lambda_323 = {
  t_lambda_323, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_324[] = {
  1, // locals
  0, // parameters
  // group_start < i:
  var_std__less, 2, var_2643_10_group_start, var_2646_14_i, 1, LOCAL(1),
  // group_start < i:
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(2651, 45),
  POS(2651, 45)
};

static FUNCTION_INFO i_lambda_324 = {
  t_lambda_324, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_325[] = {
  0, // locals
  0, // parameters
  // add_groups !groups group_end i
  func_add_groups, 2, var_2644_10_group_end, var_2646_14_i, 1, var_2641_10_groups,
  // start_new_fragment_and_next i
  func_start_new_fragment_and_next, 1, var_2646_14_i, TAIL_CALL,
  POS(2652, 21),
  POS(2653, 21)
};

static FUNCTION_INFO i_lambda_325 = {
  t_lambda_325, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_326[] = {
  0, // locals
  0, // parameters
  // start_new_fragment_and_next i
  func_start_new_fragment_and_next, 1, var_2646_14_i, TAIL_CALL,
  POS(2655, 21)
};

static FUNCTION_INFO i_lambda_326 = {
  t_lambda_326, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_327[] = {
  1, // locals
  0, // parameters
  // is_defined &group_end -> i
  var_is_defined, 1, var_2647_14_current_indent, 1, LOCAL(1),
  // update_if current_indent.is_defined &group_end -> i
  var_update_if, 3, LOCAL(1), var_2644_10_group_end, lambda_328, 1, var_2644_10_group_end,
  // reduce_minimum_indent_and_next current_indent
  func_reduce_minimum_indent_and_next, 1, var_2647_14_current_indent, TAIL_CALL,
  POS(2657, 42),
  POS(2657, 17),
  POS(2658, 17)
};

static FUNCTION_INFO i_lambda_327 = {
  t_lambda_327, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_328[] = {
  0, // locals
  0, // parameters
  //  i
  LET, 1, var_2646_14_i, TAIL_CALL,
  POS(2657, 66)
};

static FUNCTION_INFO i_lambda_328 = {
  t_lambda_328, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_329[] = {
  1, // locals
  0, // parameters
  // is_defined:
  var_is_defined, 1, var_2643_10_group_start, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_group_start_is_defined, lambda_336, TAIL_CALL,
  POS(2661, 27),
  POS(2660, 13)
};

static FUNCTION_INFO i_lambda_329 = {
  t_lambda_329, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_group_start_is_defined[] = {
  0, // locals
  0, // parameters
  // loop: # the last group extends into the next block
  var_loop, 1, lambda_19_loop, TAIL_CALL,
  POS(2662, 17)
};

static FUNCTION_INFO i_lambda_group_start_is_defined = {
  t_lambda_group_start_is_defined, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_19_loop[] = {
  1, // locals
  0, // parameters
  // !e e+1
  var_std__plus, 2, var_2635_14_e, num_1, 1, var_2635_14_e,
  // n
  var_std__less, 2, var_2618_4_n, var_2635_14_e, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_330, lambda_331, TAIL_CALL,
  POS(2663, 19),
  POS(2665, 25),
  POS(2664, 19)
};

static FUNCTION_INFO i_lambda_19_loop = {
  t_lambda_19_loop, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_330[] = {
  1, // locals
  0, // parameters
  // add_groups(group_end e)
  func_add_groups, 2, var_2644_10_group_end, var_2635_14_e, 1, LOCAL(1),
  //  add_groups(group_end e)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(2666, 24),
  POS(2666, 23)
};

static FUNCTION_INFO i_lambda_330 = {
  t_lambda_330, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_331[] = {
  2, // locals
  0, // parameters
  // lines(e))
  var_2615_5_lines, 1, var_2635_14_e, 1, LOCAL(1),
  // $current_indent line_indent_of(lines(e))
  func_line_indent_of, 1, LOCAL(1), 1, var_2668_24_current_indent,
  // is_defined && current_indent <= indent
  var_is_defined, 1, var_2668_24_current_indent, 1, LOCAL(1),
  // is_defined && current_indent <= indent
  var_std__and, 2, LOCAL(1), lambda_332, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_333, lambda_334, TAIL_CALL,
  POS(2668, 54),
  POS(2668, 23),
  POS(2670, 40),
  POS(2670, 40),
  POS(2669, 23)
};

static FUNCTION_INFO i_lambda_331 = {
  t_lambda_331, NULL, 5, 0,
  {}
};

static TAB_NUM t_lambda_332[] = {
  2, // locals
  0, // parameters
  // indent
  var_std__less, 2, var_2635_16_indent, var_2668_24_current_indent, 1, LOCAL(1),
  // indent
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // current_indent <= indent
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2670, 72),
  POS(2670, 72),
  POS(2670, 54)
};

static FUNCTION_INFO i_lambda_332 = {
  t_lambda_332, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_333[] = {
  1, // locals
  0, // parameters
  // add_groups(group_end e)
  func_add_groups, 2, var_2644_10_group_end, var_2635_14_e, 1, LOCAL(1),
  //  add_groups(group_end e)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(2671, 28),
  POS(2671, 27)
};

static FUNCTION_INFO i_lambda_333 = {
  t_lambda_333, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_334[] = {
  1, // locals
  0, // parameters
  // is_defined &group_end -> e
  var_is_defined, 1, var_2668_24_current_indent, 1, LOCAL(1),
  // update_if current_indent.is_defined &group_end -> e
  var_update_if, 3, LOCAL(1), var_2644_10_group_end, lambda_335, 1, var_2644_10_group_end,
  // reduce_minimum_indent_and_next current_indent
  func_reduce_minimum_indent_and_next, 1, var_2668_24_current_indent, TAIL_CALL,
  POS(2673, 52),
  POS(2673, 27),
  POS(2674, 27)
};

static FUNCTION_INFO i_lambda_334 = {
  t_lambda_334, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_335[] = {
  0, // locals
  0, // parameters
  //  e
  LET, 1, var_2635_14_e, TAIL_CALL,
  POS(2673, 76)
};

static FUNCTION_INFO i_lambda_335 = {
  t_lambda_335, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_336[] = {
  0, // locals
  0, // parameters
  //  groups
  LET, 1, var_2641_10_groups, TAIL_CALL,
  POS(2675, 17)
};

static FUNCTION_INFO i_lambda_336 = {
  t_lambda_336, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_add_groups[] = {
  1, // locals
  2, // parameters
  var_2677_23_last,
  var_2677_28_curr_idx,
  // keep_empty_lines && curr_idx > last+1:
  var_std__and, 2, var_2616_5_keep_empty_lines, lambda_337, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_338, func_add, TAIL_CALL,
  POS(2679, 13),
  POS(2678, 11)
};

static FUNCTION_INFO i_func_add_groups = {
  t_func_add_groups, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_337[] = {
  2, // locals
  0, // parameters
  // last+1:
  var_std__plus, 2, var_2677_23_last, num_1, 1, LOCAL(1),
  // last+1:
  var_std__less, 2, LOCAL(1), var_2677_28_curr_idx, 1, LOCAL(2),
  // curr_idx > last+1:
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2679, 44),
  POS(2679, 44),
  POS(2679, 33)
};

static FUNCTION_INFO i_lambda_337 = {
  t_lambda_337, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_338[] = {
  4, // locals
  0, // parameters
  // add !groups
  func_add, 0, 1, var_2641_10_groups,
  // list(undefined) curr_idx-last-1)
  var_list, 1, var_undefined, 1, LOCAL(1),
  // curr_idx-last-1)
  var_std__minus, 2, var_2677_28_curr_idx, var_2677_23_last, 1, LOCAL(2),
  // curr_idx-last-1)
  var_std__minus, 2, LOCAL(2), num_1, 1, LOCAL(3),
  // dup(list(undefined) curr_idx-last-1)
  var_dup, 2, LOCAL(1), LOCAL(3), 1, LOCAL(4),
  // append groups dup(list(undefined) curr_idx-last-1)
  var_append, 2, var_2641_10_groups, LOCAL(4), TAIL_CALL,
  POS(2680, 15),
  POS(2681, 33),
  POS(2681, 49),
  POS(2681, 49),
  POS(2681, 29),
  POS(2681, 15)
};

static FUNCTION_INFO i_lambda_338 = {
  t_lambda_338, NULL, 6, 0,
  {}
};

static TAB_NUM t_func_add[] = {
  1, // locals
  0, // parameters
  // group_start == last
  var_std__equal, 2, var_2643_10_group_start, var_2677_23_last, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_339, lambda_340, TAIL_CALL,
  POS(2686, 15),
  POS(2685, 13)
};

static FUNCTION_INFO i_func_add = {
  t_func_add, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_339[] = {
  2, // locals
  0, // parameters
  // lines(group_start))
  var_2615_5_lines, 1, var_2643_10_group_start, 1, LOCAL(1),
  // push(groups lines(group_start))
  var_push, 2, var_2641_10_groups, LOCAL(1), 1, LOCAL(2),
  //  push(groups lines(group_start))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2687, 30),
  POS(2687, 18),
  POS(2687, 17)
};

static FUNCTION_INFO i_lambda_339 = {
  t_lambda_339, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_340[] = {
  1, // locals
  0, // parameters
  // minimum_indent == VERY_LARGE_INDENT
  var_std__equal, 2, var_2642_10_minimum_indent, num_9999, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_341, lambda_342, TAIL_CALL,
  POS(2690, 19),
  POS(2689, 17)
};

static FUNCTION_INFO i_lambda_340 = {
  t_lambda_340, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_341[] = {
  2, // locals
  0, // parameters
  // range(lines group_start last))
  var_range, 3, var_2615_5_lines, var_2643_10_group_start, var_2677_23_last, 1, LOCAL(1),
  // append(groups range(lines group_start last))
  var_append, 2, var_2641_10_groups, LOCAL(1), 1, LOCAL(2),
  //  append(groups range(lines group_start last))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2691, 36),
  POS(2691, 22),
  POS(2691, 21)
};

static FUNCTION_INFO i_lambda_341 = {
  t_lambda_341, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_342[] = {
  3, // locals
  0, // parameters
  // $head lines(group_start)
  var_2615_5_lines, 1, var_2643_10_group_start, 1, LOCAL(2),
  // group_start+1 last)
  var_std__plus, 2, var_2643_10_group_start, num_1, 1, LOCAL(1),
  // $subgroups range(lines group_start+1 last)
  var_range, 3, var_2615_5_lines, LOCAL(1), var_2677_23_last, 1, LOCAL(3),
  // .subgroups_of subgroups)
  LET, -1, LOCAL(2), var_subgroups_of, LOCAL(3), LOCAL(1),
  // push groups head(.subgroups_of subgroups)
  var_push, 2, var_2641_10_groups, LOCAL(1), TAIL_CALL,
  POS(2693, 21),
  POS(2694, 44),
  POS(2694, 21),
  POS(2695, 38),
  POS(2695, 21),
  LOCAL(2),
  LOCAL(3)
};

static FUNCTION_INFO i_lambda_342 = {
  t_lambda_342, NULL, 5, 2,
  {"2693_22_head\000", "2694_22_subgroups\000"}
};

static TAB_NUM t_func_reduce_minimum_indent_and_next[] = {
  2, // locals
  1, // parameters
  var_2697_43_current_indent,
  // is_defined && current_indent < minimum_indent:
  var_is_defined, 1, var_2697_43_current_indent, 1, LOCAL(1),
  // is_defined && current_indent < minimum_indent:
  var_std__and, 2, LOCAL(1), lambda_343, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_344, var_next, TAIL_CALL,
  POS(2699, 28),
  POS(2699, 28),
  POS(2698, 11)
};

static FUNCTION_INFO i_func_reduce_minimum_indent_and_next = {
  t_func_reduce_minimum_indent_and_next, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_343[] = {
  1, // locals
  0, // parameters
  // current_indent < minimum_indent:
  var_std__less, 2, var_2697_43_current_indent, var_2642_10_minimum_indent, 1, LOCAL(1),
  // current_indent < minimum_indent:
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(2699, 42),
  POS(2699, 42)
};

static FUNCTION_INFO i_lambda_343 = {
  t_lambda_343, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_344[] = {
  0, // locals
  0, // parameters
  // !minimum_indent current_indent
  LET, 1, var_2697_43_current_indent, 1, var_2642_10_minimum_indent,
  // next
  var_next, 0, TAIL_CALL,
  POS(2700, 15),
  POS(2701, 15)
};

static FUNCTION_INFO i_lambda_344 = {
  t_lambda_344, NULL, 2, 0,
  {}
};

static TAB_NUM t_func_start_new_fragment_and_next[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 2704_40_i
  // !minimum_indent VERY_LARGE_INDENT
  LET, 1, num_9999, 1, var_2642_10_minimum_indent,
  // !group_start i
  LET, 1, LOCAL(1), 1, var_2643_10_group_start,
  // !group_end i
  LET, 1, LOCAL(1), 1, var_2644_10_group_end,
  // next
  var_next, 0, TAIL_CALL,
  POS(2705, 11),
  POS(2706, 11),
  POS(2707, 11),
  POS(2708, 11),
  LOCAL(1)
};

static FUNCTION_INFO i_func_start_new_fragment_and_next = {
  t_func_start_new_fragment_and_next, NULL, 4, 1,
  {"2704_40_i\000"}
};

static TAB_NUM t_func_std__wrap_words[] = {
  1, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_2737_5_text,
  MANDATORY_PARAMETER, var_2738_5_width,
  var_false, LOCAL(1),
  // $lines empty_list
  LET, 1, var_empty_list, 1, var_2741_4_lines,
  // $n length_of(text)
  var_length_of, 1, var_2737_5_text, 1, var_2742_4_n,
  // $s 1 # start of line
  LET, 1, num_1, 1, var_2743_4_s,
  // $b undefined # possible break position
  LET, 1, var_undefined, 1, var_2744_4_b,
  // $i 0
  LET, 1, num_0, 1, var_2745_4_i,
  // loop:
  var_loop, 1, lambda_20_loop, TAIL_CALL,
  POS(2741, 3),
  POS(2742, 3),
  POS(2743, 3),
  POS(2744, 3),
  POS(2745, 3),
  POS(2746, 3)
};

static FUNCTION_INFO i_func_std__wrap_words = {
  t_func_std__wrap_words, NULL, 6, 0,
  {}
};

static TAB_NUM t_lambda_20_loop[] = {
  1, // locals
  0, // parameters
  // inc &i
  var_inc, 1, var_2745_4_i, 1, var_2745_4_i,
  // n:
  var_std__less, 2, var_2742_4_n, var_2745_4_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_345, lambda_348, TAIL_CALL,
  POS(2747, 5),
  POS(2749, 11),
  POS(2748, 5)
};

static FUNCTION_INFO i_lambda_20_loop = {
  t_lambda_20_loop, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_345[] = {
  1, // locals
  0, // parameters
  // n
  var_std__less, 2, var_2742_4_n, var_2743_4_s, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_346, lambda_347, TAIL_CALL,
  POS(2751, 15),
  POS(2750, 9)
};

static FUNCTION_INFO i_lambda_345 = {
  t_lambda_345, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_346[] = {
  0, // locals
  0, // parameters
  //  lines
  LET, 1, var_2741_4_lines, TAIL_CALL,
  POS(2752, 13)
};

static FUNCTION_INFO i_lambda_346 = {
  t_lambda_346, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_347[] = {
  2, // locals
  0, // parameters
  // range(text s n))
  var_range, 3, var_2737_5_text, var_2743_4_s, var_2742_4_n, 1, LOCAL(1),
  // push(lines range(text s n))
  var_push, 2, var_2741_4_lines, LOCAL(1), 1, LOCAL(2),
  //  push(lines range(text s n))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2753, 25),
  POS(2753, 14),
  POS(2753, 13)
};

static FUNCTION_INFO i_lambda_347 = {
  t_lambda_347, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_348[] = {
  0, // locals
  0, // parameters
  // $chr text(i)
  var_2737_5_text, 1, var_2745_4_i, 1, var_2755_10_chr,
  // case chr
  var_case, 4, var_2755_10_chr, chr_10, lambda_nl, lambda_349, TAIL_CALL,
  POS(2755, 9),
  POS(2756, 9)
};

static FUNCTION_INFO i_lambda_348 = {
  t_lambda_348, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_nl[] = {
  2, // locals
  0, // parameters
  // i-1)
  var_std__minus, 2, var_2745_4_i, num_1, 1, LOCAL(1),
  // range(text s i-1)
  var_range, 3, var_2737_5_text, var_2743_4_s, LOCAL(1), 1, LOCAL(2),
  // push &lines range(text s i-1)
  var_push, 2, var_2741_4_lines, LOCAL(2), 1, var_2741_4_lines,
  // !s i+1
  var_std__plus, 2, var_2745_4_i, num_1, 1, var_2743_4_s,
  // !b undefined
  LET, 1, var_undefined, 1, var_2744_4_b,
  // next
  var_next, 0, TAIL_CALL,
  POS(2758, 38),
  POS(2758, 25),
  POS(2758, 13),
  POS(2759, 13),
  POS(2760, 13),
  POS(2761, 13)
};

static FUNCTION_INFO i_lambda_nl = {
  t_lambda_nl, NULL, 6, 0,
  {}
};

static TAB_NUM t_lambda_349[] = {
  1, // locals
  0, // parameters
  // chr == ' ':
  var_std__equal, 2, var_2755_10_chr, chr_32, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_350, lambda_353, TAIL_CALL,
  POS(2764, 15),
  POS(2763, 13)
};

static FUNCTION_INFO i_lambda_349 = {
  t_lambda_349, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_350[] = {
  2, // locals
  0, // parameters
  // i-s == width: # break
  var_std__minus, 2, var_2745_4_i, var_2743_4_s, 1, LOCAL(1),
  // i-s == width: # break
  var_std__equal, 2, LOCAL(1), var_2738_5_width, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_351, lambda_352, TAIL_CALL,
  POS(2766, 19),
  POS(2766, 19),
  POS(2765, 17)
};

static FUNCTION_INFO i_lambda_350 = {
  t_lambda_350, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_351[] = {
  2, // locals
  0, // parameters
  // i-1)
  var_std__minus, 2, var_2745_4_i, num_1, 1, LOCAL(1),
  // range(text s i-1)
  var_range, 3, var_2737_5_text, var_2743_4_s, LOCAL(1), 1, LOCAL(2),
  // push &lines range(text s i-1)
  var_push, 2, var_2741_4_lines, LOCAL(2), 1, var_2741_4_lines,
  // !s i+1
  var_std__plus, 2, var_2745_4_i, num_1, 1, var_2743_4_s,
  // !b undefined
  LET, 1, var_undefined, 1, var_2744_4_b,
  // next
  var_next, 0, TAIL_CALL,
  POS(2767, 46),
  POS(2767, 33),
  POS(2767, 21),
  POS(2768, 21),
  POS(2769, 21),
  POS(2770, 21)
};

static FUNCTION_INFO i_lambda_351 = {
  t_lambda_351, NULL, 6, 0,
  {}
};

static TAB_NUM t_lambda_352[] = {
  0, // locals
  0, // parameters
  // !b i
  LET, 1, var_2745_4_i, 1, var_2744_4_b,
  // next
  var_next, 0, TAIL_CALL,
  POS(2772, 21),
  POS(2773, 21)
};

static FUNCTION_INFO i_lambda_352 = {
  t_lambda_352, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_353[] = {
  2, // locals
  0, // parameters
  // i-s < width
  var_std__minus, 2, var_2745_4_i, var_2743_4_s, 1, LOCAL(1),
  // i-s < width
  var_std__less, 2, LOCAL(1), var_2738_5_width, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), var_next, lambda_354, TAIL_CALL,
  POS(2776, 19),
  POS(2776, 19),
  POS(2775, 17)
};

static FUNCTION_INFO i_lambda_353 = {
  t_lambda_353, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_354[] = {
  1, // locals
  0, // parameters
  // is_defined: # wrap
  var_is_defined, 1, var_2744_4_b, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_b_is_defined, lambda_355, TAIL_CALL,
  POS(2780, 25),
  POS(2779, 21)
};

static FUNCTION_INFO i_lambda_354 = {
  t_lambda_354, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_b_is_defined[] = {
  2, // locals
  0, // parameters
  // b-1)
  var_std__minus, 2, var_2744_4_b, num_1, 1, LOCAL(1),
  // range(text s b-1)
  var_range, 3, var_2737_5_text, var_2743_4_s, LOCAL(1), 1, LOCAL(2),
  // push &lines range(text s b-1)
  var_push, 2, var_2741_4_lines, LOCAL(2), 1, var_2741_4_lines,
  // !s b+1
  var_std__plus, 2, var_2744_4_b, num_1, 1, var_2743_4_s,
  // !b undefined
  LET, 1, var_undefined, 1, var_2744_4_b,
  // next
  var_next, 0, TAIL_CALL,
  POS(2781, 50),
  POS(2781, 37),
  POS(2781, 25),
  POS(2782, 25),
  POS(2783, 25),
  POS(2784, 25)
};

static FUNCTION_INFO i_lambda_b_is_defined = {
  t_lambda_b_is_defined, NULL, 6, 0,
  {}
};

static TAB_NUM t_lambda_355[] = {
  2, // locals
  0, // parameters
  // i-1)
  var_std__minus, 2, var_2745_4_i, num_1, 1, LOCAL(1),
  // range(text s i-1)
  var_range, 3, var_2737_5_text, var_2743_4_s, LOCAL(1), 1, LOCAL(2),
  // push &lines range(text s i-1)
  var_push, 2, var_2741_4_lines, LOCAL(2), 1, var_2741_4_lines,
  // !s i
  LET, 1, var_2745_4_i, 1, var_2743_4_s,
  // next
  var_next, 0, TAIL_CALL,
  POS(2786, 50),
  POS(2786, 37),
  POS(2786, 25),
  POS(2787, 25),
  POS(2788, 25)
};

static FUNCTION_INFO i_lambda_355 = {
  t_lambda_355, NULL, 5, 0,
  {}
};

static TAB_NUM t_func_std_types__string___serialize[] = {
  0, // locals
  -2, // parameters
  MANDATORY_PARAMETER, var_2808_5_self,
  var_undefined, var_2809_5_indent,
  // $str "@quot;"
  LET, 1, string_10, 1, var_2811_4_str,
  // $s 1
  LET, 1, num_1, 1, var_2812_4_s,
  // for_each self
  var_for_each, 3, var_2808_5_self, lambda_356, lambda_361, TAIL_CALL,
  POS(2811, 3),
  POS(2812, 3),
  POS(2813, 3)
};

static FUNCTION_INFO i_func_std_types__string___serialize = {
  t_func_std_types__string___serialize, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_356[] = {
  2, // locals
  2, // parameters
  var_2814_8_idx,
  var_2814_12_chr,
  // chr < '@0x20;' || chr > '@0x7e;' || chr == '"' || chr == '@@':
  var_std__less, 2, var_2814_12_chr, chr_32, 1, LOCAL(1),
  // chr < '@0x20;' || chr > '@0x7e;' || chr == '"' || chr == '@@':
  var_std__or, 2, LOCAL(1), lambda_357, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_360, var_next, TAIL_CALL,
  POS(2816, 9),
  POS(2816, 9),
  POS(2815, 7)
};

static FUNCTION_INFO i_lambda_356 = {
  t_lambda_356, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_357[] = {
  2, // locals
  0, // parameters
  // 0x7e;' || chr == '"' || chr == '@@':
  var_std__less, 2, chr_126, var_2814_12_chr, 1, LOCAL(1),
  // 0x7e;' || chr == '"' || chr == '@@':
  var_std__or, 2, LOCAL(1), lambda_358, 1, LOCAL(2),
  // chr > '@0x7e;' || chr == '"' || chr == '@@':
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2816, 35),
  POS(2816, 35),
  POS(2816, 27)
};

static FUNCTION_INFO i_lambda_357 = {
  t_lambda_357, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_358[] = {
  2, // locals
  0, // parameters
  // chr == '"' || chr == '@@':
  var_std__equal, 2, var_2814_12_chr, chr_34, 1, LOCAL(1),
  // chr == '"' || chr == '@@':
  var_std__or, 2, LOCAL(1), lambda_359, 1, LOCAL(2),
  // chr == '"' || chr == '@@':
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2816, 45),
  POS(2816, 45),
  POS(2816, 45)
};

static FUNCTION_INFO i_lambda_358 = {
  t_lambda_358, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_359[] = {
  1, // locals
  0, // parameters
  // chr == '@@':
  var_std__equal, 2, var_2814_12_chr, chr_64, 1, LOCAL(1),
  // chr == '@@':
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(2816, 59),
  POS(2816, 59)
};

static FUNCTION_INFO i_lambda_359 = {
  t_lambda_359, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_360[] = {
  2, // locals
  0, // parameters
  // idx-1)
  var_std__minus, 2, var_2814_8_idx, num_1, 1, LOCAL(1),
  // range(self s idx-1)
  var_range, 3, var_2808_5_self, var_2812_4_s, LOCAL(1), 1, LOCAL(2),
  // append &str range(self s idx-1)
  var_append, 2, var_2811_4_str, LOCAL(2), 1, var_2811_4_str,
  // to_integer);"
  var_to_integer, 1, var_2814_12_chr, 1, LOCAL(1),
  // "@@@(chr.to_integer);"
  var_std__string, 3, string_11, LOCAL(1), string_12, 1, LOCAL(2),
  // append &str "@@@(chr.to_integer);"
  var_append, 2, var_2811_4_str, LOCAL(2), 1, var_2811_4_str,
  // !s idx+1
  var_std__plus, 2, var_2814_8_idx, num_1, 1, var_2812_4_s,
  // next
  var_next, 0, TAIL_CALL,
  POS(2817, 36),
  POS(2817, 23),
  POS(2817, 11),
  POS(2818, 32),
  POS(2818, 23),
  POS(2818, 11),
  POS(2819, 11),
  POS(2820, 11)
};

static FUNCTION_INFO i_lambda_360 = {
  t_lambda_360, NULL, 8, 0,
  {}
};

static TAB_NUM t_lambda_361[] = {
  1, // locals
  0, // parameters
  // range(self s -1)
  var_range, 3, var_2808_5_self, var_2812_4_s, minus_num_1, 1, LOCAL(1),
  // append &str range(self s -1)
  var_append, 2, var_2811_4_str, LOCAL(1), 1, var_2811_4_str,
  // append &str "@quot;@nl;"
  var_append, 2, var_2811_4_str, string_13, 1, var_2811_4_str,
  // is_defined
  var_is_defined, 1, var_2809_5_indent, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_362, lambda_363, TAIL_CALL,
  POS(2823, 19),
  POS(2823, 7),
  POS(2824, 7),
  POS(2826, 16),
  POS(2825, 7)
};

static FUNCTION_INFO i_lambda_361 = {
  t_lambda_361, NULL, 5, 0,
  {}
};

static TAB_NUM t_lambda_362[] = {
  2, // locals
  0, // parameters
  // tabs_and_spaces(indent) str)
  var_tabs_and_spaces, 1, var_2809_5_indent, 1, LOCAL(1),
  // append(tabs_and_spaces(indent) str)
  var_append, 2, LOCAL(1), var_2811_4_str, 1, LOCAL(2),
  //  append(tabs_and_spaces(indent) str)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2827, 19),
  POS(2827, 12),
  POS(2827, 11)
};

static FUNCTION_INFO i_lambda_362 = {
  t_lambda_362, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_363[] = {
  0, // locals
  0, // parameters
  //  str
  LET, 1, var_2811_4_str, TAIL_CALL,
  POS(2828, 11)
};

static FUNCTION_INFO i_lambda_363 = {
  t_lambda_363, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_std_types__octet_string___to_uint8_array[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 2844_5_self
  // length_of(self))
  var_length_of, 1, LOCAL(2), 1, LOCAL(1),
  // $arr uint8_array(length_of(self))
  var_uint8_array, 1, LOCAL(1), 1, var_2846_4_arr,
  // for_each self
  var_for_each, 3, LOCAL(2), lambda_364, lambda_365, TAIL_CALL,
  POS(2846, 20),
  POS(2846, 3),
  POS(2847, 3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_std_types__octet_string___to_uint8_array = {
  t_func_std_types__octet_string___to_uint8_array, NULL, 3, 1,
  {"2844_5_self\000"}
};

static TAB_NUM t_lambda_364[] = {
  4, // locals
  2, // parameters
  LOCAL(3), // 2848_8_idx
  LOCAL(4), // 2848_12_chr
  // !arr(idx) chr.to_integer
  var_to_integer, 1, LOCAL(4), 1, LOCAL(2),
  // arr(idx) chr.to_integer
  var_2846_4_arr, 2, LOCAL(3), LOCAL(2), 1, var_2846_4_arr,
  // next
  var_next, 0, TAIL_CALL,
  POS(2849, 7),
  POS(2849, 8),
  POS(2850, 7),
  LOCAL(4),
  LOCAL(3)
};

static FUNCTION_INFO i_lambda_364 = {
  t_lambda_364, NULL, 3, 2,
  {"2848_12_chr\000", "2848_8_idx\000"}
};

static TAB_NUM t_lambda_365[] = {
  0, // locals
  0, // parameters
  //  arr
  LET, 1, var_2846_4_arr, TAIL_CALL,
  POS(2851, 7)
};

static FUNCTION_INFO i_lambda_365 = {
  t_lambda_365, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_std__indented[] = {
  0, // locals
  2, // parameters
  var_2883_5_indent,
  var_2884_5_text,
  // $indented_text ""
  LET, 1, string_1, 1, var_2886_4_indented_text,
  // $new_indent undefined
  LET, 1, var_undefined, 1, var_2887_4_new_indent,
  // $i 1
  LET, 1, num_1, 1, var_2888_4_i,
  // $n length_of(text)
  var_length_of, 1, var_2884_5_text, 1, var_2889_4_n,
  // loop:
  var_loop, 1, lambda_21_loop, TAIL_CALL,
  POS(2886, 3),
  POS(2887, 3),
  POS(2888, 3),
  POS(2889, 3),
  POS(2890, 3)
};

static FUNCTION_INFO i_func_std__indented = {
  t_func_std__indented, NULL, 5, 0,
  {}
};

static TAB_NUM t_lambda_21_loop[] = {
  2, // locals
  0, // parameters
  // !new_indent indent
  LET, 1, var_2883_5_indent, 1, var_2887_4_new_indent,
  // skip_indent !i !new_indent
  func_skip_indent, 0, 2, var_2888_4_i, var_2887_4_new_indent,
  // n:
  var_std__less, 2, var_2889_4_n, var_2888_4_i, 1, LOCAL(1),
  // n:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_366, lambda_374, TAIL_CALL,
  POS(2891, 5),
  POS(2892, 5),
  POS(2894, 12),
  POS(2894, 12),
  POS(2893, 5)
};

static FUNCTION_INFO i_lambda_21_loop = {
  t_lambda_21_loop, NULL, 5, 0,
  {}
};

static TAB_NUM t_lambda_366[] = {
  2, // locals
  0, // parameters
  // text(i) == '@nl;':
  var_2884_5_text, 1, var_2888_4_i, 1, LOCAL(1),
  // text(i) == '@nl;':
  var_std__equal, 2, LOCAL(1), chr_10, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_367, lambda_368, TAIL_CALL,
  POS(2896, 11),
  POS(2896, 11),
  POS(2895, 9)
};

static FUNCTION_INFO i_lambda_366 = {
  t_lambda_366, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_367[] = {
  0, // locals
  0, // parameters
  // push &indented_text '@nl;'
  var_push, 2, var_2886_4_indented_text, chr_10, 1, var_2886_4_indented_text,
  // !i i+1
  var_std__plus, 2, var_2888_4_i, num_1, 1, var_2888_4_i,
  // next
  var_next, 0, TAIL_CALL,
  POS(2897, 13),
  POS(2898, 13),
  POS(2899, 13)
};

static FUNCTION_INFO i_lambda_367 = {
  t_lambda_367, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_368[] = {
  1, // locals
  0, // parameters
  // tabs_and_spaces(new_indent)
  var_tabs_and_spaces, 1, var_2887_4_new_indent, 1, LOCAL(1),
  // append &indented_text tabs_and_spaces(new_indent)
  var_append, 2, var_2886_4_indented_text, LOCAL(1), 1, var_2886_4_indented_text,
  // $s i
  LET, 1, var_2888_4_i, 1, var_2902_14_s,
  // loop
  var_loop, 2, lambda_369, var_next, TAIL_CALL,
  POS(2901, 35),
  POS(2901, 13),
  POS(2902, 13),
  POS(2903, 13)
};

static FUNCTION_INFO i_lambda_368 = {
  t_lambda_368, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_369[] = {
  2, // locals
  0, // parameters
  // text(i) == '@nl;':
  var_2884_5_text, 1, var_2888_4_i, 1, LOCAL(1),
  // text(i) == '@nl;':
  var_std__equal, 2, LOCAL(1), chr_10, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_370, lambda_371, TAIL_CALL,
  POS(2906, 19),
  POS(2906, 19),
  POS(2905, 17)
};

static FUNCTION_INFO i_lambda_369 = {
  t_lambda_369, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_370[] = {
  1, // locals
  0, // parameters
  // range(text s i)
  var_range, 3, var_2884_5_text, var_2902_14_s, var_2888_4_i, 1, LOCAL(1),
  // append &indented_text range(text s i)
  var_append, 2, var_2886_4_indented_text, LOCAL(1), 1, var_2886_4_indented_text,
  // !i i+1
  var_std__plus, 2, var_2888_4_i, num_1, 1, var_2888_4_i,
  // break
  var_break, 0, TAIL_CALL,
  POS(2907, 43),
  POS(2907, 21),
  POS(2908, 21),
  POS(2909, 21)
};

static FUNCTION_INFO i_lambda_370 = {
  t_lambda_370, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_371[] = {
  1, // locals
  0, // parameters
  // i < n:
  var_std__less, 2, var_2888_4_i, var_2889_4_n, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_372, lambda_373, TAIL_CALL,
  POS(2912, 23),
  POS(2911, 21)
};

static FUNCTION_INFO i_lambda_371 = {
  t_lambda_371, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_372[] = {
  0, // locals
  0, // parameters
  // !i i+1
  var_std__plus, 2, var_2888_4_i, num_1, 1, var_2888_4_i,
  // next
  var_next, 0, TAIL_CALL,
  POS(2913, 25),
  POS(2914, 25)
};

static FUNCTION_INFO i_lambda_372 = {
  t_lambda_372, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_373[] = {
  1, // locals
  0, // parameters
  // range(text s -1)
  var_range, 3, var_2884_5_text, var_2902_14_s, minus_num_1, 1, LOCAL(1),
  // append indented_text range(text s -1)
  var_append, 2, var_2886_4_indented_text, LOCAL(1), TAIL_CALL,
  POS(2916, 46),
  POS(2916, 25)
};

static FUNCTION_INFO i_lambda_373 = {
  t_lambda_373, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_374[] = {
  0, // locals
  0, // parameters
  //  indented_text
  LET, 1, var_2886_4_indented_text, TAIL_CALL,
  POS(2919, 9)
};

static FUNCTION_INFO i_lambda_374 = {
  t_lambda_374, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_skip_indent[] = {
  2, // locals
  0, // parameters
  // n:
  var_std__less, 2, var_2889_4_n, var_2888_4_i, 1, LOCAL(1),
  // n:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_375, lambda_377, TAIL_CALL,
  POS(2923, 12),
  POS(2923, 12),
  POS(2922, 5)
};

static FUNCTION_INFO i_func_skip_indent = {
  t_func_skip_indent, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_375[] = {
  2, // locals
  0, // parameters
  // text(i) == '@ht;':
  var_2884_5_text, 1, var_2888_4_i, 1, LOCAL(1),
  // text(i) == '@ht;':
  var_std__equal, 2, LOCAL(1), chr_9, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_376, func_skip_spaces, TAIL_CALL,
  POS(2925, 11),
  POS(2925, 11),
  POS(2924, 9)
};

static FUNCTION_INFO i_lambda_375 = {
  t_lambda_375, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_376[] = {
  0, // locals
  0, // parameters
  // !i i+1
  var_std__plus, 2, var_2888_4_i, num_1, 1, var_2888_4_i,
  // !new_indent new_indent+8
  var_std__plus, 2, var_2887_4_new_indent, num_8, 1, var_2887_4_new_indent,
  // skip_indent
  func_skip_indent, 0, TAIL_CALL,
  POS(2926, 13),
  POS(2927, 13),
  POS(2928, 13)
};

static FUNCTION_INFO i_lambda_376 = {
  t_lambda_376, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_377[] = {
  0, // locals
  0, // parameters
  //  i new_indent
  LET, 2, var_2888_4_i, var_2887_4_new_indent, TAIL_CALL,
  POS(2930, 9)
};

static FUNCTION_INFO i_lambda_377 = {
  t_lambda_377, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_skip_spaces[] = {
  3, // locals
  0, // parameters
  // n && text(i) == ' ':
  var_std__less, 2, var_2889_4_n, var_2888_4_i, 1, LOCAL(1),
  // n && text(i) == ' ':
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // n && text(i) == ' ':
  var_std__and, 2, LOCAL(2), lambda_378, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_379, lambda_380, TAIL_CALL,
  POS(2934, 12),
  POS(2934, 12),
  POS(2934, 12),
  POS(2933, 5)
};

static FUNCTION_INFO i_func_skip_spaces = {
  t_func_skip_spaces, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_378[] = {
  2, // locals
  0, // parameters
  // text(i) == ' ':
  var_2884_5_text, 1, var_2888_4_i, 1, LOCAL(1),
  // text(i) == ' ':
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // text(i) == ' ':
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2934, 17),
  POS(2934, 17),
  POS(2934, 17)
};

static FUNCTION_INFO i_lambda_378 = {
  t_lambda_378, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_379[] = {
  0, // locals
  0, // parameters
  // !i i+1
  var_std__plus, 2, var_2888_4_i, num_1, 1, var_2888_4_i,
  // !new_indent new_indent+1
  var_std__plus, 2, var_2887_4_new_indent, num_1, 1, var_2887_4_new_indent,
  // skip_spaces
  func_skip_spaces, 0, TAIL_CALL,
  POS(2935, 9),
  POS(2936, 9),
  POS(2937, 9)
};

static FUNCTION_INFO i_lambda_379 = {
  t_lambda_379, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_380[] = {
  0, // locals
  0, // parameters
  //  i new_indent
  LET, 2, var_2888_4_i, var_2887_4_new_indent, TAIL_CALL,
  POS(2938, 9)
};

static FUNCTION_INFO i_lambda_380 = {
  t_lambda_380, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_std__format[] = {
  0, // locals
  -2, // parameters
  MANDATORY_PARAMETER, var_2973_5_template,
  REST_PARAMETER, var_2974_5_arguments,
  // $output ""
  LET, 1, string_1, 1, var_2976_4_output,
  // $arg_idx 1
  LET, 1, num_1, 1, var_2977_4_arg_idx,
  // $i 1
  LET, 1, num_1, 1, var_2978_4_i,
  // $n length_of(template)
  var_length_of, 1, var_2973_5_template, 1, var_2979_4_n,
  // loop:
  var_loop, 1, lambda_22_loop, TAIL_CALL,
  POS(2976, 3),
  POS(2977, 3),
  POS(2978, 3),
  POS(2979, 3),
  POS(2980, 3)
};

static FUNCTION_INFO i_func_std__format = {
  t_func_std__format, NULL, 5, 0,
  {}
};

static TAB_NUM t_lambda_22_loop[] = {
  1, // locals
  0, // parameters
  // n
  var_std__less, 2, var_2979_4_n, var_2978_4_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_381, lambda_382, TAIL_CALL,
  POS(2982, 11),
  POS(2981, 5)
};

static FUNCTION_INFO i_lambda_22_loop = {
  t_lambda_22_loop, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_381[] = {
  0, // locals
  0, // parameters
  //  output
  LET, 1, var_2976_4_output, TAIL_CALL,
  POS(2983, 9)
};

static FUNCTION_INFO i_lambda_381 = {
  t_lambda_381, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_382[] = {
  0, // locals
  0, // parameters
  // $chr template(i)
  var_2973_5_template, 1, var_2978_4_i, 1, var_2985_10_chr,
  // !i i+1
  var_std__plus, 2, var_2978_4_i, num_1, 1, var_2978_4_i,
  // case chr
  var_case, 6, var_2985_10_chr, chr_37, lambda_383, chr_92, lambda_410, lambda_413, TAIL_CALL,
  POS(2985, 9),
  POS(2986, 9),
  POS(2987, 9)
};

static FUNCTION_INFO i_lambda_382 = {
  t_lambda_382, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_383[] = {
  1, // locals
  0, // parameters
  // n
  var_std__less, 2, var_2979_4_n, var_2978_4_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_384, lambda_385, TAIL_CALL,
  POS(2990, 19),
  POS(2989, 13)
};

static FUNCTION_INFO i_lambda_383 = {
  t_lambda_383, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_384[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(2991, 17)
};

static FUNCTION_INFO i_lambda_384 = {
  t_lambda_384, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_385[] = {
  2, // locals
  0, // parameters
  // template(i) $alignment !i
  var_2973_5_template, 1, var_2978_4_i, 1, LOCAL(1),
  // case template(i) $alignment !i
  var_case, 10, LOCAL(1), chr_48, lambda_386, chr_108, lambda_l, chr_114, lambda_r, chr_99, lambda_c, lambda_387, 2, var_2993_35_alignment, var_2978_4_i,
  // $len_chr template(i)
  var_2973_5_template, 1, var_2978_4_i, 1, var_2999_18_len_chr,
  // len_chr < '0' || len_chr > '9'
  var_std__less, 2, var_2999_18_len_chr, chr_48, 1, LOCAL(1),
  // len_chr < '0' || len_chr > '9'
  var_std__or, 2, LOCAL(1), lambda_388, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_389, lambda_390, TAIL_CALL,
  POS(2993, 22),
  POS(2993, 17),
  POS(2999, 17),
  POS(3001, 19),
  POS(3001, 19),
  POS(3000, 17)
};

static FUNCTION_INFO i_lambda_385 = {
  t_lambda_385, NULL, 6, 0,
  {}
};

static TAB_NUM t_lambda_386[] = {
  1, // locals
  0, // parameters
  // i+1
  var_std__plus, 2, var_2978_4_i, num_1, 1, LOCAL(1),
  //  ZEROS i+1
  LET, 2, uni_ZEROS, LOCAL(1), TAIL_CALL,
  POS(2994, 32),
  POS(2994, 25)
};

static FUNCTION_INFO i_lambda_386 = {
  t_lambda_386, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_l[] = {
  1, // locals
  0, // parameters
  // i+1
  var_std__plus, 2, var_2978_4_i, num_1, 1, LOCAL(1),
  //  LEFT i+1
  LET, 2, uni_LEFT, LOCAL(1), TAIL_CALL,
  POS(2995, 31),
  POS(2995, 25)
};

static FUNCTION_INFO i_lambda_l = {
  t_lambda_l, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_r[] = {
  1, // locals
  0, // parameters
  // i+1
  var_std__plus, 2, var_2978_4_i, num_1, 1, LOCAL(1),
  //  RIGHT i+1
  LET, 2, uni_RIGHT, LOCAL(1), TAIL_CALL,
  POS(2996, 32),
  POS(2996, 25)
};

static FUNCTION_INFO i_lambda_r = {
  t_lambda_r, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_c[] = {
  1, // locals
  0, // parameters
  // i+1
  var_std__plus, 2, var_2978_4_i, num_1, 1, LOCAL(1),
  //  CENTER i+1
  LET, 2, uni_CENTER, LOCAL(1), TAIL_CALL,
  POS(2997, 33),
  POS(2997, 25)
};

static FUNCTION_INFO i_lambda_c = {
  t_lambda_c, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_387[] = {
  0, // locals
  0, // parameters
  //  RIGHT i
  LET, 2, uni_RIGHT, var_2978_4_i, TAIL_CALL,
  POS(2998, 21)
};

static FUNCTION_INFO i_lambda_387 = {
  t_lambda_387, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_388[] = {
  1, // locals
  0, // parameters
  // 9'
  var_std__less, 2, chr_57, var_2999_18_len_chr, 1, LOCAL(1),
  // len_chr > '9'
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(3001, 47),
  POS(3001, 36)
};

static FUNCTION_INFO i_lambda_388 = {
  t_lambda_388, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_389[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(3002, 21)
};

static FUNCTION_INFO i_lambda_389 = {
  t_lambda_389, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_390[] = {
  0, // locals
  0, // parameters
  // $width len_chr-'0'
  var_std__minus, 2, var_2999_18_len_chr, chr_48, 1, var_3004_22_width,
  // loop
  var_loop, 2, lambda_391, lambda_395, TAIL_CALL,
  POS(3004, 21),
  POS(3005, 21)
};

static FUNCTION_INFO i_lambda_390 = {
  t_lambda_390, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_391[] = {
  1, // locals
  0, // parameters
  // !i i+1
  var_std__plus, 2, var_2978_4_i, num_1, 1, var_2978_4_i,
  // n
  var_std__less, 2, var_2979_4_n, var_2978_4_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), var_break, lambda_392, TAIL_CALL,
  POS(3007, 25),
  POS(3009, 31),
  POS(3008, 25)
};

static FUNCTION_INFO i_lambda_391 = {
  t_lambda_391, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_392[] = {
  2, // locals
  0, // parameters
  // $fmt_chr template(i)
  var_2973_5_template, 1, var_2978_4_i, 1, var_3012_30_fmt_chr,
  // fmt_chr < '0' || fmt_chr > '9'
  var_std__less, 2, var_3012_30_fmt_chr, chr_48, 1, LOCAL(1),
  // fmt_chr < '0' || fmt_chr > '9'
  var_std__or, 2, LOCAL(1), lambda_393, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), var_break, lambda_394, TAIL_CALL,
  POS(3012, 29),
  POS(3014, 31),
  POS(3014, 31),
  POS(3013, 29)
};

static FUNCTION_INFO i_lambda_392 = {
  t_lambda_392, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_393[] = {
  1, // locals
  0, // parameters
  // 9'
  var_std__less, 2, chr_57, var_3012_30_fmt_chr, 1, LOCAL(1),
  // fmt_chr > '9'
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(3014, 59),
  POS(3014, 48)
};

static FUNCTION_INFO i_lambda_393 = {
  t_lambda_393, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_394[] = {
  2, // locals
  0, // parameters
  // 10*width+(fmt_chr-'0')
  var_std__times, 2, num_10, var_3004_22_width, 1, LOCAL(1),
  // fmt_chr-'0')
  var_std__minus, 2, var_3012_30_fmt_chr, chr_48, 1, LOCAL(2),
  // !width 10*width+(fmt_chr-'0')
  var_std__plus, 2, LOCAL(1), LOCAL(2), 1, var_3004_22_width,
  // next
  var_next, 0, TAIL_CALL,
  POS(3017, 40),
  POS(3017, 50),
  POS(3017, 33),
  POS(3018, 33)
};

static FUNCTION_INFO i_lambda_394 = {
  t_lambda_394, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_395[] = {
  1, // locals
  0, // parameters
  // n:
  var_std__less, 2, var_2979_4_n, var_2978_4_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_396, lambda_397, TAIL_CALL,
  POS(3021, 31),
  POS(3020, 25)
};

static FUNCTION_INFO i_lambda_395 = {
  t_lambda_395, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_396[] = {
  0, // locals
  0, // parameters
  // add_argument alignment width
  func_add_argument, 2, var_2993_35_alignment, var_3004_22_width, TAIL_CALL,
  POS(3022, 29)
};

static FUNCTION_INFO i_lambda_396 = {
  t_lambda_396, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_397[] = {
  2, // locals
  0, // parameters
  // template(i) == '.':
  var_2973_5_template, 1, var_2978_4_i, 1, LOCAL(1),
  // template(i) == '.':
  var_std__equal, 2, LOCAL(1), chr_46, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_398, lambda_409, TAIL_CALL,
  POS(3025, 31),
  POS(3025, 31),
  POS(3024, 29)
};

static FUNCTION_INFO i_lambda_397 = {
  t_lambda_397, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_398[] = {
  1, // locals
  0, // parameters
  // !i i+1
  var_std__plus, 2, var_2978_4_i, num_1, 1, var_2978_4_i,
  // n
  var_std__less, 2, var_2979_4_n, var_2978_4_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_399, lambda_400, TAIL_CALL,
  POS(3026, 33),
  POS(3028, 39),
  POS(3027, 33)
};

static FUNCTION_INFO i_lambda_398 = {
  t_lambda_398, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_399[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(3029, 37)
};

static FUNCTION_INFO i_lambda_399 = {
  t_lambda_399, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_400[] = {
  2, // locals
  0, // parameters
  // $dw_chr template(i)
  var_2973_5_template, 1, var_2978_4_i, 1, var_3031_38_dw_chr,
  // dw_chr < '0' || dw_chr > '9'
  var_std__less, 2, var_3031_38_dw_chr, chr_48, 1, LOCAL(1),
  // dw_chr < '0' || dw_chr > '9'
  var_std__or, 2, LOCAL(1), lambda_401, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_402, lambda_403, TAIL_CALL,
  POS(3031, 37),
  POS(3033, 39),
  POS(3033, 39),
  POS(3032, 37)
};

static FUNCTION_INFO i_lambda_400 = {
  t_lambda_400, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_401[] = {
  1, // locals
  0, // parameters
  // 9'
  var_std__less, 2, chr_57, var_3031_38_dw_chr, 1, LOCAL(1),
  // dw_chr > '9'
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(3033, 65),
  POS(3033, 55)
};

static FUNCTION_INFO i_lambda_401 = {
  t_lambda_401, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_402[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(3034, 41)
};

static FUNCTION_INFO i_lambda_402 = {
  t_lambda_402, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_403[] = {
  0, // locals
  0, // parameters
  // $dw dw_chr-'0'
  var_std__minus, 2, var_3031_38_dw_chr, chr_48, 1, var_3036_42_dw,
  // loop
  var_loop, 2, lambda_404, lambda_408, TAIL_CALL,
  POS(3036, 41),
  POS(3037, 41)
};

static FUNCTION_INFO i_lambda_403 = {
  t_lambda_403, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_404[] = {
  1, // locals
  0, // parameters
  // !i i+1
  var_std__plus, 2, var_2978_4_i, num_1, 1, var_2978_4_i,
  // n
  var_std__less, 2, var_2979_4_n, var_2978_4_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), var_break, lambda_405, TAIL_CALL,
  POS(3039, 45),
  POS(3041, 51),
  POS(3040, 45)
};

static FUNCTION_INFO i_lambda_404 = {
  t_lambda_404, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_405[] = {
  2, // locals
  0, // parameters
  // $fmt_chr template(i)
  var_2973_5_template, 1, var_2978_4_i, 1, var_3044_50_fmt_chr,
  // fmt_chr < '0' || fmt_chr > '9'
  var_std__less, 2, var_3044_50_fmt_chr, chr_48, 1, LOCAL(1),
  // fmt_chr < '0' || fmt_chr > '9'
  var_std__or, 2, LOCAL(1), lambda_406, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), var_break, lambda_407, TAIL_CALL,
  POS(3044, 49),
  POS(3046, 51),
  POS(3046, 51),
  POS(3045, 49)
};

static FUNCTION_INFO i_lambda_405 = {
  t_lambda_405, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_406[] = {
  1, // locals
  0, // parameters
  // 9'
  var_std__less, 2, chr_57, var_3044_50_fmt_chr, 1, LOCAL(1),
  // fmt_chr > '9'
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(3046, 79),
  POS(3046, 68)
};

static FUNCTION_INFO i_lambda_406 = {
  t_lambda_406, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_407[] = {
  2, // locals
  0, // parameters
  // 10*dw+(fmt_chr-'0')
  var_std__times, 2, num_10, var_3036_42_dw, 1, LOCAL(1),
  // fmt_chr-'0')
  var_std__minus, 2, var_3044_50_fmt_chr, chr_48, 1, LOCAL(2),
  // !dw 10*dw+(fmt_chr-'0')
  var_std__plus, 2, LOCAL(1), LOCAL(2), 1, var_3036_42_dw,
  // next
  var_next, 0, TAIL_CALL,
  POS(3049, 57),
  POS(3049, 64),
  POS(3049, 53),
  POS(3050, 53)
};

static FUNCTION_INFO i_lambda_407 = {
  t_lambda_407, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_408[] = {
  0, // locals
  0, // parameters
  // add_argument alignment width dw
  func_add_argument, 3, var_2993_35_alignment, var_3004_22_width, var_3036_42_dw, TAIL_CALL,
  POS(3052, 45)
};

static FUNCTION_INFO i_lambda_408 = {
  t_lambda_408, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_409[] = {
  0, // locals
  0, // parameters
  // add_argument alignment width
  func_add_argument, 2, var_2993_35_alignment, var_3004_22_width, TAIL_CALL,
  POS(3054, 33)
};

static FUNCTION_INFO i_lambda_409 = {
  t_lambda_409, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_410[] = {
  1, // locals
  0, // parameters
  // n
  var_std__less, 2, var_2979_4_n, var_2978_4_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_411, lambda_412, TAIL_CALL,
  POS(3057, 19),
  POS(3056, 13)
};

static FUNCTION_INFO i_lambda_410 = {
  t_lambda_410, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_411[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(3058, 17)
};

static FUNCTION_INFO i_lambda_411 = {
  t_lambda_411, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_412[] = {
  1, // locals
  0, // parameters
  // template(i)
  var_2973_5_template, 1, var_2978_4_i, 1, LOCAL(1),
  // push &output template(i)
  var_push, 2, var_2976_4_output, LOCAL(1), 1, var_2976_4_output,
  // !i i+1
  var_std__plus, 2, var_2978_4_i, num_1, 1, var_2978_4_i,
  // next
  var_next, 0, TAIL_CALL,
  POS(3060, 30),
  POS(3060, 17),
  POS(3061, 17),
  POS(3062, 17)
};

static FUNCTION_INFO i_lambda_412 = {
  t_lambda_412, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_413[] = {
  0, // locals
  0, // parameters
  // push &output chr
  var_push, 2, var_2976_4_output, var_2985_10_chr, 1, var_2976_4_output,
  // next
  var_next, 0, TAIL_CALL,
  POS(3064, 13),
  POS(3065, 13)
};

static FUNCTION_INFO i_lambda_413 = {
  t_lambda_413, NULL, 2, 0,
  {}
};

static TAB_NUM t_func_add_argument[] = {
  1, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_3097_7_alignment,
  MANDATORY_PARAMETER, var_3098_7_width,
  var_undefined, var_3099_7_decimal_width,
  // $argument arguments(arg_idx)
  var_2974_5_arguments, 1, var_2977_4_arg_idx, 1, var_3101_6_argument,
  // !arg_idx arg_idx+1
  var_std__plus, 2, var_2977_4_arg_idx, num_1, 1, var_2977_4_arg_idx,
  // is_defined:
  var_is_defined, 1, var_3099_7_decimal_width, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_decimal_width_is_defined, lambda_419, TAIL_CALL,
  POS(3101, 5),
  POS(3102, 5),
  POS(3104, 21),
  POS(3103, 5)
};

static FUNCTION_INFO i_func_add_argument = {
  t_func_add_argument, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_decimal_width_is_defined[] = {
  1, // locals
  0, // parameters
  // real_to_string &argument
  func_real_to_string, 1, var_3101_6_argument, 1, var_3101_6_argument,
  // $value argument .truncate_from. '.'
  var_truncate_from, 2, var_3101_6_argument, chr_46, 1, var_3106_10_value,
  // 0:
  var_std__less, 2, num_0, var_3099_7_decimal_width, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_414, lambda_417, TAIL_CALL,
  POS(3105, 9),
  POS(3106, 9),
  POS(3108, 27),
  POS(3107, 9)
};

static FUNCTION_INFO i_lambda_decimal_width_is_defined = {
  t_lambda_decimal_width_is_defined, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_414[] = {
  1, // locals
  0, // parameters
  // $decimals argument .behind. '.'
  var_behind, 2, var_3101_6_argument, chr_46, 1, var_3109_14_decimals,
  // pad_right &decimals decimal_width "0"
  var_pad_right, 3, var_3109_14_decimals, var_3099_7_decimal_width, string_14, 1, var_3109_14_decimals,
  // range &decimals 1 decimal_width
  var_range, 3, var_3109_14_decimals, num_1, var_3099_7_decimal_width, 1, var_3109_14_decimals,
  // alignment == ZEROS:
  var_std__equal, 2, var_3097_7_alignment, uni_ZEROS, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_415, lambda_416, TAIL_CALL,
  POS(3109, 13),
  POS(3110, 13),
  POS(3111, 13),
  POS(3113, 15),
  POS(3112, 13)
};

static FUNCTION_INFO i_lambda_414 = {
  t_lambda_414, NULL, 5, 0,
  {}
};

static TAB_NUM t_lambda_415[] = {
  1, // locals
  0, // parameters
  // pad_left(value width "0") "." decimals
  var_pad_left, 3, var_3106_10_value, var_3098_7_width, string_14, 1, LOCAL(1),
  // append &output pad_left(value width "0") "." decimals
  var_append, 4, var_2976_4_output, LOCAL(1), string_15, var_3109_14_decimals, 1, var_2976_4_output,
  // next
  var_next, 0, TAIL_CALL,
  POS(3114, 32),
  POS(3114, 17),
  POS(3115, 17)
};

static FUNCTION_INFO i_lambda_415 = {
  t_lambda_415, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_416[] = {
  1, // locals
  0, // parameters
  // pad_left(value width) "." decimals
  var_pad_left, 2, var_3106_10_value, var_3098_7_width, 1, LOCAL(1),
  // append &output pad_left(value width) "." decimals
  var_append, 4, var_2976_4_output, LOCAL(1), string_15, var_3109_14_decimals, 1, var_2976_4_output,
  // next
  var_next, 0, TAIL_CALL,
  POS(3117, 32),
  POS(3117, 17),
  POS(3118, 17)
};

static FUNCTION_INFO i_lambda_416 = {
  t_lambda_416, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_417[] = {
  1, // locals
  0, // parameters
  // case
  var_case, 6, var_3097_7_alignment, uni_LEFT, lambda_LEFT, uni_ZEROS, lambda_ZEROS, lambda_418, 1, LOCAL(1),
  // append &output
  var_append, 2, var_2976_4_output, LOCAL(1), 1, var_2976_4_output,
  // next
  var_next, 0, TAIL_CALL,
  POS(3121, 15),
  POS(3120, 13),
  POS(3126, 13)
};

static FUNCTION_INFO i_lambda_417 = {
  t_lambda_417, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_LEFT[] = {
  1, // locals
  0, // parameters
  // pad_right(value width)
  var_pad_right, 2, var_3106_10_value, var_3098_7_width, 1, LOCAL(1),
  //  pad_right(value width)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(3123, 25),
  POS(3123, 24)
};

static FUNCTION_INFO i_lambda_LEFT = {
  t_lambda_LEFT, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_ZEROS[] = {
  1, // locals
  0, // parameters
  // pad_left(value width "0")
  var_pad_left, 3, var_3106_10_value, var_3098_7_width, string_14, 1, LOCAL(1),
  //  pad_left(value width "0")
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(3124, 26),
  POS(3124, 25)
};

static FUNCTION_INFO i_lambda_ZEROS = {
  t_lambda_ZEROS, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_418[] = {
  1, // locals
  0, // parameters
  // pad_left(argument value)
  var_pad_left, 2, var_3101_6_argument, var_3106_10_value, 1, LOCAL(1),
  //  pad_left(argument value)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(3125, 20),
  POS(3125, 19)
};

static FUNCTION_INFO i_lambda_418 = {
  t_lambda_418, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_419[] = {
  1, // locals
  0, // parameters
  // case
  var_case, 6, var_3097_7_alignment, uni_LEFT, lambda_2_LEFT, uni_ZEROS, lambda_2_ZEROS, lambda_420, 1, LOCAL(1),
  // append &output
  var_append, 2, var_2976_4_output, LOCAL(1), 1, var_2976_4_output,
  // next
  var_next, 0, TAIL_CALL,
  POS(3129, 11),
  POS(3128, 9),
  POS(3134, 9)
};

static FUNCTION_INFO i_lambda_419 = {
  t_lambda_419, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_2_LEFT[] = {
  1, // locals
  0, // parameters
  // pad_right(argument width)
  var_pad_right, 2, var_3101_6_argument, var_3098_7_width, 1, LOCAL(1),
  //  pad_right(argument width)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(3131, 21),
  POS(3131, 20)
};

static FUNCTION_INFO i_lambda_2_LEFT = {
  t_lambda_2_LEFT, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_2_ZEROS[] = {
  1, // locals
  0, // parameters
  // pad_left(argument width "0")
  var_pad_left, 3, var_3101_6_argument, var_3098_7_width, string_14, 1, LOCAL(1),
  //  pad_left(argument width "0")
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(3132, 22),
  POS(3132, 21)
};

static FUNCTION_INFO i_lambda_2_ZEROS = {
  t_lambda_2_ZEROS, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_420[] = {
  1, // locals
  0, // parameters
  // pad_left(argument width)
  var_pad_left, 2, var_3101_6_argument, var_3098_7_width, 1, LOCAL(1),
  //  pad_left(argument width)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(3133, 16),
  POS(3133, 15)
};

static FUNCTION_INFO i_lambda_420 = {
  t_lambda_420, NULL, 2, 0,
  {}
};

static TAB_NUM t_func_real_to_string[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 3136_19_num
  // $str num.to_string
  var_to_string, 1, LOCAL(1), 1, var_3137_4_str,
  // $n length_of(str)
  var_length_of, 1, var_3137_4_str, 1, var_3138_4_n,
  // $i n
  LET, 1, var_3138_4_n, 1, var_3139_4_i,
  // loop:
  var_loop, 1, lambda_23_loop, TAIL_CALL,
  POS(3137, 3),
  POS(3138, 3),
  POS(3139, 3),
  POS(3140, 3),
  LOCAL(1)
};

static FUNCTION_INFO i_func_real_to_string = {
  t_func_real_to_string, NULL, 4, 1,
  {"3136_19_num\000"}
};

static TAB_NUM t_lambda_23_loop[] = {
  1, // locals
  0, // parameters
  // i == 0
  var_std__equal, 2, var_3139_4_i, num_0, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_421, lambda_422, TAIL_CALL,
  POS(3142, 7),
  POS(3141, 5)
};

static FUNCTION_INFO i_lambda_23_loop = {
  t_lambda_23_loop, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_421[] = {
  0, // locals
  0, // parameters
  //  str
  LET, 1, var_3137_4_str, TAIL_CALL,
  POS(3143, 9)
};

static FUNCTION_INFO i_lambda_421 = {
  t_lambda_421, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_422[] = {
  2, // locals
  0, // parameters
  // str(i) == 'e'
  var_3137_4_str, 1, var_3139_4_i, 1, LOCAL(1),
  // str(i) == 'e'
  var_std__equal, 2, LOCAL(1), chr_101, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), func_2_handle_exponent, lambda_423, TAIL_CALL,
  POS(3146, 11),
  POS(3146, 11),
  POS(3145, 9)
};

static FUNCTION_INFO i_lambda_422 = {
  t_lambda_422, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_423[] = {
  0, // locals
  0, // parameters
  // !i i-1
  var_std__minus, 2, var_3139_4_i, num_1, 1, var_3139_4_i,
  // next
  var_next, 0, TAIL_CALL,
  POS(3149, 13),
  POS(3150, 13)
};

static FUNCTION_INFO i_lambda_423 = {
  t_lambda_423, NULL, 2, 0,
  {}
};

static TAB_NUM t_func_2_handle_exponent[] = {
  3, // locals
  0, // parameters
  // i >= n || str(2) != '.'
  var_std__less, 2, var_3139_4_i, var_3138_4_n, 1, LOCAL(1),
  // i >= n || str(2) != '.'
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // i >= n || str(2) != '.'
  var_std__or, 2, LOCAL(2), lambda_424, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_425, lambda_426, TAIL_CALL,
  POS(3154, 7),
  POS(3154, 7),
  POS(3154, 7),
  POS(3153, 5)
};

static FUNCTION_INFO i_func_2_handle_exponent = {
  t_func_2_handle_exponent, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_424[] = {
  3, // locals
  0, // parameters
  // str(2) != '.'
  var_3137_4_str, 1, num_2, 1, LOCAL(1),
  // str(2) != '.'
  var_std__equal, 2, LOCAL(1), chr_46, 1, LOCAL(2),
  // str(2) != '.'
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // str(2) != '.'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(3154, 17),
  POS(3154, 17),
  POS(3154, 17),
  POS(3154, 17)
};

static FUNCTION_INFO i_lambda_424 = {
  t_lambda_424, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_425[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(3155, 9)
};

static FUNCTION_INFO i_lambda_425 = {
  t_lambda_425, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_426[] = {
  3, // locals
  0, // parameters
  // i+2 n).to_integer
  var_std__plus, 2, var_3139_4_i, num_2, 1, LOCAL(1),
  // range(str i+2 n).to_integer
  var_range, 3, var_3137_4_str, LOCAL(1), var_3138_4_n, 1, LOCAL(2),
  // $exp range(str i+2 n).to_integer
  var_to_integer, 1, LOCAL(2), 1, var_3157_10_exp,
  // i-1) str(1))
  var_std__minus, 2, var_3139_4_i, num_1, 1, LOCAL(1),
  // range(str 3 i-1) str(1))
  var_range, 3, var_3137_4_str, num_3, LOCAL(1), 1, LOCAL(2),
  // str(1))
  var_3137_4_str, 1, num_1, 1, LOCAL(3),
  // $man put(range(str 3 i-1) str(1))
  var_put, 2, LOCAL(2), LOCAL(3), 1, var_3158_10_man,
  // is_undefined
  var_is_undefined, 1, var_3157_10_exp, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_427, lambda_428, TAIL_CALL,
  POS(3157, 24),
  POS(3157, 14),
  POS(3157, 9),
  POS(3158, 30),
  POS(3158, 18),
  POS(3158, 35),
  POS(3158, 9),
  POS(3160, 15),
  POS(3159, 9)
};

static FUNCTION_INFO i_lambda_426 = {
  t_lambda_426, NULL, 9, 0,
  {}
};

static TAB_NUM t_lambda_427[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(3161, 13)
};

static FUNCTION_INFO i_lambda_427 = {
  t_lambda_427, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_428[] = {
  2, // locals
  0, // parameters
  // exp-1)
  var_std__minus, 2, var_3157_10_exp, num_1, 1, LOCAL(1),
  // $zeros dup("0" exp-1)
  var_dup, 2, string_14, LOCAL(1), 1, var_3163_14_zeros,
  // i+1)
  var_std__plus, 2, var_3139_4_i, num_1, 1, LOCAL(1),
  // str(i+1)
  var_3137_4_str, 1, LOCAL(1), 1, LOCAL(2),
  // case str(i+1)
  var_case, 6, LOCAL(2), chr_43, lambda_429, chr_45, lambda_430, lambda_431, TAIL_CALL,
  POS(3163, 28),
  POS(3163, 13),
  POS(3164, 22),
  POS(3164, 18),
  POS(3164, 13)
};

static FUNCTION_INFO i_lambda_428 = {
  t_lambda_428, NULL, 5, 0,
  {}
};

static TAB_NUM t_lambda_429[] = {
  1, // locals
  0, // parameters
  // append(man zeros)
  var_append, 2, var_3158_10_man, var_3163_14_zeros, 1, LOCAL(1),
  // -> append(man zeros)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(3166, 20),
  POS(3166, 17)
};

static FUNCTION_INFO i_lambda_429 = {
  t_lambda_429, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_430[] = {
  2, // locals
  0, // parameters
  // append(zeros man))
  var_append, 2, var_3163_14_zeros, var_3158_10_man, 1, LOCAL(1),
  // append("0." append(zeros man))
  var_append, 2, string_16, LOCAL(1), 1, LOCAL(2),
  // -> append("0." append(zeros man))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(3168, 32),
  POS(3168, 20),
  POS(3168, 17)
};

static FUNCTION_INFO i_lambda_430 = {
  t_lambda_430, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_431[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(3169, 17)
};

static FUNCTION_INFO i_lambda_431 = {
  t_lambda_431, NULL, 1, 0,
  {}
};

static int value_range_1414_11_arguments[] = {
  -num_0, -num_25
};

static int value_range_1417_11_arguments[] = {
  -num_26, -num_51
};

static int value_range_1420_11_arguments[] = {
  -num_52, -num_61
};

static int value_range_1489_8_arguments[] = {
  -chr_65, -chr_90
};

static int value_range_1490_8_arguments[] = {
  -chr_97, -chr_122
};

static int value_range_1491_8_arguments[] = {
  -chr_48, -chr_57
};

static int value_range_1691_14_arguments[] = {
  -chr_48, -chr_49
};

static int value_range_1702_14_arguments[] = {
  -chr_48, -chr_55
};

static int value_range_1716_14_arguments[] = {
  -chr_97, -chr_102
};

static int value_range_1719_14_arguments[] = {
  -chr_65, -chr_70
};

static int sequence_1803_14_arguments[] = {
  -chr_101, -chr_69
};

static int tuple_2555_1_arguments[] = {
  -var_undefined, -var_undefined
};

static FUNKY_CONSTANT constants_table[] = {
  {FLT_STRING_8, 0, {.str_8 = ""}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__string___to_string}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std__create_string}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_1}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_2}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std__string}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__string___put}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__string___dup}},
  {FLT_POSITIVE_INT64, 0, {.value = 0}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_3}},
  {FLT_POSITIVE_INT64, 0, {.value = 1}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_4}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_5}},
  {FLT_POSITIVE_INT64, 0, {.value = 2}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_6}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_7}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__object___pad_left}},
  {FLT_STRING_8, 1, {.str_8 = " "}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_8}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_9}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__object___pad_right}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_10}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_11}},
  {FLT_STRING_8, 80, {.str_8 = "                                                                                "}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std__spaces}},
  {FLT_POSITIVE_INT64, 0, {.value = 80}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_12}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_13}},
  {FLT_STRING_8, 16, {.str_8 = "\011\011\011\011\011\011\011\011\011       "}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std__tabs_and_spaces}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_14}},
  {FLT_POSITIVE_INT64, 0, {.value = 3}},
  {FLT_POSITIVE_INT64, 0, {.value = 10}},
  {FLT_POSITIVE_INT64, 0, {.value = 7}},
  {FLT_POSITIVE_INT64, 0, {.value = 9}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_15}},
  {FLT_STRING_8, 1, {.str_8 = "\011"}},
  {FLT_STRING_8, 9, {.str_8 = "\011\011\011\011\011\011\011\011\011"}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std__with_tabs}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_loop}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_16}},
  {FLT_CHARACTER, 0, {.value = 32}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_17}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_18}},
  {FLT_POSITIVE_INT64, 0, {.value = 8}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_19}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_20}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_21}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_22}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_23}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_24}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_25}},
  {FLT_NEGATIVE_INT64, 0, {.value = 1}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_skip_line}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_26}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_27}},
  {FLT_CHARACTER, 0, {.value = 10}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_28}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_29}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__string___match}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_30}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_31}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_32}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_33}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_fail}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_34}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_35}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__string___match_back}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_36}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_37}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_38}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__string___matches}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__string___search}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_39}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_40}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_search_forwards}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_41}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_42}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_43}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_44}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_45}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_46}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_search_backwards}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_47}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_48}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_49}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_50}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_51}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_52}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__string___before}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_53}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_54}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__string___truncate_from}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_55}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_56}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__string___behind}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_57}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_58}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__string___truncate_until}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_59}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_60}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__string___from}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_61}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_62}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__string___truncate_before}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_63}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_64}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__string___until}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_65}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_66}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__string___truncate_behind}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_67}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_68}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__string___between}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__string___has_prefix}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__string___has_suffix}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__string___without_prefix}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_69}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_70}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__string___without_suffix}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_71}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_72}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__string___contains}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std__split}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_73}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_74}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_2_loop}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_pos_is_defined}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_75}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_76}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_77}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std__join}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_78}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std__trim}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_3_loop}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_79}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_80}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_81}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_4_loop}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_82}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_83}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_84}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std__trim_left}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_5_loop}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_85}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_86}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_87}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std__trim_right}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_6_loop}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_88}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_89}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_90}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std__normalize}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_7_loop}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_91}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_92}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_93}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_94}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_95}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_96}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_97}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_98}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_99}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__octet_string___to_base64}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_8_loop}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_100}},
  {FLT_POSITIVE_INT64, 0, {.value = 4}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_101}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_102}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_103}},
  {FLT_STRING_8, 1, {.str_8 = "\000"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_104}},
  {FLT_NEGATIVE_INT64, 0, {.value = 3}},
  {FLT_STRING_8, 2, {.str_8 = "=="}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_105}},
  {FLT_NEGATIVE_INT64, 0, {.value = 2}},
  {FLT_CHARACTER, 0, {.value = 61}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_encode}},
  {FLT_POSITIVE_INT64, 0, {.value = 16}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_106}},
  {FLT_POSITIVE_INT64, 0, {.value = 18}},
  {FLT_POSITIVE_INT64, 0, {.value = 0x3ffff}},
  {FLT_POSITIVE_INT64, 0, {.value = 6}},
  {FLT_POSITIVE_INT64, 0, {.value = 25}},
  {FLT_VALUE_RANGE, 2, {.arguments = value_range_1414_11_arguments}},
  {FLT_POSITIVE_INT64, 0, {.value = 26}},
  {FLT_POSITIVE_INT64, 0, {.value = 51}},
  {FLT_VALUE_RANGE, 2, {.arguments = value_range_1417_11_arguments}},
  {FLT_POSITIVE_INT64, 0, {.value = 52}},
  {FLT_POSITIVE_INT64, 0, {.value = 61}},
  {FLT_VALUE_RANGE, 2, {.arguments = value_range_1420_11_arguments}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_107}},
  {FLT_CHARACTER, 0, {.value = 65}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_108}},
  {FLT_CHARACTER, 0, {.value = 97}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_109}},
  {FLT_CHARACTER, 0, {.value = 48}},
  {FLT_POSITIVE_INT64, 0, {.value = 62}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_110}},
  {FLT_CHARACTER, 0, {.value = 43}},
  {FLT_POSITIVE_INT64, 0, {.value = 63}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_111}},
  {FLT_CHARACTER, 0, {.value = 47}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_112}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__octet_string___from_base64}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_113}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_114}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_9_loop}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_115}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_116}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_117}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_118}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_119}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_120}},
  {FLT_POSITIVE_INT64, 0, {.value = 0xff}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_121}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_122}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_123}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_124}},
  {FLT_POSITIVE_INT64, 0, {.value = 5}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_decode}},
  {FLT_CHARACTER, 0, {.value = 90}},
  {FLT_VALUE_RANGE, 2, {.arguments = value_range_1489_8_arguments}},
  {FLT_CHARACTER, 0, {.value = 122}},
  {FLT_VALUE_RANGE, 2, {.arguments = value_range_1490_8_arguments}},
  {FLT_CHARACTER, 0, {.value = 57}},
  {FLT_VALUE_RANGE, 2, {.arguments = value_range_1491_8_arguments}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_125}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_126}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_127}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_128}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_129}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_130}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_131}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__octet_string___sha1}},
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
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_132}},
  {FLT_POSITIVE_INT64, 0, {.value = 64}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_10_loop}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_message_is_empty}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_133}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_134}},
  {FLT_POSITIVE_INT64, 0, {.value = 24}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_135}},
  {FLT_POSITIVE_INT64, 0, {.value = 17}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_136}},
  {FLT_POSITIVE_INT64, 0, {.value = 14}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_main_loop}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_137}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_138}},
  {FLT_POSITIVE_INT64, 0, {.value = 20}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_139}},
  {FLT_POSITIVE_INT64, 0, {.value = 0xffffffff}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_140}},
  {FLT_POSITIVE_INT64, 0, {.value = 40}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_141}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_142}},
  {FLT_POSITIVE_INT64, 0, {.value = 60}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_143}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_144}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_145}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_compute}},
  {FLT_POSITIVE_INT64, 0, {.value = 30}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_146}},
  {FLT_POSITIVE_INT64, 0, {.value = 65}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_big_endian_string_64}},
  {FLT_POSITIVE_INT64, 0, {.value = 48}},
  {FLT_POSITIVE_INT64, 0, {.value = 32}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_big_endian_string_32}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_rol32}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std__parse_integer}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_maybe_negated}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_147}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_148}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_partial_match}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_149}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_150}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_exhausted}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_151}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_152}},
  {FLT_CHARACTER, 0, {.value = 45}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_153}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_154}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_155}},
  {FLT_STRING_8, 2, {.str_8 = "0b"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_156}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_157}},
  {FLT_CHARACTER, 0, {.value = 49}},
  {FLT_VALUE_RANGE, 2, {.arguments = value_range_1691_14_arguments}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_158}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_159}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_160}},
  {FLT_STRING_8, 2, {.str_8 = "0o"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_161}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_162}},
  {FLT_CHARACTER, 0, {.value = 55}},
  {FLT_VALUE_RANGE, 2, {.arguments = value_range_1702_14_arguments}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_163}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_164}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_165}},
  {FLT_STRING_8, 2, {.str_8 = "0x"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_166}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_167}},
  {FLT_CHARACTER, 0, {.value = 102}},
  {FLT_VALUE_RANGE, 2, {.arguments = value_range_1716_14_arguments}},
  {FLT_CHARACTER, 0, {.value = 70}},
  {FLT_VALUE_RANGE, 2, {.arguments = value_range_1719_14_arguments}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_168}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_a__f}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_A__F}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_169}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_170}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_171}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_172}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_173}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_174}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std__parse_number}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_175}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_176}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_177}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_178}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_179}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_180}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_181}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_182}},
  {FLT_CHARACTER, 0, {.value = 98}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_b}},
  {FLT_CHARACTER, 0, {.value = 111}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_o}},
  {FLT_CHARACTER, 0, {.value = 120}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_x}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_parse}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_skip_one_ore_more_digits}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_183}},
  {FLT_CHARACTER, 0, {.value = 101}},
  {FLT_CHARACTER, 0, {.value = 69}},
  {FLT_SEQUENCE, 2, {.arguments = sequence_1803_14_arguments}},
  {FLT_CHARACTER, 0, {.value = 46}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_184}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_2_skip_one_ore_more_digits}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_185}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_skip_one_ore_more_digits}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_186}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_187}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_188}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_189}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_190}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_11_loop}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_191}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_192}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_handle_exponent}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_193}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_194}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_195}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_196}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_return_integer}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_return_real}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_parse_binary}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_197}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_198}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_199}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_200}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_201}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_12_loop}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_202}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_203}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_204}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_205}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_206}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_parse_octal}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_207}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_208}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_209}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_210}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_211}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_13_loop}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_212}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_213}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_214}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_215}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_216}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std__parse_hex}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_217}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_218}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_219}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_220}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_221}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_222}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_223}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_224}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_225}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_226}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_227}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_228}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_229}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_handle_more_digits}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_14_loop}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_230}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_231}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_232}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_233}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_234}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_235}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_236}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_237}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_238}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_239}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_240}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_241}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_242}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__string___to_integer}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_243}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_244}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__string___to_number}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_245}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_246}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std__map_characters}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_247}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_248}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_249}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_250}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_251}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_252}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_253}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_254}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_255}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_256}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_257}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_258}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__string___to_upper_case}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__string___to_lower_case}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__string___to_title_case}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_259}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_260}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_261}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_262}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__string___to_sentence_case}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_263}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_264}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_265}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_266}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__string___to_wide}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std__delete_all}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_delete_all}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_267}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_268}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_269}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_270}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_271}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std__replace_all}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_replace_all}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_272}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_273}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_274}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_275}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_replacement_is_a_string}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_276}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_277}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std__replace_first}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_replace_first}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_278}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_279}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_280}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_281}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_282}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_283}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std__count_occurrences}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_search_next}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_284}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_285}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_n_is_defined}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_286}},
  {FLT_POSITIVE_INT64, 0, {.value = 300}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std__split_into_lines}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_15_loop}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_287}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_288}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_289}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_290}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_291}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_292}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std__split_into_indented_lines}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_split}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_293}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_294}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_295}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_296}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_297}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_298}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_299}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_ls_is_defined}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_300}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_301}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_302}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_303}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_16_loop}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_304}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_305}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_create_line}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_17_loop}},
  {FLT_CHARACTER, 0, {.value = 9}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_306}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_307}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_308}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_309}},
  {FLT_STRING_8, 1, {.str_8 = "\012"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_310}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_311}},
  {FLT_POSITIVE_INT64, 0, {.value = 9999}},
  {FLT_TUPLE, 2, {.arguments = tuple_2555_1_arguments}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_line_indent_of}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_312}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_313}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std__split_into_groups}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_18_loop}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_314}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_indent_is_defined}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_315}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_316}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_317}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_318}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_319}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_2_split}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_320}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_321}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_322}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_323}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_324}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_325}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_326}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_327}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_328}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_329}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_group_start_is_defined}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_19_loop}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_330}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_331}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_332}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_333}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_334}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_335}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_336}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_add_groups}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_337}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_338}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_add}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_339}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_340}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_341}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_342}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_reduce_minimum_indent_and_next}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_343}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_344}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_start_new_fragment_and_next}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std__wrap_words}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_20_loop}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_345}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_346}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_347}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_348}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_nl}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_349}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_350}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_351}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_352}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_353}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_354}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_b_is_defined}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_355}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__string___serialize}},
  {FLT_STRING_8, 1, {.str_8 = "\042"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_356}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_357}},
  {FLT_CHARACTER, 0, {.value = 126}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_358}},
  {FLT_CHARACTER, 0, {.value = 34}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_359}},
  {FLT_CHARACTER, 0, {.value = 64}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_360}},
  {FLT_STRING_8, 1, {.str_8 = "@"}},
  {FLT_STRING_8, 1, {.str_8 = ";"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_361}},
  {FLT_STRING_8, 2, {.str_8 = "\042\012"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_362}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_363}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__octet_string___to_uint8_array}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_364}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_365}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std__indented}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_21_loop}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_366}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_367}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_368}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_369}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_370}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_371}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_372}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_373}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_374}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_skip_indent}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_375}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_376}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_377}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_skip_spaces}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_378}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_379}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_380}},
  {FLT_UNIQUE, 0, {.str_8 = "LEFT"}},
  {FLT_UNIQUE, 0, {.str_8 = "RIGHT"}},
  {FLT_UNIQUE, 0, {.str_8 = "CENTER"}},
  {FLT_UNIQUE, 0, {.str_8 = "ZEROS"}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std__format}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_22_loop}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_381}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_382}},
  {FLT_CHARACTER, 0, {.value = 37}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_383}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_384}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_385}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_386}},
  {FLT_CHARACTER, 0, {.value = 108}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_l}},
  {FLT_CHARACTER, 0, {.value = 114}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_r}},
  {FLT_CHARACTER, 0, {.value = 99}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_c}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_387}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_388}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_389}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_390}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_391}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_392}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_393}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_394}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_395}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_396}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_397}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_398}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_399}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_400}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_401}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_402}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_403}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_404}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_405}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_406}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_407}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_408}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_409}},
  {FLT_CHARACTER, 0, {.value = 92}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_410}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_411}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_412}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_413}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_add_argument}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_decimal_width_is_defined}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_414}},
  {FLT_STRING_8, 1, {.str_8 = "0"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_415}},
  {FLT_STRING_8, 1, {.str_8 = "."}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_416}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_417}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_LEFT}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_ZEROS}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_418}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_419}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_2_LEFT}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_2_ZEROS}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_420}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_real_to_string}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_23_loop}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_421}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_422}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_423}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_2_handle_exponent}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_424}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_425}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_426}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_427}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_428}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_429}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_430}},
  {FLT_STRING_8, 2, {.str_8 = "0."}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_431}}
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
    {.position = POS(81, 1)}
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
    {.position = POS(116, 1)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "is_a_string\000", NULL,
    {.position = POS(116, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "false\000", NULL,
    {.position = POS(116, 32)}
  },
  {
    FOT_UNKNOWN, 0, 32,
    "string\000std_types", std_types__string__attributes,
    {.position = POS(122, 1)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "true\000", NULL,
    {.position = POS(122, 32)}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "is_an_octet_string\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "is_an_octet_string\000", NULL,
    {.position = POS(134, 20)}
  },
  {
    FOT_UNKNOWN, 0, 5,
    "octet_string\000std_types", std_types__octet_string__attributes,
    {.position = POS(140, 1)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "neutral_element_of\000", NULL,
    {.position = POS(146, 20)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "to_string\000", NULL,
    {.position = POS(148, 20)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "create_string\000std", NULL,
    {.const_idx = -func_std__create_string}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "177_5_arguments\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_empty\000", NULL,
    {.position = POS(180, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "append\000", NULL,
    {.position = POS(182, 38)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "map_reduce\000", NULL,
    {.position = POS(182, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if\000", NULL,
    {.position = POS(179, 3)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "string\000std", NULL,
    {.const_idx = -func_std__string}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "create_string\000", NULL,
    {.position = POS(198, 3)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "put\000", NULL,
    {.position = POS(200, 20)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "dup\000", NULL,
    {.position = POS(218, 20)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "238_5_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "239_5_n\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "shift_right\000std", NULL,
    {.position = POS(245, 10)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "246_8_str\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "times\000std", NULL,
    {.position = POS(248, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "equal\000std", NULL,
    {.position = POS(248, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "string\000", NULL,
    {.position = POS(249, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "case\000", NULL,
    {.position = POS(241, 3)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "pad_left\000", NULL,
    {.position = POS(253, 20)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "278_5_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "279_5_pad\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "281_4_text\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "282_4_len\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "length_of\000", NULL,
    {.position = POS(282, 8)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "less\000std", NULL,
    {.position = POS(284, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "minus\000std", NULL,
    {.position = POS(286, 29)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000std", NULL,
    {.position = POS(286, 29)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "div\000", NULL,
    {.position = POS(286, 28)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "range\000", NULL,
    {.position = POS(286, 14)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "pad_right\000", NULL,
    {.position = POS(289, 20)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "314_5_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "315_5_pad\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "317_4_text\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "318_4_len\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "spaces\000std", NULL,
    {.const_idx = -func_std__spaces}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "337_5_n\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not\000std", NULL,
    {.position = POS(340, 10)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "tabs_and_spaces\000std", NULL,
    {.const_idx = -func_std__tabs_and_spaces}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "354_5_n\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "bit_and\000std", NULL,
    {.position = POS(358, 56)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "spaces\000", NULL,
    {.position = POS(359, 34)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "with_tabs\000std", NULL,
    {.const_idx = -func_std__with_tabs}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "374_5_text\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "376_4_s\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "377_4_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "378_4_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "379_4_output\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "380_4_count\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "next\000", NULL,
    {.position = POS(388, 13)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "392_18_tab_count\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "shift_left\000std", NULL,
    {.position = POS(401, 35)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "loop\000", NULL,
    {.position = POS(381, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "and\000std", NULL,
    {.position = POS(415, 16)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "break\000", NULL,
    {.position = POS(418, 11)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "match\000", NULL,
    {.position = POS(425, 20)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "441_5_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "442_5_stream\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "444_4_rc\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "result_count\000", NULL,
    {.position = POS(444, 7)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "445_4_len\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "undefined\000", NULL,
    {.position = POS(453, 20)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "match_back\000", NULL,
    {.position = POS(463, 20)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "465_5_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "466_5_stream\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "468_4_len\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "negate\000std", NULL,
    {.position = POS(470, 47)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "matches\000", NULL,
    {.position = POS(474, 20)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "search\000", NULL,
    {.position = POS(487, 20)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "504_5_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "505_5_stream\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "506_5_nth\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "508_4_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "509_4_length\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "510_4_offset\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "511_4_n\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "dec\000", NULL,
    {.position = POS(528, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000", NULL,
    {.position = POS(529, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "inc\000", NULL,
    {.position = POS(533, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "minus\000", NULL,
    {.position = POS(546, 17)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "before\000", NULL,
    {.position = POS(554, 20)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "592_5_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "596_11_pos\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_defined\000", NULL,
    {.position = POS(598, 9)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "truncate_from\000", NULL,
    {.position = POS(603, 20)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "642_5_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "646_11_pos\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "behind\000", NULL,
    {.position = POS(652, 20)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "690_5_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "694_11_pos\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "694_16_len\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "truncate_until\000", NULL,
    {.position = POS(700, 20)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "739_5_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "743_11_pos\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "743_16_len\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "from\000", NULL,
    {.position = POS(749, 20)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "788_5_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "792_11_pos\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "truncate_before\000", NULL,
    {.position = POS(798, 20)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "837_5_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "841_11_pos\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "until\000", NULL,
    {.position = POS(847, 20)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "885_5_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "889_11_pos\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "889_16_len\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "truncate_behind\000", NULL,
    {.position = POS(895, 20)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "934_5_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "938_11_pos\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "938_16_len\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "between\000", NULL,
    {.position = POS(944, 20)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "has_prefix\000", NULL,
    {.position = POS(977, 20)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "has_suffix\000", NULL,
    {.position = POS(999, 20)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "without_prefix\000", NULL,
    {.position = POS(1021, 20)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1042_5_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1045_4_n\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "without_suffix\000", NULL,
    {.position = POS(1051, 20)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1072_5_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1075_4_n\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "contains\000", NULL,
    {.position = POS(1081, 20)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "split\000std", NULL,
    {.const_idx = -func_std__split}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1144_5_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1145_5_separator\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1147_4_rc\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_list\000", NULL,
    {.position = POS(1150, 8)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1152_8_items\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1154_17_pos\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1154_22_len\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "push\000", NULL,
    {.position = POS(1157, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "spread\000", NULL,
    {.position = POS(1166, 17)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "join\000std", NULL,
    {.const_idx = -func_std__join}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1192_5_separator\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "trim\000std", NULL,
    {.const_idx = -func_std__trim}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1221_5_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1222_5_test\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_a_whitespace_character\000", NULL,
    {.position = POS(1222, 12)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1224_4_s\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1225_4_e\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "trim_left\000std", NULL,
    {.const_idx = -func_std__trim_left}
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
    "1264_4_s\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1265_4_e\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "trim_right\000std", NULL,
    {.const_idx = -func_std__trim_right}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1295_5_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1296_5_test\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1298_4_e\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "normalize\000std", NULL,
    {.const_idx = -func_std__normalize}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1329_5_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1331_4_buf\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1332_4_e\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1333_4_i\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_not_empty\000", NULL,
    {.position = POS(1347, 23)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "update_if\000", NULL,
    {.position = POS(1347, 9)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1348_10_s\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "to_base64\000", NULL,
    {.position = POS(1364, 26)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1380_5_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1382_4_base64\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1384_6_len\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "to_integer\000", NULL,
    {.position = POS(1405, 25)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "bit_or\000std", NULL,
    {.position = POS(1404, 8)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1403_6_bits\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1408_6_buf\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1411_10_value\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "value_range\000std", NULL,
    {.position = POS(1414, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "repeat\000", NULL,
    {.position = POS(1409, 5)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "from_base64\000", NULL,
    {.position = POS(1431, 26)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1450_5_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1452_4_octets\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "mod\000", NULL,
    {.position = POS(1454, 6)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1462_14_bits\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1465_18_value\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_undefined\000", NULL,
    {.position = POS(1467, 25)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "character\000", NULL,
    {.position = POS(1473, 30)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "from_to\000", NULL,
    {.position = POS(1463, 13)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1486_13_chr\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "sha1\000", NULL,
    {.position = POS(1497, 26)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1512_5_message\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1516_4_h0\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1517_4_h1\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1518_4_h2\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1519_4_h3\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1520_4_h4\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1541_4_pad_len\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1559_10_w\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "uint32_array\000", NULL,
    {.position = POS(1559, 12)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "bit_xor\000std", NULL,
    {.position = POS(1572, 23)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1577_12_a\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1578_12_b\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1579_12_c\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1580_12_d\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1581_12_e\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1583_16_i\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "cond\000", NULL,
    {.position = POS(1584, 15)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "parse_integer\000std", NULL,
    {.const_idx = -func_std__parse_integer}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1656_5_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1677_4_negate\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1683_4_value\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1664_20_idx\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1676_4_orig\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1688_12_idx\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1688_16_chr\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "for_each\000", NULL,
    {.position = POS(1687, 7)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1700_12_idx\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1700_16_chr\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1711_12_idx\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1711_16_chr\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1727_12_idx\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1727_16_chr\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "parse_number\000std", NULL,
    {.const_idx = -func_std__parse_number}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1763_5_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1765_4_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1766_4_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1771_8_sign_chr\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "or\000std", NULL,
    {.position = POS(1772, 17)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1773_8_sign\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "parse_hex\000", NULL,
    {.position = POS(1783, 18)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "sequence\000std", NULL,
    {.position = POS(1803, 14)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1806_33_cont\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1811_12_digit\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1822_22_next_digit\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1834_12_exp_sign_chr\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "integer\000", NULL,
    {.position = POS(1838, 41)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "real\000", NULL,
    {.position = POS(1840, 38)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1842_17_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1842_21_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1842_23_sign\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1843_4_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1847_8_digit\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1852_12_value\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1859_18_next_digit\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1866_16_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1866_20_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1866_22_sign\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1867_4_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1871_8_digit\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1876_12_value\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1883_18_next_digit\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "parse_hex\000std", NULL,
    {.const_idx = -func_std__parse_hex}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1918_5_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1919_5_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1920_5_sign\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1922_4_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1926_8_digit\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1936_29_value\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1943_16_next_digit\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1992_24_value\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "parse_integer\000", NULL,
    {.position = POS(1992, 3)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "to_number\000", NULL,
    {.position = POS(1998, 20)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2034_23_value\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "parse_number\000", NULL,
    {.position = POS(2034, 3)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "map_characters\000std", NULL,
    {.const_idx = -func_std__map_characters}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2061_5_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2062_5_function\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "parameter_count_of\000", NULL,
    {.position = POS(2066, 7)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2068_12_s\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2068_14_e\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2064_4_map\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2081_12_s\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2081_14_e\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "to_upper_case\000", NULL,
    {.position = POS(2096, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "map_characters\000", NULL,
    {.position = POS(2116, 3)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "to_lower_case\000", NULL,
    {.position = POS(2118, 20)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "to_title_case\000", NULL,
    {.position = POS(2140, 20)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2158_5_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2160_25_idx\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2160_29_chr\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_a_letter_character\000", NULL,
    {.position = POS(2162, 30)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "to_sentence_case\000", NULL,
    {.position = POS(2166, 20)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2184_5_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2186_25_idx\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2186_29_chr\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "to_wide\000", NULL,
    {.position = POS(2192, 20)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "delete_all\000std", NULL,
    {.const_idx = -func_std__delete_all}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2217_5_expressions\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2219_17_txt\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2233_4_new_text\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2226_14_len\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if_not\000", NULL,
    {.position = POS(2227, 13)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "replace_all\000std", NULL,
    {.const_idx = -func_std__replace_all}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2258_5_args\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2260_18_txt\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2281_4_new_text\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2267_30_replacement\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2268_14_len\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "replace_first\000std", NULL,
    {.const_idx = -func_std__replace_first}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2306_5_args\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2308_20_txt\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2328_4_new_text\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2315_30_replacement\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2316_14_len\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "update_if_not\000", NULL,
    {.position = POS(2321, 17)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "count_occurrences\000std", NULL,
    {.const_idx = -func_std__count_occurrences}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2351_5_expr\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2353_18_txt\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2353_22_count\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2358_10_n\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "split_into_lines\000std", NULL,
    {.const_idx = -func_std__split_into_lines}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2409_26_text\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2410_4_lines\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2411_4_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2412_4_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2413_4_s\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "split_into_indented_lines\000std", NULL,
    {.const_idx = -func_std__split_into_indented_lines}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2492_5_text\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2497_12_s\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2497_14_e\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2503_10_lines\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2504_10_ls\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2510_14_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2531_18_s\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2531_20_e\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2532_6_indent\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2546_16_line_text\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 1,
    "line\000std_types", std_types__line__attributes,
    {.const_idx = -tuple_2555_1}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "typed_tuple\000", NULL,
    {.position = POS(2550, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "tuple\000", NULL,
    {.position = POS(2555, 18)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "subgroups_of\000", NULL,
    {.position = POS(2556, 18)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2558_19_line\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "first\000", NULL,
    {.position = POS(2561, 8)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "split_into_groups\000std", NULL,
    {.const_idx = -func_std__split_into_groups}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2615_5_lines\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2616_5_keep_empty_lines\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2618_4_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2619_4_fv\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2623_10_indent\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "list\000", NULL,
    {.position = POS(2628, 29)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2635_12_s\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2635_14_e\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2635_16_indent\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2641_10_groups\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2642_10_minimum_indent\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2643_10_group_start\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2644_10_group_end\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2646_14_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2647_14_current_indent\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2668_24_current_indent\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2677_23_last\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2677_28_curr_idx\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2697_43_current_indent\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "wrap_words\000std", NULL,
    {.const_idx = -func_std__wrap_words}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2737_5_text\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2738_5_width\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2741_4_lines\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2742_4_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2743_4_s\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2744_4_b\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2745_4_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2755_10_chr\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "serialize\000", NULL,
    {.position = POS(2790, 20)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2808_5_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2809_5_indent\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2811_4_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2812_4_s\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2814_8_idx\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2814_12_chr\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "tabs_and_spaces\000", NULL,
    {.position = POS(2827, 19)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "to_uint8_array\000", NULL,
    {.position = POS(2830, 26)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2846_4_arr\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "uint8_array\000", NULL,
    {.position = POS(2846, 8)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "indented\000std", NULL,
    {.const_idx = -func_std__indented}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2883_5_indent\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2884_5_text\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2886_4_indented_text\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2887_4_new_indent\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2888_4_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2889_4_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2902_14_s\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "format\000std", NULL,
    {.const_idx = -func_std__format}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2973_5_template\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2974_5_arguments\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2976_4_output\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2977_4_arg_idx\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2978_4_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2979_4_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2985_10_chr\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2993_35_alignment\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2999_18_len_chr\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3004_22_width\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3012_30_fmt_chr\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3031_38_dw_chr\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3036_42_dw\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3044_50_fmt_chr\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3097_7_alignment\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3098_7_width\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3099_7_decimal_width\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3101_6_argument\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3106_10_value\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3109_14_decimals\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3137_4_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3138_4_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3139_4_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3157_10_exp\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3158_10_man\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3163_14_zeros\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "empty_collection_of\000", NULL,
    {.position = POS(3172, 20)}
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
  .feature_flags = FEAT_POSITIONS|FEAT_FUNCTION_INFO,
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
