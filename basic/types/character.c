#include <stddef.h>
#include <stdint.h>

#include "runtime/common.h"
#include "runtime/builtins.h"
#include "runtime/fko.h"
#include "runtime/memory.h"

enum {
  func_std_types__character___match = -1,
  lambda_1 = -2,
  num_1 = -3,
  lambda_2 = -4,
  lambda_3 = -5,
  lambda_4 = -6,
  func_fail = -7,
  lambda_5 = -8,
  lambda_6 = -9,
  func_std_types__character___match_back = -10,
  lambda_7 = -11,
  lambda_8 = -12,
  minus_num_1 = -13,
  lambda_9 = -14,
  lambda_10 = -15,
  func_std_types__character___search = -16,
  num_0 = -17,
  lambda_11 = -18,
  lambda_12 = -19,
  func_search_forwards = -20,
  lambda_13 = -21,
  lambda_14 = -22,
  lambda_15 = -23,
  lambda_16 = -24,
  lambda_17 = -25,
  lambda_18 = -26,
  func_search_backwards = -27,
  lambda_19 = -28,
  lambda_20 = -29,
  lambda_21 = -30,
  lambda_22 = -31,
  lambda_23 = -32,
  lambda_24 = -33,
  func_std__is_a_digit = -34,
  chr_48 = -35,
  lambda_25 = -36,
  chr_57 = -37,
  func_std__is_a_letter = -38,
  chr_97 = -39,
  lambda_26 = -40,
  chr_122 = -41,
  lambda_27 = -42,
  chr_65 = -43,
  lambda_28 = -44,
  chr_90 = -45,
  func_std__is_an_uppercase_letter = -46,
  lambda_29 = -47,
  func_std__is_a_lowercase_letter = -48,
  lambda_30 = -49,
  func_std_types__character___serialize = -50,
  chr_32 = -51,
  lambda_31 = -52,
  chr_126 = -53,
  lambda_32 = -54,
  chr_64 = -55,
  lambda_33 = -56,
  string_1 = -57,
  string_2 = -58,
  lambda_34 = -59,
  string_3 = -60,
  string_4 = -61,
  lambda_35 = -62,
  lambda_36 = -63,
  func_std_types__character___to_wide = -64,
  chr_33 = -65,
  value_range_472_7 = -66,
  lambda_37 = -67,
  num_0xfee0 = -68,
  lambda_38 = -69,
  chr_12288 = -70,
  lambda_39 = -71
};

enum {
  var__START = FIRST_VAR-1,
  var_std__is_a_character, // attribute
  var_std__assign, // extern
  var_std_types__object, // extern
  var_is_a_character, // extern polymorphic
  var_false, // extern
  var_std_types__character, // extern
  var_true, // extern
  var_match, // extern polymorphic
  var_83_5_self, // dynamic
  var_84_5_str, // dynamic
  var_86_4_rc, // dynamic
  var_result_count, // extern
  var_is_empty, // extern
  var_std__equal, // extern
  var_undefined, // extern
  var_if, // extern
  var_match_back, // extern polymorphic
  var_138_5_self, // dynamic
  var_139_5_str, // dynamic
  var_search, // extern polymorphic
  var_208_5_self, // dynamic
  var_209_5_stream, // dynamic
  var_210_5_nth, // dynamic
  var_212_4_i, // dynamic
  var_213_4_n, // dynamic
  var_length_of, // extern
  var_std__less, // extern
  var_std__not, // extern
  var_dec, // extern
  var_inc, // extern
  var_std__is_a_digit, // initialized
  var_293_5_chr, // dynamic
  var_std__and, // extern
  var_std__is_a_letter, // initialized
  var_335_5_chr, // dynamic
  var_std__or, // extern
  var_std__is_an_uppercase_letter, // initialized
  var_380_5_chr, // dynamic
  var_std__is_a_lowercase_letter, // initialized
  var_422_5_chr, // dynamic
  var_serialize, // extern polymorphic
  var_455_5_self, // dynamic
  var_456_5_indent, // dynamic
  var_to_integer, // extern
  var_std__string, // extern
  var_458_4_str, // dynamic
  var_is_defined, // extern
  var_tabs_and_spaces, // extern
  var_append, // extern
  var_std__to_wide, // attribute
  var_to_wide, // extern polymorphic
  var_470_33_chr, // dynamic
  var_std__value_range, // extern
  var_std__plus, // extern
  var_case, // extern
  var__END
};


static TAB_NUM t_func_std_types__character___match[] = {
  1, // locals
  2, // parameters
  var_83_5_self,
  var_84_5_str,
  // $rc result_count()
  var_result_count, 0, 1, var_86_4_rc,
  // is_empty
  var_is_empty, 1, var_84_5_str, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), func_fail, lambda_1, TAIL_CALL,
  POS(86, 3),
  POS(88, 9),
  POS(87, 3)
};

static TAB_NUM t_lambda_1[] = {
  2, // locals
  0, // parameters
  // str(1) == self:
  var_84_5_str, 1, num_1, 1, LOCAL(1),
  // str(1) == self:
  var_std__equal, 2, LOCAL(1), var_83_5_self, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_2, func_fail, TAIL_CALL,
  POS(92, 9),
  POS(92, 9),
  POS(91, 7)
};

static TAB_NUM t_lambda_2[] = {
  1, // locals
  0, // parameters
  // rc == 1
  var_std__equal, 2, var_86_4_rc, num_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_3, lambda_4, TAIL_CALL,
  POS(94, 13),
  POS(93, 11)
};

static TAB_NUM t_lambda_3[] = {
  0, // locals
  0, // parameters
  //  1
  LET, 1, num_1, TAIL_CALL,
  POS(95, 15)
};

static TAB_NUM t_lambda_4[] = {
  0, // locals
  0, // parameters
  //  1 undefined
  LET, 2, num_1, var_undefined, TAIL_CALL,
  POS(96, 15)
};

static TAB_NUM t_func_fail[] = {
  1, // locals
  0, // parameters
  // rc == 1
  var_std__equal, 2, var_86_4_rc, num_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_5, lambda_6, TAIL_CALL,
  POS(101, 7),
  POS(100, 5)
};

static TAB_NUM t_lambda_5[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(102, 9)
};

static TAB_NUM t_lambda_6[] = {
  0, // locals
  0, // parameters
  //  undefined undefined
  LET, 2, var_undefined, var_undefined, TAIL_CALL,
  POS(103, 9)
};

static TAB_NUM t_func_std_types__character___match_back[] = {
  1, // locals
  2, // parameters
  var_138_5_self,
  var_139_5_str,
  // is_empty
  var_is_empty, 1, var_139_5_str, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_7, lambda_8, TAIL_CALL,
  POS(142, 9),
  POS(141, 3)
};

static TAB_NUM t_lambda_7[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(143, 7)
};

static TAB_NUM t_lambda_8[] = {
  2, // locals
  0, // parameters
  // str(-1) == self
  var_139_5_str, 1, minus_num_1, 1, LOCAL(1),
  // str(-1) == self
  var_std__equal, 2, LOCAL(1), var_138_5_self, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_9, lambda_10, TAIL_CALL,
  POS(146, 9),
  POS(146, 9),
  POS(145, 7)
};

static TAB_NUM t_lambda_9[] = {
  0, // locals
  0, // parameters
  //  1
  LET, 1, num_1, TAIL_CALL,
  POS(147, 11)
};

static TAB_NUM t_lambda_10[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(148, 11)
};

static TAB_NUM t_func_std_types__character___search[] = {
  1, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_208_5_self,
  MANDATORY_PARAMETER, var_209_5_stream,
  num_1, var_210_5_nth,
  // $i undefined
  LET, 1, var_undefined, 1, var_212_4_i,
  // $n length_of(stream)
  var_length_of, 1, var_209_5_stream, 1, var_213_4_n,
  // nth < 0:
  var_std__less, 2, var_210_5_nth, num_0, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_11, lambda_12, TAIL_CALL,
  POS(212, 3),
  POS(213, 3),
  POS(215, 5),
  POS(214, 3)
};

static TAB_NUM t_lambda_11[] = {
  0, // locals
  0, // parameters
  // !i n
  LET, 1, var_213_4_n, 1, var_212_4_i,
  // search_backwards
  func_search_backwards, 0, TAIL_CALL,
  POS(216, 7),
  POS(217, 7)
};

static TAB_NUM t_lambda_12[] = {
  0, // locals
  0, // parameters
  // !i 1
  LET, 1, num_1, 1, var_212_4_i,
  // search_forwards
  func_search_forwards, 0, TAIL_CALL,
  POS(219, 7),
  POS(220, 7)
};

static TAB_NUM t_func_search_forwards[] = {
  2, // locals
  0, // parameters
  // n
  var_std__less, 2, var_213_4_n, var_212_4_i, 1, LOCAL(1),
  // n
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_13, lambda_18, TAIL_CALL,
  POS(224, 12),
  POS(224, 12),
  POS(223, 5)
};

static TAB_NUM t_lambda_13[] = {
  2, // locals
  0, // parameters
  // stream(i) == self:
  var_209_5_stream, 1, var_212_4_i, 1, LOCAL(1),
  // stream(i) == self:
  var_std__equal, 2, LOCAL(1), var_208_5_self, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_14, lambda_17, TAIL_CALL,
  POS(227, 11),
  POS(227, 11),
  POS(226, 9)
};

static TAB_NUM t_lambda_14[] = {
  1, // locals
  0, // parameters
  // 1:
  var_std__less, 2, num_1, var_210_5_nth, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_15, lambda_16, TAIL_CALL,
  POS(229, 21),
  POS(228, 13)
};

static TAB_NUM t_lambda_15[] = {
  0, // locals
  0, // parameters
  // dec &nth
  var_dec, 1, var_210_5_nth, 1, var_210_5_nth,
  // inc &i
  var_inc, 1, var_212_4_i, 1, var_212_4_i,
  // search_forwards
  func_search_forwards, 0, TAIL_CALL,
  POS(230, 17),
  POS(231, 17),
  POS(232, 17)
};

static TAB_NUM t_lambda_16[] = {
  0, // locals
  0, // parameters
  //  i 1
  LET, 2, var_212_4_i, num_1, TAIL_CALL,
  POS(233, 17)
};

static TAB_NUM t_lambda_17[] = {
  0, // locals
  0, // parameters
  // inc &i
  var_inc, 1, var_212_4_i, 1, var_212_4_i,
  // search_forwards
  func_search_forwards, 0, TAIL_CALL,
  POS(235, 13),
  POS(236, 13)
};

static TAB_NUM t_lambda_18[] = {
  0, // locals
  0, // parameters
  //  undefined undefined
  LET, 2, var_undefined, var_undefined, TAIL_CALL,
  POS(237, 9)
};

static TAB_NUM t_func_search_backwards[] = {
  2, // locals
  0, // parameters
  // i >= 1
  var_std__less, 2, var_212_4_i, num_1, 1, LOCAL(1),
  // i >= 1
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_19, lambda_24, TAIL_CALL,
  POS(241, 7),
  POS(241, 7),
  POS(240, 5)
};

static TAB_NUM t_lambda_19[] = {
  2, // locals
  0, // parameters
  // stream(i) == self:
  var_209_5_stream, 1, var_212_4_i, 1, LOCAL(1),
  // stream(i) == self:
  var_std__equal, 2, LOCAL(1), var_208_5_self, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_20, lambda_23, TAIL_CALL,
  POS(244, 11),
  POS(244, 11),
  POS(243, 9)
};

static TAB_NUM t_lambda_20[] = {
  1, // locals
  0, // parameters
  // nth < -1:
  var_std__less, 2, var_210_5_nth, minus_num_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_21, lambda_22, TAIL_CALL,
  POS(246, 15),
  POS(245, 13)
};

static TAB_NUM t_lambda_21[] = {
  0, // locals
  0, // parameters
  // inc &nth
  var_inc, 1, var_210_5_nth, 1, var_210_5_nth,
  // dec &i
  var_dec, 1, var_212_4_i, 1, var_212_4_i,
  // search_backwards
  func_search_backwards, 0, TAIL_CALL,
  POS(247, 17),
  POS(248, 17),
  POS(249, 17)
};

static TAB_NUM t_lambda_22[] = {
  0, // locals
  0, // parameters
  //  i 1
  LET, 2, var_212_4_i, num_1, TAIL_CALL,
  POS(250, 17)
};

static TAB_NUM t_lambda_23[] = {
  0, // locals
  0, // parameters
  // dec &i
  var_dec, 1, var_212_4_i, 1, var_212_4_i,
  // search_backwards
  func_search_backwards, 0, TAIL_CALL,
  POS(252, 13),
  POS(253, 13)
};

static TAB_NUM t_lambda_24[] = {
  0, // locals
  0, // parameters
  //  undefined undefined
  LET, 2, var_undefined, var_undefined, TAIL_CALL,
  POS(254, 9)
};

static TAB_NUM t_func_std__is_a_digit[] = {
  3, // locals
  1, // parameters
  var_293_5_chr,
  // chr >= '0' && chr <= '9'
  var_std__less, 2, var_293_5_chr, chr_48, 1, LOCAL(1),
  // chr >= '0' && chr <= '9'
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // chr >= '0' && chr <= '9'
  var_std__and, 2, LOCAL(2), lambda_25, 1, LOCAL(3),
  // -> chr >= '0' && chr <= '9'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(295, 6),
  POS(295, 6),
  POS(295, 6),
  POS(295, 3)
};

static TAB_NUM t_lambda_25[] = {
  2, // locals
  0, // parameters
  // 9'
  var_std__less, 2, chr_57, var_293_5_chr, 1, LOCAL(1),
  // 9'
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // chr <= '9'
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(295, 28),
  POS(295, 28),
  POS(295, 20)
};

static TAB_NUM t_func_std__is_a_letter[] = {
  4, // locals
  1, // parameters
  var_335_5_chr,
  // chr >= 'a' && chr <= 'z'
  var_std__less, 2, var_335_5_chr, chr_97, 1, LOCAL(1),
  // chr >= 'a' && chr <= 'z'
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // chr >= 'a' && chr <= 'z'
  var_std__and, 2, LOCAL(2), lambda_26, 1, LOCAL(3),
  // 
  var_std__or, 2, LOCAL(3), lambda_27, 1, LOCAL(4),
  // ->
  LET, 1, LOCAL(4), TAIL_CALL,
  POS(339, 7),
  POS(339, 7),
  POS(339, 7),
  POS(338, 7),
  POS(337, 3)
};

static TAB_NUM t_lambda_26[] = {
  2, // locals
  0, // parameters
  // z'
  var_std__less, 2, chr_122, var_335_5_chr, 1, LOCAL(1),
  // z'
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // chr <= 'z'
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(339, 29),
  POS(339, 29),
  POS(339, 21)
};

static TAB_NUM t_lambda_27[] = {
  3, // locals
  0, // parameters
  // chr >= 'A' && chr <= 'Z'
  var_std__less, 2, var_335_5_chr, chr_65, 1, LOCAL(1),
  // chr >= 'A' && chr <= 'Z'
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // chr >= 'A' && chr <= 'Z'
  var_std__and, 2, LOCAL(2), lambda_28, 1, LOCAL(3),
  // chr >= 'A' && chr <= 'Z'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(340, 7),
  POS(340, 7),
  POS(340, 7),
  POS(340, 7)
};

static TAB_NUM t_lambda_28[] = {
  2, // locals
  0, // parameters
  // Z'
  var_std__less, 2, chr_90, var_335_5_chr, 1, LOCAL(1),
  // Z'
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // chr <= 'Z'
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(340, 29),
  POS(340, 29),
  POS(340, 21)
};

static TAB_NUM t_func_std__is_an_uppercase_letter[] = {
  3, // locals
  1, // parameters
  var_380_5_chr,
  // chr >= 'A' && chr <= 'Z'
  var_std__less, 2, var_380_5_chr, chr_65, 1, LOCAL(1),
  // chr >= 'A' && chr <= 'Z'
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // chr >= 'A' && chr <= 'Z'
  var_std__and, 2, LOCAL(2), lambda_29, 1, LOCAL(3),
  // -> chr >= 'A' && chr <= 'Z'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(382, 6),
  POS(382, 6),
  POS(382, 6),
  POS(382, 3)
};

static TAB_NUM t_lambda_29[] = {
  2, // locals
  0, // parameters
  // Z'
  var_std__less, 2, chr_90, var_380_5_chr, 1, LOCAL(1),
  // Z'
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // chr <= 'Z'
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(382, 28),
  POS(382, 28),
  POS(382, 20)
};

static TAB_NUM t_func_std__is_a_lowercase_letter[] = {
  3, // locals
  1, // parameters
  var_422_5_chr,
  // chr >= 'a' && chr <= 'z'
  var_std__less, 2, var_422_5_chr, chr_97, 1, LOCAL(1),
  // chr >= 'a' && chr <= 'z'
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // chr >= 'a' && chr <= 'z'
  var_std__and, 2, LOCAL(2), lambda_30, 1, LOCAL(3),
  // -> chr >= 'a' && chr <= 'z'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(424, 6),
  POS(424, 6),
  POS(424, 6),
  POS(424, 3)
};

static TAB_NUM t_lambda_30[] = {
  2, // locals
  0, // parameters
  // z'
  var_std__less, 2, chr_122, var_422_5_chr, 1, LOCAL(1),
  // z'
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // chr <= 'z'
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(424, 28),
  POS(424, 28),
  POS(424, 20)
};

static TAB_NUM t_func_std_types__character___serialize[] = {
  2, // locals
  -2, // parameters
  MANDATORY_PARAMETER, var_455_5_self,
  var_undefined, var_456_5_indent,
  // self < '@0x20;' || self > '@0x7e;' || self == '@@'
  var_std__less, 2, var_455_5_self, chr_32, 1, LOCAL(1),
  // self < '@0x20;' || self > '@0x7e;' || self == '@@'
  var_std__or, 2, LOCAL(1), lambda_31, 1, LOCAL(2),
  // $str
  var_if, 3, LOCAL(2), lambda_33, lambda_34, 1, var_458_4_str,
  // is_defined
  var_is_defined, 1, var_456_5_indent, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_35, lambda_36, TAIL_CALL,
  POS(460, 7),
  POS(460, 7),
  POS(458, 3),
  POS(464, 12),
  POS(463, 3)
};

static TAB_NUM t_lambda_31[] = {
  2, // locals
  0, // parameters
  // 0x7e;' || self == '@@'
  var_std__less, 2, chr_126, var_455_5_self, 1, LOCAL(1),
  // 0x7e;' || self == '@@'
  var_std__or, 2, LOCAL(1), lambda_32, 1, LOCAL(2),
  // self > '@0x7e;' || self == '@@'
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(460, 35),
  POS(460, 35),
  POS(460, 26)
};

static TAB_NUM t_lambda_32[] = {
  1, // locals
  0, // parameters
  // self == '@@'
  var_std__equal, 2, var_455_5_self, chr_64, 1, LOCAL(1),
  // self == '@@'
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(460, 45),
  POS(460, 45)
};

static TAB_NUM t_lambda_33[] = {
  2, // locals
  0, // parameters
  // to_integer);'@nl;"
  var_to_integer, 1, var_455_5_self, 1, LOCAL(1),
  // "'@@@(self.to_integer);'@nl;"
  var_std__string, 3, string_1, LOCAL(1), string_2, 1, LOCAL(2),
  //  "'@@@(self.to_integer);'@nl;"
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(461, 21),
  POS(461, 10),
  POS(461, 9)
};

static TAB_NUM t_lambda_34[] = {
  1, // locals
  0, // parameters
  // "'@(self)'@nl;"
  var_std__string, 3, string_3, var_455_5_self, string_4, 1, LOCAL(1),
  //  "'@(self)'@nl;"
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(462, 10),
  POS(462, 9)
};

static TAB_NUM t_lambda_35[] = {
  2, // locals
  0, // parameters
  // tabs_and_spaces(indent) str)
  var_tabs_and_spaces, 1, var_456_5_indent, 1, LOCAL(1),
  // append(tabs_and_spaces(indent) str)
  var_append, 2, LOCAL(1), var_458_4_str, 1, LOCAL(2),
  //  append(tabs_and_spaces(indent) str)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(465, 15),
  POS(465, 8),
  POS(465, 7)
};

static TAB_NUM t_lambda_36[] = {
  0, // locals
  0, // parameters
  //  str
  LET, 1, var_458_4_str, TAIL_CALL,
  POS(466, 7)
};

static TAB_NUM t_func_std_types__character___to_wide[] = {
  0, // locals
  1, // parameters
  var_470_33_chr,
  // case chr
  var_case, 6, var_470_33_chr, value_range_472_7, lambda_37, chr_32, lambda_38, lambda_39, TAIL_CALL,
  POS(471, 3)
};

static TAB_NUM t_lambda_37[] = {
  1, // locals
  0, // parameters
  // chr+0xfee0
  var_std__plus, 2, var_470_33_chr, num_0xfee0, 1, LOCAL(1),
  //  chr+0xfee0
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(472, 29),
  POS(472, 28)
};

static TAB_NUM t_lambda_38[] = {
  0, // locals
  0, // parameters
  //  '@0x3000;'
  LET, 1, chr_12288, TAIL_CALL,
  POS(473, 11)
};

static TAB_NUM t_lambda_39[] = {
  0, // locals
  0, // parameters
  //  chr
  LET, 1, var_470_33_chr, TAIL_CALL,
  POS(474, 7)
};

static int value_range_472_7_arguments[] = {
  -chr_33, -chr_126
};

static FUNKY_CONSTANT constants_table[] = {
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__character___match}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1}},
  {FLT_POSITIVE_INT64, 0, {.value = 1}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_3}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_4}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_fail}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_5}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_6}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__character___match_back}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_7}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_8}},
  {FLT_NEGATIVE_INT64, 0, {.value = 1}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_9}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_10}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__character___search}},
  {FLT_POSITIVE_INT64, 0, {.value = 0}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_11}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_12}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_search_forwards}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_13}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_14}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_15}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_16}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_17}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_18}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_search_backwards}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_19}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_20}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_21}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_22}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_23}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_24}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__is_a_digit}},
  {FLT_CHARACTER, 0, {.value = 48}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_25}},
  {FLT_CHARACTER, 0, {.value = 57}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__is_a_letter}},
  {FLT_CHARACTER, 0, {.value = 97}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_26}},
  {FLT_CHARACTER, 0, {.value = 122}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_27}},
  {FLT_CHARACTER, 0, {.value = 65}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_28}},
  {FLT_CHARACTER, 0, {.value = 90}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__is_an_uppercase_letter}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_29}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__is_a_lowercase_letter}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_30}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__character___serialize}},
  {FLT_CHARACTER, 0, {.value = 32}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_31}},
  {FLT_CHARACTER, 0, {.value = 126}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_32}},
  {FLT_CHARACTER, 0, {.value = 64}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_33}},
  {FLT_STRING_8, 2, {.str_8 = "'@"}},
  {FLT_STRING_8, 3, {.str_8 = ";'\012"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_34}},
  {FLT_STRING_8, 1, {.str_8 = "'"}},
  {FLT_STRING_8, 2, {.str_8 = "'\012"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_35}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_36}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__character___to_wide}},
  {FLT_CHARACTER, 0, {.value = 33}},
  {FLT_VALUE_RANGE, 2, {.arguments = value_range_472_7_arguments}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_37}},
  {FLT_POSITIVE_INT64, 0, {.value = 0xfee0}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_38}},
  {FLT_CHARACTER, 0, {.value = 12288}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_39}}
};

static ATTRIBUTE_DEFINITION std_types__object__attributes[] = {
  {-var_is_a_character, -var_false}
};

static ATTRIBUTE_DEFINITION std_types__character__attributes[] = {
  {-var_is_a_character, -var_true},
  {var_match, -func_std_types__character___match},
  {var_match_back, -func_std_types__character___match_back},
  {var_search, -func_std_types__character___search},
  {var_serialize, -func_std_types__character___serialize},
  {var_to_wide, -func_std_types__character___to_wide}
};

static FUNKY_VARIABLE variables_table[] = {
  {
    FOT_POLYMORPHIC, 0, 0,
    "is_a_character\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "assign\000std", NULL,
    {.position = POS(32, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "object\000std_types", std_types__object__attributes,
    {.position = POS(38, 1)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "is_a_character\000", NULL,
    {.position = POS(38, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "false\000", NULL,
    {.position = POS(38, 35)}
  },
  {
    FOT_UNKNOWN, 0, 6,
    "character\000std_types", std_types__character__attributes,
    {.position = POS(44, 1)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "true\000", NULL,
    {.position = POS(44, 38)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "match\000", NULL,
    {.position = POS(50, 23)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "83_5_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "84_5_str\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "86_4_rc\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "result_count\000", NULL,
    {.position = POS(86, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_empty\000", NULL,
    {.position = POS(88, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "equal\000std", NULL,
    {.position = POS(92, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "undefined\000", NULL,
    {.position = POS(96, 18)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if\000", NULL,
    {.position = POS(93, 11)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "match_back\000", NULL,
    {.position = POS(105, 23)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "138_5_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "139_5_str\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "search\000", NULL,
    {.position = POS(150, 23)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "208_5_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "209_5_stream\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "210_5_nth\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "212_4_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "213_4_n\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "length_of\000", NULL,
    {.position = POS(213, 6)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "less\000std", NULL,
    {.position = POS(215, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not\000std", NULL,
    {.position = POS(224, 12)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "dec\000", NULL,
    {.position = POS(230, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "inc\000", NULL,
    {.position = POS(231, 17)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "is_a_digit\000std", NULL,
    {.const_idx = -func_std__is_a_digit}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "293_5_chr\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "and\000std", NULL,
    {.position = POS(295, 6)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "is_a_letter\000std", NULL,
    {.const_idx = -func_std__is_a_letter}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "335_5_chr\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "or\000std", NULL,
    {.position = POS(338, 7)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "is_an_uppercase_letter\000std", NULL,
    {.const_idx = -func_std__is_an_uppercase_letter}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "380_5_chr\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "is_a_lowercase_letter\000std", NULL,
    {.const_idx = -func_std__is_a_lowercase_letter}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "422_5_chr\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "serialize\000", NULL,
    {.position = POS(426, 23)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "455_5_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "456_5_indent\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "to_integer\000", NULL,
    {.position = POS(461, 21)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "string\000std", NULL,
    {.position = POS(461, 10)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "458_4_str\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_defined\000", NULL,
    {.position = POS(464, 12)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "tabs_and_spaces\000", NULL,
    {.position = POS(465, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "append\000", NULL,
    {.position = POS(465, 8)}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "to_wide\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "to_wide\000", NULL,
    {.position = POS(470, 23)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "470_33_chr\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "value_range\000std", NULL,
    {.position = POS(472, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000std", NULL,
    {.position = POS(472, 29)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "case\000", NULL,
    {.position = POS(471, 3)}
  }
};

static FUNKY_NAMESPACE used_namespaces[] = {
  {"std", 1, 0}
};

FUNKY_MODULE module__basic__types__character = {
  "_basic__types__character", // module name
  "basic/types/character.fky", // module filename
  .major_version = 0,
  .minor_version = 0,
  .feature_flags = FEAT_POSITIONS,
  .marker = 0,
  0, // number of required modules
  0, // number of defined namespaces
  1, // number of used namespaces
  71, // number of constants
  55, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  constants_table,
  variables_table,
};
