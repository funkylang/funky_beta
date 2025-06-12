#include <stddef.h>
#include <stdint.h>

#include "runtime/common.h"
#include "runtime/builtins.h"
#include "runtime/fko.h"
#include "runtime/memory.h"

enum {
  func_std__loop = -1,
  lambda_1 = -2,
  func_std__while = -3,
  lambda_loop = -4,
  func_std__while_not = -5,
  lambda_2_loop = -6,
  func_std__repeat = -7,
  func_iterate = -8,
  num_0 = -9,
  lambda_2 = -10,
  lambda_3 = -11,
  lambda_next = -12,
  num_1 = -13,
  lambda_4 = -14,
  func_std__from_to = -15,
  func_2_iterate = -16,
  lambda_5 = -17,
  lambda_6 = -18,
  lambda_2_next = -19,
  lambda_7 = -20,
  func_std__from_to_by = -21,
  lambda_8 = -22,
  lambda_9 = -23,
  lambda_10 = -24,
  lambda_11 = -25,
  lambda_12 = -26,
  lambda_13 = -27,
  lambda_14 = -28,
  lambda_15 = -29,
  lambda_3_next = -30,
  lambda_16 = -31
};

enum {
  var__START = FIRST_VAR-1,
  var_basic_types__break_function, // derived
  var_std_types__function, // extern
  var_std__assign, // extern
  var_basic_loops__saved_context_of, // attribute
  var_undefined, // extern
  var_basic_loops__body, // derived
  var_basic_loops__from, // derived
  var_basic_loops__to, // derived
  var_basic_loops__by, // derived
  var_basic_loops__finally, // derived
  var_std__next, // derived
  var_std__break, // derived
  var_std__loop, // initialized
  var_165_5_finally, // dynamic
  var_pass, // extern
  var_next, // extern
  var_break, // extern
  var_tuple, // extern
  var_new, // extern
  var_std__while, // initialized
  var_198_5_condition, // dynamic
  var_199_5_body, // dynamic
  var_200_5_finally, // dynamic
  var_if, // extern
  var_loop, // extern
  var_std__while_not, // initialized
  var_220_5_condition, // dynamic
  var_221_5_body, // dynamic
  var_222_5_finally, // dynamic
  var_if_not, // extern
  var_std__repeat, // initialized
  var_302_5_finally, // dynamic
  var_std__less, // extern
  var_std__minus, // extern
  var_std__from_to, // initialized
  var_417_5_finally, // dynamic
  var_std__not, // extern
  var_std__plus, // extern
  var_std__from_to_by, // initialized
  var_502_5_finally, // dynamic
  var_520_4_iterate, // dynamic
  var__END
};


static TAB_NUM t_func_std__loop[] = {
  2, // locals
  -2, // parameters
  MANDATORY_PARAMETER, LOCAL(1), // 164_5_body
  var_pass, var_165_5_finally,
  // $saved_context tuple(next break basic_loops::finally)
  var_tuple, 3, var_next, var_break, var_basic_loops__finally, 1, LOCAL(2),
  // !basic_loops::finally finally
  LET, 1, var_165_5_finally, 1, var_basic_loops__finally,
  // !next body
  LET, 1, LOCAL(1), 1, var_next,
  // new !break basic_types::break_function: (myself^)
  var_new, 2, var_basic_types__break_function, lambda_1, IO_CALL(1), var_break,
  // break.basic_loops::saved_context_of saved_context
  LET, -1, var_break, var_basic_loops__saved_context_of, LOCAL(2), var_break,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(167, 3),
  POS(169, 3),
  POS(171, 3),
  POS(173, 3),
  POS(178, 4),
  POS(180, 3),
  LOCAL(2),
  LOCAL(1)
};

static FUNCTION_INFO i_func_std__loop = {
  t_func_std__loop, NULL, 6, 2,
  {"167_4_saved_context\000", "164_5_body\000"}
};

static TAB_NUM t_lambda_1[] = {
  2, // locals
  -1, // parameters
  MYSELF_PARAMETER, LOCAL(2), // 173_44_myself
  // !finally basic_loops::finally
  LET, 1, var_basic_loops__finally, 1, var_165_5_finally,
  // basic_loops::saved_context_of(myself) !next !break !basic_loops::finally
  var_basic_loops__saved_context_of, 1, LOCAL(2), 1, LOCAL(1),
  // basic_loops::saved_context_of(myself) !next !break !basic_loops::finally
  LOCAL(1), 0, 3, var_next, var_break, var_basic_loops__finally,
  // finally!
  var_165_5_finally, 0, IO_TAIL_CALL,
  POS(174, 5),
  POS(175, 5),
  POS(175, 5),
  POS(176, 5),
  LOCAL(2)
};

static FUNCTION_INFO i_lambda_1 = {
  t_lambda_1, NULL, 4, 1,
  {"173_44_myself\000"}
};

static TAB_NUM t_func_std__while[] = {
  0, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_198_5_condition,
  MANDATORY_PARAMETER, var_199_5_body,
  var_pass, var_200_5_finally,
  // loop: if condition() body finally
  var_loop, 1, lambda_loop, TAIL_CALL,
  POS(202, 3)
};

static FUNCTION_INFO i_func_std__while = {
  t_func_std__while, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_loop[] = {
  1, // locals
  0, // parameters
  // condition() body finally
  var_198_5_condition, 0, 1, LOCAL(1),
  // if condition() body finally
  var_if, 3, LOCAL(1), var_199_5_body, var_200_5_finally, TAIL_CALL,
  POS(202, 12),
  POS(202, 9)
};

static FUNCTION_INFO i_lambda_loop = {
  t_lambda_loop, NULL, 2, 0,
  {}
};

static TAB_NUM t_func_std__while_not[] = {
  0, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_220_5_condition,
  MANDATORY_PARAMETER, var_221_5_body,
  var_pass, var_222_5_finally,
  // loop: if_not condition() body finally
  var_loop, 1, lambda_2_loop, TAIL_CALL,
  POS(224, 3)
};

static FUNCTION_INFO i_func_std__while_not = {
  t_func_std__while_not, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_2_loop[] = {
  1, // locals
  0, // parameters
  // condition() body finally
  var_220_5_condition, 0, 1, LOCAL(1),
  // if_not condition() body finally
  var_if_not, 3, LOCAL(1), var_221_5_body, var_222_5_finally, TAIL_CALL,
  POS(224, 16),
  POS(224, 9)
};

static FUNCTION_INFO i_lambda_2_loop = {
  t_lambda_2_loop, NULL, 2, 0,
  {}
};

static TAB_NUM t_func_std__repeat[] = {
  3, // locals
  -3, // parameters
  MANDATORY_PARAMETER, LOCAL(1), // 300_5_n
  MANDATORY_PARAMETER, LOCAL(2), // 301_5_body
  var_pass, var_302_5_finally,
  // $saved_context
  var_tuple, 5, var_next, var_break, var_basic_loops__from, var_basic_loops__body, var_basic_loops__finally, 1, LOCAL(3),
  // !basic_loops::from n
  LET, 1, LOCAL(1), 1, var_basic_loops__from,
  // !basic_loops::body body
  LET, 1, LOCAL(2), 1, var_basic_loops__body,
  // !basic_loops::finally finally
  LET, 1, var_302_5_finally, 1, var_basic_loops__finally,
  // !next:
  LET, 1, lambda_next, 1, var_next,
  // new !break basic_types::break_function: (myself^)
  var_new, 2, var_basic_types__break_function, lambda_4, IO_CALL(1), var_break,
  // break.basic_loops::saved_context_of saved_context
  LET, -1, var_break, var_basic_loops__saved_context_of, LOCAL(3), var_break,
  // iterate!
  func_iterate, 0, IO_TAIL_CALL,
  POS(304, 3),
  POS(312, 3),
  POS(313, 3),
  POS(314, 3),
  POS(323, 3),
  POS(327, 3),
  POS(334, 4),
  POS(336, 3),
  LOCAL(2),
  LOCAL(1),
  LOCAL(3)
};

static FUNCTION_INFO i_func_std__repeat = {
  t_func_std__repeat, NULL, 8, 3,
  {"301_5_body\000", "300_5_n\000", "304_4_saved_context\000"}
};

static TAB_NUM t_func_iterate[] = {
  1, // locals
  0, // parameters
  // 0:
  var_std__less, 2, num_0, var_basic_loops__from, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_2, lambda_3, IO_TAIL_CALL,
  POS(318, 27),
  POS(317, 5)
};

static FUNCTION_INFO i_func_iterate = {
  t_func_iterate, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_2[] = {
  0, // locals
  0, // parameters
  // basic_loops::body!
  var_basic_loops__body, 0, IO_TAIL_CALL,
  POS(319, 9)
};

static FUNCTION_INFO i_lambda_2 = {
  t_lambda_2, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_3[] = {
  0, // locals
  0, // parameters
  // break!
  var_break, 0, IO_TAIL_CALL,
  POS(321, 9)
};

static FUNCTION_INFO i_lambda_3 = {
  t_lambda_3, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_next[] = {
  0, // locals
  0, // parameters
  // !basic_loops::from basic_loops::from-1
  var_std__minus, 2, var_basic_loops__from, num_1, 1, var_basic_loops__from,
  // iterate!
  func_iterate, 0, IO_TAIL_CALL,
  POS(324, 5),
  POS(325, 5)
};

static FUNCTION_INFO i_lambda_next = {
  t_lambda_next, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_4[] = {
  2, // locals
  -1, // parameters
  MYSELF_PARAMETER, LOCAL(2), // 327_44_myself
  // !finally basic_loops::finally
  LET, 1, var_basic_loops__finally, 1, var_302_5_finally,
  // basic_loops::saved_context_of(myself)
  var_basic_loops__saved_context_of, 1, LOCAL(2), 1, LOCAL(1),
  // basic_loops::saved_context_of(myself)
  LOCAL(1), 0, 5, var_next, var_break, var_basic_loops__from, var_basic_loops__body, var_basic_loops__finally,
  // finally!
  var_302_5_finally, 0, IO_TAIL_CALL,
  POS(328, 5),
  POS(329, 5),
  POS(329, 5),
  POS(332, 5),
  LOCAL(2)
};

static FUNCTION_INFO i_lambda_4 = {
  t_lambda_4, NULL, 4, 1,
  {"327_44_myself\000"}
};

static TAB_NUM t_func_std__from_to[] = {
  4, // locals
  -4, // parameters
  MANDATORY_PARAMETER, LOCAL(1), // 414_5_from
  MANDATORY_PARAMETER, LOCAL(2), // 415_5_to
  MANDATORY_PARAMETER, LOCAL(3), // 416_5_body
  var_pass, var_417_5_finally,
  // $saved_context
  var_tuple, 6, var_next, var_break, var_basic_loops__from, var_basic_loops__to, var_basic_loops__body, var_basic_loops__finally, 1, LOCAL(4),
  // !basic_loops::from from
  LET, 1, LOCAL(1), 1, var_basic_loops__from,
  // !basic_loops::to to
  LET, 1, LOCAL(2), 1, var_basic_loops__to,
  // !basic_loops::body body
  LET, 1, LOCAL(3), 1, var_basic_loops__body,
  // !basic_loops::finally finally
  LET, 1, var_417_5_finally, 1, var_basic_loops__finally,
  // !next:
  LET, 1, lambda_2_next, 1, var_next,
  // new !break basic_types::break_function: (myself^)
  var_new, 2, var_basic_types__break_function, lambda_7, IO_CALL(1), var_break,
  // break.basic_loops::saved_context_of saved_context
  LET, -1, var_break, var_basic_loops__saved_context_of, LOCAL(4), var_break,
  // iterate!
  func_2_iterate, 0, IO_TAIL_CALL,
  POS(419, 3),
  POS(428, 3),
  POS(429, 3),
  POS(430, 3),
  POS(431, 3),
  POS(440, 3),
  POS(444, 3),
  POS(451, 4),
  POS(453, 3),
  LOCAL(4),
  LOCAL(3),
  LOCAL(1),
  LOCAL(2)
};

static FUNCTION_INFO i_func_std__from_to = {
  t_func_std__from_to, NULL, 9, 4,
  {"419_4_saved_context\000", "416_5_body\000", "414_5_from\000", "415_5_to\000"}
};

static TAB_NUM t_func_2_iterate[] = {
  2, // locals
  0, // parameters
  // basic_loops::to:
  var_std__less, 2, var_basic_loops__to, var_basic_loops__from, 1, LOCAL(1),
  // basic_loops::to:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_5, lambda_6, IO_TAIL_CALL,
  POS(435, 28),
  POS(435, 28),
  POS(434, 5)
};

static FUNCTION_INFO i_func_2_iterate = {
  t_func_2_iterate, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_5[] = {
  0, // locals
  0, // parameters
  // basic_loops::body! basic_loops::from
  var_basic_loops__body, 1, var_basic_loops__from, IO_TAIL_CALL,
  POS(436, 9)
};

static FUNCTION_INFO i_lambda_5 = {
  t_lambda_5, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_6[] = {
  0, // locals
  0, // parameters
  // break!
  var_break, 0, IO_TAIL_CALL,
  POS(438, 9)
};

static FUNCTION_INFO i_lambda_6 = {
  t_lambda_6, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_2_next[] = {
  0, // locals
  0, // parameters
  // !basic_loops::from basic_loops::from+1
  var_std__plus, 2, var_basic_loops__from, num_1, 1, var_basic_loops__from,
  // iterate!
  func_2_iterate, 0, IO_TAIL_CALL,
  POS(441, 5),
  POS(442, 5)
};

static FUNCTION_INFO i_lambda_2_next = {
  t_lambda_2_next, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_7[] = {
  2, // locals
  -1, // parameters
  MYSELF_PARAMETER, LOCAL(2), // 444_44_myself
  // !finally basic_loops::finally
  LET, 1, var_basic_loops__finally, 1, var_417_5_finally,
  // basic_loops::saved_context_of(myself)
  var_basic_loops__saved_context_of, 1, LOCAL(2), 1, LOCAL(1),
  // basic_loops::saved_context_of(myself)
  LOCAL(1), 0, 6, var_next, var_break, var_basic_loops__from, var_basic_loops__to, var_basic_loops__body, var_basic_loops__finally,
  // finally!
  var_417_5_finally, 0, IO_TAIL_CALL,
  POS(445, 5),
  POS(446, 5),
  POS(446, 5),
  POS(449, 5),
  LOCAL(2)
};

static FUNCTION_INFO i_lambda_7 = {
  t_lambda_7, NULL, 4, 1,
  {"444_44_myself\000"}
};

static TAB_NUM t_func_std__from_to_by[] = {
  6, // locals
  -5, // parameters
  MANDATORY_PARAMETER, LOCAL(2), // 498_5_from
  MANDATORY_PARAMETER, LOCAL(3), // 499_5_to
  MANDATORY_PARAMETER, LOCAL(4), // 500_5_by
  MANDATORY_PARAMETER, LOCAL(5), // 501_5_body
  var_pass, var_502_5_finally,
  // $saved_context
  var_tuple, 7, var_next, var_break, var_basic_loops__from, var_basic_loops__to, var_basic_loops__by, var_basic_loops__body, var_basic_loops__finally, 1, LOCAL(6),
  // !basic_loops::from from
  LET, 1, LOCAL(2), 1, var_basic_loops__from,
  // !basic_loops::to to
  LET, 1, LOCAL(3), 1, var_basic_loops__to,
  // !basic_loops::by by
  LET, 1, LOCAL(4), 1, var_basic_loops__by,
  // !basic_loops::body body
  LET, 1, LOCAL(5), 1, var_basic_loops__body,
  // !basic_loops::finally finally
  LET, 1, var_502_5_finally, 1, var_basic_loops__finally,
  // by < 0
  var_std__less, 2, LOCAL(4), num_0, 1, LOCAL(1),
  // $iterate
  var_if, 3, LOCAL(1), lambda_8, lambda_12, 1, var_520_4_iterate,
  // !next:
  LET, 1, lambda_3_next, 1, var_next,
  // new !break basic_types::break_function: (myself^)
  var_new, 2, var_basic_types__break_function, lambda_16, IO_CALL(1), var_break,
  // break.basic_loops::saved_context_of saved_context
  LET, -1, var_break, var_basic_loops__saved_context_of, LOCAL(6), var_break,
  // iterate!
  var_520_4_iterate, 0, IO_TAIL_CALL,
  POS(504, 3),
  POS(514, 3),
  POS(515, 3),
  POS(516, 3),
  POS(517, 3),
  POS(518, 3),
  POS(522, 7),
  POS(520, 3),
  POS(536, 3),
  POS(540, 3),
  POS(548, 4),
  POS(550, 3),
  LOCAL(3),
  LOCAL(5),
  LOCAL(4),
  LOCAL(6),
  LOCAL(2)
};

static FUNCTION_INFO i_func_std__from_to_by = {
  t_func_std__from_to_by, NULL, 12, 5,
  {"499_5_to\000", "501_5_body\000", "500_5_by\000", "504_4_saved_context\000", "498_5_from\000"}
};

static TAB_NUM t_lambda_8[] = {
  0, // locals
  0, // parameters
  //  :
  LET, 1, lambda_9, IO_TAIL_CALL,
  POS(523, 9)
};

static FUNCTION_INFO i_lambda_8 = {
  t_lambda_8, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_9[] = {
  2, // locals
  0, // parameters
  // basic_loops::from >= basic_loops::to:
  var_std__less, 2, var_basic_loops__from, var_basic_loops__to, 1, LOCAL(1),
  // basic_loops::from >= basic_loops::to:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_10, lambda_11, IO_TAIL_CALL,
  POS(525, 11),
  POS(525, 11),
  POS(524, 9)
};

static FUNCTION_INFO i_lambda_9 = {
  t_lambda_9, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_10[] = {
  0, // locals
  0, // parameters
  // basic_loops::body! basic_loops::from
  var_basic_loops__body, 1, var_basic_loops__from, IO_TAIL_CALL,
  POS(526, 13)
};

static FUNCTION_INFO i_lambda_10 = {
  t_lambda_10, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_11[] = {
  0, // locals
  0, // parameters
  // break!
  var_break, 0, IO_TAIL_CALL,
  POS(528, 13)
};

static FUNCTION_INFO i_lambda_11 = {
  t_lambda_11, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_12[] = {
  0, // locals
  0, // parameters
  //  :
  LET, 1, lambda_13, IO_TAIL_CALL,
  POS(529, 9)
};

static FUNCTION_INFO i_lambda_12 = {
  t_lambda_12, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_13[] = {
  2, // locals
  0, // parameters
  // basic_loops::to:
  var_std__less, 2, var_basic_loops__to, var_basic_loops__from, 1, LOCAL(1),
  // basic_loops::to:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_14, lambda_15, IO_TAIL_CALL,
  POS(531, 32),
  POS(531, 32),
  POS(530, 9)
};

static FUNCTION_INFO i_lambda_13 = {
  t_lambda_13, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_14[] = {
  0, // locals
  0, // parameters
  // basic_loops::body! basic_loops::from
  var_basic_loops__body, 1, var_basic_loops__from, IO_TAIL_CALL,
  POS(532, 13)
};

static FUNCTION_INFO i_lambda_14 = {
  t_lambda_14, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_15[] = {
  0, // locals
  0, // parameters
  // break!
  var_break, 0, IO_TAIL_CALL,
  POS(534, 13)
};

static FUNCTION_INFO i_lambda_15 = {
  t_lambda_15, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_3_next[] = {
  0, // locals
  0, // parameters
  // !basic_loops::from basic_loops::from+basic_loops::by
  var_std__plus, 2, var_basic_loops__from, var_basic_loops__by, 1, var_basic_loops__from,
  // iterate!
  var_520_4_iterate, 0, IO_TAIL_CALL,
  POS(537, 5),
  POS(538, 5)
};

static FUNCTION_INFO i_lambda_3_next = {
  t_lambda_3_next, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_16[] = {
  2, // locals
  -1, // parameters
  MYSELF_PARAMETER, LOCAL(2), // 540_44_myself
  // !finally basic_loops::finally
  LET, 1, var_basic_loops__finally, 1, var_502_5_finally,
  // basic_loops::saved_context_of(myself)
  var_basic_loops__saved_context_of, 1, LOCAL(2), 1, LOCAL(1),
  // basic_loops::saved_context_of(myself)
  LOCAL(1), 0, 7, var_next, var_break, var_basic_loops__from, var_basic_loops__to, var_basic_loops__by, var_basic_loops__body, var_basic_loops__finally,
  // finally!
  var_502_5_finally, 0, IO_TAIL_CALL,
  POS(541, 5),
  POS(542, 5),
  POS(542, 5),
  POS(546, 5),
  LOCAL(2)
};

static FUNCTION_INFO i_lambda_16 = {
  t_lambda_16, NULL, 4, 1,
  {"540_44_myself\000"}
};

static FUNKY_CONSTANT constants_table[] = {
  {FLT_FUNCTION, 0, {.func_info = &i_func_std__loop}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_1}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std__while}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_loop}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std__while_not}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_2_loop}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std__repeat}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_iterate}},
  {FLT_POSITIVE_INT64, 0, {.value = 0}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_2}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_3}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_next}},
  {FLT_POSITIVE_INT64, 0, {.value = 1}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_4}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std__from_to}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_2_iterate}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_5}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_6}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_2_next}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_7}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std__from_to_by}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_8}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_9}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_10}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_11}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_12}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_13}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_14}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_15}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_3_next}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_16}}
};

static ATTRIBUTE_DEFINITION basic_types__break_function__attributes[] = {
  {-var_basic_loops__saved_context_of, -var_undefined}
};

static FUNKY_VARIABLE variables_table[] = {
  {
    FOT_DERIVED, 0, 1,
    "break_function\000basic_types", basic_types__break_function__attributes,
    {"function\000std_types"}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "function\000std_types", NULL,
    {.position = POS(25, 30)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "assign\000std", NULL,
    {.position = POS(25, 1)}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "saved_context_of\000basic_loops", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "undefined\000", NULL,
    {.position = POS(26, 60)}
  },
  {
    FOT_DERIVED, 0, 0,
    "body\000basic_loops", NULL,
    {"undefined\000"}
  },
  {
    FOT_DERIVED, 0, 0,
    "from\000basic_loops", NULL,
    {"undefined\000"}
  },
  {
    FOT_DERIVED, 0, 0,
    "to\000basic_loops", NULL,
    {"undefined\000"}
  },
  {
    FOT_DERIVED, 0, 0,
    "by\000basic_loops", NULL,
    {"undefined\000"}
  },
  {
    FOT_DERIVED, 0, 0,
    "finally\000basic_loops", NULL,
    {"undefined\000"}
  },
  {
    FOT_DERIVED, 0, 0,
    "next\000std", NULL,
    {"undefined\000"}
  },
  {
    FOT_DERIVED, 0, 0,
    "break\000std", NULL,
    {"undefined\000"}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "loop\000std", NULL,
    {.const_idx = -func_std__loop}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "165_5_finally\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "pass\000", NULL,
    {.position = POS(165, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "next\000", NULL,
    {.position = POS(167, 24)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "break\000", NULL,
    {.position = POS(167, 29)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "tuple\000", NULL,
    {.position = POS(167, 18)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "new\000", NULL,
    {.position = POS(173, 3)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "while\000std", NULL,
    {.const_idx = -func_std__while}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "198_5_condition\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "199_5_body\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "200_5_finally\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if\000", NULL,
    {.position = POS(202, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "loop\000", NULL,
    {.position = POS(202, 3)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "while_not\000std", NULL,
    {.const_idx = -func_std__while_not}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "220_5_condition\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "221_5_body\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "222_5_finally\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if_not\000", NULL,
    {.position = POS(224, 9)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "repeat\000std", NULL,
    {.const_idx = -func_std__repeat}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "302_5_finally\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "less\000std", NULL,
    {.position = POS(318, 27)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "minus\000std", NULL,
    {.position = POS(324, 24)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "from_to\000std", NULL,
    {.const_idx = -func_std__from_to}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "417_5_finally\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not\000std", NULL,
    {.position = POS(435, 28)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000std", NULL,
    {.position = POS(441, 24)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "from_to_by\000std", NULL,
    {.const_idx = -func_std__from_to_by}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "502_5_finally\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "520_4_iterate\000", NULL
  }
};

static FUNKY_NAMESPACE defined_namespaces[] = {
  {"basic_loops", 1, 0}
};

static FUNKY_NAMESPACE used_namespaces[] = {
  {"std", 1, 0}
};

FUNKY_MODULE module__basic__loops = {
  "_basic__loops", // module name
  "basic/loops.fky", // module filename
  .major_version = 0,
  .minor_version = 0,
  .feature_flags = FEAT_POSITIONS|FEAT_FUNCTION_INFO,
  .marker = 0,
  0, // number of required modules
  1, // number of defined namespaces
  1, // number of used namespaces
  31, // number of constants
  41, // number of variables
  NULL, // required modules
  defined_namespaces,
  used_namespaces,
  constants_table,
  variables_table,
};
