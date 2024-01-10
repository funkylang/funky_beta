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
  lambda_29 = -35
};

enum {
  var__START = FIRST_VAR-1,
  var_std__assign, // extern
  var_std__count, // initialized
  var_57_0_collection, // dynamic
  var_58_0_test, // dynamic
  var_59_0_argument, // dynamic
  var_std__equal, // extern
  var_if, // extern
  var_plus, // extern
  var_map_reduce, // extern
  var_std__any_of, // initialized
  var_123_0_collection, // dynamic
  var_124_0_test, // dynamic
  var_125_0_argument, // dynamic
  var_true, // extern
  var_next, // extern
  var_false, // extern
  var_for_each, // extern
  var_std__all_of, // initialized
  var_176_0_collection, // dynamic
  var_177_0_test, // dynamic
  var_178_0_argument, // dynamic
  var__END
};


static TAB_NUM t_func_std__count[] = {
  1, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_57_0_collection,
  uni_NONE, var_58_0_test,
  uni_NONE, var_59_0_argument,
  // NONE == test:
  var_std__equal, 2, uni_NONE, var_58_0_test, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1, lambda_5, TAIL_CALL,
  POS(62, 5),
  POS(61, 3)
};

static TAB_NUM t_lambda_1[] = {
  0, // locals
  0, // parameters
  // map_reduce collection
  var_map_reduce, 4, var_57_0_collection, lambda_2, var_plus, num_0, TAIL_CALL,
  POS(63, 7)
};

static TAB_NUM t_lambda_2[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 64_3_item
  // if
  var_if, 3, LOCAL(1), lambda_3, lambda_4, TAIL_CALL,
  POS(65, 11)
};

static TAB_NUM t_lambda_3[] = {
  0, // locals
  0, // parameters
  //  1
  LET, 1, num_1, TAIL_CALL,
  POS(67, 15)
};

static TAB_NUM t_lambda_4[] = {
  0, // locals
  0, // parameters
  //  0
  LET, 1, num_0, TAIL_CALL,
  POS(68, 15)
};

static TAB_NUM t_lambda_5[] = {
  1, // locals
  0, // parameters
  // NONE == argument:
  var_std__equal, 2, uni_NONE, var_59_0_argument, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_6, lambda_10, TAIL_CALL,
  POS(73, 9),
  POS(72, 7)
};

static TAB_NUM t_lambda_6[] = {
  0, // locals
  0, // parameters
  // map_reduce collection
  var_map_reduce, 4, var_57_0_collection, lambda_7, var_plus, num_0, TAIL_CALL,
  POS(74, 11)
};

static TAB_NUM t_lambda_7[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 75_3_item
  // test(item)
  var_58_0_test, 1, LOCAL(2), 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_8, lambda_9, TAIL_CALL,
  POS(77, 17),
  POS(76, 15)
};

static TAB_NUM t_lambda_8[] = {
  0, // locals
  0, // parameters
  //  1
  LET, 1, num_1, TAIL_CALL,
  POS(78, 19)
};

static TAB_NUM t_lambda_9[] = {
  0, // locals
  0, // parameters
  //  0
  LET, 1, num_0, TAIL_CALL,
  POS(79, 19)
};

static TAB_NUM t_lambda_10[] = {
  0, // locals
  0, // parameters
  // map_reduce collection
  var_map_reduce, 4, var_57_0_collection, lambda_11, var_plus, num_0, TAIL_CALL,
  POS(83, 11)
};

static TAB_NUM t_lambda_11[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 84_3_item
  // test(item argument)
  var_58_0_test, 2, LOCAL(2), var_59_0_argument, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_12, lambda_13, TAIL_CALL,
  POS(86, 17),
  POS(85, 15)
};

static TAB_NUM t_lambda_12[] = {
  0, // locals
  0, // parameters
  //  1
  LET, 1, num_1, TAIL_CALL,
  POS(87, 19)
};

static TAB_NUM t_lambda_13[] = {
  0, // locals
  0, // parameters
  //  0
  LET, 1, num_0, TAIL_CALL,
  POS(88, 19)
};

static TAB_NUM t_func_std__any_of[] = {
  1, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_123_0_collection,
  MANDATORY_PARAMETER, var_124_0_test,
  uni_NONE, var_125_0_argument,
  // argument == NONE:
  var_std__equal, 2, var_125_0_argument, uni_NONE, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_14, lambda_18, TAIL_CALL,
  POS(128, 5),
  POS(127, 3)
};

static TAB_NUM t_lambda_14[] = {
  0, // locals
  0, // parameters
  // for_each collection
  var_for_each, 3, var_123_0_collection, lambda_15, lambda_17, TAIL_CALL,
  POS(129, 7)
};

static TAB_NUM t_lambda_15[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 130_3_item
  // test(item)
  var_124_0_test, 1, LOCAL(2), 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_16, var_next, TAIL_CALL,
  POS(132, 13),
  POS(131, 11)
};

static TAB_NUM t_lambda_16[] = {
  0, // locals
  0, // parameters
  //  true
  LET, 1, var_true, TAIL_CALL,
  POS(133, 15)
};

static TAB_NUM t_lambda_17[] = {
  0, // locals
  0, // parameters
  //  false
  LET, 1, var_false, TAIL_CALL,
  POS(135, 11)
};

static TAB_NUM t_lambda_18[] = {
  0, // locals
  0, // parameters
  // for_each collection
  var_for_each, 3, var_123_0_collection, lambda_19, lambda_21, TAIL_CALL,
  POS(137, 7)
};

static TAB_NUM t_lambda_19[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 138_3_item
  // test(item argument)
  var_124_0_test, 2, LOCAL(2), var_125_0_argument, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_20, var_next, TAIL_CALL,
  POS(140, 13),
  POS(139, 11)
};

static TAB_NUM t_lambda_20[] = {
  0, // locals
  0, // parameters
  //  true
  LET, 1, var_true, TAIL_CALL,
  POS(141, 15)
};

static TAB_NUM t_lambda_21[] = {
  0, // locals
  0, // parameters
  //  false
  LET, 1, var_false, TAIL_CALL,
  POS(143, 11)
};

static TAB_NUM t_func_std__all_of[] = {
  1, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_176_0_collection,
  MANDATORY_PARAMETER, var_177_0_test,
  uni_NONE, var_178_0_argument,
  // argument == NONE:
  var_std__equal, 2, var_178_0_argument, uni_NONE, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_22, lambda_26, TAIL_CALL,
  POS(181, 5),
  POS(180, 3)
};

static TAB_NUM t_lambda_22[] = {
  0, // locals
  0, // parameters
  // for_each collection
  var_for_each, 3, var_176_0_collection, lambda_23, lambda_25, TAIL_CALL,
  POS(182, 7)
};

static TAB_NUM t_lambda_23[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 183_3_item
  // test(item)
  var_177_0_test, 1, LOCAL(2), 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), var_next, lambda_24, TAIL_CALL,
  POS(185, 13),
  POS(184, 11)
};

static TAB_NUM t_lambda_24[] = {
  0, // locals
  0, // parameters
  //  false
  LET, 1, var_false, TAIL_CALL,
  POS(187, 15)
};

static TAB_NUM t_lambda_25[] = {
  0, // locals
  0, // parameters
  //  true
  LET, 1, var_true, TAIL_CALL,
  POS(188, 11)
};

static TAB_NUM t_lambda_26[] = {
  0, // locals
  0, // parameters
  // for_each collection
  var_for_each, 3, var_176_0_collection, lambda_27, lambda_29, TAIL_CALL,
  POS(190, 7)
};

static TAB_NUM t_lambda_27[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 191_3_item
  // test(item argument)
  var_177_0_test, 2, LOCAL(2), var_178_0_argument, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), var_next, lambda_28, TAIL_CALL,
  POS(193, 13),
  POS(192, 11)
};

static TAB_NUM t_lambda_28[] = {
  0, // locals
  0, // parameters
  //  false
  LET, 1, var_false, TAIL_CALL,
  POS(195, 15)
};

static TAB_NUM t_lambda_29[] = {
  0, // locals
  0, // parameters
  //  true
  LET, 1, var_true, TAIL_CALL,
  POS(196, 11)
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
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_29}}
};

static FUNKY_VARIABLE variables_table[] = {
  {
    FOT_UNKNOWN, 0, 0,
    "assign\000std", NULL,
    {.position = POS(23, 1)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "count\000std", NULL,
    {.const_idx = -func_std__count}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "57_0_collection\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "58_0_test\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "59_0_argument\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "equal\000std", NULL,
    {.position = POS(62, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if\000", NULL,
    {.position = POS(65, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000", NULL,
    {.position = POS(69, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "map_reduce\000", NULL,
    {.position = POS(63, 7)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "any_of\000std", NULL,
    {.const_idx = -func_std__any_of}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "123_0_collection\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "124_0_test\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "125_0_argument\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "true\000", NULL,
    {.position = POS(133, 16)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "next\000", NULL,
    {.position = POS(134, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "false\000", NULL,
    {.position = POS(135, 12)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "for_each\000", NULL,
    {.position = POS(129, 7)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "all_of\000std", NULL,
    {.const_idx = -func_std__all_of}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "176_0_collection\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "177_0_test\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "178_0_argument\000", NULL
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
  35, // number of constants
  21, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  constants_table,
  variables_table,
};
