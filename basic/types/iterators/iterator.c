#include <stddef.h>
#include <stdint.h>

#include "runtime/common.h"
#include "runtime/builtins.h"
#include "runtime/fko.h"
#include "runtime/memory.h"


enum {
  var__START = FIRST_VAR-1,
  var_std__is_an_iterator, // attribute
  var_std__assign, // extern
  var_std_types__object, // extern
  var_is_an_iterator, // extern polymorphic
  var_false, // extern
  var_std_types__iterator, // derived
  var_true, // extern
  var_std__next_value, // attribute
  var__END
};


static ATTRIBUTE_DEFINITION std_types__object__attributes[] = {
  {-var_is_an_iterator, -var_false}
};

static ATTRIBUTE_DEFINITION std_types__iterator__attributes[] = {
  {-var_is_an_iterator, -var_true}
};

static FUNKY_VARIABLE variables_table[] = {
  {
    FOT_POLYMORPHIC, 0, 0,
    "is_an_iterator\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "assign\000std", NULL,
    {.position = POS(25, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "object\000std_types", std_types__object__attributes,
    {.position = POS(29, 1)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "is_an_iterator\000", NULL,
    {.position = POS(29, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "false\000", NULL,
    {.position = POS(29, 35)}
  },
  {
    FOT_DERIVED, 0, 1,
    "iterator\000std_types", std_types__iterator__attributes,
    {"object\000std_types"}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "true\000", NULL,
    {.position = POS(30, 37)}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "next_value\000std", NULL,
    {.has_a_setter = false}
  }
};

static FUNKY_NAMESPACE used_namespaces[] = {
  {"std", 1, 0}
};

FUNKY_MODULE module__basic__types__iterators__iterator = {
  "_basic__types__iterators__iterator", // module name
  "basic/types/iterators/iterator.fky", // module filename
  .major_version = 0,
  .minor_version = 0,
  .feature_flags = FEAT_POSITIONS|FEAT_FUNCTION_INFO,
  .marker = 0,
  0, // number of required modules
  0, // number of defined namespaces
  1, // number of used namespaces
  0, // number of constants
  8, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  NULL, // no constants
  variables_table,
};
