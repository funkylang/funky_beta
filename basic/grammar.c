#include <stddef.h>
#include <stdint.h>

#include "runtime/common.h"
#include "runtime/builtins.h"
#include "runtime/fko.h"
#include "runtime/memory.h"

enum {
  func_std_types__FUNKY_IDENTIFIER___match = -1,
  num_1 = -2,
  num_0 = -3,
  lambda_1 = -4,
  chr_97 = -5,
  chr_122 = -6,
  value_range_101_10 = -7,
  chr_65 = -8,
  chr_90 = -9,
  value_range_101_22 = -10,
  sequence_101_10 = -11,
  func_within_word = -12,
  lambda_2 = -13,
  lambda_3 = -14,
  lambda_4 = -15,
  lambda_5 = -16,
  chr_48 = -17,
  chr_57 = -18,
  value_range_114_36 = -19,
  sequence_114_12 = -20,
  chr_95 = -21,
  lambda_6 = -22,
  lambda_7 = -23,
  lambda_8 = -24,
  func_word_start = -25,
  lambda_9 = -26,
  lambda_10 = -27,
  lambda_11 = -28,
  lambda_12 = -29,
  func_fail = -30,
  lambda_13 = -31,
  lambda_14 = -32,
  func_std_types__FUNKY_IDENTIFIER___match_back = -33,
  func_word_end = -34,
  lambda_15 = -35,
  lambda_16 = -36,
  lambda_17 = -37,
  func_2_within_word = -38,
  lambda_18 = -39,
  func_check_start = -40,
  lambda_19 = -41,
  lambda_20 = -42,
  lambda_21 = -43,
  func_std_types__FUNKY_IDENTIFIER___search = -44,
  func_search_forwards = -45,
  func_search_for_word_start = -46,
  lambda_22 = -47,
  lambda_23 = -48,
  lambda_24 = -49,
  lambda_25 = -50,
  lambda_26 = -51,
  sequence_208_22 = -52,
  lambda_27 = -53,
  func_3_within_word = -54,
  lambda_28 = -55,
  lambda_29 = -56,
  lambda_30 = -57,
  lambda_31 = -58,
  lambda_32 = -59,
  lambda_33 = -60,
  lambda_34 = -61,
  func_2_word_start = -62,
  lambda_35 = -63,
  lambda_36 = -64,
  func_search_backwards = -65,
  func_search_for_word_end = -66,
  lambda_37 = -67,
  lambda_38 = -68,
  lambda_39 = -69,
  func_4_within_word = -70,
  lambda_40 = -71,
  lambda_check_start = -72,
  lambda_41 = -73,
  lambda_42 = -74,
  func_2_word_end = -75,
  lambda_43 = -76,
  lambda_44 = -77,
  func_2_check_start = -78,
  lambda_45 = -79,
  lambda_46 = -80,
  lambda_47 = -81,
  func_std_types__WHITESPACE___match = -82,
  lambda_48 = -83,
  lambda_49 = -84,
  lambda_loop = -85,
  lambda_50 = -86,
  lambda_51 = -87,
  lambda_52 = -88,
  lambda_53 = -89,
  lambda_54 = -90,
  func_std_types__WHITESPACE___match_back = -91,
  lambda_55 = -92,
  lambda_56 = -93,
  lambda_2_loop = -94,
  lambda_57 = -95,
  lambda_58 = -96,
  lambda_59 = -97,
  lambda_60 = -98,
  lambda_61 = -99,
  func_std_types__WHITESPACE___search = -100,
  func_2_search_forwards = -101,
  func_search_for_whitespace = -102,
  lambda_62 = -103,
  lambda_63 = -104,
  lambda_64 = -105,
  func_match_more_whitespace = -106,
  lambda_65 = -107,
  lambda_66 = -108,
  lambda_67 = -109,
  lambda_68 = -110,
  lambda_69 = -111,
  lambda_70 = -112,
  lambda_71 = -113,
  func_2_search_backwards = -114,
  func_2_search_for_whitespace = -115,
  lambda_72 = -116,
  lambda_73 = -117,
  lambda_74 = -118,
  func_2_match_more_whitespace = -119,
  lambda_75 = -120,
  lambda_76 = -121,
  lambda_77 = -122,
  lambda_78 = -123,
  lambda_79 = -124,
  lambda_80 = -125,
  func_std__many = -126,
  func_std_types__many___match = -127,
  lambda_81 = -128,
  lambda_82 = -129,
  lambda_83 = -130,
  lambda_84 = -131,
  lambda_85 = -132,
  lambda_3_loop = -133,
  lambda_86 = -134,
  lambda_87 = -135,
  lambda_88 = -136,
  lambda_89 = -137,
  lambda_90 = -138,
  lambda_91 = -139,
  lambda_92 = -140,
  lambda_93 = -141,
  lambda_94 = -142,
  lambda_95 = -143,
  lambda_96 = -144,
  lambda_4_loop = -145,
  lambda_97 = -146,
  lambda_98 = -147,
  lambda_99 = -148,
  lambda_100 = -149,
  lambda_101 = -150,
  lambda_captured_item_is_defined = -151,
  func_std_types__many___match_back = -152,
  lambda_102 = -153,
  lambda_103 = -154,
  lambda_104 = -155,
  lambda_5_loop = -156,
  lambda_105 = -157,
  lambda_106 = -158,
  lambda_107 = -159,
  lambda_108 = -160,
  lambda_109 = -161,
  func_std_types__many___search = -162,
  func_3_search_forwards = -163,
  func_search_next = -164,
  lambda_110 = -165,
  lambda_111 = -166,
  lambda_112 = -167,
  lambda_113 = -168,
  lambda_114 = -169,
  lambda_115 = -170,
  lambda_116 = -171,
  lambda_117 = -172,
  lambda_6_loop = -173,
  lambda_118 = -174,
  lambda_119 = -175,
  lambda_120 = -176,
  lambda_121 = -177,
  func_3_search_backwards = -178,
  func_2_search_next = -179,
  lambda_122 = -180,
  lambda_123 = -181,
  minus_num_1 = -182,
  lambda_124 = -183,
  lambda_125 = -184,
  lambda_126 = -185,
  lambda_127 = -186,
  lambda_128 = -187,
  lambda_129 = -188,
  lambda_7_loop = -189,
  lambda_130 = -190,
  lambda_131 = -191,
  lambda_132 = -192,
  lambda_133 = -193,
  lambda_134 = -194,
  func_std__some = -195,
  func_std_types__some___match = -196,
  lambda_135 = -197,
  lambda_8_loop = -198,
  lambda_136 = -199,
  lambda_137 = -200,
  lambda_138 = -201,
  lambda_139 = -202,
  lambda_9_loop = -203,
  lambda_140 = -204,
  lambda_141 = -205,
  lambda_142 = -206,
  lambda_2_captured_item_is_defined = -207,
  func_std_types__some___match_back = -208,
  lambda_143 = -209,
  lambda_10_loop = -210,
  lambda_144 = -211,
  lambda_145 = -212,
  lambda_146 = -213,
  lambda_147 = -214,
  lambda_11_loop = -215,
  lambda_148 = -216,
  lambda_149 = -217,
  lambda_150 = -218,
  lambda_3_captured_item_is_defined = -219,
  func_std__optional = -220,
  func_std_types__optional___match = -221,
  lambda_151 = -222,
  lambda_152 = -223,
  lambda_153 = -224,
  lambda_154 = -225,
  lambda_155 = -226,
  lambda_156 = -227,
  func_std_types__anything___match = -228,
  func_std_types__anything___match_back = -229,
  func_std_types__anything___search = -230,
  func_std__any_character_but = -231,
  func_std_types__any_character_but___match = -232,
  lambda_157 = -233,
  lambda_158 = -234,
  func_std__capture = -235,
  func_std_types__capture___match = -236,
  lambda_159 = -237,
  lambda_160 = -238,
  lambda_161 = -239,
  lambda_162 = -240,
  func_std_types__capture___match_back = -241,
  lambda_163 = -242,
  lambda_164 = -243,
  lambda_165 = -244,
  lambda_166 = -245,
  func_std__alt = -246,
  func_std_types__alt___match = -247,
  lambda_167 = -248,
  lambda_168 = -249,
  lambda_169 = -250
};

enum {
  var__START = FIRST_VAR-1,
  var_std__match, // attribute
  var_std__assign, // extern
  var_std__match_back, // attribute
  var_std__search, // attribute
  var_std_types__FUNKY_IDENTIFIER, // derived
  var_std_types__object, // extern
  var_std__FUNKY_IDENTIFIER, // derived
  var_match, // extern polymorphic
  var_90_5_str, // dynamic
  var_92_4_rc, // dynamic
  var_result_count, // extern
  var_93_4_i, // dynamic
  var_94_4_n, // dynamic
  var_length_of, // extern
  var_std__equal, // extern
  var_std__value_range, // extern
  var_std__sequence, // extern
  var_case, // extern
  var_if, // extern
  var_inc, // extern
  var_std__less, // extern
  var_range, // extern
  var_std__minus, // extern
  var_undefined, // extern
  var_match_back, // extern polymorphic
  var_144_5_str, // dynamic
  var_146_4_n, // dynamic
  var_147_4_i, // dynamic
  var_std__plus, // extern
  var_dec, // extern
  var_std__not, // extern
  var_std__and, // extern
  var_search, // extern polymorphic
  var_180_5_str, // dynamic
  var_181_5_nth, // dynamic
  var_183_4_n, // dynamic
  var_190_6_i, // dynamic
  var_191_6_s, // dynamic
  var_245_6_i, // dynamic
  var_246_6_e, // dynamic
  var_283_20_continuation, // dynamic
  var_284_8_chr, // dynamic
  var_std_types__WHITESPACE, // derived
  var_std__WHITESPACE, // derived
  var_322_5_str, // dynamic
  var_324_4_i, // dynamic
  var_325_4_n, // dynamic
  var_is_a_whitespace_character, // extern
  var_next, // extern
  var_loop, // extern
  var_348_5_str, // dynamic
  var_350_4_n, // dynamic
  var_355_8_i, // dynamic
  var_396_5_str, // dynamic
  var_397_5_nth, // dynamic
  var_399_4_n, // dynamic
  var_406_6_i, // dynamic
  var_407_6_s, // dynamic
  var_443_6_i, // dynamic
  var_444_6_e, // dynamic
  var_expression_of, // attribute
  var_expressions_of, // attribute
  var_std_types__many, // derived
  var_std__many, // initialized
  var_505_5_str, // dynamic
  var_508_4_expr, // dynamic
  var_511_14_i, // dynamic
  var_is_undefined, // extern
  var_521_16_n, // dynamic
  var_527_28_len, // dynamic
  var_std__or, // extern
  var_plus, // extern
  var_535_8_captured_items, // dynamic
  var_empty_list, // extern
  var_536_14_i, // dynamic
  var_536_26_captured_item, // dynamic
  var_is_defined, // extern
  var_list, // extern
  var_update_if, // extern
  var_548_16_n, // dynamic
  var_554_28_len, // dynamic
  var_push, // extern
  var_579_5_str, // dynamic
  var_581_4_expr, // dynamic
  var_582_15_i, // dynamic
  var_587_8_n, // dynamic
  var_594_25_len, // dynamic
  var_minus, // extern
  var_616_5_str, // dynamic
  var_617_5_nth, // dynamic
  var_619_4_expr, // dynamic
  var_620_4_n, // dynamic
  var_627_6_i, // dynamic
  var_635_41_pos, // dynamic
  var_635_46_len, // dynamic
  var_651_20_s, // dynamic
  var_666_6_i, // dynamic
  var_674_45_len, // dynamic
  var_690_20_e, // dynamic
  var_std_types__some, // derived
  var_std__some, // initialized
  var_739_5_str, // dynamic
  var_742_4_expr, // dynamic
  var_743_4_i, // dynamic
  var_747_16_len, // dynamic
  var_755_8_captured_items, // dynamic
  var_757_16_len, // dynamic
  var_757_21_captured_item, // dynamic
  var_772_5_str, // dynamic
  var_775_4_expr, // dynamic
  var_776_4_n, // dynamic
  var_777_4_i, // dynamic
  var_781_21_len, // dynamic
  var_789_8_captured_items, // dynamic
  var_791_21_len, // dynamic
  var_791_26_captured_item, // dynamic
  var_put, // extern
  var_std_types__optional, // derived
  var_std__optional, // initialized
  var_815_5_str, // dynamic
  var_818_4_expr, // dynamic
  var_821_14_i, // dynamic
  var_827_14_i, // dynamic
  var_827_26_captured_item, // dynamic
  var_std_types__anything, // derived
  var_std__ANYTHING, // derived
  var_std_types__any_character_but, // derived
  var_std__any_character_but, // initialized
  var_std_types__capture, // derived
  var_std__capture, // initialized
  var_902_5_str, // dynamic
  var_906_10_len, // dynamic
  var_919_5_str, // dynamic
  var_923_15_len, // dynamic
  var_std__negate, // extern
  var_std_types__alt, // derived
  var_std__alt, // initialized
  var_945_5_str, // dynamic
  var_949_14_len, // dynamic
  var_for_each, // extern
  var_std__DIGIT, // initialized compound
  var_std__LETTER, // initialized compound
  var_std__set, // derived
  var_std__hash_set, // extern
  var__END
};


static TAB_NUM t_func_std_types__FUNKY_IDENTIFIER___match[] = {
  1, // locals
  2, // parameters
  LOCAL(1),
  var_90_5_str,
  // $rc result_count()
  var_result_count, 0, 1, var_92_4_rc,
  // $i 1
  LET, 1, num_1, 1, var_93_4_i,
  // $n length_of(str)
  var_length_of, 1, var_90_5_str, 1, var_94_4_n,
  // n == 0
  var_std__equal, 2, var_94_4_n, num_0, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), func_fail, lambda_1, TAIL_CALL,
  POS(92, 3),
  POS(93, 3),
  POS(94, 3),
  POS(97, 5),
  POS(96, 3)
};

static FUNCTION_INFO i_func_std_types__FUNKY_IDENTIFIER___match = {
  t_func_std_types__FUNKY_IDENTIFIER___match, NULL, 5, 0,
  {}
};

static TAB_NUM t_lambda_1[] = {
  1, // locals
  0, // parameters
  // str(1)
  var_90_5_str, 1, num_1, 1, LOCAL(1),
  // case str(1)
  var_case, 4, LOCAL(1), sequence_101_10, func_within_word, func_fail, TAIL_CALL,
  POS(100, 12),
  POS(100, 7)
};

static FUNCTION_INFO i_lambda_1 = {
  t_lambda_1, NULL, 2, 0,
  {}
};

static TAB_NUM t_func_within_word[] = {
  1, // locals
  0, // parameters
  // inc &i
  var_inc, 1, var_93_4_i, 1, var_93_4_i,
  // n:
  var_std__less, 2, var_94_4_n, var_93_4_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_2, lambda_5, TAIL_CALL,
  POS(105, 5),
  POS(107, 11),
  POS(106, 5)
};

static FUNCTION_INFO i_func_within_word = {
  t_func_within_word, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_2[] = {
  1, // locals
  0, // parameters
  // rc == 1
  var_std__equal, 2, var_92_4_rc, num_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_3, lambda_4, TAIL_CALL,
  POS(109, 11),
  POS(108, 9)
};

static FUNCTION_INFO i_lambda_2 = {
  t_lambda_2, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_3[] = {
  0, // locals
  0, // parameters
  //  n
  LET, 1, var_94_4_n, TAIL_CALL,
  POS(110, 13)
};

static FUNCTION_INFO i_lambda_3 = {
  t_lambda_3, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_4[] = {
  1, // locals
  0, // parameters
  // range(str 1 n)
  var_range, 3, var_90_5_str, num_1, var_94_4_n, 1, LOCAL(1),
  //  n range(str 1 n)
  LET, 2, var_94_4_n, LOCAL(1), TAIL_CALL,
  POS(111, 16),
  POS(111, 13)
};

static FUNCTION_INFO i_lambda_4 = {
  t_lambda_4, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_5[] = {
  1, // locals
  0, // parameters
  // str(i)
  var_90_5_str, 1, var_93_4_i, 1, LOCAL(1),
  // case str(i)
  var_case, 6, LOCAL(1), sequence_114_12, func_within_word, chr_95, func_word_start, lambda_6, TAIL_CALL,
  POS(113, 14),
  POS(113, 9)
};

static FUNCTION_INFO i_lambda_5 = {
  t_lambda_5, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_6[] = {
  1, // locals
  0, // parameters
  // rc == 1
  var_std__equal, 2, var_92_4_rc, num_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_7, lambda_8, TAIL_CALL,
  POS(118, 15),
  POS(117, 13)
};

static FUNCTION_INFO i_lambda_6 = {
  t_lambda_6, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_7[] = {
  1, // locals
  0, // parameters
  // i-1
  var_std__minus, 2, var_93_4_i, num_1, 1, LOCAL(1),
  //  i-1
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(119, 18),
  POS(119, 17)
};

static FUNCTION_INFO i_lambda_7 = {
  t_lambda_7, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_8[] = {
  3, // locals
  0, // parameters
  // i-1 range(str 1 i-1)
  var_std__minus, 2, var_93_4_i, num_1, 1, LOCAL(1),
  // i-1)
  var_std__minus, 2, var_93_4_i, num_1, 1, LOCAL(2),
  // range(str 1 i-1)
  var_range, 3, var_90_5_str, num_1, LOCAL(2), 1, LOCAL(3),
  //  i-1 range(str 1 i-1)
  LET, 2, LOCAL(1), LOCAL(3), TAIL_CALL,
  POS(120, 18),
  POS(120, 34),
  POS(120, 22),
  POS(120, 17)
};

static FUNCTION_INFO i_lambda_8 = {
  t_lambda_8, NULL, 4, 0,
  {}
};

static TAB_NUM t_func_word_start[] = {
  1, // locals
  0, // parameters
  // inc &i
  var_inc, 1, var_93_4_i, 1, var_93_4_i,
  // n:
  var_std__less, 2, var_94_4_n, var_93_4_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_9, lambda_12, TAIL_CALL,
  POS(123, 5),
  POS(125, 11),
  POS(124, 5)
};

static FUNCTION_INFO i_func_word_start = {
  t_func_word_start, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_9[] = {
  1, // locals
  0, // parameters
  // rc == 1
  var_std__equal, 2, var_92_4_rc, num_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_10, lambda_11, TAIL_CALL,
  POS(127, 11),
  POS(126, 9)
};

static FUNCTION_INFO i_lambda_9 = {
  t_lambda_9, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_10[] = {
  0, // locals
  0, // parameters
  //  n
  LET, 1, var_94_4_n, TAIL_CALL,
  POS(128, 13)
};

static FUNCTION_INFO i_lambda_10 = {
  t_lambda_10, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_11[] = {
  1, // locals
  0, // parameters
  // range(str 1 n)
  var_range, 3, var_90_5_str, num_1, var_94_4_n, 1, LOCAL(1),
  //  n range(str 1 n)
  LET, 2, var_94_4_n, LOCAL(1), TAIL_CALL,
  POS(129, 16),
  POS(129, 13)
};

static FUNCTION_INFO i_lambda_11 = {
  t_lambda_11, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_12[] = {
  1, // locals
  0, // parameters
  // str(i)
  var_90_5_str, 1, var_93_4_i, 1, LOCAL(1),
  // case str(i)
  var_case, 4, LOCAL(1), sequence_114_12, func_within_word, func_fail, TAIL_CALL,
  POS(131, 14),
  POS(131, 9)
};

static FUNCTION_INFO i_lambda_12 = {
  t_lambda_12, NULL, 2, 0,
  {}
};

static TAB_NUM t_func_fail[] = {
  1, // locals
  0, // parameters
  // rc == 1
  var_std__equal, 2, var_92_4_rc, num_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_13, lambda_14, TAIL_CALL,
  POS(137, 7),
  POS(136, 5)
};

static FUNCTION_INFO i_func_fail = {
  t_func_fail, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_13[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(138, 9)
};

static FUNCTION_INFO i_lambda_13 = {
  t_lambda_13, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_14[] = {
  0, // locals
  0, // parameters
  //  undefined undefined
  LET, 2, var_undefined, var_undefined, TAIL_CALL,
  POS(139, 9)
};

static FUNCTION_INFO i_lambda_14 = {
  t_lambda_14, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_std_types__FUNKY_IDENTIFIER___match_back[] = {
  1, // locals
  2, // parameters
  LOCAL(1),
  var_144_5_str,
  // $n length_of(str)
  var_length_of, 1, var_144_5_str, 1, var_146_4_n,
  // $i n+1
  var_std__plus, 2, var_146_4_n, num_1, 1, var_147_4_i,
  // word_end
  func_word_end, 0, TAIL_CALL,
  POS(146, 3),
  POS(147, 3),
  POS(148, 3)
};

static FUNCTION_INFO i_func_std_types__FUNKY_IDENTIFIER___match_back = {
  t_func_std_types__FUNKY_IDENTIFIER___match_back, NULL, 3, 0,
  {}
};

static TAB_NUM t_func_word_end[] = {
  1, // locals
  0, // parameters
  // dec &i
  var_dec, 1, var_147_4_i, 1, var_147_4_i,
  // i < 1
  var_std__less, 2, var_147_4_i, num_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_15, lambda_16, TAIL_CALL,
  POS(151, 5),
  POS(153, 7),
  POS(152, 5)
};

static FUNCTION_INFO i_func_word_end = {
  t_func_word_end, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_15[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(154, 9)
};

static FUNCTION_INFO i_lambda_15 = {
  t_lambda_15, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_16[] = {
  1, // locals
  0, // parameters
  // str(i)
  var_144_5_str, 1, var_147_4_i, 1, LOCAL(1),
  // case str(i)
  var_case, 4, LOCAL(1), sequence_114_12, func_2_within_word, lambda_17, TAIL_CALL,
  POS(156, 14),
  POS(156, 9)
};

static FUNCTION_INFO i_lambda_16 = {
  t_lambda_16, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_17[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(158, 13)
};

static FUNCTION_INFO i_lambda_17 = {
  t_lambda_17, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_2_within_word[] = {
  1, // locals
  0, // parameters
  // dec &i
  var_dec, 1, var_147_4_i, 1, var_147_4_i,
  // i < 1
  var_std__less, 2, var_147_4_i, num_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), func_check_start, lambda_18, TAIL_CALL,
  POS(161, 5),
  POS(163, 7),
  POS(162, 5)
};

static FUNCTION_INFO i_func_2_within_word = {
  t_func_2_within_word, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_18[] = {
  1, // locals
  0, // parameters
  // str(i)
  var_144_5_str, 1, var_147_4_i, 1, LOCAL(1),
  // case str(i)
  var_case, 6, LOCAL(1), sequence_114_12, func_2_within_word, chr_95, func_word_end, func_check_start, TAIL_CALL,
  POS(166, 14),
  POS(166, 9)
};

static FUNCTION_INFO i_lambda_18 = {
  t_lambda_18, NULL, 2, 0,
  {}
};

static TAB_NUM t_func_check_start[] = {
  5, // locals
  0, // parameters
  // i+1) >= '0' && str(i+1) <= '9'
  var_std__plus, 2, var_147_4_i, num_1, 1, LOCAL(1),
  // str(i+1) >= '0' && str(i+1) <= '9'
  var_144_5_str, 1, LOCAL(1), 1, LOCAL(2),
  // str(i+1) >= '0' && str(i+1) <= '9'
  var_std__less, 2, LOCAL(2), chr_48, 1, LOCAL(3),
  // str(i+1) >= '0' && str(i+1) <= '9'
  var_std__not, 1, LOCAL(3), 1, LOCAL(4),
  // str(i+1) >= '0' && str(i+1) <= '9'
  var_std__and, 2, LOCAL(4), lambda_19, 1, LOCAL(5),
  // if
  var_if, 3, LOCAL(5), lambda_20, lambda_21, TAIL_CALL,
  POS(173, 11),
  POS(173, 7),
  POS(173, 7),
  POS(173, 7),
  POS(173, 7),
  POS(172, 5)
};

static FUNCTION_INFO i_func_check_start = {
  t_func_check_start, NULL, 6, 0,
  {}
};

static TAB_NUM t_lambda_19[] = {
  4, // locals
  0, // parameters
  // i+1) <= '9'
  var_std__plus, 2, var_147_4_i, num_1, 1, LOCAL(1),
  // str(i+1) <= '9'
  var_144_5_str, 1, LOCAL(1), 1, LOCAL(2),
  // 9'
  var_std__less, 2, chr_57, LOCAL(2), 1, LOCAL(3),
  // 9'
  var_std__not, 1, LOCAL(3), 1, LOCAL(4),
  // str(i+1) <= '9'
  LET, 1, LOCAL(4), TAIL_CALL,
  POS(173, 30),
  POS(173, 26),
  POS(173, 39),
  POS(173, 39),
  POS(173, 26)
};

static FUNCTION_INFO i_lambda_19 = {
  t_lambda_19, NULL, 5, 0,
  {}
};

static TAB_NUM t_lambda_20[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(174, 9)
};

static FUNCTION_INFO i_lambda_20 = {
  t_lambda_20, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_21[] = {
  1, // locals
  0, // parameters
  // n-i
  var_std__minus, 2, var_146_4_n, var_147_4_i, 1, LOCAL(1),
  //  n-i
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(175, 10),
  POS(175, 9)
};

static FUNCTION_INFO i_lambda_21 = {
  t_lambda_21, NULL, 2, 0,
  {}
};

static TAB_NUM t_func_std_types__FUNKY_IDENTIFIER___search[] = {
  1, // locals
  -3, // parameters
  MANDATORY_PARAMETER, LOCAL(1),
  MANDATORY_PARAMETER, var_180_5_str,
  num_1, var_181_5_nth,
  // $n length_of(str)
  var_length_of, 1, var_180_5_str, 1, var_183_4_n,
  // nth < 0
  var_std__less, 2, var_181_5_nth, num_0, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), func_search_backwards, func_search_forwards, TAIL_CALL,
  POS(183, 3),
  POS(185, 5),
  POS(184, 3)
};

static FUNCTION_INFO i_func_std_types__FUNKY_IDENTIFIER___search = {
  t_func_std_types__FUNKY_IDENTIFIER___search, NULL, 3, 0,
  {}
};

static TAB_NUM t_func_search_forwards[] = {
  0, // locals
  0, // parameters
  // $i 0
  LET, 1, num_0, 1, var_190_6_i,
  // $s undefined
  LET, 1, var_undefined, 1, var_191_6_s,
  // search_for_word_start
  func_search_for_word_start, 0, TAIL_CALL,
  POS(190, 5),
  POS(191, 5),
  POS(192, 5)
};

static FUNCTION_INFO i_func_search_forwards = {
  t_func_search_forwards, NULL, 3, 0,
  {}
};

static TAB_NUM t_func_search_for_word_start[] = {
  1, // locals
  0, // parameters
  // inc &i
  var_inc, 1, var_190_6_i, 1, var_190_6_i,
  // n
  var_std__less, 2, var_183_4_n, var_190_6_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_22, lambda_23, TAIL_CALL,
  POS(195, 7),
  POS(197, 13),
  POS(196, 7)
};

static FUNCTION_INFO i_func_search_for_word_start = {
  t_func_search_for_word_start, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_22[] = {
  0, // locals
  0, // parameters
  //  undefined undefined
  LET, 2, var_undefined, var_undefined, TAIL_CALL,
  POS(198, 11)
};

static FUNCTION_INFO i_lambda_22 = {
  t_lambda_22, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_23[] = {
  1, // locals
  0, // parameters
  // str(i)
  var_180_5_str, 1, var_190_6_i, 1, LOCAL(1),
  // case str(i)
  var_case, 4, LOCAL(1), sequence_101_10, lambda_24, func_search_for_word_start, TAIL_CALL,
  POS(200, 16),
  POS(200, 11)
};

static FUNCTION_INFO i_lambda_23 = {
  t_lambda_23, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_24[] = {
  1, // locals
  0, // parameters
  // i == 1:
  var_std__equal, 2, var_190_6_i, num_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_25, lambda_26, TAIL_CALL,
  POS(203, 17),
  POS(202, 15)
};

static FUNCTION_INFO i_lambda_24 = {
  t_lambda_24, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_25[] = {
  0, // locals
  0, // parameters
  // !s 1
  LET, 1, num_1, 1, var_191_6_s,
  // within_word
  func_3_within_word, 0, TAIL_CALL,
  POS(204, 19),
  POS(205, 19)
};

static FUNCTION_INFO i_lambda_25 = {
  t_lambda_25, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_26[] = {
  2, // locals
  0, // parameters
  // i-1)
  var_std__minus, 2, var_190_6_i, num_1, 1, LOCAL(1),
  // str(i-1)
  var_180_5_str, 1, LOCAL(1), 1, LOCAL(2),
  // case str(i-1)
  var_case, 4, LOCAL(2), sequence_208_22, func_search_for_word_start, lambda_27, TAIL_CALL,
  POS(207, 28),
  POS(207, 24),
  POS(207, 19)
};

static FUNCTION_INFO i_lambda_26 = {
  t_lambda_26, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_27[] = {
  0, // locals
  0, // parameters
  // !s i
  LET, 1, var_190_6_i, 1, var_191_6_s,
  // within_word
  func_3_within_word, 0, TAIL_CALL,
  POS(211, 23),
  POS(212, 23)
};

static FUNCTION_INFO i_lambda_27 = {
  t_lambda_27, NULL, 2, 0,
  {}
};

static TAB_NUM t_func_3_within_word[] = {
  1, // locals
  0, // parameters
  // inc &i
  var_inc, 1, var_190_6_i, 1, var_190_6_i,
  // n:
  var_std__less, 2, var_183_4_n, var_190_6_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_28, lambda_31, TAIL_CALL,
  POS(216, 7),
  POS(218, 13),
  POS(217, 7)
};

static FUNCTION_INFO i_func_3_within_word = {
  t_func_3_within_word, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_28[] = {
  1, // locals
  0, // parameters
  // 1
  var_std__less, 2, num_1, var_181_5_nth, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_29, lambda_30, TAIL_CALL,
  POS(220, 19),
  POS(219, 11)
};

static FUNCTION_INFO i_lambda_28 = {
  t_lambda_28, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_29[] = {
  0, // locals
  0, // parameters
  //  undefined undefined
  LET, 2, var_undefined, var_undefined, TAIL_CALL,
  POS(221, 15)
};

static FUNCTION_INFO i_lambda_29 = {
  t_lambda_29, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_30[] = {
  1, // locals
  0, // parameters
  // i-s
  var_std__minus, 2, var_190_6_i, var_191_6_s, 1, LOCAL(1),
  //  s i-s
  LET, 2, var_191_6_s, LOCAL(1), TAIL_CALL,
  POS(222, 18),
  POS(222, 15)
};

static FUNCTION_INFO i_lambda_30 = {
  t_lambda_30, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_31[] = {
  1, // locals
  0, // parameters
  // str(i)
  var_180_5_str, 1, var_190_6_i, 1, LOCAL(1),
  // case str(i)
  var_case, 6, LOCAL(1), sequence_114_12, func_3_within_word, chr_95, func_2_word_start, lambda_32, TAIL_CALL,
  POS(224, 16),
  POS(224, 11)
};

static FUNCTION_INFO i_lambda_31 = {
  t_lambda_31, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_32[] = {
  1, // locals
  0, // parameters
  // 1:
  var_std__less, 2, num_1, var_181_5_nth, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_33, lambda_34, TAIL_CALL,
  POS(229, 23),
  POS(228, 15)
};

static FUNCTION_INFO i_lambda_32 = {
  t_lambda_32, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_33[] = {
  0, // locals
  0, // parameters
  // dec &nth
  var_dec, 1, var_181_5_nth, 1, var_181_5_nth,
  // search_for_word_start
  func_search_for_word_start, 0, TAIL_CALL,
  POS(230, 19),
  POS(231, 19)
};

static FUNCTION_INFO i_lambda_33 = {
  t_lambda_33, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_34[] = {
  1, // locals
  0, // parameters
  // i-s
  var_std__minus, 2, var_190_6_i, var_191_6_s, 1, LOCAL(1),
  //  s i-s
  LET, 2, var_191_6_s, LOCAL(1), TAIL_CALL,
  POS(232, 22),
  POS(232, 19)
};

static FUNCTION_INFO i_lambda_34 = {
  t_lambda_34, NULL, 2, 0,
  {}
};

static TAB_NUM t_func_2_word_start[] = {
  1, // locals
  0, // parameters
  // inc &i
  var_inc, 1, var_190_6_i, 1, var_190_6_i,
  // n
  var_std__less, 2, var_183_4_n, var_190_6_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_35, lambda_36, TAIL_CALL,
  POS(235, 7),
  POS(237, 13),
  POS(236, 7)
};

static FUNCTION_INFO i_func_2_word_start = {
  t_func_2_word_start, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_35[] = {
  0, // locals
  0, // parameters
  //  undefined undefined
  LET, 2, var_undefined, var_undefined, TAIL_CALL,
  POS(238, 11)
};

static FUNCTION_INFO i_lambda_35 = {
  t_lambda_35, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_36[] = {
  1, // locals
  0, // parameters
  // str(i)
  var_180_5_str, 1, var_190_6_i, 1, LOCAL(1),
  // case str(i)
  var_case, 4, LOCAL(1), sequence_114_12, func_3_within_word, func_search_for_word_start, TAIL_CALL,
  POS(240, 16),
  POS(240, 11)
};

static FUNCTION_INFO i_lambda_36 = {
  t_lambda_36, NULL, 2, 0,
  {}
};

static TAB_NUM t_func_search_backwards[] = {
  0, // locals
  0, // parameters
  // $i n+1
  var_std__plus, 2, var_183_4_n, num_1, 1, var_245_6_i,
  // $e undefined
  LET, 1, var_undefined, 1, var_246_6_e,
  // search_for_word_end
  func_search_for_word_end, 0, TAIL_CALL,
  POS(245, 5),
  POS(246, 5),
  POS(247, 5)
};

static FUNCTION_INFO i_func_search_backwards = {
  t_func_search_backwards, NULL, 3, 0,
  {}
};

static TAB_NUM t_func_search_for_word_end[] = {
  1, // locals
  0, // parameters
  // dec &i
  var_dec, 1, var_245_6_i, 1, var_245_6_i,
  // i < 1
  var_std__less, 2, var_245_6_i, num_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_37, lambda_38, TAIL_CALL,
  POS(250, 7),
  POS(252, 9),
  POS(251, 7)
};

static FUNCTION_INFO i_func_search_for_word_end = {
  t_func_search_for_word_end, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_37[] = {
  0, // locals
  0, // parameters
  //  undefined undefined
  LET, 2, var_undefined, var_undefined, TAIL_CALL,
  POS(253, 11)
};

static FUNCTION_INFO i_lambda_37 = {
  t_lambda_37, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_38[] = {
  1, // locals
  0, // parameters
  // str(i)
  var_180_5_str, 1, var_245_6_i, 1, LOCAL(1),
  // case str(i)
  var_case, 4, LOCAL(1), sequence_114_12, lambda_39, func_search_for_word_end, TAIL_CALL,
  POS(255, 16),
  POS(255, 11)
};

static FUNCTION_INFO i_lambda_38 = {
  t_lambda_38, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_39[] = {
  0, // locals
  0, // parameters
  // !e i
  LET, 1, var_245_6_i, 1, var_246_6_e,
  // within_word
  func_4_within_word, 0, TAIL_CALL,
  POS(257, 15),
  POS(258, 15)
};

static FUNCTION_INFO i_lambda_39 = {
  t_lambda_39, NULL, 2, 0,
  {}
};

static TAB_NUM t_func_4_within_word[] = {
  1, // locals
  0, // parameters
  // dec &i
  var_dec, 1, var_245_6_i, 1, var_245_6_i,
  // i < 1:
  var_std__less, 2, var_245_6_i, num_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_40, lambda_41, TAIL_CALL,
  POS(262, 7),
  POS(264, 9),
  POS(263, 7)
};

static FUNCTION_INFO i_func_4_within_word = {
  t_func_4_within_word, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_40[] = {
  0, // locals
  0, // parameters
  // check_start -> undefined undefined
  func_2_check_start, 1, lambda_check_start, TAIL_CALL,
  POS(265, 11)
};

static FUNCTION_INFO i_lambda_40 = {
  t_lambda_40, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_check_start[] = {
  0, // locals
  0, // parameters
  //  undefined undefined
  LET, 2, var_undefined, var_undefined, TAIL_CALL,
  POS(265, 25)
};

static FUNCTION_INFO i_lambda_check_start = {
  t_lambda_check_start, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_41[] = {
  1, // locals
  0, // parameters
  // str(i)
  var_180_5_str, 1, var_245_6_i, 1, LOCAL(1),
  // case str(i)
  var_case, 6, LOCAL(1), sequence_114_12, func_4_within_word, chr_95, func_2_word_end, lambda_42, TAIL_CALL,
  POS(267, 16),
  POS(267, 11)
};

static FUNCTION_INFO i_lambda_41 = {
  t_lambda_41, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_42[] = {
  0, // locals
  0, // parameters
  // check_start search_for_word_end
  func_2_check_start, 1, func_search_for_word_end, TAIL_CALL,
  POS(271, 15)
};

static FUNCTION_INFO i_lambda_42 = {
  t_lambda_42, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_2_word_end[] = {
  1, // locals
  0, // parameters
  // dec &i
  var_dec, 1, var_245_6_i, 1, var_245_6_i,
  // i < 1
  var_std__less, 2, var_245_6_i, num_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_43, lambda_44, TAIL_CALL,
  POS(274, 7),
  POS(276, 9),
  POS(275, 7)
};

static FUNCTION_INFO i_func_2_word_end = {
  t_func_2_word_end, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_43[] = {
  0, // locals
  0, // parameters
  //  undefined undefined
  LET, 2, var_undefined, var_undefined, TAIL_CALL,
  POS(277, 11)
};

static FUNCTION_INFO i_lambda_43 = {
  t_lambda_43, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_44[] = {
  1, // locals
  0, // parameters
  // str(i)
  var_180_5_str, 1, var_245_6_i, 1, LOCAL(1),
  // case str(i)
  var_case, 4, LOCAL(1), sequence_114_12, func_4_within_word, func_search_for_word_end, TAIL_CALL,
  POS(279, 16),
  POS(279, 11)
};

static FUNCTION_INFO i_lambda_44 = {
  t_lambda_44, NULL, 2, 0,
  {}
};

static TAB_NUM t_func_2_check_start[] = {
  3, // locals
  1, // parameters
  var_283_20_continuation,
  // i+1)
  var_std__plus, 2, var_245_6_i, num_1, 1, LOCAL(1),
  // $chr str(i+1)
  var_180_5_str, 1, LOCAL(1), 1, var_284_8_chr,
  // chr >= '0' && chr <= '9'
  var_std__less, 2, var_284_8_chr, chr_48, 1, LOCAL(1),
  // chr >= '0' && chr <= '9'
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // chr >= '0' && chr <= '9'
  var_std__and, 2, LOCAL(2), lambda_45, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), var_283_20_continuation, lambda_46, TAIL_CALL,
  POS(284, 16),
  POS(284, 7),
  POS(286, 9),
  POS(286, 9),
  POS(286, 9),
  POS(285, 7)
};

static FUNCTION_INFO i_func_2_check_start = {
  t_func_2_check_start, NULL, 6, 0,
  {}
};

static TAB_NUM t_lambda_45[] = {
  2, // locals
  0, // parameters
  // 9'
  var_std__less, 2, chr_57, var_284_8_chr, 1, LOCAL(1),
  // 9'
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // chr <= '9'
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(286, 31),
  POS(286, 31),
  POS(286, 23)
};

static FUNCTION_INFO i_lambda_45 = {
  t_lambda_45, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_46[] = {
  1, // locals
  0, // parameters
  // inc &nth
  var_inc, 1, var_181_5_nth, 1, var_181_5_nth,
  // nth == 0
  var_std__equal, 2, var_181_5_nth, num_0, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_47, var_283_20_continuation, TAIL_CALL,
  POS(289, 11),
  POS(291, 13),
  POS(290, 11)
};

static FUNCTION_INFO i_lambda_46 = {
  t_lambda_46, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_47[] = {
  2, // locals
  0, // parameters
  // i+1 e-i
  var_std__plus, 2, var_245_6_i, num_1, 1, LOCAL(1),
  // e-i
  var_std__minus, 2, var_246_6_e, var_245_6_i, 1, LOCAL(2),
  //  i+1 e-i
  LET, 2, LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(292, 16),
  POS(292, 20),
  POS(292, 15)
};

static FUNCTION_INFO i_lambda_47 = {
  t_lambda_47, NULL, 3, 0,
  {}
};

static TAB_NUM t_func_std_types__WHITESPACE___match[] = {
  1, // locals
  2, // parameters
  LOCAL(1),
  var_322_5_str,
  // $i 0
  LET, 1, num_0, 1, var_324_4_i,
  // $n length_of(str)
  var_length_of, 1, var_322_5_str, 1, var_325_4_n,
  // n == 0
  var_std__equal, 2, var_325_4_n, num_0, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_48, lambda_49, TAIL_CALL,
  POS(324, 3),
  POS(325, 3),
  POS(327, 5),
  POS(326, 3)
};

static FUNCTION_INFO i_func_std_types__WHITESPACE___match = {
  t_func_std_types__WHITESPACE___match, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_48[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(328, 7)
};

static FUNCTION_INFO i_lambda_48 = {
  t_lambda_48, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_49[] = {
  0, // locals
  0, // parameters
  // loop:
  var_loop, 1, lambda_loop, TAIL_CALL,
  POS(330, 7)
};

static FUNCTION_INFO i_lambda_49 = {
  t_lambda_49, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_loop[] = {
  1, // locals
  0, // parameters
  // inc &i
  var_inc, 1, var_324_4_i, 1, var_324_4_i,
  // n
  var_std__less, 2, var_325_4_n, var_324_4_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_50, lambda_51, TAIL_CALL,
  POS(331, 9),
  POS(333, 15),
  POS(332, 9)
};

static FUNCTION_INFO i_lambda_loop = {
  t_lambda_loop, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_50[] = {
  0, // locals
  0, // parameters
  //  n
  LET, 1, var_325_4_n, TAIL_CALL,
  POS(334, 13)
};

static FUNCTION_INFO i_lambda_50 = {
  t_lambda_50, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_51[] = {
  2, // locals
  0, // parameters
  // str(i).is_a_whitespace_character
  var_322_5_str, 1, var_324_4_i, 1, LOCAL(1),
  // is_a_whitespace_character
  var_is_a_whitespace_character, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), var_next, lambda_52, TAIL_CALL,
  POS(337, 15),
  POS(337, 22),
  POS(336, 13)
};

static FUNCTION_INFO i_lambda_51 = {
  t_lambda_51, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_52[] = {
  1, // locals
  0, // parameters
  // 1
  var_std__less, 2, num_1, var_324_4_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_53, lambda_54, TAIL_CALL,
  POS(341, 23),
  POS(340, 17)
};

static FUNCTION_INFO i_lambda_52 = {
  t_lambda_52, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_53[] = {
  1, // locals
  0, // parameters
  // i-1
  var_std__minus, 2, var_324_4_i, num_1, 1, LOCAL(1),
  //  i-1
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(342, 22),
  POS(342, 21)
};

static FUNCTION_INFO i_lambda_53 = {
  t_lambda_53, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_54[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(343, 21)
};

static FUNCTION_INFO i_lambda_54 = {
  t_lambda_54, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_std_types__WHITESPACE___match_back[] = {
  1, // locals
  2, // parameters
  LOCAL(1),
  var_348_5_str,
  // $n length_of(str)
  var_length_of, 1, var_348_5_str, 1, var_350_4_n,
  // n == 0
  var_std__equal, 2, var_350_4_n, num_0, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_55, lambda_56, TAIL_CALL,
  POS(350, 3),
  POS(352, 5),
  POS(351, 3)
};

static FUNCTION_INFO i_func_std_types__WHITESPACE___match_back = {
  t_func_std_types__WHITESPACE___match_back, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_55[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(353, 7)
};

static FUNCTION_INFO i_lambda_55 = {
  t_lambda_55, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_56[] = {
  0, // locals
  0, // parameters
  // $i n+1
  var_std__plus, 2, var_350_4_n, num_1, 1, var_355_8_i,
  // loop:
  var_loop, 1, lambda_2_loop, TAIL_CALL,
  POS(355, 7),
  POS(356, 7)
};

static FUNCTION_INFO i_lambda_56 = {
  t_lambda_56, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_2_loop[] = {
  1, // locals
  0, // parameters
  // dec &i
  var_dec, 1, var_355_8_i, 1, var_355_8_i,
  // i < 1
  var_std__less, 2, var_355_8_i, num_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_57, lambda_58, TAIL_CALL,
  POS(357, 9),
  POS(359, 11),
  POS(358, 9)
};

static FUNCTION_INFO i_lambda_2_loop = {
  t_lambda_2_loop, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_57[] = {
  0, // locals
  0, // parameters
  //  n
  LET, 1, var_350_4_n, TAIL_CALL,
  POS(360, 13)
};

static FUNCTION_INFO i_lambda_57 = {
  t_lambda_57, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_58[] = {
  2, // locals
  0, // parameters
  // str(i).is_a_whitespace_character
  var_348_5_str, 1, var_355_8_i, 1, LOCAL(1),
  // is_a_whitespace_character
  var_is_a_whitespace_character, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), var_next, lambda_59, TAIL_CALL,
  POS(363, 15),
  POS(363, 22),
  POS(362, 13)
};

static FUNCTION_INFO i_lambda_58 = {
  t_lambda_58, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_59[] = {
  1, // locals
  0, // parameters
  // i < n
  var_std__less, 2, var_355_8_i, var_350_4_n, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_60, lambda_61, TAIL_CALL,
  POS(367, 19),
  POS(366, 17)
};

static FUNCTION_INFO i_lambda_59 = {
  t_lambda_59, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_60[] = {
  1, // locals
  0, // parameters
  // n-i
  var_std__minus, 2, var_350_4_n, var_355_8_i, 1, LOCAL(1),
  //  n-i
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(368, 22),
  POS(368, 21)
};

static FUNCTION_INFO i_lambda_60 = {
  t_lambda_60, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_61[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(369, 21)
};

static FUNCTION_INFO i_lambda_61 = {
  t_lambda_61, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_std_types__WHITESPACE___search[] = {
  1, // locals
  -3, // parameters
  MANDATORY_PARAMETER, LOCAL(1),
  MANDATORY_PARAMETER, var_396_5_str,
  num_1, var_397_5_nth,
  // $n length_of(str)
  var_length_of, 1, var_396_5_str, 1, var_399_4_n,
  // nth < 0
  var_std__less, 2, var_397_5_nth, num_0, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), func_2_search_backwards, func_2_search_forwards, TAIL_CALL,
  POS(399, 3),
  POS(401, 5),
  POS(400, 3)
};

static FUNCTION_INFO i_func_std_types__WHITESPACE___search = {
  t_func_std_types__WHITESPACE___search, NULL, 3, 0,
  {}
};

static TAB_NUM t_func_2_search_forwards[] = {
  0, // locals
  0, // parameters
  // $i 0
  LET, 1, num_0, 1, var_406_6_i,
  // $s undefined
  LET, 1, var_undefined, 1, var_407_6_s,
  // search_for_whitespace
  func_search_for_whitespace, 0, TAIL_CALL,
  POS(406, 5),
  POS(407, 5),
  POS(408, 5)
};

static FUNCTION_INFO i_func_2_search_forwards = {
  t_func_2_search_forwards, NULL, 3, 0,
  {}
};

static TAB_NUM t_func_search_for_whitespace[] = {
  1, // locals
  0, // parameters
  // inc &i
  var_inc, 1, var_406_6_i, 1, var_406_6_i,
  // n
  var_std__less, 2, var_399_4_n, var_406_6_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_62, lambda_63, TAIL_CALL,
  POS(411, 7),
  POS(413, 13),
  POS(412, 7)
};

static FUNCTION_INFO i_func_search_for_whitespace = {
  t_func_search_for_whitespace, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_62[] = {
  0, // locals
  0, // parameters
  //  undefined undefined
  LET, 2, var_undefined, var_undefined, TAIL_CALL,
  POS(414, 11)
};

static FUNCTION_INFO i_lambda_62 = {
  t_lambda_62, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_63[] = {
  2, // locals
  0, // parameters
  // str(i).is_a_whitespace_character
  var_396_5_str, 1, var_406_6_i, 1, LOCAL(1),
  // is_a_whitespace_character
  var_is_a_whitespace_character, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_64, func_search_for_whitespace, TAIL_CALL,
  POS(417, 13),
  POS(417, 20),
  POS(416, 11)
};

static FUNCTION_INFO i_lambda_63 = {
  t_lambda_63, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_64[] = {
  0, // locals
  0, // parameters
  // !s i
  LET, 1, var_406_6_i, 1, var_407_6_s,
  // match_more_whitespace
  func_match_more_whitespace, 0, TAIL_CALL,
  POS(419, 15),
  POS(420, 15)
};

static FUNCTION_INFO i_lambda_64 = {
  t_lambda_64, NULL, 2, 0,
  {}
};

static TAB_NUM t_func_match_more_whitespace[] = {
  1, // locals
  0, // parameters
  // inc &i
  var_inc, 1, var_406_6_i, 1, var_406_6_i,
  // n:
  var_std__less, 2, var_399_4_n, var_406_6_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_65, lambda_68, TAIL_CALL,
  POS(424, 7),
  POS(426, 13),
  POS(425, 7)
};

static FUNCTION_INFO i_func_match_more_whitespace = {
  t_func_match_more_whitespace, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_65[] = {
  1, // locals
  0, // parameters
  // 1
  var_std__less, 2, num_1, var_397_5_nth, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_66, lambda_67, TAIL_CALL,
  POS(428, 19),
  POS(427, 11)
};

static FUNCTION_INFO i_lambda_65 = {
  t_lambda_65, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_66[] = {
  0, // locals
  0, // parameters
  //  undefined undefined
  LET, 2, var_undefined, var_undefined, TAIL_CALL,
  POS(429, 15)
};

static FUNCTION_INFO i_lambda_66 = {
  t_lambda_66, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_67[] = {
  1, // locals
  0, // parameters
  // i-s
  var_std__minus, 2, var_406_6_i, var_407_6_s, 1, LOCAL(1),
  //  s i-s
  LET, 2, var_407_6_s, LOCAL(1), TAIL_CALL,
  POS(430, 18),
  POS(430, 15)
};

static FUNCTION_INFO i_lambda_67 = {
  t_lambda_67, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_68[] = {
  2, // locals
  0, // parameters
  // str(i).is_a_whitespace_character
  var_396_5_str, 1, var_406_6_i, 1, LOCAL(1),
  // is_a_whitespace_character
  var_is_a_whitespace_character, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), func_match_more_whitespace, lambda_69, TAIL_CALL,
  POS(433, 13),
  POS(433, 20),
  POS(432, 11)
};

static FUNCTION_INFO i_lambda_68 = {
  t_lambda_68, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_69[] = {
  1, // locals
  0, // parameters
  // 1:
  var_std__less, 2, num_1, var_397_5_nth, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_70, lambda_71, TAIL_CALL,
  POS(437, 23),
  POS(436, 15)
};

static FUNCTION_INFO i_lambda_69 = {
  t_lambda_69, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_70[] = {
  0, // locals
  0, // parameters
  // dec &nth
  var_dec, 1, var_397_5_nth, 1, var_397_5_nth,
  // search_for_whitespace
  func_search_for_whitespace, 0, TAIL_CALL,
  POS(438, 19),
  POS(439, 19)
};

static FUNCTION_INFO i_lambda_70 = {
  t_lambda_70, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_71[] = {
  1, // locals
  0, // parameters
  // i-s
  var_std__minus, 2, var_406_6_i, var_407_6_s, 1, LOCAL(1),
  //  s i-s
  LET, 2, var_407_6_s, LOCAL(1), TAIL_CALL,
  POS(440, 22),
  POS(440, 19)
};

static FUNCTION_INFO i_lambda_71 = {
  t_lambda_71, NULL, 2, 0,
  {}
};

static TAB_NUM t_func_2_search_backwards[] = {
  0, // locals
  0, // parameters
  // $i n+1
  var_std__plus, 2, var_399_4_n, num_1, 1, var_443_6_i,
  // $e undefined
  LET, 1, var_undefined, 1, var_444_6_e,
  // search_for_whitespace
  func_2_search_for_whitespace, 0, TAIL_CALL,
  POS(443, 5),
  POS(444, 5),
  POS(445, 5)
};

static FUNCTION_INFO i_func_2_search_backwards = {
  t_func_2_search_backwards, NULL, 3, 0,
  {}
};

static TAB_NUM t_func_2_search_for_whitespace[] = {
  1, // locals
  0, // parameters
  // dec &i
  var_dec, 1, var_443_6_i, 1, var_443_6_i,
  // i < 1
  var_std__less, 2, var_443_6_i, num_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_72, lambda_73, TAIL_CALL,
  POS(448, 7),
  POS(450, 9),
  POS(449, 7)
};

static FUNCTION_INFO i_func_2_search_for_whitespace = {
  t_func_2_search_for_whitespace, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_72[] = {
  0, // locals
  0, // parameters
  //  undefined undefined
  LET, 2, var_undefined, var_undefined, TAIL_CALL,
  POS(451, 11)
};

static FUNCTION_INFO i_lambda_72 = {
  t_lambda_72, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_73[] = {
  2, // locals
  0, // parameters
  // str(i).is_a_whitespace_character
  var_396_5_str, 1, var_443_6_i, 1, LOCAL(1),
  // is_a_whitespace_character
  var_is_a_whitespace_character, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_74, func_2_search_for_whitespace, TAIL_CALL,
  POS(454, 13),
  POS(454, 20),
  POS(453, 11)
};

static FUNCTION_INFO i_lambda_73 = {
  t_lambda_73, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_74[] = {
  0, // locals
  0, // parameters
  // !e i
  LET, 1, var_443_6_i, 1, var_444_6_e,
  // match_more_whitespace
  func_2_match_more_whitespace, 0, TAIL_CALL,
  POS(456, 15),
  POS(457, 15)
};

static FUNCTION_INFO i_lambda_74 = {
  t_lambda_74, NULL, 2, 0,
  {}
};

static TAB_NUM t_func_2_match_more_whitespace[] = {
  1, // locals
  0, // parameters
  // dec &i
  var_dec, 1, var_443_6_i, 1, var_443_6_i,
  // i < 1:
  var_std__less, 2, var_443_6_i, num_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_75, lambda_78, TAIL_CALL,
  POS(461, 7),
  POS(463, 9),
  POS(462, 7)
};

static FUNCTION_INFO i_func_2_match_more_whitespace = {
  t_func_2_match_more_whitespace, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_75[] = {
  1, // locals
  0, // parameters
  // inc &nth
  var_inc, 1, var_397_5_nth, 1, var_397_5_nth,
  // nth == 0
  var_std__equal, 2, var_397_5_nth, num_0, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_76, lambda_77, TAIL_CALL,
  POS(464, 11),
  POS(466, 13),
  POS(465, 11)
};

static FUNCTION_INFO i_lambda_75 = {
  t_lambda_75, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_76[] = {
  0, // locals
  0, // parameters
  //  1 e
  LET, 2, num_1, var_444_6_e, TAIL_CALL,
  POS(467, 15)
};

static FUNCTION_INFO i_lambda_76 = {
  t_lambda_76, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_77[] = {
  0, // locals
  0, // parameters
  //  undefined undefined
  LET, 2, var_undefined, var_undefined, TAIL_CALL,
  POS(468, 15)
};

static FUNCTION_INFO i_lambda_77 = {
  t_lambda_77, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_78[] = {
  2, // locals
  0, // parameters
  // str(i).is_a_whitespace_character
  var_396_5_str, 1, var_443_6_i, 1, LOCAL(1),
  // is_a_whitespace_character
  var_is_a_whitespace_character, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), func_2_match_more_whitespace, lambda_79, TAIL_CALL,
  POS(471, 13),
  POS(471, 20),
  POS(470, 11)
};

static FUNCTION_INFO i_lambda_78 = {
  t_lambda_78, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_79[] = {
  1, // locals
  0, // parameters
  // inc &nth
  var_inc, 1, var_397_5_nth, 1, var_397_5_nth,
  // nth == 0
  var_std__equal, 2, var_397_5_nth, num_0, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_80, func_2_search_for_whitespace, TAIL_CALL,
  POS(474, 15),
  POS(476, 17),
  POS(475, 15)
};

static FUNCTION_INFO i_lambda_79 = {
  t_lambda_79, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_80[] = {
  2, // locals
  0, // parameters
  // i+1 e-i
  var_std__plus, 2, var_443_6_i, num_1, 1, LOCAL(1),
  // e-i
  var_std__minus, 2, var_444_6_e, var_443_6_i, 1, LOCAL(2),
  //  i+1 e-i
  LET, 2, LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(477, 20),
  POS(477, 24),
  POS(477, 19)
};

static FUNCTION_INFO i_lambda_80 = {
  t_lambda_80, NULL, 3, 0,
  {}
};

static TAB_NUM t_func_std__many[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 488_5_expr
  // .expression_of expr)
  LET, -1, var_std_types__many, var_expression_of, LOCAL(2), LOCAL(1),
  // -> std_types::many(.expression_of expr)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(490, 22),
  POS(490, 3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_std__many = {
  t_func_std__many, NULL, 2, 1,
  {"488_5_expr\000"}
};

static TAB_NUM t_func_std_types__many___match[] = {
  3, // locals
  2, // parameters
  LOCAL(2), // 504_5_self
  var_505_5_str,
  // $rc result_count()
  var_result_count, 0, 1, LOCAL(3),
  // $expr expression_of(self)
  var_expression_of, 1, LOCAL(2), 1, var_508_4_expr,
  // rc == 1:
  var_std__equal, 2, LOCAL(3), num_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_81, lambda_91, TAIL_CALL,
  POS(507, 3),
  POS(508, 3),
  POS(510, 5),
  POS(509, 3),
  LOCAL(2),
  LOCAL(3)
};

static FUNCTION_INFO i_func_std_types__many___match = {
  t_func_std_types__many___match, NULL, 4, 2,
  {"504_5_self\000", "507_4_rc\000"}
};

static TAB_NUM t_lambda_81[] = {
  1, // locals
  0, // parameters
  // match $i expr str
  var_match, 2, var_508_4_expr, var_505_5_str, 1, var_511_14_i,
  // is_undefined
  var_is_undefined, 1, var_511_14_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_82, lambda_83, TAIL_CALL,
  POS(511, 7),
  POS(513, 11),
  POS(512, 7)
};

static FUNCTION_INFO i_lambda_81 = {
  t_lambda_81, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_82[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(514, 11)
};

static FUNCTION_INFO i_lambda_82 = {
  t_lambda_82, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_83[] = {
  1, // locals
  0, // parameters
  // i == 0
  var_std__equal, 2, var_511_14_i, num_0, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_84, lambda_85, TAIL_CALL,
  POS(517, 13),
  POS(516, 11)
};

static FUNCTION_INFO i_lambda_83 = {
  t_lambda_83, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_84[] = {
  0, // locals
  0, // parameters
  //  0
  LET, 1, num_0, TAIL_CALL,
  POS(518, 15)
};

static FUNCTION_INFO i_lambda_84 = {
  t_lambda_84, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_85[] = {
  0, // locals
  0, // parameters
  // !i i+1
  var_std__plus, 2, var_511_14_i, num_1, 1, var_511_14_i,
  // $n length_of(str)
  var_length_of, 1, var_505_5_str, 1, var_521_16_n,
  // loop:
  var_loop, 1, lambda_3_loop, TAIL_CALL,
  POS(520, 15),
  POS(521, 15),
  POS(522, 15)
};

static FUNCTION_INFO i_lambda_85 = {
  t_lambda_85, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_3_loop[] = {
  1, // locals
  0, // parameters
  // n
  var_std__less, 2, var_521_16_n, var_511_14_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_86, lambda_87, TAIL_CALL,
  POS(524, 23),
  POS(523, 17)
};

static FUNCTION_INFO i_lambda_3_loop = {
  t_lambda_3_loop, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_86[] = {
  0, // locals
  0, // parameters
  //  n
  LET, 1, var_521_16_n, TAIL_CALL,
  POS(525, 21)
};

static FUNCTION_INFO i_lambda_86 = {
  t_lambda_86, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_87[] = {
  2, // locals
  0, // parameters
  // range(str i n)
  var_range, 3, var_505_5_str, var_511_14_i, var_521_16_n, 1, LOCAL(1),
  // match $len expr range(str i n)
  var_match, 2, var_508_4_expr, LOCAL(1), 1, var_527_28_len,
  // is_undefined || len == 0
  var_is_undefined, 1, var_527_28_len, 1, LOCAL(1),
  // is_undefined || len == 0
  var_std__or, 2, LOCAL(1), lambda_88, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_89, lambda_90, TAIL_CALL,
  POS(527, 37),
  POS(527, 21),
  POS(529, 27),
  POS(529, 27),
  POS(528, 21)
};

static FUNCTION_INFO i_lambda_87 = {
  t_lambda_87, NULL, 5, 0,
  {}
};

static TAB_NUM t_lambda_88[] = {
  1, // locals
  0, // parameters
  // len == 0
  var_std__equal, 2, var_527_28_len, num_0, 1, LOCAL(1),
  // len == 0
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(529, 43),
  POS(529, 43)
};

static FUNCTION_INFO i_lambda_88 = {
  t_lambda_88, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_89[] = {
  1, // locals
  0, // parameters
  // i-1
  var_std__minus, 2, var_511_14_i, num_1, 1, LOCAL(1),
  //  i-1
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(530, 26),
  POS(530, 25)
};

static FUNCTION_INFO i_lambda_89 = {
  t_lambda_89, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_90[] = {
  0, // locals
  0, // parameters
  // plus &i len
  var_plus, 2, var_511_14_i, var_527_28_len, 1, var_511_14_i,
  // next
  var_next, 0, TAIL_CALL,
  POS(532, 25),
  POS(533, 25)
};

static FUNCTION_INFO i_lambda_90 = {
  t_lambda_90, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_91[] = {
  1, // locals
  0, // parameters
  // $captured_items empty_list
  LET, 1, var_empty_list, 1, var_535_8_captured_items,
  // match $i expr str $captured_item
  var_match, 2, var_508_4_expr, var_505_5_str, 2, var_536_14_i, var_536_26_captured_item,
  // is_undefined
  var_is_undefined, 1, var_536_14_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_92, lambda_93, TAIL_CALL,
  POS(535, 7),
  POS(536, 7),
  POS(538, 11),
  POS(537, 7)
};

static FUNCTION_INFO i_lambda_91 = {
  t_lambda_91, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_92[] = {
  0, // locals
  0, // parameters
  //  undefined undefined
  LET, 2, var_undefined, var_undefined, TAIL_CALL,
  POS(539, 11)
};

static FUNCTION_INFO i_lambda_92 = {
  t_lambda_92, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_93[] = {
  1, // locals
  0, // parameters
  // i == 0
  var_std__equal, 2, var_536_14_i, num_0, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_94, lambda_95, TAIL_CALL,
  POS(542, 13),
  POS(541, 11)
};

static FUNCTION_INFO i_lambda_93 = {
  t_lambda_93, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_94[] = {
  0, // locals
  0, // parameters
  //  0 undefined
  LET, 2, num_0, var_undefined, TAIL_CALL,
  POS(543, 15)
};

static FUNCTION_INFO i_lambda_94 = {
  t_lambda_94, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_95[] = {
  1, // locals
  0, // parameters
  // is_defined &captured_items
  var_is_defined, 1, var_536_26_captured_item, 1, LOCAL(1),
  // update_if captured_item.is_defined &captured_items
  var_update_if, 3, LOCAL(1), var_535_8_captured_items, lambda_96, 1, var_535_8_captured_items,
  // !i i+1
  var_std__plus, 2, var_536_14_i, num_1, 1, var_536_14_i,
  // $n length_of(str)
  var_length_of, 1, var_505_5_str, 1, var_548_16_n,
  // loop:
  var_loop, 1, lambda_4_loop, TAIL_CALL,
  POS(545, 39),
  POS(545, 15),
  POS(547, 15),
  POS(548, 15),
  POS(549, 15)
};

static FUNCTION_INFO i_lambda_95 = {
  t_lambda_95, NULL, 5, 0,
  {}
};

static TAB_NUM t_lambda_96[] = {
  1, // locals
  0, // parameters
  // list(captured_item)
  var_list, 1, var_536_26_captured_item, 1, LOCAL(1),
  //  list(captured_item)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(546, 20),
  POS(546, 19)
};

static FUNCTION_INFO i_lambda_96 = {
  t_lambda_96, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_4_loop[] = {
  1, // locals
  0, // parameters
  // n
  var_std__less, 2, var_548_16_n, var_536_14_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_97, lambda_98, TAIL_CALL,
  POS(551, 23),
  POS(550, 17)
};

static FUNCTION_INFO i_lambda_4_loop = {
  t_lambda_4_loop, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_97[] = {
  0, // locals
  0, // parameters
  //  n captured_items
  LET, 2, var_548_16_n, var_535_8_captured_items, TAIL_CALL,
  POS(552, 21)
};

static FUNCTION_INFO i_lambda_97 = {
  t_lambda_97, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_98[] = {
  2, // locals
  0, // parameters
  // range(str i n) !captured_item
  var_range, 3, var_505_5_str, var_536_14_i, var_548_16_n, 1, LOCAL(1),
  // match $len expr range(str i n) !captured_item
  var_match, 2, var_508_4_expr, LOCAL(1), 2, var_554_28_len, var_536_26_captured_item,
  // is_undefined || len == 0
  var_is_undefined, 1, var_554_28_len, 1, LOCAL(1),
  // is_undefined || len == 0
  var_std__or, 2, LOCAL(1), lambda_99, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_100, lambda_101, TAIL_CALL,
  POS(554, 37),
  POS(554, 21),
  POS(556, 27),
  POS(556, 27),
  POS(555, 21)
};

static FUNCTION_INFO i_lambda_98 = {
  t_lambda_98, NULL, 5, 0,
  {}
};

static TAB_NUM t_lambda_99[] = {
  1, // locals
  0, // parameters
  // len == 0
  var_std__equal, 2, var_554_28_len, num_0, 1, LOCAL(1),
  // len == 0
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(556, 43),
  POS(556, 43)
};

static FUNCTION_INFO i_lambda_99 = {
  t_lambda_99, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_100[] = {
  1, // locals
  0, // parameters
  // i-1 captured_items
  var_std__minus, 2, var_536_14_i, num_1, 1, LOCAL(1),
  //  i-1 captured_items
  LET, 2, LOCAL(1), var_535_8_captured_items, TAIL_CALL,
  POS(557, 26),
  POS(557, 25)
};

static FUNCTION_INFO i_lambda_100 = {
  t_lambda_100, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_101[] = {
  1, // locals
  0, // parameters
  // plus &i len
  var_plus, 2, var_536_14_i, var_554_28_len, 1, var_536_14_i,
  // is_defined:
  var_is_defined, 1, var_536_26_captured_item, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_captured_item_is_defined, var_next, TAIL_CALL,
  POS(559, 25),
  POS(561, 41),
  POS(560, 25)
};

static FUNCTION_INFO i_lambda_101 = {
  t_lambda_101, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_captured_item_is_defined[] = {
  0, // locals
  0, // parameters
  // push &captured_items captured_item
  var_push, 2, var_535_8_captured_items, var_536_26_captured_item, 1, var_535_8_captured_items,
  // next
  var_next, 0, TAIL_CALL,
  POS(562, 29),
  POS(563, 29)
};

static FUNCTION_INFO i_lambda_captured_item_is_defined = {
  t_lambda_captured_item_is_defined, NULL, 2, 0,
  {}
};

static TAB_NUM t_func_std_types__many___match_back[] = {
  3, // locals
  2, // parameters
  LOCAL(3), // 578_5_self
  var_579_5_str,
  // $expr expression_of(self)
  var_expression_of, 1, LOCAL(3), 1, var_581_4_expr,
  // match_back $i expr str
  var_match_back, 2, var_581_4_expr, var_579_5_str, 1, var_582_15_i,
  // is_undefined || i == 0
  var_is_undefined, 1, var_582_15_i, 1, LOCAL(1),
  // is_undefined || i == 0
  var_std__or, 2, LOCAL(1), lambda_102, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_103, lambda_104, TAIL_CALL,
  POS(581, 3),
  POS(582, 3),
  POS(584, 7),
  POS(584, 7),
  POS(583, 3),
  LOCAL(3)
};

static FUNCTION_INFO i_func_std_types__many___match_back = {
  t_func_std_types__many___match_back, NULL, 5, 1,
  {"578_5_self\000"}
};

static TAB_NUM t_lambda_102[] = {
  1, // locals
  0, // parameters
  // i == 0
  var_std__equal, 2, var_582_15_i, num_0, 1, LOCAL(1),
  // i == 0
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(584, 23),
  POS(584, 23)
};

static FUNCTION_INFO i_lambda_102 = {
  t_lambda_102, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_103[] = {
  0, // locals
  0, // parameters
  //  i
  LET, 1, var_582_15_i, TAIL_CALL,
  POS(585, 7)
};

static FUNCTION_INFO i_lambda_103 = {
  t_lambda_103, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_104[] = {
  0, // locals
  0, // parameters
  // $n length_of(str)
  var_length_of, 1, var_579_5_str, 1, var_587_8_n,
  // !i n-i
  var_std__minus, 2, var_587_8_n, var_582_15_i, 1, var_582_15_i,
  // loop:
  var_loop, 1, lambda_5_loop, TAIL_CALL,
  POS(587, 7),
  POS(588, 7),
  POS(589, 7)
};

static FUNCTION_INFO i_lambda_104 = {
  t_lambda_104, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_5_loop[] = {
  1, // locals
  0, // parameters
  // i < 1
  var_std__less, 2, var_582_15_i, num_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_105, lambda_106, TAIL_CALL,
  POS(591, 11),
  POS(590, 9)
};

static FUNCTION_INFO i_lambda_5_loop = {
  t_lambda_5_loop, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_105[] = {
  0, // locals
  0, // parameters
  //  n
  LET, 1, var_587_8_n, TAIL_CALL,
  POS(592, 13)
};

static FUNCTION_INFO i_lambda_105 = {
  t_lambda_105, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_106[] = {
  2, // locals
  0, // parameters
  // range(str 1 i)
  var_range, 3, var_579_5_str, num_1, var_582_15_i, 1, LOCAL(1),
  // match_back $len expr range(str 1 i)
  var_match_back, 2, var_581_4_expr, LOCAL(1), 1, var_594_25_len,
  // is_undefined || len == 0
  var_is_undefined, 1, var_594_25_len, 1, LOCAL(1),
  // is_undefined || len == 0
  var_std__or, 2, LOCAL(1), lambda_107, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_108, lambda_109, TAIL_CALL,
  POS(594, 34),
  POS(594, 13),
  POS(596, 19),
  POS(596, 19),
  POS(595, 13)
};

static FUNCTION_INFO i_lambda_106 = {
  t_lambda_106, NULL, 5, 0,
  {}
};

static TAB_NUM t_lambda_107[] = {
  1, // locals
  0, // parameters
  // len == 0
  var_std__equal, 2, var_594_25_len, num_0, 1, LOCAL(1),
  // len == 0
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(596, 35),
  POS(596, 35)
};

static FUNCTION_INFO i_lambda_107 = {
  t_lambda_107, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_108[] = {
  1, // locals
  0, // parameters
  // n-i
  var_std__minus, 2, var_587_8_n, var_582_15_i, 1, LOCAL(1),
  //  n-i
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(597, 18),
  POS(597, 17)
};

static FUNCTION_INFO i_lambda_108 = {
  t_lambda_108, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_109[] = {
  0, // locals
  0, // parameters
  // minus &i len
  var_minus, 2, var_582_15_i, var_594_25_len, 1, var_582_15_i,
  // next
  var_next, 0, TAIL_CALL,
  POS(599, 17),
  POS(600, 17)
};

static FUNCTION_INFO i_lambda_109 = {
  t_lambda_109, NULL, 2, 0,
  {}
};

static TAB_NUM t_func_std_types__many___search[] = {
  2, // locals
  -3, // parameters
  MANDATORY_PARAMETER, LOCAL(2), // 615_5_self
  MANDATORY_PARAMETER, var_616_5_str,
  num_1, var_617_5_nth,
  // $expr expression_of(self)
  var_expression_of, 1, LOCAL(2), 1, var_619_4_expr,
  // $n length_of(str)
  var_length_of, 1, var_616_5_str, 1, var_620_4_n,
  // nth < 0
  var_std__less, 2, var_617_5_nth, num_0, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), func_3_search_backwards, func_3_search_forwards, TAIL_CALL,
  POS(619, 3),
  POS(620, 3),
  POS(622, 5),
  POS(621, 3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_std_types__many___search = {
  t_func_std_types__many___search, NULL, 4, 1,
  {"615_5_self\000"}
};

static TAB_NUM t_func_3_search_forwards[] = {
  0, // locals
  0, // parameters
  // $i 1
  LET, 1, num_1, 1, var_627_6_i,
  // search_next
  func_search_next, 0, TAIL_CALL,
  POS(627, 5),
  POS(628, 5)
};

static FUNCTION_INFO i_func_3_search_forwards = {
  t_func_3_search_forwards, NULL, 2, 0,
  {}
};

static TAB_NUM t_func_search_next[] = {
  2, // locals
  0, // parameters
  // n+1
  var_std__plus, 2, var_620_4_n, num_1, 1, LOCAL(1),
  // n+1
  var_std__less, 2, LOCAL(1), var_627_6_i, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_110, lambda_111, TAIL_CALL,
  POS(632, 13),
  POS(632, 13),
  POS(631, 7)
};

static FUNCTION_INFO i_func_search_next = {
  t_func_search_next, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_110[] = {
  0, // locals
  0, // parameters
  //  undefined undefined
  LET, 2, var_undefined, var_undefined, TAIL_CALL,
  POS(633, 11)
};

static FUNCTION_INFO i_lambda_110 = {
  t_lambda_110, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_111[] = {
  1, // locals
  0, // parameters
  // range(str i n) 1 $pos $len
  var_range, 3, var_616_5_str, var_627_6_i, var_620_4_n, 1, LOCAL(1),
  // search expr range(str i n) 1 $pos $len
  var_search, 3, var_619_4_expr, LOCAL(1), num_1, 2, var_635_41_pos, var_635_46_len,
  // is_undefined
  var_is_undefined, 1, var_635_41_pos, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_112, lambda_113, TAIL_CALL,
  POS(635, 23),
  POS(635, 11),
  POS(637, 17),
  POS(636, 11)
};

static FUNCTION_INFO i_lambda_111 = {
  t_lambda_111, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_112[] = {
  0, // locals
  0, // parameters
  //  undefined undefined
  LET, 2, var_undefined, var_undefined, TAIL_CALL,
  POS(638, 15)
};

static FUNCTION_INFO i_lambda_112 = {
  t_lambda_112, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_113[] = {
  1, // locals
  0, // parameters
  // i+pos-1
  var_std__plus, 2, var_627_6_i, var_635_41_pos, 1, LOCAL(1),
  // !i i+pos-1
  var_std__minus, 2, LOCAL(1), num_1, 1, var_627_6_i,
  // dec &nth
  var_dec, 1, var_617_5_nth, 1, var_617_5_nth,
  // len == 0:
  var_std__equal, 2, var_635_46_len, num_0, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_114, lambda_117, TAIL_CALL,
  POS(640, 18),
  POS(640, 15),
  POS(641, 15),
  POS(643, 17),
  POS(642, 15)
};

static FUNCTION_INFO i_lambda_113 = {
  t_lambda_113, NULL, 5, 0,
  {}
};

static TAB_NUM t_lambda_114[] = {
  1, // locals
  0, // parameters
  // nth < 1
  var_std__less, 2, var_617_5_nth, num_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_115, lambda_116, TAIL_CALL,
  POS(645, 21),
  POS(644, 19)
};

static FUNCTION_INFO i_lambda_114 = {
  t_lambda_114, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_115[] = {
  0, // locals
  0, // parameters
  //  i 0
  LET, 2, var_627_6_i, num_0, TAIL_CALL,
  POS(646, 23)
};

static FUNCTION_INFO i_lambda_115 = {
  t_lambda_115, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_116[] = {
  0, // locals
  0, // parameters
  // inc &i
  var_inc, 1, var_627_6_i, 1, var_627_6_i,
  // search_next
  func_search_next, 0, TAIL_CALL,
  POS(648, 23),
  POS(649, 23)
};

static FUNCTION_INFO i_lambda_116 = {
  t_lambda_116, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_117[] = {
  0, // locals
  0, // parameters
  // $s i
  LET, 1, var_627_6_i, 1, var_651_20_s,
  // loop:
  var_loop, 1, lambda_6_loop, TAIL_CALL,
  POS(651, 19),
  POS(652, 19)
};

static FUNCTION_INFO i_lambda_117 = {
  t_lambda_117, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_6_loop[] = {
  2, // locals
  0, // parameters
  // plus &i len
  var_plus, 2, var_627_6_i, var_635_46_len, 1, var_627_6_i,
  // range(str i n) !len
  var_range, 3, var_616_5_str, var_627_6_i, var_620_4_n, 1, LOCAL(1),
  // match expr range(str i n) !len
  var_match, 2, var_619_4_expr, LOCAL(1), 1, var_635_46_len,
  // is_undefined || len == 0:
  var_is_undefined, 1, var_635_46_len, 1, LOCAL(1),
  // is_undefined || len == 0:
  var_std__or, 2, LOCAL(1), lambda_118, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_119, var_next, TAIL_CALL,
  POS(653, 21),
  POS(654, 32),
  POS(654, 21),
  POS(656, 27),
  POS(656, 27),
  POS(655, 21)
};

static FUNCTION_INFO i_lambda_6_loop = {
  t_lambda_6_loop, NULL, 6, 0,
  {}
};

static TAB_NUM t_lambda_118[] = {
  1, // locals
  0, // parameters
  // len == 0:
  var_std__equal, 2, var_635_46_len, num_0, 1, LOCAL(1),
  // len == 0:
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(656, 43),
  POS(656, 43)
};

static FUNCTION_INFO i_lambda_118 = {
  t_lambda_118, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_119[] = {
  1, // locals
  0, // parameters
  // nth < 1
  var_std__less, 2, var_617_5_nth, num_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_120, lambda_121, TAIL_CALL,
  POS(658, 27),
  POS(657, 25)
};

static FUNCTION_INFO i_lambda_119 = {
  t_lambda_119, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_120[] = {
  1, // locals
  0, // parameters
  // i-s
  var_std__minus, 2, var_627_6_i, var_651_20_s, 1, LOCAL(1),
  //  s i-s
  LET, 2, var_651_20_s, LOCAL(1), TAIL_CALL,
  POS(659, 32),
  POS(659, 29)
};

static FUNCTION_INFO i_lambda_120 = {
  t_lambda_120, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_121[] = {
  0, // locals
  0, // parameters
  // inc &i
  var_inc, 1, var_627_6_i, 1, var_627_6_i,
  // search_next
  func_search_next, 0, TAIL_CALL,
  POS(661, 29),
  POS(662, 29)
};

static FUNCTION_INFO i_lambda_121 = {
  t_lambda_121, NULL, 2, 0,
  {}
};

static TAB_NUM t_func_3_search_backwards[] = {
  0, // locals
  0, // parameters
  // $i n
  LET, 1, var_620_4_n, 1, var_666_6_i,
  // search_next
  func_2_search_next, 0, TAIL_CALL,
  POS(666, 5),
  POS(667, 5)
};

static FUNCTION_INFO i_func_3_search_backwards = {
  t_func_3_search_backwards, NULL, 2, 0,
  {}
};

static TAB_NUM t_func_2_search_next[] = {
  1, // locals
  0, // parameters
  // i < 1
  var_std__less, 2, var_666_6_i, num_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_122, lambda_123, TAIL_CALL,
  POS(671, 9),
  POS(670, 7)
};

static FUNCTION_INFO i_func_2_search_next = {
  t_func_2_search_next, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_122[] = {
  0, // locals
  0, // parameters
  //  undefined undefined
  LET, 2, var_undefined, var_undefined, TAIL_CALL,
  POS(672, 11)
};

static FUNCTION_INFO i_lambda_122 = {
  t_lambda_122, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_123[] = {
  1, // locals
  0, // parameters
  // range(str 1 i) -1 !i $len
  var_range, 3, var_616_5_str, num_1, var_666_6_i, 1, LOCAL(1),
  // search expr range(str 1 i) -1 !i $len
  var_search, 3, var_619_4_expr, LOCAL(1), minus_num_1, 2, var_666_6_i, var_674_45_len,
  // is_undefined
  var_is_undefined, 1, var_666_6_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_124, lambda_125, TAIL_CALL,
  POS(674, 23),
  POS(674, 11),
  POS(676, 15),
  POS(675, 11)
};

static FUNCTION_INFO i_lambda_123 = {
  t_lambda_123, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_124[] = {
  0, // locals
  0, // parameters
  //  undefined undefined
  LET, 2, var_undefined, var_undefined, TAIL_CALL,
  POS(677, 15)
};

static FUNCTION_INFO i_lambda_124 = {
  t_lambda_124, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_125[] = {
  1, // locals
  0, // parameters
  // inc &nth
  var_inc, 1, var_617_5_nth, 1, var_617_5_nth,
  // len == 0:
  var_std__equal, 2, var_674_45_len, num_0, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_126, lambda_129, TAIL_CALL,
  POS(679, 15),
  POS(681, 17),
  POS(680, 15)
};

static FUNCTION_INFO i_lambda_125 = {
  t_lambda_125, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_126[] = {
  2, // locals
  0, // parameters
  // nth >= 0
  var_std__less, 2, var_617_5_nth, num_0, 1, LOCAL(1),
  // nth >= 0
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_127, lambda_128, TAIL_CALL,
  POS(683, 21),
  POS(683, 21),
  POS(682, 19)
};

static FUNCTION_INFO i_lambda_126 = {
  t_lambda_126, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_127[] = {
  2, // locals
  0, // parameters
  // n-i+1
  var_std__minus, 2, var_620_4_n, var_666_6_i, 1, LOCAL(1),
  // n-i+1
  var_std__plus, 2, LOCAL(1), num_1, 1, LOCAL(2),
  //  i n-i+1
  LET, 2, var_666_6_i, LOCAL(2), TAIL_CALL,
  POS(684, 26),
  POS(684, 26),
  POS(684, 23)
};

static FUNCTION_INFO i_lambda_127 = {
  t_lambda_127, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_128[] = {
  0, // locals
  0, // parameters
  // dec &i
  var_dec, 1, var_666_6_i, 1, var_666_6_i,
  // search_next
  func_2_search_next, 0, TAIL_CALL,
  POS(686, 23),
  POS(687, 23)
};

static FUNCTION_INFO i_lambda_128 = {
  t_lambda_128, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_129[] = {
  0, // locals
  0, // parameters
  // dec &i
  var_dec, 1, var_666_6_i, 1, var_666_6_i,
  // $e i+len
  var_std__plus, 2, var_666_6_i, var_674_45_len, 1, var_690_20_e,
  // loop:
  var_loop, 1, lambda_7_loop, TAIL_CALL,
  POS(689, 19),
  POS(690, 19),
  POS(691, 19)
};

static FUNCTION_INFO i_lambda_129 = {
  t_lambda_129, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_7_loop[] = {
  2, // locals
  0, // parameters
  // range(str 1 i) !len
  var_range, 3, var_616_5_str, num_1, var_666_6_i, 1, LOCAL(1),
  // match_back expr range(str 1 i) !len
  var_match_back, 2, var_619_4_expr, LOCAL(1), 1, var_674_45_len,
  // is_undefined || len == 0:
  var_is_undefined, 1, var_674_45_len, 1, LOCAL(1),
  // is_undefined || len == 0:
  var_std__or, 2, LOCAL(1), lambda_130, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_131, lambda_134, TAIL_CALL,
  POS(692, 37),
  POS(692, 21),
  POS(694, 27),
  POS(694, 27),
  POS(693, 21)
};

static FUNCTION_INFO i_lambda_7_loop = {
  t_lambda_7_loop, NULL, 5, 0,
  {}
};

static TAB_NUM t_lambda_130[] = {
  1, // locals
  0, // parameters
  // len == 0:
  var_std__equal, 2, var_674_45_len, num_0, 1, LOCAL(1),
  // len == 0:
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(694, 43),
  POS(694, 43)
};

static FUNCTION_INFO i_lambda_130 = {
  t_lambda_130, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_131[] = {
  2, // locals
  0, // parameters
  // nth >= 0
  var_std__less, 2, var_617_5_nth, num_0, 1, LOCAL(1),
  // nth >= 0
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_132, lambda_133, TAIL_CALL,
  POS(696, 27),
  POS(696, 27),
  POS(695, 25)
};

static FUNCTION_INFO i_lambda_131 = {
  t_lambda_131, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_132[] = {
  2, // locals
  0, // parameters
  // i+1 e-i
  var_std__plus, 2, var_666_6_i, num_1, 1, LOCAL(1),
  // e-i
  var_std__minus, 2, var_690_20_e, var_666_6_i, 1, LOCAL(2),
  //  i+1 e-i
  LET, 2, LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(697, 30),
  POS(697, 34),
  POS(697, 29)
};

static FUNCTION_INFO i_lambda_132 = {
  t_lambda_132, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_133[] = {
  0, // locals
  0, // parameters
  // dec &i
  var_dec, 1, var_666_6_i, 1, var_666_6_i,
  // search_next
  func_2_search_next, 0, TAIL_CALL,
  POS(699, 29),
  POS(700, 29)
};

static FUNCTION_INFO i_lambda_133 = {
  t_lambda_133, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_134[] = {
  0, // locals
  0, // parameters
  // minus &i len
  var_minus, 2, var_666_6_i, var_674_45_len, 1, var_666_6_i,
  // next
  var_next, 0, TAIL_CALL,
  POS(702, 25),
  POS(703, 25)
};

static FUNCTION_INFO i_lambda_134 = {
  t_lambda_134, NULL, 2, 0,
  {}
};

static TAB_NUM t_func_std__some[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 710_5_expr
  // .expression_of expr)
  LET, -1, var_std_types__some, var_expression_of, LOCAL(2), LOCAL(1),
  // -> std_types::some(.expression_of expr)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(712, 22),
  POS(712, 3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_std__some = {
  t_func_std__some, NULL, 2, 1,
  {"710_5_expr\000"}
};

static TAB_NUM t_func_std_types__some___match[] = {
  3, // locals
  2, // parameters
  LOCAL(2), // 738_5_self
  var_739_5_str,
  // $rc result_count()
  var_result_count, 0, 1, LOCAL(3),
  // $expr expression_of(self)
  var_expression_of, 1, LOCAL(2), 1, var_742_4_expr,
  // $i 1
  LET, 1, num_1, 1, var_743_4_i,
  // rc == 1:
  var_std__equal, 2, LOCAL(3), num_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_135, lambda_139, TAIL_CALL,
  POS(741, 3),
  POS(742, 3),
  POS(743, 3),
  POS(745, 5),
  POS(744, 3),
  LOCAL(3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_std_types__some___match = {
  t_func_std_types__some___match, NULL, 5, 2,
  {"741_4_rc\000", "738_5_self\000"}
};

static TAB_NUM t_lambda_135[] = {
  0, // locals
  0, // parameters
  // loop:
  var_loop, 1, lambda_8_loop, TAIL_CALL,
  POS(746, 7)
};

static FUNCTION_INFO i_lambda_135 = {
  t_lambda_135, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_8_loop[] = {
  2, // locals
  0, // parameters
  // range(str i -1)
  var_range, 3, var_739_5_str, var_743_4_i, minus_num_1, 1, LOCAL(1),
  // match $len expr range(str i -1)
  var_match, 2, var_742_4_expr, LOCAL(1), 1, var_747_16_len,
  // is_undefined || len == 0
  var_is_undefined, 1, var_747_16_len, 1, LOCAL(1),
  // is_undefined || len == 0
  var_std__or, 2, LOCAL(1), lambda_136, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_137, lambda_138, TAIL_CALL,
  POS(747, 25),
  POS(747, 9),
  POS(749, 15),
  POS(749, 15),
  POS(748, 9)
};

static FUNCTION_INFO i_lambda_8_loop = {
  t_lambda_8_loop, NULL, 5, 0,
  {}
};

static TAB_NUM t_lambda_136[] = {
  1, // locals
  0, // parameters
  // len == 0
  var_std__equal, 2, var_747_16_len, num_0, 1, LOCAL(1),
  // len == 0
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(749, 31),
  POS(749, 31)
};

static FUNCTION_INFO i_lambda_136 = {
  t_lambda_136, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_137[] = {
  1, // locals
  0, // parameters
  // i-1
  var_std__minus, 2, var_743_4_i, num_1, 1, LOCAL(1),
  //  i-1
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(750, 14),
  POS(750, 13)
};

static FUNCTION_INFO i_lambda_137 = {
  t_lambda_137, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_138[] = {
  0, // locals
  0, // parameters
  // plus &i len
  var_plus, 2, var_743_4_i, var_747_16_len, 1, var_743_4_i,
  // next
  var_next, 0, TAIL_CALL,
  POS(752, 13),
  POS(753, 13)
};

static FUNCTION_INFO i_lambda_138 = {
  t_lambda_138, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_139[] = {
  0, // locals
  0, // parameters
  // $captured_items empty_list
  LET, 1, var_empty_list, 1, var_755_8_captured_items,
  // loop:
  var_loop, 1, lambda_9_loop, TAIL_CALL,
  POS(755, 7),
  POS(756, 7)
};

static FUNCTION_INFO i_lambda_139 = {
  t_lambda_139, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_9_loop[] = {
  2, // locals
  0, // parameters
  // range(str i -1)
  var_range, 3, var_739_5_str, var_743_4_i, minus_num_1, 1, LOCAL(1),
  // match $len $captured_item expr range(str i -1)
  var_match, 2, var_742_4_expr, LOCAL(1), 2, var_757_16_len, var_757_21_captured_item,
  // is_undefined || len == 0
  var_is_undefined, 1, var_757_16_len, 1, LOCAL(1),
  // is_undefined || len == 0
  var_std__or, 2, LOCAL(1), lambda_140, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_141, lambda_142, TAIL_CALL,
  POS(757, 40),
  POS(757, 9),
  POS(759, 15),
  POS(759, 15),
  POS(758, 9)
};

static FUNCTION_INFO i_lambda_9_loop = {
  t_lambda_9_loop, NULL, 5, 0,
  {}
};

static TAB_NUM t_lambda_140[] = {
  1, // locals
  0, // parameters
  // len == 0
  var_std__equal, 2, var_757_16_len, num_0, 1, LOCAL(1),
  // len == 0
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(759, 31),
  POS(759, 31)
};

static FUNCTION_INFO i_lambda_140 = {
  t_lambda_140, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_141[] = {
  1, // locals
  0, // parameters
  // i-1 captured_items
  var_std__minus, 2, var_743_4_i, num_1, 1, LOCAL(1),
  //  i-1 captured_items
  LET, 2, LOCAL(1), var_755_8_captured_items, TAIL_CALL,
  POS(760, 14),
  POS(760, 13)
};

static FUNCTION_INFO i_lambda_141 = {
  t_lambda_141, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_142[] = {
  1, // locals
  0, // parameters
  // plus &i len
  var_plus, 2, var_743_4_i, var_757_16_len, 1, var_743_4_i,
  // is_defined:
  var_is_defined, 1, var_757_21_captured_item, 1, LOCAL(1),
  // if
  var_if, 2, LOCAL(1), lambda_2_captured_item_is_defined, 0,
  // next
  var_next, 0, TAIL_CALL,
  POS(762, 13),
  POS(764, 29),
  POS(763, 13),
  POS(767, 13)
};

static FUNCTION_INFO i_lambda_142 = {
  t_lambda_142, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_2_captured_item_is_defined[] = {
  0, // locals
  0, // parameters
  // push &captured_items captured_item
  var_push, 2, var_755_8_captured_items, var_757_21_captured_item, 1, var_755_8_captured_items,
  // next
  var_next, 0, TAIL_CALL,
  POS(765, 17),
  POS(766, 17)
};

static FUNCTION_INFO i_lambda_2_captured_item_is_defined = {
  t_lambda_2_captured_item_is_defined, NULL, 2, 0,
  {}
};

static TAB_NUM t_func_std_types__some___match_back[] = {
  3, // locals
  2, // parameters
  LOCAL(2), // 771_5_self
  var_772_5_str,
  // $rc result_count()
  var_result_count, 0, 1, LOCAL(3),
  // $expr expression_of(self)
  var_expression_of, 1, LOCAL(2), 1, var_775_4_expr,
  // $n length_of(str)
  var_length_of, 1, var_772_5_str, 1, var_776_4_n,
  // $i n
  LET, 1, var_776_4_n, 1, var_777_4_i,
  // rc == 1:
  var_std__equal, 2, LOCAL(3), num_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_143, lambda_147, TAIL_CALL,
  POS(774, 3),
  POS(775, 3),
  POS(776, 3),
  POS(777, 3),
  POS(779, 5),
  POS(778, 3),
  LOCAL(2),
  LOCAL(3)
};

static FUNCTION_INFO i_func_std_types__some___match_back = {
  t_func_std_types__some___match_back, NULL, 6, 2,
  {"771_5_self\000", "774_4_rc\000"}
};

static TAB_NUM t_lambda_143[] = {
  0, // locals
  0, // parameters
  // loop:
  var_loop, 1, lambda_10_loop, TAIL_CALL,
  POS(780, 7)
};

static FUNCTION_INFO i_lambda_143 = {
  t_lambda_143, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_10_loop[] = {
  2, // locals
  0, // parameters
  // range(str 1 i)
  var_range, 3, var_772_5_str, num_1, var_777_4_i, 1, LOCAL(1),
  // match_back $len expr range(str 1 i)
  var_match_back, 2, var_775_4_expr, LOCAL(1), 1, var_781_21_len,
  // is_undefined || len == 0
  var_is_undefined, 1, var_781_21_len, 1, LOCAL(1),
  // is_undefined || len == 0
  var_std__or, 2, LOCAL(1), lambda_144, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_145, lambda_146, TAIL_CALL,
  POS(781, 30),
  POS(781, 9),
  POS(783, 15),
  POS(783, 15),
  POS(782, 9)
};

static FUNCTION_INFO i_lambda_10_loop = {
  t_lambda_10_loop, NULL, 5, 0,
  {}
};

static TAB_NUM t_lambda_144[] = {
  1, // locals
  0, // parameters
  // len == 0
  var_std__equal, 2, var_781_21_len, num_0, 1, LOCAL(1),
  // len == 0
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(783, 31),
  POS(783, 31)
};

static FUNCTION_INFO i_lambda_144 = {
  t_lambda_144, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_145[] = {
  1, // locals
  0, // parameters
  // n-i
  var_std__minus, 2, var_776_4_n, var_777_4_i, 1, LOCAL(1),
  //  n-i
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(784, 14),
  POS(784, 13)
};

static FUNCTION_INFO i_lambda_145 = {
  t_lambda_145, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_146[] = {
  0, // locals
  0, // parameters
  // minus &i len
  var_minus, 2, var_777_4_i, var_781_21_len, 1, var_777_4_i,
  // next
  var_next, 0, TAIL_CALL,
  POS(786, 13),
  POS(787, 13)
};

static FUNCTION_INFO i_lambda_146 = {
  t_lambda_146, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_147[] = {
  0, // locals
  0, // parameters
  // $captured_items empty_list
  LET, 1, var_empty_list, 1, var_789_8_captured_items,
  // loop:
  var_loop, 1, lambda_11_loop, TAIL_CALL,
  POS(789, 7),
  POS(790, 7)
};

static FUNCTION_INFO i_lambda_147 = {
  t_lambda_147, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_11_loop[] = {
  2, // locals
  0, // parameters
  // range(str 1 i)
  var_range, 3, var_772_5_str, num_1, var_777_4_i, 1, LOCAL(1),
  // match_back $len $captured_item expr range(str 1 i)
  var_match_back, 2, var_775_4_expr, LOCAL(1), 2, var_791_21_len, var_791_26_captured_item,
  // is_undefined || len == 0
  var_is_undefined, 1, var_791_21_len, 1, LOCAL(1),
  // is_undefined || len == 0
  var_std__or, 2, LOCAL(1), lambda_148, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_149, lambda_150, TAIL_CALL,
  POS(791, 45),
  POS(791, 9),
  POS(793, 15),
  POS(793, 15),
  POS(792, 9)
};

static FUNCTION_INFO i_lambda_11_loop = {
  t_lambda_11_loop, NULL, 5, 0,
  {}
};

static TAB_NUM t_lambda_148[] = {
  1, // locals
  0, // parameters
  // len == 0
  var_std__equal, 2, var_791_21_len, num_0, 1, LOCAL(1),
  // len == 0
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(793, 31),
  POS(793, 31)
};

static FUNCTION_INFO i_lambda_148 = {
  t_lambda_148, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_149[] = {
  1, // locals
  0, // parameters
  // n-i captured_items
  var_std__minus, 2, var_776_4_n, var_777_4_i, 1, LOCAL(1),
  //  n-i captured_items
  LET, 2, LOCAL(1), var_789_8_captured_items, TAIL_CALL,
  POS(794, 14),
  POS(794, 13)
};

static FUNCTION_INFO i_lambda_149 = {
  t_lambda_149, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_150[] = {
  1, // locals
  0, // parameters
  // minus &i len
  var_minus, 2, var_777_4_i, var_791_21_len, 1, var_777_4_i,
  // is_defined:
  var_is_defined, 1, var_791_26_captured_item, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_3_captured_item_is_defined, var_next, TAIL_CALL,
  POS(796, 13),
  POS(798, 29),
  POS(797, 13)
};

static FUNCTION_INFO i_lambda_150 = {
  t_lambda_150, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_3_captured_item_is_defined[] = {
  0, // locals
  0, // parameters
  // put &captured_items captured_item
  var_put, 2, var_789_8_captured_items, var_791_26_captured_item, 1, var_789_8_captured_items,
  // next
  var_next, 0, TAIL_CALL,
  POS(799, 17),
  POS(800, 17)
};

static FUNCTION_INFO i_lambda_3_captured_item_is_defined = {
  t_lambda_3_captured_item_is_defined, NULL, 2, 0,
  {}
};

static TAB_NUM t_func_std__optional[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 808_5_expr
  // .expression_of expr)
  LET, -1, var_std_types__optional, var_expression_of, LOCAL(2), LOCAL(1),
  // -> std_types::optional(.expression_of expr)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(810, 26),
  POS(810, 3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_std__optional = {
  t_func_std__optional, NULL, 2, 1,
  {"808_5_expr\000"}
};

static TAB_NUM t_func_std_types__optional___match[] = {
  3, // locals
  2, // parameters
  LOCAL(2), // 814_5_self
  var_815_5_str,
  // $rc result_count()
  var_result_count, 0, 1, LOCAL(3),
  // $expr expression_of(self)
  var_expression_of, 1, LOCAL(2), 1, var_818_4_expr,
  // rc == 1:
  var_std__equal, 2, LOCAL(3), num_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_151, lambda_154, TAIL_CALL,
  POS(817, 3),
  POS(818, 3),
  POS(820, 5),
  POS(819, 3),
  LOCAL(2),
  LOCAL(3)
};

static FUNCTION_INFO i_func_std_types__optional___match = {
  t_func_std_types__optional___match, NULL, 4, 2,
  {"814_5_self\000", "817_4_rc\000"}
};

static TAB_NUM t_lambda_151[] = {
  1, // locals
  0, // parameters
  // match $i expr str
  var_match, 2, var_818_4_expr, var_815_5_str, 1, var_821_14_i,
  // is_undefined
  var_is_undefined, 1, var_821_14_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_152, lambda_153, TAIL_CALL,
  POS(821, 7),
  POS(823, 11),
  POS(822, 7)
};

static FUNCTION_INFO i_lambda_151 = {
  t_lambda_151, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_152[] = {
  0, // locals
  0, // parameters
  //  0
  LET, 1, num_0, TAIL_CALL,
  POS(824, 11)
};

static FUNCTION_INFO i_lambda_152 = {
  t_lambda_152, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_153[] = {
  0, // locals
  0, // parameters
  //  i
  LET, 1, var_821_14_i, TAIL_CALL,
  POS(825, 11)
};

static FUNCTION_INFO i_lambda_153 = {
  t_lambda_153, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_154[] = {
  1, // locals
  0, // parameters
  // match $i expr str $captured_item
  var_match, 2, var_818_4_expr, var_815_5_str, 2, var_827_14_i, var_827_26_captured_item,
  // is_undefined
  var_is_undefined, 1, var_827_14_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_155, lambda_156, TAIL_CALL,
  POS(827, 7),
  POS(829, 11),
  POS(828, 7)
};

static FUNCTION_INFO i_lambda_154 = {
  t_lambda_154, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_155[] = {
  0, // locals
  0, // parameters
  //  0 undefined
  LET, 2, num_0, var_undefined, TAIL_CALL,
  POS(830, 11)
};

static FUNCTION_INFO i_lambda_155 = {
  t_lambda_155, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_156[] = {
  0, // locals
  0, // parameters
  //  i captured_item
  LET, 2, var_827_14_i, var_827_26_captured_item, TAIL_CALL,
  POS(831, 11)
};

static FUNCTION_INFO i_lambda_156 = {
  t_lambda_156, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_std_types__anything___match[] = {
  2, // locals
  2, // parameters
  LOCAL(1),
  LOCAL(2), // 850_5_str
  // length_of(str)
  var_length_of, 1, LOCAL(2), 1, LOCAL(1),
  // -> length_of(str)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(852, 6),
  POS(852, 3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_std_types__anything___match = {
  t_func_std_types__anything___match, NULL, 2, 1,
  {"850_5_str\000"}
};

static TAB_NUM t_func_std_types__anything___match_back[] = {
  2, // locals
  2, // parameters
  LOCAL(1),
  LOCAL(2), // 857_5_str
  // length_of(str)
  var_length_of, 1, LOCAL(2), 1, LOCAL(1),
  // -> length_of(str)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(859, 6),
  POS(859, 3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_std_types__anything___match_back = {
  t_func_std_types__anything___match_back, NULL, 2, 1,
  {"857_5_str\000"}
};

static TAB_NUM t_func_std_types__anything___search[] = {
  2, // locals
  -3, // parameters
  MANDATORY_PARAMETER, LOCAL(1),
  MANDATORY_PARAMETER, LOCAL(2), // 864_5_str
  num_1, LOCAL(1),
  // length_of(str)
  var_length_of, 1, LOCAL(2), 1, LOCAL(1),
  // -> 1 length_of(str)
  LET, 2, num_1, LOCAL(1), TAIL_CALL,
  POS(867, 8),
  POS(867, 3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_std_types__anything___search = {
  t_func_std_types__anything___search, NULL, 2, 1,
  {"864_5_str\000"}
};

static TAB_NUM t_func_std__any_character_but[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 874_5_expr
  // .expression_of expr)
  LET, -1, var_std_types__any_character_but, var_expression_of, LOCAL(2), LOCAL(1),
  // -> std_types::any_character_but(.expression_of expr)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(876, 35),
  POS(876, 3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_std__any_character_but = {
  t_func_std__any_character_but, NULL, 2, 1,
  {"874_5_expr\000"}
};

static TAB_NUM t_func_std_types__any_character_but___match[] = {
  5, // locals
  2, // parameters
  LOCAL(2), // 880_5_self
  LOCAL(3), // 881_5_str
  // $expr expression_of(self)
  var_expression_of, 1, LOCAL(2), 1, LOCAL(4),
  // match $i expr str
  var_match, 2, LOCAL(4), LOCAL(3), 1, LOCAL(5),
  // is_undefined
  var_is_undefined, 1, LOCAL(5), 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_157, lambda_158, TAIL_CALL,
  POS(883, 3),
  POS(884, 3),
  POS(886, 7),
  POS(885, 3),
  LOCAL(5),
  LOCAL(4),
  LOCAL(2),
  LOCAL(3)
};

static FUNCTION_INFO i_func_std_types__any_character_but___match = {
  t_func_std_types__any_character_but___match, NULL, 4, 4,
  {"884_10_i\000", "883_4_expr\000", "880_5_self\000", "881_5_str\000"}
};

static TAB_NUM t_lambda_157[] = {
  0, // locals
  0, // parameters
  //  1
  LET, 1, num_1, TAIL_CALL,
  POS(887, 7)
};

static FUNCTION_INFO i_lambda_157 = {
  t_lambda_157, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_158[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(888, 7)
};

static FUNCTION_INFO i_lambda_158 = {
  t_lambda_158, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_std__capture[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 895_5_expr
  // .expression_of expr)
  LET, -1, var_std_types__capture, var_expression_of, LOCAL(2), LOCAL(1),
  // -> std_types::capture(.expression_of expr)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(897, 25),
  POS(897, 3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_std__capture = {
  t_func_std__capture, NULL, 2, 1,
  {"895_5_expr\000"}
};

static TAB_NUM t_func_std_types__capture___match[] = {
  4, // locals
  2, // parameters
  LOCAL(2), // 901_5_self
  var_902_5_str,
  // $rc result_count()
  var_result_count, 0, 1, LOCAL(3),
  // $expr expression_of(self)
  var_expression_of, 1, LOCAL(2), 1, LOCAL(4),
  // match $len expr str
  var_match, 2, LOCAL(4), var_902_5_str, 1, var_906_10_len,
  // rc == 1
  var_std__equal, 2, LOCAL(3), num_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_159, lambda_160, TAIL_CALL,
  POS(904, 3),
  POS(905, 3),
  POS(906, 3),
  POS(908, 5),
  POS(907, 3),
  LOCAL(2),
  LOCAL(3),
  LOCAL(4)
};

static FUNCTION_INFO i_func_std_types__capture___match = {
  t_func_std_types__capture___match, NULL, 5, 3,
  {"901_5_self\000", "904_4_rc\000", "905_4_expr\000"}
};

static TAB_NUM t_lambda_159[] = {
  0, // locals
  0, // parameters
  //  len
  LET, 1, var_906_10_len, TAIL_CALL,
  POS(909, 7)
};

static FUNCTION_INFO i_lambda_159 = {
  t_lambda_159, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_160[] = {
  1, // locals
  0, // parameters
  // is_undefined
  var_is_undefined, 1, var_906_10_len, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_161, lambda_162, TAIL_CALL,
  POS(912, 13),
  POS(911, 7)
};

static FUNCTION_INFO i_lambda_160 = {
  t_lambda_160, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_161[] = {
  0, // locals
  0, // parameters
  //  len undefined
  LET, 2, var_906_10_len, var_undefined, TAIL_CALL,
  POS(913, 11)
};

static FUNCTION_INFO i_lambda_161 = {
  t_lambda_161, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_162[] = {
  1, // locals
  0, // parameters
  // range(str 1 len)
  var_range, 3, var_902_5_str, num_1, var_906_10_len, 1, LOCAL(1),
  //  len range(str 1 len)
  LET, 2, var_906_10_len, LOCAL(1), TAIL_CALL,
  POS(914, 16),
  POS(914, 11)
};

static FUNCTION_INFO i_lambda_162 = {
  t_lambda_162, NULL, 2, 0,
  {}
};

static TAB_NUM t_func_std_types__capture___match_back[] = {
  4, // locals
  2, // parameters
  LOCAL(2), // 918_5_self
  var_919_5_str,
  // $rc result_count()
  var_result_count, 0, 1, LOCAL(3),
  // $expr expression_of(self)
  var_expression_of, 1, LOCAL(2), 1, LOCAL(4),
  // match_back $len expr str
  var_match_back, 2, LOCAL(4), var_919_5_str, 1, var_923_15_len,
  // rc == 1
  var_std__equal, 2, LOCAL(3), num_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_163, lambda_164, TAIL_CALL,
  POS(921, 3),
  POS(922, 3),
  POS(923, 3),
  POS(925, 5),
  POS(924, 3),
  LOCAL(2),
  LOCAL(3),
  LOCAL(4)
};

static FUNCTION_INFO i_func_std_types__capture___match_back = {
  t_func_std_types__capture___match_back, NULL, 5, 3,
  {"918_5_self\000", "921_4_rc\000", "922_4_expr\000"}
};

static TAB_NUM t_lambda_163[] = {
  0, // locals
  0, // parameters
  //  len
  LET, 1, var_923_15_len, TAIL_CALL,
  POS(926, 7)
};

static FUNCTION_INFO i_lambda_163 = {
  t_lambda_163, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_164[] = {
  1, // locals
  0, // parameters
  // is_undefined
  var_is_undefined, 1, var_923_15_len, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_165, lambda_166, TAIL_CALL,
  POS(929, 13),
  POS(928, 7)
};

static FUNCTION_INFO i_lambda_164 = {
  t_lambda_164, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_165[] = {
  0, // locals
  0, // parameters
  //  len undefined
  LET, 2, var_923_15_len, var_undefined, TAIL_CALL,
  POS(930, 11)
};

static FUNCTION_INFO i_lambda_165 = {
  t_lambda_165, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_166[] = {
  2, // locals
  0, // parameters
  // len -1)
  var_std__negate, 1, var_923_15_len, 1, LOCAL(1),
  // range(str -len -1)
  var_range, 3, var_919_5_str, LOCAL(1), minus_num_1, 1, LOCAL(2),
  //  len range(str -len -1)
  LET, 2, var_923_15_len, LOCAL(2), TAIL_CALL,
  POS(931, 27),
  POS(931, 16),
  POS(931, 11)
};

static FUNCTION_INFO i_lambda_166 = {
  t_lambda_166, NULL, 3, 0,
  {}
};

static TAB_NUM t_func_std__alt[] = {
  2, // locals
  -1, // parameters
  REST_PARAMETER, LOCAL(2), // 938_5_expressions
  // .expressions_of expressions)
  LET, -1, var_std_types__alt, var_expressions_of, LOCAL(2), LOCAL(1),
  // -> std_types::alt(.expressions_of expressions)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(940, 21),
  POS(940, 3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_std__alt = {
  t_func_std__alt, NULL, 2, 1,
  {"938_5_expressions\000"}
};

static TAB_NUM t_func_std_types__alt___match[] = {
  2, // locals
  2, // parameters
  LOCAL(2), // 944_5_self
  var_945_5_str,
  // expressions_of(self)
  var_expressions_of, 1, LOCAL(2), 1, LOCAL(1),
  // for_each expressions_of(self)
  var_for_each, 3, LOCAL(1), lambda_167, lambda_169, TAIL_CALL,
  POS(947, 12),
  POS(947, 3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_std_types__alt___match = {
  t_func_std_types__alt___match, NULL, 2, 1,
  {"944_5_self\000"}
};

static TAB_NUM t_lambda_167[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 948_8_expr
  // match $len expr str
  var_match, 2, LOCAL(2), var_945_5_str, 1, var_949_14_len,
  // is_defined
  var_is_defined, 1, var_949_14_len, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_168, var_next, TAIL_CALL,
  POS(949, 7),
  POS(951, 13),
  POS(950, 7),
  LOCAL(2)
};

static FUNCTION_INFO i_lambda_167 = {
  t_lambda_167, NULL, 3, 1,
  {"948_8_expr\000"}
};

static TAB_NUM t_lambda_168[] = {
  0, // locals
  0, // parameters
  //  len
  LET, 1, var_949_14_len, TAIL_CALL,
  POS(952, 11)
};

static FUNCTION_INFO i_lambda_168 = {
  t_lambda_168, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_169[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(954, 7)
};

static FUNCTION_INFO i_lambda_169 = {
  t_lambda_169, NULL, 1, 0,
  {}
};

static int value_range_101_10_arguments[] = {
  -chr_97, -chr_122
};

static int value_range_101_22_arguments[] = {
  -chr_65, -chr_90
};

static int sequence_101_10_arguments[] = {
  -value_range_101_10, -value_range_101_22
};

static int value_range_114_36_arguments[] = {
  -chr_48, -chr_57
};

static int sequence_114_12_arguments[] = {
  -value_range_101_10, -value_range_101_22, -value_range_114_36
};

static int sequence_208_22_arguments[] = {
  -value_range_101_10, -value_range_101_22, -value_range_114_36, -chr_95
};

static FUNKY_CONSTANT constants_table[] = {
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__FUNKY_IDENTIFIER___match}},
  {FLT_POSITIVE_INT64, 0, {.value = 1}},
  {FLT_POSITIVE_INT64, 0, {.value = 0}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_1}},
  {FLT_CHARACTER, 0, {.value = 97}},
  {FLT_CHARACTER, 0, {.value = 122}},
  {FLT_VALUE_RANGE, 2, {.arguments = value_range_101_10_arguments}},
  {FLT_CHARACTER, 0, {.value = 65}},
  {FLT_CHARACTER, 0, {.value = 90}},
  {FLT_VALUE_RANGE, 2, {.arguments = value_range_101_22_arguments}},
  {FLT_SEQUENCE, 2, {.arguments = sequence_101_10_arguments}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_within_word}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_2}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_3}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_4}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_5}},
  {FLT_CHARACTER, 0, {.value = 48}},
  {FLT_CHARACTER, 0, {.value = 57}},
  {FLT_VALUE_RANGE, 2, {.arguments = value_range_114_36_arguments}},
  {FLT_SEQUENCE, 3, {.arguments = sequence_114_12_arguments}},
  {FLT_CHARACTER, 0, {.value = 95}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_6}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_7}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_8}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_word_start}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_9}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_10}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_11}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_12}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_fail}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_13}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_14}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__FUNKY_IDENTIFIER___match_back}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_word_end}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_15}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_16}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_17}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_2_within_word}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_18}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_check_start}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_19}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_20}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_21}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__FUNKY_IDENTIFIER___search}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_search_forwards}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_search_for_word_start}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_22}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_23}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_24}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_25}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_26}},
  {FLT_SEQUENCE, 4, {.arguments = sequence_208_22_arguments}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_27}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_3_within_word}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_28}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_29}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_30}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_31}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_32}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_33}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_34}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_2_word_start}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_35}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_36}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_search_backwards}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_search_for_word_end}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_37}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_38}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_39}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_4_within_word}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_40}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_check_start}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_41}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_42}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_2_word_end}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_43}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_44}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_2_check_start}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_45}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_46}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_47}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__WHITESPACE___match}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_48}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_49}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_loop}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_50}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_51}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_52}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_53}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_54}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__WHITESPACE___match_back}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_55}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_56}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_2_loop}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_57}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_58}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_59}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_60}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_61}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__WHITESPACE___search}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_2_search_forwards}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_search_for_whitespace}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_62}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_63}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_64}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_match_more_whitespace}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_65}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_66}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_67}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_68}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_69}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_70}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_71}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_2_search_backwards}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_2_search_for_whitespace}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_72}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_73}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_74}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_2_match_more_whitespace}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_75}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_76}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_77}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_78}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_79}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_80}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std__many}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__many___match}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_81}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_82}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_83}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_84}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_85}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_3_loop}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_86}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_87}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_88}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_89}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_90}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_91}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_92}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_93}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_94}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_95}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_96}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_4_loop}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_97}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_98}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_99}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_100}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_101}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_captured_item_is_defined}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__many___match_back}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_102}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_103}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_104}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_5_loop}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_105}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_106}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_107}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_108}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_109}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__many___search}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_3_search_forwards}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_search_next}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_110}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_111}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_112}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_113}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_114}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_115}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_116}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_117}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_6_loop}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_118}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_119}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_120}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_121}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_3_search_backwards}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_2_search_next}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_122}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_123}},
  {FLT_NEGATIVE_INT64, 0, {.value = 1}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_124}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_125}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_126}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_127}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_128}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_129}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_7_loop}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_130}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_131}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_132}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_133}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_134}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std__some}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__some___match}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_135}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_8_loop}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_136}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_137}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_138}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_139}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_9_loop}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_140}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_141}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_142}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_2_captured_item_is_defined}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__some___match_back}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_143}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_10_loop}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_144}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_145}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_146}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_147}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_11_loop}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_148}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_149}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_150}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_3_captured_item_is_defined}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std__optional}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__optional___match}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_151}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_152}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_153}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_154}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_155}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_156}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__anything___match}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__anything___match_back}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__anything___search}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std__any_character_but}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__any_character_but___match}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_157}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_158}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std__capture}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__capture___match}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_159}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_160}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_161}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_162}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__capture___match_back}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_163}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_164}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_165}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_166}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std__alt}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__alt___match}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_167}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_168}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_169}}
};

static ATTRIBUTE_DEFINITION std_types__FUNKY_IDENTIFIER__attributes[] = {
  {var_match, -func_std_types__FUNKY_IDENTIFIER___match},
  {var_match_back, -func_std_types__FUNKY_IDENTIFIER___match_back},
  {var_search, -func_std_types__FUNKY_IDENTIFIER___search}
};

static ATTRIBUTE_DEFINITION std_types__WHITESPACE__attributes[] = {
  {var_match, -func_std_types__WHITESPACE___match},
  {var_match_back, -func_std_types__WHITESPACE___match_back},
  {var_search, -func_std_types__WHITESPACE___search}
};

static ATTRIBUTE_DEFINITION std_types__many__attributes[] = {
  {-var_expression_of, -var_undefined},
  {var_match, -func_std_types__many___match},
  {var_match_back, -func_std_types__many___match_back},
  {var_search, -func_std_types__many___search}
};

static ATTRIBUTE_DEFINITION std_types__some__attributes[] = {
  {-var_expression_of, -var_undefined},
  {var_match, -func_std_types__some___match},
  {var_match_back, -func_std_types__some___match_back}
};

static ATTRIBUTE_DEFINITION std_types__optional__attributes[] = {
  {-var_expression_of, -var_undefined},
  {var_match, -func_std_types__optional___match}
};

static ATTRIBUTE_DEFINITION std_types__anything__attributes[] = {
  {var_match, -func_std_types__anything___match},
  {var_match_back, -func_std_types__anything___match_back},
  {var_search, -func_std_types__anything___search}
};

static ATTRIBUTE_DEFINITION std_types__any_character_but__attributes[] = {
  {-var_expression_of, -var_undefined},
  {var_match, -func_std_types__any_character_but___match}
};

static ATTRIBUTE_DEFINITION std_types__capture__attributes[] = {
  {-var_expression_of, -var_undefined},
  {var_match, -func_std_types__capture___match},
  {var_match_back, -func_std_types__capture___match_back}
};

static ATTRIBUTE_DEFINITION std_types__alt__attributes[] = {
  {-var_expressions_of, -var_undefined},
  {var_match, -func_std_types__alt___match}
};

static FUNKY_VARIABLE variables_table[] = {
  {
    FOT_POLYMORPHIC, 0, 0,
    "match\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "assign\000std", NULL,
    {.position = POS(79, 1)}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "match_back\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "search\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_DERIVED, 0, 3,
    "FUNKY_IDENTIFIER\000std_types", std_types__FUNKY_IDENTIFIER__attributes,
    {"object\000std_types"}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "object\000std_types", NULL,
    {.position = POS(83, 30)}
  },
  {
    FOT_DERIVED, 0, 0,
    "FUNKY_IDENTIFIER\000std", NULL,
    {"FUNKY_IDENTIFIER\000std_types"}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "match\000", NULL,
    {.position = POS(87, 30)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "90_5_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "92_4_rc\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "result_count\000", NULL,
    {.position = POS(92, 7)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "93_4_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "94_4_n\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "length_of\000", NULL,
    {.position = POS(94, 6)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "equal\000std", NULL,
    {.position = POS(97, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "value_range\000std", NULL,
    {.position = POS(101, 10)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "sequence\000std", NULL,
    {.position = POS(101, 10)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "case\000", NULL,
    {.position = POS(100, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if\000", NULL,
    {.position = POS(96, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "inc\000", NULL,
    {.position = POS(105, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "less\000std", NULL,
    {.position = POS(107, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "range\000", NULL,
    {.position = POS(111, 16)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "minus\000std", NULL,
    {.position = POS(119, 18)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "undefined\000", NULL,
    {.position = POS(138, 10)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "match_back\000", NULL,
    {.position = POS(141, 30)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "144_5_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "146_4_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "147_4_i\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000std", NULL,
    {.position = POS(147, 6)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "dec\000", NULL,
    {.position = POS(151, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not\000std", NULL,
    {.position = POS(173, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "and\000std", NULL,
    {.position = POS(173, 7)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "search\000", NULL,
    {.position = POS(177, 30)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "180_5_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "181_5_nth\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "183_4_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "190_6_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "191_6_s\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "245_6_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "246_6_e\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "283_20_continuation\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "284_8_chr\000", NULL
  },
  {
    FOT_DERIVED, 0, 3,
    "WHITESPACE\000std_types", std_types__WHITESPACE__attributes,
    {"object\000std_types"}
  },
  {
    FOT_DERIVED, 0, 0,
    "WHITESPACE\000std", NULL,
    {"WHITESPACE\000std_types"}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "322_5_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "324_4_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "325_4_n\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_a_whitespace_character\000", NULL,
    {.position = POS(337, 22)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "next\000", NULL,
    {.position = POS(338, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "loop\000", NULL,
    {.position = POS(330, 7)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "348_5_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "350_4_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "355_8_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "396_5_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "397_5_nth\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "399_4_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "406_6_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "407_6_s\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "443_6_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "444_6_e\000", NULL
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "expression_of\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "expressions_of\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_DERIVED, 0, 4,
    "many\000std_types", std_types__many__attributes,
    {"object\000std_types"}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "many\000std", NULL,
    {.const_idx = -func_std__many}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "505_5_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "508_4_expr\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "511_14_i\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_undefined\000", NULL,
    {.position = POS(513, 11)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "521_16_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "527_28_len\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "or\000std", NULL,
    {.position = POS(529, 27)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000", NULL,
    {.position = POS(532, 25)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "535_8_captured_items\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_list\000", NULL,
    {.position = POS(535, 23)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "536_14_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "536_26_captured_item\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_defined\000", NULL,
    {.position = POS(545, 39)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "list\000", NULL,
    {.position = POS(546, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "update_if\000", NULL,
    {.position = POS(545, 15)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "548_16_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "554_28_len\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "push\000", NULL,
    {.position = POS(562, 29)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "579_5_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "581_4_expr\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "582_15_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "587_8_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "594_25_len\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "minus\000", NULL,
    {.position = POS(599, 17)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "616_5_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "617_5_nth\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "619_4_expr\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "620_4_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "627_6_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "635_41_pos\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "635_46_len\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "651_20_s\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "666_6_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "674_45_len\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "690_20_e\000", NULL
  },
  {
    FOT_DERIVED, 0, 3,
    "some\000std_types", std_types__some__attributes,
    {"object\000std_types"}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "some\000std", NULL,
    {.const_idx = -func_std__some}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "739_5_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "742_4_expr\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "743_4_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "747_16_len\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "755_8_captured_items\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "757_16_len\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "757_21_captured_item\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "772_5_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "775_4_expr\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "776_4_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "777_4_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "781_21_len\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "789_8_captured_items\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "791_21_len\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "791_26_captured_item\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "put\000", NULL,
    {.position = POS(799, 17)}
  },
  {
    FOT_DERIVED, 0, 2,
    "optional\000std_types", std_types__optional__attributes,
    {"object\000std_types"}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "optional\000std", NULL,
    {.const_idx = -func_std__optional}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "815_5_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "818_4_expr\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "821_14_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "827_14_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "827_26_captured_item\000", NULL
  },
  {
    FOT_DERIVED, 0, 3,
    "anything\000std_types", std_types__anything__attributes,
    {"object\000std_types"}
  },
  {
    FOT_DERIVED, 0, 0,
    "ANYTHING\000std", NULL,
    {"anything\000std_types"}
  },
  {
    FOT_DERIVED, 0, 2,
    "any_character_but\000std_types", std_types__any_character_but__attributes,
    {"object\000std_types"}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "any_character_but\000std", NULL,
    {.const_idx = -func_std__any_character_but}
  },
  {
    FOT_DERIVED, 0, 3,
    "capture\000std_types", std_types__capture__attributes,
    {"object\000std_types"}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "capture\000std", NULL,
    {.const_idx = -func_std__capture}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "902_5_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "906_10_len\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "919_5_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "923_15_len\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "negate\000std", NULL,
    {.position = POS(931, 27)}
  },
  {
    FOT_DERIVED, 0, 2,
    "alt\000std_types", std_types__alt__attributes,
    {"object\000std_types"}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "alt\000std", NULL,
    {.const_idx = -func_std__alt}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "945_5_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "949_14_len\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "for_each\000", NULL,
    {.position = POS(947, 3)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "DIGIT\000std", NULL,
    {.const_idx = -value_range_114_36}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "LETTER\000std", NULL,
    {.const_idx = -sequence_101_10}
  },
  {
    FOT_DERIVED, 0, 0,
    "set\000std", NULL,
    {"hash_set\000std"}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "hash_set\000std", NULL,
    {.position = POS(960, 11)}
  }
};

static FUNKY_NAMESPACE used_namespaces[] = {
  {"std", 1, 0}
};

FUNKY_MODULE module__basic__grammar = {
  "_basic__grammar", // module name
  "basic/grammar.fky", // module filename
  .major_version = 0,
  .minor_version = 0,
  .feature_flags = FEAT_POSITIONS|FEAT_FUNCTION_INFO,
  .marker = 0,
  0, // number of required modules
  0, // number of defined namespaces
  1, // number of used namespaces
  250, // number of constants
  144, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  constants_table,
  variables_table,
};
