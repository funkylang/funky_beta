#include <stddef.h>
#include <stdint.h>

#include "runtime/common.h"
#include "runtime/builtins.h"
#include "runtime/fko.h"
#include "runtime/memory.h"

enum {
  func_std__get_environment = -1,
  lambda_1 = -2,
  chr_61 = -3,
  lambda_2 = -4
};

enum {
  var__START = FIRST_VAR-1,
  var_std__environment, // derived
  var_undefined, // extern
  var_std__assign, // extern
  var_std__get_environment, // initialized
  var_26_1_environment, // dynamic
  var_empty_key_order_table, // extern
  var_environment_variables, // extern
  var_from_utf8, // extern
  var_before, // extern
  var_behind, // extern
  var_next, // extern
  var_for_each, // extern
  var__END
};


static TAB_NUM t_func_std__get_environment[] = {
  0, // locals
  0, // parameters
  // $environment empty_key_order_table
  LET, 1, var_empty_key_order_table, 1, var_26_1_environment,
  // for_each environment_variables
  var_for_each, 3, var_environment_variables, lambda_1, lambda_2, TAIL_CALL,
  POS(26, 3),
  POS(27, 3)
};

static TAB_NUM t_lambda_1[] = {
  3, // locals
  1, // parameters
  LOCAL(1), // 28_3_key_and_value
  // from_utf8 &key_and_value
  var_from_utf8, 1, LOCAL(1), 1, LOCAL(1),
  // $key key_and_value .before. '='
  var_before, 2, LOCAL(1), chr_61, 1, LOCAL(2),
  // $value key_and_value .behind. '='
  var_behind, 2, LOCAL(1), chr_61, 1, LOCAL(3),
  // environment(key) value
  var_26_1_environment, 2, LOCAL(2), LOCAL(3), 1, var_26_1_environment,
  // next
  var_next, 0, TAIL_CALL,
  POS(29, 7),
  POS(30, 7),
  POS(31, 7),
  POS(32, 8),
  POS(33, 7)
};

static TAB_NUM t_lambda_2[] = {
  0, // locals
  0, // parameters
  //  environment
  LET, 1, var_26_1_environment, TAIL_CALL,
  POS(34, 7)
};

static FUNKY_CONSTANT constants_table[] = {
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__get_environment}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1}},
  {FLT_CHARACTER, 0, {.value = 61}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2}}
};

static FUNKY_VARIABLE variables_table[] = {
  {
    FOT_DERIVED, 0, 0,
    "environment\000std", NULL,
    {"undefined\000"}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "undefined\000", NULL,
    {.position = POS(23, 19)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "assign\000std", NULL,
    {.position = POS(23, 1)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "get_environment\000std", NULL,
    {.const_idx = -func_std__get_environment}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "26_1_environment\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_key_order_table\000", NULL,
    {.position = POS(26, 16)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "environment_variables\000", NULL,
    {.position = POS(27, 12)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "from_utf8\000", NULL,
    {.position = POS(29, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "before\000", NULL,
    {.position = POS(30, 12)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "behind\000", NULL,
    {.position = POS(31, 14)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "next\000", NULL,
    {.position = POS(33, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "for_each\000", NULL,
    {.position = POS(27, 3)}
  }
};

static FUNKY_NAMESPACE used_namespaces[] = {
  {"std", 1, 0}
};

FUNKY_MODULE module__basic__environment = {
  "_basic__environment", // module name
  "basic/environment.fky", // module filename
  .major_version = 0,
  .minor_version = 0,
  .feature_flags = FEAT_POSITIONS,
  .marker = 0,
  0, // number of required modules
  0, // number of defined namespaces
  1, // number of used namespaces
  4, // number of constants
  12, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  constants_table,
  variables_table,
};
