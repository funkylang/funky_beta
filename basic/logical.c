#include <stddef.h>
#include <stdint.h>

#include "runtime/common.h"
#include "runtime/builtins.h"
#include "runtime/fko.h"
#include "runtime/memory.h"

enum {
  func_std__in = -1
};

enum {
  var__START = FIRST_VAR-1,
  var_std__in, // initialized
  var_contains, // extern
  var_std__assign, // extern
  var__END
};


static TAB_NUM t_func_std__in[] = {
  3, // locals
  2, // parameters
  LOCAL(2), // 31_5_element
  LOCAL(3), // 32_5_collection
  // contains(collection element)
  var_contains, 2, LOCAL(3), LOCAL(2), 1, LOCAL(1),
  // -> contains(collection element)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(34, 6),
  POS(34, 3),
  LOCAL(2),
  LOCAL(3)
};

static FUNCTION_INFO i_func_std__in = {
  t_func_std__in, NULL, 2, 2,
  {"31_5_element\000", "32_5_collection\000"}
};

static FUNKY_CONSTANT constants_table[] = {
  {FLT_FUNCTION, 0, {.func_info = &i_func_std__in}}
};

static FUNKY_VARIABLE variables_table[] = {
  {
    FOT_INITIALIZED, 0, 0,
    "in\000std", NULL,
    {.const_idx = -func_std__in}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "contains\000", NULL,
    {.position = POS(34, 6)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "assign\000std", NULL,
    {.position = POS(34, 5)}
  }
};

static FUNKY_NAMESPACE used_namespaces[] = {
  {"std", 1, 0}
};

FUNKY_MODULE module__basic__logical = {
  "_basic__logical", // module name
  "basic/logical.fky", // module filename
  .major_version = 0,
  .minor_version = 0,
  .feature_flags = FEAT_POSITIONS|FEAT_FUNCTION_INFO,
  .marker = 0,
  0, // number of required modules
  0, // number of defined namespaces
  1, // number of used namespaces
  1, // number of constants
  3, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  constants_table,
  variables_table,
};
