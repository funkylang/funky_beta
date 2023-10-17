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
  lambda_549 = -752,
  lambda_550 = -753,
  lambda_551 = -754,
  lambda_552 = -755,
  lambda_553 = -756,
  lambda_554 = -757,
  lambda_555 = -758,
  func_parse_some_statement_arguments = -759,
  lambda_556 = -760,
  lambda_557 = -761,
  lambda_558 = -762,
  lambda_559 = -763,
  lambda_560 = -764,
  lambda_561 = -765,
  lambda_562 = -766,
  lambda_563 = -767,
  lambda_564 = -768,
  lambda_565 = -769,
  lambda_566 = -770,
  chr_10 = -771,
  lambda_567 = -772,
  lambda_568 = -773,
  lambda_569 = -774,
  str_some_statement_a = -775,
  lambda_570 = -776,
  lambda_571 = -777,
  lambda_572 = -778,
  lambda_573 = -779,
  lambda_574 = -780,
  lambda_575 = -781,
  func_parse_spaced_arguments_without_prefix = -782,
  lambda_576 = -783,
  lambda_577 = -784,
  func_parse_spaced_statement_arguments_without_prefix = -785,
  lambda_578 = -786,
  lambda_579 = -787,
  func_parse_more_arguments = -788,
  lambda_580 = -789,
  lambda_581 = -790,
  lambda_582 = -791,
  lambda_583 = -792,
  lambda_584 = -793,
  lambda_585 = -794,
  string_7 = -795,
  lambda_586 = -796,
  lambda_587 = -797,
  lambda_588 = -798,
  lambda_589 = -799,
  str_more_arguments = -800,
  func_parse_more_statement_arguments = -801,
  lambda_590 = -802,
  lambda_591 = -803,
  lambda_592 = -804,
  lambda_593 = -805,
  lambda_594 = -806,
  lambda_595 = -807,
  lambda_596 = -808,
  lambda_597 = -809,
  lambda_598 = -810,
  lambda_599 = -811,
  str_more_statement_a = -812,
  func_parse_arguments = -813,
  lambda_23_text_is_defined = -814,
  lambda_600 = -815,
  lambda_601 = -816,
  lambda_602 = -817,
  lambda_603 = -818,
  lambda_604 = -819,
  func_parse_even_more_statement_arguments = -820,
  lambda_24_text_is_defined = -821,
  lambda_605 = -822,
  lambda_606 = -823,
  lambda_607 = -824,
  lambda_608 = -825,
  lambda_609 = -826,
  func_parse_multiline_arguments = -827,
  lambda_610 = -828,
  lambda_611 = -829,
  lambda_612 = -830,
  lambda_613 = -831,
  lambda_614 = -832,
  str_valid_input_char = -833,
  func_parse_multiline_arguments_without_prefix = -834,
  lambda_615 = -835,
  lambda_616 = -836,
  func_parse_tagged_multiline_arguments_without_prefix = -837,
  lambda_617 = -838,
  lambda_618 = -839,
  func_parse_remark_and_multiline_function_call_without_prefix = -840,
  lambda_25_text_is_defined = -841,
  lambda_619 = -842,
  lambda_620 = -843,
  lambda_621 = -844,
  lambda_622 = -845,
  lambda_623 = -846,
  func_parse_argument = -847,
  lambda_624 = -848,
  lambda_625 = -849,
  lambda_626 = -850,
  lambda_627 = -851,
  lambda_628 = -852,
  lambda_629 = -853,
  lambda_630 = -854,
  lambda_631 = -855,
  chr_38 = -856,
  lambda_632 = -857,
  lambda_633 = -858,
  lambda_634 = -859,
  lambda_635 = -860,
  lambda_636 = -861,
  lambda_637 = -862,
  lambda_638 = -863,
  lambda_639 = -864,
  lambda_640 = -865,
  lambda_641 = -866,
  lambda_642 = -867,
  lambda_643 = -868,
  lambda_644 = -869,
  str_argument = -870,
  func_parse_line_start_arguments = -871,
  lambda_645 = -872,
  lambda_646 = -873,
  lambda_647 = -874,
  lambda_648 = -875,
  lambda_649 = -876,
  lambda_650 = -877,
  lambda_651 = -878,
  lambda_652 = -879,
  lambda_653 = -880,
  lambda_654 = -881,
  lambda_655 = -882,
  lambda_656 = -883,
  lambda_657 = -884,
  lambda_658 = -885,
  lambda_659 = -886,
  lambda_660 = -887,
  chr_43 = -888,
  lambda_661 = -889,
  lambda_662 = -890,
  lambda_663 = -891,
  lambda_664 = -892,
  lambda_665 = -893,
  lambda_666 = -894,
  lambda_667 = -895,
  lambda_668 = -896,
  chr_42 = -897,
  lambda_669 = -898,
  lambda_670 = -899,
  string_8 = -900,
  lambda_671 = -901,
  lambda_672 = -902,
  lambda_673 = -903,
  lambda_674 = -904,
  lambda_675 = -905,
  lambda_676 = -906,
  lambda_677 = -907,
  lambda_678 = -908,
  lambda_679 = -909,
  lambda_680 = -910,
  lambda_681 = -911,
  lambda_682 = -912,
  lambda_683 = -913,
  lambda_684 = -914,
  lambda_685 = -915,
  lambda_686 = -916,
  lambda_687 = -917,
  lambda_688 = -918,
  lambda_689 = -919,
  lambda_690 = -920,
  lambda_691 = -921,
  lambda_692 = -922,
  lambda_693 = -923,
  lambda_694 = -924,
  lambda_695 = -925,
  lambda_696 = -926,
  lambda_697 = -927,
  lambda_698 = -928,
  lambda_699 = -929,
  lambda_700 = -930,
  lambda_701 = -931,
  chr_124 = -932,
  lambda_702 = -933,
  lambda_703 = -934,
  lambda_704 = -935,
  lambda_705 = -936,
  lambda_706 = -937,
  lambda_707 = -938,
  lambda_708 = -939,
  lambda_709 = -940,
  lambda_710 = -941,
  lambda_711 = -942,
  lambda_712 = -943,
  chr_94 = -944,
  lambda_713 = -945,
  lambda_714 = -946,
  lambda_715 = -947,
  lambda_716 = -948,
  lambda_717 = -949,
  lambda_718 = -950,
  lambda_719 = -951,
  str_line_start_argum = -952,
  func_parse_dummy_definition_without_prefix = -953,
  lambda_720 = -954,
  lambda_721 = -955,
  func_parse_variable_without_prefix = -956,
  lambda_722 = -957,
  lambda_723 = -958,
  func_parse_definition_without_prefix = -959,
  lambda_724 = -960,
  lambda_725 = -961,
  func_parse_redefinition_without_prefix = -962,
  lambda_26_text_is_defined = -963,
  lambda_726 = -964,
  lambda_727 = -965,
  lambda_728 = -966,
  func_parse_update_without_prefix = -967,
  lambda_27_text_is_defined = -968,
  lambda_729 = -969,
  lambda_730 = -970,
  lambda_731 = -971,
  func_parse_expression = -972,
  lambda_28_text_is_defined = -973,
  lambda_732 = -974,
  lambda_733 = -975,
  lambda_734 = -976,
  lambda_735 = -977,
  lambda_736 = -978,
  lambda_737 = -979,
  func_parse_key_value_operator = -980,
  lambda_738 = -981,
  lambda_739 = -982,
  lambda_740 = -983,
  lambda_741 = -984,
  lambda_742 = -985,
  lambda_743 = -986,
  lambda_744 = -987,
  lambda_745 = -988,
  func_parse_key_value = -989,
  func_parse_sequence_expression = -990,
  lambda_29_text_is_defined = -991,
  lambda_746 = -992,
  lambda_747 = -993,
  lambda_748 = -994,
  lambda_749 = -995,
  lambda_750 = -996,
  lambda_751 = -997,
  func_parse_comma_operator = -998,
  lambda_752 = -999,
  chr_44 = -1000,
  lambda_753 = -1001,
  lambda_754 = -1002,
  lambda_755 = -1003,
  lambda_756 = -1004,
  lambda_757 = -1005,
  lambda_758 = -1006,
  lambda_759 = -1007,
  lambda_760 = -1008,
  lambda_761 = -1009,
  lambda_762 = -1010,
  func_parse_comma = -1011,
  func_parse_comma_expression = -1012,
  lambda_30_text_is_defined = -1013,
  lambda_763 = -1014,
  lambda_764 = -1015,
  lambda_765 = -1016,
  lambda_766 = -1017,
  lambda_767 = -1018,
  lambda_768 = -1019,
  func_parse_conditional_expression = -1020,
  lambda_31_text_is_defined = -1021,
  lambda_769 = -1022,
  lambda_770 = -1023,
  lambda_771 = -1024,
  lambda_772 = -1025,
  lambda_773 = -1026,
  func_parse_logical_operator = -1027,
  lambda_774 = -1028,
  lambda_775 = -1029,
  lambda_776 = -1030,
  lambda_777 = -1031,
  lambda_778 = -1032,
  lambda_779 = -1033,
  lambda_780 = -1034,
  lambda_781 = -1035,
  lambda_782 = -1036,
  lambda_783 = -1037,
  lambda_784 = -1038,
  lambda_785 = -1039,
  func_parse_and = -1040,
  func_parse_and_expression = -1041,
  lambda_32_text_is_defined = -1042,
  lambda_786 = -1043,
  lambda_787 = -1044,
  lambda_788 = -1045,
  lambda_789 = -1046,
  lambda_790 = -1047,
  lambda_791 = -1048,
  func_parse_and_operator = -1049,
  lambda_792 = -1050,
  lambda_793 = -1051,
  lambda_794 = -1052,
  lambda_795 = -1053,
  lambda_796 = -1054,
  lambda_797 = -1055,
  lambda_798 = -1056,
  func_parse_or = -1057,
  func_parse_or_expression = -1058,
  lambda_33_text_is_defined = -1059,
  lambda_799 = -1060,
  lambda_800 = -1061,
  lambda_801 = -1062,
  lambda_802 = -1063,
  lambda_803 = -1064,
  lambda_804 = -1065,
  func_parse_or_operator = -1066,
  lambda_805 = -1067,
  lambda_806 = -1068,
  lambda_807 = -1069,
  lambda_808 = -1070,
  lambda_809 = -1071,
  lambda_810 = -1072,
  lambda_811 = -1073,
  func_parse_named_operator_expression = -1074,
  lambda_34_text_is_defined = -1075,
  lambda_812 = -1076,
  lambda_813 = -1077,
  lambda_814 = -1078,
  lambda_815 = -1079,
  lambda_816 = -1080,
  func_parse_optional_named_operator = -1081,
  lambda_817 = -1082,
  lambda_818 = -1083,
  lambda_819 = -1084,
  lambda_820 = -1085,
  lambda_821 = -1086,
  func_parse_named_operator_without_prefix = -1087,
  lambda_35_text_is_defined = -1088,
  lambda_822 = -1089,
  lambda_823 = -1090,
  lambda_824 = -1091,
  lambda_825 = -1092,
  lambda_826 = -1093,
  lambda_827 = -1094,
  lambda_828 = -1095,
  func_parse_range_expression = -1096,
  lambda_36_text_is_defined = -1097,
  lambda_829 = -1098,
  lambda_830 = -1099,
  lambda_831 = -1100,
  lambda_832 = -1101,
  lambda_833 = -1102,
  func_parse_range_operator = -1103,
  lambda_834 = -1104,
  lambda_835 = -1105,
  lambda_836 = -1106,
  lambda_837 = -1107,
  lambda_838 = -1108,
  lambda_839 = -1109,
  lambda_840 = -1110,
  lambda_841 = -1111,
  lambda_842 = -1112,
  lambda_843 = -1113,
  func_parse_range = -1114,
  func_parse_relational_expression = -1115,
  lambda_37_text_is_defined = -1116,
  lambda_844 = -1117,
  lambda_845 = -1118,
  lambda_846 = -1119,
  lambda_847 = -1120,
  lambda_848 = -1121,
  lambda_849 = -1122,
  func_parse_comparison_operator = -1123,
  lambda_850 = -1124,
  lambda_851 = -1125,
  lambda_852 = -1126,
  lambda_853 = -1127,
  lambda_854 = -1128,
  lambda_855 = -1129,
  lambda_856 = -1130,
  lambda_857 = -1131,
  lambda_858 = -1132,
  lambda_859 = -1133,
  lambda_860 = -1134,
  lambda_861 = -1135,
  lambda_862 = -1136,
  lambda_863 = -1137,
  lambda_864 = -1138,
  lambda_865 = -1139,
  lambda_866 = -1140,
  lambda_867 = -1141,
  lambda_868 = -1142,
  lambda_869 = -1143,
  lambda_870 = -1144,
  lambda_871 = -1145,
  lambda_872 = -1146,
  lambda_873 = -1147,
  lambda_874 = -1148,
  lambda_875 = -1149,
  lambda_876 = -1150,
  lambda_877 = -1151,
  lambda_878 = -1152,
  lambda_879 = -1153,
  lambda_880 = -1154,
  lambda_881 = -1155,
  lambda_882 = -1156,
  lambda_883 = -1157,
  lambda_884 = -1158,
  lambda_885 = -1159,
  lambda_886 = -1160,
  lambda_887 = -1161,
  lambda_888 = -1162,
  lambda_889 = -1163,
  lambda_890 = -1164,
  lambda_891 = -1165,
  lambda_892 = -1166,
  lambda_893 = -1167,
  lambda_894 = -1168,
  lambda_895 = -1169,
  func_parse_equal = -1170,
  func_parse_not_equal = -1171,
  func_parse_less_equal = -1172,
  func_parse_less_than = -1173,
  func_parse_greater_equal = -1174,
  func_parse_greater_than = -1175,
  func_parse_tagged_bit_expression = -1176,
  lambda_38_text_is_defined = -1177,
  lambda_896 = -1178,
  lambda_897 = -1179,
  lambda_898 = -1180,
  lambda_899 = -1181,
  lambda_900 = -1182,
  lambda_901 = -1183,
  func_parse_bit_expression = -1184,
  lambda_39_text_is_defined = -1185,
  lambda_902 = -1186,
  lambda_903 = -1187,
  lambda_904 = -1188,
  lambda_905 = -1189,
  lambda_906 = -1190,
  func_parse_bit_operator = -1191,
  lambda_907 = -1192,
  lambda_908 = -1193,
  lambda_909 = -1194,
  lambda_910 = -1195,
  lambda_911 = -1196,
  lambda_912 = -1197,
  lambda_913 = -1198,
  lambda_914 = -1199,
  lambda_915 = -1200,
  lambda_916 = -1201,
  lambda_917 = -1202,
  lambda_918 = -1203,
  lambda_919 = -1204,
  lambda_920 = -1205,
  lambda_921 = -1206,
  lambda_922 = -1207,
  lambda_923 = -1208,
  lambda_924 = -1209,
  lambda_925 = -1210,
  lambda_926 = -1211,
  lambda_927 = -1212,
  lambda_928 = -1213,
  lambda_929 = -1214,
  lambda_930 = -1215,
  lambda_931 = -1216,
  lambda_932 = -1217,
  lambda_933 = -1218,
  lambda_934 = -1219,
  lambda_935 = -1220,
  lambda_936 = -1221,
  lambda_937 = -1222,
  lambda_938 = -1223,
  lambda_939 = -1224,
  lambda_940 = -1225,
  lambda_941 = -1226,
  lambda_942 = -1227,
  func_parse_shift_left = -1228,
  func_parse_shift_right = -1229,
  func_parse_bit_and = -1230,
  func_parse_bit_and2 = -1231,
  lambda_40_text_is_defined = -1232,
  lambda_943 = -1233,
  lambda_944 = -1234,
  lambda_945 = -1235,
  lambda_946 = -1236,
  lambda_947 = -1237,
  lambda_948 = -1238,
  func_parse_bit_and_operator = -1239,
  lambda_949 = -1240,
  lambda_950 = -1241,
  lambda_951 = -1242,
  lambda_952 = -1243,
  lambda_953 = -1244,
  lambda_954 = -1245,
  lambda_955 = -1246,
  lambda_956 = -1247,
  func_parse_bit_or = -1248,
  func_parse_bit_or2 = -1249,
  lambda_41_text_is_defined = -1250,
  lambda_957 = -1251,
  lambda_958 = -1252,
  lambda_959 = -1253,
  lambda_960 = -1254,
  lambda_961 = -1255,
  lambda_962 = -1256,
  func_parse_bit_or_operator = -1257,
  lambda_963 = -1258,
  lambda_964 = -1259,
  lambda_965 = -1260,
  lambda_966 = -1261,
  lambda_967 = -1262,
  lambda_968 = -1263,
  lambda_969 = -1264,
  lambda_970 = -1265,
  func_parse_bit_xor = -1266,
  func_parse_bit_xor2 = -1267,
  lambda_42_text_is_defined = -1268,
  lambda_971 = -1269,
  lambda_972 = -1270,
  lambda_973 = -1271,
  lambda_974 = -1272,
  lambda_975 = -1273,
  lambda_976 = -1274,
  func_parse_bit_xor_operator = -1275,
  lambda_977 = -1276,
  lambda_978 = -1277,
  lambda_979 = -1278,
  lambda_980 = -1279,
  lambda_981 = -1280,
  lambda_982 = -1281,
  lambda_983 = -1282,
  lambda_984 = -1283,
  func_parse_tagged_additive_expression = -1284,
  lambda_43_text_is_defined = -1285,
  lambda_985 = -1286,
  lambda_986 = -1287,
  lambda_987 = -1288,
  lambda_988 = -1289,
  lambda_989 = -1290,
  lambda_990 = -1291,
  func_parse_additive_expression = -1292,
  lambda_44_text_is_defined = -1293,
  lambda_991 = -1294,
  lambda_992 = -1295,
  lambda_993 = -1296,
  lambda_994 = -1297,
  lambda_995 = -1298,
  func_parse_additive_operator = -1299,
  lambda_996 = -1300,
  lambda_997 = -1301,
  lambda_998 = -1302,
  lambda_999 = -1303,
  lambda_1000 = -1304,
  lambda_1001 = -1305,
  lambda_1002 = -1306,
  lambda_1003 = -1307,
  lambda_1004 = -1308,
  lambda_1005 = -1309,
  lambda_1006 = -1310,
  lambda_1007 = -1311,
  lambda_1008 = -1312,
  lambda_1009 = -1313,
  func_parse_plus = -1314,
  func_parse_plus2 = -1315,
  lambda_45_text_is_defined = -1316,
  lambda_1010 = -1317,
  lambda_1011 = -1318,
  lambda_1012 = -1319,
  lambda_1013 = -1320,
  lambda_1014 = -1321,
  lambda_1015 = -1322,
  func_parse_minus = -1323,
  func_parse_minus2 = -1324,
  lambda_46_text_is_defined = -1325,
  lambda_1016 = -1326,
  lambda_1017 = -1327,
  lambda_1018 = -1328,
  lambda_1019 = -1329,
  lambda_1020 = -1330,
  lambda_1021 = -1331,
  func_parse_multiplicative_expression = -1332,
  lambda_47_text_is_defined = -1333,
  lambda_1022 = -1334,
  lambda_1023 = -1335,
  lambda_1024 = -1336,
  lambda_1025 = -1337,
  lambda_1026 = -1338,
  func_parse_multiplicative_operator = -1339,
  lambda_1027 = -1340,
  lambda_1028 = -1341,
  lambda_1029 = -1342,
  lambda_1030 = -1343,
  lambda_1031 = -1344,
  lambda_1032 = -1345,
  lambda_1033 = -1346,
  lambda_1034 = -1347,
  lambda_1035 = -1348,
  lambda_1036 = -1349,
  lambda_1037 = -1350,
  lambda_1038 = -1351,
  lambda_1039 = -1352,
  lambda_1040 = -1353,
  func_parse_times = -1354,
  func_parse_times2 = -1355,
  lambda_48_text_is_defined = -1356,
  lambda_1041 = -1357,
  lambda_1042 = -1358,
  lambda_1043 = -1359,
  lambda_1044 = -1360,
  lambda_1045 = -1361,
  lambda_1046 = -1362,
  func_parse_over = -1363,
  func_parse_over2 = -1364,
  lambda_49_text_is_defined = -1365,
  lambda_1047 = -1366,
  lambda_1048 = -1367,
  lambda_1049 = -1368,
  lambda_1050 = -1369,
  lambda_1051 = -1370,
  lambda_1052 = -1371,
  func_parse_an_expression = -1372,
  lambda_1053 = -1373,
  lambda_1054 = -1374,
  lambda_1055 = -1375,
  chr_39 = -1376,
  lambda_1056 = -1377,
  chr_64 = -1378,
  lambda_1057 = -1379,
  lambda_1058 = -1380,
  lambda_1059 = -1381,
  lambda_1060 = -1382,
  chr_34 = -1383,
  lambda_1061 = -1384,
  lambda_1062 = -1385,
  lambda_1063 = -1386,
  lambda_1064 = -1387,
  lambda_1065 = -1388,
  lambda_1066 = -1389,
  lambda_1067 = -1390,
  lambda_1068 = -1391,
  lambda_1069 = -1392,
  chr_96 = -1393,
  lambda_1070 = -1394,
  lambda_1071 = -1395,
  lambda_1072 = -1396,
  str_an_expression = -1397,
  func_parse_parenthesed_expression_without_prefix = -1398,
  lambda_50_text_is_defined = -1399,
  lambda_1073 = -1400,
  lambda_1074 = -1401,
  lambda_1075 = -1402,
  lambda_1076 = -1403,
  lambda_1077 = -1404,
  func_parse_inline_expression = -1405,
  lambda_1078 = -1406,
  lambda_1079 = -1407,
  lambda_1080 = -1408,
  lambda_1081 = -1409,
  lambda_1082 = -1410,
  lambda_1083 = -1411,
  lambda_1084 = -1412,
  str_inline_expressio = -1413,
  func_parse_backquoted_without_prefix = -1414,
  lambda_1085 = -1415,
  lambda_1086 = -1416,
  func_parse_negation_without_prefix = -1417,
  lambda_1087 = -1418,
  lambda_1088 = -1419,
  func_parse_multiline_operator = -1420,
  lambda_51_text_is_defined = -1421,
  lambda_1089 = -1422,
  lambda_1090 = -1423,
  lambda_1091 = -1424,
  lambda_1092 = -1425,
  lambda_1093 = -1426,
  lambda_1094 = -1427,
  func_parse_multiline_plus_without_prefix = -1428,
  func_parse_multiline_minus_without_prefix = -1429,
  lambda_52_text_is_defined = -1430,
  lambda_1095 = -1431,
  lambda_1096 = -1432,
  lambda_1097 = -1433,
  lambda_1098 = -1434,
  lambda_1099 = -1435,
  lambda_1100 = -1436,
  func_parse_multiline_minus_with_remark_without_prefix = -1437,
  lambda_53_text_is_defined = -1438,
  lambda_1101 = -1439,
  lambda_1102 = -1440,
  lambda_1103 = -1441,
  lambda_1104 = -1442,
  lambda_1105 = -1443,
  lambda_1106 = -1444,
  func_parse_multiline_times_without_prefix = -1445,
  func_parse_multiline_over_without_prefix = -1446,
  lambda_1107 = -1447,
  lambda_1108 = -1448,
  func_parse_multiline_over_with_remark_without_prefix = -1449,
  lambda_54_text_is_defined = -1450,
  lambda_1109 = -1451,
  lambda_1110 = -1452,
  lambda_1111 = -1453,
  lambda_1112 = -1454,
  lambda_1113 = -1455,
  lambda_1114 = -1456,
  func_parse_multiline_shift_left_without_prefix = -1457,
  func_parse_multiline_shift_right_without_prefix = -1458,
  func_parse_multiline_equal_without_prefix = -1459,
  func_parse_multiline_not_equal_without_prefix = -1460,
  func_parse_multiline_less_equal_without_prefix = -1461,
  func_parse_multiline_less_than_without_prefix = -1462,
  func_parse_multiline_greater_equal_without_prefix = -1463,
  func_parse_multiline_greater_than_without_prefix = -1464,
  func_parse_multiline_and_without_prefix = -1465,
  func_parse_multiline_or_without_prefix = -1466,
  func_parse_multiline_bit_and_without_prefix = -1467,
  lambda_55_text_is_defined = -1468,
  lambda_1115 = -1469,
  lambda_1116 = -1470,
  lambda_1117 = -1471,
  lambda_1118 = -1472,
  lambda_1119 = -1473,
  lambda_1120 = -1474,
  func_parse_multiline_bit_and_with_remark_without_prefix = -1475,
  lambda_56_text_is_defined = -1476,
  lambda_1121 = -1477,
  lambda_1122 = -1478,
  lambda_1123 = -1479,
  lambda_1124 = -1480,
  lambda_1125 = -1481,
  lambda_1126 = -1482,
  func_parse_multiline_bit_or_without_prefix = -1483,
  func_parse_multiline_bit_xor_without_prefix = -1484,
  func_parse_multiline_assign_without_prefix = -1485,
  func_parse_inline_arguments = -1486,
  lambda_1127 = -1487,
  lambda_1128 = -1488,
  lambda_1129 = -1489,
  lambda_1130 = -1490,
  lambda_1131 = -1491,
  lambda_1132 = -1492,
  lambda_1133 = -1493,
  lambda_1134 = -1494,
  lambda_1135 = -1495,
  lambda_1136 = -1496,
  lambda_1137 = -1497,
  str_inline_arguments = -1498,
  lambda_1138 = -1499,
  lambda_1139 = -1500,
  lambda_1140 = -1501,
  lambda_1141 = -1502,
  lambda_1142 = -1503,
  lambda_1143 = -1504,
  func_parse_inline_attribute_value_pair_without_prefix = -1505,
  lambda_57_text_is_defined = -1506,
  lambda_1144 = -1507,
  lambda_1145 = -1508,
  lambda_1146 = -1509,
  lambda_1147 = -1510,
  lambda_1148 = -1511,
  func_parse_inline_method_value_pair_without_prefix = -1512,
  lambda_58_text_is_defined = -1513,
  lambda_1149 = -1514,
  lambda_1150 = -1515,
  lambda_1151 = -1516,
  lambda_1152 = -1517,
  lambda_1153 = -1518,
  func_parse_expression_and_inline_arguments = -1519,
  lambda_59_text_is_defined = -1520,
  lambda_1154 = -1521,
  lambda_1155 = -1522,
  lambda_1156 = -1523,
  lambda_1157 = -1524,
  lambda_1158 = -1525,
  func_parse_spaced_inline_arguments = -1526,
  lambda_1159 = -1527,
  lambda_1160 = -1528,
  lambda_1161 = -1529,
  lambda_1162 = -1530,
  func_parse_spaced_inline_arguments_without_prefix = -1531,
  lambda_1163 = -1532,
  lambda_1164 = -1533,
  func_parse_numeric_literal = -1534,
  lambda_1165 = -1535,
  lambda_1166 = -1536,
  func_parse_digits = -1537,
  lambda_1167 = -1538,
  lambda_1168 = -1539,
  lambda_1169 = -1540,
  lambda_1170 = -1541,
  lambda_1171 = -1542,
  lambda_1172 = -1543,
  lambda_1173 = -1544,
  str_digits = -1545,
  func_parse_maybe_non_decimal_numeric_literal = -1546,
  lambda_1174 = -1547,
  lambda_1175 = -1548,
  lambda_1176 = -1549,
  lambda_1177 = -1550,
  lambda_1178 = -1551,
  lambda_1179 = -1552,
  lambda_1180 = -1553,
  lambda_1181 = -1554,
  lambda_1182 = -1555,
  lambda_1183 = -1556,
  lambda_1184 = -1557,
  lambda_1185 = -1558,
  lambda_1186 = -1559,
  lambda_1187 = -1560,
  lambda_1188 = -1561,
  lambda_1189 = -1562,
  chr_120 = -1563,
  lambda_1190 = -1564,
  lambda_1191 = -1565,
  lambda_1192 = -1566,
  func_parse_more_decimal_digits = -1567,
  lambda_1193 = -1568,
  lambda_1194 = -1569,
  lambda_1195 = -1570,
  lambda_1196 = -1571,
  lambda_1197 = -1572,
  lambda_1198 = -1573,
  lambda_1199 = -1574,
  lambda_1200 = -1575,
  lambda_1201 = -1576,
  lambda_1202 = -1577,
  lambda_1203 = -1578,
  lambda_1204 = -1579,
  lambda_1205 = -1580,
  lambda_1206 = -1581,
  chr_69 = -1582,
  lambda_1207 = -1583,
  lambda_1208 = -1584,
  lambda_1209 = -1585,
  func_parse_more_fraction_digits = -1586,
  lambda_1210 = -1587,
  lambda_1211 = -1588,
  lambda_1212 = -1589,
  lambda_1213 = -1590,
  lambda_1214 = -1591,
  lambda_1215 = -1592,
  lambda_1216 = -1593,
  lambda_1217 = -1594,
  lambda_1218 = -1595,
  func_parse_exponent = -1596,
  lambda_1219 = -1597,
  lambda_1220 = -1598,
  lambda_1221 = -1599,
  lambda_1222 = -1600,
  lambda_1223 = -1601,
  lambda_1224 = -1602,
  lambda_1225 = -1603,
  lambda_1226 = -1604,
  lambda_1227 = -1605,
  str_exponent = -1606,
  func_parse_exponent_digits = -1607,
  lambda_1228 = -1608,
  lambda_1229 = -1609,
  lambda_1230 = -1610,
  lambda_1231 = -1611,
  lambda_1232 = -1612,
  str_exponent_digits = -1613,
  func_parse_more_exponent_digits = -1614,
  lambda_1233 = -1615,
  lambda_1234 = -1616,
  lambda_1235 = -1617,
  lambda_1236 = -1618,
  lambda_1237 = -1619,
  func_parse_binary_digits = -1620,
  lambda_1238 = -1621,
  lambda_1239 = -1622,
  lambda_1240 = -1623,
  lambda_1241 = -1624,
  lambda_1242 = -1625,
  str_binary_digits = -1626,
  func_parse_more_binary_digits = -1627,
  lambda_1243 = -1628,
  lambda_1244 = -1629,
  lambda_1245 = -1630,
  lambda_1246 = -1631,
  lambda_1247 = -1632,
  lambda_1248 = -1633,
  lambda_1249 = -1634,
  lambda_1250 = -1635,
  lambda_1251 = -1636,
  func_parse_octal_digits = -1637,
  lambda_1252 = -1638,
  lambda_1253 = -1639,
  chr_55 = -1640,
  lambda_1254 = -1641,
  lambda_1255 = -1642,
  lambda_1256 = -1643,
  str_octal_digits = -1644,
  func_parse_more_octal_digits = -1645,
  lambda_1257 = -1646,
  lambda_1258 = -1647,
  lambda_1259 = -1648,
  lambda_1260 = -1649,
  lambda_1261 = -1650,
  lambda_1262 = -1651,
  lambda_1263 = -1652,
  lambda_1264 = -1653,
  lambda_1265 = -1654,
  func_parse_hex_digits = -1655,
  lambda_1266 = -1656,
  lambda_1267 = -1657,
  lambda_1268 = -1658,
  lambda_1269 = -1659,
  chr_102 = -1660,
  lambda_1270 = -1661,
  lambda_1271 = -1662,
  chr_70 = -1663,
  lambda_1272 = -1664,
  lambda_1273 = -1665,
  lambda_1274 = -1666,
  str_hex_digits = -1667,
  func_parse_more_hex_digits = -1668,
  lambda_1275 = -1669,
  lambda_1276 = -1670,
  lambda_1277 = -1671,
  lambda_1278 = -1672,
  lambda_1279 = -1673,
  lambda_1280 = -1674,
  lambda_1281 = -1675,
  lambda_1282 = -1676,
  lambda_1283 = -1677,
  lambda_1284 = -1678,
  lambda_1285 = -1679,
  lambda_1286 = -1680,
  lambda_1287 = -1681,
  lambda_1288 = -1682,
  lambda_1289 = -1683,
  lambda_1290 = -1684,
  lambda_1291 = -1685,
  func_parse_special_character_literal = -1686,
  lambda_1292 = -1687,
  lambda_1293 = -1688,
  lambda_1294 = -1689,
  lambda_1295 = -1690,
  lambda_1296 = -1691,
  lambda_1297 = -1692,
  lambda_1298 = -1693,
  lambda_1299 = -1694,
  lambda_1300 = -1695,
  lambda_1301 = -1696,
  str_special_characte = -1697,
  func_parse_at_character_literal_without_prefix = -1698,
  func_parse_named_character_literal_without_prefix = -1699,
  lambda_60_text_is_defined = -1700,
  chr_59 = -1701,
  lambda_1302 = -1702,
  lambda_1303 = -1703,
  lambda_1304 = -1704,
  str_single_quote = -1705,
  lambda_1305 = -1706,
  string_9 = -1707,
  lambda_1306 = -1708,
  func_parse_numeric_character_literal = -1709,
  lambda_61_text_is_defined = -1710,
  lambda_1307 = -1711,
  lambda_1308 = -1712,
  lambda_1309 = -1713,
  lambda_1310 = -1714,
  lambda_1311 = -1715,
  func_parse_character_literal_without_prefix = -1716,
  lambda_62_text_is_defined = -1717,
  lambda_1312 = -1718,
  lambda_1313 = -1719,
  lambda_1314 = -1720,
  func_parse_character = -1721,
  lambda_1315 = -1722,
  lambda_1316 = -1723,
  lambda_1317 = -1724,
  lambda_1318 = -1725,
  str_character = -1726,
  func_parse_more_character_name_characters = -1727,
  lambda_1319 = -1728,
  lambda_1320 = -1729,
  lambda_1321 = -1730,
  lambda_1322 = -1731,
  lambda_1323 = -1732,
  lambda_1324 = -1733,
  lambda_1325 = -1734,
  lambda_1326 = -1735,
  lambda_1327 = -1736,
  func_parse_string_literal_without_prefix = -1737,
  lambda_1328 = -1738,
  lambda_1329 = -1739,
  func_parse_string_components = -1740,
  lambda_1330 = -1741,
  lambda_1331 = -1742,
  lambda_1332 = -1743,
  lambda_1333 = -1744,
  str_string_component = -1745,
  lambda_1334 = -1746,
  lambda_1335 = -1747,
  lambda_1336 = -1748,
  lambda_1337 = -1749,
  lambda_1338 = -1750,
  lambda_1339 = -1751,
  func_parse_some_string_components = -1752,
  lambda_63_text_is_defined = -1753,
  lambda_1340 = -1754,
  lambda_1341 = -1755,
  lambda_1342 = -1756,
  lambda_1343 = -1757,
  lambda_1344 = -1758,
  func_parse_string_component = -1759,
  lambda_1345 = -1760,
  lambda_1346 = -1761,
  lambda_1347 = -1762,
  lambda_1348 = -1763,
  lambda_1349 = -1764,
  lambda_1350 = -1765,
  lambda_1351 = -1766,
  lambda_1352 = -1767,
  lambda_1353 = -1768,
  lambda_1354 = -1769,
  lambda_1355 = -1770,
  lambda_1356 = -1771,
  lambda_1357 = -1772,
  str_string_component_2 = -1773,
  func_parse_character_sequence = -1774,
  lambda_1358 = -1775,
  lambda_1359 = -1776,
  func_parse_string_characters = -1777,
  lambda_1360 = -1778,
  lambda_1361 = -1779,
  lambda_1362 = -1780,
  lambda_1363 = -1781,
  lambda_1364 = -1782,
  lambda_1365 = -1783,
  str_string_character = -1784,
  func_parse_more_string_characters = -1785,
  lambda_1366 = -1786,
  lambda_1367 = -1787,
  lambda_1368 = -1788,
  lambda_1369 = -1789,
  lambda_1370 = -1790,
  lambda_1371 = -1791,
  func_parse_multiline_string_literal_without_prefix = -1792,
  lambda_1372 = -1793,
  lambda_1373 = -1794,
  func_parse_multiline_string_components = -1795,
  lambda_1374 = -1796,
  lambda_1375 = -1797,
  lambda_1376 = -1798,
  lambda_1377 = -1799,
  lambda_1378 = -1800,
  lambda_1379 = -1801,
  lambda_1380 = -1802,
  str_multiline_string = -1803,
  lambda_1381 = -1804,
  lambda_1382 = -1805,
  lambda_1383 = -1806,
  lambda_1384 = -1807,
  lambda_1385 = -1808,
  lambda_1386 = -1809,
  func_parse_newline_without_prefix = -1810,
  func_parse_some_string_line_components = -1811,
  lambda_64_text_is_defined = -1812,
  lambda_1387 = -1813,
  lambda_1388 = -1814,
  lambda_1389 = -1815,
  lambda_1390 = -1816,
  lambda_1391 = -1817,
  func_parse_string_line_component = -1818,
  lambda_1392 = -1819,
  lambda_1393 = -1820,
  lambda_1394 = -1821,
  lambda_1395 = -1822,
  lambda_1396 = -1823,
  lambda_1397 = -1824,
  lambda_1398 = -1825,
  lambda_1399 = -1826,
  lambda_1400 = -1827,
  lambda_1401 = -1828,
  lambda_1402 = -1829,
  lambda_1403 = -1830,
  lambda_1404 = -1831,
  str_string_line_comp = -1832,
  func_parse_string_line_end_without_prefix = -1833,
  func_parse_at_character_without_prefix = -1834,
  func_parse_tagged_empty_character_without_prefix = -1835,
  lambda_1405 = -1836,
  lambda_1406 = -1837,
  func_parse_empty_character_without_prefix = -1838,
  func_parse_escape_expression_without_prefix = -1839,
  lambda_65_text_is_defined = -1840,
  lambda_1407 = -1841,
  lambda_1408 = -1842,
  lambda_1409 = -1843,
  func_parse_special_character = -1844,
  lambda_1410 = -1845,
  lambda_1411 = -1846,
  lambda_1412 = -1847,
  lambda_1413 = -1848,
  lambda_1414 = -1849,
  lambda_1415 = -1850,
  lambda_1416 = -1851,
  str_special_characte_2 = -1852,
  func_parse_named_character_without_prefix = -1853,
  lambda_66_text_is_defined = -1854,
  lambda_1417 = -1855,
  lambda_1418 = -1856,
  lambda_1419 = -1857,
  func_parse_numeric_character = -1858,
  lambda_67_text_is_defined = -1859,
  lambda_1420 = -1860,
  lambda_1421 = -1861,
  lambda_1422 = -1862,
  func_parse_string_line_character_sequence = -1863,
  lambda_1423 = -1864,
  lambda_1424 = -1865,
  func_parse_string_line_characters = -1866,
  lambda_1425 = -1867,
  lambda_1426 = -1868,
  lambda_1427 = -1869,
  lambda_1428 = -1870,
  lambda_1429 = -1871,
  str_string_line_char = -1872,
  func_parse_more_string_line_characters = -1873,
  lambda_1430 = -1874,
  lambda_1431 = -1875,
  lambda_1432 = -1876,
  lambda_1433 = -1877,
  lambda_1434 = -1878,
  func_parse_unique_without_prefix = -1879,
  lambda_1435 = -1880,
  lambda_1436 = -1881,
  func_parse_attribute_without_prefix = -1882,
  lambda_1437 = -1883,
  lambda_1438 = -1884,
  func_parse_attribute_with_setter_without_prefix = -1885,
  lambda_1439 = -1886,
  lambda_1440 = -1887,
  func_parse_body = -1888,
  lambda_68_text_is_defined = -1889,
  lambda_69_text_is_defined = -1890,
  lambda_1441 = -1891,
  lambda_1442 = -1892,
  lambda_1443 = -1893,
  lambda_1444 = -1894,
  func_parse_optional_line_end_remark = -1895,
  lambda_1445 = -1896,
  lambda_1446 = -1897,
  lambda_1447 = -1898,
  lambda_1448 = -1899,
  lambda_1449 = -1900,
  func_parse_body_statements = -1901,
  lambda_1450 = -1902,
  lambda_1451 = -1903,
  lambda_1452 = -1904,
  lambda_1453 = -1905,
  str_body_statements = -1906,
  lambda_1454 = -1907,
  lambda_1455 = -1908,
  lambda_1456 = -1909,
  lambda_1457 = -1910,
  lambda_1458 = -1911,
  lambda_1459 = -1912,
  func_parse_line_end_statement_without_prefix = -1913,
  func_parse_inline_body_without_prefix = -1914,
  lambda_70_text_is_defined = -1915,
  lambda_1460 = -1916,
  lambda_1461 = -1917,
  lambda_1462 = -1918,
  lambda_1463 = -1919,
  lambda_1464 = -1920,
  func_parse_statements = -1921,
  lambda_1465 = -1922,
  lambda_1466 = -1923,
  lambda_1467 = -1924,
  lambda_1468 = -1925,
  lambda_1469 = -1926,
  func_parse_inline_parameters = -1927,
  lambda_1470 = -1928,
  lambda_1471 = -1929,
  lambda_1472 = -1930,
  lambda_1473 = -1931,
  lambda_1474 = -1932,
  lambda_1475 = -1933,
  lambda_1476 = -1934,
  lambda_1477 = -1935,
  lambda_1478 = -1936,
  lambda_1479 = -1937,
  lambda_1480 = -1938,
  func_parse_some_inline_parameters = -1939,
  lambda_1481 = -1940,
  lambda_1482 = -1941,
  lambda_1483 = -1942,
  lambda_1484 = -1943,
  str_some_inline_para = -1944,
  func_parse_one_or_more_inline_parameters = -1945,
  lambda_71_text_is_defined = -1946,
  lambda_1485 = -1947,
  lambda_1486 = -1948,
  lambda_1487 = -1949,
  lambda_1488 = -1950,
  lambda_1489 = -1951,
  func_parse_maybe_more_inline_parameters = -1952,
  lambda_1490 = -1953,
  lambda_1491 = -1954,
  lambda_1492 = -1955,
  lambda_1493 = -1956,
  lambda_1494 = -1957,
  lambda_1495 = -1958,
  str_maybe_more_inlin = -1959,
  func_parse_parameter_name = -1960,
  lambda_1496 = -1961,
  lambda_1497 = -1962,
  lambda_1498 = -1963,
  lambda_1499 = -1964,
  lambda_1500 = -1965,
  lambda_1501 = -1966,
  lambda_1502 = -1967,
  lambda_1503 = -1968,
  lambda_1504 = -1969,
  str_parameter_name = -1970,
  func_parse_open_parameters_without_prefix = -1971,
  lambda_72_text_is_defined = -1972,
  lambda_1505 = -1973,
  lambda_1506 = -1974,
  lambda_1507 = -1975,
  lambda_1508 = -1976,
  lambda_1509 = -1977,
  lambda_1510 = -1978,
  func_parse_inline_parameter = -1979,
  lambda_73_text_is_defined = -1980,
  lambda_1511 = -1981,
  lambda_1512 = -1982,
  lambda_1513 = -1983,
  func_parse_parameter = -1984,
  lambda_74_text_is_defined = -1985,
  lambda_75_text_is_defined = -1986,
  lambda_1514 = -1987,
  lambda_1515 = -1988,
  lambda_1516 = -1989,
  lambda_1517 = -1990,
  func_parse_parameter_option = -1991,
  lambda_1518 = -1992,
  lambda_1519 = -1993,
  lambda_1520 = -1994,
  lambda_1521 = -1995,
  lambda_1522 = -1996,
  lambda_1523 = -1997,
  lambda_1524 = -1998,
  lambda_1525 = -1999,
  lambda_1526 = -2000,
  lambda_1527 = -2001,
  func_parse_myself_without_prefix = -2002,
  func_parse_rest_without_prefix = -2003,
  func_parse_initial_value_without_prefix = -2004,
  lambda_1528 = -2005,
  lambda_1529 = -2006,
  func_parse_simple_operand = -2007,
  lambda_1530 = -2008,
  lambda_1531 = -2009,
  lambda_1532 = -2010,
  lambda_1533 = -2011,
  lambda_1534 = -2012,
  lambda_1535 = -2013,
  lambda_1536 = -2014,
  lambda_1537 = -2015,
  lambda_1538 = -2016,
  lambda_1539 = -2017,
  lambda_1540 = -2018,
  lambda_1541 = -2019,
  lambda_1542 = -2020,
  lambda_1543 = -2021,
  str_simple_operand = -2022,
  func_parse_close_parameters_without_prefix = -2023,
  lambda_1544 = -2024,
  lambda_1545 = -2025,
  func_parse_return_expression_without_prefix = -2026,
  lambda_1546 = -2027,
  lambda_1547 = -2028,
  func_parse_return_without_prefix = -2029,
  func_parse_remark = -2030,
  lambda_1548 = -2031,
  lambda_1549 = -2032,
  lambda_1550 = -2033,
  lambda_1551 = -2034,
  string_10 = -2035,
  func_parse_remark_without_prefix = -2036,
  lambda_1552 = -2037,
  lambda_1553 = -2038,
  func_parse_remark_text = -2039,
  lambda_1554 = -2040,
  lambda_1555 = -2041,
  lambda_1556 = -2042,
  lambda_1557 = -2043,
  func_parse_trailing_remarks = -2044,
  lambda_1558 = -2045,
  lambda_1559 = -2046,
  lambda_1560 = -2047,
  lambda_1561 = -2048,
  lambda_1562 = -2049,
  str_trailing_remarks = -2050,
  func_parse_line_end_and_line_remarks = -2051,
  lambda_76_text_is_defined = -2052,
  lambda_1563 = -2053,
  lambda_1564 = -2054,
  lambda_1565 = -2055,
  lambda_1566 = -2056,
  lambda_1567 = -2057,
  func_parse_trailing_remark = -2058,
  lambda_1568 = -2059,
  lambda_1569 = -2060,
  lambda_1570 = -2061,
  lambda_1571 = -2062,
  lambda_1572 = -2063,
  lambda_1573 = -2064,
  lambda_1574 = -2065,
  str_trailing_remark = -2066,
  func_parse_line_remarks = -2067,
  lambda_1575 = -2068,
  lambda_1576 = -2069,
  lambda_1577 = -2070,
  lambda_1578 = -2071,
  func_parse_line_remarks_without_prefix = -2072,
  lambda_1579 = -2073,
  lambda_1580 = -2074,
  func_parse_spaced_remark_without_prefix = -2075,
  lambda_1581 = -2076,
  lambda_1582 = -2077,
  func_parse_multiline_remark = -2078,
  lambda_1583 = -2079,
  lambda_77_text_is_defined = -2080,
  lambda_1584 = -2081,
  lambda_1585 = -2082,
  lambda_1586 = -2083,
  lambda_1587 = -2084,
  func_parse_multiline_remark_without_prefix = -2085,
  lambda_78_text_is_defined = -2086,
  lambda_1588 = -2087,
  lambda_1589 = -2088,
  lambda_1590 = -2089,
  func_parse_some_remark_lines = -2090,
  lambda_1591 = -2091,
  lambda_1592 = -2092,
  lambda_1593 = -2093,
  lambda_1594 = -2094,
  lambda_1595 = -2095,
  func_parse_remark_lines = -2096,
  lambda_1596 = -2097,
  lambda_1597 = -2098,
  func_parse_dummy_remark = -2099,
  lambda_1598 = -2100,
  lambda_1599 = -2101
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
  var_1470_12_expr, // dynamic
  var_1505_28_more_arguments, // dynamic
  var_1515_38_more_statement_arguments, // dynamic
  var_1577_22_argument, // dynamic
  var_1580_28_some_arguments, // dynamic
  var_1597_22_argument, // dynamic
  var_1600_38_some_statement_arguments, // dynamic
  var_1619_1_line_start_arguments, // dynamic
  var_is_an_error, // extern
  var_1620_1_error, // dynamic
  var_find_first, // extern
  var_1631_1_line_start_arguments, // dynamic
  var_1632_1_error, // dynamic
  var_1640_1_position, // dynamic
  var_1641_1_line_start_arguments, // dynamic
  var_1642_1_error, // dynamic
  var_1653_1_position, // dynamic
  var_1654_42_spaced_remark, // dynamic
  var_1659_1_line_start_arguments, // dynamic
  var_1660_1_error, // dynamic
  var_funky_types__remark_and_multiline_function_call, // extern
  var_funky__remark_of, // extern polymorphic
  var_1907_1_position, // dynamic
  var_1909_18_name, // dynamic
  var_funky_types__dummy_definition, // extern
  var_1921_1_position, // dynamic
  var_1922_40_identifier, // dynamic
  var_funky_types__variable, // extern
  var_1934_1_position, // dynamic
  var_1936_34_versioned_identifier, // dynamic
  var_funky_types__definition, // extern
  var_1948_1_position, // dynamic
  var_1950_24_identifier, // dynamic
  var_1953_31_inline_extensions, // dynamic
  var_funky_types__redefinition, // extern
  var_1967_1_position, // dynamic
  var_1969_24_identifier, // dynamic
  var_1972_31_inline_extensions, // dynamic
  var_funky_types__update, // extern
  var_1987_0_derived_node, // dynamic
  var_1989_1_position, // dynamic
  var_1990_33_sequence_expression, // dynamic
  var_1993_32_key_value_operator, // dynamic
  var_funky_types__expression, // extern
  var_funky__expression_of, // extern polymorphic
  var_funky__operator_of, // extern polymorphic
  var_funky_types__key_value, // extern
  var_2035_0_derived_node, // dynamic
  var_2037_1_position, // dynamic
  var_2038_36_conditional_expression, // dynamic
  var_2041_28_comma_operator, // dynamic
  var_funky_types__comma, // extern
  var_2090_0_derived_node, // dynamic
  var_2092_1_position, // dynamic
  var_2093_33_sequence_expression, // dynamic
  var_2096_28_comma_operator, // dynamic
  var_2114_1_position, // dynamic
  var_2115_39_named_operator_expression, // dynamic
  var_2118_30_logical_operator, // dynamic
  var_funky_types__and, // extern
  var_2165_0_derived_node, // dynamic
  var_2167_1_position, // dynamic
  var_2168_39_named_operator_expression, // dynamic
  var_2171_26_and_operator, // dynamic
  var_funky_types__or, // extern
  var_2209_0_derived_node, // dynamic
  var_2211_1_position, // dynamic
  var_2212_39_named_operator_expression, // dynamic
  var_2215_25_or_operator, // dynamic
  var_2248_1_position, // dynamic
  var_2249_30_range_expression, // dynamic
  var_2252_37_optional_named_operator, // dynamic
  var_funky_types__named_operator_expression, // extern
  var_2283_1_position, // dynamic
  var_2285_24_identifier, // dynamic
  var_2293_30_range_expression, // dynamic
  var_funky_types__named_operator, // extern
  var_2311_1_position, // dynamic
  var_2312_35_relational_expression, // dynamic
  var_2315_28_range_operator, // dynamic
  var_funky_types__range, // extern
  var_2360_0_derived_node, // dynamic
  var_2362_1_position, // dynamic
  var_2363_28_bit_expression, // dynamic
  var_2366_33_comparison_operator, // dynamic
  var_funky_types__equal, // extern
  var_funky_types__not_equal, // extern
  var_funky_types__less_equal, // extern
  var_funky_types__less_than, // extern
  var_funky_types__greater_equal, // extern
  var_funky_types__greater_than, // extern
  var_2505_0_derived_node, // dynamic
  var_2507_1_position, // dynamic
  var_2508_33_additive_expression, // dynamic
  var_2511_26_bit_operator, // dynamic
  var_funky_types__tagged_bit_expression, // extern
  var_2529_1_position, // dynamic
  var_2530_33_additive_expression, // dynamic
  var_2533_26_bit_operator, // dynamic
  var_funky_types__shift_left, // extern
  var_funky_types__shift_right, // extern
  var_funky_types__bit_and, // extern
  var_2641_0_derived_node, // dynamic
  var_2643_1_position, // dynamic
  var_2644_33_additive_expression, // dynamic
  var_2647_30_bit_and_operator, // dynamic
  var_funky_types__bit_and2, // extern
  var_funky_types__bit_or, // extern
  var_2689_0_derived_node, // dynamic
  var_2691_1_position, // dynamic
  var_2692_33_additive_expression, // dynamic
  var_2695_29_bit_or_operator, // dynamic
  var_funky_types__bit_or2, // extern
  var_funky_types__bit_xor, // extern
  var_2737_0_derived_node, // dynamic
  var_2739_1_position, // dynamic
  var_2740_33_additive_expression, // dynamic
  var_2743_30_bit_xor_operator, // dynamic
  var_funky_types__bit_xor2, // extern
  var_2781_0_derived_node, // dynamic
  var_2783_1_position, // dynamic
  var_2784_39_multiplicative_expression, // dynamic
  var_2787_31_additive_operator, // dynamic
  var_funky_types__tagged_additive_expression, // extern
  var_2805_1_position, // dynamic
  var_2806_39_multiplicative_expression, // dynamic
  var_2809_31_additive_operator, // dynamic
  var_funky_types__plus, // extern
  var_2864_0_derived_node, // dynamic
  var_2866_1_position, // dynamic
  var_2867_39_multiplicative_expression, // dynamic
  var_2870_31_additive_operator, // dynamic
  var_funky_types__plus2, // extern
  var_funky_types__minus, // extern
  var_2893_0_derived_node, // dynamic
  var_2895_1_position, // dynamic
  var_2896_39_multiplicative_expression, // dynamic
  var_2899_31_additive_operator, // dynamic
  var_funky_types__minus2, // extern
  var_2917_1_position, // dynamic
  var_2918_27_an_expression, // dynamic
  var_2921_37_multiplicative_operator, // dynamic
  var_funky_types__times, // extern
  var_2976_0_derived_node, // dynamic
  var_2978_1_position, // dynamic
  var_2979_27_an_expression, // dynamic
  var_2982_37_multiplicative_operator, // dynamic
  var_funky_types__times2, // extern
  var_funky_types__over, // extern
  var_3005_0_derived_node, // dynamic
  var_3007_1_position, // dynamic
  var_3008_27_an_expression, // dynamic
  var_3011_37_multiplicative_operator, // dynamic
  var_funky_types__over2, // extern
  var_3076_1_position, // dynamic
  var_3077_31_inline_expression, // dynamic
  var_3083_26_inline_calls, // dynamic
  var_funky_types__parenthesed_expression, // extern
  var_funky__calls_of, // extern polymorphic
  var_3120_1_position, // dynamic
  var_3121_27_an_expression, // dynamic
  var_funky_types__backquoted, // extern
  var_3133_1_position, // dynamic
  var_3134_27_an_expression, // dynamic
  var_funky_types__negation, // extern
  var_3147_0_derived_node, // dynamic
  var_3149_1_position, // dynamic
  var_3150_29_trailing_remark, // dynamic
  var_3155_1_line_start_arguments, // dynamic
  var_3156_1_error, // dynamic
  var_funky_types__multiline_operator, // extern
  var_funky_types__multiline_plus, // extern
  var_3175_1_position, // dynamic
  var_3176_26_dummy_remark, // dynamic
  var_3181_1_line_start_arguments, // dynamic
  var_3182_1_error, // dynamic
  var_funky_types__multiline_minus, // extern
  var_3197_1_position, // dynamic
  var_3198_20_remark, // dynamic
  var_3203_1_line_start_arguments, // dynamic
  var_3204_1_error, // dynamic
  var_funky_types__multiline_minus_with_remark, // extern
  var_funky_types__multiline_times, // extern
  var_3223_1_position, // dynamic
  var_3224_1_line_start_arguments, // dynamic
  var_3225_1_error, // dynamic
  var_funky_types__multiline_over, // extern
  var_3236_1_position, // dynamic
  var_3237_20_remark, // dynamic
  var_3242_1_line_start_arguments, // dynamic
  var_3243_1_error, // dynamic
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
  var_3298_1_position, // dynamic
  var_3299_26_dummy_remark, // dynamic
  var_3304_1_line_start_arguments, // dynamic
  var_3305_1_error, // dynamic
  var_funky_types__multiline_bit_and, // extern
  var_3320_1_position, // dynamic
  var_3321_20_remark, // dynamic
  var_3326_1_line_start_arguments, // dynamic
  var_3327_1_error, // dynamic
  var_funky_types__multiline_bit_and_with_remark, // extern
  var_funky_types__multiline_bit_or, // extern
  var_funky_types__multiline_bit_xor, // extern
  var_funky_types__multiline_assign, // extern
  var_3354_12_expr, // dynamic
  var_3391_1_position, // dynamic
  var_3393_24_identifier, // dynamic
  var_3399_24_expression, // dynamic
  var_funky_types__inline_attribute_value_pair, // extern
  var_3415_1_position, // dynamic
  var_3417_24_identifier, // dynamic
  var_3423_24_expression, // dynamic
  var_funky_types__inline_method_value_pair, // extern
  var_3440_24_expression, // dynamic
  var_3443_35_some_inline_arguments, // dynamic
  var_3463_30_inline_arguments, // dynamic
  var_3475_30_inline_arguments, // dynamic
  var_3484_1_position, // dynamic
  var_3486_20_digits, // dynamic
  var_funky_types__numeric_literal, // extern
  var_funky__digits_of, // extern polymorphic
  var_funky_types__at_character_literal, // extern
  var_3764_1_position, // dynamic
  var_3765_44_character_name, // dynamic
  var_funky_types__named_character_literal, // extern
  var_3785_1_position, // dynamic
  var_3787_20_digits, // dynamic
  var_funky_types__numeric_character_literal, // extern
  var_3807_1_position, // dynamic
  var_3809_23_character, // dynamic
  var_funky_types__character_literal, // extern
  var_funky__character_of, // extern polymorphic
  var_3844_1_position, // dynamic
  var_3845_31_string_components, // dynamic
  var_funky_types__string_literal, // extern
  var_funky__components_of, // extern polymorphic
  var_3857_12_expr, // dynamic
  var_3876_30_string_component, // dynamic
  var_3879_31_string_components, // dynamic
  var_3930_1_position, // dynamic
  var_3932_31_string_characters, // dynamic
  var_funky_types__character_sequence, // extern
  var_funky__characters_of, // extern polymorphic
  var_3965_1_position, // dynamic
  var_3966_1_multiline_string_components, // dynamic
  var_3967_1_error, // dynamic
  var_3978_12_expr, // dynamic
  var_funky_types__newline, // extern
  var_4013_35_string_line_component, // dynamic
  var_4016_41_multiline_string_components, // dynamic
  var_funky_types__at_character, // extern
  var_4081_1_position, // dynamic
  var_4082_44_empty_character, // dynamic
  var_funky_types__tagged_empty_character, // extern
  var_funky_types__escape_expression, // extern
  var_4101_55_expression, // dynamic
  var_4127_1_position, // dynamic
  var_4128_44_character_name, // dynamic
  var_funky_types__named_character, // extern
  var_4144_1_position, // dynamic
  var_4146_20_digits, // dynamic
  var_funky_types__numeric_character, // extern
  var_4162_1_position, // dynamic
  var_4164_36_string_line_characters, // dynamic
  var_4197_1_position, // dynamic
  var_4198_30_trailing_remarks, // dynamic
  var_funky_types__unique, // extern
  var_4210_1_position, // dynamic
  var_4211_30_trailing_remarks, // dynamic
  var_funky_types__attribute, // extern
  var_4223_1_position, // dynamic
  var_4224_30_trailing_remarks, // dynamic
  var_funky_types__attribute_with_setter, // extern
  var_4237_0_derived_node, // dynamic
  var_4239_1_position, // dynamic
  var_4240_31_inline_parameters, // dynamic
  var_4243_38_optional_line_end_remark, // dynamic
  var_4246_29_body_statements, // dynamic
  var_funky_types__body, // extern
  var_funky__parameters_of, // extern polymorphic
  var_funky__statements_of, // extern polymorphic
  var_4275_12_expr, // dynamic
  var_4299_1_position, // dynamic
  var_4300_31_inline_parameters, // dynamic
  var_4306_30_inline_statement, // dynamic
  var_funky_types__inline_body, // extern
  var_funky__statement_of, // extern polymorphic
  var_4325_1_parameters_or_statement, // dynamic
  var_4326_1_error, // dynamic
  var_4336_12_expr, // dynamic
  var_4368_30_inline_parameter, // dynamic
  var_4371_42_maybe_more_inline_parameters, // dynamic
  var_4417_1_position, // dynamic
  var_4418_29_trailing_remark, // dynamic
  var_4423_1_parameter, // dynamic
  var_4424_1_error, // dynamic
  var_funky_types__open_parameters, // extern
  var_funky__parameter_of, // extern polymorphic
  var_4439_1_position, // dynamic
  var_4441_28_parameter_name, // dynamic
  var_4444_30_parameter_option, // dynamic
  var_funky_types__inline_parameter, // extern
  var_funky__option_of, // extern polymorphic
  var_4458_1_position, // dynamic
  var_4460_28_parameter_name, // dynamic
  var_4463_30_parameter_option, // dynamic
  var_4466_30_trailing_remarks, // dynamic
  var_funky_types__parameter, // extern
  var_funky_types__myself, // extern
  var_funky_types__rest, // extern
  var_4522_1_position, // dynamic
  var_4523_28_simple_operand, // dynamic
  var_funky_types__initial_value, // extern
  var_funky__operand_of, // extern polymorphic
  var_4567_1_position, // dynamic
  var_4568_29_trailing_remark, // dynamic
  var_funky_types__close_parameters, // extern
  var_4580_1_position, // dynamic
  var_4581_38_some_statement_arguments, // dynamic
  var_funky_types__return_expression, // extern
  var_funky_types__return, // extern
  var_4601_1_position, // dynamic
  var_4606_25_remark_text, // dynamic
  var_funky_types__remark, // extern
  var_funky__text_of, // extern polymorphic
  var_4620_1_position, // dynamic
  var_4622_25_remark_text, // dynamic
  var_4658_1_position, // dynamic
  var_4659_29_trailing_remark, // dynamic
  var_4662_26_line_remarks, // dynamic
  var_funky_types__line_end_and_line_remarks, // extern
  var_4700_1_multiline_remark, // dynamic
  var_4701_1_error, // dynamic
  var_4712_1_multiline_remark, // dynamic
  var_4713_1_error, // dynamic
  var_4721_1_position, // dynamic
  var_4723_25_remark_text, // dynamic
  var_4735_1_position, // dynamic
  var_4740_25_remark_text, // dynamic
  var_4743_31_some_remark_lines, // dynamic
  var_funky_types__multiline_remark, // extern
  var_funky__lines_of, // extern polymorphic
  var_4759_1_position, // dynamic
  var_4761_25_remark_text, // dynamic
  var_4764_31_some_remark_lines, // dynamic
  var_4788_1_position, // dynamic
  var_4790_25_remark_text, // dynamic
  var_funky_types__remark_lines, // extern
  var_4802_1_position, // dynamic
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
  var_cond, 4, lambda_541, lambda_543, lambda_545, lambda_548, 2, LOCAL(2), var_1444_12_expr,
  // cond
  var_cond, 3, lambda_550, lambda_552, lambda_554, 1, LOCAL(1),
  // ->
  LET, 2, LOCAL(2), LOCAL(1), TAIL_CALL,
  POS(1444, 3),
  POS(1464, 5),
  POS(1462, 3)
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
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_549, TAIL_CALL,
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
  1, // locals
  0, // parameters
  // is_undefined -> empty_list
  var_is_undefined, 1, var_1444_12_expr, 1, LOCAL(1),
  //  expr.is_undefined -> empty_list
  LET, 2, LOCAL(1), lambda_551, TAIL_CALL,
  POS(1465, 15),
  POS(1465, 9)
};

static TAB_NUM t_lambda_551[] = {
  0, // locals
  0, // parameters
  //  empty_list
  LET, 1, var_empty_list, TAIL_CALL,
  POS(1465, 30)
};

static TAB_NUM t_lambda_552[] = {
  1, // locals
  0, // parameters
  // is_a_list -> expr
  var_is_a_list, 1, var_1444_12_expr, 1, LOCAL(1),
  //  expr.is_a_list -> expr
  LET, 2, LOCAL(1), lambda_553, TAIL_CALL,
  POS(1466, 15),
  POS(1466, 9)
};

static TAB_NUM t_lambda_553[] = {
  0, // locals
  0, // parameters
  //  expr
  LET, 1, var_1444_12_expr, TAIL_CALL,
  POS(1466, 27)
};

static TAB_NUM t_lambda_554[] = {
  0, // locals
  0, // parameters
  //  true -> list(expr)
  LET, 2, var_true, lambda_555, TAIL_CALL,
  POS(1467, 9)
};

static TAB_NUM t_lambda_555[] = {
  1, // locals
  0, // parameters
  // list(expr)
  var_list, 1, var_1444_12_expr, 1, LOCAL(1),
  //  list(expr)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1467, 18),
  POS(1467, 17)
};

static TAB_NUM t_func_parse_some_statement_arguments[] = {
  2, // locals
  0, // parameters
  // cond $rest $expr
  var_cond, 6, lambda_556, lambda_558, lambda_560, lambda_563, lambda_566, lambda_568, 2, LOCAL(2), var_1470_12_expr,
  // cond
  var_cond, 3, lambda_570, lambda_572, lambda_574, 1, LOCAL(1),
  // ->
  LET, 2, LOCAL(2), LOCAL(1), TAIL_CALL,
  POS(1470, 3),
  POS(1498, 5),
  POS(1496, 3)
};

static TAB_NUM t_lambda_556[] = {
  2, // locals
  0, // parameters
  // text(1) == ':'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == ':'
  var_std__equal, 2, LOCAL(1), chr_58, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_557, TAIL_CALL,
  POS(1472, 7),
  POS(1472, 7),
  POS(1471, 7)
};

static TAB_NUM t_lambda_557[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_body
  func_parse_body, 0, TAIL_CALL,
  POS(1474, 9),
  POS(1475, 9)
};

static TAB_NUM t_lambda_558[] = {
  2, // locals
  0, // parameters
  // text(1) == ' '
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_559, TAIL_CALL,
  POS(1477, 7),
  POS(1477, 7),
  POS(1476, 7)
};

static TAB_NUM t_lambda_559[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_spaced_statement_arguments_without_prefix
  func_parse_spaced_statement_arguments_without_prefix, 0, TAIL_CALL,
  POS(1479, 9),
  POS(1480, 9)
};

static TAB_NUM t_lambda_560[] = {
  2, // locals
  0, // parameters
  // text == "@nl;" && subgroups.is_defined
  var_std__equal, 2, var_text, string_2, 1, LOCAL(1),
  // text == "@nl;" && subgroups.is_defined
  var_std__and, 2, LOCAL(1), lambda_561, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_562, TAIL_CALL,
  POS(1482, 7),
  POS(1482, 7),
  POS(1481, 7)
};

static TAB_NUM t_lambda_561[] = {
  1, // locals
  0, // parameters
  // is_defined
  var_is_defined, 1, var_subgroups, 1, LOCAL(1),
  // subgroups.is_defined
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1482, 35),
  POS(1482, 25)
};

static TAB_NUM t_lambda_562[] = {
  0, // locals
  0, // parameters
  // parse_multiline_arguments_without_prefix
  func_parse_multiline_arguments_without_prefix, 0, TAIL_CALL,
  POS(1484, 9)
};

static TAB_NUM t_lambda_563[] = {
  2, // locals
  0, // parameters
  // text == "@nl;" && subgroups.is_defined
  var_std__equal, 2, var_text, string_2, 1, LOCAL(1),
  // text == "@nl;" && subgroups.is_defined
  var_std__and, 2, LOCAL(1), lambda_564, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_565, TAIL_CALL,
  POS(1486, 7),
  POS(1486, 7),
  POS(1485, 7)
};

static TAB_NUM t_lambda_564[] = {
  1, // locals
  0, // parameters
  // is_defined
  var_is_defined, 1, var_subgroups, 1, LOCAL(1),
  // subgroups.is_defined
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1486, 35),
  POS(1486, 25)
};

static TAB_NUM t_lambda_565[] = {
  0, // locals
  0, // parameters
  // parse_line_remarks_without_prefix
  func_parse_line_remarks_without_prefix, 0, TAIL_CALL,
  POS(1488, 9)
};

static TAB_NUM t_lambda_566[] = {
  2, // locals
  0, // parameters
  // text(1) == '@nl;'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '@nl;'
  var_std__equal, 2, LOCAL(1), chr_10, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_567, TAIL_CALL,
  POS(1490, 7),
  POS(1490, 7),
  POS(1489, 7)
};

static TAB_NUM t_lambda_567[] = {
  0, // locals
  0, // parameters
  //  text empty_list
  LET, 2, var_text, var_empty_list, TAIL_CALL,
  POS(1491, 9)
};

static TAB_NUM t_lambda_568[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_569, TAIL_CALL,
  POS(1492, 7)
};

static TAB_NUM t_lambda_569[] = {
  0, // locals
  0, // parameters
  // syntax_error "some statement arguments"
  func_syntax_error, 1, str_some_statement_a, TAIL_CALL,
  POS(1495, 9)
};

static TAB_NUM t_lambda_570[] = {
  1, // locals
  0, // parameters
  // is_undefined -> empty_list
  var_is_undefined, 1, var_1470_12_expr, 1, LOCAL(1),
  //  expr.is_undefined -> empty_list
  LET, 2, LOCAL(1), lambda_571, TAIL_CALL,
  POS(1499, 15),
  POS(1499, 9)
};

static TAB_NUM t_lambda_571[] = {
  0, // locals
  0, // parameters
  //  empty_list
  LET, 1, var_empty_list, TAIL_CALL,
  POS(1499, 30)
};

static TAB_NUM t_lambda_572[] = {
  1, // locals
  0, // parameters
  // is_a_list -> expr
  var_is_a_list, 1, var_1470_12_expr, 1, LOCAL(1),
  //  expr.is_a_list -> expr
  LET, 2, LOCAL(1), lambda_573, TAIL_CALL,
  POS(1500, 15),
  POS(1500, 9)
};

static TAB_NUM t_lambda_573[] = {
  0, // locals
  0, // parameters
  //  expr
  LET, 1, var_1470_12_expr, TAIL_CALL,
  POS(1500, 27)
};

static TAB_NUM t_lambda_574[] = {
  0, // locals
  0, // parameters
  //  true -> list(expr)
  LET, 2, var_true, lambda_575, TAIL_CALL,
  POS(1501, 9)
};

static TAB_NUM t_lambda_575[] = {
  1, // locals
  0, // parameters
  // list(expr)
  var_list, 1, var_1470_12_expr, 1, LOCAL(1),
  //  list(expr)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1501, 18),
  POS(1501, 17)
};

static TAB_NUM t_func_parse_spaced_arguments_without_prefix[] = {
  2, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, LOCAL(2),
  // parse_more_arguments !text $more_arguments
  func_parse_more_arguments, 0, 2, var_text, var_1505_28_more_arguments,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_576, lambda_577, TAIL_CALL,
  POS(1504, 3),
  POS(1505, 3),
  POS(1507, 10),
  POS(1506, 3)
};

static TAB_NUM t_lambda_576[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_text, var_1505_28_more_arguments, TAIL_CALL,
  POS(1508, 7)
};

static TAB_NUM t_lambda_577[] = {
  0, // locals
  0, // parameters
  //  undefined more_arguments
  LET, 2, var_undefined, var_1505_28_more_arguments, TAIL_CALL,
  POS(1511, 7)
};

static TAB_NUM t_func_parse_spaced_statement_arguments_without_prefix[] = {
  2, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, LOCAL(2),
  // parse_more_statement_arguments !text $more_statement_arguments
  func_parse_more_statement_arguments, 0, 2, var_text, var_1515_38_more_statement_arguments,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_578, lambda_579, TAIL_CALL,
  POS(1514, 3),
  POS(1515, 3),
  POS(1517, 10),
  POS(1516, 3)
};

static TAB_NUM t_lambda_578[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_text, var_1515_38_more_statement_arguments, TAIL_CALL,
  POS(1518, 7)
};

static TAB_NUM t_lambda_579[] = {
  0, // locals
  0, // parameters
  //  undefined more_statement_arguments
  LET, 2, var_undefined, var_1515_38_more_statement_arguments, TAIL_CALL,
  POS(1521, 7)
};

static TAB_NUM t_func_parse_more_arguments[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 4, lambda_580, lambda_582, lambda_585, lambda_588, TAIL_CALL,
  POS(1524, 3)
};

static TAB_NUM t_lambda_580[] = {
  2, // locals
  0, // parameters
  // text(1) == ':'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == ':'
  var_std__equal, 2, LOCAL(1), chr_58, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_581, TAIL_CALL,
  POS(1526, 7),
  POS(1526, 7),
  POS(1525, 7)
};

static TAB_NUM t_lambda_581[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_body
  func_parse_body, 0, TAIL_CALL,
  POS(1528, 9),
  POS(1529, 9)
};

static TAB_NUM t_lambda_582[] = {
  3, // locals
  0, // parameters
  // text(1) == '-'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '-'
  var_std__equal, 2, LOCAL(1), chr_45, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_583, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_584, TAIL_CALL,
  POS(1532, 9),
  POS(1532, 9),
  POS(1531, 9),
  POS(1530, 7)
};

static TAB_NUM t_lambda_583[] = {
  2, // locals
  0, // parameters
  // text(2) == '>'
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '>'
  var_std__equal, 2, LOCAL(1), chr_62, 1, LOCAL(2),
  // text(2) == '>'
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1533, 9),
  POS(1533, 9),
  POS(1533, 9)
};

static TAB_NUM t_lambda_584[] = {
  0, // locals
  0, // parameters
  // range &text 3 -1
  var_range, 3, var_text, num_3, minus_num_1, 1, var_text,
  // parse_return_expression_without_prefix
  func_parse_return_expression_without_prefix, 0, TAIL_CALL,
  POS(1535, 9),
  POS(1536, 9)
};

static TAB_NUM t_lambda_585[] = {
  2, // locals
  0, // parameters
  // text == "@quot;@nl;" && subgroups.is_defined
  var_std__equal, 2, var_text, string_7, 1, LOCAL(1),
  // text == "@quot;@nl;" && subgroups.is_defined
  var_std__and, 2, LOCAL(1), lambda_586, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_587, TAIL_CALL,
  POS(1538, 7),
  POS(1538, 7),
  POS(1537, 7)
};

static TAB_NUM t_lambda_586[] = {
  1, // locals
  0, // parameters
  // is_defined
  var_is_defined, 1, var_subgroups, 1, LOCAL(1),
  // subgroups.is_defined
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1538, 41),
  POS(1538, 31)
};

static TAB_NUM t_lambda_587[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_multiline_string_literal_without_prefix
  func_parse_multiline_string_literal_without_prefix, 0, TAIL_CALL,
  POS(1540, 9),
  POS(1541, 9)
};

static TAB_NUM t_lambda_588[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_589, TAIL_CALL,
  POS(1542, 7)
};

static TAB_NUM t_lambda_589[] = {
  0, // locals
  0, // parameters
  // !expected "more arguments"
  LET, 1, str_more_arguments, 1, var_expected,
  // !at text
  LET, 1, var_text, 1, var_at,
  // parse_arguments
  func_parse_arguments, 0, TAIL_CALL,
  POS(1545, 9),
  POS(1546, 9),
  POS(1547, 9)
};

static TAB_NUM t_func_parse_more_statement_arguments[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 4, lambda_590, lambda_592, lambda_595, lambda_598, TAIL_CALL,
  POS(1550, 3)
};

static TAB_NUM t_lambda_590[] = {
  2, // locals
  0, // parameters
  // text(1) == ':'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == ':'
  var_std__equal, 2, LOCAL(1), chr_58, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_591, TAIL_CALL,
  POS(1552, 7),
  POS(1552, 7),
  POS(1551, 7)
};

static TAB_NUM t_lambda_591[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_body
  func_parse_body, 0, TAIL_CALL,
  POS(1554, 9),
  POS(1555, 9)
};

static TAB_NUM t_lambda_592[] = {
  3, // locals
  0, // parameters
  // text(1) == '-'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '-'
  var_std__equal, 2, LOCAL(1), chr_45, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_593, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_594, TAIL_CALL,
  POS(1558, 9),
  POS(1558, 9),
  POS(1557, 9),
  POS(1556, 7)
};

static TAB_NUM t_lambda_593[] = {
  2, // locals
  0, // parameters
  // text(2) == '>'
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '>'
  var_std__equal, 2, LOCAL(1), chr_62, 1, LOCAL(2),
  // text(2) == '>'
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1559, 9),
  POS(1559, 9),
  POS(1559, 9)
};

static TAB_NUM t_lambda_594[] = {
  0, // locals
  0, // parameters
  // range &text 3 -1
  var_range, 3, var_text, num_3, minus_num_1, 1, var_text,
  // parse_return_expression_without_prefix
  func_parse_return_expression_without_prefix, 0, TAIL_CALL,
  POS(1561, 9),
  POS(1562, 9)
};

static TAB_NUM t_lambda_595[] = {
  2, // locals
  0, // parameters
  // text == "@quot;@nl;" && subgroups.is_defined
  var_std__equal, 2, var_text, string_7, 1, LOCAL(1),
  // text == "@quot;@nl;" && subgroups.is_defined
  var_std__and, 2, LOCAL(1), lambda_596, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_597, TAIL_CALL,
  POS(1564, 7),
  POS(1564, 7),
  POS(1563, 7)
};

static TAB_NUM t_lambda_596[] = {
  1, // locals
  0, // parameters
  // is_defined
  var_is_defined, 1, var_subgroups, 1, LOCAL(1),
  // subgroups.is_defined
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1564, 41),
  POS(1564, 31)
};

static TAB_NUM t_lambda_597[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_multiline_string_literal_without_prefix
  func_parse_multiline_string_literal_without_prefix, 0, TAIL_CALL,
  POS(1566, 9),
  POS(1567, 9)
};

static TAB_NUM t_lambda_598[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_599, TAIL_CALL,
  POS(1568, 7)
};

static TAB_NUM t_lambda_599[] = {
  0, // locals
  0, // parameters
  // !expected "more statement arguments"
  LET, 1, str_more_statement_a, 1, var_expected,
  // !at text
  LET, 1, var_text, 1, var_at,
  // parse_even_more_statement_arguments
  func_parse_even_more_statement_arguments, 0, TAIL_CALL,
  POS(1571, 9),
  POS(1572, 9),
  POS(1573, 9)
};

static TAB_NUM t_func_parse_arguments[] = {
  2, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, LOCAL(2),
  // parse_argument !text $argument
  func_parse_argument, 0, 2, var_text, var_1577_22_argument,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_23_text_is_defined, lambda_604, TAIL_CALL,
  POS(1576, 3),
  POS(1577, 3),
  POS(1579, 10),
  POS(1578, 3)
};

static TAB_NUM t_lambda_23_text_is_defined[] = {
  1, // locals
  0, // parameters
  // parse_some_arguments !text $some_arguments
  func_parse_some_arguments, 0, 2, var_text, var_1580_28_some_arguments,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_600, lambda_603, TAIL_CALL,
  POS(1580, 7),
  POS(1582, 14),
  POS(1581, 7)
};

static TAB_NUM t_lambda_600[] = {
  1, // locals
  0, // parameters
  // is_defined
  var_is_defined, 1, var_1580_28_some_arguments, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_601, lambda_602, TAIL_CALL,
  POS(1585, 28),
  POS(1584, 11)
};

static TAB_NUM t_lambda_601[] = {
  3, // locals
  0, // parameters
  // to_list
  func_to_list, 1, var_1577_22_argument, 1, LOCAL(1),
  // to_list
  func_to_list, 1, var_1580_28_some_arguments, 1, LOCAL(2),
  // append
  var_append, 2, LOCAL(1), LOCAL(2), 1, LOCAL(3),
  // 
  LET, 2, var_text, LOCAL(3), TAIL_CALL,
  POS(1589, 26),
  POS(1590, 32),
  POS(1588, 15),
  POS(1586, 15)
};

static TAB_NUM t_lambda_602[] = {
  1, // locals
  0, // parameters
  // to_list
  func_to_list, 1, var_1577_22_argument, 1, LOCAL(1),
  //  text argument.to_list
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(1591, 30),
  POS(1591, 15)
};

static TAB_NUM t_lambda_603[] = {
  0, // locals
  0, // parameters
  //  undefined some_arguments
  LET, 2, var_undefined, var_1580_28_some_arguments, TAIL_CALL,
  POS(1592, 11)
};

static TAB_NUM t_lambda_604[] = {
  0, // locals
  0, // parameters
  //  undefined argument
  LET, 2, var_undefined, var_1577_22_argument, TAIL_CALL,
  POS(1593, 7)
};

static TAB_NUM t_func_parse_even_more_statement_arguments[] = {
  2, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, LOCAL(2),
  // parse_argument !text $argument
  func_parse_argument, 0, 2, var_text, var_1597_22_argument,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_24_text_is_defined, lambda_609, TAIL_CALL,
  POS(1596, 3),
  POS(1597, 3),
  POS(1599, 10),
  POS(1598, 3)
};

static TAB_NUM t_lambda_24_text_is_defined[] = {
  1, // locals
  0, // parameters
  // parse_some_statement_arguments !text $some_statement_arguments
  func_parse_some_statement_arguments, 0, 2, var_text, var_1600_38_some_statement_arguments,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_605, lambda_608, TAIL_CALL,
  POS(1600, 7),
  POS(1602, 14),
  POS(1601, 7)
};

static TAB_NUM t_lambda_605[] = {
  1, // locals
  0, // parameters
  // is_defined
  var_is_defined, 1, var_1600_38_some_statement_arguments, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_606, lambda_607, TAIL_CALL,
  POS(1605, 38),
  POS(1604, 11)
};

static TAB_NUM t_lambda_606[] = {
  3, // locals
  0, // parameters
  // to_list
  func_to_list, 1, var_1597_22_argument, 1, LOCAL(1),
  // to_list
  func_to_list, 1, var_1600_38_some_statement_arguments, 1, LOCAL(2),
  // append
  var_append, 2, LOCAL(1), LOCAL(2), 1, LOCAL(3),
  // 
  LET, 2, var_text, LOCAL(3), TAIL_CALL,
  POS(1609, 26),
  POS(1610, 42),
  POS(1608, 15),
  POS(1606, 15)
};

static TAB_NUM t_lambda_607[] = {
  1, // locals
  0, // parameters
  // to_list
  func_to_list, 1, var_1597_22_argument, 1, LOCAL(1),
  //  text argument.to_list
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(1611, 30),
  POS(1611, 15)
};

static TAB_NUM t_lambda_608[] = {
  0, // locals
  0, // parameters
  //  undefined some_statement_arguments
  LET, 2, var_undefined, var_1600_38_some_statement_arguments, TAIL_CALL,
  POS(1612, 11)
};

static TAB_NUM t_lambda_609[] = {
  0, // locals
  0, // parameters
  //  undefined argument
  LET, 2, var_undefined, var_1597_22_argument, TAIL_CALL,
  POS(1613, 7)
};

static TAB_NUM t_func_parse_multiline_arguments[] = {
  3, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, LOCAL(3),
  // text == "@nl;" && subgroups.is_defined:
  var_std__equal, 2, var_text, string_2, 1, LOCAL(1),
  // text == "@nl;" && subgroups.is_defined:
  var_std__and, 2, LOCAL(1), lambda_610, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_611, lambda_614, TAIL_CALL,
  POS(1616, 3),
  POS(1618, 5),
  POS(1618, 5),
  POS(1617, 3)
};

static TAB_NUM t_lambda_610[] = {
  1, // locals
  0, // parameters
  // is_defined:
  var_is_defined, 1, var_subgroups, 1, LOCAL(1),
  // subgroups.is_defined:
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1618, 33),
  POS(1618, 23)
};

static TAB_NUM t_lambda_611[] = {
  1, // locals
  0, // parameters
  // $line_start_arguments parse_groups(funky::parse_line_start_arguments_group)
  func_parse_groups, 1, var_funky__parse_line_start_arguments_group, 1, var_1619_1_line_start_arguments,
  // $error find_first(line_start_arguments is_an_error)
  var_find_first, 2, var_1619_1_line_start_arguments, var_is_an_error, 1, var_1620_1_error,
  // is_an_error
  var_is_an_error, 1, var_1620_1_error, 1, LOCAL(1),
  // if error.is_an_error
  var_if, 3, LOCAL(1), lambda_612, lambda_613, TAIL_CALL,
  POS(1619, 7),
  POS(1620, 7),
  POS(1621, 16),
  POS(1621, 7)
};

static TAB_NUM t_lambda_612[] = {
  0, // locals
  0, // parameters
  //  undefined error
  LET, 2, var_undefined, var_1620_1_error, TAIL_CALL,
  POS(1622, 11)
};

static TAB_NUM t_lambda_613[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, string_1, var_1619_1_line_start_arguments, TAIL_CALL,
  POS(1623, 11)
};

static TAB_NUM t_lambda_614[] = {
  0, // locals
  0, // parameters
  // syntax_error "valid input characters or line end"
  func_syntax_error, 1, str_valid_input_char, TAIL_CALL,
  POS(1627, 7)
};

static TAB_NUM t_func_parse_multiline_arguments_without_prefix[] = {
  2, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, LOCAL(2),
  // $line_start_arguments parse_groups(funky::parse_line_start_arguments_group)
  func_parse_groups, 1, var_funky__parse_line_start_arguments_group, 1, var_1631_1_line_start_arguments,
  // $error find_first(line_start_arguments is_an_error)
  var_find_first, 2, var_1631_1_line_start_arguments, var_is_an_error, 1, var_1632_1_error,
  // is_an_error
  var_is_an_error, 1, var_1632_1_error, 1, LOCAL(1),
  // if error.is_an_error
  var_if, 3, LOCAL(1), lambda_615, lambda_616, TAIL_CALL,
  POS(1630, 3),
  POS(1631, 3),
  POS(1632, 3),
  POS(1633, 12),
  POS(1633, 3)
};

static TAB_NUM t_lambda_615[] = {
  0, // locals
  0, // parameters
  //  undefined error
  LET, 2, var_undefined, var_1632_1_error, TAIL_CALL,
  POS(1634, 7)
};

static TAB_NUM t_lambda_616[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, string_1, var_1631_1_line_start_arguments, TAIL_CALL,
  POS(1635, 7)
};

static TAB_NUM t_func_parse_tagged_multiline_arguments_without_prefix[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_1640_1_position,
  // $line_start_arguments parse_groups(funky::parse_line_start_arguments_group)
  func_parse_groups, 1, var_funky__parse_line_start_arguments_group, 1, var_1641_1_line_start_arguments,
  // $error find_first(line_start_arguments is_an_error)
  var_find_first, 2, var_1641_1_line_start_arguments, var_is_an_error, 1, var_1642_1_error,
  // is_an_error
  var_is_an_error, 1, var_1642_1_error, 1, LOCAL(1),
  // if error.is_an_error
  var_if, 3, LOCAL(1), lambda_617, lambda_618, TAIL_CALL,
  POS(1640, 3),
  POS(1641, 3),
  POS(1642, 3),
  POS(1643, 12),
  POS(1643, 3)
};

static TAB_NUM t_lambda_617[] = {
  0, // locals
  0, // parameters
  //  undefined error
  LET, 2, var_undefined, var_1642_1_error, TAIL_CALL,
  POS(1644, 7)
};

static TAB_NUM t_lambda_618[] = {
  1, // locals
  0, // parameters
  // funky_types::function_call
  LET, -3, var_funky_types__function_call, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_1640_1_position, var_funky__arguments_of, var_1641_1_line_start_arguments, LOCAL(1),
  // 
  LET, 2, string_1, LOCAL(1), TAIL_CALL,
  POS(1647, 7),
  POS(1645, 7)
};

static TAB_NUM t_func_parse_remark_and_multiline_function_call_without_prefix[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_1653_1_position,
  // parse_spaced_remark_without_prefix !text $spaced_remark
  func_parse_spaced_remark_without_prefix, 0, 2, var_text, var_1654_42_spaced_remark,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_25_text_is_defined, lambda_623, TAIL_CALL,
  POS(1653, 3),
  POS(1654, 3),
  POS(1656, 10),
  POS(1655, 3)
};

static TAB_NUM t_lambda_25_text_is_defined[] = {
  1, // locals
  0, // parameters
  // text == "@nl;":
  var_std__equal, 2, var_text, string_2, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_619, lambda_622, TAIL_CALL,
  POS(1658, 9),
  POS(1657, 7)
};

static TAB_NUM t_lambda_619[] = {
  1, // locals
  0, // parameters
  // $line_start_arguments parse_groups(funky::parse_line_start_arguments_group)
  func_parse_groups, 1, var_funky__parse_line_start_arguments_group, 1, var_1659_1_line_start_arguments,
  // $error find_first(line_start_arguments is_an_error)
  var_find_first, 2, var_1659_1_line_start_arguments, var_is_an_error, 1, var_1660_1_error,
  // is_an_error
  var_is_an_error, 1, var_1660_1_error, 1, LOCAL(1),
  // if error.is_an_error
  var_if, 3, LOCAL(1), lambda_620, lambda_621, TAIL_CALL,
  POS(1659, 11),
  POS(1660, 11),
  POS(1661, 20),
  POS(1661, 11)
};

static TAB_NUM t_lambda_620[] = {
  0, // locals
  0, // parameters
  //  undefined error
  LET, 2, var_undefined, var_1660_1_error, TAIL_CALL,
  POS(1662, 15)
};

static TAB_NUM t_lambda_621[] = {
  1, // locals
  0, // parameters
  // funky_types::remark_and_multiline_function_call
  LET, -4, var_funky_types__remark_and_multiline_function_call, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_1653_1_position, var_funky__remark_of, var_1654_42_spaced_remark, var_funky__arguments_of, var_1659_1_line_start_arguments, LOCAL(1),
  // 
  LET, 2, string_1, LOCAL(1), TAIL_CALL,
  POS(1665, 15),
  POS(1663, 15)
};

static TAB_NUM t_lambda_622[] = {
  0, // locals
  0, // parameters
  // syntax_error "valid input characters or line end"
  func_syntax_error, 1, str_valid_input_char, TAIL_CALL,
  POS(1671, 11)
};

static TAB_NUM t_lambda_623[] = {
  0, // locals
  0, // parameters
  //  undefined spaced_remark
  LET, 2, var_undefined, var_1654_42_spaced_remark, TAIL_CALL,
  POS(1672, 7)
};

static TAB_NUM t_func_parse_argument[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 9, lambda_624, lambda_627, lambda_629, lambda_631, lambda_633, lambda_635, lambda_638, lambda_640, lambda_643, TAIL_CALL,
  POS(1675, 3)
};

static TAB_NUM t_lambda_624[] = {
  3, // locals
  0, // parameters
  // text(1) == '$'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '$'
  var_std__equal, 2, LOCAL(1), chr_36, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_625, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_626, TAIL_CALL,
  POS(1678, 9),
  POS(1678, 9),
  POS(1677, 9),
  POS(1676, 7)
};

static TAB_NUM t_lambda_625[] = {
  2, // locals
  0, // parameters
  // text(2) == '_'
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '_'
  var_std__equal, 2, LOCAL(1), chr_95, 1, LOCAL(2),
  // text(2) == '_'
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1679, 9),
  POS(1679, 9),
  POS(1679, 9)
};

static TAB_NUM t_lambda_626[] = {
  0, // locals
  0, // parameters
  // range &text 3 -1
  var_range, 3, var_text, num_3, minus_num_1, 1, var_text,
  // parse_dummy_definition_without_prefix
  func_parse_dummy_definition_without_prefix, 0, TAIL_CALL,
  POS(1681, 9),
  POS(1682, 9)
};

static TAB_NUM t_lambda_627[] = {
  2, // locals
  0, // parameters
  // text(1) == '$'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '$'
  var_std__equal, 2, LOCAL(1), chr_36, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_628, TAIL_CALL,
  POS(1684, 7),
  POS(1684, 7),
  POS(1683, 7)
};

static TAB_NUM t_lambda_628[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_definition_without_prefix
  func_parse_definition_without_prefix, 0, TAIL_CALL,
  POS(1686, 9),
  POS(1687, 9)
};

static TAB_NUM t_lambda_629[] = {
  2, // locals
  0, // parameters
  // text(1) == '!'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '!'
  var_std__equal, 2, LOCAL(1), chr_33, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_630, TAIL_CALL,
  POS(1689, 7),
  POS(1689, 7),
  POS(1688, 7)
};

static TAB_NUM t_lambda_630[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_redefinition_without_prefix
  func_parse_redefinition_without_prefix, 0, TAIL_CALL,
  POS(1691, 9),
  POS(1692, 9)
};

static TAB_NUM t_lambda_631[] = {
  2, // locals
  0, // parameters
  // text(1) == '&'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '&'
  var_std__equal, 2, LOCAL(1), chr_38, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_632, TAIL_CALL,
  POS(1694, 7),
  POS(1694, 7),
  POS(1693, 7)
};

static TAB_NUM t_lambda_632[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_update_without_prefix
  func_parse_update_without_prefix, 0, TAIL_CALL,
  POS(1696, 9),
  POS(1697, 9)
};

static TAB_NUM t_lambda_633[] = {
  2, // locals
  0, // parameters
  // text(1) == ':'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == ':'
  var_std__equal, 2, LOCAL(1), chr_58, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_634, TAIL_CALL,
  POS(1699, 7),
  POS(1699, 7),
  POS(1698, 7)
};

static TAB_NUM t_lambda_634[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_body
  func_parse_body, 0, TAIL_CALL,
  POS(1701, 9),
  POS(1702, 9)
};

static TAB_NUM t_lambda_635[] = {
  3, // locals
  0, // parameters
  // text(1) == '-'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '-'
  var_std__equal, 2, LOCAL(1), chr_45, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_636, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_637, TAIL_CALL,
  POS(1705, 9),
  POS(1705, 9),
  POS(1704, 9),
  POS(1703, 7)
};

static TAB_NUM t_lambda_636[] = {
  2, // locals
  0, // parameters
  // text(2) == '>'
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '>'
  var_std__equal, 2, LOCAL(1), chr_62, 1, LOCAL(2),
  // text(2) == '>'
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1706, 9),
  POS(1706, 9),
  POS(1706, 9)
};

static TAB_NUM t_lambda_637[] = {
  0, // locals
  0, // parameters
  // range &text 3 -1
  var_range, 3, var_text, num_3, minus_num_1, 1, var_text,
  // parse_return_expression_without_prefix
  func_parse_return_expression_without_prefix, 0, TAIL_CALL,
  POS(1708, 9),
  POS(1709, 9)
};

static TAB_NUM t_lambda_638[] = {
  2, // locals
  0, // parameters
  // text(1) == '#'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '#'
  var_std__equal, 2, LOCAL(1), chr_35, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_639, TAIL_CALL,
  POS(1711, 7),
  POS(1711, 7),
  POS(1710, 7)
};

static TAB_NUM t_lambda_639[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_remark_without_prefix
  func_parse_remark_without_prefix, 0, TAIL_CALL,
  POS(1713, 9),
  POS(1714, 9)
};

static TAB_NUM t_lambda_640[] = {
  2, // locals
  0, // parameters
  // text == "@quot;@nl;" && subgroups.is_defined
  var_std__equal, 2, var_text, string_7, 1, LOCAL(1),
  // text == "@quot;@nl;" && subgroups.is_defined
  var_std__and, 2, LOCAL(1), lambda_641, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_642, TAIL_CALL,
  POS(1716, 7),
  POS(1716, 7),
  POS(1715, 7)
};

static TAB_NUM t_lambda_641[] = {
  1, // locals
  0, // parameters
  // is_defined
  var_is_defined, 1, var_subgroups, 1, LOCAL(1),
  // subgroups.is_defined
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1716, 41),
  POS(1716, 31)
};

static TAB_NUM t_lambda_642[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_multiline_string_literal_without_prefix
  func_parse_multiline_string_literal_without_prefix, 0, TAIL_CALL,
  POS(1718, 9),
  POS(1719, 9)
};

static TAB_NUM t_lambda_643[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_644, TAIL_CALL,
  POS(1720, 7)
};

static TAB_NUM t_lambda_644[] = {
  0, // locals
  0, // parameters
  // !expected "argument"
  LET, 1, str_argument, 1, var_expected,
  // !at text
  LET, 1, var_text, 1, var_at,
  // parse_expression
  func_parse_expression, 0, TAIL_CALL,
  POS(1723, 9),
  POS(1724, 9),
  POS(1725, 9)
};

static TAB_NUM t_func_parse_line_start_arguments[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 29, lambda_645, lambda_647, lambda_650, lambda_652, lambda_654, lambda_657, lambda_660, lambda_662, lambda_665, lambda_668, lambda_670, lambda_673, lambda_676, lambda_679, lambda_682, lambda_685, lambda_688, lambda_691, lambda_693, lambda_696, lambda_698, lambda_701, lambda_704, lambda_707, lambda_710, lambda_712, lambda_714, lambda_716, lambda_718, TAIL_CALL,
  POS(1728, 3)
};

static TAB_NUM t_lambda_645[] = {
  2, // locals
  0, // parameters
  // text(1) == ':'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == ':'
  var_std__equal, 2, LOCAL(1), chr_58, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_646, TAIL_CALL,
  POS(1730, 7),
  POS(1730, 7),
  POS(1729, 7)
};

static TAB_NUM t_lambda_646[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_body
  func_parse_body, 0, TAIL_CALL,
  POS(1732, 9),
  POS(1733, 9)
};

static TAB_NUM t_lambda_647[] = {
  3, // locals
  0, // parameters
  // text(1) == '-'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '-'
  var_std__equal, 2, LOCAL(1), chr_45, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_648, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_649, TAIL_CALL,
  POS(1736, 9),
  POS(1736, 9),
  POS(1735, 9),
  POS(1734, 7)
};

static TAB_NUM t_lambda_648[] = {
  2, // locals
  0, // parameters
  // text(2) == '>'
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '>'
  var_std__equal, 2, LOCAL(1), chr_62, 1, LOCAL(2),
  // text(2) == '>'
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1737, 9),
  POS(1737, 9),
  POS(1737, 9)
};

static TAB_NUM t_lambda_649[] = {
  0, // locals
  0, // parameters
  // range &text 3 -1
  var_range, 3, var_text, num_3, minus_num_1, 1, var_text,
  // parse_return_expression_without_prefix
  func_parse_return_expression_without_prefix, 0, TAIL_CALL,
  POS(1739, 9),
  POS(1740, 9)
};

static TAB_NUM t_lambda_650[] = {
  2, // locals
  0, // parameters
  // text(1) == '#'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '#'
  var_std__equal, 2, LOCAL(1), chr_35, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_651, TAIL_CALL,
  POS(1742, 7),
  POS(1742, 7),
  POS(1741, 7)
};

static TAB_NUM t_lambda_651[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_multiline_remark_without_prefix
  func_parse_multiline_remark_without_prefix, 0, TAIL_CALL,
  POS(1744, 9),
  POS(1745, 9)
};

static TAB_NUM t_lambda_652[] = {
  2, // locals
  0, // parameters
  // text(1) == '.'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '.'
  var_std__equal, 2, LOCAL(1), chr_46, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_653, TAIL_CALL,
  POS(1747, 7),
  POS(1747, 7),
  POS(1746, 7)
};

static TAB_NUM t_lambda_653[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_attribute_value_pair_without_prefix
  func_parse_attribute_value_pair_without_prefix, 0, TAIL_CALL,
  POS(1749, 9),
  POS(1750, 9)
};

static TAB_NUM t_lambda_654[] = {
  3, // locals
  0, // parameters
  // text(1) == '/'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '/'
  var_std__equal, 2, LOCAL(1), chr_47, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_655, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_656, TAIL_CALL,
  POS(1753, 9),
  POS(1753, 9),
  POS(1752, 9),
  POS(1751, 7)
};

static TAB_NUM t_lambda_655[] = {
  2, // locals
  0, // parameters
  // text(2) == ':'
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == ':'
  var_std__equal, 2, LOCAL(1), chr_58, 1, LOCAL(2),
  // text(2) == ':'
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1754, 9),
  POS(1754, 9),
  POS(1754, 9)
};

static TAB_NUM t_lambda_656[] = {
  0, // locals
  0, // parameters
  // range &text 3 -1
  var_range, 3, var_text, num_3, minus_num_1, 1, var_text,
  // parse_type_function_without_prefix
  func_parse_type_function_without_prefix, 0, TAIL_CALL,
  POS(1756, 9),
  POS(1757, 9)
};

static TAB_NUM t_lambda_657[] = {
  2, // locals
  0, // parameters
  // text == "@quot;@nl;" && subgroups.is_defined
  var_std__equal, 2, var_text, string_7, 1, LOCAL(1),
  // text == "@quot;@nl;" && subgroups.is_defined
  var_std__and, 2, LOCAL(1), lambda_658, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_659, TAIL_CALL,
  POS(1759, 7),
  POS(1759, 7),
  POS(1758, 7)
};

static TAB_NUM t_lambda_658[] = {
  1, // locals
  0, // parameters
  // is_defined
  var_is_defined, 1, var_subgroups, 1, LOCAL(1),
  // subgroups.is_defined
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1759, 41),
  POS(1759, 31)
};

static TAB_NUM t_lambda_659[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_multiline_string_literal_without_prefix
  func_parse_multiline_string_literal_without_prefix, 0, TAIL_CALL,
  POS(1761, 9),
  POS(1762, 9)
};

static TAB_NUM t_lambda_660[] = {
  2, // locals
  0, // parameters
  // text(1) == '+'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '+'
  var_std__equal, 2, LOCAL(1), chr_43, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_661, TAIL_CALL,
  POS(1764, 7),
  POS(1764, 7),
  POS(1763, 7)
};

static TAB_NUM t_lambda_661[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_multiline_plus_without_prefix
  func_parse_multiline_plus_without_prefix, 0, TAIL_CALL,
  POS(1766, 9),
  POS(1767, 9)
};

static TAB_NUM t_lambda_662[] = {
  3, // locals
  0, // parameters
  // text(1) == '-'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '-'
  var_std__equal, 2, LOCAL(1), chr_45, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_663, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_664, TAIL_CALL,
  POS(1770, 9),
  POS(1770, 9),
  POS(1769, 9),
  POS(1768, 7)
};

static TAB_NUM t_lambda_663[] = {
  2, // locals
  0, // parameters
  // text(2) == '@nl;'
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '@nl;'
  var_std__equal, 2, LOCAL(1), chr_10, 1, LOCAL(2),
  // text(2) == '@nl;'
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1771, 9),
  POS(1771, 9),
  POS(1771, 9)
};

static TAB_NUM t_lambda_664[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_multiline_minus_without_prefix
  func_parse_multiline_minus_without_prefix, 0, TAIL_CALL,
  POS(1773, 9),
  POS(1774, 9)
};

static TAB_NUM t_lambda_665[] = {
  3, // locals
  0, // parameters
  // text(1) == '-'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '-'
  var_std__equal, 2, LOCAL(1), chr_45, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_666, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_667, TAIL_CALL,
  POS(1777, 9),
  POS(1777, 9),
  POS(1776, 9),
  POS(1775, 7)
};

static TAB_NUM t_lambda_666[] = {
  2, // locals
  0, // parameters
  // text(2) == ' '
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // text(2) == ' '
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1778, 9),
  POS(1778, 9),
  POS(1778, 9)
};

static TAB_NUM t_lambda_667[] = {
  0, // locals
  0, // parameters
  // range &text 3 -1
  var_range, 3, var_text, num_3, minus_num_1, 1, var_text,
  // parse_multiline_minus_with_remark_without_prefix
  func_parse_multiline_minus_with_remark_without_prefix, 0, TAIL_CALL,
  POS(1780, 9),
  POS(1781, 9)
};

static TAB_NUM t_lambda_668[] = {
  2, // locals
  0, // parameters
  // text(1) == '*'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '*'
  var_std__equal, 2, LOCAL(1), chr_42, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_669, TAIL_CALL,
  POS(1783, 7),
  POS(1783, 7),
  POS(1782, 7)
};

static TAB_NUM t_lambda_669[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_multiline_times_without_prefix
  func_parse_multiline_times_without_prefix, 0, TAIL_CALL,
  POS(1785, 9),
  POS(1786, 9)
};

static TAB_NUM t_lambda_670[] = {
  2, // locals
  0, // parameters
  // text == "/@nl;" && subgroups.is_defined
  var_std__equal, 2, var_text, string_8, 1, LOCAL(1),
  // text == "/@nl;" && subgroups.is_defined
  var_std__and, 2, LOCAL(1), lambda_671, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_672, TAIL_CALL,
  POS(1788, 7),
  POS(1788, 7),
  POS(1787, 7)
};

static TAB_NUM t_lambda_671[] = {
  1, // locals
  0, // parameters
  // is_defined
  var_is_defined, 1, var_subgroups, 1, LOCAL(1),
  // subgroups.is_defined
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1788, 36),
  POS(1788, 26)
};

static TAB_NUM t_lambda_672[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_multiline_over_without_prefix
  func_parse_multiline_over_without_prefix, 0, TAIL_CALL,
  POS(1790, 9),
  POS(1791, 9)
};

static TAB_NUM t_lambda_673[] = {
  3, // locals
  0, // parameters
  // text(1) == '/'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '/'
  var_std__equal, 2, LOCAL(1), chr_47, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_674, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_675, TAIL_CALL,
  POS(1794, 9),
  POS(1794, 9),
  POS(1793, 9),
  POS(1792, 7)
};

static TAB_NUM t_lambda_674[] = {
  2, // locals
  0, // parameters
  // text(2) == ' '
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // text(2) == ' '
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1795, 9),
  POS(1795, 9),
  POS(1795, 9)
};

static TAB_NUM t_lambda_675[] = {
  0, // locals
  0, // parameters
  // range &text 3 -1
  var_range, 3, var_text, num_3, minus_num_1, 1, var_text,
  // parse_multiline_over_with_remark_without_prefix
  func_parse_multiline_over_with_remark_without_prefix, 0, TAIL_CALL,
  POS(1797, 9),
  POS(1798, 9)
};

static TAB_NUM t_lambda_676[] = {
  3, // locals
  0, // parameters
  // text(1) == '<'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '<'
  var_std__equal, 2, LOCAL(1), chr_60, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_677, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_678, TAIL_CALL,
  POS(1801, 9),
  POS(1801, 9),
  POS(1800, 9),
  POS(1799, 7)
};

static TAB_NUM t_lambda_677[] = {
  2, // locals
  0, // parameters
  // text(2) == '<'
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '<'
  var_std__equal, 2, LOCAL(1), chr_60, 1, LOCAL(2),
  // text(2) == '<'
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1802, 9),
  POS(1802, 9),
  POS(1802, 9)
};

static TAB_NUM t_lambda_678[] = {
  0, // locals
  0, // parameters
  // range &text 3 -1
  var_range, 3, var_text, num_3, minus_num_1, 1, var_text,
  // parse_multiline_shift_left_without_prefix
  func_parse_multiline_shift_left_without_prefix, 0, TAIL_CALL,
  POS(1804, 9),
  POS(1805, 9)
};

static TAB_NUM t_lambda_679[] = {
  3, // locals
  0, // parameters
  // text(1) == '>'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '>'
  var_std__equal, 2, LOCAL(1), chr_62, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_680, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_681, TAIL_CALL,
  POS(1808, 9),
  POS(1808, 9),
  POS(1807, 9),
  POS(1806, 7)
};

static TAB_NUM t_lambda_680[] = {
  2, // locals
  0, // parameters
  // text(2) == '>'
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '>'
  var_std__equal, 2, LOCAL(1), chr_62, 1, LOCAL(2),
  // text(2) == '>'
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1809, 9),
  POS(1809, 9),
  POS(1809, 9)
};

static TAB_NUM t_lambda_681[] = {
  0, // locals
  0, // parameters
  // range &text 3 -1
  var_range, 3, var_text, num_3, minus_num_1, 1, var_text,
  // parse_multiline_shift_right_without_prefix
  func_parse_multiline_shift_right_without_prefix, 0, TAIL_CALL,
  POS(1811, 9),
  POS(1812, 9)
};

static TAB_NUM t_lambda_682[] = {
  3, // locals
  0, // parameters
  // text(1) == '='
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '='
  var_std__equal, 2, LOCAL(1), chr_61, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_683, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_684, TAIL_CALL,
  POS(1815, 9),
  POS(1815, 9),
  POS(1814, 9),
  POS(1813, 7)
};

static TAB_NUM t_lambda_683[] = {
  2, // locals
  0, // parameters
  // text(2) == '='
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '='
  var_std__equal, 2, LOCAL(1), chr_61, 1, LOCAL(2),
  // text(2) == '='
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1816, 9),
  POS(1816, 9),
  POS(1816, 9)
};

static TAB_NUM t_lambda_684[] = {
  0, // locals
  0, // parameters
  // range &text 3 -1
  var_range, 3, var_text, num_3, minus_num_1, 1, var_text,
  // parse_multiline_equal_without_prefix
  func_parse_multiline_equal_without_prefix, 0, TAIL_CALL,
  POS(1818, 9),
  POS(1819, 9)
};

static TAB_NUM t_lambda_685[] = {
  3, // locals
  0, // parameters
  // text(1) == '!'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '!'
  var_std__equal, 2, LOCAL(1), chr_33, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_686, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_687, TAIL_CALL,
  POS(1822, 9),
  POS(1822, 9),
  POS(1821, 9),
  POS(1820, 7)
};

static TAB_NUM t_lambda_686[] = {
  2, // locals
  0, // parameters
  // text(2) == '='
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '='
  var_std__equal, 2, LOCAL(1), chr_61, 1, LOCAL(2),
  // text(2) == '='
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1823, 9),
  POS(1823, 9),
  POS(1823, 9)
};

static TAB_NUM t_lambda_687[] = {
  0, // locals
  0, // parameters
  // range &text 3 -1
  var_range, 3, var_text, num_3, minus_num_1, 1, var_text,
  // parse_multiline_not_equal_without_prefix
  func_parse_multiline_not_equal_without_prefix, 0, TAIL_CALL,
  POS(1825, 9),
  POS(1826, 9)
};

static TAB_NUM t_lambda_688[] = {
  3, // locals
  0, // parameters
  // text(1) == '<'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '<'
  var_std__equal, 2, LOCAL(1), chr_60, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_689, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_690, TAIL_CALL,
  POS(1829, 9),
  POS(1829, 9),
  POS(1828, 9),
  POS(1827, 7)
};

static TAB_NUM t_lambda_689[] = {
  2, // locals
  0, // parameters
  // text(2) == '='
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '='
  var_std__equal, 2, LOCAL(1), chr_61, 1, LOCAL(2),
  // text(2) == '='
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1830, 9),
  POS(1830, 9),
  POS(1830, 9)
};

static TAB_NUM t_lambda_690[] = {
  0, // locals
  0, // parameters
  // range &text 3 -1
  var_range, 3, var_text, num_3, minus_num_1, 1, var_text,
  // parse_multiline_less_equal_without_prefix
  func_parse_multiline_less_equal_without_prefix, 0, TAIL_CALL,
  POS(1832, 9),
  POS(1833, 9)
};

static TAB_NUM t_lambda_691[] = {
  2, // locals
  0, // parameters
  // text(1) == '<'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '<'
  var_std__equal, 2, LOCAL(1), chr_60, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_692, TAIL_CALL,
  POS(1835, 7),
  POS(1835, 7),
  POS(1834, 7)
};

static TAB_NUM t_lambda_692[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_multiline_less_than_without_prefix
  func_parse_multiline_less_than_without_prefix, 0, TAIL_CALL,
  POS(1837, 9),
  POS(1838, 9)
};

static TAB_NUM t_lambda_693[] = {
  3, // locals
  0, // parameters
  // text(1) == '>'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '>'
  var_std__equal, 2, LOCAL(1), chr_62, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_694, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_695, TAIL_CALL,
  POS(1841, 9),
  POS(1841, 9),
  POS(1840, 9),
  POS(1839, 7)
};

static TAB_NUM t_lambda_694[] = {
  2, // locals
  0, // parameters
  // text(2) == '='
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '='
  var_std__equal, 2, LOCAL(1), chr_61, 1, LOCAL(2),
  // text(2) == '='
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1842, 9),
  POS(1842, 9),
  POS(1842, 9)
};

static TAB_NUM t_lambda_695[] = {
  0, // locals
  0, // parameters
  // range &text 3 -1
  var_range, 3, var_text, num_3, minus_num_1, 1, var_text,
  // parse_multiline_greater_equal_without_prefix
  func_parse_multiline_greater_equal_without_prefix, 0, TAIL_CALL,
  POS(1844, 9),
  POS(1845, 9)
};

static TAB_NUM t_lambda_696[] = {
  2, // locals
  0, // parameters
  // text(1) == '>'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '>'
  var_std__equal, 2, LOCAL(1), chr_62, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_697, TAIL_CALL,
  POS(1847, 7),
  POS(1847, 7),
  POS(1846, 7)
};

static TAB_NUM t_lambda_697[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_multiline_greater_than_without_prefix
  func_parse_multiline_greater_than_without_prefix, 0, TAIL_CALL,
  POS(1849, 9),
  POS(1850, 9)
};

static TAB_NUM t_lambda_698[] = {
  3, // locals
  0, // parameters
  // text(1) == '&'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '&'
  var_std__equal, 2, LOCAL(1), chr_38, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_699, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_700, TAIL_CALL,
  POS(1853, 9),
  POS(1853, 9),
  POS(1852, 9),
  POS(1851, 7)
};

static TAB_NUM t_lambda_699[] = {
  2, // locals
  0, // parameters
  // text(2) == '&'
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '&'
  var_std__equal, 2, LOCAL(1), chr_38, 1, LOCAL(2),
  // text(2) == '&'
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1854, 9),
  POS(1854, 9),
  POS(1854, 9)
};

static TAB_NUM t_lambda_700[] = {
  0, // locals
  0, // parameters
  // range &text 3 -1
  var_range, 3, var_text, num_3, minus_num_1, 1, var_text,
  // parse_multiline_and_without_prefix
  func_parse_multiline_and_without_prefix, 0, TAIL_CALL,
  POS(1856, 9),
  POS(1857, 9)
};

static TAB_NUM t_lambda_701[] = {
  3, // locals
  0, // parameters
  // text(1) == '|'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '|'
  var_std__equal, 2, LOCAL(1), chr_124, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_702, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_703, TAIL_CALL,
  POS(1860, 9),
  POS(1860, 9),
  POS(1859, 9),
  POS(1858, 7)
};

static TAB_NUM t_lambda_702[] = {
  2, // locals
  0, // parameters
  // text(2) == '|'
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '|'
  var_std__equal, 2, LOCAL(1), chr_124, 1, LOCAL(2),
  // text(2) == '|'
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1861, 9),
  POS(1861, 9),
  POS(1861, 9)
};

static TAB_NUM t_lambda_703[] = {
  0, // locals
  0, // parameters
  // range &text 3 -1
  var_range, 3, var_text, num_3, minus_num_1, 1, var_text,
  // parse_multiline_or_without_prefix
  func_parse_multiline_or_without_prefix, 0, TAIL_CALL,
  POS(1863, 9),
  POS(1864, 9)
};

static TAB_NUM t_lambda_704[] = {
  3, // locals
  0, // parameters
  // text(1) == '&'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '&'
  var_std__equal, 2, LOCAL(1), chr_38, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_705, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_706, TAIL_CALL,
  POS(1867, 9),
  POS(1867, 9),
  POS(1866, 9),
  POS(1865, 7)
};

static TAB_NUM t_lambda_705[] = {
  2, // locals
  0, // parameters
  // text(2) == '@nl;'
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '@nl;'
  var_std__equal, 2, LOCAL(1), chr_10, 1, LOCAL(2),
  // text(2) == '@nl;'
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1868, 9),
  POS(1868, 9),
  POS(1868, 9)
};

static TAB_NUM t_lambda_706[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_multiline_bit_and_without_prefix
  func_parse_multiline_bit_and_without_prefix, 0, TAIL_CALL,
  POS(1870, 9),
  POS(1871, 9)
};

static TAB_NUM t_lambda_707[] = {
  3, // locals
  0, // parameters
  // text(1) == '&'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '&'
  var_std__equal, 2, LOCAL(1), chr_38, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_708, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_709, TAIL_CALL,
  POS(1874, 9),
  POS(1874, 9),
  POS(1873, 9),
  POS(1872, 7)
};

static TAB_NUM t_lambda_708[] = {
  2, // locals
  0, // parameters
  // text(2) == ' '
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // text(2) == ' '
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1875, 9),
  POS(1875, 9),
  POS(1875, 9)
};

static TAB_NUM t_lambda_709[] = {
  0, // locals
  0, // parameters
  // range &text 3 -1
  var_range, 3, var_text, num_3, minus_num_1, 1, var_text,
  // parse_multiline_bit_and_with_remark_without_prefix
  func_parse_multiline_bit_and_with_remark_without_prefix, 0, TAIL_CALL,
  POS(1877, 9),
  POS(1878, 9)
};

static TAB_NUM t_lambda_710[] = {
  2, // locals
  0, // parameters
  // text(1) == '|'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '|'
  var_std__equal, 2, LOCAL(1), chr_124, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_711, TAIL_CALL,
  POS(1880, 7),
  POS(1880, 7),
  POS(1879, 7)
};

static TAB_NUM t_lambda_711[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_multiline_bit_or_without_prefix
  func_parse_multiline_bit_or_without_prefix, 0, TAIL_CALL,
  POS(1882, 9),
  POS(1883, 9)
};

static TAB_NUM t_lambda_712[] = {
  2, // locals
  0, // parameters
  // text(1) == '^'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '^'
  var_std__equal, 2, LOCAL(1), chr_94, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_713, TAIL_CALL,
  POS(1885, 7),
  POS(1885, 7),
  POS(1884, 7)
};

static TAB_NUM t_lambda_713[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_multiline_bit_xor_without_prefix
  func_parse_multiline_bit_xor_without_prefix, 0, TAIL_CALL,
  POS(1887, 9),
  POS(1888, 9)
};

static TAB_NUM t_lambda_714[] = {
  2, // locals
  0, // parameters
  // text(1) == '='
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '='
  var_std__equal, 2, LOCAL(1), chr_61, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_715, TAIL_CALL,
  POS(1890, 7),
  POS(1890, 7),
  POS(1889, 7)
};

static TAB_NUM t_lambda_715[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_multiline_assign_without_prefix
  func_parse_multiline_assign_without_prefix, 0, TAIL_CALL,
  POS(1892, 9),
  POS(1893, 9)
};

static TAB_NUM t_lambda_716[] = {
  2, // locals
  0, // parameters
  // text(1) == '/'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '/'
  var_std__equal, 2, LOCAL(1), chr_47, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_717, TAIL_CALL,
  POS(1895, 7),
  POS(1895, 7),
  POS(1894, 7)
};

static TAB_NUM t_lambda_717[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_method_value_pair_without_prefix
  func_parse_method_value_pair_without_prefix, 0, TAIL_CALL,
  POS(1897, 9),
  POS(1898, 9)
};

static TAB_NUM t_lambda_718[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_719, TAIL_CALL,
  POS(1899, 7)
};

static TAB_NUM t_lambda_719[] = {
  0, // locals
  0, // parameters
  // !expected "line start arguments"
  LET, 1, str_line_start_argum, 1, var_expected,
  // !at text
  LET, 1, var_text, 1, var_at,
  // parse_arguments
  func_parse_arguments, 0, TAIL_CALL,
  POS(1902, 9),
  POS(1903, 9),
  POS(1904, 9)
};

static TAB_NUM t_func_parse_dummy_definition_without_prefix[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_1907_1_position,
  // !str text
  LET, 1, var_text, 1, var_str,
  // parse_name !text $name
  func_parse_name, 0, 2, var_text, var_1909_18_name,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_720, lambda_721, TAIL_CALL,
  POS(1907, 3),
  POS(1908, 3),
  POS(1909, 3),
  POS(1911, 10),
  POS(1910, 3)
};

static TAB_NUM t_lambda_720[] = {
  1, // locals
  0, // parameters
  // funky_types::dummy_definition
  LET, -3, var_funky_types__dummy_definition, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_1907_1_position, var_funky__name_of, var_1909_18_name, LOCAL(1),
  // 
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(1914, 7),
  POS(1912, 7)
};

static TAB_NUM t_lambda_721[] = {
  0, // locals
  0, // parameters
  //  undefined name
  LET, 2, var_undefined, var_1909_18_name, TAIL_CALL,
  POS(1918, 7)
};

static TAB_NUM t_func_parse_variable_without_prefix[] = {
  1, // locals
  0, // parameters
  // $position str
  LET, 1, var_str, 1, var_1921_1_position,
  // parse_more_identifier_characters !text $identifier
  func_parse_more_identifier_characters, 0, 2, var_text, var_1922_40_identifier,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_722, lambda_723, TAIL_CALL,
  POS(1921, 3),
  POS(1922, 3),
  POS(1924, 10),
  POS(1923, 3)
};

static TAB_NUM t_lambda_722[] = {
  1, // locals
  0, // parameters
  // funky_types::variable
  LET, -3, var_funky_types__variable, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_1921_1_position, var_funky__identifier_of, var_1922_40_identifier, LOCAL(1),
  // 
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(1927, 7),
  POS(1925, 7)
};

static TAB_NUM t_lambda_723[] = {
  0, // locals
  0, // parameters
  //  undefined identifier
  LET, 2, var_undefined, var_1922_40_identifier, TAIL_CALL,
  POS(1931, 7)
};

static TAB_NUM t_func_parse_definition_without_prefix[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_1934_1_position,
  // !str text
  LET, 1, var_text, 1, var_str,
  // parse_versioned_identifier !text $versioned_identifier
  func_parse_versioned_identifier, 0, 2, var_text, var_1936_34_versioned_identifier,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_724, lambda_725, TAIL_CALL,
  POS(1934, 3),
  POS(1935, 3),
  POS(1936, 3),
  POS(1938, 10),
  POS(1937, 3)
};

static TAB_NUM t_lambda_724[] = {
  1, // locals
  0, // parameters
  // funky_types::definition
  LET, -3, var_funky_types__definition, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_1934_1_position, var_funky__identifier_of, var_1936_34_versioned_identifier, LOCAL(1),
  // 
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(1941, 7),
  POS(1939, 7)
};

static TAB_NUM t_lambda_725[] = {
  0, // locals
  0, // parameters
  //  undefined versioned_identifier
  LET, 2, var_undefined, var_1936_34_versioned_identifier, TAIL_CALL,
  POS(1945, 7)
};

static TAB_NUM t_func_parse_redefinition_without_prefix[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_1948_1_position,
  // !str text
  LET, 1, var_text, 1, var_str,
  // parse_identifier !text $identifier
  func_parse_identifier, 0, 2, var_text, var_1950_24_identifier,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_26_text_is_defined, lambda_728, TAIL_CALL,
  POS(1948, 3),
  POS(1949, 3),
  POS(1950, 3),
  POS(1952, 10),
  POS(1951, 3)
};

static TAB_NUM t_lambda_26_text_is_defined[] = {
  1, // locals
  0, // parameters
  // parse_inline_extensions !text $inline_extensions
  func_parse_inline_extensions, 0, 2, var_text, var_1953_31_inline_extensions,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_726, lambda_727, TAIL_CALL,
  POS(1953, 7),
  POS(1955, 14),
  POS(1954, 7)
};

static TAB_NUM t_lambda_726[] = {
  1, // locals
  0, // parameters
  // funky_types::redefinition
  LET, -4, var_funky_types__redefinition, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_1948_1_position, var_funky__identifier_of, var_1950_24_identifier, var_funky__extensions_of, var_1953_31_inline_extensions, LOCAL(1),
  // 
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(1958, 11),
  POS(1956, 11)
};

static TAB_NUM t_lambda_727[] = {
  0, // locals
  0, // parameters
  //  undefined inline_extensions
  LET, 2, var_undefined, var_1953_31_inline_extensions, TAIL_CALL,
  POS(1963, 11)
};

static TAB_NUM t_lambda_728[] = {
  0, // locals
  0, // parameters
  //  undefined identifier
  LET, 2, var_undefined, var_1950_24_identifier, TAIL_CALL,
  POS(1964, 7)
};

static TAB_NUM t_func_parse_update_without_prefix[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_1967_1_position,
  // !str text
  LET, 1, var_text, 1, var_str,
  // parse_identifier !text $identifier
  func_parse_identifier, 0, 2, var_text, var_1969_24_identifier,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_27_text_is_defined, lambda_731, TAIL_CALL,
  POS(1967, 3),
  POS(1968, 3),
  POS(1969, 3),
  POS(1971, 10),
  POS(1970, 3)
};

static TAB_NUM t_lambda_27_text_is_defined[] = {
  1, // locals
  0, // parameters
  // parse_inline_extensions !text $inline_extensions
  func_parse_inline_extensions, 0, 2, var_text, var_1972_31_inline_extensions,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_729, lambda_730, TAIL_CALL,
  POS(1972, 7),
  POS(1974, 14),
  POS(1973, 7)
};

static TAB_NUM t_lambda_729[] = {
  1, // locals
  0, // parameters
  // funky_types::update
  LET, -4, var_funky_types__update, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_1967_1_position, var_funky__identifier_of, var_1969_24_identifier, var_funky__extensions_of, var_1972_31_inline_extensions, LOCAL(1),
  // 
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(1977, 11),
  POS(1975, 11)
};

static TAB_NUM t_lambda_730[] = {
  0, // locals
  0, // parameters
  //  undefined inline_extensions
  LET, 2, var_undefined, var_1972_31_inline_extensions, TAIL_CALL,
  POS(1982, 11)
};

static TAB_NUM t_lambda_731[] = {
  0, // locals
  0, // parameters
  //  undefined identifier
  LET, 2, var_undefined, var_1969_24_identifier, TAIL_CALL,
  POS(1983, 7)
};

static TAB_NUM t_func_parse_expression[] = {
  1, // locals
  -1, // parameters
  var_undefined, var_1987_0_derived_node,
  // $position text
  LET, 1, var_text, 1, var_1989_1_position,
  // parse_sequence_expression !text $sequence_expression
  func_parse_sequence_expression, 0, 2, var_text, var_1990_33_sequence_expression,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_28_text_is_defined, lambda_737, TAIL_CALL,
  POS(1989, 3),
  POS(1990, 3),
  POS(1992, 10),
  POS(1991, 3)
};

static TAB_NUM t_lambda_28_text_is_defined[] = {
  1, // locals
  0, // parameters
  // parse_key_value_operator !text $key_value_operator
  func_parse_key_value_operator, 0, 2, var_text, var_1993_32_key_value_operator,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_732, lambda_736, TAIL_CALL,
  POS(1993, 7),
  POS(1995, 14),
  POS(1994, 7)
};

static TAB_NUM t_lambda_732[] = {
  2, // locals
  0, // parameters
  // is_defined || key_value_operator.is_defined
  var_is_defined, 1, var_1987_0_derived_node, 1, LOCAL(1),
  // is_defined || key_value_operator.is_defined
  var_std__or, 2, LOCAL(1), lambda_733, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_734, lambda_735, TAIL_CALL,
  POS(1998, 26),
  POS(1998, 26),
  POS(1997, 11)
};

static TAB_NUM t_lambda_733[] = {
  1, // locals
  0, // parameters
  // is_defined
  var_is_defined, 1, var_1993_32_key_value_operator, 1, LOCAL(1),
  // key_value_operator.is_defined
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1998, 59),
  POS(1998, 40)
};

static TAB_NUM t_lambda_734[] = {
  2, // locals
  0, // parameters
  // default_value(derived_node funky_types::expression)
  var_default_value, 2, var_1987_0_derived_node, var_funky_types__expression, 1, LOCAL(1),
  // default_value(derived_node funky_types::expression)
  LET, -4, LOCAL(1), var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_1989_1_position, var_funky__expression_of, var_1990_33_sequence_expression, var_funky__operator_of, var_1993_32_key_value_operator, LOCAL(2),
  // 
  LET, 2, var_text, LOCAL(2), TAIL_CALL,
  POS(2001, 15),
  POS(2001, 15),
  POS(1999, 15)
};

static TAB_NUM t_lambda_735[] = {
  0, // locals
  0, // parameters
  //  text sequence_expression
  LET, 2, var_text, var_1990_33_sequence_expression, TAIL_CALL,
  POS(2006, 15)
};

static TAB_NUM t_lambda_736[] = {
  0, // locals
  0, // parameters
  //  undefined key_value_operator
  LET, 2, var_undefined, var_1993_32_key_value_operator, TAIL_CALL,
  POS(2007, 11)
};

static TAB_NUM t_lambda_737[] = {
  0, // locals
  0, // parameters
  //  undefined sequence_expression
  LET, 2, var_undefined, var_1990_33_sequence_expression, TAIL_CALL,
  POS(2008, 7)
};

static TAB_NUM t_func_parse_key_value_operator[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 3, lambda_738, lambda_742, lambda_744, TAIL_CALL,
  POS(2011, 3)
};

static TAB_NUM t_lambda_738[] = {
  3, // locals
  0, // parameters
  // text(1) == ' '
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_739, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_741, TAIL_CALL,
  POS(2014, 9),
  POS(2014, 9),
  POS(2013, 9),
  POS(2012, 7)
};

static TAB_NUM t_lambda_739[] = {
  3, // locals
  0, // parameters
  // text(2) == '='
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '='
  var_std__equal, 2, LOCAL(1), chr_61, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_740, 1, LOCAL(3),
  // text(2) == '='
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(2015, 9),
  POS(2015, 9),
  POS(2013, 9),
  POS(2015, 9)
};

static TAB_NUM t_lambda_740[] = {
  2, // locals
  0, // parameters
  // text(3) == ' '
  var_text, 1, num_3, 1, LOCAL(1),
  // text(3) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // text(3) == ' '
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2016, 9),
  POS(2016, 9),
  POS(2016, 9)
};

static TAB_NUM t_lambda_741[] = {
  0, // locals
  0, // parameters
  // range &text 4 -1
  var_range, 3, var_text, num_4, minus_num_1, 1, var_text,
  // parse_key_value
  func_parse_key_value, 0, TAIL_CALL,
  POS(2018, 9),
  POS(2019, 9)
};

static TAB_NUM t_lambda_742[] = {
  2, // locals
  0, // parameters
  // text(1) == '='
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '='
  var_std__equal, 2, LOCAL(1), chr_61, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_743, TAIL_CALL,
  POS(2021, 7),
  POS(2021, 7),
  POS(2020, 7)
};

static TAB_NUM t_lambda_743[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_key_value
  func_parse_key_value, 0, TAIL_CALL,
  POS(2023, 9),
  POS(2024, 9)
};

static TAB_NUM t_lambda_744[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_745, TAIL_CALL,
  POS(2025, 7)
};

static TAB_NUM t_lambda_745[] = {
  0, // locals
  0, // parameters
  //  text undefined
  LET, 2, var_text, var_undefined, TAIL_CALL,
  POS(2027, 9)
};

static TAB_NUM t_func_parse_key_value[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, LOCAL(1),
  // parse_sequence_expression funky_types::key_value
  func_parse_sequence_expression, 1, var_funky_types__key_value, TAIL_CALL,
  POS(2030, 3),
  POS(2031, 3)
};

static TAB_NUM t_func_parse_sequence_expression[] = {
  1, // locals
  -1, // parameters
  var_undefined, var_2035_0_derived_node,
  // $position text
  LET, 1, var_text, 1, var_2037_1_position,
  // parse_conditional_expression !text $conditional_expression
  func_parse_conditional_expression, 0, 2, var_text, var_2038_36_conditional_expression,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_29_text_is_defined, lambda_751, TAIL_CALL,
  POS(2037, 3),
  POS(2038, 3),
  POS(2040, 10),
  POS(2039, 3)
};

static TAB_NUM t_lambda_29_text_is_defined[] = {
  1, // locals
  0, // parameters
  // parse_comma_operator !text $comma_operator
  func_parse_comma_operator, 0, 2, var_text, var_2041_28_comma_operator,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_746, lambda_750, TAIL_CALL,
  POS(2041, 7),
  POS(2043, 14),
  POS(2042, 7)
};

static TAB_NUM t_lambda_746[] = {
  2, // locals
  0, // parameters
  // is_defined || comma_operator.is_defined
  var_is_defined, 1, var_2035_0_derived_node, 1, LOCAL(1),
  // is_defined || comma_operator.is_defined
  var_std__or, 2, LOCAL(1), lambda_747, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_748, lambda_749, TAIL_CALL,
  POS(2046, 26),
  POS(2046, 26),
  POS(2045, 11)
};

static TAB_NUM t_lambda_747[] = {
  1, // locals
  0, // parameters
  // is_defined
  var_is_defined, 1, var_2041_28_comma_operator, 1, LOCAL(1),
  // comma_operator.is_defined
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(2046, 55),
  POS(2046, 40)
};

static TAB_NUM t_lambda_748[] = {
  2, // locals
  0, // parameters
  // default_value(derived_node funky_types::expression)
  var_default_value, 2, var_2035_0_derived_node, var_funky_types__expression, 1, LOCAL(1),
  // default_value(derived_node funky_types::expression)
  LET, -4, LOCAL(1), var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_2037_1_position, var_funky__expression_of, var_2038_36_conditional_expression, var_funky__operator_of, var_2041_28_comma_operator, LOCAL(2),
  // 
  LET, 2, var_text, LOCAL(2), TAIL_CALL,
  POS(2049, 15),
  POS(2049, 15),
  POS(2047, 15)
};

static TAB_NUM t_lambda_749[] = {
  0, // locals
  0, // parameters
  //  text conditional_expression
  LET, 2, var_text, var_2038_36_conditional_expression, TAIL_CALL,
  POS(2054, 15)
};

static TAB_NUM t_lambda_750[] = {
  0, // locals
  0, // parameters
  //  undefined comma_operator
  LET, 2, var_undefined, var_2041_28_comma_operator, TAIL_CALL,
  POS(2055, 11)
};

static TAB_NUM t_lambda_751[] = {
  0, // locals
  0, // parameters
  //  undefined conditional_expression
  LET, 2, var_undefined, var_2038_36_conditional_expression, TAIL_CALL,
  POS(2056, 7)
};

static TAB_NUM t_func_parse_comma_operator[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 4, lambda_752, lambda_755, lambda_757, lambda_761, TAIL_CALL,
  POS(2059, 3)
};

static TAB_NUM t_lambda_752[] = {
  3, // locals
  0, // parameters
  // text(1) == ','
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == ','
  var_std__equal, 2, LOCAL(1), chr_44, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_753, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_754, TAIL_CALL,
  POS(2062, 9),
  POS(2062, 9),
  POS(2061, 9),
  POS(2060, 7)
};

static TAB_NUM t_lambda_753[] = {
  2, // locals
  0, // parameters
  // text(2) == ' '
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // text(2) == ' '
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2063, 9),
  POS(2063, 9),
  POS(2063, 9)
};

static TAB_NUM t_lambda_754[] = {
  0, // locals
  0, // parameters
  // range &text 3 -1
  var_range, 3, var_text, num_3, minus_num_1, 1, var_text,
  // parse_comma
  func_parse_comma, 0, TAIL_CALL,
  POS(2065, 9),
  POS(2066, 9)
};

static TAB_NUM t_lambda_755[] = {
  2, // locals
  0, // parameters
  // text(1) == ','
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == ','
  var_std__equal, 2, LOCAL(1), chr_44, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_756, TAIL_CALL,
  POS(2068, 7),
  POS(2068, 7),
  POS(2067, 7)
};

static TAB_NUM t_lambda_756[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_comma
  func_parse_comma, 0, TAIL_CALL,
  POS(2070, 9),
  POS(2071, 9)
};

static TAB_NUM t_lambda_757[] = {
  3, // locals
  0, // parameters
  // text(1) == ' '
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_758, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_760, TAIL_CALL,
  POS(2074, 9),
  POS(2074, 9),
  POS(2073, 9),
  POS(2072, 7)
};

static TAB_NUM t_lambda_758[] = {
  3, // locals
  0, // parameters
  // text(2) == ','
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == ','
  var_std__equal, 2, LOCAL(1), chr_44, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_759, 1, LOCAL(3),
  // text(2) == ','
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(2075, 9),
  POS(2075, 9),
  POS(2073, 9),
  POS(2075, 9)
};

static TAB_NUM t_lambda_759[] = {
  2, // locals
  0, // parameters
  // text(3) == ' '
  var_text, 1, num_3, 1, LOCAL(1),
  // text(3) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // text(3) == ' '
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2076, 9),
  POS(2076, 9),
  POS(2076, 9)
};

static TAB_NUM t_lambda_760[] = {
  0, // locals
  0, // parameters
  // range &text 4 -1
  var_range, 3, var_text, num_4, minus_num_1, 1, var_text,
  // parse_comma
  func_parse_comma, 0, TAIL_CALL,
  POS(2078, 9),
  POS(2079, 9)
};

static TAB_NUM t_lambda_761[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_762, TAIL_CALL,
  POS(2080, 7)
};

static TAB_NUM t_lambda_762[] = {
  0, // locals
  0, // parameters
  //  text undefined
  LET, 2, var_text, var_undefined, TAIL_CALL,
  POS(2082, 9)
};

static TAB_NUM t_func_parse_comma[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, LOCAL(1),
  // parse_comma_expression funky_types::comma
  func_parse_comma_expression, 1, var_funky_types__comma, TAIL_CALL,
  POS(2085, 3),
  POS(2086, 3)
};

static TAB_NUM t_func_parse_comma_expression[] = {
  1, // locals
  -1, // parameters
  var_undefined, var_2090_0_derived_node,
  // $position text
  LET, 1, var_text, 1, var_2092_1_position,
  // parse_sequence_expression !text $sequence_expression
  func_parse_sequence_expression, 0, 2, var_text, var_2093_33_sequence_expression,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_30_text_is_defined, lambda_768, TAIL_CALL,
  POS(2092, 3),
  POS(2093, 3),
  POS(2095, 10),
  POS(2094, 3)
};

static TAB_NUM t_lambda_30_text_is_defined[] = {
  1, // locals
  0, // parameters
  // parse_comma_operator !text $comma_operator
  func_parse_comma_operator, 0, 2, var_text, var_2096_28_comma_operator,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_763, lambda_767, TAIL_CALL,
  POS(2096, 7),
  POS(2098, 14),
  POS(2097, 7)
};

static TAB_NUM t_lambda_763[] = {
  2, // locals
  0, // parameters
  // is_defined || comma_operator.is_defined
  var_is_defined, 1, var_2090_0_derived_node, 1, LOCAL(1),
  // is_defined || comma_operator.is_defined
  var_std__or, 2, LOCAL(1), lambda_764, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_765, lambda_766, TAIL_CALL,
  POS(2101, 26),
  POS(2101, 26),
  POS(2100, 11)
};

static TAB_NUM t_lambda_764[] = {
  1, // locals
  0, // parameters
  // is_defined
  var_is_defined, 1, var_2096_28_comma_operator, 1, LOCAL(1),
  // comma_operator.is_defined
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(2101, 55),
  POS(2101, 40)
};

static TAB_NUM t_lambda_765[] = {
  2, // locals
  0, // parameters
  // default_value(derived_node funky_types::expression)
  var_default_value, 2, var_2090_0_derived_node, var_funky_types__expression, 1, LOCAL(1),
  // default_value(derived_node funky_types::expression)
  LET, -4, LOCAL(1), var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_2092_1_position, var_funky__expression_of, var_2093_33_sequence_expression, var_funky__operator_of, var_2096_28_comma_operator, LOCAL(2),
  // 
  LET, 2, var_text, LOCAL(2), TAIL_CALL,
  POS(2104, 15),
  POS(2104, 15),
  POS(2102, 15)
};

static TAB_NUM t_lambda_766[] = {
  0, // locals
  0, // parameters
  //  text sequence_expression
  LET, 2, var_text, var_2093_33_sequence_expression, TAIL_CALL,
  POS(2109, 15)
};

static TAB_NUM t_lambda_767[] = {
  0, // locals
  0, // parameters
  //  undefined comma_operator
  LET, 2, var_undefined, var_2096_28_comma_operator, TAIL_CALL,
  POS(2110, 11)
};

static TAB_NUM t_lambda_768[] = {
  0, // locals
  0, // parameters
  //  undefined sequence_expression
  LET, 2, var_undefined, var_2093_33_sequence_expression, TAIL_CALL,
  POS(2111, 7)
};

static TAB_NUM t_func_parse_conditional_expression[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_2114_1_position,
  // parse_named_operator_expression !text $named_operator_expression
  func_parse_named_operator_expression, 0, 2, var_text, var_2115_39_named_operator_expression,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_31_text_is_defined, lambda_773, TAIL_CALL,
  POS(2114, 3),
  POS(2115, 3),
  POS(2117, 10),
  POS(2116, 3)
};

static TAB_NUM t_lambda_31_text_is_defined[] = {
  1, // locals
  0, // parameters
  // parse_logical_operator !text $logical_operator
  func_parse_logical_operator, 0, 2, var_text, var_2118_30_logical_operator,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_769, lambda_772, TAIL_CALL,
  POS(2118, 7),
  POS(2120, 14),
  POS(2119, 7)
};

static TAB_NUM t_lambda_769[] = {
  1, // locals
  0, // parameters
  // is_defined
  var_is_defined, 1, var_2118_30_logical_operator, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_770, lambda_771, TAIL_CALL,
  POS(2123, 30),
  POS(2122, 11)
};

static TAB_NUM t_lambda_770[] = {
  1, // locals
  0, // parameters
  // funky_types::expression
  LET, -4, var_funky_types__expression, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_2114_1_position, var_funky__expression_of, var_2115_39_named_operator_expression, var_funky__operator_of, var_2118_30_logical_operator, LOCAL(1),
  // 
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(2126, 15),
  POS(2124, 15)
};

static TAB_NUM t_lambda_771[] = {
  0, // locals
  0, // parameters
  //  text named_operator_expression
  LET, 2, var_text, var_2115_39_named_operator_expression, TAIL_CALL,
  POS(2131, 15)
};

static TAB_NUM t_lambda_772[] = {
  0, // locals
  0, // parameters
  //  undefined logical_operator
  LET, 2, var_undefined, var_2118_30_logical_operator, TAIL_CALL,
  POS(2132, 11)
};

static TAB_NUM t_lambda_773[] = {
  0, // locals
  0, // parameters
  //  undefined named_operator_expression
  LET, 2, var_undefined, var_2115_39_named_operator_expression, TAIL_CALL,
  POS(2133, 7)
};

static TAB_NUM t_func_parse_logical_operator[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 3, lambda_774, lambda_779, lambda_784, TAIL_CALL,
  POS(2136, 3)
};

static TAB_NUM t_lambda_774[] = {
  3, // locals
  0, // parameters
  // text(1) == ' '
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_775, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_778, TAIL_CALL,
  POS(2139, 9),
  POS(2139, 9),
  POS(2138, 9),
  POS(2137, 7)
};

static TAB_NUM t_lambda_775[] = {
  3, // locals
  0, // parameters
  // text(2) == '&'
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '&'
  var_std__equal, 2, LOCAL(1), chr_38, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_776, 1, LOCAL(3),
  // text(2) == '&'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(2140, 9),
  POS(2140, 9),
  POS(2138, 9),
  POS(2140, 9)
};

static TAB_NUM t_lambda_776[] = {
  3, // locals
  0, // parameters
  // text(3) == '&'
  var_text, 1, num_3, 1, LOCAL(1),
  // text(3) == '&'
  var_std__equal, 2, LOCAL(1), chr_38, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_777, 1, LOCAL(3),
  // text(3) == '&'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(2141, 9),
  POS(2141, 9),
  POS(2138, 9),
  POS(2141, 9)
};

static TAB_NUM t_lambda_777[] = {
  2, // locals
  0, // parameters
  // text(4) == ' '
  var_text, 1, num_4, 1, LOCAL(1),
  // text(4) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // text(4) == ' '
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2142, 9),
  POS(2142, 9),
  POS(2142, 9)
};

static TAB_NUM t_lambda_778[] = {
  0, // locals
  0, // parameters
  // range &text 5 -1
  var_range, 3, var_text, num_5, minus_num_1, 1, var_text,
  // parse_and
  func_parse_and, 0, TAIL_CALL,
  POS(2144, 9),
  POS(2145, 9)
};

static TAB_NUM t_lambda_779[] = {
  3, // locals
  0, // parameters
  // text(1) == ' '
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_780, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_783, TAIL_CALL,
  POS(2148, 9),
  POS(2148, 9),
  POS(2147, 9),
  POS(2146, 7)
};

static TAB_NUM t_lambda_780[] = {
  3, // locals
  0, // parameters
  // text(2) == '|'
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '|'
  var_std__equal, 2, LOCAL(1), chr_124, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_781, 1, LOCAL(3),
  // text(2) == '|'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(2149, 9),
  POS(2149, 9),
  POS(2147, 9),
  POS(2149, 9)
};

static TAB_NUM t_lambda_781[] = {
  3, // locals
  0, // parameters
  // text(3) == '|'
  var_text, 1, num_3, 1, LOCAL(1),
  // text(3) == '|'
  var_std__equal, 2, LOCAL(1), chr_124, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_782, 1, LOCAL(3),
  // text(3) == '|'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(2150, 9),
  POS(2150, 9),
  POS(2147, 9),
  POS(2150, 9)
};

static TAB_NUM t_lambda_782[] = {
  2, // locals
  0, // parameters
  // text(4) == ' '
  var_text, 1, num_4, 1, LOCAL(1),
  // text(4) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // text(4) == ' '
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2151, 9),
  POS(2151, 9),
  POS(2151, 9)
};

static TAB_NUM t_lambda_783[] = {
  0, // locals
  0, // parameters
  // range &text 5 -1
  var_range, 3, var_text, num_5, minus_num_1, 1, var_text,
  // parse_or
  func_parse_or, 0, TAIL_CALL,
  POS(2153, 9),
  POS(2154, 9)
};

static TAB_NUM t_lambda_784[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_785, TAIL_CALL,
  POS(2155, 7)
};

static TAB_NUM t_lambda_785[] = {
  0, // locals
  0, // parameters
  //  text undefined
  LET, 2, var_text, var_undefined, TAIL_CALL,
  POS(2157, 9)
};

static TAB_NUM t_func_parse_and[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, LOCAL(1),
  // parse_and_expression funky_types::and
  func_parse_and_expression, 1, var_funky_types__and, TAIL_CALL,
  POS(2160, 3),
  POS(2161, 3)
};

static TAB_NUM t_func_parse_and_expression[] = {
  1, // locals
  -1, // parameters
  var_undefined, var_2165_0_derived_node,
  // $position text
  LET, 1, var_text, 1, var_2167_1_position,
  // parse_named_operator_expression !text $named_operator_expression
  func_parse_named_operator_expression, 0, 2, var_text, var_2168_39_named_operator_expression,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_32_text_is_defined, lambda_791, TAIL_CALL,
  POS(2167, 3),
  POS(2168, 3),
  POS(2170, 10),
  POS(2169, 3)
};

static TAB_NUM t_lambda_32_text_is_defined[] = {
  1, // locals
  0, // parameters
  // parse_and_operator !text $and_operator
  func_parse_and_operator, 0, 2, var_text, var_2171_26_and_operator,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_786, lambda_790, TAIL_CALL,
  POS(2171, 7),
  POS(2173, 14),
  POS(2172, 7)
};

static TAB_NUM t_lambda_786[] = {
  2, // locals
  0, // parameters
  // is_defined || and_operator.is_defined
  var_is_defined, 1, var_2165_0_derived_node, 1, LOCAL(1),
  // is_defined || and_operator.is_defined
  var_std__or, 2, LOCAL(1), lambda_787, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_788, lambda_789, TAIL_CALL,
  POS(2176, 26),
  POS(2176, 26),
  POS(2175, 11)
};

static TAB_NUM t_lambda_787[] = {
  1, // locals
  0, // parameters
  // is_defined
  var_is_defined, 1, var_2171_26_and_operator, 1, LOCAL(1),
  // and_operator.is_defined
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(2176, 53),
  POS(2176, 40)
};

static TAB_NUM t_lambda_788[] = {
  2, // locals
  0, // parameters
  // default_value(derived_node funky_types::expression)
  var_default_value, 2, var_2165_0_derived_node, var_funky_types__expression, 1, LOCAL(1),
  // default_value(derived_node funky_types::expression)
  LET, -4, LOCAL(1), var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_2167_1_position, var_funky__expression_of, var_2168_39_named_operator_expression, var_funky__operator_of, var_2171_26_and_operator, LOCAL(2),
  // 
  LET, 2, var_text, LOCAL(2), TAIL_CALL,
  POS(2179, 15),
  POS(2179, 15),
  POS(2177, 15)
};

static TAB_NUM t_lambda_789[] = {
  0, // locals
  0, // parameters
  //  text named_operator_expression
  LET, 2, var_text, var_2168_39_named_operator_expression, TAIL_CALL,
  POS(2184, 15)
};

static TAB_NUM t_lambda_790[] = {
  0, // locals
  0, // parameters
  //  undefined and_operator
  LET, 2, var_undefined, var_2171_26_and_operator, TAIL_CALL,
  POS(2185, 11)
};

static TAB_NUM t_lambda_791[] = {
  0, // locals
  0, // parameters
  //  undefined named_operator_expression
  LET, 2, var_undefined, var_2168_39_named_operator_expression, TAIL_CALL,
  POS(2186, 7)
};

static TAB_NUM t_func_parse_and_operator[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 2, lambda_792, lambda_797, TAIL_CALL,
  POS(2189, 3)
};

static TAB_NUM t_lambda_792[] = {
  3, // locals
  0, // parameters
  // text(1) == ' '
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_793, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_796, TAIL_CALL,
  POS(2192, 9),
  POS(2192, 9),
  POS(2191, 9),
  POS(2190, 7)
};

static TAB_NUM t_lambda_793[] = {
  3, // locals
  0, // parameters
  // text(2) == '&'
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '&'
  var_std__equal, 2, LOCAL(1), chr_38, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_794, 1, LOCAL(3),
  // text(2) == '&'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(2193, 9),
  POS(2193, 9),
  POS(2191, 9),
  POS(2193, 9)
};

static TAB_NUM t_lambda_794[] = {
  3, // locals
  0, // parameters
  // text(3) == '&'
  var_text, 1, num_3, 1, LOCAL(1),
  // text(3) == '&'
  var_std__equal, 2, LOCAL(1), chr_38, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_795, 1, LOCAL(3),
  // text(3) == '&'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(2194, 9),
  POS(2194, 9),
  POS(2191, 9),
  POS(2194, 9)
};

static TAB_NUM t_lambda_795[] = {
  2, // locals
  0, // parameters
  // text(4) == ' '
  var_text, 1, num_4, 1, LOCAL(1),
  // text(4) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // text(4) == ' '
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2195, 9),
  POS(2195, 9),
  POS(2195, 9)
};

static TAB_NUM t_lambda_796[] = {
  0, // locals
  0, // parameters
  // range &text 5 -1
  var_range, 3, var_text, num_5, minus_num_1, 1, var_text,
  // parse_and
  func_parse_and, 0, TAIL_CALL,
  POS(2197, 9),
  POS(2198, 9)
};

static TAB_NUM t_lambda_797[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_798, TAIL_CALL,
  POS(2199, 7)
};

static TAB_NUM t_lambda_798[] = {
  0, // locals
  0, // parameters
  //  text undefined
  LET, 2, var_text, var_undefined, TAIL_CALL,
  POS(2201, 9)
};

static TAB_NUM t_func_parse_or[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, LOCAL(1),
  // parse_or_expression funky_types::or
  func_parse_or_expression, 1, var_funky_types__or, TAIL_CALL,
  POS(2204, 3),
  POS(2205, 3)
};

static TAB_NUM t_func_parse_or_expression[] = {
  1, // locals
  -1, // parameters
  var_undefined, var_2209_0_derived_node,
  // $position text
  LET, 1, var_text, 1, var_2211_1_position,
  // parse_named_operator_expression !text $named_operator_expression
  func_parse_named_operator_expression, 0, 2, var_text, var_2212_39_named_operator_expression,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_33_text_is_defined, lambda_804, TAIL_CALL,
  POS(2211, 3),
  POS(2212, 3),
  POS(2214, 10),
  POS(2213, 3)
};

static TAB_NUM t_lambda_33_text_is_defined[] = {
  1, // locals
  0, // parameters
  // parse_or_operator !text $or_operator
  func_parse_or_operator, 0, 2, var_text, var_2215_25_or_operator,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_799, lambda_803, TAIL_CALL,
  POS(2215, 7),
  POS(2217, 14),
  POS(2216, 7)
};

static TAB_NUM t_lambda_799[] = {
  2, // locals
  0, // parameters
  // is_defined || or_operator.is_defined
  var_is_defined, 1, var_2209_0_derived_node, 1, LOCAL(1),
  // is_defined || or_operator.is_defined
  var_std__or, 2, LOCAL(1), lambda_800, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_801, lambda_802, TAIL_CALL,
  POS(2220, 26),
  POS(2220, 26),
  POS(2219, 11)
};

static TAB_NUM t_lambda_800[] = {
  1, // locals
  0, // parameters
  // is_defined
  var_is_defined, 1, var_2215_25_or_operator, 1, LOCAL(1),
  // or_operator.is_defined
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(2220, 52),
  POS(2220, 40)
};

static TAB_NUM t_lambda_801[] = {
  2, // locals
  0, // parameters
  // default_value(derived_node funky_types::expression)
  var_default_value, 2, var_2209_0_derived_node, var_funky_types__expression, 1, LOCAL(1),
  // default_value(derived_node funky_types::expression)
  LET, -4, LOCAL(1), var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_2211_1_position, var_funky__expression_of, var_2212_39_named_operator_expression, var_funky__operator_of, var_2215_25_or_operator, LOCAL(2),
  // 
  LET, 2, var_text, LOCAL(2), TAIL_CALL,
  POS(2223, 15),
  POS(2223, 15),
  POS(2221, 15)
};

static TAB_NUM t_lambda_802[] = {
  0, // locals
  0, // parameters
  //  text named_operator_expression
  LET, 2, var_text, var_2212_39_named_operator_expression, TAIL_CALL,
  POS(2228, 15)
};

static TAB_NUM t_lambda_803[] = {
  0, // locals
  0, // parameters
  //  undefined or_operator
  LET, 2, var_undefined, var_2215_25_or_operator, TAIL_CALL,
  POS(2229, 11)
};

static TAB_NUM t_lambda_804[] = {
  0, // locals
  0, // parameters
  //  undefined named_operator_expression
  LET, 2, var_undefined, var_2212_39_named_operator_expression, TAIL_CALL,
  POS(2230, 7)
};

static TAB_NUM t_func_parse_or_operator[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 2, lambda_805, lambda_810, TAIL_CALL,
  POS(2233, 3)
};

static TAB_NUM t_lambda_805[] = {
  3, // locals
  0, // parameters
  // text(1) == ' '
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_806, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_809, TAIL_CALL,
  POS(2236, 9),
  POS(2236, 9),
  POS(2235, 9),
  POS(2234, 7)
};

static TAB_NUM t_lambda_806[] = {
  3, // locals
  0, // parameters
  // text(2) == '|'
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '|'
  var_std__equal, 2, LOCAL(1), chr_124, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_807, 1, LOCAL(3),
  // text(2) == '|'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(2237, 9),
  POS(2237, 9),
  POS(2235, 9),
  POS(2237, 9)
};

static TAB_NUM t_lambda_807[] = {
  3, // locals
  0, // parameters
  // text(3) == '|'
  var_text, 1, num_3, 1, LOCAL(1),
  // text(3) == '|'
  var_std__equal, 2, LOCAL(1), chr_124, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_808, 1, LOCAL(3),
  // text(3) == '|'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(2238, 9),
  POS(2238, 9),
  POS(2235, 9),
  POS(2238, 9)
};

static TAB_NUM t_lambda_808[] = {
  2, // locals
  0, // parameters
  // text(4) == ' '
  var_text, 1, num_4, 1, LOCAL(1),
  // text(4) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // text(4) == ' '
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2239, 9),
  POS(2239, 9),
  POS(2239, 9)
};

static TAB_NUM t_lambda_809[] = {
  0, // locals
  0, // parameters
  // range &text 5 -1
  var_range, 3, var_text, num_5, minus_num_1, 1, var_text,
  // parse_or
  func_parse_or, 0, TAIL_CALL,
  POS(2241, 9),
  POS(2242, 9)
};

static TAB_NUM t_lambda_810[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_811, TAIL_CALL,
  POS(2243, 7)
};

static TAB_NUM t_lambda_811[] = {
  0, // locals
  0, // parameters
  //  text undefined
  LET, 2, var_text, var_undefined, TAIL_CALL,
  POS(2245, 9)
};

static TAB_NUM t_func_parse_named_operator_expression[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_2248_1_position,
  // parse_range_expression !text $range_expression
  func_parse_range_expression, 0, 2, var_text, var_2249_30_range_expression,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_34_text_is_defined, lambda_816, TAIL_CALL,
  POS(2248, 3),
  POS(2249, 3),
  POS(2251, 10),
  POS(2250, 3)
};

static TAB_NUM t_lambda_34_text_is_defined[] = {
  1, // locals
  0, // parameters
  // parse_optional_named_operator !text $optional_named_operator
  func_parse_optional_named_operator, 0, 2, var_text, var_2252_37_optional_named_operator,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_812, lambda_815, TAIL_CALL,
  POS(2252, 7),
  POS(2254, 14),
  POS(2253, 7)
};

static TAB_NUM t_lambda_812[] = {
  1, // locals
  0, // parameters
  // is_defined
  var_is_defined, 1, var_2252_37_optional_named_operator, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_813, lambda_814, TAIL_CALL,
  POS(2257, 37),
  POS(2256, 11)
};

static TAB_NUM t_lambda_813[] = {
  1, // locals
  0, // parameters
  // funky_types::named_operator_expression
  LET, -4, var_funky_types__named_operator_expression, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_2248_1_position, var_funky__expression_of, var_2249_30_range_expression, var_funky__operator_of, var_2252_37_optional_named_operator, LOCAL(1),
  // 
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(2260, 15),
  POS(2258, 15)
};

static TAB_NUM t_lambda_814[] = {
  0, // locals
  0, // parameters
  //  text range_expression
  LET, 2, var_text, var_2249_30_range_expression, TAIL_CALL,
  POS(2265, 15)
};

static TAB_NUM t_lambda_815[] = {
  0, // locals
  0, // parameters
  //  undefined optional_named_operator
  LET, 2, var_undefined, var_2252_37_optional_named_operator, TAIL_CALL,
  POS(2266, 11)
};

static TAB_NUM t_lambda_816[] = {
  0, // locals
  0, // parameters
  //  undefined range_expression
  LET, 2, var_undefined, var_2249_30_range_expression, TAIL_CALL,
  POS(2267, 7)
};

static TAB_NUM t_func_parse_optional_named_operator[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 2, lambda_817, lambda_820, TAIL_CALL,
  POS(2270, 3)
};

static TAB_NUM t_lambda_817[] = {
  3, // locals
  0, // parameters
  // text(1) == ' '
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_818, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_819, TAIL_CALL,
  POS(2273, 9),
  POS(2273, 9),
  POS(2272, 9),
  POS(2271, 7)
};

static TAB_NUM t_lambda_818[] = {
  2, // locals
  0, // parameters
  // text(2) == '.'
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '.'
  var_std__equal, 2, LOCAL(1), chr_46, 1, LOCAL(2),
  // text(2) == '.'
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2274, 9),
  POS(2274, 9),
  POS(2274, 9)
};

static TAB_NUM t_lambda_819[] = {
  0, // locals
  0, // parameters
  // range &text 3 -1
  var_range, 3, var_text, num_3, minus_num_1, 1, var_text,
  // parse_named_operator_without_prefix
  func_parse_named_operator_without_prefix, 0, TAIL_CALL,
  POS(2276, 9),
  POS(2277, 9)
};

static TAB_NUM t_lambda_820[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_821, TAIL_CALL,
  POS(2278, 7)
};

static TAB_NUM t_lambda_821[] = {
  0, // locals
  0, // parameters
  //  text undefined
  LET, 2, var_text, var_undefined, TAIL_CALL,
  POS(2280, 9)
};

static TAB_NUM t_func_parse_named_operator_without_prefix[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_2283_1_position,
  // !str text
  LET, 1, var_text, 1, var_str,
  // parse_identifier !text $identifier
  func_parse_identifier, 0, 2, var_text, var_2285_24_identifier,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_35_text_is_defined, lambda_828, TAIL_CALL,
  POS(2283, 3),
  POS(2284, 3),
  POS(2285, 3),
  POS(2287, 10),
  POS(2286, 3)
};

static TAB_NUM t_lambda_35_text_is_defined[] = {
  2, // locals
  0, // parameters
  // text(1) == '.':
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '.':
  var_std__equal, 2, LOCAL(1), chr_46, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_822, lambda_827, TAIL_CALL,
  POS(2289, 9),
  POS(2289, 9),
  POS(2288, 7)
};

static TAB_NUM t_lambda_822[] = {
  2, // locals
  0, // parameters
  // text(2) == ' ':
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == ' ':
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_823, lambda_826, TAIL_CALL,
  POS(2291, 13),
  POS(2291, 13),
  POS(2290, 11)
};

static TAB_NUM t_lambda_823[] = {
  1, // locals
  0, // parameters
  // range &text 3 -1
  var_range, 3, var_text, num_3, minus_num_1, 1, var_text,
  // parse_range_expression !text $range_expression
  func_parse_range_expression, 0, 2, var_text, var_2293_30_range_expression,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_824, lambda_825, TAIL_CALL,
  POS(2292, 15),
  POS(2293, 15),
  POS(2295, 22),
  POS(2294, 15)
};

static TAB_NUM t_lambda_824[] = {
  1, // locals
  0, // parameters
  // funky_types::named_operator
  LET, -4, var_funky_types__named_operator, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_2283_1_position, var_funky__identifier_of, var_2285_24_identifier, var_funky__expression_of, var_2293_30_range_expression, LOCAL(1),
  // 
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(2298, 19),
  POS(2296, 19)
};

static TAB_NUM t_lambda_825[] = {
  0, // locals
  0, // parameters
  //  undefined range_expression
  LET, 2, var_undefined, var_2293_30_range_expression, TAIL_CALL,
  POS(2303, 19)
};

static TAB_NUM t_lambda_826[] = {
  0, // locals
  0, // parameters
  // syntax_error "space character"
  func_syntax_error, 1, str_space_character, TAIL_CALL,
  POS(2305, 15)
};

static TAB_NUM t_lambda_827[] = {
  0, // locals
  0, // parameters
  // syntax_error "'.'"
  func_syntax_error, 1, string_5, TAIL_CALL,
  POS(2307, 11)
};

static TAB_NUM t_lambda_828[] = {
  0, // locals
  0, // parameters
  //  undefined identifier
  LET, 2, var_undefined, var_2285_24_identifier, TAIL_CALL,
  POS(2308, 7)
};

static TAB_NUM t_func_parse_range_expression[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_2311_1_position,
  // parse_relational_expression !text $relational_expression
  func_parse_relational_expression, 0, 2, var_text, var_2312_35_relational_expression,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_36_text_is_defined, lambda_833, TAIL_CALL,
  POS(2311, 3),
  POS(2312, 3),
  POS(2314, 10),
  POS(2313, 3)
};

static TAB_NUM t_lambda_36_text_is_defined[] = {
  1, // locals
  0, // parameters
  // parse_range_operator !text $range_operator
  func_parse_range_operator, 0, 2, var_text, var_2315_28_range_operator,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_829, lambda_832, TAIL_CALL,
  POS(2315, 7),
  POS(2317, 14),
  POS(2316, 7)
};

static TAB_NUM t_lambda_829[] = {
  1, // locals
  0, // parameters
  // is_defined
  var_is_defined, 1, var_2315_28_range_operator, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_830, lambda_831, TAIL_CALL,
  POS(2320, 28),
  POS(2319, 11)
};

static TAB_NUM t_lambda_830[] = {
  1, // locals
  0, // parameters
  // funky_types::expression
  LET, -4, var_funky_types__expression, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_2311_1_position, var_funky__expression_of, var_2312_35_relational_expression, var_funky__operator_of, var_2315_28_range_operator, LOCAL(1),
  // 
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(2323, 15),
  POS(2321, 15)
};

static TAB_NUM t_lambda_831[] = {
  0, // locals
  0, // parameters
  //  text relational_expression
  LET, 2, var_text, var_2312_35_relational_expression, TAIL_CALL,
  POS(2328, 15)
};

static TAB_NUM t_lambda_832[] = {
  0, // locals
  0, // parameters
  //  undefined range_operator
  LET, 2, var_undefined, var_2315_28_range_operator, TAIL_CALL,
  POS(2329, 11)
};

static TAB_NUM t_lambda_833[] = {
  0, // locals
  0, // parameters
  //  undefined relational_expression
  LET, 2, var_undefined, var_2312_35_relational_expression, TAIL_CALL,
  POS(2330, 7)
};

static TAB_NUM t_func_parse_range_operator[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 3, lambda_834, lambda_837, lambda_842, TAIL_CALL,
  POS(2333, 3)
};

static TAB_NUM t_lambda_834[] = {
  3, // locals
  0, // parameters
  // text(1) == '.'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '.'
  var_std__equal, 2, LOCAL(1), chr_46, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_835, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_836, TAIL_CALL,
  POS(2336, 9),
  POS(2336, 9),
  POS(2335, 9),
  POS(2334, 7)
};

static TAB_NUM t_lambda_835[] = {
  2, // locals
  0, // parameters
  // text(2) == '.'
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '.'
  var_std__equal, 2, LOCAL(1), chr_46, 1, LOCAL(2),
  // text(2) == '.'
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2337, 9),
  POS(2337, 9),
  POS(2337, 9)
};

static TAB_NUM t_lambda_836[] = {
  0, // locals
  0, // parameters
  // range &text 3 -1
  var_range, 3, var_text, num_3, minus_num_1, 1, var_text,
  // parse_range
  func_parse_range, 0, TAIL_CALL,
  POS(2339, 9),
  POS(2340, 9)
};

static TAB_NUM t_lambda_837[] = {
  3, // locals
  0, // parameters
  // text(1) == ' '
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_838, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_841, TAIL_CALL,
  POS(2343, 9),
  POS(2343, 9),
  POS(2342, 9),
  POS(2341, 7)
};

static TAB_NUM t_lambda_838[] = {
  3, // locals
  0, // parameters
  // text(2) == '.'
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '.'
  var_std__equal, 2, LOCAL(1), chr_46, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_839, 1, LOCAL(3),
  // text(2) == '.'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(2344, 9),
  POS(2344, 9),
  POS(2342, 9),
  POS(2344, 9)
};

static TAB_NUM t_lambda_839[] = {
  3, // locals
  0, // parameters
  // text(3) == '.'
  var_text, 1, num_3, 1, LOCAL(1),
  // text(3) == '.'
  var_std__equal, 2, LOCAL(1), chr_46, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_840, 1, LOCAL(3),
  // text(3) == '.'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(2345, 9),
  POS(2345, 9),
  POS(2342, 9),
  POS(2345, 9)
};

static TAB_NUM t_lambda_840[] = {
  2, // locals
  0, // parameters
  // text(4) == ' '
  var_text, 1, num_4, 1, LOCAL(1),
  // text(4) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // text(4) == ' '
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2346, 9),
  POS(2346, 9),
  POS(2346, 9)
};

static TAB_NUM t_lambda_841[] = {
  0, // locals
  0, // parameters
  // range &text 5 -1
  var_range, 3, var_text, num_5, minus_num_1, 1, var_text,
  // parse_range
  func_parse_range, 0, TAIL_CALL,
  POS(2348, 9),
  POS(2349, 9)
};

static TAB_NUM t_lambda_842[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_843, TAIL_CALL,
  POS(2350, 7)
};

static TAB_NUM t_lambda_843[] = {
  0, // locals
  0, // parameters
  //  text undefined
  LET, 2, var_text, var_undefined, TAIL_CALL,
  POS(2352, 9)
};

static TAB_NUM t_func_parse_range[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, LOCAL(1),
  // parse_relational_expression funky_types::range
  func_parse_relational_expression, 1, var_funky_types__range, TAIL_CALL,
  POS(2355, 3),
  POS(2356, 3)
};

static TAB_NUM t_func_parse_relational_expression[] = {
  1, // locals
  -1, // parameters
  var_undefined, var_2360_0_derived_node,
  // $position text
  LET, 1, var_text, 1, var_2362_1_position,
  // parse_bit_expression !text $bit_expression
  func_parse_bit_expression, 0, 2, var_text, var_2363_28_bit_expression,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_37_text_is_defined, lambda_849, TAIL_CALL,
  POS(2362, 3),
  POS(2363, 3),
  POS(2365, 10),
  POS(2364, 3)
};

static TAB_NUM t_lambda_37_text_is_defined[] = {
  1, // locals
  0, // parameters
  // parse_comparison_operator !text $comparison_operator
  func_parse_comparison_operator, 0, 2, var_text, var_2366_33_comparison_operator,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_844, lambda_848, TAIL_CALL,
  POS(2366, 7),
  POS(2368, 14),
  POS(2367, 7)
};

static TAB_NUM t_lambda_844[] = {
  2, // locals
  0, // parameters
  // is_defined || comparison_operator.is_defined
  var_is_defined, 1, var_2360_0_derived_node, 1, LOCAL(1),
  // is_defined || comparison_operator.is_defined
  var_std__or, 2, LOCAL(1), lambda_845, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_846, lambda_847, TAIL_CALL,
  POS(2371, 26),
  POS(2371, 26),
  POS(2370, 11)
};

static TAB_NUM t_lambda_845[] = {
  1, // locals
  0, // parameters
  // is_defined
  var_is_defined, 1, var_2366_33_comparison_operator, 1, LOCAL(1),
  // comparison_operator.is_defined
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(2371, 60),
  POS(2371, 40)
};

static TAB_NUM t_lambda_846[] = {
  2, // locals
  0, // parameters
  // default_value(derived_node funky_types::expression)
  var_default_value, 2, var_2360_0_derived_node, var_funky_types__expression, 1, LOCAL(1),
  // default_value(derived_node funky_types::expression)
  LET, -4, LOCAL(1), var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_2362_1_position, var_funky__expression_of, var_2363_28_bit_expression, var_funky__operator_of, var_2366_33_comparison_operator, LOCAL(2),
  // 
  LET, 2, var_text, LOCAL(2), TAIL_CALL,
  POS(2374, 15),
  POS(2374, 15),
  POS(2372, 15)
};

static TAB_NUM t_lambda_847[] = {
  0, // locals
  0, // parameters
  //  text bit_expression
  LET, 2, var_text, var_2363_28_bit_expression, TAIL_CALL,
  POS(2379, 15)
};

static TAB_NUM t_lambda_848[] = {
  0, // locals
  0, // parameters
  //  undefined comparison_operator
  LET, 2, var_undefined, var_2366_33_comparison_operator, TAIL_CALL,
  POS(2380, 11)
};

static TAB_NUM t_lambda_849[] = {
  0, // locals
  0, // parameters
  //  undefined bit_expression
  LET, 2, var_undefined, var_2363_28_bit_expression, TAIL_CALL,
  POS(2381, 7)
};

static TAB_NUM t_func_parse_comparison_operator[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 13, lambda_850, lambda_855, lambda_858, lambda_863, lambda_866, lambda_871, lambda_874, lambda_878, lambda_880, lambda_885, lambda_888, lambda_892, lambda_894, TAIL_CALL,
  POS(2384, 3)
};

static TAB_NUM t_lambda_850[] = {
  3, // locals
  0, // parameters
  // text(1) == ' '
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_851, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_854, TAIL_CALL,
  POS(2387, 9),
  POS(2387, 9),
  POS(2386, 9),
  POS(2385, 7)
};

static TAB_NUM t_lambda_851[] = {
  3, // locals
  0, // parameters
  // text(2) == '='
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '='
  var_std__equal, 2, LOCAL(1), chr_61, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_852, 1, LOCAL(3),
  // text(2) == '='
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(2388, 9),
  POS(2388, 9),
  POS(2386, 9),
  POS(2388, 9)
};

static TAB_NUM t_lambda_852[] = {
  3, // locals
  0, // parameters
  // text(3) == '='
  var_text, 1, num_3, 1, LOCAL(1),
  // text(3) == '='
  var_std__equal, 2, LOCAL(1), chr_61, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_853, 1, LOCAL(3),
  // text(3) == '='
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(2389, 9),
  POS(2389, 9),
  POS(2386, 9),
  POS(2389, 9)
};

static TAB_NUM t_lambda_853[] = {
  2, // locals
  0, // parameters
  // text(4) == ' '
  var_text, 1, num_4, 1, LOCAL(1),
  // text(4) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // text(4) == ' '
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2390, 9),
  POS(2390, 9),
  POS(2390, 9)
};

static TAB_NUM t_lambda_854[] = {
  0, // locals
  0, // parameters
  // range &text 5 -1
  var_range, 3, var_text, num_5, minus_num_1, 1, var_text,
  // parse_equal
  func_parse_equal, 0, TAIL_CALL,
  POS(2392, 9),
  POS(2393, 9)
};

static TAB_NUM t_lambda_855[] = {
  3, // locals
  0, // parameters
  // text(1) == '='
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '='
  var_std__equal, 2, LOCAL(1), chr_61, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_856, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_857, TAIL_CALL,
  POS(2396, 9),
  POS(2396, 9),
  POS(2395, 9),
  POS(2394, 7)
};

static TAB_NUM t_lambda_856[] = {
  2, // locals
  0, // parameters
  // text(2) == '='
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '='
  var_std__equal, 2, LOCAL(1), chr_61, 1, LOCAL(2),
  // text(2) == '='
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2397, 9),
  POS(2397, 9),
  POS(2397, 9)
};

static TAB_NUM t_lambda_857[] = {
  0, // locals
  0, // parameters
  // range &text 3 -1
  var_range, 3, var_text, num_3, minus_num_1, 1, var_text,
  // parse_equal
  func_parse_equal, 0, TAIL_CALL,
  POS(2399, 9),
  POS(2400, 9)
};

static TAB_NUM t_lambda_858[] = {
  3, // locals
  0, // parameters
  // text(1) == ' '
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_859, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_862, TAIL_CALL,
  POS(2403, 9),
  POS(2403, 9),
  POS(2402, 9),
  POS(2401, 7)
};

static TAB_NUM t_lambda_859[] = {
  3, // locals
  0, // parameters
  // text(2) == '!'
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '!'
  var_std__equal, 2, LOCAL(1), chr_33, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_860, 1, LOCAL(3),
  // text(2) == '!'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(2404, 9),
  POS(2404, 9),
  POS(2402, 9),
  POS(2404, 9)
};

static TAB_NUM t_lambda_860[] = {
  3, // locals
  0, // parameters
  // text(3) == '='
  var_text, 1, num_3, 1, LOCAL(1),
  // text(3) == '='
  var_std__equal, 2, LOCAL(1), chr_61, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_861, 1, LOCAL(3),
  // text(3) == '='
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(2405, 9),
  POS(2405, 9),
  POS(2402, 9),
  POS(2405, 9)
};

static TAB_NUM t_lambda_861[] = {
  2, // locals
  0, // parameters
  // text(4) == ' '
  var_text, 1, num_4, 1, LOCAL(1),
  // text(4) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // text(4) == ' '
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2406, 9),
  POS(2406, 9),
  POS(2406, 9)
};

static TAB_NUM t_lambda_862[] = {
  0, // locals
  0, // parameters
  // range &text 5 -1
  var_range, 3, var_text, num_5, minus_num_1, 1, var_text,
  // parse_not_equal
  func_parse_not_equal, 0, TAIL_CALL,
  POS(2408, 9),
  POS(2409, 9)
};

static TAB_NUM t_lambda_863[] = {
  3, // locals
  0, // parameters
  // text(1) == '!'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '!'
  var_std__equal, 2, LOCAL(1), chr_33, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_864, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_865, TAIL_CALL,
  POS(2412, 9),
  POS(2412, 9),
  POS(2411, 9),
  POS(2410, 7)
};

static TAB_NUM t_lambda_864[] = {
  2, // locals
  0, // parameters
  // text(2) == '='
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '='
  var_std__equal, 2, LOCAL(1), chr_61, 1, LOCAL(2),
  // text(2) == '='
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2413, 9),
  POS(2413, 9),
  POS(2413, 9)
};

static TAB_NUM t_lambda_865[] = {
  0, // locals
  0, // parameters
  // range &text 3 -1
  var_range, 3, var_text, num_3, minus_num_1, 1, var_text,
  // parse_not_equal
  func_parse_not_equal, 0, TAIL_CALL,
  POS(2415, 9),
  POS(2416, 9)
};

static TAB_NUM t_lambda_866[] = {
  3, // locals
  0, // parameters
  // text(1) == ' '
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_867, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_870, TAIL_CALL,
  POS(2419, 9),
  POS(2419, 9),
  POS(2418, 9),
  POS(2417, 7)
};

static TAB_NUM t_lambda_867[] = {
  3, // locals
  0, // parameters
  // text(2) == '<'
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '<'
  var_std__equal, 2, LOCAL(1), chr_60, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_868, 1, LOCAL(3),
  // text(2) == '<'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(2420, 9),
  POS(2420, 9),
  POS(2418, 9),
  POS(2420, 9)
};

static TAB_NUM t_lambda_868[] = {
  3, // locals
  0, // parameters
  // text(3) == '='
  var_text, 1, num_3, 1, LOCAL(1),
  // text(3) == '='
  var_std__equal, 2, LOCAL(1), chr_61, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_869, 1, LOCAL(3),
  // text(3) == '='
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(2421, 9),
  POS(2421, 9),
  POS(2418, 9),
  POS(2421, 9)
};

static TAB_NUM t_lambda_869[] = {
  2, // locals
  0, // parameters
  // text(4) == ' '
  var_text, 1, num_4, 1, LOCAL(1),
  // text(4) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // text(4) == ' '
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2422, 9),
  POS(2422, 9),
  POS(2422, 9)
};

static TAB_NUM t_lambda_870[] = {
  0, // locals
  0, // parameters
  // range &text 5 -1
  var_range, 3, var_text, num_5, minus_num_1, 1, var_text,
  // parse_less_equal
  func_parse_less_equal, 0, TAIL_CALL,
  POS(2424, 9),
  POS(2425, 9)
};

static TAB_NUM t_lambda_871[] = {
  3, // locals
  0, // parameters
  // text(1) == '<'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '<'
  var_std__equal, 2, LOCAL(1), chr_60, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_872, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_873, TAIL_CALL,
  POS(2428, 9),
  POS(2428, 9),
  POS(2427, 9),
  POS(2426, 7)
};

static TAB_NUM t_lambda_872[] = {
  2, // locals
  0, // parameters
  // text(2) == '='
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '='
  var_std__equal, 2, LOCAL(1), chr_61, 1, LOCAL(2),
  // text(2) == '='
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2429, 9),
  POS(2429, 9),
  POS(2429, 9)
};

static TAB_NUM t_lambda_873[] = {
  0, // locals
  0, // parameters
  // range &text 3 -1
  var_range, 3, var_text, num_3, minus_num_1, 1, var_text,
  // parse_less_equal
  func_parse_less_equal, 0, TAIL_CALL,
  POS(2431, 9),
  POS(2432, 9)
};

static TAB_NUM t_lambda_874[] = {
  3, // locals
  0, // parameters
  // text(1) == ' '
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_875, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_877, TAIL_CALL,
  POS(2435, 9),
  POS(2435, 9),
  POS(2434, 9),
  POS(2433, 7)
};

static TAB_NUM t_lambda_875[] = {
  3, // locals
  0, // parameters
  // text(2) == '<'
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '<'
  var_std__equal, 2, LOCAL(1), chr_60, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_876, 1, LOCAL(3),
  // text(2) == '<'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(2436, 9),
  POS(2436, 9),
  POS(2434, 9),
  POS(2436, 9)
};

static TAB_NUM t_lambda_876[] = {
  2, // locals
  0, // parameters
  // text(3) == ' '
  var_text, 1, num_3, 1, LOCAL(1),
  // text(3) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // text(3) == ' '
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2437, 9),
  POS(2437, 9),
  POS(2437, 9)
};

static TAB_NUM t_lambda_877[] = {
  0, // locals
  0, // parameters
  // range &text 4 -1
  var_range, 3, var_text, num_4, minus_num_1, 1, var_text,
  // parse_less_than
  func_parse_less_than, 0, TAIL_CALL,
  POS(2439, 9),
  POS(2440, 9)
};

static TAB_NUM t_lambda_878[] = {
  2, // locals
  0, // parameters
  // text(1) == '<'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '<'
  var_std__equal, 2, LOCAL(1), chr_60, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_879, TAIL_CALL,
  POS(2442, 7),
  POS(2442, 7),
  POS(2441, 7)
};

static TAB_NUM t_lambda_879[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_less_than
  func_parse_less_than, 0, TAIL_CALL,
  POS(2444, 9),
  POS(2445, 9)
};

static TAB_NUM t_lambda_880[] = {
  3, // locals
  0, // parameters
  // text(1) == ' '
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_881, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_884, TAIL_CALL,
  POS(2448, 9),
  POS(2448, 9),
  POS(2447, 9),
  POS(2446, 7)
};

static TAB_NUM t_lambda_881[] = {
  3, // locals
  0, // parameters
  // text(2) == '>'
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '>'
  var_std__equal, 2, LOCAL(1), chr_62, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_882, 1, LOCAL(3),
  // text(2) == '>'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(2449, 9),
  POS(2449, 9),
  POS(2447, 9),
  POS(2449, 9)
};

static TAB_NUM t_lambda_882[] = {
  3, // locals
  0, // parameters
  // text(3) == '='
  var_text, 1, num_3, 1, LOCAL(1),
  // text(3) == '='
  var_std__equal, 2, LOCAL(1), chr_61, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_883, 1, LOCAL(3),
  // text(3) == '='
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(2450, 9),
  POS(2450, 9),
  POS(2447, 9),
  POS(2450, 9)
};

static TAB_NUM t_lambda_883[] = {
  2, // locals
  0, // parameters
  // text(4) == ' '
  var_text, 1, num_4, 1, LOCAL(1),
  // text(4) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // text(4) == ' '
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2451, 9),
  POS(2451, 9),
  POS(2451, 9)
};

static TAB_NUM t_lambda_884[] = {
  0, // locals
  0, // parameters
  // range &text 5 -1
  var_range, 3, var_text, num_5, minus_num_1, 1, var_text,
  // parse_greater_equal
  func_parse_greater_equal, 0, TAIL_CALL,
  POS(2453, 9),
  POS(2454, 9)
};

static TAB_NUM t_lambda_885[] = {
  3, // locals
  0, // parameters
  // text(1) == '>'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '>'
  var_std__equal, 2, LOCAL(1), chr_62, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_886, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_887, TAIL_CALL,
  POS(2457, 9),
  POS(2457, 9),
  POS(2456, 9),
  POS(2455, 7)
};

static TAB_NUM t_lambda_886[] = {
  2, // locals
  0, // parameters
  // text(2) == '='
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '='
  var_std__equal, 2, LOCAL(1), chr_61, 1, LOCAL(2),
  // text(2) == '='
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2458, 9),
  POS(2458, 9),
  POS(2458, 9)
};

static TAB_NUM t_lambda_887[] = {
  0, // locals
  0, // parameters
  // range &text 3 -1
  var_range, 3, var_text, num_3, minus_num_1, 1, var_text,
  // parse_greater_equal
  func_parse_greater_equal, 0, TAIL_CALL,
  POS(2460, 9),
  POS(2461, 9)
};

static TAB_NUM t_lambda_888[] = {
  3, // locals
  0, // parameters
  // text(1) == ' '
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_889, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_891, TAIL_CALL,
  POS(2464, 9),
  POS(2464, 9),
  POS(2463, 9),
  POS(2462, 7)
};

static TAB_NUM t_lambda_889[] = {
  3, // locals
  0, // parameters
  // text(2) == '>'
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '>'
  var_std__equal, 2, LOCAL(1), chr_62, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_890, 1, LOCAL(3),
  // text(2) == '>'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(2465, 9),
  POS(2465, 9),
  POS(2463, 9),
  POS(2465, 9)
};

static TAB_NUM t_lambda_890[] = {
  2, // locals
  0, // parameters
  // text(3) == ' '
  var_text, 1, num_3, 1, LOCAL(1),
  // text(3) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // text(3) == ' '
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2466, 9),
  POS(2466, 9),
  POS(2466, 9)
};

static TAB_NUM t_lambda_891[] = {
  0, // locals
  0, // parameters
  // range &text 4 -1
  var_range, 3, var_text, num_4, minus_num_1, 1, var_text,
  // parse_greater_than
  func_parse_greater_than, 0, TAIL_CALL,
  POS(2468, 9),
  POS(2469, 9)
};

static TAB_NUM t_lambda_892[] = {
  2, // locals
  0, // parameters
  // text(1) == '>'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '>'
  var_std__equal, 2, LOCAL(1), chr_62, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_893, TAIL_CALL,
  POS(2471, 7),
  POS(2471, 7),
  POS(2470, 7)
};

static TAB_NUM t_lambda_893[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_greater_than
  func_parse_greater_than, 0, TAIL_CALL,
  POS(2473, 9),
  POS(2474, 9)
};

static TAB_NUM t_lambda_894[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_895, TAIL_CALL,
  POS(2475, 7)
};

static TAB_NUM t_lambda_895[] = {
  0, // locals
  0, // parameters
  //  text undefined
  LET, 2, var_text, var_undefined, TAIL_CALL,
  POS(2477, 9)
};

static TAB_NUM t_func_parse_equal[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, LOCAL(1),
  // parse_tagged_bit_expression funky_types::equal
  func_parse_tagged_bit_expression, 1, var_funky_types__equal, TAIL_CALL,
  POS(2480, 3),
  POS(2481, 3)
};

static TAB_NUM t_func_parse_not_equal[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, LOCAL(1),
  // parse_tagged_bit_expression funky_types::not_equal
  func_parse_tagged_bit_expression, 1, var_funky_types__not_equal, TAIL_CALL,
  POS(2484, 3),
  POS(2485, 3)
};

static TAB_NUM t_func_parse_less_equal[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, LOCAL(1),
  // parse_tagged_bit_expression funky_types::less_equal
  func_parse_tagged_bit_expression, 1, var_funky_types__less_equal, TAIL_CALL,
  POS(2488, 3),
  POS(2489, 3)
};

static TAB_NUM t_func_parse_less_than[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, LOCAL(1),
  // parse_tagged_bit_expression funky_types::less_than
  func_parse_tagged_bit_expression, 1, var_funky_types__less_than, TAIL_CALL,
  POS(2492, 3),
  POS(2493, 3)
};

static TAB_NUM t_func_parse_greater_equal[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, LOCAL(1),
  // parse_tagged_bit_expression funky_types::greater_equal
  func_parse_tagged_bit_expression, 1, var_funky_types__greater_equal, TAIL_CALL,
  POS(2496, 3),
  POS(2497, 3)
};

static TAB_NUM t_func_parse_greater_than[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, LOCAL(1),
  // parse_tagged_bit_expression funky_types::greater_than
  func_parse_tagged_bit_expression, 1, var_funky_types__greater_than, TAIL_CALL,
  POS(2500, 3),
  POS(2501, 3)
};

static TAB_NUM t_func_parse_tagged_bit_expression[] = {
  1, // locals
  -1, // parameters
  var_undefined, var_2505_0_derived_node,
  // $position text
  LET, 1, var_text, 1, var_2507_1_position,
  // parse_additive_expression !text $additive_expression
  func_parse_additive_expression, 0, 2, var_text, var_2508_33_additive_expression,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_38_text_is_defined, lambda_901, TAIL_CALL,
  POS(2507, 3),
  POS(2508, 3),
  POS(2510, 10),
  POS(2509, 3)
};

static TAB_NUM t_lambda_38_text_is_defined[] = {
  1, // locals
  0, // parameters
  // parse_bit_operator !text $bit_operator
  func_parse_bit_operator, 0, 2, var_text, var_2511_26_bit_operator,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_896, lambda_900, TAIL_CALL,
  POS(2511, 7),
  POS(2513, 14),
  POS(2512, 7)
};

static TAB_NUM t_lambda_896[] = {
  2, // locals
  0, // parameters
  // is_defined || bit_operator.is_defined
  var_is_defined, 1, var_2505_0_derived_node, 1, LOCAL(1),
  // is_defined || bit_operator.is_defined
  var_std__or, 2, LOCAL(1), lambda_897, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_898, lambda_899, TAIL_CALL,
  POS(2516, 26),
  POS(2516, 26),
  POS(2515, 11)
};

static TAB_NUM t_lambda_897[] = {
  1, // locals
  0, // parameters
  // is_defined
  var_is_defined, 1, var_2511_26_bit_operator, 1, LOCAL(1),
  // bit_operator.is_defined
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(2516, 53),
  POS(2516, 40)
};

static TAB_NUM t_lambda_898[] = {
  2, // locals
  0, // parameters
  // default_value(derived_node funky_types::tagged_bit_expression)
  var_default_value, 2, var_2505_0_derived_node, var_funky_types__tagged_bit_expression, 1, LOCAL(1),
  // default_value(derived_node funky_types::tagged_bit_expression)
  LET, -4, LOCAL(1), var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_2507_1_position, var_funky__expression_of, var_2508_33_additive_expression, var_funky__operator_of, var_2511_26_bit_operator, LOCAL(2),
  // 
  LET, 2, var_text, LOCAL(2), TAIL_CALL,
  POS(2519, 15),
  POS(2519, 15),
  POS(2517, 15)
};

static TAB_NUM t_lambda_899[] = {
  0, // locals
  0, // parameters
  //  text additive_expression
  LET, 2, var_text, var_2508_33_additive_expression, TAIL_CALL,
  POS(2524, 15)
};

static TAB_NUM t_lambda_900[] = {
  0, // locals
  0, // parameters
  //  undefined bit_operator
  LET, 2, var_undefined, var_2511_26_bit_operator, TAIL_CALL,
  POS(2525, 11)
};

static TAB_NUM t_lambda_901[] = {
  0, // locals
  0, // parameters
  //  undefined additive_expression
  LET, 2, var_undefined, var_2508_33_additive_expression, TAIL_CALL,
  POS(2526, 7)
};

static TAB_NUM t_func_parse_bit_expression[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_2529_1_position,
  // parse_additive_expression !text $additive_expression
  func_parse_additive_expression, 0, 2, var_text, var_2530_33_additive_expression,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_39_text_is_defined, lambda_906, TAIL_CALL,
  POS(2529, 3),
  POS(2530, 3),
  POS(2532, 10),
  POS(2531, 3)
};

static TAB_NUM t_lambda_39_text_is_defined[] = {
  1, // locals
  0, // parameters
  // parse_bit_operator !text $bit_operator
  func_parse_bit_operator, 0, 2, var_text, var_2533_26_bit_operator,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_902, lambda_905, TAIL_CALL,
  POS(2533, 7),
  POS(2535, 14),
  POS(2534, 7)
};

static TAB_NUM t_lambda_902[] = {
  1, // locals
  0, // parameters
  // is_defined
  var_is_defined, 1, var_2533_26_bit_operator, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_903, lambda_904, TAIL_CALL,
  POS(2538, 26),
  POS(2537, 11)
};

static TAB_NUM t_lambda_903[] = {
  1, // locals
  0, // parameters
  // funky_types::expression
  LET, -4, var_funky_types__expression, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_2529_1_position, var_funky__expression_of, var_2530_33_additive_expression, var_funky__operator_of, var_2533_26_bit_operator, LOCAL(1),
  // 
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(2541, 15),
  POS(2539, 15)
};

static TAB_NUM t_lambda_904[] = {
  0, // locals
  0, // parameters
  //  text additive_expression
  LET, 2, var_text, var_2530_33_additive_expression, TAIL_CALL,
  POS(2546, 15)
};

static TAB_NUM t_lambda_905[] = {
  0, // locals
  0, // parameters
  //  undefined bit_operator
  LET, 2, var_undefined, var_2533_26_bit_operator, TAIL_CALL,
  POS(2547, 11)
};

static TAB_NUM t_lambda_906[] = {
  0, // locals
  0, // parameters
  //  undefined additive_expression
  LET, 2, var_undefined, var_2530_33_additive_expression, TAIL_CALL,
  POS(2548, 7)
};

static TAB_NUM t_func_parse_bit_operator[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 11, lambda_907, lambda_912, lambda_915, lambda_920, lambda_923, lambda_927, lambda_929, lambda_933, lambda_935, lambda_939, lambda_941, TAIL_CALL,
  POS(2551, 3)
};

static TAB_NUM t_lambda_907[] = {
  3, // locals
  0, // parameters
  // text(1) == ' '
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_908, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_911, TAIL_CALL,
  POS(2554, 9),
  POS(2554, 9),
  POS(2553, 9),
  POS(2552, 7)
};

static TAB_NUM t_lambda_908[] = {
  3, // locals
  0, // parameters
  // text(2) == '<'
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '<'
  var_std__equal, 2, LOCAL(1), chr_60, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_909, 1, LOCAL(3),
  // text(2) == '<'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(2555, 9),
  POS(2555, 9),
  POS(2553, 9),
  POS(2555, 9)
};

static TAB_NUM t_lambda_909[] = {
  3, // locals
  0, // parameters
  // text(3) == '<'
  var_text, 1, num_3, 1, LOCAL(1),
  // text(3) == '<'
  var_std__equal, 2, LOCAL(1), chr_60, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_910, 1, LOCAL(3),
  // text(3) == '<'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(2556, 9),
  POS(2556, 9),
  POS(2553, 9),
  POS(2556, 9)
};

static TAB_NUM t_lambda_910[] = {
  2, // locals
  0, // parameters
  // text(4) == ' '
  var_text, 1, num_4, 1, LOCAL(1),
  // text(4) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // text(4) == ' '
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2557, 9),
  POS(2557, 9),
  POS(2557, 9)
};

static TAB_NUM t_lambda_911[] = {
  0, // locals
  0, // parameters
  // range &text 5 -1
  var_range, 3, var_text, num_5, minus_num_1, 1, var_text,
  // parse_shift_left
  func_parse_shift_left, 0, TAIL_CALL,
  POS(2559, 9),
  POS(2560, 9)
};

static TAB_NUM t_lambda_912[] = {
  3, // locals
  0, // parameters
  // text(1) == '<'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '<'
  var_std__equal, 2, LOCAL(1), chr_60, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_913, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_914, TAIL_CALL,
  POS(2563, 9),
  POS(2563, 9),
  POS(2562, 9),
  POS(2561, 7)
};

static TAB_NUM t_lambda_913[] = {
  2, // locals
  0, // parameters
  // text(2) == '<'
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '<'
  var_std__equal, 2, LOCAL(1), chr_60, 1, LOCAL(2),
  // text(2) == '<'
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2564, 9),
  POS(2564, 9),
  POS(2564, 9)
};

static TAB_NUM t_lambda_914[] = {
  0, // locals
  0, // parameters
  // range &text 3 -1
  var_range, 3, var_text, num_3, minus_num_1, 1, var_text,
  // parse_shift_left
  func_parse_shift_left, 0, TAIL_CALL,
  POS(2566, 9),
  POS(2567, 9)
};

static TAB_NUM t_lambda_915[] = {
  3, // locals
  0, // parameters
  // text(1) == ' '
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_916, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_919, TAIL_CALL,
  POS(2570, 9),
  POS(2570, 9),
  POS(2569, 9),
  POS(2568, 7)
};

static TAB_NUM t_lambda_916[] = {
  3, // locals
  0, // parameters
  // text(2) == '>'
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '>'
  var_std__equal, 2, LOCAL(1), chr_62, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_917, 1, LOCAL(3),
  // text(2) == '>'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(2571, 9),
  POS(2571, 9),
  POS(2569, 9),
  POS(2571, 9)
};

static TAB_NUM t_lambda_917[] = {
  3, // locals
  0, // parameters
  // text(3) == '>'
  var_text, 1, num_3, 1, LOCAL(1),
  // text(3) == '>'
  var_std__equal, 2, LOCAL(1), chr_62, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_918, 1, LOCAL(3),
  // text(3) == '>'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(2572, 9),
  POS(2572, 9),
  POS(2569, 9),
  POS(2572, 9)
};

static TAB_NUM t_lambda_918[] = {
  2, // locals
  0, // parameters
  // text(4) == ' '
  var_text, 1, num_4, 1, LOCAL(1),
  // text(4) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // text(4) == ' '
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2573, 9),
  POS(2573, 9),
  POS(2573, 9)
};

static TAB_NUM t_lambda_919[] = {
  0, // locals
  0, // parameters
  // range &text 5 -1
  var_range, 3, var_text, num_5, minus_num_1, 1, var_text,
  // parse_shift_right
  func_parse_shift_right, 0, TAIL_CALL,
  POS(2575, 9),
  POS(2576, 9)
};

static TAB_NUM t_lambda_920[] = {
  3, // locals
  0, // parameters
  // text(1) == '>'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '>'
  var_std__equal, 2, LOCAL(1), chr_62, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_921, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_922, TAIL_CALL,
  POS(2579, 9),
  POS(2579, 9),
  POS(2578, 9),
  POS(2577, 7)
};

static TAB_NUM t_lambda_921[] = {
  2, // locals
  0, // parameters
  // text(2) == '>'
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '>'
  var_std__equal, 2, LOCAL(1), chr_62, 1, LOCAL(2),
  // text(2) == '>'
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2580, 9),
  POS(2580, 9),
  POS(2580, 9)
};

static TAB_NUM t_lambda_922[] = {
  0, // locals
  0, // parameters
  // range &text 3 -1
  var_range, 3, var_text, num_3, minus_num_1, 1, var_text,
  // parse_shift_right
  func_parse_shift_right, 0, TAIL_CALL,
  POS(2582, 9),
  POS(2583, 9)
};

static TAB_NUM t_lambda_923[] = {
  3, // locals
  0, // parameters
  // text(1) == ' '
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_924, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_926, TAIL_CALL,
  POS(2586, 9),
  POS(2586, 9),
  POS(2585, 9),
  POS(2584, 7)
};

static TAB_NUM t_lambda_924[] = {
  3, // locals
  0, // parameters
  // text(2) == '&'
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '&'
  var_std__equal, 2, LOCAL(1), chr_38, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_925, 1, LOCAL(3),
  // text(2) == '&'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(2587, 9),
  POS(2587, 9),
  POS(2585, 9),
  POS(2587, 9)
};

static TAB_NUM t_lambda_925[] = {
  2, // locals
  0, // parameters
  // text(3) == ' '
  var_text, 1, num_3, 1, LOCAL(1),
  // text(3) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // text(3) == ' '
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2588, 9),
  POS(2588, 9),
  POS(2588, 9)
};

static TAB_NUM t_lambda_926[] = {
  0, // locals
  0, // parameters
  // range &text 4 -1
  var_range, 3, var_text, num_4, minus_num_1, 1, var_text,
  // parse_bit_and
  func_parse_bit_and, 0, TAIL_CALL,
  POS(2590, 9),
  POS(2591, 9)
};

static TAB_NUM t_lambda_927[] = {
  2, // locals
  0, // parameters
  // text(1) == '&'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '&'
  var_std__equal, 2, LOCAL(1), chr_38, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_928, TAIL_CALL,
  POS(2593, 7),
  POS(2593, 7),
  POS(2592, 7)
};

static TAB_NUM t_lambda_928[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_bit_and
  func_parse_bit_and, 0, TAIL_CALL,
  POS(2595, 9),
  POS(2596, 9)
};

static TAB_NUM t_lambda_929[] = {
  3, // locals
  0, // parameters
  // text(1) == ' '
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_930, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_932, TAIL_CALL,
  POS(2599, 9),
  POS(2599, 9),
  POS(2598, 9),
  POS(2597, 7)
};

static TAB_NUM t_lambda_930[] = {
  3, // locals
  0, // parameters
  // text(2) == '|'
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '|'
  var_std__equal, 2, LOCAL(1), chr_124, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_931, 1, LOCAL(3),
  // text(2) == '|'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(2600, 9),
  POS(2600, 9),
  POS(2598, 9),
  POS(2600, 9)
};

static TAB_NUM t_lambda_931[] = {
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

static TAB_NUM t_lambda_932[] = {
  0, // locals
  0, // parameters
  // range &text 4 -1
  var_range, 3, var_text, num_4, minus_num_1, 1, var_text,
  // parse_bit_or
  func_parse_bit_or, 0, TAIL_CALL,
  POS(2603, 9),
  POS(2604, 9)
};

static TAB_NUM t_lambda_933[] = {
  2, // locals
  0, // parameters
  // text(1) == '|'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '|'
  var_std__equal, 2, LOCAL(1), chr_124, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_934, TAIL_CALL,
  POS(2606, 7),
  POS(2606, 7),
  POS(2605, 7)
};

static TAB_NUM t_lambda_934[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_bit_or
  func_parse_bit_or, 0, TAIL_CALL,
  POS(2608, 9),
  POS(2609, 9)
};

static TAB_NUM t_lambda_935[] = {
  3, // locals
  0, // parameters
  // text(1) == ' '
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_936, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_938, TAIL_CALL,
  POS(2612, 9),
  POS(2612, 9),
  POS(2611, 9),
  POS(2610, 7)
};

static TAB_NUM t_lambda_936[] = {
  3, // locals
  0, // parameters
  // text(2) == '^'
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '^'
  var_std__equal, 2, LOCAL(1), chr_94, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_937, 1, LOCAL(3),
  // text(2) == '^'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(2613, 9),
  POS(2613, 9),
  POS(2611, 9),
  POS(2613, 9)
};

static TAB_NUM t_lambda_937[] = {
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

static TAB_NUM t_lambda_938[] = {
  0, // locals
  0, // parameters
  // range &text 4 -1
  var_range, 3, var_text, num_4, minus_num_1, 1, var_text,
  // parse_bit_xor
  func_parse_bit_xor, 0, TAIL_CALL,
  POS(2616, 9),
  POS(2617, 9)
};

static TAB_NUM t_lambda_939[] = {
  2, // locals
  0, // parameters
  // text(1) == '^'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '^'
  var_std__equal, 2, LOCAL(1), chr_94, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_940, TAIL_CALL,
  POS(2619, 7),
  POS(2619, 7),
  POS(2618, 7)
};

static TAB_NUM t_lambda_940[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_bit_xor
  func_parse_bit_xor, 0, TAIL_CALL,
  POS(2621, 9),
  POS(2622, 9)
};

static TAB_NUM t_lambda_941[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_942, TAIL_CALL,
  POS(2623, 7)
};

static TAB_NUM t_lambda_942[] = {
  0, // locals
  0, // parameters
  //  text undefined
  LET, 2, var_text, var_undefined, TAIL_CALL,
  POS(2625, 9)
};

static TAB_NUM t_func_parse_shift_left[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, LOCAL(1),
  // parse_tagged_additive_expression funky_types::shift_left
  func_parse_tagged_additive_expression, 1, var_funky_types__shift_left, TAIL_CALL,
  POS(2628, 3),
  POS(2629, 3)
};

static TAB_NUM t_func_parse_shift_right[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, LOCAL(1),
  // parse_tagged_additive_expression funky_types::shift_right
  func_parse_tagged_additive_expression, 1, var_funky_types__shift_right, TAIL_CALL,
  POS(2632, 3),
  POS(2633, 3)
};

static TAB_NUM t_func_parse_bit_and[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, LOCAL(1),
  // parse_bit_and2 funky_types::bit_and
  func_parse_bit_and2, 1, var_funky_types__bit_and, TAIL_CALL,
  POS(2636, 3),
  POS(2637, 3)
};

static TAB_NUM t_func_parse_bit_and2[] = {
  1, // locals
  -1, // parameters
  var_undefined, var_2641_0_derived_node,
  // $position text
  LET, 1, var_text, 1, var_2643_1_position,
  // parse_additive_expression !text $additive_expression
  func_parse_additive_expression, 0, 2, var_text, var_2644_33_additive_expression,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_40_text_is_defined, lambda_948, TAIL_CALL,
  POS(2643, 3),
  POS(2644, 3),
  POS(2646, 10),
  POS(2645, 3)
};

static TAB_NUM t_lambda_40_text_is_defined[] = {
  1, // locals
  0, // parameters
  // parse_bit_and_operator !text $bit_and_operator
  func_parse_bit_and_operator, 0, 2, var_text, var_2647_30_bit_and_operator,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_943, lambda_947, TAIL_CALL,
  POS(2647, 7),
  POS(2649, 14),
  POS(2648, 7)
};

static TAB_NUM t_lambda_943[] = {
  2, // locals
  0, // parameters
  // is_defined || bit_and_operator.is_defined
  var_is_defined, 1, var_2641_0_derived_node, 1, LOCAL(1),
  // is_defined || bit_and_operator.is_defined
  var_std__or, 2, LOCAL(1), lambda_944, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_945, lambda_946, TAIL_CALL,
  POS(2652, 26),
  POS(2652, 26),
  POS(2651, 11)
};

static TAB_NUM t_lambda_944[] = {
  1, // locals
  0, // parameters
  // is_defined
  var_is_defined, 1, var_2647_30_bit_and_operator, 1, LOCAL(1),
  // bit_and_operator.is_defined
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(2652, 57),
  POS(2652, 40)
};

static TAB_NUM t_lambda_945[] = {
  2, // locals
  0, // parameters
  // default_value(derived_node funky_types::bit_and2)
  var_default_value, 2, var_2641_0_derived_node, var_funky_types__bit_and2, 1, LOCAL(1),
  // default_value(derived_node funky_types::bit_and2)
  LET, -4, LOCAL(1), var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_2643_1_position, var_funky__expression_of, var_2644_33_additive_expression, var_funky__operator_of, var_2647_30_bit_and_operator, LOCAL(2),
  // 
  LET, 2, var_text, LOCAL(2), TAIL_CALL,
  POS(2655, 15),
  POS(2655, 15),
  POS(2653, 15)
};

static TAB_NUM t_lambda_946[] = {
  0, // locals
  0, // parameters
  //  text additive_expression
  LET, 2, var_text, var_2644_33_additive_expression, TAIL_CALL,
  POS(2660, 15)
};

static TAB_NUM t_lambda_947[] = {
  0, // locals
  0, // parameters
  //  undefined bit_and_operator
  LET, 2, var_undefined, var_2647_30_bit_and_operator, TAIL_CALL,
  POS(2661, 11)
};

static TAB_NUM t_lambda_948[] = {
  0, // locals
  0, // parameters
  //  undefined additive_expression
  LET, 2, var_undefined, var_2644_33_additive_expression, TAIL_CALL,
  POS(2662, 7)
};

static TAB_NUM t_func_parse_bit_and_operator[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 3, lambda_949, lambda_953, lambda_955, TAIL_CALL,
  POS(2665, 3)
};

static TAB_NUM t_lambda_949[] = {
  3, // locals
  0, // parameters
  // text(1) == ' '
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_950, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_952, TAIL_CALL,
  POS(2668, 9),
  POS(2668, 9),
  POS(2667, 9),
  POS(2666, 7)
};

static TAB_NUM t_lambda_950[] = {
  3, // locals
  0, // parameters
  // text(2) == '&'
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '&'
  var_std__equal, 2, LOCAL(1), chr_38, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_951, 1, LOCAL(3),
  // text(2) == '&'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(2669, 9),
  POS(2669, 9),
  POS(2667, 9),
  POS(2669, 9)
};

static TAB_NUM t_lambda_951[] = {
  2, // locals
  0, // parameters
  // text(3) == ' '
  var_text, 1, num_3, 1, LOCAL(1),
  // text(3) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // text(3) == ' '
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2670, 9),
  POS(2670, 9),
  POS(2670, 9)
};

static TAB_NUM t_lambda_952[] = {
  0, // locals
  0, // parameters
  // range &text 4 -1
  var_range, 3, var_text, num_4, minus_num_1, 1, var_text,
  // parse_bit_and
  func_parse_bit_and, 0, TAIL_CALL,
  POS(2672, 9),
  POS(2673, 9)
};

static TAB_NUM t_lambda_953[] = {
  2, // locals
  0, // parameters
  // text(1) == '&'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '&'
  var_std__equal, 2, LOCAL(1), chr_38, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_954, TAIL_CALL,
  POS(2675, 7),
  POS(2675, 7),
  POS(2674, 7)
};

static TAB_NUM t_lambda_954[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_bit_and
  func_parse_bit_and, 0, TAIL_CALL,
  POS(2677, 9),
  POS(2678, 9)
};

static TAB_NUM t_lambda_955[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_956, TAIL_CALL,
  POS(2679, 7)
};

static TAB_NUM t_lambda_956[] = {
  0, // locals
  0, // parameters
  //  text undefined
  LET, 2, var_text, var_undefined, TAIL_CALL,
  POS(2681, 9)
};

static TAB_NUM t_func_parse_bit_or[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, LOCAL(1),
  // parse_bit_or2 funky_types::bit_or
  func_parse_bit_or2, 1, var_funky_types__bit_or, TAIL_CALL,
  POS(2684, 3),
  POS(2685, 3)
};

static TAB_NUM t_func_parse_bit_or2[] = {
  1, // locals
  -1, // parameters
  var_undefined, var_2689_0_derived_node,
  // $position text
  LET, 1, var_text, 1, var_2691_1_position,
  // parse_additive_expression !text $additive_expression
  func_parse_additive_expression, 0, 2, var_text, var_2692_33_additive_expression,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_41_text_is_defined, lambda_962, TAIL_CALL,
  POS(2691, 3),
  POS(2692, 3),
  POS(2694, 10),
  POS(2693, 3)
};

static TAB_NUM t_lambda_41_text_is_defined[] = {
  1, // locals
  0, // parameters
  // parse_bit_or_operator !text $bit_or_operator
  func_parse_bit_or_operator, 0, 2, var_text, var_2695_29_bit_or_operator,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_957, lambda_961, TAIL_CALL,
  POS(2695, 7),
  POS(2697, 14),
  POS(2696, 7)
};

static TAB_NUM t_lambda_957[] = {
  2, // locals
  0, // parameters
  // is_defined || bit_or_operator.is_defined
  var_is_defined, 1, var_2689_0_derived_node, 1, LOCAL(1),
  // is_defined || bit_or_operator.is_defined
  var_std__or, 2, LOCAL(1), lambda_958, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_959, lambda_960, TAIL_CALL,
  POS(2700, 26),
  POS(2700, 26),
  POS(2699, 11)
};

static TAB_NUM t_lambda_958[] = {
  1, // locals
  0, // parameters
  // is_defined
  var_is_defined, 1, var_2695_29_bit_or_operator, 1, LOCAL(1),
  // bit_or_operator.is_defined
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(2700, 56),
  POS(2700, 40)
};

static TAB_NUM t_lambda_959[] = {
  2, // locals
  0, // parameters
  // default_value(derived_node funky_types::bit_or2)
  var_default_value, 2, var_2689_0_derived_node, var_funky_types__bit_or2, 1, LOCAL(1),
  // default_value(derived_node funky_types::bit_or2)
  LET, -4, LOCAL(1), var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_2691_1_position, var_funky__expression_of, var_2692_33_additive_expression, var_funky__operator_of, var_2695_29_bit_or_operator, LOCAL(2),
  // 
  LET, 2, var_text, LOCAL(2), TAIL_CALL,
  POS(2703, 15),
  POS(2703, 15),
  POS(2701, 15)
};

static TAB_NUM t_lambda_960[] = {
  0, // locals
  0, // parameters
  //  text additive_expression
  LET, 2, var_text, var_2692_33_additive_expression, TAIL_CALL,
  POS(2708, 15)
};

static TAB_NUM t_lambda_961[] = {
  0, // locals
  0, // parameters
  //  undefined bit_or_operator
  LET, 2, var_undefined, var_2695_29_bit_or_operator, TAIL_CALL,
  POS(2709, 11)
};

static TAB_NUM t_lambda_962[] = {
  0, // locals
  0, // parameters
  //  undefined additive_expression
  LET, 2, var_undefined, var_2692_33_additive_expression, TAIL_CALL,
  POS(2710, 7)
};

static TAB_NUM t_func_parse_bit_or_operator[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 3, lambda_963, lambda_967, lambda_969, TAIL_CALL,
  POS(2713, 3)
};

static TAB_NUM t_lambda_963[] = {
  3, // locals
  0, // parameters
  // text(1) == ' '
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_964, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_966, TAIL_CALL,
  POS(2716, 9),
  POS(2716, 9),
  POS(2715, 9),
  POS(2714, 7)
};

static TAB_NUM t_lambda_964[] = {
  3, // locals
  0, // parameters
  // text(2) == '|'
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '|'
  var_std__equal, 2, LOCAL(1), chr_124, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_965, 1, LOCAL(3),
  // text(2) == '|'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(2717, 9),
  POS(2717, 9),
  POS(2715, 9),
  POS(2717, 9)
};

static TAB_NUM t_lambda_965[] = {
  2, // locals
  0, // parameters
  // text(3) == ' '
  var_text, 1, num_3, 1, LOCAL(1),
  // text(3) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // text(3) == ' '
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2718, 9),
  POS(2718, 9),
  POS(2718, 9)
};

static TAB_NUM t_lambda_966[] = {
  0, // locals
  0, // parameters
  // range &text 4 -1
  var_range, 3, var_text, num_4, minus_num_1, 1, var_text,
  // parse_bit_or
  func_parse_bit_or, 0, TAIL_CALL,
  POS(2720, 9),
  POS(2721, 9)
};

static TAB_NUM t_lambda_967[] = {
  2, // locals
  0, // parameters
  // text(1) == '|'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '|'
  var_std__equal, 2, LOCAL(1), chr_124, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_968, TAIL_CALL,
  POS(2723, 7),
  POS(2723, 7),
  POS(2722, 7)
};

static TAB_NUM t_lambda_968[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_bit_or
  func_parse_bit_or, 0, TAIL_CALL,
  POS(2725, 9),
  POS(2726, 9)
};

static TAB_NUM t_lambda_969[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_970, TAIL_CALL,
  POS(2727, 7)
};

static TAB_NUM t_lambda_970[] = {
  0, // locals
  0, // parameters
  //  text undefined
  LET, 2, var_text, var_undefined, TAIL_CALL,
  POS(2729, 9)
};

static TAB_NUM t_func_parse_bit_xor[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, LOCAL(1),
  // parse_bit_xor2 funky_types::bit_xor
  func_parse_bit_xor2, 1, var_funky_types__bit_xor, TAIL_CALL,
  POS(2732, 3),
  POS(2733, 3)
};

static TAB_NUM t_func_parse_bit_xor2[] = {
  1, // locals
  -1, // parameters
  var_undefined, var_2737_0_derived_node,
  // $position text
  LET, 1, var_text, 1, var_2739_1_position,
  // parse_additive_expression !text $additive_expression
  func_parse_additive_expression, 0, 2, var_text, var_2740_33_additive_expression,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_42_text_is_defined, lambda_976, TAIL_CALL,
  POS(2739, 3),
  POS(2740, 3),
  POS(2742, 10),
  POS(2741, 3)
};

static TAB_NUM t_lambda_42_text_is_defined[] = {
  1, // locals
  0, // parameters
  // parse_bit_xor_operator !text $bit_xor_operator
  func_parse_bit_xor_operator, 0, 2, var_text, var_2743_30_bit_xor_operator,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_971, lambda_975, TAIL_CALL,
  POS(2743, 7),
  POS(2745, 14),
  POS(2744, 7)
};

static TAB_NUM t_lambda_971[] = {
  2, // locals
  0, // parameters
  // is_defined || bit_xor_operator.is_defined
  var_is_defined, 1, var_2737_0_derived_node, 1, LOCAL(1),
  // is_defined || bit_xor_operator.is_defined
  var_std__or, 2, LOCAL(1), lambda_972, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_973, lambda_974, TAIL_CALL,
  POS(2748, 26),
  POS(2748, 26),
  POS(2747, 11)
};

static TAB_NUM t_lambda_972[] = {
  1, // locals
  0, // parameters
  // is_defined
  var_is_defined, 1, var_2743_30_bit_xor_operator, 1, LOCAL(1),
  // bit_xor_operator.is_defined
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(2748, 57),
  POS(2748, 40)
};

static TAB_NUM t_lambda_973[] = {
  2, // locals
  0, // parameters
  // default_value(derived_node funky_types::bit_xor2)
  var_default_value, 2, var_2737_0_derived_node, var_funky_types__bit_xor2, 1, LOCAL(1),
  // default_value(derived_node funky_types::bit_xor2)
  LET, -4, LOCAL(1), var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_2739_1_position, var_funky__expression_of, var_2740_33_additive_expression, var_funky__operator_of, var_2743_30_bit_xor_operator, LOCAL(2),
  // 
  LET, 2, var_text, LOCAL(2), TAIL_CALL,
  POS(2751, 15),
  POS(2751, 15),
  POS(2749, 15)
};

static TAB_NUM t_lambda_974[] = {
  0, // locals
  0, // parameters
  //  text additive_expression
  LET, 2, var_text, var_2740_33_additive_expression, TAIL_CALL,
  POS(2756, 15)
};

static TAB_NUM t_lambda_975[] = {
  0, // locals
  0, // parameters
  //  undefined bit_xor_operator
  LET, 2, var_undefined, var_2743_30_bit_xor_operator, TAIL_CALL,
  POS(2757, 11)
};

static TAB_NUM t_lambda_976[] = {
  0, // locals
  0, // parameters
  //  undefined additive_expression
  LET, 2, var_undefined, var_2740_33_additive_expression, TAIL_CALL,
  POS(2758, 7)
};

static TAB_NUM t_func_parse_bit_xor_operator[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 3, lambda_977, lambda_981, lambda_983, TAIL_CALL,
  POS(2761, 3)
};

static TAB_NUM t_lambda_977[] = {
  3, // locals
  0, // parameters
  // text(1) == ' '
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_978, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_980, TAIL_CALL,
  POS(2764, 9),
  POS(2764, 9),
  POS(2763, 9),
  POS(2762, 7)
};

static TAB_NUM t_lambda_978[] = {
  3, // locals
  0, // parameters
  // text(2) == '^'
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '^'
  var_std__equal, 2, LOCAL(1), chr_94, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_979, 1, LOCAL(3),
  // text(2) == '^'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(2765, 9),
  POS(2765, 9),
  POS(2763, 9),
  POS(2765, 9)
};

static TAB_NUM t_lambda_979[] = {
  2, // locals
  0, // parameters
  // text(3) == ' '
  var_text, 1, num_3, 1, LOCAL(1),
  // text(3) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // text(3) == ' '
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2766, 9),
  POS(2766, 9),
  POS(2766, 9)
};

static TAB_NUM t_lambda_980[] = {
  0, // locals
  0, // parameters
  // range &text 4 -1
  var_range, 3, var_text, num_4, minus_num_1, 1, var_text,
  // parse_bit_xor
  func_parse_bit_xor, 0, TAIL_CALL,
  POS(2768, 9),
  POS(2769, 9)
};

static TAB_NUM t_lambda_981[] = {
  2, // locals
  0, // parameters
  // text(1) == '^'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '^'
  var_std__equal, 2, LOCAL(1), chr_94, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_982, TAIL_CALL,
  POS(2771, 7),
  POS(2771, 7),
  POS(2770, 7)
};

static TAB_NUM t_lambda_982[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_bit_xor
  func_parse_bit_xor, 0, TAIL_CALL,
  POS(2773, 9),
  POS(2774, 9)
};

static TAB_NUM t_lambda_983[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_984, TAIL_CALL,
  POS(2775, 7)
};

static TAB_NUM t_lambda_984[] = {
  0, // locals
  0, // parameters
  //  text undefined
  LET, 2, var_text, var_undefined, TAIL_CALL,
  POS(2777, 9)
};

static TAB_NUM t_func_parse_tagged_additive_expression[] = {
  1, // locals
  -1, // parameters
  var_undefined, var_2781_0_derived_node,
  // $position text
  LET, 1, var_text, 1, var_2783_1_position,
  // parse_multiplicative_expression !text $multiplicative_expression
  func_parse_multiplicative_expression, 0, 2, var_text, var_2784_39_multiplicative_expression,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_43_text_is_defined, lambda_990, TAIL_CALL,
  POS(2783, 3),
  POS(2784, 3),
  POS(2786, 10),
  POS(2785, 3)
};

static TAB_NUM t_lambda_43_text_is_defined[] = {
  1, // locals
  0, // parameters
  // parse_additive_operator !text $additive_operator
  func_parse_additive_operator, 0, 2, var_text, var_2787_31_additive_operator,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_985, lambda_989, TAIL_CALL,
  POS(2787, 7),
  POS(2789, 14),
  POS(2788, 7)
};

static TAB_NUM t_lambda_985[] = {
  2, // locals
  0, // parameters
  // is_defined || additive_operator.is_defined
  var_is_defined, 1, var_2781_0_derived_node, 1, LOCAL(1),
  // is_defined || additive_operator.is_defined
  var_std__or, 2, LOCAL(1), lambda_986, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_987, lambda_988, TAIL_CALL,
  POS(2792, 26),
  POS(2792, 26),
  POS(2791, 11)
};

static TAB_NUM t_lambda_986[] = {
  1, // locals
  0, // parameters
  // is_defined
  var_is_defined, 1, var_2787_31_additive_operator, 1, LOCAL(1),
  // additive_operator.is_defined
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(2792, 58),
  POS(2792, 40)
};

static TAB_NUM t_lambda_987[] = {
  2, // locals
  0, // parameters
  // default_value(derived_node funky_types::tagged_additive_expression)
  var_default_value, 2, var_2781_0_derived_node, var_funky_types__tagged_additive_expression, 1, LOCAL(1),
  // default_value(derived_node funky_types::tagged_additive_expression)
  LET, -4, LOCAL(1), var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_2783_1_position, var_funky__expression_of, var_2784_39_multiplicative_expression, var_funky__operator_of, var_2787_31_additive_operator, LOCAL(2),
  // 
  LET, 2, var_text, LOCAL(2), TAIL_CALL,
  POS(2795, 15),
  POS(2795, 15),
  POS(2793, 15)
};

static TAB_NUM t_lambda_988[] = {
  0, // locals
  0, // parameters
  //  text multiplicative_expression
  LET, 2, var_text, var_2784_39_multiplicative_expression, TAIL_CALL,
  POS(2800, 15)
};

static TAB_NUM t_lambda_989[] = {
  0, // locals
  0, // parameters
  //  undefined additive_operator
  LET, 2, var_undefined, var_2787_31_additive_operator, TAIL_CALL,
  POS(2801, 11)
};

static TAB_NUM t_lambda_990[] = {
  0, // locals
  0, // parameters
  //  undefined multiplicative_expression
  LET, 2, var_undefined, var_2784_39_multiplicative_expression, TAIL_CALL,
  POS(2802, 7)
};

static TAB_NUM t_func_parse_additive_expression[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_2805_1_position,
  // parse_multiplicative_expression !text $multiplicative_expression
  func_parse_multiplicative_expression, 0, 2, var_text, var_2806_39_multiplicative_expression,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_44_text_is_defined, lambda_995, TAIL_CALL,
  POS(2805, 3),
  POS(2806, 3),
  POS(2808, 10),
  POS(2807, 3)
};

static TAB_NUM t_lambda_44_text_is_defined[] = {
  1, // locals
  0, // parameters
  // parse_additive_operator !text $additive_operator
  func_parse_additive_operator, 0, 2, var_text, var_2809_31_additive_operator,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_991, lambda_994, TAIL_CALL,
  POS(2809, 7),
  POS(2811, 14),
  POS(2810, 7)
};

static TAB_NUM t_lambda_991[] = {
  1, // locals
  0, // parameters
  // is_defined
  var_is_defined, 1, var_2809_31_additive_operator, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_992, lambda_993, TAIL_CALL,
  POS(2814, 31),
  POS(2813, 11)
};

static TAB_NUM t_lambda_992[] = {
  1, // locals
  0, // parameters
  // funky_types::expression
  LET, -4, var_funky_types__expression, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_2805_1_position, var_funky__expression_of, var_2806_39_multiplicative_expression, var_funky__operator_of, var_2809_31_additive_operator, LOCAL(1),
  // 
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(2817, 15),
  POS(2815, 15)
};

static TAB_NUM t_lambda_993[] = {
  0, // locals
  0, // parameters
  //  text multiplicative_expression
  LET, 2, var_text, var_2806_39_multiplicative_expression, TAIL_CALL,
  POS(2822, 15)
};

static TAB_NUM t_lambda_994[] = {
  0, // locals
  0, // parameters
  //  undefined additive_operator
  LET, 2, var_undefined, var_2809_31_additive_operator, TAIL_CALL,
  POS(2823, 11)
};

static TAB_NUM t_lambda_995[] = {
  0, // locals
  0, // parameters
  //  undefined multiplicative_expression
  LET, 2, var_undefined, var_2806_39_multiplicative_expression, TAIL_CALL,
  POS(2824, 7)
};

static TAB_NUM t_func_parse_additive_operator[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 5, lambda_996, lambda_998, lambda_1002, lambda_1004, lambda_1008, TAIL_CALL,
  POS(2827, 3)
};

static TAB_NUM t_lambda_996[] = {
  2, // locals
  0, // parameters
  // text(1) == '+'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '+'
  var_std__equal, 2, LOCAL(1), chr_43, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_997, TAIL_CALL,
  POS(2829, 7),
  POS(2829, 7),
  POS(2828, 7)
};

static TAB_NUM t_lambda_997[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_plus
  func_parse_plus, 0, TAIL_CALL,
  POS(2831, 9),
  POS(2832, 9)
};

static TAB_NUM t_lambda_998[] = {
  3, // locals
  0, // parameters
  // text(1) == ' '
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_999, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_1001, TAIL_CALL,
  POS(2835, 9),
  POS(2835, 9),
  POS(2834, 9),
  POS(2833, 7)
};

static TAB_NUM t_lambda_999[] = {
  3, // locals
  0, // parameters
  // text(2) == '+'
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '+'
  var_std__equal, 2, LOCAL(1), chr_43, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_1000, 1, LOCAL(3),
  // text(2) == '+'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(2836, 9),
  POS(2836, 9),
  POS(2834, 9),
  POS(2836, 9)
};

static TAB_NUM t_lambda_1000[] = {
  2, // locals
  0, // parameters
  // text(3) == ' '
  var_text, 1, num_3, 1, LOCAL(1),
  // text(3) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // text(3) == ' '
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2837, 9),
  POS(2837, 9),
  POS(2837, 9)
};

static TAB_NUM t_lambda_1001[] = {
  0, // locals
  0, // parameters
  // range &text 4 -1
  var_range, 3, var_text, num_4, minus_num_1, 1, var_text,
  // parse_plus
  func_parse_plus, 0, TAIL_CALL,
  POS(2839, 9),
  POS(2840, 9)
};

static TAB_NUM t_lambda_1002[] = {
  2, // locals
  0, // parameters
  // text(1) == '-'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '-'
  var_std__equal, 2, LOCAL(1), chr_45, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_1003, TAIL_CALL,
  POS(2842, 7),
  POS(2842, 7),
  POS(2841, 7)
};

static TAB_NUM t_lambda_1003[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_minus
  func_parse_minus, 0, TAIL_CALL,
  POS(2844, 9),
  POS(2845, 9)
};

static TAB_NUM t_lambda_1004[] = {
  3, // locals
  0, // parameters
  // text(1) == ' '
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_1005, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_1007, TAIL_CALL,
  POS(2848, 9),
  POS(2848, 9),
  POS(2847, 9),
  POS(2846, 7)
};

static TAB_NUM t_lambda_1005[] = {
  3, // locals
  0, // parameters
  // text(2) == '-'
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '-'
  var_std__equal, 2, LOCAL(1), chr_45, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_1006, 1, LOCAL(3),
  // text(2) == '-'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(2849, 9),
  POS(2849, 9),
  POS(2847, 9),
  POS(2849, 9)
};

static TAB_NUM t_lambda_1006[] = {
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

static TAB_NUM t_lambda_1007[] = {
  0, // locals
  0, // parameters
  // range &text 4 -1
  var_range, 3, var_text, num_4, minus_num_1, 1, var_text,
  // parse_minus
  func_parse_minus, 0, TAIL_CALL,
  POS(2852, 9),
  POS(2853, 9)
};

static TAB_NUM t_lambda_1008[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_1009, TAIL_CALL,
  POS(2854, 7)
};

static TAB_NUM t_lambda_1009[] = {
  0, // locals
  0, // parameters
  //  text undefined
  LET, 2, var_text, var_undefined, TAIL_CALL,
  POS(2856, 9)
};

static TAB_NUM t_func_parse_plus[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, LOCAL(1),
  // parse_plus2 funky_types::plus
  func_parse_plus2, 1, var_funky_types__plus, TAIL_CALL,
  POS(2859, 3),
  POS(2860, 3)
};

static TAB_NUM t_func_parse_plus2[] = {
  1, // locals
  -1, // parameters
  var_undefined, var_2864_0_derived_node,
  // $position text
  LET, 1, var_text, 1, var_2866_1_position,
  // parse_multiplicative_expression !text $multiplicative_expression
  func_parse_multiplicative_expression, 0, 2, var_text, var_2867_39_multiplicative_expression,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_45_text_is_defined, lambda_1015, TAIL_CALL,
  POS(2866, 3),
  POS(2867, 3),
  POS(2869, 10),
  POS(2868, 3)
};

static TAB_NUM t_lambda_45_text_is_defined[] = {
  1, // locals
  0, // parameters
  // parse_additive_operator !text $additive_operator
  func_parse_additive_operator, 0, 2, var_text, var_2870_31_additive_operator,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1010, lambda_1014, TAIL_CALL,
  POS(2870, 7),
  POS(2872, 14),
  POS(2871, 7)
};

static TAB_NUM t_lambda_1010[] = {
  2, // locals
  0, // parameters
  // is_defined || additive_operator.is_defined
  var_is_defined, 1, var_2864_0_derived_node, 1, LOCAL(1),
  // is_defined || additive_operator.is_defined
  var_std__or, 2, LOCAL(1), lambda_1011, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_1012, lambda_1013, TAIL_CALL,
  POS(2875, 26),
  POS(2875, 26),
  POS(2874, 11)
};

static TAB_NUM t_lambda_1011[] = {
  1, // locals
  0, // parameters
  // is_defined
  var_is_defined, 1, var_2870_31_additive_operator, 1, LOCAL(1),
  // additive_operator.is_defined
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(2875, 58),
  POS(2875, 40)
};

static TAB_NUM t_lambda_1012[] = {
  2, // locals
  0, // parameters
  // default_value(derived_node funky_types::plus2)
  var_default_value, 2, var_2864_0_derived_node, var_funky_types__plus2, 1, LOCAL(1),
  // default_value(derived_node funky_types::plus2)
  LET, -4, LOCAL(1), var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_2866_1_position, var_funky__expression_of, var_2867_39_multiplicative_expression, var_funky__operator_of, var_2870_31_additive_operator, LOCAL(2),
  // 
  LET, 2, var_text, LOCAL(2), TAIL_CALL,
  POS(2878, 15),
  POS(2878, 15),
  POS(2876, 15)
};

static TAB_NUM t_lambda_1013[] = {
  0, // locals
  0, // parameters
  //  text multiplicative_expression
  LET, 2, var_text, var_2867_39_multiplicative_expression, TAIL_CALL,
  POS(2883, 15)
};

static TAB_NUM t_lambda_1014[] = {
  0, // locals
  0, // parameters
  //  undefined additive_operator
  LET, 2, var_undefined, var_2870_31_additive_operator, TAIL_CALL,
  POS(2884, 11)
};

static TAB_NUM t_lambda_1015[] = {
  0, // locals
  0, // parameters
  //  undefined multiplicative_expression
  LET, 2, var_undefined, var_2867_39_multiplicative_expression, TAIL_CALL,
  POS(2885, 7)
};

static TAB_NUM t_func_parse_minus[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, LOCAL(1),
  // parse_minus2 funky_types::minus
  func_parse_minus2, 1, var_funky_types__minus, TAIL_CALL,
  POS(2888, 3),
  POS(2889, 3)
};

static TAB_NUM t_func_parse_minus2[] = {
  1, // locals
  -1, // parameters
  var_undefined, var_2893_0_derived_node,
  // $position text
  LET, 1, var_text, 1, var_2895_1_position,
  // parse_multiplicative_expression !text $multiplicative_expression
  func_parse_multiplicative_expression, 0, 2, var_text, var_2896_39_multiplicative_expression,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_46_text_is_defined, lambda_1021, TAIL_CALL,
  POS(2895, 3),
  POS(2896, 3),
  POS(2898, 10),
  POS(2897, 3)
};

static TAB_NUM t_lambda_46_text_is_defined[] = {
  1, // locals
  0, // parameters
  // parse_additive_operator !text $additive_operator
  func_parse_additive_operator, 0, 2, var_text, var_2899_31_additive_operator,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1016, lambda_1020, TAIL_CALL,
  POS(2899, 7),
  POS(2901, 14),
  POS(2900, 7)
};

static TAB_NUM t_lambda_1016[] = {
  2, // locals
  0, // parameters
  // is_defined || additive_operator.is_defined
  var_is_defined, 1, var_2893_0_derived_node, 1, LOCAL(1),
  // is_defined || additive_operator.is_defined
  var_std__or, 2, LOCAL(1), lambda_1017, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_1018, lambda_1019, TAIL_CALL,
  POS(2904, 26),
  POS(2904, 26),
  POS(2903, 11)
};

static TAB_NUM t_lambda_1017[] = {
  1, // locals
  0, // parameters
  // is_defined
  var_is_defined, 1, var_2899_31_additive_operator, 1, LOCAL(1),
  // additive_operator.is_defined
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(2904, 58),
  POS(2904, 40)
};

static TAB_NUM t_lambda_1018[] = {
  2, // locals
  0, // parameters
  // default_value(derived_node funky_types::minus2)
  var_default_value, 2, var_2893_0_derived_node, var_funky_types__minus2, 1, LOCAL(1),
  // default_value(derived_node funky_types::minus2)
  LET, -4, LOCAL(1), var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_2895_1_position, var_funky__expression_of, var_2896_39_multiplicative_expression, var_funky__operator_of, var_2899_31_additive_operator, LOCAL(2),
  // 
  LET, 2, var_text, LOCAL(2), TAIL_CALL,
  POS(2907, 15),
  POS(2907, 15),
  POS(2905, 15)
};

static TAB_NUM t_lambda_1019[] = {
  0, // locals
  0, // parameters
  //  text multiplicative_expression
  LET, 2, var_text, var_2896_39_multiplicative_expression, TAIL_CALL,
  POS(2912, 15)
};

static TAB_NUM t_lambda_1020[] = {
  0, // locals
  0, // parameters
  //  undefined additive_operator
  LET, 2, var_undefined, var_2899_31_additive_operator, TAIL_CALL,
  POS(2913, 11)
};

static TAB_NUM t_lambda_1021[] = {
  0, // locals
  0, // parameters
  //  undefined multiplicative_expression
  LET, 2, var_undefined, var_2896_39_multiplicative_expression, TAIL_CALL,
  POS(2914, 7)
};

static TAB_NUM t_func_parse_multiplicative_expression[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_2917_1_position,
  // parse_an_expression !text $an_expression
  func_parse_an_expression, 0, 2, var_text, var_2918_27_an_expression,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_47_text_is_defined, lambda_1026, TAIL_CALL,
  POS(2917, 3),
  POS(2918, 3),
  POS(2920, 10),
  POS(2919, 3)
};

static TAB_NUM t_lambda_47_text_is_defined[] = {
  1, // locals
  0, // parameters
  // parse_multiplicative_operator !text $multiplicative_operator
  func_parse_multiplicative_operator, 0, 2, var_text, var_2921_37_multiplicative_operator,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1022, lambda_1025, TAIL_CALL,
  POS(2921, 7),
  POS(2923, 14),
  POS(2922, 7)
};

static TAB_NUM t_lambda_1022[] = {
  1, // locals
  0, // parameters
  // is_defined
  var_is_defined, 1, var_2921_37_multiplicative_operator, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1023, lambda_1024, TAIL_CALL,
  POS(2926, 37),
  POS(2925, 11)
};

static TAB_NUM t_lambda_1023[] = {
  1, // locals
  0, // parameters
  // funky_types::expression
  LET, -4, var_funky_types__expression, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_2917_1_position, var_funky__expression_of, var_2918_27_an_expression, var_funky__operator_of, var_2921_37_multiplicative_operator, LOCAL(1),
  // 
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(2929, 15),
  POS(2927, 15)
};

static TAB_NUM t_lambda_1024[] = {
  0, // locals
  0, // parameters
  //  text an_expression
  LET, 2, var_text, var_2918_27_an_expression, TAIL_CALL,
  POS(2934, 15)
};

static TAB_NUM t_lambda_1025[] = {
  0, // locals
  0, // parameters
  //  undefined multiplicative_operator
  LET, 2, var_undefined, var_2921_37_multiplicative_operator, TAIL_CALL,
  POS(2935, 11)
};

static TAB_NUM t_lambda_1026[] = {
  0, // locals
  0, // parameters
  //  undefined an_expression
  LET, 2, var_undefined, var_2918_27_an_expression, TAIL_CALL,
  POS(2936, 7)
};

static TAB_NUM t_func_parse_multiplicative_operator[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 5, lambda_1027, lambda_1029, lambda_1033, lambda_1035, lambda_1039, TAIL_CALL,
  POS(2939, 3)
};

static TAB_NUM t_lambda_1027[] = {
  2, // locals
  0, // parameters
  // text(1) == '*'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '*'
  var_std__equal, 2, LOCAL(1), chr_42, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_1028, TAIL_CALL,
  POS(2941, 7),
  POS(2941, 7),
  POS(2940, 7)
};

static TAB_NUM t_lambda_1028[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_times
  func_parse_times, 0, TAIL_CALL,
  POS(2943, 9),
  POS(2944, 9)
};

static TAB_NUM t_lambda_1029[] = {
  3, // locals
  0, // parameters
  // text(1) == ' '
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_1030, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_1032, TAIL_CALL,
  POS(2947, 9),
  POS(2947, 9),
  POS(2946, 9),
  POS(2945, 7)
};

static TAB_NUM t_lambda_1030[] = {
  3, // locals
  0, // parameters
  // text(2) == '*'
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '*'
  var_std__equal, 2, LOCAL(1), chr_42, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_1031, 1, LOCAL(3),
  // text(2) == '*'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(2948, 9),
  POS(2948, 9),
  POS(2946, 9),
  POS(2948, 9)
};

static TAB_NUM t_lambda_1031[] = {
  2, // locals
  0, // parameters
  // text(3) == ' '
  var_text, 1, num_3, 1, LOCAL(1),
  // text(3) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // text(3) == ' '
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2949, 9),
  POS(2949, 9),
  POS(2949, 9)
};

static TAB_NUM t_lambda_1032[] = {
  0, // locals
  0, // parameters
  // range &text 4 -1
  var_range, 3, var_text, num_4, minus_num_1, 1, var_text,
  // parse_times
  func_parse_times, 0, TAIL_CALL,
  POS(2951, 9),
  POS(2952, 9)
};

static TAB_NUM t_lambda_1033[] = {
  2, // locals
  0, // parameters
  // text(1) == '/'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '/'
  var_std__equal, 2, LOCAL(1), chr_47, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_1034, TAIL_CALL,
  POS(2954, 7),
  POS(2954, 7),
  POS(2953, 7)
};

static TAB_NUM t_lambda_1034[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_over
  func_parse_over, 0, TAIL_CALL,
  POS(2956, 9),
  POS(2957, 9)
};

static TAB_NUM t_lambda_1035[] = {
  3, // locals
  0, // parameters
  // text(1) == ' '
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_1036, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_1038, TAIL_CALL,
  POS(2960, 9),
  POS(2960, 9),
  POS(2959, 9),
  POS(2958, 7)
};

static TAB_NUM t_lambda_1036[] = {
  3, // locals
  0, // parameters
  // text(2) == '/'
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '/'
  var_std__equal, 2, LOCAL(1), chr_47, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_1037, 1, LOCAL(3),
  // text(2) == '/'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(2961, 9),
  POS(2961, 9),
  POS(2959, 9),
  POS(2961, 9)
};

static TAB_NUM t_lambda_1037[] = {
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

static TAB_NUM t_lambda_1038[] = {
  0, // locals
  0, // parameters
  // range &text 4 -1
  var_range, 3, var_text, num_4, minus_num_1, 1, var_text,
  // parse_over
  func_parse_over, 0, TAIL_CALL,
  POS(2964, 9),
  POS(2965, 9)
};

static TAB_NUM t_lambda_1039[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_1040, TAIL_CALL,
  POS(2966, 7)
};

static TAB_NUM t_lambda_1040[] = {
  0, // locals
  0, // parameters
  //  text undefined
  LET, 2, var_text, var_undefined, TAIL_CALL,
  POS(2968, 9)
};

static TAB_NUM t_func_parse_times[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, LOCAL(1),
  // parse_times2 funky_types::times
  func_parse_times2, 1, var_funky_types__times, TAIL_CALL,
  POS(2971, 3),
  POS(2972, 3)
};

static TAB_NUM t_func_parse_times2[] = {
  1, // locals
  -1, // parameters
  var_undefined, var_2976_0_derived_node,
  // $position text
  LET, 1, var_text, 1, var_2978_1_position,
  // parse_an_expression !text $an_expression
  func_parse_an_expression, 0, 2, var_text, var_2979_27_an_expression,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_48_text_is_defined, lambda_1046, TAIL_CALL,
  POS(2978, 3),
  POS(2979, 3),
  POS(2981, 10),
  POS(2980, 3)
};

static TAB_NUM t_lambda_48_text_is_defined[] = {
  1, // locals
  0, // parameters
  // parse_multiplicative_operator !text $multiplicative_operator
  func_parse_multiplicative_operator, 0, 2, var_text, var_2982_37_multiplicative_operator,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1041, lambda_1045, TAIL_CALL,
  POS(2982, 7),
  POS(2984, 14),
  POS(2983, 7)
};

static TAB_NUM t_lambda_1041[] = {
  2, // locals
  0, // parameters
  // is_defined || multiplicative_operator.is_defined
  var_is_defined, 1, var_2976_0_derived_node, 1, LOCAL(1),
  // is_defined || multiplicative_operator.is_defined
  var_std__or, 2, LOCAL(1), lambda_1042, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_1043, lambda_1044, TAIL_CALL,
  POS(2987, 26),
  POS(2987, 26),
  POS(2986, 11)
};

static TAB_NUM t_lambda_1042[] = {
  1, // locals
  0, // parameters
  // is_defined
  var_is_defined, 1, var_2982_37_multiplicative_operator, 1, LOCAL(1),
  // multiplicative_operator.is_defined
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(2987, 64),
  POS(2987, 40)
};

static TAB_NUM t_lambda_1043[] = {
  2, // locals
  0, // parameters
  // default_value(derived_node funky_types::times2)
  var_default_value, 2, var_2976_0_derived_node, var_funky_types__times2, 1, LOCAL(1),
  // default_value(derived_node funky_types::times2)
  LET, -4, LOCAL(1), var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_2978_1_position, var_funky__expression_of, var_2979_27_an_expression, var_funky__operator_of, var_2982_37_multiplicative_operator, LOCAL(2),
  // 
  LET, 2, var_text, LOCAL(2), TAIL_CALL,
  POS(2990, 15),
  POS(2990, 15),
  POS(2988, 15)
};

static TAB_NUM t_lambda_1044[] = {
  0, // locals
  0, // parameters
  //  text an_expression
  LET, 2, var_text, var_2979_27_an_expression, TAIL_CALL,
  POS(2995, 15)
};

static TAB_NUM t_lambda_1045[] = {
  0, // locals
  0, // parameters
  //  undefined multiplicative_operator
  LET, 2, var_undefined, var_2982_37_multiplicative_operator, TAIL_CALL,
  POS(2996, 11)
};

static TAB_NUM t_lambda_1046[] = {
  0, // locals
  0, // parameters
  //  undefined an_expression
  LET, 2, var_undefined, var_2979_27_an_expression, TAIL_CALL,
  POS(2997, 7)
};

static TAB_NUM t_func_parse_over[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, LOCAL(1),
  // parse_over2 funky_types::over
  func_parse_over2, 1, var_funky_types__over, TAIL_CALL,
  POS(3000, 3),
  POS(3001, 3)
};

static TAB_NUM t_func_parse_over2[] = {
  1, // locals
  -1, // parameters
  var_undefined, var_3005_0_derived_node,
  // $position text
  LET, 1, var_text, 1, var_3007_1_position,
  // parse_an_expression !text $an_expression
  func_parse_an_expression, 0, 2, var_text, var_3008_27_an_expression,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_49_text_is_defined, lambda_1052, TAIL_CALL,
  POS(3007, 3),
  POS(3008, 3),
  POS(3010, 10),
  POS(3009, 3)
};

static TAB_NUM t_lambda_49_text_is_defined[] = {
  1, // locals
  0, // parameters
  // parse_multiplicative_operator !text $multiplicative_operator
  func_parse_multiplicative_operator, 0, 2, var_text, var_3011_37_multiplicative_operator,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1047, lambda_1051, TAIL_CALL,
  POS(3011, 7),
  POS(3013, 14),
  POS(3012, 7)
};

static TAB_NUM t_lambda_1047[] = {
  2, // locals
  0, // parameters
  // is_defined || multiplicative_operator.is_defined
  var_is_defined, 1, var_3005_0_derived_node, 1, LOCAL(1),
  // is_defined || multiplicative_operator.is_defined
  var_std__or, 2, LOCAL(1), lambda_1048, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_1049, lambda_1050, TAIL_CALL,
  POS(3016, 26),
  POS(3016, 26),
  POS(3015, 11)
};

static TAB_NUM t_lambda_1048[] = {
  1, // locals
  0, // parameters
  // is_defined
  var_is_defined, 1, var_3011_37_multiplicative_operator, 1, LOCAL(1),
  // multiplicative_operator.is_defined
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(3016, 64),
  POS(3016, 40)
};

static TAB_NUM t_lambda_1049[] = {
  2, // locals
  0, // parameters
  // default_value(derived_node funky_types::over2)
  var_default_value, 2, var_3005_0_derived_node, var_funky_types__over2, 1, LOCAL(1),
  // default_value(derived_node funky_types::over2)
  LET, -4, LOCAL(1), var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_3007_1_position, var_funky__expression_of, var_3008_27_an_expression, var_funky__operator_of, var_3011_37_multiplicative_operator, LOCAL(2),
  // 
  LET, 2, var_text, LOCAL(2), TAIL_CALL,
  POS(3019, 15),
  POS(3019, 15),
  POS(3017, 15)
};

static TAB_NUM t_lambda_1050[] = {
  0, // locals
  0, // parameters
  //  text an_expression
  LET, 2, var_text, var_3008_27_an_expression, TAIL_CALL,
  POS(3024, 15)
};

static TAB_NUM t_lambda_1051[] = {
  0, // locals
  0, // parameters
  //  undefined multiplicative_operator
  LET, 2, var_undefined, var_3011_37_multiplicative_operator, TAIL_CALL,
  POS(3025, 11)
};

static TAB_NUM t_lambda_1052[] = {
  0, // locals
  0, // parameters
  //  undefined an_expression
  LET, 2, var_undefined, var_3008_27_an_expression, TAIL_CALL,
  POS(3026, 7)
};

static TAB_NUM t_func_parse_an_expression[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 8, lambda_1053, lambda_1055, lambda_1058, lambda_1060, lambda_1062, lambda_1064, lambda_1069, lambda_1071, TAIL_CALL,
  POS(3029, 3)
};

static TAB_NUM t_lambda_1053[] = {
  2, // locals
  0, // parameters
  // text(1) == '('
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '('
  var_std__equal, 2, LOCAL(1), chr_40, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_1054, TAIL_CALL,
  POS(3031, 7),
  POS(3031, 7),
  POS(3030, 7)
};

static TAB_NUM t_lambda_1054[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_parenthesed_expression_without_prefix
  func_parse_parenthesed_expression_without_prefix, 0, TAIL_CALL,
  POS(3033, 9),
  POS(3034, 9)
};

static TAB_NUM t_lambda_1055[] = {
  3, // locals
  0, // parameters
  // text(1) == '''
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '''
  var_std__equal, 2, LOCAL(1), chr_39, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_1056, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_1057, TAIL_CALL,
  POS(3037, 9),
  POS(3037, 9),
  POS(3036, 9),
  POS(3035, 7)
};

static TAB_NUM t_lambda_1056[] = {
  2, // locals
  0, // parameters
  // text(2) == '@@'
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '@@'
  var_std__equal, 2, LOCAL(1), chr_64, 1, LOCAL(2),
  // text(2) == '@@'
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(3038, 9),
  POS(3038, 9),
  POS(3038, 9)
};

static TAB_NUM t_lambda_1057[] = {
  0, // locals
  0, // parameters
  // range &text 3 -1
  var_range, 3, var_text, num_3, minus_num_1, 1, var_text,
  // parse_special_character_literal
  func_parse_special_character_literal, 0, TAIL_CALL,
  POS(3040, 9),
  POS(3041, 9)
};

static TAB_NUM t_lambda_1058[] = {
  2, // locals
  0, // parameters
  // text(1) == '''
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '''
  var_std__equal, 2, LOCAL(1), chr_39, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_1059, TAIL_CALL,
  POS(3043, 7),
  POS(3043, 7),
  POS(3042, 7)
};

static TAB_NUM t_lambda_1059[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_character_literal_without_prefix
  func_parse_character_literal_without_prefix, 0, TAIL_CALL,
  POS(3045, 9),
  POS(3046, 9)
};

static TAB_NUM t_lambda_1060[] = {
  2, // locals
  0, // parameters
  // text(1) == '"'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '"'
  var_std__equal, 2, LOCAL(1), chr_34, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_1061, TAIL_CALL,
  POS(3048, 7),
  POS(3048, 7),
  POS(3047, 7)
};

static TAB_NUM t_lambda_1061[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_string_literal_without_prefix
  func_parse_string_literal_without_prefix, 0, TAIL_CALL,
  POS(3050, 9),
  POS(3051, 9)
};

static TAB_NUM t_lambda_1062[] = {
  2, // locals
  0, // parameters
  // text(1) == '-'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '-'
  var_std__equal, 2, LOCAL(1), chr_45, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_1063, TAIL_CALL,
  POS(3053, 7),
  POS(3053, 7),
  POS(3052, 7)
};

static TAB_NUM t_lambda_1063[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_negation_without_prefix
  func_parse_negation_without_prefix, 0, TAIL_CALL,
  POS(3055, 9),
  POS(3056, 9)
};

static TAB_NUM t_lambda_1064[] = {
  5, // locals
  0, // parameters
  // text(1) >= 'a' && text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z')
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) >= 'a' && text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z')
  var_std__less, 2, LOCAL(1), chr_97, 1, LOCAL(2),
  // text(1) >= 'a' && text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) >= 'a' && text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z')
  var_std__and, 2, LOCAL(3), lambda_1065, 1, LOCAL(4),
  // text(1) >= 'a' && text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z')
  var_std__or, 2, LOCAL(4), lambda_1066, 1, LOCAL(5),
  // 
  LET, 2, LOCAL(5), lambda_1068, TAIL_CALL,
  POS(3058, 8),
  POS(3058, 8),
  POS(3058, 8),
  POS(3058, 8),
  POS(3058, 8),
  POS(3057, 7)
};

static TAB_NUM t_lambda_1065[] = {
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
  POS(3058, 26),
  POS(3058, 38),
  POS(3058, 38),
  POS(3058, 26)
};

static TAB_NUM t_lambda_1066[] = {
  4, // locals
  0, // parameters
  // text(1) >= 'A' && text(1) <= 'Z')
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) >= 'A' && text(1) <= 'Z')
  var_std__less, 2, LOCAL(1), chr_65, 1, LOCAL(2),
  // text(1) >= 'A' && text(1) <= 'Z')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) >= 'A' && text(1) <= 'Z')
  var_std__and, 2, LOCAL(3), lambda_1067, 1, LOCAL(4),
  // text(1) >= 'A' && text(1) <= 'Z')
  LET, 1, LOCAL(4), TAIL_CALL,
  POS(3058, 46),
  POS(3058, 46),
  POS(3058, 46),
  POS(3058, 46),
  POS(3058, 46)
};

static TAB_NUM t_lambda_1067[] = {
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
  POS(3058, 64),
  POS(3058, 76),
  POS(3058, 76),
  POS(3058, 64)
};

static TAB_NUM t_lambda_1068[] = {
  0, // locals
  0, // parameters
  // !str text
  LET, 1, var_text, 1, var_str,
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_functor_without_prefix
  func_parse_functor_without_prefix, 0, TAIL_CALL,
  POS(3060, 9),
  POS(3061, 9),
  POS(3062, 9)
};

static TAB_NUM t_lambda_1069[] = {
  2, // locals
  0, // parameters
  // text(1) == '`'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '`'
  var_std__equal, 2, LOCAL(1), chr_96, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_1070, TAIL_CALL,
  POS(3064, 7),
  POS(3064, 7),
  POS(3063, 7)
};

static TAB_NUM t_lambda_1070[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_backquoted_without_prefix
  func_parse_backquoted_without_prefix, 0, TAIL_CALL,
  POS(3066, 9),
  POS(3067, 9)
};

static TAB_NUM t_lambda_1071[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_1072, TAIL_CALL,
  POS(3068, 7)
};

static TAB_NUM t_lambda_1072[] = {
  0, // locals
  0, // parameters
  // !expected "an expression"
  LET, 1, str_an_expression, 1, var_expected,
  // !at text
  LET, 1, var_text, 1, var_at,
  // parse_numeric_literal
  func_parse_numeric_literal, 0, TAIL_CALL,
  POS(3071, 9),
  POS(3072, 9),
  POS(3073, 9)
};

static TAB_NUM t_func_parse_parenthesed_expression_without_prefix[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_3076_1_position,
  // parse_inline_expression !text $inline_expression
  func_parse_inline_expression, 0, 2, var_text, var_3077_31_inline_expression,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_50_text_is_defined, lambda_1077, TAIL_CALL,
  POS(3076, 3),
  POS(3077, 3),
  POS(3079, 10),
  POS(3078, 3)
};

static TAB_NUM t_lambda_50_text_is_defined[] = {
  2, // locals
  0, // parameters
  // text(1) == ')':
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == ')':
  var_std__equal, 2, LOCAL(1), chr_41, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_1073, lambda_1076, TAIL_CALL,
  POS(3081, 9),
  POS(3081, 9),
  POS(3080, 7)
};

static TAB_NUM t_lambda_1073[] = {
  1, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_inline_calls !text $inline_calls
  func_parse_inline_calls, 0, 2, var_text, var_3083_26_inline_calls,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1074, lambda_1075, TAIL_CALL,
  POS(3082, 11),
  POS(3083, 11),
  POS(3085, 18),
  POS(3084, 11)
};

static TAB_NUM t_lambda_1074[] = {
  1, // locals
  0, // parameters
  // funky_types::parenthesed_expression
  LET, -4, var_funky_types__parenthesed_expression, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_3076_1_position, var_funky__expression_of, var_3077_31_inline_expression, var_funky__calls_of, var_3083_26_inline_calls, LOCAL(1),
  // 
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(3088, 15),
  POS(3086, 15)
};

static TAB_NUM t_lambda_1075[] = {
  0, // locals
  0, // parameters
  //  undefined inline_calls
  LET, 2, var_undefined, var_3083_26_inline_calls, TAIL_CALL,
  POS(3093, 15)
};

static TAB_NUM t_lambda_1076[] = {
  0, // locals
  0, // parameters
  // syntax_error "')'"
  func_syntax_error, 1, string_6, TAIL_CALL,
  POS(3095, 11)
};

static TAB_NUM t_lambda_1077[] = {
  0, // locals
  0, // parameters
  //  undefined inline_expression
  LET, 2, var_undefined, var_3077_31_inline_expression, TAIL_CALL,
  POS(3096, 7)
};

static TAB_NUM t_func_parse_inline_expression[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 3, lambda_1078, lambda_1080, lambda_1083, TAIL_CALL,
  POS(3099, 3)
};

static TAB_NUM t_lambda_1078[] = {
  2, // locals
  0, // parameters
  // text(1) == ':'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == ':'
  var_std__equal, 2, LOCAL(1), chr_58, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_1079, TAIL_CALL,
  POS(3101, 7),
  POS(3101, 7),
  POS(3100, 7)
};

static TAB_NUM t_lambda_1079[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_inline_body_without_prefix
  func_parse_inline_body_without_prefix, 0, TAIL_CALL,
  POS(3103, 9),
  POS(3104, 9)
};

static TAB_NUM t_lambda_1080[] = {
  3, // locals
  0, // parameters
  // text(1) == '-'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '-'
  var_std__equal, 2, LOCAL(1), chr_45, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_1081, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_1082, TAIL_CALL,
  POS(3107, 9),
  POS(3107, 9),
  POS(3106, 9),
  POS(3105, 7)
};

static TAB_NUM t_lambda_1081[] = {
  2, // locals
  0, // parameters
  // text(2) == '>'
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '>'
  var_std__equal, 2, LOCAL(1), chr_62, 1, LOCAL(2),
  // text(2) == '>'
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(3108, 9),
  POS(3108, 9),
  POS(3108, 9)
};

static TAB_NUM t_lambda_1082[] = {
  0, // locals
  0, // parameters
  // range &text 3 -1
  var_range, 3, var_text, num_3, minus_num_1, 1, var_text,
  // parse_inline_return_without_prefix
  func_parse_inline_return_without_prefix, 0, TAIL_CALL,
  POS(3110, 9),
  POS(3111, 9)
};

static TAB_NUM t_lambda_1083[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_1084, TAIL_CALL,
  POS(3112, 7)
};

static TAB_NUM t_lambda_1084[] = {
  0, // locals
  0, // parameters
  // !expected "inline expression"
  LET, 1, str_inline_expressio, 1, var_expected,
  // !at text
  LET, 1, var_text, 1, var_at,
  // parse_expression
  func_parse_expression, 0, TAIL_CALL,
  POS(3115, 9),
  POS(3116, 9),
  POS(3117, 9)
};

static TAB_NUM t_func_parse_backquoted_without_prefix[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_3120_1_position,
  // parse_an_expression !text $an_expression
  func_parse_an_expression, 0, 2, var_text, var_3121_27_an_expression,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1085, lambda_1086, TAIL_CALL,
  POS(3120, 3),
  POS(3121, 3),
  POS(3123, 10),
  POS(3122, 3)
};

static TAB_NUM t_lambda_1085[] = {
  1, // locals
  0, // parameters
  // funky_types::backquoted
  LET, -3, var_funky_types__backquoted, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_3120_1_position, var_funky__expression_of, var_3121_27_an_expression, LOCAL(1),
  // 
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(3126, 7),
  POS(3124, 7)
};

static TAB_NUM t_lambda_1086[] = {
  0, // locals
  0, // parameters
  //  undefined an_expression
  LET, 2, var_undefined, var_3121_27_an_expression, TAIL_CALL,
  POS(3130, 7)
};

static TAB_NUM t_func_parse_negation_without_prefix[] = {
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
  // funky_types::negation
  LET, -3, var_funky_types__negation, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_3133_1_position, var_funky__expression_of, var_3134_27_an_expression, LOCAL(1),
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

static TAB_NUM t_func_parse_multiline_operator[] = {
  1, // locals
  -1, // parameters
  var_undefined, var_3147_0_derived_node,
  // $position text
  LET, 1, var_text, 1, var_3149_1_position,
  // parse_trailing_remark !text $trailing_remark
  func_parse_trailing_remark, 0, 2, var_text, var_3150_29_trailing_remark,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_51_text_is_defined, lambda_1094, TAIL_CALL,
  POS(3149, 3),
  POS(3150, 3),
  POS(3152, 10),
  POS(3151, 3)
};

static TAB_NUM t_lambda_51_text_is_defined[] = {
  2, // locals
  0, // parameters
  // text == "@nl;" && subgroups.is_defined:
  var_std__equal, 2, var_text, string_2, 1, LOCAL(1),
  // text == "@nl;" && subgroups.is_defined:
  var_std__and, 2, LOCAL(1), lambda_1089, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_1090, lambda_1093, TAIL_CALL,
  POS(3154, 9),
  POS(3154, 9),
  POS(3153, 7)
};

static TAB_NUM t_lambda_1089[] = {
  1, // locals
  0, // parameters
  // is_defined:
  var_is_defined, 1, var_subgroups, 1, LOCAL(1),
  // subgroups.is_defined:
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(3154, 37),
  POS(3154, 27)
};

static TAB_NUM t_lambda_1090[] = {
  1, // locals
  0, // parameters
  // $line_start_arguments parse_groups(funky::parse_line_start_arguments_group)
  func_parse_groups, 1, var_funky__parse_line_start_arguments_group, 1, var_3155_1_line_start_arguments,
  // $error find_first(line_start_arguments is_an_error)
  var_find_first, 2, var_3155_1_line_start_arguments, var_is_an_error, 1, var_3156_1_error,
  // is_an_error
  var_is_an_error, 1, var_3156_1_error, 1, LOCAL(1),
  // if error.is_an_error
  var_if, 3, LOCAL(1), lambda_1091, lambda_1092, TAIL_CALL,
  POS(3155, 11),
  POS(3156, 11),
  POS(3157, 20),
  POS(3157, 11)
};

static TAB_NUM t_lambda_1091[] = {
  0, // locals
  0, // parameters
  //  undefined error
  LET, 2, var_undefined, var_3156_1_error, TAIL_CALL,
  POS(3158, 15)
};

static TAB_NUM t_lambda_1092[] = {
  2, // locals
  0, // parameters
  // default_value(derived_node funky_types::multiline_operator)
  var_default_value, 2, var_3147_0_derived_node, var_funky_types__multiline_operator, 1, LOCAL(1),
  // default_value(derived_node funky_types::multiline_operator)
  LET, -4, LOCAL(1), var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_3149_1_position, var_funky__remark_of, var_3150_29_trailing_remark, var_funky__arguments_of, var_3155_1_line_start_arguments, LOCAL(2),
  // 
  LET, 2, string_1, LOCAL(2), TAIL_CALL,
  POS(3161, 15),
  POS(3161, 15),
  POS(3159, 15)
};

static TAB_NUM t_lambda_1093[] = {
  0, // locals
  0, // parameters
  // syntax_error "valid input characters or line end"
  func_syntax_error, 1, str_valid_input_char, TAIL_CALL,
  POS(3167, 11)
};

static TAB_NUM t_lambda_1094[] = {
  0, // locals
  0, // parameters
  //  undefined trailing_remark
  LET, 2, var_undefined, var_3150_29_trailing_remark, TAIL_CALL,
  POS(3168, 7)
};

static TAB_NUM t_func_parse_multiline_plus_without_prefix[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, LOCAL(1),
  // parse_multiline_operator funky_types::multiline_plus
  func_parse_multiline_operator, 1, var_funky_types__multiline_plus, TAIL_CALL,
  POS(3171, 3),
  POS(3172, 3)
};

static TAB_NUM t_func_parse_multiline_minus_without_prefix[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_3175_1_position,
  // parse_dummy_remark !text $dummy_remark
  func_parse_dummy_remark, 0, 2, var_text, var_3176_26_dummy_remark,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_52_text_is_defined, lambda_1100, TAIL_CALL,
  POS(3175, 3),
  POS(3176, 3),
  POS(3178, 10),
  POS(3177, 3)
};

static TAB_NUM t_lambda_52_text_is_defined[] = {
  2, // locals
  0, // parameters
  // text == "@nl;" && subgroups.is_defined:
  var_std__equal, 2, var_text, string_2, 1, LOCAL(1),
  // text == "@nl;" && subgroups.is_defined:
  var_std__and, 2, LOCAL(1), lambda_1095, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_1096, lambda_1099, TAIL_CALL,
  POS(3180, 9),
  POS(3180, 9),
  POS(3179, 7)
};

static TAB_NUM t_lambda_1095[] = {
  1, // locals
  0, // parameters
  // is_defined:
  var_is_defined, 1, var_subgroups, 1, LOCAL(1),
  // subgroups.is_defined:
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(3180, 37),
  POS(3180, 27)
};

static TAB_NUM t_lambda_1096[] = {
  1, // locals
  0, // parameters
  // $line_start_arguments parse_groups(funky::parse_line_start_arguments_group)
  func_parse_groups, 1, var_funky__parse_line_start_arguments_group, 1, var_3181_1_line_start_arguments,
  // $error find_first(line_start_arguments is_an_error)
  var_find_first, 2, var_3181_1_line_start_arguments, var_is_an_error, 1, var_3182_1_error,
  // is_an_error
  var_is_an_error, 1, var_3182_1_error, 1, LOCAL(1),
  // if error.is_an_error
  var_if, 3, LOCAL(1), lambda_1097, lambda_1098, TAIL_CALL,
  POS(3181, 11),
  POS(3182, 11),
  POS(3183, 20),
  POS(3183, 11)
};

static TAB_NUM t_lambda_1097[] = {
  0, // locals
  0, // parameters
  //  undefined error
  LET, 2, var_undefined, var_3182_1_error, TAIL_CALL,
  POS(3184, 15)
};

static TAB_NUM t_lambda_1098[] = {
  1, // locals
  0, // parameters
  // funky_types::multiline_minus
  LET, -4, var_funky_types__multiline_minus, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_3175_1_position, var_funky__remark_of, var_3176_26_dummy_remark, var_funky__arguments_of, var_3181_1_line_start_arguments, LOCAL(1),
  // 
  LET, 2, string_1, LOCAL(1), TAIL_CALL,
  POS(3187, 15),
  POS(3185, 15)
};

static TAB_NUM t_lambda_1099[] = {
  0, // locals
  0, // parameters
  // syntax_error "valid input characters or line end"
  func_syntax_error, 1, str_valid_input_char, TAIL_CALL,
  POS(3193, 11)
};

static TAB_NUM t_lambda_1100[] = {
  0, // locals
  0, // parameters
  //  undefined dummy_remark
  LET, 2, var_undefined, var_3176_26_dummy_remark, TAIL_CALL,
  POS(3194, 7)
};

static TAB_NUM t_func_parse_multiline_minus_with_remark_without_prefix[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_3197_1_position,
  // parse_remark !text $remark
  func_parse_remark, 0, 2, var_text, var_3198_20_remark,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_53_text_is_defined, lambda_1106, TAIL_CALL,
  POS(3197, 3),
  POS(3198, 3),
  POS(3200, 10),
  POS(3199, 3)
};

static TAB_NUM t_lambda_53_text_is_defined[] = {
  2, // locals
  0, // parameters
  // text == "@nl;" && subgroups.is_defined:
  var_std__equal, 2, var_text, string_2, 1, LOCAL(1),
  // text == "@nl;" && subgroups.is_defined:
  var_std__and, 2, LOCAL(1), lambda_1101, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_1102, lambda_1105, TAIL_CALL,
  POS(3202, 9),
  POS(3202, 9),
  POS(3201, 7)
};

static TAB_NUM t_lambda_1101[] = {
  1, // locals
  0, // parameters
  // is_defined:
  var_is_defined, 1, var_subgroups, 1, LOCAL(1),
  // subgroups.is_defined:
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(3202, 37),
  POS(3202, 27)
};

static TAB_NUM t_lambda_1102[] = {
  1, // locals
  0, // parameters
  // $line_start_arguments parse_groups(funky::parse_line_start_arguments_group)
  func_parse_groups, 1, var_funky__parse_line_start_arguments_group, 1, var_3203_1_line_start_arguments,
  // $error find_first(line_start_arguments is_an_error)
  var_find_first, 2, var_3203_1_line_start_arguments, var_is_an_error, 1, var_3204_1_error,
  // is_an_error
  var_is_an_error, 1, var_3204_1_error, 1, LOCAL(1),
  // if error.is_an_error
  var_if, 3, LOCAL(1), lambda_1103, lambda_1104, TAIL_CALL,
  POS(3203, 11),
  POS(3204, 11),
  POS(3205, 20),
  POS(3205, 11)
};

static TAB_NUM t_lambda_1103[] = {
  0, // locals
  0, // parameters
  //  undefined error
  LET, 2, var_undefined, var_3204_1_error, TAIL_CALL,
  POS(3206, 15)
};

static TAB_NUM t_lambda_1104[] = {
  1, // locals
  0, // parameters
  // funky_types::multiline_minus_with_remark
  LET, -4, var_funky_types__multiline_minus_with_remark, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_3197_1_position, var_funky__remark_of, var_3198_20_remark, var_funky__arguments_of, var_3203_1_line_start_arguments, LOCAL(1),
  // 
  LET, 2, string_1, LOCAL(1), TAIL_CALL,
  POS(3209, 15),
  POS(3207, 15)
};

static TAB_NUM t_lambda_1105[] = {
  0, // locals
  0, // parameters
  // syntax_error "valid input characters or line end"
  func_syntax_error, 1, str_valid_input_char, TAIL_CALL,
  POS(3215, 11)
};

static TAB_NUM t_lambda_1106[] = {
  0, // locals
  0, // parameters
  //  undefined remark
  LET, 2, var_undefined, var_3198_20_remark, TAIL_CALL,
  POS(3216, 7)
};

static TAB_NUM t_func_parse_multiline_times_without_prefix[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, LOCAL(1),
  // parse_multiline_operator funky_types::multiline_times
  func_parse_multiline_operator, 1, var_funky_types__multiline_times, TAIL_CALL,
  POS(3219, 3),
  POS(3220, 3)
};

static TAB_NUM t_func_parse_multiline_over_without_prefix[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_3223_1_position,
  // $line_start_arguments parse_groups(funky::parse_line_start_arguments_group)
  func_parse_groups, 1, var_funky__parse_line_start_arguments_group, 1, var_3224_1_line_start_arguments,
  // $error find_first(line_start_arguments is_an_error)
  var_find_first, 2, var_3224_1_line_start_arguments, var_is_an_error, 1, var_3225_1_error,
  // is_an_error
  var_is_an_error, 1, var_3225_1_error, 1, LOCAL(1),
  // if error.is_an_error
  var_if, 3, LOCAL(1), lambda_1107, lambda_1108, TAIL_CALL,
  POS(3223, 3),
  POS(3224, 3),
  POS(3225, 3),
  POS(3226, 12),
  POS(3226, 3)
};

static TAB_NUM t_lambda_1107[] = {
  0, // locals
  0, // parameters
  //  undefined error
  LET, 2, var_undefined, var_3225_1_error, TAIL_CALL,
  POS(3227, 7)
};

static TAB_NUM t_lambda_1108[] = {
  1, // locals
  0, // parameters
  // funky_types::multiline_over
  LET, -3, var_funky_types__multiline_over, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_3223_1_position, var_funky__arguments_of, var_3224_1_line_start_arguments, LOCAL(1),
  // 
  LET, 2, string_1, LOCAL(1), TAIL_CALL,
  POS(3230, 7),
  POS(3228, 7)
};

static TAB_NUM t_func_parse_multiline_over_with_remark_without_prefix[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_3236_1_position,
  // parse_remark !text $remark
  func_parse_remark, 0, 2, var_text, var_3237_20_remark,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_54_text_is_defined, lambda_1114, TAIL_CALL,
  POS(3236, 3),
  POS(3237, 3),
  POS(3239, 10),
  POS(3238, 3)
};

static TAB_NUM t_lambda_54_text_is_defined[] = {
  2, // locals
  0, // parameters
  // text == "@nl;" && subgroups.is_defined:
  var_std__equal, 2, var_text, string_2, 1, LOCAL(1),
  // text == "@nl;" && subgroups.is_defined:
  var_std__and, 2, LOCAL(1), lambda_1109, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_1110, lambda_1113, TAIL_CALL,
  POS(3241, 9),
  POS(3241, 9),
  POS(3240, 7)
};

static TAB_NUM t_lambda_1109[] = {
  1, // locals
  0, // parameters
  // is_defined:
  var_is_defined, 1, var_subgroups, 1, LOCAL(1),
  // subgroups.is_defined:
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(3241, 37),
  POS(3241, 27)
};

static TAB_NUM t_lambda_1110[] = {
  1, // locals
  0, // parameters
  // $line_start_arguments parse_groups(funky::parse_line_start_arguments_group)
  func_parse_groups, 1, var_funky__parse_line_start_arguments_group, 1, var_3242_1_line_start_arguments,
  // $error find_first(line_start_arguments is_an_error)
  var_find_first, 2, var_3242_1_line_start_arguments, var_is_an_error, 1, var_3243_1_error,
  // is_an_error
  var_is_an_error, 1, var_3243_1_error, 1, LOCAL(1),
  // if error.is_an_error
  var_if, 3, LOCAL(1), lambda_1111, lambda_1112, TAIL_CALL,
  POS(3242, 11),
  POS(3243, 11),
  POS(3244, 20),
  POS(3244, 11)
};

static TAB_NUM t_lambda_1111[] = {
  0, // locals
  0, // parameters
  //  undefined error
  LET, 2, var_undefined, var_3243_1_error, TAIL_CALL,
  POS(3245, 15)
};

static TAB_NUM t_lambda_1112[] = {
  1, // locals
  0, // parameters
  // funky_types::multiline_over_with_remark
  LET, -4, var_funky_types__multiline_over_with_remark, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_3236_1_position, var_funky__remark_of, var_3237_20_remark, var_funky__arguments_of, var_3242_1_line_start_arguments, LOCAL(1),
  // 
  LET, 2, string_1, LOCAL(1), TAIL_CALL,
  POS(3248, 15),
  POS(3246, 15)
};

static TAB_NUM t_lambda_1113[] = {
  0, // locals
  0, // parameters
  // syntax_error "valid input characters or line end"
  func_syntax_error, 1, str_valid_input_char, TAIL_CALL,
  POS(3254, 11)
};

static TAB_NUM t_lambda_1114[] = {
  0, // locals
  0, // parameters
  //  undefined remark
  LET, 2, var_undefined, var_3237_20_remark, TAIL_CALL,
  POS(3255, 7)
};

static TAB_NUM t_func_parse_multiline_shift_left_without_prefix[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, LOCAL(1),
  // parse_multiline_operator funky_types::multiline_shift_left
  func_parse_multiline_operator, 1, var_funky_types__multiline_shift_left, TAIL_CALL,
  POS(3258, 3),
  POS(3259, 3)
};

static TAB_NUM t_func_parse_multiline_shift_right_without_prefix[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, LOCAL(1),
  // parse_multiline_operator funky_types::multiline_shift_right
  func_parse_multiline_operator, 1, var_funky_types__multiline_shift_right, TAIL_CALL,
  POS(3262, 3),
  POS(3263, 3)
};

static TAB_NUM t_func_parse_multiline_equal_without_prefix[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, LOCAL(1),
  // parse_multiline_operator funky_types::multiline_equal
  func_parse_multiline_operator, 1, var_funky_types__multiline_equal, TAIL_CALL,
  POS(3266, 3),
  POS(3267, 3)
};

static TAB_NUM t_func_parse_multiline_not_equal_without_prefix[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, LOCAL(1),
  // parse_multiline_operator funky_types::multiline_not_equal
  func_parse_multiline_operator, 1, var_funky_types__multiline_not_equal, TAIL_CALL,
  POS(3270, 3),
  POS(3271, 3)
};

static TAB_NUM t_func_parse_multiline_less_equal_without_prefix[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, LOCAL(1),
  // parse_multiline_operator funky_types::multiline_less_equal
  func_parse_multiline_operator, 1, var_funky_types__multiline_less_equal, TAIL_CALL,
  POS(3274, 3),
  POS(3275, 3)
};

static TAB_NUM t_func_parse_multiline_less_than_without_prefix[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, LOCAL(1),
  // parse_multiline_operator funky_types::multiline_less_than
  func_parse_multiline_operator, 1, var_funky_types__multiline_less_than, TAIL_CALL,
  POS(3278, 3),
  POS(3279, 3)
};

static TAB_NUM t_func_parse_multiline_greater_equal_without_prefix[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, LOCAL(1),
  // parse_multiline_operator funky_types::multiline_greater_equal
  func_parse_multiline_operator, 1, var_funky_types__multiline_greater_equal, TAIL_CALL,
  POS(3282, 3),
  POS(3283, 3)
};

static TAB_NUM t_func_parse_multiline_greater_than_without_prefix[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, LOCAL(1),
  // parse_multiline_operator funky_types::multiline_greater_than
  func_parse_multiline_operator, 1, var_funky_types__multiline_greater_than, TAIL_CALL,
  POS(3286, 3),
  POS(3287, 3)
};

static TAB_NUM t_func_parse_multiline_and_without_prefix[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, LOCAL(1),
  // parse_multiline_operator funky_types::multiline_and
  func_parse_multiline_operator, 1, var_funky_types__multiline_and, TAIL_CALL,
  POS(3290, 3),
  POS(3291, 3)
};

static TAB_NUM t_func_parse_multiline_or_without_prefix[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, LOCAL(1),
  // parse_multiline_operator funky_types::multiline_or
  func_parse_multiline_operator, 1, var_funky_types__multiline_or, TAIL_CALL,
  POS(3294, 3),
  POS(3295, 3)
};

static TAB_NUM t_func_parse_multiline_bit_and_without_prefix[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_3298_1_position,
  // parse_dummy_remark !text $dummy_remark
  func_parse_dummy_remark, 0, 2, var_text, var_3299_26_dummy_remark,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_55_text_is_defined, lambda_1120, TAIL_CALL,
  POS(3298, 3),
  POS(3299, 3),
  POS(3301, 10),
  POS(3300, 3)
};

static TAB_NUM t_lambda_55_text_is_defined[] = {
  2, // locals
  0, // parameters
  // text == "@nl;" && subgroups.is_defined:
  var_std__equal, 2, var_text, string_2, 1, LOCAL(1),
  // text == "@nl;" && subgroups.is_defined:
  var_std__and, 2, LOCAL(1), lambda_1115, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_1116, lambda_1119, TAIL_CALL,
  POS(3303, 9),
  POS(3303, 9),
  POS(3302, 7)
};

static TAB_NUM t_lambda_1115[] = {
  1, // locals
  0, // parameters
  // is_defined:
  var_is_defined, 1, var_subgroups, 1, LOCAL(1),
  // subgroups.is_defined:
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(3303, 37),
  POS(3303, 27)
};

static TAB_NUM t_lambda_1116[] = {
  1, // locals
  0, // parameters
  // $line_start_arguments parse_groups(funky::parse_line_start_arguments_group)
  func_parse_groups, 1, var_funky__parse_line_start_arguments_group, 1, var_3304_1_line_start_arguments,
  // $error find_first(line_start_arguments is_an_error)
  var_find_first, 2, var_3304_1_line_start_arguments, var_is_an_error, 1, var_3305_1_error,
  // is_an_error
  var_is_an_error, 1, var_3305_1_error, 1, LOCAL(1),
  // if error.is_an_error
  var_if, 3, LOCAL(1), lambda_1117, lambda_1118, TAIL_CALL,
  POS(3304, 11),
  POS(3305, 11),
  POS(3306, 20),
  POS(3306, 11)
};

static TAB_NUM t_lambda_1117[] = {
  0, // locals
  0, // parameters
  //  undefined error
  LET, 2, var_undefined, var_3305_1_error, TAIL_CALL,
  POS(3307, 15)
};

static TAB_NUM t_lambda_1118[] = {
  1, // locals
  0, // parameters
  // funky_types::multiline_bit_and
  LET, -4, var_funky_types__multiline_bit_and, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_3298_1_position, var_funky__remark_of, var_3299_26_dummy_remark, var_funky__arguments_of, var_3304_1_line_start_arguments, LOCAL(1),
  // 
  LET, 2, string_1, LOCAL(1), TAIL_CALL,
  POS(3310, 15),
  POS(3308, 15)
};

static TAB_NUM t_lambda_1119[] = {
  0, // locals
  0, // parameters
  // syntax_error "valid input characters or line end"
  func_syntax_error, 1, str_valid_input_char, TAIL_CALL,
  POS(3316, 11)
};

static TAB_NUM t_lambda_1120[] = {
  0, // locals
  0, // parameters
  //  undefined dummy_remark
  LET, 2, var_undefined, var_3299_26_dummy_remark, TAIL_CALL,
  POS(3317, 7)
};

static TAB_NUM t_func_parse_multiline_bit_and_with_remark_without_prefix[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_3320_1_position,
  // parse_remark !text $remark
  func_parse_remark, 0, 2, var_text, var_3321_20_remark,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_56_text_is_defined, lambda_1126, TAIL_CALL,
  POS(3320, 3),
  POS(3321, 3),
  POS(3323, 10),
  POS(3322, 3)
};

static TAB_NUM t_lambda_56_text_is_defined[] = {
  2, // locals
  0, // parameters
  // text == "@nl;" && subgroups.is_defined:
  var_std__equal, 2, var_text, string_2, 1, LOCAL(1),
  // text == "@nl;" && subgroups.is_defined:
  var_std__and, 2, LOCAL(1), lambda_1121, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_1122, lambda_1125, TAIL_CALL,
  POS(3325, 9),
  POS(3325, 9),
  POS(3324, 7)
};

static TAB_NUM t_lambda_1121[] = {
  1, // locals
  0, // parameters
  // is_defined:
  var_is_defined, 1, var_subgroups, 1, LOCAL(1),
  // subgroups.is_defined:
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(3325, 37),
  POS(3325, 27)
};

static TAB_NUM t_lambda_1122[] = {
  1, // locals
  0, // parameters
  // $line_start_arguments parse_groups(funky::parse_line_start_arguments_group)
  func_parse_groups, 1, var_funky__parse_line_start_arguments_group, 1, var_3326_1_line_start_arguments,
  // $error find_first(line_start_arguments is_an_error)
  var_find_first, 2, var_3326_1_line_start_arguments, var_is_an_error, 1, var_3327_1_error,
  // is_an_error
  var_is_an_error, 1, var_3327_1_error, 1, LOCAL(1),
  // if error.is_an_error
  var_if, 3, LOCAL(1), lambda_1123, lambda_1124, TAIL_CALL,
  POS(3326, 11),
  POS(3327, 11),
  POS(3328, 20),
  POS(3328, 11)
};

static TAB_NUM t_lambda_1123[] = {
  0, // locals
  0, // parameters
  //  undefined error
  LET, 2, var_undefined, var_3327_1_error, TAIL_CALL,
  POS(3329, 15)
};

static TAB_NUM t_lambda_1124[] = {
  1, // locals
  0, // parameters
  // funky_types::multiline_bit_and_with_remark
  LET, -4, var_funky_types__multiline_bit_and_with_remark, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_3320_1_position, var_funky__remark_of, var_3321_20_remark, var_funky__arguments_of, var_3326_1_line_start_arguments, LOCAL(1),
  // 
  LET, 2, string_1, LOCAL(1), TAIL_CALL,
  POS(3332, 15),
  POS(3330, 15)
};

static TAB_NUM t_lambda_1125[] = {
  0, // locals
  0, // parameters
  // syntax_error "valid input characters or line end"
  func_syntax_error, 1, str_valid_input_char, TAIL_CALL,
  POS(3338, 11)
};

static TAB_NUM t_lambda_1126[] = {
  0, // locals
  0, // parameters
  //  undefined remark
  LET, 2, var_undefined, var_3321_20_remark, TAIL_CALL,
  POS(3339, 7)
};

static TAB_NUM t_func_parse_multiline_bit_or_without_prefix[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, LOCAL(1),
  // parse_multiline_operator funky_types::multiline_bit_or
  func_parse_multiline_operator, 1, var_funky_types__multiline_bit_or, TAIL_CALL,
  POS(3342, 3),
  POS(3343, 3)
};

static TAB_NUM t_func_parse_multiline_bit_xor_without_prefix[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, LOCAL(1),
  // parse_multiline_operator funky_types::multiline_bit_xor
  func_parse_multiline_operator, 1, var_funky_types__multiline_bit_xor, TAIL_CALL,
  POS(3346, 3),
  POS(3347, 3)
};

static TAB_NUM t_func_parse_multiline_assign_without_prefix[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, LOCAL(1),
  // parse_multiline_operator funky_types::multiline_assign
  func_parse_multiline_operator, 1, var_funky_types__multiline_assign, TAIL_CALL,
  POS(3350, 3),
  POS(3351, 3)
};

static TAB_NUM t_func_parse_inline_arguments[] = {
  2, // locals
  0, // parameters
  // cond $rest $expr
  var_cond, 5, lambda_1127, lambda_1129, lambda_1131, lambda_1134, lambda_1136, 2, LOCAL(2), var_3354_12_expr,
  // cond
  var_cond, 3, lambda_1138, lambda_1140, lambda_1142, 1, LOCAL(1),
  // ->
  LET, 2, LOCAL(2), LOCAL(1), TAIL_CALL,
  POS(3354, 3),
  POS(3385, 5),
  POS(3383, 3)
};

static TAB_NUM t_lambda_1127[] = {
  2, // locals
  0, // parameters
  // text(1) == '.'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '.'
  var_std__equal, 2, LOCAL(1), chr_46, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_1128, TAIL_CALL,
  POS(3356, 7),
  POS(3356, 7),
  POS(3355, 7)
};

static TAB_NUM t_lambda_1128[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_inline_attribute_value_pair_without_prefix
  func_parse_inline_attribute_value_pair_without_prefix, 0, TAIL_CALL,
  POS(3358, 9),
  POS(3359, 9)
};

static TAB_NUM t_lambda_1129[] = {
  2, // locals
  0, // parameters
  // text(1) == '/'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '/'
  var_std__equal, 2, LOCAL(1), chr_47, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_1130, TAIL_CALL,
  POS(3361, 7),
  POS(3361, 7),
  POS(3360, 7)
};

static TAB_NUM t_lambda_1130[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_inline_method_value_pair_without_prefix
  func_parse_inline_method_value_pair_without_prefix, 0, TAIL_CALL,
  POS(3363, 9),
  POS(3364, 9)
};

static TAB_NUM t_lambda_1131[] = {
  3, // locals
  0, // parameters
  // text(1) == '-'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '-'
  var_std__equal, 2, LOCAL(1), chr_45, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_1132, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_1133, TAIL_CALL,
  POS(3367, 9),
  POS(3367, 9),
  POS(3366, 9),
  POS(3365, 7)
};

static TAB_NUM t_lambda_1132[] = {
  2, // locals
  0, // parameters
  // text(2) == '>'
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '>'
  var_std__equal, 2, LOCAL(1), chr_62, 1, LOCAL(2),
  // text(2) == '>'
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(3368, 9),
  POS(3368, 9),
  POS(3368, 9)
};

static TAB_NUM t_lambda_1133[] = {
  0, // locals
  0, // parameters
  // range &text 3 -1
  var_range, 3, var_text, num_3, minus_num_1, 1, var_text,
  // parse_inline_return_without_prefix
  func_parse_inline_return_without_prefix, 0, TAIL_CALL,
  POS(3370, 9),
  POS(3371, 9)
};

static TAB_NUM t_lambda_1134[] = {
  2, // locals
  0, // parameters
  // text(1) == ':'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == ':'
  var_std__equal, 2, LOCAL(1), chr_58, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_1135, TAIL_CALL,
  POS(3373, 7),
  POS(3373, 7),
  POS(3372, 7)
};

static TAB_NUM t_lambda_1135[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_inline_body_without_prefix
  func_parse_inline_body_without_prefix, 0, TAIL_CALL,
  POS(3375, 9),
  POS(3376, 9)
};

static TAB_NUM t_lambda_1136[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_1137, TAIL_CALL,
  POS(3377, 7)
};

static TAB_NUM t_lambda_1137[] = {
  0, // locals
  0, // parameters
  // !expected "inline arguments"
  LET, 1, str_inline_arguments, 1, var_expected,
  // !at text
  LET, 1, var_text, 1, var_at,
  // parse_expression_and_inline_arguments
  func_parse_expression_and_inline_arguments, 0, TAIL_CALL,
  POS(3380, 9),
  POS(3381, 9),
  POS(3382, 9)
};

static TAB_NUM t_lambda_1138[] = {
  1, // locals
  0, // parameters
  // is_undefined -> empty_list
  var_is_undefined, 1, var_3354_12_expr, 1, LOCAL(1),
  //  expr.is_undefined -> empty_list
  LET, 2, LOCAL(1), lambda_1139, TAIL_CALL,
  POS(3386, 15),
  POS(3386, 9)
};

static TAB_NUM t_lambda_1139[] = {
  0, // locals
  0, // parameters
  //  empty_list
  LET, 1, var_empty_list, TAIL_CALL,
  POS(3386, 30)
};

static TAB_NUM t_lambda_1140[] = {
  1, // locals
  0, // parameters
  // is_a_list -> expr
  var_is_a_list, 1, var_3354_12_expr, 1, LOCAL(1),
  //  expr.is_a_list -> expr
  LET, 2, LOCAL(1), lambda_1141, TAIL_CALL,
  POS(3387, 15),
  POS(3387, 9)
};

static TAB_NUM t_lambda_1141[] = {
  0, // locals
  0, // parameters
  //  expr
  LET, 1, var_3354_12_expr, TAIL_CALL,
  POS(3387, 27)
};

static TAB_NUM t_lambda_1142[] = {
  0, // locals
  0, // parameters
  //  true -> list(expr)
  LET, 2, var_true, lambda_1143, TAIL_CALL,
  POS(3388, 9)
};

static TAB_NUM t_lambda_1143[] = {
  1, // locals
  0, // parameters
  // list(expr)
  var_list, 1, var_3354_12_expr, 1, LOCAL(1),
  //  list(expr)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(3388, 18),
  POS(3388, 17)
};

static TAB_NUM t_func_parse_inline_attribute_value_pair_without_prefix[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_3391_1_position,
  // !str text
  LET, 1, var_text, 1, var_str,
  // parse_identifier !text $identifier
  func_parse_identifier, 0, 2, var_text, var_3393_24_identifier,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_57_text_is_defined, lambda_1148, TAIL_CALL,
  POS(3391, 3),
  POS(3392, 3),
  POS(3393, 3),
  POS(3395, 10),
  POS(3394, 3)
};

static TAB_NUM t_lambda_57_text_is_defined[] = {
  2, // locals
  0, // parameters
  // text(1) == ' ':
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == ' ':
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_1144, lambda_1147, TAIL_CALL,
  POS(3397, 9),
  POS(3397, 9),
  POS(3396, 7)
};

static TAB_NUM t_lambda_1144[] = {
  1, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_expression !text $expression
  func_parse_expression, 0, 2, var_text, var_3399_24_expression,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1145, lambda_1146, TAIL_CALL,
  POS(3398, 11),
  POS(3399, 11),
  POS(3401, 18),
  POS(3400, 11)
};

static TAB_NUM t_lambda_1145[] = {
  1, // locals
  0, // parameters
  // funky_types::inline_attribute_value_pair
  LET, -4, var_funky_types__inline_attribute_value_pair, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_3391_1_position, var_funky__identifier_of, var_3393_24_identifier, var_funky__expression_of, var_3399_24_expression, LOCAL(1),
  // 
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(3404, 15),
  POS(3402, 15)
};

static TAB_NUM t_lambda_1146[] = {
  0, // locals
  0, // parameters
  //  undefined expression
  LET, 2, var_undefined, var_3399_24_expression, TAIL_CALL,
  POS(3409, 15)
};

static TAB_NUM t_lambda_1147[] = {
  0, // locals
  0, // parameters
  // syntax_error "space character"
  func_syntax_error, 1, str_space_character, TAIL_CALL,
  POS(3411, 11)
};

static TAB_NUM t_lambda_1148[] = {
  0, // locals
  0, // parameters
  //  undefined identifier
  LET, 2, var_undefined, var_3393_24_identifier, TAIL_CALL,
  POS(3412, 7)
};

static TAB_NUM t_func_parse_inline_method_value_pair_without_prefix[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_3415_1_position,
  // !str text
  LET, 1, var_text, 1, var_str,
  // parse_identifier !text $identifier
  func_parse_identifier, 0, 2, var_text, var_3417_24_identifier,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_58_text_is_defined, lambda_1153, TAIL_CALL,
  POS(3415, 3),
  POS(3416, 3),
  POS(3417, 3),
  POS(3419, 10),
  POS(3418, 3)
};

static TAB_NUM t_lambda_58_text_is_defined[] = {
  2, // locals
  0, // parameters
  // text(1) == ' ':
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == ' ':
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_1149, lambda_1152, TAIL_CALL,
  POS(3421, 9),
  POS(3421, 9),
  POS(3420, 7)
};

static TAB_NUM t_lambda_1149[] = {
  1, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_expression !text $expression
  func_parse_expression, 0, 2, var_text, var_3423_24_expression,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1150, lambda_1151, TAIL_CALL,
  POS(3422, 11),
  POS(3423, 11),
  POS(3425, 18),
  POS(3424, 11)
};

static TAB_NUM t_lambda_1150[] = {
  1, // locals
  0, // parameters
  // funky_types::inline_method_value_pair
  LET, -4, var_funky_types__inline_method_value_pair, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_3415_1_position, var_funky__identifier_of, var_3417_24_identifier, var_funky__expression_of, var_3423_24_expression, LOCAL(1),
  // 
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(3428, 15),
  POS(3426, 15)
};

static TAB_NUM t_lambda_1151[] = {
  0, // locals
  0, // parameters
  //  undefined expression
  LET, 2, var_undefined, var_3423_24_expression, TAIL_CALL,
  POS(3433, 15)
};

static TAB_NUM t_lambda_1152[] = {
  0, // locals
  0, // parameters
  // syntax_error "space character"
  func_syntax_error, 1, str_space_character, TAIL_CALL,
  POS(3435, 11)
};

static TAB_NUM t_lambda_1153[] = {
  0, // locals
  0, // parameters
  //  undefined identifier
  LET, 2, var_undefined, var_3417_24_identifier, TAIL_CALL,
  POS(3436, 7)
};

static TAB_NUM t_func_parse_expression_and_inline_arguments[] = {
  2, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, LOCAL(2),
  // parse_expression !text $expression
  func_parse_expression, 0, 2, var_text, var_3440_24_expression,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_59_text_is_defined, lambda_1158, TAIL_CALL,
  POS(3439, 3),
  POS(3440, 3),
  POS(3442, 10),
  POS(3441, 3)
};

static TAB_NUM t_lambda_59_text_is_defined[] = {
  1, // locals
  0, // parameters
  // parse_some_inline_arguments !text $some_inline_arguments
  func_parse_some_inline_arguments, 0, 2, var_text, var_3443_35_some_inline_arguments,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1154, lambda_1157, TAIL_CALL,
  POS(3443, 7),
  POS(3445, 14),
  POS(3444, 7)
};

static TAB_NUM t_lambda_1154[] = {
  1, // locals
  0, // parameters
  // is_defined
  var_is_defined, 1, var_3443_35_some_inline_arguments, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1155, lambda_1156, TAIL_CALL,
  POS(3448, 35),
  POS(3447, 11)
};

static TAB_NUM t_lambda_1155[] = {
  3, // locals
  0, // parameters
  // to_list
  func_to_list, 1, var_3440_24_expression, 1, LOCAL(1),
  // to_list
  func_to_list, 1, var_3443_35_some_inline_arguments, 1, LOCAL(2),
  // append
  var_append, 2, LOCAL(1), LOCAL(2), 1, LOCAL(3),
  // 
  LET, 2, var_text, LOCAL(3), TAIL_CALL,
  POS(3452, 28),
  POS(3453, 39),
  POS(3451, 15),
  POS(3449, 15)
};

static TAB_NUM t_lambda_1156[] = {
  1, // locals
  0, // parameters
  // to_list
  func_to_list, 1, var_3440_24_expression, 1, LOCAL(1),
  //  text expression.to_list
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(3454, 32),
  POS(3454, 15)
};

static TAB_NUM t_lambda_1157[] = {
  0, // locals
  0, // parameters
  //  undefined some_inline_arguments
  LET, 2, var_undefined, var_3443_35_some_inline_arguments, TAIL_CALL,
  POS(3455, 11)
};

static TAB_NUM t_lambda_1158[] = {
  0, // locals
  0, // parameters
  //  undefined expression
  LET, 2, var_undefined, var_3440_24_expression, TAIL_CALL,
  POS(3456, 7)
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
  var_if, 3, LOCAL(2), lambda_1159, lambda_1162, TAIL_CALL,
  POS(3459, 3),
  POS(3461, 5),
  POS(3461, 5),
  POS(3460, 3)
};

static TAB_NUM t_lambda_1159[] = {
  1, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_inline_arguments !text $inline_arguments
  func_parse_inline_arguments, 0, 2, var_text, var_3463_30_inline_arguments,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1160, lambda_1161, TAIL_CALL,
  POS(3462, 7),
  POS(3463, 7),
  POS(3465, 14),
  POS(3464, 7)
};

static TAB_NUM t_lambda_1160[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_text, var_3463_30_inline_arguments, TAIL_CALL,
  POS(3466, 11)
};

static TAB_NUM t_lambda_1161[] = {
  0, // locals
  0, // parameters
  //  undefined inline_arguments
  LET, 2, var_undefined, var_3463_30_inline_arguments, TAIL_CALL,
  POS(3469, 11)
};

static TAB_NUM t_lambda_1162[] = {
  0, // locals
  0, // parameters
  // syntax_error "space character"
  func_syntax_error, 1, str_space_character, TAIL_CALL,
  POS(3471, 7)
};

static TAB_NUM t_func_parse_spaced_inline_arguments_without_prefix[] = {
  2, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, LOCAL(2),
  // parse_inline_arguments !text $inline_arguments
  func_parse_inline_arguments, 0, 2, var_text, var_3475_30_inline_arguments,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1163, lambda_1164, TAIL_CALL,
  POS(3474, 3),
  POS(3475, 3),
  POS(3477, 10),
  POS(3476, 3)
};

static TAB_NUM t_lambda_1163[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_text, var_3475_30_inline_arguments, TAIL_CALL,
  POS(3478, 7)
};

static TAB_NUM t_lambda_1164[] = {
  0, // locals
  0, // parameters
  //  undefined inline_arguments
  LET, 2, var_undefined, var_3475_30_inline_arguments, TAIL_CALL,
  POS(3481, 7)
};

static TAB_NUM t_func_parse_numeric_literal[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_3484_1_position,
  // !str text
  LET, 1, var_text, 1, var_str,
  // parse_digits !text $digits
  func_parse_digits, 0, 2, var_text, var_3486_20_digits,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1165, lambda_1166, TAIL_CALL,
  POS(3484, 3),
  POS(3485, 3),
  POS(3486, 3),
  POS(3488, 10),
  POS(3487, 3)
};

static TAB_NUM t_lambda_1165[] = {
  1, // locals
  0, // parameters
  // funky_types::numeric_literal
  LET, -3, var_funky_types__numeric_literal, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_3484_1_position, var_funky__digits_of, var_3486_20_digits, LOCAL(1),
  // 
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(3491, 7),
  POS(3489, 7)
};

static TAB_NUM t_lambda_1166[] = {
  0, // locals
  0, // parameters
  //  undefined digits
  LET, 2, var_undefined, var_3486_20_digits, TAIL_CALL,
  POS(3495, 7)
};

static TAB_NUM t_func_parse_digits[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 3, lambda_1167, lambda_1170, lambda_1172, TAIL_CALL,
  POS(3498, 3)
};

static TAB_NUM t_lambda_1167[] = {
  4, // locals
  0, // parameters
  // text(1) >= '1' && text(1) <= '9')
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) >= '1' && text(1) <= '9')
  var_std__less, 2, LOCAL(1), chr_49, 1, LOCAL(2),
  // text(1) >= '1' && text(1) <= '9')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) >= '1' && text(1) <= '9')
  var_std__and, 2, LOCAL(3), lambda_1168, 1, LOCAL(4),
  // 
  LET, 2, LOCAL(4), lambda_1169, TAIL_CALL,
  POS(3500, 8),
  POS(3500, 8),
  POS(3500, 8),
  POS(3500, 8),
  POS(3499, 7)
};

static TAB_NUM t_lambda_1168[] = {
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
  POS(3500, 26),
  POS(3500, 38),
  POS(3500, 38),
  POS(3500, 26)
};

static TAB_NUM t_lambda_1169[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_more_decimal_digits
  func_parse_more_decimal_digits, 0, TAIL_CALL,
  POS(3502, 9),
  POS(3503, 9)
};

static TAB_NUM t_lambda_1170[] = {
  2, // locals
  0, // parameters
  // text(1) == '0'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '0'
  var_std__equal, 2, LOCAL(1), chr_48, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_1171, TAIL_CALL,
  POS(3505, 7),
  POS(3505, 7),
  POS(3504, 7)
};

static TAB_NUM t_lambda_1171[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_maybe_non_decimal_numeric_literal
  func_parse_maybe_non_decimal_numeric_literal, 0, TAIL_CALL,
  POS(3507, 9),
  POS(3508, 9)
};

static TAB_NUM t_lambda_1172[] = {
  0, // locals
  0, // parameters
  //  true:
  LET, 2, var_true, lambda_1173, TAIL_CALL,
  POS(3509, 7)
};

static TAB_NUM t_lambda_1173[] = {
  0, // locals
  0, // parameters
  // syntax_error "digits"
  func_syntax_error, 1, str_digits, TAIL_CALL,
  POS(3510, 7)
};

static TAB_NUM t_func_parse_maybe_non_decimal_numeric_literal[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 7, lambda_1174, lambda_1177, lambda_1181, lambda_1185, lambda_1187, lambda_1189, lambda_1191, TAIL_CALL,
  POS(3513, 3)
};

static TAB_NUM t_lambda_1174[] = {
  4, // locals
  0, // parameters
  // text(1) >= '0' && text(1) <= '9')
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) >= '0' && text(1) <= '9')
  var_std__less, 2, LOCAL(1), chr_48, 1, LOCAL(2),
  // text(1) >= '0' && text(1) <= '9')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) >= '0' && text(1) <= '9')
  var_std__and, 2, LOCAL(3), lambda_1175, 1, LOCAL(4),
  // 
  LET, 2, LOCAL(4), lambda_1176, TAIL_CALL,
  POS(3515, 8),
  POS(3515, 8),
  POS(3515, 8),
  POS(3515, 8),
  POS(3514, 7)
};

static TAB_NUM t_lambda_1175[] = {
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
  POS(3515, 26),
  POS(3515, 38),
  POS(3515, 38),
  POS(3515, 26)
};

static TAB_NUM t_lambda_1176[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_more_decimal_digits
  func_parse_more_decimal_digits, 0, TAIL_CALL,
  POS(3517, 9),
  POS(3518, 9)
};

static TAB_NUM t_lambda_1177[] = {
  3, // locals
  0, // parameters
  // text(1) == '''
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '''
  var_std__equal, 2, LOCAL(1), chr_39, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_1178, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_1180, TAIL_CALL,
  POS(3521, 9),
  POS(3521, 9),
  POS(3520, 9),
  POS(3519, 7)
};

static TAB_NUM t_lambda_1178[] = {
  4, // locals
  0, // parameters
  // text(2) >= '0' && text(2) <= '9')
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) >= '0' && text(2) <= '9')
  var_std__less, 2, LOCAL(1), chr_48, 1, LOCAL(2),
  // text(2) >= '0' && text(2) <= '9')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(2) >= '0' && text(2) <= '9')
  var_std__and, 2, LOCAL(3), lambda_1179, 1, LOCAL(4),
  // text(2) >= '0' && text(2) <= '9')
  LET, 1, LOCAL(4), TAIL_CALL,
  POS(3522, 10),
  POS(3522, 10),
  POS(3522, 10),
  POS(3522, 10),
  POS(3522, 10)
};

static TAB_NUM t_lambda_1179[] = {
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
  POS(3522, 28),
  POS(3522, 40),
  POS(3522, 40),
  POS(3522, 28)
};

static TAB_NUM t_lambda_1180[] = {
  0, // locals
  0, // parameters
  // range &text 3 -1
  var_range, 3, var_text, num_3, minus_num_1, 1, var_text,
  // parse_more_decimal_digits
  func_parse_more_decimal_digits, 0, TAIL_CALL,
  POS(3524, 9),
  POS(3525, 9)
};

static TAB_NUM t_lambda_1181[] = {
  3, // locals
  0, // parameters
  // text(1) == '.'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '.'
  var_std__equal, 2, LOCAL(1), chr_46, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_1182, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_1184, TAIL_CALL,
  POS(3528, 9),
  POS(3528, 9),
  POS(3527, 9),
  POS(3526, 7)
};

static TAB_NUM t_lambda_1182[] = {
  4, // locals
  0, // parameters
  // text(2) >= '0' && text(2) <= '9')
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) >= '0' && text(2) <= '9')
  var_std__less, 2, LOCAL(1), chr_48, 1, LOCAL(2),
  // text(2) >= '0' && text(2) <= '9')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(2) >= '0' && text(2) <= '9')
  var_std__and, 2, LOCAL(3), lambda_1183, 1, LOCAL(4),
  // text(2) >= '0' && text(2) <= '9')
  LET, 1, LOCAL(4), TAIL_CALL,
  POS(3529, 10),
  POS(3529, 10),
  POS(3529, 10),
  POS(3529, 10),
  POS(3529, 10)
};

static TAB_NUM t_lambda_1183[] = {
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
  POS(3529, 28),
  POS(3529, 40),
  POS(3529, 40),
  POS(3529, 28)
};

static TAB_NUM t_lambda_1184[] = {
  0, // locals
  0, // parameters
  // range &text 3 -1
  var_range, 3, var_text, num_3, minus_num_1, 1, var_text,
  // parse_more_fraction_digits
  func_parse_more_fraction_digits, 0, TAIL_CALL,
  POS(3531, 9),
  POS(3532, 9)
};

static TAB_NUM t_lambda_1185[] = {
  2, // locals
  0, // parameters
  // text(1) == 'b'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == 'b'
  var_std__equal, 2, LOCAL(1), chr_98, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_1186, TAIL_CALL,
  POS(3534, 7),
  POS(3534, 7),
  POS(3533, 7)
};

static TAB_NUM t_lambda_1186[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_binary_digits
  func_parse_binary_digits, 0, TAIL_CALL,
  POS(3536, 9),
  POS(3537, 9)
};

static TAB_NUM t_lambda_1187[] = {
  2, // locals
  0, // parameters
  // text(1) == 'o'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == 'o'
  var_std__equal, 2, LOCAL(1), chr_111, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_1188, TAIL_CALL,
  POS(3539, 7),
  POS(3539, 7),
  POS(3538, 7)
};

static TAB_NUM t_lambda_1188[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_octal_digits
  func_parse_octal_digits, 0, TAIL_CALL,
  POS(3541, 9),
  POS(3542, 9)
};

static TAB_NUM t_lambda_1189[] = {
  2, // locals
  0, // parameters
  // text(1) == 'x'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == 'x'
  var_std__equal, 2, LOCAL(1), chr_120, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_1190, TAIL_CALL,
  POS(3544, 7),
  POS(3544, 7),
  POS(3543, 7)
};

static TAB_NUM t_lambda_1190[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_hex_digits
  func_parse_hex_digits, 0, TAIL_CALL,
  POS(3546, 9),
  POS(3547, 9)
};

static TAB_NUM t_lambda_1191[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_1192, TAIL_CALL,
  POS(3548, 7)
};

static TAB_NUM t_lambda_1192[] = {
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
  POS(3550, 27),
  POS(3550, 42),
  POS(3550, 27),
  POS(3550, 15),
  POS(3550, 9)
};

static TAB_NUM t_func_parse_more_decimal_digits[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 6, lambda_1193, lambda_1196, lambda_1200, lambda_1204, lambda_1206, lambda_1208, TAIL_CALL,
  POS(3553, 3)
};

static TAB_NUM t_lambda_1193[] = {
  4, // locals
  0, // parameters
  // text(1) >= '0' && text(1) <= '9')
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) >= '0' && text(1) <= '9')
  var_std__less, 2, LOCAL(1), chr_48, 1, LOCAL(2),
  // text(1) >= '0' && text(1) <= '9')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) >= '0' && text(1) <= '9')
  var_std__and, 2, LOCAL(3), lambda_1194, 1, LOCAL(4),
  // 
  LET, 2, LOCAL(4), lambda_1195, TAIL_CALL,
  POS(3555, 8),
  POS(3555, 8),
  POS(3555, 8),
  POS(3555, 8),
  POS(3554, 7)
};

static TAB_NUM t_lambda_1194[] = {
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
  POS(3555, 26),
  POS(3555, 38),
  POS(3555, 38),
  POS(3555, 26)
};

static TAB_NUM t_lambda_1195[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_more_decimal_digits
  func_parse_more_decimal_digits, 0, TAIL_CALL,
  POS(3557, 9),
  POS(3558, 9)
};

static TAB_NUM t_lambda_1196[] = {
  3, // locals
  0, // parameters
  // text(1) == '''
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '''
  var_std__equal, 2, LOCAL(1), chr_39, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_1197, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_1199, TAIL_CALL,
  POS(3561, 9),
  POS(3561, 9),
  POS(3560, 9),
  POS(3559, 7)
};

static TAB_NUM t_lambda_1197[] = {
  4, // locals
  0, // parameters
  // text(2) >= '0' && text(2) <= '9')
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) >= '0' && text(2) <= '9')
  var_std__less, 2, LOCAL(1), chr_48, 1, LOCAL(2),
  // text(2) >= '0' && text(2) <= '9')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(2) >= '0' && text(2) <= '9')
  var_std__and, 2, LOCAL(3), lambda_1198, 1, LOCAL(4),
  // text(2) >= '0' && text(2) <= '9')
  LET, 1, LOCAL(4), TAIL_CALL,
  POS(3562, 10),
  POS(3562, 10),
  POS(3562, 10),
  POS(3562, 10),
  POS(3562, 10)
};

static TAB_NUM t_lambda_1198[] = {
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
  POS(3562, 28),
  POS(3562, 40),
  POS(3562, 40),
  POS(3562, 28)
};

static TAB_NUM t_lambda_1199[] = {
  0, // locals
  0, // parameters
  // range &text 3 -1
  var_range, 3, var_text, num_3, minus_num_1, 1, var_text,
  // parse_more_decimal_digits
  func_parse_more_decimal_digits, 0, TAIL_CALL,
  POS(3564, 9),
  POS(3565, 9)
};

static TAB_NUM t_lambda_1200[] = {
  3, // locals
  0, // parameters
  // text(1) == '.'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '.'
  var_std__equal, 2, LOCAL(1), chr_46, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_1201, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_1203, TAIL_CALL,
  POS(3568, 9),
  POS(3568, 9),
  POS(3567, 9),
  POS(3566, 7)
};

static TAB_NUM t_lambda_1201[] = {
  4, // locals
  0, // parameters
  // text(2) >= '0' && text(2) <= '9')
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) >= '0' && text(2) <= '9')
  var_std__less, 2, LOCAL(1), chr_48, 1, LOCAL(2),
  // text(2) >= '0' && text(2) <= '9')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(2) >= '0' && text(2) <= '9')
  var_std__and, 2, LOCAL(3), lambda_1202, 1, LOCAL(4),
  // text(2) >= '0' && text(2) <= '9')
  LET, 1, LOCAL(4), TAIL_CALL,
  POS(3569, 10),
  POS(3569, 10),
  POS(3569, 10),
  POS(3569, 10),
  POS(3569, 10)
};

static TAB_NUM t_lambda_1202[] = {
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
  POS(3569, 28),
  POS(3569, 40),
  POS(3569, 40),
  POS(3569, 28)
};

static TAB_NUM t_lambda_1203[] = {
  0, // locals
  0, // parameters
  // range &text 3 -1
  var_range, 3, var_text, num_3, minus_num_1, 1, var_text,
  // parse_more_fraction_digits
  func_parse_more_fraction_digits, 0, TAIL_CALL,
  POS(3571, 9),
  POS(3572, 9)
};

static TAB_NUM t_lambda_1204[] = {
  2, // locals
  0, // parameters
  // text(1) == 'e'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == 'e'
  var_std__equal, 2, LOCAL(1), chr_101, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_1205, TAIL_CALL,
  POS(3574, 7),
  POS(3574, 7),
  POS(3573, 7)
};

static TAB_NUM t_lambda_1205[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_exponent
  func_parse_exponent, 0, TAIL_CALL,
  POS(3576, 9),
  POS(3577, 9)
};

static TAB_NUM t_lambda_1206[] = {
  2, // locals
  0, // parameters
  // text(1) == 'E'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == 'E'
  var_std__equal, 2, LOCAL(1), chr_69, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_1207, TAIL_CALL,
  POS(3579, 7),
  POS(3579, 7),
  POS(3578, 7)
};

static TAB_NUM t_lambda_1207[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_exponent
  func_parse_exponent, 0, TAIL_CALL,
  POS(3581, 9),
  POS(3582, 9)
};

static TAB_NUM t_lambda_1208[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_1209, TAIL_CALL,
  POS(3583, 7)
};

static TAB_NUM t_lambda_1209[] = {
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
  POS(3585, 27),
  POS(3585, 42),
  POS(3585, 27),
  POS(3585, 15),
  POS(3585, 9)
};

static TAB_NUM t_func_parse_more_fraction_digits[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 4, lambda_1210, lambda_1213, lambda_1215, lambda_1217, TAIL_CALL,
  POS(3588, 3)
};

static TAB_NUM t_lambda_1210[] = {
  4, // locals
  0, // parameters
  // text(1) >= '0' && text(1) <= '9')
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) >= '0' && text(1) <= '9')
  var_std__less, 2, LOCAL(1), chr_48, 1, LOCAL(2),
  // text(1) >= '0' && text(1) <= '9')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) >= '0' && text(1) <= '9')
  var_std__and, 2, LOCAL(3), lambda_1211, 1, LOCAL(4),
  // 
  LET, 2, LOCAL(4), lambda_1212, TAIL_CALL,
  POS(3590, 8),
  POS(3590, 8),
  POS(3590, 8),
  POS(3590, 8),
  POS(3589, 7)
};

static TAB_NUM t_lambda_1211[] = {
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
  POS(3590, 26),
  POS(3590, 38),
  POS(3590, 38),
  POS(3590, 26)
};

static TAB_NUM t_lambda_1212[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_more_fraction_digits
  func_parse_more_fraction_digits, 0, TAIL_CALL,
  POS(3592, 9),
  POS(3593, 9)
};

static TAB_NUM t_lambda_1213[] = {
  2, // locals
  0, // parameters
  // text(1) == 'e'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == 'e'
  var_std__equal, 2, LOCAL(1), chr_101, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_1214, TAIL_CALL,
  POS(3595, 7),
  POS(3595, 7),
  POS(3594, 7)
};

static TAB_NUM t_lambda_1214[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_exponent
  func_parse_exponent, 0, TAIL_CALL,
  POS(3597, 9),
  POS(3598, 9)
};

static TAB_NUM t_lambda_1215[] = {
  2, // locals
  0, // parameters
  // text(1) == 'E'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == 'E'
  var_std__equal, 2, LOCAL(1), chr_69, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_1216, TAIL_CALL,
  POS(3600, 7),
  POS(3600, 7),
  POS(3599, 7)
};

static TAB_NUM t_lambda_1216[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_exponent
  func_parse_exponent, 0, TAIL_CALL,
  POS(3602, 9),
  POS(3603, 9)
};

static TAB_NUM t_lambda_1217[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_1218, TAIL_CALL,
  POS(3604, 7)
};

static TAB_NUM t_lambda_1218[] = {
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
  POS(3606, 27),
  POS(3606, 42),
  POS(3606, 27),
  POS(3606, 15),
  POS(3606, 9)
};

static TAB_NUM t_func_parse_exponent[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 4, lambda_1219, lambda_1221, lambda_1223, lambda_1226, TAIL_CALL,
  POS(3609, 3)
};

static TAB_NUM t_lambda_1219[] = {
  2, // locals
  0, // parameters
  // text(1) == '+'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '+'
  var_std__equal, 2, LOCAL(1), chr_43, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_1220, TAIL_CALL,
  POS(3611, 7),
  POS(3611, 7),
  POS(3610, 7)
};

static TAB_NUM t_lambda_1220[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_exponent_digits
  func_parse_exponent_digits, 0, TAIL_CALL,
  POS(3613, 9),
  POS(3614, 9)
};

static TAB_NUM t_lambda_1221[] = {
  2, // locals
  0, // parameters
  // text(1) == '-'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '-'
  var_std__equal, 2, LOCAL(1), chr_45, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_1222, TAIL_CALL,
  POS(3616, 7),
  POS(3616, 7),
  POS(3615, 7)
};

static TAB_NUM t_lambda_1222[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_exponent_digits
  func_parse_exponent_digits, 0, TAIL_CALL,
  POS(3618, 9),
  POS(3619, 9)
};

static TAB_NUM t_lambda_1223[] = {
  4, // locals
  0, // parameters
  // text(1) >= '0' && text(1) <= '9')
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) >= '0' && text(1) <= '9')
  var_std__less, 2, LOCAL(1), chr_48, 1, LOCAL(2),
  // text(1) >= '0' && text(1) <= '9')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) >= '0' && text(1) <= '9')
  var_std__and, 2, LOCAL(3), lambda_1224, 1, LOCAL(4),
  // 
  LET, 2, LOCAL(4), lambda_1225, TAIL_CALL,
  POS(3621, 8),
  POS(3621, 8),
  POS(3621, 8),
  POS(3621, 8),
  POS(3620, 7)
};

static TAB_NUM t_lambda_1224[] = {
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
  POS(3621, 26),
  POS(3621, 38),
  POS(3621, 38),
  POS(3621, 26)
};

static TAB_NUM t_lambda_1225[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_more_exponent_digits
  func_parse_more_exponent_digits, 0, TAIL_CALL,
  POS(3623, 9),
  POS(3624, 9)
};

static TAB_NUM t_lambda_1226[] = {
  0, // locals
  0, // parameters
  //  true:
  LET, 2, var_true, lambda_1227, TAIL_CALL,
  POS(3625, 7)
};

static TAB_NUM t_lambda_1227[] = {
  0, // locals
  0, // parameters
  // syntax_error "exponent"
  func_syntax_error, 1, str_exponent, TAIL_CALL,
  POS(3626, 7)
};

static TAB_NUM t_func_parse_exponent_digits[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 2, lambda_1228, lambda_1231, TAIL_CALL,
  POS(3629, 3)
};

static TAB_NUM t_lambda_1228[] = {
  4, // locals
  0, // parameters
  // text(1) >= '0' && text(1) <= '9')
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) >= '0' && text(1) <= '9')
  var_std__less, 2, LOCAL(1), chr_48, 1, LOCAL(2),
  // text(1) >= '0' && text(1) <= '9')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) >= '0' && text(1) <= '9')
  var_std__and, 2, LOCAL(3), lambda_1229, 1, LOCAL(4),
  // 
  LET, 2, LOCAL(4), lambda_1230, TAIL_CALL,
  POS(3631, 8),
  POS(3631, 8),
  POS(3631, 8),
  POS(3631, 8),
  POS(3630, 7)
};

static TAB_NUM t_lambda_1229[] = {
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
  POS(3631, 26),
  POS(3631, 38),
  POS(3631, 38),
  POS(3631, 26)
};

static TAB_NUM t_lambda_1230[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_more_exponent_digits
  func_parse_more_exponent_digits, 0, TAIL_CALL,
  POS(3633, 9),
  POS(3634, 9)
};

static TAB_NUM t_lambda_1231[] = {
  0, // locals
  0, // parameters
  //  true:
  LET, 2, var_true, lambda_1232, TAIL_CALL,
  POS(3635, 7)
};

static TAB_NUM t_lambda_1232[] = {
  0, // locals
  0, // parameters
  // syntax_error "exponent digits"
  func_syntax_error, 1, str_exponent_digits, TAIL_CALL,
  POS(3636, 7)
};

static TAB_NUM t_func_parse_more_exponent_digits[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 2, lambda_1233, lambda_1236, TAIL_CALL,
  POS(3639, 3)
};

static TAB_NUM t_lambda_1233[] = {
  4, // locals
  0, // parameters
  // text(1) >= '0' && text(1) <= '9')
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) >= '0' && text(1) <= '9')
  var_std__less, 2, LOCAL(1), chr_48, 1, LOCAL(2),
  // text(1) >= '0' && text(1) <= '9')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) >= '0' && text(1) <= '9')
  var_std__and, 2, LOCAL(3), lambda_1234, 1, LOCAL(4),
  // 
  LET, 2, LOCAL(4), lambda_1235, TAIL_CALL,
  POS(3641, 8),
  POS(3641, 8),
  POS(3641, 8),
  POS(3641, 8),
  POS(3640, 7)
};

static TAB_NUM t_lambda_1234[] = {
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
  POS(3641, 26),
  POS(3641, 38),
  POS(3641, 38),
  POS(3641, 26)
};

static TAB_NUM t_lambda_1235[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_more_exponent_digits
  func_parse_more_exponent_digits, 0, TAIL_CALL,
  POS(3643, 9),
  POS(3644, 9)
};

static TAB_NUM t_lambda_1236[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_1237, TAIL_CALL,
  POS(3645, 7)
};

static TAB_NUM t_lambda_1237[] = {
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
  POS(3647, 27),
  POS(3647, 42),
  POS(3647, 27),
  POS(3647, 15),
  POS(3647, 9)
};

static TAB_NUM t_func_parse_binary_digits[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 2, lambda_1238, lambda_1241, TAIL_CALL,
  POS(3650, 3)
};

static TAB_NUM t_lambda_1238[] = {
  3, // locals
  0, // parameters
  // text(1) == '0' || text(1) == '1'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '0' || text(1) == '1'
  var_std__equal, 2, LOCAL(1), chr_48, 1, LOCAL(2),
  // text(1) == '0' || text(1) == '1'
  var_std__or, 2, LOCAL(2), lambda_1239, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_1240, TAIL_CALL,
  POS(3652, 7),
  POS(3652, 7),
  POS(3652, 7),
  POS(3651, 7)
};

static TAB_NUM t_lambda_1239[] = {
  2, // locals
  0, // parameters
  // text(1) == '1'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '1'
  var_std__equal, 2, LOCAL(1), chr_49, 1, LOCAL(2),
  // text(1) == '1'
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(3652, 25),
  POS(3652, 25),
  POS(3652, 25)
};

static TAB_NUM t_lambda_1240[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_more_binary_digits
  func_parse_more_binary_digits, 0, TAIL_CALL,
  POS(3654, 9),
  POS(3655, 9)
};

static TAB_NUM t_lambda_1241[] = {
  0, // locals
  0, // parameters
  //  true:
  LET, 2, var_true, lambda_1242, TAIL_CALL,
  POS(3656, 7)
};

static TAB_NUM t_lambda_1242[] = {
  0, // locals
  0, // parameters
  // syntax_error "binary digits"
  func_syntax_error, 1, str_binary_digits, TAIL_CALL,
  POS(3657, 7)
};

static TAB_NUM t_func_parse_more_binary_digits[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 3, lambda_1243, lambda_1246, lambda_1250, TAIL_CALL,
  POS(3660, 3)
};

static TAB_NUM t_lambda_1243[] = {
  3, // locals
  0, // parameters
  // text(1) == '0' || text(1) == '1'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '0' || text(1) == '1'
  var_std__equal, 2, LOCAL(1), chr_48, 1, LOCAL(2),
  // text(1) == '0' || text(1) == '1'
  var_std__or, 2, LOCAL(2), lambda_1244, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_1245, TAIL_CALL,
  POS(3662, 7),
  POS(3662, 7),
  POS(3662, 7),
  POS(3661, 7)
};

static TAB_NUM t_lambda_1244[] = {
  2, // locals
  0, // parameters
  // text(1) == '1'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '1'
  var_std__equal, 2, LOCAL(1), chr_49, 1, LOCAL(2),
  // text(1) == '1'
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(3662, 25),
  POS(3662, 25),
  POS(3662, 25)
};

static TAB_NUM t_lambda_1245[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_more_binary_digits
  func_parse_more_binary_digits, 0, TAIL_CALL,
  POS(3664, 9),
  POS(3665, 9)
};

static TAB_NUM t_lambda_1246[] = {
  3, // locals
  0, // parameters
  // text(1) == '''
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '''
  var_std__equal, 2, LOCAL(1), chr_39, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_1247, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_1249, TAIL_CALL,
  POS(3668, 9),
  POS(3668, 9),
  POS(3667, 9),
  POS(3666, 7)
};

static TAB_NUM t_lambda_1247[] = {
  3, // locals
  0, // parameters
  // text(2) == '0' || text(2) == '1'
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '0' || text(2) == '1'
  var_std__equal, 2, LOCAL(1), chr_48, 1, LOCAL(2),
  // text(2) == '0' || text(2) == '1'
  var_std__or, 2, LOCAL(2), lambda_1248, 1, LOCAL(3),
  // text(2) == '0' || text(2) == '1'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(3669, 9),
  POS(3669, 9),
  POS(3669, 9),
  POS(3669, 9)
};

static TAB_NUM t_lambda_1248[] = {
  2, // locals
  0, // parameters
  // text(2) == '1'
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '1'
  var_std__equal, 2, LOCAL(1), chr_49, 1, LOCAL(2),
  // text(2) == '1'
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(3669, 27),
  POS(3669, 27),
  POS(3669, 27)
};

static TAB_NUM t_lambda_1249[] = {
  0, // locals
  0, // parameters
  // range &text 3 -1
  var_range, 3, var_text, num_3, minus_num_1, 1, var_text,
  // parse_more_binary_digits
  func_parse_more_binary_digits, 0, TAIL_CALL,
  POS(3671, 9),
  POS(3672, 9)
};

static TAB_NUM t_lambda_1250[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_1251, TAIL_CALL,
  POS(3673, 7)
};

static TAB_NUM t_lambda_1251[] = {
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
  POS(3675, 27),
  POS(3675, 42),
  POS(3675, 27),
  POS(3675, 15),
  POS(3675, 9)
};

static TAB_NUM t_func_parse_octal_digits[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 2, lambda_1252, lambda_1255, TAIL_CALL,
  POS(3678, 3)
};

static TAB_NUM t_lambda_1252[] = {
  4, // locals
  0, // parameters
  // text(1) >= '0' && text(1) <= '7')
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) >= '0' && text(1) <= '7')
  var_std__less, 2, LOCAL(1), chr_48, 1, LOCAL(2),
  // text(1) >= '0' && text(1) <= '7')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) >= '0' && text(1) <= '7')
  var_std__and, 2, LOCAL(3), lambda_1253, 1, LOCAL(4),
  // 
  LET, 2, LOCAL(4), lambda_1254, TAIL_CALL,
  POS(3680, 8),
  POS(3680, 8),
  POS(3680, 8),
  POS(3680, 8),
  POS(3679, 7)
};

static TAB_NUM t_lambda_1253[] = {
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
  POS(3680, 26),
  POS(3680, 38),
  POS(3680, 38),
  POS(3680, 26)
};

static TAB_NUM t_lambda_1254[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_more_octal_digits
  func_parse_more_octal_digits, 0, TAIL_CALL,
  POS(3682, 9),
  POS(3683, 9)
};

static TAB_NUM t_lambda_1255[] = {
  0, // locals
  0, // parameters
  //  true:
  LET, 2, var_true, lambda_1256, TAIL_CALL,
  POS(3684, 7)
};

static TAB_NUM t_lambda_1256[] = {
  0, // locals
  0, // parameters
  // syntax_error "octal digits"
  func_syntax_error, 1, str_octal_digits, TAIL_CALL,
  POS(3685, 7)
};

static TAB_NUM t_func_parse_more_octal_digits[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 3, lambda_1257, lambda_1260, lambda_1264, TAIL_CALL,
  POS(3688, 3)
};

static TAB_NUM t_lambda_1257[] = {
  4, // locals
  0, // parameters
  // text(1) >= '0' && text(1) <= '7')
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) >= '0' && text(1) <= '7')
  var_std__less, 2, LOCAL(1), chr_48, 1, LOCAL(2),
  // text(1) >= '0' && text(1) <= '7')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) >= '0' && text(1) <= '7')
  var_std__and, 2, LOCAL(3), lambda_1258, 1, LOCAL(4),
  // 
  LET, 2, LOCAL(4), lambda_1259, TAIL_CALL,
  POS(3690, 8),
  POS(3690, 8),
  POS(3690, 8),
  POS(3690, 8),
  POS(3689, 7)
};

static TAB_NUM t_lambda_1258[] = {
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
  POS(3690, 26),
  POS(3690, 38),
  POS(3690, 38),
  POS(3690, 26)
};

static TAB_NUM t_lambda_1259[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_more_octal_digits
  func_parse_more_octal_digits, 0, TAIL_CALL,
  POS(3692, 9),
  POS(3693, 9)
};

static TAB_NUM t_lambda_1260[] = {
  3, // locals
  0, // parameters
  // text(1) == '''
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '''
  var_std__equal, 2, LOCAL(1), chr_39, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_1261, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_1263, TAIL_CALL,
  POS(3696, 9),
  POS(3696, 9),
  POS(3695, 9),
  POS(3694, 7)
};

static TAB_NUM t_lambda_1261[] = {
  4, // locals
  0, // parameters
  // text(2) >= '0' && text(2) <= '7')
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) >= '0' && text(2) <= '7')
  var_std__less, 2, LOCAL(1), chr_48, 1, LOCAL(2),
  // text(2) >= '0' && text(2) <= '7')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(2) >= '0' && text(2) <= '7')
  var_std__and, 2, LOCAL(3), lambda_1262, 1, LOCAL(4),
  // text(2) >= '0' && text(2) <= '7')
  LET, 1, LOCAL(4), TAIL_CALL,
  POS(3697, 10),
  POS(3697, 10),
  POS(3697, 10),
  POS(3697, 10),
  POS(3697, 10)
};

static TAB_NUM t_lambda_1262[] = {
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
  POS(3697, 28),
  POS(3697, 40),
  POS(3697, 40),
  POS(3697, 28)
};

static TAB_NUM t_lambda_1263[] = {
  0, // locals
  0, // parameters
  // range &text 3 -1
  var_range, 3, var_text, num_3, minus_num_1, 1, var_text,
  // parse_more_octal_digits
  func_parse_more_octal_digits, 0, TAIL_CALL,
  POS(3699, 9),
  POS(3700, 9)
};

static TAB_NUM t_lambda_1264[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_1265, TAIL_CALL,
  POS(3701, 7)
};

static TAB_NUM t_lambda_1265[] = {
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
  POS(3703, 27),
  POS(3703, 42),
  POS(3703, 27),
  POS(3703, 15),
  POS(3703, 9)
};

static TAB_NUM t_func_parse_hex_digits[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 2, lambda_1266, lambda_1273, TAIL_CALL,
  POS(3706, 3)
};

static TAB_NUM t_lambda_1266[] = {
  5, // locals
  0, // parameters
  // text(1) >= '0' && text(1) <= '9') || (text(1) >= 'a' && text(1) <= 'f') || (text(1) >= 'A' && text(1) <= 'F')
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) >= '0' && text(1) <= '9') || (text(1) >= 'a' && text(1) <= 'f') || (text(1) >= 'A' && text(1) <= 'F')
  var_std__less, 2, LOCAL(1), chr_48, 1, LOCAL(2),
  // text(1) >= '0' && text(1) <= '9') || (text(1) >= 'a' && text(1) <= 'f') || (text(1) >= 'A' && text(1) <= 'F')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) >= '0' && text(1) <= '9') || (text(1) >= 'a' && text(1) <= 'f') || (text(1) >= 'A' && text(1) <= 'F')
  var_std__and, 2, LOCAL(3), lambda_1267, 1, LOCAL(4),
  // text(1) >= '0' && text(1) <= '9') || (text(1) >= 'a' && text(1) <= 'f') || (text(1) >= 'A' && text(1) <= 'F')
  var_std__or, 2, LOCAL(4), lambda_1268, 1, LOCAL(5),
  // 
  LET, 2, LOCAL(5), lambda_1272, TAIL_CALL,
  POS(3708, 8),
  POS(3708, 8),
  POS(3708, 8),
  POS(3708, 8),
  POS(3708, 8),
  POS(3707, 7)
};

static TAB_NUM t_lambda_1267[] = {
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
  POS(3708, 26),
  POS(3708, 38),
  POS(3708, 38),
  POS(3708, 26)
};

static TAB_NUM t_lambda_1268[] = {
  5, // locals
  0, // parameters
  // text(1) >= 'a' && text(1) <= 'f') || (text(1) >= 'A' && text(1) <= 'F')
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) >= 'a' && text(1) <= 'f') || (text(1) >= 'A' && text(1) <= 'F')
  var_std__less, 2, LOCAL(1), chr_97, 1, LOCAL(2),
  // text(1) >= 'a' && text(1) <= 'f') || (text(1) >= 'A' && text(1) <= 'F')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) >= 'a' && text(1) <= 'f') || (text(1) >= 'A' && text(1) <= 'F')
  var_std__and, 2, LOCAL(3), lambda_1269, 1, LOCAL(4),
  // text(1) >= 'a' && text(1) <= 'f') || (text(1) >= 'A' && text(1) <= 'F')
  var_std__or, 2, LOCAL(4), lambda_1270, 1, LOCAL(5),
  // (text(1) >= 'a' && text(1) <= 'f') || (text(1) >= 'A' && text(1) <= 'F')
  LET, 1, LOCAL(5), TAIL_CALL,
  POS(3708, 46),
  POS(3708, 46),
  POS(3708, 46),
  POS(3708, 46),
  POS(3708, 46),
  POS(3708, 45)
};

static TAB_NUM t_lambda_1269[] = {
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
  POS(3708, 64),
  POS(3708, 76),
  POS(3708, 76),
  POS(3708, 64)
};

static TAB_NUM t_lambda_1270[] = {
  4, // locals
  0, // parameters
  // text(1) >= 'A' && text(1) <= 'F')
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) >= 'A' && text(1) <= 'F')
  var_std__less, 2, LOCAL(1), chr_65, 1, LOCAL(2),
  // text(1) >= 'A' && text(1) <= 'F')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) >= 'A' && text(1) <= 'F')
  var_std__and, 2, LOCAL(3), lambda_1271, 1, LOCAL(4),
  // text(1) >= 'A' && text(1) <= 'F')
  LET, 1, LOCAL(4), TAIL_CALL,
  POS(3708, 84),
  POS(3708, 84),
  POS(3708, 84),
  POS(3708, 84),
  POS(3708, 84)
};

static TAB_NUM t_lambda_1271[] = {
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
  POS(3708, 102),
  POS(3708, 114),
  POS(3708, 114),
  POS(3708, 102)
};

static TAB_NUM t_lambda_1272[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_more_hex_digits
  func_parse_more_hex_digits, 0, TAIL_CALL,
  POS(3710, 9),
  POS(3711, 9)
};

static TAB_NUM t_lambda_1273[] = {
  0, // locals
  0, // parameters
  //  true:
  LET, 2, var_true, lambda_1274, TAIL_CALL,
  POS(3712, 7)
};

static TAB_NUM t_lambda_1274[] = {
  0, // locals
  0, // parameters
  // syntax_error "hex digits"
  func_syntax_error, 1, str_hex_digits, TAIL_CALL,
  POS(3713, 7)
};

static TAB_NUM t_func_parse_more_hex_digits[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 3, lambda_1275, lambda_1282, lambda_1290, TAIL_CALL,
  POS(3716, 3)
};

static TAB_NUM t_lambda_1275[] = {
  5, // locals
  0, // parameters
  // text(1) >= '0' && text(1) <= '9') || (text(1) >= 'a' && text(1) <= 'f') || (text(1) >= 'A' && text(1) <= 'F')
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) >= '0' && text(1) <= '9') || (text(1) >= 'a' && text(1) <= 'f') || (text(1) >= 'A' && text(1) <= 'F')
  var_std__less, 2, LOCAL(1), chr_48, 1, LOCAL(2),
  // text(1) >= '0' && text(1) <= '9') || (text(1) >= 'a' && text(1) <= 'f') || (text(1) >= 'A' && text(1) <= 'F')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) >= '0' && text(1) <= '9') || (text(1) >= 'a' && text(1) <= 'f') || (text(1) >= 'A' && text(1) <= 'F')
  var_std__and, 2, LOCAL(3), lambda_1276, 1, LOCAL(4),
  // text(1) >= '0' && text(1) <= '9') || (text(1) >= 'a' && text(1) <= 'f') || (text(1) >= 'A' && text(1) <= 'F')
  var_std__or, 2, LOCAL(4), lambda_1277, 1, LOCAL(5),
  // 
  LET, 2, LOCAL(5), lambda_1281, TAIL_CALL,
  POS(3718, 8),
  POS(3718, 8),
  POS(3718, 8),
  POS(3718, 8),
  POS(3718, 8),
  POS(3717, 7)
};

static TAB_NUM t_lambda_1276[] = {
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
  POS(3718, 26),
  POS(3718, 38),
  POS(3718, 38),
  POS(3718, 26)
};

static TAB_NUM t_lambda_1277[] = {
  5, // locals
  0, // parameters
  // text(1) >= 'a' && text(1) <= 'f') || (text(1) >= 'A' && text(1) <= 'F')
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) >= 'a' && text(1) <= 'f') || (text(1) >= 'A' && text(1) <= 'F')
  var_std__less, 2, LOCAL(1), chr_97, 1, LOCAL(2),
  // text(1) >= 'a' && text(1) <= 'f') || (text(1) >= 'A' && text(1) <= 'F')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) >= 'a' && text(1) <= 'f') || (text(1) >= 'A' && text(1) <= 'F')
  var_std__and, 2, LOCAL(3), lambda_1278, 1, LOCAL(4),
  // text(1) >= 'a' && text(1) <= 'f') || (text(1) >= 'A' && text(1) <= 'F')
  var_std__or, 2, LOCAL(4), lambda_1279, 1, LOCAL(5),
  // (text(1) >= 'a' && text(1) <= 'f') || (text(1) >= 'A' && text(1) <= 'F')
  LET, 1, LOCAL(5), TAIL_CALL,
  POS(3718, 46),
  POS(3718, 46),
  POS(3718, 46),
  POS(3718, 46),
  POS(3718, 46),
  POS(3718, 45)
};

static TAB_NUM t_lambda_1278[] = {
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
  POS(3718, 64),
  POS(3718, 76),
  POS(3718, 76),
  POS(3718, 64)
};

static TAB_NUM t_lambda_1279[] = {
  4, // locals
  0, // parameters
  // text(1) >= 'A' && text(1) <= 'F')
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) >= 'A' && text(1) <= 'F')
  var_std__less, 2, LOCAL(1), chr_65, 1, LOCAL(2),
  // text(1) >= 'A' && text(1) <= 'F')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) >= 'A' && text(1) <= 'F')
  var_std__and, 2, LOCAL(3), lambda_1280, 1, LOCAL(4),
  // text(1) >= 'A' && text(1) <= 'F')
  LET, 1, LOCAL(4), TAIL_CALL,
  POS(3718, 84),
  POS(3718, 84),
  POS(3718, 84),
  POS(3718, 84),
  POS(3718, 84)
};

static TAB_NUM t_lambda_1280[] = {
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
  POS(3718, 102),
  POS(3718, 114),
  POS(3718, 114),
  POS(3718, 102)
};

static TAB_NUM t_lambda_1281[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_more_hex_digits
  func_parse_more_hex_digits, 0, TAIL_CALL,
  POS(3720, 9),
  POS(3721, 9)
};

static TAB_NUM t_lambda_1282[] = {
  3, // locals
  0, // parameters
  // text(1) == '''
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '''
  var_std__equal, 2, LOCAL(1), chr_39, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_1283, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_1289, TAIL_CALL,
  POS(3724, 9),
  POS(3724, 9),
  POS(3723, 9),
  POS(3722, 7)
};

static TAB_NUM t_lambda_1283[] = {
  5, // locals
  0, // parameters
  // text(2) >= '0' && text(2) <= '9') || (text(2) >= 'a' && text(2) <= 'f') || (text(2) >= 'A' && text(2) <= 'F')
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) >= '0' && text(2) <= '9') || (text(2) >= 'a' && text(2) <= 'f') || (text(2) >= 'A' && text(2) <= 'F')
  var_std__less, 2, LOCAL(1), chr_48, 1, LOCAL(2),
  // text(2) >= '0' && text(2) <= '9') || (text(2) >= 'a' && text(2) <= 'f') || (text(2) >= 'A' && text(2) <= 'F')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(2) >= '0' && text(2) <= '9') || (text(2) >= 'a' && text(2) <= 'f') || (text(2) >= 'A' && text(2) <= 'F')
  var_std__and, 2, LOCAL(3), lambda_1284, 1, LOCAL(4),
  // text(2) >= '0' && text(2) <= '9') || (text(2) >= 'a' && text(2) <= 'f') || (text(2) >= 'A' && text(2) <= 'F')
  var_std__or, 2, LOCAL(4), lambda_1285, 1, LOCAL(5),
  // (text(2) >= '0' && text(2) <= '9') || (text(2) >= 'a' && text(2) <= 'f') || (text(2) >= 'A' && text(2) <= 'F')
  LET, 1, LOCAL(5), TAIL_CALL,
  POS(3725, 10),
  POS(3725, 10),
  POS(3725, 10),
  POS(3725, 10),
  POS(3725, 10),
  POS(3725, 9)
};

static TAB_NUM t_lambda_1284[] = {
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
  POS(3725, 28),
  POS(3725, 40),
  POS(3725, 40),
  POS(3725, 28)
};

static TAB_NUM t_lambda_1285[] = {
  5, // locals
  0, // parameters
  // text(2) >= 'a' && text(2) <= 'f') || (text(2) >= 'A' && text(2) <= 'F')
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) >= 'a' && text(2) <= 'f') || (text(2) >= 'A' && text(2) <= 'F')
  var_std__less, 2, LOCAL(1), chr_97, 1, LOCAL(2),
  // text(2) >= 'a' && text(2) <= 'f') || (text(2) >= 'A' && text(2) <= 'F')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(2) >= 'a' && text(2) <= 'f') || (text(2) >= 'A' && text(2) <= 'F')
  var_std__and, 2, LOCAL(3), lambda_1286, 1, LOCAL(4),
  // text(2) >= 'a' && text(2) <= 'f') || (text(2) >= 'A' && text(2) <= 'F')
  var_std__or, 2, LOCAL(4), lambda_1287, 1, LOCAL(5),
  // (text(2) >= 'a' && text(2) <= 'f') || (text(2) >= 'A' && text(2) <= 'F')
  LET, 1, LOCAL(5), TAIL_CALL,
  POS(3725, 48),
  POS(3725, 48),
  POS(3725, 48),
  POS(3725, 48),
  POS(3725, 48),
  POS(3725, 47)
};

static TAB_NUM t_lambda_1286[] = {
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
  POS(3725, 66),
  POS(3725, 78),
  POS(3725, 78),
  POS(3725, 66)
};

static TAB_NUM t_lambda_1287[] = {
  4, // locals
  0, // parameters
  // text(2) >= 'A' && text(2) <= 'F')
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) >= 'A' && text(2) <= 'F')
  var_std__less, 2, LOCAL(1), chr_65, 1, LOCAL(2),
  // text(2) >= 'A' && text(2) <= 'F')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(2) >= 'A' && text(2) <= 'F')
  var_std__and, 2, LOCAL(3), lambda_1288, 1, LOCAL(4),
  // text(2) >= 'A' && text(2) <= 'F')
  LET, 1, LOCAL(4), TAIL_CALL,
  POS(3725, 86),
  POS(3725, 86),
  POS(3725, 86),
  POS(3725, 86),
  POS(3725, 86)
};

static TAB_NUM t_lambda_1288[] = {
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
  POS(3725, 104),
  POS(3725, 116),
  POS(3725, 116),
  POS(3725, 104)
};

static TAB_NUM t_lambda_1289[] = {
  0, // locals
  0, // parameters
  // range &text 3 -1
  var_range, 3, var_text, num_3, minus_num_1, 1, var_text,
  // parse_more_hex_digits
  func_parse_more_hex_digits, 0, TAIL_CALL,
  POS(3727, 9),
  POS(3728, 9)
};

static TAB_NUM t_lambda_1290[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_1291, TAIL_CALL,
  POS(3729, 7)
};

static TAB_NUM t_lambda_1291[] = {
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
  POS(3731, 27),
  POS(3731, 42),
  POS(3731, 27),
  POS(3731, 15),
  POS(3731, 9)
};

static TAB_NUM t_func_parse_special_character_literal[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 3, lambda_1292, lambda_1295, lambda_1300, TAIL_CALL,
  POS(3734, 3)
};

static TAB_NUM t_lambda_1292[] = {
  3, // locals
  0, // parameters
  // text(1) == '@@'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '@@'
  var_std__equal, 2, LOCAL(1), chr_64, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_1293, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_1294, TAIL_CALL,
  POS(3737, 9),
  POS(3737, 9),
  POS(3736, 9),
  POS(3735, 7)
};

static TAB_NUM t_lambda_1293[] = {
  2, // locals
  0, // parameters
  // text(2) == '''
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '''
  var_std__equal, 2, LOCAL(1), chr_39, 1, LOCAL(2),
  // text(2) == '''
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(3738, 9),
  POS(3738, 9),
  POS(3738, 9)
};

static TAB_NUM t_lambda_1294[] = {
  0, // locals
  0, // parameters
  // range &text 3 -1
  var_range, 3, var_text, num_3, minus_num_1, 1, var_text,
  // parse_at_character_literal_without_prefix
  func_parse_at_character_literal_without_prefix, 0, TAIL_CALL,
  POS(3740, 9),
  POS(3741, 9)
};

static TAB_NUM t_lambda_1295[] = {
  5, // locals
  0, // parameters
  // text(1) >= 'a' && text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z')
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) >= 'a' && text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z')
  var_std__less, 2, LOCAL(1), chr_97, 1, LOCAL(2),
  // text(1) >= 'a' && text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) >= 'a' && text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z')
  var_std__and, 2, LOCAL(3), lambda_1296, 1, LOCAL(4),
  // text(1) >= 'a' && text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z')
  var_std__or, 2, LOCAL(4), lambda_1297, 1, LOCAL(5),
  // 
  LET, 2, LOCAL(5), lambda_1299, TAIL_CALL,
  POS(3743, 8),
  POS(3743, 8),
  POS(3743, 8),
  POS(3743, 8),
  POS(3743, 8),
  POS(3742, 7)
};

static TAB_NUM t_lambda_1296[] = {
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
  POS(3743, 26),
  POS(3743, 38),
  POS(3743, 38),
  POS(3743, 26)
};

static TAB_NUM t_lambda_1297[] = {
  4, // locals
  0, // parameters
  // text(1) >= 'A' && text(1) <= 'Z')
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) >= 'A' && text(1) <= 'Z')
  var_std__less, 2, LOCAL(1), chr_65, 1, LOCAL(2),
  // text(1) >= 'A' && text(1) <= 'Z')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) >= 'A' && text(1) <= 'Z')
  var_std__and, 2, LOCAL(3), lambda_1298, 1, LOCAL(4),
  // text(1) >= 'A' && text(1) <= 'Z')
  LET, 1, LOCAL(4), TAIL_CALL,
  POS(3743, 46),
  POS(3743, 46),
  POS(3743, 46),
  POS(3743, 46),
  POS(3743, 46)
};

static TAB_NUM t_lambda_1298[] = {
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
  POS(3743, 64),
  POS(3743, 76),
  POS(3743, 76),
  POS(3743, 64)
};

static TAB_NUM t_lambda_1299[] = {
  0, // locals
  0, // parameters
  // !str text
  LET, 1, var_text, 1, var_str,
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_named_character_literal_without_prefix
  func_parse_named_character_literal_without_prefix, 0, TAIL_CALL,
  POS(3745, 9),
  POS(3746, 9),
  POS(3747, 9)
};

static TAB_NUM t_lambda_1300[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_1301, TAIL_CALL,
  POS(3748, 7)
};

static TAB_NUM t_lambda_1301[] = {
  0, // locals
  0, // parameters
  // !expected "special character literal"
  LET, 1, str_special_characte, 1, var_expected,
  // !at text
  LET, 1, var_text, 1, var_at,
  // parse_numeric_character_literal
  func_parse_numeric_character_literal, 0, TAIL_CALL,
  POS(3751, 9),
  POS(3752, 9),
  POS(3753, 9)
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
  POS(3756, 3),
  POS(3759, 5),
  POS(3757, 3)
};

static TAB_NUM t_func_parse_named_character_literal_without_prefix[] = {
  1, // locals
  0, // parameters
  // $position str
  LET, 1, var_str, 1, var_3764_1_position,
  // parse_more_character_name_characters !text $character_name
  func_parse_more_character_name_characters, 0, 2, var_text, var_3765_44_character_name,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_60_text_is_defined, lambda_1306, TAIL_CALL,
  POS(3764, 3),
  POS(3765, 3),
  POS(3767, 10),
  POS(3766, 3)
};

static TAB_NUM t_lambda_60_text_is_defined[] = {
  2, // locals
  0, // parameters
  // text(1) == ';':
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == ';':
  var_std__equal, 2, LOCAL(1), chr_59, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_1302, lambda_1305, TAIL_CALL,
  POS(3769, 9),
  POS(3769, 9),
  POS(3768, 7)
};

static TAB_NUM t_lambda_1302[] = {
  2, // locals
  0, // parameters
  // text(2) == '''
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '''
  var_std__equal, 2, LOCAL(1), chr_39, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_1303, lambda_1304, TAIL_CALL,
  POS(3771, 13),
  POS(3771, 13),
  POS(3770, 11)
};

static TAB_NUM t_lambda_1303[] = {
  2, // locals
  0, // parameters
  // range(text 3 -1)
  var_range, 3, var_text, num_3, minus_num_1, 1, LOCAL(1),
  // funky_types::named_character_literal
  LET, -3, var_funky_types__named_character_literal, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_3764_1_position, var_funky__name_of, var_3765_44_character_name, LOCAL(2),
  // 
  LET, 2, LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(3773, 15),
  POS(3774, 15),
  POS(3772, 15)
};

static TAB_NUM t_lambda_1304[] = {
  0, // locals
  0, // parameters
  // syntax_error "single quote"
  func_syntax_error, 1, str_single_quote, TAIL_CALL,
  POS(3779, 15)
};

static TAB_NUM t_lambda_1305[] = {
  0, // locals
  0, // parameters
  // syntax_error "';'"
  func_syntax_error, 1, string_9, TAIL_CALL,
  POS(3781, 11)
};

static TAB_NUM t_lambda_1306[] = {
  0, // locals
  0, // parameters
  //  undefined character_name
  LET, 2, var_undefined, var_3765_44_character_name, TAIL_CALL,
  POS(3782, 7)
};

static TAB_NUM t_func_parse_numeric_character_literal[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_3785_1_position,
  // !str text
  LET, 1, var_text, 1, var_str,
  // parse_digits !text $digits
  func_parse_digits, 0, 2, var_text, var_3787_20_digits,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_61_text_is_defined, lambda_1311, TAIL_CALL,
  POS(3785, 3),
  POS(3786, 3),
  POS(3787, 3),
  POS(3789, 10),
  POS(3788, 3)
};

static TAB_NUM t_lambda_61_text_is_defined[] = {
  2, // locals
  0, // parameters
  // text(1) == ';':
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == ';':
  var_std__equal, 2, LOCAL(1), chr_59, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_1307, lambda_1310, TAIL_CALL,
  POS(3791, 9),
  POS(3791, 9),
  POS(3790, 7)
};

static TAB_NUM t_lambda_1307[] = {
  2, // locals
  0, // parameters
  // text(2) == '''
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '''
  var_std__equal, 2, LOCAL(1), chr_39, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_1308, lambda_1309, TAIL_CALL,
  POS(3793, 13),
  POS(3793, 13),
  POS(3792, 11)
};

static TAB_NUM t_lambda_1308[] = {
  2, // locals
  0, // parameters
  // range(text 3 -1)
  var_range, 3, var_text, num_3, minus_num_1, 1, LOCAL(1),
  // funky_types::numeric_character_literal
  LET, -3, var_funky_types__numeric_character_literal, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_3785_1_position, var_funky__digits_of, var_3787_20_digits, LOCAL(2),
  // 
  LET, 2, LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(3795, 15),
  POS(3796, 15),
  POS(3794, 15)
};

static TAB_NUM t_lambda_1309[] = {
  0, // locals
  0, // parameters
  // syntax_error "single quote"
  func_syntax_error, 1, str_single_quote, TAIL_CALL,
  POS(3801, 15)
};

static TAB_NUM t_lambda_1310[] = {
  0, // locals
  0, // parameters
  // syntax_error "';'"
  func_syntax_error, 1, string_9, TAIL_CALL,
  POS(3803, 11)
};

static TAB_NUM t_lambda_1311[] = {
  0, // locals
  0, // parameters
  //  undefined digits
  LET, 2, var_undefined, var_3787_20_digits, TAIL_CALL,
  POS(3804, 7)
};

static TAB_NUM t_func_parse_character_literal_without_prefix[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_3807_1_position,
  // !str text
  LET, 1, var_text, 1, var_str,
  // parse_character !text $character
  func_parse_character, 0, 2, var_text, var_3809_23_character,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_62_text_is_defined, lambda_1314, TAIL_CALL,
  POS(3807, 3),
  POS(3808, 3),
  POS(3809, 3),
  POS(3811, 10),
  POS(3810, 3)
};

static TAB_NUM t_lambda_62_text_is_defined[] = {
  2, // locals
  0, // parameters
  // text(1) == '''
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '''
  var_std__equal, 2, LOCAL(1), chr_39, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_1312, lambda_1313, TAIL_CALL,
  POS(3813, 9),
  POS(3813, 9),
  POS(3812, 7)
};

static TAB_NUM t_lambda_1312[] = {
  2, // locals
  0, // parameters
  // range(text 2 -1)
  var_range, 3, var_text, num_2, minus_num_1, 1, LOCAL(1),
  // funky_types::character_literal
  LET, -3, var_funky_types__character_literal, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_3807_1_position, var_funky__character_of, var_3809_23_character, LOCAL(2),
  // 
  LET, 2, LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(3815, 11),
  POS(3816, 11),
  POS(3814, 11)
};

static TAB_NUM t_lambda_1313[] = {
  0, // locals
  0, // parameters
  // syntax_error "single quote"
  func_syntax_error, 1, str_single_quote, TAIL_CALL,
  POS(3821, 11)
};

static TAB_NUM t_lambda_1314[] = {
  0, // locals
  0, // parameters
  //  undefined character
  LET, 2, var_undefined, var_3809_23_character, TAIL_CALL,
  POS(3822, 7)
};

static TAB_NUM t_func_parse_character[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 2, lambda_1315, lambda_1317, TAIL_CALL,
  POS(3825, 3)
};

static TAB_NUM t_lambda_1315[] = {
  3, // locals
  0, // parameters
  // text(1) != '@nl;'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) != '@nl;'
  var_std__equal, 2, LOCAL(1), chr_10, 1, LOCAL(2),
  // text(1) != '@nl;'
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_1316, TAIL_CALL,
  POS(3827, 7),
  POS(3827, 7),
  POS(3827, 7),
  POS(3826, 7)
};

static TAB_NUM t_lambda_1316[] = {
  2, // locals
  0, // parameters
  // range(text 2 -1) range(str 1 1)
  var_range, 3, var_text, num_2, minus_num_1, 1, LOCAL(1),
  // range(str 1 1)
  var_range, 3, var_str, num_1, num_1, 1, LOCAL(2),
  //  range(text 2 -1) range(str 1 1)
  LET, 2, LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(3828, 10),
  POS(3828, 27),
  POS(3828, 9)
};

static TAB_NUM t_lambda_1317[] = {
  0, // locals
  0, // parameters
  //  true:
  LET, 2, var_true, lambda_1318, TAIL_CALL,
  POS(3829, 7)
};

static TAB_NUM t_lambda_1318[] = {
  0, // locals
  0, // parameters
  // syntax_error "character"
  func_syntax_error, 1, str_character, TAIL_CALL,
  POS(3830, 7)
};

static TAB_NUM t_func_parse_more_character_name_characters[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 2, lambda_1319, lambda_1326, TAIL_CALL,
  POS(3833, 3)
};

static TAB_NUM t_lambda_1319[] = {
  5, // locals
  0, // parameters
  // text(1) >= 'a' && text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) >= 'a' && text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  var_std__less, 2, LOCAL(1), chr_97, 1, LOCAL(2),
  // text(1) >= 'a' && text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) >= 'a' && text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  var_std__and, 2, LOCAL(3), lambda_1320, 1, LOCAL(4),
  // text(1) >= 'a' && text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  var_std__or, 2, LOCAL(4), lambda_1321, 1, LOCAL(5),
  // 
  LET, 2, LOCAL(5), lambda_1325, TAIL_CALL,
  POS(3835, 8),
  POS(3835, 8),
  POS(3835, 8),
  POS(3835, 8),
  POS(3835, 8),
  POS(3834, 7)
};

static TAB_NUM t_lambda_1320[] = {
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
  POS(3835, 26),
  POS(3835, 38),
  POS(3835, 38),
  POS(3835, 26)
};

static TAB_NUM t_lambda_1321[] = {
  5, // locals
  0, // parameters
  // text(1) >= 'A' && text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) >= 'A' && text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  var_std__less, 2, LOCAL(1), chr_65, 1, LOCAL(2),
  // text(1) >= 'A' && text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) >= 'A' && text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  var_std__and, 2, LOCAL(3), lambda_1322, 1, LOCAL(4),
  // text(1) >= 'A' && text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  var_std__or, 2, LOCAL(4), lambda_1323, 1, LOCAL(5),
  // (text(1) >= 'A' && text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  LET, 1, LOCAL(5), TAIL_CALL,
  POS(3835, 46),
  POS(3835, 46),
  POS(3835, 46),
  POS(3835, 46),
  POS(3835, 46),
  POS(3835, 45)
};

static TAB_NUM t_lambda_1322[] = {
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
  POS(3835, 64),
  POS(3835, 76),
  POS(3835, 76),
  POS(3835, 64)
};

static TAB_NUM t_lambda_1323[] = {
  4, // locals
  0, // parameters
  // text(1) >= '0' && text(1) <= '9')
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) >= '0' && text(1) <= '9')
  var_std__less, 2, LOCAL(1), chr_48, 1, LOCAL(2),
  // text(1) >= '0' && text(1) <= '9')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) >= '0' && text(1) <= '9')
  var_std__and, 2, LOCAL(3), lambda_1324, 1, LOCAL(4),
  // text(1) >= '0' && text(1) <= '9')
  LET, 1, LOCAL(4), TAIL_CALL,
  POS(3835, 84),
  POS(3835, 84),
  POS(3835, 84),
  POS(3835, 84),
  POS(3835, 84)
};

static TAB_NUM t_lambda_1324[] = {
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
  POS(3835, 102),
  POS(3835, 114),
  POS(3835, 114),
  POS(3835, 102)
};

static TAB_NUM t_lambda_1325[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_more_character_name_characters
  func_parse_more_character_name_characters, 0, TAIL_CALL,
  POS(3837, 9),
  POS(3838, 9)
};

static TAB_NUM t_lambda_1326[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_1327, TAIL_CALL,
  POS(3839, 7)
};

static TAB_NUM t_lambda_1327[] = {
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
  POS(3841, 27),
  POS(3841, 42),
  POS(3841, 27),
  POS(3841, 15),
  POS(3841, 9)
};

static TAB_NUM t_func_parse_string_literal_without_prefix[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_3844_1_position,
  // parse_string_components !text $string_components
  func_parse_string_components, 0, 2, var_text, var_3845_31_string_components,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1328, lambda_1329, TAIL_CALL,
  POS(3844, 3),
  POS(3845, 3),
  POS(3847, 10),
  POS(3846, 3)
};

static TAB_NUM t_lambda_1328[] = {
  1, // locals
  0, // parameters
  // funky_types::string_literal
  LET, -3, var_funky_types__string_literal, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_3844_1_position, var_funky__components_of, var_3845_31_string_components, LOCAL(1),
  // 
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(3850, 7),
  POS(3848, 7)
};

static TAB_NUM t_lambda_1329[] = {
  0, // locals
  0, // parameters
  //  undefined string_components
  LET, 2, var_undefined, var_3845_31_string_components, TAIL_CALL,
  POS(3854, 7)
};

static TAB_NUM t_func_parse_string_components[] = {
  2, // locals
  0, // parameters
  // cond $rest $expr
  var_cond, 2, lambda_1330, lambda_1332, 2, LOCAL(2), var_3857_12_expr,
  // cond
  var_cond, 3, lambda_1334, lambda_1336, lambda_1338, 1, LOCAL(1),
  // ->
  LET, 2, LOCAL(2), LOCAL(1), TAIL_CALL,
  POS(3857, 3),
  POS(3869, 5),
  POS(3867, 3)
};

static TAB_NUM t_lambda_1330[] = {
  2, // locals
  0, // parameters
  // text(1) == '"'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '"'
  var_std__equal, 2, LOCAL(1), chr_34, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_1331, TAIL_CALL,
  POS(3859, 7),
  POS(3859, 7),
  POS(3858, 7)
};

static TAB_NUM t_lambda_1331[] = {
  1, // locals
  0, // parameters
  // range(text 2 -1) empty_list
  var_range, 3, var_text, num_2, minus_num_1, 1, LOCAL(1),
  //  range(text 2 -1) empty_list
  LET, 2, LOCAL(1), var_empty_list, TAIL_CALL,
  POS(3860, 10),
  POS(3860, 9)
};

static TAB_NUM t_lambda_1332[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_1333, TAIL_CALL,
  POS(3861, 7)
};

static TAB_NUM t_lambda_1333[] = {
  0, // locals
  0, // parameters
  // !expected "string components"
  LET, 1, str_string_component, 1, var_expected,
  // !at text
  LET, 1, var_text, 1, var_at,
  // parse_some_string_components
  func_parse_some_string_components, 0, TAIL_CALL,
  POS(3864, 9),
  POS(3865, 9),
  POS(3866, 9)
};

static TAB_NUM t_lambda_1334[] = {
  1, // locals
  0, // parameters
  // is_undefined -> empty_list
  var_is_undefined, 1, var_3857_12_expr, 1, LOCAL(1),
  //  expr.is_undefined -> empty_list
  LET, 2, LOCAL(1), lambda_1335, TAIL_CALL,
  POS(3870, 15),
  POS(3870, 9)
};

static TAB_NUM t_lambda_1335[] = {
  0, // locals
  0, // parameters
  //  empty_list
  LET, 1, var_empty_list, TAIL_CALL,
  POS(3870, 30)
};

static TAB_NUM t_lambda_1336[] = {
  1, // locals
  0, // parameters
  // is_a_list -> expr
  var_is_a_list, 1, var_3857_12_expr, 1, LOCAL(1),
  //  expr.is_a_list -> expr
  LET, 2, LOCAL(1), lambda_1337, TAIL_CALL,
  POS(3871, 15),
  POS(3871, 9)
};

static TAB_NUM t_lambda_1337[] = {
  0, // locals
  0, // parameters
  //  expr
  LET, 1, var_3857_12_expr, TAIL_CALL,
  POS(3871, 27)
};

static TAB_NUM t_lambda_1338[] = {
  0, // locals
  0, // parameters
  //  true -> list(expr)
  LET, 2, var_true, lambda_1339, TAIL_CALL,
  POS(3872, 9)
};

static TAB_NUM t_lambda_1339[] = {
  1, // locals
  0, // parameters
  // list(expr)
  var_list, 1, var_3857_12_expr, 1, LOCAL(1),
  //  list(expr)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(3872, 18),
  POS(3872, 17)
};

static TAB_NUM t_func_parse_some_string_components[] = {
  2, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, LOCAL(2),
  // parse_string_component !text $string_component
  func_parse_string_component, 0, 2, var_text, var_3876_30_string_component,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_63_text_is_defined, lambda_1344, TAIL_CALL,
  POS(3875, 3),
  POS(3876, 3),
  POS(3878, 10),
  POS(3877, 3)
};

static TAB_NUM t_lambda_63_text_is_defined[] = {
  1, // locals
  0, // parameters
  // parse_string_components !text $string_components
  func_parse_string_components, 0, 2, var_text, var_3879_31_string_components,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1340, lambda_1343, TAIL_CALL,
  POS(3879, 7),
  POS(3881, 14),
  POS(3880, 7)
};

static TAB_NUM t_lambda_1340[] = {
  1, // locals
  0, // parameters
  // is_defined
  var_is_defined, 1, var_3879_31_string_components, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1341, lambda_1342, TAIL_CALL,
  POS(3884, 31),
  POS(3883, 11)
};

static TAB_NUM t_lambda_1341[] = {
  3, // locals
  0, // parameters
  // to_list
  func_to_list, 1, var_3876_30_string_component, 1, LOCAL(1),
  // to_list
  func_to_list, 1, var_3879_31_string_components, 1, LOCAL(2),
  // append
  var_append, 2, LOCAL(1), LOCAL(2), 1, LOCAL(3),
  // 
  LET, 2, var_text, LOCAL(3), TAIL_CALL,
  POS(3888, 34),
  POS(3889, 35),
  POS(3887, 15),
  POS(3885, 15)
};

static TAB_NUM t_lambda_1342[] = {
  1, // locals
  0, // parameters
  // to_list
  func_to_list, 1, var_3876_30_string_component, 1, LOCAL(1),
  //  text string_component.to_list
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(3890, 38),
  POS(3890, 15)
};

static TAB_NUM t_lambda_1343[] = {
  0, // locals
  0, // parameters
  //  undefined string_components
  LET, 2, var_undefined, var_3879_31_string_components, TAIL_CALL,
  POS(3891, 11)
};

static TAB_NUM t_lambda_1344[] = {
  0, // locals
  0, // parameters
  //  undefined string_component
  LET, 2, var_undefined, var_3876_30_string_component, TAIL_CALL,
  POS(3892, 7)
};

static TAB_NUM t_func_parse_string_component[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 5, lambda_1345, lambda_1348, lambda_1351, lambda_1354, lambda_1356, TAIL_CALL,
  POS(3895, 3)
};

static TAB_NUM t_lambda_1345[] = {
  3, // locals
  0, // parameters
  // text(1) == '@@'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '@@'
  var_std__equal, 2, LOCAL(1), chr_64, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_1346, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_1347, TAIL_CALL,
  POS(3898, 9),
  POS(3898, 9),
  POS(3897, 9),
  POS(3896, 7)
};

static TAB_NUM t_lambda_1346[] = {
  2, // locals
  0, // parameters
  // text(2) == '@@'
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '@@'
  var_std__equal, 2, LOCAL(1), chr_64, 1, LOCAL(2),
  // text(2) == '@@'
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(3899, 9),
  POS(3899, 9),
  POS(3899, 9)
};

static TAB_NUM t_lambda_1347[] = {
  0, // locals
  0, // parameters
  // range &text 3 -1
  var_range, 3, var_text, num_3, minus_num_1, 1, var_text,
  // parse_at_character_without_prefix
  func_parse_at_character_without_prefix, 0, TAIL_CALL,
  POS(3901, 9),
  POS(3902, 9)
};

static TAB_NUM t_lambda_1348[] = {
  3, // locals
  0, // parameters
  // text(1) == '@@'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '@@'
  var_std__equal, 2, LOCAL(1), chr_64, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_1349, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_1350, TAIL_CALL,
  POS(3905, 9),
  POS(3905, 9),
  POS(3904, 9),
  POS(3903, 7)
};

static TAB_NUM t_lambda_1349[] = {
  2, // locals
  0, // parameters
  // text(2) == ';'
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == ';'
  var_std__equal, 2, LOCAL(1), chr_59, 1, LOCAL(2),
  // text(2) == ';'
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(3906, 9),
  POS(3906, 9),
  POS(3906, 9)
};

static TAB_NUM t_lambda_1350[] = {
  0, // locals
  0, // parameters
  // range &text 3 -1
  var_range, 3, var_text, num_3, minus_num_1, 1, var_text,
  // parse_tagged_empty_character_without_prefix
  func_parse_tagged_empty_character_without_prefix, 0, TAIL_CALL,
  POS(3908, 9),
  POS(3909, 9)
};

static TAB_NUM t_lambda_1351[] = {
  3, // locals
  0, // parameters
  // text(1) == '@@'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '@@'
  var_std__equal, 2, LOCAL(1), chr_64, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_1352, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_1353, TAIL_CALL,
  POS(3912, 9),
  POS(3912, 9),
  POS(3911, 9),
  POS(3910, 7)
};

static TAB_NUM t_lambda_1352[] = {
  2, // locals
  0, // parameters
  // text(2) == '('
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '('
  var_std__equal, 2, LOCAL(1), chr_40, 1, LOCAL(2),
  // text(2) == '('
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(3913, 9),
  POS(3913, 9),
  POS(3913, 9)
};

static TAB_NUM t_lambda_1353[] = {
  0, // locals
  0, // parameters
  // range &text 3 -1
  var_range, 3, var_text, num_3, minus_num_1, 1, var_text,
  // parse_escape_expression_without_prefix
  func_parse_escape_expression_without_prefix, 0, TAIL_CALL,
  POS(3915, 9),
  POS(3916, 9)
};

static TAB_NUM t_lambda_1354[] = {
  2, // locals
  0, // parameters
  // text(1) == '@@'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '@@'
  var_std__equal, 2, LOCAL(1), chr_64, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_1355, TAIL_CALL,
  POS(3918, 7),
  POS(3918, 7),
  POS(3917, 7)
};

static TAB_NUM t_lambda_1355[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_special_character
  func_parse_special_character, 0, TAIL_CALL,
  POS(3920, 9),
  POS(3921, 9)
};

static TAB_NUM t_lambda_1356[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_1357, TAIL_CALL,
  POS(3922, 7)
};

static TAB_NUM t_lambda_1357[] = {
  0, // locals
  0, // parameters
  // !expected "string component"
  LET, 1, str_string_component_2, 1, var_expected,
  // !at text
  LET, 1, var_text, 1, var_at,
  // parse_character_sequence
  func_parse_character_sequence, 0, TAIL_CALL,
  POS(3925, 9),
  POS(3926, 9),
  POS(3927, 9)
};

static TAB_NUM t_func_parse_character_sequence[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_3930_1_position,
  // !str text
  LET, 1, var_text, 1, var_str,
  // parse_string_characters !text $string_characters
  func_parse_string_characters, 0, 2, var_text, var_3932_31_string_characters,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1358, lambda_1359, TAIL_CALL,
  POS(3930, 3),
  POS(3931, 3),
  POS(3932, 3),
  POS(3934, 10),
  POS(3933, 3)
};

static TAB_NUM t_lambda_1358[] = {
  1, // locals
  0, // parameters
  // funky_types::character_sequence
  LET, -3, var_funky_types__character_sequence, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_3930_1_position, var_funky__characters_of, var_3932_31_string_characters, LOCAL(1),
  // 
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(3937, 7),
  POS(3935, 7)
};

static TAB_NUM t_lambda_1359[] = {
  0, // locals
  0, // parameters
  //  undefined string_characters
  LET, 2, var_undefined, var_3932_31_string_characters, TAIL_CALL,
  POS(3941, 7)
};

static TAB_NUM t_func_parse_string_characters[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 2, lambda_1360, lambda_1364, TAIL_CALL,
  POS(3944, 3)
};

static TAB_NUM t_lambda_1360[] = {
  4, // locals
  0, // parameters
  // text(1) != '@nl;' && text(1) != '@@' && text(1) != '"'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) != '@nl;' && text(1) != '@@' && text(1) != '"'
  var_std__equal, 2, LOCAL(1), chr_10, 1, LOCAL(2),
  // text(1) != '@nl;' && text(1) != '@@' && text(1) != '"'
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) != '@nl;' && text(1) != '@@' && text(1) != '"'
  var_std__and, 2, LOCAL(3), lambda_1361, 1, LOCAL(4),
  // 
  LET, 2, LOCAL(4), lambda_1363, TAIL_CALL,
  POS(3946, 7),
  POS(3946, 7),
  POS(3946, 7),
  POS(3946, 7),
  POS(3945, 7)
};

static TAB_NUM t_lambda_1361[] = {
  4, // locals
  0, // parameters
  // text(1) != '@@' && text(1) != '"'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) != '@@' && text(1) != '"'
  var_std__equal, 2, LOCAL(1), chr_64, 1, LOCAL(2),
  // text(1) != '@@' && text(1) != '"'
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) != '@@' && text(1) != '"'
  var_std__and, 2, LOCAL(3), lambda_1362, 1, LOCAL(4),
  // text(1) != '@@' && text(1) != '"'
  LET, 1, LOCAL(4), TAIL_CALL,
  POS(3946, 28),
  POS(3946, 28),
  POS(3946, 28),
  POS(3946, 28),
  POS(3946, 28)
};

static TAB_NUM t_lambda_1362[] = {
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
  POS(3946, 47),
  POS(3946, 47),
  POS(3946, 47),
  POS(3946, 47)
};

static TAB_NUM t_lambda_1363[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_more_string_characters
  func_parse_more_string_characters, 0, TAIL_CALL,
  POS(3948, 9),
  POS(3949, 9)
};

static TAB_NUM t_lambda_1364[] = {
  0, // locals
  0, // parameters
  //  true:
  LET, 2, var_true, lambda_1365, TAIL_CALL,
  POS(3950, 7)
};

static TAB_NUM t_lambda_1365[] = {
  0, // locals
  0, // parameters
  // syntax_error "string characters"
  func_syntax_error, 1, str_string_character, TAIL_CALL,
  POS(3951, 7)
};

static TAB_NUM t_func_parse_more_string_characters[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 2, lambda_1366, lambda_1370, TAIL_CALL,
  POS(3954, 3)
};

static TAB_NUM t_lambda_1366[] = {
  4, // locals
  0, // parameters
  // text(1) != '@nl;' && text(1) != '@@' && text(1) != '"'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) != '@nl;' && text(1) != '@@' && text(1) != '"'
  var_std__equal, 2, LOCAL(1), chr_10, 1, LOCAL(2),
  // text(1) != '@nl;' && text(1) != '@@' && text(1) != '"'
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) != '@nl;' && text(1) != '@@' && text(1) != '"'
  var_std__and, 2, LOCAL(3), lambda_1367, 1, LOCAL(4),
  // 
  LET, 2, LOCAL(4), lambda_1369, TAIL_CALL,
  POS(3956, 7),
  POS(3956, 7),
  POS(3956, 7),
  POS(3956, 7),
  POS(3955, 7)
};

static TAB_NUM t_lambda_1367[] = {
  4, // locals
  0, // parameters
  // text(1) != '@@' && text(1) != '"'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) != '@@' && text(1) != '"'
  var_std__equal, 2, LOCAL(1), chr_64, 1, LOCAL(2),
  // text(1) != '@@' && text(1) != '"'
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) != '@@' && text(1) != '"'
  var_std__and, 2, LOCAL(3), lambda_1368, 1, LOCAL(4),
  // text(1) != '@@' && text(1) != '"'
  LET, 1, LOCAL(4), TAIL_CALL,
  POS(3956, 28),
  POS(3956, 28),
  POS(3956, 28),
  POS(3956, 28),
  POS(3956, 28)
};

static TAB_NUM t_lambda_1368[] = {
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
  POS(3956, 47),
  POS(3956, 47),
  POS(3956, 47),
  POS(3956, 47)
};

static TAB_NUM t_lambda_1369[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_more_string_characters
  func_parse_more_string_characters, 0, TAIL_CALL,
  POS(3958, 9),
  POS(3959, 9)
};

static TAB_NUM t_lambda_1370[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_1371, TAIL_CALL,
  POS(3960, 7)
};

static TAB_NUM t_lambda_1371[] = {
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
  POS(3962, 27),
  POS(3962, 42),
  POS(3962, 27),
  POS(3962, 15),
  POS(3962, 9)
};

static TAB_NUM t_func_parse_multiline_string_literal_without_prefix[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_3965_1_position,
  // $multiline_string_components parse_lines(funky::parse_multiline_string_components_group)
  func_parse_lines, 1, var_funky__parse_multiline_string_components_group, 1, var_3966_1_multiline_string_components,
  // $error find_first(multiline_string_components is_an_error)
  var_find_first, 2, var_3966_1_multiline_string_components, var_is_an_error, 1, var_3967_1_error,
  // is_an_error
  var_is_an_error, 1, var_3967_1_error, 1, LOCAL(1),
  // if error.is_an_error
  var_if, 3, LOCAL(1), lambda_1372, lambda_1373, TAIL_CALL,
  POS(3965, 3),
  POS(3966, 3),
  POS(3967, 3),
  POS(3968, 12),
  POS(3968, 3)
};

static TAB_NUM t_lambda_1372[] = {
  0, // locals
  0, // parameters
  //  undefined error
  LET, 2, var_undefined, var_3967_1_error, TAIL_CALL,
  POS(3969, 7)
};

static TAB_NUM t_lambda_1373[] = {
  1, // locals
  0, // parameters
  // funky_types::string_literal
  LET, -3, var_funky_types__string_literal, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_3965_1_position, var_funky__components_of, var_3966_1_multiline_string_components, LOCAL(1),
  // 
  LET, 2, string_1, LOCAL(1), TAIL_CALL,
  POS(3972, 7),
  POS(3970, 7)
};

static TAB_NUM t_func_parse_multiline_string_components[] = {
  2, // locals
  0, // parameters
  // cond $rest $expr
  var_cond, 3, lambda_1374, lambda_1377, lambda_1379, 2, LOCAL(2), var_3978_12_expr,
  // cond
  var_cond, 3, lambda_1381, lambda_1383, lambda_1385, 1, LOCAL(1),
  // ->
  LET, 2, LOCAL(2), LOCAL(1), TAIL_CALL,
  POS(3978, 3),
  POS(3998, 5),
  POS(3996, 3)
};

static TAB_NUM t_lambda_1374[] = {
  3, // locals
  0, // parameters
  // text(1) == '@@'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '@@'
  var_std__equal, 2, LOCAL(1), chr_64, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_1375, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_1376, TAIL_CALL,
  POS(3981, 9),
  POS(3981, 9),
  POS(3980, 9),
  POS(3979, 7)
};

static TAB_NUM t_lambda_1375[] = {
  2, // locals
  0, // parameters
  // text(2) == '@nl;'
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '@nl;'
  var_std__equal, 2, LOCAL(1), chr_10, 1, LOCAL(2),
  // text(2) == '@nl;'
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(3982, 9),
  POS(3982, 9),
  POS(3982, 9)
};

static TAB_NUM t_lambda_1376[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_string_line_end_without_prefix
  func_parse_string_line_end_without_prefix, 0, TAIL_CALL,
  POS(3984, 9),
  POS(3985, 9)
};

static TAB_NUM t_lambda_1377[] = {
  2, // locals
  0, // parameters
  // text(1) == '@nl;'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '@nl;'
  var_std__equal, 2, LOCAL(1), chr_10, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_1378, TAIL_CALL,
  POS(3987, 7),
  POS(3987, 7),
  POS(3986, 7)
};

static TAB_NUM t_lambda_1378[] = {
  0, // locals
  0, // parameters
  // parse_newline_without_prefix
  func_parse_newline_without_prefix, 0, TAIL_CALL,
  POS(3989, 9)
};

static TAB_NUM t_lambda_1379[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_1380, TAIL_CALL,
  POS(3990, 7)
};

static TAB_NUM t_lambda_1380[] = {
  0, // locals
  0, // parameters
  // !expected "multiline string components"
  LET, 1, str_multiline_string, 1, var_expected,
  // !at text
  LET, 1, var_text, 1, var_at,
  // parse_some_string_line_components
  func_parse_some_string_line_components, 0, TAIL_CALL,
  POS(3993, 9),
  POS(3994, 9),
  POS(3995, 9)
};

static TAB_NUM t_lambda_1381[] = {
  1, // locals
  0, // parameters
  // is_undefined -> empty_list
  var_is_undefined, 1, var_3978_12_expr, 1, LOCAL(1),
  //  expr.is_undefined -> empty_list
  LET, 2, LOCAL(1), lambda_1382, TAIL_CALL,
  POS(3999, 15),
  POS(3999, 9)
};

static TAB_NUM t_lambda_1382[] = {
  0, // locals
  0, // parameters
  //  empty_list
  LET, 1, var_empty_list, TAIL_CALL,
  POS(3999, 30)
};

static TAB_NUM t_lambda_1383[] = {
  1, // locals
  0, // parameters
  // is_a_list -> expr
  var_is_a_list, 1, var_3978_12_expr, 1, LOCAL(1),
  //  expr.is_a_list -> expr
  LET, 2, LOCAL(1), lambda_1384, TAIL_CALL,
  POS(4000, 15),
  POS(4000, 9)
};

static TAB_NUM t_lambda_1384[] = {
  0, // locals
  0, // parameters
  //  expr
  LET, 1, var_3978_12_expr, TAIL_CALL,
  POS(4000, 27)
};

static TAB_NUM t_lambda_1385[] = {
  0, // locals
  0, // parameters
  //  true -> list(expr)
  LET, 2, var_true, lambda_1386, TAIL_CALL,
  POS(4001, 9)
};

static TAB_NUM t_lambda_1386[] = {
  1, // locals
  0, // parameters
  // list(expr)
  var_list, 1, var_3978_12_expr, 1, LOCAL(1),
  //  list(expr)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(4001, 18),
  POS(4001, 17)
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
  POS(4004, 3),
  POS(4007, 5),
  POS(4005, 3)
};

static TAB_NUM t_func_parse_some_string_line_components[] = {
  2, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, LOCAL(2),
  // parse_string_line_component !text $string_line_component
  func_parse_string_line_component, 0, 2, var_text, var_4013_35_string_line_component,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_64_text_is_defined, lambda_1391, TAIL_CALL,
  POS(4012, 3),
  POS(4013, 3),
  POS(4015, 10),
  POS(4014, 3)
};

static TAB_NUM t_lambda_64_text_is_defined[] = {
  1, // locals
  0, // parameters
  // parse_multiline_string_components !text $multiline_string_components
  func_parse_multiline_string_components, 0, 2, var_text, var_4016_41_multiline_string_components,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1387, lambda_1390, TAIL_CALL,
  POS(4016, 7),
  POS(4018, 14),
  POS(4017, 7)
};

static TAB_NUM t_lambda_1387[] = {
  1, // locals
  0, // parameters
  // is_defined
  var_is_defined, 1, var_4016_41_multiline_string_components, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1388, lambda_1389, TAIL_CALL,
  POS(4021, 41),
  POS(4020, 11)
};

static TAB_NUM t_lambda_1388[] = {
  3, // locals
  0, // parameters
  // to_list
  func_to_list, 1, var_4013_35_string_line_component, 1, LOCAL(1),
  // to_list
  func_to_list, 1, var_4016_41_multiline_string_components, 1, LOCAL(2),
  // append
  var_append, 2, LOCAL(1), LOCAL(2), 1, LOCAL(3),
  // 
  LET, 2, var_text, LOCAL(3), TAIL_CALL,
  POS(4025, 39),
  POS(4026, 45),
  POS(4024, 15),
  POS(4022, 15)
};

static TAB_NUM t_lambda_1389[] = {
  1, // locals
  0, // parameters
  // to_list
  func_to_list, 1, var_4013_35_string_line_component, 1, LOCAL(1),
  //  text string_line_component.to_list
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(4027, 43),
  POS(4027, 15)
};

static TAB_NUM t_lambda_1390[] = {
  0, // locals
  0, // parameters
  //  undefined multiline_string_components
  LET, 2, var_undefined, var_4016_41_multiline_string_components, TAIL_CALL,
  POS(4028, 11)
};

static TAB_NUM t_lambda_1391[] = {
  0, // locals
  0, // parameters
  //  undefined string_line_component
  LET, 2, var_undefined, var_4013_35_string_line_component, TAIL_CALL,
  POS(4029, 7)
};

static TAB_NUM t_func_parse_string_line_component[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 5, lambda_1392, lambda_1395, lambda_1398, lambda_1401, lambda_1403, TAIL_CALL,
  POS(4032, 3)
};

static TAB_NUM t_lambda_1392[] = {
  3, // locals
  0, // parameters
  // text(1) == '@@'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '@@'
  var_std__equal, 2, LOCAL(1), chr_64, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_1393, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_1394, TAIL_CALL,
  POS(4035, 9),
  POS(4035, 9),
  POS(4034, 9),
  POS(4033, 7)
};

static TAB_NUM t_lambda_1393[] = {
  2, // locals
  0, // parameters
  // text(2) == '@@'
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '@@'
  var_std__equal, 2, LOCAL(1), chr_64, 1, LOCAL(2),
  // text(2) == '@@'
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(4036, 9),
  POS(4036, 9),
  POS(4036, 9)
};

static TAB_NUM t_lambda_1394[] = {
  0, // locals
  0, // parameters
  // range &text 3 -1
  var_range, 3, var_text, num_3, minus_num_1, 1, var_text,
  // parse_at_character_without_prefix
  func_parse_at_character_without_prefix, 0, TAIL_CALL,
  POS(4038, 9),
  POS(4039, 9)
};

static TAB_NUM t_lambda_1395[] = {
  3, // locals
  0, // parameters
  // text(1) == '@@'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '@@'
  var_std__equal, 2, LOCAL(1), chr_64, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_1396, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_1397, TAIL_CALL,
  POS(4042, 9),
  POS(4042, 9),
  POS(4041, 9),
  POS(4040, 7)
};

static TAB_NUM t_lambda_1396[] = {
  2, // locals
  0, // parameters
  // text(2) == ';'
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == ';'
  var_std__equal, 2, LOCAL(1), chr_59, 1, LOCAL(2),
  // text(2) == ';'
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(4043, 9),
  POS(4043, 9),
  POS(4043, 9)
};

static TAB_NUM t_lambda_1397[] = {
  0, // locals
  0, // parameters
  // range &text 3 -1
  var_range, 3, var_text, num_3, minus_num_1, 1, var_text,
  // parse_tagged_empty_character_without_prefix
  func_parse_tagged_empty_character_without_prefix, 0, TAIL_CALL,
  POS(4045, 9),
  POS(4046, 9)
};

static TAB_NUM t_lambda_1398[] = {
  3, // locals
  0, // parameters
  // text(1) == '@@'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '@@'
  var_std__equal, 2, LOCAL(1), chr_64, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_1399, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_1400, TAIL_CALL,
  POS(4049, 9),
  POS(4049, 9),
  POS(4048, 9),
  POS(4047, 7)
};

static TAB_NUM t_lambda_1399[] = {
  2, // locals
  0, // parameters
  // text(2) == '('
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '('
  var_std__equal, 2, LOCAL(1), chr_40, 1, LOCAL(2),
  // text(2) == '('
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(4050, 9),
  POS(4050, 9),
  POS(4050, 9)
};

static TAB_NUM t_lambda_1400[] = {
  0, // locals
  0, // parameters
  // range &text 3 -1
  var_range, 3, var_text, num_3, minus_num_1, 1, var_text,
  // parse_escape_expression_without_prefix
  func_parse_escape_expression_without_prefix, 0, TAIL_CALL,
  POS(4052, 9),
  POS(4053, 9)
};

static TAB_NUM t_lambda_1401[] = {
  2, // locals
  0, // parameters
  // text(1) == '@@'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '@@'
  var_std__equal, 2, LOCAL(1), chr_64, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_1402, TAIL_CALL,
  POS(4055, 7),
  POS(4055, 7),
  POS(4054, 7)
};

static TAB_NUM t_lambda_1402[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_special_character
  func_parse_special_character, 0, TAIL_CALL,
  POS(4057, 9),
  POS(4058, 9)
};

static TAB_NUM t_lambda_1403[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_1404, TAIL_CALL,
  POS(4059, 7)
};

static TAB_NUM t_lambda_1404[] = {
  0, // locals
  0, // parameters
  // !expected "string line component"
  LET, 1, str_string_line_comp, 1, var_expected,
  // !at text
  LET, 1, var_text, 1, var_at,
  // parse_string_line_character_sequence
  func_parse_string_line_character_sequence, 0, TAIL_CALL,
  POS(4062, 9),
  POS(4063, 9),
  POS(4064, 9)
};

static TAB_NUM t_func_parse_string_line_end_without_prefix[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, LOCAL(1),
  // ->
  LET, 2, var_text, var_undefined, TAIL_CALL,
  POS(4067, 3),
  POS(4068, 3)
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
  POS(4073, 3),
  POS(4076, 5),
  POS(4074, 3)
};

static TAB_NUM t_func_parse_tagged_empty_character_without_prefix[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_4081_1_position,
  // parse_empty_character_without_prefix !text $empty_character
  func_parse_empty_character_without_prefix, 0, 2, var_text, var_4082_44_empty_character,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1405, lambda_1406, TAIL_CALL,
  POS(4081, 3),
  POS(4082, 3),
  POS(4084, 10),
  POS(4083, 3)
};

static TAB_NUM t_lambda_1405[] = {
  1, // locals
  0, // parameters
  // funky_types::tagged_empty_character
  LET, -3, var_funky_types__tagged_empty_character, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_4081_1_position, var_funky__character_of, var_4082_44_empty_character, LOCAL(1),
  // 
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(4087, 7),
  POS(4085, 7)
};

static TAB_NUM t_lambda_1406[] = {
  0, // locals
  0, // parameters
  //  undefined empty_character
  LET, 2, var_undefined, var_4082_44_empty_character, TAIL_CALL,
  POS(4091, 7)
};

static TAB_NUM t_func_parse_empty_character_without_prefix[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, LOCAL(1),
  // ->
  LET, 2, var_text, var_undefined, TAIL_CALL,
  POS(4094, 3),
  POS(4095, 3)
};

static TAB_NUM t_func_parse_escape_expression_without_prefix[] = {
  2, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, LOCAL(2),
  // parse_expression funky_types::escape_expression !text $expression
  func_parse_expression, 1, var_funky_types__escape_expression, 2, var_text, var_4101_55_expression,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_65_text_is_defined, lambda_1409, TAIL_CALL,
  POS(4100, 3),
  POS(4101, 3),
  POS(4103, 10),
  POS(4102, 3)
};

static TAB_NUM t_lambda_65_text_is_defined[] = {
  2, // locals
  0, // parameters
  // text(1) == ')'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == ')'
  var_std__equal, 2, LOCAL(1), chr_41, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_1407, lambda_1408, TAIL_CALL,
  POS(4105, 9),
  POS(4105, 9),
  POS(4104, 7)
};

static TAB_NUM t_lambda_1407[] = {
  1, // locals
  0, // parameters
  // range(text 2 -1) expression
  var_range, 3, var_text, num_2, minus_num_1, 1, LOCAL(1),
  //  range(text 2 -1) expression
  LET, 2, LOCAL(1), var_4101_55_expression, TAIL_CALL,
  POS(4106, 12),
  POS(4106, 11)
};

static TAB_NUM t_lambda_1408[] = {
  0, // locals
  0, // parameters
  // syntax_error "')'"
  func_syntax_error, 1, string_6, TAIL_CALL,
  POS(4108, 11)
};

static TAB_NUM t_lambda_1409[] = {
  0, // locals
  0, // parameters
  //  undefined expression
  LET, 2, var_undefined, var_4101_55_expression, TAIL_CALL,
  POS(4109, 7)
};

static TAB_NUM t_func_parse_special_character[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 2, lambda_1410, lambda_1415, TAIL_CALL,
  POS(4112, 3)
};

static TAB_NUM t_lambda_1410[] = {
  5, // locals
  0, // parameters
  // text(1) >= 'a' && text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z')
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) >= 'a' && text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z')
  var_std__less, 2, LOCAL(1), chr_97, 1, LOCAL(2),
  // text(1) >= 'a' && text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) >= 'a' && text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z')
  var_std__and, 2, LOCAL(3), lambda_1411, 1, LOCAL(4),
  // text(1) >= 'a' && text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z')
  var_std__or, 2, LOCAL(4), lambda_1412, 1, LOCAL(5),
  // 
  LET, 2, LOCAL(5), lambda_1414, TAIL_CALL,
  POS(4114, 8),
  POS(4114, 8),
  POS(4114, 8),
  POS(4114, 8),
  POS(4114, 8),
  POS(4113, 7)
};

static TAB_NUM t_lambda_1411[] = {
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
  POS(4114, 26),
  POS(4114, 38),
  POS(4114, 38),
  POS(4114, 26)
};

static TAB_NUM t_lambda_1412[] = {
  4, // locals
  0, // parameters
  // text(1) >= 'A' && text(1) <= 'Z')
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) >= 'A' && text(1) <= 'Z')
  var_std__less, 2, LOCAL(1), chr_65, 1, LOCAL(2),
  // text(1) >= 'A' && text(1) <= 'Z')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) >= 'A' && text(1) <= 'Z')
  var_std__and, 2, LOCAL(3), lambda_1413, 1, LOCAL(4),
  // text(1) >= 'A' && text(1) <= 'Z')
  LET, 1, LOCAL(4), TAIL_CALL,
  POS(4114, 46),
  POS(4114, 46),
  POS(4114, 46),
  POS(4114, 46),
  POS(4114, 46)
};

static TAB_NUM t_lambda_1413[] = {
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
  POS(4114, 64),
  POS(4114, 76),
  POS(4114, 76),
  POS(4114, 64)
};

static TAB_NUM t_lambda_1414[] = {
  0, // locals
  0, // parameters
  // !str text
  LET, 1, var_text, 1, var_str,
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_named_character_without_prefix
  func_parse_named_character_without_prefix, 0, TAIL_CALL,
  POS(4116, 9),
  POS(4117, 9),
  POS(4118, 9)
};

static TAB_NUM t_lambda_1415[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_1416, TAIL_CALL,
  POS(4119, 7)
};

static TAB_NUM t_lambda_1416[] = {
  0, // locals
  0, // parameters
  // !expected "special character"
  LET, 1, str_special_characte_2, 1, var_expected,
  // !at text
  LET, 1, var_text, 1, var_at,
  // parse_numeric_character
  func_parse_numeric_character, 0, TAIL_CALL,
  POS(4122, 9),
  POS(4123, 9),
  POS(4124, 9)
};

static TAB_NUM t_func_parse_named_character_without_prefix[] = {
  1, // locals
  0, // parameters
  // $position str
  LET, 1, var_str, 1, var_4127_1_position,
  // parse_more_character_name_characters !text $character_name
  func_parse_more_character_name_characters, 0, 2, var_text, var_4128_44_character_name,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_66_text_is_defined, lambda_1419, TAIL_CALL,
  POS(4127, 3),
  POS(4128, 3),
  POS(4130, 10),
  POS(4129, 3)
};

static TAB_NUM t_lambda_66_text_is_defined[] = {
  2, // locals
  0, // parameters
  // text(1) == ';'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == ';'
  var_std__equal, 2, LOCAL(1), chr_59, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_1417, lambda_1418, TAIL_CALL,
  POS(4132, 9),
  POS(4132, 9),
  POS(4131, 7)
};

static TAB_NUM t_lambda_1417[] = {
  2, // locals
  0, // parameters
  // range(text 2 -1)
  var_range, 3, var_text, num_2, minus_num_1, 1, LOCAL(1),
  // funky_types::named_character
  LET, -3, var_funky_types__named_character, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_4127_1_position, var_funky__name_of, var_4128_44_character_name, LOCAL(2),
  // 
  LET, 2, LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(4134, 11),
  POS(4135, 11),
  POS(4133, 11)
};

static TAB_NUM t_lambda_1418[] = {
  0, // locals
  0, // parameters
  // syntax_error "';'"
  func_syntax_error, 1, string_9, TAIL_CALL,
  POS(4140, 11)
};

static TAB_NUM t_lambda_1419[] = {
  0, // locals
  0, // parameters
  //  undefined character_name
  LET, 2, var_undefined, var_4128_44_character_name, TAIL_CALL,
  POS(4141, 7)
};

static TAB_NUM t_func_parse_numeric_character[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_4144_1_position,
  // !str text
  LET, 1, var_text, 1, var_str,
  // parse_digits !text $digits
  func_parse_digits, 0, 2, var_text, var_4146_20_digits,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_67_text_is_defined, lambda_1422, TAIL_CALL,
  POS(4144, 3),
  POS(4145, 3),
  POS(4146, 3),
  POS(4148, 10),
  POS(4147, 3)
};

static TAB_NUM t_lambda_67_text_is_defined[] = {
  2, // locals
  0, // parameters
  // text(1) == ';'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == ';'
  var_std__equal, 2, LOCAL(1), chr_59, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_1420, lambda_1421, TAIL_CALL,
  POS(4150, 9),
  POS(4150, 9),
  POS(4149, 7)
};

static TAB_NUM t_lambda_1420[] = {
  2, // locals
  0, // parameters
  // range(text 2 -1)
  var_range, 3, var_text, num_2, minus_num_1, 1, LOCAL(1),
  // funky_types::numeric_character
  LET, -3, var_funky_types__numeric_character, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_4144_1_position, var_funky__digits_of, var_4146_20_digits, LOCAL(2),
  // 
  LET, 2, LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(4152, 11),
  POS(4153, 11),
  POS(4151, 11)
};

static TAB_NUM t_lambda_1421[] = {
  0, // locals
  0, // parameters
  // syntax_error "';'"
  func_syntax_error, 1, string_9, TAIL_CALL,
  POS(4158, 11)
};

static TAB_NUM t_lambda_1422[] = {
  0, // locals
  0, // parameters
  //  undefined digits
  LET, 2, var_undefined, var_4146_20_digits, TAIL_CALL,
  POS(4159, 7)
};

static TAB_NUM t_func_parse_string_line_character_sequence[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_4162_1_position,
  // !str text
  LET, 1, var_text, 1, var_str,
  // parse_string_line_characters !text $string_line_characters
  func_parse_string_line_characters, 0, 2, var_text, var_4164_36_string_line_characters,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1423, lambda_1424, TAIL_CALL,
  POS(4162, 3),
  POS(4163, 3),
  POS(4164, 3),
  POS(4166, 10),
  POS(4165, 3)
};

static TAB_NUM t_lambda_1423[] = {
  1, // locals
  0, // parameters
  // funky_types::character_sequence
  LET, -3, var_funky_types__character_sequence, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_4162_1_position, var_funky__characters_of, var_4164_36_string_line_characters, LOCAL(1),
  // 
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(4169, 7),
  POS(4167, 7)
};

static TAB_NUM t_lambda_1424[] = {
  0, // locals
  0, // parameters
  //  undefined string_line_characters
  LET, 2, var_undefined, var_4164_36_string_line_characters, TAIL_CALL,
  POS(4173, 7)
};

static TAB_NUM t_func_parse_string_line_characters[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 2, lambda_1425, lambda_1428, TAIL_CALL,
  POS(4176, 3)
};

static TAB_NUM t_lambda_1425[] = {
  4, // locals
  0, // parameters
  // text(1) != '@nl;' && text(1) != '@@'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) != '@nl;' && text(1) != '@@'
  var_std__equal, 2, LOCAL(1), chr_10, 1, LOCAL(2),
  // text(1) != '@nl;' && text(1) != '@@'
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) != '@nl;' && text(1) != '@@'
  var_std__and, 2, LOCAL(3), lambda_1426, 1, LOCAL(4),
  // 
  LET, 2, LOCAL(4), lambda_1427, TAIL_CALL,
  POS(4178, 7),
  POS(4178, 7),
  POS(4178, 7),
  POS(4178, 7),
  POS(4177, 7)
};

static TAB_NUM t_lambda_1426[] = {
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
  POS(4178, 28),
  POS(4178, 28),
  POS(4178, 28),
  POS(4178, 28)
};

static TAB_NUM t_lambda_1427[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_more_string_line_characters
  func_parse_more_string_line_characters, 0, TAIL_CALL,
  POS(4180, 9),
  POS(4181, 9)
};

static TAB_NUM t_lambda_1428[] = {
  0, // locals
  0, // parameters
  //  true:
  LET, 2, var_true, lambda_1429, TAIL_CALL,
  POS(4182, 7)
};

static TAB_NUM t_lambda_1429[] = {
  0, // locals
  0, // parameters
  // syntax_error "string line characters"
  func_syntax_error, 1, str_string_line_char, TAIL_CALL,
  POS(4183, 7)
};

static TAB_NUM t_func_parse_more_string_line_characters[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 2, lambda_1430, lambda_1433, TAIL_CALL,
  POS(4186, 3)
};

static TAB_NUM t_lambda_1430[] = {
  4, // locals
  0, // parameters
  // text(1) != '@nl;' && text(1) != '@@'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) != '@nl;' && text(1) != '@@'
  var_std__equal, 2, LOCAL(1), chr_10, 1, LOCAL(2),
  // text(1) != '@nl;' && text(1) != '@@'
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) != '@nl;' && text(1) != '@@'
  var_std__and, 2, LOCAL(3), lambda_1431, 1, LOCAL(4),
  // 
  LET, 2, LOCAL(4), lambda_1432, TAIL_CALL,
  POS(4188, 7),
  POS(4188, 7),
  POS(4188, 7),
  POS(4188, 7),
  POS(4187, 7)
};

static TAB_NUM t_lambda_1431[] = {
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
  POS(4188, 28),
  POS(4188, 28),
  POS(4188, 28),
  POS(4188, 28)
};

static TAB_NUM t_lambda_1432[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_more_string_line_characters
  func_parse_more_string_line_characters, 0, TAIL_CALL,
  POS(4190, 9),
  POS(4191, 9)
};

static TAB_NUM t_lambda_1433[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_1434, TAIL_CALL,
  POS(4192, 7)
};

static TAB_NUM t_lambda_1434[] = {
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
  POS(4194, 27),
  POS(4194, 42),
  POS(4194, 27),
  POS(4194, 15),
  POS(4194, 9)
};

static TAB_NUM t_func_parse_unique_without_prefix[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_4197_1_position,
  // parse_trailing_remarks !text $trailing_remarks
  func_parse_trailing_remarks, 0, 2, var_text, var_4198_30_trailing_remarks,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1435, lambda_1436, TAIL_CALL,
  POS(4197, 3),
  POS(4198, 3),
  POS(4200, 10),
  POS(4199, 3)
};

static TAB_NUM t_lambda_1435[] = {
  1, // locals
  0, // parameters
  // funky_types::unique
  LET, -3, var_funky_types__unique, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_4197_1_position, var_funky__remarks_of, var_4198_30_trailing_remarks, LOCAL(1),
  // 
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(4203, 7),
  POS(4201, 7)
};

static TAB_NUM t_lambda_1436[] = {
  0, // locals
  0, // parameters
  //  undefined trailing_remarks
  LET, 2, var_undefined, var_4198_30_trailing_remarks, TAIL_CALL,
  POS(4207, 7)
};

static TAB_NUM t_func_parse_attribute_without_prefix[] = {
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
  // funky_types::attribute
  LET, -3, var_funky_types__attribute, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_4210_1_position, var_funky__remarks_of, var_4211_30_trailing_remarks, LOCAL(1),
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

static TAB_NUM t_func_parse_attribute_with_setter_without_prefix[] = {
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
  // funky_types::attribute_with_setter
  LET, -3, var_funky_types__attribute_with_setter, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_4223_1_position, var_funky__remarks_of, var_4224_30_trailing_remarks, LOCAL(1),
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

static TAB_NUM t_func_parse_body[] = {
  1, // locals
  -1, // parameters
  var_undefined, var_4237_0_derived_node,
  // $position text
  LET, 1, var_text, 1, var_4239_1_position,
  // parse_inline_parameters !text $inline_parameters
  func_parse_inline_parameters, 0, 2, var_text, var_4240_31_inline_parameters,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_68_text_is_defined, lambda_1444, TAIL_CALL,
  POS(4239, 3),
  POS(4240, 3),
  POS(4242, 10),
  POS(4241, 3)
};

static TAB_NUM t_lambda_68_text_is_defined[] = {
  1, // locals
  0, // parameters
  // parse_optional_line_end_remark !text $optional_line_end_remark
  func_parse_optional_line_end_remark, 0, 2, var_text, var_4243_38_optional_line_end_remark,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_69_text_is_defined, lambda_1443, TAIL_CALL,
  POS(4243, 7),
  POS(4245, 14),
  POS(4244, 7)
};

static TAB_NUM t_lambda_69_text_is_defined[] = {
  1, // locals
  0, // parameters
  // parse_body_statements !text $body_statements
  func_parse_body_statements, 0, 2, var_text, var_4246_29_body_statements,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1441, lambda_1442, TAIL_CALL,
  POS(4246, 11),
  POS(4248, 18),
  POS(4247, 11)
};

static TAB_NUM t_lambda_1441[] = {
  2, // locals
  0, // parameters
  // default_value(derived_node funky_types::body)
  var_default_value, 2, var_4237_0_derived_node, var_funky_types__body, 1, LOCAL(1),
  // default_value(derived_node funky_types::body)
  LET, -5, LOCAL(1), var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_4239_1_position, var_funky__parameters_of, var_4240_31_inline_parameters, var_funky__remark_of, var_4243_38_optional_line_end_remark, var_funky__statements_of, var_4246_29_body_statements, LOCAL(2),
  // 
  LET, 2, var_text, LOCAL(2), TAIL_CALL,
  POS(4251, 15),
  POS(4251, 15),
  POS(4249, 15)
};

static TAB_NUM t_lambda_1442[] = {
  0, // locals
  0, // parameters
  //  undefined body_statements
  LET, 2, var_undefined, var_4246_29_body_statements, TAIL_CALL,
  POS(4257, 15)
};

static TAB_NUM t_lambda_1443[] = {
  0, // locals
  0, // parameters
  //  undefined optional_line_end_remark
  LET, 2, var_undefined, var_4243_38_optional_line_end_remark, TAIL_CALL,
  POS(4258, 11)
};

static TAB_NUM t_lambda_1444[] = {
  0, // locals
  0, // parameters
  //  undefined inline_parameters
  LET, 2, var_undefined, var_4240_31_inline_parameters, TAIL_CALL,
  POS(4259, 7)
};

static TAB_NUM t_func_parse_optional_line_end_remark[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 2, lambda_1445, lambda_1448, TAIL_CALL,
  POS(4262, 3)
};

static TAB_NUM t_lambda_1445[] = {
  3, // locals
  0, // parameters
  // text(1) == ' '
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_1446, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_1447, TAIL_CALL,
  POS(4265, 9),
  POS(4265, 9),
  POS(4264, 9),
  POS(4263, 7)
};

static TAB_NUM t_lambda_1446[] = {
  2, // locals
  0, // parameters
  // text(2) == '#'
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '#'
  var_std__equal, 2, LOCAL(1), chr_35, 1, LOCAL(2),
  // text(2) == '#'
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(4266, 9),
  POS(4266, 9),
  POS(4266, 9)
};

static TAB_NUM t_lambda_1447[] = {
  0, // locals
  0, // parameters
  // range &text 3 -1
  var_range, 3, var_text, num_3, minus_num_1, 1, var_text,
  // parse_spaced_remark_without_prefix
  func_parse_spaced_remark_without_prefix, 0, TAIL_CALL,
  POS(4268, 9),
  POS(4269, 9)
};

static TAB_NUM t_lambda_1448[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_1449, TAIL_CALL,
  POS(4270, 7)
};

static TAB_NUM t_lambda_1449[] = {
  0, // locals
  0, // parameters
  //  text undefined
  LET, 2, var_text, var_undefined, TAIL_CALL,
  POS(4272, 9)
};

static TAB_NUM t_func_parse_body_statements[] = {
  2, // locals
  0, // parameters
  // cond $rest $expr
  var_cond, 2, lambda_1450, lambda_1452, 2, LOCAL(2), var_4275_12_expr,
  // cond
  var_cond, 3, lambda_1454, lambda_1456, lambda_1458, 1, LOCAL(1),
  // ->
  LET, 2, LOCAL(2), LOCAL(1), TAIL_CALL,
  POS(4275, 3),
  POS(4289, 5),
  POS(4287, 3)
};

static TAB_NUM t_lambda_1450[] = {
  2, // locals
  0, // parameters
  // text(1) == ' '
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_1451, TAIL_CALL,
  POS(4277, 7),
  POS(4277, 7),
  POS(4276, 7)
};

static TAB_NUM t_lambda_1451[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_line_end_statement_without_prefix
  func_parse_line_end_statement_without_prefix, 0, TAIL_CALL,
  POS(4279, 9),
  POS(4280, 9)
};

static TAB_NUM t_lambda_1452[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_1453, TAIL_CALL,
  POS(4281, 7)
};

static TAB_NUM t_lambda_1453[] = {
  0, // locals
  0, // parameters
  // !expected "body statements"
  LET, 1, str_body_statements, 1, var_expected,
  // !at text
  LET, 1, var_text, 1, var_at,
  // parse_statements
  func_parse_statements, 0, TAIL_CALL,
  POS(4284, 9),
  POS(4285, 9),
  POS(4286, 9)
};

static TAB_NUM t_lambda_1454[] = {
  1, // locals
  0, // parameters
  // is_undefined -> empty_list
  var_is_undefined, 1, var_4275_12_expr, 1, LOCAL(1),
  //  expr.is_undefined -> empty_list
  LET, 2, LOCAL(1), lambda_1455, TAIL_CALL,
  POS(4290, 15),
  POS(4290, 9)
};

static TAB_NUM t_lambda_1455[] = {
  0, // locals
  0, // parameters
  //  empty_list
  LET, 1, var_empty_list, TAIL_CALL,
  POS(4290, 30)
};

static TAB_NUM t_lambda_1456[] = {
  1, // locals
  0, // parameters
  // is_a_list -> expr
  var_is_a_list, 1, var_4275_12_expr, 1, LOCAL(1),
  //  expr.is_a_list -> expr
  LET, 2, LOCAL(1), lambda_1457, TAIL_CALL,
  POS(4291, 15),
  POS(4291, 9)
};

static TAB_NUM t_lambda_1457[] = {
  0, // locals
  0, // parameters
  //  expr
  LET, 1, var_4275_12_expr, TAIL_CALL,
  POS(4291, 27)
};

static TAB_NUM t_lambda_1458[] = {
  0, // locals
  0, // parameters
  //  true -> list(expr)
  LET, 2, var_true, lambda_1459, TAIL_CALL,
  POS(4292, 9)
};

static TAB_NUM t_lambda_1459[] = {
  1, // locals
  0, // parameters
  // list(expr)
  var_list, 1, var_4275_12_expr, 1, LOCAL(1),
  //  list(expr)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(4292, 18),
  POS(4292, 17)
};

static TAB_NUM t_func_parse_line_end_statement_without_prefix[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, LOCAL(1),
  // parse_statement
  func_parse_statement, 0, TAIL_CALL,
  POS(4295, 3),
  POS(4296, 3)
};

static TAB_NUM t_func_parse_inline_body_without_prefix[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_4299_1_position,
  // parse_inline_parameters !text $inline_parameters
  func_parse_inline_parameters, 0, 2, var_text, var_4300_31_inline_parameters,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_70_text_is_defined, lambda_1464, TAIL_CALL,
  POS(4299, 3),
  POS(4300, 3),
  POS(4302, 10),
  POS(4301, 3)
};

static TAB_NUM t_lambda_70_text_is_defined[] = {
  2, // locals
  0, // parameters
  // text(1) == ' ':
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == ' ':
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_1460, lambda_1463, TAIL_CALL,
  POS(4304, 9),
  POS(4304, 9),
  POS(4303, 7)
};

static TAB_NUM t_lambda_1460[] = {
  1, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_inline_statement !text $inline_statement
  func_parse_inline_statement, 0, 2, var_text, var_4306_30_inline_statement,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1461, lambda_1462, TAIL_CALL,
  POS(4305, 11),
  POS(4306, 11),
  POS(4308, 18),
  POS(4307, 11)
};

static TAB_NUM t_lambda_1461[] = {
  1, // locals
  0, // parameters
  // funky_types::inline_body
  LET, -4, var_funky_types__inline_body, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_4299_1_position, var_funky__parameters_of, var_4300_31_inline_parameters, var_funky__statement_of, var_4306_30_inline_statement, LOCAL(1),
  // 
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(4311, 15),
  POS(4309, 15)
};

static TAB_NUM t_lambda_1462[] = {
  0, // locals
  0, // parameters
  //  undefined inline_statement
  LET, 2, var_undefined, var_4306_30_inline_statement, TAIL_CALL,
  POS(4316, 15)
};

static TAB_NUM t_lambda_1463[] = {
  0, // locals
  0, // parameters
  // syntax_error "space character"
  func_syntax_error, 1, str_space_character, TAIL_CALL,
  POS(4318, 11)
};

static TAB_NUM t_lambda_1464[] = {
  0, // locals
  0, // parameters
  //  undefined inline_parameters
  LET, 2, var_undefined, var_4300_31_inline_parameters, TAIL_CALL,
  POS(4319, 7)
};

static TAB_NUM t_func_parse_statements[] = {
  3, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, LOCAL(3),
  // text == "@nl;" && subgroups.is_defined:
  var_std__equal, 2, var_text, string_2, 1, LOCAL(1),
  // text == "@nl;" && subgroups.is_defined:
  var_std__and, 2, LOCAL(1), lambda_1465, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_1466, lambda_1469, TAIL_CALL,
  POS(4322, 3),
  POS(4324, 5),
  POS(4324, 5),
  POS(4323, 3)
};

static TAB_NUM t_lambda_1465[] = {
  1, // locals
  0, // parameters
  // is_defined:
  var_is_defined, 1, var_subgroups, 1, LOCAL(1),
  // subgroups.is_defined:
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(4324, 33),
  POS(4324, 23)
};

static TAB_NUM t_lambda_1466[] = {
  1, // locals
  0, // parameters
  // $parameters_or_statement parse_groups(funky::parse_parameters_or_statement_group)
  func_parse_groups, 1, var_funky__parse_parameters_or_statement_group, 1, var_4325_1_parameters_or_statement,
  // $error find_first(parameters_or_statement is_an_error)
  var_find_first, 2, var_4325_1_parameters_or_statement, var_is_an_error, 1, var_4326_1_error,
  // is_an_error
  var_is_an_error, 1, var_4326_1_error, 1, LOCAL(1),
  // if error.is_an_error
  var_if, 3, LOCAL(1), lambda_1467, lambda_1468, TAIL_CALL,
  POS(4325, 7),
  POS(4326, 7),
  POS(4327, 16),
  POS(4327, 7)
};

static TAB_NUM t_lambda_1467[] = {
  0, // locals
  0, // parameters
  //  undefined error
  LET, 2, var_undefined, var_4326_1_error, TAIL_CALL,
  POS(4328, 11)
};

static TAB_NUM t_lambda_1468[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, string_1, var_4325_1_parameters_or_statement, TAIL_CALL,
  POS(4329, 11)
};

static TAB_NUM t_lambda_1469[] = {
  0, // locals
  0, // parameters
  // syntax_error "valid input characters or line end"
  func_syntax_error, 1, str_valid_input_char, TAIL_CALL,
  POS(4333, 7)
};

static TAB_NUM t_func_parse_inline_parameters[] = {
  2, // locals
  0, // parameters
  // cond $rest $expr
  var_cond, 2, lambda_1470, lambda_1473, 2, LOCAL(2), var_4336_12_expr,
  // cond
  var_cond, 3, lambda_1475, lambda_1477, lambda_1479, 1, LOCAL(1),
  // ->
  LET, 2, LOCAL(2), LOCAL(1), TAIL_CALL,
  POS(4336, 3),
  POS(4349, 5),
  POS(4347, 3)
};

static TAB_NUM t_lambda_1470[] = {
  3, // locals
  0, // parameters
  // text(1) == ' '
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_1471, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_1472, TAIL_CALL,
  POS(4339, 9),
  POS(4339, 9),
  POS(4338, 9),
  POS(4337, 7)
};

static TAB_NUM t_lambda_1471[] = {
  2, // locals
  0, // parameters
  // text(2) == '('
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '('
  var_std__equal, 2, LOCAL(1), chr_40, 1, LOCAL(2),
  // text(2) == '('
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(4340, 9),
  POS(4340, 9),
  POS(4340, 9)
};

static TAB_NUM t_lambda_1472[] = {
  0, // locals
  0, // parameters
  // range &text 3 -1
  var_range, 3, var_text, num_3, minus_num_1, 1, var_text,
  // parse_some_inline_parameters
  func_parse_some_inline_parameters, 0, TAIL_CALL,
  POS(4342, 9),
  POS(4343, 9)
};

static TAB_NUM t_lambda_1473[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_1474, TAIL_CALL,
  POS(4344, 7)
};

static TAB_NUM t_lambda_1474[] = {
  0, // locals
  0, // parameters
  //  text empty_list
  LET, 2, var_text, var_empty_list, TAIL_CALL,
  POS(4346, 9)
};

static TAB_NUM t_lambda_1475[] = {
  1, // locals
  0, // parameters
  // is_undefined -> empty_list
  var_is_undefined, 1, var_4336_12_expr, 1, LOCAL(1),
  //  expr.is_undefined -> empty_list
  LET, 2, LOCAL(1), lambda_1476, TAIL_CALL,
  POS(4350, 15),
  POS(4350, 9)
};

static TAB_NUM t_lambda_1476[] = {
  0, // locals
  0, // parameters
  //  empty_list
  LET, 1, var_empty_list, TAIL_CALL,
  POS(4350, 30)
};

static TAB_NUM t_lambda_1477[] = {
  1, // locals
  0, // parameters
  // is_a_list -> expr
  var_is_a_list, 1, var_4336_12_expr, 1, LOCAL(1),
  //  expr.is_a_list -> expr
  LET, 2, LOCAL(1), lambda_1478, TAIL_CALL,
  POS(4351, 15),
  POS(4351, 9)
};

static TAB_NUM t_lambda_1478[] = {
  0, // locals
  0, // parameters
  //  expr
  LET, 1, var_4336_12_expr, TAIL_CALL,
  POS(4351, 27)
};

static TAB_NUM t_lambda_1479[] = {
  0, // locals
  0, // parameters
  //  true -> list(expr)
  LET, 2, var_true, lambda_1480, TAIL_CALL,
  POS(4352, 9)
};

static TAB_NUM t_lambda_1480[] = {
  1, // locals
  0, // parameters
  // list(expr)
  var_list, 1, var_4336_12_expr, 1, LOCAL(1),
  //  list(expr)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(4352, 18),
  POS(4352, 17)
};

static TAB_NUM t_func_parse_some_inline_parameters[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 2, lambda_1481, lambda_1483, TAIL_CALL,
  POS(4355, 3)
};

static TAB_NUM t_lambda_1481[] = {
  2, // locals
  0, // parameters
  // text(1) == ')'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == ')'
  var_std__equal, 2, LOCAL(1), chr_41, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_1482, TAIL_CALL,
  POS(4357, 7),
  POS(4357, 7),
  POS(4356, 7)
};

static TAB_NUM t_lambda_1482[] = {
  1, // locals
  0, // parameters
  // range(text 2 -1) undefined
  var_range, 3, var_text, num_2, minus_num_1, 1, LOCAL(1),
  //  range(text 2 -1) undefined
  LET, 2, LOCAL(1), var_undefined, TAIL_CALL,
  POS(4358, 10),
  POS(4358, 9)
};

static TAB_NUM t_lambda_1483[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_1484, TAIL_CALL,
  POS(4359, 7)
};

static TAB_NUM t_lambda_1484[] = {
  0, // locals
  0, // parameters
  // !expected "some inline parameters"
  LET, 1, str_some_inline_para, 1, var_expected,
  // !at text
  LET, 1, var_text, 1, var_at,
  // parse_one_or_more_inline_parameters
  func_parse_one_or_more_inline_parameters, 0, TAIL_CALL,
  POS(4362, 9),
  POS(4363, 9),
  POS(4364, 9)
};

static TAB_NUM t_func_parse_one_or_more_inline_parameters[] = {
  2, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, LOCAL(2),
  // parse_inline_parameter !text $inline_parameter
  func_parse_inline_parameter, 0, 2, var_text, var_4368_30_inline_parameter,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_71_text_is_defined, lambda_1489, TAIL_CALL,
  POS(4367, 3),
  POS(4368, 3),
  POS(4370, 10),
  POS(4369, 3)
};

static TAB_NUM t_lambda_71_text_is_defined[] = {
  1, // locals
  0, // parameters
  // parse_maybe_more_inline_parameters !text $maybe_more_inline_parameters
  func_parse_maybe_more_inline_parameters, 0, 2, var_text, var_4371_42_maybe_more_inline_parameters,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1485, lambda_1488, TAIL_CALL,
  POS(4371, 7),
  POS(4373, 14),
  POS(4372, 7)
};

static TAB_NUM t_lambda_1485[] = {
  1, // locals
  0, // parameters
  // is_defined
  var_is_defined, 1, var_4371_42_maybe_more_inline_parameters, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1486, lambda_1487, TAIL_CALL,
  POS(4376, 42),
  POS(4375, 11)
};

static TAB_NUM t_lambda_1486[] = {
  3, // locals
  0, // parameters
  // to_list
  func_to_list, 1, var_4368_30_inline_parameter, 1, LOCAL(1),
  // to_list
  func_to_list, 1, var_4371_42_maybe_more_inline_parameters, 1, LOCAL(2),
  // append
  var_append, 2, LOCAL(1), LOCAL(2), 1, LOCAL(3),
  // 
  LET, 2, var_text, LOCAL(3), TAIL_CALL,
  POS(4380, 34),
  POS(4381, 46),
  POS(4379, 15),
  POS(4377, 15)
};

static TAB_NUM t_lambda_1487[] = {
  1, // locals
  0, // parameters
  // to_list
  func_to_list, 1, var_4368_30_inline_parameter, 1, LOCAL(1),
  //  text inline_parameter.to_list
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(4382, 38),
  POS(4382, 15)
};

static TAB_NUM t_lambda_1488[] = {
  0, // locals
  0, // parameters
  //  undefined maybe_more_inline_parameters
  LET, 2, var_undefined, var_4371_42_maybe_more_inline_parameters, TAIL_CALL,
  POS(4383, 11)
};

static TAB_NUM t_lambda_1489[] = {
  0, // locals
  0, // parameters
  //  undefined inline_parameter
  LET, 2, var_undefined, var_4368_30_inline_parameter, TAIL_CALL,
  POS(4384, 7)
};

static TAB_NUM t_func_parse_maybe_more_inline_parameters[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 3, lambda_1490, lambda_1492, lambda_1494, TAIL_CALL,
  POS(4387, 3)
};

static TAB_NUM t_lambda_1490[] = {
  2, // locals
  0, // parameters
  // text(1) == ' '
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_1491, TAIL_CALL,
  POS(4389, 7),
  POS(4389, 7),
  POS(4388, 7)
};

static TAB_NUM t_lambda_1491[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_one_or_more_inline_parameters
  func_parse_one_or_more_inline_parameters, 0, TAIL_CALL,
  POS(4391, 9),
  POS(4392, 9)
};

static TAB_NUM t_lambda_1492[] = {
  2, // locals
  0, // parameters
  // text(1) == ')'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == ')'
  var_std__equal, 2, LOCAL(1), chr_41, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_1493, TAIL_CALL,
  POS(4394, 7),
  POS(4394, 7),
  POS(4393, 7)
};

static TAB_NUM t_lambda_1493[] = {
  1, // locals
  0, // parameters
  // range(text 2 -1) undefined
  var_range, 3, var_text, num_2, minus_num_1, 1, LOCAL(1),
  //  range(text 2 -1) undefined
  LET, 2, LOCAL(1), var_undefined, TAIL_CALL,
  POS(4395, 10),
  POS(4395, 9)
};

static TAB_NUM t_lambda_1494[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_1495, TAIL_CALL,
  POS(4396, 7)
};

static TAB_NUM t_lambda_1495[] = {
  0, // locals
  0, // parameters
  // syntax_error "maybe more inline parameters"
  func_syntax_error, 1, str_maybe_more_inlin, TAIL_CALL,
  POS(4399, 9)
};

static TAB_NUM t_func_parse_parameter_name[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 3, lambda_1496, lambda_1498, lambda_1503, TAIL_CALL,
  POS(4402, 3)
};

static TAB_NUM t_lambda_1496[] = {
  2, // locals
  0, // parameters
  // text(1) == '_'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '_'
  var_std__equal, 2, LOCAL(1), chr_95, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_1497, TAIL_CALL,
  POS(4404, 7),
  POS(4404, 7),
  POS(4403, 7)
};

static TAB_NUM t_lambda_1497[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_name
  func_parse_name, 0, TAIL_CALL,
  POS(4406, 9),
  POS(4407, 9)
};

static TAB_NUM t_lambda_1498[] = {
  5, // locals
  0, // parameters
  // text(1) >= 'a' && text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z')
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) >= 'a' && text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z')
  var_std__less, 2, LOCAL(1), chr_97, 1, LOCAL(2),
  // text(1) >= 'a' && text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) >= 'a' && text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z')
  var_std__and, 2, LOCAL(3), lambda_1499, 1, LOCAL(4),
  // text(1) >= 'a' && text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z')
  var_std__or, 2, LOCAL(4), lambda_1500, 1, LOCAL(5),
  // 
  LET, 2, LOCAL(5), lambda_1502, TAIL_CALL,
  POS(4409, 8),
  POS(4409, 8),
  POS(4409, 8),
  POS(4409, 8),
  POS(4409, 8),
  POS(4408, 7)
};

static TAB_NUM t_lambda_1499[] = {
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
  POS(4409, 26),
  POS(4409, 38),
  POS(4409, 38),
  POS(4409, 26)
};

static TAB_NUM t_lambda_1500[] = {
  4, // locals
  0, // parameters
  // text(1) >= 'A' && text(1) <= 'Z')
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) >= 'A' && text(1) <= 'Z')
  var_std__less, 2, LOCAL(1), chr_65, 1, LOCAL(2),
  // text(1) >= 'A' && text(1) <= 'Z')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) >= 'A' && text(1) <= 'Z')
  var_std__and, 2, LOCAL(3), lambda_1501, 1, LOCAL(4),
  // text(1) >= 'A' && text(1) <= 'Z')
  LET, 1, LOCAL(4), TAIL_CALL,
  POS(4409, 46),
  POS(4409, 46),
  POS(4409, 46),
  POS(4409, 46),
  POS(4409, 46)
};

static TAB_NUM t_lambda_1501[] = {
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
  POS(4409, 64),
  POS(4409, 76),
  POS(4409, 76),
  POS(4409, 64)
};

static TAB_NUM t_lambda_1502[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_more_name_characters
  func_parse_more_name_characters, 0, TAIL_CALL,
  POS(4411, 9),
  POS(4412, 9)
};

static TAB_NUM t_lambda_1503[] = {
  0, // locals
  0, // parameters
  //  true:
  LET, 2, var_true, lambda_1504, TAIL_CALL,
  POS(4413, 7)
};

static TAB_NUM t_lambda_1504[] = {
  0, // locals
  0, // parameters
  // syntax_error "parameter name"
  func_syntax_error, 1, str_parameter_name, TAIL_CALL,
  POS(4414, 7)
};

static TAB_NUM t_func_parse_open_parameters_without_prefix[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_4417_1_position,
  // parse_trailing_remark !text $trailing_remark
  func_parse_trailing_remark, 0, 2, var_text, var_4418_29_trailing_remark,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_72_text_is_defined, lambda_1510, TAIL_CALL,
  POS(4417, 3),
  POS(4418, 3),
  POS(4420, 10),
  POS(4419, 3)
};

static TAB_NUM t_lambda_72_text_is_defined[] = {
  2, // locals
  0, // parameters
  // text == "@nl;" && subgroups.is_defined:
  var_std__equal, 2, var_text, string_2, 1, LOCAL(1),
  // text == "@nl;" && subgroups.is_defined:
  var_std__and, 2, LOCAL(1), lambda_1505, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_1506, lambda_1509, TAIL_CALL,
  POS(4422, 9),
  POS(4422, 9),
  POS(4421, 7)
};

static TAB_NUM t_lambda_1505[] = {
  1, // locals
  0, // parameters
  // is_defined:
  var_is_defined, 1, var_subgroups, 1, LOCAL(1),
  // subgroups.is_defined:
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(4422, 37),
  POS(4422, 27)
};

static TAB_NUM t_lambda_1506[] = {
  1, // locals
  0, // parameters
  // $parameter parse_groups(funky::parse_parameter_group)
  func_parse_groups, 1, var_funky__parse_parameter_group, 1, var_4423_1_parameter,
  // $error find_first(parameter is_an_error)
  var_find_first, 2, var_4423_1_parameter, var_is_an_error, 1, var_4424_1_error,
  // is_an_error
  var_is_an_error, 1, var_4424_1_error, 1, LOCAL(1),
  // if error.is_an_error
  var_if, 3, LOCAL(1), lambda_1507, lambda_1508, TAIL_CALL,
  POS(4423, 11),
  POS(4424, 11),
  POS(4425, 20),
  POS(4425, 11)
};

static TAB_NUM t_lambda_1507[] = {
  0, // locals
  0, // parameters
  //  undefined error
  LET, 2, var_undefined, var_4424_1_error, TAIL_CALL,
  POS(4426, 15)
};

static TAB_NUM t_lambda_1508[] = {
  1, // locals
  0, // parameters
  // funky_types::open_parameters
  LET, -4, var_funky_types__open_parameters, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_4417_1_position, var_funky__remark_of, var_4418_29_trailing_remark, var_funky__parameter_of, var_4423_1_parameter, LOCAL(1),
  // 
  LET, 2, string_1, LOCAL(1), TAIL_CALL,
  POS(4429, 15),
  POS(4427, 15)
};

static TAB_NUM t_lambda_1509[] = {
  0, // locals
  0, // parameters
  // syntax_error "valid input characters or line end"
  func_syntax_error, 1, str_valid_input_char, TAIL_CALL,
  POS(4435, 11)
};

static TAB_NUM t_lambda_1510[] = {
  0, // locals
  0, // parameters
  //  undefined trailing_remark
  LET, 2, var_undefined, var_4418_29_trailing_remark, TAIL_CALL,
  POS(4436, 7)
};

static TAB_NUM t_func_parse_inline_parameter[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_4439_1_position,
  // !str text
  LET, 1, var_text, 1, var_str,
  // parse_parameter_name !text $parameter_name
  func_parse_parameter_name, 0, 2, var_text, var_4441_28_parameter_name,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_73_text_is_defined, lambda_1513, TAIL_CALL,
  POS(4439, 3),
  POS(4440, 3),
  POS(4441, 3),
  POS(4443, 10),
  POS(4442, 3)
};

static TAB_NUM t_lambda_73_text_is_defined[] = {
  1, // locals
  0, // parameters
  // parse_parameter_option !text $parameter_option
  func_parse_parameter_option, 0, 2, var_text, var_4444_30_parameter_option,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1511, lambda_1512, TAIL_CALL,
  POS(4444, 7),
  POS(4446, 14),
  POS(4445, 7)
};

static TAB_NUM t_lambda_1511[] = {
  1, // locals
  0, // parameters
  // funky_types::inline_parameter
  LET, -4, var_funky_types__inline_parameter, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_4439_1_position, var_funky__name_of, var_4441_28_parameter_name, var_funky__option_of, var_4444_30_parameter_option, LOCAL(1),
  // 
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(4449, 11),
  POS(4447, 11)
};

static TAB_NUM t_lambda_1512[] = {
  0, // locals
  0, // parameters
  //  undefined parameter_option
  LET, 2, var_undefined, var_4444_30_parameter_option, TAIL_CALL,
  POS(4454, 11)
};

static TAB_NUM t_lambda_1513[] = {
  0, // locals
  0, // parameters
  //  undefined parameter_name
  LET, 2, var_undefined, var_4441_28_parameter_name, TAIL_CALL,
  POS(4455, 7)
};

static TAB_NUM t_func_parse_parameter[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_4458_1_position,
  // !str text
  LET, 1, var_text, 1, var_str,
  // parse_parameter_name !text $parameter_name
  func_parse_parameter_name, 0, 2, var_text, var_4460_28_parameter_name,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_74_text_is_defined, lambda_1517, TAIL_CALL,
  POS(4458, 3),
  POS(4459, 3),
  POS(4460, 3),
  POS(4462, 10),
  POS(4461, 3)
};

static TAB_NUM t_lambda_74_text_is_defined[] = {
  1, // locals
  0, // parameters
  // parse_parameter_option !text $parameter_option
  func_parse_parameter_option, 0, 2, var_text, var_4463_30_parameter_option,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_75_text_is_defined, lambda_1516, TAIL_CALL,
  POS(4463, 7),
  POS(4465, 14),
  POS(4464, 7)
};

static TAB_NUM t_lambda_75_text_is_defined[] = {
  1, // locals
  0, // parameters
  // parse_trailing_remarks !text $trailing_remarks
  func_parse_trailing_remarks, 0, 2, var_text, var_4466_30_trailing_remarks,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1514, lambda_1515, TAIL_CALL,
  POS(4466, 11),
  POS(4468, 18),
  POS(4467, 11)
};

static TAB_NUM t_lambda_1514[] = {
  1, // locals
  0, // parameters
  // funky_types::parameter
  LET, -5, var_funky_types__parameter, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_4458_1_position, var_funky__name_of, var_4460_28_parameter_name, var_funky__option_of, var_4463_30_parameter_option, var_funky__remarks_of, var_4466_30_trailing_remarks, LOCAL(1),
  // 
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(4471, 15),
  POS(4469, 15)
};

static TAB_NUM t_lambda_1515[] = {
  0, // locals
  0, // parameters
  //  undefined trailing_remarks
  LET, 2, var_undefined, var_4466_30_trailing_remarks, TAIL_CALL,
  POS(4477, 15)
};

static TAB_NUM t_lambda_1516[] = {
  0, // locals
  0, // parameters
  //  undefined parameter_option
  LET, 2, var_undefined, var_4463_30_parameter_option, TAIL_CALL,
  POS(4478, 11)
};

static TAB_NUM t_lambda_1517[] = {
  0, // locals
  0, // parameters
  //  undefined parameter_name
  LET, 2, var_undefined, var_4460_28_parameter_name, TAIL_CALL,
  POS(4479, 7)
};

static TAB_NUM t_func_parse_parameter_option[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 4, lambda_1518, lambda_1520, lambda_1522, lambda_1526, TAIL_CALL,
  POS(4482, 3)
};

static TAB_NUM t_lambda_1518[] = {
  2, // locals
  0, // parameters
  // text(1) == '^'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '^'
  var_std__equal, 2, LOCAL(1), chr_94, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_1519, TAIL_CALL,
  POS(4484, 7),
  POS(4484, 7),
  POS(4483, 7)
};

static TAB_NUM t_lambda_1519[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_myself_without_prefix
  func_parse_myself_without_prefix, 0, TAIL_CALL,
  POS(4486, 9),
  POS(4487, 9)
};

static TAB_NUM t_lambda_1520[] = {
  2, // locals
  0, // parameters
  // text(1) == '*'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '*'
  var_std__equal, 2, LOCAL(1), chr_42, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_1521, TAIL_CALL,
  POS(4489, 7),
  POS(4489, 7),
  POS(4488, 7)
};

static TAB_NUM t_lambda_1521[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_rest_without_prefix
  func_parse_rest_without_prefix, 0, TAIL_CALL,
  POS(4491, 9),
  POS(4492, 9)
};

static TAB_NUM t_lambda_1522[] = {
  3, // locals
  0, // parameters
  // text(1) == ' '
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_1523, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_1525, TAIL_CALL,
  POS(4495, 9),
  POS(4495, 9),
  POS(4494, 9),
  POS(4493, 7)
};

static TAB_NUM t_lambda_1523[] = {
  3, // locals
  0, // parameters
  // text(2) == '='
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '='
  var_std__equal, 2, LOCAL(1), chr_61, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_1524, 1, LOCAL(3),
  // text(2) == '='
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(4496, 9),
  POS(4496, 9),
  POS(4494, 9),
  POS(4496, 9)
};

static TAB_NUM t_lambda_1524[] = {
  2, // locals
  0, // parameters
  // text(3) == ' '
  var_text, 1, num_3, 1, LOCAL(1),
  // text(3) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // text(3) == ' '
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(4497, 9),
  POS(4497, 9),
  POS(4497, 9)
};

static TAB_NUM t_lambda_1525[] = {
  0, // locals
  0, // parameters
  // range &text 4 -1
  var_range, 3, var_text, num_4, minus_num_1, 1, var_text,
  // parse_initial_value_without_prefix
  func_parse_initial_value_without_prefix, 0, TAIL_CALL,
  POS(4499, 9),
  POS(4500, 9)
};

static TAB_NUM t_lambda_1526[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_1527, TAIL_CALL,
  POS(4501, 7)
};

static TAB_NUM t_lambda_1527[] = {
  0, // locals
  0, // parameters
  //  text undefined
  LET, 2, var_text, var_undefined, TAIL_CALL,
  POS(4503, 9)
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
  POS(4506, 3),
  POS(4509, 5),
  POS(4507, 3)
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
  POS(4514, 3),
  POS(4517, 5),
  POS(4515, 3)
};

static TAB_NUM t_func_parse_initial_value_without_prefix[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_4522_1_position,
  // parse_simple_operand !text $simple_operand
  func_parse_simple_operand, 0, 2, var_text, var_4523_28_simple_operand,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1528, lambda_1529, TAIL_CALL,
  POS(4522, 3),
  POS(4523, 3),
  POS(4525, 10),
  POS(4524, 3)
};

static TAB_NUM t_lambda_1528[] = {
  1, // locals
  0, // parameters
  // funky_types::initial_value
  LET, -3, var_funky_types__initial_value, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_4522_1_position, var_funky__operand_of, var_4523_28_simple_operand, LOCAL(1),
  // 
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(4528, 7),
  POS(4526, 7)
};

static TAB_NUM t_lambda_1529[] = {
  0, // locals
  0, // parameters
  //  undefined simple_operand
  LET, 2, var_undefined, var_4523_28_simple_operand, TAIL_CALL,
  POS(4532, 7)
};

static TAB_NUM t_func_parse_simple_operand[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 5, lambda_1530, lambda_1535, lambda_1538, lambda_1540, lambda_1542, TAIL_CALL,
  POS(4535, 3)
};

static TAB_NUM t_lambda_1530[] = {
  5, // locals
  0, // parameters
  // text(1) >= 'a' && text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z')
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) >= 'a' && text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z')
  var_std__less, 2, LOCAL(1), chr_97, 1, LOCAL(2),
  // text(1) >= 'a' && text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) >= 'a' && text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z')
  var_std__and, 2, LOCAL(3), lambda_1531, 1, LOCAL(4),
  // text(1) >= 'a' && text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z')
  var_std__or, 2, LOCAL(4), lambda_1532, 1, LOCAL(5),
  // 
  LET, 2, LOCAL(5), lambda_1534, TAIL_CALL,
  POS(4537, 8),
  POS(4537, 8),
  POS(4537, 8),
  POS(4537, 8),
  POS(4537, 8),
  POS(4536, 7)
};

static TAB_NUM t_lambda_1531[] = {
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
  POS(4537, 26),
  POS(4537, 38),
  POS(4537, 38),
  POS(4537, 26)
};

static TAB_NUM t_lambda_1532[] = {
  4, // locals
  0, // parameters
  // text(1) >= 'A' && text(1) <= 'Z')
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) >= 'A' && text(1) <= 'Z')
  var_std__less, 2, LOCAL(1), chr_65, 1, LOCAL(2),
  // text(1) >= 'A' && text(1) <= 'Z')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) >= 'A' && text(1) <= 'Z')
  var_std__and, 2, LOCAL(3), lambda_1533, 1, LOCAL(4),
  // text(1) >= 'A' && text(1) <= 'Z')
  LET, 1, LOCAL(4), TAIL_CALL,
  POS(4537, 46),
  POS(4537, 46),
  POS(4537, 46),
  POS(4537, 46),
  POS(4537, 46)
};

static TAB_NUM t_lambda_1533[] = {
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
  POS(4537, 64),
  POS(4537, 76),
  POS(4537, 76),
  POS(4537, 64)
};

static TAB_NUM t_lambda_1534[] = {
  0, // locals
  0, // parameters
  // !str text
  LET, 1, var_text, 1, var_str,
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_variable_without_prefix
  func_parse_variable_without_prefix, 0, TAIL_CALL,
  POS(4539, 9),
  POS(4540, 9),
  POS(4541, 9)
};

static TAB_NUM t_lambda_1535[] = {
  3, // locals
  0, // parameters
  // text(1) == '''
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '''
  var_std__equal, 2, LOCAL(1), chr_39, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_1536, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_1537, TAIL_CALL,
  POS(4544, 9),
  POS(4544, 9),
  POS(4543, 9),
  POS(4542, 7)
};

static TAB_NUM t_lambda_1536[] = {
  2, // locals
  0, // parameters
  // text(2) == '@@'
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '@@'
  var_std__equal, 2, LOCAL(1), chr_64, 1, LOCAL(2),
  // text(2) == '@@'
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(4545, 9),
  POS(4545, 9),
  POS(4545, 9)
};

static TAB_NUM t_lambda_1537[] = {
  0, // locals
  0, // parameters
  // range &text 3 -1
  var_range, 3, var_text, num_3, minus_num_1, 1, var_text,
  // parse_special_character_literal
  func_parse_special_character_literal, 0, TAIL_CALL,
  POS(4547, 9),
  POS(4548, 9)
};

static TAB_NUM t_lambda_1538[] = {
  2, // locals
  0, // parameters
  // text(1) == '''
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '''
  var_std__equal, 2, LOCAL(1), chr_39, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_1539, TAIL_CALL,
  POS(4550, 7),
  POS(4550, 7),
  POS(4549, 7)
};

static TAB_NUM t_lambda_1539[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_character_literal_without_prefix
  func_parse_character_literal_without_prefix, 0, TAIL_CALL,
  POS(4552, 9),
  POS(4553, 9)
};

static TAB_NUM t_lambda_1540[] = {
  2, // locals
  0, // parameters
  // text(1) == '"'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '"'
  var_std__equal, 2, LOCAL(1), chr_34, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_1541, TAIL_CALL,
  POS(4555, 7),
  POS(4555, 7),
  POS(4554, 7)
};

static TAB_NUM t_lambda_1541[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_string_literal_without_prefix
  func_parse_string_literal_without_prefix, 0, TAIL_CALL,
  POS(4557, 9),
  POS(4558, 9)
};

static TAB_NUM t_lambda_1542[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_1543, TAIL_CALL,
  POS(4559, 7)
};

static TAB_NUM t_lambda_1543[] = {
  0, // locals
  0, // parameters
  // !expected "simple operand"
  LET, 1, str_simple_operand, 1, var_expected,
  // !at text
  LET, 1, var_text, 1, var_at,
  // parse_numeric_literal
  func_parse_numeric_literal, 0, TAIL_CALL,
  POS(4562, 9),
  POS(4563, 9),
  POS(4564, 9)
};

static TAB_NUM t_func_parse_close_parameters_without_prefix[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_4567_1_position,
  // parse_trailing_remark !text $trailing_remark
  func_parse_trailing_remark, 0, 2, var_text, var_4568_29_trailing_remark,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1544, lambda_1545, TAIL_CALL,
  POS(4567, 3),
  POS(4568, 3),
  POS(4570, 10),
  POS(4569, 3)
};

static TAB_NUM t_lambda_1544[] = {
  1, // locals
  0, // parameters
  // funky_types::close_parameters
  LET, -3, var_funky_types__close_parameters, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_4567_1_position, var_funky__remark_of, var_4568_29_trailing_remark, LOCAL(1),
  // 
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(4573, 7),
  POS(4571, 7)
};

static TAB_NUM t_lambda_1545[] = {
  0, // locals
  0, // parameters
  //  undefined trailing_remark
  LET, 2, var_undefined, var_4568_29_trailing_remark, TAIL_CALL,
  POS(4577, 7)
};

static TAB_NUM t_func_parse_return_expression_without_prefix[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_4580_1_position,
  // parse_some_statement_arguments !text $some_statement_arguments
  func_parse_some_statement_arguments, 0, 2, var_text, var_4581_38_some_statement_arguments,
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
  // funky_types::return_expression
  LET, -3, var_funky_types__return_expression, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_4580_1_position, var_funky__arguments_of, var_4581_38_some_statement_arguments, LOCAL(1),
  // 
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(4586, 7),
  POS(4584, 7)
};

static TAB_NUM t_lambda_1547[] = {
  0, // locals
  0, // parameters
  //  undefined some_statement_arguments
  LET, 2, var_undefined, var_4581_38_some_statement_arguments, TAIL_CALL,
  POS(4590, 7)
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
  POS(4593, 3),
  POS(4596, 5),
  POS(4594, 3)
};

static TAB_NUM t_func_parse_remark[] = {
  2, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_4601_1_position,
  // text(1) == '#':
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '#':
  var_std__equal, 2, LOCAL(1), chr_35, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_1548, lambda_1551, TAIL_CALL,
  POS(4601, 3),
  POS(4603, 5),
  POS(4603, 5),
  POS(4602, 3)
};

static TAB_NUM t_lambda_1548[] = {
  1, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // !str text
  LET, 1, var_text, 1, var_str,
  // parse_remark_text !text $remark_text
  func_parse_remark_text, 0, 2, var_text, var_4606_25_remark_text,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1549, lambda_1550, TAIL_CALL,
  POS(4604, 7),
  POS(4605, 7),
  POS(4606, 7),
  POS(4608, 14),
  POS(4607, 7)
};

static TAB_NUM t_lambda_1549[] = {
  1, // locals
  0, // parameters
  // funky_types::remark
  LET, -3, var_funky_types__remark, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_4601_1_position, var_funky__text_of, var_4606_25_remark_text, LOCAL(1),
  // 
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(4611, 11),
  POS(4609, 11)
};

static TAB_NUM t_lambda_1550[] = {
  0, // locals
  0, // parameters
  //  undefined remark_text
  LET, 2, var_undefined, var_4606_25_remark_text, TAIL_CALL,
  POS(4615, 11)
};

static TAB_NUM t_lambda_1551[] = {
  0, // locals
  0, // parameters
  // syntax_error "'#'"
  func_syntax_error, 1, string_10, TAIL_CALL,
  POS(4617, 7)
};

static TAB_NUM t_func_parse_remark_without_prefix[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_4620_1_position,
  // !str text
  LET, 1, var_text, 1, var_str,
  // parse_remark_text !text $remark_text
  func_parse_remark_text, 0, 2, var_text, var_4622_25_remark_text,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1552, lambda_1553, TAIL_CALL,
  POS(4620, 3),
  POS(4621, 3),
  POS(4622, 3),
  POS(4624, 10),
  POS(4623, 3)
};

static TAB_NUM t_lambda_1552[] = {
  1, // locals
  0, // parameters
  // funky_types::remark
  LET, -3, var_funky_types__remark, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_4620_1_position, var_funky__text_of, var_4622_25_remark_text, LOCAL(1),
  // 
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(4627, 7),
  POS(4625, 7)
};

static TAB_NUM t_lambda_1553[] = {
  0, // locals
  0, // parameters
  //  undefined remark_text
  LET, 2, var_undefined, var_4622_25_remark_text, TAIL_CALL,
  POS(4631, 7)
};

static TAB_NUM t_func_parse_remark_text[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 2, lambda_1554, lambda_1556, TAIL_CALL,
  POS(4634, 3)
};

static TAB_NUM t_lambda_1554[] = {
  2, // locals
  0, // parameters
  // text(1) == '@nl;'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '@nl;'
  var_std__equal, 2, LOCAL(1), chr_10, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_1555, TAIL_CALL,
  POS(4636, 7),
  POS(4636, 7),
  POS(4635, 7)
};

static TAB_NUM t_lambda_1555[] = {
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
  POS(4637, 27),
  POS(4637, 42),
  POS(4637, 27),
  POS(4637, 15),
  POS(4637, 9)
};

static TAB_NUM t_lambda_1556[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_1557, TAIL_CALL,
  POS(4638, 7)
};

static TAB_NUM t_lambda_1557[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_remark_text
  func_parse_remark_text, 0, TAIL_CALL,
  POS(4641, 9),
  POS(4642, 9)
};

static TAB_NUM t_func_parse_trailing_remarks[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 2, lambda_1558, lambda_1561, TAIL_CALL,
  POS(4645, 3)
};

static TAB_NUM t_lambda_1558[] = {
  2, // locals
  0, // parameters
  // text == "@nl;" && subgroups.is_defined
  var_std__equal, 2, var_text, string_2, 1, LOCAL(1),
  // text == "@nl;" && subgroups.is_defined
  var_std__and, 2, LOCAL(1), lambda_1559, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_1560, TAIL_CALL,
  POS(4647, 7),
  POS(4647, 7),
  POS(4646, 7)
};

static TAB_NUM t_lambda_1559[] = {
  1, // locals
  0, // parameters
  // is_defined
  var_is_defined, 1, var_subgroups, 1, LOCAL(1),
  // subgroups.is_defined
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(4647, 35),
  POS(4647, 25)
};

static TAB_NUM t_lambda_1560[] = {
  0, // locals
  0, // parameters
  // parse_line_remarks_without_prefix
  func_parse_line_remarks_without_prefix, 0, TAIL_CALL,
  POS(4649, 9)
};

static TAB_NUM t_lambda_1561[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_1562, TAIL_CALL,
  POS(4650, 7)
};

static TAB_NUM t_lambda_1562[] = {
  0, // locals
  0, // parameters
  // !expected "trailing remarks"
  LET, 1, str_trailing_remarks, 1, var_expected,
  // !at text
  LET, 1, var_text, 1, var_at,
  // parse_line_end_and_line_remarks
  func_parse_line_end_and_line_remarks, 0, TAIL_CALL,
  POS(4653, 9),
  POS(4654, 9),
  POS(4655, 9)
};

static TAB_NUM t_func_parse_line_end_and_line_remarks[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_4658_1_position,
  // parse_trailing_remark !text $trailing_remark
  func_parse_trailing_remark, 0, 2, var_text, var_4659_29_trailing_remark,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_76_text_is_defined, lambda_1567, TAIL_CALL,
  POS(4658, 3),
  POS(4659, 3),
  POS(4661, 10),
  POS(4660, 3)
};

static TAB_NUM t_lambda_76_text_is_defined[] = {
  1, // locals
  0, // parameters
  // parse_line_remarks !text $line_remarks
  func_parse_line_remarks, 0, 2, var_text, var_4662_26_line_remarks,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1563, lambda_1566, TAIL_CALL,
  POS(4662, 7),
  POS(4664, 14),
  POS(4663, 7)
};

static TAB_NUM t_lambda_1563[] = {
  1, // locals
  0, // parameters
  // is_defined
  var_is_defined, 1, var_4662_26_line_remarks, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1564, lambda_1565, TAIL_CALL,
  POS(4667, 26),
  POS(4666, 11)
};

static TAB_NUM t_lambda_1564[] = {
  1, // locals
  0, // parameters
  // funky_types::line_end_and_line_remarks
  LET, -4, var_funky_types__line_end_and_line_remarks, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_4658_1_position, var_funky__remark_of, var_4659_29_trailing_remark, var_funky__remarks_of, var_4662_26_line_remarks, LOCAL(1),
  // 
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(4670, 15),
  POS(4668, 15)
};

static TAB_NUM t_lambda_1565[] = {
  0, // locals
  0, // parameters
  //  text trailing_remark
  LET, 2, var_text, var_4659_29_trailing_remark, TAIL_CALL,
  POS(4675, 15)
};

static TAB_NUM t_lambda_1566[] = {
  0, // locals
  0, // parameters
  //  undefined line_remarks
  LET, 2, var_undefined, var_4662_26_line_remarks, TAIL_CALL,
  POS(4676, 11)
};

static TAB_NUM t_lambda_1567[] = {
  0, // locals
  0, // parameters
  //  undefined trailing_remark
  LET, 2, var_undefined, var_4659_29_trailing_remark, TAIL_CALL,
  POS(4677, 7)
};

static TAB_NUM t_func_parse_trailing_remark[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 3, lambda_1568, lambda_1571, lambda_1573, TAIL_CALL,
  POS(4680, 3)
};

static TAB_NUM t_lambda_1568[] = {
  3, // locals
  0, // parameters
  // text(1) == ' '
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_1569, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_1570, TAIL_CALL,
  POS(4683, 9),
  POS(4683, 9),
  POS(4682, 9),
  POS(4681, 7)
};

static TAB_NUM t_lambda_1569[] = {
  2, // locals
  0, // parameters
  // text(2) == '#'
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '#'
  var_std__equal, 2, LOCAL(1), chr_35, 1, LOCAL(2),
  // text(2) == '#'
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(4684, 9),
  POS(4684, 9),
  POS(4684, 9)
};

static TAB_NUM t_lambda_1570[] = {
  0, // locals
  0, // parameters
  // range &text 3 -1
  var_range, 3, var_text, num_3, minus_num_1, 1, var_text,
  // parse_spaced_remark_without_prefix
  func_parse_spaced_remark_without_prefix, 0, TAIL_CALL,
  POS(4686, 9),
  POS(4687, 9)
};

static TAB_NUM t_lambda_1571[] = {
  2, // locals
  0, // parameters
  // text(1) == '@nl;'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '@nl;'
  var_std__equal, 2, LOCAL(1), chr_10, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_1572, TAIL_CALL,
  POS(4689, 7),
  POS(4689, 7),
  POS(4688, 7)
};

static TAB_NUM t_lambda_1572[] = {
  0, // locals
  0, // parameters
  //  text undefined
  LET, 2, var_text, var_undefined, TAIL_CALL,
  POS(4690, 9)
};

static TAB_NUM t_lambda_1573[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_1574, TAIL_CALL,
  POS(4691, 7)
};

static TAB_NUM t_lambda_1574[] = {
  0, // locals
  0, // parameters
  // syntax_error "trailing remark"
  func_syntax_error, 1, str_trailing_remark, TAIL_CALL,
  POS(4694, 9)
};

static TAB_NUM t_func_parse_line_remarks[] = {
  2, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, LOCAL(2),
  // text == "@nl;":
  var_std__equal, 2, var_text, string_2, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1575, lambda_1578, TAIL_CALL,
  POS(4697, 3),
  POS(4699, 5),
  POS(4698, 3)
};

static TAB_NUM t_lambda_1575[] = {
  1, // locals
  0, // parameters
  // $multiline_remark parse_groups(funky::parse_multiline_remark_group)
  func_parse_groups, 1, var_funky__parse_multiline_remark_group, 1, var_4700_1_multiline_remark,
  // $error find_first(multiline_remark is_an_error)
  var_find_first, 2, var_4700_1_multiline_remark, var_is_an_error, 1, var_4701_1_error,
  // is_an_error
  var_is_an_error, 1, var_4701_1_error, 1, LOCAL(1),
  // if error.is_an_error
  var_if, 3, LOCAL(1), lambda_1576, lambda_1577, TAIL_CALL,
  POS(4700, 7),
  POS(4701, 7),
  POS(4702, 16),
  POS(4702, 7)
};

static TAB_NUM t_lambda_1576[] = {
  0, // locals
  0, // parameters
  //  undefined error
  LET, 2, var_undefined, var_4701_1_error, TAIL_CALL,
  POS(4703, 11)
};

static TAB_NUM t_lambda_1577[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, string_1, var_4700_1_multiline_remark, TAIL_CALL,
  POS(4704, 11)
};

static TAB_NUM t_lambda_1578[] = {
  0, // locals
  0, // parameters
  // syntax_error "valid input characters or line end"
  func_syntax_error, 1, str_valid_input_char, TAIL_CALL,
  POS(4708, 7)
};

static TAB_NUM t_func_parse_line_remarks_without_prefix[] = {
  2, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, LOCAL(2),
  // $multiline_remark parse_groups(funky::parse_multiline_remark_group)
  func_parse_groups, 1, var_funky__parse_multiline_remark_group, 1, var_4712_1_multiline_remark,
  // $error find_first(multiline_remark is_an_error)
  var_find_first, 2, var_4712_1_multiline_remark, var_is_an_error, 1, var_4713_1_error,
  // is_an_error
  var_is_an_error, 1, var_4713_1_error, 1, LOCAL(1),
  // if error.is_an_error
  var_if, 3, LOCAL(1), lambda_1579, lambda_1580, TAIL_CALL,
  POS(4711, 3),
  POS(4712, 3),
  POS(4713, 3),
  POS(4714, 12),
  POS(4714, 3)
};

static TAB_NUM t_lambda_1579[] = {
  0, // locals
  0, // parameters
  //  undefined error
  LET, 2, var_undefined, var_4713_1_error, TAIL_CALL,
  POS(4715, 7)
};

static TAB_NUM t_lambda_1580[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, string_1, var_4712_1_multiline_remark, TAIL_CALL,
  POS(4716, 7)
};

static TAB_NUM t_func_parse_spaced_remark_without_prefix[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_4721_1_position,
  // !str text
  LET, 1, var_text, 1, var_str,
  // parse_remark_text !text $remark_text
  func_parse_remark_text, 0, 2, var_text, var_4723_25_remark_text,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1581, lambda_1582, TAIL_CALL,
  POS(4721, 3),
  POS(4722, 3),
  POS(4723, 3),
  POS(4725, 10),
  POS(4724, 3)
};

static TAB_NUM t_lambda_1581[] = {
  1, // locals
  0, // parameters
  // funky_types::remark
  LET, -3, var_funky_types__remark, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_4721_1_position, var_funky__text_of, var_4723_25_remark_text, LOCAL(1),
  // 
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(4728, 7),
  POS(4726, 7)
};

static TAB_NUM t_lambda_1582[] = {
  0, // locals
  0, // parameters
  //  undefined remark_text
  LET, 2, var_undefined, var_4723_25_remark_text, TAIL_CALL,
  POS(4732, 7)
};

static TAB_NUM t_func_parse_multiline_remark[] = {
  2, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_4735_1_position,
  // text(1) == '#':
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '#':
  var_std__equal, 2, LOCAL(1), chr_35, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_1583, lambda_1587, TAIL_CALL,
  POS(4735, 3),
  POS(4737, 5),
  POS(4737, 5),
  POS(4736, 3)
};

static TAB_NUM t_lambda_1583[] = {
  1, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // !str text
  LET, 1, var_text, 1, var_str,
  // parse_remark_text !text $remark_text
  func_parse_remark_text, 0, 2, var_text, var_4740_25_remark_text,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_77_text_is_defined, lambda_1586, TAIL_CALL,
  POS(4738, 7),
  POS(4739, 7),
  POS(4740, 7),
  POS(4742, 14),
  POS(4741, 7)
};

static TAB_NUM t_lambda_77_text_is_defined[] = {
  1, // locals
  0, // parameters
  // parse_some_remark_lines !text $some_remark_lines
  func_parse_some_remark_lines, 0, 2, var_text, var_4743_31_some_remark_lines,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1584, lambda_1585, TAIL_CALL,
  POS(4743, 11),
  POS(4745, 18),
  POS(4744, 11)
};

static TAB_NUM t_lambda_1584[] = {
  1, // locals
  0, // parameters
  // funky_types::multiline_remark
  LET, -4, var_funky_types__multiline_remark, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_4735_1_position, var_funky__text_of, var_4740_25_remark_text, var_funky__lines_of, var_4743_31_some_remark_lines, LOCAL(1),
  // 
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(4748, 15),
  POS(4746, 15)
};

static TAB_NUM t_lambda_1585[] = {
  0, // locals
  0, // parameters
  //  undefined some_remark_lines
  LET, 2, var_undefined, var_4743_31_some_remark_lines, TAIL_CALL,
  POS(4753, 15)
};

static TAB_NUM t_lambda_1586[] = {
  0, // locals
  0, // parameters
  //  undefined remark_text
  LET, 2, var_undefined, var_4740_25_remark_text, TAIL_CALL,
  POS(4754, 11)
};

static TAB_NUM t_lambda_1587[] = {
  0, // locals
  0, // parameters
  // syntax_error "'#'"
  func_syntax_error, 1, string_10, TAIL_CALL,
  POS(4756, 7)
};

static TAB_NUM t_func_parse_multiline_remark_without_prefix[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_4759_1_position,
  // !str text
  LET, 1, var_text, 1, var_str,
  // parse_remark_text !text $remark_text
  func_parse_remark_text, 0, 2, var_text, var_4761_25_remark_text,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_78_text_is_defined, lambda_1590, TAIL_CALL,
  POS(4759, 3),
  POS(4760, 3),
  POS(4761, 3),
  POS(4763, 10),
  POS(4762, 3)
};

static TAB_NUM t_lambda_78_text_is_defined[] = {
  1, // locals
  0, // parameters
  // parse_some_remark_lines !text $some_remark_lines
  func_parse_some_remark_lines, 0, 2, var_text, var_4764_31_some_remark_lines,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1588, lambda_1589, TAIL_CALL,
  POS(4764, 7),
  POS(4766, 14),
  POS(4765, 7)
};

static TAB_NUM t_lambda_1588[] = {
  1, // locals
  0, // parameters
  // funky_types::multiline_remark
  LET, -4, var_funky_types__multiline_remark, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_4759_1_position, var_funky__text_of, var_4761_25_remark_text, var_funky__lines_of, var_4764_31_some_remark_lines, LOCAL(1),
  // 
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(4769, 11),
  POS(4767, 11)
};

static TAB_NUM t_lambda_1589[] = {
  0, // locals
  0, // parameters
  //  undefined some_remark_lines
  LET, 2, var_undefined, var_4764_31_some_remark_lines, TAIL_CALL,
  POS(4774, 11)
};

static TAB_NUM t_lambda_1590[] = {
  0, // locals
  0, // parameters
  //  undefined remark_text
  LET, 2, var_undefined, var_4761_25_remark_text, TAIL_CALL,
  POS(4775, 7)
};

static TAB_NUM t_func_parse_some_remark_lines[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 2, lambda_1591, lambda_1594, TAIL_CALL,
  POS(4778, 3)
};

static TAB_NUM t_lambda_1591[] = {
  2, // locals
  0, // parameters
  // text == "@nl;" && subgroups.is_defined
  var_std__equal, 2, var_text, string_2, 1, LOCAL(1),
  // text == "@nl;" && subgroups.is_defined
  var_std__and, 2, LOCAL(1), lambda_1592, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_1593, TAIL_CALL,
  POS(4780, 7),
  POS(4780, 7),
  POS(4779, 7)
};

static TAB_NUM t_lambda_1592[] = {
  1, // locals
  0, // parameters
  // is_defined
  var_is_defined, 1, var_subgroups, 1, LOCAL(1),
  // subgroups.is_defined
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(4780, 35),
  POS(4780, 25)
};

static TAB_NUM t_lambda_1593[] = {
  0, // locals
  0, // parameters
  // parse_remark_lines
  func_parse_remark_lines, 0, TAIL_CALL,
  POS(4782, 9)
};

static TAB_NUM t_lambda_1594[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_1595, TAIL_CALL,
  POS(4783, 7)
};

static TAB_NUM t_lambda_1595[] = {
  0, // locals
  0, // parameters
  //  text undefined
  LET, 2, var_text, var_undefined, TAIL_CALL,
  POS(4785, 9)
};

static TAB_NUM t_func_parse_remark_lines[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_4788_1_position,
  // !str text
  LET, 1, var_text, 1, var_str,
  // parse_remark_text !text $remark_text
  func_parse_remark_text, 0, 2, var_text, var_4790_25_remark_text,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1596, lambda_1597, TAIL_CALL,
  POS(4788, 3),
  POS(4789, 3),
  POS(4790, 3),
  POS(4792, 10),
  POS(4791, 3)
};

static TAB_NUM t_lambda_1596[] = {
  1, // locals
  0, // parameters
  // funky_types::remark_lines
  LET, -3, var_funky_types__remark_lines, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_4788_1_position, var_funky__text_of, var_4790_25_remark_text, LOCAL(1),
  // 
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(4795, 7),
  POS(4793, 7)
};

static TAB_NUM t_lambda_1597[] = {
  0, // locals
  0, // parameters
  //  undefined remark_text
  LET, 2, var_undefined, var_4790_25_remark_text, TAIL_CALL,
  POS(4799, 7)
};

static TAB_NUM t_func_parse_dummy_remark[] = {
  2, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_4802_1_position,
  // text(1) == '@nl;'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '@nl;'
  var_std__equal, 2, LOCAL(1), chr_10, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_1598, lambda_1599, TAIL_CALL,
  POS(4802, 3),
  POS(4804, 5),
  POS(4804, 5),
  POS(4803, 3)
};

static TAB_NUM t_lambda_1598[] = {
  1, // locals
  0, // parameters
  // funky_types::dummy_remark
  LET, -2, var_funky_types__dummy_remark, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_4802_1_position, LOCAL(1),
  // 
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(4807, 7),
  POS(4805, 7)
};

static TAB_NUM t_lambda_1599[] = {
  0, // locals
  0, // parameters
  // syntax_error "valid input characters or line end"
  func_syntax_error, 1, str_valid_input_char, TAIL_CALL,
  POS(4811, 7)
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
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_549}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_550}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_551}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_552}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_553}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_554}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_555}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_some_statement_arguments}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_556}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_557}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_558}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_559}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_560}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_561}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_562}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_563}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_564}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_565}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_566}},
  {FLT_CHARACTER, 0, {.value = 10}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_567}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_568}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_569}},
  {FLT_STRING_8, 24, {.str_8 = "some statement arguments"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_570}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_571}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_572}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_573}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_574}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_575}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_spaced_arguments_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_576}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_577}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_spaced_statement_arguments_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_578}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_579}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_more_arguments}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_580}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_581}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_582}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_583}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_584}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_585}},
  {FLT_STRING_8, 2, {.str_8 = "\042\012"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_586}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_587}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_588}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_589}},
  {FLT_STRING_8, 14, {.str_8 = "more arguments"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_more_statement_arguments}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_590}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_591}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_592}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_593}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_594}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_595}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_596}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_597}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_598}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_599}},
  {FLT_STRING_8, 24, {.str_8 = "more statement arguments"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_arguments}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_23_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_600}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_601}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_602}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_603}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_604}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_even_more_statement_arguments}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_24_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_605}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_606}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_607}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_608}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_609}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_multiline_arguments}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_610}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_611}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_612}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_613}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_614}},
  {FLT_STRING_8, 34, {.str_8 = "valid input characters or line end"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_multiline_arguments_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_615}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_616}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_tagged_multiline_arguments_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_617}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_618}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_remark_and_multiline_function_call_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_25_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_619}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_620}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_621}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_622}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_623}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_argument}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_624}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_625}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_626}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_627}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_628}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_629}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_630}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_631}},
  {FLT_CHARACTER, 0, {.value = 38}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_632}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_633}},
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
  {FLT_STRING_8, 8, {.str_8 = "argument"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_line_start_arguments}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_645}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_646}},
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
  {FLT_CHARACTER, 0, {.value = 43}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_661}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_662}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_663}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_664}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_665}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_666}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_667}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_668}},
  {FLT_CHARACTER, 0, {.value = 42}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_669}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_670}},
  {FLT_STRING_8, 2, {.str_8 = "/\012"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_671}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_672}},
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
  {FLT_CHARACTER, 0, {.value = 124}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_702}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_703}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_704}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_705}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_706}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_707}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_708}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_709}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_710}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_711}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_712}},
  {FLT_CHARACTER, 0, {.value = 94}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_713}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_714}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_715}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_716}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_717}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_718}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_719}},
  {FLT_STRING_8, 20, {.str_8 = "line start arguments"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_dummy_definition_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_720}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_721}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_variable_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_722}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_723}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_definition_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_724}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_725}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_redefinition_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_26_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_726}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_727}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_728}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_update_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_27_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_729}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_730}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_731}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_expression}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_28_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_732}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_733}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_734}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_735}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_736}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_737}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_key_value_operator}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_738}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_739}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_740}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_741}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_742}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_743}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_744}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_745}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_key_value}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_sequence_expression}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_29_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_746}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_747}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_748}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_749}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_750}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_751}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_comma_operator}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_752}},
  {FLT_CHARACTER, 0, {.value = 44}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_753}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_754}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_755}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_756}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_757}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_758}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_759}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_760}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_761}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_762}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_comma}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_comma_expression}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_30_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_763}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_764}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_765}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_766}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_767}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_768}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_conditional_expression}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_31_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_769}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_770}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_771}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_772}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_773}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_logical_operator}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_774}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_775}},
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
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_and}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_and_expression}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_32_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_786}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_787}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_788}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_789}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_790}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_791}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_and_operator}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_792}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_793}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_794}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_795}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_796}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_797}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_798}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_or}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_or_expression}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_33_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_799}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_800}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_801}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_802}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_803}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_804}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_or_operator}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_805}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_806}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_807}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_808}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_809}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_810}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_811}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_named_operator_expression}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_34_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_812}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_813}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_814}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_815}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_816}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_optional_named_operator}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_817}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_818}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_819}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_820}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_821}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_named_operator_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_35_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_822}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_823}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_824}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_825}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_826}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_827}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_828}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_range_expression}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_36_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_829}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_830}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_831}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_832}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_833}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_range_operator}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_834}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_835}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_836}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_837}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_838}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_839}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_840}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_841}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_842}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_843}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_range}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_relational_expression}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_37_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_844}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_845}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_846}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_847}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_848}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_849}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_comparison_operator}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_850}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_851}},
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
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_equal}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_not_equal}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_less_equal}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_less_than}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_greater_equal}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_greater_than}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_tagged_bit_expression}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_38_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_896}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_897}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_898}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_899}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_900}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_901}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_bit_expression}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_39_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_902}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_903}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_904}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_905}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_906}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_bit_operator}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_907}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_908}},
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
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_shift_left}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_shift_right}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_bit_and}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_bit_and2}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_40_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_943}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_944}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_945}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_946}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_947}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_948}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_bit_and_operator}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_949}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_950}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_951}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_952}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_953}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_954}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_955}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_956}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_bit_or}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_bit_or2}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_41_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_957}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_958}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_959}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_960}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_961}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_962}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_bit_or_operator}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_963}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_964}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_965}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_966}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_967}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_968}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_969}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_970}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_bit_xor}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_bit_xor2}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_42_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_971}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_972}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_973}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_974}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_975}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_976}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_bit_xor_operator}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_977}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_978}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_979}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_980}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_981}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_982}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_983}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_984}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_tagged_additive_expression}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_43_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_985}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_986}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_987}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_988}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_989}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_990}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_additive_expression}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_44_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_991}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_992}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_993}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_994}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_995}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_additive_operator}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_996}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_997}},
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
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_plus}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_plus2}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_45_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1010}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1011}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1012}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1013}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1014}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1015}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_minus}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_minus2}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_46_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1016}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1017}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1018}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1019}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1020}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1021}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_multiplicative_expression}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_47_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1022}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1023}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1024}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1025}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1026}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_multiplicative_operator}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1027}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1028}},
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
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_times}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_times2}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_48_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1041}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1042}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1043}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1044}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1045}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1046}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_over}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_over2}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_49_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1047}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1048}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1049}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1050}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1051}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1052}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_an_expression}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1053}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1054}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1055}},
  {FLT_CHARACTER, 0, {.value = 39}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1056}},
  {FLT_CHARACTER, 0, {.value = 64}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1057}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1058}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1059}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1060}},
  {FLT_CHARACTER, 0, {.value = 34}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1061}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1062}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1063}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1064}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1065}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1066}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1067}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1068}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1069}},
  {FLT_CHARACTER, 0, {.value = 96}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1070}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1071}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1072}},
  {FLT_STRING_8, 13, {.str_8 = "an expression"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_parenthesed_expression_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_50_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1073}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1074}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1075}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1076}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1077}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_inline_expression}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1078}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1079}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1080}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1081}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1082}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1083}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1084}},
  {FLT_STRING_8, 17, {.str_8 = "inline expression"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_backquoted_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1085}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1086}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_negation_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1087}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1088}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_multiline_operator}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_51_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1089}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1090}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1091}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1092}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1093}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1094}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_multiline_plus_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_multiline_minus_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_52_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1095}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1096}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1097}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1098}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1099}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1100}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_multiline_minus_with_remark_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_53_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1101}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1102}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1103}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1104}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1105}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1106}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_multiline_times_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_multiline_over_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1107}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1108}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_multiline_over_with_remark_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_54_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1109}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1110}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1111}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1112}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1113}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1114}},
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
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1115}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1116}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1117}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1118}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1119}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1120}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_multiline_bit_and_with_remark_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_56_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1121}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1122}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1123}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1124}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1125}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1126}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_multiline_bit_or_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_multiline_bit_xor_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_multiline_assign_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_inline_arguments}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1127}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1128}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1129}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1130}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1131}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1132}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1133}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1134}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1135}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1136}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1137}},
  {FLT_STRING_8, 16, {.str_8 = "inline arguments"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1138}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1139}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1140}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1141}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1142}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1143}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_inline_attribute_value_pair_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_57_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1144}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1145}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1146}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1147}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1148}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_inline_method_value_pair_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_58_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1149}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1150}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1151}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1152}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1153}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_expression_and_inline_arguments}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_59_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1154}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1155}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1156}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1157}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1158}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_spaced_inline_arguments}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1159}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1160}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1161}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1162}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_spaced_inline_arguments_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1163}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1164}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_numeric_literal}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1165}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1166}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_digits}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1167}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1168}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1169}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1170}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1171}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1172}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1173}},
  {FLT_STRING_8, 6, {.str_8 = "digits"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_maybe_non_decimal_numeric_literal}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1174}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1175}},
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
  {FLT_CHARACTER, 0, {.value = 120}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1190}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1191}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1192}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_more_decimal_digits}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1193}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1194}},
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
  {FLT_CHARACTER, 0, {.value = 69}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1207}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1208}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1209}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_more_fraction_digits}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1210}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1211}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1212}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1213}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1214}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1215}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1216}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1217}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1218}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_exponent}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1219}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1220}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1221}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1222}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1223}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1224}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1225}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1226}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1227}},
  {FLT_STRING_8, 8, {.str_8 = "exponent"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_exponent_digits}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1228}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1229}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1230}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1231}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1232}},
  {FLT_STRING_8, 15, {.str_8 = "exponent digits"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_more_exponent_digits}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1233}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1234}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1235}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1236}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1237}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_binary_digits}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1238}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1239}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1240}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1241}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1242}},
  {FLT_STRING_8, 13, {.str_8 = "binary digits"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_more_binary_digits}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1243}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1244}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1245}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1246}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1247}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1248}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1249}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1250}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1251}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_octal_digits}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1252}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1253}},
  {FLT_CHARACTER, 0, {.value = 55}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1254}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1255}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1256}},
  {FLT_STRING_8, 12, {.str_8 = "octal digits"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_more_octal_digits}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1257}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1258}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1259}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1260}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1261}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1262}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1263}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1264}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1265}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_hex_digits}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1266}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1267}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1268}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1269}},
  {FLT_CHARACTER, 0, {.value = 102}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1270}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1271}},
  {FLT_CHARACTER, 0, {.value = 70}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1272}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1273}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1274}},
  {FLT_STRING_8, 10, {.str_8 = "hex digits"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_more_hex_digits}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1275}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1276}},
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
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_special_character_literal}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1292}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1293}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1294}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1295}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1296}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1297}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1298}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1299}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1300}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1301}},
  {FLT_STRING_8, 25, {.str_8 = "special character literal"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_at_character_literal_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_named_character_literal_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_60_text_is_defined}},
  {FLT_CHARACTER, 0, {.value = 59}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1302}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1303}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1304}},
  {FLT_STRING_8, 12, {.str_8 = "single quote"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1305}},
  {FLT_STRING_8, 3, {.str_8 = "';'"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1306}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_numeric_character_literal}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_61_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1307}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1308}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1309}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1310}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1311}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_character_literal_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_62_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1312}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1313}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1314}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_character}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1315}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1316}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1317}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1318}},
  {FLT_STRING_8, 9, {.str_8 = "character"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_more_character_name_characters}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1319}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1320}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1321}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1322}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1323}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1324}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1325}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1326}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1327}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_string_literal_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1328}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1329}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_string_components}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1330}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1331}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1332}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1333}},
  {FLT_STRING_8, 17, {.str_8 = "string components"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1334}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1335}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1336}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1337}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1338}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1339}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_some_string_components}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_63_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1340}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1341}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1342}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1343}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1344}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_string_component}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1345}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1346}},
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
  {FLT_STRING_8, 16, {.str_8 = "string component"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_character_sequence}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1358}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1359}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_string_characters}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1360}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1361}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1362}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1363}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1364}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1365}},
  {FLT_STRING_8, 17, {.str_8 = "string characters"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_more_string_characters}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1366}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1367}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1368}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1369}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1370}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1371}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_multiline_string_literal_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1372}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1373}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_multiline_string_components}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1374}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1375}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1376}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1377}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1378}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1379}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1380}},
  {FLT_STRING_8, 27, {.str_8 = "multiline string components"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1381}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1382}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1383}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1384}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1385}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1386}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_newline_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_some_string_line_components}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_64_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1387}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1388}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1389}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1390}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1391}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_string_line_component}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1392}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1393}},
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
  {FLT_STRING_8, 21, {.str_8 = "string line component"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_string_line_end_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_at_character_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_tagged_empty_character_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1405}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1406}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_empty_character_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_escape_expression_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_65_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1407}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1408}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1409}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_special_character}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1410}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1411}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1412}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1413}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1414}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1415}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1416}},
  {FLT_STRING_8, 17, {.str_8 = "special character"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_named_character_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_66_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1417}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1418}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1419}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_numeric_character}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_67_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1420}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1421}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1422}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_string_line_character_sequence}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1423}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1424}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_string_line_characters}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1425}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1426}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1427}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1428}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1429}},
  {FLT_STRING_8, 22, {.str_8 = "string line characters"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_more_string_line_characters}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1430}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1431}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1432}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1433}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1434}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_unique_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1435}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1436}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_attribute_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1437}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1438}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_attribute_with_setter_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1439}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1440}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_body}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_68_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_69_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1441}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1442}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1443}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1444}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_optional_line_end_remark}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1445}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1446}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1447}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1448}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1449}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_body_statements}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1450}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1451}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1452}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1453}},
  {FLT_STRING_8, 15, {.str_8 = "body statements"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1454}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1455}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1456}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1457}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1458}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1459}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_line_end_statement_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_inline_body_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_70_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1460}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1461}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1462}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1463}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1464}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_statements}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1465}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1466}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1467}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1468}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1469}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_inline_parameters}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1470}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1471}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1472}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1473}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1474}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1475}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1476}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1477}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1478}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1479}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1480}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_some_inline_parameters}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1481}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1482}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1483}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1484}},
  {FLT_STRING_8, 22, {.str_8 = "some inline parameters"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_one_or_more_inline_parameters}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_71_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1485}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1486}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1487}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1488}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1489}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_maybe_more_inline_parameters}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1490}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1491}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1492}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1493}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1494}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1495}},
  {FLT_STRING_8, 28, {.str_8 = "maybe more inline parameters"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_parameter_name}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1496}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1497}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1498}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1499}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1500}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1501}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1502}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1503}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1504}},
  {FLT_STRING_8, 14, {.str_8 = "parameter name"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_open_parameters_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_72_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1505}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1506}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1507}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1508}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1509}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1510}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_inline_parameter}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_73_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1511}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1512}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1513}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_parameter}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_74_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_75_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1514}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1515}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1516}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1517}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_parameter_option}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1518}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1519}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1520}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1521}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1522}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1523}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1524}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1525}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1526}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1527}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_myself_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_rest_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_initial_value_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1528}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1529}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_simple_operand}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1530}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1531}},
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
  {FLT_STRING_8, 14, {.str_8 = "simple operand"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_close_parameters_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1544}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1545}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_return_expression_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1546}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1547}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_return_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_remark}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1548}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1549}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1550}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1551}},
  {FLT_STRING_8, 3, {.str_8 = "'#'"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_remark_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1552}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1553}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_remark_text}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1554}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1555}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1556}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1557}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_trailing_remarks}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1558}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1559}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1560}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1561}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1562}},
  {FLT_STRING_8, 16, {.str_8 = "trailing remarks"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_line_end_and_line_remarks}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_76_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1563}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1564}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1565}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1566}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1567}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_trailing_remark}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1568}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1569}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1570}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1571}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1572}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1573}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1574}},
  {FLT_STRING_8, 15, {.str_8 = "trailing remark"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_line_remarks}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1575}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1576}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1577}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1578}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_line_remarks_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1579}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1580}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_spaced_remark_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1581}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1582}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_multiline_remark}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1583}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_77_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1584}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1585}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1586}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1587}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_multiline_remark_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_78_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1588}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1589}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1590}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_some_remark_lines}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1591}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1592}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1593}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1594}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1595}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_remark_lines}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1596}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1597}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_dummy_remark}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1598}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1599}}
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
    "1470_12_expr\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1505_28_more_arguments\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1515_38_more_statement_arguments\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1577_22_argument\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1580_28_some_arguments\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1597_22_argument\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1600_38_some_statement_arguments\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1619_1_line_start_arguments\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_an_error\000", NULL,
    {.position = POS(1620, 46)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1620_1_error\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "find_first\000", NULL,
    {.position = POS(1620, 14)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1631_1_line_start_arguments\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1632_1_error\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1640_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1641_1_line_start_arguments\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1642_1_error\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1653_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1654_42_spaced_remark\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1659_1_line_start_arguments\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1660_1_error\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "remark_and_multiline_function_call\000funky_types", NULL,
    {.position = POS(1665, 15)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "remark_of\000funky", NULL,
    {.position = POS(1668, 18)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1907_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1909_18_name\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "dummy_definition\000funky_types", NULL,
    {.position = POS(1914, 7)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1921_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1922_40_identifier\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "variable\000funky_types", NULL,
    {.position = POS(1927, 7)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1934_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1936_34_versioned_identifier\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "definition\000funky_types", NULL,
    {.position = POS(1941, 7)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1948_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1950_24_identifier\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1953_31_inline_extensions\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "redefinition\000funky_types", NULL,
    {.position = POS(1958, 11)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1967_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1969_24_identifier\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1972_31_inline_extensions\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "update\000funky_types", NULL,
    {.position = POS(1977, 11)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1987_0_derived_node\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1989_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1990_33_sequence_expression\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1993_32_key_value_operator\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "expression\000funky_types", NULL,
    {.position = POS(2001, 42)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "expression_of\000funky", NULL,
    {.position = POS(2004, 18)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "operator_of\000funky", NULL,
    {.position = POS(2005, 18)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "key_value\000funky_types", NULL,
    {.position = POS(2031, 29)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2035_0_derived_node\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2037_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2038_36_conditional_expression\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2041_28_comma_operator\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "comma\000funky_types", NULL,
    {.position = POS(2086, 26)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2090_0_derived_node\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2092_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2093_33_sequence_expression\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2096_28_comma_operator\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2114_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2115_39_named_operator_expression\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2118_30_logical_operator\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "and\000funky_types", NULL,
    {.position = POS(2161, 24)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2165_0_derived_node\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2167_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2168_39_named_operator_expression\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2171_26_and_operator\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "or\000funky_types", NULL,
    {.position = POS(2205, 23)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2209_0_derived_node\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2211_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2212_39_named_operator_expression\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2215_25_or_operator\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2248_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2249_30_range_expression\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2252_37_optional_named_operator\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "named_operator_expression\000funky_types", NULL,
    {.position = POS(2260, 15)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2283_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2285_24_identifier\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2293_30_range_expression\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "named_operator\000funky_types", NULL,
    {.position = POS(2298, 19)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2311_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2312_35_relational_expression\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2315_28_range_operator\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "range\000funky_types", NULL,
    {.position = POS(2356, 31)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2360_0_derived_node\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2362_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2363_28_bit_expression\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2366_33_comparison_operator\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "equal\000funky_types", NULL,
    {.position = POS(2481, 31)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not_equal\000funky_types", NULL,
    {.position = POS(2485, 31)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "less_equal\000funky_types", NULL,
    {.position = POS(2489, 31)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "less_than\000funky_types", NULL,
    {.position = POS(2493, 31)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "greater_equal\000funky_types", NULL,
    {.position = POS(2497, 31)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "greater_than\000funky_types", NULL,
    {.position = POS(2501, 31)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2505_0_derived_node\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2507_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2508_33_additive_expression\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2511_26_bit_operator\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "tagged_bit_expression\000funky_types", NULL,
    {.position = POS(2519, 42)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2529_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2530_33_additive_expression\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2533_26_bit_operator\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "shift_left\000funky_types", NULL,
    {.position = POS(2629, 36)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "shift_right\000funky_types", NULL,
    {.position = POS(2633, 36)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "bit_and\000funky_types", NULL,
    {.position = POS(2637, 18)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2641_0_derived_node\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2643_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2644_33_additive_expression\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2647_30_bit_and_operator\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "bit_and2\000funky_types", NULL,
    {.position = POS(2655, 42)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "bit_or\000funky_types", NULL,
    {.position = POS(2685, 17)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2689_0_derived_node\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2691_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2692_33_additive_expression\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2695_29_bit_or_operator\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "bit_or2\000funky_types", NULL,
    {.position = POS(2703, 42)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "bit_xor\000funky_types", NULL,
    {.position = POS(2733, 18)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2737_0_derived_node\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2739_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2740_33_additive_expression\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2743_30_bit_xor_operator\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "bit_xor2\000funky_types", NULL,
    {.position = POS(2751, 42)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2781_0_derived_node\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2783_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2784_39_multiplicative_expression\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2787_31_additive_operator\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "tagged_additive_expression\000funky_types", NULL,
    {.position = POS(2795, 42)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2805_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2806_39_multiplicative_expression\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2809_31_additive_operator\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000funky_types", NULL,
    {.position = POS(2860, 15)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2864_0_derived_node\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2866_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2867_39_multiplicative_expression\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2870_31_additive_operator\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus2\000funky_types", NULL,
    {.position = POS(2878, 42)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "minus\000funky_types", NULL,
    {.position = POS(2889, 16)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2893_0_derived_node\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2895_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2896_39_multiplicative_expression\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2899_31_additive_operator\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "minus2\000funky_types", NULL,
    {.position = POS(2907, 42)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2917_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2918_27_an_expression\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2921_37_multiplicative_operator\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "times\000funky_types", NULL,
    {.position = POS(2972, 16)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2976_0_derived_node\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2978_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2979_27_an_expression\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2982_37_multiplicative_operator\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "times2\000funky_types", NULL,
    {.position = POS(2990, 42)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "over\000funky_types", NULL,
    {.position = POS(3001, 15)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3005_0_derived_node\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3007_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3008_27_an_expression\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3011_37_multiplicative_operator\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "over2\000funky_types", NULL,
    {.position = POS(3019, 42)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3076_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3077_31_inline_expression\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3083_26_inline_calls\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "parenthesed_expression\000funky_types", NULL,
    {.position = POS(3088, 15)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "calls_of\000funky", NULL,
    {.position = POS(3092, 18)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3120_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3121_27_an_expression\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "backquoted\000funky_types", NULL,
    {.position = POS(3126, 7)}
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
    "negation\000funky_types", NULL,
    {.position = POS(3139, 7)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3147_0_derived_node\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3149_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3150_29_trailing_remark\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3155_1_line_start_arguments\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3156_1_error\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "multiline_operator\000funky_types", NULL,
    {.position = POS(3161, 42)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "multiline_plus\000funky_types", NULL,
    {.position = POS(3172, 28)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3175_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3176_26_dummy_remark\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3181_1_line_start_arguments\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3182_1_error\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "multiline_minus\000funky_types", NULL,
    {.position = POS(3187, 15)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3197_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3198_20_remark\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3203_1_line_start_arguments\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3204_1_error\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "multiline_minus_with_remark\000funky_types", NULL,
    {.position = POS(3209, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "multiline_times\000funky_types", NULL,
    {.position = POS(3220, 28)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3223_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3224_1_line_start_arguments\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3225_1_error\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "multiline_over\000funky_types", NULL,
    {.position = POS(3230, 7)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3236_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3237_20_remark\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3242_1_line_start_arguments\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3243_1_error\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "multiline_over_with_remark\000funky_types", NULL,
    {.position = POS(3248, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "multiline_shift_left\000funky_types", NULL,
    {.position = POS(3259, 28)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "multiline_shift_right\000funky_types", NULL,
    {.position = POS(3263, 28)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "multiline_equal\000funky_types", NULL,
    {.position = POS(3267, 28)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "multiline_not_equal\000funky_types", NULL,
    {.position = POS(3271, 28)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "multiline_less_equal\000funky_types", NULL,
    {.position = POS(3275, 28)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "multiline_less_than\000funky_types", NULL,
    {.position = POS(3279, 28)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "multiline_greater_equal\000funky_types", NULL,
    {.position = POS(3283, 28)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "multiline_greater_than\000funky_types", NULL,
    {.position = POS(3287, 28)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "multiline_and\000funky_types", NULL,
    {.position = POS(3291, 28)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "multiline_or\000funky_types", NULL,
    {.position = POS(3295, 28)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3298_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3299_26_dummy_remark\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3304_1_line_start_arguments\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3305_1_error\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "multiline_bit_and\000funky_types", NULL,
    {.position = POS(3310, 15)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3320_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3321_20_remark\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3326_1_line_start_arguments\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3327_1_error\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "multiline_bit_and_with_remark\000funky_types", NULL,
    {.position = POS(3332, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "multiline_bit_or\000funky_types", NULL,
    {.position = POS(3343, 28)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "multiline_bit_xor\000funky_types", NULL,
    {.position = POS(3347, 28)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "multiline_assign\000funky_types", NULL,
    {.position = POS(3351, 28)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3354_12_expr\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3391_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3393_24_identifier\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3399_24_expression\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "inline_attribute_value_pair\000funky_types", NULL,
    {.position = POS(3404, 15)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3415_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3417_24_identifier\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3423_24_expression\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "inline_method_value_pair\000funky_types", NULL,
    {.position = POS(3428, 15)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3440_24_expression\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3443_35_some_inline_arguments\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3463_30_inline_arguments\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3475_30_inline_arguments\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3484_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3486_20_digits\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "numeric_literal\000funky_types", NULL,
    {.position = POS(3491, 7)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "digits_of\000funky", NULL,
    {.position = POS(3494, 10)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "at_character_literal\000funky_types", NULL,
    {.position = POS(3759, 5)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3764_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3765_44_character_name\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "named_character_literal\000funky_types", NULL,
    {.position = POS(3774, 15)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3785_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3787_20_digits\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "numeric_character_literal\000funky_types", NULL,
    {.position = POS(3796, 15)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3807_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3809_23_character\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "character_literal\000funky_types", NULL,
    {.position = POS(3816, 11)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "character_of\000funky", NULL,
    {.position = POS(3819, 14)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3844_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3845_31_string_components\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "string_literal\000funky_types", NULL,
    {.position = POS(3850, 7)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "components_of\000funky", NULL,
    {.position = POS(3853, 10)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3857_12_expr\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3876_30_string_component\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3879_31_string_components\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3930_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3932_31_string_characters\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "character_sequence\000funky_types", NULL,
    {.position = POS(3937, 7)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "characters_of\000funky", NULL,
    {.position = POS(3940, 10)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3965_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3966_1_multiline_string_components\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3967_1_error\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3978_12_expr\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "newline\000funky_types", NULL,
    {.position = POS(4007, 5)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4013_35_string_line_component\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4016_41_multiline_string_components\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "at_character\000funky_types", NULL,
    {.position = POS(4076, 5)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4081_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4082_44_empty_character\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "tagged_empty_character\000funky_types", NULL,
    {.position = POS(4087, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "escape_expression\000funky_types", NULL,
    {.position = POS(4101, 20)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4101_55_expression\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4127_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4128_44_character_name\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "named_character\000funky_types", NULL,
    {.position = POS(4135, 11)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4144_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4146_20_digits\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "numeric_character\000funky_types", NULL,
    {.position = POS(4153, 11)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4162_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4164_36_string_line_characters\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4197_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4198_30_trailing_remarks\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "unique\000funky_types", NULL,
    {.position = POS(4203, 7)}
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
    "attribute\000funky_types", NULL,
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
    "attribute_with_setter\000funky_types", NULL,
    {.position = POS(4229, 7)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4237_0_derived_node\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4239_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4240_31_inline_parameters\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4243_38_optional_line_end_remark\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4246_29_body_statements\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "body\000funky_types", NULL,
    {.position = POS(4251, 42)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "parameters_of\000funky", NULL,
    {.position = POS(4254, 18)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "statements_of\000funky", NULL,
    {.position = POS(4256, 18)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4275_12_expr\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4299_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4300_31_inline_parameters\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4306_30_inline_statement\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "inline_body\000funky_types", NULL,
    {.position = POS(4311, 15)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "statement_of\000funky", NULL,
    {.position = POS(4315, 18)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4325_1_parameters_or_statement\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4326_1_error\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4336_12_expr\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4368_30_inline_parameter\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4371_42_maybe_more_inline_parameters\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4417_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4418_29_trailing_remark\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4423_1_parameter\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4424_1_error\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "open_parameters\000funky_types", NULL,
    {.position = POS(4429, 15)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "parameter_of\000funky", NULL,
    {.position = POS(4433, 18)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4439_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4441_28_parameter_name\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4444_30_parameter_option\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "inline_parameter\000funky_types", NULL,
    {.position = POS(4449, 11)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "option_of\000funky", NULL,
    {.position = POS(4453, 14)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4458_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4460_28_parameter_name\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4463_30_parameter_option\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4466_30_trailing_remarks\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "parameter\000funky_types", NULL,
    {.position = POS(4471, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "myself\000funky_types", NULL,
    {.position = POS(4509, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "rest\000funky_types", NULL,
    {.position = POS(4517, 5)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4522_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4523_28_simple_operand\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "initial_value\000funky_types", NULL,
    {.position = POS(4528, 7)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "operand_of\000funky", NULL,
    {.position = POS(4531, 10)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4567_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4568_29_trailing_remark\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "close_parameters\000funky_types", NULL,
    {.position = POS(4573, 7)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4580_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4581_38_some_statement_arguments\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "return_expression\000funky_types", NULL,
    {.position = POS(4586, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "return\000funky_types", NULL,
    {.position = POS(4596, 5)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4601_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4606_25_remark_text\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "remark\000funky_types", NULL,
    {.position = POS(4611, 11)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "text_of\000funky", NULL,
    {.position = POS(4614, 14)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4620_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4622_25_remark_text\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4658_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4659_29_trailing_remark\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4662_26_line_remarks\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "line_end_and_line_remarks\000funky_types", NULL,
    {.position = POS(4670, 15)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4700_1_multiline_remark\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4701_1_error\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4712_1_multiline_remark\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4713_1_error\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4721_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4723_25_remark_text\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4735_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4740_25_remark_text\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4743_31_some_remark_lines\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "multiline_remark\000funky_types", NULL,
    {.position = POS(4748, 15)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "lines_of\000funky", NULL,
    {.position = POS(4752, 18)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4759_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4761_25_remark_text\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4764_31_some_remark_lines\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4788_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4790_25_remark_text\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "remark_lines\000funky_types", NULL,
    {.position = POS(4795, 7)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4802_1_position\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "dummy_remark\000funky_types", NULL,
    {.position = POS(4807, 7)}
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
  2101, // number of constants
  538, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  constants_table,
  variables_table,
};
