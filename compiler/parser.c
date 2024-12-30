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
  lambda_748 = -992,
  lambda_749 = -993,
  lambda_750 = -994,
  lambda_751 = -995,
  lambda_752 = -996,
  lambda_753 = -997,
  str_a_single_value_e = -998,
  lambda_754 = -999,
  lambda_755 = -1000,
  func_parse_key_value = -1001,
  func_parse_sequence_expression = -1002,
  lambda_29_text_is_defined = -1003,
  lambda_756 = -1004,
  lambda_757 = -1005,
  lambda_758 = -1006,
  lambda_759 = -1007,
  lambda_760 = -1008,
  lambda_761 = -1009,
  func_parse_comma_operator = -1010,
  lambda_762 = -1011,
  chr_44 = -1012,
  lambda_763 = -1013,
  lambda_764 = -1014,
  lambda_765 = -1015,
  lambda_766 = -1016,
  lambda_767 = -1017,
  lambda_768 = -1018,
  lambda_769 = -1019,
  lambda_770 = -1020,
  lambda_771 = -1021,
  lambda_772 = -1022,
  func_parse_comma = -1023,
  func_parse_comma_expression = -1024,
  lambda_30_text_is_defined = -1025,
  lambda_773 = -1026,
  lambda_774 = -1027,
  lambda_775 = -1028,
  lambda_776 = -1029,
  lambda_777 = -1030,
  lambda_778 = -1031,
  func_parse_conditional_expression = -1032,
  lambda_31_text_is_defined = -1033,
  lambda_779 = -1034,
  lambda_780 = -1035,
  lambda_781 = -1036,
  lambda_782 = -1037,
  lambda_783 = -1038,
  func_parse_logical_operator = -1039,
  lambda_784 = -1040,
  lambda_785 = -1041,
  lambda_786 = -1042,
  lambda_787 = -1043,
  lambda_788 = -1044,
  lambda_789 = -1045,
  lambda_790 = -1046,
  lambda_791 = -1047,
  lambda_792 = -1048,
  lambda_793 = -1049,
  lambda_794 = -1050,
  lambda_795 = -1051,
  func_parse_and = -1052,
  func_parse_and_expression = -1053,
  lambda_32_text_is_defined = -1054,
  lambda_796 = -1055,
  lambda_797 = -1056,
  lambda_798 = -1057,
  lambda_799 = -1058,
  lambda_800 = -1059,
  lambda_801 = -1060,
  func_parse_and_operator = -1061,
  lambda_802 = -1062,
  lambda_803 = -1063,
  lambda_804 = -1064,
  lambda_805 = -1065,
  lambda_806 = -1066,
  lambda_807 = -1067,
  lambda_808 = -1068,
  func_parse_or = -1069,
  func_parse_or_expression = -1070,
  lambda_33_text_is_defined = -1071,
  lambda_809 = -1072,
  lambda_810 = -1073,
  lambda_811 = -1074,
  lambda_812 = -1075,
  lambda_813 = -1076,
  lambda_814 = -1077,
  func_parse_or_operator = -1078,
  lambda_815 = -1079,
  lambda_816 = -1080,
  lambda_817 = -1081,
  lambda_818 = -1082,
  lambda_819 = -1083,
  lambda_820 = -1084,
  lambda_821 = -1085,
  func_parse_named_operator_expression = -1086,
  lambda_34_text_is_defined = -1087,
  lambda_822 = -1088,
  lambda_823 = -1089,
  lambda_824 = -1090,
  lambda_825 = -1091,
  lambda_826 = -1092,
  func_parse_optional_named_operator = -1093,
  lambda_827 = -1094,
  lambda_828 = -1095,
  lambda_829 = -1096,
  lambda_830 = -1097,
  lambda_831 = -1098,
  func_parse_named_operator_without_prefix = -1099,
  lambda_35_text_is_defined = -1100,
  lambda_832 = -1101,
  lambda_833 = -1102,
  lambda_834 = -1103,
  lambda_835 = -1104,
  lambda_836 = -1105,
  lambda_837 = -1106,
  lambda_838 = -1107,
  func_parse_range_expression = -1108,
  lambda_36_text_is_defined = -1109,
  lambda_839 = -1110,
  lambda_840 = -1111,
  lambda_841 = -1112,
  lambda_842 = -1113,
  lambda_843 = -1114,
  func_parse_range_operator = -1115,
  lambda_844 = -1116,
  lambda_845 = -1117,
  lambda_846 = -1118,
  lambda_847 = -1119,
  lambda_848 = -1120,
  lambda_849 = -1121,
  lambda_850 = -1122,
  lambda_851 = -1123,
  lambda_852 = -1124,
  lambda_853 = -1125,
  func_parse_range = -1126,
  func_parse_relational_expression = -1127,
  lambda_37_text_is_defined = -1128,
  lambda_854 = -1129,
  lambda_855 = -1130,
  lambda_856 = -1131,
  lambda_857 = -1132,
  lambda_858 = -1133,
  lambda_859 = -1134,
  func_parse_comparison_operator = -1135,
  lambda_860 = -1136,
  lambda_861 = -1137,
  lambda_862 = -1138,
  lambda_863 = -1139,
  lambda_864 = -1140,
  lambda_865 = -1141,
  lambda_866 = -1142,
  lambda_867 = -1143,
  lambda_868 = -1144,
  lambda_869 = -1145,
  lambda_870 = -1146,
  lambda_871 = -1147,
  lambda_872 = -1148,
  lambda_873 = -1149,
  lambda_874 = -1150,
  lambda_875 = -1151,
  lambda_876 = -1152,
  lambda_877 = -1153,
  lambda_878 = -1154,
  lambda_879 = -1155,
  lambda_880 = -1156,
  lambda_881 = -1157,
  lambda_882 = -1158,
  lambda_883 = -1159,
  lambda_884 = -1160,
  lambda_885 = -1161,
  lambda_886 = -1162,
  lambda_887 = -1163,
  lambda_888 = -1164,
  lambda_889 = -1165,
  lambda_890 = -1166,
  lambda_891 = -1167,
  lambda_892 = -1168,
  lambda_893 = -1169,
  lambda_894 = -1170,
  lambda_895 = -1171,
  lambda_896 = -1172,
  lambda_897 = -1173,
  lambda_898 = -1174,
  lambda_899 = -1175,
  lambda_900 = -1176,
  lambda_901 = -1177,
  lambda_902 = -1178,
  lambda_903 = -1179,
  lambda_904 = -1180,
  lambda_905 = -1181,
  func_parse_equal = -1182,
  func_parse_not_equal = -1183,
  func_parse_less_equal = -1184,
  func_parse_less_than = -1185,
  func_parse_greater_equal = -1186,
  func_parse_greater_than = -1187,
  func_parse_tagged_bit_expression = -1188,
  lambda_38_text_is_defined = -1189,
  lambda_906 = -1190,
  lambda_907 = -1191,
  lambda_908 = -1192,
  lambda_909 = -1193,
  lambda_910 = -1194,
  lambda_911 = -1195,
  func_parse_bit_expression = -1196,
  lambda_39_text_is_defined = -1197,
  lambda_912 = -1198,
  lambda_913 = -1199,
  lambda_914 = -1200,
  lambda_915 = -1201,
  lambda_916 = -1202,
  func_parse_bit_operator = -1203,
  lambda_917 = -1204,
  lambda_918 = -1205,
  lambda_919 = -1206,
  lambda_920 = -1207,
  lambda_921 = -1208,
  lambda_922 = -1209,
  lambda_923 = -1210,
  lambda_924 = -1211,
  lambda_925 = -1212,
  lambda_926 = -1213,
  lambda_927 = -1214,
  lambda_928 = -1215,
  lambda_929 = -1216,
  lambda_930 = -1217,
  lambda_931 = -1218,
  lambda_932 = -1219,
  lambda_933 = -1220,
  lambda_934 = -1221,
  lambda_935 = -1222,
  lambda_936 = -1223,
  lambda_937 = -1224,
  lambda_938 = -1225,
  lambda_939 = -1226,
  lambda_940 = -1227,
  lambda_941 = -1228,
  lambda_942 = -1229,
  lambda_943 = -1230,
  lambda_944 = -1231,
  lambda_945 = -1232,
  lambda_946 = -1233,
  lambda_947 = -1234,
  lambda_948 = -1235,
  lambda_949 = -1236,
  lambda_950 = -1237,
  lambda_951 = -1238,
  lambda_952 = -1239,
  func_parse_shift_left = -1240,
  func_parse_shift_right = -1241,
  func_parse_bit_and = -1242,
  func_parse_bit_and2 = -1243,
  lambda_40_text_is_defined = -1244,
  lambda_953 = -1245,
  lambda_954 = -1246,
  lambda_955 = -1247,
  lambda_956 = -1248,
  lambda_957 = -1249,
  lambda_958 = -1250,
  func_parse_bit_and_operator = -1251,
  lambda_959 = -1252,
  lambda_960 = -1253,
  lambda_961 = -1254,
  lambda_962 = -1255,
  lambda_963 = -1256,
  lambda_964 = -1257,
  lambda_965 = -1258,
  lambda_966 = -1259,
  func_parse_bit_or = -1260,
  func_parse_bit_or2 = -1261,
  lambda_41_text_is_defined = -1262,
  lambda_967 = -1263,
  lambda_968 = -1264,
  lambda_969 = -1265,
  lambda_970 = -1266,
  lambda_971 = -1267,
  lambda_972 = -1268,
  func_parse_bit_or_operator = -1269,
  lambda_973 = -1270,
  lambda_974 = -1271,
  lambda_975 = -1272,
  lambda_976 = -1273,
  lambda_977 = -1274,
  lambda_978 = -1275,
  lambda_979 = -1276,
  lambda_980 = -1277,
  func_parse_bit_xor = -1278,
  func_parse_bit_xor2 = -1279,
  lambda_42_text_is_defined = -1280,
  lambda_981 = -1281,
  lambda_982 = -1282,
  lambda_983 = -1283,
  lambda_984 = -1284,
  lambda_985 = -1285,
  lambda_986 = -1286,
  func_parse_bit_xor_operator = -1287,
  lambda_987 = -1288,
  lambda_988 = -1289,
  lambda_989 = -1290,
  lambda_990 = -1291,
  lambda_991 = -1292,
  lambda_992 = -1293,
  lambda_993 = -1294,
  lambda_994 = -1295,
  func_parse_tagged_additive_expression = -1296,
  lambda_43_text_is_defined = -1297,
  lambda_995 = -1298,
  lambda_996 = -1299,
  lambda_997 = -1300,
  lambda_998 = -1301,
  lambda_999 = -1302,
  lambda_1000 = -1303,
  func_parse_additive_expression = -1304,
  lambda_44_text_is_defined = -1305,
  lambda_1001 = -1306,
  lambda_1002 = -1307,
  lambda_1003 = -1308,
  lambda_1004 = -1309,
  lambda_1005 = -1310,
  func_parse_additive_operator = -1311,
  lambda_1006 = -1312,
  lambda_1007 = -1313,
  lambda_1008 = -1314,
  lambda_1009 = -1315,
  lambda_1010 = -1316,
  lambda_1011 = -1317,
  lambda_1012 = -1318,
  lambda_1013 = -1319,
  lambda_1014 = -1320,
  lambda_1015 = -1321,
  lambda_1016 = -1322,
  lambda_1017 = -1323,
  lambda_1018 = -1324,
  lambda_1019 = -1325,
  func_parse_plus = -1326,
  func_parse_plus2 = -1327,
  lambda_45_text_is_defined = -1328,
  lambda_1020 = -1329,
  lambda_1021 = -1330,
  lambda_1022 = -1331,
  lambda_1023 = -1332,
  lambda_1024 = -1333,
  lambda_1025 = -1334,
  func_parse_minus = -1335,
  func_parse_minus2 = -1336,
  lambda_46_text_is_defined = -1337,
  lambda_1026 = -1338,
  lambda_1027 = -1339,
  lambda_1028 = -1340,
  lambda_1029 = -1341,
  lambda_1030 = -1342,
  lambda_1031 = -1343,
  func_parse_multiplicative_expression = -1344,
  lambda_47_text_is_defined = -1345,
  lambda_1032 = -1346,
  lambda_1033 = -1347,
  lambda_1034 = -1348,
  lambda_1035 = -1349,
  lambda_1036 = -1350,
  func_parse_multiplicative_operator = -1351,
  lambda_1037 = -1352,
  lambda_1038 = -1353,
  lambda_1039 = -1354,
  lambda_1040 = -1355,
  lambda_1041 = -1356,
  lambda_1042 = -1357,
  lambda_1043 = -1358,
  lambda_1044 = -1359,
  lambda_1045 = -1360,
  lambda_1046 = -1361,
  lambda_1047 = -1362,
  lambda_1048 = -1363,
  lambda_1049 = -1364,
  lambda_1050 = -1365,
  func_parse_times = -1366,
  func_parse_times2 = -1367,
  lambda_48_text_is_defined = -1368,
  lambda_1051 = -1369,
  lambda_1052 = -1370,
  lambda_1053 = -1371,
  lambda_1054 = -1372,
  lambda_1055 = -1373,
  lambda_1056 = -1374,
  func_parse_over = -1375,
  func_parse_over2 = -1376,
  lambda_49_text_is_defined = -1377,
  lambda_1057 = -1378,
  lambda_1058 = -1379,
  lambda_1059 = -1380,
  lambda_1060 = -1381,
  lambda_1061 = -1382,
  lambda_1062 = -1383,
  func_parse_an_expression = -1384,
  lambda_1063 = -1385,
  lambda_1064 = -1386,
  lambda_1065 = -1387,
  chr_39 = -1388,
  lambda_1066 = -1389,
  chr_64 = -1390,
  lambda_1067 = -1391,
  lambda_1068 = -1392,
  lambda_1069 = -1393,
  lambda_1070 = -1394,
  chr_34 = -1395,
  lambda_1071 = -1396,
  lambda_1072 = -1397,
  lambda_1073 = -1398,
  lambda_1074 = -1399,
  lambda_1075 = -1400,
  lambda_1076 = -1401,
  lambda_1077 = -1402,
  lambda_1078 = -1403,
  lambda_1079 = -1404,
  chr_96 = -1405,
  lambda_1080 = -1406,
  lambda_1081 = -1407,
  lambda_1082 = -1408,
  str_an_expression = -1409,
  func_parse_parenthesed_expression_without_prefix = -1410,
  lambda_50_text_is_defined = -1411,
  lambda_1083 = -1412,
  lambda_1084 = -1413,
  lambda_1085 = -1414,
  lambda_1086 = -1415,
  lambda_1087 = -1416,
  func_parse_inline_expression = -1417,
  lambda_1088 = -1418,
  lambda_1089 = -1419,
  lambda_1090 = -1420,
  lambda_1091 = -1421,
  lambda_1092 = -1422,
  lambda_1093 = -1423,
  lambda_1094 = -1424,
  str_inline_expressio = -1425,
  func_parse_backquoted_without_prefix = -1426,
  lambda_1095 = -1427,
  lambda_1096 = -1428,
  func_parse_negation_without_prefix = -1429,
  lambda_1097 = -1430,
  lambda_1098 = -1431,
  func_parse_multiline_operator = -1432,
  lambda_51_text_is_defined = -1433,
  lambda_1099 = -1434,
  lambda_1100 = -1435,
  lambda_1101 = -1436,
  lambda_1102 = -1437,
  lambda_1103 = -1438,
  lambda_1104 = -1439,
  func_parse_multiline_plus_without_prefix = -1440,
  func_parse_multiline_minus_without_prefix = -1441,
  lambda_52_text_is_defined = -1442,
  lambda_1105 = -1443,
  lambda_1106 = -1444,
  lambda_1107 = -1445,
  lambda_1108 = -1446,
  lambda_1109 = -1447,
  lambda_1110 = -1448,
  func_parse_multiline_minus_with_remark_without_prefix = -1449,
  lambda_53_text_is_defined = -1450,
  lambda_1111 = -1451,
  lambda_1112 = -1452,
  lambda_1113 = -1453,
  lambda_1114 = -1454,
  lambda_1115 = -1455,
  lambda_1116 = -1456,
  func_parse_multiline_times_without_prefix = -1457,
  func_parse_multiline_over_without_prefix = -1458,
  lambda_1117 = -1459,
  lambda_1118 = -1460,
  func_parse_multiline_over_with_remark_without_prefix = -1461,
  lambda_54_text_is_defined = -1462,
  lambda_1119 = -1463,
  lambda_1120 = -1464,
  lambda_1121 = -1465,
  lambda_1122 = -1466,
  lambda_1123 = -1467,
  lambda_1124 = -1468,
  func_parse_multiline_shift_left_without_prefix = -1469,
  func_parse_multiline_shift_right_without_prefix = -1470,
  func_parse_multiline_equal_without_prefix = -1471,
  func_parse_multiline_not_equal_without_prefix = -1472,
  func_parse_multiline_less_equal_without_prefix = -1473,
  func_parse_multiline_less_than_without_prefix = -1474,
  func_parse_multiline_greater_equal_without_prefix = -1475,
  func_parse_multiline_greater_than_without_prefix = -1476,
  func_parse_multiline_and_without_prefix = -1477,
  func_parse_multiline_or_without_prefix = -1478,
  func_parse_multiline_bit_and_without_prefix = -1479,
  lambda_55_text_is_defined = -1480,
  lambda_1125 = -1481,
  lambda_1126 = -1482,
  lambda_1127 = -1483,
  lambda_1128 = -1484,
  lambda_1129 = -1485,
  lambda_1130 = -1486,
  func_parse_multiline_bit_and_with_remark_without_prefix = -1487,
  lambda_56_text_is_defined = -1488,
  lambda_1131 = -1489,
  lambda_1132 = -1490,
  lambda_1133 = -1491,
  lambda_1134 = -1492,
  lambda_1135 = -1493,
  lambda_1136 = -1494,
  func_parse_multiline_bit_or_without_prefix = -1495,
  func_parse_multiline_bit_xor_without_prefix = -1496,
  func_parse_multiline_assign_without_prefix = -1497,
  func_parse_inline_arguments = -1498,
  lambda_1137 = -1499,
  lambda_1138 = -1500,
  lambda_1139 = -1501,
  lambda_1140 = -1502,
  lambda_1141 = -1503,
  lambda_1142 = -1504,
  lambda_1143 = -1505,
  lambda_1144 = -1506,
  lambda_1145 = -1507,
  lambda_1146 = -1508,
  lambda_1147 = -1509,
  str_inline_arguments = -1510,
  lambda_1148 = -1511,
  lambda_1149 = -1512,
  lambda_1150 = -1513,
  lambda_1151 = -1514,
  lambda_1152 = -1515,
  lambda_1153 = -1516,
  func_parse_inline_attribute_value_pair_without_prefix = -1517,
  lambda_57_text_is_defined = -1518,
  lambda_1154 = -1519,
  lambda_1155 = -1520,
  lambda_1156 = -1521,
  lambda_1157 = -1522,
  lambda_1158 = -1523,
  func_parse_inline_method_value_pair_without_prefix = -1524,
  lambda_58_text_is_defined = -1525,
  lambda_1159 = -1526,
  lambda_1160 = -1527,
  lambda_1161 = -1528,
  lambda_1162 = -1529,
  lambda_1163 = -1530,
  func_parse_expression_and_inline_arguments = -1531,
  lambda_59_text_is_defined = -1532,
  lambda_1164 = -1533,
  lambda_1165 = -1534,
  lambda_1166 = -1535,
  lambda_1167 = -1536,
  lambda_1168 = -1537,
  func_parse_spaced_inline_arguments = -1538,
  lambda_1169 = -1539,
  lambda_1170 = -1540,
  lambda_1171 = -1541,
  lambda_1172 = -1542,
  func_parse_spaced_inline_arguments_without_prefix = -1543,
  lambda_1173 = -1544,
  lambda_1174 = -1545,
  func_parse_numeric_literal = -1546,
  lambda_1175 = -1547,
  lambda_1176 = -1548,
  func_parse_digits = -1549,
  lambda_1177 = -1550,
  lambda_1178 = -1551,
  lambda_1179 = -1552,
  lambda_1180 = -1553,
  lambda_1181 = -1554,
  lambda_1182 = -1555,
  lambda_1183 = -1556,
  str_digits = -1557,
  func_parse_maybe_non_decimal_numeric_literal = -1558,
  lambda_1184 = -1559,
  lambda_1185 = -1560,
  lambda_1186 = -1561,
  lambda_1187 = -1562,
  lambda_1188 = -1563,
  lambda_1189 = -1564,
  lambda_1190 = -1565,
  lambda_1191 = -1566,
  lambda_1192 = -1567,
  lambda_1193 = -1568,
  lambda_1194 = -1569,
  lambda_1195 = -1570,
  lambda_1196 = -1571,
  lambda_1197 = -1572,
  lambda_1198 = -1573,
  lambda_1199 = -1574,
  chr_120 = -1575,
  lambda_1200 = -1576,
  lambda_1201 = -1577,
  lambda_1202 = -1578,
  func_parse_more_decimal_digits = -1579,
  lambda_1203 = -1580,
  lambda_1204 = -1581,
  lambda_1205 = -1582,
  lambda_1206 = -1583,
  lambda_1207 = -1584,
  lambda_1208 = -1585,
  lambda_1209 = -1586,
  lambda_1210 = -1587,
  lambda_1211 = -1588,
  lambda_1212 = -1589,
  lambda_1213 = -1590,
  lambda_1214 = -1591,
  lambda_1215 = -1592,
  lambda_1216 = -1593,
  chr_69 = -1594,
  lambda_1217 = -1595,
  lambda_1218 = -1596,
  lambda_1219 = -1597,
  func_parse_more_fraction_digits = -1598,
  lambda_1220 = -1599,
  lambda_1221 = -1600,
  lambda_1222 = -1601,
  lambda_1223 = -1602,
  lambda_1224 = -1603,
  lambda_1225 = -1604,
  lambda_1226 = -1605,
  lambda_1227 = -1606,
  lambda_1228 = -1607,
  func_parse_exponent = -1608,
  lambda_1229 = -1609,
  lambda_1230 = -1610,
  lambda_1231 = -1611,
  lambda_1232 = -1612,
  lambda_1233 = -1613,
  lambda_1234 = -1614,
  lambda_1235 = -1615,
  lambda_1236 = -1616,
  lambda_1237 = -1617,
  str_exponent = -1618,
  func_parse_exponent_digits = -1619,
  lambda_1238 = -1620,
  lambda_1239 = -1621,
  lambda_1240 = -1622,
  lambda_1241 = -1623,
  lambda_1242 = -1624,
  str_exponent_digits = -1625,
  func_parse_more_exponent_digits = -1626,
  lambda_1243 = -1627,
  lambda_1244 = -1628,
  lambda_1245 = -1629,
  lambda_1246 = -1630,
  lambda_1247 = -1631,
  func_parse_binary_digits = -1632,
  lambda_1248 = -1633,
  lambda_1249 = -1634,
  lambda_1250 = -1635,
  lambda_1251 = -1636,
  lambda_1252 = -1637,
  str_binary_digits = -1638,
  func_parse_more_binary_digits = -1639,
  lambda_1253 = -1640,
  lambda_1254 = -1641,
  lambda_1255 = -1642,
  lambda_1256 = -1643,
  lambda_1257 = -1644,
  lambda_1258 = -1645,
  lambda_1259 = -1646,
  lambda_1260 = -1647,
  lambda_1261 = -1648,
  func_parse_octal_digits = -1649,
  lambda_1262 = -1650,
  lambda_1263 = -1651,
  chr_55 = -1652,
  lambda_1264 = -1653,
  lambda_1265 = -1654,
  lambda_1266 = -1655,
  str_octal_digits = -1656,
  func_parse_more_octal_digits = -1657,
  lambda_1267 = -1658,
  lambda_1268 = -1659,
  lambda_1269 = -1660,
  lambda_1270 = -1661,
  lambda_1271 = -1662,
  lambda_1272 = -1663,
  lambda_1273 = -1664,
  lambda_1274 = -1665,
  lambda_1275 = -1666,
  func_parse_hex_digits = -1667,
  lambda_1276 = -1668,
  lambda_1277 = -1669,
  lambda_1278 = -1670,
  lambda_1279 = -1671,
  chr_102 = -1672,
  lambda_1280 = -1673,
  lambda_1281 = -1674,
  chr_70 = -1675,
  lambda_1282 = -1676,
  lambda_1283 = -1677,
  lambda_1284 = -1678,
  str_hex_digits = -1679,
  func_parse_more_hex_digits = -1680,
  lambda_1285 = -1681,
  lambda_1286 = -1682,
  lambda_1287 = -1683,
  lambda_1288 = -1684,
  lambda_1289 = -1685,
  lambda_1290 = -1686,
  lambda_1291 = -1687,
  lambda_1292 = -1688,
  lambda_1293 = -1689,
  lambda_1294 = -1690,
  lambda_1295 = -1691,
  lambda_1296 = -1692,
  lambda_1297 = -1693,
  lambda_1298 = -1694,
  lambda_1299 = -1695,
  lambda_1300 = -1696,
  lambda_1301 = -1697,
  func_parse_special_character_literal = -1698,
  lambda_1302 = -1699,
  lambda_1303 = -1700,
  lambda_1304 = -1701,
  lambda_1305 = -1702,
  lambda_1306 = -1703,
  lambda_1307 = -1704,
  lambda_1308 = -1705,
  lambda_1309 = -1706,
  lambda_1310 = -1707,
  lambda_1311 = -1708,
  str_special_characte = -1709,
  func_parse_at_character_literal_without_prefix = -1710,
  func_parse_named_character_literal_without_prefix = -1711,
  lambda_60_text_is_defined = -1712,
  chr_59 = -1713,
  lambda_1312 = -1714,
  lambda_1313 = -1715,
  lambda_1314 = -1716,
  str_single_quote = -1717,
  lambda_1315 = -1718,
  string_9 = -1719,
  lambda_1316 = -1720,
  func_parse_numeric_character_literal = -1721,
  lambda_61_text_is_defined = -1722,
  lambda_1317 = -1723,
  lambda_1318 = -1724,
  lambda_1319 = -1725,
  lambda_1320 = -1726,
  lambda_1321 = -1727,
  func_parse_character_literal_without_prefix = -1728,
  lambda_62_text_is_defined = -1729,
  lambda_1322 = -1730,
  lambda_1323 = -1731,
  lambda_1324 = -1732,
  func_parse_character = -1733,
  lambda_1325 = -1734,
  lambda_1326 = -1735,
  lambda_1327 = -1736,
  lambda_1328 = -1737,
  str_character = -1738,
  func_parse_more_character_name_characters = -1739,
  lambda_1329 = -1740,
  lambda_1330 = -1741,
  lambda_1331 = -1742,
  lambda_1332 = -1743,
  lambda_1333 = -1744,
  lambda_1334 = -1745,
  lambda_1335 = -1746,
  lambda_1336 = -1747,
  lambda_1337 = -1748,
  func_parse_string_literal_without_prefix = -1749,
  lambda_1338 = -1750,
  lambda_1339 = -1751,
  func_parse_string_components = -1752,
  lambda_1340 = -1753,
  lambda_1341 = -1754,
  lambda_1342 = -1755,
  lambda_1343 = -1756,
  str_string_component = -1757,
  lambda_1344 = -1758,
  lambda_1345 = -1759,
  lambda_1346 = -1760,
  lambda_1347 = -1761,
  lambda_1348 = -1762,
  lambda_1349 = -1763,
  func_parse_some_string_components = -1764,
  lambda_63_text_is_defined = -1765,
  lambda_1350 = -1766,
  lambda_1351 = -1767,
  lambda_1352 = -1768,
  lambda_1353 = -1769,
  lambda_1354 = -1770,
  func_parse_string_component = -1771,
  lambda_1355 = -1772,
  lambda_1356 = -1773,
  lambda_1357 = -1774,
  lambda_1358 = -1775,
  lambda_1359 = -1776,
  lambda_1360 = -1777,
  lambda_1361 = -1778,
  lambda_1362 = -1779,
  lambda_1363 = -1780,
  lambda_1364 = -1781,
  lambda_1365 = -1782,
  lambda_1366 = -1783,
  lambda_1367 = -1784,
  str_string_component_2 = -1785,
  func_parse_character_sequence = -1786,
  lambda_1368 = -1787,
  lambda_1369 = -1788,
  func_parse_string_characters = -1789,
  lambda_1370 = -1790,
  lambda_1371 = -1791,
  lambda_1372 = -1792,
  lambda_1373 = -1793,
  lambda_1374 = -1794,
  lambda_1375 = -1795,
  str_string_character = -1796,
  func_parse_more_string_characters = -1797,
  lambda_1376 = -1798,
  lambda_1377 = -1799,
  lambda_1378 = -1800,
  lambda_1379 = -1801,
  lambda_1380 = -1802,
  lambda_1381 = -1803,
  func_parse_multiline_string_literal_without_prefix = -1804,
  lambda_1382 = -1805,
  lambda_1383 = -1806,
  func_parse_multiline_string_components = -1807,
  lambda_1384 = -1808,
  lambda_1385 = -1809,
  lambda_1386 = -1810,
  lambda_1387 = -1811,
  lambda_1388 = -1812,
  lambda_1389 = -1813,
  lambda_1390 = -1814,
  str_multiline_string = -1815,
  lambda_1391 = -1816,
  lambda_1392 = -1817,
  lambda_1393 = -1818,
  lambda_1394 = -1819,
  lambda_1395 = -1820,
  lambda_1396 = -1821,
  func_parse_newline_without_prefix = -1822,
  func_parse_some_string_line_components = -1823,
  lambda_64_text_is_defined = -1824,
  lambda_1397 = -1825,
  lambda_1398 = -1826,
  lambda_1399 = -1827,
  lambda_1400 = -1828,
  lambda_1401 = -1829,
  func_parse_string_line_component = -1830,
  lambda_1402 = -1831,
  lambda_1403 = -1832,
  lambda_1404 = -1833,
  lambda_1405 = -1834,
  lambda_1406 = -1835,
  lambda_1407 = -1836,
  lambda_1408 = -1837,
  lambda_1409 = -1838,
  lambda_1410 = -1839,
  lambda_1411 = -1840,
  lambda_1412 = -1841,
  lambda_1413 = -1842,
  lambda_1414 = -1843,
  str_string_line_comp = -1844,
  func_parse_string_line_end_without_prefix = -1845,
  func_parse_at_character_without_prefix = -1846,
  func_parse_tagged_empty_character_without_prefix = -1847,
  lambda_1415 = -1848,
  lambda_1416 = -1849,
  func_parse_empty_character_without_prefix = -1850,
  func_parse_escape_expression_without_prefix = -1851,
  lambda_65_text_is_defined = -1852,
  lambda_1417 = -1853,
  lambda_1418 = -1854,
  lambda_1419 = -1855,
  func_parse_special_character = -1856,
  lambda_1420 = -1857,
  lambda_1421 = -1858,
  lambda_1422 = -1859,
  lambda_1423 = -1860,
  lambda_1424 = -1861,
  lambda_1425 = -1862,
  lambda_1426 = -1863,
  str_special_characte_2 = -1864,
  func_parse_named_character_without_prefix = -1865,
  lambda_66_text_is_defined = -1866,
  lambda_1427 = -1867,
  lambda_1428 = -1868,
  lambda_1429 = -1869,
  func_parse_numeric_character = -1870,
  lambda_67_text_is_defined = -1871,
  lambda_1430 = -1872,
  lambda_1431 = -1873,
  lambda_1432 = -1874,
  func_parse_string_line_character_sequence = -1875,
  lambda_1433 = -1876,
  lambda_1434 = -1877,
  func_parse_string_line_characters = -1878,
  lambda_1435 = -1879,
  lambda_1436 = -1880,
  lambda_1437 = -1881,
  lambda_1438 = -1882,
  lambda_1439 = -1883,
  str_string_line_char = -1884,
  func_parse_more_string_line_characters = -1885,
  lambda_1440 = -1886,
  lambda_1441 = -1887,
  lambda_1442 = -1888,
  lambda_1443 = -1889,
  lambda_1444 = -1890,
  func_parse_unique_without_prefix = -1891,
  lambda_1445 = -1892,
  lambda_1446 = -1893,
  func_parse_attribute_without_prefix = -1894,
  lambda_1447 = -1895,
  lambda_1448 = -1896,
  func_parse_attribute_with_setter_without_prefix = -1897,
  lambda_1449 = -1898,
  lambda_1450 = -1899,
  func_parse_body = -1900,
  lambda_68_text_is_defined = -1901,
  lambda_69_text_is_defined = -1902,
  lambda_1451 = -1903,
  lambda_1452 = -1904,
  lambda_1453 = -1905,
  lambda_1454 = -1906,
  func_parse_optional_line_end_remark = -1907,
  lambda_1455 = -1908,
  lambda_1456 = -1909,
  lambda_1457 = -1910,
  lambda_1458 = -1911,
  lambda_1459 = -1912,
  func_parse_body_statements = -1913,
  lambda_1460 = -1914,
  lambda_1461 = -1915,
  lambda_1462 = -1916,
  lambda_1463 = -1917,
  str_body_statements = -1918,
  lambda_1464 = -1919,
  lambda_1465 = -1920,
  lambda_1466 = -1921,
  lambda_1467 = -1922,
  lambda_1468 = -1923,
  lambda_1469 = -1924,
  func_parse_line_end_statement_without_prefix = -1925,
  func_parse_inline_body_without_prefix = -1926,
  lambda_70_text_is_defined = -1927,
  lambda_1470 = -1928,
  lambda_1471 = -1929,
  lambda_1472 = -1930,
  lambda_1473 = -1931,
  lambda_1474 = -1932,
  func_parse_statements = -1933,
  lambda_1475 = -1934,
  lambda_1476 = -1935,
  lambda_1477 = -1936,
  lambda_1478 = -1937,
  lambda_1479 = -1938,
  func_parse_inline_parameters = -1939,
  lambda_1480 = -1940,
  lambda_1481 = -1941,
  lambda_1482 = -1942,
  lambda_1483 = -1943,
  lambda_1484 = -1944,
  lambda_1485 = -1945,
  lambda_1486 = -1946,
  lambda_1487 = -1947,
  lambda_1488 = -1948,
  lambda_1489 = -1949,
  lambda_1490 = -1950,
  func_parse_some_inline_parameters = -1951,
  lambda_1491 = -1952,
  lambda_1492 = -1953,
  lambda_1493 = -1954,
  lambda_1494 = -1955,
  str_some_inline_para = -1956,
  func_parse_one_or_more_inline_parameters = -1957,
  lambda_71_text_is_defined = -1958,
  lambda_1495 = -1959,
  lambda_1496 = -1960,
  lambda_1497 = -1961,
  lambda_1498 = -1962,
  lambda_1499 = -1963,
  func_parse_maybe_more_inline_parameters = -1964,
  lambda_1500 = -1965,
  lambda_1501 = -1966,
  lambda_1502 = -1967,
  lambda_1503 = -1968,
  lambda_1504 = -1969,
  lambda_1505 = -1970,
  str_maybe_more_inlin = -1971,
  func_parse_parameter_name = -1972,
  lambda_1506 = -1973,
  lambda_1507 = -1974,
  lambda_1508 = -1975,
  lambda_1509 = -1976,
  lambda_1510 = -1977,
  lambda_1511 = -1978,
  lambda_1512 = -1979,
  lambda_1513 = -1980,
  lambda_1514 = -1981,
  str_parameter_name = -1982,
  func_parse_open_parameters_without_prefix = -1983,
  lambda_72_text_is_defined = -1984,
  lambda_1515 = -1985,
  lambda_1516 = -1986,
  lambda_1517 = -1987,
  lambda_1518 = -1988,
  lambda_1519 = -1989,
  lambda_1520 = -1990,
  func_parse_inline_parameter = -1991,
  lambda_73_text_is_defined = -1992,
  lambda_1521 = -1993,
  lambda_1522 = -1994,
  lambda_1523 = -1995,
  func_parse_parameter = -1996,
  lambda_74_text_is_defined = -1997,
  lambda_75_text_is_defined = -1998,
  lambda_1524 = -1999,
  lambda_1525 = -2000,
  lambda_1526 = -2001,
  lambda_1527 = -2002,
  func_parse_parameter_option = -2003,
  lambda_1528 = -2004,
  lambda_1529 = -2005,
  lambda_1530 = -2006,
  lambda_1531 = -2007,
  lambda_1532 = -2008,
  lambda_1533 = -2009,
  lambda_1534 = -2010,
  lambda_1535 = -2011,
  lambda_1536 = -2012,
  lambda_1537 = -2013,
  func_parse_myself_without_prefix = -2014,
  func_parse_rest_without_prefix = -2015,
  func_parse_initial_value_without_prefix = -2016,
  lambda_1538 = -2017,
  lambda_1539 = -2018,
  func_parse_simple_operand = -2019,
  lambda_1540 = -2020,
  lambda_1541 = -2021,
  lambda_1542 = -2022,
  lambda_1543 = -2023,
  lambda_1544 = -2024,
  lambda_1545 = -2025,
  lambda_1546 = -2026,
  lambda_1547 = -2027,
  lambda_1548 = -2028,
  lambda_1549 = -2029,
  lambda_1550 = -2030,
  lambda_1551 = -2031,
  lambda_1552 = -2032,
  lambda_1553 = -2033,
  str_simple_operand = -2034,
  func_parse_close_parameters_without_prefix = -2035,
  lambda_1554 = -2036,
  lambda_1555 = -2037,
  func_parse_return_expression_without_prefix = -2038,
  lambda_1556 = -2039,
  lambda_1557 = -2040,
  func_parse_return_without_prefix = -2041,
  func_parse_remark = -2042,
  lambda_1558 = -2043,
  lambda_1559 = -2044,
  lambda_1560 = -2045,
  lambda_1561 = -2046,
  string_10 = -2047,
  func_parse_remark_without_prefix = -2048,
  lambda_1562 = -2049,
  lambda_1563 = -2050,
  func_parse_remark_text = -2051,
  lambda_1564 = -2052,
  lambda_1565 = -2053,
  lambda_1566 = -2054,
  lambda_1567 = -2055,
  func_parse_trailing_remarks = -2056,
  lambda_1568 = -2057,
  lambda_1569 = -2058,
  lambda_1570 = -2059,
  lambda_1571 = -2060,
  lambda_1572 = -2061,
  str_trailing_remarks = -2062,
  func_parse_line_end_and_line_remarks = -2063,
  lambda_76_text_is_defined = -2064,
  lambda_1573 = -2065,
  lambda_1574 = -2066,
  lambda_1575 = -2067,
  lambda_1576 = -2068,
  lambda_1577 = -2069,
  func_parse_trailing_remark = -2070,
  lambda_1578 = -2071,
  lambda_1579 = -2072,
  lambda_1580 = -2073,
  lambda_1581 = -2074,
  lambda_1582 = -2075,
  lambda_1583 = -2076,
  lambda_1584 = -2077,
  str_trailing_remark = -2078,
  func_parse_line_remarks = -2079,
  lambda_1585 = -2080,
  lambda_1586 = -2081,
  lambda_1587 = -2082,
  lambda_1588 = -2083,
  func_parse_line_remarks_without_prefix = -2084,
  lambda_1589 = -2085,
  lambda_1590 = -2086,
  func_parse_spaced_remark_without_prefix = -2087,
  lambda_1591 = -2088,
  lambda_1592 = -2089,
  func_parse_multiline_remark = -2090,
  lambda_1593 = -2091,
  lambda_77_text_is_defined = -2092,
  lambda_1594 = -2093,
  lambda_1595 = -2094,
  lambda_1596 = -2095,
  lambda_1597 = -2096,
  func_parse_multiline_remark_without_prefix = -2097,
  lambda_78_text_is_defined = -2098,
  lambda_1598 = -2099,
  lambda_1599 = -2100,
  lambda_1600 = -2101,
  func_parse_some_remark_lines = -2102,
  lambda_1601 = -2103,
  lambda_1602 = -2104,
  lambda_1603 = -2105,
  lambda_1604 = -2106,
  lambda_1605 = -2107,
  func_parse_remark_lines = -2108,
  lambda_1606 = -2109,
  lambda_1607 = -2110,
  func_parse_dummy_remark = -2111,
  lambda_1608 = -2112,
  lambda_1609 = -2113
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
  var_std_types__line, // extern
  var_funky__line_no_of, // extern polymorphic
  var_funky__SYNTAX_ERROR, // initialized
  var_funky__line_indent_of, // initialized
  var_29_25_line, // dynamic
  var_is_defined, // extern
  var_first, // extern
  var_if, // extern
  var_funky__line_text_of, // initialized
  var_35_23_line, // dynamic
  var_second, // extern
  var_funky__split_source_into_lines, // initialized
  var_42_27_lines, // dynamic
  var_split_into_indented_lines, // extern
  var_43_12_line_no, // dynamic
  var_43_20_line, // dynamic
  var_46_1_prev_line_no, // dynamic
  var_dec, // extern
  var_std__less, // extern
  var_std__or, // extern
  var_next, // extern
  var_loop, // extern
  var_map, // extern
  var_funky__parse, // initialized
  var_62_31_left, // dynamic
  var_62_36_right, // dynamic
  var_is_undefined, // extern
  var_min, // extern
  var_60_1_min_indent, // dynamic
  var_map_reduce, // extern
  var_71_13_group, // dynamic
  var_std__minus, // extern
  var_spaces, // extern
  var_append, // extern
  var_typed_tuple, // extern
  var_tuple, // extern
  var_80_11_node, // dynamic
  var_empty_list, // extern
  var_is_a_list, // extern
  var_list, // extern
  var_90_16_item, // dynamic
  var_length_of, // extern
  var_std__plus, // extern
  var_std__equal, // extern
  var_std__and, // extern
  var_string, // extern
  var_funky__base_directory, // extern
  var_error, // extern
  var_108_16_parse_function, // dynamic
  var_111_1_indent, // dynamic
  var_split_into_groups, // extern
  var_116_42_head, // dynamic
  var_subgroups_of, // extern
  var_127_1_node, // dynamic
  var_134_15_parse_function, // dynamic
  var_141_1_node, // dynamic
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
  var_416_1_position, // dynamic
  var_417_18_head, // dynamic
  var_420_33_statement_arguments, // dynamic
  var_funky_types__statement, // extern
  var_funky__source_group_of, // extern polymorphic
  var_funky__source_position_of, // extern polymorphic
  var_funky__head_of, // extern polymorphic
  var_funky__arguments_of, // extern polymorphic
  var_471_12_expr, // dynamic
  var_527_1_position, // dynamic
  var_528_25_inline_head, // dynamic
  var_531_35_some_inline_arguments, // dynamic
  var_funky_types__inline_statement, // extern
  var_funky_types__attribute_value_pair, // extern
  var_funky_types__type_function, // extern
  var_funky_types__method_value_pair, // extern
  var_591_0_derived_node, // dynamic
  var_593_1_position, // dynamic
  var_595_24_identifier, // dynamic
  var_598_27_some_argument, // dynamic
  var_funky_types__pair, // extern
  var_default_value, // extern
  var_funky__identifier_of, // extern polymorphic
  var_funky__argument_of, // extern polymorphic
  var_684_1_position, // dynamic
  var_686_18_name, // dynamic
  var_689_30_optional_version, // dynamic
  var_695_30_trailing_remarks, // dynamic
  var_funky_types__namespace_instruction, // extern
  var_funky__name_of, // extern polymorphic
  var_funky__version_of, // extern polymorphic
  var_funky__remarks_of, // extern polymorphic
  var_713_1_position, // dynamic
  var_715_22_filename, // dynamic
  var_721_30_trailing_remarks, // dynamic
  var_funky_types__require_instruction, // extern
  var_funky__filename_of, // extern polymorphic
  var_737_1_position, // dynamic
  var_739_18_name, // dynamic
  var_742_30_optional_version, // dynamic
  var_748_30_trailing_remarks, // dynamic
  var_funky_types__using_instruction, // extern
  var_766_1_position, // dynamic
  var_767_19_alias, // dynamic
  var_770_24_equal_sign, // dynamic
  var_774_18_name, // dynamic
  var_780_30_trailing_remarks, // dynamic
  var_funky_types__alias_instruction, // extern
  var_funky__alias_of, // extern polymorphic
  var_funky__sign_of, // extern polymorphic
  var_800_1_position, // dynamic
  var_802_18_name, // dynamic
  var_808_21_version, // dynamic
  var_814_30_trailing_remarks, // dynamic
  var_funky_types__resolve_instruction, // extern
  var_834_1_position, // dynamic
  var_848_20_pragma, // dynamic
  var_854_30_trailing_remarks, // dynamic
  var_funky_types__allow_instruction, // extern
  var_funky__pragma_of, // extern polymorphic
  var_949_18_name, // dynamic
  var_989_1_position, // dynamic
  var_990_33_major, // dynamic
  var_997_19_minor, // dynamic
  var_funky_types__version_no, // extern
  var_funky__major_of, // extern polymorphic
  var_funky__minor_of, // extern polymorphic
  var_1034_1_position, // dynamic
  var_funky_types__unstable, // extern
  var_funky_types__allow_hidden, // extern
  var_1102_1_position, // dynamic
  var_funky_types__allow_unused, // extern
  var_1134_1_position, // dynamic
  var_1135_40_identifier, // dynamic
  var_1143_13_extensions, // dynamic
  var_funky_types__functor, // extern
  var_funky__extensions_of, // extern polymorphic
  var_1157_12_expr, // dynamic
  var_1195_42_function_call, // dynamic
  var_1198_24_extensions, // dynamic
  var_1214_45_attribute_access, // dynamic
  var_1217_24_extensions, // dynamic
  var_1233_1_position, // dynamic
  var_1235_24_identifier, // dynamic
  var_1238_31_inline_extensions, // dynamic
  var_1252_12_expr, // dynamic
  var_1279_12_expr, // dynamic
  var_1301_42_function_call, // dynamic
  var_1304_31_inline_extensions, // dynamic
  var_1320_45_attribute_access, // dynamic
  var_1323_31_inline_extensions, // dynamic
  var_funky_types__io_call, // extern
  var_1347_1_position, // dynamic
  var_1348_39_optional_inline_arguments, // dynamic
  var_funky_types__function_call, // extern
  var_1360_12_expr, // dynamic
  var_1378_30_inline_arguments, // dynamic
  var_1391_1_position, // dynamic
  var_1392_37_spaced_inline_arguments, // dynamic
  var_funky_types__inline_return, // extern
  var_1404_1_position, // dynamic
  var_1406_24_identifier, // dynamic
  var_funky_types__attribute_access, // extern
  var_1437_12_expr, // dynamic
  var_1467_12_expr, // dynamic
  var_1501_28_more_arguments, // dynamic
  var_1510_38_more_statement_arguments, // dynamic
  var_1571_22_argument, // dynamic
  var_1574_28_some_arguments, // dynamic
  var_1590_22_argument, // dynamic
  var_1593_38_some_statement_arguments, // dynamic
  var_1611_1_line_start_arguments, // dynamic
  var_is_an_error, // extern
  var_1612_1_error, // dynamic
  var_find_first, // extern
  var_1622_1_line_start_arguments, // dynamic
  var_1623_1_error, // dynamic
  var_1631_1_position, // dynamic
  var_1632_1_line_start_arguments, // dynamic
  var_1633_1_error, // dynamic
  var_1644_1_position, // dynamic
  var_1645_42_spaced_remark, // dynamic
  var_1650_1_line_start_arguments, // dynamic
  var_1651_1_error, // dynamic
  var_funky_types__remark_and_multiline_function_call, // extern
  var_funky__remark_of, // extern polymorphic
  var_1898_1_position, // dynamic
  var_1900_18_name, // dynamic
  var_funky_types__dummy_definition, // extern
  var_1912_1_position, // dynamic
  var_1913_40_identifier, // dynamic
  var_funky_types__variable, // extern
  var_1925_1_position, // dynamic
  var_1927_34_versioned_identifier, // dynamic
  var_funky_types__definition, // extern
  var_1939_1_position, // dynamic
  var_1941_24_identifier, // dynamic
  var_1944_31_inline_extensions, // dynamic
  var_funky_types__redefinition, // extern
  var_1958_1_position, // dynamic
  var_1960_24_identifier, // dynamic
  var_1963_31_inline_extensions, // dynamic
  var_funky_types__update, // extern
  var_1978_0_derived_node, // dynamic
  var_1980_1_position, // dynamic
  var_1981_33_sequence_expression, // dynamic
  var_1984_32_key_value_operator, // dynamic
  var_funky_types__expression, // extern
  var_funky__expression_of, // extern polymorphic
  var_funky__operator_of, // extern polymorphic
  var_2022_1_position, // dynamic
  var_2023_1_line_start_arguments, // dynamic
  var_2025_1_error, // dynamic
  var_funky_types__key_value, // extern
  var_2047_0_derived_node, // dynamic
  var_2049_1_position, // dynamic
  var_2050_36_conditional_expression, // dynamic
  var_2053_28_comma_operator, // dynamic
  var_funky_types__sequence_expression, // extern
  var_funky_types__comma, // extern
  var_2101_0_derived_node, // dynamic
  var_2103_1_position, // dynamic
  var_2104_33_sequence_expression, // dynamic
  var_2107_28_comma_operator, // dynamic
  var_2125_1_position, // dynamic
  var_2126_39_named_operator_expression, // dynamic
  var_2129_30_logical_operator, // dynamic
  var_funky_types__and, // extern
  var_2175_0_derived_node, // dynamic
  var_2177_1_position, // dynamic
  var_2178_39_named_operator_expression, // dynamic
  var_2181_26_and_operator, // dynamic
  var_funky_types__or, // extern
  var_2218_0_derived_node, // dynamic
  var_2220_1_position, // dynamic
  var_2221_39_named_operator_expression, // dynamic
  var_2224_25_or_operator, // dynamic
  var_2257_1_position, // dynamic
  var_2258_30_range_expression, // dynamic
  var_2261_37_optional_named_operator, // dynamic
  var_2301_1_position, // dynamic
  var_2303_24_identifier, // dynamic
  var_2311_30_range_expression, // dynamic
  var_funky_types__named_operator, // extern
  var_2329_1_position, // dynamic
  var_2330_35_relational_expression, // dynamic
  var_2333_28_range_operator, // dynamic
  var_funky_types__range, // extern
  var_2377_0_derived_node, // dynamic
  var_2379_1_position, // dynamic
  var_2380_28_bit_expression, // dynamic
  var_2383_33_comparison_operator, // dynamic
  var_funky_types__equal, // extern
  var_funky_types__not_equal, // extern
  var_funky_types__less_equal, // extern
  var_funky_types__less_than, // extern
  var_funky_types__greater_equal, // extern
  var_funky_types__greater_than, // extern
  var_2516_0_derived_node, // dynamic
  var_2518_1_position, // dynamic
  var_2519_33_additive_expression, // dynamic
  var_2522_26_bit_operator, // dynamic
  var_funky_types__tagged_bit_expression, // extern
  var_2540_1_position, // dynamic
  var_2541_33_additive_expression, // dynamic
  var_2544_26_bit_operator, // dynamic
  var_funky_types__shift_left, // extern
  var_funky_types__shift_right, // extern
  var_funky_types__bit_and, // extern
  var_2649_0_derived_node, // dynamic
  var_2651_1_position, // dynamic
  var_2652_33_additive_expression, // dynamic
  var_2655_30_bit_and_operator, // dynamic
  var_funky_types__bit_and2, // extern
  var_funky_types__bit_or, // extern
  var_2696_0_derived_node, // dynamic
  var_2698_1_position, // dynamic
  var_2699_33_additive_expression, // dynamic
  var_2702_29_bit_or_operator, // dynamic
  var_funky_types__bit_or2, // extern
  var_funky_types__bit_xor, // extern
  var_2743_0_derived_node, // dynamic
  var_2745_1_position, // dynamic
  var_2746_33_additive_expression, // dynamic
  var_2749_30_bit_xor_operator, // dynamic
  var_funky_types__bit_xor2, // extern
  var_2787_0_derived_node, // dynamic
  var_2789_1_position, // dynamic
  var_2790_39_multiplicative_expression, // dynamic
  var_2793_31_additive_operator, // dynamic
  var_funky_types__tagged_additive_expression, // extern
  var_2811_1_position, // dynamic
  var_2812_39_multiplicative_expression, // dynamic
  var_2815_31_additive_operator, // dynamic
  var_funky_types__plus, // extern
  var_2869_0_derived_node, // dynamic
  var_2871_1_position, // dynamic
  var_2872_39_multiplicative_expression, // dynamic
  var_2875_31_additive_operator, // dynamic
  var_funky_types__plus2, // extern
  var_funky_types__minus, // extern
  var_2897_0_derived_node, // dynamic
  var_2899_1_position, // dynamic
  var_2900_39_multiplicative_expression, // dynamic
  var_2903_31_additive_operator, // dynamic
  var_funky_types__minus2, // extern
  var_2921_1_position, // dynamic
  var_2922_27_an_expression, // dynamic
  var_2925_37_multiplicative_operator, // dynamic
  var_funky_types__times, // extern
  var_2979_0_derived_node, // dynamic
  var_2981_1_position, // dynamic
  var_2982_27_an_expression, // dynamic
  var_2985_37_multiplicative_operator, // dynamic
  var_funky_types__times2, // extern
  var_funky_types__over, // extern
  var_3007_0_derived_node, // dynamic
  var_3009_1_position, // dynamic
  var_3010_27_an_expression, // dynamic
  var_3013_37_multiplicative_operator, // dynamic
  var_funky_types__over2, // extern
  var_3078_1_position, // dynamic
  var_3079_31_inline_expression, // dynamic
  var_3085_26_inline_calls, // dynamic
  var_funky_types__parenthesed_expression, // extern
  var_funky__calls_of, // extern polymorphic
  var_3122_1_position, // dynamic
  var_3123_27_an_expression, // dynamic
  var_funky_types__backquoted, // extern
  var_3135_1_position, // dynamic
  var_3136_27_an_expression, // dynamic
  var_funky_types__negation, // extern
  var_3149_0_derived_node, // dynamic
  var_3151_1_position, // dynamic
  var_3152_29_trailing_remark, // dynamic
  var_3157_1_line_start_arguments, // dynamic
  var_3158_1_error, // dynamic
  var_funky_types__multiline_operator, // extern
  var_funky_types__multiline_plus, // extern
  var_3176_1_position, // dynamic
  var_3177_26_dummy_remark, // dynamic
  var_3182_1_line_start_arguments, // dynamic
  var_3183_1_error, // dynamic
  var_funky_types__multiline_minus, // extern
  var_3198_1_position, // dynamic
  var_3199_20_remark, // dynamic
  var_3204_1_line_start_arguments, // dynamic
  var_3205_1_error, // dynamic
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
  var_3288_1_position, // dynamic
  var_3289_26_dummy_remark, // dynamic
  var_3294_1_line_start_arguments, // dynamic
  var_3295_1_error, // dynamic
  var_funky_types__multiline_bit_and, // extern
  var_3310_1_position, // dynamic
  var_3311_20_remark, // dynamic
  var_3316_1_line_start_arguments, // dynamic
  var_3317_1_error, // dynamic
  var_funky_types__multiline_bit_and_with_remark, // extern
  var_funky_types__multiline_bit_or, // extern
  var_funky_types__multiline_bit_xor, // extern
  var_funky_types__multiline_assign, // extern
  var_3341_12_expr, // dynamic
  var_3378_1_position, // dynamic
  var_3380_24_identifier, // dynamic
  var_3386_24_expression, // dynamic
  var_funky_types__inline_attribute_value_pair, // extern
  var_3402_1_position, // dynamic
  var_3404_24_identifier, // dynamic
  var_3410_24_expression, // dynamic
  var_funky_types__inline_method_value_pair, // extern
  var_3426_24_expression, // dynamic
  var_3429_35_some_inline_arguments, // dynamic
  var_3448_30_inline_arguments, // dynamic
  var_3459_30_inline_arguments, // dynamic
  var_3468_1_position, // dynamic
  var_3470_20_digits, // dynamic
  var_funky_types__numeric_literal, // extern
  var_funky__digits_of, // extern polymorphic
  var_funky_types__at_character_literal, // extern
  var_3748_1_position, // dynamic
  var_3749_44_character_name, // dynamic
  var_funky_types__named_character_literal, // extern
  var_3769_1_position, // dynamic
  var_3771_20_digits, // dynamic
  var_funky_types__numeric_character_literal, // extern
  var_3791_1_position, // dynamic
  var_3793_23_character, // dynamic
  var_funky_types__character_literal, // extern
  var_funky__character_of, // extern polymorphic
  var_3828_1_position, // dynamic
  var_3829_31_string_components, // dynamic
  var_funky_types__string_literal, // extern
  var_funky__components_of, // extern polymorphic
  var_3841_12_expr, // dynamic
  var_3859_30_string_component, // dynamic
  var_3862_31_string_components, // dynamic
  var_3913_1_position, // dynamic
  var_3915_31_string_characters, // dynamic
  var_funky_types__character_sequence, // extern
  var_funky__characters_of, // extern polymorphic
  var_3948_1_position, // dynamic
  var_3949_1_multiline_string_components, // dynamic
  var_3950_1_error, // dynamic
  var_3961_12_expr, // dynamic
  var_funky_types__newline, // extern
  var_3995_35_string_line_component, // dynamic
  var_3998_41_multiline_string_components, // dynamic
  var_funky_types__at_character, // extern
  var_4062_1_position, // dynamic
  var_4063_44_empty_character, // dynamic
  var_funky_types__tagged_empty_character, // extern
  var_funky_types__escape_expression, // extern
  var_4080_55_expression, // dynamic
  var_4106_1_position, // dynamic
  var_4107_44_character_name, // dynamic
  var_funky_types__named_character, // extern
  var_4123_1_position, // dynamic
  var_4125_20_digits, // dynamic
  var_funky_types__numeric_character, // extern
  var_4141_1_position, // dynamic
  var_4143_36_string_line_characters, // dynamic
  var_4176_1_position, // dynamic
  var_4177_30_trailing_remarks, // dynamic
  var_funky_types__unique, // extern
  var_4189_1_position, // dynamic
  var_4190_30_trailing_remarks, // dynamic
  var_funky_types__attribute, // extern
  var_4202_1_position, // dynamic
  var_4203_30_trailing_remarks, // dynamic
  var_funky_types__attribute_with_setter, // extern
  var_4216_0_derived_node, // dynamic
  var_4218_1_position, // dynamic
  var_4219_31_inline_parameters, // dynamic
  var_4222_38_optional_line_end_remark, // dynamic
  var_4225_29_body_statements, // dynamic
  var_funky_types__body, // extern
  var_funky__parameters_of, // extern polymorphic
  var_funky__statements_of, // extern polymorphic
  var_4254_12_expr, // dynamic
  var_4277_1_position, // dynamic
  var_4278_31_inline_parameters, // dynamic
  var_4284_30_inline_statement, // dynamic
  var_funky_types__inline_body, // extern
  var_funky__statement_of, // extern polymorphic
  var_4302_1_parameters_or_statement, // dynamic
  var_4303_1_error, // dynamic
  var_4313_12_expr, // dynamic
  var_4344_30_inline_parameter, // dynamic
  var_4347_42_maybe_more_inline_parameters, // dynamic
  var_4393_1_position, // dynamic
  var_4394_29_trailing_remark, // dynamic
  var_4399_1_parameter, // dynamic
  var_4400_1_error, // dynamic
  var_funky_types__open_parameters, // extern
  var_funky__parameter_of, // extern polymorphic
  var_4415_1_position, // dynamic
  var_4417_28_parameter_name, // dynamic
  var_4420_30_parameter_option, // dynamic
  var_funky_types__inline_parameter, // extern
  var_funky__option_of, // extern polymorphic
  var_4434_1_position, // dynamic
  var_4436_28_parameter_name, // dynamic
  var_4439_30_parameter_option, // dynamic
  var_4442_30_trailing_remarks, // dynamic
  var_funky_types__parameter, // extern
  var_funky_types__myself, // extern
  var_funky_types__rest, // extern
  var_4498_1_position, // dynamic
  var_4499_28_simple_operand, // dynamic
  var_funky_types__initial_value, // extern
  var_funky__operand_of, // extern polymorphic
  var_4543_1_position, // dynamic
  var_4544_29_trailing_remark, // dynamic
  var_funky_types__close_parameters, // extern
  var_4556_1_position, // dynamic
  var_4557_38_some_statement_arguments, // dynamic
  var_funky_types__return_expression, // extern
  var_funky_types__return, // extern
  var_4577_1_position, // dynamic
  var_4582_25_remark_text, // dynamic
  var_funky_types__remark, // extern
  var_funky__text_of, // extern polymorphic
  var_4596_1_position, // dynamic
  var_4598_25_remark_text, // dynamic
  var_4634_1_position, // dynamic
  var_4635_29_trailing_remark, // dynamic
  var_4638_26_line_remarks, // dynamic
  var_funky_types__line_end_and_line_remarks, // extern
  var_4675_1_multiline_remark, // dynamic
  var_4676_1_error, // dynamic
  var_4686_1_multiline_remark, // dynamic
  var_4687_1_error, // dynamic
  var_4695_1_position, // dynamic
  var_4697_25_remark_text, // dynamic
  var_4709_1_position, // dynamic
  var_4714_25_remark_text, // dynamic
  var_4717_31_some_remark_lines, // dynamic
  var_funky_types__multiline_remark, // extern
  var_funky__lines_of, // extern polymorphic
  var_4733_1_position, // dynamic
  var_4735_25_remark_text, // dynamic
  var_4738_31_some_remark_lines, // dynamic
  var_4762_1_position, // dynamic
  var_4764_25_remark_text, // dynamic
  var_funky_types__remark_lines, // extern
  var_4776_1_position, // dynamic
  var_funky_types__dummy_remark, // extern
  var__END
};


static TAB_NUM t_func_funky__line_indent_of[] = {
  1, // locals
  1, // parameters
  var_29_25_line,
  // is_defined
  var_is_defined, 1, var_29_25_line, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1, lambda_2, TAIL_CALL,
  POS(31, 10),
  POS(30, 3)
};

static TAB_NUM t_lambda_1[] = {
  1, // locals
  0, // parameters
  // first(line)
  var_first, 1, var_29_25_line, 1, LOCAL(1),
  //  first(line)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(32, 8),
  POS(32, 7)
};

static TAB_NUM t_lambda_2[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(33, 7)
};

static TAB_NUM t_func_funky__line_text_of[] = {
  1, // locals
  1, // parameters
  var_35_23_line,
  // is_defined
  var_is_defined, 1, var_35_23_line, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_3, lambda_4, TAIL_CALL,
  POS(37, 10),
  POS(36, 3)
};

static TAB_NUM t_lambda_3[] = {
  1, // locals
  0, // parameters
  // second(line)
  var_second, 1, var_35_23_line, 1, LOCAL(1),
  //  second(line)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(38, 8),
  POS(38, 7)
};

static TAB_NUM t_lambda_4[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(39, 7)
};

static TAB_NUM t_func_funky__split_source_into_lines[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 41_34_source
  // split_into_indented_lines $lines source
  var_split_into_indented_lines, 1, LOCAL(1), 1, var_42_27_lines,
  // map lines: (line_no line)
  var_map, 2, var_42_27_lines, lambda_5, TAIL_CALL,
  POS(42, 3),
  POS(43, 3)
};

static TAB_NUM t_lambda_5[] = {
  1, // locals
  2, // parameters
  var_43_12_line_no,
  var_43_20_line,
  // is_defined:
  var_is_defined, 1, var_43_20_line, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_line_is_defined, lambda_8, TAIL_CALL,
  POS(45, 12),
  POS(44, 5)
};

static TAB_NUM t_lambda_line_is_defined[] = {
  0, // locals
  0, // parameters
  // $prev_line_no line_no
  LET, 1, var_43_12_line_no, 1, var_46_1_prev_line_no,
  // loop:
  var_loop, 1, lambda_loop, TAIL_CALL,
  POS(46, 9),
  POS(47, 9)
};

static TAB_NUM t_lambda_loop[] = {
  2, // locals
  0, // parameters
  // dec &prev_line_no
  var_dec, 1, var_46_1_prev_line_no, 1, var_46_1_prev_line_no,
  // prev_line_no < 1 || lines(prev_line_no).is_defined
  var_std__less, 2, var_46_1_prev_line_no, num_1, 1, LOCAL(1),
  // prev_line_no < 1 || lines(prev_line_no).is_defined
  var_std__or, 2, LOCAL(1), lambda_6, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_7, var_next, TAIL_CALL,
  POS(48, 11),
  POS(50, 13),
  POS(50, 13),
  POS(49, 11)
};

static TAB_NUM t_lambda_6[] = {
  2, // locals
  0, // parameters
  // lines(prev_line_no).is_defined
  var_42_27_lines, 1, var_46_1_prev_line_no, 1, LOCAL(1),
  // is_defined
  var_is_defined, 1, LOCAL(1), 1, LOCAL(2),
  // lines(prev_line_no).is_defined
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(50, 33),
  POS(50, 53),
  POS(50, 33)
};

static TAB_NUM t_lambda_7[] = {
  1, // locals
  0, // parameters
  // .funky::line_no_of line_no)
  LET, -1, var_43_20_line, var_funky__line_no_of, var_43_12_line_no, LOCAL(1),
  //  line(.funky::line_no_of line_no)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(51, 21),
  POS(51, 15)
};

static TAB_NUM t_lambda_8[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(53, 9)
};

static TAB_NUM t_func_funky__parse[] = {
  2, // locals
  2, // parameters
  LOCAL(1), // 55_16_lines
  LOCAL(2), // 55_22_parse_function
  // !subgroups lines
  LET, 1, LOCAL(1), 1, var_subgroups,
  // parse_groups parse_function
  func_parse_groups, 1, LOCAL(2), TAIL_CALL,
  POS(56, 3),
  POS(57, 3)
};

static TAB_NUM t_func_convert_to_text_lines[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 59_25_groups
  // $min_indent
  var_map_reduce, 3, LOCAL(1), var_funky__line_indent_of, lambda_9, 1, var_60_1_min_indent,
  // map groups: (group)
  var_map, 2, LOCAL(1), lambda_14, TAIL_CALL,
  POS(60, 3),
  POS(71, 3)
};

static TAB_NUM t_lambda_9[] = {
  1, // locals
  2, // parameters
  var_62_31_left,
  var_62_36_right,
  // is_undefined
  var_is_undefined, 1, var_62_31_left, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_10, lambda_11, TAIL_CALL,
  POS(64, 16),
  POS(63, 9)
};

static TAB_NUM t_lambda_10[] = {
  0, // locals
  0, // parameters
  //  right
  LET, 1, var_62_36_right, TAIL_CALL,
  POS(65, 13)
};

static TAB_NUM t_lambda_11[] = {
  1, // locals
  0, // parameters
  // is_undefined
  var_is_undefined, 1, var_62_36_right, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_12, lambda_13, TAIL_CALL,
  POS(68, 21),
  POS(67, 13)
};

static TAB_NUM t_lambda_12[] = {
  0, // locals
  0, // parameters
  //  left
  LET, 1, var_62_31_left, TAIL_CALL,
  POS(69, 17)
};

static TAB_NUM t_lambda_13[] = {
  1, // locals
  0, // parameters
  // min(left right)
  var_min, 2, var_62_31_left, var_62_36_right, 1, LOCAL(1),
  //  min(left right)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(70, 18),
  POS(70, 17)
};

static TAB_NUM t_lambda_14[] = {
  1, // locals
  1, // parameters
  var_71_13_group,
  // is_defined:
  var_is_defined, 1, var_71_13_group, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_group_is_defined, lambda_15, TAIL_CALL,
  POS(73, 13),
  POS(72, 5)
};

static TAB_NUM t_lambda_group_is_defined[] = {
  8, // locals
  0, // parameters
  // group $indent $line_text
  var_71_13_group, 0, 2, LOCAL(7), LOCAL(8),
  // indent-min_indent) line_text))
  var_std__minus, 2, LOCAL(7), var_60_1_min_indent, 1, LOCAL(1),
  // spaces(indent-min_indent) line_text))
  var_spaces, 1, LOCAL(1), 1, LOCAL(2),
  // append(spaces(indent-min_indent) line_text))
  var_append, 2, LOCAL(2), LOCAL(8), 1, LOCAL(3),
  // funky::line_no_of(group)
  var_funky__line_no_of, 1, var_71_13_group, 1, LOCAL(4),
  // typed_tuple(std_types::line min_indent append(spaces(indent-min_indent) line_text))
  var_typed_tuple, 3, var_std_types__line, var_60_1_min_indent, LOCAL(3), 1, LOCAL(5),
  // typed_tuple(std_types::line min_indent append(spaces(indent-min_indent) line_text))
  LET, -1, LOCAL(5), var_funky__line_no_of, LOCAL(4), LOCAL(6),
  // ->
  LET, 1, LOCAL(6), TAIL_CALL,
  POS(74, 9),
  POS(76, 64),
  POS(76, 57),
  POS(76, 50),
  POS(77, 32),
  POS(76, 11),
  POS(76, 11),
  POS(75, 9)
};

static TAB_NUM t_lambda_15[] = {
  1, // locals
  0, // parameters
  // tuple(min_indent "@nl;")
  var_tuple, 2, var_60_1_min_indent, string_2, 1, LOCAL(1),
  //  tuple(min_indent "@nl;")
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(78, 10),
  POS(78, 9)
};

static TAB_NUM t_func_to_list[] = {
  1, // locals
  1, // parameters
  var_80_11_node,
  // is_undefined
  var_is_undefined, 1, var_80_11_node, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_16, lambda_17, TAIL_CALL,
  POS(82, 10),
  POS(81, 3)
};

static TAB_NUM t_lambda_16[] = {
  0, // locals
  0, // parameters
  //  empty_list
  LET, 1, var_empty_list, TAIL_CALL,
  POS(83, 7)
};

static TAB_NUM t_lambda_17[] = {
  1, // locals
  0, // parameters
  // is_a_list
  var_is_a_list, 1, var_80_11_node, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_18, lambda_19, TAIL_CALL,
  POS(86, 14),
  POS(85, 7)
};

static TAB_NUM t_lambda_18[] = {
  0, // locals
  0, // parameters
  //  node
  LET, 1, var_80_11_node, TAIL_CALL,
  POS(87, 11)
};

static TAB_NUM t_lambda_19[] = {
  1, // locals
  0, // parameters
  // list(node)
  var_list, 1, var_80_11_node, 1, LOCAL(1),
  //  list(node)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(88, 12),
  POS(88, 11)
};

static TAB_NUM t_func_syntax_error[] = {
  6, // locals
  1, // parameters
  var_90_16_item,
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
  // append(funky::base_directory funky::current_filename)
  var_append, 2, var_funky__base_directory, var_funky__current_filename, 1, LOCAL(1),
  // tuple
  var_tuple, 3, LOCAL(1), var_current_group, LOCAL(5), 1, LOCAL(2),
  // error
  var_error, 3, var_funky__SYNTAX_ERROR, LOCAL(6), LOCAL(2), 1, LOCAL(3),
  // ->
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(91, 18),
  POS(91, 8),
  POS(91, 8),
  POS(91, 56),
  POS(91, 3),
  POS(95, 18),
  POS(95, 18),
  POS(94, 7),
  POS(92, 3),
  POS(104, 9),
  POS(103, 7),
  POS(100, 5),
  POS(99, 3)
};

static TAB_NUM t_lambda_20[] = {
  1, // locals
  0, // parameters
  // text == at
  var_std__equal, 2, var_text, var_at, 1, LOCAL(1),
  // text == at
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(95, 32),
  POS(95, 32)
};

static TAB_NUM t_lambda_21[] = {
  0, // locals
  0, // parameters
  //  expected
  LET, 1, var_expected, TAIL_CALL,
  POS(96, 11)
};

static TAB_NUM t_lambda_22[] = {
  0, // locals
  0, // parameters
  //  item
  LET, 1, var_90_16_item, TAIL_CALL,
  POS(97, 11)
};

static TAB_NUM t_func_parse_groups[] = {
  1, // locals
  1, // parameters
  var_108_16_parse_function,
  // is_defined:
  var_is_defined, 1, var_subgroups, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_subgroups_is_defined, lambda_30, TAIL_CALL,
  POS(110, 15),
  POS(109, 3)
};

static TAB_NUM t_lambda_subgroups_is_defined[] = {
  1, // locals
  0, // parameters
  // is_defined
  var_is_defined, 1, var_current_group, 1, LOCAL(1),
  // $indent
  var_if, 3, LOCAL(1), lambda_23, lambda_24, 1, var_111_1_indent,
  // split_into_groups(subgroups): (head)
  var_split_into_groups, 1, var_subgroups, 1, LOCAL(1),
  // map_reduce split_into_groups(subgroups): (head)
  var_map_reduce, 2, LOCAL(1), lambda_25, TAIL_CALL,
  POS(113, 25),
  POS(111, 7),
  POS(116, 18),
  POS(116, 7)
};

static TAB_NUM t_lambda_23[] = {
  1, // locals
  0, // parameters
  // funky::line_indent_of(current_group)
  var_funky__line_indent_of, 1, var_current_group, 1, LOCAL(1),
  //  funky::line_indent_of(current_group)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(114, 14),
  POS(114, 13)
};

static TAB_NUM t_lambda_24[] = {
  0, // locals
  0, // parameters
  //  0
  LET, 1, num_0, TAIL_CALL,
  POS(115, 13)
};

static TAB_NUM t_lambda_25[] = {
  2, // locals
  1, // parameters
  var_116_42_head,
  // !current_group head
  LET, 1, var_116_42_head, 1, var_current_group,
  // funky::line_indent_of(head) < indent:
  var_funky__line_indent_of, 1, var_116_42_head, 1, LOCAL(1),
  // funky::line_indent_of(head) < indent:
  var_std__less, 2, LOCAL(1), var_111_1_indent, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_26, lambda_27, TAIL_CALL,
  POS(117, 9),
  POS(119, 11),
  POS(119, 11),
  POS(118, 9)
};

static TAB_NUM t_lambda_26[] = {
  1, // locals
  0, // parameters
  // tuple(funky::current_filename current_group 1)
  var_tuple, 3, var_funky__current_filename, var_current_group, num_1, 1, LOCAL(1),
  // error
  var_error, 3, var_funky__SYNTAX_ERROR, str_Unexpected_outde, LOCAL(1), TAIL_CALL,
  POS(123, 15),
  POS(120, 13)
};

static TAB_NUM t_lambda_27[] = {
  1, // locals
  0, // parameters
  // !text funky::line_text_of(head)
  var_funky__line_text_of, 1, var_116_42_head, 1, var_text,
  // !subgroups subgroups_of(head)
  var_subgroups_of, 1, var_116_42_head, 1, var_subgroups,
  // $node parse_function()
  var_108_16_parse_function, 0, 1, var_127_1_node,
  // is_a_list
  var_is_a_list, 1, var_127_1_node, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_28, lambda_29, TAIL_CALL,
  POS(125, 13),
  POS(126, 13),
  POS(127, 13),
  POS(129, 20),
  POS(128, 13)
};

static TAB_NUM t_lambda_28[] = {
  0, // locals
  0, // parameters
  //  node
  LET, 1, var_127_1_node, TAIL_CALL,
  POS(130, 17)
};

static TAB_NUM t_lambda_29[] = {
  1, // locals
  0, // parameters
  // list(node)
  var_list, 1, var_127_1_node, 1, LOCAL(1),
  //  list(node)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(131, 18),
  POS(131, 17)
};

static TAB_NUM t_lambda_30[] = {
  0, // locals
  0, // parameters
  //  empty_list
  LET, 1, var_empty_list, TAIL_CALL,
  POS(132, 7)
};

static TAB_NUM t_func_parse_lines[] = {
  1, // locals
  1, // parameters
  var_134_15_parse_function,
  // is_defined:
  var_is_defined, 1, var_subgroups, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_2_subgroups_is_defined, lambda_34, TAIL_CALL,
  POS(136, 15),
  POS(135, 3)
};

static TAB_NUM t_lambda_2_subgroups_is_defined[] = {
  1, // locals
  0, // parameters
  // convert_to_text_lines(subgroups): (head)
  func_convert_to_text_lines, 1, var_subgroups, 1, LOCAL(1),
  // map_reduce convert_to_text_lines(subgroups): (head)
  var_map_reduce, 2, LOCAL(1), lambda_31, TAIL_CALL,
  POS(137, 18),
  POS(137, 7)
};

static TAB_NUM t_lambda_31[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 137_46_head
  // !current_group head
  LET, 1, LOCAL(2), 1, var_current_group,
  // !text funky::line_text_of(head)
  var_funky__line_text_of, 1, LOCAL(2), 1, var_text,
  // !subgroups subgroups_of(head)
  var_subgroups_of, 1, LOCAL(2), 1, var_subgroups,
  // $node parse_function()
  var_134_15_parse_function, 0, 1, var_141_1_node,
  // is_a_list
  var_is_a_list, 1, var_141_1_node, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_32, lambda_33, TAIL_CALL,
  POS(138, 9),
  POS(139, 9),
  POS(140, 9),
  POS(141, 9),
  POS(143, 16),
  POS(142, 9)
};

static TAB_NUM t_lambda_32[] = {
  0, // locals
  0, // parameters
  //  node
  LET, 1, var_141_1_node, TAIL_CALL,
  POS(144, 13)
};

static TAB_NUM t_lambda_33[] = {
  1, // locals
  0, // parameters
  // list(node)
  var_list, 1, var_141_1_node, 1, LOCAL(1),
  //  list(node)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(145, 14),
  POS(145, 13)
};

static TAB_NUM t_lambda_34[] = {
  0, // locals
  0, // parameters
  //  empty_list
  LET, 1, var_empty_list, TAIL_CALL,
  POS(146, 7)
};

static TAB_NUM t_func_funky__parse_top_level_statement_group[] = {
  1, // locals
  0, // parameters
  // parse_top_level_statement !text $top_level_statement
  func_parse_top_level_statement, 0, 2, var_text, LOCAL(1),
  // -> top_level_statement
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(152, 3),
  POS(153, 3)
};

static TAB_NUM t_func_funky__parse_parameters_or_statement_group[] = {
  1, // locals
  0, // parameters
  // parse_parameters_or_statement !text $parameters_or_statement
  func_parse_parameters_or_statement, 0, 2, var_text, LOCAL(1),
  // -> parameters_or_statement
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(156, 3),
  POS(157, 3)
};

static TAB_NUM t_func_funky__parse_line_start_arguments_group[] = {
  1, // locals
  0, // parameters
  // parse_line_start_arguments !text $line_start_arguments
  func_parse_line_start_arguments, 0, 2, var_text, LOCAL(1),
  // -> line_start_arguments
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(160, 3),
  POS(161, 3)
};

static TAB_NUM t_func_funky__parse_multiline_string_components_group[] = {
  1, // locals
  0, // parameters
  // parse_multiline_string_components !text $multiline_string_components
  func_parse_multiline_string_components, 0, 2, var_text, LOCAL(1),
  // -> multiline_string_components
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(164, 3),
  POS(165, 3)
};

static TAB_NUM t_func_funky__parse_parameter_group[] = {
  1, // locals
  0, // parameters
  // parse_parameter !text $parameter
  func_parse_parameter, 0, 2, var_text, LOCAL(1),
  // -> parameter
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(168, 3),
  POS(169, 3)
};

static TAB_NUM t_func_funky__parse_multiline_remark_group[] = {
  1, // locals
  0, // parameters
  // parse_multiline_remark !text $multiline_remark
  func_parse_multiline_remark, 0, 2, var_text, LOCAL(1),
  // -> multiline_remark
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(172, 3),
  POS(173, 3)
};

static TAB_NUM t_func_parse_top_level_statement[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 3, lambda_35, lambda_37, lambda_39, TAIL_CALL,
  POS(176, 3)
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
  POS(178, 7),
  POS(178, 7),
  POS(177, 7)
};

static TAB_NUM t_lambda_36[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_meta_instruction
  func_parse_meta_instruction, 0, TAIL_CALL,
  POS(180, 9),
  POS(181, 9)
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
  POS(183, 7),
  POS(183, 7),
  POS(182, 7)
};

static TAB_NUM t_lambda_38[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_multiline_remark_without_prefix
  func_parse_multiline_remark_without_prefix, 0, TAIL_CALL,
  POS(185, 9),
  POS(186, 9)
};

static TAB_NUM t_lambda_39[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_40, TAIL_CALL,
  POS(187, 7)
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
  POS(190, 9),
  POS(191, 9),
  POS(192, 9)
};

static TAB_NUM t_func_parse_name[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 2, lambda_41, lambda_46, TAIL_CALL,
  POS(195, 3)
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
  POS(197, 8),
  POS(197, 8),
  POS(197, 8),
  POS(197, 8),
  POS(197, 8),
  POS(196, 7)
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
  POS(197, 26),
  POS(197, 38),
  POS(197, 38),
  POS(197, 26)
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
  POS(197, 46),
  POS(197, 46),
  POS(197, 46),
  POS(197, 46),
  POS(197, 46)
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
  POS(197, 64),
  POS(197, 76),
  POS(197, 76),
  POS(197, 64)
};

static TAB_NUM t_lambda_45[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_more_name_characters
  func_parse_more_name_characters, 0, TAIL_CALL,
  POS(199, 9),
  POS(200, 9)
};

static TAB_NUM t_lambda_46[] = {
  0, // locals
  0, // parameters
  //  true:
  LET, 2, var_true, lambda_47, TAIL_CALL,
  POS(201, 7)
};

static TAB_NUM t_lambda_47[] = {
  0, // locals
  0, // parameters
  // syntax_error "name"
  func_syntax_error, 1, str_name, TAIL_CALL,
  POS(202, 7)
};

static TAB_NUM t_func_parse_more_name_characters[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 3, lambda_48, lambda_55, lambda_57, TAIL_CALL,
  POS(205, 3)
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
  POS(207, 8),
  POS(207, 8),
  POS(207, 8),
  POS(207, 8),
  POS(207, 8),
  POS(206, 7)
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
  POS(207, 26),
  POS(207, 38),
  POS(207, 38),
  POS(207, 26)
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
  POS(207, 46),
  POS(207, 46),
  POS(207, 46),
  POS(207, 46),
  POS(207, 46),
  POS(207, 45)
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
  POS(207, 64),
  POS(207, 76),
  POS(207, 76),
  POS(207, 64)
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
  POS(207, 84),
  POS(207, 84),
  POS(207, 84),
  POS(207, 84),
  POS(207, 84)
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
  POS(207, 102),
  POS(207, 114),
  POS(207, 114),
  POS(207, 102)
};

static TAB_NUM t_lambda_54[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_more_name_characters
  func_parse_more_name_characters, 0, TAIL_CALL,
  POS(209, 9),
  POS(210, 9)
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
  POS(212, 7),
  POS(212, 7),
  POS(211, 7)
};

static TAB_NUM t_lambda_56[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_more_name_words
  func_parse_more_name_words, 0, TAIL_CALL,
  POS(214, 9),
  POS(215, 9)
};

static TAB_NUM t_lambda_57[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_58, TAIL_CALL,
  POS(216, 7)
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
  POS(218, 27),
  POS(218, 42),
  POS(218, 27),
  POS(218, 15),
  POS(218, 9)
};

static TAB_NUM t_func_parse_more_name_words[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 2, lambda_59, lambda_66, TAIL_CALL,
  POS(221, 3)
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
  POS(223, 8),
  POS(223, 8),
  POS(223, 8),
  POS(223, 8),
  POS(223, 8),
  POS(222, 7)
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
  POS(223, 26),
  POS(223, 38),
  POS(223, 38),
  POS(223, 26)
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
  POS(223, 46),
  POS(223, 46),
  POS(223, 46),
  POS(223, 46),
  POS(223, 46),
  POS(223, 45)
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
  POS(223, 64),
  POS(223, 76),
  POS(223, 76),
  POS(223, 64)
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
  POS(223, 84),
  POS(223, 84),
  POS(223, 84),
  POS(223, 84),
  POS(223, 84)
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
  POS(223, 102),
  POS(223, 114),
  POS(223, 114),
  POS(223, 102)
};

static TAB_NUM t_lambda_65[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_more_name_characters
  func_parse_more_name_characters, 0, TAIL_CALL,
  POS(225, 9),
  POS(226, 9)
};

static TAB_NUM t_lambda_66[] = {
  0, // locals
  0, // parameters
  //  true:
  LET, 2, var_true, lambda_67, TAIL_CALL,
  POS(227, 7)
};

static TAB_NUM t_lambda_67[] = {
  0, // locals
  0, // parameters
  // syntax_error "more name words"
  func_syntax_error, 1, str_more_name_words, TAIL_CALL,
  POS(228, 7)
};

static TAB_NUM t_func_parse_identifier[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 2, lambda_68, lambda_73, TAIL_CALL,
  POS(231, 3)
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
  POS(233, 8),
  POS(233, 8),
  POS(233, 8),
  POS(233, 8),
  POS(233, 8),
  POS(232, 7)
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
  POS(233, 26),
  POS(233, 38),
  POS(233, 38),
  POS(233, 26)
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
  POS(233, 46),
  POS(233, 46),
  POS(233, 46),
  POS(233, 46),
  POS(233, 46)
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
  POS(233, 64),
  POS(233, 76),
  POS(233, 76),
  POS(233, 64)
};

static TAB_NUM t_lambda_72[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_more_identifier_characters
  func_parse_more_identifier_characters, 0, TAIL_CALL,
  POS(235, 9),
  POS(236, 9)
};

static TAB_NUM t_lambda_73[] = {
  0, // locals
  0, // parameters
  //  true:
  LET, 2, var_true, lambda_74, TAIL_CALL,
  POS(237, 7)
};

static TAB_NUM t_lambda_74[] = {
  0, // locals
  0, // parameters
  // syntax_error "identifier"
  func_syntax_error, 1, str_identifier, TAIL_CALL,
  POS(238, 7)
};

static TAB_NUM t_func_parse_more_identifier_characters[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 4, lambda_75, lambda_82, lambda_84, lambda_87, TAIL_CALL,
  POS(241, 3)
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
  POS(243, 8),
  POS(243, 8),
  POS(243, 8),
  POS(243, 8),
  POS(243, 8),
  POS(242, 7)
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
  POS(243, 26),
  POS(243, 38),
  POS(243, 38),
  POS(243, 26)
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
  POS(243, 46),
  POS(243, 46),
  POS(243, 46),
  POS(243, 46),
  POS(243, 46),
  POS(243, 45)
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
  POS(243, 64),
  POS(243, 76),
  POS(243, 76),
  POS(243, 64)
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
  POS(243, 84),
  POS(243, 84),
  POS(243, 84),
  POS(243, 84),
  POS(243, 84)
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
  POS(243, 102),
  POS(243, 114),
  POS(243, 114),
  POS(243, 102)
};

static TAB_NUM t_lambda_81[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_more_identifier_characters
  func_parse_more_identifier_characters, 0, TAIL_CALL,
  POS(245, 9),
  POS(246, 9)
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
  POS(248, 7),
  POS(248, 7),
  POS(247, 7)
};

static TAB_NUM t_lambda_83[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_more_identifier_words
  func_parse_more_identifier_words, 0, TAIL_CALL,
  POS(250, 9),
  POS(251, 9)
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
  POS(254, 9),
  POS(254, 9),
  POS(253, 9),
  POS(252, 7)
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
  POS(255, 9),
  POS(255, 9),
  POS(255, 9)
};

static TAB_NUM t_lambda_86[] = {
  0, // locals
  0, // parameters
  // range &text 3 -1
  var_range, 3, var_text, num_3, minus_num_1, 1, var_text,
  // parse_name
  func_parse_name, 0, TAIL_CALL,
  POS(257, 9),
  POS(258, 9)
};

static TAB_NUM t_lambda_87[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_88, TAIL_CALL,
  POS(259, 7)
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
  POS(261, 27),
  POS(261, 42),
  POS(261, 27),
  POS(261, 15),
  POS(261, 9)
};

static TAB_NUM t_func_parse_more_identifier_words[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 2, lambda_89, lambda_96, TAIL_CALL,
  POS(264, 3)
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
  POS(266, 8),
  POS(266, 8),
  POS(266, 8),
  POS(266, 8),
  POS(266, 8),
  POS(265, 7)
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
  POS(266, 26),
  POS(266, 38),
  POS(266, 38),
  POS(266, 26)
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
  POS(266, 46),
  POS(266, 46),
  POS(266, 46),
  POS(266, 46),
  POS(266, 46),
  POS(266, 45)
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
  POS(266, 64),
  POS(266, 76),
  POS(266, 76),
  POS(266, 64)
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
  POS(266, 84),
  POS(266, 84),
  POS(266, 84),
  POS(266, 84),
  POS(266, 84)
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
  POS(266, 102),
  POS(266, 114),
  POS(266, 114),
  POS(266, 102)
};

static TAB_NUM t_lambda_95[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_more_identifier_characters
  func_parse_more_identifier_characters, 0, TAIL_CALL,
  POS(268, 9),
  POS(269, 9)
};

static TAB_NUM t_lambda_96[] = {
  0, // locals
  0, // parameters
  //  true:
  LET, 2, var_true, lambda_97, TAIL_CALL,
  POS(270, 7)
};

static TAB_NUM t_lambda_97[] = {
  0, // locals
  0, // parameters
  // syntax_error "more identifier words"
  func_syntax_error, 1, str_more_identifier, TAIL_CALL,
  POS(271, 7)
};

static TAB_NUM t_func_parse_versioned_identifier[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 2, lambda_98, lambda_103, TAIL_CALL,
  POS(274, 3)
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
  POS(276, 8),
  POS(276, 8),
  POS(276, 8),
  POS(276, 8),
  POS(276, 8),
  POS(275, 7)
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
  POS(276, 26),
  POS(276, 38),
  POS(276, 38),
  POS(276, 26)
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
  POS(276, 46),
  POS(276, 46),
  POS(276, 46),
  POS(276, 46),
  POS(276, 46)
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
  POS(276, 64),
  POS(276, 76),
  POS(276, 76),
  POS(276, 64)
};

static TAB_NUM t_lambda_102[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_more_versioned_identifier_characters
  func_parse_more_versioned_identifier_characters, 0, TAIL_CALL,
  POS(278, 9),
  POS(279, 9)
};

static TAB_NUM t_lambda_103[] = {
  0, // locals
  0, // parameters
  //  true:
  LET, 2, var_true, lambda_104, TAIL_CALL,
  POS(280, 7)
};

static TAB_NUM t_lambda_104[] = {
  0, // locals
  0, // parameters
  // syntax_error "versioned identifier"
  func_syntax_error, 1, str_versioned_identi, TAIL_CALL,
  POS(281, 7)
};

static TAB_NUM t_func_parse_more_versioned_identifier_characters[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 5, lambda_105, lambda_112, lambda_114, lambda_117, lambda_119, TAIL_CALL,
  POS(284, 3)
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
  POS(286, 8),
  POS(286, 8),
  POS(286, 8),
  POS(286, 8),
  POS(286, 8),
  POS(285, 7)
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
  POS(286, 26),
  POS(286, 38),
  POS(286, 38),
  POS(286, 26)
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
  POS(286, 46),
  POS(286, 46),
  POS(286, 46),
  POS(286, 46),
  POS(286, 46),
  POS(286, 45)
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
  POS(286, 64),
  POS(286, 76),
  POS(286, 76),
  POS(286, 64)
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
  POS(286, 84),
  POS(286, 84),
  POS(286, 84),
  POS(286, 84),
  POS(286, 84)
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
  POS(286, 102),
  POS(286, 114),
  POS(286, 114),
  POS(286, 102)
};

static TAB_NUM t_lambda_111[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_more_versioned_identifier_characters
  func_parse_more_versioned_identifier_characters, 0, TAIL_CALL,
  POS(288, 9),
  POS(289, 9)
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
  POS(291, 7),
  POS(291, 7),
  POS(290, 7)
};

static TAB_NUM t_lambda_113[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_more_versioned_identifier_words
  func_parse_more_versioned_identifier_words, 0, TAIL_CALL,
  POS(293, 9),
  POS(294, 9)
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
  POS(297, 9),
  POS(297, 9),
  POS(296, 9),
  POS(295, 7)
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
  POS(298, 9),
  POS(298, 9),
  POS(298, 9)
};

static TAB_NUM t_lambda_116[] = {
  0, // locals
  0, // parameters
  // range &text 3 -1
  var_range, 3, var_text, num_3, minus_num_1, 1, var_text,
  // parse_name
  func_parse_name, 0, TAIL_CALL,
  POS(300, 9),
  POS(301, 9)
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
  POS(303, 7),
  POS(303, 7),
  POS(302, 7)
};

static TAB_NUM t_lambda_118[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_namespace_description
  func_parse_namespace_description, 0, TAIL_CALL,
  POS(305, 9),
  POS(306, 9)
};

static TAB_NUM t_lambda_119[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_120, TAIL_CALL,
  POS(307, 7)
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
  POS(309, 27),
  POS(309, 42),
  POS(309, 27),
  POS(309, 15),
  POS(309, 9)
};

static TAB_NUM t_func_parse_more_versioned_identifier_words[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 2, lambda_121, lambda_128, TAIL_CALL,
  POS(312, 3)
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
  POS(314, 8),
  POS(314, 8),
  POS(314, 8),
  POS(314, 8),
  POS(314, 8),
  POS(313, 7)
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
  POS(314, 26),
  POS(314, 38),
  POS(314, 38),
  POS(314, 26)
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
  POS(314, 46),
  POS(314, 46),
  POS(314, 46),
  POS(314, 46),
  POS(314, 46),
  POS(314, 45)
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
  POS(314, 64),
  POS(314, 76),
  POS(314, 76),
  POS(314, 64)
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
  POS(314, 84),
  POS(314, 84),
  POS(314, 84),
  POS(314, 84),
  POS(314, 84)
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
  POS(314, 102),
  POS(314, 114),
  POS(314, 114),
  POS(314, 102)
};

static TAB_NUM t_lambda_127[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_more_versioned_identifier_characters
  func_parse_more_versioned_identifier_characters, 0, TAIL_CALL,
  POS(316, 9),
  POS(317, 9)
};

static TAB_NUM t_lambda_128[] = {
  0, // locals
  0, // parameters
  //  true:
  LET, 2, var_true, lambda_129, TAIL_CALL,
  POS(318, 7)
};

static TAB_NUM t_lambda_129[] = {
  0, // locals
  0, // parameters
  // syntax_error "more versioned identifier words"
  func_syntax_error, 1, str_more_versioned_i, TAIL_CALL,
  POS(319, 7)
};

static TAB_NUM t_func_parse_namespace_description[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 3, lambda_130, lambda_133, lambda_144, TAIL_CALL,
  POS(322, 3)
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
  POS(324, 8),
  POS(324, 8),
  POS(324, 8),
  POS(324, 8),
  POS(323, 7)
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
  POS(324, 26),
  POS(324, 38),
  POS(324, 38),
  POS(324, 26)
};

static TAB_NUM t_lambda_132[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_more_major_digits_or_dot
  func_parse_more_major_digits_or_dot, 0, TAIL_CALL,
  POS(326, 9),
  POS(327, 9)
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
  POS(330, 9),
  POS(330, 9),
  POS(329, 9),
  POS(328, 7)
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
  POS(331, 9),
  POS(331, 9),
  POS(329, 9),
  POS(331, 9)
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
  POS(332, 9),
  POS(332, 9),
  POS(329, 9),
  POS(332, 9)
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
  POS(333, 9),
  POS(333, 9),
  POS(329, 9),
  POS(333, 9)
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
  POS(334, 9),
  POS(334, 9),
  POS(329, 9),
  POS(334, 9)
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
  POS(335, 9),
  POS(335, 9),
  POS(329, 9),
  POS(335, 9)
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
  POS(336, 9),
  POS(336, 9),
  POS(329, 9),
  POS(336, 9)
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
  POS(337, 9),
  POS(337, 9),
  POS(329, 9),
  POS(337, 9)
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
  POS(338, 9),
  POS(338, 9),
  POS(329, 9),
  POS(338, 9)
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
  POS(339, 9),
  POS(339, 9),
  POS(339, 9)
};

static TAB_NUM t_lambda_143[] = {
  0, // locals
  0, // parameters
  // range &text 11 -1
  var_range, 3, var_text, num_11, minus_num_1, 1, var_text,
  // parse_name
  func_parse_name, 0, TAIL_CALL,
  POS(341, 9),
  POS(342, 9)
};

static TAB_NUM t_lambda_144[] = {
  0, // locals
  0, // parameters
  //  true:
  LET, 2, var_true, lambda_145, TAIL_CALL,
  POS(343, 7)
};

static TAB_NUM t_lambda_145[] = {
  0, // locals
  0, // parameters
  // syntax_error "namespace description"
  func_syntax_error, 1, str_namespace_descri, TAIL_CALL,
  POS(344, 7)
};

static TAB_NUM t_func_parse_more_major_digits_or_dot[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 3, lambda_146, lambda_149, lambda_153, TAIL_CALL,
  POS(347, 3)
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
  POS(349, 8),
  POS(349, 8),
  POS(349, 8),
  POS(349, 8),
  POS(348, 7)
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
  POS(349, 26),
  POS(349, 38),
  POS(349, 38),
  POS(349, 26)
};

static TAB_NUM t_lambda_148[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_more_major_digits_or_dot
  func_parse_more_major_digits_or_dot, 0, TAIL_CALL,
  POS(351, 9),
  POS(352, 9)
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
  POS(355, 9),
  POS(355, 9),
  POS(354, 9),
  POS(353, 7)
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
  POS(356, 10),
  POS(356, 10),
  POS(356, 10),
  POS(356, 10),
  POS(356, 10)
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
  POS(356, 28),
  POS(356, 40),
  POS(356, 40),
  POS(356, 28)
};

static TAB_NUM t_lambda_152[] = {
  0, // locals
  0, // parameters
  // range &text 3 -1
  var_range, 3, var_text, num_3, minus_num_1, 1, var_text,
  // parse_more_minor_digits
  func_parse_more_minor_digits, 0, TAIL_CALL,
  POS(358, 9),
  POS(359, 9)
};

static TAB_NUM t_lambda_153[] = {
  0, // locals
  0, // parameters
  //  true:
  LET, 2, var_true, lambda_154, TAIL_CALL,
  POS(360, 7)
};

static TAB_NUM t_lambda_154[] = {
  0, // locals
  0, // parameters
  // syntax_error "more major digits or dot"
  func_syntax_error, 1, str_more_major_digit, TAIL_CALL,
  POS(361, 7)
};

static TAB_NUM t_func_parse_more_minor_digits[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 3, lambda_155, lambda_158, lambda_161, TAIL_CALL,
  POS(364, 3)
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
  POS(366, 8),
  POS(366, 8),
  POS(366, 8),
  POS(366, 8),
  POS(365, 7)
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
  POS(366, 26),
  POS(366, 38),
  POS(366, 38),
  POS(366, 26)
};

static TAB_NUM t_lambda_157[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_more_minor_digits
  func_parse_more_minor_digits, 0, TAIL_CALL,
  POS(368, 9),
  POS(369, 9)
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
  POS(372, 9),
  POS(372, 9),
  POS(371, 9),
  POS(370, 7)
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
  POS(373, 9),
  POS(373, 9),
  POS(373, 9)
};

static TAB_NUM t_lambda_160[] = {
  0, // locals
  0, // parameters
  // range &text 3 -1
  var_range, 3, var_text, num_3, minus_num_1, 1, var_text,
  // parse_name
  func_parse_name, 0, TAIL_CALL,
  POS(375, 9),
  POS(376, 9)
};

static TAB_NUM t_lambda_161[] = {
  0, // locals
  0, // parameters
  //  true:
  LET, 2, var_true, lambda_162, TAIL_CALL,
  POS(377, 7)
};

static TAB_NUM t_lambda_162[] = {
  0, // locals
  0, // parameters
  // syntax_error "more minor digits"
  func_syntax_error, 1, str_more_minor_digit, TAIL_CALL,
  POS(378, 7)
};

static TAB_NUM t_func_parse_optional_version[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 2, lambda_163, lambda_165, TAIL_CALL,
  POS(381, 3)
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
  POS(383, 7),
  POS(383, 7),
  POS(382, 7)
};

static TAB_NUM t_lambda_164[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_version
  func_parse_version, 0, TAIL_CALL,
  POS(385, 9),
  POS(386, 9)
};

static TAB_NUM t_lambda_165[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_166, TAIL_CALL,
  POS(387, 7)
};

static TAB_NUM t_lambda_166[] = {
  0, // locals
  0, // parameters
  //  text undefined
  LET, 2, var_text, var_undefined, TAIL_CALL,
  POS(389, 9)
};

static TAB_NUM t_func_parse_parameters_or_statement[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 4, lambda_167, lambda_169, lambda_171, lambda_173, TAIL_CALL,
  POS(392, 3)
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
  POS(394, 7),
  POS(394, 7),
  POS(393, 7)
};

static TAB_NUM t_lambda_168[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_open_parameters_without_prefix
  func_parse_open_parameters_without_prefix, 0, TAIL_CALL,
  POS(396, 9),
  POS(397, 9)
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
  POS(399, 7),
  POS(399, 7),
  POS(398, 7)
};

static TAB_NUM t_lambda_170[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_close_parameters_without_prefix
  func_parse_close_parameters_without_prefix, 0, TAIL_CALL,
  POS(401, 9),
  POS(402, 9)
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
  POS(404, 7),
  POS(404, 7),
  POS(403, 7)
};

static TAB_NUM t_lambda_172[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_multiline_remark_without_prefix
  func_parse_multiline_remark_without_prefix, 0, TAIL_CALL,
  POS(406, 9),
  POS(407, 9)
};

static TAB_NUM t_lambda_173[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_174, TAIL_CALL,
  POS(408, 7)
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
  POS(411, 9),
  POS(412, 9),
  POS(413, 9)
};

static TAB_NUM t_func_parse_statement[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_416_1_position,
  // parse_head !text $head
  func_parse_head, 0, 2, var_text, var_417_18_head,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_text_is_defined, lambda_179, TAIL_CALL,
  POS(416, 3),
  POS(417, 3),
  POS(419, 10),
  POS(418, 3)
};

static TAB_NUM t_lambda_text_is_defined[] = {
  1, // locals
  0, // parameters
  // parse_statement_arguments !text $statement_arguments
  func_parse_statement_arguments, 0, 2, var_text, var_420_33_statement_arguments,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_175, lambda_178, TAIL_CALL,
  POS(420, 7),
  POS(422, 14),
  POS(421, 7)
};

static TAB_NUM t_lambda_175[] = {
  1, // locals
  0, // parameters
  // is_defined
  var_is_defined, 1, var_420_33_statement_arguments, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_176, lambda_177, TAIL_CALL,
  POS(425, 33),
  POS(424, 11)
};

static TAB_NUM t_lambda_176[] = {
  1, // locals
  0, // parameters
  // funky_types::statement
  LET, -4, var_funky_types__statement, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_416_1_position, var_funky__head_of, var_417_18_head, var_funky__arguments_of, var_420_33_statement_arguments, LOCAL(1),
  // 
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(428, 15),
  POS(426, 15)
};

static TAB_NUM t_lambda_177[] = {
  0, // locals
  0, // parameters
  //  text head
  LET, 2, var_text, var_417_18_head, TAIL_CALL,
  POS(433, 15)
};

static TAB_NUM t_lambda_178[] = {
  0, // locals
  0, // parameters
  //  undefined statement_arguments
  LET, 2, var_undefined, var_420_33_statement_arguments, TAIL_CALL,
  POS(434, 11)
};

static TAB_NUM t_lambda_179[] = {
  0, // locals
  0, // parameters
  //  undefined head
  LET, 2, var_undefined, var_417_18_head, TAIL_CALL,
  POS(435, 7)
};

static TAB_NUM t_func_parse_head[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 5, lambda_180, lambda_183, lambda_185, lambda_187, lambda_190, TAIL_CALL,
  POS(438, 3)
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
  POS(441, 9),
  POS(441, 9),
  POS(440, 9),
  POS(439, 7)
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
  POS(442, 9),
  POS(442, 9),
  POS(442, 9)
};

static TAB_NUM t_lambda_182[] = {
  0, // locals
  0, // parameters
  // range &text 3 -1
  var_range, 3, var_text, num_3, minus_num_1, 1, var_text,
  // parse_dummy_definition_without_prefix
  func_parse_dummy_definition_without_prefix, 0, TAIL_CALL,
  POS(444, 9),
  POS(445, 9)
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
  POS(447, 7),
  POS(447, 7),
  POS(446, 7)
};

static TAB_NUM t_lambda_184[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_definition_without_prefix
  func_parse_definition_without_prefix, 0, TAIL_CALL,
  POS(449, 9),
  POS(450, 9)
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
  POS(452, 7),
  POS(452, 7),
  POS(451, 7)
};

static TAB_NUM t_lambda_186[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_redefinition_without_prefix
  func_parse_redefinition_without_prefix, 0, TAIL_CALL,
  POS(454, 9),
  POS(455, 9)
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
  POS(458, 9),
  POS(458, 9),
  POS(457, 9),
  POS(456, 7)
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
  POS(459, 9),
  POS(459, 9),
  POS(459, 9)
};

static TAB_NUM t_lambda_189[] = {
  0, // locals
  0, // parameters
  // range &text 3 -1
  var_range, 3, var_text, num_3, minus_num_1, 1, var_text,
  // parse_return_without_prefix
  func_parse_return_without_prefix, 0, TAIL_CALL,
  POS(461, 9),
  POS(462, 9)
};

static TAB_NUM t_lambda_190[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_191, TAIL_CALL,
  POS(463, 7)
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
  POS(466, 9),
  POS(467, 9),
  POS(468, 9)
};

static TAB_NUM t_func_parse_statement_arguments[] = {
  2, // locals
  0, // parameters
  // cond $rest $expr
  var_cond, 7, lambda_192, lambda_195, lambda_199, lambda_204, lambda_207, lambda_209, lambda_211, 2, LOCAL(2), var_471_12_expr,
  // cond
  var_cond, 3, lambda_213, lambda_215, lambda_217, 1, LOCAL(1),
  // ->
  LET, 2, LOCAL(2), LOCAL(1), TAIL_CALL,
  POS(471, 3),
  POS(521, 5),
  POS(519, 3)
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
  POS(474, 9),
  POS(474, 9),
  POS(473, 9),
  POS(472, 7)
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
  POS(475, 9),
  POS(475, 9),
  POS(475, 9)
};

static TAB_NUM t_lambda_194[] = {
  0, // locals
  0, // parameters
  // range &text 3 -1
  var_range, 3, var_text, num_3, minus_num_1, 1, var_text,
  // parse_unique_without_prefix
  func_parse_unique_without_prefix, 0, TAIL_CALL,
  POS(477, 9),
  POS(478, 9)
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
  POS(481, 9),
  POS(481, 9),
  POS(480, 9),
  POS(479, 7)
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
  POS(482, 9),
  POS(482, 9),
  POS(480, 9),
  POS(482, 9)
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
  POS(483, 9),
  POS(483, 9),
  POS(483, 9)
};

static TAB_NUM t_lambda_198[] = {
  0, // locals
  0, // parameters
  // range &text 4 -1
  var_range, 3, var_text, num_4, minus_num_1, 1, var_text,
  // parse_attribute_without_prefix
  func_parse_attribute_without_prefix, 0, TAIL_CALL,
  POS(485, 9),
  POS(486, 9)
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
  POS(489, 9),
  POS(489, 9),
  POS(488, 9),
  POS(487, 7)
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
  POS(490, 9),
  POS(490, 9),
  POS(488, 9),
  POS(490, 9)
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
  POS(491, 9),
  POS(491, 9),
  POS(488, 9),
  POS(491, 9)
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
  POS(492, 9),
  POS(492, 9),
  POS(492, 9)
};

static TAB_NUM t_lambda_203[] = {
  0, // locals
  0, // parameters
  // range &text 5 -1
  var_range, 3, var_text, num_5, minus_num_1, 1, var_text,
  // parse_attribute_with_setter_without_prefix
  func_parse_attribute_with_setter_without_prefix, 0, TAIL_CALL,
  POS(494, 9),
  POS(495, 9)
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
  POS(498, 9),
  POS(498, 9),
  POS(497, 9),
  POS(496, 7)
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
  POS(499, 9),
  POS(499, 9),
  POS(499, 9)
};

static TAB_NUM t_lambda_206[] = {
  0, // locals
  0, // parameters
  // range &text 3 -1
  var_range, 3, var_text, num_3, minus_num_1, 1, var_text,
  // parse_type_function_without_prefix
  func_parse_type_function_without_prefix, 0, TAIL_CALL,
  POS(501, 9),
  POS(502, 9)
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
  POS(504, 7),
  POS(504, 7),
  POS(503, 7)
};

static TAB_NUM t_lambda_208[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_attribute_value_pair_without_prefix
  func_parse_attribute_value_pair_without_prefix, 0, TAIL_CALL,
  POS(506, 9),
  POS(507, 9)
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
  POS(509, 7),
  POS(509, 7),
  POS(508, 7)
};

static TAB_NUM t_lambda_210[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_method_value_pair_without_prefix
  func_parse_method_value_pair_without_prefix, 0, TAIL_CALL,
  POS(511, 9),
  POS(512, 9)
};

static TAB_NUM t_lambda_211[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_212, TAIL_CALL,
  POS(513, 7)
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
  POS(516, 9),
  POS(517, 9),
  POS(518, 9)
};

static TAB_NUM t_lambda_213[] = {
  1, // locals
  0, // parameters
  // is_undefined -> empty_list
  var_is_undefined, 1, var_471_12_expr, 1, LOCAL(1),
  //  expr.is_undefined -> empty_list
  LET, 2, LOCAL(1), lambda_214, TAIL_CALL,
  POS(522, 15),
  POS(522, 9)
};

static TAB_NUM t_lambda_214[] = {
  0, // locals
  0, // parameters
  //  empty_list
  LET, 1, var_empty_list, TAIL_CALL,
  POS(522, 30)
};

static TAB_NUM t_lambda_215[] = {
  1, // locals
  0, // parameters
  // is_a_list -> expr
  var_is_a_list, 1, var_471_12_expr, 1, LOCAL(1),
  //  expr.is_a_list -> expr
  LET, 2, LOCAL(1), lambda_216, TAIL_CALL,
  POS(523, 15),
  POS(523, 9)
};

static TAB_NUM t_lambda_216[] = {
  0, // locals
  0, // parameters
  //  expr
  LET, 1, var_471_12_expr, TAIL_CALL,
  POS(523, 27)
};

static TAB_NUM t_lambda_217[] = {
  0, // locals
  0, // parameters
  //  true -> list(expr)
  LET, 2, var_true, lambda_218, TAIL_CALL,
  POS(524, 9)
};

static TAB_NUM t_lambda_218[] = {
  1, // locals
  0, // parameters
  // list(expr)
  var_list, 1, var_471_12_expr, 1, LOCAL(1),
  //  list(expr)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(524, 18),
  POS(524, 17)
};

static TAB_NUM t_func_parse_inline_statement[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_527_1_position,
  // parse_inline_head !text $inline_head
  func_parse_inline_head, 0, 2, var_text, var_528_25_inline_head,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_2_text_is_defined, lambda_223, TAIL_CALL,
  POS(527, 3),
  POS(528, 3),
  POS(530, 10),
  POS(529, 3)
};

static TAB_NUM t_lambda_2_text_is_defined[] = {
  1, // locals
  0, // parameters
  // parse_some_inline_arguments !text $some_inline_arguments
  func_parse_some_inline_arguments, 0, 2, var_text, var_531_35_some_inline_arguments,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_219, lambda_222, TAIL_CALL,
  POS(531, 7),
  POS(533, 14),
  POS(532, 7)
};

static TAB_NUM t_lambda_219[] = {
  1, // locals
  0, // parameters
  // is_defined
  var_is_defined, 1, var_531_35_some_inline_arguments, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_220, lambda_221, TAIL_CALL,
  POS(536, 35),
  POS(535, 11)
};

static TAB_NUM t_lambda_220[] = {
  1, // locals
  0, // parameters
  // funky_types::inline_statement
  LET, -4, var_funky_types__inline_statement, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_527_1_position, var_funky__head_of, var_528_25_inline_head, var_funky__arguments_of, var_531_35_some_inline_arguments, LOCAL(1),
  // 
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(539, 15),
  POS(537, 15)
};

static TAB_NUM t_lambda_221[] = {
  0, // locals
  0, // parameters
  //  text inline_head
  LET, 2, var_text, var_528_25_inline_head, TAIL_CALL,
  POS(544, 15)
};

static TAB_NUM t_lambda_222[] = {
  0, // locals
  0, // parameters
  //  undefined some_inline_arguments
  LET, 2, var_undefined, var_531_35_some_inline_arguments, TAIL_CALL,
  POS(545, 11)
};

static TAB_NUM t_lambda_223[] = {
  0, // locals
  0, // parameters
  //  undefined inline_head
  LET, 2, var_undefined, var_528_25_inline_head, TAIL_CALL,
  POS(546, 7)
};

static TAB_NUM t_func_parse_inline_head[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 2, lambda_224, lambda_227, TAIL_CALL,
  POS(549, 3)
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
  POS(552, 9),
  POS(552, 9),
  POS(551, 9),
  POS(550, 7)
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
  POS(553, 9),
  POS(553, 9),
  POS(553, 9)
};

static TAB_NUM t_lambda_226[] = {
  0, // locals
  0, // parameters
  // range &text 3 -1
  var_range, 3, var_text, num_3, minus_num_1, 1, var_text,
  // parse_return_without_prefix
  func_parse_return_without_prefix, 0, TAIL_CALL,
  POS(555, 9),
  POS(556, 9)
};

static TAB_NUM t_lambda_227[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_228, TAIL_CALL,
  POS(557, 7)
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
  POS(560, 9),
  POS(561, 9),
  POS(562, 9)
};

static TAB_NUM t_func_parse_some_inline_arguments[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 3, lambda_229, lambda_231, lambda_233, TAIL_CALL,
  POS(565, 3)
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
  POS(567, 7),
  POS(567, 7),
  POS(566, 7)
};

static TAB_NUM t_lambda_230[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_inline_body_without_prefix
  func_parse_inline_body_without_prefix, 0, TAIL_CALL,
  POS(569, 9),
  POS(570, 9)
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
  POS(572, 7),
  POS(572, 7),
  POS(571, 7)
};

static TAB_NUM t_lambda_232[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_spaced_inline_arguments_without_prefix
  func_parse_spaced_inline_arguments_without_prefix, 0, TAIL_CALL,
  POS(574, 9),
  POS(575, 9)
};

static TAB_NUM t_lambda_233[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_234, TAIL_CALL,
  POS(576, 7)
};

static TAB_NUM t_lambda_234[] = {
  0, // locals
  0, // parameters
  //  text undefined
  LET, 2, var_text, var_undefined, TAIL_CALL,
  POS(578, 9)
};

static TAB_NUM t_func_parse_attribute_value_pair_without_prefix[] = {
  0, // locals
  0, // parameters
  // parse_pair funky_types::attribute_value_pair
  func_parse_pair, 1, var_funky_types__attribute_value_pair, TAIL_CALL,
  POS(581, 3)
};

static TAB_NUM t_func_parse_type_function_without_prefix[] = {
  0, // locals
  0, // parameters
  // parse_body funky_types::type_function
  func_parse_body, 1, var_funky_types__type_function, TAIL_CALL,
  POS(584, 3)
};

static TAB_NUM t_func_parse_method_value_pair_without_prefix[] = {
  0, // locals
  0, // parameters
  // parse_pair funky_types::method_value_pair
  func_parse_pair, 1, var_funky_types__method_value_pair, TAIL_CALL,
  POS(587, 3)
};

static TAB_NUM t_func_parse_pair[] = {
  1, // locals
  -1, // parameters
  var_undefined, var_591_0_derived_node,
  // $position text
  LET, 1, var_text, 1, var_593_1_position,
  // !str text
  LET, 1, var_text, 1, var_str,
  // parse_identifier !text $identifier
  func_parse_identifier, 0, 2, var_text, var_595_24_identifier,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_3_text_is_defined, lambda_237, TAIL_CALL,
  POS(593, 3),
  POS(594, 3),
  POS(595, 3),
  POS(597, 10),
  POS(596, 3)
};

static TAB_NUM t_lambda_3_text_is_defined[] = {
  1, // locals
  0, // parameters
  // parse_some_argument !text $some_argument
  func_parse_some_argument, 0, 2, var_text, var_598_27_some_argument,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_235, lambda_236, TAIL_CALL,
  POS(598, 7),
  POS(600, 14),
  POS(599, 7)
};

static TAB_NUM t_lambda_235[] = {
  2, // locals
  0, // parameters
  // default_value(derived_node funky_types::pair)
  var_default_value, 2, var_591_0_derived_node, var_funky_types__pair, 1, LOCAL(1),
  // default_value(derived_node funky_types::pair)
  LET, -4, LOCAL(1), var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_593_1_position, var_funky__identifier_of, var_595_24_identifier, var_funky__argument_of, var_598_27_some_argument, LOCAL(2),
  // 
  LET, 2, var_text, LOCAL(2), TAIL_CALL,
  POS(603, 11),
  POS(603, 11),
  POS(601, 11)
};

static TAB_NUM t_lambda_236[] = {
  0, // locals
  0, // parameters
  //  undefined some_argument
  LET, 2, var_undefined, var_598_27_some_argument, TAIL_CALL,
  POS(608, 11)
};

static TAB_NUM t_lambda_237[] = {
  0, // locals
  0, // parameters
  //  undefined identifier
  LET, 2, var_undefined, var_595_24_identifier, TAIL_CALL,
  POS(609, 7)
};

static TAB_NUM t_func_parse_meta_instruction[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 6, lambda_238, lambda_249, lambda_258, lambda_265, lambda_272, lambda_281, TAIL_CALL,
  POS(612, 3)
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
  POS(615, 9),
  POS(615, 9),
  POS(614, 9),
  POS(613, 7)
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
  POS(616, 9),
  POS(616, 9),
  POS(614, 9),
  POS(616, 9)
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
  POS(617, 9),
  POS(617, 9),
  POS(614, 9),
  POS(617, 9)
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
  POS(618, 9),
  POS(618, 9),
  POS(614, 9),
  POS(618, 9)
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
  POS(619, 9),
  POS(619, 9),
  POS(614, 9),
  POS(619, 9)
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
  POS(620, 9),
  POS(620, 9),
  POS(614, 9),
  POS(620, 9)
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
  POS(621, 9),
  POS(621, 9),
  POS(614, 9),
  POS(621, 9)
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
  POS(622, 9),
  POS(622, 9),
  POS(614, 9),
  POS(622, 9)
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
  POS(623, 9),
  POS(623, 9),
  POS(614, 9),
  POS(623, 9)
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
  POS(624, 9),
  POS(624, 9),
  POS(624, 9)
};

static TAB_NUM t_lambda_248[] = {
  0, // locals
  0, // parameters
  // range &text 11 -1
  var_range, 3, var_text, num_11, minus_num_1, 1, var_text,
  // parse_namespace_instruction_without_prefix
  func_parse_namespace_instruction_without_prefix, 0, TAIL_CALL,
  POS(626, 9),
  POS(627, 9)
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
  POS(630, 9),
  POS(630, 9),
  POS(629, 9),
  POS(628, 7)
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
  POS(631, 9),
  POS(631, 9),
  POS(629, 9),
  POS(631, 9)
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
  POS(632, 9),
  POS(632, 9),
  POS(629, 9),
  POS(632, 9)
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
  POS(633, 9),
  POS(633, 9),
  POS(629, 9),
  POS(633, 9)
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
  POS(634, 9),
  POS(634, 9),
  POS(629, 9),
  POS(634, 9)
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
  POS(635, 9),
  POS(635, 9),
  POS(629, 9),
  POS(635, 9)
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
  POS(636, 9),
  POS(636, 9),
  POS(629, 9),
  POS(636, 9)
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
  POS(637, 9),
  POS(637, 9),
  POS(637, 9)
};

static TAB_NUM t_lambda_257[] = {
  0, // locals
  0, // parameters
  // range &text 9 -1
  var_range, 3, var_text, num_9, minus_num_1, 1, var_text,
  // parse_require_instruction_without_prefix
  func_parse_require_instruction_without_prefix, 0, TAIL_CALL,
  POS(639, 9),
  POS(640, 9)
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
  POS(643, 9),
  POS(643, 9),
  POS(642, 9),
  POS(641, 7)
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
  POS(644, 9),
  POS(644, 9),
  POS(642, 9),
  POS(644, 9)
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
  POS(645, 9),
  POS(645, 9),
  POS(642, 9),
  POS(645, 9)
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
  POS(646, 9),
  POS(646, 9),
  POS(642, 9),
  POS(646, 9)
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
  POS(647, 9),
  POS(647, 9),
  POS(642, 9),
  POS(647, 9)
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
  POS(648, 9),
  POS(648, 9),
  POS(648, 9)
};

static TAB_NUM t_lambda_264[] = {
  0, // locals
  0, // parameters
  // range &text 7 -1
  var_range, 3, var_text, num_7, minus_num_1, 1, var_text,
  // parse_using_instruction_without_prefix
  func_parse_using_instruction_without_prefix, 0, TAIL_CALL,
  POS(650, 9),
  POS(651, 9)
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
  POS(654, 9),
  POS(654, 9),
  POS(653, 9),
  POS(652, 7)
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
  POS(655, 9),
  POS(655, 9),
  POS(653, 9),
  POS(655, 9)
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
  POS(656, 9),
  POS(656, 9),
  POS(653, 9),
  POS(656, 9)
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
  POS(657, 9),
  POS(657, 9),
  POS(653, 9),
  POS(657, 9)
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
  POS(658, 9),
  POS(658, 9),
  POS(653, 9),
  POS(658, 9)
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
  POS(659, 9),
  POS(659, 9),
  POS(659, 9)
};

static TAB_NUM t_lambda_271[] = {
  0, // locals
  0, // parameters
  // range &text 7 -1
  var_range, 3, var_text, num_7, minus_num_1, 1, var_text,
  // parse_alias_instruction_without_prefix
  func_parse_alias_instruction_without_prefix, 0, TAIL_CALL,
  POS(661, 9),
  POS(662, 9)
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
  POS(665, 9),
  POS(665, 9),
  POS(664, 9),
  POS(663, 7)
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
  POS(666, 9),
  POS(666, 9),
  POS(664, 9),
  POS(666, 9)
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
  POS(667, 9),
  POS(667, 9),
  POS(664, 9),
  POS(667, 9)
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
  POS(668, 9),
  POS(668, 9),
  POS(664, 9),
  POS(668, 9)
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
  POS(669, 9),
  POS(669, 9),
  POS(664, 9),
  POS(669, 9)
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
  POS(670, 9),
  POS(670, 9),
  POS(664, 9),
  POS(670, 9)
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
  POS(671, 9),
  POS(671, 9),
  POS(664, 9),
  POS(671, 9)
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
  POS(672, 9),
  POS(672, 9),
  POS(672, 9)
};

static TAB_NUM t_lambda_280[] = {
  0, // locals
  0, // parameters
  // range &text 9 -1
  var_range, 3, var_text, num_9, minus_num_1, 1, var_text,
  // parse_resolve_instruction_without_prefix
  func_parse_resolve_instruction_without_prefix, 0, TAIL_CALL,
  POS(674, 9),
  POS(675, 9)
};

static TAB_NUM t_lambda_281[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_282, TAIL_CALL,
  POS(676, 7)
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
  POS(679, 9),
  POS(680, 9),
  POS(681, 9)
};

static TAB_NUM t_func_parse_namespace_instruction_without_prefix[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_684_1_position,
  // !str text
  LET, 1, var_text, 1, var_str,
  // parse_name !text $name
  func_parse_name, 0, 2, var_text, var_686_18_name,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_4_text_is_defined, lambda_288, TAIL_CALL,
  POS(684, 3),
  POS(685, 3),
  POS(686, 3),
  POS(688, 10),
  POS(687, 3)
};

static TAB_NUM t_lambda_4_text_is_defined[] = {
  1, // locals
  0, // parameters
  // parse_optional_version !text $optional_version
  func_parse_optional_version, 0, 2, var_text, var_689_30_optional_version,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_5_text_is_defined, lambda_287, TAIL_CALL,
  POS(689, 7),
  POS(691, 14),
  POS(690, 7)
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
  POS(693, 13),
  POS(693, 13),
  POS(692, 11)
};

static TAB_NUM t_lambda_283[] = {
  1, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_trailing_remarks !text $trailing_remarks
  func_parse_trailing_remarks, 0, 2, var_text, var_695_30_trailing_remarks,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_284, lambda_285, TAIL_CALL,
  POS(694, 15),
  POS(695, 15),
  POS(697, 22),
  POS(696, 15)
};

static TAB_NUM t_lambda_284[] = {
  1, // locals
  0, // parameters
  // funky_types::namespace_instruction
  LET, -5, var_funky_types__namespace_instruction, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_684_1_position, var_funky__name_of, var_686_18_name, var_funky__version_of, var_689_30_optional_version, var_funky__remarks_of, var_695_30_trailing_remarks, LOCAL(1),
  // 
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(700, 19),
  POS(698, 19)
};

static TAB_NUM t_lambda_285[] = {
  0, // locals
  0, // parameters
  //  undefined trailing_remarks
  LET, 2, var_undefined, var_695_30_trailing_remarks, TAIL_CALL,
  POS(706, 19)
};

static TAB_NUM t_lambda_286[] = {
  0, // locals
  0, // parameters
  // syntax_error "'>'"
  func_syntax_error, 1, string_3, TAIL_CALL,
  POS(708, 15)
};

static TAB_NUM t_lambda_287[] = {
  0, // locals
  0, // parameters
  //  undefined optional_version
  LET, 2, var_undefined, var_689_30_optional_version, TAIL_CALL,
  POS(709, 11)
};

static TAB_NUM t_lambda_288[] = {
  0, // locals
  0, // parameters
  //  undefined name
  LET, 2, var_undefined, var_686_18_name, TAIL_CALL,
  POS(710, 7)
};

static TAB_NUM t_func_parse_require_instruction_without_prefix[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_713_1_position,
  // !str text
  LET, 1, var_text, 1, var_str,
  // parse_filename !text $filename
  func_parse_filename, 0, 2, var_text, var_715_22_filename,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_6_text_is_defined, lambda_293, TAIL_CALL,
  POS(713, 3),
  POS(714, 3),
  POS(715, 3),
  POS(717, 10),
  POS(716, 3)
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
  POS(719, 9),
  POS(719, 9),
  POS(718, 7)
};

static TAB_NUM t_lambda_289[] = {
  1, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_trailing_remarks !text $trailing_remarks
  func_parse_trailing_remarks, 0, 2, var_text, var_721_30_trailing_remarks,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_290, lambda_291, TAIL_CALL,
  POS(720, 11),
  POS(721, 11),
  POS(723, 18),
  POS(722, 11)
};

static TAB_NUM t_lambda_290[] = {
  1, // locals
  0, // parameters
  // funky_types::require_instruction
  LET, -4, var_funky_types__require_instruction, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_713_1_position, var_funky__filename_of, var_715_22_filename, var_funky__remarks_of, var_721_30_trailing_remarks, LOCAL(1),
  // 
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(726, 15),
  POS(724, 15)
};

static TAB_NUM t_lambda_291[] = {
  0, // locals
  0, // parameters
  //  undefined trailing_remarks
  LET, 2, var_undefined, var_721_30_trailing_remarks, TAIL_CALL,
  POS(731, 15)
};

static TAB_NUM t_lambda_292[] = {
  0, // locals
  0, // parameters
  // syntax_error "'>'"
  func_syntax_error, 1, string_3, TAIL_CALL,
  POS(733, 11)
};

static TAB_NUM t_lambda_293[] = {
  0, // locals
  0, // parameters
  //  undefined filename
  LET, 2, var_undefined, var_715_22_filename, TAIL_CALL,
  POS(734, 7)
};

static TAB_NUM t_func_parse_using_instruction_without_prefix[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_737_1_position,
  // !str text
  LET, 1, var_text, 1, var_str,
  // parse_name !text $name
  func_parse_name, 0, 2, var_text, var_739_18_name,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_7_text_is_defined, lambda_299, TAIL_CALL,
  POS(737, 3),
  POS(738, 3),
  POS(739, 3),
  POS(741, 10),
  POS(740, 3)
};

static TAB_NUM t_lambda_7_text_is_defined[] = {
  1, // locals
  0, // parameters
  // parse_optional_version !text $optional_version
  func_parse_optional_version, 0, 2, var_text, var_742_30_optional_version,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_8_text_is_defined, lambda_298, TAIL_CALL,
  POS(742, 7),
  POS(744, 14),
  POS(743, 7)
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
  POS(746, 13),
  POS(746, 13),
  POS(745, 11)
};

static TAB_NUM t_lambda_294[] = {
  1, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_trailing_remarks !text $trailing_remarks
  func_parse_trailing_remarks, 0, 2, var_text, var_748_30_trailing_remarks,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_295, lambda_296, TAIL_CALL,
  POS(747, 15),
  POS(748, 15),
  POS(750, 22),
  POS(749, 15)
};

static TAB_NUM t_lambda_295[] = {
  1, // locals
  0, // parameters
  // funky_types::using_instruction
  LET, -5, var_funky_types__using_instruction, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_737_1_position, var_funky__name_of, var_739_18_name, var_funky__version_of, var_742_30_optional_version, var_funky__remarks_of, var_748_30_trailing_remarks, LOCAL(1),
  // 
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(753, 19),
  POS(751, 19)
};

static TAB_NUM t_lambda_296[] = {
  0, // locals
  0, // parameters
  //  undefined trailing_remarks
  LET, 2, var_undefined, var_748_30_trailing_remarks, TAIL_CALL,
  POS(759, 19)
};

static TAB_NUM t_lambda_297[] = {
  0, // locals
  0, // parameters
  // syntax_error "'>'"
  func_syntax_error, 1, string_3, TAIL_CALL,
  POS(761, 15)
};

static TAB_NUM t_lambda_298[] = {
  0, // locals
  0, // parameters
  //  undefined optional_version
  LET, 2, var_undefined, var_742_30_optional_version, TAIL_CALL,
  POS(762, 11)
};

static TAB_NUM t_lambda_299[] = {
  0, // locals
  0, // parameters
  //  undefined name
  LET, 2, var_undefined, var_739_18_name, TAIL_CALL,
  POS(763, 7)
};

static TAB_NUM t_func_parse_alias_instruction_without_prefix[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_766_1_position,
  // parse_alias !text $alias
  func_parse_alias, 0, 2, var_text, var_767_19_alias,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_9_text_is_defined, lambda_306, TAIL_CALL,
  POS(766, 3),
  POS(767, 3),
  POS(769, 10),
  POS(768, 3)
};

static TAB_NUM t_lambda_9_text_is_defined[] = {
  1, // locals
  0, // parameters
  // parse_equal_sign !text $equal_sign
  func_parse_equal_sign, 0, 2, var_text, var_770_24_equal_sign,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_10_text_is_defined, lambda_305, TAIL_CALL,
  POS(770, 7),
  POS(772, 14),
  POS(771, 7)
};

static TAB_NUM t_lambda_10_text_is_defined[] = {
  1, // locals
  0, // parameters
  // !str text
  LET, 1, var_text, 1, var_str,
  // parse_name !text $name
  func_parse_name, 0, 2, var_text, var_774_18_name,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_11_text_is_defined, lambda_304, TAIL_CALL,
  POS(773, 11),
  POS(774, 11),
  POS(776, 18),
  POS(775, 11)
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
  POS(778, 17),
  POS(778, 17),
  POS(777, 15)
};

static TAB_NUM t_lambda_300[] = {
  1, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_trailing_remarks !text $trailing_remarks
  func_parse_trailing_remarks, 0, 2, var_text, var_780_30_trailing_remarks,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_301, lambda_302, TAIL_CALL,
  POS(779, 19),
  POS(780, 19),
  POS(782, 26),
  POS(781, 19)
};

static TAB_NUM t_lambda_301[] = {
  1, // locals
  0, // parameters
  // funky_types::alias_instruction
  LET, -6, var_funky_types__alias_instruction, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_766_1_position, var_funky__alias_of, var_767_19_alias, var_funky__sign_of, var_770_24_equal_sign, var_funky__name_of, var_774_18_name, var_funky__remarks_of, var_780_30_trailing_remarks, LOCAL(1),
  // 
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(785, 23),
  POS(783, 23)
};

static TAB_NUM t_lambda_302[] = {
  0, // locals
  0, // parameters
  //  undefined trailing_remarks
  LET, 2, var_undefined, var_780_30_trailing_remarks, TAIL_CALL,
  POS(792, 23)
};

static TAB_NUM t_lambda_303[] = {
  0, // locals
  0, // parameters
  // syntax_error "'>'"
  func_syntax_error, 1, string_3, TAIL_CALL,
  POS(794, 19)
};

static TAB_NUM t_lambda_304[] = {
  0, // locals
  0, // parameters
  //  undefined name
  LET, 2, var_undefined, var_774_18_name, TAIL_CALL,
  POS(795, 15)
};

static TAB_NUM t_lambda_305[] = {
  0, // locals
  0, // parameters
  //  undefined equal_sign
  LET, 2, var_undefined, var_770_24_equal_sign, TAIL_CALL,
  POS(796, 11)
};

static TAB_NUM t_lambda_306[] = {
  0, // locals
  0, // parameters
  //  undefined alias
  LET, 2, var_undefined, var_767_19_alias, TAIL_CALL,
  POS(797, 7)
};

static TAB_NUM t_func_parse_resolve_instruction_without_prefix[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_800_1_position,
  // !str text
  LET, 1, var_text, 1, var_str,
  // parse_name !text $name
  func_parse_name, 0, 2, var_text, var_802_18_name,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_12_text_is_defined, lambda_314, TAIL_CALL,
  POS(800, 3),
  POS(801, 3),
  POS(802, 3),
  POS(804, 10),
  POS(803, 3)
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
  POS(806, 9),
  POS(806, 9),
  POS(805, 7)
};

static TAB_NUM t_lambda_307[] = {
  1, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_version !text $version
  func_parse_version, 0, 2, var_text, var_808_21_version,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_13_text_is_defined, lambda_312, TAIL_CALL,
  POS(807, 11),
  POS(808, 11),
  POS(810, 18),
  POS(809, 11)
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
  POS(812, 17),
  POS(812, 17),
  POS(811, 15)
};

static TAB_NUM t_lambda_308[] = {
  1, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_trailing_remarks !text $trailing_remarks
  func_parse_trailing_remarks, 0, 2, var_text, var_814_30_trailing_remarks,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_309, lambda_310, TAIL_CALL,
  POS(813, 19),
  POS(814, 19),
  POS(816, 26),
  POS(815, 19)
};

static TAB_NUM t_lambda_309[] = {
  1, // locals
  0, // parameters
  // funky_types::resolve_instruction
  LET, -5, var_funky_types__resolve_instruction, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_800_1_position, var_funky__name_of, var_802_18_name, var_funky__version_of, var_808_21_version, var_funky__remarks_of, var_814_30_trailing_remarks, LOCAL(1),
  // 
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(819, 23),
  POS(817, 23)
};

static TAB_NUM t_lambda_310[] = {
  0, // locals
  0, // parameters
  //  undefined trailing_remarks
  LET, 2, var_undefined, var_814_30_trailing_remarks, TAIL_CALL,
  POS(825, 23)
};

static TAB_NUM t_lambda_311[] = {
  0, // locals
  0, // parameters
  // syntax_error "'>'"
  func_syntax_error, 1, string_3, TAIL_CALL,
  POS(827, 19)
};

static TAB_NUM t_lambda_312[] = {
  0, // locals
  0, // parameters
  //  undefined version
  LET, 2, var_undefined, var_808_21_version, TAIL_CALL,
  POS(828, 15)
};

static TAB_NUM t_lambda_313[] = {
  0, // locals
  0, // parameters
  // syntax_error "'-'"
  func_syntax_error, 1, string_4, TAIL_CALL,
  POS(830, 11)
};

static TAB_NUM t_lambda_314[] = {
  0, // locals
  0, // parameters
  //  undefined name
  LET, 2, var_undefined, var_802_18_name, TAIL_CALL,
  POS(831, 7)
};

static TAB_NUM t_func_parse_allow_instruction[] = {
  2, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_834_1_position,
  // text(1) == 'a':
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == 'a':
  var_std__equal, 2, LOCAL(1), chr_97, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_315, lambda_331, TAIL_CALL,
  POS(834, 3),
  POS(836, 5),
  POS(836, 5),
  POS(835, 3)
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
  POS(838, 9),
  POS(838, 9),
  POS(837, 7)
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
  POS(840, 13),
  POS(840, 13),
  POS(839, 11)
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
  POS(842, 17),
  POS(842, 17),
  POS(841, 15)
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
  POS(844, 21),
  POS(844, 21),
  POS(843, 19)
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
  POS(846, 25),
  POS(846, 25),
  POS(845, 23)
};

static TAB_NUM t_lambda_320[] = {
  1, // locals
  0, // parameters
  // range &text 7 -1
  var_range, 3, var_text, num_7, minus_num_1, 1, var_text,
  // parse_pragma !text $pragma
  func_parse_pragma, 0, 2, var_text, var_848_20_pragma,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_14_text_is_defined, lambda_325, TAIL_CALL,
  POS(847, 27),
  POS(848, 27),
  POS(850, 34),
  POS(849, 27)
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
  POS(852, 33),
  POS(852, 33),
  POS(851, 31)
};

static TAB_NUM t_lambda_321[] = {
  1, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_trailing_remarks !text $trailing_remarks
  func_parse_trailing_remarks, 0, 2, var_text, var_854_30_trailing_remarks,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_322, lambda_323, TAIL_CALL,
  POS(853, 35),
  POS(854, 35),
  POS(856, 42),
  POS(855, 35)
};

static TAB_NUM t_lambda_322[] = {
  1, // locals
  0, // parameters
  // funky_types::allow_instruction
  LET, -4, var_funky_types__allow_instruction, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_834_1_position, var_funky__pragma_of, var_848_20_pragma, var_funky__remarks_of, var_854_30_trailing_remarks, LOCAL(1),
  // 
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(859, 39),
  POS(857, 39)
};

static TAB_NUM t_lambda_323[] = {
  0, // locals
  0, // parameters
  //  undefined trailing_remarks
  LET, 2, var_undefined, var_854_30_trailing_remarks, TAIL_CALL,
  POS(864, 39)
};

static TAB_NUM t_lambda_324[] = {
  0, // locals
  0, // parameters
  // syntax_error "'>'"
  func_syntax_error, 1, string_3, TAIL_CALL,
  POS(866, 35)
};

static TAB_NUM t_lambda_325[] = {
  0, // locals
  0, // parameters
  //  undefined pragma
  LET, 2, var_undefined, var_848_20_pragma, TAIL_CALL,
  POS(867, 31)
};

static TAB_NUM t_lambda_326[] = {
  0, // locals
  0, // parameters
  // syntax_error "space character"
  func_syntax_error, 1, str_space_character, TAIL_CALL,
  POS(869, 27)
};

static TAB_NUM t_lambda_327[] = {
  0, // locals
  0, // parameters
  // syntax_error "'w'"
  func_syntax_error, 1, str_w, TAIL_CALL,
  POS(871, 23)
};

static TAB_NUM t_lambda_328[] = {
  0, // locals
  0, // parameters
  // syntax_error "'o'"
  func_syntax_error, 1, str_o, TAIL_CALL,
  POS(873, 19)
};

static TAB_NUM t_lambda_329[] = {
  0, // locals
  0, // parameters
  // syntax_error "'l'"
  func_syntax_error, 1, str_l, TAIL_CALL,
  POS(875, 15)
};

static TAB_NUM t_lambda_330[] = {
  0, // locals
  0, // parameters
  // syntax_error "'l'"
  func_syntax_error, 1, str_l, TAIL_CALL,
  POS(877, 11)
};

static TAB_NUM t_lambda_331[] = {
  0, // locals
  0, // parameters
  // syntax_error "'a'"
  func_syntax_error, 1, str_a, TAIL_CALL,
  POS(879, 7)
};

static TAB_NUM t_func_parse_filename[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 4, lambda_332, lambda_337, lambda_341, lambda_344, TAIL_CALL,
  POS(882, 3)
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
  POS(884, 8),
  POS(884, 8),
  POS(884, 8),
  POS(884, 8),
  POS(884, 8),
  POS(883, 7)
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
  POS(884, 26),
  POS(884, 38),
  POS(884, 38),
  POS(884, 26)
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
  POS(884, 46),
  POS(884, 46),
  POS(884, 46),
  POS(884, 46),
  POS(884, 46)
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
  POS(884, 64),
  POS(884, 76),
  POS(884, 76),
  POS(884, 64)
};

static TAB_NUM t_lambda_336[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_more_filename_characters
  func_parse_more_filename_characters, 0, TAIL_CALL,
  POS(886, 9),
  POS(887, 9)
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
  POS(890, 9),
  POS(890, 9),
  POS(889, 9),
  POS(888, 7)
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
  POS(891, 9),
  POS(891, 9),
  POS(889, 9),
  POS(891, 9)
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
  POS(892, 9),
  POS(892, 9),
  POS(892, 9)
};

static TAB_NUM t_lambda_340[] = {
  0, // locals
  0, // parameters
  // range &text 4 -1
  var_range, 3, var_text, num_4, minus_num_1, 1, var_text,
  // parse_filename
  func_parse_filename, 0, TAIL_CALL,
  POS(894, 9),
  POS(895, 9)
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
  POS(898, 9),
  POS(898, 9),
  POS(897, 9),
  POS(896, 7)
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
  POS(899, 9),
  POS(899, 9),
  POS(899, 9)
};

static TAB_NUM t_lambda_343[] = {
  0, // locals
  0, // parameters
  // range &text 3 -1
  var_range, 3, var_text, num_3, minus_num_1, 1, var_text,
  // parse_filename_characters
  func_parse_filename_characters, 0, TAIL_CALL,
  POS(901, 9),
  POS(902, 9)
};

static TAB_NUM t_lambda_344[] = {
  0, // locals
  0, // parameters
  //  true:
  LET, 2, var_true, lambda_345, TAIL_CALL,
  POS(903, 7)
};

static TAB_NUM t_lambda_345[] = {
  0, // locals
  0, // parameters
  // syntax_error "filename"
  func_syntax_error, 1, str_filename, TAIL_CALL,
  POS(904, 7)
};

static TAB_NUM t_func_parse_filename_characters[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 2, lambda_346, lambda_351, TAIL_CALL,
  POS(907, 3)
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
  POS(909, 8),
  POS(909, 8),
  POS(909, 8),
  POS(909, 8),
  POS(909, 8),
  POS(908, 7)
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
  POS(909, 26),
  POS(909, 38),
  POS(909, 38),
  POS(909, 26)
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
  POS(909, 46),
  POS(909, 46),
  POS(909, 46),
  POS(909, 46),
  POS(909, 46)
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
  POS(909, 64),
  POS(909, 76),
  POS(909, 76),
  POS(909, 64)
};

static TAB_NUM t_lambda_350[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_more_filename_characters
  func_parse_more_filename_characters, 0, TAIL_CALL,
  POS(911, 9),
  POS(912, 9)
};

static TAB_NUM t_lambda_351[] = {
  0, // locals
  0, // parameters
  //  true:
  LET, 2, var_true, lambda_352, TAIL_CALL,
  POS(913, 7)
};

static TAB_NUM t_lambda_352[] = {
  0, // locals
  0, // parameters
  // syntax_error "filename characters"
  func_syntax_error, 1, str_filename_charact, TAIL_CALL,
  POS(914, 7)
};

static TAB_NUM t_func_parse_more_filename_characters[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 4, lambda_353, lambda_360, lambda_362, lambda_364, TAIL_CALL,
  POS(917, 3)
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
  POS(919, 8),
  POS(919, 8),
  POS(919, 8),
  POS(919, 8),
  POS(919, 8),
  POS(918, 7)
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
  POS(919, 26),
  POS(919, 38),
  POS(919, 38),
  POS(919, 26)
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
  POS(919, 46),
  POS(919, 46),
  POS(919, 46),
  POS(919, 46),
  POS(919, 46),
  POS(919, 45)
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
  POS(919, 64),
  POS(919, 76),
  POS(919, 76),
  POS(919, 64)
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
  POS(919, 84),
  POS(919, 84),
  POS(919, 84),
  POS(919, 84),
  POS(919, 84)
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
  POS(919, 102),
  POS(919, 114),
  POS(919, 114),
  POS(919, 102)
};

static TAB_NUM t_lambda_359[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_more_filename_characters
  func_parse_more_filename_characters, 0, TAIL_CALL,
  POS(921, 9),
  POS(922, 9)
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
  POS(924, 7),
  POS(924, 7),
  POS(923, 7)
};

static TAB_NUM t_lambda_361[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_more_filename_words
  func_parse_more_filename_words, 0, TAIL_CALL,
  POS(926, 9),
  POS(927, 9)
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
  POS(929, 7),
  POS(929, 7),
  POS(928, 7)
};

static TAB_NUM t_lambda_363[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_filename_characters
  func_parse_filename_characters, 0, TAIL_CALL,
  POS(931, 9),
  POS(932, 9)
};

static TAB_NUM t_lambda_364[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_365, TAIL_CALL,
  POS(933, 7)
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
  POS(935, 27),
  POS(935, 42),
  POS(935, 27),
  POS(935, 15),
  POS(935, 9)
};

static TAB_NUM t_func_parse_more_filename_words[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 2, lambda_366, lambda_373, TAIL_CALL,
  POS(938, 3)
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
  POS(940, 8),
  POS(940, 8),
  POS(940, 8),
  POS(940, 8),
  POS(940, 8),
  POS(939, 7)
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
  POS(940, 26),
  POS(940, 38),
  POS(940, 38),
  POS(940, 26)
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
  POS(940, 46),
  POS(940, 46),
  POS(940, 46),
  POS(940, 46),
  POS(940, 46),
  POS(940, 45)
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
  POS(940, 64),
  POS(940, 76),
  POS(940, 76),
  POS(940, 64)
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
  POS(940, 84),
  POS(940, 84),
  POS(940, 84),
  POS(940, 84),
  POS(940, 84)
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
  POS(940, 102),
  POS(940, 114),
  POS(940, 114),
  POS(940, 102)
};

static TAB_NUM t_lambda_372[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_more_filename_characters
  func_parse_more_filename_characters, 0, TAIL_CALL,
  POS(942, 9),
  POS(943, 9)
};

static TAB_NUM t_lambda_373[] = {
  0, // locals
  0, // parameters
  //  true:
  LET, 2, var_true, lambda_374, TAIL_CALL,
  POS(944, 7)
};

static TAB_NUM t_lambda_374[] = {
  0, // locals
  0, // parameters
  // syntax_error "more filename words"
  func_syntax_error, 1, str_more_filename_wo, TAIL_CALL,
  POS(945, 7)
};

static TAB_NUM t_func_parse_alias[] = {
  1, // locals
  0, // parameters
  // !str text
  LET, 1, var_text, 1, var_str,
  // parse_name !text $name
  func_parse_name, 0, 2, var_text, var_949_18_name,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_375, lambda_376, TAIL_CALL,
  POS(948, 3),
  POS(949, 3),
  POS(951, 10),
  POS(950, 3)
};

static TAB_NUM t_lambda_375[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_text, var_949_18_name, TAIL_CALL,
  POS(952, 7)
};

static TAB_NUM t_lambda_376[] = {
  0, // locals
  0, // parameters
  //  undefined name
  LET, 2, var_undefined, var_949_18_name, TAIL_CALL,
  POS(955, 7)
};

static TAB_NUM t_func_parse_equal_sign[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 3, lambda_377, lambda_381, lambda_383, TAIL_CALL,
  POS(958, 3)
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
  POS(961, 9),
  POS(961, 9),
  POS(960, 9),
  POS(959, 7)
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
  POS(962, 9),
  POS(962, 9),
  POS(960, 9),
  POS(962, 9)
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
  POS(963, 9),
  POS(963, 9),
  POS(963, 9)
};

static TAB_NUM t_lambda_380[] = {
  1, // locals
  0, // parameters
  // range(text 4 -1) undefined
  var_range, 3, var_text, num_4, minus_num_1, 1, LOCAL(1),
  //  range(text 4 -1) undefined
  LET, 2, LOCAL(1), var_undefined, TAIL_CALL,
  POS(964, 10),
  POS(964, 9)
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
  POS(966, 7),
  POS(966, 7),
  POS(965, 7)
};

static TAB_NUM t_lambda_382[] = {
  1, // locals
  0, // parameters
  // range(text 2 -1) undefined
  var_range, 3, var_text, num_2, minus_num_1, 1, LOCAL(1),
  //  range(text 2 -1) undefined
  LET, 2, LOCAL(1), var_undefined, TAIL_CALL,
  POS(967, 10),
  POS(967, 9)
};

static TAB_NUM t_lambda_383[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_384, TAIL_CALL,
  POS(968, 7)
};

static TAB_NUM t_lambda_384[] = {
  0, // locals
  0, // parameters
  // syntax_error "equal sign"
  func_syntax_error, 1, str_equal_sign, TAIL_CALL,
  POS(971, 9)
};

static TAB_NUM t_func_parse_version[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 2, lambda_385, lambda_388, TAIL_CALL,
  POS(974, 3)
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
  POS(976, 8),
  POS(976, 8),
  POS(976, 8),
  POS(976, 8),
  POS(975, 7)
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
  POS(976, 26),
  POS(976, 38),
  POS(976, 38),
  POS(976, 26)
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
  POS(978, 9),
  POS(979, 9),
  POS(980, 9)
};

static TAB_NUM t_lambda_388[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_389, TAIL_CALL,
  POS(981, 7)
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
  POS(984, 9),
  POS(985, 9),
  POS(986, 9)
};

static TAB_NUM t_func_parse_version_no_without_prefix[] = {
  1, // locals
  0, // parameters
  // $position str
  LET, 1, var_str, 1, var_989_1_position,
  // parse_zero_or_more_digits !text $major
  func_parse_zero_or_more_digits, 0, 2, var_text, var_990_33_major,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_15_text_is_defined, lambda_394, TAIL_CALL,
  POS(989, 3),
  POS(990, 3),
  POS(992, 10),
  POS(991, 3)
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
  POS(994, 9),
  POS(994, 9),
  POS(993, 7)
};

static TAB_NUM t_lambda_390[] = {
  1, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // !str text
  LET, 1, var_text, 1, var_str,
  // parse_minor !text $minor
  func_parse_minor, 0, 2, var_text, var_997_19_minor,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_391, lambda_392, TAIL_CALL,
  POS(995, 11),
  POS(996, 11),
  POS(997, 11),
  POS(999, 18),
  POS(998, 11)
};

static TAB_NUM t_lambda_391[] = {
  1, // locals
  0, // parameters
  // funky_types::version_no
  LET, -4, var_funky_types__version_no, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_989_1_position, var_funky__major_of, var_990_33_major, var_funky__minor_of, var_997_19_minor, LOCAL(1),
  // 
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(1002, 15),
  POS(1000, 15)
};

static TAB_NUM t_lambda_392[] = {
  0, // locals
  0, // parameters
  //  undefined minor
  LET, 2, var_undefined, var_997_19_minor, TAIL_CALL,
  POS(1007, 15)
};

static TAB_NUM t_lambda_393[] = {
  0, // locals
  0, // parameters
  // syntax_error "'.'"
  func_syntax_error, 1, string_5, TAIL_CALL,
  POS(1009, 11)
};

static TAB_NUM t_lambda_394[] = {
  0, // locals
  0, // parameters
  //  undefined major
  LET, 2, var_undefined, var_990_33_major, TAIL_CALL,
  POS(1010, 7)
};

static TAB_NUM t_func_parse_minor[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 2, lambda_395, lambda_398, TAIL_CALL,
  POS(1013, 3)
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
  POS(1015, 8),
  POS(1015, 8),
  POS(1015, 8),
  POS(1015, 8),
  POS(1014, 7)
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
  POS(1015, 26),
  POS(1015, 38),
  POS(1015, 38),
  POS(1015, 26)
};

static TAB_NUM t_lambda_397[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_zero_or_more_digits
  func_parse_zero_or_more_digits, 0, TAIL_CALL,
  POS(1017, 9),
  POS(1018, 9)
};

static TAB_NUM t_lambda_398[] = {
  0, // locals
  0, // parameters
  //  true:
  LET, 2, var_true, lambda_399, TAIL_CALL,
  POS(1019, 7)
};

static TAB_NUM t_lambda_399[] = {
  0, // locals
  0, // parameters
  // syntax_error "minor"
  func_syntax_error, 1, str_minor, TAIL_CALL,
  POS(1020, 7)
};

static TAB_NUM t_func_parse_zero_or_more_digits[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 2, lambda_400, lambda_403, TAIL_CALL,
  POS(1023, 3)
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
  POS(1025, 8),
  POS(1025, 8),
  POS(1025, 8),
  POS(1025, 8),
  POS(1024, 7)
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
  POS(1025, 26),
  POS(1025, 38),
  POS(1025, 38),
  POS(1025, 26)
};

static TAB_NUM t_lambda_402[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_zero_or_more_digits
  func_parse_zero_or_more_digits, 0, TAIL_CALL,
  POS(1027, 9),
  POS(1028, 9)
};

static TAB_NUM t_lambda_403[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_404, TAIL_CALL,
  POS(1029, 7)
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
  POS(1031, 27),
  POS(1031, 42),
  POS(1031, 27),
  POS(1031, 15),
  POS(1031, 9)
};

static TAB_NUM t_func_parse_unstable[] = {
  2, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_1034_1_position,
  // text(1) == 'u':
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == 'u':
  var_std__equal, 2, LOCAL(1), chr_117, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_405, lambda_420, TAIL_CALL,
  POS(1034, 3),
  POS(1036, 5),
  POS(1036, 5),
  POS(1035, 3)
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
  POS(1038, 9),
  POS(1038, 9),
  POS(1037, 7)
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
  POS(1040, 13),
  POS(1040, 13),
  POS(1039, 11)
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
  POS(1042, 17),
  POS(1042, 17),
  POS(1041, 15)
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
  POS(1044, 21),
  POS(1044, 21),
  POS(1043, 19)
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
  POS(1046, 25),
  POS(1046, 25),
  POS(1045, 23)
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
  POS(1048, 29),
  POS(1048, 29),
  POS(1047, 27)
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
  POS(1050, 33),
  POS(1050, 33),
  POS(1049, 31)
};

static TAB_NUM t_lambda_412[] = {
  2, // locals
  0, // parameters
  // range(text 9 -1)
  var_range, 3, var_text, num_9, minus_num_1, 1, LOCAL(1),
  // funky_types::unstable
  LET, -2, var_funky_types__unstable, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_1034_1_position, LOCAL(2),
  // 
  LET, 2, LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(1052, 35),
  POS(1053, 35),
  POS(1051, 35)
};

static TAB_NUM t_lambda_413[] = {
  0, // locals
  0, // parameters
  // syntax_error "'e'"
  func_syntax_error, 1, str_e, TAIL_CALL,
  POS(1057, 35)
};

static TAB_NUM t_lambda_414[] = {
  0, // locals
  0, // parameters
  // syntax_error "'l'"
  func_syntax_error, 1, str_l, TAIL_CALL,
  POS(1059, 31)
};

static TAB_NUM t_lambda_415[] = {
  0, // locals
  0, // parameters
  // syntax_error "'b'"
  func_syntax_error, 1, str_b, TAIL_CALL,
  POS(1061, 27)
};

static TAB_NUM t_lambda_416[] = {
  0, // locals
  0, // parameters
  // syntax_error "'a'"
  func_syntax_error, 1, str_a, TAIL_CALL,
  POS(1063, 23)
};

static TAB_NUM t_lambda_417[] = {
  0, // locals
  0, // parameters
  // syntax_error "'t'"
  func_syntax_error, 1, str_t, TAIL_CALL,
  POS(1065, 19)
};

static TAB_NUM t_lambda_418[] = {
  0, // locals
  0, // parameters
  // syntax_error "'s'"
  func_syntax_error, 1, str_s, TAIL_CALL,
  POS(1067, 15)
};

static TAB_NUM t_lambda_419[] = {
  0, // locals
  0, // parameters
  // syntax_error "'n'"
  func_syntax_error, 1, str_n, TAIL_CALL,
  POS(1069, 11)
};

static TAB_NUM t_lambda_420[] = {
  0, // locals
  0, // parameters
  // syntax_error "'u'"
  func_syntax_error, 1, str_u, TAIL_CALL,
  POS(1071, 7)
};

static TAB_NUM t_func_parse_pragma[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 2, lambda_421, lambda_428, TAIL_CALL,
  POS(1074, 3)
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
  POS(1077, 9),
  POS(1077, 9),
  POS(1076, 9),
  POS(1075, 7)
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
  POS(1078, 9),
  POS(1078, 9),
  POS(1076, 9),
  POS(1078, 9)
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
  POS(1079, 9),
  POS(1079, 9),
  POS(1076, 9),
  POS(1079, 9)
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
  POS(1080, 9),
  POS(1080, 9),
  POS(1076, 9),
  POS(1080, 9)
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
  POS(1081, 9),
  POS(1081, 9),
  POS(1076, 9),
  POS(1081, 9)
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
  POS(1082, 9),
  POS(1082, 9),
  POS(1082, 9)
};

static TAB_NUM t_lambda_427[] = {
  0, // locals
  0, // parameters
  // range &text 7 -1
  var_range, 3, var_text, num_7, minus_num_1, 1, var_text,
  // parse_allow_hidden_without_prefix
  func_parse_allow_hidden_without_prefix, 0, TAIL_CALL,
  POS(1084, 9),
  POS(1085, 9)
};

static TAB_NUM t_lambda_428[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_429, TAIL_CALL,
  POS(1086, 7)
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
  POS(1089, 9),
  POS(1090, 9),
  POS(1091, 9)
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
  POS(1094, 3),
  POS(1097, 5),
  POS(1095, 3)
};

static TAB_NUM t_func_parse_allow_unused[] = {
  2, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_1102_1_position,
  // text(1) == 'u':
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == 'u':
  var_std__equal, 2, LOCAL(1), chr_117, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_430, lambda_441, TAIL_CALL,
  POS(1102, 3),
  POS(1104, 5),
  POS(1104, 5),
  POS(1103, 3)
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
  POS(1106, 9),
  POS(1106, 9),
  POS(1105, 7)
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
  POS(1108, 13),
  POS(1108, 13),
  POS(1107, 11)
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
  POS(1110, 17),
  POS(1110, 17),
  POS(1109, 15)
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
  POS(1112, 21),
  POS(1112, 21),
  POS(1111, 19)
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
  POS(1114, 25),
  POS(1114, 25),
  POS(1113, 23)
};

static TAB_NUM t_lambda_435[] = {
  2, // locals
  0, // parameters
  // range(text 7 -1)
  var_range, 3, var_text, num_7, minus_num_1, 1, LOCAL(1),
  // funky_types::allow_unused
  LET, -2, var_funky_types__allow_unused, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_1102_1_position, LOCAL(2),
  // 
  LET, 2, LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(1116, 27),
  POS(1117, 27),
  POS(1115, 27)
};

static TAB_NUM t_lambda_436[] = {
  0, // locals
  0, // parameters
  // syntax_error "'d'"
  func_syntax_error, 1, str_d, TAIL_CALL,
  POS(1121, 27)
};

static TAB_NUM t_lambda_437[] = {
  0, // locals
  0, // parameters
  // syntax_error "'e'"
  func_syntax_error, 1, str_e, TAIL_CALL,
  POS(1123, 23)
};

static TAB_NUM t_lambda_438[] = {
  0, // locals
  0, // parameters
  // syntax_error "'s'"
  func_syntax_error, 1, str_s, TAIL_CALL,
  POS(1125, 19)
};

static TAB_NUM t_lambda_439[] = {
  0, // locals
  0, // parameters
  // syntax_error "'u'"
  func_syntax_error, 1, str_u, TAIL_CALL,
  POS(1127, 15)
};

static TAB_NUM t_lambda_440[] = {
  0, // locals
  0, // parameters
  // syntax_error "'n'"
  func_syntax_error, 1, str_n, TAIL_CALL,
  POS(1129, 11)
};

static TAB_NUM t_lambda_441[] = {
  0, // locals
  0, // parameters
  // syntax_error "'u'"
  func_syntax_error, 1, str_u, TAIL_CALL,
  POS(1131, 7)
};

static TAB_NUM t_func_parse_functor_without_prefix[] = {
  1, // locals
  0, // parameters
  // $position str
  LET, 1, var_str, 1, var_1134_1_position,
  // parse_more_identifier_characters !text $identifier
  func_parse_more_identifier_characters, 0, 2, var_text, var_1135_40_identifier,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_16_text_is_defined, lambda_446, TAIL_CALL,
  POS(1134, 3),
  POS(1135, 3),
  POS(1137, 10),
  POS(1136, 3)
};

static TAB_NUM t_lambda_16_text_is_defined[] = {
  5, // locals
  0, // parameters
  // length_of(position) == length_of(funky::line_text_of(current_group))
  var_length_of, 1, var_1134_1_position, 1, LOCAL(1),
  // funky::line_text_of(current_group))
  var_funky__line_text_of, 1, var_current_group, 1, LOCAL(2),
  // length_of(funky::line_text_of(current_group))
  var_length_of, 1, LOCAL(2), 1, LOCAL(3),
  // length_of(position) == length_of(funky::line_text_of(current_group))
  var_std__equal, 2, LOCAL(1), LOCAL(3), 1, LOCAL(4),
  // $parse
  var_if, 3, LOCAL(4), lambda_442, lambda_443, 1, LOCAL(5),
  // parse !text $extensions
  LOCAL(5), 0, 2, var_text, var_1143_13_extensions,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_444, lambda_445, TAIL_CALL,
  POS(1140, 11),
  POS(1140, 44),
  POS(1140, 34),
  POS(1140, 11),
  POS(1138, 7),
  POS(1143, 7),
  POS(1145, 14),
  POS(1144, 7)
};

static TAB_NUM t_lambda_442[] = {
  0, // locals
  0, // parameters
  //  parse_extensions
  LET, 1, func_parse_extensions, TAIL_CALL,
  POS(1141, 13)
};

static TAB_NUM t_lambda_443[] = {
  0, // locals
  0, // parameters
  //  parse_inline_extensions
  LET, 1, func_parse_inline_extensions, TAIL_CALL,
  POS(1142, 13)
};

static TAB_NUM t_lambda_444[] = {
  1, // locals
  0, // parameters
  // funky_types::functor
  LET, -4, var_funky_types__functor, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_1134_1_position, var_funky__identifier_of, var_1135_40_identifier, var_funky__extensions_of, var_1143_13_extensions, LOCAL(1),
  // 
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(1148, 11),
  POS(1146, 11)
};

static TAB_NUM t_lambda_445[] = {
  0, // locals
  0, // parameters
  //  undefined extensions
  LET, 2, var_undefined, var_1143_13_extensions, TAIL_CALL,
  POS(1153, 11)
};

static TAB_NUM t_lambda_446[] = {
  0, // locals
  0, // parameters
  //  undefined identifier
  LET, 2, var_undefined, var_1135_40_identifier, TAIL_CALL,
  POS(1154, 7)
};

static TAB_NUM t_func_parse_extensions[] = {
  2, // locals
  0, // parameters
  // cond $rest $expr
  var_cond, 6, lambda_447, lambda_449, lambda_451, lambda_453, lambda_456, lambda_459, 2, LOCAL(2), var_1157_12_expr,
  // cond
  var_cond, 3, lambda_461, lambda_463, lambda_465, 1, LOCAL(1),
  // ->
  LET, 2, LOCAL(2), LOCAL(1), TAIL_CALL,
  POS(1157, 3),
  POS(1189, 5),
  POS(1187, 3)
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
  POS(1159, 7),
  POS(1159, 7),
  POS(1158, 7)
};

static TAB_NUM t_lambda_448[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_io_call_without_prefix
  func_parse_io_call_without_prefix, 0, TAIL_CALL,
  POS(1161, 9),
  POS(1162, 9)
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
  POS(1164, 7),
  POS(1164, 7),
  POS(1163, 7)
};

static TAB_NUM t_lambda_450[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_function_call_extension_without_prefix
  func_parse_function_call_extension_without_prefix, 0, TAIL_CALL,
  POS(1166, 9),
  POS(1167, 9)
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
  POS(1169, 7),
  POS(1169, 7),
  POS(1168, 7)
};

static TAB_NUM t_lambda_452[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_attribute_access_extension_without_prefix
  func_parse_attribute_access_extension_without_prefix, 0, TAIL_CALL,
  POS(1171, 9),
  POS(1172, 9)
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
  POS(1174, 7),
  POS(1174, 7),
  POS(1173, 7)
};

static TAB_NUM t_lambda_454[] = {
  1, // locals
  0, // parameters
  // is_defined
  var_is_defined, 1, var_subgroups, 1, LOCAL(1),
  // subgroups.is_defined
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1174, 35),
  POS(1174, 25)
};

static TAB_NUM t_lambda_455[] = {
  0, // locals
  0, // parameters
  // parse_tagged_multiline_arguments_without_prefix
  func_parse_tagged_multiline_arguments_without_prefix, 0, TAIL_CALL,
  POS(1176, 9)
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
  POS(1179, 9),
  POS(1179, 9),
  POS(1178, 9),
  POS(1177, 7)
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
  POS(1180, 9),
  POS(1180, 9),
  POS(1180, 9)
};

static TAB_NUM t_lambda_458[] = {
  0, // locals
  0, // parameters
  // range &text 3 -1
  var_range, 3, var_text, num_3, minus_num_1, 1, var_text,
  // parse_remark_and_multiline_function_call_without_prefix
  func_parse_remark_and_multiline_function_call_without_prefix, 0, TAIL_CALL,
  POS(1182, 9),
  POS(1183, 9)
};

static TAB_NUM t_lambda_459[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_460, TAIL_CALL,
  POS(1184, 7)
};

static TAB_NUM t_lambda_460[] = {
  0, // locals
  0, // parameters
  //  text empty_list
  LET, 2, var_text, var_empty_list, TAIL_CALL,
  POS(1186, 9)
};

static TAB_NUM t_lambda_461[] = {
  1, // locals
  0, // parameters
  // is_undefined -> empty_list
  var_is_undefined, 1, var_1157_12_expr, 1, LOCAL(1),
  //  expr.is_undefined -> empty_list
  LET, 2, LOCAL(1), lambda_462, TAIL_CALL,
  POS(1190, 15),
  POS(1190, 9)
};

static TAB_NUM t_lambda_462[] = {
  0, // locals
  0, // parameters
  //  empty_list
  LET, 1, var_empty_list, TAIL_CALL,
  POS(1190, 30)
};

static TAB_NUM t_lambda_463[] = {
  1, // locals
  0, // parameters
  // is_a_list -> expr
  var_is_a_list, 1, var_1157_12_expr, 1, LOCAL(1),
  //  expr.is_a_list -> expr
  LET, 2, LOCAL(1), lambda_464, TAIL_CALL,
  POS(1191, 15),
  POS(1191, 9)
};

static TAB_NUM t_lambda_464[] = {
  0, // locals
  0, // parameters
  //  expr
  LET, 1, var_1157_12_expr, TAIL_CALL,
  POS(1191, 27)
};

static TAB_NUM t_lambda_465[] = {
  0, // locals
  0, // parameters
  //  true -> list(expr)
  LET, 2, var_true, lambda_466, TAIL_CALL,
  POS(1192, 9)
};

static TAB_NUM t_lambda_466[] = {
  1, // locals
  0, // parameters
  // list(expr)
  var_list, 1, var_1157_12_expr, 1, LOCAL(1),
  //  list(expr)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1192, 18),
  POS(1192, 17)
};

static TAB_NUM t_func_parse_function_call_extension_without_prefix[] = {
  1, // locals
  0, // parameters
  // parse_function_call_without_prefix !text $function_call
  func_parse_function_call_without_prefix, 0, 2, var_text, var_1195_42_function_call,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_17_text_is_defined, lambda_471, TAIL_CALL,
  POS(1195, 3),
  POS(1197, 10),
  POS(1196, 3)
};

static TAB_NUM t_lambda_17_text_is_defined[] = {
  1, // locals
  0, // parameters
  // parse_extensions !text $extensions
  func_parse_extensions, 0, 2, var_text, var_1198_24_extensions,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_467, lambda_470, TAIL_CALL,
  POS(1198, 7),
  POS(1200, 14),
  POS(1199, 7)
};

static TAB_NUM t_lambda_467[] = {
  1, // locals
  0, // parameters
  // is_defined
  var_is_defined, 1, var_1198_24_extensions, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_468, lambda_469, TAIL_CALL,
  POS(1203, 24),
  POS(1202, 11)
};

static TAB_NUM t_lambda_468[] = {
  3, // locals
  0, // parameters
  // to_list
  func_to_list, 1, var_1195_42_function_call, 1, LOCAL(1),
  // to_list
  func_to_list, 1, var_1198_24_extensions, 1, LOCAL(2),
  // append
  var_append, 2, LOCAL(1), LOCAL(2), 1, LOCAL(3),
  // 
  LET, 2, var_text, LOCAL(3), TAIL_CALL,
  POS(1207, 31),
  POS(1208, 28),
  POS(1206, 15),
  POS(1204, 15)
};

static TAB_NUM t_lambda_469[] = {
  1, // locals
  0, // parameters
  // to_list
  func_to_list, 1, var_1195_42_function_call, 1, LOCAL(1),
  //  text function_call.to_list
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(1209, 35),
  POS(1209, 15)
};

static TAB_NUM t_lambda_470[] = {
  0, // locals
  0, // parameters
  //  undefined extensions
  LET, 2, var_undefined, var_1198_24_extensions, TAIL_CALL,
  POS(1210, 11)
};

static TAB_NUM t_lambda_471[] = {
  0, // locals
  0, // parameters
  //  undefined function_call
  LET, 2, var_undefined, var_1195_42_function_call, TAIL_CALL,
  POS(1211, 7)
};

static TAB_NUM t_func_parse_attribute_access_extension_without_prefix[] = {
  1, // locals
  0, // parameters
  // parse_attribute_access_without_prefix !text $attribute_access
  func_parse_attribute_access_without_prefix, 0, 2, var_text, var_1214_45_attribute_access,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_18_text_is_defined, lambda_476, TAIL_CALL,
  POS(1214, 3),
  POS(1216, 10),
  POS(1215, 3)
};

static TAB_NUM t_lambda_18_text_is_defined[] = {
  1, // locals
  0, // parameters
  // parse_extensions !text $extensions
  func_parse_extensions, 0, 2, var_text, var_1217_24_extensions,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_472, lambda_475, TAIL_CALL,
  POS(1217, 7),
  POS(1219, 14),
  POS(1218, 7)
};

static TAB_NUM t_lambda_472[] = {
  1, // locals
  0, // parameters
  // is_defined
  var_is_defined, 1, var_1217_24_extensions, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_473, lambda_474, TAIL_CALL,
  POS(1222, 24),
  POS(1221, 11)
};

static TAB_NUM t_lambda_473[] = {
  3, // locals
  0, // parameters
  // to_list
  func_to_list, 1, var_1214_45_attribute_access, 1, LOCAL(1),
  // to_list
  func_to_list, 1, var_1217_24_extensions, 1, LOCAL(2),
  // append
  var_append, 2, LOCAL(1), LOCAL(2), 1, LOCAL(3),
  // 
  LET, 2, var_text, LOCAL(3), TAIL_CALL,
  POS(1226, 34),
  POS(1227, 28),
  POS(1225, 15),
  POS(1223, 15)
};

static TAB_NUM t_lambda_474[] = {
  1, // locals
  0, // parameters
  // to_list
  func_to_list, 1, var_1214_45_attribute_access, 1, LOCAL(1),
  //  text attribute_access.to_list
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(1228, 38),
  POS(1228, 15)
};

static TAB_NUM t_lambda_475[] = {
  0, // locals
  0, // parameters
  //  undefined extensions
  LET, 2, var_undefined, var_1217_24_extensions, TAIL_CALL,
  POS(1229, 11)
};

static TAB_NUM t_lambda_476[] = {
  0, // locals
  0, // parameters
  //  undefined attribute_access
  LET, 2, var_undefined, var_1214_45_attribute_access, TAIL_CALL,
  POS(1230, 7)
};

static TAB_NUM t_func_parse_inline_functor[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_1233_1_position,
  // !str text
  LET, 1, var_text, 1, var_str,
  // parse_identifier !text $identifier
  func_parse_identifier, 0, 2, var_text, var_1235_24_identifier,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_19_text_is_defined, lambda_479, TAIL_CALL,
  POS(1233, 3),
  POS(1234, 3),
  POS(1235, 3),
  POS(1237, 10),
  POS(1236, 3)
};

static TAB_NUM t_lambda_19_text_is_defined[] = {
  1, // locals
  0, // parameters
  // parse_inline_extensions !text $inline_extensions
  func_parse_inline_extensions, 0, 2, var_text, var_1238_31_inline_extensions,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_477, lambda_478, TAIL_CALL,
  POS(1238, 7),
  POS(1240, 14),
  POS(1239, 7)
};

static TAB_NUM t_lambda_477[] = {
  1, // locals
  0, // parameters
  // funky_types::functor
  LET, -4, var_funky_types__functor, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_1233_1_position, var_funky__identifier_of, var_1235_24_identifier, var_funky__extensions_of, var_1238_31_inline_extensions, LOCAL(1),
  // 
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(1243, 11),
  POS(1241, 11)
};

static TAB_NUM t_lambda_478[] = {
  0, // locals
  0, // parameters
  //  undefined inline_extensions
  LET, 2, var_undefined, var_1238_31_inline_extensions, TAIL_CALL,
  POS(1248, 11)
};

static TAB_NUM t_lambda_479[] = {
  0, // locals
  0, // parameters
  //  undefined identifier
  LET, 2, var_undefined, var_1235_24_identifier, TAIL_CALL,
  POS(1249, 7)
};

static TAB_NUM t_func_parse_inline_extensions[] = {
  2, // locals
  0, // parameters
  // cond $rest $expr
  var_cond, 4, lambda_480, lambda_482, lambda_484, lambda_486, 2, LOCAL(2), var_1252_12_expr,
  // cond
  var_cond, 3, lambda_488, lambda_490, lambda_492, 1, LOCAL(1),
  // ->
  LET, 2, LOCAL(2), LOCAL(1), TAIL_CALL,
  POS(1252, 3),
  POS(1273, 5),
  POS(1271, 3)
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
  POS(1254, 7),
  POS(1254, 7),
  POS(1253, 7)
};

static TAB_NUM t_lambda_481[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_io_call_without_prefix
  func_parse_io_call_without_prefix, 0, TAIL_CALL,
  POS(1256, 9),
  POS(1257, 9)
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
  POS(1259, 7),
  POS(1259, 7),
  POS(1258, 7)
};

static TAB_NUM t_lambda_483[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_inline_function_call_extension_without_prefix
  func_parse_inline_function_call_extension_without_prefix, 0, TAIL_CALL,
  POS(1261, 9),
  POS(1262, 9)
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
  POS(1264, 7),
  POS(1264, 7),
  POS(1263, 7)
};

static TAB_NUM t_lambda_485[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_inline_attribute_access_extension_without_prefix
  func_parse_inline_attribute_access_extension_without_prefix, 0, TAIL_CALL,
  POS(1266, 9),
  POS(1267, 9)
};

static TAB_NUM t_lambda_486[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_487, TAIL_CALL,
  POS(1268, 7)
};

static TAB_NUM t_lambda_487[] = {
  0, // locals
  0, // parameters
  //  text empty_list
  LET, 2, var_text, var_empty_list, TAIL_CALL,
  POS(1270, 9)
};

static TAB_NUM t_lambda_488[] = {
  1, // locals
  0, // parameters
  // is_undefined -> empty_list
  var_is_undefined, 1, var_1252_12_expr, 1, LOCAL(1),
  //  expr.is_undefined -> empty_list
  LET, 2, LOCAL(1), lambda_489, TAIL_CALL,
  POS(1274, 15),
  POS(1274, 9)
};

static TAB_NUM t_lambda_489[] = {
  0, // locals
  0, // parameters
  //  empty_list
  LET, 1, var_empty_list, TAIL_CALL,
  POS(1274, 30)
};

static TAB_NUM t_lambda_490[] = {
  1, // locals
  0, // parameters
  // is_a_list -> expr
  var_is_a_list, 1, var_1252_12_expr, 1, LOCAL(1),
  //  expr.is_a_list -> expr
  LET, 2, LOCAL(1), lambda_491, TAIL_CALL,
  POS(1275, 15),
  POS(1275, 9)
};

static TAB_NUM t_lambda_491[] = {
  0, // locals
  0, // parameters
  //  expr
  LET, 1, var_1252_12_expr, TAIL_CALL,
  POS(1275, 27)
};

static TAB_NUM t_lambda_492[] = {
  0, // locals
  0, // parameters
  //  true -> list(expr)
  LET, 2, var_true, lambda_493, TAIL_CALL,
  POS(1276, 9)
};

static TAB_NUM t_lambda_493[] = {
  1, // locals
  0, // parameters
  // list(expr)
  var_list, 1, var_1252_12_expr, 1, LOCAL(1),
  //  list(expr)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1276, 18),
  POS(1276, 17)
};

static TAB_NUM t_func_parse_inline_calls[] = {
  2, // locals
  0, // parameters
  // cond $rest $expr
  var_cond, 3, lambda_494, lambda_496, lambda_498, 2, LOCAL(2), var_1279_12_expr,
  // cond
  var_cond, 3, lambda_500, lambda_502, lambda_504, 1, LOCAL(1),
  // ->
  LET, 2, LOCAL(2), LOCAL(1), TAIL_CALL,
  POS(1279, 3),
  POS(1295, 5),
  POS(1293, 3)
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
  POS(1281, 7),
  POS(1281, 7),
  POS(1280, 7)
};

static TAB_NUM t_lambda_495[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_inline_function_call_extension_without_prefix
  func_parse_inline_function_call_extension_without_prefix, 0, TAIL_CALL,
  POS(1283, 9),
  POS(1284, 9)
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
  POS(1286, 7),
  POS(1286, 7),
  POS(1285, 7)
};

static TAB_NUM t_lambda_497[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_inline_attribute_access_extension_without_prefix
  func_parse_inline_attribute_access_extension_without_prefix, 0, TAIL_CALL,
  POS(1288, 9),
  POS(1289, 9)
};

static TAB_NUM t_lambda_498[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_499, TAIL_CALL,
  POS(1290, 7)
};

static TAB_NUM t_lambda_499[] = {
  0, // locals
  0, // parameters
  //  text empty_list
  LET, 2, var_text, var_empty_list, TAIL_CALL,
  POS(1292, 9)
};

static TAB_NUM t_lambda_500[] = {
  1, // locals
  0, // parameters
  // is_undefined -> empty_list
  var_is_undefined, 1, var_1279_12_expr, 1, LOCAL(1),
  //  expr.is_undefined -> empty_list
  LET, 2, LOCAL(1), lambda_501, TAIL_CALL,
  POS(1296, 15),
  POS(1296, 9)
};

static TAB_NUM t_lambda_501[] = {
  0, // locals
  0, // parameters
  //  empty_list
  LET, 1, var_empty_list, TAIL_CALL,
  POS(1296, 30)
};

static TAB_NUM t_lambda_502[] = {
  1, // locals
  0, // parameters
  // is_a_list -> expr
  var_is_a_list, 1, var_1279_12_expr, 1, LOCAL(1),
  //  expr.is_a_list -> expr
  LET, 2, LOCAL(1), lambda_503, TAIL_CALL,
  POS(1297, 15),
  POS(1297, 9)
};

static TAB_NUM t_lambda_503[] = {
  0, // locals
  0, // parameters
  //  expr
  LET, 1, var_1279_12_expr, TAIL_CALL,
  POS(1297, 27)
};

static TAB_NUM t_lambda_504[] = {
  0, // locals
  0, // parameters
  //  true -> list(expr)
  LET, 2, var_true, lambda_505, TAIL_CALL,
  POS(1298, 9)
};

static TAB_NUM t_lambda_505[] = {
  1, // locals
  0, // parameters
  // list(expr)
  var_list, 1, var_1279_12_expr, 1, LOCAL(1),
  //  list(expr)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1298, 18),
  POS(1298, 17)
};

static TAB_NUM t_func_parse_inline_function_call_extension_without_prefix[] = {
  1, // locals
  0, // parameters
  // parse_function_call_without_prefix !text $function_call
  func_parse_function_call_without_prefix, 0, 2, var_text, var_1301_42_function_call,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_20_text_is_defined, lambda_510, TAIL_CALL,
  POS(1301, 3),
  POS(1303, 10),
  POS(1302, 3)
};

static TAB_NUM t_lambda_20_text_is_defined[] = {
  1, // locals
  0, // parameters
  // parse_inline_extensions !text $inline_extensions
  func_parse_inline_extensions, 0, 2, var_text, var_1304_31_inline_extensions,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_506, lambda_509, TAIL_CALL,
  POS(1304, 7),
  POS(1306, 14),
  POS(1305, 7)
};

static TAB_NUM t_lambda_506[] = {
  1, // locals
  0, // parameters
  // is_defined
  var_is_defined, 1, var_1304_31_inline_extensions, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_507, lambda_508, TAIL_CALL,
  POS(1309, 31),
  POS(1308, 11)
};

static TAB_NUM t_lambda_507[] = {
  3, // locals
  0, // parameters
  // to_list
  func_to_list, 1, var_1301_42_function_call, 1, LOCAL(1),
  // to_list
  func_to_list, 1, var_1304_31_inline_extensions, 1, LOCAL(2),
  // append
  var_append, 2, LOCAL(1), LOCAL(2), 1, LOCAL(3),
  // 
  LET, 2, var_text, LOCAL(3), TAIL_CALL,
  POS(1313, 31),
  POS(1314, 35),
  POS(1312, 15),
  POS(1310, 15)
};

static TAB_NUM t_lambda_508[] = {
  1, // locals
  0, // parameters
  // to_list
  func_to_list, 1, var_1301_42_function_call, 1, LOCAL(1),
  //  text function_call.to_list
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(1315, 35),
  POS(1315, 15)
};

static TAB_NUM t_lambda_509[] = {
  0, // locals
  0, // parameters
  //  undefined inline_extensions
  LET, 2, var_undefined, var_1304_31_inline_extensions, TAIL_CALL,
  POS(1316, 11)
};

static TAB_NUM t_lambda_510[] = {
  0, // locals
  0, // parameters
  //  undefined function_call
  LET, 2, var_undefined, var_1301_42_function_call, TAIL_CALL,
  POS(1317, 7)
};

static TAB_NUM t_func_parse_inline_attribute_access_extension_without_prefix[] = {
  1, // locals
  0, // parameters
  // parse_attribute_access_without_prefix !text $attribute_access
  func_parse_attribute_access_without_prefix, 0, 2, var_text, var_1320_45_attribute_access,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_21_text_is_defined, lambda_515, TAIL_CALL,
  POS(1320, 3),
  POS(1322, 10),
  POS(1321, 3)
};

static TAB_NUM t_lambda_21_text_is_defined[] = {
  1, // locals
  0, // parameters
  // parse_inline_extensions !text $inline_extensions
  func_parse_inline_extensions, 0, 2, var_text, var_1323_31_inline_extensions,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_511, lambda_514, TAIL_CALL,
  POS(1323, 7),
  POS(1325, 14),
  POS(1324, 7)
};

static TAB_NUM t_lambda_511[] = {
  1, // locals
  0, // parameters
  // is_defined
  var_is_defined, 1, var_1323_31_inline_extensions, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_512, lambda_513, TAIL_CALL,
  POS(1328, 31),
  POS(1327, 11)
};

static TAB_NUM t_lambda_512[] = {
  3, // locals
  0, // parameters
  // to_list
  func_to_list, 1, var_1320_45_attribute_access, 1, LOCAL(1),
  // to_list
  func_to_list, 1, var_1323_31_inline_extensions, 1, LOCAL(2),
  // append
  var_append, 2, LOCAL(1), LOCAL(2), 1, LOCAL(3),
  // 
  LET, 2, var_text, LOCAL(3), TAIL_CALL,
  POS(1332, 34),
  POS(1333, 35),
  POS(1331, 15),
  POS(1329, 15)
};

static TAB_NUM t_lambda_513[] = {
  1, // locals
  0, // parameters
  // to_list
  func_to_list, 1, var_1320_45_attribute_access, 1, LOCAL(1),
  //  text attribute_access.to_list
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(1334, 38),
  POS(1334, 15)
};

static TAB_NUM t_lambda_514[] = {
  0, // locals
  0, // parameters
  //  undefined inline_extensions
  LET, 2, var_undefined, var_1323_31_inline_extensions, TAIL_CALL,
  POS(1335, 11)
};

static TAB_NUM t_lambda_515[] = {
  0, // locals
  0, // parameters
  //  undefined attribute_access
  LET, 2, var_undefined, var_1320_45_attribute_access, TAIL_CALL,
  POS(1336, 7)
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
  POS(1339, 3),
  POS(1342, 5),
  POS(1340, 3)
};

static TAB_NUM t_func_parse_function_call_without_prefix[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_1347_1_position,
  // parse_optional_inline_arguments !text $optional_inline_arguments
  func_parse_optional_inline_arguments, 0, 2, var_text, var_1348_39_optional_inline_arguments,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_516, lambda_517, TAIL_CALL,
  POS(1347, 3),
  POS(1348, 3),
  POS(1350, 10),
  POS(1349, 3)
};

static TAB_NUM t_lambda_516[] = {
  1, // locals
  0, // parameters
  // funky_types::function_call
  LET, -3, var_funky_types__function_call, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_1347_1_position, var_funky__arguments_of, var_1348_39_optional_inline_arguments, LOCAL(1),
  // 
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(1353, 7),
  POS(1351, 7)
};

static TAB_NUM t_lambda_517[] = {
  0, // locals
  0, // parameters
  //  undefined optional_inline_arguments
  LET, 2, var_undefined, var_1348_39_optional_inline_arguments, TAIL_CALL,
  POS(1357, 7)
};

static TAB_NUM t_func_parse_optional_inline_arguments[] = {
  2, // locals
  0, // parameters
  // cond $rest $expr
  var_cond, 2, lambda_518, lambda_520, 2, LOCAL(2), var_1360_12_expr,
  // cond
  var_cond, 3, lambda_522, lambda_524, lambda_526, 1, LOCAL(1),
  // ->
  LET, 2, LOCAL(2), LOCAL(1), TAIL_CALL,
  POS(1360, 3),
  POS(1372, 5),
  POS(1370, 3)
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
  POS(1362, 7),
  POS(1362, 7),
  POS(1361, 7)
};

static TAB_NUM t_lambda_519[] = {
  1, // locals
  0, // parameters
  // range(text 2 -1) empty_list
  var_range, 3, var_text, num_2, minus_num_1, 1, LOCAL(1),
  //  range(text 2 -1) empty_list
  LET, 2, LOCAL(1), var_empty_list, TAIL_CALL,
  POS(1363, 10),
  POS(1363, 9)
};

static TAB_NUM t_lambda_520[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_521, TAIL_CALL,
  POS(1364, 7)
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
  POS(1367, 9),
  POS(1368, 9),
  POS(1369, 9)
};

static TAB_NUM t_lambda_522[] = {
  1, // locals
  0, // parameters
  // is_undefined -> empty_list
  var_is_undefined, 1, var_1360_12_expr, 1, LOCAL(1),
  //  expr.is_undefined -> empty_list
  LET, 2, LOCAL(1), lambda_523, TAIL_CALL,
  POS(1373, 15),
  POS(1373, 9)
};

static TAB_NUM t_lambda_523[] = {
  0, // locals
  0, // parameters
  //  empty_list
  LET, 1, var_empty_list, TAIL_CALL,
  POS(1373, 30)
};

static TAB_NUM t_lambda_524[] = {
  1, // locals
  0, // parameters
  // is_a_list -> expr
  var_is_a_list, 1, var_1360_12_expr, 1, LOCAL(1),
  //  expr.is_a_list -> expr
  LET, 2, LOCAL(1), lambda_525, TAIL_CALL,
  POS(1374, 15),
  POS(1374, 9)
};

static TAB_NUM t_lambda_525[] = {
  0, // locals
  0, // parameters
  //  expr
  LET, 1, var_1360_12_expr, TAIL_CALL,
  POS(1374, 27)
};

static TAB_NUM t_lambda_526[] = {
  0, // locals
  0, // parameters
  //  true -> list(expr)
  LET, 2, var_true, lambda_527, TAIL_CALL,
  POS(1375, 9)
};

static TAB_NUM t_lambda_527[] = {
  1, // locals
  0, // parameters
  // list(expr)
  var_list, 1, var_1360_12_expr, 1, LOCAL(1),
  //  list(expr)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1375, 18),
  POS(1375, 17)
};

static TAB_NUM t_func_parse_function_call_arguments[] = {
  1, // locals
  0, // parameters
  // parse_inline_arguments !text $inline_arguments
  func_parse_inline_arguments, 0, 2, var_text, var_1378_30_inline_arguments,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_22_text_is_defined, lambda_530, TAIL_CALL,
  POS(1378, 3),
  POS(1380, 10),
  POS(1379, 3)
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
  POS(1382, 9),
  POS(1382, 9),
  POS(1381, 7)
};

static TAB_NUM t_lambda_528[] = {
  1, // locals
  0, // parameters
  // range(text 2 -1)
  var_range, 3, var_text, num_2, minus_num_1, 1, LOCAL(1),
  // 
  LET, 2, LOCAL(1), var_1378_30_inline_arguments, TAIL_CALL,
  POS(1384, 11),
  POS(1383, 11)
};

static TAB_NUM t_lambda_529[] = {
  0, // locals
  0, // parameters
  // syntax_error "')'"
  func_syntax_error, 1, string_6, TAIL_CALL,
  POS(1387, 11)
};

static TAB_NUM t_lambda_530[] = {
  0, // locals
  0, // parameters
  //  undefined inline_arguments
  LET, 2, var_undefined, var_1378_30_inline_arguments, TAIL_CALL,
  POS(1388, 7)
};

static TAB_NUM t_func_parse_inline_return_without_prefix[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_1391_1_position,
  // parse_spaced_inline_arguments !text $spaced_inline_arguments
  func_parse_spaced_inline_arguments, 0, 2, var_text, var_1392_37_spaced_inline_arguments,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_531, lambda_532, TAIL_CALL,
  POS(1391, 3),
  POS(1392, 3),
  POS(1394, 10),
  POS(1393, 3)
};

static TAB_NUM t_lambda_531[] = {
  1, // locals
  0, // parameters
  // funky_types::inline_return
  LET, -3, var_funky_types__inline_return, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_1391_1_position, var_funky__arguments_of, var_1392_37_spaced_inline_arguments, LOCAL(1),
  // 
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(1397, 7),
  POS(1395, 7)
};

static TAB_NUM t_lambda_532[] = {
  0, // locals
  0, // parameters
  //  undefined spaced_inline_arguments
  LET, 2, var_undefined, var_1392_37_spaced_inline_arguments, TAIL_CALL,
  POS(1401, 7)
};

static TAB_NUM t_func_parse_attribute_access_without_prefix[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_1404_1_position,
  // !str text
  LET, 1, var_text, 1, var_str,
  // parse_identifier !text $identifier
  func_parse_identifier, 0, 2, var_text, var_1406_24_identifier,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_533, lambda_534, TAIL_CALL,
  POS(1404, 3),
  POS(1405, 3),
  POS(1406, 3),
  POS(1408, 10),
  POS(1407, 3)
};

static TAB_NUM t_lambda_533[] = {
  1, // locals
  0, // parameters
  // funky_types::attribute_access
  LET, -3, var_funky_types__attribute_access, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_1404_1_position, var_funky__identifier_of, var_1406_24_identifier, LOCAL(1),
  // 
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(1411, 7),
  POS(1409, 7)
};

static TAB_NUM t_lambda_534[] = {
  0, // locals
  0, // parameters
  //  undefined identifier
  LET, 2, var_undefined, var_1406_24_identifier, TAIL_CALL,
  POS(1415, 7)
};

static TAB_NUM t_func_parse_some_argument[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 3, lambda_535, lambda_537, lambda_539, TAIL_CALL,
  POS(1418, 3)
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
  POS(1420, 7),
  POS(1420, 7),
  POS(1419, 7)
};

static TAB_NUM t_lambda_536[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_body
  func_parse_body, 0, TAIL_CALL,
  POS(1422, 9),
  POS(1423, 9)
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
  POS(1425, 7),
  POS(1425, 7),
  POS(1424, 7)
};

static TAB_NUM t_lambda_538[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_argument
  func_parse_argument, 0, TAIL_CALL,
  POS(1427, 9),
  POS(1428, 9)
};

static TAB_NUM t_lambda_539[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_540, TAIL_CALL,
  POS(1429, 7)
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
  POS(1432, 9),
  POS(1433, 9),
  POS(1434, 9)
};

static TAB_NUM t_func_parse_some_arguments[] = {
  2, // locals
  0, // parameters
  // cond $rest $expr
  var_cond, 5, lambda_541, lambda_543, lambda_545, lambda_548, lambda_550, 2, LOCAL(2), var_1437_12_expr,
  // cond
  var_cond, 3, lambda_552, lambda_554, lambda_556, 1, LOCAL(1),
  // ->
  LET, 2, LOCAL(2), LOCAL(1), TAIL_CALL,
  POS(1437, 3),
  POS(1461, 5),
  POS(1459, 3)
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
  POS(1439, 7),
  POS(1439, 7),
  POS(1438, 7)
};

static TAB_NUM t_lambda_542[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_body
  func_parse_body, 0, TAIL_CALL,
  POS(1441, 9),
  POS(1442, 9)
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
  POS(1444, 7),
  POS(1444, 7),
  POS(1443, 7)
};

static TAB_NUM t_lambda_544[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_spaced_arguments_without_prefix
  func_parse_spaced_arguments_without_prefix, 0, TAIL_CALL,
  POS(1446, 9),
  POS(1447, 9)
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
  POS(1449, 7),
  POS(1449, 7),
  POS(1448, 7)
};

static TAB_NUM t_lambda_546[] = {
  1, // locals
  0, // parameters
  // is_defined
  var_is_defined, 1, var_subgroups, 1, LOCAL(1),
  // subgroups.is_defined
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1449, 35),
  POS(1449, 25)
};

static TAB_NUM t_lambda_547[] = {
  0, // locals
  0, // parameters
  // parse_line_remarks_without_prefix
  func_parse_line_remarks_without_prefix, 0, TAIL_CALL,
  POS(1451, 9)
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
  POS(1453, 7),
  POS(1453, 7),
  POS(1452, 7)
};

static TAB_NUM t_lambda_549[] = {
  0, // locals
  0, // parameters
  //  text empty_list
  LET, 2, var_text, var_empty_list, TAIL_CALL,
  POS(1454, 9)
};

static TAB_NUM t_lambda_550[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_551, TAIL_CALL,
  POS(1455, 7)
};

static TAB_NUM t_lambda_551[] = {
  0, // locals
  0, // parameters
  // syntax_error "some arguments"
  func_syntax_error, 1, str_some_arguments, TAIL_CALL,
  POS(1458, 9)
};

static TAB_NUM t_lambda_552[] = {
  1, // locals
  0, // parameters
  // is_undefined -> empty_list
  var_is_undefined, 1, var_1437_12_expr, 1, LOCAL(1),
  //  expr.is_undefined -> empty_list
  LET, 2, LOCAL(1), lambda_553, TAIL_CALL,
  POS(1462, 15),
  POS(1462, 9)
};

static TAB_NUM t_lambda_553[] = {
  0, // locals
  0, // parameters
  //  empty_list
  LET, 1, var_empty_list, TAIL_CALL,
  POS(1462, 30)
};

static TAB_NUM t_lambda_554[] = {
  1, // locals
  0, // parameters
  // is_a_list -> expr
  var_is_a_list, 1, var_1437_12_expr, 1, LOCAL(1),
  //  expr.is_a_list -> expr
  LET, 2, LOCAL(1), lambda_555, TAIL_CALL,
  POS(1463, 15),
  POS(1463, 9)
};

static TAB_NUM t_lambda_555[] = {
  0, // locals
  0, // parameters
  //  expr
  LET, 1, var_1437_12_expr, TAIL_CALL,
  POS(1463, 27)
};

static TAB_NUM t_lambda_556[] = {
  0, // locals
  0, // parameters
  //  true -> list(expr)
  LET, 2, var_true, lambda_557, TAIL_CALL,
  POS(1464, 9)
};

static TAB_NUM t_lambda_557[] = {
  1, // locals
  0, // parameters
  // list(expr)
  var_list, 1, var_1437_12_expr, 1, LOCAL(1),
  //  list(expr)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1464, 18),
  POS(1464, 17)
};

static TAB_NUM t_func_parse_some_statement_arguments[] = {
  2, // locals
  0, // parameters
  // cond $rest $expr
  var_cond, 6, lambda_558, lambda_560, lambda_562, lambda_565, lambda_568, lambda_570, 2, LOCAL(2), var_1467_12_expr,
  // cond
  var_cond, 3, lambda_572, lambda_574, lambda_576, 1, LOCAL(1),
  // ->
  LET, 2, LOCAL(2), LOCAL(1), TAIL_CALL,
  POS(1467, 3),
  POS(1495, 5),
  POS(1493, 3)
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
  POS(1469, 7),
  POS(1469, 7),
  POS(1468, 7)
};

static TAB_NUM t_lambda_559[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_body
  func_parse_body, 0, TAIL_CALL,
  POS(1471, 9),
  POS(1472, 9)
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
  POS(1474, 7),
  POS(1474, 7),
  POS(1473, 7)
};

static TAB_NUM t_lambda_561[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_spaced_statement_arguments_without_prefix
  func_parse_spaced_statement_arguments_without_prefix, 0, TAIL_CALL,
  POS(1476, 9),
  POS(1477, 9)
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
  POS(1479, 7),
  POS(1479, 7),
  POS(1478, 7)
};

static TAB_NUM t_lambda_563[] = {
  1, // locals
  0, // parameters
  // is_defined
  var_is_defined, 1, var_subgroups, 1, LOCAL(1),
  // subgroups.is_defined
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1479, 35),
  POS(1479, 25)
};

static TAB_NUM t_lambda_564[] = {
  0, // locals
  0, // parameters
  // parse_multiline_arguments_without_prefix
  func_parse_multiline_arguments_without_prefix, 0, TAIL_CALL,
  POS(1481, 9)
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
  POS(1483, 7),
  POS(1483, 7),
  POS(1482, 7)
};

static TAB_NUM t_lambda_566[] = {
  1, // locals
  0, // parameters
  // is_defined
  var_is_defined, 1, var_subgroups, 1, LOCAL(1),
  // subgroups.is_defined
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1483, 35),
  POS(1483, 25)
};

static TAB_NUM t_lambda_567[] = {
  0, // locals
  0, // parameters
  // parse_line_remarks_without_prefix
  func_parse_line_remarks_without_prefix, 0, TAIL_CALL,
  POS(1485, 9)
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
  POS(1487, 7),
  POS(1487, 7),
  POS(1486, 7)
};

static TAB_NUM t_lambda_569[] = {
  0, // locals
  0, // parameters
  //  text empty_list
  LET, 2, var_text, var_empty_list, TAIL_CALL,
  POS(1488, 9)
};

static TAB_NUM t_lambda_570[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_571, TAIL_CALL,
  POS(1489, 7)
};

static TAB_NUM t_lambda_571[] = {
  0, // locals
  0, // parameters
  // syntax_error "some statement arguments"
  func_syntax_error, 1, str_some_statement_a, TAIL_CALL,
  POS(1492, 9)
};

static TAB_NUM t_lambda_572[] = {
  1, // locals
  0, // parameters
  // is_undefined -> empty_list
  var_is_undefined, 1, var_1467_12_expr, 1, LOCAL(1),
  //  expr.is_undefined -> empty_list
  LET, 2, LOCAL(1), lambda_573, TAIL_CALL,
  POS(1496, 15),
  POS(1496, 9)
};

static TAB_NUM t_lambda_573[] = {
  0, // locals
  0, // parameters
  //  empty_list
  LET, 1, var_empty_list, TAIL_CALL,
  POS(1496, 30)
};

static TAB_NUM t_lambda_574[] = {
  1, // locals
  0, // parameters
  // is_a_list -> expr
  var_is_a_list, 1, var_1467_12_expr, 1, LOCAL(1),
  //  expr.is_a_list -> expr
  LET, 2, LOCAL(1), lambda_575, TAIL_CALL,
  POS(1497, 15),
  POS(1497, 9)
};

static TAB_NUM t_lambda_575[] = {
  0, // locals
  0, // parameters
  //  expr
  LET, 1, var_1467_12_expr, TAIL_CALL,
  POS(1497, 27)
};

static TAB_NUM t_lambda_576[] = {
  0, // locals
  0, // parameters
  //  true -> list(expr)
  LET, 2, var_true, lambda_577, TAIL_CALL,
  POS(1498, 9)
};

static TAB_NUM t_lambda_577[] = {
  1, // locals
  0, // parameters
  // list(expr)
  var_list, 1, var_1467_12_expr, 1, LOCAL(1),
  //  list(expr)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1498, 18),
  POS(1498, 17)
};

static TAB_NUM t_func_parse_spaced_arguments_without_prefix[] = {
  1, // locals
  0, // parameters
  // parse_more_arguments !text $more_arguments
  func_parse_more_arguments, 0, 2, var_text, var_1501_28_more_arguments,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_578, lambda_579, TAIL_CALL,
  POS(1501, 3),
  POS(1503, 10),
  POS(1502, 3)
};

static TAB_NUM t_lambda_578[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_text, var_1501_28_more_arguments, TAIL_CALL,
  POS(1504, 7)
};

static TAB_NUM t_lambda_579[] = {
  0, // locals
  0, // parameters
  //  undefined more_arguments
  LET, 2, var_undefined, var_1501_28_more_arguments, TAIL_CALL,
  POS(1507, 7)
};

static TAB_NUM t_func_parse_spaced_statement_arguments_without_prefix[] = {
  1, // locals
  0, // parameters
  // parse_more_statement_arguments !text $more_statement_arguments
  func_parse_more_statement_arguments, 0, 2, var_text, var_1510_38_more_statement_arguments,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_580, lambda_581, TAIL_CALL,
  POS(1510, 3),
  POS(1512, 10),
  POS(1511, 3)
};

static TAB_NUM t_lambda_580[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_text, var_1510_38_more_statement_arguments, TAIL_CALL,
  POS(1513, 7)
};

static TAB_NUM t_lambda_581[] = {
  0, // locals
  0, // parameters
  //  undefined more_statement_arguments
  LET, 2, var_undefined, var_1510_38_more_statement_arguments, TAIL_CALL,
  POS(1516, 7)
};

static TAB_NUM t_func_parse_more_arguments[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 4, lambda_582, lambda_584, lambda_587, lambda_590, TAIL_CALL,
  POS(1519, 3)
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
  POS(1521, 7),
  POS(1521, 7),
  POS(1520, 7)
};

static TAB_NUM t_lambda_583[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_body
  func_parse_body, 0, TAIL_CALL,
  POS(1523, 9),
  POS(1524, 9)
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
  POS(1527, 9),
  POS(1527, 9),
  POS(1526, 9),
  POS(1525, 7)
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
  POS(1528, 9),
  POS(1528, 9),
  POS(1528, 9)
};

static TAB_NUM t_lambda_586[] = {
  0, // locals
  0, // parameters
  // range &text 3 -1
  var_range, 3, var_text, num_3, minus_num_1, 1, var_text,
  // parse_return_expression_without_prefix
  func_parse_return_expression_without_prefix, 0, TAIL_CALL,
  POS(1530, 9),
  POS(1531, 9)
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
  POS(1533, 7),
  POS(1533, 7),
  POS(1532, 7)
};

static TAB_NUM t_lambda_588[] = {
  1, // locals
  0, // parameters
  // is_defined
  var_is_defined, 1, var_subgroups, 1, LOCAL(1),
  // subgroups.is_defined
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1533, 41),
  POS(1533, 31)
};

static TAB_NUM t_lambda_589[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_multiline_string_literal_without_prefix
  func_parse_multiline_string_literal_without_prefix, 0, TAIL_CALL,
  POS(1535, 9),
  POS(1536, 9)
};

static TAB_NUM t_lambda_590[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_591, TAIL_CALL,
  POS(1537, 7)
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
  POS(1540, 9),
  POS(1541, 9),
  POS(1542, 9)
};

static TAB_NUM t_func_parse_more_statement_arguments[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 4, lambda_592, lambda_594, lambda_597, lambda_600, TAIL_CALL,
  POS(1545, 3)
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
  POS(1547, 7),
  POS(1547, 7),
  POS(1546, 7)
};

static TAB_NUM t_lambda_593[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_body
  func_parse_body, 0, TAIL_CALL,
  POS(1549, 9),
  POS(1550, 9)
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
  POS(1553, 9),
  POS(1553, 9),
  POS(1552, 9),
  POS(1551, 7)
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
  POS(1554, 9),
  POS(1554, 9),
  POS(1554, 9)
};

static TAB_NUM t_lambda_596[] = {
  0, // locals
  0, // parameters
  // range &text 3 -1
  var_range, 3, var_text, num_3, minus_num_1, 1, var_text,
  // parse_return_expression_without_prefix
  func_parse_return_expression_without_prefix, 0, TAIL_CALL,
  POS(1556, 9),
  POS(1557, 9)
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
  POS(1559, 7),
  POS(1559, 7),
  POS(1558, 7)
};

static TAB_NUM t_lambda_598[] = {
  1, // locals
  0, // parameters
  // is_defined
  var_is_defined, 1, var_subgroups, 1, LOCAL(1),
  // subgroups.is_defined
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1559, 41),
  POS(1559, 31)
};

static TAB_NUM t_lambda_599[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_multiline_string_literal_without_prefix
  func_parse_multiline_string_literal_without_prefix, 0, TAIL_CALL,
  POS(1561, 9),
  POS(1562, 9)
};

static TAB_NUM t_lambda_600[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_601, TAIL_CALL,
  POS(1563, 7)
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
  POS(1566, 9),
  POS(1567, 9),
  POS(1568, 9)
};

static TAB_NUM t_func_parse_arguments[] = {
  1, // locals
  0, // parameters
  // parse_argument !text $argument
  func_parse_argument, 0, 2, var_text, var_1571_22_argument,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_23_text_is_defined, lambda_606, TAIL_CALL,
  POS(1571, 3),
  POS(1573, 10),
  POS(1572, 3)
};

static TAB_NUM t_lambda_23_text_is_defined[] = {
  1, // locals
  0, // parameters
  // parse_some_arguments !text $some_arguments
  func_parse_some_arguments, 0, 2, var_text, var_1574_28_some_arguments,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_602, lambda_605, TAIL_CALL,
  POS(1574, 7),
  POS(1576, 14),
  POS(1575, 7)
};

static TAB_NUM t_lambda_602[] = {
  1, // locals
  0, // parameters
  // is_defined
  var_is_defined, 1, var_1574_28_some_arguments, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_603, lambda_604, TAIL_CALL,
  POS(1579, 28),
  POS(1578, 11)
};

static TAB_NUM t_lambda_603[] = {
  3, // locals
  0, // parameters
  // to_list
  func_to_list, 1, var_1571_22_argument, 1, LOCAL(1),
  // to_list
  func_to_list, 1, var_1574_28_some_arguments, 1, LOCAL(2),
  // append
  var_append, 2, LOCAL(1), LOCAL(2), 1, LOCAL(3),
  // 
  LET, 2, var_text, LOCAL(3), TAIL_CALL,
  POS(1583, 26),
  POS(1584, 32),
  POS(1582, 15),
  POS(1580, 15)
};

static TAB_NUM t_lambda_604[] = {
  1, // locals
  0, // parameters
  // to_list
  func_to_list, 1, var_1571_22_argument, 1, LOCAL(1),
  //  text argument.to_list
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(1585, 30),
  POS(1585, 15)
};

static TAB_NUM t_lambda_605[] = {
  0, // locals
  0, // parameters
  //  undefined some_arguments
  LET, 2, var_undefined, var_1574_28_some_arguments, TAIL_CALL,
  POS(1586, 11)
};

static TAB_NUM t_lambda_606[] = {
  0, // locals
  0, // parameters
  //  undefined argument
  LET, 2, var_undefined, var_1571_22_argument, TAIL_CALL,
  POS(1587, 7)
};

static TAB_NUM t_func_parse_even_more_statement_arguments[] = {
  1, // locals
  0, // parameters
  // parse_argument !text $argument
  func_parse_argument, 0, 2, var_text, var_1590_22_argument,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_24_text_is_defined, lambda_611, TAIL_CALL,
  POS(1590, 3),
  POS(1592, 10),
  POS(1591, 3)
};

static TAB_NUM t_lambda_24_text_is_defined[] = {
  1, // locals
  0, // parameters
  // parse_some_statement_arguments !text $some_statement_arguments
  func_parse_some_statement_arguments, 0, 2, var_text, var_1593_38_some_statement_arguments,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_607, lambda_610, TAIL_CALL,
  POS(1593, 7),
  POS(1595, 14),
  POS(1594, 7)
};

static TAB_NUM t_lambda_607[] = {
  1, // locals
  0, // parameters
  // is_defined
  var_is_defined, 1, var_1593_38_some_statement_arguments, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_608, lambda_609, TAIL_CALL,
  POS(1598, 38),
  POS(1597, 11)
};

static TAB_NUM t_lambda_608[] = {
  3, // locals
  0, // parameters
  // to_list
  func_to_list, 1, var_1590_22_argument, 1, LOCAL(1),
  // to_list
  func_to_list, 1, var_1593_38_some_statement_arguments, 1, LOCAL(2),
  // append
  var_append, 2, LOCAL(1), LOCAL(2), 1, LOCAL(3),
  // 
  LET, 2, var_text, LOCAL(3), TAIL_CALL,
  POS(1602, 26),
  POS(1603, 42),
  POS(1601, 15),
  POS(1599, 15)
};

static TAB_NUM t_lambda_609[] = {
  1, // locals
  0, // parameters
  // to_list
  func_to_list, 1, var_1590_22_argument, 1, LOCAL(1),
  //  text argument.to_list
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(1604, 30),
  POS(1604, 15)
};

static TAB_NUM t_lambda_610[] = {
  0, // locals
  0, // parameters
  //  undefined some_statement_arguments
  LET, 2, var_undefined, var_1593_38_some_statement_arguments, TAIL_CALL,
  POS(1605, 11)
};

static TAB_NUM t_lambda_611[] = {
  0, // locals
  0, // parameters
  //  undefined argument
  LET, 2, var_undefined, var_1590_22_argument, TAIL_CALL,
  POS(1606, 7)
};

static TAB_NUM t_func_parse_multiline_arguments[] = {
  2, // locals
  0, // parameters
  // text == "@nl;" && subgroups.is_defined:
  var_std__equal, 2, var_text, string_2, 1, LOCAL(1),
  // text == "@nl;" && subgroups.is_defined:
  var_std__and, 2, LOCAL(1), lambda_612, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_613, lambda_616, TAIL_CALL,
  POS(1610, 5),
  POS(1610, 5),
  POS(1609, 3)
};

static TAB_NUM t_lambda_612[] = {
  1, // locals
  0, // parameters
  // is_defined:
  var_is_defined, 1, var_subgroups, 1, LOCAL(1),
  // subgroups.is_defined:
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1610, 33),
  POS(1610, 23)
};

static TAB_NUM t_lambda_613[] = {
  1, // locals
  0, // parameters
  // $line_start_arguments parse_groups(funky::parse_line_start_arguments_group)
  func_parse_groups, 1, var_funky__parse_line_start_arguments_group, 1, var_1611_1_line_start_arguments,
  // $error find_first(line_start_arguments is_an_error)
  var_find_first, 2, var_1611_1_line_start_arguments, var_is_an_error, 1, var_1612_1_error,
  // is_an_error
  var_is_an_error, 1, var_1612_1_error, 1, LOCAL(1),
  // if error.is_an_error
  var_if, 3, LOCAL(1), lambda_614, lambda_615, TAIL_CALL,
  POS(1611, 7),
  POS(1612, 7),
  POS(1613, 16),
  POS(1613, 7)
};

static TAB_NUM t_lambda_614[] = {
  0, // locals
  0, // parameters
  //  undefined error
  LET, 2, var_undefined, var_1612_1_error, TAIL_CALL,
  POS(1614, 11)
};

static TAB_NUM t_lambda_615[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, string_1, var_1611_1_line_start_arguments, TAIL_CALL,
  POS(1615, 11)
};

static TAB_NUM t_lambda_616[] = {
  0, // locals
  0, // parameters
  // syntax_error "valid input characters or line end"
  func_syntax_error, 1, str_valid_input_char, TAIL_CALL,
  POS(1619, 7)
};

static TAB_NUM t_func_parse_multiline_arguments_without_prefix[] = {
  1, // locals
  0, // parameters
  // $line_start_arguments parse_groups(funky::parse_line_start_arguments_group)
  func_parse_groups, 1, var_funky__parse_line_start_arguments_group, 1, var_1622_1_line_start_arguments,
  // $error find_first(line_start_arguments is_an_error)
  var_find_first, 2, var_1622_1_line_start_arguments, var_is_an_error, 1, var_1623_1_error,
  // is_an_error
  var_is_an_error, 1, var_1623_1_error, 1, LOCAL(1),
  // if error.is_an_error
  var_if, 3, LOCAL(1), lambda_617, lambda_618, TAIL_CALL,
  POS(1622, 3),
  POS(1623, 3),
  POS(1624, 12),
  POS(1624, 3)
};

static TAB_NUM t_lambda_617[] = {
  0, // locals
  0, // parameters
  //  undefined error
  LET, 2, var_undefined, var_1623_1_error, TAIL_CALL,
  POS(1625, 7)
};

static TAB_NUM t_lambda_618[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, string_1, var_1622_1_line_start_arguments, TAIL_CALL,
  POS(1626, 7)
};

static TAB_NUM t_func_parse_tagged_multiline_arguments_without_prefix[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_1631_1_position,
  // $line_start_arguments parse_groups(funky::parse_line_start_arguments_group)
  func_parse_groups, 1, var_funky__parse_line_start_arguments_group, 1, var_1632_1_line_start_arguments,
  // $error find_first(line_start_arguments is_an_error)
  var_find_first, 2, var_1632_1_line_start_arguments, var_is_an_error, 1, var_1633_1_error,
  // is_an_error
  var_is_an_error, 1, var_1633_1_error, 1, LOCAL(1),
  // if error.is_an_error
  var_if, 3, LOCAL(1), lambda_619, lambda_620, TAIL_CALL,
  POS(1631, 3),
  POS(1632, 3),
  POS(1633, 3),
  POS(1634, 12),
  POS(1634, 3)
};

static TAB_NUM t_lambda_619[] = {
  0, // locals
  0, // parameters
  //  undefined error
  LET, 2, var_undefined, var_1633_1_error, TAIL_CALL,
  POS(1635, 7)
};

static TAB_NUM t_lambda_620[] = {
  1, // locals
  0, // parameters
  // funky_types::function_call
  LET, -3, var_funky_types__function_call, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_1631_1_position, var_funky__arguments_of, var_1632_1_line_start_arguments, LOCAL(1),
  // 
  LET, 2, string_1, LOCAL(1), TAIL_CALL,
  POS(1638, 7),
  POS(1636, 7)
};

static TAB_NUM t_func_parse_remark_and_multiline_function_call_without_prefix[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_1644_1_position,
  // parse_spaced_remark_without_prefix !text $spaced_remark
  func_parse_spaced_remark_without_prefix, 0, 2, var_text, var_1645_42_spaced_remark,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_25_text_is_defined, lambda_625, TAIL_CALL,
  POS(1644, 3),
  POS(1645, 3),
  POS(1647, 10),
  POS(1646, 3)
};

static TAB_NUM t_lambda_25_text_is_defined[] = {
  1, // locals
  0, // parameters
  // text == "@nl;":
  var_std__equal, 2, var_text, string_2, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_621, lambda_624, TAIL_CALL,
  POS(1649, 9),
  POS(1648, 7)
};

static TAB_NUM t_lambda_621[] = {
  1, // locals
  0, // parameters
  // $line_start_arguments parse_groups(funky::parse_line_start_arguments_group)
  func_parse_groups, 1, var_funky__parse_line_start_arguments_group, 1, var_1650_1_line_start_arguments,
  // $error find_first(line_start_arguments is_an_error)
  var_find_first, 2, var_1650_1_line_start_arguments, var_is_an_error, 1, var_1651_1_error,
  // is_an_error
  var_is_an_error, 1, var_1651_1_error, 1, LOCAL(1),
  // if error.is_an_error
  var_if, 3, LOCAL(1), lambda_622, lambda_623, TAIL_CALL,
  POS(1650, 11),
  POS(1651, 11),
  POS(1652, 20),
  POS(1652, 11)
};

static TAB_NUM t_lambda_622[] = {
  0, // locals
  0, // parameters
  //  undefined error
  LET, 2, var_undefined, var_1651_1_error, TAIL_CALL,
  POS(1653, 15)
};

static TAB_NUM t_lambda_623[] = {
  1, // locals
  0, // parameters
  // funky_types::remark_and_multiline_function_call
  LET, -4, var_funky_types__remark_and_multiline_function_call, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_1644_1_position, var_funky__remark_of, var_1645_42_spaced_remark, var_funky__arguments_of, var_1650_1_line_start_arguments, LOCAL(1),
  // 
  LET, 2, string_1, LOCAL(1), TAIL_CALL,
  POS(1656, 15),
  POS(1654, 15)
};

static TAB_NUM t_lambda_624[] = {
  0, // locals
  0, // parameters
  // syntax_error "valid input characters or line end"
  func_syntax_error, 1, str_valid_input_char, TAIL_CALL,
  POS(1662, 11)
};

static TAB_NUM t_lambda_625[] = {
  0, // locals
  0, // parameters
  //  undefined spaced_remark
  LET, 2, var_undefined, var_1645_42_spaced_remark, TAIL_CALL,
  POS(1663, 7)
};

static TAB_NUM t_func_parse_argument[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 9, lambda_626, lambda_629, lambda_631, lambda_633, lambda_635, lambda_637, lambda_640, lambda_642, lambda_645, TAIL_CALL,
  POS(1666, 3)
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
  POS(1669, 9),
  POS(1669, 9),
  POS(1668, 9),
  POS(1667, 7)
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
  POS(1670, 9),
  POS(1670, 9),
  POS(1670, 9)
};

static TAB_NUM t_lambda_628[] = {
  0, // locals
  0, // parameters
  // range &text 3 -1
  var_range, 3, var_text, num_3, minus_num_1, 1, var_text,
  // parse_dummy_definition_without_prefix
  func_parse_dummy_definition_without_prefix, 0, TAIL_CALL,
  POS(1672, 9),
  POS(1673, 9)
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
  POS(1675, 7),
  POS(1675, 7),
  POS(1674, 7)
};

static TAB_NUM t_lambda_630[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_definition_without_prefix
  func_parse_definition_without_prefix, 0, TAIL_CALL,
  POS(1677, 9),
  POS(1678, 9)
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
  POS(1680, 7),
  POS(1680, 7),
  POS(1679, 7)
};

static TAB_NUM t_lambda_632[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_redefinition_without_prefix
  func_parse_redefinition_without_prefix, 0, TAIL_CALL,
  POS(1682, 9),
  POS(1683, 9)
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
  POS(1685, 7),
  POS(1685, 7),
  POS(1684, 7)
};

static TAB_NUM t_lambda_634[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_update_without_prefix
  func_parse_update_without_prefix, 0, TAIL_CALL,
  POS(1687, 9),
  POS(1688, 9)
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
  POS(1690, 7),
  POS(1690, 7),
  POS(1689, 7)
};

static TAB_NUM t_lambda_636[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_body
  func_parse_body, 0, TAIL_CALL,
  POS(1692, 9),
  POS(1693, 9)
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
  POS(1696, 9),
  POS(1696, 9),
  POS(1695, 9),
  POS(1694, 7)
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
  POS(1697, 9),
  POS(1697, 9),
  POS(1697, 9)
};

static TAB_NUM t_lambda_639[] = {
  0, // locals
  0, // parameters
  // range &text 3 -1
  var_range, 3, var_text, num_3, minus_num_1, 1, var_text,
  // parse_return_expression_without_prefix
  func_parse_return_expression_without_prefix, 0, TAIL_CALL,
  POS(1699, 9),
  POS(1700, 9)
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
  POS(1702, 7),
  POS(1702, 7),
  POS(1701, 7)
};

static TAB_NUM t_lambda_641[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_remark_without_prefix
  func_parse_remark_without_prefix, 0, TAIL_CALL,
  POS(1704, 9),
  POS(1705, 9)
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
  POS(1707, 7),
  POS(1707, 7),
  POS(1706, 7)
};

static TAB_NUM t_lambda_643[] = {
  1, // locals
  0, // parameters
  // is_defined
  var_is_defined, 1, var_subgroups, 1, LOCAL(1),
  // subgroups.is_defined
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1707, 41),
  POS(1707, 31)
};

static TAB_NUM t_lambda_644[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_multiline_string_literal_without_prefix
  func_parse_multiline_string_literal_without_prefix, 0, TAIL_CALL,
  POS(1709, 9),
  POS(1710, 9)
};

static TAB_NUM t_lambda_645[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_646, TAIL_CALL,
  POS(1711, 7)
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
  POS(1714, 9),
  POS(1715, 9),
  POS(1716, 9)
};

static TAB_NUM t_func_parse_line_start_arguments[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 29, lambda_647, lambda_649, lambda_652, lambda_654, lambda_656, lambda_659, lambda_662, lambda_664, lambda_667, lambda_670, lambda_672, lambda_675, lambda_678, lambda_681, lambda_684, lambda_687, lambda_690, lambda_693, lambda_695, lambda_698, lambda_700, lambda_703, lambda_706, lambda_709, lambda_712, lambda_714, lambda_716, lambda_718, lambda_720, TAIL_CALL,
  POS(1719, 3)
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
  POS(1721, 7),
  POS(1721, 7),
  POS(1720, 7)
};

static TAB_NUM t_lambda_648[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_body
  func_parse_body, 0, TAIL_CALL,
  POS(1723, 9),
  POS(1724, 9)
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
  POS(1727, 9),
  POS(1727, 9),
  POS(1726, 9),
  POS(1725, 7)
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
  POS(1728, 9),
  POS(1728, 9),
  POS(1728, 9)
};

static TAB_NUM t_lambda_651[] = {
  0, // locals
  0, // parameters
  // range &text 3 -1
  var_range, 3, var_text, num_3, minus_num_1, 1, var_text,
  // parse_return_expression_without_prefix
  func_parse_return_expression_without_prefix, 0, TAIL_CALL,
  POS(1730, 9),
  POS(1731, 9)
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
  POS(1733, 7),
  POS(1733, 7),
  POS(1732, 7)
};

static TAB_NUM t_lambda_653[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_multiline_remark_without_prefix
  func_parse_multiline_remark_without_prefix, 0, TAIL_CALL,
  POS(1735, 9),
  POS(1736, 9)
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
  POS(1738, 7),
  POS(1738, 7),
  POS(1737, 7)
};

static TAB_NUM t_lambda_655[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_attribute_value_pair_without_prefix
  func_parse_attribute_value_pair_without_prefix, 0, TAIL_CALL,
  POS(1740, 9),
  POS(1741, 9)
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
  POS(1744, 9),
  POS(1744, 9),
  POS(1743, 9),
  POS(1742, 7)
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
  POS(1745, 9),
  POS(1745, 9),
  POS(1745, 9)
};

static TAB_NUM t_lambda_658[] = {
  0, // locals
  0, // parameters
  // range &text 3 -1
  var_range, 3, var_text, num_3, minus_num_1, 1, var_text,
  // parse_type_function_without_prefix
  func_parse_type_function_without_prefix, 0, TAIL_CALL,
  POS(1747, 9),
  POS(1748, 9)
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
  POS(1750, 7),
  POS(1750, 7),
  POS(1749, 7)
};

static TAB_NUM t_lambda_660[] = {
  1, // locals
  0, // parameters
  // is_defined
  var_is_defined, 1, var_subgroups, 1, LOCAL(1),
  // subgroups.is_defined
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1750, 41),
  POS(1750, 31)
};

static TAB_NUM t_lambda_661[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_multiline_string_literal_without_prefix
  func_parse_multiline_string_literal_without_prefix, 0, TAIL_CALL,
  POS(1752, 9),
  POS(1753, 9)
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
  POS(1755, 7),
  POS(1755, 7),
  POS(1754, 7)
};

static TAB_NUM t_lambda_663[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_multiline_plus_without_prefix
  func_parse_multiline_plus_without_prefix, 0, TAIL_CALL,
  POS(1757, 9),
  POS(1758, 9)
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
  POS(1761, 9),
  POS(1761, 9),
  POS(1760, 9),
  POS(1759, 7)
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
  POS(1762, 9),
  POS(1762, 9),
  POS(1762, 9)
};

static TAB_NUM t_lambda_666[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_multiline_minus_without_prefix
  func_parse_multiline_minus_without_prefix, 0, TAIL_CALL,
  POS(1764, 9),
  POS(1765, 9)
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
  POS(1768, 9),
  POS(1768, 9),
  POS(1767, 9),
  POS(1766, 7)
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
  POS(1769, 9),
  POS(1769, 9),
  POS(1769, 9)
};

static TAB_NUM t_lambda_669[] = {
  0, // locals
  0, // parameters
  // range &text 3 -1
  var_range, 3, var_text, num_3, minus_num_1, 1, var_text,
  // parse_multiline_minus_with_remark_without_prefix
  func_parse_multiline_minus_with_remark_without_prefix, 0, TAIL_CALL,
  POS(1771, 9),
  POS(1772, 9)
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
  POS(1774, 7),
  POS(1774, 7),
  POS(1773, 7)
};

static TAB_NUM t_lambda_671[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_multiline_times_without_prefix
  func_parse_multiline_times_without_prefix, 0, TAIL_CALL,
  POS(1776, 9),
  POS(1777, 9)
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
  POS(1779, 7),
  POS(1779, 7),
  POS(1778, 7)
};

static TAB_NUM t_lambda_673[] = {
  1, // locals
  0, // parameters
  // is_defined
  var_is_defined, 1, var_subgroups, 1, LOCAL(1),
  // subgroups.is_defined
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1779, 36),
  POS(1779, 26)
};

static TAB_NUM t_lambda_674[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_multiline_over_without_prefix
  func_parse_multiline_over_without_prefix, 0, TAIL_CALL,
  POS(1781, 9),
  POS(1782, 9)
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
  POS(1785, 9),
  POS(1785, 9),
  POS(1784, 9),
  POS(1783, 7)
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
  POS(1786, 9),
  POS(1786, 9),
  POS(1786, 9)
};

static TAB_NUM t_lambda_677[] = {
  0, // locals
  0, // parameters
  // range &text 3 -1
  var_range, 3, var_text, num_3, minus_num_1, 1, var_text,
  // parse_multiline_over_with_remark_without_prefix
  func_parse_multiline_over_with_remark_without_prefix, 0, TAIL_CALL,
  POS(1788, 9),
  POS(1789, 9)
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
  POS(1792, 9),
  POS(1792, 9),
  POS(1791, 9),
  POS(1790, 7)
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
  POS(1793, 9),
  POS(1793, 9),
  POS(1793, 9)
};

static TAB_NUM t_lambda_680[] = {
  0, // locals
  0, // parameters
  // range &text 3 -1
  var_range, 3, var_text, num_3, minus_num_1, 1, var_text,
  // parse_multiline_shift_left_without_prefix
  func_parse_multiline_shift_left_without_prefix, 0, TAIL_CALL,
  POS(1795, 9),
  POS(1796, 9)
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
  POS(1799, 9),
  POS(1799, 9),
  POS(1798, 9),
  POS(1797, 7)
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
  POS(1800, 9),
  POS(1800, 9),
  POS(1800, 9)
};

static TAB_NUM t_lambda_683[] = {
  0, // locals
  0, // parameters
  // range &text 3 -1
  var_range, 3, var_text, num_3, minus_num_1, 1, var_text,
  // parse_multiline_shift_right_without_prefix
  func_parse_multiline_shift_right_without_prefix, 0, TAIL_CALL,
  POS(1802, 9),
  POS(1803, 9)
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
  POS(1806, 9),
  POS(1806, 9),
  POS(1805, 9),
  POS(1804, 7)
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
  POS(1807, 9),
  POS(1807, 9),
  POS(1807, 9)
};

static TAB_NUM t_lambda_686[] = {
  0, // locals
  0, // parameters
  // range &text 3 -1
  var_range, 3, var_text, num_3, minus_num_1, 1, var_text,
  // parse_multiline_equal_without_prefix
  func_parse_multiline_equal_without_prefix, 0, TAIL_CALL,
  POS(1809, 9),
  POS(1810, 9)
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
  POS(1813, 9),
  POS(1813, 9),
  POS(1812, 9),
  POS(1811, 7)
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
  POS(1814, 9),
  POS(1814, 9),
  POS(1814, 9)
};

static TAB_NUM t_lambda_689[] = {
  0, // locals
  0, // parameters
  // range &text 3 -1
  var_range, 3, var_text, num_3, minus_num_1, 1, var_text,
  // parse_multiline_not_equal_without_prefix
  func_parse_multiline_not_equal_without_prefix, 0, TAIL_CALL,
  POS(1816, 9),
  POS(1817, 9)
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
  POS(1820, 9),
  POS(1820, 9),
  POS(1819, 9),
  POS(1818, 7)
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
  POS(1821, 9),
  POS(1821, 9),
  POS(1821, 9)
};

static TAB_NUM t_lambda_692[] = {
  0, // locals
  0, // parameters
  // range &text 3 -1
  var_range, 3, var_text, num_3, minus_num_1, 1, var_text,
  // parse_multiline_less_equal_without_prefix
  func_parse_multiline_less_equal_without_prefix, 0, TAIL_CALL,
  POS(1823, 9),
  POS(1824, 9)
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
  POS(1826, 7),
  POS(1826, 7),
  POS(1825, 7)
};

static TAB_NUM t_lambda_694[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_multiline_less_than_without_prefix
  func_parse_multiline_less_than_without_prefix, 0, TAIL_CALL,
  POS(1828, 9),
  POS(1829, 9)
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
  POS(1832, 9),
  POS(1832, 9),
  POS(1831, 9),
  POS(1830, 7)
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
  POS(1833, 9),
  POS(1833, 9),
  POS(1833, 9)
};

static TAB_NUM t_lambda_697[] = {
  0, // locals
  0, // parameters
  // range &text 3 -1
  var_range, 3, var_text, num_3, minus_num_1, 1, var_text,
  // parse_multiline_greater_equal_without_prefix
  func_parse_multiline_greater_equal_without_prefix, 0, TAIL_CALL,
  POS(1835, 9),
  POS(1836, 9)
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
  POS(1838, 7),
  POS(1838, 7),
  POS(1837, 7)
};

static TAB_NUM t_lambda_699[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_multiline_greater_than_without_prefix
  func_parse_multiline_greater_than_without_prefix, 0, TAIL_CALL,
  POS(1840, 9),
  POS(1841, 9)
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
  POS(1844, 9),
  POS(1844, 9),
  POS(1843, 9),
  POS(1842, 7)
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
  POS(1845, 9),
  POS(1845, 9),
  POS(1845, 9)
};

static TAB_NUM t_lambda_702[] = {
  0, // locals
  0, // parameters
  // range &text 3 -1
  var_range, 3, var_text, num_3, minus_num_1, 1, var_text,
  // parse_multiline_and_without_prefix
  func_parse_multiline_and_without_prefix, 0, TAIL_CALL,
  POS(1847, 9),
  POS(1848, 9)
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
  POS(1851, 9),
  POS(1851, 9),
  POS(1850, 9),
  POS(1849, 7)
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
  POS(1852, 9),
  POS(1852, 9),
  POS(1852, 9)
};

static TAB_NUM t_lambda_705[] = {
  0, // locals
  0, // parameters
  // range &text 3 -1
  var_range, 3, var_text, num_3, minus_num_1, 1, var_text,
  // parse_multiline_or_without_prefix
  func_parse_multiline_or_without_prefix, 0, TAIL_CALL,
  POS(1854, 9),
  POS(1855, 9)
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
  POS(1858, 9),
  POS(1858, 9),
  POS(1857, 9),
  POS(1856, 7)
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
  POS(1859, 9),
  POS(1859, 9),
  POS(1859, 9)
};

static TAB_NUM t_lambda_708[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_multiline_bit_and_without_prefix
  func_parse_multiline_bit_and_without_prefix, 0, TAIL_CALL,
  POS(1861, 9),
  POS(1862, 9)
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
  POS(1865, 9),
  POS(1865, 9),
  POS(1864, 9),
  POS(1863, 7)
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
  POS(1866, 9),
  POS(1866, 9),
  POS(1866, 9)
};

static TAB_NUM t_lambda_711[] = {
  0, // locals
  0, // parameters
  // range &text 3 -1
  var_range, 3, var_text, num_3, minus_num_1, 1, var_text,
  // parse_multiline_bit_and_with_remark_without_prefix
  func_parse_multiline_bit_and_with_remark_without_prefix, 0, TAIL_CALL,
  POS(1868, 9),
  POS(1869, 9)
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
  POS(1871, 7),
  POS(1871, 7),
  POS(1870, 7)
};

static TAB_NUM t_lambda_713[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_multiline_bit_or_without_prefix
  func_parse_multiline_bit_or_without_prefix, 0, TAIL_CALL,
  POS(1873, 9),
  POS(1874, 9)
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
  POS(1876, 7),
  POS(1876, 7),
  POS(1875, 7)
};

static TAB_NUM t_lambda_715[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_multiline_bit_xor_without_prefix
  func_parse_multiline_bit_xor_without_prefix, 0, TAIL_CALL,
  POS(1878, 9),
  POS(1879, 9)
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
  POS(1881, 7),
  POS(1881, 7),
  POS(1880, 7)
};

static TAB_NUM t_lambda_717[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_multiline_assign_without_prefix
  func_parse_multiline_assign_without_prefix, 0, TAIL_CALL,
  POS(1883, 9),
  POS(1884, 9)
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
  POS(1886, 7),
  POS(1886, 7),
  POS(1885, 7)
};

static TAB_NUM t_lambda_719[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_method_value_pair_without_prefix
  func_parse_method_value_pair_without_prefix, 0, TAIL_CALL,
  POS(1888, 9),
  POS(1889, 9)
};

static TAB_NUM t_lambda_720[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_721, TAIL_CALL,
  POS(1890, 7)
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
  POS(1893, 9),
  POS(1894, 9),
  POS(1895, 9)
};

static TAB_NUM t_func_parse_dummy_definition_without_prefix[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_1898_1_position,
  // !str text
  LET, 1, var_text, 1, var_str,
  // parse_name !text $name
  func_parse_name, 0, 2, var_text, var_1900_18_name,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_722, lambda_723, TAIL_CALL,
  POS(1898, 3),
  POS(1899, 3),
  POS(1900, 3),
  POS(1902, 10),
  POS(1901, 3)
};

static TAB_NUM t_lambda_722[] = {
  1, // locals
  0, // parameters
  // funky_types::dummy_definition
  LET, -3, var_funky_types__dummy_definition, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_1898_1_position, var_funky__name_of, var_1900_18_name, LOCAL(1),
  // 
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(1905, 7),
  POS(1903, 7)
};

static TAB_NUM t_lambda_723[] = {
  0, // locals
  0, // parameters
  //  undefined name
  LET, 2, var_undefined, var_1900_18_name, TAIL_CALL,
  POS(1909, 7)
};

static TAB_NUM t_func_parse_variable_without_prefix[] = {
  1, // locals
  0, // parameters
  // $position str
  LET, 1, var_str, 1, var_1912_1_position,
  // parse_more_identifier_characters !text $identifier
  func_parse_more_identifier_characters, 0, 2, var_text, var_1913_40_identifier,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_724, lambda_725, TAIL_CALL,
  POS(1912, 3),
  POS(1913, 3),
  POS(1915, 10),
  POS(1914, 3)
};

static TAB_NUM t_lambda_724[] = {
  1, // locals
  0, // parameters
  // funky_types::variable
  LET, -3, var_funky_types__variable, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_1912_1_position, var_funky__identifier_of, var_1913_40_identifier, LOCAL(1),
  // 
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(1918, 7),
  POS(1916, 7)
};

static TAB_NUM t_lambda_725[] = {
  0, // locals
  0, // parameters
  //  undefined identifier
  LET, 2, var_undefined, var_1913_40_identifier, TAIL_CALL,
  POS(1922, 7)
};

static TAB_NUM t_func_parse_definition_without_prefix[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_1925_1_position,
  // !str text
  LET, 1, var_text, 1, var_str,
  // parse_versioned_identifier !text $versioned_identifier
  func_parse_versioned_identifier, 0, 2, var_text, var_1927_34_versioned_identifier,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_726, lambda_727, TAIL_CALL,
  POS(1925, 3),
  POS(1926, 3),
  POS(1927, 3),
  POS(1929, 10),
  POS(1928, 3)
};

static TAB_NUM t_lambda_726[] = {
  1, // locals
  0, // parameters
  // funky_types::definition
  LET, -3, var_funky_types__definition, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_1925_1_position, var_funky__identifier_of, var_1927_34_versioned_identifier, LOCAL(1),
  // 
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(1932, 7),
  POS(1930, 7)
};

static TAB_NUM t_lambda_727[] = {
  0, // locals
  0, // parameters
  //  undefined versioned_identifier
  LET, 2, var_undefined, var_1927_34_versioned_identifier, TAIL_CALL,
  POS(1936, 7)
};

static TAB_NUM t_func_parse_redefinition_without_prefix[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_1939_1_position,
  // !str text
  LET, 1, var_text, 1, var_str,
  // parse_identifier !text $identifier
  func_parse_identifier, 0, 2, var_text, var_1941_24_identifier,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_26_text_is_defined, lambda_730, TAIL_CALL,
  POS(1939, 3),
  POS(1940, 3),
  POS(1941, 3),
  POS(1943, 10),
  POS(1942, 3)
};

static TAB_NUM t_lambda_26_text_is_defined[] = {
  1, // locals
  0, // parameters
  // parse_inline_extensions !text $inline_extensions
  func_parse_inline_extensions, 0, 2, var_text, var_1944_31_inline_extensions,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_728, lambda_729, TAIL_CALL,
  POS(1944, 7),
  POS(1946, 14),
  POS(1945, 7)
};

static TAB_NUM t_lambda_728[] = {
  1, // locals
  0, // parameters
  // funky_types::redefinition
  LET, -4, var_funky_types__redefinition, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_1939_1_position, var_funky__identifier_of, var_1941_24_identifier, var_funky__extensions_of, var_1944_31_inline_extensions, LOCAL(1),
  // 
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(1949, 11),
  POS(1947, 11)
};

static TAB_NUM t_lambda_729[] = {
  0, // locals
  0, // parameters
  //  undefined inline_extensions
  LET, 2, var_undefined, var_1944_31_inline_extensions, TAIL_CALL,
  POS(1954, 11)
};

static TAB_NUM t_lambda_730[] = {
  0, // locals
  0, // parameters
  //  undefined identifier
  LET, 2, var_undefined, var_1941_24_identifier, TAIL_CALL,
  POS(1955, 7)
};

static TAB_NUM t_func_parse_update_without_prefix[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_1958_1_position,
  // !str text
  LET, 1, var_text, 1, var_str,
  // parse_identifier !text $identifier
  func_parse_identifier, 0, 2, var_text, var_1960_24_identifier,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_27_text_is_defined, lambda_733, TAIL_CALL,
  POS(1958, 3),
  POS(1959, 3),
  POS(1960, 3),
  POS(1962, 10),
  POS(1961, 3)
};

static TAB_NUM t_lambda_27_text_is_defined[] = {
  1, // locals
  0, // parameters
  // parse_inline_extensions !text $inline_extensions
  func_parse_inline_extensions, 0, 2, var_text, var_1963_31_inline_extensions,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_731, lambda_732, TAIL_CALL,
  POS(1963, 7),
  POS(1965, 14),
  POS(1964, 7)
};

static TAB_NUM t_lambda_731[] = {
  1, // locals
  0, // parameters
  // funky_types::update
  LET, -4, var_funky_types__update, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_1958_1_position, var_funky__identifier_of, var_1960_24_identifier, var_funky__extensions_of, var_1963_31_inline_extensions, LOCAL(1),
  // 
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(1968, 11),
  POS(1966, 11)
};

static TAB_NUM t_lambda_732[] = {
  0, // locals
  0, // parameters
  //  undefined inline_extensions
  LET, 2, var_undefined, var_1963_31_inline_extensions, TAIL_CALL,
  POS(1973, 11)
};

static TAB_NUM t_lambda_733[] = {
  0, // locals
  0, // parameters
  //  undefined identifier
  LET, 2, var_undefined, var_1960_24_identifier, TAIL_CALL,
  POS(1974, 7)
};

static TAB_NUM t_func_parse_expression[] = {
  1, // locals
  -1, // parameters
  var_undefined, var_1978_0_derived_node,
  // $position text
  LET, 1, var_text, 1, var_1980_1_position,
  // parse_sequence_expression !text $sequence_expression
  func_parse_sequence_expression, 0, 2, var_text, var_1981_33_sequence_expression,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_28_text_is_defined, lambda_739, TAIL_CALL,
  POS(1980, 3),
  POS(1981, 3),
  POS(1983, 10),
  POS(1982, 3)
};

static TAB_NUM t_lambda_28_text_is_defined[] = {
  1, // locals
  0, // parameters
  // parse_key_value_operator !text $key_value_operator
  func_parse_key_value_operator, 0, 2, var_text, var_1984_32_key_value_operator,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_734, lambda_738, TAIL_CALL,
  POS(1984, 7),
  POS(1986, 14),
  POS(1985, 7)
};

static TAB_NUM t_lambda_734[] = {
  2, // locals
  0, // parameters
  // is_defined || key_value_operator.is_defined
  var_is_defined, 1, var_1978_0_derived_node, 1, LOCAL(1),
  // is_defined || key_value_operator.is_defined
  var_std__or, 2, LOCAL(1), lambda_735, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_736, lambda_737, TAIL_CALL,
  POS(1989, 26),
  POS(1989, 26),
  POS(1988, 11)
};

static TAB_NUM t_lambda_735[] = {
  1, // locals
  0, // parameters
  // is_defined
  var_is_defined, 1, var_1984_32_key_value_operator, 1, LOCAL(1),
  // key_value_operator.is_defined
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1989, 59),
  POS(1989, 40)
};

static TAB_NUM t_lambda_736[] = {
  2, // locals
  0, // parameters
  // default_value(derived_node funky_types::expression)
  var_default_value, 2, var_1978_0_derived_node, var_funky_types__expression, 1, LOCAL(1),
  // default_value(derived_node funky_types::expression)
  LET, -4, LOCAL(1), var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_1980_1_position, var_funky__expression_of, var_1981_33_sequence_expression, var_funky__operator_of, var_1984_32_key_value_operator, LOCAL(2),
  // 
  LET, 2, var_text, LOCAL(2), TAIL_CALL,
  POS(1992, 15),
  POS(1992, 15),
  POS(1990, 15)
};

static TAB_NUM t_lambda_737[] = {
  0, // locals
  0, // parameters
  //  text sequence_expression
  LET, 2, var_text, var_1981_33_sequence_expression, TAIL_CALL,
  POS(1997, 15)
};

static TAB_NUM t_lambda_738[] = {
  0, // locals
  0, // parameters
  //  undefined key_value_operator
  LET, 2, var_undefined, var_1984_32_key_value_operator, TAIL_CALL,
  POS(1998, 11)
};

static TAB_NUM t_lambda_739[] = {
  0, // locals
  0, // parameters
  //  undefined sequence_expression
  LET, 2, var_undefined, var_1981_33_sequence_expression, TAIL_CALL,
  POS(1999, 7)
};

static TAB_NUM t_func_parse_key_value_operator[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 4, lambda_740, lambda_744, lambda_746, lambda_754, TAIL_CALL,
  POS(2002, 3)
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
  POS(2005, 9),
  POS(2005, 9),
  POS(2004, 9),
  POS(2003, 7)
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
  POS(2006, 9),
  POS(2006, 9),
  POS(2004, 9),
  POS(2006, 9)
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
  POS(2007, 9),
  POS(2007, 9),
  POS(2007, 9)
};

static TAB_NUM t_lambda_743[] = {
  0, // locals
  0, // parameters
  // range &text 4 -1
  var_range, 3, var_text, num_4, minus_num_1, 1, var_text,
  // parse_key_value
  func_parse_key_value, 0, TAIL_CALL,
  POS(2009, 9),
  POS(2010, 9)
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
  POS(2012, 7),
  POS(2012, 7),
  POS(2011, 7)
};

static TAB_NUM t_lambda_745[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_key_value
  func_parse_key_value, 0, TAIL_CALL,
  POS(2014, 9),
  POS(2015, 9)
};

static TAB_NUM t_lambda_746[] = {
  3, // locals
  0, // parameters
  // text(1) == ' '
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_747, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_749, TAIL_CALL,
  POS(2018, 9),
  POS(2018, 9),
  POS(2017, 9),
  POS(2016, 7)
};

static TAB_NUM t_lambda_747[] = {
  3, // locals
  0, // parameters
  // text(2) == '='
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '='
  var_std__equal, 2, LOCAL(1), chr_61, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_748, 1, LOCAL(3),
  // text(2) == '='
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(2019, 9),
  POS(2019, 9),
  POS(2017, 9),
  POS(2019, 9)
};

static TAB_NUM t_lambda_748[] = {
  2, // locals
  0, // parameters
  // text(3) == '@nl;'
  var_text, 1, num_3, 1, LOCAL(1),
  // text(3) == '@nl;'
  var_std__equal, 2, LOCAL(1), chr_10, 1, LOCAL(2),
  // text(3) == '@nl;'
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2020, 9),
  POS(2020, 9),
  POS(2020, 9)
};

static TAB_NUM t_lambda_749[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_2022_1_position,
  // $line_start_arguments
  func_parse_groups, 1, var_funky__parse_line_start_arguments_group, 1, var_2023_1_line_start_arguments,
  // $error find_first(line_start_arguments is_an_error)
  var_find_first, 2, var_2023_1_line_start_arguments, var_is_an_error, 1, var_2025_1_error,
  // is_an_error
  var_is_an_error, 1, var_2025_1_error, 1, LOCAL(1),
  // if error.is_an_error
  var_if, 3, LOCAL(1), lambda_750, lambda_751, TAIL_CALL,
  POS(2022, 9),
  POS(2023, 9),
  POS(2025, 9),
  POS(2026, 18),
  POS(2026, 9)
};

static TAB_NUM t_lambda_750[] = {
  0, // locals
  0, // parameters
  //  undefined error
  LET, 2, var_undefined, var_2025_1_error, TAIL_CALL,
  POS(2027, 13)
};

static TAB_NUM t_lambda_751[] = {
  2, // locals
  0, // parameters
  // length_of(line_start_arguments) == 1
  var_length_of, 1, var_2023_1_line_start_arguments, 1, LOCAL(1),
  // length_of(line_start_arguments) == 1
  var_std__equal, 2, LOCAL(1), num_1, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_752, lambda_753, TAIL_CALL,
  POS(2030, 15),
  POS(2030, 15),
  POS(2029, 13)
};

static TAB_NUM t_lambda_752[] = {
  2, // locals
  0, // parameters
  // line_start_arguments(1)
  var_2023_1_line_start_arguments, 1, num_1, 1, LOCAL(1),
  // funky_types::key_value
  LET, -3, var_funky_types__key_value, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_2022_1_position, var_funky__expression_of, LOCAL(1), LOCAL(2),
  // 
  LET, 2, string_1, LOCAL(2), TAIL_CALL,
  POS(2036, 41),
  POS(2033, 17),
  POS(2031, 17)
};

static TAB_NUM t_lambda_753[] = {
  1, // locals
  0, // parameters
  // syntax_error("a single value expected")
  func_syntax_error, 1, str_a_single_value_e, 1, LOCAL(1),
  //  undefined syntax_error("a single value expected")
  LET, 2, var_undefined, LOCAL(1), TAIL_CALL,
  POS(2037, 28),
  POS(2037, 17)
};

static TAB_NUM t_lambda_754[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_755, TAIL_CALL,
  POS(2038, 7)
};

static TAB_NUM t_lambda_755[] = {
  0, // locals
  0, // parameters
  //  text undefined
  LET, 2, var_text, var_undefined, TAIL_CALL,
  POS(2040, 9)
};

static TAB_NUM t_func_parse_key_value[] = {
  0, // locals
  0, // parameters
  // parse_sequence_expression funky_types::key_value
  func_parse_sequence_expression, 1, var_funky_types__key_value, TAIL_CALL,
  POS(2043, 3)
};

static TAB_NUM t_func_parse_sequence_expression[] = {
  1, // locals
  -1, // parameters
  var_undefined, var_2047_0_derived_node,
  // $position text
  LET, 1, var_text, 1, var_2049_1_position,
  // parse_conditional_expression !text $conditional_expression
  func_parse_conditional_expression, 0, 2, var_text, var_2050_36_conditional_expression,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_29_text_is_defined, lambda_761, TAIL_CALL,
  POS(2049, 3),
  POS(2050, 3),
  POS(2052, 10),
  POS(2051, 3)
};

static TAB_NUM t_lambda_29_text_is_defined[] = {
  1, // locals
  0, // parameters
  // parse_comma_operator !text $comma_operator
  func_parse_comma_operator, 0, 2, var_text, var_2053_28_comma_operator,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_756, lambda_760, TAIL_CALL,
  POS(2053, 7),
  POS(2055, 14),
  POS(2054, 7)
};

static TAB_NUM t_lambda_756[] = {
  2, // locals
  0, // parameters
  // is_defined || comma_operator.is_defined
  var_is_defined, 1, var_2047_0_derived_node, 1, LOCAL(1),
  // is_defined || comma_operator.is_defined
  var_std__or, 2, LOCAL(1), lambda_757, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_758, lambda_759, TAIL_CALL,
  POS(2058, 26),
  POS(2058, 26),
  POS(2057, 11)
};

static TAB_NUM t_lambda_757[] = {
  1, // locals
  0, // parameters
  // is_defined
  var_is_defined, 1, var_2053_28_comma_operator, 1, LOCAL(1),
  // comma_operator.is_defined
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(2058, 55),
  POS(2058, 40)
};

static TAB_NUM t_lambda_758[] = {
  2, // locals
  0, // parameters
  // default_value(derived_node funky_types::sequence_expression)
  var_default_value, 2, var_2047_0_derived_node, var_funky_types__sequence_expression, 1, LOCAL(1),
  // default_value(derived_node funky_types::sequence_expression)
  LET, -4, LOCAL(1), var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_2049_1_position, var_funky__expression_of, var_2050_36_conditional_expression, var_funky__operator_of, var_2053_28_comma_operator, LOCAL(2),
  // 
  LET, 2, var_text, LOCAL(2), TAIL_CALL,
  POS(2061, 15),
  POS(2061, 15),
  POS(2059, 15)
};

static TAB_NUM t_lambda_759[] = {
  0, // locals
  0, // parameters
  //  text conditional_expression
  LET, 2, var_text, var_2050_36_conditional_expression, TAIL_CALL,
  POS(2066, 15)
};

static TAB_NUM t_lambda_760[] = {
  0, // locals
  0, // parameters
  //  undefined comma_operator
  LET, 2, var_undefined, var_2053_28_comma_operator, TAIL_CALL,
  POS(2067, 11)
};

static TAB_NUM t_lambda_761[] = {
  0, // locals
  0, // parameters
  //  undefined conditional_expression
  LET, 2, var_undefined, var_2050_36_conditional_expression, TAIL_CALL,
  POS(2068, 7)
};

static TAB_NUM t_func_parse_comma_operator[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 4, lambda_762, lambda_765, lambda_767, lambda_771, TAIL_CALL,
  POS(2071, 3)
};

static TAB_NUM t_lambda_762[] = {
  3, // locals
  0, // parameters
  // text(1) == ','
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == ','
  var_std__equal, 2, LOCAL(1), chr_44, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_763, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_764, TAIL_CALL,
  POS(2074, 9),
  POS(2074, 9),
  POS(2073, 9),
  POS(2072, 7)
};

static TAB_NUM t_lambda_763[] = {
  2, // locals
  0, // parameters
  // text(2) == ' '
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // text(2) == ' '
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2075, 9),
  POS(2075, 9),
  POS(2075, 9)
};

static TAB_NUM t_lambda_764[] = {
  0, // locals
  0, // parameters
  // range &text 3 -1
  var_range, 3, var_text, num_3, minus_num_1, 1, var_text,
  // parse_comma
  func_parse_comma, 0, TAIL_CALL,
  POS(2077, 9),
  POS(2078, 9)
};

static TAB_NUM t_lambda_765[] = {
  2, // locals
  0, // parameters
  // text(1) == ','
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == ','
  var_std__equal, 2, LOCAL(1), chr_44, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_766, TAIL_CALL,
  POS(2080, 7),
  POS(2080, 7),
  POS(2079, 7)
};

static TAB_NUM t_lambda_766[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_comma
  func_parse_comma, 0, TAIL_CALL,
  POS(2082, 9),
  POS(2083, 9)
};

static TAB_NUM t_lambda_767[] = {
  3, // locals
  0, // parameters
  // text(1) == ' '
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_768, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_770, TAIL_CALL,
  POS(2086, 9),
  POS(2086, 9),
  POS(2085, 9),
  POS(2084, 7)
};

static TAB_NUM t_lambda_768[] = {
  3, // locals
  0, // parameters
  // text(2) == ','
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == ','
  var_std__equal, 2, LOCAL(1), chr_44, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_769, 1, LOCAL(3),
  // text(2) == ','
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(2087, 9),
  POS(2087, 9),
  POS(2085, 9),
  POS(2087, 9)
};

static TAB_NUM t_lambda_769[] = {
  2, // locals
  0, // parameters
  // text(3) == ' '
  var_text, 1, num_3, 1, LOCAL(1),
  // text(3) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // text(3) == ' '
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2088, 9),
  POS(2088, 9),
  POS(2088, 9)
};

static TAB_NUM t_lambda_770[] = {
  0, // locals
  0, // parameters
  // range &text 4 -1
  var_range, 3, var_text, num_4, minus_num_1, 1, var_text,
  // parse_comma
  func_parse_comma, 0, TAIL_CALL,
  POS(2090, 9),
  POS(2091, 9)
};

static TAB_NUM t_lambda_771[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_772, TAIL_CALL,
  POS(2092, 7)
};

static TAB_NUM t_lambda_772[] = {
  0, // locals
  0, // parameters
  //  text undefined
  LET, 2, var_text, var_undefined, TAIL_CALL,
  POS(2094, 9)
};

static TAB_NUM t_func_parse_comma[] = {
  0, // locals
  0, // parameters
  // parse_comma_expression funky_types::comma
  func_parse_comma_expression, 1, var_funky_types__comma, TAIL_CALL,
  POS(2097, 3)
};

static TAB_NUM t_func_parse_comma_expression[] = {
  1, // locals
  -1, // parameters
  var_undefined, var_2101_0_derived_node,
  // $position text
  LET, 1, var_text, 1, var_2103_1_position,
  // parse_sequence_expression !text $sequence_expression
  func_parse_sequence_expression, 0, 2, var_text, var_2104_33_sequence_expression,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_30_text_is_defined, lambda_778, TAIL_CALL,
  POS(2103, 3),
  POS(2104, 3),
  POS(2106, 10),
  POS(2105, 3)
};

static TAB_NUM t_lambda_30_text_is_defined[] = {
  1, // locals
  0, // parameters
  // parse_comma_operator !text $comma_operator
  func_parse_comma_operator, 0, 2, var_text, var_2107_28_comma_operator,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_773, lambda_777, TAIL_CALL,
  POS(2107, 7),
  POS(2109, 14),
  POS(2108, 7)
};

static TAB_NUM t_lambda_773[] = {
  2, // locals
  0, // parameters
  // is_defined || comma_operator.is_defined
  var_is_defined, 1, var_2101_0_derived_node, 1, LOCAL(1),
  // is_defined || comma_operator.is_defined
  var_std__or, 2, LOCAL(1), lambda_774, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_775, lambda_776, TAIL_CALL,
  POS(2112, 26),
  POS(2112, 26),
  POS(2111, 11)
};

static TAB_NUM t_lambda_774[] = {
  1, // locals
  0, // parameters
  // is_defined
  var_is_defined, 1, var_2107_28_comma_operator, 1, LOCAL(1),
  // comma_operator.is_defined
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(2112, 55),
  POS(2112, 40)
};

static TAB_NUM t_lambda_775[] = {
  2, // locals
  0, // parameters
  // default_value(derived_node funky_types::expression)
  var_default_value, 2, var_2101_0_derived_node, var_funky_types__expression, 1, LOCAL(1),
  // default_value(derived_node funky_types::expression)
  LET, -4, LOCAL(1), var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_2103_1_position, var_funky__expression_of, var_2104_33_sequence_expression, var_funky__operator_of, var_2107_28_comma_operator, LOCAL(2),
  // 
  LET, 2, var_text, LOCAL(2), TAIL_CALL,
  POS(2115, 15),
  POS(2115, 15),
  POS(2113, 15)
};

static TAB_NUM t_lambda_776[] = {
  0, // locals
  0, // parameters
  //  text sequence_expression
  LET, 2, var_text, var_2104_33_sequence_expression, TAIL_CALL,
  POS(2120, 15)
};

static TAB_NUM t_lambda_777[] = {
  0, // locals
  0, // parameters
  //  undefined comma_operator
  LET, 2, var_undefined, var_2107_28_comma_operator, TAIL_CALL,
  POS(2121, 11)
};

static TAB_NUM t_lambda_778[] = {
  0, // locals
  0, // parameters
  //  undefined sequence_expression
  LET, 2, var_undefined, var_2104_33_sequence_expression, TAIL_CALL,
  POS(2122, 7)
};

static TAB_NUM t_func_parse_conditional_expression[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_2125_1_position,
  // parse_named_operator_expression !text $named_operator_expression
  func_parse_named_operator_expression, 0, 2, var_text, var_2126_39_named_operator_expression,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_31_text_is_defined, lambda_783, TAIL_CALL,
  POS(2125, 3),
  POS(2126, 3),
  POS(2128, 10),
  POS(2127, 3)
};

static TAB_NUM t_lambda_31_text_is_defined[] = {
  1, // locals
  0, // parameters
  // parse_logical_operator !text $logical_operator
  func_parse_logical_operator, 0, 2, var_text, var_2129_30_logical_operator,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_779, lambda_782, TAIL_CALL,
  POS(2129, 7),
  POS(2131, 14),
  POS(2130, 7)
};

static TAB_NUM t_lambda_779[] = {
  1, // locals
  0, // parameters
  // is_defined
  var_is_defined, 1, var_2129_30_logical_operator, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_780, lambda_781, TAIL_CALL,
  POS(2134, 30),
  POS(2133, 11)
};

static TAB_NUM t_lambda_780[] = {
  1, // locals
  0, // parameters
  // funky_types::expression
  LET, -4, var_funky_types__expression, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_2125_1_position, var_funky__expression_of, var_2126_39_named_operator_expression, var_funky__operator_of, var_2129_30_logical_operator, LOCAL(1),
  // 
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(2137, 15),
  POS(2135, 15)
};

static TAB_NUM t_lambda_781[] = {
  0, // locals
  0, // parameters
  //  text named_operator_expression
  LET, 2, var_text, var_2126_39_named_operator_expression, TAIL_CALL,
  POS(2142, 15)
};

static TAB_NUM t_lambda_782[] = {
  0, // locals
  0, // parameters
  //  undefined logical_operator
  LET, 2, var_undefined, var_2129_30_logical_operator, TAIL_CALL,
  POS(2143, 11)
};

static TAB_NUM t_lambda_783[] = {
  0, // locals
  0, // parameters
  //  undefined named_operator_expression
  LET, 2, var_undefined, var_2126_39_named_operator_expression, TAIL_CALL,
  POS(2144, 7)
};

static TAB_NUM t_func_parse_logical_operator[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 3, lambda_784, lambda_789, lambda_794, TAIL_CALL,
  POS(2147, 3)
};

static TAB_NUM t_lambda_784[] = {
  3, // locals
  0, // parameters
  // text(1) == ' '
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_785, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_788, TAIL_CALL,
  POS(2150, 9),
  POS(2150, 9),
  POS(2149, 9),
  POS(2148, 7)
};

static TAB_NUM t_lambda_785[] = {
  3, // locals
  0, // parameters
  // text(2) == '&'
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '&'
  var_std__equal, 2, LOCAL(1), chr_38, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_786, 1, LOCAL(3),
  // text(2) == '&'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(2151, 9),
  POS(2151, 9),
  POS(2149, 9),
  POS(2151, 9)
};

static TAB_NUM t_lambda_786[] = {
  3, // locals
  0, // parameters
  // text(3) == '&'
  var_text, 1, num_3, 1, LOCAL(1),
  // text(3) == '&'
  var_std__equal, 2, LOCAL(1), chr_38, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_787, 1, LOCAL(3),
  // text(3) == '&'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(2152, 9),
  POS(2152, 9),
  POS(2149, 9),
  POS(2152, 9)
};

static TAB_NUM t_lambda_787[] = {
  2, // locals
  0, // parameters
  // text(4) == ' '
  var_text, 1, num_4, 1, LOCAL(1),
  // text(4) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // text(4) == ' '
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2153, 9),
  POS(2153, 9),
  POS(2153, 9)
};

static TAB_NUM t_lambda_788[] = {
  0, // locals
  0, // parameters
  // range &text 5 -1
  var_range, 3, var_text, num_5, minus_num_1, 1, var_text,
  // parse_and
  func_parse_and, 0, TAIL_CALL,
  POS(2155, 9),
  POS(2156, 9)
};

static TAB_NUM t_lambda_789[] = {
  3, // locals
  0, // parameters
  // text(1) == ' '
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_790, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_793, TAIL_CALL,
  POS(2159, 9),
  POS(2159, 9),
  POS(2158, 9),
  POS(2157, 7)
};

static TAB_NUM t_lambda_790[] = {
  3, // locals
  0, // parameters
  // text(2) == '|'
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '|'
  var_std__equal, 2, LOCAL(1), chr_124, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_791, 1, LOCAL(3),
  // text(2) == '|'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(2160, 9),
  POS(2160, 9),
  POS(2158, 9),
  POS(2160, 9)
};

static TAB_NUM t_lambda_791[] = {
  3, // locals
  0, // parameters
  // text(3) == '|'
  var_text, 1, num_3, 1, LOCAL(1),
  // text(3) == '|'
  var_std__equal, 2, LOCAL(1), chr_124, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_792, 1, LOCAL(3),
  // text(3) == '|'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(2161, 9),
  POS(2161, 9),
  POS(2158, 9),
  POS(2161, 9)
};

static TAB_NUM t_lambda_792[] = {
  2, // locals
  0, // parameters
  // text(4) == ' '
  var_text, 1, num_4, 1, LOCAL(1),
  // text(4) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // text(4) == ' '
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2162, 9),
  POS(2162, 9),
  POS(2162, 9)
};

static TAB_NUM t_lambda_793[] = {
  0, // locals
  0, // parameters
  // range &text 5 -1
  var_range, 3, var_text, num_5, minus_num_1, 1, var_text,
  // parse_or
  func_parse_or, 0, TAIL_CALL,
  POS(2164, 9),
  POS(2165, 9)
};

static TAB_NUM t_lambda_794[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_795, TAIL_CALL,
  POS(2166, 7)
};

static TAB_NUM t_lambda_795[] = {
  0, // locals
  0, // parameters
  //  text undefined
  LET, 2, var_text, var_undefined, TAIL_CALL,
  POS(2168, 9)
};

static TAB_NUM t_func_parse_and[] = {
  0, // locals
  0, // parameters
  // parse_and_expression funky_types::and
  func_parse_and_expression, 1, var_funky_types__and, TAIL_CALL,
  POS(2171, 3)
};

static TAB_NUM t_func_parse_and_expression[] = {
  1, // locals
  -1, // parameters
  var_undefined, var_2175_0_derived_node,
  // $position text
  LET, 1, var_text, 1, var_2177_1_position,
  // parse_named_operator_expression !text $named_operator_expression
  func_parse_named_operator_expression, 0, 2, var_text, var_2178_39_named_operator_expression,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_32_text_is_defined, lambda_801, TAIL_CALL,
  POS(2177, 3),
  POS(2178, 3),
  POS(2180, 10),
  POS(2179, 3)
};

static TAB_NUM t_lambda_32_text_is_defined[] = {
  1, // locals
  0, // parameters
  // parse_and_operator !text $and_operator
  func_parse_and_operator, 0, 2, var_text, var_2181_26_and_operator,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_796, lambda_800, TAIL_CALL,
  POS(2181, 7),
  POS(2183, 14),
  POS(2182, 7)
};

static TAB_NUM t_lambda_796[] = {
  2, // locals
  0, // parameters
  // is_defined || and_operator.is_defined
  var_is_defined, 1, var_2175_0_derived_node, 1, LOCAL(1),
  // is_defined || and_operator.is_defined
  var_std__or, 2, LOCAL(1), lambda_797, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_798, lambda_799, TAIL_CALL,
  POS(2186, 26),
  POS(2186, 26),
  POS(2185, 11)
};

static TAB_NUM t_lambda_797[] = {
  1, // locals
  0, // parameters
  // is_defined
  var_is_defined, 1, var_2181_26_and_operator, 1, LOCAL(1),
  // and_operator.is_defined
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(2186, 53),
  POS(2186, 40)
};

static TAB_NUM t_lambda_798[] = {
  2, // locals
  0, // parameters
  // default_value(derived_node funky_types::expression)
  var_default_value, 2, var_2175_0_derived_node, var_funky_types__expression, 1, LOCAL(1),
  // default_value(derived_node funky_types::expression)
  LET, -4, LOCAL(1), var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_2177_1_position, var_funky__expression_of, var_2178_39_named_operator_expression, var_funky__operator_of, var_2181_26_and_operator, LOCAL(2),
  // 
  LET, 2, var_text, LOCAL(2), TAIL_CALL,
  POS(2189, 15),
  POS(2189, 15),
  POS(2187, 15)
};

static TAB_NUM t_lambda_799[] = {
  0, // locals
  0, // parameters
  //  text named_operator_expression
  LET, 2, var_text, var_2178_39_named_operator_expression, TAIL_CALL,
  POS(2194, 15)
};

static TAB_NUM t_lambda_800[] = {
  0, // locals
  0, // parameters
  //  undefined and_operator
  LET, 2, var_undefined, var_2181_26_and_operator, TAIL_CALL,
  POS(2195, 11)
};

static TAB_NUM t_lambda_801[] = {
  0, // locals
  0, // parameters
  //  undefined named_operator_expression
  LET, 2, var_undefined, var_2178_39_named_operator_expression, TAIL_CALL,
  POS(2196, 7)
};

static TAB_NUM t_func_parse_and_operator[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 2, lambda_802, lambda_807, TAIL_CALL,
  POS(2199, 3)
};

static TAB_NUM t_lambda_802[] = {
  3, // locals
  0, // parameters
  // text(1) == ' '
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_803, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_806, TAIL_CALL,
  POS(2202, 9),
  POS(2202, 9),
  POS(2201, 9),
  POS(2200, 7)
};

static TAB_NUM t_lambda_803[] = {
  3, // locals
  0, // parameters
  // text(2) == '&'
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '&'
  var_std__equal, 2, LOCAL(1), chr_38, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_804, 1, LOCAL(3),
  // text(2) == '&'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(2203, 9),
  POS(2203, 9),
  POS(2201, 9),
  POS(2203, 9)
};

static TAB_NUM t_lambda_804[] = {
  3, // locals
  0, // parameters
  // text(3) == '&'
  var_text, 1, num_3, 1, LOCAL(1),
  // text(3) == '&'
  var_std__equal, 2, LOCAL(1), chr_38, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_805, 1, LOCAL(3),
  // text(3) == '&'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(2204, 9),
  POS(2204, 9),
  POS(2201, 9),
  POS(2204, 9)
};

static TAB_NUM t_lambda_805[] = {
  2, // locals
  0, // parameters
  // text(4) == ' '
  var_text, 1, num_4, 1, LOCAL(1),
  // text(4) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // text(4) == ' '
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2205, 9),
  POS(2205, 9),
  POS(2205, 9)
};

static TAB_NUM t_lambda_806[] = {
  0, // locals
  0, // parameters
  // range &text 5 -1
  var_range, 3, var_text, num_5, minus_num_1, 1, var_text,
  // parse_and
  func_parse_and, 0, TAIL_CALL,
  POS(2207, 9),
  POS(2208, 9)
};

static TAB_NUM t_lambda_807[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_808, TAIL_CALL,
  POS(2209, 7)
};

static TAB_NUM t_lambda_808[] = {
  0, // locals
  0, // parameters
  //  text undefined
  LET, 2, var_text, var_undefined, TAIL_CALL,
  POS(2211, 9)
};

static TAB_NUM t_func_parse_or[] = {
  0, // locals
  0, // parameters
  // parse_or_expression funky_types::or
  func_parse_or_expression, 1, var_funky_types__or, TAIL_CALL,
  POS(2214, 3)
};

static TAB_NUM t_func_parse_or_expression[] = {
  1, // locals
  -1, // parameters
  var_undefined, var_2218_0_derived_node,
  // $position text
  LET, 1, var_text, 1, var_2220_1_position,
  // parse_named_operator_expression !text $named_operator_expression
  func_parse_named_operator_expression, 0, 2, var_text, var_2221_39_named_operator_expression,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_33_text_is_defined, lambda_814, TAIL_CALL,
  POS(2220, 3),
  POS(2221, 3),
  POS(2223, 10),
  POS(2222, 3)
};

static TAB_NUM t_lambda_33_text_is_defined[] = {
  1, // locals
  0, // parameters
  // parse_or_operator !text $or_operator
  func_parse_or_operator, 0, 2, var_text, var_2224_25_or_operator,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_809, lambda_813, TAIL_CALL,
  POS(2224, 7),
  POS(2226, 14),
  POS(2225, 7)
};

static TAB_NUM t_lambda_809[] = {
  2, // locals
  0, // parameters
  // is_defined || or_operator.is_defined
  var_is_defined, 1, var_2218_0_derived_node, 1, LOCAL(1),
  // is_defined || or_operator.is_defined
  var_std__or, 2, LOCAL(1), lambda_810, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_811, lambda_812, TAIL_CALL,
  POS(2229, 26),
  POS(2229, 26),
  POS(2228, 11)
};

static TAB_NUM t_lambda_810[] = {
  1, // locals
  0, // parameters
  // is_defined
  var_is_defined, 1, var_2224_25_or_operator, 1, LOCAL(1),
  // or_operator.is_defined
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(2229, 52),
  POS(2229, 40)
};

static TAB_NUM t_lambda_811[] = {
  2, // locals
  0, // parameters
  // default_value(derived_node funky_types::expression)
  var_default_value, 2, var_2218_0_derived_node, var_funky_types__expression, 1, LOCAL(1),
  // default_value(derived_node funky_types::expression)
  LET, -4, LOCAL(1), var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_2220_1_position, var_funky__expression_of, var_2221_39_named_operator_expression, var_funky__operator_of, var_2224_25_or_operator, LOCAL(2),
  // 
  LET, 2, var_text, LOCAL(2), TAIL_CALL,
  POS(2232, 15),
  POS(2232, 15),
  POS(2230, 15)
};

static TAB_NUM t_lambda_812[] = {
  0, // locals
  0, // parameters
  //  text named_operator_expression
  LET, 2, var_text, var_2221_39_named_operator_expression, TAIL_CALL,
  POS(2237, 15)
};

static TAB_NUM t_lambda_813[] = {
  0, // locals
  0, // parameters
  //  undefined or_operator
  LET, 2, var_undefined, var_2224_25_or_operator, TAIL_CALL,
  POS(2238, 11)
};

static TAB_NUM t_lambda_814[] = {
  0, // locals
  0, // parameters
  //  undefined named_operator_expression
  LET, 2, var_undefined, var_2221_39_named_operator_expression, TAIL_CALL,
  POS(2239, 7)
};

static TAB_NUM t_func_parse_or_operator[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 2, lambda_815, lambda_820, TAIL_CALL,
  POS(2242, 3)
};

static TAB_NUM t_lambda_815[] = {
  3, // locals
  0, // parameters
  // text(1) == ' '
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_816, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_819, TAIL_CALL,
  POS(2245, 9),
  POS(2245, 9),
  POS(2244, 9),
  POS(2243, 7)
};

static TAB_NUM t_lambda_816[] = {
  3, // locals
  0, // parameters
  // text(2) == '|'
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '|'
  var_std__equal, 2, LOCAL(1), chr_124, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_817, 1, LOCAL(3),
  // text(2) == '|'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(2246, 9),
  POS(2246, 9),
  POS(2244, 9),
  POS(2246, 9)
};

static TAB_NUM t_lambda_817[] = {
  3, // locals
  0, // parameters
  // text(3) == '|'
  var_text, 1, num_3, 1, LOCAL(1),
  // text(3) == '|'
  var_std__equal, 2, LOCAL(1), chr_124, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_818, 1, LOCAL(3),
  // text(3) == '|'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(2247, 9),
  POS(2247, 9),
  POS(2244, 9),
  POS(2247, 9)
};

static TAB_NUM t_lambda_818[] = {
  2, // locals
  0, // parameters
  // text(4) == ' '
  var_text, 1, num_4, 1, LOCAL(1),
  // text(4) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // text(4) == ' '
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2248, 9),
  POS(2248, 9),
  POS(2248, 9)
};

static TAB_NUM t_lambda_819[] = {
  0, // locals
  0, // parameters
  // range &text 5 -1
  var_range, 3, var_text, num_5, minus_num_1, 1, var_text,
  // parse_or
  func_parse_or, 0, TAIL_CALL,
  POS(2250, 9),
  POS(2251, 9)
};

static TAB_NUM t_lambda_820[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_821, TAIL_CALL,
  POS(2252, 7)
};

static TAB_NUM t_lambda_821[] = {
  0, // locals
  0, // parameters
  //  text undefined
  LET, 2, var_text, var_undefined, TAIL_CALL,
  POS(2254, 9)
};

static TAB_NUM t_func_parse_named_operator_expression[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_2257_1_position,
  // parse_range_expression !text $range_expression
  func_parse_range_expression, 0, 2, var_text, var_2258_30_range_expression,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_34_text_is_defined, lambda_826, TAIL_CALL,
  POS(2257, 3),
  POS(2258, 3),
  POS(2260, 10),
  POS(2259, 3)
};

static TAB_NUM t_lambda_34_text_is_defined[] = {
  1, // locals
  0, // parameters
  // parse_optional_named_operator !text $optional_named_operator
  func_parse_optional_named_operator, 0, 2, var_text, var_2261_37_optional_named_operator,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_822, lambda_825, TAIL_CALL,
  POS(2261, 7),
  POS(2263, 14),
  POS(2262, 7)
};

static TAB_NUM t_lambda_822[] = {
  1, // locals
  0, // parameters
  // is_defined
  var_is_defined, 1, var_2261_37_optional_named_operator, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_823, lambda_824, TAIL_CALL,
  POS(2266, 37),
  POS(2265, 11)
};

static TAB_NUM t_lambda_823[] = {
  6, // locals
  0, // parameters
  // funky::identifier_of(optional_named_operator)
  var_funky__identifier_of, 1, var_2261_37_optional_named_operator, 1, LOCAL(1),
  // funky::expression_of(optional_named_operator)
  var_funky__expression_of, 1, var_2261_37_optional_named_operator, 1, LOCAL(2),
  // list
  var_list, 2, var_2258_30_range_expression, LOCAL(2), 1, LOCAL(3),
  // funky_types::function_call
  LET, -3, var_funky_types__function_call, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_2257_1_position, var_funky__arguments_of, LOCAL(3), LOCAL(4),
  // list
  var_list, 1, LOCAL(4), 1, LOCAL(5),
  // funky_types::functor
  LET, -4, var_funky_types__functor, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_2257_1_position, var_funky__identifier_of, LOCAL(1), var_funky__extensions_of, LOCAL(5), LOCAL(6),
  // 
  LET, 2, var_text, LOCAL(6), TAIL_CALL,
  POS(2273, 19),
  POS(2282, 27),
  POS(2280, 25),
  POS(2276, 21),
  POS(2275, 19),
  POS(2269, 15),
  POS(2267, 15)
};

static TAB_NUM t_lambda_824[] = {
  0, // locals
  0, // parameters
  //  text range_expression
  LET, 2, var_text, var_2258_30_range_expression, TAIL_CALL,
  POS(2283, 15)
};

static TAB_NUM t_lambda_825[] = {
  0, // locals
  0, // parameters
  //  undefined optional_named_operator
  LET, 2, var_undefined, var_2261_37_optional_named_operator, TAIL_CALL,
  POS(2284, 11)
};

static TAB_NUM t_lambda_826[] = {
  0, // locals
  0, // parameters
  //  undefined range_expression
  LET, 2, var_undefined, var_2258_30_range_expression, TAIL_CALL,
  POS(2285, 7)
};

static TAB_NUM t_func_parse_optional_named_operator[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 2, lambda_827, lambda_830, TAIL_CALL,
  POS(2288, 3)
};

static TAB_NUM t_lambda_827[] = {
  3, // locals
  0, // parameters
  // text(1) == ' '
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_828, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_829, TAIL_CALL,
  POS(2291, 9),
  POS(2291, 9),
  POS(2290, 9),
  POS(2289, 7)
};

static TAB_NUM t_lambda_828[] = {
  2, // locals
  0, // parameters
  // text(2) == '.'
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '.'
  var_std__equal, 2, LOCAL(1), chr_46, 1, LOCAL(2),
  // text(2) == '.'
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2292, 9),
  POS(2292, 9),
  POS(2292, 9)
};

static TAB_NUM t_lambda_829[] = {
  0, // locals
  0, // parameters
  // range &text 3 -1
  var_range, 3, var_text, num_3, minus_num_1, 1, var_text,
  // parse_named_operator_without_prefix
  func_parse_named_operator_without_prefix, 0, TAIL_CALL,
  POS(2294, 9),
  POS(2295, 9)
};

static TAB_NUM t_lambda_830[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_831, TAIL_CALL,
  POS(2296, 7)
};

static TAB_NUM t_lambda_831[] = {
  0, // locals
  0, // parameters
  //  text undefined
  LET, 2, var_text, var_undefined, TAIL_CALL,
  POS(2298, 9)
};

static TAB_NUM t_func_parse_named_operator_without_prefix[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_2301_1_position,
  // !str text
  LET, 1, var_text, 1, var_str,
  // parse_identifier !text $identifier
  func_parse_identifier, 0, 2, var_text, var_2303_24_identifier,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_35_text_is_defined, lambda_838, TAIL_CALL,
  POS(2301, 3),
  POS(2302, 3),
  POS(2303, 3),
  POS(2305, 10),
  POS(2304, 3)
};

static TAB_NUM t_lambda_35_text_is_defined[] = {
  2, // locals
  0, // parameters
  // text(1) == '.':
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '.':
  var_std__equal, 2, LOCAL(1), chr_46, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_832, lambda_837, TAIL_CALL,
  POS(2307, 9),
  POS(2307, 9),
  POS(2306, 7)
};

static TAB_NUM t_lambda_832[] = {
  2, // locals
  0, // parameters
  // text(2) == ' ':
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == ' ':
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_833, lambda_836, TAIL_CALL,
  POS(2309, 13),
  POS(2309, 13),
  POS(2308, 11)
};

static TAB_NUM t_lambda_833[] = {
  1, // locals
  0, // parameters
  // range &text 3 -1
  var_range, 3, var_text, num_3, minus_num_1, 1, var_text,
  // parse_range_expression !text $range_expression
  func_parse_range_expression, 0, 2, var_text, var_2311_30_range_expression,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_834, lambda_835, TAIL_CALL,
  POS(2310, 15),
  POS(2311, 15),
  POS(2313, 22),
  POS(2312, 15)
};

static TAB_NUM t_lambda_834[] = {
  1, // locals
  0, // parameters
  // funky_types::named_operator
  LET, -4, var_funky_types__named_operator, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_2301_1_position, var_funky__identifier_of, var_2303_24_identifier, var_funky__expression_of, var_2311_30_range_expression, LOCAL(1),
  // 
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(2316, 19),
  POS(2314, 19)
};

static TAB_NUM t_lambda_835[] = {
  0, // locals
  0, // parameters
  //  undefined range_expression
  LET, 2, var_undefined, var_2311_30_range_expression, TAIL_CALL,
  POS(2321, 19)
};

static TAB_NUM t_lambda_836[] = {
  0, // locals
  0, // parameters
  // syntax_error "space character"
  func_syntax_error, 1, str_space_character, TAIL_CALL,
  POS(2323, 15)
};

static TAB_NUM t_lambda_837[] = {
  0, // locals
  0, // parameters
  // syntax_error "'.'"
  func_syntax_error, 1, string_5, TAIL_CALL,
  POS(2325, 11)
};

static TAB_NUM t_lambda_838[] = {
  0, // locals
  0, // parameters
  //  undefined identifier
  LET, 2, var_undefined, var_2303_24_identifier, TAIL_CALL,
  POS(2326, 7)
};

static TAB_NUM t_func_parse_range_expression[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_2329_1_position,
  // parse_relational_expression !text $relational_expression
  func_parse_relational_expression, 0, 2, var_text, var_2330_35_relational_expression,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_36_text_is_defined, lambda_843, TAIL_CALL,
  POS(2329, 3),
  POS(2330, 3),
  POS(2332, 10),
  POS(2331, 3)
};

static TAB_NUM t_lambda_36_text_is_defined[] = {
  1, // locals
  0, // parameters
  // parse_range_operator !text $range_operator
  func_parse_range_operator, 0, 2, var_text, var_2333_28_range_operator,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_839, lambda_842, TAIL_CALL,
  POS(2333, 7),
  POS(2335, 14),
  POS(2334, 7)
};

static TAB_NUM t_lambda_839[] = {
  1, // locals
  0, // parameters
  // is_defined
  var_is_defined, 1, var_2333_28_range_operator, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_840, lambda_841, TAIL_CALL,
  POS(2338, 28),
  POS(2337, 11)
};

static TAB_NUM t_lambda_840[] = {
  1, // locals
  0, // parameters
  // funky_types::expression
  LET, -4, var_funky_types__expression, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_2329_1_position, var_funky__expression_of, var_2330_35_relational_expression, var_funky__operator_of, var_2333_28_range_operator, LOCAL(1),
  // 
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(2341, 15),
  POS(2339, 15)
};

static TAB_NUM t_lambda_841[] = {
  0, // locals
  0, // parameters
  //  text relational_expression
  LET, 2, var_text, var_2330_35_relational_expression, TAIL_CALL,
  POS(2346, 15)
};

static TAB_NUM t_lambda_842[] = {
  0, // locals
  0, // parameters
  //  undefined range_operator
  LET, 2, var_undefined, var_2333_28_range_operator, TAIL_CALL,
  POS(2347, 11)
};

static TAB_NUM t_lambda_843[] = {
  0, // locals
  0, // parameters
  //  undefined relational_expression
  LET, 2, var_undefined, var_2330_35_relational_expression, TAIL_CALL,
  POS(2348, 7)
};

static TAB_NUM t_func_parse_range_operator[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 3, lambda_844, lambda_847, lambda_852, TAIL_CALL,
  POS(2351, 3)
};

static TAB_NUM t_lambda_844[] = {
  3, // locals
  0, // parameters
  // text(1) == '.'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '.'
  var_std__equal, 2, LOCAL(1), chr_46, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_845, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_846, TAIL_CALL,
  POS(2354, 9),
  POS(2354, 9),
  POS(2353, 9),
  POS(2352, 7)
};

static TAB_NUM t_lambda_845[] = {
  2, // locals
  0, // parameters
  // text(2) == '.'
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '.'
  var_std__equal, 2, LOCAL(1), chr_46, 1, LOCAL(2),
  // text(2) == '.'
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2355, 9),
  POS(2355, 9),
  POS(2355, 9)
};

static TAB_NUM t_lambda_846[] = {
  0, // locals
  0, // parameters
  // range &text 3 -1
  var_range, 3, var_text, num_3, minus_num_1, 1, var_text,
  // parse_range
  func_parse_range, 0, TAIL_CALL,
  POS(2357, 9),
  POS(2358, 9)
};

static TAB_NUM t_lambda_847[] = {
  3, // locals
  0, // parameters
  // text(1) == ' '
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_848, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_851, TAIL_CALL,
  POS(2361, 9),
  POS(2361, 9),
  POS(2360, 9),
  POS(2359, 7)
};

static TAB_NUM t_lambda_848[] = {
  3, // locals
  0, // parameters
  // text(2) == '.'
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '.'
  var_std__equal, 2, LOCAL(1), chr_46, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_849, 1, LOCAL(3),
  // text(2) == '.'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(2362, 9),
  POS(2362, 9),
  POS(2360, 9),
  POS(2362, 9)
};

static TAB_NUM t_lambda_849[] = {
  3, // locals
  0, // parameters
  // text(3) == '.'
  var_text, 1, num_3, 1, LOCAL(1),
  // text(3) == '.'
  var_std__equal, 2, LOCAL(1), chr_46, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_850, 1, LOCAL(3),
  // text(3) == '.'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(2363, 9),
  POS(2363, 9),
  POS(2360, 9),
  POS(2363, 9)
};

static TAB_NUM t_lambda_850[] = {
  2, // locals
  0, // parameters
  // text(4) == ' '
  var_text, 1, num_4, 1, LOCAL(1),
  // text(4) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // text(4) == ' '
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2364, 9),
  POS(2364, 9),
  POS(2364, 9)
};

static TAB_NUM t_lambda_851[] = {
  0, // locals
  0, // parameters
  // range &text 5 -1
  var_range, 3, var_text, num_5, minus_num_1, 1, var_text,
  // parse_range
  func_parse_range, 0, TAIL_CALL,
  POS(2366, 9),
  POS(2367, 9)
};

static TAB_NUM t_lambda_852[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_853, TAIL_CALL,
  POS(2368, 7)
};

static TAB_NUM t_lambda_853[] = {
  0, // locals
  0, // parameters
  //  text undefined
  LET, 2, var_text, var_undefined, TAIL_CALL,
  POS(2370, 9)
};

static TAB_NUM t_func_parse_range[] = {
  0, // locals
  0, // parameters
  // parse_relational_expression funky_types::range
  func_parse_relational_expression, 1, var_funky_types__range, TAIL_CALL,
  POS(2373, 3)
};

static TAB_NUM t_func_parse_relational_expression[] = {
  1, // locals
  -1, // parameters
  var_undefined, var_2377_0_derived_node,
  // $position text
  LET, 1, var_text, 1, var_2379_1_position,
  // parse_bit_expression !text $bit_expression
  func_parse_bit_expression, 0, 2, var_text, var_2380_28_bit_expression,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_37_text_is_defined, lambda_859, TAIL_CALL,
  POS(2379, 3),
  POS(2380, 3),
  POS(2382, 10),
  POS(2381, 3)
};

static TAB_NUM t_lambda_37_text_is_defined[] = {
  1, // locals
  0, // parameters
  // parse_comparison_operator !text $comparison_operator
  func_parse_comparison_operator, 0, 2, var_text, var_2383_33_comparison_operator,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_854, lambda_858, TAIL_CALL,
  POS(2383, 7),
  POS(2385, 14),
  POS(2384, 7)
};

static TAB_NUM t_lambda_854[] = {
  2, // locals
  0, // parameters
  // is_defined || comparison_operator.is_defined
  var_is_defined, 1, var_2377_0_derived_node, 1, LOCAL(1),
  // is_defined || comparison_operator.is_defined
  var_std__or, 2, LOCAL(1), lambda_855, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_856, lambda_857, TAIL_CALL,
  POS(2388, 26),
  POS(2388, 26),
  POS(2387, 11)
};

static TAB_NUM t_lambda_855[] = {
  1, // locals
  0, // parameters
  // is_defined
  var_is_defined, 1, var_2383_33_comparison_operator, 1, LOCAL(1),
  // comparison_operator.is_defined
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(2388, 60),
  POS(2388, 40)
};

static TAB_NUM t_lambda_856[] = {
  2, // locals
  0, // parameters
  // default_value(derived_node funky_types::expression)
  var_default_value, 2, var_2377_0_derived_node, var_funky_types__expression, 1, LOCAL(1),
  // default_value(derived_node funky_types::expression)
  LET, -4, LOCAL(1), var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_2379_1_position, var_funky__expression_of, var_2380_28_bit_expression, var_funky__operator_of, var_2383_33_comparison_operator, LOCAL(2),
  // 
  LET, 2, var_text, LOCAL(2), TAIL_CALL,
  POS(2391, 15),
  POS(2391, 15),
  POS(2389, 15)
};

static TAB_NUM t_lambda_857[] = {
  0, // locals
  0, // parameters
  //  text bit_expression
  LET, 2, var_text, var_2380_28_bit_expression, TAIL_CALL,
  POS(2396, 15)
};

static TAB_NUM t_lambda_858[] = {
  0, // locals
  0, // parameters
  //  undefined comparison_operator
  LET, 2, var_undefined, var_2383_33_comparison_operator, TAIL_CALL,
  POS(2397, 11)
};

static TAB_NUM t_lambda_859[] = {
  0, // locals
  0, // parameters
  //  undefined bit_expression
  LET, 2, var_undefined, var_2380_28_bit_expression, TAIL_CALL,
  POS(2398, 7)
};

static TAB_NUM t_func_parse_comparison_operator[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 13, lambda_860, lambda_865, lambda_868, lambda_873, lambda_876, lambda_881, lambda_884, lambda_888, lambda_890, lambda_895, lambda_898, lambda_902, lambda_904, TAIL_CALL,
  POS(2401, 3)
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
  POS(2404, 9),
  POS(2404, 9),
  POS(2403, 9),
  POS(2402, 7)
};

static TAB_NUM t_lambda_861[] = {
  3, // locals
  0, // parameters
  // text(2) == '='
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '='
  var_std__equal, 2, LOCAL(1), chr_61, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_862, 1, LOCAL(3),
  // text(2) == '='
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(2405, 9),
  POS(2405, 9),
  POS(2403, 9),
  POS(2405, 9)
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
  POS(2406, 9),
  POS(2406, 9),
  POS(2403, 9),
  POS(2406, 9)
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
  POS(2407, 9),
  POS(2407, 9),
  POS(2407, 9)
};

static TAB_NUM t_lambda_864[] = {
  0, // locals
  0, // parameters
  // range &text 5 -1
  var_range, 3, var_text, num_5, minus_num_1, 1, var_text,
  // parse_equal
  func_parse_equal, 0, TAIL_CALL,
  POS(2409, 9),
  POS(2410, 9)
};

static TAB_NUM t_lambda_865[] = {
  3, // locals
  0, // parameters
  // text(1) == '='
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '='
  var_std__equal, 2, LOCAL(1), chr_61, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_866, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_867, TAIL_CALL,
  POS(2413, 9),
  POS(2413, 9),
  POS(2412, 9),
  POS(2411, 7)
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
  POS(2414, 9),
  POS(2414, 9),
  POS(2414, 9)
};

static TAB_NUM t_lambda_867[] = {
  0, // locals
  0, // parameters
  // range &text 3 -1
  var_range, 3, var_text, num_3, minus_num_1, 1, var_text,
  // parse_equal
  func_parse_equal, 0, TAIL_CALL,
  POS(2416, 9),
  POS(2417, 9)
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
  POS(2420, 9),
  POS(2420, 9),
  POS(2419, 9),
  POS(2418, 7)
};

static TAB_NUM t_lambda_869[] = {
  3, // locals
  0, // parameters
  // text(2) == '!'
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '!'
  var_std__equal, 2, LOCAL(1), chr_33, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_870, 1, LOCAL(3),
  // text(2) == '!'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(2421, 9),
  POS(2421, 9),
  POS(2419, 9),
  POS(2421, 9)
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
  POS(2422, 9),
  POS(2422, 9),
  POS(2419, 9),
  POS(2422, 9)
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
  POS(2423, 9),
  POS(2423, 9),
  POS(2423, 9)
};

static TAB_NUM t_lambda_872[] = {
  0, // locals
  0, // parameters
  // range &text 5 -1
  var_range, 3, var_text, num_5, minus_num_1, 1, var_text,
  // parse_not_equal
  func_parse_not_equal, 0, TAIL_CALL,
  POS(2425, 9),
  POS(2426, 9)
};

static TAB_NUM t_lambda_873[] = {
  3, // locals
  0, // parameters
  // text(1) == '!'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '!'
  var_std__equal, 2, LOCAL(1), chr_33, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_874, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_875, TAIL_CALL,
  POS(2429, 9),
  POS(2429, 9),
  POS(2428, 9),
  POS(2427, 7)
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
  POS(2430, 9),
  POS(2430, 9),
  POS(2430, 9)
};

static TAB_NUM t_lambda_875[] = {
  0, // locals
  0, // parameters
  // range &text 3 -1
  var_range, 3, var_text, num_3, minus_num_1, 1, var_text,
  // parse_not_equal
  func_parse_not_equal, 0, TAIL_CALL,
  POS(2432, 9),
  POS(2433, 9)
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
  LET, 2, LOCAL(3), lambda_880, TAIL_CALL,
  POS(2436, 9),
  POS(2436, 9),
  POS(2435, 9),
  POS(2434, 7)
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
  POS(2437, 9),
  POS(2437, 9),
  POS(2435, 9),
  POS(2437, 9)
};

static TAB_NUM t_lambda_878[] = {
  3, // locals
  0, // parameters
  // text(3) == '='
  var_text, 1, num_3, 1, LOCAL(1),
  // text(3) == '='
  var_std__equal, 2, LOCAL(1), chr_61, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_879, 1, LOCAL(3),
  // text(3) == '='
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(2438, 9),
  POS(2438, 9),
  POS(2435, 9),
  POS(2438, 9)
};

static TAB_NUM t_lambda_879[] = {
  2, // locals
  0, // parameters
  // text(4) == ' '
  var_text, 1, num_4, 1, LOCAL(1),
  // text(4) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // text(4) == ' '
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2439, 9),
  POS(2439, 9),
  POS(2439, 9)
};

static TAB_NUM t_lambda_880[] = {
  0, // locals
  0, // parameters
  // range &text 5 -1
  var_range, 3, var_text, num_5, minus_num_1, 1, var_text,
  // parse_less_equal
  func_parse_less_equal, 0, TAIL_CALL,
  POS(2441, 9),
  POS(2442, 9)
};

static TAB_NUM t_lambda_881[] = {
  3, // locals
  0, // parameters
  // text(1) == '<'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '<'
  var_std__equal, 2, LOCAL(1), chr_60, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_882, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_883, TAIL_CALL,
  POS(2445, 9),
  POS(2445, 9),
  POS(2444, 9),
  POS(2443, 7)
};

static TAB_NUM t_lambda_882[] = {
  2, // locals
  0, // parameters
  // text(2) == '='
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '='
  var_std__equal, 2, LOCAL(1), chr_61, 1, LOCAL(2),
  // text(2) == '='
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2446, 9),
  POS(2446, 9),
  POS(2446, 9)
};

static TAB_NUM t_lambda_883[] = {
  0, // locals
  0, // parameters
  // range &text 3 -1
  var_range, 3, var_text, num_3, minus_num_1, 1, var_text,
  // parse_less_equal
  func_parse_less_equal, 0, TAIL_CALL,
  POS(2448, 9),
  POS(2449, 9)
};

static TAB_NUM t_lambda_884[] = {
  3, // locals
  0, // parameters
  // text(1) == ' '
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_885, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_887, TAIL_CALL,
  POS(2452, 9),
  POS(2452, 9),
  POS(2451, 9),
  POS(2450, 7)
};

static TAB_NUM t_lambda_885[] = {
  3, // locals
  0, // parameters
  // text(2) == '<'
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '<'
  var_std__equal, 2, LOCAL(1), chr_60, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_886, 1, LOCAL(3),
  // text(2) == '<'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(2453, 9),
  POS(2453, 9),
  POS(2451, 9),
  POS(2453, 9)
};

static TAB_NUM t_lambda_886[] = {
  2, // locals
  0, // parameters
  // text(3) == ' '
  var_text, 1, num_3, 1, LOCAL(1),
  // text(3) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // text(3) == ' '
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2454, 9),
  POS(2454, 9),
  POS(2454, 9)
};

static TAB_NUM t_lambda_887[] = {
  0, // locals
  0, // parameters
  // range &text 4 -1
  var_range, 3, var_text, num_4, minus_num_1, 1, var_text,
  // parse_less_than
  func_parse_less_than, 0, TAIL_CALL,
  POS(2456, 9),
  POS(2457, 9)
};

static TAB_NUM t_lambda_888[] = {
  2, // locals
  0, // parameters
  // text(1) == '<'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '<'
  var_std__equal, 2, LOCAL(1), chr_60, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_889, TAIL_CALL,
  POS(2459, 7),
  POS(2459, 7),
  POS(2458, 7)
};

static TAB_NUM t_lambda_889[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_less_than
  func_parse_less_than, 0, TAIL_CALL,
  POS(2461, 9),
  POS(2462, 9)
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
  LET, 2, LOCAL(3), lambda_894, TAIL_CALL,
  POS(2465, 9),
  POS(2465, 9),
  POS(2464, 9),
  POS(2463, 7)
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
  POS(2466, 9),
  POS(2466, 9),
  POS(2464, 9),
  POS(2466, 9)
};

static TAB_NUM t_lambda_892[] = {
  3, // locals
  0, // parameters
  // text(3) == '='
  var_text, 1, num_3, 1, LOCAL(1),
  // text(3) == '='
  var_std__equal, 2, LOCAL(1), chr_61, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_893, 1, LOCAL(3),
  // text(3) == '='
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(2467, 9),
  POS(2467, 9),
  POS(2464, 9),
  POS(2467, 9)
};

static TAB_NUM t_lambda_893[] = {
  2, // locals
  0, // parameters
  // text(4) == ' '
  var_text, 1, num_4, 1, LOCAL(1),
  // text(4) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // text(4) == ' '
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2468, 9),
  POS(2468, 9),
  POS(2468, 9)
};

static TAB_NUM t_lambda_894[] = {
  0, // locals
  0, // parameters
  // range &text 5 -1
  var_range, 3, var_text, num_5, minus_num_1, 1, var_text,
  // parse_greater_equal
  func_parse_greater_equal, 0, TAIL_CALL,
  POS(2470, 9),
  POS(2471, 9)
};

static TAB_NUM t_lambda_895[] = {
  3, // locals
  0, // parameters
  // text(1) == '>'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '>'
  var_std__equal, 2, LOCAL(1), chr_62, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_896, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_897, TAIL_CALL,
  POS(2474, 9),
  POS(2474, 9),
  POS(2473, 9),
  POS(2472, 7)
};

static TAB_NUM t_lambda_896[] = {
  2, // locals
  0, // parameters
  // text(2) == '='
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '='
  var_std__equal, 2, LOCAL(1), chr_61, 1, LOCAL(2),
  // text(2) == '='
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2475, 9),
  POS(2475, 9),
  POS(2475, 9)
};

static TAB_NUM t_lambda_897[] = {
  0, // locals
  0, // parameters
  // range &text 3 -1
  var_range, 3, var_text, num_3, minus_num_1, 1, var_text,
  // parse_greater_equal
  func_parse_greater_equal, 0, TAIL_CALL,
  POS(2477, 9),
  POS(2478, 9)
};

static TAB_NUM t_lambda_898[] = {
  3, // locals
  0, // parameters
  // text(1) == ' '
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_899, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_901, TAIL_CALL,
  POS(2481, 9),
  POS(2481, 9),
  POS(2480, 9),
  POS(2479, 7)
};

static TAB_NUM t_lambda_899[] = {
  3, // locals
  0, // parameters
  // text(2) == '>'
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '>'
  var_std__equal, 2, LOCAL(1), chr_62, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_900, 1, LOCAL(3),
  // text(2) == '>'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(2482, 9),
  POS(2482, 9),
  POS(2480, 9),
  POS(2482, 9)
};

static TAB_NUM t_lambda_900[] = {
  2, // locals
  0, // parameters
  // text(3) == ' '
  var_text, 1, num_3, 1, LOCAL(1),
  // text(3) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // text(3) == ' '
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2483, 9),
  POS(2483, 9),
  POS(2483, 9)
};

static TAB_NUM t_lambda_901[] = {
  0, // locals
  0, // parameters
  // range &text 4 -1
  var_range, 3, var_text, num_4, minus_num_1, 1, var_text,
  // parse_greater_than
  func_parse_greater_than, 0, TAIL_CALL,
  POS(2485, 9),
  POS(2486, 9)
};

static TAB_NUM t_lambda_902[] = {
  2, // locals
  0, // parameters
  // text(1) == '>'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '>'
  var_std__equal, 2, LOCAL(1), chr_62, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_903, TAIL_CALL,
  POS(2488, 7),
  POS(2488, 7),
  POS(2487, 7)
};

static TAB_NUM t_lambda_903[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_greater_than
  func_parse_greater_than, 0, TAIL_CALL,
  POS(2490, 9),
  POS(2491, 9)
};

static TAB_NUM t_lambda_904[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_905, TAIL_CALL,
  POS(2492, 7)
};

static TAB_NUM t_lambda_905[] = {
  0, // locals
  0, // parameters
  //  text undefined
  LET, 2, var_text, var_undefined, TAIL_CALL,
  POS(2494, 9)
};

static TAB_NUM t_func_parse_equal[] = {
  0, // locals
  0, // parameters
  // parse_tagged_bit_expression funky_types::equal
  func_parse_tagged_bit_expression, 1, var_funky_types__equal, TAIL_CALL,
  POS(2497, 3)
};

static TAB_NUM t_func_parse_not_equal[] = {
  0, // locals
  0, // parameters
  // parse_tagged_bit_expression funky_types::not_equal
  func_parse_tagged_bit_expression, 1, var_funky_types__not_equal, TAIL_CALL,
  POS(2500, 3)
};

static TAB_NUM t_func_parse_less_equal[] = {
  0, // locals
  0, // parameters
  // parse_tagged_bit_expression funky_types::less_equal
  func_parse_tagged_bit_expression, 1, var_funky_types__less_equal, TAIL_CALL,
  POS(2503, 3)
};

static TAB_NUM t_func_parse_less_than[] = {
  0, // locals
  0, // parameters
  // parse_tagged_bit_expression funky_types::less_than
  func_parse_tagged_bit_expression, 1, var_funky_types__less_than, TAIL_CALL,
  POS(2506, 3)
};

static TAB_NUM t_func_parse_greater_equal[] = {
  0, // locals
  0, // parameters
  // parse_tagged_bit_expression funky_types::greater_equal
  func_parse_tagged_bit_expression, 1, var_funky_types__greater_equal, TAIL_CALL,
  POS(2509, 3)
};

static TAB_NUM t_func_parse_greater_than[] = {
  0, // locals
  0, // parameters
  // parse_tagged_bit_expression funky_types::greater_than
  func_parse_tagged_bit_expression, 1, var_funky_types__greater_than, TAIL_CALL,
  POS(2512, 3)
};

static TAB_NUM t_func_parse_tagged_bit_expression[] = {
  1, // locals
  -1, // parameters
  var_undefined, var_2516_0_derived_node,
  // $position text
  LET, 1, var_text, 1, var_2518_1_position,
  // parse_additive_expression !text $additive_expression
  func_parse_additive_expression, 0, 2, var_text, var_2519_33_additive_expression,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_38_text_is_defined, lambda_911, TAIL_CALL,
  POS(2518, 3),
  POS(2519, 3),
  POS(2521, 10),
  POS(2520, 3)
};

static TAB_NUM t_lambda_38_text_is_defined[] = {
  1, // locals
  0, // parameters
  // parse_bit_operator !text $bit_operator
  func_parse_bit_operator, 0, 2, var_text, var_2522_26_bit_operator,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_906, lambda_910, TAIL_CALL,
  POS(2522, 7),
  POS(2524, 14),
  POS(2523, 7)
};

static TAB_NUM t_lambda_906[] = {
  2, // locals
  0, // parameters
  // is_defined || bit_operator.is_defined
  var_is_defined, 1, var_2516_0_derived_node, 1, LOCAL(1),
  // is_defined || bit_operator.is_defined
  var_std__or, 2, LOCAL(1), lambda_907, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_908, lambda_909, TAIL_CALL,
  POS(2527, 26),
  POS(2527, 26),
  POS(2526, 11)
};

static TAB_NUM t_lambda_907[] = {
  1, // locals
  0, // parameters
  // is_defined
  var_is_defined, 1, var_2522_26_bit_operator, 1, LOCAL(1),
  // bit_operator.is_defined
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(2527, 53),
  POS(2527, 40)
};

static TAB_NUM t_lambda_908[] = {
  2, // locals
  0, // parameters
  // default_value(derived_node funky_types::tagged_bit_expression)
  var_default_value, 2, var_2516_0_derived_node, var_funky_types__tagged_bit_expression, 1, LOCAL(1),
  // default_value(derived_node funky_types::tagged_bit_expression)
  LET, -4, LOCAL(1), var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_2518_1_position, var_funky__expression_of, var_2519_33_additive_expression, var_funky__operator_of, var_2522_26_bit_operator, LOCAL(2),
  // 
  LET, 2, var_text, LOCAL(2), TAIL_CALL,
  POS(2530, 15),
  POS(2530, 15),
  POS(2528, 15)
};

static TAB_NUM t_lambda_909[] = {
  0, // locals
  0, // parameters
  //  text additive_expression
  LET, 2, var_text, var_2519_33_additive_expression, TAIL_CALL,
  POS(2535, 15)
};

static TAB_NUM t_lambda_910[] = {
  0, // locals
  0, // parameters
  //  undefined bit_operator
  LET, 2, var_undefined, var_2522_26_bit_operator, TAIL_CALL,
  POS(2536, 11)
};

static TAB_NUM t_lambda_911[] = {
  0, // locals
  0, // parameters
  //  undefined additive_expression
  LET, 2, var_undefined, var_2519_33_additive_expression, TAIL_CALL,
  POS(2537, 7)
};

static TAB_NUM t_func_parse_bit_expression[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_2540_1_position,
  // parse_additive_expression !text $additive_expression
  func_parse_additive_expression, 0, 2, var_text, var_2541_33_additive_expression,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_39_text_is_defined, lambda_916, TAIL_CALL,
  POS(2540, 3),
  POS(2541, 3),
  POS(2543, 10),
  POS(2542, 3)
};

static TAB_NUM t_lambda_39_text_is_defined[] = {
  1, // locals
  0, // parameters
  // parse_bit_operator !text $bit_operator
  func_parse_bit_operator, 0, 2, var_text, var_2544_26_bit_operator,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_912, lambda_915, TAIL_CALL,
  POS(2544, 7),
  POS(2546, 14),
  POS(2545, 7)
};

static TAB_NUM t_lambda_912[] = {
  1, // locals
  0, // parameters
  // is_defined
  var_is_defined, 1, var_2544_26_bit_operator, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_913, lambda_914, TAIL_CALL,
  POS(2549, 26),
  POS(2548, 11)
};

static TAB_NUM t_lambda_913[] = {
  1, // locals
  0, // parameters
  // funky_types::expression
  LET, -4, var_funky_types__expression, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_2540_1_position, var_funky__expression_of, var_2541_33_additive_expression, var_funky__operator_of, var_2544_26_bit_operator, LOCAL(1),
  // 
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(2552, 15),
  POS(2550, 15)
};

static TAB_NUM t_lambda_914[] = {
  0, // locals
  0, // parameters
  //  text additive_expression
  LET, 2, var_text, var_2541_33_additive_expression, TAIL_CALL,
  POS(2557, 15)
};

static TAB_NUM t_lambda_915[] = {
  0, // locals
  0, // parameters
  //  undefined bit_operator
  LET, 2, var_undefined, var_2544_26_bit_operator, TAIL_CALL,
  POS(2558, 11)
};

static TAB_NUM t_lambda_916[] = {
  0, // locals
  0, // parameters
  //  undefined additive_expression
  LET, 2, var_undefined, var_2541_33_additive_expression, TAIL_CALL,
  POS(2559, 7)
};

static TAB_NUM t_func_parse_bit_operator[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 11, lambda_917, lambda_922, lambda_925, lambda_930, lambda_933, lambda_937, lambda_939, lambda_943, lambda_945, lambda_949, lambda_951, TAIL_CALL,
  POS(2562, 3)
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
  POS(2565, 9),
  POS(2565, 9),
  POS(2564, 9),
  POS(2563, 7)
};

static TAB_NUM t_lambda_918[] = {
  3, // locals
  0, // parameters
  // text(2) == '<'
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '<'
  var_std__equal, 2, LOCAL(1), chr_60, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_919, 1, LOCAL(3),
  // text(2) == '<'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(2566, 9),
  POS(2566, 9),
  POS(2564, 9),
  POS(2566, 9)
};

static TAB_NUM t_lambda_919[] = {
  3, // locals
  0, // parameters
  // text(3) == '<'
  var_text, 1, num_3, 1, LOCAL(1),
  // text(3) == '<'
  var_std__equal, 2, LOCAL(1), chr_60, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_920, 1, LOCAL(3),
  // text(3) == '<'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(2567, 9),
  POS(2567, 9),
  POS(2564, 9),
  POS(2567, 9)
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
  POS(2568, 9),
  POS(2568, 9),
  POS(2568, 9)
};

static TAB_NUM t_lambda_921[] = {
  0, // locals
  0, // parameters
  // range &text 5 -1
  var_range, 3, var_text, num_5, minus_num_1, 1, var_text,
  // parse_shift_left
  func_parse_shift_left, 0, TAIL_CALL,
  POS(2570, 9),
  POS(2571, 9)
};

static TAB_NUM t_lambda_922[] = {
  3, // locals
  0, // parameters
  // text(1) == '<'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '<'
  var_std__equal, 2, LOCAL(1), chr_60, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_923, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_924, TAIL_CALL,
  POS(2574, 9),
  POS(2574, 9),
  POS(2573, 9),
  POS(2572, 7)
};

static TAB_NUM t_lambda_923[] = {
  2, // locals
  0, // parameters
  // text(2) == '<'
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '<'
  var_std__equal, 2, LOCAL(1), chr_60, 1, LOCAL(2),
  // text(2) == '<'
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2575, 9),
  POS(2575, 9),
  POS(2575, 9)
};

static TAB_NUM t_lambda_924[] = {
  0, // locals
  0, // parameters
  // range &text 3 -1
  var_range, 3, var_text, num_3, minus_num_1, 1, var_text,
  // parse_shift_left
  func_parse_shift_left, 0, TAIL_CALL,
  POS(2577, 9),
  POS(2578, 9)
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
  LET, 2, LOCAL(3), lambda_929, TAIL_CALL,
  POS(2581, 9),
  POS(2581, 9),
  POS(2580, 9),
  POS(2579, 7)
};

static TAB_NUM t_lambda_926[] = {
  3, // locals
  0, // parameters
  // text(2) == '>'
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '>'
  var_std__equal, 2, LOCAL(1), chr_62, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_927, 1, LOCAL(3),
  // text(2) == '>'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(2582, 9),
  POS(2582, 9),
  POS(2580, 9),
  POS(2582, 9)
};

static TAB_NUM t_lambda_927[] = {
  3, // locals
  0, // parameters
  // text(3) == '>'
  var_text, 1, num_3, 1, LOCAL(1),
  // text(3) == '>'
  var_std__equal, 2, LOCAL(1), chr_62, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_928, 1, LOCAL(3),
  // text(3) == '>'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(2583, 9),
  POS(2583, 9),
  POS(2580, 9),
  POS(2583, 9)
};

static TAB_NUM t_lambda_928[] = {
  2, // locals
  0, // parameters
  // text(4) == ' '
  var_text, 1, num_4, 1, LOCAL(1),
  // text(4) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // text(4) == ' '
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2584, 9),
  POS(2584, 9),
  POS(2584, 9)
};

static TAB_NUM t_lambda_929[] = {
  0, // locals
  0, // parameters
  // range &text 5 -1
  var_range, 3, var_text, num_5, minus_num_1, 1, var_text,
  // parse_shift_right
  func_parse_shift_right, 0, TAIL_CALL,
  POS(2586, 9),
  POS(2587, 9)
};

static TAB_NUM t_lambda_930[] = {
  3, // locals
  0, // parameters
  // text(1) == '>'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '>'
  var_std__equal, 2, LOCAL(1), chr_62, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_931, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_932, TAIL_CALL,
  POS(2590, 9),
  POS(2590, 9),
  POS(2589, 9),
  POS(2588, 7)
};

static TAB_NUM t_lambda_931[] = {
  2, // locals
  0, // parameters
  // text(2) == '>'
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '>'
  var_std__equal, 2, LOCAL(1), chr_62, 1, LOCAL(2),
  // text(2) == '>'
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2591, 9),
  POS(2591, 9),
  POS(2591, 9)
};

static TAB_NUM t_lambda_932[] = {
  0, // locals
  0, // parameters
  // range &text 3 -1
  var_range, 3, var_text, num_3, minus_num_1, 1, var_text,
  // parse_shift_right
  func_parse_shift_right, 0, TAIL_CALL,
  POS(2593, 9),
  POS(2594, 9)
};

static TAB_NUM t_lambda_933[] = {
  3, // locals
  0, // parameters
  // text(1) == ' '
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_934, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_936, TAIL_CALL,
  POS(2597, 9),
  POS(2597, 9),
  POS(2596, 9),
  POS(2595, 7)
};

static TAB_NUM t_lambda_934[] = {
  3, // locals
  0, // parameters
  // text(2) == '&'
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '&'
  var_std__equal, 2, LOCAL(1), chr_38, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_935, 1, LOCAL(3),
  // text(2) == '&'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(2598, 9),
  POS(2598, 9),
  POS(2596, 9),
  POS(2598, 9)
};

static TAB_NUM t_lambda_935[] = {
  2, // locals
  0, // parameters
  // text(3) == ' '
  var_text, 1, num_3, 1, LOCAL(1),
  // text(3) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // text(3) == ' '
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2599, 9),
  POS(2599, 9),
  POS(2599, 9)
};

static TAB_NUM t_lambda_936[] = {
  0, // locals
  0, // parameters
  // range &text 4 -1
  var_range, 3, var_text, num_4, minus_num_1, 1, var_text,
  // parse_bit_and
  func_parse_bit_and, 0, TAIL_CALL,
  POS(2601, 9),
  POS(2602, 9)
};

static TAB_NUM t_lambda_937[] = {
  2, // locals
  0, // parameters
  // text(1) == '&'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '&'
  var_std__equal, 2, LOCAL(1), chr_38, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_938, TAIL_CALL,
  POS(2604, 7),
  POS(2604, 7),
  POS(2603, 7)
};

static TAB_NUM t_lambda_938[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_bit_and
  func_parse_bit_and, 0, TAIL_CALL,
  POS(2606, 9),
  POS(2607, 9)
};

static TAB_NUM t_lambda_939[] = {
  3, // locals
  0, // parameters
  // text(1) == ' '
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_940, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_942, TAIL_CALL,
  POS(2610, 9),
  POS(2610, 9),
  POS(2609, 9),
  POS(2608, 7)
};

static TAB_NUM t_lambda_940[] = {
  3, // locals
  0, // parameters
  // text(2) == '|'
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '|'
  var_std__equal, 2, LOCAL(1), chr_124, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_941, 1, LOCAL(3),
  // text(2) == '|'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(2611, 9),
  POS(2611, 9),
  POS(2609, 9),
  POS(2611, 9)
};

static TAB_NUM t_lambda_941[] = {
  2, // locals
  0, // parameters
  // text(3) == ' '
  var_text, 1, num_3, 1, LOCAL(1),
  // text(3) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // text(3) == ' '
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2612, 9),
  POS(2612, 9),
  POS(2612, 9)
};

static TAB_NUM t_lambda_942[] = {
  0, // locals
  0, // parameters
  // range &text 4 -1
  var_range, 3, var_text, num_4, minus_num_1, 1, var_text,
  // parse_bit_or
  func_parse_bit_or, 0, TAIL_CALL,
  POS(2614, 9),
  POS(2615, 9)
};

static TAB_NUM t_lambda_943[] = {
  2, // locals
  0, // parameters
  // text(1) == '|'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '|'
  var_std__equal, 2, LOCAL(1), chr_124, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_944, TAIL_CALL,
  POS(2617, 7),
  POS(2617, 7),
  POS(2616, 7)
};

static TAB_NUM t_lambda_944[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_bit_or
  func_parse_bit_or, 0, TAIL_CALL,
  POS(2619, 9),
  POS(2620, 9)
};

static TAB_NUM t_lambda_945[] = {
  3, // locals
  0, // parameters
  // text(1) == ' '
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_946, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_948, TAIL_CALL,
  POS(2623, 9),
  POS(2623, 9),
  POS(2622, 9),
  POS(2621, 7)
};

static TAB_NUM t_lambda_946[] = {
  3, // locals
  0, // parameters
  // text(2) == '^'
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '^'
  var_std__equal, 2, LOCAL(1), chr_94, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_947, 1, LOCAL(3),
  // text(2) == '^'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(2624, 9),
  POS(2624, 9),
  POS(2622, 9),
  POS(2624, 9)
};

static TAB_NUM t_lambda_947[] = {
  2, // locals
  0, // parameters
  // text(3) == ' '
  var_text, 1, num_3, 1, LOCAL(1),
  // text(3) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // text(3) == ' '
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2625, 9),
  POS(2625, 9),
  POS(2625, 9)
};

static TAB_NUM t_lambda_948[] = {
  0, // locals
  0, // parameters
  // range &text 4 -1
  var_range, 3, var_text, num_4, minus_num_1, 1, var_text,
  // parse_bit_xor
  func_parse_bit_xor, 0, TAIL_CALL,
  POS(2627, 9),
  POS(2628, 9)
};

static TAB_NUM t_lambda_949[] = {
  2, // locals
  0, // parameters
  // text(1) == '^'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '^'
  var_std__equal, 2, LOCAL(1), chr_94, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_950, TAIL_CALL,
  POS(2630, 7),
  POS(2630, 7),
  POS(2629, 7)
};

static TAB_NUM t_lambda_950[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_bit_xor
  func_parse_bit_xor, 0, TAIL_CALL,
  POS(2632, 9),
  POS(2633, 9)
};

static TAB_NUM t_lambda_951[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_952, TAIL_CALL,
  POS(2634, 7)
};

static TAB_NUM t_lambda_952[] = {
  0, // locals
  0, // parameters
  //  text undefined
  LET, 2, var_text, var_undefined, TAIL_CALL,
  POS(2636, 9)
};

static TAB_NUM t_func_parse_shift_left[] = {
  0, // locals
  0, // parameters
  // parse_tagged_additive_expression funky_types::shift_left
  func_parse_tagged_additive_expression, 1, var_funky_types__shift_left, TAIL_CALL,
  POS(2639, 3)
};

static TAB_NUM t_func_parse_shift_right[] = {
  0, // locals
  0, // parameters
  // parse_tagged_additive_expression funky_types::shift_right
  func_parse_tagged_additive_expression, 1, var_funky_types__shift_right, TAIL_CALL,
  POS(2642, 3)
};

static TAB_NUM t_func_parse_bit_and[] = {
  0, // locals
  0, // parameters
  // parse_bit_and2 funky_types::bit_and
  func_parse_bit_and2, 1, var_funky_types__bit_and, TAIL_CALL,
  POS(2645, 3)
};

static TAB_NUM t_func_parse_bit_and2[] = {
  1, // locals
  -1, // parameters
  var_undefined, var_2649_0_derived_node,
  // $position text
  LET, 1, var_text, 1, var_2651_1_position,
  // parse_additive_expression !text $additive_expression
  func_parse_additive_expression, 0, 2, var_text, var_2652_33_additive_expression,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_40_text_is_defined, lambda_958, TAIL_CALL,
  POS(2651, 3),
  POS(2652, 3),
  POS(2654, 10),
  POS(2653, 3)
};

static TAB_NUM t_lambda_40_text_is_defined[] = {
  1, // locals
  0, // parameters
  // parse_bit_and_operator !text $bit_and_operator
  func_parse_bit_and_operator, 0, 2, var_text, var_2655_30_bit_and_operator,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_953, lambda_957, TAIL_CALL,
  POS(2655, 7),
  POS(2657, 14),
  POS(2656, 7)
};

static TAB_NUM t_lambda_953[] = {
  2, // locals
  0, // parameters
  // is_defined || bit_and_operator.is_defined
  var_is_defined, 1, var_2649_0_derived_node, 1, LOCAL(1),
  // is_defined || bit_and_operator.is_defined
  var_std__or, 2, LOCAL(1), lambda_954, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_955, lambda_956, TAIL_CALL,
  POS(2660, 26),
  POS(2660, 26),
  POS(2659, 11)
};

static TAB_NUM t_lambda_954[] = {
  1, // locals
  0, // parameters
  // is_defined
  var_is_defined, 1, var_2655_30_bit_and_operator, 1, LOCAL(1),
  // bit_and_operator.is_defined
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(2660, 57),
  POS(2660, 40)
};

static TAB_NUM t_lambda_955[] = {
  2, // locals
  0, // parameters
  // default_value(derived_node funky_types::bit_and2)
  var_default_value, 2, var_2649_0_derived_node, var_funky_types__bit_and2, 1, LOCAL(1),
  // default_value(derived_node funky_types::bit_and2)
  LET, -4, LOCAL(1), var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_2651_1_position, var_funky__expression_of, var_2652_33_additive_expression, var_funky__operator_of, var_2655_30_bit_and_operator, LOCAL(2),
  // 
  LET, 2, var_text, LOCAL(2), TAIL_CALL,
  POS(2663, 15),
  POS(2663, 15),
  POS(2661, 15)
};

static TAB_NUM t_lambda_956[] = {
  0, // locals
  0, // parameters
  //  text additive_expression
  LET, 2, var_text, var_2652_33_additive_expression, TAIL_CALL,
  POS(2668, 15)
};

static TAB_NUM t_lambda_957[] = {
  0, // locals
  0, // parameters
  //  undefined bit_and_operator
  LET, 2, var_undefined, var_2655_30_bit_and_operator, TAIL_CALL,
  POS(2669, 11)
};

static TAB_NUM t_lambda_958[] = {
  0, // locals
  0, // parameters
  //  undefined additive_expression
  LET, 2, var_undefined, var_2652_33_additive_expression, TAIL_CALL,
  POS(2670, 7)
};

static TAB_NUM t_func_parse_bit_and_operator[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 3, lambda_959, lambda_963, lambda_965, TAIL_CALL,
  POS(2673, 3)
};

static TAB_NUM t_lambda_959[] = {
  3, // locals
  0, // parameters
  // text(1) == ' '
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_960, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_962, TAIL_CALL,
  POS(2676, 9),
  POS(2676, 9),
  POS(2675, 9),
  POS(2674, 7)
};

static TAB_NUM t_lambda_960[] = {
  3, // locals
  0, // parameters
  // text(2) == '&'
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '&'
  var_std__equal, 2, LOCAL(1), chr_38, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_961, 1, LOCAL(3),
  // text(2) == '&'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(2677, 9),
  POS(2677, 9),
  POS(2675, 9),
  POS(2677, 9)
};

static TAB_NUM t_lambda_961[] = {
  2, // locals
  0, // parameters
  // text(3) == ' '
  var_text, 1, num_3, 1, LOCAL(1),
  // text(3) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // text(3) == ' '
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2678, 9),
  POS(2678, 9),
  POS(2678, 9)
};

static TAB_NUM t_lambda_962[] = {
  0, // locals
  0, // parameters
  // range &text 4 -1
  var_range, 3, var_text, num_4, minus_num_1, 1, var_text,
  // parse_bit_and
  func_parse_bit_and, 0, TAIL_CALL,
  POS(2680, 9),
  POS(2681, 9)
};

static TAB_NUM t_lambda_963[] = {
  2, // locals
  0, // parameters
  // text(1) == '&'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '&'
  var_std__equal, 2, LOCAL(1), chr_38, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_964, TAIL_CALL,
  POS(2683, 7),
  POS(2683, 7),
  POS(2682, 7)
};

static TAB_NUM t_lambda_964[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_bit_and
  func_parse_bit_and, 0, TAIL_CALL,
  POS(2685, 9),
  POS(2686, 9)
};

static TAB_NUM t_lambda_965[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_966, TAIL_CALL,
  POS(2687, 7)
};

static TAB_NUM t_lambda_966[] = {
  0, // locals
  0, // parameters
  //  text undefined
  LET, 2, var_text, var_undefined, TAIL_CALL,
  POS(2689, 9)
};

static TAB_NUM t_func_parse_bit_or[] = {
  0, // locals
  0, // parameters
  // parse_bit_or2 funky_types::bit_or
  func_parse_bit_or2, 1, var_funky_types__bit_or, TAIL_CALL,
  POS(2692, 3)
};

static TAB_NUM t_func_parse_bit_or2[] = {
  1, // locals
  -1, // parameters
  var_undefined, var_2696_0_derived_node,
  // $position text
  LET, 1, var_text, 1, var_2698_1_position,
  // parse_additive_expression !text $additive_expression
  func_parse_additive_expression, 0, 2, var_text, var_2699_33_additive_expression,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_41_text_is_defined, lambda_972, TAIL_CALL,
  POS(2698, 3),
  POS(2699, 3),
  POS(2701, 10),
  POS(2700, 3)
};

static TAB_NUM t_lambda_41_text_is_defined[] = {
  1, // locals
  0, // parameters
  // parse_bit_or_operator !text $bit_or_operator
  func_parse_bit_or_operator, 0, 2, var_text, var_2702_29_bit_or_operator,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_967, lambda_971, TAIL_CALL,
  POS(2702, 7),
  POS(2704, 14),
  POS(2703, 7)
};

static TAB_NUM t_lambda_967[] = {
  2, // locals
  0, // parameters
  // is_defined || bit_or_operator.is_defined
  var_is_defined, 1, var_2696_0_derived_node, 1, LOCAL(1),
  // is_defined || bit_or_operator.is_defined
  var_std__or, 2, LOCAL(1), lambda_968, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_969, lambda_970, TAIL_CALL,
  POS(2707, 26),
  POS(2707, 26),
  POS(2706, 11)
};

static TAB_NUM t_lambda_968[] = {
  1, // locals
  0, // parameters
  // is_defined
  var_is_defined, 1, var_2702_29_bit_or_operator, 1, LOCAL(1),
  // bit_or_operator.is_defined
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(2707, 56),
  POS(2707, 40)
};

static TAB_NUM t_lambda_969[] = {
  2, // locals
  0, // parameters
  // default_value(derived_node funky_types::bit_or2)
  var_default_value, 2, var_2696_0_derived_node, var_funky_types__bit_or2, 1, LOCAL(1),
  // default_value(derived_node funky_types::bit_or2)
  LET, -4, LOCAL(1), var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_2698_1_position, var_funky__expression_of, var_2699_33_additive_expression, var_funky__operator_of, var_2702_29_bit_or_operator, LOCAL(2),
  // 
  LET, 2, var_text, LOCAL(2), TAIL_CALL,
  POS(2710, 15),
  POS(2710, 15),
  POS(2708, 15)
};

static TAB_NUM t_lambda_970[] = {
  0, // locals
  0, // parameters
  //  text additive_expression
  LET, 2, var_text, var_2699_33_additive_expression, TAIL_CALL,
  POS(2715, 15)
};

static TAB_NUM t_lambda_971[] = {
  0, // locals
  0, // parameters
  //  undefined bit_or_operator
  LET, 2, var_undefined, var_2702_29_bit_or_operator, TAIL_CALL,
  POS(2716, 11)
};

static TAB_NUM t_lambda_972[] = {
  0, // locals
  0, // parameters
  //  undefined additive_expression
  LET, 2, var_undefined, var_2699_33_additive_expression, TAIL_CALL,
  POS(2717, 7)
};

static TAB_NUM t_func_parse_bit_or_operator[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 3, lambda_973, lambda_977, lambda_979, TAIL_CALL,
  POS(2720, 3)
};

static TAB_NUM t_lambda_973[] = {
  3, // locals
  0, // parameters
  // text(1) == ' '
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_974, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_976, TAIL_CALL,
  POS(2723, 9),
  POS(2723, 9),
  POS(2722, 9),
  POS(2721, 7)
};

static TAB_NUM t_lambda_974[] = {
  3, // locals
  0, // parameters
  // text(2) == '|'
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '|'
  var_std__equal, 2, LOCAL(1), chr_124, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_975, 1, LOCAL(3),
  // text(2) == '|'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(2724, 9),
  POS(2724, 9),
  POS(2722, 9),
  POS(2724, 9)
};

static TAB_NUM t_lambda_975[] = {
  2, // locals
  0, // parameters
  // text(3) == ' '
  var_text, 1, num_3, 1, LOCAL(1),
  // text(3) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // text(3) == ' '
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2725, 9),
  POS(2725, 9),
  POS(2725, 9)
};

static TAB_NUM t_lambda_976[] = {
  0, // locals
  0, // parameters
  // range &text 4 -1
  var_range, 3, var_text, num_4, minus_num_1, 1, var_text,
  // parse_bit_or
  func_parse_bit_or, 0, TAIL_CALL,
  POS(2727, 9),
  POS(2728, 9)
};

static TAB_NUM t_lambda_977[] = {
  2, // locals
  0, // parameters
  // text(1) == '|'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '|'
  var_std__equal, 2, LOCAL(1), chr_124, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_978, TAIL_CALL,
  POS(2730, 7),
  POS(2730, 7),
  POS(2729, 7)
};

static TAB_NUM t_lambda_978[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_bit_or
  func_parse_bit_or, 0, TAIL_CALL,
  POS(2732, 9),
  POS(2733, 9)
};

static TAB_NUM t_lambda_979[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_980, TAIL_CALL,
  POS(2734, 7)
};

static TAB_NUM t_lambda_980[] = {
  0, // locals
  0, // parameters
  //  text undefined
  LET, 2, var_text, var_undefined, TAIL_CALL,
  POS(2736, 9)
};

static TAB_NUM t_func_parse_bit_xor[] = {
  0, // locals
  0, // parameters
  // parse_bit_xor2 funky_types::bit_xor
  func_parse_bit_xor2, 1, var_funky_types__bit_xor, TAIL_CALL,
  POS(2739, 3)
};

static TAB_NUM t_func_parse_bit_xor2[] = {
  1, // locals
  -1, // parameters
  var_undefined, var_2743_0_derived_node,
  // $position text
  LET, 1, var_text, 1, var_2745_1_position,
  // parse_additive_expression !text $additive_expression
  func_parse_additive_expression, 0, 2, var_text, var_2746_33_additive_expression,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_42_text_is_defined, lambda_986, TAIL_CALL,
  POS(2745, 3),
  POS(2746, 3),
  POS(2748, 10),
  POS(2747, 3)
};

static TAB_NUM t_lambda_42_text_is_defined[] = {
  1, // locals
  0, // parameters
  // parse_bit_xor_operator !text $bit_xor_operator
  func_parse_bit_xor_operator, 0, 2, var_text, var_2749_30_bit_xor_operator,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_981, lambda_985, TAIL_CALL,
  POS(2749, 7),
  POS(2751, 14),
  POS(2750, 7)
};

static TAB_NUM t_lambda_981[] = {
  2, // locals
  0, // parameters
  // is_defined || bit_xor_operator.is_defined
  var_is_defined, 1, var_2743_0_derived_node, 1, LOCAL(1),
  // is_defined || bit_xor_operator.is_defined
  var_std__or, 2, LOCAL(1), lambda_982, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_983, lambda_984, TAIL_CALL,
  POS(2754, 26),
  POS(2754, 26),
  POS(2753, 11)
};

static TAB_NUM t_lambda_982[] = {
  1, // locals
  0, // parameters
  // is_defined
  var_is_defined, 1, var_2749_30_bit_xor_operator, 1, LOCAL(1),
  // bit_xor_operator.is_defined
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(2754, 57),
  POS(2754, 40)
};

static TAB_NUM t_lambda_983[] = {
  2, // locals
  0, // parameters
  // default_value(derived_node funky_types::bit_xor2)
  var_default_value, 2, var_2743_0_derived_node, var_funky_types__bit_xor2, 1, LOCAL(1),
  // default_value(derived_node funky_types::bit_xor2)
  LET, -4, LOCAL(1), var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_2745_1_position, var_funky__expression_of, var_2746_33_additive_expression, var_funky__operator_of, var_2749_30_bit_xor_operator, LOCAL(2),
  // 
  LET, 2, var_text, LOCAL(2), TAIL_CALL,
  POS(2757, 15),
  POS(2757, 15),
  POS(2755, 15)
};

static TAB_NUM t_lambda_984[] = {
  0, // locals
  0, // parameters
  //  text additive_expression
  LET, 2, var_text, var_2746_33_additive_expression, TAIL_CALL,
  POS(2762, 15)
};

static TAB_NUM t_lambda_985[] = {
  0, // locals
  0, // parameters
  //  undefined bit_xor_operator
  LET, 2, var_undefined, var_2749_30_bit_xor_operator, TAIL_CALL,
  POS(2763, 11)
};

static TAB_NUM t_lambda_986[] = {
  0, // locals
  0, // parameters
  //  undefined additive_expression
  LET, 2, var_undefined, var_2746_33_additive_expression, TAIL_CALL,
  POS(2764, 7)
};

static TAB_NUM t_func_parse_bit_xor_operator[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 3, lambda_987, lambda_991, lambda_993, TAIL_CALL,
  POS(2767, 3)
};

static TAB_NUM t_lambda_987[] = {
  3, // locals
  0, // parameters
  // text(1) == ' '
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_988, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_990, TAIL_CALL,
  POS(2770, 9),
  POS(2770, 9),
  POS(2769, 9),
  POS(2768, 7)
};

static TAB_NUM t_lambda_988[] = {
  3, // locals
  0, // parameters
  // text(2) == '^'
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '^'
  var_std__equal, 2, LOCAL(1), chr_94, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_989, 1, LOCAL(3),
  // text(2) == '^'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(2771, 9),
  POS(2771, 9),
  POS(2769, 9),
  POS(2771, 9)
};

static TAB_NUM t_lambda_989[] = {
  2, // locals
  0, // parameters
  // text(3) == ' '
  var_text, 1, num_3, 1, LOCAL(1),
  // text(3) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // text(3) == ' '
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2772, 9),
  POS(2772, 9),
  POS(2772, 9)
};

static TAB_NUM t_lambda_990[] = {
  0, // locals
  0, // parameters
  // range &text 4 -1
  var_range, 3, var_text, num_4, minus_num_1, 1, var_text,
  // parse_bit_xor
  func_parse_bit_xor, 0, TAIL_CALL,
  POS(2774, 9),
  POS(2775, 9)
};

static TAB_NUM t_lambda_991[] = {
  2, // locals
  0, // parameters
  // text(1) == '^'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '^'
  var_std__equal, 2, LOCAL(1), chr_94, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_992, TAIL_CALL,
  POS(2777, 7),
  POS(2777, 7),
  POS(2776, 7)
};

static TAB_NUM t_lambda_992[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_bit_xor
  func_parse_bit_xor, 0, TAIL_CALL,
  POS(2779, 9),
  POS(2780, 9)
};

static TAB_NUM t_lambda_993[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_994, TAIL_CALL,
  POS(2781, 7)
};

static TAB_NUM t_lambda_994[] = {
  0, // locals
  0, // parameters
  //  text undefined
  LET, 2, var_text, var_undefined, TAIL_CALL,
  POS(2783, 9)
};

static TAB_NUM t_func_parse_tagged_additive_expression[] = {
  1, // locals
  -1, // parameters
  var_undefined, var_2787_0_derived_node,
  // $position text
  LET, 1, var_text, 1, var_2789_1_position,
  // parse_multiplicative_expression !text $multiplicative_expression
  func_parse_multiplicative_expression, 0, 2, var_text, var_2790_39_multiplicative_expression,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_43_text_is_defined, lambda_1000, TAIL_CALL,
  POS(2789, 3),
  POS(2790, 3),
  POS(2792, 10),
  POS(2791, 3)
};

static TAB_NUM t_lambda_43_text_is_defined[] = {
  1, // locals
  0, // parameters
  // parse_additive_operator !text $additive_operator
  func_parse_additive_operator, 0, 2, var_text, var_2793_31_additive_operator,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_995, lambda_999, TAIL_CALL,
  POS(2793, 7),
  POS(2795, 14),
  POS(2794, 7)
};

static TAB_NUM t_lambda_995[] = {
  2, // locals
  0, // parameters
  // is_defined || additive_operator.is_defined
  var_is_defined, 1, var_2787_0_derived_node, 1, LOCAL(1),
  // is_defined || additive_operator.is_defined
  var_std__or, 2, LOCAL(1), lambda_996, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_997, lambda_998, TAIL_CALL,
  POS(2798, 26),
  POS(2798, 26),
  POS(2797, 11)
};

static TAB_NUM t_lambda_996[] = {
  1, // locals
  0, // parameters
  // is_defined
  var_is_defined, 1, var_2793_31_additive_operator, 1, LOCAL(1),
  // additive_operator.is_defined
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(2798, 58),
  POS(2798, 40)
};

static TAB_NUM t_lambda_997[] = {
  2, // locals
  0, // parameters
  // default_value(derived_node funky_types::tagged_additive_expression)
  var_default_value, 2, var_2787_0_derived_node, var_funky_types__tagged_additive_expression, 1, LOCAL(1),
  // default_value(derived_node funky_types::tagged_additive_expression)
  LET, -4, LOCAL(1), var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_2789_1_position, var_funky__expression_of, var_2790_39_multiplicative_expression, var_funky__operator_of, var_2793_31_additive_operator, LOCAL(2),
  // 
  LET, 2, var_text, LOCAL(2), TAIL_CALL,
  POS(2801, 15),
  POS(2801, 15),
  POS(2799, 15)
};

static TAB_NUM t_lambda_998[] = {
  0, // locals
  0, // parameters
  //  text multiplicative_expression
  LET, 2, var_text, var_2790_39_multiplicative_expression, TAIL_CALL,
  POS(2806, 15)
};

static TAB_NUM t_lambda_999[] = {
  0, // locals
  0, // parameters
  //  undefined additive_operator
  LET, 2, var_undefined, var_2793_31_additive_operator, TAIL_CALL,
  POS(2807, 11)
};

static TAB_NUM t_lambda_1000[] = {
  0, // locals
  0, // parameters
  //  undefined multiplicative_expression
  LET, 2, var_undefined, var_2790_39_multiplicative_expression, TAIL_CALL,
  POS(2808, 7)
};

static TAB_NUM t_func_parse_additive_expression[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_2811_1_position,
  // parse_multiplicative_expression !text $multiplicative_expression
  func_parse_multiplicative_expression, 0, 2, var_text, var_2812_39_multiplicative_expression,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_44_text_is_defined, lambda_1005, TAIL_CALL,
  POS(2811, 3),
  POS(2812, 3),
  POS(2814, 10),
  POS(2813, 3)
};

static TAB_NUM t_lambda_44_text_is_defined[] = {
  1, // locals
  0, // parameters
  // parse_additive_operator !text $additive_operator
  func_parse_additive_operator, 0, 2, var_text, var_2815_31_additive_operator,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1001, lambda_1004, TAIL_CALL,
  POS(2815, 7),
  POS(2817, 14),
  POS(2816, 7)
};

static TAB_NUM t_lambda_1001[] = {
  1, // locals
  0, // parameters
  // is_defined
  var_is_defined, 1, var_2815_31_additive_operator, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1002, lambda_1003, TAIL_CALL,
  POS(2820, 31),
  POS(2819, 11)
};

static TAB_NUM t_lambda_1002[] = {
  1, // locals
  0, // parameters
  // funky_types::expression
  LET, -4, var_funky_types__expression, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_2811_1_position, var_funky__expression_of, var_2812_39_multiplicative_expression, var_funky__operator_of, var_2815_31_additive_operator, LOCAL(1),
  // 
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(2823, 15),
  POS(2821, 15)
};

static TAB_NUM t_lambda_1003[] = {
  0, // locals
  0, // parameters
  //  text multiplicative_expression
  LET, 2, var_text, var_2812_39_multiplicative_expression, TAIL_CALL,
  POS(2828, 15)
};

static TAB_NUM t_lambda_1004[] = {
  0, // locals
  0, // parameters
  //  undefined additive_operator
  LET, 2, var_undefined, var_2815_31_additive_operator, TAIL_CALL,
  POS(2829, 11)
};

static TAB_NUM t_lambda_1005[] = {
  0, // locals
  0, // parameters
  //  undefined multiplicative_expression
  LET, 2, var_undefined, var_2812_39_multiplicative_expression, TAIL_CALL,
  POS(2830, 7)
};

static TAB_NUM t_func_parse_additive_operator[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 5, lambda_1006, lambda_1008, lambda_1012, lambda_1014, lambda_1018, TAIL_CALL,
  POS(2833, 3)
};

static TAB_NUM t_lambda_1006[] = {
  2, // locals
  0, // parameters
  // text(1) == '+'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '+'
  var_std__equal, 2, LOCAL(1), chr_43, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_1007, TAIL_CALL,
  POS(2835, 7),
  POS(2835, 7),
  POS(2834, 7)
};

static TAB_NUM t_lambda_1007[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_plus
  func_parse_plus, 0, TAIL_CALL,
  POS(2837, 9),
  POS(2838, 9)
};

static TAB_NUM t_lambda_1008[] = {
  3, // locals
  0, // parameters
  // text(1) == ' '
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_1009, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_1011, TAIL_CALL,
  POS(2841, 9),
  POS(2841, 9),
  POS(2840, 9),
  POS(2839, 7)
};

static TAB_NUM t_lambda_1009[] = {
  3, // locals
  0, // parameters
  // text(2) == '+'
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '+'
  var_std__equal, 2, LOCAL(1), chr_43, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_1010, 1, LOCAL(3),
  // text(2) == '+'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(2842, 9),
  POS(2842, 9),
  POS(2840, 9),
  POS(2842, 9)
};

static TAB_NUM t_lambda_1010[] = {
  2, // locals
  0, // parameters
  // text(3) == ' '
  var_text, 1, num_3, 1, LOCAL(1),
  // text(3) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // text(3) == ' '
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2843, 9),
  POS(2843, 9),
  POS(2843, 9)
};

static TAB_NUM t_lambda_1011[] = {
  0, // locals
  0, // parameters
  // range &text 4 -1
  var_range, 3, var_text, num_4, minus_num_1, 1, var_text,
  // parse_plus
  func_parse_plus, 0, TAIL_CALL,
  POS(2845, 9),
  POS(2846, 9)
};

static TAB_NUM t_lambda_1012[] = {
  2, // locals
  0, // parameters
  // text(1) == '-'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '-'
  var_std__equal, 2, LOCAL(1), chr_45, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_1013, TAIL_CALL,
  POS(2848, 7),
  POS(2848, 7),
  POS(2847, 7)
};

static TAB_NUM t_lambda_1013[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_minus
  func_parse_minus, 0, TAIL_CALL,
  POS(2850, 9),
  POS(2851, 9)
};

static TAB_NUM t_lambda_1014[] = {
  3, // locals
  0, // parameters
  // text(1) == ' '
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_1015, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_1017, TAIL_CALL,
  POS(2854, 9),
  POS(2854, 9),
  POS(2853, 9),
  POS(2852, 7)
};

static TAB_NUM t_lambda_1015[] = {
  3, // locals
  0, // parameters
  // text(2) == '-'
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '-'
  var_std__equal, 2, LOCAL(1), chr_45, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_1016, 1, LOCAL(3),
  // text(2) == '-'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(2855, 9),
  POS(2855, 9),
  POS(2853, 9),
  POS(2855, 9)
};

static TAB_NUM t_lambda_1016[] = {
  2, // locals
  0, // parameters
  // text(3) == ' '
  var_text, 1, num_3, 1, LOCAL(1),
  // text(3) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // text(3) == ' '
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2856, 9),
  POS(2856, 9),
  POS(2856, 9)
};

static TAB_NUM t_lambda_1017[] = {
  0, // locals
  0, // parameters
  // range &text 4 -1
  var_range, 3, var_text, num_4, minus_num_1, 1, var_text,
  // parse_minus
  func_parse_minus, 0, TAIL_CALL,
  POS(2858, 9),
  POS(2859, 9)
};

static TAB_NUM t_lambda_1018[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_1019, TAIL_CALL,
  POS(2860, 7)
};

static TAB_NUM t_lambda_1019[] = {
  0, // locals
  0, // parameters
  //  text undefined
  LET, 2, var_text, var_undefined, TAIL_CALL,
  POS(2862, 9)
};

static TAB_NUM t_func_parse_plus[] = {
  0, // locals
  0, // parameters
  // parse_plus2 funky_types::plus
  func_parse_plus2, 1, var_funky_types__plus, TAIL_CALL,
  POS(2865, 3)
};

static TAB_NUM t_func_parse_plus2[] = {
  1, // locals
  -1, // parameters
  var_undefined, var_2869_0_derived_node,
  // $position text
  LET, 1, var_text, 1, var_2871_1_position,
  // parse_multiplicative_expression !text $multiplicative_expression
  func_parse_multiplicative_expression, 0, 2, var_text, var_2872_39_multiplicative_expression,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_45_text_is_defined, lambda_1025, TAIL_CALL,
  POS(2871, 3),
  POS(2872, 3),
  POS(2874, 10),
  POS(2873, 3)
};

static TAB_NUM t_lambda_45_text_is_defined[] = {
  1, // locals
  0, // parameters
  // parse_additive_operator !text $additive_operator
  func_parse_additive_operator, 0, 2, var_text, var_2875_31_additive_operator,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1020, lambda_1024, TAIL_CALL,
  POS(2875, 7),
  POS(2877, 14),
  POS(2876, 7)
};

static TAB_NUM t_lambda_1020[] = {
  2, // locals
  0, // parameters
  // is_defined || additive_operator.is_defined
  var_is_defined, 1, var_2869_0_derived_node, 1, LOCAL(1),
  // is_defined || additive_operator.is_defined
  var_std__or, 2, LOCAL(1), lambda_1021, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_1022, lambda_1023, TAIL_CALL,
  POS(2880, 26),
  POS(2880, 26),
  POS(2879, 11)
};

static TAB_NUM t_lambda_1021[] = {
  1, // locals
  0, // parameters
  // is_defined
  var_is_defined, 1, var_2875_31_additive_operator, 1, LOCAL(1),
  // additive_operator.is_defined
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(2880, 58),
  POS(2880, 40)
};

static TAB_NUM t_lambda_1022[] = {
  2, // locals
  0, // parameters
  // default_value(derived_node funky_types::plus2)
  var_default_value, 2, var_2869_0_derived_node, var_funky_types__plus2, 1, LOCAL(1),
  // default_value(derived_node funky_types::plus2)
  LET, -4, LOCAL(1), var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_2871_1_position, var_funky__expression_of, var_2872_39_multiplicative_expression, var_funky__operator_of, var_2875_31_additive_operator, LOCAL(2),
  // 
  LET, 2, var_text, LOCAL(2), TAIL_CALL,
  POS(2883, 15),
  POS(2883, 15),
  POS(2881, 15)
};

static TAB_NUM t_lambda_1023[] = {
  0, // locals
  0, // parameters
  //  text multiplicative_expression
  LET, 2, var_text, var_2872_39_multiplicative_expression, TAIL_CALL,
  POS(2888, 15)
};

static TAB_NUM t_lambda_1024[] = {
  0, // locals
  0, // parameters
  //  undefined additive_operator
  LET, 2, var_undefined, var_2875_31_additive_operator, TAIL_CALL,
  POS(2889, 11)
};

static TAB_NUM t_lambda_1025[] = {
  0, // locals
  0, // parameters
  //  undefined multiplicative_expression
  LET, 2, var_undefined, var_2872_39_multiplicative_expression, TAIL_CALL,
  POS(2890, 7)
};

static TAB_NUM t_func_parse_minus[] = {
  0, // locals
  0, // parameters
  // parse_minus2 funky_types::minus
  func_parse_minus2, 1, var_funky_types__minus, TAIL_CALL,
  POS(2893, 3)
};

static TAB_NUM t_func_parse_minus2[] = {
  1, // locals
  -1, // parameters
  var_undefined, var_2897_0_derived_node,
  // $position text
  LET, 1, var_text, 1, var_2899_1_position,
  // parse_multiplicative_expression !text $multiplicative_expression
  func_parse_multiplicative_expression, 0, 2, var_text, var_2900_39_multiplicative_expression,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_46_text_is_defined, lambda_1031, TAIL_CALL,
  POS(2899, 3),
  POS(2900, 3),
  POS(2902, 10),
  POS(2901, 3)
};

static TAB_NUM t_lambda_46_text_is_defined[] = {
  1, // locals
  0, // parameters
  // parse_additive_operator !text $additive_operator
  func_parse_additive_operator, 0, 2, var_text, var_2903_31_additive_operator,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1026, lambda_1030, TAIL_CALL,
  POS(2903, 7),
  POS(2905, 14),
  POS(2904, 7)
};

static TAB_NUM t_lambda_1026[] = {
  2, // locals
  0, // parameters
  // is_defined || additive_operator.is_defined
  var_is_defined, 1, var_2897_0_derived_node, 1, LOCAL(1),
  // is_defined || additive_operator.is_defined
  var_std__or, 2, LOCAL(1), lambda_1027, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_1028, lambda_1029, TAIL_CALL,
  POS(2908, 26),
  POS(2908, 26),
  POS(2907, 11)
};

static TAB_NUM t_lambda_1027[] = {
  1, // locals
  0, // parameters
  // is_defined
  var_is_defined, 1, var_2903_31_additive_operator, 1, LOCAL(1),
  // additive_operator.is_defined
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(2908, 58),
  POS(2908, 40)
};

static TAB_NUM t_lambda_1028[] = {
  2, // locals
  0, // parameters
  // default_value(derived_node funky_types::minus2)
  var_default_value, 2, var_2897_0_derived_node, var_funky_types__minus2, 1, LOCAL(1),
  // default_value(derived_node funky_types::minus2)
  LET, -4, LOCAL(1), var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_2899_1_position, var_funky__expression_of, var_2900_39_multiplicative_expression, var_funky__operator_of, var_2903_31_additive_operator, LOCAL(2),
  // 
  LET, 2, var_text, LOCAL(2), TAIL_CALL,
  POS(2911, 15),
  POS(2911, 15),
  POS(2909, 15)
};

static TAB_NUM t_lambda_1029[] = {
  0, // locals
  0, // parameters
  //  text multiplicative_expression
  LET, 2, var_text, var_2900_39_multiplicative_expression, TAIL_CALL,
  POS(2916, 15)
};

static TAB_NUM t_lambda_1030[] = {
  0, // locals
  0, // parameters
  //  undefined additive_operator
  LET, 2, var_undefined, var_2903_31_additive_operator, TAIL_CALL,
  POS(2917, 11)
};

static TAB_NUM t_lambda_1031[] = {
  0, // locals
  0, // parameters
  //  undefined multiplicative_expression
  LET, 2, var_undefined, var_2900_39_multiplicative_expression, TAIL_CALL,
  POS(2918, 7)
};

static TAB_NUM t_func_parse_multiplicative_expression[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_2921_1_position,
  // parse_an_expression !text $an_expression
  func_parse_an_expression, 0, 2, var_text, var_2922_27_an_expression,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_47_text_is_defined, lambda_1036, TAIL_CALL,
  POS(2921, 3),
  POS(2922, 3),
  POS(2924, 10),
  POS(2923, 3)
};

static TAB_NUM t_lambda_47_text_is_defined[] = {
  1, // locals
  0, // parameters
  // parse_multiplicative_operator !text $multiplicative_operator
  func_parse_multiplicative_operator, 0, 2, var_text, var_2925_37_multiplicative_operator,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1032, lambda_1035, TAIL_CALL,
  POS(2925, 7),
  POS(2927, 14),
  POS(2926, 7)
};

static TAB_NUM t_lambda_1032[] = {
  1, // locals
  0, // parameters
  // is_defined
  var_is_defined, 1, var_2925_37_multiplicative_operator, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1033, lambda_1034, TAIL_CALL,
  POS(2930, 37),
  POS(2929, 11)
};

static TAB_NUM t_lambda_1033[] = {
  1, // locals
  0, // parameters
  // funky_types::expression
  LET, -4, var_funky_types__expression, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_2921_1_position, var_funky__expression_of, var_2922_27_an_expression, var_funky__operator_of, var_2925_37_multiplicative_operator, LOCAL(1),
  // 
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(2933, 15),
  POS(2931, 15)
};

static TAB_NUM t_lambda_1034[] = {
  0, // locals
  0, // parameters
  //  text an_expression
  LET, 2, var_text, var_2922_27_an_expression, TAIL_CALL,
  POS(2938, 15)
};

static TAB_NUM t_lambda_1035[] = {
  0, // locals
  0, // parameters
  //  undefined multiplicative_operator
  LET, 2, var_undefined, var_2925_37_multiplicative_operator, TAIL_CALL,
  POS(2939, 11)
};

static TAB_NUM t_lambda_1036[] = {
  0, // locals
  0, // parameters
  //  undefined an_expression
  LET, 2, var_undefined, var_2922_27_an_expression, TAIL_CALL,
  POS(2940, 7)
};

static TAB_NUM t_func_parse_multiplicative_operator[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 5, lambda_1037, lambda_1039, lambda_1043, lambda_1045, lambda_1049, TAIL_CALL,
  POS(2943, 3)
};

static TAB_NUM t_lambda_1037[] = {
  2, // locals
  0, // parameters
  // text(1) == '*'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '*'
  var_std__equal, 2, LOCAL(1), chr_42, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_1038, TAIL_CALL,
  POS(2945, 7),
  POS(2945, 7),
  POS(2944, 7)
};

static TAB_NUM t_lambda_1038[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_times
  func_parse_times, 0, TAIL_CALL,
  POS(2947, 9),
  POS(2948, 9)
};

static TAB_NUM t_lambda_1039[] = {
  3, // locals
  0, // parameters
  // text(1) == ' '
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_1040, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_1042, TAIL_CALL,
  POS(2951, 9),
  POS(2951, 9),
  POS(2950, 9),
  POS(2949, 7)
};

static TAB_NUM t_lambda_1040[] = {
  3, // locals
  0, // parameters
  // text(2) == '*'
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '*'
  var_std__equal, 2, LOCAL(1), chr_42, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_1041, 1, LOCAL(3),
  // text(2) == '*'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(2952, 9),
  POS(2952, 9),
  POS(2950, 9),
  POS(2952, 9)
};

static TAB_NUM t_lambda_1041[] = {
  2, // locals
  0, // parameters
  // text(3) == ' '
  var_text, 1, num_3, 1, LOCAL(1),
  // text(3) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // text(3) == ' '
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2953, 9),
  POS(2953, 9),
  POS(2953, 9)
};

static TAB_NUM t_lambda_1042[] = {
  0, // locals
  0, // parameters
  // range &text 4 -1
  var_range, 3, var_text, num_4, minus_num_1, 1, var_text,
  // parse_times
  func_parse_times, 0, TAIL_CALL,
  POS(2955, 9),
  POS(2956, 9)
};

static TAB_NUM t_lambda_1043[] = {
  2, // locals
  0, // parameters
  // text(1) == '/'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '/'
  var_std__equal, 2, LOCAL(1), chr_47, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_1044, TAIL_CALL,
  POS(2958, 7),
  POS(2958, 7),
  POS(2957, 7)
};

static TAB_NUM t_lambda_1044[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_over
  func_parse_over, 0, TAIL_CALL,
  POS(2960, 9),
  POS(2961, 9)
};

static TAB_NUM t_lambda_1045[] = {
  3, // locals
  0, // parameters
  // text(1) == ' '
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_1046, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_1048, TAIL_CALL,
  POS(2964, 9),
  POS(2964, 9),
  POS(2963, 9),
  POS(2962, 7)
};

static TAB_NUM t_lambda_1046[] = {
  3, // locals
  0, // parameters
  // text(2) == '/'
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '/'
  var_std__equal, 2, LOCAL(1), chr_47, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_1047, 1, LOCAL(3),
  // text(2) == '/'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(2965, 9),
  POS(2965, 9),
  POS(2963, 9),
  POS(2965, 9)
};

static TAB_NUM t_lambda_1047[] = {
  2, // locals
  0, // parameters
  // text(3) == ' '
  var_text, 1, num_3, 1, LOCAL(1),
  // text(3) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // text(3) == ' '
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2966, 9),
  POS(2966, 9),
  POS(2966, 9)
};

static TAB_NUM t_lambda_1048[] = {
  0, // locals
  0, // parameters
  // range &text 4 -1
  var_range, 3, var_text, num_4, minus_num_1, 1, var_text,
  // parse_over
  func_parse_over, 0, TAIL_CALL,
  POS(2968, 9),
  POS(2969, 9)
};

static TAB_NUM t_lambda_1049[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_1050, TAIL_CALL,
  POS(2970, 7)
};

static TAB_NUM t_lambda_1050[] = {
  0, // locals
  0, // parameters
  //  text undefined
  LET, 2, var_text, var_undefined, TAIL_CALL,
  POS(2972, 9)
};

static TAB_NUM t_func_parse_times[] = {
  0, // locals
  0, // parameters
  // parse_times2 funky_types::times
  func_parse_times2, 1, var_funky_types__times, TAIL_CALL,
  POS(2975, 3)
};

static TAB_NUM t_func_parse_times2[] = {
  1, // locals
  -1, // parameters
  var_undefined, var_2979_0_derived_node,
  // $position text
  LET, 1, var_text, 1, var_2981_1_position,
  // parse_an_expression !text $an_expression
  func_parse_an_expression, 0, 2, var_text, var_2982_27_an_expression,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_48_text_is_defined, lambda_1056, TAIL_CALL,
  POS(2981, 3),
  POS(2982, 3),
  POS(2984, 10),
  POS(2983, 3)
};

static TAB_NUM t_lambda_48_text_is_defined[] = {
  1, // locals
  0, // parameters
  // parse_multiplicative_operator !text $multiplicative_operator
  func_parse_multiplicative_operator, 0, 2, var_text, var_2985_37_multiplicative_operator,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1051, lambda_1055, TAIL_CALL,
  POS(2985, 7),
  POS(2987, 14),
  POS(2986, 7)
};

static TAB_NUM t_lambda_1051[] = {
  2, // locals
  0, // parameters
  // is_defined || multiplicative_operator.is_defined
  var_is_defined, 1, var_2979_0_derived_node, 1, LOCAL(1),
  // is_defined || multiplicative_operator.is_defined
  var_std__or, 2, LOCAL(1), lambda_1052, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_1053, lambda_1054, TAIL_CALL,
  POS(2990, 26),
  POS(2990, 26),
  POS(2989, 11)
};

static TAB_NUM t_lambda_1052[] = {
  1, // locals
  0, // parameters
  // is_defined
  var_is_defined, 1, var_2985_37_multiplicative_operator, 1, LOCAL(1),
  // multiplicative_operator.is_defined
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(2990, 64),
  POS(2990, 40)
};

static TAB_NUM t_lambda_1053[] = {
  2, // locals
  0, // parameters
  // default_value(derived_node funky_types::times2)
  var_default_value, 2, var_2979_0_derived_node, var_funky_types__times2, 1, LOCAL(1),
  // default_value(derived_node funky_types::times2)
  LET, -4, LOCAL(1), var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_2981_1_position, var_funky__expression_of, var_2982_27_an_expression, var_funky__operator_of, var_2985_37_multiplicative_operator, LOCAL(2),
  // 
  LET, 2, var_text, LOCAL(2), TAIL_CALL,
  POS(2993, 15),
  POS(2993, 15),
  POS(2991, 15)
};

static TAB_NUM t_lambda_1054[] = {
  0, // locals
  0, // parameters
  //  text an_expression
  LET, 2, var_text, var_2982_27_an_expression, TAIL_CALL,
  POS(2998, 15)
};

static TAB_NUM t_lambda_1055[] = {
  0, // locals
  0, // parameters
  //  undefined multiplicative_operator
  LET, 2, var_undefined, var_2985_37_multiplicative_operator, TAIL_CALL,
  POS(2999, 11)
};

static TAB_NUM t_lambda_1056[] = {
  0, // locals
  0, // parameters
  //  undefined an_expression
  LET, 2, var_undefined, var_2982_27_an_expression, TAIL_CALL,
  POS(3000, 7)
};

static TAB_NUM t_func_parse_over[] = {
  0, // locals
  0, // parameters
  // parse_over2 funky_types::over
  func_parse_over2, 1, var_funky_types__over, TAIL_CALL,
  POS(3003, 3)
};

static TAB_NUM t_func_parse_over2[] = {
  1, // locals
  -1, // parameters
  var_undefined, var_3007_0_derived_node,
  // $position text
  LET, 1, var_text, 1, var_3009_1_position,
  // parse_an_expression !text $an_expression
  func_parse_an_expression, 0, 2, var_text, var_3010_27_an_expression,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_49_text_is_defined, lambda_1062, TAIL_CALL,
  POS(3009, 3),
  POS(3010, 3),
  POS(3012, 10),
  POS(3011, 3)
};

static TAB_NUM t_lambda_49_text_is_defined[] = {
  1, // locals
  0, // parameters
  // parse_multiplicative_operator !text $multiplicative_operator
  func_parse_multiplicative_operator, 0, 2, var_text, var_3013_37_multiplicative_operator,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1057, lambda_1061, TAIL_CALL,
  POS(3013, 7),
  POS(3015, 14),
  POS(3014, 7)
};

static TAB_NUM t_lambda_1057[] = {
  2, // locals
  0, // parameters
  // is_defined || multiplicative_operator.is_defined
  var_is_defined, 1, var_3007_0_derived_node, 1, LOCAL(1),
  // is_defined || multiplicative_operator.is_defined
  var_std__or, 2, LOCAL(1), lambda_1058, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_1059, lambda_1060, TAIL_CALL,
  POS(3018, 26),
  POS(3018, 26),
  POS(3017, 11)
};

static TAB_NUM t_lambda_1058[] = {
  1, // locals
  0, // parameters
  // is_defined
  var_is_defined, 1, var_3013_37_multiplicative_operator, 1, LOCAL(1),
  // multiplicative_operator.is_defined
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(3018, 64),
  POS(3018, 40)
};

static TAB_NUM t_lambda_1059[] = {
  2, // locals
  0, // parameters
  // default_value(derived_node funky_types::over2)
  var_default_value, 2, var_3007_0_derived_node, var_funky_types__over2, 1, LOCAL(1),
  // default_value(derived_node funky_types::over2)
  LET, -4, LOCAL(1), var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_3009_1_position, var_funky__expression_of, var_3010_27_an_expression, var_funky__operator_of, var_3013_37_multiplicative_operator, LOCAL(2),
  // 
  LET, 2, var_text, LOCAL(2), TAIL_CALL,
  POS(3021, 15),
  POS(3021, 15),
  POS(3019, 15)
};

static TAB_NUM t_lambda_1060[] = {
  0, // locals
  0, // parameters
  //  text an_expression
  LET, 2, var_text, var_3010_27_an_expression, TAIL_CALL,
  POS(3026, 15)
};

static TAB_NUM t_lambda_1061[] = {
  0, // locals
  0, // parameters
  //  undefined multiplicative_operator
  LET, 2, var_undefined, var_3013_37_multiplicative_operator, TAIL_CALL,
  POS(3027, 11)
};

static TAB_NUM t_lambda_1062[] = {
  0, // locals
  0, // parameters
  //  undefined an_expression
  LET, 2, var_undefined, var_3010_27_an_expression, TAIL_CALL,
  POS(3028, 7)
};

static TAB_NUM t_func_parse_an_expression[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 8, lambda_1063, lambda_1065, lambda_1068, lambda_1070, lambda_1072, lambda_1074, lambda_1079, lambda_1081, TAIL_CALL,
  POS(3031, 3)
};

static TAB_NUM t_lambda_1063[] = {
  2, // locals
  0, // parameters
  // text(1) == '('
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '('
  var_std__equal, 2, LOCAL(1), chr_40, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_1064, TAIL_CALL,
  POS(3033, 7),
  POS(3033, 7),
  POS(3032, 7)
};

static TAB_NUM t_lambda_1064[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_parenthesed_expression_without_prefix
  func_parse_parenthesed_expression_without_prefix, 0, TAIL_CALL,
  POS(3035, 9),
  POS(3036, 9)
};

static TAB_NUM t_lambda_1065[] = {
  3, // locals
  0, // parameters
  // text(1) == '''
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '''
  var_std__equal, 2, LOCAL(1), chr_39, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_1066, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_1067, TAIL_CALL,
  POS(3039, 9),
  POS(3039, 9),
  POS(3038, 9),
  POS(3037, 7)
};

static TAB_NUM t_lambda_1066[] = {
  2, // locals
  0, // parameters
  // text(2) == '@@'
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '@@'
  var_std__equal, 2, LOCAL(1), chr_64, 1, LOCAL(2),
  // text(2) == '@@'
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(3040, 9),
  POS(3040, 9),
  POS(3040, 9)
};

static TAB_NUM t_lambda_1067[] = {
  0, // locals
  0, // parameters
  // range &text 3 -1
  var_range, 3, var_text, num_3, minus_num_1, 1, var_text,
  // parse_special_character_literal
  func_parse_special_character_literal, 0, TAIL_CALL,
  POS(3042, 9),
  POS(3043, 9)
};

static TAB_NUM t_lambda_1068[] = {
  2, // locals
  0, // parameters
  // text(1) == '''
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '''
  var_std__equal, 2, LOCAL(1), chr_39, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_1069, TAIL_CALL,
  POS(3045, 7),
  POS(3045, 7),
  POS(3044, 7)
};

static TAB_NUM t_lambda_1069[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_character_literal_without_prefix
  func_parse_character_literal_without_prefix, 0, TAIL_CALL,
  POS(3047, 9),
  POS(3048, 9)
};

static TAB_NUM t_lambda_1070[] = {
  2, // locals
  0, // parameters
  // text(1) == '"'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '"'
  var_std__equal, 2, LOCAL(1), chr_34, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_1071, TAIL_CALL,
  POS(3050, 7),
  POS(3050, 7),
  POS(3049, 7)
};

static TAB_NUM t_lambda_1071[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_string_literal_without_prefix
  func_parse_string_literal_without_prefix, 0, TAIL_CALL,
  POS(3052, 9),
  POS(3053, 9)
};

static TAB_NUM t_lambda_1072[] = {
  2, // locals
  0, // parameters
  // text(1) == '-'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '-'
  var_std__equal, 2, LOCAL(1), chr_45, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_1073, TAIL_CALL,
  POS(3055, 7),
  POS(3055, 7),
  POS(3054, 7)
};

static TAB_NUM t_lambda_1073[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_negation_without_prefix
  func_parse_negation_without_prefix, 0, TAIL_CALL,
  POS(3057, 9),
  POS(3058, 9)
};

static TAB_NUM t_lambda_1074[] = {
  5, // locals
  0, // parameters
  // text(1) >= 'a' && text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z')
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) >= 'a' && text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z')
  var_std__less, 2, LOCAL(1), chr_97, 1, LOCAL(2),
  // text(1) >= 'a' && text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) >= 'a' && text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z')
  var_std__and, 2, LOCAL(3), lambda_1075, 1, LOCAL(4),
  // text(1) >= 'a' && text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z')
  var_std__or, 2, LOCAL(4), lambda_1076, 1, LOCAL(5),
  // 
  LET, 2, LOCAL(5), lambda_1078, TAIL_CALL,
  POS(3060, 8),
  POS(3060, 8),
  POS(3060, 8),
  POS(3060, 8),
  POS(3060, 8),
  POS(3059, 7)
};

static TAB_NUM t_lambda_1075[] = {
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
  POS(3060, 26),
  POS(3060, 38),
  POS(3060, 38),
  POS(3060, 26)
};

static TAB_NUM t_lambda_1076[] = {
  4, // locals
  0, // parameters
  // text(1) >= 'A' && text(1) <= 'Z')
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) >= 'A' && text(1) <= 'Z')
  var_std__less, 2, LOCAL(1), chr_65, 1, LOCAL(2),
  // text(1) >= 'A' && text(1) <= 'Z')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) >= 'A' && text(1) <= 'Z')
  var_std__and, 2, LOCAL(3), lambda_1077, 1, LOCAL(4),
  // text(1) >= 'A' && text(1) <= 'Z')
  LET, 1, LOCAL(4), TAIL_CALL,
  POS(3060, 46),
  POS(3060, 46),
  POS(3060, 46),
  POS(3060, 46),
  POS(3060, 46)
};

static TAB_NUM t_lambda_1077[] = {
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
  POS(3060, 64),
  POS(3060, 76),
  POS(3060, 76),
  POS(3060, 64)
};

static TAB_NUM t_lambda_1078[] = {
  0, // locals
  0, // parameters
  // !str text
  LET, 1, var_text, 1, var_str,
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_functor_without_prefix
  func_parse_functor_without_prefix, 0, TAIL_CALL,
  POS(3062, 9),
  POS(3063, 9),
  POS(3064, 9)
};

static TAB_NUM t_lambda_1079[] = {
  2, // locals
  0, // parameters
  // text(1) == '`'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '`'
  var_std__equal, 2, LOCAL(1), chr_96, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_1080, TAIL_CALL,
  POS(3066, 7),
  POS(3066, 7),
  POS(3065, 7)
};

static TAB_NUM t_lambda_1080[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_backquoted_without_prefix
  func_parse_backquoted_without_prefix, 0, TAIL_CALL,
  POS(3068, 9),
  POS(3069, 9)
};

static TAB_NUM t_lambda_1081[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_1082, TAIL_CALL,
  POS(3070, 7)
};

static TAB_NUM t_lambda_1082[] = {
  0, // locals
  0, // parameters
  // !expected "an expression"
  LET, 1, str_an_expression, 1, var_expected,
  // !at text
  LET, 1, var_text, 1, var_at,
  // parse_numeric_literal
  func_parse_numeric_literal, 0, TAIL_CALL,
  POS(3073, 9),
  POS(3074, 9),
  POS(3075, 9)
};

static TAB_NUM t_func_parse_parenthesed_expression_without_prefix[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_3078_1_position,
  // parse_inline_expression !text $inline_expression
  func_parse_inline_expression, 0, 2, var_text, var_3079_31_inline_expression,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_50_text_is_defined, lambda_1087, TAIL_CALL,
  POS(3078, 3),
  POS(3079, 3),
  POS(3081, 10),
  POS(3080, 3)
};

static TAB_NUM t_lambda_50_text_is_defined[] = {
  2, // locals
  0, // parameters
  // text(1) == ')':
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == ')':
  var_std__equal, 2, LOCAL(1), chr_41, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_1083, lambda_1086, TAIL_CALL,
  POS(3083, 9),
  POS(3083, 9),
  POS(3082, 7)
};

static TAB_NUM t_lambda_1083[] = {
  1, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_inline_calls !text $inline_calls
  func_parse_inline_calls, 0, 2, var_text, var_3085_26_inline_calls,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1084, lambda_1085, TAIL_CALL,
  POS(3084, 11),
  POS(3085, 11),
  POS(3087, 18),
  POS(3086, 11)
};

static TAB_NUM t_lambda_1084[] = {
  1, // locals
  0, // parameters
  // funky_types::parenthesed_expression
  LET, -4, var_funky_types__parenthesed_expression, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_3078_1_position, var_funky__expression_of, var_3079_31_inline_expression, var_funky__calls_of, var_3085_26_inline_calls, LOCAL(1),
  // 
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(3090, 15),
  POS(3088, 15)
};

static TAB_NUM t_lambda_1085[] = {
  0, // locals
  0, // parameters
  //  undefined inline_calls
  LET, 2, var_undefined, var_3085_26_inline_calls, TAIL_CALL,
  POS(3095, 15)
};

static TAB_NUM t_lambda_1086[] = {
  0, // locals
  0, // parameters
  // syntax_error "')'"
  func_syntax_error, 1, string_6, TAIL_CALL,
  POS(3097, 11)
};

static TAB_NUM t_lambda_1087[] = {
  0, // locals
  0, // parameters
  //  undefined inline_expression
  LET, 2, var_undefined, var_3079_31_inline_expression, TAIL_CALL,
  POS(3098, 7)
};

static TAB_NUM t_func_parse_inline_expression[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 3, lambda_1088, lambda_1090, lambda_1093, TAIL_CALL,
  POS(3101, 3)
};

static TAB_NUM t_lambda_1088[] = {
  2, // locals
  0, // parameters
  // text(1) == ':'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == ':'
  var_std__equal, 2, LOCAL(1), chr_58, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_1089, TAIL_CALL,
  POS(3103, 7),
  POS(3103, 7),
  POS(3102, 7)
};

static TAB_NUM t_lambda_1089[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_inline_body_without_prefix
  func_parse_inline_body_without_prefix, 0, TAIL_CALL,
  POS(3105, 9),
  POS(3106, 9)
};

static TAB_NUM t_lambda_1090[] = {
  3, // locals
  0, // parameters
  // text(1) == '-'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '-'
  var_std__equal, 2, LOCAL(1), chr_45, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_1091, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_1092, TAIL_CALL,
  POS(3109, 9),
  POS(3109, 9),
  POS(3108, 9),
  POS(3107, 7)
};

static TAB_NUM t_lambda_1091[] = {
  2, // locals
  0, // parameters
  // text(2) == '>'
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '>'
  var_std__equal, 2, LOCAL(1), chr_62, 1, LOCAL(2),
  // text(2) == '>'
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(3110, 9),
  POS(3110, 9),
  POS(3110, 9)
};

static TAB_NUM t_lambda_1092[] = {
  0, // locals
  0, // parameters
  // range &text 3 -1
  var_range, 3, var_text, num_3, minus_num_1, 1, var_text,
  // parse_inline_return_without_prefix
  func_parse_inline_return_without_prefix, 0, TAIL_CALL,
  POS(3112, 9),
  POS(3113, 9)
};

static TAB_NUM t_lambda_1093[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_1094, TAIL_CALL,
  POS(3114, 7)
};

static TAB_NUM t_lambda_1094[] = {
  0, // locals
  0, // parameters
  // !expected "inline expression"
  LET, 1, str_inline_expressio, 1, var_expected,
  // !at text
  LET, 1, var_text, 1, var_at,
  // parse_expression
  func_parse_expression, 0, TAIL_CALL,
  POS(3117, 9),
  POS(3118, 9),
  POS(3119, 9)
};

static TAB_NUM t_func_parse_backquoted_without_prefix[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_3122_1_position,
  // parse_an_expression !text $an_expression
  func_parse_an_expression, 0, 2, var_text, var_3123_27_an_expression,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1095, lambda_1096, TAIL_CALL,
  POS(3122, 3),
  POS(3123, 3),
  POS(3125, 10),
  POS(3124, 3)
};

static TAB_NUM t_lambda_1095[] = {
  1, // locals
  0, // parameters
  // funky_types::backquoted
  LET, -3, var_funky_types__backquoted, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_3122_1_position, var_funky__expression_of, var_3123_27_an_expression, LOCAL(1),
  // 
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(3128, 7),
  POS(3126, 7)
};

static TAB_NUM t_lambda_1096[] = {
  0, // locals
  0, // parameters
  //  undefined an_expression
  LET, 2, var_undefined, var_3123_27_an_expression, TAIL_CALL,
  POS(3132, 7)
};

static TAB_NUM t_func_parse_negation_without_prefix[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_3135_1_position,
  // parse_an_expression !text $an_expression
  func_parse_an_expression, 0, 2, var_text, var_3136_27_an_expression,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1097, lambda_1098, TAIL_CALL,
  POS(3135, 3),
  POS(3136, 3),
  POS(3138, 10),
  POS(3137, 3)
};

static TAB_NUM t_lambda_1097[] = {
  1, // locals
  0, // parameters
  // funky_types::negation
  LET, -3, var_funky_types__negation, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_3135_1_position, var_funky__expression_of, var_3136_27_an_expression, LOCAL(1),
  // 
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(3141, 7),
  POS(3139, 7)
};

static TAB_NUM t_lambda_1098[] = {
  0, // locals
  0, // parameters
  //  undefined an_expression
  LET, 2, var_undefined, var_3136_27_an_expression, TAIL_CALL,
  POS(3145, 7)
};

static TAB_NUM t_func_parse_multiline_operator[] = {
  1, // locals
  -1, // parameters
  var_undefined, var_3149_0_derived_node,
  // $position text
  LET, 1, var_text, 1, var_3151_1_position,
  // parse_trailing_remark !text $trailing_remark
  func_parse_trailing_remark, 0, 2, var_text, var_3152_29_trailing_remark,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_51_text_is_defined, lambda_1104, TAIL_CALL,
  POS(3151, 3),
  POS(3152, 3),
  POS(3154, 10),
  POS(3153, 3)
};

static TAB_NUM t_lambda_51_text_is_defined[] = {
  2, // locals
  0, // parameters
  // text == "@nl;" && subgroups.is_defined:
  var_std__equal, 2, var_text, string_2, 1, LOCAL(1),
  // text == "@nl;" && subgroups.is_defined:
  var_std__and, 2, LOCAL(1), lambda_1099, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_1100, lambda_1103, TAIL_CALL,
  POS(3156, 9),
  POS(3156, 9),
  POS(3155, 7)
};

static TAB_NUM t_lambda_1099[] = {
  1, // locals
  0, // parameters
  // is_defined:
  var_is_defined, 1, var_subgroups, 1, LOCAL(1),
  // subgroups.is_defined:
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(3156, 37),
  POS(3156, 27)
};

static TAB_NUM t_lambda_1100[] = {
  1, // locals
  0, // parameters
  // $line_start_arguments parse_groups(funky::parse_line_start_arguments_group)
  func_parse_groups, 1, var_funky__parse_line_start_arguments_group, 1, var_3157_1_line_start_arguments,
  // $error find_first(line_start_arguments is_an_error)
  var_find_first, 2, var_3157_1_line_start_arguments, var_is_an_error, 1, var_3158_1_error,
  // is_an_error
  var_is_an_error, 1, var_3158_1_error, 1, LOCAL(1),
  // if error.is_an_error
  var_if, 3, LOCAL(1), lambda_1101, lambda_1102, TAIL_CALL,
  POS(3157, 11),
  POS(3158, 11),
  POS(3159, 20),
  POS(3159, 11)
};

static TAB_NUM t_lambda_1101[] = {
  0, // locals
  0, // parameters
  //  undefined error
  LET, 2, var_undefined, var_3158_1_error, TAIL_CALL,
  POS(3160, 15)
};

static TAB_NUM t_lambda_1102[] = {
  2, // locals
  0, // parameters
  // default_value(derived_node funky_types::multiline_operator)
  var_default_value, 2, var_3149_0_derived_node, var_funky_types__multiline_operator, 1, LOCAL(1),
  // default_value(derived_node funky_types::multiline_operator)
  LET, -4, LOCAL(1), var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_3151_1_position, var_funky__remark_of, var_3152_29_trailing_remark, var_funky__arguments_of, var_3157_1_line_start_arguments, LOCAL(2),
  // 
  LET, 2, string_1, LOCAL(2), TAIL_CALL,
  POS(3163, 15),
  POS(3163, 15),
  POS(3161, 15)
};

static TAB_NUM t_lambda_1103[] = {
  0, // locals
  0, // parameters
  // syntax_error "valid input characters or line end"
  func_syntax_error, 1, str_valid_input_char, TAIL_CALL,
  POS(3169, 11)
};

static TAB_NUM t_lambda_1104[] = {
  0, // locals
  0, // parameters
  //  undefined trailing_remark
  LET, 2, var_undefined, var_3152_29_trailing_remark, TAIL_CALL,
  POS(3170, 7)
};

static TAB_NUM t_func_parse_multiline_plus_without_prefix[] = {
  0, // locals
  0, // parameters
  // parse_multiline_operator funky_types::multiline_plus
  func_parse_multiline_operator, 1, var_funky_types__multiline_plus, TAIL_CALL,
  POS(3173, 3)
};

static TAB_NUM t_func_parse_multiline_minus_without_prefix[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_3176_1_position,
  // parse_dummy_remark !text $dummy_remark
  func_parse_dummy_remark, 0, 2, var_text, var_3177_26_dummy_remark,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_52_text_is_defined, lambda_1110, TAIL_CALL,
  POS(3176, 3),
  POS(3177, 3),
  POS(3179, 10),
  POS(3178, 3)
};

static TAB_NUM t_lambda_52_text_is_defined[] = {
  2, // locals
  0, // parameters
  // text == "@nl;" && subgroups.is_defined:
  var_std__equal, 2, var_text, string_2, 1, LOCAL(1),
  // text == "@nl;" && subgroups.is_defined:
  var_std__and, 2, LOCAL(1), lambda_1105, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_1106, lambda_1109, TAIL_CALL,
  POS(3181, 9),
  POS(3181, 9),
  POS(3180, 7)
};

static TAB_NUM t_lambda_1105[] = {
  1, // locals
  0, // parameters
  // is_defined:
  var_is_defined, 1, var_subgroups, 1, LOCAL(1),
  // subgroups.is_defined:
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(3181, 37),
  POS(3181, 27)
};

static TAB_NUM t_lambda_1106[] = {
  1, // locals
  0, // parameters
  // $line_start_arguments parse_groups(funky::parse_line_start_arguments_group)
  func_parse_groups, 1, var_funky__parse_line_start_arguments_group, 1, var_3182_1_line_start_arguments,
  // $error find_first(line_start_arguments is_an_error)
  var_find_first, 2, var_3182_1_line_start_arguments, var_is_an_error, 1, var_3183_1_error,
  // is_an_error
  var_is_an_error, 1, var_3183_1_error, 1, LOCAL(1),
  // if error.is_an_error
  var_if, 3, LOCAL(1), lambda_1107, lambda_1108, TAIL_CALL,
  POS(3182, 11),
  POS(3183, 11),
  POS(3184, 20),
  POS(3184, 11)
};

static TAB_NUM t_lambda_1107[] = {
  0, // locals
  0, // parameters
  //  undefined error
  LET, 2, var_undefined, var_3183_1_error, TAIL_CALL,
  POS(3185, 15)
};

static TAB_NUM t_lambda_1108[] = {
  1, // locals
  0, // parameters
  // funky_types::multiline_minus
  LET, -4, var_funky_types__multiline_minus, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_3176_1_position, var_funky__remark_of, var_3177_26_dummy_remark, var_funky__arguments_of, var_3182_1_line_start_arguments, LOCAL(1),
  // 
  LET, 2, string_1, LOCAL(1), TAIL_CALL,
  POS(3188, 15),
  POS(3186, 15)
};

static TAB_NUM t_lambda_1109[] = {
  0, // locals
  0, // parameters
  // syntax_error "valid input characters or line end"
  func_syntax_error, 1, str_valid_input_char, TAIL_CALL,
  POS(3194, 11)
};

static TAB_NUM t_lambda_1110[] = {
  0, // locals
  0, // parameters
  //  undefined dummy_remark
  LET, 2, var_undefined, var_3177_26_dummy_remark, TAIL_CALL,
  POS(3195, 7)
};

static TAB_NUM t_func_parse_multiline_minus_with_remark_without_prefix[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_3198_1_position,
  // parse_remark !text $remark
  func_parse_remark, 0, 2, var_text, var_3199_20_remark,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_53_text_is_defined, lambda_1116, TAIL_CALL,
  POS(3198, 3),
  POS(3199, 3),
  POS(3201, 10),
  POS(3200, 3)
};

static TAB_NUM t_lambda_53_text_is_defined[] = {
  2, // locals
  0, // parameters
  // text == "@nl;" && subgroups.is_defined:
  var_std__equal, 2, var_text, string_2, 1, LOCAL(1),
  // text == "@nl;" && subgroups.is_defined:
  var_std__and, 2, LOCAL(1), lambda_1111, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_1112, lambda_1115, TAIL_CALL,
  POS(3203, 9),
  POS(3203, 9),
  POS(3202, 7)
};

static TAB_NUM t_lambda_1111[] = {
  1, // locals
  0, // parameters
  // is_defined:
  var_is_defined, 1, var_subgroups, 1, LOCAL(1),
  // subgroups.is_defined:
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(3203, 37),
  POS(3203, 27)
};

static TAB_NUM t_lambda_1112[] = {
  1, // locals
  0, // parameters
  // $line_start_arguments parse_groups(funky::parse_line_start_arguments_group)
  func_parse_groups, 1, var_funky__parse_line_start_arguments_group, 1, var_3204_1_line_start_arguments,
  // $error find_first(line_start_arguments is_an_error)
  var_find_first, 2, var_3204_1_line_start_arguments, var_is_an_error, 1, var_3205_1_error,
  // is_an_error
  var_is_an_error, 1, var_3205_1_error, 1, LOCAL(1),
  // if error.is_an_error
  var_if, 3, LOCAL(1), lambda_1113, lambda_1114, TAIL_CALL,
  POS(3204, 11),
  POS(3205, 11),
  POS(3206, 20),
  POS(3206, 11)
};

static TAB_NUM t_lambda_1113[] = {
  0, // locals
  0, // parameters
  //  undefined error
  LET, 2, var_undefined, var_3205_1_error, TAIL_CALL,
  POS(3207, 15)
};

static TAB_NUM t_lambda_1114[] = {
  1, // locals
  0, // parameters
  // funky_types::multiline_minus_with_remark
  LET, -4, var_funky_types__multiline_minus_with_remark, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_3198_1_position, var_funky__remark_of, var_3199_20_remark, var_funky__arguments_of, var_3204_1_line_start_arguments, LOCAL(1),
  // 
  LET, 2, string_1, LOCAL(1), TAIL_CALL,
  POS(3210, 15),
  POS(3208, 15)
};

static TAB_NUM t_lambda_1115[] = {
  0, // locals
  0, // parameters
  // syntax_error "valid input characters or line end"
  func_syntax_error, 1, str_valid_input_char, TAIL_CALL,
  POS(3216, 11)
};

static TAB_NUM t_lambda_1116[] = {
  0, // locals
  0, // parameters
  //  undefined remark
  LET, 2, var_undefined, var_3199_20_remark, TAIL_CALL,
  POS(3217, 7)
};

static TAB_NUM t_func_parse_multiline_times_without_prefix[] = {
  0, // locals
  0, // parameters
  // parse_multiline_operator funky_types::multiline_times
  func_parse_multiline_operator, 1, var_funky_types__multiline_times, TAIL_CALL,
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
  var_if, 3, LOCAL(1), lambda_1117, lambda_1118, TAIL_CALL,
  POS(3223, 3),
  POS(3224, 3),
  POS(3225, 3),
  POS(3226, 12),
  POS(3226, 3)
};

static TAB_NUM t_lambda_1117[] = {
  0, // locals
  0, // parameters
  //  undefined error
  LET, 2, var_undefined, var_3225_1_error, TAIL_CALL,
  POS(3227, 7)
};

static TAB_NUM t_lambda_1118[] = {
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
  var_if, 3, LOCAL(1), lambda_54_text_is_defined, lambda_1124, TAIL_CALL,
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
  var_std__and, 2, LOCAL(1), lambda_1119, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_1120, lambda_1123, TAIL_CALL,
  POS(3241, 9),
  POS(3241, 9),
  POS(3240, 7)
};

static TAB_NUM t_lambda_1119[] = {
  1, // locals
  0, // parameters
  // is_defined:
  var_is_defined, 1, var_subgroups, 1, LOCAL(1),
  // subgroups.is_defined:
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(3241, 37),
  POS(3241, 27)
};

static TAB_NUM t_lambda_1120[] = {
  1, // locals
  0, // parameters
  // $line_start_arguments parse_groups(funky::parse_line_start_arguments_group)
  func_parse_groups, 1, var_funky__parse_line_start_arguments_group, 1, var_3242_1_line_start_arguments,
  // $error find_first(line_start_arguments is_an_error)
  var_find_first, 2, var_3242_1_line_start_arguments, var_is_an_error, 1, var_3243_1_error,
  // is_an_error
  var_is_an_error, 1, var_3243_1_error, 1, LOCAL(1),
  // if error.is_an_error
  var_if, 3, LOCAL(1), lambda_1121, lambda_1122, TAIL_CALL,
  POS(3242, 11),
  POS(3243, 11),
  POS(3244, 20),
  POS(3244, 11)
};

static TAB_NUM t_lambda_1121[] = {
  0, // locals
  0, // parameters
  //  undefined error
  LET, 2, var_undefined, var_3243_1_error, TAIL_CALL,
  POS(3245, 15)
};

static TAB_NUM t_lambda_1122[] = {
  1, // locals
  0, // parameters
  // funky_types::multiline_over_with_remark
  LET, -4, var_funky_types__multiline_over_with_remark, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_3236_1_position, var_funky__remark_of, var_3237_20_remark, var_funky__arguments_of, var_3242_1_line_start_arguments, LOCAL(1),
  // 
  LET, 2, string_1, LOCAL(1), TAIL_CALL,
  POS(3248, 15),
  POS(3246, 15)
};

static TAB_NUM t_lambda_1123[] = {
  0, // locals
  0, // parameters
  // syntax_error "valid input characters or line end"
  func_syntax_error, 1, str_valid_input_char, TAIL_CALL,
  POS(3254, 11)
};

static TAB_NUM t_lambda_1124[] = {
  0, // locals
  0, // parameters
  //  undefined remark
  LET, 2, var_undefined, var_3237_20_remark, TAIL_CALL,
  POS(3255, 7)
};

static TAB_NUM t_func_parse_multiline_shift_left_without_prefix[] = {
  0, // locals
  0, // parameters
  // parse_multiline_operator funky_types::multiline_shift_left
  func_parse_multiline_operator, 1, var_funky_types__multiline_shift_left, TAIL_CALL,
  POS(3258, 3)
};

static TAB_NUM t_func_parse_multiline_shift_right_without_prefix[] = {
  0, // locals
  0, // parameters
  // parse_multiline_operator funky_types::multiline_shift_right
  func_parse_multiline_operator, 1, var_funky_types__multiline_shift_right, TAIL_CALL,
  POS(3261, 3)
};

static TAB_NUM t_func_parse_multiline_equal_without_prefix[] = {
  0, // locals
  0, // parameters
  // parse_multiline_operator funky_types::multiline_equal
  func_parse_multiline_operator, 1, var_funky_types__multiline_equal, TAIL_CALL,
  POS(3264, 3)
};

static TAB_NUM t_func_parse_multiline_not_equal_without_prefix[] = {
  0, // locals
  0, // parameters
  // parse_multiline_operator funky_types::multiline_not_equal
  func_parse_multiline_operator, 1, var_funky_types__multiline_not_equal, TAIL_CALL,
  POS(3267, 3)
};

static TAB_NUM t_func_parse_multiline_less_equal_without_prefix[] = {
  0, // locals
  0, // parameters
  // parse_multiline_operator funky_types::multiline_less_equal
  func_parse_multiline_operator, 1, var_funky_types__multiline_less_equal, TAIL_CALL,
  POS(3270, 3)
};

static TAB_NUM t_func_parse_multiline_less_than_without_prefix[] = {
  0, // locals
  0, // parameters
  // parse_multiline_operator funky_types::multiline_less_than
  func_parse_multiline_operator, 1, var_funky_types__multiline_less_than, TAIL_CALL,
  POS(3273, 3)
};

static TAB_NUM t_func_parse_multiline_greater_equal_without_prefix[] = {
  0, // locals
  0, // parameters
  // parse_multiline_operator funky_types::multiline_greater_equal
  func_parse_multiline_operator, 1, var_funky_types__multiline_greater_equal, TAIL_CALL,
  POS(3276, 3)
};

static TAB_NUM t_func_parse_multiline_greater_than_without_prefix[] = {
  0, // locals
  0, // parameters
  // parse_multiline_operator funky_types::multiline_greater_than
  func_parse_multiline_operator, 1, var_funky_types__multiline_greater_than, TAIL_CALL,
  POS(3279, 3)
};

static TAB_NUM t_func_parse_multiline_and_without_prefix[] = {
  0, // locals
  0, // parameters
  // parse_multiline_operator funky_types::multiline_and
  func_parse_multiline_operator, 1, var_funky_types__multiline_and, TAIL_CALL,
  POS(3282, 3)
};

static TAB_NUM t_func_parse_multiline_or_without_prefix[] = {
  0, // locals
  0, // parameters
  // parse_multiline_operator funky_types::multiline_or
  func_parse_multiline_operator, 1, var_funky_types__multiline_or, TAIL_CALL,
  POS(3285, 3)
};

static TAB_NUM t_func_parse_multiline_bit_and_without_prefix[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_3288_1_position,
  // parse_dummy_remark !text $dummy_remark
  func_parse_dummy_remark, 0, 2, var_text, var_3289_26_dummy_remark,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_55_text_is_defined, lambda_1130, TAIL_CALL,
  POS(3288, 3),
  POS(3289, 3),
  POS(3291, 10),
  POS(3290, 3)
};

static TAB_NUM t_lambda_55_text_is_defined[] = {
  2, // locals
  0, // parameters
  // text == "@nl;" && subgroups.is_defined:
  var_std__equal, 2, var_text, string_2, 1, LOCAL(1),
  // text == "@nl;" && subgroups.is_defined:
  var_std__and, 2, LOCAL(1), lambda_1125, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_1126, lambda_1129, TAIL_CALL,
  POS(3293, 9),
  POS(3293, 9),
  POS(3292, 7)
};

static TAB_NUM t_lambda_1125[] = {
  1, // locals
  0, // parameters
  // is_defined:
  var_is_defined, 1, var_subgroups, 1, LOCAL(1),
  // subgroups.is_defined:
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(3293, 37),
  POS(3293, 27)
};

static TAB_NUM t_lambda_1126[] = {
  1, // locals
  0, // parameters
  // $line_start_arguments parse_groups(funky::parse_line_start_arguments_group)
  func_parse_groups, 1, var_funky__parse_line_start_arguments_group, 1, var_3294_1_line_start_arguments,
  // $error find_first(line_start_arguments is_an_error)
  var_find_first, 2, var_3294_1_line_start_arguments, var_is_an_error, 1, var_3295_1_error,
  // is_an_error
  var_is_an_error, 1, var_3295_1_error, 1, LOCAL(1),
  // if error.is_an_error
  var_if, 3, LOCAL(1), lambda_1127, lambda_1128, TAIL_CALL,
  POS(3294, 11),
  POS(3295, 11),
  POS(3296, 20),
  POS(3296, 11)
};

static TAB_NUM t_lambda_1127[] = {
  0, // locals
  0, // parameters
  //  undefined error
  LET, 2, var_undefined, var_3295_1_error, TAIL_CALL,
  POS(3297, 15)
};

static TAB_NUM t_lambda_1128[] = {
  1, // locals
  0, // parameters
  // funky_types::multiline_bit_and
  LET, -4, var_funky_types__multiline_bit_and, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_3288_1_position, var_funky__remark_of, var_3289_26_dummy_remark, var_funky__arguments_of, var_3294_1_line_start_arguments, LOCAL(1),
  // 
  LET, 2, string_1, LOCAL(1), TAIL_CALL,
  POS(3300, 15),
  POS(3298, 15)
};

static TAB_NUM t_lambda_1129[] = {
  0, // locals
  0, // parameters
  // syntax_error "valid input characters or line end"
  func_syntax_error, 1, str_valid_input_char, TAIL_CALL,
  POS(3306, 11)
};

static TAB_NUM t_lambda_1130[] = {
  0, // locals
  0, // parameters
  //  undefined dummy_remark
  LET, 2, var_undefined, var_3289_26_dummy_remark, TAIL_CALL,
  POS(3307, 7)
};

static TAB_NUM t_func_parse_multiline_bit_and_with_remark_without_prefix[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_3310_1_position,
  // parse_remark !text $remark
  func_parse_remark, 0, 2, var_text, var_3311_20_remark,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_56_text_is_defined, lambda_1136, TAIL_CALL,
  POS(3310, 3),
  POS(3311, 3),
  POS(3313, 10),
  POS(3312, 3)
};

static TAB_NUM t_lambda_56_text_is_defined[] = {
  2, // locals
  0, // parameters
  // text == "@nl;" && subgroups.is_defined:
  var_std__equal, 2, var_text, string_2, 1, LOCAL(1),
  // text == "@nl;" && subgroups.is_defined:
  var_std__and, 2, LOCAL(1), lambda_1131, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_1132, lambda_1135, TAIL_CALL,
  POS(3315, 9),
  POS(3315, 9),
  POS(3314, 7)
};

static TAB_NUM t_lambda_1131[] = {
  1, // locals
  0, // parameters
  // is_defined:
  var_is_defined, 1, var_subgroups, 1, LOCAL(1),
  // subgroups.is_defined:
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(3315, 37),
  POS(3315, 27)
};

static TAB_NUM t_lambda_1132[] = {
  1, // locals
  0, // parameters
  // $line_start_arguments parse_groups(funky::parse_line_start_arguments_group)
  func_parse_groups, 1, var_funky__parse_line_start_arguments_group, 1, var_3316_1_line_start_arguments,
  // $error find_first(line_start_arguments is_an_error)
  var_find_first, 2, var_3316_1_line_start_arguments, var_is_an_error, 1, var_3317_1_error,
  // is_an_error
  var_is_an_error, 1, var_3317_1_error, 1, LOCAL(1),
  // if error.is_an_error
  var_if, 3, LOCAL(1), lambda_1133, lambda_1134, TAIL_CALL,
  POS(3316, 11),
  POS(3317, 11),
  POS(3318, 20),
  POS(3318, 11)
};

static TAB_NUM t_lambda_1133[] = {
  0, // locals
  0, // parameters
  //  undefined error
  LET, 2, var_undefined, var_3317_1_error, TAIL_CALL,
  POS(3319, 15)
};

static TAB_NUM t_lambda_1134[] = {
  1, // locals
  0, // parameters
  // funky_types::multiline_bit_and_with_remark
  LET, -4, var_funky_types__multiline_bit_and_with_remark, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_3310_1_position, var_funky__remark_of, var_3311_20_remark, var_funky__arguments_of, var_3316_1_line_start_arguments, LOCAL(1),
  // 
  LET, 2, string_1, LOCAL(1), TAIL_CALL,
  POS(3322, 15),
  POS(3320, 15)
};

static TAB_NUM t_lambda_1135[] = {
  0, // locals
  0, // parameters
  // syntax_error "valid input characters or line end"
  func_syntax_error, 1, str_valid_input_char, TAIL_CALL,
  POS(3328, 11)
};

static TAB_NUM t_lambda_1136[] = {
  0, // locals
  0, // parameters
  //  undefined remark
  LET, 2, var_undefined, var_3311_20_remark, TAIL_CALL,
  POS(3329, 7)
};

static TAB_NUM t_func_parse_multiline_bit_or_without_prefix[] = {
  0, // locals
  0, // parameters
  // parse_multiline_operator funky_types::multiline_bit_or
  func_parse_multiline_operator, 1, var_funky_types__multiline_bit_or, TAIL_CALL,
  POS(3332, 3)
};

static TAB_NUM t_func_parse_multiline_bit_xor_without_prefix[] = {
  0, // locals
  0, // parameters
  // parse_multiline_operator funky_types::multiline_bit_xor
  func_parse_multiline_operator, 1, var_funky_types__multiline_bit_xor, TAIL_CALL,
  POS(3335, 3)
};

static TAB_NUM t_func_parse_multiline_assign_without_prefix[] = {
  0, // locals
  0, // parameters
  // parse_multiline_operator funky_types::multiline_assign
  func_parse_multiline_operator, 1, var_funky_types__multiline_assign, TAIL_CALL,
  POS(3338, 3)
};

static TAB_NUM t_func_parse_inline_arguments[] = {
  2, // locals
  0, // parameters
  // cond $rest $expr
  var_cond, 5, lambda_1137, lambda_1139, lambda_1141, lambda_1144, lambda_1146, 2, LOCAL(2), var_3341_12_expr,
  // cond
  var_cond, 3, lambda_1148, lambda_1150, lambda_1152, 1, LOCAL(1),
  // ->
  LET, 2, LOCAL(2), LOCAL(1), TAIL_CALL,
  POS(3341, 3),
  POS(3372, 5),
  POS(3370, 3)
};

static TAB_NUM t_lambda_1137[] = {
  2, // locals
  0, // parameters
  // text(1) == '.'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '.'
  var_std__equal, 2, LOCAL(1), chr_46, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_1138, TAIL_CALL,
  POS(3343, 7),
  POS(3343, 7),
  POS(3342, 7)
};

static TAB_NUM t_lambda_1138[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_inline_attribute_value_pair_without_prefix
  func_parse_inline_attribute_value_pair_without_prefix, 0, TAIL_CALL,
  POS(3345, 9),
  POS(3346, 9)
};

static TAB_NUM t_lambda_1139[] = {
  2, // locals
  0, // parameters
  // text(1) == '/'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '/'
  var_std__equal, 2, LOCAL(1), chr_47, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_1140, TAIL_CALL,
  POS(3348, 7),
  POS(3348, 7),
  POS(3347, 7)
};

static TAB_NUM t_lambda_1140[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_inline_method_value_pair_without_prefix
  func_parse_inline_method_value_pair_without_prefix, 0, TAIL_CALL,
  POS(3350, 9),
  POS(3351, 9)
};

static TAB_NUM t_lambda_1141[] = {
  3, // locals
  0, // parameters
  // text(1) == '-'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '-'
  var_std__equal, 2, LOCAL(1), chr_45, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_1142, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_1143, TAIL_CALL,
  POS(3354, 9),
  POS(3354, 9),
  POS(3353, 9),
  POS(3352, 7)
};

static TAB_NUM t_lambda_1142[] = {
  2, // locals
  0, // parameters
  // text(2) == '>'
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '>'
  var_std__equal, 2, LOCAL(1), chr_62, 1, LOCAL(2),
  // text(2) == '>'
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(3355, 9),
  POS(3355, 9),
  POS(3355, 9)
};

static TAB_NUM t_lambda_1143[] = {
  0, // locals
  0, // parameters
  // range &text 3 -1
  var_range, 3, var_text, num_3, minus_num_1, 1, var_text,
  // parse_inline_return_without_prefix
  func_parse_inline_return_without_prefix, 0, TAIL_CALL,
  POS(3357, 9),
  POS(3358, 9)
};

static TAB_NUM t_lambda_1144[] = {
  2, // locals
  0, // parameters
  // text(1) == ':'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == ':'
  var_std__equal, 2, LOCAL(1), chr_58, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_1145, TAIL_CALL,
  POS(3360, 7),
  POS(3360, 7),
  POS(3359, 7)
};

static TAB_NUM t_lambda_1145[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_inline_body_without_prefix
  func_parse_inline_body_without_prefix, 0, TAIL_CALL,
  POS(3362, 9),
  POS(3363, 9)
};

static TAB_NUM t_lambda_1146[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_1147, TAIL_CALL,
  POS(3364, 7)
};

static TAB_NUM t_lambda_1147[] = {
  0, // locals
  0, // parameters
  // !expected "inline arguments"
  LET, 1, str_inline_arguments, 1, var_expected,
  // !at text
  LET, 1, var_text, 1, var_at,
  // parse_expression_and_inline_arguments
  func_parse_expression_and_inline_arguments, 0, TAIL_CALL,
  POS(3367, 9),
  POS(3368, 9),
  POS(3369, 9)
};

static TAB_NUM t_lambda_1148[] = {
  1, // locals
  0, // parameters
  // is_undefined -> empty_list
  var_is_undefined, 1, var_3341_12_expr, 1, LOCAL(1),
  //  expr.is_undefined -> empty_list
  LET, 2, LOCAL(1), lambda_1149, TAIL_CALL,
  POS(3373, 15),
  POS(3373, 9)
};

static TAB_NUM t_lambda_1149[] = {
  0, // locals
  0, // parameters
  //  empty_list
  LET, 1, var_empty_list, TAIL_CALL,
  POS(3373, 30)
};

static TAB_NUM t_lambda_1150[] = {
  1, // locals
  0, // parameters
  // is_a_list -> expr
  var_is_a_list, 1, var_3341_12_expr, 1, LOCAL(1),
  //  expr.is_a_list -> expr
  LET, 2, LOCAL(1), lambda_1151, TAIL_CALL,
  POS(3374, 15),
  POS(3374, 9)
};

static TAB_NUM t_lambda_1151[] = {
  0, // locals
  0, // parameters
  //  expr
  LET, 1, var_3341_12_expr, TAIL_CALL,
  POS(3374, 27)
};

static TAB_NUM t_lambda_1152[] = {
  0, // locals
  0, // parameters
  //  true -> list(expr)
  LET, 2, var_true, lambda_1153, TAIL_CALL,
  POS(3375, 9)
};

static TAB_NUM t_lambda_1153[] = {
  1, // locals
  0, // parameters
  // list(expr)
  var_list, 1, var_3341_12_expr, 1, LOCAL(1),
  //  list(expr)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(3375, 18),
  POS(3375, 17)
};

static TAB_NUM t_func_parse_inline_attribute_value_pair_without_prefix[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_3378_1_position,
  // !str text
  LET, 1, var_text, 1, var_str,
  // parse_identifier !text $identifier
  func_parse_identifier, 0, 2, var_text, var_3380_24_identifier,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_57_text_is_defined, lambda_1158, TAIL_CALL,
  POS(3378, 3),
  POS(3379, 3),
  POS(3380, 3),
  POS(3382, 10),
  POS(3381, 3)
};

static TAB_NUM t_lambda_57_text_is_defined[] = {
  2, // locals
  0, // parameters
  // text(1) == ' ':
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == ' ':
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_1154, lambda_1157, TAIL_CALL,
  POS(3384, 9),
  POS(3384, 9),
  POS(3383, 7)
};

static TAB_NUM t_lambda_1154[] = {
  1, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_expression !text $expression
  func_parse_expression, 0, 2, var_text, var_3386_24_expression,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1155, lambda_1156, TAIL_CALL,
  POS(3385, 11),
  POS(3386, 11),
  POS(3388, 18),
  POS(3387, 11)
};

static TAB_NUM t_lambda_1155[] = {
  1, // locals
  0, // parameters
  // funky_types::inline_attribute_value_pair
  LET, -4, var_funky_types__inline_attribute_value_pair, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_3378_1_position, var_funky__identifier_of, var_3380_24_identifier, var_funky__expression_of, var_3386_24_expression, LOCAL(1),
  // 
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(3391, 15),
  POS(3389, 15)
};

static TAB_NUM t_lambda_1156[] = {
  0, // locals
  0, // parameters
  //  undefined expression
  LET, 2, var_undefined, var_3386_24_expression, TAIL_CALL,
  POS(3396, 15)
};

static TAB_NUM t_lambda_1157[] = {
  0, // locals
  0, // parameters
  // syntax_error "space character"
  func_syntax_error, 1, str_space_character, TAIL_CALL,
  POS(3398, 11)
};

static TAB_NUM t_lambda_1158[] = {
  0, // locals
  0, // parameters
  //  undefined identifier
  LET, 2, var_undefined, var_3380_24_identifier, TAIL_CALL,
  POS(3399, 7)
};

static TAB_NUM t_func_parse_inline_method_value_pair_without_prefix[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_3402_1_position,
  // !str text
  LET, 1, var_text, 1, var_str,
  // parse_identifier !text $identifier
  func_parse_identifier, 0, 2, var_text, var_3404_24_identifier,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_58_text_is_defined, lambda_1163, TAIL_CALL,
  POS(3402, 3),
  POS(3403, 3),
  POS(3404, 3),
  POS(3406, 10),
  POS(3405, 3)
};

static TAB_NUM t_lambda_58_text_is_defined[] = {
  2, // locals
  0, // parameters
  // text(1) == ' ':
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == ' ':
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_1159, lambda_1162, TAIL_CALL,
  POS(3408, 9),
  POS(3408, 9),
  POS(3407, 7)
};

static TAB_NUM t_lambda_1159[] = {
  1, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_expression !text $expression
  func_parse_expression, 0, 2, var_text, var_3410_24_expression,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1160, lambda_1161, TAIL_CALL,
  POS(3409, 11),
  POS(3410, 11),
  POS(3412, 18),
  POS(3411, 11)
};

static TAB_NUM t_lambda_1160[] = {
  1, // locals
  0, // parameters
  // funky_types::inline_method_value_pair
  LET, -4, var_funky_types__inline_method_value_pair, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_3402_1_position, var_funky__identifier_of, var_3404_24_identifier, var_funky__expression_of, var_3410_24_expression, LOCAL(1),
  // 
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(3415, 15),
  POS(3413, 15)
};

static TAB_NUM t_lambda_1161[] = {
  0, // locals
  0, // parameters
  //  undefined expression
  LET, 2, var_undefined, var_3410_24_expression, TAIL_CALL,
  POS(3420, 15)
};

static TAB_NUM t_lambda_1162[] = {
  0, // locals
  0, // parameters
  // syntax_error "space character"
  func_syntax_error, 1, str_space_character, TAIL_CALL,
  POS(3422, 11)
};

static TAB_NUM t_lambda_1163[] = {
  0, // locals
  0, // parameters
  //  undefined identifier
  LET, 2, var_undefined, var_3404_24_identifier, TAIL_CALL,
  POS(3423, 7)
};

static TAB_NUM t_func_parse_expression_and_inline_arguments[] = {
  1, // locals
  0, // parameters
  // parse_expression !text $expression
  func_parse_expression, 0, 2, var_text, var_3426_24_expression,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_59_text_is_defined, lambda_1168, TAIL_CALL,
  POS(3426, 3),
  POS(3428, 10),
  POS(3427, 3)
};

static TAB_NUM t_lambda_59_text_is_defined[] = {
  1, // locals
  0, // parameters
  // parse_some_inline_arguments !text $some_inline_arguments
  func_parse_some_inline_arguments, 0, 2, var_text, var_3429_35_some_inline_arguments,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1164, lambda_1167, TAIL_CALL,
  POS(3429, 7),
  POS(3431, 14),
  POS(3430, 7)
};

static TAB_NUM t_lambda_1164[] = {
  1, // locals
  0, // parameters
  // is_defined
  var_is_defined, 1, var_3429_35_some_inline_arguments, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1165, lambda_1166, TAIL_CALL,
  POS(3434, 35),
  POS(3433, 11)
};

static TAB_NUM t_lambda_1165[] = {
  3, // locals
  0, // parameters
  // to_list
  func_to_list, 1, var_3426_24_expression, 1, LOCAL(1),
  // to_list
  func_to_list, 1, var_3429_35_some_inline_arguments, 1, LOCAL(2),
  // append
  var_append, 2, LOCAL(1), LOCAL(2), 1, LOCAL(3),
  // 
  LET, 2, var_text, LOCAL(3), TAIL_CALL,
  POS(3438, 28),
  POS(3439, 39),
  POS(3437, 15),
  POS(3435, 15)
};

static TAB_NUM t_lambda_1166[] = {
  1, // locals
  0, // parameters
  // to_list
  func_to_list, 1, var_3426_24_expression, 1, LOCAL(1),
  //  text expression.to_list
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(3440, 32),
  POS(3440, 15)
};

static TAB_NUM t_lambda_1167[] = {
  0, // locals
  0, // parameters
  //  undefined some_inline_arguments
  LET, 2, var_undefined, var_3429_35_some_inline_arguments, TAIL_CALL,
  POS(3441, 11)
};

static TAB_NUM t_lambda_1168[] = {
  0, // locals
  0, // parameters
  //  undefined expression
  LET, 2, var_undefined, var_3426_24_expression, TAIL_CALL,
  POS(3442, 7)
};

static TAB_NUM t_func_parse_spaced_inline_arguments[] = {
  2, // locals
  0, // parameters
  // text(1) == ' ':
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == ' ':
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_1169, lambda_1172, TAIL_CALL,
  POS(3446, 5),
  POS(3446, 5),
  POS(3445, 3)
};

static TAB_NUM t_lambda_1169[] = {
  1, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_inline_arguments !text $inline_arguments
  func_parse_inline_arguments, 0, 2, var_text, var_3448_30_inline_arguments,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1170, lambda_1171, TAIL_CALL,
  POS(3447, 7),
  POS(3448, 7),
  POS(3450, 14),
  POS(3449, 7)
};

static TAB_NUM t_lambda_1170[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_text, var_3448_30_inline_arguments, TAIL_CALL,
  POS(3451, 11)
};

static TAB_NUM t_lambda_1171[] = {
  0, // locals
  0, // parameters
  //  undefined inline_arguments
  LET, 2, var_undefined, var_3448_30_inline_arguments, TAIL_CALL,
  POS(3454, 11)
};

static TAB_NUM t_lambda_1172[] = {
  0, // locals
  0, // parameters
  // syntax_error "space character"
  func_syntax_error, 1, str_space_character, TAIL_CALL,
  POS(3456, 7)
};

static TAB_NUM t_func_parse_spaced_inline_arguments_without_prefix[] = {
  1, // locals
  0, // parameters
  // parse_inline_arguments !text $inline_arguments
  func_parse_inline_arguments, 0, 2, var_text, var_3459_30_inline_arguments,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1173, lambda_1174, TAIL_CALL,
  POS(3459, 3),
  POS(3461, 10),
  POS(3460, 3)
};

static TAB_NUM t_lambda_1173[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_text, var_3459_30_inline_arguments, TAIL_CALL,
  POS(3462, 7)
};

static TAB_NUM t_lambda_1174[] = {
  0, // locals
  0, // parameters
  //  undefined inline_arguments
  LET, 2, var_undefined, var_3459_30_inline_arguments, TAIL_CALL,
  POS(3465, 7)
};

static TAB_NUM t_func_parse_numeric_literal[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_3468_1_position,
  // !str text
  LET, 1, var_text, 1, var_str,
  // parse_digits !text $digits
  func_parse_digits, 0, 2, var_text, var_3470_20_digits,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1175, lambda_1176, TAIL_CALL,
  POS(3468, 3),
  POS(3469, 3),
  POS(3470, 3),
  POS(3472, 10),
  POS(3471, 3)
};

static TAB_NUM t_lambda_1175[] = {
  1, // locals
  0, // parameters
  // funky_types::numeric_literal
  LET, -3, var_funky_types__numeric_literal, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_3468_1_position, var_funky__digits_of, var_3470_20_digits, LOCAL(1),
  // 
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(3475, 7),
  POS(3473, 7)
};

static TAB_NUM t_lambda_1176[] = {
  0, // locals
  0, // parameters
  //  undefined digits
  LET, 2, var_undefined, var_3470_20_digits, TAIL_CALL,
  POS(3479, 7)
};

static TAB_NUM t_func_parse_digits[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 3, lambda_1177, lambda_1180, lambda_1182, TAIL_CALL,
  POS(3482, 3)
};

static TAB_NUM t_lambda_1177[] = {
  4, // locals
  0, // parameters
  // text(1) >= '1' && text(1) <= '9')
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) >= '1' && text(1) <= '9')
  var_std__less, 2, LOCAL(1), chr_49, 1, LOCAL(2),
  // text(1) >= '1' && text(1) <= '9')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) >= '1' && text(1) <= '9')
  var_std__and, 2, LOCAL(3), lambda_1178, 1, LOCAL(4),
  // 
  LET, 2, LOCAL(4), lambda_1179, TAIL_CALL,
  POS(3484, 8),
  POS(3484, 8),
  POS(3484, 8),
  POS(3484, 8),
  POS(3483, 7)
};

static TAB_NUM t_lambda_1178[] = {
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
  POS(3484, 26),
  POS(3484, 38),
  POS(3484, 38),
  POS(3484, 26)
};

static TAB_NUM t_lambda_1179[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_more_decimal_digits
  func_parse_more_decimal_digits, 0, TAIL_CALL,
  POS(3486, 9),
  POS(3487, 9)
};

static TAB_NUM t_lambda_1180[] = {
  2, // locals
  0, // parameters
  // text(1) == '0'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '0'
  var_std__equal, 2, LOCAL(1), chr_48, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_1181, TAIL_CALL,
  POS(3489, 7),
  POS(3489, 7),
  POS(3488, 7)
};

static TAB_NUM t_lambda_1181[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_maybe_non_decimal_numeric_literal
  func_parse_maybe_non_decimal_numeric_literal, 0, TAIL_CALL,
  POS(3491, 9),
  POS(3492, 9)
};

static TAB_NUM t_lambda_1182[] = {
  0, // locals
  0, // parameters
  //  true:
  LET, 2, var_true, lambda_1183, TAIL_CALL,
  POS(3493, 7)
};

static TAB_NUM t_lambda_1183[] = {
  0, // locals
  0, // parameters
  // syntax_error "digits"
  func_syntax_error, 1, str_digits, TAIL_CALL,
  POS(3494, 7)
};

static TAB_NUM t_func_parse_maybe_non_decimal_numeric_literal[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 7, lambda_1184, lambda_1187, lambda_1191, lambda_1195, lambda_1197, lambda_1199, lambda_1201, TAIL_CALL,
  POS(3497, 3)
};

static TAB_NUM t_lambda_1184[] = {
  4, // locals
  0, // parameters
  // text(1) >= '0' && text(1) <= '9')
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) >= '0' && text(1) <= '9')
  var_std__less, 2, LOCAL(1), chr_48, 1, LOCAL(2),
  // text(1) >= '0' && text(1) <= '9')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) >= '0' && text(1) <= '9')
  var_std__and, 2, LOCAL(3), lambda_1185, 1, LOCAL(4),
  // 
  LET, 2, LOCAL(4), lambda_1186, TAIL_CALL,
  POS(3499, 8),
  POS(3499, 8),
  POS(3499, 8),
  POS(3499, 8),
  POS(3498, 7)
};

static TAB_NUM t_lambda_1185[] = {
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
  POS(3499, 26),
  POS(3499, 38),
  POS(3499, 38),
  POS(3499, 26)
};

static TAB_NUM t_lambda_1186[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_more_decimal_digits
  func_parse_more_decimal_digits, 0, TAIL_CALL,
  POS(3501, 9),
  POS(3502, 9)
};

static TAB_NUM t_lambda_1187[] = {
  3, // locals
  0, // parameters
  // text(1) == '''
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '''
  var_std__equal, 2, LOCAL(1), chr_39, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_1188, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_1190, TAIL_CALL,
  POS(3505, 9),
  POS(3505, 9),
  POS(3504, 9),
  POS(3503, 7)
};

static TAB_NUM t_lambda_1188[] = {
  4, // locals
  0, // parameters
  // text(2) >= '0' && text(2) <= '9')
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) >= '0' && text(2) <= '9')
  var_std__less, 2, LOCAL(1), chr_48, 1, LOCAL(2),
  // text(2) >= '0' && text(2) <= '9')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(2) >= '0' && text(2) <= '9')
  var_std__and, 2, LOCAL(3), lambda_1189, 1, LOCAL(4),
  // text(2) >= '0' && text(2) <= '9')
  LET, 1, LOCAL(4), TAIL_CALL,
  POS(3506, 10),
  POS(3506, 10),
  POS(3506, 10),
  POS(3506, 10),
  POS(3506, 10)
};

static TAB_NUM t_lambda_1189[] = {
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
  POS(3506, 28),
  POS(3506, 40),
  POS(3506, 40),
  POS(3506, 28)
};

static TAB_NUM t_lambda_1190[] = {
  0, // locals
  0, // parameters
  // range &text 3 -1
  var_range, 3, var_text, num_3, minus_num_1, 1, var_text,
  // parse_more_decimal_digits
  func_parse_more_decimal_digits, 0, TAIL_CALL,
  POS(3508, 9),
  POS(3509, 9)
};

static TAB_NUM t_lambda_1191[] = {
  3, // locals
  0, // parameters
  // text(1) == '.'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '.'
  var_std__equal, 2, LOCAL(1), chr_46, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_1192, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_1194, TAIL_CALL,
  POS(3512, 9),
  POS(3512, 9),
  POS(3511, 9),
  POS(3510, 7)
};

static TAB_NUM t_lambda_1192[] = {
  4, // locals
  0, // parameters
  // text(2) >= '0' && text(2) <= '9')
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) >= '0' && text(2) <= '9')
  var_std__less, 2, LOCAL(1), chr_48, 1, LOCAL(2),
  // text(2) >= '0' && text(2) <= '9')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(2) >= '0' && text(2) <= '9')
  var_std__and, 2, LOCAL(3), lambda_1193, 1, LOCAL(4),
  // text(2) >= '0' && text(2) <= '9')
  LET, 1, LOCAL(4), TAIL_CALL,
  POS(3513, 10),
  POS(3513, 10),
  POS(3513, 10),
  POS(3513, 10),
  POS(3513, 10)
};

static TAB_NUM t_lambda_1193[] = {
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
  POS(3513, 28),
  POS(3513, 40),
  POS(3513, 40),
  POS(3513, 28)
};

static TAB_NUM t_lambda_1194[] = {
  0, // locals
  0, // parameters
  // range &text 3 -1
  var_range, 3, var_text, num_3, minus_num_1, 1, var_text,
  // parse_more_fraction_digits
  func_parse_more_fraction_digits, 0, TAIL_CALL,
  POS(3515, 9),
  POS(3516, 9)
};

static TAB_NUM t_lambda_1195[] = {
  2, // locals
  0, // parameters
  // text(1) == 'b'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == 'b'
  var_std__equal, 2, LOCAL(1), chr_98, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_1196, TAIL_CALL,
  POS(3518, 7),
  POS(3518, 7),
  POS(3517, 7)
};

static TAB_NUM t_lambda_1196[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_binary_digits
  func_parse_binary_digits, 0, TAIL_CALL,
  POS(3520, 9),
  POS(3521, 9)
};

static TAB_NUM t_lambda_1197[] = {
  2, // locals
  0, // parameters
  // text(1) == 'o'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == 'o'
  var_std__equal, 2, LOCAL(1), chr_111, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_1198, TAIL_CALL,
  POS(3523, 7),
  POS(3523, 7),
  POS(3522, 7)
};

static TAB_NUM t_lambda_1198[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_octal_digits
  func_parse_octal_digits, 0, TAIL_CALL,
  POS(3525, 9),
  POS(3526, 9)
};

static TAB_NUM t_lambda_1199[] = {
  2, // locals
  0, // parameters
  // text(1) == 'x'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == 'x'
  var_std__equal, 2, LOCAL(1), chr_120, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_1200, TAIL_CALL,
  POS(3528, 7),
  POS(3528, 7),
  POS(3527, 7)
};

static TAB_NUM t_lambda_1200[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_hex_digits
  func_parse_hex_digits, 0, TAIL_CALL,
  POS(3530, 9),
  POS(3531, 9)
};

static TAB_NUM t_lambda_1201[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_1202, TAIL_CALL,
  POS(3532, 7)
};

static TAB_NUM t_lambda_1202[] = {
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
  POS(3534, 27),
  POS(3534, 42),
  POS(3534, 27),
  POS(3534, 15),
  POS(3534, 9)
};

static TAB_NUM t_func_parse_more_decimal_digits[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 6, lambda_1203, lambda_1206, lambda_1210, lambda_1214, lambda_1216, lambda_1218, TAIL_CALL,
  POS(3537, 3)
};

static TAB_NUM t_lambda_1203[] = {
  4, // locals
  0, // parameters
  // text(1) >= '0' && text(1) <= '9')
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) >= '0' && text(1) <= '9')
  var_std__less, 2, LOCAL(1), chr_48, 1, LOCAL(2),
  // text(1) >= '0' && text(1) <= '9')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) >= '0' && text(1) <= '9')
  var_std__and, 2, LOCAL(3), lambda_1204, 1, LOCAL(4),
  // 
  LET, 2, LOCAL(4), lambda_1205, TAIL_CALL,
  POS(3539, 8),
  POS(3539, 8),
  POS(3539, 8),
  POS(3539, 8),
  POS(3538, 7)
};

static TAB_NUM t_lambda_1204[] = {
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
  POS(3539, 26),
  POS(3539, 38),
  POS(3539, 38),
  POS(3539, 26)
};

static TAB_NUM t_lambda_1205[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_more_decimal_digits
  func_parse_more_decimal_digits, 0, TAIL_CALL,
  POS(3541, 9),
  POS(3542, 9)
};

static TAB_NUM t_lambda_1206[] = {
  3, // locals
  0, // parameters
  // text(1) == '''
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '''
  var_std__equal, 2, LOCAL(1), chr_39, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_1207, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_1209, TAIL_CALL,
  POS(3545, 9),
  POS(3545, 9),
  POS(3544, 9),
  POS(3543, 7)
};

static TAB_NUM t_lambda_1207[] = {
  4, // locals
  0, // parameters
  // text(2) >= '0' && text(2) <= '9')
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) >= '0' && text(2) <= '9')
  var_std__less, 2, LOCAL(1), chr_48, 1, LOCAL(2),
  // text(2) >= '0' && text(2) <= '9')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(2) >= '0' && text(2) <= '9')
  var_std__and, 2, LOCAL(3), lambda_1208, 1, LOCAL(4),
  // text(2) >= '0' && text(2) <= '9')
  LET, 1, LOCAL(4), TAIL_CALL,
  POS(3546, 10),
  POS(3546, 10),
  POS(3546, 10),
  POS(3546, 10),
  POS(3546, 10)
};

static TAB_NUM t_lambda_1208[] = {
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
  POS(3546, 28),
  POS(3546, 40),
  POS(3546, 40),
  POS(3546, 28)
};

static TAB_NUM t_lambda_1209[] = {
  0, // locals
  0, // parameters
  // range &text 3 -1
  var_range, 3, var_text, num_3, minus_num_1, 1, var_text,
  // parse_more_decimal_digits
  func_parse_more_decimal_digits, 0, TAIL_CALL,
  POS(3548, 9),
  POS(3549, 9)
};

static TAB_NUM t_lambda_1210[] = {
  3, // locals
  0, // parameters
  // text(1) == '.'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '.'
  var_std__equal, 2, LOCAL(1), chr_46, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_1211, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_1213, TAIL_CALL,
  POS(3552, 9),
  POS(3552, 9),
  POS(3551, 9),
  POS(3550, 7)
};

static TAB_NUM t_lambda_1211[] = {
  4, // locals
  0, // parameters
  // text(2) >= '0' && text(2) <= '9')
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) >= '0' && text(2) <= '9')
  var_std__less, 2, LOCAL(1), chr_48, 1, LOCAL(2),
  // text(2) >= '0' && text(2) <= '9')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(2) >= '0' && text(2) <= '9')
  var_std__and, 2, LOCAL(3), lambda_1212, 1, LOCAL(4),
  // text(2) >= '0' && text(2) <= '9')
  LET, 1, LOCAL(4), TAIL_CALL,
  POS(3553, 10),
  POS(3553, 10),
  POS(3553, 10),
  POS(3553, 10),
  POS(3553, 10)
};

static TAB_NUM t_lambda_1212[] = {
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
  POS(3553, 28),
  POS(3553, 40),
  POS(3553, 40),
  POS(3553, 28)
};

static TAB_NUM t_lambda_1213[] = {
  0, // locals
  0, // parameters
  // range &text 3 -1
  var_range, 3, var_text, num_3, minus_num_1, 1, var_text,
  // parse_more_fraction_digits
  func_parse_more_fraction_digits, 0, TAIL_CALL,
  POS(3555, 9),
  POS(3556, 9)
};

static TAB_NUM t_lambda_1214[] = {
  2, // locals
  0, // parameters
  // text(1) == 'e'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == 'e'
  var_std__equal, 2, LOCAL(1), chr_101, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_1215, TAIL_CALL,
  POS(3558, 7),
  POS(3558, 7),
  POS(3557, 7)
};

static TAB_NUM t_lambda_1215[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_exponent
  func_parse_exponent, 0, TAIL_CALL,
  POS(3560, 9),
  POS(3561, 9)
};

static TAB_NUM t_lambda_1216[] = {
  2, // locals
  0, // parameters
  // text(1) == 'E'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == 'E'
  var_std__equal, 2, LOCAL(1), chr_69, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_1217, TAIL_CALL,
  POS(3563, 7),
  POS(3563, 7),
  POS(3562, 7)
};

static TAB_NUM t_lambda_1217[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_exponent
  func_parse_exponent, 0, TAIL_CALL,
  POS(3565, 9),
  POS(3566, 9)
};

static TAB_NUM t_lambda_1218[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_1219, TAIL_CALL,
  POS(3567, 7)
};

static TAB_NUM t_lambda_1219[] = {
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
  POS(3569, 27),
  POS(3569, 42),
  POS(3569, 27),
  POS(3569, 15),
  POS(3569, 9)
};

static TAB_NUM t_func_parse_more_fraction_digits[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 4, lambda_1220, lambda_1223, lambda_1225, lambda_1227, TAIL_CALL,
  POS(3572, 3)
};

static TAB_NUM t_lambda_1220[] = {
  4, // locals
  0, // parameters
  // text(1) >= '0' && text(1) <= '9')
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) >= '0' && text(1) <= '9')
  var_std__less, 2, LOCAL(1), chr_48, 1, LOCAL(2),
  // text(1) >= '0' && text(1) <= '9')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) >= '0' && text(1) <= '9')
  var_std__and, 2, LOCAL(3), lambda_1221, 1, LOCAL(4),
  // 
  LET, 2, LOCAL(4), lambda_1222, TAIL_CALL,
  POS(3574, 8),
  POS(3574, 8),
  POS(3574, 8),
  POS(3574, 8),
  POS(3573, 7)
};

static TAB_NUM t_lambda_1221[] = {
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
  POS(3574, 26),
  POS(3574, 38),
  POS(3574, 38),
  POS(3574, 26)
};

static TAB_NUM t_lambda_1222[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_more_fraction_digits
  func_parse_more_fraction_digits, 0, TAIL_CALL,
  POS(3576, 9),
  POS(3577, 9)
};

static TAB_NUM t_lambda_1223[] = {
  2, // locals
  0, // parameters
  // text(1) == 'e'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == 'e'
  var_std__equal, 2, LOCAL(1), chr_101, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_1224, TAIL_CALL,
  POS(3579, 7),
  POS(3579, 7),
  POS(3578, 7)
};

static TAB_NUM t_lambda_1224[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_exponent
  func_parse_exponent, 0, TAIL_CALL,
  POS(3581, 9),
  POS(3582, 9)
};

static TAB_NUM t_lambda_1225[] = {
  2, // locals
  0, // parameters
  // text(1) == 'E'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == 'E'
  var_std__equal, 2, LOCAL(1), chr_69, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_1226, TAIL_CALL,
  POS(3584, 7),
  POS(3584, 7),
  POS(3583, 7)
};

static TAB_NUM t_lambda_1226[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_exponent
  func_parse_exponent, 0, TAIL_CALL,
  POS(3586, 9),
  POS(3587, 9)
};

static TAB_NUM t_lambda_1227[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_1228, TAIL_CALL,
  POS(3588, 7)
};

static TAB_NUM t_lambda_1228[] = {
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
  POS(3590, 27),
  POS(3590, 42),
  POS(3590, 27),
  POS(3590, 15),
  POS(3590, 9)
};

static TAB_NUM t_func_parse_exponent[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 4, lambda_1229, lambda_1231, lambda_1233, lambda_1236, TAIL_CALL,
  POS(3593, 3)
};

static TAB_NUM t_lambda_1229[] = {
  2, // locals
  0, // parameters
  // text(1) == '+'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '+'
  var_std__equal, 2, LOCAL(1), chr_43, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_1230, TAIL_CALL,
  POS(3595, 7),
  POS(3595, 7),
  POS(3594, 7)
};

static TAB_NUM t_lambda_1230[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_exponent_digits
  func_parse_exponent_digits, 0, TAIL_CALL,
  POS(3597, 9),
  POS(3598, 9)
};

static TAB_NUM t_lambda_1231[] = {
  2, // locals
  0, // parameters
  // text(1) == '-'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '-'
  var_std__equal, 2, LOCAL(1), chr_45, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_1232, TAIL_CALL,
  POS(3600, 7),
  POS(3600, 7),
  POS(3599, 7)
};

static TAB_NUM t_lambda_1232[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_exponent_digits
  func_parse_exponent_digits, 0, TAIL_CALL,
  POS(3602, 9),
  POS(3603, 9)
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
  POS(3605, 8),
  POS(3605, 8),
  POS(3605, 8),
  POS(3605, 8),
  POS(3604, 7)
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
  POS(3605, 26),
  POS(3605, 38),
  POS(3605, 38),
  POS(3605, 26)
};

static TAB_NUM t_lambda_1235[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_more_exponent_digits
  func_parse_more_exponent_digits, 0, TAIL_CALL,
  POS(3607, 9),
  POS(3608, 9)
};

static TAB_NUM t_lambda_1236[] = {
  0, // locals
  0, // parameters
  //  true:
  LET, 2, var_true, lambda_1237, TAIL_CALL,
  POS(3609, 7)
};

static TAB_NUM t_lambda_1237[] = {
  0, // locals
  0, // parameters
  // syntax_error "exponent"
  func_syntax_error, 1, str_exponent, TAIL_CALL,
  POS(3610, 7)
};

static TAB_NUM t_func_parse_exponent_digits[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 2, lambda_1238, lambda_1241, TAIL_CALL,
  POS(3613, 3)
};

static TAB_NUM t_lambda_1238[] = {
  4, // locals
  0, // parameters
  // text(1) >= '0' && text(1) <= '9')
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) >= '0' && text(1) <= '9')
  var_std__less, 2, LOCAL(1), chr_48, 1, LOCAL(2),
  // text(1) >= '0' && text(1) <= '9')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) >= '0' && text(1) <= '9')
  var_std__and, 2, LOCAL(3), lambda_1239, 1, LOCAL(4),
  // 
  LET, 2, LOCAL(4), lambda_1240, TAIL_CALL,
  POS(3615, 8),
  POS(3615, 8),
  POS(3615, 8),
  POS(3615, 8),
  POS(3614, 7)
};

static TAB_NUM t_lambda_1239[] = {
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
  POS(3615, 26),
  POS(3615, 38),
  POS(3615, 38),
  POS(3615, 26)
};

static TAB_NUM t_lambda_1240[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_more_exponent_digits
  func_parse_more_exponent_digits, 0, TAIL_CALL,
  POS(3617, 9),
  POS(3618, 9)
};

static TAB_NUM t_lambda_1241[] = {
  0, // locals
  0, // parameters
  //  true:
  LET, 2, var_true, lambda_1242, TAIL_CALL,
  POS(3619, 7)
};

static TAB_NUM t_lambda_1242[] = {
  0, // locals
  0, // parameters
  // syntax_error "exponent digits"
  func_syntax_error, 1, str_exponent_digits, TAIL_CALL,
  POS(3620, 7)
};

static TAB_NUM t_func_parse_more_exponent_digits[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 2, lambda_1243, lambda_1246, TAIL_CALL,
  POS(3623, 3)
};

static TAB_NUM t_lambda_1243[] = {
  4, // locals
  0, // parameters
  // text(1) >= '0' && text(1) <= '9')
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) >= '0' && text(1) <= '9')
  var_std__less, 2, LOCAL(1), chr_48, 1, LOCAL(2),
  // text(1) >= '0' && text(1) <= '9')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) >= '0' && text(1) <= '9')
  var_std__and, 2, LOCAL(3), lambda_1244, 1, LOCAL(4),
  // 
  LET, 2, LOCAL(4), lambda_1245, TAIL_CALL,
  POS(3625, 8),
  POS(3625, 8),
  POS(3625, 8),
  POS(3625, 8),
  POS(3624, 7)
};

static TAB_NUM t_lambda_1244[] = {
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
  POS(3625, 26),
  POS(3625, 38),
  POS(3625, 38),
  POS(3625, 26)
};

static TAB_NUM t_lambda_1245[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_more_exponent_digits
  func_parse_more_exponent_digits, 0, TAIL_CALL,
  POS(3627, 9),
  POS(3628, 9)
};

static TAB_NUM t_lambda_1246[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_1247, TAIL_CALL,
  POS(3629, 7)
};

static TAB_NUM t_lambda_1247[] = {
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
  POS(3631, 27),
  POS(3631, 42),
  POS(3631, 27),
  POS(3631, 15),
  POS(3631, 9)
};

static TAB_NUM t_func_parse_binary_digits[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 2, lambda_1248, lambda_1251, TAIL_CALL,
  POS(3634, 3)
};

static TAB_NUM t_lambda_1248[] = {
  3, // locals
  0, // parameters
  // text(1) == '0' || text(1) == '1'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '0' || text(1) == '1'
  var_std__equal, 2, LOCAL(1), chr_48, 1, LOCAL(2),
  // text(1) == '0' || text(1) == '1'
  var_std__or, 2, LOCAL(2), lambda_1249, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_1250, TAIL_CALL,
  POS(3636, 7),
  POS(3636, 7),
  POS(3636, 7),
  POS(3635, 7)
};

static TAB_NUM t_lambda_1249[] = {
  2, // locals
  0, // parameters
  // text(1) == '1'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '1'
  var_std__equal, 2, LOCAL(1), chr_49, 1, LOCAL(2),
  // text(1) == '1'
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(3636, 25),
  POS(3636, 25),
  POS(3636, 25)
};

static TAB_NUM t_lambda_1250[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_more_binary_digits
  func_parse_more_binary_digits, 0, TAIL_CALL,
  POS(3638, 9),
  POS(3639, 9)
};

static TAB_NUM t_lambda_1251[] = {
  0, // locals
  0, // parameters
  //  true:
  LET, 2, var_true, lambda_1252, TAIL_CALL,
  POS(3640, 7)
};

static TAB_NUM t_lambda_1252[] = {
  0, // locals
  0, // parameters
  // syntax_error "binary digits"
  func_syntax_error, 1, str_binary_digits, TAIL_CALL,
  POS(3641, 7)
};

static TAB_NUM t_func_parse_more_binary_digits[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 3, lambda_1253, lambda_1256, lambda_1260, TAIL_CALL,
  POS(3644, 3)
};

static TAB_NUM t_lambda_1253[] = {
  3, // locals
  0, // parameters
  // text(1) == '0' || text(1) == '1'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '0' || text(1) == '1'
  var_std__equal, 2, LOCAL(1), chr_48, 1, LOCAL(2),
  // text(1) == '0' || text(1) == '1'
  var_std__or, 2, LOCAL(2), lambda_1254, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_1255, TAIL_CALL,
  POS(3646, 7),
  POS(3646, 7),
  POS(3646, 7),
  POS(3645, 7)
};

static TAB_NUM t_lambda_1254[] = {
  2, // locals
  0, // parameters
  // text(1) == '1'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '1'
  var_std__equal, 2, LOCAL(1), chr_49, 1, LOCAL(2),
  // text(1) == '1'
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(3646, 25),
  POS(3646, 25),
  POS(3646, 25)
};

static TAB_NUM t_lambda_1255[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_more_binary_digits
  func_parse_more_binary_digits, 0, TAIL_CALL,
  POS(3648, 9),
  POS(3649, 9)
};

static TAB_NUM t_lambda_1256[] = {
  3, // locals
  0, // parameters
  // text(1) == '''
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '''
  var_std__equal, 2, LOCAL(1), chr_39, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_1257, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_1259, TAIL_CALL,
  POS(3652, 9),
  POS(3652, 9),
  POS(3651, 9),
  POS(3650, 7)
};

static TAB_NUM t_lambda_1257[] = {
  3, // locals
  0, // parameters
  // text(2) == '0' || text(2) == '1'
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '0' || text(2) == '1'
  var_std__equal, 2, LOCAL(1), chr_48, 1, LOCAL(2),
  // text(2) == '0' || text(2) == '1'
  var_std__or, 2, LOCAL(2), lambda_1258, 1, LOCAL(3),
  // text(2) == '0' || text(2) == '1'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(3653, 9),
  POS(3653, 9),
  POS(3653, 9),
  POS(3653, 9)
};

static TAB_NUM t_lambda_1258[] = {
  2, // locals
  0, // parameters
  // text(2) == '1'
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '1'
  var_std__equal, 2, LOCAL(1), chr_49, 1, LOCAL(2),
  // text(2) == '1'
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(3653, 27),
  POS(3653, 27),
  POS(3653, 27)
};

static TAB_NUM t_lambda_1259[] = {
  0, // locals
  0, // parameters
  // range &text 3 -1
  var_range, 3, var_text, num_3, minus_num_1, 1, var_text,
  // parse_more_binary_digits
  func_parse_more_binary_digits, 0, TAIL_CALL,
  POS(3655, 9),
  POS(3656, 9)
};

static TAB_NUM t_lambda_1260[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_1261, TAIL_CALL,
  POS(3657, 7)
};

static TAB_NUM t_lambda_1261[] = {
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
  POS(3659, 27),
  POS(3659, 42),
  POS(3659, 27),
  POS(3659, 15),
  POS(3659, 9)
};

static TAB_NUM t_func_parse_octal_digits[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 2, lambda_1262, lambda_1265, TAIL_CALL,
  POS(3662, 3)
};

static TAB_NUM t_lambda_1262[] = {
  4, // locals
  0, // parameters
  // text(1) >= '0' && text(1) <= '7')
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) >= '0' && text(1) <= '7')
  var_std__less, 2, LOCAL(1), chr_48, 1, LOCAL(2),
  // text(1) >= '0' && text(1) <= '7')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) >= '0' && text(1) <= '7')
  var_std__and, 2, LOCAL(3), lambda_1263, 1, LOCAL(4),
  // 
  LET, 2, LOCAL(4), lambda_1264, TAIL_CALL,
  POS(3664, 8),
  POS(3664, 8),
  POS(3664, 8),
  POS(3664, 8),
  POS(3663, 7)
};

static TAB_NUM t_lambda_1263[] = {
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
  POS(3664, 26),
  POS(3664, 38),
  POS(3664, 38),
  POS(3664, 26)
};

static TAB_NUM t_lambda_1264[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_more_octal_digits
  func_parse_more_octal_digits, 0, TAIL_CALL,
  POS(3666, 9),
  POS(3667, 9)
};

static TAB_NUM t_lambda_1265[] = {
  0, // locals
  0, // parameters
  //  true:
  LET, 2, var_true, lambda_1266, TAIL_CALL,
  POS(3668, 7)
};

static TAB_NUM t_lambda_1266[] = {
  0, // locals
  0, // parameters
  // syntax_error "octal digits"
  func_syntax_error, 1, str_octal_digits, TAIL_CALL,
  POS(3669, 7)
};

static TAB_NUM t_func_parse_more_octal_digits[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 3, lambda_1267, lambda_1270, lambda_1274, TAIL_CALL,
  POS(3672, 3)
};

static TAB_NUM t_lambda_1267[] = {
  4, // locals
  0, // parameters
  // text(1) >= '0' && text(1) <= '7')
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) >= '0' && text(1) <= '7')
  var_std__less, 2, LOCAL(1), chr_48, 1, LOCAL(2),
  // text(1) >= '0' && text(1) <= '7')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) >= '0' && text(1) <= '7')
  var_std__and, 2, LOCAL(3), lambda_1268, 1, LOCAL(4),
  // 
  LET, 2, LOCAL(4), lambda_1269, TAIL_CALL,
  POS(3674, 8),
  POS(3674, 8),
  POS(3674, 8),
  POS(3674, 8),
  POS(3673, 7)
};

static TAB_NUM t_lambda_1268[] = {
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
  POS(3674, 26),
  POS(3674, 38),
  POS(3674, 38),
  POS(3674, 26)
};

static TAB_NUM t_lambda_1269[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_more_octal_digits
  func_parse_more_octal_digits, 0, TAIL_CALL,
  POS(3676, 9),
  POS(3677, 9)
};

static TAB_NUM t_lambda_1270[] = {
  3, // locals
  0, // parameters
  // text(1) == '''
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '''
  var_std__equal, 2, LOCAL(1), chr_39, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_1271, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_1273, TAIL_CALL,
  POS(3680, 9),
  POS(3680, 9),
  POS(3679, 9),
  POS(3678, 7)
};

static TAB_NUM t_lambda_1271[] = {
  4, // locals
  0, // parameters
  // text(2) >= '0' && text(2) <= '7')
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) >= '0' && text(2) <= '7')
  var_std__less, 2, LOCAL(1), chr_48, 1, LOCAL(2),
  // text(2) >= '0' && text(2) <= '7')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(2) >= '0' && text(2) <= '7')
  var_std__and, 2, LOCAL(3), lambda_1272, 1, LOCAL(4),
  // text(2) >= '0' && text(2) <= '7')
  LET, 1, LOCAL(4), TAIL_CALL,
  POS(3681, 10),
  POS(3681, 10),
  POS(3681, 10),
  POS(3681, 10),
  POS(3681, 10)
};

static TAB_NUM t_lambda_1272[] = {
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
  POS(3681, 28),
  POS(3681, 40),
  POS(3681, 40),
  POS(3681, 28)
};

static TAB_NUM t_lambda_1273[] = {
  0, // locals
  0, // parameters
  // range &text 3 -1
  var_range, 3, var_text, num_3, minus_num_1, 1, var_text,
  // parse_more_octal_digits
  func_parse_more_octal_digits, 0, TAIL_CALL,
  POS(3683, 9),
  POS(3684, 9)
};

static TAB_NUM t_lambda_1274[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_1275, TAIL_CALL,
  POS(3685, 7)
};

static TAB_NUM t_lambda_1275[] = {
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
  POS(3687, 27),
  POS(3687, 42),
  POS(3687, 27),
  POS(3687, 15),
  POS(3687, 9)
};

static TAB_NUM t_func_parse_hex_digits[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 2, lambda_1276, lambda_1283, TAIL_CALL,
  POS(3690, 3)
};

static TAB_NUM t_lambda_1276[] = {
  5, // locals
  0, // parameters
  // text(1) >= '0' && text(1) <= '9') || (text(1) >= 'a' && text(1) <= 'f') || (text(1) >= 'A' && text(1) <= 'F')
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) >= '0' && text(1) <= '9') || (text(1) >= 'a' && text(1) <= 'f') || (text(1) >= 'A' && text(1) <= 'F')
  var_std__less, 2, LOCAL(1), chr_48, 1, LOCAL(2),
  // text(1) >= '0' && text(1) <= '9') || (text(1) >= 'a' && text(1) <= 'f') || (text(1) >= 'A' && text(1) <= 'F')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) >= '0' && text(1) <= '9') || (text(1) >= 'a' && text(1) <= 'f') || (text(1) >= 'A' && text(1) <= 'F')
  var_std__and, 2, LOCAL(3), lambda_1277, 1, LOCAL(4),
  // text(1) >= '0' && text(1) <= '9') || (text(1) >= 'a' && text(1) <= 'f') || (text(1) >= 'A' && text(1) <= 'F')
  var_std__or, 2, LOCAL(4), lambda_1278, 1, LOCAL(5),
  // 
  LET, 2, LOCAL(5), lambda_1282, TAIL_CALL,
  POS(3692, 8),
  POS(3692, 8),
  POS(3692, 8),
  POS(3692, 8),
  POS(3692, 8),
  POS(3691, 7)
};

static TAB_NUM t_lambda_1277[] = {
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
  POS(3692, 26),
  POS(3692, 38),
  POS(3692, 38),
  POS(3692, 26)
};

static TAB_NUM t_lambda_1278[] = {
  5, // locals
  0, // parameters
  // text(1) >= 'a' && text(1) <= 'f') || (text(1) >= 'A' && text(1) <= 'F')
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) >= 'a' && text(1) <= 'f') || (text(1) >= 'A' && text(1) <= 'F')
  var_std__less, 2, LOCAL(1), chr_97, 1, LOCAL(2),
  // text(1) >= 'a' && text(1) <= 'f') || (text(1) >= 'A' && text(1) <= 'F')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) >= 'a' && text(1) <= 'f') || (text(1) >= 'A' && text(1) <= 'F')
  var_std__and, 2, LOCAL(3), lambda_1279, 1, LOCAL(4),
  // text(1) >= 'a' && text(1) <= 'f') || (text(1) >= 'A' && text(1) <= 'F')
  var_std__or, 2, LOCAL(4), lambda_1280, 1, LOCAL(5),
  // (text(1) >= 'a' && text(1) <= 'f') || (text(1) >= 'A' && text(1) <= 'F')
  LET, 1, LOCAL(5), TAIL_CALL,
  POS(3692, 46),
  POS(3692, 46),
  POS(3692, 46),
  POS(3692, 46),
  POS(3692, 46),
  POS(3692, 45)
};

static TAB_NUM t_lambda_1279[] = {
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
  POS(3692, 64),
  POS(3692, 76),
  POS(3692, 76),
  POS(3692, 64)
};

static TAB_NUM t_lambda_1280[] = {
  4, // locals
  0, // parameters
  // text(1) >= 'A' && text(1) <= 'F')
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) >= 'A' && text(1) <= 'F')
  var_std__less, 2, LOCAL(1), chr_65, 1, LOCAL(2),
  // text(1) >= 'A' && text(1) <= 'F')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) >= 'A' && text(1) <= 'F')
  var_std__and, 2, LOCAL(3), lambda_1281, 1, LOCAL(4),
  // text(1) >= 'A' && text(1) <= 'F')
  LET, 1, LOCAL(4), TAIL_CALL,
  POS(3692, 84),
  POS(3692, 84),
  POS(3692, 84),
  POS(3692, 84),
  POS(3692, 84)
};

static TAB_NUM t_lambda_1281[] = {
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
  POS(3692, 102),
  POS(3692, 114),
  POS(3692, 114),
  POS(3692, 102)
};

static TAB_NUM t_lambda_1282[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_more_hex_digits
  func_parse_more_hex_digits, 0, TAIL_CALL,
  POS(3694, 9),
  POS(3695, 9)
};

static TAB_NUM t_lambda_1283[] = {
  0, // locals
  0, // parameters
  //  true:
  LET, 2, var_true, lambda_1284, TAIL_CALL,
  POS(3696, 7)
};

static TAB_NUM t_lambda_1284[] = {
  0, // locals
  0, // parameters
  // syntax_error "hex digits"
  func_syntax_error, 1, str_hex_digits, TAIL_CALL,
  POS(3697, 7)
};

static TAB_NUM t_func_parse_more_hex_digits[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 3, lambda_1285, lambda_1292, lambda_1300, TAIL_CALL,
  POS(3700, 3)
};

static TAB_NUM t_lambda_1285[] = {
  5, // locals
  0, // parameters
  // text(1) >= '0' && text(1) <= '9') || (text(1) >= 'a' && text(1) <= 'f') || (text(1) >= 'A' && text(1) <= 'F')
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) >= '0' && text(1) <= '9') || (text(1) >= 'a' && text(1) <= 'f') || (text(1) >= 'A' && text(1) <= 'F')
  var_std__less, 2, LOCAL(1), chr_48, 1, LOCAL(2),
  // text(1) >= '0' && text(1) <= '9') || (text(1) >= 'a' && text(1) <= 'f') || (text(1) >= 'A' && text(1) <= 'F')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) >= '0' && text(1) <= '9') || (text(1) >= 'a' && text(1) <= 'f') || (text(1) >= 'A' && text(1) <= 'F')
  var_std__and, 2, LOCAL(3), lambda_1286, 1, LOCAL(4),
  // text(1) >= '0' && text(1) <= '9') || (text(1) >= 'a' && text(1) <= 'f') || (text(1) >= 'A' && text(1) <= 'F')
  var_std__or, 2, LOCAL(4), lambda_1287, 1, LOCAL(5),
  // 
  LET, 2, LOCAL(5), lambda_1291, TAIL_CALL,
  POS(3702, 8),
  POS(3702, 8),
  POS(3702, 8),
  POS(3702, 8),
  POS(3702, 8),
  POS(3701, 7)
};

static TAB_NUM t_lambda_1286[] = {
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
  POS(3702, 26),
  POS(3702, 38),
  POS(3702, 38),
  POS(3702, 26)
};

static TAB_NUM t_lambda_1287[] = {
  5, // locals
  0, // parameters
  // text(1) >= 'a' && text(1) <= 'f') || (text(1) >= 'A' && text(1) <= 'F')
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) >= 'a' && text(1) <= 'f') || (text(1) >= 'A' && text(1) <= 'F')
  var_std__less, 2, LOCAL(1), chr_97, 1, LOCAL(2),
  // text(1) >= 'a' && text(1) <= 'f') || (text(1) >= 'A' && text(1) <= 'F')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) >= 'a' && text(1) <= 'f') || (text(1) >= 'A' && text(1) <= 'F')
  var_std__and, 2, LOCAL(3), lambda_1288, 1, LOCAL(4),
  // text(1) >= 'a' && text(1) <= 'f') || (text(1) >= 'A' && text(1) <= 'F')
  var_std__or, 2, LOCAL(4), lambda_1289, 1, LOCAL(5),
  // (text(1) >= 'a' && text(1) <= 'f') || (text(1) >= 'A' && text(1) <= 'F')
  LET, 1, LOCAL(5), TAIL_CALL,
  POS(3702, 46),
  POS(3702, 46),
  POS(3702, 46),
  POS(3702, 46),
  POS(3702, 46),
  POS(3702, 45)
};

static TAB_NUM t_lambda_1288[] = {
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
  POS(3702, 64),
  POS(3702, 76),
  POS(3702, 76),
  POS(3702, 64)
};

static TAB_NUM t_lambda_1289[] = {
  4, // locals
  0, // parameters
  // text(1) >= 'A' && text(1) <= 'F')
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) >= 'A' && text(1) <= 'F')
  var_std__less, 2, LOCAL(1), chr_65, 1, LOCAL(2),
  // text(1) >= 'A' && text(1) <= 'F')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) >= 'A' && text(1) <= 'F')
  var_std__and, 2, LOCAL(3), lambda_1290, 1, LOCAL(4),
  // text(1) >= 'A' && text(1) <= 'F')
  LET, 1, LOCAL(4), TAIL_CALL,
  POS(3702, 84),
  POS(3702, 84),
  POS(3702, 84),
  POS(3702, 84),
  POS(3702, 84)
};

static TAB_NUM t_lambda_1290[] = {
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
  POS(3702, 102),
  POS(3702, 114),
  POS(3702, 114),
  POS(3702, 102)
};

static TAB_NUM t_lambda_1291[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_more_hex_digits
  func_parse_more_hex_digits, 0, TAIL_CALL,
  POS(3704, 9),
  POS(3705, 9)
};

static TAB_NUM t_lambda_1292[] = {
  3, // locals
  0, // parameters
  // text(1) == '''
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '''
  var_std__equal, 2, LOCAL(1), chr_39, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_1293, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_1299, TAIL_CALL,
  POS(3708, 9),
  POS(3708, 9),
  POS(3707, 9),
  POS(3706, 7)
};

static TAB_NUM t_lambda_1293[] = {
  5, // locals
  0, // parameters
  // text(2) >= '0' && text(2) <= '9') || (text(2) >= 'a' && text(2) <= 'f') || (text(2) >= 'A' && text(2) <= 'F')
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) >= '0' && text(2) <= '9') || (text(2) >= 'a' && text(2) <= 'f') || (text(2) >= 'A' && text(2) <= 'F')
  var_std__less, 2, LOCAL(1), chr_48, 1, LOCAL(2),
  // text(2) >= '0' && text(2) <= '9') || (text(2) >= 'a' && text(2) <= 'f') || (text(2) >= 'A' && text(2) <= 'F')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(2) >= '0' && text(2) <= '9') || (text(2) >= 'a' && text(2) <= 'f') || (text(2) >= 'A' && text(2) <= 'F')
  var_std__and, 2, LOCAL(3), lambda_1294, 1, LOCAL(4),
  // text(2) >= '0' && text(2) <= '9') || (text(2) >= 'a' && text(2) <= 'f') || (text(2) >= 'A' && text(2) <= 'F')
  var_std__or, 2, LOCAL(4), lambda_1295, 1, LOCAL(5),
  // (text(2) >= '0' && text(2) <= '9') || (text(2) >= 'a' && text(2) <= 'f') || (text(2) >= 'A' && text(2) <= 'F')
  LET, 1, LOCAL(5), TAIL_CALL,
  POS(3709, 10),
  POS(3709, 10),
  POS(3709, 10),
  POS(3709, 10),
  POS(3709, 10),
  POS(3709, 9)
};

static TAB_NUM t_lambda_1294[] = {
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
  POS(3709, 28),
  POS(3709, 40),
  POS(3709, 40),
  POS(3709, 28)
};

static TAB_NUM t_lambda_1295[] = {
  5, // locals
  0, // parameters
  // text(2) >= 'a' && text(2) <= 'f') || (text(2) >= 'A' && text(2) <= 'F')
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) >= 'a' && text(2) <= 'f') || (text(2) >= 'A' && text(2) <= 'F')
  var_std__less, 2, LOCAL(1), chr_97, 1, LOCAL(2),
  // text(2) >= 'a' && text(2) <= 'f') || (text(2) >= 'A' && text(2) <= 'F')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(2) >= 'a' && text(2) <= 'f') || (text(2) >= 'A' && text(2) <= 'F')
  var_std__and, 2, LOCAL(3), lambda_1296, 1, LOCAL(4),
  // text(2) >= 'a' && text(2) <= 'f') || (text(2) >= 'A' && text(2) <= 'F')
  var_std__or, 2, LOCAL(4), lambda_1297, 1, LOCAL(5),
  // (text(2) >= 'a' && text(2) <= 'f') || (text(2) >= 'A' && text(2) <= 'F')
  LET, 1, LOCAL(5), TAIL_CALL,
  POS(3709, 48),
  POS(3709, 48),
  POS(3709, 48),
  POS(3709, 48),
  POS(3709, 48),
  POS(3709, 47)
};

static TAB_NUM t_lambda_1296[] = {
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
  POS(3709, 66),
  POS(3709, 78),
  POS(3709, 78),
  POS(3709, 66)
};

static TAB_NUM t_lambda_1297[] = {
  4, // locals
  0, // parameters
  // text(2) >= 'A' && text(2) <= 'F')
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) >= 'A' && text(2) <= 'F')
  var_std__less, 2, LOCAL(1), chr_65, 1, LOCAL(2),
  // text(2) >= 'A' && text(2) <= 'F')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(2) >= 'A' && text(2) <= 'F')
  var_std__and, 2, LOCAL(3), lambda_1298, 1, LOCAL(4),
  // text(2) >= 'A' && text(2) <= 'F')
  LET, 1, LOCAL(4), TAIL_CALL,
  POS(3709, 86),
  POS(3709, 86),
  POS(3709, 86),
  POS(3709, 86),
  POS(3709, 86)
};

static TAB_NUM t_lambda_1298[] = {
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
  POS(3709, 104),
  POS(3709, 116),
  POS(3709, 116),
  POS(3709, 104)
};

static TAB_NUM t_lambda_1299[] = {
  0, // locals
  0, // parameters
  // range &text 3 -1
  var_range, 3, var_text, num_3, minus_num_1, 1, var_text,
  // parse_more_hex_digits
  func_parse_more_hex_digits, 0, TAIL_CALL,
  POS(3711, 9),
  POS(3712, 9)
};

static TAB_NUM t_lambda_1300[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_1301, TAIL_CALL,
  POS(3713, 7)
};

static TAB_NUM t_lambda_1301[] = {
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
  POS(3715, 27),
  POS(3715, 42),
  POS(3715, 27),
  POS(3715, 15),
  POS(3715, 9)
};

static TAB_NUM t_func_parse_special_character_literal[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 3, lambda_1302, lambda_1305, lambda_1310, TAIL_CALL,
  POS(3718, 3)
};

static TAB_NUM t_lambda_1302[] = {
  3, // locals
  0, // parameters
  // text(1) == '@@'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '@@'
  var_std__equal, 2, LOCAL(1), chr_64, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_1303, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_1304, TAIL_CALL,
  POS(3721, 9),
  POS(3721, 9),
  POS(3720, 9),
  POS(3719, 7)
};

static TAB_NUM t_lambda_1303[] = {
  2, // locals
  0, // parameters
  // text(2) == '''
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '''
  var_std__equal, 2, LOCAL(1), chr_39, 1, LOCAL(2),
  // text(2) == '''
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(3722, 9),
  POS(3722, 9),
  POS(3722, 9)
};

static TAB_NUM t_lambda_1304[] = {
  0, // locals
  0, // parameters
  // range &text 3 -1
  var_range, 3, var_text, num_3, minus_num_1, 1, var_text,
  // parse_at_character_literal_without_prefix
  func_parse_at_character_literal_without_prefix, 0, TAIL_CALL,
  POS(3724, 9),
  POS(3725, 9)
};

static TAB_NUM t_lambda_1305[] = {
  5, // locals
  0, // parameters
  // text(1) >= 'a' && text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z')
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) >= 'a' && text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z')
  var_std__less, 2, LOCAL(1), chr_97, 1, LOCAL(2),
  // text(1) >= 'a' && text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) >= 'a' && text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z')
  var_std__and, 2, LOCAL(3), lambda_1306, 1, LOCAL(4),
  // text(1) >= 'a' && text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z')
  var_std__or, 2, LOCAL(4), lambda_1307, 1, LOCAL(5),
  // 
  LET, 2, LOCAL(5), lambda_1309, TAIL_CALL,
  POS(3727, 8),
  POS(3727, 8),
  POS(3727, 8),
  POS(3727, 8),
  POS(3727, 8),
  POS(3726, 7)
};

static TAB_NUM t_lambda_1306[] = {
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
  POS(3727, 26),
  POS(3727, 38),
  POS(3727, 38),
  POS(3727, 26)
};

static TAB_NUM t_lambda_1307[] = {
  4, // locals
  0, // parameters
  // text(1) >= 'A' && text(1) <= 'Z')
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) >= 'A' && text(1) <= 'Z')
  var_std__less, 2, LOCAL(1), chr_65, 1, LOCAL(2),
  // text(1) >= 'A' && text(1) <= 'Z')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) >= 'A' && text(1) <= 'Z')
  var_std__and, 2, LOCAL(3), lambda_1308, 1, LOCAL(4),
  // text(1) >= 'A' && text(1) <= 'Z')
  LET, 1, LOCAL(4), TAIL_CALL,
  POS(3727, 46),
  POS(3727, 46),
  POS(3727, 46),
  POS(3727, 46),
  POS(3727, 46)
};

static TAB_NUM t_lambda_1308[] = {
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
  POS(3727, 64),
  POS(3727, 76),
  POS(3727, 76),
  POS(3727, 64)
};

static TAB_NUM t_lambda_1309[] = {
  0, // locals
  0, // parameters
  // !str text
  LET, 1, var_text, 1, var_str,
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_named_character_literal_without_prefix
  func_parse_named_character_literal_without_prefix, 0, TAIL_CALL,
  POS(3729, 9),
  POS(3730, 9),
  POS(3731, 9)
};

static TAB_NUM t_lambda_1310[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_1311, TAIL_CALL,
  POS(3732, 7)
};

static TAB_NUM t_lambda_1311[] = {
  0, // locals
  0, // parameters
  // !expected "special character literal"
  LET, 1, str_special_characte, 1, var_expected,
  // !at text
  LET, 1, var_text, 1, var_at,
  // parse_numeric_character_literal
  func_parse_numeric_character_literal, 0, TAIL_CALL,
  POS(3735, 9),
  POS(3736, 9),
  POS(3737, 9)
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
  POS(3740, 3),
  POS(3743, 5),
  POS(3741, 3)
};

static TAB_NUM t_func_parse_named_character_literal_without_prefix[] = {
  1, // locals
  0, // parameters
  // $position str
  LET, 1, var_str, 1, var_3748_1_position,
  // parse_more_character_name_characters !text $character_name
  func_parse_more_character_name_characters, 0, 2, var_text, var_3749_44_character_name,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_60_text_is_defined, lambda_1316, TAIL_CALL,
  POS(3748, 3),
  POS(3749, 3),
  POS(3751, 10),
  POS(3750, 3)
};

static TAB_NUM t_lambda_60_text_is_defined[] = {
  2, // locals
  0, // parameters
  // text(1) == ';':
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == ';':
  var_std__equal, 2, LOCAL(1), chr_59, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_1312, lambda_1315, TAIL_CALL,
  POS(3753, 9),
  POS(3753, 9),
  POS(3752, 7)
};

static TAB_NUM t_lambda_1312[] = {
  2, // locals
  0, // parameters
  // text(2) == '''
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '''
  var_std__equal, 2, LOCAL(1), chr_39, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_1313, lambda_1314, TAIL_CALL,
  POS(3755, 13),
  POS(3755, 13),
  POS(3754, 11)
};

static TAB_NUM t_lambda_1313[] = {
  2, // locals
  0, // parameters
  // range(text 3 -1)
  var_range, 3, var_text, num_3, minus_num_1, 1, LOCAL(1),
  // funky_types::named_character_literal
  LET, -3, var_funky_types__named_character_literal, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_3748_1_position, var_funky__name_of, var_3749_44_character_name, LOCAL(2),
  // 
  LET, 2, LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(3757, 15),
  POS(3758, 15),
  POS(3756, 15)
};

static TAB_NUM t_lambda_1314[] = {
  0, // locals
  0, // parameters
  // syntax_error "single quote"
  func_syntax_error, 1, str_single_quote, TAIL_CALL,
  POS(3763, 15)
};

static TAB_NUM t_lambda_1315[] = {
  0, // locals
  0, // parameters
  // syntax_error "';'"
  func_syntax_error, 1, string_9, TAIL_CALL,
  POS(3765, 11)
};

static TAB_NUM t_lambda_1316[] = {
  0, // locals
  0, // parameters
  //  undefined character_name
  LET, 2, var_undefined, var_3749_44_character_name, TAIL_CALL,
  POS(3766, 7)
};

static TAB_NUM t_func_parse_numeric_character_literal[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_3769_1_position,
  // !str text
  LET, 1, var_text, 1, var_str,
  // parse_digits !text $digits
  func_parse_digits, 0, 2, var_text, var_3771_20_digits,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_61_text_is_defined, lambda_1321, TAIL_CALL,
  POS(3769, 3),
  POS(3770, 3),
  POS(3771, 3),
  POS(3773, 10),
  POS(3772, 3)
};

static TAB_NUM t_lambda_61_text_is_defined[] = {
  2, // locals
  0, // parameters
  // text(1) == ';':
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == ';':
  var_std__equal, 2, LOCAL(1), chr_59, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_1317, lambda_1320, TAIL_CALL,
  POS(3775, 9),
  POS(3775, 9),
  POS(3774, 7)
};

static TAB_NUM t_lambda_1317[] = {
  2, // locals
  0, // parameters
  // text(2) == '''
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '''
  var_std__equal, 2, LOCAL(1), chr_39, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_1318, lambda_1319, TAIL_CALL,
  POS(3777, 13),
  POS(3777, 13),
  POS(3776, 11)
};

static TAB_NUM t_lambda_1318[] = {
  2, // locals
  0, // parameters
  // range(text 3 -1)
  var_range, 3, var_text, num_3, minus_num_1, 1, LOCAL(1),
  // funky_types::numeric_character_literal
  LET, -3, var_funky_types__numeric_character_literal, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_3769_1_position, var_funky__digits_of, var_3771_20_digits, LOCAL(2),
  // 
  LET, 2, LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(3779, 15),
  POS(3780, 15),
  POS(3778, 15)
};

static TAB_NUM t_lambda_1319[] = {
  0, // locals
  0, // parameters
  // syntax_error "single quote"
  func_syntax_error, 1, str_single_quote, TAIL_CALL,
  POS(3785, 15)
};

static TAB_NUM t_lambda_1320[] = {
  0, // locals
  0, // parameters
  // syntax_error "';'"
  func_syntax_error, 1, string_9, TAIL_CALL,
  POS(3787, 11)
};

static TAB_NUM t_lambda_1321[] = {
  0, // locals
  0, // parameters
  //  undefined digits
  LET, 2, var_undefined, var_3771_20_digits, TAIL_CALL,
  POS(3788, 7)
};

static TAB_NUM t_func_parse_character_literal_without_prefix[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_3791_1_position,
  // !str text
  LET, 1, var_text, 1, var_str,
  // parse_character !text $character
  func_parse_character, 0, 2, var_text, var_3793_23_character,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_62_text_is_defined, lambda_1324, TAIL_CALL,
  POS(3791, 3),
  POS(3792, 3),
  POS(3793, 3),
  POS(3795, 10),
  POS(3794, 3)
};

static TAB_NUM t_lambda_62_text_is_defined[] = {
  2, // locals
  0, // parameters
  // text(1) == '''
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '''
  var_std__equal, 2, LOCAL(1), chr_39, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_1322, lambda_1323, TAIL_CALL,
  POS(3797, 9),
  POS(3797, 9),
  POS(3796, 7)
};

static TAB_NUM t_lambda_1322[] = {
  2, // locals
  0, // parameters
  // range(text 2 -1)
  var_range, 3, var_text, num_2, minus_num_1, 1, LOCAL(1),
  // funky_types::character_literal
  LET, -3, var_funky_types__character_literal, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_3791_1_position, var_funky__character_of, var_3793_23_character, LOCAL(2),
  // 
  LET, 2, LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(3799, 11),
  POS(3800, 11),
  POS(3798, 11)
};

static TAB_NUM t_lambda_1323[] = {
  0, // locals
  0, // parameters
  // syntax_error "single quote"
  func_syntax_error, 1, str_single_quote, TAIL_CALL,
  POS(3805, 11)
};

static TAB_NUM t_lambda_1324[] = {
  0, // locals
  0, // parameters
  //  undefined character
  LET, 2, var_undefined, var_3793_23_character, TAIL_CALL,
  POS(3806, 7)
};

static TAB_NUM t_func_parse_character[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 2, lambda_1325, lambda_1327, TAIL_CALL,
  POS(3809, 3)
};

static TAB_NUM t_lambda_1325[] = {
  3, // locals
  0, // parameters
  // text(1) != '@nl;'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) != '@nl;'
  var_std__equal, 2, LOCAL(1), chr_10, 1, LOCAL(2),
  // text(1) != '@nl;'
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_1326, TAIL_CALL,
  POS(3811, 7),
  POS(3811, 7),
  POS(3811, 7),
  POS(3810, 7)
};

static TAB_NUM t_lambda_1326[] = {
  2, // locals
  0, // parameters
  // range(text 2 -1) range(str 1 1)
  var_range, 3, var_text, num_2, minus_num_1, 1, LOCAL(1),
  // range(str 1 1)
  var_range, 3, var_str, num_1, num_1, 1, LOCAL(2),
  //  range(text 2 -1) range(str 1 1)
  LET, 2, LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(3812, 10),
  POS(3812, 27),
  POS(3812, 9)
};

static TAB_NUM t_lambda_1327[] = {
  0, // locals
  0, // parameters
  //  true:
  LET, 2, var_true, lambda_1328, TAIL_CALL,
  POS(3813, 7)
};

static TAB_NUM t_lambda_1328[] = {
  0, // locals
  0, // parameters
  // syntax_error "character"
  func_syntax_error, 1, str_character, TAIL_CALL,
  POS(3814, 7)
};

static TAB_NUM t_func_parse_more_character_name_characters[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 2, lambda_1329, lambda_1336, TAIL_CALL,
  POS(3817, 3)
};

static TAB_NUM t_lambda_1329[] = {
  5, // locals
  0, // parameters
  // text(1) >= 'a' && text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) >= 'a' && text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  var_std__less, 2, LOCAL(1), chr_97, 1, LOCAL(2),
  // text(1) >= 'a' && text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) >= 'a' && text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  var_std__and, 2, LOCAL(3), lambda_1330, 1, LOCAL(4),
  // text(1) >= 'a' && text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  var_std__or, 2, LOCAL(4), lambda_1331, 1, LOCAL(5),
  // 
  LET, 2, LOCAL(5), lambda_1335, TAIL_CALL,
  POS(3819, 8),
  POS(3819, 8),
  POS(3819, 8),
  POS(3819, 8),
  POS(3819, 8),
  POS(3818, 7)
};

static TAB_NUM t_lambda_1330[] = {
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
  POS(3819, 26),
  POS(3819, 38),
  POS(3819, 38),
  POS(3819, 26)
};

static TAB_NUM t_lambda_1331[] = {
  5, // locals
  0, // parameters
  // text(1) >= 'A' && text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) >= 'A' && text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  var_std__less, 2, LOCAL(1), chr_65, 1, LOCAL(2),
  // text(1) >= 'A' && text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) >= 'A' && text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  var_std__and, 2, LOCAL(3), lambda_1332, 1, LOCAL(4),
  // text(1) >= 'A' && text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  var_std__or, 2, LOCAL(4), lambda_1333, 1, LOCAL(5),
  // (text(1) >= 'A' && text(1) <= 'Z') || (text(1) >= '0' && text(1) <= '9')
  LET, 1, LOCAL(5), TAIL_CALL,
  POS(3819, 46),
  POS(3819, 46),
  POS(3819, 46),
  POS(3819, 46),
  POS(3819, 46),
  POS(3819, 45)
};

static TAB_NUM t_lambda_1332[] = {
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
  POS(3819, 64),
  POS(3819, 76),
  POS(3819, 76),
  POS(3819, 64)
};

static TAB_NUM t_lambda_1333[] = {
  4, // locals
  0, // parameters
  // text(1) >= '0' && text(1) <= '9')
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) >= '0' && text(1) <= '9')
  var_std__less, 2, LOCAL(1), chr_48, 1, LOCAL(2),
  // text(1) >= '0' && text(1) <= '9')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) >= '0' && text(1) <= '9')
  var_std__and, 2, LOCAL(3), lambda_1334, 1, LOCAL(4),
  // text(1) >= '0' && text(1) <= '9')
  LET, 1, LOCAL(4), TAIL_CALL,
  POS(3819, 84),
  POS(3819, 84),
  POS(3819, 84),
  POS(3819, 84),
  POS(3819, 84)
};

static TAB_NUM t_lambda_1334[] = {
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
  POS(3819, 102),
  POS(3819, 114),
  POS(3819, 114),
  POS(3819, 102)
};

static TAB_NUM t_lambda_1335[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_more_character_name_characters
  func_parse_more_character_name_characters, 0, TAIL_CALL,
  POS(3821, 9),
  POS(3822, 9)
};

static TAB_NUM t_lambda_1336[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_1337, TAIL_CALL,
  POS(3823, 7)
};

static TAB_NUM t_lambda_1337[] = {
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
  POS(3825, 27),
  POS(3825, 42),
  POS(3825, 27),
  POS(3825, 15),
  POS(3825, 9)
};

static TAB_NUM t_func_parse_string_literal_without_prefix[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_3828_1_position,
  // parse_string_components !text $string_components
  func_parse_string_components, 0, 2, var_text, var_3829_31_string_components,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1338, lambda_1339, TAIL_CALL,
  POS(3828, 3),
  POS(3829, 3),
  POS(3831, 10),
  POS(3830, 3)
};

static TAB_NUM t_lambda_1338[] = {
  1, // locals
  0, // parameters
  // funky_types::string_literal
  LET, -3, var_funky_types__string_literal, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_3828_1_position, var_funky__components_of, var_3829_31_string_components, LOCAL(1),
  // 
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(3834, 7),
  POS(3832, 7)
};

static TAB_NUM t_lambda_1339[] = {
  0, // locals
  0, // parameters
  //  undefined string_components
  LET, 2, var_undefined, var_3829_31_string_components, TAIL_CALL,
  POS(3838, 7)
};

static TAB_NUM t_func_parse_string_components[] = {
  2, // locals
  0, // parameters
  // cond $rest $expr
  var_cond, 2, lambda_1340, lambda_1342, 2, LOCAL(2), var_3841_12_expr,
  // cond
  var_cond, 3, lambda_1344, lambda_1346, lambda_1348, 1, LOCAL(1),
  // ->
  LET, 2, LOCAL(2), LOCAL(1), TAIL_CALL,
  POS(3841, 3),
  POS(3853, 5),
  POS(3851, 3)
};

static TAB_NUM t_lambda_1340[] = {
  2, // locals
  0, // parameters
  // text(1) == '"'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '"'
  var_std__equal, 2, LOCAL(1), chr_34, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_1341, TAIL_CALL,
  POS(3843, 7),
  POS(3843, 7),
  POS(3842, 7)
};

static TAB_NUM t_lambda_1341[] = {
  1, // locals
  0, // parameters
  // range(text 2 -1) empty_list
  var_range, 3, var_text, num_2, minus_num_1, 1, LOCAL(1),
  //  range(text 2 -1) empty_list
  LET, 2, LOCAL(1), var_empty_list, TAIL_CALL,
  POS(3844, 10),
  POS(3844, 9)
};

static TAB_NUM t_lambda_1342[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_1343, TAIL_CALL,
  POS(3845, 7)
};

static TAB_NUM t_lambda_1343[] = {
  0, // locals
  0, // parameters
  // !expected "string components"
  LET, 1, str_string_component, 1, var_expected,
  // !at text
  LET, 1, var_text, 1, var_at,
  // parse_some_string_components
  func_parse_some_string_components, 0, TAIL_CALL,
  POS(3848, 9),
  POS(3849, 9),
  POS(3850, 9)
};

static TAB_NUM t_lambda_1344[] = {
  1, // locals
  0, // parameters
  // is_undefined -> empty_list
  var_is_undefined, 1, var_3841_12_expr, 1, LOCAL(1),
  //  expr.is_undefined -> empty_list
  LET, 2, LOCAL(1), lambda_1345, TAIL_CALL,
  POS(3854, 15),
  POS(3854, 9)
};

static TAB_NUM t_lambda_1345[] = {
  0, // locals
  0, // parameters
  //  empty_list
  LET, 1, var_empty_list, TAIL_CALL,
  POS(3854, 30)
};

static TAB_NUM t_lambda_1346[] = {
  1, // locals
  0, // parameters
  // is_a_list -> expr
  var_is_a_list, 1, var_3841_12_expr, 1, LOCAL(1),
  //  expr.is_a_list -> expr
  LET, 2, LOCAL(1), lambda_1347, TAIL_CALL,
  POS(3855, 15),
  POS(3855, 9)
};

static TAB_NUM t_lambda_1347[] = {
  0, // locals
  0, // parameters
  //  expr
  LET, 1, var_3841_12_expr, TAIL_CALL,
  POS(3855, 27)
};

static TAB_NUM t_lambda_1348[] = {
  0, // locals
  0, // parameters
  //  true -> list(expr)
  LET, 2, var_true, lambda_1349, TAIL_CALL,
  POS(3856, 9)
};

static TAB_NUM t_lambda_1349[] = {
  1, // locals
  0, // parameters
  // list(expr)
  var_list, 1, var_3841_12_expr, 1, LOCAL(1),
  //  list(expr)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(3856, 18),
  POS(3856, 17)
};

static TAB_NUM t_func_parse_some_string_components[] = {
  1, // locals
  0, // parameters
  // parse_string_component !text $string_component
  func_parse_string_component, 0, 2, var_text, var_3859_30_string_component,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_63_text_is_defined, lambda_1354, TAIL_CALL,
  POS(3859, 3),
  POS(3861, 10),
  POS(3860, 3)
};

static TAB_NUM t_lambda_63_text_is_defined[] = {
  1, // locals
  0, // parameters
  // parse_string_components !text $string_components
  func_parse_string_components, 0, 2, var_text, var_3862_31_string_components,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1350, lambda_1353, TAIL_CALL,
  POS(3862, 7),
  POS(3864, 14),
  POS(3863, 7)
};

static TAB_NUM t_lambda_1350[] = {
  1, // locals
  0, // parameters
  // is_defined
  var_is_defined, 1, var_3862_31_string_components, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1351, lambda_1352, TAIL_CALL,
  POS(3867, 31),
  POS(3866, 11)
};

static TAB_NUM t_lambda_1351[] = {
  3, // locals
  0, // parameters
  // to_list
  func_to_list, 1, var_3859_30_string_component, 1, LOCAL(1),
  // to_list
  func_to_list, 1, var_3862_31_string_components, 1, LOCAL(2),
  // append
  var_append, 2, LOCAL(1), LOCAL(2), 1, LOCAL(3),
  // 
  LET, 2, var_text, LOCAL(3), TAIL_CALL,
  POS(3871, 34),
  POS(3872, 35),
  POS(3870, 15),
  POS(3868, 15)
};

static TAB_NUM t_lambda_1352[] = {
  1, // locals
  0, // parameters
  // to_list
  func_to_list, 1, var_3859_30_string_component, 1, LOCAL(1),
  //  text string_component.to_list
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(3873, 38),
  POS(3873, 15)
};

static TAB_NUM t_lambda_1353[] = {
  0, // locals
  0, // parameters
  //  undefined string_components
  LET, 2, var_undefined, var_3862_31_string_components, TAIL_CALL,
  POS(3874, 11)
};

static TAB_NUM t_lambda_1354[] = {
  0, // locals
  0, // parameters
  //  undefined string_component
  LET, 2, var_undefined, var_3859_30_string_component, TAIL_CALL,
  POS(3875, 7)
};

static TAB_NUM t_func_parse_string_component[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 5, lambda_1355, lambda_1358, lambda_1361, lambda_1364, lambda_1366, TAIL_CALL,
  POS(3878, 3)
};

static TAB_NUM t_lambda_1355[] = {
  3, // locals
  0, // parameters
  // text(1) == '@@'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '@@'
  var_std__equal, 2, LOCAL(1), chr_64, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_1356, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_1357, TAIL_CALL,
  POS(3881, 9),
  POS(3881, 9),
  POS(3880, 9),
  POS(3879, 7)
};

static TAB_NUM t_lambda_1356[] = {
  2, // locals
  0, // parameters
  // text(2) == '@@'
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '@@'
  var_std__equal, 2, LOCAL(1), chr_64, 1, LOCAL(2),
  // text(2) == '@@'
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(3882, 9),
  POS(3882, 9),
  POS(3882, 9)
};

static TAB_NUM t_lambda_1357[] = {
  0, // locals
  0, // parameters
  // range &text 3 -1
  var_range, 3, var_text, num_3, minus_num_1, 1, var_text,
  // parse_at_character_without_prefix
  func_parse_at_character_without_prefix, 0, TAIL_CALL,
  POS(3884, 9),
  POS(3885, 9)
};

static TAB_NUM t_lambda_1358[] = {
  3, // locals
  0, // parameters
  // text(1) == '@@'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '@@'
  var_std__equal, 2, LOCAL(1), chr_64, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_1359, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_1360, TAIL_CALL,
  POS(3888, 9),
  POS(3888, 9),
  POS(3887, 9),
  POS(3886, 7)
};

static TAB_NUM t_lambda_1359[] = {
  2, // locals
  0, // parameters
  // text(2) == ';'
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == ';'
  var_std__equal, 2, LOCAL(1), chr_59, 1, LOCAL(2),
  // text(2) == ';'
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(3889, 9),
  POS(3889, 9),
  POS(3889, 9)
};

static TAB_NUM t_lambda_1360[] = {
  0, // locals
  0, // parameters
  // range &text 3 -1
  var_range, 3, var_text, num_3, minus_num_1, 1, var_text,
  // parse_tagged_empty_character_without_prefix
  func_parse_tagged_empty_character_without_prefix, 0, TAIL_CALL,
  POS(3891, 9),
  POS(3892, 9)
};

static TAB_NUM t_lambda_1361[] = {
  3, // locals
  0, // parameters
  // text(1) == '@@'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '@@'
  var_std__equal, 2, LOCAL(1), chr_64, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_1362, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_1363, TAIL_CALL,
  POS(3895, 9),
  POS(3895, 9),
  POS(3894, 9),
  POS(3893, 7)
};

static TAB_NUM t_lambda_1362[] = {
  2, // locals
  0, // parameters
  // text(2) == '('
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '('
  var_std__equal, 2, LOCAL(1), chr_40, 1, LOCAL(2),
  // text(2) == '('
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(3896, 9),
  POS(3896, 9),
  POS(3896, 9)
};

static TAB_NUM t_lambda_1363[] = {
  0, // locals
  0, // parameters
  // range &text 3 -1
  var_range, 3, var_text, num_3, minus_num_1, 1, var_text,
  // parse_escape_expression_without_prefix
  func_parse_escape_expression_without_prefix, 0, TAIL_CALL,
  POS(3898, 9),
  POS(3899, 9)
};

static TAB_NUM t_lambda_1364[] = {
  2, // locals
  0, // parameters
  // text(1) == '@@'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '@@'
  var_std__equal, 2, LOCAL(1), chr_64, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_1365, TAIL_CALL,
  POS(3901, 7),
  POS(3901, 7),
  POS(3900, 7)
};

static TAB_NUM t_lambda_1365[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_special_character
  func_parse_special_character, 0, TAIL_CALL,
  POS(3903, 9),
  POS(3904, 9)
};

static TAB_NUM t_lambda_1366[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_1367, TAIL_CALL,
  POS(3905, 7)
};

static TAB_NUM t_lambda_1367[] = {
  0, // locals
  0, // parameters
  // !expected "string component"
  LET, 1, str_string_component_2, 1, var_expected,
  // !at text
  LET, 1, var_text, 1, var_at,
  // parse_character_sequence
  func_parse_character_sequence, 0, TAIL_CALL,
  POS(3908, 9),
  POS(3909, 9),
  POS(3910, 9)
};

static TAB_NUM t_func_parse_character_sequence[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_3913_1_position,
  // !str text
  LET, 1, var_text, 1, var_str,
  // parse_string_characters !text $string_characters
  func_parse_string_characters, 0, 2, var_text, var_3915_31_string_characters,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1368, lambda_1369, TAIL_CALL,
  POS(3913, 3),
  POS(3914, 3),
  POS(3915, 3),
  POS(3917, 10),
  POS(3916, 3)
};

static TAB_NUM t_lambda_1368[] = {
  1, // locals
  0, // parameters
  // funky_types::character_sequence
  LET, -3, var_funky_types__character_sequence, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_3913_1_position, var_funky__characters_of, var_3915_31_string_characters, LOCAL(1),
  // 
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(3920, 7),
  POS(3918, 7)
};

static TAB_NUM t_lambda_1369[] = {
  0, // locals
  0, // parameters
  //  undefined string_characters
  LET, 2, var_undefined, var_3915_31_string_characters, TAIL_CALL,
  POS(3924, 7)
};

static TAB_NUM t_func_parse_string_characters[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 2, lambda_1370, lambda_1374, TAIL_CALL,
  POS(3927, 3)
};

static TAB_NUM t_lambda_1370[] = {
  4, // locals
  0, // parameters
  // text(1) != '@nl;' && text(1) != '@@' && text(1) != '"'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) != '@nl;' && text(1) != '@@' && text(1) != '"'
  var_std__equal, 2, LOCAL(1), chr_10, 1, LOCAL(2),
  // text(1) != '@nl;' && text(1) != '@@' && text(1) != '"'
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) != '@nl;' && text(1) != '@@' && text(1) != '"'
  var_std__and, 2, LOCAL(3), lambda_1371, 1, LOCAL(4),
  // 
  LET, 2, LOCAL(4), lambda_1373, TAIL_CALL,
  POS(3929, 7),
  POS(3929, 7),
  POS(3929, 7),
  POS(3929, 7),
  POS(3928, 7)
};

static TAB_NUM t_lambda_1371[] = {
  4, // locals
  0, // parameters
  // text(1) != '@@' && text(1) != '"'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) != '@@' && text(1) != '"'
  var_std__equal, 2, LOCAL(1), chr_64, 1, LOCAL(2),
  // text(1) != '@@' && text(1) != '"'
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) != '@@' && text(1) != '"'
  var_std__and, 2, LOCAL(3), lambda_1372, 1, LOCAL(4),
  // text(1) != '@@' && text(1) != '"'
  LET, 1, LOCAL(4), TAIL_CALL,
  POS(3929, 28),
  POS(3929, 28),
  POS(3929, 28),
  POS(3929, 28),
  POS(3929, 28)
};

static TAB_NUM t_lambda_1372[] = {
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
  POS(3929, 47),
  POS(3929, 47),
  POS(3929, 47),
  POS(3929, 47)
};

static TAB_NUM t_lambda_1373[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_more_string_characters
  func_parse_more_string_characters, 0, TAIL_CALL,
  POS(3931, 9),
  POS(3932, 9)
};

static TAB_NUM t_lambda_1374[] = {
  0, // locals
  0, // parameters
  //  true:
  LET, 2, var_true, lambda_1375, TAIL_CALL,
  POS(3933, 7)
};

static TAB_NUM t_lambda_1375[] = {
  0, // locals
  0, // parameters
  // syntax_error "string characters"
  func_syntax_error, 1, str_string_character, TAIL_CALL,
  POS(3934, 7)
};

static TAB_NUM t_func_parse_more_string_characters[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 2, lambda_1376, lambda_1380, TAIL_CALL,
  POS(3937, 3)
};

static TAB_NUM t_lambda_1376[] = {
  4, // locals
  0, // parameters
  // text(1) != '@nl;' && text(1) != '@@' && text(1) != '"'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) != '@nl;' && text(1) != '@@' && text(1) != '"'
  var_std__equal, 2, LOCAL(1), chr_10, 1, LOCAL(2),
  // text(1) != '@nl;' && text(1) != '@@' && text(1) != '"'
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) != '@nl;' && text(1) != '@@' && text(1) != '"'
  var_std__and, 2, LOCAL(3), lambda_1377, 1, LOCAL(4),
  // 
  LET, 2, LOCAL(4), lambda_1379, TAIL_CALL,
  POS(3939, 7),
  POS(3939, 7),
  POS(3939, 7),
  POS(3939, 7),
  POS(3938, 7)
};

static TAB_NUM t_lambda_1377[] = {
  4, // locals
  0, // parameters
  // text(1) != '@@' && text(1) != '"'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) != '@@' && text(1) != '"'
  var_std__equal, 2, LOCAL(1), chr_64, 1, LOCAL(2),
  // text(1) != '@@' && text(1) != '"'
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) != '@@' && text(1) != '"'
  var_std__and, 2, LOCAL(3), lambda_1378, 1, LOCAL(4),
  // text(1) != '@@' && text(1) != '"'
  LET, 1, LOCAL(4), TAIL_CALL,
  POS(3939, 28),
  POS(3939, 28),
  POS(3939, 28),
  POS(3939, 28),
  POS(3939, 28)
};

static TAB_NUM t_lambda_1378[] = {
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
  POS(3939, 47),
  POS(3939, 47),
  POS(3939, 47),
  POS(3939, 47)
};

static TAB_NUM t_lambda_1379[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_more_string_characters
  func_parse_more_string_characters, 0, TAIL_CALL,
  POS(3941, 9),
  POS(3942, 9)
};

static TAB_NUM t_lambda_1380[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_1381, TAIL_CALL,
  POS(3943, 7)
};

static TAB_NUM t_lambda_1381[] = {
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
  POS(3945, 27),
  POS(3945, 42),
  POS(3945, 27),
  POS(3945, 15),
  POS(3945, 9)
};

static TAB_NUM t_func_parse_multiline_string_literal_without_prefix[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_3948_1_position,
  // $multiline_string_components parse_lines(funky::parse_multiline_string_components_group)
  func_parse_lines, 1, var_funky__parse_multiline_string_components_group, 1, var_3949_1_multiline_string_components,
  // $error find_first(multiline_string_components is_an_error)
  var_find_first, 2, var_3949_1_multiline_string_components, var_is_an_error, 1, var_3950_1_error,
  // is_an_error
  var_is_an_error, 1, var_3950_1_error, 1, LOCAL(1),
  // if error.is_an_error
  var_if, 3, LOCAL(1), lambda_1382, lambda_1383, TAIL_CALL,
  POS(3948, 3),
  POS(3949, 3),
  POS(3950, 3),
  POS(3951, 12),
  POS(3951, 3)
};

static TAB_NUM t_lambda_1382[] = {
  0, // locals
  0, // parameters
  //  undefined error
  LET, 2, var_undefined, var_3950_1_error, TAIL_CALL,
  POS(3952, 7)
};

static TAB_NUM t_lambda_1383[] = {
  1, // locals
  0, // parameters
  // funky_types::string_literal
  LET, -3, var_funky_types__string_literal, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_3948_1_position, var_funky__components_of, var_3949_1_multiline_string_components, LOCAL(1),
  // 
  LET, 2, string_1, LOCAL(1), TAIL_CALL,
  POS(3955, 7),
  POS(3953, 7)
};

static TAB_NUM t_func_parse_multiline_string_components[] = {
  2, // locals
  0, // parameters
  // cond $rest $expr
  var_cond, 3, lambda_1384, lambda_1387, lambda_1389, 2, LOCAL(2), var_3961_12_expr,
  // cond
  var_cond, 3, lambda_1391, lambda_1393, lambda_1395, 1, LOCAL(1),
  // ->
  LET, 2, LOCAL(2), LOCAL(1), TAIL_CALL,
  POS(3961, 3),
  POS(3981, 5),
  POS(3979, 3)
};

static TAB_NUM t_lambda_1384[] = {
  3, // locals
  0, // parameters
  // text(1) == '@@'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '@@'
  var_std__equal, 2, LOCAL(1), chr_64, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_1385, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_1386, TAIL_CALL,
  POS(3964, 9),
  POS(3964, 9),
  POS(3963, 9),
  POS(3962, 7)
};

static TAB_NUM t_lambda_1385[] = {
  2, // locals
  0, // parameters
  // text(2) == '@nl;'
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '@nl;'
  var_std__equal, 2, LOCAL(1), chr_10, 1, LOCAL(2),
  // text(2) == '@nl;'
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(3965, 9),
  POS(3965, 9),
  POS(3965, 9)
};

static TAB_NUM t_lambda_1386[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_string_line_end_without_prefix
  func_parse_string_line_end_without_prefix, 0, TAIL_CALL,
  POS(3967, 9),
  POS(3968, 9)
};

static TAB_NUM t_lambda_1387[] = {
  2, // locals
  0, // parameters
  // text(1) == '@nl;'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '@nl;'
  var_std__equal, 2, LOCAL(1), chr_10, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_1388, TAIL_CALL,
  POS(3970, 7),
  POS(3970, 7),
  POS(3969, 7)
};

static TAB_NUM t_lambda_1388[] = {
  0, // locals
  0, // parameters
  // parse_newline_without_prefix
  func_parse_newline_without_prefix, 0, TAIL_CALL,
  POS(3972, 9)
};

static TAB_NUM t_lambda_1389[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_1390, TAIL_CALL,
  POS(3973, 7)
};

static TAB_NUM t_lambda_1390[] = {
  0, // locals
  0, // parameters
  // !expected "multiline string components"
  LET, 1, str_multiline_string, 1, var_expected,
  // !at text
  LET, 1, var_text, 1, var_at,
  // parse_some_string_line_components
  func_parse_some_string_line_components, 0, TAIL_CALL,
  POS(3976, 9),
  POS(3977, 9),
  POS(3978, 9)
};

static TAB_NUM t_lambda_1391[] = {
  1, // locals
  0, // parameters
  // is_undefined -> empty_list
  var_is_undefined, 1, var_3961_12_expr, 1, LOCAL(1),
  //  expr.is_undefined -> empty_list
  LET, 2, LOCAL(1), lambda_1392, TAIL_CALL,
  POS(3982, 15),
  POS(3982, 9)
};

static TAB_NUM t_lambda_1392[] = {
  0, // locals
  0, // parameters
  //  empty_list
  LET, 1, var_empty_list, TAIL_CALL,
  POS(3982, 30)
};

static TAB_NUM t_lambda_1393[] = {
  1, // locals
  0, // parameters
  // is_a_list -> expr
  var_is_a_list, 1, var_3961_12_expr, 1, LOCAL(1),
  //  expr.is_a_list -> expr
  LET, 2, LOCAL(1), lambda_1394, TAIL_CALL,
  POS(3983, 15),
  POS(3983, 9)
};

static TAB_NUM t_lambda_1394[] = {
  0, // locals
  0, // parameters
  //  expr
  LET, 1, var_3961_12_expr, TAIL_CALL,
  POS(3983, 27)
};

static TAB_NUM t_lambda_1395[] = {
  0, // locals
  0, // parameters
  //  true -> list(expr)
  LET, 2, var_true, lambda_1396, TAIL_CALL,
  POS(3984, 9)
};

static TAB_NUM t_lambda_1396[] = {
  1, // locals
  0, // parameters
  // list(expr)
  var_list, 1, var_3961_12_expr, 1, LOCAL(1),
  //  list(expr)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(3984, 18),
  POS(3984, 17)
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
  POS(3987, 3),
  POS(3990, 5),
  POS(3988, 3)
};

static TAB_NUM t_func_parse_some_string_line_components[] = {
  1, // locals
  0, // parameters
  // parse_string_line_component !text $string_line_component
  func_parse_string_line_component, 0, 2, var_text, var_3995_35_string_line_component,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_64_text_is_defined, lambda_1401, TAIL_CALL,
  POS(3995, 3),
  POS(3997, 10),
  POS(3996, 3)
};

static TAB_NUM t_lambda_64_text_is_defined[] = {
  1, // locals
  0, // parameters
  // parse_multiline_string_components !text $multiline_string_components
  func_parse_multiline_string_components, 0, 2, var_text, var_3998_41_multiline_string_components,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1397, lambda_1400, TAIL_CALL,
  POS(3998, 7),
  POS(4000, 14),
  POS(3999, 7)
};

static TAB_NUM t_lambda_1397[] = {
  1, // locals
  0, // parameters
  // is_defined
  var_is_defined, 1, var_3998_41_multiline_string_components, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1398, lambda_1399, TAIL_CALL,
  POS(4003, 41),
  POS(4002, 11)
};

static TAB_NUM t_lambda_1398[] = {
  3, // locals
  0, // parameters
  // to_list
  func_to_list, 1, var_3995_35_string_line_component, 1, LOCAL(1),
  // to_list
  func_to_list, 1, var_3998_41_multiline_string_components, 1, LOCAL(2),
  // append
  var_append, 2, LOCAL(1), LOCAL(2), 1, LOCAL(3),
  // 
  LET, 2, var_text, LOCAL(3), TAIL_CALL,
  POS(4007, 39),
  POS(4008, 45),
  POS(4006, 15),
  POS(4004, 15)
};

static TAB_NUM t_lambda_1399[] = {
  1, // locals
  0, // parameters
  // to_list
  func_to_list, 1, var_3995_35_string_line_component, 1, LOCAL(1),
  //  text string_line_component.to_list
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(4009, 43),
  POS(4009, 15)
};

static TAB_NUM t_lambda_1400[] = {
  0, // locals
  0, // parameters
  //  undefined multiline_string_components
  LET, 2, var_undefined, var_3998_41_multiline_string_components, TAIL_CALL,
  POS(4010, 11)
};

static TAB_NUM t_lambda_1401[] = {
  0, // locals
  0, // parameters
  //  undefined string_line_component
  LET, 2, var_undefined, var_3995_35_string_line_component, TAIL_CALL,
  POS(4011, 7)
};

static TAB_NUM t_func_parse_string_line_component[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 5, lambda_1402, lambda_1405, lambda_1408, lambda_1411, lambda_1413, TAIL_CALL,
  POS(4014, 3)
};

static TAB_NUM t_lambda_1402[] = {
  3, // locals
  0, // parameters
  // text(1) == '@@'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '@@'
  var_std__equal, 2, LOCAL(1), chr_64, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_1403, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_1404, TAIL_CALL,
  POS(4017, 9),
  POS(4017, 9),
  POS(4016, 9),
  POS(4015, 7)
};

static TAB_NUM t_lambda_1403[] = {
  2, // locals
  0, // parameters
  // text(2) == '@@'
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '@@'
  var_std__equal, 2, LOCAL(1), chr_64, 1, LOCAL(2),
  // text(2) == '@@'
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(4018, 9),
  POS(4018, 9),
  POS(4018, 9)
};

static TAB_NUM t_lambda_1404[] = {
  0, // locals
  0, // parameters
  // range &text 3 -1
  var_range, 3, var_text, num_3, minus_num_1, 1, var_text,
  // parse_at_character_without_prefix
  func_parse_at_character_without_prefix, 0, TAIL_CALL,
  POS(4020, 9),
  POS(4021, 9)
};

static TAB_NUM t_lambda_1405[] = {
  3, // locals
  0, // parameters
  // text(1) == '@@'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '@@'
  var_std__equal, 2, LOCAL(1), chr_64, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_1406, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_1407, TAIL_CALL,
  POS(4024, 9),
  POS(4024, 9),
  POS(4023, 9),
  POS(4022, 7)
};

static TAB_NUM t_lambda_1406[] = {
  2, // locals
  0, // parameters
  // text(2) == ';'
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == ';'
  var_std__equal, 2, LOCAL(1), chr_59, 1, LOCAL(2),
  // text(2) == ';'
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(4025, 9),
  POS(4025, 9),
  POS(4025, 9)
};

static TAB_NUM t_lambda_1407[] = {
  0, // locals
  0, // parameters
  // range &text 3 -1
  var_range, 3, var_text, num_3, minus_num_1, 1, var_text,
  // parse_tagged_empty_character_without_prefix
  func_parse_tagged_empty_character_without_prefix, 0, TAIL_CALL,
  POS(4027, 9),
  POS(4028, 9)
};

static TAB_NUM t_lambda_1408[] = {
  3, // locals
  0, // parameters
  // text(1) == '@@'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '@@'
  var_std__equal, 2, LOCAL(1), chr_64, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_1409, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_1410, TAIL_CALL,
  POS(4031, 9),
  POS(4031, 9),
  POS(4030, 9),
  POS(4029, 7)
};

static TAB_NUM t_lambda_1409[] = {
  2, // locals
  0, // parameters
  // text(2) == '('
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '('
  var_std__equal, 2, LOCAL(1), chr_40, 1, LOCAL(2),
  // text(2) == '('
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(4032, 9),
  POS(4032, 9),
  POS(4032, 9)
};

static TAB_NUM t_lambda_1410[] = {
  0, // locals
  0, // parameters
  // range &text 3 -1
  var_range, 3, var_text, num_3, minus_num_1, 1, var_text,
  // parse_escape_expression_without_prefix
  func_parse_escape_expression_without_prefix, 0, TAIL_CALL,
  POS(4034, 9),
  POS(4035, 9)
};

static TAB_NUM t_lambda_1411[] = {
  2, // locals
  0, // parameters
  // text(1) == '@@'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '@@'
  var_std__equal, 2, LOCAL(1), chr_64, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_1412, TAIL_CALL,
  POS(4037, 7),
  POS(4037, 7),
  POS(4036, 7)
};

static TAB_NUM t_lambda_1412[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_special_character
  func_parse_special_character, 0, TAIL_CALL,
  POS(4039, 9),
  POS(4040, 9)
};

static TAB_NUM t_lambda_1413[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_1414, TAIL_CALL,
  POS(4041, 7)
};

static TAB_NUM t_lambda_1414[] = {
  0, // locals
  0, // parameters
  // !expected "string line component"
  LET, 1, str_string_line_comp, 1, var_expected,
  // !at text
  LET, 1, var_text, 1, var_at,
  // parse_string_line_character_sequence
  func_parse_string_line_character_sequence, 0, TAIL_CALL,
  POS(4044, 9),
  POS(4045, 9),
  POS(4046, 9)
};

static TAB_NUM t_func_parse_string_line_end_without_prefix[] = {
  0, // locals
  0, // parameters
  // ->
  LET, 2, var_text, var_undefined, TAIL_CALL,
  POS(4049, 3)
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
  POS(4054, 3),
  POS(4057, 5),
  POS(4055, 3)
};

static TAB_NUM t_func_parse_tagged_empty_character_without_prefix[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_4062_1_position,
  // parse_empty_character_without_prefix !text $empty_character
  func_parse_empty_character_without_prefix, 0, 2, var_text, var_4063_44_empty_character,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1415, lambda_1416, TAIL_CALL,
  POS(4062, 3),
  POS(4063, 3),
  POS(4065, 10),
  POS(4064, 3)
};

static TAB_NUM t_lambda_1415[] = {
  1, // locals
  0, // parameters
  // funky_types::tagged_empty_character
  LET, -3, var_funky_types__tagged_empty_character, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_4062_1_position, var_funky__character_of, var_4063_44_empty_character, LOCAL(1),
  // 
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(4068, 7),
  POS(4066, 7)
};

static TAB_NUM t_lambda_1416[] = {
  0, // locals
  0, // parameters
  //  undefined empty_character
  LET, 2, var_undefined, var_4063_44_empty_character, TAIL_CALL,
  POS(4072, 7)
};

static TAB_NUM t_func_parse_empty_character_without_prefix[] = {
  0, // locals
  0, // parameters
  // ->
  LET, 2, var_text, var_undefined, TAIL_CALL,
  POS(4075, 3)
};

static TAB_NUM t_func_parse_escape_expression_without_prefix[] = {
  1, // locals
  0, // parameters
  // parse_expression funky_types::escape_expression !text $expression
  func_parse_expression, 1, var_funky_types__escape_expression, 2, var_text, var_4080_55_expression,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_65_text_is_defined, lambda_1419, TAIL_CALL,
  POS(4080, 3),
  POS(4082, 10),
  POS(4081, 3)
};

static TAB_NUM t_lambda_65_text_is_defined[] = {
  2, // locals
  0, // parameters
  // text(1) == ')'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == ')'
  var_std__equal, 2, LOCAL(1), chr_41, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_1417, lambda_1418, TAIL_CALL,
  POS(4084, 9),
  POS(4084, 9),
  POS(4083, 7)
};

static TAB_NUM t_lambda_1417[] = {
  1, // locals
  0, // parameters
  // range(text 2 -1) expression
  var_range, 3, var_text, num_2, minus_num_1, 1, LOCAL(1),
  //  range(text 2 -1) expression
  LET, 2, LOCAL(1), var_4080_55_expression, TAIL_CALL,
  POS(4085, 12),
  POS(4085, 11)
};

static TAB_NUM t_lambda_1418[] = {
  0, // locals
  0, // parameters
  // syntax_error "')'"
  func_syntax_error, 1, string_6, TAIL_CALL,
  POS(4087, 11)
};

static TAB_NUM t_lambda_1419[] = {
  0, // locals
  0, // parameters
  //  undefined expression
  LET, 2, var_undefined, var_4080_55_expression, TAIL_CALL,
  POS(4088, 7)
};

static TAB_NUM t_func_parse_special_character[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 2, lambda_1420, lambda_1425, TAIL_CALL,
  POS(4091, 3)
};

static TAB_NUM t_lambda_1420[] = {
  5, // locals
  0, // parameters
  // text(1) >= 'a' && text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z')
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) >= 'a' && text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z')
  var_std__less, 2, LOCAL(1), chr_97, 1, LOCAL(2),
  // text(1) >= 'a' && text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) >= 'a' && text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z')
  var_std__and, 2, LOCAL(3), lambda_1421, 1, LOCAL(4),
  // text(1) >= 'a' && text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z')
  var_std__or, 2, LOCAL(4), lambda_1422, 1, LOCAL(5),
  // 
  LET, 2, LOCAL(5), lambda_1424, TAIL_CALL,
  POS(4093, 8),
  POS(4093, 8),
  POS(4093, 8),
  POS(4093, 8),
  POS(4093, 8),
  POS(4092, 7)
};

static TAB_NUM t_lambda_1421[] = {
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
  POS(4093, 26),
  POS(4093, 38),
  POS(4093, 38),
  POS(4093, 26)
};

static TAB_NUM t_lambda_1422[] = {
  4, // locals
  0, // parameters
  // text(1) >= 'A' && text(1) <= 'Z')
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) >= 'A' && text(1) <= 'Z')
  var_std__less, 2, LOCAL(1), chr_65, 1, LOCAL(2),
  // text(1) >= 'A' && text(1) <= 'Z')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) >= 'A' && text(1) <= 'Z')
  var_std__and, 2, LOCAL(3), lambda_1423, 1, LOCAL(4),
  // text(1) >= 'A' && text(1) <= 'Z')
  LET, 1, LOCAL(4), TAIL_CALL,
  POS(4093, 46),
  POS(4093, 46),
  POS(4093, 46),
  POS(4093, 46),
  POS(4093, 46)
};

static TAB_NUM t_lambda_1423[] = {
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
  POS(4093, 64),
  POS(4093, 76),
  POS(4093, 76),
  POS(4093, 64)
};

static TAB_NUM t_lambda_1424[] = {
  0, // locals
  0, // parameters
  // !str text
  LET, 1, var_text, 1, var_str,
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_named_character_without_prefix
  func_parse_named_character_without_prefix, 0, TAIL_CALL,
  POS(4095, 9),
  POS(4096, 9),
  POS(4097, 9)
};

static TAB_NUM t_lambda_1425[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_1426, TAIL_CALL,
  POS(4098, 7)
};

static TAB_NUM t_lambda_1426[] = {
  0, // locals
  0, // parameters
  // !expected "special character"
  LET, 1, str_special_characte_2, 1, var_expected,
  // !at text
  LET, 1, var_text, 1, var_at,
  // parse_numeric_character
  func_parse_numeric_character, 0, TAIL_CALL,
  POS(4101, 9),
  POS(4102, 9),
  POS(4103, 9)
};

static TAB_NUM t_func_parse_named_character_without_prefix[] = {
  1, // locals
  0, // parameters
  // $position str
  LET, 1, var_str, 1, var_4106_1_position,
  // parse_more_character_name_characters !text $character_name
  func_parse_more_character_name_characters, 0, 2, var_text, var_4107_44_character_name,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_66_text_is_defined, lambda_1429, TAIL_CALL,
  POS(4106, 3),
  POS(4107, 3),
  POS(4109, 10),
  POS(4108, 3)
};

static TAB_NUM t_lambda_66_text_is_defined[] = {
  2, // locals
  0, // parameters
  // text(1) == ';'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == ';'
  var_std__equal, 2, LOCAL(1), chr_59, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_1427, lambda_1428, TAIL_CALL,
  POS(4111, 9),
  POS(4111, 9),
  POS(4110, 7)
};

static TAB_NUM t_lambda_1427[] = {
  2, // locals
  0, // parameters
  // range(text 2 -1)
  var_range, 3, var_text, num_2, minus_num_1, 1, LOCAL(1),
  // funky_types::named_character
  LET, -3, var_funky_types__named_character, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_4106_1_position, var_funky__name_of, var_4107_44_character_name, LOCAL(2),
  // 
  LET, 2, LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(4113, 11),
  POS(4114, 11),
  POS(4112, 11)
};

static TAB_NUM t_lambda_1428[] = {
  0, // locals
  0, // parameters
  // syntax_error "';'"
  func_syntax_error, 1, string_9, TAIL_CALL,
  POS(4119, 11)
};

static TAB_NUM t_lambda_1429[] = {
  0, // locals
  0, // parameters
  //  undefined character_name
  LET, 2, var_undefined, var_4107_44_character_name, TAIL_CALL,
  POS(4120, 7)
};

static TAB_NUM t_func_parse_numeric_character[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_4123_1_position,
  // !str text
  LET, 1, var_text, 1, var_str,
  // parse_digits !text $digits
  func_parse_digits, 0, 2, var_text, var_4125_20_digits,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_67_text_is_defined, lambda_1432, TAIL_CALL,
  POS(4123, 3),
  POS(4124, 3),
  POS(4125, 3),
  POS(4127, 10),
  POS(4126, 3)
};

static TAB_NUM t_lambda_67_text_is_defined[] = {
  2, // locals
  0, // parameters
  // text(1) == ';'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == ';'
  var_std__equal, 2, LOCAL(1), chr_59, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_1430, lambda_1431, TAIL_CALL,
  POS(4129, 9),
  POS(4129, 9),
  POS(4128, 7)
};

static TAB_NUM t_lambda_1430[] = {
  2, // locals
  0, // parameters
  // range(text 2 -1)
  var_range, 3, var_text, num_2, minus_num_1, 1, LOCAL(1),
  // funky_types::numeric_character
  LET, -3, var_funky_types__numeric_character, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_4123_1_position, var_funky__digits_of, var_4125_20_digits, LOCAL(2),
  // 
  LET, 2, LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(4131, 11),
  POS(4132, 11),
  POS(4130, 11)
};

static TAB_NUM t_lambda_1431[] = {
  0, // locals
  0, // parameters
  // syntax_error "';'"
  func_syntax_error, 1, string_9, TAIL_CALL,
  POS(4137, 11)
};

static TAB_NUM t_lambda_1432[] = {
  0, // locals
  0, // parameters
  //  undefined digits
  LET, 2, var_undefined, var_4125_20_digits, TAIL_CALL,
  POS(4138, 7)
};

static TAB_NUM t_func_parse_string_line_character_sequence[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_4141_1_position,
  // !str text
  LET, 1, var_text, 1, var_str,
  // parse_string_line_characters !text $string_line_characters
  func_parse_string_line_characters, 0, 2, var_text, var_4143_36_string_line_characters,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1433, lambda_1434, TAIL_CALL,
  POS(4141, 3),
  POS(4142, 3),
  POS(4143, 3),
  POS(4145, 10),
  POS(4144, 3)
};

static TAB_NUM t_lambda_1433[] = {
  1, // locals
  0, // parameters
  // funky_types::character_sequence
  LET, -3, var_funky_types__character_sequence, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_4141_1_position, var_funky__characters_of, var_4143_36_string_line_characters, LOCAL(1),
  // 
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(4148, 7),
  POS(4146, 7)
};

static TAB_NUM t_lambda_1434[] = {
  0, // locals
  0, // parameters
  //  undefined string_line_characters
  LET, 2, var_undefined, var_4143_36_string_line_characters, TAIL_CALL,
  POS(4152, 7)
};

static TAB_NUM t_func_parse_string_line_characters[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 2, lambda_1435, lambda_1438, TAIL_CALL,
  POS(4155, 3)
};

static TAB_NUM t_lambda_1435[] = {
  4, // locals
  0, // parameters
  // text(1) != '@nl;' && text(1) != '@@'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) != '@nl;' && text(1) != '@@'
  var_std__equal, 2, LOCAL(1), chr_10, 1, LOCAL(2),
  // text(1) != '@nl;' && text(1) != '@@'
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) != '@nl;' && text(1) != '@@'
  var_std__and, 2, LOCAL(3), lambda_1436, 1, LOCAL(4),
  // 
  LET, 2, LOCAL(4), lambda_1437, TAIL_CALL,
  POS(4157, 7),
  POS(4157, 7),
  POS(4157, 7),
  POS(4157, 7),
  POS(4156, 7)
};

static TAB_NUM t_lambda_1436[] = {
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
  POS(4157, 28),
  POS(4157, 28),
  POS(4157, 28),
  POS(4157, 28)
};

static TAB_NUM t_lambda_1437[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_more_string_line_characters
  func_parse_more_string_line_characters, 0, TAIL_CALL,
  POS(4159, 9),
  POS(4160, 9)
};

static TAB_NUM t_lambda_1438[] = {
  0, // locals
  0, // parameters
  //  true:
  LET, 2, var_true, lambda_1439, TAIL_CALL,
  POS(4161, 7)
};

static TAB_NUM t_lambda_1439[] = {
  0, // locals
  0, // parameters
  // syntax_error "string line characters"
  func_syntax_error, 1, str_string_line_char, TAIL_CALL,
  POS(4162, 7)
};

static TAB_NUM t_func_parse_more_string_line_characters[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 2, lambda_1440, lambda_1443, TAIL_CALL,
  POS(4165, 3)
};

static TAB_NUM t_lambda_1440[] = {
  4, // locals
  0, // parameters
  // text(1) != '@nl;' && text(1) != '@@'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) != '@nl;' && text(1) != '@@'
  var_std__equal, 2, LOCAL(1), chr_10, 1, LOCAL(2),
  // text(1) != '@nl;' && text(1) != '@@'
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) != '@nl;' && text(1) != '@@'
  var_std__and, 2, LOCAL(3), lambda_1441, 1, LOCAL(4),
  // 
  LET, 2, LOCAL(4), lambda_1442, TAIL_CALL,
  POS(4167, 7),
  POS(4167, 7),
  POS(4167, 7),
  POS(4167, 7),
  POS(4166, 7)
};

static TAB_NUM t_lambda_1441[] = {
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
  POS(4167, 28),
  POS(4167, 28),
  POS(4167, 28),
  POS(4167, 28)
};

static TAB_NUM t_lambda_1442[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_more_string_line_characters
  func_parse_more_string_line_characters, 0, TAIL_CALL,
  POS(4169, 9),
  POS(4170, 9)
};

static TAB_NUM t_lambda_1443[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_1444, TAIL_CALL,
  POS(4171, 7)
};

static TAB_NUM t_lambda_1444[] = {
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
  POS(4173, 27),
  POS(4173, 42),
  POS(4173, 27),
  POS(4173, 15),
  POS(4173, 9)
};

static TAB_NUM t_func_parse_unique_without_prefix[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_4176_1_position,
  // parse_trailing_remarks !text $trailing_remarks
  func_parse_trailing_remarks, 0, 2, var_text, var_4177_30_trailing_remarks,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1445, lambda_1446, TAIL_CALL,
  POS(4176, 3),
  POS(4177, 3),
  POS(4179, 10),
  POS(4178, 3)
};

static TAB_NUM t_lambda_1445[] = {
  1, // locals
  0, // parameters
  // funky_types::unique
  LET, -3, var_funky_types__unique, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_4176_1_position, var_funky__remarks_of, var_4177_30_trailing_remarks, LOCAL(1),
  // 
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(4182, 7),
  POS(4180, 7)
};

static TAB_NUM t_lambda_1446[] = {
  0, // locals
  0, // parameters
  //  undefined trailing_remarks
  LET, 2, var_undefined, var_4177_30_trailing_remarks, TAIL_CALL,
  POS(4186, 7)
};

static TAB_NUM t_func_parse_attribute_without_prefix[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_4189_1_position,
  // parse_trailing_remarks !text $trailing_remarks
  func_parse_trailing_remarks, 0, 2, var_text, var_4190_30_trailing_remarks,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1447, lambda_1448, TAIL_CALL,
  POS(4189, 3),
  POS(4190, 3),
  POS(4192, 10),
  POS(4191, 3)
};

static TAB_NUM t_lambda_1447[] = {
  1, // locals
  0, // parameters
  // funky_types::attribute
  LET, -3, var_funky_types__attribute, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_4189_1_position, var_funky__remarks_of, var_4190_30_trailing_remarks, LOCAL(1),
  // 
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(4195, 7),
  POS(4193, 7)
};

static TAB_NUM t_lambda_1448[] = {
  0, // locals
  0, // parameters
  //  undefined trailing_remarks
  LET, 2, var_undefined, var_4190_30_trailing_remarks, TAIL_CALL,
  POS(4199, 7)
};

static TAB_NUM t_func_parse_attribute_with_setter_without_prefix[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_4202_1_position,
  // parse_trailing_remarks !text $trailing_remarks
  func_parse_trailing_remarks, 0, 2, var_text, var_4203_30_trailing_remarks,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1449, lambda_1450, TAIL_CALL,
  POS(4202, 3),
  POS(4203, 3),
  POS(4205, 10),
  POS(4204, 3)
};

static TAB_NUM t_lambda_1449[] = {
  1, // locals
  0, // parameters
  // funky_types::attribute_with_setter
  LET, -3, var_funky_types__attribute_with_setter, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_4202_1_position, var_funky__remarks_of, var_4203_30_trailing_remarks, LOCAL(1),
  // 
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(4208, 7),
  POS(4206, 7)
};

static TAB_NUM t_lambda_1450[] = {
  0, // locals
  0, // parameters
  //  undefined trailing_remarks
  LET, 2, var_undefined, var_4203_30_trailing_remarks, TAIL_CALL,
  POS(4212, 7)
};

static TAB_NUM t_func_parse_body[] = {
  1, // locals
  -1, // parameters
  var_undefined, var_4216_0_derived_node,
  // $position text
  LET, 1, var_text, 1, var_4218_1_position,
  // parse_inline_parameters !text $inline_parameters
  func_parse_inline_parameters, 0, 2, var_text, var_4219_31_inline_parameters,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_68_text_is_defined, lambda_1454, TAIL_CALL,
  POS(4218, 3),
  POS(4219, 3),
  POS(4221, 10),
  POS(4220, 3)
};

static TAB_NUM t_lambda_68_text_is_defined[] = {
  1, // locals
  0, // parameters
  // parse_optional_line_end_remark !text $optional_line_end_remark
  func_parse_optional_line_end_remark, 0, 2, var_text, var_4222_38_optional_line_end_remark,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_69_text_is_defined, lambda_1453, TAIL_CALL,
  POS(4222, 7),
  POS(4224, 14),
  POS(4223, 7)
};

static TAB_NUM t_lambda_69_text_is_defined[] = {
  1, // locals
  0, // parameters
  // parse_body_statements !text $body_statements
  func_parse_body_statements, 0, 2, var_text, var_4225_29_body_statements,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1451, lambda_1452, TAIL_CALL,
  POS(4225, 11),
  POS(4227, 18),
  POS(4226, 11)
};

static TAB_NUM t_lambda_1451[] = {
  2, // locals
  0, // parameters
  // default_value(derived_node funky_types::body)
  var_default_value, 2, var_4216_0_derived_node, var_funky_types__body, 1, LOCAL(1),
  // default_value(derived_node funky_types::body)
  LET, -5, LOCAL(1), var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_4218_1_position, var_funky__parameters_of, var_4219_31_inline_parameters, var_funky__remark_of, var_4222_38_optional_line_end_remark, var_funky__statements_of, var_4225_29_body_statements, LOCAL(2),
  // 
  LET, 2, var_text, LOCAL(2), TAIL_CALL,
  POS(4230, 15),
  POS(4230, 15),
  POS(4228, 15)
};

static TAB_NUM t_lambda_1452[] = {
  0, // locals
  0, // parameters
  //  undefined body_statements
  LET, 2, var_undefined, var_4225_29_body_statements, TAIL_CALL,
  POS(4236, 15)
};

static TAB_NUM t_lambda_1453[] = {
  0, // locals
  0, // parameters
  //  undefined optional_line_end_remark
  LET, 2, var_undefined, var_4222_38_optional_line_end_remark, TAIL_CALL,
  POS(4237, 11)
};

static TAB_NUM t_lambda_1454[] = {
  0, // locals
  0, // parameters
  //  undefined inline_parameters
  LET, 2, var_undefined, var_4219_31_inline_parameters, TAIL_CALL,
  POS(4238, 7)
};

static TAB_NUM t_func_parse_optional_line_end_remark[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 2, lambda_1455, lambda_1458, TAIL_CALL,
  POS(4241, 3)
};

static TAB_NUM t_lambda_1455[] = {
  3, // locals
  0, // parameters
  // text(1) == ' '
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_1456, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_1457, TAIL_CALL,
  POS(4244, 9),
  POS(4244, 9),
  POS(4243, 9),
  POS(4242, 7)
};

static TAB_NUM t_lambda_1456[] = {
  2, // locals
  0, // parameters
  // text(2) == '#'
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '#'
  var_std__equal, 2, LOCAL(1), chr_35, 1, LOCAL(2),
  // text(2) == '#'
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(4245, 9),
  POS(4245, 9),
  POS(4245, 9)
};

static TAB_NUM t_lambda_1457[] = {
  0, // locals
  0, // parameters
  // range &text 3 -1
  var_range, 3, var_text, num_3, minus_num_1, 1, var_text,
  // parse_spaced_remark_without_prefix
  func_parse_spaced_remark_without_prefix, 0, TAIL_CALL,
  POS(4247, 9),
  POS(4248, 9)
};

static TAB_NUM t_lambda_1458[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_1459, TAIL_CALL,
  POS(4249, 7)
};

static TAB_NUM t_lambda_1459[] = {
  0, // locals
  0, // parameters
  //  text undefined
  LET, 2, var_text, var_undefined, TAIL_CALL,
  POS(4251, 9)
};

static TAB_NUM t_func_parse_body_statements[] = {
  2, // locals
  0, // parameters
  // cond $rest $expr
  var_cond, 2, lambda_1460, lambda_1462, 2, LOCAL(2), var_4254_12_expr,
  // cond
  var_cond, 3, lambda_1464, lambda_1466, lambda_1468, 1, LOCAL(1),
  // ->
  LET, 2, LOCAL(2), LOCAL(1), TAIL_CALL,
  POS(4254, 3),
  POS(4268, 5),
  POS(4266, 3)
};

static TAB_NUM t_lambda_1460[] = {
  2, // locals
  0, // parameters
  // text(1) == ' '
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_1461, TAIL_CALL,
  POS(4256, 7),
  POS(4256, 7),
  POS(4255, 7)
};

static TAB_NUM t_lambda_1461[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_line_end_statement_without_prefix
  func_parse_line_end_statement_without_prefix, 0, TAIL_CALL,
  POS(4258, 9),
  POS(4259, 9)
};

static TAB_NUM t_lambda_1462[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_1463, TAIL_CALL,
  POS(4260, 7)
};

static TAB_NUM t_lambda_1463[] = {
  0, // locals
  0, // parameters
  // !expected "body statements"
  LET, 1, str_body_statements, 1, var_expected,
  // !at text
  LET, 1, var_text, 1, var_at,
  // parse_statements
  func_parse_statements, 0, TAIL_CALL,
  POS(4263, 9),
  POS(4264, 9),
  POS(4265, 9)
};

static TAB_NUM t_lambda_1464[] = {
  1, // locals
  0, // parameters
  // is_undefined -> empty_list
  var_is_undefined, 1, var_4254_12_expr, 1, LOCAL(1),
  //  expr.is_undefined -> empty_list
  LET, 2, LOCAL(1), lambda_1465, TAIL_CALL,
  POS(4269, 15),
  POS(4269, 9)
};

static TAB_NUM t_lambda_1465[] = {
  0, // locals
  0, // parameters
  //  empty_list
  LET, 1, var_empty_list, TAIL_CALL,
  POS(4269, 30)
};

static TAB_NUM t_lambda_1466[] = {
  1, // locals
  0, // parameters
  // is_a_list -> expr
  var_is_a_list, 1, var_4254_12_expr, 1, LOCAL(1),
  //  expr.is_a_list -> expr
  LET, 2, LOCAL(1), lambda_1467, TAIL_CALL,
  POS(4270, 15),
  POS(4270, 9)
};

static TAB_NUM t_lambda_1467[] = {
  0, // locals
  0, // parameters
  //  expr
  LET, 1, var_4254_12_expr, TAIL_CALL,
  POS(4270, 27)
};

static TAB_NUM t_lambda_1468[] = {
  0, // locals
  0, // parameters
  //  true -> list(expr)
  LET, 2, var_true, lambda_1469, TAIL_CALL,
  POS(4271, 9)
};

static TAB_NUM t_lambda_1469[] = {
  1, // locals
  0, // parameters
  // list(expr)
  var_list, 1, var_4254_12_expr, 1, LOCAL(1),
  //  list(expr)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(4271, 18),
  POS(4271, 17)
};

static TAB_NUM t_func_parse_line_end_statement_without_prefix[] = {
  0, // locals
  0, // parameters
  // parse_statement
  func_parse_statement, 0, TAIL_CALL,
  POS(4274, 3)
};

static TAB_NUM t_func_parse_inline_body_without_prefix[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_4277_1_position,
  // parse_inline_parameters !text $inline_parameters
  func_parse_inline_parameters, 0, 2, var_text, var_4278_31_inline_parameters,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_70_text_is_defined, lambda_1474, TAIL_CALL,
  POS(4277, 3),
  POS(4278, 3),
  POS(4280, 10),
  POS(4279, 3)
};

static TAB_NUM t_lambda_70_text_is_defined[] = {
  2, // locals
  0, // parameters
  // text(1) == ' ':
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == ' ':
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_1470, lambda_1473, TAIL_CALL,
  POS(4282, 9),
  POS(4282, 9),
  POS(4281, 7)
};

static TAB_NUM t_lambda_1470[] = {
  1, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_inline_statement !text $inline_statement
  func_parse_inline_statement, 0, 2, var_text, var_4284_30_inline_statement,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1471, lambda_1472, TAIL_CALL,
  POS(4283, 11),
  POS(4284, 11),
  POS(4286, 18),
  POS(4285, 11)
};

static TAB_NUM t_lambda_1471[] = {
  1, // locals
  0, // parameters
  // funky_types::inline_body
  LET, -4, var_funky_types__inline_body, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_4277_1_position, var_funky__parameters_of, var_4278_31_inline_parameters, var_funky__statement_of, var_4284_30_inline_statement, LOCAL(1),
  // 
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(4289, 15),
  POS(4287, 15)
};

static TAB_NUM t_lambda_1472[] = {
  0, // locals
  0, // parameters
  //  undefined inline_statement
  LET, 2, var_undefined, var_4284_30_inline_statement, TAIL_CALL,
  POS(4294, 15)
};

static TAB_NUM t_lambda_1473[] = {
  0, // locals
  0, // parameters
  // syntax_error "space character"
  func_syntax_error, 1, str_space_character, TAIL_CALL,
  POS(4296, 11)
};

static TAB_NUM t_lambda_1474[] = {
  0, // locals
  0, // parameters
  //  undefined inline_parameters
  LET, 2, var_undefined, var_4278_31_inline_parameters, TAIL_CALL,
  POS(4297, 7)
};

static TAB_NUM t_func_parse_statements[] = {
  2, // locals
  0, // parameters
  // text == "@nl;" && subgroups.is_defined:
  var_std__equal, 2, var_text, string_2, 1, LOCAL(1),
  // text == "@nl;" && subgroups.is_defined:
  var_std__and, 2, LOCAL(1), lambda_1475, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_1476, lambda_1479, TAIL_CALL,
  POS(4301, 5),
  POS(4301, 5),
  POS(4300, 3)
};

static TAB_NUM t_lambda_1475[] = {
  1, // locals
  0, // parameters
  // is_defined:
  var_is_defined, 1, var_subgroups, 1, LOCAL(1),
  // subgroups.is_defined:
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(4301, 33),
  POS(4301, 23)
};

static TAB_NUM t_lambda_1476[] = {
  1, // locals
  0, // parameters
  // $parameters_or_statement parse_groups(funky::parse_parameters_or_statement_group)
  func_parse_groups, 1, var_funky__parse_parameters_or_statement_group, 1, var_4302_1_parameters_or_statement,
  // $error find_first(parameters_or_statement is_an_error)
  var_find_first, 2, var_4302_1_parameters_or_statement, var_is_an_error, 1, var_4303_1_error,
  // is_an_error
  var_is_an_error, 1, var_4303_1_error, 1, LOCAL(1),
  // if error.is_an_error
  var_if, 3, LOCAL(1), lambda_1477, lambda_1478, TAIL_CALL,
  POS(4302, 7),
  POS(4303, 7),
  POS(4304, 16),
  POS(4304, 7)
};

static TAB_NUM t_lambda_1477[] = {
  0, // locals
  0, // parameters
  //  undefined error
  LET, 2, var_undefined, var_4303_1_error, TAIL_CALL,
  POS(4305, 11)
};

static TAB_NUM t_lambda_1478[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, string_1, var_4302_1_parameters_or_statement, TAIL_CALL,
  POS(4306, 11)
};

static TAB_NUM t_lambda_1479[] = {
  0, // locals
  0, // parameters
  // syntax_error "valid input characters or line end"
  func_syntax_error, 1, str_valid_input_char, TAIL_CALL,
  POS(4310, 7)
};

static TAB_NUM t_func_parse_inline_parameters[] = {
  2, // locals
  0, // parameters
  // cond $rest $expr
  var_cond, 2, lambda_1480, lambda_1483, 2, LOCAL(2), var_4313_12_expr,
  // cond
  var_cond, 3, lambda_1485, lambda_1487, lambda_1489, 1, LOCAL(1),
  // ->
  LET, 2, LOCAL(2), LOCAL(1), TAIL_CALL,
  POS(4313, 3),
  POS(4326, 5),
  POS(4324, 3)
};

static TAB_NUM t_lambda_1480[] = {
  3, // locals
  0, // parameters
  // text(1) == ' '
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_1481, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_1482, TAIL_CALL,
  POS(4316, 9),
  POS(4316, 9),
  POS(4315, 9),
  POS(4314, 7)
};

static TAB_NUM t_lambda_1481[] = {
  2, // locals
  0, // parameters
  // text(2) == '('
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '('
  var_std__equal, 2, LOCAL(1), chr_40, 1, LOCAL(2),
  // text(2) == '('
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(4317, 9),
  POS(4317, 9),
  POS(4317, 9)
};

static TAB_NUM t_lambda_1482[] = {
  0, // locals
  0, // parameters
  // range &text 3 -1
  var_range, 3, var_text, num_3, minus_num_1, 1, var_text,
  // parse_some_inline_parameters
  func_parse_some_inline_parameters, 0, TAIL_CALL,
  POS(4319, 9),
  POS(4320, 9)
};

static TAB_NUM t_lambda_1483[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_1484, TAIL_CALL,
  POS(4321, 7)
};

static TAB_NUM t_lambda_1484[] = {
  0, // locals
  0, // parameters
  //  text empty_list
  LET, 2, var_text, var_empty_list, TAIL_CALL,
  POS(4323, 9)
};

static TAB_NUM t_lambda_1485[] = {
  1, // locals
  0, // parameters
  // is_undefined -> empty_list
  var_is_undefined, 1, var_4313_12_expr, 1, LOCAL(1),
  //  expr.is_undefined -> empty_list
  LET, 2, LOCAL(1), lambda_1486, TAIL_CALL,
  POS(4327, 15),
  POS(4327, 9)
};

static TAB_NUM t_lambda_1486[] = {
  0, // locals
  0, // parameters
  //  empty_list
  LET, 1, var_empty_list, TAIL_CALL,
  POS(4327, 30)
};

static TAB_NUM t_lambda_1487[] = {
  1, // locals
  0, // parameters
  // is_a_list -> expr
  var_is_a_list, 1, var_4313_12_expr, 1, LOCAL(1),
  //  expr.is_a_list -> expr
  LET, 2, LOCAL(1), lambda_1488, TAIL_CALL,
  POS(4328, 15),
  POS(4328, 9)
};

static TAB_NUM t_lambda_1488[] = {
  0, // locals
  0, // parameters
  //  expr
  LET, 1, var_4313_12_expr, TAIL_CALL,
  POS(4328, 27)
};

static TAB_NUM t_lambda_1489[] = {
  0, // locals
  0, // parameters
  //  true -> list(expr)
  LET, 2, var_true, lambda_1490, TAIL_CALL,
  POS(4329, 9)
};

static TAB_NUM t_lambda_1490[] = {
  1, // locals
  0, // parameters
  // list(expr)
  var_list, 1, var_4313_12_expr, 1, LOCAL(1),
  //  list(expr)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(4329, 18),
  POS(4329, 17)
};

static TAB_NUM t_func_parse_some_inline_parameters[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 2, lambda_1491, lambda_1493, TAIL_CALL,
  POS(4332, 3)
};

static TAB_NUM t_lambda_1491[] = {
  2, // locals
  0, // parameters
  // text(1) == ')'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == ')'
  var_std__equal, 2, LOCAL(1), chr_41, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_1492, TAIL_CALL,
  POS(4334, 7),
  POS(4334, 7),
  POS(4333, 7)
};

static TAB_NUM t_lambda_1492[] = {
  1, // locals
  0, // parameters
  // range(text 2 -1) undefined
  var_range, 3, var_text, num_2, minus_num_1, 1, LOCAL(1),
  //  range(text 2 -1) undefined
  LET, 2, LOCAL(1), var_undefined, TAIL_CALL,
  POS(4335, 10),
  POS(4335, 9)
};

static TAB_NUM t_lambda_1493[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_1494, TAIL_CALL,
  POS(4336, 7)
};

static TAB_NUM t_lambda_1494[] = {
  0, // locals
  0, // parameters
  // !expected "some inline parameters"
  LET, 1, str_some_inline_para, 1, var_expected,
  // !at text
  LET, 1, var_text, 1, var_at,
  // parse_one_or_more_inline_parameters
  func_parse_one_or_more_inline_parameters, 0, TAIL_CALL,
  POS(4339, 9),
  POS(4340, 9),
  POS(4341, 9)
};

static TAB_NUM t_func_parse_one_or_more_inline_parameters[] = {
  1, // locals
  0, // parameters
  // parse_inline_parameter !text $inline_parameter
  func_parse_inline_parameter, 0, 2, var_text, var_4344_30_inline_parameter,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_71_text_is_defined, lambda_1499, TAIL_CALL,
  POS(4344, 3),
  POS(4346, 10),
  POS(4345, 3)
};

static TAB_NUM t_lambda_71_text_is_defined[] = {
  1, // locals
  0, // parameters
  // parse_maybe_more_inline_parameters !text $maybe_more_inline_parameters
  func_parse_maybe_more_inline_parameters, 0, 2, var_text, var_4347_42_maybe_more_inline_parameters,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1495, lambda_1498, TAIL_CALL,
  POS(4347, 7),
  POS(4349, 14),
  POS(4348, 7)
};

static TAB_NUM t_lambda_1495[] = {
  1, // locals
  0, // parameters
  // is_defined
  var_is_defined, 1, var_4347_42_maybe_more_inline_parameters, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1496, lambda_1497, TAIL_CALL,
  POS(4352, 42),
  POS(4351, 11)
};

static TAB_NUM t_lambda_1496[] = {
  3, // locals
  0, // parameters
  // to_list
  func_to_list, 1, var_4344_30_inline_parameter, 1, LOCAL(1),
  // to_list
  func_to_list, 1, var_4347_42_maybe_more_inline_parameters, 1, LOCAL(2),
  // append
  var_append, 2, LOCAL(1), LOCAL(2), 1, LOCAL(3),
  // 
  LET, 2, var_text, LOCAL(3), TAIL_CALL,
  POS(4356, 34),
  POS(4357, 46),
  POS(4355, 15),
  POS(4353, 15)
};

static TAB_NUM t_lambda_1497[] = {
  1, // locals
  0, // parameters
  // to_list
  func_to_list, 1, var_4344_30_inline_parameter, 1, LOCAL(1),
  //  text inline_parameter.to_list
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(4358, 38),
  POS(4358, 15)
};

static TAB_NUM t_lambda_1498[] = {
  0, // locals
  0, // parameters
  //  undefined maybe_more_inline_parameters
  LET, 2, var_undefined, var_4347_42_maybe_more_inline_parameters, TAIL_CALL,
  POS(4359, 11)
};

static TAB_NUM t_lambda_1499[] = {
  0, // locals
  0, // parameters
  //  undefined inline_parameter
  LET, 2, var_undefined, var_4344_30_inline_parameter, TAIL_CALL,
  POS(4360, 7)
};

static TAB_NUM t_func_parse_maybe_more_inline_parameters[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 3, lambda_1500, lambda_1502, lambda_1504, TAIL_CALL,
  POS(4363, 3)
};

static TAB_NUM t_lambda_1500[] = {
  2, // locals
  0, // parameters
  // text(1) == ' '
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_1501, TAIL_CALL,
  POS(4365, 7),
  POS(4365, 7),
  POS(4364, 7)
};

static TAB_NUM t_lambda_1501[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_one_or_more_inline_parameters
  func_parse_one_or_more_inline_parameters, 0, TAIL_CALL,
  POS(4367, 9),
  POS(4368, 9)
};

static TAB_NUM t_lambda_1502[] = {
  2, // locals
  0, // parameters
  // text(1) == ')'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == ')'
  var_std__equal, 2, LOCAL(1), chr_41, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_1503, TAIL_CALL,
  POS(4370, 7),
  POS(4370, 7),
  POS(4369, 7)
};

static TAB_NUM t_lambda_1503[] = {
  1, // locals
  0, // parameters
  // range(text 2 -1) undefined
  var_range, 3, var_text, num_2, minus_num_1, 1, LOCAL(1),
  //  range(text 2 -1) undefined
  LET, 2, LOCAL(1), var_undefined, TAIL_CALL,
  POS(4371, 10),
  POS(4371, 9)
};

static TAB_NUM t_lambda_1504[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_1505, TAIL_CALL,
  POS(4372, 7)
};

static TAB_NUM t_lambda_1505[] = {
  0, // locals
  0, // parameters
  // syntax_error "maybe more inline parameters"
  func_syntax_error, 1, str_maybe_more_inlin, TAIL_CALL,
  POS(4375, 9)
};

static TAB_NUM t_func_parse_parameter_name[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 3, lambda_1506, lambda_1508, lambda_1513, TAIL_CALL,
  POS(4378, 3)
};

static TAB_NUM t_lambda_1506[] = {
  2, // locals
  0, // parameters
  // text(1) == '_'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '_'
  var_std__equal, 2, LOCAL(1), chr_95, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_1507, TAIL_CALL,
  POS(4380, 7),
  POS(4380, 7),
  POS(4379, 7)
};

static TAB_NUM t_lambda_1507[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_name
  func_parse_name, 0, TAIL_CALL,
  POS(4382, 9),
  POS(4383, 9)
};

static TAB_NUM t_lambda_1508[] = {
  5, // locals
  0, // parameters
  // text(1) >= 'a' && text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z')
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) >= 'a' && text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z')
  var_std__less, 2, LOCAL(1), chr_97, 1, LOCAL(2),
  // text(1) >= 'a' && text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) >= 'a' && text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z')
  var_std__and, 2, LOCAL(3), lambda_1509, 1, LOCAL(4),
  // text(1) >= 'a' && text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z')
  var_std__or, 2, LOCAL(4), lambda_1510, 1, LOCAL(5),
  // 
  LET, 2, LOCAL(5), lambda_1512, TAIL_CALL,
  POS(4385, 8),
  POS(4385, 8),
  POS(4385, 8),
  POS(4385, 8),
  POS(4385, 8),
  POS(4384, 7)
};

static TAB_NUM t_lambda_1509[] = {
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
  POS(4385, 26),
  POS(4385, 38),
  POS(4385, 38),
  POS(4385, 26)
};

static TAB_NUM t_lambda_1510[] = {
  4, // locals
  0, // parameters
  // text(1) >= 'A' && text(1) <= 'Z')
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) >= 'A' && text(1) <= 'Z')
  var_std__less, 2, LOCAL(1), chr_65, 1, LOCAL(2),
  // text(1) >= 'A' && text(1) <= 'Z')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) >= 'A' && text(1) <= 'Z')
  var_std__and, 2, LOCAL(3), lambda_1511, 1, LOCAL(4),
  // text(1) >= 'A' && text(1) <= 'Z')
  LET, 1, LOCAL(4), TAIL_CALL,
  POS(4385, 46),
  POS(4385, 46),
  POS(4385, 46),
  POS(4385, 46),
  POS(4385, 46)
};

static TAB_NUM t_lambda_1511[] = {
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
  POS(4385, 64),
  POS(4385, 76),
  POS(4385, 76),
  POS(4385, 64)
};

static TAB_NUM t_lambda_1512[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_more_name_characters
  func_parse_more_name_characters, 0, TAIL_CALL,
  POS(4387, 9),
  POS(4388, 9)
};

static TAB_NUM t_lambda_1513[] = {
  0, // locals
  0, // parameters
  //  true:
  LET, 2, var_true, lambda_1514, TAIL_CALL,
  POS(4389, 7)
};

static TAB_NUM t_lambda_1514[] = {
  0, // locals
  0, // parameters
  // syntax_error "parameter name"
  func_syntax_error, 1, str_parameter_name, TAIL_CALL,
  POS(4390, 7)
};

static TAB_NUM t_func_parse_open_parameters_without_prefix[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_4393_1_position,
  // parse_trailing_remark !text $trailing_remark
  func_parse_trailing_remark, 0, 2, var_text, var_4394_29_trailing_remark,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_72_text_is_defined, lambda_1520, TAIL_CALL,
  POS(4393, 3),
  POS(4394, 3),
  POS(4396, 10),
  POS(4395, 3)
};

static TAB_NUM t_lambda_72_text_is_defined[] = {
  2, // locals
  0, // parameters
  // text == "@nl;" && subgroups.is_defined:
  var_std__equal, 2, var_text, string_2, 1, LOCAL(1),
  // text == "@nl;" && subgroups.is_defined:
  var_std__and, 2, LOCAL(1), lambda_1515, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_1516, lambda_1519, TAIL_CALL,
  POS(4398, 9),
  POS(4398, 9),
  POS(4397, 7)
};

static TAB_NUM t_lambda_1515[] = {
  1, // locals
  0, // parameters
  // is_defined:
  var_is_defined, 1, var_subgroups, 1, LOCAL(1),
  // subgroups.is_defined:
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(4398, 37),
  POS(4398, 27)
};

static TAB_NUM t_lambda_1516[] = {
  1, // locals
  0, // parameters
  // $parameter parse_groups(funky::parse_parameter_group)
  func_parse_groups, 1, var_funky__parse_parameter_group, 1, var_4399_1_parameter,
  // $error find_first(parameter is_an_error)
  var_find_first, 2, var_4399_1_parameter, var_is_an_error, 1, var_4400_1_error,
  // is_an_error
  var_is_an_error, 1, var_4400_1_error, 1, LOCAL(1),
  // if error.is_an_error
  var_if, 3, LOCAL(1), lambda_1517, lambda_1518, TAIL_CALL,
  POS(4399, 11),
  POS(4400, 11),
  POS(4401, 20),
  POS(4401, 11)
};

static TAB_NUM t_lambda_1517[] = {
  0, // locals
  0, // parameters
  //  undefined error
  LET, 2, var_undefined, var_4400_1_error, TAIL_CALL,
  POS(4402, 15)
};

static TAB_NUM t_lambda_1518[] = {
  1, // locals
  0, // parameters
  // funky_types::open_parameters
  LET, -4, var_funky_types__open_parameters, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_4393_1_position, var_funky__remark_of, var_4394_29_trailing_remark, var_funky__parameter_of, var_4399_1_parameter, LOCAL(1),
  // 
  LET, 2, string_1, LOCAL(1), TAIL_CALL,
  POS(4405, 15),
  POS(4403, 15)
};

static TAB_NUM t_lambda_1519[] = {
  0, // locals
  0, // parameters
  // syntax_error "valid input characters or line end"
  func_syntax_error, 1, str_valid_input_char, TAIL_CALL,
  POS(4411, 11)
};

static TAB_NUM t_lambda_1520[] = {
  0, // locals
  0, // parameters
  //  undefined trailing_remark
  LET, 2, var_undefined, var_4394_29_trailing_remark, TAIL_CALL,
  POS(4412, 7)
};

static TAB_NUM t_func_parse_inline_parameter[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_4415_1_position,
  // !str text
  LET, 1, var_text, 1, var_str,
  // parse_parameter_name !text $parameter_name
  func_parse_parameter_name, 0, 2, var_text, var_4417_28_parameter_name,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_73_text_is_defined, lambda_1523, TAIL_CALL,
  POS(4415, 3),
  POS(4416, 3),
  POS(4417, 3),
  POS(4419, 10),
  POS(4418, 3)
};

static TAB_NUM t_lambda_73_text_is_defined[] = {
  1, // locals
  0, // parameters
  // parse_parameter_option !text $parameter_option
  func_parse_parameter_option, 0, 2, var_text, var_4420_30_parameter_option,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1521, lambda_1522, TAIL_CALL,
  POS(4420, 7),
  POS(4422, 14),
  POS(4421, 7)
};

static TAB_NUM t_lambda_1521[] = {
  1, // locals
  0, // parameters
  // funky_types::inline_parameter
  LET, -4, var_funky_types__inline_parameter, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_4415_1_position, var_funky__name_of, var_4417_28_parameter_name, var_funky__option_of, var_4420_30_parameter_option, LOCAL(1),
  // 
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(4425, 11),
  POS(4423, 11)
};

static TAB_NUM t_lambda_1522[] = {
  0, // locals
  0, // parameters
  //  undefined parameter_option
  LET, 2, var_undefined, var_4420_30_parameter_option, TAIL_CALL,
  POS(4430, 11)
};

static TAB_NUM t_lambda_1523[] = {
  0, // locals
  0, // parameters
  //  undefined parameter_name
  LET, 2, var_undefined, var_4417_28_parameter_name, TAIL_CALL,
  POS(4431, 7)
};

static TAB_NUM t_func_parse_parameter[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_4434_1_position,
  // !str text
  LET, 1, var_text, 1, var_str,
  // parse_parameter_name !text $parameter_name
  func_parse_parameter_name, 0, 2, var_text, var_4436_28_parameter_name,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_74_text_is_defined, lambda_1527, TAIL_CALL,
  POS(4434, 3),
  POS(4435, 3),
  POS(4436, 3),
  POS(4438, 10),
  POS(4437, 3)
};

static TAB_NUM t_lambda_74_text_is_defined[] = {
  1, // locals
  0, // parameters
  // parse_parameter_option !text $parameter_option
  func_parse_parameter_option, 0, 2, var_text, var_4439_30_parameter_option,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_75_text_is_defined, lambda_1526, TAIL_CALL,
  POS(4439, 7),
  POS(4441, 14),
  POS(4440, 7)
};

static TAB_NUM t_lambda_75_text_is_defined[] = {
  1, // locals
  0, // parameters
  // parse_trailing_remarks !text $trailing_remarks
  func_parse_trailing_remarks, 0, 2, var_text, var_4442_30_trailing_remarks,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1524, lambda_1525, TAIL_CALL,
  POS(4442, 11),
  POS(4444, 18),
  POS(4443, 11)
};

static TAB_NUM t_lambda_1524[] = {
  1, // locals
  0, // parameters
  // funky_types::parameter
  LET, -5, var_funky_types__parameter, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_4434_1_position, var_funky__name_of, var_4436_28_parameter_name, var_funky__option_of, var_4439_30_parameter_option, var_funky__remarks_of, var_4442_30_trailing_remarks, LOCAL(1),
  // 
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(4447, 15),
  POS(4445, 15)
};

static TAB_NUM t_lambda_1525[] = {
  0, // locals
  0, // parameters
  //  undefined trailing_remarks
  LET, 2, var_undefined, var_4442_30_trailing_remarks, TAIL_CALL,
  POS(4453, 15)
};

static TAB_NUM t_lambda_1526[] = {
  0, // locals
  0, // parameters
  //  undefined parameter_option
  LET, 2, var_undefined, var_4439_30_parameter_option, TAIL_CALL,
  POS(4454, 11)
};

static TAB_NUM t_lambda_1527[] = {
  0, // locals
  0, // parameters
  //  undefined parameter_name
  LET, 2, var_undefined, var_4436_28_parameter_name, TAIL_CALL,
  POS(4455, 7)
};

static TAB_NUM t_func_parse_parameter_option[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 4, lambda_1528, lambda_1530, lambda_1532, lambda_1536, TAIL_CALL,
  POS(4458, 3)
};

static TAB_NUM t_lambda_1528[] = {
  2, // locals
  0, // parameters
  // text(1) == '^'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '^'
  var_std__equal, 2, LOCAL(1), chr_94, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_1529, TAIL_CALL,
  POS(4460, 7),
  POS(4460, 7),
  POS(4459, 7)
};

static TAB_NUM t_lambda_1529[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_myself_without_prefix
  func_parse_myself_without_prefix, 0, TAIL_CALL,
  POS(4462, 9),
  POS(4463, 9)
};

static TAB_NUM t_lambda_1530[] = {
  2, // locals
  0, // parameters
  // text(1) == '*'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '*'
  var_std__equal, 2, LOCAL(1), chr_42, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_1531, TAIL_CALL,
  POS(4465, 7),
  POS(4465, 7),
  POS(4464, 7)
};

static TAB_NUM t_lambda_1531[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_rest_without_prefix
  func_parse_rest_without_prefix, 0, TAIL_CALL,
  POS(4467, 9),
  POS(4468, 9)
};

static TAB_NUM t_lambda_1532[] = {
  3, // locals
  0, // parameters
  // text(1) == ' '
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_1533, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_1535, TAIL_CALL,
  POS(4471, 9),
  POS(4471, 9),
  POS(4470, 9),
  POS(4469, 7)
};

static TAB_NUM t_lambda_1533[] = {
  3, // locals
  0, // parameters
  // text(2) == '='
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '='
  var_std__equal, 2, LOCAL(1), chr_61, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_1534, 1, LOCAL(3),
  // text(2) == '='
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(4472, 9),
  POS(4472, 9),
  POS(4470, 9),
  POS(4472, 9)
};

static TAB_NUM t_lambda_1534[] = {
  2, // locals
  0, // parameters
  // text(3) == ' '
  var_text, 1, num_3, 1, LOCAL(1),
  // text(3) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // text(3) == ' '
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(4473, 9),
  POS(4473, 9),
  POS(4473, 9)
};

static TAB_NUM t_lambda_1535[] = {
  0, // locals
  0, // parameters
  // range &text 4 -1
  var_range, 3, var_text, num_4, minus_num_1, 1, var_text,
  // parse_initial_value_without_prefix
  func_parse_initial_value_without_prefix, 0, TAIL_CALL,
  POS(4475, 9),
  POS(4476, 9)
};

static TAB_NUM t_lambda_1536[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_1537, TAIL_CALL,
  POS(4477, 7)
};

static TAB_NUM t_lambda_1537[] = {
  0, // locals
  0, // parameters
  //  text undefined
  LET, 2, var_text, var_undefined, TAIL_CALL,
  POS(4479, 9)
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
  POS(4482, 3),
  POS(4485, 5),
  POS(4483, 3)
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
  POS(4490, 3),
  POS(4493, 5),
  POS(4491, 3)
};

static TAB_NUM t_func_parse_initial_value_without_prefix[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_4498_1_position,
  // parse_simple_operand !text $simple_operand
  func_parse_simple_operand, 0, 2, var_text, var_4499_28_simple_operand,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1538, lambda_1539, TAIL_CALL,
  POS(4498, 3),
  POS(4499, 3),
  POS(4501, 10),
  POS(4500, 3)
};

static TAB_NUM t_lambda_1538[] = {
  1, // locals
  0, // parameters
  // funky_types::initial_value
  LET, -3, var_funky_types__initial_value, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_4498_1_position, var_funky__operand_of, var_4499_28_simple_operand, LOCAL(1),
  // 
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(4504, 7),
  POS(4502, 7)
};

static TAB_NUM t_lambda_1539[] = {
  0, // locals
  0, // parameters
  //  undefined simple_operand
  LET, 2, var_undefined, var_4499_28_simple_operand, TAIL_CALL,
  POS(4508, 7)
};

static TAB_NUM t_func_parse_simple_operand[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 5, lambda_1540, lambda_1545, lambda_1548, lambda_1550, lambda_1552, TAIL_CALL,
  POS(4511, 3)
};

static TAB_NUM t_lambda_1540[] = {
  5, // locals
  0, // parameters
  // text(1) >= 'a' && text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z')
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) >= 'a' && text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z')
  var_std__less, 2, LOCAL(1), chr_97, 1, LOCAL(2),
  // text(1) >= 'a' && text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) >= 'a' && text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z')
  var_std__and, 2, LOCAL(3), lambda_1541, 1, LOCAL(4),
  // text(1) >= 'a' && text(1) <= 'z') || (text(1) >= 'A' && text(1) <= 'Z')
  var_std__or, 2, LOCAL(4), lambda_1542, 1, LOCAL(5),
  // 
  LET, 2, LOCAL(5), lambda_1544, TAIL_CALL,
  POS(4513, 8),
  POS(4513, 8),
  POS(4513, 8),
  POS(4513, 8),
  POS(4513, 8),
  POS(4512, 7)
};

static TAB_NUM t_lambda_1541[] = {
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
  POS(4513, 26),
  POS(4513, 38),
  POS(4513, 38),
  POS(4513, 26)
};

static TAB_NUM t_lambda_1542[] = {
  4, // locals
  0, // parameters
  // text(1) >= 'A' && text(1) <= 'Z')
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) >= 'A' && text(1) <= 'Z')
  var_std__less, 2, LOCAL(1), chr_65, 1, LOCAL(2),
  // text(1) >= 'A' && text(1) <= 'Z')
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(1) >= 'A' && text(1) <= 'Z')
  var_std__and, 2, LOCAL(3), lambda_1543, 1, LOCAL(4),
  // text(1) >= 'A' && text(1) <= 'Z')
  LET, 1, LOCAL(4), TAIL_CALL,
  POS(4513, 46),
  POS(4513, 46),
  POS(4513, 46),
  POS(4513, 46),
  POS(4513, 46)
};

static TAB_NUM t_lambda_1543[] = {
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
  POS(4513, 64),
  POS(4513, 76),
  POS(4513, 76),
  POS(4513, 64)
};

static TAB_NUM t_lambda_1544[] = {
  0, // locals
  0, // parameters
  // !str text
  LET, 1, var_text, 1, var_str,
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_variable_without_prefix
  func_parse_variable_without_prefix, 0, TAIL_CALL,
  POS(4515, 9),
  POS(4516, 9),
  POS(4517, 9)
};

static TAB_NUM t_lambda_1545[] = {
  3, // locals
  0, // parameters
  // text(1) == '''
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '''
  var_std__equal, 2, LOCAL(1), chr_39, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_1546, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_1547, TAIL_CALL,
  POS(4520, 9),
  POS(4520, 9),
  POS(4519, 9),
  POS(4518, 7)
};

static TAB_NUM t_lambda_1546[] = {
  2, // locals
  0, // parameters
  // text(2) == '@@'
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '@@'
  var_std__equal, 2, LOCAL(1), chr_64, 1, LOCAL(2),
  // text(2) == '@@'
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(4521, 9),
  POS(4521, 9),
  POS(4521, 9)
};

static TAB_NUM t_lambda_1547[] = {
  0, // locals
  0, // parameters
  // range &text 3 -1
  var_range, 3, var_text, num_3, minus_num_1, 1, var_text,
  // parse_special_character_literal
  func_parse_special_character_literal, 0, TAIL_CALL,
  POS(4523, 9),
  POS(4524, 9)
};

static TAB_NUM t_lambda_1548[] = {
  2, // locals
  0, // parameters
  // text(1) == '''
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '''
  var_std__equal, 2, LOCAL(1), chr_39, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_1549, TAIL_CALL,
  POS(4526, 7),
  POS(4526, 7),
  POS(4525, 7)
};

static TAB_NUM t_lambda_1549[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_character_literal_without_prefix
  func_parse_character_literal_without_prefix, 0, TAIL_CALL,
  POS(4528, 9),
  POS(4529, 9)
};

static TAB_NUM t_lambda_1550[] = {
  2, // locals
  0, // parameters
  // text(1) == '"'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '"'
  var_std__equal, 2, LOCAL(1), chr_34, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_1551, TAIL_CALL,
  POS(4531, 7),
  POS(4531, 7),
  POS(4530, 7)
};

static TAB_NUM t_lambda_1551[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_string_literal_without_prefix
  func_parse_string_literal_without_prefix, 0, TAIL_CALL,
  POS(4533, 9),
  POS(4534, 9)
};

static TAB_NUM t_lambda_1552[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_1553, TAIL_CALL,
  POS(4535, 7)
};

static TAB_NUM t_lambda_1553[] = {
  0, // locals
  0, // parameters
  // !expected "simple operand"
  LET, 1, str_simple_operand, 1, var_expected,
  // !at text
  LET, 1, var_text, 1, var_at,
  // parse_numeric_literal
  func_parse_numeric_literal, 0, TAIL_CALL,
  POS(4538, 9),
  POS(4539, 9),
  POS(4540, 9)
};

static TAB_NUM t_func_parse_close_parameters_without_prefix[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_4543_1_position,
  // parse_trailing_remark !text $trailing_remark
  func_parse_trailing_remark, 0, 2, var_text, var_4544_29_trailing_remark,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1554, lambda_1555, TAIL_CALL,
  POS(4543, 3),
  POS(4544, 3),
  POS(4546, 10),
  POS(4545, 3)
};

static TAB_NUM t_lambda_1554[] = {
  1, // locals
  0, // parameters
  // funky_types::close_parameters
  LET, -3, var_funky_types__close_parameters, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_4543_1_position, var_funky__remark_of, var_4544_29_trailing_remark, LOCAL(1),
  // 
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(4549, 7),
  POS(4547, 7)
};

static TAB_NUM t_lambda_1555[] = {
  0, // locals
  0, // parameters
  //  undefined trailing_remark
  LET, 2, var_undefined, var_4544_29_trailing_remark, TAIL_CALL,
  POS(4553, 7)
};

static TAB_NUM t_func_parse_return_expression_without_prefix[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_4556_1_position,
  // parse_some_statement_arguments !text $some_statement_arguments
  func_parse_some_statement_arguments, 0, 2, var_text, var_4557_38_some_statement_arguments,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1556, lambda_1557, TAIL_CALL,
  POS(4556, 3),
  POS(4557, 3),
  POS(4559, 10),
  POS(4558, 3)
};

static TAB_NUM t_lambda_1556[] = {
  1, // locals
  0, // parameters
  // funky_types::return_expression
  LET, -3, var_funky_types__return_expression, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_4556_1_position, var_funky__arguments_of, var_4557_38_some_statement_arguments, LOCAL(1),
  // 
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(4562, 7),
  POS(4560, 7)
};

static TAB_NUM t_lambda_1557[] = {
  0, // locals
  0, // parameters
  //  undefined some_statement_arguments
  LET, 2, var_undefined, var_4557_38_some_statement_arguments, TAIL_CALL,
  POS(4566, 7)
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
  POS(4569, 3),
  POS(4572, 5),
  POS(4570, 3)
};

static TAB_NUM t_func_parse_remark[] = {
  2, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_4577_1_position,
  // text(1) == '#':
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '#':
  var_std__equal, 2, LOCAL(1), chr_35, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_1558, lambda_1561, TAIL_CALL,
  POS(4577, 3),
  POS(4579, 5),
  POS(4579, 5),
  POS(4578, 3)
};

static TAB_NUM t_lambda_1558[] = {
  1, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // !str text
  LET, 1, var_text, 1, var_str,
  // parse_remark_text !text $remark_text
  func_parse_remark_text, 0, 2, var_text, var_4582_25_remark_text,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1559, lambda_1560, TAIL_CALL,
  POS(4580, 7),
  POS(4581, 7),
  POS(4582, 7),
  POS(4584, 14),
  POS(4583, 7)
};

static TAB_NUM t_lambda_1559[] = {
  1, // locals
  0, // parameters
  // funky_types::remark
  LET, -3, var_funky_types__remark, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_4577_1_position, var_funky__text_of, var_4582_25_remark_text, LOCAL(1),
  // 
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(4587, 11),
  POS(4585, 11)
};

static TAB_NUM t_lambda_1560[] = {
  0, // locals
  0, // parameters
  //  undefined remark_text
  LET, 2, var_undefined, var_4582_25_remark_text, TAIL_CALL,
  POS(4591, 11)
};

static TAB_NUM t_lambda_1561[] = {
  0, // locals
  0, // parameters
  // syntax_error "'#'"
  func_syntax_error, 1, string_10, TAIL_CALL,
  POS(4593, 7)
};

static TAB_NUM t_func_parse_remark_without_prefix[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_4596_1_position,
  // !str text
  LET, 1, var_text, 1, var_str,
  // parse_remark_text !text $remark_text
  func_parse_remark_text, 0, 2, var_text, var_4598_25_remark_text,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1562, lambda_1563, TAIL_CALL,
  POS(4596, 3),
  POS(4597, 3),
  POS(4598, 3),
  POS(4600, 10),
  POS(4599, 3)
};

static TAB_NUM t_lambda_1562[] = {
  1, // locals
  0, // parameters
  // funky_types::remark
  LET, -3, var_funky_types__remark, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_4596_1_position, var_funky__text_of, var_4598_25_remark_text, LOCAL(1),
  // 
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(4603, 7),
  POS(4601, 7)
};

static TAB_NUM t_lambda_1563[] = {
  0, // locals
  0, // parameters
  //  undefined remark_text
  LET, 2, var_undefined, var_4598_25_remark_text, TAIL_CALL,
  POS(4607, 7)
};

static TAB_NUM t_func_parse_remark_text[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 2, lambda_1564, lambda_1566, TAIL_CALL,
  POS(4610, 3)
};

static TAB_NUM t_lambda_1564[] = {
  2, // locals
  0, // parameters
  // text(1) == '@nl;'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '@nl;'
  var_std__equal, 2, LOCAL(1), chr_10, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_1565, TAIL_CALL,
  POS(4612, 7),
  POS(4612, 7),
  POS(4611, 7)
};

static TAB_NUM t_lambda_1565[] = {
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
  POS(4613, 27),
  POS(4613, 42),
  POS(4613, 27),
  POS(4613, 15),
  POS(4613, 9)
};

static TAB_NUM t_lambda_1566[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_1567, TAIL_CALL,
  POS(4614, 7)
};

static TAB_NUM t_lambda_1567[] = {
  0, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // parse_remark_text
  func_parse_remark_text, 0, TAIL_CALL,
  POS(4617, 9),
  POS(4618, 9)
};

static TAB_NUM t_func_parse_trailing_remarks[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 2, lambda_1568, lambda_1571, TAIL_CALL,
  POS(4621, 3)
};

static TAB_NUM t_lambda_1568[] = {
  2, // locals
  0, // parameters
  // text == "@nl;" && subgroups.is_defined
  var_std__equal, 2, var_text, string_2, 1, LOCAL(1),
  // text == "@nl;" && subgroups.is_defined
  var_std__and, 2, LOCAL(1), lambda_1569, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_1570, TAIL_CALL,
  POS(4623, 7),
  POS(4623, 7),
  POS(4622, 7)
};

static TAB_NUM t_lambda_1569[] = {
  1, // locals
  0, // parameters
  // is_defined
  var_is_defined, 1, var_subgroups, 1, LOCAL(1),
  // subgroups.is_defined
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(4623, 35),
  POS(4623, 25)
};

static TAB_NUM t_lambda_1570[] = {
  0, // locals
  0, // parameters
  // parse_line_remarks_without_prefix
  func_parse_line_remarks_without_prefix, 0, TAIL_CALL,
  POS(4625, 9)
};

static TAB_NUM t_lambda_1571[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_1572, TAIL_CALL,
  POS(4626, 7)
};

static TAB_NUM t_lambda_1572[] = {
  0, // locals
  0, // parameters
  // !expected "trailing remarks"
  LET, 1, str_trailing_remarks, 1, var_expected,
  // !at text
  LET, 1, var_text, 1, var_at,
  // parse_line_end_and_line_remarks
  func_parse_line_end_and_line_remarks, 0, TAIL_CALL,
  POS(4629, 9),
  POS(4630, 9),
  POS(4631, 9)
};

static TAB_NUM t_func_parse_line_end_and_line_remarks[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_4634_1_position,
  // parse_trailing_remark !text $trailing_remark
  func_parse_trailing_remark, 0, 2, var_text, var_4635_29_trailing_remark,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_76_text_is_defined, lambda_1577, TAIL_CALL,
  POS(4634, 3),
  POS(4635, 3),
  POS(4637, 10),
  POS(4636, 3)
};

static TAB_NUM t_lambda_76_text_is_defined[] = {
  1, // locals
  0, // parameters
  // parse_line_remarks !text $line_remarks
  func_parse_line_remarks, 0, 2, var_text, var_4638_26_line_remarks,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1573, lambda_1576, TAIL_CALL,
  POS(4638, 7),
  POS(4640, 14),
  POS(4639, 7)
};

static TAB_NUM t_lambda_1573[] = {
  1, // locals
  0, // parameters
  // is_defined
  var_is_defined, 1, var_4638_26_line_remarks, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1574, lambda_1575, TAIL_CALL,
  POS(4643, 26),
  POS(4642, 11)
};

static TAB_NUM t_lambda_1574[] = {
  1, // locals
  0, // parameters
  // funky_types::line_end_and_line_remarks
  LET, -4, var_funky_types__line_end_and_line_remarks, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_4634_1_position, var_funky__remark_of, var_4635_29_trailing_remark, var_funky__remarks_of, var_4638_26_line_remarks, LOCAL(1),
  // 
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(4646, 15),
  POS(4644, 15)
};

static TAB_NUM t_lambda_1575[] = {
  0, // locals
  0, // parameters
  //  text trailing_remark
  LET, 2, var_text, var_4635_29_trailing_remark, TAIL_CALL,
  POS(4651, 15)
};

static TAB_NUM t_lambda_1576[] = {
  0, // locals
  0, // parameters
  //  undefined line_remarks
  LET, 2, var_undefined, var_4638_26_line_remarks, TAIL_CALL,
  POS(4652, 11)
};

static TAB_NUM t_lambda_1577[] = {
  0, // locals
  0, // parameters
  //  undefined trailing_remark
  LET, 2, var_undefined, var_4635_29_trailing_remark, TAIL_CALL,
  POS(4653, 7)
};

static TAB_NUM t_func_parse_trailing_remark[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 3, lambda_1578, lambda_1581, lambda_1583, TAIL_CALL,
  POS(4656, 3)
};

static TAB_NUM t_lambda_1578[] = {
  3, // locals
  0, // parameters
  // text(1) == ' '
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == ' '
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_1579, 1, LOCAL(3),
  // 
  LET, 2, LOCAL(3), lambda_1580, TAIL_CALL,
  POS(4659, 9),
  POS(4659, 9),
  POS(4658, 9),
  POS(4657, 7)
};

static TAB_NUM t_lambda_1579[] = {
  2, // locals
  0, // parameters
  // text(2) == '#'
  var_text, 1, num_2, 1, LOCAL(1),
  // text(2) == '#'
  var_std__equal, 2, LOCAL(1), chr_35, 1, LOCAL(2),
  // text(2) == '#'
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(4660, 9),
  POS(4660, 9),
  POS(4660, 9)
};

static TAB_NUM t_lambda_1580[] = {
  0, // locals
  0, // parameters
  // range &text 3 -1
  var_range, 3, var_text, num_3, minus_num_1, 1, var_text,
  // parse_spaced_remark_without_prefix
  func_parse_spaced_remark_without_prefix, 0, TAIL_CALL,
  POS(4662, 9),
  POS(4663, 9)
};

static TAB_NUM t_lambda_1581[] = {
  2, // locals
  0, // parameters
  // text(1) == '@nl;'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '@nl;'
  var_std__equal, 2, LOCAL(1), chr_10, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_1582, TAIL_CALL,
  POS(4665, 7),
  POS(4665, 7),
  POS(4664, 7)
};

static TAB_NUM t_lambda_1582[] = {
  0, // locals
  0, // parameters
  //  text undefined
  LET, 2, var_text, var_undefined, TAIL_CALL,
  POS(4666, 9)
};

static TAB_NUM t_lambda_1583[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_1584, TAIL_CALL,
  POS(4667, 7)
};

static TAB_NUM t_lambda_1584[] = {
  0, // locals
  0, // parameters
  // syntax_error "trailing remark"
  func_syntax_error, 1, str_trailing_remark, TAIL_CALL,
  POS(4670, 9)
};

static TAB_NUM t_func_parse_line_remarks[] = {
  1, // locals
  0, // parameters
  // text == "@nl;":
  var_std__equal, 2, var_text, string_2, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1585, lambda_1588, TAIL_CALL,
  POS(4674, 5),
  POS(4673, 3)
};

static TAB_NUM t_lambda_1585[] = {
  1, // locals
  0, // parameters
  // $multiline_remark parse_groups(funky::parse_multiline_remark_group)
  func_parse_groups, 1, var_funky__parse_multiline_remark_group, 1, var_4675_1_multiline_remark,
  // $error find_first(multiline_remark is_an_error)
  var_find_first, 2, var_4675_1_multiline_remark, var_is_an_error, 1, var_4676_1_error,
  // is_an_error
  var_is_an_error, 1, var_4676_1_error, 1, LOCAL(1),
  // if error.is_an_error
  var_if, 3, LOCAL(1), lambda_1586, lambda_1587, TAIL_CALL,
  POS(4675, 7),
  POS(4676, 7),
  POS(4677, 16),
  POS(4677, 7)
};

static TAB_NUM t_lambda_1586[] = {
  0, // locals
  0, // parameters
  //  undefined error
  LET, 2, var_undefined, var_4676_1_error, TAIL_CALL,
  POS(4678, 11)
};

static TAB_NUM t_lambda_1587[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, string_1, var_4675_1_multiline_remark, TAIL_CALL,
  POS(4679, 11)
};

static TAB_NUM t_lambda_1588[] = {
  0, // locals
  0, // parameters
  // syntax_error "valid input characters or line end"
  func_syntax_error, 1, str_valid_input_char, TAIL_CALL,
  POS(4683, 7)
};

static TAB_NUM t_func_parse_line_remarks_without_prefix[] = {
  1, // locals
  0, // parameters
  // $multiline_remark parse_groups(funky::parse_multiline_remark_group)
  func_parse_groups, 1, var_funky__parse_multiline_remark_group, 1, var_4686_1_multiline_remark,
  // $error find_first(multiline_remark is_an_error)
  var_find_first, 2, var_4686_1_multiline_remark, var_is_an_error, 1, var_4687_1_error,
  // is_an_error
  var_is_an_error, 1, var_4687_1_error, 1, LOCAL(1),
  // if error.is_an_error
  var_if, 3, LOCAL(1), lambda_1589, lambda_1590, TAIL_CALL,
  POS(4686, 3),
  POS(4687, 3),
  POS(4688, 12),
  POS(4688, 3)
};

static TAB_NUM t_lambda_1589[] = {
  0, // locals
  0, // parameters
  //  undefined error
  LET, 2, var_undefined, var_4687_1_error, TAIL_CALL,
  POS(4689, 7)
};

static TAB_NUM t_lambda_1590[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, string_1, var_4686_1_multiline_remark, TAIL_CALL,
  POS(4690, 7)
};

static TAB_NUM t_func_parse_spaced_remark_without_prefix[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_4695_1_position,
  // !str text
  LET, 1, var_text, 1, var_str,
  // parse_remark_text !text $remark_text
  func_parse_remark_text, 0, 2, var_text, var_4697_25_remark_text,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1591, lambda_1592, TAIL_CALL,
  POS(4695, 3),
  POS(4696, 3),
  POS(4697, 3),
  POS(4699, 10),
  POS(4698, 3)
};

static TAB_NUM t_lambda_1591[] = {
  1, // locals
  0, // parameters
  // funky_types::remark
  LET, -3, var_funky_types__remark, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_4695_1_position, var_funky__text_of, var_4697_25_remark_text, LOCAL(1),
  // 
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(4702, 7),
  POS(4700, 7)
};

static TAB_NUM t_lambda_1592[] = {
  0, // locals
  0, // parameters
  //  undefined remark_text
  LET, 2, var_undefined, var_4697_25_remark_text, TAIL_CALL,
  POS(4706, 7)
};

static TAB_NUM t_func_parse_multiline_remark[] = {
  2, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_4709_1_position,
  // text(1) == '#':
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '#':
  var_std__equal, 2, LOCAL(1), chr_35, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_1593, lambda_1597, TAIL_CALL,
  POS(4709, 3),
  POS(4711, 5),
  POS(4711, 5),
  POS(4710, 3)
};

static TAB_NUM t_lambda_1593[] = {
  1, // locals
  0, // parameters
  // range &text 2 -1
  var_range, 3, var_text, num_2, minus_num_1, 1, var_text,
  // !str text
  LET, 1, var_text, 1, var_str,
  // parse_remark_text !text $remark_text
  func_parse_remark_text, 0, 2, var_text, var_4714_25_remark_text,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_77_text_is_defined, lambda_1596, TAIL_CALL,
  POS(4712, 7),
  POS(4713, 7),
  POS(4714, 7),
  POS(4716, 14),
  POS(4715, 7)
};

static TAB_NUM t_lambda_77_text_is_defined[] = {
  1, // locals
  0, // parameters
  // parse_some_remark_lines !text $some_remark_lines
  func_parse_some_remark_lines, 0, 2, var_text, var_4717_31_some_remark_lines,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1594, lambda_1595, TAIL_CALL,
  POS(4717, 11),
  POS(4719, 18),
  POS(4718, 11)
};

static TAB_NUM t_lambda_1594[] = {
  1, // locals
  0, // parameters
  // funky_types::multiline_remark
  LET, -4, var_funky_types__multiline_remark, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_4709_1_position, var_funky__text_of, var_4714_25_remark_text, var_funky__lines_of, var_4717_31_some_remark_lines, LOCAL(1),
  // 
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(4722, 15),
  POS(4720, 15)
};

static TAB_NUM t_lambda_1595[] = {
  0, // locals
  0, // parameters
  //  undefined some_remark_lines
  LET, 2, var_undefined, var_4717_31_some_remark_lines, TAIL_CALL,
  POS(4727, 15)
};

static TAB_NUM t_lambda_1596[] = {
  0, // locals
  0, // parameters
  //  undefined remark_text
  LET, 2, var_undefined, var_4714_25_remark_text, TAIL_CALL,
  POS(4728, 11)
};

static TAB_NUM t_lambda_1597[] = {
  0, // locals
  0, // parameters
  // syntax_error "'#'"
  func_syntax_error, 1, string_10, TAIL_CALL,
  POS(4730, 7)
};

static TAB_NUM t_func_parse_multiline_remark_without_prefix[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_4733_1_position,
  // !str text
  LET, 1, var_text, 1, var_str,
  // parse_remark_text !text $remark_text
  func_parse_remark_text, 0, 2, var_text, var_4735_25_remark_text,
  // is_defined:
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_78_text_is_defined, lambda_1600, TAIL_CALL,
  POS(4733, 3),
  POS(4734, 3),
  POS(4735, 3),
  POS(4737, 10),
  POS(4736, 3)
};

static TAB_NUM t_lambda_78_text_is_defined[] = {
  1, // locals
  0, // parameters
  // parse_some_remark_lines !text $some_remark_lines
  func_parse_some_remark_lines, 0, 2, var_text, var_4738_31_some_remark_lines,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1598, lambda_1599, TAIL_CALL,
  POS(4738, 7),
  POS(4740, 14),
  POS(4739, 7)
};

static TAB_NUM t_lambda_1598[] = {
  1, // locals
  0, // parameters
  // funky_types::multiline_remark
  LET, -4, var_funky_types__multiline_remark, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_4733_1_position, var_funky__text_of, var_4735_25_remark_text, var_funky__lines_of, var_4738_31_some_remark_lines, LOCAL(1),
  // 
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(4743, 11),
  POS(4741, 11)
};

static TAB_NUM t_lambda_1599[] = {
  0, // locals
  0, // parameters
  //  undefined some_remark_lines
  LET, 2, var_undefined, var_4738_31_some_remark_lines, TAIL_CALL,
  POS(4748, 11)
};

static TAB_NUM t_lambda_1600[] = {
  0, // locals
  0, // parameters
  //  undefined remark_text
  LET, 2, var_undefined, var_4735_25_remark_text, TAIL_CALL,
  POS(4749, 7)
};

static TAB_NUM t_func_parse_some_remark_lines[] = {
  0, // locals
  0, // parameters
  // cond
  var_cond, 2, lambda_1601, lambda_1604, TAIL_CALL,
  POS(4752, 3)
};

static TAB_NUM t_lambda_1601[] = {
  2, // locals
  0, // parameters
  // text == "@nl;" && subgroups.is_defined
  var_std__equal, 2, var_text, string_2, 1, LOCAL(1),
  // text == "@nl;" && subgroups.is_defined
  var_std__and, 2, LOCAL(1), lambda_1602, 1, LOCAL(2),
  // 
  LET, 2, LOCAL(2), lambda_1603, TAIL_CALL,
  POS(4754, 7),
  POS(4754, 7),
  POS(4753, 7)
};

static TAB_NUM t_lambda_1602[] = {
  1, // locals
  0, // parameters
  // is_defined
  var_is_defined, 1, var_subgroups, 1, LOCAL(1),
  // subgroups.is_defined
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(4754, 35),
  POS(4754, 25)
};

static TAB_NUM t_lambda_1603[] = {
  0, // locals
  0, // parameters
  // parse_remark_lines
  func_parse_remark_lines, 0, TAIL_CALL,
  POS(4756, 9)
};

static TAB_NUM t_lambda_1604[] = {
  0, // locals
  0, // parameters
  // 
  LET, 2, var_true, lambda_1605, TAIL_CALL,
  POS(4757, 7)
};

static TAB_NUM t_lambda_1605[] = {
  0, // locals
  0, // parameters
  //  text undefined
  LET, 2, var_text, var_undefined, TAIL_CALL,
  POS(4759, 9)
};

static TAB_NUM t_func_parse_remark_lines[] = {
  1, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_4762_1_position,
  // !str text
  LET, 1, var_text, 1, var_str,
  // parse_remark_text !text $remark_text
  func_parse_remark_text, 0, 2, var_text, var_4764_25_remark_text,
  // is_defined
  var_is_defined, 1, var_text, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1606, lambda_1607, TAIL_CALL,
  POS(4762, 3),
  POS(4763, 3),
  POS(4764, 3),
  POS(4766, 10),
  POS(4765, 3)
};

static TAB_NUM t_lambda_1606[] = {
  1, // locals
  0, // parameters
  // funky_types::remark_lines
  LET, -3, var_funky_types__remark_lines, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_4762_1_position, var_funky__text_of, var_4764_25_remark_text, LOCAL(1),
  // 
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(4769, 7),
  POS(4767, 7)
};

static TAB_NUM t_lambda_1607[] = {
  0, // locals
  0, // parameters
  //  undefined remark_text
  LET, 2, var_undefined, var_4764_25_remark_text, TAIL_CALL,
  POS(4773, 7)
};

static TAB_NUM t_func_parse_dummy_remark[] = {
  2, // locals
  0, // parameters
  // $position text
  LET, 1, var_text, 1, var_4776_1_position,
  // text(1) == '@nl;'
  var_text, 1, num_1, 1, LOCAL(1),
  // text(1) == '@nl;'
  var_std__equal, 2, LOCAL(1), chr_10, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_1608, lambda_1609, TAIL_CALL,
  POS(4776, 3),
  POS(4778, 5),
  POS(4778, 5),
  POS(4777, 3)
};

static TAB_NUM t_lambda_1608[] = {
  1, // locals
  0, // parameters
  // funky_types::dummy_remark
  LET, -2, var_funky_types__dummy_remark, var_funky__source_group_of, var_current_group, var_funky__source_position_of, var_4776_1_position, LOCAL(1),
  // 
  LET, 2, var_text, LOCAL(1), TAIL_CALL,
  POS(4781, 7),
  POS(4779, 7)
};

static TAB_NUM t_lambda_1609[] = {
  0, // locals
  0, // parameters
  // syntax_error "valid input characters or line end"
  func_syntax_error, 1, str_valid_input_char, TAIL_CALL,
  POS(4785, 7)
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
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_748}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_749}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_750}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_751}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_752}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_753}},
  {FLT_STRING_8, 23, {.str_8 = "a single value expected"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_754}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_755}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_key_value}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_sequence_expression}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_29_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_756}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_757}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_758}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_759}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_760}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_761}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_comma_operator}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_762}},
  {FLT_CHARACTER, 0, {.value = 44}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_763}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_764}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_765}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_766}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_767}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_768}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_769}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_770}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_771}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_772}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_comma}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_comma_expression}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_30_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_773}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_774}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_775}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_776}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_777}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_778}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_conditional_expression}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_31_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_779}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_780}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_781}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_782}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_783}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_logical_operator}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_784}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_785}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_786}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_787}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_788}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_789}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_790}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_791}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_792}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_793}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_794}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_795}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_and}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_and_expression}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_32_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_796}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_797}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_798}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_799}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_800}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_801}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_and_operator}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_802}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_803}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_804}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_805}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_806}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_807}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_808}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_or}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_or_expression}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_33_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_809}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_810}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_811}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_812}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_813}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_814}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_or_operator}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_815}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_816}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_817}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_818}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_819}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_820}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_821}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_named_operator_expression}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_34_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_822}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_823}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_824}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_825}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_826}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_optional_named_operator}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_827}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_828}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_829}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_830}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_831}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_named_operator_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_35_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_832}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_833}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_834}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_835}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_836}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_837}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_838}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_range_expression}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_36_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_839}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_840}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_841}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_842}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_843}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_range_operator}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_844}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_845}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_846}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_847}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_848}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_849}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_850}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_851}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_852}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_853}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_range}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_relational_expression}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_37_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_854}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_855}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_856}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_857}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_858}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_859}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_comparison_operator}},
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
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_898}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_899}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_900}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_901}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_902}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_903}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_904}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_905}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_equal}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_not_equal}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_less_equal}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_less_than}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_greater_equal}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_greater_than}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_tagged_bit_expression}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_38_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_906}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_907}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_908}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_909}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_910}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_911}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_bit_expression}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_39_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_912}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_913}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_914}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_915}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_916}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_bit_operator}},
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
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_945}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_946}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_947}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_948}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_949}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_950}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_951}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_952}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_shift_left}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_shift_right}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_bit_and}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_bit_and2}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_40_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_953}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_954}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_955}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_956}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_957}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_958}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_bit_and_operator}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_959}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_960}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_961}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_962}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_963}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_964}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_965}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_966}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_bit_or}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_bit_or2}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_41_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_967}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_968}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_969}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_970}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_971}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_972}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_bit_or_operator}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_973}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_974}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_975}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_976}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_977}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_978}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_979}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_980}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_bit_xor}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_bit_xor2}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_42_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_981}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_982}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_983}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_984}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_985}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_986}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_bit_xor_operator}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_987}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_988}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_989}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_990}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_991}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_992}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_993}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_994}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_tagged_additive_expression}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_43_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_995}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_996}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_997}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_998}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_999}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1000}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_additive_expression}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_44_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1001}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1002}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1003}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1004}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1005}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_additive_operator}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1006}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1007}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1008}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1009}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1010}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1011}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1012}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1013}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1014}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1015}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1016}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1017}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1018}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1019}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_plus}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_plus2}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_45_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1020}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1021}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1022}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1023}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1024}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1025}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_minus}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_minus2}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_46_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1026}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1027}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1028}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1029}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1030}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1031}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_multiplicative_expression}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_47_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1032}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1033}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1034}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1035}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1036}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_multiplicative_operator}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1037}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1038}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1039}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1040}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1041}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1042}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1043}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1044}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1045}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1046}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1047}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1048}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1049}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1050}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_times}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_times2}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_48_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1051}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1052}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1053}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1054}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1055}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1056}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_over}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_over2}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_49_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1057}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1058}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1059}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1060}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1061}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1062}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_an_expression}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1063}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1064}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1065}},
  {FLT_CHARACTER, 0, {.value = 39}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1066}},
  {FLT_CHARACTER, 0, {.value = 64}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1067}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1068}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1069}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1070}},
  {FLT_CHARACTER, 0, {.value = 34}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1071}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1072}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1073}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1074}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1075}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1076}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1077}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1078}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1079}},
  {FLT_CHARACTER, 0, {.value = 96}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1080}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1081}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1082}},
  {FLT_STRING_8, 13, {.str_8 = "an expression"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_parenthesed_expression_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_50_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1083}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1084}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1085}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1086}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1087}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_inline_expression}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1088}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1089}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1090}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1091}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1092}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1093}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1094}},
  {FLT_STRING_8, 17, {.str_8 = "inline expression"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_backquoted_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1095}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1096}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_negation_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1097}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1098}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_multiline_operator}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_51_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1099}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1100}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1101}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1102}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1103}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1104}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_multiline_plus_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_multiline_minus_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_52_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1105}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1106}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1107}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1108}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1109}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1110}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_multiline_minus_with_remark_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_53_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1111}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1112}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1113}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1114}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1115}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1116}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_multiline_times_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_multiline_over_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1117}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1118}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_multiline_over_with_remark_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_54_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1119}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1120}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1121}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1122}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1123}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1124}},
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
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1125}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1126}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1127}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1128}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1129}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1130}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_multiline_bit_and_with_remark_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_56_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1131}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1132}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1133}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1134}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1135}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1136}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_multiline_bit_or_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_multiline_bit_xor_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_multiline_assign_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_inline_arguments}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1137}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1138}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1139}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1140}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1141}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1142}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1143}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1144}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1145}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1146}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1147}},
  {FLT_STRING_8, 16, {.str_8 = "inline arguments"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1148}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1149}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1150}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1151}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1152}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1153}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_inline_attribute_value_pair_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_57_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1154}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1155}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1156}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1157}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1158}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_inline_method_value_pair_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_58_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1159}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1160}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1161}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1162}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1163}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_expression_and_inline_arguments}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_59_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1164}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1165}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1166}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1167}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1168}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_spaced_inline_arguments}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1169}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1170}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1171}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1172}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_spaced_inline_arguments_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1173}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1174}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_numeric_literal}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1175}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1176}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_digits}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1177}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1178}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1179}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1180}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1181}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1182}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1183}},
  {FLT_STRING_8, 6, {.str_8 = "digits"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_maybe_non_decimal_numeric_literal}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1184}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1185}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1186}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1187}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1188}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1189}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1190}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1191}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1192}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1193}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1194}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1195}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1196}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1197}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1198}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1199}},
  {FLT_CHARACTER, 0, {.value = 120}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1200}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1201}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1202}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_more_decimal_digits}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1203}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1204}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1205}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1206}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1207}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1208}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1209}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1210}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1211}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1212}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1213}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1214}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1215}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1216}},
  {FLT_CHARACTER, 0, {.value = 69}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1217}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1218}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1219}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_more_fraction_digits}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1220}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1221}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1222}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1223}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1224}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1225}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1226}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1227}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1228}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_exponent}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1229}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1230}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1231}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1232}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1233}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1234}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1235}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1236}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1237}},
  {FLT_STRING_8, 8, {.str_8 = "exponent"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_exponent_digits}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1238}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1239}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1240}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1241}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1242}},
  {FLT_STRING_8, 15, {.str_8 = "exponent digits"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_more_exponent_digits}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1243}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1244}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1245}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1246}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1247}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_binary_digits}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1248}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1249}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1250}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1251}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1252}},
  {FLT_STRING_8, 13, {.str_8 = "binary digits"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_more_binary_digits}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1253}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1254}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1255}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1256}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1257}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1258}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1259}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1260}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1261}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_octal_digits}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1262}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1263}},
  {FLT_CHARACTER, 0, {.value = 55}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1264}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1265}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1266}},
  {FLT_STRING_8, 12, {.str_8 = "octal digits"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_more_octal_digits}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1267}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1268}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1269}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1270}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1271}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1272}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1273}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1274}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1275}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_hex_digits}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1276}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1277}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1278}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1279}},
  {FLT_CHARACTER, 0, {.value = 102}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1280}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1281}},
  {FLT_CHARACTER, 0, {.value = 70}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1282}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1283}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1284}},
  {FLT_STRING_8, 10, {.str_8 = "hex digits"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_more_hex_digits}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1285}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1286}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1287}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1288}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1289}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1290}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1291}},
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
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_special_character_literal}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1302}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1303}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1304}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1305}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1306}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1307}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1308}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1309}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1310}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1311}},
  {FLT_STRING_8, 25, {.str_8 = "special character literal"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_at_character_literal_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_named_character_literal_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_60_text_is_defined}},
  {FLT_CHARACTER, 0, {.value = 59}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1312}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1313}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1314}},
  {FLT_STRING_8, 12, {.str_8 = "single quote"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1315}},
  {FLT_STRING_8, 3, {.str_8 = "';'"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1316}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_numeric_character_literal}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_61_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1317}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1318}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1319}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1320}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1321}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_character_literal_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_62_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1322}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1323}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1324}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_character}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1325}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1326}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1327}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1328}},
  {FLT_STRING_8, 9, {.str_8 = "character"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_more_character_name_characters}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1329}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1330}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1331}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1332}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1333}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1334}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1335}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1336}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1337}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_string_literal_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1338}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1339}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_string_components}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1340}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1341}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1342}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1343}},
  {FLT_STRING_8, 17, {.str_8 = "string components"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1344}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1345}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1346}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1347}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1348}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1349}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_some_string_components}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_63_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1350}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1351}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1352}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1353}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1354}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_string_component}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1355}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1356}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1357}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1358}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1359}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1360}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1361}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1362}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1363}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1364}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1365}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1366}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1367}},
  {FLT_STRING_8, 16, {.str_8 = "string component"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_character_sequence}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1368}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1369}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_string_characters}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1370}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1371}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1372}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1373}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1374}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1375}},
  {FLT_STRING_8, 17, {.str_8 = "string characters"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_more_string_characters}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1376}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1377}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1378}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1379}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1380}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1381}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_multiline_string_literal_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1382}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1383}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_multiline_string_components}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1384}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1385}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1386}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1387}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1388}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1389}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1390}},
  {FLT_STRING_8, 27, {.str_8 = "multiline string components"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1391}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1392}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1393}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1394}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1395}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1396}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_newline_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_some_string_line_components}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_64_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1397}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1398}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1399}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1400}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1401}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_string_line_component}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1402}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1403}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1404}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1405}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1406}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1407}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1408}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1409}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1410}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1411}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1412}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1413}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1414}},
  {FLT_STRING_8, 21, {.str_8 = "string line component"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_string_line_end_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_at_character_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_tagged_empty_character_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1415}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1416}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_empty_character_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_escape_expression_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_65_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1417}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1418}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1419}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_special_character}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1420}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1421}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1422}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1423}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1424}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1425}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1426}},
  {FLT_STRING_8, 17, {.str_8 = "special character"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_named_character_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_66_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1427}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1428}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1429}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_numeric_character}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_67_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1430}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1431}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1432}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_string_line_character_sequence}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1433}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1434}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_string_line_characters}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1435}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1436}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1437}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1438}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1439}},
  {FLT_STRING_8, 22, {.str_8 = "string line characters"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_more_string_line_characters}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1440}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1441}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1442}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1443}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1444}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_unique_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1445}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1446}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_attribute_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1447}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1448}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_attribute_with_setter_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1449}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1450}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_body}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_68_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_69_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1451}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1452}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1453}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1454}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_optional_line_end_remark}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1455}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1456}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1457}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1458}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1459}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_body_statements}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1460}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1461}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1462}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1463}},
  {FLT_STRING_8, 15, {.str_8 = "body statements"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1464}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1465}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1466}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1467}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1468}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1469}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_line_end_statement_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_inline_body_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_70_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1470}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1471}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1472}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1473}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1474}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_statements}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1475}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1476}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1477}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1478}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1479}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_inline_parameters}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1480}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1481}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1482}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1483}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1484}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1485}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1486}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1487}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1488}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1489}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1490}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_some_inline_parameters}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1491}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1492}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1493}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1494}},
  {FLT_STRING_8, 22, {.str_8 = "some inline parameters"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_one_or_more_inline_parameters}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_71_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1495}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1496}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1497}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1498}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1499}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_maybe_more_inline_parameters}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1500}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1501}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1502}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1503}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1504}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1505}},
  {FLT_STRING_8, 28, {.str_8 = "maybe more inline parameters"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_parameter_name}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1506}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1507}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1508}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1509}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1510}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1511}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1512}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1513}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1514}},
  {FLT_STRING_8, 14, {.str_8 = "parameter name"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_open_parameters_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_72_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1515}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1516}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1517}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1518}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1519}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1520}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_inline_parameter}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_73_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1521}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1522}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1523}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_parameter}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_74_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_75_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1524}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1525}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1526}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1527}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_parameter_option}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1528}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1529}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1530}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1531}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1532}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1533}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1534}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1535}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1536}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1537}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_myself_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_rest_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_initial_value_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1538}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1539}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_simple_operand}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1540}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1541}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1542}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1543}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1544}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1545}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1546}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1547}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1548}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1549}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1550}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1551}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1552}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1553}},
  {FLT_STRING_8, 14, {.str_8 = "simple operand"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_close_parameters_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1554}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1555}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_return_expression_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1556}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1557}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_return_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_remark}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1558}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1559}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1560}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1561}},
  {FLT_STRING_8, 3, {.str_8 = "'#'"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_remark_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1562}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1563}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_remark_text}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1564}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1565}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1566}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1567}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_trailing_remarks}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1568}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1569}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1570}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1571}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1572}},
  {FLT_STRING_8, 16, {.str_8 = "trailing remarks"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_line_end_and_line_remarks}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_76_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1573}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1574}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1575}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1576}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1577}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_trailing_remark}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1578}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1579}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1580}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1581}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1582}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1583}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1584}},
  {FLT_STRING_8, 15, {.str_8 = "trailing remark"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_line_remarks}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1585}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1586}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1587}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1588}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_line_remarks_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1589}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1590}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_spaced_remark_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1591}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1592}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_multiline_remark}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1593}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_77_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1594}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1595}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1596}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1597}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_multiline_remark_without_prefix}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_78_text_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1598}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1599}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1600}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_some_remark_lines}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1601}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1602}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1603}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1604}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1605}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_remark_lines}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1606}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1607}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_dummy_remark}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1608}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1609}}
};

static ATTRIBUTE_DEFINITION std_types__line__attributes[] = {
  {-var_funky__line_no_of, -var_undefined}
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
    FOT_UNKNOWN, 0, 1,
    "line\000std_types", std_types__line__attributes,
    {.position = POS(17, 1)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "line_no_of\000funky", NULL,
    {.position = POS(17, 18)}
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
    "29_25_line\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_defined\000", NULL,
    {.position = POS(31, 10)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "first\000", NULL,
    {.position = POS(32, 8)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if\000", NULL,
    {.position = POS(30, 3)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "line_text_of\000funky", NULL,
    {.const_idx = -func_funky__line_text_of}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "35_23_line\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "second\000", NULL,
    {.position = POS(38, 8)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "split_source_into_lines\000funky", NULL,
    {.const_idx = -func_funky__split_source_into_lines}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "42_27_lines\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "split_into_indented_lines\000", NULL,
    {.position = POS(42, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "43_12_line_no\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "43_20_line\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "46_1_prev_line_no\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "dec\000", NULL,
    {.position = POS(48, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "less\000std", NULL,
    {.position = POS(50, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "or\000std", NULL,
    {.position = POS(50, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "next\000", NULL,
    {.position = POS(52, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "loop\000", NULL,
    {.position = POS(47, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "map\000", NULL,
    {.position = POS(43, 3)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "parse\000funky", NULL,
    {.const_idx = -func_funky__parse}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "62_31_left\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "62_36_right\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_undefined\000", NULL,
    {.position = POS(64, 16)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "min\000", NULL,
    {.position = POS(70, 18)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "60_1_min_indent\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "map_reduce\000", NULL,
    {.position = POS(61, 5)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "71_13_group\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "minus\000std", NULL,
    {.position = POS(76, 64)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "spaces\000", NULL,
    {.position = POS(76, 57)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "append\000", NULL,
    {.position = POS(76, 50)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "typed_tuple\000", NULL,
    {.position = POS(76, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "tuple\000", NULL,
    {.position = POS(78, 10)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "80_11_node\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_list\000", NULL,
    {.position = POS(83, 8)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_a_list\000", NULL,
    {.position = POS(86, 14)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "list\000", NULL,
    {.position = POS(88, 12)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "90_16_item\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "length_of\000", NULL,
    {.position = POS(91, 8)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000std", NULL,
    {.position = POS(91, 8)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "equal\000std", NULL,
    {.position = POS(95, 32)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "and\000std", NULL,
    {.position = POS(95, 18)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "string\000", NULL,
    {.position = POS(93, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "base_directory\000funky", NULL,
    {.position = POS(104, 16)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "error\000", NULL,
    {.position = POS(100, 5)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "108_16_parse_function\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "111_1_indent\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "split_into_groups\000", NULL,
    {.position = POS(116, 18)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "116_42_head\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "subgroups_of\000", NULL,
    {.position = POS(126, 24)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "127_1_node\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "134_15_parse_function\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "141_1_node\000", NULL
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
    {.position = POS(180, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "true\000", NULL,
    {.position = POS(188, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "cond\000", NULL,
    {.position = POS(176, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not\000std", NULL,
    {.position = POS(197, 8)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "416_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "417_18_head\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "420_33_statement_arguments\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "statement\000funky_types", NULL,
    {.position = POS(428, 15)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "source_group_of\000funky", NULL,
    {.position = POS(429, 18)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "source_position_of\000funky", NULL,
    {.position = POS(430, 18)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "head_of\000funky", NULL,
    {.position = POS(431, 18)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "arguments_of\000funky", NULL,
    {.position = POS(432, 18)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "471_12_expr\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "527_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "528_25_inline_head\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "531_35_some_inline_arguments\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "inline_statement\000funky_types", NULL,
    {.position = POS(539, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "attribute_value_pair\000funky_types", NULL,
    {.position = POS(581, 14)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "type_function\000funky_types", NULL,
    {.position = POS(584, 14)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "method_value_pair\000funky_types", NULL,
    {.position = POS(587, 14)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "591_0_derived_node\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "593_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "595_24_identifier\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "598_27_some_argument\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "pair\000funky_types", NULL,
    {.position = POS(603, 38)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "default_value\000", NULL,
    {.position = POS(603, 11)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "identifier_of\000funky", NULL,
    {.position = POS(606, 14)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "argument_of\000funky", NULL,
    {.position = POS(607, 14)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "684_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "686_18_name\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "689_30_optional_version\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "695_30_trailing_remarks\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "namespace_instruction\000funky_types", NULL,
    {.position = POS(700, 19)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "name_of\000funky", NULL,
    {.position = POS(703, 22)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "version_of\000funky", NULL,
    {.position = POS(704, 22)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "remarks_of\000funky", NULL,
    {.position = POS(705, 22)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "713_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "715_22_filename\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "721_30_trailing_remarks\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "require_instruction\000funky_types", NULL,
    {.position = POS(726, 15)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "filename_of\000funky", NULL,
    {.position = POS(729, 18)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "737_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "739_18_name\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "742_30_optional_version\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "748_30_trailing_remarks\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "using_instruction\000funky_types", NULL,
    {.position = POS(753, 19)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "766_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "767_19_alias\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "770_24_equal_sign\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "774_18_name\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "780_30_trailing_remarks\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "alias_instruction\000funky_types", NULL,
    {.position = POS(785, 23)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "alias_of\000funky", NULL,
    {.position = POS(788, 26)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "sign_of\000funky", NULL,
    {.position = POS(789, 26)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "800_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "802_18_name\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "808_21_version\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "814_30_trailing_remarks\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "resolve_instruction\000funky_types", NULL,
    {.position = POS(819, 23)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "834_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "848_20_pragma\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "854_30_trailing_remarks\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "allow_instruction\000funky_types", NULL,
    {.position = POS(859, 39)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "pragma_of\000funky", NULL,
    {.position = POS(862, 42)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "949_18_name\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "989_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "990_33_major\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "997_19_minor\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "version_no\000funky_types", NULL,
    {.position = POS(1002, 15)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "major_of\000funky", NULL,
    {.position = POS(1005, 18)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "minor_of\000funky", NULL,
    {.position = POS(1006, 18)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1034_1_position\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "unstable\000funky_types", NULL,
    {.position = POS(1053, 35)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "allow_hidden\000funky_types", NULL,
    {.position = POS(1097, 5)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1102_1_position\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "allow_unused\000funky_types", NULL,
    {.position = POS(1117, 27)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1134_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1135_40_identifier\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1143_13_extensions\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "functor\000funky_types", NULL,
    {.position = POS(1148, 11)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "extensions_of\000funky", NULL,
    {.position = POS(1152, 14)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1157_12_expr\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1195_42_function_call\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1198_24_extensions\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1214_45_attribute_access\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1217_24_extensions\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1233_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1235_24_identifier\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1238_31_inline_extensions\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1252_12_expr\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1279_12_expr\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1301_42_function_call\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1304_31_inline_extensions\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1320_45_attribute_access\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1323_31_inline_extensions\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "io_call\000funky_types", NULL,
    {.position = POS(1342, 5)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1347_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1348_39_optional_inline_arguments\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "function_call\000funky_types", NULL,
    {.position = POS(1353, 7)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1360_12_expr\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1378_30_inline_arguments\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1391_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1392_37_spaced_inline_arguments\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "inline_return\000funky_types", NULL,
    {.position = POS(1397, 7)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1404_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1406_24_identifier\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "attribute_access\000funky_types", NULL,
    {.position = POS(1411, 7)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1437_12_expr\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1467_12_expr\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1501_28_more_arguments\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1510_38_more_statement_arguments\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1571_22_argument\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1574_28_some_arguments\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1590_22_argument\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1593_38_some_statement_arguments\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1611_1_line_start_arguments\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_an_error\000", NULL,
    {.position = POS(1612, 46)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1612_1_error\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "find_first\000", NULL,
    {.position = POS(1612, 14)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1622_1_line_start_arguments\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1623_1_error\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1631_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1632_1_line_start_arguments\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1633_1_error\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1644_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1645_42_spaced_remark\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1650_1_line_start_arguments\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1651_1_error\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "remark_and_multiline_function_call\000funky_types", NULL,
    {.position = POS(1656, 15)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "remark_of\000funky", NULL,
    {.position = POS(1659, 18)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1898_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1900_18_name\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "dummy_definition\000funky_types", NULL,
    {.position = POS(1905, 7)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1912_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1913_40_identifier\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "variable\000funky_types", NULL,
    {.position = POS(1918, 7)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1925_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1927_34_versioned_identifier\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "definition\000funky_types", NULL,
    {.position = POS(1932, 7)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1939_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1941_24_identifier\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1944_31_inline_extensions\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "redefinition\000funky_types", NULL,
    {.position = POS(1949, 11)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1958_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1960_24_identifier\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1963_31_inline_extensions\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "update\000funky_types", NULL,
    {.position = POS(1968, 11)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1978_0_derived_node\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1980_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1981_33_sequence_expression\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1984_32_key_value_operator\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "expression\000funky_types", NULL,
    {.position = POS(1992, 42)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "expression_of\000funky", NULL,
    {.position = POS(1995, 18)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "operator_of\000funky", NULL,
    {.position = POS(1996, 18)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2022_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2023_1_line_start_arguments\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2025_1_error\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "key_value\000funky_types", NULL,
    {.position = POS(2033, 17)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2047_0_derived_node\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2049_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2050_36_conditional_expression\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2053_28_comma_operator\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "sequence_expression\000funky_types", NULL,
    {.position = POS(2061, 42)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "comma\000funky_types", NULL,
    {.position = POS(2097, 26)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2101_0_derived_node\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2103_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2104_33_sequence_expression\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2107_28_comma_operator\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2125_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2126_39_named_operator_expression\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2129_30_logical_operator\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "and\000funky_types", NULL,
    {.position = POS(2171, 24)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2175_0_derived_node\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2177_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2178_39_named_operator_expression\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2181_26_and_operator\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "or\000funky_types", NULL,
    {.position = POS(2214, 23)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2218_0_derived_node\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2220_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2221_39_named_operator_expression\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2224_25_or_operator\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2257_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2258_30_range_expression\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2261_37_optional_named_operator\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2301_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2303_24_identifier\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2311_30_range_expression\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "named_operator\000funky_types", NULL,
    {.position = POS(2316, 19)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2329_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2330_35_relational_expression\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2333_28_range_operator\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "range\000funky_types", NULL,
    {.position = POS(2373, 31)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2377_0_derived_node\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2379_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2380_28_bit_expression\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2383_33_comparison_operator\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "equal\000funky_types", NULL,
    {.position = POS(2497, 31)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not_equal\000funky_types", NULL,
    {.position = POS(2500, 31)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "less_equal\000funky_types", NULL,
    {.position = POS(2503, 31)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "less_than\000funky_types", NULL,
    {.position = POS(2506, 31)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "greater_equal\000funky_types", NULL,
    {.position = POS(2509, 31)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "greater_than\000funky_types", NULL,
    {.position = POS(2512, 31)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2516_0_derived_node\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2518_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2519_33_additive_expression\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2522_26_bit_operator\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "tagged_bit_expression\000funky_types", NULL,
    {.position = POS(2530, 42)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2540_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2541_33_additive_expression\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2544_26_bit_operator\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "shift_left\000funky_types", NULL,
    {.position = POS(2639, 36)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "shift_right\000funky_types", NULL,
    {.position = POS(2642, 36)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "bit_and\000funky_types", NULL,
    {.position = POS(2645, 18)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2649_0_derived_node\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2651_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2652_33_additive_expression\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2655_30_bit_and_operator\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "bit_and2\000funky_types", NULL,
    {.position = POS(2663, 42)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "bit_or\000funky_types", NULL,
    {.position = POS(2692, 17)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2696_0_derived_node\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2698_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2699_33_additive_expression\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2702_29_bit_or_operator\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "bit_or2\000funky_types", NULL,
    {.position = POS(2710, 42)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "bit_xor\000funky_types", NULL,
    {.position = POS(2739, 18)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2743_0_derived_node\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2745_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2746_33_additive_expression\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2749_30_bit_xor_operator\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "bit_xor2\000funky_types", NULL,
    {.position = POS(2757, 42)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2787_0_derived_node\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2789_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2790_39_multiplicative_expression\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2793_31_additive_operator\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "tagged_additive_expression\000funky_types", NULL,
    {.position = POS(2801, 42)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2811_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2812_39_multiplicative_expression\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2815_31_additive_operator\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000funky_types", NULL,
    {.position = POS(2865, 15)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2869_0_derived_node\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2871_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2872_39_multiplicative_expression\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2875_31_additive_operator\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus2\000funky_types", NULL,
    {.position = POS(2883, 42)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "minus\000funky_types", NULL,
    {.position = POS(2893, 16)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2897_0_derived_node\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2899_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2900_39_multiplicative_expression\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2903_31_additive_operator\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "minus2\000funky_types", NULL,
    {.position = POS(2911, 42)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2921_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2922_27_an_expression\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2925_37_multiplicative_operator\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "times\000funky_types", NULL,
    {.position = POS(2975, 16)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2979_0_derived_node\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2981_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2982_27_an_expression\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2985_37_multiplicative_operator\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "times2\000funky_types", NULL,
    {.position = POS(2993, 42)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "over\000funky_types", NULL,
    {.position = POS(3003, 15)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3007_0_derived_node\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3009_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3010_27_an_expression\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3013_37_multiplicative_operator\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "over2\000funky_types", NULL,
    {.position = POS(3021, 42)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3078_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3079_31_inline_expression\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3085_26_inline_calls\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "parenthesed_expression\000funky_types", NULL,
    {.position = POS(3090, 15)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "calls_of\000funky", NULL,
    {.position = POS(3094, 18)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3122_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3123_27_an_expression\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "backquoted\000funky_types", NULL,
    {.position = POS(3128, 7)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3135_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3136_27_an_expression\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "negation\000funky_types", NULL,
    {.position = POS(3141, 7)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3149_0_derived_node\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3151_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3152_29_trailing_remark\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3157_1_line_start_arguments\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3158_1_error\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "multiline_operator\000funky_types", NULL,
    {.position = POS(3163, 42)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "multiline_plus\000funky_types", NULL,
    {.position = POS(3173, 28)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3176_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3177_26_dummy_remark\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3182_1_line_start_arguments\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3183_1_error\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "multiline_minus\000funky_types", NULL,
    {.position = POS(3188, 15)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3198_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3199_20_remark\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3204_1_line_start_arguments\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3205_1_error\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "multiline_minus_with_remark\000funky_types", NULL,
    {.position = POS(3210, 15)}
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
    {.position = POS(3258, 28)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "multiline_shift_right\000funky_types", NULL,
    {.position = POS(3261, 28)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "multiline_equal\000funky_types", NULL,
    {.position = POS(3264, 28)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "multiline_not_equal\000funky_types", NULL,
    {.position = POS(3267, 28)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "multiline_less_equal\000funky_types", NULL,
    {.position = POS(3270, 28)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "multiline_less_than\000funky_types", NULL,
    {.position = POS(3273, 28)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "multiline_greater_equal\000funky_types", NULL,
    {.position = POS(3276, 28)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "multiline_greater_than\000funky_types", NULL,
    {.position = POS(3279, 28)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "multiline_and\000funky_types", NULL,
    {.position = POS(3282, 28)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "multiline_or\000funky_types", NULL,
    {.position = POS(3285, 28)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3288_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3289_26_dummy_remark\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3294_1_line_start_arguments\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3295_1_error\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "multiline_bit_and\000funky_types", NULL,
    {.position = POS(3300, 15)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3310_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3311_20_remark\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3316_1_line_start_arguments\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3317_1_error\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "multiline_bit_and_with_remark\000funky_types", NULL,
    {.position = POS(3322, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "multiline_bit_or\000funky_types", NULL,
    {.position = POS(3332, 28)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "multiline_bit_xor\000funky_types", NULL,
    {.position = POS(3335, 28)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "multiline_assign\000funky_types", NULL,
    {.position = POS(3338, 28)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3341_12_expr\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3378_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3380_24_identifier\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3386_24_expression\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "inline_attribute_value_pair\000funky_types", NULL,
    {.position = POS(3391, 15)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3402_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3404_24_identifier\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3410_24_expression\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "inline_method_value_pair\000funky_types", NULL,
    {.position = POS(3415, 15)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3426_24_expression\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3429_35_some_inline_arguments\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3448_30_inline_arguments\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3459_30_inline_arguments\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3468_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3470_20_digits\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "numeric_literal\000funky_types", NULL,
    {.position = POS(3475, 7)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "digits_of\000funky", NULL,
    {.position = POS(3478, 10)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "at_character_literal\000funky_types", NULL,
    {.position = POS(3743, 5)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3748_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3749_44_character_name\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "named_character_literal\000funky_types", NULL,
    {.position = POS(3758, 15)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3769_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3771_20_digits\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "numeric_character_literal\000funky_types", NULL,
    {.position = POS(3780, 15)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3791_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3793_23_character\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "character_literal\000funky_types", NULL,
    {.position = POS(3800, 11)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "character_of\000funky", NULL,
    {.position = POS(3803, 14)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3828_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3829_31_string_components\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "string_literal\000funky_types", NULL,
    {.position = POS(3834, 7)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "components_of\000funky", NULL,
    {.position = POS(3837, 10)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3841_12_expr\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3859_30_string_component\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3862_31_string_components\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3913_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3915_31_string_characters\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "character_sequence\000funky_types", NULL,
    {.position = POS(3920, 7)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "characters_of\000funky", NULL,
    {.position = POS(3923, 10)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3948_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3949_1_multiline_string_components\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3950_1_error\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3961_12_expr\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "newline\000funky_types", NULL,
    {.position = POS(3990, 5)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3995_35_string_line_component\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "3998_41_multiline_string_components\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "at_character\000funky_types", NULL,
    {.position = POS(4057, 5)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4062_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4063_44_empty_character\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "tagged_empty_character\000funky_types", NULL,
    {.position = POS(4068, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "escape_expression\000funky_types", NULL,
    {.position = POS(4080, 20)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4080_55_expression\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4106_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4107_44_character_name\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "named_character\000funky_types", NULL,
    {.position = POS(4114, 11)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4123_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4125_20_digits\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "numeric_character\000funky_types", NULL,
    {.position = POS(4132, 11)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4141_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4143_36_string_line_characters\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4176_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4177_30_trailing_remarks\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "unique\000funky_types", NULL,
    {.position = POS(4182, 7)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4189_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4190_30_trailing_remarks\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "attribute\000funky_types", NULL,
    {.position = POS(4195, 7)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4202_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4203_30_trailing_remarks\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "attribute_with_setter\000funky_types", NULL,
    {.position = POS(4208, 7)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4216_0_derived_node\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4218_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4219_31_inline_parameters\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4222_38_optional_line_end_remark\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4225_29_body_statements\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "body\000funky_types", NULL,
    {.position = POS(4230, 42)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "parameters_of\000funky", NULL,
    {.position = POS(4233, 18)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "statements_of\000funky", NULL,
    {.position = POS(4235, 18)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4254_12_expr\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4277_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4278_31_inline_parameters\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4284_30_inline_statement\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "inline_body\000funky_types", NULL,
    {.position = POS(4289, 15)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "statement_of\000funky", NULL,
    {.position = POS(4293, 18)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4302_1_parameters_or_statement\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4303_1_error\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4313_12_expr\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4344_30_inline_parameter\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4347_42_maybe_more_inline_parameters\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4393_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4394_29_trailing_remark\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4399_1_parameter\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4400_1_error\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "open_parameters\000funky_types", NULL,
    {.position = POS(4405, 15)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "parameter_of\000funky", NULL,
    {.position = POS(4409, 18)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4415_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4417_28_parameter_name\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4420_30_parameter_option\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "inline_parameter\000funky_types", NULL,
    {.position = POS(4425, 11)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "option_of\000funky", NULL,
    {.position = POS(4429, 14)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4434_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4436_28_parameter_name\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4439_30_parameter_option\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4442_30_trailing_remarks\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "parameter\000funky_types", NULL,
    {.position = POS(4447, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "myself\000funky_types", NULL,
    {.position = POS(4485, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "rest\000funky_types", NULL,
    {.position = POS(4493, 5)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4498_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4499_28_simple_operand\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "initial_value\000funky_types", NULL,
    {.position = POS(4504, 7)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "operand_of\000funky", NULL,
    {.position = POS(4507, 10)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4543_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4544_29_trailing_remark\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "close_parameters\000funky_types", NULL,
    {.position = POS(4549, 7)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4556_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4557_38_some_statement_arguments\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "return_expression\000funky_types", NULL,
    {.position = POS(4562, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "return\000funky_types", NULL,
    {.position = POS(4572, 5)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4577_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4582_25_remark_text\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "remark\000funky_types", NULL,
    {.position = POS(4587, 11)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "text_of\000funky", NULL,
    {.position = POS(4590, 14)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4596_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4598_25_remark_text\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4634_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4635_29_trailing_remark\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4638_26_line_remarks\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "line_end_and_line_remarks\000funky_types", NULL,
    {.position = POS(4646, 15)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4675_1_multiline_remark\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4676_1_error\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4686_1_multiline_remark\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4687_1_error\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4695_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4697_25_remark_text\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4709_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4714_25_remark_text\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4717_31_some_remark_lines\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "multiline_remark\000funky_types", NULL,
    {.position = POS(4722, 15)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "lines_of\000funky", NULL,
    {.position = POS(4726, 18)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4733_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4735_25_remark_text\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4738_31_some_remark_lines\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4762_1_position\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4764_25_remark_text\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "remark_lines\000funky_types", NULL,
    {.position = POS(4769, 7)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "4776_1_position\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "dummy_remark\000funky_types", NULL,
    {.position = POS(4781, 7)}
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
  2113, // number of constants
  543, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  constants_table,
  variables_table,
};
