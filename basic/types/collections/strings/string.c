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
  func_std__parse_integer = -165,
  func_maybe_negated = -166,
  lambda_102 = -167,
  lambda_103 = -168,
  func_partial_match = -169,
  lambda_104 = -170,
  lambda_105 = -171,
  func_exhausted = -172,
  lambda_106 = -173,
  lambda_107 = -174,
  chr_45 = -175,
  lambda_108 = -176,
  lambda_109 = -177,
  lambda_110 = -178,
  str_0b = -179,
  lambda_111 = -180,
  lambda_112 = -181,
  chr_48 = -182,
  chr_49 = -183,
  value_range_1353_1 = -184,
  lambda_113 = -185,
  lambda_114 = -186,
  lambda_115 = -187,
  str_0o = -188,
  lambda_116 = -189,
  lambda_117 = -190,
  chr_55 = -191,
  value_range_1364_1 = -192,
  lambda_118 = -193,
  lambda_119 = -194,
  lambda_120 = -195,
  str_0x = -196,
  lambda_121 = -197,
  lambda_122 = -198,
  chr_57 = -199,
  value_range_1375_1 = -200,
  chr_97 = -201,
  chr_102 = -202,
  value_range_1378_1 = -203,
  chr_65 = -204,
  chr_70 = -205,
  value_range_1381_1 = -206,
  lambda_123 = -207,
  num_4 = -208,
  lambda_a__f = -209,
  lambda_A__F = -210,
  lambda_124 = -211,
  lambda_125 = -212,
  lambda_126 = -213,
  lambda_127 = -214,
  lambda_128 = -215,
  lambda_129 = -216,
  func_std__parse_number = -217,
  lambda_130 = -218,
  lambda_131 = -219,
  lambda_132 = -220,
  chr_43 = -221,
  lambda_133 = -222,
  lambda_134 = -223,
  lambda_135 = -224,
  chr_98 = -225,
  lambda_b = -226,
  chr_111 = -227,
  lambda_o = -228,
  chr_120 = -229,
  lambda_x = -230,
  func_parse = -231,
  lambda_skip_one_ore_more_digits = -232,
  lambda_136 = -233,
  chr_101 = -234,
  chr_69 = -235,
  sequence_1460_1 = -236,
  chr_46 = -237,
  lambda_137 = -238,
  lambda_2_skip_one_ore_more_digits = -239,
  lambda_138 = -240,
  func_skip_one_ore_more_digits = -241,
  lambda_139 = -242,
  lambda_140 = -243,
  lambda_141 = -244,
  lambda_142 = -245,
  lambda_143 = -246,
  lambda_8_loop = -247,
  lambda_144 = -248,
  lambda_145 = -249,
  func_handle_exponent = -250,
  lambda_146 = -251,
  lambda_147 = -252,
  lambda_148 = -253,
  lambda_149 = -254,
  func_return_integer = -255,
  func_return_real = -256,
  func_parse_binary = -257,
  lambda_150 = -258,
  lambda_151 = -259,
  lambda_152 = -260,
  lambda_153 = -261,
  lambda_154 = -262,
  lambda_9_loop = -263,
  lambda_155 = -264,
  lambda_156 = -265,
  lambda_157 = -266,
  lambda_158 = -267,
  lambda_159 = -268,
  func_parse_octal = -269,
  lambda_160 = -270,
  lambda_161 = -271,
  lambda_162 = -272,
  lambda_163 = -273,
  lambda_164 = -274,
  lambda_10_loop = -275,
  lambda_165 = -276,
  lambda_166 = -277,
  lambda_167 = -278,
  lambda_168 = -279,
  lambda_169 = -280,
  func_std__parse_hex = -281,
  lambda_170 = -282,
  lambda_171 = -283,
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
  func_handle_more_digits = -295,
  lambda_11_loop = -296,
  lambda_183 = -297,
  lambda_184 = -298,
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
  func_std_types__string___to_integer = -310,
  lambda_196 = -311,
  lambda_197 = -312,
  func_std_types__string___to_number = -313,
  lambda_198 = -314,
  lambda_199 = -315,
  func_std__map_characters = -316,
  lambda_200 = -317,
  lambda_201 = -318,
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
  func_std_types__string___to_upper_case = -329,
  func_std_types__string___to_lower_case = -330,
  func_std_types__string___to_title_case = -331,
  lambda_212 = -332,
  lambda_213 = -333,
  lambda_214 = -334,
  lambda_215 = -335,
  func_std_types__string___to_sentence_case = -336,
  lambda_216 = -337,
  lambda_217 = -338,
  lambda_218 = -339,
  lambda_219 = -340,
  func_std__delete_all = -341,
  func_delete_all = -342,
  lambda_220 = -343,
  lambda_221 = -344,
  lambda_222 = -345,
  lambda_223 = -346,
  lambda_224 = -347,
  func_std__replace_all = -348,
  func_replace_all = -349,
  lambda_225 = -350,
  lambda_226 = -351,
  lambda_227 = -352,
  lambda_228 = -353,
  lambda_replacement_is_a_string = -354,
  lambda_229 = -355,
  lambda_230 = -356,
  func_std__replace_first = -357,
  func_replace_first = -358,
  lambda_231 = -359,
  lambda_232 = -360,
  lambda_233 = -361,
  lambda_234 = -362,
  lambda_235 = -363,
  lambda_236 = -364,
  func_std__count_occurrences = -365,
  func_search_next = -366,
  lambda_237 = -367,
  lambda_238 = -368,
  lambda_n_is_defined = -369,
  lambda_239 = -370,
  num_300 = -371,
  func_std__split_into_lines = -372,
  lambda_12_loop = -373,
  lambda_240 = -374,
  lambda_241 = -375,
  lambda_242 = -376,
  lambda_243 = -377,
  lambda_244 = -378,
  lambda_245 = -379,
  func_std__split_into_indented_lines = -380,
  func_split = -381,
  lambda_246 = -382,
  lambda_247 = -383,
  lambda_248 = -384,
  lambda_249 = -385,
  lambda_250 = -386,
  lambda_251 = -387,
  lambda_252 = -388,
  lambda_ls_is_defined = -389,
  lambda_253 = -390,
  lambda_254 = -391,
  lambda_255 = -392,
  lambda_256 = -393,
  lambda_13_loop = -394,
  lambda_257 = -395,
  lambda_258 = -396,
  func_create_line = -397,
  lambda_14_loop = -398,
  chr_9 = -399,
  lambda_259 = -400,
  lambda_260 = -401,
  lambda_261 = -402,
  lambda_262 = -403,
  string_7 = -404,
  lambda_263 = -405,
  lambda_264 = -406,
  num_20 = -407,
  num_9999 = -408,
  func_indent_of = -409,
  lambda_265 = -410,
  lambda_266 = -411,
  func_std__split_into_groups = -412,
  lambda_15_loop = -413,
  lambda_267 = -414,
  lambda_indent_is_defined = -415,
  lambda_268 = -416,
  lambda_269 = -417,
  func_2_split = -418,
  lambda_270 = -419,
  lambda_271 = -420,
  lambda_272 = -421,
  lambda_273 = -422,
  lambda_274 = -423,
  lambda_275 = -424,
  lambda_276 = -425,
  lambda_277 = -426,
  lambda_278 = -427,
  lambda_279 = -428,
  lambda_280 = -429,
  lambda_gs_is_defined = -430,
  lambda_16_loop = -431,
  lambda_281 = -432,
  lambda_282 = -433,
  lambda_283 = -434,
  lambda_284 = -435,
  lambda_285 = -436,
  lambda_286 = -437,
  lambda_287 = -438,
  lambda_288 = -439,
  func_add_groups = -440,
  lambda_289 = -441,
  lambda_290 = -442,
  lambda_291 = -443,
  lambda_292 = -444,
  func_reduce_minimum_indent_and_next = -445,
  lambda_293 = -446,
  lambda_294 = -447,
  func_start_new_fragment_and_next = -448,
  func_std__wrap_words = -449,
  lambda_17_loop = -450,
  lambda_295 = -451,
  lambda_296 = -452,
  lambda_297 = -453,
  lambda_298 = -454,
  lambda_299 = -455,
  lambda_300 = -456,
  lambda_301 = -457,
  lambda_302 = -458,
  lambda_303 = -459,
  lambda_b_is_defined = -460,
  lambda_304 = -461,
  func_std_types__string___serialize = -462,
  string_8 = -463,
  lambda_305 = -464,
  lambda_306 = -465,
  chr_126 = -466,
  lambda_307 = -467,
  chr_34 = -468,
  lambda_308 = -469,
  chr_64 = -470,
  lambda_309 = -471,
  string_9 = -472,
  string_10 = -473,
  lambda_310 = -474,
  string_11 = -475,
  lambda_311 = -476,
  lambda_312 = -477,
  func_std__indented = -478,
  lambda_18_loop = -479,
  lambda_313 = -480,
  lambda_314 = -481,
  lambda_315 = -482,
  lambda_316 = -483,
  lambda_317 = -484,
  lambda_318 = -485,
  lambda_319 = -486,
  lambda_320 = -487,
  lambda_321 = -488,
  func_skip_indent = -489,
  lambda_322 = -490,
  lambda_323 = -491,
  lambda_324 = -492,
  func_skip_spaces = -493,
  lambda_325 = -494,
  lambda_326 = -495,
  lambda_327 = -496,
  uni_LEFT = -497,
  uni_RIGHT = -498,
  uni_CENTER = -499,
  func_std__format = -500,
  lambda_19_loop = -501,
  lambda_328 = -502,
  lambda_329 = -503,
  chr_37 = -504,
  lambda_330 = -505,
  lambda_331 = -506,
  lambda_332 = -507,
  chr_108 = -508,
  lambda_l = -509,
  chr_114 = -510,
  lambda_r = -511,
  chr_99 = -512,
  lambda_c = -513,
  lambda_333 = -514,
  lambda_334 = -515,
  lambda_335 = -516,
  lambda_336 = -517,
  lambda_337 = -518,
  lambda_338 = -519,
  lambda_339 = -520,
  lambda_340 = -521,
  lambda_341 = -522,
  lambda_342 = -523,
  lambda_343 = -524,
  lambda_344 = -525,
  lambda_345 = -526,
  lambda_346 = -527,
  lambda_347 = -528,
  lambda_348 = -529,
  lambda_349 = -530,
  lambda_350 = -531,
  lambda_351 = -532,
  lambda_352 = -533,
  lambda_353 = -534,
  lambda_354 = -535,
  lambda_355 = -536,
  chr_92 = -537,
  lambda_356 = -538,
  lambda_357 = -539,
  lambda_358 = -540,
  lambda_359 = -541,
  func_add_argument = -542,
  lambda_decimal_width_is_defined = -543,
  lambda_360 = -544,
  lambda_361 = -545,
  string_12 = -546,
  string_13 = -547,
  lambda_362 = -548,
  lambda_LEFT = -549,
  lambda_RIGHT = -550,
  func_real_to_string = -551,
  lambda_20_loop = -552,
  lambda_363 = -553,
  lambda_364 = -554,
  lambda_365 = -555,
  func_2_handle_exponent = -556,
  lambda_366 = -557,
  lambda_367 = -558,
  lambda_368 = -559,
  lambda_369 = -560,
  lambda_370 = -561,
  lambda_371 = -562,
  lambda_372 = -563,
  string_14 = -564,
  lambda_373 = -565
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
  var_1078_0_self, // dynamic
  var_1079_0_separator, // dynamic
  var_empty_list, // extern
  var_1085_1_items, // dynamic
  var_1087_8_pos, // dynamic
  var_1087_13_len, // dynamic
  var_push, // extern
  var_std__join, // initialized
  var_1119_0_separator, // dynamic
  var_std__trim, // initialized
  var_1148_0_self, // dynamic
  var_1149_0_test, // dynamic
  var_is_a_whitespace_character, // extern
  var_1151_1_s, // dynamic
  var_1152_1_e, // dynamic
  var_std__trim_left, // initialized
  var_1188_0_self, // dynamic
  var_1189_0_test, // dynamic
  var_1191_1_s, // dynamic
  var_1192_1_e, // dynamic
  var_std__trim_right, // initialized
  var_1222_0_self, // dynamic
  var_1223_0_test, // dynamic
  var_1225_1_e, // dynamic
  var_std__normalize, // initialized
  var_1256_0_self, // dynamic
  var_1258_1_buf, // dynamic
  var_1259_1_e, // dynamic
  var_1260_1_i, // dynamic
  var_is_not_empty, // extern
  var_update_if, // extern
  var_1275_1_s, // dynamic
  var_std__parse_integer, // initialized
  var_1318_0_self, // dynamic
  var_1339_1_negate, // dynamic
  var_1345_1_value, // dynamic
  var_1326_17_idx, // dynamic
  var_1338_1_orig, // dynamic
  var_1350_3_idx, // dynamic
  var_1350_7_chr, // dynamic
  var_std__value_range, // extern
  var_for_each, // extern
  var_1362_3_idx, // dynamic
  var_1362_7_chr, // dynamic
  var_1373_3_idx, // dynamic
  var_1373_7_chr, // dynamic
  var_1389_3_idx, // dynamic
  var_1389_7_chr, // dynamic
  var_cond, // extern
  var_std__parse_number, // initialized
  var_1425_0_self, // dynamic
  var_1427_1_i, // dynamic
  var_1428_1_n, // dynamic
  var_1433_1_sign_chr, // dynamic
  var_std__or, // extern
  var_parse_hex, // extern
  var_std__sequence, // extern
  var_1463_28_cont, // dynamic
  var_1468_1_digit, // dynamic
  var_1479_1_next_digit, // dynamic
  var_1491_1_exp_sign_chr, // dynamic
  var_integer, // extern
  var_real, // extern
  var_1499_16_str, // dynamic
  var_1499_20_i, // dynamic
  var_1500_1_n, // dynamic
  var_1504_1_digit, // dynamic
  var_1509_1_value, // dynamic
  var_1516_1_next_digit, // dynamic
  var_1523_15_str, // dynamic
  var_1523_19_i, // dynamic
  var_1524_1_n, // dynamic
  var_1528_1_digit, // dynamic
  var_1533_1_value, // dynamic
  var_1540_1_next_digit, // dynamic
  var_std__parse_hex, // initialized
  var_1575_0_str, // dynamic
  var_1576_0_i, // dynamic
  var_1578_1_n, // dynamic
  var_1582_1_digit, // dynamic
  var_1592_22_value, // dynamic
  var_1599_1_next_digit, // dynamic
  var_to_integer, // extern polymorphic
  var_1648_21_value, // dynamic
  var_parse_integer, // extern
  var_to_number, // extern polymorphic
  var_1690_20_value, // dynamic
  var_parse_number, // extern
  var_std__map_characters, // initialized
  var_1717_0_self, // dynamic
  var_1718_0_function, // dynamic
  var_parameter_count_of, // extern
  var_1724_3_s, // dynamic
  var_1724_5_e, // dynamic
  var_1720_1_map, // dynamic
  var_1737_3_s, // dynamic
  var_1737_5_e, // dynamic
  var_to_upper_case, // extern polymorphic
  var_map_characters, // extern
  var_to_lower_case, // extern polymorphic
  var_to_title_case, // extern polymorphic
  var_1814_0_self, // dynamic
  var_1816_22_idx, // dynamic
  var_1816_26_chr, // dynamic
  var_is_a_letter_character, // extern
  var_to_sentence_case, // extern polymorphic
  var_1840_0_self, // dynamic
  var_1842_22_idx, // dynamic
  var_1842_26_chr, // dynamic
  var_std__delete_all, // initialized
  var_1870_0_expressions, // dynamic
  var_1872_14_txt, // dynamic
  var_1886_1_new_text, // dynamic
  var_1879_1_len, // dynamic
  var_if_not, // extern
  var_std__replace_all, // initialized
  var_1911_0_args, // dynamic
  var_1913_15_txt, // dynamic
  var_1934_1_new_text, // dynamic
  var_1920_17_replacement, // dynamic
  var_1921_1_len, // dynamic
  var_std__replace_first, // initialized
  var_1959_0_args, // dynamic
  var_1961_17_txt, // dynamic
  var_1981_1_new_text, // dynamic
  var_1968_17_replacement, // dynamic
  var_1969_1_len, // dynamic
  var_update_if_not, // extern
  var_std__count_occurrences, // initialized
  var_2004_0_expr, // dynamic
  var_2006_15_txt, // dynamic
  var_2006_19_count, // dynamic
  var_2011_1_n, // dynamic
  var_std__split_into_lines, // initialized
  var_2062_25_text, // dynamic
  var_2063_1_lines, // dynamic
  var_2064_1_i, // dynamic
  var_2065_1_n, // dynamic
  var_2066_1_s, // dynamic
  var_std__split_into_indented_lines, // initialized
  var_2145_0_text, // dynamic
  var_2150_9_s, // dynamic
  var_2150_11_e, // dynamic
  var_2156_1_lines, // dynamic
  var_2157_1_ls, // dynamic
  var_2163_3_i, // dynamic
  var_from_to, // extern
  var_2184_15_s, // dynamic
  var_2184_17_e, // dynamic
  var_2185_1_indent, // dynamic
  var_2199_1_line_text, // dynamic
  var_tuple, // extern
  var_std__subgroups_of, // attribute with setter
  var_2210_13_line, // dynamic
  var_first, // extern
  var_std__split_into_groups, // initialized
  var_2267_0_lines, // dynamic
  var_2269_1_n, // dynamic
  var_2270_1_fv, // dynamic
  var_2274_1_indent, // dynamic
  var_2283_9_s, // dynamic
  var_2283_11_e, // dynamic
  var_2283_13_indent, // dynamic
  var_2283_20_gs, // dynamic
  var_2289_1_groups, // dynamic
  var_2290_1_minimum_indent, // dynamic
  var_2291_1_ge, // dynamic
  var_2293_3_i, // dynamic
  var_2294_1_current_indent, // dynamic
  var_2319_1_current_indent, // dynamic
  var_2332_14_l, // dynamic
  var_subgroups_of, // extern polymorphic
  var_2344_34_current_indent, // dynamic
  var_std__wrap_words, // initialized
  var_2384_0_text, // dynamic
  var_2385_0_width, // dynamic
  var_2387_1_wrapped_text, // dynamic
  var_2388_1_n, // dynamic
  var_2389_1_s, // dynamic
  var_2390_1_l, // dynamic
  var_2391_1_b, // dynamic
  var_2392_1_i, // dynamic
  var_2398_1_chr, // dynamic
  var_serialize, // extern polymorphic
  var_2460_0_self, // dynamic
  var_2461_0_indent, // dynamic
  var_2463_1_str, // dynamic
  var_2464_1_s, // dynamic
  var_2466_3_idx, // dynamic
  var_2466_7_chr, // dynamic
  var_tabs_and_spaces, // extern
  var_std__indented, // initialized
  var_2512_0_indent, // dynamic
  var_2513_0_text, // dynamic
  var_2515_1_indented_text, // dynamic
  var_2516_1_new_indent, // dynamic
  var_2517_1_i, // dynamic
  var_2518_1_n, // dynamic
  var_2531_1_s, // dynamic
  var_std__format, // initialized
  var_2601_0_template, // dynamic
  var_2602_0_arguments, // dynamic
  var_2604_1_output, // dynamic
  var_2605_1_arg_idx, // dynamic
  var_2606_1_i, // dynamic
  var_2607_1_n, // dynamic
  var_2613_1_chr, // dynamic
  var_2621_18_alignment, // dynamic
  var_2626_1_len_chr, // dynamic
  var_2631_1_width, // dynamic
  var_2639_1_fmt_chr, // dynamic
  var_2658_1_dw_chr, // dynamic
  var_2663_1_dw, // dynamic
  var_2671_1_fmt_chr, // dynamic
  var_2696_0_alignment, // dynamic
  var_2697_0_width, // dynamic
  var_2698_0_decimal_width, // dynamic
  var_2700_1_argument, // dynamic
  var_is_undefined, // extern
  var_pad_left, // extern
  var_pad_right, // extern
  var_truncate, // extern
  var_2723_1_str, // dynamic
  var_2724_1_n, // dynamic
  var_2725_1_i, // dynamic
  var_2743_1_exp, // dynamic
  var_2744_1_man, // dynamic
  var_2749_1_zeros, // dynamic
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
  MANDATORY_PARAMETER, var_1078_0_self,
  chr_32, var_1079_0_separator,
  // is_empty
  var_is_empty, 1, var_1078_0_self, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_77, lambda_78, TAIL_CALL,
  POS(1082, 10),
  POS(1081, 3)
};

static TAB_NUM t_lambda_77[] = {
  0, // locals
  0, // parameters
  //  empty_list
  LET, 1, var_empty_list, TAIL_CALL,
  POS(1083, 7)
};

static TAB_NUM t_lambda_78[] = {
  0, // locals
  0, // parameters
  // $items empty_list
  LET, 1, var_empty_list, 1, var_1085_1_items,
  // loop:
  var_loop, 1, lambda_2_loop, TAIL_CALL,
  POS(1085, 7),
  POS(1086, 7)
};

static TAB_NUM t_lambda_2_loop[] = {
  1, // locals
  0, // parameters
  // search $pos $len separator self
  var_search, 2, var_1079_0_separator, var_1078_0_self, 2, var_1087_8_pos, var_1087_13_len,
  // is_defined:
  var_is_defined, 1, var_1087_8_pos, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_pos_is_defined, lambda_79, TAIL_CALL,
  POS(1087, 9),
  POS(1089, 15),
  POS(1088, 9)
};

static TAB_NUM t_lambda_pos_is_defined[] = {
  2, // locals
  0, // parameters
  // pos-1)
  var_std__minus, 2, var_1087_8_pos, num_1, 1, LOCAL(1),
  // range(self 1 pos-1)
  var_range, 3, var_1078_0_self, num_1, LOCAL(1), 1, LOCAL(2),
  // push &items range(self 1 pos-1)
  var_push, 2, var_1085_1_items, LOCAL(2), 1, var_1085_1_items,
  // pos+len -1
  var_std__plus, 2, var_1087_8_pos, var_1087_13_len, 1, LOCAL(1),
  // range &self pos+len -1
  var_range, 3, var_1078_0_self, LOCAL(1), minus_num_1, 1, var_1078_0_self,
  // next
  var_next, 0, TAIL_CALL,
  POS(1090, 38),
  POS(1090, 25),
  POS(1090, 13),
  POS(1091, 25),
  POS(1091, 13),
  POS(1092, 13)
};

static TAB_NUM t_lambda_79[] = {
  1, // locals
  0, // parameters
  // push(items self)
  var_push, 2, var_1085_1_items, var_1078_0_self, 1, LOCAL(1),
  //  push(items self)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1093, 14),
  POS(1093, 13)
};

static TAB_NUM t_func_std__join[] = {
  1, // locals
  -2, // parameters
  MANDATORY_PARAMETER, LOCAL(1), // 1118_0_items
  string_2, var_1119_0_separator,
  // to_string &separator
  var_to_string, 1, var_1119_0_separator, 1, var_1119_0_separator,
  // map_reduce
  var_map_reduce, 4, LOCAL(1), var_to_string, lambda_80, string_1, TAIL_CALL,
  POS(1121, 3),
  POS(1122, 3)
};

static TAB_NUM t_lambda_80[] = {
  2, // locals
  2, // parameters
  LOCAL(1), // 1124_3_left
  LOCAL(2), // 1124_8_right
  // append left separator right
  var_append, 3, LOCAL(1), var_1119_0_separator, LOCAL(2), TAIL_CALL,
  POS(1124, 20)
};

static TAB_NUM t_func_std__trim[] = {
  0, // locals
  -2, // parameters
  MANDATORY_PARAMETER, var_1148_0_self,
  var_is_a_whitespace_character, var_1149_0_test,
  // $s 1
  LET, 1, num_1, 1, var_1151_1_s,
  // $e length_of(self)
  var_length_of, 1, var_1148_0_self, 1, var_1152_1_e,
  // loop:
  var_loop, 1, lambda_3_loop, TAIL_CALL,
  POS(1151, 3),
  POS(1152, 3),
  POS(1153, 3)
};

static TAB_NUM t_lambda_3_loop[] = {
  3, // locals
  0, // parameters
  // e && test(self(s)):
  var_std__less, 2, var_1152_1_e, var_1151_1_s, 1, LOCAL(1),
  // e && test(self(s)):
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // e && test(self(s)):
  var_std__and, 2, LOCAL(2), lambda_81, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_82, lambda_83, TAIL_CALL,
  POS(1155, 12),
  POS(1155, 12),
  POS(1155, 12),
  POS(1154, 5)
};

static TAB_NUM t_lambda_81[] = {
  2, // locals
  0, // parameters
  // self(s)):
  var_1148_0_self, 1, var_1151_1_s, 1, LOCAL(1),
  // test(self(s)):
  var_1149_0_test, 1, LOCAL(1), 1, LOCAL(2),
  // test(self(s)):
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1155, 22),
  POS(1155, 17),
  POS(1155, 17)
};

static TAB_NUM t_lambda_82[] = {
  0, // locals
  0, // parameters
  // inc &s
  var_inc, 1, var_1151_1_s, 1, var_1151_1_s,
  // next
  var_next, 0, TAIL_CALL,
  POS(1156, 9),
  POS(1157, 9)
};

static TAB_NUM t_lambda_83[] = {
  0, // locals
  0, // parameters
  // loop:
  var_loop, 1, lambda_4_loop, TAIL_CALL,
  POS(1159, 9)
};

static TAB_NUM t_lambda_4_loop[] = {
  3, // locals
  0, // parameters
  // e >= s && test(self(e)):
  var_std__less, 2, var_1152_1_e, var_1151_1_s, 1, LOCAL(1),
  // e >= s && test(self(e)):
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // e >= s && test(self(e)):
  var_std__and, 2, LOCAL(2), lambda_84, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_85, lambda_86, TAIL_CALL,
  POS(1161, 13),
  POS(1161, 13),
  POS(1161, 13),
  POS(1160, 11)
};

static TAB_NUM t_lambda_84[] = {
  2, // locals
  0, // parameters
  // self(e)):
  var_1148_0_self, 1, var_1152_1_e, 1, LOCAL(1),
  // test(self(e)):
  var_1149_0_test, 1, LOCAL(1), 1, LOCAL(2),
  // test(self(e)):
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1161, 28),
  POS(1161, 23),
  POS(1161, 23)
};

static TAB_NUM t_lambda_85[] = {
  0, // locals
  0, // parameters
  // dec &e
  var_dec, 1, var_1152_1_e, 1, var_1152_1_e,
  // next
  var_next, 0, TAIL_CALL,
  POS(1162, 15),
  POS(1163, 15)
};

static TAB_NUM t_lambda_86[] = {
  0, // locals
  0, // parameters
  // range self s e
  var_range, 3, var_1148_0_self, var_1151_1_s, var_1152_1_e, TAIL_CALL,
  POS(1165, 15)
};

static TAB_NUM t_func_std__trim_left[] = {
  0, // locals
  -2, // parameters
  MANDATORY_PARAMETER, var_1188_0_self,
  var_is_a_whitespace_character, var_1189_0_test,
  // $s 1
  LET, 1, num_1, 1, var_1191_1_s,
  // $e length_of(self)
  var_length_of, 1, var_1188_0_self, 1, var_1192_1_e,
  // loop:
  var_loop, 1, lambda_5_loop, TAIL_CALL,
  POS(1191, 3),
  POS(1192, 3),
  POS(1193, 3)
};

static TAB_NUM t_lambda_5_loop[] = {
  3, // locals
  0, // parameters
  // e && test(self(s)):
  var_std__less, 2, var_1192_1_e, var_1191_1_s, 1, LOCAL(1),
  // e && test(self(s)):
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // e && test(self(s)):
  var_std__and, 2, LOCAL(2), lambda_87, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_88, lambda_89, TAIL_CALL,
  POS(1195, 12),
  POS(1195, 12),
  POS(1195, 12),
  POS(1194, 5)
};

static TAB_NUM t_lambda_87[] = {
  2, // locals
  0, // parameters
  // self(s)):
  var_1188_0_self, 1, var_1191_1_s, 1, LOCAL(1),
  // test(self(s)):
  var_1189_0_test, 1, LOCAL(1), 1, LOCAL(2),
  // test(self(s)):
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1195, 22),
  POS(1195, 17),
  POS(1195, 17)
};

static TAB_NUM t_lambda_88[] = {
  0, // locals
  0, // parameters
  // inc &s
  var_inc, 1, var_1191_1_s, 1, var_1191_1_s,
  // next
  var_next, 0, TAIL_CALL,
  POS(1196, 9),
  POS(1197, 9)
};

static TAB_NUM t_lambda_89[] = {
  0, // locals
  0, // parameters
  // range self s e
  var_range, 3, var_1188_0_self, var_1191_1_s, var_1192_1_e, TAIL_CALL,
  POS(1199, 9)
};

static TAB_NUM t_func_std__trim_right[] = {
  0, // locals
  -2, // parameters
  MANDATORY_PARAMETER, var_1222_0_self,
  var_is_a_whitespace_character, var_1223_0_test,
  // $e length_of(self)
  var_length_of, 1, var_1222_0_self, 1, var_1225_1_e,
  // loop:
  var_loop, 1, lambda_6_loop, TAIL_CALL,
  POS(1225, 3),
  POS(1226, 3)
};

static TAB_NUM t_lambda_6_loop[] = {
  3, // locals
  0, // parameters
  // e >= 1 && test(self(e)):
  var_std__less, 2, var_1225_1_e, num_1, 1, LOCAL(1),
  // e >= 1 && test(self(e)):
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // e >= 1 && test(self(e)):
  var_std__and, 2, LOCAL(2), lambda_90, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_91, lambda_92, TAIL_CALL,
  POS(1228, 7),
  POS(1228, 7),
  POS(1228, 7),
  POS(1227, 5)
};

static TAB_NUM t_lambda_90[] = {
  2, // locals
  0, // parameters
  // self(e)):
  var_1222_0_self, 1, var_1225_1_e, 1, LOCAL(1),
  // test(self(e)):
  var_1223_0_test, 1, LOCAL(1), 1, LOCAL(2),
  // test(self(e)):
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1228, 22),
  POS(1228, 17),
  POS(1228, 17)
};

static TAB_NUM t_lambda_91[] = {
  0, // locals
  0, // parameters
  // dec &e
  var_dec, 1, var_1225_1_e, 1, var_1225_1_e,
  // next
  var_next, 0, TAIL_CALL,
  POS(1229, 9),
  POS(1230, 9)
};

static TAB_NUM t_lambda_92[] = {
  0, // locals
  0, // parameters
  // range self 1 e
  var_range, 3, var_1222_0_self, num_1, var_1225_1_e, TAIL_CALL,
  POS(1232, 9)
};

static TAB_NUM t_func_std__normalize[] = {
  0, // locals
  1, // parameters
  var_1256_0_self,
  // $buf ""
  LET, 1, string_1, 1, var_1258_1_buf,
  // $e length_of(self)
  var_length_of, 1, var_1256_0_self, 1, var_1259_1_e,
  // $i 0
  LET, 1, num_0, 1, var_1260_1_i,
  // loop:
  var_loop, 1, lambda_7_loop, TAIL_CALL,
  POS(1258, 3),
  POS(1259, 3),
  POS(1260, 3),
  POS(1261, 3)
};

static TAB_NUM t_lambda_7_loop[] = {
  0, // locals
  0, // parameters
  // loop
  var_loop, 2, lambda_93, lambda_96, TAIL_CALL,
  POS(1262, 5)
};

static TAB_NUM t_lambda_93[] = {
  1, // locals
  0, // parameters
  // inc &i
  var_inc, 1, var_1260_1_i, 1, var_1260_1_i,
  // e
  var_std__less, 2, var_1259_1_e, var_1260_1_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_94, lambda_95, TAIL_CALL,
  POS(1264, 9),
  POS(1266, 15),
  POS(1265, 9)
};

static TAB_NUM t_lambda_94[] = {
  0, // locals
  0, // parameters
  //  buf
  LET, 1, var_1258_1_buf, TAIL_CALL,
  POS(1267, 13)
};

static TAB_NUM t_lambda_95[] = {
  2, // locals
  0, // parameters
  // self(i).is_a_whitespace_character
  var_1256_0_self, 1, var_1260_1_i, 1, LOCAL(1),
  // is_a_whitespace_character
  var_is_a_whitespace_character, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), var_next, var_break, TAIL_CALL,
  POS(1270, 15),
  POS(1270, 23),
  POS(1269, 13)
};

static TAB_NUM t_lambda_96[] = {
  1, // locals
  0, // parameters
  // is_not_empty &buf -> push(buf ' ')
  var_is_not_empty, 1, var_1258_1_buf, 1, LOCAL(1),
  // update_if buf.is_not_empty &buf -> push(buf ' ')
  var_update_if, 3, LOCAL(1), var_1258_1_buf, lambda_97, 1, var_1258_1_buf,
  // $s i
  LET, 1, var_1260_1_i, 1, var_1275_1_s,
  // loop
  var_loop, 2, lambda_98, lambda_101, TAIL_CALL,
  POS(1274, 23),
  POS(1274, 9),
  POS(1275, 9),
  POS(1276, 9)
};

static TAB_NUM t_lambda_97[] = {
  1, // locals
  0, // parameters
  // push(buf ' ')
  var_push, 2, var_1258_1_buf, chr_32, 1, LOCAL(1),
  //  push(buf ' ')
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1274, 44),
  POS(1274, 43)
};

static TAB_NUM t_lambda_98[] = {
  1, // locals
  0, // parameters
  // inc &i
  var_inc, 1, var_1260_1_i, 1, var_1260_1_i,
  // e
  var_std__less, 2, var_1259_1_e, var_1260_1_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_99, lambda_100, TAIL_CALL,
  POS(1278, 13),
  POS(1280, 19),
  POS(1279, 13)
};

static TAB_NUM t_lambda_99[] = {
  2, // locals
  0, // parameters
  // range(self s e))
  var_range, 3, var_1256_0_self, var_1275_1_s, var_1259_1_e, 1, LOCAL(1),
  // append(buf range(self s e))
  var_append, 2, var_1258_1_buf, LOCAL(1), 1, LOCAL(2),
  //  append(buf range(self s e))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1281, 29),
  POS(1281, 18),
  POS(1281, 17)
};

static TAB_NUM t_lambda_100[] = {
  2, // locals
  0, // parameters
  // self(i).is_a_whitespace_character
  var_1256_0_self, 1, var_1260_1_i, 1, LOCAL(1),
  // is_a_whitespace_character
  var_is_a_whitespace_character, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), var_break, var_next, TAIL_CALL,
  POS(1284, 19),
  POS(1284, 27),
  POS(1283, 17)
};

static TAB_NUM t_lambda_101[] = {
  2, // locals
  0, // parameters
  // i-1)
  var_std__minus, 2, var_1260_1_i, num_1, 1, LOCAL(1),
  // range(self s i-1)
  var_range, 3, var_1256_0_self, var_1275_1_s, LOCAL(1), 1, LOCAL(2),
  // append &buf range(self s i-1)
  var_append, 2, var_1258_1_buf, LOCAL(2), 1, var_1258_1_buf,
  // next
  var_next, 0, TAIL_CALL,
  POS(1288, 38),
  POS(1288, 25),
  POS(1288, 13),
  POS(1289, 13)
};

static TAB_NUM t_func_std__parse_integer[] = {
  0, // locals
  1, // parameters
  var_1318_0_self,
  // $orig self
  LET, 1, var_1318_0_self, 1, var_1338_1_orig,
  // $negate self .has_prefix. '-'
  var_has_prefix, 2, var_1318_0_self, chr_45, 1, var_1339_1_negate,
  // !self
  var_if, 3, var_1339_1_negate, lambda_108, lambda_109, 1, var_1318_0_self,
  // $value 0
  LET, 1, num_0, 1, var_1345_1_value,
  // cond
  var_cond, 4, lambda_110, lambda_115, lambda_120, lambda_125, TAIL_CALL,
  POS(1338, 3),
  POS(1339, 3),
  POS(1340, 3),
  POS(1345, 3),
  POS(1346, 3)
};

static TAB_NUM t_func_maybe_negated[] = {
  0, // locals
  0, // parameters
  // if
  var_if, 3, var_1339_1_negate, lambda_102, lambda_103, TAIL_CALL,
  POS(1321, 5)
};

static TAB_NUM t_lambda_102[] = {
  1, // locals
  0, // parameters
  // value
  var_std__negate, 1, var_1345_1_value, 1, LOCAL(1),
  //  -value
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1323, 11),
  POS(1323, 9)
};

static TAB_NUM t_lambda_103[] = {
  0, // locals
  0, // parameters
  //  value
  LET, 1, var_1345_1_value, TAIL_CALL,
  POS(1324, 9)
};

static TAB_NUM t_func_partial_match[] = {
  1, // locals
  1, // parameters
  var_1326_17_idx,
  // 1
  var_std__less, 2, num_1, var_1326_17_idx, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_104, lambda_105, TAIL_CALL,
  POS(1328, 13),
  POS(1327, 5)
};

static TAB_NUM t_lambda_104[] = {
  2, // locals
  0, // parameters
  // range(self idx -1) maybe_negated()
  var_range, 3, var_1318_0_self, var_1326_17_idx, minus_num_1, 1, LOCAL(1),
  // maybe_negated()
  func_maybe_negated, 0, 1, LOCAL(2),
  //  range(self idx -1) maybe_negated()
  LET, 2, LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(1329, 10),
  POS(1329, 29),
  POS(1329, 9)
};

static TAB_NUM t_lambda_105[] = {
  0, // locals
  0, // parameters
  //  orig undefined
  LET, 2, var_1338_1_orig, var_undefined, TAIL_CALL,
  POS(1330, 9)
};

static TAB_NUM t_func_exhausted[] = {
  1, // locals
  0, // parameters
  // is_empty
  var_is_empty, 1, var_1318_0_self, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_106, lambda_107, TAIL_CALL,
  POS(1334, 12),
  POS(1333, 5)
};

static TAB_NUM t_lambda_106[] = {
  0, // locals
  0, // parameters
  //  orig undefined
  LET, 2, var_1338_1_orig, var_undefined, TAIL_CALL,
  POS(1335, 9)
};

static TAB_NUM t_lambda_107[] = {
  1, // locals
  0, // parameters
  // maybe_negated()
  func_maybe_negated, 0, 1, LOCAL(1),
  //  "" maybe_negated()
  LET, 2, string_1, LOCAL(1), TAIL_CALL,
  POS(1336, 13),
  POS(1336, 9)
};

static TAB_NUM t_lambda_108[] = {
  1, // locals
  0, // parameters
  // range(self 2 -1)
  var_range, 3, var_1318_0_self, num_2, minus_num_1, 1, LOCAL(1),
  //  range(self 2 -1)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1343, 10),
  POS(1343, 9)
};

static TAB_NUM t_lambda_109[] = {
  0, // locals
  0, // parameters
  //  self
  LET, 1, var_1318_0_self, TAIL_CALL,
  POS(1344, 9)
};

static TAB_NUM t_lambda_110[] = {
  1, // locals
  0, // parameters
  // self .has_prefix. "0b":
  var_has_prefix, 2, var_1318_0_self, str_0b, 1, LOCAL(1),
  //  self .has_prefix. "0b":
  LET, 2, LOCAL(1), lambda_111, TAIL_CALL,
  POS(1347, 8),
  POS(1347, 7)
};

static TAB_NUM t_lambda_111[] = {
  0, // locals
  0, // parameters
  // range &self 3 -1
  var_range, 3, var_1318_0_self, num_3, minus_num_1, 1, var_1318_0_self,
  // for_each self
  var_for_each, 3, var_1318_0_self, lambda_112, func_exhausted, TAIL_CALL,
  POS(1348, 7),
  POS(1349, 7)
};

static TAB_NUM t_lambda_112[] = {
  0, // locals
  2, // parameters
  var_1350_3_idx,
  var_1350_7_chr,
  // case
  var_case, 4, var_1350_7_chr, value_range_1353_1, lambda_113, lambda_114, TAIL_CALL,
  POS(1351, 11)
};

static TAB_NUM t_lambda_113[] = {
  2, // locals
  0, // parameters
  // value << 1)+(chr-'0')
  var_std__shift_left, 2, var_1345_1_value, num_1, 1, LOCAL(1),
  // chr-'0')
  var_std__minus, 2, var_1350_7_chr, chr_48, 1, LOCAL(2),
  // !value (value << 1)+(chr-'0')
  var_std__plus, 2, LOCAL(1), LOCAL(2), 1, var_1345_1_value,
  // next
  var_next, 0, TAIL_CALL,
  POS(1354, 23),
  POS(1354, 36),
  POS(1354, 15),
  POS(1355, 15)
};

static TAB_NUM t_lambda_114[] = {
  0, // locals
  0, // parameters
  // partial_match idx
  func_partial_match, 1, var_1350_3_idx, TAIL_CALL,
  POS(1357, 15)
};

static TAB_NUM t_lambda_115[] = {
  1, // locals
  0, // parameters
  // self .has_prefix. "0o":
  var_has_prefix, 2, var_1318_0_self, str_0o, 1, LOCAL(1),
  //  self .has_prefix. "0o":
  LET, 2, LOCAL(1), lambda_116, TAIL_CALL,
  POS(1359, 8),
  POS(1359, 7)
};

static TAB_NUM t_lambda_116[] = {
  0, // locals
  0, // parameters
  // range &self 3 -1
  var_range, 3, var_1318_0_self, num_3, minus_num_1, 1, var_1318_0_self,
  // for_each self
  var_for_each, 3, var_1318_0_self, lambda_117, func_exhausted, TAIL_CALL,
  POS(1360, 7),
  POS(1361, 7)
};

static TAB_NUM t_lambda_117[] = {
  0, // locals
  2, // parameters
  var_1362_3_idx,
  var_1362_7_chr,
  // case chr
  var_case, 4, var_1362_7_chr, value_range_1364_1, lambda_118, lambda_119, TAIL_CALL,
  POS(1363, 11)
};

static TAB_NUM t_lambda_118[] = {
  2, // locals
  0, // parameters
  // value << 3)+(chr-'0')
  var_std__shift_left, 2, var_1345_1_value, num_3, 1, LOCAL(1),
  // chr-'0')
  var_std__minus, 2, var_1362_7_chr, chr_48, 1, LOCAL(2),
  // !value (value << 3)+(chr-'0')
  var_std__plus, 2, LOCAL(1), LOCAL(2), 1, var_1345_1_value,
  // next
  var_next, 0, TAIL_CALL,
  POS(1365, 23),
  POS(1365, 36),
  POS(1365, 15),
  POS(1366, 15)
};

static TAB_NUM t_lambda_119[] = {
  0, // locals
  0, // parameters
  // partial_match idx
  func_partial_match, 1, var_1362_3_idx, TAIL_CALL,
  POS(1368, 15)
};

static TAB_NUM t_lambda_120[] = {
  1, // locals
  0, // parameters
  // self .has_prefix. "0x":
  var_has_prefix, 2, var_1318_0_self, str_0x, 1, LOCAL(1),
  //  self .has_prefix. "0x":
  LET, 2, LOCAL(1), lambda_121, TAIL_CALL,
  POS(1370, 8),
  POS(1370, 7)
};

static TAB_NUM t_lambda_121[] = {
  0, // locals
  0, // parameters
  // range &self 3 -1
  var_range, 3, var_1318_0_self, num_3, minus_num_1, 1, var_1318_0_self,
  // for_each self
  var_for_each, 3, var_1318_0_self, lambda_122, func_exhausted, TAIL_CALL,
  POS(1371, 7),
  POS(1372, 7)
};

static TAB_NUM t_lambda_122[] = {
  0, // locals
  2, // parameters
  var_1373_3_idx,
  var_1373_7_chr,
  // case chr
  var_case, 8, var_1373_7_chr, value_range_1375_1, lambda_123, value_range_1378_1, lambda_a__f, value_range_1381_1, lambda_A__F, lambda_124, TAIL_CALL,
  POS(1374, 11)
};

static TAB_NUM t_lambda_123[] = {
  2, // locals
  0, // parameters
  // value << 4)+(chr-'0')
  var_std__shift_left, 2, var_1345_1_value, num_4, 1, LOCAL(1),
  // chr-'0')
  var_std__minus, 2, var_1373_7_chr, chr_48, 1, LOCAL(2),
  // !value (value << 4)+(chr-'0')
  var_std__plus, 2, LOCAL(1), LOCAL(2), 1, var_1345_1_value,
  // next
  var_next, 0, TAIL_CALL,
  POS(1376, 23),
  POS(1376, 36),
  POS(1376, 15),
  POS(1377, 15)
};

static TAB_NUM t_lambda_a__f[] = {
  3, // locals
  0, // parameters
  // value << 4)+(chr-'a')+10
  var_std__shift_left, 2, var_1345_1_value, num_4, 1, LOCAL(1),
  // chr-'a')+10
  var_std__minus, 2, var_1373_7_chr, chr_97, 1, LOCAL(2),
  // value << 4)+(chr-'a')+10
  var_std__plus, 2, LOCAL(1), LOCAL(2), 1, LOCAL(3),
  // !value (value << 4)+(chr-'a')+10
  var_std__plus, 2, LOCAL(3), num_10, 1, var_1345_1_value,
  // next
  var_next, 0, TAIL_CALL,
  POS(1379, 23),
  POS(1379, 36),
  POS(1379, 23),
  POS(1379, 15),
  POS(1380, 15)
};

static TAB_NUM t_lambda_A__F[] = {
  3, // locals
  0, // parameters
  // value << 4)+(chr-'A')+10
  var_std__shift_left, 2, var_1345_1_value, num_4, 1, LOCAL(1),
  // chr-'A')+10
  var_std__minus, 2, var_1373_7_chr, chr_65, 1, LOCAL(2),
  // value << 4)+(chr-'A')+10
  var_std__plus, 2, LOCAL(1), LOCAL(2), 1, LOCAL(3),
  // !value (value << 4)+(chr-'A')+10
  var_std__plus, 2, LOCAL(3), num_10, 1, var_1345_1_value,
  // next
  var_next, 0, TAIL_CALL,
  POS(1382, 23),
  POS(1382, 36),
  POS(1382, 23),
  POS(1382, 15),
  POS(1383, 15)
};

static TAB_NUM t_lambda_124[] = {
  0, // locals
  0, // parameters
  // partial_match idx
  func_partial_match, 1, var_1373_3_idx, TAIL_CALL,
  POS(1385, 15)
};

static TAB_NUM t_lambda_125[] = {
  0, // locals
  0, // parameters
  //  true:
  LET, 2, var_true, lambda_126, TAIL_CALL,
  POS(1387, 7)
};

static TAB_NUM t_lambda_126[] = {
  0, // locals
  0, // parameters
  // for_each self
  var_for_each, 3, var_1318_0_self, lambda_127, func_exhausted, TAIL_CALL,
  POS(1388, 7)
};

static TAB_NUM t_lambda_127[] = {
  0, // locals
  2, // parameters
  var_1389_3_idx,
  var_1389_7_chr,
  // case chr
  var_case, 4, var_1389_7_chr, value_range_1375_1, lambda_128, lambda_129, TAIL_CALL,
  POS(1390, 11)
};

static TAB_NUM t_lambda_128[] = {
  2, // locals
  0, // parameters
  // 10*value+(chr-'0')
  var_std__times, 2, num_10, var_1345_1_value, 1, LOCAL(1),
  // chr-'0')
  var_std__minus, 2, var_1389_7_chr, chr_48, 1, LOCAL(2),
  // !value 10*value+(chr-'0')
  var_std__plus, 2, LOCAL(1), LOCAL(2), 1, var_1345_1_value,
  // next
  var_next, 0, TAIL_CALL,
  POS(1392, 22),
  POS(1392, 32),
  POS(1392, 15),
  POS(1393, 15)
};

static TAB_NUM t_lambda_129[] = {
  0, // locals
  0, // parameters
  // partial_match idx
  func_partial_match, 1, var_1389_3_idx, TAIL_CALL,
  POS(1395, 15)
};

static TAB_NUM t_func_std__parse_number[] = {
  1, // locals
  1, // parameters
  var_1425_0_self,
  // $i 1
  LET, 1, num_1, 1, var_1427_1_i,
  // $n length_of(self)
  var_length_of, 1, var_1425_0_self, 1, var_1428_1_n,
  // n
  var_std__less, 2, var_1428_1_n, var_1427_1_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_130, lambda_131, TAIL_CALL,
  POS(1427, 3),
  POS(1428, 3),
  POS(1430, 9),
  POS(1429, 3)
};

static TAB_NUM t_lambda_130[] = {
  0, // locals
  0, // parameters
  //  self undefined
  LET, 2, var_1425_0_self, var_undefined, TAIL_CALL,
  POS(1431, 7)
};

static TAB_NUM t_lambda_131[] = {
  3, // locals
  0, // parameters
  // $sign_chr self(1)
  var_1425_0_self, 1, num_1, 1, var_1433_1_sign_chr,
  // sign_chr == '-' || sign_chr == '+' &i -> i+1
  var_std__equal, 2, var_1433_1_sign_chr, chr_45, 1, LOCAL(1),
  // sign_chr == '-' || sign_chr == '+' &i -> i+1
  var_std__or, 2, LOCAL(1), lambda_132, 1, LOCAL(2),
  // update_if sign_chr == '-' || sign_chr == '+' &i -> i+1
  var_update_if, 3, LOCAL(2), var_1427_1_i, lambda_133, 1, var_1427_1_i,
  // self(i) == '0' && i+1 < n:
  var_1425_0_self, 1, var_1427_1_i, 1, LOCAL(1),
  // self(i) == '0' && i+1 < n:
  var_std__equal, 2, LOCAL(1), chr_48, 1, LOCAL(2),
  // self(i) == '0' && i+1 < n:
  var_std__and, 2, LOCAL(2), lambda_134, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_135, func_parse, TAIL_CALL,
  POS(1433, 7),
  POS(1434, 17),
  POS(1434, 17),
  POS(1434, 7),
  POS(1436, 9),
  POS(1436, 9),
  POS(1436, 9),
  POS(1435, 7)
};

static TAB_NUM t_lambda_132[] = {
  1, // locals
  0, // parameters
  // sign_chr == '+' &i -> i+1
  var_std__equal, 2, var_1433_1_sign_chr, chr_43, 1, LOCAL(1),
  // sign_chr == '+' &i -> i+1
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1434, 36),
  POS(1434, 36)
};

static TAB_NUM t_lambda_133[] = {
  1, // locals
  0, // parameters
  // i+1
  var_std__plus, 2, var_1427_1_i, num_1, 1, LOCAL(1),
  //  i+1
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1434, 58),
  POS(1434, 57)
};

static TAB_NUM t_lambda_134[] = {
  2, // locals
  0, // parameters
  // i+1 < n:
  var_std__plus, 2, var_1427_1_i, num_1, 1, LOCAL(1),
  // i+1 < n:
  var_std__less, 2, LOCAL(1), var_1428_1_n, 1, LOCAL(2),
  // i+1 < n:
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1436, 27),
  POS(1436, 27),
  POS(1436, 27)
};

static TAB_NUM t_lambda_135[] = {
  2, // locals
  0, // parameters
  // i+1)
  var_std__plus, 2, var_1427_1_i, num_1, 1, LOCAL(1),
  // self(i+1)
  var_1425_0_self, 1, LOCAL(1), 1, LOCAL(2),
  // case self(i+1)
  var_case, 8, LOCAL(2), chr_98, lambda_b, chr_111, lambda_o, chr_120, lambda_x, func_parse, TAIL_CALL,
  POS(1437, 21),
  POS(1437, 16),
  POS(1437, 11)
};

static TAB_NUM t_lambda_b[] = {
  1, // locals
  0, // parameters
  // i+2
  var_std__plus, 2, var_1427_1_i, num_2, 1, LOCAL(1),
  // parse_binary self i+2
  func_parse_binary, 2, var_1425_0_self, LOCAL(1), TAIL_CALL,
  POS(1438, 36),
  POS(1438, 18)
};

static TAB_NUM t_lambda_o[] = {
  1, // locals
  0, // parameters
  // i+2
  var_std__plus, 2, var_1427_1_i, num_2, 1, LOCAL(1),
  // parse_octal self i+2
  func_parse_octal, 2, var_1425_0_self, LOCAL(1), TAIL_CALL,
  POS(1439, 35),
  POS(1439, 18)
};

static TAB_NUM t_lambda_x[] = {
  1, // locals
  0, // parameters
  // i+2
  var_std__plus, 2, var_1427_1_i, num_2, 1, LOCAL(1),
  // parse_hex self i+2
  var_parse_hex, 2, var_1425_0_self, LOCAL(1), TAIL_CALL,
  POS(1440, 33),
  POS(1440, 18)
};

static TAB_NUM t_func_parse[] = {
  0, // locals
  0, // parameters
  // skip_one_ore_more_digits:
  func_skip_one_ore_more_digits, 1, lambda_skip_one_ore_more_digits, TAIL_CALL,
  POS(1445, 5)
};

static TAB_NUM t_lambda_skip_one_ore_more_digits[] = {
  1, // locals
  0, // parameters
  // n return_integer
  var_std__less, 2, var_1428_1_n, var_1427_1_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), func_return_integer, lambda_136, TAIL_CALL,
  POS(1447, 13),
  POS(1446, 7)
};

static TAB_NUM t_lambda_136[] = {
  1, // locals
  0, // parameters
  // self(i)
  var_1425_0_self, 1, var_1427_1_i, 1, LOCAL(1),
  // case self(i)
  var_case, 6, LOCAL(1), chr_46, lambda_137, sequence_1460_1, func_handle_exponent, func_return_integer, TAIL_CALL,
  POS(1449, 16),
  POS(1449, 11)
};

static TAB_NUM t_lambda_137[] = {
  0, // locals
  0, // parameters
  // !i i+1
  var_std__plus, 2, var_1427_1_i, num_1, 1, var_1427_1_i,
  // skip_one_ore_more_digits:
  func_skip_one_ore_more_digits, 1, lambda_2_skip_one_ore_more_digits, TAIL_CALL,
  POS(1451, 15),
  POS(1452, 15)
};

static TAB_NUM t_lambda_2_skip_one_ore_more_digits[] = {
  1, // locals
  0, // parameters
  // n
  var_std__less, 2, var_1428_1_n, var_1427_1_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), func_return_real, lambda_138, TAIL_CALL,
  POS(1454, 23),
  POS(1453, 17)
};

static TAB_NUM t_lambda_138[] = {
  1, // locals
  0, // parameters
  // self(i)
  var_1425_0_self, 1, var_1427_1_i, 1, LOCAL(1),
  // case self(i)
  var_case, 4, LOCAL(1), sequence_1460_1, func_handle_exponent, func_return_real, TAIL_CALL,
  POS(1457, 26),
  POS(1457, 21)
};

static TAB_NUM t_func_skip_one_ore_more_digits[] = {
  1, // locals
  1, // parameters
  var_1463_28_cont,
  // n
  var_std__less, 2, var_1428_1_n, var_1427_1_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_139, lambda_140, TAIL_CALL,
  POS(1465, 13),
  POS(1464, 7)
};

static TAB_NUM t_lambda_139[] = {
  0, // locals
  0, // parameters
  //  self undefined
  LET, 2, var_1425_0_self, var_undefined, TAIL_CALL,
  POS(1466, 11)
};

static TAB_NUM t_lambda_140[] = {
  2, // locals
  0, // parameters
  // $digit self(i)
  var_1425_0_self, 1, var_1427_1_i, 1, var_1468_1_digit,
  // digit < '0' || digit > '9'
  var_std__less, 2, var_1468_1_digit, chr_48, 1, LOCAL(1),
  // digit < '0' || digit > '9'
  var_std__or, 2, LOCAL(1), lambda_141, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_142, lambda_143, TAIL_CALL,
  POS(1468, 11),
  POS(1470, 13),
  POS(1470, 13),
  POS(1469, 11)
};

static TAB_NUM t_lambda_141[] = {
  1, // locals
  0, // parameters
  // 9'
  var_std__less, 2, chr_57, var_1468_1_digit, 1, LOCAL(1),
  // digit > '9'
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1470, 37),
  POS(1470, 28)
};

static TAB_NUM t_lambda_142[] = {
  0, // locals
  0, // parameters
  //  self undefined
  LET, 2, var_1425_0_self, var_undefined, TAIL_CALL,
  POS(1471, 15)
};

static TAB_NUM t_lambda_143[] = {
  0, // locals
  0, // parameters
  // loop:
  var_loop, 1, lambda_8_loop, TAIL_CALL,
  POS(1473, 15)
};

static TAB_NUM t_lambda_8_loop[] = {
  1, // locals
  0, // parameters
  // !i i+1
  var_std__plus, 2, var_1427_1_i, num_1, 1, var_1427_1_i,
  // n
  var_std__less, 2, var_1428_1_n, var_1427_1_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), var_1463_28_cont, lambda_144, TAIL_CALL,
  POS(1474, 17),
  POS(1476, 23),
  POS(1475, 17)
};

static TAB_NUM t_lambda_144[] = {
  3, // locals
  0, // parameters
  // $next_digit self(i)
  var_1425_0_self, 1, var_1427_1_i, 1, var_1479_1_next_digit,
  // next_digit >= '0' && next_digit <= '9'
  var_std__less, 2, var_1479_1_next_digit, chr_48, 1, LOCAL(1),
  // next_digit >= '0' && next_digit <= '9'
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // next_digit >= '0' && next_digit <= '9'
  var_std__and, 2, LOCAL(2), lambda_145, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), var_next, var_1463_28_cont, TAIL_CALL,
  POS(1479, 21),
  POS(1481, 23),
  POS(1481, 23),
  POS(1481, 23),
  POS(1480, 21)
};

static TAB_NUM t_lambda_145[] = {
  2, // locals
  0, // parameters
  // 9'
  var_std__less, 2, chr_57, var_1479_1_next_digit, 1, LOCAL(1),
  // 9'
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // next_digit <= '9'
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1481, 59),
  POS(1481, 59),
  POS(1481, 44)
};

static TAB_NUM t_func_handle_exponent[] = {
  1, // locals
  0, // parameters
  // !i i+1
  var_std__plus, 2, var_1427_1_i, num_1, 1, var_1427_1_i,
  // n
  var_std__less, 2, var_1428_1_n, var_1427_1_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_146, lambda_147, TAIL_CALL,
  POS(1486, 7),
  POS(1488, 13),
  POS(1487, 7)
};

static TAB_NUM t_lambda_146[] = {
  0, // locals
  0, // parameters
  //  self undefined
  LET, 2, var_1425_0_self, var_undefined, TAIL_CALL,
  POS(1489, 11)
};

static TAB_NUM t_lambda_147[] = {
  2, // locals
  0, // parameters
  // $exp_sign_chr self(i)
  var_1425_0_self, 1, var_1427_1_i, 1, var_1491_1_exp_sign_chr,
  // exp_sign_chr == '-' || exp_sign_chr == '+' &i -> i+1
  var_std__equal, 2, var_1491_1_exp_sign_chr, chr_45, 1, LOCAL(1),
  // exp_sign_chr == '-' || exp_sign_chr == '+' &i -> i+1
  var_std__or, 2, LOCAL(1), lambda_148, 1, LOCAL(2),
  // update_if exp_sign_chr == '-' || exp_sign_chr == '+' &i -> i+1
  var_update_if, 3, LOCAL(2), var_1427_1_i, lambda_149, 1, var_1427_1_i,
  // skip_one_ore_more_digits return_real
  func_skip_one_ore_more_digits, 1, func_return_real, TAIL_CALL,
  POS(1491, 11),
  POS(1492, 21),
  POS(1492, 21),
  POS(1492, 11),
  POS(1493, 11)
};

static TAB_NUM t_lambda_148[] = {
  1, // locals
  0, // parameters
  // exp_sign_chr == '+' &i -> i+1
  var_std__equal, 2, var_1491_1_exp_sign_chr, chr_43, 1, LOCAL(1),
  // exp_sign_chr == '+' &i -> i+1
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1492, 44),
  POS(1492, 44)
};

static TAB_NUM t_lambda_149[] = {
  1, // locals
  0, // parameters
  // i+1
  var_std__plus, 2, var_1427_1_i, num_1, 1, LOCAL(1),
  //  i+1
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1492, 70),
  POS(1492, 69)
};

static TAB_NUM t_func_return_integer[] = {
  4, // locals
  0, // parameters
  // range(self i -1) integer(range(self 1 i-1))
  var_range, 3, var_1425_0_self, var_1427_1_i, minus_num_1, 1, LOCAL(1),
  // i-1))
  var_std__minus, 2, var_1427_1_i, num_1, 1, LOCAL(2),
  // range(self 1 i-1))
  var_range, 3, var_1425_0_self, num_1, LOCAL(2), 1, LOCAL(3),
  // integer(range(self 1 i-1))
  var_integer, 1, LOCAL(3), 1, LOCAL(4),
  //  range(self i -1) integer(range(self 1 i-1))
  LET, 2, LOCAL(1), LOCAL(4), TAIL_CALL,
  POS(1495, 24),
  POS(1495, 62),
  POS(1495, 49),
  POS(1495, 41),
  POS(1495, 23)
};

static TAB_NUM t_func_return_real[] = {
  4, // locals
  0, // parameters
  // range(self i -1) real(range(self 1 i-1))
  var_range, 3, var_1425_0_self, var_1427_1_i, minus_num_1, 1, LOCAL(1),
  // i-1))
  var_std__minus, 2, var_1427_1_i, num_1, 1, LOCAL(2),
  // range(self 1 i-1))
  var_range, 3, var_1425_0_self, num_1, LOCAL(2), 1, LOCAL(3),
  // real(range(self 1 i-1))
  var_real, 1, LOCAL(3), 1, LOCAL(4),
  //  range(self i -1) real(range(self 1 i-1))
  LET, 2, LOCAL(1), LOCAL(4), TAIL_CALL,
  POS(1497, 21),
  POS(1497, 56),
  POS(1497, 43),
  POS(1497, 38),
  POS(1497, 20)
};

static TAB_NUM t_func_parse_binary[] = {
  1, // locals
  2, // parameters
  var_1499_16_str,
  var_1499_20_i,
  // $n length_of(str)
  var_length_of, 1, var_1499_16_str, 1, var_1500_1_n,
  // n -> str undefined
  var_std__less, 2, var_1500_1_n, var_1499_20_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_150, lambda_151, TAIL_CALL,
  POS(1500, 3),
  POS(1502, 9),
  POS(1501, 3)
};

static TAB_NUM t_lambda_150[] = {
  0, // locals
  0, // parameters
  //  str undefined
  LET, 2, var_1499_16_str, var_undefined, TAIL_CALL,
  POS(1502, 13)
};

static TAB_NUM t_lambda_151[] = {
  2, // locals
  0, // parameters
  // $digit str(i)
  var_1499_16_str, 1, var_1499_20_i, 1, var_1504_1_digit,
  // digit < '0' || digit > '1'
  var_std__less, 2, var_1504_1_digit, chr_48, 1, LOCAL(1),
  // digit < '0' || digit > '1'
  var_std__or, 2, LOCAL(1), lambda_152, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_153, lambda_154, TAIL_CALL,
  POS(1504, 7),
  POS(1506, 9),
  POS(1506, 9),
  POS(1505, 7)
};

static TAB_NUM t_lambda_152[] = {
  1, // locals
  0, // parameters
  // 1'
  var_std__less, 2, chr_49, var_1504_1_digit, 1, LOCAL(1),
  // digit > '1'
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1506, 33),
  POS(1506, 24)
};

static TAB_NUM t_lambda_153[] = {
  0, // locals
  0, // parameters
  //  str undefined
  LET, 2, var_1499_16_str, var_undefined, TAIL_CALL,
  POS(1507, 11)
};

static TAB_NUM t_lambda_154[] = {
  0, // locals
  0, // parameters
  // $value digit-'0'
  var_std__minus, 2, var_1504_1_digit, chr_48, 1, var_1509_1_value,
  // loop:
  var_loop, 1, lambda_9_loop, TAIL_CALL,
  POS(1509, 11),
  POS(1510, 11)
};

static TAB_NUM t_lambda_9_loop[] = {
  1, // locals
  0, // parameters
  // !i i+1
  var_std__plus, 2, var_1499_20_i, num_1, 1, var_1499_20_i,
  // n
  var_std__less, 2, var_1500_1_n, var_1499_20_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_155, lambda_156, TAIL_CALL,
  POS(1511, 13),
  POS(1513, 19),
  POS(1512, 13)
};

static TAB_NUM t_lambda_155[] = {
  0, // locals
  0, // parameters
  //  "" value
  LET, 2, string_1, var_1509_1_value, TAIL_CALL,
  POS(1514, 17)
};

static TAB_NUM t_lambda_156[] = {
  3, // locals
  0, // parameters
  // $next_digit str(i)
  var_1499_16_str, 1, var_1499_20_i, 1, var_1516_1_next_digit,
  // next_digit >= '0' && next_digit <= '1':
  var_std__less, 2, var_1516_1_next_digit, chr_48, 1, LOCAL(1),
  // next_digit >= '0' && next_digit <= '1':
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // next_digit >= '0' && next_digit <= '1':
  var_std__and, 2, LOCAL(2), lambda_157, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_158, lambda_159, TAIL_CALL,
  POS(1516, 17),
  POS(1518, 19),
  POS(1518, 19),
  POS(1518, 19),
  POS(1517, 17)
};

static TAB_NUM t_lambda_157[] = {
  2, // locals
  0, // parameters
  // 1':
  var_std__less, 2, chr_49, var_1516_1_next_digit, 1, LOCAL(1),
  // 1':
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // next_digit <= '1':
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1518, 55),
  POS(1518, 55),
  POS(1518, 40)
};

static TAB_NUM t_lambda_158[] = {
  2, // locals
  0, // parameters
  // value << 1)+(next_digit-'0')
  var_std__shift_left, 2, var_1509_1_value, num_1, 1, LOCAL(1),
  // next_digit-'0')
  var_std__minus, 2, var_1516_1_next_digit, chr_48, 1, LOCAL(2),
  // !value (value << 1)+(next_digit-'0')
  var_std__plus, 2, LOCAL(1), LOCAL(2), 1, var_1509_1_value,
  // next
  var_next, 0, TAIL_CALL,
  POS(1519, 29),
  POS(1519, 42),
  POS(1519, 21),
  POS(1520, 21)
};

static TAB_NUM t_lambda_159[] = {
  1, // locals
  0, // parameters
  // range(str i -1) value
  var_range, 3, var_1499_16_str, var_1499_20_i, minus_num_1, 1, LOCAL(1),
  //  range(str i -1) value
  LET, 2, LOCAL(1), var_1509_1_value, TAIL_CALL,
  POS(1521, 22),
  POS(1521, 21)
};

static TAB_NUM t_func_parse_octal[] = {
  1, // locals
  2, // parameters
  var_1523_15_str,
  var_1523_19_i,
  // $n length_of(str)
  var_length_of, 1, var_1523_15_str, 1, var_1524_1_n,
  // n -> str undefined
  var_std__less, 2, var_1524_1_n, var_1523_19_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_160, lambda_161, TAIL_CALL,
  POS(1524, 3),
  POS(1526, 9),
  POS(1525, 3)
};

static TAB_NUM t_lambda_160[] = {
  0, // locals
  0, // parameters
  //  str undefined
  LET, 2, var_1523_15_str, var_undefined, TAIL_CALL,
  POS(1526, 13)
};

static TAB_NUM t_lambda_161[] = {
  2, // locals
  0, // parameters
  // $digit str(i)
  var_1523_15_str, 1, var_1523_19_i, 1, var_1528_1_digit,
  // digit < '0' || digit > '7'
  var_std__less, 2, var_1528_1_digit, chr_48, 1, LOCAL(1),
  // digit < '0' || digit > '7'
  var_std__or, 2, LOCAL(1), lambda_162, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_163, lambda_164, TAIL_CALL,
  POS(1528, 7),
  POS(1530, 9),
  POS(1530, 9),
  POS(1529, 7)
};

static TAB_NUM t_lambda_162[] = {
  1, // locals
  0, // parameters
  // 7'
  var_std__less, 2, chr_55, var_1528_1_digit, 1, LOCAL(1),
  // digit > '7'
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1530, 33),
  POS(1530, 24)
};

static TAB_NUM t_lambda_163[] = {
  0, // locals
  0, // parameters
  //  str undefined
  LET, 2, var_1523_15_str, var_undefined, TAIL_CALL,
  POS(1531, 11)
};

static TAB_NUM t_lambda_164[] = {
  0, // locals
  0, // parameters
  // $value digit-'0'
  var_std__minus, 2, var_1528_1_digit, chr_48, 1, var_1533_1_value,
  // loop:
  var_loop, 1, lambda_10_loop, TAIL_CALL,
  POS(1533, 11),
  POS(1534, 11)
};

static TAB_NUM t_lambda_10_loop[] = {
  1, // locals
  0, // parameters
  // !i i+1
  var_std__plus, 2, var_1523_19_i, num_1, 1, var_1523_19_i,
  // n
  var_std__less, 2, var_1524_1_n, var_1523_19_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_165, lambda_166, TAIL_CALL,
  POS(1535, 13),
  POS(1537, 19),
  POS(1536, 13)
};

static TAB_NUM t_lambda_165[] = {
  0, // locals
  0, // parameters
  //  "" value
  LET, 2, string_1, var_1533_1_value, TAIL_CALL,
  POS(1538, 17)
};

static TAB_NUM t_lambda_166[] = {
  3, // locals
  0, // parameters
  // $next_digit str(i)
  var_1523_15_str, 1, var_1523_19_i, 1, var_1540_1_next_digit,
  // next_digit >= '0' && next_digit <= '7':
  var_std__less, 2, var_1540_1_next_digit, chr_48, 1, LOCAL(1),
  // next_digit >= '0' && next_digit <= '7':
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // next_digit >= '0' && next_digit <= '7':
  var_std__and, 2, LOCAL(2), lambda_167, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_168, lambda_169, TAIL_CALL,
  POS(1540, 17),
  POS(1542, 19),
  POS(1542, 19),
  POS(1542, 19),
  POS(1541, 17)
};

static TAB_NUM t_lambda_167[] = {
  2, // locals
  0, // parameters
  // 7':
  var_std__less, 2, chr_55, var_1540_1_next_digit, 1, LOCAL(1),
  // 7':
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // next_digit <= '7':
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1542, 55),
  POS(1542, 55),
  POS(1542, 40)
};

static TAB_NUM t_lambda_168[] = {
  2, // locals
  0, // parameters
  // value << 3)+(next_digit-'0')
  var_std__shift_left, 2, var_1533_1_value, num_3, 1, LOCAL(1),
  // next_digit-'0')
  var_std__minus, 2, var_1540_1_next_digit, chr_48, 1, LOCAL(2),
  // !value (value << 3)+(next_digit-'0')
  var_std__plus, 2, LOCAL(1), LOCAL(2), 1, var_1533_1_value,
  // next
  var_next, 0, TAIL_CALL,
  POS(1543, 29),
  POS(1543, 42),
  POS(1543, 21),
  POS(1544, 21)
};

static TAB_NUM t_lambda_169[] = {
  1, // locals
  0, // parameters
  // range(str i -1) value
  var_range, 3, var_1523_15_str, var_1523_19_i, minus_num_1, 1, LOCAL(1),
  //  range(str i -1) value
  LET, 2, LOCAL(1), var_1533_1_value, TAIL_CALL,
  POS(1545, 22),
  POS(1545, 21)
};

static TAB_NUM t_func_std__parse_hex[] = {
  1, // locals
  -2, // parameters
  MANDATORY_PARAMETER, var_1575_0_str,
  num_1, var_1576_0_i,
  // $n length_of(str)
  var_length_of, 1, var_1575_0_str, 1, var_1578_1_n,
  // n -> str undefined
  var_std__less, 2, var_1578_1_n, var_1576_0_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_170, lambda_171, TAIL_CALL,
  POS(1578, 3),
  POS(1580, 9),
  POS(1579, 3)
};

static TAB_NUM t_lambda_170[] = {
  0, // locals
  0, // parameters
  //  str undefined
  LET, 2, var_1575_0_str, var_undefined, TAIL_CALL,
  POS(1580, 13)
};

static TAB_NUM t_lambda_171[] = {
  0, // locals
  0, // parameters
  // $digit str(i)
  var_1575_0_str, 1, var_1576_0_i, 1, var_1582_1_digit,
  // cond
  var_cond, 4, lambda_172, lambda_175, lambda_178, lambda_181, TAIL_CALL,
  POS(1582, 7),
  POS(1583, 7)
};

static TAB_NUM t_lambda_172[] = {
  3, // locals
  0, // parameters
  // digit >= '0' && digit <= '9':
  var_std__less, 2, var_1582_1_digit, chr_48, 1, LOCAL(1),
  // digit >= '0' && digit <= '9':
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // digit >= '0' && digit <= '9':
  var_std__and, 2, LOCAL(2), lambda_173, 1, LOCAL(3),
  //  digit >= '0' && digit <= '9':
  LET, 2, LOCAL(3), lambda_174, TAIL_CALL,
  POS(1584, 12),
  POS(1584, 12),
  POS(1584, 12),
  POS(1584, 11)
};

static TAB_NUM t_lambda_173[] = {
  2, // locals
  0, // parameters
  // 9':
  var_std__less, 2, chr_57, var_1582_1_digit, 1, LOCAL(1),
  // 9':
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // digit <= '9':
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1584, 38),
  POS(1584, 38),
  POS(1584, 28)
};

static TAB_NUM t_lambda_174[] = {
  1, // locals
  0, // parameters
  // digit-'0'
  var_std__minus, 2, var_1582_1_digit, chr_48, 1, LOCAL(1),
  // handle_more_digits digit-'0'
  func_handle_more_digits, 1, LOCAL(1), TAIL_CALL,
  POS(1585, 30),
  POS(1585, 11)
};

static TAB_NUM t_lambda_175[] = {
  3, // locals
  0, // parameters
  // digit >= 'a' && digit <= 'f':
  var_std__less, 2, var_1582_1_digit, chr_97, 1, LOCAL(1),
  // digit >= 'a' && digit <= 'f':
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // digit >= 'a' && digit <= 'f':
  var_std__and, 2, LOCAL(2), lambda_176, 1, LOCAL(3),
  //  digit >= 'a' && digit <= 'f':
  LET, 2, LOCAL(3), lambda_177, TAIL_CALL,
  POS(1586, 12),
  POS(1586, 12),
  POS(1586, 12),
  POS(1586, 11)
};

static TAB_NUM t_lambda_176[] = {
  2, // locals
  0, // parameters
  // f':
  var_std__less, 2, chr_102, var_1582_1_digit, 1, LOCAL(1),
  // f':
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // digit <= 'f':
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1586, 38),
  POS(1586, 38),
  POS(1586, 28)
};

static TAB_NUM t_lambda_177[] = {
  2, // locals
  0, // parameters
  // digit-'a')+10
  var_std__minus, 2, var_1582_1_digit, chr_97, 1, LOCAL(1),
  // digit-'a')+10
  var_std__plus, 2, LOCAL(1), num_10, 1, LOCAL(2),
  // handle_more_digits (digit-'a')+10
  func_handle_more_digits, 1, LOCAL(2), TAIL_CALL,
  POS(1587, 31),
  POS(1587, 31),
  POS(1587, 11)
};

static TAB_NUM t_lambda_178[] = {
  3, // locals
  0, // parameters
  // digit >= 'A' && digit <= 'F':
  var_std__less, 2, var_1582_1_digit, chr_65, 1, LOCAL(1),
  // digit >= 'A' && digit <= 'F':
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // digit >= 'A' && digit <= 'F':
  var_std__and, 2, LOCAL(2), lambda_179, 1, LOCAL(3),
  //  digit >= 'A' && digit <= 'F':
  LET, 2, LOCAL(3), lambda_180, TAIL_CALL,
  POS(1588, 12),
  POS(1588, 12),
  POS(1588, 12),
  POS(1588, 11)
};

static TAB_NUM t_lambda_179[] = {
  2, // locals
  0, // parameters
  // F':
  var_std__less, 2, chr_70, var_1582_1_digit, 1, LOCAL(1),
  // F':
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // digit <= 'F':
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1588, 38),
  POS(1588, 38),
  POS(1588, 28)
};

static TAB_NUM t_lambda_180[] = {
  2, // locals
  0, // parameters
  // digit-'A')+10
  var_std__minus, 2, var_1582_1_digit, chr_65, 1, LOCAL(1),
  // digit-'A')+10
  var_std__plus, 2, LOCAL(1), num_10, 1, LOCAL(2),
  // handle_more_digits (digit-'A')+10
  func_handle_more_digits, 1, LOCAL(2), TAIL_CALL,
  POS(1589, 31),
  POS(1589, 31),
  POS(1589, 11)
};

static TAB_NUM t_lambda_181[] = {
  0, // locals
  0, // parameters
  //  true -> str undefined
  LET, 2, var_true, lambda_182, TAIL_CALL,
  POS(1590, 11)
};

static TAB_NUM t_lambda_182[] = {
  0, // locals
  0, // parameters
  //  str undefined
  LET, 2, var_1575_0_str, var_undefined, TAIL_CALL,
  POS(1590, 19)
};

static TAB_NUM t_func_handle_more_digits[] = {
  0, // locals
  1, // parameters
  var_1592_22_value,
  // loop:
  var_loop, 1, lambda_11_loop, TAIL_CALL,
  POS(1593, 9)
};

static TAB_NUM t_lambda_11_loop[] = {
  1, // locals
  0, // parameters
  // !i i+1
  var_std__plus, 2, var_1576_0_i, num_1, 1, var_1576_0_i,
  // n
  var_std__less, 2, var_1578_1_n, var_1576_0_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_183, lambda_184, TAIL_CALL,
  POS(1594, 11),
  POS(1596, 17),
  POS(1595, 11)
};

static TAB_NUM t_lambda_183[] = {
  0, // locals
  0, // parameters
  //  "" value
  LET, 2, string_1, var_1592_22_value, TAIL_CALL,
  POS(1597, 15)
};

static TAB_NUM t_lambda_184[] = {
  0, // locals
  0, // parameters
  // $next_digit str(i)
  var_1575_0_str, 1, var_1576_0_i, 1, var_1599_1_next_digit,
  // cond
  var_cond, 4, lambda_185, lambda_188, lambda_191, lambda_194, TAIL_CALL,
  POS(1599, 15),
  POS(1600, 15)
};

static TAB_NUM t_lambda_185[] = {
  3, // locals
  0, // parameters
  // next_digit >= '0' && next_digit <= '9':
  var_std__less, 2, var_1599_1_next_digit, chr_48, 1, LOCAL(1),
  // next_digit >= '0' && next_digit <= '9':
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // next_digit >= '0' && next_digit <= '9':
  var_std__and, 2, LOCAL(2), lambda_186, 1, LOCAL(3),
  //  next_digit >= '0' && next_digit <= '9':
  LET, 2, LOCAL(3), lambda_187, TAIL_CALL,
  POS(1601, 20),
  POS(1601, 20),
  POS(1601, 20),
  POS(1601, 19)
};

static TAB_NUM t_lambda_186[] = {
  2, // locals
  0, // parameters
  // 9':
  var_std__less, 2, chr_57, var_1599_1_next_digit, 1, LOCAL(1),
  // 9':
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // next_digit <= '9':
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1601, 56),
  POS(1601, 56),
  POS(1601, 41)
};

static TAB_NUM t_lambda_187[] = {
  2, // locals
  0, // parameters
  // value << 4)+(next_digit-'0')
  var_std__shift_left, 2, var_1592_22_value, num_4, 1, LOCAL(1),
  // next_digit-'0')
  var_std__minus, 2, var_1599_1_next_digit, chr_48, 1, LOCAL(2),
  // !value (value << 4)+(next_digit-'0')
  var_std__plus, 2, LOCAL(1), LOCAL(2), 1, var_1592_22_value,
  // next
  var_next, 0, TAIL_CALL,
  POS(1602, 27),
  POS(1602, 40),
  POS(1602, 19),
  POS(1603, 19)
};

static TAB_NUM t_lambda_188[] = {
  3, // locals
  0, // parameters
  // next_digit >= 'a' && next_digit <= 'f':
  var_std__less, 2, var_1599_1_next_digit, chr_97, 1, LOCAL(1),
  // next_digit >= 'a' && next_digit <= 'f':
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // next_digit >= 'a' && next_digit <= 'f':
  var_std__and, 2, LOCAL(2), lambda_189, 1, LOCAL(3),
  //  next_digit >= 'a' && next_digit <= 'f':
  LET, 2, LOCAL(3), lambda_190, TAIL_CALL,
  POS(1604, 20),
  POS(1604, 20),
  POS(1604, 20),
  POS(1604, 19)
};

static TAB_NUM t_lambda_189[] = {
  2, // locals
  0, // parameters
  // f':
  var_std__less, 2, chr_102, var_1599_1_next_digit, 1, LOCAL(1),
  // f':
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // next_digit <= 'f':
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1604, 56),
  POS(1604, 56),
  POS(1604, 41)
};

static TAB_NUM t_lambda_190[] = {
  3, // locals
  0, // parameters
  // value << 4)+(next_digit-'a')+10
  var_std__shift_left, 2, var_1592_22_value, num_4, 1, LOCAL(1),
  // next_digit-'a')+10
  var_std__minus, 2, var_1599_1_next_digit, chr_97, 1, LOCAL(2),
  // value << 4)+(next_digit-'a')+10
  var_std__plus, 2, LOCAL(1), LOCAL(2), 1, LOCAL(3),
  // !value (value << 4)+(next_digit-'a')+10
  var_std__plus, 2, LOCAL(3), num_10, 1, var_1592_22_value,
  // next
  var_next, 0, TAIL_CALL,
  POS(1605, 27),
  POS(1605, 40),
  POS(1605, 27),
  POS(1605, 19),
  POS(1606, 19)
};

static TAB_NUM t_lambda_191[] = {
  3, // locals
  0, // parameters
  // next_digit >= 'A' && next_digit <= 'F':
  var_std__less, 2, var_1599_1_next_digit, chr_65, 1, LOCAL(1),
  // next_digit >= 'A' && next_digit <= 'F':
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // next_digit >= 'A' && next_digit <= 'F':
  var_std__and, 2, LOCAL(2), lambda_192, 1, LOCAL(3),
  //  next_digit >= 'A' && next_digit <= 'F':
  LET, 2, LOCAL(3), lambda_193, TAIL_CALL,
  POS(1607, 20),
  POS(1607, 20),
  POS(1607, 20),
  POS(1607, 19)
};

static TAB_NUM t_lambda_192[] = {
  2, // locals
  0, // parameters
  // F':
  var_std__less, 2, chr_70, var_1599_1_next_digit, 1, LOCAL(1),
  // F':
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // next_digit <= 'F':
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1607, 56),
  POS(1607, 56),
  POS(1607, 41)
};

static TAB_NUM t_lambda_193[] = {
  3, // locals
  0, // parameters
  // value << 4)+(next_digit-'A')+10
  var_std__shift_left, 2, var_1592_22_value, num_4, 1, LOCAL(1),
  // next_digit-'A')+10
  var_std__minus, 2, var_1599_1_next_digit, chr_65, 1, LOCAL(2),
  // value << 4)+(next_digit-'A')+10
  var_std__plus, 2, LOCAL(1), LOCAL(2), 1, LOCAL(3),
  // !value (value << 4)+(next_digit-'A')+10
  var_std__plus, 2, LOCAL(3), num_10, 1, var_1592_22_value,
  // next
  var_next, 0, TAIL_CALL,
  POS(1608, 27),
  POS(1608, 40),
  POS(1608, 27),
  POS(1608, 19),
  POS(1609, 19)
};

static TAB_NUM t_lambda_194[] = {
  0, // locals
  0, // parameters
  //  true -> range(str i -1) value
  LET, 2, var_true, lambda_195, TAIL_CALL,
  POS(1610, 19)
};

static TAB_NUM t_lambda_195[] = {
  1, // locals
  0, // parameters
  // range(str i -1) value
  var_range, 3, var_1575_0_str, var_1576_0_i, minus_num_1, 1, LOCAL(1),
  //  range(str i -1) value
  LET, 2, LOCAL(1), var_1592_22_value, TAIL_CALL,
  POS(1610, 28),
  POS(1610, 27)
};

static TAB_NUM t_func_std_types__string___to_integer[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 1646_0_self
  // parse_integer &self $value
  var_parse_integer, 1, LOCAL(2), 2, LOCAL(2), var_1648_21_value,
  // self == ""
  var_std__equal, 2, LOCAL(2), string_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_196, lambda_197, TAIL_CALL,
  POS(1648, 3),
  POS(1650, 5),
  POS(1649, 3)
};

static TAB_NUM t_lambda_196[] = {
  0, // locals
  0, // parameters
  //  value
  LET, 1, var_1648_21_value, TAIL_CALL,
  POS(1651, 7)
};

static TAB_NUM t_lambda_197[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(1652, 7)
};

static TAB_NUM t_func_std_types__string___to_number[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 1688_0_self
  // parse_number &self $value
  var_parse_number, 1, LOCAL(2), 2, LOCAL(2), var_1690_20_value,
  // self == ""
  var_std__equal, 2, LOCAL(2), string_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_198, lambda_199, TAIL_CALL,
  POS(1690, 3),
  POS(1692, 5),
  POS(1691, 3)
};

static TAB_NUM t_lambda_198[] = {
  0, // locals
  0, // parameters
  //  value
  LET, 1, var_1690_20_value, TAIL_CALL,
  POS(1693, 7)
};

static TAB_NUM t_lambda_199[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(1694, 7)
};

static TAB_NUM t_func_std__map_characters[] = {
  2, // locals
  2, // parameters
  var_1717_0_self,
  var_1718_0_function,
  // parameter_count_of(function) == 2
  var_parameter_count_of, 1, var_1718_0_function, 1, LOCAL(1),
  // parameter_count_of(function) == 2
  var_std__equal, 2, LOCAL(1), num_2, 1, LOCAL(2),
  // $map
  var_if, 3, LOCAL(2), lambda_200, lambda_206, 1, var_1720_1_map,
  // length_of(self)
  var_length_of, 1, var_1717_0_self, 1, LOCAL(1),
  // map 1 length_of(self)
  var_1720_1_map, 2, num_1, LOCAL(1), TAIL_CALL,
  POS(1722, 7),
  POS(1722, 7),
  POS(1720, 3),
  POS(1750, 9),
  POS(1750, 3)
};

static TAB_NUM t_lambda_200[] = {
  0, // locals
  0, // parameters
  // 
  LET, 1, lambda_201, TAIL_CALL,
  POS(1723, 9)
};

static TAB_NUM t_lambda_201[] = {
  1, // locals
  2, // parameters
  var_1724_3_s,
  var_1724_5_e,
  // s < e:
  var_std__less, 2, var_1724_3_s, var_1724_5_e, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_202, lambda_203, TAIL_CALL,
  POS(1726, 13),
  POS(1725, 11)
};

static TAB_NUM t_lambda_202[] = {
  4, // locals
  0, // parameters
  // s+e) >> 1
  var_std__plus, 2, var_1724_3_s, var_1724_5_e, 1, LOCAL(1),
  // $m (s+e) >> 1
  var_std__shift_right, 2, LOCAL(1), num_1, 1, LOCAL(4),
  // map(s m)
  var_1720_1_map, 2, var_1724_3_s, LOCAL(4), 1, LOCAL(1),
  // m+1 e)
  var_std__plus, 2, LOCAL(4), num_1, 1, LOCAL(2),
  // map(m+1 e)
  var_1720_1_map, 2, LOCAL(2), var_1724_5_e, 1, LOCAL(3),
  // append
  var_append, 2, LOCAL(1), LOCAL(3), TAIL_CALL,
  POS(1727, 19),
  POS(1727, 15),
  POS(1729, 17),
  POS(1730, 21),
  POS(1730, 17),
  POS(1728, 15)
};

static TAB_NUM t_lambda_203[] = {
  1, // locals
  0, // parameters
  // e
  var_std__less, 2, var_1724_5_e, var_1724_3_s, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_204, lambda_205, TAIL_CALL,
  POS(1733, 21),
  POS(1732, 15)
};

static TAB_NUM t_lambda_204[] = {
  0, // locals
  0, // parameters
  //  ""
  LET, 1, string_1, TAIL_CALL,
  POS(1734, 19)
};

static TAB_NUM t_lambda_205[] = {
  3, // locals
  0, // parameters
  // self(s)))
  var_1717_0_self, 1, var_1724_3_s, 1, LOCAL(1),
  // function(s self(s)))
  var_1718_0_function, 2, var_1724_3_s, LOCAL(1), 1, LOCAL(2),
  // string(function(s self(s)))
  var_string, 1, LOCAL(2), 1, LOCAL(3),
  //  string(function(s self(s)))
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(1735, 38),
  POS(1735, 27),
  POS(1735, 20),
  POS(1735, 19)
};

static TAB_NUM t_lambda_206[] = {
  0, // locals
  0, // parameters
  // 
  LET, 1, lambda_207, TAIL_CALL,
  POS(1736, 9)
};

static TAB_NUM t_lambda_207[] = {
  1, // locals
  2, // parameters
  var_1737_3_s,
  var_1737_5_e,
  // s < e:
  var_std__less, 2, var_1737_3_s, var_1737_5_e, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_208, lambda_209, TAIL_CALL,
  POS(1739, 13),
  POS(1738, 11)
};

static TAB_NUM t_lambda_208[] = {
  4, // locals
  0, // parameters
  // s+e) >> 1
  var_std__plus, 2, var_1737_3_s, var_1737_5_e, 1, LOCAL(1),
  // $m (s+e) >> 1
  var_std__shift_right, 2, LOCAL(1), num_1, 1, LOCAL(4),
  // map(s m)
  var_1720_1_map, 2, var_1737_3_s, LOCAL(4), 1, LOCAL(1),
  // m+1 e)
  var_std__plus, 2, LOCAL(4), num_1, 1, LOCAL(2),
  // map(m+1 e)
  var_1720_1_map, 2, LOCAL(2), var_1737_5_e, 1, LOCAL(3),
  // append
  var_append, 2, LOCAL(1), LOCAL(3), TAIL_CALL,
  POS(1740, 19),
  POS(1740, 15),
  POS(1742, 17),
  POS(1743, 21),
  POS(1743, 17),
  POS(1741, 15)
};

static TAB_NUM t_lambda_209[] = {
  1, // locals
  0, // parameters
  // e
  var_std__less, 2, var_1737_5_e, var_1737_3_s, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_210, lambda_211, TAIL_CALL,
  POS(1746, 21),
  POS(1745, 15)
};

static TAB_NUM t_lambda_210[] = {
  0, // locals
  0, // parameters
  //  ""
  LET, 1, string_1, TAIL_CALL,
  POS(1747, 19)
};

static TAB_NUM t_lambda_211[] = {
  3, // locals
  0, // parameters
  // self(s)))
  var_1717_0_self, 1, var_1737_3_s, 1, LOCAL(1),
  // function(self(s)))
  var_1718_0_function, 1, LOCAL(1), 1, LOCAL(2),
  // string(function(self(s)))
  var_string, 1, LOCAL(2), 1, LOCAL(3),
  //  string(function(self(s)))
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(1748, 36),
  POS(1748, 27),
  POS(1748, 20),
  POS(1748, 19)
};

static TAB_NUM t_func_std_types__string___to_upper_case[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 1770_0_self
  // map_characters self to_upper_case
  var_map_characters, 2, LOCAL(1), var_to_upper_case, TAIL_CALL,
  POS(1772, 3)
};

static TAB_NUM t_func_std_types__string___to_lower_case[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 1792_0_self
  // map_characters self to_lower_case
  var_map_characters, 2, LOCAL(1), var_to_lower_case, TAIL_CALL,
  POS(1794, 3)
};

static TAB_NUM t_func_std_types__string___to_title_case[] = {
  0, // locals
  1, // parameters
  var_1814_0_self,
  // map_characters self: (idx chr)
  var_map_characters, 2, var_1814_0_self, lambda_212, TAIL_CALL,
  POS(1816, 3)
};

static TAB_NUM t_lambda_212[] = {
  2, // locals
  2, // parameters
  var_1816_22_idx,
  var_1816_26_chr,
  // 1 && self(idx-1).is_a_letter_character
  var_std__less, 2, num_1, var_1816_22_idx, 1, LOCAL(1),
  // 1 && self(idx-1).is_a_letter_character
  var_std__and, 2, LOCAL(1), lambda_213, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_214, lambda_215, TAIL_CALL,
  POS(1818, 13),
  POS(1818, 13),
  POS(1817, 5)
};

static TAB_NUM t_lambda_213[] = {
  3, // locals
  0, // parameters
  // idx-1).is_a_letter_character
  var_std__minus, 2, var_1816_22_idx, num_1, 1, LOCAL(1),
  // self(idx-1).is_a_letter_character
  var_1814_0_self, 1, LOCAL(1), 1, LOCAL(2),
  // is_a_letter_character
  var_is_a_letter_character, 1, LOCAL(2), 1, LOCAL(3),
  // self(idx-1).is_a_letter_character
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(1818, 23),
  POS(1818, 18),
  POS(1818, 30),
  POS(1818, 18)
};

static TAB_NUM t_lambda_214[] = {
  1, // locals
  0, // parameters
  // to_lower_case
  var_to_lower_case, 1, var_1816_26_chr, 1, LOCAL(1),
  //  chr.to_lower_case
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1819, 14),
  POS(1819, 9)
};

static TAB_NUM t_lambda_215[] = {
  1, // locals
  0, // parameters
  // to_title_case
  var_to_title_case, 1, var_1816_26_chr, 1, LOCAL(1),
  //  chr.to_title_case
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1820, 14),
  POS(1820, 9)
};

static TAB_NUM t_func_std_types__string___to_sentence_case[] = {
  0, // locals
  1, // parameters
  var_1840_0_self,
  // map_characters self: (idx chr)
  var_map_characters, 2, var_1840_0_self, lambda_216, TAIL_CALL,
  POS(1842, 3)
};

static TAB_NUM t_lambda_216[] = {
  2, // locals
  2, // parameters
  var_1842_22_idx,
  var_1842_26_chr,
  // idx == 1 && self(idx).is_a_letter_character
  var_std__equal, 2, var_1842_22_idx, num_1, 1, LOCAL(1),
  // idx == 1 && self(idx).is_a_letter_character
  var_std__and, 2, LOCAL(1), lambda_217, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_218, lambda_219, TAIL_CALL,
  POS(1844, 7),
  POS(1844, 7),
  POS(1843, 5)
};

static TAB_NUM t_lambda_217[] = {
  2, // locals
  0, // parameters
  // self(idx).is_a_letter_character
  var_1840_0_self, 1, var_1842_22_idx, 1, LOCAL(1),
  // is_a_letter_character
  var_is_a_letter_character, 1, LOCAL(1), 1, LOCAL(2),
  // self(idx).is_a_letter_character
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1844, 19),
  POS(1844, 29),
  POS(1844, 19)
};

static TAB_NUM t_lambda_218[] = {
  1, // locals
  0, // parameters
  // to_title_case
  var_to_title_case, 1, var_1842_26_chr, 1, LOCAL(1),
  //  chr.to_title_case
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1845, 14),
  POS(1845, 9)
};

static TAB_NUM t_lambda_219[] = {
  1, // locals
  0, // parameters
  // to_lower_case
  var_to_lower_case, 1, var_1842_26_chr, 1, LOCAL(1),
  //  chr.to_lower_case
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(1846, 14),
  POS(1846, 9)
};

static TAB_NUM t_func_std__delete_all[] = {
  1, // locals
  -2, // parameters
  MANDATORY_PARAMETER, LOCAL(1), // 1869_0_text
  REST_PARAMETER, var_1870_0_expressions,
  // $new_text ""
  LET, 1, string_1, 1, var_1886_1_new_text,
  // delete_all text
  func_delete_all, 1, LOCAL(1), TAIL_CALL,
  POS(1886, 3),
  POS(1887, 3)
};

static TAB_NUM t_func_delete_all[] = {
  1, // locals
  1, // parameters
  var_1872_14_txt,
  // is_empty
  var_is_empty, 1, var_1872_14_txt, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_220, lambda_221, TAIL_CALL,
  POS(1874, 11),
  POS(1873, 5)
};

static TAB_NUM t_lambda_220[] = {
  0, // locals
  0, // parameters
  //  new_text
  LET, 1, var_1886_1_new_text, TAIL_CALL,
  POS(1875, 9)
};

static TAB_NUM t_lambda_221[] = {
  0, // locals
  0, // parameters
  // for_each expressions
  var_for_each, 3, var_1870_0_expressions, lambda_222, lambda_224, TAIL_CALL,
  POS(1877, 9)
};

static TAB_NUM t_lambda_222[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 1878_3_expression
  // $len match(expression txt)
  var_match, 2, LOCAL(2), var_1872_14_txt, 1, var_1879_1_len,
  // is_defined next:
  var_is_defined, 1, var_1879_1_len, 1, LOCAL(1),
  // if_not len.is_defined next:
  var_if_not, 3, LOCAL(1), var_next, lambda_223, TAIL_CALL,
  POS(1879, 13),
  POS(1880, 24),
  POS(1880, 13)
};

static TAB_NUM t_lambda_223[] = {
  2, // locals
  0, // parameters
  // len+1 -1)
  var_std__plus, 2, var_1879_1_len, num_1, 1, LOCAL(1),
  // range(txt len+1 -1)
  var_range, 3, var_1872_14_txt, LOCAL(1), minus_num_1, 1, LOCAL(2),
  // delete_all range(txt len+1 -1)
  func_delete_all, 1, LOCAL(2), TAIL_CALL,
  POS(1881, 36),
  POS(1881, 26),
  POS(1881, 15)
};

static TAB_NUM t_lambda_224[] = {
  1, // locals
  0, // parameters
  // txt(1)
  var_1872_14_txt, 1, num_1, 1, LOCAL(1),
  // push &new_text txt(1)
  var_push, 2, var_1886_1_new_text, LOCAL(1), 1, var_1886_1_new_text,
  // range(txt 2 -1)
  var_range, 3, var_1872_14_txt, num_2, minus_num_1, 1, LOCAL(1),
  // delete_all range(txt 2 -1)
  func_delete_all, 1, LOCAL(1), TAIL_CALL,
  POS(1883, 28),
  POS(1883, 13),
  POS(1884, 24),
  POS(1884, 13)
};

static TAB_NUM t_func_std__replace_all[] = {
  1, // locals
  -2, // parameters
  MANDATORY_PARAMETER, LOCAL(1), // 1910_0_text
  REST_PARAMETER, var_1911_0_args,
  // $new_text ""
  LET, 1, string_1, 1, var_1934_1_new_text,
  // replace_all text
  func_replace_all, 1, LOCAL(1), TAIL_CALL,
  POS(1934, 3),
  POS(1935, 3)
};

static TAB_NUM t_func_replace_all[] = {
  1, // locals
  1, // parameters
  var_1913_15_txt,
  // is_empty
  var_is_empty, 1, var_1913_15_txt, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_225, lambda_226, TAIL_CALL,
  POS(1915, 11),
  POS(1914, 5)
};

static TAB_NUM t_lambda_225[] = {
  0, // locals
  0, // parameters
  //  new_text
  LET, 1, var_1934_1_new_text, TAIL_CALL,
  POS(1916, 9)
};

static TAB_NUM t_lambda_226[] = {
  0, // locals
  0, // parameters
  // for_each args
  var_for_each, 3, var_1911_0_args, lambda_227, lambda_230, TAIL_CALL,
  POS(1918, 9)
};

static TAB_NUM t_lambda_227[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 1919_3_arg
  // arg $expression $replacement
  LOCAL(2), 0, 2, LOCAL(3), var_1920_17_replacement,
  // $len match(expression txt)
  var_match, 2, LOCAL(3), var_1913_15_txt, 1, var_1921_1_len,
  // is_defined next:
  var_is_defined, 1, var_1921_1_len, 1, LOCAL(1),
  // if_not len.is_defined next:
  var_if_not, 3, LOCAL(1), var_next, lambda_228, TAIL_CALL,
  POS(1920, 13),
  POS(1921, 13),
  POS(1922, 24),
  POS(1922, 13)
};

static TAB_NUM t_lambda_228[] = {
  1, // locals
  0, // parameters
  // is_a_string:
  var_is_a_string, 1, var_1920_17_replacement, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_replacement_is_a_string, lambda_229, TAIL_CALL,
  POS(1924, 29),
  POS(1923, 15)
};

static TAB_NUM t_lambda_replacement_is_a_string[] = {
  2, // locals
  0, // parameters
  // append &new_text replacement
  var_append, 2, var_1934_1_new_text, var_1920_17_replacement, 1, var_1934_1_new_text,
  // len+1 -1)
  var_std__plus, 2, var_1921_1_len, num_1, 1, LOCAL(1),
  // range(txt len+1 -1)
  var_range, 3, var_1913_15_txt, LOCAL(1), minus_num_1, 1, LOCAL(2),
  // replace_all range(txt len+1 -1)
  func_replace_all, 1, LOCAL(2), TAIL_CALL,
  POS(1925, 19),
  POS(1926, 41),
  POS(1926, 31),
  POS(1926, 19)
};

static TAB_NUM t_lambda_229[] = {
  2, // locals
  0, // parameters
  // range(txt 1 len))
  var_range, 3, var_1913_15_txt, num_1, var_1921_1_len, 1, LOCAL(1),
  // replacement(range(txt 1 len))
  var_1920_17_replacement, 1, LOCAL(1), 1, LOCAL(2),
  // append &new_text replacement(range(txt 1 len))
  var_append, 2, var_1934_1_new_text, LOCAL(2), 1, var_1934_1_new_text,
  // len+1 -1)
  var_std__plus, 2, var_1921_1_len, num_1, 1, LOCAL(1),
  // range(txt len+1 -1)
  var_range, 3, var_1913_15_txt, LOCAL(1), minus_num_1, 1, LOCAL(2),
  // replace_all range(txt len+1 -1)
  func_replace_all, 1, LOCAL(2), TAIL_CALL,
  POS(1928, 48),
  POS(1928, 36),
  POS(1928, 19),
  POS(1929, 41),
  POS(1929, 31),
  POS(1929, 19)
};

static TAB_NUM t_lambda_230[] = {
  1, // locals
  0, // parameters
  // txt(1)
  var_1913_15_txt, 1, num_1, 1, LOCAL(1),
  // push &new_text txt(1)
  var_push, 2, var_1934_1_new_text, LOCAL(1), 1, var_1934_1_new_text,
  // range(txt 2 -1)
  var_range, 3, var_1913_15_txt, num_2, minus_num_1, 1, LOCAL(1),
  // replace_all range(txt 2 -1)
  func_replace_all, 1, LOCAL(1), TAIL_CALL,
  POS(1931, 28),
  POS(1931, 13),
  POS(1932, 25),
  POS(1932, 13)
};

static TAB_NUM t_func_std__replace_first[] = {
  1, // locals
  -2, // parameters
  MANDATORY_PARAMETER, LOCAL(1), // 1958_0_text
  REST_PARAMETER, var_1959_0_args,
  // $new_text ""
  LET, 1, string_1, 1, var_1981_1_new_text,
  // replace_first text
  func_replace_first, 1, LOCAL(1), TAIL_CALL,
  POS(1981, 3),
  POS(1982, 3)
};

static TAB_NUM t_func_replace_first[] = {
  1, // locals
  1, // parameters
  var_1961_17_txt,
  // is_empty
  var_is_empty, 1, var_1961_17_txt, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_231, lambda_232, TAIL_CALL,
  POS(1963, 11),
  POS(1962, 5)
};

static TAB_NUM t_lambda_231[] = {
  0, // locals
  0, // parameters
  //  new_text
  LET, 1, var_1981_1_new_text, TAIL_CALL,
  POS(1964, 9)
};

static TAB_NUM t_lambda_232[] = {
  0, // locals
  0, // parameters
  // for_each args
  var_for_each, 3, var_1959_0_args, lambda_233, lambda_236, TAIL_CALL,
  POS(1966, 9)
};

static TAB_NUM t_lambda_233[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 1967_3_arg
  // arg $expression $replacement
  LOCAL(2), 0, 2, LOCAL(3), var_1968_17_replacement,
  // $len match(expression txt)
  var_match, 2, LOCAL(3), var_1961_17_txt, 1, var_1969_1_len,
  // is_defined
  var_is_defined, 1, var_1969_1_len, 1, LOCAL(1),
  // if_not
  var_if_not, 3, LOCAL(1), var_next, lambda_234, TAIL_CALL,
  POS(1968, 13),
  POS(1969, 13),
  POS(1971, 19),
  POS(1970, 13)
};

static TAB_NUM t_lambda_234[] = {
  3, // locals
  0, // parameters
  // is_a_string &replacement
  var_is_a_string, 1, var_1968_17_replacement, 1, LOCAL(1),
  // update_if_not replacement.is_a_string &replacement
  var_update_if_not, 3, LOCAL(1), var_1968_17_replacement, lambda_235, 1, var_1968_17_replacement,
  // len+1 -1))
  var_std__plus, 2, var_1969_1_len, num_1, 1, LOCAL(1),
  // range(txt len+1 -1))
  var_range, 3, var_1961_17_txt, LOCAL(1), minus_num_1, 1, LOCAL(2),
  // append(new_text replacement range(txt len+1 -1))
  var_append, 3, var_1981_1_new_text, var_1968_17_replacement, LOCAL(2), 1, LOCAL(3),
  // -> append(new_text replacement range(txt len+1 -1))
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(1974, 43),
  POS(1974, 17),
  POS(1976, 58),
  POS(1976, 48),
  POS(1976, 20),
  POS(1976, 17)
};

static TAB_NUM t_lambda_235[] = {
  2, // locals
  0, // parameters
  // range(txt 1 len))
  var_range, 3, var_1961_17_txt, num_1, var_1969_1_len, 1, LOCAL(1),
  // replacement(range(txt 1 len))
  var_1968_17_replacement, 1, LOCAL(1), 1, LOCAL(2),
  //  replacement(range(txt 1 len))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(1975, 34),
  POS(1975, 22),
  POS(1975, 21)
};

static TAB_NUM t_lambda_236[] = {
  1, // locals
  0, // parameters
  // txt(1)
  var_1961_17_txt, 1, num_1, 1, LOCAL(1),
  // push &new_text txt(1)
  var_push, 2, var_1981_1_new_text, LOCAL(1), 1, var_1981_1_new_text,
  // range(txt 2 -1)
  var_range, 3, var_1961_17_txt, num_2, minus_num_1, 1, LOCAL(1),
  // replace_first range(txt 2 -1)
  func_replace_first, 1, LOCAL(1), TAIL_CALL,
  POS(1978, 28),
  POS(1978, 13),
  POS(1979, 27),
  POS(1979, 13)
};

static TAB_NUM t_func_std__count_occurrences[] = {
  1, // locals
  2, // parameters
  LOCAL(1), // 2003_0_text
  var_2004_0_expr,
  // search_next text 0
  func_search_next, 2, LOCAL(1), num_0, TAIL_CALL,
  POS(2018, 3)
};

static TAB_NUM t_func_search_next[] = {
  1, // locals
  2, // parameters
  var_2006_15_txt,
  var_2006_19_count,
  // txt == ""
  var_std__equal, 2, var_2006_15_txt, string_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_237, lambda_238, TAIL_CALL,
  POS(2008, 7),
  POS(2007, 5)
};

static TAB_NUM t_lambda_237[] = {
  0, // locals
  0, // parameters
  //  count
  LET, 1, var_2006_19_count, TAIL_CALL,
  POS(2009, 9)
};

static TAB_NUM t_lambda_238[] = {
  1, // locals
  0, // parameters
  // $n match(expr txt)
  var_match, 2, var_2004_0_expr, var_2006_15_txt, 1, var_2011_1_n,
  // is_defined:
  var_is_defined, 1, var_2011_1_n, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_n_is_defined, lambda_239, TAIL_CALL,
  POS(2011, 9),
  POS(2013, 13),
  POS(2012, 9)
};

static TAB_NUM t_lambda_n_is_defined[] = {
  3, // locals
  0, // parameters
  // n+1 -1) count+1
  var_std__plus, 2, var_2011_1_n, num_1, 1, LOCAL(1),
  // range(txt n+1 -1) count+1
  var_range, 3, var_2006_15_txt, LOCAL(1), minus_num_1, 1, LOCAL(2),
  // count+1
  var_std__plus, 2, var_2006_19_count, num_1, 1, LOCAL(3),
  // search_next range(txt n+1 -1) count+1
  func_search_next, 2, LOCAL(2), LOCAL(3), TAIL_CALL,
  POS(2014, 35),
  POS(2014, 25),
  POS(2014, 43),
  POS(2014, 13)
};

static TAB_NUM t_lambda_239[] = {
  1, // locals
  0, // parameters
  // range(txt 2 -1) count
  var_range, 3, var_2006_15_txt, num_2, minus_num_1, 1, LOCAL(1),
  // search_next range(txt 2 -1) count
  func_search_next, 2, LOCAL(1), var_2006_19_count, TAIL_CALL,
  POS(2016, 25),
  POS(2016, 13)
};

static TAB_NUM t_func_std__split_into_lines[] = {
  0, // locals
  1, // parameters
  var_2062_25_text,
  // $lines empty_list
  LET, 1, var_empty_list, 1, var_2063_1_lines,
  // $i 1
  LET, 1, num_1, 1, var_2064_1_i,
  // $n length_of(text)
  var_length_of, 1, var_2062_25_text, 1, var_2065_1_n,
  // $s i
  LET, 1, var_2064_1_i, 1, var_2066_1_s,
  // loop:
  var_loop, 1, lambda_12_loop, TAIL_CALL,
  POS(2063, 3),
  POS(2064, 3),
  POS(2065, 3),
  POS(2066, 3),
  POS(2067, 3)
};

static TAB_NUM t_lambda_12_loop[] = {
  1, // locals
  0, // parameters
  // n
  var_std__less, 2, var_2065_1_n, var_2064_1_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_240, lambda_243, TAIL_CALL,
  POS(2069, 11),
  POS(2068, 5)
};

static TAB_NUM t_lambda_240[] = {
  3, // locals
  0, // parameters
  // n
  var_std__less, 2, var_2065_1_n, var_2066_1_s, 1, LOCAL(1),
  // n
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_241, lambda_242, 1, LOCAL(3),
  // 
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(2072, 16),
  POS(2072, 16),
  POS(2071, 9),
  POS(2070, 9)
};

static TAB_NUM t_lambda_241[] = {
  2, // locals
  0, // parameters
  // range(text s n))
  var_range, 3, var_2062_25_text, var_2066_1_s, var_2065_1_n, 1, LOCAL(1),
  // push(lines range(text s n))
  var_push, 2, var_2063_1_lines, LOCAL(1), 1, LOCAL(2),
  //  push(lines range(text s n))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2073, 25),
  POS(2073, 14),
  POS(2073, 13)
};

static TAB_NUM t_lambda_242[] = {
  0, // locals
  0, // parameters
  //  lines
  LET, 1, var_2063_1_lines, TAIL_CALL,
  POS(2074, 13)
};

static TAB_NUM t_lambda_243[] = {
  2, // locals
  0, // parameters
  // text(i) == '@nl;':
  var_2062_25_text, 1, var_2064_1_i, 1, LOCAL(1),
  // text(i) == '@nl;':
  var_std__equal, 2, LOCAL(1), chr_10, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_244, lambda_245, TAIL_CALL,
  POS(2077, 11),
  POS(2077, 11),
  POS(2076, 9)
};

static TAB_NUM t_lambda_244[] = {
  1, // locals
  0, // parameters
  // range(text s i)
  var_range, 3, var_2062_25_text, var_2066_1_s, var_2064_1_i, 1, LOCAL(1),
  // push &lines range(text s i)
  var_push, 2, var_2063_1_lines, LOCAL(1), 1, var_2063_1_lines,
  // !i i+1
  var_std__plus, 2, var_2064_1_i, num_1, 1, var_2064_1_i,
  // !s i
  LET, 1, var_2064_1_i, 1, var_2066_1_s,
  // next
  var_next, 0, TAIL_CALL,
  POS(2078, 25),
  POS(2078, 13),
  POS(2079, 13),
  POS(2080, 13),
  POS(2081, 13)
};

static TAB_NUM t_lambda_245[] = {
  0, // locals
  0, // parameters
  // !i i+1
  var_std__plus, 2, var_2064_1_i, num_1, 1, var_2064_1_i,
  // next
  var_next, 0, TAIL_CALL,
  POS(2083, 13),
  POS(2084, 13)
};

static TAB_NUM t_func_std__split_into_indented_lines[] = {
  1, // locals
  1, // parameters
  var_2145_0_text,
  // $n length_of(text)
  var_length_of, 1, var_2145_0_text, 1, LOCAL(1),
  // split 1 n
  func_split, 2, num_1, LOCAL(1), TAIL_CALL,
  POS(2147, 3),
  POS(2148, 3)
};

static TAB_NUM t_func_split[] = {
  3, // locals
  2, // parameters
  var_2150_9_s,
  var_2150_11_e,
  // e+1-s > FORK_TEXT_THRESHOLD: # recurse to exploit parallel execution
  var_std__plus, 2, var_2150_11_e, num_1, 1, LOCAL(1),
  // e+1-s > FORK_TEXT_THRESHOLD: # recurse to exploit parallel execution
  var_std__minus, 2, LOCAL(1), var_2150_9_s, 1, LOCAL(2),
  // FORK_TEXT_THRESHOLD: # recurse to exploit parallel execution
  var_std__less, 2, num_300, LOCAL(2), 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_246, lambda_247, TAIL_CALL,
  POS(2152, 7),
  POS(2152, 7),
  POS(2152, 15),
  POS(2151, 5)
};

static TAB_NUM t_lambda_246[] = {
  4, // locals
  0, // parameters
  // s+e) .div. 2
  var_std__plus, 2, var_2150_9_s, var_2150_11_e, 1, LOCAL(1),
  // $m (s+e) .div. 2
  var_div, 2, LOCAL(1), num_2, 1, LOCAL(4),
  // split(s m) split(m+1 e)
  func_split, 2, var_2150_9_s, LOCAL(4), 1, LOCAL(1),
  // m+1 e)
  var_std__plus, 2, LOCAL(4), num_1, 1, LOCAL(2),
  // split(m+1 e)
  func_split, 2, LOCAL(2), var_2150_11_e, 1, LOCAL(3),
  // append split(s m) split(m+1 e)
  var_append, 2, LOCAL(1), LOCAL(3), TAIL_CALL,
  POS(2153, 13),
  POS(2153, 9),
  POS(2154, 16),
  POS(2154, 33),
  POS(2154, 27),
  POS(2154, 9)
};

static TAB_NUM t_lambda_247[] = {
  2, // locals
  0, // parameters
  // $lines empty_list
  LET, 1, var_empty_list, 1, var_2156_1_lines,
  // s == 1 || text(s-1) == '@nl;'
  var_std__equal, 2, var_2150_9_s, num_1, 1, LOCAL(1),
  // s == 1 || text(s-1) == '@nl;'
  var_std__or, 2, LOCAL(1), lambda_248, 1, LOCAL(2),
  // $ls
  var_if, 3, LOCAL(2), lambda_249, lambda_250, 1, var_2157_1_ls,
  // from_to s e
  var_from_to, 4, var_2150_9_s, var_2150_11_e, lambda_251, lambda_254, TAIL_CALL,
  POS(2156, 9),
  POS(2159, 13),
  POS(2159, 13),
  POS(2157, 9),
  POS(2162, 9)
};

static TAB_NUM t_lambda_248[] = {
  3, // locals
  0, // parameters
  // s-1) == '@nl;'
  var_std__minus, 2, var_2150_9_s, num_1, 1, LOCAL(1),
  // text(s-1) == '@nl;'
  var_2145_0_text, 1, LOCAL(1), 1, LOCAL(2),
  // text(s-1) == '@nl;'
  var_std__equal, 2, LOCAL(2), chr_10, 1, LOCAL(3),
  // text(s-1) == '@nl;'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(2159, 28),
  POS(2159, 23),
  POS(2159, 23),
  POS(2159, 23)
};

static TAB_NUM t_lambda_249[] = {
  0, // locals
  0, // parameters
  //  s # the current block starts at a line start
  LET, 1, var_2150_9_s, TAIL_CALL,
  POS(2160, 15)
};

static TAB_NUM t_lambda_250[] = {
  0, // locals
  0, // parameters
  //  undefined # just skip the characters until the next line start
  LET, 1, var_undefined, TAIL_CALL,
  POS(2161, 15)
};

static TAB_NUM t_lambda_251[] = {
  2, // locals
  1, // parameters
  var_2163_3_i,
  // text(i) == '@nl;' next:
  var_2145_0_text, 1, var_2163_3_i, 1, LOCAL(1),
  // text(i) == '@nl;' next:
  var_std__equal, 2, LOCAL(1), chr_10, 1, LOCAL(2),
  // if_not text(i) == '@nl;' next:
  var_if_not, 3, LOCAL(2), var_next, lambda_252, TAIL_CALL,
  POS(2164, 20),
  POS(2164, 20),
  POS(2164, 13)
};

static TAB_NUM t_lambda_252[] = {
  1, // locals
  0, // parameters
  // is_defined:
  var_is_defined, 1, var_2157_1_ls, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_ls_is_defined, lambda_253, TAIL_CALL,
  POS(2166, 20),
  POS(2165, 15)
};

static TAB_NUM t_lambda_ls_is_defined[] = {
  1, // locals
  0, // parameters
  // create_line(ls i)
  func_create_line, 2, var_2157_1_ls, var_2163_3_i, 1, LOCAL(1),
  // push &lines create_line(ls i)
  var_push, 2, var_2156_1_lines, LOCAL(1), 1, var_2156_1_lines,
  // !ls i+1
  var_std__plus, 2, var_2163_3_i, num_1, 1, var_2157_1_ls,
  // next
  var_next, 0, TAIL_CALL,
  POS(2167, 31),
  POS(2167, 19),
  POS(2168, 19),
  POS(2169, 19)
};

static TAB_NUM t_lambda_253[] = {
  0, // locals
  0, // parameters
  // !ls i+1
  var_std__plus, 2, var_2163_3_i, num_1, 1, var_2157_1_ls,
  // next
  var_next, 0, TAIL_CALL,
  POS(2171, 19),
  POS(2172, 19)
};

static TAB_NUM t_lambda_254[] = {
  2, // locals
  0, // parameters
  // is_defined && ls <= e:
  var_is_defined, 1, var_2157_1_ls, 1, LOCAL(1),
  // is_defined && ls <= e:
  var_std__and, 2, LOCAL(1), lambda_255, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_256, lambda_258, TAIL_CALL,
  POS(2175, 18),
  POS(2175, 18),
  POS(2174, 13)
};

static TAB_NUM t_lambda_255[] = {
  2, // locals
  0, // parameters
  // e:
  var_std__less, 2, var_2150_11_e, var_2157_1_ls, 1, LOCAL(1),
  // e:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // ls <= e:
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2175, 38),
  POS(2175, 38),
  POS(2175, 32)
};

static TAB_NUM t_lambda_256[] = {
  0, // locals
  0, // parameters
  // loop: # the last line extends into the next block
  var_loop, 1, lambda_13_loop, TAIL_CALL,
  POS(2176, 17)
};

static TAB_NUM t_lambda_13_loop[] = {
  2, // locals
  0, // parameters
  // !e e+1
  var_std__plus, 2, var_2150_11_e, num_1, 1, var_2150_11_e,
  // text(e) == '@nl;'
  var_2145_0_text, 1, var_2150_11_e, 1, LOCAL(1),
  // text(e) == '@nl;'
  var_std__equal, 2, LOCAL(1), chr_10, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_257, var_next, TAIL_CALL,
  POS(2177, 19),
  POS(2179, 21),
  POS(2179, 21),
  POS(2178, 19)
};

static TAB_NUM t_lambda_257[] = {
  2, // locals
  0, // parameters
  // create_line(ls e))
  func_create_line, 2, var_2157_1_ls, var_2150_11_e, 1, LOCAL(1),
  // push(lines create_line(ls e))
  var_push, 2, var_2156_1_lines, LOCAL(1), 1, LOCAL(2),
  //  push(lines create_line(ls e))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2180, 35),
  POS(2180, 24),
  POS(2180, 23)
};

static TAB_NUM t_lambda_258[] = {
  0, // locals
  0, // parameters
  //  lines
  LET, 1, var_2156_1_lines, TAIL_CALL,
  POS(2182, 17)
};

static TAB_NUM t_func_create_line[] = {
  0, // locals
  2, // parameters
  var_2184_15_s,
  var_2184_17_e,
  // $indent 0
  LET, 1, num_0, 1, var_2185_1_indent,
  // loop:
  var_loop, 1, lambda_14_loop, TAIL_CALL,
  POS(2185, 5),
  POS(2186, 5)
};

static TAB_NUM t_lambda_14_loop[] = {
  2, // locals
  0, // parameters
  // text(s) == '@ht;':
  var_2145_0_text, 1, var_2184_15_s, 1, LOCAL(1),
  // text(s) == '@ht;':
  var_std__equal, 2, LOCAL(1), chr_9, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_259, lambda_260, TAIL_CALL,
  POS(2188, 9),
  POS(2188, 9),
  POS(2187, 7)
};

static TAB_NUM t_lambda_259[] = {
  0, // locals
  0, // parameters
  // !indent indent+8
  var_std__plus, 2, var_2185_1_indent, num_8, 1, var_2185_1_indent,
  // !s s+1
  var_std__plus, 2, var_2184_15_s, num_1, 1, var_2184_15_s,
  // next
  var_next, 0, TAIL_CALL,
  POS(2189, 11),
  POS(2190, 11),
  POS(2191, 11)
};

static TAB_NUM t_lambda_260[] = {
  2, // locals
  0, // parameters
  // text(s) == ' ':
  var_2145_0_text, 1, var_2184_15_s, 1, LOCAL(1),
  // text(s) == ' ':
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_261, lambda_262, TAIL_CALL,
  POS(2194, 13),
  POS(2194, 13),
  POS(2193, 11)
};

static TAB_NUM t_lambda_261[] = {
  0, // locals
  0, // parameters
  // !indent indent+1
  var_std__plus, 2, var_2185_1_indent, num_1, 1, var_2185_1_indent,
  // !s s+1
  var_std__plus, 2, var_2184_15_s, num_1, 1, var_2184_15_s,
  // next
  var_next, 0, TAIL_CALL,
  POS(2195, 15),
  POS(2196, 15),
  POS(2197, 15)
};

static TAB_NUM t_lambda_262[] = {
  1, // locals
  0, // parameters
  // $line_text range(text s e)
  var_range, 3, var_2145_0_text, var_2184_15_s, var_2184_17_e, 1, var_2199_1_line_text,
  // line_text == "@nl;"
  var_std__equal, 2, var_2199_1_line_text, string_7, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_263, lambda_264, TAIL_CALL,
  POS(2199, 15),
  POS(2201, 17),
  POS(2200, 15)
};

static TAB_NUM t_lambda_263[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(2202, 19)
};

static TAB_NUM t_lambda_264[] = {
  1, // locals
  0, // parameters
  // tuple(indent line_text)
  var_tuple, 2, var_2185_1_indent, var_2199_1_line_text, 1, LOCAL(1),
  //  tuple(indent line_text)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(2203, 20),
  POS(2203, 19)
};

static TAB_NUM t_func_indent_of[] = {
  1, // locals
  1, // parameters
  var_2210_13_line,
  // is_defined
  var_is_defined, 1, var_2210_13_line, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_265, lambda_266, TAIL_CALL,
  POS(2212, 10),
  POS(2211, 3)
};

static TAB_NUM t_lambda_265[] = {
  1, // locals
  0, // parameters
  // first(line)
  var_first, 1, var_2210_13_line, 1, LOCAL(1),
  //  first(line)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(2213, 8),
  POS(2213, 7)
};

static TAB_NUM t_lambda_266[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(2214, 7)
};

static TAB_NUM t_func_std__split_into_groups[] = {
  0, // locals
  1, // parameters
  var_2267_0_lines,
  // $n length_of(lines)
  var_length_of, 1, var_2267_0_lines, 1, var_2269_1_n,
  // $fv 1 # first valid line
  LET, 1, num_1, 1, var_2270_1_fv,
  // loop:
  var_loop, 1, lambda_15_loop, TAIL_CALL,
  POS(2269, 3),
  POS(2270, 3),
  POS(2271, 3)
};

static TAB_NUM t_lambda_15_loop[] = {
  2, // locals
  0, // parameters
  // n:
  var_std__less, 2, var_2269_1_n, var_2270_1_fv, 1, LOCAL(1),
  // n:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_267, lambda_269, TAIL_CALL,
  POS(2273, 13),
  POS(2273, 13),
  POS(2272, 5)
};

static TAB_NUM t_lambda_267[] = {
  1, // locals
  0, // parameters
  // lines(fv))
  var_2267_0_lines, 1, var_2270_1_fv, 1, LOCAL(1),
  // $indent indent_of(lines(fv))
  func_indent_of, 1, LOCAL(1), 1, var_2274_1_indent,
  // is_defined:
  var_is_defined, 1, var_2274_1_indent, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_indent_is_defined, lambda_268, TAIL_CALL,
  POS(2274, 27),
  POS(2274, 9),
  POS(2276, 18),
  POS(2275, 9)
};

static TAB_NUM t_lambda_indent_is_defined[] = {
  0, // locals
  0, // parameters
  // split fv n indent undefined
  func_2_split, 4, var_2270_1_fv, var_2269_1_n, var_2274_1_indent, var_undefined, TAIL_CALL,
  POS(2277, 13)
};

static TAB_NUM t_lambda_268[] = {
  0, // locals
  0, // parameters
  // !fv fv+1
  var_std__plus, 2, var_2270_1_fv, num_1, 1, var_2270_1_fv,
  // next
  var_next, 0, TAIL_CALL,
  POS(2279, 13),
  POS(2280, 13)
};

static TAB_NUM t_lambda_269[] = {
  0, // locals
  0, // parameters
  //  empty_list
  LET, 1, var_empty_list, TAIL_CALL,
  POS(2281, 9)
};

static TAB_NUM t_func_2_split[] = {
  3, // locals
  4, // parameters
  var_2283_9_s,
  var_2283_11_e,
  var_2283_13_indent,
  var_2283_20_gs,
  // e+1-s > FORK_LINES_THRESHOLD: # recurse to exploit parallel execution
  var_std__plus, 2, var_2283_11_e, num_1, 1, LOCAL(1),
  // e+1-s > FORK_LINES_THRESHOLD: # recurse to exploit parallel execution
  var_std__minus, 2, LOCAL(1), var_2283_9_s, 1, LOCAL(2),
  // FORK_LINES_THRESHOLD: # recurse to exploit parallel execution
  var_std__less, 2, num_20, LOCAL(2), 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_270, lambda_271, TAIL_CALL,
  POS(2285, 7),
  POS(2285, 7),
  POS(2285, 15),
  POS(2284, 5)
};

static TAB_NUM t_lambda_270[] = {
  4, // locals
  0, // parameters
  // s+e) .div. 2
  var_std__plus, 2, var_2283_9_s, var_2283_11_e, 1, LOCAL(1),
  // $m (s+e) .div. 2
  var_div, 2, LOCAL(1), num_2, 1, LOCAL(4),
  // split(s m indent gs) split(m+1 e indent undefined)
  func_2_split, 4, var_2283_9_s, LOCAL(4), var_2283_13_indent, var_2283_20_gs, 1, LOCAL(1),
  // m+1 e indent undefined)
  var_std__plus, 2, LOCAL(4), num_1, 1, LOCAL(2),
  // split(m+1 e indent undefined)
  func_2_split, 4, LOCAL(2), var_2283_11_e, var_2283_13_indent, var_undefined, 1, LOCAL(3),
  // append split(s m indent gs) split(m+1 e indent undefined)
  var_append, 2, LOCAL(1), LOCAL(3), TAIL_CALL,
  POS(2286, 13),
  POS(2286, 9),
  POS(2287, 16),
  POS(2287, 43),
  POS(2287, 37),
  POS(2287, 9)
};

static TAB_NUM t_lambda_271[] = {
  0, // locals
  0, // parameters
  // $groups empty_list
  LET, 1, var_empty_list, 1, var_2289_1_groups,
  // $minimum_indent VERY_LARGE_INDENT
  LET, 1, num_9999, 1, var_2290_1_minimum_indent,
  // $ge gs
  LET, 1, var_2283_20_gs, 1, var_2291_1_ge,
  // from_to s e
  var_from_to, 4, var_2283_9_s, var_2283_11_e, lambda_272, lambda_280, TAIL_CALL,
  POS(2289, 9),
  POS(2290, 9),
  POS(2291, 9),
  POS(2292, 9)
};

static TAB_NUM t_lambda_272[] = {
  1, // locals
  1, // parameters
  var_2293_3_i,
  // lines(i))
  var_2267_0_lines, 1, var_2293_3_i, 1, LOCAL(1),
  // $current_indent indent_of(lines(i))
  func_indent_of, 1, LOCAL(1), 1, var_2294_1_current_indent,
  // current_indent == indent:
  var_std__equal, 2, var_2294_1_current_indent, var_2283_13_indent, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_273, lambda_277, TAIL_CALL,
  POS(2294, 39),
  POS(2294, 13),
  POS(2296, 15),
  POS(2295, 13)
};

static TAB_NUM t_lambda_273[] = {
  2, // locals
  0, // parameters
  // is_defined && gs < i:
  var_is_defined, 1, var_2283_20_gs, 1, LOCAL(1),
  // is_defined && gs < i:
  var_std__and, 2, LOCAL(1), lambda_274, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_275, lambda_276, TAIL_CALL,
  POS(2298, 22),
  POS(2298, 22),
  POS(2297, 17)
};

static TAB_NUM t_lambda_274[] = {
  1, // locals
  0, // parameters
  // gs < i:
  var_std__less, 2, var_2283_20_gs, var_2293_3_i, 1, LOCAL(1),
  // gs < i:
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(2298, 36),
  POS(2298, 36)
};

static TAB_NUM t_lambda_275[] = {
  0, // locals
  0, // parameters
  // add_groups !groups ge
  func_add_groups, 1, var_2291_1_ge, 1, var_2289_1_groups,
  // start_new_fragment_and_next i
  func_start_new_fragment_and_next, 1, var_2293_3_i, TAIL_CALL,
  POS(2299, 21),
  POS(2300, 21)
};

static TAB_NUM t_lambda_276[] = {
  0, // locals
  0, // parameters
  // start_new_fragment_and_next i
  func_start_new_fragment_and_next, 1, var_2293_3_i, TAIL_CALL,
  POS(2302, 21)
};

static TAB_NUM t_lambda_277[] = {
  1, // locals
  0, // parameters
  // is_defined
  var_is_defined, 1, var_2294_1_current_indent, 1, LOCAL(1),
  // !ge
  var_if, 3, LOCAL(1), lambda_278, lambda_279, 1, var_2291_1_ge,
  // reduce_minimum_indent_and_next current_indent
  func_reduce_minimum_indent_and_next, 1, var_2294_1_current_indent, TAIL_CALL,
  POS(2306, 36),
  POS(2304, 17),
  POS(2309, 17)
};

static TAB_NUM t_lambda_278[] = {
  0, // locals
  0, // parameters
  //  i
  LET, 1, var_2293_3_i, TAIL_CALL,
  POS(2307, 23)
};

static TAB_NUM t_lambda_279[] = {
  0, // locals
  0, // parameters
  //  ge
  LET, 1, var_2291_1_ge, TAIL_CALL,
  POS(2308, 23)
};

static TAB_NUM t_lambda_280[] = {
  1, // locals
  0, // parameters
  // is_defined:
  var_is_defined, 1, var_2283_20_gs, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_gs_is_defined, lambda_288, TAIL_CALL,
  POS(2312, 18),
  POS(2311, 13)
};

static TAB_NUM t_lambda_gs_is_defined[] = {
  0, // locals
  0, // parameters
  // loop: # the last group extends into the next block
  var_loop, 1, lambda_16_loop, TAIL_CALL,
  POS(2313, 17)
};

static TAB_NUM t_lambda_16_loop[] = {
  1, // locals
  0, // parameters
  // !e e+1
  var_std__plus, 2, var_2283_11_e, num_1, 1, var_2283_11_e,
  // n
  var_std__less, 2, var_2269_1_n, var_2283_11_e, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_281, lambda_282, TAIL_CALL,
  POS(2314, 19),
  POS(2316, 25),
  POS(2315, 19)
};

static TAB_NUM t_lambda_281[] = {
  1, // locals
  0, // parameters
  // add_groups(ge)
  func_add_groups, 1, var_2291_1_ge, 1, LOCAL(1),
  //  add_groups(ge)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(2317, 24),
  POS(2317, 23)
};

static TAB_NUM t_lambda_282[] = {
  2, // locals
  0, // parameters
  // lines(e))
  var_2267_0_lines, 1, var_2283_11_e, 1, LOCAL(1),
  // $current_indent indent_of(lines(e))
  func_indent_of, 1, LOCAL(1), 1, var_2319_1_current_indent,
  // is_defined && current_indent <= indent
  var_is_defined, 1, var_2319_1_current_indent, 1, LOCAL(1),
  // is_defined && current_indent <= indent
  var_std__and, 2, LOCAL(1), lambda_283, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_284, lambda_285, TAIL_CALL,
  POS(2319, 49),
  POS(2319, 23),
  POS(2321, 40),
  POS(2321, 40),
  POS(2320, 23)
};

static TAB_NUM t_lambda_283[] = {
  2, // locals
  0, // parameters
  // indent
  var_std__less, 2, var_2283_13_indent, var_2319_1_current_indent, 1, LOCAL(1),
  // indent
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // current_indent <= indent
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2321, 72),
  POS(2321, 72),
  POS(2321, 54)
};

static TAB_NUM t_lambda_284[] = {
  1, // locals
  0, // parameters
  // add_groups(ge)
  func_add_groups, 1, var_2291_1_ge, 1, LOCAL(1),
  //  add_groups(ge)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(2322, 28),
  POS(2322, 27)
};

static TAB_NUM t_lambda_285[] = {
  1, // locals
  0, // parameters
  // is_defined
  var_is_defined, 1, var_2319_1_current_indent, 1, LOCAL(1),
  // !ge
  var_if, 3, LOCAL(1), lambda_286, lambda_287, 1, var_2291_1_ge,
  // reduce_minimum_indent_and_next current_indent
  func_reduce_minimum_indent_and_next, 1, var_2319_1_current_indent, TAIL_CALL,
  POS(2326, 46),
  POS(2324, 27),
  POS(2329, 27)
};

static TAB_NUM t_lambda_286[] = {
  0, // locals
  0, // parameters
  //  e
  LET, 1, var_2283_11_e, TAIL_CALL,
  POS(2327, 33)
};

static TAB_NUM t_lambda_287[] = {
  0, // locals
  0, // parameters
  //  ge
  LET, 1, var_2291_1_ge, TAIL_CALL,
  POS(2328, 33)
};

static TAB_NUM t_lambda_288[] = {
  0, // locals
  0, // parameters
  //  groups
  LET, 1, var_2289_1_groups, TAIL_CALL,
  POS(2330, 17)
};

static TAB_NUM t_func_add_groups[] = {
  1, // locals
  1, // parameters
  var_2332_14_l,
  // gs == l
  var_std__equal, 2, var_2283_20_gs, var_2332_14_l, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_289, lambda_290, TAIL_CALL,
  POS(2334, 13),
  POS(2333, 11)
};

static TAB_NUM t_lambda_289[] = {
  2, // locals
  0, // parameters
  // lines(gs))
  var_2267_0_lines, 1, var_2283_20_gs, 1, LOCAL(1),
  // push(groups lines(gs))
  var_push, 2, var_2289_1_groups, LOCAL(1), 1, LOCAL(2),
  //  push(groups lines(gs))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2335, 28),
  POS(2335, 16),
  POS(2335, 15)
};

static TAB_NUM t_lambda_290[] = {
  1, // locals
  0, // parameters
  // minimum_indent == VERY_LARGE_INDENT
  var_std__equal, 2, var_2290_1_minimum_indent, num_9999, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_291, lambda_292, TAIL_CALL,
  POS(2338, 17),
  POS(2337, 15)
};

static TAB_NUM t_lambda_291[] = {
  2, // locals
  0, // parameters
  // range(lines gs l))
  var_range, 3, var_2267_0_lines, var_2283_20_gs, var_2332_14_l, 1, LOCAL(1),
  // append(groups range(lines gs l))
  var_append, 2, var_2289_1_groups, LOCAL(1), 1, LOCAL(2),
  //  append(groups range(lines gs l))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2339, 34),
  POS(2339, 20),
  POS(2339, 19)
};

static TAB_NUM t_lambda_292[] = {
  4, // locals
  0, // parameters
  // $headline lines(gs)
  var_2267_0_lines, 1, var_2283_20_gs, 1, LOCAL(4),
  // gs+1 l))
  var_std__plus, 2, var_2283_20_gs, num_1, 1, LOCAL(1),
  // range(lines gs+1 l))
  var_range, 3, var_2267_0_lines, LOCAL(1), var_2332_14_l, 1, LOCAL(2),
  // .subgroups_of range(lines gs+1 l))
  LET, -1, LOCAL(4), var_subgroups_of, LOCAL(2), LOCAL(3),
  // push groups headline(.subgroups_of range(lines gs+1 l))
  var_push, 2, var_2289_1_groups, LOCAL(3), TAIL_CALL,
  POS(2341, 19),
  POS(2342, 66),
  POS(2342, 54),
  POS(2342, 40),
  POS(2342, 19)
};

static TAB_NUM t_func_reduce_minimum_indent_and_next[] = {
  2, // locals
  1, // parameters
  var_2344_34_current_indent,
  // is_defined && current_indent < minimum_indent:
  var_is_defined, 1, var_2344_34_current_indent, 1, LOCAL(1),
  // is_defined && current_indent < minimum_indent:
  var_std__and, 2, LOCAL(1), lambda_293, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_294, var_next, TAIL_CALL,
  POS(2346, 28),
  POS(2346, 28),
  POS(2345, 11)
};

static TAB_NUM t_lambda_293[] = {
  1, // locals
  0, // parameters
  // current_indent < minimum_indent:
  var_std__less, 2, var_2344_34_current_indent, var_2290_1_minimum_indent, 1, LOCAL(1),
  // current_indent < minimum_indent:
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(2346, 42),
  POS(2346, 42)
};

static TAB_NUM t_lambda_294[] = {
  0, // locals
  0, // parameters
  // !minimum_indent current_indent
  LET, 1, var_2344_34_current_indent, 1, var_2290_1_minimum_indent,
  // next
  var_next, 0, TAIL_CALL,
  POS(2347, 15),
  POS(2348, 15)
};

static TAB_NUM t_func_start_new_fragment_and_next[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 2351_31_i
  // !minimum_indent VERY_LARGE_INDENT
  LET, 1, num_9999, 1, var_2290_1_minimum_indent,
  // !gs i
  LET, 1, LOCAL(1), 1, var_2283_20_gs,
  // !ge i
  LET, 1, LOCAL(1), 1, var_2291_1_ge,
  // next
  var_next, 0, TAIL_CALL,
  POS(2352, 11),
  POS(2353, 11),
  POS(2354, 11),
  POS(2355, 11)
};

static TAB_NUM t_func_std__wrap_words[] = {
  0, // locals
  2, // parameters
  var_2384_0_text,
  var_2385_0_width,
  // $wrapped_text ""
  LET, 1, string_1, 1, var_2387_1_wrapped_text,
  // $n length_of(text)
  var_length_of, 1, var_2384_0_text, 1, var_2388_1_n,
  // $s 1 # start of not yet copied text
  LET, 1, num_1, 1, var_2389_1_s,
  // $l s # line start position
  LET, 1, var_2389_1_s, 1, var_2390_1_l,
  // $b undefined # possible break position
  LET, 1, var_undefined, 1, var_2391_1_b,
  // $i 1
  LET, 1, num_1, 1, var_2392_1_i,
  // loop:
  var_loop, 1, lambda_17_loop, TAIL_CALL,
  POS(2387, 3),
  POS(2388, 3),
  POS(2389, 3),
  POS(2390, 3),
  POS(2391, 3),
  POS(2392, 3),
  POS(2393, 3)
};

static TAB_NUM t_lambda_17_loop[] = {
  1, // locals
  0, // parameters
  // n
  var_std__less, 2, var_2388_1_n, var_2392_1_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_295, lambda_296, TAIL_CALL,
  POS(2395, 11),
  POS(2394, 5)
};

static TAB_NUM t_lambda_295[] = {
  2, // locals
  0, // parameters
  // range(text s n))
  var_range, 3, var_2384_0_text, var_2389_1_s, var_2388_1_n, 1, LOCAL(1),
  // append(wrapped_text range(text s n))
  var_append, 2, var_2387_1_wrapped_text, LOCAL(1), 1, LOCAL(2),
  //  append(wrapped_text range(text s n))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2396, 30),
  POS(2396, 10),
  POS(2396, 9)
};

static TAB_NUM t_lambda_296[] = {
  1, // locals
  0, // parameters
  // $chr text(i)
  var_2384_0_text, 1, var_2392_1_i, 1, var_2398_1_chr,
  // chr == '@nl;':
  var_std__equal, 2, var_2398_1_chr, chr_10, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_297, lambda_298, TAIL_CALL,
  POS(2398, 9),
  POS(2400, 11),
  POS(2399, 9)
};

static TAB_NUM t_lambda_297[] = {
  0, // locals
  0, // parameters
  // !i i+1
  var_std__plus, 2, var_2392_1_i, num_1, 1, var_2392_1_i,
  // !l i
  LET, 1, var_2392_1_i, 1, var_2390_1_l,
  // !b undefined
  LET, 1, var_undefined, 1, var_2391_1_b,
  // next
  var_next, 0, TAIL_CALL,
  POS(2401, 13),
  POS(2402, 13),
  POS(2403, 13),
  POS(2404, 13)
};

static TAB_NUM t_lambda_298[] = {
  1, // locals
  0, // parameters
  // chr == ' ':
  var_std__equal, 2, var_2398_1_chr, chr_32, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_299, lambda_302, TAIL_CALL,
  POS(2407, 15),
  POS(2406, 13)
};

static TAB_NUM t_lambda_299[] = {
  2, // locals
  0, // parameters
  // i-l == width: # break
  var_std__minus, 2, var_2392_1_i, var_2390_1_l, 1, LOCAL(1),
  // i-l == width: # break
  var_std__equal, 2, LOCAL(1), var_2385_0_width, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_300, lambda_301, TAIL_CALL,
  POS(2409, 19),
  POS(2409, 19),
  POS(2408, 17)
};

static TAB_NUM t_lambda_300[] = {
  2, // locals
  0, // parameters
  // i-1)
  var_std__minus, 2, var_2392_1_i, num_1, 1, LOCAL(1),
  // range(text s i-1)
  var_range, 3, var_2384_0_text, var_2389_1_s, LOCAL(1), 1, LOCAL(2),
  // append &wrapped_text range(text s i-1)
  var_append, 2, var_2387_1_wrapped_text, LOCAL(2), 1, var_2387_1_wrapped_text,
  // push &wrapped_text '@nl;'
  var_push, 2, var_2387_1_wrapped_text, chr_10, 1, var_2387_1_wrapped_text,
  // !i i+1
  var_std__plus, 2, var_2392_1_i, num_1, 1, var_2392_1_i,
  // !s i
  LET, 1, var_2392_1_i, 1, var_2389_1_s,
  // !l s
  LET, 1, var_2389_1_s, 1, var_2390_1_l,
  // !b undefined
  LET, 1, var_undefined, 1, var_2391_1_b,
  // next
  var_next, 0, TAIL_CALL,
  POS(2410, 55),
  POS(2410, 42),
  POS(2410, 21),
  POS(2411, 21),
  POS(2412, 21),
  POS(2413, 21),
  POS(2414, 21),
  POS(2415, 21),
  POS(2416, 21)
};

static TAB_NUM t_lambda_301[] = {
  0, // locals
  0, // parameters
  // !b i
  LET, 1, var_2392_1_i, 1, var_2391_1_b,
  // !i i+1
  var_std__plus, 2, var_2392_1_i, num_1, 1, var_2392_1_i,
  // next
  var_next, 0, TAIL_CALL,
  POS(2418, 21),
  POS(2419, 21),
  POS(2420, 21)
};

static TAB_NUM t_lambda_302[] = {
  3, // locals
  0, // parameters
  // !i i+1
  var_std__plus, 2, var_2392_1_i, num_1, 1, var_2392_1_i,
  // i-l <= width
  var_std__minus, 2, var_2392_1_i, var_2390_1_l, 1, LOCAL(1),
  // width
  var_std__less, 2, var_2385_0_width, LOCAL(1), 1, LOCAL(2),
  // width
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), var_next, lambda_303, TAIL_CALL,
  POS(2422, 17),
  POS(2424, 19),
  POS(2424, 26),
  POS(2424, 26),
  POS(2423, 17)
};

static TAB_NUM t_lambda_303[] = {
  1, // locals
  0, // parameters
  // is_defined: # wrap
  var_is_defined, 1, var_2391_1_b, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_b_is_defined, lambda_304, TAIL_CALL,
  POS(2428, 25),
  POS(2427, 21)
};

static TAB_NUM t_lambda_b_is_defined[] = {
  2, // locals
  0, // parameters
  // b-1)
  var_std__minus, 2, var_2391_1_b, num_1, 1, LOCAL(1),
  // range(text s b-1)
  var_range, 3, var_2384_0_text, var_2389_1_s, LOCAL(1), 1, LOCAL(2),
  // append &wrapped_text range(text s b-1)
  var_append, 2, var_2387_1_wrapped_text, LOCAL(2), 1, var_2387_1_wrapped_text,
  // push &wrapped_text '@nl;'
  var_push, 2, var_2387_1_wrapped_text, chr_10, 1, var_2387_1_wrapped_text,
  // !s b+1
  var_std__plus, 2, var_2391_1_b, num_1, 1, var_2389_1_s,
  // !l s
  LET, 1, var_2389_1_s, 1, var_2390_1_l,
  // !b undefined
  LET, 1, var_undefined, 1, var_2391_1_b,
  // next
  var_next, 0, TAIL_CALL,
  POS(2429, 59),
  POS(2429, 46),
  POS(2429, 25),
  POS(2430, 25),
  POS(2431, 25),
  POS(2432, 25),
  POS(2433, 25),
  POS(2434, 25)
};

static TAB_NUM t_lambda_304[] = {
  2, // locals
  0, // parameters
  // i-2)
  var_std__minus, 2, var_2392_1_i, num_2, 1, LOCAL(1),
  // range(text s i-2)
  var_range, 3, var_2384_0_text, var_2389_1_s, LOCAL(1), 1, LOCAL(2),
  // append &wrapped_text range(text s i-2)
  var_append, 2, var_2387_1_wrapped_text, LOCAL(2), 1, var_2387_1_wrapped_text,
  // push &wrapped_text '@nl;'
  var_push, 2, var_2387_1_wrapped_text, chr_10, 1, var_2387_1_wrapped_text,
  // !s i-1
  var_std__minus, 2, var_2392_1_i, num_1, 1, var_2389_1_s,
  // !l s
  LET, 1, var_2389_1_s, 1, var_2390_1_l,
  // next
  var_next, 0, TAIL_CALL,
  POS(2436, 59),
  POS(2436, 46),
  POS(2436, 25),
  POS(2437, 25),
  POS(2438, 25),
  POS(2439, 25),
  POS(2440, 25)
};

static TAB_NUM t_func_std_types__string___serialize[] = {
  0, // locals
  -2, // parameters
  MANDATORY_PARAMETER, var_2460_0_self,
  var_undefined, var_2461_0_indent,
  // $str "@quot;"
  LET, 1, string_8, 1, var_2463_1_str,
  // $s 1
  LET, 1, num_1, 1, var_2464_1_s,
  // for_each self
  var_for_each, 3, var_2460_0_self, lambda_305, lambda_310, TAIL_CALL,
  POS(2463, 3),
  POS(2464, 3),
  POS(2465, 3)
};

static TAB_NUM t_lambda_305[] = {
  2, // locals
  2, // parameters
  var_2466_3_idx,
  var_2466_7_chr,
  // chr < '@0x20;' || chr > '@0x7e;' || chr == '"' || chr == '@@':
  var_std__less, 2, var_2466_7_chr, chr_32, 1, LOCAL(1),
  // chr < '@0x20;' || chr > '@0x7e;' || chr == '"' || chr == '@@':
  var_std__or, 2, LOCAL(1), lambda_306, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_309, var_next, TAIL_CALL,
  POS(2468, 9),
  POS(2468, 9),
  POS(2467, 7)
};

static TAB_NUM t_lambda_306[] = {
  2, // locals
  0, // parameters
  // 0x7e;' || chr == '"' || chr == '@@':
  var_std__less, 2, chr_126, var_2466_7_chr, 1, LOCAL(1),
  // 0x7e;' || chr == '"' || chr == '@@':
  var_std__or, 2, LOCAL(1), lambda_307, 1, LOCAL(2),
  // chr > '@0x7e;' || chr == '"' || chr == '@@':
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2468, 35),
  POS(2468, 35),
  POS(2468, 27)
};

static TAB_NUM t_lambda_307[] = {
  2, // locals
  0, // parameters
  // chr == '"' || chr == '@@':
  var_std__equal, 2, var_2466_7_chr, chr_34, 1, LOCAL(1),
  // chr == '"' || chr == '@@':
  var_std__or, 2, LOCAL(1), lambda_308, 1, LOCAL(2),
  // chr == '"' || chr == '@@':
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2468, 45),
  POS(2468, 45),
  POS(2468, 45)
};

static TAB_NUM t_lambda_308[] = {
  1, // locals
  0, // parameters
  // chr == '@@':
  var_std__equal, 2, var_2466_7_chr, chr_64, 1, LOCAL(1),
  // chr == '@@':
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(2468, 59),
  POS(2468, 59)
};

static TAB_NUM t_lambda_309[] = {
  2, // locals
  0, // parameters
  // idx-1)
  var_std__minus, 2, var_2466_3_idx, num_1, 1, LOCAL(1),
  // range(self s idx-1)
  var_range, 3, var_2460_0_self, var_2464_1_s, LOCAL(1), 1, LOCAL(2),
  // append &str range(self s idx-1)
  var_append, 2, var_2463_1_str, LOCAL(2), 1, var_2463_1_str,
  // to_integer);"
  var_to_integer, 1, var_2466_7_chr, 1, LOCAL(1),
  // "@@@(chr.to_integer);"
  var_std__string, 3, string_9, LOCAL(1), string_10, 1, LOCAL(2),
  // append &str "@@@(chr.to_integer);"
  var_append, 2, var_2463_1_str, LOCAL(2), 1, var_2463_1_str,
  // !s idx+1
  var_std__plus, 2, var_2466_3_idx, num_1, 1, var_2464_1_s,
  // next
  var_next, 0, TAIL_CALL,
  POS(2469, 36),
  POS(2469, 23),
  POS(2469, 11),
  POS(2470, 32),
  POS(2470, 23),
  POS(2470, 11),
  POS(2471, 11),
  POS(2472, 11)
};

static TAB_NUM t_lambda_310[] = {
  1, // locals
  0, // parameters
  // range(self s -1)
  var_range, 3, var_2460_0_self, var_2464_1_s, minus_num_1, 1, LOCAL(1),
  // append &str range(self s -1)
  var_append, 2, var_2463_1_str, LOCAL(1), 1, var_2463_1_str,
  // append &str "@quot;@nl;"
  var_append, 2, var_2463_1_str, string_11, 1, var_2463_1_str,
  // is_defined
  var_is_defined, 1, var_2461_0_indent, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_311, lambda_312, TAIL_CALL,
  POS(2475, 19),
  POS(2475, 7),
  POS(2476, 7),
  POS(2478, 16),
  POS(2477, 7)
};

static TAB_NUM t_lambda_311[] = {
  2, // locals
  0, // parameters
  // tabs_and_spaces(indent) str)
  var_tabs_and_spaces, 1, var_2461_0_indent, 1, LOCAL(1),
  // append(tabs_and_spaces(indent) str)
  var_append, 2, LOCAL(1), var_2463_1_str, 1, LOCAL(2),
  //  append(tabs_and_spaces(indent) str)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2479, 19),
  POS(2479, 12),
  POS(2479, 11)
};

static TAB_NUM t_lambda_312[] = {
  0, // locals
  0, // parameters
  //  str
  LET, 1, var_2463_1_str, TAIL_CALL,
  POS(2480, 11)
};

static TAB_NUM t_func_std__indented[] = {
  0, // locals
  2, // parameters
  var_2512_0_indent,
  var_2513_0_text,
  // $indented_text ""
  LET, 1, string_1, 1, var_2515_1_indented_text,
  // $new_indent undefined
  LET, 1, var_undefined, 1, var_2516_1_new_indent,
  // $i 1
  LET, 1, num_1, 1, var_2517_1_i,
  // $n length_of(text)
  var_length_of, 1, var_2513_0_text, 1, var_2518_1_n,
  // loop:
  var_loop, 1, lambda_18_loop, TAIL_CALL,
  POS(2515, 3),
  POS(2516, 3),
  POS(2517, 3),
  POS(2518, 3),
  POS(2519, 3)
};

static TAB_NUM t_lambda_18_loop[] = {
  2, // locals
  0, // parameters
  // !new_indent indent
  LET, 1, var_2512_0_indent, 1, var_2516_1_new_indent,
  // skip_indent !i !new_indent
  func_skip_indent, 0, 2, var_2517_1_i, var_2516_1_new_indent,
  // n:
  var_std__less, 2, var_2518_1_n, var_2517_1_i, 1, LOCAL(1),
  // n:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_313, lambda_321, TAIL_CALL,
  POS(2520, 5),
  POS(2521, 5),
  POS(2523, 12),
  POS(2523, 12),
  POS(2522, 5)
};

static TAB_NUM t_lambda_313[] = {
  2, // locals
  0, // parameters
  // text(i) == '@nl;':
  var_2513_0_text, 1, var_2517_1_i, 1, LOCAL(1),
  // text(i) == '@nl;':
  var_std__equal, 2, LOCAL(1), chr_10, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_314, lambda_315, TAIL_CALL,
  POS(2525, 11),
  POS(2525, 11),
  POS(2524, 9)
};

static TAB_NUM t_lambda_314[] = {
  0, // locals
  0, // parameters
  // push &indented_text '@nl;'
  var_push, 2, var_2515_1_indented_text, chr_10, 1, var_2515_1_indented_text,
  // !i i+1
  var_std__plus, 2, var_2517_1_i, num_1, 1, var_2517_1_i,
  // next
  var_next, 0, TAIL_CALL,
  POS(2526, 13),
  POS(2527, 13),
  POS(2528, 13)
};

static TAB_NUM t_lambda_315[] = {
  1, // locals
  0, // parameters
  // tabs_and_spaces(new_indent)
  var_tabs_and_spaces, 1, var_2516_1_new_indent, 1, LOCAL(1),
  // append &indented_text tabs_and_spaces(new_indent)
  var_append, 2, var_2515_1_indented_text, LOCAL(1), 1, var_2515_1_indented_text,
  // $s i
  LET, 1, var_2517_1_i, 1, var_2531_1_s,
  // loop
  var_loop, 2, lambda_316, var_next, TAIL_CALL,
  POS(2530, 35),
  POS(2530, 13),
  POS(2531, 13),
  POS(2532, 13)
};

static TAB_NUM t_lambda_316[] = {
  2, // locals
  0, // parameters
  // text(i) == '@nl;':
  var_2513_0_text, 1, var_2517_1_i, 1, LOCAL(1),
  // text(i) == '@nl;':
  var_std__equal, 2, LOCAL(1), chr_10, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_317, lambda_318, TAIL_CALL,
  POS(2535, 19),
  POS(2535, 19),
  POS(2534, 17)
};

static TAB_NUM t_lambda_317[] = {
  1, // locals
  0, // parameters
  // range(text s i)
  var_range, 3, var_2513_0_text, var_2531_1_s, var_2517_1_i, 1, LOCAL(1),
  // append &indented_text range(text s i)
  var_append, 2, var_2515_1_indented_text, LOCAL(1), 1, var_2515_1_indented_text,
  // !i i+1
  var_std__plus, 2, var_2517_1_i, num_1, 1, var_2517_1_i,
  // break
  var_break, 0, TAIL_CALL,
  POS(2536, 43),
  POS(2536, 21),
  POS(2537, 21),
  POS(2538, 21)
};

static TAB_NUM t_lambda_318[] = {
  1, // locals
  0, // parameters
  // i < n:
  var_std__less, 2, var_2517_1_i, var_2518_1_n, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_319, lambda_320, TAIL_CALL,
  POS(2541, 23),
  POS(2540, 21)
};

static TAB_NUM t_lambda_319[] = {
  0, // locals
  0, // parameters
  // !i i+1
  var_std__plus, 2, var_2517_1_i, num_1, 1, var_2517_1_i,
  // next
  var_next, 0, TAIL_CALL,
  POS(2542, 25),
  POS(2543, 25)
};

static TAB_NUM t_lambda_320[] = {
  1, // locals
  0, // parameters
  // range(text s -1)
  var_range, 3, var_2513_0_text, var_2531_1_s, minus_num_1, 1, LOCAL(1),
  // append indented_text range(text s -1)
  var_append, 2, var_2515_1_indented_text, LOCAL(1), TAIL_CALL,
  POS(2545, 46),
  POS(2545, 25)
};

static TAB_NUM t_lambda_321[] = {
  0, // locals
  0, // parameters
  //  indented_text
  LET, 1, var_2515_1_indented_text, TAIL_CALL,
  POS(2548, 9)
};

static TAB_NUM t_func_skip_indent[] = {
  2, // locals
  0, // parameters
  // n:
  var_std__less, 2, var_2518_1_n, var_2517_1_i, 1, LOCAL(1),
  // n:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_322, lambda_324, TAIL_CALL,
  POS(2552, 12),
  POS(2552, 12),
  POS(2551, 5)
};

static TAB_NUM t_lambda_322[] = {
  2, // locals
  0, // parameters
  // text(i) == '@ht;':
  var_2513_0_text, 1, var_2517_1_i, 1, LOCAL(1),
  // text(i) == '@ht;':
  var_std__equal, 2, LOCAL(1), chr_9, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_323, func_skip_spaces, TAIL_CALL,
  POS(2554, 11),
  POS(2554, 11),
  POS(2553, 9)
};

static TAB_NUM t_lambda_323[] = {
  0, // locals
  0, // parameters
  // !i i+1
  var_std__plus, 2, var_2517_1_i, num_1, 1, var_2517_1_i,
  // !new_indent new_indent+8
  var_std__plus, 2, var_2516_1_new_indent, num_8, 1, var_2516_1_new_indent,
  // skip_indent
  func_skip_indent, 0, TAIL_CALL,
  POS(2555, 13),
  POS(2556, 13),
  POS(2557, 13)
};

static TAB_NUM t_lambda_324[] = {
  0, // locals
  0, // parameters
  //  i new_indent
  LET, 2, var_2517_1_i, var_2516_1_new_indent, TAIL_CALL,
  POS(2559, 9)
};

static TAB_NUM t_func_skip_spaces[] = {
  3, // locals
  0, // parameters
  // n && text(i) == ' ':
  var_std__less, 2, var_2518_1_n, var_2517_1_i, 1, LOCAL(1),
  // n && text(i) == ' ':
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // n && text(i) == ' ':
  var_std__and, 2, LOCAL(2), lambda_325, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_326, lambda_327, TAIL_CALL,
  POS(2563, 12),
  POS(2563, 12),
  POS(2563, 12),
  POS(2562, 5)
};

static TAB_NUM t_lambda_325[] = {
  2, // locals
  0, // parameters
  // text(i) == ' ':
  var_2513_0_text, 1, var_2517_1_i, 1, LOCAL(1),
  // text(i) == ' ':
  var_std__equal, 2, LOCAL(1), chr_32, 1, LOCAL(2),
  // text(i) == ' ':
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2563, 17),
  POS(2563, 17),
  POS(2563, 17)
};

static TAB_NUM t_lambda_326[] = {
  0, // locals
  0, // parameters
  // !i i+1
  var_std__plus, 2, var_2517_1_i, num_1, 1, var_2517_1_i,
  // !new_indent new_indent+1
  var_std__plus, 2, var_2516_1_new_indent, num_1, 1, var_2516_1_new_indent,
  // skip_spaces
  func_skip_spaces, 0, TAIL_CALL,
  POS(2564, 9),
  POS(2565, 9),
  POS(2566, 9)
};

static TAB_NUM t_lambda_327[] = {
  0, // locals
  0, // parameters
  //  i new_indent
  LET, 2, var_2517_1_i, var_2516_1_new_indent, TAIL_CALL,
  POS(2567, 9)
};

static TAB_NUM t_func_std__format[] = {
  0, // locals
  -2, // parameters
  MANDATORY_PARAMETER, var_2601_0_template,
  REST_PARAMETER, var_2602_0_arguments,
  // $output ""
  LET, 1, string_1, 1, var_2604_1_output,
  // $arg_idx 1
  LET, 1, num_1, 1, var_2605_1_arg_idx,
  // $i 1
  LET, 1, num_1, 1, var_2606_1_i,
  // $n length_of(template)
  var_length_of, 1, var_2601_0_template, 1, var_2607_1_n,
  // loop:
  var_loop, 1, lambda_19_loop, TAIL_CALL,
  POS(2604, 3),
  POS(2605, 3),
  POS(2606, 3),
  POS(2607, 3),
  POS(2608, 3)
};

static TAB_NUM t_lambda_19_loop[] = {
  1, // locals
  0, // parameters
  // n
  var_std__less, 2, var_2607_1_n, var_2606_1_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_328, lambda_329, TAIL_CALL,
  POS(2610, 11),
  POS(2609, 5)
};

static TAB_NUM t_lambda_328[] = {
  0, // locals
  0, // parameters
  //  output
  LET, 1, var_2604_1_output, TAIL_CALL,
  POS(2611, 9)
};

static TAB_NUM t_lambda_329[] = {
  0, // locals
  0, // parameters
  // $chr template(i)
  var_2601_0_template, 1, var_2606_1_i, 1, var_2613_1_chr,
  // !i i+1
  var_std__plus, 2, var_2606_1_i, num_1, 1, var_2606_1_i,
  // case chr
  var_case, 6, var_2613_1_chr, chr_37, lambda_330, chr_92, lambda_356, lambda_359, TAIL_CALL,
  POS(2613, 9),
  POS(2614, 9),
  POS(2615, 9)
};

static TAB_NUM t_lambda_330[] = {
  1, // locals
  0, // parameters
  // n
  var_std__less, 2, var_2607_1_n, var_2606_1_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_331, lambda_332, TAIL_CALL,
  POS(2618, 19),
  POS(2617, 13)
};

static TAB_NUM t_lambda_331[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(2619, 17)
};

static TAB_NUM t_lambda_332[] = {
  2, // locals
  0, // parameters
  // template(i) $alignment !i
  var_2601_0_template, 1, var_2606_1_i, 1, LOCAL(1),
  // case template(i) $alignment !i
  var_case, 8, LOCAL(1), chr_108, lambda_l, chr_114, lambda_r, chr_99, lambda_c, lambda_333, 2, var_2621_18_alignment, var_2606_1_i,
  // $len_chr template(i)
  var_2601_0_template, 1, var_2606_1_i, 1, var_2626_1_len_chr,
  // len_chr < '0' || len_chr > '9'
  var_std__less, 2, var_2626_1_len_chr, chr_48, 1, LOCAL(1),
  // len_chr < '0' || len_chr > '9'
  var_std__or, 2, LOCAL(1), lambda_334, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_335, lambda_336, TAIL_CALL,
  POS(2621, 22),
  POS(2621, 17),
  POS(2626, 17),
  POS(2628, 19),
  POS(2628, 19),
  POS(2627, 17)
};

static TAB_NUM t_lambda_l[] = {
  1, // locals
  0, // parameters
  // i+1
  var_std__plus, 2, var_2606_1_i, num_1, 1, LOCAL(1),
  //  LEFT i+1
  LET, 2, uni_LEFT, LOCAL(1), TAIL_CALL,
  POS(2622, 31),
  POS(2622, 25)
};

static TAB_NUM t_lambda_r[] = {
  1, // locals
  0, // parameters
  // i+1
  var_std__plus, 2, var_2606_1_i, num_1, 1, LOCAL(1),
  //  RIGHT i+1
  LET, 2, uni_RIGHT, LOCAL(1), TAIL_CALL,
  POS(2623, 32),
  POS(2623, 25)
};

static TAB_NUM t_lambda_c[] = {
  1, // locals
  0, // parameters
  // i+1
  var_std__plus, 2, var_2606_1_i, num_1, 1, LOCAL(1),
  //  CENTER i+1
  LET, 2, uni_CENTER, LOCAL(1), TAIL_CALL,
  POS(2624, 33),
  POS(2624, 25)
};

static TAB_NUM t_lambda_333[] = {
  0, // locals
  0, // parameters
  //  RIGHT i
  LET, 2, uni_RIGHT, var_2606_1_i, TAIL_CALL,
  POS(2625, 21)
};

static TAB_NUM t_lambda_334[] = {
  1, // locals
  0, // parameters
  // 9'
  var_std__less, 2, chr_57, var_2626_1_len_chr, 1, LOCAL(1),
  // len_chr > '9'
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(2628, 47),
  POS(2628, 36)
};

static TAB_NUM t_lambda_335[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(2629, 21)
};

static TAB_NUM t_lambda_336[] = {
  0, // locals
  0, // parameters
  // $width len_chr-'0'
  var_std__minus, 2, var_2626_1_len_chr, chr_48, 1, var_2631_1_width,
  // loop
  var_loop, 2, lambda_337, lambda_341, TAIL_CALL,
  POS(2631, 21),
  POS(2632, 21)
};

static TAB_NUM t_lambda_337[] = {
  1, // locals
  0, // parameters
  // !i i+1
  var_std__plus, 2, var_2606_1_i, num_1, 1, var_2606_1_i,
  // n
  var_std__less, 2, var_2607_1_n, var_2606_1_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), var_break, lambda_338, TAIL_CALL,
  POS(2634, 25),
  POS(2636, 31),
  POS(2635, 25)
};

static TAB_NUM t_lambda_338[] = {
  2, // locals
  0, // parameters
  // $fmt_chr template(i)
  var_2601_0_template, 1, var_2606_1_i, 1, var_2639_1_fmt_chr,
  // fmt_chr < '0' || fmt_chr > '9'
  var_std__less, 2, var_2639_1_fmt_chr, chr_48, 1, LOCAL(1),
  // fmt_chr < '0' || fmt_chr > '9'
  var_std__or, 2, LOCAL(1), lambda_339, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), var_break, lambda_340, TAIL_CALL,
  POS(2639, 29),
  POS(2641, 31),
  POS(2641, 31),
  POS(2640, 29)
};

static TAB_NUM t_lambda_339[] = {
  1, // locals
  0, // parameters
  // 9'
  var_std__less, 2, chr_57, var_2639_1_fmt_chr, 1, LOCAL(1),
  // fmt_chr > '9'
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(2641, 59),
  POS(2641, 48)
};

static TAB_NUM t_lambda_340[] = {
  2, // locals
  0, // parameters
  // 10*width+(fmt_chr-'0')
  var_std__times, 2, num_10, var_2631_1_width, 1, LOCAL(1),
  // fmt_chr-'0')
  var_std__minus, 2, var_2639_1_fmt_chr, chr_48, 1, LOCAL(2),
  // !width 10*width+(fmt_chr-'0')
  var_std__plus, 2, LOCAL(1), LOCAL(2), 1, var_2631_1_width,
  // next
  var_next, 0, TAIL_CALL,
  POS(2644, 40),
  POS(2644, 50),
  POS(2644, 33),
  POS(2645, 33)
};

static TAB_NUM t_lambda_341[] = {
  1, // locals
  0, // parameters
  // n:
  var_std__less, 2, var_2607_1_n, var_2606_1_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_342, lambda_343, TAIL_CALL,
  POS(2648, 31),
  POS(2647, 25)
};

static TAB_NUM t_lambda_342[] = {
  0, // locals
  0, // parameters
  // add_argument width
  func_add_argument, 1, var_2631_1_width, TAIL_CALL,
  POS(2649, 29)
};

static TAB_NUM t_lambda_343[] = {
  2, // locals
  0, // parameters
  // template(i) == '.':
  var_2601_0_template, 1, var_2606_1_i, 1, LOCAL(1),
  // template(i) == '.':
  var_std__equal, 2, LOCAL(1), chr_46, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_344, lambda_355, TAIL_CALL,
  POS(2652, 31),
  POS(2652, 31),
  POS(2651, 29)
};

static TAB_NUM t_lambda_344[] = {
  1, // locals
  0, // parameters
  // !i i+1
  var_std__plus, 2, var_2606_1_i, num_1, 1, var_2606_1_i,
  // n
  var_std__less, 2, var_2607_1_n, var_2606_1_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_345, lambda_346, TAIL_CALL,
  POS(2653, 33),
  POS(2655, 39),
  POS(2654, 33)
};

static TAB_NUM t_lambda_345[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(2656, 37)
};

static TAB_NUM t_lambda_346[] = {
  2, // locals
  0, // parameters
  // $dw_chr template(i)
  var_2601_0_template, 1, var_2606_1_i, 1, var_2658_1_dw_chr,
  // dw_chr < '0' || dw_chr > '9'
  var_std__less, 2, var_2658_1_dw_chr, chr_48, 1, LOCAL(1),
  // dw_chr < '0' || dw_chr > '9'
  var_std__or, 2, LOCAL(1), lambda_347, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_348, lambda_349, TAIL_CALL,
  POS(2658, 37),
  POS(2660, 39),
  POS(2660, 39),
  POS(2659, 37)
};

static TAB_NUM t_lambda_347[] = {
  1, // locals
  0, // parameters
  // 9'
  var_std__less, 2, chr_57, var_2658_1_dw_chr, 1, LOCAL(1),
  // dw_chr > '9'
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(2660, 65),
  POS(2660, 55)
};

static TAB_NUM t_lambda_348[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(2661, 41)
};

static TAB_NUM t_lambda_349[] = {
  0, // locals
  0, // parameters
  // $dw dw_chr-'0'
  var_std__minus, 2, var_2658_1_dw_chr, chr_48, 1, var_2663_1_dw,
  // loop
  var_loop, 2, lambda_350, lambda_354, TAIL_CALL,
  POS(2663, 41),
  POS(2664, 41)
};

static TAB_NUM t_lambda_350[] = {
  1, // locals
  0, // parameters
  // !i i+1
  var_std__plus, 2, var_2606_1_i, num_1, 1, var_2606_1_i,
  // n
  var_std__less, 2, var_2607_1_n, var_2606_1_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), var_break, lambda_351, TAIL_CALL,
  POS(2666, 45),
  POS(2668, 51),
  POS(2667, 45)
};

static TAB_NUM t_lambda_351[] = {
  2, // locals
  0, // parameters
  // $fmt_chr template(i)
  var_2601_0_template, 1, var_2606_1_i, 1, var_2671_1_fmt_chr,
  // fmt_chr < '0' || fmt_chr > '9'
  var_std__less, 2, var_2671_1_fmt_chr, chr_48, 1, LOCAL(1),
  // fmt_chr < '0' || fmt_chr > '9'
  var_std__or, 2, LOCAL(1), lambda_352, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), var_break, lambda_353, TAIL_CALL,
  POS(2671, 49),
  POS(2673, 51),
  POS(2673, 51),
  POS(2672, 49)
};

static TAB_NUM t_lambda_352[] = {
  1, // locals
  0, // parameters
  // 9'
  var_std__less, 2, chr_57, var_2671_1_fmt_chr, 1, LOCAL(1),
  // fmt_chr > '9'
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(2673, 79),
  POS(2673, 68)
};

static TAB_NUM t_lambda_353[] = {
  2, // locals
  0, // parameters
  // 10*dw+(fmt_chr-'0')
  var_std__times, 2, num_10, var_2663_1_dw, 1, LOCAL(1),
  // fmt_chr-'0')
  var_std__minus, 2, var_2671_1_fmt_chr, chr_48, 1, LOCAL(2),
  // !dw 10*dw+(fmt_chr-'0')
  var_std__plus, 2, LOCAL(1), LOCAL(2), 1, var_2663_1_dw,
  // next
  var_next, 0, TAIL_CALL,
  POS(2676, 57),
  POS(2676, 64),
  POS(2676, 53),
  POS(2677, 53)
};

static TAB_NUM t_lambda_354[] = {
  0, // locals
  0, // parameters
  // add_argument alignment width dw
  func_add_argument, 3, var_2621_18_alignment, var_2631_1_width, var_2663_1_dw, TAIL_CALL,
  POS(2679, 45)
};

static TAB_NUM t_lambda_355[] = {
  0, // locals
  0, // parameters
  // add_argument alignment width
  func_add_argument, 2, var_2621_18_alignment, var_2631_1_width, TAIL_CALL,
  POS(2681, 33)
};

static TAB_NUM t_lambda_356[] = {
  1, // locals
  0, // parameters
  // n
  var_std__less, 2, var_2607_1_n, var_2606_1_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_357, lambda_358, TAIL_CALL,
  POS(2684, 19),
  POS(2683, 13)
};

static TAB_NUM t_lambda_357[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(2685, 17)
};

static TAB_NUM t_lambda_358[] = {
  1, // locals
  0, // parameters
  // template(i)
  var_2601_0_template, 1, var_2606_1_i, 1, LOCAL(1),
  // push &output template(i)
  var_push, 2, var_2604_1_output, LOCAL(1), 1, var_2604_1_output,
  // !i i+1
  var_std__plus, 2, var_2606_1_i, num_1, 1, var_2606_1_i,
  // next
  var_next, 0, TAIL_CALL,
  POS(2687, 30),
  POS(2687, 17),
  POS(2688, 17),
  POS(2689, 17)
};

static TAB_NUM t_lambda_359[] = {
  0, // locals
  0, // parameters
  // push &output chr
  var_push, 2, var_2604_1_output, var_2613_1_chr, 1, var_2604_1_output,
  // next
  var_next, 0, TAIL_CALL,
  POS(2691, 13),
  POS(2692, 13)
};

static TAB_NUM t_func_add_argument[] = {
  2, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_2696_0_alignment,
  MANDATORY_PARAMETER, var_2697_0_width,
  var_undefined, var_2698_0_decimal_width,
  // $argument arguments(arg_idx)
  var_2602_0_arguments, 1, var_2605_1_arg_idx, 1, var_2700_1_argument,
  // !arg_idx arg_idx+1
  var_std__plus, 2, var_2605_1_arg_idx, num_1, 1, var_2605_1_arg_idx,
  // is_defined:
  var_is_defined, 1, var_2698_0_decimal_width, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_decimal_width_is_defined, lambda_362, 1, LOCAL(2),
  // append &output
  var_append, 2, var_2604_1_output, LOCAL(2), 1, var_2604_1_output,
  // next
  var_next, 0, TAIL_CALL,
  POS(2700, 5),
  POS(2701, 5),
  POS(2704, 23),
  POS(2703, 7),
  POS(2702, 5),
  POS(2720, 5)
};

static TAB_NUM t_lambda_decimal_width_is_defined[] = {
  1, // locals
  0, // parameters
  // real_to_string &argument
  func_real_to_string, 1, var_2700_1_argument, 1, var_2700_1_argument,
  // is_undefined
  var_is_undefined, 1, var_2700_1_argument, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_360, lambda_361, TAIL_CALL,
  POS(2705, 11),
  POS(2707, 22),
  POS(2706, 11)
};

static TAB_NUM t_lambda_360[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(2708, 15)
};

static TAB_NUM t_lambda_361[] = {
  5, // locals
  0, // parameters
  // $value argument .truncate_from. '.'
  var_truncate_from, 2, var_2700_1_argument, chr_46, 1, LOCAL(4),
  // $decimals argument .behind. '.'
  var_behind, 2, var_2700_1_argument, chr_46, 1, LOCAL(5),
  // pad_left(value width)
  var_pad_left, 2, LOCAL(4), var_2697_0_width, 1, LOCAL(1),
  // pad_right(decimals decimal_width "0") decimal_width)
  var_pad_right, 3, LOCAL(5), var_2698_0_decimal_width, string_12, 1, LOCAL(2),
  // truncate(pad_right(decimals decimal_width "0") decimal_width)
  var_truncate, 2, LOCAL(2), var_2698_0_decimal_width, 1, LOCAL(3),
  // string
  var_string, 3, LOCAL(1), string_13, LOCAL(3), TAIL_CALL,
  POS(2710, 15),
  POS(2711, 15),
  POS(2713, 17),
  POS(2715, 26),
  POS(2715, 17),
  POS(2712, 15)
};

static TAB_NUM t_lambda_362[] = {
  0, // locals
  0, // parameters
  // case alignment
  var_case, 5, var_2696_0_alignment, uni_LEFT, lambda_LEFT, uni_RIGHT, lambda_RIGHT, TAIL_CALL,
  POS(2717, 11)
};

static TAB_NUM t_lambda_LEFT[] = {
  1, // locals
  0, // parameters
  // pad_right(argument width)
  var_pad_right, 2, var_2700_1_argument, var_2697_0_width, 1, LOCAL(1),
  //  pad_right(argument width)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(2718, 21),
  POS(2718, 20)
};

static TAB_NUM t_lambda_RIGHT[] = {
  1, // locals
  0, // parameters
  // pad_left(argument width)
  var_pad_left, 2, var_2700_1_argument, var_2697_0_width, 1, LOCAL(1),
  //  pad_left(argument width)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(2719, 22),
  POS(2719, 21)
};

static TAB_NUM t_func_real_to_string[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 2722_18_num
  // $str num.to_string
  var_to_string, 1, LOCAL(1), 1, var_2723_1_str,
  // $n length_of(str)
  var_length_of, 1, var_2723_1_str, 1, var_2724_1_n,
  // $i n
  LET, 1, var_2724_1_n, 1, var_2725_1_i,
  // loop:
  var_loop, 1, lambda_20_loop, TAIL_CALL,
  POS(2723, 3),
  POS(2724, 3),
  POS(2725, 3),
  POS(2726, 3)
};

static TAB_NUM t_lambda_20_loop[] = {
  1, // locals
  0, // parameters
  // i == 0
  var_std__equal, 2, var_2725_1_i, num_0, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_363, lambda_364, TAIL_CALL,
  POS(2728, 7),
  POS(2727, 5)
};

static TAB_NUM t_lambda_363[] = {
  0, // locals
  0, // parameters
  //  str
  LET, 1, var_2723_1_str, TAIL_CALL,
  POS(2729, 9)
};

static TAB_NUM t_lambda_364[] = {
  2, // locals
  0, // parameters
  // str(i) == 'e'
  var_2723_1_str, 1, var_2725_1_i, 1, LOCAL(1),
  // str(i) == 'e'
  var_std__equal, 2, LOCAL(1), chr_101, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), func_2_handle_exponent, lambda_365, TAIL_CALL,
  POS(2732, 11),
  POS(2732, 11),
  POS(2731, 9)
};

static TAB_NUM t_lambda_365[] = {
  0, // locals
  0, // parameters
  // !i i-1
  var_std__minus, 2, var_2725_1_i, num_1, 1, var_2725_1_i,
  // next
  var_next, 0, TAIL_CALL,
  POS(2735, 13),
  POS(2736, 13)
};

static TAB_NUM t_func_2_handle_exponent[] = {
  3, // locals
  0, // parameters
  // i >= n || str(2) != '.'
  var_std__less, 2, var_2725_1_i, var_2724_1_n, 1, LOCAL(1),
  // i >= n || str(2) != '.'
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // i >= n || str(2) != '.'
  var_std__or, 2, LOCAL(2), lambda_366, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_367, lambda_368, TAIL_CALL,
  POS(2740, 7),
  POS(2740, 7),
  POS(2740, 7),
  POS(2739, 5)
};

static TAB_NUM t_lambda_366[] = {
  3, // locals
  0, // parameters
  // str(2) != '.'
  var_2723_1_str, 1, num_2, 1, LOCAL(1),
  // str(2) != '.'
  var_std__equal, 2, LOCAL(1), chr_46, 1, LOCAL(2),
  // str(2) != '.'
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // str(2) != '.'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(2740, 17),
  POS(2740, 17),
  POS(2740, 17),
  POS(2740, 17)
};

static TAB_NUM t_lambda_367[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(2741, 9)
};

static TAB_NUM t_lambda_368[] = {
  3, // locals
  0, // parameters
  // i+2 n).to_integer
  var_std__plus, 2, var_2725_1_i, num_2, 1, LOCAL(1),
  // range(str i+2 n).to_integer
  var_range, 3, var_2723_1_str, LOCAL(1), var_2724_1_n, 1, LOCAL(2),
  // $exp range(str i+2 n).to_integer
  var_to_integer, 1, LOCAL(2), 1, var_2743_1_exp,
  // i-1) str(1))
  var_std__minus, 2, var_2725_1_i, num_1, 1, LOCAL(1),
  // range(str 3 i-1) str(1))
  var_range, 3, var_2723_1_str, num_3, LOCAL(1), 1, LOCAL(2),
  // str(1))
  var_2723_1_str, 1, num_1, 1, LOCAL(3),
  // $man put(range(str 3 i-1) str(1))
  var_put, 2, LOCAL(2), LOCAL(3), 1, var_2744_1_man,
  // is_undefined
  var_is_undefined, 1, var_2743_1_exp, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_369, lambda_370, TAIL_CALL,
  POS(2743, 24),
  POS(2743, 14),
  POS(2743, 9),
  POS(2744, 30),
  POS(2744, 18),
  POS(2744, 35),
  POS(2744, 9),
  POS(2746, 15),
  POS(2745, 9)
};

static TAB_NUM t_lambda_369[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(2747, 13)
};

static TAB_NUM t_lambda_370[] = {
  2, // locals
  0, // parameters
  // exp-1)
  var_std__minus, 2, var_2743_1_exp, num_1, 1, LOCAL(1),
  // $zeros dup("0" exp-1)
  var_dup, 2, string_12, LOCAL(1), 1, var_2749_1_zeros,
  // i+1)
  var_std__plus, 2, var_2725_1_i, num_1, 1, LOCAL(1),
  // str(i+1)
  var_2723_1_str, 1, LOCAL(1), 1, LOCAL(2),
  // case str(i+1)
  var_case, 6, LOCAL(2), chr_43, lambda_371, chr_45, lambda_372, lambda_373, TAIL_CALL,
  POS(2749, 28),
  POS(2749, 13),
  POS(2750, 22),
  POS(2750, 18),
  POS(2750, 13)
};

static TAB_NUM t_lambda_371[] = {
  1, // locals
  0, // parameters
  // append(man zeros)
  var_append, 2, var_2744_1_man, var_2749_1_zeros, 1, LOCAL(1),
  // -> append(man zeros)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(2752, 20),
  POS(2752, 17)
};

static TAB_NUM t_lambda_372[] = {
  2, // locals
  0, // parameters
  // append(zeros man))
  var_append, 2, var_2749_1_zeros, var_2744_1_man, 1, LOCAL(1),
  // append("0." append(zeros man))
  var_append, 2, string_14, LOCAL(1), 1, LOCAL(2),
  // -> append("0." append(zeros man))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(2754, 32),
  POS(2754, 20),
  POS(2754, 17)
};

static TAB_NUM t_lambda_373[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(2755, 17)
};

static int value_range_1353_1_arguments[] = {
  -chr_48, -chr_49
};

static int value_range_1364_1_arguments[] = {
  -chr_48, -chr_55
};

static int value_range_1375_1_arguments[] = {
  -chr_48, -chr_57
};

static int value_range_1378_1_arguments[] = {
  -chr_97, -chr_102
};

static int value_range_1381_1_arguments[] = {
  -chr_65, -chr_70
};

static int sequence_1460_1_arguments[] = {
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
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__parse_integer}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_maybe_negated}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_102}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_103}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_partial_match}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_104}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_105}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_exhausted}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_106}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_107}},
  {FLT_CHARACTER, 0, {.value = 45}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_108}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_109}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_110}},
  {FLT_STRING_8, 2, {.str_8 = "0b"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_111}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_112}},
  {FLT_CHARACTER, 0, {.value = 48}},
  {FLT_CHARACTER, 0, {.value = 49}},
  {FLT_VALUE_RANGE, 2, {.arguments = value_range_1353_1_arguments}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_113}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_114}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_115}},
  {FLT_STRING_8, 2, {.str_8 = "0o"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_116}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_117}},
  {FLT_CHARACTER, 0, {.value = 55}},
  {FLT_VALUE_RANGE, 2, {.arguments = value_range_1364_1_arguments}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_118}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_119}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_120}},
  {FLT_STRING_8, 2, {.str_8 = "0x"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_121}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_122}},
  {FLT_CHARACTER, 0, {.value = 57}},
  {FLT_VALUE_RANGE, 2, {.arguments = value_range_1375_1_arguments}},
  {FLT_CHARACTER, 0, {.value = 97}},
  {FLT_CHARACTER, 0, {.value = 102}},
  {FLT_VALUE_RANGE, 2, {.arguments = value_range_1378_1_arguments}},
  {FLT_CHARACTER, 0, {.value = 65}},
  {FLT_CHARACTER, 0, {.value = 70}},
  {FLT_VALUE_RANGE, 2, {.arguments = value_range_1381_1_arguments}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_123}},
  {FLT_POSITIVE_INT64, 0, {.value = 4}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_a__f}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_A__F}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_124}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_125}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_126}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_127}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_128}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_129}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__parse_number}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_130}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_131}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_132}},
  {FLT_CHARACTER, 0, {.value = 43}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_133}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_134}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_135}},
  {FLT_CHARACTER, 0, {.value = 98}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_b}},
  {FLT_CHARACTER, 0, {.value = 111}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_o}},
  {FLT_CHARACTER, 0, {.value = 120}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_x}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_skip_one_ore_more_digits}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_136}},
  {FLT_CHARACTER, 0, {.value = 101}},
  {FLT_CHARACTER, 0, {.value = 69}},
  {FLT_SEQUENCE, 2, {.arguments = sequence_1460_1_arguments}},
  {FLT_CHARACTER, 0, {.value = 46}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_137}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2_skip_one_ore_more_digits}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_138}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_skip_one_ore_more_digits}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_139}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_140}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_141}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_142}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_143}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_8_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_144}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_145}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_handle_exponent}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_146}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_147}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_148}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_149}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_return_integer}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_return_real}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_binary}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_150}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_151}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_152}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_153}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_154}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_9_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_155}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_156}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_157}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_158}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_159}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_parse_octal}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_160}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_161}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_162}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_163}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_164}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_10_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_165}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_166}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_167}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_168}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_169}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__parse_hex}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_170}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_171}},
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
  {FLT_FUNCTION, 0, {.tfunc = t_func_handle_more_digits}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_11_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_183}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_184}},
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
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__string___to_integer}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_196}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_197}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__string___to_number}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_198}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_199}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__map_characters}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_200}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_201}},
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
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__string___to_upper_case}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__string___to_lower_case}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__string___to_title_case}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_212}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_213}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_214}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_215}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__string___to_sentence_case}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_216}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_217}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_218}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_219}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__delete_all}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_delete_all}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_220}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_221}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_222}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_223}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_224}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__replace_all}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_replace_all}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_225}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_226}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_227}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_228}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_replacement_is_a_string}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_229}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_230}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__replace_first}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_replace_first}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_231}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_232}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_233}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_234}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_235}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_236}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__count_occurrences}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_search_next}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_237}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_238}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_n_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_239}},
  {FLT_POSITIVE_INT64, 0, {.value = 300}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__split_into_lines}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_12_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_240}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_241}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_242}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_243}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_244}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_245}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__split_into_indented_lines}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_split}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_246}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_247}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_248}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_249}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_250}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_251}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_252}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_ls_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_253}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_254}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_255}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_256}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_13_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_257}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_258}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_create_line}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_14_loop}},
  {FLT_CHARACTER, 0, {.value = 9}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_259}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_260}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_261}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_262}},
  {FLT_STRING_8, 1, {.str_8 = "\012"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_263}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_264}},
  {FLT_POSITIVE_INT64, 0, {.value = 20}},
  {FLT_POSITIVE_INT64, 0, {.value = 9999}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_indent_of}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_265}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_266}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__split_into_groups}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_15_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_267}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_indent_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_268}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_269}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_2_split}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_270}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_271}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_272}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_273}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_274}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_275}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_276}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_277}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_278}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_279}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_280}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_gs_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_16_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_281}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_282}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_283}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_284}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_285}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_286}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_287}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_288}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_add_groups}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_289}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_290}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_291}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_292}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_reduce_minimum_indent_and_next}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_293}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_294}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_start_new_fragment_and_next}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__wrap_words}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_17_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_295}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_296}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_297}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_298}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_299}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_300}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_301}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_302}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_303}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_b_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_304}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__string___serialize}},
  {FLT_STRING_8, 1, {.str_8 = "\042"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_305}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_306}},
  {FLT_CHARACTER, 0, {.value = 126}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_307}},
  {FLT_CHARACTER, 0, {.value = 34}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_308}},
  {FLT_CHARACTER, 0, {.value = 64}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_309}},
  {FLT_STRING_8, 1, {.str_8 = "@"}},
  {FLT_STRING_8, 1, {.str_8 = ";"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_310}},
  {FLT_STRING_8, 2, {.str_8 = "\042\012"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_311}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_312}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__indented}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_18_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_313}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_314}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_315}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_316}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_317}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_318}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_319}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_320}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_321}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_skip_indent}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_322}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_323}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_324}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_skip_spaces}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_325}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_326}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_327}},
  {FLT_UNIQUE, 0, {.str_8 = "LEFT"}},
  {FLT_UNIQUE, 0, {.str_8 = "RIGHT"}},
  {FLT_UNIQUE, 0, {.str_8 = "CENTER"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__format}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_19_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_328}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_329}},
  {FLT_CHARACTER, 0, {.value = 37}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_330}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_331}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_332}},
  {FLT_CHARACTER, 0, {.value = 108}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_l}},
  {FLT_CHARACTER, 0, {.value = 114}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_r}},
  {FLT_CHARACTER, 0, {.value = 99}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_c}},
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
  {FLT_CHARACTER, 0, {.value = 92}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_356}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_357}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_358}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_359}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_add_argument}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_decimal_width_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_360}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_361}},
  {FLT_STRING_8, 1, {.str_8 = "0"}},
  {FLT_STRING_8, 1, {.str_8 = "."}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_362}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_LEFT}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_RIGHT}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_real_to_string}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_20_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_363}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_364}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_365}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_2_handle_exponent}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_366}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_367}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_368}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_369}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_370}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_371}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_372}},
  {FLT_STRING_8, 2, {.str_8 = "0."}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_373}}
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
    "1078_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1079_0_separator\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_list\000", NULL,
    {.position = POS(1083, 8)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1085_1_items\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1087_8_pos\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1087_13_len\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "push\000", NULL,
    {.position = POS(1090, 13)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "join\000std", NULL,
    {.const_idx = -func_std__join}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1119_0_separator\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "trim\000std", NULL,
    {.const_idx = -func_std__trim}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1148_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1149_0_test\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_a_whitespace_character\000", NULL,
    {.position = POS(1149, 12)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1151_1_s\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1152_1_e\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "trim_left\000std", NULL,
    {.const_idx = -func_std__trim_left}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1188_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1189_0_test\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1191_1_s\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1192_1_e\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "trim_right\000std", NULL,
    {.const_idx = -func_std__trim_right}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1222_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1223_0_test\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1225_1_e\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "normalize\000std", NULL,
    {.const_idx = -func_std__normalize}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1256_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1258_1_buf\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1259_1_e\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1260_1_i\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_not_empty\000", NULL,
    {.position = POS(1274, 23)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "update_if\000", NULL,
    {.position = POS(1274, 9)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1275_1_s\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "parse_integer\000std", NULL,
    {.const_idx = -func_std__parse_integer}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1318_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1339_1_negate\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1345_1_value\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1326_17_idx\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1338_1_orig\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1350_3_idx\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1350_7_chr\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "value_range\000std", NULL,
    {.position = POS(1353, 14)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "for_each\000", NULL,
    {.position = POS(1349, 7)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1362_3_idx\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1362_7_chr\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1373_3_idx\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1373_7_chr\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1389_3_idx\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1389_7_chr\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "cond\000", NULL,
    {.position = POS(1346, 3)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "parse_number\000std", NULL,
    {.const_idx = -func_std__parse_number}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1425_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1427_1_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1428_1_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1433_1_sign_chr\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "or\000std", NULL,
    {.position = POS(1434, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "parse_hex\000", NULL,
    {.position = POS(1440, 18)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "sequence\000std", NULL,
    {.position = POS(1460, 14)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1463_28_cont\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1468_1_digit\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1479_1_next_digit\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1491_1_exp_sign_chr\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "integer\000", NULL,
    {.position = POS(1495, 41)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "real\000", NULL,
    {.position = POS(1497, 38)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1499_16_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1499_20_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1500_1_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1504_1_digit\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1509_1_value\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1516_1_next_digit\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1523_15_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1523_19_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1524_1_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1528_1_digit\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1533_1_value\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1540_1_next_digit\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "parse_hex\000std", NULL,
    {.const_idx = -func_std__parse_hex}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1575_0_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1576_0_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1578_1_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1582_1_digit\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1592_22_value\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1599_1_next_digit\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "to_integer\000", NULL,
    {.position = POS(1612, 20)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1648_21_value\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "parse_integer\000", NULL,
    {.position = POS(1648, 3)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "to_number\000", NULL,
    {.position = POS(1654, 20)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1690_20_value\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "parse_number\000", NULL,
    {.position = POS(1690, 3)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "map_characters\000std", NULL,
    {.const_idx = -func_std__map_characters}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1717_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1718_0_function\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "parameter_count_of\000", NULL,
    {.position = POS(1722, 7)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1724_3_s\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1724_5_e\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1720_1_map\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1737_3_s\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1737_5_e\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "to_upper_case\000", NULL,
    {.position = POS(1752, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "map_characters\000", NULL,
    {.position = POS(1772, 3)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "to_lower_case\000", NULL,
    {.position = POS(1774, 20)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "to_title_case\000", NULL,
    {.position = POS(1796, 20)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1814_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1816_22_idx\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1816_26_chr\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_a_letter_character\000", NULL,
    {.position = POS(1818, 30)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "to_sentence_case\000", NULL,
    {.position = POS(1822, 20)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1840_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1842_22_idx\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1842_26_chr\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "delete_all\000std", NULL,
    {.const_idx = -func_std__delete_all}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1870_0_expressions\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1872_14_txt\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1886_1_new_text\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1879_1_len\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if_not\000", NULL,
    {.position = POS(1880, 13)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "replace_all\000std", NULL,
    {.const_idx = -func_std__replace_all}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1911_0_args\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1913_15_txt\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1934_1_new_text\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1920_17_replacement\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1921_1_len\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "replace_first\000std", NULL,
    {.const_idx = -func_std__replace_first}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1959_0_args\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1961_17_txt\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1981_1_new_text\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1968_17_replacement\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "1969_1_len\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "update_if_not\000", NULL,
    {.position = POS(1974, 17)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "count_occurrences\000std", NULL,
    {.const_idx = -func_std__count_occurrences}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2004_0_expr\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2006_15_txt\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2006_19_count\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2011_1_n\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "split_into_lines\000std", NULL,
    {.const_idx = -func_std__split_into_lines}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2062_25_text\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2063_1_lines\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2064_1_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2065_1_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2066_1_s\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "split_into_indented_lines\000std", NULL,
    {.const_idx = -func_std__split_into_indented_lines}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2145_0_text\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2150_9_s\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2150_11_e\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2156_1_lines\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2157_1_ls\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2163_3_i\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "from_to\000", NULL,
    {.position = POS(2162, 9)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2184_15_s\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2184_17_e\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2185_1_indent\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2199_1_line_text\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "tuple\000", NULL,
    {.position = POS(2203, 20)}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "subgroups_of\000std", NULL,
    {.has_a_setter = true}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2210_13_line\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "first\000", NULL,
    {.position = POS(2213, 8)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "split_into_groups\000std", NULL,
    {.const_idx = -func_std__split_into_groups}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2267_0_lines\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2269_1_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2270_1_fv\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2274_1_indent\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2283_9_s\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2283_11_e\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2283_13_indent\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2283_20_gs\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2289_1_groups\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2290_1_minimum_indent\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2291_1_ge\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2293_3_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2294_1_current_indent\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2319_1_current_indent\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2332_14_l\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "subgroups_of\000", NULL,
    {.position = POS(2342, 41)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2344_34_current_indent\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "wrap_words\000std", NULL,
    {.const_idx = -func_std__wrap_words}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2384_0_text\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2385_0_width\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2387_1_wrapped_text\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2388_1_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2389_1_s\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2390_1_l\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2391_1_b\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2392_1_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2398_1_chr\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "serialize\000", NULL,
    {.position = POS(2442, 20)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2460_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2461_0_indent\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2463_1_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2464_1_s\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2466_3_idx\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2466_7_chr\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "tabs_and_spaces\000", NULL,
    {.position = POS(2479, 19)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "indented\000std", NULL,
    {.const_idx = -func_std__indented}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2512_0_indent\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2513_0_text\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2515_1_indented_text\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2516_1_new_indent\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2517_1_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2518_1_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2531_1_s\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "format\000std", NULL,
    {.const_idx = -func_std__format}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2601_0_template\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2602_0_arguments\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2604_1_output\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2605_1_arg_idx\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2606_1_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2607_1_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2613_1_chr\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2621_18_alignment\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2626_1_len_chr\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2631_1_width\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2639_1_fmt_chr\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2658_1_dw_chr\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2663_1_dw\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2671_1_fmt_chr\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2696_0_alignment\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2697_0_width\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2698_0_decimal_width\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2700_1_argument\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_undefined\000", NULL,
    {.position = POS(2707, 22)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "pad_left\000", NULL,
    {.position = POS(2713, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "pad_right\000", NULL,
    {.position = POS(2715, 26)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "truncate\000", NULL,
    {.position = POS(2715, 17)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2723_1_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2724_1_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2725_1_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2743_1_exp\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2744_1_man\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "2749_1_zeros\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "empty_collection_of\000", NULL,
    {.position = POS(2757, 20)}
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
  565, // number of constants
  359, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  constants_table,
  variables_table,
};
