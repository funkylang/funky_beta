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
  func_std_types__character___search = -7,
  num_0 = -8,
  lambda_5 = -9,
  lambda_6 = -10,
  func_search_forwards = -11,
  lambda_7 = -12,
  lambda_8 = -13,
  lambda_9 = -14,
  lambda_10 = -15,
  lambda_11 = -16,
  lambda_12 = -17,
  func_search_backwards = -18,
  lambda_13 = -19,
  lambda_14 = -20,
  minus_num_1 = -21,
  lambda_15 = -22,
  lambda_16 = -23,
  lambda_17 = -24,
  lambda_18 = -25,
  func_std__is_a_digit = -26,
  chr_48 = -27,
  lambda_19 = -28,
  chr_57 = -29,
  func_std__is_a_letter = -30,
  chr_97 = -31,
  lambda_20 = -32,
  chr_122 = -33,
  lambda_21 = -34,
  chr_65 = -35,
  lambda_22 = -36,
  chr_90 = -37,
  func_std__is_an_uppercase_letter = -38,
  lambda_23 = -39,
  func_std__is_a_lowercase_letter = -40,
  lambda_24 = -41,
  func_std_types__character___serialize = -42,
  chr_32 = -43,
  lambda_25 = -44,
  chr_126 = -45,
  lambda_26 = -46,
  chr_64 = -47,
  lambda_27 = -48,
  string_1 = -49,
  string_2 = -50,
  lambda_28 = -51,
  string_3 = -52,
  string_4 = -53,
  lambda_29 = -54,
  lambda_30 = -55
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
  var_31_0_self, // dynamic
  var_32_0_stream, // dynamic
  var_is_empty, // extern
  var_undefined, // extern
  var_std__equal, // extern
  var_if, // extern
  var_search, // extern polymorphic
  var_47_0_self, // dynamic
  var_48_0_stream, // dynamic
  var_49_0_nth, // dynamic
  var_51_1_i, // dynamic
  var_52_1_n, // dynamic
  var_length_of, // extern
  var_std__less, // extern
  var_std__not, // extern
  var_dec, // extern
  var_inc, // extern
  var_std__is_a_digit, // initialized
  var_103_0_chr, // dynamic
  var_std__and, // extern
  var_std__is_a_letter, // initialized
  var_115_0_chr, // dynamic
  var_std__or, // extern
  var_std__is_an_uppercase_letter, // initialized
  var_130_0_chr, // dynamic
  var_std__is_a_lowercase_letter, // initialized
  var_142_0_chr, // dynamic
  var_serialize, // extern polymorphic
  var_148_0_self, // dynamic
  var_149_0_indent, // dynamic
  var_to_integer, // extern
  var_std__string, // extern
  var_151_1_str, // dynamic
  var_is_defined, // extern
  var_tabs_and_spaces, // extern
  var_append, // extern
  var__END
};


static TAB_NUM t_func_std_types__character___match[] = {
  1, // locals
  2, // parameters
  var_31_0_self,
  var_32_0_stream,
  // is_empty
  var_is_empty, 1, var_32_0_stream, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1, lambda_2, TAIL_CALL,
  POS(35, 12),
  POS(34, 3)
};

static TAB_NUM t_lambda_1[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(36, 7)
};

static TAB_NUM t_lambda_2[] = {
  2, // locals
  0, // parameters
  // stream(1) == self
  var_32_0_stream, 1, num_1, 1, LOCAL(1),
  // stream(1) == self
  var_std__equal, 2, LOCAL(1), var_31_0_self, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_3, lambda_4, TAIL_CALL,
  POS(39, 9),
  POS(39, 9),
  POS(38, 7)
};

static TAB_NUM t_lambda_3[] = {
  0, // locals
  0, // parameters
  //  1
  LET, 1, num_1, TAIL_CALL,
  POS(40, 11)
};

static TAB_NUM t_lambda_4[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(41, 11)
};

static TAB_NUM t_func_std_types__character___search[] = {
  1, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_47_0_self,
  MANDATORY_PARAMETER, var_48_0_stream,
  num_1, var_49_0_nth,
  // $i undefined
  LET, 1, var_undefined, 1, var_51_1_i,
  // $n length_of(stream)
  var_length_of, 1, var_48_0_stream, 1, var_52_1_n,
  // nth < 0:
  var_std__less, 2, var_49_0_nth, num_0, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_5, lambda_6, TAIL_CALL,
  POS(51, 3),
  POS(52, 3),
  POS(54, 5),
  POS(53, 3)
};

static TAB_NUM t_lambda_5[] = {
  0, // locals
  0, // parameters
  // !i n
  LET, 1, var_52_1_n, 1, var_51_1_i,
  // search_backwards
  func_search_backwards, 0, TAIL_CALL,
  POS(55, 7),
  POS(56, 7)
};

static TAB_NUM t_lambda_6[] = {
  0, // locals
  0, // parameters
  // !i 1
  LET, 1, num_1, 1, var_51_1_i,
  // search_forwards
  func_search_forwards, 0, TAIL_CALL,
  POS(58, 7),
  POS(59, 7)
};

static TAB_NUM t_func_search_forwards[] = {
  2, // locals
  0, // parameters
  // n
  var_std__less, 2, var_52_1_n, var_51_1_i, 1, LOCAL(1),
  // n
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_7, lambda_12, TAIL_CALL,
  POS(63, 12),
  POS(63, 12),
  POS(62, 5)
};

static TAB_NUM t_lambda_7[] = {
  2, // locals
  0, // parameters
  // stream(i) == self:
  var_48_0_stream, 1, var_51_1_i, 1, LOCAL(1),
  // stream(i) == self:
  var_std__equal, 2, LOCAL(1), var_47_0_self, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_8, lambda_11, TAIL_CALL,
  POS(66, 11),
  POS(66, 11),
  POS(65, 9)
};

static TAB_NUM t_lambda_8[] = {
  1, // locals
  0, // parameters
  // 1:
  var_std__less, 2, num_1, var_49_0_nth, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_9, lambda_10, TAIL_CALL,
  POS(68, 21),
  POS(67, 13)
};

static TAB_NUM t_lambda_9[] = {
  0, // locals
  0, // parameters
  // dec &nth
  var_dec, 1, var_49_0_nth, 1, var_49_0_nth,
  // inc &i
  var_inc, 1, var_51_1_i, 1, var_51_1_i,
  // search_forwards
  func_search_forwards, 0, TAIL_CALL,
  POS(69, 17),
  POS(70, 17),
  POS(71, 17)
};

static TAB_NUM t_lambda_10[] = {
  0, // locals
  0, // parameters
  //  i 1
  LET, 2, var_51_1_i, num_1, TAIL_CALL,
  POS(72, 17)
};

static TAB_NUM t_lambda_11[] = {
  0, // locals
  0, // parameters
  // inc &i
  var_inc, 1, var_51_1_i, 1, var_51_1_i,
  // search_forwards
  func_search_forwards, 0, TAIL_CALL,
  POS(74, 13),
  POS(75, 13)
};

static TAB_NUM t_lambda_12[] = {
  0, // locals
  0, // parameters
  //  undefined undefined
  LET, 2, var_undefined, var_undefined, TAIL_CALL,
  POS(76, 9)
};

static TAB_NUM t_func_search_backwards[] = {
  2, // locals
  0, // parameters
  // i >= 1
  var_std__less, 2, var_51_1_i, num_1, 1, LOCAL(1),
  // i >= 1
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_13, lambda_18, TAIL_CALL,
  POS(80, 7),
  POS(80, 7),
  POS(79, 5)
};

static TAB_NUM t_lambda_13[] = {
  2, // locals
  0, // parameters
  // stream(i) == self:
  var_48_0_stream, 1, var_51_1_i, 1, LOCAL(1),
  // stream(i) == self:
  var_std__equal, 2, LOCAL(1), var_47_0_self, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_14, lambda_17, TAIL_CALL,
  POS(83, 11),
  POS(83, 11),
  POS(82, 9)
};

static TAB_NUM t_lambda_14[] = {
  1, // locals
  0, // parameters
  // nth < -1:
  var_std__less, 2, var_49_0_nth, minus_num_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_15, lambda_16, TAIL_CALL,
  POS(85, 15),
  POS(84, 13)
};

static TAB_NUM t_lambda_15[] = {
  0, // locals
  0, // parameters
  // inc &nth
  var_inc, 1, var_49_0_nth, 1, var_49_0_nth,
  // dec &i
  var_dec, 1, var_51_1_i, 1, var_51_1_i,
  // search_backwards
  func_search_backwards, 0, TAIL_CALL,
  POS(86, 17),
  POS(87, 17),
  POS(88, 17)
};

static TAB_NUM t_lambda_16[] = {
  0, // locals
  0, // parameters
  //  i 1
  LET, 2, var_51_1_i, num_1, TAIL_CALL,
  POS(89, 17)
};

static TAB_NUM t_lambda_17[] = {
  0, // locals
  0, // parameters
  // dec &i
  var_dec, 1, var_51_1_i, 1, var_51_1_i,
  // search_backwards
  func_search_backwards, 0, TAIL_CALL,
  POS(91, 13),
  POS(92, 13)
};

static TAB_NUM t_lambda_18[] = {
  0, // locals
  0, // parameters
  //  undefined undefined
  LET, 2, var_undefined, var_undefined, TAIL_CALL,
  POS(93, 9)
};

static TAB_NUM t_func_std__is_a_digit[] = {
  3, // locals
  1, // parameters
  var_103_0_chr,
  // chr >= '0' && chr <= '9'
  var_std__less, 2, var_103_0_chr, chr_48, 1, LOCAL(1),
  // chr >= '0' && chr <= '9'
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // chr >= '0' && chr <= '9'
  var_std__and, 2, LOCAL(2), lambda_19, 1, LOCAL(3),
  // -> chr >= '0' && chr <= '9'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(105, 6),
  POS(105, 6),
  POS(105, 6),
  POS(105, 3)
};

static TAB_NUM t_lambda_19[] = {
  2, // locals
  0, // parameters
  // 9'
  var_std__less, 2, chr_57, var_103_0_chr, 1, LOCAL(1),
  // 9'
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // chr <= '9'
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(105, 28),
  POS(105, 28),
  POS(105, 20)
};

static TAB_NUM t_func_std__is_a_letter[] = {
  4, // locals
  1, // parameters
  var_115_0_chr,
  // chr >= 'a' && chr <= 'z'
  var_std__less, 2, var_115_0_chr, chr_97, 1, LOCAL(1),
  // chr >= 'a' && chr <= 'z'
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // chr >= 'a' && chr <= 'z'
  var_std__and, 2, LOCAL(2), lambda_20, 1, LOCAL(3),
  // 
  var_std__or, 2, LOCAL(3), lambda_21, 1, LOCAL(4),
  // ->
  LET, 1, LOCAL(4), TAIL_CALL,
  POS(119, 7),
  POS(119, 7),
  POS(119, 7),
  POS(118, 7),
  POS(117, 3)
};

static TAB_NUM t_lambda_20[] = {
  2, // locals
  0, // parameters
  // z'
  var_std__less, 2, chr_122, var_115_0_chr, 1, LOCAL(1),
  // z'
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // chr <= 'z'
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(119, 29),
  POS(119, 29),
  POS(119, 21)
};

static TAB_NUM t_lambda_21[] = {
  3, // locals
  0, // parameters
  // chr >= 'A' && chr <= 'Z'
  var_std__less, 2, var_115_0_chr, chr_65, 1, LOCAL(1),
  // chr >= 'A' && chr <= 'Z'
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // chr >= 'A' && chr <= 'Z'
  var_std__and, 2, LOCAL(2), lambda_22, 1, LOCAL(3),
  // chr >= 'A' && chr <= 'Z'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(120, 7),
  POS(120, 7),
  POS(120, 7),
  POS(120, 7)
};

static TAB_NUM t_lambda_22[] = {
  2, // locals
  0, // parameters
  // Z'
  var_std__less, 2, chr_90, var_115_0_chr, 1, LOCAL(1),
  // Z'
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // chr <= 'Z'
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(120, 29),
  POS(120, 29),
  POS(120, 21)
};

static TAB_NUM t_func_std__is_an_uppercase_letter[] = {
  3, // locals
  1, // parameters
  var_130_0_chr,
  // chr >= 'A' && chr <= 'Z'
  var_std__less, 2, var_130_0_chr, chr_65, 1, LOCAL(1),
  // chr >= 'A' && chr <= 'Z'
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // chr >= 'A' && chr <= 'Z'
  var_std__and, 2, LOCAL(2), lambda_23, 1, LOCAL(3),
  // -> chr >= 'A' && chr <= 'Z'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(132, 6),
  POS(132, 6),
  POS(132, 6),
  POS(132, 3)
};

static TAB_NUM t_lambda_23[] = {
  2, // locals
  0, // parameters
  // Z'
  var_std__less, 2, chr_90, var_130_0_chr, 1, LOCAL(1),
  // Z'
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // chr <= 'Z'
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(132, 28),
  POS(132, 28),
  POS(132, 20)
};

static TAB_NUM t_func_std__is_a_lowercase_letter[] = {
  3, // locals
  1, // parameters
  var_142_0_chr,
  // chr >= 'a' && chr <= 'z'
  var_std__less, 2, var_142_0_chr, chr_97, 1, LOCAL(1),
  // chr >= 'a' && chr <= 'z'
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // chr >= 'a' && chr <= 'z'
  var_std__and, 2, LOCAL(2), lambda_24, 1, LOCAL(3),
  // -> chr >= 'a' && chr <= 'z'
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(144, 6),
  POS(144, 6),
  POS(144, 6),
  POS(144, 3)
};

static TAB_NUM t_lambda_24[] = {
  2, // locals
  0, // parameters
  // z'
  var_std__less, 2, chr_122, var_142_0_chr, 1, LOCAL(1),
  // z'
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // chr <= 'z'
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(144, 28),
  POS(144, 28),
  POS(144, 20)
};

static TAB_NUM t_func_std_types__character___serialize[] = {
  2, // locals
  -2, // parameters
  MANDATORY_PARAMETER, var_148_0_self,
  var_undefined, var_149_0_indent,
  // self < '@0x20;' || self > '@0x7e;' || self == '@@'
  var_std__less, 2, var_148_0_self, chr_32, 1, LOCAL(1),
  // self < '@0x20;' || self > '@0x7e;' || self == '@@'
  var_std__or, 2, LOCAL(1), lambda_25, 1, LOCAL(2),
  // $str
  var_if, 3, LOCAL(2), lambda_27, lambda_28, 1, var_151_1_str,
  // is_defined
  var_is_defined, 1, var_149_0_indent, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_29, lambda_30, TAIL_CALL,
  POS(153, 7),
  POS(153, 7),
  POS(151, 3),
  POS(157, 12),
  POS(156, 3)
};

static TAB_NUM t_lambda_25[] = {
  2, // locals
  0, // parameters
  // 0x7e;' || self == '@@'
  var_std__less, 2, chr_126, var_148_0_self, 1, LOCAL(1),
  // 0x7e;' || self == '@@'
  var_std__or, 2, LOCAL(1), lambda_26, 1, LOCAL(2),
  // self > '@0x7e;' || self == '@@'
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(153, 35),
  POS(153, 35),
  POS(153, 26)
};

static TAB_NUM t_lambda_26[] = {
  1, // locals
  0, // parameters
  // self == '@@'
  var_std__equal, 2, var_148_0_self, chr_64, 1, LOCAL(1),
  // self == '@@'
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(153, 45),
  POS(153, 45)
};

static TAB_NUM t_lambda_27[] = {
  2, // locals
  0, // parameters
  // to_integer);'@nl;"
  var_to_integer, 1, var_148_0_self, 1, LOCAL(1),
  // "'@@@(self.to_integer);'@nl;"
  var_std__string, 3, string_1, LOCAL(1), string_2, 1, LOCAL(2),
  //  "'@@@(self.to_integer);'@nl;"
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(154, 21),
  POS(154, 10),
  POS(154, 9)
};

static TAB_NUM t_lambda_28[] = {
  1, // locals
  0, // parameters
  // "'@(self)'@nl;"
  var_std__string, 3, string_3, var_148_0_self, string_4, 1, LOCAL(1),
  //  "'@(self)'@nl;"
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(155, 10),
  POS(155, 9)
};

static TAB_NUM t_lambda_29[] = {
  2, // locals
  0, // parameters
  // tabs_and_spaces(indent) str)
  var_tabs_and_spaces, 1, var_149_0_indent, 1, LOCAL(1),
  // append(tabs_and_spaces(indent) str)
  var_append, 2, LOCAL(1), var_151_1_str, 1, LOCAL(2),
  //  append(tabs_and_spaces(indent) str)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(158, 15),
  POS(158, 8),
  POS(158, 7)
};

static TAB_NUM t_lambda_30[] = {
  0, // locals
  0, // parameters
  //  str
  LET, 1, var_151_1_str, TAIL_CALL,
  POS(159, 7)
};

static FUNKY_CONSTANT constants_table[] = {
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__character___match}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2}},
  {FLT_POSITIVE_INT64, 0, {.value = 1}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_3}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_4}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__character___search}},
  {FLT_POSITIVE_INT64, 0, {.value = 0}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_5}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_6}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_search_forwards}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_7}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_8}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_9}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_10}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_11}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_12}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_search_backwards}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_13}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_14}},
  {FLT_NEGATIVE_INT64, 0, {.value = 1}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_15}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_16}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_17}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_18}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__is_a_digit}},
  {FLT_CHARACTER, 0, {.value = 48}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_19}},
  {FLT_CHARACTER, 0, {.value = 57}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__is_a_letter}},
  {FLT_CHARACTER, 0, {.value = 97}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_20}},
  {FLT_CHARACTER, 0, {.value = 122}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_21}},
  {FLT_CHARACTER, 0, {.value = 65}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_22}},
  {FLT_CHARACTER, 0, {.value = 90}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__is_an_uppercase_letter}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_23}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__is_a_lowercase_letter}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_24}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__character___serialize}},
  {FLT_CHARACTER, 0, {.value = 32}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_25}},
  {FLT_CHARACTER, 0, {.value = 126}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_26}},
  {FLT_CHARACTER, 0, {.value = 64}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_27}},
  {FLT_STRING_8, 2, {.str_8 = "'@"}},
  {FLT_STRING_8, 3, {.str_8 = ";'\012"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_28}},
  {FLT_STRING_8, 1, {.str_8 = "'"}},
  {FLT_STRING_8, 2, {.str_8 = "'\012"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_29}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_30}}
};

static ATTRIBUTE_DEFINITION std_types__object__attributes[] = {
  {-var_is_a_character, -var_false}
};

static ATTRIBUTE_DEFINITION std_types__character__attributes[] = {
  {-var_is_a_character, -var_true},
  {var_match, -func_std_types__character___match},
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
    {.position = POS(24, 1)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "is_a_character\000", NULL,
    {.position = POS(24, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "false\000", NULL,
    {.position = POS(24, 35)}
  },
  {
    FOT_UNKNOWN, 0, 4,
    "character\000std_types", std_types__character__attributes,
    {.position = POS(25, 1)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "true\000", NULL,
    {.position = POS(25, 38)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "match\000", NULL,
    {.position = POS(27, 23)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "31_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "32_0_stream\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_empty\000", NULL,
    {.position = POS(35, 12)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "undefined\000", NULL,
    {.position = POS(36, 8)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "equal\000std", NULL,
    {.position = POS(39, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if\000", NULL,
    {.position = POS(38, 7)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "search\000", NULL,
    {.position = POS(43, 23)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "47_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "48_0_stream\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "49_0_nth\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "51_1_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "52_1_n\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "length_of\000", NULL,
    {.position = POS(52, 6)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "less\000std", NULL,
    {.position = POS(54, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not\000std", NULL,
    {.position = POS(63, 12)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "dec\000", NULL,
    {.position = POS(69, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "inc\000", NULL,
    {.position = POS(70, 17)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "is_a_digit\000std", NULL,
    {.const_idx = -func_std__is_a_digit}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "103_0_chr\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "and\000std", NULL,
    {.position = POS(105, 6)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "is_a_letter\000std", NULL,
    {.const_idx = -func_std__is_a_letter}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "115_0_chr\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "or\000std", NULL,
    {.position = POS(118, 7)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "is_an_uppercase_letter\000std", NULL,
    {.const_idx = -func_std__is_an_uppercase_letter}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "130_0_chr\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "is_a_lowercase_letter\000std", NULL,
    {.const_idx = -func_std__is_a_lowercase_letter}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "142_0_chr\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "serialize\000", NULL,
    {.position = POS(146, 23)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "148_0_self\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "149_0_indent\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "to_integer\000", NULL,
    {.position = POS(154, 21)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "string\000std", NULL,
    {.position = POS(154, 10)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "151_1_str\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_defined\000", NULL,
    {.position = POS(157, 12)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "tabs_and_spaces\000", NULL,
    {.position = POS(158, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "append\000", NULL,
    {.position = POS(158, 8)}
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
  55, // number of constants
  44, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  constants_table,
  variables_table,
};
