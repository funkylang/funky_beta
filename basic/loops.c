#include <stddef.h>
#include <stdint.h>

#include "runtime/common.h"
#include "runtime/builtins.h"
#include "runtime/fko.h"
#include "runtime/memory.h"

enum {
  func_std__loop = -1,
  lambda_break = -2,
  func_std__while = -3,
  lambda_loop = -4,
  func_std__while_not = -5,
  lambda_2_loop = -6,
  func_std__repeat = -7,
  func_iterate = -8,
  num_0 = -9,
  lambda_1 = -10,
  lambda_2 = -11,
  lambda_next = -12,
  num_1 = -13,
  lambda_2_break = -14,
  func_std__from_to = -15,
  func_2_iterate = -16,
  lambda_3 = -17,
  lambda_4 = -18,
  lambda_2_next = -19,
  lambda_3_break = -20,
  func_std__from_to_by = -21,
  lambda_5 = -22,
  lambda_6 = -23,
  lambda_7 = -24,
  lambda_8 = -25,
  lambda_9 = -26,
  lambda_10 = -27,
  lambda_11 = -28,
  lambda_12 = -29,
  lambda_3_next = -30,
  lambda_4_break = -31
};

enum {
  var__START = FIRST_VAR-1,
  var_basic_loops__saved_context_of, // attribute
  var_std__assign, // extern
  var_basic_loops__body, // derived
  var_undefined, // extern
  var_basic_loops__from, // derived
  var_basic_loops__to, // derived
  var_basic_loops__by, // derived
  var_basic_loops__finally, // derived
  var_std__next, // derived
  var_pass, // extern
  var_std__break, // derived
  var_std__loop, // initialized
  var_147_0_finally, // dynamic
  var_next, // extern
  var_break, // extern
  var_tuple, // extern
  var_std__while, // initialized
  var_166_0_condition, // dynamic
  var_167_0_body, // dynamic
  var_168_0_finally, // dynamic
  var_if, // extern
  var_loop, // extern
  var_std__while_not, // initialized
  var_174_0_condition, // dynamic
  var_175_0_body, // dynamic
  var_176_0_finally, // dynamic
  var_if_not, // extern
  var_std__repeat, // initialized
  var_212_0_finally, // dynamic
  var_std__less, // extern
  var_std__minus, // extern
  var_std__from_to, // initialized
  var_326_0_finally, // dynamic
  var_std__not, // extern
  var_std__plus, // extern
  var_std__from_to_by, // initialized
  var_376_0_finally, // dynamic
  var_394_1_iterate, // dynamic
  var__END
};


static TAB_NUM t_func_std__loop[] = {
  2, // locals
  -2, // parameters
  MANDATORY_PARAMETER, LOCAL(1), // 146_0_body
  var_pass, var_147_0_finally,
  // $saved_context tuple(next break basic_loops::finally)
  var_tuple, 3, var_next, var_break, var_basic_loops__finally, 1, LOCAL(2),
  // !basic_loops::finally finally
  LET, 1, var_147_0_finally, 1, var_basic_loops__finally,
  // !next body
  LET, 1, LOCAL(1), 1, var_next,
  // !break: (myself^)
  LET, 1, lambda_break, 1, var_break,
  // break.basic_loops::saved_context_of saved_context
  LET, -1, var_break, var_basic_loops__saved_context_of, LOCAL(2), var_break,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(149, 3),
  POS(151, 3),
  POS(153, 3),
  POS(155, 3),
  POS(160, 4),
  POS(162, 3)
};

static TAB_NUM t_lambda_break[] = {
  2, // locals
  -1, // parameters
  MYSELF_PARAMETER, LOCAL(2), // 155_9_myself
  // !finally basic_loops::finally
  LET, 1, var_basic_loops__finally, 1, var_147_0_finally,
  // basic_loops::saved_context_of(myself) !next !break !basic_loops::finally
  var_basic_loops__saved_context_of, 1, LOCAL(2), 1, LOCAL(1),
  // basic_loops::saved_context_of(myself) !next !break !basic_loops::finally
  LOCAL(1), 0, 3, var_next, var_break, var_basic_loops__finally,
  // finally!
  var_147_0_finally, 0, IO_TAIL_CALL,
  POS(156, 5),
  POS(157, 5),
  POS(157, 5),
  POS(158, 5)
};

static TAB_NUM t_func_std__while[] = {
  0, // locals
  3, // parameters
  var_166_0_condition,
  var_167_0_body,
  var_168_0_finally,
  // loop: if condition() body finally
  var_loop, 1, lambda_loop, TAIL_CALL,
  POS(170, 3)
};

static TAB_NUM t_lambda_loop[] = {
  1, // locals
  0, // parameters
  // condition() body finally
  var_166_0_condition, 0, 1, LOCAL(1),
  // if condition() body finally
  var_if, 3, LOCAL(1), var_167_0_body, var_168_0_finally, TAIL_CALL,
  POS(170, 12),
  POS(170, 9)
};

static TAB_NUM t_func_std__while_not[] = {
  0, // locals
  3, // parameters
  var_174_0_condition,
  var_175_0_body,
  var_176_0_finally,
  // loop: if_not condition() body finally
  var_loop, 1, lambda_2_loop, TAIL_CALL,
  POS(178, 3)
};

static TAB_NUM t_lambda_2_loop[] = {
  1, // locals
  0, // parameters
  // condition() body finally
  var_174_0_condition, 0, 1, LOCAL(1),
  // if_not condition() body finally
  var_if_not, 3, LOCAL(1), var_175_0_body, var_176_0_finally, TAIL_CALL,
  POS(178, 16),
  POS(178, 9)
};

static TAB_NUM t_func_std__repeat[] = {
  3, // locals
  -3, // parameters
  MANDATORY_PARAMETER, LOCAL(1), // 210_0_n
  MANDATORY_PARAMETER, LOCAL(2), // 211_0_body
  var_next, var_212_0_finally,
  // $saved_context
  var_tuple, 5, var_next, var_break, var_basic_loops__from, var_basic_loops__body, var_basic_loops__finally, 1, LOCAL(3),
  // !basic_loops::from n
  LET, 1, LOCAL(1), 1, var_basic_loops__from,
  // !basic_loops::body body
  LET, 1, LOCAL(2), 1, var_basic_loops__body,
  // !basic_loops::finally finally
  LET, 1, var_212_0_finally, 1, var_basic_loops__finally,
  // !next:
  LET, 1, lambda_next, 1, var_next,
  // !break: (myself^)
  LET, 1, lambda_2_break, 1, var_break,
  // break.basic_loops::saved_context_of saved_context
  LET, -1, var_break, var_basic_loops__saved_context_of, LOCAL(3), var_break,
  // iterate!
  func_iterate, 0, IO_TAIL_CALL,
  POS(214, 3),
  POS(222, 3),
  POS(223, 3),
  POS(224, 3),
  POS(233, 3),
  POS(237, 3),
  POS(244, 4),
  POS(246, 3)
};

static TAB_NUM t_func_iterate[] = {
  1, // locals
  0, // parameters
  // 0:
  var_std__less, 2, num_0, var_basic_loops__from, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1, lambda_2, IO_TAIL_CALL,
  POS(228, 27),
  POS(227, 5)
};

static TAB_NUM t_lambda_1[] = {
  0, // locals
  0, // parameters
  // basic_loops::body!
  var_basic_loops__body, 0, IO_TAIL_CALL,
  POS(229, 9)
};

static TAB_NUM t_lambda_2[] = {
  0, // locals
  0, // parameters
  // break!
  var_break, 0, IO_TAIL_CALL,
  POS(231, 9)
};

static TAB_NUM t_lambda_next[] = {
  0, // locals
  0, // parameters
  // !basic_loops::from basic_loops::from-1
  var_std__minus, 2, var_basic_loops__from, num_1, 1, var_basic_loops__from,
  // iterate!
  func_iterate, 0, IO_TAIL_CALL,
  POS(234, 5),
  POS(235, 5)
};

static TAB_NUM t_lambda_2_break[] = {
  2, // locals
  -1, // parameters
  MYSELF_PARAMETER, LOCAL(2), // 237_9_myself
  // !finally basic_loops::finally
  LET, 1, var_basic_loops__finally, 1, var_212_0_finally,
  // basic_loops::saved_context_of(myself)
  var_basic_loops__saved_context_of, 1, LOCAL(2), 1, LOCAL(1),
  // basic_loops::saved_context_of(myself)
  LOCAL(1), 0, 5, var_next, var_break, var_basic_loops__from, var_basic_loops__body, var_basic_loops__finally,
  // finally!
  var_212_0_finally, 0, IO_TAIL_CALL,
  POS(238, 5),
  POS(239, 5),
  POS(239, 5),
  POS(242, 5)
};

static TAB_NUM t_func_std__from_to[] = {
  4, // locals
  -4, // parameters
  MANDATORY_PARAMETER, LOCAL(1), // 323_0_from
  MANDATORY_PARAMETER, LOCAL(2), // 324_0_to
  MANDATORY_PARAMETER, LOCAL(3), // 325_0_body
  var_next, var_326_0_finally,
  // $saved_context
  var_tuple, 6, var_next, var_break, var_basic_loops__from, var_basic_loops__to, var_basic_loops__body, var_basic_loops__finally, 1, LOCAL(4),
  // !basic_loops::from from
  LET, 1, LOCAL(1), 1, var_basic_loops__from,
  // !basic_loops::to to
  LET, 1, LOCAL(2), 1, var_basic_loops__to,
  // !basic_loops::body body
  LET, 1, LOCAL(3), 1, var_basic_loops__body,
  // !basic_loops::finally finally
  LET, 1, var_326_0_finally, 1, var_basic_loops__finally,
  // !next:
  LET, 1, lambda_2_next, 1, var_next,
  // !break: (myself^)
  LET, 1, lambda_3_break, 1, var_break,
  // break.basic_loops::saved_context_of saved_context
  LET, -1, var_break, var_basic_loops__saved_context_of, LOCAL(4), var_break,
  // iterate!
  func_2_iterate, 0, IO_TAIL_CALL,
  POS(328, 3),
  POS(337, 3),
  POS(338, 3),
  POS(339, 3),
  POS(340, 3),
  POS(349, 3),
  POS(353, 3),
  POS(360, 4),
  POS(362, 3)
};

static TAB_NUM t_func_2_iterate[] = {
  2, // locals
  0, // parameters
  // basic_loops::to:
  var_std__less, 2, var_basic_loops__to, var_basic_loops__from, 1, LOCAL(1),
  // basic_loops::to:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_3, lambda_4, IO_TAIL_CALL,
  POS(344, 28),
  POS(344, 28),
  POS(343, 5)
};

static TAB_NUM t_lambda_3[] = {
  0, // locals
  0, // parameters
  // basic_loops::body! basic_loops::from
  var_basic_loops__body, 1, var_basic_loops__from, IO_TAIL_CALL,
  POS(345, 9)
};

static TAB_NUM t_lambda_4[] = {
  0, // locals
  0, // parameters
  // break!
  var_break, 0, IO_TAIL_CALL,
  POS(347, 9)
};

static TAB_NUM t_lambda_2_next[] = {
  0, // locals
  0, // parameters
  // !basic_loops::from basic_loops::from+1
  var_std__plus, 2, var_basic_loops__from, num_1, 1, var_basic_loops__from,
  // iterate!
  func_2_iterate, 0, IO_TAIL_CALL,
  POS(350, 5),
  POS(351, 5)
};

static TAB_NUM t_lambda_3_break[] = {
  2, // locals
  -1, // parameters
  MYSELF_PARAMETER, LOCAL(2), // 353_9_myself
  // !finally basic_loops::finally
  LET, 1, var_basic_loops__finally, 1, var_326_0_finally,
  // basic_loops::saved_context_of(myself)
  var_basic_loops__saved_context_of, 1, LOCAL(2), 1, LOCAL(1),
  // basic_loops::saved_context_of(myself)
  LOCAL(1), 0, 6, var_next, var_break, var_basic_loops__from, var_basic_loops__to, var_basic_loops__body, var_basic_loops__finally,
  // finally!
  var_326_0_finally, 0, IO_TAIL_CALL,
  POS(354, 5),
  POS(355, 5),
  POS(355, 5),
  POS(358, 5)
};

static TAB_NUM t_func_std__from_to_by[] = {
  6, // locals
  -5, // parameters
  MANDATORY_PARAMETER, LOCAL(2), // 372_0_from
  MANDATORY_PARAMETER, LOCAL(3), // 373_0_to
  MANDATORY_PARAMETER, LOCAL(4), // 374_0_by
  MANDATORY_PARAMETER, LOCAL(5), // 375_0_body
  var_next, var_376_0_finally,
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
  LET, 1, var_376_0_finally, 1, var_basic_loops__finally,
  // by < 0
  var_std__less, 2, LOCAL(4), num_0, 1, LOCAL(1),
  // $iterate
  var_if, 3, LOCAL(1), lambda_5, lambda_9, 1, var_394_1_iterate,
  // !next:
  LET, 1, lambda_3_next, 1, var_next,
  // !break: (myself^)
  LET, 1, lambda_4_break, 1, var_break,
  // break.basic_loops::saved_context_of saved_context
  LET, -1, var_break, var_basic_loops__saved_context_of, LOCAL(6), var_break,
  // iterate!
  var_394_1_iterate, 0, IO_TAIL_CALL,
  POS(378, 3),
  POS(388, 3),
  POS(389, 3),
  POS(390, 3),
  POS(391, 3),
  POS(392, 3),
  POS(396, 7),
  POS(394, 3),
  POS(410, 3),
  POS(414, 3),
  POS(422, 4),
  POS(424, 3)
};

static TAB_NUM t_lambda_5[] = {
  0, // locals
  0, // parameters
  //  :
  LET, 1, lambda_6, IO_TAIL_CALL,
  POS(397, 9)
};

static TAB_NUM t_lambda_6[] = {
  2, // locals
  0, // parameters
  // basic_loops::from >= basic_loops::to:
  var_std__less, 2, var_basic_loops__from, var_basic_loops__to, 1, LOCAL(1),
  // basic_loops::from >= basic_loops::to:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_7, lambda_8, IO_TAIL_CALL,
  POS(399, 11),
  POS(399, 11),
  POS(398, 9)
};

static TAB_NUM t_lambda_7[] = {
  0, // locals
  0, // parameters
  // basic_loops::body! basic_loops::from
  var_basic_loops__body, 1, var_basic_loops__from, IO_TAIL_CALL,
  POS(400, 13)
};

static TAB_NUM t_lambda_8[] = {
  0, // locals
  0, // parameters
  // break!
  var_break, 0, IO_TAIL_CALL,
  POS(402, 13)
};

static TAB_NUM t_lambda_9[] = {
  0, // locals
  0, // parameters
  //  :
  LET, 1, lambda_10, IO_TAIL_CALL,
  POS(403, 9)
};

static TAB_NUM t_lambda_10[] = {
  2, // locals
  0, // parameters
  // basic_loops::to:
  var_std__less, 2, var_basic_loops__to, var_basic_loops__from, 1, LOCAL(1),
  // basic_loops::to:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_11, lambda_12, IO_TAIL_CALL,
  POS(405, 32),
  POS(405, 32),
  POS(404, 9)
};

static TAB_NUM t_lambda_11[] = {
  0, // locals
  0, // parameters
  // basic_loops::body! basic_loops::from
  var_basic_loops__body, 1, var_basic_loops__from, IO_TAIL_CALL,
  POS(406, 13)
};

static TAB_NUM t_lambda_12[] = {
  0, // locals
  0, // parameters
  // break!
  var_break, 0, IO_TAIL_CALL,
  POS(408, 13)
};

static TAB_NUM t_lambda_3_next[] = {
  0, // locals
  0, // parameters
  // !basic_loops::from basic_loops::from+basic_loops::by
  var_std__plus, 2, var_basic_loops__from, var_basic_loops__by, 1, var_basic_loops__from,
  // iterate!
  var_394_1_iterate, 0, IO_TAIL_CALL,
  POS(411, 5),
  POS(412, 5)
};

static TAB_NUM t_lambda_4_break[] = {
  2, // locals
  -1, // parameters
  MYSELF_PARAMETER, LOCAL(2), // 414_9_myself
  // !finally basic_loops::finally
  LET, 1, var_basic_loops__finally, 1, var_376_0_finally,
  // basic_loops::saved_context_of(myself)
  var_basic_loops__saved_context_of, 1, LOCAL(2), 1, LOCAL(1),
  // basic_loops::saved_context_of(myself)
  LOCAL(1), 0, 7, var_next, var_break, var_basic_loops__from, var_basic_loops__to, var_basic_loops__by, var_basic_loops__body, var_basic_loops__finally,
  // finally!
  var_376_0_finally, 0, IO_TAIL_CALL,
  POS(415, 5),
  POS(416, 5),
  POS(416, 5),
  POS(420, 5)
};

static FUNKY_CONSTANT constants_table[] = {
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_break}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__while}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__while_not}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__repeat}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_iterate}},
  {FLT_POSITIVE_INT64, 0, {.value = 0}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_next}},
  {FLT_POSITIVE_INT64, 0, {.value = 1}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2_break}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__from_to}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_2_iterate}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_3}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_4}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2_next}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_3_break}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__from_to_by}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_5}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_6}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_7}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_8}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_9}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_10}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_11}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_12}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_3_next}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_4_break}}
};

static FUNKY_VARIABLE variables_table[] = {
  {
    FOT_POLYMORPHIC, 0, 0,
    "saved_context_of\000basic_loops", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "assign\000std", NULL,
    {.position = POS(25, 1)}
  },
  {
    FOT_DERIVED, 0, 0,
    "body\000basic_loops", NULL,
    {"undefined\000"}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "undefined\000", NULL,
    {.position = POS(27, 20)}
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
    {"pass\000"}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "pass\000", NULL,
    {.position = POS(64, 12)}
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
    "147_0_finally\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "next\000", NULL,
    {.position = POS(149, 24)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "break\000", NULL,
    {.position = POS(149, 29)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "tuple\000", NULL,
    {.position = POS(149, 18)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "while\000std", NULL,
    {.const_idx = -func_std__while}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "166_0_condition\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "167_0_body\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "168_0_finally\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if\000", NULL,
    {.position = POS(170, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "loop\000", NULL,
    {.position = POS(170, 3)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "while_not\000std", NULL,
    {.const_idx = -func_std__while_not}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "174_0_condition\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "175_0_body\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "176_0_finally\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if_not\000", NULL,
    {.position = POS(178, 9)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "repeat\000std", NULL,
    {.const_idx = -func_std__repeat}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "212_0_finally\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "less\000std", NULL,
    {.position = POS(228, 27)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "minus\000std", NULL,
    {.position = POS(234, 24)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "from_to\000std", NULL,
    {.const_idx = -func_std__from_to}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "326_0_finally\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not\000std", NULL,
    {.position = POS(344, 28)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000std", NULL,
    {.position = POS(350, 24)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "from_to_by\000std", NULL,
    {.const_idx = -func_std__from_to_by}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "376_0_finally\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "394_1_iterate\000", NULL
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
  .feature_flags = FEAT_POSITIONS,
  .marker = 0,
  0, // number of required modules
  1, // number of defined namespaces
  1, // number of used namespaces
  31, // number of constants
  38, // number of variables
  NULL, // required modules
  defined_namespaces,
  used_namespaces,
  constants_table,
  variables_table,
};
