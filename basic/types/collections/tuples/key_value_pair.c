#include <stddef.h>
#include <stdint.h>

#include "runtime/common.h"
#include "runtime/builtins.h"
#include "runtime/fko.h"
#include "runtime/memory.h"

enum {
  str_key_value_pair = -1,
  func_std_types__key_value_pair___key_of = -2,
  func_std_types__key_value_pair___value_of = -3,
  func_std__key_value_pair = -4
};

enum {
  var__START = FIRST_VAR-1,
  var_std__key_of, // attribute with setter
  var_std__assign, // extern
  var_std__value_of, // attribute with setter
  var_std_types__key_value_pair, // extern
  var_subtype_of, // extern polymorphic
  var_std__is_a_key_value_pair, // attribute
  var_std_types__object, // extern
  var_is_a_key_value_pair, // extern polymorphic
  var_false, // extern
  var_true, // extern
  var_key_of, // extern polymorphic
  var_value_of, // extern polymorphic
  var_std__key_value_pair, // initialized
  var_new, // extern
  var_serialization_tag_of, // extern polymorphic
  var__END
};


static TAB_NUM t_func_std_types__key_value_pair___key_of[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 48_0_self
  // self $key $_value
  LOCAL(2), 0, 2, LOCAL(3), LOCAL(1),
  // -> key
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(50, 3),
  POS(51, 3)
};

static TAB_NUM t_func_std_types__key_value_pair___value_of[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 57_0_self
  // self $_key $value
  LOCAL(2), 0, 2, LOCAL(1), LOCAL(3),
  // -> value
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(59, 3),
  POS(60, 3)
};

static TAB_NUM t_func_std__key_value_pair[] = {
  2, // locals
  2, // parameters
  LOCAL(1), // 66_0_key
  LOCAL(2), // 67_0_value
  // new std_types::key_value_pair key value
  var_new, 3, var_std_types__key_value_pair, LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(69, 3)
};

static FUNKY_CONSTANT constants_table[] = {
  {FLT_STRING_8, 14, {.str_8 = "key_value_pair"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__key_value_pair___key_of}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__key_value_pair___value_of}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__key_value_pair}}
};

static ATTRIBUTE_DEFINITION std_types__key_value_pair__attributes[] = {
  {-var_subtype_of, -str_key_value_pair},
  {-var_is_a_key_value_pair, -var_true},
  {var_key_of, -func_std_types__key_value_pair___key_of},
  {var_value_of, -func_std_types__key_value_pair___value_of},
  {-var_serialization_tag_of, -str_key_value_pair}
};

static ATTRIBUTE_DEFINITION std_types__object__attributes[] = {
  {-var_is_a_key_value_pair, -var_false}
};

static FUNKY_VARIABLE variables_table[] = {
  {
    FOT_POLYMORPHIC, 0, 0,
    "key_of\000std", NULL,
    {.has_a_setter = true}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "assign\000std", NULL,
    {.position = POS(23, 1)}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "value_of\000std", NULL,
    {.has_a_setter = true}
  },
  {
    FOT_UNKNOWN, 0, 5,
    "key_value_pair\000std_types", std_types__key_value_pair__attributes,
    {.position = POS(35, 1)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "subtype_of\000", NULL,
    {.position = POS(35, 28)}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "is_a_key_value_pair\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "object\000std_types", std_types__object__attributes,
    {.position = POS(41, 1)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "is_a_key_value_pair\000", NULL,
    {.position = POS(41, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "false\000", NULL,
    {.position = POS(41, 40)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "true\000", NULL,
    {.position = POS(42, 48)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "key_of\000", NULL,
    {.position = POS(44, 28)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "value_of\000", NULL,
    {.position = POS(53, 28)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "key_value_pair\000std", NULL,
    {.const_idx = -func_std__key_value_pair}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "new\000", NULL,
    {.position = POS(69, 3)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "serialization_tag_of\000", NULL,
    {.position = POS(71, 28)}
  }
};

static FUNKY_NAMESPACE used_namespaces[] = {
  {"std", 1, 0}
};

FUNKY_MODULE module__basic__types__collections__tuples__key_value_pair = {
  "_basic__types__collections__tuples__key_value_pair", // module name
  "basic/types/collections/tuples/key_value_pair.fky", // module filename
  .major_version = 0,
  .minor_version = 0,
  .feature_flags = FEAT_POSITIONS,
  .marker = 0,
  0, // number of required modules
  0, // number of defined namespaces
  1, // number of used namespaces
  4, // number of constants
  15, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  constants_table,
  variables_table,
};
