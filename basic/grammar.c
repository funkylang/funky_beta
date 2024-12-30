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
  value_range_50_10 = -7,
  chr_65 = -8,
  chr_90 = -9,
  value_range_50_22 = -10,
  sequence_50_10 = -11,
  func_within_word = -12,
  lambda_2 = -13,
  lambda_3 = -14,
  lambda_4 = -15,
  lambda_5 = -16,
  chr_48 = -17,
  chr_57 = -18,
  value_range_63_36 = -19,
  sequence_63_12 = -20,
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
  sequence_157_22 = -52,
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
  var_39_5_str, // dynamic
  var_41_4_rc, // dynamic
  var_result_count, // extern
  var_42_4_i, // dynamic
  var_43_4_n, // dynamic
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
  var_93_5_str, // dynamic
  var_95_4_n, // dynamic
  var_96_4_i, // dynamic
  var_std__plus, // extern
  var_dec, // extern
  var_std__not, // extern
  var_std__and, // extern
  var_search, // extern polymorphic
  var_129_5_str, // dynamic
  var_130_5_nth, // dynamic
  var_132_4_n, // dynamic
  var_139_6_i, // dynamic
  var_140_6_s, // dynamic
  var_194_6_i, // dynamic
  var_195_6_e, // dynamic
  var_232_20_continuation, // dynamic
  var_233_8_chr, // dynamic
  var_std_types__WHITESPACE, // derived
  var_std__WHITESPACE, // derived
  var_271_5_str, // dynamic
  var_273_4_i, // dynamic
  var_274_4_n, // dynamic
  var_is_a_whitespace_character, // extern
  var_next, // extern
  var_loop, // extern
  var_297_5_str, // dynamic
  var_299_4_n, // dynamic
  var_304_8_i, // dynamic
  var_345_5_str, // dynamic
  var_346_5_nth, // dynamic
  var_348_4_n, // dynamic
  var_355_6_i, // dynamic
  var_356_6_s, // dynamic
  var_392_6_i, // dynamic
  var_393_6_e, // dynamic
  var_expression_of, // attribute
  var_expressions_of, // attribute
  var_std_types__many, // derived
  var_std__many, // initialized
  var_454_5_str, // dynamic
  var_457_4_expr, // dynamic
  var_460_14_i, // dynamic
  var_is_undefined, // extern
  var_470_16_n, // dynamic
  var_476_28_len, // dynamic
  var_std__or, // extern
  var_plus, // extern
  var_484_8_captured_items, // dynamic
  var_empty_list, // extern
  var_485_14_i, // dynamic
  var_485_26_captured_item, // dynamic
  var_is_defined, // extern
  var_list, // extern
  var_update_if, // extern
  var_497_16_n, // dynamic
  var_503_28_len, // dynamic
  var_push, // extern
  var_528_5_str, // dynamic
  var_530_4_expr, // dynamic
  var_531_15_i, // dynamic
  var_536_8_n, // dynamic
  var_543_25_len, // dynamic
  var_minus, // extern
  var_565_5_str, // dynamic
  var_566_5_nth, // dynamic
  var_568_4_expr, // dynamic
  var_569_4_n, // dynamic
  var_576_6_i, // dynamic
  var_584_41_pos, // dynamic
  var_584_46_len, // dynamic
  var_600_20_s, // dynamic
  var_615_6_i, // dynamic
  var_623_45_len, // dynamic
  var_639_20_e, // dynamic
  var_std_types__some, // derived
  var_std__some, // initialized
  var_688_5_str, // dynamic
  var_691_4_expr, // dynamic
  var_692_4_i, // dynamic
  var_696_16_len, // dynamic
  var_704_8_captured_items, // dynamic
  var_706_16_len, // dynamic
  var_706_21_captured_item, // dynamic
  var_721_5_str, // dynamic
  var_724_4_expr, // dynamic
  var_725_4_n, // dynamic
  var_726_4_i, // dynamic
  var_730_21_len, // dynamic
  var_738_8_captured_items, // dynamic
  var_740_21_len, // dynamic
  var_740_26_captured_item, // dynamic
  var_put, // extern
  var_std_types__optional, // derived
  var_std__optional, // initialized
  var_764_5_str, // dynamic
  var_767_4_expr, // dynamic
  var_770_14_i, // dynamic
  var_776_14_i, // dynamic
  var_776_26_captured_item, // dynamic
  var_std_types__anything, // derived
  var_std__ANYTHING, // derived
  var_std_types__any_character_but, // derived
  var_std__any_character_but, // initialized
  var_std_types__capture, // derived
  var_std__capture, // initialized
  var_851_5_str, // dynamic
  var_855_10_len, // dynamic
  var_868_5_str, // dynamic
  var_872_15_len, // dynamic
  var_std__negate, // extern
  var_std_types__alt, // derived
  var_std__alt, // initialized
  var_894_5_str, // dynamic
  var_898_14_len, // dynamic
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
  var_39_5_str,
  // $rc result_count()
  var_result_count, 0, 1, var_41_4_rc,
  // $i 1
  LET, 1, num_1, 1, var_42_4_i,
  // $n length_of(str)
  var_length_of, 1, var_39_5_str, 1, var_43_4_n,
  // n == 0
  var_std__equal, 2, var_43_4_n, num_0, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), func_fail, lambda_1, TAIL_CALL,
  POS(41, 3),
  POS(42, 3),
  POS(43, 3),
  POS(46, 5),
  POS(45, 3)
};

static TAB_NUM t_lambda_1[] = {
  1, // locals
  0, // parameters
  // str(1)
  var_39_5_str, 1, num_1, 1, LOCAL(1),
  // case str(1)
  var_case, 4, LOCAL(1), sequence_50_10, func_within_word, func_fail, TAIL_CALL,
  POS(49, 12),
  POS(49, 7)
};

static TAB_NUM t_func_within_word[] = {
  1, // locals
  0, // parameters
  // inc &i
  var_inc, 1, var_42_4_i, 1, var_42_4_i,
  // n:
  var_std__less, 2, var_43_4_n, var_42_4_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_2, lambda_5, TAIL_CALL,
  POS(54, 5),
  POS(56, 11),
  POS(55, 5)
};

static TAB_NUM t_lambda_2[] = {
  1, // locals
  0, // parameters
  // rc == 1
  var_std__equal, 2, var_41_4_rc, num_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_3, lambda_4, TAIL_CALL,
  POS(58, 11),
  POS(57, 9)
};

static TAB_NUM t_lambda_3[] = {
  0, // locals
  0, // parameters
  //  n
  LET, 1, var_43_4_n, TAIL_CALL,
  POS(59, 13)
};

static TAB_NUM t_lambda_4[] = {
  1, // locals
  0, // parameters
  // range(str 1 n)
  var_range, 3, var_39_5_str, num_1, var_43_4_n, 1, LOCAL(1),
  //  n range(str 1 n)
  LET, 2, var_43_4_n, LOCAL(1), TAIL_CALL,
  POS(60, 16),
  POS(60, 13)
};

static TAB_NUM t_lambda_5[] = {
  1, // locals
  0, // parameters
  // str(i)
  var_39_5_str, 1, var_42_4_i, 1, LOCAL(1),
  // case str(i)
  var_case, 6, LOCAL(1), sequence_63_12, func_within_word, chr_95, func_word_start, lambda_6, TAIL_CALL,
  POS(62, 14),
  POS(62, 9)
};

static TAB_NUM t_lambda_6[] = {
  1, // locals
  0, // parameters
  // rc == 1
  var_std__equal, 2, var_41_4_rc, num_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_7, lambda_8, TAIL_CALL,
  POS(67, 15),
  POS(66, 13)
};

static TAB_NUM t_lambda_7[] = {
  1, // locals
  0, // parameters
  // i-1
  var_std__minus, 2, var_42_4_i, num_1, 1, LOCAL(1),
  //  i-1
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(68, 18),
  POS(68, 17)
};

static TAB_NUM t_lambda_8[] = {
  3, // locals
  0, // parameters
  // i-1 range(str 1 i-1)
  var_std__minus, 2, var_42_4_i, num_1, 1, LOCAL(1),
  // i-1)
  var_std__minus, 2, var_42_4_i, num_1, 1, LOCAL(2),
  // range(str 1 i-1)
  var_range, 3, var_39_5_str, num_1, LOCAL(2), 1, LOCAL(3),
  //  i-1 range(str 1 i-1)
  LET, 2, LOCAL(1), LOCAL(3), TAIL_CALL,
  POS(69, 18),
  POS(69, 34),
  POS(69, 22),
  POS(69, 17)
};

static TAB_NUM t_func_word_start[] = {
  1, // locals
  0, // parameters
  // inc &i
  var_inc, 1, var_42_4_i, 1, var_42_4_i,
  // n:
  var_std__less, 2, var_43_4_n, var_42_4_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_9, lambda_12, TAIL_CALL,
  POS(72, 5),
  POS(74, 11),
  POS(73, 5)
};

static TAB_NUM t_lambda_9[] = {
  1, // locals
  0, // parameters
  // rc == 1
  var_std__equal, 2, var_41_4_rc, num_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_10, lambda_11, TAIL_CALL,
  POS(76, 11),
  POS(75, 9)
};

static TAB_NUM t_lambda_10[] = {
  0, // locals
  0, // parameters
  //  n
  LET, 1, var_43_4_n, TAIL_CALL,
  POS(77, 13)
};

static TAB_NUM t_lambda_11[] = {
  1, // locals
  0, // parameters
  // range(str 1 n)
  var_range, 3, var_39_5_str, num_1, var_43_4_n, 1, LOCAL(1),
  //  n range(str 1 n)
  LET, 2, var_43_4_n, LOCAL(1), TAIL_CALL,
  POS(78, 16),
  POS(78, 13)
};

static TAB_NUM t_lambda_12[] = {
  1, // locals
  0, // parameters
  // str(i)
  var_39_5_str, 1, var_42_4_i, 1, LOCAL(1),
  // case str(i)
  var_case, 4, LOCAL(1), sequence_63_12, func_within_word, func_fail, TAIL_CALL,
  POS(80, 14),
  POS(80, 9)
};

static TAB_NUM t_func_fail[] = {
  1, // locals
  0, // parameters
  // rc == 1
  var_std__equal, 2, var_41_4_rc, num_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_13, lambda_14, TAIL_CALL,
  POS(86, 7),
  POS(85, 5)
};

static TAB_NUM t_lambda_13[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(87, 9)
};

static TAB_NUM t_lambda_14[] = {
  0, // locals
  0, // parameters
  //  undefined undefined
  LET, 2, var_undefined, var_undefined, TAIL_CALL,
  POS(88, 9)
};

static TAB_NUM t_func_std_types__FUNKY_IDENTIFIER___match_back[] = {
  1, // locals
  2, // parameters
  LOCAL(1),
  var_93_5_str,
  // $n length_of(str)
  var_length_of, 1, var_93_5_str, 1, var_95_4_n,
  // $i n+1
  var_std__plus, 2, var_95_4_n, num_1, 1, var_96_4_i,
  // word_end
  func_word_end, 0, TAIL_CALL,
  POS(95, 3),
  POS(96, 3),
  POS(97, 3)
};

static TAB_NUM t_func_word_end[] = {
  1, // locals
  0, // parameters
  // dec &i
  var_dec, 1, var_96_4_i, 1, var_96_4_i,
  // i < 1
  var_std__less, 2, var_96_4_i, num_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_15, lambda_16, TAIL_CALL,
  POS(100, 5),
  POS(102, 7),
  POS(101, 5)
};

static TAB_NUM t_lambda_15[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(103, 9)
};

static TAB_NUM t_lambda_16[] = {
  1, // locals
  0, // parameters
  // str(i)
  var_93_5_str, 1, var_96_4_i, 1, LOCAL(1),
  // case str(i)
  var_case, 4, LOCAL(1), sequence_63_12, func_2_within_word, lambda_17, TAIL_CALL,
  POS(105, 14),
  POS(105, 9)
};

static TAB_NUM t_lambda_17[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(107, 13)
};

static TAB_NUM t_func_2_within_word[] = {
  1, // locals
  0, // parameters
  // dec &i
  var_dec, 1, var_96_4_i, 1, var_96_4_i,
  // i < 1
  var_std__less, 2, var_96_4_i, num_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), func_check_start, lambda_18, TAIL_CALL,
  POS(110, 5),
  POS(112, 7),
  POS(111, 5)
};

static TAB_NUM t_lambda_18[] = {
  1, // locals
  0, // parameters
  // str(i)
  var_93_5_str, 1, var_96_4_i, 1, LOCAL(1),
  // case str(i)
  var_case, 6, LOCAL(1), sequence_63_12, func_2_within_word, chr_95, func_word_end, func_check_start, TAIL_CALL,
  POS(115, 14),
  POS(115, 9)
};

static TAB_NUM t_func_check_start[] = {
  5, // locals
  0, // parameters
  // i+1) >= '0' && str(i+1) <= '9'
  var_std__plus, 2, var_96_4_i, num_1, 1, LOCAL(1),
  // str(i+1) >= '0' && str(i+1) <= '9'
  var_93_5_str, 1, LOCAL(1), 1, LOCAL(2),
  // str(i+1) >= '0' && str(i+1) <= '9'
  var_std__less, 2, LOCAL(2), chr_48, 1, LOCAL(3),
  // str(i+1) >= '0' && str(i+1) <= '9'
  var_std__not, 1, LOCAL(3), 1, LOCAL(4),
  // str(i+1) >= '0' && str(i+1) <= '9'
  var_std__and, 2, LOCAL(4), lambda_19, 1, LOCAL(5),
  // if
  var_if, 3, LOCAL(5), lambda_20, lambda_21, TAIL_CALL,
  POS(122, 11),
  POS(122, 7),
  POS(122, 7),
  POS(122, 7),
  POS(122, 7),
  POS(121, 5)
};

static TAB_NUM t_lambda_19[] = {
  4, // locals
  0, // parameters
  // i+1) <= '9'
  var_std__plus, 2, var_96_4_i, num_1, 1, LOCAL(1),
  // str(i+1) <= '9'
  var_93_5_str, 1, LOCAL(1), 1, LOCAL(2),
  // 9'
  var_std__less, 2, chr_57, LOCAL(2), 1, LOCAL(3),
  // 9'
  var_std__not, 1, LOCAL(3), 1, LOCAL(4),
  // str(i+1) <= '9'
  LET, 1, LOCAL(4), TAIL_CALL,
  POS(122, 30),
  POS(122, 26),
  POS(122, 39),
  POS(122, 39),
  POS(122, 26)
};

static TAB_NUM t_lambda_20[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(123, 9)
};

static TAB_NUM t_lambda_21[] = {
  1, // locals
  0, // parameters
  // n-i
  var_std__minus, 2, var_95_4_n, var_96_4_i, 1, LOCAL(1),
  //  n-i
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(124, 10),
  POS(124, 9)
};

static TAB_NUM t_func_std_types__FUNKY_IDENTIFIER___search[] = {
  1, // locals
  -3, // parameters
  MANDATORY_PARAMETER, LOCAL(1),
  MANDATORY_PARAMETER, var_129_5_str,
  num_1, var_130_5_nth,
  // $n length_of(str)
  var_length_of, 1, var_129_5_str, 1, var_132_4_n,
  // nth < 0
  var_std__less, 2, var_130_5_nth, num_0, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), func_search_backwards, func_search_forwards, TAIL_CALL,
  POS(132, 3),
  POS(134, 5),
  POS(133, 3)
};

static TAB_NUM t_func_search_forwards[] = {
  0, // locals
  0, // parameters
  // $i 0
  LET, 1, num_0, 1, var_139_6_i,
  // $s undefined
  LET, 1, var_undefined, 1, var_140_6_s,
  // search_for_word_start
  func_search_for_word_start, 0, TAIL_CALL,
  POS(139, 5),
  POS(140, 5),
  POS(141, 5)
};

static TAB_NUM t_func_search_for_word_start[] = {
  1, // locals
  0, // parameters
  // inc &i
  var_inc, 1, var_139_6_i, 1, var_139_6_i,
  // n
  var_std__less, 2, var_132_4_n, var_139_6_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_22, lambda_23, TAIL_CALL,
  POS(144, 7),
  POS(146, 13),
  POS(145, 7)
};

static TAB_NUM t_lambda_22[] = {
  0, // locals
  0, // parameters
  //  undefined undefined
  LET, 2, var_undefined, var_undefined, TAIL_CALL,
  POS(147, 11)
};

static TAB_NUM t_lambda_23[] = {
  1, // locals
  0, // parameters
  // str(i)
  var_129_5_str, 1, var_139_6_i, 1, LOCAL(1),
  // case str(i)
  var_case, 4, LOCAL(1), sequence_50_10, lambda_24, func_search_for_word_start, TAIL_CALL,
  POS(149, 16),
  POS(149, 11)
};

static TAB_NUM t_lambda_24[] = {
  1, // locals
  0, // parameters
  // i == 1:
  var_std__equal, 2, var_139_6_i, num_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_25, lambda_26, TAIL_CALL,
  POS(152, 17),
  POS(151, 15)
};

static TAB_NUM t_lambda_25[] = {
  0, // locals
  0, // parameters
  // !s 1
  LET, 1, num_1, 1, var_140_6_s,
  // within_word
  func_3_within_word, 0, TAIL_CALL,
  POS(153, 19),
  POS(154, 19)
};

static TAB_NUM t_lambda_26[] = {
  2, // locals
  0, // parameters
  // i-1)
  var_std__minus, 2, var_139_6_i, num_1, 1, LOCAL(1),
  // str(i-1)
  var_129_5_str, 1, LOCAL(1), 1, LOCAL(2),
  // case str(i-1)
  var_case, 4, LOCAL(2), sequence_157_22, func_search_for_word_start, lambda_27, TAIL_CALL,
  POS(156, 28),
  POS(156, 24),
  POS(156, 19)
};

static TAB_NUM t_lambda_27[] = {
  0, // locals
  0, // parameters
  // !s i
  LET, 1, var_139_6_i, 1, var_140_6_s,
  // within_word
  func_3_within_word, 0, TAIL_CALL,
  POS(160, 23),
  POS(161, 23)
};

static TAB_NUM t_func_3_within_word[] = {
  1, // locals
  0, // parameters
  // inc &i
  var_inc, 1, var_139_6_i, 1, var_139_6_i,
  // n:
  var_std__less, 2, var_132_4_n, var_139_6_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_28, lambda_31, TAIL_CALL,
  POS(165, 7),
  POS(167, 13),
  POS(166, 7)
};

static TAB_NUM t_lambda_28[] = {
  1, // locals
  0, // parameters
  // 1
  var_std__less, 2, num_1, var_130_5_nth, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_29, lambda_30, TAIL_CALL,
  POS(169, 19),
  POS(168, 11)
};

static TAB_NUM t_lambda_29[] = {
  0, // locals
  0, // parameters
  //  undefined undefined
  LET, 2, var_undefined, var_undefined, TAIL_CALL,
  POS(170, 15)
};

static TAB_NUM t_lambda_30[] = {
  1, // locals
  0, // parameters
  // i-s
  var_std__minus, 2, var_139_6_i, var_140_6_s, 1, LOCAL(1),
  //  s i-s
  LET, 2, var_140_6_s, LOCAL(1), TAIL_CALL,
  POS(171, 18),
  POS(171, 15)
};

static TAB_NUM t_lambda_31[] = {
  1, // locals
  0, // parameters
  // str(i)
  var_129_5_str, 1, var_139_6_i, 1, LOCAL(1),
  // case str(i)
  var_case, 6, LOCAL(1), sequence_63_12, func_3_within_word, chr_95, func_2_word_start, lambda_32, TAIL_CALL,
  POS(173, 16),
  POS(173, 11)
};

static TAB_NUM t_lambda_32[] = {
  1, // locals
  0, // parameters
  // 1:
  var_std__less, 2, num_1, var_130_5_nth, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_33, lambda_34, TAIL_CALL,
  POS(178, 23),
  POS(177, 15)
};

static TAB_NUM t_lambda_33[] = {
  0, // locals
  0, // parameters
  // dec &nth
  var_dec, 1, var_130_5_nth, 1, var_130_5_nth,
  // search_for_word_start
  func_search_for_word_start, 0, TAIL_CALL,
  POS(179, 19),
  POS(180, 19)
};

static TAB_NUM t_lambda_34[] = {
  1, // locals
  0, // parameters
  // i-s
  var_std__minus, 2, var_139_6_i, var_140_6_s, 1, LOCAL(1),
  //  s i-s
  LET, 2, var_140_6_s, LOCAL(1), TAIL_CALL,
  POS(181, 22),
  POS(181, 19)
};

static TAB_NUM t_func_2_word_start[] = {
  1, // locals
  0, // parameters
  // inc &i
  var_inc, 1, var_139_6_i, 1, var_139_6_i,
  // n
  var_std__less, 2, var_132_4_n, var_139_6_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_35, lambda_36, TAIL_CALL,
  POS(184, 7),
  POS(186, 13),
  POS(185, 7)
};

static TAB_NUM t_lambda_35[] = {
  0, // locals
  0, // parameters
  //  undefined undefined
  LET, 2, var_undefined, var_undefined, TAIL_CALL,
  POS(187, 11)
};

static TAB_NUM t_lambda_36[] = {
  1, // locals
  0, // parameters
  // str(i)
  var_129_5_str, 1, var_139_6_i, 1, LOCAL(1),
  // case str(i)
  var_case, 4, LOCAL(1), sequence_63_12, func_3_within_word, func_search_for_word_start, TAIL_CALL,
  POS(189, 16),
  POS(189, 11)
};

static TAB_NUM t_func_search_backwards[] = {
  0, // locals
  0, // parameters
  // $i n+1
  var_std__plus, 2, var_132_4_n, num_1, 1, var_194_6_i,
  // $e undefined
  LET, 1, var_undefined, 1, var_195_6_e,
  // search_for_word_end
  func_search_for_word_end, 0, TAIL_CALL,
  POS(194, 5),
  POS(195, 5),
  POS(196, 5)
};

static TAB_NUM t_func_search_for_word_end[] = {
  1, // locals
  0, // parameters
  // dec &i
  var_dec, 1, var_194_6_i, 1, var_194_6_i,
  // i < 1
  var_std__less, 2, var_194_6_i, num_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_37, lambda_38, TAIL_CALL,
  POS(199, 7),
  POS(201, 9),
  POS(200, 7)
};

static TAB_NUM t_lambda_37[] = {
  0, // locals
  0, // parameters
  //  undefined undefined
  LET, 2, var_undefined, var_undefined, TAIL_CALL,
  POS(202, 11)
};

static TAB_NUM t_lambda_38[] = {
  1, // locals
  0, // parameters
  // str(i)
  var_129_5_str, 1, var_194_6_i, 1, LOCAL(1),
  // case str(i)
  var_case, 4, LOCAL(1), sequence_63_12, lambda_39, func_search_for_word_end, TAIL_CALL,
  POS(204, 16),
  POS(204, 11)
};

static TAB_NUM t_lambda_39[] = {
  0, // locals
  0, // parameters
  // !e i
  LET, 1, var_194_6_i, 1, var_195_6_e,
  // within_word
  func_4_within_word, 0, TAIL_CALL,
  POS(206, 15),
  POS(207, 15)
};

static TAB_NUM t_func_4_within_word[] = {
  1, // locals
  0, // parameters
  // dec &i
  var_dec, 1, var_194_6_i, 1, var_194_6_i,
  // i < 1:
  var_std__less, 2, var_194_6_i, num_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_40, lambda_41, TAIL_CALL,
  POS(211, 7),
  POS(213, 9),
  POS(212, 7)
};

static TAB_NUM t_lambda_40[] = {
  0, // locals
  0, // parameters
  // check_start -> undefined undefined
  func_2_check_start, 1, lambda_check_start, TAIL_CALL,
  POS(214, 11)
};

static TAB_NUM t_lambda_check_start[] = {
  0, // locals
  0, // parameters
  //  undefined undefined
  LET, 2, var_undefined, var_undefined, TAIL_CALL,
  POS(214, 25)
};

static TAB_NUM t_lambda_41[] = {
  1, // locals
  0, // parameters
  // str(i)
  var_129_5_str, 1, var_194_6_i, 1, LOCAL(1),
  // case str(i)
  var_case, 6, LOCAL(1), sequence_63_12, func_4_within_word, chr_95, func_2_word_end, lambda_42, TAIL_CALL,
  POS(216, 16),
  POS(216, 11)
};

static TAB_NUM t_lambda_42[] = {
  0, // locals
  0, // parameters
  // check_start search_for_word_end
  func_2_check_start, 1, func_search_for_word_end, TAIL_CALL,
  POS(220, 15)
};

static TAB_NUM t_func_2_word_end[] = {
  1, // locals
  0, // parameters
  // dec &i
  var_dec, 1, var_194_6_i, 1, var_194_6_i,
  // i < 1
  var_std__less, 2, var_194_6_i, num_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_43, lambda_44, TAIL_CALL,
  POS(223, 7),
  POS(225, 9),
  POS(224, 7)
};

static TAB_NUM t_lambda_43[] = {
  0, // locals
  0, // parameters
  //  undefined undefined
  LET, 2, var_undefined, var_undefined, TAIL_CALL,
  POS(226, 11)
};

static TAB_NUM t_lambda_44[] = {
  1, // locals
  0, // parameters
  // str(i)
  var_129_5_str, 1, var_194_6_i, 1, LOCAL(1),
  // case str(i)
  var_case, 4, LOCAL(1), sequence_63_12, func_4_within_word, func_search_for_word_end, TAIL_CALL,
  POS(228, 16),
  POS(228, 11)
};

static TAB_NUM t_func_2_check_start[] = {
  3, // locals
  1, // parameters
  var_232_20_continuation,
  // i+1)
  var_std__plus, 2, var_194_6_i, num_1, 1, LOCAL(1),
  // $chr str(i+1)
  var_129_5_str, 1, LOCAL(1), 1, var_233_8_chr,
  // chr >= '0' && chr <= '9'
  var_std__less, 2, var_233_8_chr, chr_48, 1, LOCAL(1),
  // chr >= '0' && chr <= '9'
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // chr >= '0' && chr <= '9'
  var_std__and, 2, LOCAL(2), lambda_45, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), var_232_20_continuation, lambda_46, TAIL_CALL,
  POS(233, 16),
  POS(233, 7),
  POS(235, 9),
  POS(235, 9),
  POS(235, 9),
  POS(234, 7)
};

static TAB_NUM t_lambda_45[] = {
  2, // locals
  0, // parameters
  // 9'
  var_std__less, 2, chr_57, var_233_8_chr, 1, LOCAL(1),
  // 9'
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // chr <= '9'
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(235, 31),
  POS(235, 31),
  POS(235, 23)
};

static TAB_NUM t_lambda_46[] = {
  1, // locals
  0, // parameters
  // inc &nth
  var_inc, 1, var_130_5_nth, 1, var_130_5_nth,
  // nth == 0
  var_std__equal, 2, var_130_5_nth, num_0, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_47, var_232_20_continuation, TAIL_CALL,
  POS(238, 11),
  POS(240, 13),
  POS(239, 11)
};

static TAB_NUM t_lambda_47[] = {
  2, // locals
  0, // parameters
  // i+1 e-i
  var_std__plus, 2, var_194_6_i, num_1, 1, LOCAL(1),
  // e-i
  var_std__minus, 2, var_195_6_e, var_194_6_i, 1, LOCAL(2),
  //  i+1 e-i
  LET, 2, LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(241, 16),
  POS(241, 20),
  POS(241, 15)
};

static TAB_NUM t_func_std_types__WHITESPACE___match[] = {
  1, // locals
  2, // parameters
  LOCAL(1),
  var_271_5_str,
  // $i 0
  LET, 1, num_0, 1, var_273_4_i,
  // $n length_of(str)
  var_length_of, 1, var_271_5_str, 1, var_274_4_n,
  // n == 0
  var_std__equal, 2, var_274_4_n, num_0, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_48, lambda_49, TAIL_CALL,
  POS(273, 3),
  POS(274, 3),
  POS(276, 5),
  POS(275, 3)
};

static TAB_NUM t_lambda_48[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(277, 7)
};

static TAB_NUM t_lambda_49[] = {
  0, // locals
  0, // parameters
  // loop:
  var_loop, 1, lambda_loop, TAIL_CALL,
  POS(279, 7)
};

static TAB_NUM t_lambda_loop[] = {
  1, // locals
  0, // parameters
  // inc &i
  var_inc, 1, var_273_4_i, 1, var_273_4_i,
  // n
  var_std__less, 2, var_274_4_n, var_273_4_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_50, lambda_51, TAIL_CALL,
  POS(280, 9),
  POS(282, 15),
  POS(281, 9)
};

static TAB_NUM t_lambda_50[] = {
  0, // locals
  0, // parameters
  //  n
  LET, 1, var_274_4_n, TAIL_CALL,
  POS(283, 13)
};

static TAB_NUM t_lambda_51[] = {
  2, // locals
  0, // parameters
  // str(i).is_a_whitespace_character
  var_271_5_str, 1, var_273_4_i, 1, LOCAL(1),
  // is_a_whitespace_character
  var_is_a_whitespace_character, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), var_next, lambda_52, TAIL_CALL,
  POS(286, 15),
  POS(286, 22),
  POS(285, 13)
};

static TAB_NUM t_lambda_52[] = {
  1, // locals
  0, // parameters
  // 1
  var_std__less, 2, num_1, var_273_4_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_53, lambda_54, TAIL_CALL,
  POS(290, 23),
  POS(289, 17)
};

static TAB_NUM t_lambda_53[] = {
  1, // locals
  0, // parameters
  // i-1
  var_std__minus, 2, var_273_4_i, num_1, 1, LOCAL(1),
  //  i-1
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(291, 22),
  POS(291, 21)
};

static TAB_NUM t_lambda_54[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(292, 21)
};

static TAB_NUM t_func_std_types__WHITESPACE___match_back[] = {
  1, // locals
  2, // parameters
  LOCAL(1),
  var_297_5_str,
  // $n length_of(str)
  var_length_of, 1, var_297_5_str, 1, var_299_4_n,
  // n == 0
  var_std__equal, 2, var_299_4_n, num_0, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_55, lambda_56, TAIL_CALL,
  POS(299, 3),
  POS(301, 5),
  POS(300, 3)
};

static TAB_NUM t_lambda_55[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(302, 7)
};

static TAB_NUM t_lambda_56[] = {
  0, // locals
  0, // parameters
  // $i n+1
  var_std__plus, 2, var_299_4_n, num_1, 1, var_304_8_i,
  // loop:
  var_loop, 1, lambda_2_loop, TAIL_CALL,
  POS(304, 7),
  POS(305, 7)
};

static TAB_NUM t_lambda_2_loop[] = {
  1, // locals
  0, // parameters
  // dec &i
  var_dec, 1, var_304_8_i, 1, var_304_8_i,
  // i < 1
  var_std__less, 2, var_304_8_i, num_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_57, lambda_58, TAIL_CALL,
  POS(306, 9),
  POS(308, 11),
  POS(307, 9)
};

static TAB_NUM t_lambda_57[] = {
  0, // locals
  0, // parameters
  //  n
  LET, 1, var_299_4_n, TAIL_CALL,
  POS(309, 13)
};

static TAB_NUM t_lambda_58[] = {
  2, // locals
  0, // parameters
  // str(i).is_a_whitespace_character
  var_297_5_str, 1, var_304_8_i, 1, LOCAL(1),
  // is_a_whitespace_character
  var_is_a_whitespace_character, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), var_next, lambda_59, TAIL_CALL,
  POS(312, 15),
  POS(312, 22),
  POS(311, 13)
};

static TAB_NUM t_lambda_59[] = {
  1, // locals
  0, // parameters
  // i < n
  var_std__less, 2, var_304_8_i, var_299_4_n, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_60, lambda_61, TAIL_CALL,
  POS(316, 19),
  POS(315, 17)
};

static TAB_NUM t_lambda_60[] = {
  1, // locals
  0, // parameters
  // n-i
  var_std__minus, 2, var_299_4_n, var_304_8_i, 1, LOCAL(1),
  //  n-i
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(317, 22),
  POS(317, 21)
};

static TAB_NUM t_lambda_61[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(318, 21)
};

static TAB_NUM t_func_std_types__WHITESPACE___search[] = {
  1, // locals
  -3, // parameters
  MANDATORY_PARAMETER, LOCAL(1),
  MANDATORY_PARAMETER, var_345_5_str,
  num_1, var_346_5_nth,
  // $n length_of(str)
  var_length_of, 1, var_345_5_str, 1, var_348_4_n,
  // nth < 0
  var_std__less, 2, var_346_5_nth, num_0, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), func_2_search_backwards, func_2_search_forwards, TAIL_CALL,
  POS(348, 3),
  POS(350, 5),
  POS(349, 3)
};

static TAB_NUM t_func_2_search_forwards[] = {
  0, // locals
  0, // parameters
  // $i 0
  LET, 1, num_0, 1, var_355_6_i,
  // $s undefined
  LET, 1, var_undefined, 1, var_356_6_s,
  // search_for_whitespace
  func_search_for_whitespace, 0, TAIL_CALL,
  POS(355, 5),
  POS(356, 5),
  POS(357, 5)
};

static TAB_NUM t_func_search_for_whitespace[] = {
  1, // locals
  0, // parameters
  // inc &i
  var_inc, 1, var_355_6_i, 1, var_355_6_i,
  // n
  var_std__less, 2, var_348_4_n, var_355_6_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_62, lambda_63, TAIL_CALL,
  POS(360, 7),
  POS(362, 13),
  POS(361, 7)
};

static TAB_NUM t_lambda_62[] = {
  0, // locals
  0, // parameters
  //  undefined undefined
  LET, 2, var_undefined, var_undefined, TAIL_CALL,
  POS(363, 11)
};

static TAB_NUM t_lambda_63[] = {
  2, // locals
  0, // parameters
  // str(i).is_a_whitespace_character
  var_345_5_str, 1, var_355_6_i, 1, LOCAL(1),
  // is_a_whitespace_character
  var_is_a_whitespace_character, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_64, func_search_for_whitespace, TAIL_CALL,
  POS(366, 13),
  POS(366, 20),
  POS(365, 11)
};

static TAB_NUM t_lambda_64[] = {
  0, // locals
  0, // parameters
  // !s i
  LET, 1, var_355_6_i, 1, var_356_6_s,
  // match_more_whitespace
  func_match_more_whitespace, 0, TAIL_CALL,
  POS(368, 15),
  POS(369, 15)
};

static TAB_NUM t_func_match_more_whitespace[] = {
  1, // locals
  0, // parameters
  // inc &i
  var_inc, 1, var_355_6_i, 1, var_355_6_i,
  // n:
  var_std__less, 2, var_348_4_n, var_355_6_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_65, lambda_68, TAIL_CALL,
  POS(373, 7),
  POS(375, 13),
  POS(374, 7)
};

static TAB_NUM t_lambda_65[] = {
  1, // locals
  0, // parameters
  // 1
  var_std__less, 2, num_1, var_346_5_nth, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_66, lambda_67, TAIL_CALL,
  POS(377, 19),
  POS(376, 11)
};

static TAB_NUM t_lambda_66[] = {
  0, // locals
  0, // parameters
  //  undefined undefined
  LET, 2, var_undefined, var_undefined, TAIL_CALL,
  POS(378, 15)
};

static TAB_NUM t_lambda_67[] = {
  1, // locals
  0, // parameters
  // i-s
  var_std__minus, 2, var_355_6_i, var_356_6_s, 1, LOCAL(1),
  //  s i-s
  LET, 2, var_356_6_s, LOCAL(1), TAIL_CALL,
  POS(379, 18),
  POS(379, 15)
};

static TAB_NUM t_lambda_68[] = {
  2, // locals
  0, // parameters
  // str(i).is_a_whitespace_character
  var_345_5_str, 1, var_355_6_i, 1, LOCAL(1),
  // is_a_whitespace_character
  var_is_a_whitespace_character, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), func_match_more_whitespace, lambda_69, TAIL_CALL,
  POS(382, 13),
  POS(382, 20),
  POS(381, 11)
};

static TAB_NUM t_lambda_69[] = {
  1, // locals
  0, // parameters
  // 1:
  var_std__less, 2, num_1, var_346_5_nth, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_70, lambda_71, TAIL_CALL,
  POS(386, 23),
  POS(385, 15)
};

static TAB_NUM t_lambda_70[] = {
  0, // locals
  0, // parameters
  // dec &nth
  var_dec, 1, var_346_5_nth, 1, var_346_5_nth,
  // search_for_whitespace
  func_search_for_whitespace, 0, TAIL_CALL,
  POS(387, 19),
  POS(388, 19)
};

static TAB_NUM t_lambda_71[] = {
  1, // locals
  0, // parameters
  // i-s
  var_std__minus, 2, var_355_6_i, var_356_6_s, 1, LOCAL(1),
  //  s i-s
  LET, 2, var_356_6_s, LOCAL(1), TAIL_CALL,
  POS(389, 22),
  POS(389, 19)
};

static TAB_NUM t_func_2_search_backwards[] = {
  0, // locals
  0, // parameters
  // $i n+1
  var_std__plus, 2, var_348_4_n, num_1, 1, var_392_6_i,
  // $e undefined
  LET, 1, var_undefined, 1, var_393_6_e,
  // search_for_whitespace
  func_2_search_for_whitespace, 0, TAIL_CALL,
  POS(392, 5),
  POS(393, 5),
  POS(394, 5)
};

static TAB_NUM t_func_2_search_for_whitespace[] = {
  1, // locals
  0, // parameters
  // dec &i
  var_dec, 1, var_392_6_i, 1, var_392_6_i,
  // i < 1
  var_std__less, 2, var_392_6_i, num_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_72, lambda_73, TAIL_CALL,
  POS(397, 7),
  POS(399, 9),
  POS(398, 7)
};

static TAB_NUM t_lambda_72[] = {
  0, // locals
  0, // parameters
  //  undefined undefined
  LET, 2, var_undefined, var_undefined, TAIL_CALL,
  POS(400, 11)
};

static TAB_NUM t_lambda_73[] = {
  2, // locals
  0, // parameters
  // str(i).is_a_whitespace_character
  var_345_5_str, 1, var_392_6_i, 1, LOCAL(1),
  // is_a_whitespace_character
  var_is_a_whitespace_character, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_74, func_2_search_for_whitespace, TAIL_CALL,
  POS(403, 13),
  POS(403, 20),
  POS(402, 11)
};

static TAB_NUM t_lambda_74[] = {
  0, // locals
  0, // parameters
  // !e i
  LET, 1, var_392_6_i, 1, var_393_6_e,
  // match_more_whitespace
  func_2_match_more_whitespace, 0, TAIL_CALL,
  POS(405, 15),
  POS(406, 15)
};

static TAB_NUM t_func_2_match_more_whitespace[] = {
  1, // locals
  0, // parameters
  // dec &i
  var_dec, 1, var_392_6_i, 1, var_392_6_i,
  // i < 1:
  var_std__less, 2, var_392_6_i, num_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_75, lambda_78, TAIL_CALL,
  POS(410, 7),
  POS(412, 9),
  POS(411, 7)
};

static TAB_NUM t_lambda_75[] = {
  1, // locals
  0, // parameters
  // inc &nth
  var_inc, 1, var_346_5_nth, 1, var_346_5_nth,
  // nth == 0
  var_std__equal, 2, var_346_5_nth, num_0, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_76, lambda_77, TAIL_CALL,
  POS(413, 11),
  POS(415, 13),
  POS(414, 11)
};

static TAB_NUM t_lambda_76[] = {
  0, // locals
  0, // parameters
  //  1 e
  LET, 2, num_1, var_393_6_e, TAIL_CALL,
  POS(416, 15)
};

static TAB_NUM t_lambda_77[] = {
  0, // locals
  0, // parameters
  //  undefined undefined
  LET, 2, var_undefined, var_undefined, TAIL_CALL,
  POS(417, 15)
};

static TAB_NUM t_lambda_78[] = {
  2, // locals
  0, // parameters
  // str(i).is_a_whitespace_character
  var_345_5_str, 1, var_392_6_i, 1, LOCAL(1),
  // is_a_whitespace_character
  var_is_a_whitespace_character, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), func_2_match_more_whitespace, lambda_79, TAIL_CALL,
  POS(420, 13),
  POS(420, 20),
  POS(419, 11)
};

static TAB_NUM t_lambda_79[] = {
  1, // locals
  0, // parameters
  // inc &nth
  var_inc, 1, var_346_5_nth, 1, var_346_5_nth,
  // nth == 0
  var_std__equal, 2, var_346_5_nth, num_0, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_80, func_2_search_for_whitespace, TAIL_CALL,
  POS(423, 15),
  POS(425, 17),
  POS(424, 15)
};

static TAB_NUM t_lambda_80[] = {
  2, // locals
  0, // parameters
  // i+1 e-i
  var_std__plus, 2, var_392_6_i, num_1, 1, LOCAL(1),
  // e-i
  var_std__minus, 2, var_393_6_e, var_392_6_i, 1, LOCAL(2),
  //  i+1 e-i
  LET, 2, LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(426, 20),
  POS(426, 24),
  POS(426, 19)
};

static TAB_NUM t_func_std__many[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 437_5_expr
  // .expression_of expr)
  LET, -1, var_std_types__many, var_expression_of, LOCAL(2), LOCAL(1),
  // -> std_types::many(.expression_of expr)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(439, 22),
  POS(439, 3)
};

static TAB_NUM t_func_std_types__many___match[] = {
  3, // locals
  2, // parameters
  LOCAL(2), // 453_5_self
  var_454_5_str,
  // $rc result_count()
  var_result_count, 0, 1, LOCAL(3),
  // $expr expression_of(self)
  var_expression_of, 1, LOCAL(2), 1, var_457_4_expr,
  // rc == 1:
  var_std__equal, 2, LOCAL(3), num_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_81, lambda_91, TAIL_CALL,
  POS(456, 3),
  POS(457, 3),
  POS(459, 5),
  POS(458, 3)
};

static TAB_NUM t_lambda_81[] = {
  1, // locals
  0, // parameters
  // match $i expr str
  var_match, 2, var_457_4_expr, var_454_5_str, 1, var_460_14_i,
  // is_undefined
  var_is_undefined, 1, var_460_14_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_82, lambda_83, TAIL_CALL,
  POS(460, 7),
  POS(462, 11),
  POS(461, 7)
};

static TAB_NUM t_lambda_82[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(463, 11)
};

static TAB_NUM t_lambda_83[] = {
  1, // locals
  0, // parameters
  // i == 0
  var_std__equal, 2, var_460_14_i, num_0, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_84, lambda_85, TAIL_CALL,
  POS(466, 13),
  POS(465, 11)
};

static TAB_NUM t_lambda_84[] = {
  0, // locals
  0, // parameters
  //  0
  LET, 1, num_0, TAIL_CALL,
  POS(467, 15)
};

static TAB_NUM t_lambda_85[] = {
  0, // locals
  0, // parameters
  // !i i+1
  var_std__plus, 2, var_460_14_i, num_1, 1, var_460_14_i,
  // $n length_of(str)
  var_length_of, 1, var_454_5_str, 1, var_470_16_n,
  // loop:
  var_loop, 1, lambda_3_loop, TAIL_CALL,
  POS(469, 15),
  POS(470, 15),
  POS(471, 15)
};

static TAB_NUM t_lambda_3_loop[] = {
  1, // locals
  0, // parameters
  // n
  var_std__less, 2, var_470_16_n, var_460_14_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_86, lambda_87, TAIL_CALL,
  POS(473, 23),
  POS(472, 17)
};

static TAB_NUM t_lambda_86[] = {
  0, // locals
  0, // parameters
  //  n
  LET, 1, var_470_16_n, TAIL_CALL,
  POS(474, 21)
};

static TAB_NUM t_lambda_87[] = {
  2, // locals
  0, // parameters
  // range(str i n)
  var_range, 3, var_454_5_str, var_460_14_i, var_470_16_n, 1, LOCAL(1),
  // match $len expr range(str i n)
  var_match, 2, var_457_4_expr, LOCAL(1), 1, var_476_28_len,
  // is_undefined || len == 0
  var_is_undefined, 1, var_476_28_len, 1, LOCAL(1),
  // is_undefined || len == 0
  var_std__or, 2, LOCAL(1), lambda_88, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_89, lambda_90, TAIL_CALL,
  POS(476, 37),
  POS(476, 21),
  POS(478, 27),
  POS(478, 27),
  POS(477, 21)
};

static TAB_NUM t_lambda_88[] = {
  1, // locals
  0, // parameters
  // len == 0
  var_std__equal, 2, var_476_28_len, num_0, 1, LOCAL(1),
  // len == 0
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(478, 43),
  POS(478, 43)
};

static TAB_NUM t_lambda_89[] = {
  1, // locals
  0, // parameters
  // i-1
  var_std__minus, 2, var_460_14_i, num_1, 1, LOCAL(1),
  //  i-1
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(479, 26),
  POS(479, 25)
};

static TAB_NUM t_lambda_90[] = {
  0, // locals
  0, // parameters
  // plus &i len
  var_plus, 2, var_460_14_i, var_476_28_len, 1, var_460_14_i,
  // next
  var_next, 0, TAIL_CALL,
  POS(481, 25),
  POS(482, 25)
};

static TAB_NUM t_lambda_91[] = {
  1, // locals
  0, // parameters
  // $captured_items empty_list
  LET, 1, var_empty_list, 1, var_484_8_captured_items,
  // match $i expr str $captured_item
  var_match, 2, var_457_4_expr, var_454_5_str, 2, var_485_14_i, var_485_26_captured_item,
  // is_undefined
  var_is_undefined, 1, var_485_14_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_92, lambda_93, TAIL_CALL,
  POS(484, 7),
  POS(485, 7),
  POS(487, 11),
  POS(486, 7)
};

static TAB_NUM t_lambda_92[] = {
  0, // locals
  0, // parameters
  //  undefined undefined
  LET, 2, var_undefined, var_undefined, TAIL_CALL,
  POS(488, 11)
};

static TAB_NUM t_lambda_93[] = {
  1, // locals
  0, // parameters
  // i == 0
  var_std__equal, 2, var_485_14_i, num_0, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_94, lambda_95, TAIL_CALL,
  POS(491, 13),
  POS(490, 11)
};

static TAB_NUM t_lambda_94[] = {
  0, // locals
  0, // parameters
  //  0 undefined
  LET, 2, num_0, var_undefined, TAIL_CALL,
  POS(492, 15)
};

static TAB_NUM t_lambda_95[] = {
  1, // locals
  0, // parameters
  // is_defined &captured_items
  var_is_defined, 1, var_485_26_captured_item, 1, LOCAL(1),
  // update_if captured_item.is_defined &captured_items
  var_update_if, 3, LOCAL(1), var_484_8_captured_items, lambda_96, 1, var_484_8_captured_items,
  // !i i+1
  var_std__plus, 2, var_485_14_i, num_1, 1, var_485_14_i,
  // $n length_of(str)
  var_length_of, 1, var_454_5_str, 1, var_497_16_n,
  // loop:
  var_loop, 1, lambda_4_loop, TAIL_CALL,
  POS(494, 39),
  POS(494, 15),
  POS(496, 15),
  POS(497, 15),
  POS(498, 15)
};

static TAB_NUM t_lambda_96[] = {
  1, // locals
  0, // parameters
  // list(captured_item)
  var_list, 1, var_485_26_captured_item, 1, LOCAL(1),
  //  list(captured_item)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(495, 20),
  POS(495, 19)
};

static TAB_NUM t_lambda_4_loop[] = {
  1, // locals
  0, // parameters
  // n
  var_std__less, 2, var_497_16_n, var_485_14_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_97, lambda_98, TAIL_CALL,
  POS(500, 23),
  POS(499, 17)
};

static TAB_NUM t_lambda_97[] = {
  0, // locals
  0, // parameters
  //  n captured_items
  LET, 2, var_497_16_n, var_484_8_captured_items, TAIL_CALL,
  POS(501, 21)
};

static TAB_NUM t_lambda_98[] = {
  2, // locals
  0, // parameters
  // range(str i n) !captured_item
  var_range, 3, var_454_5_str, var_485_14_i, var_497_16_n, 1, LOCAL(1),
  // match $len expr range(str i n) !captured_item
  var_match, 2, var_457_4_expr, LOCAL(1), 2, var_503_28_len, var_485_26_captured_item,
  // is_undefined || len == 0
  var_is_undefined, 1, var_503_28_len, 1, LOCAL(1),
  // is_undefined || len == 0
  var_std__or, 2, LOCAL(1), lambda_99, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_100, lambda_101, TAIL_CALL,
  POS(503, 37),
  POS(503, 21),
  POS(505, 27),
  POS(505, 27),
  POS(504, 21)
};

static TAB_NUM t_lambda_99[] = {
  1, // locals
  0, // parameters
  // len == 0
  var_std__equal, 2, var_503_28_len, num_0, 1, LOCAL(1),
  // len == 0
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(505, 43),
  POS(505, 43)
};

static TAB_NUM t_lambda_100[] = {
  1, // locals
  0, // parameters
  // i-1 captured_items
  var_std__minus, 2, var_485_14_i, num_1, 1, LOCAL(1),
  //  i-1 captured_items
  LET, 2, LOCAL(1), var_484_8_captured_items, TAIL_CALL,
  POS(506, 26),
  POS(506, 25)
};

static TAB_NUM t_lambda_101[] = {
  1, // locals
  0, // parameters
  // plus &i len
  var_plus, 2, var_485_14_i, var_503_28_len, 1, var_485_14_i,
  // is_defined:
  var_is_defined, 1, var_485_26_captured_item, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_captured_item_is_defined, var_next, TAIL_CALL,
  POS(508, 25),
  POS(510, 41),
  POS(509, 25)
};

static TAB_NUM t_lambda_captured_item_is_defined[] = {
  0, // locals
  0, // parameters
  // push &captured_items captured_item
  var_push, 2, var_484_8_captured_items, var_485_26_captured_item, 1, var_484_8_captured_items,
  // next
  var_next, 0, TAIL_CALL,
  POS(511, 29),
  POS(512, 29)
};

static TAB_NUM t_func_std_types__many___match_back[] = {
  3, // locals
  2, // parameters
  LOCAL(3), // 527_5_self
  var_528_5_str,
  // $expr expression_of(self)
  var_expression_of, 1, LOCAL(3), 1, var_530_4_expr,
  // match_back $i expr str
  var_match_back, 2, var_530_4_expr, var_528_5_str, 1, var_531_15_i,
  // is_undefined || i == 0
  var_is_undefined, 1, var_531_15_i, 1, LOCAL(1),
  // is_undefined || i == 0
  var_std__or, 2, LOCAL(1), lambda_102, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_103, lambda_104, TAIL_CALL,
  POS(530, 3),
  POS(531, 3),
  POS(533, 7),
  POS(533, 7),
  POS(532, 3)
};

static TAB_NUM t_lambda_102[] = {
  1, // locals
  0, // parameters
  // i == 0
  var_std__equal, 2, var_531_15_i, num_0, 1, LOCAL(1),
  // i == 0
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(533, 23),
  POS(533, 23)
};

static TAB_NUM t_lambda_103[] = {
  0, // locals
  0, // parameters
  //  i
  LET, 1, var_531_15_i, TAIL_CALL,
  POS(534, 7)
};

static TAB_NUM t_lambda_104[] = {
  0, // locals
  0, // parameters
  // $n length_of(str)
  var_length_of, 1, var_528_5_str, 1, var_536_8_n,
  // !i n-i
  var_std__minus, 2, var_536_8_n, var_531_15_i, 1, var_531_15_i,
  // loop:
  var_loop, 1, lambda_5_loop, TAIL_CALL,
  POS(536, 7),
  POS(537, 7),
  POS(538, 7)
};

static TAB_NUM t_lambda_5_loop[] = {
  1, // locals
  0, // parameters
  // i < 1
  var_std__less, 2, var_531_15_i, num_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_105, lambda_106, TAIL_CALL,
  POS(540, 11),
  POS(539, 9)
};

static TAB_NUM t_lambda_105[] = {
  0, // locals
  0, // parameters
  //  n
  LET, 1, var_536_8_n, TAIL_CALL,
  POS(541, 13)
};

static TAB_NUM t_lambda_106[] = {
  2, // locals
  0, // parameters
  // range(str 1 i)
  var_range, 3, var_528_5_str, num_1, var_531_15_i, 1, LOCAL(1),
  // match_back $len expr range(str 1 i)
  var_match_back, 2, var_530_4_expr, LOCAL(1), 1, var_543_25_len,
  // is_undefined || len == 0
  var_is_undefined, 1, var_543_25_len, 1, LOCAL(1),
  // is_undefined || len == 0
  var_std__or, 2, LOCAL(1), lambda_107, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_108, lambda_109, TAIL_CALL,
  POS(543, 34),
  POS(543, 13),
  POS(545, 19),
  POS(545, 19),
  POS(544, 13)
};

static TAB_NUM t_lambda_107[] = {
  1, // locals
  0, // parameters
  // len == 0
  var_std__equal, 2, var_543_25_len, num_0, 1, LOCAL(1),
  // len == 0
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(545, 35),
  POS(545, 35)
};

static TAB_NUM t_lambda_108[] = {
  1, // locals
  0, // parameters
  // n-i
  var_std__minus, 2, var_536_8_n, var_531_15_i, 1, LOCAL(1),
  //  n-i
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(546, 18),
  POS(546, 17)
};

static TAB_NUM t_lambda_109[] = {
  0, // locals
  0, // parameters
  // minus &i len
  var_minus, 2, var_531_15_i, var_543_25_len, 1, var_531_15_i,
  // next
  var_next, 0, TAIL_CALL,
  POS(548, 17),
  POS(549, 17)
};

static TAB_NUM t_func_std_types__many___search[] = {
  2, // locals
  -3, // parameters
  MANDATORY_PARAMETER, LOCAL(2), // 564_5_self
  MANDATORY_PARAMETER, var_565_5_str,
  num_1, var_566_5_nth,
  // $expr expression_of(self)
  var_expression_of, 1, LOCAL(2), 1, var_568_4_expr,
  // $n length_of(str)
  var_length_of, 1, var_565_5_str, 1, var_569_4_n,
  // nth < 0
  var_std__less, 2, var_566_5_nth, num_0, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), func_3_search_backwards, func_3_search_forwards, TAIL_CALL,
  POS(568, 3),
  POS(569, 3),
  POS(571, 5),
  POS(570, 3)
};

static TAB_NUM t_func_3_search_forwards[] = {
  0, // locals
  0, // parameters
  // $i 1
  LET, 1, num_1, 1, var_576_6_i,
  // search_next
  func_search_next, 0, TAIL_CALL,
  POS(576, 5),
  POS(577, 5)
};

static TAB_NUM t_func_search_next[] = {
  2, // locals
  0, // parameters
  // n+1
  var_std__plus, 2, var_569_4_n, num_1, 1, LOCAL(1),
  // n+1
  var_std__less, 2, LOCAL(1), var_576_6_i, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_110, lambda_111, TAIL_CALL,
  POS(581, 13),
  POS(581, 13),
  POS(580, 7)
};

static TAB_NUM t_lambda_110[] = {
  0, // locals
  0, // parameters
  //  undefined undefined
  LET, 2, var_undefined, var_undefined, TAIL_CALL,
  POS(582, 11)
};

static TAB_NUM t_lambda_111[] = {
  1, // locals
  0, // parameters
  // range(str i n) 1 $pos $len
  var_range, 3, var_565_5_str, var_576_6_i, var_569_4_n, 1, LOCAL(1),
  // search expr range(str i n) 1 $pos $len
  var_search, 3, var_568_4_expr, LOCAL(1), num_1, 2, var_584_41_pos, var_584_46_len,
  // is_undefined
  var_is_undefined, 1, var_584_41_pos, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_112, lambda_113, TAIL_CALL,
  POS(584, 23),
  POS(584, 11),
  POS(586, 17),
  POS(585, 11)
};

static TAB_NUM t_lambda_112[] = {
  0, // locals
  0, // parameters
  //  undefined undefined
  LET, 2, var_undefined, var_undefined, TAIL_CALL,
  POS(587, 15)
};

static TAB_NUM t_lambda_113[] = {
  1, // locals
  0, // parameters
  // i+pos-1
  var_std__plus, 2, var_576_6_i, var_584_41_pos, 1, LOCAL(1),
  // !i i+pos-1
  var_std__minus, 2, LOCAL(1), num_1, 1, var_576_6_i,
  // dec &nth
  var_dec, 1, var_566_5_nth, 1, var_566_5_nth,
  // len == 0:
  var_std__equal, 2, var_584_46_len, num_0, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_114, lambda_117, TAIL_CALL,
  POS(589, 18),
  POS(589, 15),
  POS(590, 15),
  POS(592, 17),
  POS(591, 15)
};

static TAB_NUM t_lambda_114[] = {
  1, // locals
  0, // parameters
  // nth < 1
  var_std__less, 2, var_566_5_nth, num_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_115, lambda_116, TAIL_CALL,
  POS(594, 21),
  POS(593, 19)
};

static TAB_NUM t_lambda_115[] = {
  0, // locals
  0, // parameters
  //  i 0
  LET, 2, var_576_6_i, num_0, TAIL_CALL,
  POS(595, 23)
};

static TAB_NUM t_lambda_116[] = {
  0, // locals
  0, // parameters
  // inc &i
  var_inc, 1, var_576_6_i, 1, var_576_6_i,
  // search_next
  func_search_next, 0, TAIL_CALL,
  POS(597, 23),
  POS(598, 23)
};

static TAB_NUM t_lambda_117[] = {
  0, // locals
  0, // parameters
  // $s i
  LET, 1, var_576_6_i, 1, var_600_20_s,
  // loop:
  var_loop, 1, lambda_6_loop, TAIL_CALL,
  POS(600, 19),
  POS(601, 19)
};

static TAB_NUM t_lambda_6_loop[] = {
  2, // locals
  0, // parameters
  // plus &i len
  var_plus, 2, var_576_6_i, var_584_46_len, 1, var_576_6_i,
  // range(str i n) !len
  var_range, 3, var_565_5_str, var_576_6_i, var_569_4_n, 1, LOCAL(1),
  // match expr range(str i n) !len
  var_match, 2, var_568_4_expr, LOCAL(1), 1, var_584_46_len,
  // is_undefined || len == 0:
  var_is_undefined, 1, var_584_46_len, 1, LOCAL(1),
  // is_undefined || len == 0:
  var_std__or, 2, LOCAL(1), lambda_118, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_119, var_next, TAIL_CALL,
  POS(602, 21),
  POS(603, 32),
  POS(603, 21),
  POS(605, 27),
  POS(605, 27),
  POS(604, 21)
};

static TAB_NUM t_lambda_118[] = {
  1, // locals
  0, // parameters
  // len == 0:
  var_std__equal, 2, var_584_46_len, num_0, 1, LOCAL(1),
  // len == 0:
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(605, 43),
  POS(605, 43)
};

static TAB_NUM t_lambda_119[] = {
  1, // locals
  0, // parameters
  // nth < 1
  var_std__less, 2, var_566_5_nth, num_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_120, lambda_121, TAIL_CALL,
  POS(607, 27),
  POS(606, 25)
};

static TAB_NUM t_lambda_120[] = {
  1, // locals
  0, // parameters
  // i-s
  var_std__minus, 2, var_576_6_i, var_600_20_s, 1, LOCAL(1),
  //  s i-s
  LET, 2, var_600_20_s, LOCAL(1), TAIL_CALL,
  POS(608, 32),
  POS(608, 29)
};

static TAB_NUM t_lambda_121[] = {
  0, // locals
  0, // parameters
  // inc &i
  var_inc, 1, var_576_6_i, 1, var_576_6_i,
  // search_next
  func_search_next, 0, TAIL_CALL,
  POS(610, 29),
  POS(611, 29)
};

static TAB_NUM t_func_3_search_backwards[] = {
  0, // locals
  0, // parameters
  // $i n
  LET, 1, var_569_4_n, 1, var_615_6_i,
  // search_next
  func_2_search_next, 0, TAIL_CALL,
  POS(615, 5),
  POS(616, 5)
};

static TAB_NUM t_func_2_search_next[] = {
  1, // locals
  0, // parameters
  // i < 1
  var_std__less, 2, var_615_6_i, num_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_122, lambda_123, TAIL_CALL,
  POS(620, 9),
  POS(619, 7)
};

static TAB_NUM t_lambda_122[] = {
  0, // locals
  0, // parameters
  //  undefined undefined
  LET, 2, var_undefined, var_undefined, TAIL_CALL,
  POS(621, 11)
};

static TAB_NUM t_lambda_123[] = {
  1, // locals
  0, // parameters
  // range(str 1 i) -1 !i $len
  var_range, 3, var_565_5_str, num_1, var_615_6_i, 1, LOCAL(1),
  // search expr range(str 1 i) -1 !i $len
  var_search, 3, var_568_4_expr, LOCAL(1), minus_num_1, 2, var_615_6_i, var_623_45_len,
  // is_undefined
  var_is_undefined, 1, var_615_6_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_124, lambda_125, TAIL_CALL,
  POS(623, 23),
  POS(623, 11),
  POS(625, 15),
  POS(624, 11)
};

static TAB_NUM t_lambda_124[] = {
  0, // locals
  0, // parameters
  //  undefined undefined
  LET, 2, var_undefined, var_undefined, TAIL_CALL,
  POS(626, 15)
};

static TAB_NUM t_lambda_125[] = {
  1, // locals
  0, // parameters
  // inc &nth
  var_inc, 1, var_566_5_nth, 1, var_566_5_nth,
  // len == 0:
  var_std__equal, 2, var_623_45_len, num_0, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_126, lambda_129, TAIL_CALL,
  POS(628, 15),
  POS(630, 17),
  POS(629, 15)
};

static TAB_NUM t_lambda_126[] = {
  2, // locals
  0, // parameters
  // nth >= 0
  var_std__less, 2, var_566_5_nth, num_0, 1, LOCAL(1),
  // nth >= 0
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_127, lambda_128, TAIL_CALL,
  POS(632, 21),
  POS(632, 21),
  POS(631, 19)
};

static TAB_NUM t_lambda_127[] = {
  2, // locals
  0, // parameters
  // n-i+1
  var_std__minus, 2, var_569_4_n, var_615_6_i, 1, LOCAL(1),
  // n-i+1
  var_std__plus, 2, LOCAL(1), num_1, 1, LOCAL(2),
  //  i n-i+1
  LET, 2, var_615_6_i, LOCAL(2), TAIL_CALL,
  POS(633, 26),
  POS(633, 26),
  POS(633, 23)
};

static TAB_NUM t_lambda_128[] = {
  0, // locals
  0, // parameters
  // dec &i
  var_dec, 1, var_615_6_i, 1, var_615_6_i,
  // search_next
  func_2_search_next, 0, TAIL_CALL,
  POS(635, 23),
  POS(636, 23)
};

static TAB_NUM t_lambda_129[] = {
  0, // locals
  0, // parameters
  // dec &i
  var_dec, 1, var_615_6_i, 1, var_615_6_i,
  // $e i+len
  var_std__plus, 2, var_615_6_i, var_623_45_len, 1, var_639_20_e,
  // loop:
  var_loop, 1, lambda_7_loop, TAIL_CALL,
  POS(638, 19),
  POS(639, 19),
  POS(640, 19)
};

static TAB_NUM t_lambda_7_loop[] = {
  2, // locals
  0, // parameters
  // range(str 1 i) !len
  var_range, 3, var_565_5_str, num_1, var_615_6_i, 1, LOCAL(1),
  // match_back expr range(str 1 i) !len
  var_match_back, 2, var_568_4_expr, LOCAL(1), 1, var_623_45_len,
  // is_undefined || len == 0:
  var_is_undefined, 1, var_623_45_len, 1, LOCAL(1),
  // is_undefined || len == 0:
  var_std__or, 2, LOCAL(1), lambda_130, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_131, lambda_134, TAIL_CALL,
  POS(641, 37),
  POS(641, 21),
  POS(643, 27),
  POS(643, 27),
  POS(642, 21)
};

static TAB_NUM t_lambda_130[] = {
  1, // locals
  0, // parameters
  // len == 0:
  var_std__equal, 2, var_623_45_len, num_0, 1, LOCAL(1),
  // len == 0:
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(643, 43),
  POS(643, 43)
};

static TAB_NUM t_lambda_131[] = {
  2, // locals
  0, // parameters
  // nth >= 0
  var_std__less, 2, var_566_5_nth, num_0, 1, LOCAL(1),
  // nth >= 0
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_132, lambda_133, TAIL_CALL,
  POS(645, 27),
  POS(645, 27),
  POS(644, 25)
};

static TAB_NUM t_lambda_132[] = {
  2, // locals
  0, // parameters
  // i+1 e-i
  var_std__plus, 2, var_615_6_i, num_1, 1, LOCAL(1),
  // e-i
  var_std__minus, 2, var_639_20_e, var_615_6_i, 1, LOCAL(2),
  //  i+1 e-i
  LET, 2, LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(646, 30),
  POS(646, 34),
  POS(646, 29)
};

static TAB_NUM t_lambda_133[] = {
  0, // locals
  0, // parameters
  // dec &i
  var_dec, 1, var_615_6_i, 1, var_615_6_i,
  // search_next
  func_2_search_next, 0, TAIL_CALL,
  POS(648, 29),
  POS(649, 29)
};

static TAB_NUM t_lambda_134[] = {
  0, // locals
  0, // parameters
  // minus &i len
  var_minus, 2, var_615_6_i, var_623_45_len, 1, var_615_6_i,
  // next
  var_next, 0, TAIL_CALL,
  POS(651, 25),
  POS(652, 25)
};

static TAB_NUM t_func_std__some[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 659_5_expr
  // .expression_of expr)
  LET, -1, var_std_types__some, var_expression_of, LOCAL(2), LOCAL(1),
  // -> std_types::some(.expression_of expr)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(661, 22),
  POS(661, 3)
};

static TAB_NUM t_func_std_types__some___match[] = {
  3, // locals
  2, // parameters
  LOCAL(2), // 687_5_self
  var_688_5_str,
  // $rc result_count()
  var_result_count, 0, 1, LOCAL(3),
  // $expr expression_of(self)
  var_expression_of, 1, LOCAL(2), 1, var_691_4_expr,
  // $i 1
  LET, 1, num_1, 1, var_692_4_i,
  // rc == 1:
  var_std__equal, 2, LOCAL(3), num_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_135, lambda_139, TAIL_CALL,
  POS(690, 3),
  POS(691, 3),
  POS(692, 3),
  POS(694, 5),
  POS(693, 3)
};

static TAB_NUM t_lambda_135[] = {
  0, // locals
  0, // parameters
  // loop:
  var_loop, 1, lambda_8_loop, TAIL_CALL,
  POS(695, 7)
};

static TAB_NUM t_lambda_8_loop[] = {
  2, // locals
  0, // parameters
  // range(str i -1)
  var_range, 3, var_688_5_str, var_692_4_i, minus_num_1, 1, LOCAL(1),
  // match $len expr range(str i -1)
  var_match, 2, var_691_4_expr, LOCAL(1), 1, var_696_16_len,
  // is_undefined || len == 0
  var_is_undefined, 1, var_696_16_len, 1, LOCAL(1),
  // is_undefined || len == 0
  var_std__or, 2, LOCAL(1), lambda_136, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_137, lambda_138, TAIL_CALL,
  POS(696, 25),
  POS(696, 9),
  POS(698, 15),
  POS(698, 15),
  POS(697, 9)
};

static TAB_NUM t_lambda_136[] = {
  1, // locals
  0, // parameters
  // len == 0
  var_std__equal, 2, var_696_16_len, num_0, 1, LOCAL(1),
  // len == 0
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(698, 31),
  POS(698, 31)
};

static TAB_NUM t_lambda_137[] = {
  1, // locals
  0, // parameters
  // i-1
  var_std__minus, 2, var_692_4_i, num_1, 1, LOCAL(1),
  //  i-1
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(699, 14),
  POS(699, 13)
};

static TAB_NUM t_lambda_138[] = {
  0, // locals
  0, // parameters
  // plus &i len
  var_plus, 2, var_692_4_i, var_696_16_len, 1, var_692_4_i,
  // next
  var_next, 0, TAIL_CALL,
  POS(701, 13),
  POS(702, 13)
};

static TAB_NUM t_lambda_139[] = {
  0, // locals
  0, // parameters
  // $captured_items empty_list
  LET, 1, var_empty_list, 1, var_704_8_captured_items,
  // loop:
  var_loop, 1, lambda_9_loop, TAIL_CALL,
  POS(704, 7),
  POS(705, 7)
};

static TAB_NUM t_lambda_9_loop[] = {
  2, // locals
  0, // parameters
  // range(str i -1)
  var_range, 3, var_688_5_str, var_692_4_i, minus_num_1, 1, LOCAL(1),
  // match $len $captured_item expr range(str i -1)
  var_match, 2, var_691_4_expr, LOCAL(1), 2, var_706_16_len, var_706_21_captured_item,
  // is_undefined || len == 0
  var_is_undefined, 1, var_706_16_len, 1, LOCAL(1),
  // is_undefined || len == 0
  var_std__or, 2, LOCAL(1), lambda_140, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_141, lambda_142, TAIL_CALL,
  POS(706, 40),
  POS(706, 9),
  POS(708, 15),
  POS(708, 15),
  POS(707, 9)
};

static TAB_NUM t_lambda_140[] = {
  1, // locals
  0, // parameters
  // len == 0
  var_std__equal, 2, var_706_16_len, num_0, 1, LOCAL(1),
  // len == 0
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(708, 31),
  POS(708, 31)
};

static TAB_NUM t_lambda_141[] = {
  1, // locals
  0, // parameters
  // i-1 captured_items
  var_std__minus, 2, var_692_4_i, num_1, 1, LOCAL(1),
  //  i-1 captured_items
  LET, 2, LOCAL(1), var_704_8_captured_items, TAIL_CALL,
  POS(709, 14),
  POS(709, 13)
};

static TAB_NUM t_lambda_142[] = {
  1, // locals
  0, // parameters
  // plus &i len
  var_plus, 2, var_692_4_i, var_706_16_len, 1, var_692_4_i,
  // is_defined:
  var_is_defined, 1, var_706_21_captured_item, 1, LOCAL(1),
  // if
  var_if, 2, LOCAL(1), lambda_2_captured_item_is_defined, 0,
  // next
  var_next, 0, TAIL_CALL,
  POS(711, 13),
  POS(713, 29),
  POS(712, 13),
  POS(716, 13)
};

static TAB_NUM t_lambda_2_captured_item_is_defined[] = {
  0, // locals
  0, // parameters
  // push &captured_items captured_item
  var_push, 2, var_704_8_captured_items, var_706_21_captured_item, 1, var_704_8_captured_items,
  // next
  var_next, 0, TAIL_CALL,
  POS(714, 17),
  POS(715, 17)
};

static TAB_NUM t_func_std_types__some___match_back[] = {
  3, // locals
  2, // parameters
  LOCAL(2), // 720_5_self
  var_721_5_str,
  // $rc result_count()
  var_result_count, 0, 1, LOCAL(3),
  // $expr expression_of(self)
  var_expression_of, 1, LOCAL(2), 1, var_724_4_expr,
  // $n length_of(str)
  var_length_of, 1, var_721_5_str, 1, var_725_4_n,
  // $i n
  LET, 1, var_725_4_n, 1, var_726_4_i,
  // rc == 1:
  var_std__equal, 2, LOCAL(3), num_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_143, lambda_147, TAIL_CALL,
  POS(723, 3),
  POS(724, 3),
  POS(725, 3),
  POS(726, 3),
  POS(728, 5),
  POS(727, 3)
};

static TAB_NUM t_lambda_143[] = {
  0, // locals
  0, // parameters
  // loop:
  var_loop, 1, lambda_10_loop, TAIL_CALL,
  POS(729, 7)
};

static TAB_NUM t_lambda_10_loop[] = {
  2, // locals
  0, // parameters
  // range(str 1 i)
  var_range, 3, var_721_5_str, num_1, var_726_4_i, 1, LOCAL(1),
  // match_back $len expr range(str 1 i)
  var_match_back, 2, var_724_4_expr, LOCAL(1), 1, var_730_21_len,
  // is_undefined || len == 0
  var_is_undefined, 1, var_730_21_len, 1, LOCAL(1),
  // is_undefined || len == 0
  var_std__or, 2, LOCAL(1), lambda_144, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_145, lambda_146, TAIL_CALL,
  POS(730, 30),
  POS(730, 9),
  POS(732, 15),
  POS(732, 15),
  POS(731, 9)
};

static TAB_NUM t_lambda_144[] = {
  1, // locals
  0, // parameters
  // len == 0
  var_std__equal, 2, var_730_21_len, num_0, 1, LOCAL(1),
  // len == 0
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(732, 31),
  POS(732, 31)
};

static TAB_NUM t_lambda_145[] = {
  1, // locals
  0, // parameters
  // n-i
  var_std__minus, 2, var_725_4_n, var_726_4_i, 1, LOCAL(1),
  //  n-i
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(733, 14),
  POS(733, 13)
};

static TAB_NUM t_lambda_146[] = {
  0, // locals
  0, // parameters
  // minus &i len
  var_minus, 2, var_726_4_i, var_730_21_len, 1, var_726_4_i,
  // next
  var_next, 0, TAIL_CALL,
  POS(735, 13),
  POS(736, 13)
};

static TAB_NUM t_lambda_147[] = {
  0, // locals
  0, // parameters
  // $captured_items empty_list
  LET, 1, var_empty_list, 1, var_738_8_captured_items,
  // loop:
  var_loop, 1, lambda_11_loop, TAIL_CALL,
  POS(738, 7),
  POS(739, 7)
};

static TAB_NUM t_lambda_11_loop[] = {
  2, // locals
  0, // parameters
  // range(str 1 i)
  var_range, 3, var_721_5_str, num_1, var_726_4_i, 1, LOCAL(1),
  // match_back $len $captured_item expr range(str 1 i)
  var_match_back, 2, var_724_4_expr, LOCAL(1), 2, var_740_21_len, var_740_26_captured_item,
  // is_undefined || len == 0
  var_is_undefined, 1, var_740_21_len, 1, LOCAL(1),
  // is_undefined || len == 0
  var_std__or, 2, LOCAL(1), lambda_148, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_149, lambda_150, TAIL_CALL,
  POS(740, 45),
  POS(740, 9),
  POS(742, 15),
  POS(742, 15),
  POS(741, 9)
};

static TAB_NUM t_lambda_148[] = {
  1, // locals
  0, // parameters
  // len == 0
  var_std__equal, 2, var_740_21_len, num_0, 1, LOCAL(1),
  // len == 0
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(742, 31),
  POS(742, 31)
};

static TAB_NUM t_lambda_149[] = {
  1, // locals
  0, // parameters
  // n-i captured_items
  var_std__minus, 2, var_725_4_n, var_726_4_i, 1, LOCAL(1),
  //  n-i captured_items
  LET, 2, LOCAL(1), var_738_8_captured_items, TAIL_CALL,
  POS(743, 14),
  POS(743, 13)
};

static TAB_NUM t_lambda_150[] = {
  1, // locals
  0, // parameters
  // minus &i len
  var_minus, 2, var_726_4_i, var_740_21_len, 1, var_726_4_i,
  // is_defined:
  var_is_defined, 1, var_740_26_captured_item, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_3_captured_item_is_defined, var_next, TAIL_CALL,
  POS(745, 13),
  POS(747, 29),
  POS(746, 13)
};

static TAB_NUM t_lambda_3_captured_item_is_defined[] = {
  0, // locals
  0, // parameters
  // put &captured_items captured_item
  var_put, 2, var_738_8_captured_items, var_740_26_captured_item, 1, var_738_8_captured_items,
  // next
  var_next, 0, TAIL_CALL,
  POS(748, 17),
  POS(749, 17)
};

static TAB_NUM t_func_std__optional[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 757_5_expr
  // .expression_of expr)
  LET, -1, var_std_types__optional, var_expression_of, LOCAL(2), LOCAL(1),
  // -> std_types::optional(.expression_of expr)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(759, 26),
  POS(759, 3)
};

static TAB_NUM t_func_std_types__optional___match[] = {
  3, // locals
  2, // parameters
  LOCAL(2), // 763_5_self
  var_764_5_str,
  // $rc result_count()
  var_result_count, 0, 1, LOCAL(3),
  // $expr expression_of(self)
  var_expression_of, 1, LOCAL(2), 1, var_767_4_expr,
  // rc == 1:
  var_std__equal, 2, LOCAL(3), num_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_151, lambda_154, TAIL_CALL,
  POS(766, 3),
  POS(767, 3),
  POS(769, 5),
  POS(768, 3)
};

static TAB_NUM t_lambda_151[] = {
  1, // locals
  0, // parameters
  // match $i expr str
  var_match, 2, var_767_4_expr, var_764_5_str, 1, var_770_14_i,
  // is_undefined
  var_is_undefined, 1, var_770_14_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_152, lambda_153, TAIL_CALL,
  POS(770, 7),
  POS(772, 11),
  POS(771, 7)
};

static TAB_NUM t_lambda_152[] = {
  0, // locals
  0, // parameters
  //  0
  LET, 1, num_0, TAIL_CALL,
  POS(773, 11)
};

static TAB_NUM t_lambda_153[] = {
  0, // locals
  0, // parameters
  //  i
  LET, 1, var_770_14_i, TAIL_CALL,
  POS(774, 11)
};

static TAB_NUM t_lambda_154[] = {
  1, // locals
  0, // parameters
  // match $i expr str $captured_item
  var_match, 2, var_767_4_expr, var_764_5_str, 2, var_776_14_i, var_776_26_captured_item,
  // is_undefined
  var_is_undefined, 1, var_776_14_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_155, lambda_156, TAIL_CALL,
  POS(776, 7),
  POS(778, 11),
  POS(777, 7)
};

static TAB_NUM t_lambda_155[] = {
  0, // locals
  0, // parameters
  //  0 undefined
  LET, 2, num_0, var_undefined, TAIL_CALL,
  POS(779, 11)
};

static TAB_NUM t_lambda_156[] = {
  0, // locals
  0, // parameters
  //  i captured_item
  LET, 2, var_776_14_i, var_776_26_captured_item, TAIL_CALL,
  POS(780, 11)
};

static TAB_NUM t_func_std_types__anything___match[] = {
  2, // locals
  2, // parameters
  LOCAL(1),
  LOCAL(2), // 799_5_str
  // length_of(str)
  var_length_of, 1, LOCAL(2), 1, LOCAL(1),
  // -> length_of(str)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(801, 6),
  POS(801, 3)
};

static TAB_NUM t_func_std_types__anything___match_back[] = {
  2, // locals
  2, // parameters
  LOCAL(1),
  LOCAL(2), // 806_5_str
  // length_of(str)
  var_length_of, 1, LOCAL(2), 1, LOCAL(1),
  // -> length_of(str)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(808, 6),
  POS(808, 3)
};

static TAB_NUM t_func_std_types__anything___search[] = {
  2, // locals
  -3, // parameters
  MANDATORY_PARAMETER, LOCAL(1),
  MANDATORY_PARAMETER, LOCAL(2), // 813_5_str
  num_1, LOCAL(1),
  // length_of(str)
  var_length_of, 1, LOCAL(2), 1, LOCAL(1),
  // -> 1 length_of(str)
  LET, 2, num_1, LOCAL(1), TAIL_CALL,
  POS(816, 8),
  POS(816, 3)
};

static TAB_NUM t_func_std__any_character_but[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 823_5_expr
  // .expression_of expr)
  LET, -1, var_std_types__any_character_but, var_expression_of, LOCAL(2), LOCAL(1),
  // -> std_types::any_character_but(.expression_of expr)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(825, 35),
  POS(825, 3)
};

static TAB_NUM t_func_std_types__any_character_but___match[] = {
  5, // locals
  2, // parameters
  LOCAL(2), // 829_5_self
  LOCAL(3), // 830_5_str
  // $expr expression_of(self)
  var_expression_of, 1, LOCAL(2), 1, LOCAL(4),
  // match $i expr str
  var_match, 2, LOCAL(4), LOCAL(3), 1, LOCAL(5),
  // is_undefined
  var_is_undefined, 1, LOCAL(5), 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_157, lambda_158, TAIL_CALL,
  POS(832, 3),
  POS(833, 3),
  POS(835, 7),
  POS(834, 3)
};

static TAB_NUM t_lambda_157[] = {
  0, // locals
  0, // parameters
  //  1
  LET, 1, num_1, TAIL_CALL,
  POS(836, 7)
};

static TAB_NUM t_lambda_158[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(837, 7)
};

static TAB_NUM t_func_std__capture[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 844_5_expr
  // .expression_of expr)
  LET, -1, var_std_types__capture, var_expression_of, LOCAL(2), LOCAL(1),
  // -> std_types::capture(.expression_of expr)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(846, 25),
  POS(846, 3)
};

static TAB_NUM t_func_std_types__capture___match[] = {
  4, // locals
  2, // parameters
  LOCAL(2), // 850_5_self
  var_851_5_str,
  // $rc result_count()
  var_result_count, 0, 1, LOCAL(3),
  // $expr expression_of(self)
  var_expression_of, 1, LOCAL(2), 1, LOCAL(4),
  // match $len expr str
  var_match, 2, LOCAL(4), var_851_5_str, 1, var_855_10_len,
  // rc == 1
  var_std__equal, 2, LOCAL(3), num_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_159, lambda_160, TAIL_CALL,
  POS(853, 3),
  POS(854, 3),
  POS(855, 3),
  POS(857, 5),
  POS(856, 3)
};

static TAB_NUM t_lambda_159[] = {
  0, // locals
  0, // parameters
  //  len
  LET, 1, var_855_10_len, TAIL_CALL,
  POS(858, 7)
};

static TAB_NUM t_lambda_160[] = {
  1, // locals
  0, // parameters
  // is_undefined
  var_is_undefined, 1, var_855_10_len, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_161, lambda_162, TAIL_CALL,
  POS(861, 13),
  POS(860, 7)
};

static TAB_NUM t_lambda_161[] = {
  0, // locals
  0, // parameters
  //  len undefined
  LET, 2, var_855_10_len, var_undefined, TAIL_CALL,
  POS(862, 11)
};

static TAB_NUM t_lambda_162[] = {
  1, // locals
  0, // parameters
  // range(str 1 len)
  var_range, 3, var_851_5_str, num_1, var_855_10_len, 1, LOCAL(1),
  //  len range(str 1 len)
  LET, 2, var_855_10_len, LOCAL(1), TAIL_CALL,
  POS(863, 16),
  POS(863, 11)
};

static TAB_NUM t_func_std_types__capture___match_back[] = {
  4, // locals
  2, // parameters
  LOCAL(2), // 867_5_self
  var_868_5_str,
  // $rc result_count()
  var_result_count, 0, 1, LOCAL(3),
  // $expr expression_of(self)
  var_expression_of, 1, LOCAL(2), 1, LOCAL(4),
  // match_back $len expr str
  var_match_back, 2, LOCAL(4), var_868_5_str, 1, var_872_15_len,
  // rc == 1
  var_std__equal, 2, LOCAL(3), num_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_163, lambda_164, TAIL_CALL,
  POS(870, 3),
  POS(871, 3),
  POS(872, 3),
  POS(874, 5),
  POS(873, 3)
};

static TAB_NUM t_lambda_163[] = {
  0, // locals
  0, // parameters
  //  len
  LET, 1, var_872_15_len, TAIL_CALL,
  POS(875, 7)
};

static TAB_NUM t_lambda_164[] = {
  1, // locals
  0, // parameters
  // is_undefined
  var_is_undefined, 1, var_872_15_len, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_165, lambda_166, TAIL_CALL,
  POS(878, 13),
  POS(877, 7)
};

static TAB_NUM t_lambda_165[] = {
  0, // locals
  0, // parameters
  //  len undefined
  LET, 2, var_872_15_len, var_undefined, TAIL_CALL,
  POS(879, 11)
};

static TAB_NUM t_lambda_166[] = {
  2, // locals
  0, // parameters
  // len -1)
  var_std__negate, 1, var_872_15_len, 1, LOCAL(1),
  // range(str -len -1)
  var_range, 3, var_868_5_str, LOCAL(1), minus_num_1, 1, LOCAL(2),
  //  len range(str -len -1)
  LET, 2, var_872_15_len, LOCAL(2), TAIL_CALL,
  POS(880, 27),
  POS(880, 16),
  POS(880, 11)
};

static TAB_NUM t_func_std__alt[] = {
  2, // locals
  -1, // parameters
  REST_PARAMETER, LOCAL(2), // 887_5_expressions
  // .expressions_of expressions)
  LET, -1, var_std_types__alt, var_expressions_of, LOCAL(2), LOCAL(1),
  // -> std_types::alt(.expressions_of expressions)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(889, 21),
  POS(889, 3)
};

static TAB_NUM t_func_std_types__alt___match[] = {
  2, // locals
  2, // parameters
  LOCAL(2), // 893_5_self
  var_894_5_str,
  // expressions_of(self)
  var_expressions_of, 1, LOCAL(2), 1, LOCAL(1),
  // for_each expressions_of(self)
  var_for_each, 3, LOCAL(1), lambda_167, lambda_169, TAIL_CALL,
  POS(896, 12),
  POS(896, 3)
};

static TAB_NUM t_lambda_167[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 897_8_expr
  // match $len expr str
  var_match, 2, LOCAL(2), var_894_5_str, 1, var_898_14_len,
  // is_defined
  var_is_defined, 1, var_898_14_len, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_168, var_next, TAIL_CALL,
  POS(898, 7),
  POS(900, 13),
  POS(899, 7)
};

static TAB_NUM t_lambda_168[] = {
  0, // locals
  0, // parameters
  //  len
  LET, 1, var_898_14_len, TAIL_CALL,
  POS(901, 11)
};

static TAB_NUM t_lambda_169[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(903, 7)
};

static int value_range_50_10_arguments[] = {
  -chr_97, -chr_122
};

static int value_range_50_22_arguments[] = {
  -chr_65, -chr_90
};

static int sequence_50_10_arguments[] = {
  -value_range_50_10, -value_range_50_22
};

static int value_range_63_36_arguments[] = {
  -chr_48, -chr_57
};

static int sequence_63_12_arguments[] = {
  -value_range_50_10, -value_range_50_22, -value_range_63_36
};

static int sequence_157_22_arguments[] = {
  -value_range_50_10, -value_range_50_22, -value_range_63_36, -chr_95
};

static FUNKY_CONSTANT constants_table[] = {
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__FUNKY_IDENTIFIER___match}},
  {FLT_POSITIVE_INT64, 0, {.value = 1}},
  {FLT_POSITIVE_INT64, 0, {.value = 0}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1}},
  {FLT_CHARACTER, 0, {.value = 97}},
  {FLT_CHARACTER, 0, {.value = 122}},
  {FLT_VALUE_RANGE, 2, {.arguments = value_range_50_10_arguments}},
  {FLT_CHARACTER, 0, {.value = 65}},
  {FLT_CHARACTER, 0, {.value = 90}},
  {FLT_VALUE_RANGE, 2, {.arguments = value_range_50_22_arguments}},
  {FLT_SEQUENCE, 2, {.arguments = sequence_50_10_arguments}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_within_word}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_3}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_4}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_5}},
  {FLT_CHARACTER, 0, {.value = 48}},
  {FLT_CHARACTER, 0, {.value = 57}},
  {FLT_VALUE_RANGE, 2, {.arguments = value_range_63_36_arguments}},
  {FLT_SEQUENCE, 3, {.arguments = sequence_63_12_arguments}},
  {FLT_CHARACTER, 0, {.value = 95}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_6}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_7}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_8}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_word_start}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_9}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_10}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_11}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_12}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_fail}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_13}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_14}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__FUNKY_IDENTIFIER___match_back}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_word_end}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_15}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_16}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_17}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_2_within_word}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_18}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_check_start}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_19}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_20}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_21}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__FUNKY_IDENTIFIER___search}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_search_forwards}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_search_for_word_start}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_22}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_23}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_24}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_25}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_26}},
  {FLT_SEQUENCE, 4, {.arguments = sequence_157_22_arguments}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_27}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_3_within_word}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_28}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_29}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_30}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_31}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_32}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_33}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_34}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_2_word_start}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_35}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_36}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_search_backwards}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_search_for_word_end}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_37}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_38}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_39}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_4_within_word}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_40}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_check_start}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_41}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_42}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_2_word_end}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_43}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_44}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_2_check_start}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_45}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_46}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_47}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__WHITESPACE___match}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_48}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_49}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_50}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_51}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_52}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_53}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_54}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__WHITESPACE___match_back}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_55}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_56}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_57}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_58}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_59}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_60}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_61}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__WHITESPACE___search}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_2_search_forwards}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_search_for_whitespace}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_62}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_63}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_64}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_match_more_whitespace}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_65}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_66}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_67}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_68}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_69}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_70}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_71}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_2_search_backwards}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_2_search_for_whitespace}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_72}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_73}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_74}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_2_match_more_whitespace}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_75}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_76}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_77}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_78}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_79}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_80}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__many}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__many___match}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_81}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_82}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_83}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_84}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_85}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_3_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_86}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_87}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_88}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_89}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_90}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_91}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_92}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_93}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_94}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_95}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_96}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_4_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_97}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_98}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_99}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_100}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_101}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_captured_item_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__many___match_back}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_102}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_103}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_104}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_5_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_105}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_106}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_107}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_108}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_109}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__many___search}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_3_search_forwards}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_search_next}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_110}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_111}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_112}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_113}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_114}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_115}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_116}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_117}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_6_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_118}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_119}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_120}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_121}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_3_search_backwards}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_2_search_next}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_122}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_123}},
  {FLT_NEGATIVE_INT64, 0, {.value = 1}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_124}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_125}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_126}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_127}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_128}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_129}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_7_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_130}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_131}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_132}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_133}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_134}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__some}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__some___match}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_135}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_8_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_136}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_137}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_138}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_139}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_9_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_140}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_141}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_142}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2_captured_item_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__some___match_back}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_143}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_10_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_144}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_145}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_146}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_147}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_11_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_148}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_149}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_150}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_3_captured_item_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__optional}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__optional___match}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_151}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_152}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_153}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_154}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_155}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_156}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__anything___match}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__anything___match_back}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__anything___search}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__any_character_but}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__any_character_but___match}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_157}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_158}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__capture}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__capture___match}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_159}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_160}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_161}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_162}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__capture___match_back}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_163}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_164}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_165}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_166}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__alt}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__alt___match}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_167}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_168}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_169}}
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
    {.position = POS(28, 1)}
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
    {.position = POS(32, 30)}
  },
  {
    FOT_DERIVED, 0, 0,
    "FUNKY_IDENTIFIER\000std", NULL,
    {"FUNKY_IDENTIFIER\000std_types"}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "match\000", NULL,
    {.position = POS(36, 30)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "39_5_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "41_4_rc\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "result_count\000", NULL,
    {.position = POS(41, 7)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "42_4_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "43_4_n\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "length_of\000", NULL,
    {.position = POS(43, 6)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "equal\000std", NULL,
    {.position = POS(46, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "value_range\000std", NULL,
    {.position = POS(50, 10)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "sequence\000std", NULL,
    {.position = POS(50, 10)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "case\000", NULL,
    {.position = POS(49, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if\000", NULL,
    {.position = POS(45, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "inc\000", NULL,
    {.position = POS(54, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "less\000std", NULL,
    {.position = POS(56, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "range\000", NULL,
    {.position = POS(60, 16)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "minus\000std", NULL,
    {.position = POS(68, 18)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "undefined\000", NULL,
    {.position = POS(87, 10)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "match_back\000", NULL,
    {.position = POS(90, 30)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "93_5_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "95_4_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "96_4_i\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000std", NULL,
    {.position = POS(96, 6)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "dec\000", NULL,
    {.position = POS(100, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not\000std", NULL,
    {.position = POS(122, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "and\000std", NULL,
    {.position = POS(122, 7)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "search\000", NULL,
    {.position = POS(126, 30)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "129_5_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "130_5_nth\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "132_4_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "139_6_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "140_6_s\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "194_6_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "195_6_e\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "232_20_continuation\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "233_8_chr\000", NULL
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
    "271_5_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "273_4_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "274_4_n\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_a_whitespace_character\000", NULL,
    {.position = POS(286, 22)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "next\000", NULL,
    {.position = POS(287, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "loop\000", NULL,
    {.position = POS(279, 7)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "297_5_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "299_4_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "304_8_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "345_5_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "346_5_nth\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "348_4_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "355_6_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "356_6_s\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "392_6_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "393_6_e\000", NULL
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
    "454_5_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "457_4_expr\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "460_14_i\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_undefined\000", NULL,
    {.position = POS(462, 11)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "470_16_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "476_28_len\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "or\000std", NULL,
    {.position = POS(478, 27)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000", NULL,
    {.position = POS(481, 25)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "484_8_captured_items\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_list\000", NULL,
    {.position = POS(484, 23)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "485_14_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "485_26_captured_item\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_defined\000", NULL,
    {.position = POS(494, 39)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "list\000", NULL,
    {.position = POS(495, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "update_if\000", NULL,
    {.position = POS(494, 15)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "497_16_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "503_28_len\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "push\000", NULL,
    {.position = POS(511, 29)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "528_5_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "530_4_expr\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "531_15_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "536_8_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "543_25_len\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "minus\000", NULL,
    {.position = POS(548, 17)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "565_5_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "566_5_nth\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "568_4_expr\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "569_4_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "576_6_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "584_41_pos\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "584_46_len\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "600_20_s\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "615_6_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "623_45_len\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "639_20_e\000", NULL
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
    "688_5_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "691_4_expr\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "692_4_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "696_16_len\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "704_8_captured_items\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "706_16_len\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "706_21_captured_item\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "721_5_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "724_4_expr\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "725_4_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "726_4_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "730_21_len\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "738_8_captured_items\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "740_21_len\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "740_26_captured_item\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "put\000", NULL,
    {.position = POS(748, 17)}
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
    "764_5_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "767_4_expr\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "770_14_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "776_14_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "776_26_captured_item\000", NULL
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
    "851_5_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "855_10_len\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "868_5_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "872_15_len\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "negate\000std", NULL,
    {.position = POS(880, 27)}
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
    "894_5_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "898_14_len\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "for_each\000", NULL,
    {.position = POS(896, 3)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "DIGIT\000std", NULL,
    {.const_idx = -value_range_63_36}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "LETTER\000std", NULL,
    {.const_idx = -sequence_50_10}
  },
  {
    FOT_DERIVED, 0, 0,
    "set\000std", NULL,
    {"hash_set\000std"}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "hash_set\000std", NULL,
    {.position = POS(909, 11)}
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
  .feature_flags = FEAT_POSITIONS,
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
