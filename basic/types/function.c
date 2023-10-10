#include <stddef.h>
#include <stdint.h>

#include "runtime/common.h"
#include "runtime/builtins.h"
#include "runtime/fko.h"
#include "runtime/memory.h"


enum {
  var__START = FIRST_VAR-1,
  var_std__is_a_function, // attribute
  var_std__assign, // extern
  var_std_types__object, // extern
  var_is_a_function, // extern polymorphic
  var_false, // extern
  var_std_types__function, // extern
  var_true, // extern
  var__END
};


static ATTRIBUTE_DEFINITION std_types__object__attributes[] = {
  {-var_is_a_function, -var_false}
};

static ATTRIBUTE_DEFINITION std_types__function__attributes[] = {
  {-var_is_a_function, -var_true}
};

static FUNKY_VARIABLE variables_table[] = {
  {
    FOT_POLYMORPHIC, 0, 0,
    "is_a_function\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "assign\000std", NULL
  },
  {
    FOT_UNKNOWN, 0, 1,
    "object\000std_types", std_types__object__attributes
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "is_a_function\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "false\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 1,
    "function\000std_types", std_types__function__attributes
  },
  {
    FOT_UNKNOWN, 0, 0,
    "true\000", NULL
  }
};

static FUNKY_NAMESPACE used_namespaces[] = {
  {"std", 1, 0}
};

FUNKY_MODULE module__basic__types__function = {
  "_basic__types__function", // module name
  "basic/types/function.fky", // module filename
  .major_version = 0,
  .minor_version = 0,
  .feature_flags = FEAT_POSITIONS,
  .marker = 0,
  0, // number of required modules
  0, // number of defined namespaces
  1, // number of used namespaces
  0, // number of constants
  7, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  NULL, // no constants
  variables_table,
};
