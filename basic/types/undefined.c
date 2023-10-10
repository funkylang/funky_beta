#include <stddef.h>
#include <stdint.h>

#include "runtime/common.h"
#include "runtime/builtins.h"
#include "runtime/fko.h"
#include "runtime/memory.h"

enum {
  func_std_types__object___default_value = -1,
  func_std_types__undefined___default_value = -2,
  func_std_types__undefined___equal = -3,
  func_std_types__undefined___serialize = -4,
  str_undefined = -5,
  lambda_1 = -6,
  lambda_2 = -7
};

enum {
  var__START = FIRST_VAR-1,
  var_std__undefined, // derived
  var_std_types__undefined, // extern
  var_std__assign, // extern
  var_std__is_undefined, // attribute
  var_std__default_value, // attribute
  var_is_defined, // extern polymorphic
  var_false, // extern
  var_std_types__object, // extern
  var_is_undefined, // extern polymorphic
  var_default_value, // extern polymorphic
  var_true, // extern
  var_equal, // extern polymorphic
  var_serialize, // extern polymorphic
  var_81_0_indent, // dynamic
  var_undefined, // extern
  var_tabs_and_spaces, // extern
  var_append, // extern
  var_if, // extern
  var__END
};


static TAB_NUM t_func_std_types__object___default_value[] = {
  2, // locals
  2, // parameters
  LOCAL(2), // 51_0_self
  LOCAL(1),
  // -> self
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(54, 3)
};

static TAB_NUM t_func_std_types__undefined___default_value[] = {
  2, // locals
  2, // parameters
  LOCAL(1),
  LOCAL(2), // 65_0_default
  // -> default
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(67, 3)
};

static TAB_NUM t_func_std_types__undefined___equal[] = {
  2, // locals
  2, // parameters
  LOCAL(1),
  LOCAL(2), // 74_0_right
  // is_undefined
  var_is_undefined, 1, LOCAL(2), 1, LOCAL(1),
  // -> right.is_undefined
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(76, 12),
  POS(76, 3)
};

static TAB_NUM t_func_std_types__undefined___serialize[] = {
  1, // locals
  -2, // parameters
  MANDATORY_PARAMETER, LOCAL(1),
  var_undefined, var_81_0_indent,
  // is_defined
  var_is_defined, 1, var_81_0_indent, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1, lambda_2, TAIL_CALL,
  POS(85, 12),
  POS(84, 3)
};

static TAB_NUM t_lambda_1[] = {
  2, // locals
  0, // parameters
  // tabs_and_spaces(indent) str)
  var_tabs_and_spaces, 1, var_81_0_indent, 1, LOCAL(1),
  // append(tabs_and_spaces(indent) str)
  var_append, 2, LOCAL(1), str_undefined, 1, LOCAL(2),
  //  append(tabs_and_spaces(indent) str)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(86, 15),
  POS(86, 8),
  POS(86, 7)
};

static TAB_NUM t_lambda_2[] = {
  0, // locals
  0, // parameters
  //  str
  LET, 1, str_undefined, TAIL_CALL,
  POS(87, 7)
};

static FUNKY_CONSTANT constants_table[] = {
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__object___default_value}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__undefined___default_value}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__undefined___equal}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__undefined___serialize}},
  {FLT_STRING_8, 12, {.str_8 = "<undefined>\012"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2}}
};

static ATTRIBUTE_DEFINITION std_types__undefined__attributes[] = {
  {-var_is_defined, -var_false},
  {-var_is_undefined, -var_true},
  {var_default_value, -func_std_types__undefined___default_value},
  {var_equal, -func_std_types__undefined___equal},
  {var_serialize, -func_std_types__undefined___serialize}
};

static ATTRIBUTE_DEFINITION std_types__object__attributes[] = {
  {-var_is_undefined, -var_false},
  {var_default_value, -func_std_types__object___default_value}
};

static FUNKY_VARIABLE variables_table[] = {
  {
    FOT_DERIVED, 0, 0,
    "undefined\000std", NULL,
    {"undefined\000std_types"}
  },
  {
    FOT_UNKNOWN, 0, 5,
    "undefined\000std_types", std_types__undefined__attributes
  },
  {
    FOT_UNKNOWN, 0, 0,
    "assign\000std", NULL
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "is_undefined\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "default_value\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "is_defined\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "false\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 2,
    "object\000std_types", std_types__object__attributes
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "is_undefined\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "default_value\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "true\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "equal\000", NULL
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "serialize\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "81_0_indent\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "undefined\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "tabs_and_spaces\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "append\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if\000", NULL
  }
};

static FUNKY_NAMESPACE used_namespaces[] = {
  {"std", 1, 0}
};

FUNKY_MODULE module__basic__types__undefined = {
  "_basic__types__undefined", // module name
  "basic/types/undefined.fky", // module filename
  .major_version = 0,
  .minor_version = 0,
  .feature_flags = FEAT_POSITIONS,
  .marker = 0,
  0, // number of required modules
  0, // number of defined namespaces
  1, // number of used namespaces
  7, // number of constants
  18, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  constants_table,
  variables_table,
};
