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
  func_std__parse_integer = -156,
  func_maybe_negated = -157,
  lambda_95 = -158,
  lambda_96 = -159,
  func_partial_match = -160,
  lambda_97 = -161,
  lambda_98 = -162,
  func_exhausted = -163,
  lambda_99 = -164,
  lambda_100 = -165,
  chr_45 = -166,
  lambda_101 = -167,
  lambda_102 = -168,
  lambda_103 = -169,
  str_0b = -170,
  lambda_104 = -171,
  lambda_105 = -172,
  chr_48 = -173,
  chr_49 = -174,
  value_range_818_1 = -175,
  lambda_106 = -176,
  lambda_107 = -177,
  lambda_108 = -178,
  str_0o = -179,
  lambda_109 = -180,
  lambda_110 = -181,
  chr_55 = -182,
  value_range_829_1 = -183,
  lambda_111 = -184,
  lambda_112 = -185,
  lambda_113 = -186,
  str_0x = -187,
  lambda_114 = -188,
  lambda_115 = -189,
  chr_57 = -190,
  value_range_840_1 = -191,
  chr_97 = -192,
  chr_102 = -193,
  value_range_843_1 = -194,
  chr_65 = -195,
  chr_70 = -196,
  value_range_846_1 = -197,
  lambda_116 = -198,
  num_4 = -199,
  lambda_a__f = -200,
  lambda_A__F = -201,
  lambda_117 = -202,
  lambda_118 = -203,
  lambda_119 = -204,
  lambda_120 = -205,
  lambda_121 = -206,
  lambda_122 = -207,
  func_std__parse_number = -208,
  lambda_123 = -209,
  lambda_124 = -210,
  lambda_125 = -211,
  chr_43 = -212,
  lambda_126 = -213,
  lambda_127 = -214,
  lambda_128 = -215,
  chr_98 = -216,
  lambda_b = -217,
  chr_111 = -218,
  lambda_o = -219,
  chr_120 = -220,
  lambda_x = -221,
  func_parse = -222,
  lambda_skip_one_ore_more_digits = -223,
  lambda_129 = -224,
  chr_101 = -225,
  chr_69 = -226,
  sequence_910_1 = -227,
  chr_46 = -228,
  lambda_130 = -229,
  lambda_2_skip_one_ore_more_digits = -230,
  lambda_131 = -231,
  func_skip_one_ore_more_digits = -232,
  lambda_132 = -233,
  lambda_133 = -234,
  lambda_134 = -235,
  lambda_135 = -236,
  lambda_136 = -237,
  lambda_7_loop = -238,
  lambda_137 = -239,
  lambda_138 = -240,
  func_handle_exponent = -241,
  lambda_139 = -242,
  lambda_140 = -243,
  lambda_141 = -244,
  lambda_142 = -245,
  func_return_integer = -246,
  func_return_real = -247,
  func_parse_binary = -248,
  lambda_143 = -249,
  lambda_144 = -250,
  lambda_145 = -251,
  lambda_146 = -252,
  lambda_147 = -253,
  lambda_8_loop = -254,
  lambda_148 = -255,
  lambda_149 = -256,
  lambda_150 = -257,
  lambda_151 = -258,
  lambda_152 = -259,
  func_parse_octal = -260,
  lambda_153 = -261,
  lambda_154 = -262,
  lambda_155 = -263,
  lambda_156 = -264,
  lambda_157 = -265,
  lambda_9_loop = -266,
  lambda_158 = -267,
  lambda_159 = -268,
  lambda_160 = -269,
  lambda_161 = -270,
  lambda_162 = -271,
  func_parse_hex = -272,
  lambda_163 = -273,
  lambda_164 = -274,
  lambda_165 = -275,
  lambda_166 = -276,
  lambda_167 = -277,
  lambda_168 = -278,
  lambda_169 = -279,
  lambda_170 = -280,
  lambda_171 = -281,
  lambda_172 = -282,
  lambda_173 = -283,
  lambda_174 = -284,
  lambda_175 = -285,
  func_handle_more_digits = -286,
  lambda_10_loop = -287,
  lambda_176 = -288,
  lambda_177 = -289,
  lambda_178 = -290,
  lambda_179 = -291,
  lambda_180 = -292,
  lambda_181 = -293,
  lambda_182 = -294,
  lambda_183 = -295,
  lambda_184 = -296,
  lambda_185 = -297,
  lambda_186 = -298,
  lambda_187 = -299,
  lambda_188 = -300,
  func_std_types__string___to_integer = -301,
  lambda_189 = -302,
  lambda_190 = -303,
  func_std_types__string___to_number = -304,
  lambda_191 = -305,
  lambda_192 = -306,
  func_std__map_characters = -307,
  lambda_193 = -308,
  lambda_194 = -309,
  lambda_195 = -310,
  lambda_196 = -311,
  lambda_197 = -312,
  lambda_198 = -313,
  lambda_199 = -314,
  lambda_200 = -315,
  lambda_201 = -316,
  lambda_202 = -317,
  lambda_203 = -318,
  lambda_204 = -319,
  func_std_types__string___to_upper_case = -320,
  func_std_types__string___to_lower_case = -321,
  func_std_types__string___to_title_case = -322,
  lambda_205 = -323,
  lambda_206 = -324,
  lambda_207 = -325,
  lambda_208 = -326,
  func_std_types__string___to_sentence_case = -327,
  lambda_209 = -328,
  lambda_210 = -329,
  lambda_211 = -330,
  lambda_212 = -331,
  func_std__delete_all = -332,
  func_delete_all = -333,
  lambda_213 = -334,
  lambda_214 = -335,
  lambda_215 = -336,
  lambda_216 = -337,
  lambda_217 = -338,
  func_std__replace_all = -339,
  func_replace_all = -340,
  lambda_218 = -341,
  lambda_219 = -342,
  lambda_220 = -343,
  lambda_221 = -344,
  lambda_replacement_is_a_string = -345,
  lambda_222 = -346,
  lambda_223 = -347,
  func_std__replace_first = -348,
  func_replace_first = -349,
  lambda_224 = -350,
  lambda_225 = -351,
  lambda_226 = -352,
  lambda_227 = -353,
  lambda_228 = -354,
  lambda_229 = -355,
  func_std__count_occurrences = -356,
  func_search_next = -357,
  lambda_230 = -358,
  lambda_231 = -359,
  lambda_n_is_defined = -360,
  lambda_232 = -361,
  num_300 = -362,
  func_std__partition = -363,
  func_partition = -364,
  lambda_233 = -365,
  lambda_234 = -366,
  lambda_235 = -367,
  lambda_236 = -368,
  lambda_ls_is_defined = -369,
  lambda_237 = -370,
  lambda_238 = -371,
  lambda_239 = -372,
  lambda_240 = -373,
  lambda_241 = -374,
  lambda_242 = -375,
  lambda_11_loop = -376,
  lambda_243 = -377,
  lambda_244 = -378,
  func_std__split_into_lines = -379,
  lambda_12_loop = -380,
  lambda_245 = -381,
  lambda_246 = -382,
  lambda_247 = -383,
  lambda_248 = -384,
  lambda_249 = -385,
  lambda_250 = -386,
  func_std__split_into_indented_lines = -387,
  func_split = -388,
  lambda_251 = -389,
  lambda_252 = -390,
  lambda_253 = -391,
  lambda_254 = -392,
  lambda_255 = -393,
  lambda_256 = -394,
  lambda_257 = -395,
  lambda_2_ls_is_defined = -396,
  lambda_258 = -397,
  lambda_259 = -398,
  lambda_260 = -399,
  lambda_261 = -400,
  lambda_13_loop = -401,
  lambda_262 = -402,
  lambda_263 = -403,
  func_create_line = -404,
  lambda_14_loop = -405,
  chr_9 = -406,
  lambda_264 = -407,
  lambda_265 = -408,
  lambda_266 = -409,
  lambda_267 = -410,
  string_7 = -411,
  lambda_268 = -412,
  lambda_269 = -413,
  num_20 = -414,
  num_9999 = -415,
  func_indent_of = -416,
  lambda_270 = -417,
  lambda_271 = -418,
  func_std__split_into_groups = -419,
  lambda_15_loop = -420,
  lambda_272 = -421,
  lambda_indent_is_defined = -422,
  lambda_273 = -423,
  lambda_274 = -424,
  func_2_split = -425,
  lambda_275 = -426,
  lambda_276 = -427,
  lambda_277 = -428,
  lambda_278 = -429,
  lambda_279 = -430,
  lambda_280 = -431,
  lambda_281 = -432,
  lambda_282 = -433,
  lambda_283 = -434,
  lambda_284 = -435,
  lambda_285 = -436,
  lambda_gs_is_defined = -437,
  lambda_16_loop = -438,
  lambda_286 = -439,
  lambda_287 = -440,
  lambda_288 = -441,
  lambda_289 = -442,
  lambda_290 = -443,
  lambda_291 = -444,
  lambda_292 = -445,
  lambda_293 = -446,
  func_add_groups = -447,
  lambda_294 = -448,
  lambda_295 = -449,
  lambda_296 = -450,
  lambda_297 = -451,
  func_reduce_minimum_indent_and_next = -452,
  lambda_298 = -453,
  lambda_299 = -454,
  func_start_new_fragment_and_next = -455,
  func_std__wrap_words = -456,
  lambda_17_loop = -457,
  lambda_300 = -458,
  lambda_301 = -459,
  lambda_302 = -460,
  lambda_303 = -461,
  lambda_304 = -462,
  lambda_305 = -463,
  lambda_306 = -464,
  lambda_307 = -465,
  lambda_308 = -466,
  lambda_b_is_defined = -467,
  lambda_309 = -468,
  func_std_types__string___serialize = -469,
  string_8 = -470,
  lambda_310 = -471,
  lambda_311 = -472,
  chr_126 = -473,
  lambda_312 = -474,
  chr_34 = -475,
  lambda_313 = -476,
  chr_64 = -477,
  lambda_314 = -478,
  string_9 = -479,
  string_10 = -480,
  lambda_315 = -481,
  string_11 = -482,
  lambda_316 = -483,
  lambda_317 = -484,
  func_std__indented = -485,
  lambda_18_loop = -486,
  lambda_318 = -487,
  lambda_319 = -488,
  lambda_320 = -489,
  lambda_19_loop = -490,
  lambda_321 = -491,
  lambda_322 = -492,
  lambda_323 = -493,
  lambda_324 = -494,
  lambda_325 = -495,
  func_skip_indent = -496,
  lambda_326 = -497,
  lambda_327 = -498,
  lambda_328 = -499,
  func_skip_spaces = -500,
  lambda_329 = -501,
  lambda_330 = -502,
  lambda_331 = -503,
  func_std__format = -504,
  lambda_20_loop = -505,
  lambda_332 = -506,
  lambda_333 = -507,
  chr_37 = -508,
  lambda_334 = -509,
  lambda_335 = -510,
  lambda_336 = -511,
  lambda_337 = -512,
  lambda_338 = -513,
  lambda_339 = -514,
  lambda_340 = -515,
  lambda_341 = -516,
  lambda_342 = -517,
  lambda_343 = -518,
  lambda_344 = -519,
  lambda_345 = -520,
  lambda_346 = -521,
  lambda_347 = -522,
  lambda_348 = -523,
  lambda_349 = -524,
  lambda_350 = -525,
  lambda_351 = -526,
  lambda_352 = -527,
  lambda_353 = -528,
  lambda_354 = -529,
  lambda_355 = -530,
  lambda_356 = -531,
  lambda_357 = -532,
  lambda_358 = -533,
  chr_92 = -534,
  lambda_359 = -535,
  lambda_360 = -536,
  lambda_361 = -537,
  lambda_362 = -538,
  func_add_argument = -539,
  lambda_decimal_width_is_defined = -540,
  lambda_363 = -541,
  lambda_364 = -542,
  string_12 = -543,
  string_13 = -544,
  lambda_365 = -545,
  func_real_to_string = -546,
  lambda_21_loop = -547,
  lambda_366 = -548,
  lambda_367 = -549,
  lambda_368 = -550,
  func_2_handle_exponent = -551,
  lambda_369 = -552,
  lambda_370 = -553,
  lambda_371 = -554,
  lambda_372 = -555,
  lambda_373 = -556,
  lambda_374 = -557,
  lambda_375 = -558,
  string_14 = -559,
  lambda_376 = -560
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
  var_81_0_args, // dynamic
  var_is_empty, // extern
  var_append, // extern
  var_map_reduce, // extern
  var_if, // extern
  var_std__string, // initialized
  var_create_string, // extern
  var_put, // extern polymorphic
  var_dup, // extern polymorphic
  var_124_0_self, // dynamic
  var_125_0_n, // dynamic
  var_std__shift_right, // extern
  var_132_1_str, // dynamic
  var_std__times, // extern
  var_std__equal, // extern
  var_string, // extern
  var_case, // extern
  var_std__pad_left, // initialized
  var_152_0_n, // dynamic
  var_153_0_pad, // dynamic
  var_155_1_text, // dynamic
  var_156_1_len, // dynamic
  var_length_of, // extern
  var_std__less, // extern
  var_std__minus, // extern
  var_std__plus, // extern
  var_div, // extern
  var_range, // extern
  var_std__pad_right, // initialized
  var_176_0_n, // dynamic
  var_177_0_pad, // dynamic
  var_179_1_text, // dynamic
  var_180_1_len, // dynamic
  var_std__spaces, // initialized
  var_195_0_n, // dynamic
  var_std__not, // extern
  var_std__tabs_and_spaces, // initialized
  var_208_0_n, // dynamic
  var_std__bit_and, // extern
  var_spaces, // extern
  var_std__with_tabs, // initialized
  var_221_0_text, // dynamic
  var_223_1_s, // dynamic
  var_224_1_n, // dynamic
  var_225_1_i, // dynamic
  var_226_1_output, // dynamic
  var_227_1_count, // dynamic
  var_next, // extern
  var_239_1_tab_count, // dynamic
  var_std__shift_left, // extern
  var_loop, // extern
  var_std__and, // extern
  var_break, // extern
  var_match, // extern polymorphic
  var_276_0_self, // dynamic
  var_277_0_stream, // dynamic
  var_279_1_len, // dynamic
  var_undefined, // extern
  var_search, // extern polymorphic
  var_293_0_self, // dynamic
  var_294_0_stream, // dynamic
  var_295_0_nth, // dynamic
  var_297_1_i, // dynamic
  var_298_1_length, // dynamic
  var_299_1_offset, // dynamic
  var_300_1_n, // dynamic
  var_dec, // extern
  var_plus, // extern
  var_inc, // extern
  var_minus, // extern
  var_before, // extern polymorphic
  var_371_0_str, // dynamic
  var_375_8_pos, // dynamic
  var_is_defined, // extern
  var_truncate_from, // extern polymorphic
  var_401_0_str, // dynamic
  var_405_8_pos, // dynamic
  var_behind, // extern polymorphic
  var_437_0_str, // dynamic
  var_441_8_pos, // dynamic
  var_441_13_len, // dynamic
  var_truncate_until, // extern polymorphic
  var_466_0_str, // dynamic
  var_470_8_pos, // dynamic
  var_470_13_len, // dynamic
  var_from, // extern polymorphic
  var_498_0_str, // dynamic
  var_502_8_pos, // dynamic
  var_truncate_before, // extern polymorphic
  var_518_0_str, // dynamic
  var_522_8_pos, // dynamic
  var_until, // extern polymorphic
  var_547_0_str, // dynamic
  var_551_8_pos, // dynamic
  var_551_13_len, // dynamic
  var_truncate_behind, // extern polymorphic
  var_567_0_str, // dynamic
  var_571_8_pos, // dynamic
  var_571_13_len, // dynamic
  var_between, // extern polymorphic
  var_has_prefix, // extern polymorphic
  var_has_suffix, // extern polymorphic
  var_613_0_self, // dynamic
  var_614_0_suffix, // dynamic
  var_is_a_character, // extern
  var_620_1_len, // dynamic
  var_std__negate, // extern
  var_without_prefix, // extern polymorphic
  var_629_0_self, // dynamic
  var_632_1_n, // dynamic
  var_without_suffix, // extern polymorphic
  var_644_0_self, // dynamic
  var_645_0_suffix, // dynamic
  var_647_1_len, // dynamic
  var_655_1_slen, // dynamic
  var_contains, // extern polymorphic
  var_std__split, // initialized
  var_679_0_self, // dynamic
  var_680_0_separator, // dynamic
  var_empty_list, // extern
  var_686_1_items, // dynamic
  var_688_8_pos, // dynamic
  var_688_13_len, // dynamic
  var_push, // extern
  var_std__join, // initialized
  var_707_0_separator, // dynamic
  var_std__trim, // initialized
  var_719_0_self, // dynamic
  var_720_0_test, // dynamic
  var_is_a_whitespace_character, // extern
  var_722_1_s, // dynamic
  var_723_1_e, // dynamic
  var_std__trim_left, // initialized
  var_742_0_self, // dynamic
  var_743_0_test, // dynamic
  var_745_1_s, // dynamic
  var_746_1_e, // dynamic
  var_std__trim_right, // initialized
  var_759_0_self, // dynamic
  var_760_0_test, // dynamic
  var_762_1_e, // dynamic
  var_std__parse_integer, // initialized
  var_783_0_self, // dynamic
  var_804_1_negate, // dynamic
  var_810_1_value, // dynamic
  var_791_17_idx, // dynamic
  var_803_1_orig, // dynamic
  var_815_3_idx, // dynamic
  var_815_7_chr, // dynamic
  var_std__value_range, // extern
  var_for_each, // extern
  var_827_3_idx, // dynamic
  var_827_7_chr, // dynamic
  var_838_3_idx, // dynamic
  var_838_7_chr, // dynamic
  var_854_3_idx, // dynamic
  var_854_7_chr, // dynamic
  var_cond, // extern
  var_std__parse_number, // initialized
  var_875_0_self, // dynamic
  var_877_1_i, // dynamic
  var_878_1_n, // dynamic
  var_883_1_sign_chr, // dynamic
  var_std__or, // extern
  var_update_if, // extern
  var_std__sequence, // extern
  var_913_28_cont, // dynamic
  var_918_1_digit, // dynamic
  var_929_1_next_digit, // dynamic
  var_941_1_exp_sign_chr, // dynamic
  var_integer, // extern
  var_real, // extern
  var_949_16_str, // dynamic
  var_949_20_i, // dynamic
  var_950_1_n, // dynamic
  var_954_1_digit, // dynamic
  var_959_1_value, // dynamic
  var_966_1_next_digit, // dynamic
  var_973_15_str, // dynamic
  var_973_19_i, // dynamic
  var_974_1_n, // dynamic
  var_978_1_digit, // dynamic
  var_983_1_value, // dynamic
  var_990_1_next_digit, // dynamic
  var_997_13_str, // dynamic
  var_997_17_i, // dynamic
  var_998_1_n, // dynamic
  var_1002_1_digit, // dynamic
  var_1012_22_value, // dynamic
  var_1019_1_next_digit, // dynamic
  var_to_integer, // extern polymorphic
  var_1038_21_value, // dynamic
  var_parse_integer, // extern
  var_to_number, // extern polymorphic
  var_1050_20_value, // dynamic
  var_parse_number, // extern
  var_std__map_characters, // initialized
  var_1064_0_self, // dynamic
  var_1065_0_function, // dynamic
  var_parameter_count_of, // extern
  var_1071_3_s, // dynamic
  var_1071_5_e, // dynamic
  var_1067_1_map, // dynamic
  var_1084_3_s, // dynamic
  var_1084_5_e, // dynamic
  var_to_upper_case, // extern polymorphic
  var_map_characters, // extern
  var_to_lower_case, // extern polymorphic
  var_to_title_case, // extern polymorphic
  var_1131_0_self, // dynamic
  var_1133_22_idx, // dynamic
  var_1133_26_chr, // dynamic
  var_is_a_letter_character, // extern
  var_to_sentence_case, // extern polymorphic
  var_1147_0_self, // dynamic
  var_1149_22_idx, // dynamic
  var_1149_26_chr, // dynamic
  var_std__delete_all, // initialized
  var_1160_0_expressions, // dynamic
  var_1162_14_txt, // dynamic
  var_1176_1_new_text, // dynamic
  var_1169_1_len, // dynamic
  var_if_not, // extern
  var_std__replace_all, // initialized
  var_1185_0_args, // dynamic
  var_1187_15_txt, // dynamic
  var_1208_1_new_text, // dynamic
  var_1194_17_replacement, // dynamic
  var_1195_1_len, // dynamic
  var_std__replace_first, // initialized
  var_1217_0_args, // dynamic
  var_1219_17_txt, // dynamic
  var_1239_1_new_text, // dynamic
  var_1226_17_replacement, // dynamic
  var_1227_1_len, // dynamic
  var_update_if_not, // extern
  var_std__count_occurrences, // initialized
  var_1247_0_expr, // dynamic
  var_1249_15_txt, // dynamic
  var_1249_19_count, // dynamic
  var_1254_1_n, // dynamic
  var_std__partition, // initialized
  var_1273_0_text, // dynamic
  var_1274_0_separators, // dynamic
  var_1276_1_n, // dynamic
  var_1279_13_s, // dynamic
  var_1279_15_e, // dynamic
  var_1285_1_parts, // dynamic
  var_1286_1_ls, // dynamic
  var_1288_3_i, // dynamic
  var_equal, // extern
  var_any_of, // extern
  var_from_to, // extern
  var_std__split_into_lines, // initialized
  var_1353_25_text, // dynamic
  var_1354_1_lines, // dynamic
  var_1355_1_i, // dynamic
  var_1356_1_n, // dynamic
  var_1357_1_s, // dynamic
  var_std__split_into_indented_lines, // initialized
  var_1395_0_text, // dynamic
  var_1400_9_s, // dynamic
  var_1400_11_e, // dynamic
  var_1406_1_lines, // dynamic
  var_1407_1_ls, // dynamic
  var_1413_3_i, // dynamic
  var_1434_15_s, // dynamic
  var_1434_17_e, // dynamic
  var_1435_1_indent, // dynamic
  var_1449_1_line_text, // dynamic
  var_tuple, // extern
  var_std__subgroups_of, // attribute with setter
  var_1460_13_line, // dynamic
  var_first, // extern
  var_std__split_into_groups, // initialized
  var_1478_0_lines, // dynamic
  var_1480_1_n, // dynamic
  var_1481_1_fv, // dynamic
  var_1485_1_indent, // dynamic
  var_1494_9_s, // dynamic
  var_1494_11_e, // dynamic
  var_1494_13_indent, // dynamic
  var_1494_20_gs, // dynamic
  var_1500_1_groups, // dynamic
  var_1501_1_minimum_indent, // dynamic
  var_1502_1_ge, // dynamic
  var_1504_3_i, // dynamic
  var_1505_1_current_indent, // dynamic
  var_1530_1_current_indent, // dynamic
  var_1543_14_l, // dynamic
  var_subgroups_of, // extern polymorphic
  var_1555_34_current_indent, // dynamic
  var_std__wrap_words, // initialized
  var_1568_19_text, // dynamic
  var_1568_24_width, // dynamic
  var_1569_1_wrapped_text, // dynamic
  var_1570_1_n, // dynamic
  var_1571_1_s, // dynamic
  var_1572_1_l, // dynamic
  var_1573_1_b, // dynamic
  var_1574_1_i, // dynamic
  var_1580_1_chr, // dynamic
  var_serialize, // extern polymorphic
  var_1626_0_self, // dynamic
  var_1627_0_indent, // dynamic
  var_1629_1_str, // dynamic
  var_1630_1_s, // dynamic
  var_1632_3_idx, // dynamic
  var_1632_7_chr, // dynamic
  var_tabs_and_spaces, // extern
  var_std__indented, // initialized
  var_1657_0_indent, // dynamic
  var_1658_0_text, // dynamic
  var_1660_1_indented_text, // dynamic
  var_1661_1_new_indent, // dynamic
  var_1662_1_i, // dynamic
  var_1663_1_n, // dynamic
  var_1676_1_s, // dynamic
  var_std__format, // initialized
  var_1714_0_str, // dynamic
  var_1715_0_arguments, // dynamic
  var_1717_1_output, // dynamic
  var_1718_1_arg_idx, // dynamic
  var_1719_1_i, // dynamic
  var_1720_1_n, // dynamic
  var_1726_1_chr, // dynamic
  var_1734_1_len_chr, // dynamic
  var_1739_1_width, // dynamic
  var_1747_1_fmt_chr, // dynamic
  var_1766_1_dw_chr, // dynamic
  var_1771_1_dw, // dynamic
  var_1779_1_fmt_chr, // dynamic
  var_1804_0_width, // dynamic
  var_1805_0_decimal_width, // dynamic
  var_1807_1_argument, // dynamic
  var_is_undefined, // extern
  var_pad_left, // extern
  var_pad_right, // extern
  var_truncate, // extern
  var_1827_1_str, // dynamic
  var_1828_1_n, // dynamic
  var_1829_1_i, // dynamic
  var_1847_1_exp, // dynamic
  var_1848_1_man, // dynamic
  var_1853_1_zeros, // dynamic
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
  var_81_0_args,
  // is_empty
  var_is_empty, 1, var_81_0_args, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1, lambda_2, TAIL_CALL,
  POS(84, 10),
  POS(83, 3)
};

static TAB_NUM t_lambda_1[] = {
  0, // locals
  0, // parameters
  //  ""
  LET, 1, string_1, TAIL_CALL,
  POS(85, 7)
};

static TAB_NUM t_lambda_2[] = {
  0, // locals
  0, // parameters
  // map_reduce args to_string append
  var_map_reduce, 3, var_81_0_args, var_to_string, var_append, TAIL_CALL,
  POS(86, 7)
};

static TAB_NUM t_func_std__string[] = {
  1, // locals
  -1, // parameters
  REST_PARAMETER, LOCAL(1), // 96_0_args
  // create_string args
  var_create_string, 1, LOCAL(1), TAIL_CALL,
  POS(98, 3)
};

static TAB_NUM t_func_std_types__string___put[] = {
  4, // locals
  2, // parameters
  LOCAL(3), // 109_0_self
  LOCAL(4), // 110_0_chr
  // to_string self)
  var_to_string, 1, LOCAL(4), 1, LOCAL(1),
  // append(chr.to_string self)
  var_append, 2, LOCAL(1), LOCAL(3), 1, LOCAL(2),
  // -> append(chr.to_string self)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(112, 17),
  POS(112, 6),
  POS(112, 3)
};

static TAB_NUM t_func_std_types__string___dup[] = {
  0, // locals
  2, // parameters
  var_124_0_self,
  var_125_0_n,
  // case n
  var_case, 6, var_125_0_n, num_0, lambda_3, num_1, lambda_4, lambda_5, TAIL_CALL,
  POS(127, 3)
};

static TAB_NUM t_lambda_3[] = {
  0, // locals
  0, // parameters
  //  ""
  LET, 1, string_1, TAIL_CALL,
  POS(128, 9)
};

static TAB_NUM t_lambda_4[] = {
  0, // locals
  0, // parameters
  //  self
  LET, 1, var_124_0_self, TAIL_CALL,
  POS(129, 9)
};

static TAB_NUM t_lambda_5[] = {
  3, // locals
  0, // parameters
  // $h n >> 1 # fails if <n> is not a positive integer
  var_std__shift_right, 2, var_125_0_n, num_1, 1, LOCAL(3),
  // $str dup(self h)
  var_dup, 2, var_124_0_self, LOCAL(3), 1, var_132_1_str,
  // 2*h == n:
  var_std__times, 2, num_2, LOCAL(3), 1, LOCAL(1),
  // 2*h == n:
  var_std__equal, 2, LOCAL(1), var_125_0_n, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_6, lambda_7, TAIL_CALL,
  POS(131, 7),
  POS(132, 7),
  POS(134, 9),
  POS(134, 9),
  POS(133, 7)
};

static TAB_NUM t_lambda_6[] = {
  0, // locals
  0, // parameters
  // string str str
  var_string, 2, var_132_1_str, var_132_1_str, TAIL_CALL,
  POS(135, 11)
};

static TAB_NUM t_lambda_7[] = {
  0, // locals
  0, // parameters
  // string str str self
  var_string, 3, var_132_1_str, var_132_1_str, var_124_0_self, TAIL_CALL,
  POS(137, 11)
};

static TAB_NUM t_func_std__pad_left[] = {
  2, // locals
  -3, // parameters
  MANDATORY_PARAMETER, LOCAL(2), // 151_0_expr
  MANDATORY_PARAMETER, var_152_0_n,
  string_2, var_153_0_pad,
  // $text expr.to_string
  var_to_string, 1, LOCAL(2), 1, var_155_1_text,
  // $len length_of(text)
  var_length_of, 1, var_155_1_text, 1, var_156_1_len,
  // len < n:
  var_std__less, 2, var_156_1_len, var_152_0_n, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_8, lambda_9, TAIL_CALL,
  POS(155, 3),
  POS(156, 3),
  POS(158, 5),
  POS(157, 3)
};

static TAB_NUM t_lambda_8[] = {
  8, // locals
  0, // parameters
  // $pad_len length_of(pad)
  var_length_of, 1, var_153_0_pad, 1, LOCAL(8),
  // n-len)+(pad_len-1) .div. pad_len) 1 n-len) text
  var_std__minus, 2, var_152_0_n, var_156_1_len, 1, LOCAL(1),
  // pad_len-1) .div. pad_len) 1 n-len) text
  var_std__minus, 2, LOCAL(8), num_1, 1, LOCAL(2),
  // n-len)+(pad_len-1) .div. pad_len) 1 n-len) text
  var_std__plus, 2, LOCAL(1), LOCAL(2), 1, LOCAL(3),
  // n-len)+(pad_len-1) .div. pad_len) 1 n-len) text
  var_div, 2, LOCAL(3), LOCAL(8), 1, LOCAL(4),
  // dup(pad (n-len)+(pad_len-1) .div. pad_len) 1 n-len) text
  var_dup, 2, var_153_0_pad, LOCAL(4), 1, LOCAL(5),
  // n-len) text
  var_std__minus, 2, var_152_0_n, var_156_1_len, 1, LOCAL(6),
  // range(dup(pad (n-len)+(pad_len-1) .div. pad_len) 1 n-len) text
  var_range, 3, LOCAL(5), num_1, LOCAL(6), 1, LOCAL(7),
  // string range(dup(pad (n-len)+(pad_len-1) .div. pad_len) 1 n-len) text
  var_string, 2, LOCAL(7), var_155_1_text, TAIL_CALL,
  POS(159, 7),
  POS(160, 29),
  POS(160, 37),
  POS(160, 29),
  POS(160, 29),
  POS(160, 20),
  POS(160, 65),
  POS(160, 14),
  POS(160, 7)
};

static TAB_NUM t_lambda_9[] = {
  0, // locals
  0, // parameters
  //  text
  LET, 1, var_155_1_text, TAIL_CALL,
  POS(161, 7)
};

static TAB_NUM t_func_std__pad_right[] = {
  2, // locals
  -3, // parameters
  MANDATORY_PARAMETER, LOCAL(2), // 175_0_expr
  MANDATORY_PARAMETER, var_176_0_n,
  string_2, var_177_0_pad,
  // $text expr.to_string
  var_to_string, 1, LOCAL(2), 1, var_179_1_text,
  // $len length_of(text)
  var_length_of, 1, var_179_1_text, 1, var_180_1_len,
  // len < n:
  var_std__less, 2, var_180_1_len, var_176_0_n, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_10, lambda_11, TAIL_CALL,
  POS(179, 3),
  POS(180, 3),
  POS(182, 5),
  POS(181, 3)
};

static TAB_NUM t_lambda_10[] = {
  8, // locals
  0, // parameters
  // $pad_len length_of(pad)
  var_length_of, 1, var_177_0_pad, 1, LOCAL(8),
  // n-len)+(pad_len-1) .div. pad_len) 1 n-len)
  var_std__minus, 2, var_176_0_n, var_180_1_len, 1, LOCAL(1),
  // pad_len-1) .div. pad_len) 1 n-len)
  var_std__minus, 2, LOCAL(8), num_1, 1, LOCAL(2),
  // n-len)+(pad_len-1) .div. pad_len) 1 n-len)
  var_std__plus, 2, LOCAL(1), LOCAL(2), 1, LOCAL(3),
  // n-len)+(pad_len-1) .div. pad_len) 1 n-len)
  var_div, 2, LOCAL(3), LOCAL(8), 1, LOCAL(4),
  // dup(pad (n-len)+(pad_len-1) .div. pad_len) 1 n-len)
  var_dup, 2, var_177_0_pad, LOCAL(4), 1, LOCAL(5),
  // n-len)
  var_std__minus, 2, var_176_0_n, var_180_1_len, 1, LOCAL(6),
  // range(dup(pad (n-len)+(pad_len-1) .div. pad_len) 1 n-len)
  var_range, 3, LOCAL(5), num_1, LOCAL(6), 1, LOCAL(7),
  // string text range(dup(pad (n-len)+(pad_len-1) .div. pad_len) 1 n-len)
  var_string, 2, var_179_1_text, LOCAL(7), TAIL_CALL,
  POS(183, 7),
  POS(184, 34),
  POS(184, 42),
  POS(184, 34),
  POS(184, 34),
  POS(184, 25),
  POS(184, 70),
  POS(184, 19),
  POS(184, 7)
};

static TAB_NUM t_lambda_11[] = {
  0, // locals
  0, // parameters
  //  text
  LET, 1, var_179_1_text, TAIL_CALL,
  POS(185, 7)
};

static TAB_NUM t_func_std__spaces[] = {
  2, // locals
  1, // parameters
  var_195_0_n,
  // 80
  var_std__less, 2, num_80, var_195_0_n, 1, LOCAL(1),
  // 80
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_12, lambda_13, TAIL_CALL,
  POS(198, 10),
  POS(198, 10),
  POS(197, 3)
};

static TAB_NUM t_lambda_12[] = {
  1, // locals
  0, // parameters
  // range(eighty_spaces 1 n)
  var_range, 3, string_3, num_1, var_195_0_n, 1, LOCAL(1),
  //  range(eighty_spaces 1 n)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(199, 8),
  POS(199, 7)
};

static TAB_NUM t_lambda_13[] = {
  1, // locals
  0, // parameters
  // dup(" " n)
  var_dup, 2, string_2, var_195_0_n, 1, LOCAL(1),
  //  dup(" " n)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(200, 8),
  POS(200, 7)
};

static TAB_NUM t_func_std__tabs_and_spaces[] = {
  1, // locals
  1, // parameters
  var_208_0_n,
  // n < 80
  var_std__less, 2, var_208_0_n, num_80, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_14, lambda_15, TAIL_CALL,
  POS(211, 5),
  POS(210, 3)
};

static TAB_NUM t_lambda_14[] = {
  5, // locals
  0, // parameters
  // n >> 3) 9+(n & 7))
  var_std__shift_right, 2, var_208_0_n, num_3, 1, LOCAL(1),
  // 10-(n >> 3) 9+(n & 7))
  var_std__minus, 2, num_10, LOCAL(1), 1, LOCAL(2),
  // n & 7))
  var_std__bit_and, 2, var_208_0_n, num_7, 1, LOCAL(3),
  // 9+(n & 7))
  var_std__plus, 2, num_9, LOCAL(3), 1, LOCAL(4),
  // range(nine_tabs_and_seven_spaces 10-(n >> 3) 9+(n & 7))
  var_range, 3, string_4, LOCAL(2), LOCAL(4), 1, LOCAL(5),
  //  range(nine_tabs_and_seven_spaces 10-(n >> 3) 9+(n & 7))
  LET, 1, LOCAL(5), TAIL_CALL,
  POS(212, 45),
  POS(212, 41),
  POS(212, 56),
  POS(212, 53),
  POS(212, 8),
  POS(212, 7)
};

static TAB_NUM t_lambda_15[] = {
  5, // locals
  0, // parameters
  // n >> 3) spaces(n & 7))
  var_std__shift_right, 2, var_208_0_n, num_3, 1, LOCAL(1),
  // dup("@ht;" n >> 3) spaces(n & 7))
  var_dup, 2, string_5, LOCAL(1), 1, LOCAL(2),
  // n & 7))
  var_std__bit_and, 2, var_208_0_n, num_7, 1, LOCAL(3),
  // spaces(n & 7))
  var_spaces, 1, LOCAL(3), 1, LOCAL(4),
  // string(dup("@ht;" n >> 3) spaces(n & 7))
  var_string, 2, LOCAL(2), LOCAL(4), 1, LOCAL(5),
  //  string(dup("@ht;" n >> 3) spaces(n & 7))
  LET, 1, LOCAL(5), TAIL_CALL,
  POS(213, 26),
  POS(213, 15),
  POS(213, 41),
  POS(213, 34),
  POS(213, 8),
  POS(213, 7)
};

static TAB_NUM t_func_std__with_tabs[] = {
  0, // locals
  1, // parameters
  var_221_0_text,
  // $s 1
  LET, 1, num_1, 1, var_223_1_s,
  // $n length_of(text)
  var_length_of, 1, var_221_0_text, 1, var_224_1_n,
  // $i 1
  LET, 1, num_1, 1, var_225_1_i,
  // $output ""
  LET, 1, string_1, 1, var_226_1_output,
  // $count 0
  LET, 1, num_0, 1, var_227_1_count,
  // loop:
  var_loop, 1, lambda_loop, TAIL_CALL,
  POS(223, 3),
  POS(224, 3),
  POS(225, 3),
  POS(226, 3),
  POS(227, 3),
  POS(228, 3)
};

static TAB_NUM t_lambda_loop[] = {
  2, // locals
  0, // parameters
  // n:
  var_std__less, 2, var_224_1_n, var_225_1_i, 1, LOCAL(1),
  // n:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_16, lambda_23, TAIL_CALL,
  POS(230, 12),
  POS(230, 12),
  POS(229, 5)
};

static TAB_NUM t_lambda_16[] = {
  2, // locals
  0, // parameters
  // text(i) == ' ':
  var_221_0_text, 1, var_225_1_i, 1, LOCAL(1),
  // text(i) == ' ':
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_17, lambda_18, TAIL_CALL,
  POS(232, 11),
  POS(232, 11),
  POS(231, 9)
};

static TAB_NUM t_lambda_17[] = {
  0, // locals
  0, // parameters
  // !i i+1
  var_std__plus, 2, var_225_1_i, num_1, 1, var_225_1_i,
  // !count count+1
  var_std__plus, 2, var_227_1_count, num_1, 1, var_227_1_count,
  // next
  var_next, 0, TAIL_CALL,
  POS(233, 13),
  POS(234, 13),
  POS(235, 13)
};

static TAB_NUM t_lambda_18[] = {
  2, // locals
  0, // parameters
  // count >= 8:
  var_std__less, 2, var_227_1_count, num_8, 1, LOCAL(1),
  // count >= 8:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_19, func_skip_line, TAIL_CALL,
  POS(238, 15),
  POS(238, 15),
  POS(237, 13)
};

static TAB_NUM t_lambda_19[] = {
  2, // locals
  0, // parameters
  // $tab_count count >> 3
  var_std__shift_right, 2, var_227_1_count, num_3, 1, var_239_1_tab_count,
  // tab_count >= 1:
  var_std__less, 2, var_239_1_tab_count, num_1, 1, LOCAL(1),
  // tab_count >= 1:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_20, func_skip_line, TAIL_CALL,
  POS(239, 17),
  POS(241, 19),
  POS(241, 19),
  POS(240, 17)
};

static TAB_NUM t_lambda_20[] = {
  3, // locals
  0, // parameters
  // count+1))
  var_std__plus, 2, var_227_1_count, num_1, 1, LOCAL(1),
  // i-(count+1))
  var_std__minus, 2, var_225_1_i, LOCAL(1), 1, LOCAL(2),
  // range(text s i-(count+1))
  var_range, 3, var_221_0_text, var_223_1_s, LOCAL(2), 1, LOCAL(3),
  // append &output range(text s i-(count+1))
  var_append, 2, var_226_1_output, LOCAL(3), 1, var_226_1_output,
  // tab_count < 10
  var_std__less, 2, var_239_1_tab_count, num_10, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_21, lambda_22, 1, LOCAL(2),
  // append &output
  var_append, 2, var_226_1_output, LOCAL(2), 1, var_226_1_output,
  // i-count)+(tab_count << 3)
  var_std__minus, 2, var_225_1_i, var_227_1_count, 1, LOCAL(1),
  // tab_count << 3)
  var_std__shift_left, 2, var_239_1_tab_count, num_3, 1, LOCAL(2),
  // !s (i-count)+(tab_count << 3)
  var_std__plus, 2, LOCAL(1), LOCAL(2), 1, var_223_1_s,
  // skip_line
  func_skip_line, 0, TAIL_CALL,
  POS(242, 52),
  POS(242, 49),
  POS(242, 36),
  POS(242, 21),
  POS(245, 25),
  POS(244, 23),
  POS(243, 21),
  POS(248, 25),
  POS(248, 35),
  POS(248, 21),
  POS(249, 21)
};

static TAB_NUM t_lambda_21[] = {
  1, // locals
  0, // parameters
  // range(tabs 1 tab_count)
  var_range, 3, string_6, num_1, var_239_1_tab_count, 1, LOCAL(1),
  //  range(tabs 1 tab_count)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(246, 28),
  POS(246, 27)
};

static TAB_NUM t_lambda_22[] = {
  1, // locals
  0, // parameters
  // dup("@ht;" tab_count)
  var_dup, 2, string_5, var_239_1_tab_count, 1, LOCAL(1),
  //  dup("@ht;" tab_count)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(247, 28),
  POS(247, 27)
};

static TAB_NUM t_lambda_23[] = {
  1, // locals
  0, // parameters
  // s == 1
  var_std__equal, 2, var_223_1_s, num_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_24, lambda_25, TAIL_CALL,
  POS(254, 11),
  POS(253, 9)
};

static TAB_NUM t_lambda_24[] = {
  0, // locals
  0, // parameters
  //  text
  LET, 1, var_221_0_text, TAIL_CALL,
  POS(255, 13)
};

static TAB_NUM t_lambda_25[] = {
  2, // locals
  0, // parameters
  // range(text s -1))
  var_range, 3, var_221_0_text, var_223_1_s, minus_num_1, 1, LOCAL(1),
  // append(output range(text s -1))
  var_append, 2, var_226_1_output, LOCAL(1), 1, LOCAL(2),
  //  append(output range(text s -1))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(256, 28),
  POS(256, 14),
  POS(256, 13)
};

static TAB_NUM t_func_skip_line[] = {
  0, // locals
  0, // parameters
  // loop
  var_loop, 2, lambda_26, lambda_29, TAIL_CALL,
  POS(259, 5)
};

static TAB_NUM t_lambda_26[] = {
  3, // locals
  0, // parameters
  // n && text(i) != '@nl;':
  var_std__less, 2, var_224_1_n, var_225_1_i, 1, LOCAL(1),
  // n && text(i) != '@nl;':
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // n && text(i) != '@nl;':
  var_std__and, 2, LOCAL(2), lambda_27, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_28, var_break, TAIL_CALL,
  POS(262, 16),
  POS(262, 16),
  POS(262, 16),
  POS(261, 9)
};

static TAB_NUM t_lambda_27[] = {
  3, // locals
  0, // parameters
  // text(i) != '@nl;':
  var_221_0_text, 1, var_225_1_i, 1, LOCAL(1),
  // text(i) != '@nl;':
  var_std__equal, 2, LOCAL(1), chr_10, 1, LOCAL(2),
  // text(i) != '@nl;':
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // text(i) != '@nl;':
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(262, 21),
  POS(262, 21),
  POS(262, 21),
  POS(262, 21)
};

static TAB_NUM t_lambda_28[] = {
  0, // locals
  0, // parameters
  // !i i+1
  var_std__plus, 2, var_225_1_i, num_1, 1, var_225_1_i,
  // next
  var_next, 0, TAIL_CALL,
  POS(263, 13),
  POS(264, 13)
};

static TAB_NUM t_lambda_29[] = {
  0, // locals
  0, // parameters
  // !i i+1
  var_std__plus, 2, var_225_1_i, num_1, 1, var_225_1_i,
  // !count 0
  LET, 1, num_0, 1, var_227_1_count,
  // next
  var_next, 0, TAIL_CALL,
  POS(267, 9),
  POS(268, 9),
  POS(269, 9)
};

static TAB_NUM t_func_std_types__string___match[] = {
  3, // locals
  2, // parameters
  var_276_0_self,
  var_277_0_stream,
  // $len length_of(self)
  var_length_of, 1, var_276_0_self, 1, var_279_1_len,
  // length_of(stream) >= len
  var_length_of, 1, var_277_0_stream, 1, LOCAL(1),
  // length_of(stream) >= len
  var_std__less, 2, LOCAL(1), var_279_1_len, 1, LOCAL(2),
  // length_of(stream) >= len
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_30, lambda_33, TAIL_CALL,
  POS(279, 3),
  POS(281, 5),
  POS(281, 5),
  POS(281, 5),
  POS(280, 3)
};

static TAB_NUM t_lambda_30[] = {
  2, // locals
  0, // parameters
  // range(stream 1 len) == self
  var_range, 3, var_277_0_stream, num_1, var_279_1_len, 1, LOCAL(1),
  // range(stream 1 len) == self
  var_std__equal, 2, LOCAL(1), var_276_0_self, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_31, lambda_32, TAIL_CALL,
  POS(284, 9),
  POS(284, 9),
  POS(283, 7)
};

static TAB_NUM t_lambda_31[] = {
  0, // locals
  0, // parameters
  //  len
  LET, 1, var_279_1_len, TAIL_CALL,
  POS(285, 11)
};

static TAB_NUM t_lambda_32[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(286, 11)
};

static TAB_NUM t_lambda_33[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(287, 7)
};

static TAB_NUM t_func_std_types__string___search[] = {
  1, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_293_0_self,
  MANDATORY_PARAMETER, var_294_0_stream,
  num_1, var_295_0_nth,
  // $i undefined
  LET, 1, var_undefined, 1, var_297_1_i,
  // $length length_of(self)
  var_length_of, 1, var_293_0_self, 1, var_298_1_length,
  // $offset length-1
  var_std__minus, 2, var_298_1_length, num_1, 1, var_299_1_offset,
  // length_of(stream)-offset
  var_length_of, 1, var_294_0_stream, 1, LOCAL(1),
  // $n length_of(stream)-offset
  var_std__minus, 2, LOCAL(1), var_299_1_offset, 1, var_300_1_n,
  // nth < 0:
  var_std__less, 2, var_295_0_nth, num_0, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_34, lambda_35, TAIL_CALL,
  POS(297, 3),
  POS(298, 3),
  POS(299, 3),
  POS(300, 6),
  POS(300, 3),
  POS(302, 5),
  POS(301, 3)
};

static TAB_NUM t_lambda_34[] = {
  0, // locals
  0, // parameters
  // !i n
  LET, 1, var_300_1_n, 1, var_297_1_i,
  // search_backwards
  func_search_backwards, 0, TAIL_CALL,
  POS(303, 7),
  POS(304, 7)
};

static TAB_NUM t_lambda_35[] = {
  0, // locals
  0, // parameters
  // !i 1
  LET, 1, num_1, 1, var_297_1_i,
  // search_forwards
  func_search_forwards, 0, TAIL_CALL,
  POS(306, 7),
  POS(307, 7)
};

static TAB_NUM t_func_search_forwards[] = {
  2, // locals
  0, // parameters
  // n
  var_std__less, 2, var_300_1_n, var_297_1_i, 1, LOCAL(1),
  // n
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_36, lambda_41, TAIL_CALL,
  POS(311, 12),
  POS(311, 12),
  POS(310, 5)
};

static TAB_NUM t_lambda_36[] = {
  3, // locals
  0, // parameters
  // i+offset) == self:
  var_std__plus, 2, var_297_1_i, var_299_1_offset, 1, LOCAL(1),
  // range(stream i i+offset) == self:
  var_range, 3, var_294_0_stream, var_297_1_i, LOCAL(1), 1, LOCAL(2),
  // range(stream i i+offset) == self:
  var_std__equal, 2, LOCAL(2), var_293_0_self, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_37, lambda_40, TAIL_CALL,
  POS(314, 26),
  POS(314, 11),
  POS(314, 11),
  POS(313, 9)
};

static TAB_NUM t_lambda_37[] = {
  1, // locals
  0, // parameters
  // 1:
  var_std__less, 2, num_1, var_295_0_nth, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_38, lambda_39, TAIL_CALL,
  POS(316, 21),
  POS(315, 13)
};

static TAB_NUM t_lambda_38[] = {
  0, // locals
  0, // parameters
  // dec &nth
  var_dec, 1, var_295_0_nth, 1, var_295_0_nth,
  // plus &i length
  var_plus, 2, var_297_1_i, var_298_1_length, 1, var_297_1_i,
  // search_forwards
  func_search_forwards, 0, TAIL_CALL,
  POS(317, 17),
  POS(318, 17),
  POS(319, 17)
};

static TAB_NUM t_lambda_39[] = {
  0, // locals
  0, // parameters
  //  i length
  LET, 2, var_297_1_i, var_298_1_length, TAIL_CALL,
  POS(320, 17)
};

static TAB_NUM t_lambda_40[] = {
  0, // locals
  0, // parameters
  // inc &i
  var_inc, 1, var_297_1_i, 1, var_297_1_i,
  // search_forwards
  func_search_forwards, 0, TAIL_CALL,
  POS(322, 13),
  POS(323, 13)
};

static TAB_NUM t_lambda_41[] = {
  0, // locals
  0, // parameters
  //  undefined undefined
  LET, 2, var_undefined, var_undefined, TAIL_CALL,
  POS(324, 9)
};

static TAB_NUM t_func_search_backwards[] = {
  2, // locals
  0, // parameters
  // i >= 1
  var_std__less, 2, var_297_1_i, num_1, 1, LOCAL(1),
  // i >= 1
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_42, lambda_47, TAIL_CALL,
  POS(328, 7),
  POS(328, 7),
  POS(327, 5)
};

static TAB_NUM t_lambda_42[] = {
  3, // locals
  0, // parameters
  // i+offset) == self:
  var_std__plus, 2, var_297_1_i, var_299_1_offset, 1, LOCAL(1),
  // range(stream i i+offset) == self:
  var_range, 3, var_294_0_stream, var_297_1_i, LOCAL(1), 1, LOCAL(2),
  // range(stream i i+offset) == self:
  var_std__equal, 2, LOCAL(2), var_293_0_self, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_43, lambda_46, TAIL_CALL,
  POS(331, 26),
  POS(331, 11),
  POS(331, 11),
  POS(330, 9)
};

static TAB_NUM t_lambda_43[] = {
  1, // locals
  0, // parameters
  // nth < -1:
  var_std__less, 2, var_295_0_nth, minus_num_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_44, lambda_45, TAIL_CALL,
  POS(333, 15),
  POS(332, 13)
};

static TAB_NUM t_lambda_44[] = {
  0, // locals
  0, // parameters
  // inc &nth
  var_inc, 1, var_295_0_nth, 1, var_295_0_nth,
  // minus &i length
  var_minus, 2, var_297_1_i, var_298_1_length, 1, var_297_1_i,
  // search_backwards
  func_search_backwards, 0, TAIL_CALL,
  POS(334, 17),
  POS(335, 17),
  POS(336, 17)
};

static TAB_NUM t_lambda_45[] = {
  0, // locals
  0, // parameters
  //  i length
  LET, 2, var_297_1_i, var_298_1_length, TAIL_CALL,
  POS(337, 17)
};

static TAB_NUM t_lambda_46[] = {
  0, // locals
  0, // parameters
  // dec &i
  var_dec, 1, var_297_1_i, 1, var_297_1_i,
  // search_backwards
  func_search_backwards, 0, TAIL_CALL,
  POS(339, 13),
  POS(340, 13)
};

static TAB_NUM t_lambda_47[] = {
  0, // locals
  0, // parameters
  //  undefined undefined
  LET, 2, var_undefined, var_undefined, TAIL_CALL,
  POS(341, 9)
};

static TAB_NUM t_func_std_types__string___before[] = {
  3, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_371_0_str,
  MANDATORY_PARAMETER, LOCAL(2), // 372_0_expr
  num_1, LOCAL(3), // 373_0_nth
  // search $pos $_len expr str nth
  var_search, 3, LOCAL(2), var_371_0_str, LOCAL(3), 2, var_375_8_pos, LOCAL(1),
  // is_defined
  var_is_defined, 1, var_375_8_pos, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_48, lambda_49, TAIL_CALL,
  POS(375, 3),
  POS(377, 9),
  POS(376, 3)
};

static TAB_NUM t_lambda_48[] = {
  2, // locals
  0, // parameters
  // pos-1)
  var_std__minus, 2, var_375_8_pos, num_1, 1, LOCAL(1),
  // range(str 1 pos-1)
  var_range, 3, var_371_0_str, num_1, LOCAL(1), 1, LOCAL(2),
  //  range(str 1 pos-1)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(378, 20),
  POS(378, 8),
  POS(378, 7)
};

static TAB_NUM t_lambda_49[] = {
  0, // locals
  0, // parameters
  //  ""
  LET, 1, string_1, TAIL_CALL,
  POS(379, 7)
};

static TAB_NUM t_func_std_types__string___truncate_from[] = {
  3, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_401_0_str,
  MANDATORY_PARAMETER, LOCAL(2), // 402_0_expr
  num_1, LOCAL(3), // 403_0_nth
  // search $pos $_len expr str nth
  var_search, 3, LOCAL(2), var_401_0_str, LOCAL(3), 2, var_405_8_pos, LOCAL(1),
  // is_defined
  var_is_defined, 1, var_405_8_pos, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_50, lambda_51, TAIL_CALL,
  POS(405, 3),
  POS(407, 9),
  POS(406, 3)
};

static TAB_NUM t_lambda_50[] = {
  2, // locals
  0, // parameters
  // pos-1)
  var_std__minus, 2, var_405_8_pos, num_1, 1, LOCAL(1),
  // range(str 1 pos-1)
  var_range, 3, var_401_0_str, num_1, LOCAL(1), 1, LOCAL(2),
  //  range(str 1 pos-1)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(408, 20),
  POS(408, 8),
  POS(408, 7)
};

static TAB_NUM t_lambda_51[] = {
  0, // locals
  0, // parameters
  //  str
  LET, 1, var_401_0_str, TAIL_CALL,
  POS(409, 7)
};

static TAB_NUM t_func_std_types__string___behind[] = {
  3, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_437_0_str,
  MANDATORY_PARAMETER, LOCAL(2), // 438_0_expr
  num_1, LOCAL(3), // 439_0_nth
  // search $pos $len expr str nth
  var_search, 3, LOCAL(2), var_437_0_str, LOCAL(3), 2, var_441_8_pos, var_441_13_len,
  // is_defined
  var_is_defined, 1, var_441_8_pos, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_52, lambda_53, TAIL_CALL,
  POS(441, 3),
  POS(443, 9),
  POS(442, 3)
};

static TAB_NUM t_lambda_52[] = {
  2, // locals
  0, // parameters
  // pos+len -1)
  var_std__plus, 2, var_441_8_pos, var_441_13_len, 1, LOCAL(1),
  // range(str pos+len -1)
  var_range, 3, var_437_0_str, LOCAL(1), minus_num_1, 1, LOCAL(2),
  //  range(str pos+len -1)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(444, 18),
  POS(444, 8),
  POS(444, 7)
};

static TAB_NUM t_lambda_53[] = {
  0, // locals
  0, // parameters
  //  ""
  LET, 1, string_1, TAIL_CALL,
  POS(445, 7)
};

static TAB_NUM t_func_std_types__string___truncate_until[] = {
  3, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_466_0_str,
  MANDATORY_PARAMETER, LOCAL(2), // 467_0_expr
  num_1, LOCAL(3), // 468_0_nth
  // search $pos $len expr str nth
  var_search, 3, LOCAL(2), var_466_0_str, LOCAL(3), 2, var_470_8_pos, var_470_13_len,
  // is_defined
  var_is_defined, 1, var_470_8_pos, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_54, lambda_55, TAIL_CALL,
  POS(470, 3),
  POS(472, 9),
  POS(471, 3)
};

static TAB_NUM t_lambda_54[] = {
  2, // locals
  0, // parameters
  // pos+len -1)
  var_std__plus, 2, var_470_8_pos, var_470_13_len, 1, LOCAL(1),
  // range(str pos+len -1)
  var_range, 3, var_466_0_str, LOCAL(1), minus_num_1, 1, LOCAL(2),
  //  range(str pos+len -1)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(473, 18),
  POS(473, 8),
  POS(473, 7)
};

static TAB_NUM t_lambda_55[] = {
  0, // locals
  0, // parameters
  //  str
  LET, 1, var_466_0_str, TAIL_CALL,
  POS(474, 7)
};

static TAB_NUM t_func_std_types__string___from[] = {
  3, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_498_0_str,
  MANDATORY_PARAMETER, LOCAL(2), // 499_0_expr
  num_1, LOCAL(3), // 500_0_nth
  // search $pos $_len expr str nth
  var_search, 3, LOCAL(2), var_498_0_str, LOCAL(3), 2, var_502_8_pos, LOCAL(1),
  // is_defined
  var_is_defined, 1, var_502_8_pos, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_56, lambda_57, TAIL_CALL,
  POS(502, 3),
  POS(504, 9),
  POS(503, 3)
};

static TAB_NUM t_lambda_56[] = {
  1, // locals
  0, // parameters
  // range(str pos -1)
  var_range, 3, var_498_0_str, var_502_8_pos, minus_num_1, 1, LOCAL(1),
  //  range(str pos -1)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(505, 8),
  POS(505, 7)
};

static TAB_NUM t_lambda_57[] = {
  0, // locals
  0, // parameters
  //  ""
  LET, 1, string_1, TAIL_CALL,
  POS(506, 7)
};

static TAB_NUM t_func_std_types__string___truncate_before[] = {
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
  var_if, 3, LOCAL(1), lambda_58, lambda_59, TAIL_CALL,
  POS(522, 3),
  POS(524, 9),
  POS(523, 3)
};

static TAB_NUM t_lambda_58[] = {
  1, // locals
  0, // parameters
  // range(str pos -1)
  var_range, 3, var_518_0_str, var_522_8_pos, minus_num_1, 1, LOCAL(1),
  //  range(str pos -1)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(525, 8),
  POS(525, 7)
};

static TAB_NUM t_lambda_59[] = {
  0, // locals
  0, // parameters
  //  str
  LET, 1, var_518_0_str, TAIL_CALL,
  POS(526, 7)
};

static TAB_NUM t_func_std_types__string___until[] = {
  3, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_547_0_str,
  MANDATORY_PARAMETER, LOCAL(2), // 548_0_expr
  num_1, LOCAL(3), // 549_0_nth
  // search $pos $len expr str nth
  var_search, 3, LOCAL(2), var_547_0_str, LOCAL(3), 2, var_551_8_pos, var_551_13_len,
  // is_defined
  var_is_defined, 1, var_551_8_pos, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_60, lambda_61, TAIL_CALL,
  POS(551, 3),
  POS(553, 9),
  POS(552, 3)
};

static TAB_NUM t_lambda_60[] = {
  3, // locals
  0, // parameters
  // pos+len-1)
  var_std__plus, 2, var_551_8_pos, var_551_13_len, 1, LOCAL(1),
  // pos+len-1)
  var_std__minus, 2, LOCAL(1), num_1, 1, LOCAL(2),
  // range(str 1 pos+len-1)
  var_range, 3, var_547_0_str, num_1, LOCAL(2), 1, LOCAL(3),
  //  range(str 1 pos+len-1)
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(554, 20),
  POS(554, 20),
  POS(554, 8),
  POS(554, 7)
};

static TAB_NUM t_lambda_61[] = {
  0, // locals
  0, // parameters
  //  ""
  LET, 1, string_1, TAIL_CALL,
  POS(555, 7)
};

static TAB_NUM t_func_std_types__string___truncate_behind[] = {
  3, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_567_0_str,
  MANDATORY_PARAMETER, LOCAL(2), // 568_0_expr
  num_1, LOCAL(3), // 569_0_nth
  // search $pos $len expr str nth
  var_search, 3, LOCAL(2), var_567_0_str, LOCAL(3), 2, var_571_8_pos, var_571_13_len,
  // is_defined
  var_is_defined, 1, var_571_8_pos, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_62, lambda_63, TAIL_CALL,
  POS(571, 3),
  POS(573, 9),
  POS(572, 3)
};

static TAB_NUM t_lambda_62[] = {
  3, // locals
  0, // parameters
  // pos+len-1)
  var_std__plus, 2, var_571_8_pos, var_571_13_len, 1, LOCAL(1),
  // pos+len-1)
  var_std__minus, 2, LOCAL(1), num_1, 1, LOCAL(2),
  // range(str 1 pos+len-1)
  var_range, 3, var_567_0_str, num_1, LOCAL(2), 1, LOCAL(3),
  //  range(str 1 pos+len-1)
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(574, 20),
  POS(574, 20),
  POS(574, 8),
  POS(574, 7)
};

static TAB_NUM t_lambda_63[] = {
  0, // locals
  0, // parameters
  //  str
  LET, 1, var_567_0_str, TAIL_CALL,
  POS(575, 7)
};

static TAB_NUM t_func_std_types__string___between[] = {
  6, // locals
  -4, // parameters
  MANDATORY_PARAMETER, LOCAL(3), // 589_0_str
  MANDATORY_PARAMETER, LOCAL(4), // 590_0_expr_1
  MANDATORY_PARAMETER, LOCAL(5), // 591_0_expr_2
  num_1, LOCAL(6), // 592_0_nth
  // behind(str expr_1 nth) .before. expr_2
  var_behind, 3, LOCAL(3), LOCAL(4), LOCAL(6), 1, LOCAL(1),
  // behind(str expr_1 nth) .before. expr_2
  var_before, 2, LOCAL(1), LOCAL(5), 1, LOCAL(2),
  // -> behind(str expr_1 nth) .before. expr_2
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(594, 6),
  POS(594, 6),
  POS(594, 3)
};

static TAB_NUM t_func_std_types__string___has_prefix[] = {
  4, // locals
  2, // parameters
  LOCAL(3), // 602_0_self
  LOCAL(4), // 603_0_prefix
  // match(prefix self).is_defined
  var_match, 2, LOCAL(4), LOCAL(3), 1, LOCAL(1),
  // is_defined
  var_is_defined, 1, LOCAL(1), 1, LOCAL(2),
  // -> match(prefix self).is_defined
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(605, 6),
  POS(605, 25),
  POS(605, 3)
};

static TAB_NUM t_func_std_types__string___has_suffix[] = {
  1, // locals
  2, // parameters
  var_613_0_self,
  var_614_0_suffix,
  // is_a_character
  var_is_a_character, 1, var_614_0_suffix, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_64, lambda_66, TAIL_CALL,
  POS(617, 12),
  POS(616, 3)
};

static TAB_NUM t_lambda_64[] = {
  4, // locals
  0, // parameters
  // length_of(self) >= 1 && self(-1) == suffix
  var_length_of, 1, var_613_0_self, 1, LOCAL(1),
  // length_of(self) >= 1 && self(-1) == suffix
  var_std__less, 2, LOCAL(1), num_1, 1, LOCAL(2),
  // length_of(self) >= 1 && self(-1) == suffix
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // length_of(self) >= 1 && self(-1) == suffix
  var_std__and, 2, LOCAL(3), lambda_65, 1, LOCAL(4),
  //  length_of(self) >= 1 && self(-1) == suffix
  LET, 1, LOCAL(4), TAIL_CALL,
  POS(618, 8),
  POS(618, 8),
  POS(618, 8),
  POS(618, 8),
  POS(618, 7)
};

static TAB_NUM t_lambda_65[] = {
  2, // locals
  0, // parameters
  // self(-1) == suffix
  var_613_0_self, 1, minus_num_1, 1, LOCAL(1),
  // self(-1) == suffix
  var_std__equal, 2, LOCAL(1), var_614_0_suffix, 1, LOCAL(2),
  // self(-1) == suffix
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(618, 32),
  POS(618, 32),
  POS(618, 32)
};

static TAB_NUM t_lambda_66[] = {
  4, // locals
  0, // parameters
  // $len length_of(suffix)
  var_length_of, 1, var_614_0_suffix, 1, var_620_1_len,
  // length_of(self) >= len && range(self -len -1) == suffix
  var_length_of, 1, var_613_0_self, 1, LOCAL(1),
  // length_of(self) >= len && range(self -len -1) == suffix
  var_std__less, 2, LOCAL(1), var_620_1_len, 1, LOCAL(2),
  // length_of(self) >= len && range(self -len -1) == suffix
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // length_of(self) >= len && range(self -len -1) == suffix
  var_std__and, 2, LOCAL(3), lambda_67, 1, LOCAL(4),
  // -> length_of(self) >= len && range(self -len -1) == suffix
  LET, 1, LOCAL(4), TAIL_CALL,
  POS(620, 7),
  POS(621, 10),
  POS(621, 10),
  POS(621, 10),
  POS(621, 10),
  POS(621, 7)
};

static TAB_NUM t_lambda_67[] = {
  3, // locals
  0, // parameters
  // len -1) == suffix
  var_std__negate, 1, var_620_1_len, 1, LOCAL(1),
  // range(self -len -1) == suffix
  var_range, 3, var_613_0_self, LOCAL(1), minus_num_1, 1, LOCAL(2),
  // range(self -len -1) == suffix
  var_std__equal, 2, LOCAL(2), var_614_0_suffix, 1, LOCAL(3),
  // range(self -len -1) == suffix
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(621, 48),
  POS(621, 36),
  POS(621, 36),
  POS(621, 36)
};

static TAB_NUM t_func_std_types__string___without_prefix[] = {
  2, // locals
  2, // parameters
  var_629_0_self,
  LOCAL(2), // 630_0_prefix
  // $n match(prefix self)
  var_match, 2, LOCAL(2), var_629_0_self, 1, var_632_1_n,
  // is_defined
  var_is_defined, 1, var_632_1_n, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_68, lambda_69, TAIL_CALL,
  POS(632, 3),
  POS(634, 7),
  POS(633, 3)
};

static TAB_NUM t_lambda_68[] = {
  2, // locals
  0, // parameters
  // n+1 -1)
  var_std__plus, 2, var_632_1_n, num_1, 1, LOCAL(1),
  // range(self n+1 -1)
  var_range, 3, var_629_0_self, LOCAL(1), minus_num_1, 1, LOCAL(2),
  //  range(self n+1 -1)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(635, 19),
  POS(635, 8),
  POS(635, 7)
};

static TAB_NUM t_lambda_69[] = {
  0, // locals
  0, // parameters
  //  self
  LET, 1, var_629_0_self, TAIL_CALL,
  POS(636, 7)
};

static TAB_NUM t_func_std_types__string___without_suffix[] = {
  1, // locals
  2, // parameters
  var_644_0_self,
  var_645_0_suffix,
  // $len length_of(self)
  var_length_of, 1, var_644_0_self, 1, var_647_1_len,
  // is_a_character:
  var_is_a_character, 1, var_645_0_suffix, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_suffix_is_a_character, lambda_73, TAIL_CALL,
  POS(647, 3),
  POS(649, 12),
  POS(648, 3)
};

static TAB_NUM t_lambda_suffix_is_a_character[] = {
  3, // locals
  0, // parameters
  // len >= 1 && self(-1) == suffix
  var_std__less, 2, var_647_1_len, num_1, 1, LOCAL(1),
  // len >= 1 && self(-1) == suffix
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // len >= 1 && self(-1) == suffix
  var_std__and, 2, LOCAL(2), lambda_70, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_71, lambda_72, TAIL_CALL,
  POS(651, 9),
  POS(651, 9),
  POS(651, 9),
  POS(650, 7)
};

static TAB_NUM t_lambda_70[] = {
  2, // locals
  0, // parameters
  // self(-1) == suffix
  var_644_0_self, 1, minus_num_1, 1, LOCAL(1),
  // self(-1) == suffix
  var_std__equal, 2, LOCAL(1), var_645_0_suffix, 1, LOCAL(2),
  // self(-1) == suffix
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(651, 21),
  POS(651, 21),
  POS(651, 21)
};

static TAB_NUM t_lambda_71[] = {
  1, // locals
  0, // parameters
  // range(self 1 -2)
  var_range, 3, var_644_0_self, num_1, minus_num_2, 1, LOCAL(1),
  //  range(self 1 -2)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(652, 12),
  POS(652, 11)
};

static TAB_NUM t_lambda_72[] = {
  0, // locals
  0, // parameters
  //  self
  LET, 1, var_644_0_self, TAIL_CALL,
  POS(653, 11)
};

static TAB_NUM t_lambda_73[] = {
  3, // locals
  0, // parameters
  // $slen length_of(suffix)
  var_length_of, 1, var_645_0_suffix, 1, var_655_1_slen,
  // len >= slen && range(self -slen -1) == suffix
  var_std__less, 2, var_647_1_len, var_655_1_slen, 1, LOCAL(1),
  // len >= slen && range(self -slen -1) == suffix
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // len >= slen && range(self -slen -1) == suffix
  var_std__and, 2, LOCAL(2), lambda_74, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_75, lambda_76, TAIL_CALL,
  POS(655, 7),
  POS(657, 9),
  POS(657, 9),
  POS(657, 9),
  POS(656, 7)
};

static TAB_NUM t_lambda_74[] = {
  3, // locals
  0, // parameters
  // slen -1) == suffix
  var_std__negate, 1, var_655_1_slen, 1, LOCAL(1),
  // range(self -slen -1) == suffix
  var_range, 3, var_644_0_self, LOCAL(1), minus_num_1, 1, LOCAL(2),
  // range(self -slen -1) == suffix
  var_std__equal, 2, LOCAL(2), var_645_0_suffix, 1, LOCAL(3),
  // range(self -slen -1) == suffix
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(657, 36),
  POS(657, 24),
  POS(657, 24),
  POS(657, 24)
};

static TAB_NUM t_lambda_75[] = {
  3, // locals
  0, // parameters
  // slen-1)
  var_std__negate, 1, var_655_1_slen, 1, LOCAL(1),
  // slen-1)
  var_std__minus, 2, LOCAL(1), num_1, 1, LOCAL(2),
  // range(self 1 -slen-1)
  var_range, 3, var_644_0_self, num_1, LOCAL(2), 1, LOCAL(3),
  //  range(self 1 -slen-1)
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(658, 26),
  POS(658, 26),
  POS(658, 12),
  POS(658, 11)
};

static TAB_NUM t_lambda_76[] = {
  0, // locals
  0, // parameters
  //  self
  LET, 1, var_644_0_self, TAIL_CALL,
  POS(659, 11)
};

static TAB_NUM t_func_std_types__string___contains[] = {
  4, // locals
  2, // parameters
  LOCAL(2), // 665_0_self
  LOCAL(3), // 666_0_expr
  // search $pos $_len expr self
  var_search, 2, LOCAL(3), LOCAL(2), 2, LOCAL(4), LOCAL(1),
  // is_defined
  var_is_defined, 1, LOCAL(4), 1, LOCAL(1),
  // -> pos.is_defined
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(668, 3),
  POS(669, 10),
  POS(669, 3)
};

static TAB_NUM t_func_std__split[] = {
  1, // locals
  -2, // parameters
  MANDATORY_PARAMETER, var_679_0_self,
  chr_32, var_680_0_separator,
  // is_empty
  var_is_empty, 1, var_679_0_self, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_77, lambda_78, TAIL_CALL,
  POS(683, 10),
  POS(682, 3)
};

static TAB_NUM t_lambda_77[] = {
  0, // locals
  0, // parameters
  //  empty_list
  LET, 1, var_empty_list, TAIL_CALL,
  POS(684, 7)
};

static TAB_NUM t_lambda_78[] = {
  0, // locals
  0, // parameters
  // $items empty_list
  LET, 1, var_empty_list, 1, var_686_1_items,
  // loop:
  var_loop, 1, lambda_2_loop, TAIL_CALL,
  POS(686, 7),
  POS(687, 7)
};

static TAB_NUM t_lambda_2_loop[] = {
  1, // locals
  0, // parameters
  // search $pos $len separator self
  var_search, 2, var_680_0_separator, var_679_0_self, 2, var_688_8_pos, var_688_13_len,
  // is_defined:
  var_is_defined, 1, var_688_8_pos, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_pos_is_defined, lambda_79, TAIL_CALL,
  POS(688, 9),
  POS(690, 15),
  POS(689, 9)
};

static TAB_NUM t_lambda_pos_is_defined[] = {
  2, // locals
  0, // parameters
  // pos-1)
  var_std__minus, 2, var_688_8_pos, num_1, 1, LOCAL(1),
  // range(self 1 pos-1)
  var_range, 3, var_679_0_self, num_1, LOCAL(1), 1, LOCAL(2),
  // push &items range(self 1 pos-1)
  var_push, 2, var_686_1_items, LOCAL(2), 1, var_686_1_items,
  // pos+len -1
  var_std__plus, 2, var_688_8_pos, var_688_13_len, 1, LOCAL(1),
  // range &self pos+len -1
  var_range, 3, var_679_0_self, LOCAL(1), minus_num_1, 1, var_679_0_self,
  // next
  var_next, 0, TAIL_CALL,
  POS(691, 38),
  POS(691, 25),
  POS(691, 13),
  POS(692, 25),
  POS(692, 13),
  POS(693, 13)
};

static TAB_NUM t_lambda_79[] = {
  1, // locals
  0, // parameters
  // is_empty
  var_is_empty, 1, var_679_0_self, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_80, lambda_81, TAIL_CALL,
  POS(696, 20),
  POS(695, 13)
};

static TAB_NUM t_lambda_80[] = {
  0, // locals
  0, // parameters
  //  items
  LET, 1, var_686_1_items, TAIL_CALL,
  POS(697, 17)
};

static TAB_NUM t_lambda_81[] = {
  1, // locals
  0, // parameters
  // push(items self)
  var_push, 2, var_686_1_items, var_679_0_self, 1, LOCAL(1),
  //  push(items self)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(698, 18),
  POS(698, 17)
};

static TAB_NUM t_func_std__join[] = {
  1, // locals
  -2, // parameters
  MANDATORY_PARAMETER, LOCAL(1), // 706_0_items
  string_2, var_707_0_separator,
  // to_string &separator
  var_to_string, 1, var_707_0_separator, 1, var_707_0_separator,
  // map_reduce
  var_map_reduce, 4, LOCAL(1), var_to_string, lambda_82, string_1, TAIL_CALL,
  POS(709, 3),
  POS(710, 3)
};

static TAB_NUM t_lambda_82[] = {
  2, // locals
  2, // parameters
  LOCAL(1), // 712_3_left
  LOCAL(2), // 712_8_right
  // append left separator right
  var_append, 3, LOCAL(1), var_707_0_separator, LOCAL(2), TAIL_CALL,
  POS(712, 20)
};

static TAB_NUM t_func_std__trim[] = {
  0, // locals
  -2, // parameters
  MANDATORY_PARAMETER, var_719_0_self,
  var_is_a_whitespace_character, var_720_0_test,
  // $s 1
  LET, 1, num_1, 1, var_722_1_s,
  // $e length_of(self)
  var_length_of, 1, var_719_0_self, 1, var_723_1_e,
  // loop:
  var_loop, 1, lambda_3_loop, TAIL_CALL,
  POS(722, 3),
  POS(723, 3),
  POS(724, 3)
};

static TAB_NUM t_lambda_3_loop[] = {
  3, // locals
  0, // parameters
  // e && test(self(s)):
  var_std__less, 2, var_723_1_e, var_722_1_s, 1, LOCAL(1),
  // e && test(self(s)):
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // e && test(self(s)):
  var_std__and, 2, LOCAL(2), lambda_83, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_84, lambda_85, TAIL_CALL,
  POS(726, 12),
  POS(726, 12),
  POS(726, 12),
  POS(725, 5)
};

static TAB_NUM t_lambda_83[] = {
  2, // locals
  0, // parameters
  // self(s)):
  var_719_0_self, 1, var_722_1_s, 1, LOCAL(1),
  // test(self(s)):
  var_720_0_test, 1, LOCAL(1), 1, LOCAL(2),
  // test(self(s)):
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(726, 22),
  POS(726, 17),
  POS(726, 17)
};

static TAB_NUM t_lambda_84[] = {
  0, // locals
  0, // parameters
  // inc &s
  var_inc, 1, var_722_1_s, 1, var_722_1_s,
  // next
  var_next, 0, TAIL_CALL,
  POS(727, 9),
  POS(728, 9)
};

static TAB_NUM t_lambda_85[] = {
  0, // locals
  0, // parameters
  // loop:
  var_loop, 1, lambda_4_loop, TAIL_CALL,
  POS(730, 9)
};

static TAB_NUM t_lambda_4_loop[] = {
  3, // locals
  0, // parameters
  // e >= s && test(self(e)):
  var_std__less, 2, var_723_1_e, var_722_1_s, 1, LOCAL(1),
  // e >= s && test(self(e)):
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // e >= s && test(self(e)):
  var_std__and, 2, LOCAL(2), lambda_86, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_87, lambda_88, TAIL_CALL,
  POS(732, 13),
  POS(732, 13),
  POS(732, 13),
  POS(731, 11)
};

static TAB_NUM t_lambda_86[] = {
  2, // locals
  0, // parameters
  // self(e)):
  var_719_0_self, 1, var_723_1_e, 1, LOCAL(1),
  // test(self(e)):
  var_720_0_test, 1, LOCAL(1), 1, LOCAL(2),
  // test(self(e)):
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(732, 28),
  POS(732, 23),
  POS(732, 23)
};

static TAB_NUM t_lambda_87[] = {
  0, // locals
  0, // parameters
  // dec &e
  var_dec, 1, var_723_1_e, 1, var_723_1_e,
  // next
  var_next, 0, TAIL_CALL,
  POS(733, 15),
  POS(734, 15)
};

static TAB_NUM t_lambda_88[] = {
  0, // locals
  0, // parameters
  // range self s e
  var_range, 3, var_719_0_self, var_722_1_s, var_723_1_e, TAIL_CALL,
  POS(736, 15)
};

static TAB_NUM t_func_std__trim_left[] = {
  0, // locals
  -2, // parameters
  MANDATORY_PARAMETER, var_742_0_self,
  var_is_a_whitespace_character, var_743_0_test,
  // $s 1
  LET, 1, num_1, 1, var_745_1_s,
  // $e length_of(self)
  var_length_of, 1, var_742_0_self, 1, var_746_1_e,
  // loop:
  var_loop, 1, lambda_5_loop, TAIL_CALL,
  POS(745, 3),
  POS(746, 3),
  POS(747, 3)
};

static TAB_NUM t_lambda_5_loop[] = {
  3, // locals
  0, // parameters
  // e && test(self(s)):
  var_std__less, 2, var_746_1_e, var_745_1_s, 1, LOCAL(1),
  // e && test(self(s)):
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // e && test(self(s)):
  var_std__and, 2, LOCAL(2), lambda_89, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_90, lambda_91, TAIL_CALL,
  POS(749, 12),
  POS(749, 12),
  POS(749, 12),
  POS(748, 5)
};

static TAB_NUM t_lambda_89[] = {
  2, // locals
  0, // parameters
  // self(s)):
  var_742_0_self, 1, var_745_1_s, 1, LOCAL(1),
  // test(self(s)):
  var_743_0_test, 1, LOCAL(1), 1, LOCAL(2),
  // test(self(s)):
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(749, 22),
  POS(749, 17),
  POS(749, 17)
};

static TAB_NUM t_lambda_90[] = {
  0, // locals
  0, // parameters
  // inc &s
  var_inc, 1, var_745_1_s, 1, var_745_1_s,
  // next
  var_next, 0, TAIL_CALL,
  POS(750, 9),
  POS(751, 9)
};

static TAB_NUM t_lambda_91[] = {
  0, // locals
  0, // parameters
  // range self s e
  var_range, 3, var_742_0_self, var_745_1_s, var_746_1_e, TAIL_CALL,
  POS(753, 9)
};

static TAB_NUM t_func_std__trim_right[] = {
  0, // locals
  -2, // parameters
  MANDATORY_PARAMETER, var_759_0_self,
  var_is_a_whitespace_character, var_760_0_test,
  // $e length_of(self)
  var_length_of, 1, var_759_0_self, 1, var_762_1_e,
  // loop:
  var_loop, 1, lambda_6_loop, TAIL_CALL,
  POS(762, 3),
  POS(763, 3)
};

static TAB_NUM t_lambda_6_loop[] = {
  3, // locals
  0, // parameters
  // e >= 1 && test(self(e)):
  var_std__less, 2, var_762_1_e, num_1, 1, LOCAL(1),
  // e >= 1 && test(self(e)):
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // e >= 1 && test(self(e)):
  var_std__and, 2, LOCAL(2), lambda_92, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_93, lambda_94, TAIL_CALL,
  POS(765, 7),
  POS(765, 7),
  POS(765, 7),
  POS(764, 5)
};

static TAB_NUM t_lambda_92[] = {
  2, // locals
  0, // parameters
  // self(e)):
  var_759_0_self, 1, var_762_1_e, 1, LOCAL(1),
  // test(self(e)):
  var_760_0_test, 1, LOCAL(1), 1, LOCAL(2),
  // test(self(e)):
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(765, 22),
  POS(765, 17),
  POS(765, 17)
};

static TAB_NUM t_lambda_93[] = {
  0, // locals
  0, // parameters
  // dec &e
  var_dec, 1, var_762_1_e, 1, var_762_1_e,
  // next
  var_next, 0, TAIL_CALL,
  POS(766, 9),
  POS(767, 9)
};

static TAB_NUM t_lambda_94[] = {
  0, // locals
  0, // parameters
  // range self 1 e
  var_range, 3, var_759_0_self, num_1, var_762_1_e, TAIL_CALL,
  POS(769, 9)
};

static TAB_NUM t_func_std__parse_integer[] = {
  0, // locals
  1, // parameters
  var_783_0_self,
  // $orig self
  LET, 1, var_783_0_self, 1, var_803_1_orig,
  // $negate self .has_prefix. '-'
  var_has_prefix, 2, var_783_0_self, chr_45, 1, var_804_1_negate,
  // !self
  var_if, 3, var_804_1_negate, lambda_101, lambda_102, 1, var_783_0_self,
  // $value 0
  LET, 1, num_0, 1, var_810_1_value,
  // cond
  var_cond, 4, lambda_103, lambda_108, lambda_113, lambda_118, TAIL_CALL,
  POS(803, 3),
  POS(804, 3),
  POS(805, 3),
  POS(810, 3),
  POS(811, 3)
};

static TAB_NUM t_func_maybe_negated[] = {
  0, // locals
  0, // parameters
  // if
  var_if, 3, var_804_1_negate, lambda_95, lambda_96, TAIL_CALL,
  POS(786, 5)
};

static TAB_NUM t_lambda_95[] = {
  1, // locals
  0, // parameters
  // value
  var_std__negate, 1, var_810_1_value, 1, LOCAL(1),
  //  -value
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(788, 11),
  POS(788, 9)
};

static TAB_NUM t_lambda_96[] = {
  0, // locals
  0, // parameters
  //  value
  LET, 1, var_810_1_value, TAIL_CALL,
  POS(789, 9)
};

static TAB_NUM t_func_partial_match[] = {
  1, // locals
  1, // parameters
  var_791_17_idx,
  // 1
  var_std__less, 2, num_1, var_791_17_idx, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_97, lambda_98, TAIL_CALL,
  POS(793, 13),
  POS(792, 5)
};

static TAB_NUM t_lambda_97[] = {
  2, // locals
  0, // parameters
  // range(self idx -1) maybe_negated()
  var_range, 3, var_783_0_self, var_791_17_idx, minus_num_1, 1, LOCAL(1),
  // maybe_negated()
  func_maybe_negated, 0, 1, LOCAL(2),
  //  range(self idx -1) maybe_negated()
  LET, 2, LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(794, 10),
  POS(794, 29),
  POS(794, 9)
};

static TAB_NUM t_lambda_98[] = {
  0, // locals
  0, // parameters
  //  orig undefined
  LET, 2, var_803_1_orig, var_undefined, TAIL_CALL,
  POS(795, 9)
};

static TAB_NUM t_func_exhausted[] = {
  1, // locals
  0, // parameters
  // is_empty
  var_is_empty, 1, var_783_0_self, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_99, lambda_100, TAIL_CALL,
  POS(799, 12),
  POS(798, 5)
};

static TAB_NUM t_lambda_99[] = {
  0, // locals
  0, // parameters
  //  orig undefined
  LET, 2, var_803_1_orig, var_undefined, TAIL_CALL,
  POS(800, 9)
};

static TAB_NUM t_lambda_100[] = {
  1, // locals
  0, // parameters
  // maybe_negated()
  func_maybe_negated, 0, 1, LOCAL(1),
  //  "" maybe_negated()
  LET, 2, string_1, LOCAL(1), TAIL_CALL,
  POS(801, 13),
  POS(801, 9)
};

static TAB_NUM t_lambda_101[] = {
  1, // locals
  0, // parameters
  // range(self 2 -1)
  var_range, 3, var_783_0_self, num_2, minus_num_1, 1, LOCAL(1),
  //  range(self 2 -1)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(808, 10),
  POS(808, 9)
};

static TAB_NUM t_lambda_102[] = {
  0, // locals
  0, // parameters
  //  self
  LET, 1, var_783_0_self, TAIL_CALL,
  POS(809, 9)
};

static TAB_NUM t_lambda_103[] = {
  1, // locals
  0, // parameters
  // self .has_prefix. "0b":
  var_has_prefix, 2, var_783_0_self, str_0b, 1, LOCAL(1),
  //  self .has_prefix. "0b":
  LET, 2, LOCAL(1), lambda_104, TAIL_CALL,
  POS(812, 8),
  POS(812, 7)
};

static TAB_NUM t_lambda_104[] = {
  0, // locals
  0, // parameters
  // range &self 3 -1
  var_range, 3, var_783_0_self, num_3, minus_num_1, 1, var_783_0_self,
  // for_each self
  var_for_each, 3, var_783_0_self, lambda_105, func_exhausted, TAIL_CALL,
  POS(813, 7),
  POS(814, 7)
};

static TAB_NUM t_lambda_105[] = {
  0, // locals
  2, // parameters
  var_815_3_idx,
  var_815_7_chr,
  // case
  var_case, 4, var_815_7_chr, value_range_818_1, lambda_106, lambda_107, TAIL_CALL,
  POS(816, 11)
};

static TAB_NUM t_lambda_106[] = {
  2, // locals
  0, // parameters
  // value << 1)+(chr-'0')
  var_std__shift_left, 2, var_810_1_value, num_1, 1, LOCAL(1),
  // chr-'0')
  var_std__minus, 2, var_815_7_chr, chr_48, 1, LOCAL(2),
  // !value (value << 1)+(chr-'0')
  var_std__plus, 2, LOCAL(1), LOCAL(2), 1, var_810_1_value,
  // next
  var_next, 0, TAIL_CALL,
  POS(819, 23),
  POS(819, 36),
  POS(819, 15),
  POS(820, 15)
};

static TAB_NUM t_lambda_107[] = {
  0, // locals
  0, // parameters
  // partial_match idx
  func_partial_match, 1, var_815_3_idx, TAIL_CALL,
  POS(822, 15)
};

static TAB_NUM t_lambda_108[] = {
  1, // locals
  0, // parameters
  // self .has_prefix. "0o":
  var_has_prefix, 2, var_783_0_self, str_0o, 1, LOCAL(1),
  //  self .has_prefix. "0o":
  LET, 2, LOCAL(1), lambda_109, TAIL_CALL,
  POS(824, 8),
  POS(824, 7)
};

static TAB_NUM t_lambda_109[] = {
  0, // locals
  0, // parameters
  // range &self 3 -1
  var_range, 3, var_783_0_self, num_3, minus_num_1, 1, var_783_0_self,
  // for_each self
  var_for_each, 3, var_783_0_self, lambda_110, func_exhausted, TAIL_CALL,
  POS(825, 7),
  POS(826, 7)
};

static TAB_NUM t_lambda_110[] = {
  0, // locals
  2, // parameters
  var_827_3_idx,
  var_827_7_chr,
  // case chr
  var_case, 4, var_827_7_chr, value_range_829_1, lambda_111, lambda_112, TAIL_CALL,
  POS(828, 11)
};

static TAB_NUM t_lambda_111[] = {
  2, // locals
  0, // parameters
  // value << 3)+(chr-'0')
  var_std__shift_left, 2, var_810_1_value, num_3, 1, LOCAL(1),
  // chr-'0')
  var_std__minus, 2, var_827_7_chr, chr_48, 1, LOCAL(2),
  // !value (value << 3)+(chr-'0')
  var_std__plus, 2, LOCAL(1), LOCAL(2), 1, var_810_1_value,
  // next
  var_next, 0, TAIL_CALL,
  POS(830, 23),
  POS(830, 36),
  POS(830, 15),
  POS(831, 15)
};

static TAB_NUM t_lambda_112[] = {
  0, // locals
  0, // parameters
  // partial_match idx
  func_partial_match, 1, var_827_3_idx, TAIL_CALL,
  POS(833, 15)
};

static TAB_NUM t_lambda_113[] = {
  1, // locals
  0, // parameters
  // self .has_prefix. "0x":
  var_has_prefix, 2, var_783_0_self, str_0x, 1, LOCAL(1),
  //  self .has_prefix. "0x":
  LET, 2, LOCAL(1), lambda_114, TAIL_CALL,
  POS(835, 8),
  POS(835, 7)
};

static TAB_NUM t_lambda_114[] = {
  0, // locals
  0, // parameters
  // range &self 3 -1
  var_range, 3, var_783_0_self, num_3, minus_num_1, 1, var_783_0_self,
  // for_each self
  var_for_each, 3, var_783_0_self, lambda_115, func_exhausted, TAIL_CALL,
  POS(836, 7),
  POS(837, 7)
};

static TAB_NUM t_lambda_115[] = {
  0, // locals
  2, // parameters
  var_838_3_idx,
  var_838_7_chr,
  // case chr
  var_case, 8, var_838_7_chr, value_range_840_1, lambda_116, value_range_843_1, lambda_a__f, value_range_846_1, lambda_A__F, lambda_117, TAIL_CALL,
  POS(839, 11)
};

static TAB_NUM t_lambda_116[] = {
  2, // locals
  0, // parameters
  // value << 4)+(chr-'0')
  var_std__shift_left, 2, var_810_1_value, num_4, 1, LOCAL(1),
  // chr-'0')
  var_std__minus, 2, var_838_7_chr, chr_48, 1, LOCAL(2),
  // !value (value << 4)+(chr-'0')
  var_std__plus, 2, LOCAL(1), LOCAL(2), 1, var_810_1_value,
  // next
  var_next, 0, TAIL_CALL,
  POS(841, 23),
  POS(841, 36),
  POS(841, 15),
  POS(842, 15)
};

static TAB_NUM t_lambda_a__f[] = {
  3, // locals
  0, // parameters
  // value << 4)+(chr-'a')+10
  var_std__shift_left, 2, var_810_1_value, num_4, 1, LOCAL(1),
  // chr-'a')+10
  var_std__minus, 2, var_838_7_chr, chr_97, 1, LOCAL(2),
  // value << 4)+(chr-'a')+10
  var_std__plus, 2, LOCAL(1), LOCAL(2), 1, LOCAL(3),
  // !value (value << 4)+(chr-'a')+10
  var_std__plus, 2, LOCAL(3), num_10, 1, var_810_1_value,
  // next
  var_next, 0, TAIL_CALL,
  POS(844, 23),
  POS(844, 36),
  POS(844, 23),
  POS(844, 15),
  POS(845, 15)
};

static TAB_NUM t_lambda_A__F[] = {
  3, // locals
  0, // parameters
  // value << 4)+(chr-'A')+10
  var_std__shift_left, 2, var_810_1_value, num_4, 1, LOCAL(1),
  // chr-'A')+10
  var_std__minus, 2, var_838_7_chr, chr_65, 1, LOCAL(2),
  // value << 4)+(chr-'A')+10
  var_std__plus, 2, LOCAL(1), LOCAL(2), 1, LOCAL(3),
  // !value (value << 4)+(chr-'A')+10
  var_std__plus, 2, LOCAL(3), num_10, 1, var_810_1_value,
  // next
  var_next, 0, TAIL_CALL,
  POS(847, 23),
  POS(847, 36),
  POS(847, 23),
  POS(847, 15),
  POS(848, 15)
};

static TAB_NUM t_lambda_117[] = {
  0, // locals
  0, // parameters
  // partial_match idx
  func_partial_match, 1, var_838_3_idx, TAIL_CALL,
  POS(850, 15)
};

static TAB_NUM t_lambda_118[] = {
  0, // locals
  0, // parameters
  //  true:
  LET, 2, var_true, lambda_119, TAIL_CALL,
  POS(852, 7)
};

static TAB_NUM t_lambda_119[] = {
  0, // locals
  0, // parameters
  // for_each self
  var_for_each, 3, var_783_0_self, lambda_120, func_exhausted, TAIL_CALL,
  POS(853, 7)
};

static TAB_NUM t_lambda_120[] = {
  0, // locals
  2, // parameters
  var_854_3_idx,
  var_854_7_chr,
  // case chr
  var_case, 4, var_854_7_chr, value_range_840_1, lambda_121, lambda_122, TAIL_CALL,
  POS(855, 11)
};

static TAB_NUM t_lambda_121[] = {
  2, // locals
  0, // parameters
  // 10*value+(chr-'0')
  var_std__times, 2, num_10, var_810_1_value, 1, LOCAL(1),
  // chr-'0')
  var_std__minus, 2, var_854_7_chr, chr_48, 1, LOCAL(2),
  // !value 10*value+(chr-'0')
  var_std__plus, 2, LOCAL(1), LOCAL(2), 1, var_810_1_value,
  // next
  var_next, 0, TAIL_CALL,
  POS(857, 22),
  POS(857, 32),
  POS(857, 15),
  POS(858, 15)
};

static TAB_NUM t_lambda_122[] = {
  0, // locals
  0, // parameters
  // partial_match idx
  func_partial_match, 1, var_854_3_idx, TAIL_CALL,
  POS(860, 15)
};

static TAB_NUM t_func_std__parse_number[] = {
  1, // locals
  1, // parameters
  var_875_0_self,
  // $i 1
  LET, 1, num_1, 1, var_877_1_i,
  // $n length_of(self)
  var_length_of, 1, var_875_0_self, 1, var_878_1_n,
  // n
  var_std__less, 2, var_878_1_n, var_877_1_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_123, lambda_124, TAIL_CALL,
  POS(877, 3),
  POS(878, 3),
  POS(880, 9),
  POS(879, 3)
};

static TAB_NUM t_lambda_123[] = {
  0, // locals
  0, // parameters
  //  self undefined
  LET, 2, var_875_0_self, var_undefined, TAIL_CALL,
  POS(881, 7)
};

static TAB_NUM t_lambda_124[] = {
  3, // locals
  0, // parameters
  // $sign_chr self(1)
  var_875_0_self, 1, num_1, 1, var_883_1_sign_chr,
  // sign_chr == '-' || sign_chr == '+' &i -> i+1
  var_std__equal, 2, var_883_1_sign_chr, chr_45, 1, LOCAL(1),
  // sign_chr == '-' || sign_chr == '+' &i -> i+1
  var_std__or, 2, LOCAL(1), lambda_125, 1, LOCAL(2),
  // update_if sign_chr == '-' || sign_chr == '+' &i -> i+1
  var_update_if, 3, LOCAL(2), var_877_1_i, lambda_126, 1, var_877_1_i,
  // self(i) == '0' && i+1 < n:
  var_875_0_self, 1, var_877_1_i, 1, LOCAL(1),
  // self(i) == '0' && i+1 < n:
  var_std__equal, 2, LOCAL(1), chr_48, 1, LOCAL(2),
  // self(i) == '0' && i+1 < n:
  var_std__and, 2, LOCAL(2), lambda_127, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_128, func_parse, TAIL_CALL,
  POS(883, 7),
  POS(884, 17),
  POS(884, 17),
  POS(884, 7),
  POS(886, 9),
  POS(886, 9),
  POS(886, 9),
  POS(885, 7)
};

static TAB_NUM t_lambda_125[] = {
  1, // locals
  0, // parameters
  // sign_chr == '+' &i -> i+1
  var_std__equal, 2, var_883_1_sign_chr, chr_43, 1, LOCAL(1),
  // sign_chr == '+' &i -> i+1
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(884, 36),
  POS(884, 36)
};

static TAB_NUM t_lambda_126[] = {
  1, // locals
  0, // parameters
  // i+1
  var_std__plus, 2, var_877_1_i, num_1, 1, LOCAL(1),
  //  i+1
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(884, 58),
  POS(884, 57)
};

static TAB_NUM t_lambda_127[] = {
  2, // locals
  0, // parameters
  // i+1 < n:
  var_std__plus, 2, var_877_1_i, num_1, 1, LOCAL(1),
  // i+1 < n:
  var_std__less, 2, LOCAL(1), var_878_1_n, 1, LOCAL(2),
  // i+1 < n:
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(886, 27),
  POS(886, 27),
  POS(886, 27)
};

static TAB_NUM t_lambda_128[] = {
  2, // locals
  0, // parameters
  // i+1)
  var_std__plus, 2, var_877_1_i, num_1, 1, LOCAL(1),
  // self(i+1)
  var_875_0_self, 1, LOCAL(1), 1, LOCAL(2),
  // case self(i+1)
  var_case, 8, LOCAL(2), chr_98, lambda_b, chr_111, lambda_o, chr_120, lambda_x, func_parse, TAIL_CALL,
  POS(887, 21),
  POS(887, 16),
  POS(887, 11)
};

static TAB_NUM t_lambda_b[] = {
  1, // locals
  0, // parameters
  // i+2
  var_std__plus, 2, var_877_1_i, num_2, 1, LOCAL(1),
  // parse_binary self i+2
  func_parse_binary, 2, var_875_0_self, LOCAL(1), TAIL_CALL,
  POS(888, 36),
  POS(888, 18)
};

static TAB_NUM t_lambda_o[] = {
  1, // locals
  0, // parameters
  // i+2
  var_std__plus, 2, var_877_1_i, num_2, 1, LOCAL(1),
  // parse_octal self i+2
  func_parse_octal, 2, var_875_0_self, LOCAL(1), TAIL_CALL,
  POS(889, 35),
  POS(889, 18)
};

static TAB_NUM t_lambda_x[] = {
  1, // locals
  0, // parameters
  // i+2
  var_std__plus, 2, var_877_1_i, num_2, 1, LOCAL(1),
  // parse_hex self i+2
  func_parse_hex, 2, var_875_0_self, LOCAL(1), TAIL_CALL,
  POS(890, 33),
  POS(890, 18)
};

static TAB_NUM t_func_parse[] = {
  0, // locals
  0, // parameters
  // skip_one_ore_more_digits:
  func_skip_one_ore_more_digits, 1, lambda_skip_one_ore_more_digits, TAIL_CALL,
  POS(895, 5)
};

static TAB_NUM t_lambda_skip_one_ore_more_digits[] = {
  1, // locals
  0, // parameters
  // n return_integer
  var_std__less, 2, var_878_1_n, var_877_1_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), func_return_integer, lambda_129, TAIL_CALL,
  POS(897, 13),
  POS(896, 7)
};

static TAB_NUM t_lambda_129[] = {
  1, // locals
  0, // parameters
  // self(i)
  var_875_0_self, 1, var_877_1_i, 1, LOCAL(1),
  // case self(i)
  var_case, 6, LOCAL(1), chr_46, lambda_130, sequence_910_1, func_handle_exponent, func_return_integer, TAIL_CALL,
  POS(899, 16),
  POS(899, 11)
};

static TAB_NUM t_lambda_130[] = {
  0, // locals
  0, // parameters
  // !i i+1
  var_std__plus, 2, var_877_1_i, num_1, 1, var_877_1_i,
  // skip_one_ore_more_digits:
  func_skip_one_ore_more_digits, 1, lambda_2_skip_one_ore_more_digits, TAIL_CALL,
  POS(901, 15),
  POS(902, 15)
};

static TAB_NUM t_lambda_2_skip_one_ore_more_digits[] = {
  1, // locals
  0, // parameters
  // n
  var_std__less, 2, var_878_1_n, var_877_1_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), func_return_real, lambda_131, TAIL_CALL,
  POS(904, 23),
  POS(903, 17)
};

static TAB_NUM t_lambda_131[] = {
  1, // locals
  0, // parameters
  // self(i)
  var_875_0_self, 1, var_877_1_i, 1, LOCAL(1),
  // case self(i)
  var_case, 4, LOCAL(1), sequence_910_1, func_handle_exponent, func_return_real, TAIL_CALL,
  POS(907, 26),
  POS(907, 21)
};

static TAB_NUM t_func_skip_one_ore_more_digits[] = {
  1, // locals
  1, // parameters
  var_913_28_cont,
  // n
  var_std__less, 2, var_878_1_n, var_877_1_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_132, lambda_133, TAIL_CALL,
  POS(915, 13),
  POS(914, 7)
};

static TAB_NUM t_lambda_132[] = {
  0, // locals
  0, // parameters
  //  self undefined
  LET, 2, var_875_0_self, var_undefined, TAIL_CALL,
  POS(916, 11)
};

static TAB_NUM t_lambda_133[] = {
  2, // locals
  0, // parameters
  // $digit self(i)
  var_875_0_self, 1, var_877_1_i, 1, var_918_1_digit,
  // digit < '0' || digit > '9'
  var_std__less, 2, var_918_1_digit, chr_48, 1, LOCAL(1),
  // digit < '0' || digit > '9'
  var_std__or, 2, LOCAL(1), lambda_134, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_135, lambda_136, TAIL_CALL,
  POS(918, 11),
  POS(920, 13),
  POS(920, 13),
  POS(919, 11)
};

static TAB_NUM t_lambda_134[] = {
  1, // locals
  0, // parameters
  // 9'
  var_std__less, 2, chr_57, var_918_1_digit, 1, LOCAL(1),
  // digit > '9'
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(920, 37),
  POS(920, 28)
};

static TAB_NUM t_lambda_135[] = {
  0, // locals
  0, // parameters
  //  self undefined
  LET, 2, var_875_0_self, var_undefined, TAIL_CALL,
  POS(921, 15)
};

static TAB_NUM t_lambda_136[] = {
  0, // locals
  0, // parameters
  // loop:
  var_loop, 1, lambda_7_loop, TAIL_CALL,
  POS(923, 15)
};

static TAB_NUM t_lambda_7_loop[] = {
  1, // locals
  0, // parameters
  // !i i+1
  var_std__plus, 2, var_877_1_i, num_1, 1, var_877_1_i,
  // n
  var_std__less, 2, var_878_1_n, var_877_1_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), var_913_28_cont, lambda_137, TAIL_CALL,
  POS(924, 17),
  POS(926, 23),
  POS(925, 17)
};

static TAB_NUM t_lambda_137[] = {
  3, // locals
  0, // parameters
  // $next_digit self(i)
  var_875_0_self, 1, var_877_1_i, 1, var_929_1_next_digit,
  // next_digit >= '0' && next_digit <= '9'
  var_std__less, 2, var_929_1_next_digit, chr_48, 1, LOCAL(1),
  // next_digit >= '0' && next_digit <= '9'
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // next_digit >= '0' && next_digit <= '9'
  var_std__and, 2, LOCAL(2), lambda_138, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), var_next, var_913_28_cont, TAIL_CALL,
  POS(929, 21),
  POS(931, 23),
  POS(931, 23),
  POS(931, 23),
  POS(930, 21)
};

static TAB_NUM t_lambda_138[] = {
  2, // locals
  0, // parameters
  // 9'
  var_std__less, 2, chr_57, var_929_1_next_digit, 1, LOCAL(1),
  // 9'
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // next_digit <= '9'
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(931, 59),
  POS(931, 59),
  POS(931, 44)
};

static TAB_NUM t_func_handle_exponent[] = {
  1, // locals
  0, // parameters
  // !i i+1
  var_std__plus, 2, var_877_1_i, num_1, 1, var_877_1_i,
  // n
  var_std__less, 2, var_878_1_n, var_877_1_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_139, lambda_140, TAIL_CALL,
  POS(936, 7),
  POS(938, 13),
  POS(937, 7)
};

static TAB_NUM t_lambda_139[] = {
  0, // locals
  0, // parameters
  //  self undefined
  LET, 2, var_875_0_self, var_undefined, TAIL_CALL,
  POS(939, 11)
};

static TAB_NUM t_lambda_140[] = {
  2, // locals
  0, // parameters
  // $exp_sign_chr self(i)
  var_875_0_self, 1, var_877_1_i, 1, var_941_1_exp_sign_chr,
  // exp_sign_chr == '-' || exp_sign_chr == '+' &i -> i+1
  var_std__equal, 2, var_941_1_exp_sign_chr, chr_45, 1, LOCAL(1),
  // exp_sign_chr == '-' || exp_sign_chr == '+' &i -> i+1
  var_std__or, 2, LOCAL(1), lambda_141, 1, LOCAL(2),
  // update_if exp_sign_chr == '-' || exp_sign_chr == '+' &i -> i+1
  var_update_if, 3, LOCAL(2), var_877_1_i, lambda_142, 1, var_877_1_i,
  // skip_one_ore_more_digits return_real
  func_skip_one_ore_more_digits, 1, func_return_real, TAIL_CALL,
  POS(941, 11),
  POS(942, 21),
  POS(942, 21),
  POS(942, 11),
  POS(943, 11)
};

static TAB_NUM t_lambda_141[] = {
  1, // locals
  0, // parameters
  // exp_sign_chr == '+' &i -> i+1
  var_std__equal, 2, var_941_1_exp_sign_chr, chr_43, 1, LOCAL(1),
  // exp_sign_chr == '+' &i -> i+1
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(942, 44),
  POS(942, 44)
};

static TAB_NUM t_lambda_142[] = {
  1, // locals
  0, // parameters
  // i+1
  var_std__plus, 2, var_877_1_i, num_1, 1, LOCAL(1),
  //  i+1
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(942, 70),
  POS(942, 69)
};

static TAB_NUM t_func_return_integer[] = {
  4, // locals
  0, // parameters
  // range(self i -1) integer(range(self 1 i-1))
  var_range, 3, var_875_0_self, var_877_1_i, minus_num_1, 1, LOCAL(1),
  // i-1))
  var_std__minus, 2, var_877_1_i, num_1, 1, LOCAL(2),
  // range(self 1 i-1))
  var_range, 3, var_875_0_self, num_1, LOCAL(2), 1, LOCAL(3),
  // integer(range(self 1 i-1))
  var_integer, 1, LOCAL(3), 1, LOCAL(4),
  //  range(self i -1) integer(range(self 1 i-1))
  LET, 2, LOCAL(1), LOCAL(4), TAIL_CALL,
  POS(945, 24),
  POS(945, 62),
  POS(945, 49),
  POS(945, 41),
  POS(945, 23)
};

static TAB_NUM t_func_return_real[] = {
  4, // locals
  0, // parameters
  // range(self i -1) real(range(self 1 i-1))
  var_range, 3, var_875_0_self, var_877_1_i, minus_num_1, 1, LOCAL(1),
  // i-1))
  var_std__minus, 2, var_877_1_i, num_1, 1, LOCAL(2),
  // range(self 1 i-1))
  var_range, 3, var_875_0_self, num_1, LOCAL(2), 1, LOCAL(3),
  // real(range(self 1 i-1))
  var_real, 1, LOCAL(3), 1, LOCAL(4),
  //  range(self i -1) real(range(self 1 i-1))
  LET, 2, LOCAL(1), LOCAL(4), TAIL_CALL,
  POS(947, 21),
  POS(947, 56),
  POS(947, 43),
  POS(947, 38),
  POS(947, 20)
};

static TAB_NUM t_func_parse_binary[] = {
  1, // locals
  2, // parameters
  var_949_16_str,
  var_949_20_i,
  // $n length_of(str)
  var_length_of, 1, var_949_16_str, 1, var_950_1_n,
  // n -> str undefined
  var_std__less, 2, var_950_1_n, var_949_20_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_143, lambda_144, TAIL_CALL,
  POS(950, 3),
  POS(952, 9),
  POS(951, 3)
};

static TAB_NUM t_lambda_143[] = {
  0, // locals
  0, // parameters
  //  str undefined
  LET, 2, var_949_16_str, var_undefined, TAIL_CALL,
  POS(952, 13)
};

static TAB_NUM t_lambda_144[] = {
  2, // locals
  0, // parameters
  // $digit str(i)
  var_949_16_str, 1, var_949_20_i, 1, var_954_1_digit,
  // digit < '0' || digit > '1'
  var_std__less, 2, var_954_1_digit, chr_48, 1, LOCAL(1),
  // digit < '0' || digit > '1'
  var_std__or, 2, LOCAL(1), lambda_145, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_146, lambda_147, TAIL_CALL,
  POS(954, 7),
  POS(956, 9),
  POS(956, 9),
  POS(955, 7)
};

static TAB_NUM t_lambda_145[] = {
  1, // locals
  0, // parameters
  // 1'
  var_std__less, 2, chr_49, var_954_1_digit, 1, LOCAL(1),
  // digit > '1'
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(956, 33),
  POS(956, 24)
};

static TAB_NUM t_lambda_146[] = {
  0, // locals
  0, // parameters
  //  str undefined
  LET, 2, var_949_16_str, var_undefined, TAIL_CALL,
  POS(957, 11)
};

static TAB_NUM t_lambda_147[] = {
  0, // locals
  0, // parameters
  // $value digit-'0'
  var_std__minus, 2, var_954_1_digit, chr_48, 1, var_959_1_value,
  // loop:
  var_loop, 1, lambda_8_loop, TAIL_CALL,
  POS(959, 11),
  POS(960, 11)
};

static TAB_NUM t_lambda_8_loop[] = {
  1, // locals
  0, // parameters
  // !i i+1
  var_std__plus, 2, var_949_20_i, num_1, 1, var_949_20_i,
  // n
  var_std__less, 2, var_950_1_n, var_949_20_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_148, lambda_149, TAIL_CALL,
  POS(961, 13),
  POS(963, 19),
  POS(962, 13)
};

static TAB_NUM t_lambda_148[] = {
  0, // locals
  0, // parameters
  //  "" value
  LET, 2, string_1, var_959_1_value, TAIL_CALL,
  POS(964, 17)
};

static TAB_NUM t_lambda_149[] = {
  3, // locals
  0, // parameters
  // $next_digit str(i)
  var_949_16_str, 1, var_949_20_i, 1, var_966_1_next_digit,
  // next_digit >= '0' && next_digit <= '1':
  var_std__less, 2, var_966_1_next_digit, chr_48, 1, LOCAL(1),
  // next_digit >= '0' && next_digit <= '1':
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // next_digit >= '0' && next_digit <= '1':
  var_std__and, 2, LOCAL(2), lambda_150, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_151, lambda_152, TAIL_CALL,
  POS(966, 17),
  POS(968, 19),
  POS(968, 19),
  POS(968, 19),
  POS(967, 17)
};

static TAB_NUM t_lambda_150[] = {
  2, // locals
  0, // parameters
  // 1':
  var_std__less, 2, chr_49, var_966_1_next_digit, 1, LOCAL(1),
  // 1':
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // next_digit <= '1':
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(968, 55),
  POS(968, 55),
  POS(968, 40)
};

static TAB_NUM t_lambda_151[] = {
  2, // locals
  0, // parameters
  // value << 1)+(next_digit-'0')
  var_std__shift_left, 2, var_959_1_value, num_1, 1, LOCAL(1),
  // next_digit-'0')
  var_std__minus, 2, var_966_1_next_digit, chr_48, 1, LOCAL(2),
  // !value (value << 1)+(next_digit-'0')
  var_std__plus, 2, LOCAL(1), LOCAL(2), 1, var_959_1_value,
  // next
  var_next, 0, TAIL_CALL,
  POS(969, 29),
  POS(969, 42),
  POS(969, 21),
  POS(970, 21)
};

static TAB_NUM t_lambda_152[] = {
  1, // locals
  0, // parameters
  // range(str i -1) value
  var_range, 3, var_949_16_str, var_949_20_i, minus_num_1, 1, LOCAL(1),
  //  range(str i -1) value
  LET, 2, LOCAL(1), var_959_1_value, TAIL_CALL,
  POS(971, 22),
  POS(971, 21)
};

static TAB_NUM t_func_parse_octal[] = {
  1, // locals
  2, // parameters
  var_973_15_str,
  var_973_19_i,
  // $n length_of(str)
  var_length_of, 1, var_973_15_str, 1, var_974_1_n,
  // n -> str undefined
  var_std__less, 2, var_974_1_n, var_973_19_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_153, lambda_154, TAIL_CALL,
  POS(974, 3),
  POS(976, 9),
  POS(975, 3)
};

static TAB_NUM t_lambda_153[] = {
  0, // locals
  0, // parameters
  //  str undefined
  LET, 2, var_973_15_str, var_undefined, TAIL_CALL,
  POS(976, 13)
};

static TAB_NUM t_lambda_154[] = {
  2, // locals
  0, // parameters
  // $digit str(i)
  var_973_15_str, 1, var_973_19_i, 1, var_978_1_digit,
  // digit < '0' || digit > '7'
  var_std__less, 2, var_978_1_digit, chr_48, 1, LOCAL(1),
  // digit < '0' || digit > '7'
  var_std__or, 2, LOCAL(1), lambda_155, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_156, lambda_157, TAIL_CALL,
  POS(978, 7),
  POS(980, 9),
  POS(980, 9),
  POS(979, 7)
};

static TAB_NUM t_lambda_155[] = {
  1, // locals
  0, // parameters
  // 7'
  var_std__less, 2, chr_55, var_978_1_digit, 1, LOCAL(1),
  // digit > '7'
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(980, 33),
  POS(980, 24)
};

static TAB_NUM t_lambda_156[] = {
  0, // locals
  0, // parameters
  //  str undefined
  LET, 2, var_973_15_str, var_undefined, TAIL_CALL,
  POS(981, 11)
};

static TAB_NUM t_lambda_157[] = {
  0, // locals
  0, // parameters
  // $value digit-'0'
  var_std__minus, 2, var_978_1_digit, chr_48, 1, var_983_1_value,
  // loop:
  var_loop, 1, lambda_9_loop, TAIL_CALL,
  POS(983, 11),
  POS(984, 11)
};

static TAB_NUM t_lambda_9_loop[] = {
  1, // locals
  0, // parameters
  // !i i+1
  var_std__plus, 2, var_973_19_i, num_1, 1, var_973_19_i,
  // n
  var_std__less, 2, var_974_1_n, var_973_19_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_158, lambda_159, TAIL_CALL,
  POS(985, 13),
  POS(987, 19),
  POS(986, 13)
};

static TAB_NUM t_lambda_158[] = {
  0, // locals
  0, // parameters
  //  "" value
  LET, 2, string_1, var_983_1_value, TAIL_CALL,
  POS(988, 17)
};

static TAB_NUM t_lambda_159[] = {
  3, // locals
  0, // parameters
  // $next_digit str(i)
  var_973_15_str, 1, var_973_19_i, 1, var_990_1_next_digit,
  // next_digit >= '0' && next_digit <= '7':
  var_std__less, 2, var_990_1_next_digit, chr_48, 1, LOCAL(1),
  // next_digit >= '0' && next_digit <= '7':
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // next_digit >= '0' && next_digit <= '7':
  var_std__and, 2, LOCAL(2), lambda_160, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_161, lambda_162, TAIL_CALL,
  POS(990, 17),
  POS(992, 19),
  POS(992, 19),
  POS(992, 19),
  POS(991, 17)
};

static TAB_NUM t_lambda_160[] = {
  2, // locals
  0, // parameters
  // 7':
  var_std__less, 2, chr_55, var_990_1_next_digit, 1, LOCAL(1),
  // 7':
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // next_digit <= '7':
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(992, 55),
  POS(992, 55),
  POS(992, 40)
};

static TAB_NUM t_lambda_161[] = {
  2, // locals
  0, // parameters
  // value << 3)+(next_digit-'0')
  var_std__shift_left, 2, var_983_1_value, num_3, 1, LOCAL(1),
  // next_digit-'0')
  var_std__minus, 2, var_990_1_next_digit, chr_48, 1, LOCAL(2),
  // !value (value << 3)+(next_digit-'0')
  var_std__plus, 2, LOCAL(1), LOCAL(2), 1, var_983_1_value,
  // next
  var_next, 0, TAIL_CALL,
  POS(993, 29),
  POS(993, 42),
  POS(993, 21),
  POS(994, 21)
};

static TAB_NUM t_lambda_162[] = {
  1, // locals
  0, // parameters
  // range(str i -1) value
  var_range, 3, var_973_15_str, var_973_19_i, minus_num_1, 1, LOCAL(1),
  //  range(str i -1) value
  LET, 2, LOCAL(1), var_983_1_value, TAIL_CALL,
  POS(995, 22),
  POS(995, 21)
};

static TAB_NUM t_func_parse_hex[] = {
  1, // locals
  2, // parameters
  var_997_13_str,
  var_997_17_i,
  // $n length_of(str)
  var_length_of, 1, var_997_13_str, 1, var_998_1_n,
  // n -> str undefined
  var_std__less, 2, var_998_1_n, var_997_17_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_163, lambda_164, TAIL_CALL,
  POS(998, 3),
  POS(1000, 9),
  POS(999, 3)
};

static TAB_NUM t_lambda_163[] = {
  0, // locals
  0, // parameters
  //  str undefined
  LET, 2, var_997_13_str, var_undefined, TAIL_CALL,
  POS(1000, 13)
};

static TAB_NUM t_lambda_164[] = {
  0, // locals
  0, // parameters
  // $digit str(i)
  var_997_13_str, 1, var_997_17_i, 1, var_1002_1_digit,
  // cond
  var_cond, 4, lambda_165, lambda_168, lambda_171, lambda_174, TAIL_CALL,
  POS(1002, 7),
  POS(1003, 7)
};

static TAB_NUM t_lambda_165[] = {
  3, // locals
  0, // parameters
  // digit >= '0' && digit <= '9':
  var_std__less, 2, var_1002_1_digit, chr_48, 1, LOCAL(1),
  // digit >= '0' && digit <= '9':
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // digit >= '0' && digit <= '9':
  var_std__and, 2, LOCAL(2), lambda_166, 1, LOCAL(3),
  //  digit >= '0' && digit <= '9':
  LET, 2, LOCAL(3), lambda_167, TAIL_CALL,
  POS(1004, 12),
  POS(1004, 12),
  POS(1004, 12),
  POS(1004, 11)
};

static TAB_NUM t_lambda_166[] = {
  2, // locals
  0, // parameters
  // 9':
  var_std__less, 2, chr_57, var_1002_1_digit, 1, LOCAL(1),
  // 9':
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // digit <= '9':
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1004, 38),
  POS(1004, 38),
  POS(1004, 28)
};

static TAB_NUM t_lambda_167[] = {
  1, // locals
  0, // parameters
  // digit-'0'
  var_std__minus, 2, var_1002_1_digit, chr_48, 1, LOCAL(1),
  // handle_more_digits digit-'0'
  func_handle_more_digits, 1, LOCAL(1), TAIL_CALL,
  POS(1005, 30),
  POS(1005, 11)
};

static TAB_NUM t_lambda_168[] = {
  3, // locals
  0, // parameters
  // digit >= 'a' && digit <= 'f':
  var_std__less, 2, var_1002_1_digit, chr_97, 1, LOCAL(1),
  // digit >= 'a' && digit <= 'f':
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // digit >= 'a' && digit <= 'f':
  var_std__and, 2, LOCAL(2), lambda_169, 1, LOCAL(3),
  //  digit >= 'a' && digit <= 'f':
  LET, 2, LOCAL(3), lambda_170, TAIL_CALL,
  POS(1006, 12),
  POS(1006, 12),
  POS(1006, 12),
  POS(1006, 11)
};

static TAB_NUM t_lambda_169[] = {
  2, // locals
  0, // parameters
  // f':
  var_std__less, 2, chr_102, var_1002_1_digit, 1, LOCAL(1),
  // f':
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // digit <= 'f':
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1006, 38),
  POS(1006, 38),
  POS(1006, 28)
};

static TAB_NUM t_lambda_170[] = {
  2, // locals
  0, // parameters
  // digit-'a')+10
  var_std__minus, 2, var_1002_1_digit, chr_97, 1, LOCAL(1),
  // digit-'a')+10
  var_std__plus, 2, LOCAL(1), num_10, 1, LOCAL(2),
  // handle_more_digits (digit-'a')+10
  func_handle_more_digits, 1, LOCAL(2), TAIL_CALL,
  POS(1007, 31),
  POS(1007, 31),
  POS(1007, 11)
};

static TAB_NUM t_lambda_171[] = {
  3, // locals
  0, // parameters
  // digit >= 'A' && digit <= 'F':
  var_std__less, 2, var_1002_1_digit, chr_65, 1, LOCAL(1),
  // digit >= 'A' && digit <= 'F':
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // digit >= 'A' && digit <= 'F':
  var_std__and, 2, LOCAL(2), lambda_172, 1, LOCAL(3),
  //  digit >= 'A' && digit <= 'F':
  LET, 2, LOCAL(3), lambda_173, TAIL_CALL,
  POS(1008, 12),
  POS(1008, 12),
  POS(1008, 12),
  POS(1008, 11)
};

static TAB_NUM t_lambda_172[] = {
  2, // locals
  0, // parameters
  // F':
  var_std__less, 2, chr_70, var_1002_1_digit, 1, LOCAL(1),
  // F':
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // digit <= 'F':
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1008, 38),
  POS(1008, 38),
  POS(1008, 28)
};

static TAB_NUM t_lambda_173[] = {
  2, // locals
  0, // parameters
  // digit-'A')+10
  var_std__minus, 2, var_1002_1_digit, chr_65, 1, LOCAL(1),
  // digit-'A')+10
  var_std__plus, 2, LOCAL(1), num_10, 1, LOCAL(2),
  // handle_more_digits (digit-'A')+10
  func_handle_more_digits, 1, LOCAL(2), TAIL_CALL,
  POS(1009, 31),
  POS(1009, 31),
  POS(1009, 11)
};

static TAB_NUM t_lambda_174[] = {
  0, // locals
  0, // parameters
  //  true -> str undefined
  LET, 2, var_true, lambda_175, TAIL_CALL,
  POS(1010, 11)
};

static TAB_NUM t_lambda_175[] = {
  0, // locals
  0, // parameters
  //  str undefined
  LET, 2, var_997_13_str, var_undefined, TAIL_CALL,
  POS(1010, 19)
};

static TAB_NUM t_func_handle_more_digits[] = {
  0, // locals
  1, // parameters
  var_1012_22_value,
  // loop:
  var_loop, 1, lambda_10_loop, TAIL_CALL,
  POS(1013, 9)
};

static TAB_NUM t_lambda_10_loop[] = {
  1, // locals
  0, // parameters
  // !i i+1
  var_std__plus, 2, var_997_17_i, num_1, 1, var_997_17_i,
  // n
  var_std__less, 2, var_998_1_n, var_997_17_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_176, lambda_177, TAIL_CALL,
  POS(1014, 11),
  POS(1016, 17),
  POS(1015, 11)
};

static TAB_NUM t_lambda_176[] = {
  0, // locals
  0, // parameters
  //  "" value
  LET, 2, string_1, var_1012_22_value, TAIL_CALL,
  POS(1017, 15)
};

static TAB_NUM t_lambda_177[] = {
  0, // locals
  0, // parameters
  // $next_digit str(i)
  var_997_13_str, 1, var_997_17_i, 1, var_1019_1_next_digit,
  // cond
  var_cond, 4, lambda_178, lambda_181, lambda_184, lambda_187, TAIL_CALL,
  POS(1019, 15),
  POS(1020, 15)
};

static TAB_NUM t_lambda_178[] = {
  3, // locals
  0, // parameters
  // next_digit >= '0' && next_digit <= '9':
  var_std__less, 2, var_1019_1_next_digit, chr_48, 1, LOCAL(1),
  // next_digit >= '0' && next_digit <= '9':
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // next_digit >= '0' && next_digit <= '9':
  var_std__and, 2, LOCAL(2), lambda_179, 1, LOCAL(3),
  //  next_digit >= '0' && next_digit <= '9':
  LET, 2, LOCAL(3), lambda_180, TAIL_CALL,
  POS(1021, 20),
  POS(1021, 20),
  POS(1021, 20),
  POS(1021, 19)
};

static TAB_NUM t_lambda_179[] = {
  2, // locals
  0, // parameters
  // 9':
  var_std__less, 2, chr_57, var_1019_1_next_digit, 1, LOCAL(1),
  // 9':
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // next_digit <= '9':
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1021, 56),
  POS(1021, 56),
  POS(1021, 41)
};

static TAB_NUM t_lambda_180[] = {
  2, // locals
  0, // parameters
  // value << 4)+(next_digit-'0')
  var_std__shift_left, 2, var_1012_22_value, num_4, 1, LOCAL(1),
  // next_digit-'0')
  var_std__minus, 2, var_1019_1_next_digit, chr_48, 1, LOCAL(2),
  // !value (value << 4)+(next_digit-'0')
  var_std__plus, 2, LOCAL(1), LOCAL(2), 1, var_1012_22_value,
  // next
  var_next, 0, TAIL_CALL,
  POS(1022, 27),
  POS(1022, 40),
  POS(1022, 19),
  POS(1023, 19)
};

static TAB_NUM t_lambda_181[] = {
  3, // locals
  0, // parameters
  // next_digit >= 'a' && next_digit <= 'f':
  var_std__less, 2, var_1019_1_next_digit, chr_97, 1, LOCAL(1),
  // next_digit >= 'a' && next_digit <= 'f':
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // next_digit >= 'a' && next_digit <= 'f':
  var_std__and, 2, LOCAL(2), lambda_182, 1, LOCAL(3),
  //  next_digit >= 'a' && next_digit <= 'f':
  LET, 2, LOCAL(3), lambda_183, TAIL_CALL,
  POS(1024, 20),
  POS(1024, 20),
  POS(1024, 20),
  POS(1024, 19)
};

static TAB_NUM t_lambda_182[] = {
  2, // locals
  0, // parameters
  // f':
  var_std__less, 2, chr_102, var_1019_1_next_digit, 1, LOCAL(1),
  // f':
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // next_digit <= 'f':
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1024, 56),
  POS(1024, 56),
  POS(1024, 41)
};

static TAB_NUM t_lambda_183[] = {
  3, // locals
  0, // parameters
  // value << 4)+(next_digit-'a')+10
  var_std__shift_left, 2, var_1012_22_value, num_4, 1, LOCAL(1),
  // next_digit-'a')+10
  var_std__minus, 2, var_1019_1_next_digit, chr_97, 1, LOCAL(2),
  // value << 4)+(next_digit-'a')+10
  var_std__plus, 2, LOCAL(1), LOCAL(2), 1, LOCAL(3),
  // !value (value << 4)+(next_digit-'a')+10
  var_std__plus, 2, LOCAL(3), num_10, 1, var_1012_22_value,
  // next
  var_next, 0, TAIL_CALL,
  POS(1025, 27),
  POS(1025, 40),
  POS(1025, 27),
  POS(1025, 19),
  POS(1026, 19)
};

static TAB_NUM t_lambda_184[] = {
  3, // locals
  0, // parameters
  // next_digit >= 'A' && next_digit <= 'F':
  var_std__less, 2, var_1019_1_next_digit, chr_65, 1, LOCAL(1),
  // next_digit >= 'A' && next_digit <= 'F':
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // next_digit >= 'A' && next_digit <= 'F':
  var_std__and, 2, LOCAL(2), lambda_185, 1, LOCAL(3),
  //  next_digit >= 'A' && next_digit <= 'F':
  LET, 2, LOCAL(3), lambda_186, TAIL_CALL,
  POS(1027, 20),
  POS(1027, 20),
  POS(1027, 20),
  POS(1027, 19)
};

static TAB_NUM t_lambda_185[] = {
  2, // locals
  0, // parameters
  // F':
  var_std__less, 2, chr_70, var_1019_1_next_digit, 1, LOCAL(1),
  // F':
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // next_digit <= 'F':
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1027, 56),
  POS(1027, 56),
  POS(1027, 41)
};

static TAB_NUM t_lambda_186[] = {
  3, // locals
  0, // parameters
  // value << 4)+(next_digit-'A')+10
  var_std__shift_left, 2, var_1012_22_value, num_4, 1, LOCAL(1),
  // next_digit-'A')+10
  var_std__minus, 2, var_1019_1_next_digit, chr_65, 1, LOCAL(2),
  // value << 4)+(next_digit-'A')+10
  var_std__plus, 2, LOCAL(1), LOCAL(2), 1, LOCAL(3),
  // !value (value << 4)+(next_digit-'A')+10
  var_std__plus, 2, LOCAL(3), num_10, 1, var_1012_22_value,
  // next
  var_next, 0, TAIL_CALL,
  POS(1028, 27),
  POS(1028, 40),
  POS(1028, 27),
  POS(1028, 19),
  POS(1029, 19)
};

static TAB_NUM t_lambda_187[] = {
  0, // locals
  0, // parameters
  //  true -> range(str i -1) value
  LET, 2, var_true, lambda_188, TAIL_CALL,
  POS(1030, 19)
};

static TAB_NUM t_lambda_188[] = {
  1, // locals
  0, // parameters
  // range(str i -1) value
  var_range, 3, var_997_13_str, var_997_17_i, minus_num_1, 1, LOCAL(1),
  //  range(str i -1) value
  LET, 2, LOCAL(1), var_1012_22_value, TAIL_CALL,
  POS(1030, 28),
  POS(1030, 27)
};

static TAB_NUM t_func_std_types__string___to_integer[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 1036_0_self
  // parse_integer &self $value
  var_parse_integer, 1, LOCAL(2), 2, LOCAL(2), var_1038_21_value,
  // self == ""
  var_std__equal, 2, LOCAL(2), string_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_189, lambda_190, TAIL_CALL,
  POS(1038, 3),
  POS(1040, 5),
  POS(1039, 3)
};

static TAB_NUM t_lambda_189[] = {
  0, // locals
  0, // parameters
  //  value
  LET, 1, var_1038_21_value, TAIL_CALL,
  POS(1041, 7)
};

static TAB_NUM t_lambda_190[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(1042, 7)
};

static TAB_NUM t_func_std_types__string___to_number[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 1048_0_self
  // parse_number &self $value
  var_parse_number, 1, LOCAL(2), 2, LOCAL(2), var_1050_20_value,
  // self == ""
  var_std__equal, 2, LOCAL(2), string_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_191, lambda_192, TAIL_CALL,
  POS(1050, 3),
  POS(1052, 5),
  POS(1051, 3)
};

static TAB_NUM t_lambda_191[] = {
  0, // locals
  0, // parameters
  //  value
  LET, 1, var_1050_20_value, TAIL_CALL,
  POS(1053, 7)
};

static TAB_NUM t_lambda_192[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(1054, 7)
};

static TAB_NUM t_func_std__map_characters[] = {
  2, // locals
  2, // parameters
  var_1064_0_self,
  var_1065_0_function,
  // parameter_count_of(function) == 2
  var_parameter_count_of, 1, var_1065_0_function, 1, LOCAL(1),
  // parameter_count_of(function) == 2
  var_std__equal, 2, LOCAL(1), num_2, 1, LOCAL(2),
  // $map
  var_if, 3, LOCAL(2), lambda_193, lambda_199, 1, var_1067_1_map,
  // length_of(self)
  var_length_of, 1, var_1064_0_self, 1, LOCAL(1),
  // map 1 length_of(self)
  var_1067_1_map, 2, num_1, LOCAL(1), TAIL_CALL,
  POS(1069, 7),
  POS(1069, 7),
  POS(1067, 3),
  POS(1097, 9),
  POS(1097, 3)
};

static TAB_NUM t_lambda_193[] = {
  0, // locals
  0, // parameters
  // 
  LET, 1, lambda_194, TAIL_CALL,
  POS(1070, 9)
};

static TAB_NUM t_lambda_194[] = {
  1, // locals
  2, // parameters
  var_1071_3_s,
  var_1071_5_e,
  // s < e:
  var_std__less, 2, var_1071_3_s, var_1071_5_e, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_195, lambda_196, TAIL_CALL,
  POS(1073, 13),
  POS(1072, 11)
};

static TAB_NUM t_lambda_195[] = {
  4, // locals
  0, // parameters
  // s+e) >> 1
  var_std__plus, 2, var_1071_3_s, var_1071_5_e, 1, LOCAL(1),
  // $m (s+e) >> 1
  var_std__shift_right, 2, LOCAL(1), num_1, 1, LOCAL(4),
  // map(s m)
  var_1067_1_map, 2, var_1071_3_s, LOCAL(4), 1, LOCAL(1),
  // m+1 e)
  var_std__plus, 2, LOCAL(4), num_1, 1, LOCAL(2),
  // map(m+1 e)
  var_1067_1_map, 2, LOCAL(2), var_1071_5_e, 1, LOCAL(3),
  // append
  var_append, 2, LOCAL(1), LOCAL(3), TAIL_CALL,
  POS(1074, 19),
  POS(1074, 15),
  POS(1076, 17),
  POS(1077, 21),
  POS(1077, 17),
  POS(1075, 15)
};

static TAB_NUM t_lambda_196[] = {
  1, // locals
  0, // parameters
  // e
  var_std__less, 2, var_1071_5_e, var_1071_3_s, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_197, lambda_198, TAIL_CALL,
  POS(1080, 21),
  POS(1079, 15)
};

static TAB_NUM t_lambda_197[] = {
  0, // locals
  0, // parameters
  //  ""
  LET, 1, string_1, TAIL_CALL,
  POS(1081, 19)
};

static TAB_NUM t_lambda_198[] = {
  3, // locals
  0, // parameters
  // self(s)))
  var_1064_0_self, 1, var_1071_3_s, 1, LOCAL(1),
  // function(s self(s)))
  var_1065_0_function, 2, var_1071_3_s, LOCAL(1), 1, LOCAL(2),
  // string(function(s self(s)))
  var_string, 1, LOCAL(2), 1, LOCAL(3),
  //  string(function(s self(s)))
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(1082, 38),
  POS(1082, 27),
  POS(1082, 20),
  POS(1082, 19)
};

static TAB_NUM t_lambda_199[] = {
  0, // locals
  0, // parameters
  // 
  LET, 1, lambda_200, TAIL_CALL,
  POS(1083, 9)
};

static TAB_NUM t_lambda_200[] = {
  1, // locals
  2, // parameters
  var_1084_3_s,
  var_1084_5_e,
  // s < e:
  var_std__less, 2, var_1084_3_s, var_1084_5_e, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_201, lambda_202, TAIL_CALL,
  POS(1086, 13),
  POS(1085, 11)
};

static TAB_NUM t_lambda_201[] = {
  4, // locals
  0, // parameters
  // s+e) >> 1
  var_std__plus, 2, var_1084_3_s, var_1084_5_e, 1, LOCAL(1),
  // $m (s+e) >> 1
  var_std__shift_right, 2, LOCAL(1), num_1, 1, LOCAL(4),
  // map(s m)
  var_1067_1_map, 2, var_1084_3_s, LOCAL(4), 1, LOCAL(1),
  // m+1 e)
  var_std__plus, 2, LOCAL(4), num_1, 1, LOCAL(2),
  // map(m+1 e)
  var_1067_1_map, 2, LOCAL(2), var_1084_5_e, 1, LOCAL(3),
  // append
  var_append, 2, LOCAL(1), LOCAL(3), TAIL_CALL,
  POS(1087, 19),
  POS(1087, 15),
  POS(1089, 17),
  POS(1090, 21),
  POS(1090, 17),
  POS(1088, 15)
};

static TAB_NUM t_lambda_202[] = {
  1, // locals
  0, // parameters
  // e
  var_std__less, 2, var_1084_5_e, var_1084_3_s, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_203, lambda_204, TAIL_CALL,
  POS(1093, 21),
  POS(1092, 15)
};

static TAB_NUM t_lambda_203[] = {
  0, // locals
  0, // parameters
  //  ""
  LET, 1, string_1, TAIL_CALL,
  POS(1094, 19)
};

static TAB_NUM t_lambda_204[] = {
  3, // locals
  0, // parameters
  // self(s)))
  var_1064_0_self, 1, var_1084_3_s, 1, LOCAL(1),
  // function(self(s)))
  var_1065_0_function, 1, LOCAL(1), 1, LOCAL(2),
  // string(function(self(s)))
  var_string, 1, LOCAL(2), 1, LOCAL(3),
  //  string(function(self(s)))
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(1095, 36),
  POS(1095, 27),
  POS(1095, 20),
  POS(1095, 19)
};

static TAB_NUM t_func_std_types__string___to_upper_case[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 1107_0_self
  // map_characters self to_upper_case
  var_map_characters, 2, LOCAL(1), var_to_upper_case, TAIL_CALL,
  POS(1109, 3)
};

static TAB_NUM t_func_std_types__string___to_lower_case[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 1119_0_self
  // map_characters self to_lower_case
  var_map_characters, 2, LOCAL(1), var_to_lower_case, TAIL_CALL,
  POS(1121, 3)
};

static TAB_NUM t_func_std_types__string___to_title_case[] = {
  0, // locals
  1, // parameters
  var_1131_0_self,
  // map_characters self: (idx chr)
  var_map_characters, 2, var_1131_0_self, lambda_205, TAIL_CALL,
  POS(1133, 3)
};

static TAB_NUM t_lambda_205[] = {
  2, // locals
  2, // parameters
  var_1133_22_idx,
  var_1133_26_chr,
  // 1 && self(idx-1).is_a_letter_character
  var_std__less, 2, num_1, var_1133_22_idx, 1, LOCAL(1),
  // 1 && self(idx-1).is_a_letter_character
  var_std__and, 2, LOCAL(1), lambda_206, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_207, lambda_208, TAIL_CALL,
  POS(1135, 13),
  POS(1135, 13),
  POS(1134, 5)
};

static TAB_NUM t_lambda_206[] = {
  3, // locals
  0, // parameters
  // idx-1).is_a_letter_character
  var_std__minus, 2, var_1133_22_idx, num_1, 1, LOCAL(1),
  // self(idx-1).is_a_letter_character
  var_1131_0_self, 1, LOCAL(1), 1, LOCAL(2),
  // is_a_letter_character
  var_is_a_letter_character, 1, LOCAL(2), 1, LOCAL(3),
  // self(idx-1).is_a_letter_character
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(1135, 23),
  POS(1135, 18),
  POS(1135, 30),
  POS(1135, 18)
};

static TAB_NUM t_lambda_207[] = {
  1, // locals
  0, // parameters
  // to_lower_case
  var_to_lower_case, 1, var_1133_26_chr, 1, LOCAL(1),
  //  chr.to_lower_case
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1136, 14),
  POS(1136, 9)
};

static TAB_NUM t_lambda_208[] = {
  1, // locals
  0, // parameters
  // to_title_case
  var_to_title_case, 1, var_1133_26_chr, 1, LOCAL(1),
  //  chr.to_title_case
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1137, 14),
  POS(1137, 9)
};

static TAB_NUM t_func_std_types__string___to_sentence_case[] = {
  0, // locals
  1, // parameters
  var_1147_0_self,
  // map_characters self: (idx chr)
  var_map_characters, 2, var_1147_0_self, lambda_209, TAIL_CALL,
  POS(1149, 3)
};

static TAB_NUM t_lambda_209[] = {
  2, // locals
  2, // parameters
  var_1149_22_idx,
  var_1149_26_chr,
  // idx == 1 && self(idx).is_a_letter_character
  var_std__equal, 2, var_1149_22_idx, num_1, 1, LOCAL(1),
  // idx == 1 && self(idx).is_a_letter_character
  var_std__and, 2, LOCAL(1), lambda_210, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_211, lambda_212, TAIL_CALL,
  POS(1151, 7),
  POS(1151, 7),
  POS(1150, 5)
};

static TAB_NUM t_lambda_210[] = {
  2, // locals
  0, // parameters
  // self(idx).is_a_letter_character
  var_1147_0_self, 1, var_1149_22_idx, 1, LOCAL(1),
  // is_a_letter_character
  var_is_a_letter_character, 1, LOCAL(1), 1, LOCAL(2),
  // self(idx).is_a_letter_character
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1151, 19),
  POS(1151, 29),
  POS(1151, 19)
};

static TAB_NUM t_lambda_211[] = {
  1, // locals
  0, // parameters
  // to_title_case
  var_to_title_case, 1, var_1149_26_chr, 1, LOCAL(1),
  //  chr.to_title_case
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1152, 14),
  POS(1152, 9)
};

static TAB_NUM t_lambda_212[] = {
  1, // locals
  0, // parameters
  // to_lower_case
  var_to_lower_case, 1, var_1149_26_chr, 1, LOCAL(1),
  //  chr.to_lower_case
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1153, 14),
  POS(1153, 9)
};

static TAB_NUM t_func_std__delete_all[] = {
  1, // locals
  -2, // parameters
  MANDATORY_PARAMETER, LOCAL(1), // 1159_0_text
  REST_PARAMETER, var_1160_0_expressions,
  // $new_text ""
  LET, 1, string_1, 1, var_1176_1_new_text,
  // delete_all text
  func_delete_all, 1, LOCAL(1), TAIL_CALL,
  POS(1176, 3),
  POS(1177, 3)
};

static TAB_NUM t_func_delete_all[] = {
  1, // locals
  1, // parameters
  var_1162_14_txt,
  // is_empty
  var_is_empty, 1, var_1162_14_txt, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_213, lambda_214, TAIL_CALL,
  POS(1164, 11),
  POS(1163, 5)
};

static TAB_NUM t_lambda_213[] = {
  0, // locals
  0, // parameters
  //  new_text
  LET, 1, var_1176_1_new_text, TAIL_CALL,
  POS(1165, 9)
};

static TAB_NUM t_lambda_214[] = {
  0, // locals
  0, // parameters
  // for_each expressions
  var_for_each, 3, var_1160_0_expressions, lambda_215, lambda_217, TAIL_CALL,
  POS(1167, 9)
};

static TAB_NUM t_lambda_215[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 1168_3_expression
  // $len match(expression txt)
  var_match, 2, LOCAL(2), var_1162_14_txt, 1, var_1169_1_len,
  // is_defined next:
  var_is_defined, 1, var_1169_1_len, 1, LOCAL(1),
  // if_not len.is_defined next:
  var_if_not, 3, LOCAL(1), var_next, lambda_216, TAIL_CALL,
  POS(1169, 13),
  POS(1170, 24),
  POS(1170, 13)
};

static TAB_NUM t_lambda_216[] = {
  2, // locals
  0, // parameters
  // len+1 -1)
  var_std__plus, 2, var_1169_1_len, num_1, 1, LOCAL(1),
  // range(txt len+1 -1)
  var_range, 3, var_1162_14_txt, LOCAL(1), minus_num_1, 1, LOCAL(2),
  // delete_all range(txt len+1 -1)
  func_delete_all, 1, LOCAL(2), TAIL_CALL,
  POS(1171, 36),
  POS(1171, 26),
  POS(1171, 15)
};

static TAB_NUM t_lambda_217[] = {
  1, // locals
  0, // parameters
  // txt(1)
  var_1162_14_txt, 1, num_1, 1, LOCAL(1),
  // push &new_text txt(1)
  var_push, 2, var_1176_1_new_text, LOCAL(1), 1, var_1176_1_new_text,
  // range(txt 2 -1)
  var_range, 3, var_1162_14_txt, num_2, minus_num_1, 1, LOCAL(1),
  // delete_all range(txt 2 -1)
  func_delete_all, 1, LOCAL(1), TAIL_CALL,
  POS(1173, 28),
  POS(1173, 13),
  POS(1174, 24),
  POS(1174, 13)
};

static TAB_NUM t_func_std__replace_all[] = {
  1, // locals
  -2, // parameters
  MANDATORY_PARAMETER, LOCAL(1), // 1184_0_text
  REST_PARAMETER, var_1185_0_args,
  // $new_text ""
  LET, 1, string_1, 1, var_1208_1_new_text,
  // replace_all text
  func_replace_all, 1, LOCAL(1), TAIL_CALL,
  POS(1208, 3),
  POS(1209, 3)
};

static TAB_NUM t_func_replace_all[] = {
  1, // locals
  1, // parameters
  var_1187_15_txt,
  // is_empty
  var_is_empty, 1, var_1187_15_txt, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_218, lambda_219, TAIL_CALL,
  POS(1189, 11),
  POS(1188, 5)
};

static TAB_NUM t_lambda_218[] = {
  0, // locals
  0, // parameters
  //  new_text
  LET, 1, var_1208_1_new_text, TAIL_CALL,
  POS(1190, 9)
};

static TAB_NUM t_lambda_219[] = {
  0, // locals
  0, // parameters
  // for_each args
  var_for_each, 3, var_1185_0_args, lambda_220, lambda_223, TAIL_CALL,
  POS(1192, 9)
};

static TAB_NUM t_lambda_220[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 1193_3_arg
  // arg $expression $replacement
  LOCAL(2), 0, 2, LOCAL(3), var_1194_17_replacement,
  // $len match(expression txt)
  var_match, 2, LOCAL(3), var_1187_15_txt, 1, var_1195_1_len,
  // is_defined next:
  var_is_defined, 1, var_1195_1_len, 1, LOCAL(1),
  // if_not len.is_defined next:
  var_if_not, 3, LOCAL(1), var_next, lambda_221, TAIL_CALL,
  POS(1194, 13),
  POS(1195, 13),
  POS(1196, 24),
  POS(1196, 13)
};

static TAB_NUM t_lambda_221[] = {
  1, // locals
  0, // parameters
  // is_a_string:
  var_is_a_string, 1, var_1194_17_replacement, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_replacement_is_a_string, lambda_222, TAIL_CALL,
  POS(1198, 29),
  POS(1197, 15)
};

static TAB_NUM t_lambda_replacement_is_a_string[] = {
  2, // locals
  0, // parameters
  // append &new_text replacement
  var_append, 2, var_1208_1_new_text, var_1194_17_replacement, 1, var_1208_1_new_text,
  // len+1 -1)
  var_std__plus, 2, var_1195_1_len, num_1, 1, LOCAL(1),
  // range(txt len+1 -1)
  var_range, 3, var_1187_15_txt, LOCAL(1), minus_num_1, 1, LOCAL(2),
  // replace_all range(txt len+1 -1)
  func_replace_all, 1, LOCAL(2), TAIL_CALL,
  POS(1199, 19),
  POS(1200, 41),
  POS(1200, 31),
  POS(1200, 19)
};

static TAB_NUM t_lambda_222[] = {
  2, // locals
  0, // parameters
  // range(txt 1 len))
  var_range, 3, var_1187_15_txt, num_1, var_1195_1_len, 1, LOCAL(1),
  // replacement(range(txt 1 len))
  var_1194_17_replacement, 1, LOCAL(1), 1, LOCAL(2),
  // append &new_text replacement(range(txt 1 len))
  var_append, 2, var_1208_1_new_text, LOCAL(2), 1, var_1208_1_new_text,
  // len+1 -1)
  var_std__plus, 2, var_1195_1_len, num_1, 1, LOCAL(1),
  // range(txt len+1 -1)
  var_range, 3, var_1187_15_txt, LOCAL(1), minus_num_1, 1, LOCAL(2),
  // replace_all range(txt len+1 -1)
  func_replace_all, 1, LOCAL(2), TAIL_CALL,
  POS(1202, 48),
  POS(1202, 36),
  POS(1202, 19),
  POS(1203, 41),
  POS(1203, 31),
  POS(1203, 19)
};

static TAB_NUM t_lambda_223[] = {
  1, // locals
  0, // parameters
  // txt(1)
  var_1187_15_txt, 1, num_1, 1, LOCAL(1),
  // push &new_text txt(1)
  var_push, 2, var_1208_1_new_text, LOCAL(1), 1, var_1208_1_new_text,
  // range(txt 2 -1)
  var_range, 3, var_1187_15_txt, num_2, minus_num_1, 1, LOCAL(1),
  // replace_all range(txt 2 -1)
  func_replace_all, 1, LOCAL(1), TAIL_CALL,
  POS(1205, 28),
  POS(1205, 13),
  POS(1206, 25),
  POS(1206, 13)
};

static TAB_NUM t_func_std__replace_first[] = {
  1, // locals
  -2, // parameters
  MANDATORY_PARAMETER, LOCAL(1), // 1216_0_text
  REST_PARAMETER, var_1217_0_args,
  // $new_text ""
  LET, 1, string_1, 1, var_1239_1_new_text,
  // replace_first text
  func_replace_first, 1, LOCAL(1), TAIL_CALL,
  POS(1239, 3),
  POS(1240, 3)
};

static TAB_NUM t_func_replace_first[] = {
  1, // locals
  1, // parameters
  var_1219_17_txt,
  // is_empty
  var_is_empty, 1, var_1219_17_txt, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_224, lambda_225, TAIL_CALL,
  POS(1221, 11),
  POS(1220, 5)
};

static TAB_NUM t_lambda_224[] = {
  0, // locals
  0, // parameters
  //  new_text
  LET, 1, var_1239_1_new_text, TAIL_CALL,
  POS(1222, 9)
};

static TAB_NUM t_lambda_225[] = {
  0, // locals
  0, // parameters
  // for_each args
  var_for_each, 3, var_1217_0_args, lambda_226, lambda_229, TAIL_CALL,
  POS(1224, 9)
};

static TAB_NUM t_lambda_226[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 1225_3_arg
  // arg $expression $replacement
  LOCAL(2), 0, 2, LOCAL(3), var_1226_17_replacement,
  // $len match(expression txt)
  var_match, 2, LOCAL(3), var_1219_17_txt, 1, var_1227_1_len,
  // is_defined
  var_is_defined, 1, var_1227_1_len, 1, LOCAL(1),
  // if_not
  var_if_not, 3, LOCAL(1), var_next, lambda_227, TAIL_CALL,
  POS(1226, 13),
  POS(1227, 13),
  POS(1229, 19),
  POS(1228, 13)
};

static TAB_NUM t_lambda_227[] = {
  3, // locals
  0, // parameters
  // is_a_string &replacement
  var_is_a_string, 1, var_1226_17_replacement, 1, LOCAL(1),
  // update_if_not replacement.is_a_string &replacement
  var_update_if_not, 3, LOCAL(1), var_1226_17_replacement, lambda_228, 1, var_1226_17_replacement,
  // len+1 -1))
  var_std__plus, 2, var_1227_1_len, num_1, 1, LOCAL(1),
  // range(txt len+1 -1))
  var_range, 3, var_1219_17_txt, LOCAL(1), minus_num_1, 1, LOCAL(2),
  // append(new_text replacement range(txt len+1 -1))
  var_append, 3, var_1239_1_new_text, var_1226_17_replacement, LOCAL(2), 1, LOCAL(3),
  // -> append(new_text replacement range(txt len+1 -1))
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(1232, 43),
  POS(1232, 17),
  POS(1234, 58),
  POS(1234, 48),
  POS(1234, 20),
  POS(1234, 17)
};

static TAB_NUM t_lambda_228[] = {
  2, // locals
  0, // parameters
  // range(txt 1 len))
  var_range, 3, var_1219_17_txt, num_1, var_1227_1_len, 1, LOCAL(1),
  // replacement(range(txt 1 len))
  var_1226_17_replacement, 1, LOCAL(1), 1, LOCAL(2),
  //  replacement(range(txt 1 len))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1233, 34),
  POS(1233, 22),
  POS(1233, 21)
};

static TAB_NUM t_lambda_229[] = {
  1, // locals
  0, // parameters
  // txt(1)
  var_1219_17_txt, 1, num_1, 1, LOCAL(1),
  // push &new_text txt(1)
  var_push, 2, var_1239_1_new_text, LOCAL(1), 1, var_1239_1_new_text,
  // range(txt 2 -1)
  var_range, 3, var_1219_17_txt, num_2, minus_num_1, 1, LOCAL(1),
  // replace_first range(txt 2 -1)
  func_replace_first, 1, LOCAL(1), TAIL_CALL,
  POS(1236, 28),
  POS(1236, 13),
  POS(1237, 27),
  POS(1237, 13)
};

static TAB_NUM t_func_std__count_occurrences[] = {
  1, // locals
  2, // parameters
  LOCAL(1), // 1246_0_text
  var_1247_0_expr,
  // search_next text 0
  func_search_next, 2, LOCAL(1), num_0, TAIL_CALL,
  POS(1261, 3)
};

static TAB_NUM t_func_search_next[] = {
  1, // locals
  2, // parameters
  var_1249_15_txt,
  var_1249_19_count,
  // txt == ""
  var_std__equal, 2, var_1249_15_txt, string_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_230, lambda_231, TAIL_CALL,
  POS(1251, 7),
  POS(1250, 5)
};

static TAB_NUM t_lambda_230[] = {
  0, // locals
  0, // parameters
  //  count
  LET, 1, var_1249_19_count, TAIL_CALL,
  POS(1252, 9)
};

static TAB_NUM t_lambda_231[] = {
  1, // locals
  0, // parameters
  // $n match(expr txt)
  var_match, 2, var_1247_0_expr, var_1249_15_txt, 1, var_1254_1_n,
  // is_defined:
  var_is_defined, 1, var_1254_1_n, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_n_is_defined, lambda_232, TAIL_CALL,
  POS(1254, 9),
  POS(1256, 13),
  POS(1255, 9)
};

static TAB_NUM t_lambda_n_is_defined[] = {
  3, // locals
  0, // parameters
  // n+1 -1) count+1
  var_std__plus, 2, var_1254_1_n, num_1, 1, LOCAL(1),
  // range(txt n+1 -1) count+1
  var_range, 3, var_1249_15_txt, LOCAL(1), minus_num_1, 1, LOCAL(2),
  // count+1
  var_std__plus, 2, var_1249_19_count, num_1, 1, LOCAL(3),
  // search_next range(txt n+1 -1) count+1
  func_search_next, 2, LOCAL(2), LOCAL(3), TAIL_CALL,
  POS(1257, 35),
  POS(1257, 25),
  POS(1257, 43),
  POS(1257, 13)
};

static TAB_NUM t_lambda_232[] = {
  1, // locals
  0, // parameters
  // range(txt 2 -1) count
  var_range, 3, var_1249_15_txt, num_2, minus_num_1, 1, LOCAL(1),
  // search_next range(txt 2 -1) count
  func_search_next, 2, LOCAL(1), var_1249_19_count, TAIL_CALL,
  POS(1259, 25),
  POS(1259, 13)
};

static TAB_NUM t_func_std__partition[] = {
  0, // locals
  -2, // parameters
  MANDATORY_PARAMETER, var_1273_0_text,
  REST_PARAMETER, var_1274_0_separators,
  // $n length_of(text)
  var_length_of, 1, var_1273_0_text, 1, var_1276_1_n,
  // partition 1 n
  func_partition, 2, num_1, var_1276_1_n, TAIL_CALL,
  POS(1276, 3),
  POS(1277, 3)
};

static TAB_NUM t_func_partition[] = {
  3, // locals
  2, // parameters
  var_1279_13_s,
  var_1279_15_e,
  // e+1-s > FORK_TEXT_THRESHOLD: # recurse to exploit parallel execution
  var_std__plus, 2, var_1279_15_e, num_1, 1, LOCAL(1),
  // e+1-s > FORK_TEXT_THRESHOLD: # recurse to exploit parallel execution
  var_std__minus, 2, LOCAL(1), var_1279_13_s, 1, LOCAL(2),
  // FORK_TEXT_THRESHOLD: # recurse to exploit parallel execution
  var_std__less, 2, num_300, LOCAL(2), 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_233, lambda_234, TAIL_CALL,
  POS(1281, 7),
  POS(1281, 7),
  POS(1281, 15),
  POS(1280, 5)
};

static TAB_NUM t_lambda_233[] = {
  4, // locals
  0, // parameters
  // s+e) .div. 2
  var_std__plus, 2, var_1279_13_s, var_1279_15_e, 1, LOCAL(1),
  // $m (s+e) .div. 2
  var_div, 2, LOCAL(1), num_2, 1, LOCAL(4),
  // partition(s m) partition(m+1 e)
  func_partition, 2, var_1279_13_s, LOCAL(4), 1, LOCAL(1),
  // m+1 e)
  var_std__plus, 2, LOCAL(4), num_1, 1, LOCAL(2),
  // partition(m+1 e)
  func_partition, 2, LOCAL(2), var_1279_15_e, 1, LOCAL(3),
  // append partition(s m) partition(m+1 e)
  var_append, 2, LOCAL(1), LOCAL(3), TAIL_CALL,
  POS(1282, 13),
  POS(1282, 9),
  POS(1283, 16),
  POS(1283, 41),
  POS(1283, 31),
  POS(1283, 9)
};

static TAB_NUM t_lambda_234[] = {
  0, // locals
  0, // parameters
  // $parts empty_list
  LET, 1, var_empty_list, 1, var_1285_1_parts,
  // $ls undefined
  LET, 1, var_undefined, 1, var_1286_1_ls,
  // from_to s e
  var_from_to, 4, var_1279_13_s, var_1279_15_e, lambda_235, lambda_238, TAIL_CALL,
  POS(1285, 9),
  POS(1286, 9),
  POS(1287, 9)
};

static TAB_NUM t_lambda_235[] = {
  2, // locals
  1, // parameters
  var_1288_3_i,
  // text(i)) next:
  var_1273_0_text, 1, var_1288_3_i, 1, LOCAL(1),
  // any_of(separators equal text(i)) next:
  var_any_of, 3, var_1274_0_separators, var_equal, LOCAL(1), 1, LOCAL(2),
  // if_not any_of(separators equal text(i)) next:
  var_if_not, 3, LOCAL(2), var_next, lambda_236, TAIL_CALL,
  POS(1289, 44),
  POS(1289, 20),
  POS(1289, 13)
};

static TAB_NUM t_lambda_236[] = {
  1, // locals
  0, // parameters
  // is_defined:
  var_is_defined, 1, var_1286_1_ls, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_ls_is_defined, lambda_237, TAIL_CALL,
  POS(1291, 20),
  POS(1290, 15)
};

static TAB_NUM t_lambda_ls_is_defined[] = {
  2, // locals
  0, // parameters
  // i-1)
  var_std__minus, 2, var_1288_3_i, num_1, 1, LOCAL(1),
  // range(text ls i-1)
  var_range, 3, var_1273_0_text, var_1286_1_ls, LOCAL(1), 1, LOCAL(2),
  // push &parts range(text ls i-1)
  var_push, 2, var_1285_1_parts, LOCAL(2), 1, var_1285_1_parts,
  // !ls i
  LET, 1, var_1288_3_i, 1, var_1286_1_ls,
  // next
  var_next, 0, TAIL_CALL,
  POS(1292, 45),
  POS(1292, 31),
  POS(1292, 19),
  POS(1293, 19),
  POS(1294, 19)
};

static TAB_NUM t_lambda_237[] = {
  0, // locals
  0, // parameters
  // !ls i
  LET, 1, var_1288_3_i, 1, var_1286_1_ls,
  // next
  var_next, 0, TAIL_CALL,
  POS(1296, 19),
  POS(1297, 19)
};

static TAB_NUM t_lambda_238[] = {
  2, // locals
  0, // parameters
  // is_defined && ls <= e:
  var_is_defined, 1, var_1286_1_ls, 1, LOCAL(1),
  // is_defined && ls <= e:
  var_std__and, 2, LOCAL(1), lambda_239, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_240, lambda_244, TAIL_CALL,
  POS(1300, 18),
  POS(1300, 18),
  POS(1299, 13)
};

static TAB_NUM t_lambda_239[] = {
  2, // locals
  0, // parameters
  // e:
  var_std__less, 2, var_1279_15_e, var_1286_1_ls, 1, LOCAL(1),
  // e:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // ls <= e:
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1300, 38),
  POS(1300, 38),
  POS(1300, 32)
};

static TAB_NUM t_lambda_240[] = {
  1, // locals
  0, // parameters
  // e == n:
  var_std__equal, 2, var_1279_15_e, var_1276_1_n, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_241, lambda_242, TAIL_CALL,
  POS(1302, 19),
  POS(1301, 17)
};

static TAB_NUM t_lambda_241[] = {
  2, // locals
  0, // parameters
  // range(text ls e))
  var_range, 3, var_1273_0_text, var_1286_1_ls, var_1279_15_e, 1, LOCAL(1),
  // push(parts range(text ls e))
  var_push, 2, var_1285_1_parts, LOCAL(1), 1, LOCAL(2),
  // -> push(parts range(text ls e))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1303, 35),
  POS(1303, 24),
  POS(1303, 21)
};

static TAB_NUM t_lambda_242[] = {
  0, // locals
  0, // parameters
  // loop: # the last part extends into the next block
  var_loop, 1, lambda_11_loop, TAIL_CALL,
  POS(1305, 21)
};

static TAB_NUM t_lambda_11_loop[] = {
  2, // locals
  0, // parameters
  // !e e+1
  var_std__plus, 2, var_1279_15_e, num_1, 1, var_1279_15_e,
  // text(e))
  var_1273_0_text, 1, var_1279_15_e, 1, LOCAL(1),
  // any_of(separators equal text(e))
  var_any_of, 3, var_1274_0_separators, var_equal, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_243, var_next, TAIL_CALL,
  POS(1306, 23),
  POS(1308, 49),
  POS(1308, 25),
  POS(1307, 23)
};

static TAB_NUM t_lambda_243[] = {
  3, // locals
  0, // parameters
  // e-1))
  var_std__minus, 2, var_1279_15_e, num_1, 1, LOCAL(1),
  // range(text ls e-1))
  var_range, 3, var_1273_0_text, var_1286_1_ls, LOCAL(1), 1, LOCAL(2),
  // push(parts range(text ls e-1))
  var_push, 2, var_1285_1_parts, LOCAL(2), 1, LOCAL(3),
  //  push(parts range(text ls e-1))
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(1309, 53),
  POS(1309, 39),
  POS(1309, 28),
  POS(1309, 27)
};

static TAB_NUM t_lambda_244[] = {
  0, // locals
  0, // parameters
  //  parts
  LET, 1, var_1285_1_parts, TAIL_CALL,
  POS(1311, 17)
};

static TAB_NUM t_func_std__split_into_lines[] = {
  0, // locals
  1, // parameters
  var_1353_25_text,
  // $lines empty_list
  LET, 1, var_empty_list, 1, var_1354_1_lines,
  // $i 1
  LET, 1, num_1, 1, var_1355_1_i,
  // $n length_of(text)
  var_length_of, 1, var_1353_25_text, 1, var_1356_1_n,
  // $s i
  LET, 1, var_1355_1_i, 1, var_1357_1_s,
  // loop:
  var_loop, 1, lambda_12_loop, TAIL_CALL,
  POS(1354, 3),
  POS(1355, 3),
  POS(1356, 3),
  POS(1357, 3),
  POS(1358, 3)
};

static TAB_NUM t_lambda_12_loop[] = {
  1, // locals
  0, // parameters
  // n
  var_std__less, 2, var_1356_1_n, var_1355_1_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_245, lambda_248, TAIL_CALL,
  POS(1360, 11),
  POS(1359, 5)
};

static TAB_NUM t_lambda_245[] = {
  3, // locals
  0, // parameters
  // n
  var_std__less, 2, var_1356_1_n, var_1357_1_s, 1, LOCAL(1),
  // n
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_246, lambda_247, 1, LOCAL(3),
  // 
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(1363, 16),
  POS(1363, 16),
  POS(1362, 9),
  POS(1361, 9)
};

static TAB_NUM t_lambda_246[] = {
  2, // locals
  0, // parameters
  // range(text s n))
  var_range, 3, var_1353_25_text, var_1357_1_s, var_1356_1_n, 1, LOCAL(1),
  // push(lines range(text s n))
  var_push, 2, var_1354_1_lines, LOCAL(1), 1, LOCAL(2),
  //  push(lines range(text s n))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1364, 25),
  POS(1364, 14),
  POS(1364, 13)
};

static TAB_NUM t_lambda_247[] = {
  0, // locals
  0, // parameters
  //  lines
  LET, 1, var_1354_1_lines, TAIL_CALL,
  POS(1365, 13)
};

static TAB_NUM t_lambda_248[] = {
  2, // locals
  0, // parameters
  // text(i) == '@nl;':
  var_1353_25_text, 1, var_1355_1_i, 1, LOCAL(1),
  // text(i) == '@nl;':
  var_std__equal, 2, LOCAL(1), chr_10, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_249, lambda_250, TAIL_CALL,
  POS(1368, 11),
  POS(1368, 11),
  POS(1367, 9)
};

static TAB_NUM t_lambda_249[] = {
  1, // locals
  0, // parameters
  // range(text s i)
  var_range, 3, var_1353_25_text, var_1357_1_s, var_1355_1_i, 1, LOCAL(1),
  // push &lines range(text s i)
  var_push, 2, var_1354_1_lines, LOCAL(1), 1, var_1354_1_lines,
  // !i i+1
  var_std__plus, 2, var_1355_1_i, num_1, 1, var_1355_1_i,
  // !s i
  LET, 1, var_1355_1_i, 1, var_1357_1_s,
  // next
  var_next, 0, TAIL_CALL,
  POS(1369, 25),
  POS(1369, 13),
  POS(1370, 13),
  POS(1371, 13),
  POS(1372, 13)
};

static TAB_NUM t_lambda_250[] = {
  0, // locals
  0, // parameters
  // !i i+1
  var_std__plus, 2, var_1355_1_i, num_1, 1, var_1355_1_i,
  // next
  var_next, 0, TAIL_CALL,
  POS(1374, 13),
  POS(1375, 13)
};

static TAB_NUM t_func_std__split_into_indented_lines[] = {
  1, // locals
  1, // parameters
  var_1395_0_text,
  // $n length_of(text)
  var_length_of, 1, var_1395_0_text, 1, LOCAL(1),
  // split 1 n
  func_split, 2, num_1, LOCAL(1), TAIL_CALL,
  POS(1397, 3),
  POS(1398, 3)
};

static TAB_NUM t_func_split[] = {
  3, // locals
  2, // parameters
  var_1400_9_s,
  var_1400_11_e,
  // e+1-s > FORK_TEXT_THRESHOLD: # recurse to exploit parallel execution
  var_std__plus, 2, var_1400_11_e, num_1, 1, LOCAL(1),
  // e+1-s > FORK_TEXT_THRESHOLD: # recurse to exploit parallel execution
  var_std__minus, 2, LOCAL(1), var_1400_9_s, 1, LOCAL(2),
  // FORK_TEXT_THRESHOLD: # recurse to exploit parallel execution
  var_std__less, 2, num_300, LOCAL(2), 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_251, lambda_252, TAIL_CALL,
  POS(1402, 7),
  POS(1402, 7),
  POS(1402, 15),
  POS(1401, 5)
};

static TAB_NUM t_lambda_251[] = {
  4, // locals
  0, // parameters
  // s+e) .div. 2
  var_std__plus, 2, var_1400_9_s, var_1400_11_e, 1, LOCAL(1),
  // $m (s+e) .div. 2
  var_div, 2, LOCAL(1), num_2, 1, LOCAL(4),
  // split(s m) split(m+1 e)
  func_split, 2, var_1400_9_s, LOCAL(4), 1, LOCAL(1),
  // m+1 e)
  var_std__plus, 2, LOCAL(4), num_1, 1, LOCAL(2),
  // split(m+1 e)
  func_split, 2, LOCAL(2), var_1400_11_e, 1, LOCAL(3),
  // append split(s m) split(m+1 e)
  var_append, 2, LOCAL(1), LOCAL(3), TAIL_CALL,
  POS(1403, 13),
  POS(1403, 9),
  POS(1404, 16),
  POS(1404, 33),
  POS(1404, 27),
  POS(1404, 9)
};

static TAB_NUM t_lambda_252[] = {
  2, // locals
  0, // parameters
  // $lines empty_list
  LET, 1, var_empty_list, 1, var_1406_1_lines,
  // s == 1 || text(s-1) == '@nl;'
  var_std__equal, 2, var_1400_9_s, num_1, 1, LOCAL(1),
  // s == 1 || text(s-1) == '@nl;'
  var_std__or, 2, LOCAL(1), lambda_253, 1, LOCAL(2),
  // $ls
  var_if, 3, LOCAL(2), lambda_254, lambda_255, 1, var_1407_1_ls,
  // from_to s e
  var_from_to, 4, var_1400_9_s, var_1400_11_e, lambda_256, lambda_259, TAIL_CALL,
  POS(1406, 9),
  POS(1409, 13),
  POS(1409, 13),
  POS(1407, 9),
  POS(1412, 9)
};

static TAB_NUM t_lambda_253[] = {
  3, // locals
  0, // parameters
  // s-1) == '@nl;'
  var_std__minus, 2, var_1400_9_s, num_1, 1, LOCAL(1),
  // text(s-1) == '@nl;'
  var_1395_0_text, 1, LOCAL(1), 1, LOCAL(2),
  // text(s-1) == '@nl;'
  var_std__equal, 2, LOCAL(2), chr_10, 1, LOCAL(3),
  // text(s-1) == '@nl;'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(1409, 28),
  POS(1409, 23),
  POS(1409, 23),
  POS(1409, 23)
};

static TAB_NUM t_lambda_254[] = {
  0, // locals
  0, // parameters
  //  s # the current block starts at a line start
  LET, 1, var_1400_9_s, TAIL_CALL,
  POS(1410, 15)
};

static TAB_NUM t_lambda_255[] = {
  0, // locals
  0, // parameters
  //  undefined # just skip the characters until the next line start
  LET, 1, var_undefined, TAIL_CALL,
  POS(1411, 15)
};

static TAB_NUM t_lambda_256[] = {
  2, // locals
  1, // parameters
  var_1413_3_i,
  // text(i) == '@nl;' next:
  var_1395_0_text, 1, var_1413_3_i, 1, LOCAL(1),
  // text(i) == '@nl;' next:
  var_std__equal, 2, LOCAL(1), chr_10, 1, LOCAL(2),
  // if_not text(i) == '@nl;' next:
  var_if_not, 3, LOCAL(2), var_next, lambda_257, TAIL_CALL,
  POS(1414, 20),
  POS(1414, 20),
  POS(1414, 13)
};

static TAB_NUM t_lambda_257[] = {
  1, // locals
  0, // parameters
  // is_defined:
  var_is_defined, 1, var_1407_1_ls, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_2_ls_is_defined, lambda_258, TAIL_CALL,
  POS(1416, 20),
  POS(1415, 15)
};

static TAB_NUM t_lambda_2_ls_is_defined[] = {
  1, // locals
  0, // parameters
  // create_line(ls i)
  func_create_line, 2, var_1407_1_ls, var_1413_3_i, 1, LOCAL(1),
  // push &lines create_line(ls i)
  var_push, 2, var_1406_1_lines, LOCAL(1), 1, var_1406_1_lines,
  // !ls i+1
  var_std__plus, 2, var_1413_3_i, num_1, 1, var_1407_1_ls,
  // next
  var_next, 0, TAIL_CALL,
  POS(1417, 31),
  POS(1417, 19),
  POS(1418, 19),
  POS(1419, 19)
};

static TAB_NUM t_lambda_258[] = {
  0, // locals
  0, // parameters
  // !ls i+1
  var_std__plus, 2, var_1413_3_i, num_1, 1, var_1407_1_ls,
  // next
  var_next, 0, TAIL_CALL,
  POS(1421, 19),
  POS(1422, 19)
};

static TAB_NUM t_lambda_259[] = {
  2, // locals
  0, // parameters
  // is_defined && ls <= e:
  var_is_defined, 1, var_1407_1_ls, 1, LOCAL(1),
  // is_defined && ls <= e:
  var_std__and, 2, LOCAL(1), lambda_260, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_261, lambda_263, TAIL_CALL,
  POS(1425, 18),
  POS(1425, 18),
  POS(1424, 13)
};

static TAB_NUM t_lambda_260[] = {
  2, // locals
  0, // parameters
  // e:
  var_std__less, 2, var_1400_11_e, var_1407_1_ls, 1, LOCAL(1),
  // e:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // ls <= e:
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1425, 38),
  POS(1425, 38),
  POS(1425, 32)
};

static TAB_NUM t_lambda_261[] = {
  0, // locals
  0, // parameters
  // loop: # the last line extends into the next block
  var_loop, 1, lambda_13_loop, TAIL_CALL,
  POS(1426, 17)
};

static TAB_NUM t_lambda_13_loop[] = {
  2, // locals
  0, // parameters
  // !e e+1
  var_std__plus, 2, var_1400_11_e, num_1, 1, var_1400_11_e,
  // text(e) == '@nl;'
  var_1395_0_text, 1, var_1400_11_e, 1, LOCAL(1),
  // text(e) == '@nl;'
  var_std__equal, 2, LOCAL(1), chr_10, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_262, var_next, TAIL_CALL,
  POS(1427, 19),
  POS(1429, 21),
  POS(1429, 21),
  POS(1428, 19)
};

static TAB_NUM t_lambda_262[] = {
  2, // locals
  0, // parameters
  // create_line(ls e))
  func_create_line, 2, var_1407_1_ls, var_1400_11_e, 1, LOCAL(1),
  // push(lines create_line(ls e))
  var_push, 2, var_1406_1_lines, LOCAL(1), 1, LOCAL(2),
  //  push(lines create_line(ls e))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1430, 35),
  POS(1430, 24),
  POS(1430, 23)
};

static TAB_NUM t_lambda_263[] = {
  0, // locals
  0, // parameters
  //  lines
  LET, 1, var_1406_1_lines, TAIL_CALL,
  POS(1432, 17)
};

static TAB_NUM t_func_create_line[] = {
  0, // locals
  2, // parameters
  var_1434_15_s,
  var_1434_17_e,
  // $indent 0
  LET, 1, num_0, 1, var_1435_1_indent,
  // loop:
  var_loop, 1, lambda_14_loop, TAIL_CALL,
  POS(1435, 5),
  POS(1436, 5)
};

static TAB_NUM t_lambda_14_loop[] = {
  2, // locals
  0, // parameters
  // text(s) == '@ht;':
  var_1395_0_text, 1, var_1434_15_s, 1, LOCAL(1),
  // text(s) == '@ht;':
  var_std__equal, 2, LOCAL(1), chr_9, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_264, lambda_265, TAIL_CALL,
  POS(1438, 9),
  POS(1438, 9),
  POS(1437, 7)
};

static TAB_NUM t_lambda_264[] = {
  0, // locals
  0, // parameters
  // !indent indent+8
  var_std__plus, 2, var_1435_1_indent, num_8, 1, var_1435_1_indent,
  // !s s+1
  var_std__plus, 2, var_1434_15_s, num_1, 1, var_1434_15_s,
  // next
  var_next, 0, TAIL_CALL,
  POS(1439, 11),
  POS(1440, 11),
  POS(1441, 11)
};

static TAB_NUM t_lambda_265[] = {
  2, // locals
  0, // parameters
  // text(s) == ' ':
  var_1395_0_text, 1, var_1434_15_s, 1, LOCAL(1),
  // text(s) == ' ':
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_266, lambda_267, TAIL_CALL,
  POS(1444, 13),
  POS(1444, 13),
  POS(1443, 11)
};

static TAB_NUM t_lambda_266[] = {
  0, // locals
  0, // parameters
  // !indent indent+1
  var_std__plus, 2, var_1435_1_indent, num_1, 1, var_1435_1_indent,
  // !s s+1
  var_std__plus, 2, var_1434_15_s, num_1, 1, var_1434_15_s,
  // next
  var_next, 0, TAIL_CALL,
  POS(1445, 15),
  POS(1446, 15),
  POS(1447, 15)
};

static TAB_NUM t_lambda_267[] = {
  1, // locals
  0, // parameters
  // $line_text range(text s e)
  var_range, 3, var_1395_0_text, var_1434_15_s, var_1434_17_e, 1, var_1449_1_line_text,
  // line_text == "@nl;"
  var_std__equal, 2, var_1449_1_line_text, string_7, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_268, lambda_269, TAIL_CALL,
  POS(1449, 15),
  POS(1451, 17),
  POS(1450, 15)
};

static TAB_NUM t_lambda_268[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(1452, 19)
};

static TAB_NUM t_lambda_269[] = {
  1, // locals
  0, // parameters
  // tuple(indent line_text)
  var_tuple, 2, var_1435_1_indent, var_1449_1_line_text, 1, LOCAL(1),
  //  tuple(indent line_text)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1453, 20),
  POS(1453, 19)
};

static TAB_NUM t_func_indent_of[] = {
  1, // locals
  1, // parameters
  var_1460_13_line,
  // is_defined
  var_is_defined, 1, var_1460_13_line, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_270, lambda_271, TAIL_CALL,
  POS(1462, 10),
  POS(1461, 3)
};

static TAB_NUM t_lambda_270[] = {
  1, // locals
  0, // parameters
  // first(line)
  var_first, 1, var_1460_13_line, 1, LOCAL(1),
  //  first(line)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1463, 8),
  POS(1463, 7)
};

static TAB_NUM t_lambda_271[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(1464, 7)
};

static TAB_NUM t_func_std__split_into_groups[] = {
  0, // locals
  1, // parameters
  var_1478_0_lines,
  // $n length_of(lines)
  var_length_of, 1, var_1478_0_lines, 1, var_1480_1_n,
  // $fv 1 # first valid line
  LET, 1, num_1, 1, var_1481_1_fv,
  // loop:
  var_loop, 1, lambda_15_loop, TAIL_CALL,
  POS(1480, 3),
  POS(1481, 3),
  POS(1482, 3)
};

static TAB_NUM t_lambda_15_loop[] = {
  2, // locals
  0, // parameters
  // n:
  var_std__less, 2, var_1480_1_n, var_1481_1_fv, 1, LOCAL(1),
  // n:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_272, lambda_274, TAIL_CALL,
  POS(1484, 13),
  POS(1484, 13),
  POS(1483, 5)
};

static TAB_NUM t_lambda_272[] = {
  1, // locals
  0, // parameters
  // lines(fv))
  var_1478_0_lines, 1, var_1481_1_fv, 1, LOCAL(1),
  // $indent indent_of(lines(fv))
  func_indent_of, 1, LOCAL(1), 1, var_1485_1_indent,
  // is_defined:
  var_is_defined, 1, var_1485_1_indent, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_indent_is_defined, lambda_273, TAIL_CALL,
  POS(1485, 27),
  POS(1485, 9),
  POS(1487, 18),
  POS(1486, 9)
};

static TAB_NUM t_lambda_indent_is_defined[] = {
  0, // locals
  0, // parameters
  // split fv n indent undefined
  func_2_split, 4, var_1481_1_fv, var_1480_1_n, var_1485_1_indent, var_undefined, TAIL_CALL,
  POS(1488, 13)
};

static TAB_NUM t_lambda_273[] = {
  0, // locals
  0, // parameters
  // !fv fv+1
  var_std__plus, 2, var_1481_1_fv, num_1, 1, var_1481_1_fv,
  // next
  var_next, 0, TAIL_CALL,
  POS(1490, 13),
  POS(1491, 13)
};

static TAB_NUM t_lambda_274[] = {
  0, // locals
  0, // parameters
  //  empty_list
  LET, 1, var_empty_list, TAIL_CALL,
  POS(1492, 9)
};

static TAB_NUM t_func_2_split[] = {
  3, // locals
  4, // parameters
  var_1494_9_s,
  var_1494_11_e,
  var_1494_13_indent,
  var_1494_20_gs,
  // e+1-s > FORK_LINES_THRESHOLD: # recurse to exploit parallel execution
  var_std__plus, 2, var_1494_11_e, num_1, 1, LOCAL(1),
  // e+1-s > FORK_LINES_THRESHOLD: # recurse to exploit parallel execution
  var_std__minus, 2, LOCAL(1), var_1494_9_s, 1, LOCAL(2),
  // FORK_LINES_THRESHOLD: # recurse to exploit parallel execution
  var_std__less, 2, num_20, LOCAL(2), 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_275, lambda_276, TAIL_CALL,
  POS(1496, 7),
  POS(1496, 7),
  POS(1496, 15),
  POS(1495, 5)
};

static TAB_NUM t_lambda_275[] = {
  4, // locals
  0, // parameters
  // s+e) .div. 2
  var_std__plus, 2, var_1494_9_s, var_1494_11_e, 1, LOCAL(1),
  // $m (s+e) .div. 2
  var_div, 2, LOCAL(1), num_2, 1, LOCAL(4),
  // split(s m indent gs) split(m+1 e indent undefined)
  func_2_split, 4, var_1494_9_s, LOCAL(4), var_1494_13_indent, var_1494_20_gs, 1, LOCAL(1),
  // m+1 e indent undefined)
  var_std__plus, 2, LOCAL(4), num_1, 1, LOCAL(2),
  // split(m+1 e indent undefined)
  func_2_split, 4, LOCAL(2), var_1494_11_e, var_1494_13_indent, var_undefined, 1, LOCAL(3),
  // append split(s m indent gs) split(m+1 e indent undefined)
  var_append, 2, LOCAL(1), LOCAL(3), TAIL_CALL,
  POS(1497, 13),
  POS(1497, 9),
  POS(1498, 16),
  POS(1498, 43),
  POS(1498, 37),
  POS(1498, 9)
};

static TAB_NUM t_lambda_276[] = {
  0, // locals
  0, // parameters
  // $groups empty_list
  LET, 1, var_empty_list, 1, var_1500_1_groups,
  // $minimum_indent VERY_LARGE_INDENT
  LET, 1, num_9999, 1, var_1501_1_minimum_indent,
  // $ge gs
  LET, 1, var_1494_20_gs, 1, var_1502_1_ge,
  // from_to s e
  var_from_to, 4, var_1494_9_s, var_1494_11_e, lambda_277, lambda_285, TAIL_CALL,
  POS(1500, 9),
  POS(1501, 9),
  POS(1502, 9),
  POS(1503, 9)
};

static TAB_NUM t_lambda_277[] = {
  1, // locals
  1, // parameters
  var_1504_3_i,
  // lines(i))
  var_1478_0_lines, 1, var_1504_3_i, 1, LOCAL(1),
  // $current_indent indent_of(lines(i))
  func_indent_of, 1, LOCAL(1), 1, var_1505_1_current_indent,
  // current_indent == indent:
  var_std__equal, 2, var_1505_1_current_indent, var_1494_13_indent, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_278, lambda_282, TAIL_CALL,
  POS(1505, 39),
  POS(1505, 13),
  POS(1507, 15),
  POS(1506, 13)
};

static TAB_NUM t_lambda_278[] = {
  2, // locals
  0, // parameters
  // is_defined && gs < i:
  var_is_defined, 1, var_1494_20_gs, 1, LOCAL(1),
  // is_defined && gs < i:
  var_std__and, 2, LOCAL(1), lambda_279, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_280, lambda_281, TAIL_CALL,
  POS(1509, 22),
  POS(1509, 22),
  POS(1508, 17)
};

static TAB_NUM t_lambda_279[] = {
  1, // locals
  0, // parameters
  // gs < i:
  var_std__less, 2, var_1494_20_gs, var_1504_3_i, 1, LOCAL(1),
  // gs < i:
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1509, 36),
  POS(1509, 36)
};

static TAB_NUM t_lambda_280[] = {
  0, // locals
  0, // parameters
  // add_groups !groups ge
  func_add_groups, 1, var_1502_1_ge, 1, var_1500_1_groups,
  // start_new_fragment_and_next i
  func_start_new_fragment_and_next, 1, var_1504_3_i, TAIL_CALL,
  POS(1510, 21),
  POS(1511, 21)
};

static TAB_NUM t_lambda_281[] = {
  0, // locals
  0, // parameters
  // start_new_fragment_and_next i
  func_start_new_fragment_and_next, 1, var_1504_3_i, TAIL_CALL,
  POS(1513, 21)
};

static TAB_NUM t_lambda_282[] = {
  1, // locals
  0, // parameters
  // is_defined
  var_is_defined, 1, var_1505_1_current_indent, 1, LOCAL(1),
  // !ge
  var_if, 3, LOCAL(1), lambda_283, lambda_284, 1, var_1502_1_ge,
  // reduce_minimum_indent_and_next current_indent
  func_reduce_minimum_indent_and_next, 1, var_1505_1_current_indent, TAIL_CALL,
  POS(1517, 36),
  POS(1515, 17),
  POS(1520, 17)
};

static TAB_NUM t_lambda_283[] = {
  0, // locals
  0, // parameters
  //  i
  LET, 1, var_1504_3_i, TAIL_CALL,
  POS(1518, 23)
};

static TAB_NUM t_lambda_284[] = {
  0, // locals
  0, // parameters
  //  ge
  LET, 1, var_1502_1_ge, TAIL_CALL,
  POS(1519, 23)
};

static TAB_NUM t_lambda_285[] = {
  1, // locals
  0, // parameters
  // is_defined:
  var_is_defined, 1, var_1494_20_gs, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_gs_is_defined, lambda_293, TAIL_CALL,
  POS(1523, 18),
  POS(1522, 13)
};

static TAB_NUM t_lambda_gs_is_defined[] = {
  0, // locals
  0, // parameters
  // loop: # the last group extends into the next block
  var_loop, 1, lambda_16_loop, TAIL_CALL,
  POS(1524, 17)
};

static TAB_NUM t_lambda_16_loop[] = {
  1, // locals
  0, // parameters
  // !e e+1
  var_std__plus, 2, var_1494_11_e, num_1, 1, var_1494_11_e,
  // n
  var_std__less, 2, var_1480_1_n, var_1494_11_e, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_286, lambda_287, TAIL_CALL,
  POS(1525, 19),
  POS(1527, 25),
  POS(1526, 19)
};

static TAB_NUM t_lambda_286[] = {
  1, // locals
  0, // parameters
  // add_groups(ge)
  func_add_groups, 1, var_1502_1_ge, 1, LOCAL(1),
  //  add_groups(ge)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1528, 24),
  POS(1528, 23)
};

static TAB_NUM t_lambda_287[] = {
  2, // locals
  0, // parameters
  // lines(e))
  var_1478_0_lines, 1, var_1494_11_e, 1, LOCAL(1),
  // $current_indent indent_of(lines(e))
  func_indent_of, 1, LOCAL(1), 1, var_1530_1_current_indent,
  // is_defined && current_indent <= indent
  var_is_defined, 1, var_1530_1_current_indent, 1, LOCAL(1),
  // is_defined && current_indent <= indent
  var_std__and, 2, LOCAL(1), lambda_288, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_289, lambda_290, TAIL_CALL,
  POS(1530, 49),
  POS(1530, 23),
  POS(1532, 40),
  POS(1532, 40),
  POS(1531, 23)
};

static TAB_NUM t_lambda_288[] = {
  2, // locals
  0, // parameters
  // indent
  var_std__less, 2, var_1494_13_indent, var_1530_1_current_indent, 1, LOCAL(1),
  // indent
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // current_indent <= indent
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1532, 72),
  POS(1532, 72),
  POS(1532, 54)
};

static TAB_NUM t_lambda_289[] = {
  1, // locals
  0, // parameters
  // add_groups(ge)
  func_add_groups, 1, var_1502_1_ge, 1, LOCAL(1),
  //  add_groups(ge)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1533, 28),
  POS(1533, 27)
};

static TAB_NUM t_lambda_290[] = {
  1, // locals
  0, // parameters
  // is_defined
  var_is_defined, 1, var_1530_1_current_indent, 1, LOCAL(1),
  // !ge
  var_if, 3, LOCAL(1), lambda_291, lambda_292, 1, var_1502_1_ge,
  // reduce_minimum_indent_and_next current_indent
  func_reduce_minimum_indent_and_next, 1, var_1530_1_current_indent, TAIL_CALL,
  POS(1537, 46),
  POS(1535, 27),
  POS(1540, 27)
};

static TAB_NUM t_lambda_291[] = {
  0, // locals
  0, // parameters
  //  e
  LET, 1, var_1494_11_e, TAIL_CALL,
  POS(1538, 33)
};

static TAB_NUM t_lambda_292[] = {
  0, // locals
  0, // parameters
  //  ge
  LET, 1, var_1502_1_ge, TAIL_CALL,
  POS(1539, 33)
};

static TAB_NUM t_lambda_293[] = {
  0, // locals
  0, // parameters
  //  groups
  LET, 1, var_1500_1_groups, TAIL_CALL,
  POS(1541, 17)
};

static TAB_NUM t_func_add_groups[] = {
  1, // locals
  1, // parameters
  var_1543_14_l,
  // gs == l
  var_std__equal, 2, var_1494_20_gs, var_1543_14_l, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_294, lambda_295, TAIL_CALL,
  POS(1545, 13),
  POS(1544, 11)
};

static TAB_NUM t_lambda_294[] = {
  2, // locals
  0, // parameters
  // lines(gs))
  var_1478_0_lines, 1, var_1494_20_gs, 1, LOCAL(1),
  // push(groups lines(gs))
  var_push, 2, var_1500_1_groups, LOCAL(1), 1, LOCAL(2),
  //  push(groups lines(gs))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1546, 28),
  POS(1546, 16),
  POS(1546, 15)
};

static TAB_NUM t_lambda_295[] = {
  1, // locals
  0, // parameters
  // minimum_indent == VERY_LARGE_INDENT
  var_std__equal, 2, var_1501_1_minimum_indent, num_9999, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_296, lambda_297, TAIL_CALL,
  POS(1549, 17),
  POS(1548, 15)
};

static TAB_NUM t_lambda_296[] = {
  2, // locals
  0, // parameters
  // range(lines gs l))
  var_range, 3, var_1478_0_lines, var_1494_20_gs, var_1543_14_l, 1, LOCAL(1),
  // append(groups range(lines gs l))
  var_append, 2, var_1500_1_groups, LOCAL(1), 1, LOCAL(2),
  //  append(groups range(lines gs l))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1550, 34),
  POS(1550, 20),
  POS(1550, 19)
};

static TAB_NUM t_lambda_297[] = {
  4, // locals
  0, // parameters
  // $headline lines(gs)
  var_1478_0_lines, 1, var_1494_20_gs, 1, LOCAL(4),
  // gs+1 l))
  var_std__plus, 2, var_1494_20_gs, num_1, 1, LOCAL(1),
  // range(lines gs+1 l))
  var_range, 3, var_1478_0_lines, LOCAL(1), var_1543_14_l, 1, LOCAL(2),
  // .subgroups_of range(lines gs+1 l))
  LET, -1, LOCAL(4), var_subgroups_of, LOCAL(2), LOCAL(3),
  // push groups headline(.subgroups_of range(lines gs+1 l))
  var_push, 2, var_1500_1_groups, LOCAL(3), TAIL_CALL,
  POS(1552, 19),
  POS(1553, 66),
  POS(1553, 54),
  POS(1553, 40),
  POS(1553, 19)
};

static TAB_NUM t_func_reduce_minimum_indent_and_next[] = {
  2, // locals
  1, // parameters
  var_1555_34_current_indent,
  // is_defined && current_indent < minimum_indent:
  var_is_defined, 1, var_1555_34_current_indent, 1, LOCAL(1),
  // is_defined && current_indent < minimum_indent:
  var_std__and, 2, LOCAL(1), lambda_298, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_299, var_next, TAIL_CALL,
  POS(1557, 28),
  POS(1557, 28),
  POS(1556, 11)
};

static TAB_NUM t_lambda_298[] = {
  1, // locals
  0, // parameters
  // current_indent < minimum_indent:
  var_std__less, 2, var_1555_34_current_indent, var_1501_1_minimum_indent, 1, LOCAL(1),
  // current_indent < minimum_indent:
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1557, 42),
  POS(1557, 42)
};

static TAB_NUM t_lambda_299[] = {
  0, // locals
  0, // parameters
  // !minimum_indent current_indent
  LET, 1, var_1555_34_current_indent, 1, var_1501_1_minimum_indent,
  // next
  var_next, 0, TAIL_CALL,
  POS(1558, 15),
  POS(1559, 15)
};

static TAB_NUM t_func_start_new_fragment_and_next[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 1562_31_i
  // !minimum_indent VERY_LARGE_INDENT
  LET, 1, num_9999, 1, var_1501_1_minimum_indent,
  // !gs i
  LET, 1, LOCAL(1), 1, var_1494_20_gs,
  // !ge i
  LET, 1, LOCAL(1), 1, var_1502_1_ge,
  // next
  var_next, 0, TAIL_CALL,
  POS(1563, 11),
  POS(1564, 11),
  POS(1565, 11),
  POS(1566, 11)
};

static TAB_NUM t_func_std__wrap_words[] = {
  0, // locals
  2, // parameters
  var_1568_19_text,
  var_1568_24_width,
  // $wrapped_text ""
  LET, 1, string_1, 1, var_1569_1_wrapped_text,
  // $n length_of(text)
  var_length_of, 1, var_1568_19_text, 1, var_1570_1_n,
  // $s 1 # start of not yet copied text
  LET, 1, num_1, 1, var_1571_1_s,
  // $l s # line start position
  LET, 1, var_1571_1_s, 1, var_1572_1_l,
  // $b undefined # possible break position
  LET, 1, var_undefined, 1, var_1573_1_b,
  // $i 1
  LET, 1, num_1, 1, var_1574_1_i,
  // loop:
  var_loop, 1, lambda_17_loop, TAIL_CALL,
  POS(1569, 3),
  POS(1570, 3),
  POS(1571, 3),
  POS(1572, 3),
  POS(1573, 3),
  POS(1574, 3),
  POS(1575, 3)
};

static TAB_NUM t_lambda_17_loop[] = {
  1, // locals
  0, // parameters
  // n
  var_std__less, 2, var_1570_1_n, var_1574_1_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_300, lambda_301, TAIL_CALL,
  POS(1577, 11),
  POS(1576, 5)
};

static TAB_NUM t_lambda_300[] = {
  2, // locals
  0, // parameters
  // range(text s n))
  var_range, 3, var_1568_19_text, var_1571_1_s, var_1570_1_n, 1, LOCAL(1),
  // append(wrapped_text range(text s n))
  var_append, 2, var_1569_1_wrapped_text, LOCAL(1), 1, LOCAL(2),
  //  append(wrapped_text range(text s n))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1578, 30),
  POS(1578, 10),
  POS(1578, 9)
};

static TAB_NUM t_lambda_301[] = {
  1, // locals
  0, // parameters
  // $chr text(i)
  var_1568_19_text, 1, var_1574_1_i, 1, var_1580_1_chr,
  // chr == '@nl;':
  var_std__equal, 2, var_1580_1_chr, chr_10, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_302, lambda_303, TAIL_CALL,
  POS(1580, 9),
  POS(1582, 11),
  POS(1581, 9)
};

static TAB_NUM t_lambda_302[] = {
  0, // locals
  0, // parameters
  // !i i+1
  var_std__plus, 2, var_1574_1_i, num_1, 1, var_1574_1_i,
  // !l i
  LET, 1, var_1574_1_i, 1, var_1572_1_l,
  // !b undefined
  LET, 1, var_undefined, 1, var_1573_1_b,
  // next
  var_next, 0, TAIL_CALL,
  POS(1583, 13),
  POS(1584, 13),
  POS(1585, 13),
  POS(1586, 13)
};

static TAB_NUM t_lambda_303[] = {
  1, // locals
  0, // parameters
  // chr == ' ':
  var_std__equal, 2, var_1580_1_chr, chr_32, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_304, lambda_307, TAIL_CALL,
  POS(1589, 15),
  POS(1588, 13)
};

static TAB_NUM t_lambda_304[] = {
  2, // locals
  0, // parameters
  // i-l == width: # break
  var_std__minus, 2, var_1574_1_i, var_1572_1_l, 1, LOCAL(1),
  // i-l == width: # break
  var_std__equal, 2, LOCAL(1), var_1568_24_width, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_305, lambda_306, TAIL_CALL,
  POS(1591, 19),
  POS(1591, 19),
  POS(1590, 17)
};

static TAB_NUM t_lambda_305[] = {
  2, // locals
  0, // parameters
  // i-1)
  var_std__minus, 2, var_1574_1_i, num_1, 1, LOCAL(1),
  // range(text s i-1)
  var_range, 3, var_1568_19_text, var_1571_1_s, LOCAL(1), 1, LOCAL(2),
  // append &wrapped_text range(text s i-1)
  var_append, 2, var_1569_1_wrapped_text, LOCAL(2), 1, var_1569_1_wrapped_text,
  // push &wrapped_text '@nl;'
  var_push, 2, var_1569_1_wrapped_text, chr_10, 1, var_1569_1_wrapped_text,
  // !i i+1
  var_std__plus, 2, var_1574_1_i, num_1, 1, var_1574_1_i,
  // !s i
  LET, 1, var_1574_1_i, 1, var_1571_1_s,
  // !l s
  LET, 1, var_1571_1_s, 1, var_1572_1_l,
  // !b undefined
  LET, 1, var_undefined, 1, var_1573_1_b,
  // next
  var_next, 0, TAIL_CALL,
  POS(1592, 55),
  POS(1592, 42),
  POS(1592, 21),
  POS(1593, 21),
  POS(1594, 21),
  POS(1595, 21),
  POS(1596, 21),
  POS(1597, 21),
  POS(1598, 21)
};

static TAB_NUM t_lambda_306[] = {
  0, // locals
  0, // parameters
  // !b i
  LET, 1, var_1574_1_i, 1, var_1573_1_b,
  // !i i+1
  var_std__plus, 2, var_1574_1_i, num_1, 1, var_1574_1_i,
  // next
  var_next, 0, TAIL_CALL,
  POS(1600, 21),
  POS(1601, 21),
  POS(1602, 21)
};

static TAB_NUM t_lambda_307[] = {
  3, // locals
  0, // parameters
  // !i i+1
  var_std__plus, 2, var_1574_1_i, num_1, 1, var_1574_1_i,
  // i-l <= width
  var_std__minus, 2, var_1574_1_i, var_1572_1_l, 1, LOCAL(1),
  // width
  var_std__less, 2, var_1568_24_width, LOCAL(1), 1, LOCAL(2),
  // width
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), var_next, lambda_308, TAIL_CALL,
  POS(1604, 17),
  POS(1606, 19),
  POS(1606, 26),
  POS(1606, 26),
  POS(1605, 17)
};

static TAB_NUM t_lambda_308[] = {
  1, // locals
  0, // parameters
  // is_defined: # wrap
  var_is_defined, 1, var_1573_1_b, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_b_is_defined, lambda_309, TAIL_CALL,
  POS(1610, 25),
  POS(1609, 21)
};

static TAB_NUM t_lambda_b_is_defined[] = {
  2, // locals
  0, // parameters
  // b-1)
  var_std__minus, 2, var_1573_1_b, num_1, 1, LOCAL(1),
  // range(text s b-1)
  var_range, 3, var_1568_19_text, var_1571_1_s, LOCAL(1), 1, LOCAL(2),
  // append &wrapped_text range(text s b-1)
  var_append, 2, var_1569_1_wrapped_text, LOCAL(2), 1, var_1569_1_wrapped_text,
  // push &wrapped_text '@nl;'
  var_push, 2, var_1569_1_wrapped_text, chr_10, 1, var_1569_1_wrapped_text,
  // !s b+1
  var_std__plus, 2, var_1573_1_b, num_1, 1, var_1571_1_s,
  // !l s
  LET, 1, var_1571_1_s, 1, var_1572_1_l,
  // !b undefined
  LET, 1, var_undefined, 1, var_1573_1_b,
  // next
  var_next, 0, TAIL_CALL,
  POS(1611, 59),
  POS(1611, 46),
  POS(1611, 25),
  POS(1612, 25),
  POS(1613, 25),
  POS(1614, 25),
  POS(1615, 25),
  POS(1616, 25)
};

static TAB_NUM t_lambda_309[] = {
  2, // locals
  0, // parameters
  // i-2)
  var_std__minus, 2, var_1574_1_i, num_2, 1, LOCAL(1),
  // range(text s i-2)
  var_range, 3, var_1568_19_text, var_1571_1_s, LOCAL(1), 1, LOCAL(2),
  // append &wrapped_text range(text s i-2)
  var_append, 2, var_1569_1_wrapped_text, LOCAL(2), 1, var_1569_1_wrapped_text,
  // push &wrapped_text '@nl;'
  var_push, 2, var_1569_1_wrapped_text, chr_10, 1, var_1569_1_wrapped_text,
  // !s i-1
  var_std__minus, 2, var_1574_1_i, num_1, 1, var_1571_1_s,
  // !l s
  LET, 1, var_1571_1_s, 1, var_1572_1_l,
  // next
  var_next, 0, TAIL_CALL,
  POS(1618, 59),
  POS(1618, 46),
  POS(1618, 25),
  POS(1619, 25),
  POS(1620, 25),
  POS(1621, 25),
  POS(1622, 25)
};

static TAB_NUM t_func_std_types__string___serialize[] = {
  0, // locals
  -2, // parameters
  MANDATORY_PARAMETER, var_1626_0_self,
  var_undefined, var_1627_0_indent,
  // $str "@quot;"
  LET, 1, string_8, 1, var_1629_1_str,
  // $s 1
  LET, 1, num_1, 1, var_1630_1_s,
  // for_each self
  var_for_each, 3, var_1626_0_self, lambda_310, lambda_315, TAIL_CALL,
  POS(1629, 3),
  POS(1630, 3),
  POS(1631, 3)
};

static TAB_NUM t_lambda_310[] = {
  2, // locals
  2, // parameters
  var_1632_3_idx,
  var_1632_7_chr,
  // chr < '@0x20;' || chr > '@0x7e;' || chr == '"' || chr == '@@':
  var_std__less, 2, var_1632_7_chr, chr_32, 1, LOCAL(1),
  // chr < '@0x20;' || chr > '@0x7e;' || chr == '"' || chr == '@@':
  var_std__or, 2, LOCAL(1), lambda_311, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_314, var_next, TAIL_CALL,
  POS(1634, 9),
  POS(1634, 9),
  POS(1633, 7)
};

static TAB_NUM t_lambda_311[] = {
  2, // locals
  0, // parameters
  // 0x7e;' || chr == '"' || chr == '@@':
  var_std__less, 2, chr_126, var_1632_7_chr, 1, LOCAL(1),
  // 0x7e;' || chr == '"' || chr == '@@':
  var_std__or, 2, LOCAL(1), lambda_312, 1, LOCAL(2),
  // chr > '@0x7e;' || chr == '"' || chr == '@@':
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1634, 35),
  POS(1634, 35),
  POS(1634, 27)
};

static TAB_NUM t_lambda_312[] = {
  2, // locals
  0, // parameters
  // chr == '"' || chr == '@@':
  var_std__equal, 2, var_1632_7_chr, chr_34, 1, LOCAL(1),
  // chr == '"' || chr == '@@':
  var_std__or, 2, LOCAL(1), lambda_313, 1, LOCAL(2),
  // chr == '"' || chr == '@@':
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1634, 45),
  POS(1634, 45),
  POS(1634, 45)
};

static TAB_NUM t_lambda_313[] = {
  1, // locals
  0, // parameters
  // chr == '@@':
  var_std__equal, 2, var_1632_7_chr, chr_64, 1, LOCAL(1),
  // chr == '@@':
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1634, 59),
  POS(1634, 59)
};

static TAB_NUM t_lambda_314[] = {
  2, // locals
  0, // parameters
  // idx-1)
  var_std__minus, 2, var_1632_3_idx, num_1, 1, LOCAL(1),
  // range(self s idx-1)
  var_range, 3, var_1626_0_self, var_1630_1_s, LOCAL(1), 1, LOCAL(2),
  // append &str range(self s idx-1)
  var_append, 2, var_1629_1_str, LOCAL(2), 1, var_1629_1_str,
  // to_integer);"
  var_to_integer, 1, var_1632_7_chr, 1, LOCAL(1),
  // "@@@(chr.to_integer);"
  var_std__string, 3, string_9, LOCAL(1), string_10, 1, LOCAL(2),
  // append &str "@@@(chr.to_integer);"
  var_append, 2, var_1629_1_str, LOCAL(2), 1, var_1629_1_str,
  // !s idx+1
  var_std__plus, 2, var_1632_3_idx, num_1, 1, var_1630_1_s,
  // next
  var_next, 0, TAIL_CALL,
  POS(1635, 36),
  POS(1635, 23),
  POS(1635, 11),
  POS(1636, 32),
  POS(1636, 23),
  POS(1636, 11),
  POS(1637, 11),
  POS(1638, 11)
};

static TAB_NUM t_lambda_315[] = {
  1, // locals
  0, // parameters
  // range(self s -1)
  var_range, 3, var_1626_0_self, var_1630_1_s, minus_num_1, 1, LOCAL(1),
  // append &str range(self s -1)
  var_append, 2, var_1629_1_str, LOCAL(1), 1, var_1629_1_str,
  // append &str "@quot;@nl;"
  var_append, 2, var_1629_1_str, string_11, 1, var_1629_1_str,
  // is_defined
  var_is_defined, 1, var_1627_0_indent, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_316, lambda_317, TAIL_CALL,
  POS(1641, 19),
  POS(1641, 7),
  POS(1642, 7),
  POS(1644, 16),
  POS(1643, 7)
};

static TAB_NUM t_lambda_316[] = {
  2, // locals
  0, // parameters
  // tabs_and_spaces(indent) str)
  var_tabs_and_spaces, 1, var_1627_0_indent, 1, LOCAL(1),
  // append(tabs_and_spaces(indent) str)
  var_append, 2, LOCAL(1), var_1629_1_str, 1, LOCAL(2),
  //  append(tabs_and_spaces(indent) str)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1645, 19),
  POS(1645, 12),
  POS(1645, 11)
};

static TAB_NUM t_lambda_317[] = {
  0, // locals
  0, // parameters
  //  str
  LET, 1, var_1629_1_str, TAIL_CALL,
  POS(1646, 11)
};

static TAB_NUM t_func_std__indented[] = {
  0, // locals
  2, // parameters
  var_1657_0_indent,
  var_1658_0_text,
  // $indented_text ""
  LET, 1, string_1, 1, var_1660_1_indented_text,
  // $new_indent undefined
  LET, 1, var_undefined, 1, var_1661_1_new_indent,
  // $i 1
  LET, 1, num_1, 1, var_1662_1_i,
  // $n length_of(text)
  var_length_of, 1, var_1658_0_text, 1, var_1663_1_n,
  // loop:
  var_loop, 1, lambda_18_loop, TAIL_CALL,
  POS(1660, 3),
  POS(1661, 3),
  POS(1662, 3),
  POS(1663, 3),
  POS(1664, 3)
};

static TAB_NUM t_lambda_18_loop[] = {
  2, // locals
  0, // parameters
  // !new_indent indent
  LET, 1, var_1657_0_indent, 1, var_1661_1_new_indent,
  // skip_indent !i !new_indent
  func_skip_indent, 0, 2, var_1662_1_i, var_1661_1_new_indent,
  // n:
  var_std__less, 2, var_1663_1_n, var_1662_1_i, 1, LOCAL(1),
  // n:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_318, lambda_325, TAIL_CALL,
  POS(1665, 5),
  POS(1666, 5),
  POS(1668, 12),
  POS(1668, 12),
  POS(1667, 5)
};

static TAB_NUM t_lambda_318[] = {
  2, // locals
  0, // parameters
  // text(i) == '@nl;':
  var_1658_0_text, 1, var_1662_1_i, 1, LOCAL(1),
  // text(i) == '@nl;':
  var_std__equal, 2, LOCAL(1), chr_10, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_319, lambda_320, TAIL_CALL,
  POS(1670, 11),
  POS(1670, 11),
  POS(1669, 9)
};

static TAB_NUM t_lambda_319[] = {
  0, // locals
  0, // parameters
  // push &indented_text '@nl;'
  var_push, 2, var_1660_1_indented_text, chr_10, 1, var_1660_1_indented_text,
  // !i i+1
  var_std__plus, 2, var_1662_1_i, num_1, 1, var_1662_1_i,
  // next
  var_next, 0, TAIL_CALL,
  POS(1671, 13),
  POS(1672, 13),
  POS(1673, 13)
};

static TAB_NUM t_lambda_320[] = {
  1, // locals
  0, // parameters
  // tabs_and_spaces(new_indent)
  var_tabs_and_spaces, 1, var_1661_1_new_indent, 1, LOCAL(1),
  // append &indented_text tabs_and_spaces(new_indent)
  var_append, 2, var_1660_1_indented_text, LOCAL(1), 1, var_1660_1_indented_text,
  // $s i
  LET, 1, var_1662_1_i, 1, var_1676_1_s,
  // loop:
  var_loop, 1, lambda_19_loop, TAIL_CALL,
  POS(1675, 35),
  POS(1675, 13),
  POS(1676, 13),
  POS(1677, 13)
};

static TAB_NUM t_lambda_19_loop[] = {
  2, // locals
  0, // parameters
  // text(i) == '@nl;':
  var_1658_0_text, 1, var_1662_1_i, 1, LOCAL(1),
  // text(i) == '@nl;':
  var_std__equal, 2, LOCAL(1), chr_10, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_321, lambda_322, TAIL_CALL,
  POS(1679, 17),
  POS(1679, 17),
  POS(1678, 15)
};

static TAB_NUM t_lambda_321[] = {
  1, // locals
  0, // parameters
  // range(text s i)
  var_range, 3, var_1658_0_text, var_1676_1_s, var_1662_1_i, 1, LOCAL(1),
  // append &indented_text range(text s i)
  var_append, 2, var_1660_1_indented_text, LOCAL(1), 1, var_1660_1_indented_text,
  // !i i+1
  var_std__plus, 2, var_1662_1_i, num_1, 1, var_1662_1_i,
  // break
  var_break, 0, TAIL_CALL,
  POS(1680, 41),
  POS(1680, 19),
  POS(1681, 19),
  POS(1682, 19)
};

static TAB_NUM t_lambda_322[] = {
  1, // locals
  0, // parameters
  // i < n:
  var_std__less, 2, var_1662_1_i, var_1663_1_n, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_323, lambda_324, TAIL_CALL,
  POS(1685, 21),
  POS(1684, 19)
};

static TAB_NUM t_lambda_323[] = {
  0, // locals
  0, // parameters
  // !i i+1
  var_std__plus, 2, var_1662_1_i, num_1, 1, var_1662_1_i,
  // next
  var_next, 0, TAIL_CALL,
  POS(1686, 23),
  POS(1687, 23)
};

static TAB_NUM t_lambda_324[] = {
  1, // locals
  0, // parameters
  // range(text s -1)
  var_range, 3, var_1658_0_text, var_1676_1_s, minus_num_1, 1, LOCAL(1),
  // append indented_text range(text s -1)
  var_append, 2, var_1660_1_indented_text, LOCAL(1), TAIL_CALL,
  POS(1689, 44),
  POS(1689, 23)
};

static TAB_NUM t_lambda_325[] = {
  0, // locals
  0, // parameters
  //  indented_text
  LET, 1, var_1660_1_indented_text, TAIL_CALL,
  POS(1691, 9)
};

static TAB_NUM t_func_skip_indent[] = {
  2, // locals
  0, // parameters
  // n:
  var_std__less, 2, var_1663_1_n, var_1662_1_i, 1, LOCAL(1),
  // n:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_326, lambda_328, TAIL_CALL,
  POS(1695, 12),
  POS(1695, 12),
  POS(1694, 5)
};

static TAB_NUM t_lambda_326[] = {
  2, // locals
  0, // parameters
  // text(i) == '@ht;':
  var_1658_0_text, 1, var_1662_1_i, 1, LOCAL(1),
  // text(i) == '@ht;':
  var_std__equal, 2, LOCAL(1), chr_9, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_327, func_skip_spaces, TAIL_CALL,
  POS(1697, 11),
  POS(1697, 11),
  POS(1696, 9)
};

static TAB_NUM t_lambda_327[] = {
  0, // locals
  0, // parameters
  // !i i+1
  var_std__plus, 2, var_1662_1_i, num_1, 1, var_1662_1_i,
  // !new_indent new_indent+8
  var_std__plus, 2, var_1661_1_new_indent, num_8, 1, var_1661_1_new_indent,
  // skip_indent
  func_skip_indent, 0, TAIL_CALL,
  POS(1698, 13),
  POS(1699, 13),
  POS(1700, 13)
};

static TAB_NUM t_lambda_328[] = {
  0, // locals
  0, // parameters
  //  i new_indent
  LET, 2, var_1662_1_i, var_1661_1_new_indent, TAIL_CALL,
  POS(1702, 9)
};

static TAB_NUM t_func_skip_spaces[] = {
  3, // locals
  0, // parameters
  // n && text(i) == ' ':
  var_std__less, 2, var_1663_1_n, var_1662_1_i, 1, LOCAL(1),
  // n && text(i) == ' ':
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // n && text(i) == ' ':
  var_std__and, 2, LOCAL(2), lambda_329, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_330, lambda_331, TAIL_CALL,
  POS(1706, 12),
  POS(1706, 12),
  POS(1706, 12),
  POS(1705, 5)
};

static TAB_NUM t_lambda_329[] = {
  2, // locals
  0, // parameters
  // text(i) == ' ':
  var_1658_0_text, 1, var_1662_1_i, 1, LOCAL(1),
  // text(i) == ' ':
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // text(i) == ' ':
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1706, 17),
  POS(1706, 17),
  POS(1706, 17)
};

static TAB_NUM t_lambda_330[] = {
  0, // locals
  0, // parameters
  // !i i+1
  var_std__plus, 2, var_1662_1_i, num_1, 1, var_1662_1_i,
  // !new_indent new_indent+1
  var_std__plus, 2, var_1661_1_new_indent, num_1, 1, var_1661_1_new_indent,
  // skip_spaces
  func_skip_spaces, 0, TAIL_CALL,
  POS(1707, 9),
  POS(1708, 9),
  POS(1709, 9)
};

static TAB_NUM t_lambda_331[] = {
  0, // locals
  0, // parameters
  //  i new_indent
  LET, 2, var_1662_1_i, var_1661_1_new_indent, TAIL_CALL,
  POS(1710, 9)
};

static TAB_NUM t_func_std__format[] = {
  0, // locals
  -2, // parameters
  MANDATORY_PARAMETER, var_1714_0_str,
  REST_PARAMETER, var_1715_0_arguments,
  // $output ""
  LET, 1, string_1, 1, var_1717_1_output,
  // $arg_idx 1
  LET, 1, num_1, 1, var_1718_1_arg_idx,
  // $i 1
  LET, 1, num_1, 1, var_1719_1_i,
  // $n length_of(str)
  var_length_of, 1, var_1714_0_str, 1, var_1720_1_n,
  // loop:
  var_loop, 1, lambda_20_loop, TAIL_CALL,
  POS(1717, 3),
  POS(1718, 3),
  POS(1719, 3),
  POS(1720, 3),
  POS(1721, 3)
};

static TAB_NUM t_lambda_20_loop[] = {
  1, // locals
  0, // parameters
  // n
  var_std__less, 2, var_1720_1_n, var_1719_1_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_332, lambda_333, TAIL_CALL,
  POS(1723, 11),
  POS(1722, 5)
};

static TAB_NUM t_lambda_332[] = {
  0, // locals
  0, // parameters
  //  output
  LET, 1, var_1717_1_output, TAIL_CALL,
  POS(1724, 9)
};

static TAB_NUM t_lambda_333[] = {
  0, // locals
  0, // parameters
  // $chr str(i)
  var_1714_0_str, 1, var_1719_1_i, 1, var_1726_1_chr,
  // !i i+1
  var_std__plus, 2, var_1719_1_i, num_1, 1, var_1719_1_i,
  // case chr
  var_case, 6, var_1726_1_chr, chr_37, lambda_334, chr_92, lambda_359, lambda_362, TAIL_CALL,
  POS(1726, 9),
  POS(1727, 9),
  POS(1728, 9)
};

static TAB_NUM t_lambda_334[] = {
  1, // locals
  0, // parameters
  // n
  var_std__less, 2, var_1720_1_n, var_1719_1_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_335, lambda_336, TAIL_CALL,
  POS(1731, 19),
  POS(1730, 13)
};

static TAB_NUM t_lambda_335[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(1732, 17)
};

static TAB_NUM t_lambda_336[] = {
  2, // locals
  0, // parameters
  // $len_chr str(i)
  var_1714_0_str, 1, var_1719_1_i, 1, var_1734_1_len_chr,
  // len_chr < '0' || len_chr > '9'
  var_std__less, 2, var_1734_1_len_chr, chr_48, 1, LOCAL(1),
  // len_chr < '0' || len_chr > '9'
  var_std__or, 2, LOCAL(1), lambda_337, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_338, lambda_339, TAIL_CALL,
  POS(1734, 17),
  POS(1736, 19),
  POS(1736, 19),
  POS(1735, 17)
};

static TAB_NUM t_lambda_337[] = {
  1, // locals
  0, // parameters
  // 9'
  var_std__less, 2, chr_57, var_1734_1_len_chr, 1, LOCAL(1),
  // len_chr > '9'
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1736, 47),
  POS(1736, 36)
};

static TAB_NUM t_lambda_338[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(1737, 21)
};

static TAB_NUM t_lambda_339[] = {
  0, // locals
  0, // parameters
  // $width len_chr-'0'
  var_std__minus, 2, var_1734_1_len_chr, chr_48, 1, var_1739_1_width,
  // loop
  var_loop, 2, lambda_340, lambda_344, TAIL_CALL,
  POS(1739, 21),
  POS(1740, 21)
};

static TAB_NUM t_lambda_340[] = {
  1, // locals
  0, // parameters
  // !i i+1
  var_std__plus, 2, var_1719_1_i, num_1, 1, var_1719_1_i,
  // n
  var_std__less, 2, var_1720_1_n, var_1719_1_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), var_break, lambda_341, TAIL_CALL,
  POS(1742, 25),
  POS(1744, 31),
  POS(1743, 25)
};

static TAB_NUM t_lambda_341[] = {
  2, // locals
  0, // parameters
  // $fmt_chr str(i)
  var_1714_0_str, 1, var_1719_1_i, 1, var_1747_1_fmt_chr,
  // fmt_chr < '0' || fmt_chr > '9'
  var_std__less, 2, var_1747_1_fmt_chr, chr_48, 1, LOCAL(1),
  // fmt_chr < '0' || fmt_chr > '9'
  var_std__or, 2, LOCAL(1), lambda_342, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), var_break, lambda_343, TAIL_CALL,
  POS(1747, 29),
  POS(1749, 31),
  POS(1749, 31),
  POS(1748, 29)
};

static TAB_NUM t_lambda_342[] = {
  1, // locals
  0, // parameters
  // 9'
  var_std__less, 2, chr_57, var_1747_1_fmt_chr, 1, LOCAL(1),
  // fmt_chr > '9'
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1749, 59),
  POS(1749, 48)
};

static TAB_NUM t_lambda_343[] = {
  2, // locals
  0, // parameters
  // 10*width+(fmt_chr-'0')
  var_std__times, 2, num_10, var_1739_1_width, 1, LOCAL(1),
  // fmt_chr-'0')
  var_std__minus, 2, var_1747_1_fmt_chr, chr_48, 1, LOCAL(2),
  // !width 10*width+(fmt_chr-'0')
  var_std__plus, 2, LOCAL(1), LOCAL(2), 1, var_1739_1_width,
  // next
  var_next, 0, TAIL_CALL,
  POS(1752, 40),
  POS(1752, 50),
  POS(1752, 33),
  POS(1753, 33)
};

static TAB_NUM t_lambda_344[] = {
  1, // locals
  0, // parameters
  // n:
  var_std__less, 2, var_1720_1_n, var_1719_1_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_345, lambda_346, TAIL_CALL,
  POS(1756, 31),
  POS(1755, 25)
};

static TAB_NUM t_lambda_345[] = {
  0, // locals
  0, // parameters
  // add_argument width
  func_add_argument, 1, var_1739_1_width, TAIL_CALL,
  POS(1757, 29)
};

static TAB_NUM t_lambda_346[] = {
  2, // locals
  0, // parameters
  // str(i) == '.':
  var_1714_0_str, 1, var_1719_1_i, 1, LOCAL(1),
  // str(i) == '.':
  var_std__equal, 2, LOCAL(1), chr_46, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_347, lambda_358, TAIL_CALL,
  POS(1760, 31),
  POS(1760, 31),
  POS(1759, 29)
};

static TAB_NUM t_lambda_347[] = {
  1, // locals
  0, // parameters
  // !i i+1
  var_std__plus, 2, var_1719_1_i, num_1, 1, var_1719_1_i,
  // n
  var_std__less, 2, var_1720_1_n, var_1719_1_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_348, lambda_349, TAIL_CALL,
  POS(1761, 33),
  POS(1763, 39),
  POS(1762, 33)
};

static TAB_NUM t_lambda_348[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(1764, 37)
};

static TAB_NUM t_lambda_349[] = {
  2, // locals
  0, // parameters
  // $dw_chr str(i)
  var_1714_0_str, 1, var_1719_1_i, 1, var_1766_1_dw_chr,
  // dw_chr < '0' || dw_chr > '9'
  var_std__less, 2, var_1766_1_dw_chr, chr_48, 1, LOCAL(1),
  // dw_chr < '0' || dw_chr > '9'
  var_std__or, 2, LOCAL(1), lambda_350, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_351, lambda_352, TAIL_CALL,
  POS(1766, 37),
  POS(1768, 39),
  POS(1768, 39),
  POS(1767, 37)
};

static TAB_NUM t_lambda_350[] = {
  1, // locals
  0, // parameters
  // 9'
  var_std__less, 2, chr_57, var_1766_1_dw_chr, 1, LOCAL(1),
  // dw_chr > '9'
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1768, 65),
  POS(1768, 55)
};

static TAB_NUM t_lambda_351[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(1769, 41)
};

static TAB_NUM t_lambda_352[] = {
  0, // locals
  0, // parameters
  // $dw dw_chr-'0'
  var_std__minus, 2, var_1766_1_dw_chr, chr_48, 1, var_1771_1_dw,
  // loop
  var_loop, 2, lambda_353, lambda_357, TAIL_CALL,
  POS(1771, 41),
  POS(1772, 41)
};

static TAB_NUM t_lambda_353[] = {
  1, // locals
  0, // parameters
  // !i i+1
  var_std__plus, 2, var_1719_1_i, num_1, 1, var_1719_1_i,
  // n
  var_std__less, 2, var_1720_1_n, var_1719_1_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), var_break, lambda_354, TAIL_CALL,
  POS(1774, 45),
  POS(1776, 51),
  POS(1775, 45)
};

static TAB_NUM t_lambda_354[] = {
  2, // locals
  0, // parameters
  // $fmt_chr str(i)
  var_1714_0_str, 1, var_1719_1_i, 1, var_1779_1_fmt_chr,
  // fmt_chr < '0' || fmt_chr > '9'
  var_std__less, 2, var_1779_1_fmt_chr, chr_48, 1, LOCAL(1),
  // fmt_chr < '0' || fmt_chr > '9'
  var_std__or, 2, LOCAL(1), lambda_355, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), var_break, lambda_356, TAIL_CALL,
  POS(1779, 49),
  POS(1781, 51),
  POS(1781, 51),
  POS(1780, 49)
};

static TAB_NUM t_lambda_355[] = {
  1, // locals
  0, // parameters
  // 9'
  var_std__less, 2, chr_57, var_1779_1_fmt_chr, 1, LOCAL(1),
  // fmt_chr > '9'
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1781, 79),
  POS(1781, 68)
};

static TAB_NUM t_lambda_356[] = {
  2, // locals
  0, // parameters
  // 10*dw+(fmt_chr-'0')
  var_std__times, 2, num_10, var_1771_1_dw, 1, LOCAL(1),
  // fmt_chr-'0')
  var_std__minus, 2, var_1779_1_fmt_chr, chr_48, 1, LOCAL(2),
  // !dw 10*dw+(fmt_chr-'0')
  var_std__plus, 2, LOCAL(1), LOCAL(2), 1, var_1771_1_dw,
  // next
  var_next, 0, TAIL_CALL,
  POS(1784, 57),
  POS(1784, 64),
  POS(1784, 53),
  POS(1785, 53)
};

static TAB_NUM t_lambda_357[] = {
  0, // locals
  0, // parameters
  // add_argument width dw
  func_add_argument, 2, var_1739_1_width, var_1771_1_dw, TAIL_CALL,
  POS(1787, 45)
};

static TAB_NUM t_lambda_358[] = {
  0, // locals
  0, // parameters
  // add_argument width
  func_add_argument, 1, var_1739_1_width, TAIL_CALL,
  POS(1789, 33)
};

static TAB_NUM t_lambda_359[] = {
  1, // locals
  0, // parameters
  // n
  var_std__less, 2, var_1720_1_n, var_1719_1_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_360, lambda_361, TAIL_CALL,
  POS(1792, 19),
  POS(1791, 13)
};

static TAB_NUM t_lambda_360[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(1793, 17)
};

static TAB_NUM t_lambda_361[] = {
  1, // locals
  0, // parameters
  // str(i)
  var_1714_0_str, 1, var_1719_1_i, 1, LOCAL(1),
  // push &output str(i)
  var_push, 2, var_1717_1_output, LOCAL(1), 1, var_1717_1_output,
  // !i i+1
  var_std__plus, 2, var_1719_1_i, num_1, 1, var_1719_1_i,
  // next
  var_next, 0, TAIL_CALL,
  POS(1795, 30),
  POS(1795, 17),
  POS(1796, 17),
  POS(1797, 17)
};

static TAB_NUM t_lambda_362[] = {
  0, // locals
  0, // parameters
  // push &output chr
  var_push, 2, var_1717_1_output, var_1726_1_chr, 1, var_1717_1_output,
  // next
  var_next, 0, TAIL_CALL,
  POS(1799, 13),
  POS(1800, 13)
};

static TAB_NUM t_func_add_argument[] = {
  2, // locals
  -2, // parameters
  MANDATORY_PARAMETER, var_1804_0_width,
  var_undefined, var_1805_0_decimal_width,
  // $argument arguments(arg_idx)
  var_1715_0_arguments, 1, var_1718_1_arg_idx, 1, var_1807_1_argument,
  // !arg_idx arg_idx+1
  var_std__plus, 2, var_1718_1_arg_idx, num_1, 1, var_1718_1_arg_idx,
  // is_defined:
  var_is_defined, 1, var_1805_0_decimal_width, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_decimal_width_is_defined, lambda_365, 1, LOCAL(2),
  // append &output
  var_append, 2, var_1717_1_output, LOCAL(2), 1, var_1717_1_output,
  // next
  var_next, 0, TAIL_CALL,
  POS(1807, 5),
  POS(1808, 5),
  POS(1811, 23),
  POS(1810, 7),
  POS(1809, 5),
  POS(1824, 5)
};

static TAB_NUM t_lambda_decimal_width_is_defined[] = {
  1, // locals
  0, // parameters
  // real_to_string &argument
  func_real_to_string, 1, var_1807_1_argument, 1, var_1807_1_argument,
  // is_undefined
  var_is_undefined, 1, var_1807_1_argument, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_363, lambda_364, TAIL_CALL,
  POS(1812, 11),
  POS(1814, 22),
  POS(1813, 11)
};

static TAB_NUM t_lambda_363[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(1815, 15)
};

static TAB_NUM t_lambda_364[] = {
  5, // locals
  0, // parameters
  // $value argument .truncate_from. '.'
  var_truncate_from, 2, var_1807_1_argument, chr_46, 1, LOCAL(4),
  // $decimals argument .behind. '.'
  var_behind, 2, var_1807_1_argument, chr_46, 1, LOCAL(5),
  // pad_left(value width)
  var_pad_left, 2, LOCAL(4), var_1804_0_width, 1, LOCAL(1),
  // pad_right(decimals decimal_width "0") decimal_width)
  var_pad_right, 3, LOCAL(5), var_1805_0_decimal_width, string_12, 1, LOCAL(2),
  // truncate(pad_right(decimals decimal_width "0") decimal_width)
  var_truncate, 2, LOCAL(2), var_1805_0_decimal_width, 1, LOCAL(3),
  // string
  var_string, 3, LOCAL(1), string_13, LOCAL(3), TAIL_CALL,
  POS(1817, 15),
  POS(1818, 15),
  POS(1820, 17),
  POS(1822, 26),
  POS(1822, 17),
  POS(1819, 15)
};

static TAB_NUM t_lambda_365[] = {
  1, // locals
  0, // parameters
  // pad_left(argument width)
  var_pad_left, 2, var_1807_1_argument, var_1804_0_width, 1, LOCAL(1),
  //  pad_left(argument width)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1823, 12),
  POS(1823, 11)
};

static TAB_NUM t_func_real_to_string[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 1826_18_num
  // $str num.to_string
  var_to_string, 1, LOCAL(1), 1, var_1827_1_str,
  // $n length_of(str)
  var_length_of, 1, var_1827_1_str, 1, var_1828_1_n,
  // $i n
  LET, 1, var_1828_1_n, 1, var_1829_1_i,
  // loop:
  var_loop, 1, lambda_21_loop, TAIL_CALL,
  POS(1827, 3),
  POS(1828, 3),
  POS(1829, 3),
  POS(1830, 3)
};

static TAB_NUM t_lambda_21_loop[] = {
  1, // locals
  0, // parameters
  // i == 0
  var_std__equal, 2, var_1829_1_i, num_0, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_366, lambda_367, TAIL_CALL,
  POS(1832, 7),
  POS(1831, 5)
};

static TAB_NUM t_lambda_366[] = {
  0, // locals
  0, // parameters
  //  str
  LET, 1, var_1827_1_str, TAIL_CALL,
  POS(1833, 9)
};

static TAB_NUM t_lambda_367[] = {
  2, // locals
  0, // parameters
  // str(i) == 'e'
  var_1827_1_str, 1, var_1829_1_i, 1, LOCAL(1),
  // str(i) == 'e'
  var_std__equal, 2, LOCAL(1), chr_101, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), func_2_handle_exponent, lambda_368, TAIL_CALL,
  POS(1836, 11),
  POS(1836, 11),
  POS(1835, 9)
};

static TAB_NUM t_lambda_368[] = {
  0, // locals
  0, // parameters
  // !i i-1
  var_std__minus, 2, var_1829_1_i, num_1, 1, var_1829_1_i,
  // next
  var_next, 0, TAIL_CALL,
  POS(1839, 13),
  POS(1840, 13)
};

static TAB_NUM t_func_2_handle_exponent[] = {
  3, // locals
  0, // parameters
  // i >= n || str(2) != '.'
  var_std__less, 2, var_1829_1_i, var_1828_1_n, 1, LOCAL(1),
  // i >= n || str(2) != '.'
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // i >= n || str(2) != '.'
  var_std__or, 2, LOCAL(2), lambda_369, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_370, lambda_371, TAIL_CALL,
  POS(1844, 7),
  POS(1844, 7),
  POS(1844, 7),
  POS(1843, 5)
};

static TAB_NUM t_lambda_369[] = {
  3, // locals
  0, // parameters
  // str(2) != '.'
  var_1827_1_str, 1, num_2, 1, LOCAL(1),
  // str(2) != '.'
  var_std__equal, 2, LOCAL(1), chr_46, 1, LOCAL(2),
  // str(2) != '.'
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // str(2) != '.'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(1844, 17),
  POS(1844, 17),
  POS(1844, 17),
  POS(1844, 17)
};

static TAB_NUM t_lambda_370[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(1845, 9)
};

static TAB_NUM t_lambda_371[] = {
  3, // locals
  0, // parameters
  // i+2 n).to_integer
  var_std__plus, 2, var_1829_1_i, num_2, 1, LOCAL(1),
  // range(str i+2 n).to_integer
  var_range, 3, var_1827_1_str, LOCAL(1), var_1828_1_n, 1, LOCAL(2),
  // $exp range(str i+2 n).to_integer
  var_to_integer, 1, LOCAL(2), 1, var_1847_1_exp,
  // i-1) str(1))
  var_std__minus, 2, var_1829_1_i, num_1, 1, LOCAL(1),
  // range(str 3 i-1) str(1))
  var_range, 3, var_1827_1_str, num_3, LOCAL(1), 1, LOCAL(2),
  // str(1))
  var_1827_1_str, 1, num_1, 1, LOCAL(3),
  // $man put(range(str 3 i-1) str(1))
  var_put, 2, LOCAL(2), LOCAL(3), 1, var_1848_1_man,
  // is_undefined
  var_is_undefined, 1, var_1847_1_exp, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_372, lambda_373, TAIL_CALL,
  POS(1847, 24),
  POS(1847, 14),
  POS(1847, 9),
  POS(1848, 30),
  POS(1848, 18),
  POS(1848, 35),
  POS(1848, 9),
  POS(1850, 15),
  POS(1849, 9)
};

static TAB_NUM t_lambda_372[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(1851, 13)
};

static TAB_NUM t_lambda_373[] = {
  2, // locals
  0, // parameters
  // exp-1)
  var_std__minus, 2, var_1847_1_exp, num_1, 1, LOCAL(1),
  // $zeros dup("0" exp-1)
  var_dup, 2, string_12, LOCAL(1), 1, var_1853_1_zeros,
  // i+1)
  var_std__plus, 2, var_1829_1_i, num_1, 1, LOCAL(1),
  // str(i+1)
  var_1827_1_str, 1, LOCAL(1), 1, LOCAL(2),
  // case str(i+1)
  var_case, 6, LOCAL(2), chr_43, lambda_374, chr_45, lambda_375, lambda_376, TAIL_CALL,
  POS(1853, 28),
  POS(1853, 13),
  POS(1854, 22),
  POS(1854, 18),
  POS(1854, 13)
};

static TAB_NUM t_lambda_374[] = {
  1, // locals
  0, // parameters
  // append(man zeros)
  var_append, 2, var_1848_1_man, var_1853_1_zeros, 1, LOCAL(1),
  // -> append(man zeros)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1856, 20),
  POS(1856, 17)
};

static TAB_NUM t_lambda_375[] = {
  2, // locals
  0, // parameters
  // append(zeros man))
  var_append, 2, var_1853_1_zeros, var_1848_1_man, 1, LOCAL(1),
  // append("0." append(zeros man))
  var_append, 2, string_14, LOCAL(1), 1, LOCAL(2),
  // -> append("0." append(zeros man))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1858, 32),
  POS(1858, 20),
  POS(1858, 17)
};

static TAB_NUM t_lambda_376[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(1859, 17)
};

static int value_range_818_1_arguments[] = {
  -chr_48, -chr_49
};

static int value_range_829_1_arguments[] = {
  -chr_48, -chr_55
};

static int value_range_840_1_arguments[] = {
  -chr_48, -chr_57
};

static int value_range_843_1_arguments[] = {
  -chr_97, -chr_102
};

static int value_range_846_1_arguments[] = {
  -chr_65, -chr_70
};

static int sequence_910_1_arguments[] = {
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
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__parse_integer}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_maybe_negated}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_95}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_96}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_partial_match}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_97}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_98}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_exhausted}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_99}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_100}},
  {FLT_CHARACTER, 0, {.value = 45}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_101}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_102}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_103}},
  {FLT_STRING_8, 2, {.str_8 = "0b"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_104}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_105}},
  {FLT_CHARACTER, 0, {.value = 48}},
  {FLT_CHARACTER, 0, {.value = 49}},
  {FLT_VALUE_RANGE, 2, {.arguments = value_range_818_1_arguments}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_106}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_107}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_108}},
  {FLT_STRING_8, 2, {.str_8 = "0o"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_109}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_110}},
  {FLT_CHARACTER, 0, {.value = 55}},
  {FLT_VALUE_RANGE, 2, {.arguments = value_range_829_1_arguments}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_111}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_112}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_113}},
  {FLT_STRING_8, 2, {.str_8 = "0x"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_114}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_115}},
  {FLT_CHARACTER, 0, {.value = 57}},
  {FLT_VALUE_RANGE, 2, {.arguments = value_range_840_1_arguments}},
  {FLT_CHARACTER, 0, {.value = 97}},
  {FLT_CHARACTER, 0, {.value = 102}},
  {FLT_VALUE_RANGE, 2, {.arguments = value_range_843_1_arguments}},
  {FLT_CHARACTER, 0, {.value = 65}},
  {FLT_CHARACTER, 0, {.value = 70}},
  {FLT_VALUE_RANGE, 2, {.arguments = value_range_846_1_arguments}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_116}},
  {FLT_POSITIVE_INT64, 0, {.value = 4}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_a__f}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_A__F}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_117}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_118}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_119}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_120}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_121}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_122}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__parse_number}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_123}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_124}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_125}},
  {FLT_CHARACTER, 0, {.value = 43}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_126}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_127}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_128}},
  {FLT_CHARACTER, 0, {.value = 98}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_b}},
  {FLT_CHARACTER, 0, {.value = 111}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_o}},
  {FLT_CHARACTER, 0, {.value = 120}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_x}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_skip_one_ore_more_digits}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_129}},
  {FLT_CHARACTER, 0, {.value = 101}},
  {FLT_CHARACTER, 0, {.value = 69}},
  {FLT_SEQUENCE, 2, {.arguments = sequence_910_1_arguments}},
  {FLT_CHARACTER, 0, {.value = 46}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_130}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2_skip_one_ore_more_digits}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_131}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_skip_one_ore_more_digits}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_132}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_133}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_134}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_135}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_136}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_7_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_137}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_138}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_handle_exponent}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_139}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_140}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_141}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_142}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_return_integer}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_return_real}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_binary}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_143}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_144}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_145}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_146}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_147}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_8_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_148}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_149}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_150}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_151}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_152}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_octal}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_153}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_154}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_155}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_156}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_157}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_9_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_158}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_159}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_160}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_161}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_162}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_hex}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_163}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_164}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_165}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_166}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_167}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_168}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_169}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_170}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_171}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_172}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_173}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_174}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_175}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_handle_more_digits}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_10_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_176}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_177}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_178}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_179}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_180}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_181}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_182}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_183}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_184}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_185}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_186}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_187}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_188}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__string___to_integer}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_189}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_190}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__string___to_number}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_191}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_192}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__map_characters}},
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
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__string___to_upper_case}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__string___to_lower_case}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__string___to_title_case}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_205}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_206}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_207}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_208}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__string___to_sentence_case}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_209}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_210}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_211}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_212}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__delete_all}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_delete_all}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_213}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_214}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_215}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_216}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_217}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__replace_all}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_replace_all}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_218}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_219}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_220}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_221}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_replacement_is_a_string}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_222}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_223}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__replace_first}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_replace_first}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_224}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_225}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_226}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_227}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_228}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_229}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__count_occurrences}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_search_next}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_230}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_231}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_n_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_232}},
  {FLT_POSITIVE_INT64, 0, {.value = 300}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__partition}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_partition}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_233}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_234}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_235}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_236}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_ls_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_237}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_238}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_239}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_240}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_241}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_242}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_11_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_243}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_244}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__split_into_lines}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_12_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_245}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_246}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_247}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_248}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_249}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_250}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__split_into_indented_lines}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_split}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_251}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_252}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_253}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_254}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_255}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_256}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_257}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2_ls_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_258}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_259}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_260}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_261}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_13_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_262}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_263}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_create_line}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_14_loop}},
  {FLT_CHARACTER, 0, {.value = 9}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_264}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_265}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_266}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_267}},
  {FLT_STRING_8, 1, {.str_8 = "\012"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_268}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_269}},
  {FLT_POSITIVE_INT64, 0, {.value = 20}},
  {FLT_POSITIVE_INT64, 0, {.value = 9999}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_indent_of}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_270}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_271}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__split_into_groups}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_15_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_272}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_indent_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_273}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_274}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_2_split}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_275}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_276}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_277}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_278}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_279}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_280}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_281}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_282}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_283}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_284}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_285}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_gs_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_16_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_286}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_287}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_288}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_289}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_290}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_291}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_292}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_293}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_add_groups}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_294}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_295}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_296}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_297}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_reduce_minimum_indent_and_next}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_298}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_299}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_start_new_fragment_and_next}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__wrap_words}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_17_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_300}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_301}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_302}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_303}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_304}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_305}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_306}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_307}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_308}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_b_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_309}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__string___serialize}},
  {FLT_STRING_8, 1, {.str_8 = "\042"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_310}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_311}},
  {FLT_CHARACTER, 0, {.value = 126}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_312}},
  {FLT_CHARACTER, 0, {.value = 34}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_313}},
  {FLT_CHARACTER, 0, {.value = 64}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_314}},
  {FLT_STRING_8, 1, {.str_8 = "@"}},
  {FLT_STRING_8, 1, {.str_8 = ";"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_315}},
  {FLT_STRING_8, 2, {.str_8 = "\042\012"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_316}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_317}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__indented}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_18_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_318}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_319}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_320}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_19_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_321}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_322}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_323}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_324}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_325}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_skip_indent}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_326}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_327}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_328}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_skip_spaces}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_329}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_330}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_331}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__format}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_20_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_332}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_333}},
  {FLT_CHARACTER, 0, {.value = 37}},
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
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_346}},
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
  {FLT_CHARACTER, 0, {.value = 92}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_359}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_360}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_361}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_362}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_add_argument}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_decimal_width_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_363}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_364}},
  {FLT_STRING_8, 1, {.str_8 = "0"}},
  {FLT_STRING_8, 1, {.str_8 = "."}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_365}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_real_to_string}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_21_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_366}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_367}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_368}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_2_handle_exponent}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_369}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_370}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_371}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_372}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_373}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_374}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_375}},
  {FLT_STRING_8, 2, {.str_8 = "0."}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_376}}
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
    "81_0_args\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_empty\000", NULL,
    {.position = POS(84, 10)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "append\000", NULL,
    {.position = POS(86, 33)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "map_reduce\000", NULL,
    {.position = POS(86, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if\000", NULL,
    {.position = POS(83, 3)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "string\000std", NULL,
    {.const_idx = -func_std__string}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "create_string\000", NULL,
    {.position = POS(98, 3)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "put\000", NULL,
    {.position = POS(100, 20)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "dup\000", NULL,
    {.position = POS(114, 20)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "124_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "125_0_n\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "shift_right\000std", NULL,
    {.position = POS(131, 10)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "132_1_str\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "times\000std", NULL,
    {.position = POS(134, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "equal\000std", NULL,
    {.position = POS(134, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "string\000", NULL,
    {.position = POS(135, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "case\000", NULL,
    {.position = POS(127, 3)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "pad_left\000std", NULL,
    {.const_idx = -func_std__pad_left}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "152_0_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "153_0_pad\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "155_1_text\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "156_1_len\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "length_of\000", NULL,
    {.position = POS(156, 8)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "less\000std", NULL,
    {.position = POS(158, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "minus\000std", NULL,
    {.position = POS(160, 29)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000std", NULL,
    {.position = POS(160, 29)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "div\000", NULL,
    {.position = POS(160, 29)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "range\000", NULL,
    {.position = POS(160, 14)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "pad_right\000std", NULL,
    {.const_idx = -func_std__pad_right}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "176_0_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "177_0_pad\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "179_1_text\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "180_1_len\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "spaces\000std", NULL,
    {.const_idx = -func_std__spaces}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "195_0_n\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not\000std", NULL,
    {.position = POS(198, 10)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "tabs_and_spaces\000std", NULL,
    {.const_idx = -func_std__tabs_and_spaces}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "208_0_n\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "bit_and\000std", NULL,
    {.position = POS(212, 56)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "spaces\000", NULL,
    {.position = POS(213, 34)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "with_tabs\000std", NULL,
    {.const_idx = -func_std__with_tabs}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "221_0_text\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "223_1_s\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "224_1_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "225_1_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "226_1_output\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "227_1_count\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "next\000", NULL,
    {.position = POS(235, 13)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "239_1_tab_count\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "shift_left\000std", NULL,
    {.position = POS(248, 35)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "loop\000", NULL,
    {.position = POS(228, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "and\000std", NULL,
    {.position = POS(262, 16)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "break\000", NULL,
    {.position = POS(265, 11)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "match\000", NULL,
    {.position = POS(272, 20)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "276_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "277_0_stream\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "279_1_len\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "undefined\000", NULL,
    {.position = POS(286, 12)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "search\000", NULL,
    {.position = POS(289, 20)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "293_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "294_0_stream\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "295_0_nth\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "297_1_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "298_1_length\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "299_1_offset\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "300_1_n\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "dec\000", NULL,
    {.position = POS(317, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000", NULL,
    {.position = POS(318, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "inc\000", NULL,
    {.position = POS(322, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "minus\000", NULL,
    {.position = POS(335, 17)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "before\000", NULL,
    {.position = POS(343, 20)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "371_0_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "375_8_pos\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_defined\000", NULL,
    {.position = POS(377, 9)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "truncate_from\000", NULL,
    {.position = POS(382, 20)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "401_0_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "405_8_pos\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "behind\000", NULL,
    {.position = POS(411, 20)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "437_0_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "441_8_pos\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "441_13_len\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "truncate_until\000", NULL,
    {.position = POS(447, 20)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "466_0_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "470_8_pos\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "470_13_len\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "from\000", NULL,
    {.position = POS(476, 20)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "498_0_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "502_8_pos\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "truncate_before\000", NULL,
    {.position = POS(508, 20)}
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
    "until\000", NULL,
    {.position = POS(528, 20)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "547_0_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "551_8_pos\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "551_13_len\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "truncate_behind\000", NULL,
    {.position = POS(557, 20)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "567_0_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "571_8_pos\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "571_13_len\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "between\000", NULL,
    {.position = POS(577, 20)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "has_prefix\000", NULL,
    {.position = POS(596, 20)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "has_suffix\000", NULL,
    {.position = POS(607, 20)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "613_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "614_0_suffix\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_a_character\000", NULL,
    {.position = POS(617, 12)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "620_1_len\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "negate\000std", NULL,
    {.position = POS(621, 48)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "without_prefix\000", NULL,
    {.position = POS(623, 20)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "629_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "632_1_n\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "without_suffix\000", NULL,
    {.position = POS(638, 20)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "644_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "645_0_suffix\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "647_1_len\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "655_1_slen\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "contains\000", NULL,
    {.position = POS(661, 20)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "split\000std", NULL,
    {.const_idx = -func_std__split}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "679_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "680_0_separator\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_list\000", NULL,
    {.position = POS(684, 8)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "686_1_items\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "688_8_pos\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "688_13_len\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "push\000", NULL,
    {.position = POS(691, 13)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "join\000std", NULL,
    {.const_idx = -func_std__join}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "707_0_separator\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "trim\000std", NULL,
    {.const_idx = -func_std__trim}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "719_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "720_0_test\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_a_whitespace_character\000", NULL,
    {.position = POS(720, 12)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "722_1_s\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "723_1_e\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "trim_left\000std", NULL,
    {.const_idx = -func_std__trim_left}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "742_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "743_0_test\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "745_1_s\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "746_1_e\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "trim_right\000std", NULL,
    {.const_idx = -func_std__trim_right}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "759_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "760_0_test\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "762_1_e\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "parse_integer\000std", NULL,
    {.const_idx = -func_std__parse_integer}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "783_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "804_1_negate\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "810_1_value\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "791_17_idx\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "803_1_orig\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "815_3_idx\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "815_7_chr\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "value_range\000std", NULL,
    {.position = POS(818, 14)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "for_each\000", NULL,
    {.position = POS(814, 7)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "827_3_idx\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "827_7_chr\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "838_3_idx\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "838_7_chr\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "854_3_idx\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "854_7_chr\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "cond\000", NULL,
    {.position = POS(811, 3)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "parse_number\000std", NULL,
    {.const_idx = -func_std__parse_number}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "875_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "877_1_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "878_1_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "883_1_sign_chr\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "or\000std", NULL,
    {.position = POS(884, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "update_if\000", NULL,
    {.position = POS(884, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "sequence\000std", NULL,
    {.position = POS(910, 14)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "913_28_cont\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "918_1_digit\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "929_1_next_digit\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "941_1_exp_sign_chr\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "integer\000", NULL,
    {.position = POS(945, 41)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "real\000", NULL,
    {.position = POS(947, 38)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "949_16_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "949_20_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "950_1_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "954_1_digit\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "959_1_value\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "966_1_next_digit\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "973_15_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "973_19_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "974_1_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "978_1_digit\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "983_1_value\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "990_1_next_digit\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "997_13_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "997_17_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "998_1_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1002_1_digit\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1012_22_value\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1019_1_next_digit\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "to_integer\000", NULL,
    {.position = POS(1032, 20)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1038_21_value\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "parse_integer\000", NULL,
    {.position = POS(1038, 3)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "to_number\000", NULL,
    {.position = POS(1044, 20)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1050_20_value\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "parse_number\000", NULL,
    {.position = POS(1050, 3)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "map_characters\000std", NULL,
    {.const_idx = -func_std__map_characters}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1064_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1065_0_function\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "parameter_count_of\000", NULL,
    {.position = POS(1069, 7)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1071_3_s\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1071_5_e\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1067_1_map\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1084_3_s\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1084_5_e\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "to_upper_case\000", NULL,
    {.position = POS(1099, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "map_characters\000", NULL,
    {.position = POS(1109, 3)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "to_lower_case\000", NULL,
    {.position = POS(1111, 20)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "to_title_case\000", NULL,
    {.position = POS(1123, 20)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1131_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1133_22_idx\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1133_26_chr\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_a_letter_character\000", NULL,
    {.position = POS(1135, 30)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "to_sentence_case\000", NULL,
    {.position = POS(1139, 20)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1147_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1149_22_idx\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1149_26_chr\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "delete_all\000std", NULL,
    {.const_idx = -func_std__delete_all}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1160_0_expressions\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1162_14_txt\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1176_1_new_text\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1169_1_len\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if_not\000", NULL,
    {.position = POS(1170, 13)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "replace_all\000std", NULL,
    {.const_idx = -func_std__replace_all}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1185_0_args\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1187_15_txt\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1208_1_new_text\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1194_17_replacement\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1195_1_len\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "replace_first\000std", NULL,
    {.const_idx = -func_std__replace_first}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1217_0_args\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1219_17_txt\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1239_1_new_text\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1226_17_replacement\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1227_1_len\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "update_if_not\000", NULL,
    {.position = POS(1232, 17)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "count_occurrences\000std", NULL,
    {.const_idx = -func_std__count_occurrences}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1247_0_expr\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1249_15_txt\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1249_19_count\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1254_1_n\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "partition\000std", NULL,
    {.const_idx = -func_std__partition}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1273_0_text\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1274_0_separators\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1276_1_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1279_13_s\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1279_15_e\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1285_1_parts\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1286_1_ls\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1288_3_i\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "equal\000", NULL,
    {.position = POS(1289, 38)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "any_of\000", NULL,
    {.position = POS(1289, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "from_to\000", NULL,
    {.position = POS(1287, 9)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "split_into_lines\000std", NULL,
    {.const_idx = -func_std__split_into_lines}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1353_25_text\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1354_1_lines\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1355_1_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1356_1_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1357_1_s\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "split_into_indented_lines\000std", NULL,
    {.const_idx = -func_std__split_into_indented_lines}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1395_0_text\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1400_9_s\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1400_11_e\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1406_1_lines\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1407_1_ls\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1413_3_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1434_15_s\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1434_17_e\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1435_1_indent\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1449_1_line_text\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "tuple\000", NULL,
    {.position = POS(1453, 20)}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "subgroups_of\000std", NULL,
    {.has_a_setter = true}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1460_13_line\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "first\000", NULL,
    {.position = POS(1463, 8)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "split_into_groups\000std", NULL,
    {.const_idx = -func_std__split_into_groups}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1478_0_lines\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1480_1_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1481_1_fv\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1485_1_indent\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1494_9_s\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1494_11_e\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1494_13_indent\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1494_20_gs\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1500_1_groups\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1501_1_minimum_indent\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1502_1_ge\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1504_3_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1505_1_current_indent\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1530_1_current_indent\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1543_14_l\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "subgroups_of\000", NULL,
    {.position = POS(1553, 41)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1555_34_current_indent\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "wrap_words\000std", NULL,
    {.const_idx = -func_std__wrap_words}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1568_19_text\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1568_24_width\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1569_1_wrapped_text\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1570_1_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1571_1_s\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1572_1_l\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1573_1_b\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1574_1_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1580_1_chr\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "serialize\000", NULL,
    {.position = POS(1624, 20)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1626_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1627_0_indent\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1629_1_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1630_1_s\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1632_3_idx\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1632_7_chr\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "tabs_and_spaces\000", NULL,
    {.position = POS(1645, 19)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "indented\000std", NULL,
    {.const_idx = -func_std__indented}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1657_0_indent\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1658_0_text\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1660_1_indented_text\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1661_1_new_indent\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1662_1_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1663_1_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1676_1_s\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "format\000std", NULL,
    {.const_idx = -func_std__format}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1714_0_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1715_0_arguments\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1717_1_output\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1718_1_arg_idx\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1719_1_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1720_1_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1726_1_chr\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1734_1_len_chr\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1739_1_width\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1747_1_fmt_chr\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1766_1_dw_chr\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1771_1_dw\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1779_1_fmt_chr\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1804_0_width\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1805_0_decimal_width\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1807_1_argument\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_undefined\000", NULL,
    {.position = POS(1814, 22)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "pad_left\000", NULL,
    {.position = POS(1820, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "pad_right\000", NULL,
    {.position = POS(1822, 26)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "truncate\000", NULL,
    {.position = POS(1822, 17)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1827_1_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1828_1_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1829_1_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1847_1_exp\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1848_1_man\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1853_1_zeros\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "empty_collection_of\000", NULL,
    {.position = POS(1861, 20)}
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
  560, // number of constants
  359, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  constants_table,
  variables_table,
};
