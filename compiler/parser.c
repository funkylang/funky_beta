#include <stddef.h>
#include <stdint.h>

#include "runtime/common.h"
#include "runtime/builtins.h"
#include "runtime/fko.h"
#include "runtime/memory.h"

enum {
  uni_funky__SYNTAX_ERROR = -1,
  string_1 = -2,
  func_funky__line_indent_of = -3,
  lambda_1 = -4,
  lambda_2 = -5,
  func_funky__line_text_of = -6,
  lambda_3 = -7,
  lambda_4 = -8,
  func_funky__split_source_into_lines = -9,
  lambda_5 = -10,
  lambda_line_is_defined = -11,
  lambda_loop = -12,
  num_1 = -13,
  lambda_6 = -14,
  lambda_7 = -15,
  lambda_8 = -16,
  func_funky__parse = -17,
  func_convert_to_text_lines = -18,
  lambda_9 = -19,
  lambda_10 = -20,
  lambda_11 = -21,
  lambda_12 = -22,
  lambda_13 = -23,
  lambda_14 = -24,
  lambda_group_is_defined = -25,
  lambda_15 = -26,
  string_2 = -27,
  func_to_list = -28,
  lambda_16 = -29,
  lambda_17 = -30,
  lambda_18 = -31,
  lambda_19 = -32,
  func_syntax_error = -33,
  lambda_20 = -34,
  lambda_21 = -35,
  lambda_22 = -36,
  str__expected = -37,
  func_parse_groups = -38,
  lambda_subgroups_is_defined = -39,
  lambda_23 = -40,
  lambda_24 = -41,
  num_0 = -42,
  lambda_25 = -43,
  lambda_26 = -44,
  str_Unexpected_outde = -45,
  lambda_27 = -46,
  lambda_28 = -47,
  lambda_29 = -48,
  lambda_30 = -49,
  func_parse_lines = -50,
  lambda_2_subgroups_is_defined = -51,
  lambda_31 = -52,
  lambda_32 = -53,
  lambda_33 = -54,
  lambda_34 = -55,
  func_funky__parse_top_level_statement_group = -56,
  func_funky__parse_parameters_or_statement_group = -57,
  func_funky__parse_line_start_arguments_group = -58,
  func_funky__parse_multiline_string_components_group = -59,
  func_funky__parse_parameter_group = -60,
  func_funky__parse_multiline_remark_group = -61,
  func_parse_top_level_statement = -62,
  lambda_35 = -63,
  chr_60 = -64,
  lambda_36 = -65,
  num_2 = -66,
  minus_num_1 = -67,
  lambda_37 = -68,
  chr_35 = -69,
  lambda_38 = -70,
  lambda_39 = -71,
  lambda_40 = -72,
  str_top_level_statem = -73,
  func_parse_name = -74,
  lambda_41 = -75,
  chr_97 = -76,
  lambda_42 = -77,
  chr_122 = -78,
  lambda_43 = -79,
  chr_65 = -80,
  lambda_44 = -81,
  chr_90 = -82,
  lambda_45 = -83,
  lambda_46 = -84,
  lambda_47 = -85,
  str_name = -86,
  func_parse_more_name_characters = -87,
  lambda_48 = -88,
  lambda_49 = -89,
  lambda_50 = -90,
  lambda_51 = -91,
  lambda_52 = -92,
  chr_48 = -93,
  lambda_53 = -94,
  chr_57 = -95,
  lambda_54 = -96,
  lambda_55 = -97,
  chr_95 = -98,
  lambda_56 = -99,
  lambda_57 = -100,
  lambda_58 = -101,
  func_parse_more_name_words = -102,
  lambda_59 = -103,
  lambda_60 = -104,
  lambda_61 = -105,
  lambda_62 = -106,
  lambda_63 = -107,
  lambda_64 = -108,
  lambda_65 = -109,
  lambda_66 = -110,
  lambda_67 = -111,
  str_more_name_words = -112,
  func_parse_identifier = -113,
  lambda_68 = -114,
  lambda_69 = -115,
  lambda_70 = -116,
  lambda_71 = -117,
  lambda_72 = -118,
  lambda_73 = -119,
  lambda_74 = -120,
  str_identifier = -121,
  func_parse_more_identifier_characters = -122,
  lambda_75 = -123,
  lambda_76 = -124,
  lambda_77 = -125,
  lambda_78 = -126,
  lambda_79 = -127,
  lambda_80 = -128,
  lambda_81 = -129,
  lambda_82 = -130,
  lambda_83 = -131,
  lambda_84 = -132,
  chr_58 = -133,
  lambda_85 = -134,
  lambda_86 = -135,
  num_3 = -136,
  lambda_87 = -137,
  lambda_88 = -138,
  func_parse_more_identifier_words = -139,
  lambda_89 = -140,
  lambda_90 = -141,
  lambda_91 = -142,
  lambda_92 = -143,
  lambda_93 = -144,
  lambda_94 = -145,
  lambda_95 = -146,
  lambda_96 = -147,
  lambda_97 = -148,
  str_more_identifier = -149,
  func_parse_versioned_identifier = -150,
  lambda_98 = -151,
  lambda_99 = -152,
  lambda_100 = -153,
  lambda_101 = -154,
  lambda_102 = -155,
  lambda_103 = -156,
  lambda_104 = -157,
  str_versioned_identi = -158,
  func_parse_more_versioned_identifier_characters = -159,
  lambda_105 = -160,
  lambda_106 = -161,
  lambda_107 = -162,
  lambda_108 = -163,
  lambda_109 = -164,
  lambda_110 = -165,
  lambda_111 = -166,
  lambda_112 = -167,
  lambda_113 = -168,
  lambda_114 = -169,
  lambda_115 = -170,
  lambda_116 = -171,
  lambda_117 = -172,
  chr_45 = -173,
  lambda_118 = -174,
  lambda_119 = -175,
  lambda_120 = -176,
  func_parse_more_versioned_identifier_words = -177,
  lambda_121 = -178,
  lambda_122 = -179,
  lambda_123 = -180,
  lambda_124 = -181,
  lambda_125 = -182,
  lambda_126 = -183,
  lambda_127 = -184,
  lambda_128 = -185,
  lambda_129 = -186,
  str_more_versioned_i = -187,
  func_parse_namespace_description = -188,
  lambda_130 = -189,
  chr_49 = -190,
  lambda_131 = -191,
  lambda_132 = -192,
  lambda_133 = -193,
  chr_117 = -194,
  lambda_134 = -195,
  chr_110 = -196,
  lambda_135 = -197,
  chr_115 = -198,
  lambda_136 = -199,
  num_4 = -200,
  chr_116 = -201,
  lambda_137 = -202,
  num_5 = -203,
  lambda_138 = -204,
  num_6 = -205,
  chr_98 = -206,
  lambda_139 = -207,
  num_7 = -208,
  chr_108 = -209,
  lambda_140 = -210,
  num_8 = -211,
  chr_101 = -212,
  lambda_141 = -213,
  num_9 = -214,
  lambda_142 = -215,
  num_10 = -216,
  lambda_143 = -217,
  num_11 = -218,
  lambda_144 = -219,
  lambda_145 = -220,
  str_namespace_descri = -221,
  func_parse_more_major_digits_or_dot = -222,
  lambda_146 = -223,
  lambda_147 = -224,
  lambda_148 = -225,
  lambda_149 = -226,
  chr_46 = -227,
  lambda_150 = -228,
  lambda_151 = -229,
  lambda_152 = -230,
  lambda_153 = -231,
  lambda_154 = -232,
  str_more_major_digit = -233,
  func_parse_more_minor_digits = -234,
  lambda_155 = -235,
  lambda_156 = -236,
  lambda_157 = -237,
  lambda_158 = -238,
  lambda_159 = -239,
  lambda_160 = -240,
  lambda_161 = -241,
  lambda_162 = -242,
  str_more_minor_digit = -243,
  func_parse_optional_version = -244,
  lambda_163 = -245,
  lambda_164 = -246,
  lambda_165 = -247,
  lambda_166 = -248,
  func_parse_parameters_or_statement = -249,
  lambda_167 = -250,
  chr_40 = -251,
  lambda_168 = -252,
  lambda_169 = -253,
  chr_41 = -254,
  lambda_170 = -255,
  lambda_171 = -256,
  lambda_172 = -257,
  lambda_173 = -258,
  lambda_174 = -259,
  str_parameters_or_st = -260,
  func_parse_statement = -261,
  lambda_text_is_defined = -262,
  lambda_175 = -263,
  lambda_176 = -264,
  lambda_177 = -265,
  lambda_178 = -266,
  lambda_179 = -267,
  func_parse_head = -268,
  lambda_180 = -269,
  chr_36 = -270,
  lambda_181 = -271,
  lambda_182 = -272,
  lambda_183 = -273,
  lambda_184 = -274,
  lambda_185 = -275,
  chr_33 = -276,
  lambda_186 = -277,
  lambda_187 = -278,
  lambda_188 = -279,
  chr_62 = -280,
  lambda_189 = -281,
  lambda_190 = -282,
  lambda_191 = -283,
  str_head = -284,
  func_parse_statement_arguments = -285,
  lambda_192 = -286,
  chr_32 = -287,
  lambda_193 = -288,
  lambda_194 = -289,
  lambda_195 = -290,
  lambda_196 = -291,
  lambda_197 = -292,
  lambda_198 = -293,
  lambda_199 = -294,
  lambda_200 = -295,
  lambda_201 = -296,
  lambda_202 = -297,
  lambda_203 = -298,
  lambda_204 = -299,
  chr_47 = -300,
  lambda_205 = -301,
  lambda_206 = -302,
  lambda_207 = -303,
  lambda_208 = -304,
  lambda_209 = -305,
  lambda_210 = -306,
  lambda_211 = -307,
  lambda_212 = -308,
  str_statement_argume = -309,
  lambda_213 = -310,
  lambda_214 = -311,
  lambda_215 = -312,
  lambda_216 = -313,
  lambda_217 = -314,
  lambda_218 = -315,
  func_parse_inline_statement = -316,
  lambda_2_text_is_defined = -317,
  lambda_219 = -318,
  lambda_220 = -319,
  lambda_221 = -320,
  lambda_222 = -321,
  lambda_223 = -322,
  func_parse_inline_head = -323,
  lambda_224 = -324,
  lambda_225 = -325,
  lambda_226 = -326,
  lambda_227 = -327,
  lambda_228 = -328,
  str_inline_head = -329,
  func_parse_some_inline_arguments = -330,
  lambda_229 = -331,
  lambda_230 = -332,
  lambda_231 = -333,
  lambda_232 = -334,
  lambda_233 = -335,
  lambda_234 = -336,
  func_parse_attribute_value_pair_without_prefix = -337,
  func_parse_type_function_without_prefix = -338,
  func_parse_method_value_pair_without_prefix = -339,
  func_parse_pair = -340,
  lambda_3_text_is_defined = -341,
  lambda_235 = -342,
  lambda_236 = -343,
  lambda_237 = -344,
  func_parse_meta_instruction = -345,
  lambda_238 = -346,
  lambda_239 = -347,
  lambda_240 = -348,
  chr_109 = -349,
  lambda_241 = -350,
  lambda_242 = -351,
  lambda_243 = -352,
  chr_112 = -353,
  lambda_244 = -354,
  lambda_245 = -355,
  chr_99 = -356,
  lambda_246 = -357,
  lambda_247 = -358,
  lambda_248 = -359,
  lambda_249 = -360,
  chr_114 = -361,
  lambda_250 = -362,
  lambda_251 = -363,
  chr_113 = -364,
  lambda_252 = -365,
  lambda_253 = -366,
  chr_105 = -367,
  lambda_254 = -368,
  lambda_255 = -369,
  lambda_256 = -370,
  lambda_257 = -371,
  lambda_258 = -372,
  lambda_259 = -373,
  lambda_260 = -374,
  lambda_261 = -375,
  lambda_262 = -376,
  chr_103 = -377,
  lambda_263 = -378,
  lambda_264 = -379,
  lambda_265 = -380,
  lambda_266 = -381,
  lambda_267 = -382,
  lambda_268 = -383,
  lambda_269 = -384,
  lambda_270 = -385,
  lambda_271 = -386,
  lambda_272 = -387,
  lambda_273 = -388,
  lambda_274 = -389,
  lambda_275 = -390,
  chr_111 = -391,
  lambda_276 = -392,
  lambda_277 = -393,
  chr_118 = -394,
  lambda_278 = -395,
  lambda_279 = -396,
  lambda_280 = -397,
  lambda_281 = -398,
  lambda_282 = -399,
  str_meta_instruction = -400,
  func_parse_namespace_instruction_without_prefix = -401,
  lambda_4_text_is_defined = -402,
  lambda_5_text_is_defined = -403,
  lambda_283 = -404,
  lambda_284 = -405,
  lambda_285 = -406,
  lambda_286 = -407,
  string_3 = -408,
  lambda_287 = -409,
  lambda_288 = -410,
  func_parse_require_instruction_without_prefix = -411,
  lambda_6_text_is_defined = -412,
  lambda_289 = -413,
  lambda_290 = -414,
  lambda_291 = -415,
  lambda_292 = -416,
  lambda_293 = -417,
  func_parse_using_instruction_without_prefix = -418,
  lambda_7_text_is_defined = -419,
  lambda_8_text_is_defined = -420,
  lambda_294 = -421,
  lambda_295 = -422,
  lambda_296 = -423,
  lambda_297 = -424,
  lambda_298 = -425,
  lambda_299 = -426,
  func_parse_alias_instruction_without_prefix = -427,
  lambda_9_text_is_defined = -428,
  lambda_10_text_is_defined = -429,
  lambda_11_text_is_defined = -430,
  lambda_300 = -431,
  lambda_301 = -432,
  lambda_302 = -433,
  lambda_303 = -434,
  lambda_304 = -435,
  lambda_305 = -436,
  lambda_306 = -437,
  func_parse_resolve_instruction_without_prefix = -438,
  lambda_12_text_is_defined = -439,
  lambda_307 = -440,
  lambda_13_text_is_defined = -441,
  lambda_308 = -442,
  lambda_309 = -443,
  lambda_310 = -444,
  lambda_311 = -445,
  lambda_312 = -446,
  lambda_313 = -447,
  string_4 = -448,
  lambda_314 = -449,
  func_parse_allow_instruction = -450,
  lambda_315 = -451,
  lambda_316 = -452,
  lambda_317 = -453,
  lambda_318 = -454,
  chr_119 = -455,
  lambda_319 = -456,
  lambda_320 = -457,
  lambda_14_text_is_defined = -458,
  lambda_321 = -459,
  lambda_322 = -460,
  lambda_323 = -461,
  lambda_324 = -462,
  lambda_325 = -463,
  lambda_326 = -464,
  str_space_character = -465,
  lambda_327 = -466,
  str_w = -467,
  lambda_328 = -468,
  str_o = -469,
  lambda_329 = -470,
  str_l = -471,
  lambda_330 = -472,
  lambda_331 = -473,
  str_a = -474,
  func_parse_filename = -475,
  lambda_332 = -476,
  lambda_333 = -477,
  lambda_334 = -478,
  lambda_335 = -479,
  lambda_336 = -480,
  lambda_337 = -481,
  lambda_338 = -482,
  lambda_339 = -483,
  lambda_340 = -484,
  lambda_341 = -485,
  lambda_342 = -486,
  lambda_343 = -487,
  lambda_344 = -488,
  lambda_345 = -489,
  str_filename = -490,
  func_parse_filename_characters = -491,
  lambda_346 = -492,
  lambda_347 = -493,
  lambda_348 = -494,
  lambda_349 = -495,
  lambda_350 = -496,
  lambda_351 = -497,
  lambda_352 = -498,
  str_filename_charact = -499,
  func_parse_more_filename_characters = -500,
  lambda_353 = -501,
  lambda_354 = -502,
  lambda_355 = -503,
  lambda_356 = -504,
  lambda_357 = -505,
  lambda_358 = -506,
  lambda_359 = -507,
  lambda_360 = -508,
  lambda_361 = -509,
  lambda_362 = -510,
  lambda_363 = -511,
  lambda_364 = -512,
  lambda_365 = -513,
  func_parse_more_filename_words = -514,
  lambda_366 = -515,
  lambda_367 = -516,
  lambda_368 = -517,
  lambda_369 = -518,
  lambda_370 = -519,
  lambda_371 = -520,
  lambda_372 = -521,
  lambda_373 = -522,
  lambda_374 = -523,
  str_more_filename_wo = -524,
  func_parse_alias = -525,
  lambda_375 = -526,
  lambda_376 = -527,
  func_parse_equal_sign = -528,
  lambda_377 = -529,
  lambda_378 = -530,
  chr_61 = -531,
  lambda_379 = -532,
  lambda_380 = -533,
  lambda_381 = -534,
  lambda_382 = -535,
  lambda_383 = -536,
  lambda_384 = -537,
  str_equal_sign = -538,
  func_parse_version = -539,
  lambda_385 = -540,
  lambda_386 = -541,
  lambda_387 = -542,
  lambda_388 = -543,
  lambda_389 = -544,
  str_version = -545,
  func_parse_version_no_without_prefix = -546,
  lambda_15_text_is_defined = -547,
  lambda_390 = -548,
  lambda_391 = -549,
  lambda_392 = -550,
  lambda_393 = -551,
  string_5 = -552,
  lambda_394 = -553,
  func_parse_minor = -554,
  lambda_395 = -555,
  lambda_396 = -556,
  lambda_397 = -557,
  lambda_398 = -558,
  lambda_399 = -559,
  str_minor = -560,
  func_parse_zero_or_more_digits = -561,
  lambda_400 = -562,
  lambda_401 = -563,
  lambda_402 = -564,
  lambda_403 = -565,
  lambda_404 = -566,
  func_parse_unstable = -567,
  lambda_405 = -568,
  lambda_406 = -569,
  lambda_407 = -570,
  lambda_408 = -571,
  lambda_409 = -572,
  lambda_410 = -573,
  lambda_411 = -574,
  lambda_412 = -575,
  lambda_413 = -576,
  str_e = -577,
  lambda_414 = -578,
  lambda_415 = -579,
  str_b = -580,
  lambda_416 = -581,
  lambda_417 = -582,
  str_t = -583,
  lambda_418 = -584,
  str_s = -585,
  lambda_419 = -586,
  str_n = -587,
  lambda_420 = -588,
  str_u = -589,
  func_parse_pragma = -590,
  lambda_421 = -591,
  chr_104 = -592,
  lambda_422 = -593,
  lambda_423 = -594,
  chr_100 = -595,
  lambda_424 = -596,
  lambda_425 = -597,
  lambda_426 = -598,
  lambda_427 = -599,
  lambda_428 = -600,
  lambda_429 = -601,
  str_pragma = -602,
  func_parse_allow_hidden_without_prefix = -603,
  func_parse_allow_unused = -604,
  lambda_430 = -605,
  lambda_431 = -606,
  lambda_432 = -607,
  lambda_433 = -608,
  lambda_434 = -609,
  lambda_435 = -610,
  lambda_436 = -611,
  str_d = -612,
  lambda_437 = -613,
  lambda_438 = -614,
  lambda_439 = -615,
  lambda_440 = -616,
  lambda_441 = -617,
  func_parse_functor_without_prefix = -618,
  lambda_16_text_is_defined = -619,
  lambda_442 = -620,
  lambda_443 = -621,
  lambda_444 = -622,
  lambda_445 = -623,
  lambda_446 = -624,
  func_parse_extensions = -625,
  lambda_447 = -626,
  lambda_448 = -627,
  lambda_449 = -628,
  lambda_450 = -629,
  lambda_451 = -630,
  lambda_452 = -631,
  lambda_453 = -632,
  lambda_454 = -633,
  lambda_455 = -634,
  lambda_456 = -635,
  lambda_457 = -636,
  lambda_458 = -637,
  lambda_459 = -638,
  lambda_460 = -639,
  lambda_461 = -640,
  lambda_462 = -641,
  lambda_463 = -642,
  lambda_464 = -643,
  lambda_465 = -644,
  lambda_466 = -645,
  func_parse_function_call_extension_without_prefix = -646,
  lambda_17_text_is_defined = -647,
  lambda_467 = -648,
  lambda_468 = -649,
  lambda_469 = -650,
  lambda_470 = -651,
  lambda_471 = -652,
  func_parse_attribute_access_extension_without_prefix = -653,
  lambda_18_text_is_defined = -654,
  lambda_472 = -655,
  lambda_473 = -656,
  lambda_474 = -657,
  lambda_475 = -658,
  lambda_476 = -659,
  func_parse_inline_functor = -660,
  lambda_19_text_is_defined = -661,
  lambda_477 = -662,
  lambda_478 = -663,
  lambda_479 = -664,
  func_parse_inline_extensions = -665,
  lambda_480 = -666,
  lambda_481 = -667,
  lambda_482 = -668,
  lambda_483 = -669,
  lambda_484 = -670,
  lambda_485 = -671,
  lambda_486 = -672,
  lambda_487 = -673,
  lambda_488 = -674,
  lambda_489 = -675,
  lambda_490 = -676,
  lambda_491 = -677,
  lambda_492 = -678,
  lambda_493 = -679,
  func_parse_inline_calls = -680,
  lambda_494 = -681,
  lambda_495 = -682,
  lambda_496 = -683,
  lambda_497 = -684,
  lambda_498 = -685,
  lambda_499 = -686,
  lambda_500 = -687,
  lambda_501 = -688,
  lambda_502 = -689,
  lambda_503 = -690,
  lambda_504 = -691,
  lambda_505 = -692,
  func_parse_inline_function_call_extension_without_prefix = -693,
  lambda_20_text_is_defined = -694,
  lambda_506 = -695,
  lambda_507 = -696,
  lambda_508 = -697,
  lambda_509 = -698,
  lambda_510 = -699,
  func_parse_inline_attribute_access_extension_without_prefix = -700,
  lambda_21_text_is_defined = -701,
  lambda_511 = -702,
  lambda_512 = -703,
  lambda_513 = -704,
  lambda_514 = -705,
  lambda_515 = -706,
  func_parse_io_call_without_prefix = -707,
  func_parse_function_call_without_prefix = -708,
  lambda_516 = -709,
  lambda_517 = -710,
  func_parse_optional_inline_arguments = -711,
  lambda_518 = -712,
  lambda_519 = -713,
  lambda_520 = -714,
  lambda_521 = -715,
  str_optional_inline = -716,
  lambda_522 = -717,
  lambda_523 = -718,
  lambda_524 = -719,
  lambda_525 = -720,
  lambda_526 = -721,
  lambda_527 = -722,
  func_parse_function_call_arguments = -723,
  lambda_22_text_is_defined = -724,
  lambda_528 = -725,
  lambda_529 = -726,
  string_6 = -727,
  lambda_530 = -728,
  func_parse_inline_return_without_prefix = -729,
  lambda_531 = -730,
  lambda_532 = -731,
  func_parse_attribute_access_without_prefix = -732,
  lambda_533 = -733,
  lambda_534 = -734,
  func_parse_some_argument = -735,
  lambda_535 = -736,
  lambda_536 = -737,
  lambda_537 = -738,
  lambda_538 = -739,
  lambda_539 = -740,
  lambda_540 = -741,
  str_some_argument = -742,
  func_parse_some_arguments = -743,
  lambda_541 = -744,
  lambda_542 = -745,
  lambda_543 = -746,
  lambda_544 = -747,
  lambda_545 = -748,
  lambda_546 = -749,
  lambda_547 = -750,
  lambda_548 = -751,
  chr_10 = -752,
  lambda_549 = -753,
  lambda_550 = -754,
  lambda_551 = -755,
  str_some_arguments = -756,
  lambda_552 = -757,
  lambda_553 = -758,
  lambda_554 = -759,
  lambda_555 = -760,
  lambda_556 = -761,
  lambda_557 = -762,
  func_parse_some_statement_arguments = -763,
  lambda_558 = -764,
  lambda_559 = -765,
  lambda_560 = -766,
  lambda_561 = -767,
  lambda_562 = -768,
  lambda_563 = -769,
  lambda_564 = -770,
  lambda_565 = -771,
  lambda_566 = -772,
  lambda_567 = -773,
  lambda_568 = -774,
  lambda_569 = -775,
  lambda_570 = -776,
  lambda_571 = -777,
  str_some_statement_a = -778,
  lambda_572 = -779,
  lambda_573 = -780,
  lambda_574 = -781,
  lambda_575 = -782,
  lambda_576 = -783,
  lambda_577 = -784,
  func_parse_spaced_arguments_without_prefix = -785,
  lambda_578 = -786,
  lambda_579 = -787,
  func_parse_spaced_statement_arguments_without_prefix = -788,
  lambda_580 = -789,
  lambda_581 = -790,
  func_parse_more_arguments = -791,
  lambda_582 = -792,
  lambda_583 = -793,
  lambda_584 = -794,
  lambda_585 = -795,
  lambda_586 = -796,
  lambda_587 = -797,
  string_7 = -798,
  lambda_588 = -799,
  lambda_589 = -800,
  lambda_590 = -801,
  lambda_591 = -802,
  str_more_arguments = -803,
  func_parse_more_statement_arguments = -804,
  lambda_592 = -805,
  lambda_593 = -806,
  lambda_594 = -807,
  lambda_595 = -808,
  lambda_596 = -809,
  lambda_597 = -810,
  lambda_598 = -811,
  lambda_599 = -812,
  lambda_600 = -813,
  lambda_601 = -814,
  str_more_statement_a = -815,
  func_parse_arguments = -816,
  lambda_23_text_is_defined = -817,
  lambda_602 = -818,
  lambda_603 = -819,
  lambda_604 = -820,
  lambda_605 = -821,
  lambda_606 = -822,
  func_parse_even_more_statement_arguments = -823,
  lambda_24_text_is_defined = -824,
  lambda_607 = -825,
  lambda_608 = -826,
  lambda_609 = -827,
  lambda_610 = -828,
  lambda_611 = -829,
  func_parse_multiline_arguments = -830,
  lambda_612 = -831,
  lambda_613 = -832,
  lambda_614 = -833,
  lambda_615 = -834,
  lambda_616 = -835,
  str_valid_input_char = -836,
  func_parse_multiline_arguments_without_prefix = -837,
  lambda_617 = -838,
  lambda_618 = -839,
  func_parse_tagged_multiline_arguments_without_prefix = -840,
  lambda_619 = -841,
  lambda_620 = -842,
  func_parse_remark_and_multiline_function_call_without_prefix = -843,
  lambda_25_text_is_defined = -844,
  lambda_621 = -845,
  lambda_622 = -846,
  lambda_623 = -847,
  lambda_624 = -848,
  lambda_625 = -849,
  func_parse_argument = -850,
  lambda_626 = -851,
  lambda_627 = -852,
  lambda_628 = -853,
  lambda_629 = -854,
  lambda_630 = -855,
  lambda_631 = -856,
  lambda_632 = -857,
  lambda_633 = -858,
  chr_38 = -859,
  lambda_634 = -860,
  lambda_635 = -861,
  lambda_636 = -862,
  lambda_637 = -863,
  lambda_638 = -864,
  lambda_639 = -865,
  lambda_640 = -866,
  lambda_641 = -867,
  lambda_642 = -868,
  lambda_643 = -869,
  lambda_644 = -870,
  lambda_645 = -871,
  lambda_646 = -872,
  str_argument = -873,
  func_parse_line_start_arguments = -874,
  lambda_647 = -875,
  lambda_648 = -876,
  lambda_649 = -877,
  lambda_650 = -878,
  lambda_651 = -879,
  lambda_652 = -880,
  lambda_653 = -881,
  lambda_654 = -882,
  lambda_655 = -883,
  lambda_656 = -884,
  lambda_657 = -885,
  lambda_658 = -886,
  lambda_659 = -887,
  lambda_660 = -888,
  lambda_661 = -889,
  lambda_662 = -890,
  chr_43 = -891,
  lambda_663 = -892,
  lambda_664 = -893,
  lambda_665 = -894,
  lambda_666 = -895,
  lambda_667 = -896,
  lambda_668 = -897,
  lambda_669 = -898,
  lambda_670 = -899,
  chr_42 = -900,
  lambda_671 = -901,
  lambda_672 = -902,
  string_8 = -903,
  lambda_673 = -904,
  lambda_674 = -905,
  lambda_675 = -906,
  lambda_676 = -907,
  lambda_677 = -908,
  lambda_678 = -909,
  lambda_679 = -910,
  lambda_680 = -911,
  lambda_681 = -912,
  lambda_682 = -913,
  lambda_683 = -914,
  lambda_684 = -915,
  lambda_685 = -916,
  lambda_686 = -917,
  lambda_687 = -918,
  lambda_688 = -919,
  lambda_689 = -920,
  lambda_690 = -921,
  lambda_691 = -922,
  lambda_692 = -923,
  lambda_693 = -924,
  lambda_694 = -925,
  lambda_695 = -926,
  lambda_696 = -927,
  lambda_697 = -928,
  lambda_698 = -929,
  lambda_699 = -930,
  lambda_700 = -931,
  lambda_701 = -932,
  lambda_702 = -933,
  lambda_703 = -934,
  chr_124 = -935,
  lambda_704 = -936,
  lambda_705 = -937,
  lambda_706 = -938,
  lambda_707 = -939,
  lambda_708 = -940,
  lambda_709 = -941,
  lambda_710 = -942,
  lambda_711 = -943,
  lambda_712 = -944,
  lambda_713 = -945,
  lambda_714 = -946,
  chr_94 = -947,
  lambda_715 = -948,
  lambda_716 = -949,
  lambda_717 = -950,
  lambda_718 = -951,
  lambda_719 = -952,
  lambda_720 = -953,
  lambda_721 = -954,
  str_line_start_argum = -955,
  func_parse_dummy_definition_without_prefix = -956,
  lambda_722 = -957,
  lambda_723 = -958,
  func_parse_variable_without_prefix = -959,
  lambda_724 = -960,
  lambda_725 = -961,
  func_parse_definition_without_prefix = -962,
  lambda_726 = -963,
  lambda_727 = -964,
  func_parse_redefinition_without_prefix = -965,
  lambda_26_text_is_defined = -966,
  lambda_728 = -967,
  lambda_729 = -968,
  lambda_730 = -969,
  func_parse_update_without_prefix = -970,
  lambda_27_text_is_defined = -971,
  lambda_731 = -972,
  lambda_732 = -973,
  lambda_733 = -974,
  func_parse_expression = -975,
  lambda_28_text_is_defined = -976,
  lambda_734 = -977,
  lambda_735 = -978,
  lambda_736 = -979,
  lambda_737 = -980,
  lambda_738 = -981,
  lambda_739 = -982,
  func_parse_key_value_operator = -983,
  lambda_740 = -984,
  lambda_741 = -985,
  lambda_742 = -986,
  lambda_743 = -987,
  lambda_744 = -988,
  lambda_745 = -989,
  lambda_746 = -990,
  lambda_747 = -991,
  func_parse_key_value = -992,
  func_parse_sequence_expression = -993,
  lambda_29_text_is_defined = -994,
  lambda_748 = -995,
  lambda_749 = -996,
  lambda_750 = -997,
  lambda_751 = -998,
  lambda_752 = -999,
  lambda_753 = -1000,
  func_parse_comma_operator = -1001,
  lambda_754 = -1002,
  chr_44 = -1003,
  lambda_755 = -1004,
  lambda_756 = -1005,
  lambda_757 = -1006,
  lambda_758 = -1007,
  lambda_759 = -1008,
  lambda_760 = -1009,
  lambda_761 = -1010,
  lambda_762 = -1011,
  lambda_763 = -1012,
  lambda_764 = -1013,
  func_parse_comma = -1014,
  func_parse_comma_expression = -1015,
  lambda_30_text_is_defined = -1016,
  lambda_765 = -1017,
  lambda_766 = -1018,
  lambda_767 = -1019,
  lambda_768 = -1020,
  lambda_769 = -1021,
  lambda_770 = -1022,
  func_parse_conditional_expression = -1023,
  lambda_31_text_is_defined = -1024,
  lambda_771 = -1025,
  lambda_772 = -1026,
  lambda_773 = -1027,
  lambda_774 = -1028,
  lambda_775 = -1029,
  func_parse_logical_operator = -1030,
  lambda_776 = -1031,
  lambda_777 = -1032,
  lambda_778 = -1033,
  lambda_779 = -1034,
  lambda_780 = -1035,
  lambda_781 = -1036,
  lambda_782 = -1037,
  lambda_783 = -1038,
  lambda_784 = -1039,
  lambda_785 = -1040,
  lambda_786 = -1041,
  lambda_787 = -1042,
  func_parse_and = -1043,
  func_parse_and_expression = -1044,
  lambda_32_text_is_defined = -1045,
  lambda_788 = -1046,
  lambda_789 = -1047,
  lambda_790 = -1048,
  lambda_791 = -1049,
  lambda_792 = -1050,
  lambda_793 = -1051,
  func_parse_and_operator = -1052,
  lambda_794 = -1053,
  lambda_795 = -1054,
  lambda_796 = -1055,
  lambda_797 = -1056,
  lambda_798 = -1057,
  lambda_799 = -1058,
  lambda_800 = -1059,
  func_parse_or = -1060,
  func_parse_or_expression = -1061,
  lambda_33_text_is_defined = -1062,
  lambda_801 = -1063,
  lambda_802 = -1064,
  lambda_803 = -1065,
  lambda_804 = -1066,
  lambda_805 = -1067,
  lambda_806 = -1068,
  func_parse_or_operator = -1069,
  lambda_807 = -1070,
  lambda_808 = -1071,
  lambda_809 = -1072,
  lambda_810 = -1073,
  lambda_811 = -1074,
  lambda_812 = -1075,
  lambda_813 = -1076,
  func_parse_named_operator_expression = -1077,
  lambda_34_text_is_defined = -1078,
  lambda_814 = -1079,
  lambda_815 = -1080,
  lambda_816 = -1081,
  lambda_817 = -1082,
  lambda_818 = -1083,
  func_parse_optional_named_operator = -1084,
  lambda_819 = -1085,
  lambda_820 = -1086,
  lambda_821 = -1087,
  lambda_822 = -1088,
  lambda_823 = -1089,
  func_parse_named_operator_without_prefix = -1090,
  lambda_35_text_is_defined = -1091,
  lambda_824 = -1092,
  lambda_825 = -1093,
  lambda_826 = -1094,
  lambda_827 = -1095,
  lambda_828 = -1096,
  lambda_829 = -1097,
  lambda_830 = -1098,
  func_parse_range_expression = -1099,
  lambda_36_text_is_defined = -1100,
  lambda_831 = -1101,
  lambda_832 = -1102,
  lambda_833 = -1103,
  lambda_834 = -1104,
  lambda_835 = -1105,
  func_parse_range_operator = -1106,
  lambda_836 = -1107,
  lambda_837 = -1108,
  lambda_838 = -1109,
  lambda_839 = -1110,
  lambda_840 = -1111,
  lambda_841 = -1112,
  lambda_842 = -1113,
  lambda_843 = -1114,
  lambda_844 = -1115,
  lambda_845 = -1116,
  func_parse_range = -1117,
  func_parse_relational_expression = -1118,
  lambda_37_text_is_defined = -1119,
  lambda_846 = -1120,
  lambda_847 = -1121,
  lambda_848 = -1122,
  lambda_849 = -1123,
  lambda_850 = -1124,
  lambda_851 = -1125,
  func_parse_comparison_operator = -1126,
  lambda_852 = -1127,
  lambda_853 = -1128,
  lambda_854 = -1129,
  lambda_855 = -1130,
  lambda_856 = -1131,
  lambda_857 = -1132,
  lambda_858 = -1133,
  lambda_859 = -1134,
  lambda_860 = -1135,
  lambda_861 = -1136,
  lambda_862 = -1137,
  lambda_863 = -1138,
  lambda_864 = -1139,
  lambda_865 = -1140,
  lambda_866 = -1141,
  lambda_867 = -1142,
  lambda_868 = -1143,
  lambda_869 = -1144,
  lambda_870 = -1145,
  lambda_871 = -1146,
  lambda_872 = -1147,
  lambda_873 = -1148,
  lambda_874 = -1149,
  lambda_875 = -1150,
  lambda_876 = -1151,
  lambda_877 = -1152,
  lambda_878 = -1153,
  lambda_879 = -1154,
  lambda_880 = -1155,
  lambda_881 = -1156,
  lambda_882 = -1157,
  lambda_883 = -1158,
  lambda_884 = -1159,
  lambda_885 = -1160,
  lambda_886 = -1161,
  lambda_887 = -1162,
  lambda_888 = -1163,
  lambda_889 = -1164,
  lambda_890 = -1165,
  lambda_891 = -1166,
  lambda_892 = -1167,
  lambda_893 = -1168,
  lambda_894 = -1169,
  lambda_895 = -1170,
  lambda_896 = -1171,
  lambda_897 = -1172,
  func_parse_equal = -1173,
  func_parse_not_equal = -1174,
  func_parse_less_equal = -1175,
  func_parse_less_than = -1176,
  func_parse_greater_equal = -1177,
  func_parse_greater_than = -1178,
  func_parse_tagged_bit_expression = -1179,
  lambda_38_text_is_defined = -1180,
  lambda_898 = -1181,
  lambda_899 = -1182,
  lambda_900 = -1183,
  lambda_901 = -1184,
  lambda_902 = -1185,
  lambda_903 = -1186,
  func_parse_bit_expression = -1187,
  lambda_39_text_is_defined = -1188,
  lambda_904 = -1189,
  lambda_905 = -1190,
  lambda_906 = -1191,
  lambda_907 = -1192,
  lambda_908 = -1193,
  func_parse_bit_operator = -1194,
  lambda_909 = -1195,
  lambda_910 = -1196,
  lambda_911 = -1197,
  lambda_912 = -1198,
  lambda_913 = -1199,
  lambda_914 = -1200,
  lambda_915 = -1201,
  lambda_916 = -1202,
  lambda_917 = -1203,
  lambda_918 = -1204,
  lambda_919 = -1205,
  lambda_920 = -1206,
  lambda_921 = -1207,
  lambda_922 = -1208,
  lambda_923 = -1209,
  lambda_924 = -1210,
  lambda_925 = -1211,
  lambda_926 = -1212,
  lambda_927 = -1213,
  lambda_928 = -1214,
  lambda_929 = -1215,
  lambda_930 = -1216,
  lambda_931 = -1217,
  lambda_932 = -1218,
  lambda_933 = -1219,
  lambda_934 = -1220,
  lambda_935 = -1221,
  lambda_936 = -1222,
  lambda_937 = -1223,
  lambda_938 = -1224,
  lambda_939 = -1225,
  lambda_940 = -1226,
  lambda_941 = -1227,
  lambda_942 = -1228,
  lambda_943 = -1229,
  lambda_944 = -1230,
  func_parse_shift_left = -1231,
  func_parse_shift_right = -1232,
  func_parse_bit_and = -1233,
  func_parse_bit_and2 = -1234,
  lambda_40_text_is_defined = -1235,
  lambda_945 = -1236,
  lambda_946 = -1237,
  lambda_947 = -1238,
  lambda_948 = -1239,
  lambda_949 = -1240,
  lambda_950 = -1241,
  func_parse_bit_and_operator = -1242,
  lambda_951 = -1243,
  lambda_952 = -1244,
  lambda_953 = -1245,
  lambda_954 = -1246,
  lambda_955 = -1247,
  lambda_956 = -1248,
  lambda_957 = -1249,
  lambda_958 = -1250,
  func_parse_bit_or = -1251,
  func_parse_bit_or2 = -1252,
  lambda_41_text_is_defined = -1253,
  lambda_959 = -1254,
  lambda_960 = -1255,
  lambda_961 = -1256,
  lambda_962 = -1257,
  lambda_963 = -1258,
  lambda_964 = -1259,
  func_parse_bit_or_operator = -1260,
  lambda_965 = -1261,
  lambda_966 = -1262,
  lambda_967 = -1263,
  lambda_968 = -1264,
  lambda_969 = -1265,
  lambda_970 = -1266,
  lambda_971 = -1267,
  lambda_972 = -1268,
  func_parse_bit_xor = -1269,
  func_parse_bit_xor2 = -1270,
  lambda_42_text_is_defined = -1271,
  lambda_973 = -1272,
  lambda_974 = -1273,
  lambda_975 = -1274,
  lambda_976 = -1275,
  lambda_977 = -1276,
  lambda_978 = -1277,
  func_parse_bit_xor_operator = -1278,
  lambda_979 = -1279,
  lambda_980 = -1280,
  lambda_981 = -1281,
  lambda_982 = -1282,
  lambda_983 = -1283,
  lambda_984 = -1284,
  lambda_985 = -1285,
  lambda_986 = -1286,
  func_parse_tagged_additive_expression = -1287,
  lambda_43_text_is_defined = -1288,
  lambda_987 = -1289,
  lambda_988 = -1290,
  lambda_989 = -1291,
  lambda_990 = -1292,
  lambda_991 = -1293,
  lambda_992 = -1294,
  func_parse_additive_expression = -1295,
  lambda_44_text_is_defined = -1296,
  lambda_993 = -1297,
  lambda_994 = -1298,
  lambda_995 = -1299,
  lambda_996 = -1300,
  lambda_997 = -1301,
  func_parse_additive_operator = -1302,
  lambda_998 = -1303,
  lambda_999 = -1304,
  lambda_1000 = -1305,
  lambda_1001 = -1306,
  lambda_1002 = -1307,
  lambda_1003 = -1308,
  lambda_1004 = -1309,
  lambda_1005 = -1310,
  lambda_1006 = -1311,
  lambda_1007 = -1312,
  lambda_1008 = -1313,
  lambda_1009 = -1314,
  lambda_1010 = -1315,
  lambda_1011 = -1316,
  func_parse_plus = -1317,
  func_parse_plus2 = -1318,
  lambda_45_text_is_defined = -1319,
  lambda_1012 = -1320,
  lambda_1013 = -1321,
  lambda_1014 = -1322,
  lambda_1015 = -1323,
  lambda_1016 = -1324,
  lambda_1017 = -1325,
  func_parse_minus = -1326,
  func_parse_minus2 = -1327,
  lambda_46_text_is_defined = -1328,
  lambda_1018 = -1329,
  lambda_1019 = -1330,
  lambda_1020 = -1331,
  lambda_1021 = -1332,
  lambda_1022 = -1333,
  lambda_1023 = -1334,
  func_parse_multiplicative_expression = -1335,
  lambda_47_text_is_defined = -1336,
  lambda_1024 = -1337,
  lambda_1025 = -1338,
  lambda_1026 = -1339,
  lambda_1027 = -1340,
  lambda_1028 = -1341,
  func_parse_multiplicative_operator = -1342,
  lambda_1029 = -1343,
  lambda_1030 = -1344,
  lambda_1031 = -1345,
  lambda_1032 = -1346,
  lambda_1033 = -1347,
  lambda_1034 = -1348,
  lambda_1035 = -1349,
  lambda_1036 = -1350,
  lambda_1037 = -1351,
  lambda_1038 = -1352,
  lambda_1039 = -1353,
  lambda_1040 = -1354,
  lambda_1041 = -1355,
  lambda_1042 = -1356,
  func_parse_times = -1357,
  func_parse_times2 = -1358,
  lambda_48_text_is_defined = -1359,
  lambda_1043 = -1360,
  lambda_1044 = -1361,
  lambda_1045 = -1362,
  lambda_1046 = -1363,
  lambda_1047 = -1364,
  lambda_1048 = -1365,
  func_parse_over = -1366,
  func_parse_over2 = -1367,
  lambda_49_text_is_defined = -1368,
  lambda_1049 = -1369,
  lambda_1050 = -1370,
  lambda_1051 = -1371,
  lambda_1052 = -1372,
  lambda_1053 = -1373,
  lambda_1054 = -1374,
  func_parse_an_expression = -1375,
  lambda_1055 = -1376,
  lambda_1056 = -1377,
  lambda_1057 = -1378,
  chr_39 = -1379,
  lambda_1058 = -1380,
  chr_64 = -1381,
  lambda_1059 = -1382,
  lambda_1060 = -1383,
  lambda_1061 = -1384,
  lambda_1062 = -1385,
  chr_34 = -1386,
  lambda_1063 = -1387,
  lambda_1064 = -1388,
  lambda_1065 = -1389,
  lambda_1066 = -1390,
  lambda_1067 = -1391,
  lambda_1068 = -1392,
  lambda_1069 = -1393,
  lambda_1070 = -1394,
  lambda_1071 = -1395,
  chr_96 = -1396,
  lambda_1072 = -1397,
  lambda_1073 = -1398,
  lambda_1074 = -1399,
  str_an_expression = -1400,
  func_parse_parenthesed_expression_without_prefix = -1401,
  lambda_50_text_is_defined = -1402,
  lambda_1075 = -1403,
  lambda_1076 = -1404,
  lambda_1077 = -1405,
  lambda_1078 = -1406,
  lambda_1079 = -1407,
  func_parse_inline_expression = -1408,
  lambda_1080 = -1409,
  lambda_1081 = -1410,
  lambda_1082 = -1411,
  lambda_1083 = -1412,
  lambda_1084 = -1413,
  lambda_1085 = -1414,
  lambda_1086 = -1415,
  str_inline_expressio = -1416,
  func_parse_backquoted_without_prefix = -1417,
  lambda_1087 = -1418,
  lambda_1088 = -1419,
  func_parse_negation_without_prefix = -1420,
  lambda_1089 = -1421,
  lambda_1090 = -1422,
  func_parse_multiline_operator = -1423,
  lambda_51_text_is_defined = -1424,
  lambda_1091 = -1425,
  lambda_1092 = -1426,
  lambda_1093 = -1427,
  lambda_1094 = -1428,
  lambda_1095 = -1429,
  lambda_1096 = -1430,
  func_parse_multiline_plus_without_prefix = -1431,
  func_parse_multiline_minus_without_prefix = -1432,
  lambda_52_text_is_defined = -1433,
  lambda_1097 = -1434,
  lambda_1098 = -1435,
  lambda_1099 = -1436,
  lambda_1100 = -1437,
  lambda_1101 = -1438,
  lambda_1102 = -1439,
  func_parse_multiline_minus_with_remark_without_prefix = -1440,
  lambda_53_text_is_defined = -1441,
  lambda_1103 = -1442,
  lambda_1104 = -1443,
  lambda_1105 = -1444,
  lambda_1106 = -1445,
  lambda_1107 = -1446,
  lambda_1108 = -1447,
  func_parse_multiline_times_without_prefix = -1448,
  func_parse_multiline_over_without_prefix = -1449,
  lambda_1109 = -1450,
  lambda_1110 = -1451,
  func_parse_multiline_over_with_remark_without_prefix = -1452,
  lambda_54_text_is_defined = -1453,
  lambda_1111 = -1454,
  lambda_1112 = -1455,
  lambda_1113 = -1456,
  lambda_1114 = -1457,
  lambda_1115 = -1458,
  lambda_1116 = -1459,
  func_parse_multiline_shift_left_without_prefix = -1460,
  func_parse_multiline_shift_right_without_prefix = -1461,
  func_parse_multiline_equal_without_prefix = -1462,
  func_parse_multiline_not_equal_without_prefix = -1463,
  func_parse_multiline_less_equal_without_prefix = -1464,
  func_parse_multiline_less_than_without_prefix = -1465,
  func_parse_multiline_greater_equal_without_prefix = -1466,
  func_parse_multiline_greater_than_without_prefix = -1467,
  func_parse_multiline_and_without_prefix = -1468,
  func_parse_multiline_or_without_prefix = -1469,
  func_parse_multiline_bit_and_without_prefix = -1470,
  lambda_55_text_is_defined = -1471,
  lambda_1117 = -1472,
  lambda_1118 = -1473,
  lambda_1119 = -1474,
  lambda_1120 = -1475,
  lambda_1121 = -1476,
  lambda_1122 = -1477,
  func_parse_multiline_bit_and_with_remark_without_prefix = -1478,
  lambda_56_text_is_defined = -1479,
  lambda_1123 = -1480,
  lambda_1124 = -1481,
  lambda_1125 = -1482,
  lambda_1126 = -1483,
  lambda_1127 = -1484,
  lambda_1128 = -1485,
  func_parse_multiline_bit_or_without_prefix = -1486,
  func_parse_multiline_bit_xor_without_prefix = -1487,
  func_parse_multiline_assign_without_prefix = -1488,
  func_parse_inline_arguments = -1489,
  lambda_1129 = -1490,
  lambda_1130 = -1491,
  lambda_1131 = -1492,
  lambda_1132 = -1493,
  lambda_1133 = -1494,
  lambda_1134 = -1495,
  lambda_1135 = -1496,
  lambda_1136 = -1497,
  lambda_1137 = -1498,
  lambda_1138 = -1499,
  lambda_1139 = -1500,
  str_inline_arguments = -1501,
  lambda_1140 = -1502,
  lambda_1141 = -1503,
  lambda_1142 = -1504,
  lambda_1143 = -1505,
  lambda_1144 = -1506,
  lambda_1145 = -1507,
  func_parse_inline_attribute_value_pair_without_prefix = -1508,
  lambda_57_text_is_defined = -1509,
  lambda_1146 = -1510,
  lambda_1147 = -1511,
  lambda_1148 = -1512,
  lambda_1149 = -1513,
  lambda_1150 = -1514,
  func_parse_inline_method_value_pair_without_prefix = -1515,
  lambda_58_text_is_defined = -1516,
  lambda_1151 = -1517,
  lambda_1152 = -1518,
  lambda_1153 = -1519,
  lambda_1154 = -1520,
  lambda_1155 = -1521,
  func_parse_expression_and_inline_arguments = -1522,
  lambda_59_text_is_defined = -1523,
  lambda_1156 = -1524,
  lambda_1157 = -1525,
  lambda_1158 = -1526,
  lambda_1159 = -1527,
  lambda_1160 = -1528,
  func_parse_spaced_inline_arguments = -1529,
  lambda_1161 = -1530,
  lambda_1162 = -1531,
  lambda_1163 = -1532,
  lambda_1164 = -1533,
  func_parse_spaced_inline_arguments_without_prefix = -1534,
  lambda_1165 = -1535,
  lambda_1166 = -1536,
  func_parse_numeric_literal = -1537,
  lambda_1167 = -1538,
  lambda_1168 = -1539,
  func_parse_digits = -1540,
  lambda_1169 = -1541,
  lambda_1170 = -1542,
  lambda_1171 = -1543,
  lambda_1172 = -1544,
  lambda_1173 = -1545,
  lambda_1174 = -1546,
  lambda_1175 = -1547,
  str_digits = -1548,
  func_parse_maybe_non_decimal_numeric_literal = -1549,
  lambda_1176 = -1550,
  lambda_1177 = -1551,
  lambda_1178 = -1552,
  lambda_1179 = -1553,
  lambda_1180 = -1554,
  lambda_1181 = -1555,
  lambda_1182 = -1556,
  lambda_1183 = -1557,
  lambda_1184 = -1558,
  lambda_1185 = -1559,
  lambda_1186 = -1560,
  lambda_1187 = -1561,
  lambda_1188 = -1562,
  lambda_1189 = -1563,
  lambda_1190 = -1564,
  lambda_1191 = -1565,
  chr_120 = -1566,
  lambda_1192 = -1567,
  lambda_1193 = -1568,
  lambda_1194 = -1569,
  func_parse_more_decimal_digits = -1570,
  lambda_1195 = -1571,
  lambda_1196 = -1572,
  lambda_1197 = -1573,
  lambda_1198 = -1574,
  lambda_1199 = -1575,
  lambda_1200 = -1576,
  lambda_1201 = -1577,
  lambda_1202 = -1578,
  lambda_1203 = -1579,
  lambda_1204 = -1580,
  lambda_1205 = -1581,
  lambda_1206 = -1582,
  lambda_1207 = -1583,
  lambda_1208 = -1584,
  chr_69 = -1585,
  lambda_1209 = -1586,
  lambda_1210 = -1587,
  lambda_1211 = -1588,
  func_parse_more_fraction_digits = -1589,
  lambda_1212 = -1590,
  lambda_1213 = -1591,
  lambda_1214 = -1592,
  lambda_1215 = -1593,
  lambda_1216 = -1594,
  lambda_1217 = -1595,
  lambda_1218 = -1596,
  lambda_1219 = -1597,
  lambda_1220 = -1598,
  func_parse_exponent = -1599,
  lambda_1221 = -1600,
  lambda_1222 = -1601,
  lambda_1223 = -1602,
  lambda_1224 = -1603,
  lambda_1225 = -1604,
  lambda_1226 = -1605,
  lambda_1227 = -1606,
  lambda_1228 = -1607,
  lambda_1229 = -1608,
  str_exponent = -1609,
  func_parse_exponent_digits = -1610,
  lambda_1230 = -1611,
  lambda_1231 = -1612,
  lambda_1232 = -1613,
  lambda_1233 = -1614,
  lambda_1234 = -1615,
  str_exponent_digits = -1616,
  func_parse_more_exponent_digits = -1617,
  lambda_1235 = -1618,
  lambda_1236 = -1619,
  lambda_1237 = -1620,
  lambda_1238 = -1621,
  lambda_1239 = -1622,
  func_parse_binary_digits = -1623,
  lambda_1240 = -1624,
  lambda_1241 = -1625,
  lambda_1242 = -1626,
  lambda_1243 = -1627,
  lambda_1244 = -1628,
  str_binary_digits = -1629,
  func_parse_more_binary_digits = -1630,
  lambda_1245 = -1631,
  lambda_1246 = -1632,
  lambda_1247 = -1633,
  lambda_1248 = -1634,
  lambda_1249 = -1635,
  lambda_1250 = -1636,
  lambda_1251 = -1637,
  lambda_1252 = -1638,
  lambda_1253 = -1639,
  func_parse_octal_digits = -1640,
  lambda_1254 = -1641,
  lambda_1255 = -1642,
  chr_55 = -1643,
  lambda_1256 = -1644,
  lambda_1257 = -1645,
  lambda_1258 = -1646,
  str_octal_digits = -1647,
  func_parse_more_octal_digits = -1648,
  lambda_1259 = -1649,
  lambda_1260 = -1650,
  lambda_1261 = -1651,
  lambda_1262 = -1652,
  lambda_1263 = -1653,
  lambda_1264 = -1654,
  lambda_1265 = -1655,
  lambda_1266 = -1656,
  lambda_1267 = -1657,
  func_parse_hex_digits = -1658,
  lambda_1268 = -1659,
  lambda_1269 = -1660,
  lambda_1270 = -1661,
  lambda_1271 = -1662,
  chr_102 = -1663,
  lambda_1272 = -1664,
  lambda_1273 = -1665,
  chr_70 = -1666,
  lambda_1274 = -1667,
  lambda_1275 = -1668,
  lambda_1276 = -1669,
  str_hex_digits = -1670,
  func_parse_more_hex_digits = -1671,
  lambda_1277 = -1672,
  lambda_1278 = -1673,
  lambda_1279 = -1674,
  lambda_1280 = -1675,
  lambda_1281 = -1676,
  lambda_1282 = -1677,
  lambda_1283 = -1678,
  lambda_1284 = -1679,
  lambda_1285 = -1680,
  lambda_1286 = -1681,
  lambda_1287 = -1682,
  lambda_1288 = -1683,
  lambda_1289 = -1684,
  lambda_1290 = -1685,
  lambda_1291 = -1686,
  lambda_1292 = -1687,
  lambda_1293 = -1688,
  func_parse_special_character_literal = -1689,
  lambda_1294 = -1690,
  lambda_1295 = -1691,
  lambda_1296 = -1692,
  lambda_1297 = -1693,
  lambda_1298 = -1694,
  lambda_1299 = -1695,
  lambda_1300 = -1696,
  lambda_1301 = -1697,
  lambda_1302 = -1698,
  lambda_1303 = -1699,
  str_special_characte = -1700,
  func_parse_at_character_literal_without_prefix = -1701,
  func_parse_named_character_literal_without_prefix = -1702,
  lambda_60_text_is_defined = -1703,
  chr_59 = -1704,
  lambda_1304 = -1705,
  lambda_1305 = -1706,
  lambda_1306 = -1707,
  str_single_quote = -1708,
  lambda_1307 = -1709,
  string_9 = -1710,
  lambda_1308 = -1711,
  func_parse_numeric_character_literal = -1712,
  lambda_61_text_is_defined = -1713,
  lambda_1309 = -1714,
  lambda_1310 = -1715,
  lambda_1311 = -1716,
  lambda_1312 = -1717,
  lambda_1313 = -1718,
  func_parse_character_literal_without_prefix = -1719,
  lambda_62_text_is_defined = -1720,
  lambda_1314 = -1721,
  lambda_1315 = -1722,
  lambda_1316 = -1723,
  func_parse_character = -1724,
  lambda_1317 = -1725,
  lambda_1318 = -1726,
  lambda_1319 = -1727,
  lambda_1320 = -1728,
  str_character = -1729,
  func_parse_more_character_name_characters = -1730,
  lambda_1321 = -1731,
  lambda_1322 = -1732,
  lambda_1323 = -1733,
  lambda_1324 = -1734,
  lambda_1325 = -1735,
  lambda_1326 = -1736,
  lambda_1327 = -1737,
  lambda_1328 = -1738,
  lambda_1329 = -1739,
  func_parse_string_literal_without_prefix = -1740,
  lambda_1330 = -1741,
  lambda_1331 = -1742,
  func_parse_string_components = -1743,
  lambda_1332 = -1744,
  lambda_1333 = -1745,
  lambda_1334 = -1746,
  lambda_1335 = -1747,
  str_string_component = -1748,
  lambda_1336 = -1749,
  lambda_1337 = -1750,
  lambda_1338 = -1751,
  lambda_1339 = -1752,
  lambda_1340 = -1753,
  lambda_1341 = -1754,
  func_parse_some_string_components = -1755,
  lambda_63_text_is_defined = -1756,
  lambda_1342 = -1757,
  lambda_1343 = -1758,
  lambda_1344 = -1759,
  lambda_1345 = -1760,
  lambda_1346 = -1761,
  func_parse_string_component = -1762,
  lambda_1347 = -1763,
  lambda_1348 = -1764,
  lambda_1349 = -1765,
  lambda_1350 = -1766,
  lambda_1351 = -1767,
  lambda_1352 = -1768,
  lambda_1353 = -1769,
  lambda_1354 = -1770,
  lambda_1355 = -1771,
  lambda_1356 = -1772,
  lambda_1357 = -1773,
  lambda_1358 = -1774,
  lambda_1359 = -1775,
  str_string_component_2 = -1776,
  func_parse_character_sequence = -1777,
  lambda_1360 = -1778,
  lambda_1361 = -1779,
  func_parse_string_characters = -1780,
  lambda_1362 = -1781,
  lambda_1363 = -1782,
  lambda_1364 = -1783,
  lambda_1365 = -1784,
  lambda_1366 = -1785,
  lambda_1367 = -1786,
  str_string_character = -1787,
  func_parse_more_string_characters = -1788,
  lambda_1368 = -1789,
  lambda_1369 = -1790,
  lambda_1370 = -1791,
  lambda_1371 = -1792,
  lambda_1372 = -1793,
  lambda_1373 = -1794,
  func_parse_multiline_string_literal_without_prefix = -1795,
  lambda_1374 = -1796,
  lambda_1375 = -1797,
  func_parse_multiline_string_components = -1798,
  lambda_1376 = -1799,
  lambda_1377 = -1800,
  lambda_1378 = -1801,
  lambda_1379 = -1802,
  lambda_1380 = -1803,
  lambda_1381 = -1804,
  lambda_1382 = -1805,
  str_multiline_string = -1806,
  lambda_1383 = -1807,
  lambda_1384 = -1808,
  lambda_1385 = -1809,
  lambda_1386 = -1810,
  lambda_1387 = -1811,
  lambda_1388 = -1812,
  func_parse_newline_without_prefix = -1813,
  func_parse_some_string_line_components = -1814,
  lambda_64_text_is_defined = -1815,
  lambda_1389 = -1816,
  lambda_1390 = -1817,
  lambda_1391 = -1818,
  lambda_1392 = -1819,
  lambda_1393 = -1820,
  func_parse_string_line_component = -1821,
  lambda_1394 = -1822,
  lambda_1395 = -1823,
  lambda_1396 = -1824,
  lambda_1397 = -1825,
  lambda_1398 = -1826,
  lambda_1399 = -1827,
  lambda_1400 = -1828,
  lambda_1401 = -1829,
  lambda_1402 = -1830,
  lambda_1403 = -1831,
  lambda_1404 = -1832,
  lambda_1405 = -1833,
  lambda_1406 = -1834,
  str_string_line_comp = -1835,
  func_parse_string_line_end_without_prefix = -1836,
  func_parse_at_character_without_prefix = -1837,
  func_parse_tagged_empty_character_without_prefix = -1838,
  lambda_1407 = -1839,
  lambda_1408 = -1840,
  func_parse_empty_character_without_prefix = -1841,
  func_parse_escape_expression_without_prefix = -1842,
  lambda_65_text_is_defined = -1843,
  lambda_1409 = -1844,
  lambda_1410 = -1845,
  lambda_1411 = -1846,
  func_parse_special_character = -1847,
  lambda_1412 = -1848,
  lambda_1413 = -1849,
  lambda_1414 = -1850,
  lambda_1415 = -1851,
  lambda_1416 = -1852,
  lambda_1417 = -1853,
  lambda_1418 = -1854,
  str_special_characte_2 = -1855,
  func_parse_named_character_without_prefix = -1856,
  lambda_66_text_is_defined = -1857,
  lambda_1419 = -1858,
  lambda_1420 = -1859,
  lambda_1421 = -1860,
  func_parse_numeric_character = -1861,
  lambda_67_text_is_defined = -1862,
  lambda_1422 = -1863,
  lambda_1423 = -1864,
  lambda_1424 = -1865,
  func_parse_string_line_character_sequence = -1866,
  lambda_1425 = -1867,
  lambda_1426 = -1868,
  func_parse_string_line_characters = -1869,
  lambda_1427 = -1870,
  lambda_1428 = -1871,
  lambda_1429 = -1872,
  lambda_1430 = -1873,
  lambda_1431 = -1874,
  str_string_line_char = -1875,
  func_parse_more_string_line_characters = -1876,
  lambda_1432 = -1877,
  lambda_1433 = -1878,
  lambda_1434 = -1879,
  lambda_1435 = -1880,
  lambda_1436 = -1881,
  func_parse_unique_without_prefix = -1882,
  lambda_1437 = -1883,
  lambda_1438 = -1884,
  func_parse_attribute_without_prefix = -1885,
  lambda_1439 = -1886,
  lambda_1440 = -1887,
  func_parse_attribute_with_setter_without_prefix = -1888,
  lambda_1441 = -1889,
  lambda_1442 = -1890,
  func_parse_body = -1891,
  lambda_68_text_is_defined = -1892,
  lambda_69_text_is_defined = -1893,
  lambda_1443 = -1894,
  lambda_1444 = -1895,
  lambda_1445 = -1896,
  lambda_1446 = -1897,
  func_parse_optional_line_end_remark = -1898,
  lambda_1447 = -1899,
  lambda_1448 = -1900,
  lambda_1449 = -1901,
  lambda_1450 = -1902,
  lambda_1451 = -1903,
  func_parse_body_statements = -1904,
  lambda_1452 = -1905,
  lambda_1453 = -1906,
  lambda_1454 = -1907,
  lambda_1455 = -1908,
  str_body_statements = -1909,
  lambda_1456 = -1910,
  lambda_1457 = -1911,
  lambda_1458 = -1912,
  lambda_1459 = -1913,
  lambda_1460 = -1914,
  lambda_1461 = -1915,
  func_parse_line_end_statement_without_prefix = -1916,
  func_parse_inline_body_without_prefix = -1917,
  lambda_70_text_is_defined = -1918,
  lambda_1462 = -1919,
  lambda_1463 = -1920,
  lambda_1464 = -1921,
  lambda_1465 = -1922,
  lambda_1466 = -1923,
  func_parse_statements = -1924,
  lambda_1467 = -1925,
  lambda_1468 = -1926,
  lambda_1469 = -1927,
  lambda_1470 = -1928,
  lambda_1471 = -1929,
  func_parse_inline_parameters = -1930,
  lambda_1472 = -1931,
  lambda_1473 = -1932,
  lambda_1474 = -1933,
  lambda_1475 = -1934,
  lambda_1476 = -1935,
  lambda_1477 = -1936,
  lambda_1478 = -1937,
  lambda_1479 = -1938,
  lambda_1480 = -1939,
  lambda_1481 = -1940,
  lambda_1482 = -1941,
  func_parse_some_inline_parameters = -1942,
  lambda_1483 = -1943,
  lambda_1484 = -1944,
  lambda_1485 = -1945,
  lambda_1486 = -1946,
  str_some_inline_para = -1947,
  func_parse_one_or_more_inline_parameters = -1948,
  lambda_71_text_is_defined = -1949,
  lambda_1487 = -1950,
  lambda_1488 = -1951,
  lambda_1489 = -1952,
  lambda_1490 = -1953,
  lambda_1491 = -1954,
  func_parse_maybe_more_inline_parameters = -1955,
  lambda_1492 = -1956,
  lambda_1493 = -1957,
  lambda_1494 = -1958,
  lambda_1495 = -1959,
  lambda_1496 = -1960,
  lambda_1497 = -1961,
  str_maybe_more_inlin = -1962,
  func_parse_parameter_name = -1963,
  lambda_1498 = -1964,
  lambda_1499 = -1965,
  lambda_1500 = -1966,
  lambda_1501 = -1967,
  lambda_1502 = -1968,
  lambda_1503 = -1969,
  lambda_1504 = -1970,
  lambda_1505 = -1971,
  lambda_1506 = -1972,
  str_parameter_name = -1973,
  func_parse_open_parameters_without_prefix = -1974,
  lambda_72_text_is_defined = -1975,
  lambda_1507 = -1976,
  lambda_1508 = -1977,
  lambda_1509 = -1978,
  lambda_1510 = -1979,
  lambda_1511 = -1980,
  lambda_1512 = -1981,
  func_parse_inline_parameter = -1982,
  lambda_73_text_is_defined = -1983,
  lambda_1513 = -1984,
  lambda_1514 = -1985,
  lambda_1515 = -1986,
  func_parse_parameter = -1987,
  lambda_74_text_is_defined = -1988,
  lambda_75_text_is_defined = -1989,
  lambda_1516 = -1990,
  lambda_1517 = -1991,
  lambda_1518 = -1992,
  lambda_1519 = -1993,
  func_parse_parameter_option = -1994,
  lambda_1520 = -1995,
  lambda_1521 = -1996,
  lambda_1522 = -1997,
  lambda_1523 = -1998,
  lambda_1524 = -1999,
  lambda_1525 = -2000,
  lambda_1526 = -2001,
  lambda_1527 = -2002,
  lambda_1528 = -2003,
  lambda_1529 = -2004,
  func_parse_myself_without_prefix = -2005,
  func_parse_rest_without_prefix = -2006,
  func_parse_initial_value_without_prefix = -2007,
  lambda_1530 = -2008,
  lambda_1531 = -2009,
  func_parse_simple_operand = -2010,
  lambda_1532 = -2011,
  lambda_1533 = -2012,
  lambda_1534 = -2013,
  lambda_1535 = -2014,
  lambda_1536 = -2015,
  lambda_1537 = -2016,
  lambda_1538 = -2017,
  lambda_1539 = -2018,
  lambda_1540 = -2019,
  lambda_1541 = -2020,
  lambda_1542 = -2021,
  lambda_1543 = -2022,
  lambda_1544 = -2023,
  lambda_1545 = -2024,
  str_simple_operand = -2025,
  func_parse_close_parameters_without_prefix = -2026,
  lambda_1546 = -2027,
  lambda_1547 = -2028,
  func_parse_return_expression_without_prefix = -2029,
  lambda_1548 = -2030,
  lambda_1549 = -2031,
  func_parse_return_without_prefix = -2032,
  func_parse_remark = -2033,
  lambda_1550 = -2034,
  lambda_1551 = -2035,
  lambda_1552 = -2036,
  lambda_1553 = -2037,
  string_10 = -2038,
  func_parse_remark_without_prefix = -2039,
  lambda_1554 = -2040,
  lambda_1555 = -2041,
  func_parse_remark_text = -2042,
  lambda_1556 = -2043,
  lambda_1557 = -2044,
  lambda_1558 = -2045,
  lambda_1559 = -2046,
  func_parse_trailing_remarks = -2047,
  lambda_1560 = -2048,
  lambda_1561 = -2049,
  lambda_1562 = -2050,
  lambda_1563 = -2051,
  lambda_1564 = -2052,
  str_trailing_remarks = -2053,
  func_parse_line_end_and_line_remarks = -2054,
  lambda_76_text_is_defined = -2055,
  lambda_1565 = -2056,
  lambda_1566 = -2057,
  lambda_1567 = -2058,
  lambda_1568 = -2059,
  lambda_1569 = -2060,
  func_parse_trailing_remark = -2061,
  lambda_1570 = -2062,
  lambda_1571 = -2063,
  lambda_1572 = -2064,
  lambda_1573 = -2065,
  lambda_1574 = -2066,
  lambda_1575 = -2067,
  lambda_1576 = -2068,
  str_trailing_remark = -2069,
  func_parse_line_remarks = -2070,
  lambda_1577 = -2071,
  lambda_1578 = -2072,
  lambda_1579 = -2073,
  lambda_1580 = -2074,
  func_parse_line_remarks_without_prefix = -2075,
  lambda_1581 = -2076,
  lambda_1582 = -2077,
  func_parse_spaced_remark_without_prefix = -2078,
  lambda_1583 = -2079,
  lambda_1584 = -2080,
  func_parse_multiline_remark = -2081,
  lambda_1585 = -2082,
  lambda_77_text_is_defined = -2083,
  lambda_1586 = -2084,
  lambda_1587 = -2085,
  lambda_1588 = -2086,
  lambda_1589 = -2087,
  func_parse_multiline_remark_without_prefix = -2088,
  lambda_78_text_is_defined = -2089,
  lambda_1590 = -2090,
  lambda_1591 = -2091,
  lambda_1592 = -2092,
  func_parse_some_remark_lines = -2093,
  lambda_1593 = -2094,
  lambda_1594 = -2095,
  lambda_1595 = -2096,
  lambda_1596 = -2097,
  lambda_1597 = -2098,
  func_parse_remark_lines = -2099,
  lambda_1598 = -2100,
  lambda_1599 = -2101,
  func_parse_dummy_remark = -2102,
  lambda_1600 = -2103,
  lambda_1601 = -2104
};

enum {
  var__START = FIRST_VAR-1,
  var_funky__current_filename, // derived
  var_undefined, // extern
  var_std__assign, // extern
  var_current_group, // derived
  var_text, // derived
  var_str, // derived
  var_subgroups, // derived
  var_expected, // derived
  var_at, // derived
  var_funky__SYNTAX_ERROR, // initialized
  var_funky__line_indent_of, // initialized
  var_27_25_line, // dynamic
  var_is_defined, // extern
  var_first, // extern
  var_if, // extern
  var_funky__line_text_of, // initialized
  var_33_23_line, // dynamic
  var_second, // extern
  var_funky__split_source_into_lines, // initialized
  var_40_27_lines, // dynamic
  var_split_into_indented_lines, // extern
  var_41_12_line_no, // dynamic
  var_41_20_line, // dynamic
  var_44_1_prev_line_no, // dynamic
  var_dec, // extern
  var_std__less, // extern
  var_std__or, // extern
  var_std__minus, // extern
  var_funky__line_no_of, // extern polymorphic
  var_funky__skip_of, // extern polymorphic
  var_next, // extern
  var_loop, // extern
  var_map, // extern
  var_funky__parse, // initialized
  var_63_31_left, // dynamic
  var_63_36_right, // dynamic
  var_is_undefined, // extern
  var_min, // extern
  var_61_1_min_indent, // dynamic
  var_map_reduce, // extern
  var_72_13_group, // dynamic
  var_spaces, // extern
  var_append, // extern
  var_tuple, // extern
  var_81_11_node, // dynamic
  var_empty_list, // extern
  var_is_a_list, // extern
  var_list, // extern
  var_91_16_item, // dynamic
  var_length_of, // extern
  var_std__plus, // extern
  var_std__equal, // extern
  var_std__and, // extern
  var_string, // extern
  var_error, // extern
  var_106_16_parse_function, // dynamic
  var_109_1_indent, // dynamic
  var_split_into_groups, // extern
  var_114_42_head, // dynamic
  var_subgroups_of, // extern
  var_125_1_node, // dynamic
  var_132_15_parse_function, // dynamic
  var_139_1_node, // dynamic
  var_funky__parse_top_level_statement_group, // initialized
  var_funky__parse_parameters_or_statement_group, // initialized
  var_funky__parse_line_start_arguments_group, // initialized
  var_funky__parse_multiline_string_components_group, // initialized
  var_funky__parse_parameter_group, // initialized
  var_funky__parse_multiline_remark_group, // initialized
  var_range, // extern
  var_true, // extern
  var_cond, // extern
  var_std__not, // extern
  var_414_1_position, // dynamic
  var_415_18_head, // dynamic
  var_418_33_statement_arguments, // dynamic
  var_funky_types__statement, // extern
  var_funky__source_group_of, // extern polymorphic
  var_funky__source_position_of, // extern polymorphic
  var_funky__head_of, // extern polymorphic
  var_funky__arguments_of, // extern polymorphic
  var_469_12_expr, // dynamic
  var_525_1_position, // dynamic
  var_526_25_inline_head, // dynamic
  var_529_35_some_inline_arguments, // dynamic
  var_funky_types__inline_statement, // extern
  var_funky_types__attribute_value_pair, // extern
  var_funky_types__type_function, // extern
  var_funky_types__method_value_pair, // extern
  var_592_0_derived_node, // dynamic
  var_594_1_position, // dynamic
  var_596_24_identifier, // dynamic
  var_599_27_some_argument, // dynamic
  var_funky_types__pair, // extern
  var_default_value, // extern
  var_funky__identifier_of, // extern polymorphic
  var_funky__argument_of, // extern polymorphic
  var_685_1_position, // dynamic
  var_687_18_name, // dynamic
  var_690_30_optional_version, // dynamic
  var_696_30_trailing_remarks, // dynamic
  var_funky_types__namespace_instruction, // extern
  var_funky__name_of, // extern polymorphic
  var_funky__version_of, // extern polymorphic
  var_funky__remarks_of, // extern polymorphic
  var_714_1_position, // dynamic
  var_716_22_filename, // dynamic
  var_722_30_trailing_remarks, // dynamic
  var_funky_types__require_instruction, // extern
  var_funky__filename_of, // extern polymorphic
  var_738_1_position, // dynamic
  var_740_18_name, // dynamic
  var_743_30_optional_version, // dynamic
  var_749_30_trailing_remarks, // dynamic
  var_funky_types__using_instruction, // extern
  var_767_1_position, // dynamic
  var_768_19_alias, // dynamic
  var_771_24_equal_sign, // dynamic
  var_775_18_name, // dynamic
  var_781_30_trailing_remarks, // dynamic
  var_funky_types__alias_instruction, // extern
  var_funky__alias_of, // extern polymorphic
  var_funky__sign_of, // extern polymorphic
  var_801_1_position, // dynamic
  var_803_18_name, // dynamic
  var_809_21_version, // dynamic
  var_815_30_trailing_remarks, // dynamic
  var_funky_types__resolve_instruction, // extern
  var_835_1_position, // dynamic
  var_849_20_pragma, // dynamic
  var_855_30_trailing_remarks, // dynamic
  var_funky_types__allow_instruction, // extern
  var_funky__pragma_of, // extern polymorphic
  var_951_18_name, // dynamic
  var_991_1_position, // dynamic
  var_992_33_major, // dynamic
  var_999_19_minor, // dynamic
  var_funky_types__version_no, // extern
  var_funky__major_of, // extern polymorphic
  var_funky__minor_of, // extern polymorphic
  var_1036_1_position, // dynamic
  var_funky_types__unstable, // extern
  var_funky_types__allow_hidden, // extern
  var_1104_1_position, // dynamic
  var_funky_types__allow_unused, // extern
  var_1136_1_position, // dynamic
  var_1137_40_identifier, // dynamic
  var_1145_13_extensions, // dynamic
  var_funky_types__functor, // extern
  var_funky__extensions_of, // extern polymorphic
  var_1159_12_expr, // dynamic
  var_1198_42_function_call, // dynamic
  var_1201_24_extensions, // dynamic
  var_1218_45_attribute_access, // dynamic
  var_1221_24_extensions, // dynamic
  var_1237_1_position, // dynamic
  var_1239_24_identifier, // dynamic
  var_1242_31_inline_extensions, // dynamic
  var_1256_12_expr, // dynamic
  var_1283_12_expr, // dynamic
  var_1306_42_function_call, // dynamic
  var_1309_31_inline_extensions, // dynamic
  var_1326_45_attribute_access, // dynamic
  var_1329_31_inline_extensions, // dynamic
  var_funky_types__io_call, // extern
  var_1353_1_position, // dynamic
  var_1354_39_optional_inline_arguments, // dynamic
  var_funky_types__function_call, // extern
  var_1366_12_expr, // dynamic
  var_1385_30_inline_arguments, // dynamic
  var_1398_1_position, // dynamic
  var_1399_37_spaced_inline_arguments, // dynamic
  var_funky_types__inline_return, // extern
  var_1411_1_position, // dynamic
  var_1413_24_identifier, // dynamic
  var_funky_types__attribute_access, // extern
  var_1444_12_expr, // dynamic
  var_1474_12_expr, // dynamic
  var_1509_28_more_arguments, // dynamic
  var_1519_38_more_statement_arguments, // dynamic
  var_1581_22_argument, // dynamic
  var_1584_28_some_arguments, // dynamic
  var_1601_22_argument, // dynamic
  var_1604_38_some_statement_arguments, // dynamic
  var_1623_1_line_start_arguments, // dynamic
  var_is_an_error, // extern
  var_1624_1_error, // dynamic
  var_find_first, // extern
  var_1635_1_line_start_arguments, // dynamic
  var_1636_1_error, // dynamic
  var_1644_1_position, // dynamic
  var_1645_1_line_start_arguments, // dynamic
  var_1646_1_error, // dynamic
  var_1657_1_position, // dynamic
  var_1658_42_spaced_remark, // dynamic
  var_1663_1_line_start_arguments, // dynamic
  var_1664_1_error, // dynamic
  var_funky_types__remark_and_multiline_function_call, // extern
  var_funky__remark_of, // extern polymorphic
  var_1911_1_position, // dynamic
  var_1913_18_name, // dynamic
  var_funky_types__dummy_definition, // extern
  var_1925_1_position, // dynamic
  var_1926_40_identifier, // dynamic
  var_funky_types__variable, // extern
  var_1938_1_position, // dynamic
  var_1940_34_versioned_identifier, // dynamic
  var_funky_types__definition, // extern
  var_1952_1_position, // dynamic
  var_1954_24_identifier, // dynamic
  var_1957_31_inline_extensions, // dynamic
  var_funky_types__redefinition, // extern
  var_1971_1_position, // dynamic
  var_1973_24_identifier, // dynamic
  var_1976_31_inline_extensions, // dynamic
  var_funky_types__update, // extern
  var_1991_0_derived_node, // dynamic
  var_1993_1_position, // dynamic
  var_1994_33_sequence_expression, // dynamic
  var_1997_32_key_value_operator, // dynamic
  var_funky_types__expression, // extern
  var_funky__expression_of, // extern polymorphic
  var_funky__operator_of, // extern polymorphic
  var_funky_types__key_value, // extern
  var_2039_0_derived_node, // dynamic
  var_2041_1_position, // dynamic
  var_2042_36_conditional_expression, // dynamic
  var_2045_28_comma_operator, // dynamic
  var_funky_types__sequence_expression, // extern
  var_funky_types__comma, // extern
  var_2094_0_derived_node, // dynamic
  var_2096_1_position, // dynamic
  var_2097_33_sequence_expression, // dynamic
  var_2100_28_comma_operator, // dynamic
  var_2118_1_position, // dynamic
  var_2119_39_named_operator_expression, // dynamic
  var_2122_30_logical_operator, // dynamic
  var_funky_types__and, // extern
  var_2169_0_derived_node, // dynamic
  var_2171_1_position, // dynamic
  var_2172_39_named_operator_expression, // dynamic
  var_2175_26_and_operator, // dynamic
  var_funky_types__or, // extern
  var_2213_0_derived_node, // dynamic
  var_2215_1_position, // dynamic
  var_2216_39_named_operator_expression, // dynamic
  var_2219_25_or_operator, // dynamic
  var_2252_1_position, // dynamic
  var_2253_30_range_expression, // dynamic
  var_2256_37_optional_named_operator, // dynamic
  var_2296_1_position, // dynamic
  var_2298_24_identifier, // dynamic
  var_2306_30_range_expression, // dynamic
  var_funky_types__named_operator, // extern
  var_2324_1_position, // dynamic
  var_2325_35_relational_expression, // dynamic
  var_2328_28_range_operator, // dynamic
  var_funky_types__range, // extern
  var_2373_0_derived_node, // dynamic
  var_2375_1_position, // dynamic
  var_2376_28_bit_expression, // dynamic
  var_2379_33_comparison_operator, // dynamic
  var_funky_types__equal, // extern
  var_funky_types__not_equal, // extern
  var_funky_types__less_equal, // extern
  var_funky_types__less_than, // extern
  var_funky_types__greater_equal, // extern
  var_funky_types__greater_than, // extern
  var_2518_0_derived_node, // dynamic
  var_2520_1_position, // dynamic
  var_2521_33_additive_expression, // dynamic
  var_2524_26_bit_operator, // dynamic
  var_funky_types__tagged_bit_expression, // extern
  var_2542_1_position, // dynamic
  var_2543_33_additive_expression, // dynamic
  var_2546_26_bit_operator, // dynamic
  var_funky_types__shift_left, // extern
  var_funky_types__shift_right, // extern
  var_funky_types__bit_and, // extern
  var_2654_0_derived_node, // dynamic
  var_2656_1_position, // dynamic
  var_2657_33_additive_expression, // dynamic
  var_2660_30_bit_and_operator, // dynamic
  var_funky_types__bit_and2, // extern
  var_funky_types__bit_or, // extern
  var_2702_0_derived_node, // dynamic
  var_2704_1_position, // dynamic
  var_2705_33_additive_expression, // dynamic
  var_2708_29_bit_or_operator, // dynamic
  var_funky_types__bit_or2, // extern
  var_funky_types__bit_xor, // extern
  var_2750_0_derived_node, // dynamic
  var_2752_1_position, // dynamic
  var_2753_33_additive_expression, // dynamic
  var_2756_30_bit_xor_operator, // dynamic
  var_funky_types__bit_xor2, // extern
  var_2794_0_derived_node, // dynamic
  var_2796_1_position, // dynamic
  var_2797_39_multiplicative_expression, // dynamic
  var_2800_31_additive_operator, // dynamic
  var_funky_types__tagged_additive_expression, // extern
  var_2818_1_position, // dynamic
  var_2819_39_multiplicative_expression, // dynamic
  var_2822_31_additive_operator, // dynamic
  var_funky_types__plus, // extern
  var_2877_0_derived_node, // dynamic
  var_2879_1_position, // dynamic
  var_2880_39_multiplicative_expression, // dynamic
  var_2883_31_additive_operator, // dynamic
  var_funky_types__plus2, // extern
  var_funky_types__minus, // extern
  var_2906_0_derived_node, // dynamic
  var_2908_1_position, // dynamic
  var_2909_39_multiplicative_expression, // dynamic
  var_2912_31_additive_operator, // dynamic
  var_funky_types__minus2, // extern
  var_2930_1_position, // dynamic
  var_2931_27_an_expression, // dynamic
  var_2934_37_multiplicative_operator, // dynamic
  var_funky_types__times, // extern
  var_2989_0_derived_node, // dynamic
  var_2991_1_position, // dynamic
  var_2992_27_an_expression, // dynamic
  var_2995_37_multiplicative_operator, // dynamic
  var_funky_types__times2, // extern
  var_funky_types__over, // extern
  var_3018_0_derived_node, // dynamic
  var_3020_1_position, // dynamic
  var_3021_27_an_expression, // dynamic
  var_3024_37_multiplicative_operator, // dynamic
  var_funky_types__over2, // extern
  var_3089_1_position, // dynamic
  var_3090_31_inline_expression, // dynamic
  var_3096_26_inline_calls, // dynamic
  var_funky_types__parenthesed_expression, // extern
  var_funky__calls_of, // extern polymorphic
  var_3133_1_position, // dynamic
  var_3134_27_an_expression, // dynamic
  var_funky_types__backquoted, // extern
  var_3146_1_position, // dynamic
  var_3147_27_an_expression, // dynamic
  var_funky_types__negation, // extern
  var_3160_0_derived_node, // dynamic
  var_3162_1_position, // dynamic
  var_3163_29_trailing_remark, // dynamic
  var_3168_1_line_start_arguments, // dynamic
  var_3169_1_error, // dynamic
  var_funky_types__multiline_operator, // extern
  var_funky_types__multiline_plus, // extern
  var_3188_1_position, // dynamic
  var_3189_26_dummy_remark, // dynamic
  var_3194_1_line_start_arguments, // dynamic
  var_3195_1_error, // dynamic
  var_funky_types__multiline_minus, // extern
  var_3210_1_position, // dynamic
  var_3211_20_remark, // dynamic
  var_3216_1_line_start_arguments, // dynamic
  var_3217_1_error, // dynamic
  var_funky_types__multiline_minus_with_remark, // extern
  var_funky_types__multiline_times, // extern
  var_3236_1_position, // dynamic
  var_3237_1_line_start_arguments, // dynamic
  var_3238_1_error, // dynamic
  var_funky_types__multiline_over, // extern
  var_3249_1_position, // dynamic
  var_3250_20_remark, // dynamic
  var_3255_1_line_start_arguments, // dynamic
  var_3256_1_error, // dynamic
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
  var_3311_1_position, // dynamic
  var_3312_26_dummy_remark, // dynamic
  var_3317_1_line_start_arguments, // dynamic
  var_3318_1_error, // dynamic
  var_funky_types__multiline_bit_and, // extern
  var_3333_1_position, // dynamic
  var_3334_20_remark, // dynamic
  var_3339_1_line_start_arguments, // dynamic
  var_3340_1_error, // dynamic
  var_funky_types__multiline_bit_and_with_remark, // extern
  var_funky_types__multiline_bit_or, // extern
  var_funky_types__multiline_bit_xor, // extern
  var_funky_types__multiline_assign, // extern
  var_3367_12_expr, // dynamic
  var_3404_1_position, // dynamic
  var_3406_24_identifier, // dynamic
  var_3412_24_expression, // dynamic
  var_funky_types__inline_attribute_value_pair, // extern
  var_3428_1_position, // dynamic
  var_3430_24_identifier, // dynamic
  var_3436_24_expression, // dynamic
  var_funky_types__inline_method_value_pair, // extern
  var_3453_24_expression, // dynamic
  var_3456_35_some_inline_arguments, // dynamic
  var_3476_30_inline_arguments, // dynamic
  var_3488_30_inline_arguments, // dynamic
  var_3497_1_position, // dynamic
  var_3499_20_digits, // dynamic
  var_funky_types__numeric_literal, // extern
  var_funky__digits_of, // extern polymorphic
  var_funky_types__at_character_literal, // extern
  var_3777_1_position, // dynamic
  var_3778_44_character_name, // dynamic
  var_funky_types__named_character_literal, // extern
  var_3798_1_position, // dynamic
  var_3800_20_digits, // dynamic
  var_funky_types__numeric_character_literal, // extern
  var_3820_1_position, // dynamic
  var_3822_23_character, // dynamic
  var_funky_types__character_literal, // extern
  var_funky__character_of, // extern polymorphic
  var_3857_1_position, // dynamic
  var_3858_31_string_components, // dynamic
  var_funky_types__string_literal, // extern
  var_funky__components_of, // extern polymorphic
  var_3870_12_expr, // dynamic
  var_3889_30_string_component, // dynamic
  var_3892_31_string_components, // dynamic
  var_3943_1_position, // dynamic
  var_3945_31_string_characters, // dynamic
  var_funky_types__character_sequence, // extern
  var_funky__characters_of, // extern polymorphic
  var_3978_1_position, // dynamic
  var_3979_1_multiline_string_components, // dynamic
  var_3980_1_error, // dynamic
  var_3991_12_expr, // dynamic
  var_funky_types__newline, // extern
  var_4026_35_string_line_component, // dynamic
  var_4029_41_multiline_string_components, // dynamic
  var_funky_types__at_character, // extern
  var_4094_1_position, // dynamic
  var_4095_44_empty_character, // dynamic
  var_funky_types__tagged_empty_character, // extern
  var_funky_types__escape_expression, // extern
  var_4114_55_expression, // dynamic
  var_4140_1_position, // dynamic
  var_4141_44_character_name, // dynamic
  var_funky_types__named_character, // extern
  var_4157_1_position, // dynamic
  var_4159_20_digits, // dynamic
  var_funky_types__numeric_character, // extern
  var_4175_1_position, // dynamic
  var_4177_36_string_line_characters, // dynamic
  var_4210_1_position, // dynamic
  var_4211_30_trailing_remarks, // dynamic
  var_funky_types__unique, // extern
  var_4223_1_position, // dynamic
  var_4224_30_trailing_remarks, // dynamic
  var_funky_types__attribute, // extern
  var_4236_1_position, // dynamic
  var_4237_30_trailing_remarks, // dynamic
  var_funky_types__attribute_with_setter, // extern
  var_4250_0_derived_node, // dynamic
  var_4252_1_position, // dynamic
  var_4253_31_inline_parameters, // dynamic
  var_4256_38_optional_line_end_remark, // dynamic
  var_4259_29_body_statements, // dynamic
  var_funky_types__body, // extern
  var_funky__parameters_of, // extern polymorphic
  var_funky__statements_of, // extern polymorphic
  var_4288_12_expr, // dynamic
  var_4312_1_position, // dynamic
  var_4313_31_inline_parameters, // dynamic
  var_4319_30_inline_statement, // dynamic
  var_funky_types__inline_body, // extern
  var_funky__statement_of, // extern polymorphic
  var_4338_1_parameters_or_statement, // dynamic
  var_4339_1_error, // dynamic
  var_4349_12_expr, // dynamic
  var_4381_30_inline_parameter, // dynamic
  var_4384_42_maybe_more_inline_parameters, // dynamic
  var_4430_1_position, // dynamic
  var_4431_29_trailing_remark, // dynamic
  var_4436_1_parameter, // dynamic
  var_4437_1_error, // dynamic
  var_funky_types__open_parameters, // extern
  var_funky__parameter_of, // extern polymorphic
  var_4452_1_position, // dynamic
  var_4454_28_parameter_name, // dynamic
  var_4457_30_parameter_option, // dynamic
  var_funky_types__inline_parameter, // extern
  var_funky__option_of, // extern polymorphic
  var_4471_1_position, // dynamic
  var_4473_28_parameter_name, // dynamic
  var_4476_30_parameter_option, // dynamic
  var_4479_30_trailing_remarks, // dynamic
  var_funky_types__parameter, // extern
  var_funky_types__myself, // extern
  var_funky_types__rest, // extern
  var_4535_1_position, // dynamic
  var_4536_28_simple_operand, // dynamic
  var_funky_types__initial_value, // extern
  var_funky__operand_of, // extern polymorphic
  var_4580_1_position, // dynamic
  var_4581_29_trailing_remark, // dynamic
  var_funky_types__close_parameters, // extern
  var_4593_1_position, // dynamic
  var_4594_38_some_statement_arguments, // dynamic
  var_funky_types__return_expression, // extern
  var_funky_types__return, // extern
  var_4614_1_position, // dynamic
  var_4619_25_remark_text, // dynamic
  var_funky_types__remark, // extern
  var_funky__text_of, // extern polymorphic
  var_4633_1_position, // dynamic
  var_4635_25_remark_text, // dynamic
  var_4671_1_position, // dynamic
  var_4672_29_trailing_remark, // dynamic
  var_4675_26_line_remarks, // dynamic
  var_funky_types__line_end_and_line_remarks, // extern
  var_4713_1_multiline_remark, // dynamic
  var_4714_1_error, // dynamic
  var_4725_1_multiline_remark, // dynamic
  var_4726_1_error, // dynamic
  var_4734_1_position, // dynamic
  var_4736_25_remark_text, // dynamic
  var_4748_1_position, // dynamic
  var_4753_25_remark_text, // dynamic
  var_4756_31_some_remark_lines, // dynamic
  var_funky_types__multiline_remark, // extern
  var_funky__lines_of, // extern polymorphic
  var_4772_1_position, // dynamic
  var_4774_25_remark_text, // dynamic
  var_4777_31_some_remark_lines, // dynamic
  var_4801_1_position, // dynamic
  var_4803_25_remark_text, // dynamic
  var_funky_types__remark_lines, // extern
  var_4815_1_position, // dynamic
  var_funky_types__dummy_remark, // extern
  var__END
};


static TAB_NUM t_func_funky__line_indent_of[] = {
  1, // locals
  1, // parameters
  var_27_25_line,
  // is_defined
  var_is_defined, 1, var_27_25_line, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1, lambda_2, TAIL_CALL,
  POS(29, 10),
  POS(28, 3)
};

static TAB_NUM t_lambda_1[] = {
  1, // locals
  0, // parameters
  // first(line)
  var_first, 1, var_27_25_line, 1, LOCAL(1),
  //  first(line)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(30, 8),
  POS(30, 7)
};

static TAB_NUM t_lambda_2[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(31, 7)
};

static TAB_NUM t_func_funky__line_text_of[] = {
  1, // locals
  1, // parameters
  var_33_23_line,
  // is_defined
  var_is_defined, 1, var_33_23_line, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_3, lambda_4, TAIL_CALL,
  POS(35, 10),
  POS(34, 3)
};

static TAB_NUM t_lambda_3[] = {
  1, // locals
  0, // parameters
  // second(line)
  var_second, 1, var_33_23_line, 1, LOCAL(1),
  //  second(line)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(36, 8),
  POS(36, 7)
};

static TAB_NUM t_lambda_4[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(37, 7)
};

static TAB_NUM t_func_funky__split_source_into_lines[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 39_34_source
  // split_into_indented_lines $lines source
  var_split_into_indented_lines, 1, LOCAL(1), 1, var_40_27_lines,
  // map lines: (line_no line)
  var_map, 2, var_40_27_lines, lambda_5, TAIL_CALL,
  POS(40, 3),
  POS(41, 3)
};

static TAB_NUM t_lambda_5[] = {
  1, // locals
  2, // parameters
  var_41_12_line_no,
  var_41_20_line,
  // is_defined:
  var_is_defined, 1, var_41_20_line, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_line_is_defined, lambda_8, TAIL_CALL,
  POS(43, 12),
  POS(42, 5)
};

static TAB_NUM t_lambda_line_is_defined[] = {
  0, // locals
  0, // parameters
  // $prev_line_no line_no
  LET, 1, var_41_12_line_no, 1, var_44_1_prev_line_no,
  // loop:
  var_loop, 1, lambda_loop, TAIL_CALL,
  POS(44, 9),
  POS(45, 9)
};

static TAB_NUM t_lambda_loop[] = {
  2, // locals
  0, // parameters
  // dec &prev_line_no
  var_dec, 1, var_44_1_prev_line_no, 1, var_44_1_prev_line_no,
  // prev_line_no < 1 || lines(prev_line_no).is_defined
  var_std__less, 2, var_44_1_prev_line_no, num_1, 1, LOCAL(1),
  // prev_line_no < 1 || lines(prev_line_no).is_defined
  var_std__or, 2, LOCAL(1), lambda_6, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_7, var_next, TAIL_CALL,
  POS(46, 11),
  POS(48, 13),
  POS(48, 13),
  POS(47, 11)
};

static TAB_NUM t_lambda_6[] = {
  2, // locals
  0, // parameters
  // lines(prev_line_no).is_defined
  var_40_27_lines, 1, var_44_1_prev_line_no, 1, LOCAL(1),
  // is_defined
  var_is_defined, 1, LOCAL(1), 1, LOCAL(2),
  // lines(prev_line_no).is_defined
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(48, 33),
  POS(48, 53),
  POS(48, 33)
};

static TAB_NUM t_lambda_7[] = {
  2, // locals
  0, // parameters
  // line_no-prev_line_no
  var_std__minus, 2, var_41_12_line_no, var_44_1_prev_line_no, 1, LOCAL(1),
  // line
  LET, -2, var_41_20_line, var_funky__line_no_of, var_41_12_line_no, var_funky__skip_of, LOCAL(1), LOCAL(2),
  // 
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(52, 33),
  POS(50, 15),
  POS(49, 15)
};

static TAB_NUM t_lambda_8[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(54, 9)
};

static TAB_NUM t_func_funky__parse[] = {
  2, // locals
  2, // parameters
  LOCAL(1), // 56_16_lines
  LOCAL(2), // 56_22_parse_function
  // !subgroups lines
  LET, 1, LOCAL(1), 1, var_subgroups,
  // parse_groups parse_function
  func_parse_groups, 1, LOCAL(2), TAIL_CALL,
  POS(57, 3),
  POS(58, 3)
};

static TAB_NUM t_func_convert_to_text_lines[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 60_25_groups
  // $min_indent
  var_map_reduce, 3, LOCAL(1), var_funky__line_indent_of, lambda_9, 1, var_61_1_min_indent,
  // map groups: (group)
  var_map, 2, LOCAL(1), lambda_14, TAIL_CALL,
  POS(61, 3),
  POS(72, 3)
};

static TAB_NUM t_lambda_9[] = {
  1, // locals
  2, // parameters
  var_63_31_left,
  var_63_36_right,
  // is_undefined
  var_is_undefined, 1, var_63_31_left, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_10, lambda_11, TAIL_CALL,
  POS(65, 16),
  POS(64, 9)
};

static TAB_NUM t_lambda_10[] = {
  0, // locals
  0, // parameters
  //  right
  LET, 1, var_63_36_right, TAIL_CALL,
  POS(66, 13)
};

static TAB_NUM t_lambda_11[] = {
  1, // locals
  0, // parameters
  // is_undefined
  var_is_undefined, 1, var_63_36_right, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_12, lambda_13, TAIL_CALL,
  POS(69, 21),
  POS(68, 13)
};

static TAB_NUM t_lambda_12[] = {
  0, // locals
  0, // parameters
  //  left
  LET, 1, var_63_31_left, TAIL_CALL,
  POS(70, 17)
};

static TAB_NUM t_lambda_13[] = {
  1, // locals
  0, // parameters
  // min(left right)
  var_min, 2, var_63_31_left, var_63_36_right, 1, LOCAL(1),
  //  min(left right)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(71, 18),
  POS(71, 17)
};

static TAB_NUM t_lambda_14[] = {
  1, // locals
  1, // parameters
  var_72_13_group,
  // is_defined:
  var_is_defined, 1, var_72_13_group, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_group_is_defined, lambda_15, TAIL_CALL,
  POS(74, 13),
  POS(73, 5)
};

static TAB_NUM t_lambda_group_is_defined[] = {
  8, // locals
  0, // parameters
  // group $indent $line_text
  var_72_13_group, 0, 2, LOCAL(7), LOCAL(8),
  // indent-min_indent) line_text))
  var_std__minus, 2, LOCAL(7), var_61_1_min_indent, 1, LOCAL(1),
  // spaces(indent-min_indent) line_text))
  var_spaces, 1, LOCAL(1), 1, LOCAL(2),
  // append(spaces(indent-min_indent) line_text))
  var_append, 2, LOCAL(2), LOCAL(8), 1, LOCAL(3),
  // funky::line_no_of(group)
  var_funky__line_no_of, 1, var_72_13_group, 1, LOCAL(4),
  // tuple(min_indent append(spaces(indent-min_indent) line_text))
  var_tuple, 2, var_61_1_min_indent, LOCAL(3), 1, LOCAL(5),
  // tuple(min_indent append(spaces(indent-min_indent) line_text))
  LET, -1, LOCAL(5), var_funky__line_no_of, LOCAL(4), LOCAL(6),
  // ->
  LET, 1, LOCAL(6), TAIL_CALL,
  POS(75, 9),
  POS(77, 42),
  POS(77, 35),
  POS(77, 28),
  POS(78, 32),
  POS(77, 11),
  POS(77, 11),
  POS(76, 9)
};

static TAB_NUM t_lambda_15[] = {
  1, // locals
  0, // parameters
  // tuple(min_indent "@nl;")
  var_tuple, 2, var_61_1_min_indent, string_2, 1, LOCAL(1),
  //  tuple(min_indent "@nl;")
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(79, 10),
  POS(79, 9)
};

static TAB_NUM t_func_to_list[] = {
  1, // locals
  1, // parameters
  var_81_11_node,
  // is_undefined
  var_is_undefined, 1, var_81_11_node, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_16, lambda_17, TAIL_CALL,
  POS(83, 10),
  POS(82, 3)
};

static TAB_NUM t_lambda_16[] = {
  0, // locals
  0, // parameters
  //  empty_list
  LET, 1, var_empty_list, TAIL_CALL,
  POS(84, 7)
};

static TAB_NUM t_lambda_17[] = {
  1, // locals
  0, // parameters
  // is_a_list
  var_is_a_list, 1, var_81_11_node, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_18, lambda_19, TAIL_CALL,
  POS(87, 14),
  POS(86, 7)
};

static TAB_NUM t_lambda_18[] = {
  0, // locals
  0, // parameters
  //  node
  LET, 1, var_81_11_node, TAIL_CALL,
  POS(88, 11)
};

static TAB_NUM t_lambda_19[] = {
  1, // locals
  0, // parameters
  // list(node)
  var_list, 1, var_81_11_node, 1, LOCAL(1),
  //  list(node)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(89, 12),
  POS(89, 11)
};

static TAB_NUM t_func_syntax_error[] = {
  6, // locals
  1, // parameters
  var_91_16_item,
  // funky::line_text_of(current_group))+1-length_of(text)
  var_funky__line_text_of, 1, var_current_group, 1, LOCAL(1),
  // length_of(funky::line_text_of(current_group))+1-length_of(text)
  var_length_of, 1, LOCAL(1), 1, LOCAL(2),
  // length_of(funky::line_text_of(current_group))+1-length_of(text)
  var_std__plus, 2, LOCAL(2), num_1, 1, LOCAL(3),
  // length_of(text)
  var_length_of, 1, var_text, 1, LOCAL(4),
  // $pos length_of(funky::line_text_of(current_group))+1-length_of(text)
  var_std__minus, 2, LOCAL(3), LOCAL(4), 1, LOCAL(5),
  // is_defined && text == at
  var_is_defined, 1, var_expected, 1, LOCAL(1),
  // is_defined && text == at
  var_std__and, 2, LOCAL(1), lambda_20, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_21, lambda_22, 1, LOCAL(3),
  // $message
  var_string, 2, LOCAL(3), str__expected, 1, LOCAL(6),
  // tuple(funky::current_filename current_group pos)
  var_tuple, 3, var_funky__current_filename, var_current_group, LOCAL(5), 1, LOCAL(1),
  // error
  var_error, 3, var_funky__SYNTAX_ERROR, LOCAL(6), LOCAL(1), 1, LOCAL(2),
  // ->
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(92, 18),
  POS(92, 8),
  POS(92, 8),
  POS(92, 56),
  POS(92, 3),
  POS(96, 18),
  POS(96, 18),
  POS(95, 7),
  POS(93, 3),
  POS(104, 7),
  POS(101, 5),
  POS(100, 3)
};

static TAB_NUM t_lambda_20[] = {
  1, // locals
  0, // parameters
  // text == at
  var_std__equal, 2, var_text, var_at, 1, LOCAL(1),
  // text == at
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(96, 32),
  POS(96, 32)
};

static TAB_NUM t_lambda_21[] = {
  0, // locals
  0, // parameters
  //  expected
  LET, 1, var_expected, TAIL_CALL,
  POS(97, 11)
};

static TAB_NUM t_lambda_22[] = {
  0, // locals
  0, // parameters
  //  item
  LET, 1, var_91_16_item, TAIL_CALL,
  POS(98, 11)
};

static TAB_NUM t_func_parse_groups[] = {
  1, // locals
  1, // parameters
  var_106_16_parse_function,
  // is_defined:
  var_is_defined, 1, var_subgroups, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_subgroups_is_defined, lambda_30, TAIL_CALL,
  POS(108, 15),
  POS(107, 3)
};

static TAB_NUM t_lambda_subgroups_is_defined[] = {
  1, // locals
  0, // parameters
  // is_defined
  var_is_defined, 1, var_current_group, 1, LOCAL(1),
  // $indent
  var_if, 3, LOCAL(1), lambda_23, lambda_24, 1, var_109_1_indent,
  // split_into_groups(subgroups): (head)
  var_split_into_groups, 1, var_subgroups, 1, LOCAL(1),
  // map_reduce split_into_groups(subgroups): (head)
  var_map_reduce, 2, LOCAL(1), lambda_25, TAIL_CALL,
  POS(111, 25),
  POS(109, 7),
  POS(114, 18),
  POS(114, 7)
};

static TAB_NUM t_lambda_23[] = {
  1, // locals
  0, // parameters
  // funky::line_indent_of(current_group)
  var_funky__line_indent_of, 1, var_current_group, 1, LOCAL(1),
  //  funky::line_indent_of(current_group)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(112, 14),
  POS(112, 13)
};

static TAB_NUM t_lambda_24[] = {
  0, // locals
  0, // parameters
  //  0
  LET, 1, num_0, TAIL_CALL,
  POS(113, 13)
};

static TAB_NUM t_lambda_25[] = {
  2, // locals
  1, // parameters
  var_114_42_head,
  // !current_group head
  LET, 1, var_114_42_head, 1, var_current_group,
  // funky::line_indent_of(head) < indent:
  var_funky__line_indent_of, 1, var_114_42_head, 1, LOCAL(1),
  // funky::line_indent_of(head) < indent:
  var_std__less, 2, LOCAL(1), var_109_1_indent, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_26, lambda_27, TAIL_CALL,
  POS(115, 9),
  POS(117, 11),
  POS(117, 11),
  POS(116, 9)
};

static TAB_NUM t_lambda_26[] = {
  1, // locals
  0, // parameters
  // tuple(funky::current_filename current_group 1)
  var_tuple, 3, var_funky__current_filename, var_current_group, num_1, 1, LOCAL(1),
  // error
  var_error, 3, var_funky__SYNTAX_ERROR, str_Unexpected_outde, LOCAL(1), TAIL_CALL,
  POS(121, 15),
  POS(118, 13)
};

static TAB_NUM t_lambda_27[] = {
  2, // locals
  0, // parameters
  // !text funky::line_text_of(head)
  var_funky__line_text_of, 1, var_114_42_head, 1, var_text,
  // !subgroups subgroups_of(head)
  var_subgroups_of, 1, var_114_42_head, 1, var_subgroups,
  // funky::skip_of(head))
  var_funky__skip_of, 1, var_114_42_head, 1, LOCAL(1),
  // parse_function()(.funky::skip_of funky::skip_of(head))
  var_106_16_parse_function, 0, 1, LOCAL(2),
  // $node parse_function()(.funky::skip_of funky::skip_of(head))
  LET, -1, LOCAL(2), var_funky__skip_of, LOCAL(1), var_125_1_node,
  // is_a_list
  var_is_a_list, 1, var_125_1_node, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_28, lambda_29, TAIL_CALL,
  POS(123, 13),
  POS(124, 13),
  POS(125, 52),
  POS(125, 19),
  POS(125, 13),
  POS(127, 20),
  POS(126, 13)
};

static TAB_NUM t_lambda_28[] = {
  0, // locals
  0, // parameters
  //  node
  LET, 1, var_125_1_node, TAIL_CALL,
  POS(128, 17)
};

static TAB_NUM t_lambda_29[] = {
  1, // locals
  0, // parameters
  // list(node)
  var_list, 1, var_125_1_node, 1, LOCAL(1),
  //  list(node)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(129, 18),
  POS(129, 17)
};

static TAB_NUM t_lambda_30[] = {
  0, // locals
  0, // parameters
  //  empty_list
  LET, 1, var_empty_list, TAIL_CALL,
  POS(130, 7)
};

static TAB_NUM t_func_parse_lines[] = {
  1, // locals
  1, // parameters
  var_132_15_parse_function,
  // is_defined:
  var_is_defined, 1, var_subgroups, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_2_subgroups_is_defined, lambda_34, TAIL_CALL,
  POS(134, 15),
  POS(133, 3)
};

static TAB_NUM t_lambda_2_subgroups_is_defined[] = {
  1, // locals
  0, // parameters
  // convert_to_text_lines(subgroups): (head)
  func_convert_to_text_lines, 1, var_subgroups, 1, LOCAL(1),
  // map_reduce convert_to_text_lines(subgroups): (head)
  var_map_reduce, 2, LOCAL(1), lambda_31, TAIL_CALL,
  POS(135, 18),
  POS(135, 7)
};

static TAB_NUM t_lambda_31[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 135_46_head
  // !current_group head
  LET, 1, LOCAL(2), 1, var_current_group,
  // !text funky::line_text_of(head)
  var_funky__line_text_of, 1, LOCAL(2), 1, var_text,
  // !subgroups subgroups_of(head)
  var_subgroups_of, 1, LOCAL(2), 1, var_subgroups,
  // parse_function()(.funky::skip_of 1)
  var_132_15_parse_function, 0, 1, LOCAL(1),
  // $node parse_function()(.funky::skip_of 1)
  LET, -1, LOCAL(1), var_funky__skip_of, num_1, var_139_1_node,
  // is_a_list
  var_is_a_list, 1, var_139_1_node, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_32, lambda_33, TAIL_CALL,
  POS(136, 9),
  POS(137, 9),
  POS(138, 9),
  POS(139, 15),
  POS(139, 9),
  POS(141, 16),
  POS(140, 9)
};

static TAB_NUM t_lambda_32[] = {
  0, // locals
  0, // parameters
  //  node
  LET, 1, var_139_1_node, TAIL_CALL,
  POS(142, 13)
};

static TAB_NUM t_lambda_33[] = {
  1, // locals
  0, // parameters
  // list(node)
  var_list, 1, var_139_1_node, 1, LOCAL(1),
  //  list(node)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(143, 14),
  POS(143, 13)
};

static TAB_NUM t_lambda_34[] = {
  0, // locals
  0, // parameters
  //  empty_list
  LET, 1, var_empty_list, TAIL_CALL,
  POS(144, 7)
};

static TAB_NUM t_func_funky__parse_top_level_statement_group[] = {
  1, // locals
  0, // parameters
  // parse_top_level_statement !text $top_level_statement
  func_parse_top_level_statement, 0, 2, var_text, LOCAL(1),
  // -> top_level_statement
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(150, 3),
  POS(151, 3)
};

static TAB_NUM t_func_funky__parse_parameters_or_statement_group[] = {
  1, // locals
  0, // parameters
  // parse_parameters_or_statement !text $parameters_or_statement
  func_parse_parameters_or_statement, 0, 2, var_text, LOCAL(1),
  // -> parameters_or_statement
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(154, 3),
  POS(155, 3)
};

static TAB_NUM t_func_funky__parse_line_start_arguments_group[] = {
  1, // locals
  0, // parameters
  // parse_line_start_arguments !text $line_start_arguments
  func_parse_line_start_arguments, 0, 2, var_text, LOCAL(1),
  // -> line_start_arguments
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(158, 3),
  POS(159, 3)
};

static TAB_NUM t_func_funky__parse_multiline_string_components_group[] = {
  1, // locals
  0, // parameters
  // parse_multiline_string_components !text $multiline_string_components
  func_parse_multiline_string_components, 0, 2, var_text, LOCAL(1),
  // -> multiline_string_components
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(162, 3),
  POS(163, 3)
};

static TAB_NUM t_func_funky__parse_parameter_group[] = {
  1, // locals
  0, // parameters
  // parse_parameter !text $parameter
  func_parse_parameter, 0, 2, var_text, LOCAL(1),
  // -> parameter
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(166, 3),
  POS(167, 3)
};

static TAB_NUM t_func_funky__parse_multiline_remark_group[] = {
  1, // locals
  0, // parameters
  // parse_multiline_remark !text $multiline_remark
  func_parse_multiline_remark, 0, 2, var_text, LOCAL(1),
  // -> multiline_remark
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(170, 3),
  POS(171, 3)
};

static TAB_NUM t_func_parse_top_level_statement[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 3, lambda_35, lambda_37, lambda_39, TAIL_CALL,
  POS(174, 3)
};

static TAB_NUM t_lambda_35[] = {
  2, // locals
  0, // parameters
  // text(1) == '<'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '<'
  var_std__equal, 2, LOCAL(1), chr_60, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_36, TAIL_CALL,
  POS(176, 7),
  POS(176, 7),
  POS(175, 7)
};

static TAB_NUM t_lambda_36[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_meta_instruction
  func_parse_meta_instruction, 0, TAIL_CALL,
  POS(178, 9),
  POS(179, 9)
};

static TAB_NUM t_lambda_37[] = {
  2, // locals
  0, // parameters
  // text(1) == '#'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '#'
  var_std__equal, 2, LOCAL(1), chr_35, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_38, TAIL_CALL,
  POS(181, 7),
  POS(181, 7),
  POS(180, 7)
};

static TAB_NUM t_lambda_38[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_multiline_remark_without_prefix
  func_parse_multiline_remark_without_prefix, 0, TAIL_CALL,
  POS(183, 9),
  POS(184, 9)
};

static TAB_NUM t_lambda_39[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_40, TAIL_CALL,
  POS(185, 7)
};

static TAB_NUM t_lambda_40[] = {
  0, // locals
  0, // parameters
  // !expected "top level statement"
  LET, 1, str_top_level_statem, 1, var_expected,
  // !at text
  LET, 1, var_text, 1, var_at,
  // parse_statement
  func_parse_statement, 0, TAIL_CALL,
  POS(188, 9),
  POS(189, 9),
  POS(190, 9)
};

static TAB_NUM t_func_parse_name[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 2, lambda_41, lambda_46, TAIL_CALL,
  POS(193, 3)
};

static TAB_NUM t_lambda_41[] = {
  5, // locals
  0, // parameters
  // text(1) >= 'a' && text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z')
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) >= 'a' && text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z')
  var_std__less, 2, LOCAL(1), chr_97, 1, LOCAL(2),
  // text(1) >= 'a' && text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) >= 'a' && text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z')
  var_std__and, 2, LOCAL(3), lambda_42, 1, LOCAL(4),
  // text(1) >= 'a' && text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z')
  var_std__or, 2, LOCAL(4), lambda_43, 1, LOCAL(5),
  // 
  LET, 2, LOCAL(5), lambda_45, TAIL_CALL,
  POS(195, 8),
  POS(195, 8),
  POS(195, 8),
  POS(195, 8),
  POS(195, 8),
  POS(194, 7)
};

static TAB_NUM t_lambda_42[] = {
  3, // locals
  0, // parameters
  // text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z')
  var_text, 1, num_1, 1, LOCAL(1),
  // z') || (text(1) >= 'A' && text(1) <= 'Z')
  var_std__less, 2, chr_122, LOCAL(1), 1, LOCAL(2),
  // z') || (text(1) >= 'A' && text(1) <= 'Z')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z')
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(195, 26),
  POS(195, 38),
  POS(195, 38),
  POS(195, 26)
};

static TAB_NUM t_lambda_43[] = {
  4, // locals
  0, // parameters
  // text(1) >= 'A' && text(1) <= 'Z')
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) >= 'A' && text(1) <= 'Z')
  var_std__less, 2, LOCAL(1), chr_65, 1, LOCAL(2),
  // text(1) >= 'A' && text(1) <= 'Z')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) >= 'A' && text(1) <= 'Z')
  var_std__and, 2, LOCAL(3), lambda_44, 1, LOCAL(4),
  // text(1) >= 'A' && text(1) <= 'Z')
  LET, 1, LOCAL(4), TAIL_CALL,
  POS(195, 46),
  POS(195, 46),
  POS(195, 46),
  POS(195, 46),
  POS(195, 46)
};

static TAB_NUM t_lambda_44[] = {
  3, // locals
  0, // parameters
  // text(1) <= 'Z')
  var_text, 1, num_1, 1, LOCAL(1),
  // Z')
  var_std__less, 2, chr_90, LOCAL(1), 1, LOCAL(2),
  // Z')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) <= 'Z')
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(195, 64),
  POS(195, 76),
  POS(195, 76),
  POS(195, 64)
};

static TAB_NUM t_lambda_45[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_more_name_characters
  func_parse_more_name_characters, 0, TAIL_CALL,
  POS(197, 9),
  POS(198, 9)
};

static TAB_NUM t_lambda_46[] = {
  0, // locals
  0, // parameters
  //  true:
  LET, 2, var_true, lambda_47, TAIL_CALL,
  POS(199, 7)
};

static TAB_NUM t_lambda_47[] = {
  0, // locals
  0, // parameters
  // syntax_error "name"
  func_syntax_error, 1, str_name, TAIL_CALL,
  POS(200, 7)
};

static TAB_NUM t_func_parse_more_name_characters[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 3, lambda_48, lambda_55, lambda_57, TAIL_CALL,
  POS(203, 3)
};

static TAB_NUM t_lambda_48[] = {
  5, // locals
  0, // parameters
  // text(1) >= 'a' && text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) >= 'a' && text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  var_std__less, 2, LOCAL(1), chr_97, 1, LOCAL(2),
  // text(1) >= 'a' && text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) >= 'a' && text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  var_std__and, 2, LOCAL(3), lambda_49, 1, LOCAL(4),
  // text(1) >= 'a' && text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  var_std__or, 2, LOCAL(4), lambda_50, 1, LOCAL(5),
  // 
  LET, 2, LOCAL(5), lambda_54, TAIL_CALL,
  POS(205, 8),
  POS(205, 8),
  POS(205, 8),
  POS(205, 8),
  POS(205, 8),
  POS(204, 7)
};

static TAB_NUM t_lambda_49[] = {
  3, // locals
  0, // parameters
  // text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  var_text, 1, num_1, 1, LOCAL(1),
  // z') || (text(1) >= 'A' && text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  var_std__less, 2, chr_122, LOCAL(1), 1, LOCAL(2),
  // z') || (text(1) >= 'A' && text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(205, 26),
  POS(205, 38),
  POS(205, 38),
  POS(205, 26)
};

static TAB_NUM t_lambda_50[] = {
  5, // locals
  0, // parameters
  // text(1) >= 'A' && text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) >= 'A' && text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  var_std__less, 2, LOCAL(1), chr_65, 1, LOCAL(2),
  // text(1) >= 'A' && text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) >= 'A' && text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  var_std__and, 2, LOCAL(3), lambda_51, 1, LOCAL(4),
  // text(1) >= 'A' && text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  var_std__or, 2, LOCAL(4), lambda_52, 1, LOCAL(5),
  // (text(1) >= 'A' && text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  LET, 1, LOCAL(5), TAIL_CALL,
  POS(205, 46),
  POS(205, 46),
  POS(205, 46),
  POS(205, 46),
  POS(205, 46),
  POS(205, 45)
};

static TAB_NUM t_lambda_51[] = {
  3, // locals
  0, // parameters
  // text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  var_text, 1, num_1, 1, LOCAL(1),
  // Z') || (text(1) >= '0' && text(1) <= '9')
  var_std__less, 2, chr_90, LOCAL(1), 1, LOCAL(2),
  // Z') || (text(1) >= '0' && text(1) <= '9')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(205, 64),
  POS(205, 76),
  POS(205, 76),
  POS(205, 64)
};

static TAB_NUM t_lambda_52[] = {
  4, // locals
  0, // parameters
  // text(1) >= '0' && text(1) <= '9')
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) >= '0' && text(1) <= '9')
  var_std__less, 2, LOCAL(1), chr_48, 1, LOCAL(2),
  // text(1) >= '0' && text(1) <= '9')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) >= '0' && text(1) <= '9')
  var_std__and, 2, LOCAL(3), lambda_53, 1, LOCAL(4),
  // text(1) >= '0' && text(1) <= '9')
  LET, 1, LOCAL(4), TAIL_CALL,
  POS(205, 84),
  POS(205, 84),
  POS(205, 84),
  POS(205, 84),
  POS(205, 84)
};

static TAB_NUM t_lambda_53[] = {
  3, // locals
  0, // parameters
  // text(1) <= '9')
  var_text, 1, num_1, 1, LOCAL(1),
  // 9')
  var_std__less, 2, chr_57, LOCAL(1), 1, LOCAL(2),
  // 9')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) <= '9')
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(205, 102),
  POS(205, 114),
  POS(205, 114),
  POS(205, 102)
};

static TAB_NUM t_lambda_54[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_more_name_characters
  func_parse_more_name_characters, 0, TAIL_CALL,
  POS(207, 9),
  POS(208, 9)
};

static TAB_NUM t_lambda_55[] = {
  2, // locals
  0, // parameters
  // text(1) == '_'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '_'
  var_std__equal, 2, LOCAL(1), chr_95, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_56, TAIL_CALL,
  POS(210, 7),
  POS(210, 7),
  POS(209, 7)
};

static TAB_NUM t_lambda_56[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_more_name_words
  func_parse_more_name_words, 0, TAIL_CALL,
  POS(212, 9),
  POS(213, 9)
};

static TAB_NUM t_lambda_57[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_58, TAIL_CALL,
  POS(214, 7)
};

static TAB_NUM t_lambda_58[] = {
  4, // locals
  0, // parameters
  // length_of(str)-length_of(text))
  var_length_of, 1, var_str, 1, LOCAL(1),
  // length_of(text))
  var_length_of, 1, var_text, 1, LOCAL(2),
  // length_of(str)-length_of(text))
  var_std__minus, 2, LOCAL(1), LOCAL(2), 1, LOCAL(3),
  // range(str 1 length_of(str)-length_of(text))
  var_range, 3, var_str, num_1, LOCAL(3), 1, LOCAL(4),
  //  text range(str 1 length_of(str)-length_of(text))
  LET, 2, var_text, LOCAL(4), TAIL_CALL,
  POS(216, 27),
  POS(216, 42),
  POS(216, 27),
  POS(216, 15),
  POS(216, 9)
};

static TAB_NUM t_func_parse_more_name_words[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 2, lambda_59, lambda_66, TAIL_CALL,
  POS(219, 3)
};

static TAB_NUM t_lambda_59[] = {
  5, // locals
  0, // parameters
  // text(1) >= 'a' && text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) >= 'a' && text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  var_std__less, 2, LOCAL(1), chr_97, 1, LOCAL(2),
  // text(1) >= 'a' && text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) >= 'a' && text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  var_std__and, 2, LOCAL(3), lambda_60, 1, LOCAL(4),
  // text(1) >= 'a' && text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  var_std__or, 2, LOCAL(4), lambda_61, 1, LOCAL(5),
  // 
  LET, 2, LOCAL(5), lambda_65, TAIL_CALL,
  POS(221, 8),
  POS(221, 8),
  POS(221, 8),
  POS(221, 8),
  POS(221, 8),
  POS(220, 7)
};

static TAB_NUM t_lambda_60[] = {
  3, // locals
  0, // parameters
  // text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  var_text, 1, num_1, 1, LOCAL(1),
  // z') || (text(1) >= 'A' && text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  var_std__less, 2, chr_122, LOCAL(1), 1, LOCAL(2),
  // z') || (text(1) >= 'A' && text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(221, 26),
  POS(221, 38),
  POS(221, 38),
  POS(221, 26)
};

static TAB_NUM t_lambda_61[] = {
  5, // locals
  0, // parameters
  // text(1) >= 'A' && text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) >= 'A' && text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  var_std__less, 2, LOCAL(1), chr_65, 1, LOCAL(2),
  // text(1) >= 'A' && text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) >= 'A' && text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  var_std__and, 2, LOCAL(3), lambda_62, 1, LOCAL(4),
  // text(1) >= 'A' && text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  var_std__or, 2, LOCAL(4), lambda_63, 1, LOCAL(5),
  // (text(1) >= 'A' && text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  LET, 1, LOCAL(5), TAIL_CALL,
  POS(221, 46),
  POS(221, 46),
  POS(221, 46),
  POS(221, 46),
  POS(221, 46),
  POS(221, 45)
};

static TAB_NUM t_lambda_62[] = {
  3, // locals
  0, // parameters
  // text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  var_text, 1, num_1, 1, LOCAL(1),
  // Z') || (text(1) >= '0' && text(1) <= '9')
  var_std__less, 2, chr_90, LOCAL(1), 1, LOCAL(2),
  // Z') || (text(1) >= '0' && text(1) <= '9')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(221, 64),
  POS(221, 76),
  POS(221, 76),
  POS(221, 64)
};

static TAB_NUM t_lambda_63[] = {
  4, // locals
  0, // parameters
  // text(1) >= '0' && text(1) <= '9')
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) >= '0' && text(1) <= '9')
  var_std__less, 2, LOCAL(1), chr_48, 1, LOCAL(2),
  // text(1) >= '0' && text(1) <= '9')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) >= '0' && text(1) <= '9')
  var_std__and, 2, LOCAL(3), lambda_64, 1, LOCAL(4),
  // text(1) >= '0' && text(1) <= '9')
  LET, 1, LOCAL(4), TAIL_CALL,
  POS(221, 84),
  POS(221, 84),
  POS(221, 84),
  POS(221, 84),
  POS(221, 84)
};

static TAB_NUM t_lambda_64[] = {
  3, // locals
  0, // parameters
  // text(1) <= '9')
  var_text, 1, num_1, 1, LOCAL(1),
  // 9')
  var_std__less, 2, chr_57, LOCAL(1), 1, LOCAL(2),
  // 9')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) <= '9')
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(221, 102),
  POS(221, 114),
  POS(221, 114),
  POS(221, 102)
};

static TAB_NUM t_lambda_65[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_more_name_characters
  func_parse_more_name_characters, 0, TAIL_CALL,
  POS(223, 9),
  POS(224, 9)
};

static TAB_NUM t_lambda_66[] = {
  0, // locals
  0, // parameters
  //  true:
  LET, 2, var_true, lambda_67, TAIL_CALL,
  POS(225, 7)
};

static TAB_NUM t_lambda_67[] = {
  0, // locals
  0, // parameters
  // syntax_error "more name words"
  func_syntax_error, 1, str_more_name_words, TAIL_CALL,
  POS(226, 7)
};

static TAB_NUM t_func_parse_identifier[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 2, lambda_68, lambda_73, TAIL_CALL,
  POS(229, 3)
};

static TAB_NUM t_lambda_68[] = {
  5, // locals
  0, // parameters
  // text(1) >= 'a' && text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z')
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) >= 'a' && text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z')
  var_std__less, 2, LOCAL(1), chr_97, 1, LOCAL(2),
  // text(1) >= 'a' && text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) >= 'a' && text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z')
  var_std__and, 2, LOCAL(3), lambda_69, 1, LOCAL(4),
  // text(1) >= 'a' && text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z')
  var_std__or, 2, LOCAL(4), lambda_70, 1, LOCAL(5),
  // 
  LET, 2, LOCAL(5), lambda_72, TAIL_CALL,
  POS(231, 8),
  POS(231, 8),
  POS(231, 8),
  POS(231, 8),
  POS(231, 8),
  POS(230, 7)
};

static TAB_NUM t_lambda_69[] = {
  3, // locals
  0, // parameters
  // text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z')
  var_text, 1, num_1, 1, LOCAL(1),
  // z') || (text(1) >= 'A' && text(1) <= 'Z')
  var_std__less, 2, chr_122, LOCAL(1), 1, LOCAL(2),
  // z') || (text(1) >= 'A' && text(1) <= 'Z')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z')
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(231, 26),
  POS(231, 38),
  POS(231, 38),
  POS(231, 26)
};

static TAB_NUM t_lambda_70[] = {
  4, // locals
  0, // parameters
  // text(1) >= 'A' && text(1) <= 'Z')
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) >= 'A' && text(1) <= 'Z')
  var_std__less, 2, LOCAL(1), chr_65, 1, LOCAL(2),
  // text(1) >= 'A' && text(1) <= 'Z')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) >= 'A' && text(1) <= 'Z')
  var_std__and, 2, LOCAL(3), lambda_71, 1, LOCAL(4),
  // text(1) >= 'A' && text(1) <= 'Z')
  LET, 1, LOCAL(4), TAIL_CALL,
  POS(231, 46),
  POS(231, 46),
  POS(231, 46),
  POS(231, 46),
  POS(231, 46)
};

static TAB_NUM t_lambda_71[] = {
  3, // locals
  0, // parameters
  // text(1) <= 'Z')
  var_text, 1, num_1, 1, LOCAL(1),
  // Z')
  var_std__less, 2, chr_90, LOCAL(1), 1, LOCAL(2),
  // Z')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) <= 'Z')
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(231, 64),
  POS(231, 76),
  POS(231, 76),
  POS(231, 64)
};

static TAB_NUM t_lambda_72[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_more_identifier_characters
  func_parse_more_identifier_characters, 0, TAIL_CALL,
  POS(233, 9),
  POS(234, 9)
};

static TAB_NUM t_lambda_73[] = {
  0, // locals
  0, // parameters
  //  true:
  LET, 2, var_true, lambda_74, TAIL_CALL,
  POS(235, 7)
};

static TAB_NUM t_lambda_74[] = {
  0, // locals
  0, // parameters
  // syntax_error "identifier"
  func_syntax_error, 1, str_identifier, TAIL_CALL,
  POS(236, 7)
};

static TAB_NUM t_func_parse_more_identifier_characters[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 4, lambda_75, lambda_82, lambda_84, lambda_87, TAIL_CALL,
  POS(239, 3)
};

static TAB_NUM t_lambda_75[] = {
  5, // locals
  0, // parameters
  // text(1) >= 'a' && text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) >= 'a' && text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  var_std__less, 2, LOCAL(1), chr_97, 1, LOCAL(2),
  // text(1) >= 'a' && text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) >= 'a' && text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  var_std__and, 2, LOCAL(3), lambda_76, 1, LOCAL(4),
  // text(1) >= 'a' && text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  var_std__or, 2, LOCAL(4), lambda_77, 1, LOCAL(5),
  // 
  LET, 2, LOCAL(5), lambda_81, TAIL_CALL,
  POS(241, 8),
  POS(241, 8),
  POS(241, 8),
  POS(241, 8),
  POS(241, 8),
  POS(240, 7)
};

static TAB_NUM t_lambda_76[] = {
  3, // locals
  0, // parameters
  // text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  var_text, 1, num_1, 1, LOCAL(1),
  // z') || (text(1) >= 'A' && text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  var_std__less, 2, chr_122, LOCAL(1), 1, LOCAL(2),
  // z') || (text(1) >= 'A' && text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(241, 26),
  POS(241, 38),
  POS(241, 38),
  POS(241, 26)
};

static TAB_NUM t_lambda_77[] = {
  5, // locals
  0, // parameters
  // text(1) >= 'A' && text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) >= 'A' && text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  var_std__less, 2, LOCAL(1), chr_65, 1, LOCAL(2),
  // text(1) >= 'A' && text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) >= 'A' && text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  var_std__and, 2, LOCAL(3), lambda_78, 1, LOCAL(4),
  // text(1) >= 'A' && text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  var_std__or, 2, LOCAL(4), lambda_79, 1, LOCAL(5),
  // (text(1) >= 'A' && text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  LET, 1, LOCAL(5), TAIL_CALL,
  POS(241, 46),
  POS(241, 46),
  POS(241, 46),
  POS(241, 46),
  POS(241, 46),
  POS(241, 45)
};

static TAB_NUM t_lambda_78[] = {
  3, // locals
  0, // parameters
  // text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  var_text, 1, num_1, 1, LOCAL(1),
  // Z') || (text(1) >= '0' && text(1) <= '9')
  var_std__less, 2, chr_90, LOCAL(1), 1, LOCAL(2),
  // Z') || (text(1) >= '0' && text(1) <= '9')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(241, 64),
  POS(241, 76),
  POS(241, 76),
  POS(241, 64)
};

static TAB_NUM t_lambda_79[] = {
  4, // locals
  0, // parameters
  // text(1) >= '0' && text(1) <= '9')
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) >= '0' && text(1) <= '9')
  var_std__less, 2, LOCAL(1), chr_48, 1, LOCAL(2),
  // text(1) >= '0' && text(1) <= '9')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) >= '0' && text(1) <= '9')
  var_std__and, 2, LOCAL(3), lambda_80, 1, LOCAL(4),
  // text(1) >= '0' && text(1) <= '9')
  LET, 1, LOCAL(4), TAIL_CALL,
  POS(241, 84),
  POS(241, 84),
  POS(241, 84),
  POS(241, 84),
  POS(241, 84)
};

static TAB_NUM t_lambda_80[] = {
  3, // locals
  0, // parameters
  // text(1) <= '9')
  var_text, 1, num_1, 1, LOCAL(1),
  // 9')
  var_std__less, 2, chr_57, LOCAL(1), 1, LOCAL(2),
  // 9')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) <= '9')
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(241, 102),
  POS(241, 114),
  POS(241, 114),
  POS(241, 102)
};

static TAB_NUM t_lambda_81[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_more_identifier_characters
  func_parse_more_identifier_characters, 0, TAIL_CALL,
  POS(243, 9),
  POS(244, 9)
};

static TAB_NUM t_lambda_82[] = {
  2, // locals
  0, // parameters
  // text(1) == '_'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '_'
  var_std__equal, 2, LOCAL(1), chr_95, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_83, TAIL_CALL,
  POS(246, 7),
  POS(246, 7),
  POS(245, 7)
};

static TAB_NUM t_lambda_83[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_more_identifier_words
  func_parse_more_identifier_words, 0, TAIL_CALL,
  POS(248, 9),
  POS(249, 9)
};

static TAB_NUM t_lambda_84[] = {
  3, // locals
  0, // parameters
  // text(1) == ':'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == ':'
  var_std__equal, 2, LOCAL(1), chr_58, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_85, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_86, TAIL_CALL,
  POS(252, 9),
  POS(252, 9),
  POS(251, 9),
  POS(250, 7)
};

static TAB_NUM t_lambda_85[] = {
  2, // locals
  0, // parameters
  // text(2) == ':'
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == ':'
  var_std__equal, 2, LOCAL(1), chr_58, 1, LOCAL(2),
  // text(2) == ':'
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(253, 9),
  POS(253, 9),
  POS(253, 9)
};

static TAB_NUM t_lambda_86[] = {
  0, // locals
  0, // parameters
  // range &text 3 -1
  var_range, 3, var_text, num_3, minus_num_1, 1, var_text,
  // parse_name
  func_parse_name, 0, TAIL_CALL,
  POS(255, 9),
  POS(256, 9)
};

static TAB_NUM t_lambda_87[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_88, TAIL_CALL,
  POS(257, 7)
};

static TAB_NUM t_lambda_88[] = {
  4, // locals
  0, // parameters
  // length_of(str)-length_of(text))
  var_length_of, 1, var_str, 1, LOCAL(1),
  // length_of(text))
  var_length_of, 1, var_text, 1, LOCAL(2),
  // length_of(str)-length_of(text))
  var_std__minus, 2, LOCAL(1), LOCAL(2), 1, LOCAL(3),
  // range(str 1 length_of(str)-length_of(text))
  var_range, 3, var_str, num_1, LOCAL(3), 1, LOCAL(4),
  //  text range(str 1 length_of(str)-length_of(text))
  LET, 2, var_text, LOCAL(4), TAIL_CALL,
  POS(259, 27),
  POS(259, 42),
  POS(259, 27),
  POS(259, 15),
  POS(259, 9)
};

static TAB_NUM t_func_parse_more_identifier_words[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 2, lambda_89, lambda_96, TAIL_CALL,
  POS(262, 3)
};

static TAB_NUM t_lambda_89[] = {
  5, // locals
  0, // parameters
  // text(1) >= 'a' && text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) >= 'a' && text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  var_std__less, 2, LOCAL(1), chr_97, 1, LOCAL(2),
  // text(1) >= 'a' && text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) >= 'a' && text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  var_std__and, 2, LOCAL(3), lambda_90, 1, LOCAL(4),
  // text(1) >= 'a' && text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  var_std__or, 2, LOCAL(4), lambda_91, 1, LOCAL(5),
  // 
  LET, 2, LOCAL(5), lambda_95, TAIL_CALL,
  POS(264, 8),
  POS(264, 8),
  POS(264, 8),
  POS(264, 8),
  POS(264, 8),
  POS(263, 7)
};

static TAB_NUM t_lambda_90[] = {
  3, // locals
  0, // parameters
  // text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  var_text, 1, num_1, 1, LOCAL(1),
  // z') || (text(1) >= 'A' && text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  var_std__less, 2, chr_122, LOCAL(1), 1, LOCAL(2),
  // z') || (text(1) >= 'A' && text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(264, 26),
  POS(264, 38),
  POS(264, 38),
  POS(264, 26)
};

static TAB_NUM t_lambda_91[] = {
  5, // locals
  0, // parameters
  // text(1) >= 'A' && text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) >= 'A' && text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  var_std__less, 2, LOCAL(1), chr_65, 1, LOCAL(2),
  // text(1) >= 'A' && text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) >= 'A' && text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  var_std__and, 2, LOCAL(3), lambda_92, 1, LOCAL(4),
  // text(1) >= 'A' && text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  var_std__or, 2, LOCAL(4), lambda_93, 1, LOCAL(5),
  // (text(1) >= 'A' && text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  LET, 1, LOCAL(5), TAIL_CALL,
  POS(264, 46),
  POS(264, 46),
  POS(264, 46),
  POS(264, 46),
  POS(264, 46),
  POS(264, 45)
};

static TAB_NUM t_lambda_92[] = {
  3, // locals
  0, // parameters
  // text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  var_text, 1, num_1, 1, LOCAL(1),
  // Z') || (text(1) >= '0' && text(1) <= '9')
  var_std__less, 2, chr_90, LOCAL(1), 1, LOCAL(2),
  // Z') || (text(1) >= '0' && text(1) <= '9')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(264, 64),
  POS(264, 76),
  POS(264, 76),
  POS(264, 64)
};

static TAB_NUM t_lambda_93[] = {
  4, // locals
  0, // parameters
  // text(1) >= '0' && text(1) <= '9')
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) >= '0' && text(1) <= '9')
  var_std__less, 2, LOCAL(1), chr_48, 1, LOCAL(2),
  // text(1) >= '0' && text(1) <= '9')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) >= '0' && text(1) <= '9')
  var_std__and, 2, LOCAL(3), lambda_94, 1, LOCAL(4),
  // text(1) >= '0' && text(1) <= '9')
  LET, 1, LOCAL(4), TAIL_CALL,
  POS(264, 84),
  POS(264, 84),
  POS(264, 84),
  POS(264, 84),
  POS(264, 84)
};

static TAB_NUM t_lambda_94[] = {
  3, // locals
  0, // parameters
  // text(1) <= '9')
  var_text, 1, num_1, 1, LOCAL(1),
  // 9')
  var_std__less, 2, chr_57, LOCAL(1), 1, LOCAL(2),
  // 9')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) <= '9')
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(264, 102),
  POS(264, 114),
  POS(264, 114),
  POS(264, 102)
};

static TAB_NUM t_lambda_95[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_more_identifier_characters
  func_parse_more_identifier_characters, 0, TAIL_CALL,
  POS(266, 9),
  POS(267, 9)
};

static TAB_NUM t_lambda_96[] = {
  0, // locals
  0, // parameters
  //  true:
  LET, 2, var_true, lambda_97, TAIL_CALL,
  POS(268, 7)
};

static TAB_NUM t_lambda_97[] = {
  0, // locals
  0, // parameters
  // syntax_error "more identifier words"
  func_syntax_error, 1, str_more_identifier, TAIL_CALL,
  POS(269, 7)
};

static TAB_NUM t_func_parse_versioned_identifier[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 2, lambda_98, lambda_103, TAIL_CALL,
  POS(272, 3)
};

static TAB_NUM t_lambda_98[] = {
  5, // locals
  0, // parameters
  // text(1) >= 'a' && text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z')
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) >= 'a' && text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z')
  var_std__less, 2, LOCAL(1), chr_97, 1, LOCAL(2),
  // text(1) >= 'a' && text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) >= 'a' && text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z')
  var_std__and, 2, LOCAL(3), lambda_99, 1, LOCAL(4),
  // text(1) >= 'a' && text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z')
  var_std__or, 2, LOCAL(4), lambda_100, 1, LOCAL(5),
  // 
  LET, 2, LOCAL(5), lambda_102, TAIL_CALL,
  POS(274, 8),
  POS(274, 8),
  POS(274, 8),
  POS(274, 8),
  POS(274, 8),
  POS(273, 7)
};

static TAB_NUM t_lambda_99[] = {
  3, // locals
  0, // parameters
  // text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z')
  var_text, 1, num_1, 1, LOCAL(1),
  // z') || (text(1) >= 'A' && text(1) <= 'Z')
  var_std__less, 2, chr_122, LOCAL(1), 1, LOCAL(2),
  // z') || (text(1) >= 'A' && text(1) <= 'Z')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z')
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(274, 26),
  POS(274, 38),
  POS(274, 38),
  POS(274, 26)
};

static TAB_NUM t_lambda_100[] = {
  4, // locals
  0, // parameters
  // text(1) >= 'A' && text(1) <= 'Z')
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) >= 'A' && text(1) <= 'Z')
  var_std__less, 2, LOCAL(1), chr_65, 1, LOCAL(2),
  // text(1) >= 'A' && text(1) <= 'Z')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) >= 'A' && text(1) <= 'Z')
  var_std__and, 2, LOCAL(3), lambda_101, 1, LOCAL(4),
  // text(1) >= 'A' && text(1) <= 'Z')
  LET, 1, LOCAL(4), TAIL_CALL,
  POS(274, 46),
  POS(274, 46),
  POS(274, 46),
  POS(274, 46),
  POS(274, 46)
};

static TAB_NUM t_lambda_101[] = {
  3, // locals
  0, // parameters
  // text(1) <= 'Z')
  var_text, 1, num_1, 1, LOCAL(1),
  // Z')
  var_std__less, 2, chr_90, LOCAL(1), 1, LOCAL(2),
  // Z')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) <= 'Z')
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(274, 64),
  POS(274, 76),
  POS(274, 76),
  POS(274, 64)
};

static TAB_NUM t_lambda_102[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_more_versioned_identifier_characters
  func_parse_more_versioned_identifier_characters, 0, TAIL_CALL,
  POS(276, 9),
  POS(277, 9)
};

static TAB_NUM t_lambda_103[] = {
  0, // locals
  0, // parameters
  //  true:
  LET, 2, var_true, lambda_104, TAIL_CALL,
  POS(278, 7)
};

static TAB_NUM t_lambda_104[] = {
  0, // locals
  0, // parameters
  // syntax_error "versioned identifier"
  func_syntax_error, 1, str_versioned_identi, TAIL_CALL,
  POS(279, 7)
};

static TAB_NUM t_func_parse_more_versioned_identifier_characters[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 5, lambda_105, lambda_112, lambda_114, lambda_117, lambda_119, TAIL_CALL,
  POS(282, 3)
};

static TAB_NUM t_lambda_105[] = {
  5, // locals
  0, // parameters
  // text(1) >= 'a' && text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) >= 'a' && text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  var_std__less, 2, LOCAL(1), chr_97, 1, LOCAL(2),
  // text(1) >= 'a' && text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) >= 'a' && text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  var_std__and, 2, LOCAL(3), lambda_106, 1, LOCAL(4),
  // text(1) >= 'a' && text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  var_std__or, 2, LOCAL(4), lambda_107, 1, LOCAL(5),
  // 
  LET, 2, LOCAL(5), lambda_111, TAIL_CALL,
  POS(284, 8),
  POS(284, 8),
  POS(284, 8),
  POS(284, 8),
  POS(284, 8),
  POS(283, 7)
};

static TAB_NUM t_lambda_106[] = {
  3, // locals
  0, // parameters
  // text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  var_text, 1, num_1, 1, LOCAL(1),
  // z') || (text(1) >= 'A' && text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  var_std__less, 2, chr_122, LOCAL(1), 1, LOCAL(2),
  // z') || (text(1) >= 'A' && text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(284, 26),
  POS(284, 38),
  POS(284, 38),
  POS(284, 26)
};

static TAB_NUM t_lambda_107[] = {
  5, // locals
  0, // parameters
  // text(1) >= 'A' && text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) >= 'A' && text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  var_std__less, 2, LOCAL(1), chr_65, 1, LOCAL(2),
  // text(1) >= 'A' && text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) >= 'A' && text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  var_std__and, 2, LOCAL(3), lambda_108, 1, LOCAL(4),
  // text(1) >= 'A' && text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  var_std__or, 2, LOCAL(4), lambda_109, 1, LOCAL(5),
  // (text(1) >= 'A' && text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  LET, 1, LOCAL(5), TAIL_CALL,
  POS(284, 46),
  POS(284, 46),
  POS(284, 46),
  POS(284, 46),
  POS(284, 46),
  POS(284, 45)
};

static TAB_NUM t_lambda_108[] = {
  3, // locals
  0, // parameters
  // text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  var_text, 1, num_1, 1, LOCAL(1),
  // Z') || (text(1) >= '0' && text(1) <= '9')
  var_std__less, 2, chr_90, LOCAL(1), 1, LOCAL(2),
  // Z') || (text(1) >= '0' && text(1) <= '9')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(284, 64),
  POS(284, 76),
  POS(284, 76),
  POS(284, 64)
};

static TAB_NUM t_lambda_109[] = {
  4, // locals
  0, // parameters
  // text(1) >= '0' && text(1) <= '9')
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) >= '0' && text(1) <= '9')
  var_std__less, 2, LOCAL(1), chr_48, 1, LOCAL(2),
  // text(1) >= '0' && text(1) <= '9')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) >= '0' && text(1) <= '9')
  var_std__and, 2, LOCAL(3), lambda_110, 1, LOCAL(4),
  // text(1) >= '0' && text(1) <= '9')
  LET, 1, LOCAL(4), TAIL_CALL,
  POS(284, 84),
  POS(284, 84),
  POS(284, 84),
  POS(284, 84),
  POS(284, 84)
};

static TAB_NUM t_lambda_110[] = {
  3, // locals
  0, // parameters
  // text(1) <= '9')
  var_text, 1, num_1, 1, LOCAL(1),
  // 9')
  var_std__less, 2, chr_57, LOCAL(1), 1, LOCAL(2),
  // 9')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) <= '9')
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(284, 102),
  POS(284, 114),
  POS(284, 114),
  POS(284, 102)
};

static TAB_NUM t_lambda_111[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_more_versioned_identifier_characters
  func_parse_more_versioned_identifier_characters, 0, TAIL_CALL,
  POS(286, 9),
  POS(287, 9)
};

static TAB_NUM t_lambda_112[] = {
  2, // locals
  0, // parameters
  // text(1) == '_'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '_'
  var_std__equal, 2, LOCAL(1), chr_95, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_113, TAIL_CALL,
  POS(289, 7),
  POS(289, 7),
  POS(288, 7)
};

static TAB_NUM t_lambda_113[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_more_versioned_identifier_words
  func_parse_more_versioned_identifier_words, 0, TAIL_CALL,
  POS(291, 9),
  POS(292, 9)
};

static TAB_NUM t_lambda_114[] = {
  3, // locals
  0, // parameters
  // text(1) == ':'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == ':'
  var_std__equal, 2, LOCAL(1), chr_58, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_115, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_116, TAIL_CALL,
  POS(295, 9),
  POS(295, 9),
  POS(294, 9),
  POS(293, 7)
};

static TAB_NUM t_lambda_115[] = {
  2, // locals
  0, // parameters
  // text(2) == ':'
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == ':'
  var_std__equal, 2, LOCAL(1), chr_58, 1, LOCAL(2),
  // text(2) == ':'
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(296, 9),
  POS(296, 9),
  POS(296, 9)
};

static TAB_NUM t_lambda_116[] = {
  0, // locals
  0, // parameters
  // range &text 3 -1
  var_range, 3, var_text, num_3, minus_num_1, 1, var_text,
  // parse_name
  func_parse_name, 0, TAIL_CALL,
  POS(298, 9),
  POS(299, 9)
};

static TAB_NUM t_lambda_117[] = {
  2, // locals
  0, // parameters
  // text(1) == '-'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '-'
  var_std__equal, 2, LOCAL(1), chr_45, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_118, TAIL_CALL,
  POS(301, 7),
  POS(301, 7),
  POS(300, 7)
};

static TAB_NUM t_lambda_118[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_namespace_description
  func_parse_namespace_description, 0, TAIL_CALL,
  POS(303, 9),
  POS(304, 9)
};

static TAB_NUM t_lambda_119[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_120, TAIL_CALL,
  POS(305, 7)
};

static TAB_NUM t_lambda_120[] = {
  4, // locals
  0, // parameters
  // length_of(str)-length_of(text))
  var_length_of, 1, var_str, 1, LOCAL(1),
  // length_of(text))
  var_length_of, 1, var_text, 1, LOCAL(2),
  // length_of(str)-length_of(text))
  var_std__minus, 2, LOCAL(1), LOCAL(2), 1, LOCAL(3),
  // range(str 1 length_of(str)-length_of(text))
  var_range, 3, var_str, num_1, LOCAL(3), 1, LOCAL(4),
  //  text range(str 1 length_of(str)-length_of(text))
  LET, 2, var_text, LOCAL(4), TAIL_CALL,
  POS(307, 27),
  POS(307, 42),
  POS(307, 27),
  POS(307, 15),
  POS(307, 9)
};

static TAB_NUM t_func_parse_more_versioned_identifier_words[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 2, lambda_121, lambda_128, TAIL_CALL,
  POS(310, 3)
};

static TAB_NUM t_lambda_121[] = {
  5, // locals
  0, // parameters
  // text(1) >= 'a' && text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) >= 'a' && text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  var_std__less, 2, LOCAL(1), chr_97, 1, LOCAL(2),
  // text(1) >= 'a' && text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) >= 'a' && text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  var_std__and, 2, LOCAL(3), lambda_122, 1, LOCAL(4),
  // text(1) >= 'a' && text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  var_std__or, 2, LOCAL(4), lambda_123, 1, LOCAL(5),
  // 
  LET, 2, LOCAL(5), lambda_127, TAIL_CALL,
  POS(312, 8),
  POS(312, 8),
  POS(312, 8),
  POS(312, 8),
  POS(312, 8),
  POS(311, 7)
};

static TAB_NUM t_lambda_122[] = {
  3, // locals
  0, // parameters
  // text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  var_text, 1, num_1, 1, LOCAL(1),
  // z') || (text(1) >= 'A' && text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  var_std__less, 2, chr_122, LOCAL(1), 1, LOCAL(2),
  // z') || (text(1) >= 'A' && text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(312, 26),
  POS(312, 38),
  POS(312, 38),
  POS(312, 26)
};

static TAB_NUM t_lambda_123[] = {
  5, // locals
  0, // parameters
  // text(1) >= 'A' && text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) >= 'A' && text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  var_std__less, 2, LOCAL(1), chr_65, 1, LOCAL(2),
  // text(1) >= 'A' && text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) >= 'A' && text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  var_std__and, 2, LOCAL(3), lambda_124, 1, LOCAL(4),
  // text(1) >= 'A' && text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  var_std__or, 2, LOCAL(4), lambda_125, 1, LOCAL(5),
  // (text(1) >= 'A' && text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  LET, 1, LOCAL(5), TAIL_CALL,
  POS(312, 46),
  POS(312, 46),
  POS(312, 46),
  POS(312, 46),
  POS(312, 46),
  POS(312, 45)
};

static TAB_NUM t_lambda_124[] = {
  3, // locals
  0, // parameters
  // text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  var_text, 1, num_1, 1, LOCAL(1),
  // Z') || (text(1) >= '0' && text(1) <= '9')
  var_std__less, 2, chr_90, LOCAL(1), 1, LOCAL(2),
  // Z') || (text(1) >= '0' && text(1) <= '9')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(312, 64),
  POS(312, 76),
  POS(312, 76),
  POS(312, 64)
};

static TAB_NUM t_lambda_125[] = {
  4, // locals
  0, // parameters
  // text(1) >= '0' && text(1) <= '9')
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) >= '0' && text(1) <= '9')
  var_std__less, 2, LOCAL(1), chr_48, 1, LOCAL(2),
  // text(1) >= '0' && text(1) <= '9')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) >= '0' && text(1) <= '9')
  var_std__and, 2, LOCAL(3), lambda_126, 1, LOCAL(4),
  // text(1) >= '0' && text(1) <= '9')
  LET, 1, LOCAL(4), TAIL_CALL,
  POS(312, 84),
  POS(312, 84),
  POS(312, 84),
  POS(312, 84),
  POS(312, 84)
};

static TAB_NUM t_lambda_126[] = {
  3, // locals
  0, // parameters
  // text(1) <= '9')
  var_text, 1, num_1, 1, LOCAL(1),
  // 9')
  var_std__less, 2, chr_57, LOCAL(1), 1, LOCAL(2),
  // 9')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) <= '9')
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(312, 102),
  POS(312, 114),
  POS(312, 114),
  POS(312, 102)
};

static TAB_NUM t_lambda_127[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_more_versioned_identifier_characters
  func_parse_more_versioned_identifier_characters, 0, TAIL_CALL,
  POS(314, 9),
  POS(315, 9)
};

static TAB_NUM t_lambda_128[] = {
  0, // locals
  0, // parameters
  //  true:
  LET, 2, var_true, lambda_129, TAIL_CALL,
  POS(316, 7)
};

static TAB_NUM t_lambda_129[] = {
  0, // locals
  0, // parameters
  // syntax_error "more versioned identifier words"
  func_syntax_error, 1, str_more_versioned_i, TAIL_CALL,
  POS(317, 7)
};

static TAB_NUM t_func_parse_namespace_description[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 3, lambda_130, lambda_133, lambda_144, TAIL_CALL,
  POS(320, 3)
};

static TAB_NUM t_lambda_130[] = {
  4, // locals
  0, // parameters
  // text(1) >= '1' && text(1) <= '9')
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) >= '1' && text(1) <= '9')
  var_std__less, 2, LOCAL(1), chr_49, 1, LOCAL(2),
  // text(1) >= '1' && text(1) <= '9')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) >= '1' && text(1) <= '9')
  var_std__and, 2, LOCAL(3), lambda_131, 1, LOCAL(4),
  // 
  LET, 2, LOCAL(4), lambda_132, TAIL_CALL,
  POS(322, 8),
  POS(322, 8),
  POS(322, 8),
  POS(322, 8),
  POS(321, 7)
};

static TAB_NUM t_lambda_131[] = {
  3, // locals
  0, // parameters
  // text(1) <= '9')
  var_text, 1, num_1, 1, LOCAL(1),
  // 9')
  var_std__less, 2, chr_57, LOCAL(1), 1, LOCAL(2),
  // 9')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) <= '9')
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(322, 26),
  POS(322, 38),
  POS(322, 38),
  POS(322, 26)
};

static TAB_NUM t_lambda_132[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_more_major_digits_or_dot
  func_parse_more_major_digits_or_dot, 0, TAIL_CALL,
  POS(324, 9),
  POS(325, 9)
};

static TAB_NUM t_lambda_133[] = {
  3, // locals
  0, // parameters
  // text(1) == 'u'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == 'u'
  var_std__equal, 2, LOCAL(1), chr_117, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_134, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_143, TAIL_CALL,
  POS(328, 9),
  POS(328, 9),
  POS(327, 9),
  POS(326, 7)
};

static TAB_NUM t_lambda_134[] = {
  3, // locals
  0, // parameters
  // text(2) == 'n'
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == 'n'
  var_std__equal, 2, LOCAL(1), chr_110, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_135, 1, LOCAL(3),
  // text(2) == 'n'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(329, 9),
  POS(329, 9),
  POS(327, 9),
  POS(329, 9)
};

static TAB_NUM t_lambda_135[] = {
  3, // locals
  0, // parameters
  // text(3) == 's'
  var_text, 1, num_3, 1, LOCAL(1),
  // text(3) == 's'
  var_std__equal, 2, LOCAL(1), chr_115, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_136, 1, LOCAL(3),
  // text(3) == 's'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(330, 9),
  POS(330, 9),
  POS(327, 9),
  POS(330, 9)
};

static TAB_NUM t_lambda_136[] = {
  3, // locals
  0, // parameters
  // text(4) == 't'
  var_text, 1, num_4, 1, LOCAL(1),
  // text(4) == 't'
  var_std__equal, 2, LOCAL(1), chr_116, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_137, 1, LOCAL(3),
  // text(4) == 't'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(331, 9),
  POS(331, 9),
  POS(327, 9),
  POS(331, 9)
};

static TAB_NUM t_lambda_137[] = {
  3, // locals
  0, // parameters
  // text(5) == 'a'
  var_text, 1, num_5, 1, LOCAL(1),
  // text(5) == 'a'
  var_std__equal, 2, LOCAL(1), chr_97, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_138, 1, LOCAL(3),
  // text(5) == 'a'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(332, 9),
  POS(332, 9),
  POS(327, 9),
  POS(332, 9)
};

static TAB_NUM t_lambda_138[] = {
  3, // locals
  0, // parameters
  // text(6) == 'b'
  var_text, 1, num_6, 1, LOCAL(1),
  // text(6) == 'b'
  var_std__equal, 2, LOCAL(1), chr_98, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_139, 1, LOCAL(3),
  // text(6) == 'b'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(333, 9),
  POS(333, 9),
  POS(327, 9),
  POS(333, 9)
};

static TAB_NUM t_lambda_139[] = {
  3, // locals
  0, // parameters
  // text(7) == 'l'
  var_text, 1, num_7, 1, LOCAL(1),
  // text(7) == 'l'
  var_std__equal, 2, LOCAL(1), chr_108, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_140, 1, LOCAL(3),
  // text(7) == 'l'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(334, 9),
  POS(334, 9),
  POS(327, 9),
  POS(334, 9)
};

static TAB_NUM t_lambda_140[] = {
  3, // locals
  0, // parameters
  // text(8) == 'e'
  var_text, 1, num_8, 1, LOCAL(1),
  // text(8) == 'e'
  var_std__equal, 2, LOCAL(1), chr_101, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_141, 1, LOCAL(3),
  // text(8) == 'e'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(335, 9),
  POS(335, 9),
  POS(327, 9),
  POS(335, 9)
};

static TAB_NUM t_lambda_141[] = {
  3, // locals
  0, // parameters
  // text(9) == ':'
  var_text, 1, num_9, 1, LOCAL(1),
  // text(9) == ':'
  var_std__equal, 2, LOCAL(1), chr_58, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_142, 1, LOCAL(3),
  // text(9) == ':'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(336, 9),
  POS(336, 9),
  POS(327, 9),
  POS(336, 9)
};

static TAB_NUM t_lambda_142[] = {
  2, // locals
  0, // parameters
  // text(10) == ':'
  var_text, 1, num_10, 1, LOCAL(1),
  // text(10) == ':'
  var_std__equal, 2, LOCAL(1), chr_58, 1, LOCAL(2),
  // text(10) == ':'
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(337, 9),
  POS(337, 9),
  POS(337, 9)
};

static TAB_NUM t_lambda_143[] = {
  0, // locals
  0, // parameters
  // range &text 11 -1
  var_range, 3, var_text, num_11, minus_num_1, 1, var_text,
  // parse_name
  func_parse_name, 0, TAIL_CALL,
  POS(339, 9),
  POS(340, 9)
};

static TAB_NUM t_lambda_144[] = {
  0, // locals
  0, // parameters
  //  true:
  LET, 2, var_true, lambda_145, TAIL_CALL,
  POS(341, 7)
};

static TAB_NUM t_lambda_145[] = {
  0, // locals
  0, // parameters
  // syntax_error "namespace description"
  func_syntax_error, 1, str_namespace_descri, TAIL_CALL,
  POS(342, 7)
};

static TAB_NUM t_func_parse_more_major_digits_or_dot[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 3, lambda_146, lambda_149, lambda_153, TAIL_CALL,
  POS(345, 3)
};

static TAB_NUM t_lambda_146[] = {
  4, // locals
  0, // parameters
  // text(1) >= '0' && text(1) <= '9')
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) >= '0' && text(1) <= '9')
  var_std__less, 2, LOCAL(1), chr_48, 1, LOCAL(2),
  // text(1) >= '0' && text(1) <= '9')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) >= '0' && text(1) <= '9')
  var_std__and, 2, LOCAL(3), lambda_147, 1, LOCAL(4),
  // 
  LET, 2, LOCAL(4), lambda_148, TAIL_CALL,
  POS(347, 8),
  POS(347, 8),
  POS(347, 8),
  POS(347, 8),
  POS(346, 7)
};

static TAB_NUM t_lambda_147[] = {
  3, // locals
  0, // parameters
  // text(1) <= '9')
  var_text, 1, num_1, 1, LOCAL(1),
  // 9')
  var_std__less, 2, chr_57, LOCAL(1), 1, LOCAL(2),
  // 9')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) <= '9')
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(347, 26),
  POS(347, 38),
  POS(347, 38),
  POS(347, 26)
};

static TAB_NUM t_lambda_148[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_more_major_digits_or_dot
  func_parse_more_major_digits_or_dot, 0, TAIL_CALL,
  POS(349, 9),
  POS(350, 9)
};

static TAB_NUM t_lambda_149[] = {
  3, // locals
  0, // parameters
  // text(1) == '.'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '.'
  var_std__equal, 2, LOCAL(1), chr_46, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_150, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_152, TAIL_CALL,
  POS(353, 9),
  POS(353, 9),
  POS(352, 9),
  POS(351, 7)
};

static TAB_NUM t_lambda_150[] = {
  4, // locals
  0, // parameters
  // text(2) >= '0' && text(2) <= '9')
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) >= '0' && text(2) <= '9')
  var_std__less, 2, LOCAL(1), chr_48, 1, LOCAL(2),
  // text(2) >= '0' && text(2) <= '9')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(2) >= '0' && text(2) <= '9')
  var_std__and, 2, LOCAL(3), lambda_151, 1, LOCAL(4),
  // text(2) >= '0' && text(2) <= '9')
  LET, 1, LOCAL(4), TAIL_CALL,
  POS(354, 10),
  POS(354, 10),
  POS(354, 10),
  POS(354, 10),
  POS(354, 10)
};

static TAB_NUM t_lambda_151[] = {
  3, // locals
  0, // parameters
  // text(2) <= '9')
  var_text, 1, num_2, 1, LOCAL(1),
  // 9')
  var_std__less, 2, chr_57, LOCAL(1), 1, LOCAL(2),
  // 9')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(2) <= '9')
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(354, 28),
  POS(354, 40),
  POS(354, 40),
  POS(354, 28)
};

static TAB_NUM t_lambda_152[] = {
  0, // locals
  0, // parameters
  // range &text 3 -1
  var_range, 3, var_text, num_3, minus_num_1, 1, var_text,
  // parse_more_minor_digits
  func_parse_more_minor_digits, 0, TAIL_CALL,
  POS(356, 9),
  POS(357, 9)
};

static TAB_NUM t_lambda_153[] = {
  0, // locals
  0, // parameters
  //  true:
  LET, 2, var_true, lambda_154, TAIL_CALL,
  POS(358, 7)
};

static TAB_NUM t_lambda_154[] = {
  0, // locals
  0, // parameters
  // syntax_error "more major digits or dot"
  func_syntax_error, 1, str_more_major_digit, TAIL_CALL,
  POS(359, 7)
};

static TAB_NUM t_func_parse_more_minor_digits[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 3, lambda_155, lambda_158, lambda_161, TAIL_CALL,
  POS(362, 3)
};

static TAB_NUM t_lambda_155[] = {
  4, // locals
  0, // parameters
  // text(1) >= '0' && text(1) <= '9')
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) >= '0' && text(1) <= '9')
  var_std__less, 2, LOCAL(1), chr_48, 1, LOCAL(2),
  // text(1) >= '0' && text(1) <= '9')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) >= '0' && text(1) <= '9')
  var_std__and, 2, LOCAL(3), lambda_156, 1, LOCAL(4),
  // 
  LET, 2, LOCAL(4), lambda_157, TAIL_CALL,
  POS(364, 8),
  POS(364, 8),
  POS(364, 8),
  POS(364, 8),
  POS(363, 7)
};

static TAB_NUM t_lambda_156[] = {
  3, // locals
  0, // parameters
  // text(1) <= '9')
  var_text, 1, num_1, 1, LOCAL(1),
  // 9')
  var_std__less, 2, chr_57, LOCAL(1), 1, LOCAL(2),
  // 9')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) <= '9')
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(364, 26),
  POS(364, 38),
  POS(364, 38),
  POS(364, 26)
};

static TAB_NUM t_lambda_157[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_more_minor_digits
  func_parse_more_minor_digits, 0, TAIL_CALL,
  POS(366, 9),
  POS(367, 9)
};

static TAB_NUM t_lambda_158[] = {
  3, // locals
  0, // parameters
  // text(1) == ':'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == ':'
  var_std__equal, 2, LOCAL(1), chr_58, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_159, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_160, TAIL_CALL,
  POS(370, 9),
  POS(370, 9),
  POS(369, 9),
  POS(368, 7)
};

static TAB_NUM t_lambda_159[] = {
  2, // locals
  0, // parameters
  // text(2) == ':'
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == ':'
  var_std__equal, 2, LOCAL(1), chr_58, 1, LOCAL(2),
  // text(2) == ':'
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(371, 9),
  POS(371, 9),
  POS(371, 9)
};

static TAB_NUM t_lambda_160[] = {
  0, // locals
  0, // parameters
  // range &text 3 -1
  var_range, 3, var_text, num_3, minus_num_1, 1, var_text,
  // parse_name
  func_parse_name, 0, TAIL_CALL,
  POS(373, 9),
  POS(374, 9)
};

static TAB_NUM t_lambda_161[] = {
  0, // locals
  0, // parameters
  //  true:
  LET, 2, var_true, lambda_162, TAIL_CALL,
  POS(375, 7)
};

static TAB_NUM t_lambda_162[] = {
  0, // locals
  0, // parameters
  // syntax_error "more minor digits"
  func_syntax_error, 1, str_more_minor_digit, TAIL_CALL,
  POS(376, 7)
};

static TAB_NUM t_func_parse_optional_version[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 2, lambda_163, lambda_165, TAIL_CALL,
  POS(379, 3)
};

static TAB_NUM t_lambda_163[] = {
  2, // locals
  0, // parameters
  // text(1) == '-'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '-'
  var_std__equal, 2, LOCAL(1), chr_45, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_164, TAIL_CALL,
  POS(381, 7),
  POS(381, 7),
  POS(380, 7)
};

static TAB_NUM t_lambda_164[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_version
  func_parse_version, 0, TAIL_CALL,
  POS(383, 9),
  POS(384, 9)
};

static TAB_NUM t_lambda_165[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_166, TAIL_CALL,
  POS(385, 7)
};

static TAB_NUM t_lambda_166[] = {
  0, // locals
  0, // parameters
  //  text undefined
  LET, 2, var_text, var_undefined, TAIL_CALL,
  POS(387, 9)
};

static TAB_NUM t_func_parse_parameters_or_statement[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 4, lambda_167, lambda_169, lambda_171, lambda_173, TAIL_CALL,
  POS(390, 3)
};

static TAB_NUM t_lambda_167[] = {
  2, // locals
  0, // parameters
  // text(1) == '('
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '('
  var_std__equal, 2, LOCAL(1), chr_40, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_168, TAIL_CALL,
  POS(392, 7),
  POS(392, 7),
  POS(391, 7)
};

static TAB_NUM t_lambda_168[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_open_parameters_without_prefix
  func_parse_open_parameters_without_prefix, 0, TAIL_CALL,
  POS(394, 9),
  POS(395, 9)
};

static TAB_NUM t_lambda_169[] = {
  2, // locals
  0, // parameters
  // text(1) == ')'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == ')'
  var_std__equal, 2, LOCAL(1), chr_41, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_170, TAIL_CALL,
  POS(397, 7),
  POS(397, 7),
  POS(396, 7)
};

static TAB_NUM t_lambda_170[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_close_parameters_without_prefix
  func_parse_close_parameters_without_prefix, 0, TAIL_CALL,
  POS(399, 9),
  POS(400, 9)
};

static TAB_NUM t_lambda_171[] = {
  2, // locals
  0, // parameters
  // text(1) == '#'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '#'
  var_std__equal, 2, LOCAL(1), chr_35, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_172, TAIL_CALL,
  POS(402, 7),
  POS(402, 7),
  POS(401, 7)
};

static TAB_NUM t_lambda_172[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_multiline_remark_without_prefix
  func_parse_multiline_remark_without_prefix, 0, TAIL_CALL,
  POS(404, 9),
  POS(405, 9)
};

static TAB_NUM t_lambda_173[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_174, TAIL_CALL,
  POS(406, 7)
};

static TAB_NUM t_lambda_174[] = {
  0, // locals
  0, // parameters
  // !expected "parameters or statement"
  LET, 1, str_parameters_or_st, 1, var_expected,
  // !at text
  LET, 1, var_text, 1, var_at,
  // parse_statement
  func_parse_statement, 0, TAIL_CALL,
  POS(409, 9),
  POS(410, 9),
  POS(411, 9)
};

static TAB_NUM t_func_parse_statement[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_414_1_position,
  // parse_head !text $head
  func_parse_head, 0, 2, var_text, var_415_18_head,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_text_is_defined, lambda_179, TAIL_CALL,
  POS(414, 3),
  POS(415, 3),
  POS(417, 10),
  POS(416, 3)
};

static TAB_NUM t_lambda_text_is_defined[] = {
  1, // locals
  0, // parameters
  // parse_statement_arguments !text $statement_arguments
  func_parse_statement_arguments, 0, 2, var_text, var_418_33_statement_arguments,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_175, lambda_178, TAIL_CALL,
  POS(418, 7),
  POS(420, 14),
  POS(419, 7)
};

static TAB_NUM t_lambda_175[] = {
  1, // locals
  0, // parameters
  // is_defined
  var_is_defined, 1, var_418_33_statement_arguments, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_176, lambda_177, TAIL_CALL,
  POS(423, 33),
  POS(422, 11)
};

static TAB_NUM t_lambda_176[] = {
  1, // locals
  0, // parameters
  // funky_types::statement
  LET, -4, var_funky_types__statement, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_414_1_position, var_funky__head_of, var_415_18_head, var_funky__arguments_of, var_418_33_statement_arguments, LOCAL(1),
  // 
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(426, 15),
  POS(424, 15)
};

static TAB_NUM t_lambda_177[] = {
  0, // locals
  0, // parameters
  //  text head
  LET, 2, var_text, var_415_18_head, TAIL_CALL,
  POS(431, 15)
};

static TAB_NUM t_lambda_178[] = {
  0, // locals
  0, // parameters
  //  undefined statement_arguments
  LET, 2, var_undefined, var_418_33_statement_arguments, TAIL_CALL,
  POS(432, 11)
};

static TAB_NUM t_lambda_179[] = {
  0, // locals
  0, // parameters
  //  undefined head
  LET, 2, var_undefined, var_415_18_head, TAIL_CALL,
  POS(433, 7)
};

static TAB_NUM t_func_parse_head[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 5, lambda_180, lambda_183, lambda_185, lambda_187, lambda_190, TAIL_CALL,
  POS(436, 3)
};

static TAB_NUM t_lambda_180[] = {
  3, // locals
  0, // parameters
  // text(1) == '$'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '$'
  var_std__equal, 2, LOCAL(1), chr_36, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_181, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_182, TAIL_CALL,
  POS(439, 9),
  POS(439, 9),
  POS(438, 9),
  POS(437, 7)
};

static TAB_NUM t_lambda_181[] = {
  2, // locals
  0, // parameters
  // text(2) == '_'
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '_'
  var_std__equal, 2, LOCAL(1), chr_95, 1, LOCAL(2),
  // text(2) == '_'
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(440, 9),
  POS(440, 9),
  POS(440, 9)
};

static TAB_NUM t_lambda_182[] = {
  0, // locals
  0, // parameters
  // range &text 3 -1
  var_range, 3, var_text, num_3, minus_num_1, 1, var_text,
  // parse_dummy_definition_without_prefix
  func_parse_dummy_definition_without_prefix, 0, TAIL_CALL,
  POS(442, 9),
  POS(443, 9)
};

static TAB_NUM t_lambda_183[] = {
  2, // locals
  0, // parameters
  // text(1) == '$'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '$'
  var_std__equal, 2, LOCAL(1), chr_36, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_184, TAIL_CALL,
  POS(445, 7),
  POS(445, 7),
  POS(444, 7)
};

static TAB_NUM t_lambda_184[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_definition_without_prefix
  func_parse_definition_without_prefix, 0, TAIL_CALL,
  POS(447, 9),
  POS(448, 9)
};

static TAB_NUM t_lambda_185[] = {
  2, // locals
  0, // parameters
  // text(1) == '!'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '!'
  var_std__equal, 2, LOCAL(1), chr_33, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_186, TAIL_CALL,
  POS(450, 7),
  POS(450, 7),
  POS(449, 7)
};

static TAB_NUM t_lambda_186[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_redefinition_without_prefix
  func_parse_redefinition_without_prefix, 0, TAIL_CALL,
  POS(452, 9),
  POS(453, 9)
};

static TAB_NUM t_lambda_187[] = {
  3, // locals
  0, // parameters
  // text(1) == '-'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '-'
  var_std__equal, 2, LOCAL(1), chr_45, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_188, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_189, TAIL_CALL,
  POS(456, 9),
  POS(456, 9),
  POS(455, 9),
  POS(454, 7)
};

static TAB_NUM t_lambda_188[] = {
  2, // locals
  0, // parameters
  // text(2) == '>'
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '>'
  var_std__equal, 2, LOCAL(1), chr_62, 1, LOCAL(2),
  // text(2) == '>'
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(457, 9),
  POS(457, 9),
  POS(457, 9)
};

static TAB_NUM t_lambda_189[] = {
  0, // locals
  0, // parameters
  // range &text 3 -1
  var_range, 3, var_text, num_3, minus_num_1, 1, var_text,
  // parse_return_without_prefix
  func_parse_return_without_prefix, 0, TAIL_CALL,
  POS(459, 9),
  POS(460, 9)
};

static TAB_NUM t_lambda_190[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_191, TAIL_CALL,
  POS(461, 7)
};

static TAB_NUM t_lambda_191[] = {
  0, // locals
  0, // parameters
  // !expected "head"
  LET, 1, str_head, 1, var_expected,
  // !at text
  LET, 1, var_text, 1, var_at,
  // parse_inline_functor
  func_parse_inline_functor, 0, TAIL_CALL,
  POS(464, 9),
  POS(465, 9),
  POS(466, 9)
};

static TAB_NUM t_func_parse_statement_arguments[] = {
  2, // locals
  0, // parameters
  // cond $rest $expr
  var_cond, 7, lambda_192, lambda_195, lambda_199, lambda_204, lambda_207, lambda_209, lambda_211, 2, LOCAL(2), var_469_12_expr,
  // cond
  var_cond, 3, lambda_213, lambda_215, lambda_217, 1, LOCAL(1),
  // ->
  LET, 2, LOCAL(2), LOCAL(1), TAIL_CALL,
  POS(469, 3),
  POS(519, 5),
  POS(517, 3)
};

static TAB_NUM t_lambda_192[] = {
  3, // locals
  0, // parameters
  // text(1) == ' '
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_193, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_194, TAIL_CALL,
  POS(472, 9),
  POS(472, 9),
  POS(471, 9),
  POS(470, 7)
};

static TAB_NUM t_lambda_193[] = {
  2, // locals
  0, // parameters
  // text(2) == '.'
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '.'
  var_std__equal, 2, LOCAL(1), chr_46, 1, LOCAL(2),
  // text(2) == '.'
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(473, 9),
  POS(473, 9),
  POS(473, 9)
};

static TAB_NUM t_lambda_194[] = {
  0, // locals
  0, // parameters
  // range &text 3 -1
  var_range, 3, var_text, num_3, minus_num_1, 1, var_text,
  // parse_unique_without_prefix
  func_parse_unique_without_prefix, 0, TAIL_CALL,
  POS(475, 9),
  POS(476, 9)
};

static TAB_NUM t_lambda_195[] = {
  3, // locals
  0, // parameters
  // text(1) == ' '
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_196, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_198, TAIL_CALL,
  POS(479, 9),
  POS(479, 9),
  POS(478, 9),
  POS(477, 7)
};

static TAB_NUM t_lambda_196[] = {
  3, // locals
  0, // parameters
  // text(2) == '('
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '('
  var_std__equal, 2, LOCAL(1), chr_40, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_197, 1, LOCAL(3),
  // text(2) == '('
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(480, 9),
  POS(480, 9),
  POS(478, 9),
  POS(480, 9)
};

static TAB_NUM t_lambda_197[] = {
  2, // locals
  0, // parameters
  // text(3) == ')'
  var_text, 1, num_3, 1, LOCAL(1),
  // text(3) == ')'
  var_std__equal, 2, LOCAL(1), chr_41, 1, LOCAL(2),
  // text(3) == ')'
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(481, 9),
  POS(481, 9),
  POS(481, 9)
};

static TAB_NUM t_lambda_198[] = {
  0, // locals
  0, // parameters
  // range &text 4 -1
  var_range, 3, var_text, num_4, minus_num_1, 1, var_text,
  // parse_attribute_without_prefix
  func_parse_attribute_without_prefix, 0, TAIL_CALL,
  POS(483, 9),
  POS(484, 9)
};

static TAB_NUM t_lambda_199[] = {
  3, // locals
  0, // parameters
  // text(1) == ' '
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_200, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_203, TAIL_CALL,
  POS(487, 9),
  POS(487, 9),
  POS(486, 9),
  POS(485, 7)
};

static TAB_NUM t_lambda_200[] = {
  3, // locals
  0, // parameters
  // text(2) == '('
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '('
  var_std__equal, 2, LOCAL(1), chr_40, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_201, 1, LOCAL(3),
  // text(2) == '('
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(488, 9),
  POS(488, 9),
  POS(486, 9),
  POS(488, 9)
};

static TAB_NUM t_lambda_201[] = {
  3, // locals
  0, // parameters
  // text(3) == '!'
  var_text, 1, num_3, 1, LOCAL(1),
  // text(3) == '!'
  var_std__equal, 2, LOCAL(1), chr_33, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_202, 1, LOCAL(3),
  // text(3) == '!'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(489, 9),
  POS(489, 9),
  POS(486, 9),
  POS(489, 9)
};

static TAB_NUM t_lambda_202[] = {
  2, // locals
  0, // parameters
  // text(4) == ')'
  var_text, 1, num_4, 1, LOCAL(1),
  // text(4) == ')'
  var_std__equal, 2, LOCAL(1), chr_41, 1, LOCAL(2),
  // text(4) == ')'
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(490, 9),
  POS(490, 9),
  POS(490, 9)
};

static TAB_NUM t_lambda_203[] = {
  0, // locals
  0, // parameters
  // range &text 5 -1
  var_range, 3, var_text, num_5, minus_num_1, 1, var_text,
  // parse_attribute_with_setter_without_prefix
  func_parse_attribute_with_setter_without_prefix, 0, TAIL_CALL,
  POS(492, 9),
  POS(493, 9)
};

static TAB_NUM t_lambda_204[] = {
  3, // locals
  0, // parameters
  // text(1) == '/'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '/'
  var_std__equal, 2, LOCAL(1), chr_47, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_205, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_206, TAIL_CALL,
  POS(496, 9),
  POS(496, 9),
  POS(495, 9),
  POS(494, 7)
};

static TAB_NUM t_lambda_205[] = {
  2, // locals
  0, // parameters
  // text(2) == ':'
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == ':'
  var_std__equal, 2, LOCAL(1), chr_58, 1, LOCAL(2),
  // text(2) == ':'
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(497, 9),
  POS(497, 9),
  POS(497, 9)
};

static TAB_NUM t_lambda_206[] = {
  0, // locals
  0, // parameters
  // range &text 3 -1
  var_range, 3, var_text, num_3, minus_num_1, 1, var_text,
  // parse_type_function_without_prefix
  func_parse_type_function_without_prefix, 0, TAIL_CALL,
  POS(499, 9),
  POS(500, 9)
};

static TAB_NUM t_lambda_207[] = {
  2, // locals
  0, // parameters
  // text(1) == '.'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '.'
  var_std__equal, 2, LOCAL(1), chr_46, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_208, TAIL_CALL,
  POS(502, 7),
  POS(502, 7),
  POS(501, 7)
};

static TAB_NUM t_lambda_208[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_attribute_value_pair_without_prefix
  func_parse_attribute_value_pair_without_prefix, 0, TAIL_CALL,
  POS(504, 9),
  POS(505, 9)
};

static TAB_NUM t_lambda_209[] = {
  2, // locals
  0, // parameters
  // text(1) == '/'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '/'
  var_std__equal, 2, LOCAL(1), chr_47, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_210, TAIL_CALL,
  POS(507, 7),
  POS(507, 7),
  POS(506, 7)
};

static TAB_NUM t_lambda_210[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_method_value_pair_without_prefix
  func_parse_method_value_pair_without_prefix, 0, TAIL_CALL,
  POS(509, 9),
  POS(510, 9)
};

static TAB_NUM t_lambda_211[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_212, TAIL_CALL,
  POS(511, 7)
};

static TAB_NUM t_lambda_212[] = {
  0, // locals
  0, // parameters
  // !expected "statement arguments"
  LET, 1, str_statement_argume, 1, var_expected,
  // !at text
  LET, 1, var_text, 1, var_at,
  // parse_some_statement_arguments
  func_parse_some_statement_arguments, 0, TAIL_CALL,
  POS(514, 9),
  POS(515, 9),
  POS(516, 9)
};

static TAB_NUM t_lambda_213[] = {
  1, // locals
  0, // parameters
  // is_undefined -> empty_list
  var_is_undefined, 1, var_469_12_expr, 1, LOCAL(1),
  //  expr.is_undefined -> empty_list
  LET, 2, LOCAL(1), lambda_214, TAIL_CALL,
  POS(520, 15),
  POS(520, 9)
};

static TAB_NUM t_lambda_214[] = {
  0, // locals
  0, // parameters
  //  empty_list
  LET, 1, var_empty_list, TAIL_CALL,
  POS(520, 30)
};

static TAB_NUM t_lambda_215[] = {
  1, // locals
  0, // parameters
  // is_a_list -> expr
  var_is_a_list, 1, var_469_12_expr, 1, LOCAL(1),
  //  expr.is_a_list -> expr
  LET, 2, LOCAL(1), lambda_216, TAIL_CALL,
  POS(521, 15),
  POS(521, 9)
};

static TAB_NUM t_lambda_216[] = {
  0, // locals
  0, // parameters
  //  expr
  LET, 1, var_469_12_expr, TAIL_CALL,
  POS(521, 27)
};

static TAB_NUM t_lambda_217[] = {
  0, // locals
  0, // parameters
  //  true -> list(expr)
  LET, 2, var_true, lambda_218, TAIL_CALL,
  POS(522, 9)
};

static TAB_NUM t_lambda_218[] = {
  1, // locals
  0, // parameters
  // list(expr)
  var_list, 1, var_469_12_expr, 1, LOCAL(1),
  //  list(expr)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(522, 18),
  POS(522, 17)
};

static TAB_NUM t_func_parse_inline_statement[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_525_1_position,
  // parse_inline_head !text $inline_head
  func_parse_inline_head, 0, 2, var_text, var_526_25_inline_head,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_2_text_is_defined, lambda_223, TAIL_CALL,
  POS(525, 3),
  POS(526, 3),
  POS(528, 10),
  POS(527, 3)
};

static TAB_NUM t_lambda_2_text_is_defined[] = {
  1, // locals
  0, // parameters
  // parse_some_inline_arguments !text $some_inline_arguments
  func_parse_some_inline_arguments, 0, 2, var_text, var_529_35_some_inline_arguments,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_219, lambda_222, TAIL_CALL,
  POS(529, 7),
  POS(531, 14),
  POS(530, 7)
};

static TAB_NUM t_lambda_219[] = {
  1, // locals
  0, // parameters
  // is_defined
  var_is_defined, 1, var_529_35_some_inline_arguments, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_220, lambda_221, TAIL_CALL,
  POS(534, 35),
  POS(533, 11)
};

static TAB_NUM t_lambda_220[] = {
  1, // locals
  0, // parameters
  // funky_types::inline_statement
  LET, -4, var_funky_types__inline_statement, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_525_1_position, var_funky__head_of, var_526_25_inline_head, var_funky__arguments_of, var_529_35_some_inline_arguments, LOCAL(1),
  // 
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(537, 15),
  POS(535, 15)
};

static TAB_NUM t_lambda_221[] = {
  0, // locals
  0, // parameters
  //  text inline_head
  LET, 2, var_text, var_526_25_inline_head, TAIL_CALL,
  POS(542, 15)
};

static TAB_NUM t_lambda_222[] = {
  0, // locals
  0, // parameters
  //  undefined some_inline_arguments
  LET, 2, var_undefined, var_529_35_some_inline_arguments, TAIL_CALL,
  POS(543, 11)
};

static TAB_NUM t_lambda_223[] = {
  0, // locals
  0, // parameters
  //  undefined inline_head
  LET, 2, var_undefined, var_526_25_inline_head, TAIL_CALL,
  POS(544, 7)
};

static TAB_NUM t_func_parse_inline_head[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 2, lambda_224, lambda_227, TAIL_CALL,
  POS(547, 3)
};

static TAB_NUM t_lambda_224[] = {
  3, // locals
  0, // parameters
  // text(1) == '-'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '-'
  var_std__equal, 2, LOCAL(1), chr_45, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_225, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_226, TAIL_CALL,
  POS(550, 9),
  POS(550, 9),
  POS(549, 9),
  POS(548, 7)
};

static TAB_NUM t_lambda_225[] = {
  2, // locals
  0, // parameters
  // text(2) == '>'
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '>'
  var_std__equal, 2, LOCAL(1), chr_62, 1, LOCAL(2),
  // text(2) == '>'
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(551, 9),
  POS(551, 9),
  POS(551, 9)
};

static TAB_NUM t_lambda_226[] = {
  0, // locals
  0, // parameters
  // range &text 3 -1
  var_range, 3, var_text, num_3, minus_num_1, 1, var_text,
  // parse_return_without_prefix
  func_parse_return_without_prefix, 0, TAIL_CALL,
  POS(553, 9),
  POS(554, 9)
};

static TAB_NUM t_lambda_227[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_228, TAIL_CALL,
  POS(555, 7)
};

static TAB_NUM t_lambda_228[] = {
  0, // locals
  0, // parameters
  // !expected "inline head"
  LET, 1, str_inline_head, 1, var_expected,
  // !at text
  LET, 1, var_text, 1, var_at,
  // parse_inline_functor
  func_parse_inline_functor, 0, TAIL_CALL,
  POS(558, 9),
  POS(559, 9),
  POS(560, 9)
};

static TAB_NUM t_func_parse_some_inline_arguments[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 3, lambda_229, lambda_231, lambda_233, TAIL_CALL,
  POS(563, 3)
};

static TAB_NUM t_lambda_229[] = {
  2, // locals
  0, // parameters
  // text(1) == ':'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == ':'
  var_std__equal, 2, LOCAL(1), chr_58, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_230, TAIL_CALL,
  POS(565, 7),
  POS(565, 7),
  POS(564, 7)
};

static TAB_NUM t_lambda_230[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_inline_body_without_prefix
  func_parse_inline_body_without_prefix, 0, TAIL_CALL,
  POS(567, 9),
  POS(568, 9)
};

static TAB_NUM t_lambda_231[] = {
  2, // locals
  0, // parameters
  // text(1) == ' '
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_232, TAIL_CALL,
  POS(570, 7),
  POS(570, 7),
  POS(569, 7)
};

static TAB_NUM t_lambda_232[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_spaced_inline_arguments_without_prefix
  func_parse_spaced_inline_arguments_without_prefix, 0, TAIL_CALL,
  POS(572, 9),
  POS(573, 9)
};

static TAB_NUM t_lambda_233[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_234, TAIL_CALL,
  POS(574, 7)
};

static TAB_NUM t_lambda_234[] = {
  0, // locals
  0, // parameters
  //  text undefined
  LET, 2, var_text, var_undefined, TAIL_CALL,
  POS(576, 9)
};

static TAB_NUM t_func_parse_attribute_value_pair_without_prefix[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, LOCAL(1),
  // parse_pair funky_types::attribute_value_pair
  func_parse_pair, 1, var_funky_types__attribute_value_pair, TAIL_CALL,
  POS(579, 3),
  POS(580, 3)
};

static TAB_NUM t_func_parse_type_function_without_prefix[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, LOCAL(1),
  // parse_body funky_types::type_function
  func_parse_body, 1, var_funky_types__type_function, TAIL_CALL,
  POS(583, 3),
  POS(584, 3)
};

static TAB_NUM t_func_parse_method_value_pair_without_prefix[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, LOCAL(1),
  // parse_pair funky_types::method_value_pair
  func_parse_pair, 1, var_funky_types__method_value_pair, TAIL_CALL,
  POS(587, 3),
  POS(588, 3)
};

static TAB_NUM t_func_parse_pair[] = {
  1, // locals
  -1, // parameters
  var_undefined, var_592_0_derived_node,
  // $position text
  LET, 1, var_text, 1, var_594_1_position,
  // !str text
  LET, 1, var_text, 1, var_str,
  // parse_identifier !text $identifier
  func_parse_identifier, 0, 2, var_text, var_596_24_identifier,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_3_text_is_defined, lambda_237, TAIL_CALL,
  POS(594, 3),
  POS(595, 3),
  POS(596, 3),
  POS(598, 10),
  POS(597, 3)
};

static TAB_NUM t_lambda_3_text_is_defined[] = {
  1, // locals
  0, // parameters
  // parse_some_argument !text $some_argument
  func_parse_some_argument, 0, 2, var_text, var_599_27_some_argument,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_235, lambda_236, TAIL_CALL,
  POS(599, 7),
  POS(601, 14),
  POS(600, 7)
};

static TAB_NUM t_lambda_235[] = {
  2, // locals
  0, // parameters
  // default_value(derived_node funky_types::pair)
  var_default_value, 2, var_592_0_derived_node, var_funky_types__pair, 1, LOCAL(1),
  // default_value(derived_node funky_types::pair)
  LET, -4, LOCAL(1), var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_594_1_position, var_funky__identifier_of, var_596_24_identifier, var_funky__argument_of, var_599_27_some_argument, LOCAL(2),
  // 
  LET, 2, var_text, LOCAL(2), TAIL_CALL,
  POS(604, 11),
  POS(604, 11),
  POS(602, 11)
};

static TAB_NUM t_lambda_236[] = {
  0, // locals
  0, // parameters
  //  undefined some_argument
  LET, 2, var_undefined, var_599_27_some_argument, TAIL_CALL,
  POS(609, 11)
};

static TAB_NUM t_lambda_237[] = {
  0, // locals
  0, // parameters
  //  undefined identifier
  LET, 2, var_undefined, var_596_24_identifier, TAIL_CALL,
  POS(610, 7)
};

static TAB_NUM t_func_parse_meta_instruction[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 6, lambda_238, lambda_249, lambda_258, lambda_265, lambda_272, lambda_281, TAIL_CALL,
  POS(613, 3)
};

static TAB_NUM t_lambda_238[] = {
  3, // locals
  0, // parameters
  // text(1) == 'n'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == 'n'
  var_std__equal, 2, LOCAL(1), chr_110, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_239, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_248, TAIL_CALL,
  POS(616, 9),
  POS(616, 9),
  POS(615, 9),
  POS(614, 7)
};

static TAB_NUM t_lambda_239[] = {
  3, // locals
  0, // parameters
  // text(2) == 'a'
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == 'a'
  var_std__equal, 2, LOCAL(1), chr_97, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_240, 1, LOCAL(3),
  // text(2) == 'a'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(617, 9),
  POS(617, 9),
  POS(615, 9),
  POS(617, 9)
};

static TAB_NUM t_lambda_240[] = {
  3, // locals
  0, // parameters
  // text(3) == 'm'
  var_text, 1, num_3, 1, LOCAL(1),
  // text(3) == 'm'
  var_std__equal, 2, LOCAL(1), chr_109, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_241, 1, LOCAL(3),
  // text(3) == 'm'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(618, 9),
  POS(618, 9),
  POS(615, 9),
  POS(618, 9)
};

static TAB_NUM t_lambda_241[] = {
  3, // locals
  0, // parameters
  // text(4) == 'e'
  var_text, 1, num_4, 1, LOCAL(1),
  // text(4) == 'e'
  var_std__equal, 2, LOCAL(1), chr_101, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_242, 1, LOCAL(3),
  // text(4) == 'e'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(619, 9),
  POS(619, 9),
  POS(615, 9),
  POS(619, 9)
};

static TAB_NUM t_lambda_242[] = {
  3, // locals
  0, // parameters
  // text(5) == 's'
  var_text, 1, num_5, 1, LOCAL(1),
  // text(5) == 's'
  var_std__equal, 2, LOCAL(1), chr_115, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_243, 1, LOCAL(3),
  // text(5) == 's'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(620, 9),
  POS(620, 9),
  POS(615, 9),
  POS(620, 9)
};

static TAB_NUM t_lambda_243[] = {
  3, // locals
  0, // parameters
  // text(6) == 'p'
  var_text, 1, num_6, 1, LOCAL(1),
  // text(6) == 'p'
  var_std__equal, 2, LOCAL(1), chr_112, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_244, 1, LOCAL(3),
  // text(6) == 'p'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(621, 9),
  POS(621, 9),
  POS(615, 9),
  POS(621, 9)
};

static TAB_NUM t_lambda_244[] = {
  3, // locals
  0, // parameters
  // text(7) == 'a'
  var_text, 1, num_7, 1, LOCAL(1),
  // text(7) == 'a'
  var_std__equal, 2, LOCAL(1), chr_97, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_245, 1, LOCAL(3),
  // text(7) == 'a'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(622, 9),
  POS(622, 9),
  POS(615, 9),
  POS(622, 9)
};

static TAB_NUM t_lambda_245[] = {
  3, // locals
  0, // parameters
  // text(8) == 'c'
  var_text, 1, num_8, 1, LOCAL(1),
  // text(8) == 'c'
  var_std__equal, 2, LOCAL(1), chr_99, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_246, 1, LOCAL(3),
  // text(8) == 'c'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(623, 9),
  POS(623, 9),
  POS(615, 9),
  POS(623, 9)
};

static TAB_NUM t_lambda_246[] = {
  3, // locals
  0, // parameters
  // text(9) == 'e'
  var_text, 1, num_9, 1, LOCAL(1),
  // text(9) == 'e'
  var_std__equal, 2, LOCAL(1), chr_101, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_247, 1, LOCAL(3),
  // text(9) == 'e'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(624, 9),
  POS(624, 9),
  POS(615, 9),
  POS(624, 9)
};

static TAB_NUM t_lambda_247[] = {
  2, // locals
  0, // parameters
  // text(10) == ' '
  var_text, 1, num_10, 1, LOCAL(1),
  // text(10) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // text(10) == ' '
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(625, 9),
  POS(625, 9),
  POS(625, 9)
};

static TAB_NUM t_lambda_248[] = {
  0, // locals
  0, // parameters
  // range &text 11 -1
  var_range, 3, var_text, num_11, minus_num_1, 1, var_text,
  // parse_namespace_instruction_without_prefix
  func_parse_namespace_instruction_without_prefix, 0, TAIL_CALL,
  POS(627, 9),
  POS(628, 9)
};

static TAB_NUM t_lambda_249[] = {
  3, // locals
  0, // parameters
  // text(1) == 'r'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == 'r'
  var_std__equal, 2, LOCAL(1), chr_114, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_250, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_257, TAIL_CALL,
  POS(631, 9),
  POS(631, 9),
  POS(630, 9),
  POS(629, 7)
};

static TAB_NUM t_lambda_250[] = {
  3, // locals
  0, // parameters
  // text(2) == 'e'
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == 'e'
  var_std__equal, 2, LOCAL(1), chr_101, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_251, 1, LOCAL(3),
  // text(2) == 'e'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(632, 9),
  POS(632, 9),
  POS(630, 9),
  POS(632, 9)
};

static TAB_NUM t_lambda_251[] = {
  3, // locals
  0, // parameters
  // text(3) == 'q'
  var_text, 1, num_3, 1, LOCAL(1),
  // text(3) == 'q'
  var_std__equal, 2, LOCAL(1), chr_113, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_252, 1, LOCAL(3),
  // text(3) == 'q'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(633, 9),
  POS(633, 9),
  POS(630, 9),
  POS(633, 9)
};

static TAB_NUM t_lambda_252[] = {
  3, // locals
  0, // parameters
  // text(4) == 'u'
  var_text, 1, num_4, 1, LOCAL(1),
  // text(4) == 'u'
  var_std__equal, 2, LOCAL(1), chr_117, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_253, 1, LOCAL(3),
  // text(4) == 'u'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(634, 9),
  POS(634, 9),
  POS(630, 9),
  POS(634, 9)
};

static TAB_NUM t_lambda_253[] = {
  3, // locals
  0, // parameters
  // text(5) == 'i'
  var_text, 1, num_5, 1, LOCAL(1),
  // text(5) == 'i'
  var_std__equal, 2, LOCAL(1), chr_105, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_254, 1, LOCAL(3),
  // text(5) == 'i'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(635, 9),
  POS(635, 9),
  POS(630, 9),
  POS(635, 9)
};

static TAB_NUM t_lambda_254[] = {
  3, // locals
  0, // parameters
  // text(6) == 'r'
  var_text, 1, num_6, 1, LOCAL(1),
  // text(6) == 'r'
  var_std__equal, 2, LOCAL(1), chr_114, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_255, 1, LOCAL(3),
  // text(6) == 'r'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(636, 9),
  POS(636, 9),
  POS(630, 9),
  POS(636, 9)
};

static TAB_NUM t_lambda_255[] = {
  3, // locals
  0, // parameters
  // text(7) == 'e'
  var_text, 1, num_7, 1, LOCAL(1),
  // text(7) == 'e'
  var_std__equal, 2, LOCAL(1), chr_101, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_256, 1, LOCAL(3),
  // text(7) == 'e'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(637, 9),
  POS(637, 9),
  POS(630, 9),
  POS(637, 9)
};

static TAB_NUM t_lambda_256[] = {
  2, // locals
  0, // parameters
  // text(8) == ' '
  var_text, 1, num_8, 1, LOCAL(1),
  // text(8) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // text(8) == ' '
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(638, 9),
  POS(638, 9),
  POS(638, 9)
};

static TAB_NUM t_lambda_257[] = {
  0, // locals
  0, // parameters
  // range &text 9 -1
  var_range, 3, var_text, num_9, minus_num_1, 1, var_text,
  // parse_require_instruction_without_prefix
  func_parse_require_instruction_without_prefix, 0, TAIL_CALL,
  POS(640, 9),
  POS(641, 9)
};

static TAB_NUM t_lambda_258[] = {
  3, // locals
  0, // parameters
  // text(1) == 'u'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == 'u'
  var_std__equal, 2, LOCAL(1), chr_117, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_259, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_264, TAIL_CALL,
  POS(644, 9),
  POS(644, 9),
  POS(643, 9),
  POS(642, 7)
};

static TAB_NUM t_lambda_259[] = {
  3, // locals
  0, // parameters
  // text(2) == 's'
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == 's'
  var_std__equal, 2, LOCAL(1), chr_115, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_260, 1, LOCAL(3),
  // text(2) == 's'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(645, 9),
  POS(645, 9),
  POS(643, 9),
  POS(645, 9)
};

static TAB_NUM t_lambda_260[] = {
  3, // locals
  0, // parameters
  // text(3) == 'i'
  var_text, 1, num_3, 1, LOCAL(1),
  // text(3) == 'i'
  var_std__equal, 2, LOCAL(1), chr_105, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_261, 1, LOCAL(3),
  // text(3) == 'i'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(646, 9),
  POS(646, 9),
  POS(643, 9),
  POS(646, 9)
};

static TAB_NUM t_lambda_261[] = {
  3, // locals
  0, // parameters
  // text(4) == 'n'
  var_text, 1, num_4, 1, LOCAL(1),
  // text(4) == 'n'
  var_std__equal, 2, LOCAL(1), chr_110, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_262, 1, LOCAL(3),
  // text(4) == 'n'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(647, 9),
  POS(647, 9),
  POS(643, 9),
  POS(647, 9)
};

static TAB_NUM t_lambda_262[] = {
  3, // locals
  0, // parameters
  // text(5) == 'g'
  var_text, 1, num_5, 1, LOCAL(1),
  // text(5) == 'g'
  var_std__equal, 2, LOCAL(1), chr_103, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_263, 1, LOCAL(3),
  // text(5) == 'g'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(648, 9),
  POS(648, 9),
  POS(643, 9),
  POS(648, 9)
};

static TAB_NUM t_lambda_263[] = {
  2, // locals
  0, // parameters
  // text(6) == ' '
  var_text, 1, num_6, 1, LOCAL(1),
  // text(6) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // text(6) == ' '
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(649, 9),
  POS(649, 9),
  POS(649, 9)
};

static TAB_NUM t_lambda_264[] = {
  0, // locals
  0, // parameters
  // range &text 7 -1
  var_range, 3, var_text, num_7, minus_num_1, 1, var_text,
  // parse_using_instruction_without_prefix
  func_parse_using_instruction_without_prefix, 0, TAIL_CALL,
  POS(651, 9),
  POS(652, 9)
};

static TAB_NUM t_lambda_265[] = {
  3, // locals
  0, // parameters
  // text(1) == 'a'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == 'a'
  var_std__equal, 2, LOCAL(1), chr_97, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_266, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_271, TAIL_CALL,
  POS(655, 9),
  POS(655, 9),
  POS(654, 9),
  POS(653, 7)
};

static TAB_NUM t_lambda_266[] = {
  3, // locals
  0, // parameters
  // text(2) == 'l'
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == 'l'
  var_std__equal, 2, LOCAL(1), chr_108, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_267, 1, LOCAL(3),
  // text(2) == 'l'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(656, 9),
  POS(656, 9),
  POS(654, 9),
  POS(656, 9)
};

static TAB_NUM t_lambda_267[] = {
  3, // locals
  0, // parameters
  // text(3) == 'i'
  var_text, 1, num_3, 1, LOCAL(1),
  // text(3) == 'i'
  var_std__equal, 2, LOCAL(1), chr_105, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_268, 1, LOCAL(3),
  // text(3) == 'i'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(657, 9),
  POS(657, 9),
  POS(654, 9),
  POS(657, 9)
};

static TAB_NUM t_lambda_268[] = {
  3, // locals
  0, // parameters
  // text(4) == 'a'
  var_text, 1, num_4, 1, LOCAL(1),
  // text(4) == 'a'
  var_std__equal, 2, LOCAL(1), chr_97, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_269, 1, LOCAL(3),
  // text(4) == 'a'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(658, 9),
  POS(658, 9),
  POS(654, 9),
  POS(658, 9)
};

static TAB_NUM t_lambda_269[] = {
  3, // locals
  0, // parameters
  // text(5) == 's'
  var_text, 1, num_5, 1, LOCAL(1),
  // text(5) == 's'
  var_std__equal, 2, LOCAL(1), chr_115, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_270, 1, LOCAL(3),
  // text(5) == 's'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(659, 9),
  POS(659, 9),
  POS(654, 9),
  POS(659, 9)
};

static TAB_NUM t_lambda_270[] = {
  2, // locals
  0, // parameters
  // text(6) == ' '
  var_text, 1, num_6, 1, LOCAL(1),
  // text(6) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // text(6) == ' '
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(660, 9),
  POS(660, 9),
  POS(660, 9)
};

static TAB_NUM t_lambda_271[] = {
  0, // locals
  0, // parameters
  // range &text 7 -1
  var_range, 3, var_text, num_7, minus_num_1, 1, var_text,
  // parse_alias_instruction_without_prefix
  func_parse_alias_instruction_without_prefix, 0, TAIL_CALL,
  POS(662, 9),
  POS(663, 9)
};

static TAB_NUM t_lambda_272[] = {
  3, // locals
  0, // parameters
  // text(1) == 'r'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == 'r'
  var_std__equal, 2, LOCAL(1), chr_114, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_273, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_280, TAIL_CALL,
  POS(666, 9),
  POS(666, 9),
  POS(665, 9),
  POS(664, 7)
};

static TAB_NUM t_lambda_273[] = {
  3, // locals
  0, // parameters
  // text(2) == 'e'
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == 'e'
  var_std__equal, 2, LOCAL(1), chr_101, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_274, 1, LOCAL(3),
  // text(2) == 'e'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(667, 9),
  POS(667, 9),
  POS(665, 9),
  POS(667, 9)
};

static TAB_NUM t_lambda_274[] = {
  3, // locals
  0, // parameters
  // text(3) == 's'
  var_text, 1, num_3, 1, LOCAL(1),
  // text(3) == 's'
  var_std__equal, 2, LOCAL(1), chr_115, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_275, 1, LOCAL(3),
  // text(3) == 's'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(668, 9),
  POS(668, 9),
  POS(665, 9),
  POS(668, 9)
};

static TAB_NUM t_lambda_275[] = {
  3, // locals
  0, // parameters
  // text(4) == 'o'
  var_text, 1, num_4, 1, LOCAL(1),
  // text(4) == 'o'
  var_std__equal, 2, LOCAL(1), chr_111, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_276, 1, LOCAL(3),
  // text(4) == 'o'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(669, 9),
  POS(669, 9),
  POS(665, 9),
  POS(669, 9)
};

static TAB_NUM t_lambda_276[] = {
  3, // locals
  0, // parameters
  // text(5) == 'l'
  var_text, 1, num_5, 1, LOCAL(1),
  // text(5) == 'l'
  var_std__equal, 2, LOCAL(1), chr_108, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_277, 1, LOCAL(3),
  // text(5) == 'l'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(670, 9),
  POS(670, 9),
  POS(665, 9),
  POS(670, 9)
};

static TAB_NUM t_lambda_277[] = {
  3, // locals
  0, // parameters
  // text(6) == 'v'
  var_text, 1, num_6, 1, LOCAL(1),
  // text(6) == 'v'
  var_std__equal, 2, LOCAL(1), chr_118, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_278, 1, LOCAL(3),
  // text(6) == 'v'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(671, 9),
  POS(671, 9),
  POS(665, 9),
  POS(671, 9)
};

static TAB_NUM t_lambda_278[] = {
  3, // locals
  0, // parameters
  // text(7) == 'e'
  var_text, 1, num_7, 1, LOCAL(1),
  // text(7) == 'e'
  var_std__equal, 2, LOCAL(1), chr_101, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_279, 1, LOCAL(3),
  // text(7) == 'e'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(672, 9),
  POS(672, 9),
  POS(665, 9),
  POS(672, 9)
};

static TAB_NUM t_lambda_279[] = {
  2, // locals
  0, // parameters
  // text(8) == ' '
  var_text, 1, num_8, 1, LOCAL(1),
  // text(8) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // text(8) == ' '
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(673, 9),
  POS(673, 9),
  POS(673, 9)
};

static TAB_NUM t_lambda_280[] = {
  0, // locals
  0, // parameters
  // range &text 9 -1
  var_range, 3, var_text, num_9, minus_num_1, 1, var_text,
  // parse_resolve_instruction_without_prefix
  func_parse_resolve_instruction_without_prefix, 0, TAIL_CALL,
  POS(675, 9),
  POS(676, 9)
};

static TAB_NUM t_lambda_281[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_282, TAIL_CALL,
  POS(677, 7)
};

static TAB_NUM t_lambda_282[] = {
  0, // locals
  0, // parameters
  // !expected "meta instruction"
  LET, 1, str_meta_instruction, 1, var_expected,
  // !at text
  LET, 1, var_text, 1, var_at,
  // parse_allow_instruction
  func_parse_allow_instruction, 0, TAIL_CALL,
  POS(680, 9),
  POS(681, 9),
  POS(682, 9)
};

static TAB_NUM t_func_parse_namespace_instruction_without_prefix[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_685_1_position,
  // !str text
  LET, 1, var_text, 1, var_str,
  // parse_name !text $name
  func_parse_name, 0, 2, var_text, var_687_18_name,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_4_text_is_defined, lambda_288, TAIL_CALL,
  POS(685, 3),
  POS(686, 3),
  POS(687, 3),
  POS(689, 10),
  POS(688, 3)
};

static TAB_NUM t_lambda_4_text_is_defined[] = {
  1, // locals
  0, // parameters
  // parse_optional_version !text $optional_version
  func_parse_optional_version, 0, 2, var_text, var_690_30_optional_version,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_5_text_is_defined, lambda_287, TAIL_CALL,
  POS(690, 7),
  POS(692, 14),
  POS(691, 7)
};

static TAB_NUM t_lambda_5_text_is_defined[] = {
  2, // locals
  0, // parameters
  // text(1) == '>':
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '>':
  var_std__equal, 2, LOCAL(1), chr_62, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_283, lambda_286, TAIL_CALL,
  POS(694, 13),
  POS(694, 13),
  POS(693, 11)
};

static TAB_NUM t_lambda_283[] = {
  1, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_trailing_remarks !text $trailing_remarks
  func_parse_trailing_remarks, 0, 2, var_text, var_696_30_trailing_remarks,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_284, lambda_285, TAIL_CALL,
  POS(695, 15),
  POS(696, 15),
  POS(698, 22),
  POS(697, 15)
};

static TAB_NUM t_lambda_284[] = {
  1, // locals
  0, // parameters
  // funky_types::namespace_instruction
  LET, -5, var_funky_types__namespace_instruction, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_685_1_position, var_funky__name_of, var_687_18_name, var_funky__version_of, var_690_30_optional_version, var_funky__remarks_of, var_696_30_trailing_remarks, LOCAL(1),
  // 
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(701, 19),
  POS(699, 19)
};

static TAB_NUM t_lambda_285[] = {
  0, // locals
  0, // parameters
  //  undefined trailing_remarks
  LET, 2, var_undefined, var_696_30_trailing_remarks, TAIL_CALL,
  POS(707, 19)
};

static TAB_NUM t_lambda_286[] = {
  0, // locals
  0, // parameters
  // syntax_error "'>'"
  func_syntax_error, 1, string_3, TAIL_CALL,
  POS(709, 15)
};

static TAB_NUM t_lambda_287[] = {
  0, // locals
  0, // parameters
  //  undefined optional_version
  LET, 2, var_undefined, var_690_30_optional_version, TAIL_CALL,
  POS(710, 11)
};

static TAB_NUM t_lambda_288[] = {
  0, // locals
  0, // parameters
  //  undefined name
  LET, 2, var_undefined, var_687_18_name, TAIL_CALL,
  POS(711, 7)
};

static TAB_NUM t_func_parse_require_instruction_without_prefix[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_714_1_position,
  // !str text
  LET, 1, var_text, 1, var_str,
  // parse_filename !text $filename
  func_parse_filename, 0, 2, var_text, var_716_22_filename,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_6_text_is_defined, lambda_293, TAIL_CALL,
  POS(714, 3),
  POS(715, 3),
  POS(716, 3),
  POS(718, 10),
  POS(717, 3)
};

static TAB_NUM t_lambda_6_text_is_defined[] = {
  2, // locals
  0, // parameters
  // text(1) == '>':
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '>':
  var_std__equal, 2, LOCAL(1), chr_62, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_289, lambda_292, TAIL_CALL,
  POS(720, 9),
  POS(720, 9),
  POS(719, 7)
};

static TAB_NUM t_lambda_289[] = {
  1, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_trailing_remarks !text $trailing_remarks
  func_parse_trailing_remarks, 0, 2, var_text, var_722_30_trailing_remarks,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_290, lambda_291, TAIL_CALL,
  POS(721, 11),
  POS(722, 11),
  POS(724, 18),
  POS(723, 11)
};

static TAB_NUM t_lambda_290[] = {
  1, // locals
  0, // parameters
  // funky_types::require_instruction
  LET, -4, var_funky_types__require_instruction, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_714_1_position, var_funky__filename_of, var_716_22_filename, var_funky__remarks_of, var_722_30_trailing_remarks, LOCAL(1),
  // 
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(727, 15),
  POS(725, 15)
};

static TAB_NUM t_lambda_291[] = {
  0, // locals
  0, // parameters
  //  undefined trailing_remarks
  LET, 2, var_undefined, var_722_30_trailing_remarks, TAIL_CALL,
  POS(732, 15)
};

static TAB_NUM t_lambda_292[] = {
  0, // locals
  0, // parameters
  // syntax_error "'>'"
  func_syntax_error, 1, string_3, TAIL_CALL,
  POS(734, 11)
};

static TAB_NUM t_lambda_293[] = {
  0, // locals
  0, // parameters
  //  undefined filename
  LET, 2, var_undefined, var_716_22_filename, TAIL_CALL,
  POS(735, 7)
};

static TAB_NUM t_func_parse_using_instruction_without_prefix[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_738_1_position,
  // !str text
  LET, 1, var_text, 1, var_str,
  // parse_name !text $name
  func_parse_name, 0, 2, var_text, var_740_18_name,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_7_text_is_defined, lambda_299, TAIL_CALL,
  POS(738, 3),
  POS(739, 3),
  POS(740, 3),
  POS(742, 10),
  POS(741, 3)
};

static TAB_NUM t_lambda_7_text_is_defined[] = {
  1, // locals
  0, // parameters
  // parse_optional_version !text $optional_version
  func_parse_optional_version, 0, 2, var_text, var_743_30_optional_version,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_8_text_is_defined, lambda_298, TAIL_CALL,
  POS(743, 7),
  POS(745, 14),
  POS(744, 7)
};

static TAB_NUM t_lambda_8_text_is_defined[] = {
  2, // locals
  0, // parameters
  // text(1) == '>':
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '>':
  var_std__equal, 2, LOCAL(1), chr_62, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_294, lambda_297, TAIL_CALL,
  POS(747, 13),
  POS(747, 13),
  POS(746, 11)
};

static TAB_NUM t_lambda_294[] = {
  1, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_trailing_remarks !text $trailing_remarks
  func_parse_trailing_remarks, 0, 2, var_text, var_749_30_trailing_remarks,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_295, lambda_296, TAIL_CALL,
  POS(748, 15),
  POS(749, 15),
  POS(751, 22),
  POS(750, 15)
};

static TAB_NUM t_lambda_295[] = {
  1, // locals
  0, // parameters
  // funky_types::using_instruction
  LET, -5, var_funky_types__using_instruction, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_738_1_position, var_funky__name_of, var_740_18_name, var_funky__version_of, var_743_30_optional_version, var_funky__remarks_of, var_749_30_trailing_remarks, LOCAL(1),
  // 
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(754, 19),
  POS(752, 19)
};

static TAB_NUM t_lambda_296[] = {
  0, // locals
  0, // parameters
  //  undefined trailing_remarks
  LET, 2, var_undefined, var_749_30_trailing_remarks, TAIL_CALL,
  POS(760, 19)
};

static TAB_NUM t_lambda_297[] = {
  0, // locals
  0, // parameters
  // syntax_error "'>'"
  func_syntax_error, 1, string_3, TAIL_CALL,
  POS(762, 15)
};

static TAB_NUM t_lambda_298[] = {
  0, // locals
  0, // parameters
  //  undefined optional_version
  LET, 2, var_undefined, var_743_30_optional_version, TAIL_CALL,
  POS(763, 11)
};

static TAB_NUM t_lambda_299[] = {
  0, // locals
  0, // parameters
  //  undefined name
  LET, 2, var_undefined, var_740_18_name, TAIL_CALL,
  POS(764, 7)
};

static TAB_NUM t_func_parse_alias_instruction_without_prefix[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_767_1_position,
  // parse_alias !text $alias
  func_parse_alias, 0, 2, var_text, var_768_19_alias,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_9_text_is_defined, lambda_306, TAIL_CALL,
  POS(767, 3),
  POS(768, 3),
  POS(770, 10),
  POS(769, 3)
};

static TAB_NUM t_lambda_9_text_is_defined[] = {
  1, // locals
  0, // parameters
  // parse_equal_sign !text $equal_sign
  func_parse_equal_sign, 0, 2, var_text, var_771_24_equal_sign,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_10_text_is_defined, lambda_305, TAIL_CALL,
  POS(771, 7),
  POS(773, 14),
  POS(772, 7)
};

static TAB_NUM t_lambda_10_text_is_defined[] = {
  1, // locals
  0, // parameters
  // !str text
  LET, 1, var_text, 1, var_str,
  // parse_name !text $name
  func_parse_name, 0, 2, var_text, var_775_18_name,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_11_text_is_defined, lambda_304, TAIL_CALL,
  POS(774, 11),
  POS(775, 11),
  POS(777, 18),
  POS(776, 11)
};

static TAB_NUM t_lambda_11_text_is_defined[] = {
  2, // locals
  0, // parameters
  // text(1) == '>':
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '>':
  var_std__equal, 2, LOCAL(1), chr_62, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_300, lambda_303, TAIL_CALL,
  POS(779, 17),
  POS(779, 17),
  POS(778, 15)
};

static TAB_NUM t_lambda_300[] = {
  1, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_trailing_remarks !text $trailing_remarks
  func_parse_trailing_remarks, 0, 2, var_text, var_781_30_trailing_remarks,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_301, lambda_302, TAIL_CALL,
  POS(780, 19),
  POS(781, 19),
  POS(783, 26),
  POS(782, 19)
};

static TAB_NUM t_lambda_301[] = {
  1, // locals
  0, // parameters
  // funky_types::alias_instruction
  LET, -6, var_funky_types__alias_instruction, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_767_1_position, var_funky__alias_of, var_768_19_alias, var_funky__sign_of, var_771_24_equal_sign, var_funky__name_of, var_775_18_name, var_funky__remarks_of, var_781_30_trailing_remarks, LOCAL(1),
  // 
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(786, 23),
  POS(784, 23)
};

static TAB_NUM t_lambda_302[] = {
  0, // locals
  0, // parameters
  //  undefined trailing_remarks
  LET, 2, var_undefined, var_781_30_trailing_remarks, TAIL_CALL,
  POS(793, 23)
};

static TAB_NUM t_lambda_303[] = {
  0, // locals
  0, // parameters
  // syntax_error "'>'"
  func_syntax_error, 1, string_3, TAIL_CALL,
  POS(795, 19)
};

static TAB_NUM t_lambda_304[] = {
  0, // locals
  0, // parameters
  //  undefined name
  LET, 2, var_undefined, var_775_18_name, TAIL_CALL,
  POS(796, 15)
};

static TAB_NUM t_lambda_305[] = {
  0, // locals
  0, // parameters
  //  undefined equal_sign
  LET, 2, var_undefined, var_771_24_equal_sign, TAIL_CALL,
  POS(797, 11)
};

static TAB_NUM t_lambda_306[] = {
  0, // locals
  0, // parameters
  //  undefined alias
  LET, 2, var_undefined, var_768_19_alias, TAIL_CALL,
  POS(798, 7)
};

static TAB_NUM t_func_parse_resolve_instruction_without_prefix[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_801_1_position,
  // !str text
  LET, 1, var_text, 1, var_str,
  // parse_name !text $name
  func_parse_name, 0, 2, var_text, var_803_18_name,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_12_text_is_defined, lambda_314, TAIL_CALL,
  POS(801, 3),
  POS(802, 3),
  POS(803, 3),
  POS(805, 10),
  POS(804, 3)
};

static TAB_NUM t_lambda_12_text_is_defined[] = {
  2, // locals
  0, // parameters
  // text(1) == '-':
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '-':
  var_std__equal, 2, LOCAL(1), chr_45, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_307, lambda_313, TAIL_CALL,
  POS(807, 9),
  POS(807, 9),
  POS(806, 7)
};

static TAB_NUM t_lambda_307[] = {
  1, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_version !text $version
  func_parse_version, 0, 2, var_text, var_809_21_version,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_13_text_is_defined, lambda_312, TAIL_CALL,
  POS(808, 11),
  POS(809, 11),
  POS(811, 18),
  POS(810, 11)
};

static TAB_NUM t_lambda_13_text_is_defined[] = {
  2, // locals
  0, // parameters
  // text(1) == '>':
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '>':
  var_std__equal, 2, LOCAL(1), chr_62, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_308, lambda_311, TAIL_CALL,
  POS(813, 17),
  POS(813, 17),
  POS(812, 15)
};

static TAB_NUM t_lambda_308[] = {
  1, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_trailing_remarks !text $trailing_remarks
  func_parse_trailing_remarks, 0, 2, var_text, var_815_30_trailing_remarks,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_309, lambda_310, TAIL_CALL,
  POS(814, 19),
  POS(815, 19),
  POS(817, 26),
  POS(816, 19)
};

static TAB_NUM t_lambda_309[] = {
  1, // locals
  0, // parameters
  // funky_types::resolve_instruction
  LET, -5, var_funky_types__resolve_instruction, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_801_1_position, var_funky__name_of, var_803_18_name, var_funky__version_of, var_809_21_version, var_funky__remarks_of, var_815_30_trailing_remarks, LOCAL(1),
  // 
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(820, 23),
  POS(818, 23)
};

static TAB_NUM t_lambda_310[] = {
  0, // locals
  0, // parameters
  //  undefined trailing_remarks
  LET, 2, var_undefined, var_815_30_trailing_remarks, TAIL_CALL,
  POS(826, 23)
};

static TAB_NUM t_lambda_311[] = {
  0, // locals
  0, // parameters
  // syntax_error "'>'"
  func_syntax_error, 1, string_3, TAIL_CALL,
  POS(828, 19)
};

static TAB_NUM t_lambda_312[] = {
  0, // locals
  0, // parameters
  //  undefined version
  LET, 2, var_undefined, var_809_21_version, TAIL_CALL,
  POS(829, 15)
};

static TAB_NUM t_lambda_313[] = {
  0, // locals
  0, // parameters
  // syntax_error "'-'"
  func_syntax_error, 1, string_4, TAIL_CALL,
  POS(831, 11)
};

static TAB_NUM t_lambda_314[] = {
  0, // locals
  0, // parameters
  //  undefined name
  LET, 2, var_undefined, var_803_18_name, TAIL_CALL,
  POS(832, 7)
};

static TAB_NUM t_func_parse_allow_instruction[] = {
  2, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_835_1_position,
  // text(1) == 'a':
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == 'a':
  var_std__equal, 2, LOCAL(1), chr_97, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_315, lambda_331, TAIL_CALL,
  POS(835, 3),
  POS(837, 5),
  POS(837, 5),
  POS(836, 3)
};

static TAB_NUM t_lambda_315[] = {
  2, // locals
  0, // parameters
  // text(2) == 'l':
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == 'l':
  var_std__equal, 2, LOCAL(1), chr_108, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_316, lambda_330, TAIL_CALL,
  POS(839, 9),
  POS(839, 9),
  POS(838, 7)
};

static TAB_NUM t_lambda_316[] = {
  2, // locals
  0, // parameters
  // text(3) == 'l':
  var_text, 1, num_3, 1, LOCAL(1),
  // text(3) == 'l':
  var_std__equal, 2, LOCAL(1), chr_108, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_317, lambda_329, TAIL_CALL,
  POS(841, 13),
  POS(841, 13),
  POS(840, 11)
};

static TAB_NUM t_lambda_317[] = {
  2, // locals
  0, // parameters
  // text(4) == 'o':
  var_text, 1, num_4, 1, LOCAL(1),
  // text(4) == 'o':
  var_std__equal, 2, LOCAL(1), chr_111, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_318, lambda_328, TAIL_CALL,
  POS(843, 17),
  POS(843, 17),
  POS(842, 15)
};

static TAB_NUM t_lambda_318[] = {
  2, // locals
  0, // parameters
  // text(5) == 'w':
  var_text, 1, num_5, 1, LOCAL(1),
  // text(5) == 'w':
  var_std__equal, 2, LOCAL(1), chr_119, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_319, lambda_327, TAIL_CALL,
  POS(845, 21),
  POS(845, 21),
  POS(844, 19)
};

static TAB_NUM t_lambda_319[] = {
  2, // locals
  0, // parameters
  // text(6) == ' ':
  var_text, 1, num_6, 1, LOCAL(1),
  // text(6) == ' ':
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_320, lambda_326, TAIL_CALL,
  POS(847, 25),
  POS(847, 25),
  POS(846, 23)
};

static TAB_NUM t_lambda_320[] = {
  1, // locals
  0, // parameters
  // range &text 7 -1
  var_range, 3, var_text, num_7, minus_num_1, 1, var_text,
  // parse_pragma !text $pragma
  func_parse_pragma, 0, 2, var_text, var_849_20_pragma,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_14_text_is_defined, lambda_325, TAIL_CALL,
  POS(848, 27),
  POS(849, 27),
  POS(851, 34),
  POS(850, 27)
};

static TAB_NUM t_lambda_14_text_is_defined[] = {
  2, // locals
  0, // parameters
  // text(1) == '>':
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '>':
  var_std__equal, 2, LOCAL(1), chr_62, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_321, lambda_324, TAIL_CALL,
  POS(853, 33),
  POS(853, 33),
  POS(852, 31)
};

static TAB_NUM t_lambda_321[] = {
  1, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_trailing_remarks !text $trailing_remarks
  func_parse_trailing_remarks, 0, 2, var_text, var_855_30_trailing_remarks,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_322, lambda_323, TAIL_CALL,
  POS(854, 35),
  POS(855, 35),
  POS(857, 42),
  POS(856, 35)
};

static TAB_NUM t_lambda_322[] = {
  1, // locals
  0, // parameters
  // funky_types::allow_instruction
  LET, -4, var_funky_types__allow_instruction, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_835_1_position, var_funky__pragma_of, var_849_20_pragma, var_funky__remarks_of, var_855_30_trailing_remarks, LOCAL(1),
  // 
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(860, 39),
  POS(858, 39)
};

static TAB_NUM t_lambda_323[] = {
  0, // locals
  0, // parameters
  //  undefined trailing_remarks
  LET, 2, var_undefined, var_855_30_trailing_remarks, TAIL_CALL,
  POS(865, 39)
};

static TAB_NUM t_lambda_324[] = {
  0, // locals
  0, // parameters
  // syntax_error "'>'"
  func_syntax_error, 1, string_3, TAIL_CALL,
  POS(867, 35)
};

static TAB_NUM t_lambda_325[] = {
  0, // locals
  0, // parameters
  //  undefined pragma
  LET, 2, var_undefined, var_849_20_pragma, TAIL_CALL,
  POS(868, 31)
};

static TAB_NUM t_lambda_326[] = {
  0, // locals
  0, // parameters
  // syntax_error "space character"
  func_syntax_error, 1, str_space_character, TAIL_CALL,
  POS(870, 27)
};

static TAB_NUM t_lambda_327[] = {
  0, // locals
  0, // parameters
  // syntax_error "'w'"
  func_syntax_error, 1, str_w, TAIL_CALL,
  POS(872, 23)
};

static TAB_NUM t_lambda_328[] = {
  0, // locals
  0, // parameters
  // syntax_error "'o'"
  func_syntax_error, 1, str_o, TAIL_CALL,
  POS(874, 19)
};

static TAB_NUM t_lambda_329[] = {
  0, // locals
  0, // parameters
  // syntax_error "'l'"
  func_syntax_error, 1, str_l, TAIL_CALL,
  POS(876, 15)
};

static TAB_NUM t_lambda_330[] = {
  0, // locals
  0, // parameters
  // syntax_error "'l'"
  func_syntax_error, 1, str_l, TAIL_CALL,
  POS(878, 11)
};

static TAB_NUM t_lambda_331[] = {
  0, // locals
  0, // parameters
  // syntax_error "'a'"
  func_syntax_error, 1, str_a, TAIL_CALL,
  POS(880, 7)
};

static TAB_NUM t_func_parse_filename[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 4, lambda_332, lambda_337, lambda_341, lambda_344, TAIL_CALL,
  POS(883, 3)
};

static TAB_NUM t_lambda_332[] = {
  5, // locals
  0, // parameters
  // text(1) >= 'a' && text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z')
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) >= 'a' && text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z')
  var_std__less, 2, LOCAL(1), chr_97, 1, LOCAL(2),
  // text(1) >= 'a' && text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) >= 'a' && text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z')
  var_std__and, 2, LOCAL(3), lambda_333, 1, LOCAL(4),
  // text(1) >= 'a' && text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z')
  var_std__or, 2, LOCAL(4), lambda_334, 1, LOCAL(5),
  // 
  LET, 2, LOCAL(5), lambda_336, TAIL_CALL,
  POS(885, 8),
  POS(885, 8),
  POS(885, 8),
  POS(885, 8),
  POS(885, 8),
  POS(884, 7)
};

static TAB_NUM t_lambda_333[] = {
  3, // locals
  0, // parameters
  // text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z')
  var_text, 1, num_1, 1, LOCAL(1),
  // z') || (text(1) >= 'A' && text(1) <= 'Z')
  var_std__less, 2, chr_122, LOCAL(1), 1, LOCAL(2),
  // z') || (text(1) >= 'A' && text(1) <= 'Z')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z')
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(885, 26),
  POS(885, 38),
  POS(885, 38),
  POS(885, 26)
};

static TAB_NUM t_lambda_334[] = {
  4, // locals
  0, // parameters
  // text(1) >= 'A' && text(1) <= 'Z')
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) >= 'A' && text(1) <= 'Z')
  var_std__less, 2, LOCAL(1), chr_65, 1, LOCAL(2),
  // text(1) >= 'A' && text(1) <= 'Z')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) >= 'A' && text(1) <= 'Z')
  var_std__and, 2, LOCAL(3), lambda_335, 1, LOCAL(4),
  // text(1) >= 'A' && text(1) <= 'Z')
  LET, 1, LOCAL(4), TAIL_CALL,
  POS(885, 46),
  POS(885, 46),
  POS(885, 46),
  POS(885, 46),
  POS(885, 46)
};

static TAB_NUM t_lambda_335[] = {
  3, // locals
  0, // parameters
  // text(1) <= 'Z')
  var_text, 1, num_1, 1, LOCAL(1),
  // Z')
  var_std__less, 2, chr_90, LOCAL(1), 1, LOCAL(2),
  // Z')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) <= 'Z')
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(885, 64),
  POS(885, 76),
  POS(885, 76),
  POS(885, 64)
};

static TAB_NUM t_lambda_336[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_more_filename_characters
  func_parse_more_filename_characters, 0, TAIL_CALL,
  POS(887, 9),
  POS(888, 9)
};

static TAB_NUM t_lambda_337[] = {
  3, // locals
  0, // parameters
  // text(1) == '.'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '.'
  var_std__equal, 2, LOCAL(1), chr_46, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_338, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_340, TAIL_CALL,
  POS(891, 9),
  POS(891, 9),
  POS(890, 9),
  POS(889, 7)
};

static TAB_NUM t_lambda_338[] = {
  3, // locals
  0, // parameters
  // text(2) == '.'
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '.'
  var_std__equal, 2, LOCAL(1), chr_46, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_339, 1, LOCAL(3),
  // text(2) == '.'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(892, 9),
  POS(892, 9),
  POS(890, 9),
  POS(892, 9)
};

static TAB_NUM t_lambda_339[] = {
  2, // locals
  0, // parameters
  // text(3) == '/'
  var_text, 1, num_3, 1, LOCAL(1),
  // text(3) == '/'
  var_std__equal, 2, LOCAL(1), chr_47, 1, LOCAL(2),
  // text(3) == '/'
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(893, 9),
  POS(893, 9),
  POS(893, 9)
};

static TAB_NUM t_lambda_340[] = {
  0, // locals
  0, // parameters
  // range &text 4 -1
  var_range, 3, var_text, num_4, minus_num_1, 1, var_text,
  // parse_filename
  func_parse_filename, 0, TAIL_CALL,
  POS(895, 9),
  POS(896, 9)
};

static TAB_NUM t_lambda_341[] = {
  3, // locals
  0, // parameters
  // text(1) == '.'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '.'
  var_std__equal, 2, LOCAL(1), chr_46, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_342, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_343, TAIL_CALL,
  POS(899, 9),
  POS(899, 9),
  POS(898, 9),
  POS(897, 7)
};

static TAB_NUM t_lambda_342[] = {
  2, // locals
  0, // parameters
  // text(2) == '/'
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '/'
  var_std__equal, 2, LOCAL(1), chr_47, 1, LOCAL(2),
  // text(2) == '/'
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(900, 9),
  POS(900, 9),
  POS(900, 9)
};

static TAB_NUM t_lambda_343[] = {
  0, // locals
  0, // parameters
  // range &text 3 -1
  var_range, 3, var_text, num_3, minus_num_1, 1, var_text,
  // parse_filename_characters
  func_parse_filename_characters, 0, TAIL_CALL,
  POS(902, 9),
  POS(903, 9)
};

static TAB_NUM t_lambda_344[] = {
  0, // locals
  0, // parameters
  //  true:
  LET, 2, var_true, lambda_345, TAIL_CALL,
  POS(904, 7)
};

static TAB_NUM t_lambda_345[] = {
  0, // locals
  0, // parameters
  // syntax_error "filename"
  func_syntax_error, 1, str_filename, TAIL_CALL,
  POS(905, 7)
};

static TAB_NUM t_func_parse_filename_characters[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 2, lambda_346, lambda_351, TAIL_CALL,
  POS(908, 3)
};

static TAB_NUM t_lambda_346[] = {
  5, // locals
  0, // parameters
  // text(1) >= 'a' && text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z')
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) >= 'a' && text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z')
  var_std__less, 2, LOCAL(1), chr_97, 1, LOCAL(2),
  // text(1) >= 'a' && text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) >= 'a' && text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z')
  var_std__and, 2, LOCAL(3), lambda_347, 1, LOCAL(4),
  // text(1) >= 'a' && text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z')
  var_std__or, 2, LOCAL(4), lambda_348, 1, LOCAL(5),
  // 
  LET, 2, LOCAL(5), lambda_350, TAIL_CALL,
  POS(910, 8),
  POS(910, 8),
  POS(910, 8),
  POS(910, 8),
  POS(910, 8),
  POS(909, 7)
};

static TAB_NUM t_lambda_347[] = {
  3, // locals
  0, // parameters
  // text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z')
  var_text, 1, num_1, 1, LOCAL(1),
  // z') || (text(1) >= 'A' && text(1) <= 'Z')
  var_std__less, 2, chr_122, LOCAL(1), 1, LOCAL(2),
  // z') || (text(1) >= 'A' && text(1) <= 'Z')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z')
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(910, 26),
  POS(910, 38),
  POS(910, 38),
  POS(910, 26)
};

static TAB_NUM t_lambda_348[] = {
  4, // locals
  0, // parameters
  // text(1) >= 'A' && text(1) <= 'Z')
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) >= 'A' && text(1) <= 'Z')
  var_std__less, 2, LOCAL(1), chr_65, 1, LOCAL(2),
  // text(1) >= 'A' && text(1) <= 'Z')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) >= 'A' && text(1) <= 'Z')
  var_std__and, 2, LOCAL(3), lambda_349, 1, LOCAL(4),
  // text(1) >= 'A' && text(1) <= 'Z')
  LET, 1, LOCAL(4), TAIL_CALL,
  POS(910, 46),
  POS(910, 46),
  POS(910, 46),
  POS(910, 46),
  POS(910, 46)
};

static TAB_NUM t_lambda_349[] = {
  3, // locals
  0, // parameters
  // text(1) <= 'Z')
  var_text, 1, num_1, 1, LOCAL(1),
  // Z')
  var_std__less, 2, chr_90, LOCAL(1), 1, LOCAL(2),
  // Z')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) <= 'Z')
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(910, 64),
  POS(910, 76),
  POS(910, 76),
  POS(910, 64)
};

static TAB_NUM t_lambda_350[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_more_filename_characters
  func_parse_more_filename_characters, 0, TAIL_CALL,
  POS(912, 9),
  POS(913, 9)
};

static TAB_NUM t_lambda_351[] = {
  0, // locals
  0, // parameters
  //  true:
  LET, 2, var_true, lambda_352, TAIL_CALL,
  POS(914, 7)
};

static TAB_NUM t_lambda_352[] = {
  0, // locals
  0, // parameters
  // syntax_error "filename characters"
  func_syntax_error, 1, str_filename_charact, TAIL_CALL,
  POS(915, 7)
};

static TAB_NUM t_func_parse_more_filename_characters[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 4, lambda_353, lambda_360, lambda_362, lambda_364, TAIL_CALL,
  POS(918, 3)
};

static TAB_NUM t_lambda_353[] = {
  5, // locals
  0, // parameters
  // text(1) >= 'a' && text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) >= 'a' && text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  var_std__less, 2, LOCAL(1), chr_97, 1, LOCAL(2),
  // text(1) >= 'a' && text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) >= 'a' && text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  var_std__and, 2, LOCAL(3), lambda_354, 1, LOCAL(4),
  // text(1) >= 'a' && text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  var_std__or, 2, LOCAL(4), lambda_355, 1, LOCAL(5),
  // 
  LET, 2, LOCAL(5), lambda_359, TAIL_CALL,
  POS(920, 8),
  POS(920, 8),
  POS(920, 8),
  POS(920, 8),
  POS(920, 8),
  POS(919, 7)
};

static TAB_NUM t_lambda_354[] = {
  3, // locals
  0, // parameters
  // text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  var_text, 1, num_1, 1, LOCAL(1),
  // z') || (text(1) >= 'A' && text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  var_std__less, 2, chr_122, LOCAL(1), 1, LOCAL(2),
  // z') || (text(1) >= 'A' && text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(920, 26),
  POS(920, 38),
  POS(920, 38),
  POS(920, 26)
};

static TAB_NUM t_lambda_355[] = {
  5, // locals
  0, // parameters
  // text(1) >= 'A' && text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) >= 'A' && text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  var_std__less, 2, LOCAL(1), chr_65, 1, LOCAL(2),
  // text(1) >= 'A' && text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) >= 'A' && text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  var_std__and, 2, LOCAL(3), lambda_356, 1, LOCAL(4),
  // text(1) >= 'A' && text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  var_std__or, 2, LOCAL(4), lambda_357, 1, LOCAL(5),
  // (text(1) >= 'A' && text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  LET, 1, LOCAL(5), TAIL_CALL,
  POS(920, 46),
  POS(920, 46),
  POS(920, 46),
  POS(920, 46),
  POS(920, 46),
  POS(920, 45)
};

static TAB_NUM t_lambda_356[] = {
  3, // locals
  0, // parameters
  // text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  var_text, 1, num_1, 1, LOCAL(1),
  // Z') || (text(1) >= '0' && text(1) <= '9')
  var_std__less, 2, chr_90, LOCAL(1), 1, LOCAL(2),
  // Z') || (text(1) >= '0' && text(1) <= '9')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(920, 64),
  POS(920, 76),
  POS(920, 76),
  POS(920, 64)
};

static TAB_NUM t_lambda_357[] = {
  4, // locals
  0, // parameters
  // text(1) >= '0' && text(1) <= '9')
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) >= '0' && text(1) <= '9')
  var_std__less, 2, LOCAL(1), chr_48, 1, LOCAL(2),
  // text(1) >= '0' && text(1) <= '9')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) >= '0' && text(1) <= '9')
  var_std__and, 2, LOCAL(3), lambda_358, 1, LOCAL(4),
  // text(1) >= '0' && text(1) <= '9')
  LET, 1, LOCAL(4), TAIL_CALL,
  POS(920, 84),
  POS(920, 84),
  POS(920, 84),
  POS(920, 84),
  POS(920, 84)
};

static TAB_NUM t_lambda_358[] = {
  3, // locals
  0, // parameters
  // text(1) <= '9')
  var_text, 1, num_1, 1, LOCAL(1),
  // 9')
  var_std__less, 2, chr_57, LOCAL(1), 1, LOCAL(2),
  // 9')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) <= '9')
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(920, 102),
  POS(920, 114),
  POS(920, 114),
  POS(920, 102)
};

static TAB_NUM t_lambda_359[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_more_filename_characters
  func_parse_more_filename_characters, 0, TAIL_CALL,
  POS(922, 9),
  POS(923, 9)
};

static TAB_NUM t_lambda_360[] = {
  2, // locals
  0, // parameters
  // text(1) == '_'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '_'
  var_std__equal, 2, LOCAL(1), chr_95, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_361, TAIL_CALL,
  POS(925, 7),
  POS(925, 7),
  POS(924, 7)
};

static TAB_NUM t_lambda_361[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_more_filename_words
  func_parse_more_filename_words, 0, TAIL_CALL,
  POS(927, 9),
  POS(928, 9)
};

static TAB_NUM t_lambda_362[] = {
  2, // locals
  0, // parameters
  // text(1) == '/'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '/'
  var_std__equal, 2, LOCAL(1), chr_47, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_363, TAIL_CALL,
  POS(930, 7),
  POS(930, 7),
  POS(929, 7)
};

static TAB_NUM t_lambda_363[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_filename_characters
  func_parse_filename_characters, 0, TAIL_CALL,
  POS(932, 9),
  POS(933, 9)
};

static TAB_NUM t_lambda_364[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_365, TAIL_CALL,
  POS(934, 7)
};

static TAB_NUM t_lambda_365[] = {
  4, // locals
  0, // parameters
  // length_of(str)-length_of(text))
  var_length_of, 1, var_str, 1, LOCAL(1),
  // length_of(text))
  var_length_of, 1, var_text, 1, LOCAL(2),
  // length_of(str)-length_of(text))
  var_std__minus, 2, LOCAL(1), LOCAL(2), 1, LOCAL(3),
  // range(str 1 length_of(str)-length_of(text))
  var_range, 3, var_str, num_1, LOCAL(3), 1, LOCAL(4),
  //  text range(str 1 length_of(str)-length_of(text))
  LET, 2, var_text, LOCAL(4), TAIL_CALL,
  POS(936, 27),
  POS(936, 42),
  POS(936, 27),
  POS(936, 15),
  POS(936, 9)
};

static TAB_NUM t_func_parse_more_filename_words[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 2, lambda_366, lambda_373, TAIL_CALL,
  POS(939, 3)
};

static TAB_NUM t_lambda_366[] = {
  5, // locals
  0, // parameters
  // text(1) >= 'a' && text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) >= 'a' && text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  var_std__less, 2, LOCAL(1), chr_97, 1, LOCAL(2),
  // text(1) >= 'a' && text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) >= 'a' && text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  var_std__and, 2, LOCAL(3), lambda_367, 1, LOCAL(4),
  // text(1) >= 'a' && text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  var_std__or, 2, LOCAL(4), lambda_368, 1, LOCAL(5),
  // 
  LET, 2, LOCAL(5), lambda_372, TAIL_CALL,
  POS(941, 8),
  POS(941, 8),
  POS(941, 8),
  POS(941, 8),
  POS(941, 8),
  POS(940, 7)
};

static TAB_NUM t_lambda_367[] = {
  3, // locals
  0, // parameters
  // text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  var_text, 1, num_1, 1, LOCAL(1),
  // z') || (text(1) >= 'A' && text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  var_std__less, 2, chr_122, LOCAL(1), 1, LOCAL(2),
  // z') || (text(1) >= 'A' && text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(941, 26),
  POS(941, 38),
  POS(941, 38),
  POS(941, 26)
};

static TAB_NUM t_lambda_368[] = {
  5, // locals
  0, // parameters
  // text(1) >= 'A' && text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) >= 'A' && text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  var_std__less, 2, LOCAL(1), chr_65, 1, LOCAL(2),
  // text(1) >= 'A' && text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) >= 'A' && text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  var_std__and, 2, LOCAL(3), lambda_369, 1, LOCAL(4),
  // text(1) >= 'A' && text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  var_std__or, 2, LOCAL(4), lambda_370, 1, LOCAL(5),
  // (text(1) >= 'A' && text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  LET, 1, LOCAL(5), TAIL_CALL,
  POS(941, 46),
  POS(941, 46),
  POS(941, 46),
  POS(941, 46),
  POS(941, 46),
  POS(941, 45)
};

static TAB_NUM t_lambda_369[] = {
  3, // locals
  0, // parameters
  // text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  var_text, 1, num_1, 1, LOCAL(1),
  // Z') || (text(1) >= '0' && text(1) <= '9')
  var_std__less, 2, chr_90, LOCAL(1), 1, LOCAL(2),
  // Z') || (text(1) >= '0' && text(1) <= '9')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(941, 64),
  POS(941, 76),
  POS(941, 76),
  POS(941, 64)
};

static TAB_NUM t_lambda_370[] = {
  4, // locals
  0, // parameters
  // text(1) >= '0' && text(1) <= '9')
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) >= '0' && text(1) <= '9')
  var_std__less, 2, LOCAL(1), chr_48, 1, LOCAL(2),
  // text(1) >= '0' && text(1) <= '9')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) >= '0' && text(1) <= '9')
  var_std__and, 2, LOCAL(3), lambda_371, 1, LOCAL(4),
  // text(1) >= '0' && text(1) <= '9')
  LET, 1, LOCAL(4), TAIL_CALL,
  POS(941, 84),
  POS(941, 84),
  POS(941, 84),
  POS(941, 84),
  POS(941, 84)
};

static TAB_NUM t_lambda_371[] = {
  3, // locals
  0, // parameters
  // text(1) <= '9')
  var_text, 1, num_1, 1, LOCAL(1),
  // 9')
  var_std__less, 2, chr_57, LOCAL(1), 1, LOCAL(2),
  // 9')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) <= '9')
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(941, 102),
  POS(941, 114),
  POS(941, 114),
  POS(941, 102)
};

static TAB_NUM t_lambda_372[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_more_filename_characters
  func_parse_more_filename_characters, 0, TAIL_CALL,
  POS(943, 9),
  POS(944, 9)
};

static TAB_NUM t_lambda_373[] = {
  0, // locals
  0, // parameters
  //  true:
  LET, 2, var_true, lambda_374, TAIL_CALL,
  POS(945, 7)
};

static TAB_NUM t_lambda_374[] = {
  0, // locals
  0, // parameters
  // syntax_error "more filename words"
  func_syntax_error, 1, str_more_filename_wo, TAIL_CALL,
  POS(946, 7)
};

static TAB_NUM t_func_parse_alias[] = {
  2, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, LOCAL(2),
  // !str text
  LET, 1, var_text, 1, var_str,
  // parse_name !text $name
  func_parse_name, 0, 2, var_text, var_951_18_name,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_375, lambda_376, TAIL_CALL,
  POS(949, 3),
  POS(950, 3),
  POS(951, 3),
  POS(953, 10),
  POS(952, 3)
};

static TAB_NUM t_lambda_375[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_text, var_951_18_name, TAIL_CALL,
  POS(954, 7)
};

static TAB_NUM t_lambda_376[] = {
  0, // locals
  0, // parameters
  //  undefined name
  LET, 2, var_undefined, var_951_18_name, TAIL_CALL,
  POS(957, 7)
};

static TAB_NUM t_func_parse_equal_sign[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 3, lambda_377, lambda_381, lambda_383, TAIL_CALL,
  POS(960, 3)
};

static TAB_NUM t_lambda_377[] = {
  3, // locals
  0, // parameters
  // text(1) == ' '
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_378, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_380, TAIL_CALL,
  POS(963, 9),
  POS(963, 9),
  POS(962, 9),
  POS(961, 7)
};

static TAB_NUM t_lambda_378[] = {
  3, // locals
  0, // parameters
  // text(2) == '='
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '='
  var_std__equal, 2, LOCAL(1), chr_61, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_379, 1, LOCAL(3),
  // text(2) == '='
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(964, 9),
  POS(964, 9),
  POS(962, 9),
  POS(964, 9)
};

static TAB_NUM t_lambda_379[] = {
  2, // locals
  0, // parameters
  // text(3) == ' '
  var_text, 1, num_3, 1, LOCAL(1),
  // text(3) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // text(3) == ' '
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(965, 9),
  POS(965, 9),
  POS(965, 9)
};

static TAB_NUM t_lambda_380[] = {
  1, // locals
  0, // parameters
  // range(text 4 -1) undefined
  var_range, 3, var_text, num_4, minus_num_1, 1, LOCAL(1),
  //  range(text 4 -1) undefined
  LET, 2, LOCAL(1), var_undefined, TAIL_CALL,
  POS(966, 10),
  POS(966, 9)
};

static TAB_NUM t_lambda_381[] = {
  2, // locals
  0, // parameters
  // text(1) == '='
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '='
  var_std__equal, 2, LOCAL(1), chr_61, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_382, TAIL_CALL,
  POS(968, 7),
  POS(968, 7),
  POS(967, 7)
};

static TAB_NUM t_lambda_382[] = {
  1, // locals
  0, // parameters
  // range(text 2 -1) undefined
  var_range, 3, var_text, num_2, minus_num_1, 1, LOCAL(1),
  //  range(text 2 -1) undefined
  LET, 2, LOCAL(1), var_undefined, TAIL_CALL,
  POS(969, 10),
  POS(969, 9)
};

static TAB_NUM t_lambda_383[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_384, TAIL_CALL,
  POS(970, 7)
};

static TAB_NUM t_lambda_384[] = {
  0, // locals
  0, // parameters
  // syntax_error "equal sign"
  func_syntax_error, 1, str_equal_sign, TAIL_CALL,
  POS(973, 9)
};

static TAB_NUM t_func_parse_version[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 2, lambda_385, lambda_388, TAIL_CALL,
  POS(976, 3)
};

static TAB_NUM t_lambda_385[] = {
  4, // locals
  0, // parameters
  // text(1) >= '1' && text(1) <= '9')
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) >= '1' && text(1) <= '9')
  var_std__less, 2, LOCAL(1), chr_49, 1, LOCAL(2),
  // text(1) >= '1' && text(1) <= '9')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) >= '1' && text(1) <= '9')
  var_std__and, 2, LOCAL(3), lambda_386, 1, LOCAL(4),
  // 
  LET, 2, LOCAL(4), lambda_387, TAIL_CALL,
  POS(978, 8),
  POS(978, 8),
  POS(978, 8),
  POS(978, 8),
  POS(977, 7)
};

static TAB_NUM t_lambda_386[] = {
  3, // locals
  0, // parameters
  // text(1) <= '9')
  var_text, 1, num_1, 1, LOCAL(1),
  // 9')
  var_std__less, 2, chr_57, LOCAL(1), 1, LOCAL(2),
  // 9')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) <= '9')
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(978, 26),
  POS(978, 38),
  POS(978, 38),
  POS(978, 26)
};

static TAB_NUM t_lambda_387[] = {
  0, // locals
  0, // parameters
  // !str text
  LET, 1, var_text, 1, var_str,
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_version_no_without_prefix
  func_parse_version_no_without_prefix, 0, TAIL_CALL,
  POS(980, 9),
  POS(981, 9),
  POS(982, 9)
};

static TAB_NUM t_lambda_388[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_389, TAIL_CALL,
  POS(983, 7)
};

static TAB_NUM t_lambda_389[] = {
  0, // locals
  0, // parameters
  // !expected "version"
  LET, 1, str_version, 1, var_expected,
  // !at text
  LET, 1, var_text, 1, var_at,
  // parse_unstable
  func_parse_unstable, 0, TAIL_CALL,
  POS(986, 9),
  POS(987, 9),
  POS(988, 9)
};

static TAB_NUM t_func_parse_version_no_without_prefix[] = {
  1, // locals
  0, // parameters
  // $position str
  LET, 1, var_str, 1, var_991_1_position,
  // parse_zero_or_more_digits !text $major
  func_parse_zero_or_more_digits, 0, 2, var_text, var_992_33_major,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_15_text_is_defined, lambda_394, TAIL_CALL,
  POS(991, 3),
  POS(992, 3),
  POS(994, 10),
  POS(993, 3)
};

static TAB_NUM t_lambda_15_text_is_defined[] = {
  2, // locals
  0, // parameters
  // text(1) == '.':
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '.':
  var_std__equal, 2, LOCAL(1), chr_46, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_390, lambda_393, TAIL_CALL,
  POS(996, 9),
  POS(996, 9),
  POS(995, 7)
};

static TAB_NUM t_lambda_390[] = {
  1, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // !str text
  LET, 1, var_text, 1, var_str,
  // parse_minor !text $minor
  func_parse_minor, 0, 2, var_text, var_999_19_minor,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_391, lambda_392, TAIL_CALL,
  POS(997, 11),
  POS(998, 11),
  POS(999, 11),
  POS(1001, 18),
  POS(1000, 11)
};

static TAB_NUM t_lambda_391[] = {
  1, // locals
  0, // parameters
  // funky_types::version_no
  LET, -4, var_funky_types__version_no, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_991_1_position, var_funky__major_of, var_992_33_major, var_funky__minor_of, var_999_19_minor, LOCAL(1),
  // 
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(1004, 15),
  POS(1002, 15)
};

static TAB_NUM t_lambda_392[] = {
  0, // locals
  0, // parameters
  //  undefined minor
  LET, 2, var_undefined, var_999_19_minor, TAIL_CALL,
  POS(1009, 15)
};

static TAB_NUM t_lambda_393[] = {
  0, // locals
  0, // parameters
  // syntax_error "'.'"
  func_syntax_error, 1, string_5, TAIL_CALL,
  POS(1011, 11)
};

static TAB_NUM t_lambda_394[] = {
  0, // locals
  0, // parameters
  //  undefined major
  LET, 2, var_undefined, var_992_33_major, TAIL_CALL,
  POS(1012, 7)
};

static TAB_NUM t_func_parse_minor[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 2, lambda_395, lambda_398, TAIL_CALL,
  POS(1015, 3)
};

static TAB_NUM t_lambda_395[] = {
  4, // locals
  0, // parameters
  // text(1) >= '0' && text(1) <= '9')
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) >= '0' && text(1) <= '9')
  var_std__less, 2, LOCAL(1), chr_48, 1, LOCAL(2),
  // text(1) >= '0' && text(1) <= '9')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) >= '0' && text(1) <= '9')
  var_std__and, 2, LOCAL(3), lambda_396, 1, LOCAL(4),
  // 
  LET, 2, LOCAL(4), lambda_397, TAIL_CALL,
  POS(1017, 8),
  POS(1017, 8),
  POS(1017, 8),
  POS(1017, 8),
  POS(1016, 7)
};

static TAB_NUM t_lambda_396[] = {
  3, // locals
  0, // parameters
  // text(1) <= '9')
  var_text, 1, num_1, 1, LOCAL(1),
  // 9')
  var_std__less, 2, chr_57, LOCAL(1), 1, LOCAL(2),
  // 9')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) <= '9')
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(1017, 26),
  POS(1017, 38),
  POS(1017, 38),
  POS(1017, 26)
};

static TAB_NUM t_lambda_397[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_zero_or_more_digits
  func_parse_zero_or_more_digits, 0, TAIL_CALL,
  POS(1019, 9),
  POS(1020, 9)
};

static TAB_NUM t_lambda_398[] = {
  0, // locals
  0, // parameters
  //  true:
  LET, 2, var_true, lambda_399, TAIL_CALL,
  POS(1021, 7)
};

static TAB_NUM t_lambda_399[] = {
  0, // locals
  0, // parameters
  // syntax_error "minor"
  func_syntax_error, 1, str_minor, TAIL_CALL,
  POS(1022, 7)
};

static TAB_NUM t_func_parse_zero_or_more_digits[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 2, lambda_400, lambda_403, TAIL_CALL,
  POS(1025, 3)
};

static TAB_NUM t_lambda_400[] = {
  4, // locals
  0, // parameters
  // text(1) >= '0' && text(1) <= '9')
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) >= '0' && text(1) <= '9')
  var_std__less, 2, LOCAL(1), chr_48, 1, LOCAL(2),
  // text(1) >= '0' && text(1) <= '9')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) >= '0' && text(1) <= '9')
  var_std__and, 2, LOCAL(3), lambda_401, 1, LOCAL(4),
  // 
  LET, 2, LOCAL(4), lambda_402, TAIL_CALL,
  POS(1027, 8),
  POS(1027, 8),
  POS(1027, 8),
  POS(1027, 8),
  POS(1026, 7)
};

static TAB_NUM t_lambda_401[] = {
  3, // locals
  0, // parameters
  // text(1) <= '9')
  var_text, 1, num_1, 1, LOCAL(1),
  // 9')
  var_std__less, 2, chr_57, LOCAL(1), 1, LOCAL(2),
  // 9')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) <= '9')
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(1027, 26),
  POS(1027, 38),
  POS(1027, 38),
  POS(1027, 26)
};

static TAB_NUM t_lambda_402[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_zero_or_more_digits
  func_parse_zero_or_more_digits, 0, TAIL_CALL,
  POS(1029, 9),
  POS(1030, 9)
};

static TAB_NUM t_lambda_403[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_404, TAIL_CALL,
  POS(1031, 7)
};

static TAB_NUM t_lambda_404[] = {
  4, // locals
  0, // parameters
  // length_of(str)-length_of(text))
  var_length_of, 1, var_str, 1, LOCAL(1),
  // length_of(text))
  var_length_of, 1, var_text, 1, LOCAL(2),
  // length_of(str)-length_of(text))
  var_std__minus, 2, LOCAL(1), LOCAL(2), 1, LOCAL(3),
  // range(str 1 length_of(str)-length_of(text))
  var_range, 3, var_str, num_1, LOCAL(3), 1, LOCAL(4),
  //  text range(str 1 length_of(str)-length_of(text))
  LET, 2, var_text, LOCAL(4), TAIL_CALL,
  POS(1033, 27),
  POS(1033, 42),
  POS(1033, 27),
  POS(1033, 15),
  POS(1033, 9)
};

static TAB_NUM t_func_parse_unstable[] = {
  2, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_1036_1_position,
  // text(1) == 'u':
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == 'u':
  var_std__equal, 2, LOCAL(1), chr_117, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_405, lambda_420, TAIL_CALL,
  POS(1036, 3),
  POS(1038, 5),
  POS(1038, 5),
  POS(1037, 3)
};

static TAB_NUM t_lambda_405[] = {
  2, // locals
  0, // parameters
  // text(2) == 'n':
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == 'n':
  var_std__equal, 2, LOCAL(1), chr_110, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_406, lambda_419, TAIL_CALL,
  POS(1040, 9),
  POS(1040, 9),
  POS(1039, 7)
};

static TAB_NUM t_lambda_406[] = {
  2, // locals
  0, // parameters
  // text(3) == 's':
  var_text, 1, num_3, 1, LOCAL(1),
  // text(3) == 's':
  var_std__equal, 2, LOCAL(1), chr_115, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_407, lambda_418, TAIL_CALL,
  POS(1042, 13),
  POS(1042, 13),
  POS(1041, 11)
};

static TAB_NUM t_lambda_407[] = {
  2, // locals
  0, // parameters
  // text(4) == 't':
  var_text, 1, num_4, 1, LOCAL(1),
  // text(4) == 't':
  var_std__equal, 2, LOCAL(1), chr_116, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_408, lambda_417, TAIL_CALL,
  POS(1044, 17),
  POS(1044, 17),
  POS(1043, 15)
};

static TAB_NUM t_lambda_408[] = {
  2, // locals
  0, // parameters
  // text(5) == 'a':
  var_text, 1, num_5, 1, LOCAL(1),
  // text(5) == 'a':
  var_std__equal, 2, LOCAL(1), chr_97, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_409, lambda_416, TAIL_CALL,
  POS(1046, 21),
  POS(1046, 21),
  POS(1045, 19)
};

static TAB_NUM t_lambda_409[] = {
  2, // locals
  0, // parameters
  // text(6) == 'b':
  var_text, 1, num_6, 1, LOCAL(1),
  // text(6) == 'b':
  var_std__equal, 2, LOCAL(1), chr_98, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_410, lambda_415, TAIL_CALL,
  POS(1048, 25),
  POS(1048, 25),
  POS(1047, 23)
};

static TAB_NUM t_lambda_410[] = {
  2, // locals
  0, // parameters
  // text(7) == 'l':
  var_text, 1, num_7, 1, LOCAL(1),
  // text(7) == 'l':
  var_std__equal, 2, LOCAL(1), chr_108, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_411, lambda_414, TAIL_CALL,
  POS(1050, 29),
  POS(1050, 29),
  POS(1049, 27)
};

static TAB_NUM t_lambda_411[] = {
  2, // locals
  0, // parameters
  // text(8) == 'e'
  var_text, 1, num_8, 1, LOCAL(1),
  // text(8) == 'e'
  var_std__equal, 2, LOCAL(1), chr_101, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_412, lambda_413, TAIL_CALL,
  POS(1052, 33),
  POS(1052, 33),
  POS(1051, 31)
};

static TAB_NUM t_lambda_412[] = {
  2, // locals
  0, // parameters
  // range(text 9 -1)
  var_range, 3, var_text, num_9, minus_num_1, 1, LOCAL(1),
  // funky_types::unstable
  LET, -2, var_funky_types__unstable, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_1036_1_position, LOCAL(2),
  // 
  LET, 2, LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(1054, 35),
  POS(1055, 35),
  POS(1053, 35)
};

static TAB_NUM t_lambda_413[] = {
  0, // locals
  0, // parameters
  // syntax_error "'e'"
  func_syntax_error, 1, str_e, TAIL_CALL,
  POS(1059, 35)
};

static TAB_NUM t_lambda_414[] = {
  0, // locals
  0, // parameters
  // syntax_error "'l'"
  func_syntax_error, 1, str_l, TAIL_CALL,
  POS(1061, 31)
};

static TAB_NUM t_lambda_415[] = {
  0, // locals
  0, // parameters
  // syntax_error "'b'"
  func_syntax_error, 1, str_b, TAIL_CALL,
  POS(1063, 27)
};

static TAB_NUM t_lambda_416[] = {
  0, // locals
  0, // parameters
  // syntax_error "'a'"
  func_syntax_error, 1, str_a, TAIL_CALL,
  POS(1065, 23)
};

static TAB_NUM t_lambda_417[] = {
  0, // locals
  0, // parameters
  // syntax_error "'t'"
  func_syntax_error, 1, str_t, TAIL_CALL,
  POS(1067, 19)
};

static TAB_NUM t_lambda_418[] = {
  0, // locals
  0, // parameters
  // syntax_error "'s'"
  func_syntax_error, 1, str_s, TAIL_CALL,
  POS(1069, 15)
};

static TAB_NUM t_lambda_419[] = {
  0, // locals
  0, // parameters
  // syntax_error "'n'"
  func_syntax_error, 1, str_n, TAIL_CALL,
  POS(1071, 11)
};

static TAB_NUM t_lambda_420[] = {
  0, // locals
  0, // parameters
  // syntax_error "'u'"
  func_syntax_error, 1, str_u, TAIL_CALL,
  POS(1073, 7)
};

static TAB_NUM t_func_parse_pragma[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 2, lambda_421, lambda_428, TAIL_CALL,
  POS(1076, 3)
};

static TAB_NUM t_lambda_421[] = {
  3, // locals
  0, // parameters
  // text(1) == 'h'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == 'h'
  var_std__equal, 2, LOCAL(1), chr_104, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_422, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_427, TAIL_CALL,
  POS(1079, 9),
  POS(1079, 9),
  POS(1078, 9),
  POS(1077, 7)
};

static TAB_NUM t_lambda_422[] = {
  3, // locals
  0, // parameters
  // text(2) == 'i'
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == 'i'
  var_std__equal, 2, LOCAL(1), chr_105, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_423, 1, LOCAL(3),
  // text(2) == 'i'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(1080, 9),
  POS(1080, 9),
  POS(1078, 9),
  POS(1080, 9)
};

static TAB_NUM t_lambda_423[] = {
  3, // locals
  0, // parameters
  // text(3) == 'd'
  var_text, 1, num_3, 1, LOCAL(1),
  // text(3) == 'd'
  var_std__equal, 2, LOCAL(1), chr_100, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_424, 1, LOCAL(3),
  // text(3) == 'd'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(1081, 9),
  POS(1081, 9),
  POS(1078, 9),
  POS(1081, 9)
};

static TAB_NUM t_lambda_424[] = {
  3, // locals
  0, // parameters
  // text(4) == 'd'
  var_text, 1, num_4, 1, LOCAL(1),
  // text(4) == 'd'
  var_std__equal, 2, LOCAL(1), chr_100, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_425, 1, LOCAL(3),
  // text(4) == 'd'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(1082, 9),
  POS(1082, 9),
  POS(1078, 9),
  POS(1082, 9)
};

static TAB_NUM t_lambda_425[] = {
  3, // locals
  0, // parameters
  // text(5) == 'e'
  var_text, 1, num_5, 1, LOCAL(1),
  // text(5) == 'e'
  var_std__equal, 2, LOCAL(1), chr_101, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_426, 1, LOCAL(3),
  // text(5) == 'e'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(1083, 9),
  POS(1083, 9),
  POS(1078, 9),
  POS(1083, 9)
};

static TAB_NUM t_lambda_426[] = {
  2, // locals
  0, // parameters
  // text(6) == 'n'
  var_text, 1, num_6, 1, LOCAL(1),
  // text(6) == 'n'
  var_std__equal, 2, LOCAL(1), chr_110, 1, LOCAL(2),
  // text(6) == 'n'
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1084, 9),
  POS(1084, 9),
  POS(1084, 9)
};

static TAB_NUM t_lambda_427[] = {
  0, // locals
  0, // parameters
  // range &text 7 -1
  var_range, 3, var_text, num_7, minus_num_1, 1, var_text,
  // parse_allow_hidden_without_prefix
  func_parse_allow_hidden_without_prefix, 0, TAIL_CALL,
  POS(1086, 9),
  POS(1087, 9)
};

static TAB_NUM t_lambda_428[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_429, TAIL_CALL,
  POS(1088, 7)
};

static TAB_NUM t_lambda_429[] = {
  0, // locals
  0, // parameters
  // !expected "pragma"
  LET, 1, str_pragma, 1, var_expected,
  // !at text
  LET, 1, var_text, 1, var_at,
  // parse_allow_unused
  func_parse_allow_unused, 0, TAIL_CALL,
  POS(1091, 9),
  POS(1092, 9),
  POS(1093, 9)
};

static TAB_NUM t_func_parse_allow_hidden_without_prefix[] = {
  2, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, LOCAL(2),
  // funky_types::allow_hidden
  LET, -2, var_funky_types__allow_hidden, var_funky__source_group_of, var_current_group, var_funky__source_position_of, LOCAL(2), LOCAL(1),
  // ->
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(1096, 3),
  POS(1099, 5),
  POS(1097, 3)
};

static TAB_NUM t_func_parse_allow_unused[] = {
  2, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_1104_1_position,
  // text(1) == 'u':
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == 'u':
  var_std__equal, 2, LOCAL(1), chr_117, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_430, lambda_441, TAIL_CALL,
  POS(1104, 3),
  POS(1106, 5),
  POS(1106, 5),
  POS(1105, 3)
};

static TAB_NUM t_lambda_430[] = {
  2, // locals
  0, // parameters
  // text(2) == 'n':
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == 'n':
  var_std__equal, 2, LOCAL(1), chr_110, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_431, lambda_440, TAIL_CALL,
  POS(1108, 9),
  POS(1108, 9),
  POS(1107, 7)
};

static TAB_NUM t_lambda_431[] = {
  2, // locals
  0, // parameters
  // text(3) == 'u':
  var_text, 1, num_3, 1, LOCAL(1),
  // text(3) == 'u':
  var_std__equal, 2, LOCAL(1), chr_117, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_432, lambda_439, TAIL_CALL,
  POS(1110, 13),
  POS(1110, 13),
  POS(1109, 11)
};

static TAB_NUM t_lambda_432[] = {
  2, // locals
  0, // parameters
  // text(4) == 's':
  var_text, 1, num_4, 1, LOCAL(1),
  // text(4) == 's':
  var_std__equal, 2, LOCAL(1), chr_115, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_433, lambda_438, TAIL_CALL,
  POS(1112, 17),
  POS(1112, 17),
  POS(1111, 15)
};

static TAB_NUM t_lambda_433[] = {
  2, // locals
  0, // parameters
  // text(5) == 'e':
  var_text, 1, num_5, 1, LOCAL(1),
  // text(5) == 'e':
  var_std__equal, 2, LOCAL(1), chr_101, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_434, lambda_437, TAIL_CALL,
  POS(1114, 21),
  POS(1114, 21),
  POS(1113, 19)
};

static TAB_NUM t_lambda_434[] = {
  2, // locals
  0, // parameters
  // text(6) == 'd'
  var_text, 1, num_6, 1, LOCAL(1),
  // text(6) == 'd'
  var_std__equal, 2, LOCAL(1), chr_100, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_435, lambda_436, TAIL_CALL,
  POS(1116, 25),
  POS(1116, 25),
  POS(1115, 23)
};

static TAB_NUM t_lambda_435[] = {
  2, // locals
  0, // parameters
  // range(text 7 -1)
  var_range, 3, var_text, num_7, minus_num_1, 1, LOCAL(1),
  // funky_types::allow_unused
  LET, -2, var_funky_types__allow_unused, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_1104_1_position, LOCAL(2),
  // 
  LET, 2, LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(1118, 27),
  POS(1119, 27),
  POS(1117, 27)
};

static TAB_NUM t_lambda_436[] = {
  0, // locals
  0, // parameters
  // syntax_error "'d'"
  func_syntax_error, 1, str_d, TAIL_CALL,
  POS(1123, 27)
};

static TAB_NUM t_lambda_437[] = {
  0, // locals
  0, // parameters
  // syntax_error "'e'"
  func_syntax_error, 1, str_e, TAIL_CALL,
  POS(1125, 23)
};

static TAB_NUM t_lambda_438[] = {
  0, // locals
  0, // parameters
  // syntax_error "'s'"
  func_syntax_error, 1, str_s, TAIL_CALL,
  POS(1127, 19)
};

static TAB_NUM t_lambda_439[] = {
  0, // locals
  0, // parameters
  // syntax_error "'u'"
  func_syntax_error, 1, str_u, TAIL_CALL,
  POS(1129, 15)
};

static TAB_NUM t_lambda_440[] = {
  0, // locals
  0, // parameters
  // syntax_error "'n'"
  func_syntax_error, 1, str_n, TAIL_CALL,
  POS(1131, 11)
};

static TAB_NUM t_lambda_441[] = {
  0, // locals
  0, // parameters
  // syntax_error "'u'"
  func_syntax_error, 1, str_u, TAIL_CALL,
  POS(1133, 7)
};

static TAB_NUM t_func_parse_functor_without_prefix[] = {
  1, // locals
  0, // parameters
  // $position str
  LET, 1, var_str, 1, var_1136_1_position,
  // parse_more_identifier_characters !text $identifier
  func_parse_more_identifier_characters, 0, 2, var_text, var_1137_40_identifier,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_16_text_is_defined, lambda_446, TAIL_CALL,
  POS(1136, 3),
  POS(1137, 3),
  POS(1139, 10),
  POS(1138, 3)
};

static TAB_NUM t_lambda_16_text_is_defined[] = {
  5, // locals
  0, // parameters
  // length_of(position) == length_of(funky::line_text_of(current_group))
  var_length_of, 1, var_1136_1_position, 1, LOCAL(1),
  // funky::line_text_of(current_group))
  var_funky__line_text_of, 1, var_current_group, 1, LOCAL(2),
  // length_of(funky::line_text_of(current_group))
  var_length_of, 1, LOCAL(2), 1, LOCAL(3),
  // length_of(position) == length_of(funky::line_text_of(current_group))
  var_std__equal, 2, LOCAL(1), LOCAL(3), 1, LOCAL(4),
  // $parse
  var_if, 3, LOCAL(4), lambda_442, lambda_443, 1, LOCAL(5),
  // parse !text $extensions
  LOCAL(5), 0, 2, var_text, var_1145_13_extensions,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_444, lambda_445, TAIL_CALL,
  POS(1142, 11),
  POS(1142, 44),
  POS(1142, 34),
  POS(1142, 11),
  POS(1140, 7),
  POS(1145, 7),
  POS(1147, 14),
  POS(1146, 7)
};

static TAB_NUM t_lambda_442[] = {
  0, // locals
  0, // parameters
  //  parse_extensions
  LET, 1, func_parse_extensions, TAIL_CALL,
  POS(1143, 13)
};

static TAB_NUM t_lambda_443[] = {
  0, // locals
  0, // parameters
  //  parse_inline_extensions
  LET, 1, func_parse_inline_extensions, TAIL_CALL,
  POS(1144, 13)
};

static TAB_NUM t_lambda_444[] = {
  1, // locals
  0, // parameters
  // funky_types::functor
  LET, -4, var_funky_types__functor, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_1136_1_position, var_funky__identifier_of, var_1137_40_identifier, var_funky__extensions_of, var_1145_13_extensions, LOCAL(1),
  // 
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(1150, 11),
  POS(1148, 11)
};

static TAB_NUM t_lambda_445[] = {
  0, // locals
  0, // parameters
  //  undefined extensions
  LET, 2, var_undefined, var_1145_13_extensions, TAIL_CALL,
  POS(1155, 11)
};

static TAB_NUM t_lambda_446[] = {
  0, // locals
  0, // parameters
  //  undefined identifier
  LET, 2, var_undefined, var_1137_40_identifier, TAIL_CALL,
  POS(1156, 7)
};

static TAB_NUM t_func_parse_extensions[] = {
  2, // locals
  0, // parameters
  // cond $rest $expr
  var_cond, 6, lambda_447, lambda_449, lambda_451, lambda_453, lambda_456, lambda_459, 2, LOCAL(2), var_1159_12_expr,
  // cond
  var_cond, 3, lambda_461, lambda_463, lambda_465, 1, LOCAL(1),
  // ->
  LET, 2, LOCAL(2), LOCAL(1), TAIL_CALL,
  POS(1159, 3),
  POS(1191, 5),
  POS(1189, 3)
};

static TAB_NUM t_lambda_447[] = {
  2, // locals
  0, // parameters
  // text(1) == '!'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '!'
  var_std__equal, 2, LOCAL(1), chr_33, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_448, TAIL_CALL,
  POS(1161, 7),
  POS(1161, 7),
  POS(1160, 7)
};

static TAB_NUM t_lambda_448[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_io_call_without_prefix
  func_parse_io_call_without_prefix, 0, TAIL_CALL,
  POS(1163, 9),
  POS(1164, 9)
};

static TAB_NUM t_lambda_449[] = {
  2, // locals
  0, // parameters
  // text(1) == '('
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '('
  var_std__equal, 2, LOCAL(1), chr_40, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_450, TAIL_CALL,
  POS(1166, 7),
  POS(1166, 7),
  POS(1165, 7)
};

static TAB_NUM t_lambda_450[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_function_call_extension_without_prefix
  func_parse_function_call_extension_without_prefix, 0, TAIL_CALL,
  POS(1168, 9),
  POS(1169, 9)
};

static TAB_NUM t_lambda_451[] = {
  2, // locals
  0, // parameters
  // text(1) == '.'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '.'
  var_std__equal, 2, LOCAL(1), chr_46, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_452, TAIL_CALL,
  POS(1171, 7),
  POS(1171, 7),
  POS(1170, 7)
};

static TAB_NUM t_lambda_452[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_attribute_access_extension_without_prefix
  func_parse_attribute_access_extension_without_prefix, 0, TAIL_CALL,
  POS(1173, 9),
  POS(1174, 9)
};

static TAB_NUM t_lambda_453[] = {
  2, // locals
  0, // parameters
  // text == "@nl;" && subgroups.is_defined
  var_std__equal, 2, var_text, string_2, 1, LOCAL(1),
  // text == "@nl;" && subgroups.is_defined
  var_std__and, 2, LOCAL(1), lambda_454, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_455, TAIL_CALL,
  POS(1176, 7),
  POS(1176, 7),
  POS(1175, 7)
};

static TAB_NUM t_lambda_454[] = {
  1, // locals
  0, // parameters
  // is_defined
  var_is_defined, 1, var_subgroups, 1, LOCAL(1),
  // subgroups.is_defined
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1176, 35),
  POS(1176, 25)
};

static TAB_NUM t_lambda_455[] = {
  0, // locals
  0, // parameters
  // parse_tagged_multiline_arguments_without_prefix
  func_parse_tagged_multiline_arguments_without_prefix, 0, TAIL_CALL,
  POS(1178, 9)
};

static TAB_NUM t_lambda_456[] = {
  3, // locals
  0, // parameters
  // text(1) == ' '
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_457, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_458, TAIL_CALL,
  POS(1181, 9),
  POS(1181, 9),
  POS(1180, 9),
  POS(1179, 7)
};

static TAB_NUM t_lambda_457[] = {
  2, // locals
  0, // parameters
  // text(2) == '#'
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '#'
  var_std__equal, 2, LOCAL(1), chr_35, 1, LOCAL(2),
  // text(2) == '#'
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1182, 9),
  POS(1182, 9),
  POS(1182, 9)
};

static TAB_NUM t_lambda_458[] = {
  0, // locals
  0, // parameters
  // range &text 3 -1
  var_range, 3, var_text, num_3, minus_num_1, 1, var_text,
  // parse_remark_and_multiline_function_call_without_prefix
  func_parse_remark_and_multiline_function_call_without_prefix, 0, TAIL_CALL,
  POS(1184, 9),
  POS(1185, 9)
};

static TAB_NUM t_lambda_459[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_460, TAIL_CALL,
  POS(1186, 7)
};

static TAB_NUM t_lambda_460[] = {
  0, // locals
  0, // parameters
  //  text empty_list
  LET, 2, var_text, var_empty_list, TAIL_CALL,
  POS(1188, 9)
};

static TAB_NUM t_lambda_461[] = {
  1, // locals
  0, // parameters
  // is_undefined -> empty_list
  var_is_undefined, 1, var_1159_12_expr, 1, LOCAL(1),
  //  expr.is_undefined -> empty_list
  LET, 2, LOCAL(1), lambda_462, TAIL_CALL,
  POS(1192, 15),
  POS(1192, 9)
};

static TAB_NUM t_lambda_462[] = {
  0, // locals
  0, // parameters
  //  empty_list
  LET, 1, var_empty_list, TAIL_CALL,
  POS(1192, 30)
};

static TAB_NUM t_lambda_463[] = {
  1, // locals
  0, // parameters
  // is_a_list -> expr
  var_is_a_list, 1, var_1159_12_expr, 1, LOCAL(1),
  //  expr.is_a_list -> expr
  LET, 2, LOCAL(1), lambda_464, TAIL_CALL,
  POS(1193, 15),
  POS(1193, 9)
};

static TAB_NUM t_lambda_464[] = {
  0, // locals
  0, // parameters
  //  expr
  LET, 1, var_1159_12_expr, TAIL_CALL,
  POS(1193, 27)
};

static TAB_NUM t_lambda_465[] = {
  0, // locals
  0, // parameters
  //  true -> list(expr)
  LET, 2, var_true, lambda_466, TAIL_CALL,
  POS(1194, 9)
};

static TAB_NUM t_lambda_466[] = {
  1, // locals
  0, // parameters
  // list(expr)
  var_list, 1, var_1159_12_expr, 1, LOCAL(1),
  //  list(expr)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1194, 18),
  POS(1194, 17)
};

static TAB_NUM t_func_parse_function_call_extension_without_prefix[] = {
  2, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, LOCAL(2),
  // parse_function_call_without_prefix !text $function_call
  func_parse_function_call_without_prefix, 0, 2, var_text, var_1198_42_function_call,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_17_text_is_defined, lambda_471, TAIL_CALL,
  POS(1197, 3),
  POS(1198, 3),
  POS(1200, 10),
  POS(1199, 3)
};

static TAB_NUM t_lambda_17_text_is_defined[] = {
  1, // locals
  0, // parameters
  // parse_extensions !text $extensions
  func_parse_extensions, 0, 2, var_text, var_1201_24_extensions,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_467, lambda_470, TAIL_CALL,
  POS(1201, 7),
  POS(1203, 14),
  POS(1202, 7)
};

static TAB_NUM t_lambda_467[] = {
  1, // locals
  0, // parameters
  // is_defined
  var_is_defined, 1, var_1201_24_extensions, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_468, lambda_469, TAIL_CALL,
  POS(1206, 24),
  POS(1205, 11)
};

static TAB_NUM t_lambda_468[] = {
  3, // locals
  0, // parameters
  // to_list
  func_to_list, 1, var_1198_42_function_call, 1, LOCAL(1),
  // to_list
  func_to_list, 1, var_1201_24_extensions, 1, LOCAL(2),
  // append
  var_append, 2, LOCAL(1), LOCAL(2), 1, LOCAL(3),
  // 
  LET, 2, var_text, LOCAL(3), TAIL_CALL,
  POS(1210, 31),
  POS(1211, 28),
  POS(1209, 15),
  POS(1207, 15)
};

static TAB_NUM t_lambda_469[] = {
  1, // locals
  0, // parameters
  // to_list
  func_to_list, 1, var_1198_42_function_call, 1, LOCAL(1),
  //  text function_call.to_list
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(1212, 35),
  POS(1212, 15)
};

static TAB_NUM t_lambda_470[] = {
  0, // locals
  0, // parameters
  //  undefined extensions
  LET, 2, var_undefined, var_1201_24_extensions, TAIL_CALL,
  POS(1213, 11)
};

static TAB_NUM t_lambda_471[] = {
  0, // locals
  0, // parameters
  //  undefined function_call
  LET, 2, var_undefined, var_1198_42_function_call, TAIL_CALL,
  POS(1214, 7)
};

static TAB_NUM t_func_parse_attribute_access_extension_without_prefix[] = {
  2, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, LOCAL(2),
  // parse_attribute_access_without_prefix !text $attribute_access
  func_parse_attribute_access_without_prefix, 0, 2, var_text, var_1218_45_attribute_access,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_18_text_is_defined, lambda_476, TAIL_CALL,
  POS(1217, 3),
  POS(1218, 3),
  POS(1220, 10),
  POS(1219, 3)
};

static TAB_NUM t_lambda_18_text_is_defined[] = {
  1, // locals
  0, // parameters
  // parse_extensions !text $extensions
  func_parse_extensions, 0, 2, var_text, var_1221_24_extensions,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_472, lambda_475, TAIL_CALL,
  POS(1221, 7),
  POS(1223, 14),
  POS(1222, 7)
};

static TAB_NUM t_lambda_472[] = {
  1, // locals
  0, // parameters
  // is_defined
  var_is_defined, 1, var_1221_24_extensions, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_473, lambda_474, TAIL_CALL,
  POS(1226, 24),
  POS(1225, 11)
};

static TAB_NUM t_lambda_473[] = {
  3, // locals
  0, // parameters
  // to_list
  func_to_list, 1, var_1218_45_attribute_access, 1, LOCAL(1),
  // to_list
  func_to_list, 1, var_1221_24_extensions, 1, LOCAL(2),
  // append
  var_append, 2, LOCAL(1), LOCAL(2), 1, LOCAL(3),
  // 
  LET, 2, var_text, LOCAL(3), TAIL_CALL,
  POS(1230, 34),
  POS(1231, 28),
  POS(1229, 15),
  POS(1227, 15)
};

static TAB_NUM t_lambda_474[] = {
  1, // locals
  0, // parameters
  // to_list
  func_to_list, 1, var_1218_45_attribute_access, 1, LOCAL(1),
  //  text attribute_access.to_list
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(1232, 38),
  POS(1232, 15)
};

static TAB_NUM t_lambda_475[] = {
  0, // locals
  0, // parameters
  //  undefined extensions
  LET, 2, var_undefined, var_1221_24_extensions, TAIL_CALL,
  POS(1233, 11)
};

static TAB_NUM t_lambda_476[] = {
  0, // locals
  0, // parameters
  //  undefined attribute_access
  LET, 2, var_undefined, var_1218_45_attribute_access, TAIL_CALL,
  POS(1234, 7)
};

static TAB_NUM t_func_parse_inline_functor[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_1237_1_position,
  // !str text
  LET, 1, var_text, 1, var_str,
  // parse_identifier !text $identifier
  func_parse_identifier, 0, 2, var_text, var_1239_24_identifier,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_19_text_is_defined, lambda_479, TAIL_CALL,
  POS(1237, 3),
  POS(1238, 3),
  POS(1239, 3),
  POS(1241, 10),
  POS(1240, 3)
};

static TAB_NUM t_lambda_19_text_is_defined[] = {
  1, // locals
  0, // parameters
  // parse_inline_extensions !text $inline_extensions
  func_parse_inline_extensions, 0, 2, var_text, var_1242_31_inline_extensions,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_477, lambda_478, TAIL_CALL,
  POS(1242, 7),
  POS(1244, 14),
  POS(1243, 7)
};

static TAB_NUM t_lambda_477[] = {
  1, // locals
  0, // parameters
  // funky_types::functor
  LET, -4, var_funky_types__functor, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_1237_1_position, var_funky__identifier_of, var_1239_24_identifier, var_funky__extensions_of, var_1242_31_inline_extensions, LOCAL(1),
  // 
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(1247, 11),
  POS(1245, 11)
};

static TAB_NUM t_lambda_478[] = {
  0, // locals
  0, // parameters
  //  undefined inline_extensions
  LET, 2, var_undefined, var_1242_31_inline_extensions, TAIL_CALL,
  POS(1252, 11)
};

static TAB_NUM t_lambda_479[] = {
  0, // locals
  0, // parameters
  //  undefined identifier
  LET, 2, var_undefined, var_1239_24_identifier, TAIL_CALL,
  POS(1253, 7)
};

static TAB_NUM t_func_parse_inline_extensions[] = {
  2, // locals
  0, // parameters
  // cond $rest $expr
  var_cond, 4, lambda_480, lambda_482, lambda_484, lambda_486, 2, LOCAL(2), var_1256_12_expr,
  // cond
  var_cond, 3, lambda_488, lambda_490, lambda_492, 1, LOCAL(1),
  // ->
  LET, 2, LOCAL(2), LOCAL(1), TAIL_CALL,
  POS(1256, 3),
  POS(1277, 5),
  POS(1275, 3)
};

static TAB_NUM t_lambda_480[] = {
  2, // locals
  0, // parameters
  // text(1) == '!'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '!'
  var_std__equal, 2, LOCAL(1), chr_33, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_481, TAIL_CALL,
  POS(1258, 7),
  POS(1258, 7),
  POS(1257, 7)
};

static TAB_NUM t_lambda_481[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_io_call_without_prefix
  func_parse_io_call_without_prefix, 0, TAIL_CALL,
  POS(1260, 9),
  POS(1261, 9)
};

static TAB_NUM t_lambda_482[] = {
  2, // locals
  0, // parameters
  // text(1) == '('
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '('
  var_std__equal, 2, LOCAL(1), chr_40, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_483, TAIL_CALL,
  POS(1263, 7),
  POS(1263, 7),
  POS(1262, 7)
};

static TAB_NUM t_lambda_483[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_inline_function_call_extension_without_prefix
  func_parse_inline_function_call_extension_without_prefix, 0, TAIL_CALL,
  POS(1265, 9),
  POS(1266, 9)
};

static TAB_NUM t_lambda_484[] = {
  2, // locals
  0, // parameters
  // text(1) == '.'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '.'
  var_std__equal, 2, LOCAL(1), chr_46, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_485, TAIL_CALL,
  POS(1268, 7),
  POS(1268, 7),
  POS(1267, 7)
};

static TAB_NUM t_lambda_485[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_inline_attribute_access_extension_without_prefix
  func_parse_inline_attribute_access_extension_without_prefix, 0, TAIL_CALL,
  POS(1270, 9),
  POS(1271, 9)
};

static TAB_NUM t_lambda_486[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_487, TAIL_CALL,
  POS(1272, 7)
};

static TAB_NUM t_lambda_487[] = {
  0, // locals
  0, // parameters
  //  text empty_list
  LET, 2, var_text, var_empty_list, TAIL_CALL,
  POS(1274, 9)
};

static TAB_NUM t_lambda_488[] = {
  1, // locals
  0, // parameters
  // is_undefined -> empty_list
  var_is_undefined, 1, var_1256_12_expr, 1, LOCAL(1),
  //  expr.is_undefined -> empty_list
  LET, 2, LOCAL(1), lambda_489, TAIL_CALL,
  POS(1278, 15),
  POS(1278, 9)
};

static TAB_NUM t_lambda_489[] = {
  0, // locals
  0, // parameters
  //  empty_list
  LET, 1, var_empty_list, TAIL_CALL,
  POS(1278, 30)
};

static TAB_NUM t_lambda_490[] = {
  1, // locals
  0, // parameters
  // is_a_list -> expr
  var_is_a_list, 1, var_1256_12_expr, 1, LOCAL(1),
  //  expr.is_a_list -> expr
  LET, 2, LOCAL(1), lambda_491, TAIL_CALL,
  POS(1279, 15),
  POS(1279, 9)
};

static TAB_NUM t_lambda_491[] = {
  0, // locals
  0, // parameters
  //  expr
  LET, 1, var_1256_12_expr, TAIL_CALL,
  POS(1279, 27)
};

static TAB_NUM t_lambda_492[] = {
  0, // locals
  0, // parameters
  //  true -> list(expr)
  LET, 2, var_true, lambda_493, TAIL_CALL,
  POS(1280, 9)
};

static TAB_NUM t_lambda_493[] = {
  1, // locals
  0, // parameters
  // list(expr)
  var_list, 1, var_1256_12_expr, 1, LOCAL(1),
  //  list(expr)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1280, 18),
  POS(1280, 17)
};

static TAB_NUM t_func_parse_inline_calls[] = {
  2, // locals
  0, // parameters
  // cond $rest $expr
  var_cond, 3, lambda_494, lambda_496, lambda_498, 2, LOCAL(2), var_1283_12_expr,
  // cond
  var_cond, 3, lambda_500, lambda_502, lambda_504, 1, LOCAL(1),
  // ->
  LET, 2, LOCAL(2), LOCAL(1), TAIL_CALL,
  POS(1283, 3),
  POS(1299, 5),
  POS(1297, 3)
};

static TAB_NUM t_lambda_494[] = {
  2, // locals
  0, // parameters
  // text(1) == '('
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '('
  var_std__equal, 2, LOCAL(1), chr_40, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_495, TAIL_CALL,
  POS(1285, 7),
  POS(1285, 7),
  POS(1284, 7)
};

static TAB_NUM t_lambda_495[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_inline_function_call_extension_without_prefix
  func_parse_inline_function_call_extension_without_prefix, 0, TAIL_CALL,
  POS(1287, 9),
  POS(1288, 9)
};

static TAB_NUM t_lambda_496[] = {
  2, // locals
  0, // parameters
  // text(1) == '.'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '.'
  var_std__equal, 2, LOCAL(1), chr_46, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_497, TAIL_CALL,
  POS(1290, 7),
  POS(1290, 7),
  POS(1289, 7)
};

static TAB_NUM t_lambda_497[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_inline_attribute_access_extension_without_prefix
  func_parse_inline_attribute_access_extension_without_prefix, 0, TAIL_CALL,
  POS(1292, 9),
  POS(1293, 9)
};

static TAB_NUM t_lambda_498[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_499, TAIL_CALL,
  POS(1294, 7)
};

static TAB_NUM t_lambda_499[] = {
  0, // locals
  0, // parameters
  //  text empty_list
  LET, 2, var_text, var_empty_list, TAIL_CALL,
  POS(1296, 9)
};

static TAB_NUM t_lambda_500[] = {
  1, // locals
  0, // parameters
  // is_undefined -> empty_list
  var_is_undefined, 1, var_1283_12_expr, 1, LOCAL(1),
  //  expr.is_undefined -> empty_list
  LET, 2, LOCAL(1), lambda_501, TAIL_CALL,
  POS(1300, 15),
  POS(1300, 9)
};

static TAB_NUM t_lambda_501[] = {
  0, // locals
  0, // parameters
  //  empty_list
  LET, 1, var_empty_list, TAIL_CALL,
  POS(1300, 30)
};

static TAB_NUM t_lambda_502[] = {
  1, // locals
  0, // parameters
  // is_a_list -> expr
  var_is_a_list, 1, var_1283_12_expr, 1, LOCAL(1),
  //  expr.is_a_list -> expr
  LET, 2, LOCAL(1), lambda_503, TAIL_CALL,
  POS(1301, 15),
  POS(1301, 9)
};

static TAB_NUM t_lambda_503[] = {
  0, // locals
  0, // parameters
  //  expr
  LET, 1, var_1283_12_expr, TAIL_CALL,
  POS(1301, 27)
};

static TAB_NUM t_lambda_504[] = {
  0, // locals
  0, // parameters
  //  true -> list(expr)
  LET, 2, var_true, lambda_505, TAIL_CALL,
  POS(1302, 9)
};

static TAB_NUM t_lambda_505[] = {
  1, // locals
  0, // parameters
  // list(expr)
  var_list, 1, var_1283_12_expr, 1, LOCAL(1),
  //  list(expr)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1302, 18),
  POS(1302, 17)
};

static TAB_NUM t_func_parse_inline_function_call_extension_without_prefix[] = {
  2, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, LOCAL(2),
  // parse_function_call_without_prefix !text $function_call
  func_parse_function_call_without_prefix, 0, 2, var_text, var_1306_42_function_call,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_20_text_is_defined, lambda_510, TAIL_CALL,
  POS(1305, 3),
  POS(1306, 3),
  POS(1308, 10),
  POS(1307, 3)
};

static TAB_NUM t_lambda_20_text_is_defined[] = {
  1, // locals
  0, // parameters
  // parse_inline_extensions !text $inline_extensions
  func_parse_inline_extensions, 0, 2, var_text, var_1309_31_inline_extensions,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_506, lambda_509, TAIL_CALL,
  POS(1309, 7),
  POS(1311, 14),
  POS(1310, 7)
};

static TAB_NUM t_lambda_506[] = {
  1, // locals
  0, // parameters
  // is_defined
  var_is_defined, 1, var_1309_31_inline_extensions, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_507, lambda_508, TAIL_CALL,
  POS(1314, 31),
  POS(1313, 11)
};

static TAB_NUM t_lambda_507[] = {
  3, // locals
  0, // parameters
  // to_list
  func_to_list, 1, var_1306_42_function_call, 1, LOCAL(1),
  // to_list
  func_to_list, 1, var_1309_31_inline_extensions, 1, LOCAL(2),
  // append
  var_append, 2, LOCAL(1), LOCAL(2), 1, LOCAL(3),
  // 
  LET, 2, var_text, LOCAL(3), TAIL_CALL,
  POS(1318, 31),
  POS(1319, 35),
  POS(1317, 15),
  POS(1315, 15)
};

static TAB_NUM t_lambda_508[] = {
  1, // locals
  0, // parameters
  // to_list
  func_to_list, 1, var_1306_42_function_call, 1, LOCAL(1),
  //  text function_call.to_list
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(1320, 35),
  POS(1320, 15)
};

static TAB_NUM t_lambda_509[] = {
  0, // locals
  0, // parameters
  //  undefined inline_extensions
  LET, 2, var_undefined, var_1309_31_inline_extensions, TAIL_CALL,
  POS(1321, 11)
};

static TAB_NUM t_lambda_510[] = {
  0, // locals
  0, // parameters
  //  undefined function_call
  LET, 2, var_undefined, var_1306_42_function_call, TAIL_CALL,
  POS(1322, 7)
};

static TAB_NUM t_func_parse_inline_attribute_access_extension_without_prefix[] = {
  2, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, LOCAL(2),
  // parse_attribute_access_without_prefix !text $attribute_access
  func_parse_attribute_access_without_prefix, 0, 2, var_text, var_1326_45_attribute_access,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_21_text_is_defined, lambda_515, TAIL_CALL,
  POS(1325, 3),
  POS(1326, 3),
  POS(1328, 10),
  POS(1327, 3)
};

static TAB_NUM t_lambda_21_text_is_defined[] = {
  1, // locals
  0, // parameters
  // parse_inline_extensions !text $inline_extensions
  func_parse_inline_extensions, 0, 2, var_text, var_1329_31_inline_extensions,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_511, lambda_514, TAIL_CALL,
  POS(1329, 7),
  POS(1331, 14),
  POS(1330, 7)
};

static TAB_NUM t_lambda_511[] = {
  1, // locals
  0, // parameters
  // is_defined
  var_is_defined, 1, var_1329_31_inline_extensions, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_512, lambda_513, TAIL_CALL,
  POS(1334, 31),
  POS(1333, 11)
};

static TAB_NUM t_lambda_512[] = {
  3, // locals
  0, // parameters
  // to_list
  func_to_list, 1, var_1326_45_attribute_access, 1, LOCAL(1),
  // to_list
  func_to_list, 1, var_1329_31_inline_extensions, 1, LOCAL(2),
  // append
  var_append, 2, LOCAL(1), LOCAL(2), 1, LOCAL(3),
  // 
  LET, 2, var_text, LOCAL(3), TAIL_CALL,
  POS(1338, 34),
  POS(1339, 35),
  POS(1337, 15),
  POS(1335, 15)
};

static TAB_NUM t_lambda_513[] = {
  1, // locals
  0, // parameters
  // to_list
  func_to_list, 1, var_1326_45_attribute_access, 1, LOCAL(1),
  //  text attribute_access.to_list
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(1340, 38),
  POS(1340, 15)
};

static TAB_NUM t_lambda_514[] = {
  0, // locals
  0, // parameters
  //  undefined inline_extensions
  LET, 2, var_undefined, var_1329_31_inline_extensions, TAIL_CALL,
  POS(1341, 11)
};

static TAB_NUM t_lambda_515[] = {
  0, // locals
  0, // parameters
  //  undefined attribute_access
  LET, 2, var_undefined, var_1326_45_attribute_access, TAIL_CALL,
  POS(1342, 7)
};

static TAB_NUM t_func_parse_io_call_without_prefix[] = {
  2, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, LOCAL(2),
  // funky_types::io_call
  LET, -2, var_funky_types__io_call, var_funky__source_group_of, var_current_group, var_funky__source_position_of, LOCAL(2), LOCAL(1),
  // ->
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(1345, 3),
  POS(1348, 5),
  POS(1346, 3)
};

static TAB_NUM t_func_parse_function_call_without_prefix[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_1353_1_position,
  // parse_optional_inline_arguments !text $optional_inline_arguments
  func_parse_optional_inline_arguments, 0, 2, var_text, var_1354_39_optional_inline_arguments,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_516, lambda_517, TAIL_CALL,
  POS(1353, 3),
  POS(1354, 3),
  POS(1356, 10),
  POS(1355, 3)
};

static TAB_NUM t_lambda_516[] = {
  1, // locals
  0, // parameters
  // funky_types::function_call
  LET, -3, var_funky_types__function_call, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_1353_1_position, var_funky__arguments_of, var_1354_39_optional_inline_arguments, LOCAL(1),
  // 
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(1359, 7),
  POS(1357, 7)
};

static TAB_NUM t_lambda_517[] = {
  0, // locals
  0, // parameters
  //  undefined optional_inline_arguments
  LET, 2, var_undefined, var_1354_39_optional_inline_arguments, TAIL_CALL,
  POS(1363, 7)
};

static TAB_NUM t_func_parse_optional_inline_arguments[] = {
  2, // locals
  0, // parameters
  // cond $rest $expr
  var_cond, 2, lambda_518, lambda_520, 2, LOCAL(2), var_1366_12_expr,
  // cond
  var_cond, 3, lambda_522, lambda_524, lambda_526, 1, LOCAL(1),
  // ->
  LET, 2, LOCAL(2), LOCAL(1), TAIL_CALL,
  POS(1366, 3),
  POS(1378, 5),
  POS(1376, 3)
};

static TAB_NUM t_lambda_518[] = {
  2, // locals
  0, // parameters
  // text(1) == ')'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == ')'
  var_std__equal, 2, LOCAL(1), chr_41, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_519, TAIL_CALL,
  POS(1368, 7),
  POS(1368, 7),
  POS(1367, 7)
};

static TAB_NUM t_lambda_519[] = {
  1, // locals
  0, // parameters
  // range(text 2 -1) empty_list
  var_range, 3, var_text, num_2, minus_num_1, 1, LOCAL(1),
  //  range(text 2 -1) empty_list
  LET, 2, LOCAL(1), var_empty_list, TAIL_CALL,
  POS(1369, 10),
  POS(1369, 9)
};

static TAB_NUM t_lambda_520[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_521, TAIL_CALL,
  POS(1370, 7)
};

static TAB_NUM t_lambda_521[] = {
  0, // locals
  0, // parameters
  // !expected "optional inline arguments"
  LET, 1, str_optional_inline, 1, var_expected,
  // !at text
  LET, 1, var_text, 1, var_at,
  // parse_function_call_arguments
  func_parse_function_call_arguments, 0, TAIL_CALL,
  POS(1373, 9),
  POS(1374, 9),
  POS(1375, 9)
};

static TAB_NUM t_lambda_522[] = {
  1, // locals
  0, // parameters
  // is_undefined -> empty_list
  var_is_undefined, 1, var_1366_12_expr, 1, LOCAL(1),
  //  expr.is_undefined -> empty_list
  LET, 2, LOCAL(1), lambda_523, TAIL_CALL,
  POS(1379, 15),
  POS(1379, 9)
};

static TAB_NUM t_lambda_523[] = {
  0, // locals
  0, // parameters
  //  empty_list
  LET, 1, var_empty_list, TAIL_CALL,
  POS(1379, 30)
};

static TAB_NUM t_lambda_524[] = {
  1, // locals
  0, // parameters
  // is_a_list -> expr
  var_is_a_list, 1, var_1366_12_expr, 1, LOCAL(1),
  //  expr.is_a_list -> expr
  LET, 2, LOCAL(1), lambda_525, TAIL_CALL,
  POS(1380, 15),
  POS(1380, 9)
};

static TAB_NUM t_lambda_525[] = {
  0, // locals
  0, // parameters
  //  expr
  LET, 1, var_1366_12_expr, TAIL_CALL,
  POS(1380, 27)
};

static TAB_NUM t_lambda_526[] = {
  0, // locals
  0, // parameters
  //  true -> list(expr)
  LET, 2, var_true, lambda_527, TAIL_CALL,
  POS(1381, 9)
};

static TAB_NUM t_lambda_527[] = {
  1, // locals
  0, // parameters
  // list(expr)
  var_list, 1, var_1366_12_expr, 1, LOCAL(1),
  //  list(expr)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1381, 18),
  POS(1381, 17)
};

static TAB_NUM t_func_parse_function_call_arguments[] = {
  2, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, LOCAL(2),
  // parse_inline_arguments !text $inline_arguments
  func_parse_inline_arguments, 0, 2, var_text, var_1385_30_inline_arguments,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_22_text_is_defined, lambda_530, TAIL_CALL,
  POS(1384, 3),
  POS(1385, 3),
  POS(1387, 10),
  POS(1386, 3)
};

static TAB_NUM t_lambda_22_text_is_defined[] = {
  2, // locals
  0, // parameters
  // text(1) == ')'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == ')'
  var_std__equal, 2, LOCAL(1), chr_41, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_528, lambda_529, TAIL_CALL,
  POS(1389, 9),
  POS(1389, 9),
  POS(1388, 7)
};

static TAB_NUM t_lambda_528[] = {
  1, // locals
  0, // parameters
  // range(text 2 -1)
  var_range, 3, var_text, num_2, minus_num_1, 1, LOCAL(1),
  // 
  LET, 2, LOCAL(1), var_1385_30_inline_arguments, TAIL_CALL,
  POS(1391, 11),
  POS(1390, 11)
};

static TAB_NUM t_lambda_529[] = {
  0, // locals
  0, // parameters
  // syntax_error "')'"
  func_syntax_error, 1, string_6, TAIL_CALL,
  POS(1394, 11)
};

static TAB_NUM t_lambda_530[] = {
  0, // locals
  0, // parameters
  //  undefined inline_arguments
  LET, 2, var_undefined, var_1385_30_inline_arguments, TAIL_CALL,
  POS(1395, 7)
};

static TAB_NUM t_func_parse_inline_return_without_prefix[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_1398_1_position,
  // parse_spaced_inline_arguments !text $spaced_inline_arguments
  func_parse_spaced_inline_arguments, 0, 2, var_text, var_1399_37_spaced_inline_arguments,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_531, lambda_532, TAIL_CALL,
  POS(1398, 3),
  POS(1399, 3),
  POS(1401, 10),
  POS(1400, 3)
};

static TAB_NUM t_lambda_531[] = {
  1, // locals
  0, // parameters
  // funky_types::inline_return
  LET, -3, var_funky_types__inline_return, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_1398_1_position, var_funky__arguments_of, var_1399_37_spaced_inline_arguments, LOCAL(1),
  // 
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(1404, 7),
  POS(1402, 7)
};

static TAB_NUM t_lambda_532[] = {
  0, // locals
  0, // parameters
  //  undefined spaced_inline_arguments
  LET, 2, var_undefined, var_1399_37_spaced_inline_arguments, TAIL_CALL,
  POS(1408, 7)
};

static TAB_NUM t_func_parse_attribute_access_without_prefix[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_1411_1_position,
  // !str text
  LET, 1, var_text, 1, var_str,
  // parse_identifier !text $identifier
  func_parse_identifier, 0, 2, var_text, var_1413_24_identifier,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_533, lambda_534, TAIL_CALL,
  POS(1411, 3),
  POS(1412, 3),
  POS(1413, 3),
  POS(1415, 10),
  POS(1414, 3)
};

static TAB_NUM t_lambda_533[] = {
  1, // locals
  0, // parameters
  // funky_types::attribute_access
  LET, -3, var_funky_types__attribute_access, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_1411_1_position, var_funky__identifier_of, var_1413_24_identifier, LOCAL(1),
  // 
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(1418, 7),
  POS(1416, 7)
};

static TAB_NUM t_lambda_534[] = {
  0, // locals
  0, // parameters
  //  undefined identifier
  LET, 2, var_undefined, var_1413_24_identifier, TAIL_CALL,
  POS(1422, 7)
};

static TAB_NUM t_func_parse_some_argument[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 3, lambda_535, lambda_537, lambda_539, TAIL_CALL,
  POS(1425, 3)
};

static TAB_NUM t_lambda_535[] = {
  2, // locals
  0, // parameters
  // text(1) == ':'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == ':'
  var_std__equal, 2, LOCAL(1), chr_58, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_536, TAIL_CALL,
  POS(1427, 7),
  POS(1427, 7),
  POS(1426, 7)
};

static TAB_NUM t_lambda_536[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_body
  func_parse_body, 0, TAIL_CALL,
  POS(1429, 9),
  POS(1430, 9)
};

static TAB_NUM t_lambda_537[] = {
  2, // locals
  0, // parameters
  // text(1) == ' '
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_538, TAIL_CALL,
  POS(1432, 7),
  POS(1432, 7),
  POS(1431, 7)
};

static TAB_NUM t_lambda_538[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_argument
  func_parse_argument, 0, TAIL_CALL,
  POS(1434, 9),
  POS(1435, 9)
};

static TAB_NUM t_lambda_539[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_540, TAIL_CALL,
  POS(1436, 7)
};

static TAB_NUM t_lambda_540[] = {
  0, // locals
  0, // parameters
  // !expected "some argument"
  LET, 1, str_some_argument, 1, var_expected,
  // !at text
  LET, 1, var_text, 1, var_at,
  // parse_multiline_arguments
  func_parse_multiline_arguments, 0, TAIL_CALL,
  POS(1439, 9),
  POS(1440, 9),
  POS(1441, 9)
};

static TAB_NUM t_func_parse_some_arguments[] = {
  2, // locals
  0, // parameters
  // cond $rest $expr
  var_cond, 5, lambda_541, lambda_543, lambda_545, lambda_548, lambda_550, 2, LOCAL(2), var_1444_12_expr,
  // cond
  var_cond, 3, lambda_552, lambda_554, lambda_556, 1, LOCAL(1),
  // ->
  LET, 2, LOCAL(2), LOCAL(1), TAIL_CALL,
  POS(1444, 3),
  POS(1468, 5),
  POS(1466, 3)
};

static TAB_NUM t_lambda_541[] = {
  2, // locals
  0, // parameters
  // text(1) == ':'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == ':'
  var_std__equal, 2, LOCAL(1), chr_58, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_542, TAIL_CALL,
  POS(1446, 7),
  POS(1446, 7),
  POS(1445, 7)
};

static TAB_NUM t_lambda_542[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_body
  func_parse_body, 0, TAIL_CALL,
  POS(1448, 9),
  POS(1449, 9)
};

static TAB_NUM t_lambda_543[] = {
  2, // locals
  0, // parameters
  // text(1) == ' '
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_544, TAIL_CALL,
  POS(1451, 7),
  POS(1451, 7),
  POS(1450, 7)
};

static TAB_NUM t_lambda_544[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_spaced_arguments_without_prefix
  func_parse_spaced_arguments_without_prefix, 0, TAIL_CALL,
  POS(1453, 9),
  POS(1454, 9)
};

static TAB_NUM t_lambda_545[] = {
  2, // locals
  0, // parameters
  // text == "@nl;" && subgroups.is_defined
  var_std__equal, 2, var_text, string_2, 1, LOCAL(1),
  // text == "@nl;" && subgroups.is_defined
  var_std__and, 2, LOCAL(1), lambda_546, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_547, TAIL_CALL,
  POS(1456, 7),
  POS(1456, 7),
  POS(1455, 7)
};

static TAB_NUM t_lambda_546[] = {
  1, // locals
  0, // parameters
  // is_defined
  var_is_defined, 1, var_subgroups, 1, LOCAL(1),
  // subgroups.is_defined
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1456, 35),
  POS(1456, 25)
};

static TAB_NUM t_lambda_547[] = {
  0, // locals
  0, // parameters
  // parse_line_remarks_without_prefix
  func_parse_line_remarks_without_prefix, 0, TAIL_CALL,
  POS(1458, 9)
};

static TAB_NUM t_lambda_548[] = {
  2, // locals
  0, // parameters
  // text(1) == '@nl;'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '@nl;'
  var_std__equal, 2, LOCAL(1), chr_10, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_549, TAIL_CALL,
  POS(1460, 7),
  POS(1460, 7),
  POS(1459, 7)
};

static TAB_NUM t_lambda_549[] = {
  0, // locals
  0, // parameters
  //  text empty_list
  LET, 2, var_text, var_empty_list, TAIL_CALL,
  POS(1461, 9)
};

static TAB_NUM t_lambda_550[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_551, TAIL_CALL,
  POS(1462, 7)
};

static TAB_NUM t_lambda_551[] = {
  0, // locals
  0, // parameters
  // syntax_error "some arguments"
  func_syntax_error, 1, str_some_arguments, TAIL_CALL,
  POS(1465, 9)
};

static TAB_NUM t_lambda_552[] = {
  1, // locals
  0, // parameters
  // is_undefined -> empty_list
  var_is_undefined, 1, var_1444_12_expr, 1, LOCAL(1),
  //  expr.is_undefined -> empty_list
  LET, 2, LOCAL(1), lambda_553, TAIL_CALL,
  POS(1469, 15),
  POS(1469, 9)
};

static TAB_NUM t_lambda_553[] = {
  0, // locals
  0, // parameters
  //  empty_list
  LET, 1, var_empty_list, TAIL_CALL,
  POS(1469, 30)
};

static TAB_NUM t_lambda_554[] = {
  1, // locals
  0, // parameters
  // is_a_list -> expr
  var_is_a_list, 1, var_1444_12_expr, 1, LOCAL(1),
  //  expr.is_a_list -> expr
  LET, 2, LOCAL(1), lambda_555, TAIL_CALL,
  POS(1470, 15),
  POS(1470, 9)
};

static TAB_NUM t_lambda_555[] = {
  0, // locals
  0, // parameters
  //  expr
  LET, 1, var_1444_12_expr, TAIL_CALL,
  POS(1470, 27)
};

static TAB_NUM t_lambda_556[] = {
  0, // locals
  0, // parameters
  //  true -> list(expr)
  LET, 2, var_true, lambda_557, TAIL_CALL,
  POS(1471, 9)
};

static TAB_NUM t_lambda_557[] = {
  1, // locals
  0, // parameters
  // list(expr)
  var_list, 1, var_1444_12_expr, 1, LOCAL(1),
  //  list(expr)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1471, 18),
  POS(1471, 17)
};

static TAB_NUM t_func_parse_some_statement_arguments[] = {
  2, // locals
  0, // parameters
  // cond $rest $expr
  var_cond, 6, lambda_558, lambda_560, lambda_562, lambda_565, lambda_568, lambda_570, 2, LOCAL(2), var_1474_12_expr,
  // cond
  var_cond, 3, lambda_572, lambda_574, lambda_576, 1, LOCAL(1),
  // ->
  LET, 2, LOCAL(2), LOCAL(1), TAIL_CALL,
  POS(1474, 3),
  POS(1502, 5),
  POS(1500, 3)
};

static TAB_NUM t_lambda_558[] = {
  2, // locals
  0, // parameters
  // text(1) == ':'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == ':'
  var_std__equal, 2, LOCAL(1), chr_58, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_559, TAIL_CALL,
  POS(1476, 7),
  POS(1476, 7),
  POS(1475, 7)
};

static TAB_NUM t_lambda_559[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_body
  func_parse_body, 0, TAIL_CALL,
  POS(1478, 9),
  POS(1479, 9)
};

static TAB_NUM t_lambda_560[] = {
  2, // locals
  0, // parameters
  // text(1) == ' '
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_561, TAIL_CALL,
  POS(1481, 7),
  POS(1481, 7),
  POS(1480, 7)
};

static TAB_NUM t_lambda_561[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_spaced_statement_arguments_without_prefix
  func_parse_spaced_statement_arguments_without_prefix, 0, TAIL_CALL,
  POS(1483, 9),
  POS(1484, 9)
};

static TAB_NUM t_lambda_562[] = {
  2, // locals
  0, // parameters
  // text == "@nl;" && subgroups.is_defined
  var_std__equal, 2, var_text, string_2, 1, LOCAL(1),
  // text == "@nl;" && subgroups.is_defined
  var_std__and, 2, LOCAL(1), lambda_563, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_564, TAIL_CALL,
  POS(1486, 7),
  POS(1486, 7),
  POS(1485, 7)
};

static TAB_NUM t_lambda_563[] = {
  1, // locals
  0, // parameters
  // is_defined
  var_is_defined, 1, var_subgroups, 1, LOCAL(1),
  // subgroups.is_defined
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1486, 35),
  POS(1486, 25)
};

static TAB_NUM t_lambda_564[] = {
  0, // locals
  0, // parameters
  // parse_multiline_arguments_without_prefix
  func_parse_multiline_arguments_without_prefix, 0, TAIL_CALL,
  POS(1488, 9)
};

static TAB_NUM t_lambda_565[] = {
  2, // locals
  0, // parameters
  // text == "@nl;" && subgroups.is_defined
  var_std__equal, 2, var_text, string_2, 1, LOCAL(1),
  // text == "@nl;" && subgroups.is_defined
  var_std__and, 2, LOCAL(1), lambda_566, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_567, TAIL_CALL,
  POS(1490, 7),
  POS(1490, 7),
  POS(1489, 7)
};

static TAB_NUM t_lambda_566[] = {
  1, // locals
  0, // parameters
  // is_defined
  var_is_defined, 1, var_subgroups, 1, LOCAL(1),
  // subgroups.is_defined
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1490, 35),
  POS(1490, 25)
};

static TAB_NUM t_lambda_567[] = {
  0, // locals
  0, // parameters
  // parse_line_remarks_without_prefix
  func_parse_line_remarks_without_prefix, 0, TAIL_CALL,
  POS(1492, 9)
};

static TAB_NUM t_lambda_568[] = {
  2, // locals
  0, // parameters
  // text(1) == '@nl;'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '@nl;'
  var_std__equal, 2, LOCAL(1), chr_10, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_569, TAIL_CALL,
  POS(1494, 7),
  POS(1494, 7),
  POS(1493, 7)
};

static TAB_NUM t_lambda_569[] = {
  0, // locals
  0, // parameters
  //  text empty_list
  LET, 2, var_text, var_empty_list, TAIL_CALL,
  POS(1495, 9)
};

static TAB_NUM t_lambda_570[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_571, TAIL_CALL,
  POS(1496, 7)
};

static TAB_NUM t_lambda_571[] = {
  0, // locals
  0, // parameters
  // syntax_error "some statement arguments"
  func_syntax_error, 1, str_some_statement_a, TAIL_CALL,
  POS(1499, 9)
};

static TAB_NUM t_lambda_572[] = {
  1, // locals
  0, // parameters
  // is_undefined -> empty_list
  var_is_undefined, 1, var_1474_12_expr, 1, LOCAL(1),
  //  expr.is_undefined -> empty_list
  LET, 2, LOCAL(1), lambda_573, TAIL_CALL,
  POS(1503, 15),
  POS(1503, 9)
};

static TAB_NUM t_lambda_573[] = {
  0, // locals
  0, // parameters
  //  empty_list
  LET, 1, var_empty_list, TAIL_CALL,
  POS(1503, 30)
};

static TAB_NUM t_lambda_574[] = {
  1, // locals
  0, // parameters
  // is_a_list -> expr
  var_is_a_list, 1, var_1474_12_expr, 1, LOCAL(1),
  //  expr.is_a_list -> expr
  LET, 2, LOCAL(1), lambda_575, TAIL_CALL,
  POS(1504, 15),
  POS(1504, 9)
};

static TAB_NUM t_lambda_575[] = {
  0, // locals
  0, // parameters
  //  expr
  LET, 1, var_1474_12_expr, TAIL_CALL,
  POS(1504, 27)
};

static TAB_NUM t_lambda_576[] = {
  0, // locals
  0, // parameters
  //  true -> list(expr)
  LET, 2, var_true, lambda_577, TAIL_CALL,
  POS(1505, 9)
};

static TAB_NUM t_lambda_577[] = {
  1, // locals
  0, // parameters
  // list(expr)
  var_list, 1, var_1474_12_expr, 1, LOCAL(1),
  //  list(expr)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1505, 18),
  POS(1505, 17)
};

static TAB_NUM t_func_parse_spaced_arguments_without_prefix[] = {
  2, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, LOCAL(2),
  // parse_more_arguments !text $more_arguments
  func_parse_more_arguments, 0, 2, var_text, var_1509_28_more_arguments,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_578, lambda_579, TAIL_CALL,
  POS(1508, 3),
  POS(1509, 3),
  POS(1511, 10),
  POS(1510, 3)
};

static TAB_NUM t_lambda_578[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_text, var_1509_28_more_arguments, TAIL_CALL,
  POS(1512, 7)
};

static TAB_NUM t_lambda_579[] = {
  0, // locals
  0, // parameters
  //  undefined more_arguments
  LET, 2, var_undefined, var_1509_28_more_arguments, TAIL_CALL,
  POS(1515, 7)
};

static TAB_NUM t_func_parse_spaced_statement_arguments_without_prefix[] = {
  2, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, LOCAL(2),
  // parse_more_statement_arguments !text $more_statement_arguments
  func_parse_more_statement_arguments, 0, 2, var_text, var_1519_38_more_statement_arguments,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_580, lambda_581, TAIL_CALL,
  POS(1518, 3),
  POS(1519, 3),
  POS(1521, 10),
  POS(1520, 3)
};

static TAB_NUM t_lambda_580[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_text, var_1519_38_more_statement_arguments, TAIL_CALL,
  POS(1522, 7)
};

static TAB_NUM t_lambda_581[] = {
  0, // locals
  0, // parameters
  //  undefined more_statement_arguments
  LET, 2, var_undefined, var_1519_38_more_statement_arguments, TAIL_CALL,
  POS(1525, 7)
};

static TAB_NUM t_func_parse_more_arguments[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 4, lambda_582, lambda_584, lambda_587, lambda_590, TAIL_CALL,
  POS(1528, 3)
};

static TAB_NUM t_lambda_582[] = {
  2, // locals
  0, // parameters
  // text(1) == ':'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == ':'
  var_std__equal, 2, LOCAL(1), chr_58, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_583, TAIL_CALL,
  POS(1530, 7),
  POS(1530, 7),
  POS(1529, 7)
};

static TAB_NUM t_lambda_583[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_body
  func_parse_body, 0, TAIL_CALL,
  POS(1532, 9),
  POS(1533, 9)
};

static TAB_NUM t_lambda_584[] = {
  3, // locals
  0, // parameters
  // text(1) == '-'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '-'
  var_std__equal, 2, LOCAL(1), chr_45, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_585, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_586, TAIL_CALL,
  POS(1536, 9),
  POS(1536, 9),
  POS(1535, 9),
  POS(1534, 7)
};

static TAB_NUM t_lambda_585[] = {
  2, // locals
  0, // parameters
  // text(2) == '>'
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '>'
  var_std__equal, 2, LOCAL(1), chr_62, 1, LOCAL(2),
  // text(2) == '>'
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1537, 9),
  POS(1537, 9),
  POS(1537, 9)
};

static TAB_NUM t_lambda_586[] = {
  0, // locals
  0, // parameters
  // range &text 3 -1
  var_range, 3, var_text, num_3, minus_num_1, 1, var_text,
  // parse_return_expression_without_prefix
  func_parse_return_expression_without_prefix, 0, TAIL_CALL,
  POS(1539, 9),
  POS(1540, 9)
};

static TAB_NUM t_lambda_587[] = {
  2, // locals
  0, // parameters
  // text == "@quot;@nl;" && subgroups.is_defined
  var_std__equal, 2, var_text, string_7, 1, LOCAL(1),
  // text == "@quot;@nl;" && subgroups.is_defined
  var_std__and, 2, LOCAL(1), lambda_588, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_589, TAIL_CALL,
  POS(1542, 7),
  POS(1542, 7),
  POS(1541, 7)
};

static TAB_NUM t_lambda_588[] = {
  1, // locals
  0, // parameters
  // is_defined
  var_is_defined, 1, var_subgroups, 1, LOCAL(1),
  // subgroups.is_defined
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1542, 41),
  POS(1542, 31)
};

static TAB_NUM t_lambda_589[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_multiline_string_literal_without_prefix
  func_parse_multiline_string_literal_without_prefix, 0, TAIL_CALL,
  POS(1544, 9),
  POS(1545, 9)
};

static TAB_NUM t_lambda_590[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_591, TAIL_CALL,
  POS(1546, 7)
};

static TAB_NUM t_lambda_591[] = {
  0, // locals
  0, // parameters
  // !expected "more arguments"
  LET, 1, str_more_arguments, 1, var_expected,
  // !at text
  LET, 1, var_text, 1, var_at,
  // parse_arguments
  func_parse_arguments, 0, TAIL_CALL,
  POS(1549, 9),
  POS(1550, 9),
  POS(1551, 9)
};

static TAB_NUM t_func_parse_more_statement_arguments[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 4, lambda_592, lambda_594, lambda_597, lambda_600, TAIL_CALL,
  POS(1554, 3)
};

static TAB_NUM t_lambda_592[] = {
  2, // locals
  0, // parameters
  // text(1) == ':'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == ':'
  var_std__equal, 2, LOCAL(1), chr_58, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_593, TAIL_CALL,
  POS(1556, 7),
  POS(1556, 7),
  POS(1555, 7)
};

static TAB_NUM t_lambda_593[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_body
  func_parse_body, 0, TAIL_CALL,
  POS(1558, 9),
  POS(1559, 9)
};

static TAB_NUM t_lambda_594[] = {
  3, // locals
  0, // parameters
  // text(1) == '-'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '-'
  var_std__equal, 2, LOCAL(1), chr_45, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_595, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_596, TAIL_CALL,
  POS(1562, 9),
  POS(1562, 9),
  POS(1561, 9),
  POS(1560, 7)
};

static TAB_NUM t_lambda_595[] = {
  2, // locals
  0, // parameters
  // text(2) == '>'
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '>'
  var_std__equal, 2, LOCAL(1), chr_62, 1, LOCAL(2),
  // text(2) == '>'
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1563, 9),
  POS(1563, 9),
  POS(1563, 9)
};

static TAB_NUM t_lambda_596[] = {
  0, // locals
  0, // parameters
  // range &text 3 -1
  var_range, 3, var_text, num_3, minus_num_1, 1, var_text,
  // parse_return_expression_without_prefix
  func_parse_return_expression_without_prefix, 0, TAIL_CALL,
  POS(1565, 9),
  POS(1566, 9)
};

static TAB_NUM t_lambda_597[] = {
  2, // locals
  0, // parameters
  // text == "@quot;@nl;" && subgroups.is_defined
  var_std__equal, 2, var_text, string_7, 1, LOCAL(1),
  // text == "@quot;@nl;" && subgroups.is_defined
  var_std__and, 2, LOCAL(1), lambda_598, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_599, TAIL_CALL,
  POS(1568, 7),
  POS(1568, 7),
  POS(1567, 7)
};

static TAB_NUM t_lambda_598[] = {
  1, // locals
  0, // parameters
  // is_defined
  var_is_defined, 1, var_subgroups, 1, LOCAL(1),
  // subgroups.is_defined
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1568, 41),
  POS(1568, 31)
};

static TAB_NUM t_lambda_599[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_multiline_string_literal_without_prefix
  func_parse_multiline_string_literal_without_prefix, 0, TAIL_CALL,
  POS(1570, 9),
  POS(1571, 9)
};

static TAB_NUM t_lambda_600[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_601, TAIL_CALL,
  POS(1572, 7)
};

static TAB_NUM t_lambda_601[] = {
  0, // locals
  0, // parameters
  // !expected "more statement arguments"
  LET, 1, str_more_statement_a, 1, var_expected,
  // !at text
  LET, 1, var_text, 1, var_at,
  // parse_even_more_statement_arguments
  func_parse_even_more_statement_arguments, 0, TAIL_CALL,
  POS(1575, 9),
  POS(1576, 9),
  POS(1577, 9)
};

static TAB_NUM t_func_parse_arguments[] = {
  2, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, LOCAL(2),
  // parse_argument !text $argument
  func_parse_argument, 0, 2, var_text, var_1581_22_argument,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_23_text_is_defined, lambda_606, TAIL_CALL,
  POS(1580, 3),
  POS(1581, 3),
  POS(1583, 10),
  POS(1582, 3)
};

static TAB_NUM t_lambda_23_text_is_defined[] = {
  1, // locals
  0, // parameters
  // parse_some_arguments !text $some_arguments
  func_parse_some_arguments, 0, 2, var_text, var_1584_28_some_arguments,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_602, lambda_605, TAIL_CALL,
  POS(1584, 7),
  POS(1586, 14),
  POS(1585, 7)
};

static TAB_NUM t_lambda_602[] = {
  1, // locals
  0, // parameters
  // is_defined
  var_is_defined, 1, var_1584_28_some_arguments, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_603, lambda_604, TAIL_CALL,
  POS(1589, 28),
  POS(1588, 11)
};

static TAB_NUM t_lambda_603[] = {
  3, // locals
  0, // parameters
  // to_list
  func_to_list, 1, var_1581_22_argument, 1, LOCAL(1),
  // to_list
  func_to_list, 1, var_1584_28_some_arguments, 1, LOCAL(2),
  // append
  var_append, 2, LOCAL(1), LOCAL(2), 1, LOCAL(3),
  // 
  LET, 2, var_text, LOCAL(3), TAIL_CALL,
  POS(1593, 26),
  POS(1594, 32),
  POS(1592, 15),
  POS(1590, 15)
};

static TAB_NUM t_lambda_604[] = {
  1, // locals
  0, // parameters
  // to_list
  func_to_list, 1, var_1581_22_argument, 1, LOCAL(1),
  //  text argument.to_list
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(1595, 30),
  POS(1595, 15)
};

static TAB_NUM t_lambda_605[] = {
  0, // locals
  0, // parameters
  //  undefined some_arguments
  LET, 2, var_undefined, var_1584_28_some_arguments, TAIL_CALL,
  POS(1596, 11)
};

static TAB_NUM t_lambda_606[] = {
  0, // locals
  0, // parameters
  //  undefined argument
  LET, 2, var_undefined, var_1581_22_argument, TAIL_CALL,
  POS(1597, 7)
};

static TAB_NUM t_func_parse_even_more_statement_arguments[] = {
  2, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, LOCAL(2),
  // parse_argument !text $argument
  func_parse_argument, 0, 2, var_text, var_1601_22_argument,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_24_text_is_defined, lambda_611, TAIL_CALL,
  POS(1600, 3),
  POS(1601, 3),
  POS(1603, 10),
  POS(1602, 3)
};

static TAB_NUM t_lambda_24_text_is_defined[] = {
  1, // locals
  0, // parameters
  // parse_some_statement_arguments !text $some_statement_arguments
  func_parse_some_statement_arguments, 0, 2, var_text, var_1604_38_some_statement_arguments,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_607, lambda_610, TAIL_CALL,
  POS(1604, 7),
  POS(1606, 14),
  POS(1605, 7)
};

static TAB_NUM t_lambda_607[] = {
  1, // locals
  0, // parameters
  // is_defined
  var_is_defined, 1, var_1604_38_some_statement_arguments, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_608, lambda_609, TAIL_CALL,
  POS(1609, 38),
  POS(1608, 11)
};

static TAB_NUM t_lambda_608[] = {
  3, // locals
  0, // parameters
  // to_list
  func_to_list, 1, var_1601_22_argument, 1, LOCAL(1),
  // to_list
  func_to_list, 1, var_1604_38_some_statement_arguments, 1, LOCAL(2),
  // append
  var_append, 2, LOCAL(1), LOCAL(2), 1, LOCAL(3),
  // 
  LET, 2, var_text, LOCAL(3), TAIL_CALL,
  POS(1613, 26),
  POS(1614, 42),
  POS(1612, 15),
  POS(1610, 15)
};

static TAB_NUM t_lambda_609[] = {
  1, // locals
  0, // parameters
  // to_list
  func_to_list, 1, var_1601_22_argument, 1, LOCAL(1),
  //  text argument.to_list
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(1615, 30),
  POS(1615, 15)
};

static TAB_NUM t_lambda_610[] = {
  0, // locals
  0, // parameters
  //  undefined some_statement_arguments
  LET, 2, var_undefined, var_1604_38_some_statement_arguments, TAIL_CALL,
  POS(1616, 11)
};

static TAB_NUM t_lambda_611[] = {
  0, // locals
  0, // parameters
  //  undefined argument
  LET, 2, var_undefined, var_1601_22_argument, TAIL_CALL,
  POS(1617, 7)
};

static TAB_NUM t_func_parse_multiline_arguments[] = {
  3, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, LOCAL(3),
  // text == "@nl;" && subgroups.is_defined:
  var_std__equal, 2, var_text, string_2, 1, LOCAL(1),
  // text == "@nl;" && subgroups.is_defined:
  var_std__and, 2, LOCAL(1), lambda_612, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_613, lambda_616, TAIL_CALL,
  POS(1620, 3),
  POS(1622, 5),
  POS(1622, 5),
  POS(1621, 3)
};

static TAB_NUM t_lambda_612[] = {
  1, // locals
  0, // parameters
  // is_defined:
  var_is_defined, 1, var_subgroups, 1, LOCAL(1),
  // subgroups.is_defined:
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1622, 33),
  POS(1622, 23)
};

static TAB_NUM t_lambda_613[] = {
  1, // locals
  0, // parameters
  // $line_start_arguments parse_groups(funky::parse_line_start_arguments_group)
  func_parse_groups, 1, var_funky__parse_line_start_arguments_group, 1, var_1623_1_line_start_arguments,
  // $error find_first(line_start_arguments is_an_error)
  var_find_first, 2, var_1623_1_line_start_arguments, var_is_an_error, 1, var_1624_1_error,
  // is_an_error
  var_is_an_error, 1, var_1624_1_error, 1, LOCAL(1),
  // if error.is_an_error
  var_if, 3, LOCAL(1), lambda_614, lambda_615, TAIL_CALL,
  POS(1623, 7),
  POS(1624, 7),
  POS(1625, 16),
  POS(1625, 7)
};

static TAB_NUM t_lambda_614[] = {
  0, // locals
  0, // parameters
  //  undefined error
  LET, 2, var_undefined, var_1624_1_error, TAIL_CALL,
  POS(1626, 11)
};

static TAB_NUM t_lambda_615[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, string_1, var_1623_1_line_start_arguments, TAIL_CALL,
  POS(1627, 11)
};

static TAB_NUM t_lambda_616[] = {
  0, // locals
  0, // parameters
  // syntax_error "valid input characters or line end"
  func_syntax_error, 1, str_valid_input_char, TAIL_CALL,
  POS(1631, 7)
};

static TAB_NUM t_func_parse_multiline_arguments_without_prefix[] = {
  2, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, LOCAL(2),
  // $line_start_arguments parse_groups(funky::parse_line_start_arguments_group)
  func_parse_groups, 1, var_funky__parse_line_start_arguments_group, 1, var_1635_1_line_start_arguments,
  // $error find_first(line_start_arguments is_an_error)
  var_find_first, 2, var_1635_1_line_start_arguments, var_is_an_error, 1, var_1636_1_error,
  // is_an_error
  var_is_an_error, 1, var_1636_1_error, 1, LOCAL(1),
  // if error.is_an_error
  var_if, 3, LOCAL(1), lambda_617, lambda_618, TAIL_CALL,
  POS(1634, 3),
  POS(1635, 3),
  POS(1636, 3),
  POS(1637, 12),
  POS(1637, 3)
};

static TAB_NUM t_lambda_617[] = {
  0, // locals
  0, // parameters
  //  undefined error
  LET, 2, var_undefined, var_1636_1_error, TAIL_CALL,
  POS(1638, 7)
};

static TAB_NUM t_lambda_618[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, string_1, var_1635_1_line_start_arguments, TAIL_CALL,
  POS(1639, 7)
};

static TAB_NUM t_func_parse_tagged_multiline_arguments_without_prefix[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_1644_1_position,
  // $line_start_arguments parse_groups(funky::parse_line_start_arguments_group)
  func_parse_groups, 1, var_funky__parse_line_start_arguments_group, 1, var_1645_1_line_start_arguments,
  // $error find_first(line_start_arguments is_an_error)
  var_find_first, 2, var_1645_1_line_start_arguments, var_is_an_error, 1, var_1646_1_error,
  // is_an_error
  var_is_an_error, 1, var_1646_1_error, 1, LOCAL(1),
  // if error.is_an_error
  var_if, 3, LOCAL(1), lambda_619, lambda_620, TAIL_CALL,
  POS(1644, 3),
  POS(1645, 3),
  POS(1646, 3),
  POS(1647, 12),
  POS(1647, 3)
};

static TAB_NUM t_lambda_619[] = {
  0, // locals
  0, // parameters
  //  undefined error
  LET, 2, var_undefined, var_1646_1_error, TAIL_CALL,
  POS(1648, 7)
};

static TAB_NUM t_lambda_620[] = {
  1, // locals
  0, // parameters
  // funky_types::function_call
  LET, -3, var_funky_types__function_call, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_1644_1_position, var_funky__arguments_of, var_1645_1_line_start_arguments, LOCAL(1),
  // 
  LET, 2, string_1, LOCAL(1), TAIL_CALL,
  POS(1651, 7),
  POS(1649, 7)
};

static TAB_NUM t_func_parse_remark_and_multiline_function_call_without_prefix[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_1657_1_position,
  // parse_spaced_remark_without_prefix !text $spaced_remark
  func_parse_spaced_remark_without_prefix, 0, 2, var_text, var_1658_42_spaced_remark,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_25_text_is_defined, lambda_625, TAIL_CALL,
  POS(1657, 3),
  POS(1658, 3),
  POS(1660, 10),
  POS(1659, 3)
};

static TAB_NUM t_lambda_25_text_is_defined[] = {
  1, // locals
  0, // parameters
  // text == "@nl;":
  var_std__equal, 2, var_text, string_2, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_621, lambda_624, TAIL_CALL,
  POS(1662, 9),
  POS(1661, 7)
};

static TAB_NUM t_lambda_621[] = {
  1, // locals
  0, // parameters
  // $line_start_arguments parse_groups(funky::parse_line_start_arguments_group)
  func_parse_groups, 1, var_funky__parse_line_start_arguments_group, 1, var_1663_1_line_start_arguments,
  // $error find_first(line_start_arguments is_an_error)
  var_find_first, 2, var_1663_1_line_start_arguments, var_is_an_error, 1, var_1664_1_error,
  // is_an_error
  var_is_an_error, 1, var_1664_1_error, 1, LOCAL(1),
  // if error.is_an_error
  var_if, 3, LOCAL(1), lambda_622, lambda_623, TAIL_CALL,
  POS(1663, 11),
  POS(1664, 11),
  POS(1665, 20),
  POS(1665, 11)
};

static TAB_NUM t_lambda_622[] = {
  0, // locals
  0, // parameters
  //  undefined error
  LET, 2, var_undefined, var_1664_1_error, TAIL_CALL,
  POS(1666, 15)
};

static TAB_NUM t_lambda_623[] = {
  1, // locals
  0, // parameters
  // funky_types::remark_and_multiline_function_call
  LET, -4, var_funky_types__remark_and_multiline_function_call, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_1657_1_position, var_funky__remark_of, var_1658_42_spaced_remark, var_funky__arguments_of, var_1663_1_line_start_arguments, LOCAL(1),
  // 
  LET, 2, string_1, LOCAL(1), TAIL_CALL,
  POS(1669, 15),
  POS(1667, 15)
};

static TAB_NUM t_lambda_624[] = {
  0, // locals
  0, // parameters
  // syntax_error "valid input characters or line end"
  func_syntax_error, 1, str_valid_input_char, TAIL_CALL,
  POS(1675, 11)
};

static TAB_NUM t_lambda_625[] = {
  0, // locals
  0, // parameters
  //  undefined spaced_remark
  LET, 2, var_undefined, var_1658_42_spaced_remark, TAIL_CALL,
  POS(1676, 7)
};

static TAB_NUM t_func_parse_argument[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 9, lambda_626, lambda_629, lambda_631, lambda_633, lambda_635, lambda_637, lambda_640, lambda_642, lambda_645, TAIL_CALL,
  POS(1679, 3)
};

static TAB_NUM t_lambda_626[] = {
  3, // locals
  0, // parameters
  // text(1) == '$'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '$'
  var_std__equal, 2, LOCAL(1), chr_36, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_627, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_628, TAIL_CALL,
  POS(1682, 9),
  POS(1682, 9),
  POS(1681, 9),
  POS(1680, 7)
};

static TAB_NUM t_lambda_627[] = {
  2, // locals
  0, // parameters
  // text(2) == '_'
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '_'
  var_std__equal, 2, LOCAL(1), chr_95, 1, LOCAL(2),
  // text(2) == '_'
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1683, 9),
  POS(1683, 9),
  POS(1683, 9)
};

static TAB_NUM t_lambda_628[] = {
  0, // locals
  0, // parameters
  // range &text 3 -1
  var_range, 3, var_text, num_3, minus_num_1, 1, var_text,
  // parse_dummy_definition_without_prefix
  func_parse_dummy_definition_without_prefix, 0, TAIL_CALL,
  POS(1685, 9),
  POS(1686, 9)
};

static TAB_NUM t_lambda_629[] = {
  2, // locals
  0, // parameters
  // text(1) == '$'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '$'
  var_std__equal, 2, LOCAL(1), chr_36, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_630, TAIL_CALL,
  POS(1688, 7),
  POS(1688, 7),
  POS(1687, 7)
};

static TAB_NUM t_lambda_630[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_definition_without_prefix
  func_parse_definition_without_prefix, 0, TAIL_CALL,
  POS(1690, 9),
  POS(1691, 9)
};

static TAB_NUM t_lambda_631[] = {
  2, // locals
  0, // parameters
  // text(1) == '!'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '!'
  var_std__equal, 2, LOCAL(1), chr_33, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_632, TAIL_CALL,
  POS(1693, 7),
  POS(1693, 7),
  POS(1692, 7)
};

static TAB_NUM t_lambda_632[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_redefinition_without_prefix
  func_parse_redefinition_without_prefix, 0, TAIL_CALL,
  POS(1695, 9),
  POS(1696, 9)
};

static TAB_NUM t_lambda_633[] = {
  2, // locals
  0, // parameters
  // text(1) == '&'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '&'
  var_std__equal, 2, LOCAL(1), chr_38, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_634, TAIL_CALL,
  POS(1698, 7),
  POS(1698, 7),
  POS(1697, 7)
};

static TAB_NUM t_lambda_634[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_update_without_prefix
  func_parse_update_without_prefix, 0, TAIL_CALL,
  POS(1700, 9),
  POS(1701, 9)
};

static TAB_NUM t_lambda_635[] = {
  2, // locals
  0, // parameters
  // text(1) == ':'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == ':'
  var_std__equal, 2, LOCAL(1), chr_58, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_636, TAIL_CALL,
  POS(1703, 7),
  POS(1703, 7),
  POS(1702, 7)
};

static TAB_NUM t_lambda_636[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_body
  func_parse_body, 0, TAIL_CALL,
  POS(1705, 9),
  POS(1706, 9)
};

static TAB_NUM t_lambda_637[] = {
  3, // locals
  0, // parameters
  // text(1) == '-'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '-'
  var_std__equal, 2, LOCAL(1), chr_45, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_638, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_639, TAIL_CALL,
  POS(1709, 9),
  POS(1709, 9),
  POS(1708, 9),
  POS(1707, 7)
};

static TAB_NUM t_lambda_638[] = {
  2, // locals
  0, // parameters
  // text(2) == '>'
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '>'
  var_std__equal, 2, LOCAL(1), chr_62, 1, LOCAL(2),
  // text(2) == '>'
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1710, 9),
  POS(1710, 9),
  POS(1710, 9)
};

static TAB_NUM t_lambda_639[] = {
  0, // locals
  0, // parameters
  // range &text 3 -1
  var_range, 3, var_text, num_3, minus_num_1, 1, var_text,
  // parse_return_expression_without_prefix
  func_parse_return_expression_without_prefix, 0, TAIL_CALL,
  POS(1712, 9),
  POS(1713, 9)
};

static TAB_NUM t_lambda_640[] = {
  2, // locals
  0, // parameters
  // text(1) == '#'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '#'
  var_std__equal, 2, LOCAL(1), chr_35, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_641, TAIL_CALL,
  POS(1715, 7),
  POS(1715, 7),
  POS(1714, 7)
};

static TAB_NUM t_lambda_641[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_remark_without_prefix
  func_parse_remark_without_prefix, 0, TAIL_CALL,
  POS(1717, 9),
  POS(1718, 9)
};

static TAB_NUM t_lambda_642[] = {
  2, // locals
  0, // parameters
  // text == "@quot;@nl;" && subgroups.is_defined
  var_std__equal, 2, var_text, string_7, 1, LOCAL(1),
  // text == "@quot;@nl;" && subgroups.is_defined
  var_std__and, 2, LOCAL(1), lambda_643, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_644, TAIL_CALL,
  POS(1720, 7),
  POS(1720, 7),
  POS(1719, 7)
};

static TAB_NUM t_lambda_643[] = {
  1, // locals
  0, // parameters
  // is_defined
  var_is_defined, 1, var_subgroups, 1, LOCAL(1),
  // subgroups.is_defined
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1720, 41),
  POS(1720, 31)
};

static TAB_NUM t_lambda_644[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_multiline_string_literal_without_prefix
  func_parse_multiline_string_literal_without_prefix, 0, TAIL_CALL,
  POS(1722, 9),
  POS(1723, 9)
};

static TAB_NUM t_lambda_645[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_646, TAIL_CALL,
  POS(1724, 7)
};

static TAB_NUM t_lambda_646[] = {
  0, // locals
  0, // parameters
  // !expected "argument"
  LET, 1, str_argument, 1, var_expected,
  // !at text
  LET, 1, var_text, 1, var_at,
  // parse_expression
  func_parse_expression, 0, TAIL_CALL,
  POS(1727, 9),
  POS(1728, 9),
  POS(1729, 9)
};

static TAB_NUM t_func_parse_line_start_arguments[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 29, lambda_647, lambda_649, lambda_652, lambda_654, lambda_656, lambda_659, lambda_662, lambda_664, lambda_667, lambda_670, lambda_672, lambda_675, lambda_678, lambda_681, lambda_684, lambda_687, lambda_690, lambda_693, lambda_695, lambda_698, lambda_700, lambda_703, lambda_706, lambda_709, lambda_712, lambda_714, lambda_716, lambda_718, lambda_720, TAIL_CALL,
  POS(1732, 3)
};

static TAB_NUM t_lambda_647[] = {
  2, // locals
  0, // parameters
  // text(1) == ':'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == ':'
  var_std__equal, 2, LOCAL(1), chr_58, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_648, TAIL_CALL,
  POS(1734, 7),
  POS(1734, 7),
  POS(1733, 7)
};

static TAB_NUM t_lambda_648[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_body
  func_parse_body, 0, TAIL_CALL,
  POS(1736, 9),
  POS(1737, 9)
};

static TAB_NUM t_lambda_649[] = {
  3, // locals
  0, // parameters
  // text(1) == '-'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '-'
  var_std__equal, 2, LOCAL(1), chr_45, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_650, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_651, TAIL_CALL,
  POS(1740, 9),
  POS(1740, 9),
  POS(1739, 9),
  POS(1738, 7)
};

static TAB_NUM t_lambda_650[] = {
  2, // locals
  0, // parameters
  // text(2) == '>'
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '>'
  var_std__equal, 2, LOCAL(1), chr_62, 1, LOCAL(2),
  // text(2) == '>'
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1741, 9),
  POS(1741, 9),
  POS(1741, 9)
};

static TAB_NUM t_lambda_651[] = {
  0, // locals
  0, // parameters
  // range &text 3 -1
  var_range, 3, var_text, num_3, minus_num_1, 1, var_text,
  // parse_return_expression_without_prefix
  func_parse_return_expression_without_prefix, 0, TAIL_CALL,
  POS(1743, 9),
  POS(1744, 9)
};

static TAB_NUM t_lambda_652[] = {
  2, // locals
  0, // parameters
  // text(1) == '#'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '#'
  var_std__equal, 2, LOCAL(1), chr_35, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_653, TAIL_CALL,
  POS(1746, 7),
  POS(1746, 7),
  POS(1745, 7)
};

static TAB_NUM t_lambda_653[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_multiline_remark_without_prefix
  func_parse_multiline_remark_without_prefix, 0, TAIL_CALL,
  POS(1748, 9),
  POS(1749, 9)
};

static TAB_NUM t_lambda_654[] = {
  2, // locals
  0, // parameters
  // text(1) == '.'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '.'
  var_std__equal, 2, LOCAL(1), chr_46, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_655, TAIL_CALL,
  POS(1751, 7),
  POS(1751, 7),
  POS(1750, 7)
};

static TAB_NUM t_lambda_655[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_attribute_value_pair_without_prefix
  func_parse_attribute_value_pair_without_prefix, 0, TAIL_CALL,
  POS(1753, 9),
  POS(1754, 9)
};

static TAB_NUM t_lambda_656[] = {
  3, // locals
  0, // parameters
  // text(1) == '/'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '/'
  var_std__equal, 2, LOCAL(1), chr_47, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_657, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_658, TAIL_CALL,
  POS(1757, 9),
  POS(1757, 9),
  POS(1756, 9),
  POS(1755, 7)
};

static TAB_NUM t_lambda_657[] = {
  2, // locals
  0, // parameters
  // text(2) == ':'
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == ':'
  var_std__equal, 2, LOCAL(1), chr_58, 1, LOCAL(2),
  // text(2) == ':'
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1758, 9),
  POS(1758, 9),
  POS(1758, 9)
};

static TAB_NUM t_lambda_658[] = {
  0, // locals
  0, // parameters
  // range &text 3 -1
  var_range, 3, var_text, num_3, minus_num_1, 1, var_text,
  // parse_type_function_without_prefix
  func_parse_type_function_without_prefix, 0, TAIL_CALL,
  POS(1760, 9),
  POS(1761, 9)
};

static TAB_NUM t_lambda_659[] = {
  2, // locals
  0, // parameters
  // text == "@quot;@nl;" && subgroups.is_defined
  var_std__equal, 2, var_text, string_7, 1, LOCAL(1),
  // text == "@quot;@nl;" && subgroups.is_defined
  var_std__and, 2, LOCAL(1), lambda_660, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_661, TAIL_CALL,
  POS(1763, 7),
  POS(1763, 7),
  POS(1762, 7)
};

static TAB_NUM t_lambda_660[] = {
  1, // locals
  0, // parameters
  // is_defined
  var_is_defined, 1, var_subgroups, 1, LOCAL(1),
  // subgroups.is_defined
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1763, 41),
  POS(1763, 31)
};

static TAB_NUM t_lambda_661[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_multiline_string_literal_without_prefix
  func_parse_multiline_string_literal_without_prefix, 0, TAIL_CALL,
  POS(1765, 9),
  POS(1766, 9)
};

static TAB_NUM t_lambda_662[] = {
  2, // locals
  0, // parameters
  // text(1) == '+'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '+'
  var_std__equal, 2, LOCAL(1), chr_43, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_663, TAIL_CALL,
  POS(1768, 7),
  POS(1768, 7),
  POS(1767, 7)
};

static TAB_NUM t_lambda_663[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_multiline_plus_without_prefix
  func_parse_multiline_plus_without_prefix, 0, TAIL_CALL,
  POS(1770, 9),
  POS(1771, 9)
};

static TAB_NUM t_lambda_664[] = {
  3, // locals
  0, // parameters
  // text(1) == '-'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '-'
  var_std__equal, 2, LOCAL(1), chr_45, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_665, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_666, TAIL_CALL,
  POS(1774, 9),
  POS(1774, 9),
  POS(1773, 9),
  POS(1772, 7)
};

static TAB_NUM t_lambda_665[] = {
  2, // locals
  0, // parameters
  // text(2) == '@nl;'
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '@nl;'
  var_std__equal, 2, LOCAL(1), chr_10, 1, LOCAL(2),
  // text(2) == '@nl;'
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1775, 9),
  POS(1775, 9),
  POS(1775, 9)
};

static TAB_NUM t_lambda_666[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_multiline_minus_without_prefix
  func_parse_multiline_minus_without_prefix, 0, TAIL_CALL,
  POS(1777, 9),
  POS(1778, 9)
};

static TAB_NUM t_lambda_667[] = {
  3, // locals
  0, // parameters
  // text(1) == '-'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '-'
  var_std__equal, 2, LOCAL(1), chr_45, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_668, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_669, TAIL_CALL,
  POS(1781, 9),
  POS(1781, 9),
  POS(1780, 9),
  POS(1779, 7)
};

static TAB_NUM t_lambda_668[] = {
  2, // locals
  0, // parameters
  // text(2) == ' '
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // text(2) == ' '
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1782, 9),
  POS(1782, 9),
  POS(1782, 9)
};

static TAB_NUM t_lambda_669[] = {
  0, // locals
  0, // parameters
  // range &text 3 -1
  var_range, 3, var_text, num_3, minus_num_1, 1, var_text,
  // parse_multiline_minus_with_remark_without_prefix
  func_parse_multiline_minus_with_remark_without_prefix, 0, TAIL_CALL,
  POS(1784, 9),
  POS(1785, 9)
};

static TAB_NUM t_lambda_670[] = {
  2, // locals
  0, // parameters
  // text(1) == '*'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '*'
  var_std__equal, 2, LOCAL(1), chr_42, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_671, TAIL_CALL,
  POS(1787, 7),
  POS(1787, 7),
  POS(1786, 7)
};

static TAB_NUM t_lambda_671[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_multiline_times_without_prefix
  func_parse_multiline_times_without_prefix, 0, TAIL_CALL,
  POS(1789, 9),
  POS(1790, 9)
};

static TAB_NUM t_lambda_672[] = {
  2, // locals
  0, // parameters
  // text == "/@nl;" && subgroups.is_defined
  var_std__equal, 2, var_text, string_8, 1, LOCAL(1),
  // text == "/@nl;" && subgroups.is_defined
  var_std__and, 2, LOCAL(1), lambda_673, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_674, TAIL_CALL,
  POS(1792, 7),
  POS(1792, 7),
  POS(1791, 7)
};

static TAB_NUM t_lambda_673[] = {
  1, // locals
  0, // parameters
  // is_defined
  var_is_defined, 1, var_subgroups, 1, LOCAL(1),
  // subgroups.is_defined
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1792, 36),
  POS(1792, 26)
};

static TAB_NUM t_lambda_674[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_multiline_over_without_prefix
  func_parse_multiline_over_without_prefix, 0, TAIL_CALL,
  POS(1794, 9),
  POS(1795, 9)
};

static TAB_NUM t_lambda_675[] = {
  3, // locals
  0, // parameters
  // text(1) == '/'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '/'
  var_std__equal, 2, LOCAL(1), chr_47, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_676, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_677, TAIL_CALL,
  POS(1798, 9),
  POS(1798, 9),
  POS(1797, 9),
  POS(1796, 7)
};

static TAB_NUM t_lambda_676[] = {
  2, // locals
  0, // parameters
  // text(2) == ' '
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // text(2) == ' '
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1799, 9),
  POS(1799, 9),
  POS(1799, 9)
};

static TAB_NUM t_lambda_677[] = {
  0, // locals
  0, // parameters
  // range &text 3 -1
  var_range, 3, var_text, num_3, minus_num_1, 1, var_text,
  // parse_multiline_over_with_remark_without_prefix
  func_parse_multiline_over_with_remark_without_prefix, 0, TAIL_CALL,
  POS(1801, 9),
  POS(1802, 9)
};

static TAB_NUM t_lambda_678[] = {
  3, // locals
  0, // parameters
  // text(1) == '<'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '<'
  var_std__equal, 2, LOCAL(1), chr_60, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_679, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_680, TAIL_CALL,
  POS(1805, 9),
  POS(1805, 9),
  POS(1804, 9),
  POS(1803, 7)
};

static TAB_NUM t_lambda_679[] = {
  2, // locals
  0, // parameters
  // text(2) == '<'
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '<'
  var_std__equal, 2, LOCAL(1), chr_60, 1, LOCAL(2),
  // text(2) == '<'
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1806, 9),
  POS(1806, 9),
  POS(1806, 9)
};

static TAB_NUM t_lambda_680[] = {
  0, // locals
  0, // parameters
  // range &text 3 -1
  var_range, 3, var_text, num_3, minus_num_1, 1, var_text,
  // parse_multiline_shift_left_without_prefix
  func_parse_multiline_shift_left_without_prefix, 0, TAIL_CALL,
  POS(1808, 9),
  POS(1809, 9)
};

static TAB_NUM t_lambda_681[] = {
  3, // locals
  0, // parameters
  // text(1) == '>'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '>'
  var_std__equal, 2, LOCAL(1), chr_62, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_682, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_683, TAIL_CALL,
  POS(1812, 9),
  POS(1812, 9),
  POS(1811, 9),
  POS(1810, 7)
};

static TAB_NUM t_lambda_682[] = {
  2, // locals
  0, // parameters
  // text(2) == '>'
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '>'
  var_std__equal, 2, LOCAL(1), chr_62, 1, LOCAL(2),
  // text(2) == '>'
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1813, 9),
  POS(1813, 9),
  POS(1813, 9)
};

static TAB_NUM t_lambda_683[] = {
  0, // locals
  0, // parameters
  // range &text 3 -1
  var_range, 3, var_text, num_3, minus_num_1, 1, var_text,
  // parse_multiline_shift_right_without_prefix
  func_parse_multiline_shift_right_without_prefix, 0, TAIL_CALL,
  POS(1815, 9),
  POS(1816, 9)
};

static TAB_NUM t_lambda_684[] = {
  3, // locals
  0, // parameters
  // text(1) == '='
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '='
  var_std__equal, 2, LOCAL(1), chr_61, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_685, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_686, TAIL_CALL,
  POS(1819, 9),
  POS(1819, 9),
  POS(1818, 9),
  POS(1817, 7)
};

static TAB_NUM t_lambda_685[] = {
  2, // locals
  0, // parameters
  // text(2) == '='
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '='
  var_std__equal, 2, LOCAL(1), chr_61, 1, LOCAL(2),
  // text(2) == '='
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1820, 9),
  POS(1820, 9),
  POS(1820, 9)
};

static TAB_NUM t_lambda_686[] = {
  0, // locals
  0, // parameters
  // range &text 3 -1
  var_range, 3, var_text, num_3, minus_num_1, 1, var_text,
  // parse_multiline_equal_without_prefix
  func_parse_multiline_equal_without_prefix, 0, TAIL_CALL,
  POS(1822, 9),
  POS(1823, 9)
};

static TAB_NUM t_lambda_687[] = {
  3, // locals
  0, // parameters
  // text(1) == '!'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '!'
  var_std__equal, 2, LOCAL(1), chr_33, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_688, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_689, TAIL_CALL,
  POS(1826, 9),
  POS(1826, 9),
  POS(1825, 9),
  POS(1824, 7)
};

static TAB_NUM t_lambda_688[] = {
  2, // locals
  0, // parameters
  // text(2) == '='
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '='
  var_std__equal, 2, LOCAL(1), chr_61, 1, LOCAL(2),
  // text(2) == '='
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1827, 9),
  POS(1827, 9),
  POS(1827, 9)
};

static TAB_NUM t_lambda_689[] = {
  0, // locals
  0, // parameters
  // range &text 3 -1
  var_range, 3, var_text, num_3, minus_num_1, 1, var_text,
  // parse_multiline_not_equal_without_prefix
  func_parse_multiline_not_equal_without_prefix, 0, TAIL_CALL,
  POS(1829, 9),
  POS(1830, 9)
};

static TAB_NUM t_lambda_690[] = {
  3, // locals
  0, // parameters
  // text(1) == '<'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '<'
  var_std__equal, 2, LOCAL(1), chr_60, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_691, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_692, TAIL_CALL,
  POS(1833, 9),
  POS(1833, 9),
  POS(1832, 9),
  POS(1831, 7)
};

static TAB_NUM t_lambda_691[] = {
  2, // locals
  0, // parameters
  // text(2) == '='
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '='
  var_std__equal, 2, LOCAL(1), chr_61, 1, LOCAL(2),
  // text(2) == '='
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1834, 9),
  POS(1834, 9),
  POS(1834, 9)
};

static TAB_NUM t_lambda_692[] = {
  0, // locals
  0, // parameters
  // range &text 3 -1
  var_range, 3, var_text, num_3, minus_num_1, 1, var_text,
  // parse_multiline_less_equal_without_prefix
  func_parse_multiline_less_equal_without_prefix, 0, TAIL_CALL,
  POS(1836, 9),
  POS(1837, 9)
};

static TAB_NUM t_lambda_693[] = {
  2, // locals
  0, // parameters
  // text(1) == '<'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '<'
  var_std__equal, 2, LOCAL(1), chr_60, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_694, TAIL_CALL,
  POS(1839, 7),
  POS(1839, 7),
  POS(1838, 7)
};

static TAB_NUM t_lambda_694[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_multiline_less_than_without_prefix
  func_parse_multiline_less_than_without_prefix, 0, TAIL_CALL,
  POS(1841, 9),
  POS(1842, 9)
};

static TAB_NUM t_lambda_695[] = {
  3, // locals
  0, // parameters
  // text(1) == '>'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '>'
  var_std__equal, 2, LOCAL(1), chr_62, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_696, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_697, TAIL_CALL,
  POS(1845, 9),
  POS(1845, 9),
  POS(1844, 9),
  POS(1843, 7)
};

static TAB_NUM t_lambda_696[] = {
  2, // locals
  0, // parameters
  // text(2) == '='
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '='
  var_std__equal, 2, LOCAL(1), chr_61, 1, LOCAL(2),
  // text(2) == '='
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1846, 9),
  POS(1846, 9),
  POS(1846, 9)
};

static TAB_NUM t_lambda_697[] = {
  0, // locals
  0, // parameters
  // range &text 3 -1
  var_range, 3, var_text, num_3, minus_num_1, 1, var_text,
  // parse_multiline_greater_equal_without_prefix
  func_parse_multiline_greater_equal_without_prefix, 0, TAIL_CALL,
  POS(1848, 9),
  POS(1849, 9)
};

static TAB_NUM t_lambda_698[] = {
  2, // locals
  0, // parameters
  // text(1) == '>'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '>'
  var_std__equal, 2, LOCAL(1), chr_62, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_699, TAIL_CALL,
  POS(1851, 7),
  POS(1851, 7),
  POS(1850, 7)
};

static TAB_NUM t_lambda_699[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_multiline_greater_than_without_prefix
  func_parse_multiline_greater_than_without_prefix, 0, TAIL_CALL,
  POS(1853, 9),
  POS(1854, 9)
};

static TAB_NUM t_lambda_700[] = {
  3, // locals
  0, // parameters
  // text(1) == '&'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '&'
  var_std__equal, 2, LOCAL(1), chr_38, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_701, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_702, TAIL_CALL,
  POS(1857, 9),
  POS(1857, 9),
  POS(1856, 9),
  POS(1855, 7)
};

static TAB_NUM t_lambda_701[] = {
  2, // locals
  0, // parameters
  // text(2) == '&'
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '&'
  var_std__equal, 2, LOCAL(1), chr_38, 1, LOCAL(2),
  // text(2) == '&'
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1858, 9),
  POS(1858, 9),
  POS(1858, 9)
};

static TAB_NUM t_lambda_702[] = {
  0, // locals
  0, // parameters
  // range &text 3 -1
  var_range, 3, var_text, num_3, minus_num_1, 1, var_text,
  // parse_multiline_and_without_prefix
  func_parse_multiline_and_without_prefix, 0, TAIL_CALL,
  POS(1860, 9),
  POS(1861, 9)
};

static TAB_NUM t_lambda_703[] = {
  3, // locals
  0, // parameters
  // text(1) == '|'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '|'
  var_std__equal, 2, LOCAL(1), chr_124, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_704, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_705, TAIL_CALL,
  POS(1864, 9),
  POS(1864, 9),
  POS(1863, 9),
  POS(1862, 7)
};

static TAB_NUM t_lambda_704[] = {
  2, // locals
  0, // parameters
  // text(2) == '|'
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '|'
  var_std__equal, 2, LOCAL(1), chr_124, 1, LOCAL(2),
  // text(2) == '|'
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1865, 9),
  POS(1865, 9),
  POS(1865, 9)
};

static TAB_NUM t_lambda_705[] = {
  0, // locals
  0, // parameters
  // range &text 3 -1
  var_range, 3, var_text, num_3, minus_num_1, 1, var_text,
  // parse_multiline_or_without_prefix
  func_parse_multiline_or_without_prefix, 0, TAIL_CALL,
  POS(1867, 9),
  POS(1868, 9)
};

static TAB_NUM t_lambda_706[] = {
  3, // locals
  0, // parameters
  // text(1) == '&'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '&'
  var_std__equal, 2, LOCAL(1), chr_38, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_707, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_708, TAIL_CALL,
  POS(1871, 9),
  POS(1871, 9),
  POS(1870, 9),
  POS(1869, 7)
};

static TAB_NUM t_lambda_707[] = {
  2, // locals
  0, // parameters
  // text(2) == '@nl;'
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '@nl;'
  var_std__equal, 2, LOCAL(1), chr_10, 1, LOCAL(2),
  // text(2) == '@nl;'
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1872, 9),
  POS(1872, 9),
  POS(1872, 9)
};

static TAB_NUM t_lambda_708[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_multiline_bit_and_without_prefix
  func_parse_multiline_bit_and_without_prefix, 0, TAIL_CALL,
  POS(1874, 9),
  POS(1875, 9)
};

static TAB_NUM t_lambda_709[] = {
  3, // locals
  0, // parameters
  // text(1) == '&'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '&'
  var_std__equal, 2, LOCAL(1), chr_38, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_710, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_711, TAIL_CALL,
  POS(1878, 9),
  POS(1878, 9),
  POS(1877, 9),
  POS(1876, 7)
};

static TAB_NUM t_lambda_710[] = {
  2, // locals
  0, // parameters
  // text(2) == ' '
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // text(2) == ' '
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1879, 9),
  POS(1879, 9),
  POS(1879, 9)
};

static TAB_NUM t_lambda_711[] = {
  0, // locals
  0, // parameters
  // range &text 3 -1
  var_range, 3, var_text, num_3, minus_num_1, 1, var_text,
  // parse_multiline_bit_and_with_remark_without_prefix
  func_parse_multiline_bit_and_with_remark_without_prefix, 0, TAIL_CALL,
  POS(1881, 9),
  POS(1882, 9)
};

static TAB_NUM t_lambda_712[] = {
  2, // locals
  0, // parameters
  // text(1) == '|'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '|'
  var_std__equal, 2, LOCAL(1), chr_124, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_713, TAIL_CALL,
  POS(1884, 7),
  POS(1884, 7),
  POS(1883, 7)
};

static TAB_NUM t_lambda_713[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_multiline_bit_or_without_prefix
  func_parse_multiline_bit_or_without_prefix, 0, TAIL_CALL,
  POS(1886, 9),
  POS(1887, 9)
};

static TAB_NUM t_lambda_714[] = {
  2, // locals
  0, // parameters
  // text(1) == '^'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '^'
  var_std__equal, 2, LOCAL(1), chr_94, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_715, TAIL_CALL,
  POS(1889, 7),
  POS(1889, 7),
  POS(1888, 7)
};

static TAB_NUM t_lambda_715[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_multiline_bit_xor_without_prefix
  func_parse_multiline_bit_xor_without_prefix, 0, TAIL_CALL,
  POS(1891, 9),
  POS(1892, 9)
};

static TAB_NUM t_lambda_716[] = {
  2, // locals
  0, // parameters
  // text(1) == '='
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '='
  var_std__equal, 2, LOCAL(1), chr_61, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_717, TAIL_CALL,
  POS(1894, 7),
  POS(1894, 7),
  POS(1893, 7)
};

static TAB_NUM t_lambda_717[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_multiline_assign_without_prefix
  func_parse_multiline_assign_without_prefix, 0, TAIL_CALL,
  POS(1896, 9),
  POS(1897, 9)
};

static TAB_NUM t_lambda_718[] = {
  2, // locals
  0, // parameters
  // text(1) == '/'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '/'
  var_std__equal, 2, LOCAL(1), chr_47, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_719, TAIL_CALL,
  POS(1899, 7),
  POS(1899, 7),
  POS(1898, 7)
};

static TAB_NUM t_lambda_719[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_method_value_pair_without_prefix
  func_parse_method_value_pair_without_prefix, 0, TAIL_CALL,
  POS(1901, 9),
  POS(1902, 9)
};

static TAB_NUM t_lambda_720[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_721, TAIL_CALL,
  POS(1903, 7)
};

static TAB_NUM t_lambda_721[] = {
  0, // locals
  0, // parameters
  // !expected "line start arguments"
  LET, 1, str_line_start_argum, 1, var_expected,
  // !at text
  LET, 1, var_text, 1, var_at,
  // parse_arguments
  func_parse_arguments, 0, TAIL_CALL,
  POS(1906, 9),
  POS(1907, 9),
  POS(1908, 9)
};

static TAB_NUM t_func_parse_dummy_definition_without_prefix[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_1911_1_position,
  // !str text
  LET, 1, var_text, 1, var_str,
  // parse_name !text $name
  func_parse_name, 0, 2, var_text, var_1913_18_name,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_722, lambda_723, TAIL_CALL,
  POS(1911, 3),
  POS(1912, 3),
  POS(1913, 3),
  POS(1915, 10),
  POS(1914, 3)
};

static TAB_NUM t_lambda_722[] = {
  1, // locals
  0, // parameters
  // funky_types::dummy_definition
  LET, -3, var_funky_types__dummy_definition, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_1911_1_position, var_funky__name_of, var_1913_18_name, LOCAL(1),
  // 
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(1918, 7),
  POS(1916, 7)
};

static TAB_NUM t_lambda_723[] = {
  0, // locals
  0, // parameters
  //  undefined name
  LET, 2, var_undefined, var_1913_18_name, TAIL_CALL,
  POS(1922, 7)
};

static TAB_NUM t_func_parse_variable_without_prefix[] = {
  1, // locals
  0, // parameters
  // $position str
  LET, 1, var_str, 1, var_1925_1_position,
  // parse_more_identifier_characters !text $identifier
  func_parse_more_identifier_characters, 0, 2, var_text, var_1926_40_identifier,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_724, lambda_725, TAIL_CALL,
  POS(1925, 3),
  POS(1926, 3),
  POS(1928, 10),
  POS(1927, 3)
};

static TAB_NUM t_lambda_724[] = {
  1, // locals
  0, // parameters
  // funky_types::variable
  LET, -3, var_funky_types__variable, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_1925_1_position, var_funky__identifier_of, var_1926_40_identifier, LOCAL(1),
  // 
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(1931, 7),
  POS(1929, 7)
};

static TAB_NUM t_lambda_725[] = {
  0, // locals
  0, // parameters
  //  undefined identifier
  LET, 2, var_undefined, var_1926_40_identifier, TAIL_CALL,
  POS(1935, 7)
};

static TAB_NUM t_func_parse_definition_without_prefix[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_1938_1_position,
  // !str text
  LET, 1, var_text, 1, var_str,
  // parse_versioned_identifier !text $versioned_identifier
  func_parse_versioned_identifier, 0, 2, var_text, var_1940_34_versioned_identifier,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_726, lambda_727, TAIL_CALL,
  POS(1938, 3),
  POS(1939, 3),
  POS(1940, 3),
  POS(1942, 10),
  POS(1941, 3)
};

static TAB_NUM t_lambda_726[] = {
  1, // locals
  0, // parameters
  // funky_types::definition
  LET, -3, var_funky_types__definition, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_1938_1_position, var_funky__identifier_of, var_1940_34_versioned_identifier, LOCAL(1),
  // 
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(1945, 7),
  POS(1943, 7)
};

static TAB_NUM t_lambda_727[] = {
  0, // locals
  0, // parameters
  //  undefined versioned_identifier
  LET, 2, var_undefined, var_1940_34_versioned_identifier, TAIL_CALL,
  POS(1949, 7)
};

static TAB_NUM t_func_parse_redefinition_without_prefix[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_1952_1_position,
  // !str text
  LET, 1, var_text, 1, var_str,
  // parse_identifier !text $identifier
  func_parse_identifier, 0, 2, var_text, var_1954_24_identifier,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_26_text_is_defined, lambda_730, TAIL_CALL,
  POS(1952, 3),
  POS(1953, 3),
  POS(1954, 3),
  POS(1956, 10),
  POS(1955, 3)
};

static TAB_NUM t_lambda_26_text_is_defined[] = {
  1, // locals
  0, // parameters
  // parse_inline_extensions !text $inline_extensions
  func_parse_inline_extensions, 0, 2, var_text, var_1957_31_inline_extensions,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_728, lambda_729, TAIL_CALL,
  POS(1957, 7),
  POS(1959, 14),
  POS(1958, 7)
};

static TAB_NUM t_lambda_728[] = {
  1, // locals
  0, // parameters
  // funky_types::redefinition
  LET, -4, var_funky_types__redefinition, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_1952_1_position, var_funky__identifier_of, var_1954_24_identifier, var_funky__extensions_of, var_1957_31_inline_extensions, LOCAL(1),
  // 
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(1962, 11),
  POS(1960, 11)
};

static TAB_NUM t_lambda_729[] = {
  0, // locals
  0, // parameters
  //  undefined inline_extensions
  LET, 2, var_undefined, var_1957_31_inline_extensions, TAIL_CALL,
  POS(1967, 11)
};

static TAB_NUM t_lambda_730[] = {
  0, // locals
  0, // parameters
  //  undefined identifier
  LET, 2, var_undefined, var_1954_24_identifier, TAIL_CALL,
  POS(1968, 7)
};

static TAB_NUM t_func_parse_update_without_prefix[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_1971_1_position,
  // !str text
  LET, 1, var_text, 1, var_str,
  // parse_identifier !text $identifier
  func_parse_identifier, 0, 2, var_text, var_1973_24_identifier,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_27_text_is_defined, lambda_733, TAIL_CALL,
  POS(1971, 3),
  POS(1972, 3),
  POS(1973, 3),
  POS(1975, 10),
  POS(1974, 3)
};

static TAB_NUM t_lambda_27_text_is_defined[] = {
  1, // locals
  0, // parameters
  // parse_inline_extensions !text $inline_extensions
  func_parse_inline_extensions, 0, 2, var_text, var_1976_31_inline_extensions,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_731, lambda_732, TAIL_CALL,
  POS(1976, 7),
  POS(1978, 14),
  POS(1977, 7)
};

static TAB_NUM t_lambda_731[] = {
  1, // locals
  0, // parameters
  // funky_types::update
  LET, -4, var_funky_types__update, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_1971_1_position, var_funky__identifier_of, var_1973_24_identifier, var_funky__extensions_of, var_1976_31_inline_extensions, LOCAL(1),
  // 
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(1981, 11),
  POS(1979, 11)
};

static TAB_NUM t_lambda_732[] = {
  0, // locals
  0, // parameters
  //  undefined inline_extensions
  LET, 2, var_undefined, var_1976_31_inline_extensions, TAIL_CALL,
  POS(1986, 11)
};

static TAB_NUM t_lambda_733[] = {
  0, // locals
  0, // parameters
  //  undefined identifier
  LET, 2, var_undefined, var_1973_24_identifier, TAIL_CALL,
  POS(1987, 7)
};

static TAB_NUM t_func_parse_expression[] = {
  1, // locals
  -1, // parameters
  var_undefined, var_1991_0_derived_node,
  // $position text
  LET, 1, var_text, 1, var_1993_1_position,
  // parse_sequence_expression !text $sequence_expression
  func_parse_sequence_expression, 0, 2, var_text, var_1994_33_sequence_expression,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_28_text_is_defined, lambda_739, TAIL_CALL,
  POS(1993, 3),
  POS(1994, 3),
  POS(1996, 10),
  POS(1995, 3)
};

static TAB_NUM t_lambda_28_text_is_defined[] = {
  1, // locals
  0, // parameters
  // parse_key_value_operator !text $key_value_operator
  func_parse_key_value_operator, 0, 2, var_text, var_1997_32_key_value_operator,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_734, lambda_738, TAIL_CALL,
  POS(1997, 7),
  POS(1999, 14),
  POS(1998, 7)
};

static TAB_NUM t_lambda_734[] = {
  2, // locals
  0, // parameters
  // is_defined || key_value_operator.is_defined
  var_is_defined, 1, var_1991_0_derived_node, 1, LOCAL(1),
  // is_defined || key_value_operator.is_defined
  var_std__or, 2, LOCAL(1), lambda_735, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_736, lambda_737, TAIL_CALL,
  POS(2002, 26),
  POS(2002, 26),
  POS(2001, 11)
};

static TAB_NUM t_lambda_735[] = {
  1, // locals
  0, // parameters
  // is_defined
  var_is_defined, 1, var_1997_32_key_value_operator, 1, LOCAL(1),
  // key_value_operator.is_defined
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(2002, 59),
  POS(2002, 40)
};

static TAB_NUM t_lambda_736[] = {
  2, // locals
  0, // parameters
  // default_value(derived_node funky_types::expression)
  var_default_value, 2, var_1991_0_derived_node, var_funky_types__expression, 1, LOCAL(1),
  // default_value(derived_node funky_types::expression)
  LET, -4, LOCAL(1), var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_1993_1_position, var_funky__expression_of, var_1994_33_sequence_expression, var_funky__operator_of, var_1997_32_key_value_operator, LOCAL(2),
  // 
  LET, 2, var_text, LOCAL(2), TAIL_CALL,
  POS(2005, 15),
  POS(2005, 15),
  POS(2003, 15)
};

static TAB_NUM t_lambda_737[] = {
  0, // locals
  0, // parameters
  //  text sequence_expression
  LET, 2, var_text, var_1994_33_sequence_expression, TAIL_CALL,
  POS(2010, 15)
};

static TAB_NUM t_lambda_738[] = {
  0, // locals
  0, // parameters
  //  undefined key_value_operator
  LET, 2, var_undefined, var_1997_32_key_value_operator, TAIL_CALL,
  POS(2011, 11)
};

static TAB_NUM t_lambda_739[] = {
  0, // locals
  0, // parameters
  //  undefined sequence_expression
  LET, 2, var_undefined, var_1994_33_sequence_expression, TAIL_CALL,
  POS(2012, 7)
};

static TAB_NUM t_func_parse_key_value_operator[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 3, lambda_740, lambda_744, lambda_746, TAIL_CALL,
  POS(2015, 3)
};

static TAB_NUM t_lambda_740[] = {
  3, // locals
  0, // parameters
  // text(1) == ' '
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_741, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_743, TAIL_CALL,
  POS(2018, 9),
  POS(2018, 9),
  POS(2017, 9),
  POS(2016, 7)
};

static TAB_NUM t_lambda_741[] = {
  3, // locals
  0, // parameters
  // text(2) == '='
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '='
  var_std__equal, 2, LOCAL(1), chr_61, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_742, 1, LOCAL(3),
  // text(2) == '='
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(2019, 9),
  POS(2019, 9),
  POS(2017, 9),
  POS(2019, 9)
};

static TAB_NUM t_lambda_742[] = {
  2, // locals
  0, // parameters
  // text(3) == ' '
  var_text, 1, num_3, 1, LOCAL(1),
  // text(3) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // text(3) == ' '
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2020, 9),
  POS(2020, 9),
  POS(2020, 9)
};

static TAB_NUM t_lambda_743[] = {
  0, // locals
  0, // parameters
  // range &text 4 -1
  var_range, 3, var_text, num_4, minus_num_1, 1, var_text,
  // parse_key_value
  func_parse_key_value, 0, TAIL_CALL,
  POS(2022, 9),
  POS(2023, 9)
};

static TAB_NUM t_lambda_744[] = {
  2, // locals
  0, // parameters
  // text(1) == '='
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '='
  var_std__equal, 2, LOCAL(1), chr_61, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_745, TAIL_CALL,
  POS(2025, 7),
  POS(2025, 7),
  POS(2024, 7)
};

static TAB_NUM t_lambda_745[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_key_value
  func_parse_key_value, 0, TAIL_CALL,
  POS(2027, 9),
  POS(2028, 9)
};

static TAB_NUM t_lambda_746[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_747, TAIL_CALL,
  POS(2029, 7)
};

static TAB_NUM t_lambda_747[] = {
  0, // locals
  0, // parameters
  //  text undefined
  LET, 2, var_text, var_undefined, TAIL_CALL,
  POS(2031, 9)
};

static TAB_NUM t_func_parse_key_value[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, LOCAL(1),
  // parse_sequence_expression funky_types::key_value
  func_parse_sequence_expression, 1, var_funky_types__key_value, TAIL_CALL,
  POS(2034, 3),
  POS(2035, 3)
};

static TAB_NUM t_func_parse_sequence_expression[] = {
  1, // locals
  -1, // parameters
  var_undefined, var_2039_0_derived_node,
  // $position text
  LET, 1, var_text, 1, var_2041_1_position,
  // parse_conditional_expression !text $conditional_expression
  func_parse_conditional_expression, 0, 2, var_text, var_2042_36_conditional_expression,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_29_text_is_defined, lambda_753, TAIL_CALL,
  POS(2041, 3),
  POS(2042, 3),
  POS(2044, 10),
  POS(2043, 3)
};

static TAB_NUM t_lambda_29_text_is_defined[] = {
  1, // locals
  0, // parameters
  // parse_comma_operator !text $comma_operator
  func_parse_comma_operator, 0, 2, var_text, var_2045_28_comma_operator,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_748, lambda_752, TAIL_CALL,
  POS(2045, 7),
  POS(2047, 14),
  POS(2046, 7)
};

static TAB_NUM t_lambda_748[] = {
  2, // locals
  0, // parameters
  // is_defined || comma_operator.is_defined
  var_is_defined, 1, var_2039_0_derived_node, 1, LOCAL(1),
  // is_defined || comma_operator.is_defined
  var_std__or, 2, LOCAL(1), lambda_749, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_750, lambda_751, TAIL_CALL,
  POS(2050, 26),
  POS(2050, 26),
  POS(2049, 11)
};

static TAB_NUM t_lambda_749[] = {
  1, // locals
  0, // parameters
  // is_defined
  var_is_defined, 1, var_2045_28_comma_operator, 1, LOCAL(1),
  // comma_operator.is_defined
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(2050, 55),
  POS(2050, 40)
};

static TAB_NUM t_lambda_750[] = {
  2, // locals
  0, // parameters
  // default_value(derived_node funky_types::sequence_expression)
  var_default_value, 2, var_2039_0_derived_node, var_funky_types__sequence_expression, 1, LOCAL(1),
  // default_value(derived_node funky_types::sequence_expression)
  LET, -4, LOCAL(1), var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_2041_1_position, var_funky__expression_of, var_2042_36_conditional_expression, var_funky__operator_of, var_2045_28_comma_operator, LOCAL(2),
  // 
  LET, 2, var_text, LOCAL(2), TAIL_CALL,
  POS(2053, 15),
  POS(2053, 15),
  POS(2051, 15)
};

static TAB_NUM t_lambda_751[] = {
  0, // locals
  0, // parameters
  //  text conditional_expression
  LET, 2, var_text, var_2042_36_conditional_expression, TAIL_CALL,
  POS(2058, 15)
};

static TAB_NUM t_lambda_752[] = {
  0, // locals
  0, // parameters
  //  undefined comma_operator
  LET, 2, var_undefined, var_2045_28_comma_operator, TAIL_CALL,
  POS(2059, 11)
};

static TAB_NUM t_lambda_753[] = {
  0, // locals
  0, // parameters
  //  undefined conditional_expression
  LET, 2, var_undefined, var_2042_36_conditional_expression, TAIL_CALL,
  POS(2060, 7)
};

static TAB_NUM t_func_parse_comma_operator[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 4, lambda_754, lambda_757, lambda_759, lambda_763, TAIL_CALL,
  POS(2063, 3)
};

static TAB_NUM t_lambda_754[] = {
  3, // locals
  0, // parameters
  // text(1) == ','
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == ','
  var_std__equal, 2, LOCAL(1), chr_44, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_755, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_756, TAIL_CALL,
  POS(2066, 9),
  POS(2066, 9),
  POS(2065, 9),
  POS(2064, 7)
};

static TAB_NUM t_lambda_755[] = {
  2, // locals
  0, // parameters
  // text(2) == ' '
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // text(2) == ' '
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2067, 9),
  POS(2067, 9),
  POS(2067, 9)
};

static TAB_NUM t_lambda_756[] = {
  0, // locals
  0, // parameters
  // range &text 3 -1
  var_range, 3, var_text, num_3, minus_num_1, 1, var_text,
  // parse_comma
  func_parse_comma, 0, TAIL_CALL,
  POS(2069, 9),
  POS(2070, 9)
};

static TAB_NUM t_lambda_757[] = {
  2, // locals
  0, // parameters
  // text(1) == ','
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == ','
  var_std__equal, 2, LOCAL(1), chr_44, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_758, TAIL_CALL,
  POS(2072, 7),
  POS(2072, 7),
  POS(2071, 7)
};

static TAB_NUM t_lambda_758[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_comma
  func_parse_comma, 0, TAIL_CALL,
  POS(2074, 9),
  POS(2075, 9)
};

static TAB_NUM t_lambda_759[] = {
  3, // locals
  0, // parameters
  // text(1) == ' '
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_760, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_762, TAIL_CALL,
  POS(2078, 9),
  POS(2078, 9),
  POS(2077, 9),
  POS(2076, 7)
};

static TAB_NUM t_lambda_760[] = {
  3, // locals
  0, // parameters
  // text(2) == ','
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == ','
  var_std__equal, 2, LOCAL(1), chr_44, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_761, 1, LOCAL(3),
  // text(2) == ','
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(2079, 9),
  POS(2079, 9),
  POS(2077, 9),
  POS(2079, 9)
};

static TAB_NUM t_lambda_761[] = {
  2, // locals
  0, // parameters
  // text(3) == ' '
  var_text, 1, num_3, 1, LOCAL(1),
  // text(3) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // text(3) == ' '
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2080, 9),
  POS(2080, 9),
  POS(2080, 9)
};

static TAB_NUM t_lambda_762[] = {
  0, // locals
  0, // parameters
  // range &text 4 -1
  var_range, 3, var_text, num_4, minus_num_1, 1, var_text,
  // parse_comma
  func_parse_comma, 0, TAIL_CALL,
  POS(2082, 9),
  POS(2083, 9)
};

static TAB_NUM t_lambda_763[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_764, TAIL_CALL,
  POS(2084, 7)
};

static TAB_NUM t_lambda_764[] = {
  0, // locals
  0, // parameters
  //  text undefined
  LET, 2, var_text, var_undefined, TAIL_CALL,
  POS(2086, 9)
};

static TAB_NUM t_func_parse_comma[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, LOCAL(1),
  // parse_comma_expression funky_types::comma
  func_parse_comma_expression, 1, var_funky_types__comma, TAIL_CALL,
  POS(2089, 3),
  POS(2090, 3)
};

static TAB_NUM t_func_parse_comma_expression[] = {
  1, // locals
  -1, // parameters
  var_undefined, var_2094_0_derived_node,
  // $position text
  LET, 1, var_text, 1, var_2096_1_position,
  // parse_sequence_expression !text $sequence_expression
  func_parse_sequence_expression, 0, 2, var_text, var_2097_33_sequence_expression,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_30_text_is_defined, lambda_770, TAIL_CALL,
  POS(2096, 3),
  POS(2097, 3),
  POS(2099, 10),
  POS(2098, 3)
};

static TAB_NUM t_lambda_30_text_is_defined[] = {
  1, // locals
  0, // parameters
  // parse_comma_operator !text $comma_operator
  func_parse_comma_operator, 0, 2, var_text, var_2100_28_comma_operator,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_765, lambda_769, TAIL_CALL,
  POS(2100, 7),
  POS(2102, 14),
  POS(2101, 7)
};

static TAB_NUM t_lambda_765[] = {
  2, // locals
  0, // parameters
  // is_defined || comma_operator.is_defined
  var_is_defined, 1, var_2094_0_derived_node, 1, LOCAL(1),
  // is_defined || comma_operator.is_defined
  var_std__or, 2, LOCAL(1), lambda_766, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_767, lambda_768, TAIL_CALL,
  POS(2105, 26),
  POS(2105, 26),
  POS(2104, 11)
};

static TAB_NUM t_lambda_766[] = {
  1, // locals
  0, // parameters
  // is_defined
  var_is_defined, 1, var_2100_28_comma_operator, 1, LOCAL(1),
  // comma_operator.is_defined
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(2105, 55),
  POS(2105, 40)
};

static TAB_NUM t_lambda_767[] = {
  2, // locals
  0, // parameters
  // default_value(derived_node funky_types::expression)
  var_default_value, 2, var_2094_0_derived_node, var_funky_types__expression, 1, LOCAL(1),
  // default_value(derived_node funky_types::expression)
  LET, -4, LOCAL(1), var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_2096_1_position, var_funky__expression_of, var_2097_33_sequence_expression, var_funky__operator_of, var_2100_28_comma_operator, LOCAL(2),
  // 
  LET, 2, var_text, LOCAL(2), TAIL_CALL,
  POS(2108, 15),
  POS(2108, 15),
  POS(2106, 15)
};

static TAB_NUM t_lambda_768[] = {
  0, // locals
  0, // parameters
  //  text sequence_expression
  LET, 2, var_text, var_2097_33_sequence_expression, TAIL_CALL,
  POS(2113, 15)
};

static TAB_NUM t_lambda_769[] = {
  0, // locals
  0, // parameters
  //  undefined comma_operator
  LET, 2, var_undefined, var_2100_28_comma_operator, TAIL_CALL,
  POS(2114, 11)
};

static TAB_NUM t_lambda_770[] = {
  0, // locals
  0, // parameters
  //  undefined sequence_expression
  LET, 2, var_undefined, var_2097_33_sequence_expression, TAIL_CALL,
  POS(2115, 7)
};

static TAB_NUM t_func_parse_conditional_expression[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_2118_1_position,
  // parse_named_operator_expression !text $named_operator_expression
  func_parse_named_operator_expression, 0, 2, var_text, var_2119_39_named_operator_expression,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_31_text_is_defined, lambda_775, TAIL_CALL,
  POS(2118, 3),
  POS(2119, 3),
  POS(2121, 10),
  POS(2120, 3)
};

static TAB_NUM t_lambda_31_text_is_defined[] = {
  1, // locals
  0, // parameters
  // parse_logical_operator !text $logical_operator
  func_parse_logical_operator, 0, 2, var_text, var_2122_30_logical_operator,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_771, lambda_774, TAIL_CALL,
  POS(2122, 7),
  POS(2124, 14),
  POS(2123, 7)
};

static TAB_NUM t_lambda_771[] = {
  1, // locals
  0, // parameters
  // is_defined
  var_is_defined, 1, var_2122_30_logical_operator, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_772, lambda_773, TAIL_CALL,
  POS(2127, 30),
  POS(2126, 11)
};

static TAB_NUM t_lambda_772[] = {
  1, // locals
  0, // parameters
  // funky_types::expression
  LET, -4, var_funky_types__expression, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_2118_1_position, var_funky__expression_of, var_2119_39_named_operator_expression, var_funky__operator_of, var_2122_30_logical_operator, LOCAL(1),
  // 
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(2130, 15),
  POS(2128, 15)
};

static TAB_NUM t_lambda_773[] = {
  0, // locals
  0, // parameters
  //  text named_operator_expression
  LET, 2, var_text, var_2119_39_named_operator_expression, TAIL_CALL,
  POS(2135, 15)
};

static TAB_NUM t_lambda_774[] = {
  0, // locals
  0, // parameters
  //  undefined logical_operator
  LET, 2, var_undefined, var_2122_30_logical_operator, TAIL_CALL,
  POS(2136, 11)
};

static TAB_NUM t_lambda_775[] = {
  0, // locals
  0, // parameters
  //  undefined named_operator_expression
  LET, 2, var_undefined, var_2119_39_named_operator_expression, TAIL_CALL,
  POS(2137, 7)
};

static TAB_NUM t_func_parse_logical_operator[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 3, lambda_776, lambda_781, lambda_786, TAIL_CALL,
  POS(2140, 3)
};

static TAB_NUM t_lambda_776[] = {
  3, // locals
  0, // parameters
  // text(1) == ' '
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_777, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_780, TAIL_CALL,
  POS(2143, 9),
  POS(2143, 9),
  POS(2142, 9),
  POS(2141, 7)
};

static TAB_NUM t_lambda_777[] = {
  3, // locals
  0, // parameters
  // text(2) == '&'
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '&'
  var_std__equal, 2, LOCAL(1), chr_38, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_778, 1, LOCAL(3),
  // text(2) == '&'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(2144, 9),
  POS(2144, 9),
  POS(2142, 9),
  POS(2144, 9)
};

static TAB_NUM t_lambda_778[] = {
  3, // locals
  0, // parameters
  // text(3) == '&'
  var_text, 1, num_3, 1, LOCAL(1),
  // text(3) == '&'
  var_std__equal, 2, LOCAL(1), chr_38, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_779, 1, LOCAL(3),
  // text(3) == '&'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(2145, 9),
  POS(2145, 9),
  POS(2142, 9),
  POS(2145, 9)
};

static TAB_NUM t_lambda_779[] = {
  2, // locals
  0, // parameters
  // text(4) == ' '
  var_text, 1, num_4, 1, LOCAL(1),
  // text(4) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // text(4) == ' '
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2146, 9),
  POS(2146, 9),
  POS(2146, 9)
};

static TAB_NUM t_lambda_780[] = {
  0, // locals
  0, // parameters
  // range &text 5 -1
  var_range, 3, var_text, num_5, minus_num_1, 1, var_text,
  // parse_and
  func_parse_and, 0, TAIL_CALL,
  POS(2148, 9),
  POS(2149, 9)
};

static TAB_NUM t_lambda_781[] = {
  3, // locals
  0, // parameters
  // text(1) == ' '
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_782, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_785, TAIL_CALL,
  POS(2152, 9),
  POS(2152, 9),
  POS(2151, 9),
  POS(2150, 7)
};

static TAB_NUM t_lambda_782[] = {
  3, // locals
  0, // parameters
  // text(2) == '|'
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '|'
  var_std__equal, 2, LOCAL(1), chr_124, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_783, 1, LOCAL(3),
  // text(2) == '|'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(2153, 9),
  POS(2153, 9),
  POS(2151, 9),
  POS(2153, 9)
};

static TAB_NUM t_lambda_783[] = {
  3, // locals
  0, // parameters
  // text(3) == '|'
  var_text, 1, num_3, 1, LOCAL(1),
  // text(3) == '|'
  var_std__equal, 2, LOCAL(1), chr_124, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_784, 1, LOCAL(3),
  // text(3) == '|'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(2154, 9),
  POS(2154, 9),
  POS(2151, 9),
  POS(2154, 9)
};

static TAB_NUM t_lambda_784[] = {
  2, // locals
  0, // parameters
  // text(4) == ' '
  var_text, 1, num_4, 1, LOCAL(1),
  // text(4) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // text(4) == ' '
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2155, 9),
  POS(2155, 9),
  POS(2155, 9)
};

static TAB_NUM t_lambda_785[] = {
  0, // locals
  0, // parameters
  // range &text 5 -1
  var_range, 3, var_text, num_5, minus_num_1, 1, var_text,
  // parse_or
  func_parse_or, 0, TAIL_CALL,
  POS(2157, 9),
  POS(2158, 9)
};

static TAB_NUM t_lambda_786[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_787, TAIL_CALL,
  POS(2159, 7)
};

static TAB_NUM t_lambda_787[] = {
  0, // locals
  0, // parameters
  //  text undefined
  LET, 2, var_text, var_undefined, TAIL_CALL,
  POS(2161, 9)
};

static TAB_NUM t_func_parse_and[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, LOCAL(1),
  // parse_and_expression funky_types::and
  func_parse_and_expression, 1, var_funky_types__and, TAIL_CALL,
  POS(2164, 3),
  POS(2165, 3)
};

static TAB_NUM t_func_parse_and_expression[] = {
  1, // locals
  -1, // parameters
  var_undefined, var_2169_0_derived_node,
  // $position text
  LET, 1, var_text, 1, var_2171_1_position,
  // parse_named_operator_expression !text $named_operator_expression
  func_parse_named_operator_expression, 0, 2, var_text, var_2172_39_named_operator_expression,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_32_text_is_defined, lambda_793, TAIL_CALL,
  POS(2171, 3),
  POS(2172, 3),
  POS(2174, 10),
  POS(2173, 3)
};

static TAB_NUM t_lambda_32_text_is_defined[] = {
  1, // locals
  0, // parameters
  // parse_and_operator !text $and_operator
  func_parse_and_operator, 0, 2, var_text, var_2175_26_and_operator,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_788, lambda_792, TAIL_CALL,
  POS(2175, 7),
  POS(2177, 14),
  POS(2176, 7)
};

static TAB_NUM t_lambda_788[] = {
  2, // locals
  0, // parameters
  // is_defined || and_operator.is_defined
  var_is_defined, 1, var_2169_0_derived_node, 1, LOCAL(1),
  // is_defined || and_operator.is_defined
  var_std__or, 2, LOCAL(1), lambda_789, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_790, lambda_791, TAIL_CALL,
  POS(2180, 26),
  POS(2180, 26),
  POS(2179, 11)
};

static TAB_NUM t_lambda_789[] = {
  1, // locals
  0, // parameters
  // is_defined
  var_is_defined, 1, var_2175_26_and_operator, 1, LOCAL(1),
  // and_operator.is_defined
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(2180, 53),
  POS(2180, 40)
};

static TAB_NUM t_lambda_790[] = {
  2, // locals
  0, // parameters
  // default_value(derived_node funky_types::expression)
  var_default_value, 2, var_2169_0_derived_node, var_funky_types__expression, 1, LOCAL(1),
  // default_value(derived_node funky_types::expression)
  LET, -4, LOCAL(1), var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_2171_1_position, var_funky__expression_of, var_2172_39_named_operator_expression, var_funky__operator_of, var_2175_26_and_operator, LOCAL(2),
  // 
  LET, 2, var_text, LOCAL(2), TAIL_CALL,
  POS(2183, 15),
  POS(2183, 15),
  POS(2181, 15)
};

static TAB_NUM t_lambda_791[] = {
  0, // locals
  0, // parameters
  //  text named_operator_expression
  LET, 2, var_text, var_2172_39_named_operator_expression, TAIL_CALL,
  POS(2188, 15)
};

static TAB_NUM t_lambda_792[] = {
  0, // locals
  0, // parameters
  //  undefined and_operator
  LET, 2, var_undefined, var_2175_26_and_operator, TAIL_CALL,
  POS(2189, 11)
};

static TAB_NUM t_lambda_793[] = {
  0, // locals
  0, // parameters
  //  undefined named_operator_expression
  LET, 2, var_undefined, var_2172_39_named_operator_expression, TAIL_CALL,
  POS(2190, 7)
};

static TAB_NUM t_func_parse_and_operator[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 2, lambda_794, lambda_799, TAIL_CALL,
  POS(2193, 3)
};

static TAB_NUM t_lambda_794[] = {
  3, // locals
  0, // parameters
  // text(1) == ' '
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_795, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_798, TAIL_CALL,
  POS(2196, 9),
  POS(2196, 9),
  POS(2195, 9),
  POS(2194, 7)
};

static TAB_NUM t_lambda_795[] = {
  3, // locals
  0, // parameters
  // text(2) == '&'
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '&'
  var_std__equal, 2, LOCAL(1), chr_38, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_796, 1, LOCAL(3),
  // text(2) == '&'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(2197, 9),
  POS(2197, 9),
  POS(2195, 9),
  POS(2197, 9)
};

static TAB_NUM t_lambda_796[] = {
  3, // locals
  0, // parameters
  // text(3) == '&'
  var_text, 1, num_3, 1, LOCAL(1),
  // text(3) == '&'
  var_std__equal, 2, LOCAL(1), chr_38, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_797, 1, LOCAL(3),
  // text(3) == '&'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(2198, 9),
  POS(2198, 9),
  POS(2195, 9),
  POS(2198, 9)
};

static TAB_NUM t_lambda_797[] = {
  2, // locals
  0, // parameters
  // text(4) == ' '
  var_text, 1, num_4, 1, LOCAL(1),
  // text(4) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // text(4) == ' '
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2199, 9),
  POS(2199, 9),
  POS(2199, 9)
};

static TAB_NUM t_lambda_798[] = {
  0, // locals
  0, // parameters
  // range &text 5 -1
  var_range, 3, var_text, num_5, minus_num_1, 1, var_text,
  // parse_and
  func_parse_and, 0, TAIL_CALL,
  POS(2201, 9),
  POS(2202, 9)
};

static TAB_NUM t_lambda_799[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_800, TAIL_CALL,
  POS(2203, 7)
};

static TAB_NUM t_lambda_800[] = {
  0, // locals
  0, // parameters
  //  text undefined
  LET, 2, var_text, var_undefined, TAIL_CALL,
  POS(2205, 9)
};

static TAB_NUM t_func_parse_or[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, LOCAL(1),
  // parse_or_expression funky_types::or
  func_parse_or_expression, 1, var_funky_types__or, TAIL_CALL,
  POS(2208, 3),
  POS(2209, 3)
};

static TAB_NUM t_func_parse_or_expression[] = {
  1, // locals
  -1, // parameters
  var_undefined, var_2213_0_derived_node,
  // $position text
  LET, 1, var_text, 1, var_2215_1_position,
  // parse_named_operator_expression !text $named_operator_expression
  func_parse_named_operator_expression, 0, 2, var_text, var_2216_39_named_operator_expression,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_33_text_is_defined, lambda_806, TAIL_CALL,
  POS(2215, 3),
  POS(2216, 3),
  POS(2218, 10),
  POS(2217, 3)
};

static TAB_NUM t_lambda_33_text_is_defined[] = {
  1, // locals
  0, // parameters
  // parse_or_operator !text $or_operator
  func_parse_or_operator, 0, 2, var_text, var_2219_25_or_operator,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_801, lambda_805, TAIL_CALL,
  POS(2219, 7),
  POS(2221, 14),
  POS(2220, 7)
};

static TAB_NUM t_lambda_801[] = {
  2, // locals
  0, // parameters
  // is_defined || or_operator.is_defined
  var_is_defined, 1, var_2213_0_derived_node, 1, LOCAL(1),
  // is_defined || or_operator.is_defined
  var_std__or, 2, LOCAL(1), lambda_802, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_803, lambda_804, TAIL_CALL,
  POS(2224, 26),
  POS(2224, 26),
  POS(2223, 11)
};

static TAB_NUM t_lambda_802[] = {
  1, // locals
  0, // parameters
  // is_defined
  var_is_defined, 1, var_2219_25_or_operator, 1, LOCAL(1),
  // or_operator.is_defined
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(2224, 52),
  POS(2224, 40)
};

static TAB_NUM t_lambda_803[] = {
  2, // locals
  0, // parameters
  // default_value(derived_node funky_types::expression)
  var_default_value, 2, var_2213_0_derived_node, var_funky_types__expression, 1, LOCAL(1),
  // default_value(derived_node funky_types::expression)
  LET, -4, LOCAL(1), var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_2215_1_position, var_funky__expression_of, var_2216_39_named_operator_expression, var_funky__operator_of, var_2219_25_or_operator, LOCAL(2),
  // 
  LET, 2, var_text, LOCAL(2), TAIL_CALL,
  POS(2227, 15),
  POS(2227, 15),
  POS(2225, 15)
};

static TAB_NUM t_lambda_804[] = {
  0, // locals
  0, // parameters
  //  text named_operator_expression
  LET, 2, var_text, var_2216_39_named_operator_expression, TAIL_CALL,
  POS(2232, 15)
};

static TAB_NUM t_lambda_805[] = {
  0, // locals
  0, // parameters
  //  undefined or_operator
  LET, 2, var_undefined, var_2219_25_or_operator, TAIL_CALL,
  POS(2233, 11)
};

static TAB_NUM t_lambda_806[] = {
  0, // locals
  0, // parameters
  //  undefined named_operator_expression
  LET, 2, var_undefined, var_2216_39_named_operator_expression, TAIL_CALL,
  POS(2234, 7)
};

static TAB_NUM t_func_parse_or_operator[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 2, lambda_807, lambda_812, TAIL_CALL,
  POS(2237, 3)
};

static TAB_NUM t_lambda_807[] = {
  3, // locals
  0, // parameters
  // text(1) == ' '
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_808, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_811, TAIL_CALL,
  POS(2240, 9),
  POS(2240, 9),
  POS(2239, 9),
  POS(2238, 7)
};

static TAB_NUM t_lambda_808[] = {
  3, // locals
  0, // parameters
  // text(2) == '|'
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '|'
  var_std__equal, 2, LOCAL(1), chr_124, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_809, 1, LOCAL(3),
  // text(2) == '|'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(2241, 9),
  POS(2241, 9),
  POS(2239, 9),
  POS(2241, 9)
};

static TAB_NUM t_lambda_809[] = {
  3, // locals
  0, // parameters
  // text(3) == '|'
  var_text, 1, num_3, 1, LOCAL(1),
  // text(3) == '|'
  var_std__equal, 2, LOCAL(1), chr_124, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_810, 1, LOCAL(3),
  // text(3) == '|'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(2242, 9),
  POS(2242, 9),
  POS(2239, 9),
  POS(2242, 9)
};

static TAB_NUM t_lambda_810[] = {
  2, // locals
  0, // parameters
  // text(4) == ' '
  var_text, 1, num_4, 1, LOCAL(1),
  // text(4) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // text(4) == ' '
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2243, 9),
  POS(2243, 9),
  POS(2243, 9)
};

static TAB_NUM t_lambda_811[] = {
  0, // locals
  0, // parameters
  // range &text 5 -1
  var_range, 3, var_text, num_5, minus_num_1, 1, var_text,
  // parse_or
  func_parse_or, 0, TAIL_CALL,
  POS(2245, 9),
  POS(2246, 9)
};

static TAB_NUM t_lambda_812[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_813, TAIL_CALL,
  POS(2247, 7)
};

static TAB_NUM t_lambda_813[] = {
  0, // locals
  0, // parameters
  //  text undefined
  LET, 2, var_text, var_undefined, TAIL_CALL,
  POS(2249, 9)
};

static TAB_NUM t_func_parse_named_operator_expression[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_2252_1_position,
  // parse_range_expression !text $range_expression
  func_parse_range_expression, 0, 2, var_text, var_2253_30_range_expression,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_34_text_is_defined, lambda_818, TAIL_CALL,
  POS(2252, 3),
  POS(2253, 3),
  POS(2255, 10),
  POS(2254, 3)
};

static TAB_NUM t_lambda_34_text_is_defined[] = {
  1, // locals
  0, // parameters
  // parse_optional_named_operator !text $optional_named_operator
  func_parse_optional_named_operator, 0, 2, var_text, var_2256_37_optional_named_operator,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_814, lambda_817, TAIL_CALL,
  POS(2256, 7),
  POS(2258, 14),
  POS(2257, 7)
};

static TAB_NUM t_lambda_814[] = {
  1, // locals
  0, // parameters
  // is_defined
  var_is_defined, 1, var_2256_37_optional_named_operator, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_815, lambda_816, TAIL_CALL,
  POS(2261, 37),
  POS(2260, 11)
};

static TAB_NUM t_lambda_815[] = {
  6, // locals
  0, // parameters
  // funky::identifier_of(optional_named_operator)
  var_funky__identifier_of, 1, var_2256_37_optional_named_operator, 1, LOCAL(1),
  // funky::expression_of(optional_named_operator)
  var_funky__expression_of, 1, var_2256_37_optional_named_operator, 1, LOCAL(2),
  // list
  var_list, 2, var_2253_30_range_expression, LOCAL(2), 1, LOCAL(3),
  // funky_types::function_call
  LET, -3, var_funky_types__function_call, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_2252_1_position, var_funky__arguments_of, LOCAL(3), LOCAL(4),
  // list
  var_list, 1, LOCAL(4), 1, LOCAL(5),
  // funky_types::functor
  LET, -4, var_funky_types__functor, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_2252_1_position, var_funky__identifier_of, LOCAL(1), var_funky__extensions_of, LOCAL(5), LOCAL(6),
  // 
  LET, 2, var_text, LOCAL(6), TAIL_CALL,
  POS(2268, 19),
  POS(2277, 27),
  POS(2275, 25),
  POS(2271, 21),
  POS(2270, 19),
  POS(2264, 15),
  POS(2262, 15)
};

static TAB_NUM t_lambda_816[] = {
  0, // locals
  0, // parameters
  //  text range_expression
  LET, 2, var_text, var_2253_30_range_expression, TAIL_CALL,
  POS(2278, 15)
};

static TAB_NUM t_lambda_817[] = {
  0, // locals
  0, // parameters
  //  undefined optional_named_operator
  LET, 2, var_undefined, var_2256_37_optional_named_operator, TAIL_CALL,
  POS(2279, 11)
};

static TAB_NUM t_lambda_818[] = {
  0, // locals
  0, // parameters
  //  undefined range_expression
  LET, 2, var_undefined, var_2253_30_range_expression, TAIL_CALL,
  POS(2280, 7)
};

static TAB_NUM t_func_parse_optional_named_operator[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 2, lambda_819, lambda_822, TAIL_CALL,
  POS(2283, 3)
};

static TAB_NUM t_lambda_819[] = {
  3, // locals
  0, // parameters
  // text(1) == ' '
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_820, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_821, TAIL_CALL,
  POS(2286, 9),
  POS(2286, 9),
  POS(2285, 9),
  POS(2284, 7)
};

static TAB_NUM t_lambda_820[] = {
  2, // locals
  0, // parameters
  // text(2) == '.'
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '.'
  var_std__equal, 2, LOCAL(1), chr_46, 1, LOCAL(2),
  // text(2) == '.'
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2287, 9),
  POS(2287, 9),
  POS(2287, 9)
};

static TAB_NUM t_lambda_821[] = {
  0, // locals
  0, // parameters
  // range &text 3 -1
  var_range, 3, var_text, num_3, minus_num_1, 1, var_text,
  // parse_named_operator_without_prefix
  func_parse_named_operator_without_prefix, 0, TAIL_CALL,
  POS(2289, 9),
  POS(2290, 9)
};

static TAB_NUM t_lambda_822[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_823, TAIL_CALL,
  POS(2291, 7)
};

static TAB_NUM t_lambda_823[] = {
  0, // locals
  0, // parameters
  //  text undefined
  LET, 2, var_text, var_undefined, TAIL_CALL,
  POS(2293, 9)
};

static TAB_NUM t_func_parse_named_operator_without_prefix[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_2296_1_position,
  // !str text
  LET, 1, var_text, 1, var_str,
  // parse_identifier !text $identifier
  func_parse_identifier, 0, 2, var_text, var_2298_24_identifier,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_35_text_is_defined, lambda_830, TAIL_CALL,
  POS(2296, 3),
  POS(2297, 3),
  POS(2298, 3),
  POS(2300, 10),
  POS(2299, 3)
};

static TAB_NUM t_lambda_35_text_is_defined[] = {
  2, // locals
  0, // parameters
  // text(1) == '.':
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '.':
  var_std__equal, 2, LOCAL(1), chr_46, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_824, lambda_829, TAIL_CALL,
  POS(2302, 9),
  POS(2302, 9),
  POS(2301, 7)
};

static TAB_NUM t_lambda_824[] = {
  2, // locals
  0, // parameters
  // text(2) == ' ':
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == ' ':
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_825, lambda_828, TAIL_CALL,
  POS(2304, 13),
  POS(2304, 13),
  POS(2303, 11)
};

static TAB_NUM t_lambda_825[] = {
  1, // locals
  0, // parameters
  // range &text 3 -1
  var_range, 3, var_text, num_3, minus_num_1, 1, var_text,
  // parse_range_expression !text $range_expression
  func_parse_range_expression, 0, 2, var_text, var_2306_30_range_expression,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_826, lambda_827, TAIL_CALL,
  POS(2305, 15),
  POS(2306, 15),
  POS(2308, 22),
  POS(2307, 15)
};

static TAB_NUM t_lambda_826[] = {
  1, // locals
  0, // parameters
  // funky_types::named_operator
  LET, -4, var_funky_types__named_operator, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_2296_1_position, var_funky__identifier_of, var_2298_24_identifier, var_funky__expression_of, var_2306_30_range_expression, LOCAL(1),
  // 
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(2311, 19),
  POS(2309, 19)
};

static TAB_NUM t_lambda_827[] = {
  0, // locals
  0, // parameters
  //  undefined range_expression
  LET, 2, var_undefined, var_2306_30_range_expression, TAIL_CALL,
  POS(2316, 19)
};

static TAB_NUM t_lambda_828[] = {
  0, // locals
  0, // parameters
  // syntax_error "space character"
  func_syntax_error, 1, str_space_character, TAIL_CALL,
  POS(2318, 15)
};

static TAB_NUM t_lambda_829[] = {
  0, // locals
  0, // parameters
  // syntax_error "'.'"
  func_syntax_error, 1, string_5, TAIL_CALL,
  POS(2320, 11)
};

static TAB_NUM t_lambda_830[] = {
  0, // locals
  0, // parameters
  //  undefined identifier
  LET, 2, var_undefined, var_2298_24_identifier, TAIL_CALL,
  POS(2321, 7)
};

static TAB_NUM t_func_parse_range_expression[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_2324_1_position,
  // parse_relational_expression !text $relational_expression
  func_parse_relational_expression, 0, 2, var_text, var_2325_35_relational_expression,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_36_text_is_defined, lambda_835, TAIL_CALL,
  POS(2324, 3),
  POS(2325, 3),
  POS(2327, 10),
  POS(2326, 3)
};

static TAB_NUM t_lambda_36_text_is_defined[] = {
  1, // locals
  0, // parameters
  // parse_range_operator !text $range_operator
  func_parse_range_operator, 0, 2, var_text, var_2328_28_range_operator,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_831, lambda_834, TAIL_CALL,
  POS(2328, 7),
  POS(2330, 14),
  POS(2329, 7)
};

static TAB_NUM t_lambda_831[] = {
  1, // locals
  0, // parameters
  // is_defined
  var_is_defined, 1, var_2328_28_range_operator, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_832, lambda_833, TAIL_CALL,
  POS(2333, 28),
  POS(2332, 11)
};

static TAB_NUM t_lambda_832[] = {
  1, // locals
  0, // parameters
  // funky_types::expression
  LET, -4, var_funky_types__expression, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_2324_1_position, var_funky__expression_of, var_2325_35_relational_expression, var_funky__operator_of, var_2328_28_range_operator, LOCAL(1),
  // 
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(2336, 15),
  POS(2334, 15)
};

static TAB_NUM t_lambda_833[] = {
  0, // locals
  0, // parameters
  //  text relational_expression
  LET, 2, var_text, var_2325_35_relational_expression, TAIL_CALL,
  POS(2341, 15)
};

static TAB_NUM t_lambda_834[] = {
  0, // locals
  0, // parameters
  //  undefined range_operator
  LET, 2, var_undefined, var_2328_28_range_operator, TAIL_CALL,
  POS(2342, 11)
};

static TAB_NUM t_lambda_835[] = {
  0, // locals
  0, // parameters
  //  undefined relational_expression
  LET, 2, var_undefined, var_2325_35_relational_expression, TAIL_CALL,
  POS(2343, 7)
};

static TAB_NUM t_func_parse_range_operator[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 3, lambda_836, lambda_839, lambda_844, TAIL_CALL,
  POS(2346, 3)
};

static TAB_NUM t_lambda_836[] = {
  3, // locals
  0, // parameters
  // text(1) == '.'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '.'
  var_std__equal, 2, LOCAL(1), chr_46, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_837, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_838, TAIL_CALL,
  POS(2349, 9),
  POS(2349, 9),
  POS(2348, 9),
  POS(2347, 7)
};

static TAB_NUM t_lambda_837[] = {
  2, // locals
  0, // parameters
  // text(2) == '.'
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '.'
  var_std__equal, 2, LOCAL(1), chr_46, 1, LOCAL(2),
  // text(2) == '.'
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2350, 9),
  POS(2350, 9),
  POS(2350, 9)
};

static TAB_NUM t_lambda_838[] = {
  0, // locals
  0, // parameters
  // range &text 3 -1
  var_range, 3, var_text, num_3, minus_num_1, 1, var_text,
  // parse_range
  func_parse_range, 0, TAIL_CALL,
  POS(2352, 9),
  POS(2353, 9)
};

static TAB_NUM t_lambda_839[] = {
  3, // locals
  0, // parameters
  // text(1) == ' '
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_840, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_843, TAIL_CALL,
  POS(2356, 9),
  POS(2356, 9),
  POS(2355, 9),
  POS(2354, 7)
};

static TAB_NUM t_lambda_840[] = {
  3, // locals
  0, // parameters
  // text(2) == '.'
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '.'
  var_std__equal, 2, LOCAL(1), chr_46, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_841, 1, LOCAL(3),
  // text(2) == '.'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(2357, 9),
  POS(2357, 9),
  POS(2355, 9),
  POS(2357, 9)
};

static TAB_NUM t_lambda_841[] = {
  3, // locals
  0, // parameters
  // text(3) == '.'
  var_text, 1, num_3, 1, LOCAL(1),
  // text(3) == '.'
  var_std__equal, 2, LOCAL(1), chr_46, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_842, 1, LOCAL(3),
  // text(3) == '.'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(2358, 9),
  POS(2358, 9),
  POS(2355, 9),
  POS(2358, 9)
};

static TAB_NUM t_lambda_842[] = {
  2, // locals
  0, // parameters
  // text(4) == ' '
  var_text, 1, num_4, 1, LOCAL(1),
  // text(4) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // text(4) == ' '
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2359, 9),
  POS(2359, 9),
  POS(2359, 9)
};

static TAB_NUM t_lambda_843[] = {
  0, // locals
  0, // parameters
  // range &text 5 -1
  var_range, 3, var_text, num_5, minus_num_1, 1, var_text,
  // parse_range
  func_parse_range, 0, TAIL_CALL,
  POS(2361, 9),
  POS(2362, 9)
};

static TAB_NUM t_lambda_844[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_845, TAIL_CALL,
  POS(2363, 7)
};

static TAB_NUM t_lambda_845[] = {
  0, // locals
  0, // parameters
  //  text undefined
  LET, 2, var_text, var_undefined, TAIL_CALL,
  POS(2365, 9)
};

static TAB_NUM t_func_parse_range[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, LOCAL(1),
  // parse_relational_expression funky_types::range
  func_parse_relational_expression, 1, var_funky_types__range, TAIL_CALL,
  POS(2368, 3),
  POS(2369, 3)
};

static TAB_NUM t_func_parse_relational_expression[] = {
  1, // locals
  -1, // parameters
  var_undefined, var_2373_0_derived_node,
  // $position text
  LET, 1, var_text, 1, var_2375_1_position,
  // parse_bit_expression !text $bit_expression
  func_parse_bit_expression, 0, 2, var_text, var_2376_28_bit_expression,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_37_text_is_defined, lambda_851, TAIL_CALL,
  POS(2375, 3),
  POS(2376, 3),
  POS(2378, 10),
  POS(2377, 3)
};

static TAB_NUM t_lambda_37_text_is_defined[] = {
  1, // locals
  0, // parameters
  // parse_comparison_operator !text $comparison_operator
  func_parse_comparison_operator, 0, 2, var_text, var_2379_33_comparison_operator,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_846, lambda_850, TAIL_CALL,
  POS(2379, 7),
  POS(2381, 14),
  POS(2380, 7)
};

static TAB_NUM t_lambda_846[] = {
  2, // locals
  0, // parameters
  // is_defined || comparison_operator.is_defined
  var_is_defined, 1, var_2373_0_derived_node, 1, LOCAL(1),
  // is_defined || comparison_operator.is_defined
  var_std__or, 2, LOCAL(1), lambda_847, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_848, lambda_849, TAIL_CALL,
  POS(2384, 26),
  POS(2384, 26),
  POS(2383, 11)
};

static TAB_NUM t_lambda_847[] = {
  1, // locals
  0, // parameters
  // is_defined
  var_is_defined, 1, var_2379_33_comparison_operator, 1, LOCAL(1),
  // comparison_operator.is_defined
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(2384, 60),
  POS(2384, 40)
};

static TAB_NUM t_lambda_848[] = {
  2, // locals
  0, // parameters
  // default_value(derived_node funky_types::expression)
  var_default_value, 2, var_2373_0_derived_node, var_funky_types__expression, 1, LOCAL(1),
  // default_value(derived_node funky_types::expression)
  LET, -4, LOCAL(1), var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_2375_1_position, var_funky__expression_of, var_2376_28_bit_expression, var_funky__operator_of, var_2379_33_comparison_operator, LOCAL(2),
  // 
  LET, 2, var_text, LOCAL(2), TAIL_CALL,
  POS(2387, 15),
  POS(2387, 15),
  POS(2385, 15)
};

static TAB_NUM t_lambda_849[] = {
  0, // locals
  0, // parameters
  //  text bit_expression
  LET, 2, var_text, var_2376_28_bit_expression, TAIL_CALL,
  POS(2392, 15)
};

static TAB_NUM t_lambda_850[] = {
  0, // locals
  0, // parameters
  //  undefined comparison_operator
  LET, 2, var_undefined, var_2379_33_comparison_operator, TAIL_CALL,
  POS(2393, 11)
};

static TAB_NUM t_lambda_851[] = {
  0, // locals
  0, // parameters
  //  undefined bit_expression
  LET, 2, var_undefined, var_2376_28_bit_expression, TAIL_CALL,
  POS(2394, 7)
};

static TAB_NUM t_func_parse_comparison_operator[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 13, lambda_852, lambda_857, lambda_860, lambda_865, lambda_868, lambda_873, lambda_876, lambda_880, lambda_882, lambda_887, lambda_890, lambda_894, lambda_896, TAIL_CALL,
  POS(2397, 3)
};

static TAB_NUM t_lambda_852[] = {
  3, // locals
  0, // parameters
  // text(1) == ' '
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_853, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_856, TAIL_CALL,
  POS(2400, 9),
  POS(2400, 9),
  POS(2399, 9),
  POS(2398, 7)
};

static TAB_NUM t_lambda_853[] = {
  3, // locals
  0, // parameters
  // text(2) == '='
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '='
  var_std__equal, 2, LOCAL(1), chr_61, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_854, 1, LOCAL(3),
  // text(2) == '='
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(2401, 9),
  POS(2401, 9),
  POS(2399, 9),
  POS(2401, 9)
};

static TAB_NUM t_lambda_854[] = {
  3, // locals
  0, // parameters
  // text(3) == '='
  var_text, 1, num_3, 1, LOCAL(1),
  // text(3) == '='
  var_std__equal, 2, LOCAL(1), chr_61, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_855, 1, LOCAL(3),
  // text(3) == '='
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(2402, 9),
  POS(2402, 9),
  POS(2399, 9),
  POS(2402, 9)
};

static TAB_NUM t_lambda_855[] = {
  2, // locals
  0, // parameters
  // text(4) == ' '
  var_text, 1, num_4, 1, LOCAL(1),
  // text(4) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // text(4) == ' '
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2403, 9),
  POS(2403, 9),
  POS(2403, 9)
};

static TAB_NUM t_lambda_856[] = {
  0, // locals
  0, // parameters
  // range &text 5 -1
  var_range, 3, var_text, num_5, minus_num_1, 1, var_text,
  // parse_equal
  func_parse_equal, 0, TAIL_CALL,
  POS(2405, 9),
  POS(2406, 9)
};

static TAB_NUM t_lambda_857[] = {
  3, // locals
  0, // parameters
  // text(1) == '='
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '='
  var_std__equal, 2, LOCAL(1), chr_61, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_858, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_859, TAIL_CALL,
  POS(2409, 9),
  POS(2409, 9),
  POS(2408, 9),
  POS(2407, 7)
};

static TAB_NUM t_lambda_858[] = {
  2, // locals
  0, // parameters
  // text(2) == '='
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '='
  var_std__equal, 2, LOCAL(1), chr_61, 1, LOCAL(2),
  // text(2) == '='
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2410, 9),
  POS(2410, 9),
  POS(2410, 9)
};

static TAB_NUM t_lambda_859[] = {
  0, // locals
  0, // parameters
  // range &text 3 -1
  var_range, 3, var_text, num_3, minus_num_1, 1, var_text,
  // parse_equal
  func_parse_equal, 0, TAIL_CALL,
  POS(2412, 9),
  POS(2413, 9)
};

static TAB_NUM t_lambda_860[] = {
  3, // locals
  0, // parameters
  // text(1) == ' '
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_861, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_864, TAIL_CALL,
  POS(2416, 9),
  POS(2416, 9),
  POS(2415, 9),
  POS(2414, 7)
};

static TAB_NUM t_lambda_861[] = {
  3, // locals
  0, // parameters
  // text(2) == '!'
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '!'
  var_std__equal, 2, LOCAL(1), chr_33, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_862, 1, LOCAL(3),
  // text(2) == '!'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(2417, 9),
  POS(2417, 9),
  POS(2415, 9),
  POS(2417, 9)
};

static TAB_NUM t_lambda_862[] = {
  3, // locals
  0, // parameters
  // text(3) == '='
  var_text, 1, num_3, 1, LOCAL(1),
  // text(3) == '='
  var_std__equal, 2, LOCAL(1), chr_61, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_863, 1, LOCAL(3),
  // text(3) == '='
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(2418, 9),
  POS(2418, 9),
  POS(2415, 9),
  POS(2418, 9)
};

static TAB_NUM t_lambda_863[] = {
  2, // locals
  0, // parameters
  // text(4) == ' '
  var_text, 1, num_4, 1, LOCAL(1),
  // text(4) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // text(4) == ' '
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2419, 9),
  POS(2419, 9),
  POS(2419, 9)
};

static TAB_NUM t_lambda_864[] = {
  0, // locals
  0, // parameters
  // range &text 5 -1
  var_range, 3, var_text, num_5, minus_num_1, 1, var_text,
  // parse_not_equal
  func_parse_not_equal, 0, TAIL_CALL,
  POS(2421, 9),
  POS(2422, 9)
};

static TAB_NUM t_lambda_865[] = {
  3, // locals
  0, // parameters
  // text(1) == '!'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '!'
  var_std__equal, 2, LOCAL(1), chr_33, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_866, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_867, TAIL_CALL,
  POS(2425, 9),
  POS(2425, 9),
  POS(2424, 9),
  POS(2423, 7)
};

static TAB_NUM t_lambda_866[] = {
  2, // locals
  0, // parameters
  // text(2) == '='
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '='
  var_std__equal, 2, LOCAL(1), chr_61, 1, LOCAL(2),
  // text(2) == '='
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2426, 9),
  POS(2426, 9),
  POS(2426, 9)
};

static TAB_NUM t_lambda_867[] = {
  0, // locals
  0, // parameters
  // range &text 3 -1
  var_range, 3, var_text, num_3, minus_num_1, 1, var_text,
  // parse_not_equal
  func_parse_not_equal, 0, TAIL_CALL,
  POS(2428, 9),
  POS(2429, 9)
};

static TAB_NUM t_lambda_868[] = {
  3, // locals
  0, // parameters
  // text(1) == ' '
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_869, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_872, TAIL_CALL,
  POS(2432, 9),
  POS(2432, 9),
  POS(2431, 9),
  POS(2430, 7)
};

static TAB_NUM t_lambda_869[] = {
  3, // locals
  0, // parameters
  // text(2) == '<'
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '<'
  var_std__equal, 2, LOCAL(1), chr_60, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_870, 1, LOCAL(3),
  // text(2) == '<'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(2433, 9),
  POS(2433, 9),
  POS(2431, 9),
  POS(2433, 9)
};

static TAB_NUM t_lambda_870[] = {
  3, // locals
  0, // parameters
  // text(3) == '='
  var_text, 1, num_3, 1, LOCAL(1),
  // text(3) == '='
  var_std__equal, 2, LOCAL(1), chr_61, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_871, 1, LOCAL(3),
  // text(3) == '='
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(2434, 9),
  POS(2434, 9),
  POS(2431, 9),
  POS(2434, 9)
};

static TAB_NUM t_lambda_871[] = {
  2, // locals
  0, // parameters
  // text(4) == ' '
  var_text, 1, num_4, 1, LOCAL(1),
  // text(4) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // text(4) == ' '
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2435, 9),
  POS(2435, 9),
  POS(2435, 9)
};

static TAB_NUM t_lambda_872[] = {
  0, // locals
  0, // parameters
  // range &text 5 -1
  var_range, 3, var_text, num_5, minus_num_1, 1, var_text,
  // parse_less_equal
  func_parse_less_equal, 0, TAIL_CALL,
  POS(2437, 9),
  POS(2438, 9)
};

static TAB_NUM t_lambda_873[] = {
  3, // locals
  0, // parameters
  // text(1) == '<'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '<'
  var_std__equal, 2, LOCAL(1), chr_60, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_874, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_875, TAIL_CALL,
  POS(2441, 9),
  POS(2441, 9),
  POS(2440, 9),
  POS(2439, 7)
};

static TAB_NUM t_lambda_874[] = {
  2, // locals
  0, // parameters
  // text(2) == '='
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '='
  var_std__equal, 2, LOCAL(1), chr_61, 1, LOCAL(2),
  // text(2) == '='
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2442, 9),
  POS(2442, 9),
  POS(2442, 9)
};

static TAB_NUM t_lambda_875[] = {
  0, // locals
  0, // parameters
  // range &text 3 -1
  var_range, 3, var_text, num_3, minus_num_1, 1, var_text,
  // parse_less_equal
  func_parse_less_equal, 0, TAIL_CALL,
  POS(2444, 9),
  POS(2445, 9)
};

static TAB_NUM t_lambda_876[] = {
  3, // locals
  0, // parameters
  // text(1) == ' '
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_877, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_879, TAIL_CALL,
  POS(2448, 9),
  POS(2448, 9),
  POS(2447, 9),
  POS(2446, 7)
};

static TAB_NUM t_lambda_877[] = {
  3, // locals
  0, // parameters
  // text(2) == '<'
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '<'
  var_std__equal, 2, LOCAL(1), chr_60, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_878, 1, LOCAL(3),
  // text(2) == '<'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(2449, 9),
  POS(2449, 9),
  POS(2447, 9),
  POS(2449, 9)
};

static TAB_NUM t_lambda_878[] = {
  2, // locals
  0, // parameters
  // text(3) == ' '
  var_text, 1, num_3, 1, LOCAL(1),
  // text(3) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // text(3) == ' '
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2450, 9),
  POS(2450, 9),
  POS(2450, 9)
};

static TAB_NUM t_lambda_879[] = {
  0, // locals
  0, // parameters
  // range &text 4 -1
  var_range, 3, var_text, num_4, minus_num_1, 1, var_text,
  // parse_less_than
  func_parse_less_than, 0, TAIL_CALL,
  POS(2452, 9),
  POS(2453, 9)
};

static TAB_NUM t_lambda_880[] = {
  2, // locals
  0, // parameters
  // text(1) == '<'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '<'
  var_std__equal, 2, LOCAL(1), chr_60, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_881, TAIL_CALL,
  POS(2455, 7),
  POS(2455, 7),
  POS(2454, 7)
};

static TAB_NUM t_lambda_881[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_less_than
  func_parse_less_than, 0, TAIL_CALL,
  POS(2457, 9),
  POS(2458, 9)
};

static TAB_NUM t_lambda_882[] = {
  3, // locals
  0, // parameters
  // text(1) == ' '
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_883, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_886, TAIL_CALL,
  POS(2461, 9),
  POS(2461, 9),
  POS(2460, 9),
  POS(2459, 7)
};

static TAB_NUM t_lambda_883[] = {
  3, // locals
  0, // parameters
  // text(2) == '>'
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '>'
  var_std__equal, 2, LOCAL(1), chr_62, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_884, 1, LOCAL(3),
  // text(2) == '>'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(2462, 9),
  POS(2462, 9),
  POS(2460, 9),
  POS(2462, 9)
};

static TAB_NUM t_lambda_884[] = {
  3, // locals
  0, // parameters
  // text(3) == '='
  var_text, 1, num_3, 1, LOCAL(1),
  // text(3) == '='
  var_std__equal, 2, LOCAL(1), chr_61, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_885, 1, LOCAL(3),
  // text(3) == '='
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(2463, 9),
  POS(2463, 9),
  POS(2460, 9),
  POS(2463, 9)
};

static TAB_NUM t_lambda_885[] = {
  2, // locals
  0, // parameters
  // text(4) == ' '
  var_text, 1, num_4, 1, LOCAL(1),
  // text(4) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // text(4) == ' '
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2464, 9),
  POS(2464, 9),
  POS(2464, 9)
};

static TAB_NUM t_lambda_886[] = {
  0, // locals
  0, // parameters
  // range &text 5 -1
  var_range, 3, var_text, num_5, minus_num_1, 1, var_text,
  // parse_greater_equal
  func_parse_greater_equal, 0, TAIL_CALL,
  POS(2466, 9),
  POS(2467, 9)
};

static TAB_NUM t_lambda_887[] = {
  3, // locals
  0, // parameters
  // text(1) == '>'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '>'
  var_std__equal, 2, LOCAL(1), chr_62, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_888, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_889, TAIL_CALL,
  POS(2470, 9),
  POS(2470, 9),
  POS(2469, 9),
  POS(2468, 7)
};

static TAB_NUM t_lambda_888[] = {
  2, // locals
  0, // parameters
  // text(2) == '='
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '='
  var_std__equal, 2, LOCAL(1), chr_61, 1, LOCAL(2),
  // text(2) == '='
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2471, 9),
  POS(2471, 9),
  POS(2471, 9)
};

static TAB_NUM t_lambda_889[] = {
  0, // locals
  0, // parameters
  // range &text 3 -1
  var_range, 3, var_text, num_3, minus_num_1, 1, var_text,
  // parse_greater_equal
  func_parse_greater_equal, 0, TAIL_CALL,
  POS(2473, 9),
  POS(2474, 9)
};

static TAB_NUM t_lambda_890[] = {
  3, // locals
  0, // parameters
  // text(1) == ' '
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_891, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_893, TAIL_CALL,
  POS(2477, 9),
  POS(2477, 9),
  POS(2476, 9),
  POS(2475, 7)
};

static TAB_NUM t_lambda_891[] = {
  3, // locals
  0, // parameters
  // text(2) == '>'
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '>'
  var_std__equal, 2, LOCAL(1), chr_62, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_892, 1, LOCAL(3),
  // text(2) == '>'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(2478, 9),
  POS(2478, 9),
  POS(2476, 9),
  POS(2478, 9)
};

static TAB_NUM t_lambda_892[] = {
  2, // locals
  0, // parameters
  // text(3) == ' '
  var_text, 1, num_3, 1, LOCAL(1),
  // text(3) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // text(3) == ' '
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2479, 9),
  POS(2479, 9),
  POS(2479, 9)
};

static TAB_NUM t_lambda_893[] = {
  0, // locals
  0, // parameters
  // range &text 4 -1
  var_range, 3, var_text, num_4, minus_num_1, 1, var_text,
  // parse_greater_than
  func_parse_greater_than, 0, TAIL_CALL,
  POS(2481, 9),
  POS(2482, 9)
};

static TAB_NUM t_lambda_894[] = {
  2, // locals
  0, // parameters
  // text(1) == '>'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '>'
  var_std__equal, 2, LOCAL(1), chr_62, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_895, TAIL_CALL,
  POS(2484, 7),
  POS(2484, 7),
  POS(2483, 7)
};

static TAB_NUM t_lambda_895[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_greater_than
  func_parse_greater_than, 0, TAIL_CALL,
  POS(2486, 9),
  POS(2487, 9)
};

static TAB_NUM t_lambda_896[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_897, TAIL_CALL,
  POS(2488, 7)
};

static TAB_NUM t_lambda_897[] = {
  0, // locals
  0, // parameters
  //  text undefined
  LET, 2, var_text, var_undefined, TAIL_CALL,
  POS(2490, 9)
};

static TAB_NUM t_func_parse_equal[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, LOCAL(1),
  // parse_tagged_bit_expression funky_types::equal
  func_parse_tagged_bit_expression, 1, var_funky_types__equal, TAIL_CALL,
  POS(2493, 3),
  POS(2494, 3)
};

static TAB_NUM t_func_parse_not_equal[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, LOCAL(1),
  // parse_tagged_bit_expression funky_types::not_equal
  func_parse_tagged_bit_expression, 1, var_funky_types__not_equal, TAIL_CALL,
  POS(2497, 3),
  POS(2498, 3)
};

static TAB_NUM t_func_parse_less_equal[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, LOCAL(1),
  // parse_tagged_bit_expression funky_types::less_equal
  func_parse_tagged_bit_expression, 1, var_funky_types__less_equal, TAIL_CALL,
  POS(2501, 3),
  POS(2502, 3)
};

static TAB_NUM t_func_parse_less_than[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, LOCAL(1),
  // parse_tagged_bit_expression funky_types::less_than
  func_parse_tagged_bit_expression, 1, var_funky_types__less_than, TAIL_CALL,
  POS(2505, 3),
  POS(2506, 3)
};

static TAB_NUM t_func_parse_greater_equal[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, LOCAL(1),
  // parse_tagged_bit_expression funky_types::greater_equal
  func_parse_tagged_bit_expression, 1, var_funky_types__greater_equal, TAIL_CALL,
  POS(2509, 3),
  POS(2510, 3)
};

static TAB_NUM t_func_parse_greater_than[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, LOCAL(1),
  // parse_tagged_bit_expression funky_types::greater_than
  func_parse_tagged_bit_expression, 1, var_funky_types__greater_than, TAIL_CALL,
  POS(2513, 3),
  POS(2514, 3)
};

static TAB_NUM t_func_parse_tagged_bit_expression[] = {
  1, // locals
  -1, // parameters
  var_undefined, var_2518_0_derived_node,
  // $position text
  LET, 1, var_text, 1, var_2520_1_position,
  // parse_additive_expression !text $additive_expression
  func_parse_additive_expression, 0, 2, var_text, var_2521_33_additive_expression,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_38_text_is_defined, lambda_903, TAIL_CALL,
  POS(2520, 3),
  POS(2521, 3),
  POS(2523, 10),
  POS(2522, 3)
};

static TAB_NUM t_lambda_38_text_is_defined[] = {
  1, // locals
  0, // parameters
  // parse_bit_operator !text $bit_operator
  func_parse_bit_operator, 0, 2, var_text, var_2524_26_bit_operator,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_898, lambda_902, TAIL_CALL,
  POS(2524, 7),
  POS(2526, 14),
  POS(2525, 7)
};

static TAB_NUM t_lambda_898[] = {
  2, // locals
  0, // parameters
  // is_defined || bit_operator.is_defined
  var_is_defined, 1, var_2518_0_derived_node, 1, LOCAL(1),
  // is_defined || bit_operator.is_defined
  var_std__or, 2, LOCAL(1), lambda_899, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_900, lambda_901, TAIL_CALL,
  POS(2529, 26),
  POS(2529, 26),
  POS(2528, 11)
};

static TAB_NUM t_lambda_899[] = {
  1, // locals
  0, // parameters
  // is_defined
  var_is_defined, 1, var_2524_26_bit_operator, 1, LOCAL(1),
  // bit_operator.is_defined
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(2529, 53),
  POS(2529, 40)
};

static TAB_NUM t_lambda_900[] = {
  2, // locals
  0, // parameters
  // default_value(derived_node funky_types::tagged_bit_expression)
  var_default_value, 2, var_2518_0_derived_node, var_funky_types__tagged_bit_expression, 1, LOCAL(1),
  // default_value(derived_node funky_types::tagged_bit_expression)
  LET, -4, LOCAL(1), var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_2520_1_position, var_funky__expression_of, var_2521_33_additive_expression, var_funky__operator_of, var_2524_26_bit_operator, LOCAL(2),
  // 
  LET, 2, var_text, LOCAL(2), TAIL_CALL,
  POS(2532, 15),
  POS(2532, 15),
  POS(2530, 15)
};

static TAB_NUM t_lambda_901[] = {
  0, // locals
  0, // parameters
  //  text additive_expression
  LET, 2, var_text, var_2521_33_additive_expression, TAIL_CALL,
  POS(2537, 15)
};

static TAB_NUM t_lambda_902[] = {
  0, // locals
  0, // parameters
  //  undefined bit_operator
  LET, 2, var_undefined, var_2524_26_bit_operator, TAIL_CALL,
  POS(2538, 11)
};

static TAB_NUM t_lambda_903[] = {
  0, // locals
  0, // parameters
  //  undefined additive_expression
  LET, 2, var_undefined, var_2521_33_additive_expression, TAIL_CALL,
  POS(2539, 7)
};

static TAB_NUM t_func_parse_bit_expression[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_2542_1_position,
  // parse_additive_expression !text $additive_expression
  func_parse_additive_expression, 0, 2, var_text, var_2543_33_additive_expression,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_39_text_is_defined, lambda_908, TAIL_CALL,
  POS(2542, 3),
  POS(2543, 3),
  POS(2545, 10),
  POS(2544, 3)
};

static TAB_NUM t_lambda_39_text_is_defined[] = {
  1, // locals
  0, // parameters
  // parse_bit_operator !text $bit_operator
  func_parse_bit_operator, 0, 2, var_text, var_2546_26_bit_operator,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_904, lambda_907, TAIL_CALL,
  POS(2546, 7),
  POS(2548, 14),
  POS(2547, 7)
};

static TAB_NUM t_lambda_904[] = {
  1, // locals
  0, // parameters
  // is_defined
  var_is_defined, 1, var_2546_26_bit_operator, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_905, lambda_906, TAIL_CALL,
  POS(2551, 26),
  POS(2550, 11)
};

static TAB_NUM t_lambda_905[] = {
  1, // locals
  0, // parameters
  // funky_types::expression
  LET, -4, var_funky_types__expression, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_2542_1_position, var_funky__expression_of, var_2543_33_additive_expression, var_funky__operator_of, var_2546_26_bit_operator, LOCAL(1),
  // 
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(2554, 15),
  POS(2552, 15)
};

static TAB_NUM t_lambda_906[] = {
  0, // locals
  0, // parameters
  //  text additive_expression
  LET, 2, var_text, var_2543_33_additive_expression, TAIL_CALL,
  POS(2559, 15)
};

static TAB_NUM t_lambda_907[] = {
  0, // locals
  0, // parameters
  //  undefined bit_operator
  LET, 2, var_undefined, var_2546_26_bit_operator, TAIL_CALL,
  POS(2560, 11)
};

static TAB_NUM t_lambda_908[] = {
  0, // locals
  0, // parameters
  //  undefined additive_expression
  LET, 2, var_undefined, var_2543_33_additive_expression, TAIL_CALL,
  POS(2561, 7)
};

static TAB_NUM t_func_parse_bit_operator[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 11, lambda_909, lambda_914, lambda_917, lambda_922, lambda_925, lambda_929, lambda_931, lambda_935, lambda_937, lambda_941, lambda_943, TAIL_CALL,
  POS(2564, 3)
};

static TAB_NUM t_lambda_909[] = {
  3, // locals
  0, // parameters
  // text(1) == ' '
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_910, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_913, TAIL_CALL,
  POS(2567, 9),
  POS(2567, 9),
  POS(2566, 9),
  POS(2565, 7)
};

static TAB_NUM t_lambda_910[] = {
  3, // locals
  0, // parameters
  // text(2) == '<'
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '<'
  var_std__equal, 2, LOCAL(1), chr_60, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_911, 1, LOCAL(3),
  // text(2) == '<'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(2568, 9),
  POS(2568, 9),
  POS(2566, 9),
  POS(2568, 9)
};

static TAB_NUM t_lambda_911[] = {
  3, // locals
  0, // parameters
  // text(3) == '<'
  var_text, 1, num_3, 1, LOCAL(1),
  // text(3) == '<'
  var_std__equal, 2, LOCAL(1), chr_60, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_912, 1, LOCAL(3),
  // text(3) == '<'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(2569, 9),
  POS(2569, 9),
  POS(2566, 9),
  POS(2569, 9)
};

static TAB_NUM t_lambda_912[] = {
  2, // locals
  0, // parameters
  // text(4) == ' '
  var_text, 1, num_4, 1, LOCAL(1),
  // text(4) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // text(4) == ' '
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2570, 9),
  POS(2570, 9),
  POS(2570, 9)
};

static TAB_NUM t_lambda_913[] = {
  0, // locals
  0, // parameters
  // range &text 5 -1
  var_range, 3, var_text, num_5, minus_num_1, 1, var_text,
  // parse_shift_left
  func_parse_shift_left, 0, TAIL_CALL,
  POS(2572, 9),
  POS(2573, 9)
};

static TAB_NUM t_lambda_914[] = {
  3, // locals
  0, // parameters
  // text(1) == '<'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '<'
  var_std__equal, 2, LOCAL(1), chr_60, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_915, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_916, TAIL_CALL,
  POS(2576, 9),
  POS(2576, 9),
  POS(2575, 9),
  POS(2574, 7)
};

static TAB_NUM t_lambda_915[] = {
  2, // locals
  0, // parameters
  // text(2) == '<'
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '<'
  var_std__equal, 2, LOCAL(1), chr_60, 1, LOCAL(2),
  // text(2) == '<'
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2577, 9),
  POS(2577, 9),
  POS(2577, 9)
};

static TAB_NUM t_lambda_916[] = {
  0, // locals
  0, // parameters
  // range &text 3 -1
  var_range, 3, var_text, num_3, minus_num_1, 1, var_text,
  // parse_shift_left
  func_parse_shift_left, 0, TAIL_CALL,
  POS(2579, 9),
  POS(2580, 9)
};

static TAB_NUM t_lambda_917[] = {
  3, // locals
  0, // parameters
  // text(1) == ' '
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_918, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_921, TAIL_CALL,
  POS(2583, 9),
  POS(2583, 9),
  POS(2582, 9),
  POS(2581, 7)
};

static TAB_NUM t_lambda_918[] = {
  3, // locals
  0, // parameters
  // text(2) == '>'
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '>'
  var_std__equal, 2, LOCAL(1), chr_62, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_919, 1, LOCAL(3),
  // text(2) == '>'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(2584, 9),
  POS(2584, 9),
  POS(2582, 9),
  POS(2584, 9)
};

static TAB_NUM t_lambda_919[] = {
  3, // locals
  0, // parameters
  // text(3) == '>'
  var_text, 1, num_3, 1, LOCAL(1),
  // text(3) == '>'
  var_std__equal, 2, LOCAL(1), chr_62, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_920, 1, LOCAL(3),
  // text(3) == '>'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(2585, 9),
  POS(2585, 9),
  POS(2582, 9),
  POS(2585, 9)
};

static TAB_NUM t_lambda_920[] = {
  2, // locals
  0, // parameters
  // text(4) == ' '
  var_text, 1, num_4, 1, LOCAL(1),
  // text(4) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // text(4) == ' '
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2586, 9),
  POS(2586, 9),
  POS(2586, 9)
};

static TAB_NUM t_lambda_921[] = {
  0, // locals
  0, // parameters
  // range &text 5 -1
  var_range, 3, var_text, num_5, minus_num_1, 1, var_text,
  // parse_shift_right
  func_parse_shift_right, 0, TAIL_CALL,
  POS(2588, 9),
  POS(2589, 9)
};

static TAB_NUM t_lambda_922[] = {
  3, // locals
  0, // parameters
  // text(1) == '>'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '>'
  var_std__equal, 2, LOCAL(1), chr_62, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_923, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_924, TAIL_CALL,
  POS(2592, 9),
  POS(2592, 9),
  POS(2591, 9),
  POS(2590, 7)
};

static TAB_NUM t_lambda_923[] = {
  2, // locals
  0, // parameters
  // text(2) == '>'
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '>'
  var_std__equal, 2, LOCAL(1), chr_62, 1, LOCAL(2),
  // text(2) == '>'
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2593, 9),
  POS(2593, 9),
  POS(2593, 9)
};

static TAB_NUM t_lambda_924[] = {
  0, // locals
  0, // parameters
  // range &text 3 -1
  var_range, 3, var_text, num_3, minus_num_1, 1, var_text,
  // parse_shift_right
  func_parse_shift_right, 0, TAIL_CALL,
  POS(2595, 9),
  POS(2596, 9)
};

static TAB_NUM t_lambda_925[] = {
  3, // locals
  0, // parameters
  // text(1) == ' '
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_926, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_928, TAIL_CALL,
  POS(2599, 9),
  POS(2599, 9),
  POS(2598, 9),
  POS(2597, 7)
};

static TAB_NUM t_lambda_926[] = {
  3, // locals
  0, // parameters
  // text(2) == '&'
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '&'
  var_std__equal, 2, LOCAL(1), chr_38, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_927, 1, LOCAL(3),
  // text(2) == '&'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(2600, 9),
  POS(2600, 9),
  POS(2598, 9),
  POS(2600, 9)
};

static TAB_NUM t_lambda_927[] = {
  2, // locals
  0, // parameters
  // text(3) == ' '
  var_text, 1, num_3, 1, LOCAL(1),
  // text(3) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // text(3) == ' '
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2601, 9),
  POS(2601, 9),
  POS(2601, 9)
};

static TAB_NUM t_lambda_928[] = {
  0, // locals
  0, // parameters
  // range &text 4 -1
  var_range, 3, var_text, num_4, minus_num_1, 1, var_text,
  // parse_bit_and
  func_parse_bit_and, 0, TAIL_CALL,
  POS(2603, 9),
  POS(2604, 9)
};

static TAB_NUM t_lambda_929[] = {
  2, // locals
  0, // parameters
  // text(1) == '&'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '&'
  var_std__equal, 2, LOCAL(1), chr_38, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_930, TAIL_CALL,
  POS(2606, 7),
  POS(2606, 7),
  POS(2605, 7)
};

static TAB_NUM t_lambda_930[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_bit_and
  func_parse_bit_and, 0, TAIL_CALL,
  POS(2608, 9),
  POS(2609, 9)
};

static TAB_NUM t_lambda_931[] = {
  3, // locals
  0, // parameters
  // text(1) == ' '
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_932, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_934, TAIL_CALL,
  POS(2612, 9),
  POS(2612, 9),
  POS(2611, 9),
  POS(2610, 7)
};

static TAB_NUM t_lambda_932[] = {
  3, // locals
  0, // parameters
  // text(2) == '|'
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '|'
  var_std__equal, 2, LOCAL(1), chr_124, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_933, 1, LOCAL(3),
  // text(2) == '|'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(2613, 9),
  POS(2613, 9),
  POS(2611, 9),
  POS(2613, 9)
};

static TAB_NUM t_lambda_933[] = {
  2, // locals
  0, // parameters
  // text(3) == ' '
  var_text, 1, num_3, 1, LOCAL(1),
  // text(3) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // text(3) == ' '
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2614, 9),
  POS(2614, 9),
  POS(2614, 9)
};

static TAB_NUM t_lambda_934[] = {
  0, // locals
  0, // parameters
  // range &text 4 -1
  var_range, 3, var_text, num_4, minus_num_1, 1, var_text,
  // parse_bit_or
  func_parse_bit_or, 0, TAIL_CALL,
  POS(2616, 9),
  POS(2617, 9)
};

static TAB_NUM t_lambda_935[] = {
  2, // locals
  0, // parameters
  // text(1) == '|'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '|'
  var_std__equal, 2, LOCAL(1), chr_124, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_936, TAIL_CALL,
  POS(2619, 7),
  POS(2619, 7),
  POS(2618, 7)
};

static TAB_NUM t_lambda_936[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_bit_or
  func_parse_bit_or, 0, TAIL_CALL,
  POS(2621, 9),
  POS(2622, 9)
};

static TAB_NUM t_lambda_937[] = {
  3, // locals
  0, // parameters
  // text(1) == ' '
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_938, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_940, TAIL_CALL,
  POS(2625, 9),
  POS(2625, 9),
  POS(2624, 9),
  POS(2623, 7)
};

static TAB_NUM t_lambda_938[] = {
  3, // locals
  0, // parameters
  // text(2) == '^'
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '^'
  var_std__equal, 2, LOCAL(1), chr_94, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_939, 1, LOCAL(3),
  // text(2) == '^'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(2626, 9),
  POS(2626, 9),
  POS(2624, 9),
  POS(2626, 9)
};

static TAB_NUM t_lambda_939[] = {
  2, // locals
  0, // parameters
  // text(3) == ' '
  var_text, 1, num_3, 1, LOCAL(1),
  // text(3) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // text(3) == ' '
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2627, 9),
  POS(2627, 9),
  POS(2627, 9)
};

static TAB_NUM t_lambda_940[] = {
  0, // locals
  0, // parameters
  // range &text 4 -1
  var_range, 3, var_text, num_4, minus_num_1, 1, var_text,
  // parse_bit_xor
  func_parse_bit_xor, 0, TAIL_CALL,
  POS(2629, 9),
  POS(2630, 9)
};

static TAB_NUM t_lambda_941[] = {
  2, // locals
  0, // parameters
  // text(1) == '^'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '^'
  var_std__equal, 2, LOCAL(1), chr_94, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_942, TAIL_CALL,
  POS(2632, 7),
  POS(2632, 7),
  POS(2631, 7)
};

static TAB_NUM t_lambda_942[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_bit_xor
  func_parse_bit_xor, 0, TAIL_CALL,
  POS(2634, 9),
  POS(2635, 9)
};

static TAB_NUM t_lambda_943[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_944, TAIL_CALL,
  POS(2636, 7)
};

static TAB_NUM t_lambda_944[] = {
  0, // locals
  0, // parameters
  //  text undefined
  LET, 2, var_text, var_undefined, TAIL_CALL,
  POS(2638, 9)
};

static TAB_NUM t_func_parse_shift_left[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, LOCAL(1),
  // parse_tagged_additive_expression funky_types::shift_left
  func_parse_tagged_additive_expression, 1, var_funky_types__shift_left, TAIL_CALL,
  POS(2641, 3),
  POS(2642, 3)
};

static TAB_NUM t_func_parse_shift_right[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, LOCAL(1),
  // parse_tagged_additive_expression funky_types::shift_right
  func_parse_tagged_additive_expression, 1, var_funky_types__shift_right, TAIL_CALL,
  POS(2645, 3),
  POS(2646, 3)
};

static TAB_NUM t_func_parse_bit_and[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, LOCAL(1),
  // parse_bit_and2 funky_types::bit_and
  func_parse_bit_and2, 1, var_funky_types__bit_and, TAIL_CALL,
  POS(2649, 3),
  POS(2650, 3)
};

static TAB_NUM t_func_parse_bit_and2[] = {
  1, // locals
  -1, // parameters
  var_undefined, var_2654_0_derived_node,
  // $position text
  LET, 1, var_text, 1, var_2656_1_position,
  // parse_additive_expression !text $additive_expression
  func_parse_additive_expression, 0, 2, var_text, var_2657_33_additive_expression,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_40_text_is_defined, lambda_950, TAIL_CALL,
  POS(2656, 3),
  POS(2657, 3),
  POS(2659, 10),
  POS(2658, 3)
};

static TAB_NUM t_lambda_40_text_is_defined[] = {
  1, // locals
  0, // parameters
  // parse_bit_and_operator !text $bit_and_operator
  func_parse_bit_and_operator, 0, 2, var_text, var_2660_30_bit_and_operator,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_945, lambda_949, TAIL_CALL,
  POS(2660, 7),
  POS(2662, 14),
  POS(2661, 7)
};

static TAB_NUM t_lambda_945[] = {
  2, // locals
  0, // parameters
  // is_defined || bit_and_operator.is_defined
  var_is_defined, 1, var_2654_0_derived_node, 1, LOCAL(1),
  // is_defined || bit_and_operator.is_defined
  var_std__or, 2, LOCAL(1), lambda_946, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_947, lambda_948, TAIL_CALL,
  POS(2665, 26),
  POS(2665, 26),
  POS(2664, 11)
};

static TAB_NUM t_lambda_946[] = {
  1, // locals
  0, // parameters
  // is_defined
  var_is_defined, 1, var_2660_30_bit_and_operator, 1, LOCAL(1),
  // bit_and_operator.is_defined
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(2665, 57),
  POS(2665, 40)
};

static TAB_NUM t_lambda_947[] = {
  2, // locals
  0, // parameters
  // default_value(derived_node funky_types::bit_and2)
  var_default_value, 2, var_2654_0_derived_node, var_funky_types__bit_and2, 1, LOCAL(1),
  // default_value(derived_node funky_types::bit_and2)
  LET, -4, LOCAL(1), var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_2656_1_position, var_funky__expression_of, var_2657_33_additive_expression, var_funky__operator_of, var_2660_30_bit_and_operator, LOCAL(2),
  // 
  LET, 2, var_text, LOCAL(2), TAIL_CALL,
  POS(2668, 15),
  POS(2668, 15),
  POS(2666, 15)
};

static TAB_NUM t_lambda_948[] = {
  0, // locals
  0, // parameters
  //  text additive_expression
  LET, 2, var_text, var_2657_33_additive_expression, TAIL_CALL,
  POS(2673, 15)
};

static TAB_NUM t_lambda_949[] = {
  0, // locals
  0, // parameters
  //  undefined bit_and_operator
  LET, 2, var_undefined, var_2660_30_bit_and_operator, TAIL_CALL,
  POS(2674, 11)
};

static TAB_NUM t_lambda_950[] = {
  0, // locals
  0, // parameters
  //  undefined additive_expression
  LET, 2, var_undefined, var_2657_33_additive_expression, TAIL_CALL,
  POS(2675, 7)
};

static TAB_NUM t_func_parse_bit_and_operator[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 3, lambda_951, lambda_955, lambda_957, TAIL_CALL,
  POS(2678, 3)
};

static TAB_NUM t_lambda_951[] = {
  3, // locals
  0, // parameters
  // text(1) == ' '
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_952, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_954, TAIL_CALL,
  POS(2681, 9),
  POS(2681, 9),
  POS(2680, 9),
  POS(2679, 7)
};

static TAB_NUM t_lambda_952[] = {
  3, // locals
  0, // parameters
  // text(2) == '&'
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '&'
  var_std__equal, 2, LOCAL(1), chr_38, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_953, 1, LOCAL(3),
  // text(2) == '&'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(2682, 9),
  POS(2682, 9),
  POS(2680, 9),
  POS(2682, 9)
};

static TAB_NUM t_lambda_953[] = {
  2, // locals
  0, // parameters
  // text(3) == ' '
  var_text, 1, num_3, 1, LOCAL(1),
  // text(3) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // text(3) == ' '
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2683, 9),
  POS(2683, 9),
  POS(2683, 9)
};

static TAB_NUM t_lambda_954[] = {
  0, // locals
  0, // parameters
  // range &text 4 -1
  var_range, 3, var_text, num_4, minus_num_1, 1, var_text,
  // parse_bit_and
  func_parse_bit_and, 0, TAIL_CALL,
  POS(2685, 9),
  POS(2686, 9)
};

static TAB_NUM t_lambda_955[] = {
  2, // locals
  0, // parameters
  // text(1) == '&'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '&'
  var_std__equal, 2, LOCAL(1), chr_38, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_956, TAIL_CALL,
  POS(2688, 7),
  POS(2688, 7),
  POS(2687, 7)
};

static TAB_NUM t_lambda_956[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_bit_and
  func_parse_bit_and, 0, TAIL_CALL,
  POS(2690, 9),
  POS(2691, 9)
};

static TAB_NUM t_lambda_957[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_958, TAIL_CALL,
  POS(2692, 7)
};

static TAB_NUM t_lambda_958[] = {
  0, // locals
  0, // parameters
  //  text undefined
  LET, 2, var_text, var_undefined, TAIL_CALL,
  POS(2694, 9)
};

static TAB_NUM t_func_parse_bit_or[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, LOCAL(1),
  // parse_bit_or2 funky_types::bit_or
  func_parse_bit_or2, 1, var_funky_types__bit_or, TAIL_CALL,
  POS(2697, 3),
  POS(2698, 3)
};

static TAB_NUM t_func_parse_bit_or2[] = {
  1, // locals
  -1, // parameters
  var_undefined, var_2702_0_derived_node,
  // $position text
  LET, 1, var_text, 1, var_2704_1_position,
  // parse_additive_expression !text $additive_expression
  func_parse_additive_expression, 0, 2, var_text, var_2705_33_additive_expression,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_41_text_is_defined, lambda_964, TAIL_CALL,
  POS(2704, 3),
  POS(2705, 3),
  POS(2707, 10),
  POS(2706, 3)
};

static TAB_NUM t_lambda_41_text_is_defined[] = {
  1, // locals
  0, // parameters
  // parse_bit_or_operator !text $bit_or_operator
  func_parse_bit_or_operator, 0, 2, var_text, var_2708_29_bit_or_operator,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_959, lambda_963, TAIL_CALL,
  POS(2708, 7),
  POS(2710, 14),
  POS(2709, 7)
};

static TAB_NUM t_lambda_959[] = {
  2, // locals
  0, // parameters
  // is_defined || bit_or_operator.is_defined
  var_is_defined, 1, var_2702_0_derived_node, 1, LOCAL(1),
  // is_defined || bit_or_operator.is_defined
  var_std__or, 2, LOCAL(1), lambda_960, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_961, lambda_962, TAIL_CALL,
  POS(2713, 26),
  POS(2713, 26),
  POS(2712, 11)
};

static TAB_NUM t_lambda_960[] = {
  1, // locals
  0, // parameters
  // is_defined
  var_is_defined, 1, var_2708_29_bit_or_operator, 1, LOCAL(1),
  // bit_or_operator.is_defined
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(2713, 56),
  POS(2713, 40)
};

static TAB_NUM t_lambda_961[] = {
  2, // locals
  0, // parameters
  // default_value(derived_node funky_types::bit_or2)
  var_default_value, 2, var_2702_0_derived_node, var_funky_types__bit_or2, 1, LOCAL(1),
  // default_value(derived_node funky_types::bit_or2)
  LET, -4, LOCAL(1), var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_2704_1_position, var_funky__expression_of, var_2705_33_additive_expression, var_funky__operator_of, var_2708_29_bit_or_operator, LOCAL(2),
  // 
  LET, 2, var_text, LOCAL(2), TAIL_CALL,
  POS(2716, 15),
  POS(2716, 15),
  POS(2714, 15)
};

static TAB_NUM t_lambda_962[] = {
  0, // locals
  0, // parameters
  //  text additive_expression
  LET, 2, var_text, var_2705_33_additive_expression, TAIL_CALL,
  POS(2721, 15)
};

static TAB_NUM t_lambda_963[] = {
  0, // locals
  0, // parameters
  //  undefined bit_or_operator
  LET, 2, var_undefined, var_2708_29_bit_or_operator, TAIL_CALL,
  POS(2722, 11)
};

static TAB_NUM t_lambda_964[] = {
  0, // locals
  0, // parameters
  //  undefined additive_expression
  LET, 2, var_undefined, var_2705_33_additive_expression, TAIL_CALL,
  POS(2723, 7)
};

static TAB_NUM t_func_parse_bit_or_operator[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 3, lambda_965, lambda_969, lambda_971, TAIL_CALL,
  POS(2726, 3)
};

static TAB_NUM t_lambda_965[] = {
  3, // locals
  0, // parameters
  // text(1) == ' '
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_966, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_968, TAIL_CALL,
  POS(2729, 9),
  POS(2729, 9),
  POS(2728, 9),
  POS(2727, 7)
};

static TAB_NUM t_lambda_966[] = {
  3, // locals
  0, // parameters
  // text(2) == '|'
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '|'
  var_std__equal, 2, LOCAL(1), chr_124, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_967, 1, LOCAL(3),
  // text(2) == '|'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(2730, 9),
  POS(2730, 9),
  POS(2728, 9),
  POS(2730, 9)
};

static TAB_NUM t_lambda_967[] = {
  2, // locals
  0, // parameters
  // text(3) == ' '
  var_text, 1, num_3, 1, LOCAL(1),
  // text(3) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // text(3) == ' '
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2731, 9),
  POS(2731, 9),
  POS(2731, 9)
};

static TAB_NUM t_lambda_968[] = {
  0, // locals
  0, // parameters
  // range &text 4 -1
  var_range, 3, var_text, num_4, minus_num_1, 1, var_text,
  // parse_bit_or
  func_parse_bit_or, 0, TAIL_CALL,
  POS(2733, 9),
  POS(2734, 9)
};

static TAB_NUM t_lambda_969[] = {
  2, // locals
  0, // parameters
  // text(1) == '|'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '|'
  var_std__equal, 2, LOCAL(1), chr_124, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_970, TAIL_CALL,
  POS(2736, 7),
  POS(2736, 7),
  POS(2735, 7)
};

static TAB_NUM t_lambda_970[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_bit_or
  func_parse_bit_or, 0, TAIL_CALL,
  POS(2738, 9),
  POS(2739, 9)
};

static TAB_NUM t_lambda_971[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_972, TAIL_CALL,
  POS(2740, 7)
};

static TAB_NUM t_lambda_972[] = {
  0, // locals
  0, // parameters
  //  text undefined
  LET, 2, var_text, var_undefined, TAIL_CALL,
  POS(2742, 9)
};

static TAB_NUM t_func_parse_bit_xor[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, LOCAL(1),
  // parse_bit_xor2 funky_types::bit_xor
  func_parse_bit_xor2, 1, var_funky_types__bit_xor, TAIL_CALL,
  POS(2745, 3),
  POS(2746, 3)
};

static TAB_NUM t_func_parse_bit_xor2[] = {
  1, // locals
  -1, // parameters
  var_undefined, var_2750_0_derived_node,
  // $position text
  LET, 1, var_text, 1, var_2752_1_position,
  // parse_additive_expression !text $additive_expression
  func_parse_additive_expression, 0, 2, var_text, var_2753_33_additive_expression,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_42_text_is_defined, lambda_978, TAIL_CALL,
  POS(2752, 3),
  POS(2753, 3),
  POS(2755, 10),
  POS(2754, 3)
};

static TAB_NUM t_lambda_42_text_is_defined[] = {
  1, // locals
  0, // parameters
  // parse_bit_xor_operator !text $bit_xor_operator
  func_parse_bit_xor_operator, 0, 2, var_text, var_2756_30_bit_xor_operator,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_973, lambda_977, TAIL_CALL,
  POS(2756, 7),
  POS(2758, 14),
  POS(2757, 7)
};

static TAB_NUM t_lambda_973[] = {
  2, // locals
  0, // parameters
  // is_defined || bit_xor_operator.is_defined
  var_is_defined, 1, var_2750_0_derived_node, 1, LOCAL(1),
  // is_defined || bit_xor_operator.is_defined
  var_std__or, 2, LOCAL(1), lambda_974, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_975, lambda_976, TAIL_CALL,
  POS(2761, 26),
  POS(2761, 26),
  POS(2760, 11)
};

static TAB_NUM t_lambda_974[] = {
  1, // locals
  0, // parameters
  // is_defined
  var_is_defined, 1, var_2756_30_bit_xor_operator, 1, LOCAL(1),
  // bit_xor_operator.is_defined
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(2761, 57),
  POS(2761, 40)
};

static TAB_NUM t_lambda_975[] = {
  2, // locals
  0, // parameters
  // default_value(derived_node funky_types::bit_xor2)
  var_default_value, 2, var_2750_0_derived_node, var_funky_types__bit_xor2, 1, LOCAL(1),
  // default_value(derived_node funky_types::bit_xor2)
  LET, -4, LOCAL(1), var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_2752_1_position, var_funky__expression_of, var_2753_33_additive_expression, var_funky__operator_of, var_2756_30_bit_xor_operator, LOCAL(2),
  // 
  LET, 2, var_text, LOCAL(2), TAIL_CALL,
  POS(2764, 15),
  POS(2764, 15),
  POS(2762, 15)
};

static TAB_NUM t_lambda_976[] = {
  0, // locals
  0, // parameters
  //  text additive_expression
  LET, 2, var_text, var_2753_33_additive_expression, TAIL_CALL,
  POS(2769, 15)
};

static TAB_NUM t_lambda_977[] = {
  0, // locals
  0, // parameters
  //  undefined bit_xor_operator
  LET, 2, var_undefined, var_2756_30_bit_xor_operator, TAIL_CALL,
  POS(2770, 11)
};

static TAB_NUM t_lambda_978[] = {
  0, // locals
  0, // parameters
  //  undefined additive_expression
  LET, 2, var_undefined, var_2753_33_additive_expression, TAIL_CALL,
  POS(2771, 7)
};

static TAB_NUM t_func_parse_bit_xor_operator[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 3, lambda_979, lambda_983, lambda_985, TAIL_CALL,
  POS(2774, 3)
};

static TAB_NUM t_lambda_979[] = {
  3, // locals
  0, // parameters
  // text(1) == ' '
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_980, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_982, TAIL_CALL,
  POS(2777, 9),
  POS(2777, 9),
  POS(2776, 9),
  POS(2775, 7)
};

static TAB_NUM t_lambda_980[] = {
  3, // locals
  0, // parameters
  // text(2) == '^'
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '^'
  var_std__equal, 2, LOCAL(1), chr_94, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_981, 1, LOCAL(3),
  // text(2) == '^'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(2778, 9),
  POS(2778, 9),
  POS(2776, 9),
  POS(2778, 9)
};

static TAB_NUM t_lambda_981[] = {
  2, // locals
  0, // parameters
  // text(3) == ' '
  var_text, 1, num_3, 1, LOCAL(1),
  // text(3) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // text(3) == ' '
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2779, 9),
  POS(2779, 9),
  POS(2779, 9)
};

static TAB_NUM t_lambda_982[] = {
  0, // locals
  0, // parameters
  // range &text 4 -1
  var_range, 3, var_text, num_4, minus_num_1, 1, var_text,
  // parse_bit_xor
  func_parse_bit_xor, 0, TAIL_CALL,
  POS(2781, 9),
  POS(2782, 9)
};

static TAB_NUM t_lambda_983[] = {
  2, // locals
  0, // parameters
  // text(1) == '^'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '^'
  var_std__equal, 2, LOCAL(1), chr_94, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_984, TAIL_CALL,
  POS(2784, 7),
  POS(2784, 7),
  POS(2783, 7)
};

static TAB_NUM t_lambda_984[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_bit_xor
  func_parse_bit_xor, 0, TAIL_CALL,
  POS(2786, 9),
  POS(2787, 9)
};

static TAB_NUM t_lambda_985[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_986, TAIL_CALL,
  POS(2788, 7)
};

static TAB_NUM t_lambda_986[] = {
  0, // locals
  0, // parameters
  //  text undefined
  LET, 2, var_text, var_undefined, TAIL_CALL,
  POS(2790, 9)
};

static TAB_NUM t_func_parse_tagged_additive_expression[] = {
  1, // locals
  -1, // parameters
  var_undefined, var_2794_0_derived_node,
  // $position text
  LET, 1, var_text, 1, var_2796_1_position,
  // parse_multiplicative_expression !text $multiplicative_expression
  func_parse_multiplicative_expression, 0, 2, var_text, var_2797_39_multiplicative_expression,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_43_text_is_defined, lambda_992, TAIL_CALL,
  POS(2796, 3),
  POS(2797, 3),
  POS(2799, 10),
  POS(2798, 3)
};

static TAB_NUM t_lambda_43_text_is_defined[] = {
  1, // locals
  0, // parameters
  // parse_additive_operator !text $additive_operator
  func_parse_additive_operator, 0, 2, var_text, var_2800_31_additive_operator,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_987, lambda_991, TAIL_CALL,
  POS(2800, 7),
  POS(2802, 14),
  POS(2801, 7)
};

static TAB_NUM t_lambda_987[] = {
  2, // locals
  0, // parameters
  // is_defined || additive_operator.is_defined
  var_is_defined, 1, var_2794_0_derived_node, 1, LOCAL(1),
  // is_defined || additive_operator.is_defined
  var_std__or, 2, LOCAL(1), lambda_988, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_989, lambda_990, TAIL_CALL,
  POS(2805, 26),
  POS(2805, 26),
  POS(2804, 11)
};

static TAB_NUM t_lambda_988[] = {
  1, // locals
  0, // parameters
  // is_defined
  var_is_defined, 1, var_2800_31_additive_operator, 1, LOCAL(1),
  // additive_operator.is_defined
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(2805, 58),
  POS(2805, 40)
};

static TAB_NUM t_lambda_989[] = {
  2, // locals
  0, // parameters
  // default_value(derived_node funky_types::tagged_additive_expression)
  var_default_value, 2, var_2794_0_derived_node, var_funky_types__tagged_additive_expression, 1, LOCAL(1),
  // default_value(derived_node funky_types::tagged_additive_expression)
  LET, -4, LOCAL(1), var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_2796_1_position, var_funky__expression_of, var_2797_39_multiplicative_expression, var_funky__operator_of, var_2800_31_additive_operator, LOCAL(2),
  // 
  LET, 2, var_text, LOCAL(2), TAIL_CALL,
  POS(2808, 15),
  POS(2808, 15),
  POS(2806, 15)
};

static TAB_NUM t_lambda_990[] = {
  0, // locals
  0, // parameters
  //  text multiplicative_expression
  LET, 2, var_text, var_2797_39_multiplicative_expression, TAIL_CALL,
  POS(2813, 15)
};

static TAB_NUM t_lambda_991[] = {
  0, // locals
  0, // parameters
  //  undefined additive_operator
  LET, 2, var_undefined, var_2800_31_additive_operator, TAIL_CALL,
  POS(2814, 11)
};

static TAB_NUM t_lambda_992[] = {
  0, // locals
  0, // parameters
  //  undefined multiplicative_expression
  LET, 2, var_undefined, var_2797_39_multiplicative_expression, TAIL_CALL,
  POS(2815, 7)
};

static TAB_NUM t_func_parse_additive_expression[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_2818_1_position,
  // parse_multiplicative_expression !text $multiplicative_expression
  func_parse_multiplicative_expression, 0, 2, var_text, var_2819_39_multiplicative_expression,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_44_text_is_defined, lambda_997, TAIL_CALL,
  POS(2818, 3),
  POS(2819, 3),
  POS(2821, 10),
  POS(2820, 3)
};

static TAB_NUM t_lambda_44_text_is_defined[] = {
  1, // locals
  0, // parameters
  // parse_additive_operator !text $additive_operator
  func_parse_additive_operator, 0, 2, var_text, var_2822_31_additive_operator,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_993, lambda_996, TAIL_CALL,
  POS(2822, 7),
  POS(2824, 14),
  POS(2823, 7)
};

static TAB_NUM t_lambda_993[] = {
  1, // locals
  0, // parameters
  // is_defined
  var_is_defined, 1, var_2822_31_additive_operator, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_994, lambda_995, TAIL_CALL,
  POS(2827, 31),
  POS(2826, 11)
};

static TAB_NUM t_lambda_994[] = {
  1, // locals
  0, // parameters
  // funky_types::expression
  LET, -4, var_funky_types__expression, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_2818_1_position, var_funky__expression_of, var_2819_39_multiplicative_expression, var_funky__operator_of, var_2822_31_additive_operator, LOCAL(1),
  // 
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(2830, 15),
  POS(2828, 15)
};

static TAB_NUM t_lambda_995[] = {
  0, // locals
  0, // parameters
  //  text multiplicative_expression
  LET, 2, var_text, var_2819_39_multiplicative_expression, TAIL_CALL,
  POS(2835, 15)
};

static TAB_NUM t_lambda_996[] = {
  0, // locals
  0, // parameters
  //  undefined additive_operator
  LET, 2, var_undefined, var_2822_31_additive_operator, TAIL_CALL,
  POS(2836, 11)
};

static TAB_NUM t_lambda_997[] = {
  0, // locals
  0, // parameters
  //  undefined multiplicative_expression
  LET, 2, var_undefined, var_2819_39_multiplicative_expression, TAIL_CALL,
  POS(2837, 7)
};

static TAB_NUM t_func_parse_additive_operator[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 5, lambda_998, lambda_1000, lambda_1004, lambda_1006, lambda_1010, TAIL_CALL,
  POS(2840, 3)
};

static TAB_NUM t_lambda_998[] = {
  2, // locals
  0, // parameters
  // text(1) == '+'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '+'
  var_std__equal, 2, LOCAL(1), chr_43, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_999, TAIL_CALL,
  POS(2842, 7),
  POS(2842, 7),
  POS(2841, 7)
};

static TAB_NUM t_lambda_999[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_plus
  func_parse_plus, 0, TAIL_CALL,
  POS(2844, 9),
  POS(2845, 9)
};

static TAB_NUM t_lambda_1000[] = {
  3, // locals
  0, // parameters
  // text(1) == ' '
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_1001, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_1003, TAIL_CALL,
  POS(2848, 9),
  POS(2848, 9),
  POS(2847, 9),
  POS(2846, 7)
};

static TAB_NUM t_lambda_1001[] = {
  3, // locals
  0, // parameters
  // text(2) == '+'
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '+'
  var_std__equal, 2, LOCAL(1), chr_43, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_1002, 1, LOCAL(3),
  // text(2) == '+'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(2849, 9),
  POS(2849, 9),
  POS(2847, 9),
  POS(2849, 9)
};

static TAB_NUM t_lambda_1002[] = {
  2, // locals
  0, // parameters
  // text(3) == ' '
  var_text, 1, num_3, 1, LOCAL(1),
  // text(3) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // text(3) == ' '
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2850, 9),
  POS(2850, 9),
  POS(2850, 9)
};

static TAB_NUM t_lambda_1003[] = {
  0, // locals
  0, // parameters
  // range &text 4 -1
  var_range, 3, var_text, num_4, minus_num_1, 1, var_text,
  // parse_plus
  func_parse_plus, 0, TAIL_CALL,
  POS(2852, 9),
  POS(2853, 9)
};

static TAB_NUM t_lambda_1004[] = {
  2, // locals
  0, // parameters
  // text(1) == '-'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '-'
  var_std__equal, 2, LOCAL(1), chr_45, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_1005, TAIL_CALL,
  POS(2855, 7),
  POS(2855, 7),
  POS(2854, 7)
};

static TAB_NUM t_lambda_1005[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_minus
  func_parse_minus, 0, TAIL_CALL,
  POS(2857, 9),
  POS(2858, 9)
};

static TAB_NUM t_lambda_1006[] = {
  3, // locals
  0, // parameters
  // text(1) == ' '
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_1007, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_1009, TAIL_CALL,
  POS(2861, 9),
  POS(2861, 9),
  POS(2860, 9),
  POS(2859, 7)
};

static TAB_NUM t_lambda_1007[] = {
  3, // locals
  0, // parameters
  // text(2) == '-'
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '-'
  var_std__equal, 2, LOCAL(1), chr_45, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_1008, 1, LOCAL(3),
  // text(2) == '-'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(2862, 9),
  POS(2862, 9),
  POS(2860, 9),
  POS(2862, 9)
};

static TAB_NUM t_lambda_1008[] = {
  2, // locals
  0, // parameters
  // text(3) == ' '
  var_text, 1, num_3, 1, LOCAL(1),
  // text(3) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // text(3) == ' '
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2863, 9),
  POS(2863, 9),
  POS(2863, 9)
};

static TAB_NUM t_lambda_1009[] = {
  0, // locals
  0, // parameters
  // range &text 4 -1
  var_range, 3, var_text, num_4, minus_num_1, 1, var_text,
  // parse_minus
  func_parse_minus, 0, TAIL_CALL,
  POS(2865, 9),
  POS(2866, 9)
};

static TAB_NUM t_lambda_1010[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_1011, TAIL_CALL,
  POS(2867, 7)
};

static TAB_NUM t_lambda_1011[] = {
  0, // locals
  0, // parameters
  //  text undefined
  LET, 2, var_text, var_undefined, TAIL_CALL,
  POS(2869, 9)
};

static TAB_NUM t_func_parse_plus[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, LOCAL(1),
  // parse_plus2 funky_types::plus
  func_parse_plus2, 1, var_funky_types__plus, TAIL_CALL,
  POS(2872, 3),
  POS(2873, 3)
};

static TAB_NUM t_func_parse_plus2[] = {
  1, // locals
  -1, // parameters
  var_undefined, var_2877_0_derived_node,
  // $position text
  LET, 1, var_text, 1, var_2879_1_position,
  // parse_multiplicative_expression !text $multiplicative_expression
  func_parse_multiplicative_expression, 0, 2, var_text, var_2880_39_multiplicative_expression,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_45_text_is_defined, lambda_1017, TAIL_CALL,
  POS(2879, 3),
  POS(2880, 3),
  POS(2882, 10),
  POS(2881, 3)
};

static TAB_NUM t_lambda_45_text_is_defined[] = {
  1, // locals
  0, // parameters
  // parse_additive_operator !text $additive_operator
  func_parse_additive_operator, 0, 2, var_text, var_2883_31_additive_operator,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1012, lambda_1016, TAIL_CALL,
  POS(2883, 7),
  POS(2885, 14),
  POS(2884, 7)
};

static TAB_NUM t_lambda_1012[] = {
  2, // locals
  0, // parameters
  // is_defined || additive_operator.is_defined
  var_is_defined, 1, var_2877_0_derived_node, 1, LOCAL(1),
  // is_defined || additive_operator.is_defined
  var_std__or, 2, LOCAL(1), lambda_1013, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_1014, lambda_1015, TAIL_CALL,
  POS(2888, 26),
  POS(2888, 26),
  POS(2887, 11)
};

static TAB_NUM t_lambda_1013[] = {
  1, // locals
  0, // parameters
  // is_defined
  var_is_defined, 1, var_2883_31_additive_operator, 1, LOCAL(1),
  // additive_operator.is_defined
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(2888, 58),
  POS(2888, 40)
};

static TAB_NUM t_lambda_1014[] = {
  2, // locals
  0, // parameters
  // default_value(derived_node funky_types::plus2)
  var_default_value, 2, var_2877_0_derived_node, var_funky_types__plus2, 1, LOCAL(1),
  // default_value(derived_node funky_types::plus2)
  LET, -4, LOCAL(1), var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_2879_1_position, var_funky__expression_of, var_2880_39_multiplicative_expression, var_funky__operator_of, var_2883_31_additive_operator, LOCAL(2),
  // 
  LET, 2, var_text, LOCAL(2), TAIL_CALL,
  POS(2891, 15),
  POS(2891, 15),
  POS(2889, 15)
};

static TAB_NUM t_lambda_1015[] = {
  0, // locals
  0, // parameters
  //  text multiplicative_expression
  LET, 2, var_text, var_2880_39_multiplicative_expression, TAIL_CALL,
  POS(2896, 15)
};

static TAB_NUM t_lambda_1016[] = {
  0, // locals
  0, // parameters
  //  undefined additive_operator
  LET, 2, var_undefined, var_2883_31_additive_operator, TAIL_CALL,
  POS(2897, 11)
};

static TAB_NUM t_lambda_1017[] = {
  0, // locals
  0, // parameters
  //  undefined multiplicative_expression
  LET, 2, var_undefined, var_2880_39_multiplicative_expression, TAIL_CALL,
  POS(2898, 7)
};

static TAB_NUM t_func_parse_minus[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, LOCAL(1),
  // parse_minus2 funky_types::minus
  func_parse_minus2, 1, var_funky_types__minus, TAIL_CALL,
  POS(2901, 3),
  POS(2902, 3)
};

static TAB_NUM t_func_parse_minus2[] = {
  1, // locals
  -1, // parameters
  var_undefined, var_2906_0_derived_node,
  // $position text
  LET, 1, var_text, 1, var_2908_1_position,
  // parse_multiplicative_expression !text $multiplicative_expression
  func_parse_multiplicative_expression, 0, 2, var_text, var_2909_39_multiplicative_expression,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_46_text_is_defined, lambda_1023, TAIL_CALL,
  POS(2908, 3),
  POS(2909, 3),
  POS(2911, 10),
  POS(2910, 3)
};

static TAB_NUM t_lambda_46_text_is_defined[] = {
  1, // locals
  0, // parameters
  // parse_additive_operator !text $additive_operator
  func_parse_additive_operator, 0, 2, var_text, var_2912_31_additive_operator,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1018, lambda_1022, TAIL_CALL,
  POS(2912, 7),
  POS(2914, 14),
  POS(2913, 7)
};

static TAB_NUM t_lambda_1018[] = {
  2, // locals
  0, // parameters
  // is_defined || additive_operator.is_defined
  var_is_defined, 1, var_2906_0_derived_node, 1, LOCAL(1),
  // is_defined || additive_operator.is_defined
  var_std__or, 2, LOCAL(1), lambda_1019, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_1020, lambda_1021, TAIL_CALL,
  POS(2917, 26),
  POS(2917, 26),
  POS(2916, 11)
};

static TAB_NUM t_lambda_1019[] = {
  1, // locals
  0, // parameters
  // is_defined
  var_is_defined, 1, var_2912_31_additive_operator, 1, LOCAL(1),
  // additive_operator.is_defined
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(2917, 58),
  POS(2917, 40)
};

static TAB_NUM t_lambda_1020[] = {
  2, // locals
  0, // parameters
  // default_value(derived_node funky_types::minus2)
  var_default_value, 2, var_2906_0_derived_node, var_funky_types__minus2, 1, LOCAL(1),
  // default_value(derived_node funky_types::minus2)
  LET, -4, LOCAL(1), var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_2908_1_position, var_funky__expression_of, var_2909_39_multiplicative_expression, var_funky__operator_of, var_2912_31_additive_operator, LOCAL(2),
  // 
  LET, 2, var_text, LOCAL(2), TAIL_CALL,
  POS(2920, 15),
  POS(2920, 15),
  POS(2918, 15)
};

static TAB_NUM t_lambda_1021[] = {
  0, // locals
  0, // parameters
  //  text multiplicative_expression
  LET, 2, var_text, var_2909_39_multiplicative_expression, TAIL_CALL,
  POS(2925, 15)
};

static TAB_NUM t_lambda_1022[] = {
  0, // locals
  0, // parameters
  //  undefined additive_operator
  LET, 2, var_undefined, var_2912_31_additive_operator, TAIL_CALL,
  POS(2926, 11)
};

static TAB_NUM t_lambda_1023[] = {
  0, // locals
  0, // parameters
  //  undefined multiplicative_expression
  LET, 2, var_undefined, var_2909_39_multiplicative_expression, TAIL_CALL,
  POS(2927, 7)
};

static TAB_NUM t_func_parse_multiplicative_expression[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_2930_1_position,
  // parse_an_expression !text $an_expression
  func_parse_an_expression, 0, 2, var_text, var_2931_27_an_expression,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_47_text_is_defined, lambda_1028, TAIL_CALL,
  POS(2930, 3),
  POS(2931, 3),
  POS(2933, 10),
  POS(2932, 3)
};

static TAB_NUM t_lambda_47_text_is_defined[] = {
  1, // locals
  0, // parameters
  // parse_multiplicative_operator !text $multiplicative_operator
  func_parse_multiplicative_operator, 0, 2, var_text, var_2934_37_multiplicative_operator,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1024, lambda_1027, TAIL_CALL,
  POS(2934, 7),
  POS(2936, 14),
  POS(2935, 7)
};

static TAB_NUM t_lambda_1024[] = {
  1, // locals
  0, // parameters
  // is_defined
  var_is_defined, 1, var_2934_37_multiplicative_operator, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1025, lambda_1026, TAIL_CALL,
  POS(2939, 37),
  POS(2938, 11)
};

static TAB_NUM t_lambda_1025[] = {
  1, // locals
  0, // parameters
  // funky_types::expression
  LET, -4, var_funky_types__expression, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_2930_1_position, var_funky__expression_of, var_2931_27_an_expression, var_funky__operator_of, var_2934_37_multiplicative_operator, LOCAL(1),
  // 
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(2942, 15),
  POS(2940, 15)
};

static TAB_NUM t_lambda_1026[] = {
  0, // locals
  0, // parameters
  //  text an_expression
  LET, 2, var_text, var_2931_27_an_expression, TAIL_CALL,
  POS(2947, 15)
};

static TAB_NUM t_lambda_1027[] = {
  0, // locals
  0, // parameters
  //  undefined multiplicative_operator
  LET, 2, var_undefined, var_2934_37_multiplicative_operator, TAIL_CALL,
  POS(2948, 11)
};

static TAB_NUM t_lambda_1028[] = {
  0, // locals
  0, // parameters
  //  undefined an_expression
  LET, 2, var_undefined, var_2931_27_an_expression, TAIL_CALL,
  POS(2949, 7)
};

static TAB_NUM t_func_parse_multiplicative_operator[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 5, lambda_1029, lambda_1031, lambda_1035, lambda_1037, lambda_1041, TAIL_CALL,
  POS(2952, 3)
};

static TAB_NUM t_lambda_1029[] = {
  2, // locals
  0, // parameters
  // text(1) == '*'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '*'
  var_std__equal, 2, LOCAL(1), chr_42, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_1030, TAIL_CALL,
  POS(2954, 7),
  POS(2954, 7),
  POS(2953, 7)
};

static TAB_NUM t_lambda_1030[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_times
  func_parse_times, 0, TAIL_CALL,
  POS(2956, 9),
  POS(2957, 9)
};

static TAB_NUM t_lambda_1031[] = {
  3, // locals
  0, // parameters
  // text(1) == ' '
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_1032, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_1034, TAIL_CALL,
  POS(2960, 9),
  POS(2960, 9),
  POS(2959, 9),
  POS(2958, 7)
};

static TAB_NUM t_lambda_1032[] = {
  3, // locals
  0, // parameters
  // text(2) == '*'
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '*'
  var_std__equal, 2, LOCAL(1), chr_42, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_1033, 1, LOCAL(3),
  // text(2) == '*'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(2961, 9),
  POS(2961, 9),
  POS(2959, 9),
  POS(2961, 9)
};

static TAB_NUM t_lambda_1033[] = {
  2, // locals
  0, // parameters
  // text(3) == ' '
  var_text, 1, num_3, 1, LOCAL(1),
  // text(3) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // text(3) == ' '
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2962, 9),
  POS(2962, 9),
  POS(2962, 9)
};

static TAB_NUM t_lambda_1034[] = {
  0, // locals
  0, // parameters
  // range &text 4 -1
  var_range, 3, var_text, num_4, minus_num_1, 1, var_text,
  // parse_times
  func_parse_times, 0, TAIL_CALL,
  POS(2964, 9),
  POS(2965, 9)
};

static TAB_NUM t_lambda_1035[] = {
  2, // locals
  0, // parameters
  // text(1) == '/'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '/'
  var_std__equal, 2, LOCAL(1), chr_47, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_1036, TAIL_CALL,
  POS(2967, 7),
  POS(2967, 7),
  POS(2966, 7)
};

static TAB_NUM t_lambda_1036[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_over
  func_parse_over, 0, TAIL_CALL,
  POS(2969, 9),
  POS(2970, 9)
};

static TAB_NUM t_lambda_1037[] = {
  3, // locals
  0, // parameters
  // text(1) == ' '
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_1038, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_1040, TAIL_CALL,
  POS(2973, 9),
  POS(2973, 9),
  POS(2972, 9),
  POS(2971, 7)
};

static TAB_NUM t_lambda_1038[] = {
  3, // locals
  0, // parameters
  // text(2) == '/'
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '/'
  var_std__equal, 2, LOCAL(1), chr_47, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_1039, 1, LOCAL(3),
  // text(2) == '/'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(2974, 9),
  POS(2974, 9),
  POS(2972, 9),
  POS(2974, 9)
};

static TAB_NUM t_lambda_1039[] = {
  2, // locals
  0, // parameters
  // text(3) == ' '
  var_text, 1, num_3, 1, LOCAL(1),
  // text(3) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // text(3) == ' '
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2975, 9),
  POS(2975, 9),
  POS(2975, 9)
};

static TAB_NUM t_lambda_1040[] = {
  0, // locals
  0, // parameters
  // range &text 4 -1
  var_range, 3, var_text, num_4, minus_num_1, 1, var_text,
  // parse_over
  func_parse_over, 0, TAIL_CALL,
  POS(2977, 9),
  POS(2978, 9)
};

static TAB_NUM t_lambda_1041[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_1042, TAIL_CALL,
  POS(2979, 7)
};

static TAB_NUM t_lambda_1042[] = {
  0, // locals
  0, // parameters
  //  text undefined
  LET, 2, var_text, var_undefined, TAIL_CALL,
  POS(2981, 9)
};

static TAB_NUM t_func_parse_times[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, LOCAL(1),
  // parse_times2 funky_types::times
  func_parse_times2, 1, var_funky_types__times, TAIL_CALL,
  POS(2984, 3),
  POS(2985, 3)
};

static TAB_NUM t_func_parse_times2[] = {
  1, // locals
  -1, // parameters
  var_undefined, var_2989_0_derived_node,
  // $position text
  LET, 1, var_text, 1, var_2991_1_position,
  // parse_an_expression !text $an_expression
  func_parse_an_expression, 0, 2, var_text, var_2992_27_an_expression,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_48_text_is_defined, lambda_1048, TAIL_CALL,
  POS(2991, 3),
  POS(2992, 3),
  POS(2994, 10),
  POS(2993, 3)
};

static TAB_NUM t_lambda_48_text_is_defined[] = {
  1, // locals
  0, // parameters
  // parse_multiplicative_operator !text $multiplicative_operator
  func_parse_multiplicative_operator, 0, 2, var_text, var_2995_37_multiplicative_operator,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1043, lambda_1047, TAIL_CALL,
  POS(2995, 7),
  POS(2997, 14),
  POS(2996, 7)
};

static TAB_NUM t_lambda_1043[] = {
  2, // locals
  0, // parameters
  // is_defined || multiplicative_operator.is_defined
  var_is_defined, 1, var_2989_0_derived_node, 1, LOCAL(1),
  // is_defined || multiplicative_operator.is_defined
  var_std__or, 2, LOCAL(1), lambda_1044, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_1045, lambda_1046, TAIL_CALL,
  POS(3000, 26),
  POS(3000, 26),
  POS(2999, 11)
};

static TAB_NUM t_lambda_1044[] = {
  1, // locals
  0, // parameters
  // is_defined
  var_is_defined, 1, var_2995_37_multiplicative_operator, 1, LOCAL(1),
  // multiplicative_operator.is_defined
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(3000, 64),
  POS(3000, 40)
};

static TAB_NUM t_lambda_1045[] = {
  2, // locals
  0, // parameters
  // default_value(derived_node funky_types::times2)
  var_default_value, 2, var_2989_0_derived_node, var_funky_types__times2, 1, LOCAL(1),
  // default_value(derived_node funky_types::times2)
  LET, -4, LOCAL(1), var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_2991_1_position, var_funky__expression_of, var_2992_27_an_expression, var_funky__operator_of, var_2995_37_multiplicative_operator, LOCAL(2),
  // 
  LET, 2, var_text, LOCAL(2), TAIL_CALL,
  POS(3003, 15),
  POS(3003, 15),
  POS(3001, 15)
};

static TAB_NUM t_lambda_1046[] = {
  0, // locals
  0, // parameters
  //  text an_expression
  LET, 2, var_text, var_2992_27_an_expression, TAIL_CALL,
  POS(3008, 15)
};

static TAB_NUM t_lambda_1047[] = {
  0, // locals
  0, // parameters
  //  undefined multiplicative_operator
  LET, 2, var_undefined, var_2995_37_multiplicative_operator, TAIL_CALL,
  POS(3009, 11)
};

static TAB_NUM t_lambda_1048[] = {
  0, // locals
  0, // parameters
  //  undefined an_expression
  LET, 2, var_undefined, var_2992_27_an_expression, TAIL_CALL,
  POS(3010, 7)
};

static TAB_NUM t_func_parse_over[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, LOCAL(1),
  // parse_over2 funky_types::over
  func_parse_over2, 1, var_funky_types__over, TAIL_CALL,
  POS(3013, 3),
  POS(3014, 3)
};

static TAB_NUM t_func_parse_over2[] = {
  1, // locals
  -1, // parameters
  var_undefined, var_3018_0_derived_node,
  // $position text
  LET, 1, var_text, 1, var_3020_1_position,
  // parse_an_expression !text $an_expression
  func_parse_an_expression, 0, 2, var_text, var_3021_27_an_expression,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_49_text_is_defined, lambda_1054, TAIL_CALL,
  POS(3020, 3),
  POS(3021, 3),
  POS(3023, 10),
  POS(3022, 3)
};

static TAB_NUM t_lambda_49_text_is_defined[] = {
  1, // locals
  0, // parameters
  // parse_multiplicative_operator !text $multiplicative_operator
  func_parse_multiplicative_operator, 0, 2, var_text, var_3024_37_multiplicative_operator,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1049, lambda_1053, TAIL_CALL,
  POS(3024, 7),
  POS(3026, 14),
  POS(3025, 7)
};

static TAB_NUM t_lambda_1049[] = {
  2, // locals
  0, // parameters
  // is_defined || multiplicative_operator.is_defined
  var_is_defined, 1, var_3018_0_derived_node, 1, LOCAL(1),
  // is_defined || multiplicative_operator.is_defined
  var_std__or, 2, LOCAL(1), lambda_1050, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_1051, lambda_1052, TAIL_CALL,
  POS(3029, 26),
  POS(3029, 26),
  POS(3028, 11)
};

static TAB_NUM t_lambda_1050[] = {
  1, // locals
  0, // parameters
  // is_defined
  var_is_defined, 1, var_3024_37_multiplicative_operator, 1, LOCAL(1),
  // multiplicative_operator.is_defined
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(3029, 64),
  POS(3029, 40)
};

static TAB_NUM t_lambda_1051[] = {
  2, // locals
  0, // parameters
  // default_value(derived_node funky_types::over2)
  var_default_value, 2, var_3018_0_derived_node, var_funky_types__over2, 1, LOCAL(1),
  // default_value(derived_node funky_types::over2)
  LET, -4, LOCAL(1), var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_3020_1_position, var_funky__expression_of, var_3021_27_an_expression, var_funky__operator_of, var_3024_37_multiplicative_operator, LOCAL(2),
  // 
  LET, 2, var_text, LOCAL(2), TAIL_CALL,
  POS(3032, 15),
  POS(3032, 15),
  POS(3030, 15)
};

static TAB_NUM t_lambda_1052[] = {
  0, // locals
  0, // parameters
  //  text an_expression
  LET, 2, var_text, var_3021_27_an_expression, TAIL_CALL,
  POS(3037, 15)
};

static TAB_NUM t_lambda_1053[] = {
  0, // locals
  0, // parameters
  //  undefined multiplicative_operator
  LET, 2, var_undefined, var_3024_37_multiplicative_operator, TAIL_CALL,
  POS(3038, 11)
};

static TAB_NUM t_lambda_1054[] = {
  0, // locals
  0, // parameters
  //  undefined an_expression
  LET, 2, var_undefined, var_3021_27_an_expression, TAIL_CALL,
  POS(3039, 7)
};

static TAB_NUM t_func_parse_an_expression[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 8, lambda_1055, lambda_1057, lambda_1060, lambda_1062, lambda_1064, lambda_1066, lambda_1071, lambda_1073, TAIL_CALL,
  POS(3042, 3)
};

static TAB_NUM t_lambda_1055[] = {
  2, // locals
  0, // parameters
  // text(1) == '('
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '('
  var_std__equal, 2, LOCAL(1), chr_40, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_1056, TAIL_CALL,
  POS(3044, 7),
  POS(3044, 7),
  POS(3043, 7)
};

static TAB_NUM t_lambda_1056[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_parenthesed_expression_without_prefix
  func_parse_parenthesed_expression_without_prefix, 0, TAIL_CALL,
  POS(3046, 9),
  POS(3047, 9)
};

static TAB_NUM t_lambda_1057[] = {
  3, // locals
  0, // parameters
  // text(1) == '''
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '''
  var_std__equal, 2, LOCAL(1), chr_39, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_1058, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_1059, TAIL_CALL,
  POS(3050, 9),
  POS(3050, 9),
  POS(3049, 9),
  POS(3048, 7)
};

static TAB_NUM t_lambda_1058[] = {
  2, // locals
  0, // parameters
  // text(2) == '@@'
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '@@'
  var_std__equal, 2, LOCAL(1), chr_64, 1, LOCAL(2),
  // text(2) == '@@'
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(3051, 9),
  POS(3051, 9),
  POS(3051, 9)
};

static TAB_NUM t_lambda_1059[] = {
  0, // locals
  0, // parameters
  // range &text 3 -1
  var_range, 3, var_text, num_3, minus_num_1, 1, var_text,
  // parse_special_character_literal
  func_parse_special_character_literal, 0, TAIL_CALL,
  POS(3053, 9),
  POS(3054, 9)
};

static TAB_NUM t_lambda_1060[] = {
  2, // locals
  0, // parameters
  // text(1) == '''
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '''
  var_std__equal, 2, LOCAL(1), chr_39, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_1061, TAIL_CALL,
  POS(3056, 7),
  POS(3056, 7),
  POS(3055, 7)
};

static TAB_NUM t_lambda_1061[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_character_literal_without_prefix
  func_parse_character_literal_without_prefix, 0, TAIL_CALL,
  POS(3058, 9),
  POS(3059, 9)
};

static TAB_NUM t_lambda_1062[] = {
  2, // locals
  0, // parameters
  // text(1) == '"'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '"'
  var_std__equal, 2, LOCAL(1), chr_34, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_1063, TAIL_CALL,
  POS(3061, 7),
  POS(3061, 7),
  POS(3060, 7)
};

static TAB_NUM t_lambda_1063[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_string_literal_without_prefix
  func_parse_string_literal_without_prefix, 0, TAIL_CALL,
  POS(3063, 9),
  POS(3064, 9)
};

static TAB_NUM t_lambda_1064[] = {
  2, // locals
  0, // parameters
  // text(1) == '-'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '-'
  var_std__equal, 2, LOCAL(1), chr_45, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_1065, TAIL_CALL,
  POS(3066, 7),
  POS(3066, 7),
  POS(3065, 7)
};

static TAB_NUM t_lambda_1065[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_negation_without_prefix
  func_parse_negation_without_prefix, 0, TAIL_CALL,
  POS(3068, 9),
  POS(3069, 9)
};

static TAB_NUM t_lambda_1066[] = {
  5, // locals
  0, // parameters
  // text(1) >= 'a' && text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z')
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) >= 'a' && text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z')
  var_std__less, 2, LOCAL(1), chr_97, 1, LOCAL(2),
  // text(1) >= 'a' && text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) >= 'a' && text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z')
  var_std__and, 2, LOCAL(3), lambda_1067, 1, LOCAL(4),
  // text(1) >= 'a' && text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z')
  var_std__or, 2, LOCAL(4), lambda_1068, 1, LOCAL(5),
  // 
  LET, 2, LOCAL(5), lambda_1070, TAIL_CALL,
  POS(3071, 8),
  POS(3071, 8),
  POS(3071, 8),
  POS(3071, 8),
  POS(3071, 8),
  POS(3070, 7)
};

static TAB_NUM t_lambda_1067[] = {
  3, // locals
  0, // parameters
  // text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z')
  var_text, 1, num_1, 1, LOCAL(1),
  // z') || (text(1) >= 'A' && text(1) <= 'Z')
  var_std__less, 2, chr_122, LOCAL(1), 1, LOCAL(2),
  // z') || (text(1) >= 'A' && text(1) <= 'Z')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z')
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(3071, 26),
  POS(3071, 38),
  POS(3071, 38),
  POS(3071, 26)
};

static TAB_NUM t_lambda_1068[] = {
  4, // locals
  0, // parameters
  // text(1) >= 'A' && text(1) <= 'Z')
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) >= 'A' && text(1) <= 'Z')
  var_std__less, 2, LOCAL(1), chr_65, 1, LOCAL(2),
  // text(1) >= 'A' && text(1) <= 'Z')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) >= 'A' && text(1) <= 'Z')
  var_std__and, 2, LOCAL(3), lambda_1069, 1, LOCAL(4),
  // text(1) >= 'A' && text(1) <= 'Z')
  LET, 1, LOCAL(4), TAIL_CALL,
  POS(3071, 46),
  POS(3071, 46),
  POS(3071, 46),
  POS(3071, 46),
  POS(3071, 46)
};

static TAB_NUM t_lambda_1069[] = {
  3, // locals
  0, // parameters
  // text(1) <= 'Z')
  var_text, 1, num_1, 1, LOCAL(1),
  // Z')
  var_std__less, 2, chr_90, LOCAL(1), 1, LOCAL(2),
  // Z')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) <= 'Z')
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(3071, 64),
  POS(3071, 76),
  POS(3071, 76),
  POS(3071, 64)
};

static TAB_NUM t_lambda_1070[] = {
  0, // locals
  0, // parameters
  // !str text
  LET, 1, var_text, 1, var_str,
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_functor_without_prefix
  func_parse_functor_without_prefix, 0, TAIL_CALL,
  POS(3073, 9),
  POS(3074, 9),
  POS(3075, 9)
};

static TAB_NUM t_lambda_1071[] = {
  2, // locals
  0, // parameters
  // text(1) == '`'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '`'
  var_std__equal, 2, LOCAL(1), chr_96, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_1072, TAIL_CALL,
  POS(3077, 7),
  POS(3077, 7),
  POS(3076, 7)
};

static TAB_NUM t_lambda_1072[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_backquoted_without_prefix
  func_parse_backquoted_without_prefix, 0, TAIL_CALL,
  POS(3079, 9),
  POS(3080, 9)
};

static TAB_NUM t_lambda_1073[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_1074, TAIL_CALL,
  POS(3081, 7)
};

static TAB_NUM t_lambda_1074[] = {
  0, // locals
  0, // parameters
  // !expected "an expression"
  LET, 1, str_an_expression, 1, var_expected,
  // !at text
  LET, 1, var_text, 1, var_at,
  // parse_numeric_literal
  func_parse_numeric_literal, 0, TAIL_CALL,
  POS(3084, 9),
  POS(3085, 9),
  POS(3086, 9)
};

static TAB_NUM t_func_parse_parenthesed_expression_without_prefix[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_3089_1_position,
  // parse_inline_expression !text $inline_expression
  func_parse_inline_expression, 0, 2, var_text, var_3090_31_inline_expression,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_50_text_is_defined, lambda_1079, TAIL_CALL,
  POS(3089, 3),
  POS(3090, 3),
  POS(3092, 10),
  POS(3091, 3)
};

static TAB_NUM t_lambda_50_text_is_defined[] = {
  2, // locals
  0, // parameters
  // text(1) == ')':
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == ')':
  var_std__equal, 2, LOCAL(1), chr_41, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_1075, lambda_1078, TAIL_CALL,
  POS(3094, 9),
  POS(3094, 9),
  POS(3093, 7)
};

static TAB_NUM t_lambda_1075[] = {
  1, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_inline_calls !text $inline_calls
  func_parse_inline_calls, 0, 2, var_text, var_3096_26_inline_calls,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1076, lambda_1077, TAIL_CALL,
  POS(3095, 11),
  POS(3096, 11),
  POS(3098, 18),
  POS(3097, 11)
};

static TAB_NUM t_lambda_1076[] = {
  1, // locals
  0, // parameters
  // funky_types::parenthesed_expression
  LET, -4, var_funky_types__parenthesed_expression, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_3089_1_position, var_funky__expression_of, var_3090_31_inline_expression, var_funky__calls_of, var_3096_26_inline_calls, LOCAL(1),
  // 
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(3101, 15),
  POS(3099, 15)
};

static TAB_NUM t_lambda_1077[] = {
  0, // locals
  0, // parameters
  //  undefined inline_calls
  LET, 2, var_undefined, var_3096_26_inline_calls, TAIL_CALL,
  POS(3106, 15)
};

static TAB_NUM t_lambda_1078[] = {
  0, // locals
  0, // parameters
  // syntax_error "')'"
  func_syntax_error, 1, string_6, TAIL_CALL,
  POS(3108, 11)
};

static TAB_NUM t_lambda_1079[] = {
  0, // locals
  0, // parameters
  //  undefined inline_expression
  LET, 2, var_undefined, var_3090_31_inline_expression, TAIL_CALL,
  POS(3109, 7)
};

static TAB_NUM t_func_parse_inline_expression[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 3, lambda_1080, lambda_1082, lambda_1085, TAIL_CALL,
  POS(3112, 3)
};

static TAB_NUM t_lambda_1080[] = {
  2, // locals
  0, // parameters
  // text(1) == ':'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == ':'
  var_std__equal, 2, LOCAL(1), chr_58, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_1081, TAIL_CALL,
  POS(3114, 7),
  POS(3114, 7),
  POS(3113, 7)
};

static TAB_NUM t_lambda_1081[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_inline_body_without_prefix
  func_parse_inline_body_without_prefix, 0, TAIL_CALL,
  POS(3116, 9),
  POS(3117, 9)
};

static TAB_NUM t_lambda_1082[] = {
  3, // locals
  0, // parameters
  // text(1) == '-'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '-'
  var_std__equal, 2, LOCAL(1), chr_45, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_1083, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_1084, TAIL_CALL,
  POS(3120, 9),
  POS(3120, 9),
  POS(3119, 9),
  POS(3118, 7)
};

static TAB_NUM t_lambda_1083[] = {
  2, // locals
  0, // parameters
  // text(2) == '>'
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '>'
  var_std__equal, 2, LOCAL(1), chr_62, 1, LOCAL(2),
  // text(2) == '>'
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(3121, 9),
  POS(3121, 9),
  POS(3121, 9)
};

static TAB_NUM t_lambda_1084[] = {
  0, // locals
  0, // parameters
  // range &text 3 -1
  var_range, 3, var_text, num_3, minus_num_1, 1, var_text,
  // parse_inline_return_without_prefix
  func_parse_inline_return_without_prefix, 0, TAIL_CALL,
  POS(3123, 9),
  POS(3124, 9)
};

static TAB_NUM t_lambda_1085[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_1086, TAIL_CALL,
  POS(3125, 7)
};

static TAB_NUM t_lambda_1086[] = {
  0, // locals
  0, // parameters
  // !expected "inline expression"
  LET, 1, str_inline_expressio, 1, var_expected,
  // !at text
  LET, 1, var_text, 1, var_at,
  // parse_expression
  func_parse_expression, 0, TAIL_CALL,
  POS(3128, 9),
  POS(3129, 9),
  POS(3130, 9)
};

static TAB_NUM t_func_parse_backquoted_without_prefix[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_3133_1_position,
  // parse_an_expression !text $an_expression
  func_parse_an_expression, 0, 2, var_text, var_3134_27_an_expression,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1087, lambda_1088, TAIL_CALL,
  POS(3133, 3),
  POS(3134, 3),
  POS(3136, 10),
  POS(3135, 3)
};

static TAB_NUM t_lambda_1087[] = {
  1, // locals
  0, // parameters
  // funky_types::backquoted
  LET, -3, var_funky_types__backquoted, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_3133_1_position, var_funky__expression_of, var_3134_27_an_expression, LOCAL(1),
  // 
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(3139, 7),
  POS(3137, 7)
};

static TAB_NUM t_lambda_1088[] = {
  0, // locals
  0, // parameters
  //  undefined an_expression
  LET, 2, var_undefined, var_3134_27_an_expression, TAIL_CALL,
  POS(3143, 7)
};

static TAB_NUM t_func_parse_negation_without_prefix[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_3146_1_position,
  // parse_an_expression !text $an_expression
  func_parse_an_expression, 0, 2, var_text, var_3147_27_an_expression,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1089, lambda_1090, TAIL_CALL,
  POS(3146, 3),
  POS(3147, 3),
  POS(3149, 10),
  POS(3148, 3)
};

static TAB_NUM t_lambda_1089[] = {
  1, // locals
  0, // parameters
  // funky_types::negation
  LET, -3, var_funky_types__negation, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_3146_1_position, var_funky__expression_of, var_3147_27_an_expression, LOCAL(1),
  // 
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(3152, 7),
  POS(3150, 7)
};

static TAB_NUM t_lambda_1090[] = {
  0, // locals
  0, // parameters
  //  undefined an_expression
  LET, 2, var_undefined, var_3147_27_an_expression, TAIL_CALL,
  POS(3156, 7)
};

static TAB_NUM t_func_parse_multiline_operator[] = {
  1, // locals
  -1, // parameters
  var_undefined, var_3160_0_derived_node,
  // $position text
  LET, 1, var_text, 1, var_3162_1_position,
  // parse_trailing_remark !text $trailing_remark
  func_parse_trailing_remark, 0, 2, var_text, var_3163_29_trailing_remark,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_51_text_is_defined, lambda_1096, TAIL_CALL,
  POS(3162, 3),
  POS(3163, 3),
  POS(3165, 10),
  POS(3164, 3)
};

static TAB_NUM t_lambda_51_text_is_defined[] = {
  2, // locals
  0, // parameters
  // text == "@nl;" && subgroups.is_defined:
  var_std__equal, 2, var_text, string_2, 1, LOCAL(1),
  // text == "@nl;" && subgroups.is_defined:
  var_std__and, 2, LOCAL(1), lambda_1091, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_1092, lambda_1095, TAIL_CALL,
  POS(3167, 9),
  POS(3167, 9),
  POS(3166, 7)
};

static TAB_NUM t_lambda_1091[] = {
  1, // locals
  0, // parameters
  // is_defined:
  var_is_defined, 1, var_subgroups, 1, LOCAL(1),
  // subgroups.is_defined:
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(3167, 37),
  POS(3167, 27)
};

static TAB_NUM t_lambda_1092[] = {
  1, // locals
  0, // parameters
  // $line_start_arguments parse_groups(funky::parse_line_start_arguments_group)
  func_parse_groups, 1, var_funky__parse_line_start_arguments_group, 1, var_3168_1_line_start_arguments,
  // $error find_first(line_start_arguments is_an_error)
  var_find_first, 2, var_3168_1_line_start_arguments, var_is_an_error, 1, var_3169_1_error,
  // is_an_error
  var_is_an_error, 1, var_3169_1_error, 1, LOCAL(1),
  // if error.is_an_error
  var_if, 3, LOCAL(1), lambda_1093, lambda_1094, TAIL_CALL,
  POS(3168, 11),
  POS(3169, 11),
  POS(3170, 20),
  POS(3170, 11)
};

static TAB_NUM t_lambda_1093[] = {
  0, // locals
  0, // parameters
  //  undefined error
  LET, 2, var_undefined, var_3169_1_error, TAIL_CALL,
  POS(3171, 15)
};

static TAB_NUM t_lambda_1094[] = {
  2, // locals
  0, // parameters
  // default_value(derived_node funky_types::multiline_operator)
  var_default_value, 2, var_3160_0_derived_node, var_funky_types__multiline_operator, 1, LOCAL(1),
  // default_value(derived_node funky_types::multiline_operator)
  LET, -4, LOCAL(1), var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_3162_1_position, var_funky__remark_of, var_3163_29_trailing_remark, var_funky__arguments_of, var_3168_1_line_start_arguments, LOCAL(2),
  // 
  LET, 2, string_1, LOCAL(2), TAIL_CALL,
  POS(3174, 15),
  POS(3174, 15),
  POS(3172, 15)
};

static TAB_NUM t_lambda_1095[] = {
  0, // locals
  0, // parameters
  // syntax_error "valid input characters or line end"
  func_syntax_error, 1, str_valid_input_char, TAIL_CALL,
  POS(3180, 11)
};

static TAB_NUM t_lambda_1096[] = {
  0, // locals
  0, // parameters
  //  undefined trailing_remark
  LET, 2, var_undefined, var_3163_29_trailing_remark, TAIL_CALL,
  POS(3181, 7)
};

static TAB_NUM t_func_parse_multiline_plus_without_prefix[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, LOCAL(1),
  // parse_multiline_operator funky_types::multiline_plus
  func_parse_multiline_operator, 1, var_funky_types__multiline_plus, TAIL_CALL,
  POS(3184, 3),
  POS(3185, 3)
};

static TAB_NUM t_func_parse_multiline_minus_without_prefix[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_3188_1_position,
  // parse_dummy_remark !text $dummy_remark
  func_parse_dummy_remark, 0, 2, var_text, var_3189_26_dummy_remark,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_52_text_is_defined, lambda_1102, TAIL_CALL,
  POS(3188, 3),
  POS(3189, 3),
  POS(3191, 10),
  POS(3190, 3)
};

static TAB_NUM t_lambda_52_text_is_defined[] = {
  2, // locals
  0, // parameters
  // text == "@nl;" && subgroups.is_defined:
  var_std__equal, 2, var_text, string_2, 1, LOCAL(1),
  // text == "@nl;" && subgroups.is_defined:
  var_std__and, 2, LOCAL(1), lambda_1097, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_1098, lambda_1101, TAIL_CALL,
  POS(3193, 9),
  POS(3193, 9),
  POS(3192, 7)
};

static TAB_NUM t_lambda_1097[] = {
  1, // locals
  0, // parameters
  // is_defined:
  var_is_defined, 1, var_subgroups, 1, LOCAL(1),
  // subgroups.is_defined:
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(3193, 37),
  POS(3193, 27)
};

static TAB_NUM t_lambda_1098[] = {
  1, // locals
  0, // parameters
  // $line_start_arguments parse_groups(funky::parse_line_start_arguments_group)
  func_parse_groups, 1, var_funky__parse_line_start_arguments_group, 1, var_3194_1_line_start_arguments,
  // $error find_first(line_start_arguments is_an_error)
  var_find_first, 2, var_3194_1_line_start_arguments, var_is_an_error, 1, var_3195_1_error,
  // is_an_error
  var_is_an_error, 1, var_3195_1_error, 1, LOCAL(1),
  // if error.is_an_error
  var_if, 3, LOCAL(1), lambda_1099, lambda_1100, TAIL_CALL,
  POS(3194, 11),
  POS(3195, 11),
  POS(3196, 20),
  POS(3196, 11)
};

static TAB_NUM t_lambda_1099[] = {
  0, // locals
  0, // parameters
  //  undefined error
  LET, 2, var_undefined, var_3195_1_error, TAIL_CALL,
  POS(3197, 15)
};

static TAB_NUM t_lambda_1100[] = {
  1, // locals
  0, // parameters
  // funky_types::multiline_minus
  LET, -4, var_funky_types__multiline_minus, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_3188_1_position, var_funky__remark_of, var_3189_26_dummy_remark, var_funky__arguments_of, var_3194_1_line_start_arguments, LOCAL(1),
  // 
  LET, 2, string_1, LOCAL(1), TAIL_CALL,
  POS(3200, 15),
  POS(3198, 15)
};

static TAB_NUM t_lambda_1101[] = {
  0, // locals
  0, // parameters
  // syntax_error "valid input characters or line end"
  func_syntax_error, 1, str_valid_input_char, TAIL_CALL,
  POS(3206, 11)
};

static TAB_NUM t_lambda_1102[] = {
  0, // locals
  0, // parameters
  //  undefined dummy_remark
  LET, 2, var_undefined, var_3189_26_dummy_remark, TAIL_CALL,
  POS(3207, 7)
};

static TAB_NUM t_func_parse_multiline_minus_with_remark_without_prefix[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_3210_1_position,
  // parse_remark !text $remark
  func_parse_remark, 0, 2, var_text, var_3211_20_remark,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_53_text_is_defined, lambda_1108, TAIL_CALL,
  POS(3210, 3),
  POS(3211, 3),
  POS(3213, 10),
  POS(3212, 3)
};

static TAB_NUM t_lambda_53_text_is_defined[] = {
  2, // locals
  0, // parameters
  // text == "@nl;" && subgroups.is_defined:
  var_std__equal, 2, var_text, string_2, 1, LOCAL(1),
  // text == "@nl;" && subgroups.is_defined:
  var_std__and, 2, LOCAL(1), lambda_1103, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_1104, lambda_1107, TAIL_CALL,
  POS(3215, 9),
  POS(3215, 9),
  POS(3214, 7)
};

static TAB_NUM t_lambda_1103[] = {
  1, // locals
  0, // parameters
  // is_defined:
  var_is_defined, 1, var_subgroups, 1, LOCAL(1),
  // subgroups.is_defined:
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(3215, 37),
  POS(3215, 27)
};

static TAB_NUM t_lambda_1104[] = {
  1, // locals
  0, // parameters
  // $line_start_arguments parse_groups(funky::parse_line_start_arguments_group)
  func_parse_groups, 1, var_funky__parse_line_start_arguments_group, 1, var_3216_1_line_start_arguments,
  // $error find_first(line_start_arguments is_an_error)
  var_find_first, 2, var_3216_1_line_start_arguments, var_is_an_error, 1, var_3217_1_error,
  // is_an_error
  var_is_an_error, 1, var_3217_1_error, 1, LOCAL(1),
  // if error.is_an_error
  var_if, 3, LOCAL(1), lambda_1105, lambda_1106, TAIL_CALL,
  POS(3216, 11),
  POS(3217, 11),
  POS(3218, 20),
  POS(3218, 11)
};

static TAB_NUM t_lambda_1105[] = {
  0, // locals
  0, // parameters
  //  undefined error
  LET, 2, var_undefined, var_3217_1_error, TAIL_CALL,
  POS(3219, 15)
};

static TAB_NUM t_lambda_1106[] = {
  1, // locals
  0, // parameters
  // funky_types::multiline_minus_with_remark
  LET, -4, var_funky_types__multiline_minus_with_remark, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_3210_1_position, var_funky__remark_of, var_3211_20_remark, var_funky__arguments_of, var_3216_1_line_start_arguments, LOCAL(1),
  // 
  LET, 2, string_1, LOCAL(1), TAIL_CALL,
  POS(3222, 15),
  POS(3220, 15)
};

static TAB_NUM t_lambda_1107[] = {
  0, // locals
  0, // parameters
  // syntax_error "valid input characters or line end"
  func_syntax_error, 1, str_valid_input_char, TAIL_CALL,
  POS(3228, 11)
};

static TAB_NUM t_lambda_1108[] = {
  0, // locals
  0, // parameters
  //  undefined remark
  LET, 2, var_undefined, var_3211_20_remark, TAIL_CALL,
  POS(3229, 7)
};

static TAB_NUM t_func_parse_multiline_times_without_prefix[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, LOCAL(1),
  // parse_multiline_operator funky_types::multiline_times
  func_parse_multiline_operator, 1, var_funky_types__multiline_times, TAIL_CALL,
  POS(3232, 3),
  POS(3233, 3)
};

static TAB_NUM t_func_parse_multiline_over_without_prefix[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_3236_1_position,
  // $line_start_arguments parse_groups(funky::parse_line_start_arguments_group)
  func_parse_groups, 1, var_funky__parse_line_start_arguments_group, 1, var_3237_1_line_start_arguments,
  // $error find_first(line_start_arguments is_an_error)
  var_find_first, 2, var_3237_1_line_start_arguments, var_is_an_error, 1, var_3238_1_error,
  // is_an_error
  var_is_an_error, 1, var_3238_1_error, 1, LOCAL(1),
  // if error.is_an_error
  var_if, 3, LOCAL(1), lambda_1109, lambda_1110, TAIL_CALL,
  POS(3236, 3),
  POS(3237, 3),
  POS(3238, 3),
  POS(3239, 12),
  POS(3239, 3)
};

static TAB_NUM t_lambda_1109[] = {
  0, // locals
  0, // parameters
  //  undefined error
  LET, 2, var_undefined, var_3238_1_error, TAIL_CALL,
  POS(3240, 7)
};

static TAB_NUM t_lambda_1110[] = {
  1, // locals
  0, // parameters
  // funky_types::multiline_over
  LET, -3, var_funky_types__multiline_over, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_3236_1_position, var_funky__arguments_of, var_3237_1_line_start_arguments, LOCAL(1),
  // 
  LET, 2, string_1, LOCAL(1), TAIL_CALL,
  POS(3243, 7),
  POS(3241, 7)
};

static TAB_NUM t_func_parse_multiline_over_with_remark_without_prefix[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_3249_1_position,
  // parse_remark !text $remark
  func_parse_remark, 0, 2, var_text, var_3250_20_remark,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_54_text_is_defined, lambda_1116, TAIL_CALL,
  POS(3249, 3),
  POS(3250, 3),
  POS(3252, 10),
  POS(3251, 3)
};

static TAB_NUM t_lambda_54_text_is_defined[] = {
  2, // locals
  0, // parameters
  // text == "@nl;" && subgroups.is_defined:
  var_std__equal, 2, var_text, string_2, 1, LOCAL(1),
  // text == "@nl;" && subgroups.is_defined:
  var_std__and, 2, LOCAL(1), lambda_1111, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_1112, lambda_1115, TAIL_CALL,
  POS(3254, 9),
  POS(3254, 9),
  POS(3253, 7)
};

static TAB_NUM t_lambda_1111[] = {
  1, // locals
  0, // parameters
  // is_defined:
  var_is_defined, 1, var_subgroups, 1, LOCAL(1),
  // subgroups.is_defined:
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(3254, 37),
  POS(3254, 27)
};

static TAB_NUM t_lambda_1112[] = {
  1, // locals
  0, // parameters
  // $line_start_arguments parse_groups(funky::parse_line_start_arguments_group)
  func_parse_groups, 1, var_funky__parse_line_start_arguments_group, 1, var_3255_1_line_start_arguments,
  // $error find_first(line_start_arguments is_an_error)
  var_find_first, 2, var_3255_1_line_start_arguments, var_is_an_error, 1, var_3256_1_error,
  // is_an_error
  var_is_an_error, 1, var_3256_1_error, 1, LOCAL(1),
  // if error.is_an_error
  var_if, 3, LOCAL(1), lambda_1113, lambda_1114, TAIL_CALL,
  POS(3255, 11),
  POS(3256, 11),
  POS(3257, 20),
  POS(3257, 11)
};

static TAB_NUM t_lambda_1113[] = {
  0, // locals
  0, // parameters
  //  undefined error
  LET, 2, var_undefined, var_3256_1_error, TAIL_CALL,
  POS(3258, 15)
};

static TAB_NUM t_lambda_1114[] = {
  1, // locals
  0, // parameters
  // funky_types::multiline_over_with_remark
  LET, -4, var_funky_types__multiline_over_with_remark, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_3249_1_position, var_funky__remark_of, var_3250_20_remark, var_funky__arguments_of, var_3255_1_line_start_arguments, LOCAL(1),
  // 
  LET, 2, string_1, LOCAL(1), TAIL_CALL,
  POS(3261, 15),
  POS(3259, 15)
};

static TAB_NUM t_lambda_1115[] = {
  0, // locals
  0, // parameters
  // syntax_error "valid input characters or line end"
  func_syntax_error, 1, str_valid_input_char, TAIL_CALL,
  POS(3267, 11)
};

static TAB_NUM t_lambda_1116[] = {
  0, // locals
  0, // parameters
  //  undefined remark
  LET, 2, var_undefined, var_3250_20_remark, TAIL_CALL,
  POS(3268, 7)
};

static TAB_NUM t_func_parse_multiline_shift_left_without_prefix[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, LOCAL(1),
  // parse_multiline_operator funky_types::multiline_shift_left
  func_parse_multiline_operator, 1, var_funky_types__multiline_shift_left, TAIL_CALL,
  POS(3271, 3),
  POS(3272, 3)
};

static TAB_NUM t_func_parse_multiline_shift_right_without_prefix[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, LOCAL(1),
  // parse_multiline_operator funky_types::multiline_shift_right
  func_parse_multiline_operator, 1, var_funky_types__multiline_shift_right, TAIL_CALL,
  POS(3275, 3),
  POS(3276, 3)
};

static TAB_NUM t_func_parse_multiline_equal_without_prefix[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, LOCAL(1),
  // parse_multiline_operator funky_types::multiline_equal
  func_parse_multiline_operator, 1, var_funky_types__multiline_equal, TAIL_CALL,
  POS(3279, 3),
  POS(3280, 3)
};

static TAB_NUM t_func_parse_multiline_not_equal_without_prefix[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, LOCAL(1),
  // parse_multiline_operator funky_types::multiline_not_equal
  func_parse_multiline_operator, 1, var_funky_types__multiline_not_equal, TAIL_CALL,
  POS(3283, 3),
  POS(3284, 3)
};

static TAB_NUM t_func_parse_multiline_less_equal_without_prefix[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, LOCAL(1),
  // parse_multiline_operator funky_types::multiline_less_equal
  func_parse_multiline_operator, 1, var_funky_types__multiline_less_equal, TAIL_CALL,
  POS(3287, 3),
  POS(3288, 3)
};

static TAB_NUM t_func_parse_multiline_less_than_without_prefix[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, LOCAL(1),
  // parse_multiline_operator funky_types::multiline_less_than
  func_parse_multiline_operator, 1, var_funky_types__multiline_less_than, TAIL_CALL,
  POS(3291, 3),
  POS(3292, 3)
};

static TAB_NUM t_func_parse_multiline_greater_equal_without_prefix[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, LOCAL(1),
  // parse_multiline_operator funky_types::multiline_greater_equal
  func_parse_multiline_operator, 1, var_funky_types__multiline_greater_equal, TAIL_CALL,
  POS(3295, 3),
  POS(3296, 3)
};

static TAB_NUM t_func_parse_multiline_greater_than_without_prefix[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, LOCAL(1),
  // parse_multiline_operator funky_types::multiline_greater_than
  func_parse_multiline_operator, 1, var_funky_types__multiline_greater_than, TAIL_CALL,
  POS(3299, 3),
  POS(3300, 3)
};

static TAB_NUM t_func_parse_multiline_and_without_prefix[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, LOCAL(1),
  // parse_multiline_operator funky_types::multiline_and
  func_parse_multiline_operator, 1, var_funky_types__multiline_and, TAIL_CALL,
  POS(3303, 3),
  POS(3304, 3)
};

static TAB_NUM t_func_parse_multiline_or_without_prefix[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, LOCAL(1),
  // parse_multiline_operator funky_types::multiline_or
  func_parse_multiline_operator, 1, var_funky_types__multiline_or, TAIL_CALL,
  POS(3307, 3),
  POS(3308, 3)
};

static TAB_NUM t_func_parse_multiline_bit_and_without_prefix[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_3311_1_position,
  // parse_dummy_remark !text $dummy_remark
  func_parse_dummy_remark, 0, 2, var_text, var_3312_26_dummy_remark,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_55_text_is_defined, lambda_1122, TAIL_CALL,
  POS(3311, 3),
  POS(3312, 3),
  POS(3314, 10),
  POS(3313, 3)
};

static TAB_NUM t_lambda_55_text_is_defined[] = {
  2, // locals
  0, // parameters
  // text == "@nl;" && subgroups.is_defined:
  var_std__equal, 2, var_text, string_2, 1, LOCAL(1),
  // text == "@nl;" && subgroups.is_defined:
  var_std__and, 2, LOCAL(1), lambda_1117, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_1118, lambda_1121, TAIL_CALL,
  POS(3316, 9),
  POS(3316, 9),
  POS(3315, 7)
};

static TAB_NUM t_lambda_1117[] = {
  1, // locals
  0, // parameters
  // is_defined:
  var_is_defined, 1, var_subgroups, 1, LOCAL(1),
  // subgroups.is_defined:
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(3316, 37),
  POS(3316, 27)
};

static TAB_NUM t_lambda_1118[] = {
  1, // locals
  0, // parameters
  // $line_start_arguments parse_groups(funky::parse_line_start_arguments_group)
  func_parse_groups, 1, var_funky__parse_line_start_arguments_group, 1, var_3317_1_line_start_arguments,
  // $error find_first(line_start_arguments is_an_error)
  var_find_first, 2, var_3317_1_line_start_arguments, var_is_an_error, 1, var_3318_1_error,
  // is_an_error
  var_is_an_error, 1, var_3318_1_error, 1, LOCAL(1),
  // if error.is_an_error
  var_if, 3, LOCAL(1), lambda_1119, lambda_1120, TAIL_CALL,
  POS(3317, 11),
  POS(3318, 11),
  POS(3319, 20),
  POS(3319, 11)
};

static TAB_NUM t_lambda_1119[] = {
  0, // locals
  0, // parameters
  //  undefined error
  LET, 2, var_undefined, var_3318_1_error, TAIL_CALL,
  POS(3320, 15)
};

static TAB_NUM t_lambda_1120[] = {
  1, // locals
  0, // parameters
  // funky_types::multiline_bit_and
  LET, -4, var_funky_types__multiline_bit_and, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_3311_1_position, var_funky__remark_of, var_3312_26_dummy_remark, var_funky__arguments_of, var_3317_1_line_start_arguments, LOCAL(1),
  // 
  LET, 2, string_1, LOCAL(1), TAIL_CALL,
  POS(3323, 15),
  POS(3321, 15)
};

static TAB_NUM t_lambda_1121[] = {
  0, // locals
  0, // parameters
  // syntax_error "valid input characters or line end"
  func_syntax_error, 1, str_valid_input_char, TAIL_CALL,
  POS(3329, 11)
};

static TAB_NUM t_lambda_1122[] = {
  0, // locals
  0, // parameters
  //  undefined dummy_remark
  LET, 2, var_undefined, var_3312_26_dummy_remark, TAIL_CALL,
  POS(3330, 7)
};

static TAB_NUM t_func_parse_multiline_bit_and_with_remark_without_prefix[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_3333_1_position,
  // parse_remark !text $remark
  func_parse_remark, 0, 2, var_text, var_3334_20_remark,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_56_text_is_defined, lambda_1128, TAIL_CALL,
  POS(3333, 3),
  POS(3334, 3),
  POS(3336, 10),
  POS(3335, 3)
};

static TAB_NUM t_lambda_56_text_is_defined[] = {
  2, // locals
  0, // parameters
  // text == "@nl;" && subgroups.is_defined:
  var_std__equal, 2, var_text, string_2, 1, LOCAL(1),
  // text == "@nl;" && subgroups.is_defined:
  var_std__and, 2, LOCAL(1), lambda_1123, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_1124, lambda_1127, TAIL_CALL,
  POS(3338, 9),
  POS(3338, 9),
  POS(3337, 7)
};

static TAB_NUM t_lambda_1123[] = {
  1, // locals
  0, // parameters
  // is_defined:
  var_is_defined, 1, var_subgroups, 1, LOCAL(1),
  // subgroups.is_defined:
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(3338, 37),
  POS(3338, 27)
};

static TAB_NUM t_lambda_1124[] = {
  1, // locals
  0, // parameters
  // $line_start_arguments parse_groups(funky::parse_line_start_arguments_group)
  func_parse_groups, 1, var_funky__parse_line_start_arguments_group, 1, var_3339_1_line_start_arguments,
  // $error find_first(line_start_arguments is_an_error)
  var_find_first, 2, var_3339_1_line_start_arguments, var_is_an_error, 1, var_3340_1_error,
  // is_an_error
  var_is_an_error, 1, var_3340_1_error, 1, LOCAL(1),
  // if error.is_an_error
  var_if, 3, LOCAL(1), lambda_1125, lambda_1126, TAIL_CALL,
  POS(3339, 11),
  POS(3340, 11),
  POS(3341, 20),
  POS(3341, 11)
};

static TAB_NUM t_lambda_1125[] = {
  0, // locals
  0, // parameters
  //  undefined error
  LET, 2, var_undefined, var_3340_1_error, TAIL_CALL,
  POS(3342, 15)
};

static TAB_NUM t_lambda_1126[] = {
  1, // locals
  0, // parameters
  // funky_types::multiline_bit_and_with_remark
  LET, -4, var_funky_types__multiline_bit_and_with_remark, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_3333_1_position, var_funky__remark_of, var_3334_20_remark, var_funky__arguments_of, var_3339_1_line_start_arguments, LOCAL(1),
  // 
  LET, 2, string_1, LOCAL(1), TAIL_CALL,
  POS(3345, 15),
  POS(3343, 15)
};

static TAB_NUM t_lambda_1127[] = {
  0, // locals
  0, // parameters
  // syntax_error "valid input characters or line end"
  func_syntax_error, 1, str_valid_input_char, TAIL_CALL,
  POS(3351, 11)
};

static TAB_NUM t_lambda_1128[] = {
  0, // locals
  0, // parameters
  //  undefined remark
  LET, 2, var_undefined, var_3334_20_remark, TAIL_CALL,
  POS(3352, 7)
};

static TAB_NUM t_func_parse_multiline_bit_or_without_prefix[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, LOCAL(1),
  // parse_multiline_operator funky_types::multiline_bit_or
  func_parse_multiline_operator, 1, var_funky_types__multiline_bit_or, TAIL_CALL,
  POS(3355, 3),
  POS(3356, 3)
};

static TAB_NUM t_func_parse_multiline_bit_xor_without_prefix[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, LOCAL(1),
  // parse_multiline_operator funky_types::multiline_bit_xor
  func_parse_multiline_operator, 1, var_funky_types__multiline_bit_xor, TAIL_CALL,
  POS(3359, 3),
  POS(3360, 3)
};

static TAB_NUM t_func_parse_multiline_assign_without_prefix[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, LOCAL(1),
  // parse_multiline_operator funky_types::multiline_assign
  func_parse_multiline_operator, 1, var_funky_types__multiline_assign, TAIL_CALL,
  POS(3363, 3),
  POS(3364, 3)
};

static TAB_NUM t_func_parse_inline_arguments[] = {
  2, // locals
  0, // parameters
  // cond $rest $expr
  var_cond, 5, lambda_1129, lambda_1131, lambda_1133, lambda_1136, lambda_1138, 2, LOCAL(2), var_3367_12_expr,
  // cond
  var_cond, 3, lambda_1140, lambda_1142, lambda_1144, 1, LOCAL(1),
  // ->
  LET, 2, LOCAL(2), LOCAL(1), TAIL_CALL,
  POS(3367, 3),
  POS(3398, 5),
  POS(3396, 3)
};

static TAB_NUM t_lambda_1129[] = {
  2, // locals
  0, // parameters
  // text(1) == '.'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '.'
  var_std__equal, 2, LOCAL(1), chr_46, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_1130, TAIL_CALL,
  POS(3369, 7),
  POS(3369, 7),
  POS(3368, 7)
};

static TAB_NUM t_lambda_1130[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_inline_attribute_value_pair_without_prefix
  func_parse_inline_attribute_value_pair_without_prefix, 0, TAIL_CALL,
  POS(3371, 9),
  POS(3372, 9)
};

static TAB_NUM t_lambda_1131[] = {
  2, // locals
  0, // parameters
  // text(1) == '/'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '/'
  var_std__equal, 2, LOCAL(1), chr_47, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_1132, TAIL_CALL,
  POS(3374, 7),
  POS(3374, 7),
  POS(3373, 7)
};

static TAB_NUM t_lambda_1132[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_inline_method_value_pair_without_prefix
  func_parse_inline_method_value_pair_without_prefix, 0, TAIL_CALL,
  POS(3376, 9),
  POS(3377, 9)
};

static TAB_NUM t_lambda_1133[] = {
  3, // locals
  0, // parameters
  // text(1) == '-'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '-'
  var_std__equal, 2, LOCAL(1), chr_45, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_1134, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_1135, TAIL_CALL,
  POS(3380, 9),
  POS(3380, 9),
  POS(3379, 9),
  POS(3378, 7)
};

static TAB_NUM t_lambda_1134[] = {
  2, // locals
  0, // parameters
  // text(2) == '>'
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '>'
  var_std__equal, 2, LOCAL(1), chr_62, 1, LOCAL(2),
  // text(2) == '>'
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(3381, 9),
  POS(3381, 9),
  POS(3381, 9)
};

static TAB_NUM t_lambda_1135[] = {
  0, // locals
  0, // parameters
  // range &text 3 -1
  var_range, 3, var_text, num_3, minus_num_1, 1, var_text,
  // parse_inline_return_without_prefix
  func_parse_inline_return_without_prefix, 0, TAIL_CALL,
  POS(3383, 9),
  POS(3384, 9)
};

static TAB_NUM t_lambda_1136[] = {
  2, // locals
  0, // parameters
  // text(1) == ':'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == ':'
  var_std__equal, 2, LOCAL(1), chr_58, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_1137, TAIL_CALL,
  POS(3386, 7),
  POS(3386, 7),
  POS(3385, 7)
};

static TAB_NUM t_lambda_1137[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_inline_body_without_prefix
  func_parse_inline_body_without_prefix, 0, TAIL_CALL,
  POS(3388, 9),
  POS(3389, 9)
};

static TAB_NUM t_lambda_1138[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_1139, TAIL_CALL,
  POS(3390, 7)
};

static TAB_NUM t_lambda_1139[] = {
  0, // locals
  0, // parameters
  // !expected "inline arguments"
  LET, 1, str_inline_arguments, 1, var_expected,
  // !at text
  LET, 1, var_text, 1, var_at,
  // parse_expression_and_inline_arguments
  func_parse_expression_and_inline_arguments, 0, TAIL_CALL,
  POS(3393, 9),
  POS(3394, 9),
  POS(3395, 9)
};

static TAB_NUM t_lambda_1140[] = {
  1, // locals
  0, // parameters
  // is_undefined -> empty_list
  var_is_undefined, 1, var_3367_12_expr, 1, LOCAL(1),
  //  expr.is_undefined -> empty_list
  LET, 2, LOCAL(1), lambda_1141, TAIL_CALL,
  POS(3399, 15),
  POS(3399, 9)
};

static TAB_NUM t_lambda_1141[] = {
  0, // locals
  0, // parameters
  //  empty_list
  LET, 1, var_empty_list, TAIL_CALL,
  POS(3399, 30)
};

static TAB_NUM t_lambda_1142[] = {
  1, // locals
  0, // parameters
  // is_a_list -> expr
  var_is_a_list, 1, var_3367_12_expr, 1, LOCAL(1),
  //  expr.is_a_list -> expr
  LET, 2, LOCAL(1), lambda_1143, TAIL_CALL,
  POS(3400, 15),
  POS(3400, 9)
};

static TAB_NUM t_lambda_1143[] = {
  0, // locals
  0, // parameters
  //  expr
  LET, 1, var_3367_12_expr, TAIL_CALL,
  POS(3400, 27)
};

static TAB_NUM t_lambda_1144[] = {
  0, // locals
  0, // parameters
  //  true -> list(expr)
  LET, 2, var_true, lambda_1145, TAIL_CALL,
  POS(3401, 9)
};

static TAB_NUM t_lambda_1145[] = {
  1, // locals
  0, // parameters
  // list(expr)
  var_list, 1, var_3367_12_expr, 1, LOCAL(1),
  //  list(expr)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(3401, 18),
  POS(3401, 17)
};

static TAB_NUM t_func_parse_inline_attribute_value_pair_without_prefix[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_3404_1_position,
  // !str text
  LET, 1, var_text, 1, var_str,
  // parse_identifier !text $identifier
  func_parse_identifier, 0, 2, var_text, var_3406_24_identifier,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_57_text_is_defined, lambda_1150, TAIL_CALL,
  POS(3404, 3),
  POS(3405, 3),
  POS(3406, 3),
  POS(3408, 10),
  POS(3407, 3)
};

static TAB_NUM t_lambda_57_text_is_defined[] = {
  2, // locals
  0, // parameters
  // text(1) == ' ':
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == ' ':
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_1146, lambda_1149, TAIL_CALL,
  POS(3410, 9),
  POS(3410, 9),
  POS(3409, 7)
};

static TAB_NUM t_lambda_1146[] = {
  1, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_expression !text $expression
  func_parse_expression, 0, 2, var_text, var_3412_24_expression,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1147, lambda_1148, TAIL_CALL,
  POS(3411, 11),
  POS(3412, 11),
  POS(3414, 18),
  POS(3413, 11)
};

static TAB_NUM t_lambda_1147[] = {
  1, // locals
  0, // parameters
  // funky_types::inline_attribute_value_pair
  LET, -4, var_funky_types__inline_attribute_value_pair, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_3404_1_position, var_funky__identifier_of, var_3406_24_identifier, var_funky__expression_of, var_3412_24_expression, LOCAL(1),
  // 
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(3417, 15),
  POS(3415, 15)
};

static TAB_NUM t_lambda_1148[] = {
  0, // locals
  0, // parameters
  //  undefined expression
  LET, 2, var_undefined, var_3412_24_expression, TAIL_CALL,
  POS(3422, 15)
};

static TAB_NUM t_lambda_1149[] = {
  0, // locals
  0, // parameters
  // syntax_error "space character"
  func_syntax_error, 1, str_space_character, TAIL_CALL,
  POS(3424, 11)
};

static TAB_NUM t_lambda_1150[] = {
  0, // locals
  0, // parameters
  //  undefined identifier
  LET, 2, var_undefined, var_3406_24_identifier, TAIL_CALL,
  POS(3425, 7)
};

static TAB_NUM t_func_parse_inline_method_value_pair_without_prefix[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_3428_1_position,
  // !str text
  LET, 1, var_text, 1, var_str,
  // parse_identifier !text $identifier
  func_parse_identifier, 0, 2, var_text, var_3430_24_identifier,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_58_text_is_defined, lambda_1155, TAIL_CALL,
  POS(3428, 3),
  POS(3429, 3),
  POS(3430, 3),
  POS(3432, 10),
  POS(3431, 3)
};

static TAB_NUM t_lambda_58_text_is_defined[] = {
  2, // locals
  0, // parameters
  // text(1) == ' ':
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == ' ':
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_1151, lambda_1154, TAIL_CALL,
  POS(3434, 9),
  POS(3434, 9),
  POS(3433, 7)
};

static TAB_NUM t_lambda_1151[] = {
  1, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_expression !text $expression
  func_parse_expression, 0, 2, var_text, var_3436_24_expression,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1152, lambda_1153, TAIL_CALL,
  POS(3435, 11),
  POS(3436, 11),
  POS(3438, 18),
  POS(3437, 11)
};

static TAB_NUM t_lambda_1152[] = {
  1, // locals
  0, // parameters
  // funky_types::inline_method_value_pair
  LET, -4, var_funky_types__inline_method_value_pair, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_3428_1_position, var_funky__identifier_of, var_3430_24_identifier, var_funky__expression_of, var_3436_24_expression, LOCAL(1),
  // 
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(3441, 15),
  POS(3439, 15)
};

static TAB_NUM t_lambda_1153[] = {
  0, // locals
  0, // parameters
  //  undefined expression
  LET, 2, var_undefined, var_3436_24_expression, TAIL_CALL,
  POS(3446, 15)
};

static TAB_NUM t_lambda_1154[] = {
  0, // locals
  0, // parameters
  // syntax_error "space character"
  func_syntax_error, 1, str_space_character, TAIL_CALL,
  POS(3448, 11)
};

static TAB_NUM t_lambda_1155[] = {
  0, // locals
  0, // parameters
  //  undefined identifier
  LET, 2, var_undefined, var_3430_24_identifier, TAIL_CALL,
  POS(3449, 7)
};

static TAB_NUM t_func_parse_expression_and_inline_arguments[] = {
  2, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, LOCAL(2),
  // parse_expression !text $expression
  func_parse_expression, 0, 2, var_text, var_3453_24_expression,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_59_text_is_defined, lambda_1160, TAIL_CALL,
  POS(3452, 3),
  POS(3453, 3),
  POS(3455, 10),
  POS(3454, 3)
};

static TAB_NUM t_lambda_59_text_is_defined[] = {
  1, // locals
  0, // parameters
  // parse_some_inline_arguments !text $some_inline_arguments
  func_parse_some_inline_arguments, 0, 2, var_text, var_3456_35_some_inline_arguments,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1156, lambda_1159, TAIL_CALL,
  POS(3456, 7),
  POS(3458, 14),
  POS(3457, 7)
};

static TAB_NUM t_lambda_1156[] = {
  1, // locals
  0, // parameters
  // is_defined
  var_is_defined, 1, var_3456_35_some_inline_arguments, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1157, lambda_1158, TAIL_CALL,
  POS(3461, 35),
  POS(3460, 11)
};

static TAB_NUM t_lambda_1157[] = {
  3, // locals
  0, // parameters
  // to_list
  func_to_list, 1, var_3453_24_expression, 1, LOCAL(1),
  // to_list
  func_to_list, 1, var_3456_35_some_inline_arguments, 1, LOCAL(2),
  // append
  var_append, 2, LOCAL(1), LOCAL(2), 1, LOCAL(3),
  // 
  LET, 2, var_text, LOCAL(3), TAIL_CALL,
  POS(3465, 28),
  POS(3466, 39),
  POS(3464, 15),
  POS(3462, 15)
};

static TAB_NUM t_lambda_1158[] = {
  1, // locals
  0, // parameters
  // to_list
  func_to_list, 1, var_3453_24_expression, 1, LOCAL(1),
  //  text expression.to_list
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(3467, 32),
  POS(3467, 15)
};

static TAB_NUM t_lambda_1159[] = {
  0, // locals
  0, // parameters
  //  undefined some_inline_arguments
  LET, 2, var_undefined, var_3456_35_some_inline_arguments, TAIL_CALL,
  POS(3468, 11)
};

static TAB_NUM t_lambda_1160[] = {
  0, // locals
  0, // parameters
  //  undefined expression
  LET, 2, var_undefined, var_3453_24_expression, TAIL_CALL,
  POS(3469, 7)
};

static TAB_NUM t_func_parse_spaced_inline_arguments[] = {
  3, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, LOCAL(3),
  // text(1) == ' ':
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == ' ':
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_1161, lambda_1164, TAIL_CALL,
  POS(3472, 3),
  POS(3474, 5),
  POS(3474, 5),
  POS(3473, 3)
};

static TAB_NUM t_lambda_1161[] = {
  1, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_inline_arguments !text $inline_arguments
  func_parse_inline_arguments, 0, 2, var_text, var_3476_30_inline_arguments,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1162, lambda_1163, TAIL_CALL,
  POS(3475, 7),
  POS(3476, 7),
  POS(3478, 14),
  POS(3477, 7)
};

static TAB_NUM t_lambda_1162[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_text, var_3476_30_inline_arguments, TAIL_CALL,
  POS(3479, 11)
};

static TAB_NUM t_lambda_1163[] = {
  0, // locals
  0, // parameters
  //  undefined inline_arguments
  LET, 2, var_undefined, var_3476_30_inline_arguments, TAIL_CALL,
  POS(3482, 11)
};

static TAB_NUM t_lambda_1164[] = {
  0, // locals
  0, // parameters
  // syntax_error "space character"
  func_syntax_error, 1, str_space_character, TAIL_CALL,
  POS(3484, 7)
};

static TAB_NUM t_func_parse_spaced_inline_arguments_without_prefix[] = {
  2, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, LOCAL(2),
  // parse_inline_arguments !text $inline_arguments
  func_parse_inline_arguments, 0, 2, var_text, var_3488_30_inline_arguments,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1165, lambda_1166, TAIL_CALL,
  POS(3487, 3),
  POS(3488, 3),
  POS(3490, 10),
  POS(3489, 3)
};

static TAB_NUM t_lambda_1165[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_text, var_3488_30_inline_arguments, TAIL_CALL,
  POS(3491, 7)
};

static TAB_NUM t_lambda_1166[] = {
  0, // locals
  0, // parameters
  //  undefined inline_arguments
  LET, 2, var_undefined, var_3488_30_inline_arguments, TAIL_CALL,
  POS(3494, 7)
};

static TAB_NUM t_func_parse_numeric_literal[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_3497_1_position,
  // !str text
  LET, 1, var_text, 1, var_str,
  // parse_digits !text $digits
  func_parse_digits, 0, 2, var_text, var_3499_20_digits,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1167, lambda_1168, TAIL_CALL,
  POS(3497, 3),
  POS(3498, 3),
  POS(3499, 3),
  POS(3501, 10),
  POS(3500, 3)
};

static TAB_NUM t_lambda_1167[] = {
  1, // locals
  0, // parameters
  // funky_types::numeric_literal
  LET, -3, var_funky_types__numeric_literal, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_3497_1_position, var_funky__digits_of, var_3499_20_digits, LOCAL(1),
  // 
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(3504, 7),
  POS(3502, 7)
};

static TAB_NUM t_lambda_1168[] = {
  0, // locals
  0, // parameters
  //  undefined digits
  LET, 2, var_undefined, var_3499_20_digits, TAIL_CALL,
  POS(3508, 7)
};

static TAB_NUM t_func_parse_digits[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 3, lambda_1169, lambda_1172, lambda_1174, TAIL_CALL,
  POS(3511, 3)
};

static TAB_NUM t_lambda_1169[] = {
  4, // locals
  0, // parameters
  // text(1) >= '1' && text(1) <= '9')
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) >= '1' && text(1) <= '9')
  var_std__less, 2, LOCAL(1), chr_49, 1, LOCAL(2),
  // text(1) >= '1' && text(1) <= '9')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) >= '1' && text(1) <= '9')
  var_std__and, 2, LOCAL(3), lambda_1170, 1, LOCAL(4),
  // 
  LET, 2, LOCAL(4), lambda_1171, TAIL_CALL,
  POS(3513, 8),
  POS(3513, 8),
  POS(3513, 8),
  POS(3513, 8),
  POS(3512, 7)
};

static TAB_NUM t_lambda_1170[] = {
  3, // locals
  0, // parameters
  // text(1) <= '9')
  var_text, 1, num_1, 1, LOCAL(1),
  // 9')
  var_std__less, 2, chr_57, LOCAL(1), 1, LOCAL(2),
  // 9')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) <= '9')
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(3513, 26),
  POS(3513, 38),
  POS(3513, 38),
  POS(3513, 26)
};

static TAB_NUM t_lambda_1171[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_more_decimal_digits
  func_parse_more_decimal_digits, 0, TAIL_CALL,
  POS(3515, 9),
  POS(3516, 9)
};

static TAB_NUM t_lambda_1172[] = {
  2, // locals
  0, // parameters
  // text(1) == '0'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '0'
  var_std__equal, 2, LOCAL(1), chr_48, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_1173, TAIL_CALL,
  POS(3518, 7),
  POS(3518, 7),
  POS(3517, 7)
};

static TAB_NUM t_lambda_1173[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_maybe_non_decimal_numeric_literal
  func_parse_maybe_non_decimal_numeric_literal, 0, TAIL_CALL,
  POS(3520, 9),
  POS(3521, 9)
};

static TAB_NUM t_lambda_1174[] = {
  0, // locals
  0, // parameters
  //  true:
  LET, 2, var_true, lambda_1175, TAIL_CALL,
  POS(3522, 7)
};

static TAB_NUM t_lambda_1175[] = {
  0, // locals
  0, // parameters
  // syntax_error "digits"
  func_syntax_error, 1, str_digits, TAIL_CALL,
  POS(3523, 7)
};

static TAB_NUM t_func_parse_maybe_non_decimal_numeric_literal[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 7, lambda_1176, lambda_1179, lambda_1183, lambda_1187, lambda_1189, lambda_1191, lambda_1193, TAIL_CALL,
  POS(3526, 3)
};

static TAB_NUM t_lambda_1176[] = {
  4, // locals
  0, // parameters
  // text(1) >= '0' && text(1) <= '9')
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) >= '0' && text(1) <= '9')
  var_std__less, 2, LOCAL(1), chr_48, 1, LOCAL(2),
  // text(1) >= '0' && text(1) <= '9')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) >= '0' && text(1) <= '9')
  var_std__and, 2, LOCAL(3), lambda_1177, 1, LOCAL(4),
  // 
  LET, 2, LOCAL(4), lambda_1178, TAIL_CALL,
  POS(3528, 8),
  POS(3528, 8),
  POS(3528, 8),
  POS(3528, 8),
  POS(3527, 7)
};

static TAB_NUM t_lambda_1177[] = {
  3, // locals
  0, // parameters
  // text(1) <= '9')
  var_text, 1, num_1, 1, LOCAL(1),
  // 9')
  var_std__less, 2, chr_57, LOCAL(1), 1, LOCAL(2),
  // 9')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) <= '9')
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(3528, 26),
  POS(3528, 38),
  POS(3528, 38),
  POS(3528, 26)
};

static TAB_NUM t_lambda_1178[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_more_decimal_digits
  func_parse_more_decimal_digits, 0, TAIL_CALL,
  POS(3530, 9),
  POS(3531, 9)
};

static TAB_NUM t_lambda_1179[] = {
  3, // locals
  0, // parameters
  // text(1) == '''
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '''
  var_std__equal, 2, LOCAL(1), chr_39, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_1180, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_1182, TAIL_CALL,
  POS(3534, 9),
  POS(3534, 9),
  POS(3533, 9),
  POS(3532, 7)
};

static TAB_NUM t_lambda_1180[] = {
  4, // locals
  0, // parameters
  // text(2) >= '0' && text(2) <= '9')
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) >= '0' && text(2) <= '9')
  var_std__less, 2, LOCAL(1), chr_48, 1, LOCAL(2),
  // text(2) >= '0' && text(2) <= '9')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(2) >= '0' && text(2) <= '9')
  var_std__and, 2, LOCAL(3), lambda_1181, 1, LOCAL(4),
  // text(2) >= '0' && text(2) <= '9')
  LET, 1, LOCAL(4), TAIL_CALL,
  POS(3535, 10),
  POS(3535, 10),
  POS(3535, 10),
  POS(3535, 10),
  POS(3535, 10)
};

static TAB_NUM t_lambda_1181[] = {
  3, // locals
  0, // parameters
  // text(2) <= '9')
  var_text, 1, num_2, 1, LOCAL(1),
  // 9')
  var_std__less, 2, chr_57, LOCAL(1), 1, LOCAL(2),
  // 9')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(2) <= '9')
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(3535, 28),
  POS(3535, 40),
  POS(3535, 40),
  POS(3535, 28)
};

static TAB_NUM t_lambda_1182[] = {
  0, // locals
  0, // parameters
  // range &text 3 -1
  var_range, 3, var_text, num_3, minus_num_1, 1, var_text,
  // parse_more_decimal_digits
  func_parse_more_decimal_digits, 0, TAIL_CALL,
  POS(3537, 9),
  POS(3538, 9)
};

static TAB_NUM t_lambda_1183[] = {
  3, // locals
  0, // parameters
  // text(1) == '.'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '.'
  var_std__equal, 2, LOCAL(1), chr_46, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_1184, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_1186, TAIL_CALL,
  POS(3541, 9),
  POS(3541, 9),
  POS(3540, 9),
  POS(3539, 7)
};

static TAB_NUM t_lambda_1184[] = {
  4, // locals
  0, // parameters
  // text(2) >= '0' && text(2) <= '9')
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) >= '0' && text(2) <= '9')
  var_std__less, 2, LOCAL(1), chr_48, 1, LOCAL(2),
  // text(2) >= '0' && text(2) <= '9')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(2) >= '0' && text(2) <= '9')
  var_std__and, 2, LOCAL(3), lambda_1185, 1, LOCAL(4),
  // text(2) >= '0' && text(2) <= '9')
  LET, 1, LOCAL(4), TAIL_CALL,
  POS(3542, 10),
  POS(3542, 10),
  POS(3542, 10),
  POS(3542, 10),
  POS(3542, 10)
};

static TAB_NUM t_lambda_1185[] = {
  3, // locals
  0, // parameters
  // text(2) <= '9')
  var_text, 1, num_2, 1, LOCAL(1),
  // 9')
  var_std__less, 2, chr_57, LOCAL(1), 1, LOCAL(2),
  // 9')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(2) <= '9')
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(3542, 28),
  POS(3542, 40),
  POS(3542, 40),
  POS(3542, 28)
};

static TAB_NUM t_lambda_1186[] = {
  0, // locals
  0, // parameters
  // range &text 3 -1
  var_range, 3, var_text, num_3, minus_num_1, 1, var_text,
  // parse_more_fraction_digits
  func_parse_more_fraction_digits, 0, TAIL_CALL,
  POS(3544, 9),
  POS(3545, 9)
};

static TAB_NUM t_lambda_1187[] = {
  2, // locals
  0, // parameters
  // text(1) == 'b'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == 'b'
  var_std__equal, 2, LOCAL(1), chr_98, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_1188, TAIL_CALL,
  POS(3547, 7),
  POS(3547, 7),
  POS(3546, 7)
};

static TAB_NUM t_lambda_1188[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_binary_digits
  func_parse_binary_digits, 0, TAIL_CALL,
  POS(3549, 9),
  POS(3550, 9)
};

static TAB_NUM t_lambda_1189[] = {
  2, // locals
  0, // parameters
  // text(1) == 'o'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == 'o'
  var_std__equal, 2, LOCAL(1), chr_111, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_1190, TAIL_CALL,
  POS(3552, 7),
  POS(3552, 7),
  POS(3551, 7)
};

static TAB_NUM t_lambda_1190[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_octal_digits
  func_parse_octal_digits, 0, TAIL_CALL,
  POS(3554, 9),
  POS(3555, 9)
};

static TAB_NUM t_lambda_1191[] = {
  2, // locals
  0, // parameters
  // text(1) == 'x'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == 'x'
  var_std__equal, 2, LOCAL(1), chr_120, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_1192, TAIL_CALL,
  POS(3557, 7),
  POS(3557, 7),
  POS(3556, 7)
};

static TAB_NUM t_lambda_1192[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_hex_digits
  func_parse_hex_digits, 0, TAIL_CALL,
  POS(3559, 9),
  POS(3560, 9)
};

static TAB_NUM t_lambda_1193[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_1194, TAIL_CALL,
  POS(3561, 7)
};

static TAB_NUM t_lambda_1194[] = {
  4, // locals
  0, // parameters
  // length_of(str)-length_of(text))
  var_length_of, 1, var_str, 1, LOCAL(1),
  // length_of(text))
  var_length_of, 1, var_text, 1, LOCAL(2),
  // length_of(str)-length_of(text))
  var_std__minus, 2, LOCAL(1), LOCAL(2), 1, LOCAL(3),
  // range(str 1 length_of(str)-length_of(text))
  var_range, 3, var_str, num_1, LOCAL(3), 1, LOCAL(4),
  //  text range(str 1 length_of(str)-length_of(text))
  LET, 2, var_text, LOCAL(4), TAIL_CALL,
  POS(3563, 27),
  POS(3563, 42),
  POS(3563, 27),
  POS(3563, 15),
  POS(3563, 9)
};

static TAB_NUM t_func_parse_more_decimal_digits[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 6, lambda_1195, lambda_1198, lambda_1202, lambda_1206, lambda_1208, lambda_1210, TAIL_CALL,
  POS(3566, 3)
};

static TAB_NUM t_lambda_1195[] = {
  4, // locals
  0, // parameters
  // text(1) >= '0' && text(1) <= '9')
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) >= '0' && text(1) <= '9')
  var_std__less, 2, LOCAL(1), chr_48, 1, LOCAL(2),
  // text(1) >= '0' && text(1) <= '9')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) >= '0' && text(1) <= '9')
  var_std__and, 2, LOCAL(3), lambda_1196, 1, LOCAL(4),
  // 
  LET, 2, LOCAL(4), lambda_1197, TAIL_CALL,
  POS(3568, 8),
  POS(3568, 8),
  POS(3568, 8),
  POS(3568, 8),
  POS(3567, 7)
};

static TAB_NUM t_lambda_1196[] = {
  3, // locals
  0, // parameters
  // text(1) <= '9')
  var_text, 1, num_1, 1, LOCAL(1),
  // 9')
  var_std__less, 2, chr_57, LOCAL(1), 1, LOCAL(2),
  // 9')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) <= '9')
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(3568, 26),
  POS(3568, 38),
  POS(3568, 38),
  POS(3568, 26)
};

static TAB_NUM t_lambda_1197[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_more_decimal_digits
  func_parse_more_decimal_digits, 0, TAIL_CALL,
  POS(3570, 9),
  POS(3571, 9)
};

static TAB_NUM t_lambda_1198[] = {
  3, // locals
  0, // parameters
  // text(1) == '''
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '''
  var_std__equal, 2, LOCAL(1), chr_39, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_1199, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_1201, TAIL_CALL,
  POS(3574, 9),
  POS(3574, 9),
  POS(3573, 9),
  POS(3572, 7)
};

static TAB_NUM t_lambda_1199[] = {
  4, // locals
  0, // parameters
  // text(2) >= '0' && text(2) <= '9')
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) >= '0' && text(2) <= '9')
  var_std__less, 2, LOCAL(1), chr_48, 1, LOCAL(2),
  // text(2) >= '0' && text(2) <= '9')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(2) >= '0' && text(2) <= '9')
  var_std__and, 2, LOCAL(3), lambda_1200, 1, LOCAL(4),
  // text(2) >= '0' && text(2) <= '9')
  LET, 1, LOCAL(4), TAIL_CALL,
  POS(3575, 10),
  POS(3575, 10),
  POS(3575, 10),
  POS(3575, 10),
  POS(3575, 10)
};

static TAB_NUM t_lambda_1200[] = {
  3, // locals
  0, // parameters
  // text(2) <= '9')
  var_text, 1, num_2, 1, LOCAL(1),
  // 9')
  var_std__less, 2, chr_57, LOCAL(1), 1, LOCAL(2),
  // 9')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(2) <= '9')
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(3575, 28),
  POS(3575, 40),
  POS(3575, 40),
  POS(3575, 28)
};

static TAB_NUM t_lambda_1201[] = {
  0, // locals
  0, // parameters
  // range &text 3 -1
  var_range, 3, var_text, num_3, minus_num_1, 1, var_text,
  // parse_more_decimal_digits
  func_parse_more_decimal_digits, 0, TAIL_CALL,
  POS(3577, 9),
  POS(3578, 9)
};

static TAB_NUM t_lambda_1202[] = {
  3, // locals
  0, // parameters
  // text(1) == '.'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '.'
  var_std__equal, 2, LOCAL(1), chr_46, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_1203, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_1205, TAIL_CALL,
  POS(3581, 9),
  POS(3581, 9),
  POS(3580, 9),
  POS(3579, 7)
};

static TAB_NUM t_lambda_1203[] = {
  4, // locals
  0, // parameters
  // text(2) >= '0' && text(2) <= '9')
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) >= '0' && text(2) <= '9')
  var_std__less, 2, LOCAL(1), chr_48, 1, LOCAL(2),
  // text(2) >= '0' && text(2) <= '9')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(2) >= '0' && text(2) <= '9')
  var_std__and, 2, LOCAL(3), lambda_1204, 1, LOCAL(4),
  // text(2) >= '0' && text(2) <= '9')
  LET, 1, LOCAL(4), TAIL_CALL,
  POS(3582, 10),
  POS(3582, 10),
  POS(3582, 10),
  POS(3582, 10),
  POS(3582, 10)
};

static TAB_NUM t_lambda_1204[] = {
  3, // locals
  0, // parameters
  // text(2) <= '9')
  var_text, 1, num_2, 1, LOCAL(1),
  // 9')
  var_std__less, 2, chr_57, LOCAL(1), 1, LOCAL(2),
  // 9')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(2) <= '9')
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(3582, 28),
  POS(3582, 40),
  POS(3582, 40),
  POS(3582, 28)
};

static TAB_NUM t_lambda_1205[] = {
  0, // locals
  0, // parameters
  // range &text 3 -1
  var_range, 3, var_text, num_3, minus_num_1, 1, var_text,
  // parse_more_fraction_digits
  func_parse_more_fraction_digits, 0, TAIL_CALL,
  POS(3584, 9),
  POS(3585, 9)
};

static TAB_NUM t_lambda_1206[] = {
  2, // locals
  0, // parameters
  // text(1) == 'e'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == 'e'
  var_std__equal, 2, LOCAL(1), chr_101, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_1207, TAIL_CALL,
  POS(3587, 7),
  POS(3587, 7),
  POS(3586, 7)
};

static TAB_NUM t_lambda_1207[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_exponent
  func_parse_exponent, 0, TAIL_CALL,
  POS(3589, 9),
  POS(3590, 9)
};

static TAB_NUM t_lambda_1208[] = {
  2, // locals
  0, // parameters
  // text(1) == 'E'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == 'E'
  var_std__equal, 2, LOCAL(1), chr_69, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_1209, TAIL_CALL,
  POS(3592, 7),
  POS(3592, 7),
  POS(3591, 7)
};

static TAB_NUM t_lambda_1209[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_exponent
  func_parse_exponent, 0, TAIL_CALL,
  POS(3594, 9),
  POS(3595, 9)
};

static TAB_NUM t_lambda_1210[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_1211, TAIL_CALL,
  POS(3596, 7)
};

static TAB_NUM t_lambda_1211[] = {
  4, // locals
  0, // parameters
  // length_of(str)-length_of(text))
  var_length_of, 1, var_str, 1, LOCAL(1),
  // length_of(text))
  var_length_of, 1, var_text, 1, LOCAL(2),
  // length_of(str)-length_of(text))
  var_std__minus, 2, LOCAL(1), LOCAL(2), 1, LOCAL(3),
  // range(str 1 length_of(str)-length_of(text))
  var_range, 3, var_str, num_1, LOCAL(3), 1, LOCAL(4),
  //  text range(str 1 length_of(str)-length_of(text))
  LET, 2, var_text, LOCAL(4), TAIL_CALL,
  POS(3598, 27),
  POS(3598, 42),
  POS(3598, 27),
  POS(3598, 15),
  POS(3598, 9)
};

static TAB_NUM t_func_parse_more_fraction_digits[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 4, lambda_1212, lambda_1215, lambda_1217, lambda_1219, TAIL_CALL,
  POS(3601, 3)
};

static TAB_NUM t_lambda_1212[] = {
  4, // locals
  0, // parameters
  // text(1) >= '0' && text(1) <= '9')
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) >= '0' && text(1) <= '9')
  var_std__less, 2, LOCAL(1), chr_48, 1, LOCAL(2),
  // text(1) >= '0' && text(1) <= '9')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) >= '0' && text(1) <= '9')
  var_std__and, 2, LOCAL(3), lambda_1213, 1, LOCAL(4),
  // 
  LET, 2, LOCAL(4), lambda_1214, TAIL_CALL,
  POS(3603, 8),
  POS(3603, 8),
  POS(3603, 8),
  POS(3603, 8),
  POS(3602, 7)
};

static TAB_NUM t_lambda_1213[] = {
  3, // locals
  0, // parameters
  // text(1) <= '9')
  var_text, 1, num_1, 1, LOCAL(1),
  // 9')
  var_std__less, 2, chr_57, LOCAL(1), 1, LOCAL(2),
  // 9')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) <= '9')
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(3603, 26),
  POS(3603, 38),
  POS(3603, 38),
  POS(3603, 26)
};

static TAB_NUM t_lambda_1214[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_more_fraction_digits
  func_parse_more_fraction_digits, 0, TAIL_CALL,
  POS(3605, 9),
  POS(3606, 9)
};

static TAB_NUM t_lambda_1215[] = {
  2, // locals
  0, // parameters
  // text(1) == 'e'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == 'e'
  var_std__equal, 2, LOCAL(1), chr_101, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_1216, TAIL_CALL,
  POS(3608, 7),
  POS(3608, 7),
  POS(3607, 7)
};

static TAB_NUM t_lambda_1216[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_exponent
  func_parse_exponent, 0, TAIL_CALL,
  POS(3610, 9),
  POS(3611, 9)
};

static TAB_NUM t_lambda_1217[] = {
  2, // locals
  0, // parameters
  // text(1) == 'E'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == 'E'
  var_std__equal, 2, LOCAL(1), chr_69, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_1218, TAIL_CALL,
  POS(3613, 7),
  POS(3613, 7),
  POS(3612, 7)
};

static TAB_NUM t_lambda_1218[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_exponent
  func_parse_exponent, 0, TAIL_CALL,
  POS(3615, 9),
  POS(3616, 9)
};

static TAB_NUM t_lambda_1219[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_1220, TAIL_CALL,
  POS(3617, 7)
};

static TAB_NUM t_lambda_1220[] = {
  4, // locals
  0, // parameters
  // length_of(str)-length_of(text))
  var_length_of, 1, var_str, 1, LOCAL(1),
  // length_of(text))
  var_length_of, 1, var_text, 1, LOCAL(2),
  // length_of(str)-length_of(text))
  var_std__minus, 2, LOCAL(1), LOCAL(2), 1, LOCAL(3),
  // range(str 1 length_of(str)-length_of(text))
  var_range, 3, var_str, num_1, LOCAL(3), 1, LOCAL(4),
  //  text range(str 1 length_of(str)-length_of(text))
  LET, 2, var_text, LOCAL(4), TAIL_CALL,
  POS(3619, 27),
  POS(3619, 42),
  POS(3619, 27),
  POS(3619, 15),
  POS(3619, 9)
};

static TAB_NUM t_func_parse_exponent[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 4, lambda_1221, lambda_1223, lambda_1225, lambda_1228, TAIL_CALL,
  POS(3622, 3)
};

static TAB_NUM t_lambda_1221[] = {
  2, // locals
  0, // parameters
  // text(1) == '+'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '+'
  var_std__equal, 2, LOCAL(1), chr_43, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_1222, TAIL_CALL,
  POS(3624, 7),
  POS(3624, 7),
  POS(3623, 7)
};

static TAB_NUM t_lambda_1222[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_exponent_digits
  func_parse_exponent_digits, 0, TAIL_CALL,
  POS(3626, 9),
  POS(3627, 9)
};

static TAB_NUM t_lambda_1223[] = {
  2, // locals
  0, // parameters
  // text(1) == '-'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '-'
  var_std__equal, 2, LOCAL(1), chr_45, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_1224, TAIL_CALL,
  POS(3629, 7),
  POS(3629, 7),
  POS(3628, 7)
};

static TAB_NUM t_lambda_1224[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_exponent_digits
  func_parse_exponent_digits, 0, TAIL_CALL,
  POS(3631, 9),
  POS(3632, 9)
};

static TAB_NUM t_lambda_1225[] = {
  4, // locals
  0, // parameters
  // text(1) >= '0' && text(1) <= '9')
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) >= '0' && text(1) <= '9')
  var_std__less, 2, LOCAL(1), chr_48, 1, LOCAL(2),
  // text(1) >= '0' && text(1) <= '9')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) >= '0' && text(1) <= '9')
  var_std__and, 2, LOCAL(3), lambda_1226, 1, LOCAL(4),
  // 
  LET, 2, LOCAL(4), lambda_1227, TAIL_CALL,
  POS(3634, 8),
  POS(3634, 8),
  POS(3634, 8),
  POS(3634, 8),
  POS(3633, 7)
};

static TAB_NUM t_lambda_1226[] = {
  3, // locals
  0, // parameters
  // text(1) <= '9')
  var_text, 1, num_1, 1, LOCAL(1),
  // 9')
  var_std__less, 2, chr_57, LOCAL(1), 1, LOCAL(2),
  // 9')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) <= '9')
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(3634, 26),
  POS(3634, 38),
  POS(3634, 38),
  POS(3634, 26)
};

static TAB_NUM t_lambda_1227[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_more_exponent_digits
  func_parse_more_exponent_digits, 0, TAIL_CALL,
  POS(3636, 9),
  POS(3637, 9)
};

static TAB_NUM t_lambda_1228[] = {
  0, // locals
  0, // parameters
  //  true:
  LET, 2, var_true, lambda_1229, TAIL_CALL,
  POS(3638, 7)
};

static TAB_NUM t_lambda_1229[] = {
  0, // locals
  0, // parameters
  // syntax_error "exponent"
  func_syntax_error, 1, str_exponent, TAIL_CALL,
  POS(3639, 7)
};

static TAB_NUM t_func_parse_exponent_digits[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 2, lambda_1230, lambda_1233, TAIL_CALL,
  POS(3642, 3)
};

static TAB_NUM t_lambda_1230[] = {
  4, // locals
  0, // parameters
  // text(1) >= '0' && text(1) <= '9')
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) >= '0' && text(1) <= '9')
  var_std__less, 2, LOCAL(1), chr_48, 1, LOCAL(2),
  // text(1) >= '0' && text(1) <= '9')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) >= '0' && text(1) <= '9')
  var_std__and, 2, LOCAL(3), lambda_1231, 1, LOCAL(4),
  // 
  LET, 2, LOCAL(4), lambda_1232, TAIL_CALL,
  POS(3644, 8),
  POS(3644, 8),
  POS(3644, 8),
  POS(3644, 8),
  POS(3643, 7)
};

static TAB_NUM t_lambda_1231[] = {
  3, // locals
  0, // parameters
  // text(1) <= '9')
  var_text, 1, num_1, 1, LOCAL(1),
  // 9')
  var_std__less, 2, chr_57, LOCAL(1), 1, LOCAL(2),
  // 9')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) <= '9')
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(3644, 26),
  POS(3644, 38),
  POS(3644, 38),
  POS(3644, 26)
};

static TAB_NUM t_lambda_1232[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_more_exponent_digits
  func_parse_more_exponent_digits, 0, TAIL_CALL,
  POS(3646, 9),
  POS(3647, 9)
};

static TAB_NUM t_lambda_1233[] = {
  0, // locals
  0, // parameters
  //  true:
  LET, 2, var_true, lambda_1234, TAIL_CALL,
  POS(3648, 7)
};

static TAB_NUM t_lambda_1234[] = {
  0, // locals
  0, // parameters
  // syntax_error "exponent digits"
  func_syntax_error, 1, str_exponent_digits, TAIL_CALL,
  POS(3649, 7)
};

static TAB_NUM t_func_parse_more_exponent_digits[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 2, lambda_1235, lambda_1238, TAIL_CALL,
  POS(3652, 3)
};

static TAB_NUM t_lambda_1235[] = {
  4, // locals
  0, // parameters
  // text(1) >= '0' && text(1) <= '9')
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) >= '0' && text(1) <= '9')
  var_std__less, 2, LOCAL(1), chr_48, 1, LOCAL(2),
  // text(1) >= '0' && text(1) <= '9')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) >= '0' && text(1) <= '9')
  var_std__and, 2, LOCAL(3), lambda_1236, 1, LOCAL(4),
  // 
  LET, 2, LOCAL(4), lambda_1237, TAIL_CALL,
  POS(3654, 8),
  POS(3654, 8),
  POS(3654, 8),
  POS(3654, 8),
  POS(3653, 7)
};

static TAB_NUM t_lambda_1236[] = {
  3, // locals
  0, // parameters
  // text(1) <= '9')
  var_text, 1, num_1, 1, LOCAL(1),
  // 9')
  var_std__less, 2, chr_57, LOCAL(1), 1, LOCAL(2),
  // 9')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) <= '9')
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(3654, 26),
  POS(3654, 38),
  POS(3654, 38),
  POS(3654, 26)
};

static TAB_NUM t_lambda_1237[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_more_exponent_digits
  func_parse_more_exponent_digits, 0, TAIL_CALL,
  POS(3656, 9),
  POS(3657, 9)
};

static TAB_NUM t_lambda_1238[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_1239, TAIL_CALL,
  POS(3658, 7)
};

static TAB_NUM t_lambda_1239[] = {
  4, // locals
  0, // parameters
  // length_of(str)-length_of(text))
  var_length_of, 1, var_str, 1, LOCAL(1),
  // length_of(text))
  var_length_of, 1, var_text, 1, LOCAL(2),
  // length_of(str)-length_of(text))
  var_std__minus, 2, LOCAL(1), LOCAL(2), 1, LOCAL(3),
  // range(str 1 length_of(str)-length_of(text))
  var_range, 3, var_str, num_1, LOCAL(3), 1, LOCAL(4),
  //  text range(str 1 length_of(str)-length_of(text))
  LET, 2, var_text, LOCAL(4), TAIL_CALL,
  POS(3660, 27),
  POS(3660, 42),
  POS(3660, 27),
  POS(3660, 15),
  POS(3660, 9)
};

static TAB_NUM t_func_parse_binary_digits[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 2, lambda_1240, lambda_1243, TAIL_CALL,
  POS(3663, 3)
};

static TAB_NUM t_lambda_1240[] = {
  3, // locals
  0, // parameters
  // text(1) == '0' || text(1) == '1'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '0' || text(1) == '1'
  var_std__equal, 2, LOCAL(1), chr_48, 1, LOCAL(2),
  // text(1) == '0' || text(1) == '1'
  var_std__or, 2, LOCAL(2), lambda_1241, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_1242, TAIL_CALL,
  POS(3665, 7),
  POS(3665, 7),
  POS(3665, 7),
  POS(3664, 7)
};

static TAB_NUM t_lambda_1241[] = {
  2, // locals
  0, // parameters
  // text(1) == '1'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '1'
  var_std__equal, 2, LOCAL(1), chr_49, 1, LOCAL(2),
  // text(1) == '1'
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(3665, 25),
  POS(3665, 25),
  POS(3665, 25)
};

static TAB_NUM t_lambda_1242[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_more_binary_digits
  func_parse_more_binary_digits, 0, TAIL_CALL,
  POS(3667, 9),
  POS(3668, 9)
};

static TAB_NUM t_lambda_1243[] = {
  0, // locals
  0, // parameters
  //  true:
  LET, 2, var_true, lambda_1244, TAIL_CALL,
  POS(3669, 7)
};

static TAB_NUM t_lambda_1244[] = {
  0, // locals
  0, // parameters
  // syntax_error "binary digits"
  func_syntax_error, 1, str_binary_digits, TAIL_CALL,
  POS(3670, 7)
};

static TAB_NUM t_func_parse_more_binary_digits[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 3, lambda_1245, lambda_1248, lambda_1252, TAIL_CALL,
  POS(3673, 3)
};

static TAB_NUM t_lambda_1245[] = {
  3, // locals
  0, // parameters
  // text(1) == '0' || text(1) == '1'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '0' || text(1) == '1'
  var_std__equal, 2, LOCAL(1), chr_48, 1, LOCAL(2),
  // text(1) == '0' || text(1) == '1'
  var_std__or, 2, LOCAL(2), lambda_1246, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_1247, TAIL_CALL,
  POS(3675, 7),
  POS(3675, 7),
  POS(3675, 7),
  POS(3674, 7)
};

static TAB_NUM t_lambda_1246[] = {
  2, // locals
  0, // parameters
  // text(1) == '1'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '1'
  var_std__equal, 2, LOCAL(1), chr_49, 1, LOCAL(2),
  // text(1) == '1'
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(3675, 25),
  POS(3675, 25),
  POS(3675, 25)
};

static TAB_NUM t_lambda_1247[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_more_binary_digits
  func_parse_more_binary_digits, 0, TAIL_CALL,
  POS(3677, 9),
  POS(3678, 9)
};

static TAB_NUM t_lambda_1248[] = {
  3, // locals
  0, // parameters
  // text(1) == '''
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '''
  var_std__equal, 2, LOCAL(1), chr_39, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_1249, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_1251, TAIL_CALL,
  POS(3681, 9),
  POS(3681, 9),
  POS(3680, 9),
  POS(3679, 7)
};

static TAB_NUM t_lambda_1249[] = {
  3, // locals
  0, // parameters
  // text(2) == '0' || text(2) == '1'
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '0' || text(2) == '1'
  var_std__equal, 2, LOCAL(1), chr_48, 1, LOCAL(2),
  // text(2) == '0' || text(2) == '1'
  var_std__or, 2, LOCAL(2), lambda_1250, 1, LOCAL(3),
  // text(2) == '0' || text(2) == '1'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(3682, 9),
  POS(3682, 9),
  POS(3682, 9),
  POS(3682, 9)
};

static TAB_NUM t_lambda_1250[] = {
  2, // locals
  0, // parameters
  // text(2) == '1'
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '1'
  var_std__equal, 2, LOCAL(1), chr_49, 1, LOCAL(2),
  // text(2) == '1'
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(3682, 27),
  POS(3682, 27),
  POS(3682, 27)
};

static TAB_NUM t_lambda_1251[] = {
  0, // locals
  0, // parameters
  // range &text 3 -1
  var_range, 3, var_text, num_3, minus_num_1, 1, var_text,
  // parse_more_binary_digits
  func_parse_more_binary_digits, 0, TAIL_CALL,
  POS(3684, 9),
  POS(3685, 9)
};

static TAB_NUM t_lambda_1252[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_1253, TAIL_CALL,
  POS(3686, 7)
};

static TAB_NUM t_lambda_1253[] = {
  4, // locals
  0, // parameters
  // length_of(str)-length_of(text))
  var_length_of, 1, var_str, 1, LOCAL(1),
  // length_of(text))
  var_length_of, 1, var_text, 1, LOCAL(2),
  // length_of(str)-length_of(text))
  var_std__minus, 2, LOCAL(1), LOCAL(2), 1, LOCAL(3),
  // range(str 1 length_of(str)-length_of(text))
  var_range, 3, var_str, num_1, LOCAL(3), 1, LOCAL(4),
  //  text range(str 1 length_of(str)-length_of(text))
  LET, 2, var_text, LOCAL(4), TAIL_CALL,
  POS(3688, 27),
  POS(3688, 42),
  POS(3688, 27),
  POS(3688, 15),
  POS(3688, 9)
};

static TAB_NUM t_func_parse_octal_digits[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 2, lambda_1254, lambda_1257, TAIL_CALL,
  POS(3691, 3)
};

static TAB_NUM t_lambda_1254[] = {
  4, // locals
  0, // parameters
  // text(1) >= '0' && text(1) <= '7')
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) >= '0' && text(1) <= '7')
  var_std__less, 2, LOCAL(1), chr_48, 1, LOCAL(2),
  // text(1) >= '0' && text(1) <= '7')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) >= '0' && text(1) <= '7')
  var_std__and, 2, LOCAL(3), lambda_1255, 1, LOCAL(4),
  // 
  LET, 2, LOCAL(4), lambda_1256, TAIL_CALL,
  POS(3693, 8),
  POS(3693, 8),
  POS(3693, 8),
  POS(3693, 8),
  POS(3692, 7)
};

static TAB_NUM t_lambda_1255[] = {
  3, // locals
  0, // parameters
  // text(1) <= '7')
  var_text, 1, num_1, 1, LOCAL(1),
  // 7')
  var_std__less, 2, chr_55, LOCAL(1), 1, LOCAL(2),
  // 7')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) <= '7')
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(3693, 26),
  POS(3693, 38),
  POS(3693, 38),
  POS(3693, 26)
};

static TAB_NUM t_lambda_1256[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_more_octal_digits
  func_parse_more_octal_digits, 0, TAIL_CALL,
  POS(3695, 9),
  POS(3696, 9)
};

static TAB_NUM t_lambda_1257[] = {
  0, // locals
  0, // parameters
  //  true:
  LET, 2, var_true, lambda_1258, TAIL_CALL,
  POS(3697, 7)
};

static TAB_NUM t_lambda_1258[] = {
  0, // locals
  0, // parameters
  // syntax_error "octal digits"
  func_syntax_error, 1, str_octal_digits, TAIL_CALL,
  POS(3698, 7)
};

static TAB_NUM t_func_parse_more_octal_digits[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 3, lambda_1259, lambda_1262, lambda_1266, TAIL_CALL,
  POS(3701, 3)
};

static TAB_NUM t_lambda_1259[] = {
  4, // locals
  0, // parameters
  // text(1) >= '0' && text(1) <= '7')
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) >= '0' && text(1) <= '7')
  var_std__less, 2, LOCAL(1), chr_48, 1, LOCAL(2),
  // text(1) >= '0' && text(1) <= '7')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) >= '0' && text(1) <= '7')
  var_std__and, 2, LOCAL(3), lambda_1260, 1, LOCAL(4),
  // 
  LET, 2, LOCAL(4), lambda_1261, TAIL_CALL,
  POS(3703, 8),
  POS(3703, 8),
  POS(3703, 8),
  POS(3703, 8),
  POS(3702, 7)
};

static TAB_NUM t_lambda_1260[] = {
  3, // locals
  0, // parameters
  // text(1) <= '7')
  var_text, 1, num_1, 1, LOCAL(1),
  // 7')
  var_std__less, 2, chr_55, LOCAL(1), 1, LOCAL(2),
  // 7')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) <= '7')
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(3703, 26),
  POS(3703, 38),
  POS(3703, 38),
  POS(3703, 26)
};

static TAB_NUM t_lambda_1261[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_more_octal_digits
  func_parse_more_octal_digits, 0, TAIL_CALL,
  POS(3705, 9),
  POS(3706, 9)
};

static TAB_NUM t_lambda_1262[] = {
  3, // locals
  0, // parameters
  // text(1) == '''
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '''
  var_std__equal, 2, LOCAL(1), chr_39, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_1263, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_1265, TAIL_CALL,
  POS(3709, 9),
  POS(3709, 9),
  POS(3708, 9),
  POS(3707, 7)
};

static TAB_NUM t_lambda_1263[] = {
  4, // locals
  0, // parameters
  // text(2) >= '0' && text(2) <= '7')
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) >= '0' && text(2) <= '7')
  var_std__less, 2, LOCAL(1), chr_48, 1, LOCAL(2),
  // text(2) >= '0' && text(2) <= '7')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(2) >= '0' && text(2) <= '7')
  var_std__and, 2, LOCAL(3), lambda_1264, 1, LOCAL(4),
  // text(2) >= '0' && text(2) <= '7')
  LET, 1, LOCAL(4), TAIL_CALL,
  POS(3710, 10),
  POS(3710, 10),
  POS(3710, 10),
  POS(3710, 10),
  POS(3710, 10)
};

static TAB_NUM t_lambda_1264[] = {
  3, // locals
  0, // parameters
  // text(2) <= '7')
  var_text, 1, num_2, 1, LOCAL(1),
  // 7')
  var_std__less, 2, chr_55, LOCAL(1), 1, LOCAL(2),
  // 7')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(2) <= '7')
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(3710, 28),
  POS(3710, 40),
  POS(3710, 40),
  POS(3710, 28)
};

static TAB_NUM t_lambda_1265[] = {
  0, // locals
  0, // parameters
  // range &text 3 -1
  var_range, 3, var_text, num_3, minus_num_1, 1, var_text,
  // parse_more_octal_digits
  func_parse_more_octal_digits, 0, TAIL_CALL,
  POS(3712, 9),
  POS(3713, 9)
};

static TAB_NUM t_lambda_1266[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_1267, TAIL_CALL,
  POS(3714, 7)
};

static TAB_NUM t_lambda_1267[] = {
  4, // locals
  0, // parameters
  // length_of(str)-length_of(text))
  var_length_of, 1, var_str, 1, LOCAL(1),
  // length_of(text))
  var_length_of, 1, var_text, 1, LOCAL(2),
  // length_of(str)-length_of(text))
  var_std__minus, 2, LOCAL(1), LOCAL(2), 1, LOCAL(3),
  // range(str 1 length_of(str)-length_of(text))
  var_range, 3, var_str, num_1, LOCAL(3), 1, LOCAL(4),
  //  text range(str 1 length_of(str)-length_of(text))
  LET, 2, var_text, LOCAL(4), TAIL_CALL,
  POS(3716, 27),
  POS(3716, 42),
  POS(3716, 27),
  POS(3716, 15),
  POS(3716, 9)
};

static TAB_NUM t_func_parse_hex_digits[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 2, lambda_1268, lambda_1275, TAIL_CALL,
  POS(3719, 3)
};

static TAB_NUM t_lambda_1268[] = {
  5, // locals
  0, // parameters
  // text(1) >= '0' && text(1) <= '9') || (text(1) >= 'a' && text(1) <= 'f') || (text(1) >= 'A' && text(1) <= 'F')
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) >= '0' && text(1) <= '9') || (text(1) >= 'a' && text(1) <= 'f') || (text(1) >= 'A' && text(1) <= 'F')
  var_std__less, 2, LOCAL(1), chr_48, 1, LOCAL(2),
  // text(1) >= '0' && text(1) <= '9') || (text(1) >= 'a' && text(1) <= 'f') || (text(1) >= 'A' && text(1) <= 'F')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) >= '0' && text(1) <= '9') || (text(1) >= 'a' && text(1) <= 'f') || (text(1) >= 'A' && text(1) <= 'F')
  var_std__and, 2, LOCAL(3), lambda_1269, 1, LOCAL(4),
  // text(1) >= '0' && text(1) <= '9') || (text(1) >= 'a' && text(1) <= 'f') || (text(1) >= 'A' && text(1) <= 'F')
  var_std__or, 2, LOCAL(4), lambda_1270, 1, LOCAL(5),
  // 
  LET, 2, LOCAL(5), lambda_1274, TAIL_CALL,
  POS(3721, 8),
  POS(3721, 8),
  POS(3721, 8),
  POS(3721, 8),
  POS(3721, 8),
  POS(3720, 7)
};

static TAB_NUM t_lambda_1269[] = {
  3, // locals
  0, // parameters
  // text(1) <= '9') || (text(1) >= 'a' && text(1) <= 'f') || (text(1) >= 'A' && text(1) <= 'F')
  var_text, 1, num_1, 1, LOCAL(1),
  // 9') || (text(1) >= 'a' && text(1) <= 'f') || (text(1) >= 'A' && text(1) <= 'F')
  var_std__less, 2, chr_57, LOCAL(1), 1, LOCAL(2),
  // 9') || (text(1) >= 'a' && text(1) <= 'f') || (text(1) >= 'A' && text(1) <= 'F')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) <= '9') || (text(1) >= 'a' && text(1) <= 'f') || (text(1) >= 'A' && text(1) <= 'F')
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(3721, 26),
  POS(3721, 38),
  POS(3721, 38),
  POS(3721, 26)
};

static TAB_NUM t_lambda_1270[] = {
  5, // locals
  0, // parameters
  // text(1) >= 'a' && text(1) <= 'f') || (text(1) >= 'A' && text(1) <= 'F')
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) >= 'a' && text(1) <= 'f') || (text(1) >= 'A' && text(1) <= 'F')
  var_std__less, 2, LOCAL(1), chr_97, 1, LOCAL(2),
  // text(1) >= 'a' && text(1) <= 'f') || (text(1) >= 'A' && text(1) <= 'F')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) >= 'a' && text(1) <= 'f') || (text(1) >= 'A' && text(1) <= 'F')
  var_std__and, 2, LOCAL(3), lambda_1271, 1, LOCAL(4),
  // text(1) >= 'a' && text(1) <= 'f') || (text(1) >= 'A' && text(1) <= 'F')
  var_std__or, 2, LOCAL(4), lambda_1272, 1, LOCAL(5),
  // (text(1) >= 'a' && text(1) <= 'f') || (text(1) >= 'A' && text(1) <= 'F')
  LET, 1, LOCAL(5), TAIL_CALL,
  POS(3721, 46),
  POS(3721, 46),
  POS(3721, 46),
  POS(3721, 46),
  POS(3721, 46),
  POS(3721, 45)
};

static TAB_NUM t_lambda_1271[] = {
  3, // locals
  0, // parameters
  // text(1) <= 'f') || (text(1) >= 'A' && text(1) <= 'F')
  var_text, 1, num_1, 1, LOCAL(1),
  // f') || (text(1) >= 'A' && text(1) <= 'F')
  var_std__less, 2, chr_102, LOCAL(1), 1, LOCAL(2),
  // f') || (text(1) >= 'A' && text(1) <= 'F')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) <= 'f') || (text(1) >= 'A' && text(1) <= 'F')
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(3721, 64),
  POS(3721, 76),
  POS(3721, 76),
  POS(3721, 64)
};

static TAB_NUM t_lambda_1272[] = {
  4, // locals
  0, // parameters
  // text(1) >= 'A' && text(1) <= 'F')
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) >= 'A' && text(1) <= 'F')
  var_std__less, 2, LOCAL(1), chr_65, 1, LOCAL(2),
  // text(1) >= 'A' && text(1) <= 'F')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) >= 'A' && text(1) <= 'F')
  var_std__and, 2, LOCAL(3), lambda_1273, 1, LOCAL(4),
  // text(1) >= 'A' && text(1) <= 'F')
  LET, 1, LOCAL(4), TAIL_CALL,
  POS(3721, 84),
  POS(3721, 84),
  POS(3721, 84),
  POS(3721, 84),
  POS(3721, 84)
};

static TAB_NUM t_lambda_1273[] = {
  3, // locals
  0, // parameters
  // text(1) <= 'F')
  var_text, 1, num_1, 1, LOCAL(1),
  // F')
  var_std__less, 2, chr_70, LOCAL(1), 1, LOCAL(2),
  // F')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) <= 'F')
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(3721, 102),
  POS(3721, 114),
  POS(3721, 114),
  POS(3721, 102)
};

static TAB_NUM t_lambda_1274[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_more_hex_digits
  func_parse_more_hex_digits, 0, TAIL_CALL,
  POS(3723, 9),
  POS(3724, 9)
};

static TAB_NUM t_lambda_1275[] = {
  0, // locals
  0, // parameters
  //  true:
  LET, 2, var_true, lambda_1276, TAIL_CALL,
  POS(3725, 7)
};

static TAB_NUM t_lambda_1276[] = {
  0, // locals
  0, // parameters
  // syntax_error "hex digits"
  func_syntax_error, 1, str_hex_digits, TAIL_CALL,
  POS(3726, 7)
};

static TAB_NUM t_func_parse_more_hex_digits[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 3, lambda_1277, lambda_1284, lambda_1292, TAIL_CALL,
  POS(3729, 3)
};

static TAB_NUM t_lambda_1277[] = {
  5, // locals
  0, // parameters
  // text(1) >= '0' && text(1) <= '9') || (text(1) >= 'a' && text(1) <= 'f') || (text(1) >= 'A' && text(1) <= 'F')
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) >= '0' && text(1) <= '9') || (text(1) >= 'a' && text(1) <= 'f') || (text(1) >= 'A' && text(1) <= 'F')
  var_std__less, 2, LOCAL(1), chr_48, 1, LOCAL(2),
  // text(1) >= '0' && text(1) <= '9') || (text(1) >= 'a' && text(1) <= 'f') || (text(1) >= 'A' && text(1) <= 'F')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) >= '0' && text(1) <= '9') || (text(1) >= 'a' && text(1) <= 'f') || (text(1) >= 'A' && text(1) <= 'F')
  var_std__and, 2, LOCAL(3), lambda_1278, 1, LOCAL(4),
  // text(1) >= '0' && text(1) <= '9') || (text(1) >= 'a' && text(1) <= 'f') || (text(1) >= 'A' && text(1) <= 'F')
  var_std__or, 2, LOCAL(4), lambda_1279, 1, LOCAL(5),
  // 
  LET, 2, LOCAL(5), lambda_1283, TAIL_CALL,
  POS(3731, 8),
  POS(3731, 8),
  POS(3731, 8),
  POS(3731, 8),
  POS(3731, 8),
  POS(3730, 7)
};

static TAB_NUM t_lambda_1278[] = {
  3, // locals
  0, // parameters
  // text(1) <= '9') || (text(1) >= 'a' && text(1) <= 'f') || (text(1) >= 'A' && text(1) <= 'F')
  var_text, 1, num_1, 1, LOCAL(1),
  // 9') || (text(1) >= 'a' && text(1) <= 'f') || (text(1) >= 'A' && text(1) <= 'F')
  var_std__less, 2, chr_57, LOCAL(1), 1, LOCAL(2),
  // 9') || (text(1) >= 'a' && text(1) <= 'f') || (text(1) >= 'A' && text(1) <= 'F')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) <= '9') || (text(1) >= 'a' && text(1) <= 'f') || (text(1) >= 'A' && text(1) <= 'F')
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(3731, 26),
  POS(3731, 38),
  POS(3731, 38),
  POS(3731, 26)
};

static TAB_NUM t_lambda_1279[] = {
  5, // locals
  0, // parameters
  // text(1) >= 'a' && text(1) <= 'f') || (text(1) >= 'A' && text(1) <= 'F')
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) >= 'a' && text(1) <= 'f') || (text(1) >= 'A' && text(1) <= 'F')
  var_std__less, 2, LOCAL(1), chr_97, 1, LOCAL(2),
  // text(1) >= 'a' && text(1) <= 'f') || (text(1) >= 'A' && text(1) <= 'F')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) >= 'a' && text(1) <= 'f') || (text(1) >= 'A' && text(1) <= 'F')
  var_std__and, 2, LOCAL(3), lambda_1280, 1, LOCAL(4),
  // text(1) >= 'a' && text(1) <= 'f') || (text(1) >= 'A' && text(1) <= 'F')
  var_std__or, 2, LOCAL(4), lambda_1281, 1, LOCAL(5),
  // (text(1) >= 'a' && text(1) <= 'f') || (text(1) >= 'A' && text(1) <= 'F')
  LET, 1, LOCAL(5), TAIL_CALL,
  POS(3731, 46),
  POS(3731, 46),
  POS(3731, 46),
  POS(3731, 46),
  POS(3731, 46),
  POS(3731, 45)
};

static TAB_NUM t_lambda_1280[] = {
  3, // locals
  0, // parameters
  // text(1) <= 'f') || (text(1) >= 'A' && text(1) <= 'F')
  var_text, 1, num_1, 1, LOCAL(1),
  // f') || (text(1) >= 'A' && text(1) <= 'F')
  var_std__less, 2, chr_102, LOCAL(1), 1, LOCAL(2),
  // f') || (text(1) >= 'A' && text(1) <= 'F')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) <= 'f') || (text(1) >= 'A' && text(1) <= 'F')
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(3731, 64),
  POS(3731, 76),
  POS(3731, 76),
  POS(3731, 64)
};

static TAB_NUM t_lambda_1281[] = {
  4, // locals
  0, // parameters
  // text(1) >= 'A' && text(1) <= 'F')
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) >= 'A' && text(1) <= 'F')
  var_std__less, 2, LOCAL(1), chr_65, 1, LOCAL(2),
  // text(1) >= 'A' && text(1) <= 'F')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) >= 'A' && text(1) <= 'F')
  var_std__and, 2, LOCAL(3), lambda_1282, 1, LOCAL(4),
  // text(1) >= 'A' && text(1) <= 'F')
  LET, 1, LOCAL(4), TAIL_CALL,
  POS(3731, 84),
  POS(3731, 84),
  POS(3731, 84),
  POS(3731, 84),
  POS(3731, 84)
};

static TAB_NUM t_lambda_1282[] = {
  3, // locals
  0, // parameters
  // text(1) <= 'F')
  var_text, 1, num_1, 1, LOCAL(1),
  // F')
  var_std__less, 2, chr_70, LOCAL(1), 1, LOCAL(2),
  // F')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) <= 'F')
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(3731, 102),
  POS(3731, 114),
  POS(3731, 114),
  POS(3731, 102)
};

static TAB_NUM t_lambda_1283[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_more_hex_digits
  func_parse_more_hex_digits, 0, TAIL_CALL,
  POS(3733, 9),
  POS(3734, 9)
};

static TAB_NUM t_lambda_1284[] = {
  3, // locals
  0, // parameters
  // text(1) == '''
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '''
  var_std__equal, 2, LOCAL(1), chr_39, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_1285, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_1291, TAIL_CALL,
  POS(3737, 9),
  POS(3737, 9),
  POS(3736, 9),
  POS(3735, 7)
};

static TAB_NUM t_lambda_1285[] = {
  5, // locals
  0, // parameters
  // text(2) >= '0' && text(2) <= '9') || (text(2) >= 'a' && text(2) <= 'f') || (text(2) >= 'A' && text(2) <= 'F')
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) >= '0' && text(2) <= '9') || (text(2) >= 'a' && text(2) <= 'f') || (text(2) >= 'A' && text(2) <= 'F')
  var_std__less, 2, LOCAL(1), chr_48, 1, LOCAL(2),
  // text(2) >= '0' && text(2) <= '9') || (text(2) >= 'a' && text(2) <= 'f') || (text(2) >= 'A' && text(2) <= 'F')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(2) >= '0' && text(2) <= '9') || (text(2) >= 'a' && text(2) <= 'f') || (text(2) >= 'A' && text(2) <= 'F')
  var_std__and, 2, LOCAL(3), lambda_1286, 1, LOCAL(4),
  // text(2) >= '0' && text(2) <= '9') || (text(2) >= 'a' && text(2) <= 'f') || (text(2) >= 'A' && text(2) <= 'F')
  var_std__or, 2, LOCAL(4), lambda_1287, 1, LOCAL(5),
  // (text(2) >= '0' && text(2) <= '9') || (text(2) >= 'a' && text(2) <= 'f') || (text(2) >= 'A' && text(2) <= 'F')
  LET, 1, LOCAL(5), TAIL_CALL,
  POS(3738, 10),
  POS(3738, 10),
  POS(3738, 10),
  POS(3738, 10),
  POS(3738, 10),
  POS(3738, 9)
};

static TAB_NUM t_lambda_1286[] = {
  3, // locals
  0, // parameters
  // text(2) <= '9') || (text(2) >= 'a' && text(2) <= 'f') || (text(2) >= 'A' && text(2) <= 'F')
  var_text, 1, num_2, 1, LOCAL(1),
  // 9') || (text(2) >= 'a' && text(2) <= 'f') || (text(2) >= 'A' && text(2) <= 'F')
  var_std__less, 2, chr_57, LOCAL(1), 1, LOCAL(2),
  // 9') || (text(2) >= 'a' && text(2) <= 'f') || (text(2) >= 'A' && text(2) <= 'F')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(2) <= '9') || (text(2) >= 'a' && text(2) <= 'f') || (text(2) >= 'A' && text(2) <= 'F')
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(3738, 28),
  POS(3738, 40),
  POS(3738, 40),
  POS(3738, 28)
};

static TAB_NUM t_lambda_1287[] = {
  5, // locals
  0, // parameters
  // text(2) >= 'a' && text(2) <= 'f') || (text(2) >= 'A' && text(2) <= 'F')
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) >= 'a' && text(2) <= 'f') || (text(2) >= 'A' && text(2) <= 'F')
  var_std__less, 2, LOCAL(1), chr_97, 1, LOCAL(2),
  // text(2) >= 'a' && text(2) <= 'f') || (text(2) >= 'A' && text(2) <= 'F')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(2) >= 'a' && text(2) <= 'f') || (text(2) >= 'A' && text(2) <= 'F')
  var_std__and, 2, LOCAL(3), lambda_1288, 1, LOCAL(4),
  // text(2) >= 'a' && text(2) <= 'f') || (text(2) >= 'A' && text(2) <= 'F')
  var_std__or, 2, LOCAL(4), lambda_1289, 1, LOCAL(5),
  // (text(2) >= 'a' && text(2) <= 'f') || (text(2) >= 'A' && text(2) <= 'F')
  LET, 1, LOCAL(5), TAIL_CALL,
  POS(3738, 48),
  POS(3738, 48),
  POS(3738, 48),
  POS(3738, 48),
  POS(3738, 48),
  POS(3738, 47)
};

static TAB_NUM t_lambda_1288[] = {
  3, // locals
  0, // parameters
  // text(2) <= 'f') || (text(2) >= 'A' && text(2) <= 'F')
  var_text, 1, num_2, 1, LOCAL(1),
  // f') || (text(2) >= 'A' && text(2) <= 'F')
  var_std__less, 2, chr_102, LOCAL(1), 1, LOCAL(2),
  // f') || (text(2) >= 'A' && text(2) <= 'F')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(2) <= 'f') || (text(2) >= 'A' && text(2) <= 'F')
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(3738, 66),
  POS(3738, 78),
  POS(3738, 78),
  POS(3738, 66)
};

static TAB_NUM t_lambda_1289[] = {
  4, // locals
  0, // parameters
  // text(2) >= 'A' && text(2) <= 'F')
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) >= 'A' && text(2) <= 'F')
  var_std__less, 2, LOCAL(1), chr_65, 1, LOCAL(2),
  // text(2) >= 'A' && text(2) <= 'F')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(2) >= 'A' && text(2) <= 'F')
  var_std__and, 2, LOCAL(3), lambda_1290, 1, LOCAL(4),
  // text(2) >= 'A' && text(2) <= 'F')
  LET, 1, LOCAL(4), TAIL_CALL,
  POS(3738, 86),
  POS(3738, 86),
  POS(3738, 86),
  POS(3738, 86),
  POS(3738, 86)
};

static TAB_NUM t_lambda_1290[] = {
  3, // locals
  0, // parameters
  // text(2) <= 'F')
  var_text, 1, num_2, 1, LOCAL(1),
  // F')
  var_std__less, 2, chr_70, LOCAL(1), 1, LOCAL(2),
  // F')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(2) <= 'F')
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(3738, 104),
  POS(3738, 116),
  POS(3738, 116),
  POS(3738, 104)
};

static TAB_NUM t_lambda_1291[] = {
  0, // locals
  0, // parameters
  // range &text 3 -1
  var_range, 3, var_text, num_3, minus_num_1, 1, var_text,
  // parse_more_hex_digits
  func_parse_more_hex_digits, 0, TAIL_CALL,
  POS(3740, 9),
  POS(3741, 9)
};

static TAB_NUM t_lambda_1292[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_1293, TAIL_CALL,
  POS(3742, 7)
};

static TAB_NUM t_lambda_1293[] = {
  4, // locals
  0, // parameters
  // length_of(str)-length_of(text))
  var_length_of, 1, var_str, 1, LOCAL(1),
  // length_of(text))
  var_length_of, 1, var_text, 1, LOCAL(2),
  // length_of(str)-length_of(text))
  var_std__minus, 2, LOCAL(1), LOCAL(2), 1, LOCAL(3),
  // range(str 1 length_of(str)-length_of(text))
  var_range, 3, var_str, num_1, LOCAL(3), 1, LOCAL(4),
  //  text range(str 1 length_of(str)-length_of(text))
  LET, 2, var_text, LOCAL(4), TAIL_CALL,
  POS(3744, 27),
  POS(3744, 42),
  POS(3744, 27),
  POS(3744, 15),
  POS(3744, 9)
};

static TAB_NUM t_func_parse_special_character_literal[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 3, lambda_1294, lambda_1297, lambda_1302, TAIL_CALL,
  POS(3747, 3)
};

static TAB_NUM t_lambda_1294[] = {
  3, // locals
  0, // parameters
  // text(1) == '@@'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '@@'
  var_std__equal, 2, LOCAL(1), chr_64, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_1295, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_1296, TAIL_CALL,
  POS(3750, 9),
  POS(3750, 9),
  POS(3749, 9),
  POS(3748, 7)
};

static TAB_NUM t_lambda_1295[] = {
  2, // locals
  0, // parameters
  // text(2) == '''
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '''
  var_std__equal, 2, LOCAL(1), chr_39, 1, LOCAL(2),
  // text(2) == '''
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(3751, 9),
  POS(3751, 9),
  POS(3751, 9)
};

static TAB_NUM t_lambda_1296[] = {
  0, // locals
  0, // parameters
  // range &text 3 -1
  var_range, 3, var_text, num_3, minus_num_1, 1, var_text,
  // parse_at_character_literal_without_prefix
  func_parse_at_character_literal_without_prefix, 0, TAIL_CALL,
  POS(3753, 9),
  POS(3754, 9)
};

static TAB_NUM t_lambda_1297[] = {
  5, // locals
  0, // parameters
  // text(1) >= 'a' && text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z')
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) >= 'a' && text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z')
  var_std__less, 2, LOCAL(1), chr_97, 1, LOCAL(2),
  // text(1) >= 'a' && text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) >= 'a' && text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z')
  var_std__and, 2, LOCAL(3), lambda_1298, 1, LOCAL(4),
  // text(1) >= 'a' && text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z')
  var_std__or, 2, LOCAL(4), lambda_1299, 1, LOCAL(5),
  // 
  LET, 2, LOCAL(5), lambda_1301, TAIL_CALL,
  POS(3756, 8),
  POS(3756, 8),
  POS(3756, 8),
  POS(3756, 8),
  POS(3756, 8),
  POS(3755, 7)
};

static TAB_NUM t_lambda_1298[] = {
  3, // locals
  0, // parameters
  // text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z')
  var_text, 1, num_1, 1, LOCAL(1),
  // z') || (text(1) >= 'A' && text(1) <= 'Z')
  var_std__less, 2, chr_122, LOCAL(1), 1, LOCAL(2),
  // z') || (text(1) >= 'A' && text(1) <= 'Z')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z')
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(3756, 26),
  POS(3756, 38),
  POS(3756, 38),
  POS(3756, 26)
};

static TAB_NUM t_lambda_1299[] = {
  4, // locals
  0, // parameters
  // text(1) >= 'A' && text(1) <= 'Z')
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) >= 'A' && text(1) <= 'Z')
  var_std__less, 2, LOCAL(1), chr_65, 1, LOCAL(2),
  // text(1) >= 'A' && text(1) <= 'Z')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) >= 'A' && text(1) <= 'Z')
  var_std__and, 2, LOCAL(3), lambda_1300, 1, LOCAL(4),
  // text(1) >= 'A' && text(1) <= 'Z')
  LET, 1, LOCAL(4), TAIL_CALL,
  POS(3756, 46),
  POS(3756, 46),
  POS(3756, 46),
  POS(3756, 46),
  POS(3756, 46)
};

static TAB_NUM t_lambda_1300[] = {
  3, // locals
  0, // parameters
  // text(1) <= 'Z')
  var_text, 1, num_1, 1, LOCAL(1),
  // Z')
  var_std__less, 2, chr_90, LOCAL(1), 1, LOCAL(2),
  // Z')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) <= 'Z')
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(3756, 64),
  POS(3756, 76),
  POS(3756, 76),
  POS(3756, 64)
};

static TAB_NUM t_lambda_1301[] = {
  0, // locals
  0, // parameters
  // !str text
  LET, 1, var_text, 1, var_str,
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_named_character_literal_without_prefix
  func_parse_named_character_literal_without_prefix, 0, TAIL_CALL,
  POS(3758, 9),
  POS(3759, 9),
  POS(3760, 9)
};

static TAB_NUM t_lambda_1302[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_1303, TAIL_CALL,
  POS(3761, 7)
};

static TAB_NUM t_lambda_1303[] = {
  0, // locals
  0, // parameters
  // !expected "special character literal"
  LET, 1, str_special_characte, 1, var_expected,
  // !at text
  LET, 1, var_text, 1, var_at,
  // parse_numeric_character_literal
  func_parse_numeric_character_literal, 0, TAIL_CALL,
  POS(3764, 9),
  POS(3765, 9),
  POS(3766, 9)
};

static TAB_NUM t_func_parse_at_character_literal_without_prefix[] = {
  2, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, LOCAL(2),
  // funky_types::at_character_literal
  LET, -2, var_funky_types__at_character_literal, var_funky__source_group_of, var_current_group, var_funky__source_position_of, LOCAL(2), LOCAL(1),
  // ->
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(3769, 3),
  POS(3772, 5),
  POS(3770, 3)
};

static TAB_NUM t_func_parse_named_character_literal_without_prefix[] = {
  1, // locals
  0, // parameters
  // $position str
  LET, 1, var_str, 1, var_3777_1_position,
  // parse_more_character_name_characters !text $character_name
  func_parse_more_character_name_characters, 0, 2, var_text, var_3778_44_character_name,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_60_text_is_defined, lambda_1308, TAIL_CALL,
  POS(3777, 3),
  POS(3778, 3),
  POS(3780, 10),
  POS(3779, 3)
};

static TAB_NUM t_lambda_60_text_is_defined[] = {
  2, // locals
  0, // parameters
  // text(1) == ';':
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == ';':
  var_std__equal, 2, LOCAL(1), chr_59, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_1304, lambda_1307, TAIL_CALL,
  POS(3782, 9),
  POS(3782, 9),
  POS(3781, 7)
};

static TAB_NUM t_lambda_1304[] = {
  2, // locals
  0, // parameters
  // text(2) == '''
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '''
  var_std__equal, 2, LOCAL(1), chr_39, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_1305, lambda_1306, TAIL_CALL,
  POS(3784, 13),
  POS(3784, 13),
  POS(3783, 11)
};

static TAB_NUM t_lambda_1305[] = {
  2, // locals
  0, // parameters
  // range(text 3 -1)
  var_range, 3, var_text, num_3, minus_num_1, 1, LOCAL(1),
  // funky_types::named_character_literal
  LET, -3, var_funky_types__named_character_literal, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_3777_1_position, var_funky__name_of, var_3778_44_character_name, LOCAL(2),
  // 
  LET, 2, LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(3786, 15),
  POS(3787, 15),
  POS(3785, 15)
};

static TAB_NUM t_lambda_1306[] = {
  0, // locals
  0, // parameters
  // syntax_error "single quote"
  func_syntax_error, 1, str_single_quote, TAIL_CALL,
  POS(3792, 15)
};

static TAB_NUM t_lambda_1307[] = {
  0, // locals
  0, // parameters
  // syntax_error "';'"
  func_syntax_error, 1, string_9, TAIL_CALL,
  POS(3794, 11)
};

static TAB_NUM t_lambda_1308[] = {
  0, // locals
  0, // parameters
  //  undefined character_name
  LET, 2, var_undefined, var_3778_44_character_name, TAIL_CALL,
  POS(3795, 7)
};

static TAB_NUM t_func_parse_numeric_character_literal[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_3798_1_position,
  // !str text
  LET, 1, var_text, 1, var_str,
  // parse_digits !text $digits
  func_parse_digits, 0, 2, var_text, var_3800_20_digits,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_61_text_is_defined, lambda_1313, TAIL_CALL,
  POS(3798, 3),
  POS(3799, 3),
  POS(3800, 3),
  POS(3802, 10),
  POS(3801, 3)
};

static TAB_NUM t_lambda_61_text_is_defined[] = {
  2, // locals
  0, // parameters
  // text(1) == ';':
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == ';':
  var_std__equal, 2, LOCAL(1), chr_59, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_1309, lambda_1312, TAIL_CALL,
  POS(3804, 9),
  POS(3804, 9),
  POS(3803, 7)
};

static TAB_NUM t_lambda_1309[] = {
  2, // locals
  0, // parameters
  // text(2) == '''
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '''
  var_std__equal, 2, LOCAL(1), chr_39, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_1310, lambda_1311, TAIL_CALL,
  POS(3806, 13),
  POS(3806, 13),
  POS(3805, 11)
};

static TAB_NUM t_lambda_1310[] = {
  2, // locals
  0, // parameters
  // range(text 3 -1)
  var_range, 3, var_text, num_3, minus_num_1, 1, LOCAL(1),
  // funky_types::numeric_character_literal
  LET, -3, var_funky_types__numeric_character_literal, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_3798_1_position, var_funky__digits_of, var_3800_20_digits, LOCAL(2),
  // 
  LET, 2, LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(3808, 15),
  POS(3809, 15),
  POS(3807, 15)
};

static TAB_NUM t_lambda_1311[] = {
  0, // locals
  0, // parameters
  // syntax_error "single quote"
  func_syntax_error, 1, str_single_quote, TAIL_CALL,
  POS(3814, 15)
};

static TAB_NUM t_lambda_1312[] = {
  0, // locals
  0, // parameters
  // syntax_error "';'"
  func_syntax_error, 1, string_9, TAIL_CALL,
  POS(3816, 11)
};

static TAB_NUM t_lambda_1313[] = {
  0, // locals
  0, // parameters
  //  undefined digits
  LET, 2, var_undefined, var_3800_20_digits, TAIL_CALL,
  POS(3817, 7)
};

static TAB_NUM t_func_parse_character_literal_without_prefix[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_3820_1_position,
  // !str text
  LET, 1, var_text, 1, var_str,
  // parse_character !text $character
  func_parse_character, 0, 2, var_text, var_3822_23_character,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_62_text_is_defined, lambda_1316, TAIL_CALL,
  POS(3820, 3),
  POS(3821, 3),
  POS(3822, 3),
  POS(3824, 10),
  POS(3823, 3)
};

static TAB_NUM t_lambda_62_text_is_defined[] = {
  2, // locals
  0, // parameters
  // text(1) == '''
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '''
  var_std__equal, 2, LOCAL(1), chr_39, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_1314, lambda_1315, TAIL_CALL,
  POS(3826, 9),
  POS(3826, 9),
  POS(3825, 7)
};

static TAB_NUM t_lambda_1314[] = {
  2, // locals
  0, // parameters
  // range(text 2 -1)
  var_range, 3, var_text, num_2, minus_num_1, 1, LOCAL(1),
  // funky_types::character_literal
  LET, -3, var_funky_types__character_literal, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_3820_1_position, var_funky__character_of, var_3822_23_character, LOCAL(2),
  // 
  LET, 2, LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(3828, 11),
  POS(3829, 11),
  POS(3827, 11)
};

static TAB_NUM t_lambda_1315[] = {
  0, // locals
  0, // parameters
  // syntax_error "single quote"
  func_syntax_error, 1, str_single_quote, TAIL_CALL,
  POS(3834, 11)
};

static TAB_NUM t_lambda_1316[] = {
  0, // locals
  0, // parameters
  //  undefined character
  LET, 2, var_undefined, var_3822_23_character, TAIL_CALL,
  POS(3835, 7)
};

static TAB_NUM t_func_parse_character[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 2, lambda_1317, lambda_1319, TAIL_CALL,
  POS(3838, 3)
};

static TAB_NUM t_lambda_1317[] = {
  3, // locals
  0, // parameters
  // text(1) != '@nl;'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) != '@nl;'
  var_std__equal, 2, LOCAL(1), chr_10, 1, LOCAL(2),
  // text(1) != '@nl;'
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_1318, TAIL_CALL,
  POS(3840, 7),
  POS(3840, 7),
  POS(3840, 7),
  POS(3839, 7)
};

static TAB_NUM t_lambda_1318[] = {
  2, // locals
  0, // parameters
  // range(text 2 -1) range(str 1 1)
  var_range, 3, var_text, num_2, minus_num_1, 1, LOCAL(1),
  // range(str 1 1)
  var_range, 3, var_str, num_1, num_1, 1, LOCAL(2),
  //  range(text 2 -1) range(str 1 1)
  LET, 2, LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(3841, 10),
  POS(3841, 27),
  POS(3841, 9)
};

static TAB_NUM t_lambda_1319[] = {
  0, // locals
  0, // parameters
  //  true:
  LET, 2, var_true, lambda_1320, TAIL_CALL,
  POS(3842, 7)
};

static TAB_NUM t_lambda_1320[] = {
  0, // locals
  0, // parameters
  // syntax_error "character"
  func_syntax_error, 1, str_character, TAIL_CALL,
  POS(3843, 7)
};

static TAB_NUM t_func_parse_more_character_name_characters[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 2, lambda_1321, lambda_1328, TAIL_CALL,
  POS(3846, 3)
};

static TAB_NUM t_lambda_1321[] = {
  5, // locals
  0, // parameters
  // text(1) >= 'a' && text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) >= 'a' && text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  var_std__less, 2, LOCAL(1), chr_97, 1, LOCAL(2),
  // text(1) >= 'a' && text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) >= 'a' && text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  var_std__and, 2, LOCAL(3), lambda_1322, 1, LOCAL(4),
  // text(1) >= 'a' && text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  var_std__or, 2, LOCAL(4), lambda_1323, 1, LOCAL(5),
  // 
  LET, 2, LOCAL(5), lambda_1327, TAIL_CALL,
  POS(3848, 8),
  POS(3848, 8),
  POS(3848, 8),
  POS(3848, 8),
  POS(3848, 8),
  POS(3847, 7)
};

static TAB_NUM t_lambda_1322[] = {
  3, // locals
  0, // parameters
  // text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  var_text, 1, num_1, 1, LOCAL(1),
  // z') || (text(1) >= 'A' && text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  var_std__less, 2, chr_122, LOCAL(1), 1, LOCAL(2),
  // z') || (text(1) >= 'A' && text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(3848, 26),
  POS(3848, 38),
  POS(3848, 38),
  POS(3848, 26)
};

static TAB_NUM t_lambda_1323[] = {
  5, // locals
  0, // parameters
  // text(1) >= 'A' && text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) >= 'A' && text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  var_std__less, 2, LOCAL(1), chr_65, 1, LOCAL(2),
  // text(1) >= 'A' && text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) >= 'A' && text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  var_std__and, 2, LOCAL(3), lambda_1324, 1, LOCAL(4),
  // text(1) >= 'A' && text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  var_std__or, 2, LOCAL(4), lambda_1325, 1, LOCAL(5),
  // (text(1) >= 'A' && text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  LET, 1, LOCAL(5), TAIL_CALL,
  POS(3848, 46),
  POS(3848, 46),
  POS(3848, 46),
  POS(3848, 46),
  POS(3848, 46),
  POS(3848, 45)
};

static TAB_NUM t_lambda_1324[] = {
  3, // locals
  0, // parameters
  // text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  var_text, 1, num_1, 1, LOCAL(1),
  // Z') || (text(1) >= '0' && text(1) <= '9')
  var_std__less, 2, chr_90, LOCAL(1), 1, LOCAL(2),
  // Z') || (text(1) >= '0' && text(1) <= '9')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(3848, 64),
  POS(3848, 76),
  POS(3848, 76),
  POS(3848, 64)
};

static TAB_NUM t_lambda_1325[] = {
  4, // locals
  0, // parameters
  // text(1) >= '0' && text(1) <= '9')
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) >= '0' && text(1) <= '9')
  var_std__less, 2, LOCAL(1), chr_48, 1, LOCAL(2),
  // text(1) >= '0' && text(1) <= '9')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) >= '0' && text(1) <= '9')
  var_std__and, 2, LOCAL(3), lambda_1326, 1, LOCAL(4),
  // text(1) >= '0' && text(1) <= '9')
  LET, 1, LOCAL(4), TAIL_CALL,
  POS(3848, 84),
  POS(3848, 84),
  POS(3848, 84),
  POS(3848, 84),
  POS(3848, 84)
};

static TAB_NUM t_lambda_1326[] = {
  3, // locals
  0, // parameters
  // text(1) <= '9')
  var_text, 1, num_1, 1, LOCAL(1),
  // 9')
  var_std__less, 2, chr_57, LOCAL(1), 1, LOCAL(2),
  // 9')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) <= '9')
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(3848, 102),
  POS(3848, 114),
  POS(3848, 114),
  POS(3848, 102)
};

static TAB_NUM t_lambda_1327[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_more_character_name_characters
  func_parse_more_character_name_characters, 0, TAIL_CALL,
  POS(3850, 9),
  POS(3851, 9)
};

static TAB_NUM t_lambda_1328[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_1329, TAIL_CALL,
  POS(3852, 7)
};

static TAB_NUM t_lambda_1329[] = {
  4, // locals
  0, // parameters
  // length_of(str)-length_of(text))
  var_length_of, 1, var_str, 1, LOCAL(1),
  // length_of(text))
  var_length_of, 1, var_text, 1, LOCAL(2),
  // length_of(str)-length_of(text))
  var_std__minus, 2, LOCAL(1), LOCAL(2), 1, LOCAL(3),
  // range(str 1 length_of(str)-length_of(text))
  var_range, 3, var_str, num_1, LOCAL(3), 1, LOCAL(4),
  //  text range(str 1 length_of(str)-length_of(text))
  LET, 2, var_text, LOCAL(4), TAIL_CALL,
  POS(3854, 27),
  POS(3854, 42),
  POS(3854, 27),
  POS(3854, 15),
  POS(3854, 9)
};

static TAB_NUM t_func_parse_string_literal_without_prefix[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_3857_1_position,
  // parse_string_components !text $string_components
  func_parse_string_components, 0, 2, var_text, var_3858_31_string_components,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1330, lambda_1331, TAIL_CALL,
  POS(3857, 3),
  POS(3858, 3),
  POS(3860, 10),
  POS(3859, 3)
};

static TAB_NUM t_lambda_1330[] = {
  1, // locals
  0, // parameters
  // funky_types::string_literal
  LET, -3, var_funky_types__string_literal, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_3857_1_position, var_funky__components_of, var_3858_31_string_components, LOCAL(1),
  // 
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(3863, 7),
  POS(3861, 7)
};

static TAB_NUM t_lambda_1331[] = {
  0, // locals
  0, // parameters
  //  undefined string_components
  LET, 2, var_undefined, var_3858_31_string_components, TAIL_CALL,
  POS(3867, 7)
};

static TAB_NUM t_func_parse_string_components[] = {
  2, // locals
  0, // parameters
  // cond $rest $expr
  var_cond, 2, lambda_1332, lambda_1334, 2, LOCAL(2), var_3870_12_expr,
  // cond
  var_cond, 3, lambda_1336, lambda_1338, lambda_1340, 1, LOCAL(1),
  // ->
  LET, 2, LOCAL(2), LOCAL(1), TAIL_CALL,
  POS(3870, 3),
  POS(3882, 5),
  POS(3880, 3)
};

static TAB_NUM t_lambda_1332[] = {
  2, // locals
  0, // parameters
  // text(1) == '"'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '"'
  var_std__equal, 2, LOCAL(1), chr_34, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_1333, TAIL_CALL,
  POS(3872, 7),
  POS(3872, 7),
  POS(3871, 7)
};

static TAB_NUM t_lambda_1333[] = {
  1, // locals
  0, // parameters
  // range(text 2 -1) empty_list
  var_range, 3, var_text, num_2, minus_num_1, 1, LOCAL(1),
  //  range(text 2 -1) empty_list
  LET, 2, LOCAL(1), var_empty_list, TAIL_CALL,
  POS(3873, 10),
  POS(3873, 9)
};

static TAB_NUM t_lambda_1334[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_1335, TAIL_CALL,
  POS(3874, 7)
};

static TAB_NUM t_lambda_1335[] = {
  0, // locals
  0, // parameters
  // !expected "string components"
  LET, 1, str_string_component, 1, var_expected,
  // !at text
  LET, 1, var_text, 1, var_at,
  // parse_some_string_components
  func_parse_some_string_components, 0, TAIL_CALL,
  POS(3877, 9),
  POS(3878, 9),
  POS(3879, 9)
};

static TAB_NUM t_lambda_1336[] = {
  1, // locals
  0, // parameters
  // is_undefined -> empty_list
  var_is_undefined, 1, var_3870_12_expr, 1, LOCAL(1),
  //  expr.is_undefined -> empty_list
  LET, 2, LOCAL(1), lambda_1337, TAIL_CALL,
  POS(3883, 15),
  POS(3883, 9)
};

static TAB_NUM t_lambda_1337[] = {
  0, // locals
  0, // parameters
  //  empty_list
  LET, 1, var_empty_list, TAIL_CALL,
  POS(3883, 30)
};

static TAB_NUM t_lambda_1338[] = {
  1, // locals
  0, // parameters
  // is_a_list -> expr
  var_is_a_list, 1, var_3870_12_expr, 1, LOCAL(1),
  //  expr.is_a_list -> expr
  LET, 2, LOCAL(1), lambda_1339, TAIL_CALL,
  POS(3884, 15),
  POS(3884, 9)
};

static TAB_NUM t_lambda_1339[] = {
  0, // locals
  0, // parameters
  //  expr
  LET, 1, var_3870_12_expr, TAIL_CALL,
  POS(3884, 27)
};

static TAB_NUM t_lambda_1340[] = {
  0, // locals
  0, // parameters
  //  true -> list(expr)
  LET, 2, var_true, lambda_1341, TAIL_CALL,
  POS(3885, 9)
};

static TAB_NUM t_lambda_1341[] = {
  1, // locals
  0, // parameters
  // list(expr)
  var_list, 1, var_3870_12_expr, 1, LOCAL(1),
  //  list(expr)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(3885, 18),
  POS(3885, 17)
};

static TAB_NUM t_func_parse_some_string_components[] = {
  2, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, LOCAL(2),
  // parse_string_component !text $string_component
  func_parse_string_component, 0, 2, var_text, var_3889_30_string_component,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_63_text_is_defined, lambda_1346, TAIL_CALL,
  POS(3888, 3),
  POS(3889, 3),
  POS(3891, 10),
  POS(3890, 3)
};

static TAB_NUM t_lambda_63_text_is_defined[] = {
  1, // locals
  0, // parameters
  // parse_string_components !text $string_components
  func_parse_string_components, 0, 2, var_text, var_3892_31_string_components,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1342, lambda_1345, TAIL_CALL,
  POS(3892, 7),
  POS(3894, 14),
  POS(3893, 7)
};

static TAB_NUM t_lambda_1342[] = {
  1, // locals
  0, // parameters
  // is_defined
  var_is_defined, 1, var_3892_31_string_components, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1343, lambda_1344, TAIL_CALL,
  POS(3897, 31),
  POS(3896, 11)
};

static TAB_NUM t_lambda_1343[] = {
  3, // locals
  0, // parameters
  // to_list
  func_to_list, 1, var_3889_30_string_component, 1, LOCAL(1),
  // to_list
  func_to_list, 1, var_3892_31_string_components, 1, LOCAL(2),
  // append
  var_append, 2, LOCAL(1), LOCAL(2), 1, LOCAL(3),
  // 
  LET, 2, var_text, LOCAL(3), TAIL_CALL,
  POS(3901, 34),
  POS(3902, 35),
  POS(3900, 15),
  POS(3898, 15)
};

static TAB_NUM t_lambda_1344[] = {
  1, // locals
  0, // parameters
  // to_list
  func_to_list, 1, var_3889_30_string_component, 1, LOCAL(1),
  //  text string_component.to_list
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(3903, 38),
  POS(3903, 15)
};

static TAB_NUM t_lambda_1345[] = {
  0, // locals
  0, // parameters
  //  undefined string_components
  LET, 2, var_undefined, var_3892_31_string_components, TAIL_CALL,
  POS(3904, 11)
};

static TAB_NUM t_lambda_1346[] = {
  0, // locals
  0, // parameters
  //  undefined string_component
  LET, 2, var_undefined, var_3889_30_string_component, TAIL_CALL,
  POS(3905, 7)
};

static TAB_NUM t_func_parse_string_component[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 5, lambda_1347, lambda_1350, lambda_1353, lambda_1356, lambda_1358, TAIL_CALL,
  POS(3908, 3)
};

static TAB_NUM t_lambda_1347[] = {
  3, // locals
  0, // parameters
  // text(1) == '@@'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '@@'
  var_std__equal, 2, LOCAL(1), chr_64, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_1348, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_1349, TAIL_CALL,
  POS(3911, 9),
  POS(3911, 9),
  POS(3910, 9),
  POS(3909, 7)
};

static TAB_NUM t_lambda_1348[] = {
  2, // locals
  0, // parameters
  // text(2) == '@@'
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '@@'
  var_std__equal, 2, LOCAL(1), chr_64, 1, LOCAL(2),
  // text(2) == '@@'
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(3912, 9),
  POS(3912, 9),
  POS(3912, 9)
};

static TAB_NUM t_lambda_1349[] = {
  0, // locals
  0, // parameters
  // range &text 3 -1
  var_range, 3, var_text, num_3, minus_num_1, 1, var_text,
  // parse_at_character_without_prefix
  func_parse_at_character_without_prefix, 0, TAIL_CALL,
  POS(3914, 9),
  POS(3915, 9)
};

static TAB_NUM t_lambda_1350[] = {
  3, // locals
  0, // parameters
  // text(1) == '@@'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '@@'
  var_std__equal, 2, LOCAL(1), chr_64, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_1351, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_1352, TAIL_CALL,
  POS(3918, 9),
  POS(3918, 9),
  POS(3917, 9),
  POS(3916, 7)
};

static TAB_NUM t_lambda_1351[] = {
  2, // locals
  0, // parameters
  // text(2) == ';'
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == ';'
  var_std__equal, 2, LOCAL(1), chr_59, 1, LOCAL(2),
  // text(2) == ';'
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(3919, 9),
  POS(3919, 9),
  POS(3919, 9)
};

static TAB_NUM t_lambda_1352[] = {
  0, // locals
  0, // parameters
  // range &text 3 -1
  var_range, 3, var_text, num_3, minus_num_1, 1, var_text,
  // parse_tagged_empty_character_without_prefix
  func_parse_tagged_empty_character_without_prefix, 0, TAIL_CALL,
  POS(3921, 9),
  POS(3922, 9)
};

static TAB_NUM t_lambda_1353[] = {
  3, // locals
  0, // parameters
  // text(1) == '@@'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '@@'
  var_std__equal, 2, LOCAL(1), chr_64, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_1354, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_1355, TAIL_CALL,
  POS(3925, 9),
  POS(3925, 9),
  POS(3924, 9),
  POS(3923, 7)
};

static TAB_NUM t_lambda_1354[] = {
  2, // locals
  0, // parameters
  // text(2) == '('
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '('
  var_std__equal, 2, LOCAL(1), chr_40, 1, LOCAL(2),
  // text(2) == '('
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(3926, 9),
  POS(3926, 9),
  POS(3926, 9)
};

static TAB_NUM t_lambda_1355[] = {
  0, // locals
  0, // parameters
  // range &text 3 -1
  var_range, 3, var_text, num_3, minus_num_1, 1, var_text,
  // parse_escape_expression_without_prefix
  func_parse_escape_expression_without_prefix, 0, TAIL_CALL,
  POS(3928, 9),
  POS(3929, 9)
};

static TAB_NUM t_lambda_1356[] = {
  2, // locals
  0, // parameters
  // text(1) == '@@'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '@@'
  var_std__equal, 2, LOCAL(1), chr_64, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_1357, TAIL_CALL,
  POS(3931, 7),
  POS(3931, 7),
  POS(3930, 7)
};

static TAB_NUM t_lambda_1357[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_special_character
  func_parse_special_character, 0, TAIL_CALL,
  POS(3933, 9),
  POS(3934, 9)
};

static TAB_NUM t_lambda_1358[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_1359, TAIL_CALL,
  POS(3935, 7)
};

static TAB_NUM t_lambda_1359[] = {
  0, // locals
  0, // parameters
  // !expected "string component"
  LET, 1, str_string_component_2, 1, var_expected,
  // !at text
  LET, 1, var_text, 1, var_at,
  // parse_character_sequence
  func_parse_character_sequence, 0, TAIL_CALL,
  POS(3938, 9),
  POS(3939, 9),
  POS(3940, 9)
};

static TAB_NUM t_func_parse_character_sequence[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_3943_1_position,
  // !str text
  LET, 1, var_text, 1, var_str,
  // parse_string_characters !text $string_characters
  func_parse_string_characters, 0, 2, var_text, var_3945_31_string_characters,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1360, lambda_1361, TAIL_CALL,
  POS(3943, 3),
  POS(3944, 3),
  POS(3945, 3),
  POS(3947, 10),
  POS(3946, 3)
};

static TAB_NUM t_lambda_1360[] = {
  1, // locals
  0, // parameters
  // funky_types::character_sequence
  LET, -3, var_funky_types__character_sequence, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_3943_1_position, var_funky__characters_of, var_3945_31_string_characters, LOCAL(1),
  // 
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(3950, 7),
  POS(3948, 7)
};

static TAB_NUM t_lambda_1361[] = {
  0, // locals
  0, // parameters
  //  undefined string_characters
  LET, 2, var_undefined, var_3945_31_string_characters, TAIL_CALL,
  POS(3954, 7)
};

static TAB_NUM t_func_parse_string_characters[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 2, lambda_1362, lambda_1366, TAIL_CALL,
  POS(3957, 3)
};

static TAB_NUM t_lambda_1362[] = {
  4, // locals
  0, // parameters
  // text(1) != '@nl;' && text(1) != '@@' && text(1) != '"'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) != '@nl;' && text(1) != '@@' && text(1) != '"'
  var_std__equal, 2, LOCAL(1), chr_10, 1, LOCAL(2),
  // text(1) != '@nl;' && text(1) != '@@' && text(1) != '"'
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) != '@nl;' && text(1) != '@@' && text(1) != '"'
  var_std__and, 2, LOCAL(3), lambda_1363, 1, LOCAL(4),
  // 
  LET, 2, LOCAL(4), lambda_1365, TAIL_CALL,
  POS(3959, 7),
  POS(3959, 7),
  POS(3959, 7),
  POS(3959, 7),
  POS(3958, 7)
};

static TAB_NUM t_lambda_1363[] = {
  4, // locals
  0, // parameters
  // text(1) != '@@' && text(1) != '"'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) != '@@' && text(1) != '"'
  var_std__equal, 2, LOCAL(1), chr_64, 1, LOCAL(2),
  // text(1) != '@@' && text(1) != '"'
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) != '@@' && text(1) != '"'
  var_std__and, 2, LOCAL(3), lambda_1364, 1, LOCAL(4),
  // text(1) != '@@' && text(1) != '"'
  LET, 1, LOCAL(4), TAIL_CALL,
  POS(3959, 28),
  POS(3959, 28),
  POS(3959, 28),
  POS(3959, 28),
  POS(3959, 28)
};

static TAB_NUM t_lambda_1364[] = {
  3, // locals
  0, // parameters
  // text(1) != '"'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) != '"'
  var_std__equal, 2, LOCAL(1), chr_34, 1, LOCAL(2),
  // text(1) != '"'
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) != '"'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(3959, 47),
  POS(3959, 47),
  POS(3959, 47),
  POS(3959, 47)
};

static TAB_NUM t_lambda_1365[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_more_string_characters
  func_parse_more_string_characters, 0, TAIL_CALL,
  POS(3961, 9),
  POS(3962, 9)
};

static TAB_NUM t_lambda_1366[] = {
  0, // locals
  0, // parameters
  //  true:
  LET, 2, var_true, lambda_1367, TAIL_CALL,
  POS(3963, 7)
};

static TAB_NUM t_lambda_1367[] = {
  0, // locals
  0, // parameters
  // syntax_error "string characters"
  func_syntax_error, 1, str_string_character, TAIL_CALL,
  POS(3964, 7)
};

static TAB_NUM t_func_parse_more_string_characters[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 2, lambda_1368, lambda_1372, TAIL_CALL,
  POS(3967, 3)
};

static TAB_NUM t_lambda_1368[] = {
  4, // locals
  0, // parameters
  // text(1) != '@nl;' && text(1) != '@@' && text(1) != '"'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) != '@nl;' && text(1) != '@@' && text(1) != '"'
  var_std__equal, 2, LOCAL(1), chr_10, 1, LOCAL(2),
  // text(1) != '@nl;' && text(1) != '@@' && text(1) != '"'
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) != '@nl;' && text(1) != '@@' && text(1) != '"'
  var_std__and, 2, LOCAL(3), lambda_1369, 1, LOCAL(4),
  // 
  LET, 2, LOCAL(4), lambda_1371, TAIL_CALL,
  POS(3969, 7),
  POS(3969, 7),
  POS(3969, 7),
  POS(3969, 7),
  POS(3968, 7)
};

static TAB_NUM t_lambda_1369[] = {
  4, // locals
  0, // parameters
  // text(1) != '@@' && text(1) != '"'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) != '@@' && text(1) != '"'
  var_std__equal, 2, LOCAL(1), chr_64, 1, LOCAL(2),
  // text(1) != '@@' && text(1) != '"'
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) != '@@' && text(1) != '"'
  var_std__and, 2, LOCAL(3), lambda_1370, 1, LOCAL(4),
  // text(1) != '@@' && text(1) != '"'
  LET, 1, LOCAL(4), TAIL_CALL,
  POS(3969, 28),
  POS(3969, 28),
  POS(3969, 28),
  POS(3969, 28),
  POS(3969, 28)
};

static TAB_NUM t_lambda_1370[] = {
  3, // locals
  0, // parameters
  // text(1) != '"'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) != '"'
  var_std__equal, 2, LOCAL(1), chr_34, 1, LOCAL(2),
  // text(1) != '"'
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) != '"'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(3969, 47),
  POS(3969, 47),
  POS(3969, 47),
  POS(3969, 47)
};

static TAB_NUM t_lambda_1371[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_more_string_characters
  func_parse_more_string_characters, 0, TAIL_CALL,
  POS(3971, 9),
  POS(3972, 9)
};

static TAB_NUM t_lambda_1372[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_1373, TAIL_CALL,
  POS(3973, 7)
};

static TAB_NUM t_lambda_1373[] = {
  4, // locals
  0, // parameters
  // length_of(str)-length_of(text))
  var_length_of, 1, var_str, 1, LOCAL(1),
  // length_of(text))
  var_length_of, 1, var_text, 1, LOCAL(2),
  // length_of(str)-length_of(text))
  var_std__minus, 2, LOCAL(1), LOCAL(2), 1, LOCAL(3),
  // range(str 1 length_of(str)-length_of(text))
  var_range, 3, var_str, num_1, LOCAL(3), 1, LOCAL(4),
  //  text range(str 1 length_of(str)-length_of(text))
  LET, 2, var_text, LOCAL(4), TAIL_CALL,
  POS(3975, 27),
  POS(3975, 42),
  POS(3975, 27),
  POS(3975, 15),
  POS(3975, 9)
};

static TAB_NUM t_func_parse_multiline_string_literal_without_prefix[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_3978_1_position,
  // $multiline_string_components parse_lines(funky::parse_multiline_string_components_group)
  func_parse_lines, 1, var_funky__parse_multiline_string_components_group, 1, var_3979_1_multiline_string_components,
  // $error find_first(multiline_string_components is_an_error)
  var_find_first, 2, var_3979_1_multiline_string_components, var_is_an_error, 1, var_3980_1_error,
  // is_an_error
  var_is_an_error, 1, var_3980_1_error, 1, LOCAL(1),
  // if error.is_an_error
  var_if, 3, LOCAL(1), lambda_1374, lambda_1375, TAIL_CALL,
  POS(3978, 3),
  POS(3979, 3),
  POS(3980, 3),
  POS(3981, 12),
  POS(3981, 3)
};

static TAB_NUM t_lambda_1374[] = {
  0, // locals
  0, // parameters
  //  undefined error
  LET, 2, var_undefined, var_3980_1_error, TAIL_CALL,
  POS(3982, 7)
};

static TAB_NUM t_lambda_1375[] = {
  1, // locals
  0, // parameters
  // funky_types::string_literal
  LET, -3, var_funky_types__string_literal, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_3978_1_position, var_funky__components_of, var_3979_1_multiline_string_components, LOCAL(1),
  // 
  LET, 2, string_1, LOCAL(1), TAIL_CALL,
  POS(3985, 7),
  POS(3983, 7)
};

static TAB_NUM t_func_parse_multiline_string_components[] = {
  2, // locals
  0, // parameters
  // cond $rest $expr
  var_cond, 3, lambda_1376, lambda_1379, lambda_1381, 2, LOCAL(2), var_3991_12_expr,
  // cond
  var_cond, 3, lambda_1383, lambda_1385, lambda_1387, 1, LOCAL(1),
  // ->
  LET, 2, LOCAL(2), LOCAL(1), TAIL_CALL,
  POS(3991, 3),
  POS(4011, 5),
  POS(4009, 3)
};

static TAB_NUM t_lambda_1376[] = {
  3, // locals
  0, // parameters
  // text(1) == '@@'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '@@'
  var_std__equal, 2, LOCAL(1), chr_64, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_1377, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_1378, TAIL_CALL,
  POS(3994, 9),
  POS(3994, 9),
  POS(3993, 9),
  POS(3992, 7)
};

static TAB_NUM t_lambda_1377[] = {
  2, // locals
  0, // parameters
  // text(2) == '@nl;'
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '@nl;'
  var_std__equal, 2, LOCAL(1), chr_10, 1, LOCAL(2),
  // text(2) == '@nl;'
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(3995, 9),
  POS(3995, 9),
  POS(3995, 9)
};

static TAB_NUM t_lambda_1378[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_string_line_end_without_prefix
  func_parse_string_line_end_without_prefix, 0, TAIL_CALL,
  POS(3997, 9),
  POS(3998, 9)
};

static TAB_NUM t_lambda_1379[] = {
  2, // locals
  0, // parameters
  // text(1) == '@nl;'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '@nl;'
  var_std__equal, 2, LOCAL(1), chr_10, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_1380, TAIL_CALL,
  POS(4000, 7),
  POS(4000, 7),
  POS(3999, 7)
};

static TAB_NUM t_lambda_1380[] = {
  0, // locals
  0, // parameters
  // parse_newline_without_prefix
  func_parse_newline_without_prefix, 0, TAIL_CALL,
  POS(4002, 9)
};

static TAB_NUM t_lambda_1381[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_1382, TAIL_CALL,
  POS(4003, 7)
};

static TAB_NUM t_lambda_1382[] = {
  0, // locals
  0, // parameters
  // !expected "multiline string components"
  LET, 1, str_multiline_string, 1, var_expected,
  // !at text
  LET, 1, var_text, 1, var_at,
  // parse_some_string_line_components
  func_parse_some_string_line_components, 0, TAIL_CALL,
  POS(4006, 9),
  POS(4007, 9),
  POS(4008, 9)
};

static TAB_NUM t_lambda_1383[] = {
  1, // locals
  0, // parameters
  // is_undefined -> empty_list
  var_is_undefined, 1, var_3991_12_expr, 1, LOCAL(1),
  //  expr.is_undefined -> empty_list
  LET, 2, LOCAL(1), lambda_1384, TAIL_CALL,
  POS(4012, 15),
  POS(4012, 9)
};

static TAB_NUM t_lambda_1384[] = {
  0, // locals
  0, // parameters
  //  empty_list
  LET, 1, var_empty_list, TAIL_CALL,
  POS(4012, 30)
};

static TAB_NUM t_lambda_1385[] = {
  1, // locals
  0, // parameters
  // is_a_list -> expr
  var_is_a_list, 1, var_3991_12_expr, 1, LOCAL(1),
  //  expr.is_a_list -> expr
  LET, 2, LOCAL(1), lambda_1386, TAIL_CALL,
  POS(4013, 15),
  POS(4013, 9)
};

static TAB_NUM t_lambda_1386[] = {
  0, // locals
  0, // parameters
  //  expr
  LET, 1, var_3991_12_expr, TAIL_CALL,
  POS(4013, 27)
};

static TAB_NUM t_lambda_1387[] = {
  0, // locals
  0, // parameters
  //  true -> list(expr)
  LET, 2, var_true, lambda_1388, TAIL_CALL,
  POS(4014, 9)
};

static TAB_NUM t_lambda_1388[] = {
  1, // locals
  0, // parameters
  // list(expr)
  var_list, 1, var_3991_12_expr, 1, LOCAL(1),
  //  list(expr)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(4014, 18),
  POS(4014, 17)
};

static TAB_NUM t_func_parse_newline_without_prefix[] = {
  2, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, LOCAL(2),
  // funky_types::newline
  LET, -2, var_funky_types__newline, var_funky__source_group_of, var_current_group, var_funky__source_position_of, LOCAL(2), LOCAL(1),
  // ->
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(4017, 3),
  POS(4020, 5),
  POS(4018, 3)
};

static TAB_NUM t_func_parse_some_string_line_components[] = {
  2, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, LOCAL(2),
  // parse_string_line_component !text $string_line_component
  func_parse_string_line_component, 0, 2, var_text, var_4026_35_string_line_component,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_64_text_is_defined, lambda_1393, TAIL_CALL,
  POS(4025, 3),
  POS(4026, 3),
  POS(4028, 10),
  POS(4027, 3)
};

static TAB_NUM t_lambda_64_text_is_defined[] = {
  1, // locals
  0, // parameters
  // parse_multiline_string_components !text $multiline_string_components
  func_parse_multiline_string_components, 0, 2, var_text, var_4029_41_multiline_string_components,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1389, lambda_1392, TAIL_CALL,
  POS(4029, 7),
  POS(4031, 14),
  POS(4030, 7)
};

static TAB_NUM t_lambda_1389[] = {
  1, // locals
  0, // parameters
  // is_defined
  var_is_defined, 1, var_4029_41_multiline_string_components, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1390, lambda_1391, TAIL_CALL,
  POS(4034, 41),
  POS(4033, 11)
};

static TAB_NUM t_lambda_1390[] = {
  3, // locals
  0, // parameters
  // to_list
  func_to_list, 1, var_4026_35_string_line_component, 1, LOCAL(1),
  // to_list
  func_to_list, 1, var_4029_41_multiline_string_components, 1, LOCAL(2),
  // append
  var_append, 2, LOCAL(1), LOCAL(2), 1, LOCAL(3),
  // 
  LET, 2, var_text, LOCAL(3), TAIL_CALL,
  POS(4038, 39),
  POS(4039, 45),
  POS(4037, 15),
  POS(4035, 15)
};

static TAB_NUM t_lambda_1391[] = {
  1, // locals
  0, // parameters
  // to_list
  func_to_list, 1, var_4026_35_string_line_component, 1, LOCAL(1),
  //  text string_line_component.to_list
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(4040, 43),
  POS(4040, 15)
};

static TAB_NUM t_lambda_1392[] = {
  0, // locals
  0, // parameters
  //  undefined multiline_string_components
  LET, 2, var_undefined, var_4029_41_multiline_string_components, TAIL_CALL,
  POS(4041, 11)
};

static TAB_NUM t_lambda_1393[] = {
  0, // locals
  0, // parameters
  //  undefined string_line_component
  LET, 2, var_undefined, var_4026_35_string_line_component, TAIL_CALL,
  POS(4042, 7)
};

static TAB_NUM t_func_parse_string_line_component[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 5, lambda_1394, lambda_1397, lambda_1400, lambda_1403, lambda_1405, TAIL_CALL,
  POS(4045, 3)
};

static TAB_NUM t_lambda_1394[] = {
  3, // locals
  0, // parameters
  // text(1) == '@@'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '@@'
  var_std__equal, 2, LOCAL(1), chr_64, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_1395, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_1396, TAIL_CALL,
  POS(4048, 9),
  POS(4048, 9),
  POS(4047, 9),
  POS(4046, 7)
};

static TAB_NUM t_lambda_1395[] = {
  2, // locals
  0, // parameters
  // text(2) == '@@'
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '@@'
  var_std__equal, 2, LOCAL(1), chr_64, 1, LOCAL(2),
  // text(2) == '@@'
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(4049, 9),
  POS(4049, 9),
  POS(4049, 9)
};

static TAB_NUM t_lambda_1396[] = {
  0, // locals
  0, // parameters
  // range &text 3 -1
  var_range, 3, var_text, num_3, minus_num_1, 1, var_text,
  // parse_at_character_without_prefix
  func_parse_at_character_without_prefix, 0, TAIL_CALL,
  POS(4051, 9),
  POS(4052, 9)
};

static TAB_NUM t_lambda_1397[] = {
  3, // locals
  0, // parameters
  // text(1) == '@@'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '@@'
  var_std__equal, 2, LOCAL(1), chr_64, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_1398, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_1399, TAIL_CALL,
  POS(4055, 9),
  POS(4055, 9),
  POS(4054, 9),
  POS(4053, 7)
};

static TAB_NUM t_lambda_1398[] = {
  2, // locals
  0, // parameters
  // text(2) == ';'
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == ';'
  var_std__equal, 2, LOCAL(1), chr_59, 1, LOCAL(2),
  // text(2) == ';'
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(4056, 9),
  POS(4056, 9),
  POS(4056, 9)
};

static TAB_NUM t_lambda_1399[] = {
  0, // locals
  0, // parameters
  // range &text 3 -1
  var_range, 3, var_text, num_3, minus_num_1, 1, var_text,
  // parse_tagged_empty_character_without_prefix
  func_parse_tagged_empty_character_without_prefix, 0, TAIL_CALL,
  POS(4058, 9),
  POS(4059, 9)
};

static TAB_NUM t_lambda_1400[] = {
  3, // locals
  0, // parameters
  // text(1) == '@@'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '@@'
  var_std__equal, 2, LOCAL(1), chr_64, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_1401, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_1402, TAIL_CALL,
  POS(4062, 9),
  POS(4062, 9),
  POS(4061, 9),
  POS(4060, 7)
};

static TAB_NUM t_lambda_1401[] = {
  2, // locals
  0, // parameters
  // text(2) == '('
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '('
  var_std__equal, 2, LOCAL(1), chr_40, 1, LOCAL(2),
  // text(2) == '('
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(4063, 9),
  POS(4063, 9),
  POS(4063, 9)
};

static TAB_NUM t_lambda_1402[] = {
  0, // locals
  0, // parameters
  // range &text 3 -1
  var_range, 3, var_text, num_3, minus_num_1, 1, var_text,
  // parse_escape_expression_without_prefix
  func_parse_escape_expression_without_prefix, 0, TAIL_CALL,
  POS(4065, 9),
  POS(4066, 9)
};

static TAB_NUM t_lambda_1403[] = {
  2, // locals
  0, // parameters
  // text(1) == '@@'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '@@'
  var_std__equal, 2, LOCAL(1), chr_64, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_1404, TAIL_CALL,
  POS(4068, 7),
  POS(4068, 7),
  POS(4067, 7)
};

static TAB_NUM t_lambda_1404[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_special_character
  func_parse_special_character, 0, TAIL_CALL,
  POS(4070, 9),
  POS(4071, 9)
};

static TAB_NUM t_lambda_1405[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_1406, TAIL_CALL,
  POS(4072, 7)
};

static TAB_NUM t_lambda_1406[] = {
  0, // locals
  0, // parameters
  // !expected "string line component"
  LET, 1, str_string_line_comp, 1, var_expected,
  // !at text
  LET, 1, var_text, 1, var_at,
  // parse_string_line_character_sequence
  func_parse_string_line_character_sequence, 0, TAIL_CALL,
  POS(4075, 9),
  POS(4076, 9),
  POS(4077, 9)
};

static TAB_NUM t_func_parse_string_line_end_without_prefix[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, LOCAL(1),
  // ->
  LET, 2, var_text, var_undefined, TAIL_CALL,
  POS(4080, 3),
  POS(4081, 3)
};

static TAB_NUM t_func_parse_at_character_without_prefix[] = {
  2, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, LOCAL(2),
  // funky_types::at_character
  LET, -2, var_funky_types__at_character, var_funky__source_group_of, var_current_group, var_funky__source_position_of, LOCAL(2), LOCAL(1),
  // ->
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(4086, 3),
  POS(4089, 5),
  POS(4087, 3)
};

static TAB_NUM t_func_parse_tagged_empty_character_without_prefix[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_4094_1_position,
  // parse_empty_character_without_prefix !text $empty_character
  func_parse_empty_character_without_prefix, 0, 2, var_text, var_4095_44_empty_character,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1407, lambda_1408, TAIL_CALL,
  POS(4094, 3),
  POS(4095, 3),
  POS(4097, 10),
  POS(4096, 3)
};

static TAB_NUM t_lambda_1407[] = {
  1, // locals
  0, // parameters
  // funky_types::tagged_empty_character
  LET, -3, var_funky_types__tagged_empty_character, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_4094_1_position, var_funky__character_of, var_4095_44_empty_character, LOCAL(1),
  // 
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(4100, 7),
  POS(4098, 7)
};

static TAB_NUM t_lambda_1408[] = {
  0, // locals
  0, // parameters
  //  undefined empty_character
  LET, 2, var_undefined, var_4095_44_empty_character, TAIL_CALL,
  POS(4104, 7)
};

static TAB_NUM t_func_parse_empty_character_without_prefix[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, LOCAL(1),
  // ->
  LET, 2, var_text, var_undefined, TAIL_CALL,
  POS(4107, 3),
  POS(4108, 3)
};

static TAB_NUM t_func_parse_escape_expression_without_prefix[] = {
  2, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, LOCAL(2),
  // parse_expression funky_types::escape_expression !text $expression
  func_parse_expression, 1, var_funky_types__escape_expression, 2, var_text, var_4114_55_expression,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_65_text_is_defined, lambda_1411, TAIL_CALL,
  POS(4113, 3),
  POS(4114, 3),
  POS(4116, 10),
  POS(4115, 3)
};

static TAB_NUM t_lambda_65_text_is_defined[] = {
  2, // locals
  0, // parameters
  // text(1) == ')'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == ')'
  var_std__equal, 2, LOCAL(1), chr_41, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_1409, lambda_1410, TAIL_CALL,
  POS(4118, 9),
  POS(4118, 9),
  POS(4117, 7)
};

static TAB_NUM t_lambda_1409[] = {
  1, // locals
  0, // parameters
  // range(text 2 -1) expression
  var_range, 3, var_text, num_2, minus_num_1, 1, LOCAL(1),
  //  range(text 2 -1) expression
  LET, 2, LOCAL(1), var_4114_55_expression, TAIL_CALL,
  POS(4119, 12),
  POS(4119, 11)
};

static TAB_NUM t_lambda_1410[] = {
  0, // locals
  0, // parameters
  // syntax_error "')'"
  func_syntax_error, 1, string_6, TAIL_CALL,
  POS(4121, 11)
};

static TAB_NUM t_lambda_1411[] = {
  0, // locals
  0, // parameters
  //  undefined expression
  LET, 2, var_undefined, var_4114_55_expression, TAIL_CALL,
  POS(4122, 7)
};

static TAB_NUM t_func_parse_special_character[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 2, lambda_1412, lambda_1417, TAIL_CALL,
  POS(4125, 3)
};

static TAB_NUM t_lambda_1412[] = {
  5, // locals
  0, // parameters
  // text(1) >= 'a' && text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z')
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) >= 'a' && text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z')
  var_std__less, 2, LOCAL(1), chr_97, 1, LOCAL(2),
  // text(1) >= 'a' && text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) >= 'a' && text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z')
  var_std__and, 2, LOCAL(3), lambda_1413, 1, LOCAL(4),
  // text(1) >= 'a' && text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z')
  var_std__or, 2, LOCAL(4), lambda_1414, 1, LOCAL(5),
  // 
  LET, 2, LOCAL(5), lambda_1416, TAIL_CALL,
  POS(4127, 8),
  POS(4127, 8),
  POS(4127, 8),
  POS(4127, 8),
  POS(4127, 8),
  POS(4126, 7)
};

static TAB_NUM t_lambda_1413[] = {
  3, // locals
  0, // parameters
  // text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z')
  var_text, 1, num_1, 1, LOCAL(1),
  // z') || (text(1) >= 'A' && text(1) <= 'Z')
  var_std__less, 2, chr_122, LOCAL(1), 1, LOCAL(2),
  // z') || (text(1) >= 'A' && text(1) <= 'Z')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z')
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(4127, 26),
  POS(4127, 38),
  POS(4127, 38),
  POS(4127, 26)
};

static TAB_NUM t_lambda_1414[] = {
  4, // locals
  0, // parameters
  // text(1) >= 'A' && text(1) <= 'Z')
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) >= 'A' && text(1) <= 'Z')
  var_std__less, 2, LOCAL(1), chr_65, 1, LOCAL(2),
  // text(1) >= 'A' && text(1) <= 'Z')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) >= 'A' && text(1) <= 'Z')
  var_std__and, 2, LOCAL(3), lambda_1415, 1, LOCAL(4),
  // text(1) >= 'A' && text(1) <= 'Z')
  LET, 1, LOCAL(4), TAIL_CALL,
  POS(4127, 46),
  POS(4127, 46),
  POS(4127, 46),
  POS(4127, 46),
  POS(4127, 46)
};

static TAB_NUM t_lambda_1415[] = {
  3, // locals
  0, // parameters
  // text(1) <= 'Z')
  var_text, 1, num_1, 1, LOCAL(1),
  // Z')
  var_std__less, 2, chr_90, LOCAL(1), 1, LOCAL(2),
  // Z')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) <= 'Z')
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(4127, 64),
  POS(4127, 76),
  POS(4127, 76),
  POS(4127, 64)
};

static TAB_NUM t_lambda_1416[] = {
  0, // locals
  0, // parameters
  // !str text
  LET, 1, var_text, 1, var_str,
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_named_character_without_prefix
  func_parse_named_character_without_prefix, 0, TAIL_CALL,
  POS(4129, 9),
  POS(4130, 9),
  POS(4131, 9)
};

static TAB_NUM t_lambda_1417[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_1418, TAIL_CALL,
  POS(4132, 7)
};

static TAB_NUM t_lambda_1418[] = {
  0, // locals
  0, // parameters
  // !expected "special character"
  LET, 1, str_special_characte_2, 1, var_expected,
  // !at text
  LET, 1, var_text, 1, var_at,
  // parse_numeric_character
  func_parse_numeric_character, 0, TAIL_CALL,
  POS(4135, 9),
  POS(4136, 9),
  POS(4137, 9)
};

static TAB_NUM t_func_parse_named_character_without_prefix[] = {
  1, // locals
  0, // parameters
  // $position str
  LET, 1, var_str, 1, var_4140_1_position,
  // parse_more_character_name_characters !text $character_name
  func_parse_more_character_name_characters, 0, 2, var_text, var_4141_44_character_name,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_66_text_is_defined, lambda_1421, TAIL_CALL,
  POS(4140, 3),
  POS(4141, 3),
  POS(4143, 10),
  POS(4142, 3)
};

static TAB_NUM t_lambda_66_text_is_defined[] = {
  2, // locals
  0, // parameters
  // text(1) == ';'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == ';'
  var_std__equal, 2, LOCAL(1), chr_59, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_1419, lambda_1420, TAIL_CALL,
  POS(4145, 9),
  POS(4145, 9),
  POS(4144, 7)
};

static TAB_NUM t_lambda_1419[] = {
  2, // locals
  0, // parameters
  // range(text 2 -1)
  var_range, 3, var_text, num_2, minus_num_1, 1, LOCAL(1),
  // funky_types::named_character
  LET, -3, var_funky_types__named_character, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_4140_1_position, var_funky__name_of, var_4141_44_character_name, LOCAL(2),
  // 
  LET, 2, LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(4147, 11),
  POS(4148, 11),
  POS(4146, 11)
};

static TAB_NUM t_lambda_1420[] = {
  0, // locals
  0, // parameters
  // syntax_error "';'"
  func_syntax_error, 1, string_9, TAIL_CALL,
  POS(4153, 11)
};

static TAB_NUM t_lambda_1421[] = {
  0, // locals
  0, // parameters
  //  undefined character_name
  LET, 2, var_undefined, var_4141_44_character_name, TAIL_CALL,
  POS(4154, 7)
};

static TAB_NUM t_func_parse_numeric_character[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_4157_1_position,
  // !str text
  LET, 1, var_text, 1, var_str,
  // parse_digits !text $digits
  func_parse_digits, 0, 2, var_text, var_4159_20_digits,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_67_text_is_defined, lambda_1424, TAIL_CALL,
  POS(4157, 3),
  POS(4158, 3),
  POS(4159, 3),
  POS(4161, 10),
  POS(4160, 3)
};

static TAB_NUM t_lambda_67_text_is_defined[] = {
  2, // locals
  0, // parameters
  // text(1) == ';'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == ';'
  var_std__equal, 2, LOCAL(1), chr_59, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_1422, lambda_1423, TAIL_CALL,
  POS(4163, 9),
  POS(4163, 9),
  POS(4162, 7)
};

static TAB_NUM t_lambda_1422[] = {
  2, // locals
  0, // parameters
  // range(text 2 -1)
  var_range, 3, var_text, num_2, minus_num_1, 1, LOCAL(1),
  // funky_types::numeric_character
  LET, -3, var_funky_types__numeric_character, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_4157_1_position, var_funky__digits_of, var_4159_20_digits, LOCAL(2),
  // 
  LET, 2, LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(4165, 11),
  POS(4166, 11),
  POS(4164, 11)
};

static TAB_NUM t_lambda_1423[] = {
  0, // locals
  0, // parameters
  // syntax_error "';'"
  func_syntax_error, 1, string_9, TAIL_CALL,
  POS(4171, 11)
};

static TAB_NUM t_lambda_1424[] = {
  0, // locals
  0, // parameters
  //  undefined digits
  LET, 2, var_undefined, var_4159_20_digits, TAIL_CALL,
  POS(4172, 7)
};

static TAB_NUM t_func_parse_string_line_character_sequence[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_4175_1_position,
  // !str text
  LET, 1, var_text, 1, var_str,
  // parse_string_line_characters !text $string_line_characters
  func_parse_string_line_characters, 0, 2, var_text, var_4177_36_string_line_characters,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1425, lambda_1426, TAIL_CALL,
  POS(4175, 3),
  POS(4176, 3),
  POS(4177, 3),
  POS(4179, 10),
  POS(4178, 3)
};

static TAB_NUM t_lambda_1425[] = {
  1, // locals
  0, // parameters
  // funky_types::character_sequence
  LET, -3, var_funky_types__character_sequence, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_4175_1_position, var_funky__characters_of, var_4177_36_string_line_characters, LOCAL(1),
  // 
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(4182, 7),
  POS(4180, 7)
};

static TAB_NUM t_lambda_1426[] = {
  0, // locals
  0, // parameters
  //  undefined string_line_characters
  LET, 2, var_undefined, var_4177_36_string_line_characters, TAIL_CALL,
  POS(4186, 7)
};

static TAB_NUM t_func_parse_string_line_characters[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 2, lambda_1427, lambda_1430, TAIL_CALL,
  POS(4189, 3)
};

static TAB_NUM t_lambda_1427[] = {
  4, // locals
  0, // parameters
  // text(1) != '@nl;' && text(1) != '@@'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) != '@nl;' && text(1) != '@@'
  var_std__equal, 2, LOCAL(1), chr_10, 1, LOCAL(2),
  // text(1) != '@nl;' && text(1) != '@@'
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) != '@nl;' && text(1) != '@@'
  var_std__and, 2, LOCAL(3), lambda_1428, 1, LOCAL(4),
  // 
  LET, 2, LOCAL(4), lambda_1429, TAIL_CALL,
  POS(4191, 7),
  POS(4191, 7),
  POS(4191, 7),
  POS(4191, 7),
  POS(4190, 7)
};

static TAB_NUM t_lambda_1428[] = {
  3, // locals
  0, // parameters
  // text(1) != '@@'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) != '@@'
  var_std__equal, 2, LOCAL(1), chr_64, 1, LOCAL(2),
  // text(1) != '@@'
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) != '@@'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(4191, 28),
  POS(4191, 28),
  POS(4191, 28),
  POS(4191, 28)
};

static TAB_NUM t_lambda_1429[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_more_string_line_characters
  func_parse_more_string_line_characters, 0, TAIL_CALL,
  POS(4193, 9),
  POS(4194, 9)
};

static TAB_NUM t_lambda_1430[] = {
  0, // locals
  0, // parameters
  //  true:
  LET, 2, var_true, lambda_1431, TAIL_CALL,
  POS(4195, 7)
};

static TAB_NUM t_lambda_1431[] = {
  0, // locals
  0, // parameters
  // syntax_error "string line characters"
  func_syntax_error, 1, str_string_line_char, TAIL_CALL,
  POS(4196, 7)
};

static TAB_NUM t_func_parse_more_string_line_characters[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 2, lambda_1432, lambda_1435, TAIL_CALL,
  POS(4199, 3)
};

static TAB_NUM t_lambda_1432[] = {
  4, // locals
  0, // parameters
  // text(1) != '@nl;' && text(1) != '@@'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) != '@nl;' && text(1) != '@@'
  var_std__equal, 2, LOCAL(1), chr_10, 1, LOCAL(2),
  // text(1) != '@nl;' && text(1) != '@@'
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) != '@nl;' && text(1) != '@@'
  var_std__and, 2, LOCAL(3), lambda_1433, 1, LOCAL(4),
  // 
  LET, 2, LOCAL(4), lambda_1434, TAIL_CALL,
  POS(4201, 7),
  POS(4201, 7),
  POS(4201, 7),
  POS(4201, 7),
  POS(4200, 7)
};

static TAB_NUM t_lambda_1433[] = {
  3, // locals
  0, // parameters
  // text(1) != '@@'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) != '@@'
  var_std__equal, 2, LOCAL(1), chr_64, 1, LOCAL(2),
  // text(1) != '@@'
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) != '@@'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(4201, 28),
  POS(4201, 28),
  POS(4201, 28),
  POS(4201, 28)
};

static TAB_NUM t_lambda_1434[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_more_string_line_characters
  func_parse_more_string_line_characters, 0, TAIL_CALL,
  POS(4203, 9),
  POS(4204, 9)
};

static TAB_NUM t_lambda_1435[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_1436, TAIL_CALL,
  POS(4205, 7)
};

static TAB_NUM t_lambda_1436[] = {
  4, // locals
  0, // parameters
  // length_of(str)-length_of(text))
  var_length_of, 1, var_str, 1, LOCAL(1),
  // length_of(text))
  var_length_of, 1, var_text, 1, LOCAL(2),
  // length_of(str)-length_of(text))
  var_std__minus, 2, LOCAL(1), LOCAL(2), 1, LOCAL(3),
  // range(str 1 length_of(str)-length_of(text))
  var_range, 3, var_str, num_1, LOCAL(3), 1, LOCAL(4),
  //  text range(str 1 length_of(str)-length_of(text))
  LET, 2, var_text, LOCAL(4), TAIL_CALL,
  POS(4207, 27),
  POS(4207, 42),
  POS(4207, 27),
  POS(4207, 15),
  POS(4207, 9)
};

static TAB_NUM t_func_parse_unique_without_prefix[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_4210_1_position,
  // parse_trailing_remarks !text $trailing_remarks
  func_parse_trailing_remarks, 0, 2, var_text, var_4211_30_trailing_remarks,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1437, lambda_1438, TAIL_CALL,
  POS(4210, 3),
  POS(4211, 3),
  POS(4213, 10),
  POS(4212, 3)
};

static TAB_NUM t_lambda_1437[] = {
  1, // locals
  0, // parameters
  // funky_types::unique
  LET, -3, var_funky_types__unique, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_4210_1_position, var_funky__remarks_of, var_4211_30_trailing_remarks, LOCAL(1),
  // 
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(4216, 7),
  POS(4214, 7)
};

static TAB_NUM t_lambda_1438[] = {
  0, // locals
  0, // parameters
  //  undefined trailing_remarks
  LET, 2, var_undefined, var_4211_30_trailing_remarks, TAIL_CALL,
  POS(4220, 7)
};

static TAB_NUM t_func_parse_attribute_without_prefix[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_4223_1_position,
  // parse_trailing_remarks !text $trailing_remarks
  func_parse_trailing_remarks, 0, 2, var_text, var_4224_30_trailing_remarks,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1439, lambda_1440, TAIL_CALL,
  POS(4223, 3),
  POS(4224, 3),
  POS(4226, 10),
  POS(4225, 3)
};

static TAB_NUM t_lambda_1439[] = {
  1, // locals
  0, // parameters
  // funky_types::attribute
  LET, -3, var_funky_types__attribute, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_4223_1_position, var_funky__remarks_of, var_4224_30_trailing_remarks, LOCAL(1),
  // 
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(4229, 7),
  POS(4227, 7)
};

static TAB_NUM t_lambda_1440[] = {
  0, // locals
  0, // parameters
  //  undefined trailing_remarks
  LET, 2, var_undefined, var_4224_30_trailing_remarks, TAIL_CALL,
  POS(4233, 7)
};

static TAB_NUM t_func_parse_attribute_with_setter_without_prefix[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_4236_1_position,
  // parse_trailing_remarks !text $trailing_remarks
  func_parse_trailing_remarks, 0, 2, var_text, var_4237_30_trailing_remarks,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1441, lambda_1442, TAIL_CALL,
  POS(4236, 3),
  POS(4237, 3),
  POS(4239, 10),
  POS(4238, 3)
};

static TAB_NUM t_lambda_1441[] = {
  1, // locals
  0, // parameters
  // funky_types::attribute_with_setter
  LET, -3, var_funky_types__attribute_with_setter, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_4236_1_position, var_funky__remarks_of, var_4237_30_trailing_remarks, LOCAL(1),
  // 
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(4242, 7),
  POS(4240, 7)
};

static TAB_NUM t_lambda_1442[] = {
  0, // locals
  0, // parameters
  //  undefined trailing_remarks
  LET, 2, var_undefined, var_4237_30_trailing_remarks, TAIL_CALL,
  POS(4246, 7)
};

static TAB_NUM t_func_parse_body[] = {
  1, // locals
  -1, // parameters
  var_undefined, var_4250_0_derived_node,
  // $position text
  LET, 1, var_text, 1, var_4252_1_position,
  // parse_inline_parameters !text $inline_parameters
  func_parse_inline_parameters, 0, 2, var_text, var_4253_31_inline_parameters,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_68_text_is_defined, lambda_1446, TAIL_CALL,
  POS(4252, 3),
  POS(4253, 3),
  POS(4255, 10),
  POS(4254, 3)
};

static TAB_NUM t_lambda_68_text_is_defined[] = {
  1, // locals
  0, // parameters
  // parse_optional_line_end_remark !text $optional_line_end_remark
  func_parse_optional_line_end_remark, 0, 2, var_text, var_4256_38_optional_line_end_remark,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_69_text_is_defined, lambda_1445, TAIL_CALL,
  POS(4256, 7),
  POS(4258, 14),
  POS(4257, 7)
};

static TAB_NUM t_lambda_69_text_is_defined[] = {
  1, // locals
  0, // parameters
  // parse_body_statements !text $body_statements
  func_parse_body_statements, 0, 2, var_text, var_4259_29_body_statements,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1443, lambda_1444, TAIL_CALL,
  POS(4259, 11),
  POS(4261, 18),
  POS(4260, 11)
};

static TAB_NUM t_lambda_1443[] = {
  2, // locals
  0, // parameters
  // default_value(derived_node funky_types::body)
  var_default_value, 2, var_4250_0_derived_node, var_funky_types__body, 1, LOCAL(1),
  // default_value(derived_node funky_types::body)
  LET, -5, LOCAL(1), var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_4252_1_position, var_funky__parameters_of, var_4253_31_inline_parameters, var_funky__remark_of, var_4256_38_optional_line_end_remark, var_funky__statements_of, var_4259_29_body_statements, LOCAL(2),
  // 
  LET, 2, var_text, LOCAL(2), TAIL_CALL,
  POS(4264, 15),
  POS(4264, 15),
  POS(4262, 15)
};

static TAB_NUM t_lambda_1444[] = {
  0, // locals
  0, // parameters
  //  undefined body_statements
  LET, 2, var_undefined, var_4259_29_body_statements, TAIL_CALL,
  POS(4270, 15)
};

static TAB_NUM t_lambda_1445[] = {
  0, // locals
  0, // parameters
  //  undefined optional_line_end_remark
  LET, 2, var_undefined, var_4256_38_optional_line_end_remark, TAIL_CALL,
  POS(4271, 11)
};

static TAB_NUM t_lambda_1446[] = {
  0, // locals
  0, // parameters
  //  undefined inline_parameters
  LET, 2, var_undefined, var_4253_31_inline_parameters, TAIL_CALL,
  POS(4272, 7)
};

static TAB_NUM t_func_parse_optional_line_end_remark[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 2, lambda_1447, lambda_1450, TAIL_CALL,
  POS(4275, 3)
};

static TAB_NUM t_lambda_1447[] = {
  3, // locals
  0, // parameters
  // text(1) == ' '
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_1448, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_1449, TAIL_CALL,
  POS(4278, 9),
  POS(4278, 9),
  POS(4277, 9),
  POS(4276, 7)
};

static TAB_NUM t_lambda_1448[] = {
  2, // locals
  0, // parameters
  // text(2) == '#'
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '#'
  var_std__equal, 2, LOCAL(1), chr_35, 1, LOCAL(2),
  // text(2) == '#'
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(4279, 9),
  POS(4279, 9),
  POS(4279, 9)
};

static TAB_NUM t_lambda_1449[] = {
  0, // locals
  0, // parameters
  // range &text 3 -1
  var_range, 3, var_text, num_3, minus_num_1, 1, var_text,
  // parse_spaced_remark_without_prefix
  func_parse_spaced_remark_without_prefix, 0, TAIL_CALL,
  POS(4281, 9),
  POS(4282, 9)
};

static TAB_NUM t_lambda_1450[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_1451, TAIL_CALL,
  POS(4283, 7)
};

static TAB_NUM t_lambda_1451[] = {
  0, // locals
  0, // parameters
  //  text undefined
  LET, 2, var_text, var_undefined, TAIL_CALL,
  POS(4285, 9)
};

static TAB_NUM t_func_parse_body_statements[] = {
  2, // locals
  0, // parameters
  // cond $rest $expr
  var_cond, 2, lambda_1452, lambda_1454, 2, LOCAL(2), var_4288_12_expr,
  // cond
  var_cond, 3, lambda_1456, lambda_1458, lambda_1460, 1, LOCAL(1),
  // ->
  LET, 2, LOCAL(2), LOCAL(1), TAIL_CALL,
  POS(4288, 3),
  POS(4302, 5),
  POS(4300, 3)
};

static TAB_NUM t_lambda_1452[] = {
  2, // locals
  0, // parameters
  // text(1) == ' '
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_1453, TAIL_CALL,
  POS(4290, 7),
  POS(4290, 7),
  POS(4289, 7)
};

static TAB_NUM t_lambda_1453[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_line_end_statement_without_prefix
  func_parse_line_end_statement_without_prefix, 0, TAIL_CALL,
  POS(4292, 9),
  POS(4293, 9)
};

static TAB_NUM t_lambda_1454[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_1455, TAIL_CALL,
  POS(4294, 7)
};

static TAB_NUM t_lambda_1455[] = {
  0, // locals
  0, // parameters
  // !expected "body statements"
  LET, 1, str_body_statements, 1, var_expected,
  // !at text
  LET, 1, var_text, 1, var_at,
  // parse_statements
  func_parse_statements, 0, TAIL_CALL,
  POS(4297, 9),
  POS(4298, 9),
  POS(4299, 9)
};

static TAB_NUM t_lambda_1456[] = {
  1, // locals
  0, // parameters
  // is_undefined -> empty_list
  var_is_undefined, 1, var_4288_12_expr, 1, LOCAL(1),
  //  expr.is_undefined -> empty_list
  LET, 2, LOCAL(1), lambda_1457, TAIL_CALL,
  POS(4303, 15),
  POS(4303, 9)
};

static TAB_NUM t_lambda_1457[] = {
  0, // locals
  0, // parameters
  //  empty_list
  LET, 1, var_empty_list, TAIL_CALL,
  POS(4303, 30)
};

static TAB_NUM t_lambda_1458[] = {
  1, // locals
  0, // parameters
  // is_a_list -> expr
  var_is_a_list, 1, var_4288_12_expr, 1, LOCAL(1),
  //  expr.is_a_list -> expr
  LET, 2, LOCAL(1), lambda_1459, TAIL_CALL,
  POS(4304, 15),
  POS(4304, 9)
};

static TAB_NUM t_lambda_1459[] = {
  0, // locals
  0, // parameters
  //  expr
  LET, 1, var_4288_12_expr, TAIL_CALL,
  POS(4304, 27)
};

static TAB_NUM t_lambda_1460[] = {
  0, // locals
  0, // parameters
  //  true -> list(expr)
  LET, 2, var_true, lambda_1461, TAIL_CALL,
  POS(4305, 9)
};

static TAB_NUM t_lambda_1461[] = {
  1, // locals
  0, // parameters
  // list(expr)
  var_list, 1, var_4288_12_expr, 1, LOCAL(1),
  //  list(expr)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(4305, 18),
  POS(4305, 17)
};

static TAB_NUM t_func_parse_line_end_statement_without_prefix[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, LOCAL(1),
  // parse_statement
  func_parse_statement, 0, TAIL_CALL,
  POS(4308, 3),
  POS(4309, 3)
};

static TAB_NUM t_func_parse_inline_body_without_prefix[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_4312_1_position,
  // parse_inline_parameters !text $inline_parameters
  func_parse_inline_parameters, 0, 2, var_text, var_4313_31_inline_parameters,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_70_text_is_defined, lambda_1466, TAIL_CALL,
  POS(4312, 3),
  POS(4313, 3),
  POS(4315, 10),
  POS(4314, 3)
};

static TAB_NUM t_lambda_70_text_is_defined[] = {
  2, // locals
  0, // parameters
  // text(1) == ' ':
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == ' ':
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_1462, lambda_1465, TAIL_CALL,
  POS(4317, 9),
  POS(4317, 9),
  POS(4316, 7)
};

static TAB_NUM t_lambda_1462[] = {
  1, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_inline_statement !text $inline_statement
  func_parse_inline_statement, 0, 2, var_text, var_4319_30_inline_statement,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1463, lambda_1464, TAIL_CALL,
  POS(4318, 11),
  POS(4319, 11),
  POS(4321, 18),
  POS(4320, 11)
};

static TAB_NUM t_lambda_1463[] = {
  1, // locals
  0, // parameters
  // funky_types::inline_body
  LET, -4, var_funky_types__inline_body, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_4312_1_position, var_funky__parameters_of, var_4313_31_inline_parameters, var_funky__statement_of, var_4319_30_inline_statement, LOCAL(1),
  // 
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(4324, 15),
  POS(4322, 15)
};

static TAB_NUM t_lambda_1464[] = {
  0, // locals
  0, // parameters
  //  undefined inline_statement
  LET, 2, var_undefined, var_4319_30_inline_statement, TAIL_CALL,
  POS(4329, 15)
};

static TAB_NUM t_lambda_1465[] = {
  0, // locals
  0, // parameters
  // syntax_error "space character"
  func_syntax_error, 1, str_space_character, TAIL_CALL,
  POS(4331, 11)
};

static TAB_NUM t_lambda_1466[] = {
  0, // locals
  0, // parameters
  //  undefined inline_parameters
  LET, 2, var_undefined, var_4313_31_inline_parameters, TAIL_CALL,
  POS(4332, 7)
};

static TAB_NUM t_func_parse_statements[] = {
  3, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, LOCAL(3),
  // text == "@nl;" && subgroups.is_defined:
  var_std__equal, 2, var_text, string_2, 1, LOCAL(1),
  // text == "@nl;" && subgroups.is_defined:
  var_std__and, 2, LOCAL(1), lambda_1467, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_1468, lambda_1471, TAIL_CALL,
  POS(4335, 3),
  POS(4337, 5),
  POS(4337, 5),
  POS(4336, 3)
};

static TAB_NUM t_lambda_1467[] = {
  1, // locals
  0, // parameters
  // is_defined:
  var_is_defined, 1, var_subgroups, 1, LOCAL(1),
  // subgroups.is_defined:
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(4337, 33),
  POS(4337, 23)
};

static TAB_NUM t_lambda_1468[] = {
  1, // locals
  0, // parameters
  // $parameters_or_statement parse_groups(funky::parse_parameters_or_statement_group)
  func_parse_groups, 1, var_funky__parse_parameters_or_statement_group, 1, var_4338_1_parameters_or_statement,
  // $error find_first(parameters_or_statement is_an_error)
  var_find_first, 2, var_4338_1_parameters_or_statement, var_is_an_error, 1, var_4339_1_error,
  // is_an_error
  var_is_an_error, 1, var_4339_1_error, 1, LOCAL(1),
  // if error.is_an_error
  var_if, 3, LOCAL(1), lambda_1469, lambda_1470, TAIL_CALL,
  POS(4338, 7),
  POS(4339, 7),
  POS(4340, 16),
  POS(4340, 7)
};

static TAB_NUM t_lambda_1469[] = {
  0, // locals
  0, // parameters
  //  undefined error
  LET, 2, var_undefined, var_4339_1_error, TAIL_CALL,
  POS(4341, 11)
};

static TAB_NUM t_lambda_1470[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, string_1, var_4338_1_parameters_or_statement, TAIL_CALL,
  POS(4342, 11)
};

static TAB_NUM t_lambda_1471[] = {
  0, // locals
  0, // parameters
  // syntax_error "valid input characters or line end"
  func_syntax_error, 1, str_valid_input_char, TAIL_CALL,
  POS(4346, 7)
};

static TAB_NUM t_func_parse_inline_parameters[] = {
  2, // locals
  0, // parameters
  // cond $rest $expr
  var_cond, 2, lambda_1472, lambda_1475, 2, LOCAL(2), var_4349_12_expr,
  // cond
  var_cond, 3, lambda_1477, lambda_1479, lambda_1481, 1, LOCAL(1),
  // ->
  LET, 2, LOCAL(2), LOCAL(1), TAIL_CALL,
  POS(4349, 3),
  POS(4362, 5),
  POS(4360, 3)
};

static TAB_NUM t_lambda_1472[] = {
  3, // locals
  0, // parameters
  // text(1) == ' '
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_1473, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_1474, TAIL_CALL,
  POS(4352, 9),
  POS(4352, 9),
  POS(4351, 9),
  POS(4350, 7)
};

static TAB_NUM t_lambda_1473[] = {
  2, // locals
  0, // parameters
  // text(2) == '('
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '('
  var_std__equal, 2, LOCAL(1), chr_40, 1, LOCAL(2),
  // text(2) == '('
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(4353, 9),
  POS(4353, 9),
  POS(4353, 9)
};

static TAB_NUM t_lambda_1474[] = {
  0, // locals
  0, // parameters
  // range &text 3 -1
  var_range, 3, var_text, num_3, minus_num_1, 1, var_text,
  // parse_some_inline_parameters
  func_parse_some_inline_parameters, 0, TAIL_CALL,
  POS(4355, 9),
  POS(4356, 9)
};

static TAB_NUM t_lambda_1475[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_1476, TAIL_CALL,
  POS(4357, 7)
};

static TAB_NUM t_lambda_1476[] = {
  0, // locals
  0, // parameters
  //  text empty_list
  LET, 2, var_text, var_empty_list, TAIL_CALL,
  POS(4359, 9)
};

static TAB_NUM t_lambda_1477[] = {
  1, // locals
  0, // parameters
  // is_undefined -> empty_list
  var_is_undefined, 1, var_4349_12_expr, 1, LOCAL(1),
  //  expr.is_undefined -> empty_list
  LET, 2, LOCAL(1), lambda_1478, TAIL_CALL,
  POS(4363, 15),
  POS(4363, 9)
};

static TAB_NUM t_lambda_1478[] = {
  0, // locals
  0, // parameters
  //  empty_list
  LET, 1, var_empty_list, TAIL_CALL,
  POS(4363, 30)
};

static TAB_NUM t_lambda_1479[] = {
  1, // locals
  0, // parameters
  // is_a_list -> expr
  var_is_a_list, 1, var_4349_12_expr, 1, LOCAL(1),
  //  expr.is_a_list -> expr
  LET, 2, LOCAL(1), lambda_1480, TAIL_CALL,
  POS(4364, 15),
  POS(4364, 9)
};

static TAB_NUM t_lambda_1480[] = {
  0, // locals
  0, // parameters
  //  expr
  LET, 1, var_4349_12_expr, TAIL_CALL,
  POS(4364, 27)
};

static TAB_NUM t_lambda_1481[] = {
  0, // locals
  0, // parameters
  //  true -> list(expr)
  LET, 2, var_true, lambda_1482, TAIL_CALL,
  POS(4365, 9)
};

static TAB_NUM t_lambda_1482[] = {
  1, // locals
  0, // parameters
  // list(expr)
  var_list, 1, var_4349_12_expr, 1, LOCAL(1),
  //  list(expr)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(4365, 18),
  POS(4365, 17)
};

static TAB_NUM t_func_parse_some_inline_parameters[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 2, lambda_1483, lambda_1485, TAIL_CALL,
  POS(4368, 3)
};

static TAB_NUM t_lambda_1483[] = {
  2, // locals
  0, // parameters
  // text(1) == ')'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == ')'
  var_std__equal, 2, LOCAL(1), chr_41, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_1484, TAIL_CALL,
  POS(4370, 7),
  POS(4370, 7),
  POS(4369, 7)
};

static TAB_NUM t_lambda_1484[] = {
  1, // locals
  0, // parameters
  // range(text 2 -1) undefined
  var_range, 3, var_text, num_2, minus_num_1, 1, LOCAL(1),
  //  range(text 2 -1) undefined
  LET, 2, LOCAL(1), var_undefined, TAIL_CALL,
  POS(4371, 10),
  POS(4371, 9)
};

static TAB_NUM t_lambda_1485[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_1486, TAIL_CALL,
  POS(4372, 7)
};

static TAB_NUM t_lambda_1486[] = {
  0, // locals
  0, // parameters
  // !expected "some inline parameters"
  LET, 1, str_some_inline_para, 1, var_expected,
  // !at text
  LET, 1, var_text, 1, var_at,
  // parse_one_or_more_inline_parameters
  func_parse_one_or_more_inline_parameters, 0, TAIL_CALL,
  POS(4375, 9),
  POS(4376, 9),
  POS(4377, 9)
};

static TAB_NUM t_func_parse_one_or_more_inline_parameters[] = {
  2, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, LOCAL(2),
  // parse_inline_parameter !text $inline_parameter
  func_parse_inline_parameter, 0, 2, var_text, var_4381_30_inline_parameter,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_71_text_is_defined, lambda_1491, TAIL_CALL,
  POS(4380, 3),
  POS(4381, 3),
  POS(4383, 10),
  POS(4382, 3)
};

static TAB_NUM t_lambda_71_text_is_defined[] = {
  1, // locals
  0, // parameters
  // parse_maybe_more_inline_parameters !text $maybe_more_inline_parameters
  func_parse_maybe_more_inline_parameters, 0, 2, var_text, var_4384_42_maybe_more_inline_parameters,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1487, lambda_1490, TAIL_CALL,
  POS(4384, 7),
  POS(4386, 14),
  POS(4385, 7)
};

static TAB_NUM t_lambda_1487[] = {
  1, // locals
  0, // parameters
  // is_defined
  var_is_defined, 1, var_4384_42_maybe_more_inline_parameters, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1488, lambda_1489, TAIL_CALL,
  POS(4389, 42),
  POS(4388, 11)
};

static TAB_NUM t_lambda_1488[] = {
  3, // locals
  0, // parameters
  // to_list
  func_to_list, 1, var_4381_30_inline_parameter, 1, LOCAL(1),
  // to_list
  func_to_list, 1, var_4384_42_maybe_more_inline_parameters, 1, LOCAL(2),
  // append
  var_append, 2, LOCAL(1), LOCAL(2), 1, LOCAL(3),
  // 
  LET, 2, var_text, LOCAL(3), TAIL_CALL,
  POS(4393, 34),
  POS(4394, 46),
  POS(4392, 15),
  POS(4390, 15)
};

static TAB_NUM t_lambda_1489[] = {
  1, // locals
  0, // parameters
  // to_list
  func_to_list, 1, var_4381_30_inline_parameter, 1, LOCAL(1),
  //  text inline_parameter.to_list
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(4395, 38),
  POS(4395, 15)
};

static TAB_NUM t_lambda_1490[] = {
  0, // locals
  0, // parameters
  //  undefined maybe_more_inline_parameters
  LET, 2, var_undefined, var_4384_42_maybe_more_inline_parameters, TAIL_CALL,
  POS(4396, 11)
};

static TAB_NUM t_lambda_1491[] = {
  0, // locals
  0, // parameters
  //  undefined inline_parameter
  LET, 2, var_undefined, var_4381_30_inline_parameter, TAIL_CALL,
  POS(4397, 7)
};

static TAB_NUM t_func_parse_maybe_more_inline_parameters[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 3, lambda_1492, lambda_1494, lambda_1496, TAIL_CALL,
  POS(4400, 3)
};

static TAB_NUM t_lambda_1492[] = {
  2, // locals
  0, // parameters
  // text(1) == ' '
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_1493, TAIL_CALL,
  POS(4402, 7),
  POS(4402, 7),
  POS(4401, 7)
};

static TAB_NUM t_lambda_1493[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_one_or_more_inline_parameters
  func_parse_one_or_more_inline_parameters, 0, TAIL_CALL,
  POS(4404, 9),
  POS(4405, 9)
};

static TAB_NUM t_lambda_1494[] = {
  2, // locals
  0, // parameters
  // text(1) == ')'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == ')'
  var_std__equal, 2, LOCAL(1), chr_41, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_1495, TAIL_CALL,
  POS(4407, 7),
  POS(4407, 7),
  POS(4406, 7)
};

static TAB_NUM t_lambda_1495[] = {
  1, // locals
  0, // parameters
  // range(text 2 -1) undefined
  var_range, 3, var_text, num_2, minus_num_1, 1, LOCAL(1),
  //  range(text 2 -1) undefined
  LET, 2, LOCAL(1), var_undefined, TAIL_CALL,
  POS(4408, 10),
  POS(4408, 9)
};

static TAB_NUM t_lambda_1496[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_1497, TAIL_CALL,
  POS(4409, 7)
};

static TAB_NUM t_lambda_1497[] = {
  0, // locals
  0, // parameters
  // syntax_error "maybe more inline parameters"
  func_syntax_error, 1, str_maybe_more_inlin, TAIL_CALL,
  POS(4412, 9)
};

static TAB_NUM t_func_parse_parameter_name[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 3, lambda_1498, lambda_1500, lambda_1505, TAIL_CALL,
  POS(4415, 3)
};

static TAB_NUM t_lambda_1498[] = {
  2, // locals
  0, // parameters
  // text(1) == '_'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '_'
  var_std__equal, 2, LOCAL(1), chr_95, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_1499, TAIL_CALL,
  POS(4417, 7),
  POS(4417, 7),
  POS(4416, 7)
};

static TAB_NUM t_lambda_1499[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_name
  func_parse_name, 0, TAIL_CALL,
  POS(4419, 9),
  POS(4420, 9)
};

static TAB_NUM t_lambda_1500[] = {
  5, // locals
  0, // parameters
  // text(1) >= 'a' && text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z')
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) >= 'a' && text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z')
  var_std__less, 2, LOCAL(1), chr_97, 1, LOCAL(2),
  // text(1) >= 'a' && text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) >= 'a' && text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z')
  var_std__and, 2, LOCAL(3), lambda_1501, 1, LOCAL(4),
  // text(1) >= 'a' && text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z')
  var_std__or, 2, LOCAL(4), lambda_1502, 1, LOCAL(5),
  // 
  LET, 2, LOCAL(5), lambda_1504, TAIL_CALL,
  POS(4422, 8),
  POS(4422, 8),
  POS(4422, 8),
  POS(4422, 8),
  POS(4422, 8),
  POS(4421, 7)
};

static TAB_NUM t_lambda_1501[] = {
  3, // locals
  0, // parameters
  // text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z')
  var_text, 1, num_1, 1, LOCAL(1),
  // z') || (text(1) >= 'A' && text(1) <= 'Z')
  var_std__less, 2, chr_122, LOCAL(1), 1, LOCAL(2),
  // z') || (text(1) >= 'A' && text(1) <= 'Z')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z')
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(4422, 26),
  POS(4422, 38),
  POS(4422, 38),
  POS(4422, 26)
};

static TAB_NUM t_lambda_1502[] = {
  4, // locals
  0, // parameters
  // text(1) >= 'A' && text(1) <= 'Z')
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) >= 'A' && text(1) <= 'Z')
  var_std__less, 2, LOCAL(1), chr_65, 1, LOCAL(2),
  // text(1) >= 'A' && text(1) <= 'Z')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) >= 'A' && text(1) <= 'Z')
  var_std__and, 2, LOCAL(3), lambda_1503, 1, LOCAL(4),
  // text(1) >= 'A' && text(1) <= 'Z')
  LET, 1, LOCAL(4), TAIL_CALL,
  POS(4422, 46),
  POS(4422, 46),
  POS(4422, 46),
  POS(4422, 46),
  POS(4422, 46)
};

static TAB_NUM t_lambda_1503[] = {
  3, // locals
  0, // parameters
  // text(1) <= 'Z')
  var_text, 1, num_1, 1, LOCAL(1),
  // Z')
  var_std__less, 2, chr_90, LOCAL(1), 1, LOCAL(2),
  // Z')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) <= 'Z')
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(4422, 64),
  POS(4422, 76),
  POS(4422, 76),
  POS(4422, 64)
};

static TAB_NUM t_lambda_1504[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_more_name_characters
  func_parse_more_name_characters, 0, TAIL_CALL,
  POS(4424, 9),
  POS(4425, 9)
};

static TAB_NUM t_lambda_1505[] = {
  0, // locals
  0, // parameters
  //  true:
  LET, 2, var_true, lambda_1506, TAIL_CALL,
  POS(4426, 7)
};

static TAB_NUM t_lambda_1506[] = {
  0, // locals
  0, // parameters
  // syntax_error "parameter name"
  func_syntax_error, 1, str_parameter_name, TAIL_CALL,
  POS(4427, 7)
};

static TAB_NUM t_func_parse_open_parameters_without_prefix[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_4430_1_position,
  // parse_trailing_remark !text $trailing_remark
  func_parse_trailing_remark, 0, 2, var_text, var_4431_29_trailing_remark,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_72_text_is_defined, lambda_1512, TAIL_CALL,
  POS(4430, 3),
  POS(4431, 3),
  POS(4433, 10),
  POS(4432, 3)
};

static TAB_NUM t_lambda_72_text_is_defined[] = {
  2, // locals
  0, // parameters
  // text == "@nl;" && subgroups.is_defined:
  var_std__equal, 2, var_text, string_2, 1, LOCAL(1),
  // text == "@nl;" && subgroups.is_defined:
  var_std__and, 2, LOCAL(1), lambda_1507, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_1508, lambda_1511, TAIL_CALL,
  POS(4435, 9),
  POS(4435, 9),
  POS(4434, 7)
};

static TAB_NUM t_lambda_1507[] = {
  1, // locals
  0, // parameters
  // is_defined:
  var_is_defined, 1, var_subgroups, 1, LOCAL(1),
  // subgroups.is_defined:
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(4435, 37),
  POS(4435, 27)
};

static TAB_NUM t_lambda_1508[] = {
  1, // locals
  0, // parameters
  // $parameter parse_groups(funky::parse_parameter_group)
  func_parse_groups, 1, var_funky__parse_parameter_group, 1, var_4436_1_parameter,
  // $error find_first(parameter is_an_error)
  var_find_first, 2, var_4436_1_parameter, var_is_an_error, 1, var_4437_1_error,
  // is_an_error
  var_is_an_error, 1, var_4437_1_error, 1, LOCAL(1),
  // if error.is_an_error
  var_if, 3, LOCAL(1), lambda_1509, lambda_1510, TAIL_CALL,
  POS(4436, 11),
  POS(4437, 11),
  POS(4438, 20),
  POS(4438, 11)
};

static TAB_NUM t_lambda_1509[] = {
  0, // locals
  0, // parameters
  //  undefined error
  LET, 2, var_undefined, var_4437_1_error, TAIL_CALL,
  POS(4439, 15)
};

static TAB_NUM t_lambda_1510[] = {
  1, // locals
  0, // parameters
  // funky_types::open_parameters
  LET, -4, var_funky_types__open_parameters, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_4430_1_position, var_funky__remark_of, var_4431_29_trailing_remark, var_funky__parameter_of, var_4436_1_parameter, LOCAL(1),
  // 
  LET, 2, string_1, LOCAL(1), TAIL_CALL,
  POS(4442, 15),
  POS(4440, 15)
};

static TAB_NUM t_lambda_1511[] = {
  0, // locals
  0, // parameters
  // syntax_error "valid input characters or line end"
  func_syntax_error, 1, str_valid_input_char, TAIL_CALL,
  POS(4448, 11)
};

static TAB_NUM t_lambda_1512[] = {
  0, // locals
  0, // parameters
  //  undefined trailing_remark
  LET, 2, var_undefined, var_4431_29_trailing_remark, TAIL_CALL,
  POS(4449, 7)
};

static TAB_NUM t_func_parse_inline_parameter[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_4452_1_position,
  // !str text
  LET, 1, var_text, 1, var_str,
  // parse_parameter_name !text $parameter_name
  func_parse_parameter_name, 0, 2, var_text, var_4454_28_parameter_name,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_73_text_is_defined, lambda_1515, TAIL_CALL,
  POS(4452, 3),
  POS(4453, 3),
  POS(4454, 3),
  POS(4456, 10),
  POS(4455, 3)
};

static TAB_NUM t_lambda_73_text_is_defined[] = {
  1, // locals
  0, // parameters
  // parse_parameter_option !text $parameter_option
  func_parse_parameter_option, 0, 2, var_text, var_4457_30_parameter_option,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1513, lambda_1514, TAIL_CALL,
  POS(4457, 7),
  POS(4459, 14),
  POS(4458, 7)
};

static TAB_NUM t_lambda_1513[] = {
  1, // locals
  0, // parameters
  // funky_types::inline_parameter
  LET, -4, var_funky_types__inline_parameter, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_4452_1_position, var_funky__name_of, var_4454_28_parameter_name, var_funky__option_of, var_4457_30_parameter_option, LOCAL(1),
  // 
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(4462, 11),
  POS(4460, 11)
};

static TAB_NUM t_lambda_1514[] = {
  0, // locals
  0, // parameters
  //  undefined parameter_option
  LET, 2, var_undefined, var_4457_30_parameter_option, TAIL_CALL,
  POS(4467, 11)
};

static TAB_NUM t_lambda_1515[] = {
  0, // locals
  0, // parameters
  //  undefined parameter_name
  LET, 2, var_undefined, var_4454_28_parameter_name, TAIL_CALL,
  POS(4468, 7)
};

static TAB_NUM t_func_parse_parameter[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_4471_1_position,
  // !str text
  LET, 1, var_text, 1, var_str,
  // parse_parameter_name !text $parameter_name
  func_parse_parameter_name, 0, 2, var_text, var_4473_28_parameter_name,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_74_text_is_defined, lambda_1519, TAIL_CALL,
  POS(4471, 3),
  POS(4472, 3),
  POS(4473, 3),
  POS(4475, 10),
  POS(4474, 3)
};

static TAB_NUM t_lambda_74_text_is_defined[] = {
  1, // locals
  0, // parameters
  // parse_parameter_option !text $parameter_option
  func_parse_parameter_option, 0, 2, var_text, var_4476_30_parameter_option,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_75_text_is_defined, lambda_1518, TAIL_CALL,
  POS(4476, 7),
  POS(4478, 14),
  POS(4477, 7)
};

static TAB_NUM t_lambda_75_text_is_defined[] = {
  1, // locals
  0, // parameters
  // parse_trailing_remarks !text $trailing_remarks
  func_parse_trailing_remarks, 0, 2, var_text, var_4479_30_trailing_remarks,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1516, lambda_1517, TAIL_CALL,
  POS(4479, 11),
  POS(4481, 18),
  POS(4480, 11)
};

static TAB_NUM t_lambda_1516[] = {
  1, // locals
  0, // parameters
  // funky_types::parameter
  LET, -5, var_funky_types__parameter, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_4471_1_position, var_funky__name_of, var_4473_28_parameter_name, var_funky__option_of, var_4476_30_parameter_option, var_funky__remarks_of, var_4479_30_trailing_remarks, LOCAL(1),
  // 
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(4484, 15),
  POS(4482, 15)
};

static TAB_NUM t_lambda_1517[] = {
  0, // locals
  0, // parameters
  //  undefined trailing_remarks
  LET, 2, var_undefined, var_4479_30_trailing_remarks, TAIL_CALL,
  POS(4490, 15)
};

static TAB_NUM t_lambda_1518[] = {
  0, // locals
  0, // parameters
  //  undefined parameter_option
  LET, 2, var_undefined, var_4476_30_parameter_option, TAIL_CALL,
  POS(4491, 11)
};

static TAB_NUM t_lambda_1519[] = {
  0, // locals
  0, // parameters
  //  undefined parameter_name
  LET, 2, var_undefined, var_4473_28_parameter_name, TAIL_CALL,
  POS(4492, 7)
};

static TAB_NUM t_func_parse_parameter_option[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 4, lambda_1520, lambda_1522, lambda_1524, lambda_1528, TAIL_CALL,
  POS(4495, 3)
};

static TAB_NUM t_lambda_1520[] = {
  2, // locals
  0, // parameters
  // text(1) == '^'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '^'
  var_std__equal, 2, LOCAL(1), chr_94, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_1521, TAIL_CALL,
  POS(4497, 7),
  POS(4497, 7),
  POS(4496, 7)
};

static TAB_NUM t_lambda_1521[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_myself_without_prefix
  func_parse_myself_without_prefix, 0, TAIL_CALL,
  POS(4499, 9),
  POS(4500, 9)
};

static TAB_NUM t_lambda_1522[] = {
  2, // locals
  0, // parameters
  // text(1) == '*'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '*'
  var_std__equal, 2, LOCAL(1), chr_42, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_1523, TAIL_CALL,
  POS(4502, 7),
  POS(4502, 7),
  POS(4501, 7)
};

static TAB_NUM t_lambda_1523[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_rest_without_prefix
  func_parse_rest_without_prefix, 0, TAIL_CALL,
  POS(4504, 9),
  POS(4505, 9)
};

static TAB_NUM t_lambda_1524[] = {
  3, // locals
  0, // parameters
  // text(1) == ' '
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_1525, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_1527, TAIL_CALL,
  POS(4508, 9),
  POS(4508, 9),
  POS(4507, 9),
  POS(4506, 7)
};

static TAB_NUM t_lambda_1525[] = {
  3, // locals
  0, // parameters
  // text(2) == '='
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '='
  var_std__equal, 2, LOCAL(1), chr_61, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_1526, 1, LOCAL(3),
  // text(2) == '='
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(4509, 9),
  POS(4509, 9),
  POS(4507, 9),
  POS(4509, 9)
};

static TAB_NUM t_lambda_1526[] = {
  2, // locals
  0, // parameters
  // text(3) == ' '
  var_text, 1, num_3, 1, LOCAL(1),
  // text(3) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // text(3) == ' '
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(4510, 9),
  POS(4510, 9),
  POS(4510, 9)
};

static TAB_NUM t_lambda_1527[] = {
  0, // locals
  0, // parameters
  // range &text 4 -1
  var_range, 3, var_text, num_4, minus_num_1, 1, var_text,
  // parse_initial_value_without_prefix
  func_parse_initial_value_without_prefix, 0, TAIL_CALL,
  POS(4512, 9),
  POS(4513, 9)
};

static TAB_NUM t_lambda_1528[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_1529, TAIL_CALL,
  POS(4514, 7)
};

static TAB_NUM t_lambda_1529[] = {
  0, // locals
  0, // parameters
  //  text undefined
  LET, 2, var_text, var_undefined, TAIL_CALL,
  POS(4516, 9)
};

static TAB_NUM t_func_parse_myself_without_prefix[] = {
  2, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, LOCAL(2),
  // funky_types::myself
  LET, -2, var_funky_types__myself, var_funky__source_group_of, var_current_group, var_funky__source_position_of, LOCAL(2), LOCAL(1),
  // ->
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(4519, 3),
  POS(4522, 5),
  POS(4520, 3)
};

static TAB_NUM t_func_parse_rest_without_prefix[] = {
  2, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, LOCAL(2),
  // funky_types::rest
  LET, -2, var_funky_types__rest, var_funky__source_group_of, var_current_group, var_funky__source_position_of, LOCAL(2), LOCAL(1),
  // ->
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(4527, 3),
  POS(4530, 5),
  POS(4528, 3)
};

static TAB_NUM t_func_parse_initial_value_without_prefix[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_4535_1_position,
  // parse_simple_operand !text $simple_operand
  func_parse_simple_operand, 0, 2, var_text, var_4536_28_simple_operand,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1530, lambda_1531, TAIL_CALL,
  POS(4535, 3),
  POS(4536, 3),
  POS(4538, 10),
  POS(4537, 3)
};

static TAB_NUM t_lambda_1530[] = {
  1, // locals
  0, // parameters
  // funky_types::initial_value
  LET, -3, var_funky_types__initial_value, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_4535_1_position, var_funky__operand_of, var_4536_28_simple_operand, LOCAL(1),
  // 
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(4541, 7),
  POS(4539, 7)
};

static TAB_NUM t_lambda_1531[] = {
  0, // locals
  0, // parameters
  //  undefined simple_operand
  LET, 2, var_undefined, var_4536_28_simple_operand, TAIL_CALL,
  POS(4545, 7)
};

static TAB_NUM t_func_parse_simple_operand[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 5, lambda_1532, lambda_1537, lambda_1540, lambda_1542, lambda_1544, TAIL_CALL,
  POS(4548, 3)
};

static TAB_NUM t_lambda_1532[] = {
  5, // locals
  0, // parameters
  // text(1) >= 'a' && text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z')
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) >= 'a' && text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z')
  var_std__less, 2, LOCAL(1), chr_97, 1, LOCAL(2),
  // text(1) >= 'a' && text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) >= 'a' && text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z')
  var_std__and, 2, LOCAL(3), lambda_1533, 1, LOCAL(4),
  // text(1) >= 'a' && text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z')
  var_std__or, 2, LOCAL(4), lambda_1534, 1, LOCAL(5),
  // 
  LET, 2, LOCAL(5), lambda_1536, TAIL_CALL,
  POS(4550, 8),
  POS(4550, 8),
  POS(4550, 8),
  POS(4550, 8),
  POS(4550, 8),
  POS(4549, 7)
};

static TAB_NUM t_lambda_1533[] = {
  3, // locals
  0, // parameters
  // text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z')
  var_text, 1, num_1, 1, LOCAL(1),
  // z') || (text(1) >= 'A' && text(1) <= 'Z')
  var_std__less, 2, chr_122, LOCAL(1), 1, LOCAL(2),
  // z') || (text(1) >= 'A' && text(1) <= 'Z')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z')
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(4550, 26),
  POS(4550, 38),
  POS(4550, 38),
  POS(4550, 26)
};

static TAB_NUM t_lambda_1534[] = {
  4, // locals
  0, // parameters
  // text(1) >= 'A' && text(1) <= 'Z')
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) >= 'A' && text(1) <= 'Z')
  var_std__less, 2, LOCAL(1), chr_65, 1, LOCAL(2),
  // text(1) >= 'A' && text(1) <= 'Z')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) >= 'A' && text(1) <= 'Z')
  var_std__and, 2, LOCAL(3), lambda_1535, 1, LOCAL(4),
  // text(1) >= 'A' && text(1) <= 'Z')
  LET, 1, LOCAL(4), TAIL_CALL,
  POS(4550, 46),
  POS(4550, 46),
  POS(4550, 46),
  POS(4550, 46),
  POS(4550, 46)
};

static TAB_NUM t_lambda_1535[] = {
  3, // locals
  0, // parameters
  // text(1) <= 'Z')
  var_text, 1, num_1, 1, LOCAL(1),
  // Z')
  var_std__less, 2, chr_90, LOCAL(1), 1, LOCAL(2),
  // Z')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) <= 'Z')
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(4550, 64),
  POS(4550, 76),
  POS(4550, 76),
  POS(4550, 64)
};

static TAB_NUM t_lambda_1536[] = {
  0, // locals
  0, // parameters
  // !str text
  LET, 1, var_text, 1, var_str,
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_variable_without_prefix
  func_parse_variable_without_prefix, 0, TAIL_CALL,
  POS(4552, 9),
  POS(4553, 9),
  POS(4554, 9)
};

static TAB_NUM t_lambda_1537[] = {
  3, // locals
  0, // parameters
  // text(1) == '''
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '''
  var_std__equal, 2, LOCAL(1), chr_39, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_1538, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_1539, TAIL_CALL,
  POS(4557, 9),
  POS(4557, 9),
  POS(4556, 9),
  POS(4555, 7)
};

static TAB_NUM t_lambda_1538[] = {
  2, // locals
  0, // parameters
  // text(2) == '@@'
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '@@'
  var_std__equal, 2, LOCAL(1), chr_64, 1, LOCAL(2),
  // text(2) == '@@'
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(4558, 9),
  POS(4558, 9),
  POS(4558, 9)
};

static TAB_NUM t_lambda_1539[] = {
  0, // locals
  0, // parameters
  // range &text 3 -1
  var_range, 3, var_text, num_3, minus_num_1, 1, var_text,
  // parse_special_character_literal
  func_parse_special_character_literal, 0, TAIL_CALL,
  POS(4560, 9),
  POS(4561, 9)
};

static TAB_NUM t_lambda_1540[] = {
  2, // locals
  0, // parameters
  // text(1) == '''
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '''
  var_std__equal, 2, LOCAL(1), chr_39, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_1541, TAIL_CALL,
  POS(4563, 7),
  POS(4563, 7),
  POS(4562, 7)
};

static TAB_NUM t_lambda_1541[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_character_literal_without_prefix
  func_parse_character_literal_without_prefix, 0, TAIL_CALL,
  POS(4565, 9),
  POS(4566, 9)
};

static TAB_NUM t_lambda_1542[] = {
  2, // locals
  0, // parameters
  // text(1) == '"'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '"'
  var_std__equal, 2, LOCAL(1), chr_34, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_1543, TAIL_CALL,
  POS(4568, 7),
  POS(4568, 7),
  POS(4567, 7)
};

static TAB_NUM t_lambda_1543[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_string_literal_without_prefix
  func_parse_string_literal_without_prefix, 0, TAIL_CALL,
  POS(4570, 9),
  POS(4571, 9)
};

static TAB_NUM t_lambda_1544[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_1545, TAIL_CALL,
  POS(4572, 7)
};

static TAB_NUM t_lambda_1545[] = {
  0, // locals
  0, // parameters
  // !expected "simple operand"
  LET, 1, str_simple_operand, 1, var_expected,
  // !at text
  LET, 1, var_text, 1, var_at,
  // parse_numeric_literal
  func_parse_numeric_literal, 0, TAIL_CALL,
  POS(4575, 9),
  POS(4576, 9),
  POS(4577, 9)
};

static TAB_NUM t_func_parse_close_parameters_without_prefix[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_4580_1_position,
  // parse_trailing_remark !text $trailing_remark
  func_parse_trailing_remark, 0, 2, var_text, var_4581_29_trailing_remark,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1546, lambda_1547, TAIL_CALL,
  POS(4580, 3),
  POS(4581, 3),
  POS(4583, 10),
  POS(4582, 3)
};

static TAB_NUM t_lambda_1546[] = {
  1, // locals
  0, // parameters
  // funky_types::close_parameters
  LET, -3, var_funky_types__close_parameters, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_4580_1_position, var_funky__remark_of, var_4581_29_trailing_remark, LOCAL(1),
  // 
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(4586, 7),
  POS(4584, 7)
};

static TAB_NUM t_lambda_1547[] = {
  0, // locals
  0, // parameters
  //  undefined trailing_remark
  LET, 2, var_undefined, var_4581_29_trailing_remark, TAIL_CALL,
  POS(4590, 7)
};

static TAB_NUM t_func_parse_return_expression_without_prefix[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_4593_1_position,
  // parse_some_statement_arguments !text $some_statement_arguments
  func_parse_some_statement_arguments, 0, 2, var_text, var_4594_38_some_statement_arguments,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1548, lambda_1549, TAIL_CALL,
  POS(4593, 3),
  POS(4594, 3),
  POS(4596, 10),
  POS(4595, 3)
};

static TAB_NUM t_lambda_1548[] = {
  1, // locals
  0, // parameters
  // funky_types::return_expression
  LET, -3, var_funky_types__return_expression, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_4593_1_position, var_funky__arguments_of, var_4594_38_some_statement_arguments, LOCAL(1),
  // 
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(4599, 7),
  POS(4597, 7)
};

static TAB_NUM t_lambda_1549[] = {
  0, // locals
  0, // parameters
  //  undefined some_statement_arguments
  LET, 2, var_undefined, var_4594_38_some_statement_arguments, TAIL_CALL,
  POS(4603, 7)
};

static TAB_NUM t_func_parse_return_without_prefix[] = {
  2, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, LOCAL(2),
  // funky_types::return
  LET, -2, var_funky_types__return, var_funky__source_group_of, var_current_group, var_funky__source_position_of, LOCAL(2), LOCAL(1),
  // ->
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(4606, 3),
  POS(4609, 5),
  POS(4607, 3)
};

static TAB_NUM t_func_parse_remark[] = {
  2, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_4614_1_position,
  // text(1) == '#':
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '#':
  var_std__equal, 2, LOCAL(1), chr_35, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_1550, lambda_1553, TAIL_CALL,
  POS(4614, 3),
  POS(4616, 5),
  POS(4616, 5),
  POS(4615, 3)
};

static TAB_NUM t_lambda_1550[] = {
  1, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // !str text
  LET, 1, var_text, 1, var_str,
  // parse_remark_text !text $remark_text
  func_parse_remark_text, 0, 2, var_text, var_4619_25_remark_text,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1551, lambda_1552, TAIL_CALL,
  POS(4617, 7),
  POS(4618, 7),
  POS(4619, 7),
  POS(4621, 14),
  POS(4620, 7)
};

static TAB_NUM t_lambda_1551[] = {
  1, // locals
  0, // parameters
  // funky_types::remark
  LET, -3, var_funky_types__remark, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_4614_1_position, var_funky__text_of, var_4619_25_remark_text, LOCAL(1),
  // 
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(4624, 11),
  POS(4622, 11)
};

static TAB_NUM t_lambda_1552[] = {
  0, // locals
  0, // parameters
  //  undefined remark_text
  LET, 2, var_undefined, var_4619_25_remark_text, TAIL_CALL,
  POS(4628, 11)
};

static TAB_NUM t_lambda_1553[] = {
  0, // locals
  0, // parameters
  // syntax_error "'#'"
  func_syntax_error, 1, string_10, TAIL_CALL,
  POS(4630, 7)
};

static TAB_NUM t_func_parse_remark_without_prefix[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_4633_1_position,
  // !str text
  LET, 1, var_text, 1, var_str,
  // parse_remark_text !text $remark_text
  func_parse_remark_text, 0, 2, var_text, var_4635_25_remark_text,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1554, lambda_1555, TAIL_CALL,
  POS(4633, 3),
  POS(4634, 3),
  POS(4635, 3),
  POS(4637, 10),
  POS(4636, 3)
};

static TAB_NUM t_lambda_1554[] = {
  1, // locals
  0, // parameters
  // funky_types::remark
  LET, -3, var_funky_types__remark, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_4633_1_position, var_funky__text_of, var_4635_25_remark_text, LOCAL(1),
  // 
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(4640, 7),
  POS(4638, 7)
};

static TAB_NUM t_lambda_1555[] = {
  0, // locals
  0, // parameters
  //  undefined remark_text
  LET, 2, var_undefined, var_4635_25_remark_text, TAIL_CALL,
  POS(4644, 7)
};

static TAB_NUM t_func_parse_remark_text[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 2, lambda_1556, lambda_1558, TAIL_CALL,
  POS(4647, 3)
};

static TAB_NUM t_lambda_1556[] = {
  2, // locals
  0, // parameters
  // text(1) == '@nl;'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '@nl;'
  var_std__equal, 2, LOCAL(1), chr_10, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_1557, TAIL_CALL,
  POS(4649, 7),
  POS(4649, 7),
  POS(4648, 7)
};

static TAB_NUM t_lambda_1557[] = {
  4, // locals
  0, // parameters
  // length_of(str)-length_of(text))
  var_length_of, 1, var_str, 1, LOCAL(1),
  // length_of(text))
  var_length_of, 1, var_text, 1, LOCAL(2),
  // length_of(str)-length_of(text))
  var_std__minus, 2, LOCAL(1), LOCAL(2), 1, LOCAL(3),
  // range(str 1 length_of(str)-length_of(text))
  var_range, 3, var_str, num_1, LOCAL(3), 1, LOCAL(4),
  //  text range(str 1 length_of(str)-length_of(text))
  LET, 2, var_text, LOCAL(4), TAIL_CALL,
  POS(4650, 27),
  POS(4650, 42),
  POS(4650, 27),
  POS(4650, 15),
  POS(4650, 9)
};

static TAB_NUM t_lambda_1558[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_1559, TAIL_CALL,
  POS(4651, 7)
};

static TAB_NUM t_lambda_1559[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_remark_text
  func_parse_remark_text, 0, TAIL_CALL,
  POS(4654, 9),
  POS(4655, 9)
};

static TAB_NUM t_func_parse_trailing_remarks[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 2, lambda_1560, lambda_1563, TAIL_CALL,
  POS(4658, 3)
};

static TAB_NUM t_lambda_1560[] = {
  2, // locals
  0, // parameters
  // text == "@nl;" && subgroups.is_defined
  var_std__equal, 2, var_text, string_2, 1, LOCAL(1),
  // text == "@nl;" && subgroups.is_defined
  var_std__and, 2, LOCAL(1), lambda_1561, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_1562, TAIL_CALL,
  POS(4660, 7),
  POS(4660, 7),
  POS(4659, 7)
};

static TAB_NUM t_lambda_1561[] = {
  1, // locals
  0, // parameters
  // is_defined
  var_is_defined, 1, var_subgroups, 1, LOCAL(1),
  // subgroups.is_defined
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(4660, 35),
  POS(4660, 25)
};

static TAB_NUM t_lambda_1562[] = {
  0, // locals
  0, // parameters
  // parse_line_remarks_without_prefix
  func_parse_line_remarks_without_prefix, 0, TAIL_CALL,
  POS(4662, 9)
};

static TAB_NUM t_lambda_1563[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_1564, TAIL_CALL,
  POS(4663, 7)
};

static TAB_NUM t_lambda_1564[] = {
  0, // locals
  0, // parameters
  // !expected "trailing remarks"
  LET, 1, str_trailing_remarks, 1, var_expected,
  // !at text
  LET, 1, var_text, 1, var_at,
  // parse_line_end_and_line_remarks
  func_parse_line_end_and_line_remarks, 0, TAIL_CALL,
  POS(4666, 9),
  POS(4667, 9),
  POS(4668, 9)
};

static TAB_NUM t_func_parse_line_end_and_line_remarks[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_4671_1_position,
  // parse_trailing_remark !text $trailing_remark
  func_parse_trailing_remark, 0, 2, var_text, var_4672_29_trailing_remark,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_76_text_is_defined, lambda_1569, TAIL_CALL,
  POS(4671, 3),
  POS(4672, 3),
  POS(4674, 10),
  POS(4673, 3)
};

static TAB_NUM t_lambda_76_text_is_defined[] = {
  1, // locals
  0, // parameters
  // parse_line_remarks !text $line_remarks
  func_parse_line_remarks, 0, 2, var_text, var_4675_26_line_remarks,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1565, lambda_1568, TAIL_CALL,
  POS(4675, 7),
  POS(4677, 14),
  POS(4676, 7)
};

static TAB_NUM t_lambda_1565[] = {
  1, // locals
  0, // parameters
  // is_defined
  var_is_defined, 1, var_4675_26_line_remarks, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1566, lambda_1567, TAIL_CALL,
  POS(4680, 26),
  POS(4679, 11)
};

static TAB_NUM t_lambda_1566[] = {
  1, // locals
  0, // parameters
  // funky_types::line_end_and_line_remarks
  LET, -4, var_funky_types__line_end_and_line_remarks, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_4671_1_position, var_funky__remark_of, var_4672_29_trailing_remark, var_funky__remarks_of, var_4675_26_line_remarks, LOCAL(1),
  // 
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(4683, 15),
  POS(4681, 15)
};

static TAB_NUM t_lambda_1567[] = {
  0, // locals
  0, // parameters
  //  text trailing_remark
  LET, 2, var_text, var_4672_29_trailing_remark, TAIL_CALL,
  POS(4688, 15)
};

static TAB_NUM t_lambda_1568[] = {
  0, // locals
  0, // parameters
  //  undefined line_remarks
  LET, 2, var_undefined, var_4675_26_line_remarks, TAIL_CALL,
  POS(4689, 11)
};

static TAB_NUM t_lambda_1569[] = {
  0, // locals
  0, // parameters
  //  undefined trailing_remark
  LET, 2, var_undefined, var_4672_29_trailing_remark, TAIL_CALL,
  POS(4690, 7)
};

static TAB_NUM t_func_parse_trailing_remark[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 3, lambda_1570, lambda_1573, lambda_1575, TAIL_CALL,
  POS(4693, 3)
};

static TAB_NUM t_lambda_1570[] = {
  3, // locals
  0, // parameters
  // text(1) == ' '
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_1571, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_1572, TAIL_CALL,
  POS(4696, 9),
  POS(4696, 9),
  POS(4695, 9),
  POS(4694, 7)
};

static TAB_NUM t_lambda_1571[] = {
  2, // locals
  0, // parameters
  // text(2) == '#'
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '#'
  var_std__equal, 2, LOCAL(1), chr_35, 1, LOCAL(2),
  // text(2) == '#'
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(4697, 9),
  POS(4697, 9),
  POS(4697, 9)
};

static TAB_NUM t_lambda_1572[] = {
  0, // locals
  0, // parameters
  // range &text 3 -1
  var_range, 3, var_text, num_3, minus_num_1, 1, var_text,
  // parse_spaced_remark_without_prefix
  func_parse_spaced_remark_without_prefix, 0, TAIL_CALL,
  POS(4699, 9),
  POS(4700, 9)
};

static TAB_NUM t_lambda_1573[] = {
  2, // locals
  0, // parameters
  // text(1) == '@nl;'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '@nl;'
  var_std__equal, 2, LOCAL(1), chr_10, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_1574, TAIL_CALL,
  POS(4702, 7),
  POS(4702, 7),
  POS(4701, 7)
};

static TAB_NUM t_lambda_1574[] = {
  0, // locals
  0, // parameters
  //  text undefined
  LET, 2, var_text, var_undefined, TAIL_CALL,
  POS(4703, 9)
};

static TAB_NUM t_lambda_1575[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_1576, TAIL_CALL,
  POS(4704, 7)
};

static TAB_NUM t_lambda_1576[] = {
  0, // locals
  0, // parameters
  // syntax_error "trailing remark"
  func_syntax_error, 1, str_trailing_remark, TAIL_CALL,
  POS(4707, 9)
};

static TAB_NUM t_func_parse_line_remarks[] = {
  2, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, LOCAL(2),
  // text == "@nl;":
  var_std__equal, 2, var_text, string_2, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1577, lambda_1580, TAIL_CALL,
  POS(4710, 3),
  POS(4712, 5),
  POS(4711, 3)
};

static TAB_NUM t_lambda_1577[] = {
  1, // locals
  0, // parameters
  // $multiline_remark parse_groups(funky::parse_multiline_remark_group)
  func_parse_groups, 1, var_funky__parse_multiline_remark_group, 1, var_4713_1_multiline_remark,
  // $error find_first(multiline_remark is_an_error)
  var_find_first, 2, var_4713_1_multiline_remark, var_is_an_error, 1, var_4714_1_error,
  // is_an_error
  var_is_an_error, 1, var_4714_1_error, 1, LOCAL(1),
  // if error.is_an_error
  var_if, 3, LOCAL(1), lambda_1578, lambda_1579, TAIL_CALL,
  POS(4713, 7),
  POS(4714, 7),
  POS(4715, 16),
  POS(4715, 7)
};

static TAB_NUM t_lambda_1578[] = {
  0, // locals
  0, // parameters
  //  undefined error
  LET, 2, var_undefined, var_4714_1_error, TAIL_CALL,
  POS(4716, 11)
};

static TAB_NUM t_lambda_1579[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, string_1, var_4713_1_multiline_remark, TAIL_CALL,
  POS(4717, 11)
};

static TAB_NUM t_lambda_1580[] = {
  0, // locals
  0, // parameters
  // syntax_error "valid input characters or line end"
  func_syntax_error, 1, str_valid_input_char, TAIL_CALL,
  POS(4721, 7)
};

static TAB_NUM t_func_parse_line_remarks_without_prefix[] = {
  2, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, LOCAL(2),
  // $multiline_remark parse_groups(funky::parse_multiline_remark_group)
  func_parse_groups, 1, var_funky__parse_multiline_remark_group, 1, var_4725_1_multiline_remark,
  // $error find_first(multiline_remark is_an_error)
  var_find_first, 2, var_4725_1_multiline_remark, var_is_an_error, 1, var_4726_1_error,
  // is_an_error
  var_is_an_error, 1, var_4726_1_error, 1, LOCAL(1),
  // if error.is_an_error
  var_if, 3, LOCAL(1), lambda_1581, lambda_1582, TAIL_CALL,
  POS(4724, 3),
  POS(4725, 3),
  POS(4726, 3),
  POS(4727, 12),
  POS(4727, 3)
};

static TAB_NUM t_lambda_1581[] = {
  0, // locals
  0, // parameters
  //  undefined error
  LET, 2, var_undefined, var_4726_1_error, TAIL_CALL,
  POS(4728, 7)
};

static TAB_NUM t_lambda_1582[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, string_1, var_4725_1_multiline_remark, TAIL_CALL,
  POS(4729, 7)
};

static TAB_NUM t_func_parse_spaced_remark_without_prefix[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_4734_1_position,
  // !str text
  LET, 1, var_text, 1, var_str,
  // parse_remark_text !text $remark_text
  func_parse_remark_text, 0, 2, var_text, var_4736_25_remark_text,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1583, lambda_1584, TAIL_CALL,
  POS(4734, 3),
  POS(4735, 3),
  POS(4736, 3),
  POS(4738, 10),
  POS(4737, 3)
};

static TAB_NUM t_lambda_1583[] = {
  1, // locals
  0, // parameters
  // funky_types::remark
  LET, -3, var_funky_types__remark, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_4734_1_position, var_funky__text_of, var_4736_25_remark_text, LOCAL(1),
  // 
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(4741, 7),
  POS(4739, 7)
};

static TAB_NUM t_lambda_1584[] = {
  0, // locals
  0, // parameters
  //  undefined remark_text
  LET, 2, var_undefined, var_4736_25_remark_text, TAIL_CALL,
  POS(4745, 7)
};

static TAB_NUM t_func_parse_multiline_remark[] = {
  2, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_4748_1_position,
  // text(1) == '#':
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '#':
  var_std__equal, 2, LOCAL(1), chr_35, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_1585, lambda_1589, TAIL_CALL,
  POS(4748, 3),
  POS(4750, 5),
  POS(4750, 5),
  POS(4749, 3)
};

static TAB_NUM t_lambda_1585[] = {
  1, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // !str text
  LET, 1, var_text, 1, var_str,
  // parse_remark_text !text $remark_text
  func_parse_remark_text, 0, 2, var_text, var_4753_25_remark_text,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_77_text_is_defined, lambda_1588, TAIL_CALL,
  POS(4751, 7),
  POS(4752, 7),
  POS(4753, 7),
  POS(4755, 14),
  POS(4754, 7)
};

static TAB_NUM t_lambda_77_text_is_defined[] = {
  1, // locals
  0, // parameters
  // parse_some_remark_lines !text $some_remark_lines
  func_parse_some_remark_lines, 0, 2, var_text, var_4756_31_some_remark_lines,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1586, lambda_1587, TAIL_CALL,
  POS(4756, 11),
  POS(4758, 18),
  POS(4757, 11)
};

static TAB_NUM t_lambda_1586[] = {
  1, // locals
  0, // parameters
  // funky_types::multiline_remark
  LET, -4, var_funky_types__multiline_remark, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_4748_1_position, var_funky__text_of, var_4753_25_remark_text, var_funky__lines_of, var_4756_31_some_remark_lines, LOCAL(1),
  // 
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(4761, 15),
  POS(4759, 15)
};

static TAB_NUM t_lambda_1587[] = {
  0, // locals
  0, // parameters
  //  undefined some_remark_lines
  LET, 2, var_undefined, var_4756_31_some_remark_lines, TAIL_CALL,
  POS(4766, 15)
};

static TAB_NUM t_lambda_1588[] = {
  0, // locals
  0, // parameters
  //  undefined remark_text
  LET, 2, var_undefined, var_4753_25_remark_text, TAIL_CALL,
  POS(4767, 11)
};

static TAB_NUM t_lambda_1589[] = {
  0, // locals
  0, // parameters
  // syntax_error "'#'"
  func_syntax_error, 1, string_10, TAIL_CALL,
  POS(4769, 7)
};

static TAB_NUM t_func_parse_multiline_remark_without_prefix[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_4772_1_position,
  // !str text
  LET, 1, var_text, 1, var_str,
  // parse_remark_text !text $remark_text
  func_parse_remark_text, 0, 2, var_text, var_4774_25_remark_text,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_78_text_is_defined, lambda_1592, TAIL_CALL,
  POS(4772, 3),
  POS(4773, 3),
  POS(4774, 3),
  POS(4776, 10),
  POS(4775, 3)
};

static TAB_NUM t_lambda_78_text_is_defined[] = {
  1, // locals
  0, // parameters
  // parse_some_remark_lines !text $some_remark_lines
  func_parse_some_remark_lines, 0, 2, var_text, var_4777_31_some_remark_lines,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1590, lambda_1591, TAIL_CALL,
  POS(4777, 7),
  POS(4779, 14),
  POS(4778, 7)
};

static TAB_NUM t_lambda_1590[] = {
  1, // locals
  0, // parameters
  // funky_types::multiline_remark
  LET, -4, var_funky_types__multiline_remark, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_4772_1_position, var_funky__text_of, var_4774_25_remark_text, var_funky__lines_of, var_4777_31_some_remark_lines, LOCAL(1),
  // 
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(4782, 11),
  POS(4780, 11)
};

static TAB_NUM t_lambda_1591[] = {
  0, // locals
  0, // parameters
  //  undefined some_remark_lines
  LET, 2, var_undefined, var_4777_31_some_remark_lines, TAIL_CALL,
  POS(4787, 11)
};

static TAB_NUM t_lambda_1592[] = {
  0, // locals
  0, // parameters
  //  undefined remark_text
  LET, 2, var_undefined, var_4774_25_remark_text, TAIL_CALL,
  POS(4788, 7)
};

static TAB_NUM t_func_parse_some_remark_lines[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 2, lambda_1593, lambda_1596, TAIL_CALL,
  POS(4791, 3)
};

static TAB_NUM t_lambda_1593[] = {
  2, // locals
  0, // parameters
  // text == "@nl;" && subgroups.is_defined
  var_std__equal, 2, var_text, string_2, 1, LOCAL(1),
  // text == "@nl;" && subgroups.is_defined
  var_std__and, 2, LOCAL(1), lambda_1594, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_1595, TAIL_CALL,
  POS(4793, 7),
  POS(4793, 7),
  POS(4792, 7)
};

static TAB_NUM t_lambda_1594[] = {
  1, // locals
  0, // parameters
  // is_defined
  var_is_defined, 1, var_subgroups, 1, LOCAL(1),
  // subgroups.is_defined
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(4793, 35),
  POS(4793, 25)
};

static TAB_NUM t_lambda_1595[] = {
  0, // locals
  0, // parameters
  // parse_remark_lines
  func_parse_remark_lines, 0, TAIL_CALL,
  POS(4795, 9)
};

static TAB_NUM t_lambda_1596[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_1597, TAIL_CALL,
  POS(4796, 7)
};

static TAB_NUM t_lambda_1597[] = {
  0, // locals
  0, // parameters
  //  text undefined
  LET, 2, var_text, var_undefined, TAIL_CALL,
  POS(4798, 9)
};

static TAB_NUM t_func_parse_remark_lines[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_4801_1_position,
  // !str text
  LET, 1, var_text, 1, var_str,
  // parse_remark_text !text $remark_text
  func_parse_remark_text, 0, 2, var_text, var_4803_25_remark_text,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1598, lambda_1599, TAIL_CALL,
  POS(4801, 3),
  POS(4802, 3),
  POS(4803, 3),
  POS(4805, 10),
  POS(4804, 3)
};

static TAB_NUM t_lambda_1598[] = {
  1, // locals
  0, // parameters
  // funky_types::remark_lines
  LET, -3, var_funky_types__remark_lines, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_4801_1_position, var_funky__text_of, var_4803_25_remark_text, LOCAL(1),
  // 
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(4808, 7),
  POS(4806, 7)
};

static TAB_NUM t_lambda_1599[] = {
  0, // locals
  0, // parameters
  //  undefined remark_text
  LET, 2, var_undefined, var_4803_25_remark_text, TAIL_CALL,
  POS(4812, 7)
};

static TAB_NUM t_func_parse_dummy_remark[] = {
  2, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_4815_1_position,
  // text(1) == '@nl;'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '@nl;'
  var_std__equal, 2, LOCAL(1), chr_10, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_1600, lambda_1601, TAIL_CALL,
  POS(4815, 3),
  POS(4817, 5),
  POS(4817, 5),
  POS(4816, 3)
};

static TAB_NUM t_lambda_1600[] = {
  1, // locals
  0, // parameters
  // funky_types::dummy_remark
  LET, -2, var_funky_types__dummy_remark, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_4815_1_position, LOCAL(1),
  // 
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(4820, 7),
  POS(4818, 7)
};

static TAB_NUM t_lambda_1601[] = {
  0, // locals
  0, // parameters
  // syntax_error "valid input characters or line end"
  func_syntax_error, 1, str_valid_input_char, TAIL_CALL,
  POS(4824, 7)
};

static FUNKY_CONSTANT constants_table[] = {
  {FLT_UNIQUE, 0, {.str_8 = "funky::SYNTAX_ERROR"}},
  {FLT_STRING_8, 2, {.str_8 = "\012\012"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky__line_indent_of}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky__line_text_of}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_3}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_4}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky__split_source_into_lines}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_5}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_line_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_loop}},
  {FLT_POSITIVE_INT64, 0, {.value = 1}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_6}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_7}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_8}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky__parse}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_convert_to_text_lines}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_9}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_10}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_11}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_12}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_13}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_14}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_group_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_15}},
  {FLT_STRING_8, 1, {.str_8 = "\012"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_to_list}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_16}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_17}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_18}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_19}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_syntax_error}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_20}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_21}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_22}},
  {FLT_STRING_8, 9, {.str_8 = " expected"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_groups}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_subgroups_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_23}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_24}},
  {FLT_POSITIVE_INT64, 0, {.value = 0}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_25}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_26}},
  {FLT_STRING_8, 18, {.str_8 = "Unexpected outdent"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_27}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_28}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_29}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_30}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_lines}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2_subgroups_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_31}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_32}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_33}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_34}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky__parse_top_level_statement_group}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky__parse_parameters_or_statement_group}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky__parse_line_start_arguments_group}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky__parse_multiline_string_components_group}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky__parse_parameter_group}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky__parse_multiline_remark_group}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_top_level_statement}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_35}},
  {FLT_CHARACTER, 0, {.value = 60}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_36}},
  {FLT_POSITIVE_INT64, 0, {.value = 2}},
  {FLT_NEGATIVE_INT64, 0, {.value = 1}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_37}},
  {FLT_CHARACTER, 0, {.value = 35}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_38}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_39}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_40}},
  {FLT_STRING_8, 19, {.str_8 = "top level statement"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_name}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_41}},
  {FLT_CHARACTER, 0, {.value = 97}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_42}},
  {FLT_CHARACTER, 0, {.value = 122}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_43}},
  {FLT_CHARACTER, 0, {.value = 65}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_44}},
  {FLT_CHARACTER, 0, {.value = 90}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_45}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_46}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_47}},
  {FLT_STRING_8, 4, {.str_8 = "name"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_more_name_characters}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_48}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_49}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_50}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_51}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_52}},
  {FLT_CHARACTER, 0, {.value = 48}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_53}},
  {FLT_CHARACTER, 0, {.value = 57}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_54}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_55}},
  {FLT_CHARACTER, 0, {.value = 95}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_56}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_57}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_58}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_more_name_words}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_59}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_60}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_61}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_62}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_63}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_64}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_65}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_66}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_67}},
  {FLT_STRING_8, 15, {.str_8 = "more name words"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_identifier}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_68}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_69}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_70}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_71}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_72}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_73}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_74}},
  {FLT_STRING_8, 10, {.str_8 = "identifier"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_more_identifier_characters}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_75}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_76}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_77}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_78}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_79}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_80}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_81}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_82}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_83}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_84}},
  {FLT_CHARACTER, 0, {.value = 58}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_85}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_86}},
  {FLT_POSITIVE_INT64, 0, {.value = 3}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_87}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_88}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_more_identifier_words}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_89}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_90}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_91}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_92}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_93}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_94}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_95}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_96}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_97}},
  {FLT_STRING_8, 21, {.str_8 = "more identifier words"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_versioned_identifier}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_98}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_99}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_100}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_101}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_102}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_103}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_104}},
  {FLT_STRING_8, 20, {.str_8 = "versioned identifier"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_more_versioned_identifier_characters}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_105}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_106}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_107}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_108}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_109}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_110}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_111}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_112}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_113}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_114}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_115}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_116}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_117}},
  {FLT_CHARACTER, 0, {.value = 45}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_118}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_119}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_120}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_more_versioned_identifier_words}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_121}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_122}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_123}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_124}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_125}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_126}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_127}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_128}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_129}},
  {FLT_STRING_8, 31, {.str_8 = "more versioned identifier words"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_namespace_description}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_130}},
  {FLT_CHARACTER, 0, {.value = 49}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_131}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_132}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_133}},
  {FLT_CHARACTER, 0, {.value = 117}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_134}},
  {FLT_CHARACTER, 0, {.value = 110}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_135}},
  {FLT_CHARACTER, 0, {.value = 115}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_136}},
  {FLT_POSITIVE_INT64, 0, {.value = 4}},
  {FLT_CHARACTER, 0, {.value = 116}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_137}},
  {FLT_POSITIVE_INT64, 0, {.value = 5}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_138}},
  {FLT_POSITIVE_INT64, 0, {.value = 6}},
  {FLT_CHARACTER, 0, {.value = 98}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_139}},
  {FLT_POSITIVE_INT64, 0, {.value = 7}},
  {FLT_CHARACTER, 0, {.value = 108}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_140}},
  {FLT_POSITIVE_INT64, 0, {.value = 8}},
  {FLT_CHARACTER, 0, {.value = 101}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_141}},
  {FLT_POSITIVE_INT64, 0, {.value = 9}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_142}},
  {FLT_POSITIVE_INT64, 0, {.value = 10}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_143}},
  {FLT_POSITIVE_INT64, 0, {.value = 11}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_144}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_145}},
  {FLT_STRING_8, 21, {.str_8 = "namespace description"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_more_major_digits_or_dot}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_146}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_147}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_148}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_149}},
  {FLT_CHARACTER, 0, {.value = 46}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_150}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_151}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_152}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_153}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_154}},
  {FLT_STRING_8, 24, {.str_8 = "more major digits or dot"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_more_minor_digits}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_155}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_156}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_157}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_158}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_159}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_160}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_161}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_162}},
  {FLT_STRING_8, 17, {.str_8 = "more minor digits"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_optional_version}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_163}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_164}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_165}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_166}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_parameters_or_statement}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_167}},
  {FLT_CHARACTER, 0, {.value = 40}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_168}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_169}},
  {FLT_CHARACTER, 0, {.value = 41}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_170}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_171}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_172}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_173}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_174}},
  {FLT_STRING_8, 23, {.str_8 = "parameters or statement"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_statement}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_175}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_176}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_177}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_178}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_179}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_head}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_180}},
  {FLT_CHARACTER, 0, {.value = 36}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_181}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_182}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_183}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_184}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_185}},
  {FLT_CHARACTER, 0, {.value = 33}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_186}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_187}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_188}},
  {FLT_CHARACTER, 0, {.value = 62}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_189}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_190}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_191}},
  {FLT_STRING_8, 4, {.str_8 = "head"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_statement_arguments}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_192}},
  {FLT_CHARACTER, 0, {.value = 32}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_193}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_194}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_195}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_196}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_197}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_198}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_199}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_200}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_201}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_202}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_203}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_204}},
  {FLT_CHARACTER, 0, {.value = 47}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_205}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_206}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_207}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_208}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_209}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_210}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_211}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_212}},
  {FLT_STRING_8, 19, {.str_8 = "statement arguments"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_213}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_214}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_215}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_216}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_217}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_218}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_inline_statement}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_219}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_220}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_221}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_222}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_223}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_inline_head}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_224}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_225}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_226}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_227}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_228}},
  {FLT_STRING_8, 11, {.str_8 = "inline head"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_some_inline_arguments}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_229}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_230}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_231}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_232}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_233}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_234}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_attribute_value_pair_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_type_function_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_method_value_pair_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_pair}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_3_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_235}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_236}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_237}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_meta_instruction}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_238}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_239}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_240}},
  {FLT_CHARACTER, 0, {.value = 109}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_241}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_242}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_243}},
  {FLT_CHARACTER, 0, {.value = 112}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_244}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_245}},
  {FLT_CHARACTER, 0, {.value = 99}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_246}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_247}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_248}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_249}},
  {FLT_CHARACTER, 0, {.value = 114}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_250}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_251}},
  {FLT_CHARACTER, 0, {.value = 113}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_252}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_253}},
  {FLT_CHARACTER, 0, {.value = 105}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_254}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_255}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_256}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_257}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_258}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_259}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_260}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_261}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_262}},
  {FLT_CHARACTER, 0, {.value = 103}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_263}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_264}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_265}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_266}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_267}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_268}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_269}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_270}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_271}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_272}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_273}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_274}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_275}},
  {FLT_CHARACTER, 0, {.value = 111}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_276}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_277}},
  {FLT_CHARACTER, 0, {.value = 118}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_278}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_279}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_280}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_281}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_282}},
  {FLT_STRING_8, 16, {.str_8 = "meta instruction"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_namespace_instruction_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_4_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_5_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_283}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_284}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_285}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_286}},
  {FLT_STRING_8, 3, {.str_8 = "'>'"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_287}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_288}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_require_instruction_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_6_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_289}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_290}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_291}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_292}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_293}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_using_instruction_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_7_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_8_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_294}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_295}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_296}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_297}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_298}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_299}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_alias_instruction_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_9_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_10_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_11_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_300}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_301}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_302}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_303}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_304}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_305}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_306}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_resolve_instruction_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_12_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_307}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_13_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_308}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_309}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_310}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_311}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_312}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_313}},
  {FLT_STRING_8, 3, {.str_8 = "'-'"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_314}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_allow_instruction}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_315}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_316}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_317}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_318}},
  {FLT_CHARACTER, 0, {.value = 119}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_319}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_320}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_14_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_321}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_322}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_323}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_324}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_325}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_326}},
  {FLT_STRING_8, 15, {.str_8 = "space character"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_327}},
  {FLT_STRING_8, 3, {.str_8 = "'w'"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_328}},
  {FLT_STRING_8, 3, {.str_8 = "'o'"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_329}},
  {FLT_STRING_8, 3, {.str_8 = "'l'"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_330}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_331}},
  {FLT_STRING_8, 3, {.str_8 = "'a'"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_filename}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_332}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_333}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_334}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_335}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_336}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_337}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_338}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_339}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_340}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_341}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_342}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_343}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_344}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_345}},
  {FLT_STRING_8, 8, {.str_8 = "filename"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_filename_characters}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_346}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_347}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_348}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_349}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_350}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_351}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_352}},
  {FLT_STRING_8, 19, {.str_8 = "filename characters"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_more_filename_characters}},
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
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_more_filename_words}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_366}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_367}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_368}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_369}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_370}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_371}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_372}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_373}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_374}},
  {FLT_STRING_8, 19, {.str_8 = "more filename words"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_alias}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_375}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_376}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_equal_sign}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_377}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_378}},
  {FLT_CHARACTER, 0, {.value = 61}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_379}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_380}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_381}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_382}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_383}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_384}},
  {FLT_STRING_8, 10, {.str_8 = "equal sign"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_version}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_385}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_386}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_387}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_388}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_389}},
  {FLT_STRING_8, 7, {.str_8 = "version"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_version_no_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_15_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_390}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_391}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_392}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_393}},
  {FLT_STRING_8, 3, {.str_8 = "'.'"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_394}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_minor}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_395}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_396}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_397}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_398}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_399}},
  {FLT_STRING_8, 5, {.str_8 = "minor"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_zero_or_more_digits}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_400}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_401}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_402}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_403}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_404}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_unstable}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_405}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_406}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_407}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_408}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_409}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_410}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_411}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_412}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_413}},
  {FLT_STRING_8, 3, {.str_8 = "'e'"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_414}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_415}},
  {FLT_STRING_8, 3, {.str_8 = "'b'"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_416}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_417}},
  {FLT_STRING_8, 3, {.str_8 = "'t'"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_418}},
  {FLT_STRING_8, 3, {.str_8 = "'s'"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_419}},
  {FLT_STRING_8, 3, {.str_8 = "'n'"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_420}},
  {FLT_STRING_8, 3, {.str_8 = "'u'"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_pragma}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_421}},
  {FLT_CHARACTER, 0, {.value = 104}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_422}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_423}},
  {FLT_CHARACTER, 0, {.value = 100}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_424}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_425}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_426}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_427}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_428}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_429}},
  {FLT_STRING_8, 6, {.str_8 = "pragma"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_allow_hidden_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_allow_unused}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_430}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_431}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_432}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_433}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_434}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_435}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_436}},
  {FLT_STRING_8, 3, {.str_8 = "'d'"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_437}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_438}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_439}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_440}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_441}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_functor_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_16_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_442}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_443}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_444}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_445}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_446}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_extensions}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_447}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_448}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_449}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_450}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_451}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_452}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_453}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_454}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_455}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_456}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_457}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_458}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_459}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_460}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_461}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_462}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_463}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_464}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_465}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_466}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_function_call_extension_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_17_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_467}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_468}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_469}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_470}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_471}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_attribute_access_extension_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_18_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_472}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_473}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_474}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_475}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_476}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_inline_functor}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_19_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_477}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_478}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_479}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_inline_extensions}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_480}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_481}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_482}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_483}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_484}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_485}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_486}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_487}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_488}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_489}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_490}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_491}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_492}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_493}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_inline_calls}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_494}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_495}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_496}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_497}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_498}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_499}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_500}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_501}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_502}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_503}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_504}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_505}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_inline_function_call_extension_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_20_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_506}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_507}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_508}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_509}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_510}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_inline_attribute_access_extension_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_21_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_511}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_512}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_513}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_514}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_515}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_io_call_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_function_call_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_516}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_517}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_optional_inline_arguments}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_518}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_519}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_520}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_521}},
  {FLT_STRING_8, 25, {.str_8 = "optional inline arguments"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_522}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_523}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_524}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_525}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_526}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_527}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_function_call_arguments}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_22_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_528}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_529}},
  {FLT_STRING_8, 3, {.str_8 = "')'"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_530}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_inline_return_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_531}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_532}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_attribute_access_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_533}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_534}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_some_argument}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_535}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_536}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_537}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_538}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_539}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_540}},
  {FLT_STRING_8, 13, {.str_8 = "some argument"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_some_arguments}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_541}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_542}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_543}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_544}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_545}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_546}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_547}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_548}},
  {FLT_CHARACTER, 0, {.value = 10}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_549}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_550}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_551}},
  {FLT_STRING_8, 14, {.str_8 = "some arguments"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_552}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_553}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_554}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_555}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_556}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_557}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_some_statement_arguments}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_558}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_559}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_560}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_561}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_562}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_563}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_564}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_565}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_566}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_567}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_568}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_569}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_570}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_571}},
  {FLT_STRING_8, 24, {.str_8 = "some statement arguments"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_572}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_573}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_574}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_575}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_576}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_577}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_spaced_arguments_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_578}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_579}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_spaced_statement_arguments_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_580}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_581}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_more_arguments}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_582}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_583}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_584}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_585}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_586}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_587}},
  {FLT_STRING_8, 2, {.str_8 = "\042\012"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_588}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_589}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_590}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_591}},
  {FLT_STRING_8, 14, {.str_8 = "more arguments"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_more_statement_arguments}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_592}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_593}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_594}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_595}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_596}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_597}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_598}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_599}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_600}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_601}},
  {FLT_STRING_8, 24, {.str_8 = "more statement arguments"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_arguments}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_23_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_602}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_603}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_604}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_605}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_606}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_even_more_statement_arguments}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_24_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_607}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_608}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_609}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_610}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_611}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_multiline_arguments}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_612}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_613}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_614}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_615}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_616}},
  {FLT_STRING_8, 34, {.str_8 = "valid input characters or line end"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_multiline_arguments_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_617}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_618}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_tagged_multiline_arguments_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_619}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_620}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_remark_and_multiline_function_call_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_25_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_621}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_622}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_623}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_624}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_625}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_argument}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_626}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_627}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_628}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_629}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_630}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_631}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_632}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_633}},
  {FLT_CHARACTER, 0, {.value = 38}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_634}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_635}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_636}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_637}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_638}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_639}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_640}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_641}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_642}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_643}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_644}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_645}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_646}},
  {FLT_STRING_8, 8, {.str_8 = "argument"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_line_start_arguments}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_647}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_648}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_649}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_650}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_651}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_652}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_653}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_654}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_655}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_656}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_657}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_658}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_659}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_660}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_661}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_662}},
  {FLT_CHARACTER, 0, {.value = 43}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_663}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_664}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_665}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_666}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_667}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_668}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_669}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_670}},
  {FLT_CHARACTER, 0, {.value = 42}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_671}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_672}},
  {FLT_STRING_8, 2, {.str_8 = "/\012"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_673}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_674}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_675}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_676}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_677}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_678}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_679}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_680}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_681}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_682}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_683}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_684}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_685}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_686}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_687}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_688}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_689}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_690}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_691}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_692}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_693}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_694}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_695}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_696}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_697}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_698}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_699}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_700}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_701}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_702}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_703}},
  {FLT_CHARACTER, 0, {.value = 124}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_704}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_705}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_706}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_707}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_708}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_709}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_710}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_711}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_712}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_713}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_714}},
  {FLT_CHARACTER, 0, {.value = 94}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_715}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_716}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_717}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_718}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_719}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_720}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_721}},
  {FLT_STRING_8, 20, {.str_8 = "line start arguments"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_dummy_definition_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_722}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_723}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_variable_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_724}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_725}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_definition_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_726}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_727}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_redefinition_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_26_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_728}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_729}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_730}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_update_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_27_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_731}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_732}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_733}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_expression}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_28_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_734}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_735}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_736}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_737}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_738}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_739}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_key_value_operator}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_740}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_741}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_742}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_743}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_744}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_745}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_746}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_747}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_key_value}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_sequence_expression}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_29_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_748}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_749}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_750}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_751}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_752}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_753}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_comma_operator}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_754}},
  {FLT_CHARACTER, 0, {.value = 44}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_755}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_756}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_757}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_758}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_759}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_760}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_761}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_762}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_763}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_764}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_comma}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_comma_expression}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_30_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_765}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_766}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_767}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_768}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_769}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_770}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_conditional_expression}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_31_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_771}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_772}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_773}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_774}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_775}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_logical_operator}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_776}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_777}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_778}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_779}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_780}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_781}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_782}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_783}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_784}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_785}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_786}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_787}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_and}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_and_expression}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_32_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_788}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_789}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_790}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_791}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_792}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_793}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_and_operator}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_794}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_795}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_796}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_797}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_798}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_799}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_800}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_or}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_or_expression}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_33_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_801}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_802}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_803}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_804}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_805}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_806}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_or_operator}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_807}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_808}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_809}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_810}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_811}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_812}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_813}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_named_operator_expression}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_34_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_814}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_815}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_816}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_817}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_818}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_optional_named_operator}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_819}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_820}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_821}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_822}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_823}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_named_operator_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_35_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_824}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_825}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_826}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_827}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_828}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_829}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_830}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_range_expression}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_36_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_831}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_832}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_833}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_834}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_835}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_range_operator}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_836}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_837}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_838}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_839}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_840}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_841}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_842}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_843}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_844}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_845}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_range}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_relational_expression}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_37_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_846}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_847}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_848}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_849}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_850}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_851}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_comparison_operator}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_852}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_853}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_854}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_855}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_856}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_857}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_858}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_859}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_860}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_861}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_862}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_863}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_864}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_865}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_866}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_867}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_868}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_869}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_870}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_871}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_872}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_873}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_874}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_875}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_876}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_877}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_878}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_879}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_880}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_881}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_882}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_883}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_884}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_885}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_886}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_887}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_888}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_889}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_890}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_891}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_892}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_893}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_894}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_895}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_896}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_897}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_equal}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_not_equal}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_less_equal}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_less_than}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_greater_equal}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_greater_than}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_tagged_bit_expression}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_38_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_898}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_899}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_900}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_901}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_902}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_903}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_bit_expression}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_39_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_904}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_905}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_906}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_907}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_908}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_bit_operator}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_909}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_910}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_911}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_912}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_913}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_914}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_915}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_916}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_917}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_918}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_919}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_920}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_921}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_922}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_923}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_924}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_925}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_926}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_927}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_928}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_929}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_930}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_931}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_932}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_933}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_934}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_935}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_936}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_937}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_938}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_939}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_940}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_941}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_942}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_943}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_944}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_shift_left}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_shift_right}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_bit_and}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_bit_and2}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_40_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_945}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_946}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_947}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_948}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_949}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_950}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_bit_and_operator}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_951}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_952}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_953}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_954}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_955}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_956}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_957}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_958}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_bit_or}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_bit_or2}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_41_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_959}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_960}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_961}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_962}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_963}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_964}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_bit_or_operator}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_965}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_966}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_967}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_968}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_969}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_970}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_971}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_972}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_bit_xor}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_bit_xor2}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_42_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_973}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_974}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_975}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_976}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_977}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_978}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_bit_xor_operator}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_979}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_980}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_981}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_982}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_983}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_984}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_985}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_986}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_tagged_additive_expression}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_43_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_987}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_988}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_989}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_990}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_991}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_992}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_additive_expression}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_44_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_993}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_994}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_995}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_996}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_997}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_additive_operator}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_998}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_999}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1000}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1001}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1002}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1003}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1004}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1005}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1006}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1007}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1008}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1009}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1010}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1011}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_plus}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_plus2}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_45_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1012}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1013}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1014}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1015}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1016}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1017}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_minus}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_minus2}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_46_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1018}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1019}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1020}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1021}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1022}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1023}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_multiplicative_expression}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_47_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1024}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1025}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1026}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1027}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1028}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_multiplicative_operator}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1029}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1030}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1031}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1032}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1033}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1034}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1035}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1036}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1037}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1038}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1039}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1040}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1041}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1042}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_times}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_times2}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_48_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1043}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1044}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1045}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1046}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1047}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1048}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_over}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_over2}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_49_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1049}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1050}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1051}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1052}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1053}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1054}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_an_expression}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1055}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1056}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1057}},
  {FLT_CHARACTER, 0, {.value = 39}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1058}},
  {FLT_CHARACTER, 0, {.value = 64}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1059}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1060}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1061}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1062}},
  {FLT_CHARACTER, 0, {.value = 34}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1063}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1064}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1065}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1066}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1067}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1068}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1069}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1070}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1071}},
  {FLT_CHARACTER, 0, {.value = 96}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1072}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1073}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1074}},
  {FLT_STRING_8, 13, {.str_8 = "an expression"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_parenthesed_expression_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_50_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1075}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1076}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1077}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1078}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1079}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_inline_expression}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1080}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1081}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1082}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1083}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1084}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1085}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1086}},
  {FLT_STRING_8, 17, {.str_8 = "inline expression"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_backquoted_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1087}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1088}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_negation_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1089}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1090}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_multiline_operator}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_51_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1091}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1092}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1093}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1094}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1095}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1096}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_multiline_plus_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_multiline_minus_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_52_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1097}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1098}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1099}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1100}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1101}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1102}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_multiline_minus_with_remark_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_53_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1103}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1104}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1105}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1106}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1107}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1108}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_multiline_times_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_multiline_over_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1109}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1110}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_multiline_over_with_remark_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_54_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1111}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1112}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1113}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1114}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1115}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1116}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_multiline_shift_left_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_multiline_shift_right_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_multiline_equal_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_multiline_not_equal_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_multiline_less_equal_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_multiline_less_than_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_multiline_greater_equal_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_multiline_greater_than_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_multiline_and_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_multiline_or_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_multiline_bit_and_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_55_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1117}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1118}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1119}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1120}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1121}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1122}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_multiline_bit_and_with_remark_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_56_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1123}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1124}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1125}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1126}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1127}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1128}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_multiline_bit_or_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_multiline_bit_xor_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_multiline_assign_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_inline_arguments}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1129}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1130}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1131}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1132}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1133}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1134}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1135}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1136}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1137}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1138}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1139}},
  {FLT_STRING_8, 16, {.str_8 = "inline arguments"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1140}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1141}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1142}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1143}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1144}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1145}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_inline_attribute_value_pair_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_57_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1146}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1147}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1148}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1149}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1150}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_inline_method_value_pair_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_58_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1151}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1152}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1153}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1154}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1155}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_expression_and_inline_arguments}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_59_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1156}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1157}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1158}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1159}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1160}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_spaced_inline_arguments}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1161}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1162}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1163}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1164}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_spaced_inline_arguments_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1165}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1166}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_numeric_literal}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1167}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1168}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_digits}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1169}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1170}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1171}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1172}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1173}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1174}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1175}},
  {FLT_STRING_8, 6, {.str_8 = "digits"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_maybe_non_decimal_numeric_literal}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1176}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1177}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1178}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1179}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1180}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1181}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1182}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1183}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1184}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1185}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1186}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1187}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1188}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1189}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1190}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1191}},
  {FLT_CHARACTER, 0, {.value = 120}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1192}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1193}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1194}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_more_decimal_digits}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1195}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1196}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1197}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1198}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1199}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1200}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1201}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1202}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1203}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1204}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1205}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1206}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1207}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1208}},
  {FLT_CHARACTER, 0, {.value = 69}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1209}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1210}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1211}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_more_fraction_digits}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1212}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1213}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1214}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1215}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1216}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1217}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1218}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1219}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1220}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_exponent}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1221}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1222}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1223}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1224}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1225}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1226}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1227}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1228}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1229}},
  {FLT_STRING_8, 8, {.str_8 = "exponent"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_exponent_digits}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1230}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1231}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1232}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1233}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1234}},
  {FLT_STRING_8, 15, {.str_8 = "exponent digits"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_more_exponent_digits}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1235}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1236}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1237}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1238}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1239}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_binary_digits}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1240}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1241}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1242}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1243}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1244}},
  {FLT_STRING_8, 13, {.str_8 = "binary digits"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_more_binary_digits}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1245}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1246}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1247}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1248}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1249}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1250}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1251}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1252}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1253}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_octal_digits}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1254}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1255}},
  {FLT_CHARACTER, 0, {.value = 55}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1256}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1257}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1258}},
  {FLT_STRING_8, 12, {.str_8 = "octal digits"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_more_octal_digits}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1259}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1260}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1261}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1262}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1263}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1264}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1265}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1266}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1267}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_hex_digits}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1268}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1269}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1270}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1271}},
  {FLT_CHARACTER, 0, {.value = 102}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1272}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1273}},
  {FLT_CHARACTER, 0, {.value = 70}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1274}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1275}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1276}},
  {FLT_STRING_8, 10, {.str_8 = "hex digits"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_more_hex_digits}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1277}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1278}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1279}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1280}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1281}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1282}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1283}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1284}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1285}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1286}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1287}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1288}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1289}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1290}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1291}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1292}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1293}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_special_character_literal}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1294}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1295}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1296}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1297}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1298}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1299}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1300}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1301}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1302}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1303}},
  {FLT_STRING_8, 25, {.str_8 = "special character literal"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_at_character_literal_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_named_character_literal_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_60_text_is_defined}},
  {FLT_CHARACTER, 0, {.value = 59}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1304}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1305}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1306}},
  {FLT_STRING_8, 12, {.str_8 = "single quote"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1307}},
  {FLT_STRING_8, 3, {.str_8 = "';'"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1308}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_numeric_character_literal}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_61_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1309}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1310}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1311}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1312}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1313}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_character_literal_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_62_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1314}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1315}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1316}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_character}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1317}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1318}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1319}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1320}},
  {FLT_STRING_8, 9, {.str_8 = "character"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_more_character_name_characters}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1321}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1322}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1323}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1324}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1325}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1326}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1327}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1328}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1329}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_string_literal_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1330}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1331}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_string_components}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1332}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1333}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1334}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1335}},
  {FLT_STRING_8, 17, {.str_8 = "string components"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1336}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1337}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1338}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1339}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1340}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1341}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_some_string_components}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_63_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1342}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1343}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1344}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1345}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1346}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_string_component}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1347}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1348}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1349}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1350}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1351}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1352}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1353}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1354}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1355}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1356}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1357}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1358}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1359}},
  {FLT_STRING_8, 16, {.str_8 = "string component"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_character_sequence}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1360}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1361}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_string_characters}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1362}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1363}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1364}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1365}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1366}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1367}},
  {FLT_STRING_8, 17, {.str_8 = "string characters"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_more_string_characters}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1368}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1369}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1370}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1371}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1372}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1373}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_multiline_string_literal_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1374}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1375}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_multiline_string_components}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1376}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1377}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1378}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1379}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1380}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1381}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1382}},
  {FLT_STRING_8, 27, {.str_8 = "multiline string components"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1383}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1384}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1385}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1386}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1387}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1388}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_newline_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_some_string_line_components}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_64_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1389}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1390}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1391}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1392}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1393}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_string_line_component}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1394}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1395}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1396}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1397}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1398}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1399}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1400}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1401}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1402}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1403}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1404}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1405}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1406}},
  {FLT_STRING_8, 21, {.str_8 = "string line component"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_string_line_end_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_at_character_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_tagged_empty_character_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1407}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1408}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_empty_character_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_escape_expression_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_65_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1409}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1410}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1411}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_special_character}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1412}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1413}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1414}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1415}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1416}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1417}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1418}},
  {FLT_STRING_8, 17, {.str_8 = "special character"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_named_character_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_66_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1419}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1420}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1421}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_numeric_character}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_67_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1422}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1423}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1424}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_string_line_character_sequence}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1425}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1426}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_string_line_characters}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1427}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1428}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1429}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1430}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1431}},
  {FLT_STRING_8, 22, {.str_8 = "string line characters"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_more_string_line_characters}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1432}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1433}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1434}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1435}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1436}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_unique_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1437}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1438}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_attribute_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1439}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1440}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_attribute_with_setter_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1441}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1442}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_body}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_68_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_69_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1443}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1444}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1445}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1446}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_optional_line_end_remark}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1447}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1448}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1449}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1450}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1451}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_body_statements}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1452}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1453}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1454}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1455}},
  {FLT_STRING_8, 15, {.str_8 = "body statements"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1456}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1457}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1458}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1459}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1460}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1461}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_line_end_statement_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_inline_body_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_70_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1462}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1463}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1464}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1465}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1466}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_statements}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1467}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1468}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1469}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1470}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1471}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_inline_parameters}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1472}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1473}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1474}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1475}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1476}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1477}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1478}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1479}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1480}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1481}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1482}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_some_inline_parameters}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1483}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1484}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1485}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1486}},
  {FLT_STRING_8, 22, {.str_8 = "some inline parameters"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_one_or_more_inline_parameters}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_71_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1487}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1488}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1489}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1490}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1491}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_maybe_more_inline_parameters}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1492}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1493}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1494}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1495}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1496}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1497}},
  {FLT_STRING_8, 28, {.str_8 = "maybe more inline parameters"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_parameter_name}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1498}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1499}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1500}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1501}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1502}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1503}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1504}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1505}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1506}},
  {FLT_STRING_8, 14, {.str_8 = "parameter name"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_open_parameters_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_72_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1507}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1508}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1509}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1510}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1511}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1512}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_inline_parameter}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_73_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1513}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1514}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1515}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_parameter}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_74_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_75_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1516}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1517}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1518}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1519}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_parameter_option}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1520}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1521}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1522}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1523}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1524}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1525}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1526}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1527}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1528}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1529}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_myself_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_rest_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_initial_value_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1530}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1531}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_simple_operand}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1532}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1533}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1534}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1535}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1536}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1537}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1538}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1539}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1540}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1541}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1542}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1543}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1544}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1545}},
  {FLT_STRING_8, 14, {.str_8 = "simple operand"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_close_parameters_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1546}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1547}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_return_expression_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1548}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1549}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_return_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_remark}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1550}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1551}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1552}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1553}},
  {FLT_STRING_8, 3, {.str_8 = "'#'"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_remark_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1554}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1555}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_remark_text}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1556}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1557}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1558}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1559}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_trailing_remarks}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1560}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1561}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1562}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1563}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1564}},
  {FLT_STRING_8, 16, {.str_8 = "trailing remarks"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_line_end_and_line_remarks}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_76_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1565}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1566}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1567}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1568}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1569}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_trailing_remark}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1570}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1571}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1572}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1573}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1574}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1575}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1576}},
  {FLT_STRING_8, 15, {.str_8 = "trailing remark"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_line_remarks}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1577}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1578}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1579}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1580}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_line_remarks_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1581}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1582}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_spaced_remark_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1583}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1584}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_multiline_remark}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1585}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_77_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1586}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1587}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1588}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1589}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_multiline_remark_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_78_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1590}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1591}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1592}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_some_remark_lines}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1593}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1594}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1595}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1596}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1597}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_remark_lines}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1598}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1599}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_dummy_remark}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1600}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1601}}
};

static FUNKY_VARIABLE variables_table[] = {
  {
    FOT_DERIVED, 0, 0,
    "current_filename\000funky", NULL,
    {"undefined\000"}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "undefined\000", NULL,
    {.position = POS(9, 26)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "assign\000std", NULL,
    {.position = POS(9, 1)}
  },
  {
    FOT_DERIVED, 0, 0,
    "current_group\000", NULL,
    {"undefined\000"}
  },
  {
    FOT_DERIVED, 0, 0,
    "text\000", NULL,
    {"undefined\000"}
  },
  {
    FOT_DERIVED, 0, 0,
    "str\000", NULL,
    {"undefined\000"}
  },
  {
    FOT_DERIVED, 0, 0,
    "subgroups\000", NULL,
    {"undefined\000"}
  },
  {
    FOT_DERIVED, 0, 0,
    "expected\000", NULL,
    {"undefined\000"}
  },
  {
    FOT_DERIVED, 0, 0,
    "at\000", NULL,
    {"undefined\000"}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "SYNTAX_ERROR\000funky", NULL,
    {.const_idx = -uni_funky__SYNTAX_ERROR}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "line_indent_of\000funky", NULL,
    {.const_idx = -func_funky__line_indent_of}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "27_25_line\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_defined\000", NULL,
    {.position = POS(29, 10)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "first\000", NULL,
    {.position = POS(30, 8)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if\000", NULL,
    {.position = POS(28, 3)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "line_text_of\000funky", NULL,
    {.const_idx = -func_funky__line_text_of}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "33_23_line\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "second\000", NULL,
    {.position = POS(36, 8)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "split_source_into_lines\000funky", NULL,
    {.const_idx = -func_funky__split_source_into_lines}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "40_27_lines\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "split_into_indented_lines\000", NULL,
    {.position = POS(40, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "41_12_line_no\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "41_20_line\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "44_1_prev_line_no\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "dec\000", NULL,
    {.position = POS(46, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "less\000std", NULL,
    {.position = POS(48, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "or\000std", NULL,
    {.position = POS(48, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "minus\000std", NULL,
    {.position = POS(52, 33)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "line_no_of\000funky", NULL,
    {.position = POS(51, 18)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "skip_of\000funky", NULL,
    {.position = POS(52, 18)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "next\000", NULL,
    {.position = POS(53, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "loop\000", NULL,
    {.position = POS(45, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "map\000", NULL,
    {.position = POS(41, 3)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "parse\000funky", NULL,
    {.const_idx = -func_funky__parse}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "63_31_left\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "63_36_right\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_undefined\000", NULL,
    {.position = POS(65, 16)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "min\000", NULL,
    {.position = POS(71, 18)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "61_1_min_indent\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "map_reduce\000", NULL,
    {.position = POS(62, 5)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "72_13_group\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "spaces\000", NULL,
    {.position = POS(77, 35)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "append\000", NULL,
    {.position = POS(77, 28)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "tuple\000", NULL,
    {.position = POS(77, 11)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "81_11_node\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_list\000", NULL,
    {.position = POS(84, 8)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_a_list\000", NULL,
    {.position = POS(87, 14)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "list\000", NULL,
    {.position = POS(89, 12)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "91_16_item\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "length_of\000", NULL,
    {.position = POS(92, 8)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000std", NULL,
    {.position = POS(92, 8)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "equal\000std", NULL,
    {.position = POS(96, 32)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "and\000std", NULL,
    {.position = POS(96, 18)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "string\000", NULL,
    {.position = POS(94, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "error\000", NULL,
    {.position = POS(101, 5)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "106_16_parse_function\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "109_1_indent\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "split_into_groups\000", NULL,
    {.position = POS(114, 18)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "114_42_head\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "subgroups_of\000", NULL,
    {.position = POS(124, 24)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "125_1_node\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "132_15_parse_function\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "139_1_node\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "parse_top_level_statement_group\000funky", NULL,
    {.const_idx = -func_funky__parse_top_level_statement_group}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "parse_parameters_or_statement_group\000funky", NULL,
    {.const_idx = -func_funky__parse_parameters_or_statement_group}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "parse_line_start_arguments_group\000funky", NULL,
    {.const_idx = -func_funky__parse_line_start_arguments_group}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "parse_multiline_string_components_group\000funky", NULL,
    {.const_idx = -func_funky__parse_multiline_string_components_group}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "parse_parameter_group\000funky", NULL,
    {.const_idx = -func_funky__parse_parameter_group}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "parse_multiline_remark_group\000funky", NULL,
    {.const_idx = -func_funky__parse_multiline_remark_group}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "range\000", NULL,
    {.position = POS(178, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "true\000", NULL,
    {.position = POS(186, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "cond\000", NULL,
    {.position = POS(174, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not\000std", NULL,
    {.position = POS(195, 8)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "414_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "415_18_head\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "418_33_statement_arguments\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "statement\000funky_types", NULL,
    {.position = POS(426, 15)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "source_group_of\000funky", NULL,
    {.position = POS(427, 18)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "source_position_of\000funky", NULL,
    {.position = POS(428, 18)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "head_of\000funky", NULL,
    {.position = POS(429, 18)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "arguments_of\000funky", NULL,
    {.position = POS(430, 18)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "469_12_expr\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "525_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "526_25_inline_head\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "529_35_some_inline_arguments\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "inline_statement\000funky_types", NULL,
    {.position = POS(537, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "attribute_value_pair\000funky_types", NULL,
    {.position = POS(580, 14)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "type_function\000funky_types", NULL,
    {.position = POS(584, 14)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "method_value_pair\000funky_types", NULL,
    {.position = POS(588, 14)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "592_0_derived_node\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "594_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "596_24_identifier\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "599_27_some_argument\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "pair\000funky_types", NULL,
    {.position = POS(604, 38)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "default_value\000", NULL,
    {.position = POS(604, 11)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "identifier_of\000funky", NULL,
    {.position = POS(607, 14)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "argument_of\000funky", NULL,
    {.position = POS(608, 14)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "685_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "687_18_name\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "690_30_optional_version\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "696_30_trailing_remarks\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "namespace_instruction\000funky_types", NULL,
    {.position = POS(701, 19)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "name_of\000funky", NULL,
    {.position = POS(704, 22)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "version_of\000funky", NULL,
    {.position = POS(705, 22)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "remarks_of\000funky", NULL,
    {.position = POS(706, 22)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "714_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "716_22_filename\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "722_30_trailing_remarks\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "require_instruction\000funky_types", NULL,
    {.position = POS(727, 15)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "filename_of\000funky", NULL,
    {.position = POS(730, 18)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "738_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "740_18_name\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "743_30_optional_version\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "749_30_trailing_remarks\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "using_instruction\000funky_types", NULL,
    {.position = POS(754, 19)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "767_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "768_19_alias\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "771_24_equal_sign\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "775_18_name\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "781_30_trailing_remarks\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "alias_instruction\000funky_types", NULL,
    {.position = POS(786, 23)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "alias_of\000funky", NULL,
    {.position = POS(789, 26)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "sign_of\000funky", NULL,
    {.position = POS(790, 26)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "801_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "803_18_name\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "809_21_version\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "815_30_trailing_remarks\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "resolve_instruction\000funky_types", NULL,
    {.position = POS(820, 23)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "835_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "849_20_pragma\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "855_30_trailing_remarks\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "allow_instruction\000funky_types", NULL,
    {.position = POS(860, 39)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "pragma_of\000funky", NULL,
    {.position = POS(863, 42)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "951_18_name\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "991_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "992_33_major\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "999_19_minor\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "version_no\000funky_types", NULL,
    {.position = POS(1004, 15)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "major_of\000funky", NULL,
    {.position = POS(1007, 18)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "minor_of\000funky", NULL,
    {.position = POS(1008, 18)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1036_1_position\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "unstable\000funky_types", NULL,
    {.position = POS(1055, 35)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "allow_hidden\000funky_types", NULL,
    {.position = POS(1099, 5)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1104_1_position\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "allow_unused\000funky_types", NULL,
    {.position = POS(1119, 27)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1136_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1137_40_identifier\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1145_13_extensions\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "functor\000funky_types", NULL,
    {.position = POS(1150, 11)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "extensions_of\000funky", NULL,
    {.position = POS(1154, 14)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1159_12_expr\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1198_42_function_call\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1201_24_extensions\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1218_45_attribute_access\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1221_24_extensions\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1237_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1239_24_identifier\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1242_31_inline_extensions\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1256_12_expr\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1283_12_expr\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1306_42_function_call\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1309_31_inline_extensions\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1326_45_attribute_access\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1329_31_inline_extensions\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "io_call\000funky_types", NULL,
    {.position = POS(1348, 5)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1353_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1354_39_optional_inline_arguments\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "function_call\000funky_types", NULL,
    {.position = POS(1359, 7)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1366_12_expr\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1385_30_inline_arguments\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1398_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1399_37_spaced_inline_arguments\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "inline_return\000funky_types", NULL,
    {.position = POS(1404, 7)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1411_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1413_24_identifier\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "attribute_access\000funky_types", NULL,
    {.position = POS(1418, 7)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1444_12_expr\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1474_12_expr\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1509_28_more_arguments\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1519_38_more_statement_arguments\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1581_22_argument\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1584_28_some_arguments\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1601_22_argument\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1604_38_some_statement_arguments\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1623_1_line_start_arguments\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_an_error\000", NULL,
    {.position = POS(1624, 46)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1624_1_error\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "find_first\000", NULL,
    {.position = POS(1624, 14)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1635_1_line_start_arguments\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1636_1_error\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1644_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1645_1_line_start_arguments\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1646_1_error\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1657_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1658_42_spaced_remark\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1663_1_line_start_arguments\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1664_1_error\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "remark_and_multiline_function_call\000funky_types", NULL,
    {.position = POS(1669, 15)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "remark_of\000funky", NULL,
    {.position = POS(1672, 18)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1911_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1913_18_name\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "dummy_definition\000funky_types", NULL,
    {.position = POS(1918, 7)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1925_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1926_40_identifier\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "variable\000funky_types", NULL,
    {.position = POS(1931, 7)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1938_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1940_34_versioned_identifier\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "definition\000funky_types", NULL,
    {.position = POS(1945, 7)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1952_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1954_24_identifier\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1957_31_inline_extensions\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "redefinition\000funky_types", NULL,
    {.position = POS(1962, 11)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1971_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1973_24_identifier\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1976_31_inline_extensions\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "update\000funky_types", NULL,
    {.position = POS(1981, 11)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1991_0_derived_node\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1993_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1994_33_sequence_expression\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1997_32_key_value_operator\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "expression\000funky_types", NULL,
    {.position = POS(2005, 42)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "expression_of\000funky", NULL,
    {.position = POS(2008, 18)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "operator_of\000funky", NULL,
    {.position = POS(2009, 18)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "key_value\000funky_types", NULL,
    {.position = POS(2035, 29)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2039_0_derived_node\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2041_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2042_36_conditional_expression\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2045_28_comma_operator\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "sequence_expression\000funky_types", NULL,
    {.position = POS(2053, 42)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "comma\000funky_types", NULL,
    {.position = POS(2090, 26)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2094_0_derived_node\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2096_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2097_33_sequence_expression\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2100_28_comma_operator\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2118_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2119_39_named_operator_expression\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2122_30_logical_operator\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "and\000funky_types", NULL,
    {.position = POS(2165, 24)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2169_0_derived_node\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2171_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2172_39_named_operator_expression\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2175_26_and_operator\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "or\000funky_types", NULL,
    {.position = POS(2209, 23)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2213_0_derived_node\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2215_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2216_39_named_operator_expression\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2219_25_or_operator\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2252_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2253_30_range_expression\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2256_37_optional_named_operator\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2296_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2298_24_identifier\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2306_30_range_expression\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "named_operator\000funky_types", NULL,
    {.position = POS(2311, 19)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2324_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2325_35_relational_expression\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2328_28_range_operator\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "range\000funky_types", NULL,
    {.position = POS(2369, 31)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2373_0_derived_node\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2375_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2376_28_bit_expression\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2379_33_comparison_operator\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "equal\000funky_types", NULL,
    {.position = POS(2494, 31)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not_equal\000funky_types", NULL,
    {.position = POS(2498, 31)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "less_equal\000funky_types", NULL,
    {.position = POS(2502, 31)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "less_than\000funky_types", NULL,
    {.position = POS(2506, 31)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "greater_equal\000funky_types", NULL,
    {.position = POS(2510, 31)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "greater_than\000funky_types", NULL,
    {.position = POS(2514, 31)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2518_0_derived_node\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2520_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2521_33_additive_expression\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2524_26_bit_operator\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "tagged_bit_expression\000funky_types", NULL,
    {.position = POS(2532, 42)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2542_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2543_33_additive_expression\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2546_26_bit_operator\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "shift_left\000funky_types", NULL,
    {.position = POS(2642, 36)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "shift_right\000funky_types", NULL,
    {.position = POS(2646, 36)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "bit_and\000funky_types", NULL,
    {.position = POS(2650, 18)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2654_0_derived_node\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2656_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2657_33_additive_expression\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2660_30_bit_and_operator\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "bit_and2\000funky_types", NULL,
    {.position = POS(2668, 42)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "bit_or\000funky_types", NULL,
    {.position = POS(2698, 17)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2702_0_derived_node\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2704_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2705_33_additive_expression\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2708_29_bit_or_operator\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "bit_or2\000funky_types", NULL,
    {.position = POS(2716, 42)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "bit_xor\000funky_types", NULL,
    {.position = POS(2746, 18)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2750_0_derived_node\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2752_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2753_33_additive_expression\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2756_30_bit_xor_operator\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "bit_xor2\000funky_types", NULL,
    {.position = POS(2764, 42)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2794_0_derived_node\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2796_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2797_39_multiplicative_expression\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2800_31_additive_operator\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "tagged_additive_expression\000funky_types", NULL,
    {.position = POS(2808, 42)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2818_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2819_39_multiplicative_expression\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2822_31_additive_operator\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000funky_types", NULL,
    {.position = POS(2873, 15)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2877_0_derived_node\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2879_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2880_39_multiplicative_expression\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2883_31_additive_operator\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus2\000funky_types", NULL,
    {.position = POS(2891, 42)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "minus\000funky_types", NULL,
    {.position = POS(2902, 16)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2906_0_derived_node\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2908_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2909_39_multiplicative_expression\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2912_31_additive_operator\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "minus2\000funky_types", NULL,
    {.position = POS(2920, 42)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2930_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2931_27_an_expression\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2934_37_multiplicative_operator\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "times\000funky_types", NULL,
    {.position = POS(2985, 16)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2989_0_derived_node\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2991_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2992_27_an_expression\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2995_37_multiplicative_operator\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "times2\000funky_types", NULL,
    {.position = POS(3003, 42)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "over\000funky_types", NULL,
    {.position = POS(3014, 15)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3018_0_derived_node\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3020_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3021_27_an_expression\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3024_37_multiplicative_operator\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "over2\000funky_types", NULL,
    {.position = POS(3032, 42)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3089_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3090_31_inline_expression\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3096_26_inline_calls\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "parenthesed_expression\000funky_types", NULL,
    {.position = POS(3101, 15)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "calls_of\000funky", NULL,
    {.position = POS(3105, 18)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3133_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3134_27_an_expression\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "backquoted\000funky_types", NULL,
    {.position = POS(3139, 7)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3146_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3147_27_an_expression\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "negation\000funky_types", NULL,
    {.position = POS(3152, 7)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3160_0_derived_node\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3162_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3163_29_trailing_remark\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3168_1_line_start_arguments\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3169_1_error\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "multiline_operator\000funky_types", NULL,
    {.position = POS(3174, 42)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "multiline_plus\000funky_types", NULL,
    {.position = POS(3185, 28)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3188_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3189_26_dummy_remark\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3194_1_line_start_arguments\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3195_1_error\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "multiline_minus\000funky_types", NULL,
    {.position = POS(3200, 15)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3210_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3211_20_remark\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3216_1_line_start_arguments\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3217_1_error\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "multiline_minus_with_remark\000funky_types", NULL,
    {.position = POS(3222, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "multiline_times\000funky_types", NULL,
    {.position = POS(3233, 28)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3236_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3237_1_line_start_arguments\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3238_1_error\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "multiline_over\000funky_types", NULL,
    {.position = POS(3243, 7)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3249_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3250_20_remark\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3255_1_line_start_arguments\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3256_1_error\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "multiline_over_with_remark\000funky_types", NULL,
    {.position = POS(3261, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "multiline_shift_left\000funky_types", NULL,
    {.position = POS(3272, 28)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "multiline_shift_right\000funky_types", NULL,
    {.position = POS(3276, 28)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "multiline_equal\000funky_types", NULL,
    {.position = POS(3280, 28)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "multiline_not_equal\000funky_types", NULL,
    {.position = POS(3284, 28)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "multiline_less_equal\000funky_types", NULL,
    {.position = POS(3288, 28)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "multiline_less_than\000funky_types", NULL,
    {.position = POS(3292, 28)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "multiline_greater_equal\000funky_types", NULL,
    {.position = POS(3296, 28)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "multiline_greater_than\000funky_types", NULL,
    {.position = POS(3300, 28)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "multiline_and\000funky_types", NULL,
    {.position = POS(3304, 28)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "multiline_or\000funky_types", NULL,
    {.position = POS(3308, 28)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3311_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3312_26_dummy_remark\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3317_1_line_start_arguments\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3318_1_error\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "multiline_bit_and\000funky_types", NULL,
    {.position = POS(3323, 15)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3333_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3334_20_remark\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3339_1_line_start_arguments\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3340_1_error\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "multiline_bit_and_with_remark\000funky_types", NULL,
    {.position = POS(3345, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "multiline_bit_or\000funky_types", NULL,
    {.position = POS(3356, 28)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "multiline_bit_xor\000funky_types", NULL,
    {.position = POS(3360, 28)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "multiline_assign\000funky_types", NULL,
    {.position = POS(3364, 28)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3367_12_expr\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3404_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3406_24_identifier\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3412_24_expression\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "inline_attribute_value_pair\000funky_types", NULL,
    {.position = POS(3417, 15)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3428_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3430_24_identifier\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3436_24_expression\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "inline_method_value_pair\000funky_types", NULL,
    {.position = POS(3441, 15)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3453_24_expression\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3456_35_some_inline_arguments\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3476_30_inline_arguments\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3488_30_inline_arguments\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3497_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3499_20_digits\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "numeric_literal\000funky_types", NULL,
    {.position = POS(3504, 7)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "digits_of\000funky", NULL,
    {.position = POS(3507, 10)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "at_character_literal\000funky_types", NULL,
    {.position = POS(3772, 5)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3777_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3778_44_character_name\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "named_character_literal\000funky_types", NULL,
    {.position = POS(3787, 15)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3798_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3800_20_digits\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "numeric_character_literal\000funky_types", NULL,
    {.position = POS(3809, 15)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3820_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3822_23_character\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "character_literal\000funky_types", NULL,
    {.position = POS(3829, 11)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "character_of\000funky", NULL,
    {.position = POS(3832, 14)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3857_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3858_31_string_components\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "string_literal\000funky_types", NULL,
    {.position = POS(3863, 7)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "components_of\000funky", NULL,
    {.position = POS(3866, 10)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3870_12_expr\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3889_30_string_component\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3892_31_string_components\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3943_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3945_31_string_characters\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "character_sequence\000funky_types", NULL,
    {.position = POS(3950, 7)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "characters_of\000funky", NULL,
    {.position = POS(3953, 10)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3978_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3979_1_multiline_string_components\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3980_1_error\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3991_12_expr\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "newline\000funky_types", NULL,
    {.position = POS(4020, 5)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4026_35_string_line_component\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4029_41_multiline_string_components\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "at_character\000funky_types", NULL,
    {.position = POS(4089, 5)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4094_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4095_44_empty_character\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "tagged_empty_character\000funky_types", NULL,
    {.position = POS(4100, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "escape_expression\000funky_types", NULL,
    {.position = POS(4114, 20)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4114_55_expression\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4140_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4141_44_character_name\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "named_character\000funky_types", NULL,
    {.position = POS(4148, 11)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4157_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4159_20_digits\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "numeric_character\000funky_types", NULL,
    {.position = POS(4166, 11)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4175_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4177_36_string_line_characters\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4210_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4211_30_trailing_remarks\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "unique\000funky_types", NULL,
    {.position = POS(4216, 7)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4223_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4224_30_trailing_remarks\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "attribute\000funky_types", NULL,
    {.position = POS(4229, 7)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4236_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4237_30_trailing_remarks\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "attribute_with_setter\000funky_types", NULL,
    {.position = POS(4242, 7)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4250_0_derived_node\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4252_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4253_31_inline_parameters\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4256_38_optional_line_end_remark\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4259_29_body_statements\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "body\000funky_types", NULL,
    {.position = POS(4264, 42)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "parameters_of\000funky", NULL,
    {.position = POS(4267, 18)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "statements_of\000funky", NULL,
    {.position = POS(4269, 18)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4288_12_expr\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4312_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4313_31_inline_parameters\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4319_30_inline_statement\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "inline_body\000funky_types", NULL,
    {.position = POS(4324, 15)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "statement_of\000funky", NULL,
    {.position = POS(4328, 18)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4338_1_parameters_or_statement\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4339_1_error\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4349_12_expr\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4381_30_inline_parameter\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4384_42_maybe_more_inline_parameters\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4430_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4431_29_trailing_remark\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4436_1_parameter\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4437_1_error\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "open_parameters\000funky_types", NULL,
    {.position = POS(4442, 15)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "parameter_of\000funky", NULL,
    {.position = POS(4446, 18)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4452_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4454_28_parameter_name\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4457_30_parameter_option\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "inline_parameter\000funky_types", NULL,
    {.position = POS(4462, 11)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "option_of\000funky", NULL,
    {.position = POS(4466, 14)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4471_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4473_28_parameter_name\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4476_30_parameter_option\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4479_30_trailing_remarks\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "parameter\000funky_types", NULL,
    {.position = POS(4484, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "myself\000funky_types", NULL,
    {.position = POS(4522, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "rest\000funky_types", NULL,
    {.position = POS(4530, 5)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4535_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4536_28_simple_operand\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "initial_value\000funky_types", NULL,
    {.position = POS(4541, 7)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "operand_of\000funky", NULL,
    {.position = POS(4544, 10)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4580_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4581_29_trailing_remark\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "close_parameters\000funky_types", NULL,
    {.position = POS(4586, 7)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4593_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4594_38_some_statement_arguments\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "return_expression\000funky_types", NULL,
    {.position = POS(4599, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "return\000funky_types", NULL,
    {.position = POS(4609, 5)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4614_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4619_25_remark_text\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "remark\000funky_types", NULL,
    {.position = POS(4624, 11)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "text_of\000funky", NULL,
    {.position = POS(4627, 14)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4633_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4635_25_remark_text\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4671_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4672_29_trailing_remark\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4675_26_line_remarks\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "line_end_and_line_remarks\000funky_types", NULL,
    {.position = POS(4683, 15)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4713_1_multiline_remark\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4714_1_error\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4725_1_multiline_remark\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4726_1_error\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4734_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4736_25_remark_text\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4748_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4753_25_remark_text\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4756_31_some_remark_lines\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "multiline_remark\000funky_types", NULL,
    {.position = POS(4761, 15)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "lines_of\000funky", NULL,
    {.position = POS(4765, 18)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4772_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4774_25_remark_text\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4777_31_some_remark_lines\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4801_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4803_25_remark_text\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "remark_lines\000funky_types", NULL,
    {.position = POS(4808, 7)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4815_1_position\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "dummy_remark\000funky_types", NULL,
    {.position = POS(4820, 7)}
  }
};

static FUNKY_NAMESPACE used_namespaces[] = {
  {"std", 1, 0}
};

FUNKY_MODULE module__parser = {
  "_parser", // module name
  "parser.fky", // module filename
  .major_version = 0,
  .minor_version = 0,
  .feature_flags = FEAT_POSITIONS,
  .marker = 0,
  0, // number of required modules
  0, // number of defined namespaces
  1, // number of used namespaces
  2104, // number of constants
  538, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  constants_table,
  variables_table,
};
