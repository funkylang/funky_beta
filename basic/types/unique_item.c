#include <stddef.h>
#include <stdint.h>

#include "runtime/common.h"
#include "runtime/builtins.h"
#include "runtime/fko.h"
#include "runtime/memory.h"

enum {
  func_std_types__unique_item___serialize = -1,
  string_1 = -2,
  string_2 = -3,
  lambda_1 = -4,
  lambda_2 = -5
};

enum {
  var__START = FIRST_VAR-1,
  var_std__is_a_unique_item, // attribute
  var_std__assign, // extern
  var_std_types__object, // extern
  var_is_a_unique_item, // extern polymorphic
  var_false, // extern
  var_std_types__unique_item, // extern
  var_true, // extern
  var_serialize, // extern polymorphic
  var_38_5_indent, // dynamic
  var_undefined, // extern
  var_to_string, // extern
  var_40_4_str, // dynamic
  var_std__string, // extern
  var_is_defined, // extern
  var_tabs_and_spaces, // extern
  var_append, // extern
  var_if, // extern
  var__END
};


static TAB_NUM t_func_std_types__unique_item___serialize[] = {
  2, // locals
  -2, // parameters
  MANDATORY_PARAMETER, LOCAL(2), // 37_5_self
  var_undefined, var_38_5_indent,
  // to_string)>
  var_to_string, 1, LOCAL(2), 1, LOCAL(1),
  // $str "
  var_std__string, 3, string_1, LOCAL(1), string_2, 1, var_40_4_str,
  // is_defined
  var_is_defined, 1, var_38_5_indent, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1, lambda_2, TAIL_CALL,
  POS(41, 13),
  POS(40, 3),
  POS(43, 12),
  POS(42, 3)
};

static TAB_NUM t_lambda_1[] = {
  2, // locals
  0, // parameters
  // tabs_and_spaces(indent) str)
  var_tabs_and_spaces, 1, var_38_5_indent, 1, LOCAL(1),
  // append(tabs_and_spaces(indent) str)
  var_append, 2, LOCAL(1), var_40_4_str, 1, LOCAL(2),
  //  append(tabs_and_spaces(indent) str)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(44, 15),
  POS(44, 8),
  POS(44, 7)
};

static TAB_NUM t_lambda_2[] = {
  0, // locals
  0, // parameters
  //  str
  LET, 1, var_40_4_str, TAIL_CALL,
  POS(45, 7)
};

static FUNKY_CONSTANT constants_table[] = {
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__unique_item___serialize}},
  {FLT_STRING_8, 1, {.str_8 = "<"}},
  {FLT_STRING_8, 2, {.str_8 = ">\012"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2}}
};

static ATTRIBUTE_DEFINITION std_types__object__attributes[] = {
  {-var_is_a_unique_item, -var_false}
};

static ATTRIBUTE_DEFINITION std_types__unique_item__attributes[] = {
  {-var_is_a_unique_item, -var_true},
  {var_serialize, -func_std_types__unique_item___serialize}
};

static FUNKY_VARIABLE variables_table[] = {
  {
    FOT_POLYMORPHIC, 0, 0,
    "is_a_unique_item\000std", NULL,
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
    {.position = POS(27, 1)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "is_a_unique_item\000", NULL,
    {.position = POS(27, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "false\000", NULL,
    {.position = POS(27, 37)}
  },
  {
    FOT_UNKNOWN, 0, 2,
    "unique_item\000std_types", std_types__unique_item__attributes,
    {.position = POS(31, 1)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "true\000", NULL,
    {.position = POS(31, 42)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "serialize\000", NULL,
    {.position = POS(35, 25)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "38_5_indent\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "undefined\000", NULL,
    {.position = POS(38, 14)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "to_string\000", NULL,
    {.position = POS(41, 13)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "40_4_str\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "string\000std", NULL,
    {.position = POS(40, 8)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_defined\000", NULL,
    {.position = POS(43, 12)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "tabs_and_spaces\000", NULL,
    {.position = POS(44, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "append\000", NULL,
    {.position = POS(44, 8)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if\000", NULL,
    {.position = POS(42, 3)}
  }
};

static FUNKY_NAMESPACE used_namespaces[] = {
  {"std", 1, 0}
};

FUNKY_MODULE module__basic__types__unique_item = {
  "_basic__types__unique_item", // module name
  "basic/types/unique_item.fky", // module filename
  .major_version = 0,
  .minor_version = 0,
  .feature_flags = FEAT_POSITIONS,
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
