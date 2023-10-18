#include <stddef.h>
#include <stdint.h>

#include "runtime/common.h"
#include "runtime/builtins.h"
#include "runtime/fko.h"
#include "runtime/memory.h"

enum {
  func_std__do = -1,
  func_std__ignore = -2,
  func_std__assign = -3
};

enum {
  var__START = FIRST_VAR-1,
  var_std__do, // initialized
  var_std__assign, // initialized
  var_std__ignore, // initialized
  var_pass, // extern
  var_spread, // extern
  var__END
};


static TAB_NUM t_func_std__do[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 38_0_body
  // body!
  LOCAL(1), 0, IO_TAIL_CALL,
  POS(40, 3)
};

static TAB_NUM t_func_std__ignore[] = {
  1, // locals
  1, // parameters
  LOCAL(1),
  // pass
  var_pass, 0, TAIL_CALL,
  POS(48, 3)
};

static TAB_NUM t_func_std__assign[] = {
  1, // locals
  -1, // parameters
  REST_PARAMETER, LOCAL(1), // 53_0_args
  // spread args
  var_spread, 1, LOCAL(1), TAIL_CALL,
  POS(55, 3)
};

static FUNKY_CONSTANT constants_table[] = {
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__do}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__ignore}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__assign}}
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
    {.position = POS(48, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "spread\000", NULL,
    {.position = POS(55, 3)}
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
  3, // number of constants
  5, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  constants_table,
  variables_table,
};
