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
  var_std__key_of, // attribute
  var_std__assign, // extern
  var_std__value_of, // attribute
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
  var_typed_tuple, // extern
  var_serialization_tag_of, // extern polymorphic
  var_deserializers, // extern
  var_register_type, // extern
  var__END
};


static TAB_NUM t_func_std_types__key_value_pair___key_of[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 38_5_self
  // self $key $_value
  LOCAL(2), 0, 2, LOCAL(3), LOCAL(1),
  // -> key
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(40, 3),
  POS(41, 3),
  LOCAL(2),
  LOCAL(3)
};

static FUNCTION_INFO i_func_std_types__key_value_pair___key_of = {
  t_func_std_types__key_value_pair___key_of, NULL, 2, 2,
  {"38_5_self\000", "40_9_key\000"}
};

static TAB_NUM t_func_std_types__key_value_pair___value_of[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 45_5_self
  // self $_key $value
  LOCAL(2), 0, 2, LOCAL(1), LOCAL(3),
  // -> value
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(47, 3),
  POS(48, 3),
  LOCAL(3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_std_types__key_value_pair___value_of = {
  t_func_std_types__key_value_pair___value_of, NULL, 2, 2,
  {"47_15_value\000", "45_5_self\000"}
};

static TAB_NUM t_func_std__key_value_pair[] = {
  2, // locals
  2, // parameters
  LOCAL(1), // 52_5_key
  LOCAL(2), // 53_5_value
  // typed_tuple std_types::key_value_pair key value
  var_typed_tuple, 3, var_std_types__key_value_pair, LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(55, 3),
  LOCAL(1),
  LOCAL(2)
};

static FUNCTION_INFO i_func_std__key_value_pair = {
  t_func_std__key_value_pair, NULL, 1, 2,
  {"52_5_key\000", "53_5_value\000"}
};

static TAB_NUM t_module_entry[] = {
  0, // locals
  0, // parameters
  // register_type &deserializers std_types::key_value_pair
  var_register_type, 2, var_deserializers, var_std_types__key_value_pair, 1, var_deserializers,
  LET, 1, 0, TAIL_CALL,
  POS(59, 1)
};

static FUNCTION_INFO i_module_entry = {
  t_module_entry, NULL, 1, 0,
  {}
};

static FUNKY_CONSTANT constants_table[] = {
  {FLT_STRING_8, 14, {.str_8 = "key_value_pair"}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__key_value_pair___key_of}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std_types__key_value_pair___value_of}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_std__key_value_pair}},
  {FLT_FUNCTION, 0, {.func_info = &i_module_entry}}
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
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "assign\000std", NULL,
    {.position = POS(25, 1)}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "value_of\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN, 0, 5,
    "key_value_pair\000std_types", std_types__key_value_pair__attributes,
    {.position = POS(29, 1)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "subtype_of\000", NULL,
    {.position = POS(29, 28)}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "is_a_key_value_pair\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "object\000std_types", std_types__object__attributes,
    {.position = POS(33, 1)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "is_a_key_value_pair\000", NULL,
    {.position = POS(33, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "false\000", NULL,
    {.position = POS(33, 40)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "true\000", NULL,
    {.position = POS(34, 48)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "key_of\000", NULL,
    {.position = POS(36, 28)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "value_of\000", NULL,
    {.position = POS(43, 28)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "key_value_pair\000std", NULL,
    {.const_idx = -func_std__key_value_pair}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "typed_tuple\000", NULL,
    {.position = POS(55, 3)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "serialization_tag_of\000", NULL,
    {.position = POS(57, 28)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "deserializers\000", NULL,
    {.position = POS(59, 16)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "register_type\000", NULL,
    {.position = POS(59, 1)}
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
  .feature_flags = FEAT_POSITIONS|FEAT_FUNCTION_INFO|FEAT_INITIALIZER,
  .marker = 0,
  0, // number of required modules
  0, // number of defined namespaces
  1, // number of used namespaces
  5, // number of constants
  17, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  constants_table,
  variables_table,
};
