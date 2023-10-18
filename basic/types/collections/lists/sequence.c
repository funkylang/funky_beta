#include <stddef.h>
#include <stdint.h>

#include "runtime/common.h"
#include "runtime/builtins.h"
#include "runtime/fko.h"
#include "runtime/memory.h"

enum {
  str_sequence = -1,
  func_std__sequence = -2
};

enum {
  var__START = FIRST_VAR-1,
  var_std_types__sequence, // extern
  var_subtype_of, // extern polymorphic
  var_std__is_a_sequence, // attribute
  var_std__assign, // extern
  var_std_types__object, // extern
  var_is_a_sequence, // extern polymorphic
  var_false, // extern
  var_true, // extern
  var_std__sequence, // initialized
  var_new, // extern
  var__END
};


static TAB_NUM t_func_std__sequence[] = {
  1, // locals
  -1, // parameters
  REST_PARAMETER, LOCAL(1), // 45_0_args
  // new std_types::sequence args
  var_new, 2, var_std_types__sequence, LOCAL(1), TAIL_CALL,
  POS(47, 3)
};

static FUNKY_CONSTANT constants_table[] = {
  {FLT_STRING_8, 8, {.str_8 = "sequence"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__sequence}}
};

static ATTRIBUTE_DEFINITION std_types__sequence__attributes[] = {
  {-var_subtype_of, -str_sequence},
  {-var_is_a_sequence, -var_true}
};

static ATTRIBUTE_DEFINITION std_types__object__attributes[] = {
  {-var_is_a_sequence, -var_false}
};

static FUNKY_VARIABLE variables_table[] = {
  {
    FOT_UNKNOWN, 0, 2,
    "sequence\000std_types", std_types__sequence__attributes,
    {.position = POS(23, 1)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "subtype_of\000", NULL,
    {.position = POS(23, 22)}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "is_a_sequence\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "assign\000std", NULL,
    {.position = POS(27, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "object\000std_types", std_types__object__attributes,
    {.position = POS(29, 1)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "is_a_sequence\000", NULL,
    {.position = POS(29, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "false\000", NULL,
    {.position = POS(29, 34)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "true\000", NULL,
    {.position = POS(35, 36)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "sequence\000std", NULL,
    {.const_idx = -func_std__sequence}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "new\000", NULL,
    {.position = POS(47, 3)}
  }
};

static FUNKY_NAMESPACE used_namespaces[] = {
  {"std", 1, 0}
};

FUNKY_MODULE module__basic__types__collections__lists__sequence = {
  "_basic__types__collections__lists__sequence", // module name
  "basic/types/collections/lists/sequence.fky", // module filename
  .major_version = 0,
  .minor_version = 0,
  .feature_flags = FEAT_POSITIONS,
  .marker = 0,
  0, // number of required modules
  0, // number of defined namespaces
  1, // number of used namespaces
  2, // number of constants
  10, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  constants_table,
  variables_table,
};
