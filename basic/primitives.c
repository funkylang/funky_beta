#include <stddef.h>
#include <stdint.h>

#include "runtime/common.h"
#include "runtime/builtins.h"
#include "runtime/fko.h"
#include "runtime/memory.h"

enum {
  func_std__do = -1,
  func_std__ignore = -2,
  func_std__assign = -3,
  func_std__chain = -4,
  lambda_loop = -5,
  lambda_1 = -6,
  num_1 = -7,
  lambda_initializers1 = -8,
  num_2 = -9,
  minus_num_1 = -10
};

enum {
  var__START = FIRST_VAR-1,
  var_std__do, // initialized
  var_std__assign, // initialized
  var_std__ignore, // initialized
  var_pass, // extern
  var_spread, // extern
  var_std__chain, // initialized
  var_83_14_initializers, // dynamic
  var_83_28_body, // dynamic
  var_is_empty, // extern
  var_range, // extern
  var_next, // extern
  var_if, // extern
  var_loop, // extern
  var__END
};


static TAB_NUM t_func_std__do[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 43_0_body
  // body!
  LOCAL(1), 0, IO_TAIL_CALL,
  POS(45, 3)
};

static TAB_NUM t_func_std__ignore[] = {
  1, // locals
  1, // parameters
  LOCAL(1),
  // pass
  var_pass, 0, TAIL_CALL,
  POS(59, 3)
};

static TAB_NUM t_func_std__assign[] = {
  1, // locals
  -1, // parameters
  REST_PARAMETER, LOCAL(1), // 79_0_args
  // spread args
  var_spread, 1, LOCAL(1), TAIL_CALL,
  POS(81, 3)
};

static TAB_NUM t_func_std__chain[] = {
  0, // locals
  -2, // parameters
  REST_PARAMETER, var_83_14_initializers,
  MANDATORY_PARAMETER, var_83_28_body,
  // loop:
  var_loop, 1, lambda_loop, IO_TAIL_CALL,
  POS(84, 3)
};

static TAB_NUM t_lambda_loop[] = {
  1, // locals
  0, // parameters
  // is_empty
  var_is_empty, 1, var_83_14_initializers, 1, LOCAL(1),
  // if!
  var_if, 3, LOCAL(1), var_83_28_body, lambda_1, IO_TAIL_CALL,
  POS(86, 20),
  POS(85, 5)
};

static TAB_NUM t_lambda_1[] = {
  1, // locals
  0, // parameters
  // initializers(1):
  var_83_14_initializers, 1, num_1, 1, LOCAL(1),
  // initializers(1):
  LOCAL(1), 1, lambda_initializers1, IO_TAIL_CALL,
  POS(89, 9),
  POS(89, 9)
};

static TAB_NUM t_lambda_initializers1[] = {
  0, // locals
  0, // parameters
  // range &initializers 2 -1
  var_range, 3, var_83_14_initializers, num_2, minus_num_1, 1, var_83_14_initializers,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(90, 11),
  POS(91, 11)
};

static FUNKY_CONSTANT constants_table[] = {
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__do}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__ignore}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__assign}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__chain}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1}},
  {FLT_POSITIVE_INT64, 0, {.value = 1}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_initializers1}},
  {FLT_POSITIVE_INT64, 0, {.value = 2}},
  {FLT_NEGATIVE_INT64, 0, {.value = 1}}
};

static FUNKY_VARIABLE variables_table[] = {
  {
    FOT_INITIALIZED, 0, 0,
    "do\000std", NULL,
    {.const_idx = -func_std__do}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "assign\000std", NULL,
    {.const_idx = -func_std__assign}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "ignore\000std", NULL,
    {.const_idx = -func_std__ignore}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "pass\000", NULL,
    {.position = POS(59, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "spread\000", NULL,
    {.position = POS(81, 3)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "chain\000std", NULL,
    {.const_idx = -func_std__chain}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "83_14_initializers\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "83_28_body\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_empty\000", NULL,
    {.position = POS(86, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "range\000", NULL,
    {.position = POS(90, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "next\000", NULL,
    {.position = POS(91, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if\000", NULL,
    {.position = POS(85, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "loop\000", NULL,
    {.position = POS(84, 3)}
  }
};

static FUNKY_NAMESPACE used_namespaces[] = {
  {"std", 1, 0}
};

FUNKY_MODULE module__basic__primitives = {
  "_basic__primitives", // module name
  "basic/primitives.fky", // module filename
  .major_version = 0,
  .minor_version = 0,
  .feature_flags = FEAT_POSITIONS,
  .marker = 0,
  0, // number of required modules
  0, // number of defined namespaces
  1, // number of used namespaces
  10, // number of constants
  13, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  constants_table,
  variables_table,
};
