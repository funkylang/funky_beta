#include <stddef.h>
#include <stdint.h>

#include "runtime/common.h"
#include "runtime/builtins.h"
#include "runtime/fko.h"
#include "runtime/memory.h"

enum {
  uni_NONE = -1,
  func_std__count = -2,
  lambda_1 = -3,
  lambda_2 = -4,
  lambda_3 = -5,
  num_1 = -6,
  lambda_4 = -7,
  num_0 = -8,
  lambda_5 = -9,
  lambda_6 = -10,
  lambda_7 = -11,
  lambda_8 = -12,
  lambda_9 = -13,
  lambda_10 = -14,
  lambda_11 = -15,
  lambda_12 = -16,
  lambda_13 = -17,
  func_std__any_of = -18,
  lambda_14 = -19,
  lambda_15 = -20,
  lambda_16 = -21,
  lambda_17 = -22,
  lambda_18 = -23,
  lambda_19 = -24,
  lambda_20 = -25,
  lambda_21 = -26,
  func_std__all_of = -27,
  lambda_22 = -28,
  lambda_23 = -29,
  lambda_24 = -30,
  lambda_25 = -31,
  lambda_26 = -32,
  lambda_27 = -33,
  lambda_28 = -34,
  lambda_29 = -35,
  func_std__apply = -36,
  lambda_arguments_is_empty = -37,
  lambda_30 = -38,
  minus_num_2 = -39,
  minus_num_1 = -40,
  lambda_31 = -41,
  num_2 = -42,
  lambda_32 = -43,
  num_3 = -44,
  lambda_33 = -45,
  num_4 = -46,
  lambda_34 = -47,
  num_5 = -48,
  lambda_35 = -49,
  num_6 = -50,
  lambda_36 = -51,
  num_7 = -52,
  lambda_37 = -53,
  num_8 = -54,
  lambda_38 = -55,
  lambda_39 = -56,
  str_TOO_MANY_ARGUMEN = -57
};

enum {
  var__START = FIRST_VAR-1,
  var_std__assign, // extern
  var_std__count, // initialized
  var_59_0_collection, // dynamic
  var_60_0_test, // dynamic
  var_61_0_argument, // dynamic
  var_std__equal, // extern
  var_if, // extern
  var_plus, // extern
  var_map_reduce, // extern
  var_std__any_of, // initialized
  var_125_0_collection, // dynamic
  var_126_0_test, // dynamic
  var_127_0_argument, // dynamic
  var_true, // extern
  var_next, // extern
  var_false, // extern
  var_for_each, // extern
  var_std__all_of, // initialized
  var_178_0_collection, // dynamic
  var_179_0_test, // dynamic
  var_180_0_argument, // dynamic
  var_std__apply, // initialized
  var_202_0_function, // dynamic
  var_203_0_arguments, // dynamic
  var_is_empty, // extern
  var_range, // extern
  var_append, // extern
  var_length_of, // extern
  var_error, // extern
  var_case, // extern
  var__END
};


static TAB_NUM t_func_std__count[] = {
  1, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_59_0_collection,
  uni_NONE, var_60_0_test,
  uni_NONE, var_61_0_argument,
  // NONE == test:
  var_std__equal, 2, uni_NONE, var_60_0_test, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1, lambda_5, TAIL_CALL,
  POS(64, 5),
  POS(63, 3)
};

static TAB_NUM t_lambda_1[] = {
  0, // locals
  0, // parameters
  // map_reduce collection
  var_map_reduce, 4, var_59_0_collection, lambda_2, var_plus, num_0, TAIL_CALL,
  POS(65, 7)
};

static TAB_NUM t_lambda_2[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 66_3_item
  // if
  var_if, 3, LOCAL(1), lambda_3, lambda_4, TAIL_CALL,
  POS(67, 11)
};

static TAB_NUM t_lambda_3[] = {
  0, // locals
  0, // parameters
  //  1
  LET, 1, num_1, TAIL_CALL,
  POS(69, 15)
};

static TAB_NUM t_lambda_4[] = {
  0, // locals
  0, // parameters
  //  0
  LET, 1, num_0, TAIL_CALL,
  POS(70, 15)
};

static TAB_NUM t_lambda_5[] = {
  1, // locals
  0, // parameters
  // NONE == argument:
  var_std__equal, 2, uni_NONE, var_61_0_argument, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_6, lambda_10, TAIL_CALL,
  POS(75, 9),
  POS(74, 7)
};

static TAB_NUM t_lambda_6[] = {
  0, // locals
  0, // parameters
  // map_reduce collection
  var_map_reduce, 4, var_59_0_collection, lambda_7, var_plus, num_0, TAIL_CALL,
  POS(76, 11)
};

static TAB_NUM t_lambda_7[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 77_3_item
  // test(item)
  var_60_0_test, 1, LOCAL(2), 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_8, lambda_9, TAIL_CALL,
  POS(79, 17),
  POS(78, 15)
};

static TAB_NUM t_lambda_8[] = {
  0, // locals
  0, // parameters
  //  1
  LET, 1, num_1, TAIL_CALL,
  POS(80, 19)
};

static TAB_NUM t_lambda_9[] = {
  0, // locals
  0, // parameters
  //  0
  LET, 1, num_0, TAIL_CALL,
  POS(81, 19)
};

static TAB_NUM t_lambda_10[] = {
  0, // locals
  0, // parameters
  // map_reduce collection
  var_map_reduce, 4, var_59_0_collection, lambda_11, var_plus, num_0, TAIL_CALL,
  POS(85, 11)
};

static TAB_NUM t_lambda_11[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 86_3_item
  // test(item argument)
  var_60_0_test, 2, LOCAL(2), var_61_0_argument, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_12, lambda_13, TAIL_CALL,
  POS(88, 17),
  POS(87, 15)
};

static TAB_NUM t_lambda_12[] = {
  0, // locals
  0, // parameters
  //  1
  LET, 1, num_1, TAIL_CALL,
  POS(89, 19)
};

static TAB_NUM t_lambda_13[] = {
  0, // locals
  0, // parameters
  //  0
  LET, 1, num_0, TAIL_CALL,
  POS(90, 19)
};

static TAB_NUM t_func_std__any_of[] = {
  1, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_125_0_collection,
  MANDATORY_PARAMETER, var_126_0_test,
  uni_NONE, var_127_0_argument,
  // argument == NONE:
  var_std__equal, 2, var_127_0_argument, uni_NONE, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_14, lambda_18, TAIL_CALL,
  POS(130, 5),
  POS(129, 3)
};

static TAB_NUM t_lambda_14[] = {
  0, // locals
  0, // parameters
  // for_each collection
  var_for_each, 3, var_125_0_collection, lambda_15, lambda_17, TAIL_CALL,
  POS(131, 7)
};

static TAB_NUM t_lambda_15[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 132_3_item
  // test(item)
  var_126_0_test, 1, LOCAL(2), 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_16, var_next, TAIL_CALL,
  POS(134, 13),
  POS(133, 11)
};

static TAB_NUM t_lambda_16[] = {
  0, // locals
  0, // parameters
  //  true
  LET, 1, var_true, TAIL_CALL,
  POS(135, 15)
};

static TAB_NUM t_lambda_17[] = {
  0, // locals
  0, // parameters
  //  false
  LET, 1, var_false, TAIL_CALL,
  POS(137, 11)
};

static TAB_NUM t_lambda_18[] = {
  0, // locals
  0, // parameters
  // for_each collection
  var_for_each, 3, var_125_0_collection, lambda_19, lambda_21, TAIL_CALL,
  POS(139, 7)
};

static TAB_NUM t_lambda_19[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 140_3_item
  // test(item argument)
  var_126_0_test, 2, LOCAL(2), var_127_0_argument, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_20, var_next, TAIL_CALL,
  POS(142, 13),
  POS(141, 11)
};

static TAB_NUM t_lambda_20[] = {
  0, // locals
  0, // parameters
  //  true
  LET, 1, var_true, TAIL_CALL,
  POS(143, 15)
};

static TAB_NUM t_lambda_21[] = {
  0, // locals
  0, // parameters
  //  false
  LET, 1, var_false, TAIL_CALL,
  POS(145, 11)
};

static TAB_NUM t_func_std__all_of[] = {
  1, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_178_0_collection,
  MANDATORY_PARAMETER, var_179_0_test,
  uni_NONE, var_180_0_argument,
  // argument == NONE:
  var_std__equal, 2, var_180_0_argument, uni_NONE, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_22, lambda_26, TAIL_CALL,
  POS(183, 5),
  POS(182, 3)
};

static TAB_NUM t_lambda_22[] = {
  0, // locals
  0, // parameters
  // for_each collection
  var_for_each, 3, var_178_0_collection, lambda_23, lambda_25, TAIL_CALL,
  POS(184, 7)
};

static TAB_NUM t_lambda_23[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 185_3_item
  // test(item)
  var_179_0_test, 1, LOCAL(2), 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), var_next, lambda_24, TAIL_CALL,
  POS(187, 13),
  POS(186, 11)
};

static TAB_NUM t_lambda_24[] = {
  0, // locals
  0, // parameters
  //  false
  LET, 1, var_false, TAIL_CALL,
  POS(189, 15)
};

static TAB_NUM t_lambda_25[] = {
  0, // locals
  0, // parameters
  //  true
  LET, 1, var_true, TAIL_CALL,
  POS(190, 11)
};

static TAB_NUM t_lambda_26[] = {
  0, // locals
  0, // parameters
  // for_each collection
  var_for_each, 3, var_178_0_collection, lambda_27, lambda_29, TAIL_CALL,
  POS(192, 7)
};

static TAB_NUM t_lambda_27[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 193_3_item
  // test(item argument)
  var_179_0_test, 2, LOCAL(2), var_180_0_argument, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), var_next, lambda_28, TAIL_CALL,
  POS(195, 13),
  POS(194, 11)
};

static TAB_NUM t_lambda_28[] = {
  0, // locals
  0, // parameters
  //  false
  LET, 1, var_false, TAIL_CALL,
  POS(197, 15)
};

static TAB_NUM t_lambda_29[] = {
  0, // locals
  0, // parameters
  //  true
  LET, 1, var_true, TAIL_CALL,
  POS(198, 11)
};

static TAB_NUM t_func_std__apply[] = {
  1, // locals
  -2, // parameters
  MANDATORY_PARAMETER, var_202_0_function,
  REST_PARAMETER, var_203_0_arguments,
  // is_empty:
  var_is_empty, 1, var_203_0_arguments, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_arguments_is_empty, lambda_30, IO_TAIL_CALL,
  POS(206, 15),
  POS(205, 3)
};

static TAB_NUM t_lambda_arguments_is_empty[] = {
  0, // locals
  0, // parameters
  // function!
  var_202_0_function, 0, IO_TAIL_CALL,
  POS(207, 7)
};

static TAB_NUM t_lambda_30[] = {
  2, // locals
  0, // parameters
  // range(arguments 1 -2) arguments(-1))
  var_range, 3, var_203_0_arguments, num_1, minus_num_2, 1, LOCAL(1),
  // arguments(-1))
  var_203_0_arguments, 1, minus_num_1, 1, LOCAL(2),
  // !arguments append(range(arguments 1 -2) arguments(-1))
  var_append, 2, LOCAL(1), LOCAL(2), 1, var_203_0_arguments,
  // length_of(arguments)
  var_length_of, 1, var_203_0_arguments, 1, LOCAL(1),
  // case length_of(arguments)
  var_case, 18, LOCAL(1), num_1, lambda_31, num_2, lambda_32, num_3, lambda_33, num_4, lambda_34, num_5, lambda_35, num_6, lambda_36, num_7, lambda_37, num_8, lambda_38, lambda_39, IO_TAIL_CALL,
  POS(209, 25),
  POS(209, 47),
  POS(209, 7),
  POS(210, 12),
  POS(210, 7)
};

static TAB_NUM t_lambda_31[] = {
  1, // locals
  0, // parameters
  // arguments(1)
  var_203_0_arguments, 1, num_1, 1, LOCAL(1),
  // function! arguments(1)
  var_202_0_function, 1, LOCAL(1), IO_TAIL_CALL,
  POS(211, 22),
  POS(211, 12)
};

static TAB_NUM t_lambda_32[] = {
  2, // locals
  0, // parameters
  // arguments(1) arguments(2)
  var_203_0_arguments, 1, num_1, 1, LOCAL(1),
  // arguments(2)
  var_203_0_arguments, 1, num_2, 1, LOCAL(2),
  // function! arguments(1) arguments(2)
  var_202_0_function, 2, LOCAL(1), LOCAL(2), IO_TAIL_CALL,
  POS(212, 22),
  POS(212, 35),
  POS(212, 12)
};

static TAB_NUM t_lambda_33[] = {
  3, // locals
  0, // parameters
  // arguments(1) arguments(2) arguments(3)
  var_203_0_arguments, 1, num_1, 1, LOCAL(1),
  // arguments(2) arguments(3)
  var_203_0_arguments, 1, num_2, 1, LOCAL(2),
  // arguments(3)
  var_203_0_arguments, 1, num_3, 1, LOCAL(3),
  // function! arguments(1) arguments(2) arguments(3)
  var_202_0_function, 3, LOCAL(1), LOCAL(2), LOCAL(3), IO_TAIL_CALL,
  POS(213, 22),
  POS(213, 35),
  POS(213, 48),
  POS(213, 12)
};

static TAB_NUM t_lambda_34[] = {
  4, // locals
  0, // parameters
  // arguments(1) arguments(2) arguments(3) arguments(4)
  var_203_0_arguments, 1, num_1, 1, LOCAL(1),
  // arguments(2) arguments(3) arguments(4)
  var_203_0_arguments, 1, num_2, 1, LOCAL(2),
  // arguments(3) arguments(4)
  var_203_0_arguments, 1, num_3, 1, LOCAL(3),
  // arguments(4)
  var_203_0_arguments, 1, num_4, 1, LOCAL(4),
  // function! arguments(1) arguments(2) arguments(3) arguments(4)
  var_202_0_function, 4, LOCAL(1), LOCAL(2), LOCAL(3), LOCAL(4), IO_TAIL_CALL,
  POS(214, 22),
  POS(214, 35),
  POS(214, 48),
  POS(214, 61),
  POS(214, 12)
};

static TAB_NUM t_lambda_35[] = {
  5, // locals
  0, // parameters
  // arguments(1) arguments(2) arguments(3) arguments(4) arguments(5)
  var_203_0_arguments, 1, num_1, 1, LOCAL(1),
  // arguments(2) arguments(3) arguments(4) arguments(5)
  var_203_0_arguments, 1, num_2, 1, LOCAL(2),
  // arguments(3) arguments(4) arguments(5)
  var_203_0_arguments, 1, num_3, 1, LOCAL(3),
  // arguments(4) arguments(5)
  var_203_0_arguments, 1, num_4, 1, LOCAL(4),
  // arguments(5)
  var_203_0_arguments, 1, num_5, 1, LOCAL(5),
  // function!
  var_202_0_function, 5, LOCAL(1), LOCAL(2), LOCAL(3), LOCAL(4), LOCAL(5), IO_TAIL_CALL,
  POS(217, 13),
  POS(217, 26),
  POS(217, 39),
  POS(217, 52),
  POS(217, 65),
  POS(216, 11)
};

static TAB_NUM t_lambda_36[] = {
  6, // locals
  0, // parameters
  // arguments(1) arguments(2) arguments(3) arguments(4) arguments(5)
  var_203_0_arguments, 1, num_1, 1, LOCAL(1),
  // arguments(2) arguments(3) arguments(4) arguments(5)
  var_203_0_arguments, 1, num_2, 1, LOCAL(2),
  // arguments(3) arguments(4) arguments(5)
  var_203_0_arguments, 1, num_3, 1, LOCAL(3),
  // arguments(4) arguments(5)
  var_203_0_arguments, 1, num_4, 1, LOCAL(4),
  // arguments(5)
  var_203_0_arguments, 1, num_5, 1, LOCAL(5),
  // arguments(6)
  var_203_0_arguments, 1, num_6, 1, LOCAL(6),
  // function!
  var_202_0_function, 6, LOCAL(1), LOCAL(2), LOCAL(3), LOCAL(4), LOCAL(5), LOCAL(6), IO_TAIL_CALL,
  POS(220, 13),
  POS(220, 26),
  POS(220, 39),
  POS(220, 52),
  POS(220, 65),
  POS(221, 13),
  POS(219, 11)
};

static TAB_NUM t_lambda_37[] = {
  7, // locals
  0, // parameters
  // arguments(1) arguments(2) arguments(3) arguments(4) arguments(5)
  var_203_0_arguments, 1, num_1, 1, LOCAL(1),
  // arguments(2) arguments(3) arguments(4) arguments(5)
  var_203_0_arguments, 1, num_2, 1, LOCAL(2),
  // arguments(3) arguments(4) arguments(5)
  var_203_0_arguments, 1, num_3, 1, LOCAL(3),
  // arguments(4) arguments(5)
  var_203_0_arguments, 1, num_4, 1, LOCAL(4),
  // arguments(5)
  var_203_0_arguments, 1, num_5, 1, LOCAL(5),
  // arguments(6) arguments(7)
  var_203_0_arguments, 1, num_6, 1, LOCAL(6),
  // arguments(7)
  var_203_0_arguments, 1, num_7, 1, LOCAL(7),
  // function!
  var_202_0_function, 7, LOCAL(1), LOCAL(2), LOCAL(3), LOCAL(4), LOCAL(5), LOCAL(6), LOCAL(7), IO_TAIL_CALL,
  POS(224, 13),
  POS(224, 26),
  POS(224, 39),
  POS(224, 52),
  POS(224, 65),
  POS(225, 13),
  POS(225, 26),
  POS(223, 11)
};

static TAB_NUM t_lambda_38[] = {
  8, // locals
  0, // parameters
  // arguments(1) arguments(2) arguments(3) arguments(4) arguments(5)
  var_203_0_arguments, 1, num_1, 1, LOCAL(1),
  // arguments(2) arguments(3) arguments(4) arguments(5)
  var_203_0_arguments, 1, num_2, 1, LOCAL(2),
  // arguments(3) arguments(4) arguments(5)
  var_203_0_arguments, 1, num_3, 1, LOCAL(3),
  // arguments(4) arguments(5)
  var_203_0_arguments, 1, num_4, 1, LOCAL(4),
  // arguments(5)
  var_203_0_arguments, 1, num_5, 1, LOCAL(5),
  // arguments(6) arguments(7) arguments(8)
  var_203_0_arguments, 1, num_6, 1, LOCAL(6),
  // arguments(7) arguments(8)
  var_203_0_arguments, 1, num_7, 1, LOCAL(7),
  // arguments(8)
  var_203_0_arguments, 1, num_8, 1, LOCAL(8),
  // function!
  var_202_0_function, 8, LOCAL(1), LOCAL(2), LOCAL(3), LOCAL(4), LOCAL(5), LOCAL(6), LOCAL(7), LOCAL(8), IO_TAIL_CALL,
  POS(228, 13),
  POS(228, 26),
  POS(228, 39),
  POS(228, 52),
  POS(228, 65),
  POS(229, 13),
  POS(229, 26),
  POS(229, 39),
  POS(227, 11)
};

static TAB_NUM t_lambda_39[] = {
  0, // locals
  0, // parameters
  // error "TOO MANY ARGUMENTS FOR APPLY"
  var_error, 1, str_TOO_MANY_ARGUMEN, TAIL_CALL,
  POS(231, 11)
};

static FUNKY_CONSTANT constants_table[] = {
  {FLT_UNIQUE, 0, {.str_8 = "NONE"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__count}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_3}},
  {FLT_POSITIVE_INT64, 0, {.value = 1}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_4}},
  {FLT_POSITIVE_INT64, 0, {.value = 0}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_5}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_6}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_7}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_8}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_9}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_10}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_11}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_12}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_13}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__any_of}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_14}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_15}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_16}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_17}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_18}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_19}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_20}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_21}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__all_of}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_22}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_23}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_24}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_25}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_26}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_27}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_28}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_29}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__apply}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_arguments_is_empty}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_30}},
  {FLT_NEGATIVE_INT64, 0, {.value = 2}},
  {FLT_NEGATIVE_INT64, 0, {.value = 1}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_31}},
  {FLT_POSITIVE_INT64, 0, {.value = 2}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_32}},
  {FLT_POSITIVE_INT64, 0, {.value = 3}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_33}},
  {FLT_POSITIVE_INT64, 0, {.value = 4}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_34}},
  {FLT_POSITIVE_INT64, 0, {.value = 5}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_35}},
  {FLT_POSITIVE_INT64, 0, {.value = 6}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_36}},
  {FLT_POSITIVE_INT64, 0, {.value = 7}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_37}},
  {FLT_POSITIVE_INT64, 0, {.value = 8}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_38}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_39}},
  {FLT_STRING_8, 28, {.str_8 = "TOO MANY ARGUMENTS FOR APPLY"}}
};

static FUNKY_VARIABLE variables_table[] = {
  {
    FOT_UNKNOWN, 0, 0,
    "assign\000std", NULL,
    {.position = POS(25, 1)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "count\000std", NULL,
    {.const_idx = -func_std__count}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "59_0_collection\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "60_0_test\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "61_0_argument\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "equal\000std", NULL,
    {.position = POS(64, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if\000", NULL,
    {.position = POS(67, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000", NULL,
    {.position = POS(71, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "map_reduce\000", NULL,
    {.position = POS(65, 7)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "any_of\000std", NULL,
    {.const_idx = -func_std__any_of}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "125_0_collection\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "126_0_test\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "127_0_argument\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "true\000", NULL,
    {.position = POS(135, 16)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "next\000", NULL,
    {.position = POS(136, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "false\000", NULL,
    {.position = POS(137, 12)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "for_each\000", NULL,
    {.position = POS(131, 7)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "all_of\000std", NULL,
    {.const_idx = -func_std__all_of}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "178_0_collection\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "179_0_test\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "180_0_argument\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "apply\000std", NULL,
    {.const_idx = -func_std__apply}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "202_0_function\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "203_0_arguments\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_empty\000", NULL,
    {.position = POS(206, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "range\000", NULL,
    {.position = POS(209, 25)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "append\000", NULL,
    {.position = POS(209, 18)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "length_of\000", NULL,
    {.position = POS(210, 12)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "error\000", NULL,
    {.position = POS(231, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "case\000", NULL,
    {.position = POS(210, 7)}
  }
};

static FUNKY_NAMESPACE used_namespaces[] = {
  {"std", 1, 0}
};

FUNKY_MODULE module__basic__functional = {
  "_basic__functional", // module name
  "basic/functional.fky", // module filename
  .major_version = 0,
  .minor_version = 0,
  .feature_flags = FEAT_POSITIONS,
  .marker = 0,
  0, // number of required modules
  0, // number of defined namespaces
  1, // number of used namespaces
  57, // number of constants
  30, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  constants_table,
  variables_table,
};
