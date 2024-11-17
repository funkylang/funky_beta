#include <stddef.h>
#include <stdint.h>

#include "runtime/common.h"
#include "runtime/builtins.h"
#include "runtime/fko.h"
#include "runtime/memory.h"

enum {
  func_std_types__true___and = -1,
  func_std_types__false___and = -2,
  func_std_types__true___or = -3,
  func_std_types__false___or = -4,
  func_std_types__true___if = -5,
  func_std_types__false___if = -6,
  func_std_types__true___if_not = -7,
  func_std_types__false___if_not = -8,
  func_std_types__true___update_if = -9,
  func_std_types__false___update_if = -10,
  func_std_types__true___update_if_not = -11,
  func_std_types__false___update_if_not = -12,
  func_std_types__true___on = -13,
  func_std_types__false___on = -14,
  func_std_types__true___on_not = -15,
  func_std_types__false___on_not = -16,
  func_std_types__true___serialize = -17,
  str_true = -18,
  lambda_1 = -19,
  lambda_2 = -20,
  func_std_types__false___serialize = -21,
  str_false = -22,
  lambda_3 = -23,
  lambda_4 = -24
};

enum {
  var__START = FIRST_VAR-1,
  var_std__is_a_boolean, // attribute
  var_std__assign, // extern
  var_std__true, // derived
  var_std_types__true, // extern
  var_std__false, // derived
  var_std_types__false, // extern
  var_std_types__object, // extern
  var_is_a_boolean, // extern polymorphic
  var_false, // extern
  var_true, // extern
  var_std__and, // attribute
  var_std__or, // attribute
  var_std__not, // attribute
  var_std__if, // attribute
  var_std__if_not, // attribute
  var_std__update_if, // attribute
  var_std__update_if_not, // attribute
  var_std__on, // attribute
  var_std__on_not, // attribute
  var_not, // extern polymorphic
  var_and, // extern polymorphic
  var_or, // extern polymorphic
  var_if, // extern polymorphic
  var_if_not, // extern polymorphic
  var_update_if, // extern polymorphic
  var_spread, // extern
  var_update_if_not, // extern polymorphic
  var_on, // extern polymorphic
  var_pass, // extern
  var_on_not, // extern polymorphic
  var_serialize, // extern polymorphic
  var_633_0_indent, // dynamic
  var_undefined, // extern
  var_is_defined, // extern
  var_tabs_and_spaces, // extern
  var_append, // extern
  var_652_0_indent, // dynamic
  var__END
};


static TAB_NUM t_func_std_types__true___and[] = {
  2, // locals
  2, // parameters
  LOCAL(1),
  LOCAL(2), // 396_0_right
  // right
  LOCAL(2), 0, TAIL_CALL,
  POS(398, 3)
};

static TAB_NUM t_func_std_types__false___and[] = {
  1, // locals
  2, // parameters
  LOCAL(1),
  LOCAL(1),
  // -> false
  LET, 1, var_false, TAIL_CALL,
  POS(413, 3)
};

static TAB_NUM t_func_std_types__true___or[] = {
  1, // locals
  2, // parameters
  LOCAL(1),
  LOCAL(1),
  // -> true
  LET, 1, var_true, TAIL_CALL,
  POS(428, 3)
};

static TAB_NUM t_func_std_types__false___or[] = {
  2, // locals
  2, // parameters
  LOCAL(1),
  LOCAL(2), // 442_0_right
  // right
  LOCAL(2), 0, TAIL_CALL,
  POS(444, 3)
};

static TAB_NUM t_func_std_types__true___if[] = {
  2, // locals
  3, // parameters
  LOCAL(1),
  LOCAL(2), // 457_0_then
  LOCAL(1),
  // then!
  LOCAL(2), 0, IO_TAIL_CALL,
  POS(460, 3)
};

static TAB_NUM t_func_std_types__false___if[] = {
  2, // locals
  3, // parameters
  LOCAL(1),
  LOCAL(1),
  LOCAL(2), // 474_0_else
  // else!
  LOCAL(2), 0, IO_TAIL_CALL,
  POS(476, 3)
};

static TAB_NUM t_func_std_types__true___if_not[] = {
  2, // locals
  3, // parameters
  LOCAL(1),
  LOCAL(1),
  LOCAL(2), // 490_0_else
  // else!
  LOCAL(2), 0, IO_TAIL_CALL,
  POS(492, 3)
};

static TAB_NUM t_func_std_types__false___if_not[] = {
  2, // locals
  3, // parameters
  LOCAL(1),
  LOCAL(2), // 505_0_then
  LOCAL(1),
  // then!
  LOCAL(2), 0, IO_TAIL_CALL,
  POS(508, 3)
};

static TAB_NUM t_func_std_types__true___update_if[] = {
  2, // locals
  -3, // parameters
  MANDATORY_PARAMETER, LOCAL(1),
  REST_PARAMETER, LOCAL(1),
  MANDATORY_PARAMETER, LOCAL(2), // 520_0_body
  // body
  LOCAL(2), 0, TAIL_CALL,
  POS(522, 3)
};

static TAB_NUM t_func_std_types__false___update_if[] = {
  2, // locals
  -3, // parameters
  MANDATORY_PARAMETER, LOCAL(1),
  REST_PARAMETER, LOCAL(2), // 533_0_values
  MANDATORY_PARAMETER, LOCAL(1),
  // spread values
  var_spread, 1, LOCAL(2), TAIL_CALL,
  POS(536, 3)
};

static TAB_NUM t_func_std_types__true___update_if_not[] = {
  2, // locals
  -3, // parameters
  MANDATORY_PARAMETER, LOCAL(1),
  REST_PARAMETER, LOCAL(2), // 547_0_values
  MANDATORY_PARAMETER, LOCAL(1),
  // spread values
  var_spread, 1, LOCAL(2), TAIL_CALL,
  POS(550, 3)
};

static TAB_NUM t_func_std_types__false___update_if_not[] = {
  2, // locals
  -3, // parameters
  MANDATORY_PARAMETER, LOCAL(1),
  REST_PARAMETER, LOCAL(1),
  MANDATORY_PARAMETER, LOCAL(2), // 562_0_body
  // body
  LOCAL(2), 0, TAIL_CALL,
  POS(564, 3)
};

static TAB_NUM t_func_std_types__true___on[] = {
  2, // locals
  2, // parameters
  LOCAL(1),
  LOCAL(2), // 577_0_action
  // action!
  LOCAL(2), 0, IO_TAIL_CALL,
  POS(579, 3)
};

static TAB_NUM t_func_std_types__false___on[] = {
  1, // locals
  2, // parameters
  LOCAL(1),
  LOCAL(1),
  // pass
  var_pass, 0, TAIL_CALL,
  POS(592, 3)
};

static TAB_NUM t_func_std_types__true___on_not[] = {
  1, // locals
  2, // parameters
  LOCAL(1),
  LOCAL(1),
  // pass
  var_pass, 0, TAIL_CALL,
  POS(605, 3)
};

static TAB_NUM t_func_std_types__false___on_not[] = {
  2, // locals
  2, // parameters
  LOCAL(1),
  LOCAL(2), // 618_0_action
  // action!
  LOCAL(2), 0, IO_TAIL_CALL,
  POS(620, 3)
};

static TAB_NUM t_func_std_types__true___serialize[] = {
  1, // locals
  -2, // parameters
  MANDATORY_PARAMETER, LOCAL(1),
  var_undefined, var_633_0_indent,
  // is_defined
  var_is_defined, 1, var_633_0_indent, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_1, lambda_2, TAIL_CALL,
  POS(637, 12),
  POS(636, 3)
};

static TAB_NUM t_lambda_1[] = {
  2, // locals
  0, // parameters
  // tabs_and_spaces(indent) str)
  var_tabs_and_spaces, 1, var_633_0_indent, 1, LOCAL(1),
  // append(tabs_and_spaces(indent) str)
  var_append, 2, LOCAL(1), str_true, 1, LOCAL(2),
  //  append(tabs_and_spaces(indent) str)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(638, 15),
  POS(638, 8),
  POS(638, 7)
};

static TAB_NUM t_lambda_2[] = {
  0, // locals
  0, // parameters
  //  str
  LET, 1, str_true, TAIL_CALL,
  POS(639, 7)
};

static TAB_NUM t_func_std_types__false___serialize[] = {
  1, // locals
  -2, // parameters
  MANDATORY_PARAMETER, LOCAL(1),
  var_undefined, var_652_0_indent,
  // is_defined
  var_is_defined, 1, var_652_0_indent, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_3, lambda_4, TAIL_CALL,
  POS(656, 12),
  POS(655, 3)
};

static TAB_NUM t_lambda_3[] = {
  2, // locals
  0, // parameters
  // tabs_and_spaces(indent) str)
  var_tabs_and_spaces, 1, var_652_0_indent, 1, LOCAL(1),
  // append(tabs_and_spaces(indent) str)
  var_append, 2, LOCAL(1), str_false, 1, LOCAL(2),
  //  append(tabs_and_spaces(indent) str)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(657, 15),
  POS(657, 8),
  POS(657, 7)
};

static TAB_NUM t_lambda_4[] = {
  0, // locals
  0, // parameters
  //  str
  LET, 1, str_false, TAIL_CALL,
  POS(658, 7)
};

static FUNKY_CONSTANT constants_table[] = {
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__true___and}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__false___and}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__true___or}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__false___or}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__true___if}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__false___if}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__true___if_not}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__false___if_not}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__true___update_if}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__false___update_if}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__true___update_if_not}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__false___update_if_not}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__true___on}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__false___on}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__true___on_not}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__false___on_not}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__true___serialize}},
  {FLT_STRING_8, 7, {.str_8 = "<true>\012"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__false___serialize}},
  {FLT_STRING_8, 8, {.str_8 = "<false>\012"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_3}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_4}}
};

static ATTRIBUTE_DEFINITION std_types__object__attributes[] = {
  {-var_is_a_boolean, -var_false}
};

static ATTRIBUTE_DEFINITION std_types__true__attributes[] = {
  {-var_is_a_boolean, -var_true},
  {-var_not, -var_false},
  {var_and, -func_std_types__true___and},
  {var_or, -func_std_types__true___or},
  {var_if, -func_std_types__true___if},
  {var_if_not, -func_std_types__true___if_not},
  {var_update_if, -func_std_types__true___update_if},
  {var_update_if_not, -func_std_types__true___update_if_not},
  {var_on, -func_std_types__true___on},
  {var_on_not, -func_std_types__true___on_not},
  {var_serialize, -func_std_types__true___serialize}
};

static ATTRIBUTE_DEFINITION std_types__false__attributes[] = {
  {-var_is_a_boolean, -var_true},
  {-var_not, -var_true},
  {var_and, -func_std_types__false___and},
  {var_or, -func_std_types__false___or},
  {var_if, -func_std_types__false___if},
  {var_if_not, -func_std_types__false___if_not},
  {var_update_if, -func_std_types__false___update_if},
  {var_update_if_not, -func_std_types__false___update_if_not},
  {var_on, -func_std_types__false___on},
  {var_on_not, -func_std_types__false___on_not},
  {var_serialize, -func_std_types__false___serialize}
};

static FUNKY_VARIABLE variables_table[] = {
  {
    FOT_POLYMORPHIC, 0, 0,
    "is_a_boolean\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "assign\000std", NULL,
    {.position = POS(28, 1)}
  },
  {
    FOT_DERIVED, 0, 0,
    "true\000std", NULL,
    {"true\000std_types"}
  },
  {
    FOT_UNKNOWN, 0, 11,
    "true\000std_types", std_types__true__attributes,
    {.position = POS(34, 12)}
  },
  {
    FOT_DERIVED, 0, 0,
    "false\000std", NULL,
    {"false\000std_types"}
  },
  {
    FOT_UNKNOWN, 0, 11,
    "false\000std_types", std_types__false__attributes,
    {.position = POS(42, 13)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "object\000std_types", std_types__object__attributes,
    {.position = POS(50, 1)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "is_a_boolean\000", NULL,
    {.position = POS(50, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "false\000", NULL,
    {.position = POS(50, 33)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "true\000", NULL,
    {.position = POS(58, 31)}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "and\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "or\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "not\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "if\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "if_not\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "update_if\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "update_if_not\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "on\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "on_not\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "not\000", NULL,
    {.position = POS(368, 18)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "and\000", NULL,
    {.position = POS(384, 18)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "or\000", NULL,
    {.position = POS(415, 18)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "if\000", NULL,
    {.position = POS(446, 18)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "if_not\000", NULL,
    {.position = POS(478, 18)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "update_if\000", NULL,
    {.position = POS(510, 18)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "spread\000", NULL,
    {.position = POS(536, 3)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "update_if_not\000", NULL,
    {.position = POS(538, 18)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "on\000", NULL,
    {.position = POS(566, 18)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "pass\000", NULL,
    {.position = POS(592, 3)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "on_not\000", NULL,
    {.position = POS(594, 18)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "serialize\000", NULL,
    {.position = POS(622, 18)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "633_0_indent\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "undefined\000", NULL,
    {.position = POS(633, 14)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_defined\000", NULL,
    {.position = POS(637, 12)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "tabs_and_spaces\000", NULL,
    {.position = POS(638, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "append\000", NULL,
    {.position = POS(638, 8)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "652_0_indent\000", NULL
  }
};

static FUNKY_NAMESPACE used_namespaces[] = {
  {"std", 1, 0}
};

FUNKY_MODULE module__basic__types__boolean = {
  "_basic__types__boolean", // module name
  "basic/types/boolean.fky", // module filename
  .major_version = 0,
  .minor_version = 0,
  .feature_flags = FEAT_POSITIONS,
  .marker = 0,
  0, // number of required modules
  0, // number of defined namespaces
  1, // number of used namespaces
  24, // number of constants
  37, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  constants_table,
  variables_table,
};
