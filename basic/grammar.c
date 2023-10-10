#include <stddef.h>
#include <stdint.h>

#include "runtime/common.h"
#include "runtime/builtins.h"
#include "runtime/fko.h"
#include "runtime/memory.h"


enum {
  var__START = FIRST_VAR-1,
  var_std__match, // attribute
  var_std__assign, // extern
  var_std__search, // attribute
  var__END
};


static FUNKY_VARIABLE variables_table[] = {
  {
    FOT_POLYMORPHIC, 0, 0,
    "match\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "assign\000std", NULL
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "search\000std", NULL,
    {.has_a_setter = false}
  }
};

static FUNKY_NAMESPACE used_namespaces[] = {
  {"std", 1, 0}
};

FUNKY_MODULE module__basic__grammar = {
  "_basic__grammar", // module name
  "basic/grammar.fky", // module filename
  .major_version = 0,
  .minor_version = 0,
  .feature_flags = FEAT_POSITIONS,
  .marker = 0,
  0, // number of required modules
  0, // number of defined namespaces
  1, // number of used namespaces
  0, // number of constants
  3, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  NULL, // no constants
  variables_table,
};
