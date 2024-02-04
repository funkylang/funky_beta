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
  func_std__join = -133,
  lambda_80 = -134,
  func_std__trim = -135,
  lambda_3_loop = -136,
  lambda_81 = -137,
  lambda_82 = -138,
  lambda_83 = -139,
  lambda_4_loop = -140,
  lambda_84 = -141,
  lambda_85 = -142,
  lambda_86 = -143,
  func_std__trim_left = -144,
  lambda_5_loop = -145,
  lambda_87 = -146,
  lambda_88 = -147,
  lambda_89 = -148,
  func_std__trim_right = -149,
  lambda_6_loop = -150,
  lambda_90 = -151,
  lambda_91 = -152,
  lambda_92 = -153,
  func_std__normalize = -154,
  lambda_7_loop = -155,
  lambda_93 = -156,
  lambda_94 = -157,
  lambda_95 = -158,
  lambda_96 = -159,
  lambda_97 = -160,
  lambda_98 = -161,
  lambda_99 = -162,
  lambda_100 = -163,
  lambda_101 = -164,
  func_std_types__octet_string___to_base64 = -165,
  lambda_8_loop = -166,
  lambda_102 = -167,
  num_4 = -168,
  lambda_103 = -169,
  lambda_104 = -170,
  lambda_105 = -171,
  string_7 = -172,
  lambda_106 = -173,
  minus_num_3 = -174,
  string_8 = -175,
  lambda_107 = -176,
  chr_61 = -177,
  func_encode = -178,
  num_16 = -179,
  lambda_108 = -180,
  num_18 = -181,
  num_0x3ffff = -182,
  num_6 = -183,
  num_25 = -184,
  value_range_1343_0 = -185,
  num_26 = -186,
  num_51 = -187,
  value_range_1346_0 = -188,
  num_52 = -189,
  num_61 = -190,
  value_range_1349_0 = -191,
  lambda_109 = -192,
  chr_65 = -193,
  lambda_110 = -194,
  chr_97 = -195,
  lambda_111 = -196,
  chr_48 = -197,
  num_62 = -198,
  lambda_112 = -199,
  chr_43 = -200,
  num_63 = -201,
  lambda_113 = -202,
  chr_47 = -203,
  lambda_114 = -204,
  func_std_types__octet_string___from_base64 = -205,
  lambda_115 = -206,
  lambda_116 = -207,
  lambda_9_loop = -208,
  lambda_117 = -209,
  lambda_118 = -210,
  lambda_119 = -211,
  lambda_120 = -212,
  lambda_121 = -213,
  lambda_122 = -214,
  num_0xff = -215,
  lambda_123 = -216,
  lambda_124 = -217,
  lambda_125 = -218,
  lambda_126 = -219,
  num_5 = -220,
  func_decode = -221,
  chr_90 = -222,
  value_range_1418_1 = -223,
  chr_122 = -224,
  value_range_1419_1 = -225,
  chr_57 = -226,
  value_range_1420_1 = -227,
  lambda_127 = -228,
  lambda_128 = -229,
  lambda_129 = -230,
  lambda_130 = -231,
  lambda_131 = -232,
  lambda_132 = -233,
  lambda_133 = -234,
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
  lambda_134 = -248,
  num_64 = -249,
  lambda_10_loop = -250,
  lambda_message_is_empty = -251,
  lambda_135 = -252,
  lambda_136 = -253,
  num_24 = -254,
  lambda_137 = -255,
  num_17 = -256,
  lambda_138 = -257,
  num_14 = -258,
  func_main_loop = -259,
  lambda_139 = -260,
  lambda_140 = -261,
  num_20 = -262,
  lambda_141 = -263,
  num_0xffffffff = -264,
  lambda_142 = -265,
  num_40 = -266,
  lambda_143 = -267,
  lambda_144 = -268,
  num_60 = -269,
  lambda_145 = -270,
  lambda_146 = -271,
  lambda_147 = -272,
  func_compute = -273,
  num_30 = -274,
  lambda_148 = -275,
  num_65 = -276,
  func_big_endian_string_64 = -277,
  num_48 = -278,
  num_32 = -279,
  func_big_endian_string_32 = -280,
  func_rol32 = -281,
  func_std__parse_integer = -282,
  func_maybe_negated = -283,
  lambda_149 = -284,
  lambda_150 = -285,
  func_partial_match = -286,
  lambda_151 = -287,
  lambda_152 = -288,
  func_exhausted = -289,
  lambda_153 = -290,
  lambda_154 = -291,
  chr_45 = -292,
  lambda_155 = -293,
  lambda_156 = -294,
  lambda_157 = -295,
  str_0b = -296,
  lambda_158 = -297,
  lambda_159 = -298,
  chr_49 = -299,
  value_range_1620_1 = -300,
  lambda_160 = -301,
  lambda_161 = -302,
  lambda_162 = -303,
  str_0o = -304,
  lambda_163 = -305,
  lambda_164 = -306,
  chr_55 = -307,
  value_range_1631_1 = -308,
  lambda_165 = -309,
  lambda_166 = -310,
  lambda_167 = -311,
  str_0x = -312,
  lambda_168 = -313,
  lambda_169 = -314,
  chr_102 = -315,
  value_range_1645_1 = -316,
  chr_70 = -317,
  value_range_1648_1 = -318,
  lambda_170 = -319,
  lambda_a__f = -320,
  lambda_A__F = -321,
  lambda_171 = -322,
  lambda_172 = -323,
  lambda_173 = -324,
  lambda_174 = -325,
  lambda_175 = -326,
  lambda_176 = -327,
  func_std__parse_number = -328,
  lambda_177 = -329,
  lambda_178 = -330,
  lambda_179 = -331,
  lambda_180 = -332,
  lambda_181 = -333,
  lambda_182 = -334,
  chr_98 = -335,
  lambda_b = -336,
  chr_111 = -337,
  lambda_o = -338,
  chr_120 = -339,
  lambda_x = -340,
  func_parse = -341,
  lambda_skip_one_ore_more_digits = -342,
  lambda_183 = -343,
  chr_101 = -344,
  chr_69 = -345,
  sequence_1727_1 = -346,
  chr_46 = -347,
  lambda_184 = -348,
  lambda_2_skip_one_ore_more_digits = -349,
  lambda_185 = -350,
  func_skip_one_ore_more_digits = -351,
  lambda_186 = -352,
  lambda_187 = -353,
  lambda_188 = -354,
  lambda_189 = -355,
  lambda_190 = -356,
  lambda_11_loop = -357,
  lambda_191 = -358,
  lambda_192 = -359,
  func_handle_exponent = -360,
  lambda_193 = -361,
  lambda_194 = -362,
  lambda_195 = -363,
  lambda_196 = -364,
  func_return_integer = -365,
  func_return_real = -366,
  func_parse_binary = -367,
  lambda_197 = -368,
  lambda_198 = -369,
  lambda_199 = -370,
  lambda_200 = -371,
  lambda_201 = -372,
  lambda_12_loop = -373,
  lambda_202 = -374,
  lambda_203 = -375,
  lambda_204 = -376,
  lambda_205 = -377,
  lambda_206 = -378,
  func_parse_octal = -379,
  lambda_207 = -380,
  lambda_208 = -381,
  lambda_209 = -382,
  lambda_210 = -383,
  lambda_211 = -384,
  lambda_13_loop = -385,
  lambda_212 = -386,
  lambda_213 = -387,
  lambda_214 = -388,
  lambda_215 = -389,
  lambda_216 = -390,
  func_std__parse_hex = -391,
  lambda_217 = -392,
  lambda_218 = -393,
  lambda_219 = -394,
  lambda_220 = -395,
  lambda_221 = -396,
  lambda_222 = -397,
  lambda_223 = -398,
  lambda_224 = -399,
  lambda_225 = -400,
  lambda_226 = -401,
  lambda_227 = -402,
  lambda_228 = -403,
  lambda_229 = -404,
  func_handle_more_digits = -405,
  lambda_14_loop = -406,
  lambda_230 = -407,
  lambda_231 = -408,
  lambda_232 = -409,
  lambda_233 = -410,
  lambda_234 = -411,
  lambda_235 = -412,
  lambda_236 = -413,
  lambda_237 = -414,
  lambda_238 = -415,
  lambda_239 = -416,
  lambda_240 = -417,
  lambda_241 = -418,
  lambda_242 = -419,
  func_std_types__string___to_integer = -420,
  lambda_243 = -421,
  lambda_244 = -422,
  func_std_types__string___to_number = -423,
  lambda_245 = -424,
  lambda_246 = -425,
  func_std__map_characters = -426,
  lambda_247 = -427,
  lambda_248 = -428,
  lambda_249 = -429,
  lambda_250 = -430,
  lambda_251 = -431,
  lambda_252 = -432,
  lambda_253 = -433,
  lambda_254 = -434,
  lambda_255 = -435,
  lambda_256 = -436,
  lambda_257 = -437,
  lambda_258 = -438,
  func_std_types__string___to_upper_case = -439,
  func_std_types__string___to_lower_case = -440,
  func_std_types__string___to_title_case = -441,
  lambda_259 = -442,
  lambda_260 = -443,
  lambda_261 = -444,
  lambda_262 = -445,
  func_std_types__string___to_sentence_case = -446,
  lambda_263 = -447,
  lambda_264 = -448,
  lambda_265 = -449,
  lambda_266 = -450,
  func_std__delete_all = -451,
  func_delete_all = -452,
  lambda_267 = -453,
  lambda_268 = -454,
  lambda_269 = -455,
  lambda_270 = -456,
  lambda_271 = -457,
  func_std__replace_all = -458,
  func_replace_all = -459,
  lambda_272 = -460,
  lambda_273 = -461,
  lambda_274 = -462,
  lambda_275 = -463,
  lambda_replacement_is_a_string = -464,
  lambda_276 = -465,
  lambda_277 = -466,
  func_std__replace_first = -467,
  func_replace_first = -468,
  lambda_278 = -469,
  lambda_279 = -470,
  lambda_280 = -471,
  lambda_281 = -472,
  lambda_282 = -473,
  lambda_283 = -474,
  func_std__count_occurrences = -475,
  func_search_next = -476,
  lambda_284 = -477,
  lambda_285 = -478,
  lambda_n_is_defined = -479,
  lambda_286 = -480,
  num_300 = -481,
  func_std__split_into_lines = -482,
  lambda_15_loop = -483,
  lambda_287 = -484,
  lambda_288 = -485,
  lambda_289 = -486,
  lambda_290 = -487,
  lambda_291 = -488,
  lambda_292 = -489,
  func_std__split_into_indented_lines = -490,
  func_split = -491,
  lambda_293 = -492,
  lambda_294 = -493,
  lambda_295 = -494,
  lambda_296 = -495,
  lambda_297 = -496,
  lambda_298 = -497,
  lambda_299 = -498,
  lambda_ls_is_defined = -499,
  lambda_300 = -500,
  lambda_301 = -501,
  lambda_302 = -502,
  lambda_303 = -503,
  lambda_16_loop = -504,
  lambda_304 = -505,
  lambda_305 = -506,
  func_create_line = -507,
  lambda_17_loop = -508,
  chr_9 = -509,
  lambda_306 = -510,
  lambda_307 = -511,
  lambda_308 = -512,
  lambda_309 = -513,
  string_9 = -514,
  lambda_310 = -515,
  lambda_311 = -516,
  num_9999 = -517,
  func_indent_of = -518,
  lambda_312 = -519,
  lambda_313 = -520,
  func_std__split_into_groups = -521,
  lambda_18_loop = -522,
  lambda_314 = -523,
  lambda_indent_is_defined = -524,
  lambda_315 = -525,
  lambda_316 = -526,
  func_2_split = -527,
  lambda_317 = -528,
  lambda_318 = -529,
  lambda_319 = -530,
  lambda_320 = -531,
  lambda_321 = -532,
  lambda_322 = -533,
  lambda_323 = -534,
  lambda_324 = -535,
  lambda_325 = -536,
  lambda_326 = -537,
  lambda_327 = -538,
  lambda_gs_is_defined = -539,
  lambda_19_loop = -540,
  lambda_328 = -541,
  lambda_329 = -542,
  lambda_330 = -543,
  lambda_331 = -544,
  lambda_332 = -545,
  lambda_333 = -546,
  lambda_334 = -547,
  lambda_335 = -548,
  func_add_groups = -549,
  lambda_336 = -550,
  lambda_337 = -551,
  lambda_338 = -552,
  lambda_339 = -553,
  func_reduce_minimum_indent_and_next = -554,
  lambda_340 = -555,
  lambda_341 = -556,
  func_start_new_fragment_and_next = -557,
  func_std__wrap_words = -558,
  lambda_20_loop = -559,
  lambda_342 = -560,
  lambda_343 = -561,
  lambda_344 = -562,
  lambda_345 = -563,
  lambda_346 = -564,
  lambda_347 = -565,
  lambda_348 = -566,
  lambda_349 = -567,
  lambda_350 = -568,
  lambda_b_is_defined = -569,
  lambda_351 = -570,
  func_std_types__string___serialize = -571,
  string_10 = -572,
  lambda_352 = -573,
  lambda_353 = -574,
  chr_126 = -575,
  lambda_354 = -576,
  chr_34 = -577,
  lambda_355 = -578,
  chr_64 = -579,
  lambda_356 = -580,
  string_11 = -581,
  string_12 = -582,
  lambda_357 = -583,
  string_13 = -584,
  lambda_358 = -585,
  lambda_359 = -586,
  func_std__indented = -587,
  lambda_21_loop = -588,
  lambda_360 = -589,
  lambda_361 = -590,
  lambda_362 = -591,
  lambda_363 = -592,
  lambda_364 = -593,
  lambda_365 = -594,
  lambda_366 = -595,
  lambda_367 = -596,
  lambda_368 = -597,
  func_skip_indent = -598,
  lambda_369 = -599,
  lambda_370 = -600,
  lambda_371 = -601,
  func_skip_spaces = -602,
  lambda_372 = -603,
  lambda_373 = -604,
  lambda_374 = -605,
  uni_LEFT = -606,
  uni_RIGHT = -607,
  uni_CENTER = -608,
  func_std__format = -609,
  lambda_22_loop = -610,
  lambda_375 = -611,
  lambda_376 = -612,
  chr_37 = -613,
  lambda_377 = -614,
  lambda_378 = -615,
  lambda_379 = -616,
  chr_108 = -617,
  lambda_l = -618,
  chr_114 = -619,
  lambda_r = -620,
  chr_99 = -621,
  lambda_c = -622,
  lambda_380 = -623,
  lambda_381 = -624,
  lambda_382 = -625,
  lambda_383 = -626,
  lambda_384 = -627,
  lambda_385 = -628,
  lambda_386 = -629,
  lambda_387 = -630,
  lambda_388 = -631,
  lambda_389 = -632,
  lambda_390 = -633,
  lambda_391 = -634,
  lambda_392 = -635,
  lambda_393 = -636,
  lambda_394 = -637,
  lambda_395 = -638,
  lambda_396 = -639,
  lambda_397 = -640,
  lambda_398 = -641,
  lambda_399 = -642,
  lambda_400 = -643,
  lambda_401 = -644,
  lambda_402 = -645,
  chr_92 = -646,
  lambda_403 = -647,
  lambda_404 = -648,
  lambda_405 = -649,
  lambda_406 = -650,
  func_add_argument = -651,
  lambda_decimal_width_is_defined = -652,
  lambda_407 = -653,
  lambda_408 = -654,
  string_14 = -655,
  string_15 = -656,
  lambda_409 = -657,
  lambda_LEFT = -658,
  lambda_RIGHT = -659,
  func_real_to_string = -660,
  lambda_23_loop = -661,
  lambda_410 = -662,
  lambda_411 = -663,
  lambda_412 = -664,
  func_2_handle_exponent = -665,
  lambda_413 = -666,
  lambda_414 = -667,
  lambda_415 = -668,
  lambda_416 = -669,
  lambda_417 = -670,
  lambda_418 = -671,
  lambda_419 = -672,
  string_16 = -673,
  lambda_420 = -674
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
  var_137_0_arguments, // dynamic
  var_is_empty, // extern
  var_append, // extern
  var_map_reduce, // extern
  var_if, // extern
  var_std__string, // initialized
  var_create_string, // extern
  var_put, // extern polymorphic
  var_dup, // extern polymorphic
  var_198_0_self, // dynamic
  var_199_0_n, // dynamic
  var_std__shift_right, // extern
  var_206_1_str, // dynamic
  var_std__times, // extern
  var_std__equal, // extern
  var_string, // extern
  var_case, // extern
  var_std__pad_left, // initialized
  var_238_0_n, // dynamic
  var_239_0_pad, // dynamic
  var_241_1_text, // dynamic
  var_242_1_len, // dynamic
  var_length_of, // extern
  var_std__less, // extern
  var_std__minus, // extern
  var_std__plus, // extern
  var_div, // extern
  var_range, // extern
  var_std__pad_right, // initialized
  var_274_0_n, // dynamic
  var_275_0_pad, // dynamic
  var_277_1_text, // dynamic
  var_278_1_len, // dynamic
  var_std__spaces, // initialized
  var_297_0_n, // dynamic
  var_std__not, // extern
  var_std__tabs_and_spaces, // initialized
  var_314_0_n, // dynamic
  var_std__bit_and, // extern
  var_spaces, // extern
  var_std__with_tabs, // initialized
  var_334_0_text, // dynamic
  var_336_1_s, // dynamic
  var_337_1_n, // dynamic
  var_338_1_i, // dynamic
  var_339_1_output, // dynamic
  var_340_1_count, // dynamic
  var_next, // extern
  var_352_1_tab_count, // dynamic
  var_std__shift_left, // extern
  var_loop, // extern
  var_std__and, // extern
  var_break, // extern
  var_match, // extern polymorphic
  var_397_0_self, // dynamic
  var_398_0_stream, // dynamic
  var_400_1_len, // dynamic
  var_undefined, // extern
  var_search, // extern polymorphic
  var_427_0_self, // dynamic
  var_428_0_stream, // dynamic
  var_429_0_nth, // dynamic
  var_431_1_i, // dynamic
  var_432_1_length, // dynamic
  var_433_1_offset, // dynamic
  var_434_1_n, // dynamic
  var_dec, // extern
  var_plus, // extern
  var_inc, // extern
  var_minus, // extern
  var_before, // extern polymorphic
  var_515_0_str, // dynamic
  var_519_8_pos, // dynamic
  var_is_defined, // extern
  var_truncate_from, // extern polymorphic
  var_565_0_str, // dynamic
  var_569_8_pos, // dynamic
  var_behind, // extern polymorphic
  var_613_0_str, // dynamic
  var_617_8_pos, // dynamic
  var_617_13_len, // dynamic
  var_truncate_until, // extern polymorphic
  var_662_0_str, // dynamic
  var_666_8_pos, // dynamic
  var_666_13_len, // dynamic
  var_from, // extern polymorphic
  var_711_0_str, // dynamic
  var_715_8_pos, // dynamic
  var_truncate_before, // extern polymorphic
  var_760_0_str, // dynamic
  var_764_8_pos, // dynamic
  var_until, // extern polymorphic
  var_808_0_str, // dynamic
  var_812_8_pos, // dynamic
  var_812_13_len, // dynamic
  var_truncate_behind, // extern polymorphic
  var_857_0_str, // dynamic
  var_861_8_pos, // dynamic
  var_861_13_len, // dynamic
  var_between, // extern polymorphic
  var_has_prefix, // extern polymorphic
  var_has_suffix, // extern polymorphic
  var_939_0_self, // dynamic
  var_940_0_suffix, // dynamic
  var_is_a_character, // extern
  var_946_1_len, // dynamic
  var_std__negate, // extern
  var_without_prefix, // extern polymorphic
  var_970_0_self, // dynamic
  var_973_1_n, // dynamic
  var_without_suffix, // extern polymorphic
  var_1000_0_self, // dynamic
  var_1001_0_suffix, // dynamic
  var_1003_1_len, // dynamic
  var_1011_1_slen, // dynamic
  var_contains, // extern polymorphic
  var_std__split, // initialized
  var_1080_0_self, // dynamic
  var_1081_0_separator, // dynamic
  var_empty_list, // extern
  var_1087_1_items, // dynamic
  var_1089_8_pos, // dynamic
  var_1089_13_len, // dynamic
  var_push, // extern
  var_std__join, // initialized
  var_1121_0_separator, // dynamic
  var_std__trim, // initialized
  var_1150_0_self, // dynamic
  var_1151_0_test, // dynamic
  var_is_a_whitespace_character, // extern
  var_1153_1_s, // dynamic
  var_1154_1_e, // dynamic
  var_std__trim_left, // initialized
  var_1190_0_self, // dynamic
  var_1191_0_test, // dynamic
  var_1193_1_s, // dynamic
  var_1194_1_e, // dynamic
  var_std__trim_right, // initialized
  var_1224_0_self, // dynamic
  var_1225_0_test, // dynamic
  var_1227_1_e, // dynamic
  var_std__normalize, // initialized
  var_1258_0_self, // dynamic
  var_1260_1_buf, // dynamic
  var_1261_1_e, // dynamic
  var_1262_1_i, // dynamic
  var_is_not_empty, // extern
  var_update_if, // extern
  var_1277_1_s, // dynamic
  var_to_base64, // extern polymorphic
  var_1309_0_str, // dynamic
  var_1311_1_base64, // dynamic
  var_1313_1_len, // dynamic
  var_to_integer, // extern polymorphic
  var_std__bit_or, // extern
  var_1332_1_bits, // dynamic
  var_1337_1_buf, // dynamic
  var_1340_1_value, // dynamic
  var_std__value_range, // extern
  var_repeat, // extern
  var_from_base64, // extern polymorphic
  var_1379_0_str, // dynamic
  var_1381_1_octets, // dynamic
  var_mod, // extern
  var_1391_1_bits, // dynamic
  var_1394_1_value, // dynamic
  var_is_undefined, // extern
  var_character, // extern
  var_from_to, // extern
  var_1415_10_chr, // dynamic
  var_sha1, // extern polymorphic
  var_1441_0_message, // dynamic
  var_1445_1_h0, // dynamic
  var_1446_1_h1, // dynamic
  var_1447_1_h2, // dynamic
  var_1448_1_h3, // dynamic
  var_1449_1_h4, // dynamic
  var_1470_1_pad_len, // dynamic
  var_1488_1_w, // dynamic
  var_uint32_array, // extern
  var_std__bit_xor, // extern
  var_1506_1_a, // dynamic
  var_1507_1_b, // dynamic
  var_1508_1_c, // dynamic
  var_1509_1_d, // dynamic
  var_1510_1_e, // dynamic
  var_1512_3_i, // dynamic
  var_cond, // extern
  var_std__parse_integer, // initialized
  var_1585_0_self, // dynamic
  var_1606_1_negate, // dynamic
  var_1612_1_value, // dynamic
  var_1593_17_idx, // dynamic
  var_1605_1_orig, // dynamic
  var_1617_3_idx, // dynamic
  var_1617_7_chr, // dynamic
  var_for_each, // extern
  var_1629_3_idx, // dynamic
  var_1629_7_chr, // dynamic
  var_1640_3_idx, // dynamic
  var_1640_7_chr, // dynamic
  var_1656_3_idx, // dynamic
  var_1656_7_chr, // dynamic
  var_std__parse_number, // initialized
  var_1692_0_self, // dynamic
  var_1694_1_i, // dynamic
  var_1695_1_n, // dynamic
  var_1700_1_sign_chr, // dynamic
  var_std__or, // extern
  var_parse_hex, // extern
  var_std__sequence, // extern
  var_1730_28_cont, // dynamic
  var_1735_1_digit, // dynamic
  var_1746_1_next_digit, // dynamic
  var_1758_1_exp_sign_chr, // dynamic
  var_integer, // extern
  var_real, // extern
  var_1766_16_str, // dynamic
  var_1766_20_i, // dynamic
  var_1767_1_n, // dynamic
  var_1771_1_digit, // dynamic
  var_1776_1_value, // dynamic
  var_1783_1_next_digit, // dynamic
  var_1790_15_str, // dynamic
  var_1790_19_i, // dynamic
  var_1791_1_n, // dynamic
  var_1795_1_digit, // dynamic
  var_1800_1_value, // dynamic
  var_1807_1_next_digit, // dynamic
  var_std__parse_hex, // initialized
  var_1842_0_str, // dynamic
  var_1843_0_i, // dynamic
  var_1845_1_n, // dynamic
  var_1849_1_digit, // dynamic
  var_1859_22_value, // dynamic
  var_1866_1_next_digit, // dynamic
  var_1915_21_value, // dynamic
  var_parse_integer, // extern
  var_to_number, // extern polymorphic
  var_1957_20_value, // dynamic
  var_parse_number, // extern
  var_std__map_characters, // initialized
  var_1984_0_self, // dynamic
  var_1985_0_function, // dynamic
  var_parameter_count_of, // extern
  var_1991_3_s, // dynamic
  var_1991_5_e, // dynamic
  var_1987_1_map, // dynamic
  var_2004_3_s, // dynamic
  var_2004_5_e, // dynamic
  var_to_upper_case, // extern polymorphic
  var_map_characters, // extern
  var_to_lower_case, // extern polymorphic
  var_to_title_case, // extern polymorphic
  var_2081_0_self, // dynamic
  var_2083_22_idx, // dynamic
  var_2083_26_chr, // dynamic
  var_is_a_letter_character, // extern
  var_to_sentence_case, // extern polymorphic
  var_2107_0_self, // dynamic
  var_2109_22_idx, // dynamic
  var_2109_26_chr, // dynamic
  var_std__delete_all, // initialized
  var_2137_0_expressions, // dynamic
  var_2139_14_txt, // dynamic
  var_2153_1_new_text, // dynamic
  var_2146_1_len, // dynamic
  var_if_not, // extern
  var_std__replace_all, // initialized
  var_2178_0_args, // dynamic
  var_2180_15_txt, // dynamic
  var_2201_1_new_text, // dynamic
  var_2187_17_replacement, // dynamic
  var_2188_1_len, // dynamic
  var_std__replace_first, // initialized
  var_2226_0_args, // dynamic
  var_2228_17_txt, // dynamic
  var_2248_1_new_text, // dynamic
  var_2235_17_replacement, // dynamic
  var_2236_1_len, // dynamic
  var_update_if_not, // extern
  var_std__count_occurrences, // initialized
  var_2271_0_expr, // dynamic
  var_2273_15_txt, // dynamic
  var_2273_19_count, // dynamic
  var_2278_1_n, // dynamic
  var_std__split_into_lines, // initialized
  var_2329_25_text, // dynamic
  var_2330_1_lines, // dynamic
  var_2331_1_i, // dynamic
  var_2332_1_n, // dynamic
  var_2333_1_s, // dynamic
  var_std__split_into_indented_lines, // initialized
  var_2412_0_text, // dynamic
  var_2417_9_s, // dynamic
  var_2417_11_e, // dynamic
  var_2423_1_lines, // dynamic
  var_2424_1_ls, // dynamic
  var_2430_3_i, // dynamic
  var_2451_15_s, // dynamic
  var_2451_17_e, // dynamic
  var_2452_1_indent, // dynamic
  var_2466_1_line_text, // dynamic
  var_tuple, // extern
  var_std__subgroups_of, // attribute with setter
  var_2477_13_line, // dynamic
  var_first, // extern
  var_std__split_into_groups, // initialized
  var_2534_0_lines, // dynamic
  var_2536_1_n, // dynamic
  var_2537_1_fv, // dynamic
  var_2541_1_indent, // dynamic
  var_2550_9_s, // dynamic
  var_2550_11_e, // dynamic
  var_2550_13_indent, // dynamic
  var_2550_20_gs, // dynamic
  var_2556_1_groups, // dynamic
  var_2557_1_minimum_indent, // dynamic
  var_2558_1_ge, // dynamic
  var_2560_3_i, // dynamic
  var_2561_1_current_indent, // dynamic
  var_2586_1_current_indent, // dynamic
  var_2599_14_l, // dynamic
  var_subgroups_of, // extern polymorphic
  var_2611_34_current_indent, // dynamic
  var_std__wrap_words, // initialized
  var_2651_0_text, // dynamic
  var_2652_0_width, // dynamic
  var_2654_1_wrapped_text, // dynamic
  var_2655_1_n, // dynamic
  var_2656_1_s, // dynamic
  var_2657_1_l, // dynamic
  var_2658_1_b, // dynamic
  var_2659_1_i, // dynamic
  var_2665_1_chr, // dynamic
  var_serialize, // extern polymorphic
  var_2727_0_self, // dynamic
  var_2728_0_indent, // dynamic
  var_2730_1_str, // dynamic
  var_2731_1_s, // dynamic
  var_2733_3_idx, // dynamic
  var_2733_7_chr, // dynamic
  var_tabs_and_spaces, // extern
  var_std__indented, // initialized
  var_2779_0_indent, // dynamic
  var_2780_0_text, // dynamic
  var_2782_1_indented_text, // dynamic
  var_2783_1_new_indent, // dynamic
  var_2784_1_i, // dynamic
  var_2785_1_n, // dynamic
  var_2798_1_s, // dynamic
  var_std__format, // initialized
  var_2868_0_template, // dynamic
  var_2869_0_arguments, // dynamic
  var_2871_1_output, // dynamic
  var_2872_1_arg_idx, // dynamic
  var_2873_1_i, // dynamic
  var_2874_1_n, // dynamic
  var_2880_1_chr, // dynamic
  var_2888_18_alignment, // dynamic
  var_2893_1_len_chr, // dynamic
  var_2898_1_width, // dynamic
  var_2906_1_fmt_chr, // dynamic
  var_2925_1_dw_chr, // dynamic
  var_2930_1_dw, // dynamic
  var_2938_1_fmt_chr, // dynamic
  var_2963_0_alignment, // dynamic
  var_2964_0_width, // dynamic
  var_2965_0_decimal_width, // dynamic
  var_2967_1_argument, // dynamic
  var_pad_left, // extern
  var_pad_right, // extern
  var_truncate, // extern
  var_2990_1_str, // dynamic
  var_2991_1_n, // dynamic
  var_2992_1_i, // dynamic
  var_3010_1_exp, // dynamic
  var_3011_1_man, // dynamic
  var_3016_1_zeros, // dynamic
  var_empty_collection_of, // extern polymorphic
  var__END
};


static TAB_NUM t_func_std_types__string___to_string[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 116_0_self
  // -> self
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(118, 3)
};

static TAB_NUM t_func_std__create_string[] = {
  1, // locals
  1, // parameters
  var_137_0_arguments,
  // is_empty
  var_is_empty, 1, var_137_0_arguments, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1, lambda_2, TAIL_CALL,
  POS(140, 15),
  POS(139, 3)
};

static TAB_NUM t_lambda_1[] = {
  0, // locals
  0, // parameters
  //  ""
  LET, 1, string_1, TAIL_CALL,
  POS(141, 7)
};

static TAB_NUM t_lambda_2[] = {
  0, // locals
  0, // parameters
  // map_reduce arguments to_string append
  var_map_reduce, 3, var_137_0_arguments, var_to_string, var_append, TAIL_CALL,
  POS(142, 7)
};

static TAB_NUM t_func_std__string[] = {
  1, // locals
  -1, // parameters
  REST_PARAMETER, LOCAL(1), // 156_0_args
  // create_string args
  var_create_string, 1, LOCAL(1), TAIL_CALL,
  POS(158, 3)
};

static TAB_NUM t_func_std_types__string___put[] = {
  4, // locals
  2, // parameters
  LOCAL(3), // 173_0_self
  LOCAL(4), // 174_0_chr
  // to_string self)
  var_to_string, 1, LOCAL(4), 1, LOCAL(1),
  // append(chr.to_string self)
  var_append, 2, LOCAL(1), LOCAL(3), 1, LOCAL(2),
  // -> append(chr.to_string self)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(176, 17),
  POS(176, 6),
  POS(176, 3)
};

static TAB_NUM t_func_std_types__string___dup[] = {
  0, // locals
  2, // parameters
  var_198_0_self,
  var_199_0_n,
  // case n
  var_case, 6, var_199_0_n, num_0, lambda_3, num_1, lambda_4, lambda_5, TAIL_CALL,
  POS(201, 3)
};

static TAB_NUM t_lambda_3[] = {
  0, // locals
  0, // parameters
  //  ""
  LET, 1, string_1, TAIL_CALL,
  POS(202, 9)
};

static TAB_NUM t_lambda_4[] = {
  0, // locals
  0, // parameters
  //  self
  LET, 1, var_198_0_self, TAIL_CALL,
  POS(203, 9)
};

static TAB_NUM t_lambda_5[] = {
  3, // locals
  0, // parameters
  // $h n >> 1 # fails if <n> is not a positive integer
  var_std__shift_right, 2, var_199_0_n, num_1, 1, LOCAL(3),
  // $str dup(self h)
  var_dup, 2, var_198_0_self, LOCAL(3), 1, var_206_1_str,
  // 2*h == n:
  var_std__times, 2, num_2, LOCAL(3), 1, LOCAL(1),
  // 2*h == n:
  var_std__equal, 2, LOCAL(1), var_199_0_n, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_6, lambda_7, TAIL_CALL,
  POS(205, 7),
  POS(206, 7),
  POS(208, 9),
  POS(208, 9),
  POS(207, 7)
};

static TAB_NUM t_lambda_6[] = {
  0, // locals
  0, // parameters
  // string str str
  var_string, 2, var_206_1_str, var_206_1_str, TAIL_CALL,
  POS(209, 11)
};

static TAB_NUM t_lambda_7[] = {
  0, // locals
  0, // parameters
  // string str str self
  var_string, 3, var_206_1_str, var_206_1_str, var_198_0_self, TAIL_CALL,
  POS(211, 11)
};

static TAB_NUM t_func_std__pad_left[] = {
  2, // locals
  -3, // parameters
  MANDATORY_PARAMETER, LOCAL(2), // 237_0_expr
  MANDATORY_PARAMETER, var_238_0_n,
  string_2, var_239_0_pad,
  // $text expr.to_string
  var_to_string, 1, LOCAL(2), 1, var_241_1_text,
  // $len length_of(text)
  var_length_of, 1, var_241_1_text, 1, var_242_1_len,
  // len < n:
  var_std__less, 2, var_242_1_len, var_238_0_n, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_8, lambda_9, TAIL_CALL,
  POS(241, 3),
  POS(242, 3),
  POS(244, 5),
  POS(243, 3)
};

static TAB_NUM t_lambda_8[] = {
  8, // locals
  0, // parameters
  // $pad_len length_of(pad)
  var_length_of, 1, var_239_0_pad, 1, LOCAL(8),
  // n-len)+(pad_len-1) .div. pad_len) 1 n-len) text
  var_std__minus, 2, var_238_0_n, var_242_1_len, 1, LOCAL(1),
  // pad_len-1) .div. pad_len) 1 n-len) text
  var_std__minus, 2, LOCAL(8), num_1, 1, LOCAL(2),
  // n-len)+(pad_len-1) .div. pad_len) 1 n-len) text
  var_std__plus, 2, LOCAL(1), LOCAL(2), 1, LOCAL(3),
  // (n-len)+(pad_len-1) .div. pad_len) 1 n-len) text
  var_div, 2, LOCAL(3), LOCAL(8), 1, LOCAL(4),
  // dup(pad (n-len)+(pad_len-1) .div. pad_len) 1 n-len) text
  var_dup, 2, var_239_0_pad, LOCAL(4), 1, LOCAL(5),
  // n-len) text
  var_std__minus, 2, var_238_0_n, var_242_1_len, 1, LOCAL(6),
  // range(dup(pad (n-len)+(pad_len-1) .div. pad_len) 1 n-len) text
  var_range, 3, LOCAL(5), num_1, LOCAL(6), 1, LOCAL(7),
  // string range(dup(pad (n-len)+(pad_len-1) .div. pad_len) 1 n-len) text
  var_string, 2, LOCAL(7), var_241_1_text, TAIL_CALL,
  POS(245, 7),
  POS(246, 29),
  POS(246, 37),
  POS(246, 29),
  POS(246, 28),
  POS(246, 20),
  POS(246, 65),
  POS(246, 14),
  POS(246, 7)
};

static TAB_NUM t_lambda_9[] = {
  0, // locals
  0, // parameters
  //  text
  LET, 1, var_241_1_text, TAIL_CALL,
  POS(247, 7)
};

static TAB_NUM t_func_std__pad_right[] = {
  2, // locals
  -3, // parameters
  MANDATORY_PARAMETER, LOCAL(2), // 273_0_expr
  MANDATORY_PARAMETER, var_274_0_n,
  string_2, var_275_0_pad,
  // $text expr.to_string
  var_to_string, 1, LOCAL(2), 1, var_277_1_text,
  // $len length_of(text)
  var_length_of, 1, var_277_1_text, 1, var_278_1_len,
  // len < n:
  var_std__less, 2, var_278_1_len, var_274_0_n, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_10, lambda_11, TAIL_CALL,
  POS(277, 3),
  POS(278, 3),
  POS(280, 5),
  POS(279, 3)
};

static TAB_NUM t_lambda_10[] = {
  8, // locals
  0, // parameters
  // $pad_len length_of(pad)
  var_length_of, 1, var_275_0_pad, 1, LOCAL(8),
  // n-len)+(pad_len-1) .div. pad_len) 1 n-len)
  var_std__minus, 2, var_274_0_n, var_278_1_len, 1, LOCAL(1),
  // pad_len-1) .div. pad_len) 1 n-len)
  var_std__minus, 2, LOCAL(8), num_1, 1, LOCAL(2),
  // n-len)+(pad_len-1) .div. pad_len) 1 n-len)
  var_std__plus, 2, LOCAL(1), LOCAL(2), 1, LOCAL(3),
  // (n-len)+(pad_len-1) .div. pad_len) 1 n-len)
  var_div, 2, LOCAL(3), LOCAL(8), 1, LOCAL(4),
  // dup(pad (n-len)+(pad_len-1) .div. pad_len) 1 n-len)
  var_dup, 2, var_275_0_pad, LOCAL(4), 1, LOCAL(5),
  // n-len)
  var_std__minus, 2, var_274_0_n, var_278_1_len, 1, LOCAL(6),
  // range(dup(pad (n-len)+(pad_len-1) .div. pad_len) 1 n-len)
  var_range, 3, LOCAL(5), num_1, LOCAL(6), 1, LOCAL(7),
  // string text range(dup(pad (n-len)+(pad_len-1) .div. pad_len) 1 n-len)
  var_string, 2, var_277_1_text, LOCAL(7), TAIL_CALL,
  POS(281, 7),
  POS(282, 34),
  POS(282, 42),
  POS(282, 34),
  POS(282, 33),
  POS(282, 25),
  POS(282, 70),
  POS(282, 19),
  POS(282, 7)
};

static TAB_NUM t_lambda_11[] = {
  0, // locals
  0, // parameters
  //  text
  LET, 1, var_277_1_text, TAIL_CALL,
  POS(283, 7)
};

static TAB_NUM t_func_std__spaces[] = {
  2, // locals
  1, // parameters
  var_297_0_n,
  // 80
  var_std__less, 2, num_80, var_297_0_n, 1, LOCAL(1),
  // 80
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_12, lambda_13, TAIL_CALL,
  POS(300, 10),
  POS(300, 10),
  POS(299, 3)
};

static TAB_NUM t_lambda_12[] = {
  1, // locals
  0, // parameters
  // range(eighty_spaces 1 n)
  var_range, 3, string_3, num_1, var_297_0_n, 1, LOCAL(1),
  //  range(eighty_spaces 1 n)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(301, 8),
  POS(301, 7)
};

static TAB_NUM t_lambda_13[] = {
  1, // locals
  0, // parameters
  // dup(" " n)
  var_dup, 2, string_2, var_297_0_n, 1, LOCAL(1),
  //  dup(" " n)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(302, 8),
  POS(302, 7)
};

static TAB_NUM t_func_std__tabs_and_spaces[] = {
  1, // locals
  1, // parameters
  var_314_0_n,
  // n < 80
  var_std__less, 2, var_314_0_n, num_80, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_14, lambda_15, TAIL_CALL,
  POS(317, 5),
  POS(316, 3)
};

static TAB_NUM t_lambda_14[] = {
  5, // locals
  0, // parameters
  // n >> 3) 9+(n & 7))
  var_std__shift_right, 2, var_314_0_n, num_3, 1, LOCAL(1),
  // 10-(n >> 3) 9+(n & 7))
  var_std__minus, 2, num_10, LOCAL(1), 1, LOCAL(2),
  // n & 7))
  var_std__bit_and, 2, var_314_0_n, num_7, 1, LOCAL(3),
  // 9+(n & 7))
  var_std__plus, 2, num_9, LOCAL(3), 1, LOCAL(4),
  // range(nine_tabs_and_seven_spaces 10-(n >> 3) 9+(n & 7))
  var_range, 3, string_4, LOCAL(2), LOCAL(4), 1, LOCAL(5),
  //  range(nine_tabs_and_seven_spaces 10-(n >> 3) 9+(n & 7))
  LET, 1, LOCAL(5), TAIL_CALL,
  POS(318, 45),
  POS(318, 41),
  POS(318, 56),
  POS(318, 53),
  POS(318, 8),
  POS(318, 7)
};

static TAB_NUM t_lambda_15[] = {
  5, // locals
  0, // parameters
  // n >> 3) spaces(n & 7))
  var_std__shift_right, 2, var_314_0_n, num_3, 1, LOCAL(1),
  // dup("@ht;" n >> 3) spaces(n & 7))
  var_dup, 2, string_5, LOCAL(1), 1, LOCAL(2),
  // n & 7))
  var_std__bit_and, 2, var_314_0_n, num_7, 1, LOCAL(3),
  // spaces(n & 7))
  var_spaces, 1, LOCAL(3), 1, LOCAL(4),
  // string(dup("@ht;" n >> 3) spaces(n & 7))
  var_string, 2, LOCAL(2), LOCAL(4), 1, LOCAL(5),
  //  string(dup("@ht;" n >> 3) spaces(n & 7))
  LET, 1, LOCAL(5), TAIL_CALL,
  POS(319, 26),
  POS(319, 15),
  POS(319, 41),
  POS(319, 34),
  POS(319, 8),
  POS(319, 7)
};

static TAB_NUM t_func_std__with_tabs[] = {
  0, // locals
  1, // parameters
  var_334_0_text,
  // $s 1
  LET, 1, num_1, 1, var_336_1_s,
  // $n length_of(text)
  var_length_of, 1, var_334_0_text, 1, var_337_1_n,
  // $i 1
  LET, 1, num_1, 1, var_338_1_i,
  // $output ""
  LET, 1, string_1, 1, var_339_1_output,
  // $count 0
  LET, 1, num_0, 1, var_340_1_count,
  // loop:
  var_loop, 1, lambda_loop, TAIL_CALL,
  POS(336, 3),
  POS(337, 3),
  POS(338, 3),
  POS(339, 3),
  POS(340, 3),
  POS(341, 3)
};

static TAB_NUM t_lambda_loop[] = {
  2, // locals
  0, // parameters
  // n:
  var_std__less, 2, var_337_1_n, var_338_1_i, 1, LOCAL(1),
  // n:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_16, lambda_23, TAIL_CALL,
  POS(343, 12),
  POS(343, 12),
  POS(342, 5)
};

static TAB_NUM t_lambda_16[] = {
  2, // locals
  0, // parameters
  // text(i) == ' ':
  var_334_0_text, 1, var_338_1_i, 1, LOCAL(1),
  // text(i) == ' ':
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_17, lambda_18, TAIL_CALL,
  POS(345, 11),
  POS(345, 11),
  POS(344, 9)
};

static TAB_NUM t_lambda_17[] = {
  0, // locals
  0, // parameters
  // !i i+1
  var_std__plus, 2, var_338_1_i, num_1, 1, var_338_1_i,
  // !count count+1
  var_std__plus, 2, var_340_1_count, num_1, 1, var_340_1_count,
  // next
  var_next, 0, TAIL_CALL,
  POS(346, 13),
  POS(347, 13),
  POS(348, 13)
};

static TAB_NUM t_lambda_18[] = {
  2, // locals
  0, // parameters
  // count >= 8:
  var_std__less, 2, var_340_1_count, num_8, 1, LOCAL(1),
  // count >= 8:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_19, func_skip_line, TAIL_CALL,
  POS(351, 15),
  POS(351, 15),
  POS(350, 13)
};

static TAB_NUM t_lambda_19[] = {
  2, // locals
  0, // parameters
  // $tab_count count >> 3
  var_std__shift_right, 2, var_340_1_count, num_3, 1, var_352_1_tab_count,
  // tab_count >= 1:
  var_std__less, 2, var_352_1_tab_count, num_1, 1, LOCAL(1),
  // tab_count >= 1:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_20, func_skip_line, TAIL_CALL,
  POS(352, 17),
  POS(354, 19),
  POS(354, 19),
  POS(353, 17)
};

static TAB_NUM t_lambda_20[] = {
  3, // locals
  0, // parameters
  // count+1))
  var_std__plus, 2, var_340_1_count, num_1, 1, LOCAL(1),
  // i-(count+1))
  var_std__minus, 2, var_338_1_i, LOCAL(1), 1, LOCAL(2),
  // range(text s i-(count+1))
  var_range, 3, var_334_0_text, var_336_1_s, LOCAL(2), 1, LOCAL(3),
  // append &output range(text s i-(count+1))
  var_append, 2, var_339_1_output, LOCAL(3), 1, var_339_1_output,
  // tab_count < 10
  var_std__less, 2, var_352_1_tab_count, num_10, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_21, lambda_22, 1, LOCAL(2),
  // append &output
  var_append, 2, var_339_1_output, LOCAL(2), 1, var_339_1_output,
  // i-count)+(tab_count << 3)
  var_std__minus, 2, var_338_1_i, var_340_1_count, 1, LOCAL(1),
  // tab_count << 3)
  var_std__shift_left, 2, var_352_1_tab_count, num_3, 1, LOCAL(2),
  // !s (i-count)+(tab_count << 3)
  var_std__plus, 2, LOCAL(1), LOCAL(2), 1, var_336_1_s,
  // skip_line
  func_skip_line, 0, TAIL_CALL,
  POS(355, 52),
  POS(355, 49),
  POS(355, 36),
  POS(355, 21),
  POS(358, 25),
  POS(357, 23),
  POS(356, 21),
  POS(361, 25),
  POS(361, 35),
  POS(361, 21),
  POS(362, 21)
};

static TAB_NUM t_lambda_21[] = {
  1, // locals
  0, // parameters
  // range(tabs 1 tab_count)
  var_range, 3, string_6, num_1, var_352_1_tab_count, 1, LOCAL(1),
  //  range(tabs 1 tab_count)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(359, 28),
  POS(359, 27)
};

static TAB_NUM t_lambda_22[] = {
  1, // locals
  0, // parameters
  // dup("@ht;" tab_count)
  var_dup, 2, string_5, var_352_1_tab_count, 1, LOCAL(1),
  //  dup("@ht;" tab_count)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(360, 28),
  POS(360, 27)
};

static TAB_NUM t_lambda_23[] = {
  1, // locals
  0, // parameters
  // s == 1
  var_std__equal, 2, var_336_1_s, num_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_24, lambda_25, TAIL_CALL,
  POS(367, 11),
  POS(366, 9)
};

static TAB_NUM t_lambda_24[] = {
  0, // locals
  0, // parameters
  //  text
  LET, 1, var_334_0_text, TAIL_CALL,
  POS(368, 13)
};

static TAB_NUM t_lambda_25[] = {
  2, // locals
  0, // parameters
  // range(text s -1))
  var_range, 3, var_334_0_text, var_336_1_s, minus_num_1, 1, LOCAL(1),
  // append(output range(text s -1))
  var_append, 2, var_339_1_output, LOCAL(1), 1, LOCAL(2),
  //  append(output range(text s -1))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(369, 28),
  POS(369, 14),
  POS(369, 13)
};

static TAB_NUM t_func_skip_line[] = {
  0, // locals
  0, // parameters
  // loop
  var_loop, 2, lambda_26, lambda_29, TAIL_CALL,
  POS(372, 5)
};

static TAB_NUM t_lambda_26[] = {
  3, // locals
  0, // parameters
  // n && text(i) != '@nl;':
  var_std__less, 2, var_337_1_n, var_338_1_i, 1, LOCAL(1),
  // n && text(i) != '@nl;':
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // n && text(i) != '@nl;':
  var_std__and, 2, LOCAL(2), lambda_27, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_28, var_break, TAIL_CALL,
  POS(375, 16),
  POS(375, 16),
  POS(375, 16),
  POS(374, 9)
};

static TAB_NUM t_lambda_27[] = {
  3, // locals
  0, // parameters
  // text(i) != '@nl;':
  var_334_0_text, 1, var_338_1_i, 1, LOCAL(1),
  // text(i) != '@nl;':
  var_std__equal, 2, LOCAL(1), chr_10, 1, LOCAL(2),
  // text(i) != '@nl;':
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(i) != '@nl;':
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(375, 21),
  POS(375, 21),
  POS(375, 21),
  POS(375, 21)
};

static TAB_NUM t_lambda_28[] = {
  0, // locals
  0, // parameters
  // !i i+1
  var_std__plus, 2, var_338_1_i, num_1, 1, var_338_1_i,
  // next
  var_next, 0, TAIL_CALL,
  POS(376, 13),
  POS(377, 13)
};

static TAB_NUM t_lambda_29[] = {
  0, // locals
  0, // parameters
  // !i i+1
  var_std__plus, 2, var_338_1_i, num_1, 1, var_338_1_i,
  // !count 0
  LET, 1, num_0, 1, var_340_1_count,
  // next
  var_next, 0, TAIL_CALL,
  POS(380, 9),
  POS(381, 9),
  POS(382, 9)
};

static TAB_NUM t_func_std_types__string___match[] = {
  3, // locals
  2, // parameters
  var_397_0_self,
  var_398_0_stream,
  // $len length_of(self)
  var_length_of, 1, var_397_0_self, 1, var_400_1_len,
  // length_of(stream) >= len
  var_length_of, 1, var_398_0_stream, 1, LOCAL(1),
  // length_of(stream) >= len
  var_std__less, 2, LOCAL(1), var_400_1_len, 1, LOCAL(2),
  // length_of(stream) >= len
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_30, lambda_33, TAIL_CALL,
  POS(400, 3),
  POS(402, 5),
  POS(402, 5),
  POS(402, 5),
  POS(401, 3)
};

static TAB_NUM t_lambda_30[] = {
  2, // locals
  0, // parameters
  // range(stream 1 len) == self
  var_range, 3, var_398_0_stream, num_1, var_400_1_len, 1, LOCAL(1),
  // range(stream 1 len) == self
  var_std__equal, 2, LOCAL(1), var_397_0_self, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_31, lambda_32, TAIL_CALL,
  POS(405, 9),
  POS(405, 9),
  POS(404, 7)
};

static TAB_NUM t_lambda_31[] = {
  0, // locals
  0, // parameters
  //  len
  LET, 1, var_400_1_len, TAIL_CALL,
  POS(406, 11)
};

static TAB_NUM t_lambda_32[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(407, 11)
};

static TAB_NUM t_lambda_33[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(408, 7)
};

static TAB_NUM t_func_std_types__string___search[] = {
  1, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_427_0_self,
  MANDATORY_PARAMETER, var_428_0_stream,
  num_1, var_429_0_nth,
  // $i undefined
  LET, 1, var_undefined, 1, var_431_1_i,
  // $length length_of(self)
  var_length_of, 1, var_427_0_self, 1, var_432_1_length,
  // $offset length-1
  var_std__minus, 2, var_432_1_length, num_1, 1, var_433_1_offset,
  // length_of(stream)-offset
  var_length_of, 1, var_428_0_stream, 1, LOCAL(1),
  // $n length_of(stream)-offset
  var_std__minus, 2, LOCAL(1), var_433_1_offset, 1, var_434_1_n,
  // nth < 0:
  var_std__less, 2, var_429_0_nth, num_0, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_34, lambda_35, TAIL_CALL,
  POS(431, 3),
  POS(432, 3),
  POS(433, 3),
  POS(434, 6),
  POS(434, 3),
  POS(436, 5),
  POS(435, 3)
};

static TAB_NUM t_lambda_34[] = {
  0, // locals
  0, // parameters
  // !i n
  LET, 1, var_434_1_n, 1, var_431_1_i,
  // search_backwards
  func_search_backwards, 0, TAIL_CALL,
  POS(437, 7),
  POS(438, 7)
};

static TAB_NUM t_lambda_35[] = {
  0, // locals
  0, // parameters
  // !i 1
  LET, 1, num_1, 1, var_431_1_i,
  // search_forwards
  func_search_forwards, 0, TAIL_CALL,
  POS(440, 7),
  POS(441, 7)
};

static TAB_NUM t_func_search_forwards[] = {
  2, // locals
  0, // parameters
  // n
  var_std__less, 2, var_434_1_n, var_431_1_i, 1, LOCAL(1),
  // n
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_36, lambda_41, TAIL_CALL,
  POS(445, 12),
  POS(445, 12),
  POS(444, 5)
};

static TAB_NUM t_lambda_36[] = {
  3, // locals
  0, // parameters
  // i+offset) == self:
  var_std__plus, 2, var_431_1_i, var_433_1_offset, 1, LOCAL(1),
  // range(stream i i+offset) == self:
  var_range, 3, var_428_0_stream, var_431_1_i, LOCAL(1), 1, LOCAL(2),
  // range(stream i i+offset) == self:
  var_std__equal, 2, LOCAL(2), var_427_0_self, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_37, lambda_40, TAIL_CALL,
  POS(448, 26),
  POS(448, 11),
  POS(448, 11),
  POS(447, 9)
};

static TAB_NUM t_lambda_37[] = {
  1, // locals
  0, // parameters
  // 1:
  var_std__less, 2, num_1, var_429_0_nth, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_38, lambda_39, TAIL_CALL,
  POS(450, 21),
  POS(449, 13)
};

static TAB_NUM t_lambda_38[] = {
  0, // locals
  0, // parameters
  // dec &nth
  var_dec, 1, var_429_0_nth, 1, var_429_0_nth,
  // plus &i length
  var_plus, 2, var_431_1_i, var_432_1_length, 1, var_431_1_i,
  // search_forwards
  func_search_forwards, 0, TAIL_CALL,
  POS(451, 17),
  POS(452, 17),
  POS(453, 17)
};

static TAB_NUM t_lambda_39[] = {
  0, // locals
  0, // parameters
  //  i length
  LET, 2, var_431_1_i, var_432_1_length, TAIL_CALL,
  POS(454, 17)
};

static TAB_NUM t_lambda_40[] = {
  0, // locals
  0, // parameters
  // inc &i
  var_inc, 1, var_431_1_i, 1, var_431_1_i,
  // search_forwards
  func_search_forwards, 0, TAIL_CALL,
  POS(456, 13),
  POS(457, 13)
};

static TAB_NUM t_lambda_41[] = {
  0, // locals
  0, // parameters
  //  undefined undefined
  LET, 2, var_undefined, var_undefined, TAIL_CALL,
  POS(458, 9)
};

static TAB_NUM t_func_search_backwards[] = {
  2, // locals
  0, // parameters
  // i >= 1
  var_std__less, 2, var_431_1_i, num_1, 1, LOCAL(1),
  // i >= 1
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_42, lambda_47, TAIL_CALL,
  POS(462, 7),
  POS(462, 7),
  POS(461, 5)
};

static TAB_NUM t_lambda_42[] = {
  3, // locals
  0, // parameters
  // i+offset) == self:
  var_std__plus, 2, var_431_1_i, var_433_1_offset, 1, LOCAL(1),
  // range(stream i i+offset) == self:
  var_range, 3, var_428_0_stream, var_431_1_i, LOCAL(1), 1, LOCAL(2),
  // range(stream i i+offset) == self:
  var_std__equal, 2, LOCAL(2), var_427_0_self, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_43, lambda_46, TAIL_CALL,
  POS(465, 26),
  POS(465, 11),
  POS(465, 11),
  POS(464, 9)
};

static TAB_NUM t_lambda_43[] = {
  1, // locals
  0, // parameters
  // nth < -1:
  var_std__less, 2, var_429_0_nth, minus_num_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_44, lambda_45, TAIL_CALL,
  POS(467, 15),
  POS(466, 13)
};

static TAB_NUM t_lambda_44[] = {
  0, // locals
  0, // parameters
  // inc &nth
  var_inc, 1, var_429_0_nth, 1, var_429_0_nth,
  // minus &i length
  var_minus, 2, var_431_1_i, var_432_1_length, 1, var_431_1_i,
  // search_backwards
  func_search_backwards, 0, TAIL_CALL,
  POS(468, 17),
  POS(469, 17),
  POS(470, 17)
};

static TAB_NUM t_lambda_45[] = {
  0, // locals
  0, // parameters
  //  i length
  LET, 2, var_431_1_i, var_432_1_length, TAIL_CALL,
  POS(471, 17)
};

static TAB_NUM t_lambda_46[] = {
  0, // locals
  0, // parameters
  // dec &i
  var_dec, 1, var_431_1_i, 1, var_431_1_i,
  // search_backwards
  func_search_backwards, 0, TAIL_CALL,
  POS(473, 13),
  POS(474, 13)
};

static TAB_NUM t_lambda_47[] = {
  0, // locals
  0, // parameters
  //  undefined undefined
  LET, 2, var_undefined, var_undefined, TAIL_CALL,
  POS(475, 9)
};

static TAB_NUM t_func_std_types__string___before[] = {
  3, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_515_0_str,
  MANDATORY_PARAMETER, LOCAL(2), // 516_0_expr
  num_1, LOCAL(3), // 517_0_nth
  // search $pos $_len expr str nth
  var_search, 3, LOCAL(2), var_515_0_str, LOCAL(3), 2, var_519_8_pos, LOCAL(1),
  // is_defined
  var_is_defined, 1, var_519_8_pos, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_48, lambda_49, TAIL_CALL,
  POS(519, 3),
  POS(521, 9),
  POS(520, 3)
};

static TAB_NUM t_lambda_48[] = {
  2, // locals
  0, // parameters
  // pos-1)
  var_std__minus, 2, var_519_8_pos, num_1, 1, LOCAL(1),
  // range(str 1 pos-1)
  var_range, 3, var_515_0_str, num_1, LOCAL(1), 1, LOCAL(2),
  //  range(str 1 pos-1)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(522, 20),
  POS(522, 8),
  POS(522, 7)
};

static TAB_NUM t_lambda_49[] = {
  0, // locals
  0, // parameters
  //  ""
  LET, 1, string_1, TAIL_CALL,
  POS(523, 7)
};

static TAB_NUM t_func_std_types__string___truncate_from[] = {
  3, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_565_0_str,
  MANDATORY_PARAMETER, LOCAL(2), // 566_0_expr
  num_1, LOCAL(3), // 567_0_nth
  // search $pos $_len expr str nth
  var_search, 3, LOCAL(2), var_565_0_str, LOCAL(3), 2, var_569_8_pos, LOCAL(1),
  // is_defined
  var_is_defined, 1, var_569_8_pos, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_50, lambda_51, TAIL_CALL,
  POS(569, 3),
  POS(571, 9),
  POS(570, 3)
};

static TAB_NUM t_lambda_50[] = {
  2, // locals
  0, // parameters
  // pos-1)
  var_std__minus, 2, var_569_8_pos, num_1, 1, LOCAL(1),
  // range(str 1 pos-1)
  var_range, 3, var_565_0_str, num_1, LOCAL(1), 1, LOCAL(2),
  //  range(str 1 pos-1)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(572, 20),
  POS(572, 8),
  POS(572, 7)
};

static TAB_NUM t_lambda_51[] = {
  0, // locals
  0, // parameters
  //  str
  LET, 1, var_565_0_str, TAIL_CALL,
  POS(573, 7)
};

static TAB_NUM t_func_std_types__string___behind[] = {
  3, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_613_0_str,
  MANDATORY_PARAMETER, LOCAL(2), // 614_0_expr
  num_1, LOCAL(3), // 615_0_nth
  // search $pos $len expr str nth
  var_search, 3, LOCAL(2), var_613_0_str, LOCAL(3), 2, var_617_8_pos, var_617_13_len,
  // is_defined
  var_is_defined, 1, var_617_8_pos, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_52, lambda_53, TAIL_CALL,
  POS(617, 3),
  POS(619, 9),
  POS(618, 3)
};

static TAB_NUM t_lambda_52[] = {
  2, // locals
  0, // parameters
  // pos+len -1)
  var_std__plus, 2, var_617_8_pos, var_617_13_len, 1, LOCAL(1),
  // range(str pos+len -1)
  var_range, 3, var_613_0_str, LOCAL(1), minus_num_1, 1, LOCAL(2),
  //  range(str pos+len -1)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(620, 18),
  POS(620, 8),
  POS(620, 7)
};

static TAB_NUM t_lambda_53[] = {
  0, // locals
  0, // parameters
  //  ""
  LET, 1, string_1, TAIL_CALL,
  POS(621, 7)
};

static TAB_NUM t_func_std_types__string___truncate_until[] = {
  3, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_662_0_str,
  MANDATORY_PARAMETER, LOCAL(2), // 663_0_expr
  num_1, LOCAL(3), // 664_0_nth
  // search $pos $len expr str nth
  var_search, 3, LOCAL(2), var_662_0_str, LOCAL(3), 2, var_666_8_pos, var_666_13_len,
  // is_defined
  var_is_defined, 1, var_666_8_pos, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_54, lambda_55, TAIL_CALL,
  POS(666, 3),
  POS(668, 9),
  POS(667, 3)
};

static TAB_NUM t_lambda_54[] = {
  2, // locals
  0, // parameters
  // pos+len -1)
  var_std__plus, 2, var_666_8_pos, var_666_13_len, 1, LOCAL(1),
  // range(str pos+len -1)
  var_range, 3, var_662_0_str, LOCAL(1), minus_num_1, 1, LOCAL(2),
  //  range(str pos+len -1)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(669, 18),
  POS(669, 8),
  POS(669, 7)
};

static TAB_NUM t_lambda_55[] = {
  0, // locals
  0, // parameters
  //  str
  LET, 1, var_662_0_str, TAIL_CALL,
  POS(670, 7)
};

static TAB_NUM t_func_std_types__string___from[] = {
  3, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_711_0_str,
  MANDATORY_PARAMETER, LOCAL(2), // 712_0_expr
  num_1, LOCAL(3), // 713_0_nth
  // search $pos $_len expr str nth
  var_search, 3, LOCAL(2), var_711_0_str, LOCAL(3), 2, var_715_8_pos, LOCAL(1),
  // is_defined
  var_is_defined, 1, var_715_8_pos, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_56, lambda_57, TAIL_CALL,
  POS(715, 3),
  POS(717, 9),
  POS(716, 3)
};

static TAB_NUM t_lambda_56[] = {
  1, // locals
  0, // parameters
  // range(str pos -1)
  var_range, 3, var_711_0_str, var_715_8_pos, minus_num_1, 1, LOCAL(1),
  //  range(str pos -1)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(718, 8),
  POS(718, 7)
};

static TAB_NUM t_lambda_57[] = {
  0, // locals
  0, // parameters
  //  ""
  LET, 1, string_1, TAIL_CALL,
  POS(719, 7)
};

static TAB_NUM t_func_std_types__string___truncate_before[] = {
  3, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_760_0_str,
  MANDATORY_PARAMETER, LOCAL(2), // 761_0_expr
  num_1, LOCAL(3), // 762_0_nth
  // search $pos $_len expr str nth
  var_search, 3, LOCAL(2), var_760_0_str, LOCAL(3), 2, var_764_8_pos, LOCAL(1),
  // is_defined
  var_is_defined, 1, var_764_8_pos, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_58, lambda_59, TAIL_CALL,
  POS(764, 3),
  POS(766, 9),
  POS(765, 3)
};

static TAB_NUM t_lambda_58[] = {
  1, // locals
  0, // parameters
  // range(str pos -1)
  var_range, 3, var_760_0_str, var_764_8_pos, minus_num_1, 1, LOCAL(1),
  //  range(str pos -1)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(767, 8),
  POS(767, 7)
};

static TAB_NUM t_lambda_59[] = {
  0, // locals
  0, // parameters
  //  str
  LET, 1, var_760_0_str, TAIL_CALL,
  POS(768, 7)
};

static TAB_NUM t_func_std_types__string___until[] = {
  3, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_808_0_str,
  MANDATORY_PARAMETER, LOCAL(2), // 809_0_expr
  num_1, LOCAL(3), // 810_0_nth
  // search $pos $len expr str nth
  var_search, 3, LOCAL(2), var_808_0_str, LOCAL(3), 2, var_812_8_pos, var_812_13_len,
  // is_defined
  var_is_defined, 1, var_812_8_pos, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_60, lambda_61, TAIL_CALL,
  POS(812, 3),
  POS(814, 9),
  POS(813, 3)
};

static TAB_NUM t_lambda_60[] = {
  3, // locals
  0, // parameters
  // pos+len-1)
  var_std__plus, 2, var_812_8_pos, var_812_13_len, 1, LOCAL(1),
  // pos+len-1)
  var_std__minus, 2, LOCAL(1), num_1, 1, LOCAL(2),
  // range(str 1 pos+len-1)
  var_range, 3, var_808_0_str, num_1, LOCAL(2), 1, LOCAL(3),
  //  range(str 1 pos+len-1)
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(815, 20),
  POS(815, 20),
  POS(815, 8),
  POS(815, 7)
};

static TAB_NUM t_lambda_61[] = {
  0, // locals
  0, // parameters
  //  ""
  LET, 1, string_1, TAIL_CALL,
  POS(816, 7)
};

static TAB_NUM t_func_std_types__string___truncate_behind[] = {
  3, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_857_0_str,
  MANDATORY_PARAMETER, LOCAL(2), // 858_0_expr
  num_1, LOCAL(3), // 859_0_nth
  // search $pos $len expr str nth
  var_search, 3, LOCAL(2), var_857_0_str, LOCAL(3), 2, var_861_8_pos, var_861_13_len,
  // is_defined
  var_is_defined, 1, var_861_8_pos, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_62, lambda_63, TAIL_CALL,
  POS(861, 3),
  POS(863, 9),
  POS(862, 3)
};

static TAB_NUM t_lambda_62[] = {
  3, // locals
  0, // parameters
  // pos+len-1)
  var_std__plus, 2, var_861_8_pos, var_861_13_len, 1, LOCAL(1),
  // pos+len-1)
  var_std__minus, 2, LOCAL(1), num_1, 1, LOCAL(2),
  // range(str 1 pos+len-1)
  var_range, 3, var_857_0_str, num_1, LOCAL(2), 1, LOCAL(3),
  //  range(str 1 pos+len-1)
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(864, 20),
  POS(864, 20),
  POS(864, 8),
  POS(864, 7)
};

static TAB_NUM t_lambda_63[] = {
  0, // locals
  0, // parameters
  //  str
  LET, 1, var_857_0_str, TAIL_CALL,
  POS(865, 7)
};

static TAB_NUM t_func_std_types__string___between[] = {
  6, // locals
  -4, // parameters
  MANDATORY_PARAMETER, LOCAL(3), // 893_0_str
  MANDATORY_PARAMETER, LOCAL(4), // 894_0_expr_1
  MANDATORY_PARAMETER, LOCAL(5), // 895_0_expr_2
  num_1, LOCAL(6), // 896_0_nth
  // behind(str expr_1 nth) .before. expr_2
  var_behind, 3, LOCAL(3), LOCAL(4), LOCAL(6), 1, LOCAL(1),
  // behind(str expr_1 nth) .before. expr_2
  var_before, 2, LOCAL(1), LOCAL(5), 1, LOCAL(2),
  // -> behind(str expr_1 nth) .before. expr_2
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(898, 6),
  POS(898, 6),
  POS(898, 3)
};

static TAB_NUM t_func_std_types__string___has_prefix[] = {
  4, // locals
  2, // parameters
  LOCAL(3), // 917_0_self
  LOCAL(4), // 918_0_prefix
  // match(prefix self).is_defined
  var_match, 2, LOCAL(4), LOCAL(3), 1, LOCAL(1),
  // is_defined
  var_is_defined, 1, LOCAL(1), 1, LOCAL(2),
  // -> match(prefix self).is_defined
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(920, 6),
  POS(920, 25),
  POS(920, 3)
};

static TAB_NUM t_func_std_types__string___has_suffix[] = {
  1, // locals
  2, // parameters
  var_939_0_self,
  var_940_0_suffix,
  // is_a_character
  var_is_a_character, 1, var_940_0_suffix, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_64, lambda_66, TAIL_CALL,
  POS(943, 12),
  POS(942, 3)
};

static TAB_NUM t_lambda_64[] = {
  4, // locals
  0, // parameters
  // length_of(self) >= 1 && self(-1) == suffix
  var_length_of, 1, var_939_0_self, 1, LOCAL(1),
  // length_of(self) >= 1 && self(-1) == suffix
  var_std__less, 2, LOCAL(1), num_1, 1, LOCAL(2),
  // length_of(self) >= 1 && self(-1) == suffix
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // length_of(self) >= 1 && self(-1) == suffix
  var_std__and, 2, LOCAL(3), lambda_65, 1, LOCAL(4),
  //  length_of(self) >= 1 && self(-1) == suffix
  LET, 1, LOCAL(4), TAIL_CALL,
  POS(944, 8),
  POS(944, 8),
  POS(944, 8),
  POS(944, 8),
  POS(944, 7)
};

static TAB_NUM t_lambda_65[] = {
  2, // locals
  0, // parameters
  // self(-1) == suffix
  var_939_0_self, 1, minus_num_1, 1, LOCAL(1),
  // self(-1) == suffix
  var_std__equal, 2, LOCAL(1), var_940_0_suffix, 1, LOCAL(2),
  // self(-1) == suffix
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(944, 32),
  POS(944, 32),
  POS(944, 32)
};

static TAB_NUM t_lambda_66[] = {
  4, // locals
  0, // parameters
  // $len length_of(suffix)
  var_length_of, 1, var_940_0_suffix, 1, var_946_1_len,
  // length_of(self) >= len && range(self -len -1) == suffix
  var_length_of, 1, var_939_0_self, 1, LOCAL(1),
  // length_of(self) >= len && range(self -len -1) == suffix
  var_std__less, 2, LOCAL(1), var_946_1_len, 1, LOCAL(2),
  // length_of(self) >= len && range(self -len -1) == suffix
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // length_of(self) >= len && range(self -len -1) == suffix
  var_std__and, 2, LOCAL(3), lambda_67, 1, LOCAL(4),
  // -> length_of(self) >= len && range(self -len -1) == suffix
  LET, 1, LOCAL(4), TAIL_CALL,
  POS(946, 7),
  POS(947, 10),
  POS(947, 10),
  POS(947, 10),
  POS(947, 10),
  POS(947, 7)
};

static TAB_NUM t_lambda_67[] = {
  3, // locals
  0, // parameters
  // len -1) == suffix
  var_std__negate, 1, var_946_1_len, 1, LOCAL(1),
  // range(self -len -1) == suffix
  var_range, 3, var_939_0_self, LOCAL(1), minus_num_1, 1, LOCAL(2),
  // range(self -len -1) == suffix
  var_std__equal, 2, LOCAL(2), var_940_0_suffix, 1, LOCAL(3),
  // range(self -len -1) == suffix
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(947, 48),
  POS(947, 36),
  POS(947, 36),
  POS(947, 36)
};

static TAB_NUM t_func_std_types__string___without_prefix[] = {
  2, // locals
  2, // parameters
  var_970_0_self,
  LOCAL(2), // 971_0_prefix
  // $n match(prefix self)
  var_match, 2, LOCAL(2), var_970_0_self, 1, var_973_1_n,
  // is_defined
  var_is_defined, 1, var_973_1_n, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_68, lambda_69, TAIL_CALL,
  POS(973, 3),
  POS(975, 7),
  POS(974, 3)
};

static TAB_NUM t_lambda_68[] = {
  2, // locals
  0, // parameters
  // n+1 -1)
  var_std__plus, 2, var_973_1_n, num_1, 1, LOCAL(1),
  // range(self n+1 -1)
  var_range, 3, var_970_0_self, LOCAL(1), minus_num_1, 1, LOCAL(2),
  //  range(self n+1 -1)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(976, 19),
  POS(976, 8),
  POS(976, 7)
};

static TAB_NUM t_lambda_69[] = {
  0, // locals
  0, // parameters
  //  self
  LET, 1, var_970_0_self, TAIL_CALL,
  POS(977, 7)
};

static TAB_NUM t_func_std_types__string___without_suffix[] = {
  1, // locals
  2, // parameters
  var_1000_0_self,
  var_1001_0_suffix,
  // $len length_of(self)
  var_length_of, 1, var_1000_0_self, 1, var_1003_1_len,
  // is_a_character:
  var_is_a_character, 1, var_1001_0_suffix, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_suffix_is_a_character, lambda_73, TAIL_CALL,
  POS(1003, 3),
  POS(1005, 12),
  POS(1004, 3)
};

static TAB_NUM t_lambda_suffix_is_a_character[] = {
  3, // locals
  0, // parameters
  // len >= 1 && self(-1) == suffix
  var_std__less, 2, var_1003_1_len, num_1, 1, LOCAL(1),
  // len >= 1 && self(-1) == suffix
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // len >= 1 && self(-1) == suffix
  var_std__and, 2, LOCAL(2), lambda_70, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_71, lambda_72, TAIL_CALL,
  POS(1007, 9),
  POS(1007, 9),
  POS(1007, 9),
  POS(1006, 7)
};

static TAB_NUM t_lambda_70[] = {
  2, // locals
  0, // parameters
  // self(-1) == suffix
  var_1000_0_self, 1, minus_num_1, 1, LOCAL(1),
  // self(-1) == suffix
  var_std__equal, 2, LOCAL(1), var_1001_0_suffix, 1, LOCAL(2),
  // self(-1) == suffix
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1007, 21),
  POS(1007, 21),
  POS(1007, 21)
};

static TAB_NUM t_lambda_71[] = {
  1, // locals
  0, // parameters
  // range(self 1 -2)
  var_range, 3, var_1000_0_self, num_1, minus_num_2, 1, LOCAL(1),
  //  range(self 1 -2)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1008, 12),
  POS(1008, 11)
};

static TAB_NUM t_lambda_72[] = {
  0, // locals
  0, // parameters
  //  self
  LET, 1, var_1000_0_self, TAIL_CALL,
  POS(1009, 11)
};

static TAB_NUM t_lambda_73[] = {
  3, // locals
  0, // parameters
  // $slen length_of(suffix)
  var_length_of, 1, var_1001_0_suffix, 1, var_1011_1_slen,
  // len >= slen && range(self -slen -1) == suffix
  var_std__less, 2, var_1003_1_len, var_1011_1_slen, 1, LOCAL(1),
  // len >= slen && range(self -slen -1) == suffix
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // len >= slen && range(self -slen -1) == suffix
  var_std__and, 2, LOCAL(2), lambda_74, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_75, lambda_76, TAIL_CALL,
  POS(1011, 7),
  POS(1013, 9),
  POS(1013, 9),
  POS(1013, 9),
  POS(1012, 7)
};

static TAB_NUM t_lambda_74[] = {
  3, // locals
  0, // parameters
  // slen -1) == suffix
  var_std__negate, 1, var_1011_1_slen, 1, LOCAL(1),
  // range(self -slen -1) == suffix
  var_range, 3, var_1000_0_self, LOCAL(1), minus_num_1, 1, LOCAL(2),
  // range(self -slen -1) == suffix
  var_std__equal, 2, LOCAL(2), var_1001_0_suffix, 1, LOCAL(3),
  // range(self -slen -1) == suffix
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(1013, 36),
  POS(1013, 24),
  POS(1013, 24),
  POS(1013, 24)
};

static TAB_NUM t_lambda_75[] = {
  3, // locals
  0, // parameters
  // slen-1)
  var_std__negate, 1, var_1011_1_slen, 1, LOCAL(1),
  // slen-1)
  var_std__minus, 2, LOCAL(1), num_1, 1, LOCAL(2),
  // range(self 1 -slen-1)
  var_range, 3, var_1000_0_self, num_1, LOCAL(2), 1, LOCAL(3),
  //  range(self 1 -slen-1)
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(1014, 26),
  POS(1014, 26),
  POS(1014, 12),
  POS(1014, 11)
};

static TAB_NUM t_lambda_76[] = {
  0, // locals
  0, // parameters
  //  self
  LET, 1, var_1000_0_self, TAIL_CALL,
  POS(1015, 11)
};

static TAB_NUM t_func_std_types__string___contains[] = {
  4, // locals
  2, // parameters
  LOCAL(2), // 1040_0_self
  LOCAL(3), // 1041_0_expr
  // search $pos $_len expr self
  var_search, 2, LOCAL(3), LOCAL(2), 2, LOCAL(4), LOCAL(1),
  // is_defined
  var_is_defined, 1, LOCAL(4), 1, LOCAL(1),
  // -> pos.is_defined
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1043, 3),
  POS(1044, 10),
  POS(1044, 3)
};

static TAB_NUM t_func_std__split[] = {
  1, // locals
  -2, // parameters
  MANDATORY_PARAMETER, var_1080_0_self,
  chr_32, var_1081_0_separator,
  // is_empty
  var_is_empty, 1, var_1080_0_self, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_77, lambda_78, TAIL_CALL,
  POS(1084, 10),
  POS(1083, 3)
};

static TAB_NUM t_lambda_77[] = {
  0, // locals
  0, // parameters
  //  empty_list
  LET, 1, var_empty_list, TAIL_CALL,
  POS(1085, 7)
};

static TAB_NUM t_lambda_78[] = {
  0, // locals
  0, // parameters
  // $items empty_list
  LET, 1, var_empty_list, 1, var_1087_1_items,
  // loop:
  var_loop, 1, lambda_2_loop, TAIL_CALL,
  POS(1087, 7),
  POS(1088, 7)
};

static TAB_NUM t_lambda_2_loop[] = {
  1, // locals
  0, // parameters
  // search $pos $len separator self
  var_search, 2, var_1081_0_separator, var_1080_0_self, 2, var_1089_8_pos, var_1089_13_len,
  // is_defined:
  var_is_defined, 1, var_1089_8_pos, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_pos_is_defined, lambda_79, TAIL_CALL,
  POS(1089, 9),
  POS(1091, 15),
  POS(1090, 9)
};

static TAB_NUM t_lambda_pos_is_defined[] = {
  2, // locals
  0, // parameters
  // pos-1)
  var_std__minus, 2, var_1089_8_pos, num_1, 1, LOCAL(1),
  // range(self 1 pos-1)
  var_range, 3, var_1080_0_self, num_1, LOCAL(1), 1, LOCAL(2),
  // push &items range(self 1 pos-1)
  var_push, 2, var_1087_1_items, LOCAL(2), 1, var_1087_1_items,
  // pos+len -1
  var_std__plus, 2, var_1089_8_pos, var_1089_13_len, 1, LOCAL(1),
  // range &self pos+len -1
  var_range, 3, var_1080_0_self, LOCAL(1), minus_num_1, 1, var_1080_0_self,
  // next
  var_next, 0, TAIL_CALL,
  POS(1092, 38),
  POS(1092, 25),
  POS(1092, 13),
  POS(1093, 25),
  POS(1093, 13),
  POS(1094, 13)
};

static TAB_NUM t_lambda_79[] = {
  1, // locals
  0, // parameters
  // push(items self)
  var_push, 2, var_1087_1_items, var_1080_0_self, 1, LOCAL(1),
  //  push(items self)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1095, 14),
  POS(1095, 13)
};

static TAB_NUM t_func_std__join[] = {
  1, // locals
  -2, // parameters
  MANDATORY_PARAMETER, LOCAL(1), // 1120_0_items
  string_2, var_1121_0_separator,
  // to_string &separator
  var_to_string, 1, var_1121_0_separator, 1, var_1121_0_separator,
  // map_reduce
  var_map_reduce, 4, LOCAL(1), var_to_string, lambda_80, string_1, TAIL_CALL,
  POS(1123, 3),
  POS(1124, 3)
};

static TAB_NUM t_lambda_80[] = {
  2, // locals
  2, // parameters
  LOCAL(1), // 1126_3_left
  LOCAL(2), // 1126_8_right
  // append left separator right
  var_append, 3, LOCAL(1), var_1121_0_separator, LOCAL(2), TAIL_CALL,
  POS(1126, 20)
};

static TAB_NUM t_func_std__trim[] = {
  0, // locals
  -2, // parameters
  MANDATORY_PARAMETER, var_1150_0_self,
  var_is_a_whitespace_character, var_1151_0_test,
  // $s 1
  LET, 1, num_1, 1, var_1153_1_s,
  // $e length_of(self)
  var_length_of, 1, var_1150_0_self, 1, var_1154_1_e,
  // loop:
  var_loop, 1, lambda_3_loop, TAIL_CALL,
  POS(1153, 3),
  POS(1154, 3),
  POS(1155, 3)
};

static TAB_NUM t_lambda_3_loop[] = {
  3, // locals
  0, // parameters
  // e && test(self(s)):
  var_std__less, 2, var_1154_1_e, var_1153_1_s, 1, LOCAL(1),
  // e && test(self(s)):
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // e && test(self(s)):
  var_std__and, 2, LOCAL(2), lambda_81, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_82, lambda_83, TAIL_CALL,
  POS(1157, 12),
  POS(1157, 12),
  POS(1157, 12),
  POS(1156, 5)
};

static TAB_NUM t_lambda_81[] = {
  2, // locals
  0, // parameters
  // self(s)):
  var_1150_0_self, 1, var_1153_1_s, 1, LOCAL(1),
  // test(self(s)):
  var_1151_0_test, 1, LOCAL(1), 1, LOCAL(2),
  // test(self(s)):
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1157, 22),
  POS(1157, 17),
  POS(1157, 17)
};

static TAB_NUM t_lambda_82[] = {
  0, // locals
  0, // parameters
  // inc &s
  var_inc, 1, var_1153_1_s, 1, var_1153_1_s,
  // next
  var_next, 0, TAIL_CALL,
  POS(1158, 9),
  POS(1159, 9)
};

static TAB_NUM t_lambda_83[] = {
  0, // locals
  0, // parameters
  // loop:
  var_loop, 1, lambda_4_loop, TAIL_CALL,
  POS(1161, 9)
};

static TAB_NUM t_lambda_4_loop[] = {
  3, // locals
  0, // parameters
  // e >= s && test(self(e)):
  var_std__less, 2, var_1154_1_e, var_1153_1_s, 1, LOCAL(1),
  // e >= s && test(self(e)):
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // e >= s && test(self(e)):
  var_std__and, 2, LOCAL(2), lambda_84, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_85, lambda_86, TAIL_CALL,
  POS(1163, 13),
  POS(1163, 13),
  POS(1163, 13),
  POS(1162, 11)
};

static TAB_NUM t_lambda_84[] = {
  2, // locals
  0, // parameters
  // self(e)):
  var_1150_0_self, 1, var_1154_1_e, 1, LOCAL(1),
  // test(self(e)):
  var_1151_0_test, 1, LOCAL(1), 1, LOCAL(2),
  // test(self(e)):
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1163, 28),
  POS(1163, 23),
  POS(1163, 23)
};

static TAB_NUM t_lambda_85[] = {
  0, // locals
  0, // parameters
  // dec &e
  var_dec, 1, var_1154_1_e, 1, var_1154_1_e,
  // next
  var_next, 0, TAIL_CALL,
  POS(1164, 15),
  POS(1165, 15)
};

static TAB_NUM t_lambda_86[] = {
  0, // locals
  0, // parameters
  // range self s e
  var_range, 3, var_1150_0_self, var_1153_1_s, var_1154_1_e, TAIL_CALL,
  POS(1167, 15)
};

static TAB_NUM t_func_std__trim_left[] = {
  0, // locals
  -2, // parameters
  MANDATORY_PARAMETER, var_1190_0_self,
  var_is_a_whitespace_character, var_1191_0_test,
  // $s 1
  LET, 1, num_1, 1, var_1193_1_s,
  // $e length_of(self)
  var_length_of, 1, var_1190_0_self, 1, var_1194_1_e,
  // loop:
  var_loop, 1, lambda_5_loop, TAIL_CALL,
  POS(1193, 3),
  POS(1194, 3),
  POS(1195, 3)
};

static TAB_NUM t_lambda_5_loop[] = {
  3, // locals
  0, // parameters
  // e && test(self(s)):
  var_std__less, 2, var_1194_1_e, var_1193_1_s, 1, LOCAL(1),
  // e && test(self(s)):
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // e && test(self(s)):
  var_std__and, 2, LOCAL(2), lambda_87, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_88, lambda_89, TAIL_CALL,
  POS(1197, 12),
  POS(1197, 12),
  POS(1197, 12),
  POS(1196, 5)
};

static TAB_NUM t_lambda_87[] = {
  2, // locals
  0, // parameters
  // self(s)):
  var_1190_0_self, 1, var_1193_1_s, 1, LOCAL(1),
  // test(self(s)):
  var_1191_0_test, 1, LOCAL(1), 1, LOCAL(2),
  // test(self(s)):
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1197, 22),
  POS(1197, 17),
  POS(1197, 17)
};

static TAB_NUM t_lambda_88[] = {
  0, // locals
  0, // parameters
  // inc &s
  var_inc, 1, var_1193_1_s, 1, var_1193_1_s,
  // next
  var_next, 0, TAIL_CALL,
  POS(1198, 9),
  POS(1199, 9)
};

static TAB_NUM t_lambda_89[] = {
  0, // locals
  0, // parameters
  // range self s e
  var_range, 3, var_1190_0_self, var_1193_1_s, var_1194_1_e, TAIL_CALL,
  POS(1201, 9)
};

static TAB_NUM t_func_std__trim_right[] = {
  0, // locals
  -2, // parameters
  MANDATORY_PARAMETER, var_1224_0_self,
  var_is_a_whitespace_character, var_1225_0_test,
  // $e length_of(self)
  var_length_of, 1, var_1224_0_self, 1, var_1227_1_e,
  // loop:
  var_loop, 1, lambda_6_loop, TAIL_CALL,
  POS(1227, 3),
  POS(1228, 3)
};

static TAB_NUM t_lambda_6_loop[] = {
  3, // locals
  0, // parameters
  // e >= 1 && test(self(e)):
  var_std__less, 2, var_1227_1_e, num_1, 1, LOCAL(1),
  // e >= 1 && test(self(e)):
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // e >= 1 && test(self(e)):
  var_std__and, 2, LOCAL(2), lambda_90, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_91, lambda_92, TAIL_CALL,
  POS(1230, 7),
  POS(1230, 7),
  POS(1230, 7),
  POS(1229, 5)
};

static TAB_NUM t_lambda_90[] = {
  2, // locals
  0, // parameters
  // self(e)):
  var_1224_0_self, 1, var_1227_1_e, 1, LOCAL(1),
  // test(self(e)):
  var_1225_0_test, 1, LOCAL(1), 1, LOCAL(2),
  // test(self(e)):
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1230, 22),
  POS(1230, 17),
  POS(1230, 17)
};

static TAB_NUM t_lambda_91[] = {
  0, // locals
  0, // parameters
  // dec &e
  var_dec, 1, var_1227_1_e, 1, var_1227_1_e,
  // next
  var_next, 0, TAIL_CALL,
  POS(1231, 9),
  POS(1232, 9)
};

static TAB_NUM t_lambda_92[] = {
  0, // locals
  0, // parameters
  // range self 1 e
  var_range, 3, var_1224_0_self, num_1, var_1227_1_e, TAIL_CALL,
  POS(1234, 9)
};

static TAB_NUM t_func_std__normalize[] = {
  0, // locals
  1, // parameters
  var_1258_0_self,
  // $buf ""
  LET, 1, string_1, 1, var_1260_1_buf,
  // $e length_of(self)
  var_length_of, 1, var_1258_0_self, 1, var_1261_1_e,
  // $i 0
  LET, 1, num_0, 1, var_1262_1_i,
  // loop:
  var_loop, 1, lambda_7_loop, TAIL_CALL,
  POS(1260, 3),
  POS(1261, 3),
  POS(1262, 3),
  POS(1263, 3)
};

static TAB_NUM t_lambda_7_loop[] = {
  0, // locals
  0, // parameters
  // loop
  var_loop, 2, lambda_93, lambda_96, TAIL_CALL,
  POS(1264, 5)
};

static TAB_NUM t_lambda_93[] = {
  1, // locals
  0, // parameters
  // inc &i
  var_inc, 1, var_1262_1_i, 1, var_1262_1_i,
  // e
  var_std__less, 2, var_1261_1_e, var_1262_1_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_94, lambda_95, TAIL_CALL,
  POS(1266, 9),
  POS(1268, 15),
  POS(1267, 9)
};

static TAB_NUM t_lambda_94[] = {
  0, // locals
  0, // parameters
  //  buf
  LET, 1, var_1260_1_buf, TAIL_CALL,
  POS(1269, 13)
};

static TAB_NUM t_lambda_95[] = {
  2, // locals
  0, // parameters
  // self(i).is_a_whitespace_character
  var_1258_0_self, 1, var_1262_1_i, 1, LOCAL(1),
  // is_a_whitespace_character
  var_is_a_whitespace_character, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), var_next, var_break, TAIL_CALL,
  POS(1272, 15),
  POS(1272, 23),
  POS(1271, 13)
};

static TAB_NUM t_lambda_96[] = {
  1, // locals
  0, // parameters
  // is_not_empty &buf -> push(buf ' ')
  var_is_not_empty, 1, var_1260_1_buf, 1, LOCAL(1),
  // update_if buf.is_not_empty &buf -> push(buf ' ')
  var_update_if, 3, LOCAL(1), var_1260_1_buf, lambda_97, 1, var_1260_1_buf,
  // $s i
  LET, 1, var_1262_1_i, 1, var_1277_1_s,
  // loop
  var_loop, 2, lambda_98, lambda_101, TAIL_CALL,
  POS(1276, 23),
  POS(1276, 9),
  POS(1277, 9),
  POS(1278, 9)
};

static TAB_NUM t_lambda_97[] = {
  1, // locals
  0, // parameters
  // push(buf ' ')
  var_push, 2, var_1260_1_buf, chr_32, 1, LOCAL(1),
  //  push(buf ' ')
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1276, 44),
  POS(1276, 43)
};

static TAB_NUM t_lambda_98[] = {
  1, // locals
  0, // parameters
  // inc &i
  var_inc, 1, var_1262_1_i, 1, var_1262_1_i,
  // e
  var_std__less, 2, var_1261_1_e, var_1262_1_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_99, lambda_100, TAIL_CALL,
  POS(1280, 13),
  POS(1282, 19),
  POS(1281, 13)
};

static TAB_NUM t_lambda_99[] = {
  2, // locals
  0, // parameters
  // range(self s e))
  var_range, 3, var_1258_0_self, var_1277_1_s, var_1261_1_e, 1, LOCAL(1),
  // append(buf range(self s e))
  var_append, 2, var_1260_1_buf, LOCAL(1), 1, LOCAL(2),
  //  append(buf range(self s e))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1283, 29),
  POS(1283, 18),
  POS(1283, 17)
};

static TAB_NUM t_lambda_100[] = {
  2, // locals
  0, // parameters
  // self(i).is_a_whitespace_character
  var_1258_0_self, 1, var_1262_1_i, 1, LOCAL(1),
  // is_a_whitespace_character
  var_is_a_whitespace_character, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), var_break, var_next, TAIL_CALL,
  POS(1286, 19),
  POS(1286, 27),
  POS(1285, 17)
};

static TAB_NUM t_lambda_101[] = {
  2, // locals
  0, // parameters
  // i-1)
  var_std__minus, 2, var_1262_1_i, num_1, 1, LOCAL(1),
  // range(self s i-1)
  var_range, 3, var_1258_0_self, var_1277_1_s, LOCAL(1), 1, LOCAL(2),
  // append &buf range(self s i-1)
  var_append, 2, var_1260_1_buf, LOCAL(2), 1, var_1260_1_buf,
  // next
  var_next, 0, TAIL_CALL,
  POS(1290, 38),
  POS(1290, 25),
  POS(1290, 13),
  POS(1291, 13)
};

static TAB_NUM t_func_std_types__octet_string___to_base64[] = {
  0, // locals
  1, // parameters
  var_1309_0_str,
  // $base64 ""
  LET, 1, string_1, 1, var_1311_1_base64,
  // loop:
  var_loop, 1, lambda_8_loop, TAIL_CALL,
  POS(1311, 3),
  POS(1312, 3)
};

static TAB_NUM t_lambda_8_loop[] = {
  2, // locals
  0, // parameters
  // $len length_of(str)
  var_length_of, 1, var_1309_0_str, 1, var_1313_1_len,
  // len >= 3:
  var_std__less, 2, var_1313_1_len, num_3, 1, LOCAL(1),
  // len >= 3:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_102, lambda_103, TAIL_CALL,
  POS(1313, 5),
  POS(1315, 7),
  POS(1315, 7),
  POS(1314, 5)
};

static TAB_NUM t_lambda_102[] = {
  2, // locals
  0, // parameters
  // range(str 1 3))
  var_range, 3, var_1309_0_str, num_1, num_3, 1, LOCAL(1),
  // encode(range(str 1 3))
  func_encode, 1, LOCAL(1), 1, LOCAL(2),
  // append &base64 encode(range(str 1 3))
  var_append, 2, var_1311_1_base64, LOCAL(2), 1, var_1311_1_base64,
  // range &str 4 -1
  var_range, 3, var_1309_0_str, num_4, minus_num_1, 1, var_1309_0_str,
  // next
  var_next, 0, TAIL_CALL,
  POS(1316, 31),
  POS(1316, 24),
  POS(1316, 9),
  POS(1317, 9),
  POS(1318, 9)
};

static TAB_NUM t_lambda_103[] = {
  1, // locals
  0, // parameters
  // len == 0
  var_std__equal, 2, var_1313_1_len, num_0, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_104, lambda_105, TAIL_CALL,
  POS(1321, 11),
  POS(1320, 9)
};

static TAB_NUM t_lambda_104[] = {
  0, // locals
  0, // parameters
  //  base64
  LET, 1, var_1311_1_base64, TAIL_CALL,
  POS(1322, 13)
};

static TAB_NUM t_lambda_105[] = {
  2, // locals
  0, // parameters
  // 3-len)
  var_std__minus, 2, num_3, var_1313_1_len, 1, LOCAL(1),
  // dup("@0;" 3-len)
  var_dup, 2, string_7, LOCAL(1), 1, LOCAL(2),
  // append &str dup("@0;" 3-len)
  var_append, 2, var_1309_0_str, LOCAL(2), 1, var_1309_0_str,
  // encode(str)
  func_encode, 1, var_1309_0_str, 1, LOCAL(1),
  // append &base64 encode(str)
  var_append, 2, var_1311_1_base64, LOCAL(1), 1, var_1311_1_base64,
  // case len
  var_case, 5, var_1313_1_len, num_1, lambda_106, num_2, lambda_107, TAIL_CALL,
  POS(1324, 35),
  POS(1324, 25),
  POS(1324, 13),
  POS(1325, 28),
  POS(1325, 13),
  POS(1326, 13)
};

static TAB_NUM t_lambda_106[] = {
  2, // locals
  0, // parameters
  // range(base64 1 -3) "==")
  var_range, 3, var_1311_1_base64, num_1, minus_num_3, 1, LOCAL(1),
  // append(range(base64 1 -3) "==")
  var_append, 2, LOCAL(1), string_8, 1, LOCAL(2),
  //  append(range(base64 1 -3) "==")
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1327, 27),
  POS(1327, 20),
  POS(1327, 19)
};

static TAB_NUM t_lambda_107[] = {
  2, // locals
  0, // parameters
  // range(base64 1 -2) '=')
  var_range, 3, var_1311_1_base64, num_1, minus_num_2, 1, LOCAL(1),
  // push(range(base64 1 -2) '=')
  var_push, 2, LOCAL(1), chr_61, 1, LOCAL(2),
  //  push(range(base64 1 -2) '=')
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1328, 25),
  POS(1328, 20),
  POS(1328, 19)
};

static TAB_NUM t_func_encode[] = {
  10, // locals
  1, // parameters
  LOCAL(10), // 1330_10_three_octets
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
  var_std__bit_or, 2, LOCAL(7), LOCAL(9), 1, var_1332_1_bits,
  // $buf ""
  LET, 1, string_1, 1, var_1337_1_buf,
  // repeat 4
  var_repeat, 3, num_4, lambda_108, lambda_114, TAIL_CALL,
  POS(1334, 9),
  POS(1334, 25),
  POS(1334, 25),
  POS(1335, 9),
  POS(1335, 25),
  POS(1335, 25),
  POS(1333, 8),
  POS(1336, 9),
  POS(1336, 25),
  POS(1332, 5),
  POS(1337, 5),
  POS(1338, 5)
};

static TAB_NUM t_lambda_108[] = {
  1, // locals
  0, // parameters
  // $value bits >> 18
  var_std__shift_right, 2, var_1332_1_bits, num_18, 1, var_1340_1_value,
  // bits & 0x3ffff) << 6
  var_std__bit_and, 2, var_1332_1_bits, num_0x3ffff, 1, LOCAL(1),
  // !bits (bits & 0x3ffff) << 6
  var_std__shift_left, 2, LOCAL(1), num_6, 1, var_1332_1_bits,
  // case value
  var_case, 11, var_1340_1_value, value_range_1343_0, lambda_109, value_range_1346_0, lambda_110, value_range_1349_0, lambda_111, num_62, lambda_112, num_63, lambda_113, TAIL_CALL,
  POS(1340, 9),
  POS(1341, 16),
  POS(1341, 9),
  POS(1342, 9)
};

static TAB_NUM t_lambda_109[] = {
  1, // locals
  0, // parameters
  // A'+value
  var_std__plus, 2, chr_65, var_1340_1_value, 1, LOCAL(1),
  // push &buf 'A'+value
  var_push, 2, var_1337_1_buf, LOCAL(1), 1, var_1337_1_buf,
  // next
  var_next, 0, TAIL_CALL,
  POS(1344, 24),
  POS(1344, 13),
  POS(1345, 13)
};

static TAB_NUM t_lambda_110[] = {
  2, // locals
  0, // parameters
  // value-26)
  var_std__minus, 2, var_1340_1_value, num_26, 1, LOCAL(1),
  // a'+(value-26)
  var_std__plus, 2, chr_97, LOCAL(1), 1, LOCAL(2),
  // push &buf 'a'+(value-26)
  var_push, 2, var_1337_1_buf, LOCAL(2), 1, var_1337_1_buf,
  // next
  var_next, 0, TAIL_CALL,
  POS(1347, 28),
  POS(1347, 24),
  POS(1347, 13),
  POS(1348, 13)
};

static TAB_NUM t_lambda_111[] = {
  2, // locals
  0, // parameters
  // value-52)
  var_std__minus, 2, var_1340_1_value, num_52, 1, LOCAL(1),
  // 0'+(value-52)
  var_std__plus, 2, chr_48, LOCAL(1), 1, LOCAL(2),
  // push &buf '0'+(value-52)
  var_push, 2, var_1337_1_buf, LOCAL(2), 1, var_1337_1_buf,
  // next
  var_next, 0, TAIL_CALL,
  POS(1350, 28),
  POS(1350, 24),
  POS(1350, 13),
  POS(1351, 13)
};

static TAB_NUM t_lambda_112[] = {
  0, // locals
  0, // parameters
  // push &buf '+'
  var_push, 2, var_1337_1_buf, chr_43, 1, var_1337_1_buf,
  // next
  var_next, 0, TAIL_CALL,
  POS(1353, 13),
  POS(1354, 13)
};

static TAB_NUM t_lambda_113[] = {
  0, // locals
  0, // parameters
  // push &buf '/'
  var_push, 2, var_1337_1_buf, chr_47, 1, var_1337_1_buf,
  // next
  var_next, 0, TAIL_CALL,
  POS(1356, 13),
  POS(1357, 13)
};

static TAB_NUM t_lambda_114[] = {
  0, // locals
  0, // parameters
  //  buf
  LET, 1, var_1337_1_buf, TAIL_CALL,
  POS(1358, 9)
};

static TAB_NUM t_func_std_types__octet_string___from_base64[] = {
  4, // locals
  1, // parameters
  var_1379_0_str,
  // $octets ""
  LET, 1, string_1, 1, var_1381_1_octets,
  // length_of(str) .mod. 4) != 0
  var_length_of, 1, var_1379_0_str, 1, LOCAL(1),
  // length_of(str) .mod. 4) != 0
  var_mod, 2, LOCAL(1), num_4, 1, LOCAL(2),
  // length_of(str) .mod. 4) != 0
  var_std__equal, 2, LOCAL(2), num_0, 1, LOCAL(3),
  // length_of(str) .mod. 4) != 0
  var_std__not, 1, LOCAL(3), 1, LOCAL(4),
  // if
  var_if, 3, LOCAL(4), lambda_115, lambda_116, TAIL_CALL,
  POS(1381, 3),
  POS(1383, 6),
  POS(1383, 6),
  POS(1383, 6),
  POS(1383, 6),
  POS(1382, 3)
};

static TAB_NUM t_lambda_115[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(1384, 7)
};

static TAB_NUM t_lambda_116[] = {
  0, // locals
  0, // parameters
  // loop:
  var_loop, 1, lambda_9_loop, TAIL_CALL,
  POS(1386, 7)
};

static TAB_NUM t_lambda_9_loop[] = {
  1, // locals
  0, // parameters
  // is_empty
  var_is_empty, 1, var_1379_0_str, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_117, lambda_118, TAIL_CALL,
  POS(1388, 15),
  POS(1387, 9)
};

static TAB_NUM t_lambda_117[] = {
  0, // locals
  0, // parameters
  //  octets
  LET, 1, var_1381_1_octets, TAIL_CALL,
  POS(1389, 13)
};

static TAB_NUM t_lambda_118[] = {
  0, // locals
  0, // parameters
  // $bits 0
  LET, 1, num_0, 1, var_1391_1_bits,
  // from_to 1 4
  var_from_to, 4, num_1, num_4, lambda_119, lambda_122, TAIL_CALL,
  POS(1391, 13),
  POS(1392, 13)
};

static TAB_NUM t_lambda_119[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 1393_3_i
  // str(i))
  var_1379_0_str, 1, LOCAL(2), 1, LOCAL(1),
  // $value decode(str(i))
  func_decode, 1, LOCAL(1), 1, var_1394_1_value,
  // is_undefined
  var_is_undefined, 1, var_1394_1_value, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_120, lambda_121, TAIL_CALL,
  POS(1394, 31),
  POS(1394, 17),
  POS(1396, 25),
  POS(1395, 17)
};

static TAB_NUM t_lambda_120[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(1397, 21)
};

static TAB_NUM t_lambda_121[] = {
  1, // locals
  0, // parameters
  // bits << 6) | value
  var_std__shift_left, 2, var_1391_1_bits, num_6, 1, LOCAL(1),
  // !bits (bits << 6) | value
  var_std__bit_or, 2, LOCAL(1), var_1394_1_value, 1, var_1391_1_bits,
  // next
  var_next, 0, TAIL_CALL,
  POS(1399, 28),
  POS(1399, 21),
  POS(1400, 21)
};

static TAB_NUM t_lambda_122[] = {
  3, // locals
  0, // parameters
  // bits >> 16)
  var_std__shift_right, 2, var_1391_1_bits, num_16, 1, LOCAL(1),
  // character(bits >> 16)
  var_character, 1, LOCAL(1), 1, LOCAL(2),
  // push &octets character(bits >> 16)
  var_push, 2, var_1381_1_octets, LOCAL(2), 1, var_1381_1_octets,
  // bits >> 8) & 0xff)
  var_std__shift_right, 2, var_1391_1_bits, num_8, 1, LOCAL(1),
  // bits >> 8) & 0xff)
  var_std__bit_and, 2, LOCAL(1), num_0xff, 1, LOCAL(2),
  // character((bits >> 8) & 0xff)
  var_character, 1, LOCAL(2), 1, LOCAL(3),
  // push &octets character((bits >> 8) & 0xff)
  var_push, 2, var_1381_1_octets, LOCAL(3), 1, var_1381_1_octets,
  // bits & 0xff)
  var_std__bit_and, 2, var_1391_1_bits, num_0xff, 1, LOCAL(1),
  // character(bits & 0xff)
  var_character, 1, LOCAL(1), 1, LOCAL(2),
  // push &octets character(bits & 0xff)
  var_push, 2, var_1381_1_octets, LOCAL(2), 1, var_1381_1_octets,
  // str(4) == '=':
  var_1379_0_str, 1, num_4, 1, LOCAL(1),
  // str(4) == '=':
  var_std__equal, 2, LOCAL(1), chr_61, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_123, lambda_126, TAIL_CALL,
  POS(1402, 40),
  POS(1402, 30),
  POS(1402, 17),
  POS(1403, 41),
  POS(1403, 41),
  POS(1403, 30),
  POS(1403, 17),
  POS(1404, 40),
  POS(1404, 30),
  POS(1404, 17),
  POS(1406, 19),
  POS(1406, 19),
  POS(1405, 17)
};

static TAB_NUM t_lambda_123[] = {
  2, // locals
  0, // parameters
  // str(3) == '='
  var_1379_0_str, 1, num_3, 1, LOCAL(1),
  // str(3) == '='
  var_std__equal, 2, LOCAL(1), chr_61, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_124, lambda_125, TAIL_CALL,
  POS(1408, 23),
  POS(1408, 23),
  POS(1407, 21)
};

static TAB_NUM t_lambda_124[] = {
  1, // locals
  0, // parameters
  // range(octets 1 -3)
  var_range, 3, var_1381_1_octets, num_1, minus_num_3, 1, LOCAL(1),
  //  range(octets 1 -3)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1409, 26),
  POS(1409, 25)
};

static TAB_NUM t_lambda_125[] = {
  1, // locals
  0, // parameters
  // range(octets 1 -2)
  var_range, 3, var_1381_1_octets, num_1, minus_num_2, 1, LOCAL(1),
  //  range(octets 1 -2)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1410, 26),
  POS(1410, 25)
};

static TAB_NUM t_lambda_126[] = {
  0, // locals
  0, // parameters
  // range &str 5 -1
  var_range, 3, var_1379_0_str, num_5, minus_num_1, 1, var_1379_0_str,
  // next
  var_next, 0, TAIL_CALL,
  POS(1412, 21),
  POS(1413, 21)
};

static TAB_NUM t_func_decode[] = {
  0, // locals
  1, // parameters
  var_1415_10_chr,
  // case chr
  var_case, 14, var_1415_10_chr, value_range_1418_1, lambda_127, value_range_1419_1, lambda_128, value_range_1420_1, lambda_129, chr_43, lambda_130, chr_47, lambda_131, chr_61, lambda_132, lambda_133, TAIL_CALL,
  POS(1417, 5)
};

static TAB_NUM t_lambda_127[] = {
  1, // locals
  0, // parameters
  // chr-'A'
  var_std__minus, 2, var_1415_10_chr, chr_65, 1, LOCAL(1),
  //  chr-'A'
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1418, 21),
  POS(1418, 20)
};

static TAB_NUM t_lambda_128[] = {
  2, // locals
  0, // parameters
  // chr-'a'+26
  var_std__minus, 2, var_1415_10_chr, chr_97, 1, LOCAL(1),
  // chr-'a'+26
  var_std__plus, 2, LOCAL(1), num_26, 1, LOCAL(2),
  //  chr-'a'+26
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1419, 21),
  POS(1419, 21),
  POS(1419, 20)
};

static TAB_NUM t_lambda_129[] = {
  2, // locals
  0, // parameters
  // chr-'0'+52
  var_std__minus, 2, var_1415_10_chr, chr_48, 1, LOCAL(1),
  // chr-'0'+52
  var_std__plus, 2, LOCAL(1), num_52, 1, LOCAL(2),
  //  chr-'0'+52
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1420, 21),
  POS(1420, 21),
  POS(1420, 20)
};

static TAB_NUM t_lambda_130[] = {
  0, // locals
  0, // parameters
  //  62
  LET, 1, num_62, TAIL_CALL,
  POS(1421, 13)
};

static TAB_NUM t_lambda_131[] = {
  0, // locals
  0, // parameters
  //  63
  LET, 1, num_63, TAIL_CALL,
  POS(1422, 13)
};

static TAB_NUM t_lambda_132[] = {
  0, // locals
  0, // parameters
  //  0
  LET, 1, num_0, TAIL_CALL,
  POS(1423, 13)
};

static TAB_NUM t_lambda_133[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(1424, 9)
};

static TAB_NUM t_func_std_types__octet_string___sha1[] = {
  4, // locals
  1, // parameters
  var_1441_0_message,
  // $h0 0x67452301
  LET, 1, num_0x67452301, 1, var_1445_1_h0,
  // $h1 0xefcdab89
  LET, 1, num_0xefcdab89, 1, var_1446_1_h1,
  // $h2 0x98badcfe
  LET, 1, num_0x98badcfe, 1, var_1447_1_h2,
  // $h3 0x10325476
  LET, 1, num_0x10325476, 1, var_1448_1_h3,
  // $h4 0xc3d2e1f0
  LET, 1, num_0xc3d2e1f0, 1, var_1449_1_h4,
  // $len length_of(message)
  var_length_of, 1, var_1441_0_message, 1, LOCAL(3),
  // push &message '@0x80;'
  var_push, 2, var_1441_0_message, chr_128, 1, var_1441_0_message,
  // len+1 .mod. 512)
  var_std__plus, 2, LOCAL(3), num_1, 1, LOCAL(1),
  // len+1 .mod. 512)
  var_mod, 2, LOCAL(1), num_512, 1, LOCAL(2),
  // $pad_len 56-(len+1 .mod. 512)
  var_std__minus, 2, num_56, LOCAL(2), 1, var_1470_1_pad_len,
  // pad_len < 0 &pad_len -> pad_len+64
  var_std__less, 2, var_1470_1_pad_len, num_0, 1, LOCAL(1),
  // update_if pad_len < 0 &pad_len -> pad_len+64
  var_update_if, 3, LOCAL(1), var_1470_1_pad_len, lambda_134, 1, var_1470_1_pad_len,
  // $pad_octets dup("@0;" pad_len)
  var_dup, 2, string_7, var_1470_1_pad_len, 1, LOCAL(4),
  // append &message pad_octets
  var_append, 2, var_1441_0_message, LOCAL(4), 1, var_1441_0_message,
  // 8*len)
  var_std__times, 2, num_8, LOCAL(3), 1, LOCAL(1),
  // big_endian_string_64(8*len)
  func_big_endian_string_64, 1, LOCAL(1), 1, LOCAL(2),
  // append &message big_endian_string_64(8*len)
  var_append, 2, var_1441_0_message, LOCAL(2), 1, var_1441_0_message,
  // loop:
  var_loop, 1, lambda_10_loop, TAIL_CALL,
  POS(1445, 3),
  POS(1446, 3),
  POS(1447, 3),
  POS(1448, 3),
  POS(1449, 3),
  POS(1468, 3),
  POS(1469, 3),
  POS(1470, 16),
  POS(1470, 16),
  POS(1470, 3),
  POS(1471, 13),
  POS(1471, 3),
  POS(1472, 3),
  POS(1473, 3),
  POS(1474, 40),
  POS(1474, 19),
  POS(1474, 3),
  POS(1478, 3)
};

static TAB_NUM t_lambda_134[] = {
  1, // locals
  0, // parameters
  // pad_len+64
  var_std__plus, 2, var_1470_1_pad_len, num_64, 1, LOCAL(1),
  //  pad_len+64
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1471, 37),
  POS(1471, 36)
};

static TAB_NUM t_lambda_10_loop[] = {
  1, // locals
  0, // parameters
  // is_empty:
  var_is_empty, 1, var_1441_0_message, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_message_is_empty, lambda_135, TAIL_CALL,
  POS(1480, 15),
  POS(1479, 5)
};

static TAB_NUM t_lambda_message_is_empty[] = {
  5, // locals
  0, // parameters
  // big_endian_string_32(h0)
  func_big_endian_string_32, 1, var_1445_1_h0, 1, LOCAL(1),
  // big_endian_string_32(h1)
  func_big_endian_string_32, 1, var_1446_1_h1, 1, LOCAL(2),
  // big_endian_string_32(h2)
  func_big_endian_string_32, 1, var_1447_1_h2, 1, LOCAL(3),
  // big_endian_string_32(h3)
  func_big_endian_string_32, 1, var_1448_1_h3, 1, LOCAL(4),
  // big_endian_string_32(h4)
  func_big_endian_string_32, 1, var_1449_1_h4, 1, LOCAL(5),
  // string
  var_string, 5, LOCAL(1), LOCAL(2), LOCAL(3), LOCAL(4), LOCAL(5), TAIL_CALL,
  POS(1482, 11),
  POS(1483, 11),
  POS(1484, 11),
  POS(1485, 11),
  POS(1486, 11),
  POS(1481, 9)
};

static TAB_NUM t_lambda_135[] = {
  0, // locals
  0, // parameters
  // $w uint32_array(80)
  var_uint32_array, 1, num_80, 1, var_1488_1_w,
  // from_to 1 16
  var_from_to, 4, num_1, num_16, lambda_136, lambda_137, TAIL_CALL,
  POS(1488, 9),
  POS(1489, 9)
};

static TAB_NUM t_lambda_136[] = {
  23, // locals
  1, // parameters
  LOCAL(23), // 1490_3_i
  // 4*i-3).to_integer << 24
  var_std__times, 2, num_4, LOCAL(23), 1, LOCAL(1),
  // 4*i-3).to_integer << 24
  var_std__minus, 2, LOCAL(1), num_3, 1, LOCAL(2),
  // message(4*i-3).to_integer << 24
  var_1441_0_message, 1, LOCAL(2), 1, LOCAL(3),
  // to_integer << 24
  var_to_integer, 1, LOCAL(3), 1, LOCAL(4),
  // to_integer << 24
  var_std__shift_left, 2, LOCAL(4), num_24, 1, LOCAL(5),
  // 4*i-2).to_integer << 16
  var_std__times, 2, num_4, LOCAL(23), 1, LOCAL(6),
  // 4*i-2).to_integer << 16
  var_std__minus, 2, LOCAL(6), num_2, 1, LOCAL(7),
  // message(4*i-2).to_integer << 16
  var_1441_0_message, 1, LOCAL(7), 1, LOCAL(8),
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
  var_1441_0_message, 1, LOCAL(13), 1, LOCAL(14),
  // to_integer << 8
  var_to_integer, 1, LOCAL(14), 1, LOCAL(15),
  // to_integer << 8
  var_std__shift_left, 2, LOCAL(15), num_8, 1, LOCAL(16),
  // 
  var_std__bit_or, 2, LOCAL(11), LOCAL(16), 1, LOCAL(17),
  // 4*i).to_integer
  var_std__times, 2, num_4, LOCAL(23), 1, LOCAL(18),
  // message(4*i).to_integer
  var_1441_0_message, 1, LOCAL(18), 1, LOCAL(19),
  // to_integer
  var_to_integer, 1, LOCAL(19), 1, LOCAL(20),
  // !w(i)
  var_std__bit_or, 2, LOCAL(17), LOCAL(20), 1, LOCAL(22),
  // w(i)
  var_1488_1_w, 2, LOCAL(23), LOCAL(22), 1, var_1488_1_w,
  // next
  var_next, 0, TAIL_CALL,
  POS(1493, 25),
  POS(1493, 25),
  POS(1493, 17),
  POS(1493, 32),
  POS(1493, 32),
  POS(1494, 25),
  POS(1494, 25),
  POS(1494, 17),
  POS(1494, 32),
  POS(1494, 32),
  POS(1492, 16),
  POS(1495, 25),
  POS(1495, 25),
  POS(1495, 17),
  POS(1495, 32),
  POS(1495, 32),
  POS(1492, 16),
  POS(1496, 25),
  POS(1496, 17),
  POS(1496, 30),
  POS(1491, 13),
  POS(1491, 14),
  POS(1497, 13)
};

static TAB_NUM t_lambda_137[] = {
  0, // locals
  0, // parameters
  // from_to 17 80
  var_from_to, 4, num_17, num_80, lambda_138, func_main_loop, TAIL_CALL,
  POS(1499, 13)
};

static TAB_NUM t_lambda_138[] = {
  14, // locals
  1, // parameters
  LOCAL(14), // 1500_3_i
  // i-3) ^ w(i-8) ^ w(i-14) ^ w(i-16) .rol32. 1
  var_std__minus, 2, LOCAL(14), num_3, 1, LOCAL(1),
  // w(i-3) ^ w(i-8) ^ w(i-14) ^ w(i-16) .rol32. 1
  var_1488_1_w, 1, LOCAL(1), 1, LOCAL(2),
  // i-8) ^ w(i-14) ^ w(i-16) .rol32. 1
  var_std__minus, 2, LOCAL(14), num_8, 1, LOCAL(3),
  // w(i-8) ^ w(i-14) ^ w(i-16) .rol32. 1
  var_1488_1_w, 1, LOCAL(3), 1, LOCAL(4),
  // w(i-3) ^ w(i-8) ^ w(i-14) ^ w(i-16) .rol32. 1
  var_std__bit_xor, 2, LOCAL(2), LOCAL(4), 1, LOCAL(5),
  // i-14) ^ w(i-16) .rol32. 1
  var_std__minus, 2, LOCAL(14), num_14, 1, LOCAL(6),
  // w(i-14) ^ w(i-16) .rol32. 1
  var_1488_1_w, 1, LOCAL(6), 1, LOCAL(7),
  // w(i-3) ^ w(i-8) ^ w(i-14) ^ w(i-16) .rol32. 1
  var_std__bit_xor, 2, LOCAL(5), LOCAL(7), 1, LOCAL(8),
  // i-16) .rol32. 1
  var_std__minus, 2, LOCAL(14), num_16, 1, LOCAL(9),
  // w(i-16) .rol32. 1
  var_1488_1_w, 1, LOCAL(9), 1, LOCAL(10),
  // w(i-3) ^ w(i-8) ^ w(i-14) ^ w(i-16) .rol32. 1
  var_std__bit_xor, 2, LOCAL(8), LOCAL(10), 1, LOCAL(11),
  // !w(i) w(i-3) ^ w(i-8) ^ w(i-14) ^ w(i-16) .rol32. 1
  func_rol32, 2, LOCAL(11), num_1, 1, LOCAL(13),
  // w(i) w(i-3) ^ w(i-8) ^ w(i-14) ^ w(i-16) .rol32. 1
  var_1488_1_w, 2, LOCAL(14), LOCAL(13), 1, var_1488_1_w,
  // next
  var_next, 0, TAIL_CALL,
  POS(1501, 25),
  POS(1501, 23),
  POS(1501, 34),
  POS(1501, 32),
  POS(1501, 23),
  POS(1501, 43),
  POS(1501, 41),
  POS(1501, 23),
  POS(1501, 53),
  POS(1501, 51),
  POS(1501, 23),
  POS(1501, 17),
  POS(1501, 18),
  POS(1502, 17)
};

static TAB_NUM t_func_main_loop[] = {
  0, // locals
  0, // parameters
  // $a h0
  LET, 1, var_1445_1_h0, 1, var_1506_1_a,
  // $b h1
  LET, 1, var_1446_1_h1, 1, var_1507_1_b,
  // $c h2
  LET, 1, var_1447_1_h2, 1, var_1508_1_c,
  // $d h3
  LET, 1, var_1448_1_h3, 1, var_1509_1_d,
  // $e h4
  LET, 1, var_1449_1_h4, 1, var_1510_1_e,
  // from_to 1 80
  var_from_to, 4, num_1, num_80, lambda_139, lambda_148, TAIL_CALL,
  POS(1506, 11),
  POS(1507, 11),
  POS(1508, 11),
  POS(1509, 11),
  POS(1510, 11),
  POS(1511, 11)
};

static TAB_NUM t_lambda_139[] = {
  0, // locals
  1, // parameters
  var_1512_3_i,
  // cond
  var_cond, 4, lambda_140, lambda_142, lambda_144, lambda_146, TAIL_CALL,
  POS(1513, 15)
};

static TAB_NUM t_lambda_140[] = {
  2, // locals
  0, // parameters
  // 20: compute (b & c) | ((b ^ 0xffffffff) & d) k0
  var_std__less, 2, num_20, var_1512_3_i, 1, LOCAL(1),
  // 20: compute (b & c) | ((b ^ 0xffffffff) & d) k0
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  //  i <= 20: compute (b & c) | ((b ^ 0xffffffff) & d) k0
  LET, 2, LOCAL(2), lambda_141, TAIL_CALL,
  POS(1514, 25),
  POS(1514, 25),
  POS(1514, 19)
};

static TAB_NUM t_lambda_141[] = {
  4, // locals
  0, // parameters
  // b & c) | ((b ^ 0xffffffff) & d) k0
  var_std__bit_and, 2, var_1507_1_b, var_1508_1_c, 1, LOCAL(1),
  // b ^ 0xffffffff) & d) k0
  var_std__bit_xor, 2, var_1507_1_b, num_0xffffffff, 1, LOCAL(2),
  // b ^ 0xffffffff) & d) k0
  var_std__bit_and, 2, LOCAL(2), var_1509_1_d, 1, LOCAL(3),
  // b & c) | ((b ^ 0xffffffff) & d) k0
  var_std__bit_or, 2, LOCAL(1), LOCAL(3), 1, LOCAL(4),
  // compute (b & c) | ((b ^ 0xffffffff) & d) k0
  func_compute, 2, LOCAL(4), num_0x5a827999, TAIL_CALL,
  POS(1514, 38),
  POS(1514, 49),
  POS(1514, 49),
  POS(1514, 38),
  POS(1514, 29)
};

static TAB_NUM t_lambda_142[] = {
  2, // locals
  0, // parameters
  // 40: compute (b ^ c ^ d) k1
  var_std__less, 2, num_40, var_1512_3_i, 1, LOCAL(1),
  // 40: compute (b ^ c ^ d) k1
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  //  i <= 40: compute (b ^ c ^ d) k1
  LET, 2, LOCAL(2), lambda_143, TAIL_CALL,
  POS(1515, 25),
  POS(1515, 25),
  POS(1515, 19)
};

static TAB_NUM t_lambda_143[] = {
  2, // locals
  0, // parameters
  // b ^ c ^ d) k1
  var_std__bit_xor, 2, var_1507_1_b, var_1508_1_c, 1, LOCAL(1),
  // b ^ c ^ d) k1
  var_std__bit_xor, 2, LOCAL(1), var_1509_1_d, 1, LOCAL(2),
  // compute (b ^ c ^ d) k1
  func_compute, 2, LOCAL(2), num_0x6ed9eba1, TAIL_CALL,
  POS(1515, 38),
  POS(1515, 38),
  POS(1515, 29)
};

static TAB_NUM t_lambda_144[] = {
  2, // locals
  0, // parameters
  // 60: compute (b & c) | (b & d) | (c & d) k2
  var_std__less, 2, num_60, var_1512_3_i, 1, LOCAL(1),
  // 60: compute (b & c) | (b & d) | (c & d) k2
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  //  i <= 60: compute (b & c) | (b & d) | (c & d) k2
  LET, 2, LOCAL(2), lambda_145, TAIL_CALL,
  POS(1516, 25),
  POS(1516, 25),
  POS(1516, 19)
};

static TAB_NUM t_lambda_145[] = {
  5, // locals
  0, // parameters
  // b & c) | (b & d) | (c & d) k2
  var_std__bit_and, 2, var_1507_1_b, var_1508_1_c, 1, LOCAL(1),
  // b & d) | (c & d) k2
  var_std__bit_and, 2, var_1507_1_b, var_1509_1_d, 1, LOCAL(2),
  // b & c) | (b & d) | (c & d) k2
  var_std__bit_or, 2, LOCAL(1), LOCAL(2), 1, LOCAL(3),
  // c & d) k2
  var_std__bit_and, 2, var_1508_1_c, var_1509_1_d, 1, LOCAL(4),
  // b & c) | (b & d) | (c & d) k2
  var_std__bit_or, 2, LOCAL(3), LOCAL(4), 1, LOCAL(5),
  // compute (b & c) | (b & d) | (c & d) k2
  func_compute, 2, LOCAL(5), num_0x8f1bbcdc, TAIL_CALL,
  POS(1516, 38),
  POS(1516, 48),
  POS(1516, 38),
  POS(1516, 58),
  POS(1516, 38),
  POS(1516, 29)
};

static TAB_NUM t_lambda_146[] = {
  0, // locals
  0, // parameters
  //  true: compute (b ^ c ^ d) k3
  LET, 2, var_true, lambda_147, TAIL_CALL,
  POS(1517, 19)
};

static TAB_NUM t_lambda_147[] = {
  2, // locals
  0, // parameters
  // b ^ c ^ d) k3
  var_std__bit_xor, 2, var_1507_1_b, var_1508_1_c, 1, LOCAL(1),
  // b ^ c ^ d) k3
  var_std__bit_xor, 2, LOCAL(1), var_1509_1_d, 1, LOCAL(2),
  // compute (b ^ c ^ d) k3
  func_compute, 2, LOCAL(2), num_0xca62c1d6, TAIL_CALL,
  POS(1517, 35),
  POS(1517, 35),
  POS(1517, 26)
};

static TAB_NUM t_func_compute[] = {
  9, // locals
  2, // parameters
  LOCAL(7), // 1519_11_f
  LOCAL(8), // 1519_13_k
  // a .rol32. 5) + f + e + k + w(i)) & 0xffffffff
  func_rol32, 2, var_1506_1_a, num_5, 1, LOCAL(1),
  // a .rol32. 5) + f + e + k + w(i)) & 0xffffffff
  var_std__plus, 2, LOCAL(1), LOCAL(7), 1, LOCAL(2),
  // a .rol32. 5) + f + e + k + w(i)) & 0xffffffff
  var_std__plus, 2, LOCAL(2), var_1510_1_e, 1, LOCAL(3),
  // a .rol32. 5) + f + e + k + w(i)) & 0xffffffff
  var_std__plus, 2, LOCAL(3), LOCAL(8), 1, LOCAL(4),
  // w(i)) & 0xffffffff
  var_1488_1_w, 1, var_1512_3_i, 1, LOCAL(5),
  // a .rol32. 5) + f + e + k + w(i)) & 0xffffffff
  var_std__plus, 2, LOCAL(4), LOCAL(5), 1, LOCAL(6),
  // $t ((a .rol32. 5) + f + e + k + w(i)) & 0xffffffff
  var_std__bit_and, 2, LOCAL(6), num_0xffffffff, 1, LOCAL(9),
  // !e d
  LET, 1, var_1509_1_d, 1, var_1510_1_e,
  // !d c
  LET, 1, var_1508_1_c, 1, var_1509_1_d,
  // !c b .rol32. 30
  func_rol32, 2, var_1507_1_b, num_30, 1, var_1508_1_c,
  // !b a
  LET, 1, var_1506_1_a, 1, var_1507_1_b,
  // !a t
  LET, 1, LOCAL(9), 1, var_1506_1_a,
  // next
  var_next, 0, TAIL_CALL,
  POS(1520, 22),
  POS(1520, 22),
  POS(1520, 22),
  POS(1520, 22),
  POS(1520, 49),
  POS(1520, 22),
  POS(1520, 17),
  POS(1521, 17),
  POS(1522, 17),
  POS(1523, 17),
  POS(1524, 17),
  POS(1525, 17),
  POS(1526, 17)
};

static TAB_NUM t_lambda_148[] = {
  1, // locals
  0, // parameters
  // h0+a) & 0xffffffff
  var_std__plus, 2, var_1445_1_h0, var_1506_1_a, 1, LOCAL(1),
  // !h0 (h0+a) & 0xffffffff
  var_std__bit_and, 2, LOCAL(1), num_0xffffffff, 1, var_1445_1_h0,
  // h1+b) & 0xffffffff
  var_std__plus, 2, var_1446_1_h1, var_1507_1_b, 1, LOCAL(1),
  // !h1 (h1+b) & 0xffffffff
  var_std__bit_and, 2, LOCAL(1), num_0xffffffff, 1, var_1446_1_h1,
  // h2+c) & 0xffffffff
  var_std__plus, 2, var_1447_1_h2, var_1508_1_c, 1, LOCAL(1),
  // !h2 (h2+c) & 0xffffffff
  var_std__bit_and, 2, LOCAL(1), num_0xffffffff, 1, var_1447_1_h2,
  // h3+d) & 0xffffffff
  var_std__plus, 2, var_1448_1_h3, var_1509_1_d, 1, LOCAL(1),
  // !h3 (h3+d) & 0xffffffff
  var_std__bit_and, 2, LOCAL(1), num_0xffffffff, 1, var_1448_1_h3,
  // h4+e) & 0xffffffff
  var_std__plus, 2, var_1449_1_h4, var_1510_1_e, 1, LOCAL(1),
  // !h4 (h4+e) & 0xffffffff
  var_std__bit_and, 2, LOCAL(1), num_0xffffffff, 1, var_1449_1_h4,
  // range &message 65 -1
  var_range, 3, var_1441_0_message, num_65, minus_num_1, 1, var_1441_0_message,
  // next
  var_next, 0, TAIL_CALL,
  POS(1528, 20),
  POS(1528, 15),
  POS(1529, 20),
  POS(1529, 15),
  POS(1530, 20),
  POS(1530, 15),
  POS(1531, 20),
  POS(1531, 15),
  POS(1532, 20),
  POS(1532, 15),
  POS(1533, 15),
  POS(1534, 15)
};

static TAB_NUM t_func_big_endian_string_64[] = {
  23, // locals
  1, // parameters
  LOCAL(23), // 1536_24_n
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
  POS(1539, 17),
  POS(1539, 7),
  POS(1540, 18),
  POS(1540, 18),
  POS(1540, 7),
  POS(1541, 18),
  POS(1541, 18),
  POS(1541, 7),
  POS(1542, 18),
  POS(1542, 18),
  POS(1542, 7),
  POS(1543, 18),
  POS(1543, 18),
  POS(1543, 7),
  POS(1544, 18),
  POS(1544, 18),
  POS(1544, 7),
  POS(1545, 18),
  POS(1545, 18),
  POS(1545, 7),
  POS(1546, 17),
  POS(1546, 7),
  POS(1538, 5)
};

static TAB_NUM t_func_big_endian_string_32[] = {
  11, // locals
  1, // parameters
  LOCAL(11), // 1548_24_n
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
  POS(1551, 17),
  POS(1551, 7),
  POS(1552, 18),
  POS(1552, 18),
  POS(1552, 7),
  POS(1553, 18),
  POS(1553, 18),
  POS(1553, 7),
  POS(1554, 17),
  POS(1554, 7),
  POS(1550, 5)
};

static TAB_NUM t_func_rol32[] = {
  7, // locals
  2, // parameters
  LOCAL(6), // 1556_9_n
  LOCAL(7), // 1556_11_k
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
  POS(1556, 22),
  POS(1556, 22),
  POS(1556, 53),
  POS(1556, 47),
  POS(1556, 22),
  POS(1556, 17)
};

static TAB_NUM t_func_std__parse_integer[] = {
  0, // locals
  1, // parameters
  var_1585_0_self,
  // $orig self
  LET, 1, var_1585_0_self, 1, var_1605_1_orig,
  // $negate self .has_prefix. '-'
  var_has_prefix, 2, var_1585_0_self, chr_45, 1, var_1606_1_negate,
  // !self
  var_if, 3, var_1606_1_negate, lambda_155, lambda_156, 1, var_1585_0_self,
  // $value 0
  LET, 1, num_0, 1, var_1612_1_value,
  // cond
  var_cond, 4, lambda_157, lambda_162, lambda_167, lambda_172, TAIL_CALL,
  POS(1605, 3),
  POS(1606, 3),
  POS(1607, 3),
  POS(1612, 3),
  POS(1613, 3)
};

static TAB_NUM t_func_maybe_negated[] = {
  0, // locals
  0, // parameters
  // if
  var_if, 3, var_1606_1_negate, lambda_149, lambda_150, TAIL_CALL,
  POS(1588, 5)
};

static TAB_NUM t_lambda_149[] = {
  1, // locals
  0, // parameters
  // value
  var_std__negate, 1, var_1612_1_value, 1, LOCAL(1),
  //  -value
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1590, 11),
  POS(1590, 9)
};

static TAB_NUM t_lambda_150[] = {
  0, // locals
  0, // parameters
  //  value
  LET, 1, var_1612_1_value, TAIL_CALL,
  POS(1591, 9)
};

static TAB_NUM t_func_partial_match[] = {
  1, // locals
  1, // parameters
  var_1593_17_idx,
  // 1
  var_std__less, 2, num_1, var_1593_17_idx, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_151, lambda_152, TAIL_CALL,
  POS(1595, 13),
  POS(1594, 5)
};

static TAB_NUM t_lambda_151[] = {
  2, // locals
  0, // parameters
  // range(self idx -1) maybe_negated()
  var_range, 3, var_1585_0_self, var_1593_17_idx, minus_num_1, 1, LOCAL(1),
  // maybe_negated()
  func_maybe_negated, 0, 1, LOCAL(2),
  //  range(self idx -1) maybe_negated()
  LET, 2, LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(1596, 10),
  POS(1596, 29),
  POS(1596, 9)
};

static TAB_NUM t_lambda_152[] = {
  0, // locals
  0, // parameters
  //  orig undefined
  LET, 2, var_1605_1_orig, var_undefined, TAIL_CALL,
  POS(1597, 9)
};

static TAB_NUM t_func_exhausted[] = {
  1, // locals
  0, // parameters
  // is_empty
  var_is_empty, 1, var_1585_0_self, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_153, lambda_154, TAIL_CALL,
  POS(1601, 12),
  POS(1600, 5)
};

static TAB_NUM t_lambda_153[] = {
  0, // locals
  0, // parameters
  //  orig undefined
  LET, 2, var_1605_1_orig, var_undefined, TAIL_CALL,
  POS(1602, 9)
};

static TAB_NUM t_lambda_154[] = {
  1, // locals
  0, // parameters
  // maybe_negated()
  func_maybe_negated, 0, 1, LOCAL(1),
  //  "" maybe_negated()
  LET, 2, string_1, LOCAL(1), TAIL_CALL,
  POS(1603, 13),
  POS(1603, 9)
};

static TAB_NUM t_lambda_155[] = {
  1, // locals
  0, // parameters
  // range(self 2 -1)
  var_range, 3, var_1585_0_self, num_2, minus_num_1, 1, LOCAL(1),
  //  range(self 2 -1)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1610, 10),
  POS(1610, 9)
};

static TAB_NUM t_lambda_156[] = {
  0, // locals
  0, // parameters
  //  self
  LET, 1, var_1585_0_self, TAIL_CALL,
  POS(1611, 9)
};

static TAB_NUM t_lambda_157[] = {
  1, // locals
  0, // parameters
  // self .has_prefix. "0b":
  var_has_prefix, 2, var_1585_0_self, str_0b, 1, LOCAL(1),
  //  self .has_prefix. "0b":
  LET, 2, LOCAL(1), lambda_158, TAIL_CALL,
  POS(1614, 8),
  POS(1614, 7)
};

static TAB_NUM t_lambda_158[] = {
  0, // locals
  0, // parameters
  // range &self 3 -1
  var_range, 3, var_1585_0_self, num_3, minus_num_1, 1, var_1585_0_self,
  // for_each self
  var_for_each, 3, var_1585_0_self, lambda_159, func_exhausted, TAIL_CALL,
  POS(1615, 7),
  POS(1616, 7)
};

static TAB_NUM t_lambda_159[] = {
  0, // locals
  2, // parameters
  var_1617_3_idx,
  var_1617_7_chr,
  // case
  var_case, 4, var_1617_7_chr, value_range_1620_1, lambda_160, lambda_161, TAIL_CALL,
  POS(1618, 11)
};

static TAB_NUM t_lambda_160[] = {
  2, // locals
  0, // parameters
  // value << 1)+(chr-'0')
  var_std__shift_left, 2, var_1612_1_value, num_1, 1, LOCAL(1),
  // chr-'0')
  var_std__minus, 2, var_1617_7_chr, chr_48, 1, LOCAL(2),
  // !value (value << 1)+(chr-'0')
  var_std__plus, 2, LOCAL(1), LOCAL(2), 1, var_1612_1_value,
  // next
  var_next, 0, TAIL_CALL,
  POS(1621, 23),
  POS(1621, 36),
  POS(1621, 15),
  POS(1622, 15)
};

static TAB_NUM t_lambda_161[] = {
  0, // locals
  0, // parameters
  // partial_match idx
  func_partial_match, 1, var_1617_3_idx, TAIL_CALL,
  POS(1624, 15)
};

static TAB_NUM t_lambda_162[] = {
  1, // locals
  0, // parameters
  // self .has_prefix. "0o":
  var_has_prefix, 2, var_1585_0_self, str_0o, 1, LOCAL(1),
  //  self .has_prefix. "0o":
  LET, 2, LOCAL(1), lambda_163, TAIL_CALL,
  POS(1626, 8),
  POS(1626, 7)
};

static TAB_NUM t_lambda_163[] = {
  0, // locals
  0, // parameters
  // range &self 3 -1
  var_range, 3, var_1585_0_self, num_3, minus_num_1, 1, var_1585_0_self,
  // for_each self
  var_for_each, 3, var_1585_0_self, lambda_164, func_exhausted, TAIL_CALL,
  POS(1627, 7),
  POS(1628, 7)
};

static TAB_NUM t_lambda_164[] = {
  0, // locals
  2, // parameters
  var_1629_3_idx,
  var_1629_7_chr,
  // case chr
  var_case, 4, var_1629_7_chr, value_range_1631_1, lambda_165, lambda_166, TAIL_CALL,
  POS(1630, 11)
};

static TAB_NUM t_lambda_165[] = {
  2, // locals
  0, // parameters
  // value << 3)+(chr-'0')
  var_std__shift_left, 2, var_1612_1_value, num_3, 1, LOCAL(1),
  // chr-'0')
  var_std__minus, 2, var_1629_7_chr, chr_48, 1, LOCAL(2),
  // !value (value << 3)+(chr-'0')
  var_std__plus, 2, LOCAL(1), LOCAL(2), 1, var_1612_1_value,
  // next
  var_next, 0, TAIL_CALL,
  POS(1632, 23),
  POS(1632, 36),
  POS(1632, 15),
  POS(1633, 15)
};

static TAB_NUM t_lambda_166[] = {
  0, // locals
  0, // parameters
  // partial_match idx
  func_partial_match, 1, var_1629_3_idx, TAIL_CALL,
  POS(1635, 15)
};

static TAB_NUM t_lambda_167[] = {
  1, // locals
  0, // parameters
  // self .has_prefix. "0x":
  var_has_prefix, 2, var_1585_0_self, str_0x, 1, LOCAL(1),
  //  self .has_prefix. "0x":
  LET, 2, LOCAL(1), lambda_168, TAIL_CALL,
  POS(1637, 8),
  POS(1637, 7)
};

static TAB_NUM t_lambda_168[] = {
  0, // locals
  0, // parameters
  // range &self 3 -1
  var_range, 3, var_1585_0_self, num_3, minus_num_1, 1, var_1585_0_self,
  // for_each self
  var_for_each, 3, var_1585_0_self, lambda_169, func_exhausted, TAIL_CALL,
  POS(1638, 7),
  POS(1639, 7)
};

static TAB_NUM t_lambda_169[] = {
  0, // locals
  2, // parameters
  var_1640_3_idx,
  var_1640_7_chr,
  // case chr
  var_case, 8, var_1640_7_chr, value_range_1420_1, lambda_170, value_range_1645_1, lambda_a__f, value_range_1648_1, lambda_A__F, lambda_171, TAIL_CALL,
  POS(1641, 11)
};

static TAB_NUM t_lambda_170[] = {
  2, // locals
  0, // parameters
  // value << 4)+(chr-'0')
  var_std__shift_left, 2, var_1612_1_value, num_4, 1, LOCAL(1),
  // chr-'0')
  var_std__minus, 2, var_1640_7_chr, chr_48, 1, LOCAL(2),
  // !value (value << 4)+(chr-'0')
  var_std__plus, 2, LOCAL(1), LOCAL(2), 1, var_1612_1_value,
  // next
  var_next, 0, TAIL_CALL,
  POS(1643, 23),
  POS(1643, 36),
  POS(1643, 15),
  POS(1644, 15)
};

static TAB_NUM t_lambda_a__f[] = {
  3, // locals
  0, // parameters
  // value << 4)+(chr-'a')+10
  var_std__shift_left, 2, var_1612_1_value, num_4, 1, LOCAL(1),
  // chr-'a')+10
  var_std__minus, 2, var_1640_7_chr, chr_97, 1, LOCAL(2),
  // value << 4)+(chr-'a')+10
  var_std__plus, 2, LOCAL(1), LOCAL(2), 1, LOCAL(3),
  // !value (value << 4)+(chr-'a')+10
  var_std__plus, 2, LOCAL(3), num_10, 1, var_1612_1_value,
  // next
  var_next, 0, TAIL_CALL,
  POS(1646, 23),
  POS(1646, 36),
  POS(1646, 23),
  POS(1646, 15),
  POS(1647, 15)
};

static TAB_NUM t_lambda_A__F[] = {
  3, // locals
  0, // parameters
  // value << 4)+(chr-'A')+10
  var_std__shift_left, 2, var_1612_1_value, num_4, 1, LOCAL(1),
  // chr-'A')+10
  var_std__minus, 2, var_1640_7_chr, chr_65, 1, LOCAL(2),
  // value << 4)+(chr-'A')+10
  var_std__plus, 2, LOCAL(1), LOCAL(2), 1, LOCAL(3),
  // !value (value << 4)+(chr-'A')+10
  var_std__plus, 2, LOCAL(3), num_10, 1, var_1612_1_value,
  // next
  var_next, 0, TAIL_CALL,
  POS(1649, 23),
  POS(1649, 36),
  POS(1649, 23),
  POS(1649, 15),
  POS(1650, 15)
};

static TAB_NUM t_lambda_171[] = {
  0, // locals
  0, // parameters
  // partial_match idx
  func_partial_match, 1, var_1640_3_idx, TAIL_CALL,
  POS(1652, 15)
};

static TAB_NUM t_lambda_172[] = {
  0, // locals
  0, // parameters
  //  true:
  LET, 2, var_true, lambda_173, TAIL_CALL,
  POS(1654, 7)
};

static TAB_NUM t_lambda_173[] = {
  0, // locals
  0, // parameters
  // for_each self
  var_for_each, 3, var_1585_0_self, lambda_174, func_exhausted, TAIL_CALL,
  POS(1655, 7)
};

static TAB_NUM t_lambda_174[] = {
  0, // locals
  2, // parameters
  var_1656_3_idx,
  var_1656_7_chr,
  // case chr
  var_case, 4, var_1656_7_chr, value_range_1420_1, lambda_175, lambda_176, TAIL_CALL,
  POS(1657, 11)
};

static TAB_NUM t_lambda_175[] = {
  2, // locals
  0, // parameters
  // 10*value+(chr-'0')
  var_std__times, 2, num_10, var_1612_1_value, 1, LOCAL(1),
  // chr-'0')
  var_std__minus, 2, var_1656_7_chr, chr_48, 1, LOCAL(2),
  // !value 10*value+(chr-'0')
  var_std__plus, 2, LOCAL(1), LOCAL(2), 1, var_1612_1_value,
  // next
  var_next, 0, TAIL_CALL,
  POS(1659, 22),
  POS(1659, 32),
  POS(1659, 15),
  POS(1660, 15)
};

static TAB_NUM t_lambda_176[] = {
  0, // locals
  0, // parameters
  // partial_match idx
  func_partial_match, 1, var_1656_3_idx, TAIL_CALL,
  POS(1662, 15)
};

static TAB_NUM t_func_std__parse_number[] = {
  1, // locals
  1, // parameters
  var_1692_0_self,
  // $i 1
  LET, 1, num_1, 1, var_1694_1_i,
  // $n length_of(self)
  var_length_of, 1, var_1692_0_self, 1, var_1695_1_n,
  // n
  var_std__less, 2, var_1695_1_n, var_1694_1_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_177, lambda_178, TAIL_CALL,
  POS(1694, 3),
  POS(1695, 3),
  POS(1697, 9),
  POS(1696, 3)
};

static TAB_NUM t_lambda_177[] = {
  0, // locals
  0, // parameters
  //  self undefined
  LET, 2, var_1692_0_self, var_undefined, TAIL_CALL,
  POS(1698, 7)
};

static TAB_NUM t_lambda_178[] = {
  3, // locals
  0, // parameters
  // $sign_chr self(1)
  var_1692_0_self, 1, num_1, 1, var_1700_1_sign_chr,
  // sign_chr == '-' || sign_chr == '+' &i -> i+1
  var_std__equal, 2, var_1700_1_sign_chr, chr_45, 1, LOCAL(1),
  // sign_chr == '-' || sign_chr == '+' &i -> i+1
  var_std__or, 2, LOCAL(1), lambda_179, 1, LOCAL(2),
  // update_if sign_chr == '-' || sign_chr == '+' &i -> i+1
  var_update_if, 3, LOCAL(2), var_1694_1_i, lambda_180, 1, var_1694_1_i,
  // self(i) == '0' && i+1 < n:
  var_1692_0_self, 1, var_1694_1_i, 1, LOCAL(1),
  // self(i) == '0' && i+1 < n:
  var_std__equal, 2, LOCAL(1), chr_48, 1, LOCAL(2),
  // self(i) == '0' && i+1 < n:
  var_std__and, 2, LOCAL(2), lambda_181, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_182, func_parse, TAIL_CALL,
  POS(1700, 7),
  POS(1701, 17),
  POS(1701, 17),
  POS(1701, 7),
  POS(1703, 9),
  POS(1703, 9),
  POS(1703, 9),
  POS(1702, 7)
};

static TAB_NUM t_lambda_179[] = {
  1, // locals
  0, // parameters
  // sign_chr == '+' &i -> i+1
  var_std__equal, 2, var_1700_1_sign_chr, chr_43, 1, LOCAL(1),
  // sign_chr == '+' &i -> i+1
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1701, 36),
  POS(1701, 36)
};

static TAB_NUM t_lambda_180[] = {
  1, // locals
  0, // parameters
  // i+1
  var_std__plus, 2, var_1694_1_i, num_1, 1, LOCAL(1),
  //  i+1
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1701, 58),
  POS(1701, 57)
};

static TAB_NUM t_lambda_181[] = {
  2, // locals
  0, // parameters
  // i+1 < n:
  var_std__plus, 2, var_1694_1_i, num_1, 1, LOCAL(1),
  // i+1 < n:
  var_std__less, 2, LOCAL(1), var_1695_1_n, 1, LOCAL(2),
  // i+1 < n:
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1703, 27),
  POS(1703, 27),
  POS(1703, 27)
};

static TAB_NUM t_lambda_182[] = {
  2, // locals
  0, // parameters
  // i+1)
  var_std__plus, 2, var_1694_1_i, num_1, 1, LOCAL(1),
  // self(i+1)
  var_1692_0_self, 1, LOCAL(1), 1, LOCAL(2),
  // case self(i+1)
  var_case, 8, LOCAL(2), chr_98, lambda_b, chr_111, lambda_o, chr_120, lambda_x, func_parse, TAIL_CALL,
  POS(1704, 21),
  POS(1704, 16),
  POS(1704, 11)
};

static TAB_NUM t_lambda_b[] = {
  1, // locals
  0, // parameters
  // i+2
  var_std__plus, 2, var_1694_1_i, num_2, 1, LOCAL(1),
  // parse_binary self i+2
  func_parse_binary, 2, var_1692_0_self, LOCAL(1), TAIL_CALL,
  POS(1705, 36),
  POS(1705, 18)
};

static TAB_NUM t_lambda_o[] = {
  1, // locals
  0, // parameters
  // i+2
  var_std__plus, 2, var_1694_1_i, num_2, 1, LOCAL(1),
  // parse_octal self i+2
  func_parse_octal, 2, var_1692_0_self, LOCAL(1), TAIL_CALL,
  POS(1706, 35),
  POS(1706, 18)
};

static TAB_NUM t_lambda_x[] = {
  1, // locals
  0, // parameters
  // i+2
  var_std__plus, 2, var_1694_1_i, num_2, 1, LOCAL(1),
  // parse_hex self i+2
  var_parse_hex, 2, var_1692_0_self, LOCAL(1), TAIL_CALL,
  POS(1707, 33),
  POS(1707, 18)
};

static TAB_NUM t_func_parse[] = {
  0, // locals
  0, // parameters
  // skip_one_ore_more_digits:
  func_skip_one_ore_more_digits, 1, lambda_skip_one_ore_more_digits, TAIL_CALL,
  POS(1712, 5)
};

static TAB_NUM t_lambda_skip_one_ore_more_digits[] = {
  1, // locals
  0, // parameters
  // n return_integer
  var_std__less, 2, var_1695_1_n, var_1694_1_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), func_return_integer, lambda_183, TAIL_CALL,
  POS(1714, 13),
  POS(1713, 7)
};

static TAB_NUM t_lambda_183[] = {
  1, // locals
  0, // parameters
  // self(i)
  var_1692_0_self, 1, var_1694_1_i, 1, LOCAL(1),
  // case self(i)
  var_case, 6, LOCAL(1), chr_46, lambda_184, sequence_1727_1, func_handle_exponent, func_return_integer, TAIL_CALL,
  POS(1716, 16),
  POS(1716, 11)
};

static TAB_NUM t_lambda_184[] = {
  0, // locals
  0, // parameters
  // !i i+1
  var_std__plus, 2, var_1694_1_i, num_1, 1, var_1694_1_i,
  // skip_one_ore_more_digits:
  func_skip_one_ore_more_digits, 1, lambda_2_skip_one_ore_more_digits, TAIL_CALL,
  POS(1718, 15),
  POS(1719, 15)
};

static TAB_NUM t_lambda_2_skip_one_ore_more_digits[] = {
  1, // locals
  0, // parameters
  // n
  var_std__less, 2, var_1695_1_n, var_1694_1_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), func_return_real, lambda_185, TAIL_CALL,
  POS(1721, 23),
  POS(1720, 17)
};

static TAB_NUM t_lambda_185[] = {
  1, // locals
  0, // parameters
  // self(i)
  var_1692_0_self, 1, var_1694_1_i, 1, LOCAL(1),
  // case self(i)
  var_case, 4, LOCAL(1), sequence_1727_1, func_handle_exponent, func_return_real, TAIL_CALL,
  POS(1724, 26),
  POS(1724, 21)
};

static TAB_NUM t_func_skip_one_ore_more_digits[] = {
  1, // locals
  1, // parameters
  var_1730_28_cont,
  // n
  var_std__less, 2, var_1695_1_n, var_1694_1_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_186, lambda_187, TAIL_CALL,
  POS(1732, 13),
  POS(1731, 7)
};

static TAB_NUM t_lambda_186[] = {
  0, // locals
  0, // parameters
  //  self undefined
  LET, 2, var_1692_0_self, var_undefined, TAIL_CALL,
  POS(1733, 11)
};

static TAB_NUM t_lambda_187[] = {
  2, // locals
  0, // parameters
  // $digit self(i)
  var_1692_0_self, 1, var_1694_1_i, 1, var_1735_1_digit,
  // digit < '0' || digit > '9'
  var_std__less, 2, var_1735_1_digit, chr_48, 1, LOCAL(1),
  // digit < '0' || digit > '9'
  var_std__or, 2, LOCAL(1), lambda_188, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_189, lambda_190, TAIL_CALL,
  POS(1735, 11),
  POS(1737, 13),
  POS(1737, 13),
  POS(1736, 11)
};

static TAB_NUM t_lambda_188[] = {
  1, // locals
  0, // parameters
  // 9'
  var_std__less, 2, chr_57, var_1735_1_digit, 1, LOCAL(1),
  // digit > '9'
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1737, 37),
  POS(1737, 28)
};

static TAB_NUM t_lambda_189[] = {
  0, // locals
  0, // parameters
  //  self undefined
  LET, 2, var_1692_0_self, var_undefined, TAIL_CALL,
  POS(1738, 15)
};

static TAB_NUM t_lambda_190[] = {
  0, // locals
  0, // parameters
  // loop:
  var_loop, 1, lambda_11_loop, TAIL_CALL,
  POS(1740, 15)
};

static TAB_NUM t_lambda_11_loop[] = {
  1, // locals
  0, // parameters
  // !i i+1
  var_std__plus, 2, var_1694_1_i, num_1, 1, var_1694_1_i,
  // n
  var_std__less, 2, var_1695_1_n, var_1694_1_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), var_1730_28_cont, lambda_191, TAIL_CALL,
  POS(1741, 17),
  POS(1743, 23),
  POS(1742, 17)
};

static TAB_NUM t_lambda_191[] = {
  3, // locals
  0, // parameters
  // $next_digit self(i)
  var_1692_0_self, 1, var_1694_1_i, 1, var_1746_1_next_digit,
  // next_digit >= '0' && next_digit <= '9'
  var_std__less, 2, var_1746_1_next_digit, chr_48, 1, LOCAL(1),
  // next_digit >= '0' && next_digit <= '9'
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // next_digit >= '0' && next_digit <= '9'
  var_std__and, 2, LOCAL(2), lambda_192, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), var_next, var_1730_28_cont, TAIL_CALL,
  POS(1746, 21),
  POS(1748, 23),
  POS(1748, 23),
  POS(1748, 23),
  POS(1747, 21)
};

static TAB_NUM t_lambda_192[] = {
  2, // locals
  0, // parameters
  // 9'
  var_std__less, 2, chr_57, var_1746_1_next_digit, 1, LOCAL(1),
  // 9'
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // next_digit <= '9'
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1748, 59),
  POS(1748, 59),
  POS(1748, 44)
};

static TAB_NUM t_func_handle_exponent[] = {
  1, // locals
  0, // parameters
  // !i i+1
  var_std__plus, 2, var_1694_1_i, num_1, 1, var_1694_1_i,
  // n
  var_std__less, 2, var_1695_1_n, var_1694_1_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_193, lambda_194, TAIL_CALL,
  POS(1753, 7),
  POS(1755, 13),
  POS(1754, 7)
};

static TAB_NUM t_lambda_193[] = {
  0, // locals
  0, // parameters
  //  self undefined
  LET, 2, var_1692_0_self, var_undefined, TAIL_CALL,
  POS(1756, 11)
};

static TAB_NUM t_lambda_194[] = {
  2, // locals
  0, // parameters
  // $exp_sign_chr self(i)
  var_1692_0_self, 1, var_1694_1_i, 1, var_1758_1_exp_sign_chr,
  // exp_sign_chr == '-' || exp_sign_chr == '+' &i -> i+1
  var_std__equal, 2, var_1758_1_exp_sign_chr, chr_45, 1, LOCAL(1),
  // exp_sign_chr == '-' || exp_sign_chr == '+' &i -> i+1
  var_std__or, 2, LOCAL(1), lambda_195, 1, LOCAL(2),
  // update_if exp_sign_chr == '-' || exp_sign_chr == '+' &i -> i+1
  var_update_if, 3, LOCAL(2), var_1694_1_i, lambda_196, 1, var_1694_1_i,
  // skip_one_ore_more_digits return_real
  func_skip_one_ore_more_digits, 1, func_return_real, TAIL_CALL,
  POS(1758, 11),
  POS(1759, 21),
  POS(1759, 21),
  POS(1759, 11),
  POS(1760, 11)
};

static TAB_NUM t_lambda_195[] = {
  1, // locals
  0, // parameters
  // exp_sign_chr == '+' &i -> i+1
  var_std__equal, 2, var_1758_1_exp_sign_chr, chr_43, 1, LOCAL(1),
  // exp_sign_chr == '+' &i -> i+1
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1759, 44),
  POS(1759, 44)
};

static TAB_NUM t_lambda_196[] = {
  1, // locals
  0, // parameters
  // i+1
  var_std__plus, 2, var_1694_1_i, num_1, 1, LOCAL(1),
  //  i+1
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1759, 70),
  POS(1759, 69)
};

static TAB_NUM t_func_return_integer[] = {
  4, // locals
  0, // parameters
  // range(self i -1) integer(range(self 1 i-1))
  var_range, 3, var_1692_0_self, var_1694_1_i, minus_num_1, 1, LOCAL(1),
  // i-1))
  var_std__minus, 2, var_1694_1_i, num_1, 1, LOCAL(2),
  // range(self 1 i-1))
  var_range, 3, var_1692_0_self, num_1, LOCAL(2), 1, LOCAL(3),
  // integer(range(self 1 i-1))
  var_integer, 1, LOCAL(3), 1, LOCAL(4),
  //  range(self i -1) integer(range(self 1 i-1))
  LET, 2, LOCAL(1), LOCAL(4), TAIL_CALL,
  POS(1762, 24),
  POS(1762, 62),
  POS(1762, 49),
  POS(1762, 41),
  POS(1762, 23)
};

static TAB_NUM t_func_return_real[] = {
  4, // locals
  0, // parameters
  // range(self i -1) real(range(self 1 i-1))
  var_range, 3, var_1692_0_self, var_1694_1_i, minus_num_1, 1, LOCAL(1),
  // i-1))
  var_std__minus, 2, var_1694_1_i, num_1, 1, LOCAL(2),
  // range(self 1 i-1))
  var_range, 3, var_1692_0_self, num_1, LOCAL(2), 1, LOCAL(3),
  // real(range(self 1 i-1))
  var_real, 1, LOCAL(3), 1, LOCAL(4),
  //  range(self i -1) real(range(self 1 i-1))
  LET, 2, LOCAL(1), LOCAL(4), TAIL_CALL,
  POS(1764, 21),
  POS(1764, 56),
  POS(1764, 43),
  POS(1764, 38),
  POS(1764, 20)
};

static TAB_NUM t_func_parse_binary[] = {
  1, // locals
  2, // parameters
  var_1766_16_str,
  var_1766_20_i,
  // $n length_of(str)
  var_length_of, 1, var_1766_16_str, 1, var_1767_1_n,
  // n -> str undefined
  var_std__less, 2, var_1767_1_n, var_1766_20_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_197, lambda_198, TAIL_CALL,
  POS(1767, 3),
  POS(1769, 9),
  POS(1768, 3)
};

static TAB_NUM t_lambda_197[] = {
  0, // locals
  0, // parameters
  //  str undefined
  LET, 2, var_1766_16_str, var_undefined, TAIL_CALL,
  POS(1769, 13)
};

static TAB_NUM t_lambda_198[] = {
  2, // locals
  0, // parameters
  // $digit str(i)
  var_1766_16_str, 1, var_1766_20_i, 1, var_1771_1_digit,
  // digit < '0' || digit > '1'
  var_std__less, 2, var_1771_1_digit, chr_48, 1, LOCAL(1),
  // digit < '0' || digit > '1'
  var_std__or, 2, LOCAL(1), lambda_199, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_200, lambda_201, TAIL_CALL,
  POS(1771, 7),
  POS(1773, 9),
  POS(1773, 9),
  POS(1772, 7)
};

static TAB_NUM t_lambda_199[] = {
  1, // locals
  0, // parameters
  // 1'
  var_std__less, 2, chr_49, var_1771_1_digit, 1, LOCAL(1),
  // digit > '1'
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1773, 33),
  POS(1773, 24)
};

static TAB_NUM t_lambda_200[] = {
  0, // locals
  0, // parameters
  //  str undefined
  LET, 2, var_1766_16_str, var_undefined, TAIL_CALL,
  POS(1774, 11)
};

static TAB_NUM t_lambda_201[] = {
  0, // locals
  0, // parameters
  // $value digit-'0'
  var_std__minus, 2, var_1771_1_digit, chr_48, 1, var_1776_1_value,
  // loop:
  var_loop, 1, lambda_12_loop, TAIL_CALL,
  POS(1776, 11),
  POS(1777, 11)
};

static TAB_NUM t_lambda_12_loop[] = {
  1, // locals
  0, // parameters
  // !i i+1
  var_std__plus, 2, var_1766_20_i, num_1, 1, var_1766_20_i,
  // n
  var_std__less, 2, var_1767_1_n, var_1766_20_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_202, lambda_203, TAIL_CALL,
  POS(1778, 13),
  POS(1780, 19),
  POS(1779, 13)
};

static TAB_NUM t_lambda_202[] = {
  0, // locals
  0, // parameters
  //  "" value
  LET, 2, string_1, var_1776_1_value, TAIL_CALL,
  POS(1781, 17)
};

static TAB_NUM t_lambda_203[] = {
  3, // locals
  0, // parameters
  // $next_digit str(i)
  var_1766_16_str, 1, var_1766_20_i, 1, var_1783_1_next_digit,
  // next_digit >= '0' && next_digit <= '1':
  var_std__less, 2, var_1783_1_next_digit, chr_48, 1, LOCAL(1),
  // next_digit >= '0' && next_digit <= '1':
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // next_digit >= '0' && next_digit <= '1':
  var_std__and, 2, LOCAL(2), lambda_204, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_205, lambda_206, TAIL_CALL,
  POS(1783, 17),
  POS(1785, 19),
  POS(1785, 19),
  POS(1785, 19),
  POS(1784, 17)
};

static TAB_NUM t_lambda_204[] = {
  2, // locals
  0, // parameters
  // 1':
  var_std__less, 2, chr_49, var_1783_1_next_digit, 1, LOCAL(1),
  // 1':
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // next_digit <= '1':
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1785, 55),
  POS(1785, 55),
  POS(1785, 40)
};

static TAB_NUM t_lambda_205[] = {
  2, // locals
  0, // parameters
  // value << 1)+(next_digit-'0')
  var_std__shift_left, 2, var_1776_1_value, num_1, 1, LOCAL(1),
  // next_digit-'0')
  var_std__minus, 2, var_1783_1_next_digit, chr_48, 1, LOCAL(2),
  // !value (value << 1)+(next_digit-'0')
  var_std__plus, 2, LOCAL(1), LOCAL(2), 1, var_1776_1_value,
  // next
  var_next, 0, TAIL_CALL,
  POS(1786, 29),
  POS(1786, 42),
  POS(1786, 21),
  POS(1787, 21)
};

static TAB_NUM t_lambda_206[] = {
  1, // locals
  0, // parameters
  // range(str i -1) value
  var_range, 3, var_1766_16_str, var_1766_20_i, minus_num_1, 1, LOCAL(1),
  //  range(str i -1) value
  LET, 2, LOCAL(1), var_1776_1_value, TAIL_CALL,
  POS(1788, 22),
  POS(1788, 21)
};

static TAB_NUM t_func_parse_octal[] = {
  1, // locals
  2, // parameters
  var_1790_15_str,
  var_1790_19_i,
  // $n length_of(str)
  var_length_of, 1, var_1790_15_str, 1, var_1791_1_n,
  // n -> str undefined
  var_std__less, 2, var_1791_1_n, var_1790_19_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_207, lambda_208, TAIL_CALL,
  POS(1791, 3),
  POS(1793, 9),
  POS(1792, 3)
};

static TAB_NUM t_lambda_207[] = {
  0, // locals
  0, // parameters
  //  str undefined
  LET, 2, var_1790_15_str, var_undefined, TAIL_CALL,
  POS(1793, 13)
};

static TAB_NUM t_lambda_208[] = {
  2, // locals
  0, // parameters
  // $digit str(i)
  var_1790_15_str, 1, var_1790_19_i, 1, var_1795_1_digit,
  // digit < '0' || digit > '7'
  var_std__less, 2, var_1795_1_digit, chr_48, 1, LOCAL(1),
  // digit < '0' || digit > '7'
  var_std__or, 2, LOCAL(1), lambda_209, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_210, lambda_211, TAIL_CALL,
  POS(1795, 7),
  POS(1797, 9),
  POS(1797, 9),
  POS(1796, 7)
};

static TAB_NUM t_lambda_209[] = {
  1, // locals
  0, // parameters
  // 7'
  var_std__less, 2, chr_55, var_1795_1_digit, 1, LOCAL(1),
  // digit > '7'
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1797, 33),
  POS(1797, 24)
};

static TAB_NUM t_lambda_210[] = {
  0, // locals
  0, // parameters
  //  str undefined
  LET, 2, var_1790_15_str, var_undefined, TAIL_CALL,
  POS(1798, 11)
};

static TAB_NUM t_lambda_211[] = {
  0, // locals
  0, // parameters
  // $value digit-'0'
  var_std__minus, 2, var_1795_1_digit, chr_48, 1, var_1800_1_value,
  // loop:
  var_loop, 1, lambda_13_loop, TAIL_CALL,
  POS(1800, 11),
  POS(1801, 11)
};

static TAB_NUM t_lambda_13_loop[] = {
  1, // locals
  0, // parameters
  // !i i+1
  var_std__plus, 2, var_1790_19_i, num_1, 1, var_1790_19_i,
  // n
  var_std__less, 2, var_1791_1_n, var_1790_19_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_212, lambda_213, TAIL_CALL,
  POS(1802, 13),
  POS(1804, 19),
  POS(1803, 13)
};

static TAB_NUM t_lambda_212[] = {
  0, // locals
  0, // parameters
  //  "" value
  LET, 2, string_1, var_1800_1_value, TAIL_CALL,
  POS(1805, 17)
};

static TAB_NUM t_lambda_213[] = {
  3, // locals
  0, // parameters
  // $next_digit str(i)
  var_1790_15_str, 1, var_1790_19_i, 1, var_1807_1_next_digit,
  // next_digit >= '0' && next_digit <= '7':
  var_std__less, 2, var_1807_1_next_digit, chr_48, 1, LOCAL(1),
  // next_digit >= '0' && next_digit <= '7':
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // next_digit >= '0' && next_digit <= '7':
  var_std__and, 2, LOCAL(2), lambda_214, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_215, lambda_216, TAIL_CALL,
  POS(1807, 17),
  POS(1809, 19),
  POS(1809, 19),
  POS(1809, 19),
  POS(1808, 17)
};

static TAB_NUM t_lambda_214[] = {
  2, // locals
  0, // parameters
  // 7':
  var_std__less, 2, chr_55, var_1807_1_next_digit, 1, LOCAL(1),
  // 7':
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // next_digit <= '7':
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1809, 55),
  POS(1809, 55),
  POS(1809, 40)
};

static TAB_NUM t_lambda_215[] = {
  2, // locals
  0, // parameters
  // value << 3)+(next_digit-'0')
  var_std__shift_left, 2, var_1800_1_value, num_3, 1, LOCAL(1),
  // next_digit-'0')
  var_std__minus, 2, var_1807_1_next_digit, chr_48, 1, LOCAL(2),
  // !value (value << 3)+(next_digit-'0')
  var_std__plus, 2, LOCAL(1), LOCAL(2), 1, var_1800_1_value,
  // next
  var_next, 0, TAIL_CALL,
  POS(1810, 29),
  POS(1810, 42),
  POS(1810, 21),
  POS(1811, 21)
};

static TAB_NUM t_lambda_216[] = {
  1, // locals
  0, // parameters
  // range(str i -1) value
  var_range, 3, var_1790_15_str, var_1790_19_i, minus_num_1, 1, LOCAL(1),
  //  range(str i -1) value
  LET, 2, LOCAL(1), var_1800_1_value, TAIL_CALL,
  POS(1812, 22),
  POS(1812, 21)
};

static TAB_NUM t_func_std__parse_hex[] = {
  1, // locals
  -2, // parameters
  MANDATORY_PARAMETER, var_1842_0_str,
  num_1, var_1843_0_i,
  // $n length_of(str)
  var_length_of, 1, var_1842_0_str, 1, var_1845_1_n,
  // n -> str undefined
  var_std__less, 2, var_1845_1_n, var_1843_0_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_217, lambda_218, TAIL_CALL,
  POS(1845, 3),
  POS(1847, 9),
  POS(1846, 3)
};

static TAB_NUM t_lambda_217[] = {
  0, // locals
  0, // parameters
  //  str undefined
  LET, 2, var_1842_0_str, var_undefined, TAIL_CALL,
  POS(1847, 13)
};

static TAB_NUM t_lambda_218[] = {
  0, // locals
  0, // parameters
  // $digit str(i)
  var_1842_0_str, 1, var_1843_0_i, 1, var_1849_1_digit,
  // cond
  var_cond, 4, lambda_219, lambda_222, lambda_225, lambda_228, TAIL_CALL,
  POS(1849, 7),
  POS(1850, 7)
};

static TAB_NUM t_lambda_219[] = {
  3, // locals
  0, // parameters
  // digit >= '0' && digit <= '9':
  var_std__less, 2, var_1849_1_digit, chr_48, 1, LOCAL(1),
  // digit >= '0' && digit <= '9':
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // digit >= '0' && digit <= '9':
  var_std__and, 2, LOCAL(2), lambda_220, 1, LOCAL(3),
  //  digit >= '0' && digit <= '9':
  LET, 2, LOCAL(3), lambda_221, TAIL_CALL,
  POS(1851, 12),
  POS(1851, 12),
  POS(1851, 12),
  POS(1851, 11)
};

static TAB_NUM t_lambda_220[] = {
  2, // locals
  0, // parameters
  // 9':
  var_std__less, 2, chr_57, var_1849_1_digit, 1, LOCAL(1),
  // 9':
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // digit <= '9':
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1851, 38),
  POS(1851, 38),
  POS(1851, 28)
};

static TAB_NUM t_lambda_221[] = {
  1, // locals
  0, // parameters
  // digit-'0'
  var_std__minus, 2, var_1849_1_digit, chr_48, 1, LOCAL(1),
  // handle_more_digits digit-'0'
  func_handle_more_digits, 1, LOCAL(1), TAIL_CALL,
  POS(1852, 30),
  POS(1852, 11)
};

static TAB_NUM t_lambda_222[] = {
  3, // locals
  0, // parameters
  // digit >= 'a' && digit <= 'f':
  var_std__less, 2, var_1849_1_digit, chr_97, 1, LOCAL(1),
  // digit >= 'a' && digit <= 'f':
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // digit >= 'a' && digit <= 'f':
  var_std__and, 2, LOCAL(2), lambda_223, 1, LOCAL(3),
  //  digit >= 'a' && digit <= 'f':
  LET, 2, LOCAL(3), lambda_224, TAIL_CALL,
  POS(1853, 12),
  POS(1853, 12),
  POS(1853, 12),
  POS(1853, 11)
};

static TAB_NUM t_lambda_223[] = {
  2, // locals
  0, // parameters
  // f':
  var_std__less, 2, chr_102, var_1849_1_digit, 1, LOCAL(1),
  // f':
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // digit <= 'f':
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1853, 38),
  POS(1853, 38),
  POS(1853, 28)
};

static TAB_NUM t_lambda_224[] = {
  2, // locals
  0, // parameters
  // digit-'a')+10
  var_std__minus, 2, var_1849_1_digit, chr_97, 1, LOCAL(1),
  // digit-'a')+10
  var_std__plus, 2, LOCAL(1), num_10, 1, LOCAL(2),
  // handle_more_digits (digit-'a')+10
  func_handle_more_digits, 1, LOCAL(2), TAIL_CALL,
  POS(1854, 31),
  POS(1854, 31),
  POS(1854, 11)
};

static TAB_NUM t_lambda_225[] = {
  3, // locals
  0, // parameters
  // digit >= 'A' && digit <= 'F':
  var_std__less, 2, var_1849_1_digit, chr_65, 1, LOCAL(1),
  // digit >= 'A' && digit <= 'F':
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // digit >= 'A' && digit <= 'F':
  var_std__and, 2, LOCAL(2), lambda_226, 1, LOCAL(3),
  //  digit >= 'A' && digit <= 'F':
  LET, 2, LOCAL(3), lambda_227, TAIL_CALL,
  POS(1855, 12),
  POS(1855, 12),
  POS(1855, 12),
  POS(1855, 11)
};

static TAB_NUM t_lambda_226[] = {
  2, // locals
  0, // parameters
  // F':
  var_std__less, 2, chr_70, var_1849_1_digit, 1, LOCAL(1),
  // F':
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // digit <= 'F':
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1855, 38),
  POS(1855, 38),
  POS(1855, 28)
};

static TAB_NUM t_lambda_227[] = {
  2, // locals
  0, // parameters
  // digit-'A')+10
  var_std__minus, 2, var_1849_1_digit, chr_65, 1, LOCAL(1),
  // digit-'A')+10
  var_std__plus, 2, LOCAL(1), num_10, 1, LOCAL(2),
  // handle_more_digits (digit-'A')+10
  func_handle_more_digits, 1, LOCAL(2), TAIL_CALL,
  POS(1856, 31),
  POS(1856, 31),
  POS(1856, 11)
};

static TAB_NUM t_lambda_228[] = {
  0, // locals
  0, // parameters
  //  true -> str undefined
  LET, 2, var_true, lambda_229, TAIL_CALL,
  POS(1857, 11)
};

static TAB_NUM t_lambda_229[] = {
  0, // locals
  0, // parameters
  //  str undefined
  LET, 2, var_1842_0_str, var_undefined, TAIL_CALL,
  POS(1857, 19)
};

static TAB_NUM t_func_handle_more_digits[] = {
  0, // locals
  1, // parameters
  var_1859_22_value,
  // loop:
  var_loop, 1, lambda_14_loop, TAIL_CALL,
  POS(1860, 9)
};

static TAB_NUM t_lambda_14_loop[] = {
  1, // locals
  0, // parameters
  // !i i+1
  var_std__plus, 2, var_1843_0_i, num_1, 1, var_1843_0_i,
  // n
  var_std__less, 2, var_1845_1_n, var_1843_0_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_230, lambda_231, TAIL_CALL,
  POS(1861, 11),
  POS(1863, 17),
  POS(1862, 11)
};

static TAB_NUM t_lambda_230[] = {
  0, // locals
  0, // parameters
  //  "" value
  LET, 2, string_1, var_1859_22_value, TAIL_CALL,
  POS(1864, 15)
};

static TAB_NUM t_lambda_231[] = {
  0, // locals
  0, // parameters
  // $next_digit str(i)
  var_1842_0_str, 1, var_1843_0_i, 1, var_1866_1_next_digit,
  // cond
  var_cond, 4, lambda_232, lambda_235, lambda_238, lambda_241, TAIL_CALL,
  POS(1866, 15),
  POS(1867, 15)
};

static TAB_NUM t_lambda_232[] = {
  3, // locals
  0, // parameters
  // next_digit >= '0' && next_digit <= '9':
  var_std__less, 2, var_1866_1_next_digit, chr_48, 1, LOCAL(1),
  // next_digit >= '0' && next_digit <= '9':
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // next_digit >= '0' && next_digit <= '9':
  var_std__and, 2, LOCAL(2), lambda_233, 1, LOCAL(3),
  //  next_digit >= '0' && next_digit <= '9':
  LET, 2, LOCAL(3), lambda_234, TAIL_CALL,
  POS(1868, 20),
  POS(1868, 20),
  POS(1868, 20),
  POS(1868, 19)
};

static TAB_NUM t_lambda_233[] = {
  2, // locals
  0, // parameters
  // 9':
  var_std__less, 2, chr_57, var_1866_1_next_digit, 1, LOCAL(1),
  // 9':
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // next_digit <= '9':
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1868, 56),
  POS(1868, 56),
  POS(1868, 41)
};

static TAB_NUM t_lambda_234[] = {
  2, // locals
  0, // parameters
  // value << 4)+(next_digit-'0')
  var_std__shift_left, 2, var_1859_22_value, num_4, 1, LOCAL(1),
  // next_digit-'0')
  var_std__minus, 2, var_1866_1_next_digit, chr_48, 1, LOCAL(2),
  // !value (value << 4)+(next_digit-'0')
  var_std__plus, 2, LOCAL(1), LOCAL(2), 1, var_1859_22_value,
  // next
  var_next, 0, TAIL_CALL,
  POS(1869, 27),
  POS(1869, 40),
  POS(1869, 19),
  POS(1870, 19)
};

static TAB_NUM t_lambda_235[] = {
  3, // locals
  0, // parameters
  // next_digit >= 'a' && next_digit <= 'f':
  var_std__less, 2, var_1866_1_next_digit, chr_97, 1, LOCAL(1),
  // next_digit >= 'a' && next_digit <= 'f':
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // next_digit >= 'a' && next_digit <= 'f':
  var_std__and, 2, LOCAL(2), lambda_236, 1, LOCAL(3),
  //  next_digit >= 'a' && next_digit <= 'f':
  LET, 2, LOCAL(3), lambda_237, TAIL_CALL,
  POS(1871, 20),
  POS(1871, 20),
  POS(1871, 20),
  POS(1871, 19)
};

static TAB_NUM t_lambda_236[] = {
  2, // locals
  0, // parameters
  // f':
  var_std__less, 2, chr_102, var_1866_1_next_digit, 1, LOCAL(1),
  // f':
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // next_digit <= 'f':
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1871, 56),
  POS(1871, 56),
  POS(1871, 41)
};

static TAB_NUM t_lambda_237[] = {
  3, // locals
  0, // parameters
  // value << 4)+(next_digit-'a')+10
  var_std__shift_left, 2, var_1859_22_value, num_4, 1, LOCAL(1),
  // next_digit-'a')+10
  var_std__minus, 2, var_1866_1_next_digit, chr_97, 1, LOCAL(2),
  // value << 4)+(next_digit-'a')+10
  var_std__plus, 2, LOCAL(1), LOCAL(2), 1, LOCAL(3),
  // !value (value << 4)+(next_digit-'a')+10
  var_std__plus, 2, LOCAL(3), num_10, 1, var_1859_22_value,
  // next
  var_next, 0, TAIL_CALL,
  POS(1872, 27),
  POS(1872, 40),
  POS(1872, 27),
  POS(1872, 19),
  POS(1873, 19)
};

static TAB_NUM t_lambda_238[] = {
  3, // locals
  0, // parameters
  // next_digit >= 'A' && next_digit <= 'F':
  var_std__less, 2, var_1866_1_next_digit, chr_65, 1, LOCAL(1),
  // next_digit >= 'A' && next_digit <= 'F':
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // next_digit >= 'A' && next_digit <= 'F':
  var_std__and, 2, LOCAL(2), lambda_239, 1, LOCAL(3),
  //  next_digit >= 'A' && next_digit <= 'F':
  LET, 2, LOCAL(3), lambda_240, TAIL_CALL,
  POS(1874, 20),
  POS(1874, 20),
  POS(1874, 20),
  POS(1874, 19)
};

static TAB_NUM t_lambda_239[] = {
  2, // locals
  0, // parameters
  // F':
  var_std__less, 2, chr_70, var_1866_1_next_digit, 1, LOCAL(1),
  // F':
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // next_digit <= 'F':
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1874, 56),
  POS(1874, 56),
  POS(1874, 41)
};

static TAB_NUM t_lambda_240[] = {
  3, // locals
  0, // parameters
  // value << 4)+(next_digit-'A')+10
  var_std__shift_left, 2, var_1859_22_value, num_4, 1, LOCAL(1),
  // next_digit-'A')+10
  var_std__minus, 2, var_1866_1_next_digit, chr_65, 1, LOCAL(2),
  // value << 4)+(next_digit-'A')+10
  var_std__plus, 2, LOCAL(1), LOCAL(2), 1, LOCAL(3),
  // !value (value << 4)+(next_digit-'A')+10
  var_std__plus, 2, LOCAL(3), num_10, 1, var_1859_22_value,
  // next
  var_next, 0, TAIL_CALL,
  POS(1875, 27),
  POS(1875, 40),
  POS(1875, 27),
  POS(1875, 19),
  POS(1876, 19)
};

static TAB_NUM t_lambda_241[] = {
  0, // locals
  0, // parameters
  //  true -> range(str i -1) value
  LET, 2, var_true, lambda_242, TAIL_CALL,
  POS(1877, 19)
};

static TAB_NUM t_lambda_242[] = {
  1, // locals
  0, // parameters
  // range(str i -1) value
  var_range, 3, var_1842_0_str, var_1843_0_i, minus_num_1, 1, LOCAL(1),
  //  range(str i -1) value
  LET, 2, LOCAL(1), var_1859_22_value, TAIL_CALL,
  POS(1877, 28),
  POS(1877, 27)
};

static TAB_NUM t_func_std_types__string___to_integer[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 1913_0_self
  // parse_integer &self $value
  var_parse_integer, 1, LOCAL(2), 2, LOCAL(2), var_1915_21_value,
  // self == ""
  var_std__equal, 2, LOCAL(2), string_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_243, lambda_244, TAIL_CALL,
  POS(1915, 3),
  POS(1917, 5),
  POS(1916, 3)
};

static TAB_NUM t_lambda_243[] = {
  0, // locals
  0, // parameters
  //  value
  LET, 1, var_1915_21_value, TAIL_CALL,
  POS(1918, 7)
};

static TAB_NUM t_lambda_244[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(1919, 7)
};

static TAB_NUM t_func_std_types__string___to_number[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 1955_0_self
  // parse_number &self $value
  var_parse_number, 1, LOCAL(2), 2, LOCAL(2), var_1957_20_value,
  // self == ""
  var_std__equal, 2, LOCAL(2), string_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_245, lambda_246, TAIL_CALL,
  POS(1957, 3),
  POS(1959, 5),
  POS(1958, 3)
};

static TAB_NUM t_lambda_245[] = {
  0, // locals
  0, // parameters
  //  value
  LET, 1, var_1957_20_value, TAIL_CALL,
  POS(1960, 7)
};

static TAB_NUM t_lambda_246[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(1961, 7)
};

static TAB_NUM t_func_std__map_characters[] = {
  2, // locals
  2, // parameters
  var_1984_0_self,
  var_1985_0_function,
  // parameter_count_of(function) == 2
  var_parameter_count_of, 1, var_1985_0_function, 1, LOCAL(1),
  // parameter_count_of(function) == 2
  var_std__equal, 2, LOCAL(1), num_2, 1, LOCAL(2),
  // $map
  var_if, 3, LOCAL(2), lambda_247, lambda_253, 1, var_1987_1_map,
  // length_of(self)
  var_length_of, 1, var_1984_0_self, 1, LOCAL(1),
  // map 1 length_of(self)
  var_1987_1_map, 2, num_1, LOCAL(1), TAIL_CALL,
  POS(1989, 7),
  POS(1989, 7),
  POS(1987, 3),
  POS(2017, 9),
  POS(2017, 3)
};

static TAB_NUM t_lambda_247[] = {
  0, // locals
  0, // parameters
  // 
  LET, 1, lambda_248, TAIL_CALL,
  POS(1990, 9)
};

static TAB_NUM t_lambda_248[] = {
  1, // locals
  2, // parameters
  var_1991_3_s,
  var_1991_5_e,
  // s < e:
  var_std__less, 2, var_1991_3_s, var_1991_5_e, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_249, lambda_250, TAIL_CALL,
  POS(1993, 13),
  POS(1992, 11)
};

static TAB_NUM t_lambda_249[] = {
  4, // locals
  0, // parameters
  // s+e) >> 1
  var_std__plus, 2, var_1991_3_s, var_1991_5_e, 1, LOCAL(1),
  // $m (s+e) >> 1
  var_std__shift_right, 2, LOCAL(1), num_1, 1, LOCAL(4),
  // map(s m)
  var_1987_1_map, 2, var_1991_3_s, LOCAL(4), 1, LOCAL(1),
  // m+1 e)
  var_std__plus, 2, LOCAL(4), num_1, 1, LOCAL(2),
  // map(m+1 e)
  var_1987_1_map, 2, LOCAL(2), var_1991_5_e, 1, LOCAL(3),
  // append
  var_append, 2, LOCAL(1), LOCAL(3), TAIL_CALL,
  POS(1994, 19),
  POS(1994, 15),
  POS(1996, 17),
  POS(1997, 21),
  POS(1997, 17),
  POS(1995, 15)
};

static TAB_NUM t_lambda_250[] = {
  1, // locals
  0, // parameters
  // e
  var_std__less, 2, var_1991_5_e, var_1991_3_s, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_251, lambda_252, TAIL_CALL,
  POS(2000, 21),
  POS(1999, 15)
};

static TAB_NUM t_lambda_251[] = {
  0, // locals
  0, // parameters
  //  ""
  LET, 1, string_1, TAIL_CALL,
  POS(2001, 19)
};

static TAB_NUM t_lambda_252[] = {
  3, // locals
  0, // parameters
  // self(s)))
  var_1984_0_self, 1, var_1991_3_s, 1, LOCAL(1),
  // function(s self(s)))
  var_1985_0_function, 2, var_1991_3_s, LOCAL(1), 1, LOCAL(2),
  // string(function(s self(s)))
  var_string, 1, LOCAL(2), 1, LOCAL(3),
  //  string(function(s self(s)))
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(2002, 38),
  POS(2002, 27),
  POS(2002, 20),
  POS(2002, 19)
};

static TAB_NUM t_lambda_253[] = {
  0, // locals
  0, // parameters
  // 
  LET, 1, lambda_254, TAIL_CALL,
  POS(2003, 9)
};

static TAB_NUM t_lambda_254[] = {
  1, // locals
  2, // parameters
  var_2004_3_s,
  var_2004_5_e,
  // s < e:
  var_std__less, 2, var_2004_3_s, var_2004_5_e, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_255, lambda_256, TAIL_CALL,
  POS(2006, 13),
  POS(2005, 11)
};

static TAB_NUM t_lambda_255[] = {
  4, // locals
  0, // parameters
  // s+e) >> 1
  var_std__plus, 2, var_2004_3_s, var_2004_5_e, 1, LOCAL(1),
  // $m (s+e) >> 1
  var_std__shift_right, 2, LOCAL(1), num_1, 1, LOCAL(4),
  // map(s m)
  var_1987_1_map, 2, var_2004_3_s, LOCAL(4), 1, LOCAL(1),
  // m+1 e)
  var_std__plus, 2, LOCAL(4), num_1, 1, LOCAL(2),
  // map(m+1 e)
  var_1987_1_map, 2, LOCAL(2), var_2004_5_e, 1, LOCAL(3),
  // append
  var_append, 2, LOCAL(1), LOCAL(3), TAIL_CALL,
  POS(2007, 19),
  POS(2007, 15),
  POS(2009, 17),
  POS(2010, 21),
  POS(2010, 17),
  POS(2008, 15)
};

static TAB_NUM t_lambda_256[] = {
  1, // locals
  0, // parameters
  // e
  var_std__less, 2, var_2004_5_e, var_2004_3_s, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_257, lambda_258, TAIL_CALL,
  POS(2013, 21),
  POS(2012, 15)
};

static TAB_NUM t_lambda_257[] = {
  0, // locals
  0, // parameters
  //  ""
  LET, 1, string_1, TAIL_CALL,
  POS(2014, 19)
};

static TAB_NUM t_lambda_258[] = {
  3, // locals
  0, // parameters
  // self(s)))
  var_1984_0_self, 1, var_2004_3_s, 1, LOCAL(1),
  // function(self(s)))
  var_1985_0_function, 1, LOCAL(1), 1, LOCAL(2),
  // string(function(self(s)))
  var_string, 1, LOCAL(2), 1, LOCAL(3),
  //  string(function(self(s)))
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(2015, 36),
  POS(2015, 27),
  POS(2015, 20),
  POS(2015, 19)
};

static TAB_NUM t_func_std_types__string___to_upper_case[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 2037_0_self
  // map_characters self to_upper_case
  var_map_characters, 2, LOCAL(1), var_to_upper_case, TAIL_CALL,
  POS(2039, 3)
};

static TAB_NUM t_func_std_types__string___to_lower_case[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 2059_0_self
  // map_characters self to_lower_case
  var_map_characters, 2, LOCAL(1), var_to_lower_case, TAIL_CALL,
  POS(2061, 3)
};

static TAB_NUM t_func_std_types__string___to_title_case[] = {
  0, // locals
  1, // parameters
  var_2081_0_self,
  // map_characters self: (idx chr)
  var_map_characters, 2, var_2081_0_self, lambda_259, TAIL_CALL,
  POS(2083, 3)
};

static TAB_NUM t_lambda_259[] = {
  2, // locals
  2, // parameters
  var_2083_22_idx,
  var_2083_26_chr,
  // 1 && self(idx-1).is_a_letter_character
  var_std__less, 2, num_1, var_2083_22_idx, 1, LOCAL(1),
  // 1 && self(idx-1).is_a_letter_character
  var_std__and, 2, LOCAL(1), lambda_260, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_261, lambda_262, TAIL_CALL,
  POS(2085, 13),
  POS(2085, 13),
  POS(2084, 5)
};

static TAB_NUM t_lambda_260[] = {
  3, // locals
  0, // parameters
  // idx-1).is_a_letter_character
  var_std__minus, 2, var_2083_22_idx, num_1, 1, LOCAL(1),
  // self(idx-1).is_a_letter_character
  var_2081_0_self, 1, LOCAL(1), 1, LOCAL(2),
  // is_a_letter_character
  var_is_a_letter_character, 1, LOCAL(2), 1, LOCAL(3),
  // self(idx-1).is_a_letter_character
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(2085, 23),
  POS(2085, 18),
  POS(2085, 30),
  POS(2085, 18)
};

static TAB_NUM t_lambda_261[] = {
  1, // locals
  0, // parameters
  // to_lower_case
  var_to_lower_case, 1, var_2083_26_chr, 1, LOCAL(1),
  //  chr.to_lower_case
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(2086, 14),
  POS(2086, 9)
};

static TAB_NUM t_lambda_262[] = {
  1, // locals
  0, // parameters
  // to_title_case
  var_to_title_case, 1, var_2083_26_chr, 1, LOCAL(1),
  //  chr.to_title_case
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(2087, 14),
  POS(2087, 9)
};

static TAB_NUM t_func_std_types__string___to_sentence_case[] = {
  0, // locals
  1, // parameters
  var_2107_0_self,
  // map_characters self: (idx chr)
  var_map_characters, 2, var_2107_0_self, lambda_263, TAIL_CALL,
  POS(2109, 3)
};

static TAB_NUM t_lambda_263[] = {
  2, // locals
  2, // parameters
  var_2109_22_idx,
  var_2109_26_chr,
  // idx == 1 && self(idx).is_a_letter_character
  var_std__equal, 2, var_2109_22_idx, num_1, 1, LOCAL(1),
  // idx == 1 && self(idx).is_a_letter_character
  var_std__and, 2, LOCAL(1), lambda_264, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_265, lambda_266, TAIL_CALL,
  POS(2111, 7),
  POS(2111, 7),
  POS(2110, 5)
};

static TAB_NUM t_lambda_264[] = {
  2, // locals
  0, // parameters
  // self(idx).is_a_letter_character
  var_2107_0_self, 1, var_2109_22_idx, 1, LOCAL(1),
  // is_a_letter_character
  var_is_a_letter_character, 1, LOCAL(1), 1, LOCAL(2),
  // self(idx).is_a_letter_character
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2111, 19),
  POS(2111, 29),
  POS(2111, 19)
};

static TAB_NUM t_lambda_265[] = {
  1, // locals
  0, // parameters
  // to_title_case
  var_to_title_case, 1, var_2109_26_chr, 1, LOCAL(1),
  //  chr.to_title_case
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(2112, 14),
  POS(2112, 9)
};

static TAB_NUM t_lambda_266[] = {
  1, // locals
  0, // parameters
  // to_lower_case
  var_to_lower_case, 1, var_2109_26_chr, 1, LOCAL(1),
  //  chr.to_lower_case
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(2113, 14),
  POS(2113, 9)
};

static TAB_NUM t_func_std__delete_all[] = {
  1, // locals
  -2, // parameters
  MANDATORY_PARAMETER, LOCAL(1), // 2136_0_text
  REST_PARAMETER, var_2137_0_expressions,
  // $new_text ""
  LET, 1, string_1, 1, var_2153_1_new_text,
  // delete_all text
  func_delete_all, 1, LOCAL(1), TAIL_CALL,
  POS(2153, 3),
  POS(2154, 3)
};

static TAB_NUM t_func_delete_all[] = {
  1, // locals
  1, // parameters
  var_2139_14_txt,
  // is_empty
  var_is_empty, 1, var_2139_14_txt, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_267, lambda_268, TAIL_CALL,
  POS(2141, 11),
  POS(2140, 5)
};

static TAB_NUM t_lambda_267[] = {
  0, // locals
  0, // parameters
  //  new_text
  LET, 1, var_2153_1_new_text, TAIL_CALL,
  POS(2142, 9)
};

static TAB_NUM t_lambda_268[] = {
  0, // locals
  0, // parameters
  // for_each expressions
  var_for_each, 3, var_2137_0_expressions, lambda_269, lambda_271, TAIL_CALL,
  POS(2144, 9)
};

static TAB_NUM t_lambda_269[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 2145_3_expression
  // $len match(expression txt)
  var_match, 2, LOCAL(2), var_2139_14_txt, 1, var_2146_1_len,
  // is_defined next:
  var_is_defined, 1, var_2146_1_len, 1, LOCAL(1),
  // if_not len.is_defined next:
  var_if_not, 3, LOCAL(1), var_next, lambda_270, TAIL_CALL,
  POS(2146, 13),
  POS(2147, 24),
  POS(2147, 13)
};

static TAB_NUM t_lambda_270[] = {
  2, // locals
  0, // parameters
  // len+1 -1)
  var_std__plus, 2, var_2146_1_len, num_1, 1, LOCAL(1),
  // range(txt len+1 -1)
  var_range, 3, var_2139_14_txt, LOCAL(1), minus_num_1, 1, LOCAL(2),
  // delete_all range(txt len+1 -1)
  func_delete_all, 1, LOCAL(2), TAIL_CALL,
  POS(2148, 36),
  POS(2148, 26),
  POS(2148, 15)
};

static TAB_NUM t_lambda_271[] = {
  1, // locals
  0, // parameters
  // txt(1)
  var_2139_14_txt, 1, num_1, 1, LOCAL(1),
  // push &new_text txt(1)
  var_push, 2, var_2153_1_new_text, LOCAL(1), 1, var_2153_1_new_text,
  // range(txt 2 -1)
  var_range, 3, var_2139_14_txt, num_2, minus_num_1, 1, LOCAL(1),
  // delete_all range(txt 2 -1)
  func_delete_all, 1, LOCAL(1), TAIL_CALL,
  POS(2150, 28),
  POS(2150, 13),
  POS(2151, 24),
  POS(2151, 13)
};

static TAB_NUM t_func_std__replace_all[] = {
  1, // locals
  -2, // parameters
  MANDATORY_PARAMETER, LOCAL(1), // 2177_0_text
  REST_PARAMETER, var_2178_0_args,
  // $new_text ""
  LET, 1, string_1, 1, var_2201_1_new_text,
  // replace_all text
  func_replace_all, 1, LOCAL(1), TAIL_CALL,
  POS(2201, 3),
  POS(2202, 3)
};

static TAB_NUM t_func_replace_all[] = {
  1, // locals
  1, // parameters
  var_2180_15_txt,
  // is_empty
  var_is_empty, 1, var_2180_15_txt, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_272, lambda_273, TAIL_CALL,
  POS(2182, 11),
  POS(2181, 5)
};

static TAB_NUM t_lambda_272[] = {
  0, // locals
  0, // parameters
  //  new_text
  LET, 1, var_2201_1_new_text, TAIL_CALL,
  POS(2183, 9)
};

static TAB_NUM t_lambda_273[] = {
  0, // locals
  0, // parameters
  // for_each args
  var_for_each, 3, var_2178_0_args, lambda_274, lambda_277, TAIL_CALL,
  POS(2185, 9)
};

static TAB_NUM t_lambda_274[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 2186_3_arg
  // arg $expression $replacement
  LOCAL(2), 0, 2, LOCAL(3), var_2187_17_replacement,
  // $len match(expression txt)
  var_match, 2, LOCAL(3), var_2180_15_txt, 1, var_2188_1_len,
  // is_defined next:
  var_is_defined, 1, var_2188_1_len, 1, LOCAL(1),
  // if_not len.is_defined next:
  var_if_not, 3, LOCAL(1), var_next, lambda_275, TAIL_CALL,
  POS(2187, 13),
  POS(2188, 13),
  POS(2189, 24),
  POS(2189, 13)
};

static TAB_NUM t_lambda_275[] = {
  1, // locals
  0, // parameters
  // is_a_string:
  var_is_a_string, 1, var_2187_17_replacement, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_replacement_is_a_string, lambda_276, TAIL_CALL,
  POS(2191, 29),
  POS(2190, 15)
};

static TAB_NUM t_lambda_replacement_is_a_string[] = {
  2, // locals
  0, // parameters
  // append &new_text replacement
  var_append, 2, var_2201_1_new_text, var_2187_17_replacement, 1, var_2201_1_new_text,
  // len+1 -1)
  var_std__plus, 2, var_2188_1_len, num_1, 1, LOCAL(1),
  // range(txt len+1 -1)
  var_range, 3, var_2180_15_txt, LOCAL(1), minus_num_1, 1, LOCAL(2),
  // replace_all range(txt len+1 -1)
  func_replace_all, 1, LOCAL(2), TAIL_CALL,
  POS(2192, 19),
  POS(2193, 41),
  POS(2193, 31),
  POS(2193, 19)
};

static TAB_NUM t_lambda_276[] = {
  2, // locals
  0, // parameters
  // range(txt 1 len))
  var_range, 3, var_2180_15_txt, num_1, var_2188_1_len, 1, LOCAL(1),
  // replacement(range(txt 1 len))
  var_2187_17_replacement, 1, LOCAL(1), 1, LOCAL(2),
  // append &new_text replacement(range(txt 1 len))
  var_append, 2, var_2201_1_new_text, LOCAL(2), 1, var_2201_1_new_text,
  // len+1 -1)
  var_std__plus, 2, var_2188_1_len, num_1, 1, LOCAL(1),
  // range(txt len+1 -1)
  var_range, 3, var_2180_15_txt, LOCAL(1), minus_num_1, 1, LOCAL(2),
  // replace_all range(txt len+1 -1)
  func_replace_all, 1, LOCAL(2), TAIL_CALL,
  POS(2195, 48),
  POS(2195, 36),
  POS(2195, 19),
  POS(2196, 41),
  POS(2196, 31),
  POS(2196, 19)
};

static TAB_NUM t_lambda_277[] = {
  1, // locals
  0, // parameters
  // txt(1)
  var_2180_15_txt, 1, num_1, 1, LOCAL(1),
  // push &new_text txt(1)
  var_push, 2, var_2201_1_new_text, LOCAL(1), 1, var_2201_1_new_text,
  // range(txt 2 -1)
  var_range, 3, var_2180_15_txt, num_2, minus_num_1, 1, LOCAL(1),
  // replace_all range(txt 2 -1)
  func_replace_all, 1, LOCAL(1), TAIL_CALL,
  POS(2198, 28),
  POS(2198, 13),
  POS(2199, 25),
  POS(2199, 13)
};

static TAB_NUM t_func_std__replace_first[] = {
  1, // locals
  -2, // parameters
  MANDATORY_PARAMETER, LOCAL(1), // 2225_0_text
  REST_PARAMETER, var_2226_0_args,
  // $new_text ""
  LET, 1, string_1, 1, var_2248_1_new_text,
  // replace_first text
  func_replace_first, 1, LOCAL(1), TAIL_CALL,
  POS(2248, 3),
  POS(2249, 3)
};

static TAB_NUM t_func_replace_first[] = {
  1, // locals
  1, // parameters
  var_2228_17_txt,
  // is_empty
  var_is_empty, 1, var_2228_17_txt, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_278, lambda_279, TAIL_CALL,
  POS(2230, 11),
  POS(2229, 5)
};

static TAB_NUM t_lambda_278[] = {
  0, // locals
  0, // parameters
  //  new_text
  LET, 1, var_2248_1_new_text, TAIL_CALL,
  POS(2231, 9)
};

static TAB_NUM t_lambda_279[] = {
  0, // locals
  0, // parameters
  // for_each args
  var_for_each, 3, var_2226_0_args, lambda_280, lambda_283, TAIL_CALL,
  POS(2233, 9)
};

static TAB_NUM t_lambda_280[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 2234_3_arg
  // arg $expression $replacement
  LOCAL(2), 0, 2, LOCAL(3), var_2235_17_replacement,
  // $len match(expression txt)
  var_match, 2, LOCAL(3), var_2228_17_txt, 1, var_2236_1_len,
  // is_defined
  var_is_defined, 1, var_2236_1_len, 1, LOCAL(1),
  // if_not
  var_if_not, 3, LOCAL(1), var_next, lambda_281, TAIL_CALL,
  POS(2235, 13),
  POS(2236, 13),
  POS(2238, 19),
  POS(2237, 13)
};

static TAB_NUM t_lambda_281[] = {
  3, // locals
  0, // parameters
  // is_a_string &replacement
  var_is_a_string, 1, var_2235_17_replacement, 1, LOCAL(1),
  // update_if_not replacement.is_a_string &replacement
  var_update_if_not, 3, LOCAL(1), var_2235_17_replacement, lambda_282, 1, var_2235_17_replacement,
  // len+1 -1))
  var_std__plus, 2, var_2236_1_len, num_1, 1, LOCAL(1),
  // range(txt len+1 -1))
  var_range, 3, var_2228_17_txt, LOCAL(1), minus_num_1, 1, LOCAL(2),
  // append(new_text replacement range(txt len+1 -1))
  var_append, 3, var_2248_1_new_text, var_2235_17_replacement, LOCAL(2), 1, LOCAL(3),
  // -> append(new_text replacement range(txt len+1 -1))
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(2241, 43),
  POS(2241, 17),
  POS(2243, 58),
  POS(2243, 48),
  POS(2243, 20),
  POS(2243, 17)
};

static TAB_NUM t_lambda_282[] = {
  2, // locals
  0, // parameters
  // range(txt 1 len))
  var_range, 3, var_2228_17_txt, num_1, var_2236_1_len, 1, LOCAL(1),
  // replacement(range(txt 1 len))
  var_2235_17_replacement, 1, LOCAL(1), 1, LOCAL(2),
  //  replacement(range(txt 1 len))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2242, 34),
  POS(2242, 22),
  POS(2242, 21)
};

static TAB_NUM t_lambda_283[] = {
  1, // locals
  0, // parameters
  // txt(1)
  var_2228_17_txt, 1, num_1, 1, LOCAL(1),
  // push &new_text txt(1)
  var_push, 2, var_2248_1_new_text, LOCAL(1), 1, var_2248_1_new_text,
  // range(txt 2 -1)
  var_range, 3, var_2228_17_txt, num_2, minus_num_1, 1, LOCAL(1),
  // replace_first range(txt 2 -1)
  func_replace_first, 1, LOCAL(1), TAIL_CALL,
  POS(2245, 28),
  POS(2245, 13),
  POS(2246, 27),
  POS(2246, 13)
};

static TAB_NUM t_func_std__count_occurrences[] = {
  1, // locals
  2, // parameters
  LOCAL(1), // 2270_0_text
  var_2271_0_expr,
  // search_next text 0
  func_search_next, 2, LOCAL(1), num_0, TAIL_CALL,
  POS(2285, 3)
};

static TAB_NUM t_func_search_next[] = {
  1, // locals
  2, // parameters
  var_2273_15_txt,
  var_2273_19_count,
  // txt == ""
  var_std__equal, 2, var_2273_15_txt, string_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_284, lambda_285, TAIL_CALL,
  POS(2275, 7),
  POS(2274, 5)
};

static TAB_NUM t_lambda_284[] = {
  0, // locals
  0, // parameters
  //  count
  LET, 1, var_2273_19_count, TAIL_CALL,
  POS(2276, 9)
};

static TAB_NUM t_lambda_285[] = {
  1, // locals
  0, // parameters
  // $n match(expr txt)
  var_match, 2, var_2271_0_expr, var_2273_15_txt, 1, var_2278_1_n,
  // is_defined:
  var_is_defined, 1, var_2278_1_n, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_n_is_defined, lambda_286, TAIL_CALL,
  POS(2278, 9),
  POS(2280, 13),
  POS(2279, 9)
};

static TAB_NUM t_lambda_n_is_defined[] = {
  3, // locals
  0, // parameters
  // n+1 -1) count+1
  var_std__plus, 2, var_2278_1_n, num_1, 1, LOCAL(1),
  // range(txt n+1 -1) count+1
  var_range, 3, var_2273_15_txt, LOCAL(1), minus_num_1, 1, LOCAL(2),
  // count+1
  var_std__plus, 2, var_2273_19_count, num_1, 1, LOCAL(3),
  // search_next range(txt n+1 -1) count+1
  func_search_next, 2, LOCAL(2), LOCAL(3), TAIL_CALL,
  POS(2281, 35),
  POS(2281, 25),
  POS(2281, 43),
  POS(2281, 13)
};

static TAB_NUM t_lambda_286[] = {
  1, // locals
  0, // parameters
  // range(txt 2 -1) count
  var_range, 3, var_2273_15_txt, num_2, minus_num_1, 1, LOCAL(1),
  // search_next range(txt 2 -1) count
  func_search_next, 2, LOCAL(1), var_2273_19_count, TAIL_CALL,
  POS(2283, 25),
  POS(2283, 13)
};

static TAB_NUM t_func_std__split_into_lines[] = {
  0, // locals
  1, // parameters
  var_2329_25_text,
  // $lines empty_list
  LET, 1, var_empty_list, 1, var_2330_1_lines,
  // $i 1
  LET, 1, num_1, 1, var_2331_1_i,
  // $n length_of(text)
  var_length_of, 1, var_2329_25_text, 1, var_2332_1_n,
  // $s i
  LET, 1, var_2331_1_i, 1, var_2333_1_s,
  // loop:
  var_loop, 1, lambda_15_loop, TAIL_CALL,
  POS(2330, 3),
  POS(2331, 3),
  POS(2332, 3),
  POS(2333, 3),
  POS(2334, 3)
};

static TAB_NUM t_lambda_15_loop[] = {
  1, // locals
  0, // parameters
  // n
  var_std__less, 2, var_2332_1_n, var_2331_1_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_287, lambda_290, TAIL_CALL,
  POS(2336, 11),
  POS(2335, 5)
};

static TAB_NUM t_lambda_287[] = {
  3, // locals
  0, // parameters
  // n
  var_std__less, 2, var_2332_1_n, var_2333_1_s, 1, LOCAL(1),
  // n
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_288, lambda_289, 1, LOCAL(3),
  // 
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(2339, 16),
  POS(2339, 16),
  POS(2338, 9),
  POS(2337, 9)
};

static TAB_NUM t_lambda_288[] = {
  2, // locals
  0, // parameters
  // range(text s n))
  var_range, 3, var_2329_25_text, var_2333_1_s, var_2332_1_n, 1, LOCAL(1),
  // push(lines range(text s n))
  var_push, 2, var_2330_1_lines, LOCAL(1), 1, LOCAL(2),
  //  push(lines range(text s n))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2340, 25),
  POS(2340, 14),
  POS(2340, 13)
};

static TAB_NUM t_lambda_289[] = {
  0, // locals
  0, // parameters
  //  lines
  LET, 1, var_2330_1_lines, TAIL_CALL,
  POS(2341, 13)
};

static TAB_NUM t_lambda_290[] = {
  2, // locals
  0, // parameters
  // text(i) == '@nl;':
  var_2329_25_text, 1, var_2331_1_i, 1, LOCAL(1),
  // text(i) == '@nl;':
  var_std__equal, 2, LOCAL(1), chr_10, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_291, lambda_292, TAIL_CALL,
  POS(2344, 11),
  POS(2344, 11),
  POS(2343, 9)
};

static TAB_NUM t_lambda_291[] = {
  1, // locals
  0, // parameters
  // range(text s i)
  var_range, 3, var_2329_25_text, var_2333_1_s, var_2331_1_i, 1, LOCAL(1),
  // push &lines range(text s i)
  var_push, 2, var_2330_1_lines, LOCAL(1), 1, var_2330_1_lines,
  // !i i+1
  var_std__plus, 2, var_2331_1_i, num_1, 1, var_2331_1_i,
  // !s i
  LET, 1, var_2331_1_i, 1, var_2333_1_s,
  // next
  var_next, 0, TAIL_CALL,
  POS(2345, 25),
  POS(2345, 13),
  POS(2346, 13),
  POS(2347, 13),
  POS(2348, 13)
};

static TAB_NUM t_lambda_292[] = {
  0, // locals
  0, // parameters
  // !i i+1
  var_std__plus, 2, var_2331_1_i, num_1, 1, var_2331_1_i,
  // next
  var_next, 0, TAIL_CALL,
  POS(2350, 13),
  POS(2351, 13)
};

static TAB_NUM t_func_std__split_into_indented_lines[] = {
  1, // locals
  1, // parameters
  var_2412_0_text,
  // $n length_of(text)
  var_length_of, 1, var_2412_0_text, 1, LOCAL(1),
  // split 1 n
  func_split, 2, num_1, LOCAL(1), TAIL_CALL,
  POS(2414, 3),
  POS(2415, 3)
};

static TAB_NUM t_func_split[] = {
  3, // locals
  2, // parameters
  var_2417_9_s,
  var_2417_11_e,
  // e+1-s > FORK_TEXT_THRESHOLD: # recurse to exploit parallel execution
  var_std__plus, 2, var_2417_11_e, num_1, 1, LOCAL(1),
  // e+1-s > FORK_TEXT_THRESHOLD: # recurse to exploit parallel execution
  var_std__minus, 2, LOCAL(1), var_2417_9_s, 1, LOCAL(2),
  // FORK_TEXT_THRESHOLD: # recurse to exploit parallel execution
  var_std__less, 2, num_300, LOCAL(2), 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_293, lambda_294, TAIL_CALL,
  POS(2419, 7),
  POS(2419, 7),
  POS(2419, 15),
  POS(2418, 5)
};

static TAB_NUM t_lambda_293[] = {
  4, // locals
  0, // parameters
  // s+e) .div. 2
  var_std__plus, 2, var_2417_9_s, var_2417_11_e, 1, LOCAL(1),
  // $m (s+e) .div. 2
  var_div, 2, LOCAL(1), num_2, 1, LOCAL(4),
  // split(s m) split(m+1 e)
  func_split, 2, var_2417_9_s, LOCAL(4), 1, LOCAL(1),
  // m+1 e)
  var_std__plus, 2, LOCAL(4), num_1, 1, LOCAL(2),
  // split(m+1 e)
  func_split, 2, LOCAL(2), var_2417_11_e, 1, LOCAL(3),
  // append split(s m) split(m+1 e)
  var_append, 2, LOCAL(1), LOCAL(3), TAIL_CALL,
  POS(2420, 13),
  POS(2420, 9),
  POS(2421, 16),
  POS(2421, 33),
  POS(2421, 27),
  POS(2421, 9)
};

static TAB_NUM t_lambda_294[] = {
  2, // locals
  0, // parameters
  // $lines empty_list
  LET, 1, var_empty_list, 1, var_2423_1_lines,
  // s == 1 || text(s-1) == '@nl;'
  var_std__equal, 2, var_2417_9_s, num_1, 1, LOCAL(1),
  // s == 1 || text(s-1) == '@nl;'
  var_std__or, 2, LOCAL(1), lambda_295, 1, LOCAL(2),
  // $ls
  var_if, 3, LOCAL(2), lambda_296, lambda_297, 1, var_2424_1_ls,
  // from_to s e
  var_from_to, 4, var_2417_9_s, var_2417_11_e, lambda_298, lambda_301, TAIL_CALL,
  POS(2423, 9),
  POS(2426, 13),
  POS(2426, 13),
  POS(2424, 9),
  POS(2429, 9)
};

static TAB_NUM t_lambda_295[] = {
  3, // locals
  0, // parameters
  // s-1) == '@nl;'
  var_std__minus, 2, var_2417_9_s, num_1, 1, LOCAL(1),
  // text(s-1) == '@nl;'
  var_2412_0_text, 1, LOCAL(1), 1, LOCAL(2),
  // text(s-1) == '@nl;'
  var_std__equal, 2, LOCAL(2), chr_10, 1, LOCAL(3),
  // text(s-1) == '@nl;'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(2426, 28),
  POS(2426, 23),
  POS(2426, 23),
  POS(2426, 23)
};

static TAB_NUM t_lambda_296[] = {
  0, // locals
  0, // parameters
  //  s # the current block starts at a line start
  LET, 1, var_2417_9_s, TAIL_CALL,
  POS(2427, 15)
};

static TAB_NUM t_lambda_297[] = {
  0, // locals
  0, // parameters
  //  undefined # just skip the characters until the next line start
  LET, 1, var_undefined, TAIL_CALL,
  POS(2428, 15)
};

static TAB_NUM t_lambda_298[] = {
  2, // locals
  1, // parameters
  var_2430_3_i,
  // text(i) == '@nl;' next:
  var_2412_0_text, 1, var_2430_3_i, 1, LOCAL(1),
  // text(i) == '@nl;' next:
  var_std__equal, 2, LOCAL(1), chr_10, 1, LOCAL(2),
  // if_not text(i) == '@nl;' next:
  var_if_not, 3, LOCAL(2), var_next, lambda_299, TAIL_CALL,
  POS(2431, 20),
  POS(2431, 20),
  POS(2431, 13)
};

static TAB_NUM t_lambda_299[] = {
  1, // locals
  0, // parameters
  // is_defined:
  var_is_defined, 1, var_2424_1_ls, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_ls_is_defined, lambda_300, TAIL_CALL,
  POS(2433, 20),
  POS(2432, 15)
};

static TAB_NUM t_lambda_ls_is_defined[] = {
  1, // locals
  0, // parameters
  // create_line(ls i)
  func_create_line, 2, var_2424_1_ls, var_2430_3_i, 1, LOCAL(1),
  // push &lines create_line(ls i)
  var_push, 2, var_2423_1_lines, LOCAL(1), 1, var_2423_1_lines,
  // !ls i+1
  var_std__plus, 2, var_2430_3_i, num_1, 1, var_2424_1_ls,
  // next
  var_next, 0, TAIL_CALL,
  POS(2434, 31),
  POS(2434, 19),
  POS(2435, 19),
  POS(2436, 19)
};

static TAB_NUM t_lambda_300[] = {
  0, // locals
  0, // parameters
  // !ls i+1
  var_std__plus, 2, var_2430_3_i, num_1, 1, var_2424_1_ls,
  // next
  var_next, 0, TAIL_CALL,
  POS(2438, 19),
  POS(2439, 19)
};

static TAB_NUM t_lambda_301[] = {
  2, // locals
  0, // parameters
  // is_defined && ls <= e:
  var_is_defined, 1, var_2424_1_ls, 1, LOCAL(1),
  // is_defined && ls <= e:
  var_std__and, 2, LOCAL(1), lambda_302, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_303, lambda_305, TAIL_CALL,
  POS(2442, 18),
  POS(2442, 18),
  POS(2441, 13)
};

static TAB_NUM t_lambda_302[] = {
  2, // locals
  0, // parameters
  // e:
  var_std__less, 2, var_2417_11_e, var_2424_1_ls, 1, LOCAL(1),
  // e:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // ls <= e:
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2442, 38),
  POS(2442, 38),
  POS(2442, 32)
};

static TAB_NUM t_lambda_303[] = {
  0, // locals
  0, // parameters
  // loop: # the last line extends into the next block
  var_loop, 1, lambda_16_loop, TAIL_CALL,
  POS(2443, 17)
};

static TAB_NUM t_lambda_16_loop[] = {
  2, // locals
  0, // parameters
  // !e e+1
  var_std__plus, 2, var_2417_11_e, num_1, 1, var_2417_11_e,
  // text(e) == '@nl;'
  var_2412_0_text, 1, var_2417_11_e, 1, LOCAL(1),
  // text(e) == '@nl;'
  var_std__equal, 2, LOCAL(1), chr_10, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_304, var_next, TAIL_CALL,
  POS(2444, 19),
  POS(2446, 21),
  POS(2446, 21),
  POS(2445, 19)
};

static TAB_NUM t_lambda_304[] = {
  2, // locals
  0, // parameters
  // create_line(ls e))
  func_create_line, 2, var_2424_1_ls, var_2417_11_e, 1, LOCAL(1),
  // push(lines create_line(ls e))
  var_push, 2, var_2423_1_lines, LOCAL(1), 1, LOCAL(2),
  //  push(lines create_line(ls e))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2447, 35),
  POS(2447, 24),
  POS(2447, 23)
};

static TAB_NUM t_lambda_305[] = {
  0, // locals
  0, // parameters
  //  lines
  LET, 1, var_2423_1_lines, TAIL_CALL,
  POS(2449, 17)
};

static TAB_NUM t_func_create_line[] = {
  0, // locals
  2, // parameters
  var_2451_15_s,
  var_2451_17_e,
  // $indent 0
  LET, 1, num_0, 1, var_2452_1_indent,
  // loop:
  var_loop, 1, lambda_17_loop, TAIL_CALL,
  POS(2452, 5),
  POS(2453, 5)
};

static TAB_NUM t_lambda_17_loop[] = {
  2, // locals
  0, // parameters
  // text(s) == '@ht;':
  var_2412_0_text, 1, var_2451_15_s, 1, LOCAL(1),
  // text(s) == '@ht;':
  var_std__equal, 2, LOCAL(1), chr_9, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_306, lambda_307, TAIL_CALL,
  POS(2455, 9),
  POS(2455, 9),
  POS(2454, 7)
};

static TAB_NUM t_lambda_306[] = {
  0, // locals
  0, // parameters
  // !indent indent+8
  var_std__plus, 2, var_2452_1_indent, num_8, 1, var_2452_1_indent,
  // !s s+1
  var_std__plus, 2, var_2451_15_s, num_1, 1, var_2451_15_s,
  // next
  var_next, 0, TAIL_CALL,
  POS(2456, 11),
  POS(2457, 11),
  POS(2458, 11)
};

static TAB_NUM t_lambda_307[] = {
  2, // locals
  0, // parameters
  // text(s) == ' ':
  var_2412_0_text, 1, var_2451_15_s, 1, LOCAL(1),
  // text(s) == ' ':
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_308, lambda_309, TAIL_CALL,
  POS(2461, 13),
  POS(2461, 13),
  POS(2460, 11)
};

static TAB_NUM t_lambda_308[] = {
  0, // locals
  0, // parameters
  // !indent indent+1
  var_std__plus, 2, var_2452_1_indent, num_1, 1, var_2452_1_indent,
  // !s s+1
  var_std__plus, 2, var_2451_15_s, num_1, 1, var_2451_15_s,
  // next
  var_next, 0, TAIL_CALL,
  POS(2462, 15),
  POS(2463, 15),
  POS(2464, 15)
};

static TAB_NUM t_lambda_309[] = {
  1, // locals
  0, // parameters
  // $line_text range(text s e)
  var_range, 3, var_2412_0_text, var_2451_15_s, var_2451_17_e, 1, var_2466_1_line_text,
  // line_text == "@nl;"
  var_std__equal, 2, var_2466_1_line_text, string_9, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_310, lambda_311, TAIL_CALL,
  POS(2466, 15),
  POS(2468, 17),
  POS(2467, 15)
};

static TAB_NUM t_lambda_310[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(2469, 19)
};

static TAB_NUM t_lambda_311[] = {
  1, // locals
  0, // parameters
  // tuple(indent line_text)
  var_tuple, 2, var_2452_1_indent, var_2466_1_line_text, 1, LOCAL(1),
  //  tuple(indent line_text)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(2470, 20),
  POS(2470, 19)
};

static TAB_NUM t_func_indent_of[] = {
  1, // locals
  1, // parameters
  var_2477_13_line,
  // is_defined
  var_is_defined, 1, var_2477_13_line, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_312, lambda_313, TAIL_CALL,
  POS(2479, 10),
  POS(2478, 3)
};

static TAB_NUM t_lambda_312[] = {
  1, // locals
  0, // parameters
  // first(line)
  var_first, 1, var_2477_13_line, 1, LOCAL(1),
  //  first(line)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(2480, 8),
  POS(2480, 7)
};

static TAB_NUM t_lambda_313[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(2481, 7)
};

static TAB_NUM t_func_std__split_into_groups[] = {
  0, // locals
  1, // parameters
  var_2534_0_lines,
  // $n length_of(lines)
  var_length_of, 1, var_2534_0_lines, 1, var_2536_1_n,
  // $fv 1 # first valid line
  LET, 1, num_1, 1, var_2537_1_fv,
  // loop:
  var_loop, 1, lambda_18_loop, TAIL_CALL,
  POS(2536, 3),
  POS(2537, 3),
  POS(2538, 3)
};

static TAB_NUM t_lambda_18_loop[] = {
  2, // locals
  0, // parameters
  // n:
  var_std__less, 2, var_2536_1_n, var_2537_1_fv, 1, LOCAL(1),
  // n:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_314, lambda_316, TAIL_CALL,
  POS(2540, 13),
  POS(2540, 13),
  POS(2539, 5)
};

static TAB_NUM t_lambda_314[] = {
  1, // locals
  0, // parameters
  // lines(fv))
  var_2534_0_lines, 1, var_2537_1_fv, 1, LOCAL(1),
  // $indent indent_of(lines(fv))
  func_indent_of, 1, LOCAL(1), 1, var_2541_1_indent,
  // is_defined:
  var_is_defined, 1, var_2541_1_indent, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_indent_is_defined, lambda_315, TAIL_CALL,
  POS(2541, 27),
  POS(2541, 9),
  POS(2543, 18),
  POS(2542, 9)
};

static TAB_NUM t_lambda_indent_is_defined[] = {
  0, // locals
  0, // parameters
  // split fv n indent undefined
  func_2_split, 4, var_2537_1_fv, var_2536_1_n, var_2541_1_indent, var_undefined, TAIL_CALL,
  POS(2544, 13)
};

static TAB_NUM t_lambda_315[] = {
  0, // locals
  0, // parameters
  // !fv fv+1
  var_std__plus, 2, var_2537_1_fv, num_1, 1, var_2537_1_fv,
  // next
  var_next, 0, TAIL_CALL,
  POS(2546, 13),
  POS(2547, 13)
};

static TAB_NUM t_lambda_316[] = {
  0, // locals
  0, // parameters
  //  empty_list
  LET, 1, var_empty_list, TAIL_CALL,
  POS(2548, 9)
};

static TAB_NUM t_func_2_split[] = {
  3, // locals
  4, // parameters
  var_2550_9_s,
  var_2550_11_e,
  var_2550_13_indent,
  var_2550_20_gs,
  // e+1-s > FORK_LINES_THRESHOLD: # recurse to exploit parallel execution
  var_std__plus, 2, var_2550_11_e, num_1, 1, LOCAL(1),
  // e+1-s > FORK_LINES_THRESHOLD: # recurse to exploit parallel execution
  var_std__minus, 2, LOCAL(1), var_2550_9_s, 1, LOCAL(2),
  // FORK_LINES_THRESHOLD: # recurse to exploit parallel execution
  var_std__less, 2, num_20, LOCAL(2), 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_317, lambda_318, TAIL_CALL,
  POS(2552, 7),
  POS(2552, 7),
  POS(2552, 15),
  POS(2551, 5)
};

static TAB_NUM t_lambda_317[] = {
  4, // locals
  0, // parameters
  // s+e) .div. 2
  var_std__plus, 2, var_2550_9_s, var_2550_11_e, 1, LOCAL(1),
  // $m (s+e) .div. 2
  var_div, 2, LOCAL(1), num_2, 1, LOCAL(4),
  // split(s m indent gs) split(m+1 e indent undefined)
  func_2_split, 4, var_2550_9_s, LOCAL(4), var_2550_13_indent, var_2550_20_gs, 1, LOCAL(1),
  // m+1 e indent undefined)
  var_std__plus, 2, LOCAL(4), num_1, 1, LOCAL(2),
  // split(m+1 e indent undefined)
  func_2_split, 4, LOCAL(2), var_2550_11_e, var_2550_13_indent, var_undefined, 1, LOCAL(3),
  // append split(s m indent gs) split(m+1 e indent undefined)
  var_append, 2, LOCAL(1), LOCAL(3), TAIL_CALL,
  POS(2553, 13),
  POS(2553, 9),
  POS(2554, 16),
  POS(2554, 43),
  POS(2554, 37),
  POS(2554, 9)
};

static TAB_NUM t_lambda_318[] = {
  0, // locals
  0, // parameters
  // $groups empty_list
  LET, 1, var_empty_list, 1, var_2556_1_groups,
  // $minimum_indent VERY_LARGE_INDENT
  LET, 1, num_9999, 1, var_2557_1_minimum_indent,
  // $ge gs
  LET, 1, var_2550_20_gs, 1, var_2558_1_ge,
  // from_to s e
  var_from_to, 4, var_2550_9_s, var_2550_11_e, lambda_319, lambda_327, TAIL_CALL,
  POS(2556, 9),
  POS(2557, 9),
  POS(2558, 9),
  POS(2559, 9)
};

static TAB_NUM t_lambda_319[] = {
  1, // locals
  1, // parameters
  var_2560_3_i,
  // lines(i))
  var_2534_0_lines, 1, var_2560_3_i, 1, LOCAL(1),
  // $current_indent indent_of(lines(i))
  func_indent_of, 1, LOCAL(1), 1, var_2561_1_current_indent,
  // current_indent == indent:
  var_std__equal, 2, var_2561_1_current_indent, var_2550_13_indent, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_320, lambda_324, TAIL_CALL,
  POS(2561, 39),
  POS(2561, 13),
  POS(2563, 15),
  POS(2562, 13)
};

static TAB_NUM t_lambda_320[] = {
  2, // locals
  0, // parameters
  // is_defined && gs < i:
  var_is_defined, 1, var_2550_20_gs, 1, LOCAL(1),
  // is_defined && gs < i:
  var_std__and, 2, LOCAL(1), lambda_321, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_322, lambda_323, TAIL_CALL,
  POS(2565, 22),
  POS(2565, 22),
  POS(2564, 17)
};

static TAB_NUM t_lambda_321[] = {
  1, // locals
  0, // parameters
  // gs < i:
  var_std__less, 2, var_2550_20_gs, var_2560_3_i, 1, LOCAL(1),
  // gs < i:
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(2565, 36),
  POS(2565, 36)
};

static TAB_NUM t_lambda_322[] = {
  0, // locals
  0, // parameters
  // add_groups !groups ge
  func_add_groups, 1, var_2558_1_ge, 1, var_2556_1_groups,
  // start_new_fragment_and_next i
  func_start_new_fragment_and_next, 1, var_2560_3_i, TAIL_CALL,
  POS(2566, 21),
  POS(2567, 21)
};

static TAB_NUM t_lambda_323[] = {
  0, // locals
  0, // parameters
  // start_new_fragment_and_next i
  func_start_new_fragment_and_next, 1, var_2560_3_i, TAIL_CALL,
  POS(2569, 21)
};

static TAB_NUM t_lambda_324[] = {
  1, // locals
  0, // parameters
  // is_defined
  var_is_defined, 1, var_2561_1_current_indent, 1, LOCAL(1),
  // !ge
  var_if, 3, LOCAL(1), lambda_325, lambda_326, 1, var_2558_1_ge,
  // reduce_minimum_indent_and_next current_indent
  func_reduce_minimum_indent_and_next, 1, var_2561_1_current_indent, TAIL_CALL,
  POS(2573, 36),
  POS(2571, 17),
  POS(2576, 17)
};

static TAB_NUM t_lambda_325[] = {
  0, // locals
  0, // parameters
  //  i
  LET, 1, var_2560_3_i, TAIL_CALL,
  POS(2574, 23)
};

static TAB_NUM t_lambda_326[] = {
  0, // locals
  0, // parameters
  //  ge
  LET, 1, var_2558_1_ge, TAIL_CALL,
  POS(2575, 23)
};

static TAB_NUM t_lambda_327[] = {
  1, // locals
  0, // parameters
  // is_defined:
  var_is_defined, 1, var_2550_20_gs, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_gs_is_defined, lambda_335, TAIL_CALL,
  POS(2579, 18),
  POS(2578, 13)
};

static TAB_NUM t_lambda_gs_is_defined[] = {
  0, // locals
  0, // parameters
  // loop: # the last group extends into the next block
  var_loop, 1, lambda_19_loop, TAIL_CALL,
  POS(2580, 17)
};

static TAB_NUM t_lambda_19_loop[] = {
  1, // locals
  0, // parameters
  // !e e+1
  var_std__plus, 2, var_2550_11_e, num_1, 1, var_2550_11_e,
  // n
  var_std__less, 2, var_2536_1_n, var_2550_11_e, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_328, lambda_329, TAIL_CALL,
  POS(2581, 19),
  POS(2583, 25),
  POS(2582, 19)
};

static TAB_NUM t_lambda_328[] = {
  1, // locals
  0, // parameters
  // add_groups(ge)
  func_add_groups, 1, var_2558_1_ge, 1, LOCAL(1),
  //  add_groups(ge)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(2584, 24),
  POS(2584, 23)
};

static TAB_NUM t_lambda_329[] = {
  2, // locals
  0, // parameters
  // lines(e))
  var_2534_0_lines, 1, var_2550_11_e, 1, LOCAL(1),
  // $current_indent indent_of(lines(e))
  func_indent_of, 1, LOCAL(1), 1, var_2586_1_current_indent,
  // is_defined && current_indent <= indent
  var_is_defined, 1, var_2586_1_current_indent, 1, LOCAL(1),
  // is_defined && current_indent <= indent
  var_std__and, 2, LOCAL(1), lambda_330, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_331, lambda_332, TAIL_CALL,
  POS(2586, 49),
  POS(2586, 23),
  POS(2588, 40),
  POS(2588, 40),
  POS(2587, 23)
};

static TAB_NUM t_lambda_330[] = {
  2, // locals
  0, // parameters
  // indent
  var_std__less, 2, var_2550_13_indent, var_2586_1_current_indent, 1, LOCAL(1),
  // indent
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // current_indent <= indent
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2588, 72),
  POS(2588, 72),
  POS(2588, 54)
};

static TAB_NUM t_lambda_331[] = {
  1, // locals
  0, // parameters
  // add_groups(ge)
  func_add_groups, 1, var_2558_1_ge, 1, LOCAL(1),
  //  add_groups(ge)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(2589, 28),
  POS(2589, 27)
};

static TAB_NUM t_lambda_332[] = {
  1, // locals
  0, // parameters
  // is_defined
  var_is_defined, 1, var_2586_1_current_indent, 1, LOCAL(1),
  // !ge
  var_if, 3, LOCAL(1), lambda_333, lambda_334, 1, var_2558_1_ge,
  // reduce_minimum_indent_and_next current_indent
  func_reduce_minimum_indent_and_next, 1, var_2586_1_current_indent, TAIL_CALL,
  POS(2593, 46),
  POS(2591, 27),
  POS(2596, 27)
};

static TAB_NUM t_lambda_333[] = {
  0, // locals
  0, // parameters
  //  e
  LET, 1, var_2550_11_e, TAIL_CALL,
  POS(2594, 33)
};

static TAB_NUM t_lambda_334[] = {
  0, // locals
  0, // parameters
  //  ge
  LET, 1, var_2558_1_ge, TAIL_CALL,
  POS(2595, 33)
};

static TAB_NUM t_lambda_335[] = {
  0, // locals
  0, // parameters
  //  groups
  LET, 1, var_2556_1_groups, TAIL_CALL,
  POS(2597, 17)
};

static TAB_NUM t_func_add_groups[] = {
  1, // locals
  1, // parameters
  var_2599_14_l,
  // gs == l
  var_std__equal, 2, var_2550_20_gs, var_2599_14_l, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_336, lambda_337, TAIL_CALL,
  POS(2601, 13),
  POS(2600, 11)
};

static TAB_NUM t_lambda_336[] = {
  2, // locals
  0, // parameters
  // lines(gs))
  var_2534_0_lines, 1, var_2550_20_gs, 1, LOCAL(1),
  // push(groups lines(gs))
  var_push, 2, var_2556_1_groups, LOCAL(1), 1, LOCAL(2),
  //  push(groups lines(gs))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2602, 28),
  POS(2602, 16),
  POS(2602, 15)
};

static TAB_NUM t_lambda_337[] = {
  1, // locals
  0, // parameters
  // minimum_indent == VERY_LARGE_INDENT
  var_std__equal, 2, var_2557_1_minimum_indent, num_9999, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_338, lambda_339, TAIL_CALL,
  POS(2605, 17),
  POS(2604, 15)
};

static TAB_NUM t_lambda_338[] = {
  2, // locals
  0, // parameters
  // range(lines gs l))
  var_range, 3, var_2534_0_lines, var_2550_20_gs, var_2599_14_l, 1, LOCAL(1),
  // append(groups range(lines gs l))
  var_append, 2, var_2556_1_groups, LOCAL(1), 1, LOCAL(2),
  //  append(groups range(lines gs l))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2606, 34),
  POS(2606, 20),
  POS(2606, 19)
};

static TAB_NUM t_lambda_339[] = {
  4, // locals
  0, // parameters
  // $headline lines(gs)
  var_2534_0_lines, 1, var_2550_20_gs, 1, LOCAL(4),
  // gs+1 l))
  var_std__plus, 2, var_2550_20_gs, num_1, 1, LOCAL(1),
  // range(lines gs+1 l))
  var_range, 3, var_2534_0_lines, LOCAL(1), var_2599_14_l, 1, LOCAL(2),
  // .subgroups_of range(lines gs+1 l))
  LET, -1, LOCAL(4), var_subgroups_of, LOCAL(2), LOCAL(3),
  // push groups headline(.subgroups_of range(lines gs+1 l))
  var_push, 2, var_2556_1_groups, LOCAL(3), TAIL_CALL,
  POS(2608, 19),
  POS(2609, 66),
  POS(2609, 54),
  POS(2609, 40),
  POS(2609, 19)
};

static TAB_NUM t_func_reduce_minimum_indent_and_next[] = {
  2, // locals
  1, // parameters
  var_2611_34_current_indent,
  // is_defined && current_indent < minimum_indent:
  var_is_defined, 1, var_2611_34_current_indent, 1, LOCAL(1),
  // is_defined && current_indent < minimum_indent:
  var_std__and, 2, LOCAL(1), lambda_340, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_341, var_next, TAIL_CALL,
  POS(2613, 28),
  POS(2613, 28),
  POS(2612, 11)
};

static TAB_NUM t_lambda_340[] = {
  1, // locals
  0, // parameters
  // current_indent < minimum_indent:
  var_std__less, 2, var_2611_34_current_indent, var_2557_1_minimum_indent, 1, LOCAL(1),
  // current_indent < minimum_indent:
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(2613, 42),
  POS(2613, 42)
};

static TAB_NUM t_lambda_341[] = {
  0, // locals
  0, // parameters
  // !minimum_indent current_indent
  LET, 1, var_2611_34_current_indent, 1, var_2557_1_minimum_indent,
  // next
  var_next, 0, TAIL_CALL,
  POS(2614, 15),
  POS(2615, 15)
};

static TAB_NUM t_func_start_new_fragment_and_next[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 2618_31_i
  // !minimum_indent VERY_LARGE_INDENT
  LET, 1, num_9999, 1, var_2557_1_minimum_indent,
  // !gs i
  LET, 1, LOCAL(1), 1, var_2550_20_gs,
  // !ge i
  LET, 1, LOCAL(1), 1, var_2558_1_ge,
  // next
  var_next, 0, TAIL_CALL,
  POS(2619, 11),
  POS(2620, 11),
  POS(2621, 11),
  POS(2622, 11)
};

static TAB_NUM t_func_std__wrap_words[] = {
  0, // locals
  2, // parameters
  var_2651_0_text,
  var_2652_0_width,
  // $wrapped_text ""
  LET, 1, string_1, 1, var_2654_1_wrapped_text,
  // $n length_of(text)
  var_length_of, 1, var_2651_0_text, 1, var_2655_1_n,
  // $s 1 # start of not yet copied text
  LET, 1, num_1, 1, var_2656_1_s,
  // $l s # line start position
  LET, 1, var_2656_1_s, 1, var_2657_1_l,
  // $b undefined # possible break position
  LET, 1, var_undefined, 1, var_2658_1_b,
  // $i 1
  LET, 1, num_1, 1, var_2659_1_i,
  // loop:
  var_loop, 1, lambda_20_loop, TAIL_CALL,
  POS(2654, 3),
  POS(2655, 3),
  POS(2656, 3),
  POS(2657, 3),
  POS(2658, 3),
  POS(2659, 3),
  POS(2660, 3)
};

static TAB_NUM t_lambda_20_loop[] = {
  1, // locals
  0, // parameters
  // n
  var_std__less, 2, var_2655_1_n, var_2659_1_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_342, lambda_343, TAIL_CALL,
  POS(2662, 11),
  POS(2661, 5)
};

static TAB_NUM t_lambda_342[] = {
  2, // locals
  0, // parameters
  // range(text s n))
  var_range, 3, var_2651_0_text, var_2656_1_s, var_2655_1_n, 1, LOCAL(1),
  // append(wrapped_text range(text s n))
  var_append, 2, var_2654_1_wrapped_text, LOCAL(1), 1, LOCAL(2),
  //  append(wrapped_text range(text s n))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2663, 30),
  POS(2663, 10),
  POS(2663, 9)
};

static TAB_NUM t_lambda_343[] = {
  1, // locals
  0, // parameters
  // $chr text(i)
  var_2651_0_text, 1, var_2659_1_i, 1, var_2665_1_chr,
  // chr == '@nl;':
  var_std__equal, 2, var_2665_1_chr, chr_10, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_344, lambda_345, TAIL_CALL,
  POS(2665, 9),
  POS(2667, 11),
  POS(2666, 9)
};

static TAB_NUM t_lambda_344[] = {
  0, // locals
  0, // parameters
  // !i i+1
  var_std__plus, 2, var_2659_1_i, num_1, 1, var_2659_1_i,
  // !l i
  LET, 1, var_2659_1_i, 1, var_2657_1_l,
  // !b undefined
  LET, 1, var_undefined, 1, var_2658_1_b,
  // next
  var_next, 0, TAIL_CALL,
  POS(2668, 13),
  POS(2669, 13),
  POS(2670, 13),
  POS(2671, 13)
};

static TAB_NUM t_lambda_345[] = {
  1, // locals
  0, // parameters
  // chr == ' ':
  var_std__equal, 2, var_2665_1_chr, chr_32, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_346, lambda_349, TAIL_CALL,
  POS(2674, 15),
  POS(2673, 13)
};

static TAB_NUM t_lambda_346[] = {
  2, // locals
  0, // parameters
  // i-l == width: # break
  var_std__minus, 2, var_2659_1_i, var_2657_1_l, 1, LOCAL(1),
  // i-l == width: # break
  var_std__equal, 2, LOCAL(1), var_2652_0_width, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_347, lambda_348, TAIL_CALL,
  POS(2676, 19),
  POS(2676, 19),
  POS(2675, 17)
};

static TAB_NUM t_lambda_347[] = {
  2, // locals
  0, // parameters
  // i-1)
  var_std__minus, 2, var_2659_1_i, num_1, 1, LOCAL(1),
  // range(text s i-1)
  var_range, 3, var_2651_0_text, var_2656_1_s, LOCAL(1), 1, LOCAL(2),
  // append &wrapped_text range(text s i-1)
  var_append, 2, var_2654_1_wrapped_text, LOCAL(2), 1, var_2654_1_wrapped_text,
  // push &wrapped_text '@nl;'
  var_push, 2, var_2654_1_wrapped_text, chr_10, 1, var_2654_1_wrapped_text,
  // !i i+1
  var_std__plus, 2, var_2659_1_i, num_1, 1, var_2659_1_i,
  // !s i
  LET, 1, var_2659_1_i, 1, var_2656_1_s,
  // !l s
  LET, 1, var_2656_1_s, 1, var_2657_1_l,
  // !b undefined
  LET, 1, var_undefined, 1, var_2658_1_b,
  // next
  var_next, 0, TAIL_CALL,
  POS(2677, 55),
  POS(2677, 42),
  POS(2677, 21),
  POS(2678, 21),
  POS(2679, 21),
  POS(2680, 21),
  POS(2681, 21),
  POS(2682, 21),
  POS(2683, 21)
};

static TAB_NUM t_lambda_348[] = {
  0, // locals
  0, // parameters
  // !b i
  LET, 1, var_2659_1_i, 1, var_2658_1_b,
  // !i i+1
  var_std__plus, 2, var_2659_1_i, num_1, 1, var_2659_1_i,
  // next
  var_next, 0, TAIL_CALL,
  POS(2685, 21),
  POS(2686, 21),
  POS(2687, 21)
};

static TAB_NUM t_lambda_349[] = {
  3, // locals
  0, // parameters
  // !i i+1
  var_std__plus, 2, var_2659_1_i, num_1, 1, var_2659_1_i,
  // i-l <= width
  var_std__minus, 2, var_2659_1_i, var_2657_1_l, 1, LOCAL(1),
  // width
  var_std__less, 2, var_2652_0_width, LOCAL(1), 1, LOCAL(2),
  // width
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), var_next, lambda_350, TAIL_CALL,
  POS(2689, 17),
  POS(2691, 19),
  POS(2691, 26),
  POS(2691, 26),
  POS(2690, 17)
};

static TAB_NUM t_lambda_350[] = {
  1, // locals
  0, // parameters
  // is_defined: # wrap
  var_is_defined, 1, var_2658_1_b, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_b_is_defined, lambda_351, TAIL_CALL,
  POS(2695, 25),
  POS(2694, 21)
};

static TAB_NUM t_lambda_b_is_defined[] = {
  2, // locals
  0, // parameters
  // b-1)
  var_std__minus, 2, var_2658_1_b, num_1, 1, LOCAL(1),
  // range(text s b-1)
  var_range, 3, var_2651_0_text, var_2656_1_s, LOCAL(1), 1, LOCAL(2),
  // append &wrapped_text range(text s b-1)
  var_append, 2, var_2654_1_wrapped_text, LOCAL(2), 1, var_2654_1_wrapped_text,
  // push &wrapped_text '@nl;'
  var_push, 2, var_2654_1_wrapped_text, chr_10, 1, var_2654_1_wrapped_text,
  // !s b+1
  var_std__plus, 2, var_2658_1_b, num_1, 1, var_2656_1_s,
  // !l s
  LET, 1, var_2656_1_s, 1, var_2657_1_l,
  // !b undefined
  LET, 1, var_undefined, 1, var_2658_1_b,
  // next
  var_next, 0, TAIL_CALL,
  POS(2696, 59),
  POS(2696, 46),
  POS(2696, 25),
  POS(2697, 25),
  POS(2698, 25),
  POS(2699, 25),
  POS(2700, 25),
  POS(2701, 25)
};

static TAB_NUM t_lambda_351[] = {
  2, // locals
  0, // parameters
  // i-2)
  var_std__minus, 2, var_2659_1_i, num_2, 1, LOCAL(1),
  // range(text s i-2)
  var_range, 3, var_2651_0_text, var_2656_1_s, LOCAL(1), 1, LOCAL(2),
  // append &wrapped_text range(text s i-2)
  var_append, 2, var_2654_1_wrapped_text, LOCAL(2), 1, var_2654_1_wrapped_text,
  // push &wrapped_text '@nl;'
  var_push, 2, var_2654_1_wrapped_text, chr_10, 1, var_2654_1_wrapped_text,
  // !s i-1
  var_std__minus, 2, var_2659_1_i, num_1, 1, var_2656_1_s,
  // !l s
  LET, 1, var_2656_1_s, 1, var_2657_1_l,
  // next
  var_next, 0, TAIL_CALL,
  POS(2703, 59),
  POS(2703, 46),
  POS(2703, 25),
  POS(2704, 25),
  POS(2705, 25),
  POS(2706, 25),
  POS(2707, 25)
};

static TAB_NUM t_func_std_types__string___serialize[] = {
  0, // locals
  -2, // parameters
  MANDATORY_PARAMETER, var_2727_0_self,
  var_undefined, var_2728_0_indent,
  // $str "@quot;"
  LET, 1, string_10, 1, var_2730_1_str,
  // $s 1
  LET, 1, num_1, 1, var_2731_1_s,
  // for_each self
  var_for_each, 3, var_2727_0_self, lambda_352, lambda_357, TAIL_CALL,
  POS(2730, 3),
  POS(2731, 3),
  POS(2732, 3)
};

static TAB_NUM t_lambda_352[] = {
  2, // locals
  2, // parameters
  var_2733_3_idx,
  var_2733_7_chr,
  // chr < '@0x20;' || chr > '@0x7e;' || chr == '"' || chr == '@@':
  var_std__less, 2, var_2733_7_chr, chr_32, 1, LOCAL(1),
  // chr < '@0x20;' || chr > '@0x7e;' || chr == '"' || chr == '@@':
  var_std__or, 2, LOCAL(1), lambda_353, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_356, var_next, TAIL_CALL,
  POS(2735, 9),
  POS(2735, 9),
  POS(2734, 7)
};

static TAB_NUM t_lambda_353[] = {
  2, // locals
  0, // parameters
  // 0x7e;' || chr == '"' || chr == '@@':
  var_std__less, 2, chr_126, var_2733_7_chr, 1, LOCAL(1),
  // 0x7e;' || chr == '"' || chr == '@@':
  var_std__or, 2, LOCAL(1), lambda_354, 1, LOCAL(2),
  // chr > '@0x7e;' || chr == '"' || chr == '@@':
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2735, 35),
  POS(2735, 35),
  POS(2735, 27)
};

static TAB_NUM t_lambda_354[] = {
  2, // locals
  0, // parameters
  // chr == '"' || chr == '@@':
  var_std__equal, 2, var_2733_7_chr, chr_34, 1, LOCAL(1),
  // chr == '"' || chr == '@@':
  var_std__or, 2, LOCAL(1), lambda_355, 1, LOCAL(2),
  // chr == '"' || chr == '@@':
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2735, 45),
  POS(2735, 45),
  POS(2735, 45)
};

static TAB_NUM t_lambda_355[] = {
  1, // locals
  0, // parameters
  // chr == '@@':
  var_std__equal, 2, var_2733_7_chr, chr_64, 1, LOCAL(1),
  // chr == '@@':
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(2735, 59),
  POS(2735, 59)
};

static TAB_NUM t_lambda_356[] = {
  2, // locals
  0, // parameters
  // idx-1)
  var_std__minus, 2, var_2733_3_idx, num_1, 1, LOCAL(1),
  // range(self s idx-1)
  var_range, 3, var_2727_0_self, var_2731_1_s, LOCAL(1), 1, LOCAL(2),
  // append &str range(self s idx-1)
  var_append, 2, var_2730_1_str, LOCAL(2), 1, var_2730_1_str,
  // to_integer);"
  var_to_integer, 1, var_2733_7_chr, 1, LOCAL(1),
  // "@@@(chr.to_integer);"
  var_std__string, 3, string_11, LOCAL(1), string_12, 1, LOCAL(2),
  // append &str "@@@(chr.to_integer);"
  var_append, 2, var_2730_1_str, LOCAL(2), 1, var_2730_1_str,
  // !s idx+1
  var_std__plus, 2, var_2733_3_idx, num_1, 1, var_2731_1_s,
  // next
  var_next, 0, TAIL_CALL,
  POS(2736, 36),
  POS(2736, 23),
  POS(2736, 11),
  POS(2737, 32),
  POS(2737, 23),
  POS(2737, 11),
  POS(2738, 11),
  POS(2739, 11)
};

static TAB_NUM t_lambda_357[] = {
  1, // locals
  0, // parameters
  // range(self s -1)
  var_range, 3, var_2727_0_self, var_2731_1_s, minus_num_1, 1, LOCAL(1),
  // append &str range(self s -1)
  var_append, 2, var_2730_1_str, LOCAL(1), 1, var_2730_1_str,
  // append &str "@quot;@nl;"
  var_append, 2, var_2730_1_str, string_13, 1, var_2730_1_str,
  // is_defined
  var_is_defined, 1, var_2728_0_indent, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_358, lambda_359, TAIL_CALL,
  POS(2742, 19),
  POS(2742, 7),
  POS(2743, 7),
  POS(2745, 16),
  POS(2744, 7)
};

static TAB_NUM t_lambda_358[] = {
  2, // locals
  0, // parameters
  // tabs_and_spaces(indent) str)
  var_tabs_and_spaces, 1, var_2728_0_indent, 1, LOCAL(1),
  // append(tabs_and_spaces(indent) str)
  var_append, 2, LOCAL(1), var_2730_1_str, 1, LOCAL(2),
  //  append(tabs_and_spaces(indent) str)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2746, 19),
  POS(2746, 12),
  POS(2746, 11)
};

static TAB_NUM t_lambda_359[] = {
  0, // locals
  0, // parameters
  //  str
  LET, 1, var_2730_1_str, TAIL_CALL,
  POS(2747, 11)
};

static TAB_NUM t_func_std__indented[] = {
  0, // locals
  2, // parameters
  var_2779_0_indent,
  var_2780_0_text,
  // $indented_text ""
  LET, 1, string_1, 1, var_2782_1_indented_text,
  // $new_indent undefined
  LET, 1, var_undefined, 1, var_2783_1_new_indent,
  // $i 1
  LET, 1, num_1, 1, var_2784_1_i,
  // $n length_of(text)
  var_length_of, 1, var_2780_0_text, 1, var_2785_1_n,
  // loop:
  var_loop, 1, lambda_21_loop, TAIL_CALL,
  POS(2782, 3),
  POS(2783, 3),
  POS(2784, 3),
  POS(2785, 3),
  POS(2786, 3)
};

static TAB_NUM t_lambda_21_loop[] = {
  2, // locals
  0, // parameters
  // !new_indent indent
  LET, 1, var_2779_0_indent, 1, var_2783_1_new_indent,
  // skip_indent !i !new_indent
  func_skip_indent, 0, 2, var_2784_1_i, var_2783_1_new_indent,
  // n:
  var_std__less, 2, var_2785_1_n, var_2784_1_i, 1, LOCAL(1),
  // n:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_360, lambda_368, TAIL_CALL,
  POS(2787, 5),
  POS(2788, 5),
  POS(2790, 12),
  POS(2790, 12),
  POS(2789, 5)
};

static TAB_NUM t_lambda_360[] = {
  2, // locals
  0, // parameters
  // text(i) == '@nl;':
  var_2780_0_text, 1, var_2784_1_i, 1, LOCAL(1),
  // text(i) == '@nl;':
  var_std__equal, 2, LOCAL(1), chr_10, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_361, lambda_362, TAIL_CALL,
  POS(2792, 11),
  POS(2792, 11),
  POS(2791, 9)
};

static TAB_NUM t_lambda_361[] = {
  0, // locals
  0, // parameters
  // push &indented_text '@nl;'
  var_push, 2, var_2782_1_indented_text, chr_10, 1, var_2782_1_indented_text,
  // !i i+1
  var_std__plus, 2, var_2784_1_i, num_1, 1, var_2784_1_i,
  // next
  var_next, 0, TAIL_CALL,
  POS(2793, 13),
  POS(2794, 13),
  POS(2795, 13)
};

static TAB_NUM t_lambda_362[] = {
  1, // locals
  0, // parameters
  // tabs_and_spaces(new_indent)
  var_tabs_and_spaces, 1, var_2783_1_new_indent, 1, LOCAL(1),
  // append &indented_text tabs_and_spaces(new_indent)
  var_append, 2, var_2782_1_indented_text, LOCAL(1), 1, var_2782_1_indented_text,
  // $s i
  LET, 1, var_2784_1_i, 1, var_2798_1_s,
  // loop
  var_loop, 2, lambda_363, var_next, TAIL_CALL,
  POS(2797, 35),
  POS(2797, 13),
  POS(2798, 13),
  POS(2799, 13)
};

static TAB_NUM t_lambda_363[] = {
  2, // locals
  0, // parameters
  // text(i) == '@nl;':
  var_2780_0_text, 1, var_2784_1_i, 1, LOCAL(1),
  // text(i) == '@nl;':
  var_std__equal, 2, LOCAL(1), chr_10, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_364, lambda_365, TAIL_CALL,
  POS(2802, 19),
  POS(2802, 19),
  POS(2801, 17)
};

static TAB_NUM t_lambda_364[] = {
  1, // locals
  0, // parameters
  // range(text s i)
  var_range, 3, var_2780_0_text, var_2798_1_s, var_2784_1_i, 1, LOCAL(1),
  // append &indented_text range(text s i)
  var_append, 2, var_2782_1_indented_text, LOCAL(1), 1, var_2782_1_indented_text,
  // !i i+1
  var_std__plus, 2, var_2784_1_i, num_1, 1, var_2784_1_i,
  // break
  var_break, 0, TAIL_CALL,
  POS(2803, 43),
  POS(2803, 21),
  POS(2804, 21),
  POS(2805, 21)
};

static TAB_NUM t_lambda_365[] = {
  1, // locals
  0, // parameters
  // i < n:
  var_std__less, 2, var_2784_1_i, var_2785_1_n, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_366, lambda_367, TAIL_CALL,
  POS(2808, 23),
  POS(2807, 21)
};

static TAB_NUM t_lambda_366[] = {
  0, // locals
  0, // parameters
  // !i i+1
  var_std__plus, 2, var_2784_1_i, num_1, 1, var_2784_1_i,
  // next
  var_next, 0, TAIL_CALL,
  POS(2809, 25),
  POS(2810, 25)
};

static TAB_NUM t_lambda_367[] = {
  1, // locals
  0, // parameters
  // range(text s -1)
  var_range, 3, var_2780_0_text, var_2798_1_s, minus_num_1, 1, LOCAL(1),
  // append indented_text range(text s -1)
  var_append, 2, var_2782_1_indented_text, LOCAL(1), TAIL_CALL,
  POS(2812, 46),
  POS(2812, 25)
};

static TAB_NUM t_lambda_368[] = {
  0, // locals
  0, // parameters
  //  indented_text
  LET, 1, var_2782_1_indented_text, TAIL_CALL,
  POS(2815, 9)
};

static TAB_NUM t_func_skip_indent[] = {
  2, // locals
  0, // parameters
  // n:
  var_std__less, 2, var_2785_1_n, var_2784_1_i, 1, LOCAL(1),
  // n:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_369, lambda_371, TAIL_CALL,
  POS(2819, 12),
  POS(2819, 12),
  POS(2818, 5)
};

static TAB_NUM t_lambda_369[] = {
  2, // locals
  0, // parameters
  // text(i) == '@ht;':
  var_2780_0_text, 1, var_2784_1_i, 1, LOCAL(1),
  // text(i) == '@ht;':
  var_std__equal, 2, LOCAL(1), chr_9, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_370, func_skip_spaces, TAIL_CALL,
  POS(2821, 11),
  POS(2821, 11),
  POS(2820, 9)
};

static TAB_NUM t_lambda_370[] = {
  0, // locals
  0, // parameters
  // !i i+1
  var_std__plus, 2, var_2784_1_i, num_1, 1, var_2784_1_i,
  // !new_indent new_indent+8
  var_std__plus, 2, var_2783_1_new_indent, num_8, 1, var_2783_1_new_indent,
  // skip_indent
  func_skip_indent, 0, TAIL_CALL,
  POS(2822, 13),
  POS(2823, 13),
  POS(2824, 13)
};

static TAB_NUM t_lambda_371[] = {
  0, // locals
  0, // parameters
  //  i new_indent
  LET, 2, var_2784_1_i, var_2783_1_new_indent, TAIL_CALL,
  POS(2826, 9)
};

static TAB_NUM t_func_skip_spaces[] = {
  3, // locals
  0, // parameters
  // n && text(i) == ' ':
  var_std__less, 2, var_2785_1_n, var_2784_1_i, 1, LOCAL(1),
  // n && text(i) == ' ':
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // n && text(i) == ' ':
  var_std__and, 2, LOCAL(2), lambda_372, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_373, lambda_374, TAIL_CALL,
  POS(2830, 12),
  POS(2830, 12),
  POS(2830, 12),
  POS(2829, 5)
};

static TAB_NUM t_lambda_372[] = {
  2, // locals
  0, // parameters
  // text(i) == ' ':
  var_2780_0_text, 1, var_2784_1_i, 1, LOCAL(1),
  // text(i) == ' ':
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // text(i) == ' ':
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2830, 17),
  POS(2830, 17),
  POS(2830, 17)
};

static TAB_NUM t_lambda_373[] = {
  0, // locals
  0, // parameters
  // !i i+1
  var_std__plus, 2, var_2784_1_i, num_1, 1, var_2784_1_i,
  // !new_indent new_indent+1
  var_std__plus, 2, var_2783_1_new_indent, num_1, 1, var_2783_1_new_indent,
  // skip_spaces
  func_skip_spaces, 0, TAIL_CALL,
  POS(2831, 9),
  POS(2832, 9),
  POS(2833, 9)
};

static TAB_NUM t_lambda_374[] = {
  0, // locals
  0, // parameters
  //  i new_indent
  LET, 2, var_2784_1_i, var_2783_1_new_indent, TAIL_CALL,
  POS(2834, 9)
};

static TAB_NUM t_func_std__format[] = {
  0, // locals
  -2, // parameters
  MANDATORY_PARAMETER, var_2868_0_template,
  REST_PARAMETER, var_2869_0_arguments,
  // $output ""
  LET, 1, string_1, 1, var_2871_1_output,
  // $arg_idx 1
  LET, 1, num_1, 1, var_2872_1_arg_idx,
  // $i 1
  LET, 1, num_1, 1, var_2873_1_i,
  // $n length_of(template)
  var_length_of, 1, var_2868_0_template, 1, var_2874_1_n,
  // loop:
  var_loop, 1, lambda_22_loop, TAIL_CALL,
  POS(2871, 3),
  POS(2872, 3),
  POS(2873, 3),
  POS(2874, 3),
  POS(2875, 3)
};

static TAB_NUM t_lambda_22_loop[] = {
  1, // locals
  0, // parameters
  // n
  var_std__less, 2, var_2874_1_n, var_2873_1_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_375, lambda_376, TAIL_CALL,
  POS(2877, 11),
  POS(2876, 5)
};

static TAB_NUM t_lambda_375[] = {
  0, // locals
  0, // parameters
  //  output
  LET, 1, var_2871_1_output, TAIL_CALL,
  POS(2878, 9)
};

static TAB_NUM t_lambda_376[] = {
  0, // locals
  0, // parameters
  // $chr template(i)
  var_2868_0_template, 1, var_2873_1_i, 1, var_2880_1_chr,
  // !i i+1
  var_std__plus, 2, var_2873_1_i, num_1, 1, var_2873_1_i,
  // case chr
  var_case, 6, var_2880_1_chr, chr_37, lambda_377, chr_92, lambda_403, lambda_406, TAIL_CALL,
  POS(2880, 9),
  POS(2881, 9),
  POS(2882, 9)
};

static TAB_NUM t_lambda_377[] = {
  1, // locals
  0, // parameters
  // n
  var_std__less, 2, var_2874_1_n, var_2873_1_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_378, lambda_379, TAIL_CALL,
  POS(2885, 19),
  POS(2884, 13)
};

static TAB_NUM t_lambda_378[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(2886, 17)
};

static TAB_NUM t_lambda_379[] = {
  2, // locals
  0, // parameters
  // template(i) $alignment !i
  var_2868_0_template, 1, var_2873_1_i, 1, LOCAL(1),
  // case template(i) $alignment !i
  var_case, 8, LOCAL(1), chr_108, lambda_l, chr_114, lambda_r, chr_99, lambda_c, lambda_380, 2, var_2888_18_alignment, var_2873_1_i,
  // $len_chr template(i)
  var_2868_0_template, 1, var_2873_1_i, 1, var_2893_1_len_chr,
  // len_chr < '0' || len_chr > '9'
  var_std__less, 2, var_2893_1_len_chr, chr_48, 1, LOCAL(1),
  // len_chr < '0' || len_chr > '9'
  var_std__or, 2, LOCAL(1), lambda_381, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_382, lambda_383, TAIL_CALL,
  POS(2888, 22),
  POS(2888, 17),
  POS(2893, 17),
  POS(2895, 19),
  POS(2895, 19),
  POS(2894, 17)
};

static TAB_NUM t_lambda_l[] = {
  1, // locals
  0, // parameters
  // i+1
  var_std__plus, 2, var_2873_1_i, num_1, 1, LOCAL(1),
  //  LEFT i+1
  LET, 2, uni_LEFT, LOCAL(1), TAIL_CALL,
  POS(2889, 31),
  POS(2889, 25)
};

static TAB_NUM t_lambda_r[] = {
  1, // locals
  0, // parameters
  // i+1
  var_std__plus, 2, var_2873_1_i, num_1, 1, LOCAL(1),
  //  RIGHT i+1
  LET, 2, uni_RIGHT, LOCAL(1), TAIL_CALL,
  POS(2890, 32),
  POS(2890, 25)
};

static TAB_NUM t_lambda_c[] = {
  1, // locals
  0, // parameters
  // i+1
  var_std__plus, 2, var_2873_1_i, num_1, 1, LOCAL(1),
  //  CENTER i+1
  LET, 2, uni_CENTER, LOCAL(1), TAIL_CALL,
  POS(2891, 33),
  POS(2891, 25)
};

static TAB_NUM t_lambda_380[] = {
  0, // locals
  0, // parameters
  //  RIGHT i
  LET, 2, uni_RIGHT, var_2873_1_i, TAIL_CALL,
  POS(2892, 21)
};

static TAB_NUM t_lambda_381[] = {
  1, // locals
  0, // parameters
  // 9'
  var_std__less, 2, chr_57, var_2893_1_len_chr, 1, LOCAL(1),
  // len_chr > '9'
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(2895, 47),
  POS(2895, 36)
};

static TAB_NUM t_lambda_382[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(2896, 21)
};

static TAB_NUM t_lambda_383[] = {
  0, // locals
  0, // parameters
  // $width len_chr-'0'
  var_std__minus, 2, var_2893_1_len_chr, chr_48, 1, var_2898_1_width,
  // loop
  var_loop, 2, lambda_384, lambda_388, TAIL_CALL,
  POS(2898, 21),
  POS(2899, 21)
};

static TAB_NUM t_lambda_384[] = {
  1, // locals
  0, // parameters
  // !i i+1
  var_std__plus, 2, var_2873_1_i, num_1, 1, var_2873_1_i,
  // n
  var_std__less, 2, var_2874_1_n, var_2873_1_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), var_break, lambda_385, TAIL_CALL,
  POS(2901, 25),
  POS(2903, 31),
  POS(2902, 25)
};

static TAB_NUM t_lambda_385[] = {
  2, // locals
  0, // parameters
  // $fmt_chr template(i)
  var_2868_0_template, 1, var_2873_1_i, 1, var_2906_1_fmt_chr,
  // fmt_chr < '0' || fmt_chr > '9'
  var_std__less, 2, var_2906_1_fmt_chr, chr_48, 1, LOCAL(1),
  // fmt_chr < '0' || fmt_chr > '9'
  var_std__or, 2, LOCAL(1), lambda_386, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), var_break, lambda_387, TAIL_CALL,
  POS(2906, 29),
  POS(2908, 31),
  POS(2908, 31),
  POS(2907, 29)
};

static TAB_NUM t_lambda_386[] = {
  1, // locals
  0, // parameters
  // 9'
  var_std__less, 2, chr_57, var_2906_1_fmt_chr, 1, LOCAL(1),
  // fmt_chr > '9'
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(2908, 59),
  POS(2908, 48)
};

static TAB_NUM t_lambda_387[] = {
  2, // locals
  0, // parameters
  // 10*width+(fmt_chr-'0')
  var_std__times, 2, num_10, var_2898_1_width, 1, LOCAL(1),
  // fmt_chr-'0')
  var_std__minus, 2, var_2906_1_fmt_chr, chr_48, 1, LOCAL(2),
  // !width 10*width+(fmt_chr-'0')
  var_std__plus, 2, LOCAL(1), LOCAL(2), 1, var_2898_1_width,
  // next
  var_next, 0, TAIL_CALL,
  POS(2911, 40),
  POS(2911, 50),
  POS(2911, 33),
  POS(2912, 33)
};

static TAB_NUM t_lambda_388[] = {
  1, // locals
  0, // parameters
  // n:
  var_std__less, 2, var_2874_1_n, var_2873_1_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_389, lambda_390, TAIL_CALL,
  POS(2915, 31),
  POS(2914, 25)
};

static TAB_NUM t_lambda_389[] = {
  0, // locals
  0, // parameters
  // add_argument width
  func_add_argument, 1, var_2898_1_width, TAIL_CALL,
  POS(2916, 29)
};

static TAB_NUM t_lambda_390[] = {
  2, // locals
  0, // parameters
  // template(i) == '.':
  var_2868_0_template, 1, var_2873_1_i, 1, LOCAL(1),
  // template(i) == '.':
  var_std__equal, 2, LOCAL(1), chr_46, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_391, lambda_402, TAIL_CALL,
  POS(2919, 31),
  POS(2919, 31),
  POS(2918, 29)
};

static TAB_NUM t_lambda_391[] = {
  1, // locals
  0, // parameters
  // !i i+1
  var_std__plus, 2, var_2873_1_i, num_1, 1, var_2873_1_i,
  // n
  var_std__less, 2, var_2874_1_n, var_2873_1_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_392, lambda_393, TAIL_CALL,
  POS(2920, 33),
  POS(2922, 39),
  POS(2921, 33)
};

static TAB_NUM t_lambda_392[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(2923, 37)
};

static TAB_NUM t_lambda_393[] = {
  2, // locals
  0, // parameters
  // $dw_chr template(i)
  var_2868_0_template, 1, var_2873_1_i, 1, var_2925_1_dw_chr,
  // dw_chr < '0' || dw_chr > '9'
  var_std__less, 2, var_2925_1_dw_chr, chr_48, 1, LOCAL(1),
  // dw_chr < '0' || dw_chr > '9'
  var_std__or, 2, LOCAL(1), lambda_394, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_395, lambda_396, TAIL_CALL,
  POS(2925, 37),
  POS(2927, 39),
  POS(2927, 39),
  POS(2926, 37)
};

static TAB_NUM t_lambda_394[] = {
  1, // locals
  0, // parameters
  // 9'
  var_std__less, 2, chr_57, var_2925_1_dw_chr, 1, LOCAL(1),
  // dw_chr > '9'
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(2927, 65),
  POS(2927, 55)
};

static TAB_NUM t_lambda_395[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(2928, 41)
};

static TAB_NUM t_lambda_396[] = {
  0, // locals
  0, // parameters
  // $dw dw_chr-'0'
  var_std__minus, 2, var_2925_1_dw_chr, chr_48, 1, var_2930_1_dw,
  // loop
  var_loop, 2, lambda_397, lambda_401, TAIL_CALL,
  POS(2930, 41),
  POS(2931, 41)
};

static TAB_NUM t_lambda_397[] = {
  1, // locals
  0, // parameters
  // !i i+1
  var_std__plus, 2, var_2873_1_i, num_1, 1, var_2873_1_i,
  // n
  var_std__less, 2, var_2874_1_n, var_2873_1_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), var_break, lambda_398, TAIL_CALL,
  POS(2933, 45),
  POS(2935, 51),
  POS(2934, 45)
};

static TAB_NUM t_lambda_398[] = {
  2, // locals
  0, // parameters
  // $fmt_chr template(i)
  var_2868_0_template, 1, var_2873_1_i, 1, var_2938_1_fmt_chr,
  // fmt_chr < '0' || fmt_chr > '9'
  var_std__less, 2, var_2938_1_fmt_chr, chr_48, 1, LOCAL(1),
  // fmt_chr < '0' || fmt_chr > '9'
  var_std__or, 2, LOCAL(1), lambda_399, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), var_break, lambda_400, TAIL_CALL,
  POS(2938, 49),
  POS(2940, 51),
  POS(2940, 51),
  POS(2939, 49)
};

static TAB_NUM t_lambda_399[] = {
  1, // locals
  0, // parameters
  // 9'
  var_std__less, 2, chr_57, var_2938_1_fmt_chr, 1, LOCAL(1),
  // fmt_chr > '9'
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(2940, 79),
  POS(2940, 68)
};

static TAB_NUM t_lambda_400[] = {
  2, // locals
  0, // parameters
  // 10*dw+(fmt_chr-'0')
  var_std__times, 2, num_10, var_2930_1_dw, 1, LOCAL(1),
  // fmt_chr-'0')
  var_std__minus, 2, var_2938_1_fmt_chr, chr_48, 1, LOCAL(2),
  // !dw 10*dw+(fmt_chr-'0')
  var_std__plus, 2, LOCAL(1), LOCAL(2), 1, var_2930_1_dw,
  // next
  var_next, 0, TAIL_CALL,
  POS(2943, 57),
  POS(2943, 64),
  POS(2943, 53),
  POS(2944, 53)
};

static TAB_NUM t_lambda_401[] = {
  0, // locals
  0, // parameters
  // add_argument alignment width dw
  func_add_argument, 3, var_2888_18_alignment, var_2898_1_width, var_2930_1_dw, TAIL_CALL,
  POS(2946, 45)
};

static TAB_NUM t_lambda_402[] = {
  0, // locals
  0, // parameters
  // add_argument alignment width
  func_add_argument, 2, var_2888_18_alignment, var_2898_1_width, TAIL_CALL,
  POS(2948, 33)
};

static TAB_NUM t_lambda_403[] = {
  1, // locals
  0, // parameters
  // n
  var_std__less, 2, var_2874_1_n, var_2873_1_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_404, lambda_405, TAIL_CALL,
  POS(2951, 19),
  POS(2950, 13)
};

static TAB_NUM t_lambda_404[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(2952, 17)
};

static TAB_NUM t_lambda_405[] = {
  1, // locals
  0, // parameters
  // template(i)
  var_2868_0_template, 1, var_2873_1_i, 1, LOCAL(1),
  // push &output template(i)
  var_push, 2, var_2871_1_output, LOCAL(1), 1, var_2871_1_output,
  // !i i+1
  var_std__plus, 2, var_2873_1_i, num_1, 1, var_2873_1_i,
  // next
  var_next, 0, TAIL_CALL,
  POS(2954, 30),
  POS(2954, 17),
  POS(2955, 17),
  POS(2956, 17)
};

static TAB_NUM t_lambda_406[] = {
  0, // locals
  0, // parameters
  // push &output chr
  var_push, 2, var_2871_1_output, var_2880_1_chr, 1, var_2871_1_output,
  // next
  var_next, 0, TAIL_CALL,
  POS(2958, 13),
  POS(2959, 13)
};

static TAB_NUM t_func_add_argument[] = {
  2, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_2963_0_alignment,
  MANDATORY_PARAMETER, var_2964_0_width,
  var_undefined, var_2965_0_decimal_width,
  // $argument arguments(arg_idx)
  var_2869_0_arguments, 1, var_2872_1_arg_idx, 1, var_2967_1_argument,
  // !arg_idx arg_idx+1
  var_std__plus, 2, var_2872_1_arg_idx, num_1, 1, var_2872_1_arg_idx,
  // is_defined:
  var_is_defined, 1, var_2965_0_decimal_width, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_decimal_width_is_defined, lambda_409, 1, LOCAL(2),
  // append &output
  var_append, 2, var_2871_1_output, LOCAL(2), 1, var_2871_1_output,
  // next
  var_next, 0, TAIL_CALL,
  POS(2967, 5),
  POS(2968, 5),
  POS(2971, 23),
  POS(2970, 7),
  POS(2969, 5),
  POS(2987, 5)
};

static TAB_NUM t_lambda_decimal_width_is_defined[] = {
  1, // locals
  0, // parameters
  // real_to_string &argument
  func_real_to_string, 1, var_2967_1_argument, 1, var_2967_1_argument,
  // is_undefined
  var_is_undefined, 1, var_2967_1_argument, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_407, lambda_408, TAIL_CALL,
  POS(2972, 11),
  POS(2974, 22),
  POS(2973, 11)
};

static TAB_NUM t_lambda_407[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(2975, 15)
};

static TAB_NUM t_lambda_408[] = {
  5, // locals
  0, // parameters
  // $value argument .truncate_from. '.'
  var_truncate_from, 2, var_2967_1_argument, chr_46, 1, LOCAL(4),
  // $decimals argument .behind. '.'
  var_behind, 2, var_2967_1_argument, chr_46, 1, LOCAL(5),
  // pad_left(value width)
  var_pad_left, 2, LOCAL(4), var_2964_0_width, 1, LOCAL(1),
  // pad_right(decimals decimal_width "0") decimal_width)
  var_pad_right, 3, LOCAL(5), var_2965_0_decimal_width, string_14, 1, LOCAL(2),
  // truncate(pad_right(decimals decimal_width "0") decimal_width)
  var_truncate, 2, LOCAL(2), var_2965_0_decimal_width, 1, LOCAL(3),
  // string
  var_string, 3, LOCAL(1), string_15, LOCAL(3), TAIL_CALL,
  POS(2977, 15),
  POS(2978, 15),
  POS(2980, 17),
  POS(2982, 26),
  POS(2982, 17),
  POS(2979, 15)
};

static TAB_NUM t_lambda_409[] = {
  0, // locals
  0, // parameters
  // case alignment
  var_case, 5, var_2963_0_alignment, uni_LEFT, lambda_LEFT, uni_RIGHT, lambda_RIGHT, TAIL_CALL,
  POS(2984, 11)
};

static TAB_NUM t_lambda_LEFT[] = {
  1, // locals
  0, // parameters
  // pad_right(argument width)
  var_pad_right, 2, var_2967_1_argument, var_2964_0_width, 1, LOCAL(1),
  //  pad_right(argument width)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(2985, 21),
  POS(2985, 20)
};

static TAB_NUM t_lambda_RIGHT[] = {
  1, // locals
  0, // parameters
  // pad_left(argument width)
  var_pad_left, 2, var_2967_1_argument, var_2964_0_width, 1, LOCAL(1),
  //  pad_left(argument width)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(2986, 22),
  POS(2986, 21)
};

static TAB_NUM t_func_real_to_string[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 2989_18_num
  // $str num.to_string
  var_to_string, 1, LOCAL(1), 1, var_2990_1_str,
  // $n length_of(str)
  var_length_of, 1, var_2990_1_str, 1, var_2991_1_n,
  // $i n
  LET, 1, var_2991_1_n, 1, var_2992_1_i,
  // loop:
  var_loop, 1, lambda_23_loop, TAIL_CALL,
  POS(2990, 3),
  POS(2991, 3),
  POS(2992, 3),
  POS(2993, 3)
};

static TAB_NUM t_lambda_23_loop[] = {
  1, // locals
  0, // parameters
  // i == 0
  var_std__equal, 2, var_2992_1_i, num_0, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_410, lambda_411, TAIL_CALL,
  POS(2995, 7),
  POS(2994, 5)
};

static TAB_NUM t_lambda_410[] = {
  0, // locals
  0, // parameters
  //  str
  LET, 1, var_2990_1_str, TAIL_CALL,
  POS(2996, 9)
};

static TAB_NUM t_lambda_411[] = {
  2, // locals
  0, // parameters
  // str(i) == 'e'
  var_2990_1_str, 1, var_2992_1_i, 1, LOCAL(1),
  // str(i) == 'e'
  var_std__equal, 2, LOCAL(1), chr_101, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), func_2_handle_exponent, lambda_412, TAIL_CALL,
  POS(2999, 11),
  POS(2999, 11),
  POS(2998, 9)
};

static TAB_NUM t_lambda_412[] = {
  0, // locals
  0, // parameters
  // !i i-1
  var_std__minus, 2, var_2992_1_i, num_1, 1, var_2992_1_i,
  // next
  var_next, 0, TAIL_CALL,
  POS(3002, 13),
  POS(3003, 13)
};

static TAB_NUM t_func_2_handle_exponent[] = {
  3, // locals
  0, // parameters
  // i >= n || str(2) != '.'
  var_std__less, 2, var_2992_1_i, var_2991_1_n, 1, LOCAL(1),
  // i >= n || str(2) != '.'
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // i >= n || str(2) != '.'
  var_std__or, 2, LOCAL(2), lambda_413, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_414, lambda_415, TAIL_CALL,
  POS(3007, 7),
  POS(3007, 7),
  POS(3007, 7),
  POS(3006, 5)
};

static TAB_NUM t_lambda_413[] = {
  3, // locals
  0, // parameters
  // str(2) != '.'
  var_2990_1_str, 1, num_2, 1, LOCAL(1),
  // str(2) != '.'
  var_std__equal, 2, LOCAL(1), chr_46, 1, LOCAL(2),
  // str(2) != '.'
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // str(2) != '.'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(3007, 17),
  POS(3007, 17),
  POS(3007, 17),
  POS(3007, 17)
};

static TAB_NUM t_lambda_414[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(3008, 9)
};

static TAB_NUM t_lambda_415[] = {
  3, // locals
  0, // parameters
  // i+2 n).to_integer
  var_std__plus, 2, var_2992_1_i, num_2, 1, LOCAL(1),
  // range(str i+2 n).to_integer
  var_range, 3, var_2990_1_str, LOCAL(1), var_2991_1_n, 1, LOCAL(2),
  // $exp range(str i+2 n).to_integer
  var_to_integer, 1, LOCAL(2), 1, var_3010_1_exp,
  // i-1) str(1))
  var_std__minus, 2, var_2992_1_i, num_1, 1, LOCAL(1),
  // range(str 3 i-1) str(1))
  var_range, 3, var_2990_1_str, num_3, LOCAL(1), 1, LOCAL(2),
  // str(1))
  var_2990_1_str, 1, num_1, 1, LOCAL(3),
  // $man put(range(str 3 i-1) str(1))
  var_put, 2, LOCAL(2), LOCAL(3), 1, var_3011_1_man,
  // is_undefined
  var_is_undefined, 1, var_3010_1_exp, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_416, lambda_417, TAIL_CALL,
  POS(3010, 24),
  POS(3010, 14),
  POS(3010, 9),
  POS(3011, 30),
  POS(3011, 18),
  POS(3011, 35),
  POS(3011, 9),
  POS(3013, 15),
  POS(3012, 9)
};

static TAB_NUM t_lambda_416[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(3014, 13)
};

static TAB_NUM t_lambda_417[] = {
  2, // locals
  0, // parameters
  // exp-1)
  var_std__minus, 2, var_3010_1_exp, num_1, 1, LOCAL(1),
  // $zeros dup("0" exp-1)
  var_dup, 2, string_14, LOCAL(1), 1, var_3016_1_zeros,
  // i+1)
  var_std__plus, 2, var_2992_1_i, num_1, 1, LOCAL(1),
  // str(i+1)
  var_2990_1_str, 1, LOCAL(1), 1, LOCAL(2),
  // case str(i+1)
  var_case, 6, LOCAL(2), chr_43, lambda_418, chr_45, lambda_419, lambda_420, TAIL_CALL,
  POS(3016, 28),
  POS(3016, 13),
  POS(3017, 22),
  POS(3017, 18),
  POS(3017, 13)
};

static TAB_NUM t_lambda_418[] = {
  1, // locals
  0, // parameters
  // append(man zeros)
  var_append, 2, var_3011_1_man, var_3016_1_zeros, 1, LOCAL(1),
  // -> append(man zeros)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(3019, 20),
  POS(3019, 17)
};

static TAB_NUM t_lambda_419[] = {
  2, // locals
  0, // parameters
  // append(zeros man))
  var_append, 2, var_3016_1_zeros, var_3011_1_man, 1, LOCAL(1),
  // append("0." append(zeros man))
  var_append, 2, string_16, LOCAL(1), 1, LOCAL(2),
  // -> append("0." append(zeros man))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(3021, 32),
  POS(3021, 20),
  POS(3021, 17)
};

static TAB_NUM t_lambda_420[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(3022, 17)
};

static int value_range_1343_0_arguments[] = {
  -num_0, -num_25
};

static int value_range_1346_0_arguments[] = {
  -num_26, -num_51
};

static int value_range_1349_0_arguments[] = {
  -num_52, -num_61
};

static int value_range_1418_1_arguments[] = {
  -chr_65, -chr_90
};

static int value_range_1419_1_arguments[] = {
  -chr_97, -chr_122
};

static int value_range_1420_1_arguments[] = {
  -chr_48, -chr_57
};

static int value_range_1620_1_arguments[] = {
  -chr_48, -chr_49
};

static int value_range_1631_1_arguments[] = {
  -chr_48, -chr_55
};

static int value_range_1645_1_arguments[] = {
  -chr_97, -chr_102
};

static int value_range_1648_1_arguments[] = {
  -chr_65, -chr_70
};

static int sequence_1727_1_arguments[] = {
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
  {FLT_VALUE_RANGE, 2, {.arguments = value_range_1343_0_arguments}},
  {FLT_POSITIVE_INT64, 0, {.value = 26}},
  {FLT_POSITIVE_INT64, 0, {.value = 51}},
  {FLT_VALUE_RANGE, 2, {.arguments = value_range_1346_0_arguments}},
  {FLT_POSITIVE_INT64, 0, {.value = 52}},
  {FLT_POSITIVE_INT64, 0, {.value = 61}},
  {FLT_VALUE_RANGE, 2, {.arguments = value_range_1349_0_arguments}},
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
  {FLT_VALUE_RANGE, 2, {.arguments = value_range_1418_1_arguments}},
  {FLT_CHARACTER, 0, {.value = 122}},
  {FLT_VALUE_RANGE, 2, {.arguments = value_range_1419_1_arguments}},
  {FLT_CHARACTER, 0, {.value = 57}},
  {FLT_VALUE_RANGE, 2, {.arguments = value_range_1420_1_arguments}},
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
  {FLT_VALUE_RANGE, 2, {.arguments = value_range_1620_1_arguments}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_160}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_161}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_162}},
  {FLT_STRING_8, 2, {.str_8 = "0o"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_163}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_164}},
  {FLT_CHARACTER, 0, {.value = 55}},
  {FLT_VALUE_RANGE, 2, {.arguments = value_range_1631_1_arguments}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_165}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_166}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_167}},
  {FLT_STRING_8, 2, {.str_8 = "0x"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_168}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_169}},
  {FLT_CHARACTER, 0, {.value = 102}},
  {FLT_VALUE_RANGE, 2, {.arguments = value_range_1645_1_arguments}},
  {FLT_CHARACTER, 0, {.value = 70}},
  {FLT_VALUE_RANGE, 2, {.arguments = value_range_1648_1_arguments}},
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
  {FLT_SEQUENCE, 2, {.arguments = sequence_1727_1_arguments}},
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
  {FLT_FUNCTION, 0, {.tfunc = t_func_indent_of}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_312}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_313}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__split_into_groups}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_18_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_314}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_indent_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_315}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_316}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_2_split}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_317}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_318}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_319}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_320}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_321}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_322}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_323}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_324}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_325}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_326}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_327}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_gs_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_19_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_328}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_329}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_330}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_331}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_332}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_333}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_334}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_335}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_add_groups}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_336}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_337}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_338}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_339}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_reduce_minimum_indent_and_next}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_340}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_341}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_start_new_fragment_and_next}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__wrap_words}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_20_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_342}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_343}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_344}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_345}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_346}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_347}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_348}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_349}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_350}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_b_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_351}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__string___serialize}},
  {FLT_STRING_8, 1, {.str_8 = "\042"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_352}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_353}},
  {FLT_CHARACTER, 0, {.value = 126}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_354}},
  {FLT_CHARACTER, 0, {.value = 34}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_355}},
  {FLT_CHARACTER, 0, {.value = 64}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_356}},
  {FLT_STRING_8, 1, {.str_8 = "@"}},
  {FLT_STRING_8, 1, {.str_8 = ";"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_357}},
  {FLT_STRING_8, 2, {.str_8 = "\042\012"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_358}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_359}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__indented}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_21_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_360}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_361}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_362}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_363}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_364}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_365}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_366}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_367}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_368}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_skip_indent}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_369}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_370}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_371}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_skip_spaces}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_372}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_373}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_374}},
  {FLT_UNIQUE, 0, {.str_8 = "LEFT"}},
  {FLT_UNIQUE, 0, {.str_8 = "RIGHT"}},
  {FLT_UNIQUE, 0, {.str_8 = "CENTER"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__format}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_22_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_375}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_376}},
  {FLT_CHARACTER, 0, {.value = 37}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_377}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_378}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_379}},
  {FLT_CHARACTER, 0, {.value = 108}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_l}},
  {FLT_CHARACTER, 0, {.value = 114}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_r}},
  {FLT_CHARACTER, 0, {.value = 99}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_c}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_380}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_381}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_382}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_383}},
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
  {FLT_CHARACTER, 0, {.value = 92}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_403}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_404}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_405}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_406}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_add_argument}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_decimal_width_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_407}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_408}},
  {FLT_STRING_8, 1, {.str_8 = "0"}},
  {FLT_STRING_8, 1, {.str_8 = "."}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_409}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_LEFT}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_RIGHT}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_real_to_string}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_23_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_410}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_411}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_412}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_2_handle_exponent}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_413}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_414}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_415}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_416}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_417}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_418}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_419}},
  {FLT_STRING_8, 2, {.str_8 = "0."}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_420}}
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
  {-var_is_an_octet_string, -var_true},
  {var_to_base64, -func_std_types__octet_string___to_base64},
  {var_from_base64, -func_std_types__octet_string___from_base64},
  {var_sha1, -func_std_types__octet_string___sha1}
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
    FOT_UNKNOWN, 0, 2,
    "object\000std_types", std_types__object__attributes,
    {.position = POS(78, 1)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "is_a_string\000", NULL,
    {.position = POS(78, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "false\000", NULL,
    {.position = POS(78, 32)}
  },
  {
    FOT_UNKNOWN, 0, 28,
    "string\000std_types", std_types__string__attributes,
    {.position = POS(84, 1)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "true\000", NULL,
    {.position = POS(84, 32)}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "is_an_octet_string\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "is_an_octet_string\000", NULL,
    {.position = POS(96, 20)}
  },
  {
    FOT_UNKNOWN, 0, 4,
    "octet_string\000std_types", std_types__octet_string__attributes,
    {.position = POS(102, 1)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "to_string\000", NULL,
    {.position = POS(108, 20)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "create_string\000std", NULL,
    {.const_idx = -func_std__create_string}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "137_0_arguments\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_empty\000", NULL,
    {.position = POS(140, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "append\000", NULL,
    {.position = POS(142, 38)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "map_reduce\000", NULL,
    {.position = POS(142, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if\000", NULL,
    {.position = POS(139, 3)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "string\000std", NULL,
    {.const_idx = -func_std__string}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "create_string\000", NULL,
    {.position = POS(158, 3)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "put\000", NULL,
    {.position = POS(160, 20)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "dup\000", NULL,
    {.position = POS(178, 20)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "198_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "199_0_n\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "shift_right\000std", NULL,
    {.position = POS(205, 10)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "206_1_str\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "times\000std", NULL,
    {.position = POS(208, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "equal\000std", NULL,
    {.position = POS(208, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "string\000", NULL,
    {.position = POS(209, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "case\000", NULL,
    {.position = POS(201, 3)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "pad_left\000std", NULL,
    {.const_idx = -func_std__pad_left}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "238_0_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "239_0_pad\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "241_1_text\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "242_1_len\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "length_of\000", NULL,
    {.position = POS(242, 8)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "less\000std", NULL,
    {.position = POS(244, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "minus\000std", NULL,
    {.position = POS(246, 29)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000std", NULL,
    {.position = POS(246, 29)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "div\000", NULL,
    {.position = POS(246, 28)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "range\000", NULL,
    {.position = POS(246, 14)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "pad_right\000std", NULL,
    {.const_idx = -func_std__pad_right}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "274_0_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "275_0_pad\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "277_1_text\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "278_1_len\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "spaces\000std", NULL,
    {.const_idx = -func_std__spaces}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "297_0_n\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not\000std", NULL,
    {.position = POS(300, 10)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "tabs_and_spaces\000std", NULL,
    {.const_idx = -func_std__tabs_and_spaces}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "314_0_n\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "bit_and\000std", NULL,
    {.position = POS(318, 56)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "spaces\000", NULL,
    {.position = POS(319, 34)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "with_tabs\000std", NULL,
    {.const_idx = -func_std__with_tabs}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "334_0_text\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "336_1_s\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "337_1_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "338_1_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "339_1_output\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "340_1_count\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "next\000", NULL,
    {.position = POS(348, 13)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "352_1_tab_count\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "shift_left\000std", NULL,
    {.position = POS(361, 35)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "loop\000", NULL,
    {.position = POS(341, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "and\000std", NULL,
    {.position = POS(375, 16)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "break\000", NULL,
    {.position = POS(378, 11)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "match\000", NULL,
    {.position = POS(385, 20)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "397_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "398_0_stream\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "400_1_len\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "undefined\000", NULL,
    {.position = POS(407, 12)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "search\000", NULL,
    {.position = POS(410, 20)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "427_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "428_0_stream\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "429_0_nth\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "431_1_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "432_1_length\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "433_1_offset\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "434_1_n\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "dec\000", NULL,
    {.position = POS(451, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000", NULL,
    {.position = POS(452, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "inc\000", NULL,
    {.position = POS(456, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "minus\000", NULL,
    {.position = POS(469, 17)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "before\000", NULL,
    {.position = POS(477, 20)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "515_0_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "519_8_pos\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_defined\000", NULL,
    {.position = POS(521, 9)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "truncate_from\000", NULL,
    {.position = POS(526, 20)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "565_0_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "569_8_pos\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "behind\000", NULL,
    {.position = POS(575, 20)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "613_0_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "617_8_pos\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "617_13_len\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "truncate_until\000", NULL,
    {.position = POS(623, 20)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "662_0_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "666_8_pos\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "666_13_len\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "from\000", NULL,
    {.position = POS(672, 20)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "711_0_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "715_8_pos\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "truncate_before\000", NULL,
    {.position = POS(721, 20)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "760_0_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "764_8_pos\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "until\000", NULL,
    {.position = POS(770, 20)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "808_0_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "812_8_pos\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "812_13_len\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "truncate_behind\000", NULL,
    {.position = POS(818, 20)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "857_0_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "861_8_pos\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "861_13_len\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "between\000", NULL,
    {.position = POS(867, 20)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "has_prefix\000", NULL,
    {.position = POS(900, 20)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "has_suffix\000", NULL,
    {.position = POS(922, 20)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "939_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "940_0_suffix\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_a_character\000", NULL,
    {.position = POS(943, 12)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "946_1_len\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "negate\000std", NULL,
    {.position = POS(947, 48)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "without_prefix\000", NULL,
    {.position = POS(949, 20)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "970_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "973_1_n\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "without_suffix\000", NULL,
    {.position = POS(979, 20)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1000_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1001_0_suffix\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1003_1_len\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1011_1_slen\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "contains\000", NULL,
    {.position = POS(1017, 20)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "split\000std", NULL,
    {.const_idx = -func_std__split}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1080_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1081_0_separator\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_list\000", NULL,
    {.position = POS(1085, 8)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1087_1_items\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1089_8_pos\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1089_13_len\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "push\000", NULL,
    {.position = POS(1092, 13)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "join\000std", NULL,
    {.const_idx = -func_std__join}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1121_0_separator\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "trim\000std", NULL,
    {.const_idx = -func_std__trim}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1150_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1151_0_test\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_a_whitespace_character\000", NULL,
    {.position = POS(1151, 12)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1153_1_s\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1154_1_e\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "trim_left\000std", NULL,
    {.const_idx = -func_std__trim_left}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1190_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1191_0_test\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1193_1_s\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1194_1_e\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "trim_right\000std", NULL,
    {.const_idx = -func_std__trim_right}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1224_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1225_0_test\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1227_1_e\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "normalize\000std", NULL,
    {.const_idx = -func_std__normalize}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1258_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1260_1_buf\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1261_1_e\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1262_1_i\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_not_empty\000", NULL,
    {.position = POS(1276, 23)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "update_if\000", NULL,
    {.position = POS(1276, 9)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1277_1_s\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "to_base64\000", NULL,
    {.position = POS(1293, 26)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1309_0_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1311_1_base64\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1313_1_len\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "to_integer\000", NULL,
    {.position = POS(1334, 25)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "bit_or\000std", NULL,
    {.position = POS(1333, 8)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1332_1_bits\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1337_1_buf\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1340_1_value\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "value_range\000std", NULL,
    {.position = POS(1343, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "repeat\000", NULL,
    {.position = POS(1338, 5)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "from_base64\000", NULL,
    {.position = POS(1360, 26)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1379_0_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1381_1_octets\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "mod\000", NULL,
    {.position = POS(1383, 6)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1391_1_bits\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1394_1_value\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_undefined\000", NULL,
    {.position = POS(1396, 25)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "character\000", NULL,
    {.position = POS(1402, 30)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "from_to\000", NULL,
    {.position = POS(1392, 13)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1415_10_chr\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "sha1\000", NULL,
    {.position = POS(1426, 26)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1441_0_message\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1445_1_h0\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1446_1_h1\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1447_1_h2\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1448_1_h3\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1449_1_h4\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1470_1_pad_len\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1488_1_w\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "uint32_array\000", NULL,
    {.position = POS(1488, 12)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "bit_xor\000std", NULL,
    {.position = POS(1501, 23)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1506_1_a\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1507_1_b\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1508_1_c\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1509_1_d\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1510_1_e\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1512_3_i\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "cond\000", NULL,
    {.position = POS(1513, 15)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "parse_integer\000std", NULL,
    {.const_idx = -func_std__parse_integer}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1585_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1606_1_negate\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1612_1_value\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1593_17_idx\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1605_1_orig\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1617_3_idx\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1617_7_chr\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "for_each\000", NULL,
    {.position = POS(1616, 7)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1629_3_idx\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1629_7_chr\000", NULL
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
    FOT_UNINITIALIZED, 0, 0,
    "1656_3_idx\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1656_7_chr\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "parse_number\000std", NULL,
    {.const_idx = -func_std__parse_number}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1692_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1694_1_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1695_1_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1700_1_sign_chr\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "or\000std", NULL,
    {.position = POS(1701, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "parse_hex\000", NULL,
    {.position = POS(1707, 18)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "sequence\000std", NULL,
    {.position = POS(1727, 14)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1730_28_cont\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1735_1_digit\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1746_1_next_digit\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1758_1_exp_sign_chr\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "integer\000", NULL,
    {.position = POS(1762, 41)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "real\000", NULL,
    {.position = POS(1764, 38)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1766_16_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1766_20_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1767_1_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1771_1_digit\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1776_1_value\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1783_1_next_digit\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1790_15_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1790_19_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1791_1_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1795_1_digit\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1800_1_value\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1807_1_next_digit\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "parse_hex\000std", NULL,
    {.const_idx = -func_std__parse_hex}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1842_0_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1843_0_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1845_1_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1849_1_digit\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1859_22_value\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1866_1_next_digit\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1915_21_value\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "parse_integer\000", NULL,
    {.position = POS(1915, 3)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "to_number\000", NULL,
    {.position = POS(1921, 20)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1957_20_value\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "parse_number\000", NULL,
    {.position = POS(1957, 3)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "map_characters\000std", NULL,
    {.const_idx = -func_std__map_characters}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1984_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1985_0_function\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "parameter_count_of\000", NULL,
    {.position = POS(1989, 7)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1991_3_s\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1991_5_e\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1987_1_map\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2004_3_s\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2004_5_e\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "to_upper_case\000", NULL,
    {.position = POS(2019, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "map_characters\000", NULL,
    {.position = POS(2039, 3)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "to_lower_case\000", NULL,
    {.position = POS(2041, 20)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "to_title_case\000", NULL,
    {.position = POS(2063, 20)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2081_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2083_22_idx\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2083_26_chr\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_a_letter_character\000", NULL,
    {.position = POS(2085, 30)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "to_sentence_case\000", NULL,
    {.position = POS(2089, 20)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2107_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2109_22_idx\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2109_26_chr\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "delete_all\000std", NULL,
    {.const_idx = -func_std__delete_all}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2137_0_expressions\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2139_14_txt\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2153_1_new_text\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2146_1_len\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if_not\000", NULL,
    {.position = POS(2147, 13)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "replace_all\000std", NULL,
    {.const_idx = -func_std__replace_all}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2178_0_args\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2180_15_txt\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2201_1_new_text\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2187_17_replacement\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2188_1_len\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "replace_first\000std", NULL,
    {.const_idx = -func_std__replace_first}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2226_0_args\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2228_17_txt\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2248_1_new_text\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2235_17_replacement\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2236_1_len\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "update_if_not\000", NULL,
    {.position = POS(2241, 17)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "count_occurrences\000std", NULL,
    {.const_idx = -func_std__count_occurrences}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2271_0_expr\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2273_15_txt\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2273_19_count\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2278_1_n\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "split_into_lines\000std", NULL,
    {.const_idx = -func_std__split_into_lines}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2329_25_text\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2330_1_lines\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2331_1_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2332_1_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2333_1_s\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "split_into_indented_lines\000std", NULL,
    {.const_idx = -func_std__split_into_indented_lines}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2412_0_text\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2417_9_s\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2417_11_e\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2423_1_lines\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2424_1_ls\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2430_3_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2451_15_s\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2451_17_e\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2452_1_indent\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2466_1_line_text\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "tuple\000", NULL,
    {.position = POS(2470, 20)}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "subgroups_of\000std", NULL,
    {.has_a_setter = true}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2477_13_line\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "first\000", NULL,
    {.position = POS(2480, 8)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "split_into_groups\000std", NULL,
    {.const_idx = -func_std__split_into_groups}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2534_0_lines\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2536_1_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2537_1_fv\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2541_1_indent\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2550_9_s\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2550_11_e\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2550_13_indent\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2550_20_gs\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2556_1_groups\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2557_1_minimum_indent\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2558_1_ge\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2560_3_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2561_1_current_indent\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2586_1_current_indent\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2599_14_l\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "subgroups_of\000", NULL,
    {.position = POS(2609, 41)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2611_34_current_indent\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "wrap_words\000std", NULL,
    {.const_idx = -func_std__wrap_words}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2651_0_text\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2652_0_width\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2654_1_wrapped_text\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2655_1_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2656_1_s\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2657_1_l\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2658_1_b\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2659_1_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2665_1_chr\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "serialize\000", NULL,
    {.position = POS(2709, 20)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2727_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2728_0_indent\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2730_1_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2731_1_s\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2733_3_idx\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2733_7_chr\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "tabs_and_spaces\000", NULL,
    {.position = POS(2746, 19)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "indented\000std", NULL,
    {.const_idx = -func_std__indented}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2779_0_indent\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2780_0_text\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2782_1_indented_text\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2783_1_new_indent\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2784_1_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2785_1_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2798_1_s\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "format\000std", NULL,
    {.const_idx = -func_std__format}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2868_0_template\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2869_0_arguments\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2871_1_output\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2872_1_arg_idx\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2873_1_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2874_1_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2880_1_chr\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2888_18_alignment\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2893_1_len_chr\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2898_1_width\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2906_1_fmt_chr\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2925_1_dw_chr\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2930_1_dw\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2938_1_fmt_chr\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2963_0_alignment\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2964_0_width\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2965_0_decimal_width\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2967_1_argument\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "pad_left\000", NULL,
    {.position = POS(2980, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "pad_right\000", NULL,
    {.position = POS(2982, 26)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "truncate\000", NULL,
    {.position = POS(2982, 17)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2990_1_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2991_1_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2992_1_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3010_1_exp\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3011_1_man\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3016_1_zeros\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "empty_collection_of\000", NULL,
    {.position = POS(3024, 20)}
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
  674, // number of constants
  393, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  constants_table,
  variables_table,
};
