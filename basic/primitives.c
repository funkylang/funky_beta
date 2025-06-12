#include <stddef.h>
#include <stdint.h>

#include "runtime/common.h"
#include "runtime/builtins.h"
#include "runtime/fko.h"
#include "runtime/memory.h"

enum {
  func_std__do = -1,
  func_std__assign = -2,
  func_std__chain = -3,
  lambda_loop = -4,
  lambda_1 = -5,
  num_1 = -6,
  lambda_initializers1 = -7,
  num_2 = -8,
  minus_num_1 = -9
};

enum {
  var__START = FIRST_VAR-1,
  var_std__do, // initialized
  var_std__assign, // initialized
  var_spread, // extern
  var_std__chain, // initialized
  var_69_15_initializers, // dynamic
  var_69_29_body, // dynamic
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
  LOCAL(1), // 43_5_body
  // body!
  LOCAL(1), 0, IO_TAIL_CALL,
  POS(45, 3),
  LOCAL(1)
};

static FUNCTION_INFO i_func_std__do = {
  t_func_std__do, NULL, 1, 1,
  {"43_5_body\000"}
};

static TAB_NUM t_func_std__assign[] = {
  1, // locals
  -1, // parameters
  REST_PARAMETER, LOCAL(1), // 65_5_args
  // spread args
  var_spread, 1, LOCAL(1), TAIL_CALL,
  POS(67, 3),
  LOCAL(1)
};

static FUNCTION_INFO i_func_std__assign = {
  t_func_std__assign, NULL, 1, 1,
  {"65_5_args\000"}
};

static TAB_NUM t_func_std__chain[] = {
  0, // locals
  -2, // parameters
  REST_PARAMETER, var_69_15_initializers,
  MANDATORY_PARAMETER, var_69_29_body,
  // loop:
  var_loop, 1, lambda_loop, IO_TAIL_CALL,
  POS(70, 3)
};

static FUNCTION_INFO i_func_std__chain = {
  t_func_std__chain, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_loop[] = {
  1, // locals
  0, // parameters
  // is_empty
  var_is_empty, 1, var_69_15_initializers, 1, LOCAL(1),
  // if!
  var_if, 3, LOCAL(1), var_69_29_body, lambda_1, IO_TAIL_CALL,
  POS(72, 20),
  POS(71, 5)
};

static FUNCTION_INFO i_lambda_loop = {
  t_lambda_loop, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_1[] = {
  1, // locals
  0, // parameters
  // initializers(1):
  var_69_15_initializers, 1, num_1, 1, LOCAL(1),
  // initializers(1):
  LOCAL(1), 1, lambda_initializers1, IO_TAIL_CALL,
  POS(75, 9),
  POS(75, 9)
};

static FUNCTION_INFO i_lambda_1 = {
  t_lambda_1, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_initializers1[] = {
  0, // locals
  0, // parameters
  // range &initializers 2 -1
  var_range, 3, var_69_15_initializers, num_2, minus_num_1, 1, var_69_15_initializers,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(76, 11),
  POS(77, 11)
};

static FUNCTION_INFO i_lambda_initializers1 = {
  t_lambda_initializers1, NULL, 2, 0,
  {}
};

static FUNKY_CONSTANT constants_table[] = {
  {FLT_FUNCTION, 0, {.func_info = &i_func_std__do}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std__assign}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std__chain}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_loop}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_1}},
  {FLT_POSITIVE_INT64, 0, {.value = 1}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_initializers1}},
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
    FOT_UNKNOWN, 0, 0,
    "spread\000", NULL,
    {.position = POS(67, 3)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "chain\000std", NULL,
    {.const_idx = -func_std__chain}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "69_15_initializers\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "69_29_body\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_empty\000", NULL,
    {.position = POS(72, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "range\000", NULL,
    {.position = POS(76, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "next\000", NULL,
    {.position = POS(77, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if\000", NULL,
    {.position = POS(71, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "loop\000", NULL,
    {.position = POS(70, 3)}
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
  .feature_flags = FEAT_POSITIONS|FEAT_FUNCTION_INFO,
  .marker = 0,
  0, // number of required modules
  0, // number of defined namespaces
  1, // number of used namespaces
  9, // number of constants
  11, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  constants_table,
  variables_table,
};
