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
  lambda_2 = -5,
  chr_97 = -6,
  chr_122 = -7,
  value_range_121_1 = -8,
  chr_65 = -9,
  chr_90 = -10,
  value_range_121_13 = -11,
  sequence_121_1 = -12,
  lambda_3 = -13,
  func_within_word = -14,
  lambda_4 = -15,
  lambda_5 = -16,
  chr_48 = -17,
  chr_57 = -18,
  value_range_131_25 = -19,
  sequence_131_1 = -20,
  chr_95 = -21,
  lambda_6 = -22,
  func_word_start = -23,
  lambda_7 = -24,
  func_std_types__FUNKY_IDENTIFIER___match_back = -25,
  func_word_end = -26,
  lambda_8 = -27,
  lambda_9 = -28,
  lambda_10 = -29,
  func_2_within_word = -30,
  lambda_11 = -31,
  func_check_start = -32,
  lambda_12 = -33,
  lambda_13 = -34,
  lambda_14 = -35,
  func_std_types__FUNKY_IDENTIFIER___search = -36,
  func_search_forwards = -37,
  func_search_for_word_start = -38,
  lambda_15 = -39,
  lambda_16 = -40,
  lambda_17 = -41,
  lambda_18 = -42,
  lambda_19 = -43,
  sequence_231_1 = -44,
  lambda_20 = -45,
  func_3_within_word = -46,
  lambda_21 = -47,
  lambda_22 = -48,
  lambda_23 = -49,
  lambda_24 = -50,
  lambda_25 = -51,
  lambda_26 = -52,
  lambda_27 = -53,
  func_2_word_start = -54,
  lambda_28 = -55,
  lambda_29 = -56,
  func_search_backwards = -57,
  func_search_for_word_end = -58,
  lambda_30 = -59,
  lambda_31 = -60,
  lambda_32 = -61,
  func_4_within_word = -62,
  lambda_33 = -63,
  lambda_check_start = -64,
  lambda_34 = -65,
  lambda_35 = -66,
  func_2_word_end = -67,
  lambda_36 = -68,
  lambda_37 = -69,
  func_2_check_start = -70,
  lambda_38 = -71,
  lambda_39 = -72,
  lambda_40 = -73,
  func_std_types__WHITESPACE___match = -74,
  lambda_41 = -75,
  lambda_42 = -76,
  lambda_loop = -77,
  lambda_43 = -78,
  lambda_44 = -79,
  lambda_45 = -80,
  lambda_46 = -81,
  lambda_47 = -82,
  func_std_types__WHITESPACE___match_back = -83,
  lambda_48 = -84,
  lambda_49 = -85,
  lambda_2_loop = -86,
  lambda_50 = -87,
  lambda_51 = -88,
  lambda_52 = -89,
  lambda_53 = -90,
  lambda_54 = -91,
  func_std_types__WHITESPACE___search = -92,
  func_2_search_forwards = -93,
  func_search_for_whitespace = -94,
  lambda_55 = -95,
  lambda_56 = -96,
  lambda_57 = -97,
  func_match_more_whitespace = -98,
  lambda_58 = -99,
  lambda_59 = -100,
  lambda_60 = -101,
  lambda_61 = -102,
  lambda_62 = -103,
  lambda_63 = -104,
  lambda_64 = -105,
  func_2_search_backwards = -106,
  func_2_search_for_whitespace = -107,
  lambda_65 = -108,
  lambda_66 = -109,
  lambda_67 = -110,
  func_2_match_more_whitespace = -111,
  lambda_68 = -112,
  lambda_69 = -113,
  lambda_70 = -114,
  lambda_71 = -115,
  lambda_72 = -116,
  lambda_73 = -117
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
  var_111_0_str, // dynamic
  var_113_1_i, // dynamic
  var_114_1_n, // dynamic
  var_length_of, // extern
  var_std__equal, // extern
  var_undefined, // extern
  var_std__value_range, // extern
  var_std__sequence, // extern
  var_case, // extern
  var_if, // extern
  var_inc, // extern
  var_std__less, // extern
  var_std__minus, // extern
  var_match_back, // extern polymorphic
  var_154_0_str, // dynamic
  var_156_1_n, // dynamic
  var_157_1_i, // dynamic
  var_std__plus, // extern
  var_dec, // extern
  var_std__not, // extern
  var_std__and, // extern
  var_search, // extern polymorphic
  var_203_0_str, // dynamic
  var_204_0_nth, // dynamic
  var_206_1_n, // dynamic
  var_213_1_i, // dynamic
  var_214_1_s, // dynamic
  var_268_1_i, // dynamic
  var_269_1_e, // dynamic
  var_306_15_continuation, // dynamic
  var_307_1_chr, // dynamic
  var_std_types__WHITESPACE, // derived
  var_std__WHITESPACE, // derived
  var_368_0_str, // dynamic
  var_370_1_i, // dynamic
  var_371_1_n, // dynamic
  var_is_a_whitespace_character, // extern
  var_next, // extern
  var_loop, // extern
  var_424_0_str, // dynamic
  var_426_1_n, // dynamic
  var_431_1_i, // dynamic
  var_484_0_str, // dynamic
  var_485_0_nth, // dynamic
  var_487_1_n, // dynamic
  var_494_1_i, // dynamic
  var_495_1_s, // dynamic
  var_531_1_i, // dynamic
  var_532_1_e, // dynamic
  var_std__alt, // derived
  var_std__hash_set, // extern
  var__END
};


static TAB_NUM t_func_std_types__FUNKY_IDENTIFIER___match[] = {
  1, // locals
  2, // parameters
  LOCAL(1),
  var_111_0_str,
  // $i 1
  LET, 1, num_1, 1, var_113_1_i,
  // $n length_of(str)
  var_length_of, 1, var_111_0_str, 1, var_114_1_n,
  // n == 0
  var_std__equal, 2, var_114_1_n, num_0, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1, lambda_2, TAIL_CALL,
  POS(113, 3),
  POS(114, 3),
  POS(117, 5),
  POS(116, 3)
};

static TAB_NUM t_lambda_1[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(118, 7)
};

static TAB_NUM t_lambda_2[] = {
  1, // locals
  0, // parameters
  // str(1)
  var_111_0_str, 1, num_1, 1, LOCAL(1),
  // case str(1)
  var_case, 4, LOCAL(1), sequence_121_1, func_within_word, lambda_3, TAIL_CALL,
  POS(120, 12),
  POS(120, 7)
};

static TAB_NUM t_lambda_3[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(122, 11)
};

static TAB_NUM t_func_within_word[] = {
  1, // locals
  0, // parameters
  // inc &i
  var_inc, 1, var_113_1_i, 1, var_113_1_i,
  // n
  var_std__less, 2, var_114_1_n, var_113_1_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_4, lambda_5, TAIL_CALL,
  POS(125, 5),
  POS(127, 11),
  POS(126, 5)
};

static TAB_NUM t_lambda_4[] = {
  0, // locals
  0, // parameters
  //  n
  LET, 1, var_114_1_n, TAIL_CALL,
  POS(128, 9)
};

static TAB_NUM t_lambda_5[] = {
  1, // locals
  0, // parameters
  // str(i)
  var_111_0_str, 1, var_113_1_i, 1, LOCAL(1),
  // case str(i)
  var_case, 6, LOCAL(1), sequence_131_1, func_within_word, chr_95, func_word_start, lambda_6, TAIL_CALL,
  POS(130, 14),
  POS(130, 9)
};

static TAB_NUM t_lambda_6[] = {
  1, // locals
  0, // parameters
  // i-1
  var_std__minus, 2, var_113_1_i, num_1, 1, LOCAL(1),
  //  i-1
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(133, 14),
  POS(133, 13)
};

static TAB_NUM t_func_word_start[] = {
  1, // locals
  0, // parameters
  // inc &i
  var_inc, 1, var_113_1_i, 1, var_113_1_i,
  // str(i)
  var_111_0_str, 1, var_113_1_i, 1, LOCAL(1),
  // case str(i)
  var_case, 4, LOCAL(1), sequence_131_1, func_within_word, lambda_7, TAIL_CALL,
  POS(136, 5),
  POS(137, 10),
  POS(137, 5)
};

static TAB_NUM t_lambda_7[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(139, 9)
};

static TAB_NUM t_func_std_types__FUNKY_IDENTIFIER___match_back[] = {
  1, // locals
  2, // parameters
  LOCAL(1),
  var_154_0_str,
  // $n length_of(str)
  var_length_of, 1, var_154_0_str, 1, var_156_1_n,
  // $i n+1
  var_std__plus, 2, var_156_1_n, num_1, 1, var_157_1_i,
  // word_end
  func_word_end, 0, TAIL_CALL,
  POS(156, 3),
  POS(157, 3),
  POS(158, 3)
};

static TAB_NUM t_func_word_end[] = {
  1, // locals
  0, // parameters
  // dec &i
  var_dec, 1, var_157_1_i, 1, var_157_1_i,
  // i < 1
  var_std__less, 2, var_157_1_i, num_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_8, lambda_9, TAIL_CALL,
  POS(161, 5),
  POS(163, 7),
  POS(162, 5)
};

static TAB_NUM t_lambda_8[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(164, 9)
};

static TAB_NUM t_lambda_9[] = {
  1, // locals
  0, // parameters
  // str(i)
  var_154_0_str, 1, var_157_1_i, 1, LOCAL(1),
  // case str(i)
  var_case, 4, LOCAL(1), sequence_131_1, func_2_within_word, lambda_10, TAIL_CALL,
  POS(166, 14),
  POS(166, 9)
};

static TAB_NUM t_lambda_10[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(168, 13)
};

static TAB_NUM t_func_2_within_word[] = {
  1, // locals
  0, // parameters
  // dec &i
  var_dec, 1, var_157_1_i, 1, var_157_1_i,
  // i < 1
  var_std__less, 2, var_157_1_i, num_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), func_check_start, lambda_11, TAIL_CALL,
  POS(171, 5),
  POS(173, 7),
  POS(172, 5)
};

static TAB_NUM t_lambda_11[] = {
  1, // locals
  0, // parameters
  // str(i)
  var_154_0_str, 1, var_157_1_i, 1, LOCAL(1),
  // case str(i)
  var_case, 6, LOCAL(1), sequence_131_1, func_2_within_word, chr_95, func_word_end, func_check_start, TAIL_CALL,
  POS(176, 14),
  POS(176, 9)
};

static TAB_NUM t_func_check_start[] = {
  5, // locals
  0, // parameters
  // i+1) >= '0' && str(i+1) <= '9'
  var_std__plus, 2, var_157_1_i, num_1, 1, LOCAL(1),
  // str(i+1) >= '0' && str(i+1) <= '9'
  var_154_0_str, 1, LOCAL(1), 1, LOCAL(2),
  // str(i+1) >= '0' && str(i+1) <= '9'
  var_std__less, 2, LOCAL(2), chr_48, 1, LOCAL(3),
  // str(i+1) >= '0' && str(i+1) <= '9'
  var_std__not, 1, LOCAL(3), 1, LOCAL(4),
  // str(i+1) >= '0' && str(i+1) <= '9'
  var_std__and, 2, LOCAL(4), lambda_12, 1, LOCAL(5),
  // if
  var_if, 3, LOCAL(5), lambda_13, lambda_14, TAIL_CALL,
  POS(183, 11),
  POS(183, 7),
  POS(183, 7),
  POS(183, 7),
  POS(183, 7),
  POS(182, 5)
};

static TAB_NUM t_lambda_12[] = {
  4, // locals
  0, // parameters
  // i+1) <= '9'
  var_std__plus, 2, var_157_1_i, num_1, 1, LOCAL(1),
  // str(i+1) <= '9'
  var_154_0_str, 1, LOCAL(1), 1, LOCAL(2),
  // 9'
  var_std__less, 2, chr_57, LOCAL(2), 1, LOCAL(3),
  // 9'
  var_std__not, 1, LOCAL(3), 1, LOCAL(4),
  // str(i+1) <= '9'
  LET, 1, LOCAL(4), TAIL_CALL,
  POS(183, 30),
  POS(183, 26),
  POS(183, 39),
  POS(183, 39),
  POS(183, 26)
};

static TAB_NUM t_lambda_13[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(184, 9)
};

static TAB_NUM t_lambda_14[] = {
  1, // locals
  0, // parameters
  // n-i
  var_std__minus, 2, var_156_1_n, var_157_1_i, 1, LOCAL(1),
  //  n-i
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(185, 10),
  POS(185, 9)
};

static TAB_NUM t_func_std_types__FUNKY_IDENTIFIER___search[] = {
  1, // locals
  -3, // parameters
  MANDATORY_PARAMETER, LOCAL(1),
  MANDATORY_PARAMETER, var_203_0_str,
  num_1, var_204_0_nth,
  // $n length_of(str)
  var_length_of, 1, var_203_0_str, 1, var_206_1_n,
  // nth < 0
  var_std__less, 2, var_204_0_nth, num_0, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), func_search_backwards, func_search_forwards, TAIL_CALL,
  POS(206, 3),
  POS(208, 5),
  POS(207, 3)
};

static TAB_NUM t_func_search_forwards[] = {
  0, // locals
  0, // parameters
  // $i 0
  LET, 1, num_0, 1, var_213_1_i,
  // $s undefined
  LET, 1, var_undefined, 1, var_214_1_s,
  // search_for_word_start
  func_search_for_word_start, 0, TAIL_CALL,
  POS(213, 5),
  POS(214, 5),
  POS(215, 5)
};

static TAB_NUM t_func_search_for_word_start[] = {
  1, // locals
  0, // parameters
  // inc &i
  var_inc, 1, var_213_1_i, 1, var_213_1_i,
  // n
  var_std__less, 2, var_206_1_n, var_213_1_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_15, lambda_16, TAIL_CALL,
  POS(218, 7),
  POS(220, 13),
  POS(219, 7)
};

static TAB_NUM t_lambda_15[] = {
  0, // locals
  0, // parameters
  //  undefined undefined
  LET, 2, var_undefined, var_undefined, TAIL_CALL,
  POS(221, 11)
};

static TAB_NUM t_lambda_16[] = {
  1, // locals
  0, // parameters
  // str(i)
  var_203_0_str, 1, var_213_1_i, 1, LOCAL(1),
  // case str(i)
  var_case, 4, LOCAL(1), sequence_121_1, lambda_17, func_search_for_word_start, TAIL_CALL,
  POS(223, 16),
  POS(223, 11)
};

static TAB_NUM t_lambda_17[] = {
  1, // locals
  0, // parameters
  // i == 1:
  var_std__equal, 2, var_213_1_i, num_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_18, lambda_19, TAIL_CALL,
  POS(226, 17),
  POS(225, 15)
};

static TAB_NUM t_lambda_18[] = {
  0, // locals
  0, // parameters
  // !s 1
  LET, 1, num_1, 1, var_214_1_s,
  // within_word
  func_3_within_word, 0, TAIL_CALL,
  POS(227, 19),
  POS(228, 19)
};

static TAB_NUM t_lambda_19[] = {
  2, // locals
  0, // parameters
  // i-1)
  var_std__minus, 2, var_213_1_i, num_1, 1, LOCAL(1),
  // str(i-1)
  var_203_0_str, 1, LOCAL(1), 1, LOCAL(2),
  // case str(i-1)
  var_case, 4, LOCAL(2), sequence_231_1, func_search_for_word_start, lambda_20, TAIL_CALL,
  POS(230, 28),
  POS(230, 24),
  POS(230, 19)
};

static TAB_NUM t_lambda_20[] = {
  0, // locals
  0, // parameters
  // !s i
  LET, 1, var_213_1_i, 1, var_214_1_s,
  // within_word
  func_3_within_word, 0, TAIL_CALL,
  POS(234, 23),
  POS(235, 23)
};

static TAB_NUM t_func_3_within_word[] = {
  1, // locals
  0, // parameters
  // inc &i
  var_inc, 1, var_213_1_i, 1, var_213_1_i,
  // n:
  var_std__less, 2, var_206_1_n, var_213_1_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_21, lambda_24, TAIL_CALL,
  POS(239, 7),
  POS(241, 13),
  POS(240, 7)
};

static TAB_NUM t_lambda_21[] = {
  1, // locals
  0, // parameters
  // 1
  var_std__less, 2, num_1, var_204_0_nth, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_22, lambda_23, TAIL_CALL,
  POS(243, 19),
  POS(242, 11)
};

static TAB_NUM t_lambda_22[] = {
  0, // locals
  0, // parameters
  //  undefined undefined
  LET, 2, var_undefined, var_undefined, TAIL_CALL,
  POS(244, 15)
};

static TAB_NUM t_lambda_23[] = {
  1, // locals
  0, // parameters
  // i-s
  var_std__minus, 2, var_213_1_i, var_214_1_s, 1, LOCAL(1),
  //  s i-s
  LET, 2, var_214_1_s, LOCAL(1), TAIL_CALL,
  POS(245, 18),
  POS(245, 15)
};

static TAB_NUM t_lambda_24[] = {
  1, // locals
  0, // parameters
  // str(i)
  var_203_0_str, 1, var_213_1_i, 1, LOCAL(1),
  // case str(i)
  var_case, 6, LOCAL(1), sequence_131_1, func_3_within_word, chr_95, func_2_word_start, lambda_25, TAIL_CALL,
  POS(247, 16),
  POS(247, 11)
};

static TAB_NUM t_lambda_25[] = {
  1, // locals
  0, // parameters
  // 1:
  var_std__less, 2, num_1, var_204_0_nth, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_26, lambda_27, TAIL_CALL,
  POS(252, 23),
  POS(251, 15)
};

static TAB_NUM t_lambda_26[] = {
  0, // locals
  0, // parameters
  // dec &nth
  var_dec, 1, var_204_0_nth, 1, var_204_0_nth,
  // search_for_word_start
  func_search_for_word_start, 0, TAIL_CALL,
  POS(253, 19),
  POS(254, 19)
};

static TAB_NUM t_lambda_27[] = {
  1, // locals
  0, // parameters
  // i-s
  var_std__minus, 2, var_213_1_i, var_214_1_s, 1, LOCAL(1),
  //  s i-s
  LET, 2, var_214_1_s, LOCAL(1), TAIL_CALL,
  POS(255, 22),
  POS(255, 19)
};

static TAB_NUM t_func_2_word_start[] = {
  1, // locals
  0, // parameters
  // inc &i
  var_inc, 1, var_213_1_i, 1, var_213_1_i,
  // n
  var_std__less, 2, var_206_1_n, var_213_1_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_28, lambda_29, TAIL_CALL,
  POS(258, 7),
  POS(260, 13),
  POS(259, 7)
};

static TAB_NUM t_lambda_28[] = {
  0, // locals
  0, // parameters
  //  undefined undefined
  LET, 2, var_undefined, var_undefined, TAIL_CALL,
  POS(261, 11)
};

static TAB_NUM t_lambda_29[] = {
  1, // locals
  0, // parameters
  // str(i)
  var_203_0_str, 1, var_213_1_i, 1, LOCAL(1),
  // case str(i)
  var_case, 4, LOCAL(1), sequence_131_1, func_3_within_word, func_search_for_word_start, TAIL_CALL,
  POS(263, 16),
  POS(263, 11)
};

static TAB_NUM t_func_search_backwards[] = {
  0, // locals
  0, // parameters
  // $i n+1
  var_std__plus, 2, var_206_1_n, num_1, 1, var_268_1_i,
  // $e undefined
  LET, 1, var_undefined, 1, var_269_1_e,
  // search_for_word_end
  func_search_for_word_end, 0, TAIL_CALL,
  POS(268, 5),
  POS(269, 5),
  POS(270, 5)
};

static TAB_NUM t_func_search_for_word_end[] = {
  1, // locals
  0, // parameters
  // dec &i
  var_dec, 1, var_268_1_i, 1, var_268_1_i,
  // i < 1
  var_std__less, 2, var_268_1_i, num_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_30, lambda_31, TAIL_CALL,
  POS(273, 7),
  POS(275, 9),
  POS(274, 7)
};

static TAB_NUM t_lambda_30[] = {
  0, // locals
  0, // parameters
  //  undefined undefined
  LET, 2, var_undefined, var_undefined, TAIL_CALL,
  POS(276, 11)
};

static TAB_NUM t_lambda_31[] = {
  1, // locals
  0, // parameters
  // str(i)
  var_203_0_str, 1, var_268_1_i, 1, LOCAL(1),
  // case str(i)
  var_case, 4, LOCAL(1), sequence_131_1, lambda_32, func_search_for_word_end, TAIL_CALL,
  POS(278, 16),
  POS(278, 11)
};

static TAB_NUM t_lambda_32[] = {
  0, // locals
  0, // parameters
  // !e i
  LET, 1, var_268_1_i, 1, var_269_1_e,
  // within_word
  func_4_within_word, 0, TAIL_CALL,
  POS(280, 15),
  POS(281, 15)
};

static TAB_NUM t_func_4_within_word[] = {
  1, // locals
  0, // parameters
  // dec &i
  var_dec, 1, var_268_1_i, 1, var_268_1_i,
  // i < 1:
  var_std__less, 2, var_268_1_i, num_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_33, lambda_34, TAIL_CALL,
  POS(285, 7),
  POS(287, 9),
  POS(286, 7)
};

static TAB_NUM t_lambda_33[] = {
  0, // locals
  0, // parameters
  // check_start -> undefined undefined
  func_2_check_start, 1, lambda_check_start, TAIL_CALL,
  POS(288, 11)
};

static TAB_NUM t_lambda_check_start[] = {
  0, // locals
  0, // parameters
  //  undefined undefined
  LET, 2, var_undefined, var_undefined, TAIL_CALL,
  POS(288, 25)
};

static TAB_NUM t_lambda_34[] = {
  1, // locals
  0, // parameters
  // str(i)
  var_203_0_str, 1, var_268_1_i, 1, LOCAL(1),
  // case str(i)
  var_case, 6, LOCAL(1), sequence_131_1, func_4_within_word, chr_95, func_2_word_end, lambda_35, TAIL_CALL,
  POS(290, 16),
  POS(290, 11)
};

static TAB_NUM t_lambda_35[] = {
  0, // locals
  0, // parameters
  // check_start search_for_word_end
  func_2_check_start, 1, func_search_for_word_end, TAIL_CALL,
  POS(294, 15)
};

static TAB_NUM t_func_2_word_end[] = {
  1, // locals
  0, // parameters
  // dec &i
  var_dec, 1, var_268_1_i, 1, var_268_1_i,
  // i < 1
  var_std__less, 2, var_268_1_i, num_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_36, lambda_37, TAIL_CALL,
  POS(297, 7),
  POS(299, 9),
  POS(298, 7)
};

static TAB_NUM t_lambda_36[] = {
  0, // locals
  0, // parameters
  //  undefined undefined
  LET, 2, var_undefined, var_undefined, TAIL_CALL,
  POS(300, 11)
};

static TAB_NUM t_lambda_37[] = {
  1, // locals
  0, // parameters
  // str(i)
  var_203_0_str, 1, var_268_1_i, 1, LOCAL(1),
  // case str(i)
  var_case, 4, LOCAL(1), sequence_131_1, func_4_within_word, func_search_for_word_end, TAIL_CALL,
  POS(302, 16),
  POS(302, 11)
};

static TAB_NUM t_func_2_check_start[] = {
  3, // locals
  1, // parameters
  var_306_15_continuation,
  // i+1)
  var_std__plus, 2, var_268_1_i, num_1, 1, LOCAL(1),
  // $chr str(i+1)
  var_203_0_str, 1, LOCAL(1), 1, var_307_1_chr,
  // chr >= '0' && chr <= '9'
  var_std__less, 2, var_307_1_chr, chr_48, 1, LOCAL(1),
  // chr >= '0' && chr <= '9'
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // chr >= '0' && chr <= '9'
  var_std__and, 2, LOCAL(2), lambda_38, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), var_306_15_continuation, lambda_39, TAIL_CALL,
  POS(307, 16),
  POS(307, 7),
  POS(309, 9),
  POS(309, 9),
  POS(309, 9),
  POS(308, 7)
};

static TAB_NUM t_lambda_38[] = {
  2, // locals
  0, // parameters
  // 9'
  var_std__less, 2, chr_57, var_307_1_chr, 1, LOCAL(1),
  // 9'
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // chr <= '9'
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(309, 31),
  POS(309, 31),
  POS(309, 23)
};

static TAB_NUM t_lambda_39[] = {
  1, // locals
  0, // parameters
  // inc &nth
  var_inc, 1, var_204_0_nth, 1, var_204_0_nth,
  // nth == 0
  var_std__equal, 2, var_204_0_nth, num_0, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_40, var_306_15_continuation, TAIL_CALL,
  POS(312, 11),
  POS(314, 13),
  POS(313, 11)
};

static TAB_NUM t_lambda_40[] = {
  2, // locals
  0, // parameters
  // i+1 e-i
  var_std__plus, 2, var_268_1_i, num_1, 1, LOCAL(1),
  // e-i
  var_std__minus, 2, var_269_1_e, var_268_1_i, 1, LOCAL(2),
  //  i+1 e-i
  LET, 2, LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(315, 16),
  POS(315, 20),
  POS(315, 15)
};

static TAB_NUM t_func_std_types__WHITESPACE___match[] = {
  1, // locals
  2, // parameters
  LOCAL(1),
  var_368_0_str,
  // $i 0
  LET, 1, num_0, 1, var_370_1_i,
  // $n length_of(str)
  var_length_of, 1, var_368_0_str, 1, var_371_1_n,
  // n == 0
  var_std__equal, 2, var_371_1_n, num_0, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_41, lambda_42, TAIL_CALL,
  POS(370, 3),
  POS(371, 3),
  POS(373, 5),
  POS(372, 3)
};

static TAB_NUM t_lambda_41[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(374, 7)
};

static TAB_NUM t_lambda_42[] = {
  0, // locals
  0, // parameters
  // loop:
  var_loop, 1, lambda_loop, TAIL_CALL,
  POS(376, 7)
};

static TAB_NUM t_lambda_loop[] = {
  1, // locals
  0, // parameters
  // inc &i
  var_inc, 1, var_370_1_i, 1, var_370_1_i,
  // n
  var_std__less, 2, var_371_1_n, var_370_1_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_43, lambda_44, TAIL_CALL,
  POS(377, 9),
  POS(379, 15),
  POS(378, 9)
};

static TAB_NUM t_lambda_43[] = {
  0, // locals
  0, // parameters
  //  n
  LET, 1, var_371_1_n, TAIL_CALL,
  POS(380, 13)
};

static TAB_NUM t_lambda_44[] = {
  2, // locals
  0, // parameters
  // str(i).is_a_whitespace_character
  var_368_0_str, 1, var_370_1_i, 1, LOCAL(1),
  // is_a_whitespace_character
  var_is_a_whitespace_character, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), var_next, lambda_45, TAIL_CALL,
  POS(383, 15),
  POS(383, 22),
  POS(382, 13)
};

static TAB_NUM t_lambda_45[] = {
  1, // locals
  0, // parameters
  // 1
  var_std__less, 2, num_1, var_370_1_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_46, lambda_47, TAIL_CALL,
  POS(387, 23),
  POS(386, 17)
};

static TAB_NUM t_lambda_46[] = {
  1, // locals
  0, // parameters
  // i-1
  var_std__minus, 2, var_370_1_i, num_1, 1, LOCAL(1),
  //  i-1
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(388, 22),
  POS(388, 21)
};

static TAB_NUM t_lambda_47[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(389, 21)
};

static TAB_NUM t_func_std_types__WHITESPACE___match_back[] = {
  1, // locals
  2, // parameters
  LOCAL(1),
  var_424_0_str,
  // $n length_of(str)
  var_length_of, 1, var_424_0_str, 1, var_426_1_n,
  // n == 0
  var_std__equal, 2, var_426_1_n, num_0, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_48, lambda_49, TAIL_CALL,
  POS(426, 3),
  POS(428, 5),
  POS(427, 3)
};

static TAB_NUM t_lambda_48[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(429, 7)
};

static TAB_NUM t_lambda_49[] = {
  0, // locals
  0, // parameters
  // $i n+1
  var_std__plus, 2, var_426_1_n, num_1, 1, var_431_1_i,
  // loop:
  var_loop, 1, lambda_2_loop, TAIL_CALL,
  POS(431, 7),
  POS(432, 7)
};

static TAB_NUM t_lambda_2_loop[] = {
  1, // locals
  0, // parameters
  // dec &i
  var_dec, 1, var_431_1_i, 1, var_431_1_i,
  // i < 1
  var_std__less, 2, var_431_1_i, num_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_50, lambda_51, TAIL_CALL,
  POS(433, 9),
  POS(435, 11),
  POS(434, 9)
};

static TAB_NUM t_lambda_50[] = {
  0, // locals
  0, // parameters
  //  n
  LET, 1, var_426_1_n, TAIL_CALL,
  POS(436, 13)
};

static TAB_NUM t_lambda_51[] = {
  2, // locals
  0, // parameters
  // str(i).is_a_whitespace_character
  var_424_0_str, 1, var_431_1_i, 1, LOCAL(1),
  // is_a_whitespace_character
  var_is_a_whitespace_character, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), var_next, lambda_52, TAIL_CALL,
  POS(439, 15),
  POS(439, 22),
  POS(438, 13)
};

static TAB_NUM t_lambda_52[] = {
  1, // locals
  0, // parameters
  // i < n
  var_std__less, 2, var_431_1_i, var_426_1_n, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_53, lambda_54, TAIL_CALL,
  POS(443, 19),
  POS(442, 17)
};

static TAB_NUM t_lambda_53[] = {
  1, // locals
  0, // parameters
  // n-i
  var_std__minus, 2, var_426_1_n, var_431_1_i, 1, LOCAL(1),
  //  n-i
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(444, 22),
  POS(444, 21)
};

static TAB_NUM t_lambda_54[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(445, 21)
};

static TAB_NUM t_func_std_types__WHITESPACE___search[] = {
  1, // locals
  -3, // parameters
  MANDATORY_PARAMETER, LOCAL(1),
  MANDATORY_PARAMETER, var_484_0_str,
  num_1, var_485_0_nth,
  // $n length_of(str)
  var_length_of, 1, var_484_0_str, 1, var_487_1_n,
  // nth < 0
  var_std__less, 2, var_485_0_nth, num_0, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), func_2_search_backwards, func_2_search_forwards, TAIL_CALL,
  POS(487, 3),
  POS(489, 5),
  POS(488, 3)
};

static TAB_NUM t_func_2_search_forwards[] = {
  0, // locals
  0, // parameters
  // $i 0
  LET, 1, num_0, 1, var_494_1_i,
  // $s undefined
  LET, 1, var_undefined, 1, var_495_1_s,
  // search_for_whitespace
  func_search_for_whitespace, 0, TAIL_CALL,
  POS(494, 5),
  POS(495, 5),
  POS(496, 5)
};

static TAB_NUM t_func_search_for_whitespace[] = {
  1, // locals
  0, // parameters
  // inc &i
  var_inc, 1, var_494_1_i, 1, var_494_1_i,
  // n
  var_std__less, 2, var_487_1_n, var_494_1_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_55, lambda_56, TAIL_CALL,
  POS(499, 7),
  POS(501, 13),
  POS(500, 7)
};

static TAB_NUM t_lambda_55[] = {
  0, // locals
  0, // parameters
  //  undefined undefined
  LET, 2, var_undefined, var_undefined, TAIL_CALL,
  POS(502, 11)
};

static TAB_NUM t_lambda_56[] = {
  2, // locals
  0, // parameters
  // str(i).is_a_whitespace_character
  var_484_0_str, 1, var_494_1_i, 1, LOCAL(1),
  // is_a_whitespace_character
  var_is_a_whitespace_character, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_57, func_search_for_whitespace, TAIL_CALL,
  POS(505, 13),
  POS(505, 20),
  POS(504, 11)
};

static TAB_NUM t_lambda_57[] = {
  0, // locals
  0, // parameters
  // !s i
  LET, 1, var_494_1_i, 1, var_495_1_s,
  // match_more_whitespace
  func_match_more_whitespace, 0, TAIL_CALL,
  POS(507, 15),
  POS(508, 15)
};

static TAB_NUM t_func_match_more_whitespace[] = {
  1, // locals
  0, // parameters
  // inc &i
  var_inc, 1, var_494_1_i, 1, var_494_1_i,
  // n:
  var_std__less, 2, var_487_1_n, var_494_1_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_58, lambda_61, TAIL_CALL,
  POS(512, 7),
  POS(514, 13),
  POS(513, 7)
};

static TAB_NUM t_lambda_58[] = {
  1, // locals
  0, // parameters
  // 1
  var_std__less, 2, num_1, var_485_0_nth, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_59, lambda_60, TAIL_CALL,
  POS(516, 19),
  POS(515, 11)
};

static TAB_NUM t_lambda_59[] = {
  0, // locals
  0, // parameters
  //  undefined undefined
  LET, 2, var_undefined, var_undefined, TAIL_CALL,
  POS(517, 15)
};

static TAB_NUM t_lambda_60[] = {
  1, // locals
  0, // parameters
  // i-s
  var_std__minus, 2, var_494_1_i, var_495_1_s, 1, LOCAL(1),
  //  s i-s
  LET, 2, var_495_1_s, LOCAL(1), TAIL_CALL,
  POS(518, 18),
  POS(518, 15)
};

static TAB_NUM t_lambda_61[] = {
  2, // locals
  0, // parameters
  // str(i).is_a_whitespace_character
  var_484_0_str, 1, var_494_1_i, 1, LOCAL(1),
  // is_a_whitespace_character
  var_is_a_whitespace_character, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), func_match_more_whitespace, lambda_62, TAIL_CALL,
  POS(521, 13),
  POS(521, 20),
  POS(520, 11)
};

static TAB_NUM t_lambda_62[] = {
  1, // locals
  0, // parameters
  // 1:
  var_std__less, 2, num_1, var_485_0_nth, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_63, lambda_64, TAIL_CALL,
  POS(525, 23),
  POS(524, 15)
};

static TAB_NUM t_lambda_63[] = {
  0, // locals
  0, // parameters
  // dec &nth
  var_dec, 1, var_485_0_nth, 1, var_485_0_nth,
  // search_for_whitespace
  func_search_for_whitespace, 0, TAIL_CALL,
  POS(526, 19),
  POS(527, 19)
};

static TAB_NUM t_lambda_64[] = {
  1, // locals
  0, // parameters
  // i-s
  var_std__minus, 2, var_494_1_i, var_495_1_s, 1, LOCAL(1),
  //  s i-s
  LET, 2, var_495_1_s, LOCAL(1), TAIL_CALL,
  POS(528, 22),
  POS(528, 19)
};

static TAB_NUM t_func_2_search_backwards[] = {
  0, // locals
  0, // parameters
  // $i n+1
  var_std__plus, 2, var_487_1_n, num_1, 1, var_531_1_i,
  // $e undefined
  LET, 1, var_undefined, 1, var_532_1_e,
  // search_for_whitespace
  func_2_search_for_whitespace, 0, TAIL_CALL,
  POS(531, 5),
  POS(532, 5),
  POS(533, 5)
};

static TAB_NUM t_func_2_search_for_whitespace[] = {
  1, // locals
  0, // parameters
  // dec &i
  var_dec, 1, var_531_1_i, 1, var_531_1_i,
  // i < 1
  var_std__less, 2, var_531_1_i, num_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_65, lambda_66, TAIL_CALL,
  POS(536, 7),
  POS(538, 9),
  POS(537, 7)
};

static TAB_NUM t_lambda_65[] = {
  0, // locals
  0, // parameters
  //  undefined undefined
  LET, 2, var_undefined, var_undefined, TAIL_CALL,
  POS(539, 11)
};

static TAB_NUM t_lambda_66[] = {
  2, // locals
  0, // parameters
  // str(i).is_a_whitespace_character
  var_484_0_str, 1, var_531_1_i, 1, LOCAL(1),
  // is_a_whitespace_character
  var_is_a_whitespace_character, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_67, func_2_search_for_whitespace, TAIL_CALL,
  POS(542, 13),
  POS(542, 20),
  POS(541, 11)
};

static TAB_NUM t_lambda_67[] = {
  0, // locals
  0, // parameters
  // !e i
  LET, 1, var_531_1_i, 1, var_532_1_e,
  // match_more_whitespace
  func_2_match_more_whitespace, 0, TAIL_CALL,
  POS(544, 15),
  POS(545, 15)
};

static TAB_NUM t_func_2_match_more_whitespace[] = {
  1, // locals
  0, // parameters
  // dec &i
  var_dec, 1, var_531_1_i, 1, var_531_1_i,
  // i < 1:
  var_std__less, 2, var_531_1_i, num_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_68, lambda_71, TAIL_CALL,
  POS(549, 7),
  POS(551, 9),
  POS(550, 7)
};

static TAB_NUM t_lambda_68[] = {
  1, // locals
  0, // parameters
  // inc &nth
  var_inc, 1, var_485_0_nth, 1, var_485_0_nth,
  // nth == 0
  var_std__equal, 2, var_485_0_nth, num_0, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_69, lambda_70, TAIL_CALL,
  POS(552, 11),
  POS(554, 13),
  POS(553, 11)
};

static TAB_NUM t_lambda_69[] = {
  0, // locals
  0, // parameters
  //  1 e
  LET, 2, num_1, var_532_1_e, TAIL_CALL,
  POS(555, 15)
};

static TAB_NUM t_lambda_70[] = {
  0, // locals
  0, // parameters
  //  undefined undefined
  LET, 2, var_undefined, var_undefined, TAIL_CALL,
  POS(556, 15)
};

static TAB_NUM t_lambda_71[] = {
  2, // locals
  0, // parameters
  // str(i).is_a_whitespace_character
  var_484_0_str, 1, var_531_1_i, 1, LOCAL(1),
  // is_a_whitespace_character
  var_is_a_whitespace_character, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), func_2_match_more_whitespace, lambda_72, TAIL_CALL,
  POS(559, 13),
  POS(559, 20),
  POS(558, 11)
};

static TAB_NUM t_lambda_72[] = {
  1, // locals
  0, // parameters
  // inc &nth
  var_inc, 1, var_485_0_nth, 1, var_485_0_nth,
  // nth == 0
  var_std__equal, 2, var_485_0_nth, num_0, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_73, func_2_search_for_whitespace, TAIL_CALL,
  POS(562, 15),
  POS(564, 17),
  POS(563, 15)
};

static TAB_NUM t_lambda_73[] = {
  2, // locals
  0, // parameters
  // i+1 e-i
  var_std__plus, 2, var_531_1_i, num_1, 1, LOCAL(1),
  // e-i
  var_std__minus, 2, var_532_1_e, var_531_1_i, 1, LOCAL(2),
  //  i+1 e-i
  LET, 2, LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(565, 20),
  POS(565, 24),
  POS(565, 19)
};

static int value_range_121_1_arguments[] = {
  -chr_97, -chr_122
};

static int value_range_121_13_arguments[] = {
  -chr_65, -chr_90
};

static int sequence_121_1_arguments[] = {
  -value_range_121_1, -value_range_121_13
};

static int value_range_131_25_arguments[] = {
  -chr_48, -chr_57
};

static int sequence_131_1_arguments[] = {
  -value_range_121_1, -value_range_121_13, -value_range_131_25
};

static int sequence_231_1_arguments[] = {
  -value_range_121_1, -value_range_121_13, -value_range_131_25, -chr_95
};

static FUNKY_CONSTANT constants_table[] = {
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__FUNKY_IDENTIFIER___match}},
  {FLT_POSITIVE_INT64, 0, {.value = 1}},
  {FLT_POSITIVE_INT64, 0, {.value = 0}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2}},
  {FLT_CHARACTER, 0, {.value = 97}},
  {FLT_CHARACTER, 0, {.value = 122}},
  {FLT_VALUE_RANGE, 2, {.arguments = value_range_121_1_arguments}},
  {FLT_CHARACTER, 0, {.value = 65}},
  {FLT_CHARACTER, 0, {.value = 90}},
  {FLT_VALUE_RANGE, 2, {.arguments = value_range_121_13_arguments}},
  {FLT_SEQUENCE, 2, {.arguments = sequence_121_1_arguments}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_3}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_within_word}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_4}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_5}},
  {FLT_CHARACTER, 0, {.value = 48}},
  {FLT_CHARACTER, 0, {.value = 57}},
  {FLT_VALUE_RANGE, 2, {.arguments = value_range_131_25_arguments}},
  {FLT_SEQUENCE, 3, {.arguments = sequence_131_1_arguments}},
  {FLT_CHARACTER, 0, {.value = 95}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_6}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_word_start}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_7}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__FUNKY_IDENTIFIER___match_back}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_word_end}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_8}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_9}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_10}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_2_within_word}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_11}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_check_start}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_12}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_13}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_14}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__FUNKY_IDENTIFIER___search}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_search_forwards}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_search_for_word_start}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_15}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_16}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_17}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_18}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_19}},
  {FLT_SEQUENCE, 4, {.arguments = sequence_231_1_arguments}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_20}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_3_within_word}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_21}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_22}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_23}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_24}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_25}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_26}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_27}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_2_word_start}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_28}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_29}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_search_backwards}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_search_for_word_end}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_30}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_31}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_32}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_4_within_word}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_33}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_check_start}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_34}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_35}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_2_word_end}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_36}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_37}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_2_check_start}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_38}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_39}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_40}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__WHITESPACE___match}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_41}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_42}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_43}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_44}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_45}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_46}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_47}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__WHITESPACE___match_back}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_48}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_49}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_50}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_51}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_52}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_53}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_54}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__WHITESPACE___search}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_2_search_forwards}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_search_for_whitespace}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_55}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_56}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_57}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_match_more_whitespace}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_58}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_59}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_60}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_61}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_62}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_63}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_64}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_2_search_backwards}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_2_search_for_whitespace}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_65}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_66}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_67}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_2_match_more_whitespace}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_68}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_69}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_70}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_71}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_72}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_73}}
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
    {.position = POS(81, 30)}
  },
  {
    FOT_DERIVED, 0, 0,
    "FUNKY_IDENTIFIER\000std", NULL,
    {"FUNKY_IDENTIFIER\000std_types"}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "match\000", NULL,
    {.position = POS(97, 30)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "111_0_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "113_1_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "114_1_n\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "length_of\000", NULL,
    {.position = POS(114, 6)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "equal\000std", NULL,
    {.position = POS(117, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "undefined\000", NULL,
    {.position = POS(118, 8)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "value_range\000std", NULL,
    {.position = POS(121, 10)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "sequence\000std", NULL,
    {.position = POS(121, 10)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "case\000", NULL,
    {.position = POS(120, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if\000", NULL,
    {.position = POS(116, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "inc\000", NULL,
    {.position = POS(125, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "less\000std", NULL,
    {.position = POS(127, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "minus\000std", NULL,
    {.position = POS(133, 14)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "match_back\000", NULL,
    {.position = POS(141, 30)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "154_0_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "156_1_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "157_1_i\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000std", NULL,
    {.position = POS(157, 6)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "dec\000", NULL,
    {.position = POS(161, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not\000std", NULL,
    {.position = POS(183, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "and\000std", NULL,
    {.position = POS(183, 7)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "search\000", NULL,
    {.position = POS(187, 30)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "203_0_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "204_0_nth\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "206_1_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "213_1_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "214_1_s\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "268_1_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "269_1_e\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "306_15_continuation\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "307_1_chr\000", NULL
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
    "368_0_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "370_1_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "371_1_n\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_a_whitespace_character\000", NULL,
    {.position = POS(383, 22)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "next\000", NULL,
    {.position = POS(384, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "loop\000", NULL,
    {.position = POS(376, 7)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "424_0_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "426_1_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "431_1_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "484_0_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "485_0_nth\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "487_1_n\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "494_1_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "495_1_s\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "531_1_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "532_1_e\000", NULL
  },
  {
    FOT_DERIVED, 0, 0,
    "alt\000std", NULL,
    {"hash_set\000std"}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "hash_set\000std", NULL,
    {.position = POS(568, 11)}
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
  117, // number of constants
  59, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  constants_table,
  variables_table,
};
