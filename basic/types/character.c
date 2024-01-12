#include <stddef.h>
#include <stdint.h>

#include "runtime/common.h"
#include "runtime/builtins.h"
#include "runtime/fko.h"
#include "runtime/memory.h"

enum {
  func_std_types__character___match = -1,
  lambda_1 = -2,
  lambda_2 = -3,
  num_1 = -4,
  lambda_3 = -5,
  lambda_4 = -6,
  func_std_types__character___match_back = -7,
  lambda_5 = -8,
  lambda_6 = -9,
  minus_num_1 = -10,
  lambda_7 = -11,
  lambda_8 = -12,
  func_std_types__character___search = -13,
  num_0 = -14,
  lambda_9 = -15,
  lambda_10 = -16,
  func_search_forwards = -17,
  lambda_11 = -18,
  lambda_12 = -19,
  lambda_13 = -20,
  lambda_14 = -21,
  lambda_15 = -22,
  lambda_16 = -23,
  func_search_backwards = -24,
  lambda_17 = -25,
  lambda_18 = -26,
  lambda_19 = -27,
  lambda_20 = -28,
  lambda_21 = -29,
  lambda_22 = -30,
  func_std__is_a_digit = -31,
  chr_48 = -32,
  lambda_23 = -33,
  chr_57 = -34,
  func_std__is_a_letter = -35,
  chr_97 = -36,
  lambda_24 = -37,
  chr_122 = -38,
  lambda_25 = -39,
  chr_65 = -40,
  lambda_26 = -41,
  chr_90 = -42,
  func_std__is_an_uppercase_letter = -43,
  lambda_27 = -44,
  func_std__is_a_lowercase_letter = -45,
  lambda_28 = -46,
  func_std_types__character___serialize = -47,
  chr_32 = -48,
  lambda_29 = -49,
  chr_126 = -50,
  lambda_30 = -51,
  chr_64 = -52,
  lambda_31 = -53,
  string_1 = -54,
  string_2 = -55,
  lambda_32 = -56,
  string_3 = -57,
  string_4 = -58,
  lambda_33 = -59,
  lambda_34 = -60
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
  var_73_0_self, // dynamic
  var_74_0_str, // dynamic
  var_is_empty, // extern
  var_undefined, // extern
  var_std__equal, // extern
  var_if, // extern
  var_match_back, // extern polymorphic
  var_118_0_self, // dynamic
  var_119_0_str, // dynamic
  var_search, // extern polymorphic
  var_188_0_self, // dynamic
  var_189_0_stream, // dynamic
  var_190_0_nth, // dynamic
  var_192_1_i, // dynamic
  var_193_1_n, // dynamic
  var_length_of, // extern
  var_std__less, // extern
  var_std__not, // extern
  var_dec, // extern
  var_inc, // extern
  var_std__is_a_digit, // initialized
  var_273_0_chr, // dynamic
  var_std__and, // extern
  var_std__is_a_letter, // initialized
  var_315_0_chr, // dynamic
  var_std__or, // extern
  var_std__is_an_uppercase_letter, // initialized
  var_360_0_chr, // dynamic
  var_std__is_a_lowercase_letter, // initialized
  var_402_0_chr, // dynamic
  var_serialize, // extern polymorphic
  var_435_0_self, // dynamic
  var_436_0_indent, // dynamic
  var_to_integer, // extern
  var_std__string, // extern
  var_438_1_str, // dynamic
  var_is_defined, // extern
  var_tabs_and_spaces, // extern
  var_append, // extern
  var__END
};


static TAB_NUM t_func_std_types__character___match[] = {
  1, // locals
  2, // parameters
  var_73_0_self,
  var_74_0_str,
  // is_empty
  var_is_empty, 1, var_74_0_str, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1, lambda_2, TAIL_CALL,
  POS(77, 9),
  POS(76, 3)
};

static TAB_NUM t_lambda_1[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(78, 7)
};

static TAB_NUM t_lambda_2[] = {
  2, // locals
  0, // parameters
  // str(1) == self
  var_74_0_str, 1, num_1, 1, LOCAL(1),
  // str(1) == self
  var_std__equal, 2, LOCAL(1), var_73_0_self, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_3, lambda_4, TAIL_CALL,
  POS(81, 9),
  POS(81, 9),
  POS(80, 7)
};

static TAB_NUM t_lambda_3[] = {
  0, // locals
  0, // parameters
  //  1
  LET, 1, num_1, TAIL_CALL,
  POS(82, 11)
};

static TAB_NUM t_lambda_4[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(83, 11)
};

static TAB_NUM t_func_std_types__character___match_back[] = {
  1, // locals
  2, // parameters
  var_118_0_self,
  var_119_0_str,
  // is_empty
  var_is_empty, 1, var_119_0_str, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_5, lambda_6, TAIL_CALL,
  POS(122, 9),
  POS(121, 3)
};

static TAB_NUM t_lambda_5[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(123, 7)
};

static TAB_NUM t_lambda_6[] = {
  2, // locals
  0, // parameters
  // str(-1) == self
  var_119_0_str, 1, minus_num_1, 1, LOCAL(1),
  // str(-1) == self
  var_std__equal, 2, LOCAL(1), var_118_0_self, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_7, lambda_8, TAIL_CALL,
  POS(126, 9),
  POS(126, 9),
  POS(125, 7)
};

static TAB_NUM t_lambda_7[] = {
  0, // locals
  0, // parameters
  //  1
  LET, 1, num_1, TAIL_CALL,
  POS(127, 11)
};

static TAB_NUM t_lambda_8[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(128, 11)
};

static TAB_NUM t_func_std_types__character___search[] = {
  1, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_188_0_self,
  MANDATORY_PARAMETER, var_189_0_stream,
  num_1, var_190_0_nth,
  // $i undefined
  LET, 1, var_undefined, 1, var_192_1_i,
  // $n length_of(stream)
  var_length_of, 1, var_189_0_stream, 1, var_193_1_n,
  // nth < 0:
  var_std__less, 2, var_190_0_nth, num_0, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_9, lambda_10, TAIL_CALL,
  POS(192, 3),
  POS(193, 3),
  POS(195, 5),
  POS(194, 3)
};

static TAB_NUM t_lambda_9[] = {
  0, // locals
  0, // parameters
  // !i n
  LET, 1, var_193_1_n, 1, var_192_1_i,
  // search_backwards
  func_search_backwards, 0, TAIL_CALL,
  POS(196, 7),
  POS(197, 7)
};

static TAB_NUM t_lambda_10[] = {
  0, // locals
  0, // parameters
  // !i 1
  LET, 1, num_1, 1, var_192_1_i,
  // search_forwards
  func_search_forwards, 0, TAIL_CALL,
  POS(199, 7),
  POS(200, 7)
};

static TAB_NUM t_func_search_forwards[] = {
  2, // locals
  0, // parameters
  // n
  var_std__less, 2, var_193_1_n, var_192_1_i, 1, LOCAL(1),
  // n
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_11, lambda_16, TAIL_CALL,
  POS(204, 12),
  POS(204, 12),
  POS(203, 5)
};

static TAB_NUM t_lambda_11[] = {
  2, // locals
  0, // parameters
  // stream(i) == self:
  var_189_0_stream, 1, var_192_1_i, 1, LOCAL(1),
  // stream(i) == self:
  var_std__equal, 2, LOCAL(1), var_188_0_self, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_12, lambda_15, TAIL_CALL,
  POS(207, 11),
  POS(207, 11),
  POS(206, 9)
};

static TAB_NUM t_lambda_12[] = {
  1, // locals
  0, // parameters
  // 1:
  var_std__less, 2, num_1, var_190_0_nth, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_13, lambda_14, TAIL_CALL,
  POS(209, 21),
  POS(208, 13)
};

static TAB_NUM t_lambda_13[] = {
  0, // locals
  0, // parameters
  // dec &nth
  var_dec, 1, var_190_0_nth, 1, var_190_0_nth,
  // inc &i
  var_inc, 1, var_192_1_i, 1, var_192_1_i,
  // search_forwards
  func_search_forwards, 0, TAIL_CALL,
  POS(210, 17),
  POS(211, 17),
  POS(212, 17)
};

static TAB_NUM t_lambda_14[] = {
  0, // locals
  0, // parameters
  //  i 1
  LET, 2, var_192_1_i, num_1, TAIL_CALL,
  POS(213, 17)
};

static TAB_NUM t_lambda_15[] = {
  0, // locals
  0, // parameters
  // inc &i
  var_inc, 1, var_192_1_i, 1, var_192_1_i,
  // search_forwards
  func_search_forwards, 0, TAIL_CALL,
  POS(215, 13),
  POS(216, 13)
};

static TAB_NUM t_lambda_16[] = {
  0, // locals
  0, // parameters
  //  undefined undefined
  LET, 2, var_undefined, var_undefined, TAIL_CALL,
  POS(217, 9)
};

static TAB_NUM t_func_search_backwards[] = {
  2, // locals
  0, // parameters
  // i >= 1
  var_std__less, 2, var_192_1_i, num_1, 1, LOCAL(1),
  // i >= 1
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_17, lambda_22, TAIL_CALL,
  POS(221, 7),
  POS(221, 7),
  POS(220, 5)
};

static TAB_NUM t_lambda_17[] = {
  2, // locals
  0, // parameters
  // stream(i) == self:
  var_189_0_stream, 1, var_192_1_i, 1, LOCAL(1),
  // stream(i) == self:
  var_std__equal, 2, LOCAL(1), var_188_0_self, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_18, lambda_21, TAIL_CALL,
  POS(224, 11),
  POS(224, 11),
  POS(223, 9)
};

static TAB_NUM t_lambda_18[] = {
  1, // locals
  0, // parameters
  // nth < -1:
  var_std__less, 2, var_190_0_nth, minus_num_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_19, lambda_20, TAIL_CALL,
  POS(226, 15),
  POS(225, 13)
};

static TAB_NUM t_lambda_19[] = {
  0, // locals
  0, // parameters
  // inc &nth
  var_inc, 1, var_190_0_nth, 1, var_190_0_nth,
  // dec &i
  var_dec, 1, var_192_1_i, 1, var_192_1_i,
  // search_backwards
  func_search_backwards, 0, TAIL_CALL,
  POS(227, 17),
  POS(228, 17),
  POS(229, 17)
};

static TAB_NUM t_lambda_20[] = {
  0, // locals
  0, // parameters
  //  i 1
  LET, 2, var_192_1_i, num_1, TAIL_CALL,
  POS(230, 17)
};

static TAB_NUM t_lambda_21[] = {
  0, // locals
  0, // parameters
  // dec &i
  var_dec, 1, var_192_1_i, 1, var_192_1_i,
  // search_backwards
  func_search_backwards, 0, TAIL_CALL,
  POS(232, 13),
  POS(233, 13)
};

static TAB_NUM t_lambda_22[] = {
  0, // locals
  0, // parameters
  //  undefined undefined
  LET, 2, var_undefined, var_undefined, TAIL_CALL,
  POS(234, 9)
};

static TAB_NUM t_func_std__is_a_digit[] = {
  3, // locals
  1, // parameters
  var_273_0_chr,
  // chr >= '0' && chr <= '9'
  var_std__less, 2, var_273_0_chr, chr_48, 1, LOCAL(1),
  // chr >= '0' && chr <= '9'
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // chr >= '0' && chr <= '9'
  var_std__and, 2, LOCAL(2), lambda_23, 1, LOCAL(3),
  // -> chr >= '0' && chr <= '9'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(275, 6),
  POS(275, 6),
  POS(275, 6),
  POS(275, 3)
};

static TAB_NUM t_lambda_23[] = {
  2, // locals
  0, // parameters
  // 9'
  var_std__less, 2, chr_57, var_273_0_chr, 1, LOCAL(1),
  // 9'
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // chr <= '9'
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(275, 28),
  POS(275, 28),
  POS(275, 20)
};

static TAB_NUM t_func_std__is_a_letter[] = {
  4, // locals
  1, // parameters
  var_315_0_chr,
  // chr >= 'a' && chr <= 'z'
  var_std__less, 2, var_315_0_chr, chr_97, 1, LOCAL(1),
  // chr >= 'a' && chr <= 'z'
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // chr >= 'a' && chr <= 'z'
  var_std__and, 2, LOCAL(2), lambda_24, 1, LOCAL(3),
  // 
  var_std__or, 2, LOCAL(3), lambda_25, 1, LOCAL(4),
  // ->
  LET, 1, LOCAL(4), TAIL_CALL,
  POS(319, 7),
  POS(319, 7),
  POS(319, 7),
  POS(318, 7),
  POS(317, 3)
};

static TAB_NUM t_lambda_24[] = {
  2, // locals
  0, // parameters
  // z'
  var_std__less, 2, chr_122, var_315_0_chr, 1, LOCAL(1),
  // z'
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // chr <= 'z'
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(319, 29),
  POS(319, 29),
  POS(319, 21)
};

static TAB_NUM t_lambda_25[] = {
  3, // locals
  0, // parameters
  // chr >= 'A' && chr <= 'Z'
  var_std__less, 2, var_315_0_chr, chr_65, 1, LOCAL(1),
  // chr >= 'A' && chr <= 'Z'
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // chr >= 'A' && chr <= 'Z'
  var_std__and, 2, LOCAL(2), lambda_26, 1, LOCAL(3),
  // chr >= 'A' && chr <= 'Z'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(320, 7),
  POS(320, 7),
  POS(320, 7),
  POS(320, 7)
};

static TAB_NUM t_lambda_26[] = {
  2, // locals
  0, // parameters
  // Z'
  var_std__less, 2, chr_90, var_315_0_chr, 1, LOCAL(1),
  // Z'
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // chr <= 'Z'
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(320, 29),
  POS(320, 29),
  POS(320, 21)
};

static TAB_NUM t_func_std__is_an_uppercase_letter[] = {
  3, // locals
  1, // parameters
  var_360_0_chr,
  // chr >= 'A' && chr <= 'Z'
  var_std__less, 2, var_360_0_chr, chr_65, 1, LOCAL(1),
  // chr >= 'A' && chr <= 'Z'
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // chr >= 'A' && chr <= 'Z'
  var_std__and, 2, LOCAL(2), lambda_27, 1, LOCAL(3),
  // -> chr >= 'A' && chr <= 'Z'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(362, 6),
  POS(362, 6),
  POS(362, 6),
  POS(362, 3)
};

static TAB_NUM t_lambda_27[] = {
  2, // locals
  0, // parameters
  // Z'
  var_std__less, 2, chr_90, var_360_0_chr, 1, LOCAL(1),
  // Z'
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // chr <= 'Z'
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(362, 28),
  POS(362, 28),
  POS(362, 20)
};

static TAB_NUM t_func_std__is_a_lowercase_letter[] = {
  3, // locals
  1, // parameters
  var_402_0_chr,
  // chr >= 'a' && chr <= 'z'
  var_std__less, 2, var_402_0_chr, chr_97, 1, LOCAL(1),
  // chr >= 'a' && chr <= 'z'
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // chr >= 'a' && chr <= 'z'
  var_std__and, 2, LOCAL(2), lambda_28, 1, LOCAL(3),
  // -> chr >= 'a' && chr <= 'z'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(404, 6),
  POS(404, 6),
  POS(404, 6),
  POS(404, 3)
};

static TAB_NUM t_lambda_28[] = {
  2, // locals
  0, // parameters
  // z'
  var_std__less, 2, chr_122, var_402_0_chr, 1, LOCAL(1),
  // z'
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // chr <= 'z'
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(404, 28),
  POS(404, 28),
  POS(404, 20)
};

static TAB_NUM t_func_std_types__character___serialize[] = {
  2, // locals
  -2, // parameters
  MANDATORY_PARAMETER, var_435_0_self,
  var_undefined, var_436_0_indent,
  // self < '@0x20;' || self > '@0x7e;' || self == '@@'
  var_std__less, 2, var_435_0_self, chr_32, 1, LOCAL(1),
  // self < '@0x20;' || self > '@0x7e;' || self == '@@'
  var_std__or, 2, LOCAL(1), lambda_29, 1, LOCAL(2),
  // $str
  var_if, 3, LOCAL(2), lambda_31, lambda_32, 1, var_438_1_str,
  // is_defined
  var_is_defined, 1, var_436_0_indent, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_33, lambda_34, TAIL_CALL,
  POS(440, 7),
  POS(440, 7),
  POS(438, 3),
  POS(444, 12),
  POS(443, 3)
};

static TAB_NUM t_lambda_29[] = {
  2, // locals
  0, // parameters
  // 0x7e;' || self == '@@'
  var_std__less, 2, chr_126, var_435_0_self, 1, LOCAL(1),
  // 0x7e;' || self == '@@'
  var_std__or, 2, LOCAL(1), lambda_30, 1, LOCAL(2),
  // self > '@0x7e;' || self == '@@'
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(440, 35),
  POS(440, 35),
  POS(440, 26)
};

static TAB_NUM t_lambda_30[] = {
  1, // locals
  0, // parameters
  // self == '@@'
  var_std__equal, 2, var_435_0_self, chr_64, 1, LOCAL(1),
  // self == '@@'
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(440, 45),
  POS(440, 45)
};

static TAB_NUM t_lambda_31[] = {
  2, // locals
  0, // parameters
  // to_integer);'@nl;"
  var_to_integer, 1, var_435_0_self, 1, LOCAL(1),
  // "'@@@(self.to_integer);'@nl;"
  var_std__string, 3, string_1, LOCAL(1), string_2, 1, LOCAL(2),
  //  "'@@@(self.to_integer);'@nl;"
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(441, 21),
  POS(441, 10),
  POS(441, 9)
};

static TAB_NUM t_lambda_32[] = {
  1, // locals
  0, // parameters
  // "'@(self)'@nl;"
  var_std__string, 3, string_3, var_435_0_self, string_4, 1, LOCAL(1),
  //  "'@(self)'@nl;"
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(442, 10),
  POS(442, 9)
};

static TAB_NUM t_lambda_33[] = {
  2, // locals
  0, // parameters
  // tabs_and_spaces(indent) str)
  var_tabs_and_spaces, 1, var_436_0_indent, 1, LOCAL(1),
  // append(tabs_and_spaces(indent) str)
  var_append, 2, LOCAL(1), var_438_1_str, 1, LOCAL(2),
  //  append(tabs_and_spaces(indent) str)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(445, 15),
  POS(445, 8),
  POS(445, 7)
};

static TAB_NUM t_lambda_34[] = {
  0, // locals
  0, // parameters
  //  str
  LET, 1, var_438_1_str, TAIL_CALL,
  POS(446, 7)
};

static FUNKY_CONSTANT constants_table[] = {
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__character___match}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2}},
  {FLT_POSITIVE_INT64, 0, {.value = 1}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_3}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_4}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__character___match_back}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_5}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_6}},
  {FLT_NEGATIVE_INT64, 0, {.value = 1}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_7}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_8}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__character___search}},
  {FLT_POSITIVE_INT64, 0, {.value = 0}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_9}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_10}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_search_forwards}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_11}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_12}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_13}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_14}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_15}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_16}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_search_backwards}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_17}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_18}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_19}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_20}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_21}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_22}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__is_a_digit}},
  {FLT_CHARACTER, 0, {.value = 48}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_23}},
  {FLT_CHARACTER, 0, {.value = 57}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__is_a_letter}},
  {FLT_CHARACTER, 0, {.value = 97}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_24}},
  {FLT_CHARACTER, 0, {.value = 122}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_25}},
  {FLT_CHARACTER, 0, {.value = 65}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_26}},
  {FLT_CHARACTER, 0, {.value = 90}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__is_an_uppercase_letter}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_27}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__is_a_lowercase_letter}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_28}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__character___serialize}},
  {FLT_CHARACTER, 0, {.value = 32}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_29}},
  {FLT_CHARACTER, 0, {.value = 126}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_30}},
  {FLT_CHARACTER, 0, {.value = 64}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_31}},
  {FLT_STRING_8, 2, {.str_8 = "'@"}},
  {FLT_STRING_8, 3, {.str_8 = ";'\012"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_32}},
  {FLT_STRING_8, 1, {.str_8 = "'"}},
  {FLT_STRING_8, 2, {.str_8 = "'\012"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_33}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_34}}
};

static ATTRIBUTE_DEFINITION std_types__object__attributes[] = {
  {-var_is_a_character, -var_false}
};

static ATTRIBUTE_DEFINITION std_types__character__attributes[] = {
  {-var_is_a_character, -var_true},
  {var_match, -func_std_types__character___match},
  {var_match_back, -func_std_types__character___match_back},
  {var_search, -func_std_types__character___search},
  {var_serialize, -func_std_types__character___serialize}
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
    {.position = POS(22, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "object\000std_types", std_types__object__attributes,
    {.position = POS(28, 1)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "is_a_character\000", NULL,
    {.position = POS(28, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "false\000", NULL,
    {.position = POS(28, 35)}
  },
  {
    FOT_UNKNOWN, 0, 5,
    "character\000std_types", std_types__character__attributes,
    {.position = POS(34, 1)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "true\000", NULL,
    {.position = POS(34, 38)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "match\000", NULL,
    {.position = POS(40, 23)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "73_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "74_0_str\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_empty\000", NULL,
    {.position = POS(77, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "undefined\000", NULL,
    {.position = POS(78, 8)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "equal\000std", NULL,
    {.position = POS(81, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if\000", NULL,
    {.position = POS(80, 7)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "match_back\000", NULL,
    {.position = POS(85, 23)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "118_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "119_0_str\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "search\000", NULL,
    {.position = POS(130, 23)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "188_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "189_0_stream\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "190_0_nth\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "192_1_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "193_1_n\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "length_of\000", NULL,
    {.position = POS(193, 6)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "less\000std", NULL,
    {.position = POS(195, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not\000std", NULL,
    {.position = POS(204, 12)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "dec\000", NULL,
    {.position = POS(210, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "inc\000", NULL,
    {.position = POS(211, 17)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "is_a_digit\000std", NULL,
    {.const_idx = -func_std__is_a_digit}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "273_0_chr\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "and\000std", NULL,
    {.position = POS(275, 6)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "is_a_letter\000std", NULL,
    {.const_idx = -func_std__is_a_letter}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "315_0_chr\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "or\000std", NULL,
    {.position = POS(318, 7)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "is_an_uppercase_letter\000std", NULL,
    {.const_idx = -func_std__is_an_uppercase_letter}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "360_0_chr\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "is_a_lowercase_letter\000std", NULL,
    {.const_idx = -func_std__is_a_lowercase_letter}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "402_0_chr\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "serialize\000", NULL,
    {.position = POS(406, 23)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "435_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "436_0_indent\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "to_integer\000", NULL,
    {.position = POS(441, 21)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "string\000std", NULL,
    {.position = POS(441, 10)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "438_1_str\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_defined\000", NULL,
    {.position = POS(444, 12)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "tabs_and_spaces\000", NULL,
    {.position = POS(445, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "append\000", NULL,
    {.position = POS(445, 8)}
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
  60, // number of constants
  47, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  constants_table,
  variables_table,
};
