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
  value_range_1346_1 = -186,
  lambda_115 = -187,
  lambda_116 = -188,
  lambda_117 = -189,
  str_0o = -190,
  lambda_118 = -191,
  lambda_119 = -192,
  chr_55 = -193,
  value_range_1357_1 = -194,
  lambda_120 = -195,
  lambda_121 = -196,
  lambda_122 = -197,
  str_0x = -198,
  lambda_123 = -199,
  lambda_124 = -200,
  chr_57 = -201,
  value_range_1368_1 = -202,
  chr_97 = -203,
  chr_102 = -204,
  value_range_1371_1 = -205,
  chr_65 = -206,
  chr_70 = -207,
  value_range_1374_1 = -208,
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
  sequence_1453_1 = -238,
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
  var_135_0_arguments, // dynamic
  var_is_empty, // extern
  var_append, // extern
  var_map_reduce, // extern
  var_if, // extern
  var_std__string, // initialized
  var_create_string, // extern
  var_put, // extern polymorphic
  var_dup, // extern polymorphic
  var_196_0_self, // dynamic
  var_197_0_n, // dynamic
  var_std__shift_right, // extern
  var_204_1_str, // dynamic
  var_std__times, // extern
  var_std__equal, // extern
  var_string, // extern
  var_case, // extern
  var_std__pad_left, // initialized
  var_236_0_n, // dynamic
  var_237_0_pad, // dynamic
  var_239_1_text, // dynamic
  var_240_1_len, // dynamic
  var_length_of, // extern
  var_std__less, // extern
  var_std__minus, // extern
  var_std__plus, // extern
  var_div, // extern
  var_range, // extern
  var_std__pad_right, // initialized
  var_272_0_n, // dynamic
  var_273_0_pad, // dynamic
  var_275_1_text, // dynamic
  var_276_1_len, // dynamic
  var_std__spaces, // initialized
  var_295_0_n, // dynamic
  var_std__not, // extern
  var_std__tabs_and_spaces, // initialized
  var_312_0_n, // dynamic
  var_std__bit_and, // extern
  var_spaces, // extern
  var_std__with_tabs, // initialized
  var_332_0_text, // dynamic
  var_334_1_s, // dynamic
  var_335_1_n, // dynamic
  var_336_1_i, // dynamic
  var_337_1_output, // dynamic
  var_338_1_count, // dynamic
  var_next, // extern
  var_350_1_tab_count, // dynamic
  var_std__shift_left, // extern
  var_loop, // extern
  var_std__and, // extern
  var_break, // extern
  var_match, // extern polymorphic
  var_395_0_self, // dynamic
  var_396_0_stream, // dynamic
  var_398_1_len, // dynamic
  var_undefined, // extern
  var_search, // extern polymorphic
  var_425_0_self, // dynamic
  var_426_0_stream, // dynamic
  var_427_0_nth, // dynamic
  var_429_1_i, // dynamic
  var_430_1_length, // dynamic
  var_431_1_offset, // dynamic
  var_432_1_n, // dynamic
  var_dec, // extern
  var_plus, // extern
  var_inc, // extern
  var_minus, // extern
  var_before, // extern polymorphic
  var_513_0_str, // dynamic
  var_517_8_pos, // dynamic
  var_is_defined, // extern
  var_truncate_from, // extern polymorphic
  var_563_0_str, // dynamic
  var_567_8_pos, // dynamic
  var_behind, // extern polymorphic
  var_611_0_str, // dynamic
  var_615_8_pos, // dynamic
  var_615_13_len, // dynamic
  var_truncate_until, // extern polymorphic
  var_660_0_str, // dynamic
  var_664_8_pos, // dynamic
  var_664_13_len, // dynamic
  var_from, // extern polymorphic
  var_709_0_str, // dynamic
  var_713_8_pos, // dynamic
  var_truncate_before, // extern polymorphic
  var_758_0_str, // dynamic
  var_762_8_pos, // dynamic
  var_until, // extern polymorphic
  var_806_0_str, // dynamic
  var_810_8_pos, // dynamic
  var_810_13_len, // dynamic
  var_truncate_behind, // extern polymorphic
  var_855_0_str, // dynamic
  var_859_8_pos, // dynamic
  var_859_13_len, // dynamic
  var_between, // extern polymorphic
  var_has_prefix, // extern polymorphic
  var_has_suffix, // extern polymorphic
  var_937_0_self, // dynamic
  var_938_0_suffix, // dynamic
  var_is_a_character, // extern
  var_944_1_len, // dynamic
  var_std__negate, // extern
  var_without_prefix, // extern polymorphic
  var_968_0_self, // dynamic
  var_971_1_n, // dynamic
  var_without_suffix, // extern polymorphic
  var_998_0_self, // dynamic
  var_999_0_suffix, // dynamic
  var_1001_1_len, // dynamic
  var_1009_1_slen, // dynamic
  var_contains, // extern polymorphic
  var_std__split, // initialized
  var_1067_0_self, // dynamic
  var_1068_0_separator, // dynamic
  var_empty_list, // extern
  var_1074_1_items, // dynamic
  var_1076_8_pos, // dynamic
  var_1076_13_len, // dynamic
  var_push, // extern
  var_std__join, // initialized
  var_1112_0_separator, // dynamic
  var_std__trim, // initialized
  var_1141_0_self, // dynamic
  var_1142_0_test, // dynamic
  var_is_a_whitespace_character, // extern
  var_1144_1_s, // dynamic
  var_1145_1_e, // dynamic
  var_std__trim_left, // initialized
  var_1181_0_self, // dynamic
  var_1182_0_test, // dynamic
  var_1184_1_s, // dynamic
  var_1185_1_e, // dynamic
  var_std__trim_right, // initialized
  var_1215_0_self, // dynamic
  var_1216_0_test, // dynamic
  var_1218_1_e, // dynamic
  var_std__normalize, // initialized
  var_1249_0_self, // dynamic
  var_1251_1_buf, // dynamic
  var_1252_1_e, // dynamic
  var_1253_1_i, // dynamic
  var_is_not_empty, // extern
  var_update_if, // extern
  var_1268_1_s, // dynamic
  var_std__parse_integer, // initialized
  var_1311_0_self, // dynamic
  var_1332_1_negate, // dynamic
  var_1338_1_value, // dynamic
  var_1319_17_idx, // dynamic
  var_1331_1_orig, // dynamic
  var_1343_3_idx, // dynamic
  var_1343_7_chr, // dynamic
  var_std__value_range, // extern
  var_for_each, // extern
  var_1355_3_idx, // dynamic
  var_1355_7_chr, // dynamic
  var_1366_3_idx, // dynamic
  var_1366_7_chr, // dynamic
  var_1382_3_idx, // dynamic
  var_1382_7_chr, // dynamic
  var_cond, // extern
  var_std__parse_number, // initialized
  var_1418_0_self, // dynamic
  var_1420_1_i, // dynamic
  var_1421_1_n, // dynamic
  var_1426_1_sign_chr, // dynamic
  var_std__or, // extern
  var_parse_hex, // extern
  var_std__sequence, // extern
  var_1456_28_cont, // dynamic
  var_1461_1_digit, // dynamic
  var_1472_1_next_digit, // dynamic
  var_1484_1_exp_sign_chr, // dynamic
  var_integer, // extern
  var_real, // extern
  var_1492_16_str, // dynamic
  var_1492_20_i, // dynamic
  var_1493_1_n, // dynamic
  var_1497_1_digit, // dynamic
  var_1502_1_value, // dynamic
  var_1509_1_next_digit, // dynamic
  var_1516_15_str, // dynamic
  var_1516_19_i, // dynamic
  var_1517_1_n, // dynamic
  var_1521_1_digit, // dynamic
  var_1526_1_value, // dynamic
  var_1533_1_next_digit, // dynamic
  var_std__parse_hex, // initialized
  var_1568_0_str, // dynamic
  var_1569_0_i, // dynamic
  var_1571_1_n, // dynamic
  var_1575_1_digit, // dynamic
  var_1585_22_value, // dynamic
  var_1592_1_next_digit, // dynamic
  var_to_integer, // extern polymorphic
  var_1641_21_value, // dynamic
  var_parse_integer, // extern
  var_to_number, // extern polymorphic
  var_1683_20_value, // dynamic
  var_parse_number, // extern
  var_std__map_characters, // initialized
  var_1710_0_self, // dynamic
  var_1711_0_function, // dynamic
  var_parameter_count_of, // extern
  var_1717_3_s, // dynamic
  var_1717_5_e, // dynamic
  var_1713_1_map, // dynamic
  var_1730_3_s, // dynamic
  var_1730_5_e, // dynamic
  var_to_upper_case, // extern polymorphic
  var_map_characters, // extern
  var_to_lower_case, // extern polymorphic
  var_to_title_case, // extern polymorphic
  var_1807_0_self, // dynamic
  var_1809_22_idx, // dynamic
  var_1809_26_chr, // dynamic
  var_is_a_letter_character, // extern
  var_to_sentence_case, // extern polymorphic
  var_1833_0_self, // dynamic
  var_1835_22_idx, // dynamic
  var_1835_26_chr, // dynamic
  var_std__delete_all, // initialized
  var_1863_0_expressions, // dynamic
  var_1865_14_txt, // dynamic
  var_1879_1_new_text, // dynamic
  var_1872_1_len, // dynamic
  var_if_not, // extern
  var_std__replace_all, // initialized
  var_1904_0_args, // dynamic
  var_1906_15_txt, // dynamic
  var_1927_1_new_text, // dynamic
  var_1913_17_replacement, // dynamic
  var_1914_1_len, // dynamic
  var_std__replace_first, // initialized
  var_1952_0_args, // dynamic
  var_1954_17_txt, // dynamic
  var_1974_1_new_text, // dynamic
  var_1961_17_replacement, // dynamic
  var_1962_1_len, // dynamic
  var_update_if_not, // extern
  var_std__count_occurrences, // initialized
  var_1997_0_expr, // dynamic
  var_1999_15_txt, // dynamic
  var_1999_19_count, // dynamic
  var_2004_1_n, // dynamic
  var_std__partition, // initialized
  var_2038_0_text, // dynamic
  var_2039_0_separators, // dynamic
  var_2041_1_n, // dynamic
  var_2044_13_s, // dynamic
  var_2044_15_e, // dynamic
  var_2050_1_parts, // dynamic
  var_2051_1_ls, // dynamic
  var_2053_3_i, // dynamic
  var_equal, // extern
  var_any_of, // extern
  var_from_to, // extern
  var_std__split_into_lines, // initialized
  var_2118_25_text, // dynamic
  var_2119_1_lines, // dynamic
  var_2120_1_i, // dynamic
  var_2121_1_n, // dynamic
  var_2122_1_s, // dynamic
  var_std__split_into_indented_lines, // initialized
  var_2201_0_text, // dynamic
  var_2206_9_s, // dynamic
  var_2206_11_e, // dynamic
  var_2212_1_lines, // dynamic
  var_2213_1_ls, // dynamic
  var_2219_3_i, // dynamic
  var_2240_15_s, // dynamic
  var_2240_17_e, // dynamic
  var_2241_1_indent, // dynamic
  var_2255_1_line_text, // dynamic
  var_tuple, // extern
  var_std__subgroups_of, // attribute with setter
  var_2266_13_line, // dynamic
  var_first, // extern
  var_std__split_into_groups, // initialized
  var_2323_0_lines, // dynamic
  var_2325_1_n, // dynamic
  var_2326_1_fv, // dynamic
  var_2330_1_indent, // dynamic
  var_2339_9_s, // dynamic
  var_2339_11_e, // dynamic
  var_2339_13_indent, // dynamic
  var_2339_20_gs, // dynamic
  var_2345_1_groups, // dynamic
  var_2346_1_minimum_indent, // dynamic
  var_2347_1_ge, // dynamic
  var_2349_3_i, // dynamic
  var_2350_1_current_indent, // dynamic
  var_2375_1_current_indent, // dynamic
  var_2388_14_l, // dynamic
  var_subgroups_of, // extern polymorphic
  var_2400_34_current_indent, // dynamic
  var_std__wrap_words, // initialized
  var_2440_0_text, // dynamic
  var_2441_0_width, // dynamic
  var_2443_1_wrapped_text, // dynamic
  var_2444_1_n, // dynamic
  var_2445_1_s, // dynamic
  var_2446_1_l, // dynamic
  var_2447_1_b, // dynamic
  var_2448_1_i, // dynamic
  var_2454_1_chr, // dynamic
  var_serialize, // extern polymorphic
  var_2516_0_self, // dynamic
  var_2517_0_indent, // dynamic
  var_2519_1_str, // dynamic
  var_2520_1_s, // dynamic
  var_2522_3_idx, // dynamic
  var_2522_7_chr, // dynamic
  var_tabs_and_spaces, // extern
  var_std__indented, // initialized
  var_2568_0_indent, // dynamic
  var_2569_0_text, // dynamic
  var_2571_1_indented_text, // dynamic
  var_2572_1_new_indent, // dynamic
  var_2573_1_i, // dynamic
  var_2574_1_n, // dynamic
  var_2587_1_s, // dynamic
  var_std__format, // initialized
  var_2657_0_template, // dynamic
  var_2658_0_arguments, // dynamic
  var_2660_1_output, // dynamic
  var_2661_1_arg_idx, // dynamic
  var_2662_1_i, // dynamic
  var_2663_1_n, // dynamic
  var_2669_1_chr, // dynamic
  var_2677_18_alignment, // dynamic
  var_2682_1_len_chr, // dynamic
  var_2687_1_width, // dynamic
  var_2695_1_fmt_chr, // dynamic
  var_2714_1_dw_chr, // dynamic
  var_2719_1_dw, // dynamic
  var_2727_1_fmt_chr, // dynamic
  var_2752_0_alignment, // dynamic
  var_2753_0_width, // dynamic
  var_2754_0_decimal_width, // dynamic
  var_2756_1_argument, // dynamic
  var_is_undefined, // extern
  var_pad_left, // extern
  var_pad_right, // extern
  var_truncate, // extern
  var_2779_1_str, // dynamic
  var_2780_1_n, // dynamic
  var_2781_1_i, // dynamic
  var_2799_1_exp, // dynamic
  var_2800_1_man, // dynamic
  var_2805_1_zeros, // dynamic
  var_empty_collection_of, // extern polymorphic
  var__END
};


static TAB_NUM t_func_std_types__string___to_string[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 114_0_self
  // -> self
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(116, 3)
};

static TAB_NUM t_func_std__create_string[] = {
  1, // locals
  1, // parameters
  var_135_0_arguments,
  // is_empty
  var_is_empty, 1, var_135_0_arguments, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1, lambda_2, TAIL_CALL,
  POS(138, 15),
  POS(137, 3)
};

static TAB_NUM t_lambda_1[] = {
  0, // locals
  0, // parameters
  //  ""
  LET, 1, string_1, TAIL_CALL,
  POS(139, 7)
};

static TAB_NUM t_lambda_2[] = {
  0, // locals
  0, // parameters
  // map_reduce arguments to_string append
  var_map_reduce, 3, var_135_0_arguments, var_to_string, var_append, TAIL_CALL,
  POS(140, 7)
};

static TAB_NUM t_func_std__string[] = {
  1, // locals
  -1, // parameters
  REST_PARAMETER, LOCAL(1), // 154_0_args
  // create_string args
  var_create_string, 1, LOCAL(1), TAIL_CALL,
  POS(156, 3)
};

static TAB_NUM t_func_std_types__string___put[] = {
  4, // locals
  2, // parameters
  LOCAL(3), // 171_0_self
  LOCAL(4), // 172_0_chr
  // to_string self)
  var_to_string, 1, LOCAL(4), 1, LOCAL(1),
  // append(chr.to_string self)
  var_append, 2, LOCAL(1), LOCAL(3), 1, LOCAL(2),
  // -> append(chr.to_string self)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(174, 17),
  POS(174, 6),
  POS(174, 3)
};

static TAB_NUM t_func_std_types__string___dup[] = {
  0, // locals
  2, // parameters
  var_196_0_self,
  var_197_0_n,
  // case n
  var_case, 6, var_197_0_n, num_0, lambda_3, num_1, lambda_4, lambda_5, TAIL_CALL,
  POS(199, 3)
};

static TAB_NUM t_lambda_3[] = {
  0, // locals
  0, // parameters
  //  ""
  LET, 1, string_1, TAIL_CALL,
  POS(200, 9)
};

static TAB_NUM t_lambda_4[] = {
  0, // locals
  0, // parameters
  //  self
  LET, 1, var_196_0_self, TAIL_CALL,
  POS(201, 9)
};

static TAB_NUM t_lambda_5[] = {
  3, // locals
  0, // parameters
  // $h n >> 1 # fails if <n> is not a positive integer
  var_std__shift_right, 2, var_197_0_n, num_1, 1, LOCAL(3),
  // $str dup(self h)
  var_dup, 2, var_196_0_self, LOCAL(3), 1, var_204_1_str,
  // 2*h == n:
  var_std__times, 2, num_2, LOCAL(3), 1, LOCAL(1),
  // 2*h == n:
  var_std__equal, 2, LOCAL(1), var_197_0_n, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_6, lambda_7, TAIL_CALL,
  POS(203, 7),
  POS(204, 7),
  POS(206, 9),
  POS(206, 9),
  POS(205, 7)
};

static TAB_NUM t_lambda_6[] = {
  0, // locals
  0, // parameters
  // string str str
  var_string, 2, var_204_1_str, var_204_1_str, TAIL_CALL,
  POS(207, 11)
};

static TAB_NUM t_lambda_7[] = {
  0, // locals
  0, // parameters
  // string str str self
  var_string, 3, var_204_1_str, var_204_1_str, var_196_0_self, TAIL_CALL,
  POS(209, 11)
};

static TAB_NUM t_func_std__pad_left[] = {
  2, // locals
  -3, // parameters
  MANDATORY_PARAMETER, LOCAL(2), // 235_0_expr
  MANDATORY_PARAMETER, var_236_0_n,
  string_2, var_237_0_pad,
  // $text expr.to_string
  var_to_string, 1, LOCAL(2), 1, var_239_1_text,
  // $len length_of(text)
  var_length_of, 1, var_239_1_text, 1, var_240_1_len,
  // len < n:
  var_std__less, 2, var_240_1_len, var_236_0_n, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_8, lambda_9, TAIL_CALL,
  POS(239, 3),
  POS(240, 3),
  POS(242, 5),
  POS(241, 3)
};

static TAB_NUM t_lambda_8[] = {
  8, // locals
  0, // parameters
  // $pad_len length_of(pad)
  var_length_of, 1, var_237_0_pad, 1, LOCAL(8),
  // n-len)+(pad_len-1) .div. pad_len) 1 n-len) text
  var_std__minus, 2, var_236_0_n, var_240_1_len, 1, LOCAL(1),
  // pad_len-1) .div. pad_len) 1 n-len) text
  var_std__minus, 2, LOCAL(8), num_1, 1, LOCAL(2),
  // n-len)+(pad_len-1) .div. pad_len) 1 n-len) text
  var_std__plus, 2, LOCAL(1), LOCAL(2), 1, LOCAL(3),
  // n-len)+(pad_len-1) .div. pad_len) 1 n-len) text
  var_div, 2, LOCAL(3), LOCAL(8), 1, LOCAL(4),
  // dup(pad (n-len)+(pad_len-1) .div. pad_len) 1 n-len) text
  var_dup, 2, var_237_0_pad, LOCAL(4), 1, LOCAL(5),
  // n-len) text
  var_std__minus, 2, var_236_0_n, var_240_1_len, 1, LOCAL(6),
  // range(dup(pad (n-len)+(pad_len-1) .div. pad_len) 1 n-len) text
  var_range, 3, LOCAL(5), num_1, LOCAL(6), 1, LOCAL(7),
  // string range(dup(pad (n-len)+(pad_len-1) .div. pad_len) 1 n-len) text
  var_string, 2, LOCAL(7), var_239_1_text, TAIL_CALL,
  POS(243, 7),
  POS(244, 29),
  POS(244, 37),
  POS(244, 29),
  POS(244, 29),
  POS(244, 20),
  POS(244, 65),
  POS(244, 14),
  POS(244, 7)
};

static TAB_NUM t_lambda_9[] = {
  0, // locals
  0, // parameters
  //  text
  LET, 1, var_239_1_text, TAIL_CALL,
  POS(245, 7)
};

static TAB_NUM t_func_std__pad_right[] = {
  2, // locals
  -3, // parameters
  MANDATORY_PARAMETER, LOCAL(2), // 271_0_expr
  MANDATORY_PARAMETER, var_272_0_n,
  string_2, var_273_0_pad,
  // $text expr.to_string
  var_to_string, 1, LOCAL(2), 1, var_275_1_text,
  // $len length_of(text)
  var_length_of, 1, var_275_1_text, 1, var_276_1_len,
  // len < n:
  var_std__less, 2, var_276_1_len, var_272_0_n, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_10, lambda_11, TAIL_CALL,
  POS(275, 3),
  POS(276, 3),
  POS(278, 5),
  POS(277, 3)
};

static TAB_NUM t_lambda_10[] = {
  8, // locals
  0, // parameters
  // $pad_len length_of(pad)
  var_length_of, 1, var_273_0_pad, 1, LOCAL(8),
  // n-len)+(pad_len-1) .div. pad_len) 1 n-len)
  var_std__minus, 2, var_272_0_n, var_276_1_len, 1, LOCAL(1),
  // pad_len-1) .div. pad_len) 1 n-len)
  var_std__minus, 2, LOCAL(8), num_1, 1, LOCAL(2),
  // n-len)+(pad_len-1) .div. pad_len) 1 n-len)
  var_std__plus, 2, LOCAL(1), LOCAL(2), 1, LOCAL(3),
  // n-len)+(pad_len-1) .div. pad_len) 1 n-len)
  var_div, 2, LOCAL(3), LOCAL(8), 1, LOCAL(4),
  // dup(pad (n-len)+(pad_len-1) .div. pad_len) 1 n-len)
  var_dup, 2, var_273_0_pad, LOCAL(4), 1, LOCAL(5),
  // n-len)
  var_std__minus, 2, var_272_0_n, var_276_1_len, 1, LOCAL(6),
  // range(dup(pad (n-len)+(pad_len-1) .div. pad_len) 1 n-len)
  var_range, 3, LOCAL(5), num_1, LOCAL(6), 1, LOCAL(7),
  // string text range(dup(pad (n-len)+(pad_len-1) .div. pad_len) 1 n-len)
  var_string, 2, var_275_1_text, LOCAL(7), TAIL_CALL,
  POS(279, 7),
  POS(280, 34),
  POS(280, 42),
  POS(280, 34),
  POS(280, 34),
  POS(280, 25),
  POS(280, 70),
  POS(280, 19),
  POS(280, 7)
};

static TAB_NUM t_lambda_11[] = {
  0, // locals
  0, // parameters
  //  text
  LET, 1, var_275_1_text, TAIL_CALL,
  POS(281, 7)
};

static TAB_NUM t_func_std__spaces[] = {
  2, // locals
  1, // parameters
  var_295_0_n,
  // 80
  var_std__less, 2, num_80, var_295_0_n, 1, LOCAL(1),
  // 80
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_12, lambda_13, TAIL_CALL,
  POS(298, 10),
  POS(298, 10),
  POS(297, 3)
};

static TAB_NUM t_lambda_12[] = {
  1, // locals
  0, // parameters
  // range(eighty_spaces 1 n)
  var_range, 3, string_3, num_1, var_295_0_n, 1, LOCAL(1),
  //  range(eighty_spaces 1 n)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(299, 8),
  POS(299, 7)
};

static TAB_NUM t_lambda_13[] = {
  1, // locals
  0, // parameters
  // dup(" " n)
  var_dup, 2, string_2, var_295_0_n, 1, LOCAL(1),
  //  dup(" " n)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(300, 8),
  POS(300, 7)
};

static TAB_NUM t_func_std__tabs_and_spaces[] = {
  1, // locals
  1, // parameters
  var_312_0_n,
  // n < 80
  var_std__less, 2, var_312_0_n, num_80, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_14, lambda_15, TAIL_CALL,
  POS(315, 5),
  POS(314, 3)
};

static TAB_NUM t_lambda_14[] = {
  5, // locals
  0, // parameters
  // n >> 3) 9+(n & 7))
  var_std__shift_right, 2, var_312_0_n, num_3, 1, LOCAL(1),
  // 10-(n >> 3) 9+(n & 7))
  var_std__minus, 2, num_10, LOCAL(1), 1, LOCAL(2),
  // n & 7))
  var_std__bit_and, 2, var_312_0_n, num_7, 1, LOCAL(3),
  // 9+(n & 7))
  var_std__plus, 2, num_9, LOCAL(3), 1, LOCAL(4),
  // range(nine_tabs_and_seven_spaces 10-(n >> 3) 9+(n & 7))
  var_range, 3, string_4, LOCAL(2), LOCAL(4), 1, LOCAL(5),
  //  range(nine_tabs_and_seven_spaces 10-(n >> 3) 9+(n & 7))
  LET, 1, LOCAL(5), TAIL_CALL,
  POS(316, 45),
  POS(316, 41),
  POS(316, 56),
  POS(316, 53),
  POS(316, 8),
  POS(316, 7)
};

static TAB_NUM t_lambda_15[] = {
  5, // locals
  0, // parameters
  // n >> 3) spaces(n & 7))
  var_std__shift_right, 2, var_312_0_n, num_3, 1, LOCAL(1),
  // dup("@ht;" n >> 3) spaces(n & 7))
  var_dup, 2, string_5, LOCAL(1), 1, LOCAL(2),
  // n & 7))
  var_std__bit_and, 2, var_312_0_n, num_7, 1, LOCAL(3),
  // spaces(n & 7))
  var_spaces, 1, LOCAL(3), 1, LOCAL(4),
  // string(dup("@ht;" n >> 3) spaces(n & 7))
  var_string, 2, LOCAL(2), LOCAL(4), 1, LOCAL(5),
  //  string(dup("@ht;" n >> 3) spaces(n & 7))
  LET, 1, LOCAL(5), TAIL_CALL,
  POS(317, 26),
  POS(317, 15),
  POS(317, 41),
  POS(317, 34),
  POS(317, 8),
  POS(317, 7)
};

static TAB_NUM t_func_std__with_tabs[] = {
  0, // locals
  1, // parameters
  var_332_0_text,
  // $s 1
  LET, 1, num_1, 1, var_334_1_s,
  // $n length_of(text)
  var_length_of, 1, var_332_0_text, 1, var_335_1_n,
  // $i 1
  LET, 1, num_1, 1, var_336_1_i,
  // $output ""
  LET, 1, string_1, 1, var_337_1_output,
  // $count 0
  LET, 1, num_0, 1, var_338_1_count,
  // loop:
  var_loop, 1, lambda_loop, TAIL_CALL,
  POS(334, 3),
  POS(335, 3),
  POS(336, 3),
  POS(337, 3),
  POS(338, 3),
  POS(339, 3)
};

static TAB_NUM t_lambda_loop[] = {
  2, // locals
  0, // parameters
  // n:
  var_std__less, 2, var_335_1_n, var_336_1_i, 1, LOCAL(1),
  // n:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_16, lambda_23, TAIL_CALL,
  POS(341, 12),
  POS(341, 12),
  POS(340, 5)
};

static TAB_NUM t_lambda_16[] = {
  2, // locals
  0, // parameters
  // text(i) == ' ':
  var_332_0_text, 1, var_336_1_i, 1, LOCAL(1),
  // text(i) == ' ':
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_17, lambda_18, TAIL_CALL,
  POS(343, 11),
  POS(343, 11),
  POS(342, 9)
};

static TAB_NUM t_lambda_17[] = {
  0, // locals
  0, // parameters
  // !i i+1
  var_std__plus, 2, var_336_1_i, num_1, 1, var_336_1_i,
  // !count count+1
  var_std__plus, 2, var_338_1_count, num_1, 1, var_338_1_count,
  // next
  var_next, 0, TAIL_CALL,
  POS(344, 13),
  POS(345, 13),
  POS(346, 13)
};

static TAB_NUM t_lambda_18[] = {
  2, // locals
  0, // parameters
  // count >= 8:
  var_std__less, 2, var_338_1_count, num_8, 1, LOCAL(1),
  // count >= 8:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_19, func_skip_line, TAIL_CALL,
  POS(349, 15),
  POS(349, 15),
  POS(348, 13)
};

static TAB_NUM t_lambda_19[] = {
  2, // locals
  0, // parameters
  // $tab_count count >> 3
  var_std__shift_right, 2, var_338_1_count, num_3, 1, var_350_1_tab_count,
  // tab_count >= 1:
  var_std__less, 2, var_350_1_tab_count, num_1, 1, LOCAL(1),
  // tab_count >= 1:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_20, func_skip_line, TAIL_CALL,
  POS(350, 17),
  POS(352, 19),
  POS(352, 19),
  POS(351, 17)
};

static TAB_NUM t_lambda_20[] = {
  3, // locals
  0, // parameters
  // count+1))
  var_std__plus, 2, var_338_1_count, num_1, 1, LOCAL(1),
  // i-(count+1))
  var_std__minus, 2, var_336_1_i, LOCAL(1), 1, LOCAL(2),
  // range(text s i-(count+1))
  var_range, 3, var_332_0_text, var_334_1_s, LOCAL(2), 1, LOCAL(3),
  // append &output range(text s i-(count+1))
  var_append, 2, var_337_1_output, LOCAL(3), 1, var_337_1_output,
  // tab_count < 10
  var_std__less, 2, var_350_1_tab_count, num_10, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_21, lambda_22, 1, LOCAL(2),
  // append &output
  var_append, 2, var_337_1_output, LOCAL(2), 1, var_337_1_output,
  // i-count)+(tab_count << 3)
  var_std__minus, 2, var_336_1_i, var_338_1_count, 1, LOCAL(1),
  // tab_count << 3)
  var_std__shift_left, 2, var_350_1_tab_count, num_3, 1, LOCAL(2),
  // !s (i-count)+(tab_count << 3)
  var_std__plus, 2, LOCAL(1), LOCAL(2), 1, var_334_1_s,
  // skip_line
  func_skip_line, 0, TAIL_CALL,
  POS(353, 52),
  POS(353, 49),
  POS(353, 36),
  POS(353, 21),
  POS(356, 25),
  POS(355, 23),
  POS(354, 21),
  POS(359, 25),
  POS(359, 35),
  POS(359, 21),
  POS(360, 21)
};

static TAB_NUM t_lambda_21[] = {
  1, // locals
  0, // parameters
  // range(tabs 1 tab_count)
  var_range, 3, string_6, num_1, var_350_1_tab_count, 1, LOCAL(1),
  //  range(tabs 1 tab_count)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(357, 28),
  POS(357, 27)
};

static TAB_NUM t_lambda_22[] = {
  1, // locals
  0, // parameters
  // dup("@ht;" tab_count)
  var_dup, 2, string_5, var_350_1_tab_count, 1, LOCAL(1),
  //  dup("@ht;" tab_count)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(358, 28),
  POS(358, 27)
};

static TAB_NUM t_lambda_23[] = {
  1, // locals
  0, // parameters
  // s == 1
  var_std__equal, 2, var_334_1_s, num_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_24, lambda_25, TAIL_CALL,
  POS(365, 11),
  POS(364, 9)
};

static TAB_NUM t_lambda_24[] = {
  0, // locals
  0, // parameters
  //  text
  LET, 1, var_332_0_text, TAIL_CALL,
  POS(366, 13)
};

static TAB_NUM t_lambda_25[] = {
  2, // locals
  0, // parameters
  // range(text s -1))
  var_range, 3, var_332_0_text, var_334_1_s, minus_num_1, 1, LOCAL(1),
  // append(output range(text s -1))
  var_append, 2, var_337_1_output, LOCAL(1), 1, LOCAL(2),
  //  append(output range(text s -1))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(367, 28),
  POS(367, 14),
  POS(367, 13)
};

static TAB_NUM t_func_skip_line[] = {
  0, // locals
  0, // parameters
  // loop
  var_loop, 2, lambda_26, lambda_29, TAIL_CALL,
  POS(370, 5)
};

static TAB_NUM t_lambda_26[] = {
  3, // locals
  0, // parameters
  // n && text(i) != '@nl;':
  var_std__less, 2, var_335_1_n, var_336_1_i, 1, LOCAL(1),
  // n && text(i) != '@nl;':
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // n && text(i) != '@nl;':
  var_std__and, 2, LOCAL(2), lambda_27, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_28, var_break, TAIL_CALL,
  POS(373, 16),
  POS(373, 16),
  POS(373, 16),
  POS(372, 9)
};

static TAB_NUM t_lambda_27[] = {
  3, // locals
  0, // parameters
  // text(i) != '@nl;':
  var_332_0_text, 1, var_336_1_i, 1, LOCAL(1),
  // text(i) != '@nl;':
  var_std__equal, 2, LOCAL(1), chr_10, 1, LOCAL(2),
  // text(i) != '@nl;':
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(i) != '@nl;':
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(373, 21),
  POS(373, 21),
  POS(373, 21),
  POS(373, 21)
};

static TAB_NUM t_lambda_28[] = {
  0, // locals
  0, // parameters
  // !i i+1
  var_std__plus, 2, var_336_1_i, num_1, 1, var_336_1_i,
  // next
  var_next, 0, TAIL_CALL,
  POS(374, 13),
  POS(375, 13)
};

static TAB_NUM t_lambda_29[] = {
  0, // locals
  0, // parameters
  // !i i+1
  var_std__plus, 2, var_336_1_i, num_1, 1, var_336_1_i,
  // !count 0
  LET, 1, num_0, 1, var_338_1_count,
  // next
  var_next, 0, TAIL_CALL,
  POS(378, 9),
  POS(379, 9),
  POS(380, 9)
};

static TAB_NUM t_func_std_types__string___match[] = {
  3, // locals
  2, // parameters
  var_395_0_self,
  var_396_0_stream,
  // $len length_of(self)
  var_length_of, 1, var_395_0_self, 1, var_398_1_len,
  // length_of(stream) >= len
  var_length_of, 1, var_396_0_stream, 1, LOCAL(1),
  // length_of(stream) >= len
  var_std__less, 2, LOCAL(1), var_398_1_len, 1, LOCAL(2),
  // length_of(stream) >= len
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_30, lambda_33, TAIL_CALL,
  POS(398, 3),
  POS(400, 5),
  POS(400, 5),
  POS(400, 5),
  POS(399, 3)
};

static TAB_NUM t_lambda_30[] = {
  2, // locals
  0, // parameters
  // range(stream 1 len) == self
  var_range, 3, var_396_0_stream, num_1, var_398_1_len, 1, LOCAL(1),
  // range(stream 1 len) == self
  var_std__equal, 2, LOCAL(1), var_395_0_self, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_31, lambda_32, TAIL_CALL,
  POS(403, 9),
  POS(403, 9),
  POS(402, 7)
};

static TAB_NUM t_lambda_31[] = {
  0, // locals
  0, // parameters
  //  len
  LET, 1, var_398_1_len, TAIL_CALL,
  POS(404, 11)
};

static TAB_NUM t_lambda_32[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(405, 11)
};

static TAB_NUM t_lambda_33[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(406, 7)
};

static TAB_NUM t_func_std_types__string___search[] = {
  1, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_425_0_self,
  MANDATORY_PARAMETER, var_426_0_stream,
  num_1, var_427_0_nth,
  // $i undefined
  LET, 1, var_undefined, 1, var_429_1_i,
  // $length length_of(self)
  var_length_of, 1, var_425_0_self, 1, var_430_1_length,
  // $offset length-1
  var_std__minus, 2, var_430_1_length, num_1, 1, var_431_1_offset,
  // length_of(stream)-offset
  var_length_of, 1, var_426_0_stream, 1, LOCAL(1),
  // $n length_of(stream)-offset
  var_std__minus, 2, LOCAL(1), var_431_1_offset, 1, var_432_1_n,
  // nth < 0:
  var_std__less, 2, var_427_0_nth, num_0, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_34, lambda_35, TAIL_CALL,
  POS(429, 3),
  POS(430, 3),
  POS(431, 3),
  POS(432, 6),
  POS(432, 3),
  POS(434, 5),
  POS(433, 3)
};

static TAB_NUM t_lambda_34[] = {
  0, // locals
  0, // parameters
  // !i n
  LET, 1, var_432_1_n, 1, var_429_1_i,
  // search_backwards
  func_search_backwards, 0, TAIL_CALL,
  POS(435, 7),
  POS(436, 7)
};

static TAB_NUM t_lambda_35[] = {
  0, // locals
  0, // parameters
  // !i 1
  LET, 1, num_1, 1, var_429_1_i,
  // search_forwards
  func_search_forwards, 0, TAIL_CALL,
  POS(438, 7),
  POS(439, 7)
};

static TAB_NUM t_func_search_forwards[] = {
  2, // locals
  0, // parameters
  // n
  var_std__less, 2, var_432_1_n, var_429_1_i, 1, LOCAL(1),
  // n
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_36, lambda_41, TAIL_CALL,
  POS(443, 12),
  POS(443, 12),
  POS(442, 5)
};

static TAB_NUM t_lambda_36[] = {
  3, // locals
  0, // parameters
  // i+offset) == self:
  var_std__plus, 2, var_429_1_i, var_431_1_offset, 1, LOCAL(1),
  // range(stream i i+offset) == self:
  var_range, 3, var_426_0_stream, var_429_1_i, LOCAL(1), 1, LOCAL(2),
  // range(stream i i+offset) == self:
  var_std__equal, 2, LOCAL(2), var_425_0_self, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_37, lambda_40, TAIL_CALL,
  POS(446, 26),
  POS(446, 11),
  POS(446, 11),
  POS(445, 9)
};

static TAB_NUM t_lambda_37[] = {
  1, // locals
  0, // parameters
  // 1:
  var_std__less, 2, num_1, var_427_0_nth, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_38, lambda_39, TAIL_CALL,
  POS(448, 21),
  POS(447, 13)
};

static TAB_NUM t_lambda_38[] = {
  0, // locals
  0, // parameters
  // dec &nth
  var_dec, 1, var_427_0_nth, 1, var_427_0_nth,
  // plus &i length
  var_plus, 2, var_429_1_i, var_430_1_length, 1, var_429_1_i,
  // search_forwards
  func_search_forwards, 0, TAIL_CALL,
  POS(449, 17),
  POS(450, 17),
  POS(451, 17)
};

static TAB_NUM t_lambda_39[] = {
  0, // locals
  0, // parameters
  //  i length
  LET, 2, var_429_1_i, var_430_1_length, TAIL_CALL,
  POS(452, 17)
};

static TAB_NUM t_lambda_40[] = {
  0, // locals
  0, // parameters
  // inc &i
  var_inc, 1, var_429_1_i, 1, var_429_1_i,
  // search_forwards
  func_search_forwards, 0, TAIL_CALL,
  POS(454, 13),
  POS(455, 13)
};

static TAB_NUM t_lambda_41[] = {
  0, // locals
  0, // parameters
  //  undefined undefined
  LET, 2, var_undefined, var_undefined, TAIL_CALL,
  POS(456, 9)
};

static TAB_NUM t_func_search_backwards[] = {
  2, // locals
  0, // parameters
  // i >= 1
  var_std__less, 2, var_429_1_i, num_1, 1, LOCAL(1),
  // i >= 1
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_42, lambda_47, TAIL_CALL,
  POS(460, 7),
  POS(460, 7),
  POS(459, 5)
};

static TAB_NUM t_lambda_42[] = {
  3, // locals
  0, // parameters
  // i+offset) == self:
  var_std__plus, 2, var_429_1_i, var_431_1_offset, 1, LOCAL(1),
  // range(stream i i+offset) == self:
  var_range, 3, var_426_0_stream, var_429_1_i, LOCAL(1), 1, LOCAL(2),
  // range(stream i i+offset) == self:
  var_std__equal, 2, LOCAL(2), var_425_0_self, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_43, lambda_46, TAIL_CALL,
  POS(463, 26),
  POS(463, 11),
  POS(463, 11),
  POS(462, 9)
};

static TAB_NUM t_lambda_43[] = {
  1, // locals
  0, // parameters
  // nth < -1:
  var_std__less, 2, var_427_0_nth, minus_num_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_44, lambda_45, TAIL_CALL,
  POS(465, 15),
  POS(464, 13)
};

static TAB_NUM t_lambda_44[] = {
  0, // locals
  0, // parameters
  // inc &nth
  var_inc, 1, var_427_0_nth, 1, var_427_0_nth,
  // minus &i length
  var_minus, 2, var_429_1_i, var_430_1_length, 1, var_429_1_i,
  // search_backwards
  func_search_backwards, 0, TAIL_CALL,
  POS(466, 17),
  POS(467, 17),
  POS(468, 17)
};

static TAB_NUM t_lambda_45[] = {
  0, // locals
  0, // parameters
  //  i length
  LET, 2, var_429_1_i, var_430_1_length, TAIL_CALL,
  POS(469, 17)
};

static TAB_NUM t_lambda_46[] = {
  0, // locals
  0, // parameters
  // dec &i
  var_dec, 1, var_429_1_i, 1, var_429_1_i,
  // search_backwards
  func_search_backwards, 0, TAIL_CALL,
  POS(471, 13),
  POS(472, 13)
};

static TAB_NUM t_lambda_47[] = {
  0, // locals
  0, // parameters
  //  undefined undefined
  LET, 2, var_undefined, var_undefined, TAIL_CALL,
  POS(473, 9)
};

static TAB_NUM t_func_std_types__string___before[] = {
  3, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_513_0_str,
  MANDATORY_PARAMETER, LOCAL(2), // 514_0_expr
  num_1, LOCAL(3), // 515_0_nth
  // search $pos $_len expr str nth
  var_search, 3, LOCAL(2), var_513_0_str, LOCAL(3), 2, var_517_8_pos, LOCAL(1),
  // is_defined
  var_is_defined, 1, var_517_8_pos, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_48, lambda_49, TAIL_CALL,
  POS(517, 3),
  POS(519, 9),
  POS(518, 3)
};

static TAB_NUM t_lambda_48[] = {
  2, // locals
  0, // parameters
  // pos-1)
  var_std__minus, 2, var_517_8_pos, num_1, 1, LOCAL(1),
  // range(str 1 pos-1)
  var_range, 3, var_513_0_str, num_1, LOCAL(1), 1, LOCAL(2),
  //  range(str 1 pos-1)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(520, 20),
  POS(520, 8),
  POS(520, 7)
};

static TAB_NUM t_lambda_49[] = {
  0, // locals
  0, // parameters
  //  ""
  LET, 1, string_1, TAIL_CALL,
  POS(521, 7)
};

static TAB_NUM t_func_std_types__string___truncate_from[] = {
  3, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_563_0_str,
  MANDATORY_PARAMETER, LOCAL(2), // 564_0_expr
  num_1, LOCAL(3), // 565_0_nth
  // search $pos $_len expr str nth
  var_search, 3, LOCAL(2), var_563_0_str, LOCAL(3), 2, var_567_8_pos, LOCAL(1),
  // is_defined
  var_is_defined, 1, var_567_8_pos, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_50, lambda_51, TAIL_CALL,
  POS(567, 3),
  POS(569, 9),
  POS(568, 3)
};

static TAB_NUM t_lambda_50[] = {
  2, // locals
  0, // parameters
  // pos-1)
  var_std__minus, 2, var_567_8_pos, num_1, 1, LOCAL(1),
  // range(str 1 pos-1)
  var_range, 3, var_563_0_str, num_1, LOCAL(1), 1, LOCAL(2),
  //  range(str 1 pos-1)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(570, 20),
  POS(570, 8),
  POS(570, 7)
};

static TAB_NUM t_lambda_51[] = {
  0, // locals
  0, // parameters
  //  str
  LET, 1, var_563_0_str, TAIL_CALL,
  POS(571, 7)
};

static TAB_NUM t_func_std_types__string___behind[] = {
  3, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_611_0_str,
  MANDATORY_PARAMETER, LOCAL(2), // 612_0_expr
  num_1, LOCAL(3), // 613_0_nth
  // search $pos $len expr str nth
  var_search, 3, LOCAL(2), var_611_0_str, LOCAL(3), 2, var_615_8_pos, var_615_13_len,
  // is_defined
  var_is_defined, 1, var_615_8_pos, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_52, lambda_53, TAIL_CALL,
  POS(615, 3),
  POS(617, 9),
  POS(616, 3)
};

static TAB_NUM t_lambda_52[] = {
  2, // locals
  0, // parameters
  // pos+len -1)
  var_std__plus, 2, var_615_8_pos, var_615_13_len, 1, LOCAL(1),
  // range(str pos+len -1)
  var_range, 3, var_611_0_str, LOCAL(1), minus_num_1, 1, LOCAL(2),
  //  range(str pos+len -1)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(618, 18),
  POS(618, 8),
  POS(618, 7)
};

static TAB_NUM t_lambda_53[] = {
  0, // locals
  0, // parameters
  //  ""
  LET, 1, string_1, TAIL_CALL,
  POS(619, 7)
};

static TAB_NUM t_func_std_types__string___truncate_until[] = {
  3, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_660_0_str,
  MANDATORY_PARAMETER, LOCAL(2), // 661_0_expr
  num_1, LOCAL(3), // 662_0_nth
  // search $pos $len expr str nth
  var_search, 3, LOCAL(2), var_660_0_str, LOCAL(3), 2, var_664_8_pos, var_664_13_len,
  // is_defined
  var_is_defined, 1, var_664_8_pos, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_54, lambda_55, TAIL_CALL,
  POS(664, 3),
  POS(666, 9),
  POS(665, 3)
};

static TAB_NUM t_lambda_54[] = {
  2, // locals
  0, // parameters
  // pos+len -1)
  var_std__plus, 2, var_664_8_pos, var_664_13_len, 1, LOCAL(1),
  // range(str pos+len -1)
  var_range, 3, var_660_0_str, LOCAL(1), minus_num_1, 1, LOCAL(2),
  //  range(str pos+len -1)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(667, 18),
  POS(667, 8),
  POS(667, 7)
};

static TAB_NUM t_lambda_55[] = {
  0, // locals
  0, // parameters
  //  str
  LET, 1, var_660_0_str, TAIL_CALL,
  POS(668, 7)
};

static TAB_NUM t_func_std_types__string___from[] = {
  3, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_709_0_str,
  MANDATORY_PARAMETER, LOCAL(2), // 710_0_expr
  num_1, LOCAL(3), // 711_0_nth
  // search $pos $_len expr str nth
  var_search, 3, LOCAL(2), var_709_0_str, LOCAL(3), 2, var_713_8_pos, LOCAL(1),
  // is_defined
  var_is_defined, 1, var_713_8_pos, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_56, lambda_57, TAIL_CALL,
  POS(713, 3),
  POS(715, 9),
  POS(714, 3)
};

static TAB_NUM t_lambda_56[] = {
  1, // locals
  0, // parameters
  // range(str pos -1)
  var_range, 3, var_709_0_str, var_713_8_pos, minus_num_1, 1, LOCAL(1),
  //  range(str pos -1)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(716, 8),
  POS(716, 7)
};

static TAB_NUM t_lambda_57[] = {
  0, // locals
  0, // parameters
  //  ""
  LET, 1, string_1, TAIL_CALL,
  POS(717, 7)
};

static TAB_NUM t_func_std_types__string___truncate_before[] = {
  3, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_758_0_str,
  MANDATORY_PARAMETER, LOCAL(2), // 759_0_expr
  num_1, LOCAL(3), // 760_0_nth
  // search $pos $_len expr str nth
  var_search, 3, LOCAL(2), var_758_0_str, LOCAL(3), 2, var_762_8_pos, LOCAL(1),
  // is_defined
  var_is_defined, 1, var_762_8_pos, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_58, lambda_59, TAIL_CALL,
  POS(762, 3),
  POS(764, 9),
  POS(763, 3)
};

static TAB_NUM t_lambda_58[] = {
  1, // locals
  0, // parameters
  // range(str pos -1)
  var_range, 3, var_758_0_str, var_762_8_pos, minus_num_1, 1, LOCAL(1),
  //  range(str pos -1)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(765, 8),
  POS(765, 7)
};

static TAB_NUM t_lambda_59[] = {
  0, // locals
  0, // parameters
  //  str
  LET, 1, var_758_0_str, TAIL_CALL,
  POS(766, 7)
};

static TAB_NUM t_func_std_types__string___until[] = {
  3, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_806_0_str,
  MANDATORY_PARAMETER, LOCAL(2), // 807_0_expr
  num_1, LOCAL(3), // 808_0_nth
  // search $pos $len expr str nth
  var_search, 3, LOCAL(2), var_806_0_str, LOCAL(3), 2, var_810_8_pos, var_810_13_len,
  // is_defined
  var_is_defined, 1, var_810_8_pos, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_60, lambda_61, TAIL_CALL,
  POS(810, 3),
  POS(812, 9),
  POS(811, 3)
};

static TAB_NUM t_lambda_60[] = {
  3, // locals
  0, // parameters
  // pos+len-1)
  var_std__plus, 2, var_810_8_pos, var_810_13_len, 1, LOCAL(1),
  // pos+len-1)
  var_std__minus, 2, LOCAL(1), num_1, 1, LOCAL(2),
  // range(str 1 pos+len-1)
  var_range, 3, var_806_0_str, num_1, LOCAL(2), 1, LOCAL(3),
  //  range(str 1 pos+len-1)
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(813, 20),
  POS(813, 20),
  POS(813, 8),
  POS(813, 7)
};

static TAB_NUM t_lambda_61[] = {
  0, // locals
  0, // parameters
  //  ""
  LET, 1, string_1, TAIL_CALL,
  POS(814, 7)
};

static TAB_NUM t_func_std_types__string___truncate_behind[] = {
  3, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_855_0_str,
  MANDATORY_PARAMETER, LOCAL(2), // 856_0_expr
  num_1, LOCAL(3), // 857_0_nth
  // search $pos $len expr str nth
  var_search, 3, LOCAL(2), var_855_0_str, LOCAL(3), 2, var_859_8_pos, var_859_13_len,
  // is_defined
  var_is_defined, 1, var_859_8_pos, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_62, lambda_63, TAIL_CALL,
  POS(859, 3),
  POS(861, 9),
  POS(860, 3)
};

static TAB_NUM t_lambda_62[] = {
  3, // locals
  0, // parameters
  // pos+len-1)
  var_std__plus, 2, var_859_8_pos, var_859_13_len, 1, LOCAL(1),
  // pos+len-1)
  var_std__minus, 2, LOCAL(1), num_1, 1, LOCAL(2),
  // range(str 1 pos+len-1)
  var_range, 3, var_855_0_str, num_1, LOCAL(2), 1, LOCAL(3),
  //  range(str 1 pos+len-1)
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(862, 20),
  POS(862, 20),
  POS(862, 8),
  POS(862, 7)
};

static TAB_NUM t_lambda_63[] = {
  0, // locals
  0, // parameters
  //  str
  LET, 1, var_855_0_str, TAIL_CALL,
  POS(863, 7)
};

static TAB_NUM t_func_std_types__string___between[] = {
  6, // locals
  -4, // parameters
  MANDATORY_PARAMETER, LOCAL(3), // 891_0_str
  MANDATORY_PARAMETER, LOCAL(4), // 892_0_expr_1
  MANDATORY_PARAMETER, LOCAL(5), // 893_0_expr_2
  num_1, LOCAL(6), // 894_0_nth
  // behind(str expr_1 nth) .before. expr_2
  var_behind, 3, LOCAL(3), LOCAL(4), LOCAL(6), 1, LOCAL(1),
  // behind(str expr_1 nth) .before. expr_2
  var_before, 2, LOCAL(1), LOCAL(5), 1, LOCAL(2),
  // -> behind(str expr_1 nth) .before. expr_2
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(896, 6),
  POS(896, 6),
  POS(896, 3)
};

static TAB_NUM t_func_std_types__string___has_prefix[] = {
  4, // locals
  2, // parameters
  LOCAL(3), // 915_0_self
  LOCAL(4), // 916_0_prefix
  // match(prefix self).is_defined
  var_match, 2, LOCAL(4), LOCAL(3), 1, LOCAL(1),
  // is_defined
  var_is_defined, 1, LOCAL(1), 1, LOCAL(2),
  // -> match(prefix self).is_defined
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(918, 6),
  POS(918, 25),
  POS(918, 3)
};

static TAB_NUM t_func_std_types__string___has_suffix[] = {
  1, // locals
  2, // parameters
  var_937_0_self,
  var_938_0_suffix,
  // is_a_character
  var_is_a_character, 1, var_938_0_suffix, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_64, lambda_66, TAIL_CALL,
  POS(941, 12),
  POS(940, 3)
};

static TAB_NUM t_lambda_64[] = {
  4, // locals
  0, // parameters
  // length_of(self) >= 1 && self(-1) == suffix
  var_length_of, 1, var_937_0_self, 1, LOCAL(1),
  // length_of(self) >= 1 && self(-1) == suffix
  var_std__less, 2, LOCAL(1), num_1, 1, LOCAL(2),
  // length_of(self) >= 1 && self(-1) == suffix
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // length_of(self) >= 1 && self(-1) == suffix
  var_std__and, 2, LOCAL(3), lambda_65, 1, LOCAL(4),
  //  length_of(self) >= 1 && self(-1) == suffix
  LET, 1, LOCAL(4), TAIL_CALL,
  POS(942, 8),
  POS(942, 8),
  POS(942, 8),
  POS(942, 8),
  POS(942, 7)
};

static TAB_NUM t_lambda_65[] = {
  2, // locals
  0, // parameters
  // self(-1) == suffix
  var_937_0_self, 1, minus_num_1, 1, LOCAL(1),
  // self(-1) == suffix
  var_std__equal, 2, LOCAL(1), var_938_0_suffix, 1, LOCAL(2),
  // self(-1) == suffix
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(942, 32),
  POS(942, 32),
  POS(942, 32)
};

static TAB_NUM t_lambda_66[] = {
  4, // locals
  0, // parameters
  // $len length_of(suffix)
  var_length_of, 1, var_938_0_suffix, 1, var_944_1_len,
  // length_of(self) >= len && range(self -len -1) == suffix
  var_length_of, 1, var_937_0_self, 1, LOCAL(1),
  // length_of(self) >= len && range(self -len -1) == suffix
  var_std__less, 2, LOCAL(1), var_944_1_len, 1, LOCAL(2),
  // length_of(self) >= len && range(self -len -1) == suffix
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // length_of(self) >= len && range(self -len -1) == suffix
  var_std__and, 2, LOCAL(3), lambda_67, 1, LOCAL(4),
  // -> length_of(self) >= len && range(self -len -1) == suffix
  LET, 1, LOCAL(4), TAIL_CALL,
  POS(944, 7),
  POS(945, 10),
  POS(945, 10),
  POS(945, 10),
  POS(945, 10),
  POS(945, 7)
};

static TAB_NUM t_lambda_67[] = {
  3, // locals
  0, // parameters
  // len -1) == suffix
  var_std__negate, 1, var_944_1_len, 1, LOCAL(1),
  // range(self -len -1) == suffix
  var_range, 3, var_937_0_self, LOCAL(1), minus_num_1, 1, LOCAL(2),
  // range(self -len -1) == suffix
  var_std__equal, 2, LOCAL(2), var_938_0_suffix, 1, LOCAL(3),
  // range(self -len -1) == suffix
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(945, 48),
  POS(945, 36),
  POS(945, 36),
  POS(945, 36)
};

static TAB_NUM t_func_std_types__string___without_prefix[] = {
  2, // locals
  2, // parameters
  var_968_0_self,
  LOCAL(2), // 969_0_prefix
  // $n match(prefix self)
  var_match, 2, LOCAL(2), var_968_0_self, 1, var_971_1_n,
  // is_defined
  var_is_defined, 1, var_971_1_n, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_68, lambda_69, TAIL_CALL,
  POS(971, 3),
  POS(973, 7),
  POS(972, 3)
};

static TAB_NUM t_lambda_68[] = {
  2, // locals
  0, // parameters
  // n+1 -1)
  var_std__plus, 2, var_971_1_n, num_1, 1, LOCAL(1),
  // range(self n+1 -1)
  var_range, 3, var_968_0_self, LOCAL(1), minus_num_1, 1, LOCAL(2),
  //  range(self n+1 -1)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(974, 19),
  POS(974, 8),
  POS(974, 7)
};

static TAB_NUM t_lambda_69[] = {
  0, // locals
  0, // parameters
  //  self
  LET, 1, var_968_0_self, TAIL_CALL,
  POS(975, 7)
};

static TAB_NUM t_func_std_types__string___without_suffix[] = {
  1, // locals
  2, // parameters
  var_998_0_self,
  var_999_0_suffix,
  // $len length_of(self)
  var_length_of, 1, var_998_0_self, 1, var_1001_1_len,
  // is_a_character:
  var_is_a_character, 1, var_999_0_suffix, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_suffix_is_a_character, lambda_73, TAIL_CALL,
  POS(1001, 3),
  POS(1003, 12),
  POS(1002, 3)
};

static TAB_NUM t_lambda_suffix_is_a_character[] = {
  3, // locals
  0, // parameters
  // len >= 1 && self(-1) == suffix
  var_std__less, 2, var_1001_1_len, num_1, 1, LOCAL(1),
  // len >= 1 && self(-1) == suffix
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // len >= 1 && self(-1) == suffix
  var_std__and, 2, LOCAL(2), lambda_70, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_71, lambda_72, TAIL_CALL,
  POS(1005, 9),
  POS(1005, 9),
  POS(1005, 9),
  POS(1004, 7)
};

static TAB_NUM t_lambda_70[] = {
  2, // locals
  0, // parameters
  // self(-1) == suffix
  var_998_0_self, 1, minus_num_1, 1, LOCAL(1),
  // self(-1) == suffix
  var_std__equal, 2, LOCAL(1), var_999_0_suffix, 1, LOCAL(2),
  // self(-1) == suffix
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1005, 21),
  POS(1005, 21),
  POS(1005, 21)
};

static TAB_NUM t_lambda_71[] = {
  1, // locals
  0, // parameters
  // range(self 1 -2)
  var_range, 3, var_998_0_self, num_1, minus_num_2, 1, LOCAL(1),
  //  range(self 1 -2)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1006, 12),
  POS(1006, 11)
};

static TAB_NUM t_lambda_72[] = {
  0, // locals
  0, // parameters
  //  self
  LET, 1, var_998_0_self, TAIL_CALL,
  POS(1007, 11)
};

static TAB_NUM t_lambda_73[] = {
  3, // locals
  0, // parameters
  // $slen length_of(suffix)
  var_length_of, 1, var_999_0_suffix, 1, var_1009_1_slen,
  // len >= slen && range(self -slen -1) == suffix
  var_std__less, 2, var_1001_1_len, var_1009_1_slen, 1, LOCAL(1),
  // len >= slen && range(self -slen -1) == suffix
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // len >= slen && range(self -slen -1) == suffix
  var_std__and, 2, LOCAL(2), lambda_74, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_75, lambda_76, TAIL_CALL,
  POS(1009, 7),
  POS(1011, 9),
  POS(1011, 9),
  POS(1011, 9),
  POS(1010, 7)
};

static TAB_NUM t_lambda_74[] = {
  3, // locals
  0, // parameters
  // slen -1) == suffix
  var_std__negate, 1, var_1009_1_slen, 1, LOCAL(1),
  // range(self -slen -1) == suffix
  var_range, 3, var_998_0_self, LOCAL(1), minus_num_1, 1, LOCAL(2),
  // range(self -slen -1) == suffix
  var_std__equal, 2, LOCAL(2), var_999_0_suffix, 1, LOCAL(3),
  // range(self -slen -1) == suffix
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(1011, 36),
  POS(1011, 24),
  POS(1011, 24),
  POS(1011, 24)
};

static TAB_NUM t_lambda_75[] = {
  3, // locals
  0, // parameters
  // slen-1)
  var_std__negate, 1, var_1009_1_slen, 1, LOCAL(1),
  // slen-1)
  var_std__minus, 2, LOCAL(1), num_1, 1, LOCAL(2),
  // range(self 1 -slen-1)
  var_range, 3, var_998_0_self, num_1, LOCAL(2), 1, LOCAL(3),
  //  range(self 1 -slen-1)
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(1012, 26),
  POS(1012, 26),
  POS(1012, 12),
  POS(1012, 11)
};

static TAB_NUM t_lambda_76[] = {
  0, // locals
  0, // parameters
  //  self
  LET, 1, var_998_0_self, TAIL_CALL,
  POS(1013, 11)
};

static TAB_NUM t_func_std_types__string___contains[] = {
  4, // locals
  2, // parameters
  LOCAL(2), // 1038_0_self
  LOCAL(3), // 1039_0_expr
  // search $pos $_len expr self
  var_search, 2, LOCAL(3), LOCAL(2), 2, LOCAL(4), LOCAL(1),
  // is_defined
  var_is_defined, 1, LOCAL(4), 1, LOCAL(1),
  // -> pos.is_defined
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1041, 3),
  POS(1042, 10),
  POS(1042, 3)
};

static TAB_NUM t_func_std__split[] = {
  1, // locals
  -2, // parameters
  MANDATORY_PARAMETER, var_1067_0_self,
  chr_32, var_1068_0_separator,
  // is_empty
  var_is_empty, 1, var_1067_0_self, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_77, lambda_78, TAIL_CALL,
  POS(1071, 10),
  POS(1070, 3)
};

static TAB_NUM t_lambda_77[] = {
  0, // locals
  0, // parameters
  //  empty_list
  LET, 1, var_empty_list, TAIL_CALL,
  POS(1072, 7)
};

static TAB_NUM t_lambda_78[] = {
  0, // locals
  0, // parameters
  // $items empty_list
  LET, 1, var_empty_list, 1, var_1074_1_items,
  // loop:
  var_loop, 1, lambda_2_loop, TAIL_CALL,
  POS(1074, 7),
  POS(1075, 7)
};

static TAB_NUM t_lambda_2_loop[] = {
  1, // locals
  0, // parameters
  // search $pos $len separator self
  var_search, 2, var_1068_0_separator, var_1067_0_self, 2, var_1076_8_pos, var_1076_13_len,
  // is_defined:
  var_is_defined, 1, var_1076_8_pos, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_pos_is_defined, lambda_79, TAIL_CALL,
  POS(1076, 9),
  POS(1078, 15),
  POS(1077, 9)
};

static TAB_NUM t_lambda_pos_is_defined[] = {
  2, // locals
  0, // parameters
  // pos-1)
  var_std__minus, 2, var_1076_8_pos, num_1, 1, LOCAL(1),
  // range(self 1 pos-1)
  var_range, 3, var_1067_0_self, num_1, LOCAL(1), 1, LOCAL(2),
  // push &items range(self 1 pos-1)
  var_push, 2, var_1074_1_items, LOCAL(2), 1, var_1074_1_items,
  // pos+len -1
  var_std__plus, 2, var_1076_8_pos, var_1076_13_len, 1, LOCAL(1),
  // range &self pos+len -1
  var_range, 3, var_1067_0_self, LOCAL(1), minus_num_1, 1, var_1067_0_self,
  // next
  var_next, 0, TAIL_CALL,
  POS(1079, 38),
  POS(1079, 25),
  POS(1079, 13),
  POS(1080, 25),
  POS(1080, 13),
  POS(1081, 13)
};

static TAB_NUM t_lambda_79[] = {
  1, // locals
  0, // parameters
  // is_empty
  var_is_empty, 1, var_1067_0_self, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_80, lambda_81, TAIL_CALL,
  POS(1084, 20),
  POS(1083, 13)
};

static TAB_NUM t_lambda_80[] = {
  0, // locals
  0, // parameters
  //  items
  LET, 1, var_1074_1_items, TAIL_CALL,
  POS(1085, 17)
};

static TAB_NUM t_lambda_81[] = {
  1, // locals
  0, // parameters
  // push(items self)
  var_push, 2, var_1074_1_items, var_1067_0_self, 1, LOCAL(1),
  //  push(items self)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1086, 18),
  POS(1086, 17)
};

static TAB_NUM t_func_std__join[] = {
  1, // locals
  -2, // parameters
  MANDATORY_PARAMETER, LOCAL(1), // 1111_0_items
  string_2, var_1112_0_separator,
  // to_string &separator
  var_to_string, 1, var_1112_0_separator, 1, var_1112_0_separator,
  // map_reduce
  var_map_reduce, 4, LOCAL(1), var_to_string, lambda_82, string_1, TAIL_CALL,
  POS(1114, 3),
  POS(1115, 3)
};

static TAB_NUM t_lambda_82[] = {
  2, // locals
  2, // parameters
  LOCAL(1), // 1117_3_left
  LOCAL(2), // 1117_8_right
  // append left separator right
  var_append, 3, LOCAL(1), var_1112_0_separator, LOCAL(2), TAIL_CALL,
  POS(1117, 20)
};

static TAB_NUM t_func_std__trim[] = {
  0, // locals
  -2, // parameters
  MANDATORY_PARAMETER, var_1141_0_self,
  var_is_a_whitespace_character, var_1142_0_test,
  // $s 1
  LET, 1, num_1, 1, var_1144_1_s,
  // $e length_of(self)
  var_length_of, 1, var_1141_0_self, 1, var_1145_1_e,
  // loop:
  var_loop, 1, lambda_3_loop, TAIL_CALL,
  POS(1144, 3),
  POS(1145, 3),
  POS(1146, 3)
};

static TAB_NUM t_lambda_3_loop[] = {
  3, // locals
  0, // parameters
  // e && test(self(s)):
  var_std__less, 2, var_1145_1_e, var_1144_1_s, 1, LOCAL(1),
  // e && test(self(s)):
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // e && test(self(s)):
  var_std__and, 2, LOCAL(2), lambda_83, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_84, lambda_85, TAIL_CALL,
  POS(1148, 12),
  POS(1148, 12),
  POS(1148, 12),
  POS(1147, 5)
};

static TAB_NUM t_lambda_83[] = {
  2, // locals
  0, // parameters
  // self(s)):
  var_1141_0_self, 1, var_1144_1_s, 1, LOCAL(1),
  // test(self(s)):
  var_1142_0_test, 1, LOCAL(1), 1, LOCAL(2),
  // test(self(s)):
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1148, 22),
  POS(1148, 17),
  POS(1148, 17)
};

static TAB_NUM t_lambda_84[] = {
  0, // locals
  0, // parameters
  // inc &s
  var_inc, 1, var_1144_1_s, 1, var_1144_1_s,
  // next
  var_next, 0, TAIL_CALL,
  POS(1149, 9),
  POS(1150, 9)
};

static TAB_NUM t_lambda_85[] = {
  0, // locals
  0, // parameters
  // loop:
  var_loop, 1, lambda_4_loop, TAIL_CALL,
  POS(1152, 9)
};

static TAB_NUM t_lambda_4_loop[] = {
  3, // locals
  0, // parameters
  // e >= s && test(self(e)):
  var_std__less, 2, var_1145_1_e, var_1144_1_s, 1, LOCAL(1),
  // e >= s && test(self(e)):
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // e >= s && test(self(e)):
  var_std__and, 2, LOCAL(2), lambda_86, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_87, lambda_88, TAIL_CALL,
  POS(1154, 13),
  POS(1154, 13),
  POS(1154, 13),
  POS(1153, 11)
};

static TAB_NUM t_lambda_86[] = {
  2, // locals
  0, // parameters
  // self(e)):
  var_1141_0_self, 1, var_1145_1_e, 1, LOCAL(1),
  // test(self(e)):
  var_1142_0_test, 1, LOCAL(1), 1, LOCAL(2),
  // test(self(e)):
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1154, 28),
  POS(1154, 23),
  POS(1154, 23)
};

static TAB_NUM t_lambda_87[] = {
  0, // locals
  0, // parameters
  // dec &e
  var_dec, 1, var_1145_1_e, 1, var_1145_1_e,
  // next
  var_next, 0, TAIL_CALL,
  POS(1155, 15),
  POS(1156, 15)
};

static TAB_NUM t_lambda_88[] = {
  0, // locals
  0, // parameters
  // range self s e
  var_range, 3, var_1141_0_self, var_1144_1_s, var_1145_1_e, TAIL_CALL,
  POS(1158, 15)
};

static TAB_NUM t_func_std__trim_left[] = {
  0, // locals
  -2, // parameters
  MANDATORY_PARAMETER, var_1181_0_self,
  var_is_a_whitespace_character, var_1182_0_test,
  // $s 1
  LET, 1, num_1, 1, var_1184_1_s,
  // $e length_of(self)
  var_length_of, 1, var_1181_0_self, 1, var_1185_1_e,
  // loop:
  var_loop, 1, lambda_5_loop, TAIL_CALL,
  POS(1184, 3),
  POS(1185, 3),
  POS(1186, 3)
};

static TAB_NUM t_lambda_5_loop[] = {
  3, // locals
  0, // parameters
  // e && test(self(s)):
  var_std__less, 2, var_1185_1_e, var_1184_1_s, 1, LOCAL(1),
  // e && test(self(s)):
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // e && test(self(s)):
  var_std__and, 2, LOCAL(2), lambda_89, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_90, lambda_91, TAIL_CALL,
  POS(1188, 12),
  POS(1188, 12),
  POS(1188, 12),
  POS(1187, 5)
};

static TAB_NUM t_lambda_89[] = {
  2, // locals
  0, // parameters
  // self(s)):
  var_1181_0_self, 1, var_1184_1_s, 1, LOCAL(1),
  // test(self(s)):
  var_1182_0_test, 1, LOCAL(1), 1, LOCAL(2),
  // test(self(s)):
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1188, 22),
  POS(1188, 17),
  POS(1188, 17)
};

static TAB_NUM t_lambda_90[] = {
  0, // locals
  0, // parameters
  // inc &s
  var_inc, 1, var_1184_1_s, 1, var_1184_1_s,
  // next
  var_next, 0, TAIL_CALL,
  POS(1189, 9),
  POS(1190, 9)
};

static TAB_NUM t_lambda_91[] = {
  0, // locals
  0, // parameters
  // range self s e
  var_range, 3, var_1181_0_self, var_1184_1_s, var_1185_1_e, TAIL_CALL,
  POS(1192, 9)
};

static TAB_NUM t_func_std__trim_right[] = {
  0, // locals
  -2, // parameters
  MANDATORY_PARAMETER, var_1215_0_self,
  var_is_a_whitespace_character, var_1216_0_test,
  // $e length_of(self)
  var_length_of, 1, var_1215_0_self, 1, var_1218_1_e,
  // loop:
  var_loop, 1, lambda_6_loop, TAIL_CALL,
  POS(1218, 3),
  POS(1219, 3)
};

static TAB_NUM t_lambda_6_loop[] = {
  3, // locals
  0, // parameters
  // e >= 1 && test(self(e)):
  var_std__less, 2, var_1218_1_e, num_1, 1, LOCAL(1),
  // e >= 1 && test(self(e)):
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // e >= 1 && test(self(e)):
  var_std__and, 2, LOCAL(2), lambda_92, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_93, lambda_94, TAIL_CALL,
  POS(1221, 7),
  POS(1221, 7),
  POS(1221, 7),
  POS(1220, 5)
};

static TAB_NUM t_lambda_92[] = {
  2, // locals
  0, // parameters
  // self(e)):
  var_1215_0_self, 1, var_1218_1_e, 1, LOCAL(1),
  // test(self(e)):
  var_1216_0_test, 1, LOCAL(1), 1, LOCAL(2),
  // test(self(e)):
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1221, 22),
  POS(1221, 17),
  POS(1221, 17)
};

static TAB_NUM t_lambda_93[] = {
  0, // locals
  0, // parameters
  // dec &e
  var_dec, 1, var_1218_1_e, 1, var_1218_1_e,
  // next
  var_next, 0, TAIL_CALL,
  POS(1222, 9),
  POS(1223, 9)
};

static TAB_NUM t_lambda_94[] = {
  0, // locals
  0, // parameters
  // range self 1 e
  var_range, 3, var_1215_0_self, num_1, var_1218_1_e, TAIL_CALL,
  POS(1225, 9)
};

static TAB_NUM t_func_std__normalize[] = {
  0, // locals
  1, // parameters
  var_1249_0_self,
  // $buf ""
  LET, 1, string_1, 1, var_1251_1_buf,
  // $e length_of(self)
  var_length_of, 1, var_1249_0_self, 1, var_1252_1_e,
  // $i 0
  LET, 1, num_0, 1, var_1253_1_i,
  // loop:
  var_loop, 1, lambda_7_loop, TAIL_CALL,
  POS(1251, 3),
  POS(1252, 3),
  POS(1253, 3),
  POS(1254, 3)
};

static TAB_NUM t_lambda_7_loop[] = {
  0, // locals
  0, // parameters
  // loop
  var_loop, 2, lambda_95, lambda_98, TAIL_CALL,
  POS(1255, 5)
};

static TAB_NUM t_lambda_95[] = {
  1, // locals
  0, // parameters
  // inc &i
  var_inc, 1, var_1253_1_i, 1, var_1253_1_i,
  // e
  var_std__less, 2, var_1252_1_e, var_1253_1_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_96, lambda_97, TAIL_CALL,
  POS(1257, 9),
  POS(1259, 15),
  POS(1258, 9)
};

static TAB_NUM t_lambda_96[] = {
  0, // locals
  0, // parameters
  //  buf
  LET, 1, var_1251_1_buf, TAIL_CALL,
  POS(1260, 13)
};

static TAB_NUM t_lambda_97[] = {
  2, // locals
  0, // parameters
  // self(i).is_a_whitespace_character
  var_1249_0_self, 1, var_1253_1_i, 1, LOCAL(1),
  // is_a_whitespace_character
  var_is_a_whitespace_character, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), var_next, var_break, TAIL_CALL,
  POS(1263, 15),
  POS(1263, 23),
  POS(1262, 13)
};

static TAB_NUM t_lambda_98[] = {
  1, // locals
  0, // parameters
  // is_not_empty &buf -> push(buf ' ')
  var_is_not_empty, 1, var_1251_1_buf, 1, LOCAL(1),
  // update_if buf.is_not_empty &buf -> push(buf ' ')
  var_update_if, 3, LOCAL(1), var_1251_1_buf, lambda_99, 1, var_1251_1_buf,
  // $s i
  LET, 1, var_1253_1_i, 1, var_1268_1_s,
  // loop
  var_loop, 2, lambda_100, lambda_103, TAIL_CALL,
  POS(1267, 23),
  POS(1267, 9),
  POS(1268, 9),
  POS(1269, 9)
};

static TAB_NUM t_lambda_99[] = {
  1, // locals
  0, // parameters
  // push(buf ' ')
  var_push, 2, var_1251_1_buf, chr_32, 1, LOCAL(1),
  //  push(buf ' ')
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1267, 44),
  POS(1267, 43)
};

static TAB_NUM t_lambda_100[] = {
  1, // locals
  0, // parameters
  // inc &i
  var_inc, 1, var_1253_1_i, 1, var_1253_1_i,
  // e
  var_std__less, 2, var_1252_1_e, var_1253_1_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_101, lambda_102, TAIL_CALL,
  POS(1271, 13),
  POS(1273, 19),
  POS(1272, 13)
};

static TAB_NUM t_lambda_101[] = {
  2, // locals
  0, // parameters
  // range(self s e))
  var_range, 3, var_1249_0_self, var_1268_1_s, var_1252_1_e, 1, LOCAL(1),
  // append(buf range(self s e))
  var_append, 2, var_1251_1_buf, LOCAL(1), 1, LOCAL(2),
  //  append(buf range(self s e))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1274, 29),
  POS(1274, 18),
  POS(1274, 17)
};

static TAB_NUM t_lambda_102[] = {
  2, // locals
  0, // parameters
  // self(i).is_a_whitespace_character
  var_1249_0_self, 1, var_1253_1_i, 1, LOCAL(1),
  // is_a_whitespace_character
  var_is_a_whitespace_character, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), var_break, var_next, TAIL_CALL,
  POS(1277, 19),
  POS(1277, 27),
  POS(1276, 17)
};

static TAB_NUM t_lambda_103[] = {
  2, // locals
  0, // parameters
  // i-1)
  var_std__minus, 2, var_1253_1_i, num_1, 1, LOCAL(1),
  // range(self s i-1)
  var_range, 3, var_1249_0_self, var_1268_1_s, LOCAL(1), 1, LOCAL(2),
  // append &buf range(self s i-1)
  var_append, 2, var_1251_1_buf, LOCAL(2), 1, var_1251_1_buf,
  // next
  var_next, 0, TAIL_CALL,
  POS(1281, 38),
  POS(1281, 25),
  POS(1281, 13),
  POS(1282, 13)
};

static TAB_NUM t_func_std__parse_integer[] = {
  0, // locals
  1, // parameters
  var_1311_0_self,
  // $orig self
  LET, 1, var_1311_0_self, 1, var_1331_1_orig,
  // $negate self .has_prefix. '-'
  var_has_prefix, 2, var_1311_0_self, chr_45, 1, var_1332_1_negate,
  // !self
  var_if, 3, var_1332_1_negate, lambda_110, lambda_111, 1, var_1311_0_self,
  // $value 0
  LET, 1, num_0, 1, var_1338_1_value,
  // cond
  var_cond, 4, lambda_112, lambda_117, lambda_122, lambda_127, TAIL_CALL,
  POS(1331, 3),
  POS(1332, 3),
  POS(1333, 3),
  POS(1338, 3),
  POS(1339, 3)
};

static TAB_NUM t_func_maybe_negated[] = {
  0, // locals
  0, // parameters
  // if
  var_if, 3, var_1332_1_negate, lambda_104, lambda_105, TAIL_CALL,
  POS(1314, 5)
};

static TAB_NUM t_lambda_104[] = {
  1, // locals
  0, // parameters
  // value
  var_std__negate, 1, var_1338_1_value, 1, LOCAL(1),
  //  -value
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1316, 11),
  POS(1316, 9)
};

static TAB_NUM t_lambda_105[] = {
  0, // locals
  0, // parameters
  //  value
  LET, 1, var_1338_1_value, TAIL_CALL,
  POS(1317, 9)
};

static TAB_NUM t_func_partial_match[] = {
  1, // locals
  1, // parameters
  var_1319_17_idx,
  // 1
  var_std__less, 2, num_1, var_1319_17_idx, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_106, lambda_107, TAIL_CALL,
  POS(1321, 13),
  POS(1320, 5)
};

static TAB_NUM t_lambda_106[] = {
  2, // locals
  0, // parameters
  // range(self idx -1) maybe_negated()
  var_range, 3, var_1311_0_self, var_1319_17_idx, minus_num_1, 1, LOCAL(1),
  // maybe_negated()
  func_maybe_negated, 0, 1, LOCAL(2),
  //  range(self idx -1) maybe_negated()
  LET, 2, LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(1322, 10),
  POS(1322, 29),
  POS(1322, 9)
};

static TAB_NUM t_lambda_107[] = {
  0, // locals
  0, // parameters
  //  orig undefined
  LET, 2, var_1331_1_orig, var_undefined, TAIL_CALL,
  POS(1323, 9)
};

static TAB_NUM t_func_exhausted[] = {
  1, // locals
  0, // parameters
  // is_empty
  var_is_empty, 1, var_1311_0_self, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_108, lambda_109, TAIL_CALL,
  POS(1327, 12),
  POS(1326, 5)
};

static TAB_NUM t_lambda_108[] = {
  0, // locals
  0, // parameters
  //  orig undefined
  LET, 2, var_1331_1_orig, var_undefined, TAIL_CALL,
  POS(1328, 9)
};

static TAB_NUM t_lambda_109[] = {
  1, // locals
  0, // parameters
  // maybe_negated()
  func_maybe_negated, 0, 1, LOCAL(1),
  //  "" maybe_negated()
  LET, 2, string_1, LOCAL(1), TAIL_CALL,
  POS(1329, 13),
  POS(1329, 9)
};

static TAB_NUM t_lambda_110[] = {
  1, // locals
  0, // parameters
  // range(self 2 -1)
  var_range, 3, var_1311_0_self, num_2, minus_num_1, 1, LOCAL(1),
  //  range(self 2 -1)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1336, 10),
  POS(1336, 9)
};

static TAB_NUM t_lambda_111[] = {
  0, // locals
  0, // parameters
  //  self
  LET, 1, var_1311_0_self, TAIL_CALL,
  POS(1337, 9)
};

static TAB_NUM t_lambda_112[] = {
  1, // locals
  0, // parameters
  // self .has_prefix. "0b":
  var_has_prefix, 2, var_1311_0_self, str_0b, 1, LOCAL(1),
  //  self .has_prefix. "0b":
  LET, 2, LOCAL(1), lambda_113, TAIL_CALL,
  POS(1340, 8),
  POS(1340, 7)
};

static TAB_NUM t_lambda_113[] = {
  0, // locals
  0, // parameters
  // range &self 3 -1
  var_range, 3, var_1311_0_self, num_3, minus_num_1, 1, var_1311_0_self,
  // for_each self
  var_for_each, 3, var_1311_0_self, lambda_114, func_exhausted, TAIL_CALL,
  POS(1341, 7),
  POS(1342, 7)
};

static TAB_NUM t_lambda_114[] = {
  0, // locals
  2, // parameters
  var_1343_3_idx,
  var_1343_7_chr,
  // case
  var_case, 4, var_1343_7_chr, value_range_1346_1, lambda_115, lambda_116, TAIL_CALL,
  POS(1344, 11)
};

static TAB_NUM t_lambda_115[] = {
  2, // locals
  0, // parameters
  // value << 1)+(chr-'0')
  var_std__shift_left, 2, var_1338_1_value, num_1, 1, LOCAL(1),
  // chr-'0')
  var_std__minus, 2, var_1343_7_chr, chr_48, 1, LOCAL(2),
  // !value (value << 1)+(chr-'0')
  var_std__plus, 2, LOCAL(1), LOCAL(2), 1, var_1338_1_value,
  // next
  var_next, 0, TAIL_CALL,
  POS(1347, 23),
  POS(1347, 36),
  POS(1347, 15),
  POS(1348, 15)
};

static TAB_NUM t_lambda_116[] = {
  0, // locals
  0, // parameters
  // partial_match idx
  func_partial_match, 1, var_1343_3_idx, TAIL_CALL,
  POS(1350, 15)
};

static TAB_NUM t_lambda_117[] = {
  1, // locals
  0, // parameters
  // self .has_prefix. "0o":
  var_has_prefix, 2, var_1311_0_self, str_0o, 1, LOCAL(1),
  //  self .has_prefix. "0o":
  LET, 2, LOCAL(1), lambda_118, TAIL_CALL,
  POS(1352, 8),
  POS(1352, 7)
};

static TAB_NUM t_lambda_118[] = {
  0, // locals
  0, // parameters
  // range &self 3 -1
  var_range, 3, var_1311_0_self, num_3, minus_num_1, 1, var_1311_0_self,
  // for_each self
  var_for_each, 3, var_1311_0_self, lambda_119, func_exhausted, TAIL_CALL,
  POS(1353, 7),
  POS(1354, 7)
};

static TAB_NUM t_lambda_119[] = {
  0, // locals
  2, // parameters
  var_1355_3_idx,
  var_1355_7_chr,
  // case chr
  var_case, 4, var_1355_7_chr, value_range_1357_1, lambda_120, lambda_121, TAIL_CALL,
  POS(1356, 11)
};

static TAB_NUM t_lambda_120[] = {
  2, // locals
  0, // parameters
  // value << 3)+(chr-'0')
  var_std__shift_left, 2, var_1338_1_value, num_3, 1, LOCAL(1),
  // chr-'0')
  var_std__minus, 2, var_1355_7_chr, chr_48, 1, LOCAL(2),
  // !value (value << 3)+(chr-'0')
  var_std__plus, 2, LOCAL(1), LOCAL(2), 1, var_1338_1_value,
  // next
  var_next, 0, TAIL_CALL,
  POS(1358, 23),
  POS(1358, 36),
  POS(1358, 15),
  POS(1359, 15)
};

static TAB_NUM t_lambda_121[] = {
  0, // locals
  0, // parameters
  // partial_match idx
  func_partial_match, 1, var_1355_3_idx, TAIL_CALL,
  POS(1361, 15)
};

static TAB_NUM t_lambda_122[] = {
  1, // locals
  0, // parameters
  // self .has_prefix. "0x":
  var_has_prefix, 2, var_1311_0_self, str_0x, 1, LOCAL(1),
  //  self .has_prefix. "0x":
  LET, 2, LOCAL(1), lambda_123, TAIL_CALL,
  POS(1363, 8),
  POS(1363, 7)
};

static TAB_NUM t_lambda_123[] = {
  0, // locals
  0, // parameters
  // range &self 3 -1
  var_range, 3, var_1311_0_self, num_3, minus_num_1, 1, var_1311_0_self,
  // for_each self
  var_for_each, 3, var_1311_0_self, lambda_124, func_exhausted, TAIL_CALL,
  POS(1364, 7),
  POS(1365, 7)
};

static TAB_NUM t_lambda_124[] = {
  0, // locals
  2, // parameters
  var_1366_3_idx,
  var_1366_7_chr,
  // case chr
  var_case, 8, var_1366_7_chr, value_range_1368_1, lambda_125, value_range_1371_1, lambda_a__f, value_range_1374_1, lambda_A__F, lambda_126, TAIL_CALL,
  POS(1367, 11)
};

static TAB_NUM t_lambda_125[] = {
  2, // locals
  0, // parameters
  // value << 4)+(chr-'0')
  var_std__shift_left, 2, var_1338_1_value, num_4, 1, LOCAL(1),
  // chr-'0')
  var_std__minus, 2, var_1366_7_chr, chr_48, 1, LOCAL(2),
  // !value (value << 4)+(chr-'0')
  var_std__plus, 2, LOCAL(1), LOCAL(2), 1, var_1338_1_value,
  // next
  var_next, 0, TAIL_CALL,
  POS(1369, 23),
  POS(1369, 36),
  POS(1369, 15),
  POS(1370, 15)
};

static TAB_NUM t_lambda_a__f[] = {
  3, // locals
  0, // parameters
  // value << 4)+(chr-'a')+10
  var_std__shift_left, 2, var_1338_1_value, num_4, 1, LOCAL(1),
  // chr-'a')+10
  var_std__minus, 2, var_1366_7_chr, chr_97, 1, LOCAL(2),
  // value << 4)+(chr-'a')+10
  var_std__plus, 2, LOCAL(1), LOCAL(2), 1, LOCAL(3),
  // !value (value << 4)+(chr-'a')+10
  var_std__plus, 2, LOCAL(3), num_10, 1, var_1338_1_value,
  // next
  var_next, 0, TAIL_CALL,
  POS(1372, 23),
  POS(1372, 36),
  POS(1372, 23),
  POS(1372, 15),
  POS(1373, 15)
};

static TAB_NUM t_lambda_A__F[] = {
  3, // locals
  0, // parameters
  // value << 4)+(chr-'A')+10
  var_std__shift_left, 2, var_1338_1_value, num_4, 1, LOCAL(1),
  // chr-'A')+10
  var_std__minus, 2, var_1366_7_chr, chr_65, 1, LOCAL(2),
  // value << 4)+(chr-'A')+10
  var_std__plus, 2, LOCAL(1), LOCAL(2), 1, LOCAL(3),
  // !value (value << 4)+(chr-'A')+10
  var_std__plus, 2, LOCAL(3), num_10, 1, var_1338_1_value,
  // next
  var_next, 0, TAIL_CALL,
  POS(1375, 23),
  POS(1375, 36),
  POS(1375, 23),
  POS(1375, 15),
  POS(1376, 15)
};

static TAB_NUM t_lambda_126[] = {
  0, // locals
  0, // parameters
  // partial_match idx
  func_partial_match, 1, var_1366_3_idx, TAIL_CALL,
  POS(1378, 15)
};

static TAB_NUM t_lambda_127[] = {
  0, // locals
  0, // parameters
  //  true:
  LET, 2, var_true, lambda_128, TAIL_CALL,
  POS(1380, 7)
};

static TAB_NUM t_lambda_128[] = {
  0, // locals
  0, // parameters
  // for_each self
  var_for_each, 3, var_1311_0_self, lambda_129, func_exhausted, TAIL_CALL,
  POS(1381, 7)
};

static TAB_NUM t_lambda_129[] = {
  0, // locals
  2, // parameters
  var_1382_3_idx,
  var_1382_7_chr,
  // case chr
  var_case, 4, var_1382_7_chr, value_range_1368_1, lambda_130, lambda_131, TAIL_CALL,
  POS(1383, 11)
};

static TAB_NUM t_lambda_130[] = {
  2, // locals
  0, // parameters
  // 10*value+(chr-'0')
  var_std__times, 2, num_10, var_1338_1_value, 1, LOCAL(1),
  // chr-'0')
  var_std__minus, 2, var_1382_7_chr, chr_48, 1, LOCAL(2),
  // !value 10*value+(chr-'0')
  var_std__plus, 2, LOCAL(1), LOCAL(2), 1, var_1338_1_value,
  // next
  var_next, 0, TAIL_CALL,
  POS(1385, 22),
  POS(1385, 32),
  POS(1385, 15),
  POS(1386, 15)
};

static TAB_NUM t_lambda_131[] = {
  0, // locals
  0, // parameters
  // partial_match idx
  func_partial_match, 1, var_1382_3_idx, TAIL_CALL,
  POS(1388, 15)
};

static TAB_NUM t_func_std__parse_number[] = {
  1, // locals
  1, // parameters
  var_1418_0_self,
  // $i 1
  LET, 1, num_1, 1, var_1420_1_i,
  // $n length_of(self)
  var_length_of, 1, var_1418_0_self, 1, var_1421_1_n,
  // n
  var_std__less, 2, var_1421_1_n, var_1420_1_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_132, lambda_133, TAIL_CALL,
  POS(1420, 3),
  POS(1421, 3),
  POS(1423, 9),
  POS(1422, 3)
};

static TAB_NUM t_lambda_132[] = {
  0, // locals
  0, // parameters
  //  self undefined
  LET, 2, var_1418_0_self, var_undefined, TAIL_CALL,
  POS(1424, 7)
};

static TAB_NUM t_lambda_133[] = {
  3, // locals
  0, // parameters
  // $sign_chr self(1)
  var_1418_0_self, 1, num_1, 1, var_1426_1_sign_chr,
  // sign_chr == '-' || sign_chr == '+' &i -> i+1
  var_std__equal, 2, var_1426_1_sign_chr, chr_45, 1, LOCAL(1),
  // sign_chr == '-' || sign_chr == '+' &i -> i+1
  var_std__or, 2, LOCAL(1), lambda_134, 1, LOCAL(2),
  // update_if sign_chr == '-' || sign_chr == '+' &i -> i+1
  var_update_if, 3, LOCAL(2), var_1420_1_i, lambda_135, 1, var_1420_1_i,
  // self(i) == '0' && i+1 < n:
  var_1418_0_self, 1, var_1420_1_i, 1, LOCAL(1),
  // self(i) == '0' && i+1 < n:
  var_std__equal, 2, LOCAL(1), chr_48, 1, LOCAL(2),
  // self(i) == '0' && i+1 < n:
  var_std__and, 2, LOCAL(2), lambda_136, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_137, func_parse, TAIL_CALL,
  POS(1426, 7),
  POS(1427, 17),
  POS(1427, 17),
  POS(1427, 7),
  POS(1429, 9),
  POS(1429, 9),
  POS(1429, 9),
  POS(1428, 7)
};

static TAB_NUM t_lambda_134[] = {
  1, // locals
  0, // parameters
  // sign_chr == '+' &i -> i+1
  var_std__equal, 2, var_1426_1_sign_chr, chr_43, 1, LOCAL(1),
  // sign_chr == '+' &i -> i+1
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1427, 36),
  POS(1427, 36)
};

static TAB_NUM t_lambda_135[] = {
  1, // locals
  0, // parameters
  // i+1
  var_std__plus, 2, var_1420_1_i, num_1, 1, LOCAL(1),
  //  i+1
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1427, 58),
  POS(1427, 57)
};

static TAB_NUM t_lambda_136[] = {
  2, // locals
  0, // parameters
  // i+1 < n:
  var_std__plus, 2, var_1420_1_i, num_1, 1, LOCAL(1),
  // i+1 < n:
  var_std__less, 2, LOCAL(1), var_1421_1_n, 1, LOCAL(2),
  // i+1 < n:
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1429, 27),
  POS(1429, 27),
  POS(1429, 27)
};

static TAB_NUM t_lambda_137[] = {
  2, // locals
  0, // parameters
  // i+1)
  var_std__plus, 2, var_1420_1_i, num_1, 1, LOCAL(1),
  // self(i+1)
  var_1418_0_self, 1, LOCAL(1), 1, LOCAL(2),
  // case self(i+1)
  var_case, 8, LOCAL(2), chr_98, lambda_b, chr_111, lambda_o, chr_120, lambda_x, func_parse, TAIL_CALL,
  POS(1430, 21),
  POS(1430, 16),
  POS(1430, 11)
};

static TAB_NUM t_lambda_b[] = {
  1, // locals
  0, // parameters
  // i+2
  var_std__plus, 2, var_1420_1_i, num_2, 1, LOCAL(1),
  // parse_binary self i+2
  func_parse_binary, 2, var_1418_0_self, LOCAL(1), TAIL_CALL,
  POS(1431, 36),
  POS(1431, 18)
};

static TAB_NUM t_lambda_o[] = {
  1, // locals
  0, // parameters
  // i+2
  var_std__plus, 2, var_1420_1_i, num_2, 1, LOCAL(1),
  // parse_octal self i+2
  func_parse_octal, 2, var_1418_0_self, LOCAL(1), TAIL_CALL,
  POS(1432, 35),
  POS(1432, 18)
};

static TAB_NUM t_lambda_x[] = {
  1, // locals
  0, // parameters
  // i+2
  var_std__plus, 2, var_1420_1_i, num_2, 1, LOCAL(1),
  // parse_hex self i+2
  var_parse_hex, 2, var_1418_0_self, LOCAL(1), TAIL_CALL,
  POS(1433, 33),
  POS(1433, 18)
};

static TAB_NUM t_func_parse[] = {
  0, // locals
  0, // parameters
  // skip_one_ore_more_digits:
  func_skip_one_ore_more_digits, 1, lambda_skip_one_ore_more_digits, TAIL_CALL,
  POS(1438, 5)
};

static TAB_NUM t_lambda_skip_one_ore_more_digits[] = {
  1, // locals
  0, // parameters
  // n return_integer
  var_std__less, 2, var_1421_1_n, var_1420_1_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), func_return_integer, lambda_138, TAIL_CALL,
  POS(1440, 13),
  POS(1439, 7)
};

static TAB_NUM t_lambda_138[] = {
  1, // locals
  0, // parameters
  // self(i)
  var_1418_0_self, 1, var_1420_1_i, 1, LOCAL(1),
  // case self(i)
  var_case, 6, LOCAL(1), chr_46, lambda_139, sequence_1453_1, func_handle_exponent, func_return_integer, TAIL_CALL,
  POS(1442, 16),
  POS(1442, 11)
};

static TAB_NUM t_lambda_139[] = {
  0, // locals
  0, // parameters
  // !i i+1
  var_std__plus, 2, var_1420_1_i, num_1, 1, var_1420_1_i,
  // skip_one_ore_more_digits:
  func_skip_one_ore_more_digits, 1, lambda_2_skip_one_ore_more_digits, TAIL_CALL,
  POS(1444, 15),
  POS(1445, 15)
};

static TAB_NUM t_lambda_2_skip_one_ore_more_digits[] = {
  1, // locals
  0, // parameters
  // n
  var_std__less, 2, var_1421_1_n, var_1420_1_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), func_return_real, lambda_140, TAIL_CALL,
  POS(1447, 23),
  POS(1446, 17)
};

static TAB_NUM t_lambda_140[] = {
  1, // locals
  0, // parameters
  // self(i)
  var_1418_0_self, 1, var_1420_1_i, 1, LOCAL(1),
  // case self(i)
  var_case, 4, LOCAL(1), sequence_1453_1, func_handle_exponent, func_return_real, TAIL_CALL,
  POS(1450, 26),
  POS(1450, 21)
};

static TAB_NUM t_func_skip_one_ore_more_digits[] = {
  1, // locals
  1, // parameters
  var_1456_28_cont,
  // n
  var_std__less, 2, var_1421_1_n, var_1420_1_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_141, lambda_142, TAIL_CALL,
  POS(1458, 13),
  POS(1457, 7)
};

static TAB_NUM t_lambda_141[] = {
  0, // locals
  0, // parameters
  //  self undefined
  LET, 2, var_1418_0_self, var_undefined, TAIL_CALL,
  POS(1459, 11)
};

static TAB_NUM t_lambda_142[] = {
  2, // locals
  0, // parameters
  // $digit self(i)
  var_1418_0_self, 1, var_1420_1_i, 1, var_1461_1_digit,
  // digit < '0' || digit > '9'
  var_std__less, 2, var_1461_1_digit, chr_48, 1, LOCAL(1),
  // digit < '0' || digit > '9'
  var_std__or, 2, LOCAL(1), lambda_143, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_144, lambda_145, TAIL_CALL,
  POS(1461, 11),
  POS(1463, 13),
  POS(1463, 13),
  POS(1462, 11)
};

static TAB_NUM t_lambda_143[] = {
  1, // locals
  0, // parameters
  // 9'
  var_std__less, 2, chr_57, var_1461_1_digit, 1, LOCAL(1),
  // digit > '9'
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1463, 37),
  POS(1463, 28)
};

static TAB_NUM t_lambda_144[] = {
  0, // locals
  0, // parameters
  //  self undefined
  LET, 2, var_1418_0_self, var_undefined, TAIL_CALL,
  POS(1464, 15)
};

static TAB_NUM t_lambda_145[] = {
  0, // locals
  0, // parameters
  // loop:
  var_loop, 1, lambda_8_loop, TAIL_CALL,
  POS(1466, 15)
};

static TAB_NUM t_lambda_8_loop[] = {
  1, // locals
  0, // parameters
  // !i i+1
  var_std__plus, 2, var_1420_1_i, num_1, 1, var_1420_1_i,
  // n
  var_std__less, 2, var_1421_1_n, var_1420_1_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), var_1456_28_cont, lambda_146, TAIL_CALL,
  POS(1467, 17),
  POS(1469, 23),
  POS(1468, 17)
};

static TAB_NUM t_lambda_146[] = {
  3, // locals
  0, // parameters
  // $next_digit self(i)
  var_1418_0_self, 1, var_1420_1_i, 1, var_1472_1_next_digit,
  // next_digit >= '0' && next_digit <= '9'
  var_std__less, 2, var_1472_1_next_digit, chr_48, 1, LOCAL(1),
  // next_digit >= '0' && next_digit <= '9'
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // next_digit >= '0' && next_digit <= '9'
  var_std__and, 2, LOCAL(2), lambda_147, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), var_next, var_1456_28_cont, TAIL_CALL,
  POS(1472, 21),
  POS(1474, 23),
  POS(1474, 23),
  POS(1474, 23),
  POS(1473, 21)
};

static TAB_NUM t_lambda_147[] = {
  2, // locals
  0, // parameters
  // 9'
  var_std__less, 2, chr_57, var_1472_1_next_digit, 1, LOCAL(1),
  // 9'
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // next_digit <= '9'
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1474, 59),
  POS(1474, 59),
  POS(1474, 44)
};

static TAB_NUM t_func_handle_exponent[] = {
  1, // locals
  0, // parameters
  // !i i+1
  var_std__plus, 2, var_1420_1_i, num_1, 1, var_1420_1_i,
  // n
  var_std__less, 2, var_1421_1_n, var_1420_1_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_148, lambda_149, TAIL_CALL,
  POS(1479, 7),
  POS(1481, 13),
  POS(1480, 7)
};

static TAB_NUM t_lambda_148[] = {
  0, // locals
  0, // parameters
  //  self undefined
  LET, 2, var_1418_0_self, var_undefined, TAIL_CALL,
  POS(1482, 11)
};

static TAB_NUM t_lambda_149[] = {
  2, // locals
  0, // parameters
  // $exp_sign_chr self(i)
  var_1418_0_self, 1, var_1420_1_i, 1, var_1484_1_exp_sign_chr,
  // exp_sign_chr == '-' || exp_sign_chr == '+' &i -> i+1
  var_std__equal, 2, var_1484_1_exp_sign_chr, chr_45, 1, LOCAL(1),
  // exp_sign_chr == '-' || exp_sign_chr == '+' &i -> i+1
  var_std__or, 2, LOCAL(1), lambda_150, 1, LOCAL(2),
  // update_if exp_sign_chr == '-' || exp_sign_chr == '+' &i -> i+1
  var_update_if, 3, LOCAL(2), var_1420_1_i, lambda_151, 1, var_1420_1_i,
  // skip_one_ore_more_digits return_real
  func_skip_one_ore_more_digits, 1, func_return_real, TAIL_CALL,
  POS(1484, 11),
  POS(1485, 21),
  POS(1485, 21),
  POS(1485, 11),
  POS(1486, 11)
};

static TAB_NUM t_lambda_150[] = {
  1, // locals
  0, // parameters
  // exp_sign_chr == '+' &i -> i+1
  var_std__equal, 2, var_1484_1_exp_sign_chr, chr_43, 1, LOCAL(1),
  // exp_sign_chr == '+' &i -> i+1
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1485, 44),
  POS(1485, 44)
};

static TAB_NUM t_lambda_151[] = {
  1, // locals
  0, // parameters
  // i+1
  var_std__plus, 2, var_1420_1_i, num_1, 1, LOCAL(1),
  //  i+1
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1485, 70),
  POS(1485, 69)
};

static TAB_NUM t_func_return_integer[] = {
  4, // locals
  0, // parameters
  // range(self i -1) integer(range(self 1 i-1))
  var_range, 3, var_1418_0_self, var_1420_1_i, minus_num_1, 1, LOCAL(1),
  // i-1))
  var_std__minus, 2, var_1420_1_i, num_1, 1, LOCAL(2),
  // range(self 1 i-1))
  var_range, 3, var_1418_0_self, num_1, LOCAL(2), 1, LOCAL(3),
  // integer(range(self 1 i-1))
  var_integer, 1, LOCAL(3), 1, LOCAL(4),
  //  range(self i -1) integer(range(self 1 i-1))
  LET, 2, LOCAL(1), LOCAL(4), TAIL_CALL,
  POS(1488, 24),
  POS(1488, 62),
  POS(1488, 49),
  POS(1488, 41),
  POS(1488, 23)
};

static TAB_NUM t_func_return_real[] = {
  4, // locals
  0, // parameters
  // range(self i -1) real(range(self 1 i-1))
  var_range, 3, var_1418_0_self, var_1420_1_i, minus_num_1, 1, LOCAL(1),
  // i-1))
  var_std__minus, 2, var_1420_1_i, num_1, 1, LOCAL(2),
  // range(self 1 i-1))
  var_range, 3, var_1418_0_self, num_1, LOCAL(2), 1, LOCAL(3),
  // real(range(self 1 i-1))
  var_real, 1, LOCAL(3), 1, LOCAL(4),
  //  range(self i -1) real(range(self 1 i-1))
  LET, 2, LOCAL(1), LOCAL(4), TAIL_CALL,
  POS(1490, 21),
  POS(1490, 56),
  POS(1490, 43),
  POS(1490, 38),
  POS(1490, 20)
};

static TAB_NUM t_func_parse_binary[] = {
  1, // locals
  2, // parameters
  var_1492_16_str,
  var_1492_20_i,
  // $n length_of(str)
  var_length_of, 1, var_1492_16_str, 1, var_1493_1_n,
  // n -> str undefined
  var_std__less, 2, var_1493_1_n, var_1492_20_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_152, lambda_153, TAIL_CALL,
  POS(1493, 3),
  POS(1495, 9),
  POS(1494, 3)
};

static TAB_NUM t_lambda_152[] = {
  0, // locals
  0, // parameters
  //  str undefined
  LET, 2, var_1492_16_str, var_undefined, TAIL_CALL,
  POS(1495, 13)
};

static TAB_NUM t_lambda_153[] = {
  2, // locals
  0, // parameters
  // $digit str(i)
  var_1492_16_str, 1, var_1492_20_i, 1, var_1497_1_digit,
  // digit < '0' || digit > '1'
  var_std__less, 2, var_1497_1_digit, chr_48, 1, LOCAL(1),
  // digit < '0' || digit > '1'
  var_std__or, 2, LOCAL(1), lambda_154, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_155, lambda_156, TAIL_CALL,
  POS(1497, 7),
  POS(1499, 9),
  POS(1499, 9),
  POS(1498, 7)
};

static TAB_NUM t_lambda_154[] = {
  1, // locals
  0, // parameters
  // 1'
  var_std__less, 2, chr_49, var_1497_1_digit, 1, LOCAL(1),
  // digit > '1'
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1499, 33),
  POS(1499, 24)
};

static TAB_NUM t_lambda_155[] = {
  0, // locals
  0, // parameters
  //  str undefined
  LET, 2, var_1492_16_str, var_undefined, TAIL_CALL,
  POS(1500, 11)
};

static TAB_NUM t_lambda_156[] = {
  0, // locals
  0, // parameters
  // $value digit-'0'
  var_std__minus, 2, var_1497_1_digit, chr_48, 1, var_1502_1_value,
  // loop:
  var_loop, 1, lambda_9_loop, TAIL_CALL,
  POS(1502, 11),
  POS(1503, 11)
};

static TAB_NUM t_lambda_9_loop[] = {
  1, // locals
  0, // parameters
  // !i i+1
  var_std__plus, 2, var_1492_20_i, num_1, 1, var_1492_20_i,
  // n
  var_std__less, 2, var_1493_1_n, var_1492_20_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_157, lambda_158, TAIL_CALL,
  POS(1504, 13),
  POS(1506, 19),
  POS(1505, 13)
};

static TAB_NUM t_lambda_157[] = {
  0, // locals
  0, // parameters
  //  "" value
  LET, 2, string_1, var_1502_1_value, TAIL_CALL,
  POS(1507, 17)
};

static TAB_NUM t_lambda_158[] = {
  3, // locals
  0, // parameters
  // $next_digit str(i)
  var_1492_16_str, 1, var_1492_20_i, 1, var_1509_1_next_digit,
  // next_digit >= '0' && next_digit <= '1':
  var_std__less, 2, var_1509_1_next_digit, chr_48, 1, LOCAL(1),
  // next_digit >= '0' && next_digit <= '1':
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // next_digit >= '0' && next_digit <= '1':
  var_std__and, 2, LOCAL(2), lambda_159, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_160, lambda_161, TAIL_CALL,
  POS(1509, 17),
  POS(1511, 19),
  POS(1511, 19),
  POS(1511, 19),
  POS(1510, 17)
};

static TAB_NUM t_lambda_159[] = {
  2, // locals
  0, // parameters
  // 1':
  var_std__less, 2, chr_49, var_1509_1_next_digit, 1, LOCAL(1),
  // 1':
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // next_digit <= '1':
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1511, 55),
  POS(1511, 55),
  POS(1511, 40)
};

static TAB_NUM t_lambda_160[] = {
  2, // locals
  0, // parameters
  // value << 1)+(next_digit-'0')
  var_std__shift_left, 2, var_1502_1_value, num_1, 1, LOCAL(1),
  // next_digit-'0')
  var_std__minus, 2, var_1509_1_next_digit, chr_48, 1, LOCAL(2),
  // !value (value << 1)+(next_digit-'0')
  var_std__plus, 2, LOCAL(1), LOCAL(2), 1, var_1502_1_value,
  // next
  var_next, 0, TAIL_CALL,
  POS(1512, 29),
  POS(1512, 42),
  POS(1512, 21),
  POS(1513, 21)
};

static TAB_NUM t_lambda_161[] = {
  1, // locals
  0, // parameters
  // range(str i -1) value
  var_range, 3, var_1492_16_str, var_1492_20_i, minus_num_1, 1, LOCAL(1),
  //  range(str i -1) value
  LET, 2, LOCAL(1), var_1502_1_value, TAIL_CALL,
  POS(1514, 22),
  POS(1514, 21)
};

static TAB_NUM t_func_parse_octal[] = {
  1, // locals
  2, // parameters
  var_1516_15_str,
  var_1516_19_i,
  // $n length_of(str)
  var_length_of, 1, var_1516_15_str, 1, var_1517_1_n,
  // n -> str undefined
  var_std__less, 2, var_1517_1_n, var_1516_19_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_162, lambda_163, TAIL_CALL,
  POS(1517, 3),
  POS(1519, 9),
  POS(1518, 3)
};

static TAB_NUM t_lambda_162[] = {
  0, // locals
  0, // parameters
  //  str undefined
  LET, 2, var_1516_15_str, var_undefined, TAIL_CALL,
  POS(1519, 13)
};

static TAB_NUM t_lambda_163[] = {
  2, // locals
  0, // parameters
  // $digit str(i)
  var_1516_15_str, 1, var_1516_19_i, 1, var_1521_1_digit,
  // digit < '0' || digit > '7'
  var_std__less, 2, var_1521_1_digit, chr_48, 1, LOCAL(1),
  // digit < '0' || digit > '7'
  var_std__or, 2, LOCAL(1), lambda_164, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_165, lambda_166, TAIL_CALL,
  POS(1521, 7),
  POS(1523, 9),
  POS(1523, 9),
  POS(1522, 7)
};

static TAB_NUM t_lambda_164[] = {
  1, // locals
  0, // parameters
  // 7'
  var_std__less, 2, chr_55, var_1521_1_digit, 1, LOCAL(1),
  // digit > '7'
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1523, 33),
  POS(1523, 24)
};

static TAB_NUM t_lambda_165[] = {
  0, // locals
  0, // parameters
  //  str undefined
  LET, 2, var_1516_15_str, var_undefined, TAIL_CALL,
  POS(1524, 11)
};

static TAB_NUM t_lambda_166[] = {
  0, // locals
  0, // parameters
  // $value digit-'0'
  var_std__minus, 2, var_1521_1_digit, chr_48, 1, var_1526_1_value,
  // loop:
  var_loop, 1, lambda_10_loop, TAIL_CALL,
  POS(1526, 11),
  POS(1527, 11)
};

static TAB_NUM t_lambda_10_loop[] = {
  1, // locals
  0, // parameters
  // !i i+1
  var_std__plus, 2, var_1516_19_i, num_1, 1, var_1516_19_i,
  // n
  var_std__less, 2, var_1517_1_n, var_1516_19_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_167, lambda_168, TAIL_CALL,
  POS(1528, 13),
  POS(1530, 19),
  POS(1529, 13)
};

static TAB_NUM t_lambda_167[] = {
  0, // locals
  0, // parameters
  //  "" value
  LET, 2, string_1, var_1526_1_value, TAIL_CALL,
  POS(1531, 17)
};

static TAB_NUM t_lambda_168[] = {
  3, // locals
  0, // parameters
  // $next_digit str(i)
  var_1516_15_str, 1, var_1516_19_i, 1, var_1533_1_next_digit,
  // next_digit >= '0' && next_digit <= '7':
  var_std__less, 2, var_1533_1_next_digit, chr_48, 1, LOCAL(1),
  // next_digit >= '0' && next_digit <= '7':
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // next_digit >= '0' && next_digit <= '7':
  var_std__and, 2, LOCAL(2), lambda_169, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_170, lambda_171, TAIL_CALL,
  POS(1533, 17),
  POS(1535, 19),
  POS(1535, 19),
  POS(1535, 19),
  POS(1534, 17)
};

static TAB_NUM t_lambda_169[] = {
  2, // locals
  0, // parameters
  // 7':
  var_std__less, 2, chr_55, var_1533_1_next_digit, 1, LOCAL(1),
  // 7':
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // next_digit <= '7':
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1535, 55),
  POS(1535, 55),
  POS(1535, 40)
};

static TAB_NUM t_lambda_170[] = {
  2, // locals
  0, // parameters
  // value << 3)+(next_digit-'0')
  var_std__shift_left, 2, var_1526_1_value, num_3, 1, LOCAL(1),
  // next_digit-'0')
  var_std__minus, 2, var_1533_1_next_digit, chr_48, 1, LOCAL(2),
  // !value (value << 3)+(next_digit-'0')
  var_std__plus, 2, LOCAL(1), LOCAL(2), 1, var_1526_1_value,
  // next
  var_next, 0, TAIL_CALL,
  POS(1536, 29),
  POS(1536, 42),
  POS(1536, 21),
  POS(1537, 21)
};

static TAB_NUM t_lambda_171[] = {
  1, // locals
  0, // parameters
  // range(str i -1) value
  var_range, 3, var_1516_15_str, var_1516_19_i, minus_num_1, 1, LOCAL(1),
  //  range(str i -1) value
  LET, 2, LOCAL(1), var_1526_1_value, TAIL_CALL,
  POS(1538, 22),
  POS(1538, 21)
};

static TAB_NUM t_func_std__parse_hex[] = {
  1, // locals
  -2, // parameters
  MANDATORY_PARAMETER, var_1568_0_str,
  num_1, var_1569_0_i,
  // $n length_of(str)
  var_length_of, 1, var_1568_0_str, 1, var_1571_1_n,
  // n -> str undefined
  var_std__less, 2, var_1571_1_n, var_1569_0_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_172, lambda_173, TAIL_CALL,
  POS(1571, 3),
  POS(1573, 9),
  POS(1572, 3)
};

static TAB_NUM t_lambda_172[] = {
  0, // locals
  0, // parameters
  //  str undefined
  LET, 2, var_1568_0_str, var_undefined, TAIL_CALL,
  POS(1573, 13)
};

static TAB_NUM t_lambda_173[] = {
  0, // locals
  0, // parameters
  // $digit str(i)
  var_1568_0_str, 1, var_1569_0_i, 1, var_1575_1_digit,
  // cond
  var_cond, 4, lambda_174, lambda_177, lambda_180, lambda_183, TAIL_CALL,
  POS(1575, 7),
  POS(1576, 7)
};

static TAB_NUM t_lambda_174[] = {
  3, // locals
  0, // parameters
  // digit >= '0' && digit <= '9':
  var_std__less, 2, var_1575_1_digit, chr_48, 1, LOCAL(1),
  // digit >= '0' && digit <= '9':
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // digit >= '0' && digit <= '9':
  var_std__and, 2, LOCAL(2), lambda_175, 1, LOCAL(3),
  //  digit >= '0' && digit <= '9':
  LET, 2, LOCAL(3), lambda_176, TAIL_CALL,
  POS(1577, 12),
  POS(1577, 12),
  POS(1577, 12),
  POS(1577, 11)
};

static TAB_NUM t_lambda_175[] = {
  2, // locals
  0, // parameters
  // 9':
  var_std__less, 2, chr_57, var_1575_1_digit, 1, LOCAL(1),
  // 9':
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // digit <= '9':
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1577, 38),
  POS(1577, 38),
  POS(1577, 28)
};

static TAB_NUM t_lambda_176[] = {
  1, // locals
  0, // parameters
  // digit-'0'
  var_std__minus, 2, var_1575_1_digit, chr_48, 1, LOCAL(1),
  // handle_more_digits digit-'0'
  func_handle_more_digits, 1, LOCAL(1), TAIL_CALL,
  POS(1578, 30),
  POS(1578, 11)
};

static TAB_NUM t_lambda_177[] = {
  3, // locals
  0, // parameters
  // digit >= 'a' && digit <= 'f':
  var_std__less, 2, var_1575_1_digit, chr_97, 1, LOCAL(1),
  // digit >= 'a' && digit <= 'f':
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // digit >= 'a' && digit <= 'f':
  var_std__and, 2, LOCAL(2), lambda_178, 1, LOCAL(3),
  //  digit >= 'a' && digit <= 'f':
  LET, 2, LOCAL(3), lambda_179, TAIL_CALL,
  POS(1579, 12),
  POS(1579, 12),
  POS(1579, 12),
  POS(1579, 11)
};

static TAB_NUM t_lambda_178[] = {
  2, // locals
  0, // parameters
  // f':
  var_std__less, 2, chr_102, var_1575_1_digit, 1, LOCAL(1),
  // f':
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // digit <= 'f':
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1579, 38),
  POS(1579, 38),
  POS(1579, 28)
};

static TAB_NUM t_lambda_179[] = {
  2, // locals
  0, // parameters
  // digit-'a')+10
  var_std__minus, 2, var_1575_1_digit, chr_97, 1, LOCAL(1),
  // digit-'a')+10
  var_std__plus, 2, LOCAL(1), num_10, 1, LOCAL(2),
  // handle_more_digits (digit-'a')+10
  func_handle_more_digits, 1, LOCAL(2), TAIL_CALL,
  POS(1580, 31),
  POS(1580, 31),
  POS(1580, 11)
};

static TAB_NUM t_lambda_180[] = {
  3, // locals
  0, // parameters
  // digit >= 'A' && digit <= 'F':
  var_std__less, 2, var_1575_1_digit, chr_65, 1, LOCAL(1),
  // digit >= 'A' && digit <= 'F':
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // digit >= 'A' && digit <= 'F':
  var_std__and, 2, LOCAL(2), lambda_181, 1, LOCAL(3),
  //  digit >= 'A' && digit <= 'F':
  LET, 2, LOCAL(3), lambda_182, TAIL_CALL,
  POS(1581, 12),
  POS(1581, 12),
  POS(1581, 12),
  POS(1581, 11)
};

static TAB_NUM t_lambda_181[] = {
  2, // locals
  0, // parameters
  // F':
  var_std__less, 2, chr_70, var_1575_1_digit, 1, LOCAL(1),
  // F':
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // digit <= 'F':
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1581, 38),
  POS(1581, 38),
  POS(1581, 28)
};

static TAB_NUM t_lambda_182[] = {
  2, // locals
  0, // parameters
  // digit-'A')+10
  var_std__minus, 2, var_1575_1_digit, chr_65, 1, LOCAL(1),
  // digit-'A')+10
  var_std__plus, 2, LOCAL(1), num_10, 1, LOCAL(2),
  // handle_more_digits (digit-'A')+10
  func_handle_more_digits, 1, LOCAL(2), TAIL_CALL,
  POS(1582, 31),
  POS(1582, 31),
  POS(1582, 11)
};

static TAB_NUM t_lambda_183[] = {
  0, // locals
  0, // parameters
  //  true -> str undefined
  LET, 2, var_true, lambda_184, TAIL_CALL,
  POS(1583, 11)
};

static TAB_NUM t_lambda_184[] = {
  0, // locals
  0, // parameters
  //  str undefined
  LET, 2, var_1568_0_str, var_undefined, TAIL_CALL,
  POS(1583, 19)
};

static TAB_NUM t_func_handle_more_digits[] = {
  0, // locals
  1, // parameters
  var_1585_22_value,
  // loop:
  var_loop, 1, lambda_11_loop, TAIL_CALL,
  POS(1586, 9)
};

static TAB_NUM t_lambda_11_loop[] = {
  1, // locals
  0, // parameters
  // !i i+1
  var_std__plus, 2, var_1569_0_i, num_1, 1, var_1569_0_i,
  // n
  var_std__less, 2, var_1571_1_n, var_1569_0_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_185, lambda_186, TAIL_CALL,
  POS(1587, 11),
  POS(1589, 17),
  POS(1588, 11)
};

static TAB_NUM t_lambda_185[] = {
  0, // locals
  0, // parameters
  //  "" value
  LET, 2, string_1, var_1585_22_value, TAIL_CALL,
  POS(1590, 15)
};

static TAB_NUM t_lambda_186[] = {
  0, // locals
  0, // parameters
  // $next_digit str(i)
  var_1568_0_str, 1, var_1569_0_i, 1, var_1592_1_next_digit,
  // cond
  var_cond, 4, lambda_187, lambda_190, lambda_193, lambda_196, TAIL_CALL,
  POS(1592, 15),
  POS(1593, 15)
};

static TAB_NUM t_lambda_187[] = {
  3, // locals
  0, // parameters
  // next_digit >= '0' && next_digit <= '9':
  var_std__less, 2, var_1592_1_next_digit, chr_48, 1, LOCAL(1),
  // next_digit >= '0' && next_digit <= '9':
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // next_digit >= '0' && next_digit <= '9':
  var_std__and, 2, LOCAL(2), lambda_188, 1, LOCAL(3),
  //  next_digit >= '0' && next_digit <= '9':
  LET, 2, LOCAL(3), lambda_189, TAIL_CALL,
  POS(1594, 20),
  POS(1594, 20),
  POS(1594, 20),
  POS(1594, 19)
};

static TAB_NUM t_lambda_188[] = {
  2, // locals
  0, // parameters
  // 9':
  var_std__less, 2, chr_57, var_1592_1_next_digit, 1, LOCAL(1),
  // 9':
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // next_digit <= '9':
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1594, 56),
  POS(1594, 56),
  POS(1594, 41)
};

static TAB_NUM t_lambda_189[] = {
  2, // locals
  0, // parameters
  // value << 4)+(next_digit-'0')
  var_std__shift_left, 2, var_1585_22_value, num_4, 1, LOCAL(1),
  // next_digit-'0')
  var_std__minus, 2, var_1592_1_next_digit, chr_48, 1, LOCAL(2),
  // !value (value << 4)+(next_digit-'0')
  var_std__plus, 2, LOCAL(1), LOCAL(2), 1, var_1585_22_value,
  // next
  var_next, 0, TAIL_CALL,
  POS(1595, 27),
  POS(1595, 40),
  POS(1595, 19),
  POS(1596, 19)
};

static TAB_NUM t_lambda_190[] = {
  3, // locals
  0, // parameters
  // next_digit >= 'a' && next_digit <= 'f':
  var_std__less, 2, var_1592_1_next_digit, chr_97, 1, LOCAL(1),
  // next_digit >= 'a' && next_digit <= 'f':
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // next_digit >= 'a' && next_digit <= 'f':
  var_std__and, 2, LOCAL(2), lambda_191, 1, LOCAL(3),
  //  next_digit >= 'a' && next_digit <= 'f':
  LET, 2, LOCAL(3), lambda_192, TAIL_CALL,
  POS(1597, 20),
  POS(1597, 20),
  POS(1597, 20),
  POS(1597, 19)
};

static TAB_NUM t_lambda_191[] = {
  2, // locals
  0, // parameters
  // f':
  var_std__less, 2, chr_102, var_1592_1_next_digit, 1, LOCAL(1),
  // f':
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // next_digit <= 'f':
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1597, 56),
  POS(1597, 56),
  POS(1597, 41)
};

static TAB_NUM t_lambda_192[] = {
  3, // locals
  0, // parameters
  // value << 4)+(next_digit-'a')+10
  var_std__shift_left, 2, var_1585_22_value, num_4, 1, LOCAL(1),
  // next_digit-'a')+10
  var_std__minus, 2, var_1592_1_next_digit, chr_97, 1, LOCAL(2),
  // value << 4)+(next_digit-'a')+10
  var_std__plus, 2, LOCAL(1), LOCAL(2), 1, LOCAL(3),
  // !value (value << 4)+(next_digit-'a')+10
  var_std__plus, 2, LOCAL(3), num_10, 1, var_1585_22_value,
  // next
  var_next, 0, TAIL_CALL,
  POS(1598, 27),
  POS(1598, 40),
  POS(1598, 27),
  POS(1598, 19),
  POS(1599, 19)
};

static TAB_NUM t_lambda_193[] = {
  3, // locals
  0, // parameters
  // next_digit >= 'A' && next_digit <= 'F':
  var_std__less, 2, var_1592_1_next_digit, chr_65, 1, LOCAL(1),
  // next_digit >= 'A' && next_digit <= 'F':
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // next_digit >= 'A' && next_digit <= 'F':
  var_std__and, 2, LOCAL(2), lambda_194, 1, LOCAL(3),
  //  next_digit >= 'A' && next_digit <= 'F':
  LET, 2, LOCAL(3), lambda_195, TAIL_CALL,
  POS(1600, 20),
  POS(1600, 20),
  POS(1600, 20),
  POS(1600, 19)
};

static TAB_NUM t_lambda_194[] = {
  2, // locals
  0, // parameters
  // F':
  var_std__less, 2, chr_70, var_1592_1_next_digit, 1, LOCAL(1),
  // F':
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // next_digit <= 'F':
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1600, 56),
  POS(1600, 56),
  POS(1600, 41)
};

static TAB_NUM t_lambda_195[] = {
  3, // locals
  0, // parameters
  // value << 4)+(next_digit-'A')+10
  var_std__shift_left, 2, var_1585_22_value, num_4, 1, LOCAL(1),
  // next_digit-'A')+10
  var_std__minus, 2, var_1592_1_next_digit, chr_65, 1, LOCAL(2),
  // value << 4)+(next_digit-'A')+10
  var_std__plus, 2, LOCAL(1), LOCAL(2), 1, LOCAL(3),
  // !value (value << 4)+(next_digit-'A')+10
  var_std__plus, 2, LOCAL(3), num_10, 1, var_1585_22_value,
  // next
  var_next, 0, TAIL_CALL,
  POS(1601, 27),
  POS(1601, 40),
  POS(1601, 27),
  POS(1601, 19),
  POS(1602, 19)
};

static TAB_NUM t_lambda_196[] = {
  0, // locals
  0, // parameters
  //  true -> range(str i -1) value
  LET, 2, var_true, lambda_197, TAIL_CALL,
  POS(1603, 19)
};

static TAB_NUM t_lambda_197[] = {
  1, // locals
  0, // parameters
  // range(str i -1) value
  var_range, 3, var_1568_0_str, var_1569_0_i, minus_num_1, 1, LOCAL(1),
  //  range(str i -1) value
  LET, 2, LOCAL(1), var_1585_22_value, TAIL_CALL,
  POS(1603, 28),
  POS(1603, 27)
};

static TAB_NUM t_func_std_types__string___to_integer[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 1639_0_self
  // parse_integer &self $value
  var_parse_integer, 1, LOCAL(2), 2, LOCAL(2), var_1641_21_value,
  // self == ""
  var_std__equal, 2, LOCAL(2), string_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_198, lambda_199, TAIL_CALL,
  POS(1641, 3),
  POS(1643, 5),
  POS(1642, 3)
};

static TAB_NUM t_lambda_198[] = {
  0, // locals
  0, // parameters
  //  value
  LET, 1, var_1641_21_value, TAIL_CALL,
  POS(1644, 7)
};

static TAB_NUM t_lambda_199[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(1645, 7)
};

static TAB_NUM t_func_std_types__string___to_number[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 1681_0_self
  // parse_number &self $value
  var_parse_number, 1, LOCAL(2), 2, LOCAL(2), var_1683_20_value,
  // self == ""
  var_std__equal, 2, LOCAL(2), string_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_200, lambda_201, TAIL_CALL,
  POS(1683, 3),
  POS(1685, 5),
  POS(1684, 3)
};

static TAB_NUM t_lambda_200[] = {
  0, // locals
  0, // parameters
  //  value
  LET, 1, var_1683_20_value, TAIL_CALL,
  POS(1686, 7)
};

static TAB_NUM t_lambda_201[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(1687, 7)
};

static TAB_NUM t_func_std__map_characters[] = {
  2, // locals
  2, // parameters
  var_1710_0_self,
  var_1711_0_function,
  // parameter_count_of(function) == 2
  var_parameter_count_of, 1, var_1711_0_function, 1, LOCAL(1),
  // parameter_count_of(function) == 2
  var_std__equal, 2, LOCAL(1), num_2, 1, LOCAL(2),
  // $map
  var_if, 3, LOCAL(2), lambda_202, lambda_208, 1, var_1713_1_map,
  // length_of(self)
  var_length_of, 1, var_1710_0_self, 1, LOCAL(1),
  // map 1 length_of(self)
  var_1713_1_map, 2, num_1, LOCAL(1), TAIL_CALL,
  POS(1715, 7),
  POS(1715, 7),
  POS(1713, 3),
  POS(1743, 9),
  POS(1743, 3)
};

static TAB_NUM t_lambda_202[] = {
  0, // locals
  0, // parameters
  // 
  LET, 1, lambda_203, TAIL_CALL,
  POS(1716, 9)
};

static TAB_NUM t_lambda_203[] = {
  1, // locals
  2, // parameters
  var_1717_3_s,
  var_1717_5_e,
  // s < e:
  var_std__less, 2, var_1717_3_s, var_1717_5_e, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_204, lambda_205, TAIL_CALL,
  POS(1719, 13),
  POS(1718, 11)
};

static TAB_NUM t_lambda_204[] = {
  4, // locals
  0, // parameters
  // s+e) >> 1
  var_std__plus, 2, var_1717_3_s, var_1717_5_e, 1, LOCAL(1),
  // $m (s+e) >> 1
  var_std__shift_right, 2, LOCAL(1), num_1, 1, LOCAL(4),
  // map(s m)
  var_1713_1_map, 2, var_1717_3_s, LOCAL(4), 1, LOCAL(1),
  // m+1 e)
  var_std__plus, 2, LOCAL(4), num_1, 1, LOCAL(2),
  // map(m+1 e)
  var_1713_1_map, 2, LOCAL(2), var_1717_5_e, 1, LOCAL(3),
  // append
  var_append, 2, LOCAL(1), LOCAL(3), TAIL_CALL,
  POS(1720, 19),
  POS(1720, 15),
  POS(1722, 17),
  POS(1723, 21),
  POS(1723, 17),
  POS(1721, 15)
};

static TAB_NUM t_lambda_205[] = {
  1, // locals
  0, // parameters
  // e
  var_std__less, 2, var_1717_5_e, var_1717_3_s, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_206, lambda_207, TAIL_CALL,
  POS(1726, 21),
  POS(1725, 15)
};

static TAB_NUM t_lambda_206[] = {
  0, // locals
  0, // parameters
  //  ""
  LET, 1, string_1, TAIL_CALL,
  POS(1727, 19)
};

static TAB_NUM t_lambda_207[] = {
  3, // locals
  0, // parameters
  // self(s)))
  var_1710_0_self, 1, var_1717_3_s, 1, LOCAL(1),
  // function(s self(s)))
  var_1711_0_function, 2, var_1717_3_s, LOCAL(1), 1, LOCAL(2),
  // string(function(s self(s)))
  var_string, 1, LOCAL(2), 1, LOCAL(3),
  //  string(function(s self(s)))
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(1728, 38),
  POS(1728, 27),
  POS(1728, 20),
  POS(1728, 19)
};

static TAB_NUM t_lambda_208[] = {
  0, // locals
  0, // parameters
  // 
  LET, 1, lambda_209, TAIL_CALL,
  POS(1729, 9)
};

static TAB_NUM t_lambda_209[] = {
  1, // locals
  2, // parameters
  var_1730_3_s,
  var_1730_5_e,
  // s < e:
  var_std__less, 2, var_1730_3_s, var_1730_5_e, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_210, lambda_211, TAIL_CALL,
  POS(1732, 13),
  POS(1731, 11)
};

static TAB_NUM t_lambda_210[] = {
  4, // locals
  0, // parameters
  // s+e) >> 1
  var_std__plus, 2, var_1730_3_s, var_1730_5_e, 1, LOCAL(1),
  // $m (s+e) >> 1
  var_std__shift_right, 2, LOCAL(1), num_1, 1, LOCAL(4),
  // map(s m)
  var_1713_1_map, 2, var_1730_3_s, LOCAL(4), 1, LOCAL(1),
  // m+1 e)
  var_std__plus, 2, LOCAL(4), num_1, 1, LOCAL(2),
  // map(m+1 e)
  var_1713_1_map, 2, LOCAL(2), var_1730_5_e, 1, LOCAL(3),
  // append
  var_append, 2, LOCAL(1), LOCAL(3), TAIL_CALL,
  POS(1733, 19),
  POS(1733, 15),
  POS(1735, 17),
  POS(1736, 21),
  POS(1736, 17),
  POS(1734, 15)
};

static TAB_NUM t_lambda_211[] = {
  1, // locals
  0, // parameters
  // e
  var_std__less, 2, var_1730_5_e, var_1730_3_s, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_212, lambda_213, TAIL_CALL,
  POS(1739, 21),
  POS(1738, 15)
};

static TAB_NUM t_lambda_212[] = {
  0, // locals
  0, // parameters
  //  ""
  LET, 1, string_1, TAIL_CALL,
  POS(1740, 19)
};

static TAB_NUM t_lambda_213[] = {
  3, // locals
  0, // parameters
  // self(s)))
  var_1710_0_self, 1, var_1730_3_s, 1, LOCAL(1),
  // function(self(s)))
  var_1711_0_function, 1, LOCAL(1), 1, LOCAL(2),
  // string(function(self(s)))
  var_string, 1, LOCAL(2), 1, LOCAL(3),
  //  string(function(self(s)))
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(1741, 36),
  POS(1741, 27),
  POS(1741, 20),
  POS(1741, 19)
};

static TAB_NUM t_func_std_types__string___to_upper_case[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 1763_0_self
  // map_characters self to_upper_case
  var_map_characters, 2, LOCAL(1), var_to_upper_case, TAIL_CALL,
  POS(1765, 3)
};

static TAB_NUM t_func_std_types__string___to_lower_case[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 1785_0_self
  // map_characters self to_lower_case
  var_map_characters, 2, LOCAL(1), var_to_lower_case, TAIL_CALL,
  POS(1787, 3)
};

static TAB_NUM t_func_std_types__string___to_title_case[] = {
  0, // locals
  1, // parameters
  var_1807_0_self,
  // map_characters self: (idx chr)
  var_map_characters, 2, var_1807_0_self, lambda_214, TAIL_CALL,
  POS(1809, 3)
};

static TAB_NUM t_lambda_214[] = {
  2, // locals
  2, // parameters
  var_1809_22_idx,
  var_1809_26_chr,
  // 1 && self(idx-1).is_a_letter_character
  var_std__less, 2, num_1, var_1809_22_idx, 1, LOCAL(1),
  // 1 && self(idx-1).is_a_letter_character
  var_std__and, 2, LOCAL(1), lambda_215, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_216, lambda_217, TAIL_CALL,
  POS(1811, 13),
  POS(1811, 13),
  POS(1810, 5)
};

static TAB_NUM t_lambda_215[] = {
  3, // locals
  0, // parameters
  // idx-1).is_a_letter_character
  var_std__minus, 2, var_1809_22_idx, num_1, 1, LOCAL(1),
  // self(idx-1).is_a_letter_character
  var_1807_0_self, 1, LOCAL(1), 1, LOCAL(2),
  // is_a_letter_character
  var_is_a_letter_character, 1, LOCAL(2), 1, LOCAL(3),
  // self(idx-1).is_a_letter_character
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(1811, 23),
  POS(1811, 18),
  POS(1811, 30),
  POS(1811, 18)
};

static TAB_NUM t_lambda_216[] = {
  1, // locals
  0, // parameters
  // to_lower_case
  var_to_lower_case, 1, var_1809_26_chr, 1, LOCAL(1),
  //  chr.to_lower_case
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1812, 14),
  POS(1812, 9)
};

static TAB_NUM t_lambda_217[] = {
  1, // locals
  0, // parameters
  // to_title_case
  var_to_title_case, 1, var_1809_26_chr, 1, LOCAL(1),
  //  chr.to_title_case
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1813, 14),
  POS(1813, 9)
};

static TAB_NUM t_func_std_types__string___to_sentence_case[] = {
  0, // locals
  1, // parameters
  var_1833_0_self,
  // map_characters self: (idx chr)
  var_map_characters, 2, var_1833_0_self, lambda_218, TAIL_CALL,
  POS(1835, 3)
};

static TAB_NUM t_lambda_218[] = {
  2, // locals
  2, // parameters
  var_1835_22_idx,
  var_1835_26_chr,
  // idx == 1 && self(idx).is_a_letter_character
  var_std__equal, 2, var_1835_22_idx, num_1, 1, LOCAL(1),
  // idx == 1 && self(idx).is_a_letter_character
  var_std__and, 2, LOCAL(1), lambda_219, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_220, lambda_221, TAIL_CALL,
  POS(1837, 7),
  POS(1837, 7),
  POS(1836, 5)
};

static TAB_NUM t_lambda_219[] = {
  2, // locals
  0, // parameters
  // self(idx).is_a_letter_character
  var_1833_0_self, 1, var_1835_22_idx, 1, LOCAL(1),
  // is_a_letter_character
  var_is_a_letter_character, 1, LOCAL(1), 1, LOCAL(2),
  // self(idx).is_a_letter_character
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1837, 19),
  POS(1837, 29),
  POS(1837, 19)
};

static TAB_NUM t_lambda_220[] = {
  1, // locals
  0, // parameters
  // to_title_case
  var_to_title_case, 1, var_1835_26_chr, 1, LOCAL(1),
  //  chr.to_title_case
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1838, 14),
  POS(1838, 9)
};

static TAB_NUM t_lambda_221[] = {
  1, // locals
  0, // parameters
  // to_lower_case
  var_to_lower_case, 1, var_1835_26_chr, 1, LOCAL(1),
  //  chr.to_lower_case
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1839, 14),
  POS(1839, 9)
};

static TAB_NUM t_func_std__delete_all[] = {
  1, // locals
  -2, // parameters
  MANDATORY_PARAMETER, LOCAL(1), // 1862_0_text
  REST_PARAMETER, var_1863_0_expressions,
  // $new_text ""
  LET, 1, string_1, 1, var_1879_1_new_text,
  // delete_all text
  func_delete_all, 1, LOCAL(1), TAIL_CALL,
  POS(1879, 3),
  POS(1880, 3)
};

static TAB_NUM t_func_delete_all[] = {
  1, // locals
  1, // parameters
  var_1865_14_txt,
  // is_empty
  var_is_empty, 1, var_1865_14_txt, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_222, lambda_223, TAIL_CALL,
  POS(1867, 11),
  POS(1866, 5)
};

static TAB_NUM t_lambda_222[] = {
  0, // locals
  0, // parameters
  //  new_text
  LET, 1, var_1879_1_new_text, TAIL_CALL,
  POS(1868, 9)
};

static TAB_NUM t_lambda_223[] = {
  0, // locals
  0, // parameters
  // for_each expressions
  var_for_each, 3, var_1863_0_expressions, lambda_224, lambda_226, TAIL_CALL,
  POS(1870, 9)
};

static TAB_NUM t_lambda_224[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 1871_3_expression
  // $len match(expression txt)
  var_match, 2, LOCAL(2), var_1865_14_txt, 1, var_1872_1_len,
  // is_defined next:
  var_is_defined, 1, var_1872_1_len, 1, LOCAL(1),
  // if_not len.is_defined next:
  var_if_not, 3, LOCAL(1), var_next, lambda_225, TAIL_CALL,
  POS(1872, 13),
  POS(1873, 24),
  POS(1873, 13)
};

static TAB_NUM t_lambda_225[] = {
  2, // locals
  0, // parameters
  // len+1 -1)
  var_std__plus, 2, var_1872_1_len, num_1, 1, LOCAL(1),
  // range(txt len+1 -1)
  var_range, 3, var_1865_14_txt, LOCAL(1), minus_num_1, 1, LOCAL(2),
  // delete_all range(txt len+1 -1)
  func_delete_all, 1, LOCAL(2), TAIL_CALL,
  POS(1874, 36),
  POS(1874, 26),
  POS(1874, 15)
};

static TAB_NUM t_lambda_226[] = {
  1, // locals
  0, // parameters
  // txt(1)
  var_1865_14_txt, 1, num_1, 1, LOCAL(1),
  // push &new_text txt(1)
  var_push, 2, var_1879_1_new_text, LOCAL(1), 1, var_1879_1_new_text,
  // range(txt 2 -1)
  var_range, 3, var_1865_14_txt, num_2, minus_num_1, 1, LOCAL(1),
  // delete_all range(txt 2 -1)
  func_delete_all, 1, LOCAL(1), TAIL_CALL,
  POS(1876, 28),
  POS(1876, 13),
  POS(1877, 24),
  POS(1877, 13)
};

static TAB_NUM t_func_std__replace_all[] = {
  1, // locals
  -2, // parameters
  MANDATORY_PARAMETER, LOCAL(1), // 1903_0_text
  REST_PARAMETER, var_1904_0_args,
  // $new_text ""
  LET, 1, string_1, 1, var_1927_1_new_text,
  // replace_all text
  func_replace_all, 1, LOCAL(1), TAIL_CALL,
  POS(1927, 3),
  POS(1928, 3)
};

static TAB_NUM t_func_replace_all[] = {
  1, // locals
  1, // parameters
  var_1906_15_txt,
  // is_empty
  var_is_empty, 1, var_1906_15_txt, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_227, lambda_228, TAIL_CALL,
  POS(1908, 11),
  POS(1907, 5)
};

static TAB_NUM t_lambda_227[] = {
  0, // locals
  0, // parameters
  //  new_text
  LET, 1, var_1927_1_new_text, TAIL_CALL,
  POS(1909, 9)
};

static TAB_NUM t_lambda_228[] = {
  0, // locals
  0, // parameters
  // for_each args
  var_for_each, 3, var_1904_0_args, lambda_229, lambda_232, TAIL_CALL,
  POS(1911, 9)
};

static TAB_NUM t_lambda_229[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 1912_3_arg
  // arg $expression $replacement
  LOCAL(2), 0, 2, LOCAL(3), var_1913_17_replacement,
  // $len match(expression txt)
  var_match, 2, LOCAL(3), var_1906_15_txt, 1, var_1914_1_len,
  // is_defined next:
  var_is_defined, 1, var_1914_1_len, 1, LOCAL(1),
  // if_not len.is_defined next:
  var_if_not, 3, LOCAL(1), var_next, lambda_230, TAIL_CALL,
  POS(1913, 13),
  POS(1914, 13),
  POS(1915, 24),
  POS(1915, 13)
};

static TAB_NUM t_lambda_230[] = {
  1, // locals
  0, // parameters
  // is_a_string:
  var_is_a_string, 1, var_1913_17_replacement, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_replacement_is_a_string, lambda_231, TAIL_CALL,
  POS(1917, 29),
  POS(1916, 15)
};

static TAB_NUM t_lambda_replacement_is_a_string[] = {
  2, // locals
  0, // parameters
  // append &new_text replacement
  var_append, 2, var_1927_1_new_text, var_1913_17_replacement, 1, var_1927_1_new_text,
  // len+1 -1)
  var_std__plus, 2, var_1914_1_len, num_1, 1, LOCAL(1),
  // range(txt len+1 -1)
  var_range, 3, var_1906_15_txt, LOCAL(1), minus_num_1, 1, LOCAL(2),
  // replace_all range(txt len+1 -1)
  func_replace_all, 1, LOCAL(2), TAIL_CALL,
  POS(1918, 19),
  POS(1919, 41),
  POS(1919, 31),
  POS(1919, 19)
};

static TAB_NUM t_lambda_231[] = {
  2, // locals
  0, // parameters
  // range(txt 1 len))
  var_range, 3, var_1906_15_txt, num_1, var_1914_1_len, 1, LOCAL(1),
  // replacement(range(txt 1 len))
  var_1913_17_replacement, 1, LOCAL(1), 1, LOCAL(2),
  // append &new_text replacement(range(txt 1 len))
  var_append, 2, var_1927_1_new_text, LOCAL(2), 1, var_1927_1_new_text,
  // len+1 -1)
  var_std__plus, 2, var_1914_1_len, num_1, 1, LOCAL(1),
  // range(txt len+1 -1)
  var_range, 3, var_1906_15_txt, LOCAL(1), minus_num_1, 1, LOCAL(2),
  // replace_all range(txt len+1 -1)
  func_replace_all, 1, LOCAL(2), TAIL_CALL,
  POS(1921, 48),
  POS(1921, 36),
  POS(1921, 19),
  POS(1922, 41),
  POS(1922, 31),
  POS(1922, 19)
};

static TAB_NUM t_lambda_232[] = {
  1, // locals
  0, // parameters
  // txt(1)
  var_1906_15_txt, 1, num_1, 1, LOCAL(1),
  // push &new_text txt(1)
  var_push, 2, var_1927_1_new_text, LOCAL(1), 1, var_1927_1_new_text,
  // range(txt 2 -1)
  var_range, 3, var_1906_15_txt, num_2, minus_num_1, 1, LOCAL(1),
  // replace_all range(txt 2 -1)
  func_replace_all, 1, LOCAL(1), TAIL_CALL,
  POS(1924, 28),
  POS(1924, 13),
  POS(1925, 25),
  POS(1925, 13)
};

static TAB_NUM t_func_std__replace_first[] = {
  1, // locals
  -2, // parameters
  MANDATORY_PARAMETER, LOCAL(1), // 1951_0_text
  REST_PARAMETER, var_1952_0_args,
  // $new_text ""
  LET, 1, string_1, 1, var_1974_1_new_text,
  // replace_first text
  func_replace_first, 1, LOCAL(1), TAIL_CALL,
  POS(1974, 3),
  POS(1975, 3)
};

static TAB_NUM t_func_replace_first[] = {
  1, // locals
  1, // parameters
  var_1954_17_txt,
  // is_empty
  var_is_empty, 1, var_1954_17_txt, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_233, lambda_234, TAIL_CALL,
  POS(1956, 11),
  POS(1955, 5)
};

static TAB_NUM t_lambda_233[] = {
  0, // locals
  0, // parameters
  //  new_text
  LET, 1, var_1974_1_new_text, TAIL_CALL,
  POS(1957, 9)
};

static TAB_NUM t_lambda_234[] = {
  0, // locals
  0, // parameters
  // for_each args
  var_for_each, 3, var_1952_0_args, lambda_235, lambda_238, TAIL_CALL,
  POS(1959, 9)
};

static TAB_NUM t_lambda_235[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 1960_3_arg
  // arg $expression $replacement
  LOCAL(2), 0, 2, LOCAL(3), var_1961_17_replacement,
  // $len match(expression txt)
  var_match, 2, LOCAL(3), var_1954_17_txt, 1, var_1962_1_len,
  // is_defined
  var_is_defined, 1, var_1962_1_len, 1, LOCAL(1),
  // if_not
  var_if_not, 3, LOCAL(1), var_next, lambda_236, TAIL_CALL,
  POS(1961, 13),
  POS(1962, 13),
  POS(1964, 19),
  POS(1963, 13)
};

static TAB_NUM t_lambda_236[] = {
  3, // locals
  0, // parameters
  // is_a_string &replacement
  var_is_a_string, 1, var_1961_17_replacement, 1, LOCAL(1),
  // update_if_not replacement.is_a_string &replacement
  var_update_if_not, 3, LOCAL(1), var_1961_17_replacement, lambda_237, 1, var_1961_17_replacement,
  // len+1 -1))
  var_std__plus, 2, var_1962_1_len, num_1, 1, LOCAL(1),
  // range(txt len+1 -1))
  var_range, 3, var_1954_17_txt, LOCAL(1), minus_num_1, 1, LOCAL(2),
  // append(new_text replacement range(txt len+1 -1))
  var_append, 3, var_1974_1_new_text, var_1961_17_replacement, LOCAL(2), 1, LOCAL(3),
  // -> append(new_text replacement range(txt len+1 -1))
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(1967, 43),
  POS(1967, 17),
  POS(1969, 58),
  POS(1969, 48),
  POS(1969, 20),
  POS(1969, 17)
};

static TAB_NUM t_lambda_237[] = {
  2, // locals
  0, // parameters
  // range(txt 1 len))
  var_range, 3, var_1954_17_txt, num_1, var_1962_1_len, 1, LOCAL(1),
  // replacement(range(txt 1 len))
  var_1961_17_replacement, 1, LOCAL(1), 1, LOCAL(2),
  //  replacement(range(txt 1 len))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1968, 34),
  POS(1968, 22),
  POS(1968, 21)
};

static TAB_NUM t_lambda_238[] = {
  1, // locals
  0, // parameters
  // txt(1)
  var_1954_17_txt, 1, num_1, 1, LOCAL(1),
  // push &new_text txt(1)
  var_push, 2, var_1974_1_new_text, LOCAL(1), 1, var_1974_1_new_text,
  // range(txt 2 -1)
  var_range, 3, var_1954_17_txt, num_2, minus_num_1, 1, LOCAL(1),
  // replace_first range(txt 2 -1)
  func_replace_first, 1, LOCAL(1), TAIL_CALL,
  POS(1971, 28),
  POS(1971, 13),
  POS(1972, 27),
  POS(1972, 13)
};

static TAB_NUM t_func_std__count_occurrences[] = {
  1, // locals
  2, // parameters
  LOCAL(1), // 1996_0_text
  var_1997_0_expr,
  // search_next text 0
  func_search_next, 2, LOCAL(1), num_0, TAIL_CALL,
  POS(2011, 3)
};

static TAB_NUM t_func_search_next[] = {
  1, // locals
  2, // parameters
  var_1999_15_txt,
  var_1999_19_count,
  // txt == ""
  var_std__equal, 2, var_1999_15_txt, string_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_239, lambda_240, TAIL_CALL,
  POS(2001, 7),
  POS(2000, 5)
};

static TAB_NUM t_lambda_239[] = {
  0, // locals
  0, // parameters
  //  count
  LET, 1, var_1999_19_count, TAIL_CALL,
  POS(2002, 9)
};

static TAB_NUM t_lambda_240[] = {
  1, // locals
  0, // parameters
  // $n match(expr txt)
  var_match, 2, var_1997_0_expr, var_1999_15_txt, 1, var_2004_1_n,
  // is_defined:
  var_is_defined, 1, var_2004_1_n, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_n_is_defined, lambda_241, TAIL_CALL,
  POS(2004, 9),
  POS(2006, 13),
  POS(2005, 9)
};

static TAB_NUM t_lambda_n_is_defined[] = {
  3, // locals
  0, // parameters
  // n+1 -1) count+1
  var_std__plus, 2, var_2004_1_n, num_1, 1, LOCAL(1),
  // range(txt n+1 -1) count+1
  var_range, 3, var_1999_15_txt, LOCAL(1), minus_num_1, 1, LOCAL(2),
  // count+1
  var_std__plus, 2, var_1999_19_count, num_1, 1, LOCAL(3),
  // search_next range(txt n+1 -1) count+1
  func_search_next, 2, LOCAL(2), LOCAL(3), TAIL_CALL,
  POS(2007, 35),
  POS(2007, 25),
  POS(2007, 43),
  POS(2007, 13)
};

static TAB_NUM t_lambda_241[] = {
  1, // locals
  0, // parameters
  // range(txt 2 -1) count
  var_range, 3, var_1999_15_txt, num_2, minus_num_1, 1, LOCAL(1),
  // search_next range(txt 2 -1) count
  func_search_next, 2, LOCAL(1), var_1999_19_count, TAIL_CALL,
  POS(2009, 25),
  POS(2009, 13)
};

static TAB_NUM t_func_std__partition[] = {
  0, // locals
  -2, // parameters
  MANDATORY_PARAMETER, var_2038_0_text,
  REST_PARAMETER, var_2039_0_separators,
  // $n length_of(text)
  var_length_of, 1, var_2038_0_text, 1, var_2041_1_n,
  // partition 1 n
  func_partition, 2, num_1, var_2041_1_n, TAIL_CALL,
  POS(2041, 3),
  POS(2042, 3)
};

static TAB_NUM t_func_partition[] = {
  3, // locals
  2, // parameters
  var_2044_13_s,
  var_2044_15_e,
  // e+1-s > FORK_TEXT_THRESHOLD: # recurse to exploit parallel execution
  var_std__plus, 2, var_2044_15_e, num_1, 1, LOCAL(1),
  // e+1-s > FORK_TEXT_THRESHOLD: # recurse to exploit parallel execution
  var_std__minus, 2, LOCAL(1), var_2044_13_s, 1, LOCAL(2),
  // FORK_TEXT_THRESHOLD: # recurse to exploit parallel execution
  var_std__less, 2, num_300, LOCAL(2), 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_242, lambda_243, TAIL_CALL,
  POS(2046, 7),
  POS(2046, 7),
  POS(2046, 15),
  POS(2045, 5)
};

static TAB_NUM t_lambda_242[] = {
  4, // locals
  0, // parameters
  // s+e) .div. 2
  var_std__plus, 2, var_2044_13_s, var_2044_15_e, 1, LOCAL(1),
  // $m (s+e) .div. 2
  var_div, 2, LOCAL(1), num_2, 1, LOCAL(4),
  // partition(s m) partition(m+1 e)
  func_partition, 2, var_2044_13_s, LOCAL(4), 1, LOCAL(1),
  // m+1 e)
  var_std__plus, 2, LOCAL(4), num_1, 1, LOCAL(2),
  // partition(m+1 e)
  func_partition, 2, LOCAL(2), var_2044_15_e, 1, LOCAL(3),
  // append partition(s m) partition(m+1 e)
  var_append, 2, LOCAL(1), LOCAL(3), TAIL_CALL,
  POS(2047, 13),
  POS(2047, 9),
  POS(2048, 16),
  POS(2048, 41),
  POS(2048, 31),
  POS(2048, 9)
};

static TAB_NUM t_lambda_243[] = {
  0, // locals
  0, // parameters
  // $parts empty_list
  LET, 1, var_empty_list, 1, var_2050_1_parts,
  // $ls undefined
  LET, 1, var_undefined, 1, var_2051_1_ls,
  // from_to s e
  var_from_to, 4, var_2044_13_s, var_2044_15_e, lambda_244, lambda_247, TAIL_CALL,
  POS(2050, 9),
  POS(2051, 9),
  POS(2052, 9)
};

static TAB_NUM t_lambda_244[] = {
  2, // locals
  1, // parameters
  var_2053_3_i,
  // text(i)) next:
  var_2038_0_text, 1, var_2053_3_i, 1, LOCAL(1),
  // any_of(separators equal text(i)) next:
  var_any_of, 3, var_2039_0_separators, var_equal, LOCAL(1), 1, LOCAL(2),
  // if_not any_of(separators equal text(i)) next:
  var_if_not, 3, LOCAL(2), var_next, lambda_245, TAIL_CALL,
  POS(2054, 44),
  POS(2054, 20),
  POS(2054, 13)
};

static TAB_NUM t_lambda_245[] = {
  1, // locals
  0, // parameters
  // is_defined:
  var_is_defined, 1, var_2051_1_ls, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_ls_is_defined, lambda_246, TAIL_CALL,
  POS(2056, 20),
  POS(2055, 15)
};

static TAB_NUM t_lambda_ls_is_defined[] = {
  2, // locals
  0, // parameters
  // i-1)
  var_std__minus, 2, var_2053_3_i, num_1, 1, LOCAL(1),
  // range(text ls i-1)
  var_range, 3, var_2038_0_text, var_2051_1_ls, LOCAL(1), 1, LOCAL(2),
  // push &parts range(text ls i-1)
  var_push, 2, var_2050_1_parts, LOCAL(2), 1, var_2050_1_parts,
  // !ls i
  LET, 1, var_2053_3_i, 1, var_2051_1_ls,
  // next
  var_next, 0, TAIL_CALL,
  POS(2057, 45),
  POS(2057, 31),
  POS(2057, 19),
  POS(2058, 19),
  POS(2059, 19)
};

static TAB_NUM t_lambda_246[] = {
  0, // locals
  0, // parameters
  // !ls i
  LET, 1, var_2053_3_i, 1, var_2051_1_ls,
  // next
  var_next, 0, TAIL_CALL,
  POS(2061, 19),
  POS(2062, 19)
};

static TAB_NUM t_lambda_247[] = {
  2, // locals
  0, // parameters
  // is_defined && ls <= e:
  var_is_defined, 1, var_2051_1_ls, 1, LOCAL(1),
  // is_defined && ls <= e:
  var_std__and, 2, LOCAL(1), lambda_248, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_249, lambda_253, TAIL_CALL,
  POS(2065, 18),
  POS(2065, 18),
  POS(2064, 13)
};

static TAB_NUM t_lambda_248[] = {
  2, // locals
  0, // parameters
  // e:
  var_std__less, 2, var_2044_15_e, var_2051_1_ls, 1, LOCAL(1),
  // e:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // ls <= e:
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2065, 38),
  POS(2065, 38),
  POS(2065, 32)
};

static TAB_NUM t_lambda_249[] = {
  1, // locals
  0, // parameters
  // e == n:
  var_std__equal, 2, var_2044_15_e, var_2041_1_n, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_250, lambda_251, TAIL_CALL,
  POS(2067, 19),
  POS(2066, 17)
};

static TAB_NUM t_lambda_250[] = {
  2, // locals
  0, // parameters
  // range(text ls e))
  var_range, 3, var_2038_0_text, var_2051_1_ls, var_2044_15_e, 1, LOCAL(1),
  // push(parts range(text ls e))
  var_push, 2, var_2050_1_parts, LOCAL(1), 1, LOCAL(2),
  // -> push(parts range(text ls e))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2068, 35),
  POS(2068, 24),
  POS(2068, 21)
};

static TAB_NUM t_lambda_251[] = {
  0, // locals
  0, // parameters
  // loop: # the last part extends into the next block
  var_loop, 1, lambda_12_loop, TAIL_CALL,
  POS(2070, 21)
};

static TAB_NUM t_lambda_12_loop[] = {
  2, // locals
  0, // parameters
  // !e e+1
  var_std__plus, 2, var_2044_15_e, num_1, 1, var_2044_15_e,
  // text(e))
  var_2038_0_text, 1, var_2044_15_e, 1, LOCAL(1),
  // any_of(separators equal text(e))
  var_any_of, 3, var_2039_0_separators, var_equal, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_252, var_next, TAIL_CALL,
  POS(2071, 23),
  POS(2073, 49),
  POS(2073, 25),
  POS(2072, 23)
};

static TAB_NUM t_lambda_252[] = {
  3, // locals
  0, // parameters
  // e-1))
  var_std__minus, 2, var_2044_15_e, num_1, 1, LOCAL(1),
  // range(text ls e-1))
  var_range, 3, var_2038_0_text, var_2051_1_ls, LOCAL(1), 1, LOCAL(2),
  // push(parts range(text ls e-1))
  var_push, 2, var_2050_1_parts, LOCAL(2), 1, LOCAL(3),
  //  push(parts range(text ls e-1))
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(2074, 53),
  POS(2074, 39),
  POS(2074, 28),
  POS(2074, 27)
};

static TAB_NUM t_lambda_253[] = {
  0, // locals
  0, // parameters
  //  parts
  LET, 1, var_2050_1_parts, TAIL_CALL,
  POS(2076, 17)
};

static TAB_NUM t_func_std__split_into_lines[] = {
  0, // locals
  1, // parameters
  var_2118_25_text,
  // $lines empty_list
  LET, 1, var_empty_list, 1, var_2119_1_lines,
  // $i 1
  LET, 1, num_1, 1, var_2120_1_i,
  // $n length_of(text)
  var_length_of, 1, var_2118_25_text, 1, var_2121_1_n,
  // $s i
  LET, 1, var_2120_1_i, 1, var_2122_1_s,
  // loop:
  var_loop, 1, lambda_13_loop, TAIL_CALL,
  POS(2119, 3),
  POS(2120, 3),
  POS(2121, 3),
  POS(2122, 3),
  POS(2123, 3)
};

static TAB_NUM t_lambda_13_loop[] = {
  1, // locals
  0, // parameters
  // n
  var_std__less, 2, var_2121_1_n, var_2120_1_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_254, lambda_257, TAIL_CALL,
  POS(2125, 11),
  POS(2124, 5)
};

static TAB_NUM t_lambda_254[] = {
  3, // locals
  0, // parameters
  // n
  var_std__less, 2, var_2121_1_n, var_2122_1_s, 1, LOCAL(1),
  // n
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_255, lambda_256, 1, LOCAL(3),
  // 
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(2128, 16),
  POS(2128, 16),
  POS(2127, 9),
  POS(2126, 9)
};

static TAB_NUM t_lambda_255[] = {
  2, // locals
  0, // parameters
  // range(text s n))
  var_range, 3, var_2118_25_text, var_2122_1_s, var_2121_1_n, 1, LOCAL(1),
  // push(lines range(text s n))
  var_push, 2, var_2119_1_lines, LOCAL(1), 1, LOCAL(2),
  //  push(lines range(text s n))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2129, 25),
  POS(2129, 14),
  POS(2129, 13)
};

static TAB_NUM t_lambda_256[] = {
  0, // locals
  0, // parameters
  //  lines
  LET, 1, var_2119_1_lines, TAIL_CALL,
  POS(2130, 13)
};

static TAB_NUM t_lambda_257[] = {
  2, // locals
  0, // parameters
  // text(i) == '@nl;':
  var_2118_25_text, 1, var_2120_1_i, 1, LOCAL(1),
  // text(i) == '@nl;':
  var_std__equal, 2, LOCAL(1), chr_10, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_258, lambda_259, TAIL_CALL,
  POS(2133, 11),
  POS(2133, 11),
  POS(2132, 9)
};

static TAB_NUM t_lambda_258[] = {
  1, // locals
  0, // parameters
  // range(text s i)
  var_range, 3, var_2118_25_text, var_2122_1_s, var_2120_1_i, 1, LOCAL(1),
  // push &lines range(text s i)
  var_push, 2, var_2119_1_lines, LOCAL(1), 1, var_2119_1_lines,
  // !i i+1
  var_std__plus, 2, var_2120_1_i, num_1, 1, var_2120_1_i,
  // !s i
  LET, 1, var_2120_1_i, 1, var_2122_1_s,
  // next
  var_next, 0, TAIL_CALL,
  POS(2134, 25),
  POS(2134, 13),
  POS(2135, 13),
  POS(2136, 13),
  POS(2137, 13)
};

static TAB_NUM t_lambda_259[] = {
  0, // locals
  0, // parameters
  // !i i+1
  var_std__plus, 2, var_2120_1_i, num_1, 1, var_2120_1_i,
  // next
  var_next, 0, TAIL_CALL,
  POS(2139, 13),
  POS(2140, 13)
};

static TAB_NUM t_func_std__split_into_indented_lines[] = {
  1, // locals
  1, // parameters
  var_2201_0_text,
  // $n length_of(text)
  var_length_of, 1, var_2201_0_text, 1, LOCAL(1),
  // split 1 n
  func_split, 2, num_1, LOCAL(1), TAIL_CALL,
  POS(2203, 3),
  POS(2204, 3)
};

static TAB_NUM t_func_split[] = {
  3, // locals
  2, // parameters
  var_2206_9_s,
  var_2206_11_e,
  // e+1-s > FORK_TEXT_THRESHOLD: # recurse to exploit parallel execution
  var_std__plus, 2, var_2206_11_e, num_1, 1, LOCAL(1),
  // e+1-s > FORK_TEXT_THRESHOLD: # recurse to exploit parallel execution
  var_std__minus, 2, LOCAL(1), var_2206_9_s, 1, LOCAL(2),
  // FORK_TEXT_THRESHOLD: # recurse to exploit parallel execution
  var_std__less, 2, num_300, LOCAL(2), 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_260, lambda_261, TAIL_CALL,
  POS(2208, 7),
  POS(2208, 7),
  POS(2208, 15),
  POS(2207, 5)
};

static TAB_NUM t_lambda_260[] = {
  4, // locals
  0, // parameters
  // s+e) .div. 2
  var_std__plus, 2, var_2206_9_s, var_2206_11_e, 1, LOCAL(1),
  // $m (s+e) .div. 2
  var_div, 2, LOCAL(1), num_2, 1, LOCAL(4),
  // split(s m) split(m+1 e)
  func_split, 2, var_2206_9_s, LOCAL(4), 1, LOCAL(1),
  // m+1 e)
  var_std__plus, 2, LOCAL(4), num_1, 1, LOCAL(2),
  // split(m+1 e)
  func_split, 2, LOCAL(2), var_2206_11_e, 1, LOCAL(3),
  // append split(s m) split(m+1 e)
  var_append, 2, LOCAL(1), LOCAL(3), TAIL_CALL,
  POS(2209, 13),
  POS(2209, 9),
  POS(2210, 16),
  POS(2210, 33),
  POS(2210, 27),
  POS(2210, 9)
};

static TAB_NUM t_lambda_261[] = {
  2, // locals
  0, // parameters
  // $lines empty_list
  LET, 1, var_empty_list, 1, var_2212_1_lines,
  // s == 1 || text(s-1) == '@nl;'
  var_std__equal, 2, var_2206_9_s, num_1, 1, LOCAL(1),
  // s == 1 || text(s-1) == '@nl;'
  var_std__or, 2, LOCAL(1), lambda_262, 1, LOCAL(2),
  // $ls
  var_if, 3, LOCAL(2), lambda_263, lambda_264, 1, var_2213_1_ls,
  // from_to s e
  var_from_to, 4, var_2206_9_s, var_2206_11_e, lambda_265, lambda_268, TAIL_CALL,
  POS(2212, 9),
  POS(2215, 13),
  POS(2215, 13),
  POS(2213, 9),
  POS(2218, 9)
};

static TAB_NUM t_lambda_262[] = {
  3, // locals
  0, // parameters
  // s-1) == '@nl;'
  var_std__minus, 2, var_2206_9_s, num_1, 1, LOCAL(1),
  // text(s-1) == '@nl;'
  var_2201_0_text, 1, LOCAL(1), 1, LOCAL(2),
  // text(s-1) == '@nl;'
  var_std__equal, 2, LOCAL(2), chr_10, 1, LOCAL(3),
  // text(s-1) == '@nl;'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(2215, 28),
  POS(2215, 23),
  POS(2215, 23),
  POS(2215, 23)
};

static TAB_NUM t_lambda_263[] = {
  0, // locals
  0, // parameters
  //  s # the current block starts at a line start
  LET, 1, var_2206_9_s, TAIL_CALL,
  POS(2216, 15)
};

static TAB_NUM t_lambda_264[] = {
  0, // locals
  0, // parameters
  //  undefined # just skip the characters until the next line start
  LET, 1, var_undefined, TAIL_CALL,
  POS(2217, 15)
};

static TAB_NUM t_lambda_265[] = {
  2, // locals
  1, // parameters
  var_2219_3_i,
  // text(i) == '@nl;' next:
  var_2201_0_text, 1, var_2219_3_i, 1, LOCAL(1),
  // text(i) == '@nl;' next:
  var_std__equal, 2, LOCAL(1), chr_10, 1, LOCAL(2),
  // if_not text(i) == '@nl;' next:
  var_if_not, 3, LOCAL(2), var_next, lambda_266, TAIL_CALL,
  POS(2220, 20),
  POS(2220, 20),
  POS(2220, 13)
};

static TAB_NUM t_lambda_266[] = {
  1, // locals
  0, // parameters
  // is_defined:
  var_is_defined, 1, var_2213_1_ls, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_2_ls_is_defined, lambda_267, TAIL_CALL,
  POS(2222, 20),
  POS(2221, 15)
};

static TAB_NUM t_lambda_2_ls_is_defined[] = {
  1, // locals
  0, // parameters
  // create_line(ls i)
  func_create_line, 2, var_2213_1_ls, var_2219_3_i, 1, LOCAL(1),
  // push &lines create_line(ls i)
  var_push, 2, var_2212_1_lines, LOCAL(1), 1, var_2212_1_lines,
  // !ls i+1
  var_std__plus, 2, var_2219_3_i, num_1, 1, var_2213_1_ls,
  // next
  var_next, 0, TAIL_CALL,
  POS(2223, 31),
  POS(2223, 19),
  POS(2224, 19),
  POS(2225, 19)
};

static TAB_NUM t_lambda_267[] = {
  0, // locals
  0, // parameters
  // !ls i+1
  var_std__plus, 2, var_2219_3_i, num_1, 1, var_2213_1_ls,
  // next
  var_next, 0, TAIL_CALL,
  POS(2227, 19),
  POS(2228, 19)
};

static TAB_NUM t_lambda_268[] = {
  2, // locals
  0, // parameters
  // is_defined && ls <= e:
  var_is_defined, 1, var_2213_1_ls, 1, LOCAL(1),
  // is_defined && ls <= e:
  var_std__and, 2, LOCAL(1), lambda_269, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_270, lambda_272, TAIL_CALL,
  POS(2231, 18),
  POS(2231, 18),
  POS(2230, 13)
};

static TAB_NUM t_lambda_269[] = {
  2, // locals
  0, // parameters
  // e:
  var_std__less, 2, var_2206_11_e, var_2213_1_ls, 1, LOCAL(1),
  // e:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // ls <= e:
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2231, 38),
  POS(2231, 38),
  POS(2231, 32)
};

static TAB_NUM t_lambda_270[] = {
  0, // locals
  0, // parameters
  // loop: # the last line extends into the next block
  var_loop, 1, lambda_14_loop, TAIL_CALL,
  POS(2232, 17)
};

static TAB_NUM t_lambda_14_loop[] = {
  2, // locals
  0, // parameters
  // !e e+1
  var_std__plus, 2, var_2206_11_e, num_1, 1, var_2206_11_e,
  // text(e) == '@nl;'
  var_2201_0_text, 1, var_2206_11_e, 1, LOCAL(1),
  // text(e) == '@nl;'
  var_std__equal, 2, LOCAL(1), chr_10, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_271, var_next, TAIL_CALL,
  POS(2233, 19),
  POS(2235, 21),
  POS(2235, 21),
  POS(2234, 19)
};

static TAB_NUM t_lambda_271[] = {
  2, // locals
  0, // parameters
  // create_line(ls e))
  func_create_line, 2, var_2213_1_ls, var_2206_11_e, 1, LOCAL(1),
  // push(lines create_line(ls e))
  var_push, 2, var_2212_1_lines, LOCAL(1), 1, LOCAL(2),
  //  push(lines create_line(ls e))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2236, 35),
  POS(2236, 24),
  POS(2236, 23)
};

static TAB_NUM t_lambda_272[] = {
  0, // locals
  0, // parameters
  //  lines
  LET, 1, var_2212_1_lines, TAIL_CALL,
  POS(2238, 17)
};

static TAB_NUM t_func_create_line[] = {
  0, // locals
  2, // parameters
  var_2240_15_s,
  var_2240_17_e,
  // $indent 0
  LET, 1, num_0, 1, var_2241_1_indent,
  // loop:
  var_loop, 1, lambda_15_loop, TAIL_CALL,
  POS(2241, 5),
  POS(2242, 5)
};

static TAB_NUM t_lambda_15_loop[] = {
  2, // locals
  0, // parameters
  // text(s) == '@ht;':
  var_2201_0_text, 1, var_2240_15_s, 1, LOCAL(1),
  // text(s) == '@ht;':
  var_std__equal, 2, LOCAL(1), chr_9, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_273, lambda_274, TAIL_CALL,
  POS(2244, 9),
  POS(2244, 9),
  POS(2243, 7)
};

static TAB_NUM t_lambda_273[] = {
  0, // locals
  0, // parameters
  // !indent indent+8
  var_std__plus, 2, var_2241_1_indent, num_8, 1, var_2241_1_indent,
  // !s s+1
  var_std__plus, 2, var_2240_15_s, num_1, 1, var_2240_15_s,
  // next
  var_next, 0, TAIL_CALL,
  POS(2245, 11),
  POS(2246, 11),
  POS(2247, 11)
};

static TAB_NUM t_lambda_274[] = {
  2, // locals
  0, // parameters
  // text(s) == ' ':
  var_2201_0_text, 1, var_2240_15_s, 1, LOCAL(1),
  // text(s) == ' ':
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_275, lambda_276, TAIL_CALL,
  POS(2250, 13),
  POS(2250, 13),
  POS(2249, 11)
};

static TAB_NUM t_lambda_275[] = {
  0, // locals
  0, // parameters
  // !indent indent+1
  var_std__plus, 2, var_2241_1_indent, num_1, 1, var_2241_1_indent,
  // !s s+1
  var_std__plus, 2, var_2240_15_s, num_1, 1, var_2240_15_s,
  // next
  var_next, 0, TAIL_CALL,
  POS(2251, 15),
  POS(2252, 15),
  POS(2253, 15)
};

static TAB_NUM t_lambda_276[] = {
  1, // locals
  0, // parameters
  // $line_text range(text s e)
  var_range, 3, var_2201_0_text, var_2240_15_s, var_2240_17_e, 1, var_2255_1_line_text,
  // line_text == "@nl;"
  var_std__equal, 2, var_2255_1_line_text, string_7, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_277, lambda_278, TAIL_CALL,
  POS(2255, 15),
  POS(2257, 17),
  POS(2256, 15)
};

static TAB_NUM t_lambda_277[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(2258, 19)
};

static TAB_NUM t_lambda_278[] = {
  1, // locals
  0, // parameters
  // tuple(indent line_text)
  var_tuple, 2, var_2241_1_indent, var_2255_1_line_text, 1, LOCAL(1),
  //  tuple(indent line_text)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(2259, 20),
  POS(2259, 19)
};

static TAB_NUM t_func_indent_of[] = {
  1, // locals
  1, // parameters
  var_2266_13_line,
  // is_defined
  var_is_defined, 1, var_2266_13_line, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_279, lambda_280, TAIL_CALL,
  POS(2268, 10),
  POS(2267, 3)
};

static TAB_NUM t_lambda_279[] = {
  1, // locals
  0, // parameters
  // first(line)
  var_first, 1, var_2266_13_line, 1, LOCAL(1),
  //  first(line)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(2269, 8),
  POS(2269, 7)
};

static TAB_NUM t_lambda_280[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(2270, 7)
};

static TAB_NUM t_func_std__split_into_groups[] = {
  0, // locals
  1, // parameters
  var_2323_0_lines,
  // $n length_of(lines)
  var_length_of, 1, var_2323_0_lines, 1, var_2325_1_n,
  // $fv 1 # first valid line
  LET, 1, num_1, 1, var_2326_1_fv,
  // loop:
  var_loop, 1, lambda_16_loop, TAIL_CALL,
  POS(2325, 3),
  POS(2326, 3),
  POS(2327, 3)
};

static TAB_NUM t_lambda_16_loop[] = {
  2, // locals
  0, // parameters
  // n:
  var_std__less, 2, var_2325_1_n, var_2326_1_fv, 1, LOCAL(1),
  // n:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_281, lambda_283, TAIL_CALL,
  POS(2329, 13),
  POS(2329, 13),
  POS(2328, 5)
};

static TAB_NUM t_lambda_281[] = {
  1, // locals
  0, // parameters
  // lines(fv))
  var_2323_0_lines, 1, var_2326_1_fv, 1, LOCAL(1),
  // $indent indent_of(lines(fv))
  func_indent_of, 1, LOCAL(1), 1, var_2330_1_indent,
  // is_defined:
  var_is_defined, 1, var_2330_1_indent, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_indent_is_defined, lambda_282, TAIL_CALL,
  POS(2330, 27),
  POS(2330, 9),
  POS(2332, 18),
  POS(2331, 9)
};

static TAB_NUM t_lambda_indent_is_defined[] = {
  0, // locals
  0, // parameters
  // split fv n indent undefined
  func_2_split, 4, var_2326_1_fv, var_2325_1_n, var_2330_1_indent, var_undefined, TAIL_CALL,
  POS(2333, 13)
};

static TAB_NUM t_lambda_282[] = {
  0, // locals
  0, // parameters
  // !fv fv+1
  var_std__plus, 2, var_2326_1_fv, num_1, 1, var_2326_1_fv,
  // next
  var_next, 0, TAIL_CALL,
  POS(2335, 13),
  POS(2336, 13)
};

static TAB_NUM t_lambda_283[] = {
  0, // locals
  0, // parameters
  //  empty_list
  LET, 1, var_empty_list, TAIL_CALL,
  POS(2337, 9)
};

static TAB_NUM t_func_2_split[] = {
  3, // locals
  4, // parameters
  var_2339_9_s,
  var_2339_11_e,
  var_2339_13_indent,
  var_2339_20_gs,
  // e+1-s > FORK_LINES_THRESHOLD: # recurse to exploit parallel execution
  var_std__plus, 2, var_2339_11_e, num_1, 1, LOCAL(1),
  // e+1-s > FORK_LINES_THRESHOLD: # recurse to exploit parallel execution
  var_std__minus, 2, LOCAL(1), var_2339_9_s, 1, LOCAL(2),
  // FORK_LINES_THRESHOLD: # recurse to exploit parallel execution
  var_std__less, 2, num_20, LOCAL(2), 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_284, lambda_285, TAIL_CALL,
  POS(2341, 7),
  POS(2341, 7),
  POS(2341, 15),
  POS(2340, 5)
};

static TAB_NUM t_lambda_284[] = {
  4, // locals
  0, // parameters
  // s+e) .div. 2
  var_std__plus, 2, var_2339_9_s, var_2339_11_e, 1, LOCAL(1),
  // $m (s+e) .div. 2
  var_div, 2, LOCAL(1), num_2, 1, LOCAL(4),
  // split(s m indent gs) split(m+1 e indent undefined)
  func_2_split, 4, var_2339_9_s, LOCAL(4), var_2339_13_indent, var_2339_20_gs, 1, LOCAL(1),
  // m+1 e indent undefined)
  var_std__plus, 2, LOCAL(4), num_1, 1, LOCAL(2),
  // split(m+1 e indent undefined)
  func_2_split, 4, LOCAL(2), var_2339_11_e, var_2339_13_indent, var_undefined, 1, LOCAL(3),
  // append split(s m indent gs) split(m+1 e indent undefined)
  var_append, 2, LOCAL(1), LOCAL(3), TAIL_CALL,
  POS(2342, 13),
  POS(2342, 9),
  POS(2343, 16),
  POS(2343, 43),
  POS(2343, 37),
  POS(2343, 9)
};

static TAB_NUM t_lambda_285[] = {
  0, // locals
  0, // parameters
  // $groups empty_list
  LET, 1, var_empty_list, 1, var_2345_1_groups,
  // $minimum_indent VERY_LARGE_INDENT
  LET, 1, num_9999, 1, var_2346_1_minimum_indent,
  // $ge gs
  LET, 1, var_2339_20_gs, 1, var_2347_1_ge,
  // from_to s e
  var_from_to, 4, var_2339_9_s, var_2339_11_e, lambda_286, lambda_294, TAIL_CALL,
  POS(2345, 9),
  POS(2346, 9),
  POS(2347, 9),
  POS(2348, 9)
};

static TAB_NUM t_lambda_286[] = {
  1, // locals
  1, // parameters
  var_2349_3_i,
  // lines(i))
  var_2323_0_lines, 1, var_2349_3_i, 1, LOCAL(1),
  // $current_indent indent_of(lines(i))
  func_indent_of, 1, LOCAL(1), 1, var_2350_1_current_indent,
  // current_indent == indent:
  var_std__equal, 2, var_2350_1_current_indent, var_2339_13_indent, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_287, lambda_291, TAIL_CALL,
  POS(2350, 39),
  POS(2350, 13),
  POS(2352, 15),
  POS(2351, 13)
};

static TAB_NUM t_lambda_287[] = {
  2, // locals
  0, // parameters
  // is_defined && gs < i:
  var_is_defined, 1, var_2339_20_gs, 1, LOCAL(1),
  // is_defined && gs < i:
  var_std__and, 2, LOCAL(1), lambda_288, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_289, lambda_290, TAIL_CALL,
  POS(2354, 22),
  POS(2354, 22),
  POS(2353, 17)
};

static TAB_NUM t_lambda_288[] = {
  1, // locals
  0, // parameters
  // gs < i:
  var_std__less, 2, var_2339_20_gs, var_2349_3_i, 1, LOCAL(1),
  // gs < i:
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(2354, 36),
  POS(2354, 36)
};

static TAB_NUM t_lambda_289[] = {
  0, // locals
  0, // parameters
  // add_groups !groups ge
  func_add_groups, 1, var_2347_1_ge, 1, var_2345_1_groups,
  // start_new_fragment_and_next i
  func_start_new_fragment_and_next, 1, var_2349_3_i, TAIL_CALL,
  POS(2355, 21),
  POS(2356, 21)
};

static TAB_NUM t_lambda_290[] = {
  0, // locals
  0, // parameters
  // start_new_fragment_and_next i
  func_start_new_fragment_and_next, 1, var_2349_3_i, TAIL_CALL,
  POS(2358, 21)
};

static TAB_NUM t_lambda_291[] = {
  1, // locals
  0, // parameters
  // is_defined
  var_is_defined, 1, var_2350_1_current_indent, 1, LOCAL(1),
  // !ge
  var_if, 3, LOCAL(1), lambda_292, lambda_293, 1, var_2347_1_ge,
  // reduce_minimum_indent_and_next current_indent
  func_reduce_minimum_indent_and_next, 1, var_2350_1_current_indent, TAIL_CALL,
  POS(2362, 36),
  POS(2360, 17),
  POS(2365, 17)
};

static TAB_NUM t_lambda_292[] = {
  0, // locals
  0, // parameters
  //  i
  LET, 1, var_2349_3_i, TAIL_CALL,
  POS(2363, 23)
};

static TAB_NUM t_lambda_293[] = {
  0, // locals
  0, // parameters
  //  ge
  LET, 1, var_2347_1_ge, TAIL_CALL,
  POS(2364, 23)
};

static TAB_NUM t_lambda_294[] = {
  1, // locals
  0, // parameters
  // is_defined:
  var_is_defined, 1, var_2339_20_gs, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_gs_is_defined, lambda_302, TAIL_CALL,
  POS(2368, 18),
  POS(2367, 13)
};

static TAB_NUM t_lambda_gs_is_defined[] = {
  0, // locals
  0, // parameters
  // loop: # the last group extends into the next block
  var_loop, 1, lambda_17_loop, TAIL_CALL,
  POS(2369, 17)
};

static TAB_NUM t_lambda_17_loop[] = {
  1, // locals
  0, // parameters
  // !e e+1
  var_std__plus, 2, var_2339_11_e, num_1, 1, var_2339_11_e,
  // n
  var_std__less, 2, var_2325_1_n, var_2339_11_e, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_295, lambda_296, TAIL_CALL,
  POS(2370, 19),
  POS(2372, 25),
  POS(2371, 19)
};

static TAB_NUM t_lambda_295[] = {
  1, // locals
  0, // parameters
  // add_groups(ge)
  func_add_groups, 1, var_2347_1_ge, 1, LOCAL(1),
  //  add_groups(ge)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(2373, 24),
  POS(2373, 23)
};

static TAB_NUM t_lambda_296[] = {
  2, // locals
  0, // parameters
  // lines(e))
  var_2323_0_lines, 1, var_2339_11_e, 1, LOCAL(1),
  // $current_indent indent_of(lines(e))
  func_indent_of, 1, LOCAL(1), 1, var_2375_1_current_indent,
  // is_defined && current_indent <= indent
  var_is_defined, 1, var_2375_1_current_indent, 1, LOCAL(1),
  // is_defined && current_indent <= indent
  var_std__and, 2, LOCAL(1), lambda_297, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_298, lambda_299, TAIL_CALL,
  POS(2375, 49),
  POS(2375, 23),
  POS(2377, 40),
  POS(2377, 40),
  POS(2376, 23)
};

static TAB_NUM t_lambda_297[] = {
  2, // locals
  0, // parameters
  // indent
  var_std__less, 2, var_2339_13_indent, var_2375_1_current_indent, 1, LOCAL(1),
  // indent
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // current_indent <= indent
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2377, 72),
  POS(2377, 72),
  POS(2377, 54)
};

static TAB_NUM t_lambda_298[] = {
  1, // locals
  0, // parameters
  // add_groups(ge)
  func_add_groups, 1, var_2347_1_ge, 1, LOCAL(1),
  //  add_groups(ge)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(2378, 28),
  POS(2378, 27)
};

static TAB_NUM t_lambda_299[] = {
  1, // locals
  0, // parameters
  // is_defined
  var_is_defined, 1, var_2375_1_current_indent, 1, LOCAL(1),
  // !ge
  var_if, 3, LOCAL(1), lambda_300, lambda_301, 1, var_2347_1_ge,
  // reduce_minimum_indent_and_next current_indent
  func_reduce_minimum_indent_and_next, 1, var_2375_1_current_indent, TAIL_CALL,
  POS(2382, 46),
  POS(2380, 27),
  POS(2385, 27)
};

static TAB_NUM t_lambda_300[] = {
  0, // locals
  0, // parameters
  //  e
  LET, 1, var_2339_11_e, TAIL_CALL,
  POS(2383, 33)
};

static TAB_NUM t_lambda_301[] = {
  0, // locals
  0, // parameters
  //  ge
  LET, 1, var_2347_1_ge, TAIL_CALL,
  POS(2384, 33)
};

static TAB_NUM t_lambda_302[] = {
  0, // locals
  0, // parameters
  //  groups
  LET, 1, var_2345_1_groups, TAIL_CALL,
  POS(2386, 17)
};

static TAB_NUM t_func_add_groups[] = {
  1, // locals
  1, // parameters
  var_2388_14_l,
  // gs == l
  var_std__equal, 2, var_2339_20_gs, var_2388_14_l, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_303, lambda_304, TAIL_CALL,
  POS(2390, 13),
  POS(2389, 11)
};

static TAB_NUM t_lambda_303[] = {
  2, // locals
  0, // parameters
  // lines(gs))
  var_2323_0_lines, 1, var_2339_20_gs, 1, LOCAL(1),
  // push(groups lines(gs))
  var_push, 2, var_2345_1_groups, LOCAL(1), 1, LOCAL(2),
  //  push(groups lines(gs))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2391, 28),
  POS(2391, 16),
  POS(2391, 15)
};

static TAB_NUM t_lambda_304[] = {
  1, // locals
  0, // parameters
  // minimum_indent == VERY_LARGE_INDENT
  var_std__equal, 2, var_2346_1_minimum_indent, num_9999, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_305, lambda_306, TAIL_CALL,
  POS(2394, 17),
  POS(2393, 15)
};

static TAB_NUM t_lambda_305[] = {
  2, // locals
  0, // parameters
  // range(lines gs l))
  var_range, 3, var_2323_0_lines, var_2339_20_gs, var_2388_14_l, 1, LOCAL(1),
  // append(groups range(lines gs l))
  var_append, 2, var_2345_1_groups, LOCAL(1), 1, LOCAL(2),
  //  append(groups range(lines gs l))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2395, 34),
  POS(2395, 20),
  POS(2395, 19)
};

static TAB_NUM t_lambda_306[] = {
  4, // locals
  0, // parameters
  // $headline lines(gs)
  var_2323_0_lines, 1, var_2339_20_gs, 1, LOCAL(4),
  // gs+1 l))
  var_std__plus, 2, var_2339_20_gs, num_1, 1, LOCAL(1),
  // range(lines gs+1 l))
  var_range, 3, var_2323_0_lines, LOCAL(1), var_2388_14_l, 1, LOCAL(2),
  // .subgroups_of range(lines gs+1 l))
  LET, -1, LOCAL(4), var_subgroups_of, LOCAL(2), LOCAL(3),
  // push groups headline(.subgroups_of range(lines gs+1 l))
  var_push, 2, var_2345_1_groups, LOCAL(3), TAIL_CALL,
  POS(2397, 19),
  POS(2398, 66),
  POS(2398, 54),
  POS(2398, 40),
  POS(2398, 19)
};

static TAB_NUM t_func_reduce_minimum_indent_and_next[] = {
  2, // locals
  1, // parameters
  var_2400_34_current_indent,
  // is_defined && current_indent < minimum_indent:
  var_is_defined, 1, var_2400_34_current_indent, 1, LOCAL(1),
  // is_defined && current_indent < minimum_indent:
  var_std__and, 2, LOCAL(1), lambda_307, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_308, var_next, TAIL_CALL,
  POS(2402, 28),
  POS(2402, 28),
  POS(2401, 11)
};

static TAB_NUM t_lambda_307[] = {
  1, // locals
  0, // parameters
  // current_indent < minimum_indent:
  var_std__less, 2, var_2400_34_current_indent, var_2346_1_minimum_indent, 1, LOCAL(1),
  // current_indent < minimum_indent:
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(2402, 42),
  POS(2402, 42)
};

static TAB_NUM t_lambda_308[] = {
  0, // locals
  0, // parameters
  // !minimum_indent current_indent
  LET, 1, var_2400_34_current_indent, 1, var_2346_1_minimum_indent,
  // next
  var_next, 0, TAIL_CALL,
  POS(2403, 15),
  POS(2404, 15)
};

static TAB_NUM t_func_start_new_fragment_and_next[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 2407_31_i
  // !minimum_indent VERY_LARGE_INDENT
  LET, 1, num_9999, 1, var_2346_1_minimum_indent,
  // !gs i
  LET, 1, LOCAL(1), 1, var_2339_20_gs,
  // !ge i
  LET, 1, LOCAL(1), 1, var_2347_1_ge,
  // next
  var_next, 0, TAIL_CALL,
  POS(2408, 11),
  POS(2409, 11),
  POS(2410, 11),
  POS(2411, 11)
};

static TAB_NUM t_func_std__wrap_words[] = {
  0, // locals
  2, // parameters
  var_2440_0_text,
  var_2441_0_width,
  // $wrapped_text ""
  LET, 1, string_1, 1, var_2443_1_wrapped_text,
  // $n length_of(text)
  var_length_of, 1, var_2440_0_text, 1, var_2444_1_n,
  // $s 1 # start of not yet copied text
  LET, 1, num_1, 1, var_2445_1_s,
  // $l s # line start position
  LET, 1, var_2445_1_s, 1, var_2446_1_l,
  // $b undefined # possible break position
  LET, 1, var_undefined, 1, var_2447_1_b,
  // $i 1
  LET, 1, num_1, 1, var_2448_1_i,
  // loop:
  var_loop, 1, lambda_18_loop, TAIL_CALL,
  POS(2443, 3),
  POS(2444, 3),
  POS(2445, 3),
  POS(2446, 3),
  POS(2447, 3),
  POS(2448, 3),
  POS(2449, 3)
};

static TAB_NUM t_lambda_18_loop[] = {
  1, // locals
  0, // parameters
  // n
  var_std__less, 2, var_2444_1_n, var_2448_1_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_309, lambda_310, TAIL_CALL,
  POS(2451, 11),
  POS(2450, 5)
};

static TAB_NUM t_lambda_309[] = {
  2, // locals
  0, // parameters
  // range(text s n))
  var_range, 3, var_2440_0_text, var_2445_1_s, var_2444_1_n, 1, LOCAL(1),
  // append(wrapped_text range(text s n))
  var_append, 2, var_2443_1_wrapped_text, LOCAL(1), 1, LOCAL(2),
  //  append(wrapped_text range(text s n))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2452, 30),
  POS(2452, 10),
  POS(2452, 9)
};

static TAB_NUM t_lambda_310[] = {
  1, // locals
  0, // parameters
  // $chr text(i)
  var_2440_0_text, 1, var_2448_1_i, 1, var_2454_1_chr,
  // chr == '@nl;':
  var_std__equal, 2, var_2454_1_chr, chr_10, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_311, lambda_312, TAIL_CALL,
  POS(2454, 9),
  POS(2456, 11),
  POS(2455, 9)
};

static TAB_NUM t_lambda_311[] = {
  0, // locals
  0, // parameters
  // !i i+1
  var_std__plus, 2, var_2448_1_i, num_1, 1, var_2448_1_i,
  // !l i
  LET, 1, var_2448_1_i, 1, var_2446_1_l,
  // !b undefined
  LET, 1, var_undefined, 1, var_2447_1_b,
  // next
  var_next, 0, TAIL_CALL,
  POS(2457, 13),
  POS(2458, 13),
  POS(2459, 13),
  POS(2460, 13)
};

static TAB_NUM t_lambda_312[] = {
  1, // locals
  0, // parameters
  // chr == ' ':
  var_std__equal, 2, var_2454_1_chr, chr_32, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_313, lambda_316, TAIL_CALL,
  POS(2463, 15),
  POS(2462, 13)
};

static TAB_NUM t_lambda_313[] = {
  2, // locals
  0, // parameters
  // i-l == width: # break
  var_std__minus, 2, var_2448_1_i, var_2446_1_l, 1, LOCAL(1),
  // i-l == width: # break
  var_std__equal, 2, LOCAL(1), var_2441_0_width, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_314, lambda_315, TAIL_CALL,
  POS(2465, 19),
  POS(2465, 19),
  POS(2464, 17)
};

static TAB_NUM t_lambda_314[] = {
  2, // locals
  0, // parameters
  // i-1)
  var_std__minus, 2, var_2448_1_i, num_1, 1, LOCAL(1),
  // range(text s i-1)
  var_range, 3, var_2440_0_text, var_2445_1_s, LOCAL(1), 1, LOCAL(2),
  // append &wrapped_text range(text s i-1)
  var_append, 2, var_2443_1_wrapped_text, LOCAL(2), 1, var_2443_1_wrapped_text,
  // push &wrapped_text '@nl;'
  var_push, 2, var_2443_1_wrapped_text, chr_10, 1, var_2443_1_wrapped_text,
  // !i i+1
  var_std__plus, 2, var_2448_1_i, num_1, 1, var_2448_1_i,
  // !s i
  LET, 1, var_2448_1_i, 1, var_2445_1_s,
  // !l s
  LET, 1, var_2445_1_s, 1, var_2446_1_l,
  // !b undefined
  LET, 1, var_undefined, 1, var_2447_1_b,
  // next
  var_next, 0, TAIL_CALL,
  POS(2466, 55),
  POS(2466, 42),
  POS(2466, 21),
  POS(2467, 21),
  POS(2468, 21),
  POS(2469, 21),
  POS(2470, 21),
  POS(2471, 21),
  POS(2472, 21)
};

static TAB_NUM t_lambda_315[] = {
  0, // locals
  0, // parameters
  // !b i
  LET, 1, var_2448_1_i, 1, var_2447_1_b,
  // !i i+1
  var_std__plus, 2, var_2448_1_i, num_1, 1, var_2448_1_i,
  // next
  var_next, 0, TAIL_CALL,
  POS(2474, 21),
  POS(2475, 21),
  POS(2476, 21)
};

static TAB_NUM t_lambda_316[] = {
  3, // locals
  0, // parameters
  // !i i+1
  var_std__plus, 2, var_2448_1_i, num_1, 1, var_2448_1_i,
  // i-l <= width
  var_std__minus, 2, var_2448_1_i, var_2446_1_l, 1, LOCAL(1),
  // width
  var_std__less, 2, var_2441_0_width, LOCAL(1), 1, LOCAL(2),
  // width
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), var_next, lambda_317, TAIL_CALL,
  POS(2478, 17),
  POS(2480, 19),
  POS(2480, 26),
  POS(2480, 26),
  POS(2479, 17)
};

static TAB_NUM t_lambda_317[] = {
  1, // locals
  0, // parameters
  // is_defined: # wrap
  var_is_defined, 1, var_2447_1_b, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_b_is_defined, lambda_318, TAIL_CALL,
  POS(2484, 25),
  POS(2483, 21)
};

static TAB_NUM t_lambda_b_is_defined[] = {
  2, // locals
  0, // parameters
  // b-1)
  var_std__minus, 2, var_2447_1_b, num_1, 1, LOCAL(1),
  // range(text s b-1)
  var_range, 3, var_2440_0_text, var_2445_1_s, LOCAL(1), 1, LOCAL(2),
  // append &wrapped_text range(text s b-1)
  var_append, 2, var_2443_1_wrapped_text, LOCAL(2), 1, var_2443_1_wrapped_text,
  // push &wrapped_text '@nl;'
  var_push, 2, var_2443_1_wrapped_text, chr_10, 1, var_2443_1_wrapped_text,
  // !s b+1
  var_std__plus, 2, var_2447_1_b, num_1, 1, var_2445_1_s,
  // !l s
  LET, 1, var_2445_1_s, 1, var_2446_1_l,
  // !b undefined
  LET, 1, var_undefined, 1, var_2447_1_b,
  // next
  var_next, 0, TAIL_CALL,
  POS(2485, 59),
  POS(2485, 46),
  POS(2485, 25),
  POS(2486, 25),
  POS(2487, 25),
  POS(2488, 25),
  POS(2489, 25),
  POS(2490, 25)
};

static TAB_NUM t_lambda_318[] = {
  2, // locals
  0, // parameters
  // i-2)
  var_std__minus, 2, var_2448_1_i, num_2, 1, LOCAL(1),
  // range(text s i-2)
  var_range, 3, var_2440_0_text, var_2445_1_s, LOCAL(1), 1, LOCAL(2),
  // append &wrapped_text range(text s i-2)
  var_append, 2, var_2443_1_wrapped_text, LOCAL(2), 1, var_2443_1_wrapped_text,
  // push &wrapped_text '@nl;'
  var_push, 2, var_2443_1_wrapped_text, chr_10, 1, var_2443_1_wrapped_text,
  // !s i-1
  var_std__minus, 2, var_2448_1_i, num_1, 1, var_2445_1_s,
  // !l s
  LET, 1, var_2445_1_s, 1, var_2446_1_l,
  // next
  var_next, 0, TAIL_CALL,
  POS(2492, 59),
  POS(2492, 46),
  POS(2492, 25),
  POS(2493, 25),
  POS(2494, 25),
  POS(2495, 25),
  POS(2496, 25)
};

static TAB_NUM t_func_std_types__string___serialize[] = {
  0, // locals
  -2, // parameters
  MANDATORY_PARAMETER, var_2516_0_self,
  var_undefined, var_2517_0_indent,
  // $str "@quot;"
  LET, 1, string_8, 1, var_2519_1_str,
  // $s 1
  LET, 1, num_1, 1, var_2520_1_s,
  // for_each self
  var_for_each, 3, var_2516_0_self, lambda_319, lambda_324, TAIL_CALL,
  POS(2519, 3),
  POS(2520, 3),
  POS(2521, 3)
};

static TAB_NUM t_lambda_319[] = {
  2, // locals
  2, // parameters
  var_2522_3_idx,
  var_2522_7_chr,
  // chr < '@0x20;' || chr > '@0x7e;' || chr == '"' || chr == '@@':
  var_std__less, 2, var_2522_7_chr, chr_32, 1, LOCAL(1),
  // chr < '@0x20;' || chr > '@0x7e;' || chr == '"' || chr == '@@':
  var_std__or, 2, LOCAL(1), lambda_320, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_323, var_next, TAIL_CALL,
  POS(2524, 9),
  POS(2524, 9),
  POS(2523, 7)
};

static TAB_NUM t_lambda_320[] = {
  2, // locals
  0, // parameters
  // 0x7e;' || chr == '"' || chr == '@@':
  var_std__less, 2, chr_126, var_2522_7_chr, 1, LOCAL(1),
  // 0x7e;' || chr == '"' || chr == '@@':
  var_std__or, 2, LOCAL(1), lambda_321, 1, LOCAL(2),
  // chr > '@0x7e;' || chr == '"' || chr == '@@':
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2524, 35),
  POS(2524, 35),
  POS(2524, 27)
};

static TAB_NUM t_lambda_321[] = {
  2, // locals
  0, // parameters
  // chr == '"' || chr == '@@':
  var_std__equal, 2, var_2522_7_chr, chr_34, 1, LOCAL(1),
  // chr == '"' || chr == '@@':
  var_std__or, 2, LOCAL(1), lambda_322, 1, LOCAL(2),
  // chr == '"' || chr == '@@':
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2524, 45),
  POS(2524, 45),
  POS(2524, 45)
};

static TAB_NUM t_lambda_322[] = {
  1, // locals
  0, // parameters
  // chr == '@@':
  var_std__equal, 2, var_2522_7_chr, chr_64, 1, LOCAL(1),
  // chr == '@@':
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(2524, 59),
  POS(2524, 59)
};

static TAB_NUM t_lambda_323[] = {
  2, // locals
  0, // parameters
  // idx-1)
  var_std__minus, 2, var_2522_3_idx, num_1, 1, LOCAL(1),
  // range(self s idx-1)
  var_range, 3, var_2516_0_self, var_2520_1_s, LOCAL(1), 1, LOCAL(2),
  // append &str range(self s idx-1)
  var_append, 2, var_2519_1_str, LOCAL(2), 1, var_2519_1_str,
  // to_integer);"
  var_to_integer, 1, var_2522_7_chr, 1, LOCAL(1),
  // "@@@(chr.to_integer);"
  var_std__string, 3, string_9, LOCAL(1), string_10, 1, LOCAL(2),
  // append &str "@@@(chr.to_integer);"
  var_append, 2, var_2519_1_str, LOCAL(2), 1, var_2519_1_str,
  // !s idx+1
  var_std__plus, 2, var_2522_3_idx, num_1, 1, var_2520_1_s,
  // next
  var_next, 0, TAIL_CALL,
  POS(2525, 36),
  POS(2525, 23),
  POS(2525, 11),
  POS(2526, 32),
  POS(2526, 23),
  POS(2526, 11),
  POS(2527, 11),
  POS(2528, 11)
};

static TAB_NUM t_lambda_324[] = {
  1, // locals
  0, // parameters
  // range(self s -1)
  var_range, 3, var_2516_0_self, var_2520_1_s, minus_num_1, 1, LOCAL(1),
  // append &str range(self s -1)
  var_append, 2, var_2519_1_str, LOCAL(1), 1, var_2519_1_str,
  // append &str "@quot;@nl;"
  var_append, 2, var_2519_1_str, string_11, 1, var_2519_1_str,
  // is_defined
  var_is_defined, 1, var_2517_0_indent, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_325, lambda_326, TAIL_CALL,
  POS(2531, 19),
  POS(2531, 7),
  POS(2532, 7),
  POS(2534, 16),
  POS(2533, 7)
};

static TAB_NUM t_lambda_325[] = {
  2, // locals
  0, // parameters
  // tabs_and_spaces(indent) str)
  var_tabs_and_spaces, 1, var_2517_0_indent, 1, LOCAL(1),
  // append(tabs_and_spaces(indent) str)
  var_append, 2, LOCAL(1), var_2519_1_str, 1, LOCAL(2),
  //  append(tabs_and_spaces(indent) str)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2535, 19),
  POS(2535, 12),
  POS(2535, 11)
};

static TAB_NUM t_lambda_326[] = {
  0, // locals
  0, // parameters
  //  str
  LET, 1, var_2519_1_str, TAIL_CALL,
  POS(2536, 11)
};

static TAB_NUM t_func_std__indented[] = {
  0, // locals
  2, // parameters
  var_2568_0_indent,
  var_2569_0_text,
  // $indented_text ""
  LET, 1, string_1, 1, var_2571_1_indented_text,
  // $new_indent undefined
  LET, 1, var_undefined, 1, var_2572_1_new_indent,
  // $i 1
  LET, 1, num_1, 1, var_2573_1_i,
  // $n length_of(text)
  var_length_of, 1, var_2569_0_text, 1, var_2574_1_n,
  // loop:
  var_loop, 1, lambda_19_loop, TAIL_CALL,
  POS(2571, 3),
  POS(2572, 3),
  POS(2573, 3),
  POS(2574, 3),
  POS(2575, 3)
};

static TAB_NUM t_lambda_19_loop[] = {
  2, // locals
  0, // parameters
  // !new_indent indent
  LET, 1, var_2568_0_indent, 1, var_2572_1_new_indent,
  // skip_indent !i !new_indent
  func_skip_indent, 0, 2, var_2573_1_i, var_2572_1_new_indent,
  // n:
  var_std__less, 2, var_2574_1_n, var_2573_1_i, 1, LOCAL(1),
  // n:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_327, lambda_335, TAIL_CALL,
  POS(2576, 5),
  POS(2577, 5),
  POS(2579, 12),
  POS(2579, 12),
  POS(2578, 5)
};

static TAB_NUM t_lambda_327[] = {
  2, // locals
  0, // parameters
  // text(i) == '@nl;':
  var_2569_0_text, 1, var_2573_1_i, 1, LOCAL(1),
  // text(i) == '@nl;':
  var_std__equal, 2, LOCAL(1), chr_10, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_328, lambda_329, TAIL_CALL,
  POS(2581, 11),
  POS(2581, 11),
  POS(2580, 9)
};

static TAB_NUM t_lambda_328[] = {
  0, // locals
  0, // parameters
  // push &indented_text '@nl;'
  var_push, 2, var_2571_1_indented_text, chr_10, 1, var_2571_1_indented_text,
  // !i i+1
  var_std__plus, 2, var_2573_1_i, num_1, 1, var_2573_1_i,
  // next
  var_next, 0, TAIL_CALL,
  POS(2582, 13),
  POS(2583, 13),
  POS(2584, 13)
};

static TAB_NUM t_lambda_329[] = {
  1, // locals
  0, // parameters
  // tabs_and_spaces(new_indent)
  var_tabs_and_spaces, 1, var_2572_1_new_indent, 1, LOCAL(1),
  // append &indented_text tabs_and_spaces(new_indent)
  var_append, 2, var_2571_1_indented_text, LOCAL(1), 1, var_2571_1_indented_text,
  // $s i
  LET, 1, var_2573_1_i, 1, var_2587_1_s,
  // loop
  var_loop, 2, lambda_330, var_next, TAIL_CALL,
  POS(2586, 35),
  POS(2586, 13),
  POS(2587, 13),
  POS(2588, 13)
};

static TAB_NUM t_lambda_330[] = {
  2, // locals
  0, // parameters
  // text(i) == '@nl;':
  var_2569_0_text, 1, var_2573_1_i, 1, LOCAL(1),
  // text(i) == '@nl;':
  var_std__equal, 2, LOCAL(1), chr_10, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_331, lambda_332, TAIL_CALL,
  POS(2591, 19),
  POS(2591, 19),
  POS(2590, 17)
};

static TAB_NUM t_lambda_331[] = {
  1, // locals
  0, // parameters
  // range(text s i)
  var_range, 3, var_2569_0_text, var_2587_1_s, var_2573_1_i, 1, LOCAL(1),
  // append &indented_text range(text s i)
  var_append, 2, var_2571_1_indented_text, LOCAL(1), 1, var_2571_1_indented_text,
  // !i i+1
  var_std__plus, 2, var_2573_1_i, num_1, 1, var_2573_1_i,
  // break
  var_break, 0, TAIL_CALL,
  POS(2592, 43),
  POS(2592, 21),
  POS(2593, 21),
  POS(2594, 21)
};

static TAB_NUM t_lambda_332[] = {
  1, // locals
  0, // parameters
  // i < n:
  var_std__less, 2, var_2573_1_i, var_2574_1_n, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_333, lambda_334, TAIL_CALL,
  POS(2597, 23),
  POS(2596, 21)
};

static TAB_NUM t_lambda_333[] = {
  0, // locals
  0, // parameters
  // !i i+1
  var_std__plus, 2, var_2573_1_i, num_1, 1, var_2573_1_i,
  // next
  var_next, 0, TAIL_CALL,
  POS(2598, 25),
  POS(2599, 25)
};

static TAB_NUM t_lambda_334[] = {
  1, // locals
  0, // parameters
  // range(text s -1)
  var_range, 3, var_2569_0_text, var_2587_1_s, minus_num_1, 1, LOCAL(1),
  // append indented_text range(text s -1)
  var_append, 2, var_2571_1_indented_text, LOCAL(1), TAIL_CALL,
  POS(2601, 46),
  POS(2601, 25)
};

static TAB_NUM t_lambda_335[] = {
  0, // locals
  0, // parameters
  //  indented_text
  LET, 1, var_2571_1_indented_text, TAIL_CALL,
  POS(2604, 9)
};

static TAB_NUM t_func_skip_indent[] = {
  2, // locals
  0, // parameters
  // n:
  var_std__less, 2, var_2574_1_n, var_2573_1_i, 1, LOCAL(1),
  // n:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_336, lambda_338, TAIL_CALL,
  POS(2608, 12),
  POS(2608, 12),
  POS(2607, 5)
};

static TAB_NUM t_lambda_336[] = {
  2, // locals
  0, // parameters
  // text(i) == '@ht;':
  var_2569_0_text, 1, var_2573_1_i, 1, LOCAL(1),
  // text(i) == '@ht;':
  var_std__equal, 2, LOCAL(1), chr_9, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_337, func_skip_spaces, TAIL_CALL,
  POS(2610, 11),
  POS(2610, 11),
  POS(2609, 9)
};

static TAB_NUM t_lambda_337[] = {
  0, // locals
  0, // parameters
  // !i i+1
  var_std__plus, 2, var_2573_1_i, num_1, 1, var_2573_1_i,
  // !new_indent new_indent+8
  var_std__plus, 2, var_2572_1_new_indent, num_8, 1, var_2572_1_new_indent,
  // skip_indent
  func_skip_indent, 0, TAIL_CALL,
  POS(2611, 13),
  POS(2612, 13),
  POS(2613, 13)
};

static TAB_NUM t_lambda_338[] = {
  0, // locals
  0, // parameters
  //  i new_indent
  LET, 2, var_2573_1_i, var_2572_1_new_indent, TAIL_CALL,
  POS(2615, 9)
};

static TAB_NUM t_func_skip_spaces[] = {
  3, // locals
  0, // parameters
  // n && text(i) == ' ':
  var_std__less, 2, var_2574_1_n, var_2573_1_i, 1, LOCAL(1),
  // n && text(i) == ' ':
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // n && text(i) == ' ':
  var_std__and, 2, LOCAL(2), lambda_339, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_340, lambda_341, TAIL_CALL,
  POS(2619, 12),
  POS(2619, 12),
  POS(2619, 12),
  POS(2618, 5)
};

static TAB_NUM t_lambda_339[] = {
  2, // locals
  0, // parameters
  // text(i) == ' ':
  var_2569_0_text, 1, var_2573_1_i, 1, LOCAL(1),
  // text(i) == ' ':
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // text(i) == ' ':
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2619, 17),
  POS(2619, 17),
  POS(2619, 17)
};

static TAB_NUM t_lambda_340[] = {
  0, // locals
  0, // parameters
  // !i i+1
  var_std__plus, 2, var_2573_1_i, num_1, 1, var_2573_1_i,
  // !new_indent new_indent+1
  var_std__plus, 2, var_2572_1_new_indent, num_1, 1, var_2572_1_new_indent,
  // skip_spaces
  func_skip_spaces, 0, TAIL_CALL,
  POS(2620, 9),
  POS(2621, 9),
  POS(2622, 9)
};

static TAB_NUM t_lambda_341[] = {
  0, // locals
  0, // parameters
  //  i new_indent
  LET, 2, var_2573_1_i, var_2572_1_new_indent, TAIL_CALL,
  POS(2623, 9)
};

static TAB_NUM t_func_std__format[] = {
  0, // locals
  -2, // parameters
  MANDATORY_PARAMETER, var_2657_0_template,
  REST_PARAMETER, var_2658_0_arguments,
  // $output ""
  LET, 1, string_1, 1, var_2660_1_output,
  // $arg_idx 1
  LET, 1, num_1, 1, var_2661_1_arg_idx,
  // $i 1
  LET, 1, num_1, 1, var_2662_1_i,
  // $n length_of(template)
  var_length_of, 1, var_2657_0_template, 1, var_2663_1_n,
  // loop:
  var_loop, 1, lambda_20_loop, TAIL_CALL,
  POS(2660, 3),
  POS(2661, 3),
  POS(2662, 3),
  POS(2663, 3),
  POS(2664, 3)
};

static TAB_NUM t_lambda_20_loop[] = {
  1, // locals
  0, // parameters
  // n
  var_std__less, 2, var_2663_1_n, var_2662_1_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_342, lambda_343, TAIL_CALL,
  POS(2666, 11),
  POS(2665, 5)
};

static TAB_NUM t_lambda_342[] = {
  0, // locals
  0, // parameters
  //  output
  LET, 1, var_2660_1_output, TAIL_CALL,
  POS(2667, 9)
};

static TAB_NUM t_lambda_343[] = {
  0, // locals
  0, // parameters
  // $chr template(i)
  var_2657_0_template, 1, var_2662_1_i, 1, var_2669_1_chr,
  // !i i+1
  var_std__plus, 2, var_2662_1_i, num_1, 1, var_2662_1_i,
  // case chr
  var_case, 6, var_2669_1_chr, chr_37, lambda_344, chr_92, lambda_370, lambda_373, TAIL_CALL,
  POS(2669, 9),
  POS(2670, 9),
  POS(2671, 9)
};

static TAB_NUM t_lambda_344[] = {
  1, // locals
  0, // parameters
  // n
  var_std__less, 2, var_2663_1_n, var_2662_1_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_345, lambda_346, TAIL_CALL,
  POS(2674, 19),
  POS(2673, 13)
};

static TAB_NUM t_lambda_345[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(2675, 17)
};

static TAB_NUM t_lambda_346[] = {
  2, // locals
  0, // parameters
  // template(i) $alignment !i
  var_2657_0_template, 1, var_2662_1_i, 1, LOCAL(1),
  // case template(i) $alignment !i
  var_case, 8, LOCAL(1), chr_108, lambda_l, chr_114, lambda_r, chr_99, lambda_c, lambda_347, 2, var_2677_18_alignment, var_2662_1_i,
  // $len_chr template(i)
  var_2657_0_template, 1, var_2662_1_i, 1, var_2682_1_len_chr,
  // len_chr < '0' || len_chr > '9'
  var_std__less, 2, var_2682_1_len_chr, chr_48, 1, LOCAL(1),
  // len_chr < '0' || len_chr > '9'
  var_std__or, 2, LOCAL(1), lambda_348, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_349, lambda_350, TAIL_CALL,
  POS(2677, 22),
  POS(2677, 17),
  POS(2682, 17),
  POS(2684, 19),
  POS(2684, 19),
  POS(2683, 17)
};

static TAB_NUM t_lambda_l[] = {
  1, // locals
  0, // parameters
  // i+1
  var_std__plus, 2, var_2662_1_i, num_1, 1, LOCAL(1),
  //  LEFT i+1
  LET, 2, uni_LEFT, LOCAL(1), TAIL_CALL,
  POS(2678, 31),
  POS(2678, 25)
};

static TAB_NUM t_lambda_r[] = {
  1, // locals
  0, // parameters
  // i+1
  var_std__plus, 2, var_2662_1_i, num_1, 1, LOCAL(1),
  //  RIGHT i+1
  LET, 2, uni_RIGHT, LOCAL(1), TAIL_CALL,
  POS(2679, 32),
  POS(2679, 25)
};

static TAB_NUM t_lambda_c[] = {
  1, // locals
  0, // parameters
  // i+1
  var_std__plus, 2, var_2662_1_i, num_1, 1, LOCAL(1),
  //  CENTER i+1
  LET, 2, uni_CENTER, LOCAL(1), TAIL_CALL,
  POS(2680, 33),
  POS(2680, 25)
};

static TAB_NUM t_lambda_347[] = {
  0, // locals
  0, // parameters
  //  RIGHT i
  LET, 2, uni_RIGHT, var_2662_1_i, TAIL_CALL,
  POS(2681, 21)
};

static TAB_NUM t_lambda_348[] = {
  1, // locals
  0, // parameters
  // 9'
  var_std__less, 2, chr_57, var_2682_1_len_chr, 1, LOCAL(1),
  // len_chr > '9'
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(2684, 47),
  POS(2684, 36)
};

static TAB_NUM t_lambda_349[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(2685, 21)
};

static TAB_NUM t_lambda_350[] = {
  0, // locals
  0, // parameters
  // $width len_chr-'0'
  var_std__minus, 2, var_2682_1_len_chr, chr_48, 1, var_2687_1_width,
  // loop
  var_loop, 2, lambda_351, lambda_355, TAIL_CALL,
  POS(2687, 21),
  POS(2688, 21)
};

static TAB_NUM t_lambda_351[] = {
  1, // locals
  0, // parameters
  // !i i+1
  var_std__plus, 2, var_2662_1_i, num_1, 1, var_2662_1_i,
  // n
  var_std__less, 2, var_2663_1_n, var_2662_1_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), var_break, lambda_352, TAIL_CALL,
  POS(2690, 25),
  POS(2692, 31),
  POS(2691, 25)
};

static TAB_NUM t_lambda_352[] = {
  2, // locals
  0, // parameters
  // $fmt_chr template(i)
  var_2657_0_template, 1, var_2662_1_i, 1, var_2695_1_fmt_chr,
  // fmt_chr < '0' || fmt_chr > '9'
  var_std__less, 2, var_2695_1_fmt_chr, chr_48, 1, LOCAL(1),
  // fmt_chr < '0' || fmt_chr > '9'
  var_std__or, 2, LOCAL(1), lambda_353, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), var_break, lambda_354, TAIL_CALL,
  POS(2695, 29),
  POS(2697, 31),
  POS(2697, 31),
  POS(2696, 29)
};

static TAB_NUM t_lambda_353[] = {
  1, // locals
  0, // parameters
  // 9'
  var_std__less, 2, chr_57, var_2695_1_fmt_chr, 1, LOCAL(1),
  // fmt_chr > '9'
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(2697, 59),
  POS(2697, 48)
};

static TAB_NUM t_lambda_354[] = {
  2, // locals
  0, // parameters
  // 10*width+(fmt_chr-'0')
  var_std__times, 2, num_10, var_2687_1_width, 1, LOCAL(1),
  // fmt_chr-'0')
  var_std__minus, 2, var_2695_1_fmt_chr, chr_48, 1, LOCAL(2),
  // !width 10*width+(fmt_chr-'0')
  var_std__plus, 2, LOCAL(1), LOCAL(2), 1, var_2687_1_width,
  // next
  var_next, 0, TAIL_CALL,
  POS(2700, 40),
  POS(2700, 50),
  POS(2700, 33),
  POS(2701, 33)
};

static TAB_NUM t_lambda_355[] = {
  1, // locals
  0, // parameters
  // n:
  var_std__less, 2, var_2663_1_n, var_2662_1_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_356, lambda_357, TAIL_CALL,
  POS(2704, 31),
  POS(2703, 25)
};

static TAB_NUM t_lambda_356[] = {
  0, // locals
  0, // parameters
  // add_argument width
  func_add_argument, 1, var_2687_1_width, TAIL_CALL,
  POS(2705, 29)
};

static TAB_NUM t_lambda_357[] = {
  2, // locals
  0, // parameters
  // template(i) == '.':
  var_2657_0_template, 1, var_2662_1_i, 1, LOCAL(1),
  // template(i) == '.':
  var_std__equal, 2, LOCAL(1), chr_46, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_358, lambda_369, TAIL_CALL,
  POS(2708, 31),
  POS(2708, 31),
  POS(2707, 29)
};

static TAB_NUM t_lambda_358[] = {
  1, // locals
  0, // parameters
  // !i i+1
  var_std__plus, 2, var_2662_1_i, num_1, 1, var_2662_1_i,
  // n
  var_std__less, 2, var_2663_1_n, var_2662_1_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_359, lambda_360, TAIL_CALL,
  POS(2709, 33),
  POS(2711, 39),
  POS(2710, 33)
};

static TAB_NUM t_lambda_359[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(2712, 37)
};

static TAB_NUM t_lambda_360[] = {
  2, // locals
  0, // parameters
  // $dw_chr template(i)
  var_2657_0_template, 1, var_2662_1_i, 1, var_2714_1_dw_chr,
  // dw_chr < '0' || dw_chr > '9'
  var_std__less, 2, var_2714_1_dw_chr, chr_48, 1, LOCAL(1),
  // dw_chr < '0' || dw_chr > '9'
  var_std__or, 2, LOCAL(1), lambda_361, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_362, lambda_363, TAIL_CALL,
  POS(2714, 37),
  POS(2716, 39),
  POS(2716, 39),
  POS(2715, 37)
};

static TAB_NUM t_lambda_361[] = {
  1, // locals
  0, // parameters
  // 9'
  var_std__less, 2, chr_57, var_2714_1_dw_chr, 1, LOCAL(1),
  // dw_chr > '9'
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(2716, 65),
  POS(2716, 55)
};

static TAB_NUM t_lambda_362[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(2717, 41)
};

static TAB_NUM t_lambda_363[] = {
  0, // locals
  0, // parameters
  // $dw dw_chr-'0'
  var_std__minus, 2, var_2714_1_dw_chr, chr_48, 1, var_2719_1_dw,
  // loop
  var_loop, 2, lambda_364, lambda_368, TAIL_CALL,
  POS(2719, 41),
  POS(2720, 41)
};

static TAB_NUM t_lambda_364[] = {
  1, // locals
  0, // parameters
  // !i i+1
  var_std__plus, 2, var_2662_1_i, num_1, 1, var_2662_1_i,
  // n
  var_std__less, 2, var_2663_1_n, var_2662_1_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), var_break, lambda_365, TAIL_CALL,
  POS(2722, 45),
  POS(2724, 51),
  POS(2723, 45)
};

static TAB_NUM t_lambda_365[] = {
  2, // locals
  0, // parameters
  // $fmt_chr template(i)
  var_2657_0_template, 1, var_2662_1_i, 1, var_2727_1_fmt_chr,
  // fmt_chr < '0' || fmt_chr > '9'
  var_std__less, 2, var_2727_1_fmt_chr, chr_48, 1, LOCAL(1),
  // fmt_chr < '0' || fmt_chr > '9'
  var_std__or, 2, LOCAL(1), lambda_366, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), var_break, lambda_367, TAIL_CALL,
  POS(2727, 49),
  POS(2729, 51),
  POS(2729, 51),
  POS(2728, 49)
};

static TAB_NUM t_lambda_366[] = {
  1, // locals
  0, // parameters
  // 9'
  var_std__less, 2, chr_57, var_2727_1_fmt_chr, 1, LOCAL(1),
  // fmt_chr > '9'
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(2729, 79),
  POS(2729, 68)
};

static TAB_NUM t_lambda_367[] = {
  2, // locals
  0, // parameters
  // 10*dw+(fmt_chr-'0')
  var_std__times, 2, num_10, var_2719_1_dw, 1, LOCAL(1),
  // fmt_chr-'0')
  var_std__minus, 2, var_2727_1_fmt_chr, chr_48, 1, LOCAL(2),
  // !dw 10*dw+(fmt_chr-'0')
  var_std__plus, 2, LOCAL(1), LOCAL(2), 1, var_2719_1_dw,
  // next
  var_next, 0, TAIL_CALL,
  POS(2732, 57),
  POS(2732, 64),
  POS(2732, 53),
  POS(2733, 53)
};

static TAB_NUM t_lambda_368[] = {
  0, // locals
  0, // parameters
  // add_argument alignment width dw
  func_add_argument, 3, var_2677_18_alignment, var_2687_1_width, var_2719_1_dw, TAIL_CALL,
  POS(2735, 45)
};

static TAB_NUM t_lambda_369[] = {
  0, // locals
  0, // parameters
  // add_argument alignment width
  func_add_argument, 2, var_2677_18_alignment, var_2687_1_width, TAIL_CALL,
  POS(2737, 33)
};

static TAB_NUM t_lambda_370[] = {
  1, // locals
  0, // parameters
  // n
  var_std__less, 2, var_2663_1_n, var_2662_1_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_371, lambda_372, TAIL_CALL,
  POS(2740, 19),
  POS(2739, 13)
};

static TAB_NUM t_lambda_371[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(2741, 17)
};

static TAB_NUM t_lambda_372[] = {
  1, // locals
  0, // parameters
  // template(i)
  var_2657_0_template, 1, var_2662_1_i, 1, LOCAL(1),
  // push &output template(i)
  var_push, 2, var_2660_1_output, LOCAL(1), 1, var_2660_1_output,
  // !i i+1
  var_std__plus, 2, var_2662_1_i, num_1, 1, var_2662_1_i,
  // next
  var_next, 0, TAIL_CALL,
  POS(2743, 30),
  POS(2743, 17),
  POS(2744, 17),
  POS(2745, 17)
};

static TAB_NUM t_lambda_373[] = {
  0, // locals
  0, // parameters
  // push &output chr
  var_push, 2, var_2660_1_output, var_2669_1_chr, 1, var_2660_1_output,
  // next
  var_next, 0, TAIL_CALL,
  POS(2747, 13),
  POS(2748, 13)
};

static TAB_NUM t_func_add_argument[] = {
  2, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_2752_0_alignment,
  MANDATORY_PARAMETER, var_2753_0_width,
  var_undefined, var_2754_0_decimal_width,
  // $argument arguments(arg_idx)
  var_2658_0_arguments, 1, var_2661_1_arg_idx, 1, var_2756_1_argument,
  // !arg_idx arg_idx+1
  var_std__plus, 2, var_2661_1_arg_idx, num_1, 1, var_2661_1_arg_idx,
  // is_defined:
  var_is_defined, 1, var_2754_0_decimal_width, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_decimal_width_is_defined, lambda_376, 1, LOCAL(2),
  // append &output
  var_append, 2, var_2660_1_output, LOCAL(2), 1, var_2660_1_output,
  // next
  var_next, 0, TAIL_CALL,
  POS(2756, 5),
  POS(2757, 5),
  POS(2760, 23),
  POS(2759, 7),
  POS(2758, 5),
  POS(2776, 5)
};

static TAB_NUM t_lambda_decimal_width_is_defined[] = {
  1, // locals
  0, // parameters
  // real_to_string &argument
  func_real_to_string, 1, var_2756_1_argument, 1, var_2756_1_argument,
  // is_undefined
  var_is_undefined, 1, var_2756_1_argument, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_374, lambda_375, TAIL_CALL,
  POS(2761, 11),
  POS(2763, 22),
  POS(2762, 11)
};

static TAB_NUM t_lambda_374[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(2764, 15)
};

static TAB_NUM t_lambda_375[] = {
  5, // locals
  0, // parameters
  // $value argument .truncate_from. '.'
  var_truncate_from, 2, var_2756_1_argument, chr_46, 1, LOCAL(4),
  // $decimals argument .behind. '.'
  var_behind, 2, var_2756_1_argument, chr_46, 1, LOCAL(5),
  // pad_left(value width)
  var_pad_left, 2, LOCAL(4), var_2753_0_width, 1, LOCAL(1),
  // pad_right(decimals decimal_width "0") decimal_width)
  var_pad_right, 3, LOCAL(5), var_2754_0_decimal_width, string_12, 1, LOCAL(2),
  // truncate(pad_right(decimals decimal_width "0") decimal_width)
  var_truncate, 2, LOCAL(2), var_2754_0_decimal_width, 1, LOCAL(3),
  // string
  var_string, 3, LOCAL(1), string_13, LOCAL(3), TAIL_CALL,
  POS(2766, 15),
  POS(2767, 15),
  POS(2769, 17),
  POS(2771, 26),
  POS(2771, 17),
  POS(2768, 15)
};

static TAB_NUM t_lambda_376[] = {
  0, // locals
  0, // parameters
  // case alignment
  var_case, 5, var_2752_0_alignment, uni_LEFT, lambda_LEFT, uni_RIGHT, lambda_RIGHT, TAIL_CALL,
  POS(2773, 11)
};

static TAB_NUM t_lambda_LEFT[] = {
  1, // locals
  0, // parameters
  // pad_right(argument width)
  var_pad_right, 2, var_2756_1_argument, var_2753_0_width, 1, LOCAL(1),
  //  pad_right(argument width)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(2774, 21),
  POS(2774, 20)
};

static TAB_NUM t_lambda_RIGHT[] = {
  1, // locals
  0, // parameters
  // pad_left(argument width)
  var_pad_left, 2, var_2756_1_argument, var_2753_0_width, 1, LOCAL(1),
  //  pad_left(argument width)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(2775, 22),
  POS(2775, 21)
};

static TAB_NUM t_func_real_to_string[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 2778_18_num
  // $str num.to_string
  var_to_string, 1, LOCAL(1), 1, var_2779_1_str,
  // $n length_of(str)
  var_length_of, 1, var_2779_1_str, 1, var_2780_1_n,
  // $i n
  LET, 1, var_2780_1_n, 1, var_2781_1_i,
  // loop:
  var_loop, 1, lambda_21_loop, TAIL_CALL,
  POS(2779, 3),
  POS(2780, 3),
  POS(2781, 3),
  POS(2782, 3)
};

static TAB_NUM t_lambda_21_loop[] = {
  1, // locals
  0, // parameters
  // i == 0
  var_std__equal, 2, var_2781_1_i, num_0, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_377, lambda_378, TAIL_CALL,
  POS(2784, 7),
  POS(2783, 5)
};

static TAB_NUM t_lambda_377[] = {
  0, // locals
  0, // parameters
  //  str
  LET, 1, var_2779_1_str, TAIL_CALL,
  POS(2785, 9)
};

static TAB_NUM t_lambda_378[] = {
  2, // locals
  0, // parameters
  // str(i) == 'e'
  var_2779_1_str, 1, var_2781_1_i, 1, LOCAL(1),
  // str(i) == 'e'
  var_std__equal, 2, LOCAL(1), chr_101, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), func_2_handle_exponent, lambda_379, TAIL_CALL,
  POS(2788, 11),
  POS(2788, 11),
  POS(2787, 9)
};

static TAB_NUM t_lambda_379[] = {
  0, // locals
  0, // parameters
  // !i i-1
  var_std__minus, 2, var_2781_1_i, num_1, 1, var_2781_1_i,
  // next
  var_next, 0, TAIL_CALL,
  POS(2791, 13),
  POS(2792, 13)
};

static TAB_NUM t_func_2_handle_exponent[] = {
  3, // locals
  0, // parameters
  // i >= n || str(2) != '.'
  var_std__less, 2, var_2781_1_i, var_2780_1_n, 1, LOCAL(1),
  // i >= n || str(2) != '.'
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // i >= n || str(2) != '.'
  var_std__or, 2, LOCAL(2), lambda_380, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_381, lambda_382, TAIL_CALL,
  POS(2796, 7),
  POS(2796, 7),
  POS(2796, 7),
  POS(2795, 5)
};

static TAB_NUM t_lambda_380[] = {
  3, // locals
  0, // parameters
  // str(2) != '.'
  var_2779_1_str, 1, num_2, 1, LOCAL(1),
  // str(2) != '.'
  var_std__equal, 2, LOCAL(1), chr_46, 1, LOCAL(2),
  // str(2) != '.'
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // str(2) != '.'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(2796, 17),
  POS(2796, 17),
  POS(2796, 17),
  POS(2796, 17)
};

static TAB_NUM t_lambda_381[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(2797, 9)
};

static TAB_NUM t_lambda_382[] = {
  3, // locals
  0, // parameters
  // i+2 n).to_integer
  var_std__plus, 2, var_2781_1_i, num_2, 1, LOCAL(1),
  // range(str i+2 n).to_integer
  var_range, 3, var_2779_1_str, LOCAL(1), var_2780_1_n, 1, LOCAL(2),
  // $exp range(str i+2 n).to_integer
  var_to_integer, 1, LOCAL(2), 1, var_2799_1_exp,
  // i-1) str(1))
  var_std__minus, 2, var_2781_1_i, num_1, 1, LOCAL(1),
  // range(str 3 i-1) str(1))
  var_range, 3, var_2779_1_str, num_3, LOCAL(1), 1, LOCAL(2),
  // str(1))
  var_2779_1_str, 1, num_1, 1, LOCAL(3),
  // $man put(range(str 3 i-1) str(1))
  var_put, 2, LOCAL(2), LOCAL(3), 1, var_2800_1_man,
  // is_undefined
  var_is_undefined, 1, var_2799_1_exp, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_383, lambda_384, TAIL_CALL,
  POS(2799, 24),
  POS(2799, 14),
  POS(2799, 9),
  POS(2800, 30),
  POS(2800, 18),
  POS(2800, 35),
  POS(2800, 9),
  POS(2802, 15),
  POS(2801, 9)
};

static TAB_NUM t_lambda_383[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(2803, 13)
};

static TAB_NUM t_lambda_384[] = {
  2, // locals
  0, // parameters
  // exp-1)
  var_std__minus, 2, var_2799_1_exp, num_1, 1, LOCAL(1),
  // $zeros dup("0" exp-1)
  var_dup, 2, string_12, LOCAL(1), 1, var_2805_1_zeros,
  // i+1)
  var_std__plus, 2, var_2781_1_i, num_1, 1, LOCAL(1),
  // str(i+1)
  var_2779_1_str, 1, LOCAL(1), 1, LOCAL(2),
  // case str(i+1)
  var_case, 6, LOCAL(2), chr_43, lambda_385, chr_45, lambda_386, lambda_387, TAIL_CALL,
  POS(2805, 28),
  POS(2805, 13),
  POS(2806, 22),
  POS(2806, 18),
  POS(2806, 13)
};

static TAB_NUM t_lambda_385[] = {
  1, // locals
  0, // parameters
  // append(man zeros)
  var_append, 2, var_2800_1_man, var_2805_1_zeros, 1, LOCAL(1),
  // -> append(man zeros)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(2808, 20),
  POS(2808, 17)
};

static TAB_NUM t_lambda_386[] = {
  2, // locals
  0, // parameters
  // append(zeros man))
  var_append, 2, var_2805_1_zeros, var_2800_1_man, 1, LOCAL(1),
  // append("0." append(zeros man))
  var_append, 2, string_14, LOCAL(1), 1, LOCAL(2),
  // -> append("0." append(zeros man))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2810, 32),
  POS(2810, 20),
  POS(2810, 17)
};

static TAB_NUM t_lambda_387[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(2811, 17)
};

static int value_range_1346_1_arguments[] = {
  -chr_48, -chr_49
};

static int value_range_1357_1_arguments[] = {
  -chr_48, -chr_55
};

static int value_range_1368_1_arguments[] = {
  -chr_48, -chr_57
};

static int value_range_1371_1_arguments[] = {
  -chr_97, -chr_102
};

static int value_range_1374_1_arguments[] = {
  -chr_65, -chr_70
};

static int sequence_1453_1_arguments[] = {
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
  {FLT_VALUE_RANGE, 2, {.arguments = value_range_1346_1_arguments}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_115}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_116}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_117}},
  {FLT_STRING_8, 2, {.str_8 = "0o"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_118}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_119}},
  {FLT_CHARACTER, 0, {.value = 55}},
  {FLT_VALUE_RANGE, 2, {.arguments = value_range_1357_1_arguments}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_120}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_121}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_122}},
  {FLT_STRING_8, 2, {.str_8 = "0x"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_123}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_124}},
  {FLT_CHARACTER, 0, {.value = 57}},
  {FLT_VALUE_RANGE, 2, {.arguments = value_range_1368_1_arguments}},
  {FLT_CHARACTER, 0, {.value = 97}},
  {FLT_CHARACTER, 0, {.value = 102}},
  {FLT_VALUE_RANGE, 2, {.arguments = value_range_1371_1_arguments}},
  {FLT_CHARACTER, 0, {.value = 65}},
  {FLT_CHARACTER, 0, {.value = 70}},
  {FLT_VALUE_RANGE, 2, {.arguments = value_range_1374_1_arguments}},
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
  {FLT_SEQUENCE, 2, {.arguments = sequence_1453_1_arguments}},
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
    {.position = POS(47, 1)}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "is_a_string\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN, 0, 2,
    "object\000std_types", std_types__object__attributes,
    {.position = POS(76, 1)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "is_a_string\000", NULL,
    {.position = POS(76, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "false\000", NULL,
    {.position = POS(76, 32)}
  },
  {
    FOT_UNKNOWN, 0, 28,
    "string\000std_types", std_types__string__attributes,
    {.position = POS(82, 1)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "true\000", NULL,
    {.position = POS(82, 32)}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "is_an_octet_string\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "is_an_octet_string\000", NULL,
    {.position = POS(94, 20)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "octet_string\000std_types", std_types__octet_string__attributes,
    {.position = POS(100, 1)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "to_string\000", NULL,
    {.position = POS(106, 20)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "create_string\000std", NULL,
    {.const_idx = -func_std__create_string}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "135_0_arguments\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_empty\000", NULL,
    {.position = POS(138, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "append\000", NULL,
    {.position = POS(140, 38)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "map_reduce\000", NULL,
    {.position = POS(140, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if\000", NULL,
    {.position = POS(137, 3)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "string\000std", NULL,
    {.const_idx = -func_std__string}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "create_string\000", NULL,
    {.position = POS(156, 3)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "put\000", NULL,
    {.position = POS(158, 20)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "dup\000", NULL,
    {.position = POS(176, 20)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "196_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "197_0_n\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "shift_right\000std", NULL,
    {.position = POS(203, 10)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "204_1_str\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "times\000std", NULL,
    {.position = POS(206, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "equal\000std", NULL,
    {.position = POS(206, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "string\000", NULL,
    {.position = POS(207, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "case\000", NULL,
    {.position = POS(199, 3)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "pad_left\000std", NULL,
    {.const_idx = -func_std__pad_left}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "236_0_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "237_0_pad\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "239_1_text\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "240_1_len\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "length_of\000", NULL,
    {.position = POS(240, 8)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "less\000std", NULL,
    {.position = POS(242, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "minus\000std", NULL,
    {.position = POS(244, 29)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000std", NULL,
    {.position = POS(244, 29)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "div\000", NULL,
    {.position = POS(244, 29)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "range\000", NULL,
    {.position = POS(244, 14)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "pad_right\000std", NULL,
    {.const_idx = -func_std__pad_right}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "272_0_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "273_0_pad\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "275_1_text\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "276_1_len\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "spaces\000std", NULL,
    {.const_idx = -func_std__spaces}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "295_0_n\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not\000std", NULL,
    {.position = POS(298, 10)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "tabs_and_spaces\000std", NULL,
    {.const_idx = -func_std__tabs_and_spaces}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "312_0_n\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "bit_and\000std", NULL,
    {.position = POS(316, 56)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "spaces\000", NULL,
    {.position = POS(317, 34)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "with_tabs\000std", NULL,
    {.const_idx = -func_std__with_tabs}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "332_0_text\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "334_1_s\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "335_1_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "336_1_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "337_1_output\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "338_1_count\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "next\000", NULL,
    {.position = POS(346, 13)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "350_1_tab_count\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "shift_left\000std", NULL,
    {.position = POS(359, 35)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "loop\000", NULL,
    {.position = POS(339, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "and\000std", NULL,
    {.position = POS(373, 16)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "break\000", NULL,
    {.position = POS(376, 11)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "match\000", NULL,
    {.position = POS(383, 20)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "395_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "396_0_stream\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "398_1_len\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "undefined\000", NULL,
    {.position = POS(405, 12)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "search\000", NULL,
    {.position = POS(408, 20)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "425_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "426_0_stream\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "427_0_nth\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "429_1_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "430_1_length\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "431_1_offset\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "432_1_n\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "dec\000", NULL,
    {.position = POS(449, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000", NULL,
    {.position = POS(450, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "inc\000", NULL,
    {.position = POS(454, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "minus\000", NULL,
    {.position = POS(467, 17)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "before\000", NULL,
    {.position = POS(475, 20)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "513_0_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "517_8_pos\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_defined\000", NULL,
    {.position = POS(519, 9)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "truncate_from\000", NULL,
    {.position = POS(524, 20)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "563_0_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "567_8_pos\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "behind\000", NULL,
    {.position = POS(573, 20)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "611_0_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "615_8_pos\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "615_13_len\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "truncate_until\000", NULL,
    {.position = POS(621, 20)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "660_0_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "664_8_pos\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "664_13_len\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "from\000", NULL,
    {.position = POS(670, 20)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "709_0_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "713_8_pos\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "truncate_before\000", NULL,
    {.position = POS(719, 20)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "758_0_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "762_8_pos\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "until\000", NULL,
    {.position = POS(768, 20)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "806_0_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "810_8_pos\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "810_13_len\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "truncate_behind\000", NULL,
    {.position = POS(816, 20)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "855_0_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "859_8_pos\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "859_13_len\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "between\000", NULL,
    {.position = POS(865, 20)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "has_prefix\000", NULL,
    {.position = POS(898, 20)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "has_suffix\000", NULL,
    {.position = POS(920, 20)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "937_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "938_0_suffix\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_a_character\000", NULL,
    {.position = POS(941, 12)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "944_1_len\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "negate\000std", NULL,
    {.position = POS(945, 48)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "without_prefix\000", NULL,
    {.position = POS(947, 20)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "968_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "971_1_n\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "without_suffix\000", NULL,
    {.position = POS(977, 20)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "998_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "999_0_suffix\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1001_1_len\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1009_1_slen\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "contains\000", NULL,
    {.position = POS(1015, 20)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "split\000std", NULL,
    {.const_idx = -func_std__split}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1067_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1068_0_separator\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_list\000", NULL,
    {.position = POS(1072, 8)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1074_1_items\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1076_8_pos\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1076_13_len\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "push\000", NULL,
    {.position = POS(1079, 13)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "join\000std", NULL,
    {.const_idx = -func_std__join}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1112_0_separator\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "trim\000std", NULL,
    {.const_idx = -func_std__trim}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1141_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1142_0_test\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_a_whitespace_character\000", NULL,
    {.position = POS(1142, 12)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1144_1_s\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1145_1_e\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "trim_left\000std", NULL,
    {.const_idx = -func_std__trim_left}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1181_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1182_0_test\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1184_1_s\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1185_1_e\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "trim_right\000std", NULL,
    {.const_idx = -func_std__trim_right}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1215_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1216_0_test\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1218_1_e\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "normalize\000std", NULL,
    {.const_idx = -func_std__normalize}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1249_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1251_1_buf\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1252_1_e\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1253_1_i\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_not_empty\000", NULL,
    {.position = POS(1267, 23)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "update_if\000", NULL,
    {.position = POS(1267, 9)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1268_1_s\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "parse_integer\000std", NULL,
    {.const_idx = -func_std__parse_integer}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1311_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1332_1_negate\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1338_1_value\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1319_17_idx\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1331_1_orig\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1343_3_idx\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1343_7_chr\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "value_range\000std", NULL,
    {.position = POS(1346, 14)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "for_each\000", NULL,
    {.position = POS(1342, 7)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1355_3_idx\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1355_7_chr\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1366_3_idx\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1366_7_chr\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1382_3_idx\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1382_7_chr\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "cond\000", NULL,
    {.position = POS(1339, 3)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "parse_number\000std", NULL,
    {.const_idx = -func_std__parse_number}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1418_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1420_1_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1421_1_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1426_1_sign_chr\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "or\000std", NULL,
    {.position = POS(1427, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "parse_hex\000", NULL,
    {.position = POS(1433, 18)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "sequence\000std", NULL,
    {.position = POS(1453, 14)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1456_28_cont\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1461_1_digit\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1472_1_next_digit\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1484_1_exp_sign_chr\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "integer\000", NULL,
    {.position = POS(1488, 41)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "real\000", NULL,
    {.position = POS(1490, 38)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1492_16_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1492_20_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1493_1_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1497_1_digit\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1502_1_value\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1509_1_next_digit\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1516_15_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1516_19_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1517_1_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1521_1_digit\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1526_1_value\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1533_1_next_digit\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "parse_hex\000std", NULL,
    {.const_idx = -func_std__parse_hex}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1568_0_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1569_0_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1571_1_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1575_1_digit\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1585_22_value\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1592_1_next_digit\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "to_integer\000", NULL,
    {.position = POS(1605, 20)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1641_21_value\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "parse_integer\000", NULL,
    {.position = POS(1641, 3)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "to_number\000", NULL,
    {.position = POS(1647, 20)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1683_20_value\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "parse_number\000", NULL,
    {.position = POS(1683, 3)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "map_characters\000std", NULL,
    {.const_idx = -func_std__map_characters}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1710_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1711_0_function\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "parameter_count_of\000", NULL,
    {.position = POS(1715, 7)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1717_3_s\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1717_5_e\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1713_1_map\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1730_3_s\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1730_5_e\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "to_upper_case\000", NULL,
    {.position = POS(1745, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "map_characters\000", NULL,
    {.position = POS(1765, 3)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "to_lower_case\000", NULL,
    {.position = POS(1767, 20)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "to_title_case\000", NULL,
    {.position = POS(1789, 20)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1807_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1809_22_idx\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1809_26_chr\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_a_letter_character\000", NULL,
    {.position = POS(1811, 30)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "to_sentence_case\000", NULL,
    {.position = POS(1815, 20)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1833_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1835_22_idx\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1835_26_chr\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "delete_all\000std", NULL,
    {.const_idx = -func_std__delete_all}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1863_0_expressions\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1865_14_txt\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1879_1_new_text\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1872_1_len\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if_not\000", NULL,
    {.position = POS(1873, 13)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "replace_all\000std", NULL,
    {.const_idx = -func_std__replace_all}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1904_0_args\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1906_15_txt\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1927_1_new_text\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1913_17_replacement\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1914_1_len\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "replace_first\000std", NULL,
    {.const_idx = -func_std__replace_first}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1952_0_args\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1954_17_txt\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1974_1_new_text\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1961_17_replacement\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1962_1_len\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "update_if_not\000", NULL,
    {.position = POS(1967, 17)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "count_occurrences\000std", NULL,
    {.const_idx = -func_std__count_occurrences}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1997_0_expr\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1999_15_txt\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1999_19_count\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2004_1_n\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "partition\000std", NULL,
    {.const_idx = -func_std__partition}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2038_0_text\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2039_0_separators\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2041_1_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2044_13_s\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2044_15_e\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2050_1_parts\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2051_1_ls\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2053_3_i\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "equal\000", NULL,
    {.position = POS(2054, 38)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "any_of\000", NULL,
    {.position = POS(2054, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "from_to\000", NULL,
    {.position = POS(2052, 9)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "split_into_lines\000std", NULL,
    {.const_idx = -func_std__split_into_lines}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2118_25_text\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2119_1_lines\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2120_1_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2121_1_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2122_1_s\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "split_into_indented_lines\000std", NULL,
    {.const_idx = -func_std__split_into_indented_lines}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2201_0_text\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2206_9_s\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2206_11_e\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2212_1_lines\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2213_1_ls\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2219_3_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2240_15_s\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2240_17_e\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2241_1_indent\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2255_1_line_text\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "tuple\000", NULL,
    {.position = POS(2259, 20)}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "subgroups_of\000std", NULL,
    {.has_a_setter = true}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2266_13_line\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "first\000", NULL,
    {.position = POS(2269, 8)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "split_into_groups\000std", NULL,
    {.const_idx = -func_std__split_into_groups}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2323_0_lines\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2325_1_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2326_1_fv\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2330_1_indent\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2339_9_s\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2339_11_e\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2339_13_indent\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2339_20_gs\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2345_1_groups\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2346_1_minimum_indent\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2347_1_ge\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2349_3_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2350_1_current_indent\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2375_1_current_indent\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2388_14_l\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "subgroups_of\000", NULL,
    {.position = POS(2398, 41)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2400_34_current_indent\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "wrap_words\000std", NULL,
    {.const_idx = -func_std__wrap_words}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2440_0_text\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2441_0_width\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2443_1_wrapped_text\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2444_1_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2445_1_s\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2446_1_l\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2447_1_b\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2448_1_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2454_1_chr\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "serialize\000", NULL,
    {.position = POS(2498, 20)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2516_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2517_0_indent\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2519_1_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2520_1_s\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2522_3_idx\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2522_7_chr\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "tabs_and_spaces\000", NULL,
    {.position = POS(2535, 19)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "indented\000std", NULL,
    {.const_idx = -func_std__indented}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2568_0_indent\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2569_0_text\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2571_1_indented_text\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2572_1_new_indent\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2573_1_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2574_1_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2587_1_s\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "format\000std", NULL,
    {.const_idx = -func_std__format}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2657_0_template\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2658_0_arguments\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2660_1_output\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2661_1_arg_idx\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2662_1_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2663_1_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2669_1_chr\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2677_18_alignment\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2682_1_len_chr\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2687_1_width\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2695_1_fmt_chr\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2714_1_dw_chr\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2719_1_dw\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2727_1_fmt_chr\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2752_0_alignment\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2753_0_width\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2754_0_decimal_width\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2756_1_argument\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_undefined\000", NULL,
    {.position = POS(2763, 22)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "pad_left\000", NULL,
    {.position = POS(2769, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "pad_right\000", NULL,
    {.position = POS(2771, 26)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "truncate\000", NULL,
    {.position = POS(2771, 17)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2779_1_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2780_1_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2781_1_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2799_1_exp\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2800_1_man\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2805_1_zeros\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "empty_collection_of\000", NULL,
    {.position = POS(2813, 20)}
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
