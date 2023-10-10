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
  var_36_0_collection, // dynamic
  var_37_0_test, // dynamic
  var_38_0_argument, // dynamic
  var_std__equal, // extern
  var_if, // extern
  var_plus, // extern
  var_map_reduce, // extern
  var_std__any_of, // initialized
  var_82_0_collection, // dynamic
  var_83_0_test, // dynamic
  var_84_0_argument, // dynamic
  var_true, // extern
  var_next, // extern
  var_false, // extern
  var_for_each, // extern
  var_std__all_of, // initialized
  var_115_0_collection, // dynamic
  var_116_0_test, // dynamic
  var_117_0_argument, // dynamic
  var__END
};


static TAB_NUM t_func_std__count[] = {
  1, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_36_0_collection,
  uni_NONE, var_37_0_test,
  uni_NONE, var_38_0_argument,
  // NONE == test:
  var_std__equal, 2, uni_NONE, var_37_0_test, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1, lambda_5, TAIL_CALL,
  POS(41, 5),
  POS(40, 3)
};

static TAB_NUM t_lambda_1[] = {
  0, // locals
  0, // parameters
  // map_reduce collection
  var_map_reduce, 4, var_36_0_collection, lambda_2, var_plus, num_0, TAIL_CALL,
  POS(42, 7)
};

static TAB_NUM t_lambda_2[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 43_3_item
  // if
  var_if, 3, LOCAL(1), lambda_3, lambda_4, TAIL_CALL,
  POS(44, 11)
};

static TAB_NUM t_lambda_3[] = {
  0, // locals
  0, // parameters
  //  1
  LET, 1, num_1, TAIL_CALL,
  POS(46, 15)
};

static TAB_NUM t_lambda_4[] = {
  0, // locals
  0, // parameters
  //  0
  LET, 1, num_0, TAIL_CALL,
  POS(47, 15)
};

static TAB_NUM t_lambda_5[] = {
  1, // locals
  0, // parameters
  // NONE == argument:
  var_std__equal, 2, uni_NONE, var_38_0_argument, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_6, lambda_10, TAIL_CALL,
  POS(52, 9),
  POS(51, 7)
};

static TAB_NUM t_lambda_6[] = {
  0, // locals
  0, // parameters
  // map_reduce collection
  var_map_reduce, 4, var_36_0_collection, lambda_7, var_plus, num_0, TAIL_CALL,
  POS(53, 11)
};

static TAB_NUM t_lambda_7[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 54_3_item
  // test(item)
  var_37_0_test, 1, LOCAL(2), 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_8, lambda_9, TAIL_CALL,
  POS(56, 17),
  POS(55, 15)
};

static TAB_NUM t_lambda_8[] = {
  0, // locals
  0, // parameters
  //  1
  LET, 1, num_1, TAIL_CALL,
  POS(57, 19)
};

static TAB_NUM t_lambda_9[] = {
  0, // locals
  0, // parameters
  //  0
  LET, 1, num_0, TAIL_CALL,
  POS(58, 19)
};

static TAB_NUM t_lambda_10[] = {
  0, // locals
  0, // parameters
  // map_reduce collection
  var_map_reduce, 4, var_36_0_collection, lambda_11, var_plus, num_0, TAIL_CALL,
  POS(62, 11)
};

static TAB_NUM t_lambda_11[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 63_3_item
  // test(item argument)
  var_37_0_test, 2, LOCAL(2), var_38_0_argument, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_12, lambda_13, TAIL_CALL,
  POS(65, 17),
  POS(64, 15)
};

static TAB_NUM t_lambda_12[] = {
  0, // locals
  0, // parameters
  //  1
  LET, 1, num_1, TAIL_CALL,
  POS(66, 19)
};

static TAB_NUM t_lambda_13[] = {
  0, // locals
  0, // parameters
  //  0
  LET, 1, num_0, TAIL_CALL,
  POS(67, 19)
};

static TAB_NUM t_func_std__any_of[] = {
  1, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_82_0_collection,
  MANDATORY_PARAMETER, var_83_0_test,
  uni_NONE, var_84_0_argument,
  // argument == NONE:
  var_std__equal, 2, var_84_0_argument, uni_NONE, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_14, lambda_18, TAIL_CALL,
  POS(87, 5),
  POS(86, 3)
};

static TAB_NUM t_lambda_14[] = {
  0, // locals
  0, // parameters
  // for_each collection
  var_for_each, 3, var_82_0_collection, lambda_15, lambda_17, TAIL_CALL,
  POS(88, 7)
};

static TAB_NUM t_lambda_15[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 89_3_item
  // test(item)
  var_83_0_test, 1, LOCAL(2), 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_16, var_next, TAIL_CALL,
  POS(91, 13),
  POS(90, 11)
};

static TAB_NUM t_lambda_16[] = {
  0, // locals
  0, // parameters
  //  true
  LET, 1, var_true, TAIL_CALL,
  POS(92, 15)
};

static TAB_NUM t_lambda_17[] = {
  0, // locals
  0, // parameters
  //  false
  LET, 1, var_false, TAIL_CALL,
  POS(94, 11)
};

static TAB_NUM t_lambda_18[] = {
  0, // locals
  0, // parameters
  // for_each collection
  var_for_each, 3, var_82_0_collection, lambda_19, lambda_21, TAIL_CALL,
  POS(96, 7)
};

static TAB_NUM t_lambda_19[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 97_3_item
  // test(item argument)
  var_83_0_test, 2, LOCAL(2), var_84_0_argument, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_20, var_next, TAIL_CALL,
  POS(99, 13),
  POS(98, 11)
};

static TAB_NUM t_lambda_20[] = {
  0, // locals
  0, // parameters
  //  true
  LET, 1, var_true, TAIL_CALL,
  POS(100, 15)
};

static TAB_NUM t_lambda_21[] = {
  0, // locals
  0, // parameters
  //  false
  LET, 1, var_false, TAIL_CALL,
  POS(102, 11)
};

static TAB_NUM t_func_std__all_of[] = {
  1, // locals
  -3, // parameters
  MANDATORY_PARAMETER, var_115_0_collection,
  MANDATORY_PARAMETER, var_116_0_test,
  uni_NONE, var_117_0_argument,
  // argument == NONE:
  var_std__equal, 2, var_117_0_argument, uni_NONE, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_22, lambda_26, TAIL_CALL,
  POS(120, 5),
  POS(119, 3)
};

static TAB_NUM t_lambda_22[] = {
  0, // locals
  0, // parameters
  // for_each collection
  var_for_each, 3, var_115_0_collection, lambda_23, lambda_25, TAIL_CALL,
  POS(121, 7)
};

static TAB_NUM t_lambda_23[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 122_3_item
  // test(item)
  var_116_0_test, 1, LOCAL(2), 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), var_next, lambda_24, TAIL_CALL,
  POS(124, 13),
  POS(123, 11)
};

static TAB_NUM t_lambda_24[] = {
  0, // locals
  0, // parameters
  //  false
  LET, 1, var_false, TAIL_CALL,
  POS(126, 15)
};

static TAB_NUM t_lambda_25[] = {
  0, // locals
  0, // parameters
  //  true
  LET, 1, var_true, TAIL_CALL,
  POS(127, 11)
};

static TAB_NUM t_lambda_26[] = {
  0, // locals
  0, // parameters
  // for_each collection
  var_for_each, 3, var_115_0_collection, lambda_27, lambda_29, TAIL_CALL,
  POS(129, 7)
};

static TAB_NUM t_lambda_27[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 130_3_item
  // test(item argument)
  var_116_0_test, 2, LOCAL(2), var_117_0_argument, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), var_next, lambda_28, TAIL_CALL,
  POS(132, 13),
  POS(131, 11)
};

static TAB_NUM t_lambda_28[] = {
  0, // locals
  0, // parameters
  //  false
  LET, 1, var_false, TAIL_CALL,
  POS(134, 15)
};

static TAB_NUM t_lambda_29[] = {
  0, // locals
  0, // parameters
  //  true
  LET, 1, var_true, TAIL_CALL,
  POS(135, 11)
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
    "assign\000std", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "count\000std", NULL,
    {.const_idx = -func_std__count}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "36_0_collection\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "37_0_test\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "38_0_argument\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "equal\000std", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "map_reduce\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "any_of\000std", NULL,
    {.const_idx = -func_std__any_of}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "82_0_collection\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "83_0_test\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "84_0_argument\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "true\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "next\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "false\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "for_each\000", NULL
  },
  {
    FOT_INITIALIZED, 0, 0,
    "all_of\000std", NULL,
    {.const_idx = -func_std__all_of}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "115_0_collection\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "116_0_test\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "117_0_argument\000", NULL
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
